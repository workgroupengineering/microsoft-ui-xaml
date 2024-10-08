﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

using MUXControlsTestApp.Utilities;
using System;
using System.Linq;
using Windows.Foundation;
using Microsoft.UI.Xaml;
using Microsoft.UI.Xaml.Controls;
using Microsoft.UI.Xaml.Controls.Primitives;
using System.Threading;
using System.Collections.Generic;
using Microsoft.UI.Xaml.Tests.MUXControls.ApiTests.RepeaterTests.Common.Mocks;
using System.Numerics;
using Common;
using System.Collections.ObjectModel;
using Microsoft.UI.Xaml.Media;
using Windows.UI;
using System.Runtime.InteropServices.WindowsRuntime;
using Microsoft.UI.Xaml.Markup;
using Microsoft.UI.Xaml.Tests.MUXControls.ApiTests.RepeaterTests.Common;

using WEX.TestExecution;
using WEX.TestExecution.Markup;
using WEX.Logging.Interop;

namespace Microsoft.UI.Xaml.Tests.MUXControls.ApiTests.RepeaterTests
{
    [TestClass]
    public class EffectiveViewportScrollPresenterTests : ApiTestBase
    {
        [TestMethod]
        public void ValidateOneScrollPresenterScenario()
        {
            var realizationRects = new List<Rect>();
            ScrollPresenter scrollPresenter = null;
            var scrollCompletedEvent = new AutoResetEvent(false);
            var zoomCompletedEvent = new AutoResetEvent(false);

            RunOnUIThread.Execute(() =>
            {
                var repeater = new ItemsRepeater()
                {
                    Layout = GetMonitoringLayout(new Size(500, 600), realizationRects),
                    HorizontalCacheLength = 0.0,
                    VerticalCacheLength = 0.0
                };

                scrollPresenter = new ScrollPresenter
                {
                    Content = repeater,
                    Width = 200,
                    Height = 300
                };

                Content = scrollPresenter;
                Content.UpdateLayout();

                Verify.AreEqual(2, realizationRects.Count);
                Verify.AreEqual(new Rect(0, 0, 0, 0), realizationRects[0]);
                Verify.AreEqual(new Rect(0, 0, 200, 300), realizationRects[1]);
                realizationRects.Clear();

                scrollPresenter.ScrollCompleted += (ScrollPresenter sender, ScrollingScrollCompletedEventArgs args) =>
                {
                    scrollCompletedEvent.Set();
                };

                scrollPresenter.ZoomCompleted += (ScrollPresenter sender, ScrollingZoomCompletedEventArgs args) =>
                {
                    zoomCompletedEvent.Set();
                };
            });
            IdleSynchronizer.Wait();

            RunOnUIThread.Execute(() =>
            {
                scrollPresenter.ScrollTo(0.0, 100.0, new ScrollingScrollOptions(ScrollingAnimationMode.Disabled, ScrollingSnapPointsMode.Ignore));
            });
            Verify.IsTrue(scrollCompletedEvent.WaitOne(DefaultWaitTimeInMS));
            CompositionPropertySpy.SynchronouslyTickUIThread(1);

            RunOnUIThread.Execute(() =>
            {
                Verify.AreEqual(new Rect(0, 100, 200, 300), realizationRects.Last());
                realizationRects.Clear();

                scrollPresenter.ZoomTo(2.0f, Vector2.Zero, new ScrollingZoomOptions(ScrollingAnimationMode.Disabled, ScrollingSnapPointsMode.Ignore));
            });
            Verify.IsTrue(zoomCompletedEvent.WaitOne(DefaultWaitTimeInMS));
            CompositionPropertySpy.SynchronouslyTickUIThread(1);

            RunOnUIThread.Execute(() =>
            {
                Verify.AreEqual(
                    new Rect(0, 100, 100, 150),
                    realizationRects.Last());
                realizationRects.Clear();
            });
        }

