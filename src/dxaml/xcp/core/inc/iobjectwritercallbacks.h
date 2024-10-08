// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

class ObjectWriterCallbacksDelegate 
{
public:
    virtual HRESULT OnObjectCreated(
        _In_ const std::shared_ptr<XamlQualifiedObject>& qoRoot, 
        _In_ const std::shared_ptr<XamlQualifiedObject>& qoNewInstance) = 0;

    virtual ~ObjectWriterCallbacksDelegate() {}
};

