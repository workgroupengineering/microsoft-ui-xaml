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

#pragma once

#include "ButtonBaseAutomationPeer.g.h"

#define __HyperlinkButtonAutomationPeer_GUID "99832b72-caf9-4614-974d-f67b147c2b52"

namespace DirectUI
{
    class HyperlinkButtonAutomationPeer;

    class __declspec(novtable) HyperlinkButtonAutomationPeerGenerated:
        public DirectUI::ButtonBaseAutomationPeer
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer
        , public ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider
    {
        friend class DirectUI::HyperlinkButtonAutomationPeer;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Automation.Peers.HyperlinkButtonAutomationPeer");

        BEGIN_INTERFACE_MAP(HyperlinkButtonAutomationPeerGenerated, DirectUI::ButtonBaseAutomationPeer)
            INTERFACE_ENTRY(HyperlinkButtonAutomationPeerGenerated, ABI::Microsoft::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer)
            INTERFACE_ENTRY(HyperlinkButtonAutomationPeerGenerated, ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider)
        END_INTERFACE_MAP(HyperlinkButtonAutomationPeerGenerated, DirectUI::ButtonBaseAutomationPeer)

    public:
        HyperlinkButtonAutomationPeerGenerated();
        ~HyperlinkButtonAutomationPeerGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::HyperlinkButtonAutomationPeer;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::HyperlinkButtonAutomationPeer;
        }

        // Properties.

        // Events.

        // Methods.
        IFACEMETHOD(Invoke)() override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "HyperlinkButtonAutomationPeer_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) HyperlinkButtonAutomationPeerFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory
    {
        BEGIN_INTERFACE_MAP(HyperlinkButtonAutomationPeerFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(HyperlinkButtonAutomationPeerFactory, ABI::Microsoft::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory)
        END_INTERFACE_MAP(HyperlinkButtonAutomationPeerFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstanceWithOwner)(_In_ ABI::Microsoft::UI::Xaml::Controls::IHyperlinkButton* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::HyperlinkButtonAutomationPeer;
        }


    private:
        _Check_return_ HRESULT CreateInstanceWithOwnerImpl(_In_ ABI::Microsoft::UI::Xaml::Controls::IHyperlinkButton* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer** ppInstance);

        // Customized static properties.

        // Customized static  methods.
    };
}
