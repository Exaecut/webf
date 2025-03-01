/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_document_fragment.h"
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
const WrapperTypeInfo QJSDocumentFragment::wrapper_type_info_ {JS_CLASS_DOCUMENT_FRAGMENT, "DocumentFragment", Node::GetStaticWrapperTypeInfo(), QJSDocumentFragment::ConstructorCallback};
const WrapperTypeInfo& DocumentFragment::wrapper_type_info_ = QJSDocumentFragment::wrapper_type_info_;
JSValue QJSDocumentFragment::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DocumentFragment::constructor");
  MemberMutationScope scope{context};
  DocumentFragment* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    return_value = DocumentFragment::Create(context, exception_state);
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
  static JSValue prepend(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DocumentFragment::prepend");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_node = Converter<IDLSequence<QJSUnionDomStringNode>>::FromValue(ctx, argv + 0, argc - 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto* self = toScriptWrappable<DocumentFragment>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->prepend(args_node,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue append(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DocumentFragment::append");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_node = Converter<IDLSequence<QJSUnionDomStringNode>>::FromValue(ctx, argv + 0, argc - 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto* self = toScriptWrappable<DocumentFragment>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->append(args_node,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
static JSValue firstElementChildAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document_fragment = toScriptWrappable<DocumentFragment>(this_val);
  assert(qjs_document_fragment != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<Element>>::ToValue(ctx, ParentNode::firstElementChild(*qjs_document_fragment));
}
static JSValue lastElementChildAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document_fragment = toScriptWrappable<DocumentFragment>(this_val);
  assert(qjs_document_fragment != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<Element>>::ToValue(ctx, ParentNode::lastElementChild(*qjs_document_fragment));
}
static JSValue childrenAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document_fragment = toScriptWrappable<DocumentFragment>(this_val);
  assert(qjs_document_fragment != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<HTMLCollection>::ToValue(ctx, ParentNode::children(*qjs_document_fragment));
}
static JSValue childElementCountAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document_fragment = toScriptWrappable<DocumentFragment>(this_val);
  assert(qjs_document_fragment != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLInt64>::ToValue(ctx, ParentNode::childElementCount(*qjs_document_fragment));
}
void QJSDocumentFragment::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSDocumentFragment::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"prepend", prepend, 1},
{"append", append, 1}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSDocumentFragment::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kfirstElementChild.Impl(), firstElementChildAttributeGetCallback, nullptr},
{defined_properties::klastElementChild.Impl(), lastElementChildAttributeGetCallback, nullptr},
{defined_properties::kchildren.Impl(), childrenAttributeGetCallback, nullptr},
{defined_properties::kchildElementCount.Impl(), childElementCountAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSDocumentFragment::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kDocumentFragment.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}