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
#include "ExecuteRequestedEventArgs.g.h"
#include "CoreEventArgsGroup.h"

using namespace DirectUI;

// Constructors/destructors.
DirectUI::ExecuteRequestedEventArgs::ExecuteRequestedEventArgs()
{
}

DirectUI::ExecuteRequestedEventArgs::~ExecuteRequestedEventArgs()
{
}

HRESULT DirectUI::ExecuteRequestedEventArgs::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ExecuteRequestedEventArgs)))
    {
        *ppObject = static_cast<DirectUI::ExecuteRequestedEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IExecuteRequestedEventArgs)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IExecuteRequestedEventArgs*>(this);
    }
#if WI_IS_FEATURE_PRESENT(Feature_CommandingImprovements)
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IExecuteRequestedEventArgsFeature_CommandingImprovements)) && Feature_CommandingImprovements::IsEnabled())
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IExecuteRequestedEventArgsFeature_CommandingImprovements*>(this);
    }
#endif
    else
    {
        RRETURN(DirectUI::EventArgs::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Properties.
IFACEMETHODIMP DirectUI::ExecuteRequestedEventArgs::get_Parameter(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(m_pParameter.CopyTo(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::ExecuteRequestedEventArgs::put_Parameter(_In_opt_ IInspectable* pValue)
{
    HRESULT hr = S_OK;
    IFC(CheckThread());
    SetPtrValue(m_pParameter, pValue);
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ExecuteRequestedEventArgs::get_CommandTarget(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(m_pCommandTarget.CopyTo(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::ExecuteRequestedEventArgs::put_CommandTarget(_In_opt_ ABI::Microsoft::UI::Xaml::IDependencyObject* pValue)
{
    HRESULT hr = S_OK;
    IFC(CheckThread());
    SetPtrValue(m_pCommandTarget, pValue);
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ExecuteRequestedEventArgs::get_ListCommandTarget(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IItemsControl** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(m_pListCommandTarget.CopyTo(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::ExecuteRequestedEventArgs::put_ListCommandTarget(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IItemsControl* pValue)
{
    HRESULT hr = S_OK;
    IFC(CheckThread());
    SetPtrValue(m_pListCommandTarget, pValue);
Cleanup:
    RRETURN(hr);
}

// Methods.


namespace DirectUI
{
    _Check_return_ HRESULT OnFrameworkCreateExecuteRequestedEventArgs(_In_ CEventArgs* pCoreObject, _Out_ IInspectable** ppNewInstance)
    {
        HRESULT hr = S_OK;
        ctl::ComPtr<DirectUI::ExecuteRequestedEventArgs> spInstance;
        *ppNewInstance = nullptr;
        IFC(ctl::make(pCoreObject, &spInstance));
        *ppNewInstance = ctl::iinspectable_cast(spInstance.Detach());
    Cleanup:
        RRETURN(hr);
    }
    _Check_return_ IActivationFactory* CreateActivationFactory_ExecuteRequestedEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::AbstractActivationFactory>::CreateActivationFactory());
    }
}
