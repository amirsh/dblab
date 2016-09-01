#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct Tuple2_Q1GRPRecord_Array_Double;
  struct LINEITEMRecord;
  struct Q1GRPRecord;
  
  struct Tuple2_Q1GRPRecord_Array_Double {
  struct Q1GRPRecord* _1;
  double* _2;
  };
  
  struct LINEITEMRecord {
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  double L_TAX;
  char L_RETURNFLAG;
  char L_LINESTATUS;
  int L_SHIPDATE;
  };
  
  struct Q1GRPRecord {
  char L_RETURNFLAG;
  char L_LINESTATUS;
  };
  
  


int x21224(struct Q1GRPRecord* x9005);

int x21231(struct Q1GRPRecord* x9010, struct Q1GRPRecord* x9011);

int x21681(struct Tuple2_Q1GRPRecord_Array_Double* x4726, struct Tuple2_Q1GRPRecord_Array_Double* x4727);

int x14973(void* x9307, void* x9308, void* x9309);
/* GLOBAL VARS */

struct timeval x5796;
int x2998;
int main(int argc, char** argv) {
  FILE* x6331 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x6332 = 0;
  int x6333 = x6332;
  int* x6334 = &x6333;
  int x6335 = fscanf(x6331, "%d", x6334);
  pclose(x6331);
  struct LINEITEMRecord* x7299 = (struct LINEITEMRecord*)malloc(x6333 * sizeof(struct LINEITEMRecord));
  memset(x7299, 0, x6333 * sizeof(struct LINEITEMRecord));
  int x6339 = O_RDONLY;
  int x6340 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x6339);
  struct stat x6341 = (struct stat){0};
  /* VAR */ struct stat x6342 = x6341;
  struct stat x6343 = x6342;
  struct stat* x6344 = &x6343;
  int x6345 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x6344);
  size_t x6346 = x6344->st_size;
  int x6347 = PROT_READ;
  int x6348 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x6346, x6347, x6348, x6340, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x6333);
    /* VAR */ int ite17719 = 0;
    if(x6) {
      char x20456 = *x3;
      int x20457 = x20456!=('\0');
      ite17719 = x20457;
    } else {
      
      ite17719 = 0;
    };
    int x16389 = ite17719;
    if (!(x16389)) break; 
    
    /* VAR */ int x6356 = 0;
    int x6357 = x6356;
    int* x6358 = &x6357;
    char* x6359 = strntoi_unchecked(x3, x6358);
    x3 = x6359;
    /* VAR */ int x6361 = 0;
    int x6362 = x6361;
    int* x6363 = &x6362;
    char* x6364 = strntoi_unchecked(x3, x6363);
    x3 = x6364;
    /* VAR */ int x6366 = 0;
    int x6367 = x6366;
    int* x6368 = &x6367;
    char* x6369 = strntoi_unchecked(x3, x6368);
    x3 = x6369;
    /* VAR */ int x6371 = 0;
    int x6372 = x6371;
    int* x6373 = &x6372;
    char* x6374 = strntoi_unchecked(x3, x6373);
    x3 = x6374;
    /* VAR */ double x6376 = 0.0;
    double x6377 = x6376;
    double* x6378 = &x6377;
    char* x6379 = strntod_unchecked(x3, x6378);
    x3 = x6379;
    /* VAR */ double x6381 = 0.0;
    double x6382 = x6381;
    double* x6383 = &x6382;
    char* x6384 = strntod_unchecked(x3, x6383);
    x3 = x6384;
    /* VAR */ double x6386 = 0.0;
    double x6387 = x6386;
    double* x6388 = &x6387;
    char* x6389 = strntod_unchecked(x3, x6388);
    x3 = x6389;
    /* VAR */ double x6391 = 0.0;
    double x6392 = x6391;
    double* x6393 = &x6392;
    char* x6394 = strntod_unchecked(x3, x6393);
    x3 = x6394;
    char x6396 = *x3;
    /* VAR */ char x6397 = x6396;
    x3 += 1;
    x3 += 1;
    char x6400 = x6397;
    char x6401 = *x3;
    /* VAR */ char x6402 = x6401;
    x3 += 1;
    x3 += 1;
    char x6405 = x6402;
    /* VAR */ int x6406 = 0;
    int x6407 = x6406;
    int* x6408 = &x6407;
    char* x6409 = strntoi_unchecked(x3, x6408);
    x3 = x6409;
    /* VAR */ int x6411 = 0;
    int x6412 = x6411;
    int* x6413 = &x6412;
    char* x6414 = strntoi_unchecked(x3, x6413);
    x3 = x6414;
    /* VAR */ int x6416 = 0;
    int x6417 = x6416;
    int* x6418 = &x6417;
    char* x6419 = strntoi_unchecked(x3, x6418);
    x3 = x6419;
    int x6421 = x6407*(10000);
    int x6422 = x6412*(100);
    int x6423 = x6421+(x6422);
    int x6424 = x6423+(x6417);
    /* VAR */ int x6425 = 0;
    int x6426 = x6425;
    int* x6427 = &x6426;
    char* x6428 = strntoi_unchecked(x3, x6427);
    x3 = x6428;
    /* VAR */ int x6430 = 0;
    int x6431 = x6430;
    int* x6432 = &x6431;
    char* x6433 = strntoi_unchecked(x3, x6432);
    x3 = x6433;
    /* VAR */ int x6435 = 0;
    int x6436 = x6435;
    int* x6437 = &x6436;
    char* x6438 = strntoi_unchecked(x3, x6437);
    x3 = x6438;
    /* VAR */ int x6444 = 0;
    int x6445 = x6444;
    int* x6446 = &x6445;
    char* x6447 = strntoi_unchecked(x3, x6446);
    x3 = x6447;
    /* VAR */ int x6449 = 0;
    int x6450 = x6449;
    int* x6451 = &x6450;
    char* x6452 = strntoi_unchecked(x3, x6451);
    x3 = x6452;
    /* VAR */ int x6454 = 0;
    int x6455 = x6454;
    int* x6456 = &x6455;
    char* x6457 = strntoi_unchecked(x3, x6456);
    x3 = x6457;
    char* x7425 = (char*)malloc(26 * sizeof(char));
    memset(x7425, 0, 26 * sizeof(char));
    /* VAR */ char* x6464 = x3;
    while(1) {
      
      char x6465 = *x3;
      int x6466 = x6465!=('|');
      /* VAR */ int ite17840 = 0;
      if(x6466) {
        char x20576 = *x3;
        int x20577 = x20576!=('\n');
        ite17840 = x20577;
      } else {
        
        ite17840 = 0;
      };
      int x16503 = ite17840;
      if (!(x16503)) break; 
      
      x3 += 1;
    };
    char* x6472 = x6464;
    int x6473 = x3 - x6472;
    char* x6474 = x6464;
    char* x6475 = strncpy(x7425, x6474, x6473);
    x3 += 1;
    char* x7443 = (char*)malloc(11 * sizeof(char));
    memset(x7443, 0, 11 * sizeof(char));
    /* VAR */ char* x6483 = x3;
    while(1) {
      
      char x6484 = *x3;
      int x6485 = x6484!=('|');
      /* VAR */ int ite17863 = 0;
      if(x6485) {
        char x20598 = *x3;
        int x20599 = x20598!=('\n');
        ite17863 = x20599;
      } else {
        
        ite17863 = 0;
      };
      int x16519 = ite17863;
      if (!(x16519)) break; 
      
      x3 += 1;
    };
    char* x6491 = x6483;
    int x6492 = x3 - x6491;
    char* x6493 = x6483;
    char* x6494 = strncpy(x7443, x6493, x6492);
    x3 += 1;
    char* x7461 = (char*)malloc(45 * sizeof(char));
    memset(x7461, 0, 45 * sizeof(char));
    /* VAR */ char* x6502 = x3;
    while(1) {
      
      char x6503 = *x3;
      int x6504 = x6503!=('|');
      /* VAR */ int ite17886 = 0;
      if(x6504) {
        char x20620 = *x3;
        int x20621 = x20620!=('\n');
        ite17886 = x20621;
      } else {
        
        ite17886 = 0;
      };
      int x16535 = ite17886;
      if (!(x16535)) break; 
      
      x3 += 1;
    };
    char* x6510 = x6502;
    int x6511 = x3 - x6510;
    char* x6512 = x6502;
    char* x6513 = strncpy(x7461, x6512, x6511);
    x3 += 1;
    struct LINEITEMRecord* x7978 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x7978, 0, 1 * sizeof(struct LINEITEMRecord));
    x7978->L_QUANTITY = x6377; x7978->L_EXTENDEDPRICE = x6382; x7978->L_DISCOUNT = x6387; x7978->L_TAX = x6392; x7978->L_RETURNFLAG = x6400; x7978->L_LINESTATUS = x6405; x7978->L_SHIPDATE = x6424;
    int x47 = x4;
    struct LINEITEMRecord x7481 = *x7978;
    *(x7299 + x47) = x7481;
    struct LINEITEMRecord* x7483 = &(x7299[x47]);
    x7978 = x7483;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  int x55 = 0;
  for(; x55 < 1 ; x55 += 1) {
    
    int* x21221 = (int*)malloc(4 * sizeof(int));
    memset(x21221, 0, 4 * sizeof(int));
    struct LINEITEMRecord** x21222 = (struct LINEITEMRecord**)malloc(4 * sizeof(struct LINEITEMRecord*));
    memset(x21222, 0, 4 * sizeof(struct LINEITEMRecord*));
    struct Q1GRPRecord* x21223 = (struct Q1GRPRecord*)malloc(4 * sizeof(struct Q1GRPRecord));
    memset(x21223, 0, 4 * sizeof(struct Q1GRPRecord));
    GHashTable* x21246 = g_hash_table_new(x21224, x21231);
    /* VAR */ int x21247 = 0;
    struct LINEITEMRecord** x21248 = (struct LINEITEMRecord**)malloc(4 * sizeof(struct LINEITEMRecord*));
    memset(x21248, 0, 4 * sizeof(struct LINEITEMRecord*));
    /* VAR */ int x21249 = 0;
    while(1) {
      
      int x5534 = x21249;
      int x5535 = x5534<(4);
      if (!(x5535)) break; 
      
      int x5536 = x21249;
      int x5537 = x6333/(4);
      int x5538 = x5537*(8);
      struct LINEITEMRecord* x7504 = (struct LINEITEMRecord*)malloc(x5538 * sizeof(struct LINEITEMRecord));
      memset(x7504, 0, x5538 * sizeof(struct LINEITEMRecord));
      *(x21248 + x5536) = x7504;
      int x5541 = x21249;
      int x5542 = x5541+(1);
      x21249 = x5542;
    };
    /* VAR */ int x21261 = 0;
    struct Q1GRPRecord* x21262 = (struct Q1GRPRecord*)malloc(48000000 * sizeof(struct Q1GRPRecord));
    memset(x21262, 0, 48000000 * sizeof(struct Q1GRPRecord));
    /* VAR */ int x21263 = 0;
    while(1) {
      
      int x5548 = x21263;
      int x5549 = x5548<(48000000);
      if (!(x5549)) break; 
      
      int x5550 = x21263;
      struct Q1GRPRecord* x8017 = (struct Q1GRPRecord*)malloc(1 * sizeof(struct Q1GRPRecord));
      memset(x8017, 0, 1 * sizeof(struct Q1GRPRecord));
      x8017->L_RETURNFLAG = '\0'; x8017->L_LINESTATUS = '\0';
      struct Q1GRPRecord x7517 = *x8017;
      *(x21262 + x5550) = x7517;
      struct Q1GRPRecord* x7519 = &(x21262[x5550]);
      x8017 = x7519;
      int x5553 = x21263;
      int x5554 = x5553+(1);
      x21263 = x5554;
    };
    /* VAR */ int x21278 = 0;
    double** x21279 = (double**)malloc(4 * sizeof(double*));
    memset(x21279, 0, 4 * sizeof(double*));
    /* VAR */ int x21280 = 0;
    while(1) {
      
      int x5560 = x21280;
      int x5561 = x5560<(4);
      if (!(x5561)) break; 
      
      int x5562 = x21280;
      double* x7531 = (double*)malloc(9 * sizeof(double));
      memset(x7531, 0, 9 * sizeof(double));
      *(x21279 + x5562) = x7531;
      int x5565 = x21280;
      int x5566 = x5565+(1);
      x21280 = x5566;
    };
    /* VAR */ int x21290 = 0;
    struct Tuple2_Q1GRPRecord_Array_Double* x21291 = (struct Tuple2_Q1GRPRecord_Array_Double*)malloc(48000000 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double));
    memset(x21291, 0, 48000000 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double));
    /* VAR */ int x21292 = 0;
    while(1) {
      
      int x5572 = x21292;
      int x5573 = x5572<(48000000);
      if (!(x5573)) break; 
      
      int x5574 = x21292;
      struct Q1GRPRecord* x5575 = &(x21262[x5574]);
      double* x5576 = x21279[x5574];
      struct Tuple2_Q1GRPRecord_Array_Double* x8048 = (struct Tuple2_Q1GRPRecord_Array_Double*)malloc(1 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double));
      memset(x8048, 0, 1 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double));
      x8048->_1 = x5575; x8048->_2 = x5576;
      struct Tuple2_Q1GRPRecord_Array_Double x7546 = *x8048;
      *(x21291 + x5574) = x7546;
      struct Tuple2_Q1GRPRecord_Array_Double* x7548 = &(x21291[x5574]);
      x8048 = x7548;
      int x5579 = x21292;
      int x5580 = x5579+(1);
      x21292 = x5580;
    };
    /* VAR */ int x21309 = 0;
    struct Tuple2_Q1GRPRecord_Array_Double** x21310 = (struct Tuple2_Q1GRPRecord_Array_Double**)malloc(48000000 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double*));
    memset(x21310, 0, 48000000 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double*));
    /* VAR */ int x21311 = 0;
    while(1) {
      
      int x5586 = x21311;
      int x5587 = x5586<(48000000);
      if (!(x5587)) break; 
      
      int x5588 = x21311;
      struct Tuple2_Q1GRPRecord_Array_Double* x7560 = (struct Tuple2_Q1GRPRecord_Array_Double*)malloc(x2998 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double));
      memset(x7560, 0, x2998 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double));
      *(x21310 + x5588) = x7560;
      int x5591 = x21311;
      int x5592 = x5591+(1);
      x21311 = x5592;
    };
    /* VAR */ struct timeval x21321 = x5796;
    struct timeval x21322 = x21321;
    /* VAR */ struct timeval x21323 = x5796;
    struct timeval x21324 = x21323;
    /* VAR */ struct timeval x21325 = x5796;
    struct timeval x21326 = x21325;
    struct timeval* x21327 = &x21324;
    gettimeofday(x21327, NULL);
    /* VAR */ int x21329 = 0;
    int x14580 = 0;
    for(; x14580 < 4 ; x14580 += 1) {
      
      int x14583 = x21247;
      struct LINEITEMRecord* x14584 = x21248[x14583];
      int x14585 = x21247;
      int x14586 = x14585+(1);
      x21247 = x14586;
      *(x21222 + x14580) = x14584;
      *(x21221 + x14580) = 0;
    };
    int x14631 = 0;
    for(; x14631 < x6333 ; x14631 += 1) {
      
      struct LINEITEMRecord* x14632 = &(x7299[x14631]);
      int x14633 = x14632->L_SHIPDATE;
      int x14634 = x14633<=(19980902);
      if(x14634) {
        char x2978 = x14632->L_RETURNFLAG;
        char x2979 = x14632->L_LINESTATUS;
        int x5619 = x21261;
        struct Q1GRPRecord* x5620 = &(x21262[x5619]);
        x5620->L_RETURNFLAG = x2978;
        x5620->L_LINESTATUS = x2979;
        int x5623 = x21261;
        int x5624 = x5623+(1);
        x21261 = x5624;
        void* x9678 = g_hash_table_lookup(x21246, x5620);
        int x9131 = x9678==(NULL);
        /* VAR */ int ite17316 = 0;
        if(x9131) {
          int x17317 = x21329;
          struct Q1GRPRecord x17318 = *x5620;
          *(x21223 + x17317) = x17318;
          struct Q1GRPRecord* x17320 = &(x21223[x17317]);
          x5620 = x17320;
          int x17322 = x21329;
          int x17323 = x17322+(1);
          x21329 = x17323;
          int x17325 = x21329;
          int x17326 = x17325-(1);
          int x17327 = x17326+(1);
          g_hash_table_insert(x21246, x5620, x17327);
          ite17316 = x17326;
        } else {
          
          int x17330 = x9678-(1);
          ite17316 = x17330;
        };
        int x9154 = ite17316;
        struct LINEITEMRecord* x2989 = x21222[x9154];
        int x2990 = x21221[x9154];
        struct LINEITEMRecord x7616 = *x14632;
        *(x2989 + x2990) = x7616;
        struct LINEITEMRecord* x7618 = &(x2989[x2990]);
        x14632 = x7618;
        int x2992 = x21221[x9154];
        int x2993 = x2992+(1);
        *(x21221 + x9154) = x2993;
      };
    };
    int x21440 = x21329;
    int x21441 = x21309;
    struct Tuple2_Q1GRPRecord_Array_Double* x21442 = x21310[x21441];
    int x21443 = x21309;
    int x21444 = x21443+(1);
    x21309 = x21444;
    int x14790 = 0;
    for(; x14790 < x21440 ; x14790 += 1) {
      
      struct LINEITEMRecord* x14791 = x21222[x14790];
      int x14792 = x21221[x14790];
      struct Q1GRPRecord* x14793 = &(x21223[x14790]);
      /* VAR */ double x14794 = 0.0;
      /* VAR */ double x14795 = 0.0;
      /* VAR */ double x14796 = 0.0;
      /* VAR */ int x14797 = 0;
      /* VAR */ double x14798 = 0.0;
      /* VAR */ double x14799 = 0.0;
      int x14717 = 0;
      for(; x14717 < x14792 ; x14717 += 1) {
        
        struct LINEITEMRecord* x14718 = &(x14791[x14717]);
        double x14719 = x14794;
        double x14720 = x14718->L_EXTENDEDPRICE;
        double x14721 = x14718->L_DISCOUNT;
        double x14722 = 1.0-(x14721);
        double x14723 = x14720*(x14722);
        double x14724 = x14718->L_TAX;
        double x14725 = 1.0+(x14724);
        double x14726 = x14723*(x14725);
        double x14727 = x14719+(x14726);
        x14794 = x14727;
        double x14729 = x14795;
        double x14730 = x14729+(x14721);
        x14795 = x14730;
        double x14732 = x14796;
        double x14733 = x14718->L_QUANTITY;
        double x14734 = x14732+(x14733);
        x14796 = x14734;
        int x14736 = x14797;
        int x14737 = x14736+(1);
        x14797 = x14737;
        double x14739 = x14798;
        double x14740 = x14739+(x14720);
        x14798 = x14740;
        double x14742 = x14799;
        double x14743 = x14742+(x14723);
        x14799 = x14743;
      };
      double x14857 = x14795;
      double x14858 = x14796;
      double x14859 = x14798;
      double x14860 = x14799;
      double x14861 = x14794;
      int x14862 = x14797;
      double x14864 = x14796;
      int x14865 = x14797;
      double x14867 = x14864/(x14865);
      double x14868 = x14798;
      int x14869 = x14797;
      double x14871 = x14868/(x14869);
      double x14872 = x14795;
      int x14873 = x14797;
      double x14875 = x14872/(x14873);
      int x14876 = x21278;
      double* x14877 = x21279[x14876];
      int x14878 = x21278;
      int x14879 = x14878+(1);
      x21278 = x14879;
      *x14877 = x14857;
      *(x14877 + 1) = x14858;
      *(x14877 + 2) = x14859;
      *(x14877 + 3) = x14860;
      *(x14877 + 4) = x14861;
      *(x14877 + 5) = x14862;
      *(x14877 + 6) = x14867;
      *(x14877 + 7) = x14871;
      *(x14877 + 8) = x14875;
      int x14890 = x21290;
      struct Tuple2_Q1GRPRecord_Array_Double* x14891 = &(x21291[x14890]);
      x14891->_1 = x14793;
      x14891->_2 = x14877;
      int x14894 = x21290;
      int x14895 = x14894+(1);
      x21290 = x14895;
      struct Tuple2_Q1GRPRecord_Array_Double x14897 = *x14891;
      *(x21442 + x14790) = x14897;
      struct Tuple2_Q1GRPRecord_Array_Double* x14899 = &(x21442[x14790]);
      x14891 = x14899;
    };
    int x21661 = x21309;
    struct Tuple2_Q1GRPRecord_Array_Double* x21662 = x21310[x21661];
    int x21663 = x21309;
    int x21664 = x21663+(1);
    x21309 = x21664;
    /* VAR */ int x21666 = 0;
    int* x21695 = &(x21681);
    GTree* x21696 = g_tree_new(x21695);
    int x14945 = 0;
    for(; x14945 < x21440 ; x14945 += 1) {
      
      struct Tuple2_Q1GRPRecord_Array_Double* x14946 = &(x21442[x14945]);
      g_tree_insert(x21696, x14946, x14946);
      int x14948 = x21666;
      int x14949 = x14948+(1);
      x21666 = x14949;
    };
    int x21710 = g_tree_nnodes(x21696);
    int x14971 = 0;
    for(; x14971 < x21710 ; x14971 += 1) {
      
      void* x14972 = NULL;
      void** x14980 = &(x14972);
      g_tree_foreach(x21696, x14973, x14980);
      struct Tuple2_Q1GRPRecord_Array_Double* x14982 = (struct Tuple2_Q1GRPRecord_Array_Double*){x14972};
      int x14983 = g_tree_remove(x21696, x14982);
      struct Tuple2_Q1GRPRecord_Array_Double x14984 = *x14982;
      *(x21662 + x14971) = x14984;
      struct Tuple2_Q1GRPRecord_Array_Double* x14986 = &(x21662[x14971]);
      x14982 = x14986;
    };
    /* VAR */ int x21746 = 0;
    int x15009 = 0;
    for(; x15009 < x21440 ; x15009 += 1) {
      
      struct Tuple2_Q1GRPRecord_Array_Double* x15010 = &(x21662[x15009]);
      struct Q1GRPRecord* x15011 = x15010->_1;
      char x15012 = x15011->L_RETURNFLAG;
      char x15013 = x15011->L_LINESTATUS;
      double* x15014 = x15010->_2;
      double x15015 = x15014[1];
      double x15016 = x15014[2];
      double x15017 = x15014[3];
      double x15018 = x15014[4];
      double x15019 = x15014[6];
      double x15020 = x15014[7];
      double x15021 = x15014[8];
      double x15022 = x15014[5];
      printf("%c|%c|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.0f\n", x15012, x15013, x15015, x15016, x15017, x15018, x15019, x15020, x15021, x15022);
      int x15024 = x21746;
      int x15025 = x15024+(1);
      x21746 = x15025;
    };
    int x21784 = x21746;
    printf("(%d rows)\n", x21784);
    struct timeval* x21786 = &x21326;
    gettimeofday(x21786, NULL);
    struct timeval* x21788 = &x21322;
    struct timeval* x21789 = &x21326;
    struct timeval* x21790 = &x21324;
    long x21791 = timeval_subtract(x21788, x21789, x21790);
    printf("Generated code run in %ld milliseconds.\n", x21791);
  };
}
/* ----------- FUNCTIONS ----------- */
int x21224(struct Q1GRPRecord* x9005) {
  char x11724 = x9005->L_RETURNFLAG;
  int x12276 = (int){x11724};
  char x11726 = x9005->L_LINESTATUS;
  int x12278 = (int){x11726};
  int x11728 = x12276+(x12278);
  return x11728; 
}

