// Generated from template:
//   code_generator/src/json/templates/make_names.h.tmpl
// and input files:
//   E:\Projects\Exaecut\sources\webf\bridge\core\dom\element_namespace_uris.json5
#include "element_namespace_uris.h"
namespace webf {
namespace element_namespace_uris {
thread_local void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];
thread_local const AtomicString& khtml = reinterpret_cast<AtomicString*>(&names_storage)[0];
thread_local const AtomicString& ksvg = reinterpret_cast<AtomicString*>(&names_storage)[1];
thread_local const AtomicString& kmathml = reinterpret_cast<AtomicString*>(&names_storage)[2];
void Init(JSContext* ctx) {
  struct NameEntry {
      const char* str;
   };
  static const NameEntry kNames[] = {
          { "http://www.w3.org/1999/xhtml" },
          { "http://www.w3.org/2000/svg" },
          { "http://www.w3.org/1998/Math/MathML" },
  };
  for(size_t i = 0; i < std::size(kNames); i ++) {
    void* address = reinterpret_cast<AtomicString*>(&names_storage) + i;
      new (address) AtomicString(ctx, kNames[i].str);
  }
};
void Dispose(){
  for(size_t i = 0; i < kNamesCount; i ++) {
    AtomicString* atomic_string = reinterpret_cast<AtomicString*>(&names_storage) + i;
    atomic_string->~AtomicString();
  }
  memset(names_storage, 0x00, sizeof(AtomicString) * kNamesCount);
};
}
} // webf