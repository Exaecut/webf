/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_performance_entry.h"
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
const WrapperTypeInfo QJSPerformanceEntry::wrapper_type_info_ {JS_CLASS_PERFORMANCE_ENTRY, "PerformanceEntry", nullptr, QJSPerformanceEntry::ConstructorCallback};
const WrapperTypeInfo& PerformanceEntry::wrapper_type_info_ = QJSPerformanceEntry::wrapper_type_info_;
JSValue QJSPerformanceEntry::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("PerformanceEntry::constructor");
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
  static JSValue toJSON(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("PerformanceEntry::toJSON");
  MemberMutationScope scope{context};
  Converter<IDLAny>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<PerformanceEntry>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->toJSON(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLAny>::ToValue(ctx, std::move(return_value));
  }
static JSValue nameAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_performance_entry = toScriptWrappable<PerformanceEntry>(this_val);
  assert(qjs_performance_entry != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("PerformanceEntry::name");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_performance_entry->name());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue entryTypeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_performance_entry = toScriptWrappable<PerformanceEntry>(this_val);
  assert(qjs_performance_entry != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("PerformanceEntry::entryType");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_performance_entry->entryType());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue startTimeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_performance_entry = toScriptWrappable<PerformanceEntry>(this_val);
  assert(qjs_performance_entry != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("PerformanceEntry::startTime");
  auto result = Converter<IDLInt64>::ToValue(ctx, qjs_performance_entry->startTime());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue durationAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_performance_entry = toScriptWrappable<PerformanceEntry>(this_val);
  assert(qjs_performance_entry != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("PerformanceEntry::duration");
  auto result = Converter<IDLInt64>::ToValue(ctx, qjs_performance_entry->duration());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
void QJSPerformanceEntry::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSPerformanceEntry::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"toJSON", toJSON, 0}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSPerformanceEntry::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kname.Impl(), nameAttributeGetCallback, nullptr},
{defined_properties::kentryType.Impl(), entryTypeAttributeGetCallback, nullptr},
{defined_properties::kstartTime.Impl(), startTimeAttributeGetCallback, nullptr},
{defined_properties::kduration.Impl(), durationAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSPerformanceEntry::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kPerformanceEntry.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}