
-----

## Provider LIPC_SEN
```
#define MAGIC_LIPC_SEN  0x6e65732d6370696c // in string : 'lipc-sen' (8 car)
```
```
void process_lipc_evt(const char** line) {
	const uint64_t MAGIC = 0x7476653a6370696c; // in string : 'lipc:evt' (8 car)
…
}
```

-----

## Provider POWERD
```
#define MAGIC_POWERD  0x5b647265776f70 // in string : ' powerd[' (7 car)
```
```
void process_def_batt(const char** line) {
	const uint64_t MAGIC = 0x747461623a666564; // in string : 'def:batt' (8 car)
…
}
```
```
void process_def_chrg(const char** line) {
	const uint64_t MAGIC = 0x677268633a666564; // in string : 'def:chrg' (8 car)
…
}
```
```
void process_def_defe(const char** line) {
	const uint64_t MAGIC = 0x656665643a666564; // in string : 'def:defe' (8 car)
…
}
```
```
void process_def_gss_(const char** line) {
	const uint64_t MAGIC = 0x3a7373673a666564; // in string : 'def:gss:' (8 car)
…
}
```
```
void process_def_pbpr(const char** line) {
	const uint64_t MAGIC = 0x727062703a666564; // in string : 'def:pbpr' (8 car)
…
}
```
```
void process_def_r2st(const char** line) {
	const uint64_t MAGIC = 0x747332723a666564; // in string : 'def:r2st' (8 car)
…
}
```
```
void process_def_rtcs(const char** line) {
	const uint64_t MAGIC = 0x736374723a666564; // in string : 'def:rtcs' (8 car)
…
}
```
```
void process_def_stat(const char** line) {
	const uint64_t MAGIC = 0x746174733a666564; // in string : 'def:stat' (8 car)
…
}
```
```
void process_def_susp(const char** line) {
	const uint64_t MAGIC = 0x707375733a666564; // in string : 'def:susp' (8 car)
…
}
```
```
void process_def_usbf(const char** line) {
	const uint64_t MAGIC = 0x666273753a666564; // in string : 'def:usbf' (8 car)
…
}
```
```
void process_lipc_evt(const char** line) {
	const uint64_t MAGIC = 0x7476653a6370696c; // in string : 'lipc:evt' (8 car)
…
}
```

-----

