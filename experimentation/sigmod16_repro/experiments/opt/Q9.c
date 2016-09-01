#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct NATIONRecord;
  struct ORDERSRecord;
  struct PARTRecord;
  struct AGGRecord_Q9GRPRecord;
  struct Q9GRPRecord;
  struct SUPPLIERRecord;
  struct Set_AGGRecord_Q9GRPRecord;
  struct PARTSUPPRecord;
  
  struct LINEITEMRecord {
  int L_ORDERKEY;
  int L_PARTKEY;
  int L_SUPPKEY;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  int N_NAME;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  int O_ORDERDATE;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  char* P_NAME;
  };
  
  struct AGGRecord_Q9GRPRecord {
  struct Q9GRPRecord* key;
  double aggs;
  };
  
  struct Q9GRPRecord {
  int NATION;
  int O_YEAR;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  int S_NATIONKEY;
  };
  
  struct Set_AGGRecord_Q9GRPRecord {
  int maxSize;
  struct AGGRecord_Q9GRPRecord* array;
  };
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  double PS_SUPPLYCOST;
  };
  
  


int x54603(char** x28158, char** x28159);

int x54894(struct AGGRecord_Q9GRPRecord* x374, struct AGGRecord_Q9GRPRecord* x375);

int x28535(void* x28529, void* x28530, void* x28531);
/* GLOBAL VARS */

