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

#include "Control.g.h"

#define __Hub_GUID "12d34ed0-404d-4fd8-a026-156a08a5cfa9"

namespace DirectUI
{
    class Hub;
    class DataTemplate;
    class HubSection;
    class SemanticZoom;
    class SemanticZoomLocation;

    class __declspec(novtable) HubGenerated:
        public DirectUI::Control
        , public ABI::Microsoft::UI::Xaml::Controls::IHub
        , public ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomInformation
    {
        friend class DirectUI::Hub;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.Hub");

        BEGIN_INTERFACE_MAP(HubGenerated, DirectUI::Control)
            INTERFACE_ENTRY(HubGenerated, ABI::Microsoft::UI::Xaml::Controls::IHub)
            INTERFACE_ENTRY(HubGenerated, ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomInformation)
        END_INTERFACE_MAP(HubGenerated, DirectUI::Control)

    public:
        HubGenerated();
        ~HubGenerated() override;

        // Event source typedefs.
        typedef CEventSource<ABI::Microsoft::UI::Xaml::Controls::IHubSectionHeaderClickEventHandler, IInspectable, ABI::Microsoft::UI::Xaml::Controls::IHubSectionHeaderClickEventArgs> SectionHeaderClickEventSourceType;
        typedef CEventSource<ABI::Microsoft::UI::Xaml::Controls::ISectionsInViewChangedEventHandler, IInspectable, ABI::Microsoft::UI::Xaml::Controls::ISectionsInViewChangedEventArgs> SectionsInViewChangedEventSourceType;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::Hub;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::Hub;
        }

        // Properties.
        IFACEMETHOD(get_DefaultSectionIndex)(_Out_ INT* pValue) override;
        IFACEMETHOD(put_DefaultSectionIndex)(INT value) override;
        IFACEMETHOD(get_Header)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_Header)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_HeaderTemplate)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue) override;
        IFACEMETHOD(put_HeaderTemplate)(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue) override;
        IFACEMETHOD(get_IsActiveView)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsActiveView)(BOOLEAN value) override;
        IFACEMETHOD(get_IsZoomedInView)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsZoomedInView)(BOOLEAN value) override;
        IFACEMETHOD(get_Orientation)(_Out_ ABI::Microsoft::UI::Xaml::Controls::Orientation* pValue) override;
        IFACEMETHOD(put_Orientation)(ABI::Microsoft::UI::Xaml::Controls::Orientation value) override;
        IFACEMETHOD(get_SectionHeaders)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IObservableVector<IInspectable*>** ppValue) override;
        IFACEMETHOD(get_Sections)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Controls::HubSection*>** ppValue) override;
        _Check_return_ HRESULT put_Sections(_In_opt_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Controls::HubSection*>* pValue);
        IFACEMETHOD(get_SectionsInView)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Controls::HubSection*>** ppValue) override;
        IFACEMETHOD(get_SemanticZoomOwner)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoom** ppValue) override;
        IFACEMETHOD(put_SemanticZoomOwner)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoom* pValue) override;

        // Events.
        _Check_return_ HRESULT GetSectionHeaderClickEventSourceNoRef(_Outptr_ SectionHeaderClickEventSourceType** ppEventSource);
        IFACEMETHOD(add_SectionHeaderClick)(_In_ ABI::Microsoft::UI::Xaml::Controls::IHubSectionHeaderClickEventHandler* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_SectionHeaderClick)(EventRegistrationToken token) override;
        _Check_return_ HRESULT GetSectionsInViewChangedEventSourceNoRef(_Outptr_ SectionsInViewChangedEventSourceType** ppEventSource);
        IFACEMETHOD(add_SectionsInViewChanged)(_In_ ABI::Microsoft::UI::Xaml::Controls::ISectionsInViewChangedEventHandler* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_SectionsInViewChanged)(EventRegistrationToken token) override;

        // Methods.
        IFACEMETHOD(CompleteViewChange)() override;
        IFACEMETHOD(CompleteViewChangeFrom)(_In_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomLocation* pSource, _In_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomLocation* pDestination) override;
        IFACEMETHOD(CompleteViewChangeTo)(_In_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomLocation* pSource, _In_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomLocation* pDestination) override;
        IFACEMETHOD(InitializeViewChange)() override;
        IFACEMETHOD(MakeVisible)(_In_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomLocation* pItem) override;
        IFACEMETHOD(ScrollToSection)(_In_ ABI::Microsoft::UI::Xaml::Controls::IHubSection* pSection) override;
        IFACEMETHOD(StartViewChangeFrom)(_In_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomLocation* pSource, _In_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomLocation* pDestination) override;
        IFACEMETHOD(StartViewChangeTo)(_In_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomLocation* pSource, _In_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomLocation* pDestination) override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;
        _Check_return_ HRESULT EventAddHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler, _In_ BOOLEAN handledEventsToo) override;
        _Check_return_ HRESULT EventRemoveHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler) override;

    private:

        // Fields.
    };
}

#include "Hub_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) HubFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IHubFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IHubStatics
    {
        BEGIN_INTERFACE_MAP(HubFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(HubFactory, ABI::Microsoft::UI::Xaml::Controls::IHubFactory)
            INTERFACE_ENTRY(HubFactory, ABI::Microsoft::UI::Xaml::Controls::IHubStatics)
        END_INTERFACE_MAP(HubFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IHub** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_HeaderProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HeaderTemplateProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_OrientationProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DefaultSectionIndexProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        
        
        IFACEMETHOD(get_SemanticZoomOwnerProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsActiveViewProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsZoomedInViewProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::Hub;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
