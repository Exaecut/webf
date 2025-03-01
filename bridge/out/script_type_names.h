// Generated from template:
//   code_generator/src/json/templates/make_names.h.tmpl
// and input files:
//   E:\Projects\Exaecut\sources\webf\bridge\core\html\script_type_names.json5
#ifndef SCRIPT_TYPE_NAMES_H_
#define SCRIPT_TYPE_NAMES_H_
#include "bindings/qjs/atomic_string.h"
namespace webf {
namespace script_type_names {
  extern thread_local const AtomicString& kclassic;
  extern thread_local const AtomicString& kmodule;
  extern thread_local const AtomicString& kimportmap;
  extern thread_local const AtomicString& kspeculationrules;
  extern thread_local const AtomicString& kwebbundle;
constexpr unsigned kNamesCount = 5;
void Init(JSContext* ctx);
void Dispose();
}
} // webf
#endif  // #define SCRIPT_TYPE_NAMES