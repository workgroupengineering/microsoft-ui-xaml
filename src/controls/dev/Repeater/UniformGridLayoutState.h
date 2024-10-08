﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "ElementManager.h"
#include "UniformGridLayoutState.g.h"
#include "FlowLayoutAlgorithm.h"

class UniformGridLayoutState :
    public ReferenceTracker<UniformGridLayoutState, winrt::implementation::UniformGridLayoutStateT, winrt::composing>
{
public:
    void InitializeForContext(
        const winrt::VirtualizingLayoutContext& context,
        IFlowLayoutAlgorithmDelegates* callbacks);
    void UninitializeForContext(const winrt::VirtualizingLayoutContext& context);

    ::FlowLayoutAlgorithm& FlowAlgorithm() { return m_flowAlgorithm; }
    double EffectiveItemWidth() const { return m_effectiveItemWidth; }
    double EffectiveItemHeight() const { return m_effectiveItemHeight; }

    void EnsureElementSize(
        const winrt::Size availableSize,
        const winrt::VirtualizingLayoutContext& context,
        const double itemWidth,
        const double itemHeight,
        const winrt::UniformGridLayoutItemsStretch& stretch,
        const winrt::Orientation& orientation,
        const double minRowSpacing,
        const double minColumnSpacing,
        unsigned int maxItemsPerLine);
    void InvalidateElementSize();

private:
    ::FlowLayoutAlgorithm m_flowAlgorithm{ this };
    bool m_isEffectiveSizeValid{ false };
    double m_effectiveItemWidth{ 0.0 };
    double m_effectiveItemHeight{ 0.0 };

    winrt::Size CalculateAvailableSize(
        const winrt::Size availableSize,
        const winrt::Orientation orientation,
        const winrt::UniformGridLayoutItemsStretch& stretch,
        const unsigned int maxItemsPerLine,
        const double itemWidth,
        const double itemHeight,
        const double minRowSpacing,
        const double minColumnSpacing) const;

    double CalculateExtraPixelsInLine(
        const unsigned int maxItemsPerLine,
        const float availableSizeMinor,
        const double itemSizeMinor,
        const double minorItemSpacing) const;

    void SetSize(const winrt::Size& desiredItemSize,
        const double itemWidth,
        const double itemHeight,
        const winrt::Size availableSize,
        const winrt::UniformGridLayoutItemsStretch& stretch,
        const winrt::Orientation& orientation,
        const double minRowSpacing,
        const double minColumnSpacing,
        unsigned int maxItemsPerLine);
};
