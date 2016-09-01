#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct AGGRecord_Q20GRPRecord;
struct LINEITEMRecord;
struct Set_AGGRecord_Q20GRPRecord;
struct NATIONRecord;
struct PARTRecord;
struct Q20GRPRecord;
struct SUPPLIERRecord;
struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord;
struct PARTSUPPRecord;
struct AGGRecord_Q20GRPRecord {
  struct Q20GRPRecord* key;
  double* aggs;
};

struct LINEITEMRecord {
  numeric_int_t L_PARTKEY;
  numeric_int_t L_SUPPKEY;
  double L_QUANTITY;
  numeric_int_t L_SHIPDATE;
};

struct Set_AGGRecord_Q20GRPRecord {
  numeric_int_t maxSize;
  struct AGGRecord_Q20GRPRecord* array;
};

struct NATIONRecord {
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
};

struct PARTRecord {
  numeric_int_t P_PARTKEY;
  char* P_NAME;
};

struct Q20GRPRecord {
  numeric_int_t PS_PARTKEY;
  numeric_int_t PS_SUPPKEY;
  numeric_int_t PS_AVAILQTY;
};

struct SUPPLIERRecord {
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  numeric_int_t S_NATIONKEY;
};

struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord {
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
  struct Q20GRPRecord* key;
  double* aggs;
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  numeric_int_t S_NATIONKEY;
};

struct PARTSUPPRecord {
  numeric_int_t PS_PARTKEY;
  numeric_int_t PS_SUPPKEY;
  numeric_int_t PS_AVAILQTY;
};


numeric_int_t x829595(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x793534, struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x793535);

numeric_int_t x810841(void* x810835, void* x810836, void* x810837);

