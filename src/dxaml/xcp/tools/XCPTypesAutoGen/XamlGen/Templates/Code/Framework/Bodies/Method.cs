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
namespace XamlGen.Templates.Code.Framework.Bodies
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
    public partial class Method : CppCodeGenerator<MethodDefinition>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
 if (Model.IsStatic) {
       if (Model.IsInterfaceImplementation) { 
            this.Write("IFACEMETHODIMP ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.DeclaringClass.GeneratedFactoryFullName)));
            this.Write("::");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.IdlMethodInfo.Name));
            this.Write("(");
            this.Write(this.ToStringHelper.ToStringWithCulture(GetParameterListAsString(Model.Parameters, Model.ReturnType)));
            this.Write(")\r\n");
     } else { 
            this.Write("_Check_return_ HRESULT ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.DeclaringClass.GeneratedFactoryFullName)));
            this.Write("::");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.IdlMethodInfo.Name));
            this.Write("(");
            this.Write(this.ToStringHelper.ToStringWithCulture(GetParameterListAsString(Model.Parameters, Model.ReturnType)));
            this.Write(")\r\n");
     } 
            this.Write("{\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodBody>(Model)));
            this.Write("\r\n}\r\n\r\n");
 } else if (Model.IsInterfaceImplementation) { 
                if (VelocityFeatures.IsVelocityVersion(Model.Version)) { 
            this.Write("#if WI_IS_FEATURE_PRESENT(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.VelocityFeatureName));
            this.Write(")\r\n");
                }
       if (!Model.IsPureVirtual) {
           if (Model.DeclaringVersion.IsVersionInterfaceForwarded()) { 
            this.Write("_Check_return_ HRESULT STDMETHODCALLTYPE ");
 }
           else { 
            this.Write("IFACEMETHODIMP ");
 } 
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.DeclaringClass.GeneratedClassFullName)));
            this.Write("::");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.IdlMethodInfo.Name));
            this.Write("(");
            this.Write(this.ToStringHelper.ToStringWithCulture(GetParameterListAsString(Model.Parameters, Model.ReturnType)));
            this.Write(")\r\n{\r\n");
         if (Model.IsVirtual && Model.Modifier == Modifier.Public) { 
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<VirtualDispatchMethodBody>(Model)));
            this.Write("\r\n");
         } else { 
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodBody>(Model)));
            this.Write("\r\n");
         } 
            this.Write("}\r\n");
                if (VelocityFeatures.IsVelocityVersion(Model.Version)) { 
            this.Write("#endif\r\n");
                }
            this.Write("\r\n");
     }
        if (Model.IsVirtual) {
            if (Model.Modifier == Modifier.Protected) {
                if (VelocityFeatures.IsVelocityVersion(Model.Version)) { 
            this.Write("#if WI_IS_FEATURE_PRESENT(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.VelocityFeatureName));
            this.Write(")\r\n");
                }
            this.Write("_Check_return_ HRESULT ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.DeclaringClass.GeneratedClassFullName)));
            this.Write("::");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.IdlMemberInfo.ProtectedName));
            this.Write("(");
            this.Write(this.ToStringHelper.ToStringWithCulture(GetParameterListAsString(Model.Parameters, Model.ReturnType)));
            this.Write(")\r\n{\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<VirtualDispatchMethodBody>(Model)));
            this.Write("\r\n}\r\n");
                if (VelocityFeatures.IsVelocityVersion(Model.Version)) { 
            this.Write("#endif\r\n");
                }
            } else if (Model.Modifier == Modifier.Public && !Model.IsPureVirtual) { 
            this.Write("IFACEMETHODIMP ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.DeclaringClass.GeneratedClassFullName)));
            this.Write("::");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.IdlMethodInfo.VirtualName));
            this.Write("(");
            this.Write(this.ToStringHelper.ToStringWithCulture(GetParameterListAsString(Model.Parameters, Model.ReturnType)));
            this.Write(")\r\n{\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodBody>(Model)));
            this.Write("\r\n}\r\n\r\n");
         }
       }
   } else { 
            this.Write("_Check_return_ HRESULT ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.DeclaringClass.GeneratedClassFullName)));
            this.Write("::");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.IdlMethodInfo.Name));
            this.Write("(");
            this.Write(this.ToStringHelper.ToStringWithCulture(GetParameterListAsString(Model.Parameters, Model.ReturnType)));
            this.Write(")\r\n{\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodBody>(Model)));
            this.Write("\r\n}\r\n\r\n");
 } 
            return this.GenerationEnvironment.ToString();
        }
    }
}
