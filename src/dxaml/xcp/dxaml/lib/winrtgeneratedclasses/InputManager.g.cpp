// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//------------------------------------------------------------------------
//
//  Abstract:
//
//      XAML types.
//      NOTE: This file was generated by a tool.
//
//------------------------------------------------------------------------

#include "InputManager.g.h"
#include "XamlTelemetry.h"


HRESULT DirectUI::InputManagerFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IInputManagerStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IInputManagerStatics*>(this);
    }
    else
    {
        RRETURN(ctl::AbstractActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.
IFACEMETHODIMP DirectUI::InputManagerFactory::GetLastInputDeviceType(_Out_ ABI::Microsoft::UI::Xaml::Input::LastInputDeviceType* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "InputManager_GetLastInputDeviceType", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    *pResult={};
    IFC(CheckActivationAllowed());
    IFC(GetLastInputDeviceTypeImpl(pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "InputManager_GetLastInputDeviceType", hr);
    }
    RRETURN(hr);
}

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_InputManager()
    {
        RRETURN(ctl::ActivationFactoryCreator<InputManagerFactory>::CreateActivationFactory());
    }
}
