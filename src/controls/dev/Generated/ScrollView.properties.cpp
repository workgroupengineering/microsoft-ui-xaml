// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ScrollView.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(ScrollView)
}

#include "ScrollView.g.cpp"

GlobalDependencyProperty ScrollViewProperties::s_ComputedHorizontalScrollBarVisibilityProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_ComputedHorizontalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_ComputedVerticalScrollBarVisibilityProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_ComputedVerticalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_ContentProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_ContentOrientationProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_HorizontalAnchorRatioProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_HorizontalScrollBarVisibilityProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_HorizontalScrollChainModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_HorizontalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_HorizontalScrollRailModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_IgnoredInputKindsProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_MaxZoomFactorProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_MinZoomFactorProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_ScrollPresenterProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_VerticalAnchorRatioProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_VerticalScrollBarVisibilityProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_VerticalScrollChainModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_VerticalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_VerticalScrollRailModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_ZoomChainModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_ZoomModeProperty{ nullptr };

ScrollViewProperties::ScrollViewProperties()
    : m_anchorRequestedEventSource{static_cast<ScrollView*>(this)}
    , m_bringingIntoViewEventSource{static_cast<ScrollView*>(this)}
    , m_extentChangedEventSource{static_cast<ScrollView*>(this)}
    , m_scrollAnimationStartingEventSource{static_cast<ScrollView*>(this)}
    , m_scrollCompletedEventSource{static_cast<ScrollView*>(this)}
    , m_scrollStartingEventSource{static_cast<ScrollView*>(this)}
    , m_stateChangedEventSource{static_cast<ScrollView*>(this)}
    , m_viewChangedEventSource{static_cast<ScrollView*>(this)}
    , m_zoomAnimationStartingEventSource{static_cast<ScrollView*>(this)}
    , m_zoomCompletedEventSource{static_cast<ScrollView*>(this)}
    , m_zoomStartingEventSource{static_cast<ScrollView*>(this)}
{
    EnsureProperties();
}

