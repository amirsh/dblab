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
  };
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
  };
  
  


int x40290(struct Q16GRPRecord2* x11379);

int x40329(struct Q16GRPRecord2* x11384, struct Q16GRPRecord2* x11385);

int x40356(struct Q16GRPRecord1* x11392);

int x40397(struct Q16GRPRecord1* x11397, struct Q16GRPRecord1* x11398);

int x40433(void* x9761);

int x40436(void* x9764, void* x9765);

int x40443(void* x9771);

int x40446(void* x9774, void* x9775);

int x40593(struct AGGRecord_Q16GRPRecord2* x240, struct AGGRecord_Q16GRPRecord2* x241);

int x12129(void* x12123, void* x12124, void* x12125);
/* GLOBAL VARS */

struct timeval x5908;
int main(int argc, char** argv) {
  FILE* x6624 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x6625 = 0;
  int x6626 = x6625;
  int* x6627 = &x6626;
  int x6628 = fscanf(x6624, "%d", x6627);
  pclose(x6624);
  struct SUPPLIERRecord* x7998 = (struct SUPPLIERRecord*)malloc(x6626 * sizeof(struct SUPPLIERRecord));
  memset(x7998, 0, x6626 * sizeof(struct SUPPLIERRecord));
  int x6632 = O_RDONLY;
  int x6633 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x6632);
  struct stat x6634 = (struct stat){0};
  /* VAR */ struct stat x6635 = x6634;
  struct stat x6636 = x6635;
  struct stat* x6637 = &x6636;
  int x6638 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x6637);
  int x6640 = PROT_READ;
  int x6641 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x6637->st_size), x6640, x6641, x6633, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite30664 = 0;
    if((x5<(x6626))) {
      char x38768 = *x3;
      ite30664 = (x38768!=('\0'));
    } else {
      
      ite30664 = 0;
    };
    int x28267 = ite30664;
    if (!(x28267)) break; 
    
    /* VAR */ int x6649 = 0;
    int x6650 = x6649;
    int* x6651 = &x6650;
    char* x6652 = strntoi_unchecked(x3, x6651);
    x3 = x6652;
    char* x8022 = (char*)malloc(26 * sizeof(char));
    memset(x8022, 0, 26 * sizeof(char));
    /* VAR */ char* x6655 = x3;
    while(1) {
      
      char x6656 = *x3;
      /* VAR */ int ite30683 = 0;
      if((x6656!=('|'))) {
        char x38786 = *x3;
        ite30683 = (x38786!=('\n'));
      } else {
        
        ite30683 = 0;
      };
      int x28279 = ite30683;
      if (!(x28279)) break; 
      
      x3 += 1;
    };
    char* x6663 = x6655;
    int x6664 = x3 - x6663;
    char* x6665 = x6655;
    char* x6666 = strncpy(x8022, x6665, x6664);
    x3 += 1;
    char* x8040 = (char*)malloc(41 * sizeof(char));
    memset(x8040, 0, 41 * sizeof(char));
    /* VAR */ char* x6674 = x3;
    while(1) {
      
      char x6675 = *x3;
      /* VAR */ int ite30706 = 0;
      if((x6675!=('|'))) {
        char x38808 = *x3;
        ite30706 = (x38808!=('\n'));
      } else {
        
        ite30706 = 0;
      };
      int x28295 = ite30706;
      if (!(x28295)) break; 
      
      x3 += 1;
    };
    char* x6682 = x6674;
    int x6683 = x3 - x6682;
    char* x6684 = x6674;
    char* x6685 = strncpy(x8040, x6684, x6683);
    x3 += 1;
    /* VAR */ int x6692 = 0;
    int x6693 = x6692;
    int* x6694 = &x6693;
    char* x6695 = strntoi_unchecked(x3, x6694);
    x3 = x6695;
    char* x8063 = (char*)malloc(16 * sizeof(char));
    memset(x8063, 0, 16 * sizeof(char));
    /* VAR */ char* x6698 = x3;
    while(1) {
      
      char x6699 = *x3;
      /* VAR */ int ite30734 = 0;
      if((x6699!=('|'))) {
        char x38835 = *x3;
        ite30734 = (x38835!=('\n'));
      } else {
        
        ite30734 = 0;
      };
      int x28316 = ite30734;
      if (!(x28316)) break; 
      
      x3 += 1;
    };
    char* x6706 = x6698;
    int x6707 = x3 - x6706;
    char* x6708 = x6698;
    char* x6709 = strncpy(x8063, x6708, x6707);
    x3 += 1;
    /* VAR */ double x6716 = 0.0;
    double x6717 = x6716;
    double* x6718 = &x6717;
    char* x6719 = strntod_unchecked(x3, x6718);
    x3 = x6719;
    char* x8086 = (char*)malloc(102 * sizeof(char));
    memset(x8086, 0, 102 * sizeof(char));
    /* VAR */ char* x6722 = x3;
    while(1) {
      
      char x6723 = *x3;
      /* VAR */ int ite30762 = 0;
      if((x6723!=('|'))) {
        char x38862 = *x3;
        ite30762 = (x38862!=('\n'));
      } else {
        
        ite30762 = 0;
      };
      int x28337 = ite30762;
      if (!(x28337)) break; 
      
      x3 += 1;
    };
    char* x6730 = x6722;
    int x6731 = x3 - x6730;
    char* x6732 = x6722;
    char* x6733 = strncpy(x8086, x6732, x6731);
    x3 += 1;
    struct SUPPLIERRecord* x8801 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x8801, 0, 1 * sizeof(struct SUPPLIERRecord));
    x8801->S_SUPPKEY = x6650; x8801->S_NAME = x8022; x8801->S_ADDRESS = x8040; x8801->S_NATIONKEY = x6693; x8801->S_PHONE = x8063; x8801->S_ACCTBAL = x6717; x8801->S_COMMENT = x8086;
    int x45 = x4;
    struct SUPPLIERRecord x8106 = *x8801;
    *(x7998 + x45) = x8106;
    struct SUPPLIERRecord* x8108 = &(x7998[x45]);
    x8801 = x8108;
    int x47 = x4;
    x4 = (x47+(1));
  };
  FILE* x6746 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x6747 = 0;
  int x6748 = x6747;
  int* x6749 = &x6748;
  int x6750 = fscanf(x6746, "%d", x6749);
  pclose(x6746);
  struct PARTRecord* x8119 = (struct PARTRecord*)malloc(x6748 * sizeof(struct PARTRecord));
  memset(x8119, 0, x6748 * sizeof(struct PARTRecord));
  int x6754 = O_RDONLY;
  int x6755 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x6754);
  /* VAR */ struct stat x6756 = x6634;
  struct stat x6757 = x6756;
  struct stat* x6758 = &x6757;
  int x6759 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x6758);
  int x6761 = PROT_READ;
  int x6762 = MAP_PRIVATE;
  char* x53 = mmap(NULL, (x6758->st_size), x6761, x6762, x6755, 0);
  /* VAR */ int x54 = 0;
  while(1) {
    
    int x55 = x54;
    /* VAR */ int ite30812 = 0;
    if((x55<(x6748))) {
      char x38911 = *x53;
      ite30812 = (x38911!=('\0'));
    } else {
      
      ite30812 = 0;
    };
    int x28380 = ite30812;
    if (!(x28380)) break; 
    
    /* VAR */ int x6770 = 0;
    int x6771 = x6770;
    int* x6772 = &x6771;
    char* x6773 = strntoi_unchecked(x53, x6772);
    x53 = x6773;
    char* x8142 = (char*)malloc(56 * sizeof(char));
    memset(x8142, 0, 56 * sizeof(char));
    /* VAR */ char* x6776 = x53;
    while(1) {
      
      char x6777 = *x53;
      /* VAR */ int ite30831 = 0;
      if((x6777!=('|'))) {
        char x38929 = *x53;
        ite30831 = (x38929!=('\n'));
      } else {
        
        ite30831 = 0;
      };
      int x28392 = ite30831;
      if (!(x28392)) break; 
      
      x53 += 1;
    };
    char* x6784 = x6776;
    int x6785 = x53 - x6784;
    char* x6786 = x6776;
    char* x6787 = strncpy(x8142, x6786, x6785);
    x53 += 1;
    char* x8160 = (char*)malloc(26 * sizeof(char));
    memset(x8160, 0, 26 * sizeof(char));
    /* VAR */ char* x6795 = x53;
    while(1) {
      
      char x6796 = *x53;
      /* VAR */ int ite30854 = 0;
      if((x6796!=('|'))) {
        char x38951 = *x53;
        ite30854 = (x38951!=('\n'));
      } else {
        
        ite30854 = 0;
      };
      int x28408 = ite30854;
      if (!(x28408)) break; 
      
      x53 += 1;
    };
    char* x6803 = x6795;
    int x6804 = x53 - x6803;
    char* x6805 = x6795;
    char* x6806 = strncpy(x8160, x6805, x6804);
    x53 += 1;
    char* x8178 = (char*)malloc(11 * sizeof(char));
    memset(x8178, 0, 11 * sizeof(char));
    /* VAR */ char* x6814 = x53;
    while(1) {
      
      char x6815 = *x53;
      /* VAR */ int ite30877 = 0;
      if((x6815!=('|'))) {
        char x38973 = *x53;
        ite30877 = (x38973!=('\n'));
      } else {
        
        ite30877 = 0;
      };
      int x28424 = ite30877;
      if (!(x28424)) break; 
      
      x53 += 1;
    };
    char* x6822 = x6814;
    int x6823 = x53 - x6822;
    char* x6824 = x6814;
    char* x6825 = strncpy(x8178, x6824, x6823);
    x53 += 1;
    char* x8196 = (char*)malloc(26 * sizeof(char));
    memset(x8196, 0, 26 * sizeof(char));
    /* VAR */ char* x6833 = x53;
    while(1) {
      
      char x6834 = *x53;
      /* VAR */ int ite30900 = 0;
      if((x6834!=('|'))) {
        char x38995 = *x53;
        ite30900 = (x38995!=('\n'));
      } else {
        
        ite30900 = 0;
      };
      int x28440 = ite30900;
      if (!(x28440)) break; 
      
      x53 += 1;
    };
    char* x6841 = x6833;
    int x6842 = x53 - x6841;
    char* x6843 = x6833;
    char* x6844 = strncpy(x8196, x6843, x6842);
    x53 += 1;
    /* VAR */ int x6851 = 0;
    int x6852 = x6851;
    int* x6853 = &x6852;
    char* x6854 = strntoi_unchecked(x53, x6853);
    x53 = x6854;
    char* x8219 = (char*)malloc(11 * sizeof(char));
    memset(x8219, 0, 11 * sizeof(char));
    /* VAR */ char* x6857 = x53;
    while(1) {
      
      char x6858 = *x53;
      /* VAR */ int ite30928 = 0;
      if((x6858!=('|'))) {
        char x39022 = *x53;
        ite30928 = (x39022!=('\n'));
      } else {
        
        ite30928 = 0;
      };
      int x28461 = ite30928;
      if (!(x28461)) break; 
      
      x53 += 1;
    };
    char* x6865 = x6857;
    int x6866 = x53 - x6865;
    char* x6867 = x6857;
    char* x6868 = strncpy(x8219, x6867, x6866);
    x53 += 1;
    /* VAR */ double x6875 = 0.0;
    double x6876 = x6875;
    double* x6877 = &x6876;
    char* x6878 = strntod_unchecked(x53, x6877);
    x53 = x6878;
    char* x8242 = (char*)malloc(24 * sizeof(char));
    memset(x8242, 0, 24 * sizeof(char));
    /* VAR */ char* x6881 = x53;
    while(1) {
      
      char x6882 = *x53;
      /* VAR */ int ite30956 = 0;
      if((x6882!=('|'))) {
        char x39049 = *x53;
        ite30956 = (x39049!=('\n'));
      } else {
        
        ite30956 = 0;
      };
      int x28482 = ite30956;
      if (!(x28482)) break; 
      
      x53 += 1;
    };
    char* x6889 = x6881;
    int x6890 = x53 - x6889;
    char* x6891 = x6881;
    char* x6892 = strncpy(x8242, x6891, x6890);
    x53 += 1;
    struct PARTRecord* x8959 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x8959, 0, 1 * sizeof(struct PARTRecord));
    x8959->P_PARTKEY = x6771; x8959->P_NAME = x8142; x8959->P_MFGR = x8160; x8959->P_BRAND = x8178; x8959->P_TYPE = x8196; x8959->P_SIZE = x6852; x8959->P_CONTAINER = x8219; x8959->P_RETAILPRICE = x6876; x8959->P_COMMENT = x8242;
    int x109 = x54;
    struct PARTRecord x8262 = *x8959;
    *(x8119 + x109) = x8262;
    struct PARTRecord* x8264 = &(x8119[x109]);
    x8959 = x8264;
    int x111 = x54;
    x54 = (x111+(1));
  };
  FILE* x6905 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x6906 = 0;
  int x6907 = x6906;
  int* x6908 = &x6907;
  int x6909 = fscanf(x6905, "%d", x6908);
  pclose(x6905);
  struct PARTSUPPRecord* x8275 = (struct PARTSUPPRecord*)malloc(x6907 * sizeof(struct PARTSUPPRecord));
  memset(x8275, 0, x6907 * sizeof(struct PARTSUPPRecord));
  int x6913 = O_RDONLY;
  int x6914 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x6913);
  /* VAR */ struct stat x6915 = x6634;
  struct stat x6916 = x6915;
  struct stat* x6917 = &x6916;
  int x6918 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x6917);
  int x6920 = PROT_READ;
  int x6921 = MAP_PRIVATE;
  char* x117 = mmap(NULL, (x6917->st_size), x6920, x6921, x6914, 0);
  /* VAR */ int x118 = 0;
  while(1) {
    
    int x119 = x118;
    /* VAR */ int ite31006 = 0;
    if((x119<(x6907))) {
      char x39098 = *x117;
      ite31006 = (x39098!=('\0'));
    } else {
      
      ite31006 = 0;
    };
    int x28525 = ite31006;
    if (!(x28525)) break; 
    
    /* VAR */ int x6929 = 0;
    int x6930 = x6929;
    int* x6931 = &x6930;
    char* x6932 = strntoi_unchecked(x117, x6931);
    x117 = x6932;
    /* VAR */ int x6934 = 0;
    int x6935 = x6934;
    int* x6936 = &x6935;
    char* x6937 = strntoi_unchecked(x117, x6936);
    x117 = x6937;
    /* VAR */ int x6939 = 0;
    int x6940 = x6939;
    int* x6941 = &x6940;
    char* x6942 = strntoi_unchecked(x117, x6941);
    x117 = x6942;
    /* VAR */ double x6944 = 0.0;
    double x6945 = x6944;
    double* x6946 = &x6945;
    char* x6947 = strntod_unchecked(x117, x6946);
    x117 = x6947;
    char* x8313 = (char*)malloc(200 * sizeof(char));
    memset(x8313, 0, 200 * sizeof(char));
    /* VAR */ char* x6950 = x117;
    while(1) {
      
      char x6951 = *x117;
      /* VAR */ int ite31040 = 0;
      if((x6951!=('|'))) {
        char x39131 = *x117;
        ite31040 = (x39131!=('\n'));
      } else {
        
        ite31040 = 0;
      };
      int x28552 = ite31040;
      if (!(x28552)) break; 
      
      x117 += 1;
    };
    char* x6958 = x6950;
    int x6959 = x117 - x6958;
    char* x6960 = x6950;
    char* x6961 = strncpy(x8313, x6960, x6959);
    x117 += 1;
    struct PARTSUPPRecord* x9032 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x9032, 0, 1 * sizeof(struct PARTSUPPRecord));
    x9032->PS_PARTKEY = x6930; x9032->PS_SUPPKEY = x6935; x9032->PS_AVAILQTY = x6940; x9032->PS_SUPPLYCOST = x6945; x9032->PS_COMMENT = x8313;
    int x136 = x118;
    struct PARTSUPPRecord x8333 = *x9032;
    *(x8275 + x136) = x8333;
    struct PARTSUPPRecord* x8335 = &(x8275[x136]);
    x9032 = x8335;
    int x138 = x118;
    x118 = (x138+(1));
  };
  int x143 = 0;
  for(; x143 < 1 ; x143 += 1) {
    
    GHashTable* x40355 = g_hash_table_new(x40290, x40329);
    GHashTable* x40432 = g_hash_table_new(x40356, x40397);
    GHashTable* x40442 = g_hash_table_new(((void***){x40433}), ((int*){x40436}));
    GHashTable* x40452 = g_hash_table_new(((void***){x40443}), ((int*){x40446}));
    /* VAR */ int x40453 = 0;
    struct PARTRecord_PARTSUPPRecord* x40454 = (struct PARTRecord_PARTSUPPRecord*)malloc(6400000 * sizeof(struct PARTRecord_PARTSUPPRecord));
    memset(x40454, 0, 6400000 * sizeof(struct PARTRecord_PARTSUPPRecord));
    /* VAR */ int x40455 = 0;
    while(1) {
      
      int x5595 = x40455;
      if (!((x5595<(6400000)))) break; 
      
      int x5597 = x40455;
      struct PARTRecord_PARTSUPPRecord* x9057 = (struct PARTRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct PARTRecord_PARTSUPPRecord));
      memset(x9057, 0, 1 * sizeof(struct PARTRecord_PARTSUPPRecord));
      x9057->P_PARTKEY = 0; x9057->P_NAME = ""; x9057->P_MFGR = ""; x9057->P_BRAND = ""; x9057->P_TYPE = ""; x9057->P_SIZE = 0; x9057->P_CONTAINER = ""; x9057->P_RETAILPRICE = 0.0; x9057->P_COMMENT = ""; x9057->PS_PARTKEY = 0; x9057->PS_SUPPKEY = 0; x9057->PS_AVAILQTY = 0; x9057->PS_SUPPLYCOST = 0.0; x9057->PS_COMMENT = "";
      struct PARTRecord_PARTSUPPRecord x8355 = *x9057;
      *(x40454 + x5597) = x8355;
      struct PARTRecord_PARTSUPPRecord* x8357 = &(x40454[x5597]);
      x9057 = x8357;
      int x5600 = x40455;
      x40455 = (x5600+(1));
    };
    /* VAR */ int x40470 = 0;
    struct Q16GRPRecord1* x40471 = (struct Q16GRPRecord1*)malloc(6400000 * sizeof(struct Q16GRPRecord1));
    memset(x40471, 0, 6400000 * sizeof(struct Q16GRPRecord1));
    /* VAR */ int x40472 = 0;
    while(1) {
      
      int x5607 = x40472;
      if (!((x5607<(6400000)))) break; 
      
      int x5609 = x40472;
      struct Q16GRPRecord1* x9074 = (struct Q16GRPRecord1*)malloc(1 * sizeof(struct Q16GRPRecord1));
      memset(x9074, 0, 1 * sizeof(struct Q16GRPRecord1));
      x9074->P_BRAND = ""; x9074->P_TYPE = ""; x9074->P_SIZE = 0; x9074->PS_SUPPKEY = 0;
      struct Q16GRPRecord1 x8370 = *x9074;
      *(x40471 + x5609) = x8370;
      struct Q16GRPRecord1* x8372 = &(x40471[x5609]);
      x9074 = x8372;
      int x5612 = x40472;
      x40472 = (x5612+(1));
    };
    /* VAR */ int x40487 = 0;
    struct AGGRecord_Q16GRPRecord1* x40488 = (struct AGGRecord_Q16GRPRecord1*)malloc(6400000 * sizeof(struct AGGRecord_Q16GRPRecord1));
    memset(x40488, 0, 6400000 * sizeof(struct AGGRecord_Q16GRPRecord1));
    /* VAR */ int x40489 = 0;
    while(1) {
      
      int x5619 = x40489;
      if (!((x5619<(6400000)))) break; 
      
      int x5621 = x40489;
      struct Q16GRPRecord1* x5622 = &(x40471[x5621]);
      struct AGGRecord_Q16GRPRecord1* x9092 = (struct AGGRecord_Q16GRPRecord1*)malloc(1 * sizeof(struct AGGRecord_Q16GRPRecord1));
      memset(x9092, 0, 1 * sizeof(struct AGGRecord_Q16GRPRecord1));
      x9092->key = x5622; x9092->aggs = 0.0;
      struct AGGRecord_Q16GRPRecord1 x8386 = *x9092;
      *(x40488 + x5621) = x8386;
      struct AGGRecord_Q16GRPRecord1* x8388 = &(x40488[x5621]);
      x9092 = x8388;
      int x5625 = x40489;
      x40489 = (x5625+(1));
    };
    /* VAR */ int x40505 = 0;
    struct Q16GRPRecord2* x40506 = (struct Q16GRPRecord2*)malloc(6400000 * sizeof(struct Q16GRPRecord2));
    memset(x40506, 0, 6400000 * sizeof(struct Q16GRPRecord2));
    /* VAR */ int x40507 = 0;
    while(1) {
      
      int x5632 = x40507;
      if (!((x5632<(6400000)))) break; 
      
      int x5634 = x40507;
      struct Q16GRPRecord2* x9109 = (struct Q16GRPRecord2*)malloc(1 * sizeof(struct Q16GRPRecord2));
      memset(x9109, 0, 1 * sizeof(struct Q16GRPRecord2));
      x9109->P_BRAND = ""; x9109->P_TYPE = ""; x9109->P_SIZE = 0;
      struct Q16GRPRecord2 x8401 = *x9109;
      *(x40506 + x5634) = x8401;
      struct Q16GRPRecord2* x8403 = &(x40506[x5634]);
      x9109 = x8403;
      int x5637 = x40507;
      x40507 = (x5637+(1));
    };
    /* VAR */ int x40522 = 0;
    struct AGGRecord_Q16GRPRecord2* x40523 = (struct AGGRecord_Q16GRPRecord2*)malloc(187500 * sizeof(struct AGGRecord_Q16GRPRecord2));
    memset(x40523, 0, 187500 * sizeof(struct AGGRecord_Q16GRPRecord2));
    /* VAR */ int x40524 = 0;
    while(1) {
      
      int x5644 = x40524;
      if (!((x5644<(187500)))) break; 
      
      int x5646 = x40524;
      struct Q16GRPRecord2* x5647 = &(x40506[x5646]);
      struct AGGRecord_Q16GRPRecord2* x9127 = (struct AGGRecord_Q16GRPRecord2*)malloc(1 * sizeof(struct AGGRecord_Q16GRPRecord2));
      memset(x9127, 0, 1 * sizeof(struct AGGRecord_Q16GRPRecord2));
      x9127->key = x5647; x9127->aggs = 0.0;
      struct AGGRecord_Q16GRPRecord2 x8417 = *x9127;
      *(x40523 + x5646) = x8417;
      struct AGGRecord_Q16GRPRecord2* x8419 = &(x40523[x5646]);
      x9127 = x8419;
      int x5650 = x40524;
      x40524 = (x5650+(1));
    };
    /* VAR */ struct timeval x40540 = x5908;
    struct timeval x40541 = x40540;
    /* VAR */ struct timeval x40542 = x5908;
    struct timeval x40543 = x40542;
    /* VAR */ struct timeval x40544 = x5908;
    struct timeval x40545 = x40544;
    struct timeval* x40546 = &x40543;
    gettimeofday(x40546, NULL);
    /* VAR */ int x40548 = 0;
    /* VAR */ int x40549 = 0;
    /* VAR */ int x40550 = 0;
    int* x40635 = &(x40593);
    GTree* x40636 = g_tree_new(x40635);
    /* VAR */ int x40637 = 0;
    /* VAR */ int x40638 = 0;
    while(1) {
      
      int x40640 = x40548;
      if (!((x40640<(x6748)))) break; 
      
      int x2015 = x40548;
      struct PARTRecord* x293 = &(x8119[x2015]);
      int x22904 = strlen("Brand#21");
      int x22905 = strncmp((x293->P_BRAND), "Brand#21", x22904);
      int x297 = !((x22905==(0)));
      /* VAR */ int ite32545 = 0;
      if(x297) {
        int x40652 = strlen("PROMO PLATED");
        int x40653 = strncmp((x293->P_TYPE), "PROMO PLATED", x40652);
        int x40655 = !((x40653==(0)));
        ite32545 = x40655;
      } else {
        
        ite32545 = 0;
      };
      int x29948 = ite32545;
      /* VAR */ int ite32557 = 0;
      if(x29948) {
        int x40662 = x293->P_SIZE;
        /* VAR */ int x40664 = 0;
        if((x40662==(23))) {
          x40664 = 1;
        } else {
          
          x40664 = (x40662==(3));
        };
        int x40670 = x40664;
        /* VAR */ int x40671 = 0;
        if(x40670) {
          x40671 = 1;
        } else {
          
          x40671 = (x40662==(33));
        };
        int x40677 = x40671;
        /* VAR */ int x40678 = 0;
        if(x40677) {
          x40678 = 1;
        } else {
          
          x40678 = (x40662==(29));
        };
        int x40684 = x40678;
        /* VAR */ int x40685 = 0;
        if(x40684) {
          x40685 = 1;
        } else {
          
          x40685 = (x40662==(40));
        };
        int x40691 = x40685;
        /* VAR */ int x40692 = 0;
        if(x40691) {
          x40692 = 1;
        } else {
          
          x40692 = (x40662==(27));
        };
        int x40698 = x40692;
        /* VAR */ int x40699 = 0;
        if(x40698) {
          x40699 = 1;
        } else {
          
          x40699 = (x40662==(22));
        };
        int x40705 = x40699;
        /* VAR */ int x40706 = 0;
        if(x40705) {
          x40706 = 1;
        } else {
          
          x40706 = (x40662==(4));
        };
        int x40712 = x40706;
        ite32557 = x40712;
      } else {
        
        ite32557 = 0;
      };
      int x29950 = ite32557;
      if(x29950) {
        void* x9947 = (void*){(x293->P_PARTKEY)};
        void* x9949 = g_hash_table_lookup(x40452, x9947);
        GList** x9950 = (GList**){x9949};
        GList** x9951 = NULL;
        /* VAR */ GList** ite29960 = 0;
        if((x9950==(x9951))) {
          GList** x29961 = malloc(8);
          GList* x29962 = NULL;
          pointer_assign(x29961, x29962);
          ite29960 = x29961;
        } else {
          
          ite29960 = x9950;
        };
        GList** x9956 = ite29960;
        GList* x9957 = *(x9956);
        GList* x9958 = g_list_prepend(x9957, ((void*){x293}));
        pointer_assign(x9956, x9958);
        g_hash_table_insert(x40452, x9947, ((void*){x9956}));
      };
      int x2045 = x40548;
      x40548 = (x2045+(1));
    };
    while(1) {
      
      int x40743 = x40549;
      if (!((x40743<(x6907)))) break; 
      
      int x2054 = x40549;
      struct PARTSUPPRecord* x333 = &(x8275[x2054]);
      int x335 = x333->PS_PARTKEY;
      void* x9973 = g_hash_table_lookup(x40452, ((void*){x335}));
      GList** x9974 = (GList**){x9973};
      if((x9974!=(NULL))) {
        GList* x11705 = *(x9974);
        /* VAR */ GList* x11706 = x11705;
        while(1) {
          
          GList* x11707 = x11706;
          GList* x11708 = NULL;
          if (!((x11707!=(x11708)))) break; 
          
          GList* x11710 = x11706;
          void* x11711 = g_list_nth_data(x11710, 0);
          struct PARTRecord* x11712 = (struct PARTRecord*){x11711};
          GList* x11713 = x11706;
          GList* x11714 = g_list_next(x11713);
          x11706 = x11714;
          int x11716 = x11712->P_PARTKEY;
          if((x11716==(x335))) {
            int x5761 = x40453;
            struct PARTRecord_PARTSUPPRecord* x5762 = &(x40454[x5761]);
            x5762->P_PARTKEY = x11716;
            x5762->P_NAME = (x11712->P_NAME);
            x5762->P_MFGR = (x11712->P_MFGR);
            x5762->P_BRAND = (x11712->P_BRAND);
            x5762->P_TYPE = (x11712->P_TYPE);
            x5762->P_SIZE = (x11712->P_SIZE);
            x5762->P_CONTAINER = (x11712->P_CONTAINER);
            x5762->P_RETAILPRICE = (x11712->P_RETAILPRICE);
            x5762->P_COMMENT = (x11712->P_COMMENT);
            x5762->PS_PARTKEY = x335;
            x5762->PS_SUPPKEY = (x333->PS_SUPPKEY);
            x5762->PS_AVAILQTY = (x333->PS_AVAILQTY);
            x5762->PS_SUPPLYCOST = (x333->PS_SUPPLYCOST);
            x5762->PS_COMMENT = (x333->PS_COMMENT);
            int x5777 = x40453;
            x40453 = (x5777+(1));
            void* x10016 = (void*){(x5762->PS_SUPPKEY)};
            void* x10018 = g_hash_table_lookup(x40442, x10016);
            GList** x10019 = (GList**){x10018};
            GList** x10020 = NULL;
            /* VAR */ GList** ite30097 = 0;
            if((x10019==(x10020))) {
              GList** x30098 = malloc(8);
              GList* x30099 = NULL;
              pointer_assign(x30098, x30099);
              ite30097 = x30098;
            } else {
              
              ite30097 = x10019;
            };
            GList** x10025 = ite30097;
            GList* x10026 = *(x10025);
            GList* x10027 = g_list_prepend(x10026, ((void*){x5762}));
            pointer_assign(x10025, x10027);
            g_hash_table_insert(x40442, x10016, ((void*){x10025}));
          };
        };
      };
      int x2106 = x40549;
      x40549 = (x2106+(1));
    };
    while(1) {
      
      int x40881 = x40550;
      if (!((x40881<(x6626)))) break; 
      
      int x2116 = x40550;
      struct SUPPLIERRecord* x374 = &(x7998[x2116]);
      char* x376 = x374->S_COMMENT;
      char* x23087 = pointer_add(x376, 0);
      char* x23088 = strstr(x23087, "Customer");
      char* x23089 = NULL;
      /* VAR */ int ite30123 = 0;
      if((x23088==(x23089))) {
        ite30123 = -1;
      } else {
        
        int x30125 = str_subtract(x23088, x376);
        ite30123 = x30125;
      };
      int x23092 = ite30123;
      char* x23093 = pointer_add(x376, x23092);
      char* x23094 = strstr(x23093, "Complaints");
      char* x23095 = NULL;
      /* VAR */ int ite30134 = 0;
      if((x23094==(x23095))) {
        ite30134 = -1;
      } else {
        
        int x30136 = str_subtract(x23094, x376);
        ite30134 = x30136;
      };
      int x23098 = ite30134;
      /* VAR */ int ite32774 = 0;
      if((x23092!=(-1))) {
        ite32774 = (x23098!=(-1));
      } else {
        
        ite32774 = 0;
      };
      int x30142 = ite32774;
      if(x30142) {
        int x382 = x374->S_SUPPKEY;
        void* x10050 = g_hash_table_lookup(x40442, ((void*){x382}));
        GList** x10051 = (GList**){x10050};
        if((x10051!=(NULL))) {
          GList* x11796 = *(x10051);
          /* VAR */ GList* x11797 = x11796;
          /* VAR */ GList** x11798 = x10051;
          while(1) {
            
            GList* x11799 = x11797;
            GList* x11800 = NULL;
            if (!((x11799!=(x11800)))) break; 
            
            GList* x11802 = x11797;
            void* x11803 = g_list_nth_data(x11802, 0);
            int x11807 = !(((((struct PARTRecord_PARTSUPPRecord*){x11803})->PS_SUPPKEY)==(x382)));
            if(x11807) {
              GList* x11808 = x11797;
              GList** x11810 = &((x11808->next));
              x11798 = x11810;
            } else {
              
              GList** x11812 = x11798;
              GList* x11813 = x11797;
              GList* x11814 = g_list_next(x11813);
              pointer_assign(x11812, x11814);
            };
            GList* x11817 = x11797;
            GList* x11818 = g_list_next(x11817);
            x11797 = x11818;
          };
        };
      };
      int x2145 = x40550;
      x40550 = (x2145+(1));
    };
    GList* x41042 = g_hash_table_get_keys(x40442);
    /* VAR */ GList* x41043 = x41042;
    int x41044 = g_hash_table_size(x40442);
    int x25696 = 0;
    for(; x25696 < x41044 ; x25696 += 1) {
      
      GList* x25697 = x41043;
      void* x25698 = g_list_nth_data(x25697, 0);
      GList* x25699 = x41043;
      GList* x25700 = g_list_next(x25699);
      x41043 = x25700;
      void* x25702 = g_hash_table_lookup(x40442, x25698);
      GList* x25735 = *(((GList**){x25702}));
      /* VAR */ GList* x25736 = x25735;
      while(1) {
        
        GList* x11968 = x25736;
        GList* x11969 = NULL;
        if (!((x11968!=(x11969)))) break; 
        
        GList* x11971 = x25736;
        void* x11972 = g_list_nth_data(x11971, 0);
        struct PARTRecord_PARTSUPPRecord* x11973 = (struct PARTRecord_PARTSUPPRecord*){x11972};
        GList* x11974 = x25736;
        GList* x11975 = g_list_next(x11974);
        x25736 = x11975;
        int x11981 = x40470;
        struct Q16GRPRecord1* x11982 = &(x40471[x11981]);
        x11982->P_BRAND = (x11973->P_BRAND);
        x11982->P_TYPE = (x11973->P_TYPE);
        x11982->P_SIZE = (x11973->P_SIZE);
        x11982->PS_SUPPKEY = (x11973->PS_SUPPKEY);
        int x11987 = x40470;
        x40470 = (x11987+(1));
        void* x11990 = g_hash_table_lookup(x40432, x11982);
        /* VAR */ struct AGGRecord_Q16GRPRecord1* ite30435 = 0;
        if((x11990==(NULL))) {
          /* VAR */ double x30436 = 0;
          /* VAR */ double x30437 = 0;
          double x30438 = x30437;
          int x30439 = x40487;
          struct AGGRecord_Q16GRPRecord1* x30440 = &(x40488[x30439]);
          x30440->key = x11982;
          x30440->aggs = x30438;
          int x30443 = x40487;
          x40487 = (x30443+(1));
          g_hash_table_insert(x40432, x11982, x30440);
          ite30435 = x30440;
        } else {
          
          ite30435 = x11990;
        };
        struct AGGRecord_Q16GRPRecord1* x11992 = ite30435;
        double x12004 = x11992->aggs;
        x11992->aggs = x12004;
      };
    };
    GList* x41263 = g_hash_table_get_keys(x40432);
    /* VAR */ GList* x41264 = x41263;
    int x41265 = g_hash_table_size(x40432);
    int x25850 = 0;
    for(; x25850 < x41265 ; x25850 += 1) {
      
      GList* x25851 = x41264;
      void* x25852 = g_list_nth_data(x25851, 0);
      GList* x25853 = g_list_next(x25851);
      x41264 = x25853;
      void* x25855 = g_hash_table_lookup(x40432, x25852);
      struct Q16GRPRecord1* x25858 = ((struct AGGRecord_Q16GRPRecord1*){x25855})->key;
      int x25862 = x40505;
      struct Q16GRPRecord2* x25863 = &(x40506[x25862]);
      x25863->P_BRAND = (x25858->P_BRAND);
      x25863->P_TYPE = (x25858->P_TYPE);
      x25863->P_SIZE = (x25858->P_SIZE);
      int x25867 = x40505;
      x40505 = (x25867+(1));
      void* x25870 = g_hash_table_lookup(x40355, x25863);
      /* VAR */ struct AGGRecord_Q16GRPRecord2* ite30559 = 0;
      if((x25870==(NULL))) {
        /* VAR */ double x30560 = 0;
        /* VAR */ double x30561 = 0;
        double x30562 = x30561;
        int x30563 = x40522;
        struct AGGRecord_Q16GRPRecord2* x30564 = &(x40523[x30563]);
        x30564->key = x25863;
        x30564->aggs = x30562;
        int x30567 = x40522;
        x40522 = (x30567+(1));
        g_hash_table_insert(x40355, x25863, x30564);
        ite30559 = x30564;
      } else {
        
        ite30559 = x25870;
      };
      struct AGGRecord_Q16GRPRecord2* x25872 = ite30559;
      double x25884 = x25872->aggs;
      x25872->aggs = (x25884+(1.0));
    };
    GList* x41355 = g_hash_table_get_keys(x40355);
    /* VAR */ GList* x41356 = x41355;
    int x41357 = g_hash_table_size(x40355);
    int x25905 = 0;
    for(; x25905 < x41357 ; x25905 += 1) {
      
      GList* x25906 = x41356;
      void* x25907 = g_list_nth_data(x25906, 0);
      GList* x25908 = g_list_next(x25906);
      x41356 = x25908;
      void* x25910 = g_hash_table_lookup(x40355, x25907);
      struct AGGRecord_Q16GRPRecord2* x25912 = (struct AGGRecord_Q16GRPRecord2*){x25910};
      g_tree_insert(x40636, x25912, x25912);
    };
    while(1) {
      
      int x2225 = x40637;
      int x490 = !(x2225);
      /* VAR */ int ite33246 = 0;
      if(x490) {
        int x41382 = g_tree_nnodes(x40636);
        ite33246 = (x41382!=(0));
      } else {
        
        ite33246 = 0;
      };
      int x30608 = ite33246;
      if (!(x30608)) break; 
      
      void* x12122 = NULL;
      void** x12130 = &(x12122);
      g_tree_foreach(x40636, x12129, x12130);
      struct AGGRecord_Q16GRPRecord2* x12132 = (struct AGGRecord_Q16GRPRecord2*){x12122};
      int x12133 = g_tree_remove(x40636, x12132);
      if(0) {
        x40637 = 1;
      } else {
        
        struct Q16GRPRecord2* x503 = x12132->key;
        double x4033 = x12132->aggs;
        printf("%s|%s|%d|%.0f\n", (x503->P_BRAND), (x503->P_TYPE), (x503->P_SIZE), x4033);
        int x2247 = x40638;
        x40638 = (x2247+(1));
      };
    };
    int x41411 = x40638;
    printf("(%d rows)\n", x41411);
    struct timeval* x41413 = &x40545;
    gettimeofday(x41413, NULL);
    struct timeval* x41415 = &x40541;
    struct timeval* x41416 = &x40545;
    struct timeval* x41417 = &x40543;
    long x41418 = timeval_subtract(x41415, x41416, x41417);
    printf("Generated code run in %ld milliseconds.\n", x41418);
  };
}
/* ----------- FUNCTIONS ----------- */
int x40290(struct Q16GRPRecord2* x11379) {
  char* x19087 = x11379->P_BRAND;
  int x22592 = strlen(x19087);
  /* VAR */ int x20220 = 0;
  /* VAR */ int x20221 = 0;
  while(1) {
    
    int x20222 = x20220;
    if (!((x20222<(x22592)))) break; 
    
    int x20224 = x20221;
    int x20225 = x20220;
    char* x22600 = pointer_add(x19087, x20225);
    char x22601 = *(x22600);
    x20221 = (x20224+(x22601));
    int x20230 = x20220;
    x20220 = (x20230+(1));
  };
  int x20234 = x20221;
  char* x19089 = x11379->P_TYPE;
  int x22610 = strlen(x19089);
  /* VAR */ int x20237 = 0;
  /* VAR */ int x20238 = 0;
  while(1) {
    
    int x20239 = x20237;
    if (!((x20239<(x22610)))) break; 
    
    int x20241 = x20238;
    int x20242 = x20237;
    char* x22618 = pointer_add(x19089, x20242);
    char x22619 = *(x22618);
    x20238 = (x20241+(x22619));
    int x20247 = x20237;
    x20237 = (x20247+(1));
  };
  int x20251 = x20238;
  return ((x20234+(x20251))+((x11379->P_SIZE))); 
}

