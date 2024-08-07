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


#define __GeometryCollection_GUID "78d18525-34f4-48ac-8967-a093e791d48f"

namespace DirectUI
{
    class GeometryCollection;

    class __declspec(novtable) __declspec(uuid(__GeometryCollection_GUID)) GeometryCollection:
        public DirectUI::PresentationFrameworkCollection<ABI::Microsoft::UI::Xaml::Media::Geometry*>
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.GeometryCollection");


    public:
        GeometryCollection();
        ~GeometryCollection() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::GeometryCollection;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::GeometryCollection;
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