        [TestMethod]
        public void ValidateTwoScrollPresentersScenario()
        {
            var realizationRects = new List<Rect>();
            ScrollPresenter horizontalScrollPresenter = null;
            ScrollPresenter verticalScrollPresenter = null;
            var horizontalScrollCompletedEvent = new AutoResetEvent(false);
            var verticalScrollCompletedEvent = new AutoResetEvent(false);

            RunOnUIThread.Execute(() =>
            {
                var repeater = new ItemsRepeater()
                {
                    Layout = GetMonitoringLayout(new Size(500, 500), realizationRects),
                    HorizontalCacheLength = 0.0,
                    VerticalCacheLength = 0.0
                };

                horizontalScrollPresenter = new ScrollPresenter
                {
                    Content = repeater,
                    ContentOrientation = ScrollingContentOrientation.Horizontal
                };

                // Placing a Grid in between two ScrollPresenter controls to avoid
                // unsupported combined use of facades and ElementCompositionPreview.
                var grid = new Grid();
                grid.Children.Add(horizontalScrollPresenter);

                verticalScrollPresenter = new ScrollPresenter
                {
                    Content = grid,
                    Width = 200,
                    Height = 200,
                    ContentOrientation = ScrollingContentOrientation.Vertical
                };

                Content = verticalScrollPresenter;
                Content.UpdateLayout();

                Verify.AreEqual(2, realizationRects.Count);
                Verify.AreEqual(new Rect(0, 0, 0, 0), realizationRects[0]);
                Verify.AreEqual(new Rect(0, 0, 200, 200), realizationRects[1]);
                realizationRects.Clear();

                horizontalScrollPresenter.ScrollCompleted += (ScrollPresenter sender, ScrollingScrollCompletedEventArgs args) =>
                {
                    horizontalScrollCompletedEvent.Set();
                };

                verticalScrollPresenter.ScrollCompleted += (ScrollPresenter sender, ScrollingScrollCompletedEventArgs args) =>
                {
                    verticalScrollCompletedEvent.Set();
                };
            });
            IdleSynchronizer.Wait();

            RunOnUIThread.Execute(() =>
            {
                verticalScrollPresenter.ScrollTo(0.0, 100.0, new ScrollingScrollOptions(ScrollingAnimationMode.Disabled, ScrollingSnapPointsMode.Ignore));
            });
            Verify.IsTrue(verticalScrollCompletedEvent.WaitOne(DefaultWaitTimeInMS));
            CompositionPropertySpy.SynchronouslyTickUIThread(1);

            RunOnUIThread.Execute(() =>
            {
                Verify.AreEqual(new Rect(0, 100, 200, 200), realizationRects.Last());
                realizationRects.Clear();

                // Max viewport offset is (300, 300). Horizontal viewport offset
                // is expected to get coerced from 400 to 300.
                horizontalScrollPresenter.ScrollTo(400.0, 100.0, new ScrollingScrollOptions(ScrollingAnimationMode.Disabled, ScrollingSnapPointsMode.Ignore));
            });
            Verify.IsTrue(horizontalScrollCompletedEvent.WaitOne(DefaultWaitTimeInMS));
            CompositionPropertySpy.SynchronouslyTickUIThread(1);

            RunOnUIThread.Execute(() =>
            {
                Verify.AreEqual(new Rect(300, 100, 200, 200), realizationRects.Last());
                realizationRects.Clear();
            });
        }

