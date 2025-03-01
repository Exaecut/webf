// Generated from template:
//   code_generator/src/json/templates/make_names.h.tmpl
// and input files:
//   E:\Projects\Exaecut\sources\webf\bridge\core\dom\element_attribute_names.json5
#ifndef ELEMENT_ATTRIBUTE_NAMES_H_
#define ELEMENT_ATTRIBUTE_NAMES_H_
#include "bindings/qjs/atomic_string.h"
namespace webf {
namespace element_attribute_names {
  extern thread_local const AtomicString& kid;
  extern thread_local const AtomicString& kclassName;
constexpr unsigned kNamesCount = 2;
void Init(JSContext* ctx);
void Dispose();
}
} // webf
#endif  // #define ELEMENT_ATTRIBUTE_NAMES