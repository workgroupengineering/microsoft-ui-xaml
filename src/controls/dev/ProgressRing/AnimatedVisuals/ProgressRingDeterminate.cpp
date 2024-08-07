﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//       LottieGen version:
//           6.1.0+gd30fc5741e
//       
//       Command:
//           LottieGen -GenerateDependencyObject -Language Cppwinrt -InputFile ProgressRingDeterminate.json
//       
//       Input file:
//           ProgressRingDeterminate.json (2627 bytes created 14:08-07:00 Feb 7 2022)
//       
//       Invoked on:
//           KAREN @ 17:39-07:00 Feb 7 2022
//       
//       LottieGen source:
//           http://aka.ms/Lottie
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
// ____________________________________
// |       Object stats       | Count |
// |__________________________|_______|
// | All CompositionObjects   |    47 |
// |--------------------------+-------|
// | Animators                |     7 |
// | Animated brushes         |     3 |
// | Animated gradient stops  |     - |
// | ExpressionAnimations     |     4 |
// | PathKeyFrameAnimations   |     - |
// |--------------------------+-------|
// | ContainerVisuals         |     1 |
// | ShapeVisuals             |     1 |
// |--------------------------+-------|
// | ContainerShapes          |     1 |
// | CompositionSpriteShapes  |     3 |
// |--------------------------+-------|
// | Brushes                  |     3 |
// | Gradient stops           |     - |
// | CompositionVisualSurface |     - |
// ------------------------------------
#include "pch.h"
#include "ProgressRingDeterminate.h"
#include "WindowsNumerics.h"

using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Foundation::Numerics;
using namespace winrt::Windows::Graphics;
using namespace winrt::Windows::UI;
using namespace winrt::Microsoft::UI::Composition;
using namespace winrt::Microsoft::UI::Xaml;