        [TestMethod]
        public void CanGrowCacheBuffer()
        {
            ScrollPresenter scrollPresenter = null;
            ItemsRepeater repeater = null;
            var measureRealizationRects = new List<Rect>();
            var arrangeRealizationRects = new List<Rect>();
            var fullCacheEvent = new ManualResetEvent(initialState: false);

            RunOnUIThread.Execute(() =>
            {
                Log.Comment("Preparing the visual tree...");

                scrollPresenter = new ScrollPresenter
                {
                    Width = 400,
                    Height = 400
                };

                var layout = new MockVirtualizingLayout
                {
                    MeasureLayoutFunc = (availableSize, context) =>
                    {
                        var ctx = (VirtualizingLayoutContext)context;
                        measureRealizationRects.Add(ctx.RealizationRect);
                        return new Size(1000, 2000);
                    },

                    ArrangeLayoutFunc = (finalSize, context) =>
                    {
                        var ctx = (VirtualizingLayoutContext)context;
                        arrangeRealizationRects.Add(ctx.RealizationRect);

                        if (ctx.RealizationRect.Height == scrollPresenter.Height * (repeater.VerticalCacheLength + 1))
                        {
                            fullCacheEvent.Set();
                        }

                        return finalSize;
                    }
                };

                repeater = new ItemsRepeater()
                {
                    Layout = layout
                };

                scrollPresenter.Content = repeater;
                Content = scrollPresenter;
            });

            if (!fullCacheEvent.WaitOne(500000)) Verify.Fail("Cache full size never reached.");
            IdleSynchronizer.Wait();

            RunOnUIThread.Execute(() =>
            {
                var cacheLength = repeater.VerticalCacheLength;
                var expectedRealizationWindow = new Rect(
                    -cacheLength / 2 * scrollPresenter.Width,
                    -cacheLength / 2 * scrollPresenter.Height,
                    (1 + cacheLength) * scrollPresenter.Width,
                    (1 + cacheLength) * scrollPresenter.Height);

                Log.Comment("Validate that the realization window reached full size.");
                Verify.AreEqual(expectedRealizationWindow, measureRealizationRects.Last());

                Log.Comment("Validate that the realization window grew by 40 pixels each time during the process.");
                for (int i = 2; i < measureRealizationRects.Count; ++i)
                {
                    Verify.AreEqual(-40, measureRealizationRects[i].X - measureRealizationRects[i - 1].X);
                    Verify.AreEqual(-40, measureRealizationRects[i].Y - measureRealizationRects[i - 1].Y);
                    Verify.AreEqual(80, measureRealizationRects[i].Width - measureRealizationRects[i - 1].Width);
                    Verify.AreEqual(80, measureRealizationRects[i].Height - measureRealizationRects[i - 1].Height);

                    Verify.AreEqual(-40, arrangeRealizationRects[i].X - arrangeRealizationRects[i - 1].X);
                    Verify.AreEqual(-40, arrangeRealizationRects[i].Y - arrangeRealizationRects[i - 1].Y);
                    Verify.AreEqual(80, arrangeRealizationRects[i].Width - arrangeRealizationRects[i - 1].Width);
                    Verify.AreEqual(80, arrangeRealizationRects[i].Height - arrangeRealizationRects[i - 1].Height);
                }
            });
        }

