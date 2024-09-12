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

#include "GradientStop.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::GradientStop::GradientStop()
{
}

DirectUI::GradientStop::~GradientStop()
{
}

HRESULT DirectUI::GradientStop::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::GradientStop)))
    {
        *ppObject = static_cast<DirectUI::GradientStop*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IGradientStop)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IGradientStop*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::GradientStop::get_Color(_Out_ ABI::Windows::UI::Color* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::GradientStop_Color, pValue));
}
IFACEMETHODIMP DirectUI::GradientStop::put_Color(_In_ ABI::Windows::UI::Color value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::GradientStop_Color, value));
}
IFACEMETHODIMP DirectUI::GradientStop::get_Offset(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::GradientStop_Offset, pValue));
}
IFACEMETHODIMP DirectUI::GradientStop::put_Offset(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::GradientStop_Offset, value));
}

// Events.

// Methods.

HRESULT DirectUI::GradientStopFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IGradientStopStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IGradientStopStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.
IFACEMETHODIMP DirectUI::GradientStopFactory::get_ColorProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::GradientStop_Color, ppValue));
}
IFACEMETHODIMP DirectUI::GradientStopFactory::get_OffsetProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::GradientStop_Offset, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_GradientStop()
    {
        RRETURN(ctl::ActivationFactoryCreator<GradientStopFactory>::CreateActivationFactory());
    }
}