void ScrollViewProperties::EnsureProperties()
{
    if (!s_ComputedHorizontalScrollBarVisibilityProperty)
    {
        s_ComputedHorizontalScrollBarVisibilityProperty =
            InitializeDependencyProperty(
                L"ComputedHorizontalScrollBarVisibility",
                winrt::name_of<winrt::Visibility>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::Visibility>::BoxValueIfNecessary(ScrollView::s_defaultComputedHorizontalScrollBarVisibility),
                winrt::PropertyChangedCallback(&OnComputedHorizontalScrollBarVisibilityPropertyChanged));
    }
    if (!s_ComputedHorizontalScrollModeProperty)
    {
        s_ComputedHorizontalScrollModeProperty =
            InitializeDependencyProperty(
                L"ComputedHorizontalScrollMode",
                winrt::name_of<winrt::ScrollingScrollMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingScrollMode>::BoxValueIfNecessary(ScrollView::s_defaultComputedHorizontalScrollMode),
                winrt::PropertyChangedCallback(&OnComputedHorizontalScrollModePropertyChanged));
    }
    if (!s_ComputedVerticalScrollBarVisibilityProperty)
    {
        s_ComputedVerticalScrollBarVisibilityProperty =
            InitializeDependencyProperty(
                L"ComputedVerticalScrollBarVisibility",
                winrt::name_of<winrt::Visibility>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::Visibility>::BoxValueIfNecessary(ScrollView::s_defaultComputedVerticalScrollBarVisibility),
                winrt::PropertyChangedCallback(&OnComputedVerticalScrollBarVisibilityPropertyChanged));
    }
    if (!s_ComputedVerticalScrollModeProperty)
    {
        s_ComputedVerticalScrollModeProperty =
            InitializeDependencyProperty(
                L"ComputedVerticalScrollMode",
                winrt::name_of<winrt::ScrollingScrollMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingScrollMode>::BoxValueIfNecessary(ScrollView::s_defaultComputedVerticalScrollMode),
                winrt::PropertyChangedCallback(&OnComputedVerticalScrollModePropertyChanged));
    }
    if (!s_ContentProperty)
    {
        s_ContentProperty =
            InitializeDependencyProperty(
                L"Content",
                winrt::name_of<winrt::UIElement>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::UIElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnContentPropertyChanged));
    }
    if (!s_ContentOrientationProperty)
    {
        s_ContentOrientationProperty =
            InitializeDependencyProperty(
                L"ContentOrientation",
                winrt::name_of<winrt::ScrollingContentOrientation>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingContentOrientation>::BoxValueIfNecessary(ScrollView::s_defaultContentOrientation),
                winrt::PropertyChangedCallback(&OnContentOrientationPropertyChanged));
    }
    if (!s_HorizontalAnchorRatioProperty)
    {
        s_HorizontalAnchorRatioProperty =
            InitializeDependencyProperty(
                L"HorizontalAnchorRatio",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollView::s_defaultAnchorRatio),
                winrt::PropertyChangedCallback(&OnHorizontalAnchorRatioPropertyChanged));
    }
    if (!s_HorizontalScrollBarVisibilityProperty)
    {
        s_HorizontalScrollBarVisibilityProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollBarVisibility",
                winrt::name_of<winrt::ScrollingScrollBarVisibility>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingScrollBarVisibility>::BoxValueIfNecessary(ScrollView::s_defaultHorizontalScrollBarVisibility),
                winrt::PropertyChangedCallback(&OnHorizontalScrollBarVisibilityPropertyChanged));
    }
    if (!s_HorizontalScrollChainModeProperty)
    {
        s_HorizontalScrollChainModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollChainMode",
                winrt::name_of<winrt::ScrollingChainMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(ScrollView::s_defaultHorizontalScrollChainMode),
                winrt::PropertyChangedCallback(&OnHorizontalScrollChainModePropertyChanged));
    }
    if (!s_HorizontalScrollModeProperty)
    {
        s_HorizontalScrollModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollMode",
                winrt::name_of<winrt::ScrollingScrollMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingScrollMode>::BoxValueIfNecessary(ScrollView::s_defaultHorizontalScrollMode),
                winrt::PropertyChangedCallback(&OnHorizontalScrollModePropertyChanged));
    }
    if (!s_HorizontalScrollRailModeProperty)
    {
        s_HorizontalScrollRailModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollRailMode",
                winrt::name_of<winrt::ScrollingRailMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingRailMode>::BoxValueIfNecessary(ScrollView::s_defaultHorizontalScrollRailMode),
                winrt::PropertyChangedCallback(&OnHorizontalScrollRailModePropertyChanged));
    }
    if (!s_IgnoredInputKindsProperty)
    {
        s_IgnoredInputKindsProperty =
            InitializeDependencyProperty(
                L"IgnoredInputKinds",
                winrt::name_of<winrt::ScrollingInputKinds>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingInputKinds>::BoxValueIfNecessary(ScrollView::s_defaultIgnoredInputKinds),
                winrt::PropertyChangedCallback(&OnIgnoredInputKindsPropertyChanged));
    }
    if (!s_MaxZoomFactorProperty)
    {
        s_MaxZoomFactorProperty =
            InitializeDependencyProperty(
                L"MaxZoomFactor",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollView::s_defaultMaxZoomFactor),
                winrt::PropertyChangedCallback(&OnMaxZoomFactorPropertyChanged));
    }
    if (!s_MinZoomFactorProperty)
    {
        s_MinZoomFactorProperty =
            InitializeDependencyProperty(
                L"MinZoomFactor",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollView::s_defaultMinZoomFactor),
                winrt::PropertyChangedCallback(&OnMinZoomFactorPropertyChanged));
    }
    if (!s_ScrollPresenterProperty)
    {
        s_ScrollPresenterProperty =
            InitializeDependencyProperty(
                L"ScrollPresenter",
                winrt::name_of<winrt::ScrollPresenter>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollPresenter>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnScrollPresenterPropertyChanged));
    }
    if (!s_VerticalAnchorRatioProperty)
    {
        s_VerticalAnchorRatioProperty =
            InitializeDependencyProperty(
                L"VerticalAnchorRatio",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollView::s_defaultAnchorRatio),
                winrt::PropertyChangedCallback(&OnVerticalAnchorRatioPropertyChanged));
    }
    if (!s_VerticalScrollBarVisibilityProperty)
    {
        s_VerticalScrollBarVisibilityProperty =
            InitializeDependencyProperty(
                L"VerticalScrollBarVisibility",
                winrt::name_of<winrt::ScrollingScrollBarVisibility>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingScrollBarVisibility>::BoxValueIfNecessary(ScrollView::s_defaultVerticalScrollBarVisibility),
                winrt::PropertyChangedCallback(&OnVerticalScrollBarVisibilityPropertyChanged));
    }
    if (!s_VerticalScrollChainModeProperty)
    {
        s_VerticalScrollChainModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollChainMode",
                winrt::name_of<winrt::ScrollingChainMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(ScrollView::s_defaultVerticalScrollChainMode),
                winrt::PropertyChangedCallback(&OnVerticalScrollChainModePropertyChanged));
    }
    if (!s_VerticalScrollModeProperty)
    {
        s_VerticalScrollModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollMode",
                winrt::name_of<winrt::ScrollingScrollMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingScrollMode>::BoxValueIfNecessary(ScrollView::s_defaultVerticalScrollMode),
                winrt::PropertyChangedCallback(&OnVerticalScrollModePropertyChanged));
    }
    if (!s_VerticalScrollRailModeProperty)
    {
        s_VerticalScrollRailModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollRailMode",
                winrt::name_of<winrt::ScrollingRailMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingRailMode>::BoxValueIfNecessary(ScrollView::s_defaultVerticalScrollRailMode),
                winrt::PropertyChangedCallback(&OnVerticalScrollRailModePropertyChanged));
    }
    if (!s_ZoomChainModeProperty)
    {
        s_ZoomChainModeProperty =
            InitializeDependencyProperty(
                L"ZoomChainMode",
                winrt::name_of<winrt::ScrollingChainMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(ScrollView::s_defaultZoomChainMode),
                winrt::PropertyChangedCallback(&OnZoomChainModePropertyChanged));
    }
    if (!s_ZoomModeProperty)
    {
        s_ZoomModeProperty =
            InitializeDependencyProperty(
                L"ZoomMode",
                winrt::name_of<winrt::ScrollingZoomMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingZoomMode>::BoxValueIfNecessary(ScrollView::s_defaultZoomMode),
                winrt::PropertyChangedCallback(&OnZoomModePropertyChanged));
    }
}

