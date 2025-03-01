/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_PERFORMANCE_H
#define BRIDGE_QJS_PERFORMANCE_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "core/timing/performance.h"
namespace webf {
class ExecutingContext;
class QJSPerformance : public QJSInterfaceBridge<QJSPerformance, Performance> {
 public:
  static void Install(ExecutingContext* context);
  static WrapperTypeInfo* GetWrapperTypeInfo() {
    return const_cast<WrapperTypeInfo*>(&wrapper_type_info_);
  }
   static JSValue ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags); 
  static const WrapperTypeInfo wrapper_type_info_;
 private:
  static void InstallPrototypeMethods(ExecutingContext* context); 
  static void InstallPrototypeProperties(ExecutingContext* context); 
  static void InstallConstructor(ExecutingContext* context); 
};
}
#endif // BRIDGE_QJS_PERFORMANCE_H