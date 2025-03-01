/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
 // Generated from template:
 //   code_generator/src/json/templates/element_factory.cc.tmp
 // and input files:
 //   E:\Projects\Exaecut\sources\webf\bridge\core\html\html_tag_names.json5
#include "html_element_factory.h"
#include <unordered_map>
#include "html_names.h"
#include "bindings/qjs/cppgc/garbage_collected.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/html_anchor_element.h"
#include "core/html/html_html_element.h"
#include "core/html/html_body_element.h"
#include "core/html/html_head_element.h"
#include "core/html/html_div_element.h"
#include "core/html/html_link_element.h"
#include "core/html/forms/html_input_element.h"
#include "core/html/forms/html_textarea_element.h"
#include "core/html/forms/html_form_element.h"
#include "core/html/html_template_element.h"
#include "core/html/html_image_element.h"
#include "core/html/html_script_element.h"
#include "core/html/html_iframe_element.h"
namespace webf {
using ElementType = HTMLElement;
using ConstructorFunction = ElementType* (*)(Document&);
using FunctionMap = std::unordered_map<AtomicString, ConstructorFunction, AtomicString::KeyHasher>;
static thread_local FunctionMap* g_constructors = nullptr;
struct CreateFunctionMapData {
  const AtomicString& tag;
  ConstructorFunction func;
};
static ElementType* HTMLCanvasElementConstructor(Document& document) {
  return MakeGarbageCollected<HTMLCanvasElement>(document);
}
static ElementType* HTMLAnchorElementConstructor(Document& document) {
  return MakeGarbageCollected<HTMLAnchorElement>(document);
}
static ElementType* HTMLHtmlElementConstructor(Document& document) {
  return MakeGarbageCollected<HTMLHtmlElement>(document);
}
static ElementType* HTMLBodyElementConstructor(Document& document) {
  return MakeGarbageCollected<HTMLBodyElement>(document);
}
static ElementType* HTMLHeadElementConstructor(Document& document) {
  return MakeGarbageCollected<HTMLHeadElement>(document);
}
static ElementType* HTMLDivElementConstructor(Document& document) {
  return MakeGarbageCollected<HTMLDivElement>(document);
}
static ElementType* HTMLLinkElementConstructor(Document& document) {
  return MakeGarbageCollected<HTMLLinkElement>(document);
}
static ElementType* HTMLInputElementConstructor(Document& document) {
  return MakeGarbageCollected<HTMLInputElement>(document);
}
static ElementType* HTMLTextareaElementConstructor(Document& document) {
  return MakeGarbageCollected<HTMLTextareaElement>(document);
}
static ElementType* HTMLFormElementConstructor(Document& document) {
  return MakeGarbageCollected<HTMLFormElement>(document);
}
static ElementType* HTMLTemplateElementConstructor(Document& document) {
  return MakeGarbageCollected<HTMLTemplateElement>(document);
}
static ElementType* HTMLImageElementConstructor(Document& document) {
  return MakeGarbageCollected<HTMLImageElement>(document);
}
static ElementType* HTMLScriptElementConstructor(Document& document) {
  return MakeGarbageCollected<HTMLScriptElement>(document);
}
static ElementType* HTMLIFrameElementConstructor(Document& document) {
  return MakeGarbageCollected<HTMLIFrameElement>(document);
}
static void CreateFunctionMap() {
  assert(!g_constructors);
  g_constructors = new FunctionMap();
  // Empty array initializer lists are illegal [dcl.init.aggr] and will not
  // compile in MSVC. If tags list is empty, add check to skip this.
  const CreateFunctionMapData data[] = {
    {html_names::kcanvas, HTMLCanvasElementConstructor},
    {html_names::ka, HTMLAnchorElementConstructor},
    {html_names::khtml, HTMLHtmlElementConstructor},
    {html_names::kbody, HTMLBodyElementConstructor},
    {html_names::khead, HTMLHeadElementConstructor},
    {html_names::kdiv, HTMLDivElementConstructor},
    {html_names::klink, HTMLLinkElementConstructor},
    {html_names::kinput, HTMLInputElementConstructor},
    {html_names::ktextarea, HTMLTextareaElementConstructor},
    {html_names::kform, HTMLFormElementConstructor},
    {html_names::ktemplate, HTMLTemplateElementConstructor},
    {html_names::kimg, HTMLImageElementConstructor},
    {html_names::kscript, HTMLScriptElementConstructor},
    {html_names::kiframe, HTMLIFrameElementConstructor},
  };
  for (size_t i = 0; i < std::size(data); i++)
    g_constructors->insert(std::make_pair(data[i].tag, data[i].func));
}
ElementType* HTMLElementFactory::Create(const AtomicString& name, Document& document) {
  if (!g_constructors)
    CreateFunctionMap();
  auto it = g_constructors->find(name);
  if (it == g_constructors->end())
    return nullptr;
  ConstructorFunction function = it->second;
  return function(document);
}
void HTMLElementFactory::Dispose() {
  delete g_constructors;
  g_constructors = nullptr;
}
}  // namespace webf