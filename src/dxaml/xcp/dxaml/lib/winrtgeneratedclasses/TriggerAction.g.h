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


#define __TriggerAction_GUID "52085c66-b7e8-4028-a453-ff4051fd13db"

namespace DirectUI
{
    class TriggerAction;

    class __declspec(novtable) __declspec(uuid(__TriggerAction_GUID)) TriggerAction:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::ITriggerAction
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.TriggerAction");

        BEGIN_INTERFACE_MAP(TriggerAction, DirectUI::DependencyObject)
            INTERFACE_ENTRY(TriggerAction, ABI::Microsoft::UI::Xaml::ITriggerAction)
        END_INTERFACE_MAP(TriggerAction, DirectUI::DependencyObject)

    public:
        TriggerAction();
        ~TriggerAction() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::TriggerAction;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::TriggerAction;
        }

        // Properties.

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
    class __declspec(novtable) TriggerActionFactory:
       public ctl::BetterAggregableAbstractCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::ITriggerActionFactory
    {
        BEGIN_INTERFACE_MAP(TriggerActionFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)
            INTERFACE_ENTRY(TriggerActionFactory, ABI::Microsoft::UI::Xaml::ITriggerActionFactory)
        END_INTERFACE_MAP(TriggerActionFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::TriggerAction;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}