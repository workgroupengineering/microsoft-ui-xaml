﻿#pragma once

#include "MainPage.g.h"

namespace winrt::TabViewTearOutApp::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

        void Init(winrt::com_array<winrt::Windows::Foundation::IInspectable> const& documentList);

        winrt::Windows::Foundation::Collections::IObservableVector<winrt::Windows::Foundation::IInspectable> DocumentList() { return m_documentList; }

        void OnTabTearOutWindowRequested(winrt::Microsoft::UI::Xaml::Controls::TabView const& sender, winrt::Microsoft::UI::Xaml::Controls::TabViewTabTearOutWindowRequestedEventArgs const& args);
        void OnTabTearOutRequested(winrt::Microsoft::UI::Xaml::Controls::TabView const& sender, winrt::Microsoft::UI::Xaml::Controls::TabViewTabTearOutRequestedEventArgs const& args);
        void OnExternalTornOutTabsDropping(winrt::Microsoft::UI::Xaml::Controls::TabView const& sender, winrt::Microsoft::UI::Xaml::Controls::TabViewExternalTornOutTabsDroppingEventArgs const& args);
        void OnExternalTornOutTabsDropped(winrt::Microsoft::UI::Xaml::Controls::TabView const& sender, winrt::Microsoft::UI::Xaml::Controls::TabViewExternalTornOutTabsDroppedEventArgs const& args);
        void OnAddTabButtonClick(winrt::Microsoft::UI::Xaml::Controls::TabView const& sender, winrt::Windows::Foundation::IInspectable const& args);
        void OnTabCloseRequested(winrt::Microsoft::UI::Xaml::Controls::TabView const& sender, winrt::Microsoft::UI::Xaml::Controls::TabViewTabCloseRequestedEventArgs const& args);

    private:
        winrt::Windows::Foundation::Collections::IObservableVector<winrt::Windows::Foundation::IInspectable> m_documentList{ winrt::single_threaded_observable_vector<winrt::Windows::Foundation::IInspectable>() };
    };
}

namespace winrt::TabViewTearOutApp::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
