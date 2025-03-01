/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_dom_matrix_read_only.h"
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
const WrapperTypeInfo QJSDOMMatrixReadOnly::wrapper_type_info_ {JS_CLASS_DOM_MATRIX_READ_ONLY, "DOMMatrixReadOnly", nullptr, QJSDOMMatrixReadOnly::ConstructorCallback};
const WrapperTypeInfo& DOMMatrixReadOnly::wrapper_type_info_ = QJSDOMMatrixReadOnly::wrapper_type_info_;
JSValue QJSDOMMatrixReadOnly::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
    if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'constructor' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::constructor");
  MemberMutationScope scope{context};
  DOMMatrixReadOnly* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      return_value = DOMMatrixReadOnly::Create(context, exception_state);
      break;
    }
    auto&& args_init = Converter<IDLOptional<QJSUnionSequenceDoubleDOMMatrixInit>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      return_value = DOMMatrixReadOnly::Create(context, args_init, exception_state);
      break;
    }
    return_value = DOMMatrixReadOnly::Create(context, args_init, exception_state);
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
  static JSValue flipX(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::flipX");
  MemberMutationScope scope{context};
  DOMMatrix* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->flipX(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DOMMatrix>::ToValue(ctx, std::move(return_value));
  }
  static JSValue flipY(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::flipY");
  MemberMutationScope scope{context};
  DOMMatrix* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->flipY(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DOMMatrix>::ToValue(ctx, std::move(return_value));
  }
  static JSValue inverse(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::inverse");
  MemberMutationScope scope{context};
  DOMMatrix* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->inverse(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DOMMatrix>::ToValue(ctx, std::move(return_value));
  }
  static JSValue multiply(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'multiply' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::multiply");
  MemberMutationScope scope{context};
  DOMMatrix* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_matrix = Converter<DOMMatrix>::ArgumentsValue(context, argv[0], 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->multiply(args_matrix,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DOMMatrix>::ToValue(ctx, std::move(return_value));
  }
  static JSValue rotateAxisAngle(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'rotateAxisAngle' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::rotateAxisAngle");
  MemberMutationScope scope{context};
  DOMMatrix* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->rotateAxisAngle(exception_state);
      break;
    }
    auto&& args_x = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->rotateAxisAngle(args_x,exception_state);
      break;
    }
    auto&& args_y = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->rotateAxisAngle(args_x,args_y,exception_state);
      break;
    }
    auto&& args_z = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 3) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->rotateAxisAngle(args_x,args_y,args_z,exception_state);
      break;
    }
    auto&& args_angle = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 4) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->rotateAxisAngle(args_x,args_y,args_z,args_angle,exception_state);
      break;
    }
    auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->rotateAxisAngle(args_x,args_y,args_z,args_angle,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DOMMatrix>::ToValue(ctx, std::move(return_value));
  }
  static JSValue rotate(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'rotate' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::rotate");
  MemberMutationScope scope{context};
  DOMMatrix* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->rotate(exception_state);
      break;
    }
    auto&& args_x = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->rotate(args_x,exception_state);
      break;
    }
    auto&& args_y = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->rotate(args_x,args_y,exception_state);
      break;
    }
    auto&& args_z = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 3) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->rotate(args_x,args_y,args_z,exception_state);
      break;
    }
    auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->rotate(args_x,args_y,args_z,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DOMMatrix>::ToValue(ctx, std::move(return_value));
  }
  static JSValue rotateFromVector(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'rotateFromVector' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::rotateFromVector");
  MemberMutationScope scope{context};
  DOMMatrix* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->rotateFromVector(exception_state);
      break;
    }
    auto&& args_x = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->rotateFromVector(args_x,exception_state);
      break;
    }
    auto&& args_y = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->rotateFromVector(args_x,args_y,exception_state);
      break;
    }
    auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->rotateFromVector(args_x,args_y,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DOMMatrix>::ToValue(ctx, std::move(return_value));
  }
  static JSValue scale(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'scale' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::scale");
  MemberMutationScope scope{context};
  DOMMatrix* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scale(exception_state);
      break;
    }
    auto&& args_sx = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scale(args_sx,exception_state);
      break;
    }
    auto&& args_sy = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scale(args_sx,args_sy,exception_state);
      break;
    }
    auto&& args_sz = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 3) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scale(args_sx,args_sy,args_sz,exception_state);
      break;
    }
    auto&& args_ox = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 4) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scale(args_sx,args_sy,args_sz,args_ox,exception_state);
      break;
    }
    auto&& args_oy = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[4], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 5) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scale(args_sx,args_sy,args_sz,args_ox,args_oy,exception_state);
      break;
    }
    auto&& args_oz = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[5], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 6) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scale(args_sx,args_sy,args_sz,args_ox,args_oy,args_oz,exception_state);
      break;
    }
    auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scale(args_sx,args_sy,args_sz,args_ox,args_oy,args_oz,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DOMMatrix>::ToValue(ctx, std::move(return_value));
  }
  static JSValue scale3d(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'scale3d' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::scale3d");
  MemberMutationScope scope{context};
  DOMMatrix* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scale3d(exception_state);
      break;
    }
    auto&& args_scale = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scale3d(args_scale,exception_state);
      break;
    }
    auto&& args_ox = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scale3d(args_scale,args_ox,exception_state);
      break;
    }
    auto&& args_oy = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 3) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scale3d(args_scale,args_ox,args_oy,exception_state);
      break;
    }
    auto&& args_oz = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 4) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scale3d(args_scale,args_ox,args_oy,args_oz,exception_state);
      break;
    }
    auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scale3d(args_scale,args_ox,args_oy,args_oz,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DOMMatrix>::ToValue(ctx, std::move(return_value));
  }
  static JSValue scaleNonUniform(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'scaleNonUniform' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::scaleNonUniform");
  MemberMutationScope scope{context};
  DOMMatrix* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scaleNonUniform(exception_state);
      break;
    }
    auto&& args_sx = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scaleNonUniform(args_sx,exception_state);
      break;
    }
    auto&& args_sy = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scaleNonUniform(args_sx,args_sy,exception_state);
      break;
    }
    auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->scaleNonUniform(args_sx,args_sy,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DOMMatrix>::ToValue(ctx, std::move(return_value));
  }
  static JSValue skewX(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'skewX' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::skewX");
  MemberMutationScope scope{context};
  DOMMatrix* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->skewX(exception_state);
      break;
    }
    auto&& args_sx = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->skewX(args_sx,exception_state);
      break;
    }
    auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->skewX(args_sx,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DOMMatrix>::ToValue(ctx, std::move(return_value));
  }
  static JSValue skewY(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'skewY' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::skewY");
  MemberMutationScope scope{context};
  DOMMatrix* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->skewY(exception_state);
      break;
    }
    auto&& args_sy = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->skewY(args_sy,exception_state);
      break;
    }
    auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->skewY(args_sy,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DOMMatrix>::ToValue(ctx, std::move(return_value));
  }
  static JSValue toString(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::toString");
  MemberMutationScope scope{context};
  Converter<IDLDOMString>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->toString(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLDOMString>::ToValue(ctx, std::move(return_value));
  }
  static JSValue transformPoint(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'transformPoint' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::transformPoint");
  MemberMutationScope scope{context};
  DOMPoint* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_point = Converter<DOMPoint>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->transformPoint(args_point,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DOMPoint>::ToValue(ctx, std::move(return_value));
  }
  static JSValue translate(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'translate' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::translate");
  MemberMutationScope scope{context};
  DOMMatrix* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->translate(exception_state);
      break;
    }
    auto&& args_tx = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->translate(args_tx,exception_state);
      break;
    }
    auto&& args_ty = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->translate(args_tx,args_ty,exception_state);
      break;
    }
    auto&& args_tz = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 3) {
      auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->translate(args_tx,args_ty,args_tz,exception_state);
      break;
    }
    auto* self = toScriptWrappable<DOMMatrixReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->translate(args_tx,args_ty,args_tz,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DOMMatrix>::ToValue(ctx, std::move(return_value));
  }
  static JSValue fromMatrix(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'fromMatrix' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::fromMatrix");
  MemberMutationScope scope{context};
  DOMMatrix* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_matrix = Converter<DOMMatrix>::ArgumentsValue(context, argv[0], 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      return_value = DOMMatrixReadOnly::fromMatrix(context, args_matrix,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DOMMatrix>::ToValue(ctx, std::move(return_value));
  }
static JSValue is2DAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::is2D");
  ExceptionState exception_state;
  typename NativeTypeBool::ImplType v = NativeValueConverter<NativeTypeBool>::FromNativeValue(qjs_dom_matrix_read_only->GetBindingProperty(binding_call_methods::kis2D, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLBoolean>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue isIdentityAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::isIdentity");
  ExceptionState exception_state;
  typename NativeTypeBool::ImplType v = NativeValueConverter<NativeTypeBool>::FromNativeValue(qjs_dom_matrix_read_only->GetBindingProperty(binding_call_methods::kisIdentity, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLBoolean>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue m11AttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::m11");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->m11());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue m11AttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setM11(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue m12AttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::m12");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->m12());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue m12AttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setM12(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue m13AttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::m13");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->m13());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue m13AttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setM13(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue m14AttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::m14");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->m14());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue m14AttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setM14(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue m21AttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::m21");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->m21());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue m21AttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setM21(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue m22AttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::m22");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->m22());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue m22AttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setM22(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue m23AttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::m23");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->m23());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue m23AttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setM23(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue m24AttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::m24");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->m24());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue m24AttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setM24(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue m31AttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::m31");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->m31());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue m31AttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setM31(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue m32AttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::m32");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->m32());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue m32AttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setM32(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue m33AttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::m33");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->m33());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue m33AttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setM33(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue m34AttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::m34");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->m34());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue m34AttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setM34(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue m41AttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::m41");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->m41());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue m41AttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setM41(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue m42AttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::m42");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->m42());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue m42AttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setM42(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue m43AttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::m43");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->m43());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue m43AttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setM43(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue m44AttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::m44");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->m44());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue m44AttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setM44(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue aAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::a");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->a());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue aAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setA(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue bAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::b");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->b());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue bAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setB(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue cAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::c");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->c());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue cAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setC(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue dAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::d");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->d());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue dAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setD(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue eAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::e");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->e());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue eAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setE(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue fAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  assert(qjs_dom_matrix_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMMatrixReadOnly::f");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_matrix_read_only->f());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue fAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_matrix_read_only = toScriptWrappable<DOMMatrixReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_matrix_read_only->setF(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
void QJSDOMMatrixReadOnly::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
   InstallStaticMethods(context); 
}
void QJSDOMMatrixReadOnly::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"flipX", flipX, 0},
{"flipY", flipY, 0},
{"inverse", inverse, 0},
{"multiply", multiply, 1},
{"rotateAxisAngle", rotateAxisAngle, 4},
{"rotate", rotate, 3},
{"rotateFromVector", rotateFromVector, 2},
{"scale", scale, 6},
{"scale3d", scale3d, 4},
{"scaleNonUniform", scaleNonUniform, 2},
{"skewX", skewX, 1},
{"skewY", skewY, 1},
{"toString", toString, 0},
{"transformPoint", transformPoint, 1},
{"translate", translate, 3},
{"fromMatrix", fromMatrix, 1}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSDOMMatrixReadOnly::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kis2D.Impl(), is2DAttributeGetCallback, nullptr},
{defined_properties::kisIdentity.Impl(), isIdentityAttributeGetCallback, nullptr},
{defined_properties::km11.Impl(), m11AttributeGetCallback, m11AttributeSetCallback},
{defined_properties::km12.Impl(), m12AttributeGetCallback, m12AttributeSetCallback},
{defined_properties::km13.Impl(), m13AttributeGetCallback, m13AttributeSetCallback},
{defined_properties::km14.Impl(), m14AttributeGetCallback, m14AttributeSetCallback},
{defined_properties::km21.Impl(), m21AttributeGetCallback, m21AttributeSetCallback},
{defined_properties::km22.Impl(), m22AttributeGetCallback, m22AttributeSetCallback},
{defined_properties::km23.Impl(), m23AttributeGetCallback, m23AttributeSetCallback},
{defined_properties::km24.Impl(), m24AttributeGetCallback, m24AttributeSetCallback},
{defined_properties::km31.Impl(), m31AttributeGetCallback, m31AttributeSetCallback},
{defined_properties::km32.Impl(), m32AttributeGetCallback, m32AttributeSetCallback},
{defined_properties::km33.Impl(), m33AttributeGetCallback, m33AttributeSetCallback},
{defined_properties::km34.Impl(), m34AttributeGetCallback, m34AttributeSetCallback},
{defined_properties::km41.Impl(), m41AttributeGetCallback, m41AttributeSetCallback},
{defined_properties::km42.Impl(), m42AttributeGetCallback, m42AttributeSetCallback},
{defined_properties::km43.Impl(), m43AttributeGetCallback, m43AttributeSetCallback},
{defined_properties::km44.Impl(), m44AttributeGetCallback, m44AttributeSetCallback},
{defined_properties::ka.Impl(), aAttributeGetCallback, aAttributeSetCallback},
{defined_properties::kb.Impl(), bAttributeGetCallback, bAttributeSetCallback},
{defined_properties::kc.Impl(), cAttributeGetCallback, cAttributeSetCallback},
{defined_properties::kd.Impl(), dAttributeGetCallback, dAttributeSetCallback},
{defined_properties::ke.Impl(), eAttributeGetCallback, eAttributeSetCallback},
{defined_properties::kf.Impl(), fAttributeGetCallback, fAttributeSetCallback}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSDOMMatrixReadOnly::InstallStaticMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
       {"fromMatrix", fromMatrix, 1}
  };
  MemberInstaller::InstallFunctions(context, constructor, functionConfig);
}
void QJSDOMMatrixReadOnly::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kDOMMatrixReadOnly.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}