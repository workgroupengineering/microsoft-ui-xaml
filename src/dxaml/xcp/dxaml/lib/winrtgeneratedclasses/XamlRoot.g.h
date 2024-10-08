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

#include <FeatureFlags.h>
#if WI_IS_FEATURE_PRESENT(Feature_ExperimentalApi) 
#define FEATURE_EXPERIMENTALAPI_OVERRIDE override
#else
#define FEATURE_EXPERIMENTALAPI_OVERRIDE
#endif
#define __XamlRoot_GUID "eaad7a20-751b-4a85-b6c9-50231742b28f"

#pragma region forwarders
namespace ctl
{
    template<typename impl_type>
    class interface_forwarder< ABI::Microsoft::UI::Xaml::IXamlRoot2, impl_type> final
        : public ctl::iinspectable_forwarder_base< ABI::Microsoft::UI::Xaml::IXamlRoot2, impl_type>
    {
        impl_type* This() { return this->This_helper<impl_type>(); }
        IFACEMETHOD(get_ContentIslandEnvironment)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Content::IContentIslandEnvironment** ppValue) override { return This()->get_ContentIslandEnvironment(ppValue); }
    };
    template<typename impl_type>
    class interface_forwarder< ABI::Microsoft::UI::Xaml::IXamlRoot3, impl_type> final
        : public ctl::iinspectable_forwarder_base< ABI::Microsoft::UI::Xaml::IXamlRoot3, impl_type>
    {
        impl_type* This() { return this->This_helper<impl_type>(); }
        IFACEMETHOD(get_CoordinateConverter)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Content::IContentCoordinateConverter** ppValue) override { return This()->get_CoordinateConverter(ppValue); }
    };
    template<typename impl_type>
    class interface_forwarder< ABI::Microsoft::UI::Xaml::IXamlRootFeature_ExperimentalApi, impl_type> final
        : public ctl::iinspectable_forwarder_base< ABI::Microsoft::UI::Xaml::IXamlRootFeature_ExperimentalApi, impl_type>
    {
        impl_type* This() { return this->This_helper<impl_type>(); }
        IFACEMETHOD(TryGetContentIsland)(_Outptr_ ABI::Microsoft::UI::Content::IContentIsland** ppReturnValue) override { return This()->TryGetContentIsland(ppReturnValue); }
    };
}
#pragma endregion

namespace DirectUI
{
    class XamlRoot;
    class UIElement;

    class __declspec(novtable) XamlRootGenerated:
        public ctl::WeakReferenceSource
        , public ABI::Microsoft::UI::Xaml::IXamlRoot
        , public ctl::forwarder_holder< ABI::Microsoft::UI::Xaml::IXamlRoot2, XamlRootGenerated >
        , public ctl::forwarder_holder< ABI::Microsoft::UI::Xaml::IXamlRoot3, XamlRootGenerated >
#if WI_IS_FEATURE_PRESENT(Feature_ExperimentalApi)
        , public ctl::forwarder_holder< ABI::Microsoft::UI::Xaml::IXamlRootFeature_ExperimentalApi, XamlRootGenerated >
#endif
    {
        friend class DirectUI::XamlRoot;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.XamlRoot");

        BEGIN_INTERFACE_MAP(XamlRootGenerated, ctl::WeakReferenceSource)
            INTERFACE_ENTRY(XamlRootGenerated, ABI::Microsoft::UI::Xaml::IXamlRoot)
            INTERFACE_ENTRY(XamlRootGenerated, ABI::Microsoft::UI::Xaml::IXamlRoot2)
            INTERFACE_ENTRY(XamlRootGenerated, ABI::Microsoft::UI::Xaml::IXamlRoot3)
#if WI_IS_FEATURE_PRESENT(Feature_ExperimentalApi)
            INTERFACE_ENTRY(XamlRootGenerated, ABI::Microsoft::UI::Xaml::IXamlRootFeature_ExperimentalApi)
#endif
        END_INTERFACE_MAP(XamlRootGenerated, ctl::WeakReferenceSource)

    public:
        XamlRootGenerated();
        ~XamlRootGenerated() override;

        // Event source typedefs.
        typedef CEventSource<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::XamlRoot*, ABI::Microsoft::UI::Xaml::XamlRootChangedEventArgs*>, ABI::Microsoft::UI::Xaml::IXamlRoot, ABI::Microsoft::UI::Xaml::IXamlRootChangedEventArgs> ChangedEventSourceType;
        typedef CEventSource<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::XamlRoot*, ABI::Microsoft::UI::Xaml::XamlRootChangedEventArgs*>, ABI::Microsoft::UI::Xaml::IXamlRoot, ABI::Microsoft::UI::Xaml::IXamlRootChangedEventArgs> InputActivationChangedEventSourceType;


        // Properties.
        IFACEMETHOD(get_Content)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue) override;
        _Check_return_ HRESULT STDMETHODCALLTYPE get_ContentIslandEnvironment(_Outptr_result_maybenull_ ABI::Microsoft::UI::Content::IContentIslandEnvironment** ppValue);
        _Check_return_ HRESULT STDMETHODCALLTYPE get_CoordinateConverter(_Outptr_result_maybenull_ ABI::Microsoft::UI::Content::IContentCoordinateConverter** ppValue);
        IFACEMETHOD(get_IsHostVisible)(_Out_ BOOLEAN* pValue) override;
        _Check_return_ HRESULT get_IsInputActive(_Out_ BOOLEAN* pValue);
        IFACEMETHOD(get_RasterizationScale)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(get_Size)(_Out_ ABI::Windows::Foundation::Size* pValue) override;

        // Events.
        virtual _Check_return_ HRESULT GetChangedEventSourceNoRef(_Outptr_ ChangedEventSourceType** ppEventSource) = 0;
        IFACEMETHOD(add_Changed)(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::XamlRoot*, ABI::Microsoft::UI::Xaml::XamlRootChangedEventArgs*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_Changed)(_In_ EventRegistrationToken token) override;
        virtual _Check_return_ HRESULT GetInputActivationChangedEventSourceNoRef(_Outptr_ InputActivationChangedEventSourceType** ppEventSource) = 0;
        _Check_return_ HRESULT add_InputActivationChanged(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::XamlRoot*, ABI::Microsoft::UI::Xaml::XamlRootChangedEventArgs*>* pValue, _Out_ EventRegistrationToken* pToken);
        _Check_return_ HRESULT remove_InputActivationChanged(_In_ EventRegistrationToken token);

        // Methods.
#if WI_IS_FEATURE_PRESENT(Feature_ExperimentalApi)
        _Check_return_ HRESULT STDMETHODCALLTYPE TryGetContentIsland(_Outptr_ ABI::Microsoft::UI::Content::IContentIsland** ppReturnValue);
#endif


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
       _Check_return_ HRESULT EventAddPreValidation(_In_ void* const pValue, EventRegistrationToken* const ptToken) const;

        // Fields.
    };
}

#include "XamlRoot_Partial.h"

