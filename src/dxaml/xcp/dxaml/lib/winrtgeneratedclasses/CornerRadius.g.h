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

namespace DirectUI
{
    class CornerRadiusFactory:
        public ABI::Microsoft::UI::Xaml::ICornerRadiusHelperStatics,
        public ctl::AbstractActivationFactory
    {
        BEGIN_INTERFACE_MAP(CornerRadiusFactory, ctl::AbstractActivationFactory)
            INTERFACE_ENTRY(CornerRadiusFactory, ABI::Microsoft::UI::Xaml::ICornerRadiusHelperStatics)
        END_INTERFACE_MAP(CornerRadiusFactory, ctl::AbstractActivationFactory)

    public:
        // Extension methods.

        // Static properties.

        // Static methods.
        IFACEMETHOD(FromRadii)(_In_ DOUBLE topLeft, _In_ DOUBLE topRight, _In_ DOUBLE bottomRight, _In_ DOUBLE bottomLeft, _Out_ ABI::Microsoft::UI::Xaml::CornerRadius* pReturnValue) override;
        IFACEMETHOD(FromUniformRadius)(_In_ DOUBLE uniformRadius, _Out_ ABI::Microsoft::UI::Xaml::CornerRadius* pReturnValue) override;

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;
    };
}

