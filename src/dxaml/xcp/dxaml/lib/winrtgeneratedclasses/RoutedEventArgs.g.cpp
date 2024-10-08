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

#include "precomp.h"
#include "RoutedEventArgs.g.h"
#include "CoreEventArgsGroup.h"

using namespace DirectUI;

// Constructors/destructors.
DirectUI::RoutedEventArgsGenerated::RoutedEventArgsGenerated()
{
}

DirectUI::RoutedEventArgsGenerated::~RoutedEventArgsGenerated()
{
}

HRESULT DirectUI::RoutedEventArgsGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::RoutedEventArgs)))
    {
        *ppObject = static_cast<DirectUI::RoutedEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IRoutedEventArgs)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IRoutedEventArgs*>(this);
    }
    else
    {
        RRETURN(DirectUI::EventArgs::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

CEventArgs* DirectUI::RoutedEventArgsGenerated::CreateCorePeer()
{
    return new CRoutedEventArgs();
}

// Properties.
IFACEMETHODIMP DirectUI::RoutedEventArgsGenerated::get_OriginalSource(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};
    IFC(CheckThread());
    IFC(static_cast<RoutedEventArgs*>(this)->get_OriginalSourceImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::RoutedEventArgsGenerated::put_OriginalSource(_In_opt_ IInspectable* pValue)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(static_cast<RoutedEventArgs*>(this)->put_OriginalSourceImpl(pValue));
Cleanup:
    RRETURN(hr);
}

// Methods.

HRESULT DirectUI::RoutedEventArgsFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IRoutedEventArgsFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IRoutedEventArgsFactory*>(this);
    }
    else
    {
        RRETURN(ctl::AggregableActivationFactory<DirectUI::RoutedEventArgs>::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::RoutedEventArgsFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IRoutedEventArgs** ppInstance)
{


    // Can't just IFC(_RETURN) this because for some validate calls (those with multiple template parameters), the
    // preprocessor gets confused at the "," in the template type-list before the function's opening parenthesis.
    // So we'll use IFC_RETURN syntax with a local hr variable, kind of weirdly.
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithAggregableActivationFactory<DirectUI::RoutedEventArgs,ABI::Microsoft::UI::Xaml::IRoutedEventArgs>(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), false /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ HRESULT OnFrameworkCreateRoutedEventArgs(_In_ CEventArgs* pCoreObject, _Out_ IInspectable** ppNewInstance)
    {
        HRESULT hr = S_OK;
        ctl::ComPtr<DirectUI::RoutedEventArgs> spInstance;
        *ppNewInstance = nullptr;
        IFC(ctl::make(pCoreObject, &spInstance));
        *ppNewInstance = ctl::iinspectable_cast(spInstance.Detach());
    Cleanup:
        RRETURN(hr);
    }
    _Check_return_ IActivationFactory* CreateActivationFactory_RoutedEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<RoutedEventArgsFactory>::CreateActivationFactory());
    }
}
