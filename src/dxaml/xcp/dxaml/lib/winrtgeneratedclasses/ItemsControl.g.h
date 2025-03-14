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
#include "IContainerRecyclingContext.g.h"
#include "IGroupHeaderMapping.g.h"

#define __ItemsControl_GUID "efe0d15e-beaa-4da1-9ddd-91a40dae27d5"

namespace DirectUI
{
    class ItemsControl;
    class DataTemplate;
    class DataTemplateSelector;
    class GroupStyleSelector;
    class ItemCollection;
    class ItemContainerGenerator;
    class ItemsPanelTemplate;
    class Panel;
    class Style;
    class StyleSelector;
    class TransitionCollection;
    class UIElement;

    class __declspec(novtable) ItemsControlGenerated:
        public DirectUI::Control
        , public ABI::Microsoft::UI::Xaml::Controls::IItemsControl
        , public ABI::Microsoft::UI::Xaml::Controls::IItemsControlOverrides
        , public ABI::Microsoft::UI::Xaml::Controls::IItemContainerMapping
        , public DirectUI::IContainerRecyclingContext
        , public DirectUI::IGroupHeaderMapping
    {
        friend class DirectUI::ItemsControl;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.ItemsControl");

        BEGIN_INTERFACE_MAP(ItemsControlGenerated, DirectUI::Control)
            INTERFACE_ENTRY(ItemsControlGenerated, ABI::Microsoft::UI::Xaml::Controls::IItemsControl)
            INTERFACE_ENTRY(ItemsControlGenerated, ABI::Microsoft::UI::Xaml::Controls::IItemsControlOverrides)
            INTERFACE_ENTRY(ItemsControlGenerated, ABI::Microsoft::UI::Xaml::Controls::IItemContainerMapping)
            INTERFACE_ENTRY(ItemsControlGenerated, DirectUI::IContainerRecyclingContext)
            INTERFACE_ENTRY(ItemsControlGenerated, DirectUI::IGroupHeaderMapping)
        END_INTERFACE_MAP(ItemsControlGenerated, DirectUI::Control)

    public:
        ItemsControlGenerated();
        ~ItemsControlGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ItemsControl;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::ItemsControl;
        }

