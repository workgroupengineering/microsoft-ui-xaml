// ------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version: 17.0.0.0
//  
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
// ------------------------------------------------------------------------------
namespace XamlGen.Templates.Manifests
{
    using System.Linq;
    using System.Text;
    using System.Collections.Generic;
    using OM;
    using System;
    
    /// <summary>
    /// Class to produce the template output
    /// </summary>
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.VisualStudio.TextTemplating", "17.0.0.0")]
    public partial class Microsoft_Windows_Xaml_Etw : XamlCodeGenerator<OMContextView>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
            this.Write(@"<?xml version='1.0' encoding='utf-8' standalone='yes'?>
<!-- Copyright (c) Microsoft Corporation. Licensed under the MIT License. See LICENSE in the project root for license information. -->
<instrumentationManifest xmlns=""http://schemas.microsoft.com/win/2004/08/events"">
  ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Microsoft_Windows_DirectUI_EtwEvents>(Model, Arguments)));
            this.Write("\r\n</instrumentationManifest>");
            return this.GenerationEnvironment.ToString();
        }
    }
}
