// Generated from template:
//   code_generator/src/json/templates/make_names.h.tmpl
// and input files:
//   E:\Projects\Exaecut\sources\webf\bridge\core\dom\mutation_record_type.json5
#include "mutation_record_types.h"
namespace webf {
namespace mutation_record_types {
thread_local void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];
thread_local const AtomicString& kattributes = reinterpret_cast<AtomicString*>(&names_storage)[0];
thread_local const AtomicString& kcharacterData = reinterpret_cast<AtomicString*>(&names_storage)[1];
thread_local const AtomicString& kchildList = reinterpret_cast<AtomicString*>(&names_storage)[2];
void Init(JSContext* ctx) {
  struct NameEntry {
      const char* str;
   };
  static const NameEntry kNames[] = {
          { "attributes" },
          { "characterData" },
          { "childList" },
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