## Provider CVM
```
#define MAGIC_CVM  0x5b6d7663 // in string : '    cvm[' (4 car)
```
```
void process_annotati(const char** line) {
	const uint64_t MAGIC = 0x697461746f6e6e41; // in string : 'Annotati' (8 car)
…
}
```
```
void process_base64_d(const char** line) {
	const uint64_t MAGIC = 0x443a343665736142; // in string : 'Base64:D' (8 car)
…
}
```
```
void process_basecurs(const char** line) {
	const uint64_t MAGIC = 0x7372754365736142; // in string : 'BaseCurs' (8 car)
…
}
```
```
void process_bookletm(const char** line) {
	const uint64_t MAGIC = 0x4d74656c6b6f6f42; // in string : 'BookletM' (8 car)
…
}
```
```
void process_catalogi(const char** line) {
	const uint64_t MAGIC = 0x49676f6c61746143; // in string : 'CatalogI' (8 car)
…
}
```
```
void process_catalogu(const char** line) {
	const uint64_t MAGIC = 0x55676f6c61746143; // in string : 'CatalogU' (8 car)
…
}
```
```
void process_charsetd(const char** line) {
	const uint64_t MAGIC = 0x4474657372616843; // in string : 'CharsetD' (8 car)
…
}
```
```
void process_dbus_add(const char** line) {
	const uint64_t MAGIC = 0x6464413a73754244; // in string : 'DBus:Add' (8 car)
…
}
```
```
void process_dailyscr(const char** line) {
	const uint64_t MAGIC = 0x726353796c696144; // in string : 'DailyScr' (8 car)
…
}
```
```
void process_dictiona(const char** line) {
	const uint64_t MAGIC = 0x616e6f6974636944; // in string : 'Dictiona' (8 car)
…
}
```
```
void process_elements(const char** line) {
	const uint64_t MAGIC = 0x73746e656d656c45; // in string : 'Elements' (8 car)
…
}
```
```
void process_eventman(const char** line) {
	const uint64_t MAGIC = 0x6e614d746e657645; // in string : 'EventMan' (8 car)
…
}
```
```
void process_eventreg(const char** line) {
	const uint64_t MAGIC = 0x676552746e657645; // in string : 'EventReg' (8 car)
…
}
```
```
void process_framebuf(const char** line) {
	const uint64_t MAGIC = 0x667542656d617246; // in string : 'FrameBuf' (8 car)
…
}
```
```
void process_framewor(const char** line) {
	const uint64_t MAGIC = 0x726f77656d617246; // in string : 'Framewor' (8 car)
…
}
```
```
void process_htmlbook(const char** line) {
	const uint64_t MAGIC = 0x6b6f6f424c4d5448; // in string : 'HTMLBook' (8 car)
…
}
```
```
void process_htmlrend(const char** line) {
	const uint64_t MAGIC = 0x646e65524c4d5448; // in string : 'HTMLRend' (8 car)
…
}
```
```
void process_htmlssvp(const char** line) {
	const uint64_t MAGIC = 0x505653534c4d5448; // in string : 'HTMLSSVP' (8 car)
…
}
```
```
void process_httputil(const char** line) {
	const uint64_t MAGIC = 0x6c69745550545448; // in string : 'HTTPUtil' (8 car)
…
}
```
```
void process_highligh(const char** line) {
	const uint64_t MAGIC = 0x6867696c68676948; // in string : 'Highligh' (8 car)
…
}
```
```
void process_historym(const char** line) {
	const uint64_t MAGIC = 0x4d79726f74736948; // in string : 'HistoryM' (8 car)
…
}
```
```
void process_kwindow_(const char** line) {
	const uint64_t MAGIC = 0x3a776f646e69574b; // in string : 'KWindow:' (8 car)
…
}
```
```
void process_keyboard(const char** line) {
	const uint64_t MAGIC = 0x6472616f6279654b; // in string : 'Keyboard' (8 car)
…
}
```
```
void process_language(const char** line) {
	const uint64_t MAGIC = 0x65676175676e614c; // in string : 'Language' (8 car)
…
}
```
```
void process_lipcserv(const char** line) {
	const uint64_t MAGIC = 0x767265536370694c; // in string : 'LipcServ' (8 car)
…
}
```
```
void process_mainuico(const char** line) {
	const uint64_t MAGIC = 0x6f4349556e69614d; // in string : 'MainUICo' (8 car)
…
}
```
```
void process_manageri(const char** line) {
	const uint64_t MAGIC = 0x49726567616e614d; // in string : 'ManagerI' (8 car)
…
}
```
```
void process_metadata(const char** line) {
	const uint64_t MAGIC = 0x617461646174654d; // in string : 'Metadata' (8 car)
…
}
```
```
void process_mobibook(const char** line) {
	const uint64_t MAGIC = 0x6b6f6f4269626f4d; // in string : 'MobiBook' (8 car)
…
}
```
```
void process_mobilook(const char** line) {
	const uint64_t MAGIC = 0x6b6f6f4c69626f4d; // in string : 'MobiLook' (8 car)
…
}
```
```
void process_notedraw(const char** line) {
	const uint64_t MAGIC = 0x7761724465746f4e; // in string : 'NoteDraw' (8 car)
…
}
```
```
void process_overlayi(const char** line) {
	const uint64_t MAGIC = 0x4979616c7265764f; // in string : 'OverlayI' (8 car)
…
}
```
```
void process_pl_mario(const char** line) {
	const uint64_t MAGIC = 0x6f6972614d2d4c50; // in string : 'PL-Mario' (8 car)
…
}
```
```
void process_pagecont(const char** line) {
	const uint64_t MAGIC = 0x746e6f4365676150; // in string : 'PageCont' (8 car)
…
}
```
```
void process_pagenumb(const char** line) {
	const uint64_t MAGIC = 0x626d754e65676150; // in string : 'PageNumb' (8 car)
…
}
```
```
void process_powerimp(const char** line) {
	const uint64_t MAGIC = 0x706d497265776f50; // in string : 'PowerImp' (8 car)
…
}
```
```
void process_powerser(const char** line) {
	const uint64_t MAGIC = 0x7265537265776f50; // in string : 'PowerSer' (8 car)
…
}
```
```
void process_prefixfr(const char** line) {
	const uint64_t MAGIC = 0x7246786966657250; // in string : 'PrefixFr' (8 car)
…
}
```
```
void process_profiler(const char** line) {
	const uint64_t MAGIC = 0x72656c69666f7250; // in string : 'Profiler' (8 car)
…
}
```
```
void process_reader_b(const char** line) {
	const uint64_t MAGIC = 0x423a726564616552; // in string : 'Reader:B' (8 car)
…
}
```
```
void process_reader_d(const char** line) {
	const uint64_t MAGIC = 0x443a726564616552; // in string : 'Reader:D' (8 car)
…
}
```
```
void process_reader_i(const char** line) {
	const uint64_t MAGIC = 0x493a726564616552; // in string : 'Reader:I' (8 car)
…
}
```
```
void process_reader_p(const char** line) {
	const uint64_t MAGIC = 0x503a726564616552; // in string : 'Reader:P' (8 car)
…
}
```
```
void process_reader_r(const char** line) {
	const uint64_t MAGIC = 0x523a726564616552; // in string : 'Reader:R' (8 car)
…
}
```
```
void process_reader_s(const char** line) {
	const uint64_t MAGIC = 0x533a726564616552; // in string : 'Reader:S' (8 car)
…
}
```
```
void process_readerco(const char** line) {
	const uint64_t MAGIC = 0x6f43726564616552; // in string : 'ReaderCo' (8 car)
…
}
```
```
void process_readergu(const char** line) {
	const uint64_t MAGIC = 0x5547726564616552; // in string : 'ReaderGU' (8 car)
…
}
```
```
void process_readerst(const char** line) {
	const uint64_t MAGIC = 0x7453726564616552; // in string : 'ReaderSt' (8 car)
…
}
```
```
void process_readingm(const char** line) {
	const uint64_t MAGIC = 0x4d676e6964616552; // in string : 'ReadingM' (8 car)
…
}
```
```
void process_registra(const char** line) {
	const uint64_t MAGIC = 0x6172747369676552; // in string : 'Registra' (8 car)
…
}
```
```
void process_repainti(const char** line) {
	const uint64_t MAGIC = 0x49746e6961706552; // in string : 'RepaintI' (8 car)
…
}
```
```
void process_repaintq(const char** line) {
	const uint64_t MAGIC = 0x51746e6961706552; // in string : 'RepaintQ' (8 car)
…
}
```
```
void process_ssbasewi(const char** line) {
	const uint64_t MAGIC = 0x6957657361425353; // in string : 'SSBaseWi' (8 car)
…
}
```
```
void process_screenim(const char** line) {
	const uint64_t MAGIC = 0x6d496e6565726353; // in string : 'ScreenIm' (8 car)
…
}
```
```
void process_screensa(const char** line) {
	const uint64_t MAGIC = 0x61536e6565726353; // in string : 'ScreenSa' (8 car)
…
}
```
```
void process_search_c(const char** line) {
	const uint64_t MAGIC = 0x433a686372616553; // in string : 'Search:C' (8 car)
…
}
```
```
void process_search_d(const char** line) {
	const uint64_t MAGIC = 0x443a686372616553; // in string : 'Search:D' (8 car)
…
}
```
```
void process_search_i(const char** line) {
	const uint64_t MAGIC = 0x493a686372616553; // in string : 'Search:I' (8 car)
…
}
```
```
void process_search_p(const char** line) {
	const uint64_t MAGIC = 0x503a686372616553; // in string : 'Search:P' (8 car)
…
}
```
```
void process_search_t(const char** line) {
	const uint64_t MAGIC = 0x543a686372616553; // in string : 'Search:T' (8 car)
…
}
```
```
void process_selectio(const char** line) {
	const uint64_t MAGIC = 0x6f697463656c6553; // in string : 'Selectio' (8 car)
…
}
```
```
void process_settings(const char** line) {
	const uint64_t MAGIC = 0x73676e6974746553; // in string : 'Settings' (8 car)
…
}
```
```
void process_socialcl(const char** line) {
	const uint64_t MAGIC = 0x6c436c6169636f53; // in string : 'SocialCl' (8 car)
…
}
```
```
void process_socializ(const char** line) {
	const uint64_t MAGIC = 0x7a696c6169636f53; // in string : 'Socializ' (8 car)
…
}
```
```
void process_sortfrie(const char** line) {
	const uint64_t MAGIC = 0x6569724674726f53; // in string : 'SortFrie' (8 car)
…
}
```
```
void process_storagei(const char** line) {
	const uint64_t MAGIC = 0x49656761726f7453; // in string : 'StorageI' (8 car)
…
}
```
```
void process_suppleme(const char** line) {
	const uint64_t MAGIC = 0x656d656c70707553; // in string : 'Suppleme' (8 car)
…
}
```
```
void process_symbolpo(const char** line) {
	const uint64_t MAGIC = 0x6f506c6f626d7953; // in string : 'SymbolPo' (8 car)
…
}
```
```
void process_syncposi(const char** line) {
	const uint64_t MAGIC = 0x69736f50636e7953; // in string : 'SyncPosi' (8 car)
…
}
```
```
void process_systemba(const char** line) {
	const uint64_t MAGIC = 0x61426d6574737953; // in string : 'SystemBa' (8 car)
…
}
```
```
void process_systemse(const char** line) {
	const uint64_t MAGIC = 0x65536d6574737953; // in string : 'SystemSe' (8 car)
…
}
```
```
void process_textandh(const char** line) {
	const uint64_t MAGIC = 0x48646e4174786554; // in string : 'TextAndH' (8 car)
…
}
```
```
void process_textarea(const char** line) {
	const uint64_t MAGIC = 0x6165724174786554; // in string : 'TextArea' (8 car)
…
}
```
```
void process_textutil(const char** line) {
	const uint64_t MAGIC = 0x6c69745574786554; // in string : 'TextUtil' (8 car)
…
}
```
```
void process_textwidg(const char** line) {
	const uint64_t MAGIC = 0x6764695774786554; // in string : 'TextWidg' (8 car)
…
}
```
```
void process_threadpo(const char** line) {
	const uint64_t MAGIC = 0x6f50646165726854; // in string : 'ThreadPo' (8 car)
…
}
```
```
void process_uimanage(const char** line) {
	const uint64_t MAGIC = 0x6567616e614d4955; // in string : 'UIManage' (8 car)
…
}
```
```
void process_urlutil_(const char** line) {
	const uint64_t MAGIC = 0x3a6c6974554c5255; // in string : 'URLUtil:' (8 car)
…
}
```
```
void process_unicodeu(const char** line) {
	const uint64_t MAGIC = 0x5565646f63696e55; // in string : 'UnicodeU' (8 car)
…
}
```
```
void process_versionm(const char** line) {
	const uint64_t MAGIC = 0x4d6e6f6973726556; // in string : 'VersionM' (8 car)
…
}
```
```
void process_webservi(const char** line) {
	const uint64_t MAGIC = 0x6976726553626557; // in string : 'WebServi' (8 car)
…
}
```
```
void process_wifiserv(const char** line) {
	const uint64_t MAGIC = 0x7672655369666957; // in string : 'WifiServ' (8 car)
…
}
```
```
void process_windowma(const char** line) {
	const uint64_t MAGIC = 0x614d776f646e6957; // in string : 'WindowMa' (8 car)
…
}
```
```
void process_wireless(const char** line) {
	const uint64_t MAGIC = 0x7373656c65726957; // in string : 'Wireless' (8 car)
…
}
```
```
void process_wordfilt(const char** line) {
	const uint64_t MAGIC = 0x746c694664726f57; // in string : 'WordFilt' (8 car)
…
}
```
```
void process_lipc_gip(const char** line) {
	const uint64_t MAGIC = 0x7069673a6370696c; // in string : 'lipc:gip' (8 car)
…
}
```
```
void process_lipc_gsp(const char** line) {
	const uint64_t MAGIC = 0x7073673a6370696c; // in string : 'lipc:gsp' (8 car)
…
}
```
```
void process_mwin_is_(const char** line) {
	const uint64_t MAGIC = 0x5f73693a6e69776d; // in string : 'mwin:is_' (8 car)
…
}
```

