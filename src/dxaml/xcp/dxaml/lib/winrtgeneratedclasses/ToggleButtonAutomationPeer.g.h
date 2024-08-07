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

#define __ToggleButtonAutomationPeer_GUID "f69a2dda-ef1b-42a5-814c-80c1948fe9ac"

namespace DirectUI
{
    class ToggleButtonAutomationPeer;

    class __declspec(novtable) ToggleButtonAutomationPeerGenerated:
        public DirectUI::ButtonBaseAutomationPeer
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer
        , public ABI::Microsoft::UI::Xaml::Automation::Provider::IToggleProvider
    {
        friend class DirectUI::ToggleButtonAutomationPeer;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Automation.Peers.ToggleButtonAutomationPeer");

        BEGIN_INTERFACE_MAP(ToggleButtonAutomationPeerGenerated, DirectUI::ButtonBaseAutomationPeer)
            INTERFACE_ENTRY(ToggleButtonAutomationPeerGenerated, ABI::Microsoft::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer)
            INTERFACE_ENTRY(ToggleButtonAutomationPeerGenerated, ABI::Microsoft::UI::Xaml::Automation::Provider::IToggleProvider)
        END_INTERFACE_MAP(ToggleButtonAutomationPeerGenerated, DirectUI::ButtonBaseAutomationPeer)

    public:
        ToggleButtonAutomationPeerGenerated();
        ~ToggleButtonAutomationPeerGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ToggleButtonAutomationPeer;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::ToggleButtonAutomationPeer;
        }

        // Properties.
        IFACEMETHOD(get_ToggleState)(_Out_ ABI::Microsoft::UI::Xaml::Automation::ToggleState* pValue) override;

        // Events.

        // Methods.
        IFACEMETHOD(Toggle)() override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "ToggleButtonAutomationPeer_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) ToggleButtonAutomationPeerFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory
    {
        BEGIN_INTERFACE_MAP(ToggleButtonAutomationPeerFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(ToggleButtonAutomationPeerFactory, ABI::Microsoft::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory)
        END_INTERFACE_MAP(ToggleButtonAutomationPeerFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstanceWithOwner)(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IToggleButton* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ToggleButtonAutomationPeer;
        }


    private:
        _Check_return_ HRESULT CreateInstanceWithOwnerImpl(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IToggleButton* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer** ppInstance);

        // Customized static properties.

        // Customized static  methods.
    };
}
