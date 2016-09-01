#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord;
  struct AGGRecord_String;
  struct WindowRecord_Int_Double;
  struct NATIONRecord;
  struct SUPPLIERRecord;
  struct PARTSUPPRecord;
  
  struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int S_SUPPKEY;
  int S_NATIONKEY;
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  };
  
  struct AGGRecord_String {
  char* key;
  double* aggs;
  };
  
  struct WindowRecord_Int_Double {
  int key;
  double wnd;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  int S_NATIONKEY;
  };
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  };
  
  


int x23335(struct WindowRecord_Int_Double* x355, struct WindowRecord_Int_Double* x356);

int x12459(void* x12453, void* x12454, void* x12455);
/* GLOBAL VARS */

struct timeval x8759;
int main(int argc, char** argv) {
  FILE* x9278 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x9279 = 0;
  int x9280 = x9279;
  int* x9281 = &x9280;
  int x9282 = fscanf(x9278, "%d", x9281);
  pclose(x9278);
  struct PARTSUPPRecord* x10308 = (struct PARTSUPPRecord*)malloc(x9280 * sizeof(struct PARTSUPPRecord));
  memset(x10308, 0, x9280 * sizeof(struct PARTSUPPRecord));
  int x9286 = O_RDONLY;
  int x9287 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x9286);
  struct stat x9288 = (struct stat){0};
  /* VAR */ struct stat x9289 = x9288;
  struct stat x9290 = x9289;
  struct stat* x9291 = &x9290;
  int x9292 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x9291);
  int x9294 = PROT_READ;
  int x9295 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x9291->st_size), x9294, x9295, x9287, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite19947 = 0;
    if((x5<(x9280))) {
      char x22288 = *x3;
      ite19947 = (x22288!=('\0'));
    } else {
      
      ite19947 = 0;
    };
    int x18877 = ite19947;
    if (!(x18877)) break; 
    
    /* VAR */ int x9303 = 0;
    int x9304 = x9303;
    int* x9305 = &x9304;
    char* x9306 = strntoi_unchecked(x3, x9305);
    x3 = x9306;
    /* VAR */ int x9308 = 0;
    int x9309 = x9308;
    int* x9310 = &x9309;
    char* x9311 = strntoi_unchecked(x3, x9310);
    x3 = x9311;
    /* VAR */ int x9313 = 0;
    int x9314 = x9313;
    int* x9315 = &x9314;
    char* x9316 = strntoi_unchecked(x3, x9315);
    x3 = x9316;
    /* VAR */ double x9318 = 0.0;
    double x9319 = x9318;
    double* x9320 = &x9319;
    char* x9321 = strntod_unchecked(x3, x9320);
    x3 = x9321;
    char* x10347 = (char*)malloc(200 * sizeof(char));
    memset(x10347, 0, 200 * sizeof(char));
    /* VAR */ char* x9324 = x3;
    while(1) {
      
      char x9325 = *x3;
      /* VAR */ int ite19981 = 0;
      if((x9325!=('|'))) {
        char x22321 = *x3;
        ite19981 = (x22321!=('\n'));
      } else {
        
        ite19981 = 0;
      };
      int x18904 = ite19981;
      if (!(x18904)) break; 
      
      x3 += 1;
    };
    char* x9332 = x9324;
    int x9333 = x3 - x9332;
    char* x9334 = x9324;
    char* x9335 = strncpy(x10347, x9334, x9333);
    x3 += 1;
    struct PARTSUPPRecord* x10891 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x10891, 0, 1 * sizeof(struct PARTSUPPRecord));
    x10891->PS_PARTKEY = x9304; x10891->PS_SUPPKEY = x9309; x10891->PS_AVAILQTY = x9314; x10891->PS_SUPPLYCOST = x9319;
    int x22 = x4;
    struct PARTSUPPRecord x10367 = *x10891;
    *(x10308 + x22) = x10367;
    struct PARTSUPPRecord* x10369 = &(x10308[x22]);
    x10891 = x10369;
    int x24 = x4;
    x4 = (x24+(1));
  };
  FILE* x9348 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x9349 = 0;
  int x9350 = x9349;
  int* x9351 = &x9350;
  int x9352 = fscanf(x9348, "%d", x9351);
  pclose(x9348);
  struct SUPPLIERRecord* x10380 = (struct SUPPLIERRecord*)malloc(x9350 * sizeof(struct SUPPLIERRecord));
  memset(x10380, 0, x9350 * sizeof(struct SUPPLIERRecord));
  int x9356 = O_RDONLY;
  int x9357 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x9356);
  /* VAR */ struct stat x9358 = x9288;
  struct stat x9359 = x9358;
  struct stat* x9360 = &x9359;
  int x9361 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x9360);
  int x9363 = PROT_READ;
  int x9364 = MAP_PRIVATE;
  char* x30 = mmap(NULL, (x9360->st_size), x9363, x9364, x9357, 0);
  /* VAR */ int x31 = 0;
  while(1) {
    
    int x32 = x31;
    /* VAR */ int ite20031 = 0;
    if((x32<(x9350))) {
      char x22370 = *x30;
      ite20031 = (x22370!=('\0'));
    } else {
      
      ite20031 = 0;
    };
    int x18947 = ite20031;
    if (!(x18947)) break; 
    
    /* VAR */ int x9372 = 0;
    int x9373 = x9372;
    int* x9374 = &x9373;
    char* x9375 = strntoi_unchecked(x30, x9374);
    x30 = x9375;
    char* x10403 = (char*)malloc(26 * sizeof(char));
    memset(x10403, 0, 26 * sizeof(char));
    /* VAR */ char* x9378 = x30;
    while(1) {
      
      char x9379 = *x30;
      /* VAR */ int ite20050 = 0;
      if((x9379!=('|'))) {
        char x22388 = *x30;
        ite20050 = (x22388!=('\n'));
      } else {
        
        ite20050 = 0;
      };
      int x18959 = ite20050;
      if (!(x18959)) break; 
      
      x30 += 1;
    };
    char* x9386 = x9378;
    int x9387 = x30 - x9386;
    char* x9388 = x9378;
    char* x9389 = strncpy(x10403, x9388, x9387);
    x30 += 1;
    char* x10421 = (char*)malloc(41 * sizeof(char));
    memset(x10421, 0, 41 * sizeof(char));
    /* VAR */ char* x9397 = x30;
    while(1) {
      
      char x9398 = *x30;
      /* VAR */ int ite20073 = 0;
      if((x9398!=('|'))) {
        char x22410 = *x30;
        ite20073 = (x22410!=('\n'));
      } else {
        
        ite20073 = 0;
      };
      int x18975 = ite20073;
      if (!(x18975)) break; 
      
      x30 += 1;
    };
    char* x9405 = x9397;
    int x9406 = x30 - x9405;
    char* x9407 = x9397;
    char* x9408 = strncpy(x10421, x9407, x9406);
    x30 += 1;
    /* VAR */ int x9415 = 0;
    int x9416 = x9415;
    int* x9417 = &x9416;
    char* x9418 = strntoi_unchecked(x30, x9417);
    x30 = x9418;
    char* x10444 = (char*)malloc(16 * sizeof(char));
    memset(x10444, 0, 16 * sizeof(char));
    /* VAR */ char* x9421 = x30;
    while(1) {
      
      char x9422 = *x30;
      /* VAR */ int ite20101 = 0;
      if((x9422!=('|'))) {
        char x22437 = *x30;
        ite20101 = (x22437!=('\n'));
      } else {
        
        ite20101 = 0;
      };
      int x18996 = ite20101;
      if (!(x18996)) break; 
      
      x30 += 1;
    };
    char* x9429 = x9421;
    int x9430 = x30 - x9429;
    char* x9431 = x9421;
    char* x9432 = strncpy(x10444, x9431, x9430);
    x30 += 1;
    /* VAR */ double x9439 = 0.0;
    double x9440 = x9439;
    double* x9441 = &x9440;
    char* x9442 = strntod_unchecked(x30, x9441);
    x30 = x9442;
    char* x10467 = (char*)malloc(102 * sizeof(char));
    memset(x10467, 0, 102 * sizeof(char));
    /* VAR */ char* x9445 = x30;
    while(1) {
      
      char x9446 = *x30;
      /* VAR */ int ite20129 = 0;
      if((x9446!=('|'))) {
        char x22464 = *x30;
        ite20129 = (x22464!=('\n'));
      } else {
        
        ite20129 = 0;
      };
      int x19017 = ite20129;
      if (!(x19017)) break; 
      
      x30 += 1;
    };
    char* x9453 = x9445;
    int x9454 = x30 - x9453;
    char* x9455 = x9445;
    char* x9456 = strncpy(x10467, x9455, x9454);
    x30 += 1;
    struct SUPPLIERRecord* x11013 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x11013, 0, 1 * sizeof(struct SUPPLIERRecord));
    x11013->S_SUPPKEY = x9373; x11013->S_NATIONKEY = x9416;
    int x72 = x31;
    struct SUPPLIERRecord x10487 = *x11013;
    *(x10380 + x72) = x10487;
    struct SUPPLIERRecord* x10489 = &(x10380[x72]);
    x11013 = x10489;
    int x74 = x31;
    x31 = (x74+(1));
  };
  FILE* x9469 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x9470 = 0;
  int x9471 = x9470;
  int* x9472 = &x9471;
  int x9473 = fscanf(x9469, "%d", x9472);
  pclose(x9469);
  struct NATIONRecord* x10500 = (struct NATIONRecord*)malloc(x9471 * sizeof(struct NATIONRecord));
  memset(x10500, 0, x9471 * sizeof(struct NATIONRecord));
  int x9477 = O_RDONLY;
  int x9478 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x9477);
  /* VAR */ struct stat x9479 = x9288;
  struct stat x9480 = x9479;
  struct stat* x9481 = &x9480;
  int x9482 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x9481);
  int x9484 = PROT_READ;
  int x9485 = MAP_PRIVATE;
  char* x80 = mmap(NULL, (x9481->st_size), x9484, x9485, x9478, 0);
  /* VAR */ int x81 = 0;
  while(1) {
    
    int x82 = x81;
    /* VAR */ int ite20179 = 0;
    if((x82<(x9471))) {
      char x22513 = *x80;
      ite20179 = (x22513!=('\0'));
    } else {
      
      ite20179 = 0;
    };
    int x19060 = ite20179;
    if (!(x19060)) break; 
    
    /* VAR */ int x9493 = 0;
    int x9494 = x9493;
    int* x9495 = &x9494;
    char* x9496 = strntoi_unchecked(x80, x9495);
    x80 = x9496;
    char* x10523 = (char*)malloc(26 * sizeof(char));
    memset(x10523, 0, 26 * sizeof(char));
    /* VAR */ char* x9499 = x80;
    while(1) {
      
      char x9500 = *x80;
      /* VAR */ int ite20198 = 0;
      if((x9500!=('|'))) {
        char x22531 = *x80;
        ite20198 = (x22531!=('\n'));
      } else {
        
        ite20198 = 0;
      };
      int x19072 = ite20198;
      if (!(x19072)) break; 
      
      x80 += 1;
    };
    char* x9507 = x9499;
    int x9508 = x80 - x9507;
    char* x9509 = x9499;
    char* x9510 = strncpy(x10523, x9509, x9508);
    x80 += 1;
    /* VAR */ int x9517 = 0;
    int x9518 = x9517;
    int* x9519 = &x9518;
    char* x9520 = strntoi_unchecked(x80, x9519);
    x80 = x9520;
    char* x10546 = (char*)malloc(153 * sizeof(char));
    memset(x10546, 0, 153 * sizeof(char));
    /* VAR */ char* x9523 = x80;
    while(1) {
      
      char x9524 = *x80;
      /* VAR */ int ite20226 = 0;
      if((x9524!=('|'))) {
        char x22558 = *x80;
        ite20226 = (x22558!=('\n'));
      } else {
        
        ite20226 = 0;
      };
      int x19093 = ite20226;
      if (!(x19093)) break; 
      
      x80 += 1;
    };
    char* x9531 = x9523;
    int x9532 = x80 - x9531;
    char* x9533 = x9523;
    char* x9534 = strncpy(x10546, x9533, x9532);
    x80 += 1;
    struct NATIONRecord* x11094 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x11094, 0, 1 * sizeof(struct NATIONRecord));
    x11094->N_NATIONKEY = x9494; x11094->N_NAME = x10523;
    int x105 = x81;
    struct NATIONRecord x10566 = *x11094;
    *(x10500 + x105) = x10566;
    struct NATIONRecord* x10568 = &(x10500[x105]);
    x11094 = x10568;
    int x107 = x81;
    x81 = (x107+(1));
  };
  int x112 = 0;
  for(; x112 < 1 ; x112 += 1) {
    
    double* x23001 = (double*)malloc(1 * sizeof(double));
    memset(x23001, 0, 1 * sizeof(double));
    struct AGGRecord_String* x23002 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x23002, 0, 1 * sizeof(struct AGGRecord_String));
    x23002->key = "Total"; x23002->aggs = x23001;
    struct WindowRecord_Int_Double* x23005 = (struct WindowRecord_Int_Double*)malloc(48000000 * sizeof(struct WindowRecord_Int_Double));
    memset(x23005, 0, 48000000 * sizeof(struct WindowRecord_Int_Double));
    GList*** x23006 = (GList***)malloc(1048576 * sizeof(GList**));
    memset(x23006, 0, 1048576 * sizeof(GList**));
    struct PARTSUPPRecord** x23007 = (struct PARTSUPPRecord**)malloc(80000 * sizeof(struct PARTSUPPRecord*));
    memset(x23007, 0, 80000 * sizeof(struct PARTSUPPRecord*));
    int* x23008 = (int*)malloc(80000 * sizeof(int));
    memset(x23008, 0, 80000 * sizeof(int));
    int x17390 = 0;
    for(; x17390 < 80000 ; x17390 += 1) {
      
      struct PARTSUPPRecord* x17391 = (struct PARTSUPPRecord*)malloc(1024 * sizeof(struct PARTSUPPRecord));
      memset(x17391, 0, 1024 * sizeof(struct PARTSUPPRecord));
      *(x23007 + x17390) = x17391;
    };
    /* VAR */ int x23016 = 0;
    int x17411 = 0;
    for(; x17411 < x9280 ; x17411 += 1) {
      
      struct PARTSUPPRecord* x17412 = &(x10308[x17411]);
      int x17414 = (x17412->PS_SUPPKEY)%(80000);
      int x17415 = x23008[x17414];
      struct PARTSUPPRecord* x17416 = x23007[x17414];
      struct PARTSUPPRecord x17417 = *x17412;
      *(x17416 + x17415) = x17417;
      struct PARTSUPPRecord* x17419 = &(x17416[x17415]);
      x17412 = x17419;
      *(x23008 + x17414) = (x17415+(1));
      int x17423 = x23016;
      x23016 = (x17423+(1));
    };
    /* VAR */ int x23048 = 0;
    struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x23049 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(6400000 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x23049, 0, 6400000 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    /* VAR */ int x23050 = 0;
    while(1) {
      
      int x8564 = x23050;
      if (!((x8564<(6400000)))) break; 
      
      int x8566 = x23050;
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x11148 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x11148, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      x11148->N_NATIONKEY = 0; x11148->N_NAME = ""; x11148->S_SUPPKEY = 0; x11148->S_NATIONKEY = 0; x11148->PS_PARTKEY = 0; x11148->PS_SUPPKEY = 0; x11148->PS_AVAILQTY = 0; x11148->PS_SUPPLYCOST = 0.0;
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x10615 = *x11148;
      *(x23049 + x8566) = x10615;
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x10617 = &(x23049[x8566]);
      x11148 = x10617;
      int x8569 = x23050;
      x23050 = (x8569+(1));
    };
    /* VAR */ int x23065 = 0;
    struct WindowRecord_Int_Double* x23066 = (struct WindowRecord_Int_Double*)malloc(1600000 * sizeof(struct WindowRecord_Int_Double));
    memset(x23066, 0, 1600000 * sizeof(struct WindowRecord_Int_Double));
    /* VAR */ int x23067 = 0;
    while(1) {
      
      int x8576 = x23067;
      if (!((x8576<(1600000)))) break; 
      
      int x8578 = x23067;
      struct WindowRecord_Int_Double* x11165 = (struct WindowRecord_Int_Double*)malloc(1 * sizeof(struct WindowRecord_Int_Double));
      memset(x11165, 0, 1 * sizeof(struct WindowRecord_Int_Double));
      x11165->key = 0; x11165->wnd = 0.0;
      struct WindowRecord_Int_Double x10630 = *x11165;
      *(x23066 + x8578) = x10630;
      struct WindowRecord_Int_Double* x10632 = &(x23066[x8578]);
      x11165 = x10632;
      int x8581 = x23067;
      x23067 = (x8581+(1));
    };
    /* VAR */ struct timeval x23082 = x8759;
    struct timeval x23083 = x23082;
    /* VAR */ struct timeval x23084 = x8759;
    struct timeval x23085 = x23084;
    /* VAR */ struct timeval x23086 = x8759;
    struct timeval x23087 = x23086;
    struct timeval* x23088 = &x23085;
    gettimeofday(x23088, NULL);
    /* VAR */ int x23090 = 0;
    /* VAR */ int x23091 = 0;
    /* VAR */ struct AGGRecord_String* x23092 = NULL;
    while(1) {
      
      int x23094 = x23090;
      if (!((x23094<(x9350)))) break; 
      
      int x2667 = x23090;
      struct SUPPLIERRecord* x199 = &(x10380[x2667]);
      int x201 = x199->S_NATIONKEY;
      struct NATIONRecord* x7409 = &(x10500[(x201-(0))]);
      int x16322 = strcmp((x7409->N_NAME), "UNITED KINGDOM");
      if((x16322==(0))) {
        if(((x7409->N_NATIONKEY)==(x201))) {
          int x5047 = x7409->N_NATIONKEY;
          if((x5047==(x201))) {
            int x992 = x199->S_SUPPKEY;
            int x5054 = x992%(80000);
            int x5055 = x23008[x5054];
            struct PARTSUPPRecord* x5056 = x23007[x5054];
            int x17535 = 0;
            for(; x17535 < x5055 ; x17535 += 1) {
              
              struct PARTSUPPRecord* x17536 = &(x5056[x17535]);
              int x17537 = x17536->PS_SUPPKEY;
              if((x992==(x17537))) {
                int x8622 = x23048;
                struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x8623 = &(x23049[x8622]);
                x8623->N_NATIONKEY = x5047;
                x8623->N_NAME = (x7409->N_NAME);
                x8623->S_SUPPKEY = x992;
                x8623->S_NATIONKEY = x201;
                x8623->PS_PARTKEY = (x17536->PS_PARTKEY);
                x8623->PS_SUPPKEY = x17537;
                x8623->PS_AVAILQTY = (x17536->PS_AVAILQTY);
                x8623->PS_SUPPLYCOST = (x17536->PS_SUPPLYCOST);
                int x8632 = x23048;
                x23048 = (x8632+(1));
                int x6204 = (x8623->PS_PARTKEY)%(1048576);
                GList** x6205 = x23006[x6204];
                /* VAR */ GList** list6206 = x6205;
                GList** x6207 = list6206;
                if((x6207==(NULL))) {
                  GList** x12316 = malloc(8);
                  GList* x12317 = NULL;
                  pointer_assign(x12316, x12317);
                  list6206 = x12316;
                  GList** x6211 = list6206;
                  *(x23006 + x6204) = x6211;
                };
                GList** x6214 = list6206;
                GList* x12323 = *(x6214);
                GList* x12324 = g_list_prepend(x12323, x8623);
                pointer_assign(x6214, x12324);
              };
            };
          };
        };
      };
      int x2699 = x23090;
      x23090 = (x2699+(1));
    };
    int x17631 = 0;
    for(; x17631 < 1048576 ; x17631 += 1) {
      
      GList** x17632 = x23006[x17631];
      if((x17632!=(NULL))) {
        /* VAR */ double x12347 = 0.0;
        GList* x12348 = *(x17632);
        /* VAR */ GList* x12349 = x12348;
        while(1) {
          
          GList* x12350 = x12349;
          GList* x12351 = NULL;
          if (!((x12350!=(x12351)))) break; 
          
          GList* x12353 = x12349;
          void* x12354 = g_list_nth_data(x12353, 0);
          struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x12355 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x12354};
          double x12356 = x12347;
          x12347 = (x12356+(((x12355->PS_SUPPLYCOST)*((x12355->PS_AVAILQTY)))));
          GList* x12363 = x12349;
          GList* x12364 = g_list_next(x12363);
          x12349 = x12364;
        };
        double x12367 = x12347;
        GList* x12368 = *(x17632);
        void* x12369 = g_list_nth_data(x12368, 0);
        int x8673 = x23065;
        struct WindowRecord_Int_Double* x8674 = &(x23066[x8673]);
        x8674->key = (((struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x12369})->PS_PARTKEY);
        x8674->wnd = x12367;
        int x8677 = x23065;
        x23065 = (x8677+(1));
        int x6259 = x23091;
        struct WindowRecord_Int_Double x10740 = *x8674;
        *(x23005 + x6259) = x10740;
        struct WindowRecord_Int_Double* x10742 = &(x23005[x6259]);
        x8674 = x10742;
        int x6261 = x23091;
        x23091 = (x6261+(1));
      };
    };
    /* VAR */ int x23299 = 0;
    while(1) {
      
      int x23301 = x23299;
      int x23302 = x23091;
      if (!((x23301<(x23302)))) break; 
      
      int x306 = x23299;
      struct WindowRecord_Int_Double* x307 = &(x23005[x306]);
      int x308 = x23299;
      x23299 = (x308+(1));
      double* x316 = x23002->aggs;
      double x330 = x316[0];
      *x316 = (x330+((x307->wnd)));
    };
    x23092 = x23002;
    struct AGGRecord_String* x23315 = x23092;
    int* x23354 = &(x23335);
    GTree* x23355 = g_tree_new(x23354);
    /* VAR */ int x23356 = 0;
    /* VAR */ int x23357 = 0;
    /* VAR */ int x23358 = 0;
    while(1) {
      
      int x23360 = x23358;
      int x23361 = x23091;
      if (!((x23360<(x23361)))) break; 
      
      int x681 = x23358;
      struct WindowRecord_Int_Double* x682 = &(x23005[x681]);
      int x683 = x23358;
      x23358 = (x683+(1));
      double x690 = ((double*) { x23315->aggs })[0];
      if(((x682->wnd)>((x690*(1.0E-4))))) {
        g_tree_insert(x23355, x682, x682);
      };
    };
    while(1) {
      
      int x3220 = x23356;
      int x698 = !(x3220);
      /* VAR */ int ite21057 = 0;
      if(x698) {
        int x23380 = g_tree_nnodes(x23355);
        ite21057 = (x23380!=(0));
      } else {
        
        ite21057 = 0;
      };
      int x19894 = ite21057;
      if (!(x19894)) break; 
      
      void* x12452 = NULL;
      void** x12460 = &(x12452);
      g_tree_foreach(x23355, x12459, x12460);
      struct WindowRecord_Int_Double* x12462 = (struct WindowRecord_Int_Double*){x12452};
      int x12463 = g_tree_remove(x23355, x12462);
      if(0) {
        x23356 = 1;
      } else {
        
        printf("%d|%.2f\n", (x12462->key), (x12462->wnd));
        int x3236 = x23357;
        x23357 = (x3236+(1));
      };
    };
    int x23406 = x23357;
    printf("(%d rows)\n", x23406);
    struct timeval* x23408 = &x23087;
    gettimeofday(x23408, NULL);
    struct timeval* x23410 = &x23083;
    struct timeval* x23411 = &x23087;
    struct timeval* x23412 = &x23085;
    long x23413 = timeval_subtract(x23410, x23411, x23412);
    printf("Generated code run in %ld milliseconds.\n", x23413);
  };
}
/* ----------- FUNCTIONS ----------- */
int x23335(struct WindowRecord_Int_Double* x355, struct WindowRecord_Int_Double* x356) {
  double x357 = x355->wnd;
  double x358 = x356->wnd;
  /* VAR */ int ite19859 = 0;
  if((x357>(x358))) {
    ite19859 = -1;
  } else {
    
    /* VAR */ int ite19863 = 0;
    if((x357<(x358))) {
      ite19863 = 1;
    } else {
      
      ite19863 = 0;
    };
    int x19862 = ite19863;
    ite19859 = x19862;
  };
  int x362 = ite19859;
  return x362; 
}

int x12459(void* x12453, void* x12454, void* x12455) {
  pointer_assign(((struct WindowRecord_Int_Double**){x12455}), ((struct WindowRecord_Int_Double*){x12454}));
  return 1; 
}