namespace
{
    class AnimatedVisual
        : public winrt::implements<AnimatedVisual, winrt::IAnimatedVisual, winrt::IClosable>
    {
        static constexpr int64_t c_durationTicks{ 20000000L };
        Compositor const _c{ nullptr };
        ExpressionAnimation const _reusableExpressionAnimation{ nullptr };
        winrt::CompositionPropertySet const _themeProperties{ nullptr };
        ContainerVisual _root{ nullptr };
        CubicBezierEasingFunction _cubicBezierEasingFunction_0{ nullptr };
        ExpressionAnimation _rootProgress{ nullptr };
        StepEasingFunction _holdThenStepEasingFunction{ nullptr };

        static void StartProgressBoundAnimation(
            CompositionObject target,
            winrt::hstring animatedPropertyName,
            CompositionAnimation animation,
            ExpressionAnimation controllerProgressExpression)
        {
            target.StartAnimation(animatedPropertyName, animation);
            const auto controller = target.TryGetAnimationController(animatedPropertyName);
            controller.Pause();
            controller.StartAnimation(L"Progress", controllerProgressExpression);
        }

        void BindProperty(
            CompositionObject target,
            winrt::hstring animatedPropertyName,
            winrt::hstring expression,
            winrt::hstring referenceParameterName,
            CompositionObject referencedObject)
        {
            _reusableExpressionAnimation.ClearAllParameters();
            _reusableExpressionAnimation.Expression(expression);
            _reusableExpressionAnimation.SetReferenceParameter(referenceParameterName, referencedObject);
            target.StartAnimation(animatedPropertyName, _reusableExpressionAnimation);
        }

        ScalarKeyFrameAnimation CreateScalarKeyFrameAnimation(float initialProgress, float initialValue, CompositionEasingFunction initialEasingFunction)
        {
            const auto result = _c.CreateScalarKeyFrameAnimation();
            result.Duration(TimeSpan{ c_durationTicks });
            result.InsertKeyFrame(initialProgress, initialValue, initialEasingFunction);
            return result;
        }

        Vector2KeyFrameAnimation CreateVector2KeyFrameAnimation(float initialProgress, float2 initialValue, CompositionEasingFunction initialEasingFunction)
        {
            const auto result = _c.CreateVector2KeyFrameAnimation();
            result.Duration(TimeSpan{ c_durationTicks });
            result.InsertKeyFrame(initialProgress, initialValue, initialEasingFunction);
            return result;
        }

        CompositionSpriteShape CreateSpriteShape(CompositionGeometry geometry, float3x2 transformMatrix)
        {
            const auto result = _c.CreateSpriteShape(geometry);
            result.TransformMatrix(transformMatrix);
            return result;
        }

        // - Layer aggregator
        // Offset:<16, 16>
        // Color bound to theme property value: Background
        CompositionColorBrush ThemeColor_Background()
        {
            const auto result = _c.CreateColorBrush();
            BindProperty(result, L"Color", L"ColorRGB(_theme.Background.W*1,_theme.Background.X,_theme.Background.Y,_theme.Background.Z)", L"_theme", _themeProperties);
            return result;
        }

        // - - Layer aggregator
        // - Layer: Radial
        // Offset:<16, 16>
        // Color bound to theme property value: Foreground
        CompositionColorBrush ThemeColor_Foreground_0()
        {
            const auto result = _c.CreateColorBrush();
            BindProperty(result, L"Color", L"ColorRGB(_theme.Foreground.W*0,_theme.Foreground.X,_theme.Foreground.Y,_theme.Foreground.Z)", L"_theme", _themeProperties);
            return result;
        }

        // - - Layer aggregator
        // - Layer: Radial
        // Offset:<16, 16>
        // Color bound to theme property value: Foreground
        CompositionColorBrush ThemeColor_Foreground_1()
        {
            const auto result = _c.CreateColorBrush();
            BindProperty(result, L"Color", L"ColorRGB(_theme.Foreground.W*1,_theme.Foreground.X,_theme.Foreground.Y,_theme.Foreground.Z)", L"_theme", _themeProperties);
            return result;
        }

        // Layer aggregator
        // Layer: Radial
        CompositionContainerShape ContainerShape()
        {
            const auto result = _c.CreateContainerShape();
            result.Scale({ 0.0F, 0.0F });
            const auto shapes = result.Shapes();
            // Offset:<16, 16>
            shapes.Append(SpriteShape_1());
            // Offset:<16, 16>
            shapes.Append(SpriteShape_2());
            StartProgressBoundAnimation(result, L"Scale", ShapeVisibilityAnimation(), _rootProgress);
            return result;
        }

        // - Layer aggregator
        // Offset:<16, 16>
        // Ellipse Path.EllipseGeometry
        CompositionEllipseGeometry Ellipse_7_0()
        {
            const auto result = _c.CreateEllipseGeometry();
            result.Radius({ 8.0F, 8.0F });
            return result;
        }

        // - - Layer aggregator
        // - Layer: Radial
        // Offset:<16, 16>
        // Ellipse Path.EllipseGeometry
        CompositionEllipseGeometry Ellipse_7_1()
        {
            const auto result = _c.CreateEllipseGeometry();
            result.TrimEnd(0.5F);
            result.Radius({ 8.0F, 8.0F });
            return result;
        }

        // - - Layer aggregator
        // - Layer: Radial
        // Offset:<16, 16>
        // Ellipse Path.EllipseGeometry
        CompositionEllipseGeometry Ellipse_7_2()
        {
            const auto result = _c.CreateEllipseGeometry();
            result.Radius({ 8.0F, 8.0F });
            StartProgressBoundAnimation(result, L"TrimEnd", TrimEndScalarAnimation_0_to_1(), RootProgress());
            return result;
        }

        // Layer aggregator
        // Ellipse Path
        CompositionSpriteShape SpriteShape_0()
        {
            // Offset:<16, 16>, Rotation:-0.008387561908827789 degrees, Scale:<1.77, 1.77>
            const auto result = CreateSpriteShape(Ellipse_7_0(), { 1.76999998F, 0.0F, 0.0F, 1.76999998F, 16.0F, 16.0F });
            result.StrokeBrush(ThemeColor_Background());
            result.StrokeDashCap(CompositionStrokeCap::Round);
            result.StrokeThickness(1.5F);
            return result;
        }

        // - Layer aggregator
        // Layer: Radial
        // Ellipse Path
        CompositionSpriteShape SpriteShape_1()
        {
            // Offset:<16, 16>, Rotation:-0.008387561908827789 degrees, Scale:<1.77, 1.77>
            const auto result = CreateSpriteShape(Ellipse_7_1(), { 1.76999998F, 0.0F, 0.0F, 1.76999998F, 16.0F, 16.0F });
            result.StrokeBrush(ThemeColor_Foreground_0());
            result.StrokeDashCap(CompositionStrokeCap::Round);
            result.StrokeStartCap(CompositionStrokeCap::Round);
            result.StrokeEndCap(CompositionStrokeCap::Round);
            result.StrokeThickness(1.5F);
            return result;
        }

        // - Layer aggregator
        // Layer: Radial
        // Ellipse Path
        CompositionSpriteShape SpriteShape_2()
        {
            // Offset:<16, 16>, Rotation:-0.008387561908827789 degrees, Scale:<1.77, 1.77>
            const auto result = CreateSpriteShape(Ellipse_7_2(), { 1.76999998F, 0.0F, 0.0F, 1.76999998F, 16.0F, 16.0F });
            result.StrokeBrush(ThemeColor_Foreground_1());
            result.StrokeDashCap(CompositionStrokeCap::Round);
            result.StrokeStartCap(CompositionStrokeCap::Round);
            result.StrokeEndCap(CompositionStrokeCap::Round);
            result.StrokeThickness(1.5F);
            return result;
        }

        // The root of the composition.
        ContainerVisual Root()
        {
            const auto result = _root = _c.CreateContainerVisual();
            const auto propertySet = result.Properties();
            propertySet.InsertScalar(L"Progress", 0.0F);
            // Layer aggregator
            result.Children().InsertAtTop(ShapeVisual_0());
            return result;
        }

        CubicBezierEasingFunction CubicBezierEasingFunction_0()
        {
            return _cubicBezierEasingFunction_0 = _c.CreateCubicBezierEasingFunction({ 0.166999996F, 0.166999996F }, { 0.833000004F, 0.833000004F });
        }

        ExpressionAnimation RootProgress()
        {
            const auto result = _rootProgress = _c.CreateExpressionAnimation(L"_.Progress");
            result.SetReferenceParameter(L"_", _root);
            return result;
        }

        // - - - Layer aggregator
        // - - Layer: Radial
        // -  Offset:<16, 16>
        // Ellipse Path.EllipseGeometry
        // TrimEnd
        ScalarKeyFrameAnimation TrimEndScalarAnimation_0_to_1()
        {
            const auto result = CreateScalarKeyFrameAnimation(0.0F, 9.99999975E-05F, StepThenHoldEasingFunction());
            result.InsertKeyFrame(0.00833333377F, 9.99999975E-05F, HoldThenStepEasingFunction());
            result.InsertKeyFrame(0.25F, 0.25F, CubicBezierEasingFunction_0());
            result.InsertKeyFrame(0.5F, 0.5F, _cubicBezierEasingFunction_0);
            result.InsertKeyFrame(0.75F, 0.75F, _cubicBezierEasingFunction_0);
            result.InsertKeyFrame(0.983333349F, 0.96666666F, _cubicBezierEasingFunction_0);
            result.InsertKeyFrame(0.991666675F, 1.0F, _cubicBezierEasingFunction_0);
            return result;
        }

        // Layer aggregator
        ShapeVisual ShapeVisual_0()
        {
            const auto result = _c.CreateShapeVisual();
            result.Size({ 32.0F, 32.0F });
            const auto shapes = result.Shapes();
            // Offset:<16, 16>
            shapes.Append(SpriteShape_0());
            // Layer: Radial
            shapes.Append(ContainerShape());
            return result;
        }

        StepEasingFunction HoldThenStepEasingFunction()
        {
            const auto result = _holdThenStepEasingFunction = _c.CreateStepEasingFunction();
            result.IsFinalStepSingleFrame(true);
            return result;
        }

        // - - - - Layer aggregator
        // - - - Layer: Radial
        // - -  Offset:<16, 16>
        // - Ellipse Path.EllipseGeometry
        // TrimEnd
        StepEasingFunction StepThenHoldEasingFunction()
        {
            const auto result = _c.CreateStepEasingFunction();
            result.IsInitialStepSingleFrame(true);
            return result;
        }

        // - Layer aggregator
        // Layer: Radial
        Vector2KeyFrameAnimation ShapeVisibilityAnimation()
        {
            const auto result = CreateVector2KeyFrameAnimation(0.00833333377F, { 1.0F, 1.0F }, _holdThenStepEasingFunction);
            return result;
        }

    public:
        AnimatedVisual(Compositor compositor, winrt::CompositionPropertySet themeProperties)
            : _c(compositor)
            , _themeProperties(themeProperties)
            , _reusableExpressionAnimation(compositor.CreateExpressionAnimation())
        {
            const auto _ = Root();
        }

        void Close()
        {
            if (_root)
            {
                _root.Close();
            }
        }

        TimeSpan Duration() const
        {
            return { TimeSpan{ c_durationTicks } };
        }


        Visual RootVisual() const
        {
            return _root;
        }


        float2 Size() const
        {
            return { 32.0F, 32.0F };
        }

        static bool IsRuntimeCompatible()
        {
            return  winrt::Windows::Foundation::Metadata::ApiInformation::IsApiContractPresent(L"Windows.Foundation.UniversalApiContract", 7);
        }
    };
} // end namespace

