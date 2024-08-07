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


#define __FrameworkTemplate_GUID "6d5cf429-6dee-4cd6-8ca3-8c4dd694ff21"

namespace DirectUI
{
    class FrameworkTemplate;
    class TemplateContent;

    class __declspec(novtable) __declspec(uuid(__FrameworkTemplate_GUID)) FrameworkTemplate:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::IFrameworkTemplate
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.FrameworkTemplate");

        BEGIN_INTERFACE_MAP(FrameworkTemplate, DirectUI::DependencyObject)
            INTERFACE_ENTRY(FrameworkTemplate, ABI::Microsoft::UI::Xaml::IFrameworkTemplate)
        END_INTERFACE_MAP(FrameworkTemplate, DirectUI::DependencyObject)

    public:
        FrameworkTemplate();
        ~FrameworkTemplate() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::FrameworkTemplate;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::FrameworkTemplate;
        }

        // Properties.
        _Check_return_ HRESULT get_EventRoot(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppValue);
        _Check_return_ HRESULT put_EventRoot(_In_opt_ ABI::Microsoft::UI::Xaml::IDependencyObject* pValue);
        _Check_return_ HRESULT get_Template(_Outptr_result_maybenull_ DirectUI::TemplateContent** ppValue);
        _Check_return_ HRESULT put_Template(_In_opt_ DirectUI::TemplateContent* pValue);

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
        TrackerPtr<ABI::Microsoft::UI::Xaml::IDependencyObject> m_pEventRoot;
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
    class __declspec(novtable) FrameworkTemplateFactory:
       public ctl::BetterAggregableAbstractCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::IFrameworkTemplateFactory
    {
        BEGIN_INTERFACE_MAP(FrameworkTemplateFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)
            INTERFACE_ENTRY(FrameworkTemplateFactory, ABI::Microsoft::UI::Xaml::IFrameworkTemplateFactory)
        END_INTERFACE_MAP(FrameworkTemplateFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IFrameworkTemplate** ppInstance);

        // Static properties.

        // Dependency properties.
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::FrameworkTemplate;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
