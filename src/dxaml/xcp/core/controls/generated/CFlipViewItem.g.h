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

#include "CSelectorItem.g.h"
#include <DeclareMacros.h>
#include <Indexes.g.h>
#include <minxcptypes.h>

class CFlipViewItem : public CSelectorItem
{
protected:
    CFlipViewItem(_In_ CCoreServices *pCore)
        : CSelectorItem(pCore)
    {
        SetIsCustomType();
    }

    ~CFlipViewItem() override = default;

public:
    DECLARE_CREATE(CFlipViewItem);

    KnownTypeIndex GetTypeIndex() const override
    {
        return KnownTypeIndex::FlipViewItem;
    }

    XUINT32 ParticipatesInManagedTreeInternal() override
    {
        return PARTICIPATES_IN_MANAGED_TREE;
    }
};