void ScrollViewProperties::ClearProperties()
{
    s_ComputedHorizontalScrollBarVisibilityProperty = nullptr;
    s_ComputedHorizontalScrollModeProperty = nullptr;
    s_ComputedVerticalScrollBarVisibilityProperty = nullptr;
    s_ComputedVerticalScrollModeProperty = nullptr;
    s_ContentProperty = nullptr;
    s_ContentOrientationProperty = nullptr;
    s_HorizontalAnchorRatioProperty = nullptr;
    s_HorizontalScrollBarVisibilityProperty = nullptr;
    s_HorizontalScrollChainModeProperty = nullptr;
    s_HorizontalScrollModeProperty = nullptr;
    s_HorizontalScrollRailModeProperty = nullptr;
    s_IgnoredInputKindsProperty = nullptr;
    s_MaxZoomFactorProperty = nullptr;
    s_MinZoomFactorProperty = nullptr;
    s_ScrollPresenterProperty = nullptr;
    s_VerticalAnchorRatioProperty = nullptr;
    s_VerticalScrollBarVisibilityProperty = nullptr;
    s_VerticalScrollChainModeProperty = nullptr;
    s_VerticalScrollModeProperty = nullptr;
    s_VerticalScrollRailModeProperty = nullptr;
    s_ZoomChainModeProperty = nullptr;
    s_ZoomModeProperty = nullptr;
}

