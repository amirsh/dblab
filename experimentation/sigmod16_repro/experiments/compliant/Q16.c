#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct Q16GRPRecord2;
  struct AGGRecord_Q16GRPRecord2;
  struct Q16GRPRecord1;
  struct PARTRecord;
  struct PARTRecord_PARTSUPPRecord;
  struct SUPPLIERRecord;
  struct AGGRecord_Q16GRPRecord1;
  struct PARTSUPPRecord;
  
  struct Q16GRPRecord2 {
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  };
  
  struct AGGRecord_Q16GRPRecord2 {
  struct Q16GRPRecord2* key;
  double aggs;
  struct AGGRecord_Q16GRPRecord2* next;
  };
  
  struct Q16GRPRecord1 {
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  int PS_SUPPKEY;
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
  struct PARTRecord* next;
  };
  
  struct PARTRecord_PARTSUPPRecord {
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
  struct PARTRecord_PARTSUPPRecord* next;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  };
  
  struct AGGRecord_Q16GRPRecord1 {
  struct Q16GRPRecord1* key;
  double aggs;
  struct AGGRecord_Q16GRPRecord1* next;
  };
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
  };
  
  


int x64602(struct AGGRecord_Q16GRPRecord2* x240, struct AGGRecord_Q16GRPRecord2* x241);

int x24905(void* x24899, void* x24900, void* x24901);
/* GLOBAL VARS */

