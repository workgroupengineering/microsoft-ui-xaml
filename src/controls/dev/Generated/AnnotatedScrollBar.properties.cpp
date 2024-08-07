// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "AnnotatedScrollBar.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(AnnotatedScrollBar)
}

#include "AnnotatedScrollBar.g.cpp"

GlobalDependencyProperty AnnotatedScrollBarProperties::s_DetailLabelTemplateProperty{ nullptr };
GlobalDependencyProperty AnnotatedScrollBarProperties::s_LabelsProperty{ nullptr };
GlobalDependencyProperty AnnotatedScrollBarProperties::s_LabelTemplateProperty{ nullptr };
GlobalDependencyProperty AnnotatedScrollBarProperties::s_SmallChangeProperty{ nullptr };

AnnotatedScrollBarProperties::AnnotatedScrollBarProperties()
    : m_detailLabelRequestedEventSource{static_cast<AnnotatedScrollBar*>(this)}
    , m_scrollingEventSource{static_cast<AnnotatedScrollBar*>(this)}
{
    EnsureProperties();
}

void AnnotatedScrollBarProperties::EnsureProperties()
{
    if (!s_DetailLabelTemplateProperty)
    {
        s_DetailLabelTemplateProperty =
            InitializeDependencyProperty(
                L"DetailLabelTemplate",
                winrt::name_of<winrt::IElementFactory>(),
                winrt::name_of<winrt::AnnotatedScrollBar>(),
                false /* isAttached */,
                ValueHelper<winrt::IElementFactory>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnDetailLabelTemplatePropertyChanged));
    }
    if (!s_LabelsProperty)
    {
        s_LabelsProperty =
            InitializeDependencyProperty(
                L"Labels",
                winrt::name_of<winrt::IVector<winrt::AnnotatedScrollBarLabel>>(),
                winrt::name_of<winrt::AnnotatedScrollBar>(),
                false /* isAttached */,
                ValueHelper<winrt::IVector<winrt::AnnotatedScrollBarLabel>>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnLabelsPropertyChanged));
    }
    if (!s_LabelTemplateProperty)
    {
        s_LabelTemplateProperty =
            InitializeDependencyProperty(
                L"LabelTemplate",
                winrt::name_of<winrt::IElementFactory>(),
                winrt::name_of<winrt::AnnotatedScrollBar>(),
                false /* isAttached */,
                ValueHelper<winrt::IElementFactory>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnLabelTemplatePropertyChanged));
    }
    if (!s_SmallChangeProperty)
    {
        s_SmallChangeProperty =
            InitializeDependencyProperty(
                L"SmallChange",
                winrt::name_of<double>(),
                winrt::name_of<winrt::AnnotatedScrollBar>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnSmallChangePropertyChanged));
    }
}

void AnnotatedScrollBarProperties::ClearProperties()
{
    s_DetailLabelTemplateProperty = nullptr;
    s_LabelsProperty = nullptr;
    s_LabelTemplateProperty = nullptr;
    s_SmallChangeProperty = nullptr;
}

void AnnotatedScrollBarProperties::OnDetailLabelTemplatePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::AnnotatedScrollBar>();
    winrt::get_self<AnnotatedScrollBar>(owner)->OnPropertyChanged(args);
}

void AnnotatedScrollBarProperties::OnLabelsPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::AnnotatedScrollBar>();
    winrt::get_self<AnnotatedScrollBar>(owner)->OnPropertyChanged(args);
}

void AnnotatedScrollBarProperties::OnLabelTemplatePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::AnnotatedScrollBar>();
    winrt::get_self<AnnotatedScrollBar>(owner)->OnPropertyChanged(args);
}

void AnnotatedScrollBarProperties::OnSmallChangePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::AnnotatedScrollBar>();
    winrt::get_self<AnnotatedScrollBar>(owner)->OnPropertyChanged(args);
}

void AnnotatedScrollBarProperties::DetailLabelTemplate(winrt::IElementFactory const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<AnnotatedScrollBar*>(this)->SetValue(s_DetailLabelTemplateProperty, ValueHelper<winrt::IElementFactory>::BoxValueIfNecessary(value));
    }
}

winrt::IElementFactory AnnotatedScrollBarProperties::DetailLabelTemplate()
{
    return ValueHelper<winrt::IElementFactory>::CastOrUnbox(static_cast<AnnotatedScrollBar*>(this)->GetValue(s_DetailLabelTemplateProperty));
}

void AnnotatedScrollBarProperties::Labels(winrt::IVector<winrt::AnnotatedScrollBarLabel> const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<AnnotatedScrollBar*>(this)->SetValue(s_LabelsProperty, ValueHelper<winrt::IVector<winrt::AnnotatedScrollBarLabel>>::BoxValueIfNecessary(value));
    }
}

winrt::IVector<winrt::AnnotatedScrollBarLabel> AnnotatedScrollBarProperties::Labels()
{
    return ValueHelper<winrt::IVector<winrt::AnnotatedScrollBarLabel>>::CastOrUnbox(static_cast<AnnotatedScrollBar*>(this)->GetValue(s_LabelsProperty));
}

void AnnotatedScrollBarProperties::LabelTemplate(winrt::IElementFactory const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<AnnotatedScrollBar*>(this)->SetValue(s_LabelTemplateProperty, ValueHelper<winrt::IElementFactory>::BoxValueIfNecessary(value));
    }
}

winrt::IElementFactory AnnotatedScrollBarProperties::LabelTemplate()
{
    return ValueHelper<winrt::IElementFactory>::CastOrUnbox(static_cast<AnnotatedScrollBar*>(this)->GetValue(s_LabelTemplateProperty));
}

void AnnotatedScrollBarProperties::SmallChange(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<AnnotatedScrollBar*>(this)->SetValue(s_SmallChangeProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double AnnotatedScrollBarProperties::SmallChange()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<AnnotatedScrollBar*>(this)->GetValue(s_SmallChangeProperty));
}

winrt::event_token AnnotatedScrollBarProperties::DetailLabelRequested(winrt::TypedEventHandler<winrt::AnnotatedScrollBar, winrt::AnnotatedScrollBarDetailLabelRequestedEventArgs> const& value)
{
    return m_detailLabelRequestedEventSource.add(value);
}

void AnnotatedScrollBarProperties::DetailLabelRequested(winrt::event_token const& token)
{
    m_detailLabelRequestedEventSource.remove(token);
}

winrt::event_token AnnotatedScrollBarProperties::Scrolling(winrt::TypedEventHandler<winrt::AnnotatedScrollBar, winrt::AnnotatedScrollBarScrollingEventArgs> const& value)
{
    return m_scrollingEventSource.add(value);
}

void AnnotatedScrollBarProperties::Scrolling(winrt::event_token const& token)
{
    m_scrollingEventSource.remove(token);
}
