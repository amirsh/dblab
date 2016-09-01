#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct Q18GRPRecord;
  struct AGGRecord_Q18GRPRecord;
  
  struct Q18GRPRecord {
  char* C_NAME;
  int C_CUSTKEY;
  int O_ORDERKEY;
  int O_ORDERDATE;
  double O_TOTALPRICE;
  };
  
  struct AGGRecord_Q18GRPRecord {
  struct Q18GRPRecord* key;
  double aggs;
  };
  
  


int x28203(struct Q18GRPRecord* x14125);

int x28231(struct Q18GRPRecord* x14130, struct Q18GRPRecord* x14131);

int x28390(struct AGGRecord_Q18GRPRecord* x223, struct AGGRecord_Q18GRPRecord* x224);

int x14354(void* x14348, void* x14349, void* x14350);
/* GLOBAL VARS */

struct timeval x9883;
int main(int argc, char** argv) {
  FILE* x10347 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x10348 = 0;
  int x10349 = x10348;
  int* x10350 = &x10349;
  int x10351 = fscanf(x10347, "%d", x10350);
  pclose(x10347);
  int* x11681 = (int*)malloc(x10349 * sizeof(int));
  memset(x11681, 0, x10349 * sizeof(int));
  double* x11682 = (double*)malloc(x10349 * sizeof(double));
  memset(x11682, 0, x10349 * sizeof(double));
  int x10356 = O_RDONLY;
  int x10357 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x10356);
  struct stat x10358 = (struct stat){0};
  /* VAR */ struct stat x10359 = x10358;
  struct stat x10360 = x10359;
  struct stat* x10361 = &x10360;
  int x10362 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x10361);
  int x10364 = PROT_READ;
  int x10365 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x10361->st_size), x10364, x10365, x10357, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite24723 = 0;
    if((x5<(x10349))) {
      char x27330 = *x3;
      ite24723 = (x27330!=('\0'));
    } else {
      
      ite24723 = 0;
    };
    int x23576 = ite24723;
    if (!(x23576)) break; 
    
    /* VAR */ int x10373 = 0;
    int x10374 = x10373;
    int* x10375 = &x10374;
    char* x10376 = strntoi_unchecked(x3, x10375);
    x3 = x10376;
    /* VAR */ int x10378 = 0;
    int x10379 = x10378;
    int* x10380 = &x10379;
    char* x10381 = strntoi_unchecked(x3, x10380);
    x3 = x10381;
    /* VAR */ int x10383 = 0;
    int x10384 = x10383;
    int* x10385 = &x10384;
    char* x10386 = strntoi_unchecked(x3, x10385);
    x3 = x10386;
    /* VAR */ int x10388 = 0;
    int x10389 = x10388;
    int* x10390 = &x10389;
    char* x10391 = strntoi_unchecked(x3, x10390);
    x3 = x10391;
    /* VAR */ double x10393 = 0.0;
    double x10394 = x10393;
    double* x10395 = &x10394;
    char* x10396 = strntod_unchecked(x3, x10395);
    x3 = x10396;
    /* VAR */ double x10398 = 0.0;
    double x10399 = x10398;
    double* x10400 = &x10399;
    char* x10401 = strntod_unchecked(x3, x10400);
    x3 = x10401;
    /* VAR */ double x10403 = 0.0;
    double x10404 = x10403;
    double* x10405 = &x10404;
    char* x10406 = strntod_unchecked(x3, x10405);
    x3 = x10406;
    /* VAR */ double x10408 = 0.0;
    double x10409 = x10408;
    double* x10410 = &x10409;
    char* x10411 = strntod_unchecked(x3, x10410);
    x3 = x10411;
    char x10413 = *x3;
    /* VAR */ char x10414 = x10413;
    x3 += 1;
    x3 += 1;
    char x10418 = *x3;
    /* VAR */ char x10419 = x10418;
    x3 += 1;
    x3 += 1;
    /* VAR */ int x10423 = 0;
    int x10424 = x10423;
    int* x10425 = &x10424;
    char* x10426 = strntoi_unchecked(x3, x10425);
    x3 = x10426;
    /* VAR */ int x10428 = 0;
    int x10429 = x10428;
    int* x10430 = &x10429;
    char* x10431 = strntoi_unchecked(x3, x10430);
    x3 = x10431;
    /* VAR */ int x10433 = 0;
    int x10434 = x10433;
    int* x10435 = &x10434;
    char* x10436 = strntoi_unchecked(x3, x10435);
    x3 = x10436;
    /* VAR */ int x10442 = 0;
    int x10443 = x10442;
    int* x10444 = &x10443;
    char* x10445 = strntoi_unchecked(x3, x10444);
    x3 = x10445;
    /* VAR */ int x10447 = 0;
    int x10448 = x10447;
    int* x10449 = &x10448;
    char* x10450 = strntoi_unchecked(x3, x10449);
    x3 = x10450;
    /* VAR */ int x10452 = 0;
    int x10453 = x10452;
    int* x10454 = &x10453;
    char* x10455 = strntoi_unchecked(x3, x10454);
    x3 = x10455;
    /* VAR */ int x10461 = 0;
    int x10462 = x10461;
    int* x10463 = &x10462;
    char* x10464 = strntoi_unchecked(x3, x10463);
    x3 = x10464;
    /* VAR */ int x10466 = 0;
    int x10467 = x10466;
    int* x10468 = &x10467;
    char* x10469 = strntoi_unchecked(x3, x10468);
    x3 = x10469;
    /* VAR */ int x10471 = 0;
    int x10472 = x10471;
    int* x10473 = &x10472;
    char* x10474 = strntoi_unchecked(x3, x10473);
    x3 = x10474;
    char* x11808 = (char*)malloc(26 * sizeof(char));
    memset(x11808, 0, 26 * sizeof(char));
    /* VAR */ char* x10481 = x3;
    while(1) {
      
      char x10482 = *x3;
      /* VAR */ int ite24844 = 0;
      if((x10482!=('|'))) {
        char x27450 = *x3;
        ite24844 = (x27450!=('\n'));
      } else {
        
        ite24844 = 0;
      };
      int x23690 = ite24844;
      if (!(x23690)) break; 
      
      x3 += 1;
    };
    char* x10489 = x10481;
    int x10490 = x3 - x10489;
    char* x10491 = x10481;
    char* x10492 = strncpy(x11808, x10491, x10490);
    x3 += 1;
    char* x11826 = (char*)malloc(11 * sizeof(char));
    memset(x11826, 0, 11 * sizeof(char));
    /* VAR */ char* x10500 = x3;
    while(1) {
      
      char x10501 = *x3;
      /* VAR */ int ite24867 = 0;
      if((x10501!=('|'))) {
        char x27472 = *x3;
        ite24867 = (x27472!=('\n'));
      } else {
        
        ite24867 = 0;
      };
      int x23706 = ite24867;
      if (!(x23706)) break; 
      
      x3 += 1;
    };
    char* x10508 = x10500;
    int x10509 = x3 - x10508;
    char* x10510 = x10500;
    char* x10511 = strncpy(x11826, x10510, x10509);
    x3 += 1;
    char* x11844 = (char*)malloc(45 * sizeof(char));
    memset(x11844, 0, 45 * sizeof(char));
    /* VAR */ char* x10519 = x3;
    while(1) {
      
      char x10520 = *x3;
      /* VAR */ int ite24890 = 0;
      if((x10520!=('|'))) {
        char x27494 = *x3;
        ite24890 = (x27494!=('\n'));
      } else {
        
        ite24890 = 0;
      };
      int x23722 = ite24890;
      if (!(x23722)) break; 
      
      x3 += 1;
    };
    char* x10527 = x10519;
    int x10528 = x3 - x10527;
    char* x10529 = x10519;
    char* x10530 = strncpy(x11844, x10529, x10528);
    x3 += 1;
    int x47 = x4;
    *(x11681 + x47) = x10374;
    *(x11682 + x47) = x10394;
    int x49 = x4;
    x4 = (x49+(1));
  };
  FILE* x10543 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x10544 = 0;
  int x10545 = x10544;
  int* x10546 = &x10545;
  int x10547 = fscanf(x10543, "%d", x10546);
  pclose(x10543);
  int* x11874 = (int*)malloc(x10545 * sizeof(int));
  memset(x11874, 0, x10545 * sizeof(int));
  int* x11875 = (int*)malloc(x10545 * sizeof(int));
  memset(x11875, 0, x10545 * sizeof(int));
  double* x11876 = (double*)malloc(x10545 * sizeof(double));
  memset(x11876, 0, x10545 * sizeof(double));
  int* x11877 = (int*)malloc(x10545 * sizeof(int));
  memset(x11877, 0, x10545 * sizeof(int));
  int x10554 = O_RDONLY;
  int x10555 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x10554);
  /* VAR */ struct stat x10556 = x10358;
  struct stat x10557 = x10556;
  struct stat* x10558 = &x10557;
  int x10559 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x10558);
  int x10561 = PROT_READ;
  int x10562 = MAP_PRIVATE;
  char* x55 = mmap(NULL, (x10558->st_size), x10561, x10562, x10555, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    /* VAR */ int ite24938 = 0;
    if((x57<(x10545))) {
      char x27541 = *x55;
      ite24938 = (x27541!=('\0'));
    } else {
      
      ite24938 = 0;
    };
    int x23763 = ite24938;
    if (!(x23763)) break; 
    
    /* VAR */ int x10570 = 0;
    int x10571 = x10570;
    int* x10572 = &x10571;
    char* x10573 = strntoi_unchecked(x55, x10572);
    x55 = x10573;
    /* VAR */ int x10575 = 0;
    int x10576 = x10575;
    int* x10577 = &x10576;
    char* x10578 = strntoi_unchecked(x55, x10577);
    x55 = x10578;
    char x10580 = *x55;
    /* VAR */ char x10581 = x10580;
    x55 += 1;
    x55 += 1;
    /* VAR */ double x10585 = 0.0;
    double x10586 = x10585;
    double* x10587 = &x10586;
    char* x10588 = strntod_unchecked(x55, x10587);
    x55 = x10588;
    /* VAR */ int x10590 = 0;
    int x10591 = x10590;
    int* x10592 = &x10591;
    char* x10593 = strntoi_unchecked(x55, x10592);
    x55 = x10593;
    /* VAR */ int x10595 = 0;
    int x10596 = x10595;
    int* x10597 = &x10596;
    char* x10598 = strntoi_unchecked(x55, x10597);
    x55 = x10598;
    /* VAR */ int x10600 = 0;
    int x10601 = x10600;
    int* x10602 = &x10601;
    char* x10603 = strntoi_unchecked(x55, x10602);
    x55 = x10603;
    char* x11934 = (char*)malloc(16 * sizeof(char));
    memset(x11934, 0, 16 * sizeof(char));
    /* VAR */ char* x10610 = x55;
    while(1) {
      
      char x10611 = *x55;
      /* VAR */ int ite24991 = 0;
      if((x10611!=('|'))) {
        char x27593 = *x55;
        ite24991 = (x27593!=('\n'));
      } else {
        
        ite24991 = 0;
      };
      int x23809 = ite24991;
      if (!(x23809)) break; 
      
      x55 += 1;
    };
    char* x10618 = x10610;
    int x10619 = x55 - x10618;
    char* x10620 = x10610;
    char* x10621 = strncpy(x11934, x10620, x10619);
    x55 += 1;
    char* x11952 = (char*)malloc(16 * sizeof(char));
    memset(x11952, 0, 16 * sizeof(char));
    /* VAR */ char* x10629 = x55;
    while(1) {
      
      char x10630 = *x55;
      /* VAR */ int ite25014 = 0;
      if((x10630!=('|'))) {
        char x27615 = *x55;
        ite25014 = (x27615!=('\n'));
      } else {
        
        ite25014 = 0;
      };
      int x23825 = ite25014;
      if (!(x23825)) break; 
      
      x55 += 1;
    };
    char* x10637 = x10629;
    int x10638 = x55 - x10637;
    char* x10639 = x10629;
    char* x10640 = strncpy(x11952, x10639, x10638);
    x55 += 1;
    /* VAR */ int x10647 = 0;
    int x10648 = x10647;
    int* x10649 = &x10648;
    char* x10650 = strntoi_unchecked(x55, x10649);
    x55 = x10650;
    char* x11975 = (char*)malloc(80 * sizeof(char));
    memset(x11975, 0, 80 * sizeof(char));
    /* VAR */ char* x10653 = x55;
    while(1) {
      
      char x10654 = *x55;
      /* VAR */ int ite25042 = 0;
      if((x10654!=('|'))) {
        char x27642 = *x55;
        ite25042 = (x27642!=('\n'));
      } else {
        
        ite25042 = 0;
      };
      int x23846 = ite25042;
      if (!(x23846)) break; 
      
      x55 += 1;
    };
    char* x10661 = x10653;
    int x10662 = x55 - x10661;
    char* x10663 = x10653;
    char* x10664 = strncpy(x11975, x10663, x10662);
    x55 += 1;
    int x91 = x56;
    *(x11874 + x91) = x10571;
    *(x11875 + x91) = x10576;
    *(x11876 + x91) = x10586;
    *(x11877 + x91) = (((x10591*(10000))+((x10596*(100))))+(x10601));
    int x93 = x56;
    x56 = (x93+(1));
  };
  FILE* x10679 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x10680 = 0;
  int x10681 = x10680;
  int* x10682 = &x10681;
  int x10683 = fscanf(x10679, "%d", x10682);
  pclose(x10679);
  int* x12007 = (int*)malloc(x10681 * sizeof(int));
  memset(x12007, 0, x10681 * sizeof(int));
  char** x12008 = (char**)malloc(x10681 * sizeof(char*));
  memset(x12008, 0, x10681 * sizeof(char*));
  int x10688 = O_RDONLY;
  int x10689 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x10688);
  /* VAR */ struct stat x10690 = x10358;
  struct stat x10691 = x10690;
  struct stat* x10692 = &x10691;
  int x10693 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x10692);
  int x10695 = PROT_READ;
  int x10696 = MAP_PRIVATE;
  char* x99 = mmap(NULL, (x10692->st_size), x10695, x10696, x10689, 0);
  /* VAR */ int x100 = 0;
  while(1) {
    
    int x101 = x100;
    /* VAR */ int ite25090 = 0;
    if((x101<(x10681))) {
      char x27689 = *x99;
      ite25090 = (x27689!=('\0'));
    } else {
      
      ite25090 = 0;
    };
    int x23887 = ite25090;
    if (!(x23887)) break; 
    
    /* VAR */ int x10704 = 0;
    int x10705 = x10704;
    int* x10706 = &x10705;
    char* x10707 = strntoi_unchecked(x99, x10706);
    x99 = x10707;
    char* x12031 = (char*)malloc(26 * sizeof(char));
    memset(x12031, 0, 26 * sizeof(char));
    /* VAR */ char* x10710 = x99;
    while(1) {
      
      char x10711 = *x99;
      /* VAR */ int ite25109 = 0;
      if((x10711!=('|'))) {
        char x27707 = *x99;
        ite25109 = (x27707!=('\n'));
      } else {
        
        ite25109 = 0;
      };
      int x23899 = ite25109;
      if (!(x23899)) break; 
      
      x99 += 1;
    };
    char* x10718 = x10710;
    int x10719 = x99 - x10718;
    char* x10720 = x10710;
    char* x10721 = strncpy(x12031, x10720, x10719);
    x99 += 1;
    char* x12049 = (char*)malloc(41 * sizeof(char));
    memset(x12049, 0, 41 * sizeof(char));
    /* VAR */ char* x10729 = x99;
    while(1) {
      
      char x10730 = *x99;
      /* VAR */ int ite25132 = 0;
      if((x10730!=('|'))) {
        char x27729 = *x99;
        ite25132 = (x27729!=('\n'));
      } else {
        
        ite25132 = 0;
      };
      int x23915 = ite25132;
      if (!(x23915)) break; 
      
      x99 += 1;
    };
    char* x10737 = x10729;
    int x10738 = x99 - x10737;
    char* x10739 = x10729;
    char* x10740 = strncpy(x12049, x10739, x10738);
    x99 += 1;
    /* VAR */ int x10747 = 0;
    int x10748 = x10747;
    int* x10749 = &x10748;
    char* x10750 = strntoi_unchecked(x99, x10749);
    x99 = x10750;
    char* x12072 = (char*)malloc(16 * sizeof(char));
    memset(x12072, 0, 16 * sizeof(char));
    /* VAR */ char* x10753 = x99;
    while(1) {
      
      char x10754 = *x99;
      /* VAR */ int ite25160 = 0;
      if((x10754!=('|'))) {
        char x27756 = *x99;
        ite25160 = (x27756!=('\n'));
      } else {
        
        ite25160 = 0;
      };
      int x23936 = ite25160;
      if (!(x23936)) break; 
      
      x99 += 1;
    };
    char* x10761 = x10753;
    int x10762 = x99 - x10761;
    char* x10763 = x10753;
    char* x10764 = strncpy(x12072, x10763, x10762);
    x99 += 1;
    /* VAR */ double x10771 = 0.0;
    double x10772 = x10771;
    double* x10773 = &x10772;
    char* x10774 = strntod_unchecked(x99, x10773);
    x99 = x10774;
    char* x12095 = (char*)malloc(11 * sizeof(char));
    memset(x12095, 0, 11 * sizeof(char));
    /* VAR */ char* x10777 = x99;
    while(1) {
      
      char x10778 = *x99;
      /* VAR */ int ite25188 = 0;
      if((x10778!=('|'))) {
        char x27783 = *x99;
        ite25188 = (x27783!=('\n'));
      } else {
        
        ite25188 = 0;
      };
      int x23957 = ite25188;
      if (!(x23957)) break; 
      
      x99 += 1;
    };
    char* x10785 = x10777;
    int x10786 = x99 - x10785;
    char* x10787 = x10777;
    char* x10788 = strncpy(x12095, x10787, x10786);
    x99 += 1;
    char* x12113 = (char*)malloc(118 * sizeof(char));
    memset(x12113, 0, 118 * sizeof(char));
    /* VAR */ char* x10796 = x99;
    while(1) {
      
      char x10797 = *x99;
      /* VAR */ int ite25211 = 0;
      if((x10797!=('|'))) {
        char x27805 = *x99;
        ite25211 = (x27805!=('\n'));
      } else {
        
        ite25211 = 0;
      };
      int x23973 = ite25211;
      if (!(x23973)) break; 
      
      x99 += 1;
    };
    char* x10804 = x10796;
    int x10805 = x99 - x10804;
    char* x10806 = x10796;
    char* x10807 = strncpy(x12113, x10806, x10805);
    x99 += 1;
    int x149 = x100;
    *(x12007 + x149) = x10705;
    *(x12008 + x149) = x12031;
    int x151 = x100;
    x100 = (x151+(1));
  };
  int x156 = 0;
  for(; x156 < 1 ; x156 += 1) {
    
    GHashTable* x28274 = g_hash_table_new(x28203, x28231);
    int* x28275 = (int*)malloc(60000000 * sizeof(int));
    memset(x28275, 0, 60000000 * sizeof(int));
    int* x28276 = (int*)malloc(60000000 * sizeof(int));
    memset(x28276, 0, 60000000 * sizeof(int));
    double* x28277 = (double*)malloc(60000000 * sizeof(double));
    memset(x28277, 0, 60000000 * sizeof(double));
    int* x28278 = (int*)malloc(60000000 * sizeof(int));
    memset(x28278, 0, 60000000 * sizeof(int));
    int x22238 = 0;
    for(; x22238 < x10545 ; x22238 += 1) {
      
      int x22239 = x11874[x22238];
      int x22240 = x22239%(60000000);
      int x22241 = x11874[x22238];
      *(x28275 + x22240) = x22241;
      int x22243 = x11875[x22238];
      *(x28276 + x22240) = x22243;
      double x22245 = x11876[x22238];
      *(x28277 + x22240) = x22245;
      int x22247 = x11877[x22238];
      *(x28278 + x22240) = x22247;
    };
    /* VAR */ int x28302 = 0;
    double* x28303 = (double*)malloc(49000000 * sizeof(double));
    memset(x28303, 0, 49000000 * sizeof(double));
    int x22255 = 0;
    for(; x22255 < 49000000 ; x22255 += 1) {
      
      *(x28303 + x22255) = 0;
    };
    /* VAR */ int x28309 = 0;
    struct Q18GRPRecord* x28310 = (struct Q18GRPRecord*)malloc(60000000 * sizeof(struct Q18GRPRecord));
    memset(x28310, 0, 60000000 * sizeof(struct Q18GRPRecord));
    /* VAR */ int x28311 = 0;
    while(1) {
      
      int x9739 = x28311;
      if (!((x9739<(60000000)))) break; 
      
      int x9741 = x28311;
      struct Q18GRPRecord* x12832 = (struct Q18GRPRecord*)malloc(1 * sizeof(struct Q18GRPRecord));
      memset(x12832, 0, 1 * sizeof(struct Q18GRPRecord));
      x12832->C_NAME = ""; x12832->C_CUSTKEY = 0; x12832->O_ORDERKEY = 0; x12832->O_ORDERDATE = 0; x12832->O_TOTALPRICE = 0.0;
      struct Q18GRPRecord x12174 = *x12832;
      *(x28310 + x9741) = x12174;
      struct Q18GRPRecord* x12176 = &(x28310[x9741]);
      x12832 = x12176;
      int x9744 = x28311;
      x28311 = (x9744+(1));
    };
    /* VAR */ int x28326 = 0;
    struct AGGRecord_Q18GRPRecord* x28327 = (struct AGGRecord_Q18GRPRecord*)malloc(60000000 * sizeof(struct AGGRecord_Q18GRPRecord));
    memset(x28327, 0, 60000000 * sizeof(struct AGGRecord_Q18GRPRecord));
    /* VAR */ int x28328 = 0;
    while(1) {
      
      int x9751 = x28328;
      if (!((x9751<(60000000)))) break; 
      
      int x9753 = x28328;
      struct Q18GRPRecord* x9754 = &(x28310[x9753]);
      struct AGGRecord_Q18GRPRecord* x12850 = (struct AGGRecord_Q18GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q18GRPRecord));
      memset(x12850, 0, 1 * sizeof(struct AGGRecord_Q18GRPRecord));
      x12850->key = x9754; x12850->aggs = 0.0;
      struct AGGRecord_Q18GRPRecord x12190 = *x12850;
      *(x28327 + x9753) = x12190;
      struct AGGRecord_Q18GRPRecord* x12192 = &(x28327[x9753]);
      x12850 = x12192;
      int x9757 = x28328;
      x28328 = (x9757+(1));
    };
    /* VAR */ struct timeval x28344 = x9883;
    struct timeval x28345 = x28344;
    /* VAR */ struct timeval x28346 = x9883;
    struct timeval x28347 = x28346;
    /* VAR */ struct timeval x28348 = x9883;
    struct timeval x28349 = x28348;
    struct timeval* x28350 = &x28347;
    gettimeofday(x28350, NULL);
    /* VAR */ int x28352 = 0;
    int* x28427 = &(x28390);
    GTree* x28428 = g_tree_new(x28427);
    /* VAR */ int x28429 = 0;
    /* VAR */ int x28430 = 0;
    while(1) {
      
      int x28432 = x28352;
      if (!((x28432<(x10349)))) break; 
      
      int x1884 = x28352;
      int x6479 = x11681[x1884];
      double x4834 = x28303[x6479];
      int x4835 = x28302;
      if((x6479>(x4835))) {
        x28302 = x6479;
      };
      double x6486 = x11682[x1884];
      *(x28303 + x6479) = (x4834+(x6486));
      int x1913 = x28352;
      x28352 = (x1913+(1));
    };
    /* VAR */ int x28447 = 0;
    while(1) {
      
      int x4853 = x28447;
      int x4854 = x28302;
      if (!((x4853<((x4854+(1)))))) break; 
      
      int x4857 = x28447;
      double x4858 = x28303[x4857];
      if((x4858>(300.0))) {
        int x6506 = x28275[x4857];
        if((x6506==(x4857))) {
          int x6511 = x28276[x4857];
          double x6513 = x28277[x4857];
          int x6515 = x28278[x4857];
          /* VAR */ double x3925 = x4858;
          int x5252 = x6511-(1);
          int x6522 = x12007[x5252];
          if((x6511==(x6522))) {
            char* x6527 = x12008[x5252];
            double x5598 = x3925;
            /* VAR */ double x3957 = x5598;
            int x9826 = x28309;
            struct Q18GRPRecord* x9827 = &(x28310[x9826]);
            x9827->C_NAME = x6527;
            x9827->C_CUSTKEY = x6522;
            x9827->O_ORDERKEY = x6506;
            x9827->O_ORDERDATE = x6515;
            x9827->O_TOTALPRICE = x6513;
            int x9833 = x28309;
            x28309 = (x9833+(1));
            void* x15019 = g_hash_table_lookup(x28274, x9827);
            /* VAR */ struct AGGRecord_Q18GRPRecord* ite24612 = 0;
            if((x15019==(NULL))) {
              int x24613 = x28326;
              struct AGGRecord_Q18GRPRecord* x24614 = &(x28327[x24613]);
              x24614->key = x9827;
              x24614->aggs = 0;
              int x24617 = x28326;
              x28326 = (x24617+(1));
              g_hash_table_insert(x28274, x9827, x24614);
              ite24612 = x24614;
            } else {
              
              ite24612 = x15019;
            };
            struct AGGRecord_Q18GRPRecord* x14313 = ite24612;
            double x3655 = x14313->aggs;
            double x5609 = x3957;
            x14313->aggs = (x3655+(x5609));
          };
        };
      };
      x28447 = (x4857+(1));
    };
    GList* x28507 = g_hash_table_get_keys(x28274);
    /* VAR */ GList* x28508 = x28507;
    int x28509 = g_hash_table_size(x28274);
    int x22427 = 0;
    for(; x22427 < x28509 ; x22427 += 1) {
      
      GList* x22428 = x28508;
      void* x22429 = g_list_nth_data(x22428, 0);
      GList* x22430 = g_list_next(x22428);
      x28508 = x22430;
      void* x22432 = g_hash_table_lookup(x28274, x22429);
      struct AGGRecord_Q18GRPRecord* x22434 = (struct AGGRecord_Q18GRPRecord*){x22432};
      g_tree_insert(x28428, x22434, x22434);
    };
    while(1) {
      
      int x2092 = x28429;
      int x462 = !(x2092);
      /* VAR */ int ite25957 = 0;
      if(x462) {
        int x28534 = g_tree_nnodes(x28428);
        ite25957 = (x28534!=(0));
      } else {
        
        ite25957 = 0;
      };
      int x24661 = ite25957;
      if (!(x24661)) break; 
      
      void* x14347 = NULL;
      void** x14355 = &(x14347);
      g_tree_foreach(x28428, x14354, x14355);
      struct AGGRecord_Q18GRPRecord* x14357 = (struct AGGRecord_Q18GRPRecord*){x14347};
      int x14358 = g_tree_remove(x28428, x14357);
      int x2100 = x28430;
      if((x2100>=(100))) {
        x28429 = 1;
      } else {
        
        struct Q18GRPRecord* x475 = x14357->key;
        char* x481 = ltoa((x475->O_ORDERDATE));
        double x3690 = x14357->aggs;
        printf("%s|%d|%d|%s|%.2f|%.2f\n", (x475->C_NAME), (x475->C_CUSTKEY), (x475->O_ORDERKEY), x481, (x475->O_TOTALPRICE), x3690);
        int x2115 = x28430;
        x28430 = (x2115+(1));
      };
    };
    int x28568 = x28430;
    printf("(%d rows)\n", x28568);
    struct timeval* x28570 = &x28349;
    gettimeofday(x28570, NULL);
    struct timeval* x28572 = &x28345;
    struct timeval* x28573 = &x28349;
    struct timeval* x28574 = &x28347;
    long x28575 = timeval_subtract(x28572, x28573, x28574);
    printf("Generated code run in %ld milliseconds.\n", x28575);
  };
}
/* ----------- FUNCTIONS ----------- */
int x28203(struct Q18GRPRecord* x14125) {
  char* x18427 = x14125->C_NAME;
  int x20678 = strlen(x18427);
  /* VAR */ int x19174 = 0;
  /* VAR */ int x19175 = 0;
  while(1) {
    
    int x19176 = x19174;
    if (!((x19176<(x20678)))) break; 
    
    int x19178 = x19175;
    int x19179 = x19174;
    char* x20686 = pointer_add(x18427, x19179);
    char x20687 = *(x20686);
    x19175 = (x19178+(x20687));
    int x19184 = x19174;
    x19174 = (x19184+(1));
  };
  int x19188 = x19175;
  return ((((x19188+((x14125->C_CUSTKEY)))+((x14125->O_ORDERKEY)))+((x14125->O_ORDERDATE)))+(((int){(x14125->O_TOTALPRICE)}))); 
}