struct timeval x18284;
int main(int argc, char** argv) {
  FILE* x19348 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x19349 = 0;
  int x19350 = x19349;
  int* x19351 = &x19350;
  int x19352 = fscanf(x19348, "%d", x19351);
  pclose(x19348);
  struct SUPPLIERRecord* x21082 = (struct SUPPLIERRecord*)malloc(x19350 * sizeof(struct SUPPLIERRecord));
  memset(x21082, 0, x19350 * sizeof(struct SUPPLIERRecord));
  int x19356 = O_RDONLY;
  int x19357 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x19356);
  struct stat x19358 = (struct stat){0};
  /* VAR */ struct stat x19359 = x19358;
  struct stat x19360 = x19359;
  struct stat* x19361 = &x19360;
  int x19362 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x19361);
  size_t x19363 = x19361->st_size;
  int x19364 = PROT_READ;
  int x19365 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x19363, x19364, x19365, x19357, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x19350);
    /* VAR */ int ite43441 = 0;
    if(x6) {
      char x61825 = *x3;
      int x61826 = x61825!=('\0');
      ite43441 = x61826;
    } else {
      
      ite43441 = 0;
    };
    int x40705 = ite43441;
    if (!(x40705)) break; 
    
    /* VAR */ int x19373 = 0;
    int x19374 = x19373;
    int* x19375 = &x19374;
    char* x19376 = strntoi_unchecked(x3, x19375);
    x3 = x19376;
    char* x21106 = (char*)malloc(26 * sizeof(char));
    memset(x21106, 0, 26 * sizeof(char));
    /* VAR */ char* x19379 = x3;
    while(1) {
      
      char x19380 = *x3;
      int x19381 = x19380!=('|');
      /* VAR */ int ite43460 = 0;
      if(x19381) {
        char x61843 = *x3;
        int x61844 = x61843!=('\n');
        ite43460 = x61844;
      } else {
        
        ite43460 = 0;
      };
      int x40717 = ite43460;
      if (!(x40717)) break; 
      
      x3 += 1;
    };
    char* x19387 = x19379;
    int x19388 = x3 - x19387;
    char* x19389 = x19379;
    char* x19390 = strncpy(x21106, x19389, x19388);
    x3 += 1;
    char* x21124 = (char*)malloc(41 * sizeof(char));
    memset(x21124, 0, 41 * sizeof(char));
    /* VAR */ char* x19398 = x3;
    while(1) {
      
      char x19399 = *x3;
      int x19400 = x19399!=('|');
      /* VAR */ int ite43483 = 0;
      if(x19400) {
        char x61865 = *x3;
        int x61866 = x61865!=('\n');
        ite43483 = x61866;
      } else {
        
        ite43483 = 0;
      };
      int x40733 = ite43483;
      if (!(x40733)) break; 
      
      x3 += 1;
    };
    char* x19406 = x19398;
    int x19407 = x3 - x19406;
    char* x19408 = x19398;
    char* x19409 = strncpy(x21124, x19408, x19407);
    x3 += 1;
    /* VAR */ int x19416 = 0;
    int x19417 = x19416;
    int* x19418 = &x19417;
    char* x19419 = strntoi_unchecked(x3, x19418);
    x3 = x19419;
    char* x21147 = (char*)malloc(16 * sizeof(char));
    memset(x21147, 0, 16 * sizeof(char));
    /* VAR */ char* x19422 = x3;
    while(1) {
      
      char x19423 = *x3;
      int x19424 = x19423!=('|');
      /* VAR */ int ite43511 = 0;
      if(x19424) {
        char x61892 = *x3;
        int x61893 = x61892!=('\n');
        ite43511 = x61893;
      } else {
        
        ite43511 = 0;
      };
      int x40754 = ite43511;
      if (!(x40754)) break; 
      
      x3 += 1;
    };
    char* x19430 = x19422;
    int x19431 = x3 - x19430;
    char* x19432 = x19422;
    char* x19433 = strncpy(x21147, x19432, x19431);
    x3 += 1;
    /* VAR */ double x19440 = 0.0;
    double x19441 = x19440;
    double* x19442 = &x19441;
    char* x19443 = strntod_unchecked(x3, x19442);
    x3 = x19443;
    char* x21170 = (char*)malloc(102 * sizeof(char));
    memset(x21170, 0, 102 * sizeof(char));
    /* VAR */ char* x19446 = x3;
    while(1) {
      
      char x19447 = *x3;
      int x19448 = x19447!=('|');
      /* VAR */ int ite43539 = 0;
      if(x19448) {
        char x61919 = *x3;
        int x61920 = x61919!=('\n');
        ite43539 = x61920;
      } else {
        
        ite43539 = 0;
      };
      int x40775 = ite43539;
      if (!(x40775)) break; 
      
      x3 += 1;
    };
    char* x19454 = x19446;
    int x19455 = x3 - x19454;
    char* x19456 = x19446;
    char* x19457 = strncpy(x21170, x19456, x19455);
    x3 += 1;
    struct SUPPLIERRecord* x22131 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x22131, 0, 1 * sizeof(struct SUPPLIERRecord));
    x22131->S_SUPPKEY = x19374; x22131->S_NAME = x21106; x22131->S_ADDRESS = x21124; x22131->S_NATIONKEY = x19417; x22131->S_PHONE = x21147; x22131->S_ACCTBAL = x19441; x22131->S_COMMENT = x21170;
    int x45 = x4;
    int x28055 = x22131==(NULL);
    /* VAR */ int ite43562 = 0;
    if(x28055) {
      ite43562 = 1;
    } else {
      
      char* x61942 = x22131->S_NAME;
      int x61943 = x61942==(NULL);
      /* VAR */ int x61944 = 0;
      if(x61943) {
        x61944 = 1;
      } else {
        
        int x61947 = strcmp(x61942, "");
        int x61948 = !(x61947);
        x61944 = x61948;
      };
      int x61951 = x61944;
      ite43562 = x61951;
    };
    int x40791 = ite43562;
    if(x40791) {
      *(x21082 + x45) = (const struct SUPPLIERRecord){0};
    } else {
      
      struct SUPPLIERRecord x21192 = *x22131;
      *(x21082 + x45) = x21192;
      struct SUPPLIERRecord* x21194 = &(x21082[x45]);
      x22131 = x21194;
    };
    int x47 = x4;
    int x48 = x47+(1);
    x4 = x48;
  };
  FILE* x19470 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x19471 = 0;
  int x19472 = x19471;
  int* x19473 = &x19472;
  int x19474 = fscanf(x19470, "%d", x19473);
  pclose(x19470);
  struct PARTRecord* x21206 = (struct PARTRecord*)malloc(x19472 * sizeof(struct PARTRecord));
  memset(x21206, 0, x19472 * sizeof(struct PARTRecord));
  int x19478 = O_RDONLY;
  int x19479 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x19478);
  /* VAR */ struct stat x19480 = x19358;
  struct stat x19481 = x19480;
  struct stat* x19482 = &x19481;
  int x19483 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x19482);
  size_t x19484 = x19482->st_size;
  int x19485 = PROT_READ;
  int x19486 = MAP_PRIVATE;
  char* x53 = mmap(NULL, x19484, x19485, x19486, x19479, 0);
  /* VAR */ int x54 = 0;
  while(1) {
    
    int x55 = x54;
    int x56 = x55<(x19472);
    /* VAR */ int ite43603 = 0;
    if(x56) {
      char x61987 = *x53;
      int x61988 = x61987!=('\0');
      ite43603 = x61988;
    } else {
      
      ite43603 = 0;
    };
    int x40823 = ite43603;
    if (!(x40823)) break; 
    
    /* VAR */ int x19494 = 0;
    int x19495 = x19494;
    int* x19496 = &x19495;
    char* x19497 = strntoi_unchecked(x53, x19496);
    x53 = x19497;
    char* x21229 = (char*)malloc(56 * sizeof(char));
    memset(x21229, 0, 56 * sizeof(char));
    /* VAR */ char* x19500 = x53;
    while(1) {
      
      char x19501 = *x53;
      int x19502 = x19501!=('|');
      /* VAR */ int ite43622 = 0;
      if(x19502) {
        char x62005 = *x53;
        int x62006 = x62005!=('\n');
        ite43622 = x62006;
      } else {
        
        ite43622 = 0;
      };
      int x40835 = ite43622;
      if (!(x40835)) break; 
      
      x53 += 1;
    };
    char* x19508 = x19500;
    int x19509 = x53 - x19508;
    char* x19510 = x19500;
    char* x19511 = strncpy(x21229, x19510, x19509);
    x53 += 1;
    char* x21247 = (char*)malloc(26 * sizeof(char));
    memset(x21247, 0, 26 * sizeof(char));
    /* VAR */ char* x19519 = x53;
    while(1) {
      
      char x19520 = *x53;
      int x19521 = x19520!=('|');
      /* VAR */ int ite43645 = 0;
      if(x19521) {
        char x62027 = *x53;
        int x62028 = x62027!=('\n');
        ite43645 = x62028;
      } else {
        
        ite43645 = 0;
      };
      int x40851 = ite43645;
      if (!(x40851)) break; 
      
      x53 += 1;
    };
    char* x19527 = x19519;
    int x19528 = x53 - x19527;
    char* x19529 = x19519;
    char* x19530 = strncpy(x21247, x19529, x19528);
    x53 += 1;
    char* x21265 = (char*)malloc(11 * sizeof(char));
    memset(x21265, 0, 11 * sizeof(char));
    /* VAR */ char* x19538 = x53;
    while(1) {
      
      char x19539 = *x53;
      int x19540 = x19539!=('|');
      /* VAR */ int ite43668 = 0;
      if(x19540) {
        char x62049 = *x53;
        int x62050 = x62049!=('\n');
        ite43668 = x62050;
      } else {
        
        ite43668 = 0;
      };
      int x40867 = ite43668;
      if (!(x40867)) break; 
      
      x53 += 1;
    };
    char* x19546 = x19538;
    int x19547 = x53 - x19546;
    char* x19548 = x19538;
    char* x19549 = strncpy(x21265, x19548, x19547);
    x53 += 1;
    char* x21283 = (char*)malloc(26 * sizeof(char));
    memset(x21283, 0, 26 * sizeof(char));
    /* VAR */ char* x19557 = x53;
    while(1) {
      
      char x19558 = *x53;
      int x19559 = x19558!=('|');
      /* VAR */ int ite43691 = 0;
      if(x19559) {
        char x62071 = *x53;
        int x62072 = x62071!=('\n');
        ite43691 = x62072;
      } else {
        
        ite43691 = 0;
      };
      int x40883 = ite43691;
      if (!(x40883)) break; 
      
      x53 += 1;
    };
    char* x19565 = x19557;
    int x19566 = x53 - x19565;
    char* x19567 = x19557;
    char* x19568 = strncpy(x21283, x19567, x19566);
    x53 += 1;
    /* VAR */ int x19575 = 0;
    int x19576 = x19575;
    int* x19577 = &x19576;
    char* x19578 = strntoi_unchecked(x53, x19577);
    x53 = x19578;
    char* x21306 = (char*)malloc(11 * sizeof(char));
    memset(x21306, 0, 11 * sizeof(char));
    /* VAR */ char* x19581 = x53;
    while(1) {
      
      char x19582 = *x53;
      int x19583 = x19582!=('|');
      /* VAR */ int ite43719 = 0;
      if(x19583) {
        char x62098 = *x53;
        int x62099 = x62098!=('\n');
        ite43719 = x62099;
      } else {
        
        ite43719 = 0;
      };
      int x40904 = ite43719;
      if (!(x40904)) break; 
      
      x53 += 1;
    };
    char* x19589 = x19581;
    int x19590 = x53 - x19589;
    char* x19591 = x19581;
    char* x19592 = strncpy(x21306, x19591, x19590);
    x53 += 1;
    /* VAR */ double x19599 = 0.0;
    double x19600 = x19599;
    double* x19601 = &x19600;
    char* x19602 = strntod_unchecked(x53, x19601);
    x53 = x19602;
    char* x21329 = (char*)malloc(24 * sizeof(char));
    memset(x21329, 0, 24 * sizeof(char));
    /* VAR */ char* x19605 = x53;
    while(1) {
      
      char x19606 = *x53;
      int x19607 = x19606!=('|');
      /* VAR */ int ite43747 = 0;
      if(x19607) {
        char x62125 = *x53;
        int x62126 = x62125!=('\n');
        ite43747 = x62126;
      } else {
        
        ite43747 = 0;
      };
      int x40925 = ite43747;
      if (!(x40925)) break; 
      
      x53 += 1;
    };
    char* x19613 = x19605;
    int x19614 = x53 - x19613;
    char* x19615 = x19605;
    char* x19616 = strncpy(x21329, x19615, x19614);
    x53 += 1;
    struct PARTRecord* x22292 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x22292, 0, 1 * sizeof(struct PARTRecord));
    x22292->P_PARTKEY = x19495; x22292->P_NAME = x21229; x22292->P_MFGR = x21247; x22292->P_BRAND = x21265; x22292->P_TYPE = x21283; x22292->P_SIZE = x19576; x22292->P_CONTAINER = x21306; x22292->P_RETAILPRICE = x19600; x22292->P_COMMENT = x21329; x22292->next = NULL;
    int x109 = x54;
    int x28219 = x22292==(NULL);
    /* VAR */ int ite43770 = 0;
    if(x28219) {
      ite43770 = 1;
    } else {
      
      char* x62148 = x22292->P_NAME;
      int x62149 = x62148==(NULL);
      /* VAR */ int x62150 = 0;
      if(x62149) {
        x62150 = 1;
      } else {
        
        int x62153 = strcmp(x62148, "");
        int x62154 = !(x62153);
        x62150 = x62154;
      };
      int x62157 = x62150;
      ite43770 = x62157;
    };
    int x40941 = ite43770;
    if(x40941) {
      *(x21206 + x109) = (const struct PARTRecord){0};
    } else {
      
      struct PARTRecord x21351 = *x22292;
      *(x21206 + x109) = x21351;
      struct PARTRecord* x21353 = &(x21206[x109]);
      x22292 = x21353;
    };
    int x111 = x54;
    int x112 = x111+(1);
    x54 = x112;
  };
  FILE* x19629 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x19630 = 0;
  int x19631 = x19630;
  int* x19632 = &x19631;
  int x19633 = fscanf(x19629, "%d", x19632);
  pclose(x19629);
  struct PARTSUPPRecord* x21365 = (struct PARTSUPPRecord*)malloc(x19631 * sizeof(struct PARTSUPPRecord));
  memset(x21365, 0, x19631 * sizeof(struct PARTSUPPRecord));
  int x19637 = O_RDONLY;
  int x19638 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x19637);
  /* VAR */ struct stat x19639 = x19358;
  struct stat x19640 = x19639;
  struct stat* x19641 = &x19640;
  int x19642 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x19641);
  size_t x19643 = x19641->st_size;
  int x19644 = PROT_READ;
  int x19645 = MAP_PRIVATE;
  char* x117 = mmap(NULL, x19643, x19644, x19645, x19638, 0);
  /* VAR */ int x118 = 0;
  while(1) {
    
    int x119 = x118;
    int x120 = x119<(x19631);
    /* VAR */ int ite43811 = 0;
    if(x120) {
      char x62193 = *x117;
      int x62194 = x62193!=('\0');
      ite43811 = x62194;
    } else {
      
      ite43811 = 0;
    };
    int x40973 = ite43811;
    if (!(x40973)) break; 
    
    /* VAR */ int x19653 = 0;
    int x19654 = x19653;
    int* x19655 = &x19654;
    char* x19656 = strntoi_unchecked(x117, x19655);
    x117 = x19656;
    /* VAR */ int x19658 = 0;
    int x19659 = x19658;
    int* x19660 = &x19659;
    char* x19661 = strntoi_unchecked(x117, x19660);
    x117 = x19661;
    /* VAR */ int x19663 = 0;
    int x19664 = x19663;
    int* x19665 = &x19664;
    char* x19666 = strntoi_unchecked(x117, x19665);
    x117 = x19666;
    /* VAR */ double x19668 = 0.0;
    double x19669 = x19668;
    double* x19670 = &x19669;
    char* x19671 = strntod_unchecked(x117, x19670);
    x117 = x19671;
    char* x21403 = (char*)malloc(200 * sizeof(char));
    memset(x21403, 0, 200 * sizeof(char));
    /* VAR */ char* x19674 = x117;
    while(1) {
      
      char x19675 = *x117;
      int x19676 = x19675!=('|');
      /* VAR */ int ite43845 = 0;
      if(x19676) {
        char x62226 = *x117;
        int x62227 = x62226!=('\n');
        ite43845 = x62227;
      } else {
        
        ite43845 = 0;
      };
      int x41000 = ite43845;
      if (!(x41000)) break; 
      
      x117 += 1;
    };
    char* x19682 = x19674;
    int x19683 = x117 - x19682;
    char* x19684 = x19674;
    char* x19685 = strncpy(x21403, x19684, x19683);
    x117 += 1;
    struct PARTSUPPRecord* x22368 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x22368, 0, 1 * sizeof(struct PARTSUPPRecord));
    x22368->PS_PARTKEY = x19654; x22368->PS_SUPPKEY = x19659; x22368->PS_AVAILQTY = x19664; x22368->PS_SUPPLYCOST = x19669; x22368->PS_COMMENT = x21403;
    int x136 = x118;
    int x28298 = x22368==(NULL);
    /* VAR */ int ite43868 = 0;
    if(x28298) {
      ite43868 = 1;
    } else {
      
      char* x62249 = x22368->PS_COMMENT;
      int x62250 = x62249==(NULL);
      /* VAR */ int x62251 = 0;
      if(x62250) {
        x62251 = 1;
      } else {
        
        int x62254 = strcmp(x62249, "");
        int x62255 = !(x62254);
        x62251 = x62255;
      };
      int x62258 = x62251;
      ite43868 = x62258;
    };
    int x41016 = ite43868;
    if(x41016) {
      *(x21365 + x136) = (const struct PARTSUPPRecord){0};
    } else {
      
      struct PARTSUPPRecord x21425 = *x22368;
      *(x21365 + x136) = x21425;
      struct PARTSUPPRecord* x21427 = &(x21365[x136]);
      x22368 = x21427;
    };
    int x138 = x118;
    int x139 = x138+(1);
    x118 = x139;
  };
  int x143 = 0;
  for(; x143 < 1 ; x143 += 1) {
    
    /* VAR */ int x64335 = 0;
    struct AGGRecord_Q16GRPRecord2* x64336 = (struct AGGRecord_Q16GRPRecord2*)malloc(1048576 * sizeof(struct AGGRecord_Q16GRPRecord2));
    memset(x64336, 0, 1048576 * sizeof(struct AGGRecord_Q16GRPRecord2));
    int x36302 = 0;
    for(; x36302 < 1048576 ; x36302 += 1) {
      
      *(x64336 + x36302) = (const struct AGGRecord_Q16GRPRecord2){0};
    };
    /* VAR */ int x64342 = 0;
    struct AGGRecord_Q16GRPRecord1* x64343 = (struct AGGRecord_Q16GRPRecord1*)malloc(1048576 * sizeof(struct AGGRecord_Q16GRPRecord1));
    memset(x64343, 0, 1048576 * sizeof(struct AGGRecord_Q16GRPRecord1));
    int x36310 = 0;
    for(; x36310 < 1048576 ; x36310 += 1) {
      
      *(x64343 + x36310) = (const struct AGGRecord_Q16GRPRecord1){0};
    };
    struct PARTRecord_PARTSUPPRecord* x64349 = (struct PARTRecord_PARTSUPPRecord*)malloc(1048576 * sizeof(struct PARTRecord_PARTSUPPRecord));
    memset(x64349, 0, 1048576 * sizeof(struct PARTRecord_PARTSUPPRecord));
    struct PARTRecord* x64350 = (struct PARTRecord*)malloc(1048576 * sizeof(struct PARTRecord));
    memset(x64350, 0, 1048576 * sizeof(struct PARTRecord));
    /* VAR */ int x64351 = 0;
    struct PARTRecord_PARTSUPPRecord* x64352 = (struct PARTRecord_PARTSUPPRecord*)malloc(6400000 * sizeof(struct PARTRecord_PARTSUPPRecord));
    memset(x64352, 0, 6400000 * sizeof(struct PARTRecord_PARTSUPPRecord));
    /* VAR */ int x64353 = 0;
    while(1) {
      
      int x17803 = x64353;
      int x17804 = x17803<(6400000);
      if (!(x17804)) break; 
      
      int x17805 = x64353;
      struct PARTRecord_PARTSUPPRecord* x22408 = (struct PARTRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct PARTRecord_PARTSUPPRecord));
      memset(x22408, 0, 1 * sizeof(struct PARTRecord_PARTSUPPRecord));
      x22408->P_PARTKEY = 0; x22408->P_NAME = ""; x22408->P_MFGR = ""; x22408->P_BRAND = ""; x22408->P_TYPE = ""; x22408->P_SIZE = 0; x22408->P_CONTAINER = ""; x22408->P_RETAILPRICE = 0.0; x22408->P_COMMENT = ""; x22408->PS_PARTKEY = 0; x22408->PS_SUPPKEY = 0; x22408->PS_AVAILQTY = 0; x22408->PS_SUPPLYCOST = 0.0; x22408->PS_COMMENT = ""; x22408->next = NULL;
      int x28340 = x22408==(NULL);
      /* VAR */ int ite45657 = 0;
      if(x28340) {
        ite45657 = 1;
      } else {
        
        char* x64365 = x22408->P_NAME;
        int x64366 = x64365==(NULL);
        /* VAR */ int x64367 = 0;
        if(x64366) {
          x64367 = 1;
        } else {
          
          int x64370 = strcmp(x64365, "");
          int x64371 = !(x64370);
          x64367 = x64371;
        };
        int x64374 = x64367;
        ite45657 = x64374;
      };
      int x42252 = ite45657;
      if(x42252) {
        *(x64352 + x17805) = (const struct PARTRecord_PARTSUPPRecord){0};
      } else {
        
        struct PARTRecord_PARTSUPPRecord x21462 = *x22408;
        *(x64352 + x17805) = x21462;
        struct PARTRecord_PARTSUPPRecord* x21464 = &(x64352[x17805]);
        x22408 = x21464;
      };
      int x17808 = x64353;
      int x17809 = x17808+(1);
      x64353 = x17809;
    };
    /* VAR */ int x64387 = 0;
    struct Q16GRPRecord1* x64388 = (struct Q16GRPRecord1*)malloc(6400000 * sizeof(struct Q16GRPRecord1));
    memset(x64388, 0, 6400000 * sizeof(struct Q16GRPRecord1));
    /* VAR */ int x64389 = 0;
    while(1) {
      
      int x17815 = x64389;
      int x17816 = x17815<(6400000);
      if (!(x17816)) break; 
      
      int x17817 = x64389;
      struct Q16GRPRecord1* x22428 = (struct Q16GRPRecord1*)malloc(1 * sizeof(struct Q16GRPRecord1));
      memset(x22428, 0, 1 * sizeof(struct Q16GRPRecord1));
      x22428->P_BRAND = ""; x22428->P_TYPE = ""; x22428->P_SIZE = 0; x22428->PS_SUPPKEY = 0;
      int x28363 = x22428==(NULL);
      /* VAR */ int ite45688 = 0;
      if(x28363) {
        ite45688 = 1;
      } else {
        
        char* x64401 = x22428->P_BRAND;
        int x64402 = x64401==(NULL);
        /* VAR */ int x64403 = 0;
        if(x64402) {
          x64403 = 1;
        } else {
          
          int x64406 = strcmp(x64401, "");
          int x64407 = !(x64406);
          x64403 = x64407;
        };
        int x64410 = x64403;
        ite45688 = x64410;
      };
      int x42274 = ite45688;
      if(x42274) {
        *(x64388 + x17817) = (const struct Q16GRPRecord1){0};
      } else {
        
        struct Q16GRPRecord1 x21480 = *x22428;
        *(x64388 + x17817) = x21480;
        struct Q16GRPRecord1* x21482 = &(x64388[x17817]);
        x22428 = x21482;
      };
      int x17820 = x64389;
      int x17821 = x17820+(1);
      x64389 = x17821;
    };
    /* VAR */ int x64423 = 0;
    struct AGGRecord_Q16GRPRecord1* x64424 = (struct AGGRecord_Q16GRPRecord1*)malloc(6400000 * sizeof(struct AGGRecord_Q16GRPRecord1));
    memset(x64424, 0, 6400000 * sizeof(struct AGGRecord_Q16GRPRecord1));
    /* VAR */ int x64425 = 0;
    while(1) {
      
      int x17827 = x64425;
      int x17828 = x17827<(6400000);
      if (!(x17828)) break; 
      
      int x17829 = x64425;
      struct Q16GRPRecord1* x17830 = &(x64388[x17829]);
      struct AGGRecord_Q16GRPRecord1* x22449 = (struct AGGRecord_Q16GRPRecord1*)malloc(1 * sizeof(struct AGGRecord_Q16GRPRecord1));
      memset(x22449, 0, 1 * sizeof(struct AGGRecord_Q16GRPRecord1));
      x22449->key = x17830; x22449->aggs = 0.0; x22449->next = NULL;
      int x28387 = x22449==(NULL);
      /* VAR */ int ite45720 = 0;
      if(x28387) {
        ite45720 = 1;
      } else {
        
        struct Q16GRPRecord1* x64438 = x22449->key;
        int x64439 = x64438==(NULL);
        /* VAR */ int x64440 = 0;
        if(x64439) {
          x64440 = 1;
        } else {
          
          char* x64443 = x64438->P_BRAND;
          int x64444 = x64443==(NULL);
          /* VAR */ int x64445 = 0;
          if(x64444) {
            x64445 = 1;
          } else {
            
            int x64448 = strcmp(x64443, "");
            int x64449 = !(x64448);
            x64445 = x64449;
          };
          int x64452 = x64445;
          x64440 = x64452;
        };
        int x64455 = x64440;
        ite45720 = x64455;
      };
      int x42297 = ite45720;
      if(x42297) {
        *(x64424 + x17829) = (const struct AGGRecord_Q16GRPRecord1){0};
      } else {
        
        struct AGGRecord_Q16GRPRecord1 x21499 = *x22449;
        *(x64424 + x17829) = x21499;
        struct AGGRecord_Q16GRPRecord1* x21501 = &(x64424[x17829]);
        x22449 = x21501;
      };
      int x17833 = x64425;
      int x17834 = x17833+(1);
      x64425 = x17834;
    };
    /* VAR */ int x64468 = 0;
    struct Q16GRPRecord2* x64469 = (struct Q16GRPRecord2*)malloc(6400000 * sizeof(struct Q16GRPRecord2));
    memset(x64469, 0, 6400000 * sizeof(struct Q16GRPRecord2));
    /* VAR */ int x64470 = 0;
    while(1) {
      
      int x17840 = x64470;
      int x17841 = x17840<(6400000);
      if (!(x17841)) break; 
      
      int x17842 = x64470;
      struct Q16GRPRecord2* x22469 = (struct Q16GRPRecord2*)malloc(1 * sizeof(struct Q16GRPRecord2));
      memset(x22469, 0, 1 * sizeof(struct Q16GRPRecord2));
      x22469->P_BRAND = ""; x22469->P_TYPE = ""; x22469->P_SIZE = 0;
      int x28410 = x22469==(NULL);
      /* VAR */ int ite45751 = 0;
      if(x28410) {
        ite45751 = 1;
      } else {
        
        char* x64482 = x22469->P_BRAND;
        int x64483 = x64482==(NULL);
        /* VAR */ int x64484 = 0;
        if(x64483) {
          x64484 = 1;
        } else {
          
          int x64487 = strcmp(x64482, "");
          int x64488 = !(x64487);
          x64484 = x64488;
        };
        int x64491 = x64484;
        ite45751 = x64491;
      };
      int x42319 = ite45751;
      if(x42319) {
        *(x64469 + x17842) = (const struct Q16GRPRecord2){0};
      } else {
        
        struct Q16GRPRecord2 x21517 = *x22469;
        *(x64469 + x17842) = x21517;
        struct Q16GRPRecord2* x21519 = &(x64469[x17842]);
        x22469 = x21519;
      };
      int x17845 = x64470;
      int x17846 = x17845+(1);
      x64470 = x17846;
    };
    /* VAR */ int x64504 = 0;
    struct AGGRecord_Q16GRPRecord2* x64505 = (struct AGGRecord_Q16GRPRecord2*)malloc(187500 * sizeof(struct AGGRecord_Q16GRPRecord2));
    memset(x64505, 0, 187500 * sizeof(struct AGGRecord_Q16GRPRecord2));
    /* VAR */ int x64506 = 0;
    while(1) {
      
      int x17852 = x64506;
      int x17853 = x17852<(187500);
      if (!(x17853)) break; 
      
      int x17854 = x64506;
      struct Q16GRPRecord2* x17855 = &(x64469[x17854]);
      struct AGGRecord_Q16GRPRecord2* x22490 = (struct AGGRecord_Q16GRPRecord2*)malloc(1 * sizeof(struct AGGRecord_Q16GRPRecord2));
      memset(x22490, 0, 1 * sizeof(struct AGGRecord_Q16GRPRecord2));
      x22490->key = x17855; x22490->aggs = 0.0; x22490->next = NULL;
      int x28434 = x22490==(NULL);
      /* VAR */ int ite45783 = 0;
      if(x28434) {
        ite45783 = 1;
      } else {
        
        struct Q16GRPRecord2* x64519 = x22490->key;
        int x64520 = x64519==(NULL);
        /* VAR */ int x64521 = 0;
        if(x64520) {
          x64521 = 1;
        } else {
          
          char* x64524 = x64519->P_BRAND;
          int x64525 = x64524==(NULL);
          /* VAR */ int x64526 = 0;
          if(x64525) {
            x64526 = 1;
          } else {
            
            int x64529 = strcmp(x64524, "");
            int x64530 = !(x64529);
            x64526 = x64530;
          };
          int x64533 = x64526;
          x64521 = x64533;
        };
        int x64536 = x64521;
        ite45783 = x64536;
      };
      int x42342 = ite45783;
      if(x42342) {
        *(x64505 + x17854) = (const struct AGGRecord_Q16GRPRecord2){0};
      } else {
        
        struct AGGRecord_Q16GRPRecord2 x21536 = *x22490;
        *(x64505 + x17854) = x21536;
        struct AGGRecord_Q16GRPRecord2* x21538 = &(x64505[x17854]);
        x22490 = x21538;
      };
      int x17858 = x64506;
      int x17859 = x17858+(1);
      x64506 = x17859;
    };
    /* VAR */ struct timeval x64549 = x18284;
    struct timeval x64550 = x64549;
    /* VAR */ struct timeval x64551 = x18284;
    struct timeval x64552 = x64551;
    /* VAR */ struct timeval x64553 = x18284;
    struct timeval x64554 = x64553;
    struct timeval* x64555 = &x64552;
    gettimeofday(x64555, NULL);
    /* VAR */ int x64557 = 0;
    /* VAR */ int x64558 = 0;
    /* VAR */ int x64559 = 0;
    int* x64644 = &(x64602);
    GTree* x64645 = g_tree_new(x64644);
    /* VAR */ int x64646 = 0;
    /* VAR */ int x64647 = 0;
    while(1) {
      
      int x64649 = x64557;
      int x64650 = x64649<(x19472);
      if (!(x64650)) break; 
      
      int x2015 = x64557;
      struct PARTRecord* x293 = &(x21206[x2015]);
      char* x295 = x293->P_BRAND;
      int x33799 = strlen("Brand#21");
      int x33800 = strncmp(x295, "Brand#21", x33799);
      int x33801 = x33800==(0);
      int x297 = !(x33801);
      /* VAR */ int ite45913 = 0;
      if(x297) {
        char* x64660 = x293->P_TYPE;
        int x64661 = strlen("PROMO PLATED");
        int x64662 = strncmp(x64660, "PROMO PLATED", x64661);
        int x64663 = x64662==(0);
        int x64664 = !(x64663);
        ite45913 = x64664;
      } else {
        
        ite45913 = 0;
      };
      int x42461 = ite45913;
      /* VAR */ int ite45925 = 0;
      if(x42461) {
        int x64671 = x293->P_SIZE;
        int x64672 = x64671==(23);
        /* VAR */ int x64673 = 0;
        if(x64672) {
          x64673 = 1;
        } else {
          
          int x64676 = x64671==(3);
          x64673 = x64676;
        };
        int x64679 = x64673;
        /* VAR */ int x64680 = 0;
        if(x64679) {
          x64680 = 1;
        } else {
          
          int x64683 = x64671==(33);
          x64680 = x64683;
        };
        int x64686 = x64680;
        /* VAR */ int x64687 = 0;
        if(x64686) {
          x64687 = 1;
        } else {
          
          int x64690 = x64671==(29);
          x64687 = x64690;
        };
        int x64693 = x64687;
        /* VAR */ int x64694 = 0;
        if(x64693) {
          x64694 = 1;
        } else {
          
          int x64697 = x64671==(40);
          x64694 = x64697;
        };
        int x64700 = x64694;
        /* VAR */ int x64701 = 0;
        if(x64700) {
          x64701 = 1;
        } else {
          
          int x64704 = x64671==(27);
          x64701 = x64704;
        };
        int x64707 = x64701;
        /* VAR */ int x64708 = 0;
        if(x64707) {
          x64708 = 1;
        } else {
          
          int x64711 = x64671==(22);
          x64708 = x64711;
        };
        int x64714 = x64708;
        /* VAR */ int x64715 = 0;
        if(x64714) {
          x64715 = 1;
        } else {
          
          int x64718 = x64671==(4);
          x64715 = x64718;
        };
        int x64721 = x64715;
        ite45925 = x64721;
      } else {
        
        ite45925 = 0;
      };
      int x42463 = ite45925;
      if(x42463) {
        int x319 = x293->P_PARTKEY;
        int x3905 = x319%(1048576);
        struct PARTRecord* x6220 = &(x64350[x3905]);
        /* VAR */ struct PARTRecord* list6221 = x6220;
        struct PARTRecord* x6222 = list6221;
        int x28562 = x6222==(NULL);
        /* VAR */ int ite45955 = 0;
        if(x28562) {
          ite45955 = 1;
        } else {
          
          char* x64736 = x6222->P_NAME;
          int x64737 = x64736==(NULL);
          /* VAR */ int x64738 = 0;
          if(x64737) {
            x64738 = 1;
          } else {
            
            int x64741 = strcmp(x64736, "");
            int x64742 = !(x64741);
            x64738 = x64742;
          };
          int x64745 = x64738;
          ite45955 = x64745;
        };
        int x42472 = ite45955;
        if(x42472) {
          list6221 = NULL;
          struct PARTRecord* x6229 = list6221;
          int x28569 = x6229==(NULL);
          /* VAR */ int ite45970 = 0;
          if(x28569) {
            ite45970 = 1;
          } else {
            
            char* x64756 = x6229->P_NAME;
            int x64757 = x64756==(NULL);
            /* VAR */ int x64758 = 0;
            if(x64757) {
              x64758 = 1;
            } else {
              
              int x64761 = strcmp(x64756, "");
              int x64762 = !(x64761);
              x64758 = x64762;
            };
            int x64765 = x64758;
            ite45970 = x64765;
          };
          int x42478 = ite45970;
          if(x42478) {
            *(x64350 + x3905) = (const struct PARTRecord){0};
          } else {
            
            struct PARTRecord x21634 = *x6229;
            *(x64350 + x3905) = x21634;
            struct PARTRecord* x21636 = &(x64350[x3905]);
            list6221 = x21636;
          };
        };
        int x28579 = x6220==(NULL);
        /* VAR */ int ite45988 = 0;
        if(x28579) {
          ite45988 = 1;
        } else {
          
          char* x64779 = x6220->P_NAME;
          int x64780 = x64779==(NULL);
          /* VAR */ int x64781 = 0;
          if(x64780) {
            x64781 = 1;
          } else {
            
            int x64784 = strcmp(x64779, "");
            int x64785 = !(x64784);
            x64781 = x64785;
          };
          int x64788 = x64781;
          ite45988 = x64788;
        };
        int x42487 = ite45988;
        if(x42487) {
          x293->next = NULL;
          int x28585 = x293==(NULL);
          /* VAR */ int ite46002 = 0;
          if(x28585) {
            ite46002 = 1;
          } else {
            
            char* x64798 = x293->P_NAME;
            int x64799 = x64798==(NULL);
            /* VAR */ int x64800 = 0;
            if(x64799) {
              x64800 = 1;
            } else {
              
              int x64803 = strcmp(x64798, "");
              int x64804 = !(x64803);
              x64800 = x64804;
            };
            int x64807 = x64800;
            ite46002 = x64807;
          };
          int x42492 = ite46002;
          if(x42492) {
            *(x64350 + x3905) = (const struct PARTRecord){0};
          } else {
            
            struct PARTRecord x21644 = *x293;
            *(x64350 + x3905) = x21644;
            struct PARTRecord* x21646 = &(x64350[x3905]);
            x293 = x21646;
          };
          list6221 = x293;
        } else {
          
          struct PARTRecord* x8512 = x6220->next;
          x293->next = x8512;
          x6220->next = x293;
        };
      };
      int x2045 = x64557;
      int x324 = x2045+(1);
      x64557 = x324;
    };
    while(1) {
      
      int x64825 = x64558;
      int x64826 = x64825<(x19631);
      if (!(x64826)) break; 
      
      int x2054 = x64558;
      struct PARTSUPPRecord* x333 = &(x21365[x2054]);
      int x335 = x333->PS_PARTKEY;
      int x3928 = x335%(1048576);
      struct PARTRecord* x6252 = &(x64350[x3928]);
      int x28611 = x6252!=(NULL);
      /* VAR */ int ite46036 = 0;
      if(x28611) {
        char* x64835 = x6252->P_NAME;
        int x64836 = x64835!=(NULL);
        /* VAR */ int x64837 = 0;
        if(x64836) {
          int x64839 = strcmp(x64835, "");
          x64837 = x64839;
        } else {
          
          x64837 = 0;
        };
        int x64843 = x64837;
        ite46036 = x64843;
      } else {
        
        ite46036 = 0;
      };
      int x42515 = ite46036;
      if(x42515) {
        /* VAR */ struct PARTRecord* current7057 = x6252;
        while(1) {
          
          struct PARTRecord* x7059 = current7057;
          int x28619 = x7059!=(NULL);
          /* VAR */ int ite46052 = 0;
          if(x28619) {
            char* x64855 = x7059->P_NAME;
            int x64856 = x64855!=(NULL);
            /* VAR */ int x64857 = 0;
            if(x64856) {
              int x64859 = strcmp(x64855, "");
              x64857 = x64859;
            } else {
              
              x64857 = 0;
            };
            int x64863 = x64857;
            ite46052 = x64863;
          } else {
            
            ite46052 = 0;
          };
          int x42522 = ite46052;
          if (!(x42522)) break; 
          
          struct PARTRecord* x7061 = current7057;
          struct PARTRecord* x8578 = x7061->next;
          struct PARTRecord* x7063 = current7057;
          int x6305 = x7063->P_PARTKEY;
          int x6306 = x6305==(x335);
          if(x6306) {
            char* x932 = x7063->P_NAME;
            char* x933 = x7063->P_MFGR;
            char* x934 = x7063->P_BRAND;
            char* x935 = x7063->P_TYPE;
            int x936 = x7063->P_SIZE;
            char* x937 = x7063->P_CONTAINER;
            double x938 = x7063->P_RETAILPRICE;
            char* x939 = x7063->P_COMMENT;
            int x940 = x333->PS_SUPPKEY;
            int x941 = x333->PS_AVAILQTY;
            double x942 = x333->PS_SUPPLYCOST;
            char* x943 = x333->PS_COMMENT;
            int x17992 = x64351;
            struct PARTRecord_PARTSUPPRecord* x17993 = &(x64352[x17992]);
            x17993->P_PARTKEY = x6305;
            x17993->P_NAME = x932;
            x17993->P_MFGR = x933;
            x17993->P_BRAND = x934;
            x17993->P_TYPE = x935;
            x17993->P_SIZE = x936;
            x17993->P_CONTAINER = x937;
            x17993->P_RETAILPRICE = x938;
            x17993->P_COMMENT = x939;
            x17993->PS_PARTKEY = x335;
            x17993->PS_SUPPKEY = x940;
            x17993->PS_AVAILQTY = x941;
            x17993->PS_SUPPLYCOST = x942;
            x17993->PS_COMMENT = x943;
            x17993->next = NULL;
            int x18009 = x64351;
            int x18010 = x18009+(1);
            x64351 = x18010;
            int x356 = x17993->PS_SUPPKEY;
            int x3954 = x356%(1048576);
            struct PARTRecord_PARTSUPPRecord* x6278 = &(x64349[x3954]);
            /* VAR */ struct PARTRecord_PARTSUPPRecord* list6279 = x6278;
            struct PARTRecord_PARTSUPPRecord* x6280 = list6279;
            int x28666 = x6280==(NULL);
            /* VAR */ int ite46107 = 0;
            if(x28666) {
              ite46107 = 1;
            } else {
              
              char* x64915 = x6280->P_NAME;
              int x64916 = x64915==(NULL);
              /* VAR */ int x64917 = 0;
              if(x64916) {
                x64917 = 1;
              } else {
                
                int x64920 = strcmp(x64915, "");
                int x64921 = !(x64920);
                x64917 = x64921;
              };
              int x64924 = x64917;
              ite46107 = x64924;
            };
            int x42568 = ite46107;
            if(x42568) {
              list6279 = NULL;
              struct PARTRecord_PARTSUPPRecord* x6287 = list6279;
              int x28673 = x6287==(NULL);
              /* VAR */ int ite46122 = 0;
              if(x28673) {
                ite46122 = 1;
              } else {
                
                char* x64935 = x6287->P_NAME;
                int x64936 = x64935==(NULL);
                /* VAR */ int x64937 = 0;
                if(x64936) {
                  x64937 = 1;
                } else {
                  
                  int x64940 = strcmp(x64935, "");
                  int x64941 = !(x64940);
                  x64937 = x64941;
                };
                int x64944 = x64937;
                ite46122 = x64944;
              };
              int x42574 = ite46122;
              if(x42574) {
                *(x64349 + x3954) = (const struct PARTRecord_PARTSUPPRecord){0};
              } else {
                
                struct PARTRecord_PARTSUPPRecord x21722 = *x6287;
                *(x64349 + x3954) = x21722;
                struct PARTRecord_PARTSUPPRecord* x21724 = &(x64349[x3954]);
                list6279 = x21724;
              };
            };
            int x28683 = x6278==(NULL);
            /* VAR */ int ite46140 = 0;
            if(x28683) {
              ite46140 = 1;
            } else {
              
              char* x64958 = x6278->P_NAME;
              int x64959 = x64958==(NULL);
              /* VAR */ int x64960 = 0;
              if(x64959) {
                x64960 = 1;
              } else {
                
                int x64963 = strcmp(x64958, "");
                int x64964 = !(x64963);
                x64960 = x64964;
              };
              int x64967 = x64960;
              ite46140 = x64967;
            };
            int x42583 = ite46140;
            if(x42583) {
              x17993->next = NULL;
              int x28689 = x17993==(NULL);
              /* VAR */ int ite46154 = 0;
              if(x28689) {
                ite46154 = 1;
              } else {
                
                char* x64977 = x17993->P_NAME;
                int x64978 = x64977==(NULL);
                /* VAR */ int x64979 = 0;
                if(x64978) {
                  x64979 = 1;
                } else {
                  
                  int x64982 = strcmp(x64977, "");
                  int x64983 = !(x64982);
                  x64979 = x64983;
                };
                int x64986 = x64979;
                ite46154 = x64986;
              };
              int x42588 = ite46154;
              if(x42588) {
                *(x64349 + x3954) = (const struct PARTRecord_PARTSUPPRecord){0};
              } else {
                
                struct PARTRecord_PARTSUPPRecord x21732 = *x17993;
                *(x64349 + x3954) = x21732;
                struct PARTRecord_PARTSUPPRecord* x21734 = &(x64349[x3954]);
                x17993 = x21734;
              };
              list6279 = x17993;
            } else {
              
              struct PARTRecord_PARTSUPPRecord* x8616 = x6278->next;
              x17993->next = x8616;
              x6278->next = x17993;
            };
          };
          current7057 = x8578;
        };
      };
      int x2106 = x64558;
      int x364 = x2106+(1);
      x64558 = x364;
    };
    while(1) {
      
      int x65005 = x64559;
      int x65006 = x65005<(x19350);
      if (!(x65006)) break; 
      
      int x2116 = x64559;
      struct SUPPLIERRecord* x374 = &(x21082[x2116]);
      char* x376 = x374->S_COMMENT;
      char* x34012 = pointer_add(x376, 0);
      char* x34013 = strstr(x34012, "Customer");
      char* x34014 = NULL;
      int x34015 = x34013==(x34014);
      /* VAR */ int ite42613 = 0;
      if(x34015) {
        ite42613 = -1;
      } else {
        
        int x42615 = str_subtract(x34013, x376);
        ite42613 = x42615;
      };
      int x34017 = ite42613;
      char* x34018 = pointer_add(x376, x34017);
      char* x34019 = strstr(x34018, "Complaints");
      char* x34020 = NULL;
      int x34021 = x34019==(x34020);
      /* VAR */ int ite42624 = 0;
      if(x34021) {
        ite42624 = -1;
      } else {
        
        int x42626 = str_subtract(x34019, x376);
        ite42624 = x42626;
      };
      int x34023 = ite42624;
      int x379 = x34017!=(-1);
      /* VAR */ int ite46209 = 0;
      if(x379) {
        int x65035 = x34023!=(-1);
        ite46209 = x65035;
      } else {
        
        ite46209 = 0;
      };
      int x42632 = ite46209;
      if(x42632) {
        int x382 = x374->S_SUPPKEY;
        int x3985 = x382%(1048576);
        struct PARTRecord_PARTSUPPRecord* x6365 = &(x64349[x3985]);
        int x28723 = x6365!=(NULL);
        /* VAR */ int ite46222 = 0;
        if(x28723) {
          char* x65047 = x6365->P_NAME;
          int x65048 = x65047!=(NULL);
          /* VAR */ int x65049 = 0;
          if(x65048) {
            int x65051 = strcmp(x65047, "");
            x65049 = x65051;
          } else {
            
            x65049 = 0;
          };
          int x65055 = x65049;
          ite46222 = x65055;
        } else {
          
          ite46222 = 0;
        };
        int x42639 = ite46222;
        if(x42639) {
          /* VAR */ struct PARTRecord_PARTSUPPRecord* prev6376 = NULL;
          /* VAR */ struct PARTRecord_PARTSUPPRecord* current7136 = x6365;
          while(1) {
            
            struct PARTRecord_PARTSUPPRecord* x7138 = current7136;
            int x28732 = x7138!=(NULL);
            /* VAR */ int ite46239 = 0;
            if(x28732) {
              char* x65068 = x7138->P_NAME;
              int x65069 = x65068!=(NULL);
              /* VAR */ int x65070 = 0;
              if(x65069) {
                int x65072 = strcmp(x65068, "");
                x65070 = x65072;
              } else {
                
                x65070 = 0;
              };
              int x65076 = x65070;
              ite46239 = x65076;
            } else {
              
              ite46239 = 0;
            };
            int x42647 = ite46239;
            if (!(x42647)) break; 
            
            struct PARTRecord_PARTSUPPRecord* x7140 = current7136;
            int x6382 = x7140->PS_SUPPKEY;
            int x6383 = x6382==(x382);
            int x6384 = !(x6383);
            int x6385 = !(x6384);
            if(x6385) {
              struct PARTRecord_PARTSUPPRecord* x7147 = current7136;
              int x28743 = x6365->P_PARTKEY;
              int x28744 = x7147->P_PARTKEY;
              int x28745 = x28743==(x28744);
              char* x28746 = x6365->P_NAME;
              char* x28747 = x7147->P_NAME;
              int x29985 = strcmp(x28746, x28747);
              int x29986 = !(x29985);
              char* x28749 = x6365->P_MFGR;
              char* x28750 = x7147->P_MFGR;
              int x29989 = strcmp(x28749, x28750);
              int x29990 = !(x29989);
              char* x28752 = x6365->P_BRAND;
              char* x28753 = x7147->P_BRAND;
              int x29993 = strcmp(x28752, x28753);
              int x29994 = !(x29993);
              char* x28755 = x6365->P_TYPE;
              char* x28756 = x7147->P_TYPE;
              int x29997 = strcmp(x28755, x28756);
              int x29998 = !(x29997);
              int x28758 = x6365->P_SIZE;
              int x28759 = x7147->P_SIZE;
              int x28760 = x28758==(x28759);
              char* x28761 = x6365->P_CONTAINER;
              char* x28762 = x7147->P_CONTAINER;
              int x30004 = strcmp(x28761, x28762);
              int x30005 = !(x30004);
              double x28764 = x6365->P_RETAILPRICE;
              double x28765 = x7147->P_RETAILPRICE;
              int x28766 = x28764==(x28765);
              char* x28767 = x6365->P_COMMENT;
              char* x28768 = x7147->P_COMMENT;
              int x30011 = strcmp(x28767, x28768);
              int x30012 = !(x30011);
              int x28770 = x6365->PS_PARTKEY;
              int x28771 = x7147->PS_PARTKEY;
              int x28772 = x28770==(x28771);
              int x28773 = x6365->PS_SUPPKEY;
              int x28774 = x7147->PS_SUPPKEY;
              int x28775 = x28773==(x28774);
              int x28776 = x6365->PS_AVAILQTY;
              int x28777 = x7147->PS_AVAILQTY;
              int x28778 = x28776==(x28777);
              double x28779 = x6365->PS_SUPPLYCOST;
              double x28780 = x7147->PS_SUPPLYCOST;
              int x28781 = x28779==(x28780);
              char* x28782 = x6365->PS_COMMENT;
              char* x28783 = x7147->PS_COMMENT;
              int x30027 = strcmp(x28782, x28783);
              int x30028 = !(x30027);
              /* VAR */ int ite46306 = 0;
              if(x28745) {
                ite46306 = x29986;
              } else {
                
                ite46306 = 0;
              };
              int x42705 = ite46306;
              /* VAR */ int ite46313 = 0;
              if(x42705) {
                ite46313 = x29990;
              } else {
                
                ite46313 = 0;
              };
              int x42707 = ite46313;
              /* VAR */ int ite46320 = 0;
              if(x42707) {
                ite46320 = x29994;
              } else {
                
                ite46320 = 0;
              };
              int x42709 = ite46320;
              /* VAR */ int ite46327 = 0;
              if(x42709) {
                ite46327 = x29998;
              } else {
                
                ite46327 = 0;
              };
              int x42711 = ite46327;
              /* VAR */ int ite46334 = 0;
              if(x42711) {
                ite46334 = x28760;
              } else {
                
                ite46334 = 0;
              };
              int x42713 = ite46334;
              /* VAR */ int ite46341 = 0;
              if(x42713) {
                ite46341 = x30005;
              } else {
                
                ite46341 = 0;
              };
              int x42715 = ite46341;
              /* VAR */ int ite46348 = 0;
              if(x42715) {
                ite46348 = x28766;
              } else {
                
                ite46348 = 0;
              };
              int x42717 = ite46348;
              /* VAR */ int ite46355 = 0;
              if(x42717) {
                ite46355 = x30012;
              } else {
                
                ite46355 = 0;
              };
              int x42719 = ite46355;
              /* VAR */ int ite46362 = 0;
              if(x42719) {
                ite46362 = x28772;
              } else {
                
                ite46362 = 0;
              };
              int x42721 = ite46362;
              /* VAR */ int ite46369 = 0;
              if(x42721) {
                ite46369 = x28775;
              } else {
                
                ite46369 = 0;
              };
              int x42723 = ite46369;
              /* VAR */ int ite46376 = 0;
              if(x42723) {
                ite46376 = x28778;
              } else {
                
                ite46376 = 0;
              };
              int x42725 = ite46376;
              /* VAR */ int ite46383 = 0;
              if(x42725) {
                ite46383 = x28781;
              } else {
                
                ite46383 = 0;
              };
              int x42727 = ite46383;
              /* VAR */ int ite46390 = 0;
              if(x42727) {
                ite46390 = x30028;
              } else {
                
                ite46390 = 0;
              };
              int x42729 = ite46390;
              if(x42729) {
                *(x64349 + x3985) = (const struct PARTRecord_PARTSUPPRecord){0};
              };
            } else {
              
              struct PARTRecord_PARTSUPPRecord* x6390 = prev6376;
              int x28801 = x6390!=(NULL);
              /* VAR */ int ite46401 = 0;
              if(x28801) {
                char* x65221 = x6390->P_NAME;
                int x65222 = x65221!=(NULL);
                /* VAR */ int x65223 = 0;
                if(x65222) {
                  int x65225 = strcmp(x65221, "");
                  x65223 = x65225;
                } else {
                  
                  x65223 = 0;
                };
                int x65229 = x65223;
                ite46401 = x65229;
              } else {
                
                ite46401 = 0;
              };
              int x42735 = ite46401;
              if(x42735) {
                struct PARTRecord_PARTSUPPRecord* x6392 = prev6376;
                struct PARTRecord_PARTSUPPRecord* x7155 = current7136;
                x6392->next = x7155;
              };
              int x6396 = x6365==(NULL);
              if(x6396) {
                struct PARTRecord_PARTSUPPRecord* x7159 = current7136;
                int x28812 = x7159==(NULL);
                /* VAR */ int ite46420 = 0;
                if(x28812) {
                  ite46420 = 1;
                } else {
                  
                  char* x65245 = x7159->P_NAME;
                  int x65246 = x65245==(NULL);
                  /* VAR */ int x65247 = 0;
                  if(x65246) {
                    x65247 = 1;
                  } else {
                    
                    int x65250 = strcmp(x65245, "");
                    int x65251 = !(x65250);
                    x65247 = x65251;
                  };
                  int x65254 = x65247;
                  ite46420 = x65254;
                };
                int x42745 = ite46420;
                if(x42745) {
                  *(x64349 + x3985) = (const struct PARTRecord_PARTSUPPRecord){0};
                } else {
                  
                  struct PARTRecord_PARTSUPPRecord x21790 = *x7159;
                  *(x64349 + x3985) = x21790;
                  struct PARTRecord_PARTSUPPRecord* x21792 = &(x64349[x3985]);
                  current7136 = x21792;
                };
              };
              struct PARTRecord_PARTSUPPRecord* x7161 = current7136;
              prev6376 = x7161;
            };
            struct PARTRecord_PARTSUPPRecord* x7163 = current7136;
            struct PARTRecord_PARTSUPPRecord* x8678 = x7163->next;
            current7136 = x8678;
          };
        };
      };
      int x2145 = x64559;
      int x404 = x2145+(1);
      x64559 = x404;
    };
    int x37063 = 0;
    for(; x37063 < 1048576 ; x37063 += 1) {
      
      struct PARTRecord_PARTSUPPRecord* x37064 = &(x64349[x37063]);
      int x37065 = x37064!=(NULL);
      /* VAR */ int ite46668 = 0;
      if(x37065) {
        char* x65539 = x37064->P_NAME;
        int x65540 = x65539!=(NULL);
        /* VAR */ int x65541 = 0;
        if(x65540) {
          int x65543 = strcmp(x65539, "");
          x65541 = x65543;
        } else {
          
          x65541 = 0;
        };
        int x65547 = x65541;
        ite46668 = x65547;
      } else {
        
        ite46668 = 0;
      };
      int x42917 = ite46668;
      if(x42917) {
        /* VAR */ struct PARTRecord_PARTSUPPRecord* current7237 = x37064;
        while(1) {
          
          struct PARTRecord_PARTSUPPRecord* x7239 = current7237;
          int x28842 = x7239!=(NULL);
          /* VAR */ int ite46684 = 0;
          if(x28842) {
            char* x65559 = x7239->P_NAME;
            int x65560 = x65559!=(NULL);
            /* VAR */ int x65561 = 0;
            if(x65560) {
              int x65563 = strcmp(x65559, "");
              x65561 = x65563;
            } else {
              
              x65561 = 0;
            };
            int x65567 = x65561;
            ite46684 = x65567;
          } else {
            
            ite46684 = 0;
          };
          int x42924 = ite46684;
          if (!(x42924)) break; 
          
          struct PARTRecord_PARTSUPPRecord* x7241 = current7237;
          struct PARTRecord_PARTSUPPRecord* x8755 = x7241->next;
          struct PARTRecord_PARTSUPPRecord* x7243 = current7237;
          int x6485 = x7243->PS_SUPPKEY;
          char* x6486 = x7243->P_BRAND;
          char* x6487 = x7243->P_TYPE;
          int x6488 = x7243->P_SIZE;
          int x18104 = x64387;
          struct Q16GRPRecord1* x18105 = &(x64388[x18104]);
          x18105->P_BRAND = x6486;
          x18105->P_TYPE = x6487;
          x18105->P_SIZE = x6488;
          x18105->PS_SUPPKEY = x6485;
          int x18110 = x64387;
          int x18111 = x18110+(1);
          x64387 = x18111;
          char* x28862 = x18105->P_BRAND;
          int x34191 = strlen(x28862);
          /* VAR */ int x30117 = 0;
          /* VAR */ int x30118 = 0;
          while(1) {
            
            int x30119 = x30117;
            int x30120 = x30119<(x34191);
            if (!(x30120)) break; 
            
            int x30121 = x30118;
            int x30122 = x30117;
            char* x34199 = pointer_add(x28862, x30122);
            char x34200 = *(x34199);
            int x30125 = x30121+(x34200);
            x30118 = x30125;
            int x30127 = x30117;
            int x30128 = x30127+(1);
            x30117 = x30128;
          };
          int x30131 = x30118;
          char* x28864 = x18105->P_TYPE;
          int x34209 = strlen(x28864);
          /* VAR */ int x30134 = 0;
          /* VAR */ int x30135 = 0;
          while(1) {
            
            int x30136 = x30134;
            int x30137 = x30136<(x34209);
            if (!(x30137)) break; 
            
            int x30138 = x30135;
            int x30139 = x30134;
            char* x34217 = pointer_add(x28864, x30139);
            char x34218 = *(x34217);
            int x30142 = x30138+(x34218);
            x30135 = x30142;
            int x30144 = x30134;
            int x30145 = x30144+(1);
            x30134 = x30145;
          };
          int x30148 = x30135;
          int x28866 = x18105->P_SIZE;
          int x28868 = x18105->PS_SUPPKEY;
          int x28870 = x30131+(x30148);
          int x28871 = x28870+(x28866);
          int x28872 = x28871+(x28868);
          int x6492 = x28872&(1048575);
          struct AGGRecord_Q16GRPRecord1* x6493 = &(x64343[x6492]);
          int x6494 = x64342;
          int x6495 = x6492>(x6494);
          if(x6495) {
            x64342 = x6492;
          };
          /* VAR */ struct AGGRecord_Q16GRPRecord1* x6502 = x6493;
          /* VAR */ int x6503 = 0;
          while(1) {
            
            struct AGGRecord_Q16GRPRecord1* x7265 = x6502;
            int x28883 = x7265!=(NULL);
            /* VAR */ int ite46761 = 0;
            if(x28883) {
              struct Q16GRPRecord1* x65640 = x7265->key;
              int x65641 = x65640!=(NULL);
              /* VAR */ int x65642 = 0;
              if(x65641) {
                char* x65644 = x65640->P_BRAND;
                int x65645 = x65644!=(NULL);
                /* VAR */ int x65646 = 0;
                if(x65645) {
                  int x65648 = strcmp(x65644, "");
                  x65646 = x65648;
                } else {
                  
                  x65646 = 0;
                };
                int x65652 = x65646;
                x65642 = x65652;
              } else {
                
                x65642 = 0;
              };
              int x65656 = x65642;
              ite46761 = x65656;
            } else {
              
              ite46761 = 0;
            };
            int x42992 = ite46761;
            /* VAR */ int ite46772 = 0;
            if(x42992) {
              int x65663 = x6503;
              int x65664 = !(x65663);
              ite46772 = x65664;
            } else {
              
              ite46772 = 0;
            };
            int x42994 = ite46772;
            if (!(x42994)) break; 
            
            struct AGGRecord_Q16GRPRecord1* x7270 = x6502;
            struct Q16GRPRecord1* x6446 = x7270->key;
            char* x28892 = x6446->P_BRAND;
            int x30177 = strcmp(x28892, x28862);
            int x30178 = !(x30177);
            char* x28894 = x6446->P_TYPE;
            int x30180 = strcmp(x28894, x28864);
            int x30181 = !(x30180);
            int x28896 = x6446->P_SIZE;
            int x28897 = x28896==(x28866);
            int x28898 = x6446->PS_SUPPKEY;
            int x28899 = x28898==(x28868);
            /* VAR */ int ite46793 = 0;
            if(x30178) {
              ite46793 = x30181;
            } else {
              
              ite46793 = 0;
            };
            int x43008 = ite46793;
            /* VAR */ int ite46800 = 0;
            if(x43008) {
              ite46800 = x28897;
            } else {
              
              ite46800 = 0;
            };
            int x43010 = ite46800;
            /* VAR */ int ite46807 = 0;
            if(x43010) {
              ite46807 = x28899;
            } else {
              
              ite46807 = 0;
            };
            int x43012 = ite46807;
            if(x43012) {
              x6503 = 1;
            } else {
              
              struct AGGRecord_Q16GRPRecord1* x7276 = x6502;
              struct AGGRecord_Q16GRPRecord1* x8788 = x7276->next;
              x6502 = x8788;
            };
          };
          int x6519 = x6503;
          int x6520 = !(x6519);
          /* VAR */ struct AGGRecord_Q16GRPRecord1** ite43021 = 0;
          if(x6520) {
            ite43021 = NULL;
          } else {
            
            struct AGGRecord_Q16GRPRecord1* x43023 = x6502;
            ite43021 = x43023;
          };
          struct AGGRecord_Q16GRPRecord1** x6521 = ite43021;
          int x12762 = x6521!=(NULL);
          /* VAR */ struct AGGRecord_Q16GRPRecord1* ite43029 = 0;
          if(x12762) {
            ite43029 = x6521;
          } else {
            
            /* VAR */ double x43031 = 0;
            /* VAR */ double x43032 = 0;
            double x43033 = x43032;
            int x43034 = x64423;
            struct AGGRecord_Q16GRPRecord1* x43035 = &(x64424[x43034]);
            x43035->key = x18105;
            x43035->aggs = x43033;
            x43035->next = NULL;
            int x43039 = x64423;
            int x43040 = x43039+(1);
            x64423 = x43040;
            int x43042 = x6493==(NULL);
            /* VAR */ int ite46844 = 0;
            if(x43042) {
              ite46844 = 1;
            } else {
              
              struct Q16GRPRecord1* x65732 = x6493->key;
              int x65733 = x65732==(NULL);
              /* VAR */ int x65734 = 0;
              if(x65733) {
                x65734 = 1;
              } else {
                
                char* x65737 = x65732->P_BRAND;
                int x65738 = x65737==(NULL);
                /* VAR */ int x65739 = 0;
                if(x65738) {
                  x65739 = 1;
                } else {
                  
                  int x65742 = strcmp(x65737, "");
                  int x65743 = !(x65742);
                  x65739 = x65743;
                };
                int x65746 = x65739;
                x65734 = x65746;
              };
              int x65749 = x65734;
              ite46844 = x65749;
            };
            int x43044 = ite46844;
            if(x43044) {
              x43035->next = NULL;
              int x28931 = x43035==(NULL);
              /* VAR */ int ite46858 = 0;
              if(x28931) {
                ite46858 = 1;
              } else {
                
                struct Q16GRPRecord1* x65759 = x43035->key;
                int x65760 = x65759==(NULL);
                /* VAR */ int x65761 = 0;
                if(x65760) {
                  x65761 = 1;
                } else {
                  
                  char* x65764 = x65759->P_BRAND;
                  int x65765 = x65764==(NULL);
                  /* VAR */ int x65766 = 0;
                  if(x65765) {
                    x65766 = 1;
                  } else {
                    
                    int x65769 = strcmp(x65764, "");
                    int x65770 = !(x65769);
                    x65766 = x65770;
                  };
                  int x65773 = x65766;
                  x65761 = x65773;
                };
                int x65776 = x65761;
                ite46858 = x65776;
              };
              int x43049 = ite46858;
              if(x43049) {
                *(x64343 + x6492) = (const struct AGGRecord_Q16GRPRecord1){0};
              } else {
                
                struct AGGRecord_Q16GRPRecord1 x21874 = *x43035;
                *(x64343 + x6492) = x21874;
                struct AGGRecord_Q16GRPRecord1* x21876 = &(x64343[x6492]);
                x43035 = x21876;
              };
            } else {
              
              struct AGGRecord_Q16GRPRecord1* x8808 = x6493->next;
              x43035->next = x8808;
              x6493->next = x43035;
            };
            ite43029 = x43035;
          };
          struct AGGRecord_Q16GRPRecord1* x6528 = ite43029;
          double x15417 = x6528->aggs;
          x6528->aggs = x15417;
          current7237 = x8755;
        };
      };
    };
    int x65795 = x64342;
    int x65796 = x65795+(1);
    int x37394 = 0;
    for(; x37394 < x65796 ; x37394 += 1) {
      
      struct AGGRecord_Q16GRPRecord1* x37395 = &(x64343[x37394]);
      /* VAR */ struct AGGRecord_Q16GRPRecord1* x37396 = x37395;
      while(1) {
        
        struct AGGRecord_Q16GRPRecord1* x7377 = x37396;
        int x28957 = x7377!=(NULL);
        /* VAR */ int ite47088 = 0;
        if(x28957) {
          struct Q16GRPRecord1* x66048 = x7377->key;
          int x66049 = x66048!=(NULL);
          /* VAR */ int x66050 = 0;
          if(x66049) {
            char* x66052 = x66048->P_BRAND;
            int x66053 = x66052!=(NULL);
            /* VAR */ int x66054 = 0;
            if(x66053) {
              int x66056 = strcmp(x66052, "");
              x66054 = x66056;
            } else {
              
              x66054 = 0;
            };
            int x66060 = x66054;
            x66050 = x66060;
          } else {
            
            x66050 = 0;
          };
          int x66064 = x66050;
          ite47088 = x66064;
        } else {
          
          ite47088 = 0;
        };
        int x43217 = ite47088;
        if (!(x43217)) break; 
        
        struct AGGRecord_Q16GRPRecord1* x7379 = x37396;
        struct AGGRecord_Q16GRPRecord1* x8890 = x7379->next;
        struct AGGRecord_Q16GRPRecord1* x7381 = x37396;
        struct Q16GRPRecord1* x6626 = x7381->key;
        char* x6627 = x6626->P_BRAND;
        char* x6628 = x6626->P_TYPE;
        int x6629 = x6626->P_SIZE;
        int x18181 = x64468;
        struct Q16GRPRecord2* x18182 = &(x64469[x18181]);
        x18182->P_BRAND = x6627;
        x18182->P_TYPE = x6628;
        x18182->P_SIZE = x6629;
        int x18186 = x64468;
        int x18187 = x18186+(1);
        x64468 = x18187;
        char* x28976 = x18182->P_BRAND;
        int x34359 = strlen(x28976);
        /* VAR */ int x30273 = 0;
        /* VAR */ int x30274 = 0;
        while(1) {
          
          int x30275 = x30273;
          int x30276 = x30275<(x34359);
          if (!(x30276)) break; 
          
          int x30277 = x30274;
          int x30278 = x30273;
          char* x34367 = pointer_add(x28976, x30278);
          char x34368 = *(x34367);
          int x30281 = x30277+(x34368);
          x30274 = x30281;
          int x30283 = x30273;
          int x30284 = x30283+(1);
          x30273 = x30284;
        };
        int x30287 = x30274;
        char* x28978 = x18182->P_TYPE;
        int x34377 = strlen(x28978);
        /* VAR */ int x30290 = 0;
        /* VAR */ int x30291 = 0;
        while(1) {
          
          int x30292 = x30290;
          int x30293 = x30292<(x34377);
          if (!(x30293)) break; 
          
          int x30294 = x30291;
          int x30295 = x30290;
          char* x34385 = pointer_add(x28978, x30295);
          char x34386 = *(x34385);
          int x30298 = x30294+(x34386);
          x30291 = x30298;
          int x30300 = x30290;
          int x30301 = x30300+(1);
          x30290 = x30301;
        };
        int x30304 = x30291;
        int x28980 = x18182->P_SIZE;
        int x28982 = x30287+(x30304);
        int x28983 = x28982+(x28980);
        int x6633 = x28983&(1048575);
        struct AGGRecord_Q16GRPRecord2* x6634 = &(x64336[x6633]);
        int x6635 = x64335;
        int x6636 = x6633>(x6635);
        if(x6636) {
          x64335 = x6633;
        };
        /* VAR */ struct AGGRecord_Q16GRPRecord2* x6643 = x6634;
        /* VAR */ int x6644 = 0;
        while(1) {
          
          struct AGGRecord_Q16GRPRecord2* x7406 = x6643;
          int x28994 = x7406!=(NULL);
          /* VAR */ int ite47162 = 0;
          if(x28994) {
            struct Q16GRPRecord2* x66134 = x7406->key;
            int x66135 = x66134!=(NULL);
            /* VAR */ int x66136 = 0;
            if(x66135) {
              char* x66138 = x66134->P_BRAND;
              int x66139 = x66138!=(NULL);
              /* VAR */ int x66140 = 0;
              if(x66139) {
                int x66142 = strcmp(x66138, "");
                x66140 = x66142;
              } else {
                
                x66140 = 0;
              };
              int x66146 = x66140;
              x66136 = x66146;
            } else {
              
              x66136 = 0;
            };
            int x66150 = x66136;
            ite47162 = x66150;
          } else {
            
            ite47162 = 0;
          };
          int x43282 = ite47162;
          /* VAR */ int ite47173 = 0;
          if(x43282) {
            int x66157 = x6644;
            int x66158 = !(x66157);
            ite47173 = x66158;
          } else {
            
            ite47173 = 0;
          };
          int x43284 = ite47173;
          if (!(x43284)) break; 
          
          struct AGGRecord_Q16GRPRecord2* x7411 = x6643;
          struct Q16GRPRecord2* x6583 = x7411->key;
          char* x29003 = x6583->P_BRAND;
          int x30331 = strcmp(x29003, x28976);
          int x30332 = !(x30331);
          char* x29005 = x6583->P_TYPE;
          int x30334 = strcmp(x29005, x28978);
          int x30335 = !(x30334);
          int x29007 = x6583->P_SIZE;
          int x29008 = x29007==(x28980);
          /* VAR */ int ite47192 = 0;
          if(x30332) {
            ite47192 = x30335;
          } else {
            
            ite47192 = 0;
          };
          int x43296 = ite47192;
          /* VAR */ int ite47199 = 0;
          if(x43296) {
            ite47199 = x29008;
          } else {
            
            ite47199 = 0;
          };
          int x43298 = ite47199;
          if(x43298) {
            x6644 = 1;
          } else {
            
            struct AGGRecord_Q16GRPRecord2* x7417 = x6643;
            struct AGGRecord_Q16GRPRecord2* x8926 = x7417->next;
            x6643 = x8926;
          };
        };
        int x6660 = x6644;
        int x6661 = !(x6660);
        /* VAR */ struct AGGRecord_Q16GRPRecord2** ite43307 = 0;
        if(x6661) {
          ite43307 = NULL;
        } else {
          
          struct AGGRecord_Q16GRPRecord2* x43309 = x6643;
          ite43307 = x43309;
        };
        struct AGGRecord_Q16GRPRecord2** x6662 = ite43307;
        int x12824 = x6662!=(NULL);
        /* VAR */ struct AGGRecord_Q16GRPRecord2* ite43315 = 0;
        if(x12824) {
          ite43315 = x6662;
        } else {
          
          /* VAR */ double x43317 = 0;
          /* VAR */ double x43318 = 0;
          double x43319 = x43318;
          int x43320 = x64504;
          struct AGGRecord_Q16GRPRecord2* x43321 = &(x64505[x43320]);
          x43321->key = x18182;
          x43321->aggs = x43319;
          x43321->next = NULL;
          int x43325 = x64504;
          int x43326 = x43325+(1);
          x64504 = x43326;
          int x43328 = x6634==(NULL);
          /* VAR */ int ite47236 = 0;
          if(x43328) {
            ite47236 = 1;
          } else {
            
            struct Q16GRPRecord2* x66218 = x6634->key;
            int x66219 = x66218==(NULL);
            /* VAR */ int x66220 = 0;
            if(x66219) {
              x66220 = 1;
            } else {
              
              char* x66223 = x66218->P_BRAND;
              int x66224 = x66223==(NULL);
              /* VAR */ int x66225 = 0;
              if(x66224) {
                x66225 = 1;
              } else {
                
                int x66228 = strcmp(x66223, "");
                int x66229 = !(x66228);
                x66225 = x66229;
              };
              int x66232 = x66225;
              x66220 = x66232;
            };
            int x66235 = x66220;
            ite47236 = x66235;
          };
          int x43330 = ite47236;
          if(x43330) {
            x43321->next = NULL;
            int x29039 = x43321==(NULL);
            /* VAR */ int ite47250 = 0;
            if(x29039) {
              ite47250 = 1;
            } else {
              
              struct Q16GRPRecord2* x66245 = x43321->key;
              int x66246 = x66245==(NULL);
              /* VAR */ int x66247 = 0;
              if(x66246) {
                x66247 = 1;
              } else {
                
                char* x66250 = x66245->P_BRAND;
                int x66251 = x66250==(NULL);
                /* VAR */ int x66252 = 0;
                if(x66251) {
                  x66252 = 1;
                } else {
                  
                  int x66255 = strcmp(x66250, "");
                  int x66256 = !(x66255);
                  x66252 = x66256;
                };
                int x66259 = x66252;
                x66247 = x66259;
              };
              int x66262 = x66247;
              ite47250 = x66262;
            };
            int x43335 = ite47250;
            if(x43335) {
              *(x64336 + x6633) = (const struct AGGRecord_Q16GRPRecord2){0};
            } else {
              
              struct AGGRecord_Q16GRPRecord2 x21956 = *x43321;
              *(x64336 + x6633) = x21956;
              struct AGGRecord_Q16GRPRecord2* x21958 = &(x64336[x6633]);
              x43321 = x21958;
            };
          } else {
            
            struct AGGRecord_Q16GRPRecord2* x8946 = x6634->next;
            x43321->next = x8946;
            x6634->next = x43321;
          };
          ite43315 = x43321;
        };
        struct AGGRecord_Q16GRPRecord2* x6669 = ite43315;
        double x15480 = x6669->aggs;
        double x6683 = x15480+(1.0);
        x6669->aggs = x6683;
        x37396 = x8890;
      };
    };
    int x66282 = x64335;
    int x66283 = x66282+(1);
    int x37576 = 0;
    for(; x37576 < x66283 ; x37576 += 1) {
      
      struct AGGRecord_Q16GRPRecord2* x37577 = &(x64336[x37576]);
      /* VAR */ struct AGGRecord_Q16GRPRecord2* x37578 = x37577;
      while(1) {
        
        struct AGGRecord_Q16GRPRecord2* x7461 = x37578;
        int x29066 = x7461!=(NULL);
        /* VAR */ int ite47308 = 0;
        if(x29066) {
          struct Q16GRPRecord2* x66327 = x7461->key;
          int x66328 = x66327!=(NULL);
          /* VAR */ int x66329 = 0;
          if(x66328) {
            char* x66331 = x66327->P_BRAND;
            int x66332 = x66331!=(NULL);
            /* VAR */ int x66333 = 0;
            if(x66332) {
              int x66335 = strcmp(x66331, "");
              x66333 = x66335;
            } else {
              
              x66333 = 0;
            };
            int x66339 = x66333;
            x66329 = x66339;
          } else {
            
            x66329 = 0;
          };
          int x66343 = x66329;
          ite47308 = x66343;
        } else {
          
          ite47308 = 0;
        };
        int x43375 = ite47308;
        if (!(x43375)) break; 
        
        struct AGGRecord_Q16GRPRecord2* x7463 = x37578;
        struct AGGRecord_Q16GRPRecord2* x8972 = x7463->next;
        struct AGGRecord_Q16GRPRecord2* x7465 = x37578;
        g_tree_insert(x64645, x7465, x7465);
        x37578 = x8972;
      };
    };
    while(1) {
      
      int x2225 = x64646;
      int x490 = !(x2225);
      /* VAR */ int ite47327 = 0;
      if(x490) {
        int x66358 = g_tree_nnodes(x64645);
        int x66359 = x66358!=(0);
        ite47327 = x66359;
      } else {
        
        ite47327 = 0;
      };
      int x43385 = ite47327;
      if (!(x43385)) break; 
      
      void* x24898 = NULL;
      void** x24906 = &(x24898);
      g_tree_foreach(x64645, x24905, x24906);
      struct AGGRecord_Q16GRPRecord2* x24908 = (struct AGGRecord_Q16GRPRecord2*){x24898};
      int x24909 = g_tree_remove(x64645, x24908);
      if(0) {
        x64646 = 1;
      } else {
        
        struct Q16GRPRecord2* x503 = x24908->key;
        char* x504 = x503->P_BRAND;
        char* x506 = x503->P_TYPE;
        int x508 = x503->P_SIZE;
        double x15521 = x24908->aggs;
        printf("%s|%s|%d|%.0f\n", x504, x506, x508, x15521);
        int x2247 = x64647;
        int x513 = x2247+(1);
        x64647 = x513;
      };
    };
    int x66387 = x64647;
    printf("(%d rows)\n", x66387);
    struct timeval* x66389 = &x64554;
    gettimeofday(x66389, NULL);
    struct timeval* x66391 = &x64550;
    struct timeval* x66392 = &x64554;
    struct timeval* x66393 = &x64552;
    long x66394 = timeval_subtract(x66391, x66392, x66393);
    printf("Generated code run in %ld milliseconds.\n", x66394);
  };
}
/* ----------- FUNCTIONS ----------- */
int x64602(struct AGGRecord_Q16GRPRecord2* x240, struct AGGRecord_Q16GRPRecord2* x241) {
  double x15692 = x240->aggs;
  double x15694 = x241->aggs;
  int x246 = x15692<(x15694);
  /* VAR */ int ite42412 = 0;
  if(x246) {
    ite42412 = 1;
  } else {
    
    double x42414 = x240->aggs;
    double x42415 = x241->aggs;
    int x42416 = x42414>(x42415);
    /* VAR */ int ite42418 = 0;
    if(x42416) {
      ite42418 = -1;
    } else {
      
      struct Q16GRPRecord2* x42420 = x240->key;
      char* x42421 = x42420->P_BRAND;
      struct Q16GRPRecord2* x42422 = x241->key;
      char* x42423 = x42422->P_BRAND;
      int x42424 = strcmp(x42421, x42423);
      /* VAR */ int x42425 = x42424;
      int x42426 = x42425;
      int x42427 = x42426==(0);
      if(x42427) {
        char* x258 = x42420->P_TYPE;
        char* x259 = x42422->P_TYPE;
        int x33778 = strcmp(x258, x259);
        x42425 = x33778;
        int x262 = x42425;
        int x263 = x262==(0);
        if(x263) {
          int x264 = x42420->P_SIZE;
          int x265 = x42422->P_SIZE;
          int x266 = x264-(x265);
          x42425 = x266;
        };
      };
      int x42440 = x42425;
      ite42418 = x42440;
    };
    int x42417 = ite42418;
    ite42412 = x42417;
  };
  int x272 = ite42412;
  return x272; 
}

int x24905(void* x24899, void* x24900, void* x24901) {
  struct AGGRecord_Q16GRPRecord2** x24902 = (struct AGGRecord_Q16GRPRecord2**){x24901};
  struct AGGRecord_Q16GRPRecord2* x24903 = (struct AGGRecord_Q16GRPRecord2*){x24900};
  pointer_assign(x24902, x24903);
  return 1; 
}
