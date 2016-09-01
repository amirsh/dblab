#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord;
  struct AGGRecord_String;
  struct NATIONRecord_SUPPLIERRecord;
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
  };
  
  struct AGGRecord_String {
  char* key;
  double* aggs;
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
  
  


int x24456(char* x8708);

int x24458(char* x8713, char* x8714);

int x24465(void* x7514);

int x24468(void* x7517, void* x7518);

int x24475(void* x7524);

int x24478(void* x7527, void* x7528);

int x24485(void* x7534);

int x24488(void* x7537, void* x7538);

int x24966(struct WindowRecord_Int_Double* x355, struct WindowRecord_Int_Double* x356);

int x9194(void* x9188, void* x9189, void* x9190);
/* GLOBAL VARS */

struct timeval x4813;
int main(int argc, char** argv) {
  FILE* x5317 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x5318 = 0;
  int x5319 = x5318;
  int* x5320 = &x5319;
  int x5321 = fscanf(x5317, "%d", x5320);
  pclose(x5317);
  struct PARTSUPPRecord** x6285 = (struct PARTSUPPRecord**)malloc(x5319 * sizeof(struct PARTSUPPRecord*));
  memset(x6285, 0, x5319 * sizeof(struct PARTSUPPRecord*));
  int x5325 = O_RDONLY;
  int x5326 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x5325);
  struct stat x5327 = (struct stat){0};
  /* VAR */ struct stat x5328 = x5327;
  struct stat x5329 = x5328;
  struct stat* x5330 = &x5329;
  int x5331 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x5330);
  size_t x5332 = x5330->st_size;
  int x5333 = PROT_READ;
  int x5334 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x5332, x5333, x5334, x5326, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x5319);
    /* VAR */ int ite20533 = 0;
    if(x6) {
      char x23576 = *x3;
      int x23577 = x23576!=('\0');
      ite20533 = x23577;
    } else {
      
      ite20533 = 0;
    };
    int x19120 = ite20533;
    if (!(x19120)) break; 
    
    /* VAR */ int x5342 = 0;
    int x5343 = x5342;
    int* x5344 = &x5343;
    char* x5345 = strntoi_unchecked(x3, x5344);
    x3 = x5345;
    /* VAR */ int x5347 = 0;
    int x5348 = x5347;
    int* x5349 = &x5348;
    char* x5350 = strntoi_unchecked(x3, x5349);
    x3 = x5350;
    /* VAR */ int x5352 = 0;
    int x5353 = x5352;
    int* x5354 = &x5353;
    char* x5355 = strntoi_unchecked(x3, x5354);
    x3 = x5355;
    /* VAR */ double x5357 = 0.0;
    double x5358 = x5357;
    double* x5359 = &x5358;
    char* x5360 = strntod_unchecked(x3, x5359);
    x3 = x5360;
    char* x6324 = (char*)malloc(200 * sizeof(char));
    memset(x6324, 0, 200 * sizeof(char));
    /* VAR */ char* x5363 = x3;
    while(1) {
      
      char x5364 = *x3;
      int x5365 = x5364!=('|');
      /* VAR */ int ite20567 = 0;
      if(x5365) {
        char x23609 = *x3;
        int x23610 = x23609!=('\n');
        ite20567 = x23610;
      } else {
        
        ite20567 = 0;
      };
      int x19147 = ite20567;
      if (!(x19147)) break; 
      
      x3 += 1;
    };
    char* x5371 = x5363;
    int x5372 = x3 - x5371;
    char* x5373 = x5363;
    char* x5374 = strncpy(x6324, x5373, x5372);
    x3 += 1;
    struct PARTSUPPRecord* x6816 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x6816, 0, 1 * sizeof(struct PARTSUPPRecord));
    x6816->PS_PARTKEY = x5343; x6816->PS_SUPPKEY = x5348; x6816->PS_AVAILQTY = x5353; x6816->PS_SUPPLYCOST = x5358; x6816->PS_COMMENT = x6324;
    int x22 = x4;
    *(x6285 + x22) = x6816;
    int x24 = x4;
    int x25 = x24+(1);
    x4 = x25;
  };
  FILE* x5387 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x5388 = 0;
  int x5389 = x5388;
  int* x5390 = &x5389;
  int x5391 = fscanf(x5387, "%d", x5390);
  pclose(x5387);
  struct SUPPLIERRecord** x6354 = (struct SUPPLIERRecord**)malloc(x5389 * sizeof(struct SUPPLIERRecord*));
  memset(x6354, 0, x5389 * sizeof(struct SUPPLIERRecord*));
  int x5395 = O_RDONLY;
  int x5396 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x5395);
  /* VAR */ struct stat x5397 = x5327;
  struct stat x5398 = x5397;
  struct stat* x5399 = &x5398;
  int x5400 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x5399);
  size_t x5401 = x5399->st_size;
  int x5402 = PROT_READ;
  int x5403 = MAP_PRIVATE;
  char* x30 = mmap(NULL, x5401, x5402, x5403, x5396, 0);
  /* VAR */ int x31 = 0;
  while(1) {
    
    int x32 = x31;
    int x33 = x32<(x5389);
    /* VAR */ int ite20614 = 0;
    if(x33) {
      char x23655 = *x30;
      int x23656 = x23655!=('\0');
      ite20614 = x23656;
    } else {
      
      ite20614 = 0;
    };
    int x19187 = ite20614;
    if (!(x19187)) break; 
    
    /* VAR */ int x5411 = 0;
    int x5412 = x5411;
    int* x5413 = &x5412;
    char* x5414 = strntoi_unchecked(x30, x5413);
    x30 = x5414;
    char* x6377 = (char*)malloc(26 * sizeof(char));
    memset(x6377, 0, 26 * sizeof(char));
    /* VAR */ char* x5417 = x30;
    while(1) {
      
      char x5418 = *x30;
      int x5419 = x5418!=('|');
      /* VAR */ int ite20633 = 0;
      if(x5419) {
        char x23673 = *x30;
        int x23674 = x23673!=('\n');
        ite20633 = x23674;
      } else {
        
        ite20633 = 0;
      };
      int x19199 = ite20633;
      if (!(x19199)) break; 
      
      x30 += 1;
    };
    char* x5425 = x5417;
    int x5426 = x30 - x5425;
    char* x5427 = x5417;
    char* x5428 = strncpy(x6377, x5427, x5426);
    x30 += 1;
    char* x6395 = (char*)malloc(41 * sizeof(char));
    memset(x6395, 0, 41 * sizeof(char));
    /* VAR */ char* x5436 = x30;
    while(1) {
      
      char x5437 = *x30;
      int x5438 = x5437!=('|');
      /* VAR */ int ite20656 = 0;
      if(x5438) {
        char x23695 = *x30;
        int x23696 = x23695!=('\n');
        ite20656 = x23696;
      } else {
        
        ite20656 = 0;
      };
      int x19215 = ite20656;
      if (!(x19215)) break; 
      
      x30 += 1;
    };
    char* x5444 = x5436;
    int x5445 = x30 - x5444;
    char* x5446 = x5436;
    char* x5447 = strncpy(x6395, x5446, x5445);
    x30 += 1;
    /* VAR */ int x5454 = 0;
    int x5455 = x5454;
    int* x5456 = &x5455;
    char* x5457 = strntoi_unchecked(x30, x5456);
    x30 = x5457;
    char* x6418 = (char*)malloc(16 * sizeof(char));
    memset(x6418, 0, 16 * sizeof(char));
    /* VAR */ char* x5460 = x30;
    while(1) {
      
      char x5461 = *x30;
      int x5462 = x5461!=('|');
      /* VAR */ int ite20684 = 0;
      if(x5462) {
        char x23722 = *x30;
        int x23723 = x23722!=('\n');
        ite20684 = x23723;
      } else {
        
        ite20684 = 0;
      };
      int x19236 = ite20684;
      if (!(x19236)) break; 
      
      x30 += 1;
    };
    char* x5468 = x5460;
    int x5469 = x30 - x5468;
    char* x5470 = x5460;
    char* x5471 = strncpy(x6418, x5470, x5469);
    x30 += 1;
    /* VAR */ double x5478 = 0.0;
    double x5479 = x5478;
    double* x5480 = &x5479;
    char* x5481 = strntod_unchecked(x30, x5480);
    x30 = x5481;
    char* x6441 = (char*)malloc(102 * sizeof(char));
    memset(x6441, 0, 102 * sizeof(char));
    /* VAR */ char* x5484 = x30;
    while(1) {
      
      char x5485 = *x30;
      int x5486 = x5485!=('|');
      /* VAR */ int ite20712 = 0;
      if(x5486) {
        char x23749 = *x30;
        int x23750 = x23749!=('\n');
        ite20712 = x23750;
      } else {
        
        ite20712 = 0;
      };
      int x19257 = ite20712;
      if (!(x19257)) break; 
      
      x30 += 1;
    };
    char* x5492 = x5484;
    int x5493 = x30 - x5492;
    char* x5494 = x5484;
    char* x5495 = strncpy(x6441, x5494, x5493);
    x30 += 1;
    struct SUPPLIERRecord* x6935 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x6935, 0, 1 * sizeof(struct SUPPLIERRecord));
    x6935->S_SUPPKEY = x5412; x6935->S_NAME = x6377; x6935->S_ADDRESS = x6395; x6935->S_NATIONKEY = x5455; x6935->S_PHONE = x6418; x6935->S_ACCTBAL = x5479; x6935->S_COMMENT = x6441;
    int x72 = x31;
    *(x6354 + x72) = x6935;
    int x74 = x31;
    int x75 = x74+(1);
    x31 = x75;
  };
  FILE* x5508 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x5509 = 0;
  int x5510 = x5509;
  int* x5511 = &x5510;
  int x5512 = fscanf(x5508, "%d", x5511);
  pclose(x5508);
  struct NATIONRecord** x6471 = (struct NATIONRecord**)malloc(x5510 * sizeof(struct NATIONRecord*));
  memset(x6471, 0, x5510 * sizeof(struct NATIONRecord*));
  int x5516 = O_RDONLY;
  int x5517 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x5516);
  /* VAR */ struct stat x5518 = x5327;
  struct stat x5519 = x5518;
  struct stat* x5520 = &x5519;
  int x5521 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x5520);
  size_t x5522 = x5520->st_size;
  int x5523 = PROT_READ;
  int x5524 = MAP_PRIVATE;
  char* x80 = mmap(NULL, x5522, x5523, x5524, x5517, 0);
  /* VAR */ int x81 = 0;
  while(1) {
    
    int x82 = x81;
    int x83 = x82<(x5510);
    /* VAR */ int ite20759 = 0;
    if(x83) {
      char x23795 = *x80;
      int x23796 = x23795!=('\0');
      ite20759 = x23796;
    } else {
      
      ite20759 = 0;
    };
    int x19297 = ite20759;
    if (!(x19297)) break; 
    
    /* VAR */ int x5532 = 0;
    int x5533 = x5532;
    int* x5534 = &x5533;
    char* x5535 = strntoi_unchecked(x80, x5534);
    x80 = x5535;
    char* x6494 = (char*)malloc(26 * sizeof(char));
    memset(x6494, 0, 26 * sizeof(char));
    /* VAR */ char* x5538 = x80;
    while(1) {
      
      char x5539 = *x80;
      int x5540 = x5539!=('|');
      /* VAR */ int ite20778 = 0;
      if(x5540) {
        char x23813 = *x80;
        int x23814 = x23813!=('\n');
        ite20778 = x23814;
      } else {
        
        ite20778 = 0;
      };
      int x19309 = ite20778;
      if (!(x19309)) break; 
      
      x80 += 1;
    };
    char* x5546 = x5538;
    int x5547 = x80 - x5546;
    char* x5548 = x5538;
    char* x5549 = strncpy(x6494, x5548, x5547);
    x80 += 1;
    /* VAR */ int x5556 = 0;
    int x5557 = x5556;
    int* x5558 = &x5557;
    char* x5559 = strntoi_unchecked(x80, x5558);
    x80 = x5559;
    char* x6517 = (char*)malloc(153 * sizeof(char));
    memset(x6517, 0, 153 * sizeof(char));
    /* VAR */ char* x5562 = x80;
    while(1) {
      
      char x5563 = *x80;
      int x5564 = x5563!=('|');
      /* VAR */ int ite20806 = 0;
      if(x5564) {
        char x23840 = *x80;
        int x23841 = x23840!=('\n');
        ite20806 = x23841;
      } else {
        
        ite20806 = 0;
      };
      int x19330 = ite20806;
      if (!(x19330)) break; 
      
      x80 += 1;
    };
    char* x5570 = x5562;
    int x5571 = x80 - x5570;
    char* x5572 = x5562;
    char* x5573 = strncpy(x6517, x5572, x5571);
    x80 += 1;
    struct NATIONRecord* x7013 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x7013, 0, 1 * sizeof(struct NATIONRecord));
    x7013->N_NATIONKEY = x5533; x7013->N_NAME = x6494; x7013->N_REGIONKEY = x5557; x7013->N_COMMENT = x6517;
    int x105 = x81;
    *(x6471 + x105) = x7013;
    int x107 = x81;
    int x108 = x107+(1);
    x81 = x108;
  };
  int x112 = 0;
  for(; x112 < 1 ; x112 += 1) {
    
    GHashTable* x24463 = g_hash_table_new(x24456, x24458);
    struct WindowRecord_Int_Double** x24464 = (struct WindowRecord_Int_Double**)malloc(48000000 * sizeof(struct WindowRecord_Int_Double*));
    memset(x24464, 0, 48000000 * sizeof(struct WindowRecord_Int_Double*));
    void*** x24472 = (void***){x24465};
    int* x24473 = (int*){x24468};
    GHashTable* x24474 = g_hash_table_new(x24472, x24473);
    void*** x24482 = (void***){x24475};
    int* x24483 = (int*){x24478};
    GHashTable* x24484 = g_hash_table_new(x24482, x24483);
    void*** x24492 = (void***){x24485};
    int* x24493 = (int*){x24488};
    GHashTable* x24494 = g_hash_table_new(x24492, x24493);
    /* VAR */ struct timeval x24495 = x4813;
    struct timeval x24496 = x24495;
    /* VAR */ struct timeval x24497 = x4813;
    struct timeval x24498 = x24497;
    /* VAR */ struct timeval x24499 = x4813;
    struct timeval x24500 = x24499;
    struct timeval* x24501 = &x24498;
    gettimeofday(x24501, NULL);
    /* VAR */ int x24503 = 0;
    /* VAR */ int x24504 = 0;
    /* VAR */ int x24505 = 0;
    /* VAR */ int x24506 = 0;
    /* VAR */ struct AGGRecord_String* x24507 = NULL;
    while(1) {
      
      int x24509 = x24504;
      int x24510 = x24509<(x5510);
      if (!(x24510)) break; 
      
      int x2926 = x24504;
      struct NATIONRecord* x181 = x6471[x2926];
      char* x183 = x181->N_NAME;
      int x15712 = strcmp(x183, "UNITED KINGDOM");
      int x15713 = x15712==(0);
      if(x15713) {
        int x185 = x181->N_NATIONKEY;
        void* x7568 = (void*){x185};
        void* x7569 = (void*){x181};
        void* x7570 = g_hash_table_lookup(x24494, x7568);
        GList** x7571 = (GList**){x7570};
        GList** x7572 = NULL;
        int x7573 = x7571==(x7572);
        /* VAR */ GList** ite20000 = 0;
        if(x7573) {
          GList** x20001 = malloc(8);
          GList* x20002 = NULL;
          pointer_assign(x20001, x20002);
          ite20000 = x20001;
        } else {
          
          ite20000 = x7571;
        };
        GList** x7577 = ite20000;
        GList* x7578 = *(x7577);
        GList* x7579 = g_list_prepend(x7578, x7569);
        pointer_assign(x7577, x7579);
        void* x7581 = (void*){x7577};
        g_hash_table_insert(x24494, x7568, x7581);
      };
      int x2934 = x24504;
      int x190 = x2934+(1);
      x24504 = x190;
    };
    while(1) {
      
      int x24542 = x24503;
      int x24543 = x24542<(x5389);
      if (!(x24543)) break; 
      
      int x2943 = x24503;
      struct SUPPLIERRecord* x199 = x6354[x2943];
      int x201 = x199->S_NATIONKEY;
      void* x7593 = (void*){x201};
      void* x7594 = g_hash_table_lookup(x24494, x7593);
      GList** x7595 = (GList**){x7594};
      int x12678 = x7595!=(NULL);
      if(x12678) {
        GList* x8841 = *(x7595);
        /* VAR */ GList* x8842 = x8841;
        while(1) {
          
          GList* x8843 = x8842;
          GList* x8844 = NULL;
          int x8845 = x8843!=(x8844);
          if (!(x8845)) break; 
          
          GList* x8846 = x8842;
          void* x8847 = g_list_nth_data(x8846, 0);
          struct NATIONRecord* x8848 = (struct NATIONRecord*){x8847};
          GList* x8849 = x8842;
          GList* x8850 = g_list_next(x8849);
          x8842 = x8850;
          int x8852 = x8848->N_NATIONKEY;
          int x8853 = x8852==(x201);
          if(x8853) {
            char* x998 = x8848->N_NAME;
            int x999 = x8848->N_REGIONKEY;
            char* x1000 = x8848->N_COMMENT;
            int x1001 = x199->S_SUPPKEY;
            char* x1002 = x199->S_NAME;
            char* x1003 = x199->S_ADDRESS;
            char* x1004 = x199->S_PHONE;
            double x1005 = x199->S_ACCTBAL;
            char* x1006 = x199->S_COMMENT;
            struct NATIONRecord_SUPPLIERRecord* x7082 = (struct NATIONRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord));
            memset(x7082, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord));
            x7082->N_NATIONKEY = x8852; x7082->N_NAME = x998; x7082->N_REGIONKEY = x999; x7082->N_COMMENT = x1000; x7082->S_SUPPKEY = x1001; x7082->S_NAME = x1002; x7082->S_ADDRESS = x1003; x7082->S_NATIONKEY = x201; x7082->S_PHONE = x1004; x7082->S_ACCTBAL = x1005; x7082->S_COMMENT = x1006;
            int x222 = x7082->S_SUPPKEY;
            void* x7618 = (void*){x222};
            void* x7619 = (void*){x7082};
            void* x7620 = g_hash_table_lookup(x24484, x7618);
            GList** x7621 = (GList**){x7620};
            GList** x7622 = NULL;
            int x7623 = x7621==(x7622);
            /* VAR */ GList** ite20099 = 0;
            if(x7623) {
              GList** x20100 = malloc(8);
              GList* x20101 = NULL;
              pointer_assign(x20100, x20101);
              ite20099 = x20100;
            } else {
              
              ite20099 = x7621;
            };
            GList** x7627 = ite20099;
            GList* x7628 = *(x7627);
            GList* x7629 = g_list_prepend(x7628, x7619);
            pointer_assign(x7627, x7629);
            void* x7631 = (void*){x7627};
            g_hash_table_insert(x24484, x7618, x7631);
          };
        };
      };
      int x2989 = x24503;
      int x230 = x2989+(1);
      x24503 = x230;
    };
    while(1) {
      
      int x24642 = x24505;
      int x24643 = x24642<(x5319);
      if (!(x24643)) break; 
      
      int x2999 = x24505;
      struct PARTSUPPRecord* x240 = x6285[x2999];
      int x242 = x240->PS_SUPPKEY;
      void* x7644 = (void*){x242};
      void* x7645 = g_hash_table_lookup(x24484, x7644);
      GList** x7646 = (GList**){x7645};
      int x12769 = x7646!=(NULL);
      if(x12769) {
        GList* x8939 = *(x7646);
        /* VAR */ GList* x8940 = x8939;
        while(1) {
          
          GList* x8941 = x8940;
          GList* x8942 = NULL;
          int x8943 = x8941!=(x8942);
          if (!(x8943)) break; 
          
          GList* x8944 = x8940;
          void* x8945 = g_list_nth_data(x8944, 0);
          struct NATIONRecord_SUPPLIERRecord* x8946 = (struct NATIONRecord_SUPPLIERRecord*){x8945};
          GList* x8947 = x8940;
          GList* x8948 = g_list_next(x8947);
          x8940 = x8948;
          int x8950 = x8946->S_SUPPKEY;
          int x8951 = x8950==(x242);
          if(x8951) {
            int x1062 = x8946->N_NATIONKEY;
            char* x1063 = x8946->N_NAME;
            int x1064 = x8946->N_REGIONKEY;
            char* x1065 = x8946->N_COMMENT;
            char* x1066 = x8946->S_NAME;
            char* x1067 = x8946->S_ADDRESS;
            int x1068 = x8946->S_NATIONKEY;
            char* x1069 = x8946->S_PHONE;
            double x1070 = x8946->S_ACCTBAL;
            char* x1071 = x8946->S_COMMENT;
            int x1072 = x240->PS_PARTKEY;
            int x1073 = x240->PS_AVAILQTY;
            double x1074 = x240->PS_SUPPLYCOST;
            char* x1075 = x240->PS_COMMENT;
            struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x7121 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
            memset(x7121, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
            x7121->N_NATIONKEY = x1062; x7121->N_NAME = x1063; x7121->N_REGIONKEY = x1064; x7121->N_COMMENT = x1065; x7121->S_SUPPKEY = x8950; x7121->S_NAME = x1066; x7121->S_ADDRESS = x1067; x7121->S_NATIONKEY = x1068; x7121->S_PHONE = x1069; x7121->S_ACCTBAL = x1070; x7121->S_COMMENT = x1071; x7121->PS_PARTKEY = x1072; x7121->PS_SUPPKEY = x242; x7121->PS_AVAILQTY = x1073; x7121->PS_SUPPLYCOST = x1074; x7121->PS_COMMENT = x1075;
            int x263 = x7121->PS_PARTKEY;
            void* x7674 = (void*){x263};
            void* x7675 = (void*){x7121};
            void* x7676 = g_hash_table_lookup(x24474, x7674);
            GList** x7677 = (GList**){x7676};
            GList** x7678 = NULL;
            int x7679 = x7677==(x7678);
            /* VAR */ GList** ite20208 = 0;
            if(x7679) {
              GList** x20209 = malloc(8);
              GList* x20210 = NULL;
              pointer_assign(x20209, x20210);
              ite20208 = x20209;
            } else {
              
              ite20208 = x7677;
            };
            GList** x7683 = ite20208;
            GList* x7684 = *(x7683);
            GList* x7685 = g_list_prepend(x7684, x7675);
            pointer_assign(x7683, x7685);
            void* x7687 = (void*){x7683};
            g_hash_table_insert(x24474, x7674, x7687);
          };
        };
      };
      int x3055 = x24505;
      int x271 = x3055+(1);
      x24505 = x271;
    };
    GList* x24794 = g_hash_table_get_keys(x24474);
    /* VAR */ GList* x24795 = x24794;
    int x24796 = g_hash_table_size(x24474);
    int x17548 = 0;
    for(; x17548 < x24796 ; x17548 += 1) {
      
      GList* x17549 = x24795;
      void* x17550 = g_list_nth_data(x17549, 0);
      GList* x17551 = x24795;
      GList* x17552 = g_list_next(x17551);
      x24795 = x17552;
      void* x17554 = g_hash_table_lookup(x24474, x17550);
      GList** x17555 = (GList**){x17554};
      /* VAR */ double x17564 = 0.0;
      GList* x17565 = *(x17555);
      /* VAR */ GList* x17566 = x17565;
      while(1) {
        
        GList* x9061 = x17566;
        GList* x9062 = NULL;
        int x9063 = x9061!=(x9062);
        if (!(x9063)) break; 
        
        GList* x9064 = x17566;
        void* x9065 = g_list_nth_data(x9064, 0);
        struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9066 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x9065};
        double x9067 = x17564;
        double x9068 = x9066->PS_SUPPLYCOST;
        int x9069 = x9066->PS_AVAILQTY;
        double x9071 = x9068*(x9069);
        double x9072 = x9067+(x9071);
        x17564 = x9072;
        GList* x9074 = x17566;
        GList* x9075 = g_list_next(x9074);
        x17566 = x9075;
      };
      double x17584 = x17564;
      GList* x17585 = *(x17555);
      void* x17586 = g_list_nth_data(x17585, 0);
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x17587 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x17586};
      int x17588 = x17587->PS_PARTKEY;
      struct WindowRecord_Int_Double* x17589 = (struct WindowRecord_Int_Double*)malloc(1 * sizeof(struct WindowRecord_Int_Double));
      memset(x17589, 0, 1 * sizeof(struct WindowRecord_Int_Double));
      x17589->key = x17588; x17589->wnd = x17584;
      int x17592 = x24506;
      *(x24464 + x17592) = x17589;
      int x17594 = x24506;
      int x17595 = x17594+(1);
      x24506 = x17595;
    };
    /* VAR */ int x24892 = 0;
    while(1) {
      
      int x24894 = x24892;
      int x24895 = x24506;
      int x24896 = x24894<(x24895);
      if (!(x24896)) break; 
      
      int x306 = x24892;
      struct WindowRecord_Int_Double* x307 = x24464[x306];
      int x308 = x24892;
      int x309 = x308+(1);
      x24892 = x309;
      void* x9881 = g_hash_table_lookup(x24463, "Total");
      int x9104 = x9881==(NULL);
      /* VAR */ struct AGGRecord_String* ite20376 = 0;
      if(x9104) {
        double* x20377 = (double*)malloc(1 * sizeof(double));
        memset(x20377, 0, 1 * sizeof(double));
        struct AGGRecord_String* x20378 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
        memset(x20378, 0, 1 * sizeof(struct AGGRecord_String));
        x20378->key = "Total"; x20378->aggs = x20377;
        g_hash_table_insert(x24463, "Total", x20378);
        ite20376 = x20378;
      } else {
        
        ite20376 = x9881;
      };
      struct AGGRecord_String* x9114 = ite20376;
      double* x316 = x9114->aggs;
      double x330 = x316[0];
      double x331 = x307->wnd;
      double x332 = x330+(x331);
      *x316 = x332;
    };
    GList* x24924 = g_hash_table_get_keys(x24463);
    /* VAR */ GList* x24925 = x24924;
    int x24926 = g_hash_table_size(x24463);
    int x17639 = 0;
    for(; x17639 < x24926 ; x17639 += 1) {
      
      GList* x17640 = x24925;
      void* x17641 = g_list_nth_data(x17640, 0);
      GList* x17642 = g_list_next(x17640);
      x24925 = x17642;
      void* x17644 = g_hash_table_lookup(x24463, x17641);
      struct AGGRecord_String* x17646 = (struct AGGRecord_String*){x17644};
      x24507 = x17646;
    };
    struct AGGRecord_String* x24946 = x24507;
    int* x24985 = &(x24966);
    GTree* x24986 = g_tree_new(x24985);
    /* VAR */ int x24987 = 0;
    /* VAR */ int x24988 = 0;
    /* VAR */ int x24989 = 0;
    while(1) {
      
      int x24991 = x24989;
      int x24992 = x24506;
      int x24993 = x24991<(x24992);
      if (!(x24993)) break; 
      
      int x681 = x24989;
      struct WindowRecord_Int_Double* x682 = x24464[x681];
      int x683 = x24989;
      int x684 = x683+(1);
      x24989 = x684;
      double x688 = x682->wnd;
      double* x689 = x24946->aggs;
      double x690 = x689[0];
      double x691 = x690*(1.0E-4);
      int x692 = x688>(x691);
      if(x692) {
        g_tree_insert(x24986, x682, x682);
      };
    };
    while(1) {
      
      int x3634 = x24987;
      int x698 = !(x3634);
      /* VAR */ int ite21994 = 0;
      if(x698) {
        int x25011 = g_tree_nnodes(x24986);
        int x25012 = x25011!=(0);
        ite21994 = x25012;
      } else {
        
        ite21994 = 0;
      };
      int x20480 = ite21994;
      if (!(x20480)) break; 
      
      void* x9187 = NULL;
      void** x9195 = &(x9187);
      g_tree_foreach(x24986, x9194, x9195);
      struct WindowRecord_Int_Double* x9197 = (struct WindowRecord_Int_Double*){x9187};
      int x9198 = g_tree_remove(x24986, x9197);
      if(0) {
        x24987 = 1;
      } else {
        
        int x711 = x9197->key;
        double x712 = x9197->wnd;
        printf("%d|%.2f\n", x711, x712);
        int x3650 = x24988;
        int x715 = x3650+(1);
        x24988 = x715;
      };
    };
    int x25037 = x24988;
    printf("(%d rows)\n", x25037);
    struct timeval* x25039 = &x24500;
    gettimeofday(x25039, NULL);
    struct timeval* x25041 = &x24496;
    struct timeval* x25042 = &x24500;
    struct timeval* x25043 = &x24498;
    long x25044 = timeval_subtract(x25041, x25042, x25043);
    printf("Generated code run in %ld milliseconds.\n", x25044);
  };
}
/* ----------- FUNCTIONS ----------- */
int x24456(char* x8708) {
  return 0; 
}

