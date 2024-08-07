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

#include "DataTemplate.g.h"

#define __DisplayMemberTemplate_GUID "fed3a8d2-cb3a-42f8-bc78-05cd36719eec"

namespace DirectUI
{
    class DisplayMemberTemplate;

    class __declspec(novtable) __declspec(uuid(__DisplayMemberTemplate_GUID)) DisplayMemberTemplate:
        public DirectUI::DataTemplate
    {



    public:
        DisplayMemberTemplate();
        ~DisplayMemberTemplate() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::DisplayMemberTemplate;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::DisplayMemberTemplate;
        }

        // Properties.
        _Check_return_ HRESULT get_DisplayMemberPath(_Out_ HSTRING* pValue);
        _Check_return_ HRESULT put_DisplayMemberPath(_In_opt_ HSTRING value);

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


