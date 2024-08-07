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

#include "DynamicTimeline.g.h"

#define __PopOutThemeAnimation_GUID "00407cea-f74e-4dc4-876e-26f59a230b33"

namespace DirectUI
{
    class PopOutThemeAnimation;

    class __declspec(novtable) PopOutThemeAnimationGenerated:
        public DirectUI::DynamicTimeline
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IPopOutThemeAnimation
    {
        friend class DirectUI::PopOutThemeAnimation;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.PopOutThemeAnimation");

        BEGIN_INTERFACE_MAP(PopOutThemeAnimationGenerated, DirectUI::DynamicTimeline)
            INTERFACE_ENTRY(PopOutThemeAnimationGenerated, ABI::Microsoft::UI::Xaml::Media::Animation::IPopOutThemeAnimation)
        END_INTERFACE_MAP(PopOutThemeAnimationGenerated, DirectUI::DynamicTimeline)

    public:
        PopOutThemeAnimationGenerated();
        ~PopOutThemeAnimationGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::PopOutThemeAnimation;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::PopOutThemeAnimation;
        }

        // Properties.
        IFACEMETHOD(get_TargetName)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(put_TargetName)(_In_opt_ HSTRING value) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "PopOutThemeAnimation_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) PopOutThemeAnimationFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics
    {
        BEGIN_INTERFACE_MAP(PopOutThemeAnimationFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(PopOutThemeAnimationFactory, ABI::Microsoft::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics)
        END_INTERFACE_MAP(PopOutThemeAnimationFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_TargetNameProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::PopOutThemeAnimation;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
