// AUTOGENERATED_FOR_WINRT
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "pch.h"
#include "common.h"

#include "InkToolBarEraserButton.g.h"
#include "InkToolBarEraserButton.properties.h"

#include "InkToolBarToolButton.h"

class InkToolBarEraserButton :
    public winrt::implementation::InkToolBarEraserButtonT<InkToolBarEraserButton, InkToolBarToolButton>, 
    public InkToolBarEraserButtonProperties
{
public:
    ForwardRefToBaseReferenceTracker(InkToolBarToolButton)

    // These functions are ambiguous with InkToolBarToolButton, disambiguate
    using InkToolBarEraserButtonProperties::EnsureProperties;
    using InkToolBarEraserButtonProperties::ClearProperties;

    winrt::InkToolBarEraserKind SelectedEraser() { winrt::throw_hresult(E_NOTIMPL); }
    void SelectedEraser(winrt::InkToolBarEraserKind value) { winrt::throw_hresult(E_NOTIMPL); } 
    bool IsClearAllVisible() { winrt::throw_hresult(E_NOTIMPL); }
    void IsClearAllVisible(bool value) { winrt::throw_hresult(E_NOTIMPL); } 
    bool IsStrokeEraserVisible() { winrt::throw_hresult(E_NOTIMPL); }
    void IsStrokeEraserVisible(bool value) { winrt::throw_hresult(E_NOTIMPL); } 
    bool ArePrecisionErasersVisible() { winrt::throw_hresult(E_NOTIMPL); }
    void ArePrecisionErasersVisible(bool value) { winrt::throw_hresult(E_NOTIMPL); } 
};

