// Generated from template:
//   code_generator/src/json/templates/make_names.h.tmpl
// and input files:
//   E:\Projects\Exaecut\sources\webf\bridge\core\events\event_type_names.json5
#include "event_type_names.h"
namespace webf {
namespace event_type_names {
thread_local void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];
thread_local const AtomicString& kDOMActivate = reinterpret_cast<AtomicString*>(&names_storage)[0];
thread_local const AtomicString& kDOMCharacterDataModified = reinterpret_cast<AtomicString*>(&names_storage)[1];
thread_local const AtomicString& kDOMContentLoaded = reinterpret_cast<AtomicString*>(&names_storage)[2];
thread_local const AtomicString& kDOMFocusIn = reinterpret_cast<AtomicString*>(&names_storage)[3];
thread_local const AtomicString& kDOMFocusOut = reinterpret_cast<AtomicString*>(&names_storage)[4];
thread_local const AtomicString& kDOMNodeInserted = reinterpret_cast<AtomicString*>(&names_storage)[5];
thread_local const AtomicString& kDOMNodeInsertedIntoDocument = reinterpret_cast<AtomicString*>(&names_storage)[6];
thread_local const AtomicString& kDOMNodeRemoved = reinterpret_cast<AtomicString*>(&names_storage)[7];
thread_local const AtomicString& kDOMNodeRemovedFromDocument = reinterpret_cast<AtomicString*>(&names_storage)[8];
thread_local const AtomicString& kDOMSubtreeModified = reinterpret_cast<AtomicString*>(&names_storage)[9];
thread_local const AtomicString& kabort = reinterpret_cast<AtomicString*>(&names_storage)[10];
thread_local const AtomicString& kabortpayment = reinterpret_cast<AtomicString*>(&names_storage)[11];
thread_local const AtomicString& kactivate = reinterpret_cast<AtomicString*>(&names_storage)[12];
thread_local const AtomicString& kactive = reinterpret_cast<AtomicString*>(&names_storage)[13];
thread_local const AtomicString& kaddsourcebuffer = reinterpret_cast<AtomicString*>(&names_storage)[14];
thread_local const AtomicString& kaddtrack = reinterpret_cast<AtomicString*>(&names_storage)[15];
thread_local const AtomicString& kanimationcancel = reinterpret_cast<AtomicString*>(&names_storage)[16];
thread_local const AtomicString& kanimationend = reinterpret_cast<AtomicString*>(&names_storage)[17];
thread_local const AtomicString& kanimationiteration = reinterpret_cast<AtomicString*>(&names_storage)[18];
thread_local const AtomicString& kanimationstart = reinterpret_cast<AtomicString*>(&names_storage)[19];
thread_local const AtomicString& kbackgroundfetchabort = reinterpret_cast<AtomicString*>(&names_storage)[20];
thread_local const AtomicString& kbackgroundfetchclick = reinterpret_cast<AtomicString*>(&names_storage)[21];
thread_local const AtomicString& kbackgroundfetchfail = reinterpret_cast<AtomicString*>(&names_storage)[22];
thread_local const AtomicString& kbackgroundfetchsuccess = reinterpret_cast<AtomicString*>(&names_storage)[23];
thread_local const AtomicString& kbeforeunload = reinterpret_cast<AtomicString*>(&names_storage)[24];
thread_local const AtomicString& kbeginEvent = reinterpret_cast<AtomicString*>(&names_storage)[25];
thread_local const AtomicString& kblocked = reinterpret_cast<AtomicString*>(&names_storage)[26];
thread_local const AtomicString& kblur = reinterpret_cast<AtomicString*>(&names_storage)[27];
thread_local const AtomicString& kboundary = reinterpret_cast<AtomicString*>(&names_storage)[28];
thread_local const AtomicString& kcached = reinterpret_cast<AtomicString*>(&names_storage)[29];
thread_local const AtomicString& kcancel = reinterpret_cast<AtomicString*>(&names_storage)[30];
thread_local const AtomicString& kcanplay = reinterpret_cast<AtomicString*>(&names_storage)[31];
thread_local const AtomicString& kcanplaythrough = reinterpret_cast<AtomicString*>(&names_storage)[32];
thread_local const AtomicString& kcapturehandlechange = reinterpret_cast<AtomicString*>(&names_storage)[33];
thread_local const AtomicString& kchange = reinterpret_cast<AtomicString*>(&names_storage)[34];
thread_local const AtomicString& kchecking = reinterpret_cast<AtomicString*>(&names_storage)[35];
thread_local const AtomicString& kclick = reinterpret_cast<AtomicString*>(&names_storage)[36];
thread_local const AtomicString& kdbclick = reinterpret_cast<AtomicString*>(&names_storage)[37];
thread_local const AtomicString& klongpress = reinterpret_cast<AtomicString*>(&names_storage)[38];
thread_local const AtomicString& kclose = reinterpret_cast<AtomicString*>(&names_storage)[39];
thread_local const AtomicString& kclosing = reinterpret_cast<AtomicString*>(&names_storage)[40];
thread_local const AtomicString& kcomplete = reinterpret_cast<AtomicString*>(&names_storage)[41];
thread_local const AtomicString& kgotpointercapture = reinterpret_cast<AtomicString*>(&names_storage)[42];
thread_local const AtomicString& kcompositionend = reinterpret_cast<AtomicString*>(&names_storage)[43];
thread_local const AtomicString& kcompositionstart = reinterpret_cast<AtomicString*>(&names_storage)[44];
thread_local const AtomicString& kcompositionupdate = reinterpret_cast<AtomicString*>(&names_storage)[45];
thread_local const AtomicString& kconnect = reinterpret_cast<AtomicString*>(&names_storage)[46];
thread_local const AtomicString& kcontextlost = reinterpret_cast<AtomicString*>(&names_storage)[47];
thread_local const AtomicString& kcontextmenu = reinterpret_cast<AtomicString*>(&names_storage)[48];
thread_local const AtomicString& kcontextrestored = reinterpret_cast<AtomicString*>(&names_storage)[49];
thread_local const AtomicString& kcontrollerchange = reinterpret_cast<AtomicString*>(&names_storage)[50];
thread_local const AtomicString& kcookiechange = reinterpret_cast<AtomicString*>(&names_storage)[51];
thread_local const AtomicString& kcopy = reinterpret_cast<AtomicString*>(&names_storage)[52];
thread_local const AtomicString& kcontentdelete = reinterpret_cast<AtomicString*>(&names_storage)[53];
thread_local const AtomicString& kcrossoriginmessage = reinterpret_cast<AtomicString*>(&names_storage)[54];
thread_local const AtomicString& kcurrentscreenchange = reinterpret_cast<AtomicString*>(&names_storage)[55];
thread_local const AtomicString& kcuechange = reinterpret_cast<AtomicString*>(&names_storage)[56];
thread_local const AtomicString& kcurrententrychange = reinterpret_cast<AtomicString*>(&names_storage)[57];
thread_local const AtomicString& kcut = reinterpret_cast<AtomicString*>(&names_storage)[58];
thread_local const AtomicString& kdatachannel = reinterpret_cast<AtomicString*>(&names_storage)[59];
thread_local const AtomicString& kdblclick = reinterpret_cast<AtomicString*>(&names_storage)[60];
thread_local const AtomicString& kdefaultsessionstart = reinterpret_cast<AtomicString*>(&names_storage)[61];
thread_local const AtomicString& kdisconnect = reinterpret_cast<AtomicString*>(&names_storage)[62];
thread_local const AtomicString& kdisplay = reinterpret_cast<AtomicString*>(&names_storage)[63];
thread_local const AtomicString& kdrop = reinterpret_cast<AtomicString*>(&names_storage)[64];
thread_local const AtomicString& kdurationchange = reinterpret_cast<AtomicString*>(&names_storage)[65];
thread_local const AtomicString& kemptied = reinterpret_cast<AtomicString*>(&names_storage)[66];
thread_local const AtomicString& kencrypted = reinterpret_cast<AtomicString*>(&names_storage)[67];
thread_local const AtomicString& kend = reinterpret_cast<AtomicString*>(&names_storage)[68];
thread_local const AtomicString& kended = reinterpret_cast<AtomicString*>(&names_storage)[69];
thread_local const AtomicString& kendEvent = reinterpret_cast<AtomicString*>(&names_storage)[70];
thread_local const AtomicString& kenter = reinterpret_cast<AtomicString*>(&names_storage)[71];
thread_local const AtomicString& kerror = reinterpret_cast<AtomicString*>(&names_storage)[72];
thread_local const AtomicString& kexit = reinterpret_cast<AtomicString*>(&names_storage)[73];
thread_local const AtomicString& kfetch = reinterpret_cast<AtomicString*>(&names_storage)[74];
thread_local const AtomicString& kfinish = reinterpret_cast<AtomicString*>(&names_storage)[75];
thread_local const AtomicString& kfocus = reinterpret_cast<AtomicString*>(&names_storage)[76];
thread_local const AtomicString& kfocusin = reinterpret_cast<AtomicString*>(&names_storage)[77];
thread_local const AtomicString& kfocusout = reinterpret_cast<AtomicString*>(&names_storage)[78];
thread_local const AtomicString& kfreeze = reinterpret_cast<AtomicString*>(&names_storage)[79];
thread_local const AtomicString& kfullscreenchange = reinterpret_cast<AtomicString*>(&names_storage)[80];
thread_local const AtomicString& kfullscreenerror = reinterpret_cast<AtomicString*>(&names_storage)[81];
thread_local const AtomicString& khashchange = reinterpret_cast<AtomicString*>(&names_storage)[82];
thread_local const AtomicString& khide = reinterpret_cast<AtomicString*>(&names_storage)[83];
thread_local const AtomicString& kinactive = reinterpret_cast<AtomicString*>(&names_storage)[84];
thread_local const AtomicString& kinput = reinterpret_cast<AtomicString*>(&names_storage)[85];
thread_local const AtomicString& kinputreport = reinterpret_cast<AtomicString*>(&names_storage)[86];
thread_local const AtomicString& kinputsourceschange = reinterpret_cast<AtomicString*>(&names_storage)[87];
thread_local const AtomicString& kinstall = reinterpret_cast<AtomicString*>(&names_storage)[88];
thread_local const AtomicString& kinterfacerequest = reinterpret_cast<AtomicString*>(&names_storage)[89];
thread_local const AtomicString& kinvalid = reinterpret_cast<AtomicString*>(&names_storage)[90];
thread_local const AtomicString& kkeydown = reinterpret_cast<AtomicString*>(&names_storage)[91];
thread_local const AtomicString& kkeypress = reinterpret_cast<AtomicString*>(&names_storage)[92];
thread_local const AtomicString& kkeystatuseschange = reinterpret_cast<AtomicString*>(&names_storage)[93];
thread_local const AtomicString& kkeyup = reinterpret_cast<AtomicString*>(&names_storage)[94];
thread_local const AtomicString& klanguagechange = reinterpret_cast<AtomicString*>(&names_storage)[95];
thread_local const AtomicString& kleavepictureinpicture = reinterpret_cast<AtomicString*>(&names_storage)[96];
thread_local const AtomicString& klevelchange = reinterpret_cast<AtomicString*>(&names_storage)[97];
thread_local const AtomicString& kload = reinterpret_cast<AtomicString*>(&names_storage)[98];
thread_local const AtomicString& kloadeddata = reinterpret_cast<AtomicString*>(&names_storage)[99];
thread_local const AtomicString& kloadedmetadata = reinterpret_cast<AtomicString*>(&names_storage)[100];
thread_local const AtomicString& kloadend = reinterpret_cast<AtomicString*>(&names_storage)[101];
thread_local const AtomicString& kloading = reinterpret_cast<AtomicString*>(&names_storage)[102];
thread_local const AtomicString& kloadstart = reinterpret_cast<AtomicString*>(&names_storage)[103];
thread_local const AtomicString& klostpointercapture = reinterpret_cast<AtomicString*>(&names_storage)[104];
thread_local const AtomicString& kmark = reinterpret_cast<AtomicString*>(&names_storage)[105];
thread_local const AtomicString& kmessage = reinterpret_cast<AtomicString*>(&names_storage)[106];
thread_local const AtomicString& kmessageerror = reinterpret_cast<AtomicString*>(&names_storage)[107];
thread_local const AtomicString& kmousedown = reinterpret_cast<AtomicString*>(&names_storage)[108];
thread_local const AtomicString& kmouseenter = reinterpret_cast<AtomicString*>(&names_storage)[109];
thread_local const AtomicString& kmouseleave = reinterpret_cast<AtomicString*>(&names_storage)[110];
thread_local const AtomicString& kmousemove = reinterpret_cast<AtomicString*>(&names_storage)[111];
thread_local const AtomicString& kmouseout = reinterpret_cast<AtomicString*>(&names_storage)[112];
thread_local const AtomicString& kmouseover = reinterpret_cast<AtomicString*>(&names_storage)[113];
thread_local const AtomicString& kmouseup = reinterpret_cast<AtomicString*>(&names_storage)[114];
thread_local const AtomicString& kmousewheel = reinterpret_cast<AtomicString*>(&names_storage)[115];
thread_local const AtomicString& kmute = reinterpret_cast<AtomicString*>(&names_storage)[116];
thread_local const AtomicString& knavigate = reinterpret_cast<AtomicString*>(&names_storage)[117];
thread_local const AtomicString& knavigateerror = reinterpret_cast<AtomicString*>(&names_storage)[118];
thread_local const AtomicString& knavigatesuccess = reinterpret_cast<AtomicString*>(&names_storage)[119];
thread_local const AtomicString& knoupdate = reinterpret_cast<AtomicString*>(&names_storage)[120];
thread_local const AtomicString& kopen = reinterpret_cast<AtomicString*>(&names_storage)[121];
thread_local const AtomicString& korientationchange = reinterpret_cast<AtomicString*>(&names_storage)[122];
thread_local const AtomicString& koverscroll = reinterpret_cast<AtomicString*>(&names_storage)[123];
thread_local const AtomicString& kpagehide = reinterpret_cast<AtomicString*>(&names_storage)[124];
thread_local const AtomicString& kpageshow = reinterpret_cast<AtomicString*>(&names_storage)[125];
thread_local const AtomicString& kpaste = reinterpret_cast<AtomicString*>(&names_storage)[126];
thread_local const AtomicString& kpause = reinterpret_cast<AtomicString*>(&names_storage)[127];
thread_local const AtomicString& kplay = reinterpret_cast<AtomicString*>(&names_storage)[128];
thread_local const AtomicString& kplaying = reinterpret_cast<AtomicString*>(&names_storage)[129];
thread_local const AtomicString& kpointercancel = reinterpret_cast<AtomicString*>(&names_storage)[130];
thread_local const AtomicString& kpointerdown = reinterpret_cast<AtomicString*>(&names_storage)[131];
thread_local const AtomicString& kpointerenter = reinterpret_cast<AtomicString*>(&names_storage)[132];
thread_local const AtomicString& kpointerleave = reinterpret_cast<AtomicString*>(&names_storage)[133];
thread_local const AtomicString& kpointerlockchange = reinterpret_cast<AtomicString*>(&names_storage)[134];
thread_local const AtomicString& kpointerlockerror = reinterpret_cast<AtomicString*>(&names_storage)[135];
thread_local const AtomicString& kpointermove = reinterpret_cast<AtomicString*>(&names_storage)[136];
thread_local const AtomicString& kpointerout = reinterpret_cast<AtomicString*>(&names_storage)[137];
thread_local const AtomicString& kpointerover = reinterpret_cast<AtomicString*>(&names_storage)[138];
thread_local const AtomicString& kpointerup = reinterpret_cast<AtomicString*>(&names_storage)[139];
thread_local const AtomicString& kgesturestart = reinterpret_cast<AtomicString*>(&names_storage)[140];
thread_local const AtomicString& kgesturechange = reinterpret_cast<AtomicString*>(&names_storage)[141];
thread_local const AtomicString& kgestureend = reinterpret_cast<AtomicString*>(&names_storage)[142];
thread_local const AtomicString& kpopstate = reinterpret_cast<AtomicString*>(&names_storage)[143];
thread_local const AtomicString& kprogress = reinterpret_cast<AtomicString*>(&names_storage)[144];
thread_local const AtomicString& kprocessorerror = reinterpret_cast<AtomicString*>(&names_storage)[145];
thread_local const AtomicString& kpush = reinterpret_cast<AtomicString*>(&names_storage)[146];
thread_local const AtomicString& kpushsubscriptionchange = reinterpret_cast<AtomicString*>(&names_storage)[147];
thread_local const AtomicString& kratechange = reinterpret_cast<AtomicString*>(&names_storage)[148];
thread_local const AtomicString& kreading = reinterpret_cast<AtomicString*>(&names_storage)[149];
thread_local const AtomicString& kreadingerror = reinterpret_cast<AtomicString*>(&names_storage)[150];
thread_local const AtomicString& kreadystatechange = reinterpret_cast<AtomicString*>(&names_storage)[151];
thread_local const AtomicString& kreflectionchange = reinterpret_cast<AtomicString*>(&names_storage)[152];
thread_local const AtomicString& krejectionhandled = reinterpret_cast<AtomicString*>(&names_storage)[153];
thread_local const AtomicString& krelease = reinterpret_cast<AtomicString*>(&names_storage)[154];
thread_local const AtomicString& kremove = reinterpret_cast<AtomicString*>(&names_storage)[155];
thread_local const AtomicString& kremovestream = reinterpret_cast<AtomicString*>(&names_storage)[156];
thread_local const AtomicString& kremovetrack = reinterpret_cast<AtomicString*>(&names_storage)[157];
thread_local const AtomicString& krepeatEvent = reinterpret_cast<AtomicString*>(&names_storage)[158];
thread_local const AtomicString& kreset = reinterpret_cast<AtomicString*>(&names_storage)[159];
thread_local const AtomicString& kresize = reinterpret_cast<AtomicString*>(&names_storage)[160];
thread_local const AtomicString& kresult = reinterpret_cast<AtomicString*>(&names_storage)[161];
thread_local const AtomicString& kresume = reinterpret_cast<AtomicString*>(&names_storage)[162];
thread_local const AtomicString& kscreenschange = reinterpret_cast<AtomicString*>(&names_storage)[163];
thread_local const AtomicString& kscroll = reinterpret_cast<AtomicString*>(&names_storage)[164];
thread_local const AtomicString& kscrollend = reinterpret_cast<AtomicString*>(&names_storage)[165];
thread_local const AtomicString& ksearch = reinterpret_cast<AtomicString*>(&names_storage)[166];
thread_local const AtomicString& kseeked = reinterpret_cast<AtomicString*>(&names_storage)[167];
thread_local const AtomicString& kseeking = reinterpret_cast<AtomicString*>(&names_storage)[168];
thread_local const AtomicString& kselect = reinterpret_cast<AtomicString*>(&names_storage)[169];
thread_local const AtomicString& kselectionchange = reinterpret_cast<AtomicString*>(&names_storage)[170];
thread_local const AtomicString& kselectstart = reinterpret_cast<AtomicString*>(&names_storage)[171];
thread_local const AtomicString& kshow = reinterpret_cast<AtomicString*>(&names_storage)[172];
thread_local const AtomicString& ksqueeze = reinterpret_cast<AtomicString*>(&names_storage)[173];
thread_local const AtomicString& ksqueezeend = reinterpret_cast<AtomicString*>(&names_storage)[174];
thread_local const AtomicString& ksqueezestart = reinterpret_cast<AtomicString*>(&names_storage)[175];
thread_local const AtomicString& kstalled = reinterpret_cast<AtomicString*>(&names_storage)[176];
thread_local const AtomicString& kstart = reinterpret_cast<AtomicString*>(&names_storage)[177];
thread_local const AtomicString& kstop = reinterpret_cast<AtomicString*>(&names_storage)[178];
thread_local const AtomicString& kstatechange = reinterpret_cast<AtomicString*>(&names_storage)[179];
thread_local const AtomicString& kstorage = reinterpret_cast<AtomicString*>(&names_storage)[180];
thread_local const AtomicString& ksubmit = reinterpret_cast<AtomicString*>(&names_storage)[181];
thread_local const AtomicString& ksuccess = reinterpret_cast<AtomicString*>(&names_storage)[182];
thread_local const AtomicString& ksuspend = reinterpret_cast<AtomicString*>(&names_storage)[183];
thread_local const AtomicString& ksync = reinterpret_cast<AtomicString*>(&names_storage)[184];
thread_local const AtomicString& kterminate = reinterpret_cast<AtomicString*>(&names_storage)[185];
thread_local const AtomicString& ktextInput = reinterpret_cast<AtomicString*>(&names_storage)[186];
thread_local const AtomicString& ktextupdate = reinterpret_cast<AtomicString*>(&names_storage)[187];
thread_local const AtomicString& ktextformatupdate = reinterpret_cast<AtomicString*>(&names_storage)[188];
thread_local const AtomicString& ktoggle = reinterpret_cast<AtomicString*>(&names_storage)[189];
thread_local const AtomicString& ktonechange = reinterpret_cast<AtomicString*>(&names_storage)[190];
thread_local const AtomicString& ktouchcancel = reinterpret_cast<AtomicString*>(&names_storage)[191];
thread_local const AtomicString& ktouchend = reinterpret_cast<AtomicString*>(&names_storage)[192];
thread_local const AtomicString& ktouchmove = reinterpret_cast<AtomicString*>(&names_storage)[193];
thread_local const AtomicString& ktouchstart = reinterpret_cast<AtomicString*>(&names_storage)[194];
thread_local const AtomicString& ktransitioncancel = reinterpret_cast<AtomicString*>(&names_storage)[195];
thread_local const AtomicString& ktransitionend = reinterpret_cast<AtomicString*>(&names_storage)[196];
thread_local const AtomicString& ktransitionrun = reinterpret_cast<AtomicString*>(&names_storage)[197];
thread_local const AtomicString& ktransitionstart = reinterpret_cast<AtomicString*>(&names_storage)[198];
thread_local const AtomicString& ktypechange = reinterpret_cast<AtomicString*>(&names_storage)[199];
thread_local const AtomicString& kuncapturederror = reinterpret_cast<AtomicString*>(&names_storage)[200];
thread_local const AtomicString& kunhandledrejection = reinterpret_cast<AtomicString*>(&names_storage)[201];
thread_local const AtomicString& kunload = reinterpret_cast<AtomicString*>(&names_storage)[202];
thread_local const AtomicString& kunmute = reinterpret_cast<AtomicString*>(&names_storage)[203];
thread_local const AtomicString& kupdate = reinterpret_cast<AtomicString*>(&names_storage)[204];
thread_local const AtomicString& kversionchange = reinterpret_cast<AtomicString*>(&names_storage)[205];
thread_local const AtomicString& kvisibilitychange = reinterpret_cast<AtomicString*>(&names_storage)[206];
thread_local const AtomicString& kwaiting = reinterpret_cast<AtomicString*>(&names_storage)[207];
thread_local const AtomicString& kwaitingforkey = reinterpret_cast<AtomicString*>(&names_storage)[208];
thread_local const AtomicString& kwebglcontextcreationerror = reinterpret_cast<AtomicString*>(&names_storage)[209];
thread_local const AtomicString& kwebglcontextlost = reinterpret_cast<AtomicString*>(&names_storage)[210];
thread_local const AtomicString& kwebglcontextrestored = reinterpret_cast<AtomicString*>(&names_storage)[211];
thread_local const AtomicString& kwheel = reinterpret_cast<AtomicString*>(&names_storage)[212];
thread_local const AtomicString& kzoom = reinterpret_cast<AtomicString*>(&names_storage)[213];
thread_local const AtomicString& kintersectionchange = reinterpret_cast<AtomicString*>(&names_storage)[214];
thread_local const AtomicString& kgcopen = reinterpret_cast<AtomicString*>(&names_storage)[215];
thread_local const AtomicString& khybridrouterchange = reinterpret_cast<AtomicString*>(&names_storage)[216];
void Init(JSContext* ctx) {
  struct NameEntry {
      const char* str;
   };
  static const NameEntry kNames[] = {
          { "DOMActivate" },
          { "DOMCharacterDataModified" },
          { "DOMContentLoaded" },
          { "DOMFocusIn" },
          { "DOMFocusOut" },
          { "DOMNodeInserted" },
          { "DOMNodeInsertedIntoDocument" },
          { "DOMNodeRemoved" },
          { "DOMNodeRemovedFromDocument" },
          { "DOMSubtreeModified" },
          { "abort" },
          { "abortpayment" },
          { "activate" },
          { "active" },
          { "addsourcebuffer" },
          { "addtrack" },
          { "animationcancel" },
          { "animationend" },
          { "animationiteration" },
          { "animationstart" },
          { "backgroundfetchabort" },
          { "backgroundfetchclick" },
          { "backgroundfetchfail" },
          { "backgroundfetchsuccess" },
          { "beforeunload" },
          { "beginEvent" },
          { "blocked" },
          { "blur" },
          { "boundary" },
          { "cached" },
          { "cancel" },
          { "canplay" },
          { "canplaythrough" },
          { "capturehandlechange" },
          { "change" },
          { "checking" },
          { "click" },
          { "dbclick" },
          { "longpress" },
          { "close" },
          { "closing" },
          { "complete" },
          { "gotpointercapture" },
          { "compositionend" },
          { "compositionstart" },
          { "compositionupdate" },
          { "connect" },
          { "contextlost" },
          { "contextmenu" },
          { "contextrestored" },
          { "controllerchange" },
          { "cookiechange" },
          { "copy" },
          { "contentdelete" },
          { "crossoriginmessage" },
          { "currentscreenchange" },
          { "cuechange" },
          { "currententrychange" },
          { "cut" },
          { "datachannel" },
          { "dblclick" },
          { "defaultsessionstart" },
          { "disconnect" },
          { "display" },
          { "drop" },
          { "durationchange" },
          { "emptied" },
          { "encrypted" },
          { "end" },
          { "ended" },
          { "endEvent" },
          { "enter" },
          { "error" },
          { "exit" },
          { "fetch" },
          { "finish" },
          { "focus" },
          { "focusin" },
          { "focusout" },
          { "freeze" },
          { "fullscreenchange" },
          { "fullscreenerror" },
          { "hashchange" },
          { "hide" },
          { "inactive" },
          { "input" },
          { "inputreport" },
          { "inputsourceschange" },
          { "install" },
          { "interfacerequest" },
          { "invalid" },
          { "keydown" },
          { "keypress" },
          { "keystatuseschange" },
          { "keyup" },
          { "languagechange" },
          { "leavepictureinpicture" },
          { "levelchange" },
          { "load" },
          { "loadeddata" },
          { "loadedmetadata" },
          { "loadend" },
          { "loading" },
          { "loadstart" },
          { "lostpointercapture" },
          { "mark" },
          { "message" },
          { "messageerror" },
          { "mousedown" },
          { "mouseenter" },
          { "mouseleave" },
          { "mousemove" },
          { "mouseout" },
          { "mouseover" },
          { "mouseup" },
          { "mousewheel" },
          { "mute" },
          { "navigate" },
          { "navigateerror" },
          { "navigatesuccess" },
          { "noupdate" },
          { "open" },
          { "orientationchange" },
          { "overscroll" },
          { "pagehide" },
          { "pageshow" },
          { "paste" },
          { "pause" },
          { "play" },
          { "playing" },
          { "pointercancel" },
          { "pointerdown" },
          { "pointerenter" },
          { "pointerleave" },
          { "pointerlockchange" },
          { "pointerlockerror" },
          { "pointermove" },
          { "pointerout" },
          { "pointerover" },
          { "pointerup" },
          { "gesturestart" },
          { "gesturechange" },
          { "gestureend" },
          { "popstate" },
          { "progress" },
          { "processorerror" },
          { "push" },
          { "pushsubscriptionchange" },
          { "ratechange" },
          { "reading" },
          { "readingerror" },
          { "readystatechange" },
          { "reflectionchange" },
          { "rejectionhandled" },
          { "release" },
          { "remove" },
          { "removestream" },
          { "removetrack" },
          { "repeatEvent" },
          { "reset" },
          { "resize" },
          { "result" },
          { "resume" },
          { "screenschange" },
          { "scroll" },
          { "scrollend" },
          { "search" },
          { "seeked" },
          { "seeking" },
          { "select" },
          { "selectionchange" },
          { "selectstart" },
          { "show" },
          { "squeeze" },
          { "squeezeend" },
          { "squeezestart" },
          { "stalled" },
          { "start" },
          { "stop" },
          { "statechange" },
          { "storage" },
          { "submit" },
          { "success" },
          { "suspend" },
          { "sync" },
          { "terminate" },
          { "textInput" },
          { "textupdate" },
          { "textformatupdate" },
          { "toggle" },
          { "tonechange" },
          { "touchcancel" },
          { "touchend" },
          { "touchmove" },
          { "touchstart" },
          { "transitioncancel" },
          { "transitionend" },
          { "transitionrun" },
          { "transitionstart" },
          { "typechange" },
          { "uncapturederror" },
          { "unhandledrejection" },
          { "unload" },
          { "unmute" },
          { "update" },
          { "versionchange" },
          { "visibilitychange" },
          { "waiting" },
          { "waitingforkey" },
          { "webglcontextcreationerror" },
          { "webglcontextlost" },
          { "webglcontextrestored" },
          { "wheel" },
          { "zoom" },
          { "intersectionchange" },
          { "gcopen" },
          { "hybridrouterchange" },
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