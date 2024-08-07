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


#define __BrushCollection_GUID "7aa6f6b1-8357-4496-907e-1e44e9f5b419"

namespace DirectUI
{
    class BrushCollection;

    class __declspec(novtable) __declspec(uuid(__BrushCollection_GUID)) BrushCollection:
        public DirectUI::PresentationFrameworkCollection<ABI::Microsoft::UI::Xaml::Media::Brush*>
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.BrushCollection");


    public:
        BrushCollection();
        ~BrushCollection() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::BrushCollection;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::BrushCollection;
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