        [TestMethod]
        public void CanBringIntoViewElements()
        {
            ScrollPresenter scrollPresenter = null;
            ItemsRepeater itemsRepeater = null;
            var rootLoadedEvent = new AutoResetEvent(initialState: false);
            var viewChangedEvent = new AutoResetEvent(initialState: false);
            var waitingForIndex = -1;
            var indexRealized = new AutoResetEvent(initialState: false);
            var viewChangedOffsets = new List<double>();

            RunOnUIThread.Execute(() =>
            {
                var lorem = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam laoreet erat vel massa rutrum, eget mollis massa vulputate. Vivamus semper augue leo, eget faucibus nulla mattis nec. Donec scelerisque lacus at dui ultricies, eget auctor ipsum placerat. Integer aliquet libero sed nisi eleifend, nec rutrum arcu lacinia. Sed a sem et ante gravida congue sit amet ut augue. Donec quis pellentesque urna, non finibus metus. Proin sed ornare tellus. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam laoreet erat vel massa rutrum, eget mollis massa vulputate. Vivamus semper augue leo, eget faucibus nulla mattis nec. Donec scelerisque lacus at dui ultricies, eget auctor ipsum placerat. Integer aliquet libero sed nisi eleifend, nec rutrum arcu lacinia. Sed a sem et ante gravida congue sit amet ut augue. Donec quis pellentesque urna, non finibus metus. Proin sed ornare tellus.";
                var root = (Grid)XamlReader.Load(TestUtilities.ProcessTestXamlForRepo(
                     @"<Grid xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation' 
                             xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml'
                             xmlns:controls='using:Microsoft.UI.Xaml.Controls' 
                             xmlns:primitives='using:Microsoft.UI.Xaml.Controls.Primitives'> 
                         <Grid.Resources>
                           <controls:StackLayout x:Name='VerticalStackLayout'/>
                           <controls:RecyclingElementFactory x:Key='ElementFactory'>
                             <controls:RecyclingElementFactory.RecyclePool>
                               <controls:RecyclePool/>
                             </controls:RecyclingElementFactory.RecyclePool>
                             <DataTemplate x:Key='ItemTemplate'>
                               <Border Background='LightGray' Margin='5' Height='94'>
                                 <TextBlock Text='{Binding}' TextWrapping='WrapWholeWords'/>
                               </Border>
                             </DataTemplate>
                           </controls:RecyclingElementFactory>
                         </Grid.Resources>
                         <primitives:ScrollPresenter x:Name='ScrollPresenter' Width='400' Height='600' ContentOrientation='Vertical' Background='Gray'>
                           <controls:ItemsRepeater
                             x:Name='ItemsRepeater'
                             ItemTemplate='{StaticResource ElementFactory}'
                             Layout='{StaticResource VerticalStackLayout}'
                             HorizontalCacheLength='0'
                             VerticalCacheLength='0'/>
                         </primitives:ScrollPresenter>
                       </Grid>"));

                var elementFactory = (RecyclingElementFactory)root.Resources["ElementFactory"];
                scrollPresenter = (ScrollPresenter)root.FindName("ScrollPresenter");
                itemsRepeater = (ItemsRepeater)root.FindName("ItemsRepeater");

                itemsRepeater.ElementPrepared += (sender, args) =>
                {
                    Log.Comment($"ItemsRepeater.ElementPrepared - Realized index: {args.Index}. Waiting for index: {waitingForIndex}");
                    if (args.Index == waitingForIndex)
                    {
                        indexRealized.Set();
                    }
                };

                var items = Enumerable.Range(0, 400).Select(i => string.Format("{0}: {1}", i, lorem.Substring(0, 250)));

                itemsRepeater.ItemsSource = items;

                scrollPresenter.ViewChanged += (o, e) =>
                {
                    Log.Comment($"ScrollPresenter.ViewChanged - VerticalOffset: {scrollPresenter.VerticalOffset}");
                    viewChangedOffsets.Add(scrollPresenter.VerticalOffset);
                    viewChangedEvent.Set();
                };

                scrollPresenter.BringingIntoView += (o, e) =>
                {
                    Log.Comment("ScrollPresenter.BringingIntoView - ");
                    Log.Comment($"    TargetVerticalOffset: {e.TargetVerticalOffset}");
                    Log.Comment($"    RequestEventArgs.AnimationDesired: {e.RequestEventArgs.AnimationDesired}");
                    Log.Comment($"    RequestEventArgs.Handled: {e.RequestEventArgs.Handled}");
                    Log.Comment($"    RequestEventArgs.VerticalAlignmentRatio: {e.RequestEventArgs.VerticalAlignmentRatio}");
                    Log.Comment($"    RequestEventArgs.VerticalOffset: {e.RequestEventArgs.VerticalOffset}");
                    Log.Comment($"    RequestEventArgs.TargetRect: {e.RequestEventArgs.TargetRect}");
                };

                root.Loaded += delegate {
                    rootLoadedEvent.Set();
                };

                Content = root;
            });
            Verify.IsTrue(rootLoadedEvent.WaitOne(DefaultWaitTimeInMS));
            IdleSynchronizer.Wait();

            RunOnUIThread.Execute(() =>
            {
                Log.Comment("\r\nStartBringIntoView for item index 100, w/ 0.5 vertical alignment.");
                waitingForIndex = 96;
                viewChangedEvent.Reset();
                indexRealized.Reset();
                itemsRepeater.GetOrCreateElement(100).StartBringIntoView(new BringIntoViewOptions {
                    VerticalAlignmentRatio = 0.5
                });
                itemsRepeater.UpdateLayout();
            });

            Verify.IsTrue(viewChangedEvent.WaitOne(DefaultWaitTimeInMS));
            Verify.IsTrue(indexRealized.WaitOne(DefaultWaitTimeInMS));
            IdleSynchronizer.Wait();

            Log.Comment($"ScrollPresenter.ViewChanged - Count: {viewChangedOffsets.Count}");
            Verify.AreEqual(1, viewChangedOffsets.Count);
            viewChangedOffsets.Clear();

            ValidateRealizedRange(itemsRepeater, 96, 103);

            RunOnUIThread.Execute(() =>
            {
                Log.Comment("\r\nStartBringIntoView for item index 103 (already realized) w/ animation.");
                waitingForIndex = 107;
                viewChangedEvent.Reset();
                indexRealized.Reset();
                itemsRepeater.TryGetElement(103).StartBringIntoView(new BringIntoViewOptions
                {
                    VerticalAlignmentRatio = 0.5,
                    AnimationDesired = true
                });
                itemsRepeater.UpdateLayout();
            });

            Verify.IsTrue(viewChangedEvent.WaitOne(DefaultWaitTimeInMS));
            Verify.IsTrue(indexRealized.WaitOne(DefaultWaitTimeInMS));
            IdleSynchronizer.Wait();

            Log.Comment("Waiting for animation to settle at final vertical offset.");
            CompositionPropertySpy.SynchronouslyTickUIThread(32);

            Log.Comment($"ScrollPresenter.ViewChanged - Count: {viewChangedOffsets.Count}");
            Verify.IsLessThanOrEqual(1, viewChangedOffsets.Count);
            viewChangedOffsets.Clear();

            ValidateRealizedRange(itemsRepeater, 99, 107);

            RunOnUIThread.Execute(() =>
            {
                Log.Comment("\r\nStartBringIntoView for disconnected item index 0, to the top w/ unfulfilled animation and 0.5 vertical alignment.");
                waitingForIndex = 6;
                viewChangedEvent.Reset();
                indexRealized.Reset();
                itemsRepeater.GetOrCreateElement(0).StartBringIntoView(new BringIntoViewOptions
                {
                    VerticalAlignmentRatio = 0.5,
                    AnimationDesired = true
                });
            });

            Verify.IsTrue(viewChangedEvent.WaitOne(DefaultWaitTimeInMS));
            Verify.IsTrue(indexRealized.WaitOne(DefaultWaitTimeInMS));
            IdleSynchronizer.Wait();

            Log.Comment($"ScrollPresenter.ViewChanged - Count: {viewChangedOffsets.Count}");
            Verify.AreEqual(1, viewChangedOffsets.Count);
            viewChangedOffsets.Clear();

            ValidateRealizedRange(itemsRepeater, 0, 6);

            RunOnUIThread.Execute(() =>
            {
                // You can't align the first item in the middle obviously.
                Verify.AreEqual(0.0, scrollPresenter.VerticalOffset);

                Log.Comment("\r\nStartBringIntoView for item index 20.");
                waitingForIndex = 26;
                viewChangedEvent.Reset();
                indexRealized.Reset();
                itemsRepeater.GetOrCreateElement(20).StartBringIntoView(new BringIntoViewOptions
                {
                    VerticalAlignmentRatio = 0.0
                });
                itemsRepeater.UpdateLayout();
            });

            Verify.IsTrue(viewChangedEvent.WaitOne(DefaultWaitTimeInMS));
            Verify.IsTrue(indexRealized.WaitOne(DefaultWaitTimeInMS));
            IdleSynchronizer.Wait();

            Log.Comment($"ScrollPresenter.ViewChanged - Count: {viewChangedOffsets.Count}");
            Verify.AreEqual(1, viewChangedOffsets.Count);

            ValidateRealizedRange(itemsRepeater, 19, 26);
        }

        private void ValidateRealizedRange(
            ItemsRepeater itemsRepeater,
            int expectedFirstItemIndex,
            int expectedLastItemIndex)
        {
            Log.Comment("Validating Realized Range...");
            int actualFirstItemIndex = -1;
            int actualLastItemIndex = -1;
            int itemIndex = 0;

            RunOnUIThread.Execute(() =>
            {
                var items = itemsRepeater.ItemsSource as IEnumerable<string>;

                foreach (var item in items)
                {
                    var itemElement = itemsRepeater.TryGetElement(itemIndex);

                    if (itemElement != null)
                    {
                        actualFirstItemIndex =
                            actualFirstItemIndex == -1 ?
                            itemIndex :
                            actualFirstItemIndex;
                        actualLastItemIndex = itemIndex;

                        Log.Comment($"Realized Index - {itemIndex}");
                    }

                    ++itemIndex;
                }
            });

            Log.Comment($"FirstItemIndex - {expectedFirstItemIndex}  {actualFirstItemIndex}");
            Log.Comment($"LastItemIndex  - {expectedLastItemIndex}  {actualLastItemIndex}");
            Verify.AreEqual(expectedFirstItemIndex, actualFirstItemIndex);
            Verify.AreEqual(expectedLastItemIndex, actualLastItemIndex);
        }

        private static VirtualizingLayout GetMonitoringLayout(Size desiredSize, List<Rect> realizationRects)
        {
            return new MockVirtualizingLayout
            {
                MeasureLayoutFunc = (availableSize, context) =>
                {
                    var ctx = (VirtualizingLayoutContext)context;
                    realizationRects.Add(ctx.RealizationRect);
                    return desiredSize;
                },

                ArrangeLayoutFunc = (finalSize, context) => finalSize
            };
        }
    }
}
