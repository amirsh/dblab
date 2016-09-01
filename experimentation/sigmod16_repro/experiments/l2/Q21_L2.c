#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct NATIONRecord_SUPPLIERRecord;
  struct LINEITEMRecord;
  struct AGGRecord_OptimalString;
  struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord;
  struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord;
  struct NATIONRecord;
  struct ORDERSRecord;
  struct SUPPLIERRecord;
  
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
  };
  
  struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
  };
  
  struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord {
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
  };
  
  struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
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
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
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
  
  


int x64448(char* x14676);

int x64466(char* x14681, char* x14682);

int x64472(void* x12147);

int x64475(void* x12150, void* x12151);

int x64482(void* x12157);

int x64485(void* x12160, void* x12161);

int x64492(void* x12167);

int x64495(void* x12170, void* x12171);

int x64502(void* x12177);

int x64505(void* x12180, void* x12181);

int x64512(void* x12187);

int x64515(void* x12190, void* x12191);

int x64641(struct AGGRecord_OptimalString* x294, struct AGGRecord_OptimalString* x295);

int x16349(void* x16343, void* x16344, void* x16345);
/* GLOBAL VARS */

struct timeval x6645;
int main(int argc, char** argv) {
  FILE* x7642 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x7643 = 0;
  int x7644 = x7643;
  int* x7645 = &x7644;
  int x7646 = fscanf(x7642, "%d", x7645);
  pclose(x7642);
  struct LINEITEMRecord* x9612 = (struct LINEITEMRecord*)malloc(x7644 * sizeof(struct LINEITEMRecord));
  memset(x9612, 0, x7644 * sizeof(struct LINEITEMRecord));
  int x7650 = O_RDONLY;
  int x7651 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x7650);
  struct stat x7652 = (struct stat){0};
  /* VAR */ struct stat x7653 = x7652;
  struct stat x7654 = x7653;
  struct stat* x7655 = &x7654;
  int x7656 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x7655);
  int x7658 = PROT_READ;
  int x7659 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x7655->st_size), x7658, x7659, x7651, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite51103 = 0;
    if((x5<(x7644))) {
      char x61574 = *x3;
      ite51103 = (x61574!=('\0'));
    } else {
      
      ite51103 = 0;
    };
    int x46114 = ite51103;
    if (!(x46114)) break; 
    
    /* VAR */ int x7667 = 0;
    int x7668 = x7667;
    int* x7669 = &x7668;
    char* x7670 = strntoi_unchecked(x3, x7669);
    x3 = x7670;
    /* VAR */ int x7672 = 0;
    int x7673 = x7672;
    int* x7674 = &x7673;
    char* x7675 = strntoi_unchecked(x3, x7674);
    x3 = x7675;
    /* VAR */ int x7677 = 0;
    int x7678 = x7677;
    int* x7679 = &x7678;
    char* x7680 = strntoi_unchecked(x3, x7679);
    x3 = x7680;
    /* VAR */ int x7682 = 0;
    int x7683 = x7682;
    int* x7684 = &x7683;
    char* x7685 = strntoi_unchecked(x3, x7684);
    x3 = x7685;
    /* VAR */ double x7687 = 0.0;
    double x7688 = x7687;
    double* x7689 = &x7688;
    char* x7690 = strntod_unchecked(x3, x7689);
    x3 = x7690;
    /* VAR */ double x7692 = 0.0;
    double x7693 = x7692;
    double* x7694 = &x7693;
    char* x7695 = strntod_unchecked(x3, x7694);
    x3 = x7695;
    /* VAR */ double x7697 = 0.0;
    double x7698 = x7697;
    double* x7699 = &x7698;
    char* x7700 = strntod_unchecked(x3, x7699);
    x3 = x7700;
    /* VAR */ double x7702 = 0.0;
    double x7703 = x7702;
    double* x7704 = &x7703;
    char* x7705 = strntod_unchecked(x3, x7704);
    x3 = x7705;
    char x7707 = *x3;
    /* VAR */ char x7708 = x7707;
    x3 += 1;
    x3 += 1;
    char x7711 = x7708;
    char x7712 = *x3;
    /* VAR */ char x7713 = x7712;
    x3 += 1;
    x3 += 1;
    char x7716 = x7713;
    /* VAR */ int x7717 = 0;
    int x7718 = x7717;
    int* x7719 = &x7718;
    char* x7720 = strntoi_unchecked(x3, x7719);
    x3 = x7720;
    /* VAR */ int x7722 = 0;
    int x7723 = x7722;
    int* x7724 = &x7723;
    char* x7725 = strntoi_unchecked(x3, x7724);
    x3 = x7725;
    /* VAR */ int x7727 = 0;
    int x7728 = x7727;
    int* x7729 = &x7728;
    char* x7730 = strntoi_unchecked(x3, x7729);
    x3 = x7730;
    /* VAR */ int x7736 = 0;
    int x7737 = x7736;
    int* x7738 = &x7737;
    char* x7739 = strntoi_unchecked(x3, x7738);
    x3 = x7739;
    /* VAR */ int x7741 = 0;
    int x7742 = x7741;
    int* x7743 = &x7742;
    char* x7744 = strntoi_unchecked(x3, x7743);
    x3 = x7744;
    /* VAR */ int x7746 = 0;
    int x7747 = x7746;
    int* x7748 = &x7747;
    char* x7749 = strntoi_unchecked(x3, x7748);
    x3 = x7749;
    /* VAR */ int x7755 = 0;
    int x7756 = x7755;
    int* x7757 = &x7756;
    char* x7758 = strntoi_unchecked(x3, x7757);
    x3 = x7758;
    /* VAR */ int x7760 = 0;
    int x7761 = x7760;
    int* x7762 = &x7761;
    char* x7763 = strntoi_unchecked(x3, x7762);
    x3 = x7763;
    /* VAR */ int x7765 = 0;
    int x7766 = x7765;
    int* x7767 = &x7766;
    char* x7768 = strntoi_unchecked(x3, x7767);
    x3 = x7768;
    char* x9738 = (char*)malloc(26 * sizeof(char));
    memset(x9738, 0, 26 * sizeof(char));
    /* VAR */ char* x7775 = x3;
    while(1) {
      
      char x7776 = *x3;
      /* VAR */ int ite51224 = 0;
      if((x7776!=('|'))) {
        char x61694 = *x3;
        ite51224 = (x61694!=('\n'));
      } else {
        
        ite51224 = 0;
      };
      int x46228 = ite51224;
      if (!(x46228)) break; 
      
      x3 += 1;
    };
    char* x7783 = x7775;
    int x7784 = x3 - x7783;
    char* x7785 = x7775;
    char* x7786 = strncpy(x9738, x7785, x7784);
    x3 += 1;
    char* x9756 = (char*)malloc(11 * sizeof(char));
    memset(x9756, 0, 11 * sizeof(char));
    /* VAR */ char* x7794 = x3;
    while(1) {
      
      char x7795 = *x3;
      /* VAR */ int ite51247 = 0;
      if((x7795!=('|'))) {
        char x61716 = *x3;
        ite51247 = (x61716!=('\n'));
      } else {
        
        ite51247 = 0;
      };
      int x46244 = ite51247;
      if (!(x46244)) break; 
      
      x3 += 1;
    };
    char* x7802 = x7794;
    int x7803 = x3 - x7802;
    char* x7804 = x7794;
    char* x7805 = strncpy(x9756, x7804, x7803);
    x3 += 1;
    char* x9774 = (char*)malloc(45 * sizeof(char));
    memset(x9774, 0, 45 * sizeof(char));
    /* VAR */ char* x7813 = x3;
    while(1) {
      
      char x7814 = *x3;
      /* VAR */ int ite51270 = 0;
      if((x7814!=('|'))) {
        char x61738 = *x3;
        ite51270 = (x61738!=('\n'));
      } else {
        
        ite51270 = 0;
      };
      int x46260 = ite51270;
      if (!(x46260)) break; 
      
      x3 += 1;
    };
    char* x7821 = x7813;
    int x7822 = x3 - x7821;
    char* x7823 = x7813;
    char* x7824 = strncpy(x9774, x7823, x7822);
    x3 += 1;
    struct LINEITEMRecord* x10786 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x10786, 0, 1 * sizeof(struct LINEITEMRecord));
    x10786->L_ORDERKEY = x7668; x10786->L_PARTKEY = x7673; x10786->L_SUPPKEY = x7678; x10786->L_LINENUMBER = x7683; x10786->L_QUANTITY = x7688; x10786->L_EXTENDEDPRICE = x7693; x10786->L_DISCOUNT = x7698; x10786->L_TAX = x7703; x10786->L_RETURNFLAG = x7711; x10786->L_LINESTATUS = x7716; x10786->L_SHIPDATE = (((x7718*(10000))+((x7723*(100))))+(x7728)); x10786->L_COMMITDATE = (((x7737*(10000))+((x7742*(100))))+(x7747)); x10786->L_RECEIPTDATE = (((x7756*(10000))+((x7761*(100))))+(x7766)); x10786->L_SHIPINSTRUCT = x9738; x10786->L_SHIPMODE = x9756; x10786->L_COMMENT = x9774;
    int x47 = x4;
    struct LINEITEMRecord x9794 = *x10786;
    *(x9612 + x47) = x9794;
    struct LINEITEMRecord* x9796 = &(x9612[x47]);
    x10786 = x9796;
    int x49 = x4;
    x4 = (x49+(1));
  };
  FILE* x7837 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x7838 = 0;
  int x7839 = x7838;
  int* x7840 = &x7839;
  int x7841 = fscanf(x7837, "%d", x7840);
  pclose(x7837);
  struct SUPPLIERRecord* x9807 = (struct SUPPLIERRecord*)malloc(x7839 * sizeof(struct SUPPLIERRecord));
  memset(x9807, 0, x7839 * sizeof(struct SUPPLIERRecord));
  int x7845 = O_RDONLY;
  int x7846 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x7845);
  /* VAR */ struct stat x7847 = x7652;
  struct stat x7848 = x7847;
  struct stat* x7849 = &x7848;
  int x7850 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x7849);
  int x7852 = PROT_READ;
  int x7853 = MAP_PRIVATE;
  char* x55 = mmap(NULL, (x7849->st_size), x7852, x7853, x7846, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    /* VAR */ int ite51320 = 0;
    if((x57<(x7839))) {
      char x61787 = *x55;
      ite51320 = (x61787!=('\0'));
    } else {
      
      ite51320 = 0;
    };
    int x46303 = ite51320;
    if (!(x46303)) break; 
    
    /* VAR */ int x7861 = 0;
    int x7862 = x7861;
    int* x7863 = &x7862;
    char* x7864 = strntoi_unchecked(x55, x7863);
    x55 = x7864;
    char* x9830 = (char*)malloc(26 * sizeof(char));
    memset(x9830, 0, 26 * sizeof(char));
    /* VAR */ char* x7867 = x55;
    while(1) {
      
      char x7868 = *x55;
      /* VAR */ int ite51339 = 0;
      if((x7868!=('|'))) {
        char x61805 = *x55;
        ite51339 = (x61805!=('\n'));
      } else {
        
        ite51339 = 0;
      };
      int x46315 = ite51339;
      if (!(x46315)) break; 
      
      x55 += 1;
    };
    char* x7875 = x7867;
    int x7876 = x55 - x7875;
    char* x7877 = x7867;
    char* x7878 = strncpy(x9830, x7877, x7876);
    x55 += 1;
    char* x9848 = (char*)malloc(41 * sizeof(char));
    memset(x9848, 0, 41 * sizeof(char));
    /* VAR */ char* x7886 = x55;
    while(1) {
      
      char x7887 = *x55;
      /* VAR */ int ite51362 = 0;
      if((x7887!=('|'))) {
        char x61827 = *x55;
        ite51362 = (x61827!=('\n'));
      } else {
        
        ite51362 = 0;
      };
      int x46331 = ite51362;
      if (!(x46331)) break; 
      
      x55 += 1;
    };
    char* x7894 = x7886;
    int x7895 = x55 - x7894;
    char* x7896 = x7886;
    char* x7897 = strncpy(x9848, x7896, x7895);
    x55 += 1;
    /* VAR */ int x7904 = 0;
    int x7905 = x7904;
    int* x7906 = &x7905;
    char* x7907 = strntoi_unchecked(x55, x7906);
    x55 = x7907;
    char* x9871 = (char*)malloc(16 * sizeof(char));
    memset(x9871, 0, 16 * sizeof(char));
    /* VAR */ char* x7910 = x55;
    while(1) {
      
      char x7911 = *x55;
      /* VAR */ int ite51390 = 0;
      if((x7911!=('|'))) {
        char x61854 = *x55;
        ite51390 = (x61854!=('\n'));
      } else {
        
        ite51390 = 0;
      };
      int x46352 = ite51390;
      if (!(x46352)) break; 
      
      x55 += 1;
    };
    char* x7918 = x7910;
    int x7919 = x55 - x7918;
    char* x7920 = x7910;
    char* x7921 = strncpy(x9871, x7920, x7919);
    x55 += 1;
    /* VAR */ double x7928 = 0.0;
    double x7929 = x7928;
    double* x7930 = &x7929;
    char* x7931 = strntod_unchecked(x55, x7930);
    x55 = x7931;
    char* x9894 = (char*)malloc(102 * sizeof(char));
    memset(x9894, 0, 102 * sizeof(char));
    /* VAR */ char* x7934 = x55;
    while(1) {
      
      char x7935 = *x55;
      /* VAR */ int ite51418 = 0;
      if((x7935!=('|'))) {
        char x61881 = *x55;
        ite51418 = (x61881!=('\n'));
      } else {
        
        ite51418 = 0;
      };
      int x46373 = ite51418;
      if (!(x46373)) break; 
      
      x55 += 1;
    };
    char* x7942 = x7934;
    int x7943 = x55 - x7942;
    char* x7944 = x7934;
    char* x7945 = strncpy(x9894, x7944, x7943);
    x55 += 1;
    struct SUPPLIERRecord* x10908 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x10908, 0, 1 * sizeof(struct SUPPLIERRecord));
    x10908->S_SUPPKEY = x7862; x10908->S_NAME = x9830; x10908->S_ADDRESS = x9848; x10908->S_NATIONKEY = x7905; x10908->S_PHONE = x9871; x10908->S_ACCTBAL = x7929; x10908->S_COMMENT = x9894;
    int x97 = x56;
    struct SUPPLIERRecord x9914 = *x10908;
    *(x9807 + x97) = x9914;
    struct SUPPLIERRecord* x9916 = &(x9807[x97]);
    x10908 = x9916;
    int x99 = x56;
    x56 = (x99+(1));
  };
  FILE* x7958 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x7959 = 0;
  int x7960 = x7959;
  int* x7961 = &x7960;
  int x7962 = fscanf(x7958, "%d", x7961);
  pclose(x7958);
  struct ORDERSRecord* x9927 = (struct ORDERSRecord*)malloc(x7960 * sizeof(struct ORDERSRecord));
  memset(x9927, 0, x7960 * sizeof(struct ORDERSRecord));
  int x7966 = O_RDONLY;
  int x7967 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x7966);
  /* VAR */ struct stat x7968 = x7652;
  struct stat x7969 = x7968;
  struct stat* x7970 = &x7969;
  int x7971 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x7970);
  int x7973 = PROT_READ;
  int x7974 = MAP_PRIVATE;
  char* x105 = mmap(NULL, (x7970->st_size), x7973, x7974, x7967, 0);
  /* VAR */ int x106 = 0;
  while(1) {
    
    int x107 = x106;
    /* VAR */ int ite51468 = 0;
    if((x107<(x7960))) {
      char x61930 = *x105;
      ite51468 = (x61930!=('\0'));
    } else {
      
      ite51468 = 0;
    };
    int x46416 = ite51468;
    if (!(x46416)) break; 
    
    /* VAR */ int x7982 = 0;
    int x7983 = x7982;
    int* x7984 = &x7983;
    char* x7985 = strntoi_unchecked(x105, x7984);
    x105 = x7985;
    /* VAR */ int x7987 = 0;
    int x7988 = x7987;
    int* x7989 = &x7988;
    char* x7990 = strntoi_unchecked(x105, x7989);
    x105 = x7990;
    char x7992 = *x105;
    /* VAR */ char x7993 = x7992;
    x105 += 1;
    x105 += 1;
    char x7996 = x7993;
    /* VAR */ double x7997 = 0.0;
    double x7998 = x7997;
    double* x7999 = &x7998;
    char* x8000 = strntod_unchecked(x105, x7999);
    x105 = x8000;
    /* VAR */ int x8002 = 0;
    int x8003 = x8002;
    int* x8004 = &x8003;
    char* x8005 = strntoi_unchecked(x105, x8004);
    x105 = x8005;
    /* VAR */ int x8007 = 0;
    int x8008 = x8007;
    int* x8009 = &x8008;
    char* x8010 = strntoi_unchecked(x105, x8009);
    x105 = x8010;
    /* VAR */ int x8012 = 0;
    int x8013 = x8012;
    int* x8014 = &x8013;
    char* x8015 = strntoi_unchecked(x105, x8014);
    x105 = x8015;
    char* x9984 = (char*)malloc(16 * sizeof(char));
    memset(x9984, 0, 16 * sizeof(char));
    /* VAR */ char* x8022 = x105;
    while(1) {
      
      char x8023 = *x105;
      /* VAR */ int ite51521 = 0;
      if((x8023!=('|'))) {
        char x61982 = *x105;
        ite51521 = (x61982!=('\n'));
      } else {
        
        ite51521 = 0;
      };
      int x46462 = ite51521;
      if (!(x46462)) break; 
      
      x105 += 1;
    };
    char* x8030 = x8022;
    int x8031 = x105 - x8030;
    char* x8032 = x8022;
    char* x8033 = strncpy(x9984, x8032, x8031);
    x105 += 1;
    char* x10002 = (char*)malloc(16 * sizeof(char));
    memset(x10002, 0, 16 * sizeof(char));
    /* VAR */ char* x8041 = x105;
    while(1) {
      
      char x8042 = *x105;
      /* VAR */ int ite51544 = 0;
      if((x8042!=('|'))) {
        char x62004 = *x105;
        ite51544 = (x62004!=('\n'));
      } else {
        
        ite51544 = 0;
      };
      int x46478 = ite51544;
      if (!(x46478)) break; 
      
      x105 += 1;
    };
    char* x8049 = x8041;
    int x8050 = x105 - x8049;
    char* x8051 = x8041;
    char* x8052 = strncpy(x10002, x8051, x8050);
    x105 += 1;
    /* VAR */ int x8059 = 0;
    int x8060 = x8059;
    int* x8061 = &x8060;
    char* x8062 = strntoi_unchecked(x105, x8061);
    x105 = x8062;
    char* x10025 = (char*)malloc(80 * sizeof(char));
    memset(x10025, 0, 80 * sizeof(char));
    /* VAR */ char* x8065 = x105;
    while(1) {
      
      char x8066 = *x105;
      /* VAR */ int ite51572 = 0;
      if((x8066!=('|'))) {
        char x62031 = *x105;
        ite51572 = (x62031!=('\n'));
      } else {
        
        ite51572 = 0;
      };
      int x46499 = ite51572;
      if (!(x46499)) break; 
      
      x105 += 1;
    };
    char* x8073 = x8065;
    int x8074 = x105 - x8073;
    char* x8075 = x8065;
    char* x8076 = strncpy(x10025, x8075, x8074);
    x105 += 1;
    struct ORDERSRecord* x11041 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x11041, 0, 1 * sizeof(struct ORDERSRecord));
    x11041->O_ORDERKEY = x7983; x11041->O_CUSTKEY = x7988; x11041->O_ORDERSTATUS = x7996; x11041->O_TOTALPRICE = x7998; x11041->O_ORDERDATE = (((x8003*(10000))+((x8008*(100))))+(x8013)); x11041->O_ORDERPRIORITY = x9984; x11041->O_CLERK = x10002; x11041->O_SHIPPRIORITY = x8060; x11041->O_COMMENT = x10025;
    int x141 = x106;
    struct ORDERSRecord x10045 = *x11041;
    *(x9927 + x141) = x10045;
    struct ORDERSRecord* x10047 = &(x9927[x141]);
    x11041 = x10047;
    int x143 = x106;
    x106 = (x143+(1));
  };
  FILE* x8089 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x8090 = 0;
  int x8091 = x8090;
  int* x8092 = &x8091;
  int x8093 = fscanf(x8089, "%d", x8092);
  pclose(x8089);
  struct NATIONRecord* x10058 = (struct NATIONRecord*)malloc(x8091 * sizeof(struct NATIONRecord));
  memset(x10058, 0, x8091 * sizeof(struct NATIONRecord));
  int x8097 = O_RDONLY;
  int x8098 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x8097);
  /* VAR */ struct stat x8099 = x7652;
  struct stat x8100 = x8099;
  struct stat* x8101 = &x8100;
  int x8102 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x8101);
  int x8104 = PROT_READ;
  int x8105 = MAP_PRIVATE;
  char* x149 = mmap(NULL, (x8101->st_size), x8104, x8105, x8098, 0);
  /* VAR */ int x150 = 0;
  while(1) {
    
    int x151 = x150;
    /* VAR */ int ite51622 = 0;
    if((x151<(x8091))) {
      char x62080 = *x149;
      ite51622 = (x62080!=('\0'));
    } else {
      
      ite51622 = 0;
    };
    int x46542 = ite51622;
    if (!(x46542)) break; 
    
    /* VAR */ int x8113 = 0;
    int x8114 = x8113;
    int* x8115 = &x8114;
    char* x8116 = strntoi_unchecked(x149, x8115);
    x149 = x8116;
    char* x10081 = (char*)malloc(26 * sizeof(char));
    memset(x10081, 0, 26 * sizeof(char));
    /* VAR */ char* x8119 = x149;
    while(1) {
      
      char x8120 = *x149;
      /* VAR */ int ite51641 = 0;
      if((x8120!=('|'))) {
        char x62098 = *x149;
        ite51641 = (x62098!=('\n'));
      } else {
        
        ite51641 = 0;
      };
      int x46554 = ite51641;
      if (!(x46554)) break; 
      
      x149 += 1;
    };
    char* x8127 = x8119;
    int x8128 = x149 - x8127;
    char* x8129 = x8119;
    char* x8130 = strncpy(x10081, x8129, x8128);
    x149 += 1;
    /* VAR */ int x8137 = 0;
    int x8138 = x8137;
    int* x8139 = &x8138;
    char* x8140 = strntoi_unchecked(x149, x8139);
    x149 = x8140;
    char* x10104 = (char*)malloc(153 * sizeof(char));
    memset(x10104, 0, 153 * sizeof(char));
    /* VAR */ char* x8143 = x149;
    while(1) {
      
      char x8144 = *x149;
      /* VAR */ int ite51669 = 0;
      if((x8144!=('|'))) {
        char x62125 = *x149;
        ite51669 = (x62125!=('\n'));
      } else {
        
        ite51669 = 0;
      };
      int x46575 = ite51669;
      if (!(x46575)) break; 
      
      x149 += 1;
    };
    char* x8151 = x8143;
    int x8152 = x149 - x8151;
    char* x8153 = x8143;
    char* x8154 = strncpy(x10104, x8153, x8152);
    x149 += 1;
    struct NATIONRecord* x11122 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x11122, 0, 1 * sizeof(struct NATIONRecord));
    x11122->N_NATIONKEY = x8114; x11122->N_NAME = x10081; x11122->N_REGIONKEY = x8138; x11122->N_COMMENT = x10104;
    int x174 = x150;
    struct NATIONRecord x10124 = *x11122;
    *(x10058 + x174) = x10124;
    struct NATIONRecord* x10126 = &(x10058[x174]);
    x11122 = x10126;
    int x176 = x150;
    x150 = (x176+(1));
  };
  int x181 = 0;
  for(; x181 < 1 ; x181 += 1) {
    
    GHashTable* x64471 = g_hash_table_new(x64448, x64466);
    GHashTable* x64481 = g_hash_table_new(((void***){x64472}), ((int*){x64475}));
    GHashTable* x64491 = g_hash_table_new(((void***){x64482}), ((int*){x64485}));
    GHashTable* x64501 = g_hash_table_new(((void***){x64492}), ((int*){x64495}));
    GHashTable* x64511 = g_hash_table_new(((void***){x64502}), ((int*){x64505}));
    GHashTable* x64521 = g_hash_table_new(((void***){x64512}), ((int*){x64515}));
    /* VAR */ int x64522 = 0;
    struct NATIONRecord_SUPPLIERRecord* x64523 = (struct NATIONRecord_SUPPLIERRecord*)malloc(80000 * sizeof(struct NATIONRecord_SUPPLIERRecord));
    memset(x64523, 0, 80000 * sizeof(struct NATIONRecord_SUPPLIERRecord));
    /* VAR */ int x64524 = 0;
    while(1) {
      
      int x6214 = x64524;
      if (!((x6214<(80000)))) break; 
      
      int x6216 = x64524;
      struct NATIONRecord_SUPPLIERRecord* x11149 = (struct NATIONRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord));
      memset(x11149, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord));
      x11149->N_NATIONKEY = 0; x11149->N_NAME = ""; x11149->N_REGIONKEY = 0; x11149->N_COMMENT = ""; x11149->S_SUPPKEY = 0; x11149->S_NAME = ""; x11149->S_ADDRESS = ""; x11149->S_NATIONKEY = 0; x11149->S_PHONE = ""; x11149->S_ACCTBAL = 0.0; x11149->S_COMMENT = "";
      struct NATIONRecord_SUPPLIERRecord x10148 = *x11149;
      *(x64523 + x6216) = x10148;
      struct NATIONRecord_SUPPLIERRecord* x10150 = &(x64523[x6216]);
      x11149 = x10150;
      int x6219 = x64524;
      x64524 = (x6219+(1));
    };
    /* VAR */ int x64539 = 0;
    struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x64540 = (struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord*)malloc(48000000 * sizeof(struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
    memset(x64540, 0, 48000000 * sizeof(struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
    /* VAR */ int x64541 = 0;
    while(1) {
      
      int x6226 = x64541;
      if (!((x6226<(48000000)))) break; 
      
      int x6228 = x64541;
      struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x11166 = (struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
      memset(x11166, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
      x11166->N_NATIONKEY = 0; x11166->N_NAME = ""; x11166->N_REGIONKEY = 0; x11166->N_COMMENT = ""; x11166->S_SUPPKEY = 0; x11166->S_NAME = ""; x11166->S_ADDRESS = ""; x11166->S_NATIONKEY = 0; x11166->S_PHONE = ""; x11166->S_ACCTBAL = 0.0; x11166->S_COMMENT = ""; x11166->L_ORDERKEY = 0; x11166->L_PARTKEY = 0; x11166->L_SUPPKEY = 0; x11166->L_LINENUMBER = 0; x11166->L_QUANTITY = 0.0; x11166->L_EXTENDEDPRICE = 0.0; x11166->L_DISCOUNT = 0.0; x11166->L_TAX = 0.0; x11166->L_RETURNFLAG = '\0'; x11166->L_LINESTATUS = '\0'; x11166->L_SHIPDATE = 0; x11166->L_COMMITDATE = 0; x11166->L_RECEIPTDATE = 0; x11166->L_SHIPINSTRUCT = ""; x11166->L_SHIPMODE = ""; x11166->L_COMMENT = "";
      struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord x10163 = *x11166;
      *(x64540 + x6228) = x10163;
      struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x10165 = &(x64540[x6228]);
      x11166 = x10165;
      int x6231 = x64541;
      x64541 = (x6231+(1));
    };
    /* VAR */ int x64556 = 0;
    struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x64557 = (struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord*)malloc(48000000 * sizeof(struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
    memset(x64557, 0, 48000000 * sizeof(struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
    /* VAR */ int x64558 = 0;
    while(1) {
      
      int x6238 = x64558;
      if (!((x6238<(48000000)))) break; 
      
      int x6240 = x64558;
      struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x11183 = (struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord*)malloc(1 * sizeof(struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
      memset(x11183, 0, 1 * sizeof(struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
      x11183->O_ORDERKEY = 0; x11183->O_CUSTKEY = 0; x11183->O_ORDERSTATUS = '\0'; x11183->O_TOTALPRICE = 0.0; x11183->O_ORDERDATE = 0; x11183->O_ORDERPRIORITY = ""; x11183->O_CLERK = ""; x11183->O_SHIPPRIORITY = 0; x11183->O_COMMENT = ""; x11183->N_NATIONKEY = 0; x11183->N_NAME = ""; x11183->N_REGIONKEY = 0; x11183->N_COMMENT = ""; x11183->S_SUPPKEY = 0; x11183->S_NAME = ""; x11183->S_ADDRESS = ""; x11183->S_NATIONKEY = 0; x11183->S_PHONE = ""; x11183->S_ACCTBAL = 0.0; x11183->S_COMMENT = ""; x11183->L_ORDERKEY = 0; x11183->L_PARTKEY = 0; x11183->L_SUPPKEY = 0; x11183->L_LINENUMBER = 0; x11183->L_QUANTITY = 0.0; x11183->L_EXTENDEDPRICE = 0.0; x11183->L_DISCOUNT = 0.0; x11183->L_TAX = 0.0; x11183->L_RETURNFLAG = '\0'; x11183->L_LINESTATUS = '\0'; x11183->L_SHIPDATE = 0; x11183->L_COMMITDATE = 0; x11183->L_RECEIPTDATE = 0; x11183->L_SHIPINSTRUCT = ""; x11183->L_SHIPMODE = ""; x11183->L_COMMENT = "";
      struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord x10178 = *x11183;
      *(x64557 + x6240) = x10178;
      struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x10180 = &(x64557[x6240]);
      x11183 = x10180;
      int x6243 = x64558;
      x64558 = (x6243+(1));
    };
    /* VAR */ int x64573 = 0;
    double** x64574 = (double**)malloc(80000 * sizeof(double*));
    memset(x64574, 0, 80000 * sizeof(double*));
    /* VAR */ int x64575 = 0;
    while(1) {
      
      int x6250 = x64575;
      if (!((x6250<(80000)))) break; 
      
      int x6252 = x64575;
      double* x10192 = (double*)malloc(1 * sizeof(double));
      memset(x10192, 0, 1 * sizeof(double));
      *(x64574 + x6252) = x10192;
      int x6255 = x64575;
      x64575 = (x6255+(1));
    };
    /* VAR */ int x64585 = 0;
    struct AGGRecord_OptimalString* x64586 = (struct AGGRecord_OptimalString*)malloc(80000 * sizeof(struct AGGRecord_OptimalString));
    memset(x64586, 0, 80000 * sizeof(struct AGGRecord_OptimalString));
    /* VAR */ int x64587 = 0;
    while(1) {
      
      int x6262 = x64587;
      if (!((x6262<(80000)))) break; 
      
      int x6264 = x64587;
      double* x6265 = x64574[x6264];
      struct AGGRecord_OptimalString* x11213 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x11213, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      x11213->key = ""; x11213->aggs = x6265;
      struct AGGRecord_OptimalString x10206 = *x11213;
      *(x64586 + x6264) = x10206;
      struct AGGRecord_OptimalString* x10208 = &(x64586[x6264]);
      x11213 = x10208;
      int x6268 = x64587;
      x64587 = (x6268+(1));
    };
    /* VAR */ struct timeval x64603 = x6645;
    struct timeval x64604 = x64603;
    /* VAR */ struct timeval x64605 = x6645;
    struct timeval x64606 = x64605;
    /* VAR */ struct timeval x64607 = x6645;
    struct timeval x64608 = x64607;
    struct timeval* x64609 = &x64606;
    gettimeofday(x64609, NULL);
    /* VAR */ int x64611 = 0;
    /* VAR */ int x64612 = 0;
    /* VAR */ int x64613 = 0;
    /* VAR */ int x64614 = 0;
    /* VAR */ int x64615 = 0;
    /* VAR */ int x64616 = 0;
    int* x64665 = &(x64641);
    GTree* x64666 = g_tree_new(x64665);
    /* VAR */ int x64667 = 0;
    /* VAR */ int x64668 = 0;
    while(1) {
      
      int x64670 = x64616;
      if (!((x64670<(x7960)))) break; 
      
      int x2798 = x64616;
      struct ORDERSRecord* x323 = &(x9927[x2798]);
      if(((x323->O_ORDERSTATUS)==('F'))) {
        void* x12320 = (void*){(x323->O_ORDERKEY)};
        void* x12322 = g_hash_table_lookup(x64481, x12320);
        GList** x12323 = (GList**){x12322};
        GList** x12324 = NULL;
        /* VAR */ GList** ite49076 = 0;
        if((x12323==(x12324))) {
          GList** x49077 = malloc(8);
          GList* x49078 = NULL;
          pointer_assign(x49077, x49078);
          ite49076 = x49077;
        } else {
          
          ite49076 = x12323;
        };
        GList** x12329 = ite49076;
        GList* x12330 = *(x12329);
        GList* x12331 = g_list_prepend(x12330, ((void*){x323}));
        pointer_assign(x12329, x12331);
        g_hash_table_insert(x64481, x12320, ((void*){x12329}));
      };
      int x2806 = x64616;
      x64616 = (x2806+(1));
    };
    while(1) {
      
      int x64702 = x64612;
      if (!((x64702<(x7644)))) break; 
      
      int x2815 = x64612;
      struct LINEITEMRecord* x341 = &(x9612[x2815]);
      void* x12345 = (void*){(x341->L_ORDERKEY)};
      void* x12347 = g_hash_table_lookup(x64501, x12345);
      GList** x12348 = (GList**){x12347};
      GList** x12349 = NULL;
      /* VAR */ GList** ite49104 = 0;
      if((x12348==(x12349))) {
        GList** x49105 = malloc(8);
        GList* x49106 = NULL;
        pointer_assign(x49105, x49106);
        ite49104 = x49105;
      } else {
        
        ite49104 = x12348;
      };
      GList** x12354 = ite49104;
      GList* x12355 = *(x12354);
      GList* x12356 = g_list_prepend(x12355, ((void*){x341}));
      pointer_assign(x12354, x12356);
      g_hash_table_insert(x64501, x12345, ((void*){x12354}));
      int x2820 = x64612;
      x64612 = (x2820+(1));
    };
    while(1) {
      
      int x64731 = x64615;
      if (!((x64731<(x8091)))) break; 
      
      int x2829 = x64615;
      struct NATIONRecord* x356 = &(x10058[x2829]);
      int x34946 = strcmp((x356->N_NAME), "MOROCCO");
      if((x34946==(0))) {
        void* x12373 = (void*){(x356->N_NATIONKEY)};
        void* x12375 = g_hash_table_lookup(x64521, x12373);
        GList** x12376 = (GList**){x12375};
        GList** x12377 = NULL;
        /* VAR */ GList** ite49136 = 0;
        if((x12376==(x12377))) {
          GList** x49137 = malloc(8);
          GList* x49138 = NULL;
          pointer_assign(x49137, x49138);
          ite49136 = x49137;
        } else {
          
          ite49136 = x12376;
        };
        GList** x12382 = ite49136;
        GList* x12383 = *(x12382);
        GList* x12384 = g_list_prepend(x12383, ((void*){x356}));
        pointer_assign(x12382, x12384);
        g_hash_table_insert(x64521, x12373, ((void*){x12382}));
      };
      int x2837 = x64615;
      x64615 = (x2837+(1));
    };
    while(1) {
      
      int x64764 = x64614;
      if (!((x64764<(x7839)))) break; 
      
      int x2846 = x64614;
      struct SUPPLIERRecord* x374 = &(x9807[x2846]);
      int x376 = x374->S_NATIONKEY;
      void* x12399 = g_hash_table_lookup(x64521, ((void*){x376}));
      GList** x12400 = (GList**){x12399};
      if((x12400!=(NULL))) {
        GList* x15005 = *(x12400);
        /* VAR */ GList* x15006 = x15005;
        while(1) {
          
          GList* x15007 = x15006;
          GList* x15008 = NULL;
          if (!((x15007!=(x15008)))) break; 
          
          GList* x15010 = x15006;
          void* x15011 = g_list_nth_data(x15010, 0);
          struct NATIONRecord* x15012 = (struct NATIONRecord*){x15011};
          GList* x15013 = x15006;
          GList* x15014 = g_list_next(x15013);
          x15006 = x15014;
          int x15016 = x15012->N_NATIONKEY;
          if((x15016==(x376))) {
            int x6361 = x64522;
            struct NATIONRecord_SUPPLIERRecord* x6362 = &(x64523[x6361]);
            x6362->N_NATIONKEY = x15016;
            x6362->N_NAME = (x15012->N_NAME);
            x6362->N_REGIONKEY = (x15012->N_REGIONKEY);
            x6362->N_COMMENT = (x15012->N_COMMENT);
            x6362->S_SUPPKEY = (x374->S_SUPPKEY);
            x6362->S_NAME = (x374->S_NAME);
            x6362->S_ADDRESS = (x374->S_ADDRESS);
            x6362->S_NATIONKEY = x376;
            x6362->S_PHONE = (x374->S_PHONE);
            x6362->S_ACCTBAL = (x374->S_ACCTBAL);
            x6362->S_COMMENT = (x374->S_COMMENT);
            int x6374 = x64522;
            x64522 = (x6374+(1));
            void* x12436 = (void*){(x6362->S_SUPPKEY)};
            void* x12438 = g_hash_table_lookup(x64511, x12436);
            GList** x12439 = (GList**){x12438};
            GList** x12440 = NULL;
            /* VAR */ GList** ite49261 = 0;
            if((x12439==(x12440))) {
              GList** x49262 = malloc(8);
              GList* x49263 = NULL;
              pointer_assign(x49262, x49263);
              ite49261 = x49262;
            } else {
              
              ite49261 = x12439;
            };
            GList** x12445 = ite49261;
            GList* x12446 = *(x12445);
            GList* x12447 = g_list_prepend(x12446, ((void*){x6362}));
            pointer_assign(x12445, x12447);
            g_hash_table_insert(x64511, x12436, ((void*){x12445}));
          };
        };
      };
      int x2892 = x64614;
      x64614 = (x2892+(1));
    };
    while(1) {
      
      int x64890 = x64611;
      if (!((x64890<(x7644)))) break; 
      
      int x2902 = x64611;
      struct LINEITEMRecord* x415 = &(x9612[x2902]);
      int x417 = x415->L_RECEIPTDATE;
      int x418 = x415->L_COMMITDATE;
      if((x417>(x418))) {
        int x420 = x415->L_SUPPKEY;
        void* x12467 = g_hash_table_lookup(x64511, ((void*){x420}));
        GList** x12468 = (GList**){x12467};
        if((x12468!=(NULL))) {
          GList* x15175 = *(x12468);
          /* VAR */ GList* x15176 = x15175;
          while(1) {
            
            GList* x15177 = x15176;
            GList* x15178 = NULL;
            if (!((x15177!=(x15178)))) break; 
            
            GList* x15180 = x15176;
            void* x15181 = g_list_nth_data(x15180, 0);
            struct NATIONRecord_SUPPLIERRecord* x15182 = (struct NATIONRecord_SUPPLIERRecord*){x15181};
            GList* x15183 = x15176;
            GList* x15184 = g_list_next(x15183);
            x15176 = x15184;
            int x15186 = x15182->S_SUPPKEY;
            if((x15186==(x420))) {
              int x6426 = x64539;
              struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x6427 = &(x64540[x6426]);
              x6427->N_NATIONKEY = (x15182->N_NATIONKEY);
              x6427->N_NAME = (x15182->N_NAME);
              x6427->N_REGIONKEY = (x15182->N_REGIONKEY);
              x6427->N_COMMENT = (x15182->N_COMMENT);
              x6427->S_SUPPKEY = x15186;
              x6427->S_NAME = (x15182->S_NAME);
              x6427->S_ADDRESS = (x15182->S_ADDRESS);
              x6427->S_NATIONKEY = (x15182->S_NATIONKEY);
              x6427->S_PHONE = (x15182->S_PHONE);
              x6427->S_ACCTBAL = (x15182->S_ACCTBAL);
              x6427->S_COMMENT = (x15182->S_COMMENT);
              x6427->L_ORDERKEY = (x415->L_ORDERKEY);
              x6427->L_PARTKEY = (x415->L_PARTKEY);
              x6427->L_SUPPKEY = x420;
              x6427->L_LINENUMBER = (x415->L_LINENUMBER);
              x6427->L_QUANTITY = (x415->L_QUANTITY);
              x6427->L_EXTENDEDPRICE = (x415->L_EXTENDEDPRICE);
              x6427->L_DISCOUNT = (x415->L_DISCOUNT);
              x6427->L_TAX = (x415->L_TAX);
              x6427->L_RETURNFLAG = (x415->L_RETURNFLAG);
              x6427->L_LINESTATUS = (x415->L_LINESTATUS);
              x6427->L_SHIPDATE = (x415->L_SHIPDATE);
              x6427->L_COMMITDATE = x418;
              x6427->L_RECEIPTDATE = x417;
              x6427->L_SHIPINSTRUCT = (x415->L_SHIPINSTRUCT);
              x6427->L_SHIPMODE = (x415->L_SHIPMODE);
              x6427->L_COMMENT = (x415->L_COMMENT);
              int x6455 = x64539;
              x64539 = (x6455+(1));
              int x472 = x6427->L_ORDERKEY;
              void* x12534 = (void*){x472};
              void* x12535 = g_hash_table_lookup(x64501, x12534);
              GList** x12536 = (GList**){x12535};
              if((x12536!=(NULL))) {
                /* VAR */ struct LINEITEMRecord* x15260 = NULL;
                GList* x15261 = *(x12536);
                /* VAR */ GList* x15262 = x15261;
                while(1) {
                  
                  GList* x15263 = x15262;
                  GList* x15264 = NULL;
                  if (!((x15263!=(x15264)))) break; 
                  
                  GList* x15266 = x15262;
                  void* x15267 = g_list_nth_data(x15266, 0);
                  struct LINEITEMRecord* x15268 = (struct LINEITEMRecord*){x15267};
                  GList* x15269 = x15262;
                  GList* x15270 = g_list_next(x15269);
                  x15262 = x15270;
                  /* VAR */ int ite54705 = 0;
                  if((x472==((x15268->L_ORDERKEY)))) {
                    ite54705 = ((x6427->L_SUPPKEY)!=((x15268->L_SUPPKEY)));
                  } else {
                    
                    ite54705 = 0;
                  };
                  int x49503 = ite54705;
                  if(x49503) {
                    x15260 = x15268;
                    break;
                  };
                };
                struct LINEITEMRecord* x15282 = x15260;
                if((x15282!=(NULL))) {
                  void* x12552 = g_hash_table_lookup(x64491, x12534);
                  GList** x12553 = (GList**){x12552};
                  GList** x12554 = NULL;
                  /* VAR */ GList** ite49516 = 0;
                  if((x12553==(x12554))) {
                    GList** x49517 = malloc(8);
                    GList* x49518 = NULL;
                    pointer_assign(x49517, x49518);
                    ite49516 = x49517;
                  } else {
                    
                    ite49516 = x12553;
                  };
                  GList** x12559 = ite49516;
                  GList* x12560 = *(x12559);
                  GList* x12561 = g_list_prepend(x12560, ((void*){x6427}));
                  pointer_assign(x12559, x12561);
                  g_hash_table_insert(x64491, x12534, ((void*){x12559}));
                };
              };
            };
          };
        };
      };
      int x3038 = x64611;
      x64611 = (x3038+(1));
    };
    while(1) {
      
      int x65174 = x64613;
      if (!((x65174<(x7644)))) break; 
      
      int x3047 = x64613;
      struct LINEITEMRecord* x521 = &(x9612[x3047]);
      if(((x521->L_RECEIPTDATE)>((x521->L_COMMITDATE)))) {
        int x526 = x521->L_ORDERKEY;
        void* x12581 = g_hash_table_lookup(x64491, ((void*){x526}));
        GList** x12582 = (GList**){x12581};
        if((x12582!=(NULL))) {
          GList* x15331 = *(x12582);
          /* VAR */ GList* x15332 = x15331;
          /* VAR */ GList** x15333 = x12582;
          while(1) {
            
            GList* x15334 = x15332;
            GList* x15335 = NULL;
            if (!((x15334!=(x15335)))) break; 
            
            GList* x15337 = x15332;
            void* x15338 = g_list_nth_data(x15337, 0);
            struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x15339 = (struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord*){x15338};
            /* VAR */ int ite54786 = 0;
            if(((x15339->L_ORDERKEY)==(x526))) {
              ite54786 = ((x15339->L_SUPPKEY)!=((x521->L_SUPPKEY)));
            } else {
              
              ite54786 = 0;
            };
            int x49566 = ite54786;
            int x15346 = !(x49566);
            if(x15346) {
              GList* x15347 = x15332;
              GList** x15349 = &((x15347->next));
              x15333 = x15349;
            } else {
              
              GList** x15351 = x15333;
              GList* x15352 = x15332;
              GList* x15353 = g_list_next(x15352);
              pointer_assign(x15351, x15353);
            };
            GList* x15356 = x15332;
            GList* x15357 = g_list_next(x15356);
            x15332 = x15357;
          };
        };
      };
      int x3081 = x64613;
      x64613 = (x3081+(1));
    };
    GList* x65713 = g_hash_table_get_keys(x64491);
    /* VAR */ GList* x65714 = x65713;
    int x65715 = g_hash_table_size(x64491);
    int x40739 = 0;
    for(; x40739 < x65715 ; x40739 += 1) {
      
      GList* x40740 = x65714;
      void* x40741 = g_list_nth_data(x40740, 0);
      GList* x40742 = x65714;
      GList* x40743 = g_list_next(x40742);
      x65714 = x40743;
      void* x40745 = g_hash_table_lookup(x64491, x40741);
      GList* x40967 = *(((GList**){x40745}));
      /* VAR */ GList* x40968 = x40967;
      while(1) {
        
        GList* x16084 = x40968;
        GList* x16085 = NULL;
        if (!((x16084!=(x16085)))) break; 
        
        GList* x16087 = x40968;
        void* x16088 = g_list_nth_data(x16087, 0);
        struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x16089 = (struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord*){x16088};
        GList* x16090 = x40968;
        GList* x16091 = g_list_next(x16090);
        x40968 = x16091;
        int x16093 = x16089->L_ORDERKEY;
        void* x16095 = g_hash_table_lookup(x64481, ((void*){x16093}));
        GList** x16096 = (GList**){x16095};
        if((x16096!=(NULL))) {
          GList* x15971 = *(x16096);
          /* VAR */ GList* x15972 = x15971;
          while(1) {
            
            GList* x15973 = x15972;
            GList* x15974 = NULL;
            if (!((x15973!=(x15974)))) break; 
            
            GList* x15976 = x15972;
            void* x15977 = g_list_nth_data(x15976, 0);
            struct ORDERSRecord* x15978 = (struct ORDERSRecord*){x15977};
            GList* x15979 = x15972;
            GList* x15980 = g_list_next(x15979);
            x15972 = x15980;
            int x15982 = x15978->O_ORDERKEY;
            if((x15982==(x16093))) {
              int x6555 = x64556;
              struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x6556 = &(x64557[x6555]);
              x6556->O_ORDERKEY = x15982;
              x6556->O_CUSTKEY = (x15978->O_CUSTKEY);
              x6556->O_ORDERSTATUS = (x15978->O_ORDERSTATUS);
              x6556->O_TOTALPRICE = (x15978->O_TOTALPRICE);
              x6556->O_ORDERDATE = (x15978->O_ORDERDATE);
              x6556->O_ORDERPRIORITY = (x15978->O_ORDERPRIORITY);
              x6556->O_CLERK = (x15978->O_CLERK);
              x6556->O_SHIPPRIORITY = (x15978->O_SHIPPRIORITY);
              x6556->O_COMMENT = (x15978->O_COMMENT);
              x6556->N_NATIONKEY = (x16089->N_NATIONKEY);
              x6556->N_NAME = (x16089->N_NAME);
              x6556->N_REGIONKEY = (x16089->N_REGIONKEY);
              x6556->N_COMMENT = (x16089->N_COMMENT);
              x6556->S_SUPPKEY = (x16089->S_SUPPKEY);
              x6556->S_NAME = (x16089->S_NAME);
              x6556->S_ADDRESS = (x16089->S_ADDRESS);
              x6556->S_NATIONKEY = (x16089->S_NATIONKEY);
              x6556->S_PHONE = (x16089->S_PHONE);
              x6556->S_ACCTBAL = (x16089->S_ACCTBAL);
              x6556->S_COMMENT = (x16089->S_COMMENT);
              x6556->L_ORDERKEY = x16093;
              x6556->L_PARTKEY = (x16089->L_PARTKEY);
              x6556->L_SUPPKEY = (x16089->L_SUPPKEY);
              x6556->L_LINENUMBER = (x16089->L_LINENUMBER);
              x6556->L_QUANTITY = (x16089->L_QUANTITY);
              x6556->L_EXTENDEDPRICE = (x16089->L_EXTENDEDPRICE);
              x6556->L_DISCOUNT = (x16089->L_DISCOUNT);
              x6556->L_TAX = (x16089->L_TAX);
              x6556->L_RETURNFLAG = (x16089->L_RETURNFLAG);
              x6556->L_LINESTATUS = (x16089->L_LINESTATUS);
              x6556->L_SHIPDATE = (x16089->L_SHIPDATE);
              x6556->L_COMMITDATE = (x16089->L_COMMITDATE);
              x6556->L_RECEIPTDATE = (x16089->L_RECEIPTDATE);
              x6556->L_SHIPINSTRUCT = (x16089->L_SHIPINSTRUCT);
              x6556->L_SHIPMODE = (x16089->L_SHIPMODE);
              x6556->L_COMMENT = (x16089->L_COMMENT);
              int x6593 = x64556;
              x64556 = (x6593+(1));
              char* x609 = x6556->S_NAME;
              void* x16061 = g_hash_table_lookup(x64471, x609);
              /* VAR */ struct AGGRecord_OptimalString* ite50995 = 0;
              if((x16061==(NULL))) {
                int x50996 = x64573;
                double* x50997 = x64574[x50996];
                int x50998 = x64573;
                x64573 = (x50998+(1));
                int x51001 = x64585;
                struct AGGRecord_OptimalString* x51002 = &(x64586[x51001]);
                x51002->key = x609;
                x51002->aggs = x50997;
                int x51005 = x64585;
                x64585 = (x51005+(1));
                g_hash_table_insert(x64471, x609, x51002);
                ite50995 = x51002;
              } else {
                
                ite50995 = x16061;
              };
              struct AGGRecord_OptimalString* x15966 = ite50995;
              double* x614 = x15966->aggs;
              double x628 = x614[0];
              *x614 = (x628+(1.0));
            };
          };
        };
      };
    };
    GList* x66677 = g_hash_table_get_keys(x64471);
    /* VAR */ GList* x66678 = x66677;
    int x66679 = g_hash_table_size(x64471);
    int x41215 = 0;
    for(; x41215 < x66679 ; x41215 += 1) {
      
      GList* x41216 = x66678;
      void* x41217 = g_list_nth_data(x41216, 0);
      GList* x41218 = g_list_next(x41216);
      x66678 = x41218;
      void* x41220 = g_hash_table_lookup(x64471, x41217);
      struct AGGRecord_OptimalString* x41222 = (struct AGGRecord_OptimalString*){x41220};
      g_tree_insert(x64666, x41222, x41222);
    };
    while(1) {
      
      int x3239 = x64667;
      int x652 = !(x3239);
      /* VAR */ int ite56275 = 0;
      if(x652) {
        int x66704 = g_tree_nnodes(x64666);
        ite56275 = (x66704!=(0));
      } else {
        
        ite56275 = 0;
      };
      int x51047 = ite56275;
      if (!(x51047)) break; 
      
      void* x16342 = NULL;
      void** x16350 = &(x16342);
      g_tree_foreach(x64666, x16349, x16350);
      struct AGGRecord_OptimalString* x16352 = (struct AGGRecord_OptimalString*){x16342};
      int x16353 = g_tree_remove(x64666, x16352);
      int x3247 = x64668;
      if((x3247>=(100))) {
        x64667 = 1;
      } else {
        
        double x667 = ((double*) { x16352->aggs })[0];
        printf("%s|%.0f\n", (x16352->key), x667);
        int x3256 = x64668;
        x64668 = (x3256+(1));
      };
    };
    int x66733 = x64668;
    printf("(%d rows)\n", x66733);
    struct timeval* x66735 = &x64608;
    gettimeofday(x66735, NULL);
    struct timeval* x66737 = &x64604;
    struct timeval* x66738 = &x64608;
    struct timeval* x66739 = &x64606;
    long x66740 = timeval_subtract(x66737, x66738, x66739);
    printf("Generated code run in %ld milliseconds.\n", x66740);
  };
}
/* ----------- FUNCTIONS ----------- */
int x64448(char* x14676) {
  int x34686 = strlen(x14676);
  /* VAR */ int x30251 = 0;
  /* VAR */ int x30252 = 0;
  while(1) {
    
    int x30253 = x30251;
    if (!((x30253<(x34686)))) break; 
    
    int x30255 = x30252;
    int x30256 = x30251;
    char* x34694 = pointer_add(x14676, x30256);
    char x34695 = *(x34694);
    x30252 = (x30255+(x34695));
    int x30261 = x30251;
    x30251 = (x30261+(1));
  };
  int x30265 = x30252;
  return x30265; 
}

int x64466(char* x14681, char* x14682) {
  int x30269 = strcmp(x14681, x14682);
  int x30270 = !(x30269);
  return x30270; 
}

int x64472(void* x12147) {
  int x12148 = g_direct_hash(x12147);
  return x12148; 
}

int x64475(void* x12150, void* x12151) {
  int x12152 = g_direct_equal(x12150, x12151);
  return x12152; 
}

int x64482(void* x12157) {
  int x12158 = g_direct_hash(x12157);
  return x12158; 
}

int x64485(void* x12160, void* x12161) {
  int x12162 = g_direct_equal(x12160, x12161);
  return x12162; 
}

int x64492(void* x12167) {
  int x12168 = g_direct_hash(x12167);
  return x12168; 
}

int x64495(void* x12170, void* x12171) {
  int x12172 = g_direct_equal(x12170, x12171);
  return x12172; 
}

int x64502(void* x12177) {
  int x12178 = g_direct_hash(x12177);
  return x12178; 
}

int x64505(void* x12180, void* x12181) {
  int x12182 = g_direct_equal(x12180, x12181);
  return x12182; 
}

int x64512(void* x12187) {
  int x12188 = g_direct_hash(x12187);
  return x12188; 
}

int x64515(void* x12190, void* x12191) {
  int x12192 = g_direct_equal(x12190, x12191);
  return x12192; 
}

int x64641(struct AGGRecord_OptimalString* x294, struct AGGRecord_OptimalString* x295) {
  double x297 = ((double*) { x294->aggs })[0];
  double x299 = ((double*) { x295->aggs })[0];
  /* VAR */ int ite49042 = 0;
  if((x297<(x299))) {
    ite49042 = 1;
  } else {
    
    /* VAR */ int ite49046 = 0;
    if((x297>(x299))) {
      ite49046 = -1;
    } else {
      
      int x49050 = strcmp((x294->key), (x295->key));
      ite49046 = x49050;
    };
    int x49045 = ite49046;
    ite49042 = x49045;
  };
  int x306 = ite49042;
  return x306; 
}

int x16349(void* x16343, void* x16344, void* x16345) {
  pointer_assign(((struct AGGRecord_OptimalString**){x16345}), ((struct AGGRecord_OptimalString*){x16344}));
  return 1; 
}
