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


#define __AddPagesEventArgs_GUID "2be72ee1-09db-4990-94cc-7ce3dac8de1a"

namespace DirectUI
{
    class AddPagesEventArgs;

    class __declspec(novtable) AddPagesEventArgsGenerated :
        public ABI::Microsoft::UI::Xaml::Printing::IAddPagesEventArgs,
        public DirectUI::EventArgs
    {
        friend class DirectUI::AddPagesEventArgs;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Printing.AddPagesEventArgs");

        BEGIN_INTERFACE_MAP(AddPagesEventArgsGenerated, DirectUI::EventArgs)
            INTERFACE_ENTRY(AddPagesEventArgsGenerated, ABI::Microsoft::UI::Xaml::Printing::IAddPagesEventArgs)
        END_INTERFACE_MAP(AddPagesEventArgsGenerated, DirectUI::EventArgs)

    public:
        AddPagesEventArgsGenerated();
        ~AddPagesEventArgsGenerated() override;

        // Properties.
        IFACEMETHOD(get_PrintTaskOptions)(_Outptr_result_maybenull_ ABI::Windows::Graphics::Printing::IPrintTaskOptionsCore** ppValue) override;
        _Check_return_ HRESULT put_PrintTaskOptions(_In_opt_ ABI::Windows::Graphics::Printing::IPrintTaskOptionsCore* pValue);

        // Methods.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;
        CEventArgs* CreateCorePeer() override;

    private:

        // Fields.
    };
}

#include "AddPagesEventArgs_Partial.h"

