/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_mutation_observer_init.h"
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
std::shared_ptr<MutationObserverInit> MutationObserverInit::Create() {
  return std::make_shared<MutationObserverInit>();
}
std::shared_ptr<MutationObserverInit> MutationObserverInit::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  return std::make_shared<MutationObserverInit>(ctx, value, exception_state);
}
MutationObserverInit::MutationObserverInit() : childList_(false),attributes_(false),characterData_(false),subtree_(false),attributeOldValue_(false),characterDataOldValue_(false) {}
MutationObserverInit::MutationObserverInit(JSContext* ctx, JSValue value, ExceptionState& exception_state): MutationObserverInit() {
  FillMembersWithQJSObject(ctx, value, exception_state);
}
bool MutationObserverInit::FillQJSObjectWithMembers(JSContext* ctx, JSValue qjs_dictionary) const {
  if (!JS_IsObject(qjs_dictionary)) {
    return false;
  }
  JS_SetPropertyStr(ctx, qjs_dictionary, "childList", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, childList_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "attributes", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, attributes_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "characterData", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, characterData_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "subtree", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, subtree_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "attributeOldValue", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, attributeOldValue_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "characterDataOldValue", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, characterDataOldValue_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "attributeFilter", Converter<IDLOptional<IDLSequence<IDLOptional<IDLDOMString>>>>::ToValue(ctx, attributeFilter_));
  return true;
}
bool MutationObserverInit::FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  if (!JS_IsObject(value)) {
    return false;
  }
  {
    JSAtom key = JS_NewAtom(ctx, "childList");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      childList_ = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_childList_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "attributes");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      attributes_ = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_attributes_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "characterData");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      characterData_ = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_characterData_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "subtree");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      subtree_ = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_subtree_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "attributeOldValue");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      attributeOldValue_ = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_attributeOldValue_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "characterDataOldValue");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      characterDataOldValue_ = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_characterDataOldValue_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "attributeFilter");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      attributeFilter_ = Converter<IDLOptional<IDLSequence<IDLOptional<IDLDOMString>>>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_attributeFilter_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  return true;
}
}