void ScrollViewProperties::OnComputedHorizontalScrollBarVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnComputedHorizontalScrollModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnComputedVerticalScrollBarVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnComputedVerticalScrollModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnContentPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnContentOrientationPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnHorizontalAnchorRatioPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollView>(owner)->ValidateAnchorRatio(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnHorizontalScrollBarVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnHorizontalScrollChainModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnHorizontalScrollModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnHorizontalScrollRailModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnIgnoredInputKindsPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnMaxZoomFactorPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollView>(owner)->ValidateZoomFactoryBoundary(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnMinZoomFactorPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollView>(owner)->ValidateZoomFactoryBoundary(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnScrollPresenterPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnVerticalAnchorRatioPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollView>(owner)->ValidateAnchorRatio(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnVerticalScrollBarVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnVerticalScrollChainModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnVerticalScrollModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnVerticalScrollRailModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnZoomChainModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnZoomModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::ComputedHorizontalScrollBarVisibility(winrt::Visibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_ComputedHorizontalScrollBarVisibilityProperty, ValueHelper<winrt::Visibility>::BoxValueIfNecessary(value));
    }
}

winrt::Visibility ScrollViewProperties::ComputedHorizontalScrollBarVisibility()
{
    return ValueHelper<winrt::Visibility>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_ComputedHorizontalScrollBarVisibilityProperty));
}

void ScrollViewProperties::ComputedHorizontalScrollMode(winrt::ScrollingScrollMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_ComputedHorizontalScrollModeProperty, ValueHelper<winrt::ScrollingScrollMode>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollingScrollMode ScrollViewProperties::ComputedHorizontalScrollMode()
{
    return ValueHelper<winrt::ScrollingScrollMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_ComputedHorizontalScrollModeProperty));
}

void ScrollViewProperties::ComputedVerticalScrollBarVisibility(winrt::Visibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_ComputedVerticalScrollBarVisibilityProperty, ValueHelper<winrt::Visibility>::BoxValueIfNecessary(value));
    }
}

winrt::Visibility ScrollViewProperties::ComputedVerticalScrollBarVisibility()
{
    return ValueHelper<winrt::Visibility>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_ComputedVerticalScrollBarVisibilityProperty));
}

void ScrollViewProperties::ComputedVerticalScrollMode(winrt::ScrollingScrollMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_ComputedVerticalScrollModeProperty, ValueHelper<winrt::ScrollingScrollMode>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollingScrollMode ScrollViewProperties::ComputedVerticalScrollMode()
{
    return ValueHelper<winrt::ScrollingScrollMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_ComputedVerticalScrollModeProperty));
}

void ScrollViewProperties::Content(winrt::UIElement const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_ContentProperty, ValueHelper<winrt::UIElement>::BoxValueIfNecessary(value));
    }
}

winrt::UIElement ScrollViewProperties::Content()
{
    return ValueHelper<winrt::UIElement>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_ContentProperty));
}

void ScrollViewProperties::ContentOrientation(winrt::ScrollingContentOrientation const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_ContentOrientationProperty, ValueHelper<winrt::ScrollingContentOrientation>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollingContentOrientation ScrollViewProperties::ContentOrientation()
{
    return ValueHelper<winrt::ScrollingContentOrientation>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_ContentOrientationProperty));
}

void ScrollViewProperties::HorizontalAnchorRatio(double value)
{
    [[gsl::suppress(con)]]
    {
    double coercedValue = value;
    static_cast<ScrollView*>(this)->ValidateAnchorRatio(coercedValue);
    static_cast<ScrollView*>(this)->SetValue(s_HorizontalAnchorRatioProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
    }
}

double ScrollViewProperties::HorizontalAnchorRatio()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_HorizontalAnchorRatioProperty));
}

void ScrollViewProperties::HorizontalScrollBarVisibility(winrt::ScrollingScrollBarVisibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_HorizontalScrollBarVisibilityProperty, ValueHelper<winrt::ScrollingScrollBarVisibility>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollingScrollBarVisibility ScrollViewProperties::HorizontalScrollBarVisibility()
{
    return ValueHelper<winrt::ScrollingScrollBarVisibility>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_HorizontalScrollBarVisibilityProperty));
}

void ScrollViewProperties::HorizontalScrollChainMode(winrt::ScrollingChainMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_HorizontalScrollChainModeProperty, ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollingChainMode ScrollViewProperties::HorizontalScrollChainMode()
{
    return ValueHelper<winrt::ScrollingChainMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_HorizontalScrollChainModeProperty));
}

