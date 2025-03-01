/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_canvas_rendering_context_2d.h"
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
const WrapperTypeInfo QJSCanvasRenderingContext2D::wrapper_type_info_ {JS_CLASS_CANVAS_RENDERING_CONTEXT_2_D, "CanvasRenderingContext2D", CanvasRenderingContext::GetStaticWrapperTypeInfo(), QJSCanvasRenderingContext2D::ConstructorCallback};
const WrapperTypeInfo& CanvasRenderingContext2D::wrapper_type_info_ = QJSCanvasRenderingContext2D::wrapper_type_info_;
JSValue QJSCanvasRenderingContext2D::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::constructor");
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
  static JSValue arc(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 5) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'arc' : 5 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::arc");
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
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
    auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::arcTo");
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
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  static JSValue beginPath(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::beginPath");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue* arguments = nullptr;;
    self->InvokeBindingMethod(binding_call_methods::kbeginPath, 0, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
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
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::bezierCurveTo");
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
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  static JSValue clearRect(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 4) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'clearRect' : 4 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::clearRect");
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
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_w),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_h)
    };
    self->InvokeBindingMethod(binding_call_methods::kclearRect, 4, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
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
  static JSValue closePath(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::closePath");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  static JSValue clip(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'clip' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::clip");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue* arguments = nullptr;;
    self->InvokeBindingMethod(binding_call_methods::kclip, 0, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
      break;
    }
    auto&& args_path = Converter<IDLOptional<Path2D>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypePointer<Path2D>>::ToNativeValue(args_path)
    };
    self->InvokeBindingMethod(binding_call_methods::kclip, 1, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
      break;
    }
    auto&& args_fillRule = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypePointer<Path2D>>::ToNativeValue(args_path),
    NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, args_fillRule)
    };
    self->InvokeBindingMethod(binding_call_methods::kclip, 2, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
      break;
    }
    auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypePointer<Path2D>>::ToNativeValue(args_path),
    NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, args_fillRule)
    };
    self->InvokeBindingMethod(binding_call_methods::kclip, 2, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
static JSValue drawImage_overload_0(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 9) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'drawImage' : 9 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::drawImage");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_image = Converter<HTMLImageElement>::ArgumentsValue(context, argv[0], 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_sx = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_sy = Converter<IDLDouble>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_sw = Converter<IDLDouble>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_sh = Converter<IDLDouble>::FromValue(ctx, argv[4], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_dx = Converter<IDLDouble>::FromValue(ctx, argv[5], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_dy = Converter<IDLDouble>::FromValue(ctx, argv[6], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_dw = Converter<IDLDouble>::FromValue(ctx, argv[7], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_dh = Converter<IDLDouble>::FromValue(ctx, argv[8], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 9) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypePointer<HTMLImageElement>>::ToNativeValue(args_image),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_sx),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_sy),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_sw),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_sh),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_dx),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_dy),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_dw),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_dh)
    };
    self->InvokeBindingMethod(binding_call_methods::kdrawImage, 9, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
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
static JSValue drawImage_overload_1(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 5) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'drawImage' : 5 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::drawImage");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_image = Converter<HTMLImageElement>::ArgumentsValue(context, argv[0], 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_dx = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_dy = Converter<IDLDouble>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_dw = Converter<IDLDouble>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_dh = Converter<IDLDouble>::FromValue(ctx, argv[4], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 5) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypePointer<HTMLImageElement>>::ToNativeValue(args_image),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_dx),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_dy),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_dw),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_dh)
    };
    self->InvokeBindingMethod(binding_call_methods::kdrawImage, 5, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
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
static JSValue drawImage_overload_2(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 3) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'drawImage' : 3 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::drawImage");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_image = Converter<HTMLImageElement>::ArgumentsValue(context, argv[0], 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_dx = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_dy = Converter<IDLDouble>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 3) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypePointer<HTMLImageElement>>::ToNativeValue(args_image),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_dx),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_dy)
    };
    self->InvokeBindingMethod(binding_call_methods::kdrawImage, 3, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
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
    static JSValue drawImage(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
if (9 == argc) {
  return drawImage_overload_0(ctx, this_val, argc, argv);
}
if (5 == argc) {
  return drawImage_overload_1(ctx, this_val, argc, argv);
}
if (3 == argc) {
  return drawImage_overload_2(ctx, this_val, argc, argv);
}
return drawImage_overload_0(ctx, this_val, argc, argv);
    }
  static JSValue ellipse(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 7) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'ellipse' : 7 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::ellipse");
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
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
    auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  static JSValue fill(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'fill' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::fill");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->fill(exception_state);
      break;
    }
    auto&& args_path = Converter<IDLOptional<QJSUnionPath2DDomString>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->fill(args_path,exception_state);
      break;
    }
    auto&& args_fillRule = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->fill(args_path,args_fillRule,exception_state);
      break;
    }
    auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->fill(args_path,args_fillRule,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue fillRect(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 4) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'fillRect' : 4 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::fillRect");
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
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_w),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_h)
    };
    self->InvokeBindingMethod(binding_call_methods::kfillRect, 4, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
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
  static JSValue fillText(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 3) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'fillText' : 3 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::fillText");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_text = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_x = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y = Converter<IDLDouble>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 3) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, args_text),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y)
    };
    self->InvokeBindingMethod(binding_call_methods::kfillText, 3, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
      break;
    }
    auto&& args_maxWidth = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 4) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, args_text),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_maxWidth)
    };
    self->InvokeBindingMethod(binding_call_methods::kfillText, 4, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
      break;
    }
    auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, args_text),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_maxWidth)
    };
    self->InvokeBindingMethod(binding_call_methods::kfillText, 4, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
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
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::lineTo");
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
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  static JSValue moveTo(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'moveTo' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::moveTo");
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
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  static JSValue rect(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 4) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'rect' : 4 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::rect");
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
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  static JSValue restore(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::restore");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue* arguments = nullptr;;
    self->InvokeBindingMethod(binding_call_methods::krestore, 0, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue resetTransform(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::resetTransform");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue* arguments = nullptr;;
    self->InvokeBindingMethod(binding_call_methods::kresetTransform, 0, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue rotate(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'rotate' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::rotate");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_angle = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_angle)
    };
    self->InvokeBindingMethod(binding_call_methods::krotate, 1, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
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
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::roundRect");
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
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  static JSValue quadraticCurveTo(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 4) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'quadraticCurveTo' : 4 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::quadraticCurveTo");
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
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  static JSValue stroke(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'stroke' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::stroke");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue* arguments = nullptr;;
    self->InvokeBindingMethod(binding_call_methods::kstroke, 0, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
      break;
    }
    auto&& args_path = Converter<IDLOptional<Path2D>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypePointer<Path2D>>::ToNativeValue(args_path)
    };
    self->InvokeBindingMethod(binding_call_methods::kstroke, 1, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
      break;
    }
    auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypePointer<Path2D>>::ToNativeValue(args_path)
    };
    self->InvokeBindingMethod(binding_call_methods::kstroke, 1, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue strokeRect(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 4) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'strokeRect' : 4 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::strokeRect");
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
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_w),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_h)
    };
    self->InvokeBindingMethod(binding_call_methods::kstrokeRect, 4, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
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
  static JSValue save(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::save");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue* arguments = nullptr;;
    self->InvokeBindingMethod(binding_call_methods::ksave, 0, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue scale(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'scale' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::scale");
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
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y)
    };
    self->InvokeBindingMethod(binding_call_methods::kscale, 2, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
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
  static JSValue strokeText(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 3) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'strokeText' : 3 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::strokeText");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_text = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_x = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y = Converter<IDLDouble>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 3) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, args_text),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y)
    };
    self->InvokeBindingMethod(binding_call_methods::kstrokeText, 3, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
      break;
    }
    auto&& args_maxWidth = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 4) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, args_text),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_maxWidth)
    };
    self->InvokeBindingMethod(binding_call_methods::kstrokeText, 4, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
      break;
    }
    auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, args_text),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_maxWidth)
    };
    self->InvokeBindingMethod(binding_call_methods::kstrokeText, 4, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue setTransform(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 6) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'setTransform' : 6 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::setTransform");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_a = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_b = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_c = Converter<IDLDouble>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_d = Converter<IDLDouble>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_e = Converter<IDLDouble>::FromValue(ctx, argv[4], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_f = Converter<IDLDouble>::FromValue(ctx, argv[5], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 6) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_a),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_b),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_c),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_d),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_e),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_f)
    };
    self->InvokeBindingMethod(binding_call_methods::ksetTransform, 6, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
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
  static JSValue transform(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 6) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'transform' : 6 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::transform");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_a = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_b = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_c = Converter<IDLDouble>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_d = Converter<IDLDouble>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_e = Converter<IDLDouble>::FromValue(ctx, argv[4], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_f = Converter<IDLDouble>::FromValue(ctx, argv[5], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 6) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_a),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_b),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_c),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_d),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_e),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_f)
    };
    self->InvokeBindingMethod(binding_call_methods::ktransform, 6, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
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
  static JSValue translate(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'translate' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::translate");
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
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue arguments[] = {
      NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_x),
    NativeValueConverter<NativeTypeDouble>::ToNativeValue(args_y)
    };
    self->InvokeBindingMethod(binding_call_methods::ktranslate, 2, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
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
  static JSValue createLinearGradient(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 4) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'createLinearGradient' : 4 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::createLinearGradient");
  MemberMutationScope scope{context};
  CanvasGradient* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_x0 = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y0 = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_x1 = Converter<IDLDouble>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y1 = Converter<IDLDouble>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 4) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->createLinearGradient(args_x0,args_y0,args_x1,args_y1,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<CanvasGradient>::ToValue(ctx, std::move(return_value));
  }
  static JSValue createRadialGradient(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 6) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'createRadialGradient' : 6 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::createRadialGradient");
  MemberMutationScope scope{context};
  CanvasGradient* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_x0 = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y0 = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_r0 = Converter<IDLDouble>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_x1 = Converter<IDLDouble>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y1 = Converter<IDLDouble>::FromValue(ctx, argv[4], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_r1 = Converter<IDLDouble>::FromValue(ctx, argv[5], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 6) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->createRadialGradient(args_x0,args_y0,args_r0,args_x1,args_y1,args_r1,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<CanvasGradient>::ToValue(ctx, std::move(return_value));
  }
  static JSValue createPattern(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'createPattern' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::createPattern");
  MemberMutationScope scope{context};
  CanvasPattern* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_image = Converter<QJSUnionHTMLImageElementHTMLCanvasElement>::ArgumentsValue(context, argv[0], 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_repetition = Converter<IDLDOMString>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->createPattern(args_image,args_repetition,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<CanvasPattern>::ToValue(ctx, std::move(return_value));
  }
  static JSValue reset(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::reset");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<CanvasRenderingContext2D>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue* arguments = nullptr;;
    self->InvokeBindingMethod(binding_call_methods::kreset, 0, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
static JSValue fillStyleAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  assert(qjs_canvas_rendering_context_2d != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::fillStyle");
  auto result = Converter<IDLNullable<QJSUnionDomStringCanvasGradient>>::ToValue(ctx, qjs_canvas_rendering_context_2d->fillStyle());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue fillStyleAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<QJSUnionDomStringCanvasGradient>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_canvas_rendering_context_2d->setFillStyle(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue directionAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  assert(qjs_canvas_rendering_context_2d != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::direction");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_canvas_rendering_context_2d->GetBindingProperty(binding_call_methods::kdirection, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue directionAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_canvas_rendering_context_2d->SetBindingProperty(binding_call_methods::kdirection, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue fontAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  assert(qjs_canvas_rendering_context_2d != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::font");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_canvas_rendering_context_2d->GetBindingProperty(binding_call_methods::kfont, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue fontAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_canvas_rendering_context_2d->SetBindingProperty(binding_call_methods::kfont, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue strokeStyleAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  assert(qjs_canvas_rendering_context_2d != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::strokeStyle");
  auto result = Converter<IDLNullable<QJSUnionDomStringCanvasGradient>>::ToValue(ctx, qjs_canvas_rendering_context_2d->strokeStyle());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue strokeStyleAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<QJSUnionDomStringCanvasGradient>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_canvas_rendering_context_2d->setStrokeStyle(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue lineCapAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  assert(qjs_canvas_rendering_context_2d != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::lineCap");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_canvas_rendering_context_2d->GetBindingProperty(binding_call_methods::klineCap, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue lineCapAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_canvas_rendering_context_2d->SetBindingProperty(binding_call_methods::klineCap, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue lineDashOffsetAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  assert(qjs_canvas_rendering_context_2d != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::lineDashOffset");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_canvas_rendering_context_2d->GetBindingProperty(binding_call_methods::klineDashOffset, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue lineDashOffsetAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_canvas_rendering_context_2d->SetBindingProperty(binding_call_methods::klineDashOffset, NativeValueConverter<NativeTypeDouble>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue lineJoinAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  assert(qjs_canvas_rendering_context_2d != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::lineJoin");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_canvas_rendering_context_2d->GetBindingProperty(binding_call_methods::klineJoin, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue lineJoinAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_canvas_rendering_context_2d->SetBindingProperty(binding_call_methods::klineJoin, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue lineWidthAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  assert(qjs_canvas_rendering_context_2d != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::lineWidth");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_canvas_rendering_context_2d->GetBindingProperty(binding_call_methods::klineWidth, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue lineWidthAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_canvas_rendering_context_2d->SetBindingProperty(binding_call_methods::klineWidth, NativeValueConverter<NativeTypeDouble>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue miterLimitAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  assert(qjs_canvas_rendering_context_2d != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::miterLimit");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_canvas_rendering_context_2d->GetBindingProperty(binding_call_methods::kmiterLimit, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue miterLimitAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_canvas_rendering_context_2d->SetBindingProperty(binding_call_methods::kmiterLimit, NativeValueConverter<NativeTypeDouble>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue textAlignAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  assert(qjs_canvas_rendering_context_2d != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::textAlign");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_canvas_rendering_context_2d->GetBindingProperty(binding_call_methods::ktextAlign, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue textAlignAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_canvas_rendering_context_2d->SetBindingProperty(binding_call_methods::ktextAlign, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue textBaselineAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  assert(qjs_canvas_rendering_context_2d != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("CanvasRenderingContext2D::textBaseline");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_canvas_rendering_context_2d->GetBindingProperty(binding_call_methods::ktextBaseline, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue textBaselineAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_canvas_rendering_context_2d = toScriptWrappable<CanvasRenderingContext2D>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_canvas_rendering_context_2d->SetBindingProperty(binding_call_methods::ktextBaseline, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
void QJSCanvasRenderingContext2D::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSCanvasRenderingContext2D::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"arc", arc, 6},
{"arcTo", arcTo, 5},
{"beginPath", beginPath, 0},
{"bezierCurveTo", bezierCurveTo, 6},
{"clearRect", clearRect, 4},
{"closePath", closePath, 0},
{"clip", clip, 2},
{"drawImage", drawImage, 9},
{"ellipse", ellipse, 8},
{"fill", fill, 2},
{"fillRect", fillRect, 4},
{"fillText", fillText, 4},
{"lineTo", lineTo, 2},
{"moveTo", moveTo, 2},
{"rect", rect, 4},
{"restore", restore, 0},
{"resetTransform", resetTransform, 0},
{"rotate", rotate, 1},
{"roundRect", roundRect, 5},
{"quadraticCurveTo", quadraticCurveTo, 4},
{"stroke", stroke, 1},
{"strokeRect", strokeRect, 4},
{"save", save, 0},
{"scale", scale, 2},
{"strokeText", strokeText, 4},
{"setTransform", setTransform, 6},
{"transform", transform, 6},
{"translate", translate, 2},
{"createLinearGradient", createLinearGradient, 4},
{"createRadialGradient", createRadialGradient, 6},
{"createPattern", createPattern, 2},
{"reset", reset, 0}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSCanvasRenderingContext2D::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kfillStyle.Impl(), fillStyleAttributeGetCallback, fillStyleAttributeSetCallback},
{defined_properties::kdirection.Impl(), directionAttributeGetCallback, directionAttributeSetCallback},
{defined_properties::kfont.Impl(), fontAttributeGetCallback, fontAttributeSetCallback},
{defined_properties::kstrokeStyle.Impl(), strokeStyleAttributeGetCallback, strokeStyleAttributeSetCallback},
{defined_properties::klineCap.Impl(), lineCapAttributeGetCallback, lineCapAttributeSetCallback},
{defined_properties::klineDashOffset.Impl(), lineDashOffsetAttributeGetCallback, lineDashOffsetAttributeSetCallback},
{defined_properties::klineJoin.Impl(), lineJoinAttributeGetCallback, lineJoinAttributeSetCallback},
{defined_properties::klineWidth.Impl(), lineWidthAttributeGetCallback, lineWidthAttributeSetCallback},
{defined_properties::kmiterLimit.Impl(), miterLimitAttributeGetCallback, miterLimitAttributeSetCallback},
{defined_properties::ktextAlign.Impl(), textAlignAttributeGetCallback, textAlignAttributeSetCallback},
{defined_properties::ktextBaseline.Impl(), textBaselineAttributeGetCallback, textBaselineAttributeSetCallback}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSCanvasRenderingContext2D::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kCanvasRenderingContext2D.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}