struct timeval x20347;
int main(int argc, char** argv) {
  /* VAR */ int x7510 = 0;
  int x27260 = sizeof(char**);
  GArray* x27261 = g_array_new(0, 1, x27260);
  int x27262 = sizeof(char**);
  GArray* x27263 = g_array_new(0, 1, x27262);
  /* VAR */ int x7513 = 0;
  int* x23606 = (int*)malloc(12000000 * sizeof(int));
  memset(x23606, 0, 12000000 * sizeof(int));
  FILE* x21233 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x21234 = 0;
  int x21235 = x21234;
  int* x21236 = &x21235;
  int x21237 = fscanf(x21233, "%d", x21236);
  pclose(x21233);
  struct PARTRecord* x23613 = (struct PARTRecord*)malloc(x21235 * sizeof(struct PARTRecord));
  memset(x23613, 0, x21235 * sizeof(struct PARTRecord));
  int x21241 = O_RDONLY;
  int x21242 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x21241);
  struct stat x21243 = (struct stat){0};
  /* VAR */ struct stat x21244 = x21243;
  struct stat x21245 = x21244;
  struct stat* x21246 = &x21245;
  int x21247 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x21246);
  size_t x21248 = x21246->st_size;
  int x21249 = PROT_READ;
  int x21250 = MAP_PRIVATE;
  char* x15845 = mmap(NULL, x21248, x21249, x21250, x21242, 0);
  /* VAR */ int x15846 = 0;
  while(1) {
    
    int x5 = x15846;
    int x6 = x5<(x21235);
    /* VAR */ int ite46275 = 0;
    if(x6) {
      char x52510 = *x15845;
      int x52511 = x52510!=('\0');
      ite46275 = x52511;
    } else {
      
      ite46275 = 0;
    };
    int x43503 = ite46275;
    if (!(x43503)) break; 
    
    /* VAR */ int x21258 = 0;
    int x21259 = x21258;
    int* x21260 = &x21259;
    char* x21261 = strntoi_unchecked(x15845, x21260);
    x15845 = x21261;
    char* x23637 = (char*)malloc(56 * sizeof(char));
    memset(x23637, 0, 56 * sizeof(char));
    /* VAR */ char* x21264 = x15845;
    while(1) {
      
      char x21265 = *x15845;
      int x21266 = x21265!=('|');
      /* VAR */ int ite46294 = 0;
      if(x21266) {
        char x52528 = *x15845;
        int x52529 = x52528!=('\n');
        ite46294 = x52529;
      } else {
        
        ite46294 = 0;
      };
      int x43515 = ite46294;
      if (!(x43515)) break; 
      
      x15845 += 1;
    };
    char* x21272 = x21264;
    int x21273 = x15845 - x21272;
    char* x21274 = x21264;
    char* x21275 = strncpy(x23637, x21274, x21273);
    x15845 += 1;
    char* x23655 = (char*)malloc(26 * sizeof(char));
    memset(x23655, 0, 26 * sizeof(char));
    /* VAR */ char* x21283 = x15845;
    while(1) {
      
      char x21284 = *x15845;
      int x21285 = x21284!=('|');
      /* VAR */ int ite46317 = 0;
      if(x21285) {
        char x52550 = *x15845;
        int x52551 = x52550!=('\n');
        ite46317 = x52551;
      } else {
        
        ite46317 = 0;
      };
      int x43531 = ite46317;
      if (!(x43531)) break; 
      
      x15845 += 1;
    };
    char* x21291 = x21283;
    int x21292 = x15845 - x21291;
    char* x21293 = x21283;
    char* x21294 = strncpy(x23655, x21293, x21292);
    x15845 += 1;
    char* x23673 = (char*)malloc(11 * sizeof(char));
    memset(x23673, 0, 11 * sizeof(char));
    /* VAR */ char* x21302 = x15845;
    while(1) {
      
      char x21303 = *x15845;
      int x21304 = x21303!=('|');
      /* VAR */ int ite46340 = 0;
      if(x21304) {
        char x52572 = *x15845;
        int x52573 = x52572!=('\n');
        ite46340 = x52573;
      } else {
        
        ite46340 = 0;
      };
      int x43547 = ite46340;
      if (!(x43547)) break; 
      
      x15845 += 1;
    };
    char* x21310 = x21302;
    int x21311 = x15845 - x21310;
    char* x21312 = x21302;
    char* x21313 = strncpy(x23673, x21312, x21311);
    x15845 += 1;
    char* x23691 = (char*)malloc(26 * sizeof(char));
    memset(x23691, 0, 26 * sizeof(char));
    /* VAR */ char* x21321 = x15845;
    while(1) {
      
      char x21322 = *x15845;
      int x21323 = x21322!=('|');
      /* VAR */ int ite46363 = 0;
      if(x21323) {
        char x52594 = *x15845;
        int x52595 = x52594!=('\n');
        ite46363 = x52595;
      } else {
        
        ite46363 = 0;
      };
      int x43563 = ite46363;
      if (!(x43563)) break; 
      
      x15845 += 1;
    };
    char* x21329 = x21321;
    int x21330 = x15845 - x21329;
    char* x21331 = x21321;
    char* x21332 = strncpy(x23691, x21331, x21330);
    x15845 += 1;
    /* VAR */ int x21339 = 0;
    int x21340 = x21339;
    int* x21341 = &x21340;
    char* x21342 = strntoi_unchecked(x15845, x21341);
    x15845 = x21342;
    char* x23714 = (char*)malloc(11 * sizeof(char));
    memset(x23714, 0, 11 * sizeof(char));
    /* VAR */ char* x21345 = x15845;
    while(1) {
      
      char x21346 = *x15845;
      int x21347 = x21346!=('|');
      /* VAR */ int ite46391 = 0;
      if(x21347) {
        char x52621 = *x15845;
        int x52622 = x52621!=('\n');
        ite46391 = x52622;
      } else {
        
        ite46391 = 0;
      };
      int x43584 = ite46391;
      if (!(x43584)) break; 
      
      x15845 += 1;
    };
    char* x21353 = x21345;
    int x21354 = x15845 - x21353;
    char* x21355 = x21345;
    char* x21356 = strncpy(x23714, x21355, x21354);
    x15845 += 1;
    /* VAR */ double x21363 = 0.0;
    double x21364 = x21363;
    double* x21365 = &x21364;
    char* x21366 = strntod_unchecked(x15845, x21365);
    x15845 = x21366;
    char* x23737 = (char*)malloc(24 * sizeof(char));
    memset(x23737, 0, 24 * sizeof(char));
    /* VAR */ char* x21369 = x15845;
    while(1) {
      
      char x21370 = *x15845;
      int x21371 = x21370!=('|');
      /* VAR */ int ite46419 = 0;
      if(x21371) {
        char x52648 = *x15845;
        int x52649 = x52648!=('\n');
        ite46419 = x52649;
      } else {
        
        ite46419 = 0;
      };
      int x43605 = ite46419;
      if (!(x43605)) break; 
      
      x15845 += 1;
    };
    char* x21377 = x21369;
    int x21378 = x15845 - x21377;
    char* x21379 = x21369;
    char* x21380 = strncpy(x23737, x21379, x21378);
    x15845 += 1;
    struct PARTRecord* x24962 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x24962, 0, 1 * sizeof(struct PARTRecord));
    x24962->P_PARTKEY = x21259; x24962->P_NAME = x23637;
    int x59 = x15846;
    struct PARTRecord x23757 = *x24962;
    *(x23613 + x59) = x23757;
    struct PARTRecord* x23759 = &(x23613[x59]);
    x24962 = x23759;
    int x61 = x15846;
    int x62 = x61+(1);
    x15846 = x62;
  };
  FILE* x21393 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x21394 = 0;
  int x21395 = x21394;
  int* x21396 = &x21395;
  int x21397 = fscanf(x21393, "%d", x21396);
  pclose(x21393);
  struct NATIONRecord* x23770 = (struct NATIONRecord*)malloc(x21395 * sizeof(struct NATIONRecord));
  memset(x23770, 0, x21395 * sizeof(struct NATIONRecord));
  int x21401 = O_RDONLY;
  int x21402 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x21401);
  /* VAR */ struct stat x21403 = x21243;
  struct stat x21404 = x21403;
  struct stat* x21405 = &x21404;
  int x21406 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x21405);
  size_t x21407 = x21405->st_size;
  int x21408 = PROT_READ;
  int x21409 = MAP_PRIVATE;
  char* x15905 = mmap(NULL, x21407, x21408, x21409, x21402, 0);
  /* VAR */ int x15906 = 0;
  while(1) {
    
    int x69 = x15906;
    int x70 = x69<(x21395);
    /* VAR */ int ite46469 = 0;
    if(x70) {
      char x52697 = *x15905;
      int x52698 = x52697!=('\0');
      ite46469 = x52698;
    } else {
      
      ite46469 = 0;
    };
    int x43648 = ite46469;
    if (!(x43648)) break; 
    
    /* VAR */ int x21417 = 0;
    int x21418 = x21417;
    int* x21419 = &x21418;
    char* x21420 = strntoi_unchecked(x15905, x21419);
    x15905 = x21420;
    char* x23793 = (char*)malloc(26 * sizeof(char));
    memset(x23793, 0, 26 * sizeof(char));
    /* VAR */ char* x21423 = x15905;
    while(1) {
      
      char x21424 = *x15905;
      int x21425 = x21424!=('|');
      /* VAR */ int ite46488 = 0;
      if(x21425) {
        char x52715 = *x15905;
        int x52716 = x52715!=('\n');
        ite46488 = x52716;
      } else {
        
        ite46488 = 0;
      };
      int x43660 = ite46488;
      if (!(x43660)) break; 
      
      x15905 += 1;
    };
    char* x21431 = x21423;
    int x21432 = x15905 - x21431;
    char* x21433 = x21423;
    char* x21434 = strncpy(x23793, x21433, x21432);
    x15905 += 1;
    /* VAR */ int x21441 = 0;
    int x21442 = x21441;
    int* x21443 = &x21442;
    char* x21444 = strntoi_unchecked(x15905, x21443);
    x15905 = x21444;
    char* x23816 = (char*)malloc(153 * sizeof(char));
    memset(x23816, 0, 153 * sizeof(char));
    /* VAR */ char* x21447 = x15905;
    while(1) {
      
      char x21448 = *x15905;
      int x21449 = x21448!=('|');
      /* VAR */ int ite46516 = 0;
      if(x21449) {
        char x52742 = *x15905;
        int x52743 = x52742!=('\n');
        ite46516 = x52743;
      } else {
        
        ite46516 = 0;
      };
      int x43681 = ite46516;
      if (!(x43681)) break; 
      
      x15905 += 1;
    };
    char* x21455 = x21447;
    int x21456 = x15905 - x21455;
    char* x21457 = x21447;
    char* x21458 = strncpy(x23816, x21457, x21456);
    x15905 += 1;
    void* x27495 = &(x23793);
    GArray* x27496 = g_array_append_vals(x27263, x27495, 1);
    int x7602 = x7510;
    int x7603 = x7602>(4096);
    if(x7603) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "N_NAME", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "N_NAME");
    };
    /* VAR */ int x27502 = -1;
    int x27503 = x27261->len;
    int x39274 = 0;
    for(; x39274 < x27503 ; x39274 += 1) {
      
      char* x39275 = g_array_index(x27261, char*, x39274);
      int x39276 = strcmp(x39275, x23793);
      int x39277 = !(x39276);
      if(x39277) {
        x27502 = x39274;
        break;
      };
    };
    int x27513 = x27502;
    int x27514 = x27513!=(-1);
    int x7608 = !(x27514);
    if(x7608) {
      int x7609 = x7510;
      int x7610 = x7609+(1);
      x7510 = x7610;
      void* x27520 = &(x23793);
      GArray* x27521 = g_array_append_vals(x27261, x27520, 1);
    };
    /* VAR */ int x27522 = -1;
    int x27523 = x27261->len;
    int x39301 = 0;
    for(; x39301 < x27523 ; x39301 += 1) {
      
      char* x39302 = g_array_index(x27261, char*, x39301);
      int x39303 = strcmp(x39302, x23793);
      int x39304 = !(x39303);
      if(x39304) {
        x27522 = x39301;
        break;
      };
    };
    int x27533 = x27522;
    struct NATIONRecord* x25057 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x25057, 0, 1 * sizeof(struct NATIONRecord));
    x25057->N_NATIONKEY = x21418; x25057->N_NAME = x27533;
    int x92 = x15906;
    struct NATIONRecord x23850 = *x25057;
    *(x23770 + x92) = x23850;
    struct NATIONRecord* x23852 = &(x23770[x92]);
    x25057 = x23852;
    int x94 = x15906;
    int x95 = x94+(1);
    x15906 = x95;
  };
  FILE* x21485 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x21486 = 0;
  int x21487 = x21486;
  int* x21488 = &x21487;
  int x21489 = fscanf(x21485, "%d", x21488);
  pclose(x21485);
  struct ORDERSRecord* x23863 = (struct ORDERSRecord*)malloc(x21487 * sizeof(struct ORDERSRecord));
  memset(x23863, 0, x21487 * sizeof(struct ORDERSRecord));
  int x21493 = O_RDONLY;
  int x21494 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x21493);
  /* VAR */ struct stat x21495 = x21243;
  struct stat x21496 = x21495;
  struct stat* x21497 = &x21496;
  int x21498 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x21497);
  size_t x21499 = x21497->st_size;
  int x21500 = PROT_READ;
  int x21501 = MAP_PRIVATE;
  char* x15950 = mmap(NULL, x21499, x21500, x21501, x21494, 0);
  /* VAR */ int x15951 = 0;
  while(1) {
    
    int x102 = x15951;
    int x103 = x102<(x21487);
    /* VAR */ int ite46617 = 0;
    if(x103) {
      char x52842 = *x15950;
      int x52843 = x52842!=('\0');
      ite46617 = x52843;
    } else {
      
      ite46617 = 0;
    };
    int x43775 = ite46617;
    if (!(x43775)) break; 
    
    /* VAR */ int x21509 = 0;
    int x21510 = x21509;
    int* x21511 = &x21510;
    char* x21512 = strntoi_unchecked(x15950, x21511);
    x15950 = x21512;
    /* VAR */ int x21514 = 0;
    int x21515 = x21514;
    int* x21516 = &x21515;
    char* x21517 = strntoi_unchecked(x15950, x21516);
    x15950 = x21517;
    char x21519 = *x15950;
    /* VAR */ char x21520 = x21519;
    x15950 += 1;
    x15950 += 1;
    /* VAR */ double x21524 = 0.0;
    double x21525 = x21524;
    double* x21526 = &x21525;
    char* x21527 = strntod_unchecked(x15950, x21526);
    x15950 = x21527;
    /* VAR */ int x21529 = 0;
    int x21530 = x21529;
    int* x21531 = &x21530;
    char* x21532 = strntoi_unchecked(x15950, x21531);
    x15950 = x21532;
    /* VAR */ int x21534 = 0;
    int x21535 = x21534;
    int* x21536 = &x21535;
    char* x21537 = strntoi_unchecked(x15950, x21536);
    x15950 = x21537;
    /* VAR */ int x21539 = 0;
    int x21540 = x21539;
    int* x21541 = &x21540;
    char* x21542 = strntoi_unchecked(x15950, x21541);
    x15950 = x21542;
    int x21544 = x21530*(10000);
    int x21545 = x21535*(100);
    int x21546 = x21544+(x21545);
    int x21547 = x21546+(x21540);
    char* x23920 = (char*)malloc(16 * sizeof(char));
    memset(x23920, 0, 16 * sizeof(char));
    /* VAR */ char* x21549 = x15950;
    while(1) {
      
      char x21550 = *x15950;
      int x21551 = x21550!=('|');
      /* VAR */ int ite46670 = 0;
      if(x21551) {
        char x52894 = *x15950;
        int x52895 = x52894!=('\n');
        ite46670 = x52895;
      } else {
        
        ite46670 = 0;
      };
      int x43821 = ite46670;
      if (!(x43821)) break; 
      
      x15950 += 1;
    };
    char* x21557 = x21549;
    int x21558 = x15950 - x21557;
    char* x21559 = x21549;
    char* x21560 = strncpy(x23920, x21559, x21558);
    x15950 += 1;
    char* x23938 = (char*)malloc(16 * sizeof(char));
    memset(x23938, 0, 16 * sizeof(char));
    /* VAR */ char* x21568 = x15950;
    while(1) {
      
      char x21569 = *x15950;
      int x21570 = x21569!=('|');
      /* VAR */ int ite46693 = 0;
      if(x21570) {
        char x52916 = *x15950;
        int x52917 = x52916!=('\n');
        ite46693 = x52917;
      } else {
        
        ite46693 = 0;
      };
      int x43837 = ite46693;
      if (!(x43837)) break; 
      
      x15950 += 1;
    };
    char* x21576 = x21568;
    int x21577 = x15950 - x21576;
    char* x21578 = x21568;
    char* x21579 = strncpy(x23938, x21578, x21577);
    x15950 += 1;
    /* VAR */ int x21586 = 0;
    int x21587 = x21586;
    int* x21588 = &x21587;
    char* x21589 = strntoi_unchecked(x15950, x21588);
    x15950 = x21589;
    char* x23961 = (char*)malloc(80 * sizeof(char));
    memset(x23961, 0, 80 * sizeof(char));
    /* VAR */ char* x21592 = x15950;
    while(1) {
      
      char x21593 = *x15950;
      int x21594 = x21593!=('|');
      /* VAR */ int ite46721 = 0;
      if(x21594) {
        char x52943 = *x15950;
        int x52944 = x52943!=('\n');
        ite46721 = x52944;
      } else {
        
        ite46721 = 0;
      };
      int x43858 = ite46721;
      if (!(x43858)) break; 
      
      x15950 += 1;
    };
    char* x21600 = x21592;
    int x21601 = x15950 - x21600;
    char* x21602 = x21592;
    char* x21603 = strncpy(x23961, x21602, x21601);
    x15950 += 1;
    struct ORDERSRecord* x25190 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x25190, 0, 1 * sizeof(struct ORDERSRecord));
    x25190->O_ORDERKEY = x21510; x25190->O_ORDERDATE = x21547;
    int x136 = x15951;
    struct ORDERSRecord x23981 = *x25190;
    *(x23863 + x136) = x23981;
    struct ORDERSRecord* x23983 = &(x23863[x136]);
    x25190 = x23983;
    int x138 = x15951;
    int x139 = x138+(1);
    x15951 = x139;
  };
  FILE* x21616 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x21617 = 0;
  int x21618 = x21617;
  int* x21619 = &x21618;
  int x21620 = fscanf(x21616, "%d", x21619);
  pclose(x21616);
  struct PARTSUPPRecord* x23994 = (struct PARTSUPPRecord*)malloc(x21618 * sizeof(struct PARTSUPPRecord));
  memset(x23994, 0, x21618 * sizeof(struct PARTSUPPRecord));
  int x21624 = O_RDONLY;
  int x21625 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x21624);
  /* VAR */ struct stat x21626 = x21243;
  struct stat x21627 = x21626;
  struct stat* x21628 = &x21627;
  int x21629 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x21628);
  size_t x21630 = x21628->st_size;
  int x21631 = PROT_READ;
  int x21632 = MAP_PRIVATE;
  char* x15992 = mmap(NULL, x21630, x21631, x21632, x21625, 0);
  /* VAR */ int x15993 = 0;
  while(1) {
    
    int x146 = x15993;
    int x147 = x146<(x21618);
    /* VAR */ int ite46771 = 0;
    if(x147) {
      char x52992 = *x15992;
      int x52993 = x52992!=('\0');
      ite46771 = x52993;
    } else {
      
      ite46771 = 0;
    };
    int x43901 = ite46771;
    if (!(x43901)) break; 
    
    /* VAR */ int x21640 = 0;
    int x21641 = x21640;
    int* x21642 = &x21641;
    char* x21643 = strntoi_unchecked(x15992, x21642);
    x15992 = x21643;
    /* VAR */ int x21645 = 0;
    int x21646 = x21645;
    int* x21647 = &x21646;
    char* x21648 = strntoi_unchecked(x15992, x21647);
    x15992 = x21648;
    /* VAR */ int x21650 = 0;
    int x21651 = x21650;
    int* x21652 = &x21651;
    char* x21653 = strntoi_unchecked(x15992, x21652);
    x15992 = x21653;
    /* VAR */ double x21655 = 0.0;
    double x21656 = x21655;
    double* x21657 = &x21656;
    char* x21658 = strntod_unchecked(x15992, x21657);
    x15992 = x21658;
    char* x24032 = (char*)malloc(200 * sizeof(char));
    memset(x24032, 0, 200 * sizeof(char));
    /* VAR */ char* x21661 = x15992;
    while(1) {
      
      char x21662 = *x15992;
      int x21663 = x21662!=('|');
      /* VAR */ int ite46805 = 0;
      if(x21663) {
        char x53025 = *x15992;
        int x53026 = x53025!=('\n');
        ite46805 = x53026;
      } else {
        
        ite46805 = 0;
      };
      int x43928 = ite46805;
      if (!(x43928)) break; 
      
      x15992 += 1;
    };
    char* x21669 = x21661;
    int x21670 = x15992 - x21669;
    char* x21671 = x21661;
    char* x21672 = strncpy(x24032, x21671, x21670);
    x15992 += 1;
    struct PARTSUPPRecord* x25263 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x25263, 0, 1 * sizeof(struct PARTSUPPRecord));
    x25263->PS_PARTKEY = x21641; x25263->PS_SUPPKEY = x21646; x25263->PS_SUPPLYCOST = x21656;
    int x163 = x15993;
    struct PARTSUPPRecord x24052 = *x25263;
    *(x23994 + x163) = x24052;
    struct PARTSUPPRecord* x24054 = &(x23994[x163]);
    x25263 = x24054;
    int x165 = x15993;
    int x166 = x165+(1);
    x15993 = x166;
  };
  FILE* x21685 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x21686 = 0;
  int x21687 = x21686;
  int* x21688 = &x21687;
  int x21689 = fscanf(x21685, "%d", x21688);
  pclose(x21685);
  struct SUPPLIERRecord* x24065 = (struct SUPPLIERRecord*)malloc(x21687 * sizeof(struct SUPPLIERRecord));
  memset(x24065, 0, x21687 * sizeof(struct SUPPLIERRecord));
  int x21693 = O_RDONLY;
  int x21694 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x21693);
  /* VAR */ struct stat x21695 = x21243;
  struct stat x21696 = x21695;
  struct stat* x21697 = &x21696;
  int x21698 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x21697);
  size_t x21699 = x21697->st_size;
  int x21700 = PROT_READ;
  int x21701 = MAP_PRIVATE;
  char* x16018 = mmap(NULL, x21699, x21700, x21701, x21694, 0);
  /* VAR */ int x16019 = 0;
  while(1) {
    
    int x173 = x16019;
    int x174 = x173<(x21687);
    /* VAR */ int ite46855 = 0;
    if(x174) {
      char x53074 = *x16018;
      int x53075 = x53074!=('\0');
      ite46855 = x53075;
    } else {
      
      ite46855 = 0;
    };
    int x43971 = ite46855;
    if (!(x43971)) break; 
    
    /* VAR */ int x21709 = 0;
    int x21710 = x21709;
    int* x21711 = &x21710;
    char* x21712 = strntoi_unchecked(x16018, x21711);
    x16018 = x21712;
    char* x24088 = (char*)malloc(26 * sizeof(char));
    memset(x24088, 0, 26 * sizeof(char));
    /* VAR */ char* x21715 = x16018;
    while(1) {
      
      char x21716 = *x16018;
      int x21717 = x21716!=('|');
      /* VAR */ int ite46874 = 0;
      if(x21717) {
        char x53092 = *x16018;
        int x53093 = x53092!=('\n');
        ite46874 = x53093;
      } else {
        
        ite46874 = 0;
      };
      int x43983 = ite46874;
      if (!(x43983)) break; 
      
      x16018 += 1;
    };
    char* x21723 = x21715;
    int x21724 = x16018 - x21723;
    char* x21725 = x21715;
    char* x21726 = strncpy(x24088, x21725, x21724);
    x16018 += 1;
    char* x24106 = (char*)malloc(41 * sizeof(char));
    memset(x24106, 0, 41 * sizeof(char));
    /* VAR */ char* x21734 = x16018;
    while(1) {
      
      char x21735 = *x16018;
      int x21736 = x21735!=('|');
      /* VAR */ int ite46897 = 0;
      if(x21736) {
        char x53114 = *x16018;
        int x53115 = x53114!=('\n');
        ite46897 = x53115;
      } else {
        
        ite46897 = 0;
      };
      int x43999 = ite46897;
      if (!(x43999)) break; 
      
      x16018 += 1;
    };
    char* x21742 = x21734;
    int x21743 = x16018 - x21742;
    char* x21744 = x21734;
    char* x21745 = strncpy(x24106, x21744, x21743);
    x16018 += 1;
    /* VAR */ int x21752 = 0;
    int x21753 = x21752;
    int* x21754 = &x21753;
    char* x21755 = strntoi_unchecked(x16018, x21754);
    x16018 = x21755;
    char* x24129 = (char*)malloc(16 * sizeof(char));
    memset(x24129, 0, 16 * sizeof(char));
    /* VAR */ char* x21758 = x16018;
    while(1) {
      
      char x21759 = *x16018;
      int x21760 = x21759!=('|');
      /* VAR */ int ite46925 = 0;
      if(x21760) {
        char x53141 = *x16018;
        int x53142 = x53141!=('\n');
        ite46925 = x53142;
      } else {
        
        ite46925 = 0;
      };
      int x44020 = ite46925;
      if (!(x44020)) break; 
      
      x16018 += 1;
    };
    char* x21766 = x21758;
    int x21767 = x16018 - x21766;
    char* x21768 = x21758;
    char* x21769 = strncpy(x24129, x21768, x21767);
    x16018 += 1;
    /* VAR */ double x21776 = 0.0;
    double x21777 = x21776;
    double* x21778 = &x21777;
    char* x21779 = strntod_unchecked(x16018, x21778);
    x16018 = x21779;
    char* x24152 = (char*)malloc(102 * sizeof(char));
    memset(x24152, 0, 102 * sizeof(char));
    /* VAR */ char* x21782 = x16018;
    while(1) {
      
      char x21783 = *x16018;
      int x21784 = x21783!=('|');
      /* VAR */ int ite46953 = 0;
      if(x21784) {
        char x53168 = *x16018;
        int x53169 = x53168!=('\n');
        ite46953 = x53169;
      } else {
        
        ite46953 = 0;
      };
      int x44041 = ite46953;
      if (!(x44041)) break; 
      
      x16018 += 1;
    };
    char* x21790 = x21782;
    int x21791 = x16018 - x21790;
    char* x21792 = x21782;
    char* x21793 = strncpy(x24152, x21792, x21791);
    x16018 += 1;
    struct SUPPLIERRecord* x25385 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x25385, 0, 1 * sizeof(struct SUPPLIERRecord));
    x25385->S_SUPPKEY = x21710; x25385->S_NATIONKEY = x21753;
    int x213 = x16019;
    struct SUPPLIERRecord x24172 = *x25385;
    *(x24065 + x213) = x24172;
    struct SUPPLIERRecord* x24174 = &(x24065[x213]);
    x25385 = x24174;
    int x215 = x16019;
    int x216 = x215+(1);
    x16019 = x216;
  };
  FILE* x21806 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x21807 = 0;
  int x21808 = x21807;
  int* x21809 = &x21808;
  int x21810 = fscanf(x21806, "%d", x21809);
  pclose(x21806);
  struct LINEITEMRecord* x24185 = (struct LINEITEMRecord*)malloc(x21808 * sizeof(struct LINEITEMRecord));
  memset(x24185, 0, x21808 * sizeof(struct LINEITEMRecord));
  int x21814 = O_RDONLY;
  int x21815 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x21814);
  /* VAR */ struct stat x21816 = x21243;
  struct stat x21817 = x21816;
  struct stat* x21818 = &x21817;
  int x21819 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x21818);
  size_t x21820 = x21818->st_size;
  int x21821 = PROT_READ;
  int x21822 = MAP_PRIVATE;
  char* x16064 = mmap(NULL, x21820, x21821, x21822, x21815, 0);
  /* VAR */ int x16065 = 0;
  while(1) {
    
    int x223 = x16065;
    int x224 = x223<(x21808);
    /* VAR */ int ite47003 = 0;
    if(x224) {
      char x53217 = *x16064;
      int x53218 = x53217!=('\0');
      ite47003 = x53218;
    } else {
      
      ite47003 = 0;
    };
    int x44084 = ite47003;
    if (!(x44084)) break; 
    
    /* VAR */ int x21830 = 0;
    int x21831 = x21830;
    int* x21832 = &x21831;
    char* x21833 = strntoi_unchecked(x16064, x21832);
    x16064 = x21833;
    /* VAR */ int x21835 = 0;
    int x21836 = x21835;
    int* x21837 = &x21836;
    char* x21838 = strntoi_unchecked(x16064, x21837);
    x16064 = x21838;
    /* VAR */ int x21840 = 0;
    int x21841 = x21840;
    int* x21842 = &x21841;
    char* x21843 = strntoi_unchecked(x16064, x21842);
    x16064 = x21843;
    /* VAR */ int x21845 = 0;
    int x21846 = x21845;
    int* x21847 = &x21846;
    char* x21848 = strntoi_unchecked(x16064, x21847);
    x16064 = x21848;
    /* VAR */ double x21850 = 0.0;
    double x21851 = x21850;
    double* x21852 = &x21851;
    char* x21853 = strntod_unchecked(x16064, x21852);
    x16064 = x21853;
    /* VAR */ double x21855 = 0.0;
    double x21856 = x21855;
    double* x21857 = &x21856;
    char* x21858 = strntod_unchecked(x16064, x21857);
    x16064 = x21858;
    /* VAR */ double x21860 = 0.0;
    double x21861 = x21860;
    double* x21862 = &x21861;
    char* x21863 = strntod_unchecked(x16064, x21862);
    x16064 = x21863;
    /* VAR */ double x21865 = 0.0;
    double x21866 = x21865;
    double* x21867 = &x21866;
    char* x21868 = strntod_unchecked(x16064, x21867);
    x16064 = x21868;
    char x21870 = *x16064;
    /* VAR */ char x21871 = x21870;
    x16064 += 1;
    x16064 += 1;
    char x21875 = *x16064;
    /* VAR */ char x21876 = x21875;
    x16064 += 1;
    x16064 += 1;
    /* VAR */ int x21880 = 0;
    int x21881 = x21880;
    int* x21882 = &x21881;
    char* x21883 = strntoi_unchecked(x16064, x21882);
    x16064 = x21883;
    /* VAR */ int x21885 = 0;
    int x21886 = x21885;
    int* x21887 = &x21886;
    char* x21888 = strntoi_unchecked(x16064, x21887);
    x16064 = x21888;
    /* VAR */ int x21890 = 0;
    int x21891 = x21890;
    int* x21892 = &x21891;
    char* x21893 = strntoi_unchecked(x16064, x21892);
    x16064 = x21893;
    /* VAR */ int x21899 = 0;
    int x21900 = x21899;
    int* x21901 = &x21900;
    char* x21902 = strntoi_unchecked(x16064, x21901);
    x16064 = x21902;
    /* VAR */ int x21904 = 0;
    int x21905 = x21904;
    int* x21906 = &x21905;
    char* x21907 = strntoi_unchecked(x16064, x21906);
    x16064 = x21907;
    /* VAR */ int x21909 = 0;
    int x21910 = x21909;
    int* x21911 = &x21910;
    char* x21912 = strntoi_unchecked(x16064, x21911);
    x16064 = x21912;
    /* VAR */ int x21918 = 0;
    int x21919 = x21918;
    int* x21920 = &x21919;
    char* x21921 = strntoi_unchecked(x16064, x21920);
    x16064 = x21921;
    /* VAR */ int x21923 = 0;
    int x21924 = x21923;
    int* x21925 = &x21924;
    char* x21926 = strntoi_unchecked(x16064, x21925);
    x16064 = x21926;
    /* VAR */ int x21928 = 0;
    int x21929 = x21928;
    int* x21930 = &x21929;
    char* x21931 = strntoi_unchecked(x16064, x21930);
    x16064 = x21931;
    char* x24310 = (char*)malloc(26 * sizeof(char));
    memset(x24310, 0, 26 * sizeof(char));
    /* VAR */ char* x21938 = x16064;
    while(1) {
      
      char x21939 = *x16064;
      int x21940 = x21939!=('|');
      /* VAR */ int ite47124 = 0;
      if(x21940) {
        char x53337 = *x16064;
        int x53338 = x53337!=('\n');
        ite47124 = x53338;
      } else {
        
        ite47124 = 0;
      };
      int x44198 = ite47124;
      if (!(x44198)) break; 
      
      x16064 += 1;
    };
    char* x21946 = x21938;
    int x21947 = x16064 - x21946;
    char* x21948 = x21938;
    char* x21949 = strncpy(x24310, x21948, x21947);
    x16064 += 1;
    char* x24328 = (char*)malloc(11 * sizeof(char));
    memset(x24328, 0, 11 * sizeof(char));
    /* VAR */ char* x21957 = x16064;
    while(1) {
      
      char x21958 = *x16064;
      int x21959 = x21958!=('|');
      /* VAR */ int ite47147 = 0;
      if(x21959) {
        char x53359 = *x16064;
        int x53360 = x53359!=('\n');
        ite47147 = x53360;
      } else {
        
        ite47147 = 0;
      };
      int x44214 = ite47147;
      if (!(x44214)) break; 
      
      x16064 += 1;
    };
    char* x21965 = x21957;
    int x21966 = x16064 - x21965;
    char* x21967 = x21957;
    char* x21968 = strncpy(x24328, x21967, x21966);
    x16064 += 1;
    char* x24346 = (char*)malloc(45 * sizeof(char));
    memset(x24346, 0, 45 * sizeof(char));
    /* VAR */ char* x21976 = x16064;
    while(1) {
      
      char x21977 = *x16064;
      int x21978 = x21977!=('|');
      /* VAR */ int ite47170 = 0;
      if(x21978) {
        char x53381 = *x16064;
        int x53382 = x53381!=('\n');
        ite47170 = x53382;
      } else {
        
        ite47170 = 0;
      };
      int x44230 = ite47170;
      if (!(x44230)) break; 
      
      x16064 += 1;
    };
    char* x21984 = x21976;
    int x21985 = x16064 - x21984;
    char* x21986 = x21976;
    char* x21987 = strncpy(x24346, x21986, x21985);
    x16064 += 1;
    struct LINEITEMRecord* x25581 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x25581, 0, 1 * sizeof(struct LINEITEMRecord));
    x25581->L_ORDERKEY = x21831; x25581->L_PARTKEY = x21836; x25581->L_SUPPKEY = x21841; x25581->L_QUANTITY = x21851; x25581->L_EXTENDEDPRICE = x21856; x25581->L_DISCOUNT = x21861;
    int x265 = x16065;
    struct LINEITEMRecord x24366 = *x25581;
    *(x24185 + x265) = x24366;
    struct LINEITEMRecord* x24368 = &(x24185[x265]);
    x25581 = x24368;
    int x267 = x16065;
    int x268 = x267+(1);
    x16065 = x268;
  };
  int x272 = 0;
  for(; x272 < 1 ; x272 += 1) {
    
    /* VAR */ int x54476 = 0;
    struct Set_AGGRecord_Q9GRPRecord* x54477 = (struct Set_AGGRecord_Q9GRPRecord*)malloc(1048576 * sizeof(struct Set_AGGRecord_Q9GRPRecord));
    memset(x54477, 0, 1048576 * sizeof(struct Set_AGGRecord_Q9GRPRecord));
    int x39848 = 0;
    for(; x39848 < 1048576 ; x39848 += 1) {
      
      struct AGGRecord_Q9GRPRecord* x39849 = (struct AGGRecord_Q9GRPRecord*)malloc(256 * sizeof(struct AGGRecord_Q9GRPRecord));
      memset(x39849, 0, 256 * sizeof(struct AGGRecord_Q9GRPRecord));
      struct Set_AGGRecord_Q9GRPRecord* x39850 = (struct Set_AGGRecord_Q9GRPRecord*)malloc(1 * sizeof(struct Set_AGGRecord_Q9GRPRecord));
      memset(x39850, 0, 1 * sizeof(struct Set_AGGRecord_Q9GRPRecord));
      x39850->maxSize = 0; x39850->array = x39849;
      struct Set_AGGRecord_Q9GRPRecord x39853 = *x39850;
      *(x54477 + x39848) = x39853;
      struct Set_AGGRecord_Q9GRPRecord* x39855 = &(x54477[x39848]);
      x39850 = x39855;
    };
    struct ORDERSRecord* x54497 = (struct ORDERSRecord*)malloc(60000000 * sizeof(struct ORDERSRecord));
    memset(x54497, 0, 60000000 * sizeof(struct ORDERSRecord));
    int x39868 = 0;
    for(; x39868 < x21487 ; x39868 += 1) {
      
      struct ORDERSRecord* x39869 = &(x23863[x39868]);
      int x39870 = x39869->O_ORDERKEY;
      int x39871 = x39870%(60000000);
      struct ORDERSRecord x39872 = *x39869;
      *(x54497 + x39871) = x39872;
      struct ORDERSRecord* x39874 = &(x54497[x39871]);
      x39869 = x39874;
    };
    struct PARTSUPPRecord** x54515 = (struct PARTSUPPRecord**)malloc(1600000 * sizeof(struct PARTSUPPRecord*));
    memset(x54515, 0, 1600000 * sizeof(struct PARTSUPPRecord*));
    int* x54516 = (int*)malloc(1600000 * sizeof(int));
    memset(x54516, 0, 1600000 * sizeof(int));
    int x39883 = 0;
    for(; x39883 < 1600000 ; x39883 += 1) {
      
      struct PARTSUPPRecord* x39884 = (struct PARTSUPPRecord*)malloc(1024 * sizeof(struct PARTSUPPRecord));
      memset(x39884, 0, 1024 * sizeof(struct PARTSUPPRecord));
      *(x54515 + x39883) = x39884;
    };
    /* VAR */ int x54524 = 0;
    int x39904 = 0;
    for(; x39904 < x21618 ; x39904 += 1) {
      
      struct PARTSUPPRecord* x39905 = &(x23994[x39904]);
      int x39906 = x39905->PS_PARTKEY;
      int x39907 = x39906%(1600000);
      int x39908 = x54516[x39907];
      struct PARTSUPPRecord* x39909 = x54515[x39907];
      struct PARTSUPPRecord x39910 = *x39905;
      *(x39909 + x39908) = x39910;
      struct PARTSUPPRecord* x39912 = &(x39909[x39908]);
      x39905 = x39912;
      int x39914 = x39908+(1);
      *(x54516 + x39907) = x39914;
      int x39916 = x54524;
      int x39917 = x39916+(1);
      x54524 = x39917;
    };
    struct LINEITEMRecord** x54556 = (struct LINEITEMRecord**)malloc(1600000 * sizeof(struct LINEITEMRecord*));
    memset(x54556, 0, 1600000 * sizeof(struct LINEITEMRecord*));
    int* x54557 = (int*)malloc(1600000 * sizeof(int));
    memset(x54557, 0, 1600000 * sizeof(int));
    int x39926 = 0;
    for(; x39926 < 1600000 ; x39926 += 1) {
      
      struct LINEITEMRecord* x39927 = (struct LINEITEMRecord*)malloc(1024 * sizeof(struct LINEITEMRecord));
      memset(x39927, 0, 1024 * sizeof(struct LINEITEMRecord));
      *(x54556 + x39926) = x39927;
    };
    /* VAR */ int x54565 = 0;
    int x39947 = 0;
    for(; x39947 < x21808 ; x39947 += 1) {
      
      struct LINEITEMRecord* x39948 = &(x24185[x39947]);
      int x39949 = x39948->L_PARTKEY;
      int x39950 = x39949%(1600000);
      int x39951 = x54557[x39950];
      struct LINEITEMRecord* x39952 = x54556[x39950];
      struct LINEITEMRecord x39953 = *x39948;
      *(x39952 + x39951) = x39953;
      struct LINEITEMRecord* x39955 = &(x39952[x39951]);
      x39948 = x39955;
      int x39957 = x39951+(1);
      *(x54557 + x39950) = x39957;
      int x39959 = x54565;
      int x39960 = x39959+(1);
      x54565 = x39960;
    };
    x7513 = -1;
    g_array_sort(x27261, x54603);
    /* VAR */ int x54611 = 0;
    int x39983 = 0;
    for(; x39983 < x21235 ; x39983 += 1) {
      
      int x39984 = x54611;
      int x39985 = x39984+(1);
      x54611 = x39985;
    };
    /* VAR */ int x54621 = 0;
    int x39994 = 0;
    for(; x39994 < x21235 ; x39994 += 1) {
      
      int x39995 = x54621;
      int x39996 = x39995+(1);
      x54621 = x39996;
    };
    /* VAR */ int x54631 = 0;
    int x40028 = 0;
    for(; x40028 < x21395 ; x40028 += 1) {
      
      struct NATIONRecord* x40029 = &(x23770[x40028]);
      int x40030 = x54631;
      char* x40031 = g_array_index(x27263, char*, x40030);
      /* VAR */ int x40032 = -1;
      int x40033 = x27261->len;
      int x40015 = 0;
      for(; x40015 < x40033 ; x40015 += 1) {
        
        char* x40016 = g_array_index(x27261, char*, x40015);
        int x40017 = strcmp(x40016, x40031);
        int x40018 = !(x40017);
        if(x40018) {
          x40032 = x40015;
          break;
        };
      };
      int x40049 = x40032;
      x40029->N_NAME = x40049;
      int x40051 = x54631;
      int x40052 = x40051+(1);
      x54631 = x40052;
    };
    /* VAR */ int x54685 = 0;
    int x40084 = 0;
    for(; x40084 < x21395 ; x40084 += 1) {
      
      struct NATIONRecord* x40085 = &(x23770[x40084]);
      int x40086 = x54685;
      char* x40087 = g_array_index(x27263, char*, x40086);
      /* VAR */ int x40088 = -1;
      int x40089 = x27261->len;
      int x40071 = 0;
      for(; x40071 < x40089 ; x40071 += 1) {
        
        char* x40072 = g_array_index(x27261, char*, x40071);
        int x40073 = strcmp(x40072, x40087);
        int x40074 = !(x40073);
        if(x40074) {
          x40088 = x40071;
          break;
        };
      };
      int x40105 = x40088;
      x40085->N_NAME = x40105;
      int x40107 = x54685;
      int x40108 = x40107+(1);
      x54685 = x40108;
    };
    /* VAR */ int x54739 = 0;
    int x40117 = 0;
    for(; x40117 < x21487 ; x40117 += 1) {
      
      int x40118 = x54739;
      int x40119 = x40118+(1);
      x54739 = x40119;
    };
    /* VAR */ int x54749 = 0;
    int x40128 = 0;
    for(; x40128 < x21487 ; x40128 += 1) {
      
      int x40129 = x54749;
      int x40130 = x40129+(1);
      x54749 = x40130;
    };
    /* VAR */ int x54759 = 0;
    int x40139 = 0;
    for(; x40139 < x21618 ; x40139 += 1) {
      
      int x40140 = x54759;
      int x40141 = x40140+(1);
      x54759 = x40141;
    };
    /* VAR */ int x54769 = 0;
    int x40150 = 0;
    for(; x40150 < x21618 ; x40150 += 1) {
      
      int x40151 = x54769;
      int x40152 = x40151+(1);
      x54769 = x40152;
    };
    /* VAR */ int x54779 = 0;
    int x40161 = 0;
    for(; x40161 < x21687 ; x40161 += 1) {
      
      int x40162 = x54779;
      int x40163 = x40162+(1);
      x54779 = x40163;
    };
    /* VAR */ int x54789 = 0;
    int x40172 = 0;
    for(; x40172 < x21687 ; x40172 += 1) {
      
      int x40173 = x54789;
      int x40174 = x40173+(1);
      x54789 = x40174;
    };
    /* VAR */ int x54799 = 0;
    int x40183 = 0;
    for(; x40183 < x21808 ; x40183 += 1) {
      
      int x40184 = x54799;
      int x40185 = x40184+(1);
      x54799 = x40185;
    };
    /* VAR */ int x54809 = 0;
    int x40194 = 0;
    for(; x40194 < x21808 ; x40194 += 1) {
      
      int x40195 = x54809;
      int x40196 = x40195+(1);
      x54809 = x40196;
    };
    /* VAR */ int x54819 = 0;
    struct Q9GRPRecord* x54820 = (struct Q9GRPRecord*)malloc(48000000 * sizeof(struct Q9GRPRecord));
    memset(x54820, 0, 48000000 * sizeof(struct Q9GRPRecord));
    /* VAR */ int x54821 = 0;
    while(1) {
      
      int x20131 = x54821;
      int x20132 = x20131<(48000000);
      if (!(x20132)) break; 
      
      int x20133 = x54821;
      struct Q9GRPRecord* x25795 = (struct Q9GRPRecord*)malloc(1 * sizeof(struct Q9GRPRecord));
      memset(x25795, 0, 1 * sizeof(struct Q9GRPRecord));
      x25795->NATION = 0; x25795->O_YEAR = 0;
      struct Q9GRPRecord x24575 = *x25795;
      *(x54820 + x20133) = x24575;
      struct Q9GRPRecord* x24577 = &(x54820[x20133]);
      x25795 = x24577;
      int x20136 = x54821;
      int x20137 = x20136+(1);
      x54821 = x20137;
    };
    /* VAR */ int x54836 = 0;
    struct AGGRecord_Q9GRPRecord* x54837 = (struct AGGRecord_Q9GRPRecord*)malloc(175 * sizeof(struct AGGRecord_Q9GRPRecord));
    memset(x54837, 0, 175 * sizeof(struct AGGRecord_Q9GRPRecord));
    /* VAR */ int x54838 = 0;
    while(1) {
      
      int x20143 = x54838;
      int x20144 = x20143<(175);
      if (!(x20144)) break; 
      
      int x20145 = x54838;
      struct Q9GRPRecord* x20146 = &(x54820[x20145]);
      struct AGGRecord_Q9GRPRecord* x25813 = (struct AGGRecord_Q9GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q9GRPRecord));
      memset(x25813, 0, 1 * sizeof(struct AGGRecord_Q9GRPRecord));
      x25813->key = x20146; x25813->aggs = 0.0;
      struct AGGRecord_Q9GRPRecord x24591 = *x25813;
      *(x54837 + x20145) = x24591;
      struct AGGRecord_Q9GRPRecord* x24593 = &(x54837[x20145]);
      x25813 = x24593;
      int x20149 = x54838;
      int x20150 = x20149+(1);
      x54838 = x20150;
    };
    /* VAR */ struct timeval x54854 = x20347;
    struct timeval x54855 = x54854;
    /* VAR */ struct timeval x54856 = x20347;
    struct timeval x54857 = x54856;
    /* VAR */ struct timeval x54858 = x20347;
    struct timeval x54859 = x54858;
    struct timeval* x54860 = &x54857;
    gettimeofday(x54860, NULL);
    /* VAR */ int x54862 = 0;
    int* x54925 = &(x54894);
    GTree* x54926 = g_tree_new(x54925);
    /* VAR */ int x54927 = 0;
    /* VAR */ int x54928 = 0;
    while(1) {
      
      int x54930 = x54862;
      int x54931 = x54930<(x21235);
      if (!(x54931)) break; 
      
      int x3148 = x54862;
      struct PARTRecord* x437 = &(x23613[x3148]);
      char* x439 = x437->P_NAME;
      char* x37535 = strstr(x439, "ghost");
      int x37536 = x37535!=(NULL);
      if(x37536) {
        int x441 = x437->P_PARTKEY;
        int x16326 = x441%(1600000);
        int x16327 = x54557[x16326];
        struct LINEITEMRecord* x16328 = x54556[x16326];
        int x40508 = 0;
        for(; x40508 < x16327 ; x40508 += 1) {
          
          struct LINEITEMRecord* x40509 = &(x16328[x40508]);
          int x40510 = x40509->L_PARTKEY;
          int x40511 = x40510==(x441);
          if(x40511) {
            int x5974 = x40509->L_PARTKEY;
            int x5975 = x5974==(x441);
            if(x5975) {
              int x1293 = x40509->L_ORDERKEY;
              int x1294 = x40509->L_SUPPKEY;
              double x1295 = x40509->L_QUANTITY;
              double x1296 = x40509->L_EXTENDEDPRICE;
              double x1297 = x40509->L_DISCOUNT;
              int x5984 = x1294-(1);
              struct SUPPLIERRecord* x5985 = &(x24065[x5984]);
              int x483 = x5985->S_SUPPKEY;
              int x16347 = x1294==(x483);
              if(x16347) {
                int x1354 = x5985->S_NATIONKEY;
                int x6001 = x1354-(0);
                struct NATIONRecord* x6002 = &(x23770[x6001]);
                int x523 = x6002->N_NATIONKEY;
                int x16353 = x1354==(x523);
                if(x16353) {
                  int x8032 = x6002->N_NAME;
                  int x16356 = x5974%(1600000);
                  int x16357 = x54516[x16356];
                  struct PARTSUPPRecord* x16358 = x54515[x16356];
                  int x40415 = 0;
                  for(; x40415 < x16357 ; x40415 += 1) {
                    
                    struct PARTSUPPRecord* x40416 = &(x16358[x40415]);
                    int x40417 = x40416->PS_PARTKEY;
                    int x40418 = x40417==(x5974);
                    if(x40418) {
                      int x6027 = x40416->PS_PARTKEY;
                      int x6028 = x6027==(x5974);
                      /* VAR */ int ite49176 = 0;
                      if(x6028) {
                        int x55361 = x40416->PS_SUPPKEY;
                        int x55362 = x55361==(x1294);
                        ite49176 = x55362;
                      } else {
                        
                        ite49176 = 0;
                      };
                      int x46085 = ite49176;
                      if(x46085) {
                        double x1520 = x40416->PS_SUPPLYCOST;
                        struct ORDERSRecord* x6037 = &(x54497[x1293]);
                        int x629 = x6037->O_ORDERKEY;
                        int x16375 = x1293==(x629);
                        if(x16375) {
                          int x1636 = x6037->O_ORDERDATE;
                          int x20919 = x1636/(10000);
                          int x20238 = x54819;
                          struct Q9GRPRecord* x20239 = &(x54820[x20238]);
                          x20239->NATION = x8032;
                          x20239->O_YEAR = x20919;
                          int x20242 = x54819;
                          int x20243 = x20242+(1);
                          x54819 = x20243;
                          int x34981 = x20239->NATION;
                          int x34982 = x34981*(10000);
                          int x34983 = x20239->O_YEAR;
                          int x34984 = x34982+(x34983);
                          int x9266 = x34984&(1048575);
                          struct Set_AGGRecord_Q9GRPRecord* x11149 = &(x54477[x9266]);
                          int x9268 = x54476;
                          int x9269 = x9266>(x9268);
                          if(x9269) {
                            x54476 = x9266;
                          };
                          /* VAR */ int i11158 = 0;
                          /* VAR */ int found11159 = 0;
                          while(1) {
                            
                            int x11160 = i11158;
                            int x11161 = x11149->maxSize;
                            int x11162 = x11160<(x11161);
                            /* VAR */ int ite49216 = 0;
                            if(x11162) {
                              int x55400 = found11159;
                              int x55401 = !(x55400);
                              ite49216 = x55401;
                            } else {
                              
                              ite49216 = 0;
                            };
                            int x46118 = ite49216;
                            if (!(x46118)) break; 
                            
                            struct AGGRecord_Q9GRPRecord* x11166 = x11149->array;
                            int x11167 = i11158;
                            struct AGGRecord_Q9GRPRecord* x11168 = &(x11166[x11167]);
                            struct Q9GRPRecord* x11169 = x11168->key;
                            int x35004 = x11169->NATION;
                            int x35005 = x35004==(x34981);
                            int x35006 = x11169->O_YEAR;
                            int x35007 = x35006==(x34983);
                            /* VAR */ int ite49233 = 0;
                            if(x35005) {
                              ite49233 = x35007;
                            } else {
                              
                              ite49233 = 0;
                            };
                            int x46128 = ite49233;
                            if(x46128) {
                              found11159 = 1;
                            } else {
                              
                              int x11172 = i11158;
                              int x11173 = x11172+(1);
                              i11158 = x11173;
                            };
                          };
                          int x11177 = found11159;
                          int x11178 = !(x11177);
                          /* VAR */ struct AGGRecord_Q9GRPRecord** ite46137 = 0;
                          if(x11178) {
                            ite46137 = NULL;
                          } else {
                            
                            struct AGGRecord_Q9GRPRecord* x46139 = x11149->array;
                            int x46140 = i11158;
                            struct AGGRecord_Q9GRPRecord* x46141 = &(x46139[x46140]);
                            ite46137 = x46141;
                          };
                          struct AGGRecord_Q9GRPRecord** x11185 = ite46137;
                          int x14481 = x11185!=(NULL);
                          /* VAR */ struct AGGRecord_Q9GRPRecord* ite46147 = 0;
                          if(x14481) {
                            ite46147 = x11185;
                          } else {
                            
                            /* VAR */ double x46149 = 0;
                            /* VAR */ double x46150 = 0;
                            double x46151 = x46150;
                            int x46152 = x54836;
                            struct AGGRecord_Q9GRPRecord* x46153 = &(x54837[x46152]);
                            x46153->key = x20239;
                            x46153->aggs = x46151;
                            int x46156 = x54836;
                            int x46157 = x46156+(1);
                            x54836 = x46157;
                            struct AGGRecord_Q9GRPRecord* x46159 = x11149->array;
                            int x46160 = x11149->maxSize;
                            struct AGGRecord_Q9GRPRecord x46161 = *x46153;
                            *(x46159 + x46160) = x46161;
                            struct AGGRecord_Q9GRPRecord* x46163 = &(x46159[x46160]);
                            x46153 = x46163;
                            int x46165 = x11149->maxSize;
                            int x46166 = x46165+(1);
                            x11149->maxSize = x46166;
                            ite46147 = x46153;
                          };
                          struct AGGRecord_Q9GRPRecord* x9281 = ite46147;
                          double x17701 = x9281->aggs;
                          double x709 = 1.0-(x1297);
                          double x710 = x1296*(x709);
                          double x711 = x17701+(x710);
                          double x714 = x1520*(x1295);
                          double x715 = x711-(x714);
                          x9281->aggs = x715;
                        };
                      };
                    };
                  };
                };
              };
            };
          };
        };
      };
      int x3189 = x54862;
      int x471 = x3189+(1);
      x54862 = x471;
    };
    int x55472 = x54476;
    int x55473 = x55472+(1);
    int x40741 = 0;
    for(; x40741 < x55473 ; x40741 += 1) {
      
      struct Set_AGGRecord_Q9GRPRecord* x40742 = &(x54477[x40741]);
      int x40743 = x40742->maxSize;
      int x40736 = 0;
      for(; x40736 < x40743 ; x40736 += 1) {
        
        struct AGGRecord_Q9GRPRecord* x40737 = x40742->array;
        struct AGGRecord_Q9GRPRecord* x40738 = &(x40737[x40736]);
        g_tree_insert(x54926, x40738, x40738);
      };
    };
    while(1) {
      
      int x3508 = x54927;
      int x737 = !(x3508);
      /* VAR */ int ite49322 = 0;
      if(x737) {
        int x55504 = g_tree_nnodes(x54926);
        int x55505 = x55504!=(0);
        ite49322 = x55505;
      } else {
        
        ite49322 = 0;
      };
      int x46212 = ite49322;
      if (!(x46212)) break; 
      
      void* x28528 = NULL;
      void** x28536 = &(x28528);
      g_tree_foreach(x54926, x28535, x28536);
      struct AGGRecord_Q9GRPRecord* x28538 = (struct AGGRecord_Q9GRPRecord*){x28528};
      int x28539 = g_tree_remove(x54926, x28538);
      if(0) {
        x54927 = 1;
      } else {
        
        struct Q9GRPRecord* x750 = x28538->key;
        int x8094 = x750->NATION;
        char* x28547 = g_array_index(x27261, char*, x8094);
        int x753 = x750->O_YEAR;
        double x17746 = x28538->aggs;
        printf("%s|%d|%.4f\n", x28547, x753, x17746);
        int x3528 = x54928;
        int x758 = x3528+(1);
        x54928 = x758;
      };
    };
    int x55533 = x54928;
    printf("(%d rows)\n", x55533);
    struct timeval* x55535 = &x54859;
    gettimeofday(x55535, NULL);
    struct timeval* x55537 = &x54855;
    struct timeval* x55538 = &x54859;
    struct timeval* x55539 = &x54857;
    long x55540 = timeval_subtract(x55537, x55538, x55539);
    printf("Generated code run in %ld milliseconds.\n", x55540);
  };
}
/* ----------- FUNCTIONS ----------- */
int x54603(char** x28158, char** x28159) {
  char* x28160 = *x28159;
  char* x28161 = *x28158;
  int x37315 = strcmp(x28160, x28161);
  int x28163 = x37315<(0);
  return x28163; 
}