int x40329(struct Q16GRPRecord2* x11384, struct Q16GRPRecord2* x11385) {
  int x20260 = strcmp((x11384->P_BRAND), (x11385->P_BRAND));
  int x20261 = !(x20260);
  int x20264 = strcmp((x11384->P_TYPE), (x11385->P_TYPE));
  int x20265 = !(x20264);
  /* VAR */ int ite32233 = 0;
  if(x20261) {
    ite32233 = x20265;
  } else {
    
    ite32233 = 0;
  };
  int x29663 = ite32233;
  /* VAR */ int ite32240 = 0;
  if(x29663) {
    ite32240 = ((x11384->P_SIZE)==((x11385->P_SIZE)));
  } else {
    
    ite32240 = 0;
  };
  int x29665 = ite32240;
  return x29665; 
}

int x40356(struct Q16GRPRecord1* x11392) {
  char* x19112 = x11392->P_BRAND;
  int x22650 = strlen(x19112);
  /* VAR */ int x20276 = 0;
  /* VAR */ int x20277 = 0;
  while(1) {
    
    int x20278 = x20276;
    if (!((x20278<(x22650)))) break; 
    
    int x20280 = x20277;
    int x20281 = x20276;
    char* x22658 = pointer_add(x19112, x20281);
    char x22659 = *(x22658);
    x20277 = (x20280+(x22659));
    int x20286 = x20276;
    x20276 = (x20286+(1));
  };
  int x20290 = x20277;
  char* x19114 = x11392->P_TYPE;
  int x22668 = strlen(x19114);
  /* VAR */ int x20293 = 0;
  /* VAR */ int x20294 = 0;
  while(1) {
    
    int x20295 = x20293;
    if (!((x20295<(x22668)))) break; 
    
    int x20297 = x20294;
    int x20298 = x20293;
    char* x22676 = pointer_add(x19114, x20298);
    char x22677 = *(x22676);
    x20294 = (x20297+(x22677));
    int x20303 = x20293;
    x20293 = (x20303+(1));
  };
  int x20307 = x20294;
  return (((x20290+(x20307))+((x11392->P_SIZE)))+((x11392->PS_SUPPKEY))); 
}

