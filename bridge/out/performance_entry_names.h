// Generated from template:
//   code_generator/src/json/templates/make_names.h.tmpl
// and input files:
//   E:\Projects\Exaecut\sources\webf\bridge\core\timing\performance_entry_names.json5
#ifndef PERFORMANCE_ENTRY_NAMES_H_
#define PERFORMANCE_ENTRY_NAMES_H_
#include "bindings/qjs/atomic_string.h"
namespace webf {
namespace performance_entry_names {
  extern thread_local const AtomicString& kmark;
  extern thread_local const AtomicString& kmeasure;
constexpr unsigned kNamesCount = 2;
void Init(JSContext* ctx);
void Dispose();
}
} // webf
#endif  // #define PERFORMANCE_ENTRY_NAMES