int x54894(struct AGGRecord_Q9GRPRecord* x374, struct AGGRecord_Q9GRPRecord* x375) {
  struct Q9GRPRecord* x376 = x374->key;
  struct Q9GRPRecord* x377 = x375->key;
  int x7975 = x376->NATION;
  int x7976 = x377->NATION;
  int x7977 = x7975-(x7976);
  int x381 = x7977==(0);
  /* VAR */ int ite45678 = 0;
  if(x381) {
    int x45679 = x376->O_YEAR;
    int x45680 = x377->O_YEAR;
    int x45681 = x45679<(x45680);
    /* VAR */ int ite45683 = 0;
    if(x45681) {
      ite45683 = 1;
    } else {
      
      int x45685 = x45679>(x45680);
      /* VAR */ int ite45687 = 0;
      if(x45685) {
        ite45687 = -1;
      } else {
        
        ite45687 = 0;
      };
      int x45686 = ite45687;
      ite45683 = x45686;
    };
    int x45682 = ite45683;
    ite45678 = x45682;
  } else {
    
    ite45678 = x7977;
  };
  int x388 = ite45678;
  return x388; 
}

int x28535(void* x28529, void* x28530, void* x28531) {
  struct AGGRecord_Q9GRPRecord** x28532 = (struct AGGRecord_Q9GRPRecord**){x28531};
  struct AGGRecord_Q9GRPRecord* x28533 = (struct AGGRecord_Q9GRPRecord*){x28530};
  pointer_assign(x28532, x28533);
  return 1; 
}
