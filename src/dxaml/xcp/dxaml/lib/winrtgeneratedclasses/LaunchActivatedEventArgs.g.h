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


#define __LaunchActivatedEventArgs_GUID "a15ac525-cb6c-37f1-927d-b32bcf43eaaa"

namespace DirectUI
{
    class LaunchActivatedEventArgs;

    class __declspec(novtable) __declspec(uuid(__LaunchActivatedEventArgs_GUID)) LaunchActivatedEventArgs:
        public ctl::WeakReferenceSource
        , public ABI::Microsoft::UI::Xaml::ILaunchActivatedEventArgs
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.LaunchActivatedEventArgs");

        BEGIN_INTERFACE_MAP(LaunchActivatedEventArgs, ctl::WeakReferenceSource)
            INTERFACE_ENTRY(LaunchActivatedEventArgs, ABI::Microsoft::UI::Xaml::ILaunchActivatedEventArgs)
        END_INTERFACE_MAP(LaunchActivatedEventArgs, ctl::WeakReferenceSource)

    public:
        LaunchActivatedEventArgs();
        ~LaunchActivatedEventArgs() override;

        // Event source typedefs.


        // Properties.
        IFACEMETHOD(get_Arguments)(_Out_ HSTRING* pValue) override;
        _Check_return_ HRESULT put_Arguments(_In_opt_ HSTRING value);
        IFACEMETHOD(get_UWPLaunchActivatedEventArgs)(_Outptr_result_maybenull_ ABI::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs** ppValue) override;
        _Check_return_ HRESULT put_UWPLaunchActivatedEventArgs(_In_opt_ ABI::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs* pValue);

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
        Microsoft::WRL::Wrappers::HString m_arguments;
        TrackerPtr<ABI::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs> m_pUWPLaunchActivatedEventArgs;
    };
}


