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
namespace XamlGen.Templates.Code.Framework.Headers
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
    public partial class Interface : CppCodeGenerator<ClassDefinition>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Copyright>()));
            this.Write("\r\n\r\n#pragma once\r\n\r\n");
 var dependencies = Model.Dependencies.OfType<ClassDefinition>().Where(d => d.GenerateFrameworkHFile && d.IsInterface).OrderBy(d => d.CppFrameworkGeneratedHeaderFileName);
   if (dependencies.Count() > 0) {
        foreach (var dependency in dependencies) { 
            this.Write("#include \"");
            this.Write(this.ToStringHelper.ToStringWithCulture(dependency.CppFrameworkGeneratedHeaderFileName));
            this.Write("\"\r\n");
      }
            this.Write("\r\n");
 }
            this.Write("namespace ");
            this.Write(this.ToStringHelper.ToStringWithCulture(OMContext.DefaultImplementationNamespace));
            this.Write("\r\n{\r\n    interface __declspec(uuid(\"");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.IdlClassInfo.InterfaceGuid));
            this.Write("\")) ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.Name));
            this.Write(" : public IInspectable\r\n    {\r\n        // Properties.\r\n");
 foreach (var property in Model.InstanceProperties) { 
            this.Write("        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<InterfaceProperty>(property)));
            this.Write("\r\n");
 } 
            this.Write("\r\n        // Events.\r\n");
 foreach (var ev in Model.InstanceEvents.Where(ev => !ev.XamlEventFlags.IsHidden)) { 
            this.Write("        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<InterfaceEvent>(ev)));
            this.Write("\r\n");
 } 
            this.Write("\r\n        // Methods.\r\n");
 foreach (var method in Model.InstanceMethods) { 
            this.Write("        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<InterfaceMethod>(method)));
            this.Write("\r\n");
 } 
            this.Write("    };\r\n}\r\n");
            return this.GenerationEnvironment.ToString();
        }
    }
}
