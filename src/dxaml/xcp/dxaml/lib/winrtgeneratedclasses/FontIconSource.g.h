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

#define __FontIconSource_GUID "ad011974-3694-42b5-93a4-a83b5c73120c"

#pragma region forwarders
namespace ctl
{
    template<typename impl_type>
    class interface_forwarder< ABI::Microsoft::UI::Xaml::Controls::IFontIconSource, impl_type> final
        : public ctl::iinspectable_forwarder_base< ABI::Microsoft::UI::Xaml::Controls::IFontIconSource, impl_type>
    {
        impl_type* This() { return this->This_helper<impl_type>(); }
        IFACEMETHOD(get_FontFamily)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IFontFamily** ppValue) override { return This()->get_FontFamily(ppValue); }
        IFACEMETHOD(put_FontFamily)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IFontFamily* pValue) override { return This()->put_FontFamily(pValue); }
        IFACEMETHOD(get_FontSize)(_Out_ DOUBLE* pValue) override { return This()->get_FontSize(pValue); }
        IFACEMETHOD(put_FontSize)(_In_ DOUBLE value) override { return This()->put_FontSize(value); }
        IFACEMETHOD(get_FontStyle)(_Out_ ABI::Windows::UI::Text::FontStyle* pValue) override { return This()->get_FontStyle(pValue); }
        IFACEMETHOD(put_FontStyle)(_In_ ABI::Windows::UI::Text::FontStyle value) override { return This()->put_FontStyle(value); }
        IFACEMETHOD(get_FontWeight)(_Out_ ABI::Windows::UI::Text::FontWeight* pValue) override { return This()->get_FontWeight(pValue); }
        IFACEMETHOD(put_FontWeight)(_In_ ABI::Windows::UI::Text::FontWeight value) override { return This()->put_FontWeight(value); }
        IFACEMETHOD(get_Glyph)(_Out_ HSTRING* pValue) override { return This()->get_Glyph(pValue); }
        IFACEMETHOD(put_Glyph)(_In_opt_ HSTRING value) override { return This()->put_Glyph(value); }
        IFACEMETHOD(get_IsTextScaleFactorEnabled)(_Out_ BOOLEAN* pValue) override { return This()->get_IsTextScaleFactorEnabled(pValue); }
        IFACEMETHOD(put_IsTextScaleFactorEnabled)(_In_ BOOLEAN value) override { return This()->put_IsTextScaleFactorEnabled(value); }
        IFACEMETHOD(get_MirroredWhenRightToLeft)(_Out_ BOOLEAN* pValue) override { return This()->get_MirroredWhenRightToLeft(pValue); }
        IFACEMETHOD(put_MirroredWhenRightToLeft)(_In_ BOOLEAN value) override { return This()->put_MirroredWhenRightToLeft(value); }
    };
}
#pragma endregion

namespace DirectUI
{
    class FontIconSource;
    class FontFamily;

    class __declspec(novtable) FontIconSourceGenerated:
        public DirectUI::IconSource
        , public ctl::forwarder_holder< ABI::Microsoft::UI::Xaml::Controls::IFontIconSource, FontIconSourceGenerated >
    {
        friend class DirectUI::FontIconSource;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.FontIconSource");

        BEGIN_INTERFACE_MAP(FontIconSourceGenerated, DirectUI::IconSource)
            INTERFACE_ENTRY(FontIconSourceGenerated, ABI::Microsoft::UI::Xaml::Controls::IFontIconSource)
        END_INTERFACE_MAP(FontIconSourceGenerated, DirectUI::IconSource)

    public:
        FontIconSourceGenerated();
        ~FontIconSourceGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::FontIconSource;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::FontIconSource;
        }

        // Properties.
        _Check_return_ HRESULT STDMETHODCALLTYPE get_FontFamily(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IFontFamily** ppValue);
        _Check_return_ HRESULT STDMETHODCALLTYPE put_FontFamily(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IFontFamily* pValue);
        _Check_return_ HRESULT STDMETHODCALLTYPE get_FontSize(_Out_ DOUBLE* pValue);
        _Check_return_ HRESULT STDMETHODCALLTYPE put_FontSize(_In_ DOUBLE value);
        _Check_return_ HRESULT STDMETHODCALLTYPE get_FontStyle(_Out_ ABI::Windows::UI::Text::FontStyle* pValue);
        _Check_return_ HRESULT STDMETHODCALLTYPE put_FontStyle(_In_ ABI::Windows::UI::Text::FontStyle value);
        _Check_return_ HRESULT STDMETHODCALLTYPE get_FontWeight(_Out_ ABI::Windows::UI::Text::FontWeight* pValue);
        _Check_return_ HRESULT STDMETHODCALLTYPE put_FontWeight(_In_ ABI::Windows::UI::Text::FontWeight value);
        _Check_return_ HRESULT STDMETHODCALLTYPE get_Glyph(_Out_ HSTRING* pValue);
        _Check_return_ HRESULT STDMETHODCALLTYPE put_Glyph(_In_opt_ HSTRING value);
        _Check_return_ HRESULT STDMETHODCALLTYPE get_IsTextScaleFactorEnabled(_Out_ BOOLEAN* pValue);
        _Check_return_ HRESULT STDMETHODCALLTYPE put_IsTextScaleFactorEnabled(_In_ BOOLEAN value);
        _Check_return_ HRESULT STDMETHODCALLTYPE get_MirroredWhenRightToLeft(_Out_ BOOLEAN* pValue);
        _Check_return_ HRESULT STDMETHODCALLTYPE put_MirroredWhenRightToLeft(_In_ BOOLEAN value);

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "FontIconSource_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) FontIconSourceFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IFontIconSourceFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IFontIconSourceStatics
    {
        BEGIN_INTERFACE_MAP(FontIconSourceFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(FontIconSourceFactory, ABI::Microsoft::UI::Xaml::Controls::IFontIconSourceFactory)
            INTERFACE_ENTRY(FontIconSourceFactory, ABI::Microsoft::UI::Xaml::Controls::IFontIconSourceStatics)
        END_INTERFACE_MAP(FontIconSourceFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IFontIconSource** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_GlyphProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_FontSizeProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_FontFamilyProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_FontWeightProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_FontStyleProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsTextScaleFactorEnabledProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_MirroredWhenRightToLeftProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::FontIconSource;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}