float4 AnimatedVisuals::ProgressRingDeterminate::ColorAsVector4(Color color)
{
    return { static_cast<float>(color.R), static_cast<float>(color.G), static_cast<float>(color.B), static_cast<float>(color.A) };
}

winrt::CompositionPropertySet AnimatedVisuals::ProgressRingDeterminate::EnsureThemeProperties(Compositor compositor)
{
    if (_themeProperties == nullptr)
    {
        _themeProperties = compositor.CreatePropertySet();
        _themeProperties.InsertVector4(L"Background", ColorAsVector4((Color)_themeBackground));
        _themeProperties.InsertVector4(L"Foreground", ColorAsVector4((Color)_themeForeground));
    }

    return _themeProperties;
}

winrt::CompositionPropertySet AnimatedVisuals::ProgressRingDeterminate::GetThemeProperties(Compositor compositor)
{
    return EnsureThemeProperties(compositor);
}

Color AnimatedVisuals::ProgressRingDeterminate::Background()
{
    return _themeBackground;
}

void AnimatedVisuals::ProgressRingDeterminate::Background(Color value)
{
    _themeBackground = value;
    if (_themeProperties != nullptr)
    {
        _themeProperties.InsertVector4(L"Background", ColorAsVector4((Color)_themeBackground));
    }
}

Color AnimatedVisuals::ProgressRingDeterminate::Foreground()
{
    return _themeForeground;
}

void AnimatedVisuals::ProgressRingDeterminate::Foreground(Color value)
{
    _themeForeground = value;
    if (_themeProperties != nullptr)
    {
        _themeProperties.InsertVector4(L"Foreground", ColorAsVector4((Color)_themeForeground));
    }
}

winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual AnimatedVisuals::ProgressRingDeterminate::TryCreateAnimatedVisual(
    const Compositor& compositor,
    IInspectable& diagnostics)
{
    const auto _ = EnsureThemeProperties(compositor);
    diagnostics = nullptr;

    if (AnimatedVisual::IsRuntimeCompatible())
    {
        return winrt::make<AnimatedVisual>(compositor, _themeProperties);
    }

    return nullptr;
}
