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

#define __RepeatButtonAutomationPeer_GUID "c4d1f836-fe97-4225-8611-5f222893263c"

namespace DirectUI
{
    class RepeatButtonAutomationPeer;

    class __declspec(novtable) RepeatButtonAutomationPeerGenerated:
        public DirectUI::ButtonBaseAutomationPeer
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer
        , public ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider
    {
        friend class DirectUI::RepeatButtonAutomationPeer;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Automation.Peers.RepeatButtonAutomationPeer");

        BEGIN_INTERFACE_MAP(RepeatButtonAutomationPeerGenerated, DirectUI::ButtonBaseAutomationPeer)
            INTERFACE_ENTRY(RepeatButtonAutomationPeerGenerated, ABI::Microsoft::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer)
            INTERFACE_ENTRY(RepeatButtonAutomationPeerGenerated, ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider)
        END_INTERFACE_MAP(RepeatButtonAutomationPeerGenerated, DirectUI::ButtonBaseAutomationPeer)

    public:
        RepeatButtonAutomationPeerGenerated();
        ~RepeatButtonAutomationPeerGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::RepeatButtonAutomationPeer;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::RepeatButtonAutomationPeer;
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

#include "RepeatButtonAutomationPeer_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) RepeatButtonAutomationPeerFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory
    {
        BEGIN_INTERFACE_MAP(RepeatButtonAutomationPeerFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(RepeatButtonAutomationPeerFactory, ABI::Microsoft::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory)
        END_INTERFACE_MAP(RepeatButtonAutomationPeerFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstanceWithOwner)(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IRepeatButton* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::RepeatButtonAutomationPeer;
        }


    private:
        _Check_return_ HRESULT CreateInstanceWithOwnerImpl(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IRepeatButton* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer** ppInstance);

        // Customized static properties.

        // Customized static  methods.
    };
}
