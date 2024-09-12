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
    class Matrix3DFactory:
        public ABI::Microsoft::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics,
        public ctl::AbstractActivationFactory
    {
        BEGIN_INTERFACE_MAP(Matrix3DFactory, ctl::AbstractActivationFactory)
            INTERFACE_ENTRY(Matrix3DFactory, ABI::Microsoft::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics)
        END_INTERFACE_MAP(Matrix3DFactory, ctl::AbstractActivationFactory)

    public:
        // Extension methods.
        IFACEMETHOD(GetHasInverse)(_In_ ABI::Microsoft::UI::Xaml::Media::Media3D::Matrix3D target, _Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(GetIsIdentity)(_In_ ABI::Microsoft::UI::Xaml::Media::Media3D::Matrix3D target, _Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(Invert)(_In_ ABI::Microsoft::UI::Xaml::Media::Media3D::Matrix3D target, _Out_ ABI::Microsoft::UI::Xaml::Media::Media3D::Matrix3D* pReturnValue) override;

        // Static properties.
        IFACEMETHOD(get_Identity)(_Out_ ABI::Microsoft::UI::Xaml::Media::Media3D::Matrix3D* pValue) override;

        // Static methods.
        IFACEMETHOD(Multiply)(_In_ ABI::Microsoft::UI::Xaml::Media::Media3D::Matrix3D matrix1, _In_ ABI::Microsoft::UI::Xaml::Media::Media3D::Matrix3D matrix2, _Out_ ABI::Microsoft::UI::Xaml::Media::Media3D::Matrix3D* pReturnValue) override;
        IFACEMETHOD(FromElements)(_In_ DOUBLE m11, _In_ DOUBLE m12, _In_ DOUBLE m13, _In_ DOUBLE m14, _In_ DOUBLE m21, _In_ DOUBLE m22, _In_ DOUBLE m23, _In_ DOUBLE m24, _In_ DOUBLE m31, _In_ DOUBLE m32, _In_ DOUBLE m33, _In_ DOUBLE m34, _In_ DOUBLE offsetX, _In_ DOUBLE offsetY, _In_ DOUBLE offsetZ, _In_ DOUBLE m44, _Out_ ABI::Microsoft::UI::Xaml::Media::Media3D::Matrix3D* pReturnValue) override;

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;
    };
}

#include "Matrix3D_Partial.h"