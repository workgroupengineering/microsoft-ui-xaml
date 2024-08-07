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


#define __MarkupExtension_GUID "26e480bc-a928-43c6-9077-673514724e8d"

namespace DirectUI
{
    class MarkupExtension;

    class __declspec(novtable) __declspec(uuid(__MarkupExtension_GUID)) MarkupExtension:
        public ctl::WeakReferenceSource
        , public ABI::Microsoft::UI::Xaml::Markup::IMarkupExtension
        , public ABI::Microsoft::UI::Xaml::Markup::IMarkupExtensionOverrides
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Markup.MarkupExtension");

        BEGIN_INTERFACE_MAP(MarkupExtension, ctl::WeakReferenceSource)
            INTERFACE_ENTRY(MarkupExtension, ABI::Microsoft::UI::Xaml::Markup::IMarkupExtension)
            INTERFACE_ENTRY(MarkupExtension, ABI::Microsoft::UI::Xaml::Markup::IMarkupExtensionOverrides)
        END_INTERFACE_MAP(MarkupExtension, ctl::WeakReferenceSource)

    public:
        MarkupExtension();
        ~MarkupExtension() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::MarkupExtension;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::MarkupExtension;
        }

        // Properties.

        // Events.

        // Methods.
        IFACEMETHOD(ProvideValue)(_Outptr_ IInspectable** ppReturnValue) override;
        _Check_return_ HRESULT ProvideValueProtected(_Outptr_ IInspectable** ppReturnValue);
        IFACEMETHOD(ProvideValueWithIXamlServiceProvider)(_In_ ABI::Microsoft::UI::Xaml::IXamlServiceProvider* pServiceProvider, _Outptr_ IInspectable** ppReturnValue) override;
        _Check_return_ HRESULT ProvideValueWithIXamlServiceProviderProtected(_In_ ABI::Microsoft::UI::Xaml::IXamlServiceProvider* pServiceProvider, _Outptr_ IInspectable** ppReturnValue);


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.
         _Check_return_ HRESULT ProvideValueImpl(_Outptr_ IInspectable** ppReturnValue); 
         _Check_return_ HRESULT ProvideValueWithIXamlServiceProviderImpl(_In_ ABI::Microsoft::UI::Xaml::IXamlServiceProvider* pServiceProvider, _Outptr_ IInspectable** ppReturnValue); 

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
    class __declspec(novtable) MarkupExtensionFactory:
       public ctl::AggregableActivationFactory<DirectUI::MarkupExtension>
        , public ABI::Microsoft::UI::Xaml::Markup::IMarkupExtensionFactory
    {
        BEGIN_INTERFACE_MAP(MarkupExtensionFactory, ctl::AggregableActivationFactory<DirectUI::MarkupExtension>)
            INTERFACE_ENTRY(MarkupExtensionFactory, ABI::Microsoft::UI::Xaml::Markup::IMarkupExtensionFactory)
        END_INTERFACE_MAP(MarkupExtensionFactory, ctl::AggregableActivationFactory<DirectUI::MarkupExtension>)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Markup::IMarkupExtension** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::MarkupExtension;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
