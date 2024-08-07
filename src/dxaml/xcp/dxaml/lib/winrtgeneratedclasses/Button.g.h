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

#include "ButtonBase.g.h"

#define __Button_GUID "17182bd4-1444-4239-bca2-8b91ee62e565"

namespace DirectUI
{
    class Button;
    class FlyoutBase;

    class __declspec(novtable) ButtonGenerated:
        public DirectUI::ButtonBase
        , public ABI::Microsoft::UI::Xaml::Controls::IButton
    {
        friend class DirectUI::Button;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.Button");

        BEGIN_INTERFACE_MAP(ButtonGenerated, DirectUI::ButtonBase)
            INTERFACE_ENTRY(ButtonGenerated, ABI::Microsoft::UI::Xaml::Controls::IButton)
        END_INTERFACE_MAP(ButtonGenerated, DirectUI::ButtonBase)

    public:
        ButtonGenerated();
        ~ButtonGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::Button;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::Button;
        }

        // Properties.
        IFACEMETHOD(get_Flyout)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IFlyoutBase** ppValue) override;
        IFACEMETHOD(put_Flyout)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IFlyoutBase* pValue) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "Button_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) ButtonFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IButtonFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IButtonStatics
    {
        BEGIN_INTERFACE_MAP(ButtonFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(ButtonFactory, ABI::Microsoft::UI::Xaml::Controls::IButtonFactory)
            INTERFACE_ENTRY(ButtonFactory, ABI::Microsoft::UI::Xaml::Controls::IButtonStatics)
        END_INTERFACE_MAP(ButtonFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IButton** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_FlyoutProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::Button;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
