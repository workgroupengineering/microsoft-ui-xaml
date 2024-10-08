// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "PipsPager.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(PipsPager)
}

#include "PipsPager.g.cpp"

GlobalDependencyProperty PipsPagerProperties::s_MaxVisiblePipsProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_NextButtonStyleProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_NextButtonVisibilityProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_NormalPipStyleProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_NumberOfPagesProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_OrientationProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_PreviousButtonStyleProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_PreviousButtonVisibilityProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_SelectedPageIndexProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_SelectedPipStyleProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_TemplateSettingsProperty{ nullptr };
GlobalDependencyProperty PipsPagerProperties::s_WrapModeProperty{ nullptr };

PipsPagerProperties::PipsPagerProperties()
    : m_selectedIndexChangedEventSource{static_cast<PipsPager*>(this)}
{
    EnsureProperties();
}

void PipsPagerProperties::EnsureProperties()
{
    if (!s_MaxVisiblePipsProperty)
    {
        s_MaxVisiblePipsProperty =
            InitializeDependencyProperty(
                L"MaxVisiblePips",
                winrt::name_of<int>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(5),
                winrt::PropertyChangedCallback(&OnMaxVisiblePipsPropertyChanged));
    }
    if (!s_NextButtonStyleProperty)
    {
        s_NextButtonStyleProperty =
            InitializeDependencyProperty(
                L"NextButtonStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnNextButtonStylePropertyChanged));
    }
    if (!s_NextButtonVisibilityProperty)
    {
        s_NextButtonVisibilityProperty =
            InitializeDependencyProperty(
                L"NextButtonVisibility",
                winrt::name_of<winrt::PipsPagerButtonVisibility>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<winrt::PipsPagerButtonVisibility>::BoxValueIfNecessary(winrt::PipsPagerButtonVisibility::Collapsed),
                winrt::PropertyChangedCallback(&OnNextButtonVisibilityPropertyChanged));
    }
    if (!s_NormalPipStyleProperty)
    {
        s_NormalPipStyleProperty =
            InitializeDependencyProperty(
                L"NormalPipStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnNormalPipStylePropertyChanged));
    }
    if (!s_NumberOfPagesProperty)
    {
        s_NumberOfPagesProperty =
            InitializeDependencyProperty(
                L"NumberOfPages",
                winrt::name_of<int>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(-1),
                winrt::PropertyChangedCallback(&OnNumberOfPagesPropertyChanged));
    }
    if (!s_OrientationProperty)
    {
        s_OrientationProperty =
            InitializeDependencyProperty(
                L"Orientation",
                winrt::name_of<winrt::Orientation>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<winrt::Orientation>::BoxValueIfNecessary(winrt::Orientation::Horizontal),
                winrt::PropertyChangedCallback(&OnOrientationPropertyChanged));
    }
    if (!s_PreviousButtonStyleProperty)
    {
        s_PreviousButtonStyleProperty =
            InitializeDependencyProperty(
                L"PreviousButtonStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPreviousButtonStylePropertyChanged));
    }
    if (!s_PreviousButtonVisibilityProperty)
    {
        s_PreviousButtonVisibilityProperty =
            InitializeDependencyProperty(
                L"PreviousButtonVisibility",
                winrt::name_of<winrt::PipsPagerButtonVisibility>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<winrt::PipsPagerButtonVisibility>::BoxValueIfNecessary(winrt::PipsPagerButtonVisibility::Collapsed),
                winrt::PropertyChangedCallback(&OnPreviousButtonVisibilityPropertyChanged));
    }
    if (!s_SelectedPageIndexProperty)
    {
        s_SelectedPageIndexProperty =
            InitializeDependencyProperty(
                L"SelectedPageIndex",
                winrt::name_of<int>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(0),
                winrt::PropertyChangedCallback(&OnSelectedPageIndexPropertyChanged));
    }
    if (!s_SelectedPipStyleProperty)
    {
        s_SelectedPipStyleProperty =
            InitializeDependencyProperty(
                L"SelectedPipStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnSelectedPipStylePropertyChanged));
    }
    if (!s_TemplateSettingsProperty)
    {
        s_TemplateSettingsProperty =
            InitializeDependencyProperty(
                L"TemplateSettings",
                winrt::name_of<winrt::PipsPagerTemplateSettings>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<winrt::PipsPagerTemplateSettings>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnTemplateSettingsPropertyChanged));
    }
    if (!s_WrapModeProperty)
    {
        s_WrapModeProperty =
            InitializeDependencyProperty(
                L"WrapMode",
                winrt::name_of<winrt::PipsPagerWrapMode>(),
                winrt::name_of<winrt::PipsPager>(),
                false /* isAttached */,
                ValueHelper<winrt::PipsPagerWrapMode>::BoxValueIfNecessary(winrt::PipsPagerWrapMode::None),
                winrt::PropertyChangedCallback(&OnWrapModePropertyChanged));
    }
}

void PipsPagerProperties::ClearProperties()
{
    s_MaxVisiblePipsProperty = nullptr;
    s_NextButtonStyleProperty = nullptr;
    s_NextButtonVisibilityProperty = nullptr;
    s_NormalPipStyleProperty = nullptr;
    s_NumberOfPagesProperty = nullptr;
    s_OrientationProperty = nullptr;
    s_PreviousButtonStyleProperty = nullptr;
    s_PreviousButtonVisibilityProperty = nullptr;
    s_SelectedPageIndexProperty = nullptr;
    s_SelectedPipStyleProperty = nullptr;
    s_TemplateSettingsProperty = nullptr;
    s_WrapModeProperty = nullptr;
}

void PipsPagerProperties::OnMaxVisiblePipsPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnNextButtonStylePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnNextButtonVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnNormalPipStylePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnNumberOfPagesPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnOrientationPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnPreviousButtonStylePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnPreviousButtonVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnSelectedPageIndexPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnSelectedPipStylePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnTemplateSettingsPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::OnWrapModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::PipsPager>();
    winrt::get_self<PipsPager>(owner)->OnPropertyChanged(args);
}

void PipsPagerProperties::MaxVisiblePips(int value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_MaxVisiblePipsProperty, ValueHelper<int>::BoxValueIfNecessary(value));
    }
}

