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

#include "CListViewBaseItemTemplateSettings.g.h"
#include <DeclareMacros.h>
#include <Indexes.g.h>
#include <minxcptypes.h>

class CGridViewItemTemplateSettings : public CListViewBaseItemTemplateSettings
{
protected:
    CGridViewItemTemplateSettings(_In_ CCoreServices *pCore)
        : CListViewBaseItemTemplateSettings(pCore)
    {
        SetIsCustomType();
    }

    ~CGridViewItemTemplateSettings() override = default;

public:
    DECLARE_CREATE(CGridViewItemTemplateSettings);

    KnownTypeIndex GetTypeIndex() const override
    {
        return KnownTypeIndex::GridViewItemTemplateSettings;
    }

    XUINT32 ParticipatesInManagedTreeInternal() override
    {
        return PARTICIPATES_IN_MANAGED_TREE;
    }
};
