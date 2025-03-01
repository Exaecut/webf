/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_COMPUTED_CSS_STYLE_DECLARATION_H
#define BRIDGE_QJS_COMPUTED_CSS_STYLE_DECLARATION_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "core/css/computed_css_style_declaration.h"
#include "qjs_css_style_declaration.h"
namespace webf {
class ExecutingContext;
class QJSComputedCssStyleDeclaration : public QJSInterfaceBridge<QJSComputedCssStyleDeclaration, ComputedCssStyleDeclaration> {
 public:
  static void Install(ExecutingContext* context);
  static WrapperTypeInfo* GetWrapperTypeInfo() {
    return const_cast<WrapperTypeInfo*>(&wrapper_type_info_);
  }
   static JSValue ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags); 
  static const WrapperTypeInfo wrapper_type_info_;
 private:
  static void InstallConstructor(ExecutingContext* context); 
  static int PropertyEnumerateCallback(JSContext* ctx, JSPropertyEnum** ptab, uint32_t* plen, JSValueConst obj);
  static bool PropertyCheckerCallback(JSContext* ctx, JSValueConst obj, JSAtom atom);
  static JSValue StringPropertyGetterCallback(JSContext* ctx, JSValue obj, JSAtom key);
  static bool StringPropertySetterCallback(JSContext* ctx, JSValueConst obj, JSAtom key, JSValueConst value);
    static bool StringPropertyDeleterCallback(JSContext* ctx, JSValueConst obj, JSAtom key);
};
}
#endif // BRIDGE_QJS_COMPUTED_CSS_STYLE_DECLARATION_H