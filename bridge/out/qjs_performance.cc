/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_performance.h"
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
const WrapperTypeInfo QJSPerformance::wrapper_type_info_ {JS_CLASS_PERFORMANCE, "Performance", nullptr, QJSPerformance::ConstructorCallback};
const WrapperTypeInfo& Performance::wrapper_type_info_ = QJSPerformance::wrapper_type_info_;
JSValue QJSPerformance::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Performance::constructor");
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
  static JSValue now(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Performance::now");
  MemberMutationScope scope{context};
  Converter<IDLInt64>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->now(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLInt64>::ToValue(ctx, std::move(return_value));
  }
  static JSValue ___webf_navigation_summary__(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Performance::___webf_navigation_summary__");
  MemberMutationScope scope{context};
  Converter<IDLDOMString>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->___webf_navigation_summary__(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLDOMString>::ToValue(ctx, std::move(return_value));
  }
  static JSValue toJSON(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Performance::toJSON");
  MemberMutationScope scope{context};
  Converter<IDLAny>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->toJSON(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLAny>::ToValue(ctx, std::move(return_value));
  }
  static JSValue getEntries(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Performance::getEntries");
  MemberMutationScope scope{context};
  Converter<IDLSequence<PerformanceEntry>>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->getEntries(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLSequence<PerformanceEntry>>::ToValue(ctx, std::move(return_value));
  }
  static JSValue getEntriesByType(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'getEntriesByType' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Performance::getEntriesByType");
  MemberMutationScope scope{context};
  Converter<IDLSequence<PerformanceEntry>>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_entryType = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->getEntriesByType(args_entryType,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLSequence<PerformanceEntry>>::ToValue(ctx, std::move(return_value));
  }
  static JSValue getEntriesByName(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'getEntriesByName' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Performance::getEntriesByName");
  MemberMutationScope scope{context};
  Converter<IDLSequence<PerformanceEntry>>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_name = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->getEntriesByName(args_name,exception_state);
      break;
    }
    auto&& args_type = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->getEntriesByName(args_name,args_type,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->getEntriesByName(args_name,args_type,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLSequence<PerformanceEntry>>::ToValue(ctx, std::move(return_value));
  }
  static JSValue mark(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'mark' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Performance::mark");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_name = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->mark(args_name,exception_state);
      break;
    }
    auto&& args_options = Converter<IDLOptional<PerformanceMarkOptions>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->mark(args_name,args_options,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->mark(args_name,args_options,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
static JSValue measure_overload_0(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'measure' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Performance::measure");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_name = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->measure(args_name,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
      }
static JSValue measure_overload_1(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'measure' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Performance::measure");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_name = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->measure(args_name,exception_state);
      break;
    }
    auto&& args_startMark = Converter<IDLOptional<IDLAny>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->measure(args_name,args_startMark,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->measure(args_name,args_startMark,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
      }
static JSValue measure_overload_2(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'measure' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Performance::measure");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_name = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->measure(args_name,exception_state);
      break;
    }
    auto&& args_startMark = Converter<IDLOptional<IDLAny>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->measure(args_name,args_startMark,exception_state);
      break;
    }
    auto&& args_endMark = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 3) {
      auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->measure(args_name,args_startMark,args_endMark,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->measure(args_name,args_startMark,args_endMark,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
      }
    static JSValue measure(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
if (1 == argc) {
  return measure_overload_0(ctx, this_val, argc, argv);
}
if (2 == argc) {
  return measure_overload_1(ctx, this_val, argc, argv);
}
if (3 == argc) {
  return measure_overload_2(ctx, this_val, argc, argv);
}
return measure_overload_0(ctx, this_val, argc, argv);
    }
  static JSValue clearMarks(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'clearMarks' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Performance::clearMarks");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->clearMarks(exception_state);
      break;
    }
    auto&& args_name = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->clearMarks(args_name,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->clearMarks(args_name,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue clearMeasures(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'clearMeasures' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Performance::clearMeasures");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->clearMeasures(exception_state);
      break;
    }
    auto&& args_name = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->clearMeasures(args_name,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Performance>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->clearMeasures(args_name,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
static JSValue timeOriginAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_performance = toScriptWrappable<Performance>(this_val);
  assert(qjs_performance != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Performance::timeOrigin");
  auto result = Converter<IDLInt64>::ToValue(ctx, qjs_performance->timeOrigin());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
void QJSPerformance::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSPerformance::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"now", now, 0},
{"___webf_navigation_summary__", ___webf_navigation_summary__, 0},
{"toJSON", toJSON, 0},
{"getEntries", getEntries, 0},
{"getEntriesByType", getEntriesByType, 1},
{"getEntriesByName", getEntriesByName, 2},
{"mark", mark, 2},
{"measure", measure, 1},
{"clearMarks", clearMarks, 1},
{"clearMeasures", clearMeasures, 1}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSPerformance::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::ktimeOrigin.Impl(), timeOriginAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSPerformance::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kPerformance.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}