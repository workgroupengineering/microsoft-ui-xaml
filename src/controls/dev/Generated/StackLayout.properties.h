// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class StackLayoutProperties
{
public:
    StackLayoutProperties();

    void IsVirtualizationEnabled(bool value);
    bool IsVirtualizationEnabled();

    void Orientation(winrt::Orientation const& value);
    winrt::Orientation Orientation();

    void Spacing(double value);
    double Spacing();

    static winrt::DependencyProperty IsVirtualizationEnabledProperty() { return s_IsVirtualizationEnabledProperty; }
    static winrt::DependencyProperty OrientationProperty() { return s_OrientationProperty; }
    static winrt::DependencyProperty SpacingProperty() { return s_SpacingProperty; }

    static GlobalDependencyProperty s_IsVirtualizationEnabledProperty;
    static GlobalDependencyProperty s_OrientationProperty;
    static GlobalDependencyProperty s_SpacingProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnIsVirtualizationEnabledPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnOrientationPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSpacingPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
