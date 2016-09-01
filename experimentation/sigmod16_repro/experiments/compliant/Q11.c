#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord;
  struct NATIONRecord_SUPPLIERRecord;
  struct AGGRecord_String;
  struct WindowRecord_Int_Double;
  struct NATIONRecord;
  struct SUPPLIERRecord;
  struct PARTSUPPRecord;
  
  struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
  struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* next;
  };
  
  struct NATIONRecord_SUPPLIERRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  struct NATIONRecord_SUPPLIERRecord* next;
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
  int N_REGIONKEY;
  char* N_COMMENT;
  struct NATIONRecord* next;
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
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
  };
  
  


int x37615(struct WindowRecord_Int_Double* x355, struct WindowRecord_Int_Double* x356);

int x19368(void* x19362, void* x19363, void* x19364);
/* GLOBAL VARS */

struct timeval x14546;
int main(int argc, char** argv) {
  FILE* x15301 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x15302 = 0;
  int x15303 = x15302;
  int* x15304 = &x15303;
  int x15305 = fscanf(x15301, "%d", x15304);
  pclose(x15301);
  struct PARTSUPPRecord* x16557 = (struct PARTSUPPRecord*)malloc(x15303 * sizeof(struct PARTSUPPRecord));
  memset(x16557, 0, x15303 * sizeof(struct PARTSUPPRecord));
  int x15309 = O_RDONLY;
  int x15310 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x15309);
  struct stat x15311 = (struct stat){0};
  /* VAR */ struct stat x15312 = x15311;
  struct stat x15313 = x15312;
  struct stat* x15314 = &x15313;
  int x15315 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x15314);
  size_t x15316 = x15314->st_size;
  int x15317 = PROT_READ;
  int x15318 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x15316, x15317, x15318, x15310, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x15303);
    /* VAR */ int ite29512 = 0;
    if(x6) {
      char x35677 = *x3;
      int x35678 = x35677!=('\0');
      ite29512 = x35678;
    } else {
      
      ite29512 = 0;
    };
    int x28195 = ite29512;
    if (!(x28195)) break; 
    
    /* VAR */ int x15326 = 0;
    int x15327 = x15326;
    int* x15328 = &x15327;
    char* x15329 = strntoi_unchecked(x3, x15328);
    x3 = x15329;
    /* VAR */ int x15331 = 0;
    int x15332 = x15331;
    int* x15333 = &x15332;
    char* x15334 = strntoi_unchecked(x3, x15333);
    x3 = x15334;
    /* VAR */ int x15336 = 0;
    int x15337 = x15336;
    int* x15338 = &x15337;
    char* x15339 = strntoi_unchecked(x3, x15338);
    x3 = x15339;
    /* VAR */ double x15341 = 0.0;
    double x15342 = x15341;
    double* x15343 = &x15342;
    char* x15344 = strntod_unchecked(x3, x15343);
    x3 = x15344;
    char* x16596 = (char*)malloc(200 * sizeof(char));
    memset(x16596, 0, 200 * sizeof(char));
    /* VAR */ char* x15347 = x3;
    while(1) {
      
      char x15348 = *x3;
      int x15349 = x15348!=('|');
      /* VAR */ int ite29546 = 0;
      if(x15349) {
        char x35710 = *x3;
        int x35711 = x35710!=('\n');
        ite29546 = x35711;
      } else {
        
        ite29546 = 0;
      };
      int x28222 = ite29546;
      if (!(x28222)) break; 
      
      x3 += 1;
    };
    char* x15355 = x15347;
    int x15356 = x3 - x15355;
    char* x15357 = x15347;
    char* x15358 = strncpy(x16596, x15357, x15356);
    x3 += 1;
    struct PARTSUPPRecord* x17310 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x17310, 0, 1 * sizeof(struct PARTSUPPRecord));
    x17310->PS_PARTKEY = x15327; x17310->PS_SUPPKEY = x15332; x17310->PS_AVAILQTY = x15337; x17310->PS_SUPPLYCOST = x15342; x17310->PS_COMMENT = x16596;
    int x22 = x4;
    int x21648 = x17310==(NULL);
    /* VAR */ int ite29569 = 0;
    if(x21648) {
      ite29569 = 1;
    } else {
      
      char* x35733 = x17310->PS_COMMENT;
      int x35734 = x35733==(NULL);
      /* VAR */ int x35735 = 0;
      if(x35734) {
        x35735 = 1;
      } else {
        
        int x35738 = strcmp(x35733, "");
        int x35739 = !(x35738);
        x35735 = x35739;
      };
      int x35742 = x35735;
      ite29569 = x35742;
    };
    int x28238 = ite29569;
    if(x28238) {
      *(x16557 + x22) = (const struct PARTSUPPRecord){0};
    } else {
      
      struct PARTSUPPRecord x16618 = *x17310;
      *(x16557 + x22) = x16618;
      struct PARTSUPPRecord* x16620 = &(x16557[x22]);
      x17310 = x16620;
    };
    int x24 = x4;
    int x25 = x24+(1);
    x4 = x25;
  };
  FILE* x15371 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x15372 = 0;
  int x15373 = x15372;
  int* x15374 = &x15373;
  int x15375 = fscanf(x15371, "%d", x15374);
  pclose(x15371);
  struct SUPPLIERRecord* x16632 = (struct SUPPLIERRecord*)malloc(x15373 * sizeof(struct SUPPLIERRecord));
  memset(x16632, 0, x15373 * sizeof(struct SUPPLIERRecord));
  int x15379 = O_RDONLY;
  int x15380 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x15379);
  /* VAR */ struct stat x15381 = x15311;
  struct stat x15382 = x15381;
  struct stat* x15383 = &x15382;
  int x15384 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x15383);
  size_t x15385 = x15383->st_size;
  int x15386 = PROT_READ;
  int x15387 = MAP_PRIVATE;
  char* x30 = mmap(NULL, x15385, x15386, x15387, x15380, 0);
  /* VAR */ int x31 = 0;
  while(1) {
    
    int x32 = x31;
    int x33 = x32<(x15373);
    /* VAR */ int ite29610 = 0;
    if(x33) {
      char x35778 = *x30;
      int x35779 = x35778!=('\0');
      ite29610 = x35779;
    } else {
      
      ite29610 = 0;
    };
    int x28270 = ite29610;
    if (!(x28270)) break; 
    
    /* VAR */ int x15395 = 0;
    int x15396 = x15395;
    int* x15397 = &x15396;
    char* x15398 = strntoi_unchecked(x30, x15397);
    x30 = x15398;
    char* x16655 = (char*)malloc(26 * sizeof(char));
    memset(x16655, 0, 26 * sizeof(char));
    /* VAR */ char* x15401 = x30;
    while(1) {
      
      char x15402 = *x30;
      int x15403 = x15402!=('|');
      /* VAR */ int ite29629 = 0;
      if(x15403) {
        char x35796 = *x30;
        int x35797 = x35796!=('\n');
        ite29629 = x35797;
      } else {
        
        ite29629 = 0;
      };
      int x28282 = ite29629;
      if (!(x28282)) break; 
      
      x30 += 1;
    };
    char* x15409 = x15401;
    int x15410 = x30 - x15409;
    char* x15411 = x15401;
    char* x15412 = strncpy(x16655, x15411, x15410);
    x30 += 1;
    char* x16673 = (char*)malloc(41 * sizeof(char));
    memset(x16673, 0, 41 * sizeof(char));
    /* VAR */ char* x15420 = x30;
    while(1) {
      
      char x15421 = *x30;
      int x15422 = x15421!=('|');
      /* VAR */ int ite29652 = 0;
      if(x15422) {
        char x35818 = *x30;
        int x35819 = x35818!=('\n');
        ite29652 = x35819;
      } else {
        
        ite29652 = 0;
      };
      int x28298 = ite29652;
      if (!(x28298)) break; 
      
      x30 += 1;
    };
    char* x15428 = x15420;
    int x15429 = x30 - x15428;
    char* x15430 = x15420;
    char* x15431 = strncpy(x16673, x15430, x15429);
    x30 += 1;
    /* VAR */ int x15438 = 0;
    int x15439 = x15438;
    int* x15440 = &x15439;
    char* x15441 = strntoi_unchecked(x30, x15440);
    x30 = x15441;
    char* x16696 = (char*)malloc(16 * sizeof(char));
    memset(x16696, 0, 16 * sizeof(char));
    /* VAR */ char* x15444 = x30;
    while(1) {
      
      char x15445 = *x30;
      int x15446 = x15445!=('|');
      /* VAR */ int ite29680 = 0;
      if(x15446) {
        char x35845 = *x30;
        int x35846 = x35845!=('\n');
        ite29680 = x35846;
      } else {
        
        ite29680 = 0;
      };
      int x28319 = ite29680;
      if (!(x28319)) break; 
      
      x30 += 1;
    };
    char* x15452 = x15444;
    int x15453 = x30 - x15452;
    char* x15454 = x15444;
    char* x15455 = strncpy(x16696, x15454, x15453);
    x30 += 1;
    /* VAR */ double x15462 = 0.0;
    double x15463 = x15462;
    double* x15464 = &x15463;
    char* x15465 = strntod_unchecked(x30, x15464);
    x30 = x15465;
    char* x16719 = (char*)malloc(102 * sizeof(char));
    memset(x16719, 0, 102 * sizeof(char));
    /* VAR */ char* x15468 = x30;
    while(1) {
      
      char x15469 = *x30;
      int x15470 = x15469!=('|');
      /* VAR */ int ite29708 = 0;
      if(x15470) {
        char x35872 = *x30;
        int x35873 = x35872!=('\n');
        ite29708 = x35873;
      } else {
        
        ite29708 = 0;
      };
      int x28340 = ite29708;
      if (!(x28340)) break; 
      
      x30 += 1;
    };
    char* x15476 = x15468;
    int x15477 = x30 - x15476;
    char* x15478 = x15468;
    char* x15479 = strncpy(x16719, x15478, x15477);
    x30 += 1;
    struct SUPPLIERRecord* x17435 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x17435, 0, 1 * sizeof(struct SUPPLIERRecord));
    x17435->S_SUPPKEY = x15396; x17435->S_NAME = x16655; x17435->S_ADDRESS = x16673; x17435->S_NATIONKEY = x15439; x17435->S_PHONE = x16696; x17435->S_ACCTBAL = x15463; x17435->S_COMMENT = x16719;
    int x72 = x31;
    int x21776 = x17435==(NULL);
    /* VAR */ int ite29731 = 0;
    if(x21776) {
      ite29731 = 1;
    } else {
      
      char* x35895 = x17435->S_NAME;
      int x35896 = x35895==(NULL);
      /* VAR */ int x35897 = 0;
      if(x35896) {
        x35897 = 1;
      } else {
        
        int x35900 = strcmp(x35895, "");
        int x35901 = !(x35900);
        x35897 = x35901;
      };
      int x35904 = x35897;
      ite29731 = x35904;
    };
    int x28356 = ite29731;
    if(x28356) {
      *(x16632 + x72) = (const struct SUPPLIERRecord){0};
    } else {
      
      struct SUPPLIERRecord x16741 = *x17435;
      *(x16632 + x72) = x16741;
      struct SUPPLIERRecord* x16743 = &(x16632[x72]);
      x17435 = x16743;
    };
    int x74 = x31;
    int x75 = x74+(1);
    x31 = x75;
  };
  FILE* x15492 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x15493 = 0;
  int x15494 = x15493;
  int* x15495 = &x15494;
  int x15496 = fscanf(x15492, "%d", x15495);
  pclose(x15492);
  struct NATIONRecord* x16755 = (struct NATIONRecord*)malloc(x15494 * sizeof(struct NATIONRecord));
  memset(x16755, 0, x15494 * sizeof(struct NATIONRecord));
  int x15500 = O_RDONLY;
  int x15501 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x15500);
  /* VAR */ struct stat x15502 = x15311;
  struct stat x15503 = x15502;
  struct stat* x15504 = &x15503;
  int x15505 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x15504);
  size_t x15506 = x15504->st_size;
  int x15507 = PROT_READ;
  int x15508 = MAP_PRIVATE;
  char* x80 = mmap(NULL, x15506, x15507, x15508, x15501, 0);
  /* VAR */ int x81 = 0;
  while(1) {
    
    int x82 = x81;
    int x83 = x82<(x15494);
    /* VAR */ int ite29772 = 0;
    if(x83) {
      char x35940 = *x80;
      int x35941 = x35940!=('\0');
      ite29772 = x35941;
    } else {
      
      ite29772 = 0;
    };
    int x28388 = ite29772;
    if (!(x28388)) break; 
    
    /* VAR */ int x15516 = 0;
    int x15517 = x15516;
    int* x15518 = &x15517;
    char* x15519 = strntoi_unchecked(x80, x15518);
    x80 = x15519;
    char* x16778 = (char*)malloc(26 * sizeof(char));
    memset(x16778, 0, 26 * sizeof(char));
    /* VAR */ char* x15522 = x80;
    while(1) {
      
      char x15523 = *x80;
      int x15524 = x15523!=('|');
      /* VAR */ int ite29791 = 0;
      if(x15524) {
        char x35958 = *x80;
        int x35959 = x35958!=('\n');
        ite29791 = x35959;
      } else {
        
        ite29791 = 0;
      };
      int x28400 = ite29791;
      if (!(x28400)) break; 
      
      x80 += 1;
    };
    char* x15530 = x15522;
    int x15531 = x80 - x15530;
    char* x15532 = x15522;
    char* x15533 = strncpy(x16778, x15532, x15531);
    x80 += 1;
    /* VAR */ int x15540 = 0;
    int x15541 = x15540;
    int* x15542 = &x15541;
    char* x15543 = strntoi_unchecked(x80, x15542);
    x80 = x15543;
    char* x16801 = (char*)malloc(153 * sizeof(char));
    memset(x16801, 0, 153 * sizeof(char));
    /* VAR */ char* x15546 = x80;
    while(1) {
      
      char x15547 = *x80;
      int x15548 = x15547!=('|');
      /* VAR */ int ite29819 = 0;
      if(x15548) {
        char x35985 = *x80;
        int x35986 = x35985!=('\n');
        ite29819 = x35986;
      } else {
        
        ite29819 = 0;
      };
      int x28421 = ite29819;
      if (!(x28421)) break; 
      
      x80 += 1;
    };
    char* x15554 = x15546;
    int x15555 = x80 - x15554;
    char* x15556 = x15546;
    char* x15557 = strncpy(x16801, x15556, x15555);
    x80 += 1;
    struct NATIONRecord* x17519 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x17519, 0, 1 * sizeof(struct NATIONRecord));
    x17519->N_NATIONKEY = x15517; x17519->N_NAME = x16778; x17519->N_REGIONKEY = x15541; x17519->N_COMMENT = x16801; x17519->next = NULL;
    int x105 = x81;
    int x21863 = x17519==(NULL);
    /* VAR */ int ite29842 = 0;
    if(x21863) {
      ite29842 = 1;
    } else {
      
      char* x36008 = x17519->N_NAME;
      int x36009 = x36008==(NULL);
      /* VAR */ int x36010 = 0;
      if(x36009) {
        x36010 = 1;
      } else {
        
        int x36013 = strcmp(x36008, "");
        int x36014 = !(x36013);
        x36010 = x36014;
      };
      int x36017 = x36010;
      ite29842 = x36017;
    };
    int x28437 = ite29842;
    if(x28437) {
      *(x16755 + x105) = (const struct NATIONRecord){0};
    } else {
      
      struct NATIONRecord x16823 = *x17519;
      *(x16755 + x105) = x16823;
      struct NATIONRecord* x16825 = &(x16755[x105]);
      x17519 = x16825;
    };
    int x107 = x81;
    int x108 = x107+(1);
    x81 = x108;
  };
  int x112 = 0;
  for(; x112 < 1 ; x112 += 1) {
    
    double* x36864 = (double*)malloc(1 * sizeof(double));
    memset(x36864, 0, 1 * sizeof(double));
    struct AGGRecord_String* x36865 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x36865, 0, 1 * sizeof(struct AGGRecord_String));
    x36865->key = "Total"; x36865->aggs = x36864;
    struct WindowRecord_Int_Double* x36868 = (struct WindowRecord_Int_Double*)malloc(48000000 * sizeof(struct WindowRecord_Int_Double));
    memset(x36868, 0, 48000000 * sizeof(struct WindowRecord_Int_Double));
    struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x36869 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1048576 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x36869, 0, 1048576 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    struct NATIONRecord_SUPPLIERRecord* x36870 = (struct NATIONRecord_SUPPLIERRecord*)malloc(1048576 * sizeof(struct NATIONRecord_SUPPLIERRecord));
    memset(x36870, 0, 1048576 * sizeof(struct NATIONRecord_SUPPLIERRecord));
    struct NATIONRecord* x36871 = (struct NATIONRecord*)malloc(1048576 * sizeof(struct NATIONRecord));
    memset(x36871, 0, 1048576 * sizeof(struct NATIONRecord));
    /* VAR */ int x36872 = 0;
    struct NATIONRecord_SUPPLIERRecord* x36873 = (struct NATIONRecord_SUPPLIERRecord*)malloc(80000 * sizeof(struct NATIONRecord_SUPPLIERRecord));
    memset(x36873, 0, 80000 * sizeof(struct NATIONRecord_SUPPLIERRecord));
    /* VAR */ int x36874 = 0;
    while(1) {
      
      int x14216 = x36874;
      int x14217 = x14216<(80000);
      if (!(x14217)) break; 
      
      int x14218 = x36874;
      struct NATIONRecord_SUPPLIERRecord* x17551 = (struct NATIONRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord));
      memset(x17551, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord));
      x17551->N_NATIONKEY = 0; x17551->N_NAME = ""; x17551->N_REGIONKEY = 0; x17551->N_COMMENT = ""; x17551->S_SUPPKEY = 0; x17551->S_NAME = ""; x17551->S_ADDRESS = ""; x17551->S_NATIONKEY = 0; x17551->S_PHONE = ""; x17551->S_ACCTBAL = 0.0; x17551->S_COMMENT = ""; x17551->next = NULL;
      int x21897 = x17551==(NULL);
      /* VAR */ int ite30620 = 0;
      if(x21897) {
        ite30620 = 1;
      } else {
        
        char* x36886 = x17551->N_NAME;
        int x36887 = x36886==(NULL);
        /* VAR */ int x36888 = 0;
        if(x36887) {
          x36888 = 1;
        } else {
          
          int x36891 = strcmp(x36886, "");
          int x36892 = !(x36891);
          x36888 = x36892;
        };
        int x36895 = x36888;
        ite30620 = x36895;
      };
      int x28990 = ite30620;
      if(x28990) {
        *(x36873 + x14218) = (const struct NATIONRecord_SUPPLIERRecord){0};
      } else {
        
        struct NATIONRecord_SUPPLIERRecord x16850 = *x17551;
        *(x36873 + x14218) = x16850;
        struct NATIONRecord_SUPPLIERRecord* x16852 = &(x36873[x14218]);
        x17551 = x16852;
      };
      int x14221 = x36874;
      int x14222 = x14221+(1);
      x36874 = x14222;
    };
    /* VAR */ int x36908 = 0;
    struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x36909 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(6400000 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x36909, 0, 6400000 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    /* VAR */ int x36910 = 0;
    while(1) {
      
      int x14228 = x36910;
      int x14229 = x14228<(6400000);
      if (!(x14229)) break; 
      
      int x14230 = x36910;
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x17571 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x17571, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      x17571->N_NATIONKEY = 0; x17571->N_NAME = ""; x17571->N_REGIONKEY = 0; x17571->N_COMMENT = ""; x17571->S_SUPPKEY = 0; x17571->S_NAME = ""; x17571->S_ADDRESS = ""; x17571->S_NATIONKEY = 0; x17571->S_PHONE = ""; x17571->S_ACCTBAL = 0.0; x17571->S_COMMENT = ""; x17571->PS_PARTKEY = 0; x17571->PS_SUPPKEY = 0; x17571->PS_AVAILQTY = 0; x17571->PS_SUPPLYCOST = 0.0; x17571->PS_COMMENT = ""; x17571->next = NULL;
      int x21920 = x17571==(NULL);
      /* VAR */ int ite30651 = 0;
      if(x21920) {
        ite30651 = 1;
      } else {
        
        char* x36922 = x17571->N_NAME;
        int x36923 = x36922==(NULL);
        /* VAR */ int x36924 = 0;
        if(x36923) {
          x36924 = 1;
        } else {
          
          int x36927 = strcmp(x36922, "");
          int x36928 = !(x36927);
          x36924 = x36928;
        };
        int x36931 = x36924;
        ite30651 = x36931;
      };
      int x29012 = ite30651;
      if(x29012) {
        *(x36909 + x14230) = (const struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord){0};
      } else {
        
        struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x16868 = *x17571;
        *(x36909 + x14230) = x16868;
        struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x16870 = &(x36909[x14230]);
        x17571 = x16870;
      };
      int x14233 = x36910;
      int x14234 = x14233+(1);
      x36910 = x14234;
    };
    /* VAR */ int x36944 = 0;
    struct WindowRecord_Int_Double* x36945 = (struct WindowRecord_Int_Double*)malloc(1600000 * sizeof(struct WindowRecord_Int_Double));
    memset(x36945, 0, 1600000 * sizeof(struct WindowRecord_Int_Double));
    /* VAR */ int x36946 = 0;
    while(1) {
      
      int x14240 = x36946;
      int x14241 = x14240<(1600000);
      if (!(x14241)) break; 
      
      int x14242 = x36946;
      struct WindowRecord_Int_Double* x17591 = (struct WindowRecord_Int_Double*)malloc(1 * sizeof(struct WindowRecord_Int_Double));
      memset(x17591, 0, 1 * sizeof(struct WindowRecord_Int_Double));
      x17591->key = 0; x17591->wnd = 0.0;
      int x21943 = x17591==(NULL);
      if(x21943) {
        *(x36945 + x14242) = (const struct WindowRecord_Int_Double){0};
      } else {
        
        struct WindowRecord_Int_Double x16886 = *x17591;
        *(x36945 + x14242) = x16886;
        struct WindowRecord_Int_Double* x16888 = &(x36945[x14242]);
        x17591 = x16888;
      };
      int x14245 = x36946;
      int x14246 = x14245+(1);
      x36946 = x14246;
    };
    /* VAR */ struct timeval x36964 = x14546;
    struct timeval x36965 = x36964;
    /* VAR */ struct timeval x36966 = x14546;
    struct timeval x36967 = x36966;
    /* VAR */ struct timeval x36968 = x14546;
    struct timeval x36969 = x36968;
    struct timeval* x36970 = &x36967;
    gettimeofday(x36970, NULL);
    /* VAR */ int x36972 = 0;
    /* VAR */ int x36973 = 0;
    /* VAR */ int x36974 = 0;
    /* VAR */ int x36975 = 0;
    /* VAR */ struct AGGRecord_String* x36976 = NULL;
    while(1) {
      
      int x36978 = x36973;
      int x36979 = x36978<(x15494);
      if (!(x36979)) break; 
      
      int x2926 = x36973;
      struct NATIONRecord* x181 = &(x16755[x2926]);
      char* x183 = x181->N_NAME;
      int x24483 = strcmp(x183, "UNITED KINGDOM");
      int x24484 = x24483==(0);
      if(x24484) {
        int x185 = x181->N_NATIONKEY;
        int x5548 = x185%(1048576);
        struct NATIONRecord* x7005 = &(x36871[x5548]);
        /* VAR */ struct NATIONRecord* list7006 = x7005;
        struct NATIONRecord* x7007 = list7006;
        int x21980 = x7007==(NULL);
        /* VAR */ int ite30720 = 0;
        if(x21980) {
          ite30720 = 1;
        } else {
          
          char* x36995 = x7007->N_NAME;
          int x36996 = x36995==(NULL);
          /* VAR */ int x36997 = 0;
          if(x36996) {
            x36997 = 1;
          } else {
            
            int x37000 = strcmp(x36995, "");
            int x37001 = !(x37000);
            x36997 = x37001;
          };
          int x37004 = x36997;
          ite30720 = x37004;
        };
        int x29070 = ite30720;
        if(x29070) {
          list7006 = NULL;
          struct NATIONRecord* x7014 = list7006;
          int x21987 = x7014==(NULL);
          /* VAR */ int ite30735 = 0;
          if(x21987) {
            ite30735 = 1;
          } else {
            
            char* x37015 = x7014->N_NAME;
            int x37016 = x37015==(NULL);
            /* VAR */ int x37017 = 0;
            if(x37016) {
              x37017 = 1;
            } else {
              
              int x37020 = strcmp(x37015, "");
              int x37021 = !(x37020);
              x37017 = x37021;
            };
            int x37024 = x37017;
            ite30735 = x37024;
          };
          int x29076 = ite30735;
          if(x29076) {
            *(x36871 + x5548) = (const struct NATIONRecord){0};
          } else {
            
            struct NATIONRecord x16928 = *x7014;
            *(x36871 + x5548) = x16928;
            struct NATIONRecord* x16930 = &(x36871[x5548]);
            list7006 = x16930;
          };
        };
        int x21997 = x7005==(NULL);
        /* VAR */ int ite30753 = 0;
        if(x21997) {
          ite30753 = 1;
        } else {
          
          char* x37038 = x7005->N_NAME;
          int x37039 = x37038==(NULL);
          /* VAR */ int x37040 = 0;
          if(x37039) {
            x37040 = 1;
          } else {
            
            int x37043 = strcmp(x37038, "");
            int x37044 = !(x37043);
            x37040 = x37044;
          };
          int x37047 = x37040;
          ite30753 = x37047;
        };
        int x29085 = ite30753;
        if(x29085) {
          x181->next = NULL;
          int x22003 = x181==(NULL);
          /* VAR */ int ite30767 = 0;
          if(x22003) {
            ite30767 = 1;
          } else {
            
            int x37057 = x183==(NULL);
            /* VAR */ int x37058 = 0;
            if(x37057) {
              x37058 = 1;
            } else {
              
              int x37061 = strcmp(x183, "");
              int x37062 = !(x37061);
              x37058 = x37062;
            };
            int x37065 = x37058;
            ite30767 = x37065;
          };
          int x29090 = ite30767;
          if(x29090) {
            *(x36871 + x5548) = (const struct NATIONRecord){0};
          } else {
            
            struct NATIONRecord x16938 = *x181;
            *(x36871 + x5548) = x16938;
            struct NATIONRecord* x16940 = &(x36871[x5548]);
            x181 = x16940;
          };
          list7006 = x181;
        } else {
          
          struct NATIONRecord* x8971 = x7005->next;
          x181->next = x8971;
          x7005->next = x181;
        };
      };
      int x2934 = x36973;
      int x190 = x2934+(1);
      x36973 = x190;
    };
    while(1) {
      
      int x37083 = x36972;
      int x37084 = x37083<(x15373);
      if (!(x37084)) break; 
      
      int x2943 = x36972;
      struct SUPPLIERRecord* x199 = &(x16632[x2943]);
      int x201 = x199->S_NATIONKEY;
      int x5571 = x201%(1048576);
      struct NATIONRecord* x7037 = &(x36871[x5571]);
      int x22028 = x7037!=(NULL);
      /* VAR */ int ite30800 = 0;
      if(x22028) {
        char* x37093 = x7037->N_NAME;
        int x37094 = x37093!=(NULL);
        /* VAR */ int x37095 = 0;
        if(x37094) {
          int x37097 = strcmp(x37093, "");
          x37095 = x37097;
        } else {
          
          x37095 = 0;
        };
        int x37101 = x37095;
        ite30800 = x37101;
      } else {
        
        ite30800 = 0;
      };
      int x29113 = ite30800;
      if(x29113) {
        /* VAR */ struct NATIONRecord* current7556 = x7037;
        while(1) {
          
          struct NATIONRecord* x7558 = current7556;
          int x22036 = x7558!=(NULL);
          /* VAR */ int ite30816 = 0;
          if(x22036) {
            char* x37113 = x7558->N_NAME;
            int x37114 = x37113!=(NULL);
            /* VAR */ int x37115 = 0;
            if(x37114) {
              int x37117 = strcmp(x37113, "");
              x37115 = x37117;
            } else {
              
              x37115 = 0;
            };
            int x37121 = x37115;
            ite30816 = x37121;
          } else {
            
            ite30816 = 0;
          };
          int x29120 = ite30816;
          if (!(x29120)) break; 
          
          struct NATIONRecord* x7560 = current7556;
          struct NATIONRecord* x9034 = x7560->next;
          struct NATIONRecord* x7562 = current7556;
          int x7087 = x7562->N_NATIONKEY;
          int x7088 = x7087==(x201);
          if(x7088) {
            char* x998 = x7562->N_NAME;
            int x999 = x7562->N_REGIONKEY;
            char* x1000 = x7562->N_COMMENT;
            int x1001 = x199->S_SUPPKEY;
            char* x1002 = x199->S_NAME;
            char* x1003 = x199->S_ADDRESS;
            char* x1004 = x199->S_PHONE;
            double x1005 = x199->S_ACCTBAL;
            char* x1006 = x199->S_COMMENT;
            int x14317 = x36872;
            struct NATIONRecord_SUPPLIERRecord* x14318 = &(x36873[x14317]);
            x14318->N_NATIONKEY = x7087;
            x14318->N_NAME = x998;
            x14318->N_REGIONKEY = x999;
            x14318->N_COMMENT = x1000;
            x14318->S_SUPPKEY = x1001;
            x14318->S_NAME = x1002;
            x14318->S_ADDRESS = x1003;
            x14318->S_NATIONKEY = x201;
            x14318->S_PHONE = x1004;
            x14318->S_ACCTBAL = x1005;
            x14318->S_COMMENT = x1006;
            x14318->next = NULL;
            int x14331 = x36872;
            int x14332 = x14331+(1);
            x36872 = x14332;
            int x222 = x14318->S_SUPPKEY;
            int x5594 = x222%(1048576);
            struct NATIONRecord_SUPPLIERRecord* x7060 = &(x36870[x5594]);
            /* VAR */ struct NATIONRecord_SUPPLIERRecord* list7061 = x7060;
            struct NATIONRecord_SUPPLIERRecord* x7062 = list7061;
            int x22077 = x7062==(NULL);
            /* VAR */ int ite30865 = 0;
            if(x22077) {
              ite30865 = 1;
            } else {
              
              char* x37167 = x7062->N_NAME;
              int x37168 = x37167==(NULL);
              /* VAR */ int x37169 = 0;
              if(x37168) {
                x37169 = 1;
              } else {
                
                int x37172 = strcmp(x37167, "");
                int x37173 = !(x37172);
                x37169 = x37173;
              };
              int x37176 = x37169;
              ite30865 = x37176;
            };
            int x29160 = ite30865;
            if(x29160) {
              list7061 = NULL;
              struct NATIONRecord_SUPPLIERRecord* x7069 = list7061;
              int x22084 = x7069==(NULL);
              /* VAR */ int ite30880 = 0;
              if(x22084) {
                ite30880 = 1;
              } else {
                
                char* x37187 = x7069->N_NAME;
                int x37188 = x37187==(NULL);
                /* VAR */ int x37189 = 0;
                if(x37188) {
                  x37189 = 1;
                } else {
                  
                  int x37192 = strcmp(x37187, "");
                  int x37193 = !(x37192);
                  x37189 = x37193;
                };
                int x37196 = x37189;
                ite30880 = x37196;
              };
              int x29166 = ite30880;
              if(x29166) {
                *(x36870 + x5594) = (const struct NATIONRecord_SUPPLIERRecord){0};
              } else {
                
                struct NATIONRecord_SUPPLIERRecord x17010 = *x7069;
                *(x36870 + x5594) = x17010;
                struct NATIONRecord_SUPPLIERRecord* x17012 = &(x36870[x5594]);
                list7061 = x17012;
              };
            };
            int x22094 = x7060==(NULL);
            /* VAR */ int ite30898 = 0;
            if(x22094) {
              ite30898 = 1;
            } else {
              
              char* x37210 = x7060->N_NAME;
              int x37211 = x37210==(NULL);
              /* VAR */ int x37212 = 0;
              if(x37211) {
                x37212 = 1;
              } else {
                
                int x37215 = strcmp(x37210, "");
                int x37216 = !(x37215);
                x37212 = x37216;
              };
              int x37219 = x37212;
              ite30898 = x37219;
            };
            int x29175 = ite30898;
            if(x29175) {
              x14318->next = NULL;
              int x22100 = x14318==(NULL);
              /* VAR */ int ite30912 = 0;
              if(x22100) {
                ite30912 = 1;
              } else {
                
                char* x37229 = x14318->N_NAME;
                int x37230 = x37229==(NULL);
                /* VAR */ int x37231 = 0;
                if(x37230) {
                  x37231 = 1;
                } else {
                  
                  int x37234 = strcmp(x37229, "");
                  int x37235 = !(x37234);
                  x37231 = x37235;
                };
                int x37238 = x37231;
                ite30912 = x37238;
              };
              int x29180 = ite30912;
              if(x29180) {
                *(x36870 + x5594) = (const struct NATIONRecord_SUPPLIERRecord){0};
              } else {
                
                struct NATIONRecord_SUPPLIERRecord x17020 = *x14318;
                *(x36870 + x5594) = x17020;
                struct NATIONRecord_SUPPLIERRecord* x17022 = &(x36870[x5594]);
                x14318 = x17022;
              };
              list7061 = x14318;
            } else {
              
              struct NATIONRecord_SUPPLIERRecord* x9069 = x7060->next;
              x14318->next = x9069;
              x7060->next = x14318;
            };
          };
          current7556 = x9034;
        };
      };
      int x2989 = x36972;
      int x230 = x2989+(1);
      x36972 = x230;
    };
    while(1) {
      
      int x37257 = x36974;
      int x37258 = x37257<(x15303);
      if (!(x37258)) break; 
      
      int x2999 = x36974;
      struct PARTSUPPRecord* x240 = &(x16557[x2999]);
      int x242 = x240->PS_SUPPKEY;
      int x5618 = x242%(1048576);
      struct NATIONRecord_SUPPLIERRecord* x7137 = &(x36870[x5618]);
      int x22127 = x7137!=(NULL);
      /* VAR */ int ite30947 = 0;
      if(x22127) {
        char* x37267 = x7137->N_NAME;
        int x37268 = x37267!=(NULL);
        /* VAR */ int x37269 = 0;
        if(x37268) {
          int x37271 = strcmp(x37267, "");
          x37269 = x37271;
        } else {
          
          x37269 = 0;
        };
        int x37275 = x37269;
        ite30947 = x37275;
      } else {
        
        ite30947 = 0;
      };
      int x29204 = ite30947;
      if(x29204) {
        /* VAR */ struct NATIONRecord_SUPPLIERRecord* current7661 = x7137;
        while(1) {
          
          struct NATIONRecord_SUPPLIERRecord* x7663 = current7661;
          int x22135 = x7663!=(NULL);
          /* VAR */ int ite30963 = 0;
          if(x22135) {
            char* x37287 = x7663->N_NAME;
            int x37288 = x37287!=(NULL);
            /* VAR */ int x37289 = 0;
            if(x37288) {
              int x37291 = strcmp(x37287, "");
              x37289 = x37291;
            } else {
              
              x37289 = 0;
            };
            int x37295 = x37289;
            ite30963 = x37295;
          } else {
            
            ite30963 = 0;
          };
          int x29211 = ite30963;
          if (!(x29211)) break; 
          
          struct NATIONRecord_SUPPLIERRecord* x7665 = current7661;
          struct NATIONRecord_SUPPLIERRecord* x9138 = x7665->next;
          struct NATIONRecord_SUPPLIERRecord* x7667 = current7661;
          int x7192 = x7667->S_SUPPKEY;
          int x7193 = x7192==(x242);
          if(x7193) {
            int x1062 = x7667->N_NATIONKEY;
            char* x1063 = x7667->N_NAME;
            int x1064 = x7667->N_REGIONKEY;
            char* x1065 = x7667->N_COMMENT;
            char* x1066 = x7667->S_NAME;
            char* x1067 = x7667->S_ADDRESS;
            int x1068 = x7667->S_NATIONKEY;
            char* x1069 = x7667->S_PHONE;
            double x1070 = x7667->S_ACCTBAL;
            char* x1071 = x7667->S_COMMENT;
            int x1072 = x240->PS_PARTKEY;
            int x1073 = x240->PS_AVAILQTY;
            double x1074 = x240->PS_SUPPLYCOST;
            char* x1075 = x240->PS_COMMENT;
            int x14393 = x36908;
            struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x14394 = &(x36909[x14393]);
            x14394->N_NATIONKEY = x1062;
            x14394->N_NAME = x1063;
            x14394->N_REGIONKEY = x1064;
            x14394->N_COMMENT = x1065;
            x14394->S_SUPPKEY = x7192;
            x14394->S_NAME = x1066;
            x14394->S_ADDRESS = x1067;
            x14394->S_NATIONKEY = x1068;
            x14394->S_PHONE = x1069;
            x14394->S_ACCTBAL = x1070;
            x14394->S_COMMENT = x1071;
            x14394->PS_PARTKEY = x1072;
            x14394->PS_SUPPKEY = x242;
            x14394->PS_AVAILQTY = x1073;
            x14394->PS_SUPPLYCOST = x1074;
            x14394->PS_COMMENT = x1075;
            x14394->next = NULL;
            int x14412 = x36908;
            int x14413 = x14412+(1);
            x36908 = x14413;
            int x263 = x14394->PS_PARTKEY;
            int x5646 = x263%(1048576);
            struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x7165 = &(x36869[x5646]);
            /* VAR */ struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* list7166 = x7165;
            struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x7167 = list7166;
            int x22186 = x7167==(NULL);
            /* VAR */ int ite31022 = 0;
            if(x22186) {
              ite31022 = 1;
            } else {
              
              char* x37351 = x7167->N_NAME;
              int x37352 = x37351==(NULL);
              /* VAR */ int x37353 = 0;
              if(x37352) {
                x37353 = 1;
              } else {
                
                int x37356 = strcmp(x37351, "");
                int x37357 = !(x37356);
                x37353 = x37357;
              };
              int x37360 = x37353;
              ite31022 = x37360;
            };
            int x29261 = ite31022;
            if(x29261) {
              list7166 = NULL;
              struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x7174 = list7166;
              int x22193 = x7174==(NULL);
              /* VAR */ int ite31037 = 0;
              if(x22193) {
                ite31037 = 1;
              } else {
                
                char* x37371 = x7174->N_NAME;
                int x37372 = x37371==(NULL);
                /* VAR */ int x37373 = 0;
                if(x37372) {
                  x37373 = 1;
                } else {
                  
                  int x37376 = strcmp(x37371, "");
                  int x37377 = !(x37376);
                  x37373 = x37377;
                };
                int x37380 = x37373;
                ite31037 = x37380;
              };
              int x29267 = ite31037;
              if(x29267) {
                *(x36869 + x5646) = (const struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord){0};
              } else {
                
                struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x17103 = *x7174;
                *(x36869 + x5646) = x17103;
                struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x17105 = &(x36869[x5646]);
                list7166 = x17105;
              };
            };
            int x22203 = x7165==(NULL);
            /* VAR */ int ite31055 = 0;
            if(x22203) {
              ite31055 = 1;
            } else {
              
              char* x37394 = x7165->N_NAME;
              int x37395 = x37394==(NULL);
              /* VAR */ int x37396 = 0;
              if(x37395) {
                x37396 = 1;
              } else {
                
                int x37399 = strcmp(x37394, "");
                int x37400 = !(x37399);
                x37396 = x37400;
              };
              int x37403 = x37396;
              ite31055 = x37403;
            };
            int x29276 = ite31055;
            if(x29276) {
              x14394->next = NULL;
              int x22209 = x14394==(NULL);
              /* VAR */ int ite31069 = 0;
              if(x22209) {
                ite31069 = 1;
              } else {
                
                char* x37413 = x14394->N_NAME;
                int x37414 = x37413==(NULL);
                /* VAR */ int x37415 = 0;
                if(x37414) {
                  x37415 = 1;
                } else {
                  
                  int x37418 = strcmp(x37413, "");
                  int x37419 = !(x37418);
                  x37415 = x37419;
                };
                int x37422 = x37415;
                ite31069 = x37422;
              };
              int x29281 = ite31069;
              if(x29281) {
                *(x36869 + x5646) = (const struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord){0};
              } else {
                
                struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x17113 = *x14394;
                *(x36869 + x5646) = x17113;
                struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x17115 = &(x36869[x5646]);
                x14394 = x17115;
              };
              list7166 = x14394;
            } else {
              
              struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9178 = x7165->next;
              x14394->next = x9178;
              x7165->next = x14394;
            };
          };
          current7661 = x9138;
        };
      };
      int x3055 = x36974;
      int x271 = x3055+(1);
      x36974 = x271;
    };
    int x26531 = 0;
    for(; x26531 < 1048576 ; x26531 += 1) {
      
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x26532 = &(x36869[x26531]);
      int x26533 = x26532!=(NULL);
      /* VAR */ int ite31159 = 0;
      if(x26533) {
        char* x37515 = x26532->N_NAME;
        int x37516 = x37515!=(NULL);
        /* VAR */ int x37517 = 0;
        if(x37516) {
          int x37519 = strcmp(x37515, "");
          x37517 = x37519;
        } else {
          
          x37517 = 0;
        };
        int x37523 = x37517;
        ite31159 = x37523;
      } else {
        
        ite31159 = 0;
      };
      int x29344 = ite31159;
      if(x29344) {
        /* VAR */ double acc7254 = 0.0;
        /* VAR */ struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* current8231 = x26532;
        while(1) {
          
          struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x8233 = current8231;
          int x22240 = x8233!=(NULL);
          /* VAR */ int ite31176 = 0;
          if(x22240) {
            char* x37536 = x8233->N_NAME;
            int x37537 = x37536!=(NULL);
            /* VAR */ int x37538 = 0;
            if(x37537) {
              int x37540 = strcmp(x37536, "");
              x37538 = x37540;
            } else {
              
              x37538 = 0;
            };
            int x37544 = x37538;
            ite31176 = x37544;
          } else {
            
            ite31176 = 0;
          };
          int x29352 = ite31176;
          if (!(x29352)) break; 
          
          struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x8235 = current8231;
          struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9216 = x8235->next;
          struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x8237 = current8231;
          double x7747 = acc7254;
          double x7748 = x8237->PS_SUPPLYCOST;
          int x7749 = x8237->PS_AVAILQTY;
          double x7751 = x7748*(x7749);
          double x7752 = x7747+(x7751);
          acc7254 = x7752;
          current8231 = x9216;
        };
        double x7265 = acc7254;
        int x5699 = x26532->PS_PARTKEY;
        int x14462 = x36944;
        struct WindowRecord_Int_Double* x14463 = &(x36945[x14462]);
        x14463->key = x5699;
        x14463->wnd = x7265;
        int x14466 = x36944;
        int x14467 = x14466+(1);
        x36944 = x14467;
        int x5701 = x36975;
        int x22265 = x14463==(NULL);
        if(x22265) {
          *(x36868 + x5701) = (const struct WindowRecord_Int_Double){0};
        } else {
          
          struct WindowRecord_Int_Double x17160 = *x14463;
          *(x36868 + x5701) = x17160;
          struct WindowRecord_Int_Double* x17162 = &(x36868[x5701]);
          x14463 = x17162;
        };
        int x5703 = x36975;
        int x5704 = x5703+(1);
        x36975 = x5704;
      };
    };
    /* VAR */ int x37579 = 0;
    while(1) {
      
      int x37581 = x37579;
      int x37582 = x36975;
      int x37583 = x37581<(x37582);
      if (!(x37583)) break; 
      
      int x306 = x37579;
      struct WindowRecord_Int_Double* x307 = &(x36868[x306]);
      int x308 = x37579;
      int x309 = x308+(1);
      x37579 = x309;
      double* x316 = x36865->aggs;
      double x330 = x316[0];
      double x331 = x307->wnd;
      double x332 = x330+(x331);
      *x316 = x332;
    };
    x36976 = x36865;
    struct AGGRecord_String* x37595 = x36976;
    int* x37634 = &(x37615);
    GTree* x37635 = g_tree_new(x37634);
    /* VAR */ int x37636 = 0;
    /* VAR */ int x37637 = 0;
    /* VAR */ int x37638 = 0;
    while(1) {
      
      int x37640 = x37638;
      int x37641 = x36975;
      int x37642 = x37640<(x37641);
      if (!(x37642)) break; 
      
      int x681 = x37638;
      struct WindowRecord_Int_Double* x682 = &(x36868[x681]);
      int x683 = x37638;
      int x684 = x683+(1);
      x37638 = x684;
      double x688 = x682->wnd;
      double* x689 = x37595->aggs;
      double x690 = x689[0];
      double x691 = x690*(1.0E-4);
      int x692 = x688>(x691);
      if(x692) {
        g_tree_insert(x37635, x682, x682);
      };
    };
    while(1) {
      
      int x3634 = x37636;
      int x698 = !(x3634);
      /* VAR */ int ite31298 = 0;
      if(x698) {
        int x37660 = g_tree_nnodes(x37635);
        int x37661 = x37660!=(0);
        ite31298 = x37661;
      } else {
        
        ite31298 = 0;
      };
      int x29459 = ite31298;
      if (!(x29459)) break; 
      
      void* x19361 = NULL;
      void** x19369 = &(x19361);
      g_tree_foreach(x37635, x19368, x19369);
      struct WindowRecord_Int_Double* x19371 = (struct WindowRecord_Int_Double*){x19361};
      int x19372 = g_tree_remove(x37635, x19371);
      if(0) {
        x37636 = 1;
      } else {
        
        int x711 = x19371->key;
        double x712 = x19371->wnd;
        printf("%d|%.2f\n", x711, x712);
        int x3650 = x37637;
        int x715 = x3650+(1);
        x37637 = x715;
      };
    };
    int x37686 = x37637;
    printf("(%d rows)\n", x37686);
    struct timeval* x37688 = &x36969;
    gettimeofday(x37688, NULL);
    struct timeval* x37690 = &x36965;
    struct timeval* x37691 = &x36969;
    struct timeval* x37692 = &x36967;
    long x37693 = timeval_subtract(x37690, x37691, x37692);
    printf("Generated code run in %ld milliseconds.\n", x37693);
  };
}
/* ----------- FUNCTIONS ----------- */
int x37615(struct WindowRecord_Int_Double* x355, struct WindowRecord_Int_Double* x356) {
  double x357 = x355->wnd;
  double x358 = x356->wnd;
  int x359 = x357>(x358);
  /* VAR */ int ite29424 = 0;
  if(x359) {
    ite29424 = -1;
  } else {
    
    int x29426 = x357<(x358);
    /* VAR */ int ite29428 = 0;
    if(x29426) {
      ite29428 = 1;
    } else {
      
      ite29428 = 0;
    };
    int x29427 = ite29428;
    ite29424 = x29427;
  };
  int x362 = ite29424;
  return x362; 
}

int x19368(void* x19362, void* x19363, void* x19364) {
  struct WindowRecord_Int_Double** x19365 = (struct WindowRecord_Int_Double**){x19364};
  struct WindowRecord_Int_Double* x19366 = (struct WindowRecord_Int_Double*){x19363};
  pointer_assign(x19365, x19366);
  return 1; 
}
