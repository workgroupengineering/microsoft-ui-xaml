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

#include "AutomationPeer.g.h"

#define __CalendarViewHeaderAutomationPeer_GUID "3917e780-b9c0-4847-b411-c21d42c4b7db"

namespace DirectUI
{
    class CalendarViewHeaderAutomationPeer;

    class __declspec(novtable) CalendarViewHeaderAutomationPeerGenerated:
        public DirectUI::AutomationPeer
    {
        friend class DirectUI::CalendarViewHeaderAutomationPeer;



    public:
        CalendarViewHeaderAutomationPeerGenerated();
        ~CalendarViewHeaderAutomationPeerGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::CalendarViewHeaderAutomationPeer;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::CalendarViewHeaderAutomationPeer;
        }

        // Properties.

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "CalendarViewHeaderAutomationPeer_Partial.h"

