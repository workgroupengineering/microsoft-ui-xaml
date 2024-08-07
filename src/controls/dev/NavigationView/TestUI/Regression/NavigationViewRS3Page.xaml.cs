﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.ApplicationModel.Core;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI;
using Microsoft.UI.Xaml;
using Microsoft.UI.Xaml.Controls;
using Microsoft.UI.Xaml.Controls.Primitives;
using Microsoft.UI.Xaml.Data;
using Microsoft.UI.Xaml.Input;
using Microsoft.UI.Xaml.Media;
using Microsoft.UI.Xaml.Navigation;
using Microsoft.UI.Xaml.Automation;
using System;
using Windows.UI.Core;

namespace MUXControlsTestApp
{
    /// <summary>
    /// Verify ShouldPreserveNavigationViewRS3Behavior
    /// </summary>
    public sealed partial class NavigationViewRS3Page : TestPage
    {
         public NavigationViewRS3Page()
        {
            this.InitializeComponent();

            Loaded += OnLoaded;
        }

        private void OnLoaded(object sender, RoutedEventArgs e)
        {
            ChangeTestFrameVisibility(Visibility.Collapsed);

            if (CoreWindow.GetForCurrentThread() != null)
            {
                CoreApplicationViewTitleBar titleBar = CoreApplication.GetCurrentView().TitleBar;
                titleBar.ExtendViewIntoTitleBar = true;
            }

            NavView.IsBackButtonVisible = NavigationViewBackButtonVisible.Visible;
            NavView.IsBackEnabled = true;
        }
        private void TestFrameCheckbox_Checked(object sender, RoutedEventArgs e)
        {
            ChangeTestFrameVisibility(Visibility.Visible);
            
            if (CoreWindow.GetForCurrentThread() != null)
            {
                // Show titlebar to reenable clicking the buttons in the test frame
                CoreApplication.GetCurrentView().TitleBar.ExtendViewIntoTitleBar = false;
            }
        }

        private void TestFrameCheckbox_Unchecked(object sender, RoutedEventArgs e)
        {
            ChangeTestFrameVisibility(Visibility.Collapsed);
            
            if (CoreWindow.GetForCurrentThread() != null)
            {
                // Hide titlebar again in case we hid it before
                CoreApplication.GetCurrentView().TitleBar.ExtendViewIntoTitleBar = true;
            }
        }

        private void ChangeTestFrameVisibility(Visibility visibility)
        {
            var testFrame = App.CurrentWindow.Content as TestFrame;
            testFrame.ChangeBarVisibility(visibility);
        }

        private void GetTopPaddingHeight_Click(object sender, RoutedEventArgs e)
        {
            Grid rootGrid = VisualTreeHelper.GetChild(NavView, 0) as Grid;
            if (rootGrid != null)
            {
                Grid paneContentGrid = rootGrid.FindName("TogglePaneTopPadding") as Grid;
                TestResult.Text = paneContentGrid.Height.ToString();
            }           
        }

        private void GetToggleButtonRowHeight_Click(object sender, RoutedEventArgs e)
        {
            Grid rootGrid = VisualTreeHelper.GetChild(NavView, 0) as Grid;
            if (rootGrid != null)
            {
                Grid paneContentGrid = rootGrid.FindName("PaneContentGrid") as Grid;
                TestResult.Text = paneContentGrid.RowDefinitions[1].Height.ToString();
            }
        }

    }
}