-----

## Provider PMOND
```
#define MAGIC_PMOND  0x5b646e6f6d70 // in string : '  pmond[' (6 car)
```
```
void process_def_exit(const char** line) {
	const uint64_t MAGIC = 0x746978653a666564; // in string : 'def:exit' (8 car)
…
}
```
```
void process_def_gmem(const char** line) {
	const uint64_t MAGIC = 0x6d656d673a666564; // in string : 'def:gmem' (8 car)
…
}
```
```
void process_def_rst_(const char** line) {
	const uint64_t MAGIC = 0x3a7473723a666564; // in string : 'def:rst:' (8 car)
…
}
```

-----

## Provider SYSLOG_N
```
#define MAGIC_SYSLOG_N  0x6e2d676f6c737973 // in string : 'syslog-n' (8 car)
```
```
void process_ghup_rec(const char** line) {
	const uint64_t MAGIC = 0x6365722050554847; // in string : 'GHUP rec' (8 car)
…
}
```
```
void process_slog_ng_(const char** line) {
	const uint64_t MAGIC = 0x20676e2d676f6c73; // in string : 'slog-ng ' (8 car)
…
}
```
```
void process_ssage_le(const char** line) {
	const uint64_t MAGIC = 0x656c206567617373; // in string : 'ssage le' (8 car)
…
}
```

