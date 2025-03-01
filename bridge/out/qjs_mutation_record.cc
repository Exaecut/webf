/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_mutation_record.h"
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
const WrapperTypeInfo QJSMutationRecord::wrapper_type_info_ {JS_CLASS_MUTATION_RECORD, "MutationRecord", nullptr, QJSMutationRecord::ConstructorCallback};
const WrapperTypeInfo& MutationRecord::wrapper_type_info_ = QJSMutationRecord::wrapper_type_info_;
JSValue QJSMutationRecord::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("MutationRecord::constructor");
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
static JSValue typeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_mutation_record = toScriptWrappable<MutationRecord>(this_val);
  assert(qjs_mutation_record != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("MutationRecord::type");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_mutation_record->type());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue targetAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_mutation_record = toScriptWrappable<MutationRecord>(this_val);
  assert(qjs_mutation_record != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("MutationRecord::target");
  auto result = Converter<Node>::ToValue(ctx, qjs_mutation_record->target());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue addedNodesAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_mutation_record = toScriptWrappable<MutationRecord>(this_val);
  assert(qjs_mutation_record != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("MutationRecord::addedNodes");
  auto result = Converter<NodeList>::ToValue(ctx, qjs_mutation_record->addedNodes());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue removedNodesAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_mutation_record = toScriptWrappable<MutationRecord>(this_val);
  assert(qjs_mutation_record != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("MutationRecord::removedNodes");
  auto result = Converter<NodeList>::ToValue(ctx, qjs_mutation_record->removedNodes());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue previousSiblingAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_mutation_record = toScriptWrappable<MutationRecord>(this_val);
  assert(qjs_mutation_record != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("MutationRecord::previousSibling");
  auto result = Converter<IDLNullable<Node>>::ToValue(ctx, qjs_mutation_record->previousSibling());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue nextSiblingAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_mutation_record = toScriptWrappable<MutationRecord>(this_val);
  assert(qjs_mutation_record != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("MutationRecord::nextSibling");
  auto result = Converter<IDLNullable<Node>>::ToValue(ctx, qjs_mutation_record->nextSibling());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue attributeNameAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_mutation_record = toScriptWrappable<MutationRecord>(this_val);
  assert(qjs_mutation_record != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("MutationRecord::attributeName");
  auto result = Converter<IDLNullable<IDLDOMString>>::ToValue(ctx, qjs_mutation_record->attributeName());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue attributeNamespaceAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_mutation_record = toScriptWrappable<MutationRecord>(this_val);
  assert(qjs_mutation_record != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("MutationRecord::attributeNamespace");
  auto result = Converter<IDLNullable<IDLDOMString>>::ToValue(ctx, qjs_mutation_record->attributeNamespace());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue oldValueAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_mutation_record = toScriptWrappable<MutationRecord>(this_val);
  assert(qjs_mutation_record != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("MutationRecord::oldValue");
  auto result = Converter<IDLNullable<IDLDOMString>>::ToValue(ctx, qjs_mutation_record->oldValue());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
void QJSMutationRecord::Install(ExecutingContext* context) {
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSMutationRecord::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::ktype.Impl(), typeAttributeGetCallback, nullptr},
{defined_properties::ktarget.Impl(), targetAttributeGetCallback, nullptr},
{defined_properties::kaddedNodes.Impl(), addedNodesAttributeGetCallback, nullptr},
{defined_properties::kremovedNodes.Impl(), removedNodesAttributeGetCallback, nullptr},
{defined_properties::kpreviousSibling.Impl(), previousSiblingAttributeGetCallback, nullptr},
{defined_properties::knextSibling.Impl(), nextSiblingAttributeGetCallback, nullptr},
{defined_properties::kattributeName.Impl(), attributeNameAttributeGetCallback, nullptr},
{defined_properties::kattributeNamespace.Impl(), attributeNamespaceAttributeGetCallback, nullptr},
{defined_properties::koldValue.Impl(), oldValueAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSMutationRecord::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kMutationRecord.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}