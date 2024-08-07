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

#include "SelectorItem.g.h"

#define __FlipViewItem_GUID "7e6bb3ef-9561-4d87-a17c-b1b4cc6a8be0"

namespace DirectUI
{
    class FlipViewItem;

    class __declspec(novtable) FlipViewItemGenerated:
        public DirectUI::SelectorItem
        , public ABI::Microsoft::UI::Xaml::Controls::IFlipViewItem
    {
        friend class DirectUI::FlipViewItem;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.FlipViewItem");

        BEGIN_INTERFACE_MAP(FlipViewItemGenerated, DirectUI::SelectorItem)
            INTERFACE_ENTRY(FlipViewItemGenerated, ABI::Microsoft::UI::Xaml::Controls::IFlipViewItem)
        END_INTERFACE_MAP(FlipViewItemGenerated, DirectUI::SelectorItem)

    public:
        FlipViewItemGenerated();
        ~FlipViewItemGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::FlipViewItem;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::FlipViewItem;
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

#include "FlipViewItem_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) FlipViewItemFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IFlipViewItemFactory
    {
        BEGIN_INTERFACE_MAP(FlipViewItemFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(FlipViewItemFactory, ABI::Microsoft::UI::Xaml::Controls::IFlipViewItemFactory)
        END_INTERFACE_MAP(FlipViewItemFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IFlipViewItem** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::FlipViewItem;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