int x24458(char* x8713, char* x8714) {
  int x14128 = strcmp(x8713, x8714);
  int x14129 = !(x14128);
  return x14129; 
}

int x24465(void* x7514) {
  int x7515 = g_direct_hash(x7514);
  return x7515; 
}

int x24468(void* x7517, void* x7518) {
  int x7519 = g_direct_equal(x7517, x7518);
  return x7519; 
}

int x24475(void* x7524) {
  int x7525 = g_direct_hash(x7524);
  return x7525; 
}

int x24478(void* x7527, void* x7528) {
  int x7529 = g_direct_equal(x7527, x7528);
  return x7529; 
}

int x24485(void* x7534) {
  int x7535 = g_direct_hash(x7534);
  return x7535; 
}

int x24488(void* x7537, void* x7538) {
  int x7539 = g_direct_equal(x7537, x7538);
  return x7539; 
}

int x24966(struct WindowRecord_Int_Double* x355, struct WindowRecord_Int_Double* x356) {
  double x357 = x355->wnd;
  double x358 = x356->wnd;
  int x359 = x357>(x358);
  /* VAR */ int ite20444 = 0;
  if(x359) {
    ite20444 = -1;
  } else {
    
    int x20446 = x357<(x358);
    /* VAR */ int ite20448 = 0;
    if(x20446) {
      ite20448 = 1;
    } else {
      
      ite20448 = 0;
    };
    int x20447 = ite20448;
    ite20444 = x20447;
  };
  int x362 = ite20444;
  return x362; 
}

int x9194(void* x9188, void* x9189, void* x9190) {
  struct WindowRecord_Int_Double** x9191 = (struct WindowRecord_Int_Double**){x9190};
  struct WindowRecord_Int_Double* x9192 = (struct WindowRecord_Int_Double*){x9189};
  pointer_assign(x9191, x9192);
  return 1; 
}
