/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_blob.h"
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
const WrapperTypeInfo QJSBlob::wrapper_type_info_ {JS_CLASS_BLOB, "Blob", nullptr, QJSBlob::ConstructorCallback};
const WrapperTypeInfo& Blob::wrapper_type_info_ = QJSBlob::wrapper_type_info_;
JSValue QJSBlob::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
    if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'constructor' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Blob::constructor");
  MemberMutationScope scope{context};
  Blob* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      return_value = Blob::Create(context, exception_state);
      break;
    }
    auto&& args_blobParts = Converter<IDLOptional<IDLSequence<BlobPart>>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      return_value = Blob::Create(context, args_blobParts, exception_state);
      break;
    }
    auto&& args_options = Converter<IDLOptional<BlobPropertyBag>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      return_value = Blob::Create(context, args_blobParts,args_options, exception_state);
      break;
    }
    return_value = Blob::Create(context, args_blobParts,args_options, exception_state);
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
  static JSValue arrayBuffer(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Blob::arrayBuffer");
  MemberMutationScope scope{context};
  Converter<IDLPromise>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<Blob>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->arrayBuffer(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLPromise>::ToValue(ctx, std::move(return_value));
  }
  static JSValue slice(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'slice' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Blob::slice");
  MemberMutationScope scope{context};
  Blob* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<Blob>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->slice(exception_state);
      break;
    }
    auto&& args_start = Converter<IDLOptional<IDLInt64>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Blob>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->slice(args_start,exception_state);
      break;
    }
    auto&& args_end = Converter<IDLOptional<IDLInt64>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Blob>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->slice(args_start,args_end,exception_state);
      break;
    }
    auto&& args_contentType = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 3) {
      auto* self = toScriptWrappable<Blob>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->slice(args_start,args_end,args_contentType,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Blob>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->slice(args_start,args_end,args_contentType,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<Blob>::ToValue(ctx, std::move(return_value));
  }
  static JSValue text(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Blob::text");
  MemberMutationScope scope{context};
  Converter<IDLPromise>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<Blob>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->text(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLPromise>::ToValue(ctx, std::move(return_value));
  }
  static JSValue base64(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Blob::base64");
  MemberMutationScope scope{context};
  Converter<IDLPromise>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<Blob>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->base64(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLPromise>::ToValue(ctx, std::move(return_value));
  }
static JSValue sizeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_blob = toScriptWrappable<Blob>(this_val);
  assert(qjs_blob != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Blob::size");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_blob->size());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue typeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_blob = toScriptWrappable<Blob>(this_val);
  assert(qjs_blob != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Blob::type");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_blob->type());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
void QJSBlob::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSBlob::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"arrayBuffer", arrayBuffer, 0},
{"slice", slice, 3},
{"text", text, 0},
{"base64", base64, 0}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSBlob::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::ksize.Impl(), sizeAttributeGetCallback, nullptr},
{defined_properties::ktype.Impl(), typeAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSBlob::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kBlob.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}