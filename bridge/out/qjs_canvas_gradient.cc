/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_canvas_gradient.h"
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
const WrapperTypeInfo QJSCanvasGradient::wrapper_type_info_ {JS_CLASS_CANVAS_GRADIENT, "CanvasGradient", nullptr, QJSCanvasGradient::ConstructorCallback};
const WrapperTypeInfo& CanvasGradient::wrapper_type_info_ = QJSCanvasGradient::wrapper_type_info_;
JSValue QJSCanvasGradient::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasGradient::constructor");
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
  static JSValue addColorStop(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'addColorStop' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasGradient::addColorStop");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_offset = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_color = Converter<IDLDOMString>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<CanvasGradient>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_offset),
    NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, args_color)
    };
    self->InvokeBindingMethod(binding_call_methods::kaddColorStop, 2, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
void QJSCanvasGradient::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallConstructor(context); 
}
void QJSCanvasGradient::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"addColorStop", addColorStop, 2}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSCanvasGradient::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kCanvasGradient.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}