// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "precomp.h"
#include "Vector3Transition.g.h"

using namespace DirectUI;

HRESULT Vector3Transition::QueryInterfaceImpl(_In_ REFIID riid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(riid, __uuidof(xaml::IDependencyObject)))
    {
        // This type does not publicly derive from DO. Block all QIs to DO.
        return E_NOINTERFACE;
    }
    else
    {
        return __super::QueryInterfaceImpl(riid, ppObject);
    }
}
