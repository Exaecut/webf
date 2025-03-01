/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_html_template_element.h"
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
const WrapperTypeInfo QJSHTMLTemplateElement::wrapper_type_info_ {JS_CLASS_HTML_TEMPLATE_ELEMENT, "HTMLTemplateElement", HTMLElement::GetStaticWrapperTypeInfo(), QJSHTMLTemplateElement::ConstructorCallback};
const WrapperTypeInfo& HTMLTemplateElement::wrapper_type_info_ = QJSHTMLTemplateElement::wrapper_type_info_;
JSValue QJSHTMLTemplateElement::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLTemplateElement::constructor");
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
static JSValue contentAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_template_element = toScriptWrappable<HTMLTemplateElement>(this_val);
  assert(qjs_html_template_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLTemplateElement::content");
  auto result = Converter<DocumentFragment>::ToValue(ctx, qjs_html_template_element->content());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
void QJSHTMLTemplateElement::Install(ExecutingContext* context) {
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSHTMLTemplateElement::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kcontent.Impl(), contentAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSHTMLTemplateElement::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kHTMLTemplateElement.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}