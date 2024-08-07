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
    public partial class Types : PhoneCppCodeGenerator<OMContextView>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Copyright>()));
            this.Write("\r\n\r\n#include \"precomp.h\"\r\n\r\n");
 foreach (var ns in Model.Namespaces) {
        var classes = ns.ReferenceClasses.Where(c => c.GeneratePartialClass && !c.IsInterface ).OrderBy(t => t.Name); 
        if (classes.Count() > 0) { 
            this.Write("#if DBG\r\n");
          foreach (var c in classes.Where(t => t.IsADependencyObject)) { 
            this.Write("const LPCWSTR ");
            this.Write(this.ToStringHelper.ToStringWithCulture(c.Name));
            this.Write("RuntimeClass::s_typeName = L\"");
            this.Write(this.ToStringHelper.ToStringWithCulture(c.Name));
            this.Write("\";\r\n");
          } 
            this.Write("#endif\r\n\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppNamespaceDeclarationBegin(ns)));
            this.Write("\r\n{\r\n");
          foreach (var c in classes) { 
            this.Write("\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Class>(c)));
            this.Write("\r\n");
              if (c.IdlClassInfo.HasAnyFactoryInterfaces || c.HasStaticMembers) {
            this.Write("\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Factory>(c)));
            this.Write("\r\n");
              }
            } 
            this.Write("}\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppNamespaceDeclarationEnd(ns)));
            this.Write("\r\n\r\n");
      } 
 } 
            return this.GenerationEnvironment.ToString();
        }
    }
}
