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


#define __FrameNavigationOptions_GUID "50ac0c23-ca18-4f64-a9fd-d94db1b73814"

namespace DirectUI
{
    class FrameNavigationOptions;
    class NavigationTransitionInfo;

    class __declspec(novtable) __declspec(uuid(__FrameNavigationOptions_GUID)) FrameNavigationOptions:
        public ctl::WeakReferenceSource
        , public ABI::Microsoft::UI::Xaml::Navigation::IFrameNavigationOptions
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Navigation.FrameNavigationOptions");

        BEGIN_INTERFACE_MAP(FrameNavigationOptions, ctl::WeakReferenceSource)
            INTERFACE_ENTRY(FrameNavigationOptions, ABI::Microsoft::UI::Xaml::Navigation::IFrameNavigationOptions)
        END_INTERFACE_MAP(FrameNavigationOptions, ctl::WeakReferenceSource)

    public:
        FrameNavigationOptions();
        ~FrameNavigationOptions() override;

        // Event source typedefs.


        // Properties.
        IFACEMETHOD(get_IsNavigationStackEnabled)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsNavigationStackEnabled)(BOOLEAN value) override;
        IFACEMETHOD(get_TransitionInfoOverride)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfo** ppValue) override;
        IFACEMETHOD(put_TransitionInfoOverride)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfo* pValue) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
        BOOLEAN m_isNavigationStackEnabled;
        TrackerPtr<ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfo> m_pTransitionInfoOverride;
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
    class __declspec(novtable) FrameNavigationOptionsFactory:
       public ctl::AggregableActivationFactory<DirectUI::FrameNavigationOptions>
        , public ABI::Microsoft::UI::Xaml::Navigation::IFrameNavigationOptionsFactory
    {
        BEGIN_INTERFACE_MAP(FrameNavigationOptionsFactory, ctl::AggregableActivationFactory<DirectUI::FrameNavigationOptions>)
            INTERFACE_ENTRY(FrameNavigationOptionsFactory, ABI::Microsoft::UI::Xaml::Navigation::IFrameNavigationOptionsFactory)
        END_INTERFACE_MAP(FrameNavigationOptionsFactory, ctl::AggregableActivationFactory<DirectUI::FrameNavigationOptions>)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Navigation::IFrameNavigationOptions** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;



    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
