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

#include "SelectorAutomationPeer.g.h"
#include "IRawElementProviderSimple.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::SelectorAutomationPeerGenerated::SelectorAutomationPeerGenerated()
{
}

DirectUI::SelectorAutomationPeerGenerated::~SelectorAutomationPeerGenerated()
{
}

HRESULT DirectUI::SelectorAutomationPeerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::SelectorAutomationPeer)))
    {
        *ppObject = static_cast<DirectUI::SelectorAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::ISelectorAutomationPeer)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::ISelectorAutomationPeer*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Provider::ISelectionProvider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Provider::ISelectionProvider*>(this);
    }
    else
    {
        RRETURN(DirectUI::ItemsControlAutomationPeer::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::SelectorAutomationPeerGenerated::get_CanSelectMultiple(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<SelectorAutomationPeer*>(this)->get_CanSelectMultipleImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::SelectorAutomationPeerGenerated::get_IsSelectionRequired(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<SelectorAutomationPeer*>(this)->get_IsSelectionRequiredImpl(pValue));
Cleanup:
    RRETURN(hr);
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::SelectorAutomationPeerGenerated::GetSelection(_Out_ UINT* pReturnValueCount, _Out_writes_to_ptr_(*pReturnValueCount) ABI::Microsoft::UI::Xaml::Automation::Provider::IIRawElementProviderSimple*** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "SelectorAutomationPeer_GetSelection", 0);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    *ppReturnValue={};
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<SelectorAutomationPeer*>(this)->GetSelectionImpl(pReturnValueCount, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "SelectorAutomationPeer_GetSelection", hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::SelectorAutomationPeerFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::SelectorAutomationPeerFactory::CreateInstanceWithOwner(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::ISelector* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::ISelectorAutomationPeer** ppInstance)
{
    HRESULT hr = S_OK;
    ARG_NOTNULL(pOwner, "owner");
    ARG_VALIDRETURNPOINTER(ppInstance);
    IFC(CreateInstanceWithOwnerImpl(pOwner, pOuter, ppInner, ppInstance));
Cleanup:
    return hr;
}

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_SelectorAutomationPeer()
    {
        RRETURN(ctl::ActivationFactoryCreator<SelectorAutomationPeerFactory>::CreateActivationFactory());
    }
}
