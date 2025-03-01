/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_html_script_element.h"
#include "foundation/native_value_converter.h"
#include "binding_call_methods.h"
#include "bindings/qjs/member_installer.h"
#include "bindings/qjs/qjs_function.h"
#include "bindings/qjs/converter_impl.h"
#include "bindings/qjs/script_wrappable.h"
#include "bindings/qjs/script_promise.h"
#include "bindings/qjs/cppgc/mutation_scope.h"
#include "core/executing_context.h"
#include "core/dom/element.h"
#include "core/dom/text.h"
#include "core/dom/document.h"
#include "core/dom/document_fragment.h"
#include "core/dom/comment.h"
#include "core/geometry/dom_matrix.h"
#include "core/geometry/dom_point.h"
#include "core/input/touch_list.h"
#include "core/dom/static_node_list.h"
#include "core/html/html_all_collection.h"
#include "defined_properties.h"
namespace webf {
const WrapperTypeInfo QJSHTMLScriptElement::wrapper_type_info_ {JS_CLASS_HTML_SCRIPT_ELEMENT, "HTMLScriptElement", HTMLElement::GetStaticWrapperTypeInfo(), QJSHTMLScriptElement::ConstructorCallback};
const WrapperTypeInfo& HTMLScriptElement::wrapper_type_info_ = QJSHTMLScriptElement::wrapper_type_info_;
JSValue QJSHTMLScriptElement::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLScriptElement::constructor");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    return JS_ThrowTypeError(ctx, "Illegal constructor");
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
}
  static JSValue supports(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'supports' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLScriptElement::supports");
  MemberMutationScope scope{context};
  Converter<IDLBoolean>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_type = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<HTMLScriptElement>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->supports(args_type,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLBoolean>::ToValue(ctx, std::move(return_value));
  }
static JSValue srcAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_script_element = toScriptWrappable<HTMLScriptElement>(this_val);
  assert(qjs_html_script_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLScriptElement::src");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_script_element->GetBindingProperty(binding_call_methods::ksrc, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue srcAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_script_element = toScriptWrappable<HTMLScriptElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_script_element->SetBindingProperty(binding_call_methods::ksrc, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue typeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_script_element = toScriptWrappable<HTMLScriptElement>(this_val);
  assert(qjs_html_script_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLScriptElement::type");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_script_element->GetBindingProperty(binding_call_methods::ktype, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue typeAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_script_element = toScriptWrappable<HTMLScriptElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_script_element->SetBindingProperty(binding_call_methods::ktype, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue noModuleAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_script_element = toScriptWrappable<HTMLScriptElement>(this_val);
  assert(qjs_html_script_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLScriptElement::noModule");
  ExceptionState exception_state;
  typename NativeTypeBool::ImplType v = NativeValueConverter<NativeTypeBool>::FromNativeValue(qjs_html_script_element->GetBindingProperty(binding_call_methods::knoModule, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLBoolean>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue noModuleAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_script_element = toScriptWrappable<HTMLScriptElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLBoolean>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_script_element->SetBindingProperty(binding_call_methods::knoModule, NativeValueConverter<NativeTypeBool>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue asyncAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_script_element = toScriptWrappable<HTMLScriptElement>(this_val);
  assert(qjs_html_script_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLScriptElement::async");
  ExceptionState exception_state;
  typename NativeTypeBool::ImplType v = NativeValueConverter<NativeTypeBool>::FromNativeValue(qjs_html_script_element->GetBindingProperty(binding_call_methods::kasync, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLBoolean>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue asyncAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_script_element = toScriptWrappable<HTMLScriptElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLBoolean>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_script_element->SetBindingProperty(binding_call_methods::kasync, NativeValueConverter<NativeTypeBool>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue textAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_script_element = toScriptWrappable<HTMLScriptElement>(this_val);
  assert(qjs_html_script_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLScriptElement::text");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_script_element->GetBindingProperty(binding_call_methods::ktext, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue textAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_script_element = toScriptWrappable<HTMLScriptElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_script_element->SetBindingProperty(binding_call_methods::ktext, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue readyStateAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_script_element = toScriptWrappable<HTMLScriptElement>(this_val);
  assert(qjs_html_script_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLScriptElement::readyState");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_script_element->GetBindingProperty(binding_call_methods::kreadyState, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
void QJSHTMLScriptElement::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSHTMLScriptElement::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"supports", supports, 1}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSHTMLScriptElement::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::ksrc.Impl(), srcAttributeGetCallback, srcAttributeSetCallback},
{defined_properties::ktype.Impl(), typeAttributeGetCallback, typeAttributeSetCallback},
{defined_properties::knoModule.Impl(), noModuleAttributeGetCallback, noModuleAttributeSetCallback},
{defined_properties::kasync.Impl(), asyncAttributeGetCallback, asyncAttributeSetCallback},
{defined_properties::ktext.Impl(), textAttributeGetCallback, textAttributeSetCallback},
{defined_properties::kreadyState.Impl(), readyStateAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSHTMLScriptElement::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kHTMLScriptElement.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}