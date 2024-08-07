// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
// ------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version: 15.0.0.0
//  
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
// ------------------------------------------------------------------------------
namespace XamlGen.Templates.Code.Core.Headers
{
    using System.Linq;
    using System.Text;
    using System.Collections.Generic;
    using OM;
    using System;
    
    /// <summary>
    /// Class to produce the template output
    /// </summary>
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.VisualStudio.TextTemplating", "15.0.0.0")]
    public partial class DiagnosticsInterop_SimpleProperties : CppCodeGenerator<OMContextView>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Copyright>()));
            this.Write(@"

#pragma once

#include <SimpleProperty.h>
#include <StringConversions.h>
#include <windows.foundation.numerics.h>
#include <Value.h>
#include <CValueBoxer.h>
#include <SimplePropertiesCommon.g.h>

// Our generated property types are the right ones publicly, but our internal storage may differ.  For instance, UIElement.Rotation
// is publicly a float, but internally stored and retrieved as a double.  We disable C4244 for this code, which covers the double -> float
// precision loss.
 #pragma warning( push )
 #pragma warning( disable: 4244 )

// Helper method that allows DiagnosticsInterop to get and set simple properties
namespace Diagnostics {
    bool IsCreatableSimplePropertyType(const CClassInfo* type)
    {
        switch (type->GetIndex())
        {
");
 foreach (var type in Model.GetAllDiagSimplePropertyTypes()) {
            this.Write("            case ");
            this.Write(this.ToStringHelper.ToStringWithCulture(type.Type.IndexName));
            this.Write(":\r\n");
 } 
            this.Write(@"                return true;
            default:
                return false;
        }
    }

    HRESULT CreateSimplePropertyType(const CClassInfo* type, const xstring_ptr_view& value, IInspectable** created)
    {
        *created = nullptr;

        switch (type->GetIndex())
        {
");
 foreach (var type in Model.GetAllDiagSimplePropertyTypes()) {
            this.Write("            case ");
            this.Write(this.ToStringHelper.ToStringWithCulture(type.Type.IndexName));
            this.Write(":\r\n            {\r\n                ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(type.AbiFullName)));
            this.Write(" typeConvertedValue{};\r\n                IFC_RETURN(");
            this.Write(this.ToStringHelper.ToStringWithCulture(type.Type.IndexNameWithoutPrefix));
            this.Write("FromString(value, typeConvertedValue));\r\n                IFC_RETURN(DirectUI::Pro" +
                    "pertyValue::CreateReference<");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(type.AbiFullName)));
            this.Write(">(typeConvertedValue, created));\r\n                break;\r\n            }\r\n");
 } 
            this.Write(@"            default:
                MICROSOFT_TELEMETRY_ASSERT_DISABLED(false);
                return E_FAIL;
        }
        return S_OK;
    }

    HRESULT SetValueSimpleProperty(const CPropertyBase* property, SimpleProperty::objid_t obj, IInspectable* pValue)
    {
        switch (property->GetIndex())
        {
");
 foreach (var simpleProperty in Model.GetAllTypeTableSimpleProperties().Where((def) => def.Modifier != Modifier.Internal)) { 
   var propTypeName = AsCppType(simpleProperty.PropertyType.AbiFullName); 
            this.Write("            case ");
            this.Write(this.ToStringHelper.ToStringWithCulture(simpleProperty.IndexName));
            this.Write(":\r\n            {\r\n                wrl::ComPtr<");
            this.Write(this.ToStringHelper.ToStringWithCulture(PrefixAbi("Windows::Foundation::IReference")));
            this.Write("<");
            this.Write(this.ToStringHelper.ToStringWithCulture(propTypeName));
            this.Write(">> referencePropValue;\r\n                ");
            this.Write(this.ToStringHelper.ToStringWithCulture(propTypeName));
            this.Write(" propertyValue;\r\n                if (SUCCEEDED(pValue->QueryInterface<");
            this.Write(this.ToStringHelper.ToStringWithCulture(PrefixAbi("Windows::Foundation::IReference")));
            this.Write("<");
            this.Write(this.ToStringHelper.ToStringWithCulture(propTypeName));
            this.Write(">>(&referencePropValue)))\r\n                {\r\n                    IFC_RETURN(refe" +
                    "rencePropValue->get_Value(&propertyValue));\r\n                }\r\n                " +
                    "SimpleProperty::Property::id<");
            this.Write(this.ToStringHelper.ToStringWithCulture(simpleProperty.IndexName));
            this.Write(">::Set(obj, propertyValue);\r\n                break;\r\n             }\r\n\r\n");
 } 
            this.Write(@"            default:
                MICROSOFT_TELEMETRY_ASSERT_DISABLED(false);
                return E_FAIL;
        }

        return S_OK;
    }

    HRESULT GetValueSimpleProperty(const CPropertyBase* property, SimpleProperty::const_objid_t obj, _Outptr_ IInspectable** ppValue)
    {
        // If you see an error that a Box___ method is missing, it's likely due to a new simple property
        // using a type that isn't in the Box helper methods yet.  You'll need to define it earlier up this file.
        switch (property->GetIndex())
        {
");
 foreach (var simpleProperty in Model.GetAllTypeTableSimpleProperties().Where((def) => def.Modifier != Modifier.Internal)) { 
   var propTypeName = AsCppType(simpleProperty.PropertyType.AbiFullName); 
            this.Write("            case ");
            this.Write(this.ToStringHelper.ToStringWithCulture(simpleProperty.IndexName));
            this.Write(":\r\n            {\r\n                IFC_RETURN(DirectUI::PropertyValue::CreateRefer" +
                    "ence<");
            this.Write(this.ToStringHelper.ToStringWithCulture(propTypeName));
            this.Write(">(SimpleProperty::Property::id<");
            this.Write(this.ToStringHelper.ToStringWithCulture(simpleProperty.IndexName));
            this.Write(">::Get(obj), ppValue));\r\n                break;\r\n            }\r\n");
 } 
            this.Write(@"            default:
                MICROSOFT_TELEMETRY_ASSERT_DISABLED(false);
                return E_FAIL;
        }
        
        return S_OK;
    }

    void ClearSimpleProperty(SimpleProperty::objid_t obj, const CPropertyBase* property)
    {
        switch (property->GetIndex())
        {
");
 foreach (var simpleProperty in Model.GetAllTypeTableSimpleProperties().Where((def) => def.Modifier != Modifier.Internal)) { 
   var propTypeName = AsCppType(simpleProperty.PropertyType.AbiFullName); 
            this.Write("            case ");
            this.Write(this.ToStringHelper.ToStringWithCulture(simpleProperty.IndexName));
            this.Write(":\r\n            {\r\n                const auto defaultValue = SimpleProperty::Prope" +
                    "rty::Default<");
            this.Write(this.ToStringHelper.ToStringWithCulture(simpleProperty.IndexName));
            this.Write(">();\r\n                SimpleProperty::Property::id<");
            this.Write(this.ToStringHelper.ToStringWithCulture(simpleProperty.IndexName));
            this.Write(">::Set(obj, defaultValue);\r\n                break;\r\n            }\r\n\r\n");
 } 
            this.Write("            default:\r\n                MICROSOFT_TELEMETRY_ASSERT_DISABLED(false);\r\n       " +
                    " }\r\n    }\r\n}\r\n\r\n#pragma warning(pop)");
            return this.GenerationEnvironment.ToString();
        }
    }
}
