﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

using Common;
using MUXControlsTestApp.Utilities;
using Microsoft.UI.Xaml.Controls;
using Microsoft.UI.Xaml.Media;
using System.Linq;
using System.Collections.Generic;
using MUXControlsTestApp;

using WEX.TestExecution;
using WEX.TestExecution.Markup;
using WEX.Logging.Interop;

namespace Microsoft.UI.Xaml.Tests.MUXControls.ApiTests
{
    [TestClass]
    public class AutoSuggestBoxTests : ApiTestBase
    {
        [TestMethod]
        [TestProperty("Ignore", "True")] // TODO 29616803: Disabled after converting MUXControlsTestApp to a desktop .NET 5 app.  Re-enable when fixed.
        public void VerifyAutoSuggestBoxCornerRadius()
        {
            var autoSuggestBox = SetupAutoSuggestBox();

            RunOnUIThread.Execute(() =>
            {
                autoSuggestBox.CornerRadius = new CornerRadius(2);
                autoSuggestBox.Focus(FocusState.Keyboard);
                autoSuggestBox.Text = "123";
                autoSuggestBox.MaxHeight = 32;
            });
            IdleSynchronizer.Wait();

            RunOnUIThread.Execute(() =>
            {
                var textBox = TestUtilities.FindDescendents<TextBox>(autoSuggestBox).Where(e => e.Name == "TextBox").Single();

                // Flyout might open differently and as such flip corner radii values
                Verify.IsTrue(new CornerRadius(2, 2, 0, 0) == textBox.CornerRadius || new CornerRadius(0,0,2,2) == textBox.CornerRadius);

                var overlayCornerRadius = new CornerRadius(0, 0, 0, 0);
                var radius = App.Current.Resources["OverlayCornerRadius"];
                if (radius != null)
                {
                    overlayCornerRadius = (CornerRadius)radius;
                }
                var popup = VisualTreeHelper.GetOpenPopupsForXamlRoot(autoSuggestBox.XamlRoot).Last();
                var popupBorder = popup.Child as Border;

                // Flyout might open differently and as such flip corner radii values
                Verify.IsTrue(new CornerRadius(0, 0, overlayCornerRadius.BottomRight, overlayCornerRadius.BottomLeft) == popupBorder.CornerRadius
                    || new CornerRadius(overlayCornerRadius.TopRight, overlayCornerRadius.TopLeft, 0, 0) == popupBorder.CornerRadius);
            });
        }

        [TestMethod]
        public void VerifyVisualTree()
        {
            var autoSuggestBox = SetupAutoSuggestBox();
            VisualTreeTestHelper.VerifyVisualTree(root: autoSuggestBox, verificationFileNamePrefix: "AutoSuggestBox");
        }

        private AutoSuggestBox SetupAutoSuggestBox()
        {
            AutoSuggestBox autoSuggestBox = null;
            RunOnUIThread.Execute(() =>
            {
                autoSuggestBox = new AutoSuggestBox();
                List<string> suggestions = new List<string>
                {
                    "Item 1", "Item 2", "Item 3"
                };
                autoSuggestBox.ItemsSource = suggestions;
                autoSuggestBox.Width = 400;
            });
            TestUtilities.SetAsVisualTreeRoot(autoSuggestBox);
            Verify.IsNotNull(autoSuggestBox);
            return autoSuggestBox;
        }

    }
}