int x40397(struct Q16GRPRecord1* x11397, struct Q16GRPRecord1* x11398) {
  int x20318 = strcmp((x11397->P_BRAND), (x11398->P_BRAND));
  int x20319 = !(x20318);
  int x20322 = strcmp((x11397->P_TYPE), (x11398->P_TYPE));
  int x20323 = !(x20322);
  /* VAR */ int ite32306 = 0;
  if(x20319) {
    ite32306 = x20323;
  } else {
    
    ite32306 = 0;
  };
  int x29726 = ite32306;
  /* VAR */ int ite32313 = 0;
  if(x29726) {
    ite32313 = ((x11397->P_SIZE)==((x11398->P_SIZE)));
  } else {
    
    ite32313 = 0;
  };
  int x29728 = ite32313;
  /* VAR */ int ite32320 = 0;
  if(x29728) {
    ite32320 = ((x11397->PS_SUPPKEY)==((x11398->PS_SUPPKEY)));
  } else {
    
    ite32320 = 0;
  };
  int x29730 = ite32320;
  return x29730; 
}

int x40433(void* x9761) {
  int x9762 = g_direct_hash(x9761);
  return x9762; 
}

int x40436(void* x9764, void* x9765) {
  int x9766 = g_direct_equal(x9764, x9765);
  return x9766; 
}

