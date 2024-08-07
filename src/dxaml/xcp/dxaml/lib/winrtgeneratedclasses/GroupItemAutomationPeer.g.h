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

#include "FrameworkElementAutomationPeer.g.h"

#define __GroupItemAutomationPeer_GUID "00d3e6be-7169-49ff-9a85-21c2165501f1"

namespace DirectUI
{
    class GroupItemAutomationPeer;

    class __declspec(novtable) GroupItemAutomationPeerGenerated:
        public DirectUI::FrameworkElementAutomationPeer
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer
    {
        friend class DirectUI::GroupItemAutomationPeer;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Automation.Peers.GroupItemAutomationPeer");

        BEGIN_INTERFACE_MAP(GroupItemAutomationPeerGenerated, DirectUI::FrameworkElementAutomationPeer)
            INTERFACE_ENTRY(GroupItemAutomationPeerGenerated, ABI::Microsoft::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer)
        END_INTERFACE_MAP(GroupItemAutomationPeerGenerated, DirectUI::FrameworkElementAutomationPeer)

    public:
        GroupItemAutomationPeerGenerated();
        ~GroupItemAutomationPeerGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::GroupItemAutomationPeer;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::GroupItemAutomationPeer;
        }

        // Properties.

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "GroupItemAutomationPeer_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) GroupItemAutomationPeerFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory
    {
        BEGIN_INTERFACE_MAP(GroupItemAutomationPeerFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(GroupItemAutomationPeerFactory, ABI::Microsoft::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory)
        END_INTERFACE_MAP(GroupItemAutomationPeerFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstanceWithOwner)(_In_ ABI::Microsoft::UI::Xaml::Controls::IGroupItem* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::GroupItemAutomationPeer;
        }


    private:
        _Check_return_ HRESULT CreateInstanceWithOwnerImpl(_In_ ABI::Microsoft::UI::Xaml::Controls::IGroupItem* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer** ppInstance);

        // Customized static properties.

        // Customized static  methods.
    };
}
