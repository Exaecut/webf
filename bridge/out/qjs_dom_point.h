/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_DOM_POINT_H
#define BRIDGE_QJS_DOM_POINT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "core/geometry/dom_point.h"
#include "qjs_dom_point_read_only.h"
namespace webf {
class ExecutingContext;
class QJSDOMPoint : public QJSInterfaceBridge<QJSDOMPoint, DOMPoint> {
 public:
  static void Install(ExecutingContext* context);
  static WrapperTypeInfo* GetWrapperTypeInfo() {
    return const_cast<WrapperTypeInfo*>(&wrapper_type_info_);
  }
   static JSValue ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags); 
  static const WrapperTypeInfo wrapper_type_info_;
 private:
  static void InstallPrototypeProperties(ExecutingContext* context); 
  static void InstallConstructor(ExecutingContext* context); 
  static void InstallStaticMethods(ExecutingContext* context); 
};
}
#endif // BRIDGE_QJS_DOM_POINT_H