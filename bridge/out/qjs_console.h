/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_CONSOLE_H
#define BRIDGE_QJS_CONSOLE_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "core/frame/console.h"
namespace webf {
class ExecutingContext;
class QJSConsole final {
 public:
  static void Install(ExecutingContext* context);
 private:
  static void InstallGlobalFunctions(ExecutingContext* context);
};
}
#endif // BRIDGE_QJS_CONSOLE_H