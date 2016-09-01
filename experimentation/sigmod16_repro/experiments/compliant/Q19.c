#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct PARTRecord;
  
  struct LINEITEMRecord {
  int L_ORDERKEY;
  int L_PARTKEY;
  int L_SUPPKEY;
  int L_LINENUMBER;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  double L_TAX;
  char L_RETURNFLAG;
  char L_LINESTATUS;
  int L_SHIPDATE;
  int L_COMMITDATE;
  int L_RECEIPTDATE;
  char* L_SHIPINSTRUCT;
  char* L_SHIPMODE;
  char* L_COMMENT;
  struct LINEITEMRecord* next;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  };
  
  

/* GLOBAL VARS */

struct timeval x12740;
int main(int argc, char** argv) {
  FILE* x13237 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x13238 = 0;
  int x13239 = x13238;
  int* x13240 = &x13239;
  int x13241 = fscanf(x13237, "%d", x13240);
  pclose(x13237);
  struct LINEITEMRecord* x14359 = (struct LINEITEMRecord*)malloc(x13239 * sizeof(struct LINEITEMRecord));
  memset(x14359, 0, x13239 * sizeof(struct LINEITEMRecord));
  int x13245 = O_RDONLY;
  int x13246 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x13245);
  struct stat x13247 = (struct stat){0};
  /* VAR */ struct stat x13248 = x13247;
  struct stat x13249 = x13248;
  struct stat* x13250 = &x13249;
  int x13251 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x13250);
  size_t x13252 = x13250->st_size;
  int x13253 = PROT_READ;
  int x13254 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x13252, x13253, x13254, x13246, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x13239);
    /* VAR */ int ite23163 = 0;
    if(x6) {
      char x29290 = *x3;
      int x29291 = x29290!=('\0');
      ite23163 = x29291;
    } else {
      
      ite23163 = 0;
    };
    int x22532 = ite23163;
    if (!(x22532)) break; 
    
    /* VAR */ int x13262 = 0;
    int x13263 = x13262;
    int* x13264 = &x13263;
    char* x13265 = strntoi_unchecked(x3, x13264);
    x3 = x13265;
    /* VAR */ int x13267 = 0;
    int x13268 = x13267;
    int* x13269 = &x13268;
    char* x13270 = strntoi_unchecked(x3, x13269);
    x3 = x13270;
    /* VAR */ int x13272 = 0;
    int x13273 = x13272;
    int* x13274 = &x13273;
    char* x13275 = strntoi_unchecked(x3, x13274);
    x3 = x13275;
    /* VAR */ int x13277 = 0;
    int x13278 = x13277;
    int* x13279 = &x13278;
    char* x13280 = strntoi_unchecked(x3, x13279);
    x3 = x13280;
    /* VAR */ double x13282 = 0.0;
    double x13283 = x13282;
    double* x13284 = &x13283;
    char* x13285 = strntod_unchecked(x3, x13284);
    x3 = x13285;
    /* VAR */ double x13287 = 0.0;
    double x13288 = x13287;
    double* x13289 = &x13288;
    char* x13290 = strntod_unchecked(x3, x13289);
    x3 = x13290;
    /* VAR */ double x13292 = 0.0;
    double x13293 = x13292;
    double* x13294 = &x13293;
    char* x13295 = strntod_unchecked(x3, x13294);
    x3 = x13295;
    /* VAR */ double x13297 = 0.0;
    double x13298 = x13297;
    double* x13299 = &x13298;
    char* x13300 = strntod_unchecked(x3, x13299);
    x3 = x13300;
    char x13302 = *x3;
    /* VAR */ char x13303 = x13302;
    x3 += 1;
    x3 += 1;
    char x13306 = x13303;
    char x13307 = *x3;
    /* VAR */ char x13308 = x13307;
    x3 += 1;
    x3 += 1;
    char x13311 = x13308;
    /* VAR */ int x13312 = 0;
    int x13313 = x13312;
    int* x13314 = &x13313;
    char* x13315 = strntoi_unchecked(x3, x13314);
    x3 = x13315;
    /* VAR */ int x13317 = 0;
    int x13318 = x13317;
    int* x13319 = &x13318;
    char* x13320 = strntoi_unchecked(x3, x13319);
    x3 = x13320;
    /* VAR */ int x13322 = 0;
    int x13323 = x13322;
    int* x13324 = &x13323;
    char* x13325 = strntoi_unchecked(x3, x13324);
    x3 = x13325;
    int x13327 = x13313*(10000);
    int x13328 = x13318*(100);
    int x13329 = x13327+(x13328);
    int x13330 = x13329+(x13323);
    /* VAR */ int x13331 = 0;
    int x13332 = x13331;
    int* x13333 = &x13332;
    char* x13334 = strntoi_unchecked(x3, x13333);
    x3 = x13334;
    /* VAR */ int x13336 = 0;
    int x13337 = x13336;
    int* x13338 = &x13337;
    char* x13339 = strntoi_unchecked(x3, x13338);
    x3 = x13339;
    /* VAR */ int x13341 = 0;
    int x13342 = x13341;
    int* x13343 = &x13342;
    char* x13344 = strntoi_unchecked(x3, x13343);
    x3 = x13344;
    int x13346 = x13332*(10000);
    int x13347 = x13337*(100);
    int x13348 = x13346+(x13347);
    int x13349 = x13348+(x13342);
    /* VAR */ int x13350 = 0;
    int x13351 = x13350;
    int* x13352 = &x13351;
    char* x13353 = strntoi_unchecked(x3, x13352);
    x3 = x13353;
    /* VAR */ int x13355 = 0;
    int x13356 = x13355;
    int* x13357 = &x13356;
    char* x13358 = strntoi_unchecked(x3, x13357);
    x3 = x13358;
    /* VAR */ int x13360 = 0;
    int x13361 = x13360;
    int* x13362 = &x13361;
    char* x13363 = strntoi_unchecked(x3, x13362);
    x3 = x13363;
    int x13365 = x13351*(10000);
    int x13366 = x13356*(100);
    int x13367 = x13365+(x13366);
    int x13368 = x13367+(x13361);
    char* x14485 = (char*)malloc(26 * sizeof(char));
    memset(x14485, 0, 26 * sizeof(char));
    /* VAR */ char* x13370 = x3;
    while(1) {
      
      char x13371 = *x3;
      int x13372 = x13371!=('|');
      /* VAR */ int ite23284 = 0;
      if(x13372) {
        char x29410 = *x3;
        int x29411 = x29410!=('\n');
        ite23284 = x29411;
      } else {
        
        ite23284 = 0;
      };
      int x22646 = ite23284;
      if (!(x22646)) break; 
      
      x3 += 1;
    };
    char* x13378 = x13370;
    int x13379 = x3 - x13378;
    char* x13380 = x13370;
    char* x13381 = strncpy(x14485, x13380, x13379);
    x3 += 1;
    char* x14503 = (char*)malloc(11 * sizeof(char));
    memset(x14503, 0, 11 * sizeof(char));
    /* VAR */ char* x13389 = x3;
    while(1) {
      
      char x13390 = *x3;
      int x13391 = x13390!=('|');
      /* VAR */ int ite23307 = 0;
      if(x13391) {
        char x29432 = *x3;
        int x29433 = x29432!=('\n');
        ite23307 = x29433;
      } else {
        
        ite23307 = 0;
      };
      int x22662 = ite23307;
      if (!(x22662)) break; 
      
      x3 += 1;
    };
    char* x13397 = x13389;
    int x13398 = x3 - x13397;
    char* x13399 = x13389;
    char* x13400 = strncpy(x14503, x13399, x13398);
    x3 += 1;
    char* x14521 = (char*)malloc(45 * sizeof(char));
    memset(x14521, 0, 45 * sizeof(char));
    /* VAR */ char* x13408 = x3;
    while(1) {
      
      char x13409 = *x3;
      int x13410 = x13409!=('|');
      /* VAR */ int ite23330 = 0;
      if(x13410) {
        char x29454 = *x3;
        int x29455 = x29454!=('\n');
        ite23330 = x29455;
      } else {
        
        ite23330 = 0;
      };
      int x22678 = ite23330;
      if (!(x22678)) break; 
      
      x3 += 1;
    };
    char* x13416 = x13408;
    int x13417 = x3 - x13416;
    char* x13418 = x13408;
    char* x13419 = strncpy(x14521, x13418, x13417);
    x3 += 1;
    struct LINEITEMRecord* x15112 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x15112, 0, 1 * sizeof(struct LINEITEMRecord));
    x15112->L_ORDERKEY = x13263; x15112->L_PARTKEY = x13268; x15112->L_SUPPKEY = x13273; x15112->L_LINENUMBER = x13278; x15112->L_QUANTITY = x13283; x15112->L_EXTENDEDPRICE = x13288; x15112->L_DISCOUNT = x13293; x15112->L_TAX = x13298; x15112->L_RETURNFLAG = x13306; x15112->L_LINESTATUS = x13311; x15112->L_SHIPDATE = x13330; x15112->L_COMMITDATE = x13349; x15112->L_RECEIPTDATE = x13368; x15112->L_SHIPINSTRUCT = x14485; x15112->L_SHIPMODE = x14503; x15112->L_COMMENT = x14521; x15112->next = NULL;
    int x47 = x4;
    int x18001 = x15112==(NULL);
    /* VAR */ int ite23353 = 0;
    if(x18001) {
      ite23353 = 1;
    } else {
      
      char* x29477 = x15112->L_SHIPINSTRUCT;
      int x29478 = x29477==(NULL);
      /* VAR */ int x29479 = 0;
      if(x29478) {
        x29479 = 1;
      } else {
        
        int x29482 = strcmp(x29477, "");
        int x29483 = !(x29482);
        x29479 = x29483;
      };
      int x29486 = x29479;
      ite23353 = x29486;
    };
    int x22694 = ite23353;
    if(x22694) {
      *(x14359 + x47) = (const struct LINEITEMRecord){0};
    } else {
      
      struct LINEITEMRecord x14543 = *x15112;
      *(x14359 + x47) = x14543;
      struct LINEITEMRecord* x14545 = &(x14359[x47]);
      x15112 = x14545;
    };
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x13432 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x13433 = 0;
  int x13434 = x13433;
  int* x13435 = &x13434;
  int x13436 = fscanf(x13432, "%d", x13435);
  pclose(x13432);
  struct PARTRecord* x14557 = (struct PARTRecord*)malloc(x13434 * sizeof(struct PARTRecord));
  memset(x14557, 0, x13434 * sizeof(struct PARTRecord));
  int x13440 = O_RDONLY;
  int x13441 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x13440);
  /* VAR */ struct stat x13442 = x13247;
  struct stat x13443 = x13442;
  struct stat* x13444 = &x13443;
  int x13445 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x13444);
  size_t x13446 = x13444->st_size;
  int x13447 = PROT_READ;
  int x13448 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x13446, x13447, x13448, x13441, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x13434);
    /* VAR */ int ite23394 = 0;
    if(x58) {
      char x29522 = *x55;
      int x29523 = x29522!=('\0');
      ite23394 = x29523;
    } else {
      
      ite23394 = 0;
    };
    int x22726 = ite23394;
    if (!(x22726)) break; 
    
    /* VAR */ int x13456 = 0;
    int x13457 = x13456;
    int* x13458 = &x13457;
    char* x13459 = strntoi_unchecked(x55, x13458);
    x55 = x13459;
    char* x14580 = (char*)malloc(56 * sizeof(char));
    memset(x14580, 0, 56 * sizeof(char));
    /* VAR */ char* x13462 = x55;
    while(1) {
      
      char x13463 = *x55;
      int x13464 = x13463!=('|');
      /* VAR */ int ite23413 = 0;
      if(x13464) {
        char x29540 = *x55;
        int x29541 = x29540!=('\n');
        ite23413 = x29541;
      } else {
        
        ite23413 = 0;
      };
      int x22738 = ite23413;
      if (!(x22738)) break; 
      
      x55 += 1;
    };
    char* x13470 = x13462;
    int x13471 = x55 - x13470;
    char* x13472 = x13462;
    char* x13473 = strncpy(x14580, x13472, x13471);
    x55 += 1;
    char* x14598 = (char*)malloc(26 * sizeof(char));
    memset(x14598, 0, 26 * sizeof(char));
    /* VAR */ char* x13481 = x55;
    while(1) {
      
      char x13482 = *x55;
      int x13483 = x13482!=('|');
      /* VAR */ int ite23436 = 0;
      if(x13483) {
        char x29562 = *x55;
        int x29563 = x29562!=('\n');
        ite23436 = x29563;
      } else {
        
        ite23436 = 0;
      };
      int x22754 = ite23436;
      if (!(x22754)) break; 
      
      x55 += 1;
    };
    char* x13489 = x13481;
    int x13490 = x55 - x13489;
    char* x13491 = x13481;
    char* x13492 = strncpy(x14598, x13491, x13490);
    x55 += 1;
    char* x14616 = (char*)malloc(11 * sizeof(char));
    memset(x14616, 0, 11 * sizeof(char));
    /* VAR */ char* x13500 = x55;
    while(1) {
      
      char x13501 = *x55;
      int x13502 = x13501!=('|');
      /* VAR */ int ite23459 = 0;
      if(x13502) {
        char x29584 = *x55;
        int x29585 = x29584!=('\n');
        ite23459 = x29585;
      } else {
        
        ite23459 = 0;
      };
      int x22770 = ite23459;
      if (!(x22770)) break; 
      
      x55 += 1;
    };
    char* x13508 = x13500;
    int x13509 = x55 - x13508;
    char* x13510 = x13500;
    char* x13511 = strncpy(x14616, x13510, x13509);
    x55 += 1;
    char* x14634 = (char*)malloc(26 * sizeof(char));
    memset(x14634, 0, 26 * sizeof(char));
    /* VAR */ char* x13519 = x55;
    while(1) {
      
      char x13520 = *x55;
      int x13521 = x13520!=('|');
      /* VAR */ int ite23482 = 0;
      if(x13521) {
        char x29606 = *x55;
        int x29607 = x29606!=('\n');
        ite23482 = x29607;
      } else {
        
        ite23482 = 0;
      };
      int x22786 = ite23482;
      if (!(x22786)) break; 
      
      x55 += 1;
    };
    char* x13527 = x13519;
    int x13528 = x55 - x13527;
    char* x13529 = x13519;
    char* x13530 = strncpy(x14634, x13529, x13528);
    x55 += 1;
    /* VAR */ int x13537 = 0;
    int x13538 = x13537;
    int* x13539 = &x13538;
    char* x13540 = strntoi_unchecked(x55, x13539);
    x55 = x13540;
    char* x14657 = (char*)malloc(11 * sizeof(char));
    memset(x14657, 0, 11 * sizeof(char));
    /* VAR */ char* x13543 = x55;
    while(1) {
      
      char x13544 = *x55;
      int x13545 = x13544!=('|');
      /* VAR */ int ite23510 = 0;
      if(x13545) {
        char x29633 = *x55;
        int x29634 = x29633!=('\n');
        ite23510 = x29634;
      } else {
        
        ite23510 = 0;
      };
      int x22807 = ite23510;
      if (!(x22807)) break; 
      
      x55 += 1;
    };
    char* x13551 = x13543;
    int x13552 = x55 - x13551;
    char* x13553 = x13543;
    char* x13554 = strncpy(x14657, x13553, x13552);
    x55 += 1;
    /* VAR */ double x13561 = 0.0;
    double x13562 = x13561;
    double* x13563 = &x13562;
    char* x13564 = strntod_unchecked(x55, x13563);
    x55 = x13564;
    char* x14680 = (char*)malloc(24 * sizeof(char));
    memset(x14680, 0, 24 * sizeof(char));
    /* VAR */ char* x13567 = x55;
    while(1) {
      
      char x13568 = *x55;
      int x13569 = x13568!=('|');
      /* VAR */ int ite23538 = 0;
      if(x13569) {
        char x29660 = *x55;
        int x29661 = x29660!=('\n');
        ite23538 = x29661;
      } else {
        
        ite23538 = 0;
      };
      int x22828 = ite23538;
      if (!(x22828)) break; 
      
      x55 += 1;
    };
    char* x13575 = x13567;
    int x13576 = x55 - x13575;
    char* x13577 = x13567;
    char* x13578 = strncpy(x14680, x13577, x13576);
    x55 += 1;
    struct PARTRecord* x15273 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x15273, 0, 1 * sizeof(struct PARTRecord));
    x15273->P_PARTKEY = x13457; x15273->P_NAME = x14580; x15273->P_MFGR = x14598; x15273->P_BRAND = x14616; x15273->P_TYPE = x14634; x15273->P_SIZE = x13538; x15273->P_CONTAINER = x14657; x15273->P_RETAILPRICE = x13562; x15273->P_COMMENT = x14680;
    int x111 = x56;
    int x18165 = x15273==(NULL);
    /* VAR */ int ite23561 = 0;
    if(x18165) {
      ite23561 = 1;
    } else {
      
      char* x29683 = x15273->P_NAME;
      int x29684 = x29683==(NULL);
      /* VAR */ int x29685 = 0;
      if(x29684) {
        x29685 = 1;
      } else {
        
        int x29688 = strcmp(x29683, "");
        int x29689 = !(x29688);
        x29685 = x29689;
      };
      int x29692 = x29685;
      ite23561 = x29692;
    };
    int x22844 = ite23561;
    if(x22844) {
      *(x14557 + x111) = (const struct PARTRecord){0};
    } else {
      
      struct PARTRecord x14702 = *x15273;
      *(x14557 + x111) = x14702;
      struct PARTRecord* x14704 = &(x14557[x111]);
      x15273 = x14704;
    };
    int x113 = x56;
    int x114 = x113+(1);
    x56 = x114;
  };
  int x118 = 0;
  for(; x118 < 1 ; x118 += 1) {
    
    double* x30288 = (double*)malloc(1 * sizeof(double));
    memset(x30288, 0, 1 * sizeof(double));
    struct LINEITEMRecord* x30289 = (struct LINEITEMRecord*)malloc(1048576 * sizeof(struct LINEITEMRecord));
    memset(x30289, 0, 1048576 * sizeof(struct LINEITEMRecord));
    /* VAR */ struct timeval x30290 = x12740;
    struct timeval x30291 = x30290;
    /* VAR */ struct timeval x30292 = x12740;
    struct timeval x30293 = x30292;
    /* VAR */ struct timeval x30294 = x12740;
    struct timeval x30295 = x30294;
    struct timeval* x30296 = &x30293;
    gettimeofday(x30296, NULL);
    /* VAR */ int x30298 = 0;
    /* VAR */ int x30299 = 0;
    while(1) {
      
      int x30301 = x30299;
      int x30302 = x30301<(x13239);
      if (!(x30302)) break; 
      
      int x2434 = x30299;
      struct LINEITEMRecord* x321 = &(x14359[x2434]);
      double x323 = x321->L_QUANTITY;
      int x325 = x323<=(36.0);
      /* VAR */ int ite23935 = 0;
      if(x325) {
        int x30309 = x323>=(26.0);
        ite23935 = x30309;
      } else {
        
        ite23935 = 0;
      };
      int x23018 = ite23935;
      /* VAR */ int ite23943 = 0;
      if(x23018) {
        ite23943 = 1;
      } else {
        
        int x30317 = x323<=(25.0);
        /* VAR */ int x30318 = 0;
        if(x30317) {
          int x30320 = x323>=(15.0);
          x30318 = x30320;
        } else {
          
          x30318 = 0;
        };
        int x30324 = x30318;
        ite23943 = x30324;
      };
      int x23020 = ite23943;
      /* VAR */ int ite23953 = 0;
      if(x23020) {
        ite23953 = 1;
      } else {
        
        int x30331 = x323<=(14.0);
        /* VAR */ int x30332 = 0;
        if(x30331) {
          int x30334 = x323>=(4.0);
          x30332 = x30334;
        } else {
          
          x30332 = 0;
        };
        int x30338 = x30332;
        ite23953 = x30338;
      };
      int x23022 = ite23953;
      /* VAR */ int ite23963 = 0;
      if(x23022) {
        char* x30344 = x321->L_SHIPINSTRUCT;
        int x30345 = strcmp(x30344, "DELIVER IN PERSON");
        int x30346 = x30345==(0);
        ite23963 = x30346;
      } else {
        
        ite23963 = 0;
      };
      int x23024 = ite23963;
      /* VAR */ int ite23973 = 0;
      if(x23024) {
        char* x30353 = x321->L_SHIPMODE;
        int x30354 = strcmp(x30353, "AIR");
        int x30355 = x30354==(0);
        /* VAR */ int x30356 = 0;
        if(x30355) {
          x30356 = 1;
        } else {
          
          int x30359 = strcmp(x30353, "AIRREG");
          int x30360 = x30359==(0);
          x30356 = x30360;
        };
        int x30363 = x30356;
        ite23973 = x30363;
      } else {
        
        ite23973 = 0;
      };
      int x23026 = ite23973;
      if(x23026) {
        int x349 = x321->L_PARTKEY;
        int x4751 = x349%(1048576);
        struct LINEITEMRecord* x6222 = &(x30289[x4751]);
        /* VAR */ struct LINEITEMRecord* list6223 = x6222;
        struct LINEITEMRecord* x6224 = list6223;
        int x18225 = x6224==(NULL);
        /* VAR */ int ite23992 = 0;
        if(x18225) {
          ite23992 = 1;
        } else {
          
          char* x30378 = x6224->L_SHIPINSTRUCT;
          int x30379 = x30378==(NULL);
          /* VAR */ int x30380 = 0;
          if(x30379) {
            x30380 = 1;
          } else {
            
            int x30383 = strcmp(x30378, "");
            int x30384 = !(x30383);
            x30380 = x30384;
          };
          int x30387 = x30380;
          ite23992 = x30387;
        };
        int x23035 = ite23992;
        if(x23035) {
          list6223 = NULL;
          struct LINEITEMRecord* x6231 = list6223;
          int x18232 = x6231==(NULL);
          /* VAR */ int ite24007 = 0;
          if(x18232) {
            ite24007 = 1;
          } else {
            
            char* x30398 = x6231->L_SHIPINSTRUCT;
            int x30399 = x30398==(NULL);
            /* VAR */ int x30400 = 0;
            if(x30399) {
              x30400 = 1;
            } else {
              
              int x30403 = strcmp(x30398, "");
              int x30404 = !(x30403);
              x30400 = x30404;
            };
            int x30407 = x30400;
            ite24007 = x30407;
          };
          int x23041 = ite24007;
          if(x23041) {
            *(x30289 + x4751) = (const struct LINEITEMRecord){0};
          } else {
            
            struct LINEITEMRecord x14764 = *x6231;
            *(x30289 + x4751) = x14764;
            struct LINEITEMRecord* x14766 = &(x30289[x4751]);
            list6223 = x14766;
          };
        };
        int x18242 = x6222==(NULL);
        /* VAR */ int ite24025 = 0;
        if(x18242) {
          ite24025 = 1;
        } else {
          
          char* x30421 = x6222->L_SHIPINSTRUCT;
          int x30422 = x30421==(NULL);
          /* VAR */ int x30423 = 0;
          if(x30422) {
            x30423 = 1;
          } else {
            
            int x30426 = strcmp(x30421, "");
            int x30427 = !(x30426);
            x30423 = x30427;
          };
          int x30430 = x30423;
          ite24025 = x30430;
        };
        int x23050 = ite24025;
        if(x23050) {
          x321->next = NULL;
          int x18248 = x321==(NULL);
          /* VAR */ int ite24039 = 0;
          if(x18248) {
            ite24039 = 1;
          } else {
            
            char* x30440 = x321->L_SHIPINSTRUCT;
            int x30441 = x30440==(NULL);
            /* VAR */ int x30442 = 0;
            if(x30441) {
              x30442 = 1;
            } else {
              
              int x30445 = strcmp(x30440, "");
              int x30446 = !(x30445);
              x30442 = x30446;
            };
            int x30449 = x30442;
            ite24039 = x30449;
          };
          int x23055 = ite24039;
          if(x23055) {
            *(x30289 + x4751) = (const struct LINEITEMRecord){0};
          } else {
            
            struct LINEITEMRecord x14774 = *x321;
            *(x30289 + x4751) = x14774;
            struct LINEITEMRecord* x14776 = &(x30289[x4751]);
            x321 = x14776;
          };
          list6223 = x321;
        } else {
          
          struct LINEITEMRecord* x7646 = x6222->next;
          x321->next = x7646;
          x6222->next = x321;
        };
      };
      int x2466 = x30299;
      int x354 = x2466+(1);
      x30299 = x354;
    };
    while(1) {
      
      int x30467 = x30298;
      int x30468 = x30467<(x13434);
      if (!(x30468)) break; 
      
      int x2475 = x30298;
      struct PARTRecord* x363 = &(x14557[x2475]);
      int x365 = x363->P_SIZE;
      int x366 = x365>=(1);
      /* VAR */ int ite24071 = 0;
      if(x366) {
        int x30475 = x365<=(5);
        /* VAR */ int x30476 = 0;
        if(x30475) {
          char* x30478 = x363->P_BRAND;
          int x30479 = strcmp(x30478, "Brand#31");
          int x30480 = x30479==(0);
          x30476 = x30480;
        } else {
          
          x30476 = 0;
        };
        int x30484 = x30476;
        /* VAR */ int x30485 = 0;
        if(x30484) {
          char* x30487 = x363->P_CONTAINER;
          int x30488 = strcmp(x30487, "SM BOX");
          int x30489 = x30488==(0);
          /* VAR */ int x30490 = 0;
          if(x30489) {
            x30490 = 1;
          } else {
            
            int x30493 = strcmp(x30487, "SM CASE");
            int x30494 = x30493==(0);
            x30490 = x30494;
          };
          int x30497 = x30490;
          /* VAR */ int x30498 = 0;
          if(x30497) {
            x30498 = 1;
          } else {
            
            int x30501 = strcmp(x30487, "SM PACK");
            int x30502 = x30501==(0);
            x30498 = x30502;
          };
          int x30505 = x30498;
          /* VAR */ int x30506 = 0;
          if(x30505) {
            x30506 = 1;
          } else {
            
            int x30509 = strcmp(x30487, "SM PKG");
            int x30510 = x30509==(0);
            x30506 = x30510;
          };
          int x30513 = x30506;
          x30485 = x30513;
        } else {
          
          x30485 = 0;
        };
        int x30517 = x30485;
        ite24071 = x30517;
      } else {
        
        ite24071 = 0;
      };
      int x23076 = ite24071;
      /* VAR */ int ite24083 = 0;
      if(x23076) {
        ite24083 = 1;
      } else {
        
        int x30525 = x365<=(10);
        /* VAR */ int x30526 = 0;
        if(x30525) {
          char* x30528 = x363->P_BRAND;
          int x30529 = strcmp(x30528, "Brand#43");
          int x30530 = x30529==(0);
          x30526 = x30530;
        } else {
          
          x30526 = 0;
        };
        int x30534 = x30526;
        /* VAR */ int x30535 = 0;
        if(x30534) {
          char* x30537 = x363->P_CONTAINER;
          int x30538 = strcmp(x30537, "MED BAG");
          int x30539 = x30538==(0);
          /* VAR */ int x30540 = 0;
          if(x30539) {
            x30540 = 1;
          } else {
            
            int x30543 = strcmp(x30537, "MED BOX");
            int x30544 = x30543==(0);
            x30540 = x30544;
          };
          int x30547 = x30540;
          /* VAR */ int x30548 = 0;
          if(x30547) {
            x30548 = 1;
          } else {
            
            int x30551 = strcmp(x30537, "MED PACK");
            int x30552 = x30551==(0);
            x30548 = x30552;
          };
          int x30555 = x30548;
          /* VAR */ int x30556 = 0;
          if(x30555) {
            x30556 = 1;
          } else {
            
            int x30559 = strcmp(x30537, "MED PKG");
            int x30560 = x30559==(0);
            x30556 = x30560;
          };
          int x30563 = x30556;
          x30535 = x30563;
        } else {
          
          x30535 = 0;
        };
        int x30567 = x30535;
        ite24083 = x30567;
      };
      int x23078 = ite24083;
      /* VAR */ int ite24095 = 0;
      if(x23078) {
        ite24095 = 1;
      } else {
        
        int x30574 = x365<=(15);
        /* VAR */ int x30575 = 0;
        if(x30574) {
          char* x30577 = x363->P_BRAND;
          int x30578 = strcmp(x30577, "Brand#43");
          int x30579 = x30578==(0);
          x30575 = x30579;
        } else {
          
          x30575 = 0;
        };
        int x30583 = x30575;
        /* VAR */ int x30584 = 0;
        if(x30583) {
          char* x30586 = x363->P_CONTAINER;
          int x30587 = strcmp(x30586, "LG BOX");
          int x30588 = x30587==(0);
          /* VAR */ int x30589 = 0;
          if(x30588) {
            x30589 = 1;
          } else {
            
            int x30592 = strcmp(x30586, "LG CASE");
            int x30593 = x30592==(0);
            x30589 = x30593;
          };
          int x30596 = x30589;
          /* VAR */ int x30597 = 0;
          if(x30596) {
            x30597 = 1;
          } else {
            
            int x30600 = strcmp(x30586, "LG PACK");
            int x30601 = x30600==(0);
            x30597 = x30601;
          };
          int x30604 = x30597;
          /* VAR */ int x30605 = 0;
          if(x30604) {
            x30605 = 1;
          } else {
            
            int x30608 = strcmp(x30586, "LG PKG");
            int x30609 = x30608==(0);
            x30605 = x30609;
          };
          int x30612 = x30605;
          x30584 = x30612;
        } else {
          
          x30584 = 0;
        };
        int x30616 = x30584;
        ite24095 = x30616;
      };
      int x23080 = ite24095;
      if(x23080) {
        int x409 = x363->P_PARTKEY;
        int x4819 = x409%(1048576);
        struct LINEITEMRecord* x6299 = &(x30289[x4819]);
        int x18319 = x6299!=(NULL);
        /* VAR */ int ite24112 = 0;
        if(x18319) {
          char* x30627 = x6299->L_SHIPINSTRUCT;
          int x30628 = x30627!=(NULL);
          /* VAR */ int x30629 = 0;
          if(x30628) {
            int x30631 = strcmp(x30627, "");
            x30629 = x30631;
          } else {
            
            x30629 = 0;
          };
          int x30635 = x30629;
          ite24112 = x30635;
        } else {
          
          ite24112 = 0;
        };
        int x23087 = ite24112;
        if(x23087) {
          /* VAR */ struct LINEITEMRecord* current6870 = x6299;
          while(1) {
            
            struct LINEITEMRecord* x6872 = current6870;
            int x18327 = x6872!=(NULL);
            /* VAR */ int ite24128 = 0;
            if(x18327) {
              char* x30647 = x6872->L_SHIPINSTRUCT;
              int x30648 = x30647!=(NULL);
              /* VAR */ int x30649 = 0;
              if(x30648) {
                int x30651 = strcmp(x30647, "");
                x30649 = x30651;
              } else {
                
                x30649 = 0;
              };
              int x30655 = x30649;
              ite24128 = x30655;
            } else {
              
              ite24128 = 0;
            };
            int x23094 = ite24128;
            if (!(x23094)) break; 
            
            struct LINEITEMRecord* x6874 = current6870;
            struct LINEITEMRecord* x7813 = x6874->next;
            struct LINEITEMRecord* x6876 = current6870;
            int x6408 = x6876->L_PARTKEY;
            int x6409 = x409==(x6408);
            if(x6409) {
              double x1230 = x6876->L_QUANTITY;
              double x1231 = x6876->L_EXTENDEDPRICE;
              double x1232 = x6876->L_DISCOUNT;
              char* x1244 = x363->P_BRAND;
              char* x1246 = x363->P_CONTAINER;
              int x20214 = strcmp(x1244, "Brand#31");
              int x20215 = x20214==(0);
              /* VAR */ int ite24152 = 0;
              if(x20215) {
                int x30675 = strcmp(x1246, "SM BOX");
                int x30676 = x30675==(0);
                /* VAR */ int x30677 = 0;
                if(x30676) {
                  x30677 = 1;
                } else {
                  
                  int x30680 = strcmp(x1246, "SM CASE");
                  int x30681 = x30680==(0);
                  x30677 = x30681;
                };
                int x30684 = x30677;
                /* VAR */ int x30685 = 0;
                if(x30684) {
                  x30685 = 1;
                } else {
                  
                  int x30688 = strcmp(x1246, "SM PACK");
                  int x30689 = x30688==(0);
                  x30685 = x30689;
                };
                int x30692 = x30685;
                /* VAR */ int x30693 = 0;
                if(x30692) {
                  x30693 = 1;
                } else {
                  
                  int x30696 = strcmp(x1246, "SM PKG");
                  int x30697 = x30696==(0);
                  x30693 = x30697;
                };
                int x30700 = x30693;
                ite24152 = x30700;
              } else {
                
                ite24152 = 0;
              };
              int x23109 = ite24152;
              /* VAR */ int ite24167 = 0;
              if(x23109) {
                int x30707 = x1230>=(4.0);
                ite24167 = x30707;
              } else {
                
                ite24167 = 0;
              };
              int x23111 = ite24167;
              /* VAR */ int ite24175 = 0;
              if(x23111) {
                int x30714 = x1230<=(14.0);
                ite24175 = x30714;
              } else {
                
                ite24175 = 0;
              };
              int x23113 = ite24175;
              /* VAR */ int ite24183 = 0;
              if(x23113) {
                int x30721 = x365<=(5);
                ite24183 = x30721;
              } else {
                
                ite24183 = 0;
              };
              int x23115 = ite24183;
              /* VAR */ int ite24191 = 0;
              if(x23115) {
                ite24191 = 1;
              } else {
                
                int x30729 = strcmp(x1244, "Brand#43");
                int x30730 = x30729==(0);
                /* VAR */ int x30731 = 0;
                if(x30730) {
                  int x30733 = strcmp(x1246, "MED BAG");
                  int x30734 = x30733==(0);
                  /* VAR */ int x30735 = 0;
                  if(x30734) {
                    x30735 = 1;
                  } else {
                    
                    int x30738 = strcmp(x1246, "MED BOX");
                    int x30739 = x30738==(0);
                    x30735 = x30739;
                  };
                  int x30742 = x30735;
                  /* VAR */ int x30743 = 0;
                  if(x30742) {
                    x30743 = 1;
                  } else {
                    
                    int x30746 = strcmp(x1246, "MED PACK");
                    int x30747 = x30746==(0);
                    x30743 = x30747;
                  };
                  int x30750 = x30743;
                  /* VAR */ int x30751 = 0;
                  if(x30750) {
                    x30751 = 1;
                  } else {
                    
                    int x30754 = strcmp(x1246, "MED PKG");
                    int x30755 = x30754==(0);
                    x30751 = x30755;
                  };
                  int x30758 = x30751;
                  x30731 = x30758;
                } else {
                  
                  x30731 = 0;
                };
                int x30762 = x30731;
                /* VAR */ int x30763 = 0;
                if(x30762) {
                  int x30765 = x1230>=(15.0);
                  x30763 = x30765;
                } else {
                  
                  x30763 = 0;
                };
                int x30769 = x30763;
                /* VAR */ int x30770 = 0;
                if(x30769) {
                  int x30772 = x1230<=(25.0);
                  x30770 = x30772;
                } else {
                  
                  x30770 = 0;
                };
                int x30776 = x30770;
                /* VAR */ int x30777 = 0;
                if(x30776) {
                  int x30779 = x365<=(10);
                  x30777 = x30779;
                } else {
                  
                  x30777 = 0;
                };
                int x30783 = x30777;
                ite24191 = x30783;
              };
              int x23117 = ite24191;
              /* VAR */ int ite24208 = 0;
              if(x23117) {
                ite24208 = 1;
              } else {
                
                int x30790 = strcmp(x1244, "Brand#43");
                int x30791 = x30790==(0);
                /* VAR */ int x30792 = 0;
                if(x30791) {
                  int x30794 = strcmp(x1246, "LG BOX");
                  int x30795 = x30794==(0);
                  /* VAR */ int x30796 = 0;
                  if(x30795) {
                    x30796 = 1;
                  } else {
                    
                    int x30799 = strcmp(x1246, "LG CASE");
                    int x30800 = x30799==(0);
                    x30796 = x30800;
                  };
                  int x30803 = x30796;
                  /* VAR */ int x30804 = 0;
                  if(x30803) {
                    x30804 = 1;
                  } else {
                    
                    int x30807 = strcmp(x1246, "LG PACK");
                    int x30808 = x30807==(0);
                    x30804 = x30808;
                  };
                  int x30811 = x30804;
                  /* VAR */ int x30812 = 0;
                  if(x30811) {
                    x30812 = 1;
                  } else {
                    
                    int x30815 = strcmp(x1246, "LG PKG");
                    int x30816 = x30815==(0);
                    x30812 = x30816;
                  };
                  int x30819 = x30812;
                  x30792 = x30819;
                } else {
                  
                  x30792 = 0;
                };
                int x30823 = x30792;
                /* VAR */ int x30824 = 0;
                if(x30823) {
                  int x30826 = x1230>=(26.0);
                  x30824 = x30826;
                } else {
                  
                  x30824 = 0;
                };
                int x30830 = x30824;
                /* VAR */ int x30831 = 0;
                if(x30830) {
                  int x30833 = x1230<=(36.0);
                  x30831 = x30833;
                } else {
                  
                  x30831 = 0;
                };
                int x30837 = x30831;
                /* VAR */ int x30838 = 0;
                if(x30837) {
                  int x30840 = x365<=(15);
                  x30838 = x30840;
                } else {
                  
                  x30838 = 0;
                };
                int x30844 = x30838;
                ite24208 = x30844;
              };
              int x23119 = ite24208;
              if(x23119) {
                double x607 = x30288[0];
                double x610 = 1.0-(x1232);
                double x611 = x1231*(x610);
                double x612 = x607+(x611);
                *x30288 = x612;
              };
            };
            current6870 = x7813;
          };
        };
      };
      int x2778 = x30298;
      int x625 = x2778+(1);
      x30298 = x625;
    };
    double x30858 = x30288[0];
    printf("%.4f\n", x30858);
    printf("(%d rows)\n", 1);
    struct timeval* x30861 = &x30295;
    gettimeofday(x30861, NULL);
    struct timeval* x30863 = &x30291;
    struct timeval* x30864 = &x30295;
    struct timeval* x30865 = &x30293;
    long x30866 = timeval_subtract(x30863, x30864, x30865);
    printf("Generated code run in %ld milliseconds.\n", x30866);
  };
}
/* ----------- FUNCTIONS ----------- */