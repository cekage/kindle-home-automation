
-----

## Provider CVM
```
#define MAGIC_CVM  0x5b6d7663 // in string : '    cvm[' (4 car)
```
```
/*
  Exemple:
  cvm[1234]: D DeviceSSLSocketFactroy:DebugInfo::cachedCiphers

*/
void process_devicess(const char** line) {
	const uint64_t MAGIC = 0x5353656369766544; // in string : 'DeviceSS' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D KindleHttpsURLStreamHandler:DebugInfo::No registered URLStreamHandlerDelegate was found, will return PBP's default connection as created by sun.net.www.protocol.https.Handler

*/
void process_kindleht(const char** line) {
	const uint64_t MAGIC = 0x7448656c646e694b; // in string : 'KindleHt' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D WirelessImpl:DebugInfo::Setting proxy info

*/
void process_wireless(const char** line) {
	const uint64_t MAGIC = 0x7373656c65726957; // in string : 'Wireless' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I UDLStorageImpl:MetaDataSync:type=full,time=2015-08-20T19_41_44+0000;softwareVersion_2692310002;SE_F;SC_F;ST_KB-15000000000023_KP-15000000000009_Periodical-1440099705008_,added=23,removed=0:

*/
void process_udlstora(const char** line) {
	const uint64_t MAGIC = 0x61726f74534c4455; // in string : 'UDLStora' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D RepaintInstructionQueue:DebugInfo::**********************com.amazon.ebook.booklet.reader.d.h@fd492

*/
void process_repainti(const char** line) {
	const uint64_t MAGIC = 0x49746e6961706552; // in string : 'RepaintI' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: P SortFriendlyTitleFormat:PerfDump:id=getInstance,time=0,type=relative,abs-time=1439881870920,start-time=1439881870920:fr_FR

*/
void process_sortfrie(const char** line) {
	const uint64_t MAGIC = 0x6569724674726f53; // in string : 'SortFrie' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D SyncPositionCache:DebugInfo::get key_3258236f-e9de-416b-bb6f-ed462cd2b1d0-type_EBOK=null

*/
void process_syncposi(const char** line) {
	const uint64_t MAGIC = 0x69736f50636e7953; // in string : 'SyncPosi' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I LipcService:EventArrived:source=com.lab126.hal,name=wanRing,arg0=3,arg1=<None>:

*/
void process_lipcserv(const char** line) {
	const uint64_t MAGIC = 0x767265536370694c; // in string : 'LipcServ' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: P ReadingModeView:PerfDump:id=drawPage,time=85,type=relative,abs-time=1439879724877,start-time=1439879724792:

*/
void process_readingm(const char** line) {
	const uint64_t MAGIC = 0x4d676e6964616552; // in string : 'ReadingM' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I HTMLJsonSidecarFile:Information::Delayed Write to sidecar file

*/
void process_htmljson(const char** line) {
	const uint64_t MAGIC = 0x6e6f734a4c4d5448; // in string : 'HTMLJson' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D UnicodeUtil:DebugInfo::chomp: 0 158 158

*/
void process_unicodeu(const char** line) {
	const uint64_t MAGIC = 0x5565646f63696e55; // in string : 'UnicodeU' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D SocialClipping:DebugInfo::Version: 0

*/
void process_socialcl(const char** line) {
	const uint64_t MAGIC = 0x6c436c6169636f53; // in string : 'SocialCl' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I VersionManagerImpl:UpdatingSilently::

*/
void process_versionm(const char** line) {
	const uint64_t MAGIC = 0x4d6e6f6973726556; // in string : 'VersionM' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: P DictionaryLookupFormat:PerfDump:id=getInstance,time=0,type=relative,abs-time=1439881132656,start-time=1439881132656:fr

*/
void process_dictiona(const char** line) {
	const uint64_t MAGIC = 0x616e6f6974636944; // in string : 'Dictiona' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I lipc:gsp:prop=macAddress, source=com.lab126.wifid:Get string property

*/
void process_lipc_gsp(const char** line) {
	const uint64_t MAGIC = 0x7073673a6370696c; // in string : 'lipc:gsp' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I DBus:AddingEventToQueue:src=com.lab126.hal,name=wanRing,time=1439926572222:

*/
void process_dbus_add(const char** line) {
	const uint64_t MAGIC = 0x6464413a73754244; // in string : 'DBus:Add' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D RegistrationInfoImpl:DebugInfo::RegistrationInfoImpl.read

*/
void process_registra(const char** line) {
	const uint64_t MAGIC = 0x6172747369676552; // in string : 'Registra' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I Reader:SYNC LPR:position=182264:Send LPR to server

*/
void process_reader_s(const char** line) {
	const uint64_t MAGIC = 0x533a726564616552; // in string : 'Reader:S' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: P SelectionUtil:PerfDump:id=drawSelection,time=0,type=relative,abs-time=1439879698325,start-time=1439879698325:

*/
void process_selectio(const char** line) {
	const uint64_t MAGIC = 0x6f697463656c6553; // in string : 'Selectio' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I Marketplace:Information::retrieved value from dynamic config for key=url.myk

*/
void process_marketpl(const char** line) {
	const uint64_t MAGIC = 0x6c7074656b72614d; // in string : 'Marketpl' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D CharsetDetectorAdapter:DebugInfo::found: UTF-8

*/
void process_charsetd(const char** line) {
	const uint64_t MAGIC = 0x4474657372616843; // in string : 'CharsetD' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D LanguageTagData:DebugInfo::getInstance

*/
void process_language(const char** line) {
	const uint64_t MAGIC = 0x65676175676e614c; // in string : 'Language' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D Reader:DebugInfo::closeBook() enters...

*/
void process_reader_d(const char** line) {
	const uint64_t MAGIC = 0x443a726564616552; // in string : 'Reader:D' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D DailyScreensaverAdRotationController:DebugInfo::DailyScreensaverAdRotation is paused. Not setting device wakeup.

*/
void process_dailyscr(const char** line) {
	const uint64_t MAGIC = 0x726353796c696144; // in string : 'DailyScr' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I Search:PURGING_INDEX_START:book=y82139192af6d2361db4128652262e30f:

*/
void process_search_p(const char** line) {
	const uint64_t MAGIC = 0x503a686372616553; // in string : 'Search:P' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D ReaderGUI:DebugInfo::Exiting drawPage() }}}

*/
void process_readergu(const char** line) {
	const uint64_t MAGIC = 0x5547726564616552; // in string : 'ReaderGU' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D FrameBufferManagerImpl:DebugInfo::forceUpdate()

*/
void process_framebuf(const char** line) {
	const uint64_t MAGIC = 0x667542656d617246; // in string : 'FrameBuf' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D EventRegistrar:DebugInfo::Callback time:0

*/
void process_eventreg(const char** line) {
	const uint64_t MAGIC = 0x676552746e657645; // in string : 'EventReg' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D SystemBarImpl:DebugInfo::drawWindow paint called

*/
void process_systemba(const char** line) {
	const uint64_t MAGIC = 0x61426d6574737953; // in string : 'SystemBa' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I lipc:gip:prop=userstoreFreeSpace, source=com.lab126.volumd:Get int property

*/
void process_lipc_gip(const char** line) {
	const uint64_t MAGIC = 0x7069673a6370696c; // in string : 'lipc:gip' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D CatalogUtil:DebugInfo::compareLastAccessTime: time2 is 0

*/
void process_catalogu(const char** line) {
	const uint64_t MAGIC = 0x55676f6c61746143; // in string : 'CatalogU' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I MainView:Information::The WiFi dialog has been previously shown.

*/
void process_mainview(const char** line) {
	const uint64_t MAGIC = 0x776569566e69614d; // in string : 'MainView' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: P ActivityInterruptor:ResetTime:id=stopActivity(),abs-time=1439885436243:reset timer to zero

*/
void process_activity(const char** line) {
	const uint64_t MAGIC = 0x7974697669746341; // in string : 'Activity' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D PDFBookViewer:DebugInfo::Exiting stopActivity }}}

*/
void process_pdfbookv(const char** line) {
	const uint64_t MAGIC = 0x566b6f6f42464450; // in string : 'PDFBookV' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D HTMLBookViewer:DebugInfo::nextPage enter into

*/
void process_htmlbook(const char** line) {
	const uint64_t MAGIC = 0x6b6f6f424c4d5448; // in string : 'HTMLBook' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: P ReaderState:PerfDump:id=readObject,time=2,type=relative,abs-time=1439881142662,start-time=1439881142660:

*/
void process_readerst(const char** line) {
	const uint64_t MAGIC = 0x7453726564616552; // in string : 'ReaderSt' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I Search:CHECKING_FREE_SPACE:path=/mnt/us/documents,KB=1225544:

*/
void process_search_c(const char** line) {
	const uint64_t MAGIC = 0x433a686372616553; // in string : 'Search:C' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D ThreadPool:DebugInfo::run: com.lab126.linux.arm.u@6717db61

*/
void process_threadpo(const char** line) {
	const uint64_t MAGIC = 0x6f50646165726854; // in string : 'ThreadPo' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: E SystemServiceImpl:UnhandledEvent:event=usbPlugOut:HAL Event

*/
void process_systemse(const char** line) {
	const uint64_t MAGIC = 0x65536d6574737953; // in string : 'SystemSe' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D OverlayImpl:DebugInfo::addOverlay  KWindow#21 class: .CursorOptionsOverlay$1 depth 256 isVisible=true

*/
void process_overlayi(const char** line) {
	const uint64_t MAGIC = 0x4979616c7265764f; // in string : 'OverlayI' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D MobiLookup:DebugInfo::dictionaryInUse is null

*/
void process_mobilook(const char** line) {
	const uint64_t MAGIC = 0x6b6f6f4c69626f4d; // in string : 'MobiLook' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D TextArea:DebugInfo::Lines required=3

*/
void process_textarea(const char** line) {
	const uint64_t MAGIC = 0x6165724174786554; // in string : 'TextArea' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: P Reader:PerfDump:id=openItem,time=622,type=relative,abs-time=1440023902011,start-time=1440023901389:

*/
void process_reader_p(const char** line) {
	const uint64_t MAGIC = 0x503a726564616552; // in string : 'Reader:P' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D ScreenImpl:DebugInfo::ScreenImpl.paint end

*/
void process_screenim(const char** line) {
	const uint64_t MAGIC = 0x6d496e6565726353; // in string : 'ScreenIm' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I lipc:evts:name=todoCompleted, origin=com.lab126.framework:Event sent

*/
void process_lipc_evt(const char** line) {
	const uint64_t MAGIC = 0x7476653a6370696c; // in string : 'lipc:evt' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D SSLClient:DebugInfo::SSLClient.openConnection url = https://todo-g7g.amazon.com/FionaTodoListProxy/removeItems?currentTransportMethod=WIFI&currentMCC=&currentSponsoredHotspot=

*/
void process_sslclien(const char** line) {
	const uint64_t MAGIC = 0x6e65696c434c5353; // in string : 'SSLClien' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D Base64:DebugInfo::Base64.encodeBytes : not compressing

*/
void process_base64_d(const char** line) {
	const uint64_t MAGIC = 0x443a343665736142; // in string : 'Base64:D' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: P NoteDrawer:PerfDump:id=drawNotesAndSubscribedNotes,time=2,type=relative,abs-time=1439881874069,start-time=1439881874067:

*/
void process_notedraw(const char** line) {
	const uint64_t MAGIC = 0x7761724465746f4e; // in string : 'NoteDraw' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D TextWidget:DebugInfo::Exiting symbol menu

*/
void process_textwidg(const char** line) {
	const uint64_t MAGIC = 0x6764695774786554; // in string : 'TextWidg' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D Socializer:DebugInfo::Sharing enabled: true

*/
void process_socializ(const char** line) {
	const uint64_t MAGIC = 0x7a696c6169636f53; // in string : 'Socializ' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D Cookies:DebugInfo::Cookies: x-fsn=3GB6kiDl6pHr0dFY95Be7mQ3C1ZCDJaxoHnNMJD4EuSGaTdO4HBSsWuHPS/lD5Imty8De9oIL+K1IPz0RZKN61mhBW8DdUTpwliPAaZ1R9uMA5ncPMEnheLRcjH4yX6/uqmnOi7638jX3H7YxMk20dXANU+rayiX

*/
void process_cookies_(const char** line) {
	const uint64_t MAGIC = 0x3a7365696b6f6f43; // in string : 'Cookies:' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D ElementsCache:DebugInfo::PageContentElementsCursorHandler.repairCursors(): set dirty bit

*/
void process_elements(const char** line) {
	const uint64_t MAGIC = 0x73746e656d656c45; // in string : 'Elements' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D EventManagerImpl:DebugInfo::Callback time:0

*/
void process_eventman(const char** line) {
	const uint64_t MAGIC = 0x6e614d746e657645; // in string : 'EventMan' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: P MetadataController:PerfDump:id=getEndActions,time=4,type=relative,abs-time=1439879698080,start-time=1439879698076:

*/
void process_metadata(const char** line) {
	const uint64_t MAGIC = 0x617461646174654d; // in string : 'Metadata' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I Search:TITLE_LANGUAGE:language=title language is fr:

*/
void process_search_t(const char** line) {
	const uint64_t MAGIC = 0x543a686372616553; // in string : 'Search:T' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I lipc:ssp:prop=ensureConnection, source=com.lab126.cmd:Set string property

*/
void process_lipc_ssp(const char** line) {
	const uint64_t MAGIC = 0x7073733a6370696c; // in string : 'lipc:ssp' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: P Reader:ResetTime:id=goToNextPage,abs-time=1439879724638:reset timer to zero

*/
void process_reader_r(const char** line) {
	const uint64_t MAGIC = 0x523a726564616552; // in string : 'Reader:R' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D Search:DebugInfo::PowerStateEvent - 2

*/
void process_search_d(const char** line) {
	const uint64_t MAGIC = 0x443a686372616553; // in string : 'Search:D' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D ScreenSaverBooklet:DebugInfo::getMainWindow()

*/
void process_screensa(const char** line) {
	const uint64_t MAGIC = 0x61536e6565726353; // in string : 'ScreenSa' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I SupplementarInfoBox:QUICK_LOOKUP:asin=3258236f-e9de-416b-bb6f-ed462cd2b1d0,word=:

*/
void process_suppleme(const char** line) {
	const uint64_t MAGIC = 0x656d656c70707553; // in string : 'Suppleme' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D RepaintQuickPreviewInstruction:DebugInfo::RepaintQuickPreviewInstruction End: 1439881133795

*/
void process_repaintq(const char** line) {
	const uint64_t MAGIC = 0x51746e6961706552; // in string : 'RepaintQ' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: P Profiler:ResetTime:id=Home profiler,abs-time=1439879679400:reset timer to zero

*/
void process_profiler(const char** line) {
	const uint64_t MAGIC = 0x72656c69666f7250; // in string : 'Profiler' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I BaseCursorHandler:USER_SOFTKEY_PRESS:KeyPressed=sauvegarder:User pressed sauvegarder

*/
void process_basecurs(const char** line) {
	const uint64_t MAGIC = 0x7372754365736142; // in string : 'BaseCurs' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I HTTPUtil:clearDNSCache:cache_size=0:clearing DNS cacheMap

*/
void process_httputil(const char** line) {
	const uint64_t MAGIC = 0x6c69745550545448; // in string : 'HTTPUtil' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: P HighlightOverlayModel:PerfDump:id=updateForNewPage,time=4,type=relative,abs-time=1439879698321,start-time=1439879698317:

*/
void process_highligh(const char** line) {
	const uint64_t MAGIC = 0x6867696c68676948; // in string : 'Highligh' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D CommunicationManagerImpl:DebugInfo::req getContents

*/
void process_communic(const char** line) {
	const uint64_t MAGIC = 0x63696e756d6d6f43; // in string : 'Communic' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: P PageNumberProviderFactory:PerfDump:id=APNX TOP - locateProvider(),time=2,type=relative,abs-time=1439879698084,start-time=1439879698082:cached

*/
void process_pagenumb(const char** line) {
	const uint64_t MAGIC = 0x626d754e65676150; // in string : 'PageNumb' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I PrefixFreeVolume:ForceRescan:path=/mnt/us/pictures:

*/
void process_prefixfr(const char** line) {
	const uint64_t MAGIC = 0x7246786966657250; // in string : 'PrefixFr' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I WebServicesImpl:UploadAnnotations::first journal empty

*/
void process_webservi(const char** line) {
	const uint64_t MAGIC = 0x6976726553626557; // in string : 'WebServi' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D DeviceService:DebugInfo::RuntimeExec sync = true : command = /usr/bin/process_update

*/
void process_devicese(const char** line) {
	const uint64_t MAGIC = 0x6553656369766544; // in string : 'DeviceSe' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I URLUtil:UpdateGlobalsTrace::after updating the map

*/
void process_urlutil_(const char** line) {
	const uint64_t MAGIC = 0x3a6c6974554c5255; // in string : 'URLUtil:' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: W WifiServiceImpl:UnhandledEvent:event=cmConnected:

*/
void process_wifiserv(const char** line) {
	const uint64_t MAGIC = 0x7672655369666957; // in string : 'WifiServ' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I Reader:Information::Reader.loadState()

*/
void process_reader_i(const char** line) {
	const uint64_t MAGIC = 0x493a726564616552; // in string : 'Reader:I' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D TextUtils:DebugInfo::U:pos:13:width:172:size:165:Emmanuel Carr…

*/
void process_textutil(const char** line) {
	const uint64_t MAGIC = 0x6c69745574786554; // in string : 'TextUtil' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D ManagerImpl:DebugInfo::switchBookletInternal Home

*/
void process_manageri(const char** line) {
	const uint64_t MAGIC = 0x49726567616e614d; // in string : 'ManagerI' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D SSBaseWindow:DebugInfo::SS new image cached

*/
void process_ssbasewi(const char** line) {
	const uint64_t MAGIC = 0x6957657361425353; // in string : 'SSBaseWi' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D MainUIContainer:DebugInfo::MainUIContainer.paint __START__  booklet is Home

*/
void process_mainuico(const char** line) {
	const uint64_t MAGIC = 0x6f4349556e69614d; // in string : 'MainUICo' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I Reader:BOOK INFO:book asin=3258236f-e9de-416b-bb6f-ed462cd2b1d0,file size=1701952,file last mod date=2015-08-16 14.06.20 -0719,content type=ebook,length=HTMLPosition_ 940679,access=2015-08-17 01.48.10 -0719,last read position=HTMLPosition_ 180056,isEncrypted=false,isSample=false,isNew=false,isTTSMetdataPresent=false,isTTSMetadataAllowed=true,fileExtn=azw3:

*/
void process_reader_b(const char** line) {
	const uint64_t MAGIC = 0x423a726564616552; // in string : 'Reader:B' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D CatalogItemImpl:DebugInfo::isFavorite = false

*/
void process_catalogi(const char** line) {
	const uint64_t MAGIC = 0x49676f6c61746143; // in string : 'CatalogI' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D CdeAndTodoPlug:DebugInfo::Response from todo: <?xml version="1.0" encoding="UTF-8"?>

*/
void process_cdeandto(const char** line) {
	const uint64_t MAGIC = 0x6f54646e41656443; // in string : 'CdeAndTo' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I Search:INDEXING_THREAD_FINISH:milliseconds=4173:

*/
void process_search_i(const char** line) {
	const uint64_t MAGIC = 0x493a686372616553; // in string : 'Search:I' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D HTMLSSVPageElementReader:DebugInfo::No more data in page element file.

*/
void process_htmlssvp(const char** line) {
	const uint64_t MAGIC = 0x505653534c4d5448; // in string : 'HTMLSSVP' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D WindowManagerImpl:LOG::compositor(KContainerAdapter)

*/
void process_windowma(const char** line) {
	const uint64_t MAGIC = 0x614d776f646e6957; // in string : 'WindowMa' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: E PowerImpl:UnknownPowerEvent:event=10:

*/
void process_powerimp(const char** line) {
	const uint64_t MAGIC = 0x706d497265776f50; // in string : 'PowerImp' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D NamedCollectionImpl:DebugInfo::Cannot resolve:9dabdc03-04c7-4ba7-b361-e64526ddd7f5

*/
void process_namedcol(const char** line) {
	const uint64_t MAGIC = 0x6c6f4364656d614e; // in string : 'NamedCol' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I SettingsView:Information::The current view is not the Settings so skip refresh the WiFi widget

*/
void process_settings(const char** line) {
	const uint64_t MAGIC = 0x73676e6974746553; // in string : 'Settings' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D HTMLRenderer:DebugInfo::Processing command

*/
void process_htmlrend(const char** line) {
	const uint64_t MAGIC = 0x646e65524c4d5448; // in string : 'HTMLRend' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: P PowerService:PerfDump:id=HandlePowerEvent,time=8,type=relative,abs-time=1439880448999,start-time=1439880448991:event processed

*/
void process_powerser(const char** line) {
	const uint64_t MAGIC = 0x7265537265776f50; // in string : 'PowerSer' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: P SymbolPopup:PerfDump:id=DrawPerf,time=58,type=relative,abs-time=1439881841689,start-time=1439881841631:draw done

*/
void process_symbolpo(const char** line) {
	const uint64_t MAGIC = 0x6f506c6f626d7953; // in string : 'SymbolPo' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: P AnnotationsCache:PerfDump:id=getAnnotations(int) for type 2,time=0,type=relative,abs-time=1439879698054,start-time=1439879698054:

*/
void process_annotati(const char** line) {
	const uint64_t MAGIC = 0x697461746f6e6e41; // in string : 'Annotati' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: <response><total_count>1</total_count><next_pull_time>20150819 19:36:20</next_pull_time><items><item priority="1600" type="MESG" action="UPLOAD" key="NONE" is_incremental="false" sequence="0" url="https://device-messaging-na.amazon.com/PostDeviceMessages"/></items></response>

*/
void process_esponse>(const char** line) {
	const uint64_t MAGIC = 0x3e65736e6f707365; // in string : 'esponse>' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D PL-Mario-FrameBuffer:DebugInfo::Calling sendFullScreenUpdate (flash)

*/
void process_pl_mario(const char** line) {
	const uint64_t MAGIC = 0x6f6972614d2d4c50; // in string : 'PL-Mario' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D MobiBookViewer:DebugInfo::We are returning a special MyClippingsBook instance...

*/
void process_mobibook(const char** line) {
	const uint64_t MAGIC = 0x6b6f6f4269626f4d; // in string : 'MobiBook' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D WordFilter:DebugInfo::initCollator: fr-FR 1

*/
void process_wordfilt(const char** line) {
	const uint64_t MAGIC = 0x746c694664726f57; // in string : 'WordFilt' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I BookletManager:SwitchingBooklets:from=Home,to=Bookworm:

*/
void process_bookletm(const char** line) {
	const uint64_t MAGIC = 0x4d74656c6b6f6f42; // in string : 'BookletM' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: E SyslogFormatter:FormatError:err-component=PreDeleteAction,err-id=USER LEFT FLICK TO DELETE,err-msg=:Argument Value Mismatch

*/
void process_syslogfo(const char** line) {
	const uint64_t MAGIC = 0x6f46676f6c737953; // in string : 'SyslogFo' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: W mwin:is_valid_blit:height <= 0,height=-8:DriverBasedGraphicsEngine blit skipped

*/
void process_mwin_is_(const char** line) {
	const uint64_t MAGIC = 0x5f73693a6e69776d; // in string : 'mwin:is_' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D PageContentElementsCursorHandler:DebugInfo::updateCursor() Start:

*/
void process_pagecont(const char** line) {
	const uint64_t MAGIC = 0x746e6f4365676150; // in string : 'PageCont' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D HistoryManagerImpl:DebugInfo::HistoryStorage.removeRange:0,-8

*/
void process_historym(const char** line) {
	const uint64_t MAGIC = 0x4d79726f74736948; // in string : 'HistoryM' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: W UDLParser:UnknownTag:tag=content_size:

*/
void process_udlparse(const char** line) {
	const uint64_t MAGIC = 0x65737261504c4455; // in string : 'UDLParse' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D StorageImpl:DebugInfo::getFreeSpace 1225816

*/
void process_storagei(const char** line) {
	const uint64_t MAGIC = 0x49656761726f7453; // in string : 'StorageI' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D UDLComm:DebugInfo::CdeAndTodoPlug.syncMetaData http rc: 200

*/
void process_udlcomm_(const char** line) {
	const uint64_t MAGIC = 0x3a6d6d6f434c4455; // in string : 'UDLComm:' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: P ReaderContentHandler:PerfDump:id=getSimpleReaderContentWidget,time=42,type=relative,abs-time=1439879681322,start-time=1439879681280:

*/
void process_readerco(const char** line) {
	const uint64_t MAGIC = 0x6f43726564616552; // in string : 'ReaderCo' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I Keyboard:Information::Keyboard opened

*/
void process_keyboard(const char** line) {
	const uint64_t MAGIC = 0x6472616f6279654b; // in string : 'Keyboard' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D KWindow:DebugInfo::wMInitializeFinished()

*/
void process_kwindow_(const char** line) {
	const uint64_t MAGIC = 0x3a776f646e69574b; // in string : 'KWindow:' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D RepositoryController:DebugInfo::sortListByPubDate()

*/
void process_reposito(const char** line) {
	const uint64_t MAGIC = 0x6f7469736f706552; // in string : 'Reposito' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I GUIManager:HomeViewSwitch:view=HomeView:

*/
void process_guimanag(const char** line) {
	const uint64_t MAGIC = 0x67616e614d495547; // in string : 'GUIManag' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D TextAndHTMLPDB:DebugInfo::Mes extraits

*/
void process_textandh(const char** line) {
	const uint64_t MAGIC = 0x48646e4174786554; // in string : 'TextAndH' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: <response syncType="update" encryptedFionaAccountId="A129Z8BQSL52JD"><sync_time>2015-08-18T19:36:20+0000;softwareVersion:2540270001;SE:F;SC:F;ST:KP-15000000000009,Periodical-1439926580275,KB-15000000000023,</sync_time><annotation_sync_status>1</annotation_sync_status><min_sync_metadata_request_interval>300</min_sync_metadata_request_interval><min_todo_item_request_interval>300</min_todo_item_request_interval><log_upload_status>0</log_upload_status><collection_upload_interval_secs>45</collection_upload_interval_secs><add_update_list/><removal_list/></response>

*/
void process_esponse_(const char** line) {
	const uint64_t MAGIC = 0x2065736e6f707365; // in string : 'esponse ' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I FrameworkKeyEventDispatcher:USER_HARDKEY_PRESS:KeyPressed=Back:User pressed Back button

*/
void process_framewor(const char** line) {
	const uint64_t MAGIC = 0x726f77656d617246; // in string : 'Framewor' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I ApplicationNetworkBlacklist:adjustExpirationDatesInfo:millisecondsOffset=1000:ExpirationDatesAdjustment

*/
void process_applicat(const char** line) {
	const uint64_t MAGIC = 0x746163696c707041; // in string : 'Applicat' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D UIManagerImpl:DebugInfo::dismissOverlay

*/
void process_uimanage(const char** line) {
	const uint64_t MAGIC = 0x6567616e614d4955; // in string : 'UIManage' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: I ConnectionService:EnsureConnectionCall:interface=:

*/
void process_connecti(const char** line) {
	const uint64_t MAGIC = 0x697463656e6e6f43; // in string : 'Connecti' (8 car)
…
}
```

```
/*
  Exemple:
  cvm[1234]: D TaskProcess:DebugInfo::Scheduling todo list thread

*/
void process_taskproc(const char** line) {
	const uint64_t MAGIC = 0x636f72506b736154; // in string : 'TaskProc' (8 car)
…
}
```

