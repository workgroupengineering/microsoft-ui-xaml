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

#include "SeekSliderAutomationPeer.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::SeekSliderAutomationPeerGenerated::SeekSliderAutomationPeerGenerated()
{
}

DirectUI::SeekSliderAutomationPeerGenerated::~SeekSliderAutomationPeerGenerated()
{
}

HRESULT DirectUI::SeekSliderAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::SeekSliderAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::SeekSliderAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::IValueProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::IValueProvider*>(this);
    }
    else
    {
        RRETURN(DirectUI::SliderAutomationPeer::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::SeekSliderAutomationPeerGenerated::get_IsReadOnly(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<SeekSliderAutomationPeer*>(this)->get_IsReadOnlyImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::SeekSliderAutomationPeerGenerated::get_Value(_Out_ HSTRING* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<SeekSliderAutomationPeer*>(this)->get_ValueImpl(pValue));
Cleanup:
    RRETURN(hr);
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::SeekSliderAutomationPeerGenerated::SetValue(_In_ HSTRING value)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "SeekSliderAutomationPeer_SetValue", 0);
    }
    ARG_NOTNULL(value, "value");
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<SeekSliderAutomationPeer*>(this)->SetValueImpl(value));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "SeekSliderAutomationPeer_SetValue", hr);
    }
    RRETURN(hr);
}


namespace DirectUI
{
}
