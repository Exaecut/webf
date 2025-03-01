// Generated from template:
//   code_generator/src/json/templates/make_names.h.tmpl
// and input files:
//   E:\Projects\Exaecut\sources\webf\bridge\core\built_in_string.json5
#include "built_in_string.h"
namespace webf {
namespace built_in_string {
thread_local void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];
thread_local const AtomicString& kNULL = reinterpret_cast<AtomicString*>(&names_storage)[0];
thread_local const AtomicString& knull = reinterpret_cast<AtomicString*>(&names_storage)[1];
thread_local const AtomicString& kfalse = reinterpret_cast<AtomicString*>(&names_storage)[2];
thread_local const AtomicString& ktrue = reinterpret_cast<AtomicString*>(&names_storage)[3];
thread_local const AtomicString& kif = reinterpret_cast<AtomicString*>(&names_storage)[4];
thread_local const AtomicString& kelse = reinterpret_cast<AtomicString*>(&names_storage)[5];
thread_local const AtomicString& kreturn = reinterpret_cast<AtomicString*>(&names_storage)[6];
thread_local const AtomicString& kvar = reinterpret_cast<AtomicString*>(&names_storage)[7];
thread_local const AtomicString& kthis = reinterpret_cast<AtomicString*>(&names_storage)[8];
thread_local const AtomicString& kdelete = reinterpret_cast<AtomicString*>(&names_storage)[9];
thread_local const AtomicString& kvoid = reinterpret_cast<AtomicString*>(&names_storage)[10];
thread_local const AtomicString& ktypeof = reinterpret_cast<AtomicString*>(&names_storage)[11];
thread_local const AtomicString& knew = reinterpret_cast<AtomicString*>(&names_storage)[12];
thread_local const AtomicString& kin = reinterpret_cast<AtomicString*>(&names_storage)[13];
thread_local const AtomicString& kinstanceof = reinterpret_cast<AtomicString*>(&names_storage)[14];
thread_local const AtomicString& kdo = reinterpret_cast<AtomicString*>(&names_storage)[15];
thread_local const AtomicString& kwhile = reinterpret_cast<AtomicString*>(&names_storage)[16];
thread_local const AtomicString& kfor = reinterpret_cast<AtomicString*>(&names_storage)[17];
thread_local const AtomicString& kbreak = reinterpret_cast<AtomicString*>(&names_storage)[18];
thread_local const AtomicString& kcontinue = reinterpret_cast<AtomicString*>(&names_storage)[19];
thread_local const AtomicString& kswitch = reinterpret_cast<AtomicString*>(&names_storage)[20];
thread_local const AtomicString& kcase = reinterpret_cast<AtomicString*>(&names_storage)[21];
thread_local const AtomicString& kdefault = reinterpret_cast<AtomicString*>(&names_storage)[22];
thread_local const AtomicString& kthrow = reinterpret_cast<AtomicString*>(&names_storage)[23];
thread_local const AtomicString& ktry = reinterpret_cast<AtomicString*>(&names_storage)[24];
thread_local const AtomicString& kcatch = reinterpret_cast<AtomicString*>(&names_storage)[25];
thread_local const AtomicString& kfinally = reinterpret_cast<AtomicString*>(&names_storage)[26];
thread_local const AtomicString& kfunction = reinterpret_cast<AtomicString*>(&names_storage)[27];
thread_local const AtomicString& kdebugger = reinterpret_cast<AtomicString*>(&names_storage)[28];
thread_local const AtomicString& kwith = reinterpret_cast<AtomicString*>(&names_storage)[29];
thread_local const AtomicString& kclass = reinterpret_cast<AtomicString*>(&names_storage)[30];
thread_local const AtomicString& kconst = reinterpret_cast<AtomicString*>(&names_storage)[31];
thread_local const AtomicString& kenum = reinterpret_cast<AtomicString*>(&names_storage)[32];
thread_local const AtomicString& kexport = reinterpret_cast<AtomicString*>(&names_storage)[33];
thread_local const AtomicString& kextends = reinterpret_cast<AtomicString*>(&names_storage)[34];
thread_local const AtomicString& kimport = reinterpret_cast<AtomicString*>(&names_storage)[35];
thread_local const AtomicString& ksuper = reinterpret_cast<AtomicString*>(&names_storage)[36];
thread_local const AtomicString& kimplements = reinterpret_cast<AtomicString*>(&names_storage)[37];
thread_local const AtomicString& kinterface = reinterpret_cast<AtomicString*>(&names_storage)[38];
thread_local const AtomicString& klet = reinterpret_cast<AtomicString*>(&names_storage)[39];
thread_local const AtomicString& kpackage = reinterpret_cast<AtomicString*>(&names_storage)[40];
thread_local const AtomicString& kprivate = reinterpret_cast<AtomicString*>(&names_storage)[41];
thread_local const AtomicString& kprotected = reinterpret_cast<AtomicString*>(&names_storage)[42];
thread_local const AtomicString& kpublic = reinterpret_cast<AtomicString*>(&names_storage)[43];
thread_local const AtomicString& kstatic = reinterpret_cast<AtomicString*>(&names_storage)[44];
thread_local const AtomicString& kyield = reinterpret_cast<AtomicString*>(&names_storage)[45];
thread_local const AtomicString& kawait = reinterpret_cast<AtomicString*>(&names_storage)[46];
thread_local const AtomicString& kempty_string = reinterpret_cast<AtomicString*>(&names_storage)[47];
thread_local const AtomicString& klength = reinterpret_cast<AtomicString*>(&names_storage)[48];
thread_local const AtomicString& kfileName = reinterpret_cast<AtomicString*>(&names_storage)[49];
thread_local const AtomicString& klineNumber = reinterpret_cast<AtomicString*>(&names_storage)[50];
thread_local const AtomicString& kmessage = reinterpret_cast<AtomicString*>(&names_storage)[51];
thread_local const AtomicString& kerrors = reinterpret_cast<AtomicString*>(&names_storage)[52];
thread_local const AtomicString& kstack = reinterpret_cast<AtomicString*>(&names_storage)[53];
thread_local const AtomicString& kname = reinterpret_cast<AtomicString*>(&names_storage)[54];
thread_local const AtomicString& ktoString = reinterpret_cast<AtomicString*>(&names_storage)[55];
thread_local const AtomicString& ktoLocaleString = reinterpret_cast<AtomicString*>(&names_storage)[56];
thread_local const AtomicString& kvalueOf = reinterpret_cast<AtomicString*>(&names_storage)[57];
thread_local const AtomicString& keval = reinterpret_cast<AtomicString*>(&names_storage)[58];
thread_local const AtomicString& kprototype = reinterpret_cast<AtomicString*>(&names_storage)[59];
thread_local const AtomicString& kconstructor = reinterpret_cast<AtomicString*>(&names_storage)[60];
thread_local const AtomicString& kconfigurable = reinterpret_cast<AtomicString*>(&names_storage)[61];
thread_local const AtomicString& kwritable = reinterpret_cast<AtomicString*>(&names_storage)[62];
thread_local const AtomicString& kenumerable = reinterpret_cast<AtomicString*>(&names_storage)[63];
thread_local const AtomicString& kvalue = reinterpret_cast<AtomicString*>(&names_storage)[64];
thread_local const AtomicString& kget = reinterpret_cast<AtomicString*>(&names_storage)[65];
thread_local const AtomicString& kset = reinterpret_cast<AtomicString*>(&names_storage)[66];
thread_local const AtomicString& kof = reinterpret_cast<AtomicString*>(&names_storage)[67];
thread_local const AtomicString& k__proto__ = reinterpret_cast<AtomicString*>(&names_storage)[68];
thread_local const AtomicString& kundefined = reinterpret_cast<AtomicString*>(&names_storage)[69];
thread_local const AtomicString& knumber = reinterpret_cast<AtomicString*>(&names_storage)[70];
thread_local const AtomicString& kboolean = reinterpret_cast<AtomicString*>(&names_storage)[71];
thread_local const AtomicString& kstring = reinterpret_cast<AtomicString*>(&names_storage)[72];
thread_local const AtomicString& kobject = reinterpret_cast<AtomicString*>(&names_storage)[73];
thread_local const AtomicString& ksymbol = reinterpret_cast<AtomicString*>(&names_storage)[74];
thread_local const AtomicString& kinteger = reinterpret_cast<AtomicString*>(&names_storage)[75];
thread_local const AtomicString& kunknown = reinterpret_cast<AtomicString*>(&names_storage)[76];
thread_local const AtomicString& karguments = reinterpret_cast<AtomicString*>(&names_storage)[77];
thread_local const AtomicString& kcallee = reinterpret_cast<AtomicString*>(&names_storage)[78];
thread_local const AtomicString& kcaller = reinterpret_cast<AtomicString*>(&names_storage)[79];
thread_local const AtomicString& k_eval_ = reinterpret_cast<AtomicString*>(&names_storage)[80];
thread_local const AtomicString& k_ret_ = reinterpret_cast<AtomicString*>(&names_storage)[81];
thread_local const AtomicString& k_var_ = reinterpret_cast<AtomicString*>(&names_storage)[82];
thread_local const AtomicString& k_arg_var_ = reinterpret_cast<AtomicString*>(&names_storage)[83];
thread_local const AtomicString& k_with_ = reinterpret_cast<AtomicString*>(&names_storage)[84];
thread_local const AtomicString& klastIndex = reinterpret_cast<AtomicString*>(&names_storage)[85];
thread_local const AtomicString& ktarget = reinterpret_cast<AtomicString*>(&names_storage)[86];
thread_local const AtomicString& kindex = reinterpret_cast<AtomicString*>(&names_storage)[87];
thread_local const AtomicString& kinput = reinterpret_cast<AtomicString*>(&names_storage)[88];
thread_local const AtomicString& kdefineProperties = reinterpret_cast<AtomicString*>(&names_storage)[89];
thread_local const AtomicString& kapply = reinterpret_cast<AtomicString*>(&names_storage)[90];
thread_local const AtomicString& kjoin = reinterpret_cast<AtomicString*>(&names_storage)[91];
thread_local const AtomicString& kconcat = reinterpret_cast<AtomicString*>(&names_storage)[92];
thread_local const AtomicString& ksplit = reinterpret_cast<AtomicString*>(&names_storage)[93];
thread_local const AtomicString& kconstruct = reinterpret_cast<AtomicString*>(&names_storage)[94];
thread_local const AtomicString& kgetPrototypeOf = reinterpret_cast<AtomicString*>(&names_storage)[95];
thread_local const AtomicString& ksetPrototypeOf = reinterpret_cast<AtomicString*>(&names_storage)[96];
thread_local const AtomicString& kisExtensible = reinterpret_cast<AtomicString*>(&names_storage)[97];
thread_local const AtomicString& kpreventExtensions = reinterpret_cast<AtomicString*>(&names_storage)[98];
thread_local const AtomicString& khas = reinterpret_cast<AtomicString*>(&names_storage)[99];
thread_local const AtomicString& kdeleteProperty = reinterpret_cast<AtomicString*>(&names_storage)[100];
thread_local const AtomicString& kdefineProperty = reinterpret_cast<AtomicString*>(&names_storage)[101];
thread_local const AtomicString& kgetOwnPropertyDescriptor = reinterpret_cast<AtomicString*>(&names_storage)[102];
thread_local const AtomicString& kownKeys = reinterpret_cast<AtomicString*>(&names_storage)[103];
thread_local const AtomicString& kadd = reinterpret_cast<AtomicString*>(&names_storage)[104];
thread_local const AtomicString& kdone = reinterpret_cast<AtomicString*>(&names_storage)[105];
thread_local const AtomicString& knext = reinterpret_cast<AtomicString*>(&names_storage)[106];
thread_local const AtomicString& kvalues = reinterpret_cast<AtomicString*>(&names_storage)[107];
thread_local const AtomicString& ksource = reinterpret_cast<AtomicString*>(&names_storage)[108];
thread_local const AtomicString& kflags = reinterpret_cast<AtomicString*>(&names_storage)[109];
thread_local const AtomicString& kglobal = reinterpret_cast<AtomicString*>(&names_storage)[110];
thread_local const AtomicString& kunicode = reinterpret_cast<AtomicString*>(&names_storage)[111];
thread_local const AtomicString& kraw = reinterpret_cast<AtomicString*>(&names_storage)[112];
thread_local const AtomicString& knew_target = reinterpret_cast<AtomicString*>(&names_storage)[113];
thread_local const AtomicString& kthis_active_func = reinterpret_cast<AtomicString*>(&names_storage)[114];
thread_local const AtomicString& khome_object = reinterpret_cast<AtomicString*>(&names_storage)[115];
thread_local const AtomicString& kcomputed_field = reinterpret_cast<AtomicString*>(&names_storage)[116];
thread_local const AtomicString& kstatic_computed_field = reinterpret_cast<AtomicString*>(&names_storage)[117];
thread_local const AtomicString& kclass_fields_init = reinterpret_cast<AtomicString*>(&names_storage)[118];
thread_local const AtomicString& kbrand = reinterpret_cast<AtomicString*>(&names_storage)[119];
thread_local const AtomicString& khash_constructor = reinterpret_cast<AtomicString*>(&names_storage)[120];
thread_local const AtomicString& kas = reinterpret_cast<AtomicString*>(&names_storage)[121];
thread_local const AtomicString& kfrom = reinterpret_cast<AtomicString*>(&names_storage)[122];
thread_local const AtomicString& kmeta = reinterpret_cast<AtomicString*>(&names_storage)[123];
thread_local const AtomicString& k_default_ = reinterpret_cast<AtomicString*>(&names_storage)[124];
thread_local const AtomicString& k_star_ = reinterpret_cast<AtomicString*>(&names_storage)[125];
thread_local const AtomicString& kModule = reinterpret_cast<AtomicString*>(&names_storage)[126];
thread_local const AtomicString& kthen = reinterpret_cast<AtomicString*>(&names_storage)[127];
thread_local const AtomicString& kresolve = reinterpret_cast<AtomicString*>(&names_storage)[128];
thread_local const AtomicString& kreject = reinterpret_cast<AtomicString*>(&names_storage)[129];
thread_local const AtomicString& kpromise = reinterpret_cast<AtomicString*>(&names_storage)[130];
thread_local const AtomicString& kproxy = reinterpret_cast<AtomicString*>(&names_storage)[131];
thread_local const AtomicString& krevoke = reinterpret_cast<AtomicString*>(&names_storage)[132];
thread_local const AtomicString& kasync = reinterpret_cast<AtomicString*>(&names_storage)[133];
thread_local const AtomicString& kexec = reinterpret_cast<AtomicString*>(&names_storage)[134];
thread_local const AtomicString& kgroups = reinterpret_cast<AtomicString*>(&names_storage)[135];
thread_local const AtomicString& kstatus = reinterpret_cast<AtomicString*>(&names_storage)[136];
thread_local const AtomicString& kreason = reinterpret_cast<AtomicString*>(&names_storage)[137];
thread_local const AtomicString& kglobalThis = reinterpret_cast<AtomicString*>(&names_storage)[138];
thread_local const AtomicString& knot_equal = reinterpret_cast<AtomicString*>(&names_storage)[139];
thread_local const AtomicString& ktimed_out = reinterpret_cast<AtomicString*>(&names_storage)[140];
thread_local const AtomicString& kok = reinterpret_cast<AtomicString*>(&names_storage)[141];
thread_local const AtomicString& ktoJSON = reinterpret_cast<AtomicString*>(&names_storage)[142];
thread_local const AtomicString& kObject = reinterpret_cast<AtomicString*>(&names_storage)[143];
thread_local const AtomicString& kArray = reinterpret_cast<AtomicString*>(&names_storage)[144];
thread_local const AtomicString& kError = reinterpret_cast<AtomicString*>(&names_storage)[145];
thread_local const AtomicString& kNumber = reinterpret_cast<AtomicString*>(&names_storage)[146];
thread_local const AtomicString& kString = reinterpret_cast<AtomicString*>(&names_storage)[147];
thread_local const AtomicString& kBoolean = reinterpret_cast<AtomicString*>(&names_storage)[148];
thread_local const AtomicString& kSymbol = reinterpret_cast<AtomicString*>(&names_storage)[149];
thread_local const AtomicString& kArguments = reinterpret_cast<AtomicString*>(&names_storage)[150];
thread_local const AtomicString& kMath = reinterpret_cast<AtomicString*>(&names_storage)[151];
thread_local const AtomicString& kJSON = reinterpret_cast<AtomicString*>(&names_storage)[152];
thread_local const AtomicString& kDate = reinterpret_cast<AtomicString*>(&names_storage)[153];
thread_local const AtomicString& kFunction = reinterpret_cast<AtomicString*>(&names_storage)[154];
thread_local const AtomicString& kGeneratorFunction = reinterpret_cast<AtomicString*>(&names_storage)[155];
thread_local const AtomicString& kForInIterator = reinterpret_cast<AtomicString*>(&names_storage)[156];
thread_local const AtomicString& kRegExp = reinterpret_cast<AtomicString*>(&names_storage)[157];
thread_local const AtomicString& kArrayBuffer = reinterpret_cast<AtomicString*>(&names_storage)[158];
thread_local const AtomicString& kSharedArrayBuffer = reinterpret_cast<AtomicString*>(&names_storage)[159];
thread_local const AtomicString& kUint8ClampedArray = reinterpret_cast<AtomicString*>(&names_storage)[160];
thread_local const AtomicString& kInt8Array = reinterpret_cast<AtomicString*>(&names_storage)[161];
thread_local const AtomicString& kUint8Array = reinterpret_cast<AtomicString*>(&names_storage)[162];
thread_local const AtomicString& kInt16Array = reinterpret_cast<AtomicString*>(&names_storage)[163];
thread_local const AtomicString& kUint16Array = reinterpret_cast<AtomicString*>(&names_storage)[164];
thread_local const AtomicString& kInt32Array = reinterpret_cast<AtomicString*>(&names_storage)[165];
thread_local const AtomicString& kUint32Array = reinterpret_cast<AtomicString*>(&names_storage)[166];
thread_local const AtomicString& kFloat32Array = reinterpret_cast<AtomicString*>(&names_storage)[167];
thread_local const AtomicString& kFloat64Array = reinterpret_cast<AtomicString*>(&names_storage)[168];
thread_local const AtomicString& kDataView = reinterpret_cast<AtomicString*>(&names_storage)[169];
thread_local const AtomicString& kMap = reinterpret_cast<AtomicString*>(&names_storage)[170];
thread_local const AtomicString& kSet = reinterpret_cast<AtomicString*>(&names_storage)[171];
thread_local const AtomicString& kWeakMap = reinterpret_cast<AtomicString*>(&names_storage)[172];
thread_local const AtomicString& kWeakSet = reinterpret_cast<AtomicString*>(&names_storage)[173];
thread_local const AtomicString& kMap_Iterator = reinterpret_cast<AtomicString*>(&names_storage)[174];
thread_local const AtomicString& kSet_Iterator = reinterpret_cast<AtomicString*>(&names_storage)[175];
thread_local const AtomicString& kArray_Iterator = reinterpret_cast<AtomicString*>(&names_storage)[176];
thread_local const AtomicString& kString_Iterator = reinterpret_cast<AtomicString*>(&names_storage)[177];
thread_local const AtomicString& kRegExp_String_Iterator = reinterpret_cast<AtomicString*>(&names_storage)[178];
thread_local const AtomicString& kGenerator = reinterpret_cast<AtomicString*>(&names_storage)[179];
thread_local const AtomicString& kProxy = reinterpret_cast<AtomicString*>(&names_storage)[180];
thread_local const AtomicString& kPromise = reinterpret_cast<AtomicString*>(&names_storage)[181];
thread_local const AtomicString& kPromiseResolveFunction = reinterpret_cast<AtomicString*>(&names_storage)[182];
thread_local const AtomicString& kPromiseRejectFunction = reinterpret_cast<AtomicString*>(&names_storage)[183];
thread_local const AtomicString& kAsyncFunction = reinterpret_cast<AtomicString*>(&names_storage)[184];
thread_local const AtomicString& kAsyncFunctionResolve = reinterpret_cast<AtomicString*>(&names_storage)[185];
thread_local const AtomicString& kAsyncFunctionReject = reinterpret_cast<AtomicString*>(&names_storage)[186];
thread_local const AtomicString& kAsyncGeneratorFunction = reinterpret_cast<AtomicString*>(&names_storage)[187];
thread_local const AtomicString& kAsyncGenerator = reinterpret_cast<AtomicString*>(&names_storage)[188];
thread_local const AtomicString& kEvalError = reinterpret_cast<AtomicString*>(&names_storage)[189];
thread_local const AtomicString& kRangeError = reinterpret_cast<AtomicString*>(&names_storage)[190];
thread_local const AtomicString& kReferenceError = reinterpret_cast<AtomicString*>(&names_storage)[191];
thread_local const AtomicString& kSyntaxError = reinterpret_cast<AtomicString*>(&names_storage)[192];
thread_local const AtomicString& kTypeError = reinterpret_cast<AtomicString*>(&names_storage)[193];
thread_local const AtomicString& kURIError = reinterpret_cast<AtomicString*>(&names_storage)[194];
thread_local const AtomicString& kInternalError = reinterpret_cast<AtomicString*>(&names_storage)[195];
thread_local const AtomicString& kPrivate_brand = reinterpret_cast<AtomicString*>(&names_storage)[196];
thread_local const AtomicString& kSymbol_toPrimitive = reinterpret_cast<AtomicString*>(&names_storage)[197];
thread_local const AtomicString& kSymbol_iterator = reinterpret_cast<AtomicString*>(&names_storage)[198];
thread_local const AtomicString& kSymbol_match = reinterpret_cast<AtomicString*>(&names_storage)[199];
thread_local const AtomicString& kSymbol_matchAll = reinterpret_cast<AtomicString*>(&names_storage)[200];
thread_local const AtomicString& kSymbol_replace = reinterpret_cast<AtomicString*>(&names_storage)[201];
thread_local const AtomicString& kSymbol_search = reinterpret_cast<AtomicString*>(&names_storage)[202];
thread_local const AtomicString& kSymbol_split = reinterpret_cast<AtomicString*>(&names_storage)[203];
thread_local const AtomicString& kSymbol_toStringTag = reinterpret_cast<AtomicString*>(&names_storage)[204];
thread_local const AtomicString& kSymbol_isConcatSpreadable = reinterpret_cast<AtomicString*>(&names_storage)[205];
thread_local const AtomicString& kSymbol_hasInstance = reinterpret_cast<AtomicString*>(&names_storage)[206];
thread_local const AtomicString& kSymbol_species = reinterpret_cast<AtomicString*>(&names_storage)[207];
thread_local const AtomicString& kSymbol_unscopables = reinterpret_cast<AtomicString*>(&names_storage)[208];
thread_local const AtomicString& kSymbol_asyncIterator = reinterpret_cast<AtomicString*>(&names_storage)[209];
void Init(JSContext* ctx) {
  struct NameEntry {
      JSAtom atom;
   };
  static const NameEntry kNames[] = {
          { JS_ATOM_NULL },
          { JS_ATOM_null },
          { JS_ATOM_false },
          { JS_ATOM_true },
          { JS_ATOM_if },
          { JS_ATOM_else },
          { JS_ATOM_return },
          { JS_ATOM_var },
          { JS_ATOM_this },
          { JS_ATOM_delete },
          { JS_ATOM_void },
          { JS_ATOM_typeof },
          { JS_ATOM_new },
          { JS_ATOM_in },
          { JS_ATOM_instanceof },
          { JS_ATOM_do },
          { JS_ATOM_while },
          { JS_ATOM_for },
          { JS_ATOM_break },
          { JS_ATOM_continue },
          { JS_ATOM_switch },
          { JS_ATOM_case },
          { JS_ATOM_default },
          { JS_ATOM_throw },
          { JS_ATOM_try },
          { JS_ATOM_catch },
          { JS_ATOM_finally },
          { JS_ATOM_function },
          { JS_ATOM_debugger },
          { JS_ATOM_with },
          { JS_ATOM_class },
          { JS_ATOM_const },
          { JS_ATOM_enum },
          { JS_ATOM_export },
          { JS_ATOM_extends },
          { JS_ATOM_import },
          { JS_ATOM_super },
          { JS_ATOM_implements },
          { JS_ATOM_interface },
          { JS_ATOM_let },
          { JS_ATOM_package },
          { JS_ATOM_private },
          { JS_ATOM_protected },
          { JS_ATOM_public },
          { JS_ATOM_static },
          { JS_ATOM_yield },
          { JS_ATOM_await },
          { JS_ATOM_empty_string },
          { JS_ATOM_length },
          { JS_ATOM_fileName },
          { JS_ATOM_lineNumber },
          { JS_ATOM_message },
          { JS_ATOM_errors },
          { JS_ATOM_stack },
          { JS_ATOM_name },
          { JS_ATOM_toString },
          { JS_ATOM_toLocaleString },
          { JS_ATOM_valueOf },
          { JS_ATOM_eval },
          { JS_ATOM_prototype },
          { JS_ATOM_constructor },
          { JS_ATOM_configurable },
          { JS_ATOM_writable },
          { JS_ATOM_enumerable },
          { JS_ATOM_value },
          { JS_ATOM_get },
          { JS_ATOM_set },
          { JS_ATOM_of },
          { JS_ATOM___proto__ },
          { JS_ATOM_undefined },
          { JS_ATOM_number },
          { JS_ATOM_boolean },
          { JS_ATOM_string },
          { JS_ATOM_object },
          { JS_ATOM_symbol },
          { JS_ATOM_integer },
          { JS_ATOM_unknown },
          { JS_ATOM_arguments },
          { JS_ATOM_callee },
          { JS_ATOM_caller },
          { JS_ATOM__eval_ },
          { JS_ATOM__ret_ },
          { JS_ATOM__var_ },
          { JS_ATOM__arg_var_ },
          { JS_ATOM__with_ },
          { JS_ATOM_lastIndex },
          { JS_ATOM_target },
          { JS_ATOM_index },
          { JS_ATOM_input },
          { JS_ATOM_defineProperties },
          { JS_ATOM_apply },
          { JS_ATOM_join },
          { JS_ATOM_concat },
          { JS_ATOM_split },
          { JS_ATOM_construct },
          { JS_ATOM_getPrototypeOf },
          { JS_ATOM_setPrototypeOf },
          { JS_ATOM_isExtensible },
          { JS_ATOM_preventExtensions },
          { JS_ATOM_has },
          { JS_ATOM_deleteProperty },
          { JS_ATOM_defineProperty },
          { JS_ATOM_getOwnPropertyDescriptor },
          { JS_ATOM_ownKeys },
          { JS_ATOM_add },
          { JS_ATOM_done },
          { JS_ATOM_next },
          { JS_ATOM_values },
          { JS_ATOM_source },
          { JS_ATOM_flags },
          { JS_ATOM_global },
          { JS_ATOM_unicode },
          { JS_ATOM_raw },
          { JS_ATOM_new_target },
          { JS_ATOM_this_active_func },
          { JS_ATOM_home_object },
          { JS_ATOM_computed_field },
          { JS_ATOM_static_computed_field },
          { JS_ATOM_class_fields_init },
          { JS_ATOM_brand },
          { JS_ATOM_hash_constructor },
          { JS_ATOM_as },
          { JS_ATOM_from },
          { JS_ATOM_meta },
          { JS_ATOM__default_ },
          { JS_ATOM__star_ },
          { JS_ATOM_Module },
          { JS_ATOM_then },
          { JS_ATOM_resolve },
          { JS_ATOM_reject },
          { JS_ATOM_promise },
          { JS_ATOM_proxy },
          { JS_ATOM_revoke },
          { JS_ATOM_async },
          { JS_ATOM_exec },
          { JS_ATOM_groups },
          { JS_ATOM_status },
          { JS_ATOM_reason },
          { JS_ATOM_globalThis },
          { JS_ATOM_not_equal },
          { JS_ATOM_timed_out },
          { JS_ATOM_ok },
          { JS_ATOM_toJSON },
          { JS_ATOM_Object },
          { JS_ATOM_Array },
          { JS_ATOM_Error },
          { JS_ATOM_Number },
          { JS_ATOM_String },
          { JS_ATOM_Boolean },
          { JS_ATOM_Symbol },
          { JS_ATOM_Arguments },
          { JS_ATOM_Math },
          { JS_ATOM_JSON },
          { JS_ATOM_Date },
          { JS_ATOM_Function },
          { JS_ATOM_GeneratorFunction },
          { JS_ATOM_ForInIterator },
          { JS_ATOM_RegExp },
          { JS_ATOM_ArrayBuffer },
          { JS_ATOM_SharedArrayBuffer },
          { JS_ATOM_Uint8ClampedArray },
          { JS_ATOM_Int8Array },
          { JS_ATOM_Uint8Array },
          { JS_ATOM_Int16Array },
          { JS_ATOM_Uint16Array },
          { JS_ATOM_Int32Array },
          { JS_ATOM_Uint32Array },
          { JS_ATOM_Float32Array },
          { JS_ATOM_Float64Array },
          { JS_ATOM_DataView },
          { JS_ATOM_Map },
          { JS_ATOM_Set },
          { JS_ATOM_WeakMap },
          { JS_ATOM_WeakSet },
          { JS_ATOM_Map_Iterator },
          { JS_ATOM_Set_Iterator },
          { JS_ATOM_Array_Iterator },
          { JS_ATOM_String_Iterator },
          { JS_ATOM_RegExp_String_Iterator },
          { JS_ATOM_Generator },
          { JS_ATOM_Proxy },
          { JS_ATOM_Promise },
          { JS_ATOM_PromiseResolveFunction },
          { JS_ATOM_PromiseRejectFunction },
          { JS_ATOM_AsyncFunction },
          { JS_ATOM_AsyncFunctionResolve },
          { JS_ATOM_AsyncFunctionReject },
          { JS_ATOM_AsyncGeneratorFunction },
          { JS_ATOM_AsyncGenerator },
          { JS_ATOM_EvalError },
          { JS_ATOM_RangeError },
          { JS_ATOM_ReferenceError },
          { JS_ATOM_SyntaxError },
          { JS_ATOM_TypeError },
          { JS_ATOM_URIError },
          { JS_ATOM_InternalError },
          { JS_ATOM_Private_brand },
          { JS_ATOM_Symbol_toPrimitive },
          { JS_ATOM_Symbol_iterator },
          { JS_ATOM_Symbol_match },
          { JS_ATOM_Symbol_matchAll },
          { JS_ATOM_Symbol_replace },
          { JS_ATOM_Symbol_search },
          { JS_ATOM_Symbol_split },
          { JS_ATOM_Symbol_toStringTag },
          { JS_ATOM_Symbol_isConcatSpreadable },
          { JS_ATOM_Symbol_hasInstance },
          { JS_ATOM_Symbol_species },
          { JS_ATOM_Symbol_unscopables },
          { JS_ATOM_Symbol_asyncIterator },
  };
  for(size_t i = 0; i < std::size(kNames); i ++) {
    void* address = reinterpret_cast<AtomicString*>(&names_storage) + i;
      new (address) AtomicString(ctx, kNames[i].atom);
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