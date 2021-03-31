#include "NetUX.h"
#include <wrl.h>
#include <wrl\module.h>

using namespace Microsoft::WRL;

#pragma comment(lib, "runtimeobject")

namespace NetUX
{
    [uuid("86006919-CDF4-4A3B-AD03-9C7A8AF7125B")] class NetUXCtrlImpl : public RuntimeClass<INetUXCtrl>
    {
        InspectableClass(RuntimeClass_NetUX_NetUXCtrl, BaseTrust);

    public:
        NetUXCtrlImpl() {}

        IFACEMETHODIMP Show()
        {
            OutputDebugStringW(L"Bollocks!");
            return S_OK;
        }
    };
    ActivatableClass(NetUXCtrlImpl);
}

STDAPI DllGetActivationFactory(HSTRING activatableClassId, IActivationFactory **factory)
{
    return Module<ModuleType::InProc>::GetModule().GetActivationFactory(activatableClassId, factory);
}

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, void **ppv)
{
    *ppv = nullptr;
    return Module<ModuleType::InProc>::GetModule().GetClassObject(rclsid, riid, ppv);
}

STDAPI DllCanUnloadNow()
{
    return (Module<ModuleType::InProc>::GetModule().GetObjectCount() == 0) ? S_OK : S_FALSE;
}

STDAPI_(bool)
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID)
{
    switch (dwReason)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hInstance);
        break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

STDAPI_(void)
DllAddRef()
{
    Module<ModuleType::InProc>::GetModule().IncrementObjectCount();
}

STDAPI_(void)
DllRelease()
{
    Module<ModuleType::InProc>::GetModule().DecrementObjectCount();
}