void ScrollViewProperties::HorizontalScrollMode(winrt::ScrollingScrollMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_HorizontalScrollModeProperty, ValueHelper<winrt::ScrollingScrollMode>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollingScrollMode ScrollViewProperties::HorizontalScrollMode()
{
    return ValueHelper<winrt::ScrollingScrollMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_HorizontalScrollModeProperty));
}

void ScrollViewProperties::HorizontalScrollRailMode(winrt::ScrollingRailMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_HorizontalScrollRailModeProperty, ValueHelper<winrt::ScrollingRailMode>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollingRailMode ScrollViewProperties::HorizontalScrollRailMode()
{
    return ValueHelper<winrt::ScrollingRailMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_HorizontalScrollRailModeProperty));
}

void ScrollViewProperties::IgnoredInputKinds(winrt::ScrollingInputKinds const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_IgnoredInputKindsProperty, ValueHelper<winrt::ScrollingInputKinds>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollingInputKinds ScrollViewProperties::IgnoredInputKinds()
{
    return ValueHelper<winrt::ScrollingInputKinds>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_IgnoredInputKindsProperty));
}

void ScrollViewProperties::MaxZoomFactor(double value)
{
    [[gsl::suppress(con)]]
    {
    double coercedValue = value;
    static_cast<ScrollView*>(this)->ValidateZoomFactoryBoundary(coercedValue);
    static_cast<ScrollView*>(this)->SetValue(s_MaxZoomFactorProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
    }
}

double ScrollViewProperties::MaxZoomFactor()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_MaxZoomFactorProperty));
}

void ScrollViewProperties::MinZoomFactor(double value)
{
    [[gsl::suppress(con)]]
    {
    double coercedValue = value;
    static_cast<ScrollView*>(this)->ValidateZoomFactoryBoundary(coercedValue);
    static_cast<ScrollView*>(this)->SetValue(s_MinZoomFactorProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
    }
}

double ScrollViewProperties::MinZoomFactor()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_MinZoomFactorProperty));
}

void ScrollViewProperties::ScrollPresenter(winrt::ScrollPresenter const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_ScrollPresenterProperty, ValueHelper<winrt::ScrollPresenter>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollPresenter ScrollViewProperties::ScrollPresenter()
{
    return ValueHelper<winrt::ScrollPresenter>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_ScrollPresenterProperty));
}

void ScrollViewProperties::VerticalAnchorRatio(double value)
{
    [[gsl::suppress(con)]]
    {
    double coercedValue = value;
    static_cast<ScrollView*>(this)->ValidateAnchorRatio(coercedValue);
    static_cast<ScrollView*>(this)->SetValue(s_VerticalAnchorRatioProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
    }
}

double ScrollViewProperties::VerticalAnchorRatio()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_VerticalAnchorRatioProperty));
}

void ScrollViewProperties::VerticalScrollBarVisibility(winrt::ScrollingScrollBarVisibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_VerticalScrollBarVisibilityProperty, ValueHelper<winrt::ScrollingScrollBarVisibility>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollingScrollBarVisibility ScrollViewProperties::VerticalScrollBarVisibility()
{
    return ValueHelper<winrt::ScrollingScrollBarVisibility>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_VerticalScrollBarVisibilityProperty));
}

void ScrollViewProperties::VerticalScrollChainMode(winrt::ScrollingChainMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_VerticalScrollChainModeProperty, ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollingChainMode ScrollViewProperties::VerticalScrollChainMode()
{
    return ValueHelper<winrt::ScrollingChainMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_VerticalScrollChainModeProperty));
}

void ScrollViewProperties::VerticalScrollMode(winrt::ScrollingScrollMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_VerticalScrollModeProperty, ValueHelper<winrt::ScrollingScrollMode>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollingScrollMode ScrollViewProperties::VerticalScrollMode()
{
    return ValueHelper<winrt::ScrollingScrollMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_VerticalScrollModeProperty));
}

void ScrollViewProperties::VerticalScrollRailMode(winrt::ScrollingRailMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_VerticalScrollRailModeProperty, ValueHelper<winrt::ScrollingRailMode>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollingRailMode ScrollViewProperties::VerticalScrollRailMode()
{
    return ValueHelper<winrt::ScrollingRailMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_VerticalScrollRailModeProperty));
}

