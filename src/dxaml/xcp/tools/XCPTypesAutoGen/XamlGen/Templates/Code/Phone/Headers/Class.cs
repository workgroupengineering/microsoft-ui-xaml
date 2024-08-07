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
namespace XamlGen.Templates.Code.Phone.Headers
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
    public partial class Class : PhoneCppCodeGenerator<ClassDefinition>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
            this.Write("    class __declspec(novtable) ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.GeneratedClassName));
            this.Write("\r\n        : public ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.Name));
            this.Write("RuntimeClass\r\n");

if (Model.ImplementOverridesExplicitly) {
    foreach (var virtualMemberInterface in Model.BaseClassesVirtualMemberInterfaces) {
        if (VelocityFeatures.IsVelocityVersion(virtualMemberInterface.Version)) { 
            this.Write("#if WI_IS_FEATURE_PRESENT(");
            this.Write(this.ToStringHelper.ToStringWithCulture(VelocityFeatures.GetFeatureName(virtualMemberInterface.Version)));
            this.Write(")\r\n");
        }
            this.Write("        , public ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(virtualMemberInterface.IdlClassInfo.FullVirtualMembersInterfaceName)));
            this.Write("\r\n");
        if (VelocityFeatures.IsVelocityVersion(virtualMemberInterface.Version)) { 
            this.Write("#endif\r\n");
        }
    }
}
            this.Write("    {\r\n");
 if (Model.GeneratePartialClass) { 
            this.Write("        friend class ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.IdlClassInfo.RuntimeClassFullName)));
            this.Write(";\r\n");
 }
   if (Model.IdlClassInfo.IsComposable) { 
            this.Write("        friend class pctl::AggregableComObject< \r\n            ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.IdlClassInfo.RuntimeClassFullName)));
            this.Write(",\r\n            ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.IdlClassInfo.AbiInterfaceFullName)));
            this.Write(">;\r\n");
 }
   if (Model.IdlClassInfo.HasRuntimeClass) { 
            this.Write("        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.InspectableClassMacroName));
            this.Write("(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.IdlClassInfo.RuntimeClassString));
            this.Write(", TrustLevel::BaseTrust);\r\n");
 } 
            this.Write("\r\n    public:\r\n        // Constructors/destructors.\r\n        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.GeneratedClassName));
            this.Write("() {};\r\n        virtual ~");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.GeneratedClassName));
            this.Write("() {};\r\n\r\n");
 if (!Model.IsAbstract) {
        if (!Model.HasParameterlessConstructor) { 
            this.Write("        _Check_return_ HRESULT RuntimeClassInitialize();\r\n");
      }
        foreach (ConstructorDefinition ctor in Model.Constructors) { 
            this.Write("        _Check_return_ HRESULT RuntimeClassInitialize(");
            this.Write(this.ToStringHelper.ToStringWithCulture(GetParameterListAsString(ctor.Parameters)));
            this.Write(");\r\n");
      }

   } 
            this.Write("\r\n");
 if (Model.ImplementOverridesExplicitly) { 
            this.Write(@"        _Success_(return) _Check_return_ bool QueryInterfaceOverride(_In_ REFIID riid, _COM_Outptr_ void** ppInterface) override;
        STDMETHOD(GetIids)(_Out_ ULONG *iidCount,
            _When_(*iidCount == 0, _At_(*iids, _Post_null_))
            _When_(*iidCount > 0, _At_(*iids, _Post_notnull_))
            _Outptr_result_buffer_maybenull_(*iidCount) _Result_nullonfailure_ IID **iids) override;

 ");
 } 
            this.Write("        // Properties.\r\n");
 foreach (var property in Model.InstanceProperties.Where(p => p.GenerateStub)) { 
            this.Write("        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Property>(property)));
            this.Write("\r\n");
 } 
            this.Write("\r\n        // Virtual properties.\r\n\r\n        // Protected properties.\r\n\r\n        /" +
                    "/ Methods.\r\n");
 foreach (var method in Model.InstanceMethods) { 
            this.Write("        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Method>(method)));
            this.Write("\r\n");
 } 
            this.Write("\r\n        // Virtual methods.\r\n\r\n        // Protected methods.\r\n\r\n        // Even" +
                    "ts.\r\n");
 foreach (var ev in Model.InstanceEvents.Where(ev => !ev.XamlEventFlags.IsHidden)) { 
            this.Write("        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Event>(ev)));
            this.Write("\r\n");
 } 
            this.Write("\r\n    protected:\r\n\r\n        // Override Interfaces\r\n");
 foreach (var overrideInterface in Model.OverrideInterfaces) { 
            this.Write("\r\n");
    if (VelocityFeatures.IsVelocityVersion(overrideInterface.Version)) {
            this.Write("#if WI_IS_FEATURE_PRESENT(");
            this.Write(this.ToStringHelper.ToStringWithCulture(VelocityFeatures.GetFeatureName(overrideInterface.Version)));
            this.Write(")\r\n");
    }
            this.Write("        // ");
            this.Write(this.ToStringHelper.ToStringWithCulture(overrideInterface.IdlClassInfo.VirtualMembersInterfaceName));
            this.Write("\r\n");
      foreach (var property in overrideInterface.InstanceProperties.Where(p => p.GenerateStub && (p.IsVirtual))) { 
            this.Write("        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<InterfaceMethod>(property.GetGetMethod())));
            this.Write("\r\n");
 } 
      foreach (var method in overrideInterface.InstanceMethods.Where(m => m.GenerateStub && (m.IsAbstract || m.IsVirtual))) { 
            this.Write("        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<InterfaceMethod>(method)));
            this.Write("\r\n");
      } 
 if (VelocityFeatures.IsVelocityVersion(overrideInterface.Version)) { 
            this.Write("#endif\r\n");
 }
 } 
            this.Write("\r\n    private:\r\n        // Private Setters\r\n");
 foreach (var property in Model.InstanceProperties.Where(p => p.GenerateStub && p.SetterModifier == Modifier.Private && !p.IsReadOnly)) { 
            this.Write("        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<PrivateProperty>(property)));
            this.Write("\r\n");
 } 
            this.Write("\r\n        // Private properties.\r\n\r\n        // Customized properties.\r\n");
 foreach (var property in Model.InstanceProperties.Where(m => m.HasImplMethod)) { 
            this.Write("        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<PropertyImpl>(property)));
            this.Write("\r\n");
 } 
            this.Write("\r\n");
 if (Model.IdlClassInfo.IsComposable) { 
            this.Write("        // Initialization methods required by AggregableComObject to make this an" +
                    " aggregable class.\r\n        virtual _Check_return_ HRESULT InitializeImpl(_In_op" +
                    "t_ IInspectable* pOuter = nullptr);\r\n");
 } else { 
            this.Write("        // Initialization methods\r\n        virtual _Check_return_ HRESULT Initial" +
                    "izeImpl();\r\n");
 }
   foreach (ConstructorDefinition ctor in Model.CustomConstructors) { 
            this.Write("        virtual _Check_return_ HRESULT InitializeImpl(");
            this.Write(this.ToStringHelper.ToStringWithCulture(GetPhoneInitializeImplParameterListAsString(Model, ctor.Parameters)));
            this.Write(");\r\n");
 } 
            this.Write("\r\n        // Event Sources\r\n");
 foreach (EventDefinition ev in Model.InstanceEvents.Where(ev => !ev.XamlEventFlags.IsHidden)) {
            this.Write("        Private::TrackerEventSource<");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(ev.EventHandlerType.AbiFullName)));
            this.Write("> ");
            this.Write(this.ToStringHelper.ToStringWithCulture(ev.EventSourceMemberName));
            this.Write(";\r\n");
 }
            this.Write("    };\r\n");
            return this.GenerationEnvironment.ToString();
        }
    }
}
