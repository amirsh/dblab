#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct AGGRecord_Q7GRPRecord;
  struct NATIONRecord;
  struct ORDERSRecord;
  struct Q7GRPRecord;
  struct Set_AGGRecord_Q7GRPRecord;
  struct SUPPLIERRecord;
  struct CUSTOMERRecord;
  
  struct LINEITEMRecord {
  int L_ORDERKEY;
  int L_SUPPKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  int L_SHIPDATE;
  };
  
  struct AGGRecord_Q7GRPRecord {
  struct Q7GRPRecord* key;
  double* aggs;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  };
  
  struct Q7GRPRecord {
  char* SUPP_NATION;
  char* CUST_NATION;
  int L_YEAR;
  };
  
  struct Set_AGGRecord_Q7GRPRecord {
  int maxSize;
  struct AGGRecord_Q7GRPRecord* array;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  int S_NATIONKEY;
  };
  
  struct CUSTOMERRecord {
  int C_CUSTKEY;
  int C_NATIONKEY;
  };
  
  


int x49915(struct AGGRecord_Q7GRPRecord* x344, struct AGGRecord_Q7GRPRecord* x345);

int x22890(void* x22884, void* x22885, void* x22886);
/* GLOBAL VARS */

struct timeval x15928;
int main(int argc, char** argv) {
  FILE* x16715 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x16716 = 0;
  int x16717 = x16716;
  int* x16718 = &x16717;
  int x16719 = fscanf(x16715, "%d", x16718);
  pclose(x16715);
  struct NATIONRecord* x18739 = (struct NATIONRecord*)malloc(x16717 * sizeof(struct NATIONRecord));
  memset(x18739, 0, x16717 * sizeof(struct NATIONRecord));
  int x16723 = O_RDONLY;
  int x16724 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x16723);
  struct stat x16725 = (struct stat){0};
  /* VAR */ struct stat x16726 = x16725;
  struct stat x16727 = x16726;
  struct stat* x16728 = &x16727;
  int x16729 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x16728);
  int x16731 = PROT_READ;
  int x16732 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x16728->st_size), x16731, x16732, x16724, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite38515 = 0;
    if((x5<(x16717))) {
      char x47818 = *x3;
      ite38515 = (x47818!=('\0'));
    } else {
      
      ite38515 = 0;
    };
    int x35875 = ite38515;
    if (!(x35875)) break; 
    
    /* VAR */ int x16740 = 0;
    int x16741 = x16740;
    int* x16742 = &x16741;
    char* x16743 = strntoi_unchecked(x3, x16742);
    x3 = x16743;
    char* x18763 = (char*)malloc(26 * sizeof(char));
    memset(x18763, 0, 26 * sizeof(char));
    /* VAR */ char* x16746 = x3;
    while(1) {
      
      char x16747 = *x3;
      /* VAR */ int ite38534 = 0;
      if((x16747!=('|'))) {
        char x47836 = *x3;
        ite38534 = (x47836!=('\n'));
      } else {
        
        ite38534 = 0;
      };
      int x35887 = ite38534;
      if (!(x35887)) break; 
      
      x3 += 1;
    };
    char* x16754 = x16746;
    int x16755 = x3 - x16754;
    char* x16756 = x16746;
    char* x16757 = strncpy(x18763, x16756, x16755);
    x3 += 1;
    /* VAR */ int x16764 = 0;
    int x16765 = x16764;
    int* x16766 = &x16765;
    char* x16767 = strntoi_unchecked(x3, x16766);
    x3 = x16767;
    char* x18786 = (char*)malloc(153 * sizeof(char));
    memset(x18786, 0, 153 * sizeof(char));
    /* VAR */ char* x16770 = x3;
    while(1) {
      
      char x16771 = *x3;
      /* VAR */ int ite38562 = 0;
      if((x16771!=('|'))) {
        char x47863 = *x3;
        ite38562 = (x47863!=('\n'));
      } else {
        
        ite38562 = 0;
      };
      int x35908 = ite38562;
      if (!(x35908)) break; 
      
      x3 += 1;
    };
    char* x16778 = x16770;
    int x16779 = x3 - x16778;
    char* x16780 = x16770;
    char* x16781 = strncpy(x18786, x16780, x16779);
    x3 += 1;
    struct NATIONRecord* x19832 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x19832, 0, 1 * sizeof(struct NATIONRecord));
    x19832->N_NATIONKEY = x16741; x19832->N_NAME = x18763;
    int x28 = x4;
    struct NATIONRecord x18806 = *x19832;
    *(x18739 + x28) = x18806;
    struct NATIONRecord* x18808 = &(x18739[x28]);
    x19832 = x18808;
    int x30 = x4;
    x4 = (x30+(1));
  };
  FILE* x16794 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x16795 = 0;
  int x16796 = x16795;
  int* x16797 = &x16796;
  int x16798 = fscanf(x16794, "%d", x16797);
  pclose(x16794);
  struct ORDERSRecord* x18819 = (struct ORDERSRecord*)malloc(x16796 * sizeof(struct ORDERSRecord));
  memset(x18819, 0, x16796 * sizeof(struct ORDERSRecord));
  int x16802 = O_RDONLY;
  int x16803 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x16802);
  /* VAR */ struct stat x16804 = x16725;
  struct stat x16805 = x16804;
  struct stat* x16806 = &x16805;
  int x16807 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x16806);
  int x16809 = PROT_READ;
  int x16810 = MAP_PRIVATE;
  char* x36 = mmap(NULL, (x16806->st_size), x16809, x16810, x16803, 0);
  /* VAR */ int x37 = 0;
  while(1) {
    
    int x38 = x37;
    /* VAR */ int ite38612 = 0;
    if((x38<(x16796))) {
      char x47912 = *x36;
      ite38612 = (x47912!=('\0'));
    } else {
      
      ite38612 = 0;
    };
    int x35951 = ite38612;
    if (!(x35951)) break; 
    
    /* VAR */ int x16818 = 0;
    int x16819 = x16818;
    int* x16820 = &x16819;
    char* x16821 = strntoi_unchecked(x36, x16820);
    x36 = x16821;
    /* VAR */ int x16823 = 0;
    int x16824 = x16823;
    int* x16825 = &x16824;
    char* x16826 = strntoi_unchecked(x36, x16825);
    x36 = x16826;
    char x16828 = *x36;
    /* VAR */ char x16829 = x16828;
    x36 += 1;
    x36 += 1;
    /* VAR */ double x16833 = 0.0;
    double x16834 = x16833;
    double* x16835 = &x16834;
    char* x16836 = strntod_unchecked(x36, x16835);
    x36 = x16836;
    /* VAR */ int x16838 = 0;
    int x16839 = x16838;
    int* x16840 = &x16839;
    char* x16841 = strntoi_unchecked(x36, x16840);
    x36 = x16841;
    /* VAR */ int x16843 = 0;
    int x16844 = x16843;
    int* x16845 = &x16844;
    char* x16846 = strntoi_unchecked(x36, x16845);
    x36 = x16846;
    /* VAR */ int x16848 = 0;
    int x16849 = x16848;
    int* x16850 = &x16849;
    char* x16851 = strntoi_unchecked(x36, x16850);
    x36 = x16851;
    char* x18876 = (char*)malloc(16 * sizeof(char));
    memset(x18876, 0, 16 * sizeof(char));
    /* VAR */ char* x16858 = x36;
    while(1) {
      
      char x16859 = *x36;
      /* VAR */ int ite38665 = 0;
      if((x16859!=('|'))) {
        char x47964 = *x36;
        ite38665 = (x47964!=('\n'));
      } else {
        
        ite38665 = 0;
      };
      int x35997 = ite38665;
      if (!(x35997)) break; 
      
      x36 += 1;
    };
    char* x16866 = x16858;
    int x16867 = x36 - x16866;
    char* x16868 = x16858;
    char* x16869 = strncpy(x18876, x16868, x16867);
    x36 += 1;
    char* x18894 = (char*)malloc(16 * sizeof(char));
    memset(x18894, 0, 16 * sizeof(char));
    /* VAR */ char* x16877 = x36;
    while(1) {
      
      char x16878 = *x36;
      /* VAR */ int ite38688 = 0;
      if((x16878!=('|'))) {
        char x47986 = *x36;
        ite38688 = (x47986!=('\n'));
      } else {
        
        ite38688 = 0;
      };
      int x36013 = ite38688;
      if (!(x36013)) break; 
      
      x36 += 1;
    };
    char* x16885 = x16877;
    int x16886 = x36 - x16885;
    char* x16887 = x16877;
    char* x16888 = strncpy(x18894, x16887, x16886);
    x36 += 1;
    /* VAR */ int x16895 = 0;
    int x16896 = x16895;
    int* x16897 = &x16896;
    char* x16898 = strntoi_unchecked(x36, x16897);
    x36 = x16898;
    char* x18917 = (char*)malloc(80 * sizeof(char));
    memset(x18917, 0, 80 * sizeof(char));
    /* VAR */ char* x16901 = x36;
    while(1) {
      
      char x16902 = *x36;
      /* VAR */ int ite38716 = 0;
      if((x16902!=('|'))) {
        char x48013 = *x36;
        ite38716 = (x48013!=('\n'));
      } else {
        
        ite38716 = 0;
      };
      int x36034 = ite38716;
      if (!(x36034)) break; 
      
      x36 += 1;
    };
    char* x16909 = x16901;
    int x16910 = x36 - x16909;
    char* x16911 = x16901;
    char* x16912 = strncpy(x18917, x16911, x16910);
    x36 += 1;
    struct ORDERSRecord* x19965 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x19965, 0, 1 * sizeof(struct ORDERSRecord));
    x19965->O_ORDERKEY = x16819; x19965->O_CUSTKEY = x16824;
    int x72 = x37;
    struct ORDERSRecord x18937 = *x19965;
    *(x18819 + x72) = x18937;
    struct ORDERSRecord* x18939 = &(x18819[x72]);
    x19965 = x18939;
    int x74 = x37;
    x37 = (x74+(1));
  };
  FILE* x16925 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x16926 = 0;
  int x16927 = x16926;
  int* x16928 = &x16927;
  int x16929 = fscanf(x16925, "%d", x16928);
  pclose(x16925);
  struct LINEITEMRecord* x18950 = (struct LINEITEMRecord*)malloc(x16927 * sizeof(struct LINEITEMRecord));
  memset(x18950, 0, x16927 * sizeof(struct LINEITEMRecord));
  int x16933 = O_RDONLY;
  int x16934 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x16933);
  /* VAR */ struct stat x16935 = x16725;
  struct stat x16936 = x16935;
  struct stat* x16937 = &x16936;
  int x16938 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x16937);
  int x16940 = PROT_READ;
  int x16941 = MAP_PRIVATE;
  char* x80 = mmap(NULL, (x16937->st_size), x16940, x16941, x16934, 0);
  /* VAR */ int x81 = 0;
  while(1) {
    
    int x82 = x81;
    /* VAR */ int ite38766 = 0;
    if((x82<(x16927))) {
      char x48062 = *x80;
      ite38766 = (x48062!=('\0'));
    } else {
      
      ite38766 = 0;
    };
    int x36077 = ite38766;
    if (!(x36077)) break; 
    
    /* VAR */ int x16949 = 0;
    int x16950 = x16949;
    int* x16951 = &x16950;
    char* x16952 = strntoi_unchecked(x80, x16951);
    x80 = x16952;
    /* VAR */ int x16954 = 0;
    int x16955 = x16954;
    int* x16956 = &x16955;
    char* x16957 = strntoi_unchecked(x80, x16956);
    x80 = x16957;
    /* VAR */ int x16959 = 0;
    int x16960 = x16959;
    int* x16961 = &x16960;
    char* x16962 = strntoi_unchecked(x80, x16961);
    x80 = x16962;
    /* VAR */ int x16964 = 0;
    int x16965 = x16964;
    int* x16966 = &x16965;
    char* x16967 = strntoi_unchecked(x80, x16966);
    x80 = x16967;
    /* VAR */ double x16969 = 0.0;
    double x16970 = x16969;
    double* x16971 = &x16970;
    char* x16972 = strntod_unchecked(x80, x16971);
    x80 = x16972;
    /* VAR */ double x16974 = 0.0;
    double x16975 = x16974;
    double* x16976 = &x16975;
    char* x16977 = strntod_unchecked(x80, x16976);
    x80 = x16977;
    /* VAR */ double x16979 = 0.0;
    double x16980 = x16979;
    double* x16981 = &x16980;
    char* x16982 = strntod_unchecked(x80, x16981);
    x80 = x16982;
    /* VAR */ double x16984 = 0.0;
    double x16985 = x16984;
    double* x16986 = &x16985;
    char* x16987 = strntod_unchecked(x80, x16986);
    x80 = x16987;
    char x16989 = *x80;
    /* VAR */ char x16990 = x16989;
    x80 += 1;
    x80 += 1;
    char x16994 = *x80;
    /* VAR */ char x16995 = x16994;
    x80 += 1;
    x80 += 1;
    /* VAR */ int x16999 = 0;
    int x17000 = x16999;
    int* x17001 = &x17000;
    char* x17002 = strntoi_unchecked(x80, x17001);
    x80 = x17002;
    /* VAR */ int x17004 = 0;
    int x17005 = x17004;
    int* x17006 = &x17005;
    char* x17007 = strntoi_unchecked(x80, x17006);
    x80 = x17007;
    /* VAR */ int x17009 = 0;
    int x17010 = x17009;
    int* x17011 = &x17010;
    char* x17012 = strntoi_unchecked(x80, x17011);
    x80 = x17012;
    /* VAR */ int x17018 = 0;
    int x17019 = x17018;
    int* x17020 = &x17019;
    char* x17021 = strntoi_unchecked(x80, x17020);
    x80 = x17021;
    /* VAR */ int x17023 = 0;
    int x17024 = x17023;
    int* x17025 = &x17024;
    char* x17026 = strntoi_unchecked(x80, x17025);
    x80 = x17026;
    /* VAR */ int x17028 = 0;
    int x17029 = x17028;
    int* x17030 = &x17029;
    char* x17031 = strntoi_unchecked(x80, x17030);
    x80 = x17031;
    /* VAR */ int x17037 = 0;
    int x17038 = x17037;
    int* x17039 = &x17038;
    char* x17040 = strntoi_unchecked(x80, x17039);
    x80 = x17040;
    /* VAR */ int x17042 = 0;
    int x17043 = x17042;
    int* x17044 = &x17043;
    char* x17045 = strntoi_unchecked(x80, x17044);
    x80 = x17045;
    /* VAR */ int x17047 = 0;
    int x17048 = x17047;
    int* x17049 = &x17048;
    char* x17050 = strntoi_unchecked(x80, x17049);
    x80 = x17050;
    char* x19075 = (char*)malloc(26 * sizeof(char));
    memset(x19075, 0, 26 * sizeof(char));
    /* VAR */ char* x17057 = x80;
    while(1) {
      
      char x17058 = *x80;
      /* VAR */ int ite38887 = 0;
      if((x17058!=('|'))) {
        char x48182 = *x80;
        ite38887 = (x48182!=('\n'));
      } else {
        
        ite38887 = 0;
      };
      int x36191 = ite38887;
      if (!(x36191)) break; 
      
      x80 += 1;
    };
    char* x17065 = x17057;
    int x17066 = x80 - x17065;
    char* x17067 = x17057;
    char* x17068 = strncpy(x19075, x17067, x17066);
    x80 += 1;
    char* x19093 = (char*)malloc(11 * sizeof(char));
    memset(x19093, 0, 11 * sizeof(char));
    /* VAR */ char* x17076 = x80;
    while(1) {
      
      char x17077 = *x80;
      /* VAR */ int ite38910 = 0;
      if((x17077!=('|'))) {
        char x48204 = *x80;
        ite38910 = (x48204!=('\n'));
      } else {
        
        ite38910 = 0;
      };
      int x36207 = ite38910;
      if (!(x36207)) break; 
      
      x80 += 1;
    };
    char* x17084 = x17076;
    int x17085 = x80 - x17084;
    char* x17086 = x17076;
    char* x17087 = strncpy(x19093, x17086, x17085);
    x80 += 1;
    char* x19111 = (char*)malloc(45 * sizeof(char));
    memset(x19111, 0, 45 * sizeof(char));
    /* VAR */ char* x17095 = x80;
    while(1) {
      
      char x17096 = *x80;
      /* VAR */ int ite38933 = 0;
      if((x17096!=('|'))) {
        char x48226 = *x80;
        ite38933 = (x48226!=('\n'));
      } else {
        
        ite38933 = 0;
      };
      int x36223 = ite38933;
      if (!(x36223)) break; 
      
      x80 += 1;
    };
    char* x17103 = x17095;
    int x17104 = x80 - x17103;
    char* x17105 = x17095;
    char* x17106 = strncpy(x19111, x17105, x17104);
    x80 += 1;
    struct LINEITEMRecord* x20161 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x20161, 0, 1 * sizeof(struct LINEITEMRecord));
    x20161->L_ORDERKEY = x16950; x20161->L_SUPPKEY = x16960; x20161->L_EXTENDEDPRICE = x16975; x20161->L_DISCOUNT = x16980; x20161->L_SHIPDATE = (((x17000*(10000))+((x17005*(100))))+(x17010));
    int x124 = x81;
    struct LINEITEMRecord x19131 = *x20161;
    *(x18950 + x124) = x19131;
    struct LINEITEMRecord* x19133 = &(x18950[x124]);
    x20161 = x19133;
    int x126 = x81;
    x81 = (x126+(1));
  };
  FILE* x17119 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x17120 = 0;
  int x17121 = x17120;
  int* x17122 = &x17121;
  int x17123 = fscanf(x17119, "%d", x17122);
  pclose(x17119);
  struct CUSTOMERRecord* x19144 = (struct CUSTOMERRecord*)malloc(x17121 * sizeof(struct CUSTOMERRecord));
  memset(x19144, 0, x17121 * sizeof(struct CUSTOMERRecord));
  int x17127 = O_RDONLY;
  int x17128 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x17127);
  /* VAR */ struct stat x17129 = x16725;
  struct stat x17130 = x17129;
  struct stat* x17131 = &x17130;
  int x17132 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x17131);
  int x17134 = PROT_READ;
  int x17135 = MAP_PRIVATE;
  char* x132 = mmap(NULL, (x17131->st_size), x17134, x17135, x17128, 0);
  /* VAR */ int x133 = 0;
  while(1) {
    
    int x134 = x133;
    /* VAR */ int ite38983 = 0;
    if((x134<(x17121))) {
      char x48275 = *x132;
      ite38983 = (x48275!=('\0'));
    } else {
      
      ite38983 = 0;
    };
    int x36266 = ite38983;
    if (!(x36266)) break; 
    
    /* VAR */ int x17143 = 0;
    int x17144 = x17143;
    int* x17145 = &x17144;
    char* x17146 = strntoi_unchecked(x132, x17145);
    x132 = x17146;
    char* x19167 = (char*)malloc(26 * sizeof(char));
    memset(x19167, 0, 26 * sizeof(char));
    /* VAR */ char* x17149 = x132;
    while(1) {
      
      char x17150 = *x132;
      /* VAR */ int ite39002 = 0;
      if((x17150!=('|'))) {
        char x48293 = *x132;
        ite39002 = (x48293!=('\n'));
      } else {
        
        ite39002 = 0;
      };
      int x36278 = ite39002;
      if (!(x36278)) break; 
      
      x132 += 1;
    };
    char* x17157 = x17149;
    int x17158 = x132 - x17157;
    char* x17159 = x17149;
    char* x17160 = strncpy(x19167, x17159, x17158);
    x132 += 1;
    char* x19185 = (char*)malloc(41 * sizeof(char));
    memset(x19185, 0, 41 * sizeof(char));
    /* VAR */ char* x17168 = x132;
    while(1) {
      
      char x17169 = *x132;
      /* VAR */ int ite39025 = 0;
      if((x17169!=('|'))) {
        char x48315 = *x132;
        ite39025 = (x48315!=('\n'));
      } else {
        
        ite39025 = 0;
      };
      int x36294 = ite39025;
      if (!(x36294)) break; 
      
      x132 += 1;
    };
    char* x17176 = x17168;
    int x17177 = x132 - x17176;
    char* x17178 = x17168;
    char* x17179 = strncpy(x19185, x17178, x17177);
    x132 += 1;
    /* VAR */ int x17186 = 0;
    int x17187 = x17186;
    int* x17188 = &x17187;
    char* x17189 = strntoi_unchecked(x132, x17188);
    x132 = x17189;
    char* x19208 = (char*)malloc(16 * sizeof(char));
    memset(x19208, 0, 16 * sizeof(char));
    /* VAR */ char* x17192 = x132;
    while(1) {
      
      char x17193 = *x132;
      /* VAR */ int ite39053 = 0;
      if((x17193!=('|'))) {
        char x48342 = *x132;
        ite39053 = (x48342!=('\n'));
      } else {
        
        ite39053 = 0;
      };
      int x36315 = ite39053;
      if (!(x36315)) break; 
      
      x132 += 1;
    };
    char* x17200 = x17192;
    int x17201 = x132 - x17200;
    char* x17202 = x17192;
    char* x17203 = strncpy(x19208, x17202, x17201);
    x132 += 1;
    /* VAR */ double x17210 = 0.0;
    double x17211 = x17210;
    double* x17212 = &x17211;
    char* x17213 = strntod_unchecked(x132, x17212);
    x132 = x17213;
    char* x19231 = (char*)malloc(11 * sizeof(char));
    memset(x19231, 0, 11 * sizeof(char));
    /* VAR */ char* x17216 = x132;
    while(1) {
      
      char x17217 = *x132;
      /* VAR */ int ite39081 = 0;
      if((x17217!=('|'))) {
        char x48369 = *x132;
        ite39081 = (x48369!=('\n'));
      } else {
        
        ite39081 = 0;
      };
      int x36336 = ite39081;
      if (!(x36336)) break; 
      
      x132 += 1;
    };
    char* x17224 = x17216;
    int x17225 = x132 - x17224;
    char* x17226 = x17216;
    char* x17227 = strncpy(x19231, x17226, x17225);
    x132 += 1;
    char* x19249 = (char*)malloc(118 * sizeof(char));
    memset(x19249, 0, 118 * sizeof(char));
    /* VAR */ char* x17235 = x132;
    while(1) {
      
      char x17236 = *x132;
      /* VAR */ int ite39104 = 0;
      if((x17236!=('|'))) {
        char x48391 = *x132;
        ite39104 = (x48391!=('\n'));
      } else {
        
        ite39104 = 0;
      };
      int x36352 = ite39104;
      if (!(x36352)) break; 
      
      x132 += 1;
    };
    char* x17243 = x17235;
    int x17244 = x132 - x17243;
    char* x17245 = x17235;
    char* x17246 = strncpy(x19249, x17245, x17244);
    x132 += 1;
    struct CUSTOMERRecord* x20301 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x20301, 0, 1 * sizeof(struct CUSTOMERRecord));
    x20301->C_CUSTKEY = x17144; x20301->C_NATIONKEY = x17187;
    int x182 = x133;
    struct CUSTOMERRecord x19269 = *x20301;
    *(x19144 + x182) = x19269;
    struct CUSTOMERRecord* x19271 = &(x19144[x182]);
    x20301 = x19271;
    int x184 = x133;
    x133 = (x184+(1));
  };
  FILE* x17259 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x17260 = 0;
  int x17261 = x17260;
  int* x17262 = &x17261;
  int x17263 = fscanf(x17259, "%d", x17262);
  pclose(x17259);
  struct SUPPLIERRecord* x19282 = (struct SUPPLIERRecord*)malloc(x17261 * sizeof(struct SUPPLIERRecord));
  memset(x19282, 0, x17261 * sizeof(struct SUPPLIERRecord));
  int x17267 = O_RDONLY;
  int x17268 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x17267);
  /* VAR */ struct stat x17269 = x16725;
  struct stat x17270 = x17269;
  struct stat* x17271 = &x17270;
  int x17272 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x17271);
  int x17274 = PROT_READ;
  int x17275 = MAP_PRIVATE;
  char* x190 = mmap(NULL, (x17271->st_size), x17274, x17275, x17268, 0);
  /* VAR */ int x191 = 0;
  while(1) {
    
    int x192 = x191;
    /* VAR */ int ite39154 = 0;
    if((x192<(x17261))) {
      char x48440 = *x190;
      ite39154 = (x48440!=('\0'));
    } else {
      
      ite39154 = 0;
    };
    int x36395 = ite39154;
    if (!(x36395)) break; 
    
    /* VAR */ int x17283 = 0;
    int x17284 = x17283;
    int* x17285 = &x17284;
    char* x17286 = strntoi_unchecked(x190, x17285);
    x190 = x17286;
    char* x19305 = (char*)malloc(26 * sizeof(char));
    memset(x19305, 0, 26 * sizeof(char));
    /* VAR */ char* x17289 = x190;
    while(1) {
      
      char x17290 = *x190;
      /* VAR */ int ite39173 = 0;
      if((x17290!=('|'))) {
        char x48458 = *x190;
        ite39173 = (x48458!=('\n'));
      } else {
        
        ite39173 = 0;
      };
      int x36407 = ite39173;
      if (!(x36407)) break; 
      
      x190 += 1;
    };
    char* x17297 = x17289;
    int x17298 = x190 - x17297;
    char* x17299 = x17289;
    char* x17300 = strncpy(x19305, x17299, x17298);
    x190 += 1;
    char* x19323 = (char*)malloc(41 * sizeof(char));
    memset(x19323, 0, 41 * sizeof(char));
    /* VAR */ char* x17308 = x190;
    while(1) {
      
      char x17309 = *x190;
      /* VAR */ int ite39196 = 0;
      if((x17309!=('|'))) {
        char x48480 = *x190;
        ite39196 = (x48480!=('\n'));
      } else {
        
        ite39196 = 0;
      };
      int x36423 = ite39196;
      if (!(x36423)) break; 
      
      x190 += 1;
    };
    char* x17316 = x17308;
    int x17317 = x190 - x17316;
    char* x17318 = x17308;
    char* x17319 = strncpy(x19323, x17318, x17317);
    x190 += 1;
    /* VAR */ int x17326 = 0;
    int x17327 = x17326;
    int* x17328 = &x17327;
    char* x17329 = strntoi_unchecked(x190, x17328);
    x190 = x17329;
    char* x19346 = (char*)malloc(16 * sizeof(char));
    memset(x19346, 0, 16 * sizeof(char));
    /* VAR */ char* x17332 = x190;
    while(1) {
      
      char x17333 = *x190;
      /* VAR */ int ite39224 = 0;
      if((x17333!=('|'))) {
        char x48507 = *x190;
        ite39224 = (x48507!=('\n'));
      } else {
        
        ite39224 = 0;
      };
      int x36444 = ite39224;
      if (!(x36444)) break; 
      
      x190 += 1;
    };
    char* x17340 = x17332;
    int x17341 = x190 - x17340;
    char* x17342 = x17332;
    char* x17343 = strncpy(x19346, x17342, x17341);
    x190 += 1;
    /* VAR */ double x17350 = 0.0;
    double x17351 = x17350;
    double* x17352 = &x17351;
    char* x17353 = strntod_unchecked(x190, x17352);
    x190 = x17353;
    char* x19369 = (char*)malloc(102 * sizeof(char));
    memset(x19369, 0, 102 * sizeof(char));
    /* VAR */ char* x17356 = x190;
    while(1) {
      
      char x17357 = *x190;
      /* VAR */ int ite39252 = 0;
      if((x17357!=('|'))) {
        char x48534 = *x190;
        ite39252 = (x48534!=('\n'));
      } else {
        
        ite39252 = 0;
      };
      int x36465 = ite39252;
      if (!(x36465)) break; 
      
      x190 += 1;
    };
    char* x17364 = x17356;
    int x17365 = x190 - x17364;
    char* x17366 = x17356;
    char* x17367 = strncpy(x19369, x17366, x17365);
    x190 += 1;
    struct SUPPLIERRecord* x20423 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x20423, 0, 1 * sizeof(struct SUPPLIERRecord));
    x20423->S_SUPPKEY = x17284; x20423->S_NATIONKEY = x17327;
    int x232 = x191;
    struct SUPPLIERRecord x19389 = *x20423;
    *(x19282 + x232) = x19389;
    struct SUPPLIERRecord* x19391 = &(x19282[x232]);
    x20423 = x19391;
    int x234 = x191;
    x191 = (x234+(1));
  };
  int x239 = 0;
  for(; x239 < 1 ; x239 += 1) {
    
    /* VAR */ int x49694 = 0;
    struct Set_AGGRecord_Q7GRPRecord* x49695 = (struct Set_AGGRecord_Q7GRPRecord*)malloc(1048576 * sizeof(struct Set_AGGRecord_Q7GRPRecord));
    memset(x49695, 0, 1048576 * sizeof(struct Set_AGGRecord_Q7GRPRecord));
    int x32361 = 0;
    for(; x32361 < 1048576 ; x32361 += 1) {
      
      struct AGGRecord_Q7GRPRecord* x32362 = (struct AGGRecord_Q7GRPRecord*)malloc(256 * sizeof(struct AGGRecord_Q7GRPRecord));
      memset(x32362, 0, 256 * sizeof(struct AGGRecord_Q7GRPRecord));
      struct Set_AGGRecord_Q7GRPRecord* x32363 = (struct Set_AGGRecord_Q7GRPRecord*)malloc(1 * sizeof(struct Set_AGGRecord_Q7GRPRecord));
      memset(x32363, 0, 1 * sizeof(struct Set_AGGRecord_Q7GRPRecord));
      x32363->maxSize = 0; x32363->array = x32362;
      struct Set_AGGRecord_Q7GRPRecord x32366 = *x32363;
      *(x49695 + x32361) = x32366;
      struct Set_AGGRecord_Q7GRPRecord* x32368 = &(x49695[x32361]);
      x32363 = x32368;
    };
    struct ORDERSRecord* x49715 = (struct ORDERSRecord*)malloc(60000000 * sizeof(struct ORDERSRecord));
    memset(x49715, 0, 60000000 * sizeof(struct ORDERSRecord));
    int x32381 = 0;
    for(; x32381 < x16796 ; x32381 += 1) {
      
      struct ORDERSRecord* x32382 = &(x18819[x32381]);
      int x32384 = (x32382->O_ORDERKEY)%(60000000);
      struct ORDERSRecord x32385 = *x32382;
      *(x49715 + x32384) = x32385;
      struct ORDERSRecord* x32387 = &(x49715[x32384]);
      x32382 = x32387;
    };
    struct LINEITEMRecord** x49733 = (struct LINEITEMRecord**)malloc(80000 * sizeof(struct LINEITEMRecord*));
    memset(x49733, 0, 80000 * sizeof(struct LINEITEMRecord*));
    int* x49734 = (int*)malloc(80000 * sizeof(int));
    memset(x49734, 0, 80000 * sizeof(int));
    int x32396 = 0;
    for(; x32396 < 80000 ; x32396 += 1) {
      
      struct LINEITEMRecord* x32397 = (struct LINEITEMRecord*)malloc(1024 * sizeof(struct LINEITEMRecord));
      memset(x32397, 0, 1024 * sizeof(struct LINEITEMRecord));
      *(x49733 + x32396) = x32397;
    };
    /* VAR */ int x49742 = 0;
    int x32417 = 0;
    for(; x32417 < x16927 ; x32417 += 1) {
      
      struct LINEITEMRecord* x32418 = &(x18950[x32417]);
      int x32420 = (x32418->L_SUPPKEY)%(80000);
      int x32421 = x49734[x32420];
      struct LINEITEMRecord* x32422 = x49733[x32420];
      struct LINEITEMRecord x32423 = *x32418;
      *(x32422 + x32421) = x32423;
      struct LINEITEMRecord* x32425 = &(x32422[x32421]);
      x32418 = x32425;
      *(x49734 + x32420) = (x32421+(1));
      int x32429 = x49742;
      x49742 = (x32429+(1));
    };
    struct SUPPLIERRecord** x49774 = (struct SUPPLIERRecord**)malloc(25 * sizeof(struct SUPPLIERRecord*));
    memset(x49774, 0, 25 * sizeof(struct SUPPLIERRecord*));
    int* x49775 = (int*)malloc(25 * sizeof(int));
    memset(x49775, 0, 25 * sizeof(int));
    int x32439 = 0;
    for(; x32439 < 25 ; x32439 += 1) {
      
      struct SUPPLIERRecord* x32440 = (struct SUPPLIERRecord*)malloc(4000 * sizeof(struct SUPPLIERRecord));
      memset(x32440, 0, 4000 * sizeof(struct SUPPLIERRecord));
      *(x49774 + x32439) = x32440;
    };
    /* VAR */ int x49783 = 0;
    int x32460 = 0;
    for(; x32460 < x17261 ; x32460 += 1) {
      
      struct SUPPLIERRecord* x32461 = &(x19282[x32460]);
      int x32463 = (x32461->S_NATIONKEY)%(25);
      int x32464 = x49775[x32463];
      struct SUPPLIERRecord* x32465 = x49774[x32463];
      struct SUPPLIERRecord x32466 = *x32461;
      *(x32465 + x32464) = x32466;
      struct SUPPLIERRecord* x32468 = &(x32465[x32464]);
      x32461 = x32468;
      *(x49775 + x32463) = (x32464+(1));
      int x32472 = x49783;
      x49783 = (x32472+(1));
    };
    /* VAR */ int x49815 = 0;
    struct Q7GRPRecord* x49816 = (struct Q7GRPRecord*)malloc(48000000 * sizeof(struct Q7GRPRecord));
    memset(x49816, 0, 48000000 * sizeof(struct Q7GRPRecord));
    /* VAR */ int x49817 = 0;
    while(1) {
      
      int x15667 = x49817;
      if (!((x15667<(48000000)))) break; 
      
      int x15669 = x49817;
      struct Q7GRPRecord* x20524 = (struct Q7GRPRecord*)malloc(1 * sizeof(struct Q7GRPRecord));
      memset(x20524, 0, 1 * sizeof(struct Q7GRPRecord));
      x20524->SUPP_NATION = ""; x20524->CUST_NATION = ""; x20524->L_YEAR = 0;
      struct Q7GRPRecord x19485 = *x20524;
      *(x49816 + x15669) = x19485;
      struct Q7GRPRecord* x19487 = &(x49816[x15669]);
      x20524 = x19487;
      int x15672 = x49817;
      x49817 = (x15672+(1));
    };
    /* VAR */ int x49832 = 0;
    double** x49833 = (double**)malloc(4375 * sizeof(double*));
    memset(x49833, 0, 4375 * sizeof(double*));
    /* VAR */ int x49834 = 0;
    while(1) {
      
      int x15679 = x49834;
      if (!((x15679<(4375)))) break; 
      
      int x15681 = x49834;
      double* x19499 = (double*)malloc(1 * sizeof(double));
      memset(x19499, 0, 1 * sizeof(double));
      *(x49833 + x15681) = x19499;
      int x15684 = x49834;
      x49834 = (x15684+(1));
    };
    /* VAR */ int x49844 = 0;
    struct AGGRecord_Q7GRPRecord* x49845 = (struct AGGRecord_Q7GRPRecord*)malloc(4375 * sizeof(struct AGGRecord_Q7GRPRecord));
    memset(x49845, 0, 4375 * sizeof(struct AGGRecord_Q7GRPRecord));
    /* VAR */ int x49846 = 0;
    while(1) {
      
      int x15691 = x49846;
      if (!((x15691<(4375)))) break; 
      
      int x15693 = x49846;
      struct Q7GRPRecord* x15694 = &(x49816[x15693]);
      double* x15695 = x49833[x15693];
      struct AGGRecord_Q7GRPRecord* x20555 = (struct AGGRecord_Q7GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q7GRPRecord));
      memset(x20555, 0, 1 * sizeof(struct AGGRecord_Q7GRPRecord));
      x20555->key = x15694; x20555->aggs = x15695;
      struct AGGRecord_Q7GRPRecord x19514 = *x20555;
      *(x49845 + x15693) = x19514;
      struct AGGRecord_Q7GRPRecord* x19516 = &(x49845[x15693]);
      x20555 = x19516;
      int x15698 = x49846;
      x49846 = (x15698+(1));
    };
    /* VAR */ struct timeval x49863 = x15928;
    struct timeval x49864 = x49863;
    /* VAR */ struct timeval x49865 = x15928;
    struct timeval x49866 = x49865;
    /* VAR */ struct timeval x49867 = x15928;
    struct timeval x49868 = x49867;
    struct timeval* x49869 = &x49866;
    gettimeofday(x49869, NULL);
    /* VAR */ int x49871 = 0;
    /* VAR */ int x49872 = 0;
    /* VAR */ struct NATIONRecord* x49873 = NULL;
    int* x49956 = &(x49915);
    GTree* x49957 = g_tree_new(x49956);
    /* VAR */ int x49958 = 0;
    /* VAR */ int x49959 = 0;
    while(1) {
      
      int x49961 = x49871;
      if (!((x49961<(x16717)))) break; 
      
      int x3146 = x49871;
      struct NATIONRecord* x399 = &(x18739[x3146]);
      x49873 = x399;
      while(1) {
        
        int x49967 = x49872;
        if (!((x49967<(x16717)))) break; 
        
        int x3156 = x49872;
        struct NATIONRecord* x408 = &(x18739[x3156]);
        struct NATIONRecord* x3159 = x49873;
        char* x411 = x3159->N_NAME;
        int x30335 = strcmp(x411, "UNITED STATES");
        /* VAR */ int ite40717 = 0;
        if((x30335==(0))) {
          int x49978 = strcmp((x408->N_NAME), "INDONESIA");
          ite40717 = (x49978==(0));
        } else {
          
          ite40717 = 0;
        };
        int x37771 = ite40717;
        /* VAR */ int ite40727 = 0;
        if(x37771) {
          ite40727 = 1;
        } else {
          
          int x49987 = strcmp(x411, "INDONESIA");
          /* VAR */ int x49989 = 0;
          if((x49987==(0))) {
            int x49992 = strcmp((x408->N_NAME), "UNITED STATES");
            x49989 = (x49992==(0));
          } else {
            
            x49989 = 0;
          };
          int x49997 = x49989;
          ite40727 = x49997;
        };
        int x37773 = ite40727;
        if(x37773) {
          struct NATIONRecord* x3171 = x49873;
          int x1276 = x3171->N_NATIONKEY;
          int x5862 = x1276%(25);
          int x5863 = x49775[x5862];
          struct SUPPLIERRecord* x5864 = x49774[x5862];
          int x32922 = 0;
          for(; x32922 < x5863 ; x32922 += 1) {
            
            struct SUPPLIERRecord* x32923 = &(x5864[x32922]);
            if((x1276==((x32923->S_NATIONKEY)))) {
              int x1330 = x32923->S_SUPPKEY;
              int x5879 = x1330%(80000);
              int x5880 = x49734[x5879];
              struct LINEITEMRecord* x5881 = x49733[x5879];
              int x32775 = 0;
              for(; x32775 < x5880 ; x32775 += 1) {
                
                struct LINEITEMRecord* x32776 = &(x5881[x32775]);
                int x32777 = x32776->L_SHIPDATE;
                /* VAR */ int ite41324 = 0;
                if((x32777>=(19950101))) {
                  ite41324 = (x32777<=(19961231));
                } else {
                  
                  ite41324 = 0;
                };
                int x38271 = ite41324;
                if(x38271) {
                  if((x1330==((x32776->L_SUPPKEY)))) {
                    int x1392 = x32776->L_ORDERKEY;
                    struct ORDERSRecord* x5907 = &(x49715[x1392]);
                    if((x1392==((x5907->O_ORDERKEY)))) {
                      int x1577 = x5907->O_CUSTKEY;
                      struct CUSTOMERRecord* x13761 = &(x19144[(x1577-(1))]);
                      if(((x13761->C_CUSTKEY)==(x1577))) {
                        /* VAR */ int ite41351 = 0;
                        if(((x13761->C_CUSTKEY)==(x1577))) {
                          ite41351 = ((x13761->C_NATIONKEY)==((x408->N_NATIONKEY)));
                        } else {
                          
                          ite41351 = 0;
                        };
                        int x38292 = ite41351;
                        if(x38292) {
                          int x15810 = x49815;
                          struct Q7GRPRecord* x15811 = &(x49816[x15810]);
                          x15811->SUPP_NATION = (x3171->N_NAME);
                          x15811->CUST_NATION = (x408->N_NAME);
                          x15811->L_YEAR = (x32777/(10000));
                          int x15815 = x49815;
                          x49815 = (x15815+(1));
                          char* x27092 = x15811->SUPP_NATION;
                          int x30409 = strlen(x27092);
                          /* VAR */ int x28183 = 0;
                          /* VAR */ int x28184 = 0;
                          while(1) {
                            
                            int x28185 = x28183;
                            if (!((x28185<(x30409)))) break; 
                            
                            int x28187 = x28184;
                            int x28188 = x28183;
                            char* x30417 = pointer_add(x27092, x28188);
                            char x30418 = *(x30417);
                            x28184 = (x28187+(x30418));
                            int x28193 = x28183;
                            x28183 = (x28193+(1));
                          };
                          int x28197 = x28184;
                          char* x27094 = x15811->CUST_NATION;
                          int x30427 = strlen(x27094);
                          /* VAR */ int x28200 = 0;
                          /* VAR */ int x28201 = 0;
                          while(1) {
                            
                            int x28202 = x28200;
                            if (!((x28202<(x30427)))) break; 
                            
                            int x28204 = x28201;
                            int x28205 = x28200;
                            char* x30435 = pointer_add(x27094, x28205);
                            char x30436 = *(x30435);
                            x28201 = (x28204+(x30436));
                            int x28210 = x28200;
                            x28200 = (x28210+(1));
                          };
                          int x28214 = x28201;
                          int x27096 = x15811->L_YEAR;
                          int x8217 = ((x28197+(x28214))+(x27096))&(1048575);
                          struct Set_AGGRecord_Q7GRPRecord* x9667 = &(x49695[x8217]);
                          int x8219 = x49694;
                          if((x8217>(x8219))) {
                            x49694 = x8217;
                          };
                          /* VAR */ int i9676 = 0;
                          /* VAR */ int found9677 = 0;
                          while(1) {
                            
                            int x9678 = i9676;
                            int x9679 = x9667->maxSize;
                            /* VAR */ int ite41419 = 0;
                            if((x9678<(x9679))) {
                              int x50667 = found9677;
                              int x50668 = !(x50667);
                              ite41419 = x50668;
                            } else {
                              
                              ite41419 = 0;
                            };
                            int x38353 = ite41419;
                            if (!(x38353)) break; 
                            
                            int x9685 = i9676;
                            struct AGGRecord_Q7GRPRecord* x9686 = &(((struct AGGRecord_Q7GRPRecord*) { x9667->array })[x9685]);
                            struct Q7GRPRecord* x9687 = x9686->key;
                            int x28238 = strcmp((x9687->SUPP_NATION), x27092);
                            int x28239 = !(x28238);
                            int x28241 = strcmp((x9687->CUST_NATION), x27094);
                            int x28242 = !(x28241);
                            /* VAR */ int ite41440 = 0;
                            if(x28239) {
                              ite41440 = x28242;
                            } else {
                              
                              ite41440 = 0;
                            };
                            int x38367 = ite41440;
                            /* VAR */ int ite41447 = 0;
                            if(x38367) {
                              ite41447 = ((x9687->L_YEAR)==(x27096));
                            } else {
                              
                              ite41447 = 0;
                            };
                            int x38369 = ite41447;
                            if(x38369) {
                              found9677 = 1;
                            } else {
                              
                              int x9690 = i9676;
                              i9676 = (x9690+(1));
                            };
                          };
                          int x9695 = found9677;
                          int x9696 = !(x9695);
                          /* VAR */ struct AGGRecord_Q7GRPRecord** ite38378 = 0;
                          if(x9696) {
                            ite38378 = NULL;
                          } else {
                            
                            int x38381 = i9676;
                            struct AGGRecord_Q7GRPRecord* x38382 = &(((struct AGGRecord_Q7GRPRecord*) { x9667->array })[x38381]);
                            ite38378 = x38382;
                          };
                          struct AGGRecord_Q7GRPRecord** x9703 = ite38378;
                          /* VAR */ struct AGGRecord_Q7GRPRecord* ite38388 = 0;
                          if((x9703!=(NULL))) {
                            ite38388 = x9703;
                          } else {
                            
                            int x38390 = x49832;
                            double* x38391 = x49833[x38390];
                            int x38392 = x49832;
                            x49832 = (x38392+(1));
                            int x38395 = x49844;
                            struct AGGRecord_Q7GRPRecord* x38396 = &(x49845[x38395]);
                            x38396->key = x15811;
                            x38396->aggs = x38391;
                            int x38399 = x49844;
                            x49844 = (x38399+(1));
                            struct AGGRecord_Q7GRPRecord* x38402 = x9667->array;
                            int x38403 = x9667->maxSize;
                            struct AGGRecord_Q7GRPRecord x38404 = *x38396;
                            *(x38402 + x38403) = x38404;
                            struct AGGRecord_Q7GRPRecord* x38406 = &(x38402[x38403]);
                            x38396 = x38406;
                            int x38408 = x9667->maxSize;
                            x9667->maxSize = (x38408+(1));
                            ite38388 = x38396;
                          };
                          struct AGGRecord_Q7GRPRecord* x8232 = ite38388;
                          double* x717 = x8232->aggs;
                          double x731 = x717[0];
                          *x717 = (x731+(((x32776->L_EXTENDEDPRICE)*((1.0-((x32776->L_DISCOUNT)))))));
                        };
                      };
                    };
                  };
                };
              };
            };
          };
        };
        int x3179 = x49872;
        x49872 = (x3179+(1));
      };
      x49872 = 0;
      int x3183 = x49871;
      x49871 = (x3183+(1));
    };
    int x50754 = x49694;
    int x33248 = 0;
    for(; x33248 < (x50754+(1)) ; x33248 += 1) {
      
      struct Set_AGGRecord_Q7GRPRecord* x33249 = &(x49695[x33248]);
      int x33250 = x33249->maxSize;
      int x33243 = 0;
      for(; x33243 < x33250 ; x33243 += 1) {
        
        struct AGGRecord_Q7GRPRecord* x33245 = &(((struct AGGRecord_Q7GRPRecord*) { x33249->array })[x33243]);
        g_tree_insert(x49957, x33245, x33245);
      };
    };
    while(1) {
      
      int x3541 = x49958;
      int x762 = !(x3541);
      /* VAR */ int ite41541 = 0;
      if(x762) {
        int x50786 = g_tree_nnodes(x49957);
        ite41541 = (x50786!=(0));
      } else {
        
        ite41541 = 0;
      };
      int x38458 = ite41541;
      if (!(x38458)) break; 
      
      void* x22883 = NULL;
      void** x22891 = &(x22883);
      g_tree_foreach(x49957, x22890, x22891);
      struct AGGRecord_Q7GRPRecord* x22893 = (struct AGGRecord_Q7GRPRecord*){x22883};
      int x22894 = g_tree_remove(x49957, x22893);
      if(0) {
        x49958 = 1;
      } else {
        
        struct Q7GRPRecord* x775 = x22893->key;
        double x782 = ((double*) { x22893->aggs })[0];
        printf("%s|%s|%d|%.4f\n", (x775->SUPP_NATION), (x775->CUST_NATION), (x775->L_YEAR), x782);
        int x3563 = x49959;
        x49959 = (x3563+(1));
      };
    };
    int x50816 = x49959;
    printf("(%d rows)\n", x50816);
    struct timeval* x50818 = &x49868;
    gettimeofday(x50818, NULL);
    struct timeval* x50820 = &x49864;
    struct timeval* x50821 = &x49868;
    struct timeval* x50822 = &x49866;
    long x50823 = timeval_subtract(x50820, x50821, x50822);
    printf("Generated code run in %ld milliseconds.\n", x50823);
  };
}
/* ----------- FUNCTIONS ----------- */
int x49915(struct AGGRecord_Q7GRPRecord* x344, struct AGGRecord_Q7GRPRecord* x345) {
  struct Q7GRPRecord* x346 = x344->key;
  struct Q7GRPRecord* x347 = x345->key;
  int x30302 = strcmp((x346->SUPP_NATION), (x347->SUPP_NATION));
  /* VAR */ int ite37722 = 0;
  if((x30302!=(0))) {
    ite37722 = x30302;
  } else {
    
    int x37726 = strcmp((x346->CUST_NATION), (x347->CUST_NATION));
    /* VAR */ int ite37729 = 0;
    if((x37726!=(0))) {
      ite37729 = x37726;
    } else {
      
      int x37731 = x346->L_YEAR;
      int x37732 = x347->L_YEAR;
      /* VAR */ int ite37735 = 0;
      if((x37731<(x37732))) {
        ite37735 = -1;
      } else {
        
        /* VAR */ int ite37739 = 0;
        if((x37731>(x37732))) {
          ite37739 = 1;
        } else {
          
          ite37739 = 0;
        };
        int x37738 = ite37739;
        ite37735 = x37738;
      };
      int x37734 = ite37735;
      ite37729 = x37734;
    };
    int x37728 = ite37729;
    ite37722 = x37728;
  };
  int x363 = ite37722;
  return x363; 
}

int x22890(void* x22884, void* x22885, void* x22886) {
  pointer_assign(((struct AGGRecord_Q7GRPRecord**){x22886}), ((struct AGGRecord_Q7GRPRecord*){x22885}));
  return 1; 
}