int x21231(struct Q1GRPRecord* x9010, struct Q1GRPRecord* x9011) {
  char x11732 = x9010->L_RETURNFLAG;
  char x11733 = x9011->L_RETURNFLAG;
  int x11734 = x11732==(x11733);
  char x11735 = x9010->L_LINESTATUS;
  char x11736 = x9011->L_LINESTATUS;
  int x11737 = x11735==(x11736);
  /* VAR */ int ite18511 = 0;
  if(x11734) {
    ite18511 = x11737;
  } else {
    
    ite18511 = 0;
  };
  int x17148 = ite18511;
  return x17148; 
}

int x21681(struct Tuple2_Q1GRPRecord_Array_Double* x4726, struct Tuple2_Q1GRPRecord_Array_Double* x4727) {
  struct Q1GRPRecord* x4728 = x4726->_1;
  char x3201 = x4728->L_RETURNFLAG;
  int x3202 = x3201*(128);
  char x3203 = x4728->L_LINESTATUS;
  int x3204 = x3202+(x3203);
  struct Q1GRPRecord* x4733 = x4727->_1;
  char x3206 = x4733->L_RETURNFLAG;
  int x3207 = x3206*(128);
  char x3208 = x4733->L_LINESTATUS;
  int x3209 = x3207+(x3208);
  int x3210 = x3204-(x3209);
  return x3210; 
}

int x14973(void* x9307, void* x9308, void* x9309) {
  struct Tuple2_Q1GRPRecord_Array_Double** x9310 = (struct Tuple2_Q1GRPRecord_Array_Double**){x9309};
  struct Tuple2_Q1GRPRecord_Array_Double* x9311 = (struct Tuple2_Q1GRPRecord_Array_Double*){x9308};
  pointer_assign(x9310, x9311);
  return 1; 
}
