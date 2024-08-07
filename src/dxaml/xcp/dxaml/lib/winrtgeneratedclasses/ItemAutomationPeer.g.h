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

#include "AutomationPeer.g.h"

#define __ItemAutomationPeer_GUID "6ab81293-c043-4a99-8320-5dbcc9e0538b"

namespace DirectUI
{
    class ItemAutomationPeer;
    class ItemsControlAutomationPeer;

    class __declspec(novtable) ItemAutomationPeerGenerated:
        public DirectUI::AutomationPeer
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IItemAutomationPeer
        , public ABI::Microsoft::UI::Xaml::Automation::Provider::IVirtualizedItemProvider
    {
        friend class DirectUI::ItemAutomationPeer;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Automation.Peers.ItemAutomationPeer");

        BEGIN_INTERFACE_MAP(ItemAutomationPeerGenerated, DirectUI::AutomationPeer)
            INTERFACE_ENTRY(ItemAutomationPeerGenerated, ABI::Microsoft::UI::Xaml::Automation::Peers::IItemAutomationPeer)
            INTERFACE_ENTRY(ItemAutomationPeerGenerated, ABI::Microsoft::UI::Xaml::Automation::Provider::IVirtualizedItemProvider)
        END_INTERFACE_MAP(ItemAutomationPeerGenerated, DirectUI::AutomationPeer)

    public:
        ItemAutomationPeerGenerated();
        ~ItemAutomationPeerGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ItemAutomationPeer;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::ItemAutomationPeer;
        }

        // Properties.
        IFACEMETHOD(get_Item)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(get_ItemsControlAutomationPeer)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer** ppValue) override;

        // Events.

        // Methods.
        IFACEMETHOD(Realize)() override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "ItemAutomationPeer_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) ItemAutomationPeerFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory
    {
        BEGIN_INTERFACE_MAP(ItemAutomationPeerFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(ItemAutomationPeerFactory, ABI::Microsoft::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory)
        END_INTERFACE_MAP(ItemAutomationPeerFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstanceWithParentAndItem)(_In_ IInspectable* pItem, _In_ ABI::Microsoft::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer* pParent, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IItemAutomationPeer** ppInstance);

        // Static properties.

        // Dependency properties.
        
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ItemAutomationPeer;
        }


    private:
        _Check_return_ HRESULT CreateInstanceWithParentAndItemImpl(_In_ IInspectable* pItem, _In_ ABI::Microsoft::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer* pParent, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IItemAutomationPeer** ppInstance);

        // Customized static properties.

        // Customized static  methods.
    };
}
