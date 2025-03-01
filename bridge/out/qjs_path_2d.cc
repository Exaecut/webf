/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_path_2d.h"
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
const WrapperTypeInfo QJSPath2D::wrapper_type_info_ {JS_CLASS_PATH_2_D, "Path2D", nullptr, QJSPath2D::ConstructorCallback};
const WrapperTypeInfo& Path2D::wrapper_type_info_ = QJSPath2D::wrapper_type_info_;
JSValue QJSPath2D::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
    if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'constructor' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Path2D::constructor");
  MemberMutationScope scope{context};
  Path2D* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      return_value = Path2D::Create(context, exception_state);
      break;
    }
    auto&& args_init = Converter<IDLOptional<QJSUnionPath2DDomString>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      return_value = Path2D::Create(context, args_init, exception_state);
      break;
    }
    return_value = Path2D::Create(context, args_init, exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  JSValue proto = JS_GetPropertyStr(ctx, this_val, "prototype");
  JS_SetPrototype(ctx, return_value->ToQuickJSUnsafe(), proto);
  JS_FreeValue(ctx, proto);
  return return_value->ToQuickJS();
}
  static JSValue closePath(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Path2D::closePath");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<Path2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue* arguments = nullptr;;
    self->InvokeBindingMethod(binding_call_methods::kclosePath, 0, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue moveTo(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'moveTo' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Path2D::moveTo");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_x = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Path2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y)
    };
    self->InvokeBindingMethod(binding_call_methods::kmoveTo, 2, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
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
  static JSValue lineTo(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'lineTo' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Path2D::lineTo");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_x = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Path2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y)
    };
    self->InvokeBindingMethod(binding_call_methods::klineTo, 2, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
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
  static JSValue bezierCurveTo(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 6) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'bezierCurveTo' : 6 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Path2D::bezierCurveTo");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_cp1x = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_cp1y = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_cp2x = Converter<IDLDouble>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_cp2y = Converter<IDLDouble>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_x = Converter<IDLDouble>::FromValue(ctx, argv[4], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y = Converter<IDLDouble>::FromValue(ctx, argv[5], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 6) {
      auto* self = toScriptWrappable<Path2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_cp1x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_cp1y),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_cp2x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_cp2y),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y)
    };
    self->InvokeBindingMethod(binding_call_methods::kbezierCurveTo, 6, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
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
  static JSValue quadraticCurveTo(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 4) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'quadraticCurveTo' : 4 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Path2D::quadraticCurveTo");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_cpx = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_cpy = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_x = Converter<IDLDouble>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y = Converter<IDLDouble>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 4) {
      auto* self = toScriptWrappable<Path2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_cpx),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_cpy),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y)
    };
    self->InvokeBindingMethod(binding_call_methods::kquadraticCurveTo, 4, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
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
  static JSValue arc(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 5) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'arc' : 5 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Path2D::arc");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_x = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_radius = Converter<IDLDouble>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_startAngle = Converter<IDLDouble>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_endAngle = Converter<IDLDouble>::FromValue(ctx, argv[4], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 5) {
      auto* self = toScriptWrappable<Path2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_radius),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_startAngle),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_endAngle)
    };
    self->InvokeBindingMethod(binding_call_methods::karc, 5, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
      break;
    }
    auto&& args_anticlockwise = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, argv[5], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 6) {
      auto* self = toScriptWrappable<Path2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_radius),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_startAngle),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_endAngle),
    NativeValueConverter<NativeTypeBool>::ToNativeValue(args_anticlockwise)
    };
    self->InvokeBindingMethod(binding_call_methods::karc, 6, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
      break;
    }
    auto* self = toScriptWrappable<Path2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_radius),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_startAngle),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_endAngle),
    NativeValueConverter<NativeTypeBool>::ToNativeValue(args_anticlockwise)
    };
    self->InvokeBindingMethod(binding_call_methods::karc, 6, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue arcTo(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 5) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'arcTo' : 5 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Path2D::arcTo");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_x1 = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y1 = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_x2 = Converter<IDLDouble>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y2 = Converter<IDLDouble>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_radius = Converter<IDLDouble>::FromValue(ctx, argv[4], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 5) {
      auto* self = toScriptWrappable<Path2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x1),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y1),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x2),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y2),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_radius)
    };
    self->InvokeBindingMethod(binding_call_methods::karcTo, 5, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
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
  static JSValue ellipse(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 7) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'ellipse' : 7 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Path2D::ellipse");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_x = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_radiusX = Converter<IDLDouble>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_radiusY = Converter<IDLDouble>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_rotation = Converter<IDLDouble>::FromValue(ctx, argv[4], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_startAngle = Converter<IDLDouble>::FromValue(ctx, argv[5], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_endAngle = Converter<IDLDouble>::FromValue(ctx, argv[6], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 7) {
      auto* self = toScriptWrappable<Path2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_radiusX),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_radiusY),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_rotation),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_startAngle),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_endAngle)
    };
    self->InvokeBindingMethod(binding_call_methods::kellipse, 7, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
      break;
    }
    auto&& args_anticlockwise = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, argv[7], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 8) {
      auto* self = toScriptWrappable<Path2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_radiusX),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_radiusY),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_rotation),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_startAngle),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_endAngle),
    NativeValueConverter<NativeTypeBool>::ToNativeValue(args_anticlockwise)
    };
    self->InvokeBindingMethod(binding_call_methods::kellipse, 8, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
      break;
    }
    auto* self = toScriptWrappable<Path2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_radiusX),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_radiusY),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_rotation),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_startAngle),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_endAngle),
    NativeValueConverter<NativeTypeBool>::ToNativeValue(args_anticlockwise)
    };
    self->InvokeBindingMethod(binding_call_methods::kellipse, 8, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue rect(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 4) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'rect' : 4 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Path2D::rect");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_x = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_w = Converter<IDLDouble>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_h = Converter<IDLDouble>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 4) {
      auto* self = toScriptWrappable<Path2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_w),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_h)
    };
    self->InvokeBindingMethod(binding_call_methods::krect, 4, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
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
  static JSValue roundRect(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 5) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'roundRect' : 5 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Path2D::roundRect");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_x = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_w = Converter<IDLDouble>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_h = Converter<IDLDouble>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_radii = Converter<QJSUnionDoubleSequenceDouble>::FromValue(ctx, argv[4], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 5) {
      auto* self = toScriptWrappable<Path2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->roundRect(args_x,args_y,args_w,args_h,args_radii,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue addPath(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'addPath' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Path2D::addPath");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_path = Converter<Path2D>::ArgumentsValue(context, argv[0], 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Path2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->addPath(args_path,exception_state);
      break;
    }
    auto&& args_matrix = Converter<IDLOptional<DOMMatrix>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Path2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->addPath(args_path,args_matrix,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Path2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->addPath(args_path,args_matrix,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
void QJSPath2D::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallConstructor(context); 
}
void QJSPath2D::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"closePath", closePath, 0},
{"moveTo", moveTo, 2},
{"lineTo", lineTo, 2},
{"bezierCurveTo", bezierCurveTo, 6},
{"quadraticCurveTo", quadraticCurveTo, 4},
{"arc", arc, 6},
{"arcTo", arcTo, 5},
{"ellipse", ellipse, 8},
{"rect", rect, 4},
{"roundRect", roundRect, 5},
{"addPath", addPath, 2}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSPath2D::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kPath2D.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}