int x28231(struct Q18GRPRecord* x14130, struct Q18GRPRecord* x14131) {
  int x19203 = strcmp((x14130->C_NAME), (x14131->C_NAME));
  int x19204 = !(x19203);
  /* VAR */ int ite25668 = 0;
  if(x19204) {
    ite25668 = ((x14130->C_CUSTKEY)==((x14131->C_CUSTKEY)));
  } else {
    
    ite25668 = 0;
  };
  int x24394 = ite25668;
  /* VAR */ int ite25675 = 0;
  if(x24394) {
    ite25675 = ((x14130->O_ORDERKEY)==((x14131->O_ORDERKEY)));
  } else {
    
    ite25675 = 0;
  };
  int x24396 = ite25675;
  /* VAR */ int ite25682 = 0;
  if(x24396) {
    ite25682 = ((x14130->O_ORDERDATE)==((x14131->O_ORDERDATE)));
  } else {
    
    ite25682 = 0;
  };
  int x24398 = ite25682;
  /* VAR */ int ite25689 = 0;
  if(x24398) {
    ite25689 = ((x14130->O_TOTALPRICE)==((x14131->O_TOTALPRICE)));
  } else {
    
    ite25689 = 0;
  };
  int x24400 = ite25689;
  return x24400; 
}

int x28390(struct AGGRecord_Q18GRPRecord* x223, struct AGGRecord_Q18GRPRecord* x224) {
  struct Q18GRPRecord* x225 = x223->key;
  double x226 = x225->O_TOTALPRICE;
  struct Q18GRPRecord* x227 = x224->key;
  double x228 = x227->O_TOTALPRICE;
  /* VAR */ int ite24526 = 0;
  if((x226<(x228))) {
    ite24526 = 1;
  } else {
    
    /* VAR */ int ite24530 = 0;
    if((x226>(x228))) {
      ite24530 = -1;
    } else {
      
      int x24532 = x225->O_ORDERDATE;
      int x24533 = x227->O_ORDERDATE;
      /* VAR */ int ite24536 = 0;
      if((x24532<(x24533))) {
        ite24536 = -1;
      } else {
        
        /* VAR */ int ite24540 = 0;
        if((x24532>(x24533))) {
          ite24540 = 1;
        } else {
          
          ite24540 = 0;
        };
        int x24539 = ite24540;
        ite24536 = x24539;
      };
      int x24535 = ite24536;
      ite24530 = x24535;
    };
    int x24529 = ite24530;
    ite24526 = x24529;
  };
  int x238 = ite24526;
  return x238; 
}

int x14354(void* x14348, void* x14349, void* x14350) {
  pointer_assign(((struct AGGRecord_Q18GRPRecord**){x14350}), ((struct AGGRecord_Q18GRPRecord*){x14349}));
  return 1; 
}
