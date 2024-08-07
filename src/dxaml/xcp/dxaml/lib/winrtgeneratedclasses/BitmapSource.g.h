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

#include "ImageSource.g.h"

#define __BitmapSource_GUID "7993a96a-3e53-4e8f-9e0d-2913a5ef38fe"

namespace DirectUI
{
    class BitmapSource;

    class __declspec(novtable) BitmapSourceGenerated:
        public DirectUI::ImageSource
        , public ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapSource
    {
        friend class DirectUI::BitmapSource;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Imaging.BitmapSource");

        BEGIN_INTERFACE_MAP(BitmapSourceGenerated, DirectUI::ImageSource)
            INTERFACE_ENTRY(BitmapSourceGenerated, ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapSource)
        END_INTERFACE_MAP(BitmapSourceGenerated, DirectUI::ImageSource)

    public:
        BitmapSourceGenerated();
        ~BitmapSourceGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::BitmapSource;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::BitmapSource;
        }

        // Properties.
        IFACEMETHOD(get_PixelHeight)(_Out_ INT* pValue) override;
        IFACEMETHOD(get_PixelWidth)(_Out_ INT* pValue) override;

        // Events.

        // Methods.
        IFACEMETHOD(SetSource)(_In_ ABI::Windows::Storage::Streams::IRandomAccessStream* pStreamSource) override;
        IFACEMETHOD(SetSourceAsync)(_In_ ABI::Windows::Storage::Streams::IRandomAccessStream* pStreamSource, _Outptr_ ABI::Windows::Foundation::IAsyncAction** ppReturnValue) override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "BitmapSource_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) BitmapSourceFactory:
       public ctl::BetterAggregableAbstractCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapSourceFactory
        , public ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapSourceStatics
    {
        BEGIN_INTERFACE_MAP(BitmapSourceFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)
            INTERFACE_ENTRY(BitmapSourceFactory, ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapSourceFactory)
            INTERFACE_ENTRY(BitmapSourceFactory, ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapSourceStatics)
        END_INTERFACE_MAP(BitmapSourceFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Media::Imaging::IBitmapSource** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_PixelWidthProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_PixelHeightProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::BitmapSource;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
