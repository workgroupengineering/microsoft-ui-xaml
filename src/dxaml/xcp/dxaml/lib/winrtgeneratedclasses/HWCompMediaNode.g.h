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

#include "HWCompLeafNode.g.h"

#define __HWCompMediaNode_GUID "ab1b9c8f-9fad-42ec-999e-4288ba88c1ec"

namespace DirectUI
{
    class HWCompMediaNode;

    class __declspec(novtable) __declspec(uuid(__HWCompMediaNode_GUID)) HWCompMediaNode:
        public DirectUI::HWCompLeafNode
    {



    public:
        HWCompMediaNode();
        ~HWCompMediaNode() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::HWCompMediaNode;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::HWCompMediaNode;
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


