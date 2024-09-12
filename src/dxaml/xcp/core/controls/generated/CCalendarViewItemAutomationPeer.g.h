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

#include "CCalendarViewBaseItemAutomationPeer.g.h"
#include <DeclareMacros.h>
#include <Indexes.g.h>
#include <minxcptypes.h>

class CCalendarViewItemAutomationPeer : public CCalendarViewBaseItemAutomationPeer
{
protected:
    CCalendarViewItemAutomationPeer(_In_ CCoreServices *pCore, _In_ CValue &value)
        : CCalendarViewBaseItemAutomationPeer(pCore, value)
    {
        SetIsCustomType();
    }

    ~CCalendarViewItemAutomationPeer() override = default;

public:
    DECLARE_CREATE_AP(CCalendarViewItemAutomationPeer);

    KnownTypeIndex GetTypeIndex() const override
    {
        return KnownTypeIndex::CalendarViewItemAutomationPeer;
    }

    XUINT32 ParticipatesInManagedTreeInternal() override
    {
        return PARTICIPATES_IN_MANAGED_TREE;
    }
};