        // Properties.
        IFACEMETHOD(get_DisplayMemberPath)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(put_DisplayMemberPath)(_In_opt_ HSTRING value) override;
        IFACEMETHOD(get_GroupStyle)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IObservableVector<ABI::Microsoft::UI::Xaml::Controls::GroupStyle*>** ppValue) override;
        IFACEMETHOD(get_GroupStyleSelector)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IGroupStyleSelector** ppValue) override;
        IFACEMETHOD(put_GroupStyleSelector)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IGroupStyleSelector* pValue) override;
        IFACEMETHOD(get_IsGrouping)(_Out_ BOOLEAN* pValue) override;
        virtual _Check_return_ HRESULT put_IsGrouping(BOOLEAN value);
        virtual _Check_return_ HRESULT get_IsItemsHostInvalid(_Out_ BOOLEAN* pValue);
        _Check_return_ HRESULT put_IsItemsHostInvalid(BOOLEAN value);
        IFACEMETHOD(get_ItemContainerGenerator)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IItemContainerGenerator** ppValue) override;
        IFACEMETHOD(get_ItemContainerStyle)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IStyle** ppValue) override;
        IFACEMETHOD(put_ItemContainerStyle)(_In_opt_ ABI::Microsoft::UI::Xaml::IStyle* pValue) override;
        IFACEMETHOD(get_ItemContainerStyleSelector)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IStyleSelector** ppValue) override;
        IFACEMETHOD(put_ItemContainerStyleSelector)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IStyleSelector* pValue) override;
        IFACEMETHOD(get_ItemContainerTransitions)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Transition*>** ppValue) override;
        IFACEMETHOD(put_ItemContainerTransitions)(_In_opt_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Transition*>* pValue) override;
        IFACEMETHOD(get_Items)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IObservableVector<IInspectable*>** ppValue) override;
        virtual _Check_return_ HRESULT get_ItemsHost(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IPanel** ppValue);
        _Check_return_ HRESULT put_ItemsHost(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IPanel* pValue);
        IFACEMETHOD(get_ItemsPanel)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IItemsPanelTemplate** ppValue) override;
        IFACEMETHOD(put_ItemsPanel)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IItemsPanelTemplate* pValue) override;
        IFACEMETHOD(get_ItemsPanelRoot)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IPanel** ppValue) override;
        IFACEMETHOD(get_ItemsSource)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_ItemsSource)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_ItemTemplate)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue) override;
        IFACEMETHOD(put_ItemTemplate)(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue) override;
        IFACEMETHOD(get_ItemTemplateSelector)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector** ppValue) override;
        IFACEMETHOD(put_ItemTemplateSelector)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pValue) override;
        IFACEMETHOD(get_SelectedContainer)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue) override;
        IFACEMETHOD(put_SelectedContainer)(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pValue) override;

        // Events.

        // Methods.
        IFACEMETHOD(ClearContainerForItemOverride)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _In_opt_ IInspectable* pItem) override;
        _Check_return_ HRESULT ClearContainerForItemOverrideProtected(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _In_opt_ IInspectable* pItem);
        IFACEMETHOD(ConfigureSelectedContainer)(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pContainer) override;
        IFACEMETHOD(ContainerFromIndex)(INT index, _Outptr_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppReturnValue) override;
        IFACEMETHOD(ContainerFromItem)(_In_opt_ IInspectable* pItem, _Outptr_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppReturnValue) override;
        IFACEMETHOD(GetContainerForItemOverride)(_Outptr_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppReturnValue) override;
        _Check_return_ HRESULT GetContainerForItemOverrideProtected(_Outptr_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppReturnValue);
        IFACEMETHOD(GroupFromHeader)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pHeader, _Outptr_ IInspectable** ppReturnValue) override;
        IFACEMETHOD(GroupHeaderContainerFromItemContainer)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pItemContainer, _Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppReturnValue) override;
        IFACEMETHOD(HeaderFromGroup)(_In_ IInspectable* pGroup, _Outptr_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppReturnValue) override;
        IFACEMETHOD(HeaderFromIndex)(INT index, _Outptr_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppReturnValue) override;
        IFACEMETHOD(IndexFromContainer)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pContainer, _Out_ INT* pReturnValue) override;
        IFACEMETHOD(IndexFromHeader)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pHeader, BOOLEAN excludeHiddenEmptyGroups, _Out_ INT* pReturnValue) override;
        IFACEMETHOD(IsCompatible)(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pCandidate, _Out_ BOOLEAN* pReturnValue) override;
        IFACEMETHOD(IsItemItsOwnContainerOverride)(_In_opt_ IInspectable* pItem, _Out_ BOOLEAN* pReturnValue) override;
        _Check_return_ HRESULT IsItemItsOwnContainerOverrideProtected(_In_opt_ IInspectable* pItem, _Out_ BOOLEAN* pReturnValue);
        IFACEMETHOD(ItemFromContainer)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pContainer, _Outptr_ IInspectable** ppReturnValue) override;
        IFACEMETHOD(OnGroupStyleSelectorChanged)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IGroupStyleSelector* pOldGroupStyleSelector, _In_opt_ ABI::Microsoft::UI::Xaml::Controls::IGroupStyleSelector* pNewGroupStyleSelector) override;
        _Check_return_ HRESULT OnGroupStyleSelectorChangedProtected(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IGroupStyleSelector* pOldGroupStyleSelector, _In_opt_ ABI::Microsoft::UI::Xaml::Controls::IGroupStyleSelector* pNewGroupStyleSelector);
        IFACEMETHOD(OnItemContainerStyleChanged)(_In_opt_ ABI::Microsoft::UI::Xaml::IStyle* pOldItemContainerStyle, _In_opt_ ABI::Microsoft::UI::Xaml::IStyle* pNewItemContainerStyle) override;
        _Check_return_ HRESULT OnItemContainerStyleChangedProtected(_In_opt_ ABI::Microsoft::UI::Xaml::IStyle* pOldItemContainerStyle, _In_opt_ ABI::Microsoft::UI::Xaml::IStyle* pNewItemContainerStyle);
        IFACEMETHOD(OnItemContainerStyleSelectorChanged)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IStyleSelector* pOldItemContainerStyleSelector, _In_opt_ ABI::Microsoft::UI::Xaml::Controls::IStyleSelector* pNewItemContainerStyleSelector) override;
        _Check_return_ HRESULT OnItemContainerStyleSelectorChangedProtected(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IStyleSelector* pOldItemContainerStyleSelector, _In_opt_ ABI::Microsoft::UI::Xaml::Controls::IStyleSelector* pNewItemContainerStyleSelector);
        IFACEMETHOD(OnItemsChanged)(_In_ IInspectable* pE) override;
        _Check_return_ HRESULT OnItemsChangedProtected(_In_ IInspectable* pE);
        IFACEMETHOD(OnItemTemplateChanged)(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pOldItemTemplate, _In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pNewItemTemplate) override;
        _Check_return_ HRESULT OnItemTemplateChangedProtected(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pOldItemTemplate, _In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pNewItemTemplate);
        IFACEMETHOD(OnItemTemplateSelectorChanged)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pOldItemTemplateSelector, _In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pNewItemTemplateSelector) override;
        _Check_return_ HRESULT OnItemTemplateSelectorChangedProtected(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pOldItemTemplateSelector, _In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pNewItemTemplateSelector);
        IFACEMETHOD(PrepareContainerForItemOverride)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _In_opt_ IInspectable* pItem) override;
        _Check_return_ HRESULT PrepareContainerForItemOverrideProtected(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _In_opt_ IInspectable* pItem);
        IFACEMETHOD(PrepareForItemRecycling)(_In_opt_ IInspectable* pItem) override;
        IFACEMETHOD(StopRecycling)() override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "ItemsControl_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) ItemsControlFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IItemsControlFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IItemsControlStatics
    {
        BEGIN_INTERFACE_MAP(ItemsControlFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(ItemsControlFactory, ABI::Microsoft::UI::Xaml::Controls::IItemsControlFactory)
            INTERFACE_ENTRY(ItemsControlFactory, ABI::Microsoft::UI::Xaml::Controls::IItemsControlStatics)
        END_INTERFACE_MAP(ItemsControlFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IItemsControl** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_ItemsSourceProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_ItemTemplateProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ItemTemplateSelectorProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ItemsPanelProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DisplayMemberPathProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        
        IFACEMETHOD(get_ItemContainerStyleProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ItemContainerStyleSelectorProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ItemContainerTransitionsProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_GroupStyleSelectorProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsGroupingProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.
        IFACEMETHOD(GetItemsOwner)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IItemsControl** ppReturnValue) override;
        IFACEMETHOD(ItemsControlFromItemContainer)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pContainer, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IItemsControl** ppReturnValue) override;

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ItemsControl;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
         _Check_return_ HRESULT GetItemsOwnerImpl(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IItemsControl** ppReturnValue); 
         _Check_return_ HRESULT ItemsControlFromItemContainerImpl(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pContainer, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IItemsControl** ppReturnValue); 
    };
}
