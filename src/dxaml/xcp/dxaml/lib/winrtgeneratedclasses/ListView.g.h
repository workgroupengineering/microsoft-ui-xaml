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

#include "ListViewBase.g.h"

#define __ListView_GUID "3edbb9c1-9a2e-45bc-96df-5591b1e1d689"

namespace DirectUI
{
    class ListView;

    class __declspec(novtable) ListViewGenerated:
        public DirectUI::ListViewBase
        , public ABI::Microsoft::UI::Xaml::Controls::IListView
    {
        friend class DirectUI::ListView;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.ListView");

        BEGIN_INTERFACE_MAP(ListViewGenerated, DirectUI::ListViewBase)
            INTERFACE_ENTRY(ListViewGenerated, ABI::Microsoft::UI::Xaml::Controls::IListView)
        END_INTERFACE_MAP(ListViewGenerated, DirectUI::ListViewBase)

    public:
        ListViewGenerated();
        ~ListViewGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ListView;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::ListView;
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

#include "ListView_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) ListViewFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IListViewFactory
    {
        BEGIN_INTERFACE_MAP(ListViewFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(ListViewFactory, ABI::Microsoft::UI::Xaml::Controls::IListViewFactory)
        END_INTERFACE_MAP(ListViewFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IListView** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ListView;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
