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


#define __ElementFactoryGetArgs_GUID "0b29bb5f-eadf-4f48-a1ac-9d73de7b4774"

namespace DirectUI
{
    class ElementFactoryGetArgs;
    class UIElement;

    class __declspec(novtable) __declspec(uuid(__ElementFactoryGetArgs_GUID)) ElementFactoryGetArgs:
        public ctl::WeakReferenceSource
        , public ABI::Microsoft::UI::Xaml::IElementFactoryGetArgs
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.ElementFactoryGetArgs");

        BEGIN_INTERFACE_MAP(ElementFactoryGetArgs, ctl::WeakReferenceSource)
            INTERFACE_ENTRY(ElementFactoryGetArgs, ABI::Microsoft::UI::Xaml::IElementFactoryGetArgs)
        END_INTERFACE_MAP(ElementFactoryGetArgs, ctl::WeakReferenceSource)

    public:
        ElementFactoryGetArgs();
        ~ElementFactoryGetArgs() override;

        // Event source typedefs.


        // Properties.
        IFACEMETHOD(get_Data)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_Data)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_Parent)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue) override;
        IFACEMETHOD(put_Parent)(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pValue) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
        TrackerPtr<IInspectable> m_pData;
        TrackerPtr<ABI::Microsoft::UI::Xaml::IUIElement> m_pParent;
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
    class __declspec(novtable) ElementFactoryGetArgsFactory:
       public ctl::AggregableActivationFactory<DirectUI::ElementFactoryGetArgs>
        , public ABI::Microsoft::UI::Xaml::IElementFactoryGetArgsFactory
    {
        BEGIN_INTERFACE_MAP(ElementFactoryGetArgsFactory, ctl::AggregableActivationFactory<DirectUI::ElementFactoryGetArgs>)
            INTERFACE_ENTRY(ElementFactoryGetArgsFactory, ABI::Microsoft::UI::Xaml::IElementFactoryGetArgsFactory)
        END_INTERFACE_MAP(ElementFactoryGetArgsFactory, ctl::AggregableActivationFactory<DirectUI::ElementFactoryGetArgs>)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IElementFactoryGetArgs** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;



    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