int PipsPagerProperties::MaxVisiblePips()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_MaxVisiblePipsProperty));
}

void PipsPagerProperties::NextButtonStyle(winrt::Style const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_NextButtonStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
    }
}

winrt::Style PipsPagerProperties::NextButtonStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_NextButtonStyleProperty));
}

void PipsPagerProperties::NextButtonVisibility(winrt::PipsPagerButtonVisibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_NextButtonVisibilityProperty, ValueHelper<winrt::PipsPagerButtonVisibility>::BoxValueIfNecessary(value));
    }
}

winrt::PipsPagerButtonVisibility PipsPagerProperties::NextButtonVisibility()
{
    return ValueHelper<winrt::PipsPagerButtonVisibility>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_NextButtonVisibilityProperty));
}

void PipsPagerProperties::NormalPipStyle(winrt::Style const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_NormalPipStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
    }
}

winrt::Style PipsPagerProperties::NormalPipStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_NormalPipStyleProperty));
}

void PipsPagerProperties::NumberOfPages(int value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_NumberOfPagesProperty, ValueHelper<int>::BoxValueIfNecessary(value));
    }
}

int PipsPagerProperties::NumberOfPages()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_NumberOfPagesProperty));
}

void PipsPagerProperties::Orientation(winrt::Orientation const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_OrientationProperty, ValueHelper<winrt::Orientation>::BoxValueIfNecessary(value));
    }
}

winrt::Orientation PipsPagerProperties::Orientation()
{
    return ValueHelper<winrt::Orientation>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_OrientationProperty));
}

void PipsPagerProperties::PreviousButtonStyle(winrt::Style const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_PreviousButtonStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
    }
}

winrt::Style PipsPagerProperties::PreviousButtonStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_PreviousButtonStyleProperty));
}

void PipsPagerProperties::PreviousButtonVisibility(winrt::PipsPagerButtonVisibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_PreviousButtonVisibilityProperty, ValueHelper<winrt::PipsPagerButtonVisibility>::BoxValueIfNecessary(value));
    }
}

winrt::PipsPagerButtonVisibility PipsPagerProperties::PreviousButtonVisibility()
{
    return ValueHelper<winrt::PipsPagerButtonVisibility>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_PreviousButtonVisibilityProperty));
}

void PipsPagerProperties::SelectedPageIndex(int value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_SelectedPageIndexProperty, ValueHelper<int>::BoxValueIfNecessary(value));
    }
}

int PipsPagerProperties::SelectedPageIndex()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_SelectedPageIndexProperty));
}

void PipsPagerProperties::SelectedPipStyle(winrt::Style const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_SelectedPipStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
    }
}

winrt::Style PipsPagerProperties::SelectedPipStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_SelectedPipStyleProperty));
}

void PipsPagerProperties::TemplateSettings(winrt::PipsPagerTemplateSettings const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_TemplateSettingsProperty, ValueHelper<winrt::PipsPagerTemplateSettings>::BoxValueIfNecessary(value));
    }
}

winrt::PipsPagerTemplateSettings PipsPagerProperties::TemplateSettings()
{
    return ValueHelper<winrt::PipsPagerTemplateSettings>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_TemplateSettingsProperty));
}

void PipsPagerProperties::WrapMode(winrt::PipsPagerWrapMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<PipsPager*>(this)->SetValue(s_WrapModeProperty, ValueHelper<winrt::PipsPagerWrapMode>::BoxValueIfNecessary(value));
    }
}

winrt::PipsPagerWrapMode PipsPagerProperties::WrapMode()
{
    return ValueHelper<winrt::PipsPagerWrapMode>::CastOrUnbox(static_cast<PipsPager*>(this)->GetValue(s_WrapModeProperty));
}

winrt::event_token PipsPagerProperties::SelectedIndexChanged(winrt::TypedEventHandler<winrt::PipsPager, winrt::PipsPagerSelectedIndexChangedEventArgs> const& value)
{
    return m_selectedIndexChangedEventSource.add(value);
}

void PipsPagerProperties::SelectedIndexChanged(winrt::event_token const& token)
{
    m_selectedIndexChangedEventSource.remove(token);
}
