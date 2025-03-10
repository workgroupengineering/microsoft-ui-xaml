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

#include "Control.g.h"

#define __AppBarSeparator_GUID "efd45a66-f1fa-4468-ba76-91d62f08d3d7"

namespace DirectUI
{
    class AppBarSeparator;

    class __declspec(novtable) AppBarSeparatorGenerated:
        public DirectUI::Control
        , public ABI::Microsoft::UI::Xaml::Controls::IAppBarSeparator
        , public ABI::Microsoft::UI::Xaml::Controls::ICommandBarElement
        , public ABI::Microsoft::UI::Xaml::Controls::ICommandBarOverflowElement
    {
        friend class DirectUI::AppBarSeparator;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.AppBarSeparator");

        BEGIN_INTERFACE_MAP(AppBarSeparatorGenerated, DirectUI::Control)
            INTERFACE_ENTRY(AppBarSeparatorGenerated, ABI::Microsoft::UI::Xaml::Controls::IAppBarSeparator)
            INTERFACE_ENTRY(AppBarSeparatorGenerated, ABI::Microsoft::UI::Xaml::Controls::ICommandBarElement)
            INTERFACE_ENTRY(AppBarSeparatorGenerated, ABI::Microsoft::UI::Xaml::Controls::ICommandBarOverflowElement)
        END_INTERFACE_MAP(AppBarSeparatorGenerated, DirectUI::Control)

    public:
        AppBarSeparatorGenerated();
        ~AppBarSeparatorGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::AppBarSeparator;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::AppBarSeparator;
        }

        // Properties.
        IFACEMETHOD(get_DynamicOverflowOrder)(_Out_ INT* pValue) override;
        IFACEMETHOD(put_DynamicOverflowOrder)(INT value) override;
        IFACEMETHOD(get_IsCompact)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsCompact)(BOOLEAN value) override;
        IFACEMETHOD(get_IsInOverflow)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(get_UseOverflowStyle)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_UseOverflowStyle)(BOOLEAN value) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "AppBarSeparator_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) AppBarSeparatorFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IAppBarSeparatorFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IAppBarSeparatorStatics
    {
        BEGIN_INTERFACE_MAP(AppBarSeparatorFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(AppBarSeparatorFactory, ABI::Microsoft::UI::Xaml::Controls::IAppBarSeparatorFactory)
            INTERFACE_ENTRY(AppBarSeparatorFactory, ABI::Microsoft::UI::Xaml::Controls::IAppBarSeparatorStatics)
        END_INTERFACE_MAP(AppBarSeparatorFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IAppBarSeparator** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_IsCompactProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsInOverflowProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DynamicOverflowOrderProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::AppBarSeparator;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
