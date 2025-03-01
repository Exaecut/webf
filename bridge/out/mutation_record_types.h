// Generated from template:
//   code_generator/src/json/templates/make_names.h.tmpl
// and input files:
//   E:\Projects\Exaecut\sources\webf\bridge\core\dom\mutation_record_type.json5
#ifndef MUTATION_RECORD_TYPES_H_
#define MUTATION_RECORD_TYPES_H_
#include "bindings/qjs/atomic_string.h"
namespace webf {
namespace mutation_record_types {
  extern thread_local const AtomicString& kattributes;
  extern thread_local const AtomicString& kcharacterData;
  extern thread_local const AtomicString& kchildList;
constexpr unsigned kNamesCount = 3;
void Init(JSContext* ctx);
void Dispose();
}
} // webf
#endif  // #define MUTATION_RECORD_TYPES