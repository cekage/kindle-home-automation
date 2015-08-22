__Generated with magic_builder.py from 55600 lines of log__

-----

* [CROND](#CROND)
* [CVM](#CVM)
* [DROPBEAR](#DROPBEAR)
* [LIPC_DAE](#LIPC_DAE)
* [LIPC_GET](#LIPC_GET)
* [LIPC_SEN](#LIPC_SEN)
* [LIPC_SET](#LIPC_SET)
* [PHD](#PHD)
* [PMOND](#PMOND)
* [POWERD](#POWERD)
* [SYSLOG_N](#SYSLOG_N)
* [SYSTEM:_](#SYSTEM:_)
* [TMD](#TMD)
* [VOLUMD](#VOLUMD)
* [WALL](#WALL)
* [WEBREADE](#WEBREADE)

-----

# Provider <a name="CROND">CROND</a>
```
#define MAGIC_CROND  0x5b646e6f7263 // in string : '  crond[' (6 car)
```
## Key ER root 
```
/*
  Exemple:
  crond[3086]: USER root pid 634 cmd /usr/sbin/tinyrot
*/
void process_er_root_(const char** line) {
	// in string : 'ER root ' (8 car)
	const uint64_t MAGIC = 0x20746f6f72205245;
	if (strlen(*line) > 41 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 2),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"crond[3086]: USER root pid 634 cmd /usr/sbin/tinyrot"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key me dispa
```
/*
  Exemple:
  crond[3086]: time disparity of 674 minutes detected
*/
void process_me_dispa(const char** line) {
	// in string : 'me dispa' (8 car)
	const uint64_t MAGIC = 0x617073696420656d;
	if (strlen(*line) > 40 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 2),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"crond[3086]: time disparity of 674 minutes detected"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```


-----

# Provider <a name="CVM">CVM</a>
```
#define MAGIC_CVM  0x5b6d7663 // in string : '    cvm[' (4 car)
```
## Key Activity
```
/*
  Exemple:
  cvm[3369]: P ActivityInterruptor:ResetTime:id=stopActivity(),abs-time=1439885436243:reset timer to zero
*/
void process_activity(const char** line) {
	// in string : 'Activity' (8 car)
	const uint64_t MAGIC = 0x7974697669746341;
	if (strlen(*line) > 82 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: P ActivityInterruptor:ResetTime:id=stopActivity(),abs-time=1439885436243:reset timer to zero"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Annotati
```
/*
  Exemple:
  cvm[3369]: P AnnotationsCache:PerfDump:id=getAnnotations(int) for type 2,time=0,type=relative,abs-time=1439879698054,start-time=1439879698054:
*/
void process_annotati(const char** line) {
	// in string : 'Annotati' (8 car)
	const uint64_t MAGIC = 0x697461746f6e6e41;
	if (strlen(*line) > 113 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: P AnnotationsCache:PerfDump:id=getAnnotations(int) for type 2,time=0,type=relative,abs-time=1439879698054,start-time=1439879698054:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Applicat
```
/*
  Exemple:
  cvm[3369]: I ApplicationNetworkBlacklist:adjustExpirationDatesInfo:millisecondsOffset=1000:ExpirationDatesAdjustment
*/
void process_applicat(const char** line) {
	// in string : 'Applicat' (8 car)
	const uint64_t MAGIC = 0x746163696c707041;
	if (strlen(*line) > 92 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I ApplicationNetworkBlacklist:adjustExpirationDatesInfo:millisecondsOffset=1000:ExpirationDatesAdjustment"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Base64:D
```
/*
  Exemple:
  cvm[3369]: D Base64:DebugInfo::Base64.encodeBytes : not compressing
*/
void process_base64_d(const char** line) {
	// in string : 'Base64:D' (8 car)
	const uint64_t MAGIC = 0x443a343665736142;
	if (strlen(*line) > 53 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D Base64:DebugInfo::Base64.encodeBytes : not compressing"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key BaseCurs
```
/*
  Exemple:
  cvm[3369]: I BaseCursorHandler:USER_SOFTKEY_PRESS:KeyPressed=sauvegarder:User pressed sauvegarder
*/
void process_basecurs(const char** line) {
	// in string : 'BaseCurs' (8 car)
	const uint64_t MAGIC = 0x7372754365736142;
	if (strlen(*line) > 77 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I BaseCursorHandler:USER_SOFTKEY_PRESS:KeyPressed=sauvegarder:User pressed sauvegarder"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key BookletM
```
/*
  Exemple:
  cvm[3369]: I BookletManager:SwitchingBooklets:from=Home,to=Bookworm:
*/
void process_bookletm(const char** line) {
	// in string : 'BookletM' (8 car)
	const uint64_t MAGIC = 0x4d74656c6b6f6f42;
	if (strlen(*line) > 54 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I BookletManager:SwitchingBooklets:from=Home,to=Bookworm:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key CatalogI
```
/*
  Exemple:
  cvm[3369]: D CatalogItemImpl:DebugInfo::isFavorite = false
*/
void process_catalogi(const char** line) {
	// in string : 'CatalogI' (8 car)
	const uint64_t MAGIC = 0x49676f6c61746143;
	if (strlen(*line) > 46 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D CatalogItemImpl:DebugInfo::isFavorite = false"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key CatalogU
```
/*
  Exemple:
  cvm[3369]: D CatalogUtil:DebugInfo::compareLastAccessTime: time2 is 0
*/
void process_catalogu(const char** line) {
	// in string : 'CatalogU' (8 car)
	const uint64_t MAGIC = 0x55676f6c61746143;
	if (strlen(*line) > 55 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D CatalogUtil:DebugInfo::compareLastAccessTime: time2 is 0"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key CdeAndTo
```
/*
  Exemple:
  cvm[3369]: D CdeAndTodoPlug:DebugInfo::Response from todo: <?xml version="1.0" encoding="UTF-8"?>
*/
void process_cdeandto(const char** line) {
	// in string : 'CdeAndTo' (8 car)
	const uint64_t MAGIC = 0x6f54646e41656443;
	if (strlen(*line) > 77 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D CdeAndTodoPlug:DebugInfo::Response from todo: <?xml version="1.0" encoding="UTF-8"?>"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key CharsetD
```
/*
  Exemple:
  cvm[3369]: D CharsetDetectorAdapter:DebugInfo::found: UTF-8
*/
void process_charsetd(const char** line) {
	// in string : 'CharsetD' (8 car)
	const uint64_t MAGIC = 0x4474657372616843;
	if (strlen(*line) > 47 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D CharsetDetectorAdapter:DebugInfo::found: UTF-8"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Communic
```
/*
  Exemple:
  cvm[3369]: D CommunicationManagerImpl:DebugInfo::req getContents
*/
void process_communic(const char** line) {
	// in string : 'Communic' (8 car)
	const uint64_t MAGIC = 0x63696e756d6d6f43;
	if (strlen(*line) > 51 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D CommunicationManagerImpl:DebugInfo::req getContents"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Connecti
```
/*
  Exemple:
  cvm[3369]: I ConnectionService:EnsureConnectionCall:interface=:
*/
void process_connecti(const char** line) {
	// in string : 'Connecti' (8 car)
	const uint64_t MAGIC = 0x697463656e6e6f43;
	if (strlen(*line) > 50 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I ConnectionService:EnsureConnectionCall:interface=:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Cookies:
```
/*
  Exemple:
  cvm[3369]: D Cookies:DebugInfo::Cookies: x-fsn=3GB6kiDl6pHr0dFY95Be7mQ3C1ZCDJaxoHnNMJD4EuSGaTdO4HBSsWuHPS/lD5Imty8De9oIL+K1IPz0RZKN61mhBW8DdUTpwliPAaZ1R9uMA5ncPMEnheLRcjH4yX6/uqmnOi7638jX3H7YxMk20dXANU+rayiX
*/
void process_cookies_(const char** line) {
	// in string : 'Cookies:' (8 car)
	const uint64_t MAGIC = 0x3a7365696b6f6f43;
	if (strlen(*line) > 165 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D Cookies:DebugInfo::Cookies: x-fsn=3GB6kiDl6pHr0dFY95Be7mQ3C1ZCDJaxoHnNMJD4EuSGaTdO4HBSsWuHPS/lD5Imty8De9oIL+K1IPz0RZKN61mhBW8DdUTpwliPAaZ1R9uMA5ncPMEnheLRcjH4yX6/uqmnOi7638jX3H7YxMk20dXANU+rayiX"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key CursorUt
```
/*
  Exemple:
  cvm[3369]: D CursorUtil:DebugInfo::CursorUtil::updateCursor is affecting bounds: java.awt.Rectangle[x=33,y=688,width=6,height=29]
*/
void process_cursorut(const char** line) {
	// in string : 'CursorUt' (8 car)
	const uint64_t MAGIC = 0x7455726f73727543;
	if (strlen(*line) > 103 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D CursorUtil:DebugInfo::CursorUtil::updateCursor is affecting bounds: java.awt.Rectangle[x=33,y=688,width=6,height=29]"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key DBus:Add
```
/*
  Exemple:
  cvm[3369]: I DBus:AddingEventToQueue:src=com.lab126.hal,name=wanRing,time=1439926572222:
*/
void process_dbus_add(const char** line) {
	// in string : 'DBus:Add' (8 car)
	const uint64_t MAGIC = 0x6464413a73754244;
	if (strlen(*line) > 70 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I DBus:AddingEventToQueue:src=com.lab126.hal,name=wanRing,time=1439926572222:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key DailyScr
```
/*
  Exemple:
  cvm[3369]: D DailyScreensaverAdRotationController:DebugInfo::DailyScreensaverAdRotation is paused. Not setting device wakeup.
*/
void process_dailyscr(const char** line) {
	// in string : 'DailyScr' (8 car)
	const uint64_t MAGIC = 0x726353796c696144;
	if (strlen(*line) > 100 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D DailyScreensaverAdRotationController:DebugInfo::DailyScreensaverAdRotation is paused. Not setting device wakeup."
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key DeviceSS
```
/*
  Exemple:
  cvm[3369]: D DeviceSSLSocketFactroy:DebugInfo::cachedCiphers
*/
void process_devicess(const char** line) {
	// in string : 'DeviceSS' (8 car)
	const uint64_t MAGIC = 0x5353656369766544;
	if (strlen(*line) > 48 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D DeviceSSLSocketFactroy:DebugInfo::cachedCiphers"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key DeviceSe
```
/*
  Exemple:
  cvm[3369]: D DeviceService:DebugInfo::RuntimeExec sync = true : command = /usr/bin/process_update
*/
void process_devicese(const char** line) {
	// in string : 'DeviceSe' (8 car)
	const uint64_t MAGIC = 0x6553656369766544;
	if (strlen(*line) > 77 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D DeviceService:DebugInfo::RuntimeExec sync = true : command = /usr/bin/process_update"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Dictiona
```
/*
  Exemple:
  cvm[3369]: P DictionaryLookupFormat:PerfDump:id=getInstance,time=0,type=relative,abs-time=1439881132656,start-time=1439881132656:fr
*/
void process_dictiona(const char** line) {
	// in string : 'Dictiona' (8 car)
	const uint64_t MAGIC = 0x616e6f6974636944;
	if (strlen(*line) > 104 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: P DictionaryLookupFormat:PerfDump:id=getInstance,time=0,type=relative,abs-time=1439881132656,start-time=1439881132656:fr"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Elements
```
/*
  Exemple:
  cvm[3369]: D ElementsCache:DebugInfo::PageContentElementsCursorHandler.repairCursors(): set dirty bit
*/
void process_elements(const char** line) {
	// in string : 'Elements' (8 car)
	const uint64_t MAGIC = 0x73746e656d656c45;
	if (strlen(*line) > 80 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D ElementsCache:DebugInfo::PageContentElementsCursorHandler.repairCursors(): set dirty bit"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key EventMan
```
/*
  Exemple:
  cvm[3369]: D EventManagerImpl:DebugInfo::Callback time:0
*/
void process_eventman(const char** line) {
	// in string : 'EventMan' (8 car)
	const uint64_t MAGIC = 0x6e614d746e657645;
	if (strlen(*line) > 44 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D EventManagerImpl:DebugInfo::Callback time:0"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key EventReg
```
/*
  Exemple:
  cvm[3369]: D EventRegistrar:DebugInfo::Callback time:16
*/
void process_eventreg(const char** line) {
	// in string : 'EventReg' (8 car)
	const uint64_t MAGIC = 0x676552746e657645;
	if (strlen(*line) > 44 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D EventRegistrar:DebugInfo::Callback time:16"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key FrameBuf
```
/*
  Exemple:
  cvm[3369]: D FrameBufferManagerImpl:DebugInfo::forceUpdate()
*/
void process_framebuf(const char** line) {
	// in string : 'FrameBuf' (8 car)
	const uint64_t MAGIC = 0x667542656d617246;
	if (strlen(*line) > 48 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D FrameBufferManagerImpl:DebugInfo::forceUpdate()"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Framewor
```
/*
  Exemple:
  cvm[3369]: I FrameworkKeyEventDispatcher:USER_HARDKEY_PRESS:KeyPressed=Back:User pressed Back button
*/
void process_framewor(const char** line) {
	// in string : 'Framewor' (8 car)
	const uint64_t MAGIC = 0x726f77656d617246;
	if (strlen(*line) > 80 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I FrameworkKeyEventDispatcher:USER_HARDKEY_PRESS:KeyPressed=Back:User pressed Back button"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key GUIManag
```
/*
  Exemple:
  cvm[3369]: I GUIManager:HomeViewSwitch:view=HomeView:
*/
void process_guimanag(const char** line) {
	// in string : 'GUIManag' (8 car)
	const uint64_t MAGIC = 0x67616e614d495547;
	if (strlen(*line) > 42 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I GUIManager:HomeViewSwitch:view=HomeView:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key HTMLBook
```
/*
  Exemple:
  cvm[3369]: D HTMLBookViewer:DebugInfo::nextPage enter into
*/
void process_htmlbook(const char** line) {
	// in string : 'HTMLBook' (8 car)
	const uint64_t MAGIC = 0x6b6f6f424c4d5448;
	if (strlen(*line) > 46 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D HTMLBookViewer:DebugInfo::nextPage enter into"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key HTMLJson
```
/*
  Exemple:
  cvm[3369]: I HTMLJsonSidecarFile:Information::Delayed Write to sidecar file
*/
void process_htmljson(const char** line) {
	// in string : 'HTMLJson' (8 car)
	const uint64_t MAGIC = 0x6e6f734a4c4d5448;
	if (strlen(*line) > 60 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I HTMLJsonSidecarFile:Information::Delayed Write to sidecar file"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key HTMLRend
```
/*
  Exemple:
  cvm[3369]: D HTMLRenderer:DebugInfo::Processing command
*/
void process_htmlrend(const char** line) {
	// in string : 'HTMLRend' (8 car)
	const uint64_t MAGIC = 0x646e65524c4d5448;
	if (strlen(*line) > 44 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D HTMLRenderer:DebugInfo::Processing command"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key HTMLSSVP
```
/*
  Exemple:
  cvm[3369]: D HTMLSSVPageElementReader:DebugInfo::No more data in page element file.
*/
void process_htmlssvp(const char** line) {
	// in string : 'HTMLSSVP' (8 car)
	const uint64_t MAGIC = 0x505653534c4d5448;
	if (strlen(*line) > 66 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D HTMLSSVPageElementReader:DebugInfo::No more data in page element file."
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key HTTPUtil
```
/*
  Exemple:
  cvm[3369]: I HTTPUtil:clearDNSCache:cache_size=0:clearing DNS cacheMap
*/
void process_httputil(const char** line) {
	// in string : 'HTTPUtil' (8 car)
	const uint64_t MAGIC = 0x6c69745550545448;
	if (strlen(*line) > 56 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I HTTPUtil:clearDNSCache:cache_size=0:clearing DNS cacheMap"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Highligh
```
/*
  Exemple:
  cvm[3369]: P HighlightOverlayModel:PerfDump:id=updateForNewPage,time=4,type=relative,abs-time=1439879698321,start-time=1439879698317:
*/
void process_highligh(const char** line) {
	// in string : 'Highligh' (8 car)
	const uint64_t MAGIC = 0x6867696c68676948;
	if (strlen(*line) > 106 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: P HighlightOverlayModel:PerfDump:id=updateForNewPage,time=4,type=relative,abs-time=1439879698321,start-time=1439879698317:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key HistoryM
```
/*
  Exemple:
  cvm[3369]: D HistoryManagerImpl:DebugInfo::HistoryStorage.removeRange:91,93
*/
void process_historym(const char** line) {
	// in string : 'HistoryM' (8 car)
	const uint64_t MAGIC = 0x4d79726f74736948;
	if (strlen(*line) > 60 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D HistoryManagerImpl:DebugInfo::HistoryStorage.removeRange:91,93"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key KWindow:
```
/*
  Exemple:
  cvm[3369]: D KWindow:DebugInfo::wMInitializeFinished()
*/
void process_kwindow_(const char** line) {
	// in string : 'KWindow:' (8 car)
	const uint64_t MAGIC = 0x3a776f646e69574b;
	if (strlen(*line) > 43 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D KWindow:DebugInfo::wMInitializeFinished()"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Keyboard
```
/*
  Exemple:
  cvm[3369]: I Keyboard:Information::Keyboard opened
*/
void process_keyboard(const char** line) {
	// in string : 'Keyboard' (8 car)
	const uint64_t MAGIC = 0x6472616f6279654b;
	if (strlen(*line) > 40 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I Keyboard:Information::Keyboard opened"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key KindleHt
```
/*
  Exemple:
  cvm[3369]: D KindleHttpsURLStreamHandler:DebugInfo::No registered URLStreamHandlerDelegate was found, will return PBP's default connection as created by sun.net.www.protocol.https.Handler
*/
void process_kindleht(const char** line) {
	// in string : 'KindleHt' (8 car)
	const uint64_t MAGIC = 0x7448656c646e694b;
	if (strlen(*line) > 149 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D KindleHttpsURLStreamHandler:DebugInfo::No registered URLStreamHandlerDelegate was found, will return PBP's default connection as created by sun.net.www.protocol.https.Handler"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Language
```
/*
  Exemple:
  cvm[3369]: D LanguageTagData:DebugInfo::getInstance
*/
void process_language(const char** line) {
	// in string : 'Language' (8 car)
	const uint64_t MAGIC = 0x65676175676e614c;
	if (strlen(*line) > 40 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D LanguageTagData:DebugInfo::getInstance"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key LipcServ
```
/*
  Exemple:
  cvm[3369]: I LipcService:EventArrived:source=com.lab126.hal,name=wanRing,arg0=3,arg1=<None>:
*/
void process_lipcserv(const char** line) {
	// in string : 'LipcServ' (8 car)
	const uint64_t MAGIC = 0x767265536370694c;
	if (strlen(*line) > 73 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I LipcService:EventArrived:source=com.lab126.hal,name=wanRing,arg0=3,arg1=<None>:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key MainUICo
```
/*
  Exemple:
  cvm[3369]: D MainUIContainer:DebugInfo::MainUIContainer.paint __START__  booklet is Home
*/
void process_mainuico(const char** line) {
	// in string : 'MainUICo' (8 car)
	const uint64_t MAGIC = 0x6f4349556e69614d;
	if (strlen(*line) > 70 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D MainUIContainer:DebugInfo::MainUIContainer.paint __START__  booklet is Home"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key MainView
```
/*
  Exemple:
  cvm[3369]: I MainView:Information::The WiFi dialog has been previously shown.
*/
void process_mainview(const char** line) {
	// in string : 'MainView' (8 car)
	const uint64_t MAGIC = 0x776569566e69614d;
	if (strlen(*line) > 61 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I MainView:Information::The WiFi dialog has been previously shown."
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key ManagerI
```
/*
  Exemple:
  cvm[3369]: D ManagerImpl:DebugInfo::switchBookletInternal Home
*/
void process_manageri(const char** line) {
	// in string : 'ManagerI' (8 car)
	const uint64_t MAGIC = 0x49726567616e614d;
	if (strlen(*line) > 49 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D ManagerImpl:DebugInfo::switchBookletInternal Home"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Marketpl
```
/*
  Exemple:
  cvm[3440]: I Marketplace:Information::retrieved value from dynamic config for key=url.myk
*/
void process_marketpl(const char** line) {
	// in string : 'Marketpl' (8 car)
	const uint64_t MAGIC = 0x6c7074656b72614d;
	if (strlen(*line) > 71 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3440]: I Marketplace:Information::retrieved value from dynamic config for key=url.myk"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Metadata
```
/*
  Exemple:
  cvm[3369]: P MetadataController:PerfDump:id=getEndActions,time=4,type=relative,abs-time=1439879698080,start-time=1439879698076:
*/
void process_metadata(const char** line) {
	// in string : 'Metadata' (8 car)
	const uint64_t MAGIC = 0x617461646174654d;
	if (strlen(*line) > 101 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: P MetadataController:PerfDump:id=getEndActions,time=4,type=relative,abs-time=1439879698080,start-time=1439879698076:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key MobiBook
```
/*
  Exemple:
  cvm[3369]: D MobiBookViewer:DebugInfo::We are returning a special MyClippingsBook instance...
*/
void process_mobibook(const char** line) {
	// in string : 'MobiBook' (8 car)
	const uint64_t MAGIC = 0x6b6f6f4269626f4d;
	if (strlen(*line) > 74 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D MobiBookViewer:DebugInfo::We are returning a special MyClippingsBook instance..."
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key MobiLook
```
/*
  Exemple:
  cvm[3369]: D MobiLookup:DebugInfo::dictionaryInUse is null
*/
void process_mobilook(const char** line) {
	// in string : 'MobiLook' (8 car)
	const uint64_t MAGIC = 0x6b6f6f4c69626f4d;
	if (strlen(*line) > 46 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D MobiLookup:DebugInfo::dictionaryInUse is null"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key NamedCol
```
/*
  Exemple:
  cvm[3369]: D NamedCollectionImpl:DebugInfo::Cannot resolve:9dabdc03-04c7-4ba7-b361-e64526ddd7f5
*/
void process_namedcol(const char** line) {
	// in string : 'NamedCol' (8 car)
	const uint64_t MAGIC = 0x6c6f4364656d614e;
	if (strlen(*line) > 76 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D NamedCollectionImpl:DebugInfo::Cannot resolve:9dabdc03-04c7-4ba7-b361-e64526ddd7f5"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key NoteDraw
```
/*
  Exemple:
  cvm[3369]: P NoteDrawer:PerfDump:id=drawNotesAndSubscribedNotes,time=2,type=relative,abs-time=1439881874069,start-time=1439881874067:
*/
void process_notedraw(const char** line) {
	// in string : 'NoteDraw' (8 car)
	const uint64_t MAGIC = 0x7761724465746f4e;
	if (strlen(*line) > 106 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: P NoteDrawer:PerfDump:id=drawNotesAndSubscribedNotes,time=2,type=relative,abs-time=1439881874069,start-time=1439881874067:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key OverlayI
```
/*
  Exemple:
  cvm[3369]: D OverlayImpl:DebugInfo::addOverlay  KWindow#21 class: .CursorOptionsOverlay$1 depth 256 isVisible=true
*/
void process_overlayi(const char** line) {
	// in string : 'OverlayI' (8 car)
	const uint64_t MAGIC = 0x4979616c7265764f;
	if (strlen(*line) > 91 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D OverlayImpl:DebugInfo::addOverlay  KWindow#21 class: .CursorOptionsOverlay$1 depth 256 isVisible=true"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key PDFBookV
```
/*
  Exemple:
  cvm[3369]: D PDFBookViewer:DebugInfo::Entering stopActivity {{{
*/
void process_pdfbookv(const char** line) {
	// in string : 'PDFBookV' (8 car)
	const uint64_t MAGIC = 0x566b6f6f42464450;
	if (strlen(*line) > 50 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D PDFBookViewer:DebugInfo::Entering stopActivity {{{"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key PL-Mario
```
/*
  Exemple:
  cvm[3369]: D PL-Mario-FrameBuffer:DebugInfo::Calling sendFullScreenUpdate (flash)
*/
void process_pl_mario(const char** line) {
	// in string : 'PL-Mario' (8 car)
	const uint64_t MAGIC = 0x6f6972614d2d4c50;
	if (strlen(*line) > 64 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D PL-Mario-FrameBuffer:DebugInfo::Calling sendFullScreenUpdate (flash)"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key PageCont
```
/*
  Exemple:
  cvm[3369]: D PageContentElementsCursorHandler:DebugInfo::updateCursor() Start:
*/
void process_pagecont(const char** line) {
	// in string : 'PageCont' (8 car)
	const uint64_t MAGIC = 0x746e6f4365676150;
	if (strlen(*line) > 62 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D PageContentElementsCursorHandler:DebugInfo::updateCursor() Start:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key PageNumb
```
/*
  Exemple:
  cvm[3369]: P PageNumberProviderFactory:PerfDump:id=APNX TOP - locateProvider(),time=2,type=relative,abs-time=1439879698084,start-time=1439879698082:cached
*/
void process_pagenumb(const char** line) {
	// in string : 'PageNumb' (8 car)
	const uint64_t MAGIC = 0x626d754e65676150;
	if (strlen(*line) > 123 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: P PageNumberProviderFactory:PerfDump:id=APNX TOP - locateProvider(),time=2,type=relative,abs-time=1439879698084,start-time=1439879698082:cached"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key PowerImp
```
/*
  Exemple:
  cvm[3369]: E PowerImpl:UnknownPowerEvent:event=10:
*/
void process_powerimp(const char** line) {
	// in string : 'PowerImp' (8 car)
	const uint64_t MAGIC = 0x706d497265776f50;
	if (strlen(*line) > 40 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: E PowerImpl:UnknownPowerEvent:event=10:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key PowerSer
```
/*
  Exemple:
  cvm[3369]: P PowerService:PerfDump:id=HandlePowerEvent,time=24,type=relative,abs-time=1439879661026,start-time=1439879661002:event processed
*/
void process_powerser(const char** line) {
	// in string : 'PowerSer' (8 car)
	const uint64_t MAGIC = 0x7265537265776f50;
	if (strlen(*line) > 112 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: P PowerService:PerfDump:id=HandlePowerEvent,time=24,type=relative,abs-time=1439879661026,start-time=1439879661002:event processed"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key PrefixFr
```
/*
  Exemple:
  cvm[3369]: I PrefixFreeVolume:ForceRescan:path=/mnt/us/documents:
*/
void process_prefixfr(const char** line) {
	// in string : 'PrefixFr' (8 car)
	const uint64_t MAGIC = 0x7246786966657250;
	if (strlen(*line) > 52 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I PrefixFreeVolume:ForceRescan:path=/mnt/us/documents:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Profiler
```
/*
  Exemple:
  cvm[3369]: P Profiler:ResetTime:id=Home profiler,abs-time=1439879679400:reset timer to zero
*/
void process_profiler(const char** line) {
	// in string : 'Profiler' (8 car)
	const uint64_t MAGIC = 0x72656c69666f7250;
	if (strlen(*line) > 72 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: P Profiler:ResetTime:id=Home profiler,abs-time=1439879679400:reset timer to zero"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Reader:B
```
/*
  Exemple:
  cvm[3369]: I Reader:BOOK INFO:book asin=3258236f-e9de-416b-bb6f-ed462cd2b1d0,file size=1701952,file last mod date=2015-08-16 14.06.20 -0719,content type=ebook,length=HTMLPosition_ 940679,access=2015-08-17 01.48.10 -0719,last read position=HTMLPosition_ 180056,isEncrypted=false,isSample=false,isNew=false,isTTSMetdataPresent=false,isTTSMetadataAllowed=true,fileExtn=azw3:
*/
void process_reader_b(const char** line) {
	// in string : 'Reader:B' (8 car)
	const uint64_t MAGIC = 0x423a726564616552;
	if (strlen(*line) > 296 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I Reader:BOOK INFO:book asin=3258236f-e9de-416b-bb6f-ed462cd2b1d0,file size=1701952,file last mod date=2015-08-16 14.06.20 -0719,content type=ebook,length=HTMLPosition_ 940679,access=2015-08-17 01.48.10 -0719,last read position=HTMLPosition_ 180056,isEncrypted=false,isSample=false,isNew=false,isTTSMetdataPresent=false,isTTSMetadataAllowed=true,fileExtn=azw3:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Reader:D
```
/*
  Exemple:
  cvm[3369]: D Reader:DebugInfo::closeBook() enters...
*/
void process_reader_d(const char** line) {
	// in string : 'Reader:D' (8 car)
	const uint64_t MAGIC = 0x443a726564616552;
	if (strlen(*line) > 41 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D Reader:DebugInfo::closeBook() enters..."
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Reader:I
```
/*
  Exemple:
  cvm[3369]: I Reader:Information::Reader.loadState()
*/
void process_reader_i(const char** line) {
	// in string : 'Reader:I' (8 car)
	const uint64_t MAGIC = 0x493a726564616552;
	if (strlen(*line) > 40 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I Reader:Information::Reader.loadState()"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Reader:P
```
/*
  Exemple:
  cvm[3369]: P Reader:PerfDump:id=openItem,time=1536,type=relative,abs-time=1439879698145,start-time=1439879696609:
*/
void process_reader_p(const char** line) {
	// in string : 'Reader:P' (8 car)
	const uint64_t MAGIC = 0x503a726564616552;
	if (strlen(*line) > 90 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: P Reader:PerfDump:id=openItem,time=1536,type=relative,abs-time=1439879698145,start-time=1439879696609:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Reader:R
```
/*
  Exemple:
  cvm[3369]: P Reader:ResetTime:id=goToNextPage,abs-time=1439879724638:reset timer to zero
*/
void process_reader_r(const char** line) {
	// in string : 'Reader:R' (8 car)
	const uint64_t MAGIC = 0x523a726564616552;
	if (strlen(*line) > 70 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: P Reader:ResetTime:id=goToNextPage,abs-time=1439879724638:reset timer to zero"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Reader:S
```
/*
  Exemple:
  cvm[3369]: I Reader:SYNC LPR:position=182264:Send LPR to server
*/
void process_reader_s(const char** line) {
	// in string : 'Reader:S' (8 car)
	const uint64_t MAGIC = 0x533a726564616552;
	if (strlen(*line) > 50 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I Reader:SYNC LPR:position=182264:Send LPR to server"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key ReaderCo
```
/*
  Exemple:
  cvm[3369]: P ReaderContentHandler:PerfDump:id=getSimpleReaderContentWidget,time=42,type=relative,abs-time=1439879681322,start-time=1439879681280:
*/
void process_readerco(const char** line) {
	// in string : 'ReaderCo' (8 car)
	const uint64_t MAGIC = 0x6f43726564616552;
	if (strlen(*line) > 116 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: P ReaderContentHandler:PerfDump:id=getSimpleReaderContentWidget,time=42,type=relative,abs-time=1439879681322,start-time=1439879681280:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key ReaderGU
```
/*
  Exemple:
  cvm[3369]: D ReaderGUI:DebugInfo::Entering drawPage() {{{
*/
void process_readergu(const char** line) {
	// in string : 'ReaderGU' (8 car)
	const uint64_t MAGIC = 0x5547726564616552;
	if (strlen(*line) > 45 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D ReaderGUI:DebugInfo::Entering drawPage() {{{"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key ReaderSt
```
/*
  Exemple:
  cvm[3369]: P ReaderState:PerfDump:id=readObject,time=2,type=relative,abs-time=1439881142662,start-time=1439881142660:
*/
void process_readerst(const char** line) {
	// in string : 'ReaderSt' (8 car)
	const uint64_t MAGIC = 0x7453726564616552;
	if (strlen(*line) > 93 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: P ReaderState:PerfDump:id=readObject,time=2,type=relative,abs-time=1439881142662,start-time=1439881142660:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key ReadingM
```
/*
  Exemple:
  cvm[3369]: P ReadingModeView:PerfDump:id=drawPage,time=131,type=relative,abs-time=1439879698362,start-time=1439879698231:
*/
void process_readingm(const char** line) {
	// in string : 'ReadingM' (8 car)
	const uint64_t MAGIC = 0x4d676e6964616552;
	if (strlen(*line) > 96 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: P ReadingModeView:PerfDump:id=drawPage,time=131,type=relative,abs-time=1439879698362,start-time=1439879698231:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Registra
```
/*
  Exemple:
  cvm[3369]: D RegistrationInfoImpl:DebugInfo::RegistrationInfoImpl.read
*/
void process_registra(const char** line) {
	// in string : 'Registra' (8 car)
	const uint64_t MAGIC = 0x6172747369676552;
	if (strlen(*line) > 56 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D RegistrationInfoImpl:DebugInfo::RegistrationInfoImpl.read"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key RepaintI
```
/*
  Exemple:
  cvm[3369]: D RepaintInstructionQueue:DebugInfo::**********************com.amazon.ebook.booklet.reader.d.h@fd492
*/
void process_repainti(const char** line) {
	// in string : 'RepaintI' (8 car)
	const uint64_t MAGIC = 0x49746e6961706552;
	if (strlen(*line) > 88 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D RepaintInstructionQueue:DebugInfo::**********************com.amazon.ebook.booklet.reader.d.h@fd492"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key RepaintQ
```
/*
  Exemple:
  cvm[3369]: D RepaintQuickPreviewInstruction:DebugInfo::RepaintQuickPreviewInstruction End: 1439881133795
*/
void process_repaintq(const char** line) {
	// in string : 'RepaintQ' (8 car)
	const uint64_t MAGIC = 0x51746e6961706552;
	if (strlen(*line) > 83 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D RepaintQuickPreviewInstruction:DebugInfo::RepaintQuickPreviewInstruction End: 1439881133795"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Reposito
```
/*
  Exemple:
  cvm[3369]: D RepositoryController:DebugInfo::sortListByPubDate()
*/
void process_reposito(const char** line) {
	// in string : 'Reposito' (8 car)
	const uint64_t MAGIC = 0x6f7469736f706552;
	if (strlen(*line) > 51 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D RepositoryController:DebugInfo::sortListByPubDate()"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key SSBaseWi
```
/*
  Exemple:
  cvm[3369]: D SSBaseWindow:DebugInfo::Image Size=600 x 800
*/
void process_ssbasewi(const char** line) {
	// in string : 'SSBaseWi' (8 car)
	const uint64_t MAGIC = 0x6957657361425353;
	if (strlen(*line) > 45 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D SSBaseWindow:DebugInfo::Image Size=600 x 800"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key SSLClien
```
/*
  Exemple:
  cvm[3369]: D SSLClient:DebugInfo::SSLClient.openConnection url = https://todo-g7g.amazon.com/FionaTodoListProxy/removeItems?currentTransportMethod=WIFI&currentMCC=&currentSponsoredHotspot=
*/
void process_sslclien(const char** line) {
	// in string : 'SSLClien' (8 car)
	const uint64_t MAGIC = 0x6e65696c434c5353;
	if (strlen(*line) > 150 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D SSLClient:DebugInfo::SSLClient.openConnection url = https://todo-g7g.amazon.com/FionaTodoListProxy/removeItems?currentTransportMethod=WIFI&currentMCC=&currentSponsoredHotspot="
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key ScreenIm
```
/*
  Exemple:
  cvm[3369]: D ScreenImpl:DebugInfo::ScreenImpl.paint end
*/
void process_screenim(const char** line) {
	// in string : 'ScreenIm' (8 car)
	const uint64_t MAGIC = 0x6d496e6565726353;
	if (strlen(*line) > 44 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D ScreenImpl:DebugInfo::ScreenImpl.paint end"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key ScreenSa
```
/*
  Exemple:
  cvm[3369]: D ScreenSaverBooklet:DebugInfo::getMainWindow()
*/
void process_screensa(const char** line) {
	// in string : 'ScreenSa' (8 car)
	const uint64_t MAGIC = 0x61536e6565726353;
	if (strlen(*line) > 46 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D ScreenSaverBooklet:DebugInfo::getMainWindow()"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Search:C
```
/*
  Exemple:
  cvm[3369]: I Search:CHECKING_FREE_SPACE:path=/mnt/us/documents,KB=1225544:
*/
void process_search_c(const char** line) {
	// in string : 'Search:C' (8 car)
	const uint64_t MAGIC = 0x433a686372616553;
	if (strlen(*line) > 59 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I Search:CHECKING_FREE_SPACE:path=/mnt/us/documents,KB=1225544:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Search:D
```
/*
  Exemple:
  cvm[3369]: D Search:DebugInfo::PowerStateEvent - 2
*/
void process_search_d(const char** line) {
	// in string : 'Search:D' (8 car)
	const uint64_t MAGIC = 0x443a686372616553;
	if (strlen(*line) > 40 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D Search:DebugInfo::PowerStateEvent - 2"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Search:I
```
/*
  Exemple:
  cvm[3369]: I Search:INDEXING_THREAD_FINISH:milliseconds=4173:
*/
void process_search_i(const char** line) {
	// in string : 'Search:I' (8 car)
	const uint64_t MAGIC = 0x493a686372616553;
	if (strlen(*line) > 48 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I Search:INDEXING_THREAD_FINISH:milliseconds=4173:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Search:P
```
/*
  Exemple:
  cvm[3369]: I Search:PURGING_INDEX_START:book=y82139192af6d2361db4128652262e30f:
*/
void process_search_p(const char** line) {
	// in string : 'Search:P' (8 car)
	const uint64_t MAGIC = 0x503a686372616553;
	if (strlen(*line) > 63 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I Search:PURGING_INDEX_START:book=y82139192af6d2361db4128652262e30f:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Search:T
```
/*
  Exemple:
  cvm[3369]: I Search:TITLE_LANGUAGE:language=title language is fr:
*/
void process_search_t(const char** line) {
	// in string : 'Search:T' (8 car)
	const uint64_t MAGIC = 0x543a686372616553;
	if (strlen(*line) > 52 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I Search:TITLE_LANGUAGE:language=title language is fr:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Selectio
```
/*
  Exemple:
  cvm[3369]: P SelectionUtil:PerfDump:id=drawSelection,time=0,type=relative,abs-time=1439879698325,start-time=1439879698325:
*/
void process_selectio(const char** line) {
	// in string : 'Selectio' (8 car)
	const uint64_t MAGIC = 0x6f697463656c6553;
	if (strlen(*line) > 97 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: P SelectionUtil:PerfDump:id=drawSelection,time=0,type=relative,abs-time=1439879698325,start-time=1439879698325:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Settings
```
/*
  Exemple:
  cvm[3369]: I SettingsView:Information::The current view is not the Settings so skip refresh the WiFi widget
*/
void process_settings(const char** line) {
	// in string : 'Settings' (8 car)
	const uint64_t MAGIC = 0x73676e6974746553;
	if (strlen(*line) > 85 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I SettingsView:Information::The current view is not the Settings so skip refresh the WiFi widget"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key SocialCl
```
/*
  Exemple:
  cvm[3369]: D SocialClipping:DebugInfo::Version: 0
*/
void process_socialcl(const char** line) {
	// in string : 'SocialCl' (8 car)
	const uint64_t MAGIC = 0x6c436c6169636f53;
	if (strlen(*line) > 39 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D SocialClipping:DebugInfo::Version: 0"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Socializ
```
/*
  Exemple:
  cvm[3369]: D Socializer:DebugInfo::Sharing enabled: true
*/
void process_socializ(const char** line) {
	// in string : 'Socializ' (8 car)
	const uint64_t MAGIC = 0x7a696c6169636f53;
	if (strlen(*line) > 44 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D Socializer:DebugInfo::Sharing enabled: true"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key SortFrie
```
/*
  Exemple:
  cvm[3369]: P SortFriendlyTitleFormat:PerfDump:id=getInstance,time=0,type=relative,abs-time=1439881870920,start-time=1439881870920:fr_FR
*/
void process_sortfrie(const char** line) {
	// in string : 'SortFrie' (8 car)
	const uint64_t MAGIC = 0x6569724674726f53;
	if (strlen(*line) > 108 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: P SortFriendlyTitleFormat:PerfDump:id=getInstance,time=0,type=relative,abs-time=1439881870920,start-time=1439881870920:fr_FR"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key StorageI
```
/*
  Exemple:
  cvm[3369]: D StorageImpl:DebugInfo::getFreeSpace 1225816
*/
void process_storagei(const char** line) {
	// in string : 'StorageI' (8 car)
	const uint64_t MAGIC = 0x49656761726f7453;
	if (strlen(*line) > 44 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D StorageImpl:DebugInfo::getFreeSpace 1225816"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Suppleme
```
/*
  Exemple:
  cvm[3369]: I SupplementarInfoBox:QUICK_LOOKUP:asin=3258236f-e9de-416b-bb6f-ed462cd2b1d0,word=:
*/
void process_suppleme(const char** line) {
	// in string : 'Suppleme' (8 car)
	const uint64_t MAGIC = 0x656d656c70707553;
	if (strlen(*line) > 75 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I SupplementarInfoBox:QUICK_LOOKUP:asin=3258236f-e9de-416b-bb6f-ed462cd2b1d0,word=:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key SymbolPo
```
/*
  Exemple:
  cvm[3369]: P SymbolPopup:PerfDump:id=DrawPerf,time=58,type=relative,abs-time=1439881841689,start-time=1439881841631:draw done
*/
void process_symbolpo(const char** line) {
	// in string : 'SymbolPo' (8 car)
	const uint64_t MAGIC = 0x6f506c6f626d7953;
	if (strlen(*line) > 100 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: P SymbolPopup:PerfDump:id=DrawPerf,time=58,type=relative,abs-time=1439881841689,start-time=1439881841631:draw done"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key SyncPosi
```
/*
  Exemple:
  cvm[3369]: D SyncPositionCache:DebugInfo::get key_3258236f-e9de-416b-bb6f-ed462cd2b1d0-type_EBOK=null
*/
void process_syncposi(const char** line) {
	// in string : 'SyncPosi' (8 car)
	const uint64_t MAGIC = 0x69736f50636e7953;
	if (strlen(*line) > 80 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D SyncPositionCache:DebugInfo::get key_3258236f-e9de-416b-bb6f-ed462cd2b1d0-type_EBOK=null"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key SyslogFo
```
/*
  Exemple:
  cvm[3369]: E SyslogFormatter:FormatError:err-component=PreDeleteAction,err-id=USER LEFT FLICK TO DELETE,err-msg=:Argument Value Mismatch
*/
void process_syslogfo(const char** line) {
	// in string : 'SyslogFo' (8 car)
	const uint64_t MAGIC = 0x6f46676f6c737953;
	if (strlen(*line) > 108 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: E SyslogFormatter:FormatError:err-component=PreDeleteAction,err-id=USER LEFT FLICK TO DELETE,err-msg=:Argument Value Mismatch"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key SystemBa
```
/*
  Exemple:
  cvm[3369]: D SystemBarImpl:DebugInfo::AvailableTitleSpace: 368
*/
void process_systemba(const char** line) {
	// in string : 'SystemBa' (8 car)
	const uint64_t MAGIC = 0x61426d6574737953;
	if (strlen(*line) > 49 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D SystemBarImpl:DebugInfo::AvailableTitleSpace: 368"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key SystemSe
```
/*
  Exemple:
  cvm[3369]: E SystemServiceImpl:UnhandledEvent:event=usbPlugOut:HAL Event
*/
void process_systemse(const char** line) {
	// in string : 'SystemSe' (8 car)
	const uint64_t MAGIC = 0x65536d6574737953;
	if (strlen(*line) > 57 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: E SystemServiceImpl:UnhandledEvent:event=usbPlugOut:HAL Event"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key TaskProc
```
/*
  Exemple:
  cvm[3369]: D TaskProcess:DebugInfo::Scheduling todo list thread
*/
void process_taskproc(const char** line) {
	// in string : 'TaskProc' (8 car)
	const uint64_t MAGIC = 0x636f72506b736154;
	if (strlen(*line) > 50 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D TaskProcess:DebugInfo::Scheduling todo list thread"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key TextAndH
```
/*
  Exemple:
  cvm[3369]: D TextAndHTMLPDB:DebugInfo::Mes extraits
*/
void process_textandh(const char** line) {
	// in string : 'TextAndH' (8 car)
	const uint64_t MAGIC = 0x48646e4174786554;
	if (strlen(*line) > 40 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D TextAndHTMLPDB:DebugInfo::Mes extraits"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key TextArea
```
/*
  Exemple:
  cvm[3369]: D TextArea:DebugInfo::Lines required=3
*/
void process_textarea(const char** line) {
	// in string : 'TextArea' (8 car)
	const uint64_t MAGIC = 0x6165724174786554;
	if (strlen(*line) > 39 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D TextArea:DebugInfo::Lines required=3"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key TextUtil
```
/*
  Exemple:
  cvm[3369]: D TextUtils:DebugInfo::U:pos:14:width:172:size:163:Stéphanie Brou…
*/
void process_textutil(const char** line) {
	// in string : 'TextUtil' (8 car)
	const uint64_t MAGIC = 0x6c69745574786554;
	if (strlen(*line) > 61 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D TextUtils:DebugInfo::U:pos:14:width:172:size:163:Stéphanie Brou…"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key TextWidg
```
/*
  Exemple:
  cvm[3369]: D TextWidget:DebugInfo::Exiting symbol menu
*/
void process_textwidg(const char** line) {
	// in string : 'TextWidg' (8 car)
	const uint64_t MAGIC = 0x6764695774786554;
	if (strlen(*line) > 43 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D TextWidget:DebugInfo::Exiting symbol menu"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key ThreadPo
```
/*
  Exemple:
  cvm[3369]: D ThreadPool:DebugInfo::run: com.amazon.ebook.util.a.v@d839e6
*/
void process_threadpo(const char** line) {
	// in string : 'ThreadPo' (8 car)
	const uint64_t MAGIC = 0x6f50646165726854;
	if (strlen(*line) > 57 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D ThreadPool:DebugInfo::run: com.amazon.ebook.util.a.v@d839e6"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key UDLComm:
```
/*
  Exemple:
  cvm[3369]: D UDLComm:DebugInfo::CdeAndTodoPlug.syncMetaData http rc: 200
*/
void process_udlcomm_(const char** line) {
	// in string : 'UDLComm:' (8 car)
	const uint64_t MAGIC = 0x3a6d6d6f434c4455;
	if (strlen(*line) > 57 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D UDLComm:DebugInfo::CdeAndTodoPlug.syncMetaData http rc: 200"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key UDLParse
```
/*
  Exemple:
  cvm[3440]: W UDLParser:UnknownTag:tag=content_size:
*/
void process_udlparse(const char** line) {
	// in string : 'UDLParse' (8 car)
	const uint64_t MAGIC = 0x65737261504c4455;
	if (strlen(*line) > 40 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3440]: W UDLParser:UnknownTag:tag=content_size:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key UDLStora
```
/*
  Exemple:
  cvm[3440]: I UDLStorageImpl:MetaDataSync:type=full,time=2015-08-20T19_41_44+0000;softwareVersion_2692310002;SE_F;SC_F;ST_KB-15000000000023_KP-15000000000009_Periodical-1440099705008_,added=23,removed=0:
*/
void process_udlstora(const char** line) {
	// in string : 'UDLStora' (8 car)
	const uint64_t MAGIC = 0x61726f74534c4455;
	if (strlen(*line) > 161 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3440]: I UDLStorageImpl:MetaDataSync:type=full,time=2015-08-20T19_41_44+0000;softwareVersion_2692310002;SE_F;SC_F;ST_KB-15000000000023_KP-15000000000009_Periodical-1440099705008_,added=23,removed=0:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key UIManage
```
/*
  Exemple:
  cvm[3369]: D UIManagerImpl:DebugInfo::dismissOverlay
*/
void process_uimanage(const char** line) {
	// in string : 'UIManage' (8 car)
	const uint64_t MAGIC = 0x6567616e614d4955;
	if (strlen(*line) > 41 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D UIManagerImpl:DebugInfo::dismissOverlay"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key URLStrea
```
/*
  Exemple:
  cvm[3369]: D URLStreamHandlerRegistry:DebugInfo::Attempting to find a URLStreamHandlerDelegate for ThreadGroup: java.lang.ThreadGroup[name=main,maxpri=10]
*/
void process_urlstrea(const char** line) {
	// in string : 'URLStrea' (8 car)
	const uint64_t MAGIC = 0x61657274534c5255;
	if (strlen(*line) > 123 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D URLStreamHandlerRegistry:DebugInfo::Attempting to find a URLStreamHandlerDelegate for ThreadGroup: java.lang.ThreadGroup[name=main,maxpri=10]"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key URLUtil:
```
/*
  Exemple:
  cvm[3369]: I URLUtil:UpdateGlobalsTrace::before updating the map
*/
void process_urlutil_(const char** line) {
	// in string : 'URLUtil:' (8 car)
	const uint64_t MAGIC = 0x3a6c6974554c5255;
	if (strlen(*line) > 51 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I URLUtil:UpdateGlobalsTrace::before updating the map"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key UnicodeU
```
/*
  Exemple:
  cvm[3369]: D UnicodeUtil:DebugInfo::chomp: 0 158 158
*/
void process_unicodeu(const char** line) {
	// in string : 'UnicodeU' (8 car)
	const uint64_t MAGIC = 0x5565646f63696e55;
	if (strlen(*line) > 41 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D UnicodeUtil:DebugInfo::chomp: 0 158 158"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key VersionM
```
/*
  Exemple:
  cvm[3369]: I VersionManagerImpl:UpdatingSilently::
*/
void process_versionm(const char** line) {
	// in string : 'VersionM' (8 car)
	const uint64_t MAGIC = 0x4d6e6f6973726556;
	if (strlen(*line) > 40 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I VersionManagerImpl:UpdatingSilently::"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key WebServi
```
/*
  Exemple:
  cvm[3369]: I WebServicesImpl:UploadAnnotations::first journal empty
*/
void process_webservi(const char** line) {
	// in string : 'WebServi' (8 car)
	const uint64_t MAGIC = 0x6976726553626557;
	if (strlen(*line) > 53 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I WebServicesImpl:UploadAnnotations::first journal empty"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key WifiServ
```
/*
  Exemple:
  cvm[3369]: W WifiServiceImpl:UnhandledEvent:event=cmConnected:
*/
void process_wifiserv(const char** line) {
	// in string : 'WifiServ' (8 car)
	const uint64_t MAGIC = 0x7672655369666957;
	if (strlen(*line) > 49 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: W WifiServiceImpl:UnhandledEvent:event=cmConnected:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key WindowMa
```
/*
  Exemple:
  cvm[3369]: D WindowManagerImpl:LOG::compositor(KContainerAdapter)
*/
void process_windowma(const char** line) {
	// in string : 'WindowMa' (8 car)
	const uint64_t MAGIC = 0x614d776f646e6957;
	if (strlen(*line) > 52 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D WindowManagerImpl:LOG::compositor(KContainerAdapter)"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key Wireless
```
/*
  Exemple:
  cvm[3369]: D WirelessImpl:DebugInfo::Setting proxy info
*/
void process_wireless(const char** line) {
	// in string : 'Wireless' (8 car)
	const uint64_t MAGIC = 0x7373656c65726957;
	if (strlen(*line) > 44 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D WirelessImpl:DebugInfo::Setting proxy info"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key WordFilt
```
/*
  Exemple:
  cvm[3369]: D WordFilter:DebugInfo::initCollator: fr-FR 1
*/
void process_wordfilt(const char** line) {
	// in string : 'WordFilt' (8 car)
	const uint64_t MAGIC = 0x746c694664726f57;
	if (strlen(*line) > 44 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: D WordFilter:DebugInfo::initCollator: fr-FR 1"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key esponse 
```
/*
  Exemple:
  cvm[3369]: <response syncType="update" encryptedFionaAccountId="A129Z8BQSL52JD"><sync_time>2015-08-18T19:36:20+0000;softwareVersion:2540270001;SE:F;SC:F;ST:KP-15000000000009,Periodical-1439926580275,KB-15000000000023,</sync_time><annotation_sync_status>1</annotation_sync_status><min_sync_metadata_request_interval>300</min_sync_metadata_request_interval><min_todo_item_request_interval>300</min_todo_item_request_interval><log_upload_status>0</log_upload_status><collection_upload_interval_secs>45</collection_upload_interval_secs><add_update_list/><removal_list/></response>
*/
void process_esponse_(const char** line) {
	// in string : 'esponse ' (8 car)
	const uint64_t MAGIC = 0x2065736e6f707365;
	if (strlen(*line) > 460 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: <response syncType="update" encryptedFionaAccountId="A129Z8BQSL52JD"><sync_time>2015-08-18T19:36:20+0000;softwareVersion:2540270001;SE:F;SC:F;ST:KP-15000000000009,Periodical-1439926580275,KB-15000000000023,</sync_time><annotation_sync_status>1</annotation_sync_status><min_sync_metadata_request_interval>300</min_sync_metadata_request_interval><min_todo_item_request_interval>300</min_todo_item_request_interval><log_upload_status>0</log_upload_status><collection_upload_interval_secs>45</collection_upload_interval_secs><add_update_list/><removal_list/></response>"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key esponse>
```
/*
  Exemple:
  cvm[3369]: <response><total_count>1</total_count><next_pull_time>20150819 19:36:20</next_pull_time><items><item priority="1600" type="MESG" action="UPLOAD" key="NONE" is_incremental="false" sequence="0" url="https://device-messaging-na.amazon.com/PostDeviceMessages"/></items></response>
*/
void process_esponse>(const char** line) {
	// in string : 'esponse>' (8 car)
	const uint64_t MAGIC = 0x3e65736e6f707365;
	if (strlen(*line) > 229 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: <response><total_count>1</total_count><next_pull_time>20150819 19:36:20</next_pull_time><items><item priority="1600" type="MESG" action="UPLOAD" key="NONE" is_incremental="false" sequence="0" url="https://device-messaging-na.amazon.com/PostDeviceMessages"/></items></response>"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key lipc:evt
```
/*
  Exemple:
  cvm[3369]: I lipc:evts:name=todoCompleted, origin=com.lab126.framework:Event sent
*/
void process_lipc_evt(const char** line) {
	// in string : 'lipc:evt' (8 car)
	const uint64_t MAGIC = 0x7476653a6370696c;
	if (strlen(*line) > 64 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I lipc:evts:name=todoCompleted, origin=com.lab126.framework:Event sent"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key lipc:gip
```
/*
  Exemple:
  cvm[3369]: I lipc:gip:prop=userstoreFreeSpace, source=com.lab126.volumd:Get int property
*/
void process_lipc_gip(const char** line) {
	// in string : 'lipc:gip' (8 car)
	const uint64_t MAGIC = 0x7069673a6370696c;
	if (strlen(*line) > 70 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I lipc:gip:prop=userstoreFreeSpace, source=com.lab126.volumd:Get int property"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key lipc:gsp
```
/*
  Exemple:
  cvm[3440]: I lipc:gsp:prop=macAddress, source=com.lab126.wifid:Get string property
*/
void process_lipc_gsp(const char** line) {
	// in string : 'lipc:gsp' (8 car)
	const uint64_t MAGIC = 0x7073673a6370696c;
	if (strlen(*line) > 65 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3440]: I lipc:gsp:prop=macAddress, source=com.lab126.wifid:Get string property"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key lipc:ssp
```
/*
  Exemple:
  cvm[3369]: I lipc:ssp:prop=ensureConnection, source=com.lab126.cmd:Set string property
*/
void process_lipc_ssp(const char** line) {
	// in string : 'lipc:ssp' (8 car)
	const uint64_t MAGIC = 0x7073733a6370696c;
	if (strlen(*line) > 68 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: I lipc:ssp:prop=ensureConnection, source=com.lab126.cmd:Set string property"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key mwin:is_
```
/*
  Exemple:
  cvm[3369]: W mwin:is_valid_blit:height <= 0,height=-8:DriverBasedGraphicsEngine blit skipped
*/
void process_mwin_is_(const char** line) {
	// in string : 'mwin:is_' (8 car)
	const uint64_t MAGIC = 0x5f73693a6e69776d;
	if (strlen(*line) > 73 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"cvm[3369]: W mwin:is_valid_blit:height <= 0,height=-8:DriverBasedGraphicsEngine blit skipped"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```


-----

# Provider <a name="DROPBEAR">DROPBEAR</a>
```
#define MAGIC_DROPBEAR  0x72616562706f7264 // in string : 'dropbear' (8 car)
```
## Key d passwo
```
/*
  Exemple:
  dropbear[7227]: Bad password attempt for 'root' from 192.168.1.203:45646 (But we're letting you in because we're a nice Kindle ;))
*/
void process_d_passwo(const char** line) {
	// in string : 'd passwo' (8 car)
	const uint64_t MAGIC = 0x6f77737361702064;
	if (strlen(*line) > 104 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"dropbear[7227]: Bad password attempt for 'root' from 192.168.1.203:45646 (But we're letting you in because we're a nice Kindle ;))"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key ild conn
```
/*
  Exemple:
  dropbear[6142]: Child connection from 192.168.1.203:43379
*/
void process_ild_conn(const char** line) {
	// in string : 'ild conn' (8 car)
	const uint64_t MAGIC = 0x6e6e6f6320646c69;
	if (strlen(*line) > 45 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"dropbear[6142]: Child connection from 192.168.1.203:43379"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key it (root
```
/*
  Exemple:
  dropbear[31959]: Exit (root): Disconnect received
*/
void process_it_(root(const char** line) {
	// in string : 'it (root' (8 car)
	const uint64_t MAGIC = 0x746f6f7228207469;
	if (strlen(*line) > 39 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"dropbear[31959]: Exit (root): Disconnect received"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key rly exit
```
/*
  Exemple:
  dropbear[31951]: Early exit: Terminated by signal
*/
void process_rly_exit(const char** line) {
	// in string : 'rly exit' (8 car)
	const uint64_t MAGIC = 0x7469786520796c72;
	if (strlen(*line) > 39 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"dropbear[31951]: Early exit: Terminated by signal"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key ssword a
```
/*
  Exemple:
  dropbear[6142]: Password auth succeeded for 'root' from 192.168.1.203:43379
*/
void process_ssword_a(const char** line) {
	// in string : 'ssword a' (8 car)
	const uint64_t MAGIC = 0x612064726f777373;
	if (strlen(*line) > 60 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"dropbear[6142]: Password auth succeeded for 'root' from 192.168.1.203:43379"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```


-----

# Provider <a name="LIPC_DAE">LIPC_DAE</a>
```
#define MAGIC_LIPC_DAE  0x6561642d6370696c // in string : 'lipc-dae' (8 car)
```
## Key def:term
```
/*
  Exemple:
  lipc-daemon[3090]: I def:term::lipc-daemon received sigterm
*/
void process_def_term(const char** line) {
	// in string : 'def:term' (8 car)
	const uint64_t MAGIC = 0x6d7265743a666564;
	if (strlen(*line) > 47 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-daemon[3090]: I def:term::lipc-daemon received sigterm"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```


-----

# Provider <a name="LIPC_GET">LIPC_GET</a>
```
#define MAGIC_LIPC_GET  0x7465672d6370696c // in string : 'lipc-get' (8 car)
```
## Key def:dbus
```
/*
  Exemple:
  lipc-get-prop[12558]: C def:dbusi::Failed to init dbus
*/
void process_def_dbus(const char** line) {
	// in string : 'def:dbus' (8 car)
	const uint64_t MAGIC = 0x737562643a666564;
	if (strlen(*line) > 43 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-get-prop[12558]: C def:dbusi::Failed to init dbus"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:fail
```
/*
  Exemple:
  lipc-get-prop[6318]: E def:fail:source=com.lab126.powerd, prop=state:Failed to get property
*/
void process_def_fail(const char** line) {
	// in string : 'def:fail' (8 car)
	const uint64_t MAGIC = 0x6c6961663a666564;
	if (strlen(*line) > 72 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-get-prop[6318]: E def:fail:source=com.lab126.powerd, prop=state:Failed to get property"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:open
```
/*
  Exemple:
  lipc-get-prop[12558]: E def:open::Failed to open LIPC
*/
void process_def_open(const char** line) {
	// in string : 'def:open' (8 car)
	const uint64_t MAGIC = 0x6e65706f3a666564;
	if (strlen(*line) > 42 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-get-prop[12558]: E def:open::Failed to open LIPC"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key lipc:con
```
/*
  Exemple:
  lipc-get-prop[12558]: E lipc:con::Connection error(Failed to connect to socket /var/run/dbus/system_bus_socket: Connection refused)
*/
void process_lipc_con(const char** line) {
	// in string : 'lipc:con' (8 car)
	const uint64_t MAGIC = 0x6e6f633a6370696c;
	if (strlen(*line) > 104 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-get-prop[12558]: E lipc:con::Connection error(Failed to connect to socket /var/run/dbus/system_bus_socket: Connection refused)"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key lipc:dbu
```
/*
  Exemple:
  lipc-get-prop[2284]: E lipc:dbuserr:name=org.freedesktop.DBus.Error.ServiceUnknown:Receive Dbus error message (DBUS_MESSAGE_TYPE_ERROR): The name com.lab126.wan was not provided by any .service files
*/
void process_lipc_dbu(const char** line) {
	// in string : 'lipc:dbu' (8 car)
	const uint64_t MAGIC = 0x7562643a6370696c;
	if (strlen(*line) > 159 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-get-prop[2284]: E lipc:dbuserr:name=org.freedesktop.DBus.Error.ServiceUnknown:Receive Dbus error message (DBUS_MESSAGE_TYPE_ERROR): The name com.lab126.wan was not provided by any .service files"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key lipc:gip
```
/*
  Exemple:
  lipc-get-prop[6318]: I lipc:gip:prop=state, source=com.lab126.powerd:Get int property
*/
void process_lipc_gip(const char** line) {
	// in string : 'lipc:gip' (8 car)
	const uint64_t MAGIC = 0x7069673a6370696c;
	if (strlen(*line) > 68 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-get-prop[6318]: I lipc:gip:prop=state, source=com.lab126.powerd:Get int property"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key lipc:gsp
```
/*
  Exemple:
  lipc-get-prop[6318]: I lipc:gsp:prop=state, source=com.lab126.powerd:Get string property
*/
void process_lipc_gsp(const char** line) {
	// in string : 'lipc:gsp' (8 car)
	const uint64_t MAGIC = 0x7073673a6370696c;
	if (strlen(*line) > 70 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-get-prop[6318]: I lipc:gsp:prop=state, source=com.lab126.powerd:Get string property"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```


-----

# Provider <a name="LIPC_SEN">LIPC_SEN</a>
```
#define MAGIC_LIPC_SEN  0x6e65732d6370696c // in string : 'lipc-sen' (8 car)
```
## Key def:dbus
```
/*
  Exemple:
  lipc-send-event[6712]: C def:dbusi::Failed to init dbus
*/
void process_def_dbus(const char** line) {
	// in string : 'def:dbus' (8 car)
	const uint64_t MAGIC = 0x737562643a666564;
	if (strlen(*line) > 44 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-send-event[6712]: C def:dbusi::Failed to init dbus"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:fail
```
/*
  Exemple:
  lipc-send-event[12850]: E def:fail:source=com.lab126.hal, event=usbUnconfigured:Sending event failed
*/
void process_def_fail(const char** line) {
	// in string : 'def:fail' (8 car)
	const uint64_t MAGIC = 0x6c6961663a666564;
	if (strlen(*line) > 80 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-send-event[12850]: E def:fail:source=com.lab126.hal, event=usbUnconfigured:Sending event failed"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:open
```
/*
  Exemple:
  lipc-send-event[6712]: E def:open::Failed to open LIPC
*/
void process_def_open(const char** line) {
	// in string : 'def:open' (8 car)
	const uint64_t MAGIC = 0x6e65706f3a666564;
	if (strlen(*line) > 43 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-send-event[6712]: E def:open::Failed to open LIPC"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:retr
```
/*
  Exemple:
  lipc-send-event[6712]: W def:retry:source=com.lab126.hal, event=usbPlugOut:Failed to send. Will retry
*/
void process_def_retr(const char** line) {
	// in string : 'def:retr' (8 car)
	const uint64_t MAGIC = 0x727465723a666564;
	if (strlen(*line) > 80 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-send-event[6712]: W def:retry:source=com.lab126.hal, event=usbPlugOut:Failed to send. Will retry"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key lipc:con
```
/*
  Exemple:
  lipc-send-event[12850]: E lipc:con::Connection error(Failed to connect to socket /var/run/dbus/system_bus_socket: Connection refused)
*/
void process_lipc_con(const char** line) {
	// in string : 'lipc:con' (8 car)
	const uint64_t MAGIC = 0x6e6f633a6370696c;
	if (strlen(*line) > 106 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-send-event[12850]: E lipc:con::Connection error(Failed to connect to socket /var/run/dbus/system_bus_socket: Connection refused)"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key lipc:ds:
```
/*
  Exemple:
  lipc-send-event[6712]: E lipc:ds::Duplicate service name (com.lab126.hal)
*/
void process_lipc_ds_(const char** line) {
	// in string : 'lipc:ds:' (8 car)
	const uint64_t MAGIC = 0x3a73643a6370696c;
	if (strlen(*line) > 58 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-send-event[6712]: E lipc:ds::Duplicate service name (com.lab126.hal)"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key lipc:evt
```
/*
  Exemple:
  lipc-send-event[6760]: I lipc:evts:name=usbPlugIn, origin=com.lab126.hal:Event sent
*/
void process_lipc_evt(const char** line) {
	// in string : 'lipc:evt' (8 car)
	const uint64_t MAGIC = 0x7476653a6370696c;
	if (strlen(*line) > 66 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-send-event[6760]: I lipc:evts:name=usbPlugIn, origin=com.lab126.hal:Event sent"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```


-----

# Provider <a name="LIPC_SET">LIPC_SET</a>
```
#define MAGIC_LIPC_SET  0x7465732d6370696c // in string : 'lipc-set' (8 car)
```
## Key def:cmd_
```
/*
  Exemple:
  lipc-set-prop[6796]: E def:cmd_err:err=256:Failed to set property
*/
void process_def_cmd_(const char** line) {
	// in string : 'def:cmd_' (8 car)
	const uint64_t MAGIC = 0x5f646d633a666564;
	if (strlen(*line) > 52 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-set-prop[6796]: E def:cmd_err:err=256:Failed to set property"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:dbus
```
/*
  Exemple:
  lipc-set-prop[12593]: C def:dbusi::Failed to init dbus
*/
void process_def_dbus(const char** line) {
	// in string : 'def:dbus' (8 car)
	const uint64_t MAGIC = 0x737562643a666564;
	if (strlen(*line) > 43 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-set-prop[12593]: C def:dbusi::Failed to init dbus"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:fail
```
/*
  Exemple:
  lipc-set-prop[6796]: E def:fail:source=com.lab126.pmond, prop=stop:Failed to set property
*/
void process_def_fail(const char** line) {
	// in string : 'def:fail' (8 car)
	const uint64_t MAGIC = 0x6c6961663a666564;
	if (strlen(*line) > 71 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-set-prop[6796]: E def:fail:source=com.lab126.pmond, prop=stop:Failed to set property"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:open
```
/*
  Exemple:
  lipc-set-prop[12593]: E def:open::Failed to open LIPC
*/
void process_def_open(const char** line) {
	// in string : 'def:open' (8 car)
	const uint64_t MAGIC = 0x6e65706f3a666564;
	if (strlen(*line) > 42 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-set-prop[12593]: E def:open::Failed to open LIPC"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key lipc:con
```
/*
  Exemple:
  lipc-set-prop[12593]: E lipc:con::Connection error(Failed to connect to socket /var/run/dbus/system_bus_socket: Connection refused)
*/
void process_lipc_con(const char** line) {
	// in string : 'lipc:con' (8 car)
	const uint64_t MAGIC = 0x6e6f633a6370696c;
	if (strlen(*line) > 104 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-set-prop[12593]: E lipc:con::Connection error(Failed to connect to socket /var/run/dbus/system_bus_socket: Connection refused)"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key lipc:sip
```
/*
  Exemple:
  lipc-set-prop[5926]: I lipc:sip:prop=suspendGrace, source=com.lab126.powerd, value=20:Set int property
*/
void process_lipc_sip(const char** line) {
	// in string : 'lipc:sip' (8 car)
	const uint64_t MAGIC = 0x7069733a6370696c;
	if (strlen(*line) > 81 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-set-prop[5926]: I lipc:sip:prop=suspendGrace, source=com.lab126.powerd, value=20:Set int property"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key lipc:ssp
```
/*
  Exemple:
  lipc-set-prop[6271]: I lipc:ssp:prop=stop, source=com.lab126.pmond:Set string property
*/
void process_lipc_ssp(const char** line) {
	// in string : 'lipc:ssp' (8 car)
	const uint64_t MAGIC = 0x7073733a6370696c;
	if (strlen(*line) > 68 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"lipc-set-prop[6271]: I lipc:ssp:prop=stop, source=com.lab126.pmond:Set string property"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```


-----

# Provider <a name="PHD">PHD</a>
```
#define MAGIC_PHD  0x5b646870 // in string : '    phd[' (4 car)
```
## Key lipc:evt
```
/*
  Exemple:
  phd[2587]: I lipc:evts:name=wanRing, origin=com.lab126.hal, fparam=3:Event sent
*/
void process_lipc_evt(const char** line) {
	// in string : 'lipc:evt' (8 car)
	const uint64_t MAGIC = 0x7476653a6370696c;
	if (strlen(*line) > 63 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"phd[2587]: I lipc:evts:name=wanRing, origin=com.lab126.hal, fparam=3:Event sent"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key lipc:sip
```
/*
  Exemple:
  phd[2587]: I lipc:sip:prop=rtcWakeup, source=com.lab126.powerd, value=46137:Set int property
*/
void process_lipc_sip(const char** line) {
	// in string : 'lipc:sip' (8 car)
	const uint64_t MAGIC = 0x7069733a6370696c;
	if (strlen(*line) > 73 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"phd[2587]: I lipc:sip:prop=rtcWakeup, source=com.lab126.powerd, value=46137:Set int property"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key post_tph
```
/*
  Exemple:
  phd[2587]: I post_tph:posting_retry:interval=5m, hasbeen=0m since sph:
*/
void process_post_tph(const char** line) {
	// in string : 'post_tph' (8 car)
	const uint64_t MAGIC = 0x6870745f74736f70;
	if (strlen(*line) > 56 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"phd[2587]: I post_tph:posting_retry:interval=5m, hasbeen=0m since sph:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key sph:comp
```
/*
  Exemple:
  phd[2587]: I sph:computed_next:new = 2015/08/19-Wed-19.36.20, was = 2015/08/18-Tue-19.36.20, items = 1:
*/
void process_sph_comp(const char** line) {
	// in string : 'sph:comp' (8 car)
	const uint64_t MAGIC = 0x706d6f633a687073;
	if (strlen(*line) > 82 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"phd[2587]: I sph:computed_next:new = 2015/08/19-Wed-19.36.20, was = 2015/08/18-Tue-19.36.20, items = 1:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key timer:fo
```
/*
  Exemple:
  phd[2587]: I timer:forcedph:now = 2015/08/18-Tue-19.36.18 < 2015/08/18-Tue-19.41.34, next_interval = 5m:
*/
void process_timer_fo(const char** line) {
	// in string : 'timer:fo' (8 car)
	const uint64_t MAGIC = 0x6f663a72656d6974;
	if (strlen(*line) > 83 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"phd[2587]: I timer:forcedph:now = 2015/08/18-Tue-19.36.18 < 2015/08/18-Tue-19.41.34, next_interval = 5m:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key timer:no
```
/*
  Exemple:
  phd[2587]: I timer:notyet:now = 2015/08/18-Tue-06.49.40 < 2015/08/18-Tue-19.36.20:
*/
void process_timer_no(const char** line) {
	// in string : 'timer:no' (8 car)
	const uint64_t MAGIC = 0x6f6e3a72656d6974;
	if (strlen(*line) > 65 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"phd[2587]: I timer:notyet:now = 2015/08/18-Tue-06.49.40 < 2015/08/18-Tue-19.36.20:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key timer:ph
```
/*
  Exemple:
  phd[2587]: I timer:phnow:now = 2015/08/18-Tue-19.36.12 >= 2015/08/18-Tue-19.36.20, next_interval = 5m:
*/
void process_timer_ph(const char** line) {
	// in string : 'timer:ph' (8 car)
	const uint64_t MAGIC = 0x68703a72656d6974;
	if (strlen(*line) > 81 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"phd[2587]: I timer:phnow:now = 2015/08/18-Tue-19.36.12 >= 2015/08/18-Tue-19.36.20, next_interval = 5m:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key timer:re
```
/*
  Exemple:
  phd[2587]: I timer:response_to_suspend:Should wake=46137s,at=2015/08/18-Tue-19.36.20,for=SPH,interval=2m:
*/
void process_timer_re(const char** line) {
	// in string : 'timer:re' (8 car)
	const uint64_t MAGIC = 0x65723a72656d6974;
	if (strlen(*line) > 84 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"phd[2587]: I timer:response_to_suspend:Should wake=46137s,at=2015/08/18-Tue-19.36.20,for=SPH,interval=2m:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key udp_tph:
```
/*
  Exemple:
  phd[2587]: I udp_tph:restart_udp_tph_rcvr:ret = 12:
*/
void process_udp_tph_(const char** line) {
	// in string : 'udp_tph:' (8 car)
	const uint64_t MAGIC = 0x3a6870745f706475;
	if (strlen(*line) > 40 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"phd[2587]: I udp_tph:restart_udp_tph_rcvr:ret = 12:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key wait:sig
```
/*
  Exemple:
  phd[2587]: I wait:signal:pctw=0 (*signal received*), action="check", interval=2m, wanted = 2015/08/18-Tue-19.36.20 (8s early):
*/
void process_wait_sig(const char** line) {
	// in string : 'wait:sig' (8 car)
	const uint64_t MAGIC = 0x6769733a74696177;
	if (strlen(*line) > 100 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"phd[2587]: I wait:signal:pctw=0 (*signal received*), action="check", interval=2m, wanted = 2015/08/18-Tue-19.36.20 (8s early):"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key wait:zzz
```
/*
  Exemple:
  phd[2587]: I wait:zzzzz:interval=2m, sleeping until = 2015/08/18-Tue-19.36.20 (SPH, +46000):
*/
void process_wait_zzz(const char** line) {
	// in string : 'wait:zzz' (8 car)
	const uint64_t MAGIC = 0x7a7a7a3a74696177;
	if (strlen(*line) > 73 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"phd[2587]: I wait:zzzzz:interval=2m, sleeping until = 2015/08/18-Tue-19.36.20 (SPH, +46000):"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```


-----

# Provider <a name="PMOND">PMOND</a>
```
#define MAGIC_PMOND  0x5b646e6f6d70 // in string : '  pmond[' (6 car)
```
## Key def:exit
```
/*
  Exemple:
  pmond[2301]: I def:exit:proc=tmd, exitcode=7:tmd (3099) exited
*/
void process_def_exit(const char** line) {
	// in string : 'def:exit' (8 car)
	const uint64_t MAGIC = 0x746978653a666564;
	if (strlen(*line) > 49 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 2),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"pmond[2301]: I def:exit:proc=tmd, exitcode=7:tmd (3099) exited"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:gmem
```
/*
  Exemple:
  pmond[2301]: W def:gmem::Failed to get memory for process syslog(824)
*/
void process_def_gmem(const char** line) {
	// in string : 'def:gmem' (8 car)
	const uint64_t MAGIC = 0x6d656d673a666564;
	if (strlen(*line) > 55 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 2),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"pmond[2301]: W def:gmem::Failed to get memory for process syslog(824)"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:rst:
```
/*
  Exemple:
  pmond[2301]: I def:rst:proc=syslog:Restarting syslog
*/
void process_def_rst_(const char** line) {
	// in string : 'def:rst:' (8 car)
	const uint64_t MAGIC = 0x3a7473723a666564;
	if (strlen(*line) > 41 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 2),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"pmond[2301]: I def:rst:proc=syslog:Restarting syslog"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:stop
```
/*
  Exemple:
  pmond[2301]: I def:stop::Stopping process browserd
*/
void process_def_stop(const char** line) {
	// in string : 'def:stop' (8 car)
	const uint64_t MAGIC = 0x706f74733a666564;
	if (strlen(*line) > 40 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 2),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"pmond[2301]: I def:stop::Stopping process browserd"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```


-----

# Provider <a name="POWERD">POWERD</a>
```
#define MAGIC_POWERD  0x5b647265776f70 // in string : ' powerd[' (7 car)
```
## Key def:batt
```
/*
  Exemple:
  powerd[2355]: I def:battinfo:cap=93%, mAh=762mAh, volt=4120mV, current=-4mA, temp=71F, bp=4120mV, lmd=819mAh, cycl=19, cyct=19:
*/
void process_def_batt(const char** line) {
	// in string : 'def:batt' (8 car)
	const uint64_t MAGIC = 0x747461623a666564;
	if (strlen(*line) > 101 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 1),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"powerd[2355]: I def:battinfo:cap=93%, mAh=762mAh, volt=4120mV, current=-4mA, temp=71F, bp=4120mV, lmd=819mAh, cycl=19, cyct=19:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:chrg
```
/*
  Exemple:
  powerd[2355]: I def:chrgrevt::Received charger event
*/
void process_def_chrg(const char** line) {
	// in string : 'def:chrg' (8 car)
	const uint64_t MAGIC = 0x677268633a666564;
	if (strlen(*line) > 41 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 1),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"powerd[2355]: I def:chrgrevt::Received charger event"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:defe
```
/*
  Exemple:
  powerd[2355]: I def:defer:delay=20:Defer suspend request
*/
void process_def_defe(const char** line) {
	// in string : 'def:defe' (8 car)
	const uint64_t MAGIC = 0x656665643a666564;
	if (strlen(*line) > 44 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 1),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"powerd[2355]: I def:defer:delay=20:Defer suspend request"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:gss:
```
/*
  Exemple:
  powerd[2355]: I def:gss:reason=t1:Going to screen saver
*/
void process_def_gss_(const char** line) {
	// in string : 'def:gss:' (8 car)
	const uint64_t MAGIC = 0x3a7373673a666564;
	if (strlen(*line) > 44 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 1),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"powerd[2355]: I def:gss:reason=t1:Going to screen saver"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:pbpr
```
/*
  Exemple:
  powerd[2355]: I def:pbpress:time=1439880580.229:Power button pressed
*/
void process_def_pbpr(const char** line) {
	// in string : 'def:pbpr' (8 car)
	const uint64_t MAGIC = 0x727062703a666564;
	if (strlen(*line) > 54 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 1),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"powerd[2355]: I def:pbpress:time=1439880580.229:Power button pressed"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:r2st
```
/*
  Exemple:
  powerd[2355]: I def:r2stime:secs=49, next=SUSPENDED:Time spent in ready to suspend
*/
void process_def_r2st(const char** line) {
	// in string : 'def:r2st' (8 car)
	const uint64_t MAGIC = 0x747332723a666564;
	if (strlen(*line) > 65 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 1),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"powerd[2355]: I def:r2stime:secs=49, next=SUSPENDED:Time spent in ready to suspend"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:rtcs
```
/*
  Exemple:
  powerd[2355]: I def:rtcset:delay=46137:Setting RTC wakeup to 46137s after suspend
*/
void process_def_rtcs(const char** line) {
	// in string : 'def:rtcs' (8 car)
	const uint64_t MAGIC = 0x736374723a666564;
	if (strlen(*line) > 64 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 1),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"powerd[2355]: I def:rtcset:delay=46137:Setting RTC wakeup to 46137s after suspend"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:stat
```
/*
  Exemple:
  powerd[2355]: I def:statech:prev=ACTIVE, next=SCREEN SAVER:State change: ACTIVE -> SCREEN SAVER
*/
void process_def_stat(const char** line) {
	// in string : 'def:stat' (8 car)
	const uint64_t MAGIC = 0x746174733a666564;
	if (strlen(*line) > 76 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 1),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"powerd[2355]: I def:statech:prev=ACTIVE, next=SCREEN SAVER:State change: ACTIVE -> SCREEN SAVER"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:susg
```
/*
  Exemple:
  powerd[2355]: I def:susg:delay=20:Setting suspend grace timeout (seconds)
*/
void process_def_susg(const char** line) {
	// in string : 'def:susg' (8 car)
	const uint64_t MAGIC = 0x677375733a666564;
	if (strlen(*line) > 58 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 1),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"powerd[2355]: I def:susg:delay=20:Setting suspend grace timeout (seconds)"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:susp
```
/*
  Exemple:
  powerd[2355]: I def:suspenddelta:sec=116, cap=0, mAh=-1, volt=0, bp=0:Suspend delta
*/
void process_def_susp(const char** line) {
	// in string : 'def:susp' (8 car)
	const uint64_t MAGIC = 0x707375733a666564;
	if (strlen(*line) > 66 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 1),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"powerd[2355]: I def:suspenddelta:sec=116, cap=0, mAh=-1, volt=0, bp=0:Suspend delta"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:usbf
```
/*
  Exemple:
  powerd[2355]: E def:usbfs::Failed to open sys entry for USB FS ONLINE
*/
void process_def_usbf(const char** line) {
	// in string : 'def:usbf' (8 car)
	const uint64_t MAGIC = 0x666273753a666564;
	if (strlen(*line) > 55 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 1),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"powerd[2355]: E def:usbfs::Failed to open sys entry for USB FS ONLINE"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key lipc:evt
```
/*
  Exemple:
  powerd[2355]: I lipc:evts:name=resuming, origin=com.lab126.powerd:Event sent
*/
void process_lipc_evt(const char** line) {
	// in string : 'lipc:evt' (8 car)
	const uint64_t MAGIC = 0x7476653a6370696c;
	if (strlen(*line) > 60 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 1),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"powerd[2355]: I lipc:evts:name=resuming, origin=com.lab126.powerd:Event sent"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```


-----

# Provider <a name="SYSLOG_N">SYSLOG_N</a>
```
#define MAGIC_SYSLOG_N  0x6e2d676f6c737973 // in string : 'syslog-n' (8 car)
```
## Key GHUP rec
```
/*
  Exemple:
  syslog-ng[836]: SIGHUP received, restarting syslog-ng
*/
void process_ghup_rec(const char** line) {
	// in string : 'GHUP rec' (8 car)
	const uint64_t MAGIC = 0x6365722050554847;
	if (strlen(*line) > 42 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"syslog-ng[836]: SIGHUP received, restarting syslog-ng"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key slog-ng 
```
/*
  Exemple:
  syslog-ng[32388]: syslog-ng version 1.6.11 starting
*/
void process_slog_ng_(const char** line) {
	// in string : 'slog-ng ' (8 car)
	const uint64_t MAGIC = 0x20676e2d676f6c73;
	if (strlen(*line) > 40 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"syslog-ng[32388]: syslog-ng version 1.6.11 starting"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key ssage le
```
/*
  Exemple:
  syslog-ng[32388]: Message length overflow, line is split, log_msg_size=2048
*/
void process_ssage_le(const char** line) {
	// in string : 'ssage le' (8 car)
	const uint64_t MAGIC = 0x656c206567617373;
	if (strlen(*line) > 60 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"syslog-ng[32388]: Message length overflow, line is split, log_msg_size=2048"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```


-----

# Provider <a name="SYSTEM:_">SYSTEM:_</a>
```
#define MAGIC_SYSTEM:_  0x203a6d6574737973 // in string : 'system: ' (8 car)
```
## Key em: I S5
```
/*
  Exemple:
  system: I S50updater:def:read bundle line [/mnt/us/Update_2540270001_2692310002.bin]
*/
void process_em__i_s5(const char** line) {
	// in string : 'em: I S5' (8 car)
	const uint64_t MAGIC = 0x35532049203a6d65;
	if (strlen(*line) > 67 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"system: I S50updater:def:read bundle line [/mnt/us/Update_2540270001_2692310002.bin]"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```


-----

# Provider <a name="TMD">TMD</a>
```
#define MAGIC_TMD  0x5b646d74 // in string : '    tmd[' (4 car)
```
## Key end_tran
```
/*
  Exemple:
  tmd[3099]: I end_transfer:COMPLETED:id=1,dir=down,pri=1700,net=wan,on=wifi,curl=0,srv=200,try=1,resumes=0,declines=0,len=1458878,saved=0:
*/
void process_end_tran(const char** line) {
	// in string : 'end_tran' (8 car)
	const uint64_t MAGIC = 0x6e6172745f646e65;
	if (strlen(*line) > 109 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"tmd[3099]: I end_transfer:COMPLETED:id=1,dir=down,pri=1700,net=wan,on=wifi,curl=0,srv=200,try=1,resumes=0,declines=0,len=1458878,saved=0:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key lipc:ssp
```
/*
  Exemple:
  tmd[3099]: I lipc:ssp:prop=ensureConnection, source=com.lab126.cmd:Set string property
*/
void process_lipc_ssp(const char** line) {
	// in string : 'lipc:ssp' (8 car)
	const uint64_t MAGIC = 0x7073733a6370696c;
	if (strlen(*line) > 68 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"tmd[3099]: I lipc:ssp:prop=ensureConnection, source=com.lab126.cmd:Set string property"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key qmgr_new
```
/*
  Exemple:
  tmd[3099]: I qmgr_new:newonaq:id=1,pri=1700,qpos=0,net=wan,type="(unknown)":
*/
void process_qmgr_new(const char** line) {
	// in string : 'qmgr_new' (8 car)
	const uint64_t MAGIC = 0x77656e5f72676d71;
	if (strlen(*line) > 60 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"tmd[3099]: I qmgr_new:newonaq:id=1,pri=1700,qpos=0,net=wan,type="(unknown)":"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key rate_sta
```
/*
  Exemple:
  tmd[3099]: I rate_stats1:COMPLETED:id=1,t1_tmdreq=@122120.8,t2_enq=25ms,t3_actv=49ms,t4_hpet1=18ms,t5_hpet=@122120.9,t6_start1=@122120.9,t7_start=@122120.9,t8_start=1ms,t9_work=144ms,t10_dns=135ms,t11_conn=47ms,t12_ssl=4ms,t13_reqsent=0ms,t14_respst=63ms,t15_eoh=0ms,t16_dstart=10ms,t17_dend=1307ms,t18_end=@122122.6,try=1:
*/
void process_rate_sta(const char** line) {
	// in string : 'rate_sta' (8 car)
	const uint64_t MAGIC = 0x6174735f65746172;
	if (strlen(*line) > 258 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"tmd[3099]: I rate_stats1:COMPLETED:id=1,t1_tmdreq=@122120.8,t2_enq=25ms,t3_actv=49ms,t4_hpet1=18ms,t5_hpet=@122120.9,t6_start1=@122120.9,t7_start=@122120.9,t8_start=1ms,t9_work=144ms,t10_dns=135ms,t11_conn=47ms,t12_ssl=4ms,t13_reqsent=0ms,t14_respst=63ms,t15_eoh=0ms,t16_dstart=10ms,t17_dend=1307ms,t18_end=@122122.6,try=1:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key recomput
```
/*
  Exemple:
  tmd[3099]: I recompute_retry_time:new_time:next_retry = @122131.9 for any_transport,intvl=0m10s:
*/
void process_recomput(const char** line) {
	// in string : 'recomput' (8 car)
	const uint64_t MAGIC = 0x7475706d6f636572;
	if (strlen(*line) > 76 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"tmd[3099]: I recompute_retry_time:new_time:next_retry = @122131.9 for any_transport,intvl=0m10s:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key request_
```
/*
  Exemple:
  tmd[3099]: I request_download:received:id=1,pri=1700,net=wan,at=122120.8:
*/
void process_request_(const char** line) {
	// in string : 'request_' (8 car)
	const uint64_t MAGIC = 0x5f74736575716572;
	if (strlen(*line) > 58 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"tmd[3099]: I request_download:received:id=1,pri=1700,net=wan,at=122120.8:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key sendstat
```
/*
  Exemple:
  tmd[3099]: W sendstatus:time:id=1,total=104ms,lipc=104ms,status=STARTING (3):
*/
void process_sendstat(const char** line) {
	// in string : 'sendstat' (8 car)
	const uint64_t MAGIC = 0x74617473646e6573;
	if (strlen(*line) > 61 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"tmd[3099]: W sendstatus:time:id=1,total=104ms,lipc=104ms,status=STARTING (3):"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key start_tr
```
/*
  Exemple:
  tmd[3099]: I start_transfer:res_init::first transfer since interface change
*/
void process_start_tr(const char** line) {
	// in string : 'start_tr' (8 car)
	const uint64_t MAGIC = 0x72745f7472617473;
	if (strlen(*line) > 60 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"tmd[3099]: I start_transfer:res_init::first transfer since interface change"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key tq:dump_
```
/*
  Exemple:
  tmd[3099]: I tq:dump_queues:max_id_so_far = 1, current_network = none, next_retry = {never} for recompute_hprt-disabled, any_transport = @195907.21,intvl=0m, wifi_transport = @195907.21,intvl=0m:
*/
void process_tq_dump_(const char** line) {
	// in string : 'tq:dump_' (8 car)
	const uint64_t MAGIC = 0x5f706d75643a7174;
	if (strlen(*line) > 156 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"tmd[3099]: I tq:dump_queues:max_id_so_far = 1, current_network = none, next_retry = {never} for recompute_hprt-disabled, any_transport = @195907.21,intvl=0m, wifi_transport = @195907.21,intvl=0m:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key tq:queue
```
/*
  Exemple:
  tmd[3099]: I tq:queue_dump_header:name = inbox_queue, size = 0:
*/
void process_tq_queue(const char** line) {
	// in string : 'tq:queue' (8 car)
	const uint64_t MAGIC = 0x65756575713a7174;
	if (strlen(*line) > 50 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 4),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"tmd[3099]: I tq:queue_dump_header:name = inbox_queue, size = 0:"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```


-----

# Provider <a name="VOLUMD">VOLUMD</a>
```
#define MAGIC_VOLUMD  0x5b646d756c6f76 // in string : ' volumd[' (7 car)
```
## Key lipc:evt
```
/*
  Exemple:
  volumd[2702]: I lipc:evts:name=userstoreAvailable, origin=com.lab126.volumd:Event sent
*/
void process_lipc_evt(const char** line) {
	// in string : 'lipc:evt' (8 car)
	const uint64_t MAGIC = 0x7476653a6370696c;
	if (strlen(*line) > 68 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 1),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"volumd[2702]: I lipc:evts:name=userstoreAvailable, origin=com.lab126.volumd:Event sent"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```


-----

# Provider <a name="WALL">WALL</a>
```
#define MAGIC_WALL  0x5b6c6c6177 // in string : '   wall[' (5 car)
```
## Key ll: user
```
/*
  Exemple:
  wall[6624]: wall: user root broadcasted 1 lines (103 chars)
*/
void process_ll__user(const char** line) {
	// in string : 'll: user' (8 car)
	const uint64_t MAGIC = 0x72657375203a6c6c;
	if (strlen(*line) > 47 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 3),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"wall[6624]: wall: user root broadcasted 1 lines (103 chars)"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```


-----

# Provider <a name="WEBREADE">WEBREADE</a>
```
#define MAGIC_WEBREADE  0x6564616572626577 // in string : 'webreade' (8 car)
```
## Key def:afte
```
/*
  Exemple:
  webreader[3186]: C def:after_draw_cb: ***** Book is Shown (6272 Pixels High) ***** :
*/
void process_def_afte(const char** line) {
	// in string : 'def:afte' (8 car)
	const uint64_t MAGIC = 0x657466613a666564;
	if (strlen(*line) > 67 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"webreader[3186]: C def:after_draw_cb: ***** Book is Shown (6272 Pixels High) ***** :"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:asyn
```
/*
  Exemple:
  webreader[3186]: I def:asyncCommandSentOnLast:Sent the delayed response, msg=0x364498, time=2.808105 :
*/
void process_def_asyn(const char** line) {
	// in string : 'def:asyn' (8 car)
	const uint64_t MAGIC = 0x6e7973613a666564;
	if (strlen(*line) > 81 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"webreader[3186]: I def:asyncCommandSentOnLast:Sent the delayed response, msg=0x364498, time=2.808105 :"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:comm
```
/*
  Exemple:
  webreader[3186]: I def:commandHandlerFunc:Received command: /command/open_uri, msg=0x364498 :
*/
void process_def_comm(const char** line) {
	// in string : 'def:comm' (8 car)
	const uint64_t MAGIC = 0x6d6d6f633a666564;
	if (strlen(*line) > 74 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"webreader[3186]: I def:commandHandlerFunc:Received command: /command/open_uri, msg=0x364498 :"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:proc
```
/*
  Exemple:
  webreader[3186]: I def:processCommandHandler:Response sent for this request, msg=0x364600, time=6.813965 :
*/
void process_def_proc(const char** line) {
	// in string : 'def:proc' (8 car)
	const uint64_t MAGIC = 0x636f72703a666564;
	if (strlen(*line) > 84 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"webreader[3186]: I def:processCommandHandler:Response sent for this request, msg=0x364600, time=6.813965 :"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

## Key def:trig
```
/*
  Exemple:
  webreader[3186]: I def:triggerBgFragmentLoading:Background load started :
*/
void process_def_trig(const char** line) {
	// in string : 'def:trig' (8 car)
	const uint64_t MAGIC = 0x676972743a666564;
	if (strlen(*line) > 58 &&
		check_MAGIC_64_64_masked(line,
			REDUCE_THIS_MASK_BY(MAGIC_POWERD, 0),
			REDUCE_THIS_MASK_BY(MAGIC, 0))) {
		// Our regexp with parenthesis for substring delimitation
		const char* regexp_for_log =
			"webreader[3186]: I def:triggerBgFragmentLoading:Background load started :"
		// Substring expected : must be null-ed and destroyed
		char* varA = NULL;
		char* varB = NULL;
		char* varC = NULL;
		// Check and fill
		if (check_regexp_va(line, &regexp_for_log,
			PREFIX_WITH_COUNT(&varA, &varB, &varC))) {
		char* url_request = NULL;
		if (-1 != asprintf(&url_request,
			"script.php?paramA=%s&paramB=%s&paramC=%s",
			"varA, varB,  varC)) {
			//~ (void)printf("url_request=%s\n",url_request);
			do_http_request(url_request);
		} else {
			perror("process_defbattinfo() can't build url_request");
		free(varC);
		free(varB);
		free(varA);
	}
}
```

