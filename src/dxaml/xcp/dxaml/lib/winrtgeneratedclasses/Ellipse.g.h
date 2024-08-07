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

#include "Shape.g.h"

#define __Ellipse_GUID "af868e54-8484-4a49-ace2-03c94ce7c23a"

namespace DirectUI
{
    class Ellipse;

    class __declspec(novtable) __declspec(uuid(__Ellipse_GUID)) Ellipse:
        public DirectUI::Shape
        , public ABI::Microsoft::UI::Xaml::Shapes::IEllipse
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Shapes.Ellipse");

        BEGIN_INTERFACE_MAP(Ellipse, DirectUI::Shape)
            INTERFACE_ENTRY(Ellipse, ABI::Microsoft::UI::Xaml::Shapes::IEllipse)
        END_INTERFACE_MAP(Ellipse, DirectUI::Shape)

    public:
        Ellipse();
        ~Ellipse() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::Ellipse;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::Ellipse;
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
    class __declspec(novtable) EllipseFactory:
       public ctl::BetterCoreObjectActivationFactory
    {

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::Ellipse;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
