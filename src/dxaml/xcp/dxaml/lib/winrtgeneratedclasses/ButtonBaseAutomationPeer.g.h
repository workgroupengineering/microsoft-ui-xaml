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

#include "FrameworkElementAutomationPeer.g.h"

#define __ButtonBaseAutomationPeer_GUID "a345b150-9825-4148-a617-ebfde91524f8"

namespace DirectUI
{
    class ButtonBaseAutomationPeer;

    class __declspec(novtable) ButtonBaseAutomationPeerGenerated:
        public DirectUI::FrameworkElementAutomationPeer
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer
    {
        friend class DirectUI::ButtonBaseAutomationPeer;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Automation.Peers.ButtonBaseAutomationPeer");

        BEGIN_INTERFACE_MAP(ButtonBaseAutomationPeerGenerated, DirectUI::FrameworkElementAutomationPeer)
            INTERFACE_ENTRY(ButtonBaseAutomationPeerGenerated, ABI::Microsoft::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer)
        END_INTERFACE_MAP(ButtonBaseAutomationPeerGenerated, DirectUI::FrameworkElementAutomationPeer)

    public:
        ButtonBaseAutomationPeerGenerated();
        ~ButtonBaseAutomationPeerGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ButtonBaseAutomationPeer;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::ButtonBaseAutomationPeer;
        }

        // Properties.

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "ButtonBaseAutomationPeer_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) ButtonBaseAutomationPeerFactory:
       public ctl::BetterAggregableAbstractCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory
    {
        BEGIN_INTERFACE_MAP(ButtonBaseAutomationPeerFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)
            INTERFACE_ENTRY(ButtonBaseAutomationPeerFactory, ABI::Microsoft::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory)
        END_INTERFACE_MAP(ButtonBaseAutomationPeerFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstanceWithOwner)(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IButtonBase* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ButtonBaseAutomationPeer;
        }


    private:
        _Check_return_ HRESULT CreateInstanceWithOwnerImpl(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IButtonBase* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer** ppInstance);

        // Customized static properties.

        // Customized static  methods.
    };
}
