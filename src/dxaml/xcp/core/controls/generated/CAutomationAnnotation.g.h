// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//------------------------------------------------------------------------
//
//  Abstract:
//
//      XAML types.
//      NOTE: This file was generated by a tool.
//
//------------------------------------------------------------------------

#pragma once

#include "CDependencyObject.h"
#include <DeclareMacros.h>
#include <Indexes.g.h>
#include <minxcptypes.h>

class CAutomationAnnotation : public CDependencyObject
{
protected:
    CAutomationAnnotation(_In_ CCoreServices *pCore)
        : CDependencyObject(pCore)
    {
        SetIsCustomType();
    }

    ~CAutomationAnnotation() override = default;

public:
    DECLARE_CREATE(CAutomationAnnotation);

    KnownTypeIndex GetTypeIndex() const override
    {
        return KnownTypeIndex::AutomationAnnotation;
    }

    XUINT32 ParticipatesInManagedTreeInternal() override
    {
        return PARTICIPATES_IN_MANAGED_TREE;
    }
};
