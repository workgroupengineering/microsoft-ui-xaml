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
    public partial class Event : CppCodeGenerator<EventDefinition>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
 if (Model.GenerateStub && (!Model.IsStatic || !Model.IsInterfaceImplementation)) { 
 if (Model.IsEventSourcePureVirtual) { 
            this.Write("virtual ");
 } 
            this.Write("_Check_return_ HRESULT ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.GetEventSourceName));
            this.Write("(_Outptr_ ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.EventSourceTypeName));
            this.Write("** ppEventSource)");
 if (Model.IsEventSourcePureVirtual) { 
            this.Write(" = 0");
 } 
            this.Write(";\r\n");
 } 
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Method>(Model.GetAddMethod())));
            this.Write("\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Method>(Model.GetRemoveMethod())));
            this.Write("\r\n");
            return this.GenerationEnvironment.ToString();
        }
    }
}
