
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
```
void process_def_stop(const char** line) {
	const uint64_t MAGIC = 0x706f74733a666564; // in string : 'def:stop' (8 car)
…
}
```

-----

## Provider LIPC_DAE
```
#define MAGIC_LIPC_DAE  0x6561642d6370696c // in string : 'lipc-dae' (8 car)
```
```
void process_def_term(const char** line) {
	const uint64_t MAGIC = 0x6d7265743a666564; // in string : 'def:term' (8 car)
…
}
```

-----

## Provider VOLUMD
```
#define MAGIC_VOLUMD  0x5b646d756c6f76 // in string : ' volumd[' (7 car)
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
void process_def_susg(const char** line) {
	const uint64_t MAGIC = 0x677375733a666564; // in string : 'def:susg' (8 car)
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

## Provider WALL
```
#define MAGIC_WALL  0x5b6c6c6177 // in string : '   wall[' (5 car)
```
```
void process_ll__user(const char** line) {
	const uint64_t MAGIC = 0x72657375203a6c6c; // in string : 'll: user' (8 car)
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
```
void process_me_dispa(const char** line) {
	const uint64_t MAGIC = 0x617073696420656d; // in string : 'me dispa' (8 car)
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

## Provider LIPC_SEN
```
#define MAGIC_LIPC_SEN  0x6e65732d6370696c // in string : 'lipc-sen' (8 car)
```
```
void process_def_dbus(const char** line) {
	const uint64_t MAGIC = 0x737562643a666564; // in string : 'def:dbus' (8 car)
…
}
```
```
void process_def_fail(const char** line) {
	const uint64_t MAGIC = 0x6c6961663a666564; // in string : 'def:fail' (8 car)
…
}
```
```
void process_def_open(const char** line) {
	const uint64_t MAGIC = 0x6e65706f3a666564; // in string : 'def:open' (8 car)
…
}
```
```
void process_def_retr(const char** line) {
	const uint64_t MAGIC = 0x727465723a666564; // in string : 'def:retr' (8 car)
…
}
```
```
void process_lipc_con(const char** line) {
	const uint64_t MAGIC = 0x6e6f633a6370696c; // in string : 'lipc:con' (8 car)
…
}
```
```
void process_lipc_ds_(const char** line) {
	const uint64_t MAGIC = 0x3a73643a6370696c; // in string : 'lipc:ds:' (8 car)
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

## Provider DROPBEAR
```
#define MAGIC_DROPBEAR  0x72616562706f7264 // in string : 'dropbear' (8 car)
```
```
void process_d_passwo(const char** line) {
	const uint64_t MAGIC = 0x6f77737361702064; // in string : 'd passwo' (8 car)
…
}
```
```
void process_ild_conn(const char** line) {
	const uint64_t MAGIC = 0x6e6e6f6320646c69; // in string : 'ild conn' (8 car)
…
}
```
```
void process_ssword_a(const char** line) {
	const uint64_t MAGIC = 0x612064726f777373; // in string : 'ssword a' (8 car)
…
}
```

-----

## Provider TMD
```
#define MAGIC_TMD  0x5b646d74 // in string : '    tmd[' (4 car)
```
```
void process_end_tran(const char** line) {
	const uint64_t MAGIC = 0x6e6172745f646e65; // in string : 'end_tran' (8 car)
…
}
```
```
void process_lipc_ssp(const char** line) {
	const uint64_t MAGIC = 0x7073733a6370696c; // in string : 'lipc:ssp' (8 car)
…
}
```
```
void process_qmgr_new(const char** line) {
	const uint64_t MAGIC = 0x77656e5f72676d71; // in string : 'qmgr_new' (8 car)
…
}
```
```
void process_rate_sta(const char** line) {
	const uint64_t MAGIC = 0x6174735f65746172; // in string : 'rate_sta' (8 car)
…
}
```
```
void process_recomput(const char** line) {
	const uint64_t MAGIC = 0x7475706d6f636572; // in string : 'recomput' (8 car)
…
}
```
```
void process_request_(const char** line) {
	const uint64_t MAGIC = 0x5f74736575716572; // in string : 'request_' (8 car)
…
}
```
```
void process_sendstat(const char** line) {
	const uint64_t MAGIC = 0x74617473646e6573; // in string : 'sendstat' (8 car)
…
}
```
```
void process_start_tr(const char** line) {
	const uint64_t MAGIC = 0x72745f7472617473; // in string : 'start_tr' (8 car)
…
}
```
```
void process_tq_dump_(const char** line) {
	const uint64_t MAGIC = 0x5f706d75643a7174; // in string : 'tq:dump_' (8 car)
…
}
```
```
void process_tq_queue(const char** line) {
	const uint64_t MAGIC = 0x65756575713a7174; // in string : 'tq:queue' (8 car)
…
}
```

-----

## Provider PHD
```
#define MAGIC_PHD  0x5b646870 // in string : '    phd[' (4 car)
```
```
void process_lipc_evt(const char** line) {
	const uint64_t MAGIC = 0x7476653a6370696c; // in string : 'lipc:evt' (8 car)
…
}
```
```
void process_lipc_sip(const char** line) {
	const uint64_t MAGIC = 0x7069733a6370696c; // in string : 'lipc:sip' (8 car)
…
}
```
```
void process_post_tph(const char** line) {
	const uint64_t MAGIC = 0x6870745f74736f70; // in string : 'post_tph' (8 car)
…
}
```
```
void process_sph_comp(const char** line) {
	const uint64_t MAGIC = 0x706d6f633a687073; // in string : 'sph:comp' (8 car)
…
}
```
```
void process_timer_fo(const char** line) {
	const uint64_t MAGIC = 0x6f663a72656d6974; // in string : 'timer:fo' (8 car)
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
void process_timer_ph(const char** line) {
	const uint64_t MAGIC = 0x68703a72656d6974; // in string : 'timer:ph' (8 car)
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
void process_udp_tph_(const char** line) {
	const uint64_t MAGIC = 0x3a6870745f706475; // in string : 'udp_tph:' (8 car)
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

## Provider LIPC_GET
```
#define MAGIC_LIPC_GET  0x7465672d6370696c // in string : 'lipc-get' (8 car)
```
```
void process_def_dbus(const char** line) {
	const uint64_t MAGIC = 0x737562643a666564; // in string : 'def:dbus' (8 car)
…
}
```
```
void process_def_fail(const char** line) {
	const uint64_t MAGIC = 0x6c6961663a666564; // in string : 'def:fail' (8 car)
…
}
```
```
void process_def_open(const char** line) {
	const uint64_t MAGIC = 0x6e65706f3a666564; // in string : 'def:open' (8 car)
…
}
```
```
void process_lipc_con(const char** line) {
	const uint64_t MAGIC = 0x6e6f633a6370696c; // in string : 'lipc:con' (8 car)
…
}
```
```
void process_lipc_dbu(const char** line) {
	const uint64_t MAGIC = 0x7562643a6370696c; // in string : 'lipc:dbu' (8 car)
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

-----

## Provider LIPC_SET
```
#define MAGIC_LIPC_SET  0x7465732d6370696c // in string : 'lipc-set' (8 car)
```
```
void process_def_cmd_(const char** line) {
	const uint64_t MAGIC = 0x5f646d633a666564; // in string : 'def:cmd_' (8 car)
…
}
```
```
void process_def_dbus(const char** line) {
	const uint64_t MAGIC = 0x737562643a666564; // in string : 'def:dbus' (8 car)
…
}
```
```
void process_def_fail(const char** line) {
	const uint64_t MAGIC = 0x6c6961663a666564; // in string : 'def:fail' (8 car)
…
}
```
```
void process_def_open(const char** line) {
	const uint64_t MAGIC = 0x6e65706f3a666564; // in string : 'def:open' (8 car)
…
}
```
```
void process_lipc_con(const char** line) {
	const uint64_t MAGIC = 0x6e6f633a6370696c; // in string : 'lipc:con' (8 car)
…
}
```
```
void process_lipc_sip(const char** line) {
	const uint64_t MAGIC = 0x7069733a6370696c; // in string : 'lipc:sip' (8 car)
…
}
```
```
void process_lipc_ssp(const char** line) {
	const uint64_t MAGIC = 0x7073733a6370696c; // in string : 'lipc:ssp' (8 car)
…
}
```

-----

## Provider CVM
```
#define MAGIC_CVM  0x5b6d7663 // in string : '    cvm[' (4 car)
```
```
void process_activity(const char** line) {
	const uint64_t MAGIC = 0x7974697669746341; // in string : 'Activity' (8 car)
…
}
```
```
void process_annotati(const char** line) {
	const uint64_t MAGIC = 0x697461746f6e6e41; // in string : 'Annotati' (8 car)
…
}
```
```
void process_applicat(const char** line) {
	const uint64_t MAGIC = 0x746163696c707041; // in string : 'Applicat' (8 car)
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
void process_cdeandto(const char** line) {
	const uint64_t MAGIC = 0x6f54646e41656443; // in string : 'CdeAndTo' (8 car)
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
void process_communic(const char** line) {
	const uint64_t MAGIC = 0x63696e756d6d6f43; // in string : 'Communic' (8 car)
…
}
```
```
void process_connecti(const char** line) {
	const uint64_t MAGIC = 0x697463656e6e6f43; // in string : 'Connecti' (8 car)
…
}
```
```
void process_cookies_(const char** line) {
	const uint64_t MAGIC = 0x3a7365696b6f6f43; // in string : 'Cookies:' (8 car)
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
void process_devicess(const char** line) {
	const uint64_t MAGIC = 0x5353656369766544; // in string : 'DeviceSS' (8 car)
…
}
```
```
void process_devicese(const char** line) {
	const uint64_t MAGIC = 0x6553656369766544; // in string : 'DeviceSe' (8 car)
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
void process_guimanag(const char** line) {
	const uint64_t MAGIC = 0x67616e614d495547; // in string : 'GUIManag' (8 car)
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
void process_htmljson(const char** line) {
	const uint64_t MAGIC = 0x6e6f734a4c4d5448; // in string : 'HTMLJson' (8 car)
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
void process_kindleht(const char** line) {
	const uint64_t MAGIC = 0x7448656c646e694b; // in string : 'KindleHt' (8 car)
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
void process_mainview(const char** line) {
	const uint64_t MAGIC = 0x776569566e69614d; // in string : 'MainView' (8 car)
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
void process_marketpl(const char** line) {
	const uint64_t MAGIC = 0x6c7074656b72614d; // in string : 'Marketpl' (8 car)
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
void process_namedcol(const char** line) {
	const uint64_t MAGIC = 0x6c6f4364656d614e; // in string : 'NamedCol' (8 car)
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
void process_pdfbookv(const char** line) {
	const uint64_t MAGIC = 0x566b6f6f42464450; // in string : 'PDFBookV' (8 car)
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
void process_reposito(const char** line) {
	const uint64_t MAGIC = 0x6f7469736f706552; // in string : 'Reposito' (8 car)
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
void process_sslclien(const char** line) {
	const uint64_t MAGIC = 0x6e65696c434c5353; // in string : 'SSLClien' (8 car)
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
void process_syslogfo(const char** line) {
	const uint64_t MAGIC = 0x6f46676f6c737953; // in string : 'SyslogFo' (8 car)
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
void process_taskproc(const char** line) {
	const uint64_t MAGIC = 0x636f72506b736154; // in string : 'TaskProc' (8 car)
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
void process_udlcomm_(const char** line) {
	const uint64_t MAGIC = 0x3a6d6d6f434c4455; // in string : 'UDLComm:' (8 car)
…
}
```
```
void process_udlparse(const char** line) {
	const uint64_t MAGIC = 0x65737261504c4455; // in string : 'UDLParse' (8 car)
…
}
```
```
void process_udlstora(const char** line) {
	const uint64_t MAGIC = 0x61726f74534c4455; // in string : 'UDLStora' (8 car)
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
void process_esponse_(const char** line) {
	const uint64_t MAGIC = 0x2065736e6f707365; // in string : 'esponse ' (8 car)
…
}
```
```
void process_esponse>(const char** line) {
	const uint64_t MAGIC = 0x3e65736e6f707365; // in string : 'esponse>' (8 car)
…
}
```
```
void process_lipc_evt(const char** line) {
	const uint64_t MAGIC = 0x7476653a6370696c; // in string : 'lipc:evt' (8 car)
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
void process_lipc_ssp(const char** line) {
	const uint64_t MAGIC = 0x7073733a6370696c; // in string : 'lipc:ssp' (8 car)
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
