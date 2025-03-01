// Generated from template:
//   code_generator/src/json/templates/make_names.h.tmpl
// and input files:
//   E:\Projects\Exaecut\sources\webf\bridge\core\html\script_type_names.json5
#include "script_type_names.h"
namespace webf {
namespace script_type_names {
thread_local void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];
thread_local const AtomicString& kclassic = reinterpret_cast<AtomicString*>(&names_storage)[0];
thread_local const AtomicString& kmodule = reinterpret_cast<AtomicString*>(&names_storage)[1];
thread_local const AtomicString& kimportmap = reinterpret_cast<AtomicString*>(&names_storage)[2];
thread_local const AtomicString& kspeculationrules = reinterpret_cast<AtomicString*>(&names_storage)[3];
thread_local const AtomicString& kwebbundle = reinterpret_cast<AtomicString*>(&names_storage)[4];
void Init(JSContext* ctx) {
  struct NameEntry {
      const char* str;
   };
  static const NameEntry kNames[] = {
          { "classic" },
          { "module" },
          { "importmap" },
          { "speculationrules" },
          { "webbundle" },
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