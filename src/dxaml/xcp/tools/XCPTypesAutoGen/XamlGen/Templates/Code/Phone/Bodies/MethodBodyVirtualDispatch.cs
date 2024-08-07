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
namespace XamlGen.Templates.Code.Phone.Bodies
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
    public partial class MethodBodyVirtualDispatch : CppCodeGenerator<MethodDefinition>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
            this.Write("    HRESULT hr = S_OK;\r\n\r\n    if (IsComposed())\r\n    {\r\n        wrl::ComPtr<");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.DeclaringVersion.IdlClassInfo.VirtualMembersInterfaceName)));
            this.Write("> spOverrides;\r\n        IFC(QueryInterface(__uuidof(");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.DeclaringVersion.IdlClassInfo.VirtualMembersInterfaceName)));
            this.Write("), &spOverrides));\r\n        IFC(spOverrides->");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.IdlMemberInfo.VirtualName));
            this.Write("(");
            this.Write(this.ToStringHelper.ToStringWithCulture(GetArgumentListAsString(Model.Parameters, Model.ReturnType)));
            this.Write("));\r\n    }\r\n    else\r\n    {\r\n        IFC(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.IdlMemberInfo.VirtualName));
            this.Write("(");
            this.Write(this.ToStringHelper.ToStringWithCulture(GetArgumentListAsString(Model.Parameters, Model.ReturnType)));
            this.Write("));\r\n    }\r\n\r\nCleanup:\r\n    RRETURN(hr);");
            return this.GenerationEnvironment.ToString();
        }
    }
}
