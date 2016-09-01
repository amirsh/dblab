#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct Q3GRPRecord;
  struct AGGRecord_Q3GRPRecord;
  struct CUSTOMERRecord_ORDERSRecord;
  struct CUSTOMERRecord;
  
  struct Q3GRPRecord {
  int L_ORDERKEY;
  int O_ORDERDATE;
  int O_SHIPPRIORITY;
  };
  
  struct AGGRecord_Q3GRPRecord {
  struct Q3GRPRecord* key;
  double* aggs;
  struct AGGRecord_Q3GRPRecord* next;
  };
  
  struct CUSTOMERRecord_ORDERSRecord {
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
  struct CUSTOMERRecord_ORDERSRecord* next;
  };
  
  struct CUSTOMERRecord {
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
  struct CUSTOMERRecord* next;
  };
  
  


int x44849(struct AGGRecord_Q3GRPRecord* x219, struct AGGRecord_Q3GRPRecord* x220);

int x24616(void* x24610, void* x24611, void* x24612);
/* GLOBAL VARS */

struct timeval x18412;
int main(int argc, char** argv) {
  FILE* x19233 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x19234 = 0;
  int x19235 = x19234;
  int* x19236 = &x19235;
  int x19237 = fscanf(x19233, "%d", x19236);
  pclose(x19233);
  int* x20969 = (int*)malloc(x19235 * sizeof(int));
  memset(x20969, 0, x19235 * sizeof(int));
  int* x20970 = (int*)malloc(x19235 * sizeof(int));
  memset(x20970, 0, x19235 * sizeof(int));
  int* x20971 = (int*)malloc(x19235 * sizeof(int));
  memset(x20971, 0, x19235 * sizeof(int));
  int* x20972 = (int*)malloc(x19235 * sizeof(int));
  memset(x20972, 0, x19235 * sizeof(int));
  double* x20973 = (double*)malloc(x19235 * sizeof(double));
  memset(x20973, 0, x19235 * sizeof(double));
  double* x20974 = (double*)malloc(x19235 * sizeof(double));
  memset(x20974, 0, x19235 * sizeof(double));
  double* x20975 = (double*)malloc(x19235 * sizeof(double));
  memset(x20975, 0, x19235 * sizeof(double));
  double* x20976 = (double*)malloc(x19235 * sizeof(double));
  memset(x20976, 0, x19235 * sizeof(double));
  char* x20977 = (char*)malloc(x19235 * sizeof(char));
  memset(x20977, 0, x19235 * sizeof(char));
  char* x20978 = (char*)malloc(x19235 * sizeof(char));
  memset(x20978, 0, x19235 * sizeof(char));
  int* x20979 = (int*)malloc(x19235 * sizeof(int));
  memset(x20979, 0, x19235 * sizeof(int));
  int* x20980 = (int*)malloc(x19235 * sizeof(int));
  memset(x20980, 0, x19235 * sizeof(int));
  int* x20981 = (int*)malloc(x19235 * sizeof(int));
  memset(x20981, 0, x19235 * sizeof(int));
  char** x20982 = (char**)malloc(x19235 * sizeof(char*));
  memset(x20982, 0, x19235 * sizeof(char*));
  char** x20983 = (char**)malloc(x19235 * sizeof(char*));
  memset(x20983, 0, x19235 * sizeof(char*));
  char** x20984 = (char**)malloc(x19235 * sizeof(char*));
  memset(x20984, 0, x19235 * sizeof(char*));
  int x19256 = O_RDONLY;
  int x19257 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x19256);
  struct stat x19258 = (struct stat){0};
  /* VAR */ struct stat x19259 = x19258;
  struct stat x19260 = x19259;
  struct stat* x19261 = &x19260;
  int x19262 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x19261);
  size_t x19263 = x19261->st_size;
  int x19264 = PROT_READ;
  int x19265 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x19263, x19264, x19265, x19257, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x19235);
    /* VAR */ int ite36896 = 0;
    if(x6) {
      char x43376 = *x3;
      int x43377 = x43376!=('\0');
      ite36896 = x43377;
    } else {
      
      ite36896 = 0;
    };
    int x35342 = ite36896;
    if (!(x35342)) break; 
    
    /* VAR */ int x19273 = 0;
    int x19274 = x19273;
    int* x19275 = &x19274;
    char* x19276 = strntoi_unchecked(x3, x19275);
    x3 = x19276;
    /* VAR */ int x19278 = 0;
    int x19279 = x19278;
    int* x19280 = &x19279;
    char* x19281 = strntoi_unchecked(x3, x19280);
    x3 = x19281;
    /* VAR */ int x19283 = 0;
    int x19284 = x19283;
    int* x19285 = &x19284;
    char* x19286 = strntoi_unchecked(x3, x19285);
    x3 = x19286;
    /* VAR */ int x19288 = 0;
    int x19289 = x19288;
    int* x19290 = &x19289;
    char* x19291 = strntoi_unchecked(x3, x19290);
    x3 = x19291;
    /* VAR */ double x19293 = 0.0;
    double x19294 = x19293;
    double* x19295 = &x19294;
    char* x19296 = strntod_unchecked(x3, x19295);
    x3 = x19296;
    /* VAR */ double x19298 = 0.0;
    double x19299 = x19298;
    double* x19300 = &x19299;
    char* x19301 = strntod_unchecked(x3, x19300);
    x3 = x19301;
    /* VAR */ double x19303 = 0.0;
    double x19304 = x19303;
    double* x19305 = &x19304;
    char* x19306 = strntod_unchecked(x3, x19305);
    x3 = x19306;
    /* VAR */ double x19308 = 0.0;
    double x19309 = x19308;
    double* x19310 = &x19309;
    char* x19311 = strntod_unchecked(x3, x19310);
    x3 = x19311;
    char x19313 = *x3;
    /* VAR */ char x19314 = x19313;
    x3 += 1;
    x3 += 1;
    char x19317 = x19314;
    char x19318 = *x3;
    /* VAR */ char x19319 = x19318;
    x3 += 1;
    x3 += 1;
    char x19322 = x19319;
    /* VAR */ int x19323 = 0;
    int x19324 = x19323;
    int* x19325 = &x19324;
    char* x19326 = strntoi_unchecked(x3, x19325);
    x3 = x19326;
    /* VAR */ int x19328 = 0;
    int x19329 = x19328;
    int* x19330 = &x19329;
    char* x19331 = strntoi_unchecked(x3, x19330);
    x3 = x19331;
    /* VAR */ int x19333 = 0;
    int x19334 = x19333;
    int* x19335 = &x19334;
    char* x19336 = strntoi_unchecked(x3, x19335);
    x3 = x19336;
    int x19338 = x19324*(10000);
    int x19339 = x19329*(100);
    int x19340 = x19338+(x19339);
    int x19341 = x19340+(x19334);
    /* VAR */ int x19342 = 0;
    int x19343 = x19342;
    int* x19344 = &x19343;
    char* x19345 = strntoi_unchecked(x3, x19344);
    x3 = x19345;
    /* VAR */ int x19347 = 0;
    int x19348 = x19347;
    int* x19349 = &x19348;
    char* x19350 = strntoi_unchecked(x3, x19349);
    x3 = x19350;
    /* VAR */ int x19352 = 0;
    int x19353 = x19352;
    int* x19354 = &x19353;
    char* x19355 = strntoi_unchecked(x3, x19354);
    x3 = x19355;
    int x19357 = x19343*(10000);
    int x19358 = x19348*(100);
    int x19359 = x19357+(x19358);
    int x19360 = x19359+(x19353);
    /* VAR */ int x19361 = 0;
    int x19362 = x19361;
    int* x19363 = &x19362;
    char* x19364 = strntoi_unchecked(x3, x19363);
    x3 = x19364;
    /* VAR */ int x19366 = 0;
    int x19367 = x19366;
    int* x19368 = &x19367;
    char* x19369 = strntoi_unchecked(x3, x19368);
    x3 = x19369;
    /* VAR */ int x19371 = 0;
    int x19372 = x19371;
    int* x19373 = &x19372;
    char* x19374 = strntoi_unchecked(x3, x19373);
    x3 = x19374;
    int x19376 = x19362*(10000);
    int x19377 = x19367*(100);
    int x19378 = x19376+(x19377);
    int x19379 = x19378+(x19372);
    char* x21110 = (char*)malloc(26 * sizeof(char));
    memset(x21110, 0, 26 * sizeof(char));
    /* VAR */ char* x19381 = x3;
    while(1) {
      
      char x19382 = *x3;
      int x19383 = x19382!=('|');
      /* VAR */ int ite37017 = 0;
      if(x19383) {
        char x43496 = *x3;
        int x43497 = x43496!=('\n');
        ite37017 = x43497;
      } else {
        
        ite37017 = 0;
      };
      int x35456 = ite37017;
      if (!(x35456)) break; 
      
      x3 += 1;
    };
    char* x19389 = x19381;
    int x19390 = x3 - x19389;
    char* x19391 = x19381;
    char* x19392 = strncpy(x21110, x19391, x19390);
    x3 += 1;
    char* x21128 = (char*)malloc(11 * sizeof(char));
    memset(x21128, 0, 11 * sizeof(char));
    /* VAR */ char* x19400 = x3;
    while(1) {
      
      char x19401 = *x3;
      int x19402 = x19401!=('|');
      /* VAR */ int ite37040 = 0;
      if(x19402) {
        char x43518 = *x3;
        int x43519 = x43518!=('\n');
        ite37040 = x43519;
      } else {
        
        ite37040 = 0;
      };
      int x35472 = ite37040;
      if (!(x35472)) break; 
      
      x3 += 1;
    };
    char* x19408 = x19400;
    int x19409 = x3 - x19408;
    char* x19410 = x19400;
    char* x19411 = strncpy(x21128, x19410, x19409);
    x3 += 1;
    char* x21146 = (char*)malloc(45 * sizeof(char));
    memset(x21146, 0, 45 * sizeof(char));
    /* VAR */ char* x19419 = x3;
    while(1) {
      
      char x19420 = *x3;
      int x19421 = x19420!=('|');
      /* VAR */ int ite37063 = 0;
      if(x19421) {
        char x43540 = *x3;
        int x43541 = x43540!=('\n');
        ite37063 = x43541;
      } else {
        
        ite37063 = 0;
      };
      int x35488 = ite37063;
      if (!(x35488)) break; 
      
      x3 += 1;
    };
    char* x19427 = x19419;
    int x19428 = x3 - x19427;
    char* x19429 = x19419;
    char* x19430 = strncpy(x21146, x19429, x19428);
    x3 += 1;
    int x47 = x4;
    *(x20969 + x47) = x19274;
    *(x20970 + x47) = x19279;
    *(x20971 + x47) = x19284;
    *(x20972 + x47) = x19289;
    *(x20973 + x47) = x19294;
    *(x20974 + x47) = x19299;
    *(x20975 + x47) = x19304;
    *(x20976 + x47) = x19309;
    *(x20977 + x47) = x19317;
    *(x20978 + x47) = x19322;
    *(x20979 + x47) = x19341;
    *(x20980 + x47) = x19360;
    *(x20981 + x47) = x19379;
    *(x20982 + x47) = x21110;
    *(x20983 + x47) = x21128;
    *(x20984 + x47) = x21146;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x19457 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x19458 = 0;
  int x19459 = x19458;
  int* x19460 = &x19459;
  int x19461 = fscanf(x19457, "%d", x19460);
  pclose(x19457);
  int* x21190 = (int*)malloc(x19459 * sizeof(int));
  memset(x21190, 0, x19459 * sizeof(int));
  int* x21191 = (int*)malloc(x19459 * sizeof(int));
  memset(x21191, 0, x19459 * sizeof(int));
  char* x21192 = (char*)malloc(x19459 * sizeof(char));
  memset(x21192, 0, x19459 * sizeof(char));
  double* x21193 = (double*)malloc(x19459 * sizeof(double));
  memset(x21193, 0, x19459 * sizeof(double));
  int* x21194 = (int*)malloc(x19459 * sizeof(int));
  memset(x21194, 0, x19459 * sizeof(int));
  char** x21195 = (char**)malloc(x19459 * sizeof(char*));
  memset(x21195, 0, x19459 * sizeof(char*));
  char** x21196 = (char**)malloc(x19459 * sizeof(char*));
  memset(x21196, 0, x19459 * sizeof(char*));
  int* x21197 = (int*)malloc(x19459 * sizeof(int));
  memset(x21197, 0, x19459 * sizeof(int));
  char** x21198 = (char**)malloc(x19459 * sizeof(char*));
  memset(x21198, 0, x19459 * sizeof(char*));
  int x19473 = O_RDONLY;
  int x19474 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x19473);
  /* VAR */ struct stat x19475 = x19258;
  struct stat x19476 = x19475;
  struct stat* x19477 = &x19476;
  int x19478 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x19477);
  size_t x19479 = x19477->st_size;
  int x19480 = PROT_READ;
  int x19481 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x19479, x19480, x19481, x19474, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x19459);
    /* VAR */ int ite37130 = 0;
    if(x58) {
      char x43606 = *x55;
      int x43607 = x43606!=('\0');
      ite37130 = x43607;
    } else {
      
      ite37130 = 0;
    };
    int x35548 = ite37130;
    if (!(x35548)) break; 
    
    /* VAR */ int x19489 = 0;
    int x19490 = x19489;
    int* x19491 = &x19490;
    char* x19492 = strntoi_unchecked(x55, x19491);
    x55 = x19492;
    /* VAR */ int x19494 = 0;
    int x19495 = x19494;
    int* x19496 = &x19495;
    char* x19497 = strntoi_unchecked(x55, x19496);
    x55 = x19497;
    char x19499 = *x55;
    /* VAR */ char x19500 = x19499;
    x55 += 1;
    x55 += 1;
    char x19503 = x19500;
    /* VAR */ double x19504 = 0.0;
    double x19505 = x19504;
    double* x19506 = &x19505;
    char* x19507 = strntod_unchecked(x55, x19506);
    x55 = x19507;
    /* VAR */ int x19509 = 0;
    int x19510 = x19509;
    int* x19511 = &x19510;
    char* x19512 = strntoi_unchecked(x55, x19511);
    x55 = x19512;
    /* VAR */ int x19514 = 0;
    int x19515 = x19514;
    int* x19516 = &x19515;
    char* x19517 = strntoi_unchecked(x55, x19516);
    x55 = x19517;
    /* VAR */ int x19519 = 0;
    int x19520 = x19519;
    int* x19521 = &x19520;
    char* x19522 = strntoi_unchecked(x55, x19521);
    x55 = x19522;
    int x19524 = x19510*(10000);
    int x19525 = x19515*(100);
    int x19526 = x19524+(x19525);
    int x19527 = x19526+(x19520);
    char* x21255 = (char*)malloc(16 * sizeof(char));
    memset(x21255, 0, 16 * sizeof(char));
    /* VAR */ char* x19529 = x55;
    while(1) {
      
      char x19530 = *x55;
      int x19531 = x19530!=('|');
      /* VAR */ int ite37183 = 0;
      if(x19531) {
        char x43658 = *x55;
        int x43659 = x43658!=('\n');
        ite37183 = x43659;
      } else {
        
        ite37183 = 0;
      };
      int x35594 = ite37183;
      if (!(x35594)) break; 
      
      x55 += 1;
    };
    char* x19537 = x19529;
    int x19538 = x55 - x19537;
    char* x19539 = x19529;
    char* x19540 = strncpy(x21255, x19539, x19538);
    x55 += 1;
    char* x21273 = (char*)malloc(16 * sizeof(char));
    memset(x21273, 0, 16 * sizeof(char));
    /* VAR */ char* x19548 = x55;
    while(1) {
      
      char x19549 = *x55;
      int x19550 = x19549!=('|');
      /* VAR */ int ite37206 = 0;
      if(x19550) {
        char x43680 = *x55;
        int x43681 = x43680!=('\n');
        ite37206 = x43681;
      } else {
        
        ite37206 = 0;
      };
      int x35610 = ite37206;
      if (!(x35610)) break; 
      
      x55 += 1;
    };
    char* x19556 = x19548;
    int x19557 = x55 - x19556;
    char* x19558 = x19548;
    char* x19559 = strncpy(x21273, x19558, x19557);
    x55 += 1;
    /* VAR */ int x19566 = 0;
    int x19567 = x19566;
    int* x19568 = &x19567;
    char* x19569 = strntoi_unchecked(x55, x19568);
    x55 = x19569;
    char* x21296 = (char*)malloc(80 * sizeof(char));
    memset(x21296, 0, 80 * sizeof(char));
    /* VAR */ char* x19572 = x55;
    while(1) {
      
      char x19573 = *x55;
      int x19574 = x19573!=('|');
      /* VAR */ int ite37234 = 0;
      if(x19574) {
        char x43707 = *x55;
        int x43708 = x43707!=('\n');
        ite37234 = x43708;
      } else {
        
        ite37234 = 0;
      };
      int x35631 = ite37234;
      if (!(x35631)) break; 
      
      x55 += 1;
    };
    char* x19580 = x19572;
    int x19581 = x55 - x19580;
    char* x19582 = x19572;
    char* x19583 = strncpy(x21296, x19582, x19581);
    x55 += 1;
    int x91 = x56;
    *(x21190 + x91) = x19490;
    *(x21191 + x91) = x19495;
    *(x21192 + x91) = x19503;
    *(x21193 + x91) = x19505;
    *(x21194 + x91) = x19527;
    *(x21195 + x91) = x21255;
    *(x21196 + x91) = x21273;
    *(x21197 + x91) = x19567;
    *(x21198 + x91) = x21296;
    int x93 = x56;
    int x94 = x93+(1);
    x56 = x94;
  };
  FILE* x19603 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x19604 = 0;
  int x19605 = x19604;
  int* x19606 = &x19605;
  int x19607 = fscanf(x19603, "%d", x19606);
  pclose(x19603);
  struct CUSTOMERRecord* x21333 = (struct CUSTOMERRecord*)malloc(x19605 * sizeof(struct CUSTOMERRecord));
  memset(x21333, 0, x19605 * sizeof(struct CUSTOMERRecord));
  int x19611 = O_RDONLY;
  int x19612 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x19611);
  /* VAR */ struct stat x19613 = x19258;
  struct stat x19614 = x19613;
  struct stat* x19615 = &x19614;
  int x19616 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x19615);
  size_t x19617 = x19615->st_size;
  int x19618 = PROT_READ;
  int x19619 = MAP_PRIVATE;
  char* x99 = mmap(NULL, x19617, x19618, x19619, x19612, 0);
  /* VAR */ int x100 = 0;
  while(1) {
    
    int x101 = x100;
    int x102 = x101<(x19605);
    /* VAR */ int ite37286 = 0;
    if(x102) {
      char x43758 = *x99;
      int x43759 = x43758!=('\0');
      ite37286 = x43759;
    } else {
      
      ite37286 = 0;
    };
    int x35676 = ite37286;
    if (!(x35676)) break; 
    
    /* VAR */ int x19627 = 0;
    int x19628 = x19627;
    int* x19629 = &x19628;
    char* x19630 = strntoi_unchecked(x99, x19629);
    x99 = x19630;
    char* x21356 = (char*)malloc(26 * sizeof(char));
    memset(x21356, 0, 26 * sizeof(char));
    /* VAR */ char* x19633 = x99;
    while(1) {
      
      char x19634 = *x99;
      int x19635 = x19634!=('|');
      /* VAR */ int ite37305 = 0;
      if(x19635) {
        char x43776 = *x99;
        int x43777 = x43776!=('\n');
        ite37305 = x43777;
      } else {
        
        ite37305 = 0;
      };
      int x35688 = ite37305;
      if (!(x35688)) break; 
      
      x99 += 1;
    };
    char* x19641 = x19633;
    int x19642 = x99 - x19641;
    char* x19643 = x19633;
    char* x19644 = strncpy(x21356, x19643, x19642);
    x99 += 1;
    char* x21374 = (char*)malloc(41 * sizeof(char));
    memset(x21374, 0, 41 * sizeof(char));
    /* VAR */ char* x19652 = x99;
    while(1) {
      
      char x19653 = *x99;
      int x19654 = x19653!=('|');
      /* VAR */ int ite37328 = 0;
      if(x19654) {
        char x43798 = *x99;
        int x43799 = x43798!=('\n');
        ite37328 = x43799;
      } else {
        
        ite37328 = 0;
      };
      int x35704 = ite37328;
      if (!(x35704)) break; 
      
      x99 += 1;
    };
    char* x19660 = x19652;
    int x19661 = x99 - x19660;
    char* x19662 = x19652;
    char* x19663 = strncpy(x21374, x19662, x19661);
    x99 += 1;
    /* VAR */ int x19670 = 0;
    int x19671 = x19670;
    int* x19672 = &x19671;
    char* x19673 = strntoi_unchecked(x99, x19672);
    x99 = x19673;
    char* x21397 = (char*)malloc(16 * sizeof(char));
    memset(x21397, 0, 16 * sizeof(char));
    /* VAR */ char* x19676 = x99;
    while(1) {
      
      char x19677 = *x99;
      int x19678 = x19677!=('|');
      /* VAR */ int ite37356 = 0;
      if(x19678) {
        char x43825 = *x99;
        int x43826 = x43825!=('\n');
        ite37356 = x43826;
      } else {
        
        ite37356 = 0;
      };
      int x35725 = ite37356;
      if (!(x35725)) break; 
      
      x99 += 1;
    };
    char* x19684 = x19676;
    int x19685 = x99 - x19684;
    char* x19686 = x19676;
    char* x19687 = strncpy(x21397, x19686, x19685);
    x99 += 1;
    /* VAR */ double x19694 = 0.0;
    double x19695 = x19694;
    double* x19696 = &x19695;
    char* x19697 = strntod_unchecked(x99, x19696);
    x99 = x19697;
    char* x21420 = (char*)malloc(11 * sizeof(char));
    memset(x21420, 0, 11 * sizeof(char));
    /* VAR */ char* x19700 = x99;
    while(1) {
      
      char x19701 = *x99;
      int x19702 = x19701!=('|');
      /* VAR */ int ite37384 = 0;
      if(x19702) {
        char x43852 = *x99;
        int x43853 = x43852!=('\n');
        ite37384 = x43853;
      } else {
        
        ite37384 = 0;
      };
      int x35746 = ite37384;
      if (!(x35746)) break; 
      
      x99 += 1;
    };
    char* x19708 = x19700;
    int x19709 = x99 - x19708;
    char* x19710 = x19700;
    char* x19711 = strncpy(x21420, x19710, x19709);
    x99 += 1;
    char* x21438 = (char*)malloc(118 * sizeof(char));
    memset(x21438, 0, 118 * sizeof(char));
    /* VAR */ char* x19719 = x99;
    while(1) {
      
      char x19720 = *x99;
      int x19721 = x19720!=('|');
      /* VAR */ int ite37407 = 0;
      if(x19721) {
        char x43874 = *x99;
        int x43875 = x43874!=('\n');
        ite37407 = x43875;
      } else {
        
        ite37407 = 0;
      };
      int x35762 = ite37407;
      if (!(x35762)) break; 
      
      x99 += 1;
    };
    char* x19727 = x19719;
    int x19728 = x99 - x19727;
    char* x19729 = x19719;
    char* x19730 = strncpy(x21438, x19729, x19728);
    x99 += 1;
    struct CUSTOMERRecord* x22364 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x22364, 0, 1 * sizeof(struct CUSTOMERRecord));
    x22364->C_CUSTKEY = x19628; x22364->C_NAME = x21356; x22364->C_ADDRESS = x21374; x22364->C_NATIONKEY = x19671; x22364->C_PHONE = x21397; x22364->C_ACCTBAL = x19695; x22364->C_MKTSEGMENT = x21420; x22364->C_COMMENT = x21438; x22364->next = NULL;
    int x149 = x100;
    int x27978 = x22364==(NULL);
    /* VAR */ int ite37430 = 0;
    if(x27978) {
      ite37430 = 1;
    } else {
      
      char* x43897 = x22364->C_NAME;
      int x43898 = x43897==(NULL);
      /* VAR */ int x43899 = 0;
      if(x43898) {
        x43899 = 1;
      } else {
        
        int x43902 = strcmp(x43897, "");
        int x43903 = !(x43902);
        x43899 = x43903;
      };
      int x43906 = x43899;
      ite37430 = x43906;
    };
    int x35778 = ite37430;
    if(x35778) {
      *(x21333 + x149) = (const struct CUSTOMERRecord){0};
    } else {
      
      struct CUSTOMERRecord x21460 = *x22364;
      *(x21333 + x149) = x21460;
      struct CUSTOMERRecord* x21462 = &(x21333[x149]);
      x22364 = x21462;
    };
    int x151 = x100;
    int x152 = x151+(1);
    x100 = x152;
  };
  int x156 = 0;
  for(; x156 < 1 ; x156 += 1) {
    
    /* VAR */ int x44692 = 0;
    struct AGGRecord_Q3GRPRecord* x44693 = (struct AGGRecord_Q3GRPRecord*)malloc(1048576 * sizeof(struct AGGRecord_Q3GRPRecord));
    memset(x44693, 0, 1048576 * sizeof(struct AGGRecord_Q3GRPRecord));
    int x33171 = 0;
    for(; x33171 < 1048576 ; x33171 += 1) {
      
      *(x44693 + x33171) = (const struct AGGRecord_Q3GRPRecord){0};
    };
    struct CUSTOMERRecord_ORDERSRecord* x44699 = (struct CUSTOMERRecord_ORDERSRecord*)malloc(1048576 * sizeof(struct CUSTOMERRecord_ORDERSRecord));
    memset(x44699, 0, 1048576 * sizeof(struct CUSTOMERRecord_ORDERSRecord));
    struct CUSTOMERRecord* x44700 = (struct CUSTOMERRecord*)malloc(1048576 * sizeof(struct CUSTOMERRecord));
    memset(x44700, 0, 1048576 * sizeof(struct CUSTOMERRecord));
    /* VAR */ int x44701 = 0;
    struct CUSTOMERRecord_ORDERSRecord* x44702 = (struct CUSTOMERRecord_ORDERSRecord*)malloc(12000000 * sizeof(struct CUSTOMERRecord_ORDERSRecord));
    memset(x44702, 0, 12000000 * sizeof(struct CUSTOMERRecord_ORDERSRecord));
    /* VAR */ int x44703 = 0;
    while(1) {
      
      int x18085 = x44703;
      int x18086 = x18085<(12000000);
      if (!(x18086)) break; 
      
      int x18087 = x44703;
      struct CUSTOMERRecord_ORDERSRecord* x22397 = (struct CUSTOMERRecord_ORDERSRecord*)malloc(1 * sizeof(struct CUSTOMERRecord_ORDERSRecord));
      memset(x22397, 0, 1 * sizeof(struct CUSTOMERRecord_ORDERSRecord));
      x22397->C_CUSTKEY = 0; x22397->C_NAME = ""; x22397->C_ADDRESS = ""; x22397->C_NATIONKEY = 0; x22397->C_PHONE = ""; x22397->C_ACCTBAL = 0.0; x22397->C_MKTSEGMENT = ""; x22397->C_COMMENT = ""; x22397->O_ORDERKEY = 0; x22397->O_CUSTKEY = 0; x22397->O_ORDERSTATUS = '\0'; x22397->O_TOTALPRICE = 0.0; x22397->O_ORDERDATE = 0; x22397->O_ORDERPRIORITY = ""; x22397->O_CLERK = ""; x22397->O_SHIPPRIORITY = 0; x22397->O_COMMENT = ""; x22397->next = NULL;
      int x28013 = x22397==(NULL);
      /* VAR */ int ite38196 = 0;
      if(x28013) {
        ite38196 = 1;
      } else {
        
        char* x44715 = x22397->C_NAME;
        int x44716 = x44715==(NULL);
        /* VAR */ int x44717 = 0;
        if(x44716) {
          x44717 = 1;
        } else {
          
          int x44720 = strcmp(x44715, "");
          int x44721 = !(x44720);
          x44717 = x44721;
        };
        int x44724 = x44717;
        ite38196 = x44724;
      };
      int x36346 = ite38196;
      if(x36346) {
        *(x44702 + x18087) = (const struct CUSTOMERRecord_ORDERSRecord){0};
      } else {
        
        struct CUSTOMERRecord_ORDERSRecord x21490 = *x22397;
        *(x44702 + x18087) = x21490;
        struct CUSTOMERRecord_ORDERSRecord* x21492 = &(x44702[x18087]);
        x22397 = x21492;
      };
      int x18090 = x44703;
      int x18091 = x18090+(1);
      x44703 = x18091;
    };
    /* VAR */ int x44737 = 0;
    struct Q3GRPRecord* x44738 = (struct Q3GRPRecord*)malloc(48000000 * sizeof(struct Q3GRPRecord));
    memset(x44738, 0, 48000000 * sizeof(struct Q3GRPRecord));
    /* VAR */ int x44739 = 0;
    while(1) {
      
      int x18097 = x44739;
      int x18098 = x18097<(48000000);
      if (!(x18098)) break; 
      
      int x18099 = x44739;
      struct Q3GRPRecord* x22417 = (struct Q3GRPRecord*)malloc(1 * sizeof(struct Q3GRPRecord));
      memset(x22417, 0, 1 * sizeof(struct Q3GRPRecord));
      x22417->L_ORDERKEY = 0; x22417->O_ORDERDATE = 0; x22417->O_SHIPPRIORITY = 0;
      int x28036 = x22417==(NULL);
      if(x28036) {
        *(x44738 + x18099) = (const struct Q3GRPRecord){0};
      } else {
        
        struct Q3GRPRecord x21508 = *x22417;
        *(x44738 + x18099) = x21508;
        struct Q3GRPRecord* x21510 = &(x44738[x18099]);
        x22417 = x21510;
      };
      int x18102 = x44739;
      int x18103 = x18102+(1);
      x44739 = x18103;
    };
    /* VAR */ int x44757 = 0;
    double** x44758 = (double**)malloc(48000000 * sizeof(double*));
    memset(x44758, 0, 48000000 * sizeof(double*));
    /* VAR */ int x44759 = 0;
    while(1) {
      
      int x18109 = x44759;
      int x18110 = x18109<(48000000);
      if (!(x18110)) break; 
      
      int x18111 = x44759;
      double* x21523 = (double*)malloc(1 * sizeof(double));
      memset(x21523, 0, 1 * sizeof(double));
      *(x44758 + x18111) = x21523;
      int x18114 = x44759;
      int x18115 = x18114+(1);
      x44759 = x18115;
    };
    /* VAR */ int x44769 = 0;
    struct AGGRecord_Q3GRPRecord* x44770 = (struct AGGRecord_Q3GRPRecord*)malloc(48000000 * sizeof(struct AGGRecord_Q3GRPRecord));
    memset(x44770, 0, 48000000 * sizeof(struct AGGRecord_Q3GRPRecord));
    /* VAR */ int x44771 = 0;
    while(1) {
      
      int x18121 = x44771;
      int x18122 = x18121<(48000000);
      if (!(x18122)) break; 
      
      int x18123 = x44771;
      struct Q3GRPRecord* x18124 = &(x44738[x18123]);
      double* x18125 = x44758[x18123];
      struct AGGRecord_Q3GRPRecord* x22451 = (struct AGGRecord_Q3GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q3GRPRecord));
      memset(x22451, 0, 1 * sizeof(struct AGGRecord_Q3GRPRecord));
      x22451->key = x18124; x22451->aggs = x18125; x22451->next = NULL;
      int x28070 = x22451==(NULL);
      /* VAR */ int ite38261 = 0;
      if(x28070) {
        ite38261 = 1;
      } else {
        
        struct Q3GRPRecord* x44785 = x22451->key;
        int x44786 = x44785==(NULL);
        ite38261 = x44786;
      };
      int x36402 = ite38261;
      if(x36402) {
        *(x44770 + x18123) = (const struct AGGRecord_Q3GRPRecord){0};
      } else {
        
        struct AGGRecord_Q3GRPRecord x21540 = *x22451;
        *(x44770 + x18123) = x21540;
        struct AGGRecord_Q3GRPRecord* x21542 = &(x44770[x18123]);
        x22451 = x21542;
      };
      int x18128 = x44771;
      int x18129 = x18128+(1);
      x44771 = x18129;
    };
    /* VAR */ struct timeval x44799 = x18412;
    struct timeval x44800 = x44799;
    /* VAR */ struct timeval x44801 = x18412;
    struct timeval x44802 = x44801;
    /* VAR */ struct timeval x44803 = x18412;
    struct timeval x44804 = x44803;
    struct timeval* x44805 = &x44802;
    gettimeofday(x44805, NULL);
    /* VAR */ int x44807 = 0;
    /* VAR */ int x44808 = 0;
    /* VAR */ int x44809 = 0;
    int* x44888 = &(x44849);
    GTree* x44889 = g_tree_new(x44888);
    /* VAR */ int x44890 = 0;
    /* VAR */ int x44891 = 0;
    while(1) {
      
      int x44893 = x44807;
      int x44894 = x44893<(x19605);
      if (!(x44894)) break; 
      
      int x1896 = x44807;
      struct CUSTOMERRecord* x256 = &(x21333[x1896]);
      char* x258 = x256->C_MKTSEGMENT;
      int x31244 = strcmp(x258, "HOUSEHOLD");
      int x31245 = x31244==(0);
      if(x31245) {
        int x260 = x256->C_CUSTKEY;
        int x3719 = x260%(1048576);
        struct CUSTOMERRecord* x5649 = &(x44700[x3719]);
        /* VAR */ struct CUSTOMERRecord* list5650 = x5649;
        struct CUSTOMERRecord* x5651 = list5650;
        int x28150 = x5651==(NULL);
        /* VAR */ int ite38388 = 0;
        if(x28150) {
          ite38388 = 1;
        } else {
          
          char* x44910 = x5651->C_NAME;
          int x44911 = x44910==(NULL);
          /* VAR */ int x44912 = 0;
          if(x44911) {
            x44912 = 1;
          } else {
            
            int x44915 = strcmp(x44910, "");
            int x44916 = !(x44915);
            x44912 = x44916;
          };
          int x44919 = x44912;
          ite38388 = x44919;
        };
        int x36520 = ite38388;
        if(x36520) {
          list5650 = NULL;
          struct CUSTOMERRecord* x5658 = list5650;
          int x28157 = x5658==(NULL);
          /* VAR */ int ite38403 = 0;
          if(x28157) {
            ite38403 = 1;
          } else {
            
            char* x44930 = x5658->C_NAME;
            int x44931 = x44930==(NULL);
            /* VAR */ int x44932 = 0;
            if(x44931) {
              x44932 = 1;
            } else {
              
              int x44935 = strcmp(x44930, "");
              int x44936 = !(x44935);
              x44932 = x44936;
            };
            int x44939 = x44932;
            ite38403 = x44939;
          };
          int x36526 = ite38403;
          if(x36526) {
            *(x44700 + x3719) = (const struct CUSTOMERRecord){0};
          } else {
            
            struct CUSTOMERRecord x21603 = *x5658;
            *(x44700 + x3719) = x21603;
            struct CUSTOMERRecord* x21605 = &(x44700[x3719]);
            list5650 = x21605;
          };
        };
        int x28167 = x5649==(NULL);
        /* VAR */ int ite38421 = 0;
        if(x28167) {
          ite38421 = 1;
        } else {
          
          char* x44953 = x5649->C_NAME;
          int x44954 = x44953==(NULL);
          /* VAR */ int x44955 = 0;
          if(x44954) {
            x44955 = 1;
          } else {
            
            int x44958 = strcmp(x44953, "");
            int x44959 = !(x44958);
            x44955 = x44959;
          };
          int x44962 = x44955;
          ite38421 = x44962;
        };
        int x36535 = ite38421;
        if(x36535) {
          x256->next = NULL;
          int x28173 = x256==(NULL);
          /* VAR */ int ite38435 = 0;
          if(x28173) {
            ite38435 = 1;
          } else {
            
            char* x44972 = x256->C_NAME;
            int x44973 = x44972==(NULL);
            /* VAR */ int x44974 = 0;
            if(x44973) {
              x44974 = 1;
            } else {
              
              int x44977 = strcmp(x44972, "");
              int x44978 = !(x44977);
              x44974 = x44978;
            };
            int x44981 = x44974;
            ite38435 = x44981;
          };
          int x36540 = ite38435;
          if(x36540) {
            *(x44700 + x3719) = (const struct CUSTOMERRecord){0};
          } else {
            
            struct CUSTOMERRecord x21613 = *x256;
            *(x44700 + x3719) = x21613;
            struct CUSTOMERRecord* x21615 = &(x44700[x3719]);
            x256 = x21615;
          };
          list5650 = x256;
        } else {
          
          struct CUSTOMERRecord* x7498 = x5649->next;
          x256->next = x7498;
          x5649->next = x256;
        };
      };
      int x1904 = x44807;
      int x265 = x1904+(1);
      x44807 = x265;
    };
    while(1) {
      
      int x44999 = x44808;
      int x45000 = x44999<(x19459);
      if (!(x45000)) break; 
      
      int x1913 = x44808;
      int x13035 = x21194[x1913];
      int x277 = x13035<(19950304);
      if(x277) {
        int x13039 = x21191[x1913];
        int x3745 = x13039%(1048576);
        struct CUSTOMERRecord* x5684 = &(x44700[x3745]);
        int x28201 = x5684!=(NULL);
        /* VAR */ int ite38471 = 0;
        if(x28201) {
          char* x45011 = x5684->C_NAME;
          int x45012 = x45011!=(NULL);
          /* VAR */ int x45013 = 0;
          if(x45012) {
            int x45015 = strcmp(x45011, "");
            x45013 = x45015;
          } else {
            
            x45013 = 0;
          };
          int x45019 = x45013;
          ite38471 = x45019;
        } else {
          
          ite38471 = 0;
        };
        int x36565 = ite38471;
        if(x36565) {
          /* VAR */ struct CUSTOMERRecord* current6343 = x5684;
          while(1) {
            
            struct CUSTOMERRecord* x6345 = current6343;
            int x28209 = x6345!=(NULL);
            /* VAR */ int ite38487 = 0;
            if(x28209) {
              char* x45031 = x6345->C_NAME;
              int x45032 = x45031!=(NULL);
              /* VAR */ int x45033 = 0;
              if(x45032) {
                int x45035 = strcmp(x45031, "");
                x45033 = x45035;
              } else {
                
                x45033 = 0;
              };
              int x45039 = x45033;
              ite38487 = x45039;
            } else {
              
              ite38487 = 0;
            };
            int x36572 = ite38487;
            if (!(x36572)) break; 
            
            struct CUSTOMERRecord* x6347 = current6343;
            struct CUSTOMERRecord* x7569 = x6347->next;
            struct CUSTOMERRecord* x6349 = current6343;
            int x5739 = x6349->C_CUSTKEY;
            int x5740 = x5739==(x13039);
            if(x5740) {
              char* x808 = x6349->C_NAME;
              char* x809 = x6349->C_ADDRESS;
              int x810 = x6349->C_NATIONKEY;
              char* x811 = x6349->C_PHONE;
              double x812 = x6349->C_ACCTBAL;
              char* x813 = x6349->C_MKTSEGMENT;
              char* x814 = x6349->C_COMMENT;
              int x13063 = x21190[x1913];
              char x13065 = x21192[x1913];
              double x13067 = x21193[x1913];
              char* x13069 = x21195[x1913];
              char* x13071 = x21196[x1913];
              int x13073 = x21197[x1913];
              char* x13075 = x21198[x1913];
              int x18229 = x44701;
              struct CUSTOMERRecord_ORDERSRecord* x18230 = &(x44702[x18229]);
              x18230->C_CUSTKEY = x5739;
              x18230->C_NAME = x808;
              x18230->C_ADDRESS = x809;
              x18230->C_NATIONKEY = x810;
              x18230->C_PHONE = x811;
              x18230->C_ACCTBAL = x812;
              x18230->C_MKTSEGMENT = x813;
              x18230->C_COMMENT = x814;
              x18230->O_ORDERKEY = x13063;
              x18230->O_CUSTKEY = x13039;
              x18230->O_ORDERSTATUS = x13065;
              x18230->O_TOTALPRICE = x13067;
              x18230->O_ORDERDATE = x13035;
              x18230->O_ORDERPRIORITY = x13069;
              x18230->O_CLERK = x13071;
              x18230->O_SHIPPRIORITY = x13073;
              x18230->O_COMMENT = x13075;
              x18230->next = NULL;
              int x18249 = x44701;
              int x18250 = x18249+(1);
              x44701 = x18250;
              int x299 = x18230->O_ORDERKEY;
              int x3773 = x299%(1048576);
              struct CUSTOMERRecord_ORDERSRecord* x5712 = &(x44699[x3773]);
              /* VAR */ struct CUSTOMERRecord_ORDERSRecord* list5713 = x5712;
              struct CUSTOMERRecord_ORDERSRecord* x5714 = list5713;
              int x28261 = x5714==(NULL);
              /* VAR */ int ite38547 = 0;
              if(x28261) {
                ite38547 = 1;
              } else {
                
                char* x45096 = x5714->C_NAME;
                int x45097 = x45096==(NULL);
                /* VAR */ int x45098 = 0;
                if(x45097) {
                  x45098 = 1;
                } else {
                  
                  int x45101 = strcmp(x45096, "");
                  int x45102 = !(x45101);
                  x45098 = x45102;
                };
                int x45105 = x45098;
                ite38547 = x45105;
              };
              int x36623 = ite38547;
              if(x36623) {
                list5713 = NULL;
                struct CUSTOMERRecord_ORDERSRecord* x5721 = list5713;
                int x28268 = x5721==(NULL);
                /* VAR */ int ite38562 = 0;
                if(x28268) {
                  ite38562 = 1;
                } else {
                  
                  char* x45116 = x5721->C_NAME;
                  int x45117 = x45116==(NULL);
                  /* VAR */ int x45118 = 0;
                  if(x45117) {
                    x45118 = 1;
                  } else {
                    
                    int x45121 = strcmp(x45116, "");
                    int x45122 = !(x45121);
                    x45118 = x45122;
                  };
                  int x45125 = x45118;
                  ite38562 = x45125;
                };
                int x36629 = ite38562;
                if(x36629) {
                  *(x44699 + x3773) = (const struct CUSTOMERRecord_ORDERSRecord){0};
                } else {
                  
                  struct CUSTOMERRecord_ORDERSRecord x21698 = *x5721;
                  *(x44699 + x3773) = x21698;
                  struct CUSTOMERRecord_ORDERSRecord* x21700 = &(x44699[x3773]);
                  list5713 = x21700;
                };
              };
              int x28278 = x5712==(NULL);
              /* VAR */ int ite38580 = 0;
              if(x28278) {
                ite38580 = 1;
              } else {
                
                char* x45139 = x5712->C_NAME;
                int x45140 = x45139==(NULL);
                /* VAR */ int x45141 = 0;
                if(x45140) {
                  x45141 = 1;
                } else {
                  
                  int x45144 = strcmp(x45139, "");
                  int x45145 = !(x45144);
                  x45141 = x45145;
                };
                int x45148 = x45141;
                ite38580 = x45148;
              };
              int x36638 = ite38580;
              if(x36638) {
                x18230->next = NULL;
                int x28284 = x18230==(NULL);
                /* VAR */ int ite38594 = 0;
                if(x28284) {
                  ite38594 = 1;
                } else {
                  
                  char* x45158 = x18230->C_NAME;
                  int x45159 = x45158==(NULL);
                  /* VAR */ int x45160 = 0;
                  if(x45159) {
                    x45160 = 1;
                  } else {
                    
                    int x45163 = strcmp(x45158, "");
                    int x45164 = !(x45163);
                    x45160 = x45164;
                  };
                  int x45167 = x45160;
                  ite38594 = x45167;
                };
                int x36643 = ite38594;
                if(x36643) {
                  *(x44699 + x3773) = (const struct CUSTOMERRecord_ORDERSRecord){0};
                } else {
                  
                  struct CUSTOMERRecord_ORDERSRecord x21708 = *x18230;
                  *(x44699 + x3773) = x21708;
                  struct CUSTOMERRecord_ORDERSRecord* x21710 = &(x44699[x3773]);
                  x18230 = x21710;
                };
                list5713 = x18230;
              } else {
                
                struct CUSTOMERRecord_ORDERSRecord* x7609 = x5712->next;
                x18230->next = x7609;
                x5712->next = x18230;
              };
            };
            current6343 = x7569;
          };
        };
      };
      int x1972 = x44808;
      int x308 = x1972+(1);
      x44808 = x308;
    };
    while(1) {
      
      int x45186 = x44809;
      int x45187 = x45186<(x19235);
      if (!(x45187)) break; 
      
      int x1982 = x44809;
      int x13109 = x20979[x1982];
      int x321 = x13109>(19950304);
      if(x321) {
        int x13113 = x20969[x1982];
        int x3800 = x13113%(1048576);
        struct CUSTOMERRecord_ORDERSRecord* x5797 = &(x44699[x3800]);
        int x28313 = x5797!=(NULL);
        /* VAR */ int ite38631 = 0;
        if(x28313) {
          char* x45198 = x5797->C_NAME;
          int x45199 = x45198!=(NULL);
          /* VAR */ int x45200 = 0;
          if(x45199) {
            int x45202 = strcmp(x45198, "");
            x45200 = x45202;
          } else {
            
            x45200 = 0;
          };
          int x45206 = x45200;
          ite38631 = x45206;
        } else {
          
          ite38631 = 0;
        };
        int x36669 = ite38631;
        if(x36669) {
          /* VAR */ struct CUSTOMERRecord_ORDERSRecord* current6511 = x5797;
          while(1) {
            
            struct CUSTOMERRecord_ORDERSRecord* x6513 = current6511;
            int x28321 = x6513!=(NULL);
            /* VAR */ int ite38647 = 0;
            if(x28321) {
              char* x45218 = x6513->C_NAME;
              int x45219 = x45218!=(NULL);
              /* VAR */ int x45220 = 0;
              if(x45219) {
                int x45222 = strcmp(x45218, "");
                x45220 = x45222;
              } else {
                
                x45220 = 0;
              };
              int x45226 = x45220;
              ite38647 = x45226;
            } else {
              
              ite38647 = 0;
            };
            int x36676 = ite38647;
            if (!(x36676)) break; 
            
            struct CUSTOMERRecord_ORDERSRecord* x6515 = current6511;
            struct CUSTOMERRecord_ORDERSRecord* x7735 = x6515->next;
            struct CUSTOMERRecord_ORDERSRecord* x6517 = current6511;
            int x5907 = x6517->O_ORDERKEY;
            int x5908 = x5907==(x13113);
            if(x5908) {
              int x937 = x6517->O_ORDERDATE;
              int x940 = x6517->O_SHIPPRIORITY;
              double x13154 = x20974[x1982];
              double x13156 = x20975[x1982];
              int x18303 = x44737;
              struct Q3GRPRecord* x18304 = &(x44738[x18303]);
              x18304->L_ORDERKEY = x13113;
              x18304->O_ORDERDATE = x937;
              x18304->O_SHIPPRIORITY = x940;
              int x18308 = x44737;
              int x18309 = x18308+(1);
              x44737 = x18309;
              int x28343 = x18304->L_ORDERKEY;
              int x28345 = x18304->O_ORDERDATE;
              int x28347 = x18304->O_SHIPPRIORITY;
              int x28349 = x28343+(x28345);
              int x28350 = x28349+(x28347);
              int x4581 = x28350&(1048575);
              struct AGGRecord_Q3GRPRecord* x5845 = &(x44693[x4581]);
              int x4583 = x44692;
              int x4584 = x4581>(x4583);
              if(x4584) {
                x44692 = x4581;
              };
              /* VAR */ struct AGGRecord_Q3GRPRecord* current6569 = x5845;
              /* VAR */ int found5855 = 0;
              while(1) {
                
                struct AGGRecord_Q3GRPRecord* x6572 = current6569;
                int x28361 = x6572!=(NULL);
                /* VAR */ int ite38692 = 0;
                if(x28361) {
                  struct Q3GRPRecord* x45267 = x6572->key;
                  int x45268 = x45267!=(NULL);
                  ite38692 = x45268;
                } else {
                  
                  ite38692 = 0;
                };
                int x36712 = ite38692;
                /* VAR */ int ite38701 = 0;
                if(x36712) {
                  int x45275 = found5855;
                  int x45276 = !(x45275);
                  ite38701 = x45276;
                } else {
                  
                  ite38701 = 0;
                };
                int x36714 = ite38701;
                if (!(x36714)) break; 
                
                struct AGGRecord_Q3GRPRecord* x6577 = current6569;
                struct Q3GRPRecord* x5863 = x6577->key;
                int x28370 = x5863->L_ORDERKEY;
                int x28371 = x28370==(x28343);
                int x28372 = x5863->O_ORDERDATE;
                int x28373 = x28372==(x28345);
                int x28374 = x5863->O_SHIPPRIORITY;
                int x28375 = x28374==(x28347);
                /* VAR */ int ite38718 = 0;
                if(x28371) {
                  ite38718 = x28373;
                } else {
                  
                  ite38718 = 0;
                };
                int x36724 = ite38718;
                /* VAR */ int ite38725 = 0;
                if(x36724) {
                  ite38725 = x28375;
                } else {
                  
                  ite38725 = 0;
                };
                int x36726 = ite38725;
                if(x36726) {
                  found5855 = 1;
                } else {
                  
                  struct AGGRecord_Q3GRPRecord* x6583 = current6569;
                  struct AGGRecord_Q3GRPRecord* x7801 = x6583->next;
                  current6569 = x7801;
                };
              };
              int x5871 = found5855;
              int x5872 = !(x5871);
              /* VAR */ struct AGGRecord_Q3GRPRecord** ite36735 = 0;
              if(x5872) {
                ite36735 = NULL;
              } else {
                
                struct AGGRecord_Q3GRPRecord* x36737 = current6569;
                ite36735 = x36737;
              };
              struct AGGRecord_Q3GRPRecord** x5878 = ite36735;
              int x10962 = x5878!=(NULL);
              /* VAR */ struct AGGRecord_Q3GRPRecord* ite36743 = 0;
              if(x10962) {
                ite36743 = x5878;
              } else {
                
                int x36745 = x44757;
                double* x36746 = x44758[x36745];
                int x36747 = x44757;
                int x36748 = x36747+(1);
                x44757 = x36748;
                int x36750 = x44769;
                struct AGGRecord_Q3GRPRecord* x36751 = &(x44770[x36750]);
                x36751->key = x18304;
                x36751->aggs = x36746;
                x36751->next = NULL;
                int x36755 = x44769;
                int x36756 = x36755+(1);
                x44769 = x36756;
                int x36758 = x5845==(NULL);
                /* VAR */ int ite38764 = 0;
                if(x36758) {
                  ite38764 = 1;
                } else {
                  
                  struct Q3GRPRecord* x45336 = x5845->key;
                  int x45337 = x45336==(NULL);
                  ite38764 = x45337;
                };
                int x36760 = ite38764;
                if(x36760) {
                  x36751->next = NULL;
                  int x28408 = x36751==(NULL);
                  /* VAR */ int ite38776 = 0;
                  if(x28408) {
                    ite38776 = 1;
                  } else {
                    
                    struct Q3GRPRecord* x45347 = x36751->key;
                    int x45348 = x45347==(NULL);
                    ite38776 = x45348;
                  };
                  int x36765 = ite38776;
                  if(x36765) {
                    *(x44693 + x4581) = (const struct AGGRecord_Q3GRPRecord){0};
                  } else {
                    
                    struct AGGRecord_Q3GRPRecord x21804 = *x36751;
                    *(x44693 + x4581) = x21804;
                    struct AGGRecord_Q3GRPRecord* x21806 = &(x44693[x4581]);
                    x36751 = x21806;
                  };
                } else {
                  
                  struct AGGRecord_Q3GRPRecord* x7821 = x5845->next;
                  x36751->next = x7821;
                  x5845->next = x36751;
                };
                ite36743 = x36751;
              };
              struct AGGRecord_Q3GRPRecord* x4596 = ite36743;
              double* x381 = x4596->aggs;
              double x395 = x381[0];
              double x398 = 1.0-(x13156);
              double x399 = x13154*(x398);
              double x400 = x395+(x399);
              *x381 = x400;
            };
            current6511 = x7735;
          };
        };
      };
      int x2133 = x44809;
      int x412 = x2133+(1);
      x44809 = x412;
    };
    int x45374 = x44692;
    int x45375 = x45374+(1);
    int x33654 = 0;
    for(; x33654 < x45375 ; x33654 += 1) {
      
      struct AGGRecord_Q3GRPRecord* x33655 = &(x44693[x33654]);
      /* VAR */ struct AGGRecord_Q3GRPRecord* x33656 = x33655;
      while(1) {
        
        struct AGGRecord_Q3GRPRecord* x6633 = x33656;
        int x28440 = x6633!=(NULL);
        /* VAR */ int ite38836 = 0;
        if(x28440) {
          struct Q3GRPRecord* x45404 = x6633->key;
          int x45405 = x45404!=(NULL);
          ite38836 = x45405;
        } else {
          
          ite38836 = 0;
        };
        int x36811 = ite38836;
        if (!(x36811)) break; 
        
        struct AGGRecord_Q3GRPRecord* x6635 = x33656;
        struct AGGRecord_Q3GRPRecord* x7853 = x6635->next;
        struct AGGRecord_Q3GRPRecord* x6637 = x33656;
        g_tree_insert(x44889, x6637, x6637);
        x33656 = x7853;
      };
    };
    while(1) {
      
      int x2142 = x44890;
      int x423 = !(x2142);
      /* VAR */ int ite38853 = 0;
      if(x423) {
        int x45420 = g_tree_nnodes(x44889);
        int x45421 = x45420!=(0);
        ite38853 = x45421;
      } else {
        
        ite38853 = 0;
      };
      int x36821 = ite38853;
      if (!(x36821)) break; 
      
      void* x24609 = NULL;
      void** x24617 = &(x24609);
      g_tree_foreach(x44889, x24616, x24617);
      struct AGGRecord_Q3GRPRecord* x24619 = (struct AGGRecord_Q3GRPRecord*){x24609};
      int x24620 = g_tree_remove(x44889, x24619);
      int x2150 = x44891;
      int x433 = x2150>=(10);
      if(x433) {
        x44890 = 1;
      } else {
        
        struct Q3GRPRecord* x435 = x24619->key;
        int x436 = x435->L_ORDERKEY;
        double* x437 = x24619->aggs;
        double x438 = x437[0];
        int x439 = x435->O_ORDERDATE;
        char* x440 = ltoa(x439);
        int x441 = x435->O_SHIPPRIORITY;
        printf("%d|%.4f|%s|%d\n", x436, x438, x440, x441);
        int x2162 = x44891;
        int x444 = x2162+(1);
        x44891 = x444;
      };
    };
    int x45453 = x44891;
    printf("(%d rows)\n", x45453);
    struct timeval* x45455 = &x44804;
    gettimeofday(x45455, NULL);
    struct timeval* x45457 = &x44800;
    struct timeval* x45458 = &x44804;
    struct timeval* x45459 = &x44802;
    long x45460 = timeval_subtract(x45457, x45458, x45459);
    printf("Generated code run in %ld milliseconds.\n", x45460);
  };
}
/* ----------- FUNCTIONS ----------- */
int x44849(struct AGGRecord_Q3GRPRecord* x219, struct AGGRecord_Q3GRPRecord* x220) {
  double* x221 = x219->aggs;
  double x222 = x221[0];
  double* x223 = x220->aggs;
  double x224 = x223[0];
  int x225 = x222<(x224);
  /* VAR */ int ite36471 = 0;
  if(x225) {
    ite36471 = 1;
  } else {
    
    int x36473 = x222>(x224);
    /* VAR */ int ite36475 = 0;
    if(x36473) {
      ite36475 = -1;
    } else {
      
      struct Q3GRPRecord* x36477 = x219->key;
      int x36478 = x36477->O_ORDERDATE;
      struct Q3GRPRecord* x36479 = x220->key;
      int x36480 = x36479->O_ORDERDATE;
      int x36481 = x36478<(x36480);
      /* VAR */ int ite36483 = 0;
      if(x36481) {
        ite36483 = -1;
      } else {
        
        int x36485 = x36478>(x36480);
        /* VAR */ int ite36487 = 0;
        if(x36485) {
          ite36487 = 1;
        } else {
          
          ite36487 = 0;
        };
        int x36486 = ite36487;
        ite36483 = x36486;
      };
      int x36482 = ite36483;
      ite36475 = x36482;
    };
    int x36474 = ite36475;
    ite36471 = x36474;
  };
  int x236 = ite36471;
  return x236; 
}

int x24616(void* x24610, void* x24611, void* x24612) {
  struct AGGRecord_Q3GRPRecord** x24613 = (struct AGGRecord_Q3GRPRecord**){x24612};
  struct AGGRecord_Q3GRPRecord* x24614 = (struct AGGRecord_Q3GRPRecord*){x24611};
  pointer_assign(x24613, x24614);
  return 1; 
}
