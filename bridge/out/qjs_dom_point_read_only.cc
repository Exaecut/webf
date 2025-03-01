/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_dom_point_read_only.h"
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
const WrapperTypeInfo QJSDOMPointReadOnly::wrapper_type_info_ {JS_CLASS_DOM_POINT_READ_ONLY, "DOMPointReadOnly", nullptr, QJSDOMPointReadOnly::ConstructorCallback};
const WrapperTypeInfo& DOMPointReadOnly::wrapper_type_info_ = QJSDOMPointReadOnly::wrapper_type_info_;
JSValue QJSDOMPointReadOnly::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
    if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'constructor' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMPointReadOnly::constructor");
  MemberMutationScope scope{context};
  DOMPointReadOnly* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      return_value = DOMPointReadOnly::Create(context, exception_state);
      break;
    }
    auto&& args_x = Converter<IDLOptional<QJSUnionDoubleDOMPointInit>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      return_value = DOMPointReadOnly::Create(context, args_x, exception_state);
      break;
    }
    auto&& args_y = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      return_value = DOMPointReadOnly::Create(context, args_x,args_y, exception_state);
      break;
    }
    auto&& args_z = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 3) {
      return_value = DOMPointReadOnly::Create(context, args_x,args_y,args_z, exception_state);
      break;
    }
    auto&& args_w = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 4) {
      return_value = DOMPointReadOnly::Create(context, args_x,args_y,args_z,args_w, exception_state);
      break;
    }
    return_value = DOMPointReadOnly::Create(context, args_x,args_y,args_z,args_w, exception_state);
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
  static JSValue matrixTransform(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'matrixTransform' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMPointReadOnly::matrixTransform");
  MemberMutationScope scope{context};
  DOMPoint* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_matrix = Converter<DOMMatrix>::ArgumentsValue(context, argv[0], 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<DOMPointReadOnly>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->matrixTransform(args_matrix,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DOMPoint>::ToValue(ctx, std::move(return_value));
  }
  static JSValue fromPoint(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'fromPoint' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMPointReadOnly::fromPoint");
  MemberMutationScope scope{context};
  DOMPoint* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_point = Converter<DOMPoint>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      return_value = DOMPointReadOnly::fromPoint(context, args_point,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DOMPoint>::ToValue(ctx, std::move(return_value));
  }
static JSValue xAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_point_read_only = toScriptWrappable<DOMPointReadOnly>(this_val);
  assert(qjs_dom_point_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMPointReadOnly::x");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_point_read_only->x());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue xAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_point_read_only = toScriptWrappable<DOMPointReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_point_read_only->setX(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue yAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_point_read_only = toScriptWrappable<DOMPointReadOnly>(this_val);
  assert(qjs_dom_point_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMPointReadOnly::y");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_point_read_only->y());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue yAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_point_read_only = toScriptWrappable<DOMPointReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_point_read_only->setY(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue zAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_point_read_only = toScriptWrappable<DOMPointReadOnly>(this_val);
  assert(qjs_dom_point_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMPointReadOnly::z");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_point_read_only->z());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue zAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_point_read_only = toScriptWrappable<DOMPointReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_point_read_only->setZ(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue wAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_point_read_only = toScriptWrappable<DOMPointReadOnly>(this_val);
  assert(qjs_dom_point_read_only != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMPointReadOnly::w");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_dom_point_read_only->w());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue wAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_point_read_only = toScriptWrappable<DOMPointReadOnly>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_point_read_only->setW(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
void QJSDOMPointReadOnly::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
   InstallStaticMethods(context); 
}
void QJSDOMPointReadOnly::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"matrixTransform", matrixTransform, 1},
{"fromPoint", fromPoint, 1}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSDOMPointReadOnly::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kx.Impl(), xAttributeGetCallback, xAttributeSetCallback},
{defined_properties::ky.Impl(), yAttributeGetCallback, yAttributeSetCallback},
{defined_properties::kz.Impl(), zAttributeGetCallback, zAttributeSetCallback},
{defined_properties::kw.Impl(), wAttributeGetCallback, wAttributeSetCallback}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSDOMPointReadOnly::InstallStaticMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
       {"fromPoint", fromPoint, 1}
  };
  MemberInstaller::InstallFunctions(context, constructor, functionConfig);
}
void QJSDOMPointReadOnly::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kDOMPointReadOnly.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}