int main(int argc, char** argv) {
  /* VAR */ long mallocSym_829542_832259 = 0L;
  /* VAR */ long mallocSym_807321_832260 = 0L;
  /* VAR */ long mallocSym_807143_832261 = 0L;
  /* VAR */ long mallocSym_807448_832262 = 0L;
  /* VAR */ long mallocSym_807289_832263 = 0L;
  /* VAR */ long mallocSym_807620_832264 = 0L;
  /* VAR */ long mallocSym_807636_832265 = 0L;
  /* VAR */ long mallocSym_807468_832266 = 0L;
  /* VAR */ long mallocSym_808699_832267 = 0L;
  /* VAR */ long mallocSym_807255_832268 = 0L;
  /* VAR */ long mallocSym_829513_832269 = 0L;
  /* VAR */ long mallocSym_808668_832270 = 0L;
  /* VAR */ long mallocSym_807399_832271 = 0L;
  /* VAR */ long mallocSym_807337_832272 = 0L;
  /* VAR */ long mallocSym_829530_832273 = 0L;
  /* VAR */ long mallocSym_807102_832274 = 0L;
  /* VAR */ long mallocSym_807235_832275 = 0L;
  /* VAR */ long mallocSym_808394_832276 = 0L;
  /* VAR */ long mallocSym_807123_832277 = 0L;
  /* VAR */ long mallocSym_819249_832278 = 0L;
  /* VAR */ long mallocSym_807690_832279 = 0L;
  /* VAR */ long mallocSym_807658_832280 = 0L;
  /* VAR */ long mallocSym_807305_832281 = 0L;
  /* VAR */ long mallocSym_829439_832282 = 0L;
  /* VAR */ long mallocSym_807214_832283 = 0L;
  /* VAR */ long mallocSym_807715_832284 = 0L;
  /* VAR */ long mallocSym_819296_832285 = 0L;
  /* VAR */ long mallocSym_829561_832286 = 0L;
  /* VAR */ long mallocSym_808604_832287 = 0L;
  /* VAR */ long mallocSym_807358_832288 = 0L;
  /* VAR */ long mallocSym_808177_832289 = 0L;
  /* VAR */ long mallocSym_807654_832290 = 0L;
  /* VAR */ long mallocSym_807666_832291 = 0L;
  /* VAR */ long mallocSym_807730_832292 = 0L;
  /* VAR */ long mallocSym_807736_832293 = 0L;
  /* VAR */ long mallocSym_807067_832294 = 0L;
  /* VAR */ long mallocSym_807604_832295 = 0L;
  /* VAR */ long mallocSym_829418_832296 = 0L;
  /* VAR */ long mallocSym_808323_832297 = 0L;
  /* VAR */ long mallocSym_808718_832298 = 0L;
  /* VAR */ long mallocSym_829438_832299 = 0L;
  /* VAR */ long mallocSym_808584_832300 = 0L;
  /* VAR */ long mallocSym_807177_832301 = 0L;
  /* VAR */ long mallocSym_819248_832302 = 0L;
  /* VAR */ long mallocSym_807379_832303 = 0L;
  /* VAR */ long mallocSym_807665_832304 = 0L;
  /* VAR */ long mallocSym_807759_832305 = 0L;
  /* VAR */ long mallocSym_808063_832306 = 0L;
  /* VAR */ long mallocSym_807193_832307 = 0L;
  /* VAR */ long mallocSym_807742_832308 = 0L;
  FILE* x805257 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ numeric_int_t x805258 = 0;
  numeric_int_t x805259 = x805258;
  numeric_int_t* x805260 = &x805259;
  numeric_int_t x805261 = fscanf(x805257, "%d", x805260);
  pclose(x805257);
  struct NATIONRecord* x832315 = (struct NATIONRecord*)malloc(x805259 * sizeof(struct NATIONRecord));
  memset(x832315, 0, x805259 * sizeof(struct NATIONRecord));
  long x832316 = mallocSym_807067_832294;
  mallocSym_807067_832294 = (x832316+(((long){x805259})));
  numeric_int_t x805265 = O_RDONLY;
  numeric_int_t x805266 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x805265);
  struct stat x805267 = (struct stat){0};
  /* VAR */ struct stat x805268 = x805267;
  struct stat x805269 = x805268;
  struct stat* x805270 = &x805269;
  numeric_int_t x805271 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x805270);
  numeric_int_t x805273 = PROT_READ;
  numeric_int_t x805274 = MAP_PRIVATE;
  char* x793309 = mmap(NULL, (x805270->st_size), x805273, x805274, x805266, 0);
  /* VAR */ numeric_int_t x793310 = 0;
  while(1) {
    
    numeric_int_t x793311 = x793310;
    /* VAR */ boolean_t ite823690 = 0;
    if((x793311<(x805259))) {
      char x828033 = *x793309;
      ite823690 = (x828033!=('\0'));
    } else {
      
      ite823690 = 0;
    };
    boolean_t x821804 = ite823690;
    if (!(x821804)) break; 
    
    /* VAR */ numeric_int_t x805282 = 0;
    numeric_int_t x805283 = x805282;
    numeric_int_t* x805284 = &x805283;
    char* x805285 = strntoi_unchecked(x793309, x805284);
    x793309 = x805285;
    /* VAR */ char* x805287 = x793309;
    while(1) {
      
      char x805288 = *x793309;
      /* VAR */ boolean_t ite823708 = 0;
      if((x805288!=('|'))) {
        char x828050 = *x793309;
        ite823708 = (x828050!=('\n'));
      } else {
        
        ite823708 = 0;
      };
      boolean_t x821815 = ite823708;
      if (!(x821815)) break; 
      
      x793309 += 1;
    };
    char* x805295 = x805287;
    numeric_int_t x805296 = x793309 - x805295;
    numeric_int_t x805297 = x805296+(1);
    char* x832364 = (char*)malloc(x805297 * sizeof(char));
    memset(x832364, 0, x805297 * sizeof(char));
    long x832365 = mallocSym_807102_832274;
    mallocSym_807102_832274 = (x832365+(((long){x805297})));
    char* x805300 = x805287;
    char* x805301 = strncpy(x832364, x805300, x805296);
    x793309 += 1;
    /* VAR */ numeric_int_t x805303 = 0;
    numeric_int_t x805304 = x805303;
    numeric_int_t* x805305 = &x805304;
    char* x805306 = strntoi_unchecked(x793309, x805305);
    x793309 = x805306;
    /* VAR */ char* x805308 = x793309;
    while(1) {
      
      char x805309 = *x793309;
      /* VAR */ boolean_t ite823734 = 0;
      if((x805309!=('|'))) {
        char x828075 = *x793309;
        ite823734 = (x828075!=('\n'));
      } else {
        
        ite823734 = 0;
      };
      boolean_t x821834 = ite823734;
      if (!(x821834)) break; 
      
      x793309 += 1;
    };
    char* x805316 = x805308;
    numeric_int_t x805317 = x793309 - x805316;
    numeric_int_t x805318 = x805317+(1);
    char* x832393 = (char*)malloc(x805318 * sizeof(char));
    memset(x832393, 0, x805318 * sizeof(char));
    long x832394 = mallocSym_807123_832277;
    mallocSym_807123_832277 = (x832394+(((long){x805318})));
    char* x805321 = x805308;
    char* x805322 = strncpy(x832393, x805321, x805317);
    x793309 += 1;
    struct NATIONRecord* x832401 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x832401, 0, 1 * sizeof(struct NATIONRecord));
    long x832402 = mallocSym_808063_832306;
    mallocSym_808063_832306 = (x832402+(((long){1})));
    x832401->N_NATIONKEY = x805283; x832401->N_NAME = x832364;
    numeric_int_t x793320 = x793310;
    struct NATIONRecord x807130 = *x832401;
    *(x832315 + x793320) = x807130;
    struct NATIONRecord* x807132 = &(x832315[x793320]);
    x832401 = x807132;
    numeric_int_t x793322 = x793310;
    x793310 = (x793322+(1));
  };
  FILE* x805330 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ numeric_int_t x805331 = 0;
  numeric_int_t x805332 = x805331;
  numeric_int_t* x805333 = &x805332;
  numeric_int_t x805334 = fscanf(x805330, "%d", x805333);
  pclose(x805330);
  struct SUPPLIERRecord* x832422 = (struct SUPPLIERRecord*)malloc(x805332 * sizeof(struct SUPPLIERRecord));
  memset(x832422, 0, x805332 * sizeof(struct SUPPLIERRecord));
  long x832423 = mallocSym_807143_832261;
  mallocSym_807143_832261 = (x832423+(((long){x805332})));
  numeric_int_t x805338 = O_RDONLY;
  numeric_int_t x805339 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x805338);
  /* VAR */ struct stat x805340 = x805267;
  struct stat x805341 = x805340;
  struct stat* x805342 = &x805341;
  numeric_int_t x805343 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x805342);
  numeric_int_t x805345 = PROT_READ;
  numeric_int_t x805346 = MAP_PRIVATE;
  char* x793328 = mmap(NULL, (x805342->st_size), x805345, x805346, x805339, 0);
  /* VAR */ numeric_int_t x793329 = 0;
  while(1) {
    
    numeric_int_t x793330 = x793329;
    /* VAR */ boolean_t ite823783 = 0;
    if((x793330<(x805332))) {
      char x828123 = *x793328;
      ite823783 = (x828123!=('\0'));
    } else {
      
      ite823783 = 0;
    };
    boolean_t x821876 = ite823783;
    if (!(x821876)) break; 
    
    /* VAR */ numeric_int_t x805354 = 0;
    numeric_int_t x805355 = x805354;
    numeric_int_t* x805356 = &x805355;
    char* x805357 = strntoi_unchecked(x793328, x805356);
    x793328 = x805357;
    /* VAR */ char* x805359 = x793328;
    while(1) {
      
      char x805360 = *x793328;
      /* VAR */ boolean_t ite823801 = 0;
      if((x805360!=('|'))) {
        char x828140 = *x793328;
        ite823801 = (x828140!=('\n'));
      } else {
        
        ite823801 = 0;
      };
      boolean_t x821887 = ite823801;
      if (!(x821887)) break; 
      
      x793328 += 1;
    };
    char* x805367 = x805359;
    numeric_int_t x805368 = x793328 - x805367;
    numeric_int_t x805369 = x805368+(1);
    char* x832470 = (char*)malloc(x805369 * sizeof(char));
    memset(x832470, 0, x805369 * sizeof(char));
    long x832471 = mallocSym_807177_832301;
    mallocSym_807177_832301 = (x832471+(((long){x805369})));
    char* x805372 = x805359;
    char* x805373 = strncpy(x832470, x805372, x805368);
    x793328 += 1;
    /* VAR */ char* x805375 = x793328;
    while(1) {
      
      char x805376 = *x793328;
      /* VAR */ boolean_t ite823822 = 0;
      if((x805376!=('|'))) {
        char x828160 = *x793328;
        ite823822 = (x828160!=('\n'));
      } else {
        
        ite823822 = 0;
      };
      boolean_t x821901 = ite823822;
      if (!(x821901)) break; 
      
      x793328 += 1;
    };
    char* x805383 = x805375;
    numeric_int_t x805384 = x793328 - x805383;
    numeric_int_t x805385 = x805384+(1);
    char* x832494 = (char*)malloc(x805385 * sizeof(char));
    memset(x832494, 0, x805385 * sizeof(char));
    long x832495 = mallocSym_807193_832307;
    mallocSym_807193_832307 = (x832495+(((long){x805385})));
    char* x805388 = x805375;
    char* x805389 = strncpy(x832494, x805388, x805384);
    x793328 += 1;
    /* VAR */ numeric_int_t x805391 = 0;
    numeric_int_t x805392 = x805391;
    numeric_int_t* x805393 = &x805392;
    char* x805394 = strntoi_unchecked(x793328, x805393);
    x793328 = x805394;
    /* VAR */ char* x805396 = x793328;
    while(1) {
      
      char x805397 = *x793328;
      /* VAR */ boolean_t ite823848 = 0;
      if((x805397!=('|'))) {
        char x828185 = *x793328;
        ite823848 = (x828185!=('\n'));
      } else {
        
        ite823848 = 0;
      };
      boolean_t x821920 = ite823848;
      if (!(x821920)) break; 
      
      x793328 += 1;
    };
    char* x805404 = x805396;
    numeric_int_t x805405 = x793328 - x805404;
    numeric_int_t x805406 = x805405+(1);
    char* x832523 = (char*)malloc(x805406 * sizeof(char));
    memset(x832523, 0, x805406 * sizeof(char));
    long x832524 = mallocSym_807214_832283;
    mallocSym_807214_832283 = (x832524+(((long){x805406})));
    char* x805409 = x805396;
    char* x805410 = strncpy(x832523, x805409, x805405);
    x793328 += 1;
    /* VAR */ double x805412 = 0.0;
    double x805413 = x805412;
    double* x805414 = &x805413;
    char* x805415 = strntod_unchecked(x793328, x805414);
    x793328 = x805415;
    /* VAR */ char* x805417 = x793328;
    while(1) {
      
      char x805418 = *x793328;
      /* VAR */ boolean_t ite823874 = 0;
      if((x805418!=('|'))) {
        char x828210 = *x793328;
        ite823874 = (x828210!=('\n'));
      } else {
        
        ite823874 = 0;
      };
      boolean_t x821939 = ite823874;
      if (!(x821939)) break; 
      
      x793328 += 1;
    };
    char* x805425 = x805417;
    numeric_int_t x805426 = x793328 - x805425;
    numeric_int_t x805427 = x805426+(1);
    char* x832552 = (char*)malloc(x805427 * sizeof(char));
    memset(x832552, 0, x805427 * sizeof(char));
    long x832553 = mallocSym_807235_832275;
    mallocSym_807235_832275 = (x832553+(((long){x805427})));
    char* x805430 = x805417;
    char* x805431 = strncpy(x832552, x805430, x805426);
    x793328 += 1;
    struct SUPPLIERRecord* x832560 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x832560, 0, 1 * sizeof(struct SUPPLIERRecord));
    long x832561 = mallocSym_808177_832289;
    mallocSym_808177_832289 = (x832561+(((long){1})));
    x832560->S_SUPPKEY = x805355; x832560->S_NAME = x832470; x832560->S_ADDRESS = x832494; x832560->S_NATIONKEY = x805392;
    numeric_int_t x793342 = x793329;
    struct SUPPLIERRecord x807242 = *x832560;
    *(x832422 + x793342) = x807242;
    struct SUPPLIERRecord* x807244 = &(x832422[x793342]);
    x832560 = x807244;
    numeric_int_t x793344 = x793329;
    x793329 = (x793344+(1));
  };
  FILE* x805439 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ numeric_int_t x805440 = 0;
  numeric_int_t x805441 = x805440;
  numeric_int_t* x805442 = &x805441;
  numeric_int_t x805443 = fscanf(x805439, "%d", x805442);
  pclose(x805439);
  struct PARTRecord* x832581 = (struct PARTRecord*)malloc(x805441 * sizeof(struct PARTRecord));
  memset(x832581, 0, x805441 * sizeof(struct PARTRecord));
  long x832582 = mallocSym_807255_832268;
  mallocSym_807255_832268 = (x832582+(((long){x805441})));
  numeric_int_t x805447 = O_RDONLY;
  numeric_int_t x805448 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x805447);
  /* VAR */ struct stat x805449 = x805267;
  struct stat x805450 = x805449;
  struct stat* x805451 = &x805450;
  numeric_int_t x805452 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x805451);
  numeric_int_t x805454 = PROT_READ;
  numeric_int_t x805455 = MAP_PRIVATE;
  char* x793350 = mmap(NULL, (x805451->st_size), x805454, x805455, x805448, 0);
  /* VAR */ numeric_int_t x793351 = 0;
  while(1) {
    
    numeric_int_t x793352 = x793351;
    /* VAR */ boolean_t ite823923 = 0;
    if((x793352<(x805441))) {
      char x828258 = *x793350;
      ite823923 = (x828258!=('\0'));
    } else {
      
      ite823923 = 0;
    };
    boolean_t x821981 = ite823923;
    if (!(x821981)) break; 
    
    /* VAR */ numeric_int_t x805463 = 0;
    numeric_int_t x805464 = x805463;
    numeric_int_t* x805465 = &x805464;
    char* x805466 = strntoi_unchecked(x793350, x805465);
    x793350 = x805466;
    /* VAR */ char* x805468 = x793350;
    while(1) {
      
      char x805469 = *x793350;
      /* VAR */ boolean_t ite823941 = 0;
      if((x805469!=('|'))) {
        char x828275 = *x793350;
        ite823941 = (x828275!=('\n'));
      } else {
        
        ite823941 = 0;
      };
      boolean_t x821992 = ite823941;
      if (!(x821992)) break; 
      
      x793350 += 1;
    };
    char* x805476 = x805468;
    numeric_int_t x805477 = x793350 - x805476;
    numeric_int_t x805478 = x805477+(1);
    char* x832629 = (char*)malloc(x805478 * sizeof(char));
    memset(x832629, 0, x805478 * sizeof(char));
    long x832630 = mallocSym_807289_832263;
    mallocSym_807289_832263 = (x832630+(((long){x805478})));
    char* x805481 = x805468;
    char* x805482 = strncpy(x832629, x805481, x805477);
    x793350 += 1;
    /* VAR */ char* x805484 = x793350;
    while(1) {
      
      char x805485 = *x793350;
      /* VAR */ boolean_t ite823962 = 0;
      if((x805485!=('|'))) {
        char x828295 = *x793350;
        ite823962 = (x828295!=('\n'));
      } else {
        
        ite823962 = 0;
      };
      boolean_t x822006 = ite823962;
      if (!(x822006)) break; 
      
      x793350 += 1;
    };
    char* x805492 = x805484;
    numeric_int_t x805493 = x793350 - x805492;
    numeric_int_t x805494 = x805493+(1);
    char* x832653 = (char*)malloc(x805494 * sizeof(char));
    memset(x832653, 0, x805494 * sizeof(char));
    long x832654 = mallocSym_807305_832281;
    mallocSym_807305_832281 = (x832654+(((long){x805494})));
    char* x805497 = x805484;
    char* x805498 = strncpy(x832653, x805497, x805493);
    x793350 += 1;
    /* VAR */ char* x805500 = x793350;
    while(1) {
      
      char x805501 = *x793350;
      /* VAR */ boolean_t ite823983 = 0;
      if((x805501!=('|'))) {
        char x828315 = *x793350;
        ite823983 = (x828315!=('\n'));
      } else {
        
        ite823983 = 0;
      };
      boolean_t x822020 = ite823983;
      if (!(x822020)) break; 
      
      x793350 += 1;
    };
    char* x805508 = x805500;
    numeric_int_t x805509 = x793350 - x805508;
    numeric_int_t x805510 = x805509+(1);
    char* x832677 = (char*)malloc(x805510 * sizeof(char));
    memset(x832677, 0, x805510 * sizeof(char));
    long x832678 = mallocSym_807321_832260;
    mallocSym_807321_832260 = (x832678+(((long){x805510})));
    char* x805513 = x805500;
    char* x805514 = strncpy(x832677, x805513, x805509);
    x793350 += 1;
    /* VAR */ char* x805516 = x793350;
    while(1) {
      
      char x805517 = *x793350;
      /* VAR */ boolean_t ite824004 = 0;
      if((x805517!=('|'))) {
        char x828335 = *x793350;
        ite824004 = (x828335!=('\n'));
      } else {
        
        ite824004 = 0;
      };
      boolean_t x822034 = ite824004;
      if (!(x822034)) break; 
      
      x793350 += 1;
    };
    char* x805524 = x805516;
    numeric_int_t x805525 = x793350 - x805524;
    numeric_int_t x805526 = x805525+(1);
    char* x832701 = (char*)malloc(x805526 * sizeof(char));
    memset(x832701, 0, x805526 * sizeof(char));
    long x832702 = mallocSym_807337_832272;
    mallocSym_807337_832272 = (x832702+(((long){x805526})));
    char* x805529 = x805516;
    char* x805530 = strncpy(x832701, x805529, x805525);
    x793350 += 1;
    /* VAR */ numeric_int_t x805532 = 0;
    numeric_int_t x805533 = x805532;
    numeric_int_t* x805534 = &x805533;
    char* x805535 = strntoi_unchecked(x793350, x805534);
    x793350 = x805535;
    /* VAR */ char* x805537 = x793350;
    while(1) {
      
      char x805538 = *x793350;
      /* VAR */ boolean_t ite824030 = 0;
      if((x805538!=('|'))) {
        char x828360 = *x793350;
        ite824030 = (x828360!=('\n'));
      } else {
        
        ite824030 = 0;
      };
      boolean_t x822053 = ite824030;
      if (!(x822053)) break; 
      
      x793350 += 1;
    };
    char* x805545 = x805537;
    numeric_int_t x805546 = x793350 - x805545;
    numeric_int_t x805547 = x805546+(1);
    char* x832730 = (char*)malloc(x805547 * sizeof(char));
    memset(x832730, 0, x805547 * sizeof(char));
    long x832731 = mallocSym_807358_832288;
    mallocSym_807358_832288 = (x832731+(((long){x805547})));
    char* x805550 = x805537;
    char* x805551 = strncpy(x832730, x805550, x805546);
    x793350 += 1;
    /* VAR */ double x805553 = 0.0;
    double x805554 = x805553;
    double* x805555 = &x805554;
    char* x805556 = strntod_unchecked(x793350, x805555);
    x793350 = x805556;
    /* VAR */ char* x805558 = x793350;
    while(1) {
      
      char x805559 = *x793350;
      /* VAR */ boolean_t ite824056 = 0;
      if((x805559!=('|'))) {
        char x828385 = *x793350;
        ite824056 = (x828385!=('\n'));
      } else {
        
        ite824056 = 0;
      };
      boolean_t x822072 = ite824056;
      if (!(x822072)) break; 
      
      x793350 += 1;
    };
    char* x805566 = x805558;
    numeric_int_t x805567 = x793350 - x805566;
    numeric_int_t x805568 = x805567+(1);
    char* x832759 = (char*)malloc(x805568 * sizeof(char));
    memset(x832759, 0, x805568 * sizeof(char));
    long x832760 = mallocSym_807379_832303;
    mallocSym_807379_832303 = (x832760+(((long){x805568})));
    char* x805571 = x805558;
    char* x805572 = strncpy(x832759, x805571, x805567);
    x793350 += 1;
    struct PARTRecord* x832767 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x832767, 0, 1 * sizeof(struct PARTRecord));
    long x832768 = mallocSym_808323_832297;
    mallocSym_808323_832297 = (x832768+(((long){1})));
    x832767->P_PARTKEY = x805464; x832767->P_NAME = x832629;
    numeric_int_t x793366 = x793351;
    struct PARTRecord x807386 = *x832767;
    *(x832581 + x793366) = x807386;
    struct PARTRecord* x807388 = &(x832581[x793366]);
    x832767 = x807388;
    numeric_int_t x793368 = x793351;
    x793351 = (x793368+(1));
  };
  FILE* x805580 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ numeric_int_t x805581 = 0;
  numeric_int_t x805582 = x805581;
  numeric_int_t* x805583 = &x805582;
  numeric_int_t x805584 = fscanf(x805580, "%d", x805583);
  pclose(x805580);
  struct PARTSUPPRecord* x832788 = (struct PARTSUPPRecord*)malloc(x805582 * sizeof(struct PARTSUPPRecord));
  memset(x832788, 0, x805582 * sizeof(struct PARTSUPPRecord));
  long x832789 = mallocSym_807399_832271;
  mallocSym_807399_832271 = (x832789+(((long){x805582})));
  numeric_int_t x805588 = O_RDONLY;
  numeric_int_t x805589 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x805588);
  /* VAR */ struct stat x805590 = x805267;
  struct stat x805591 = x805590;
  struct stat* x805592 = &x805591;
  numeric_int_t x805593 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x805592);
  numeric_int_t x805595 = PROT_READ;
  numeric_int_t x805596 = MAP_PRIVATE;
  char* x793374 = mmap(NULL, (x805592->st_size), x805595, x805596, x805589, 0);
  /* VAR */ numeric_int_t x793375 = 0;
  while(1) {
    
    numeric_int_t x793376 = x793375;
    /* VAR */ boolean_t ite824105 = 0;
    if((x793376<(x805582))) {
      char x828433 = *x793374;
      ite824105 = (x828433!=('\0'));
    } else {
      
      ite824105 = 0;
    };
    boolean_t x822114 = ite824105;
    if (!(x822114)) break; 
    
    /* VAR */ numeric_int_t x805604 = 0;
    numeric_int_t x805605 = x805604;
    numeric_int_t* x805606 = &x805605;
    char* x805607 = strntoi_unchecked(x793374, x805606);
    x793374 = x805607;
    /* VAR */ numeric_int_t x805609 = 0;
    numeric_int_t x805610 = x805609;
    numeric_int_t* x805611 = &x805610;
    char* x805612 = strntoi_unchecked(x793374, x805611);
    x793374 = x805612;
    /* VAR */ numeric_int_t x805614 = 0;
    numeric_int_t x805615 = x805614;
    numeric_int_t* x805616 = &x805615;
    char* x805617 = strntoi_unchecked(x793374, x805616);
    x793374 = x805617;
    /* VAR */ double x805619 = 0.0;
    double x805620 = x805619;
    double* x805621 = &x805620;
    char* x805622 = strntod_unchecked(x793374, x805621);
    x793374 = x805622;
    /* VAR */ char* x805624 = x793374;
    while(1) {
      
      char x805625 = *x793374;
      /* VAR */ boolean_t ite824138 = 0;
      if((x805625!=('|'))) {
        char x828465 = *x793374;
        ite824138 = (x828465!=('\n'));
      } else {
        
        ite824138 = 0;
      };
      boolean_t x822140 = ite824138;
      if (!(x822140)) break; 
      
      x793374 += 1;
    };
    char* x805632 = x805624;
    numeric_int_t x805633 = x793374 - x805632;
    numeric_int_t x805634 = x805633+(1);
    char* x832851 = (char*)malloc(x805634 * sizeof(char));
    memset(x832851, 0, x805634 * sizeof(char));
    long x832852 = mallocSym_807448_832262;
    mallocSym_807448_832262 = (x832852+(((long){x805634})));
    char* x805637 = x805624;
    char* x805638 = strncpy(x832851, x805637, x805633);
    x793374 += 1;
    struct PARTSUPPRecord* x832859 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x832859, 0, 1 * sizeof(struct PARTSUPPRecord));
    long x832860 = mallocSym_808394_832276;
    mallocSym_808394_832276 = (x832860+(((long){1})));
    x832859->PS_PARTKEY = x805605; x832859->PS_SUPPKEY = x805610; x832859->PS_AVAILQTY = x805615;
    numeric_int_t x793386 = x793375;
    struct PARTSUPPRecord x807455 = *x832859;
    *(x832788 + x793386) = x807455;
    struct PARTSUPPRecord* x807457 = &(x832788[x793386]);
    x832859 = x807457;
    numeric_int_t x793388 = x793375;
    x793375 = (x793388+(1));
  };
  FILE* x805646 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x805647 = 0;
  numeric_int_t x805648 = x805647;
  numeric_int_t* x805649 = &x805648;
  numeric_int_t x805650 = fscanf(x805646, "%d", x805649);
  pclose(x805646);
  struct LINEITEMRecord* x832880 = (struct LINEITEMRecord*)malloc(x805648 * sizeof(struct LINEITEMRecord));
  memset(x832880, 0, x805648 * sizeof(struct LINEITEMRecord));
  long x832881 = mallocSym_807468_832266;
  mallocSym_807468_832266 = (x832881+(((long){x805648})));
  numeric_int_t x805654 = O_RDONLY;
  numeric_int_t x805655 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x805654);
  /* VAR */ struct stat x805656 = x805267;
  struct stat x805657 = x805656;
  struct stat* x805658 = &x805657;
  numeric_int_t x805659 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x805658);
  numeric_int_t x805661 = PROT_READ;
  numeric_int_t x805662 = MAP_PRIVATE;
  char* x793394 = mmap(NULL, (x805658->st_size), x805661, x805662, x805655, 0);
  /* VAR */ numeric_int_t x793395 = 0;
  while(1) {
    
    numeric_int_t x793396 = x793395;
    /* VAR */ boolean_t ite824187 = 0;
    if((x793396<(x805648))) {
      char x828513 = *x793394;
      ite824187 = (x828513!=('\0'));
    } else {
      
      ite824187 = 0;
    };
    boolean_t x822182 = ite824187;
    if (!(x822182)) break; 
    
    /* VAR */ numeric_int_t x805670 = 0;
    numeric_int_t x805671 = x805670;
    numeric_int_t* x805672 = &x805671;
    char* x805673 = strntoi_unchecked(x793394, x805672);
    x793394 = x805673;
    /* VAR */ numeric_int_t x805675 = 0;
    numeric_int_t x805676 = x805675;
    numeric_int_t* x805677 = &x805676;
    char* x805678 = strntoi_unchecked(x793394, x805677);
    x793394 = x805678;
    /* VAR */ numeric_int_t x805680 = 0;
    numeric_int_t x805681 = x805680;
    numeric_int_t* x805682 = &x805681;
    char* x805683 = strntoi_unchecked(x793394, x805682);
    x793394 = x805683;
    /* VAR */ numeric_int_t x805685 = 0;
    numeric_int_t x805686 = x805685;
    numeric_int_t* x805687 = &x805686;
    char* x805688 = strntoi_unchecked(x793394, x805687);
    x793394 = x805688;
    /* VAR */ double x805690 = 0.0;
    double x805691 = x805690;
    double* x805692 = &x805691;
    char* x805693 = strntod_unchecked(x793394, x805692);
    x793394 = x805693;
    /* VAR */ double x805695 = 0.0;
    double x805696 = x805695;
    double* x805697 = &x805696;
    char* x805698 = strntod_unchecked(x793394, x805697);
    x793394 = x805698;
    /* VAR */ double x805700 = 0.0;
    double x805701 = x805700;
    double* x805702 = &x805701;
    char* x805703 = strntod_unchecked(x793394, x805702);
    x793394 = x805703;
    /* VAR */ double x805705 = 0.0;
    double x805706 = x805705;
    double* x805707 = &x805706;
    char* x805708 = strntod_unchecked(x793394, x805707);
    x793394 = x805708;
    char x805710 = *x793394;
    /* VAR */ char x805711 = x805710;
    x793394 += 1;
    x793394 += 1;
    char x805715 = *x793394;
    /* VAR */ char x805716 = x805715;
    x793394 += 1;
    x793394 += 1;
    /* VAR */ numeric_int_t x805720 = 0;
    numeric_int_t x805721 = x805720;
    numeric_int_t* x805722 = &x805721;
    char* x805723 = strntoi_unchecked(x793394, x805722);
    x793394 = x805723;
    /* VAR */ numeric_int_t x805725 = 0;
    numeric_int_t x805726 = x805725;
    numeric_int_t* x805727 = &x805726;
    char* x805728 = strntoi_unchecked(x793394, x805727);
    x793394 = x805728;
    /* VAR */ numeric_int_t x805730 = 0;
    numeric_int_t x805731 = x805730;
    numeric_int_t* x805732 = &x805731;
    char* x805733 = strntoi_unchecked(x793394, x805732);
    x793394 = x805733;
    /* VAR */ numeric_int_t x805739 = 0;
    numeric_int_t x805740 = x805739;
    numeric_int_t* x805741 = &x805740;
    char* x805742 = strntoi_unchecked(x793394, x805741);
    x793394 = x805742;
    /* VAR */ numeric_int_t x805744 = 0;
    numeric_int_t x805745 = x805744;
    numeric_int_t* x805746 = &x805745;
    char* x805747 = strntoi_unchecked(x793394, x805746);
    x793394 = x805747;
    /* VAR */ numeric_int_t x805749 = 0;
    numeric_int_t x805750 = x805749;
    numeric_int_t* x805751 = &x805750;
    char* x805752 = strntoi_unchecked(x793394, x805751);
    x793394 = x805752;
    /* VAR */ numeric_int_t x805758 = 0;
    numeric_int_t x805759 = x805758;
    numeric_int_t* x805760 = &x805759;
    char* x805761 = strntoi_unchecked(x793394, x805760);
    x793394 = x805761;
    /* VAR */ numeric_int_t x805763 = 0;
    numeric_int_t x805764 = x805763;
    numeric_int_t* x805765 = &x805764;
    char* x805766 = strntoi_unchecked(x793394, x805765);
    x793394 = x805766;
    /* VAR */ numeric_int_t x805768 = 0;
    numeric_int_t x805769 = x805768;
    numeric_int_t* x805770 = &x805769;
    char* x805771 = strntoi_unchecked(x793394, x805770);
    x793394 = x805771;
    /* VAR */ char* x805777 = x793394;
    while(1) {
      
      char x805778 = *x793394;
      /* VAR */ boolean_t ite824307 = 0;
      if((x805778!=('|'))) {
        char x828632 = *x793394;
        ite824307 = (x828632!=('\n'));
      } else {
        
        ite824307 = 0;
      };
      boolean_t x822295 = ite824307;
      if (!(x822295)) break; 
      
      x793394 += 1;
    };
    char* x805785 = x805777;
    numeric_int_t x805786 = x793394 - x805785;
    numeric_int_t x805787 = x805786+(1);
    char* x833030 = (char*)malloc(x805787 * sizeof(char));
    memset(x833030, 0, x805787 * sizeof(char));
    long x833031 = mallocSym_807604_832295;
    mallocSym_807604_832295 = (x833031+(((long){x805787})));
    char* x805790 = x805777;
    char* x805791 = strncpy(x833030, x805790, x805786);
    x793394 += 1;
    /* VAR */ char* x805793 = x793394;
    while(1) {
      
      char x805794 = *x793394;
      /* VAR */ boolean_t ite824328 = 0;
      if((x805794!=('|'))) {
        char x828652 = *x793394;
        ite824328 = (x828652!=('\n'));
      } else {
        
        ite824328 = 0;
      };
      boolean_t x822309 = ite824328;
      if (!(x822309)) break; 
      
      x793394 += 1;
    };
    char* x805801 = x805793;
    numeric_int_t x805802 = x793394 - x805801;
    numeric_int_t x805803 = x805802+(1);
    char* x833054 = (char*)malloc(x805803 * sizeof(char));
    memset(x833054, 0, x805803 * sizeof(char));
    long x833055 = mallocSym_807620_832264;
    mallocSym_807620_832264 = (x833055+(((long){x805803})));
    char* x805806 = x805793;
    char* x805807 = strncpy(x833054, x805806, x805802);
    x793394 += 1;
    /* VAR */ char* x805809 = x793394;
    while(1) {
      
      char x805810 = *x793394;
      /* VAR */ boolean_t ite824349 = 0;
      if((x805810!=('|'))) {
        char x828672 = *x793394;
        ite824349 = (x828672!=('\n'));
      } else {
        
        ite824349 = 0;
      };
      boolean_t x822323 = ite824349;
      if (!(x822323)) break; 
      
      x793394 += 1;
    };
    char* x805817 = x805809;
    numeric_int_t x805818 = x793394 - x805817;
    numeric_int_t x805819 = x805818+(1);
    char* x833078 = (char*)malloc(x805819 * sizeof(char));
    memset(x833078, 0, x805819 * sizeof(char));
    long x833079 = mallocSym_807636_832265;
    mallocSym_807636_832265 = (x833079+(((long){x805819})));
    char* x805822 = x805809;
    char* x805823 = strncpy(x833078, x805822, x805818);
    x793394 += 1;
    struct LINEITEMRecord* x833086 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x833086, 0, 1 * sizeof(struct LINEITEMRecord));
    long x833087 = mallocSym_808584_832300;
    mallocSym_808584_832300 = (x833087+(((long){1})));
    x833086->L_PARTKEY = x805676; x833086->L_SUPPKEY = x805681; x833086->L_QUANTITY = x805691; x833086->L_SHIPDATE = (((x805721*(10000))+((x805726*(100))))+(x805731));
    numeric_int_t x793417 = x793395;
    struct LINEITEMRecord x807643 = *x833086;
    *(x832880 + x793417) = x807643;
    struct LINEITEMRecord* x807645 = &(x832880[x793417]);
    x833086 = x807645;
    numeric_int_t x793419 = x793395;
    x793395 = (x793419+(1));
  };
  numeric_int_t x793424 = 0;
  for(; x793424 < 1 ; x793424 += 1) {
    
    /* VAR */ numeric_int_t x829417 = 0;
    struct Set_AGGRecord_Q20GRPRecord* x833887 = (struct Set_AGGRecord_Q20GRPRecord*)malloc(1048576 * sizeof(struct Set_AGGRecord_Q20GRPRecord));
    memset(x833887, 0, 1048576 * sizeof(struct Set_AGGRecord_Q20GRPRecord));
    long x833888 = mallocSym_829418_832296;
    mallocSym_829418_832296 = (x833888+(((long){1048576})));
    numeric_int_t x819247 = 0;
    for(; x819247 < 1048576 ; x819247 += 1) {
      
      struct AGGRecord_Q20GRPRecord* x833911 = (struct AGGRecord_Q20GRPRecord*)malloc(256 * sizeof(struct AGGRecord_Q20GRPRecord));
      memset(x833911, 0, 256 * sizeof(struct AGGRecord_Q20GRPRecord));
      long x833912 = mallocSym_819248_832302;
      mallocSym_819248_832302 = (x833912+(((long){256})));
      struct Set_AGGRecord_Q20GRPRecord* x833916 = (struct Set_AGGRecord_Q20GRPRecord*)malloc(1 * sizeof(struct Set_AGGRecord_Q20GRPRecord));
      memset(x833916, 0, 1 * sizeof(struct Set_AGGRecord_Q20GRPRecord));
      long x833917 = mallocSym_819249_832278;
      mallocSym_819249_832278 = (x833917+(((long){1})));
      x833916->maxSize = 0; x833916->array = x833911;
      struct Set_AGGRecord_Q20GRPRecord x819252 = *x833916;
      *(x833887 + x819247) = x819252;
      struct Set_AGGRecord_Q20GRPRecord* x819254 = &(x833887[x819247]);
      x833916 = x819254;
    };
    struct LINEITEMRecord** x833927 = (struct LINEITEMRecord**)malloc(1600000 * sizeof(struct LINEITEMRecord*));
    memset(x833927, 0, 1600000 * sizeof(struct LINEITEMRecord*));
    long x833928 = mallocSym_829438_832299;
    long x833929 = (long){1600000};
    mallocSym_829438_832299 = (x833928+(x833929));
    numeric_int_t* x833932 = (numeric_int_t*)malloc(1600000 * sizeof(numeric_int_t));
    memset(x833932, 0, 1600000 * sizeof(numeric_int_t));
    long x833933 = mallocSym_829439_832282;
    mallocSym_829439_832282 = (x833933+(x833929));
    numeric_int_t x819262 = 0;
    for(; x819262 < 1600000 ; x819262 += 1) {
      
      *(x833932 + x819262) = 0;
    };
    /* VAR */ numeric_int_t x829445 = 0;
    numeric_int_t x819277 = 0;
    for(; x819277 < x805648 ; x819277 += 1) {
      
      struct LINEITEMRecord* x819278 = &(x832880[x819277]);
      numeric_int_t x819280 = (x819278->L_PARTKEY)%(1600000);
      numeric_int_t x819281 = x833932[x819280];
      *(x833932 + x819280) = (x819281+(1));
      numeric_int_t x819284 = x829445;
      x829445 = (x819284+(1));
    };
    numeric_int_t x819294 = 0;
    for(; x819294 < 1600000 ; x819294 += 1) {
      
      numeric_int_t x819295 = x833932[x819294];
      struct LINEITEMRecord* x833975 = (struct LINEITEMRecord*)malloc(x819295 * sizeof(struct LINEITEMRecord));
      memset(x833975, 0, x819295 * sizeof(struct LINEITEMRecord));
      long x833976 = mallocSym_819296_832285;
      mallocSym_819296_832285 = (x833976+(((long){x819295})));
      *(x833927 + x819294) = x833975;
      *(x833932 + x819294) = 0;
    };
    x829445 = 0;
    numeric_int_t x819318 = 0;
    for(; x819318 < x805648 ; x819318 += 1) {
      
      struct LINEITEMRecord* x819319 = &(x832880[x819318]);
      numeric_int_t x819321 = (x819319->L_PARTKEY)%(1600000);
      numeric_int_t x819322 = x833932[x819321];
      struct LINEITEMRecord* x819323 = x833927[x819321];
      struct LINEITEMRecord x819324 = *x819319;
      *(x819323 + x819322) = x819324;
      struct LINEITEMRecord* x819326 = &(x819323[x819322]);
      x819319 = x819326;
      numeric_int_t x819328 = x833932[x819321];
      *(x833932 + x819321) = (x819328+(1));
      numeric_int_t x819331 = x829445;
      x829445 = (x819331+(1));
    };
    /* VAR */ numeric_int_t x829512 = 0;
    struct Q20GRPRecord* x834017 = (struct Q20GRPRecord*)malloc(48000000 * sizeof(struct Q20GRPRecord));
    memset(x834017, 0, 48000000 * sizeof(struct Q20GRPRecord));
    long x834018 = mallocSym_829513_832269;
    mallocSym_829513_832269 = (x834018+(((long){48000000})));
    /* VAR */ numeric_int_t x829514 = 0;
    while(1) {
      
      numeric_int_t x804357 = x829514;
      if (!((x804357<(48000000)))) break; 
      
      numeric_int_t x804359 = x829514;
      struct Q20GRPRecord* x834027 = (struct Q20GRPRecord*)malloc(1 * sizeof(struct Q20GRPRecord));
      memset(x834027, 0, 1 * sizeof(struct Q20GRPRecord));
      long x834028 = mallocSym_808668_832270;
      mallocSym_808668_832270 = (x834028+(((long){1})));
      x834027->PS_PARTKEY = 0; x834027->PS_SUPPKEY = 0; x834027->PS_AVAILQTY = 0;
      struct Q20GRPRecord x807722 = *x834027;
      *(x834017 + x804359) = x807722;
      struct Q20GRPRecord* x807724 = &(x834017[x804359]);
      x834027 = x807724;
      numeric_int_t x804362 = x829514;
      x829514 = (x804362+(1));
    };
    /* VAR */ numeric_int_t x829529 = 0;
    double** x834042 = (double**)malloc(80000 * sizeof(double*));
    memset(x834042, 0, 80000 * sizeof(double*));
    long x834043 = mallocSym_829530_832273;
    long x834044 = (long){80000};
    mallocSym_829530_832273 = (x834043+(x834044));
    /* VAR */ numeric_int_t x829531 = 0;
    while(1) {
      
      numeric_int_t x804369 = x829531;
      if (!((x804369<(80000)))) break; 
      
      numeric_int_t x804371 = x829531;
      double* x834052 = (double*)malloc(1 * sizeof(double));
      memset(x834052, 0, 1 * sizeof(double));
      long x834053 = mallocSym_807736_832293;
      mallocSym_807736_832293 = (x834053+(((long){1})));
      *(x834042 + x804371) = x834052;
      numeric_int_t x804374 = x829531;
      x829531 = (x804374+(1));
    };
    /* VAR */ numeric_int_t x829541 = 0;
    struct AGGRecord_Q20GRPRecord* x834062 = (struct AGGRecord_Q20GRPRecord*)malloc(80000 * sizeof(struct AGGRecord_Q20GRPRecord));
    memset(x834062, 0, 80000 * sizeof(struct AGGRecord_Q20GRPRecord));
    long x834063 = mallocSym_829542_832259;
    mallocSym_829542_832259 = (x834063+(x834044));
    /* VAR */ numeric_int_t x829543 = 0;
    while(1) {
      
      numeric_int_t x804381 = x829543;
      if (!((x804381<(80000)))) break; 
      
      numeric_int_t x804383 = x829543;
      struct Q20GRPRecord* x804384 = &(x834017[x804383]);
      double* x804385 = x834042[x804383];
      struct AGGRecord_Q20GRPRecord* x834073 = (struct AGGRecord_Q20GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q20GRPRecord));
      memset(x834073, 0, 1 * sizeof(struct AGGRecord_Q20GRPRecord));
      long x834074 = mallocSym_808699_832267;
      mallocSym_808699_832267 = (x834074+(((long){1})));
      x834073->key = x804384; x834073->aggs = x804385;
      struct AGGRecord_Q20GRPRecord x807751 = *x834073;
      *(x834062 + x804383) = x807751;
      struct AGGRecord_Q20GRPRecord* x807753 = &(x834062[x804383]);
      x834073 = x807753;
      numeric_int_t x804388 = x829543;
      x829543 = (x804388+(1));
    };
    /* VAR */ numeric_int_t x829560 = 0;
    struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x834088 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*)malloc(80000 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
    memset(x834088, 0, 80000 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
    long x834089 = mallocSym_829561_832286;
    mallocSym_829561_832286 = (x834089+(x834044));
    /* VAR */ numeric_int_t x829562 = 0;
    while(1) {
      
      numeric_int_t x804395 = x829562;
      if (!((x804395<(80000)))) break; 
      
      numeric_int_t x804397 = x829562;
      struct Q20GRPRecord* x804398 = &(x834017[x804397]);
      double* x804399 = x834042[x804397];
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x834099 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
      memset(x834099, 0, 1 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
      long x834100 = mallocSym_808718_832298;
      mallocSym_808718_832298 = (x834100+(((long){1})));
      x834099->N_NATIONKEY = 0; x834099->N_NAME = ""; x834099->key = x804398; x834099->aggs = x804399; x834099->S_SUPPKEY = 0; x834099->S_NAME = ""; x834099->S_ADDRESS = ""; x834099->S_NATIONKEY = 0;
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord x807768 = *x834099;
      *(x834088 + x804397) = x807768;
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x807770 = &(x834088[x804397]);
      x834099 = x807770;
      numeric_int_t x804402 = x829562;
      x829562 = (x804402+(1));
    };
    struct timeval x829579 = (struct timeval){0};
    /* VAR */ struct timeval x829580 = x829579;
    struct timeval x829581 = x829580;
    /* VAR */ struct timeval x829582 = x829579;
    struct timeval x829583 = x829582;
    /* VAR */ struct timeval x829584 = x829579;
    struct timeval x829585 = x829584;
    struct timeval* x829586 = &x829583;
    gettimeofday(x829586, NULL);
    /* VAR */ numeric_int_t x829588 = 0;
    numeric_int_t* x829601 = &(x829595);
    GTree* x829602 = g_tree_new(x829601);
    /* VAR */ boolean_t x829603 = 0;
    /* VAR */ numeric_int_t x829604 = 0;
    while(1) {
      
      numeric_int_t x829606 = x829588;
      if (!((x829606<(x805582)))) break; 
      
      numeric_int_t x795526 = x829588;
      struct PARTSUPPRecord* x793591 = &(x832788[x795526]);
      numeric_int_t x793593 = x793591->PS_PARTKEY;
      struct PARTRecord* x802969 = &(x832581[(x793593-(1))]);
      numeric_int_t x817471 = strlen("azure");
      numeric_int_t x817472 = strncmp((x802969->P_NAME), "azure", x817471);
      if((x817472==(0))) {
        if(((x802969->P_PARTKEY)==(x793593))) {
          if(((x802969->P_PARTKEY)==(x793593))) {
            numeric_int_t x794235 = x793591->PS_SUPPKEY;
            numeric_int_t x797334 = x793593%(1600000);
            numeric_int_t x797335 = x833932[x797334];
            struct LINEITEMRecord* x797336 = x833927[x797334];
            numeric_int_t x819546 = 0;
            for(; x819546 < x797335 ; x819546 += 1) {
              
              struct LINEITEMRecord* x819547 = &(x797336[x819546]);
              numeric_int_t x819548 = x819547->L_SHIPDATE;
              /* VAR */ boolean_t ite825460 = 0;
              if((x819548>=(19960101))) {
                ite825460 = (x819548<(19970101));
              } else {
                
                ite825460 = 0;
              };
              boolean_t x823326 = ite825460;
              if(x823326) {
                /* VAR */ boolean_t ite825471 = 0;
                if((x793593==((x819547->L_PARTKEY)))) {
                  ite825471 = (x794235==((x819547->L_SUPPKEY)));
                } else {
                  
                  ite825471 = 0;
                };
                boolean_t x823331 = ite825471;
                if(x823331) {
                  numeric_int_t x804460 = x829512;
                  struct Q20GRPRecord* x804461 = &(x834017[x804460]);
                  x804461->PS_PARTKEY = x793593;
                  x804461->PS_SUPPKEY = x794235;
                  x804461->PS_AVAILQTY = (x793591->PS_AVAILQTY);
                  numeric_int_t x804465 = x829512;
                  x829512 = (x804465+(1));
                  numeric_int_t x814581 = x804461->PS_PARTKEY;
                  numeric_int_t x814583 = x804461->PS_SUPPKEY;
                  numeric_int_t x814585 = x804461->PS_AVAILQTY;
                  numeric_int_t x798896 = ((x814581+(x814583))+(x814585))&(1048575);
                  struct Set_AGGRecord_Q20GRPRecord* x799972 = &(x833887[x798896]);
                  numeric_int_t x798898 = x829417;
                  if((x798896>(x798898))) {
                    x829417 = x798896;
                  };
                  /* VAR */ numeric_int_t i799981 = 0;
                  /* VAR */ boolean_t found799982 = 0;
                  while(1) {
                    
                    numeric_int_t x799983 = i799981;
                    numeric_int_t x799984 = x799972->maxSize;
                    /* VAR */ boolean_t ite825507 = 0;
                    if((x799983<(x799984))) {
                      boolean_t x829808 = found799982;
                      boolean_t x829809 = !(x829808);
                      ite825507 = x829809;
                    } else {
                      
                      ite825507 = 0;
                    };
                    boolean_t x823360 = ite825507;
                    if (!(x823360)) break; 
                    
                    numeric_int_t x799990 = i799981;
                    struct AGGRecord_Q20GRPRecord* x799991 = &(((struct AGGRecord_Q20GRPRecord*) { x799972->array })[x799990]);
                    struct Q20GRPRecord* x799992 = x799991->key;
                    /* VAR */ boolean_t ite825526 = 0;
                    if(((x799992->PS_PARTKEY)==(x814581))) {
                      ite825526 = ((x799992->PS_SUPPKEY)==(x814583));
                    } else {
                      
                      ite825526 = 0;
                    };
                    boolean_t x823372 = ite825526;
                    /* VAR */ boolean_t ite825533 = 0;
                    if(x823372) {
                      ite825533 = ((x799992->PS_AVAILQTY)==(x814585));
                    } else {
                      
                      ite825533 = 0;
                    };
                    boolean_t x823374 = ite825533;
                    if(x823374) {
                      found799982 = 1;
                    } else {
                      
                      numeric_int_t x799995 = i799981;
                      i799981 = (x799995+(1));
                    };
                  };
                  boolean_t x800000 = found799982;
                  boolean_t x800001 = !(x800000);
                  /* VAR */ struct AGGRecord_Q20GRPRecord** ite823383 = 0;
                  if(x800001) {
                    ite823383 = NULL;
                  } else {
                    
                    numeric_int_t x823386 = i799981;
                    struct AGGRecord_Q20GRPRecord* x823387 = &(((struct AGGRecord_Q20GRPRecord*) { x799972->array })[x823386]);
                    ite823383 = x823387;
                  };
                  struct AGGRecord_Q20GRPRecord** x800008 = ite823383;
                  /* VAR */ struct AGGRecord_Q20GRPRecord* ite823393 = 0;
                  if((x800008!=(NULL))) {
                    ite823393 = x800008;
                  } else {
                    
                    numeric_int_t x823395 = x829529;
                    double* x823396 = x834042[x823395];
                    numeric_int_t x823397 = x829529;
                    x829529 = (x823397+(1));
                    numeric_int_t x823400 = x829541;
                    struct AGGRecord_Q20GRPRecord* x823401 = &(x834062[x823400]);
                    x823401->key = x804461;
                    x823401->aggs = x823396;
                    numeric_int_t x823404 = x829541;
                    x829541 = (x823404+(1));
                    struct AGGRecord_Q20GRPRecord* x823407 = x799972->array;
                    numeric_int_t x823408 = x799972->maxSize;
                    struct AGGRecord_Q20GRPRecord x823409 = *x823401;
                    *(x823407 + x823408) = x823409;
                    struct AGGRecord_Q20GRPRecord* x823411 = &(x823407[x823408]);
                    x823401 = x823411;
                    numeric_int_t x823413 = x799972->maxSize;
                    x799972->maxSize = (x823413+(1));
                    ite823393 = x823401;
                  };
                  struct AGGRecord_Q20GRPRecord* x798911 = ite823393;
                  double* x793702 = x798911->aggs;
                  double x793716 = x793702[0];
                  *x793702 = (x793716+((x819547->L_QUANTITY)));
                };
              };
            };
          };
        };
      };
      numeric_int_t x795560 = x829588;
      x829588 = (x795560+(1));
    };
    numeric_int_t x829887 = x829417;
    numeric_int_t x819750 = 0;
    for(; x819750 < (x829887+(1)) ; x819750 += 1) {
      
      struct Set_AGGRecord_Q20GRPRecord* x819751 = &(x833887[x819750]);
      numeric_int_t x819752 = x819751->maxSize;
      numeric_int_t x819699 = 0;
      for(; x819699 < x819752 ; x819699 += 1) {
        
        struct AGGRecord_Q20GRPRecord* x819701 = &(((struct AGGRecord_Q20GRPRecord*) { x819751->array })[x819699]);
        struct Q20GRPRecord* x819702 = x819701->key;
        double x819706 = ((double*) { x819701->aggs })[0];
        if(((x819702->PS_AVAILQTY)>((0.5*(x819706))))) {
          struct SUPPLIERRecord* x797394 = &(x832422[((x819702->PS_SUPPKEY)-(1))]);
          numeric_int_t x793758 = x797394->S_SUPPKEY;
          struct Q20GRPRecord* x803075 = x819701->key;
          if(((x803075->PS_SUPPKEY)==(x793758))) {
            numeric_int_t x794460 = x797394->S_NATIONKEY;
            struct NATIONRecord* x803084 = &(x832315[(x794460-(0))]);
            boolean_t x817619 = strcmp((x803084->N_NAME), "JORDAN");
            if((x817619==(0))) {
              if(((x803084->N_NATIONKEY)==(x794460))) {
                numeric_int_t x797413 = x803084->N_NATIONKEY;
                if((x797413==(x794460))) {
                  numeric_int_t x804572 = x829560;
                  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x804573 = &(x834088[x804572]);
                  x804573->N_NATIONKEY = x797413;
                  x804573->N_NAME = (x803084->N_NAME);
                  x804573->key = x803075;
                  x804573->aggs = ((double*) { x819701->aggs });
                  x804573->S_SUPPKEY = x793758;
                  x804573->S_NAME = (x797394->S_NAME);
                  x804573->S_ADDRESS = (x797394->S_ADDRESS);
                  x804573->S_NATIONKEY = x794460;
                  numeric_int_t x804582 = x829560;
                  x829560 = (x804582+(1));
                  g_tree_insert(x829602, x804573, x804573);
                };
              };
            };
          };
        };
      };
    };
    while(1) {
      
      boolean_t x795787 = x829603;
      boolean_t x793839 = !(x795787);
      /* VAR */ boolean_t ite825801 = 0;
      if(x793839) {
        numeric_int_t x830099 = g_tree_nnodes(x829602);
        ite825801 = (x830099!=(0));
      } else {
        
        ite825801 = 0;
      };
      boolean_t x823637 = ite825801;
      if (!(x823637)) break; 
      
      void* x810834 = NULL;
      void** x810842 = &(x810834);
      g_tree_foreach(x829602, x810841, x810842);
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x810844 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*){x810834};
      numeric_int_t x810845 = g_tree_remove(x829602, x810844);
      if(0) {
        x829603 = 1;
      } else {
        
        printf("%s|%s\n", (x810844->S_NAME), (x810844->S_ADDRESS));
        numeric_int_t x795805 = x829604;
        x829604 = (x795805+(1));
      };
    };
    numeric_int_t x830125 = x829604;
    printf("(%d rows)\n", x830125);
    struct timeval* x830127 = &x829585;
    gettimeofday(x830127, NULL);
    struct timeval* x830129 = &x829581;
    struct timeval* x830130 = &x829585;
    struct timeval* x830131 = &x829583;
    long x830132 = timeval_subtract(x830129, x830130, x830131);
    printf("Generated code run in %ld milliseconds.\n", x830132);
  };
  /* VAR */ long mallocSum834668 = 0L;
  long x834669 = mallocSym_829542_832259;
  numeric_int_t x834670 = sizeof(struct AGGRecord_Q20GRPRecord);
  long x834672 = x834669*(((long){x834670}));
  printf("834062 with type AGGRecord_Q20GRPRecord: %ld\n", x834672);
  long x834674 = mallocSum834668;
  mallocSum834668 = (x834674+(x834672));
  long x834677 = mallocSym_807321_832260;
  numeric_int_t x834678 = sizeof(char);
  long x834680 = x834677*(((long){x834678}));
  printf("832677 with type Byte: %ld\n", x834680);
  long x834682 = mallocSum834668;
  mallocSum834668 = (x834682+(x834680));
  long x834685 = mallocSym_807143_832261;
  numeric_int_t x834686 = sizeof(struct SUPPLIERRecord);
  long x834688 = x834685*(((long){x834686}));
  printf("832422 with type SUPPLIERRecord: %ld\n", x834688);
  long x834690 = mallocSum834668;
  mallocSum834668 = (x834690+(x834688));
  long x834693 = mallocSym_807448_832262;
  numeric_int_t x834694 = sizeof(char);
  long x834696 = x834693*(((long){x834694}));
  printf("832851 with type Byte: %ld\n", x834696);
  long x834698 = mallocSum834668;
  mallocSum834668 = (x834698+(x834696));
  long x834701 = mallocSym_807289_832263;
  numeric_int_t x834702 = sizeof(char);
  long x834704 = x834701*(((long){x834702}));
  printf("832629 with type Byte: %ld\n", x834704);
  long x834706 = mallocSum834668;
  mallocSum834668 = (x834706+(x834704));
  long x834709 = mallocSym_807620_832264;
  numeric_int_t x834710 = sizeof(char);
  long x834712 = x834709*(((long){x834710}));
  printf("833054 with type Byte: %ld\n", x834712);
  long x834714 = mallocSum834668;
  mallocSum834668 = (x834714+(x834712));
  long x834717 = mallocSym_807636_832265;
  numeric_int_t x834718 = sizeof(char);
  long x834720 = x834717*(((long){x834718}));
  printf("833078 with type Byte: %ld\n", x834720);
  long x834722 = mallocSum834668;
  mallocSum834668 = (x834722+(x834720));
  long x834725 = mallocSym_807468_832266;
  numeric_int_t x834726 = sizeof(struct LINEITEMRecord);
  long x834728 = x834725*(((long){x834726}));
  printf("832880 with type LINEITEMRecord: %ld\n", x834728);
  long x834730 = mallocSum834668;
  mallocSum834668 = (x834730+(x834728));
  long x834733 = mallocSym_808699_832267;
  numeric_int_t x834734 = sizeof(struct AGGRecord_Q20GRPRecord);
  long x834736 = x834733*(((long){x834734}));
  printf("834073 with type AGGRecord_Q20GRPRecord: %ld\n", x834736);
  long x834738 = mallocSum834668;
  mallocSum834668 = (x834738+(x834736));
  long x834741 = mallocSym_807255_832268;
  numeric_int_t x834742 = sizeof(struct PARTRecord);
  long x834744 = x834741*(((long){x834742}));
  printf("832581 with type PARTRecord: %ld\n", x834744);
  long x834746 = mallocSum834668;
  mallocSum834668 = (x834746+(x834744));
  long x834749 = mallocSym_829513_832269;
  numeric_int_t x834750 = sizeof(struct Q20GRPRecord);
  long x834752 = x834749*(((long){x834750}));
  printf("834017 with type Q20GRPRecord: %ld\n", x834752);
  long x834754 = mallocSum834668;
  mallocSum834668 = (x834754+(x834752));
  long x834757 = mallocSym_808668_832270;
  numeric_int_t x834758 = sizeof(struct Q20GRPRecord);
  long x834760 = x834757*(((long){x834758}));
  printf("834027 with type Q20GRPRecord: %ld\n", x834760);
  long x834762 = mallocSum834668;
  mallocSum834668 = (x834762+(x834760));
  long x834765 = mallocSym_807399_832271;
  numeric_int_t x834766 = sizeof(struct PARTSUPPRecord);
  long x834768 = x834765*(((long){x834766}));
  printf("832788 with type PARTSUPPRecord: %ld\n", x834768);
  long x834770 = mallocSum834668;
  mallocSum834668 = (x834770+(x834768));
  long x834773 = mallocSym_807337_832272;
  numeric_int_t x834774 = sizeof(char);
  long x834776 = x834773*(((long){x834774}));
  printf("832701 with type Byte: %ld\n", x834776);
  long x834778 = mallocSum834668;
  mallocSum834668 = (x834778+(x834776));
  long x834781 = mallocSym_829530_832273;
  numeric_int_t x834782 = sizeof(double*);
  long x834784 = x834781*(((long){x834782}));
  printf("834042 with type Pointer[Double]: %ld\n", x834784);
  long x834786 = mallocSum834668;
  mallocSum834668 = (x834786+(x834784));
  long x834789 = mallocSym_807102_832274;
  numeric_int_t x834790 = sizeof(char);
  long x834792 = x834789*(((long){x834790}));
  printf("832364 with type Byte: %ld\n", x834792);
  long x834794 = mallocSum834668;
  mallocSum834668 = (x834794+(x834792));
  long x834797 = mallocSym_807235_832275;
  numeric_int_t x834798 = sizeof(char);
  long x834800 = x834797*(((long){x834798}));
  printf("832552 with type Byte: %ld\n", x834800);
  long x834802 = mallocSum834668;
  mallocSum834668 = (x834802+(x834800));
  long x834805 = mallocSym_808394_832276;
  numeric_int_t x834806 = sizeof(struct PARTSUPPRecord);
  long x834808 = x834805*(((long){x834806}));
  printf("832859 with type PARTSUPPRecord: %ld\n", x834808);
  long x834810 = mallocSum834668;
  mallocSum834668 = (x834810+(x834808));
  long x834813 = mallocSym_807123_832277;
  numeric_int_t x834814 = sizeof(char);
  long x834816 = x834813*(((long){x834814}));
  printf("832393 with type Byte: %ld\n", x834816);
  long x834818 = mallocSum834668;
  mallocSum834668 = (x834818+(x834816));
  long x834821 = mallocSym_819249_832278;
  numeric_int_t x834822 = sizeof(struct Set_AGGRecord_Q20GRPRecord);
  long x834824 = x834821*(((long){x834822}));
  printf("833916 with type Set_AGGRecord_Q20GRPRecord: %ld\n", x834824);
  long x834826 = mallocSum834668;
  mallocSum834668 = (x834826+(x834824));
  long x834829 = mallocSym_807690_832279;
  numeric_int_t x834830 = sizeof(struct LINEITEMRecord);
  long x834832 = x834829*(((long){x834830}));
  printf("833966 with type LINEITEMRecord: %ld\n", x834832);
  long x834834 = mallocSum834668;
  mallocSum834668 = (x834834+(x834832));
  long x834837 = mallocSym_807658_832280;
  numeric_int_t x834838 = sizeof(struct AGGRecord_Q20GRPRecord);
  long x834840 = x834837*(((long){x834838}));
  printf("833894 with type AGGRecord_Q20GRPRecord: %ld\n", x834840);
  long x834842 = mallocSum834668;
  mallocSum834668 = (x834842+(x834840));
  long x834845 = mallocSym_807305_832281;
  numeric_int_t x834846 = sizeof(char);
  long x834848 = x834845*(((long){x834846}));
  printf("832653 with type Byte: %ld\n", x834848);
  long x834850 = mallocSum834668;
  mallocSum834668 = (x834850+(x834848));
  long x834853 = mallocSym_829439_832282;
  numeric_int_t x834854 = sizeof(numeric_int_t);
  long x834856 = x834853*(((long){x834854}));
  printf("833932 with type Int: %ld\n", x834856);
  long x834858 = mallocSum834668;
  mallocSum834668 = (x834858+(x834856));
  long x834861 = mallocSym_807214_832283;
  numeric_int_t x834862 = sizeof(char);
  long x834864 = x834861*(((long){x834862}));
  printf("832523 with type Byte: %ld\n", x834864);
  long x834866 = mallocSum834668;
  mallocSum834668 = (x834866+(x834864));
  long x834869 = mallocSym_807715_832284;
  numeric_int_t x834870 = sizeof(struct Q20GRPRecord);
  long x834872 = x834869*(((long){x834870}));
  printf("833234 with type Q20GRPRecord: %ld\n", x834872);
  long x834874 = mallocSum834668;
  mallocSum834668 = (x834874+(x834872));
  long x834877 = mallocSym_819296_832285;
  numeric_int_t x834878 = sizeof(struct LINEITEMRecord);
  long x834880 = x834877*(((long){x834878}));
  printf("833975 with type LINEITEMRecord: %ld\n", x834880);
  long x834882 = mallocSum834668;
  mallocSum834668 = (x834882+(x834880));
  long x834885 = mallocSym_829561_832286;
  numeric_int_t x834886 = sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord);
  long x834888 = x834885*(((long){x834886}));
  printf("834088 with type NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord: %ld\n", x834888);
  long x834890 = mallocSum834668;
  mallocSum834668 = (x834890+(x834888));
  long x834893 = mallocSym_808604_832287;
  numeric_int_t x834894 = sizeof(struct Set_AGGRecord_Q20GRPRecord);
  long x834896 = x834893*(((long){x834894}));
  printf("833899 with type Set_AGGRecord_Q20GRPRecord: %ld\n", x834896);
  long x834898 = mallocSum834668;
  mallocSum834668 = (x834898+(x834896));
  long x834901 = mallocSym_807358_832288;
  numeric_int_t x834902 = sizeof(char);
  long x834904 = x834901*(((long){x834902}));
  printf("832730 with type Byte: %ld\n", x834904);
  long x834906 = mallocSum834668;
  mallocSum834668 = (x834906+(x834904));
  long x834909 = mallocSym_808177_832289;
  numeric_int_t x834910 = sizeof(struct SUPPLIERRecord);
  long x834912 = x834909*(((long){x834910}));
  printf("832560 with type SUPPLIERRecord: %ld\n", x834912);
  long x834914 = mallocSum834668;
  mallocSum834668 = (x834914+(x834912));
  long x834917 = mallocSym_807654_832290;
  numeric_int_t x834918 = sizeof(struct Set_AGGRecord_Q20GRPRecord);
  long x834920 = x834917*(((long){x834918}));
  printf("833104 with type Set_AGGRecord_Q20GRPRecord: %ld\n", x834920);
  long x834922 = mallocSum834668;
  mallocSum834668 = (x834922+(x834920));
  long x834925 = mallocSym_807666_832291;
  numeric_int_t x834926 = sizeof(numeric_int_t);
  long x834928 = x834925*(((long){x834926}));
  printf("833149 with type Int: %ld\n", x834928);
  long x834930 = mallocSum834668;
  mallocSum834668 = (x834930+(x834928));
  long x834933 = mallocSym_807730_832292;
  numeric_int_t x834934 = sizeof(double*);
  long x834936 = x834933*(((long){x834934}));
  printf("833259 with type Pointer[Double]: %ld\n", x834936);
  long x834938 = mallocSum834668;
  mallocSum834668 = (x834938+(x834936));
  long x834941 = mallocSym_807736_832293;
  numeric_int_t x834942 = sizeof(double);
  long x834944 = x834941*(((long){x834942}));
  printf("834052 with type Double: %ld\n", x834944);
  long x834946 = mallocSum834668;
  mallocSum834668 = (x834946+(x834944));
  long x834949 = mallocSym_807067_832294;
  numeric_int_t x834950 = sizeof(struct NATIONRecord);
  long x834952 = x834949*(((long){x834950}));
  printf("832315 with type NATIONRecord: %ld\n", x834952);
  long x834954 = mallocSum834668;
  mallocSum834668 = (x834954+(x834952));
  long x834957 = mallocSym_807604_832295;
  numeric_int_t x834958 = sizeof(char);
  long x834960 = x834957*(((long){x834958}));
  printf("833030 with type Byte: %ld\n", x834960);
  long x834962 = mallocSum834668;
  mallocSum834668 = (x834962+(x834960));
  long x834965 = mallocSym_829418_832296;
  numeric_int_t x834966 = sizeof(struct Set_AGGRecord_Q20GRPRecord);
  long x834968 = x834965*(((long){x834966}));
  printf("833887 with type Set_AGGRecord_Q20GRPRecord: %ld\n", x834968);
  long x834970 = mallocSum834668;
  mallocSum834668 = (x834970+(x834968));
  long x834973 = mallocSym_808323_832297;
  numeric_int_t x834974 = sizeof(struct PARTRecord);
  long x834976 = x834973*(((long){x834974}));
  printf("832767 with type PARTRecord: %ld\n", x834976);
  long x834978 = mallocSum834668;
  mallocSum834668 = (x834978+(x834976));
  long x834981 = mallocSym_808718_832298;
  numeric_int_t x834982 = sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord);
  long x834984 = x834981*(((long){x834982}));
  printf("834099 with type NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord: %ld\n", x834984);
  long x834986 = mallocSum834668;
  mallocSum834668 = (x834986+(x834984));
  long x834989 = mallocSym_829438_832299;
  numeric_int_t x834990 = sizeof(struct LINEITEMRecord*);
  long x834992 = x834989*(((long){x834990}));
  printf("833927 with type Pointer[LINEITEMRecord]: %ld\n", x834992);
  long x834994 = mallocSum834668;
  mallocSum834668 = (x834994+(x834992));
  long x834997 = mallocSym_808584_832300;
  numeric_int_t x834998 = sizeof(struct LINEITEMRecord);
  long x835000 = x834997*(((long){x834998}));
  printf("833086 with type LINEITEMRecord: %ld\n", x835000);
  long x835002 = mallocSum834668;
  mallocSum834668 = (x835002+(x835000));
  long x835005 = mallocSym_807177_832301;
  numeric_int_t x835006 = sizeof(char);
  long x835008 = x835005*(((long){x835006}));
  printf("832470 with type Byte: %ld\n", x835008);
  long x835010 = mallocSum834668;
  mallocSum834668 = (x835010+(x835008));
  long x835013 = mallocSym_819248_832302;
  numeric_int_t x835014 = sizeof(struct AGGRecord_Q20GRPRecord);
  long x835016 = x835013*(((long){x835014}));
  printf("833911 with type AGGRecord_Q20GRPRecord: %ld\n", x835016);
  long x835018 = mallocSum834668;
  mallocSum834668 = (x835018+(x835016));
  long x835021 = mallocSym_807379_832303;
  numeric_int_t x835022 = sizeof(char);
  long x835024 = x835021*(((long){x835022}));
  printf("832759 with type Byte: %ld\n", x835024);
  long x835026 = mallocSum834668;
  mallocSum834668 = (x835026+(x835024));
  long x835029 = mallocSym_807665_832304;
  numeric_int_t x835030 = sizeof(struct LINEITEMRecord*);
  long x835032 = x835029*(((long){x835030}));
  printf("833144 with type Pointer[LINEITEMRecord]: %ld\n", x835032);
  long x835034 = mallocSum834668;
  mallocSum834668 = (x835034+(x835032));
  long x835037 = mallocSym_807759_832305;
  numeric_int_t x835038 = sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord);
  long x835040 = x835037*(((long){x835038}));
  printf("833305 with type NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord: %ld\n", x835040);
  long x835042 = mallocSum834668;
  mallocSum834668 = (x835042+(x835040));
  long x835045 = mallocSym_808063_832306;
  numeric_int_t x835046 = sizeof(struct NATIONRecord);
  long x835048 = x835045*(((long){x835046}));
  printf("832401 with type NATIONRecord: %ld\n", x835048);
  long x835050 = mallocSum834668;
  mallocSum834668 = (x835050+(x835048));
  long x835053 = mallocSym_807193_832307;
  numeric_int_t x835054 = sizeof(char);
  long x835056 = x835053*(((long){x835054}));
  printf("832494 with type Byte: %ld\n", x835056);
  long x835058 = mallocSum834668;
  mallocSum834668 = (x835058+(x835056));
  long x835061 = mallocSym_807742_832308;
  numeric_int_t x835062 = sizeof(struct AGGRecord_Q20GRPRecord);
  long x835064 = x835061*(((long){x835062}));
  printf("833279 with type AGGRecord_Q20GRPRecord: %ld\n", x835064);
  long x835066 = mallocSum834668;
  mallocSum834668 = (x835066+(x835064));
  long x835069 = mallocSum834668;
  printf("total: %ld\n", x835069);
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x829595(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x793534, struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x793535) {
  numeric_int_t x817456 = strcmp((x793534->S_NAME), (x793535->S_NAME));
  return x817456; 
}

numeric_int_t x810841(void* x810835, void* x810836, void* x810837) {
  pointer_assign(((struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord**){x810837}), ((struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*){x810836}));
  return 1; 
}