void ScrollViewProperties::ZoomChainMode(winrt::ScrollingChainMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_ZoomChainModeProperty, ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollingChainMode ScrollViewProperties::ZoomChainMode()
{
    return ValueHelper<winrt::ScrollingChainMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_ZoomChainModeProperty));
}

void ScrollViewProperties::ZoomMode(winrt::ScrollingZoomMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_ZoomModeProperty, ValueHelper<winrt::ScrollingZoomMode>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollingZoomMode ScrollViewProperties::ZoomMode()
{
    return ValueHelper<winrt::ScrollingZoomMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_ZoomModeProperty));
}

winrt::event_token ScrollViewProperties::AnchorRequested(winrt::TypedEventHandler<winrt::ScrollView, winrt::ScrollingAnchorRequestedEventArgs> const& value)
{
    return m_anchorRequestedEventSource.add(value);
}

void ScrollViewProperties::AnchorRequested(winrt::event_token const& token)
{
    m_anchorRequestedEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::BringingIntoView(winrt::TypedEventHandler<winrt::ScrollView, winrt::ScrollingBringingIntoViewEventArgs> const& value)
{
    return m_bringingIntoViewEventSource.add(value);
}

void ScrollViewProperties::BringingIntoView(winrt::event_token const& token)
{
    m_bringingIntoViewEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::ExtentChanged(winrt::TypedEventHandler<winrt::ScrollView, winrt::IInspectable> const& value)
{
    return m_extentChangedEventSource.add(value);
}

void ScrollViewProperties::ExtentChanged(winrt::event_token const& token)
{
    m_extentChangedEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::ScrollAnimationStarting(winrt::TypedEventHandler<winrt::ScrollView, winrt::ScrollingScrollAnimationStartingEventArgs> const& value)
{
    return m_scrollAnimationStartingEventSource.add(value);
}

void ScrollViewProperties::ScrollAnimationStarting(winrt::event_token const& token)
{
    m_scrollAnimationStartingEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::ScrollCompleted(winrt::TypedEventHandler<winrt::ScrollView, winrt::ScrollingScrollCompletedEventArgs> const& value)
{
    return m_scrollCompletedEventSource.add(value);
}

void ScrollViewProperties::ScrollCompleted(winrt::event_token const& token)
{
    m_scrollCompletedEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::ScrollStarting(winrt::TypedEventHandler<winrt::ScrollView, winrt::ScrollingScrollStartingEventArgs> const& value)
{
    return m_scrollStartingEventSource.add(value);
}

void ScrollViewProperties::ScrollStarting(winrt::event_token const& token)
{
    m_scrollStartingEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::StateChanged(winrt::TypedEventHandler<winrt::ScrollView, winrt::IInspectable> const& value)
{
    return m_stateChangedEventSource.add(value);
}

void ScrollViewProperties::StateChanged(winrt::event_token const& token)
{
    m_stateChangedEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::ViewChanged(winrt::TypedEventHandler<winrt::ScrollView, winrt::IInspectable> const& value)
{
    return m_viewChangedEventSource.add(value);
}

void ScrollViewProperties::ViewChanged(winrt::event_token const& token)
{
    m_viewChangedEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::ZoomAnimationStarting(winrt::TypedEventHandler<winrt::ScrollView, winrt::ScrollingZoomAnimationStartingEventArgs> const& value)
{
    return m_zoomAnimationStartingEventSource.add(value);
}

void ScrollViewProperties::ZoomAnimationStarting(winrt::event_token const& token)
{
    m_zoomAnimationStartingEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::ZoomCompleted(winrt::TypedEventHandler<winrt::ScrollView, winrt::ScrollingZoomCompletedEventArgs> const& value)
{
    return m_zoomCompletedEventSource.add(value);
}

void ScrollViewProperties::ZoomCompleted(winrt::event_token const& token)
{
    m_zoomCompletedEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::ZoomStarting(winrt::TypedEventHandler<winrt::ScrollView, winrt::ScrollingZoomStartingEventArgs> const& value)
{
    return m_zoomStartingEventSource.add(value);
}

void ScrollViewProperties::ZoomStarting(winrt::event_token const& token)
{
    m_zoomStartingEventSource.remove(token);
}
