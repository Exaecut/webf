// Generated from template:
//   code_generator/src/json/templates/make_names.h.tmpl
// and input files:
//   E:\Projects\Exaecut\sources\webf\bridge\core\svg\svg_tag_names.json5
#include "svg_names.h"
namespace webf {
namespace svg_names {
thread_local void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];
thread_local const AtomicString& ksvg = reinterpret_cast<AtomicString*>(&names_storage)[0];
thread_local const AtomicString& krect = reinterpret_cast<AtomicString*>(&names_storage)[1];
thread_local const AtomicString& kpath = reinterpret_cast<AtomicString*>(&names_storage)[2];
thread_local const AtomicString& ktext = reinterpret_cast<AtomicString*>(&names_storage)[3];
thread_local const AtomicString& kg = reinterpret_cast<AtomicString*>(&names_storage)[4];
thread_local const AtomicString& kcircle = reinterpret_cast<AtomicString*>(&names_storage)[5];
thread_local const AtomicString& kellipse = reinterpret_cast<AtomicString*>(&names_storage)[6];
thread_local const AtomicString& kstyle = reinterpret_cast<AtomicString*>(&names_storage)[7];
thread_local const AtomicString& kline = reinterpret_cast<AtomicString*>(&names_storage)[8];
void Init(JSContext* ctx) {
  struct NameEntry {
      const char* str;
   };
  static const NameEntry kNames[] = {
          { "svg" },
          { "rect" },
          { "path" },
          { "text" },
          { "g" },
          { "circle" },
          { "ellipse" },
          { "style" },
          { "line" },
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