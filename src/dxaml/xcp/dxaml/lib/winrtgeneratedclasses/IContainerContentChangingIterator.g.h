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
    interface __declspec(uuid("dbdc6853-84d3-48cf-a4ee-1831351344a7")) IContainerContentChangingIterator : public IInspectable
    {
        // Properties.
        IFACEMETHOD(get_Size)(_Out_ UINT* pValue) = 0;
        IFACEMETHOD(get_Current)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppValue) = 0;

        // Events.

        // Methods.
        IFACEMETHOD(MoveNext)(_Out_ BOOLEAN* pReturnValue) = 0;
        IFACEMETHOD(Reset)() = 0;
    };
}
