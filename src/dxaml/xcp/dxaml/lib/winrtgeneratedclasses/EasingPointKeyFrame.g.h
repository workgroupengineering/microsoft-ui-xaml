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

#include "PointKeyFrame.g.h"

#define __EasingPointKeyFrame_GUID "01503db8-fe95-4a42-b754-6c2d52c38922"

namespace DirectUI
{
    class EasingPointKeyFrame;
    class EasingFunctionBase;

    class __declspec(novtable) __declspec(uuid(__EasingPointKeyFrame_GUID)) EasingPointKeyFrame:
        public DirectUI::PointKeyFrame
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IEasingPointKeyFrame
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.EasingPointKeyFrame");

        BEGIN_INTERFACE_MAP(EasingPointKeyFrame, DirectUI::PointKeyFrame)
            INTERFACE_ENTRY(EasingPointKeyFrame, ABI::Microsoft::UI::Xaml::Media::Animation::IEasingPointKeyFrame)
        END_INTERFACE_MAP(EasingPointKeyFrame, DirectUI::PointKeyFrame)

    public:
        EasingPointKeyFrame();
        ~EasingPointKeyFrame() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::EasingPointKeyFrame;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::EasingPointKeyFrame;
        }

        // Properties.
        IFACEMETHOD(get_EasingFunction)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::Animation::IEasingFunctionBase** ppValue) override;
        IFACEMETHOD(put_EasingFunction)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::Animation::IEasingFunctionBase* pValue) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
    };
}


namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) EasingPointKeyFrameFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics
    {
        BEGIN_INTERFACE_MAP(EasingPointKeyFrameFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(EasingPointKeyFrameFactory, ABI::Microsoft::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics)
        END_INTERFACE_MAP(EasingPointKeyFrameFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_EasingFunctionProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::EasingPointKeyFrame;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