-----

## Provider WEBREADE
```
#define MAGIC_WEBREADE  0x6564616572626577 // in string : 'webreade' (8 car)
```
```
void process_def_afte(const char** line) {
	const uint64_t MAGIC = 0x657466613a666564; // in string : 'def:afte' (8 car)
…
}
```
```
void process_def_asyn(const char** line) {
	const uint64_t MAGIC = 0x6e7973613a666564; // in string : 'def:asyn' (8 car)
…
}
```
```
void process_def_comm(const char** line) {
	const uint64_t MAGIC = 0x6d6d6f633a666564; // in string : 'def:comm' (8 car)
…
}
```
```
void process_def_proc(const char** line) {
	const uint64_t MAGIC = 0x636f72703a666564; // in string : 'def:proc' (8 car)
…
}
```
```
void process_def_trig(const char** line) {
	const uint64_t MAGIC = 0x676972743a666564; // in string : 'def:trig' (8 car)
…
}
```

-----

## Provider PHD
```
#define MAGIC_PHD  0x5b646870 // in string : '    phd[' (4 car)
```
```
void process_lipc_sip(const char** line) {
	const uint64_t MAGIC = 0x7069733a6370696c; // in string : 'lipc:sip' (8 car)
…
}
```
```
void process_timer_no(const char** line) {
	const uint64_t MAGIC = 0x6f6e3a72656d6974; // in string : 'timer:no' (8 car)
…
}
```
```
void process_timer_re(const char** line) {
	const uint64_t MAGIC = 0x65723a72656d6974; // in string : 'timer:re' (8 car)
…
}
```
```
void process_wait_sig(const char** line) {
	const uint64_t MAGIC = 0x6769733a74696177; // in string : 'wait:sig' (8 car)
…
}
```
```
void process_wait_zzz(const char** line) {
	const uint64_t MAGIC = 0x7a7a7a3a74696177; // in string : 'wait:zzz' (8 car)
…
}
```

-----

## Provider CROND
```
#define MAGIC_CROND  0x5b646e6f7263 // in string : '  crond[' (6 car)
```
```
void process_er_root_(const char** line) {
	const uint64_t MAGIC = 0x20746f6f72205245; // in string : 'ER root ' (8 car)
…
}
```
