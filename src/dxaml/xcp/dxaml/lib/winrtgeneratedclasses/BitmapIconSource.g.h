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

#include "IconSource.g.h"

#define __BitmapIconSource_GUID "ce64e57d-7cec-4f6c-b812-6d74385d29dc"

#pragma region forwarders
namespace ctl
{
    template<typename impl_type>
    class interface_forwarder< ABI::Microsoft::UI::Xaml::Controls::IBitmapIconSource, impl_type> final
        : public ctl::iinspectable_forwarder_base< ABI::Microsoft::UI::Xaml::Controls::IBitmapIconSource, impl_type>
    {
        impl_type* This() { return this->This_helper<impl_type>(); }
        IFACEMETHOD(get_ShowAsMonochrome)(_Out_ BOOLEAN* pValue) override { return This()->get_ShowAsMonochrome(pValue); }
        IFACEMETHOD(put_ShowAsMonochrome)(BOOLEAN value) override { return This()->put_ShowAsMonochrome(value); }
        IFACEMETHOD(get_UriSource)(_Outptr_result_maybenull_ ABI::Windows::Foundation::IUriRuntimeClass** ppValue) override { return This()->get_UriSource(ppValue); }
        IFACEMETHOD(put_UriSource)(_In_opt_ ABI::Windows::Foundation::IUriRuntimeClass* pValue) override { return This()->put_UriSource(pValue); }
    };
}
#pragma endregion

namespace DirectUI
{
    class BitmapIconSource;

    class __declspec(novtable) BitmapIconSourceGenerated:
        public DirectUI::IconSource
        , public ctl::forwarder_holder< ABI::Microsoft::UI::Xaml::Controls::IBitmapIconSource, BitmapIconSourceGenerated >
    {
        friend class DirectUI::BitmapIconSource;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.BitmapIconSource");

        BEGIN_INTERFACE_MAP(BitmapIconSourceGenerated, DirectUI::IconSource)
            INTERFACE_ENTRY(BitmapIconSourceGenerated, ABI::Microsoft::UI::Xaml::Controls::IBitmapIconSource)
        END_INTERFACE_MAP(BitmapIconSourceGenerated, DirectUI::IconSource)

    public:
        BitmapIconSourceGenerated();
        ~BitmapIconSourceGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::BitmapIconSource;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::BitmapIconSource;
        }

        // Properties.
        _Check_return_ HRESULT STDMETHODCALLTYPE get_ShowAsMonochrome(_Out_ BOOLEAN* pValue);
        _Check_return_ HRESULT STDMETHODCALLTYPE put_ShowAsMonochrome(BOOLEAN value);
        _Check_return_ HRESULT STDMETHODCALLTYPE get_UriSource(_Outptr_result_maybenull_ ABI::Windows::Foundation::IUriRuntimeClass** ppValue);
        _Check_return_ HRESULT STDMETHODCALLTYPE put_UriSource(_In_opt_ ABI::Windows::Foundation::IUriRuntimeClass* pValue);

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "BitmapIconSource_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) BitmapIconSourceFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IBitmapIconSourceFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IBitmapIconSourceStatics
    {
        BEGIN_INTERFACE_MAP(BitmapIconSourceFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(BitmapIconSourceFactory, ABI::Microsoft::UI::Xaml::Controls::IBitmapIconSourceFactory)
            INTERFACE_ENTRY(BitmapIconSourceFactory, ABI::Microsoft::UI::Xaml::Controls::IBitmapIconSourceStatics)
        END_INTERFACE_MAP(BitmapIconSourceFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IBitmapIconSource** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_UriSourceProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ShowAsMonochromeProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::BitmapIconSource;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
