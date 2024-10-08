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
#include "AccessKeyDisplayRequestedEventArgs.g.h"
#include "CoreEventArgsGroup.h"

using namespace DirectUI;

// Constructors/destructors.
DirectUI::AccessKeyDisplayRequestedEventArgs::AccessKeyDisplayRequestedEventArgs()
{
}

DirectUI::AccessKeyDisplayRequestedEventArgs::~AccessKeyDisplayRequestedEventArgs()
{
}

HRESULT DirectUI::AccessKeyDisplayRequestedEventArgs::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::AccessKeyDisplayRequestedEventArgs)))
    {
        *ppObject = static_cast<DirectUI::AccessKeyDisplayRequestedEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs*>(this);
    }
    else
    {
        RRETURN(DirectUI::EventArgs::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Properties.
IFACEMETHODIMP DirectUI::AccessKeyDisplayRequestedEventArgs::get_PressedKeys(_Out_ HSTRING* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    xstring_ptr valueCore;

    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CAccessKeyDisplayRequestedEventArgs*>(pCoreEventArgsNoRef)->get_PressedKeys(&valueCore));

    IFC(CValueBoxer::ConvertToFramework(valueCore, pValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::AccessKeyDisplayRequestedEventArgs::put_PressedKeys(_In_opt_ HSTRING value)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    xephemeral_string_ptr valueCore(value);

    

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CAccessKeyDisplayRequestedEventArgs*>(pCoreEventArgsNoRef)->put_PressedKeys(valueCore));


Cleanup:
    RRETURN(hr);
}

// Methods.


namespace DirectUI
{
    _Check_return_ HRESULT OnFrameworkCreateAccessKeyDisplayRequestedEventArgs(_In_ CEventArgs* pCoreObject, _Out_ IInspectable** ppNewInstance)
    {
        HRESULT hr = S_OK;
        ctl::ComPtr<DirectUI::AccessKeyDisplayRequestedEventArgs> spInstance;
        *ppNewInstance = nullptr;
        IFC(ctl::make(pCoreObject, &spInstance));
        *ppNewInstance = ctl::iinspectable_cast(spInstance.Detach());
    Cleanup:
        RRETURN(hr);
    }
    _Check_return_ IActivationFactory* CreateActivationFactory_AccessKeyDisplayRequestedEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::ActivationFactory<DirectUI::AccessKeyDisplayRequestedEventArgs>>::CreateActivationFactory());
    }
}
