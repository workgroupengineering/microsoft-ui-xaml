﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include <mutex>
#include "XamlType.h"
#include "XamlControlsXamlMetaDataProvider.g.h"

//
// XamlMetadataProvider
//
// This is an auto-generated implementation for this native C++ project of what the XamlCompiler would generate for us.
// But, since the XamlCompiler was written to assume third-party code and thus ignores types in the Microsoft.UI.Xaml 
// namespace (tracked by http://task.ms/44125040), we have to implement a stop-gap solution. This implementation is also 
// only as complete as it needs to be to support our needs now. For example it doesn't support x:Class or Binding because 
// we don't use those features. It just needs to provide metadata for Style/Template and even then only for the inner 
// types that may incidentally be used as an implementation detail of another control. For example ColorPicker uses a 
// ColorSpectrum control internally, the app only ever  references ColorPicker so it generates xaml metadata for that in 
// the app but there's no automatic metadata for the ColorSpectrum control.
//
// This class is hand-written and the generated registrations for each type/property are in XamlMetadataGenerated.h.
// It is generated by reflecting through the winmd file and generating the code from XamlMetatadataGenerated.tt file. The 
// t4 template transform happens after the mdmerge target but before the clcompile target in the project.

class XamlMetadataProvider : 
    // NOTE: Runtime class name is different than the implementation but we're just doing this to hide our IXMP implementation
    public winrt::implementation::XamlControlsXamlMetaDataProviderT<XamlMetadataProvider>
{
public:
    XamlMetadataProvider() = default;

    static void Initialize();
    static void ClearTypes();
    static winrt::IXamlType LookupXamlType(const wstring_view& typeName);

    // IXamlMetadataProvider
    winrt::IXamlType GetXamlType(winrt::TypeName const& type);
    winrt::IXamlType GetXamlType(winrt::hstring const& fullName);
    winrt::com_array<winrt::XmlnsDefinition> GetXmlnsDefinitions();

private:
    static std::recursive_mutex s_typeEntriesMutex;
};
