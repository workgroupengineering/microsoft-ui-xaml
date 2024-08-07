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


#define __VisualState_GUID "c3a4e1cb-ce7b-41ea-9ffd-2fb355cbe8e2"

namespace DirectUI
{
    class VisualState;
    class SetterBaseCollection;
    class Storyboard;
    class TemplateContent;

    class __declspec(novtable) __declspec(uuid(__VisualState_GUID)) VisualState:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::IVisualState
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.VisualState");

        BEGIN_INTERFACE_MAP(VisualState, DirectUI::DependencyObject)
            INTERFACE_ENTRY(VisualState, ABI::Microsoft::UI::Xaml::IVisualState)
        END_INTERFACE_MAP(VisualState, DirectUI::DependencyObject)

    public:
        VisualState();
        ~VisualState() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::VisualState;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::VisualState;
        }

        // Properties.
        _Check_return_ HRESULT get___DeferredSetters(_Outptr_result_maybenull_ DirectUI::TemplateContent** ppValue);
        _Check_return_ HRESULT put___DeferredSetters(_In_opt_ DirectUI::TemplateContent* pValue);
        _Check_return_ HRESULT get___DeferredStoryboard(_Outptr_result_maybenull_ DirectUI::TemplateContent** ppValue);
        _Check_return_ HRESULT put___DeferredStoryboard(_In_opt_ DirectUI::TemplateContent* pValue);
        IFACEMETHOD(get_Name)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(get_Setters)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::ISetterBaseCollection** ppValue) override;
        IFACEMETHOD(get_StateTriggers)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::StateTriggerBase*>** ppValue) override;
        IFACEMETHOD(get_Storyboard)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::Animation::IStoryboard** ppValue) override;
        IFACEMETHOD(put_Storyboard)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::Animation::IStoryboard* pValue) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.
         _Check_return_ HRESULT get_NameImpl(_Out_ HSTRING* pValue); 

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
    class __declspec(novtable) VisualStateFactory:
       public ctl::BetterCoreObjectActivationFactory
    {

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        
        
        
        
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::VisualState;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
