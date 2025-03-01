/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_css_style_declaration.h"
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
const WrapperTypeInfo QJSCSSStyleDeclaration::wrapper_type_info_ {JS_CLASS_CSS_STYLE_DECLARATION, "CSSStyleDeclaration", nullptr, QJSCSSStyleDeclaration::ConstructorCallback};
const WrapperTypeInfo& CSSStyleDeclaration::wrapper_type_info_ = QJSCSSStyleDeclaration::wrapper_type_info_;
JSValue QJSCSSStyleDeclaration::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CSSStyleDeclaration::constructor");
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
  static JSValue getPropertyValue(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'getPropertyValue' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CSSStyleDeclaration::getPropertyValue");
  MemberMutationScope scope{context};
  Converter<IDLDOMString>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_property = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<CSSStyleDeclaration>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->getPropertyValue(args_property,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLDOMString>::ToValue(ctx, std::move(return_value));
  }
  static JSValue setProperty(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'setProperty' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CSSStyleDeclaration::setProperty");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_property = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_value = Converter<IDLAny>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<CSSStyleDeclaration>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->setProperty(args_property,args_value,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue removeProperty(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'removeProperty' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CSSStyleDeclaration::removeProperty");
  MemberMutationScope scope{context};
  Converter<IDLDOMString>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_property = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<CSSStyleDeclaration>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->removeProperty(args_property,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLDOMString>::ToValue(ctx, std::move(return_value));
  }
static JSValue cssTextAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_css_style_declaration = toScriptWrappable<CSSStyleDeclaration>(this_val);
  assert(qjs_css_style_declaration != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("CSSStyleDeclaration::cssText");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_css_style_declaration->cssText());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue cssTextAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_css_style_declaration = toScriptWrappable<CSSStyleDeclaration>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_css_style_declaration->setCssText(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue lengthAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_css_style_declaration = toScriptWrappable<CSSStyleDeclaration>(this_val);
  assert(qjs_css_style_declaration != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("CSSStyleDeclaration::length");
  auto result = Converter<IDLInt64>::ToValue(ctx, qjs_css_style_declaration->length());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
void QJSCSSStyleDeclaration::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSCSSStyleDeclaration::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"getPropertyValue", getPropertyValue, 1},
{"setProperty", setProperty, 2},
{"removeProperty", removeProperty, 1}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSCSSStyleDeclaration::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kcssText.Impl(), cssTextAttributeGetCallback, cssTextAttributeSetCallback},
{defined_properties::klength.Impl(), lengthAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSCSSStyleDeclaration::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kCSSStyleDeclaration.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}