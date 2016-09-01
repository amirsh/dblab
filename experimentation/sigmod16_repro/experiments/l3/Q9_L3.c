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
  char* N_NAME;
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
  char* NATION;
  int O_YEAR;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  int S_NATIONKEY;
  };
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  double PS_SUPPLYCOST;
  };
  
  


int x44734(struct AGGRecord_Q9GRPRecord* x374, struct AGGRecord_Q9GRPRecord* x375);

int x19858(void* x19852, void* x19853, void* x19854);
/* GLOBAL VARS */

struct timeval x12841;
int main(int argc, char** argv) {
  FILE* x13541 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x13542 = 0;
  int x13543 = x13542;
  int* x13544 = &x13543;
  int x13545 = fscanf(x13541, "%d", x13544);
  pclose(x13541);
  struct PARTRecord* x15607 = (struct PARTRecord*)malloc(x13543 * sizeof(struct PARTRecord));
  memset(x15607, 0, x13543 * sizeof(struct PARTRecord));
  int x13549 = O_RDONLY;
  int x13550 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x13549);
  struct stat x13551 = (struct stat){0};
  /* VAR */ struct stat x13552 = x13551;
  struct stat x13553 = x13552;
  struct stat* x13554 = &x13553;
  int x13555 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x13554);
  size_t x13556 = x13554->st_size;
  int x13557 = PROT_READ;
  int x13558 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x13556, x13557, x13558, x13550, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x13543);
    /* VAR */ int ite37407 = 0;
    if(x6) {
      char x42810 = *x3;
      int x42811 = x42810!=('\0');
      ite37407 = x42811;
    } else {
      
      ite37407 = 0;
    };
    int x35035 = ite37407;
    if (!(x35035)) break; 
    
    /* VAR */ int x13566 = 0;
    int x13567 = x13566;
    int* x13568 = &x13567;
    char* x13569 = strntoi_unchecked(x3, x13568);
    x3 = x13569;
    char* x15631 = (char*)malloc(56 * sizeof(char));
    memset(x15631, 0, 56 * sizeof(char));
    /* VAR */ char* x13572 = x3;
    while(1) {
      
      char x13573 = *x3;
      int x13574 = x13573!=('|');
      /* VAR */ int ite37426 = 0;
      if(x13574) {
        char x42828 = *x3;
        int x42829 = x42828!=('\n');
        ite37426 = x42829;
      } else {
        
        ite37426 = 0;
      };
      int x35047 = ite37426;
      if (!(x35047)) break; 
      
      x3 += 1;
    };
    char* x13580 = x13572;
    int x13581 = x3 - x13580;
    char* x13582 = x13572;
    char* x13583 = strncpy(x15631, x13582, x13581);
    x3 += 1;
    char* x15649 = (char*)malloc(26 * sizeof(char));
    memset(x15649, 0, 26 * sizeof(char));
    /* VAR */ char* x13591 = x3;
    while(1) {
      
      char x13592 = *x3;
      int x13593 = x13592!=('|');
      /* VAR */ int ite37449 = 0;
      if(x13593) {
        char x42850 = *x3;
        int x42851 = x42850!=('\n');
        ite37449 = x42851;
      } else {
        
        ite37449 = 0;
      };
      int x35063 = ite37449;
      if (!(x35063)) break; 
      
      x3 += 1;
    };
    char* x13599 = x13591;
    int x13600 = x3 - x13599;
    char* x13601 = x13591;
    char* x13602 = strncpy(x15649, x13601, x13600);
    x3 += 1;
    char* x15667 = (char*)malloc(11 * sizeof(char));
    memset(x15667, 0, 11 * sizeof(char));
    /* VAR */ char* x13610 = x3;
    while(1) {
      
      char x13611 = *x3;
      int x13612 = x13611!=('|');
      /* VAR */ int ite37472 = 0;
      if(x13612) {
        char x42872 = *x3;
        int x42873 = x42872!=('\n');
        ite37472 = x42873;
      } else {
        
        ite37472 = 0;
      };
      int x35079 = ite37472;
      if (!(x35079)) break; 
      
      x3 += 1;
    };
    char* x13618 = x13610;
    int x13619 = x3 - x13618;
    char* x13620 = x13610;
    char* x13621 = strncpy(x15667, x13620, x13619);
    x3 += 1;
    char* x15685 = (char*)malloc(26 * sizeof(char));
    memset(x15685, 0, 26 * sizeof(char));
    /* VAR */ char* x13629 = x3;
    while(1) {
      
      char x13630 = *x3;
      int x13631 = x13630!=('|');
      /* VAR */ int ite37495 = 0;
      if(x13631) {
        char x42894 = *x3;
        int x42895 = x42894!=('\n');
        ite37495 = x42895;
      } else {
        
        ite37495 = 0;
      };
      int x35095 = ite37495;
      if (!(x35095)) break; 
      
      x3 += 1;
    };
    char* x13637 = x13629;
    int x13638 = x3 - x13637;
    char* x13639 = x13629;
    char* x13640 = strncpy(x15685, x13639, x13638);
    x3 += 1;
    /* VAR */ int x13647 = 0;
    int x13648 = x13647;
    int* x13649 = &x13648;
    char* x13650 = strntoi_unchecked(x3, x13649);
    x3 = x13650;
    char* x15708 = (char*)malloc(11 * sizeof(char));
    memset(x15708, 0, 11 * sizeof(char));
    /* VAR */ char* x13653 = x3;
    while(1) {
      
      char x13654 = *x3;
      int x13655 = x13654!=('|');
      /* VAR */ int ite37523 = 0;
      if(x13655) {
        char x42921 = *x3;
        int x42922 = x42921!=('\n');
        ite37523 = x42922;
      } else {
        
        ite37523 = 0;
      };
      int x35116 = ite37523;
      if (!(x35116)) break; 
      
      x3 += 1;
    };
    char* x13661 = x13653;
    int x13662 = x3 - x13661;
    char* x13663 = x13653;
    char* x13664 = strncpy(x15708, x13663, x13662);
    x3 += 1;
    /* VAR */ double x13671 = 0.0;
    double x13672 = x13671;
    double* x13673 = &x13672;
    char* x13674 = strntod_unchecked(x3, x13673);
    x3 = x13674;
    char* x15731 = (char*)malloc(24 * sizeof(char));
    memset(x15731, 0, 24 * sizeof(char));
    /* VAR */ char* x13677 = x3;
    while(1) {
      
      char x13678 = *x3;
      int x13679 = x13678!=('|');
      /* VAR */ int ite37551 = 0;
      if(x13679) {
        char x42948 = *x3;
        int x42949 = x42948!=('\n');
        ite37551 = x42949;
      } else {
        
        ite37551 = 0;
      };
      int x35137 = ite37551;
      if (!(x35137)) break; 
      
      x3 += 1;
    };
    char* x13685 = x13677;
    int x13686 = x3 - x13685;
    char* x13687 = x13677;
    char* x13688 = strncpy(x15731, x13687, x13686);
    x3 += 1;
    struct PARTRecord* x16793 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x16793, 0, 1 * sizeof(struct PARTRecord));
    x16793->P_PARTKEY = x13567; x16793->P_NAME = x15631;
    int x59 = x4;
    struct PARTRecord x15751 = *x16793;
    *(x15607 + x59) = x15751;
    struct PARTRecord* x15753 = &(x15607[x59]);
    x16793 = x15753;
    int x61 = x4;
    int x62 = x61+(1);
    x4 = x62;
  };
  FILE* x13701 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x13702 = 0;
  int x13703 = x13702;
  int* x13704 = &x13703;
  int x13705 = fscanf(x13701, "%d", x13704);
  pclose(x13701);
  struct NATIONRecord* x15764 = (struct NATIONRecord*)malloc(x13703 * sizeof(struct NATIONRecord));
  memset(x15764, 0, x13703 * sizeof(struct NATIONRecord));
  int x13709 = O_RDONLY;
  int x13710 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x13709);
  /* VAR */ struct stat x13711 = x13551;
  struct stat x13712 = x13711;
  struct stat* x13713 = &x13712;
  int x13714 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x13713);
  size_t x13715 = x13713->st_size;
  int x13716 = PROT_READ;
  int x13717 = MAP_PRIVATE;
  char* x67 = mmap(NULL, x13715, x13716, x13717, x13710, 0);
  /* VAR */ int x68 = 0;
  while(1) {
    
    int x69 = x68;
    int x70 = x69<(x13703);
    /* VAR */ int ite37601 = 0;
    if(x70) {
      char x42997 = *x67;
      int x42998 = x42997!=('\0');
      ite37601 = x42998;
    } else {
      
      ite37601 = 0;
    };
    int x35180 = ite37601;
    if (!(x35180)) break; 
    
    /* VAR */ int x13725 = 0;
    int x13726 = x13725;
    int* x13727 = &x13726;
    char* x13728 = strntoi_unchecked(x67, x13727);
    x67 = x13728;
    char* x15787 = (char*)malloc(26 * sizeof(char));
    memset(x15787, 0, 26 * sizeof(char));
    /* VAR */ char* x13731 = x67;
    while(1) {
      
      char x13732 = *x67;
      int x13733 = x13732!=('|');
      /* VAR */ int ite37620 = 0;
      if(x13733) {
        char x43015 = *x67;
        int x43016 = x43015!=('\n');
        ite37620 = x43016;
      } else {
        
        ite37620 = 0;
      };
      int x35192 = ite37620;
      if (!(x35192)) break; 
      
      x67 += 1;
    };
    char* x13739 = x13731;
    int x13740 = x67 - x13739;
    char* x13741 = x13731;
    char* x13742 = strncpy(x15787, x13741, x13740);
    x67 += 1;
    /* VAR */ int x13749 = 0;
    int x13750 = x13749;
    int* x13751 = &x13750;
    char* x13752 = strntoi_unchecked(x67, x13751);
    x67 = x13752;
    char* x15810 = (char*)malloc(153 * sizeof(char));
    memset(x15810, 0, 153 * sizeof(char));
    /* VAR */ char* x13755 = x67;
    while(1) {
      
      char x13756 = *x67;
      int x13757 = x13756!=('|');
      /* VAR */ int ite37648 = 0;
      if(x13757) {
        char x43042 = *x67;
        int x43043 = x43042!=('\n');
        ite37648 = x43043;
      } else {
        
        ite37648 = 0;
      };
      int x35213 = ite37648;
      if (!(x35213)) break; 
      
      x67 += 1;
    };
    char* x13763 = x13755;
    int x13764 = x67 - x13763;
    char* x13765 = x13755;
    char* x13766 = strncpy(x15810, x13765, x13764);
    x67 += 1;
    struct NATIONRecord* x16874 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x16874, 0, 1 * sizeof(struct NATIONRecord));
    x16874->N_NATIONKEY = x13726; x16874->N_NAME = x15787;
    int x92 = x68;
    struct NATIONRecord x15830 = *x16874;
    *(x15764 + x92) = x15830;
    struct NATIONRecord* x15832 = &(x15764[x92]);
    x16874 = x15832;
    int x94 = x68;
    int x95 = x94+(1);
    x68 = x95;
  };
  FILE* x13779 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x13780 = 0;
  int x13781 = x13780;
  int* x13782 = &x13781;
  int x13783 = fscanf(x13779, "%d", x13782);
  pclose(x13779);
  struct ORDERSRecord* x15843 = (struct ORDERSRecord*)malloc(x13781 * sizeof(struct ORDERSRecord));
  memset(x15843, 0, x13781 * sizeof(struct ORDERSRecord));
  int x13787 = O_RDONLY;
  int x13788 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x13787);
  /* VAR */ struct stat x13789 = x13551;
  struct stat x13790 = x13789;
  struct stat* x13791 = &x13790;
  int x13792 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x13791);
  size_t x13793 = x13791->st_size;
  int x13794 = PROT_READ;
  int x13795 = MAP_PRIVATE;
  char* x100 = mmap(NULL, x13793, x13794, x13795, x13788, 0);
  /* VAR */ int x101 = 0;
  while(1) {
    
    int x102 = x101;
    int x103 = x102<(x13781);
    /* VAR */ int ite37698 = 0;
    if(x103) {
      char x43091 = *x100;
      int x43092 = x43091!=('\0');
      ite37698 = x43092;
    } else {
      
      ite37698 = 0;
    };
    int x35256 = ite37698;
    if (!(x35256)) break; 
    
    /* VAR */ int x13803 = 0;
    int x13804 = x13803;
    int* x13805 = &x13804;
    char* x13806 = strntoi_unchecked(x100, x13805);
    x100 = x13806;
    /* VAR */ int x13808 = 0;
    int x13809 = x13808;
    int* x13810 = &x13809;
    char* x13811 = strntoi_unchecked(x100, x13810);
    x100 = x13811;
    char x13813 = *x100;
    /* VAR */ char x13814 = x13813;
    x100 += 1;
    x100 += 1;
    /* VAR */ double x13818 = 0.0;
    double x13819 = x13818;
    double* x13820 = &x13819;
    char* x13821 = strntod_unchecked(x100, x13820);
    x100 = x13821;
    /* VAR */ int x13823 = 0;
    int x13824 = x13823;
    int* x13825 = &x13824;
    char* x13826 = strntoi_unchecked(x100, x13825);
    x100 = x13826;
    /* VAR */ int x13828 = 0;
    int x13829 = x13828;
    int* x13830 = &x13829;
    char* x13831 = strntoi_unchecked(x100, x13830);
    x100 = x13831;
    /* VAR */ int x13833 = 0;
    int x13834 = x13833;
    int* x13835 = &x13834;
    char* x13836 = strntoi_unchecked(x100, x13835);
    x100 = x13836;
    int x13838 = x13824*(10000);
    int x13839 = x13829*(100);
    int x13840 = x13838+(x13839);
    int x13841 = x13840+(x13834);
    char* x15900 = (char*)malloc(16 * sizeof(char));
    memset(x15900, 0, 16 * sizeof(char));
    /* VAR */ char* x13843 = x100;
    while(1) {
      
      char x13844 = *x100;
      int x13845 = x13844!=('|');
      /* VAR */ int ite37751 = 0;
      if(x13845) {
        char x43143 = *x100;
        int x43144 = x43143!=('\n');
        ite37751 = x43144;
      } else {
        
        ite37751 = 0;
      };
      int x35302 = ite37751;
      if (!(x35302)) break; 
      
      x100 += 1;
    };
    char* x13851 = x13843;
    int x13852 = x100 - x13851;
    char* x13853 = x13843;
    char* x13854 = strncpy(x15900, x13853, x13852);
    x100 += 1;
    char* x15918 = (char*)malloc(16 * sizeof(char));
    memset(x15918, 0, 16 * sizeof(char));
    /* VAR */ char* x13862 = x100;
    while(1) {
      
      char x13863 = *x100;
      int x13864 = x13863!=('|');
      /* VAR */ int ite37774 = 0;
      if(x13864) {
        char x43165 = *x100;
        int x43166 = x43165!=('\n');
        ite37774 = x43166;
      } else {
        
        ite37774 = 0;
      };
      int x35318 = ite37774;
      if (!(x35318)) break; 
      
      x100 += 1;
    };
    char* x13870 = x13862;
    int x13871 = x100 - x13870;
    char* x13872 = x13862;
    char* x13873 = strncpy(x15918, x13872, x13871);
    x100 += 1;
    /* VAR */ int x13880 = 0;
    int x13881 = x13880;
    int* x13882 = &x13881;
    char* x13883 = strntoi_unchecked(x100, x13882);
    x100 = x13883;
    char* x15941 = (char*)malloc(80 * sizeof(char));
    memset(x15941, 0, 80 * sizeof(char));
    /* VAR */ char* x13886 = x100;
    while(1) {
      
      char x13887 = *x100;
      int x13888 = x13887!=('|');
      /* VAR */ int ite37802 = 0;
      if(x13888) {
        char x43192 = *x100;
        int x43193 = x43192!=('\n');
        ite37802 = x43193;
      } else {
        
        ite37802 = 0;
      };
      int x35339 = ite37802;
      if (!(x35339)) break; 
      
      x100 += 1;
    };
    char* x13894 = x13886;
    int x13895 = x100 - x13894;
    char* x13896 = x13886;
    char* x13897 = strncpy(x15941, x13896, x13895);
    x100 += 1;
    struct ORDERSRecord* x17007 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x17007, 0, 1 * sizeof(struct ORDERSRecord));
    x17007->O_ORDERKEY = x13804; x17007->O_ORDERDATE = x13841;
    int x136 = x101;
    struct ORDERSRecord x15961 = *x17007;
    *(x15843 + x136) = x15961;
    struct ORDERSRecord* x15963 = &(x15843[x136]);
    x17007 = x15963;
    int x138 = x101;
    int x139 = x138+(1);
    x101 = x139;
  };
  FILE* x13910 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x13911 = 0;
  int x13912 = x13911;
  int* x13913 = &x13912;
  int x13914 = fscanf(x13910, "%d", x13913);
  pclose(x13910);
  struct PARTSUPPRecord* x15974 = (struct PARTSUPPRecord*)malloc(x13912 * sizeof(struct PARTSUPPRecord));
  memset(x15974, 0, x13912 * sizeof(struct PARTSUPPRecord));
  int x13918 = O_RDONLY;
  int x13919 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x13918);
  /* VAR */ struct stat x13920 = x13551;
  struct stat x13921 = x13920;
  struct stat* x13922 = &x13921;
  int x13923 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x13922);
  size_t x13924 = x13922->st_size;
  int x13925 = PROT_READ;
  int x13926 = MAP_PRIVATE;
  char* x144 = mmap(NULL, x13924, x13925, x13926, x13919, 0);
  /* VAR */ int x145 = 0;
  while(1) {
    
    int x146 = x145;
    int x147 = x146<(x13912);
    /* VAR */ int ite37852 = 0;
    if(x147) {
      char x43241 = *x144;
      int x43242 = x43241!=('\0');
      ite37852 = x43242;
    } else {
      
      ite37852 = 0;
    };
    int x35382 = ite37852;
    if (!(x35382)) break; 
    
    /* VAR */ int x13934 = 0;
    int x13935 = x13934;
    int* x13936 = &x13935;
    char* x13937 = strntoi_unchecked(x144, x13936);
    x144 = x13937;
    /* VAR */ int x13939 = 0;
    int x13940 = x13939;
    int* x13941 = &x13940;
    char* x13942 = strntoi_unchecked(x144, x13941);
    x144 = x13942;
    /* VAR */ int x13944 = 0;
    int x13945 = x13944;
    int* x13946 = &x13945;
    char* x13947 = strntoi_unchecked(x144, x13946);
    x144 = x13947;
    /* VAR */ double x13949 = 0.0;
    double x13950 = x13949;
    double* x13951 = &x13950;
    char* x13952 = strntod_unchecked(x144, x13951);
    x144 = x13952;
    char* x16012 = (char*)malloc(200 * sizeof(char));
    memset(x16012, 0, 200 * sizeof(char));
    /* VAR */ char* x13955 = x144;
    while(1) {
      
      char x13956 = *x144;
      int x13957 = x13956!=('|');
      /* VAR */ int ite37886 = 0;
      if(x13957) {
        char x43274 = *x144;
        int x43275 = x43274!=('\n');
        ite37886 = x43275;
      } else {
        
        ite37886 = 0;
      };
      int x35409 = ite37886;
      if (!(x35409)) break; 
      
      x144 += 1;
    };
    char* x13963 = x13955;
    int x13964 = x144 - x13963;
    char* x13965 = x13955;
    char* x13966 = strncpy(x16012, x13965, x13964);
    x144 += 1;
    struct PARTSUPPRecord* x17080 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x17080, 0, 1 * sizeof(struct PARTSUPPRecord));
    x17080->PS_PARTKEY = x13935; x17080->PS_SUPPKEY = x13940; x17080->PS_SUPPLYCOST = x13950;
    int x163 = x145;
    struct PARTSUPPRecord x16032 = *x17080;
    *(x15974 + x163) = x16032;
    struct PARTSUPPRecord* x16034 = &(x15974[x163]);
    x17080 = x16034;
    int x165 = x145;
    int x166 = x165+(1);
    x145 = x166;
  };
  FILE* x13979 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x13980 = 0;
  int x13981 = x13980;
  int* x13982 = &x13981;
  int x13983 = fscanf(x13979, "%d", x13982);
  pclose(x13979);
  struct SUPPLIERRecord* x16045 = (struct SUPPLIERRecord*)malloc(x13981 * sizeof(struct SUPPLIERRecord));
  memset(x16045, 0, x13981 * sizeof(struct SUPPLIERRecord));
  int x13987 = O_RDONLY;
  int x13988 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x13987);
  /* VAR */ struct stat x13989 = x13551;
  struct stat x13990 = x13989;
  struct stat* x13991 = &x13990;
  int x13992 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x13991);
  size_t x13993 = x13991->st_size;
  int x13994 = PROT_READ;
  int x13995 = MAP_PRIVATE;
  char* x171 = mmap(NULL, x13993, x13994, x13995, x13988, 0);
  /* VAR */ int x172 = 0;
  while(1) {
    
    int x173 = x172;
    int x174 = x173<(x13981);
    /* VAR */ int ite37936 = 0;
    if(x174) {
      char x43323 = *x171;
      int x43324 = x43323!=('\0');
      ite37936 = x43324;
    } else {
      
      ite37936 = 0;
    };
    int x35452 = ite37936;
    if (!(x35452)) break; 
    
    /* VAR */ int x14003 = 0;
    int x14004 = x14003;
    int* x14005 = &x14004;
    char* x14006 = strntoi_unchecked(x171, x14005);
    x171 = x14006;
    char* x16068 = (char*)malloc(26 * sizeof(char));
    memset(x16068, 0, 26 * sizeof(char));
    /* VAR */ char* x14009 = x171;
    while(1) {
      
      char x14010 = *x171;
      int x14011 = x14010!=('|');
      /* VAR */ int ite37955 = 0;
      if(x14011) {
        char x43341 = *x171;
        int x43342 = x43341!=('\n');
        ite37955 = x43342;
      } else {
        
        ite37955 = 0;
      };
      int x35464 = ite37955;
      if (!(x35464)) break; 
      
      x171 += 1;
    };
    char* x14017 = x14009;
    int x14018 = x171 - x14017;
    char* x14019 = x14009;
    char* x14020 = strncpy(x16068, x14019, x14018);
    x171 += 1;
    char* x16086 = (char*)malloc(41 * sizeof(char));
    memset(x16086, 0, 41 * sizeof(char));
    /* VAR */ char* x14028 = x171;
    while(1) {
      
      char x14029 = *x171;
      int x14030 = x14029!=('|');
      /* VAR */ int ite37978 = 0;
      if(x14030) {
        char x43363 = *x171;
        int x43364 = x43363!=('\n');
        ite37978 = x43364;
      } else {
        
        ite37978 = 0;
      };
      int x35480 = ite37978;
      if (!(x35480)) break; 
      
      x171 += 1;
    };
    char* x14036 = x14028;
    int x14037 = x171 - x14036;
    char* x14038 = x14028;
    char* x14039 = strncpy(x16086, x14038, x14037);
    x171 += 1;
    /* VAR */ int x14046 = 0;
    int x14047 = x14046;
    int* x14048 = &x14047;
    char* x14049 = strntoi_unchecked(x171, x14048);
    x171 = x14049;
    char* x16109 = (char*)malloc(16 * sizeof(char));
    memset(x16109, 0, 16 * sizeof(char));
    /* VAR */ char* x14052 = x171;
    while(1) {
      
      char x14053 = *x171;
      int x14054 = x14053!=('|');
      /* VAR */ int ite38006 = 0;
      if(x14054) {
        char x43390 = *x171;
        int x43391 = x43390!=('\n');
        ite38006 = x43391;
      } else {
        
        ite38006 = 0;
      };
      int x35501 = ite38006;
      if (!(x35501)) break; 
      
      x171 += 1;
    };
    char* x14060 = x14052;
    int x14061 = x171 - x14060;
    char* x14062 = x14052;
    char* x14063 = strncpy(x16109, x14062, x14061);
    x171 += 1;
    /* VAR */ double x14070 = 0.0;
    double x14071 = x14070;
    double* x14072 = &x14071;
    char* x14073 = strntod_unchecked(x171, x14072);
    x171 = x14073;
    char* x16132 = (char*)malloc(102 * sizeof(char));
    memset(x16132, 0, 102 * sizeof(char));
    /* VAR */ char* x14076 = x171;
    while(1) {
      
      char x14077 = *x171;
      int x14078 = x14077!=('|');
      /* VAR */ int ite38034 = 0;
      if(x14078) {
        char x43417 = *x171;
        int x43418 = x43417!=('\n');
        ite38034 = x43418;
      } else {
        
        ite38034 = 0;
      };
      int x35522 = ite38034;
      if (!(x35522)) break; 
      
      x171 += 1;
    };
    char* x14084 = x14076;
    int x14085 = x171 - x14084;
    char* x14086 = x14076;
    char* x14087 = strncpy(x16132, x14086, x14085);
    x171 += 1;
    struct SUPPLIERRecord* x17202 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x17202, 0, 1 * sizeof(struct SUPPLIERRecord));
    x17202->S_SUPPKEY = x14004; x17202->S_NATIONKEY = x14047;
    int x213 = x172;
    struct SUPPLIERRecord x16152 = *x17202;
    *(x16045 + x213) = x16152;
    struct SUPPLIERRecord* x16154 = &(x16045[x213]);
    x17202 = x16154;
    int x215 = x172;
    int x216 = x215+(1);
    x172 = x216;
  };
  FILE* x14100 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x14101 = 0;
  int x14102 = x14101;
  int* x14103 = &x14102;
  int x14104 = fscanf(x14100, "%d", x14103);
  pclose(x14100);
  struct LINEITEMRecord* x16165 = (struct LINEITEMRecord*)malloc(x14102 * sizeof(struct LINEITEMRecord));
  memset(x16165, 0, x14102 * sizeof(struct LINEITEMRecord));
  int x14108 = O_RDONLY;
  int x14109 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x14108);
  /* VAR */ struct stat x14110 = x13551;
  struct stat x14111 = x14110;
  struct stat* x14112 = &x14111;
  int x14113 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x14112);
  size_t x14114 = x14112->st_size;
  int x14115 = PROT_READ;
  int x14116 = MAP_PRIVATE;
  char* x221 = mmap(NULL, x14114, x14115, x14116, x14109, 0);
  /* VAR */ int x222 = 0;
  while(1) {
    
    int x223 = x222;
    int x224 = x223<(x14102);
    /* VAR */ int ite38084 = 0;
    if(x224) {
      char x43466 = *x221;
      int x43467 = x43466!=('\0');
      ite38084 = x43467;
    } else {
      
      ite38084 = 0;
    };
    int x35565 = ite38084;
    if (!(x35565)) break; 
    
    /* VAR */ int x14124 = 0;
    int x14125 = x14124;
    int* x14126 = &x14125;
    char* x14127 = strntoi_unchecked(x221, x14126);
    x221 = x14127;
    /* VAR */ int x14129 = 0;
    int x14130 = x14129;
    int* x14131 = &x14130;
    char* x14132 = strntoi_unchecked(x221, x14131);
    x221 = x14132;
    /* VAR */ int x14134 = 0;
    int x14135 = x14134;
    int* x14136 = &x14135;
    char* x14137 = strntoi_unchecked(x221, x14136);
    x221 = x14137;
    /* VAR */ int x14139 = 0;
    int x14140 = x14139;
    int* x14141 = &x14140;
    char* x14142 = strntoi_unchecked(x221, x14141);
    x221 = x14142;
    /* VAR */ double x14144 = 0.0;
    double x14145 = x14144;
    double* x14146 = &x14145;
    char* x14147 = strntod_unchecked(x221, x14146);
    x221 = x14147;
    /* VAR */ double x14149 = 0.0;
    double x14150 = x14149;
    double* x14151 = &x14150;
    char* x14152 = strntod_unchecked(x221, x14151);
    x221 = x14152;
    /* VAR */ double x14154 = 0.0;
    double x14155 = x14154;
    double* x14156 = &x14155;
    char* x14157 = strntod_unchecked(x221, x14156);
    x221 = x14157;
    /* VAR */ double x14159 = 0.0;
    double x14160 = x14159;
    double* x14161 = &x14160;
    char* x14162 = strntod_unchecked(x221, x14161);
    x221 = x14162;
    char x14164 = *x221;
    /* VAR */ char x14165 = x14164;
    x221 += 1;
    x221 += 1;
    char x14169 = *x221;
    /* VAR */ char x14170 = x14169;
    x221 += 1;
    x221 += 1;
    /* VAR */ int x14174 = 0;
    int x14175 = x14174;
    int* x14176 = &x14175;
    char* x14177 = strntoi_unchecked(x221, x14176);
    x221 = x14177;
    /* VAR */ int x14179 = 0;
    int x14180 = x14179;
    int* x14181 = &x14180;
    char* x14182 = strntoi_unchecked(x221, x14181);
    x221 = x14182;
    /* VAR */ int x14184 = 0;
    int x14185 = x14184;
    int* x14186 = &x14185;
    char* x14187 = strntoi_unchecked(x221, x14186);
    x221 = x14187;
    /* VAR */ int x14193 = 0;
    int x14194 = x14193;
    int* x14195 = &x14194;
    char* x14196 = strntoi_unchecked(x221, x14195);
    x221 = x14196;
    /* VAR */ int x14198 = 0;
    int x14199 = x14198;
    int* x14200 = &x14199;
    char* x14201 = strntoi_unchecked(x221, x14200);
    x221 = x14201;
    /* VAR */ int x14203 = 0;
    int x14204 = x14203;
    int* x14205 = &x14204;
    char* x14206 = strntoi_unchecked(x221, x14205);
    x221 = x14206;
    /* VAR */ int x14212 = 0;
    int x14213 = x14212;
    int* x14214 = &x14213;
    char* x14215 = strntoi_unchecked(x221, x14214);
    x221 = x14215;
    /* VAR */ int x14217 = 0;
    int x14218 = x14217;
    int* x14219 = &x14218;
    char* x14220 = strntoi_unchecked(x221, x14219);
    x221 = x14220;
    /* VAR */ int x14222 = 0;
    int x14223 = x14222;
    int* x14224 = &x14223;
    char* x14225 = strntoi_unchecked(x221, x14224);
    x221 = x14225;
    char* x16290 = (char*)malloc(26 * sizeof(char));
    memset(x16290, 0, 26 * sizeof(char));
    /* VAR */ char* x14232 = x221;
    while(1) {
      
      char x14233 = *x221;
      int x14234 = x14233!=('|');
      /* VAR */ int ite38205 = 0;
      if(x14234) {
        char x43586 = *x221;
        int x43587 = x43586!=('\n');
        ite38205 = x43587;
      } else {
        
        ite38205 = 0;
      };
      int x35679 = ite38205;
      if (!(x35679)) break; 
      
      x221 += 1;
    };
    char* x14240 = x14232;
    int x14241 = x221 - x14240;
    char* x14242 = x14232;
    char* x14243 = strncpy(x16290, x14242, x14241);
    x221 += 1;
    char* x16308 = (char*)malloc(11 * sizeof(char));
    memset(x16308, 0, 11 * sizeof(char));
    /* VAR */ char* x14251 = x221;
    while(1) {
      
      char x14252 = *x221;
      int x14253 = x14252!=('|');
      /* VAR */ int ite38228 = 0;
      if(x14253) {
        char x43608 = *x221;
        int x43609 = x43608!=('\n');
        ite38228 = x43609;
      } else {
        
        ite38228 = 0;
      };
      int x35695 = ite38228;
      if (!(x35695)) break; 
      
      x221 += 1;
    };
    char* x14259 = x14251;
    int x14260 = x221 - x14259;
    char* x14261 = x14251;
    char* x14262 = strncpy(x16308, x14261, x14260);
    x221 += 1;
    char* x16326 = (char*)malloc(45 * sizeof(char));
    memset(x16326, 0, 45 * sizeof(char));
    /* VAR */ char* x14270 = x221;
    while(1) {
      
      char x14271 = *x221;
      int x14272 = x14271!=('|');
      /* VAR */ int ite38251 = 0;
      if(x14272) {
        char x43630 = *x221;
        int x43631 = x43630!=('\n');
        ite38251 = x43631;
      } else {
        
        ite38251 = 0;
      };
      int x35711 = ite38251;
      if (!(x35711)) break; 
      
      x221 += 1;
    };
    char* x14278 = x14270;
    int x14279 = x221 - x14278;
    char* x14280 = x14270;
    char* x14281 = strncpy(x16326, x14280, x14279);
    x221 += 1;
    struct LINEITEMRecord* x17398 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x17398, 0, 1 * sizeof(struct LINEITEMRecord));
    x17398->L_ORDERKEY = x14125; x17398->L_PARTKEY = x14130; x17398->L_SUPPKEY = x14135; x17398->L_QUANTITY = x14145; x17398->L_EXTENDEDPRICE = x14150; x17398->L_DISCOUNT = x14155;
    int x265 = x222;
    struct LINEITEMRecord x16346 = *x17398;
    *(x16165 + x265) = x16346;
    struct LINEITEMRecord* x16348 = &(x16165[x265]);
    x17398 = x16348;
    int x267 = x222;
    int x268 = x267+(1);
    x222 = x268;
  };
  int x272 = 0;
  for(; x272 < 1 ; x272 += 1) {
    
    /* VAR */ int x44546 = 0;
    GList*** x44547 = (GList***)malloc(1048576 * sizeof(GList**));
    memset(x44547, 0, 1048576 * sizeof(GList**));
    int x31921 = 0;
    for(; x31921 < 1048576 ; x31921 += 1) {
      
      GList** x31922 = malloc(8);
      GList* x31923 = NULL;
      pointer_assign(x31922, x31923);
      *(x44547 + x31921) = x31922;
    };
    struct ORDERSRecord* x44559 = (struct ORDERSRecord*)malloc(60000000 * sizeof(struct ORDERSRecord));
    memset(x44559, 0, 60000000 * sizeof(struct ORDERSRecord));
    int x31937 = 0;
    for(; x31937 < x13781 ; x31937 += 1) {
      
      struct ORDERSRecord* x31938 = &(x15843[x31937]);
      int x31939 = x31938->O_ORDERKEY;
      int x31940 = x31939%(60000000);
      struct ORDERSRecord x31941 = *x31938;
      *(x44559 + x31940) = x31941;
      struct ORDERSRecord* x31943 = &(x44559[x31940]);
      x31938 = x31943;
    };
    struct PARTSUPPRecord** x44577 = (struct PARTSUPPRecord**)malloc(1600000 * sizeof(struct PARTSUPPRecord*));
    memset(x44577, 0, 1600000 * sizeof(struct PARTSUPPRecord*));
    int* x44578 = (int*)malloc(1600000 * sizeof(int));
    memset(x44578, 0, 1600000 * sizeof(int));
    int x31952 = 0;
    for(; x31952 < 1600000 ; x31952 += 1) {
      
      struct PARTSUPPRecord* x31953 = (struct PARTSUPPRecord*)malloc(1024 * sizeof(struct PARTSUPPRecord));
      memset(x31953, 0, 1024 * sizeof(struct PARTSUPPRecord));
      *(x44577 + x31952) = x31953;
    };
    /* VAR */ int x44586 = 0;
    int x31973 = 0;
    for(; x31973 < x13912 ; x31973 += 1) {
      
      struct PARTSUPPRecord* x31974 = &(x15974[x31973]);
      int x31975 = x31974->PS_PARTKEY;
      int x31976 = x31975%(1600000);
      int x31977 = x44578[x31976];
      struct PARTSUPPRecord* x31978 = x44577[x31976];
      struct PARTSUPPRecord x31979 = *x31974;
      *(x31978 + x31977) = x31979;
      struct PARTSUPPRecord* x31981 = &(x31978[x31977]);
      x31974 = x31981;
      int x31983 = x31977+(1);
      *(x44578 + x31976) = x31983;
      int x31985 = x44586;
      int x31986 = x31985+(1);
      x44586 = x31986;
    };
    struct LINEITEMRecord** x44618 = (struct LINEITEMRecord**)malloc(1600000 * sizeof(struct LINEITEMRecord*));
    memset(x44618, 0, 1600000 * sizeof(struct LINEITEMRecord*));
    int* x44619 = (int*)malloc(1600000 * sizeof(int));
    memset(x44619, 0, 1600000 * sizeof(int));
    int x31995 = 0;
    for(; x31995 < 1600000 ; x31995 += 1) {
      
      struct LINEITEMRecord* x31996 = (struct LINEITEMRecord*)malloc(1024 * sizeof(struct LINEITEMRecord));
      memset(x31996, 0, 1024 * sizeof(struct LINEITEMRecord));
      *(x44618 + x31995) = x31996;
    };
    /* VAR */ int x44627 = 0;
    int x32016 = 0;
    for(; x32016 < x14102 ; x32016 += 1) {
      
      struct LINEITEMRecord* x32017 = &(x16165[x32016]);
      int x32018 = x32017->L_PARTKEY;
      int x32019 = x32018%(1600000);
      int x32020 = x44619[x32019];
      struct LINEITEMRecord* x32021 = x44618[x32019];
      struct LINEITEMRecord x32022 = *x32017;
      *(x32021 + x32020) = x32022;
      struct LINEITEMRecord* x32024 = &(x32021[x32020]);
      x32017 = x32024;
      int x32026 = x32020+(1);
      *(x44619 + x32019) = x32026;
      int x32028 = x44627;
      int x32029 = x32028+(1);
      x44627 = x32029;
    };
    /* VAR */ int x44659 = 0;
    struct Q9GRPRecord* x44660 = (struct Q9GRPRecord*)malloc(48000000 * sizeof(struct Q9GRPRecord));
    memset(x44660, 0, 48000000 * sizeof(struct Q9GRPRecord));
    /* VAR */ int x44661 = 0;
    while(1) {
      
      int x12649 = x44661;
      int x12650 = x12649<(48000000);
      if (!(x12650)) break; 
      
      int x12651 = x44661;
      struct Q9GRPRecord* x17493 = (struct Q9GRPRecord*)malloc(1 * sizeof(struct Q9GRPRecord));
      memset(x17493, 0, 1 * sizeof(struct Q9GRPRecord));
      x17493->NATION = ""; x17493->O_YEAR = 0;
      struct Q9GRPRecord x16438 = *x17493;
      *(x44660 + x12651) = x16438;
      struct Q9GRPRecord* x16440 = &(x44660[x12651]);
      x17493 = x16440;
      int x12654 = x44661;
      int x12655 = x12654+(1);
      x44661 = x12655;
    };
    /* VAR */ int x44676 = 0;
    struct AGGRecord_Q9GRPRecord* x44677 = (struct AGGRecord_Q9GRPRecord*)malloc(175 * sizeof(struct AGGRecord_Q9GRPRecord));
    memset(x44677, 0, 175 * sizeof(struct AGGRecord_Q9GRPRecord));
    /* VAR */ int x44678 = 0;
    while(1) {
      
      int x12661 = x44678;
      int x12662 = x12661<(175);
      if (!(x12662)) break; 
      
      int x12663 = x44678;
      struct Q9GRPRecord* x12664 = &(x44660[x12663]);
      struct AGGRecord_Q9GRPRecord* x17511 = (struct AGGRecord_Q9GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q9GRPRecord));
      memset(x17511, 0, 1 * sizeof(struct AGGRecord_Q9GRPRecord));
      x17511->key = x12664; x17511->aggs = 0.0;
      struct AGGRecord_Q9GRPRecord x16454 = *x17511;
      *(x44677 + x12663) = x16454;
      struct AGGRecord_Q9GRPRecord* x16456 = &(x44677[x12663]);
      x17511 = x16456;
      int x12667 = x44678;
      int x12668 = x12667+(1);
      x44678 = x12668;
    };
    /* VAR */ struct timeval x44694 = x12841;
    struct timeval x44695 = x44694;
    /* VAR */ struct timeval x44696 = x12841;
    struct timeval x44697 = x44696;
    /* VAR */ struct timeval x44698 = x12841;
    struct timeval x44699 = x44698;
    struct timeval* x44700 = &x44697;
    gettimeofday(x44700, NULL);
    /* VAR */ int x44702 = 0;
    int* x44765 = &(x44734);
    GTree* x44766 = g_tree_new(x44765);
    /* VAR */ int x44767 = 0;
    /* VAR */ int x44768 = 0;
    while(1) {
      
      int x44770 = x44702;
      int x44771 = x44770<(x13543);
      if (!(x44771)) break; 
      
      int x3148 = x44702;
      struct PARTRecord* x437 = &(x15607[x3148]);
      char* x439 = x437->P_NAME;
      char* x29820 = strstr(x439, "ghost");
      int x29821 = x29820!=(NULL);
      if(x29821) {
        int x441 = x437->P_PARTKEY;
        int x9786 = x441%(1600000);
        int x9787 = x44619[x9786];
        struct LINEITEMRecord* x9788 = x44618[x9786];
        int x32371 = 0;
        for(; x32371 < x9787 ; x32371 += 1) {
          
          struct LINEITEMRecord* x32372 = &(x9788[x32371]);
          int x32373 = x32372->L_PARTKEY;
          int x32374 = x32373==(x441);
          if(x32374) {
            int x5974 = x32372->L_PARTKEY;
            int x5975 = x5974==(x441);
            if(x5975) {
              int x1293 = x32372->L_ORDERKEY;
              int x1294 = x32372->L_SUPPKEY;
              double x1295 = x32372->L_QUANTITY;
              double x1296 = x32372->L_EXTENDEDPRICE;
              double x1297 = x32372->L_DISCOUNT;
              int x5984 = x1294-(1);
              struct SUPPLIERRecord* x5985 = &(x16045[x5984]);
              int x483 = x5985->S_SUPPKEY;
              int x9807 = x1294==(x483);
              if(x9807) {
                int x1354 = x5985->S_NATIONKEY;
                int x6001 = x1354-(0);
                struct NATIONRecord* x6002 = &(x15764[x6001]);
                int x523 = x6002->N_NATIONKEY;
                int x9813 = x1354==(x523);
                if(x9813) {
                  char* x1473 = x6002->N_NAME;
                  int x9816 = x5974%(1600000);
                  int x9817 = x44578[x9816];
                  struct PARTSUPPRecord* x9818 = x44577[x9816];
                  int x32263 = 0;
                  for(; x32263 < x9817 ; x32263 += 1) {
                    
                    struct PARTSUPPRecord* x32264 = &(x9818[x32263]);
                    int x32265 = x32264->PS_PARTKEY;
                    int x32266 = x32265==(x5974);
                    if(x32266) {
                      int x6027 = x32264->PS_PARTKEY;
                      int x6028 = x6027==(x5974);
                      /* VAR */ int ite39875 = 0;
                      if(x6028) {
                        int x45228 = x32264->PS_SUPPKEY;
                        int x45229 = x45228==(x1294);
                        ite39875 = x45229;
                      } else {
                        
                        ite39875 = 0;
                      };
                      int x37198 = ite39875;
                      if(x37198) {
                        double x1520 = x32264->PS_SUPPLYCOST;
                        struct ORDERSRecord* x6037 = &(x44559[x1293]);
                        int x629 = x6037->O_ORDERKEY;
                        int x9835 = x1293==(x629);
                        if(x9835) {
                          int x1636 = x6037->O_ORDERDATE;
                          int x13280 = x1636/(10000);
                          int x12756 = x44659;
                          struct Q9GRPRecord* x12757 = &(x44660[x12756]);
                          x12757->NATION = x1473;
                          x12757->O_YEAR = x13280;
                          int x12760 = x44659;
                          int x12761 = x12760+(1);
                          x44659 = x12761;
                          char* x26480 = x12757->NATION;
                          int x29885 = strlen(x26480);
                          /* VAR */ int x27612 = 0;
                          /* VAR */ int x27613 = 0;
                          while(1) {
                            
                            int x27614 = x27612;
                            int x27615 = x27614<(x29885);
                            if (!(x27615)) break; 
                            
                            int x27616 = x27613;
                            int x27617 = x27612;
                            char* x29893 = pointer_add(x26480, x27617);
                            char x29894 = *(x29893);
                            int x27620 = x27616+(x29894);
                            x27613 = x27620;
                            int x27622 = x27612;
                            int x27623 = x27622+(1);
                            x27612 = x27623;
                          };
                          int x27626 = x27613;
                          int x26482 = x12757->O_YEAR;
                          int x26484 = x27626+(x26482);
                          int x8379 = 1048576-(1);
                          int x8380 = x26484&(x8379);
                          GList** x8381 = x44547[x8380];
                          int x8382 = x44546;
                          int x8383 = x8380>(x8382);
                          if(x8383) {
                            x44546 = x8380;
                          };
                          /* VAR */ struct AGGRecord_Q9GRPRecord* x19768 = NULL;
                          GList* x19769 = *(x8381);
                          /* VAR */ GList* x19770 = x19769;
                          while(1) {
                            
                            GList* x19771 = x19770;
                            GList* x19772 = NULL;
                            int x19773 = x19771!=(x19772);
                            if (!(x19773)) break; 
                            
                            GList* x19774 = x19770;
                            void* x19775 = g_list_nth_data(x19774, 0);
                            struct AGGRecord_Q9GRPRecord* x19776 = (struct AGGRecord_Q9GRPRecord*){x19775};
                            GList* x19777 = x19770;
                            GList* x19778 = g_list_next(x19777);
                            x19770 = x19778;
                            struct Q9GRPRecord* x19780 = x19776->key;
                            char* x26514 = x19780->NATION;
                            int x27660 = strcmp(x26514, x26480);
                            int x27661 = !(x27660);
                            int x26516 = x19780->O_YEAR;
                            int x26517 = x26516==(x26482);
                            /* VAR */ int ite39959 = 0;
                            if(x27661) {
                              ite39959 = x26517;
                            } else {
                              
                              ite39959 = 0;
                            };
                            int x37270 = ite39959;
                            if(x37270) {
                              x19768 = x19776;
                              break;
                            };
                          };
                          struct AGGRecord_Q9GRPRecord* x19786 = x19768;
                          int x24275 = x19786!=(NULL);
                          /* VAR */ struct AGGRecord_Q9GRPRecord* ite37277 = 0;
                          if(x24275) {
                            ite37277 = x19786;
                          } else {
                            
                            /* VAR */ double x37279 = 0;
                            /* VAR */ double x37280 = 0;
                            double x37281 = x37280;
                            int x37282 = x44676;
                            struct AGGRecord_Q9GRPRecord* x37283 = &(x44677[x37282]);
                            x37283->key = x12757;
                            x37283->aggs = x37281;
                            int x37286 = x44676;
                            int x37287 = x37286+(1);
                            x44676 = x37287;
                            GList* x37289 = *(x8381);
                            GList* x37290 = g_list_prepend(x37289, x37283);
                            pointer_assign(x8381, x37290);
                            ite37277 = x37283;
                          };
                          struct AGGRecord_Q9GRPRecord* x8395 = ite37277;
                          double x10824 = x8395->aggs;
                          double x709 = 1.0-(x1297);
                          double x710 = x1296*(x709);
                          double x711 = x10824+(x710);
                          double x714 = x1520*(x1295);
                          double x715 = x711-(x714);
                          x8395->aggs = x715;
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
      int x3189 = x44702;
      int x471 = x3189+(1);
      x44702 = x471;
    };
    int x45348 = x44546;
    int x45349 = x45348+(1);
    int x32641 = 0;
    for(; x32641 < x45349 ; x32641 += 1) {
      
      GList** x32642 = x44547[x32641];
      GList* x32647 = *(x32642);
      /* VAR */ GList* x32648 = x32647;
      while(1) {
        
        GList* x19830 = x32648;
        GList* x19831 = NULL;
        int x19832 = x19830!=(x19831);
        if (!(x19832)) break; 
        
        GList* x19833 = x32648;
        void* x19834 = g_list_nth_data(x19833, 0);
        struct AGGRecord_Q9GRPRecord* x19835 = (struct AGGRecord_Q9GRPRecord*){x19834};
        GList* x19836 = x32648;
        GList* x19837 = g_list_next(x19836);
        x32648 = x19837;
        g_tree_insert(x44766, x19835, x19835);
      };
    };
    while(1) {
      
      int x3508 = x44767;
      int x737 = !(x3508);
      /* VAR */ int ite40046 = 0;
      if(x737) {
        int x45396 = g_tree_nnodes(x44766);
        int x45397 = x45396!=(0);
        ite40046 = x45397;
      } else {
        
        ite40046 = 0;
      };
      int x37352 = ite40046;
      if (!(x37352)) break; 
      
      void* x19851 = NULL;
      void** x19859 = &(x19851);
      g_tree_foreach(x44766, x19858, x19859);
      struct AGGRecord_Q9GRPRecord* x19861 = (struct AGGRecord_Q9GRPRecord*){x19851};
      int x19862 = g_tree_remove(x44766, x19861);
      if(0) {
        x44767 = 1;
      } else {
        
        struct Q9GRPRecord* x750 = x19861->key;
        char* x751 = x750->NATION;
        int x753 = x750->O_YEAR;
        double x10868 = x19861->aggs;
        printf("%s|%d|%.4f\n", x751, x753, x10868);
        int x3528 = x44768;
        int x758 = x3528+(1);
        x44768 = x758;
      };
    };
    int x45424 = x44768;
    printf("(%d rows)\n", x45424);
    struct timeval* x45426 = &x44699;
    gettimeofday(x45426, NULL);
    struct timeval* x45428 = &x44695;
    struct timeval* x45429 = &x44699;
    struct timeval* x45430 = &x44697;
    long x45431 = timeval_subtract(x45428, x45429, x45430);
    printf("Generated code run in %ld milliseconds.\n", x45431);
  };
}
/* ----------- FUNCTIONS ----------- */
int x44734(struct AGGRecord_Q9GRPRecord* x374, struct AGGRecord_Q9GRPRecord* x375) {
  struct Q9GRPRecord* x376 = x374->key;
  struct Q9GRPRecord* x377 = x375->key;
  char* x378 = x376->NATION;
  char* x379 = x377->NATION;
  int x29800 = strcmp(x378, x379);
  int x381 = x29800==(0);
  /* VAR */ int ite36758 = 0;
  if(x381) {
    int x36759 = x376->O_YEAR;
    int x36760 = x377->O_YEAR;
    int x36761 = x36759<(x36760);
    /* VAR */ int ite36763 = 0;
    if(x36761) {
      ite36763 = 1;
    } else {
      
      int x36765 = x36759>(x36760);
      /* VAR */ int ite36767 = 0;
      if(x36765) {
        ite36767 = -1;
      } else {
        
        ite36767 = 0;
      };
      int x36766 = ite36767;
      ite36763 = x36766;
    };
    int x36762 = ite36763;
    ite36758 = x36762;
  } else {
    
    ite36758 = x29800;
  };
  int x388 = ite36758;
  return x388; 
}

int x19858(void* x19852, void* x19853, void* x19854) {
  struct AGGRecord_Q9GRPRecord** x19855 = (struct AGGRecord_Q9GRPRecord**){x19854};
  struct AGGRecord_Q9GRPRecord* x19856 = (struct AGGRecord_Q9GRPRecord*){x19853};
  pointer_assign(x19855, x19856);
  return 1; 
}