int x40443(void* x9771) {
  int x9772 = g_direct_hash(x9771);
  return x9772; 
}

int x40446(void* x9774, void* x9775) {
  int x9776 = g_direct_equal(x9774, x9775);
  return x9776; 
}

int x40593(struct AGGRecord_Q16GRPRecord2* x240, struct AGGRecord_Q16GRPRecord2* x241) {
  double x4192 = x240->aggs;
  double x4194 = x241->aggs;
  /* VAR */ int ite29899 = 0;
  if((x4192<(x4194))) {
    ite29899 = 1;
  } else {
    
    double x29901 = x240->aggs;
    double x29902 = x241->aggs;
    /* VAR */ int ite29905 = 0;
    if((x29901>(x29902))) {
      ite29905 = -1;
    } else {
      
      struct Q16GRPRecord2* x29907 = x240->key;
      struct Q16GRPRecord2* x29909 = x241->key;
      int x29911 = strcmp((x29907->P_BRAND), (x29909->P_BRAND));
      /* VAR */ int x29912 = x29911;
      int x29913 = x29912;
      if((x29913==(0))) {
        int x22883 = strcmp((x29907->P_TYPE), (x29909->P_TYPE));
        x29912 = x22883;
        int x262 = x29912;
        if((x262==(0))) {
          x29912 = ((x29907->P_SIZE)-((x29909->P_SIZE)));
        };
      };
      int x29927 = x29912;
      ite29905 = x29927;
    };
    int x29904 = ite29905;
    ite29899 = x29904;
  };
  int x272 = ite29899;
  return x272; 
}

int x12129(void* x12123, void* x12124, void* x12125) {
  pointer_assign(((struct AGGRecord_Q16GRPRecord2**){x12125}), ((struct AGGRecord_Q16GRPRecord2*){x12124}));
  return 1; 
}
