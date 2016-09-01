#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct NATIONRecord_NATIONRecord;
  struct LINEITEMRecord;
  struct NATIONRecord_NATIONRecord_SUPPLIERRecord;
  struct AGGRecord_Q7GRPRecord;
  struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord;
  struct NATIONRecord;
  struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord;
  struct ORDERSRecord;
  struct Q7GRPRecord;
  struct SUPPLIERRecord;
  struct CUSTOMERRecord;
  
  struct NATIONRecord_NATIONRecord {
  int N1_N_NATIONKEY;
  char* N1_N_NAME;
  int N1_N_REGIONKEY;
  char* N1_N_COMMENT;
  int N2_N_NATIONKEY;
  char* N2_N_NAME;
  int N2_N_REGIONKEY;
  char* N2_N_COMMENT;
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
  
  struct NATIONRecord_NATIONRecord_SUPPLIERRecord {
  int N1_N_NATIONKEY;
  char* N1_N_NAME;
  int N1_N_REGIONKEY;
  char* N1_N_COMMENT;
  int N2_N_NATIONKEY;
  char* N2_N_NAME;
  int N2_N_REGIONKEY;
  char* N2_N_COMMENT;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  };
  
  struct AGGRecord_Q7GRPRecord {
  struct Q7GRPRecord* key;
  double* aggs;
  };
  
  struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord {
  int N1_N_NATIONKEY;
  char* N1_N_NAME;
  int N1_N_REGIONKEY;
  char* N1_N_COMMENT;
  int N2_N_NATIONKEY;
  char* N2_N_NAME;
  int N2_N_REGIONKEY;
  char* N2_N_COMMENT;
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
  
  struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord {
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
  int N1_N_NATIONKEY;
  char* N1_N_NAME;
  int N1_N_REGIONKEY;
  char* N1_N_COMMENT;
  int N2_N_NATIONKEY;
  char* N2_N_NAME;
  int N2_N_REGIONKEY;
  char* N2_N_COMMENT;
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
  
  struct Q7GRPRecord {
  char* SUPP_NATION;
  char* CUST_NATION;
  int L_YEAR;
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
  
  struct CUSTOMERRecord {
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
  };
  
  


int x47033(struct Q7GRPRecord* x13567);

int x47072(struct Q7GRPRecord* x13572, struct Q7GRPRecord* x13573);

int x47099(void* x11360);

int x47102(void* x11363, void* x11364);

int x47109(void* x11370);

int x47112(void* x11373, void* x11374);

int x47119(void* x11380);

int x47122(void* x11383, void* x11384);

int x47129(void* x11390);

int x47132(void* x11393, void* x11394);

int x47195(struct AGGRecord_Q7GRPRecord* x344, struct AGGRecord_Q7GRPRecord* x345);

int x14350(void* x14344, void* x14345, void* x14346);
/* GLOBAL VARS */

struct timeval x5872;
int main(int argc, char** argv) {
  FILE* x6730 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x6731 = 0;
  int x6732 = x6731;
  int* x6733 = &x6732;
  int x6734 = fscanf(x6730, "%d", x6733);
  pclose(x6730);
  struct NATIONRecord** x8726 = (struct NATIONRecord**)malloc(x6732 * sizeof(struct NATIONRecord*));
  memset(x8726, 0, x6732 * sizeof(struct NATIONRecord*));
  int x6738 = O_RDONLY;
  int x6739 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x6738);
  struct stat x6740 = (struct stat){0};
  /* VAR */ struct stat x6741 = x6740;
  struct stat x6742 = x6741;
  struct stat* x6743 = &x6742;
  int x6744 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x6743);
  size_t x6745 = x6743->st_size;
  int x6746 = PROT_READ;
  int x6747 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x6745, x6746, x6747, x6739, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x6732);
    /* VAR */ int ite36969 = 0;
    if(x6) {
      char x45315 = *x3;
      int x45316 = x45315!=('\0');
      ite36969 = x45316;
    } else {
      
      ite36969 = 0;
    };
    int x34512 = ite36969;
    if (!(x34512)) break; 
    
    /* VAR */ int x6755 = 0;
    int x6756 = x6755;
    int* x6757 = &x6756;
    char* x6758 = strntoi_unchecked(x3, x6757);
    x3 = x6758;
    char* x8750 = (char*)malloc(26 * sizeof(char));
    memset(x8750, 0, 26 * sizeof(char));
    /* VAR */ char* x6761 = x3;
    while(1) {
      
      char x6762 = *x3;
      int x6763 = x6762!=('|');
      /* VAR */ int ite36988 = 0;
      if(x6763) {
        char x45333 = *x3;
        int x45334 = x45333!=('\n');
        ite36988 = x45334;
      } else {
        
        ite36988 = 0;
      };
      int x34524 = ite36988;
      if (!(x34524)) break; 
      
      x3 += 1;
    };
    char* x6769 = x6761;
    int x6770 = x3 - x6769;
    char* x6771 = x6761;
    char* x6772 = strncpy(x8750, x6771, x6770);
    x3 += 1;
    /* VAR */ int x6779 = 0;
    int x6780 = x6779;
    int* x6781 = &x6780;
    char* x6782 = strntoi_unchecked(x3, x6781);
    x3 = x6782;
    char* x8773 = (char*)malloc(153 * sizeof(char));
    memset(x8773, 0, 153 * sizeof(char));
    /* VAR */ char* x6785 = x3;
    while(1) {
      
      char x6786 = *x3;
      int x6787 = x6786!=('|');
      /* VAR */ int ite37016 = 0;
      if(x6787) {
        char x45360 = *x3;
        int x45361 = x45360!=('\n');
        ite37016 = x45361;
      } else {
        
        ite37016 = 0;
      };
      int x34545 = ite37016;
      if (!(x34545)) break; 
      
      x3 += 1;
    };
    char* x6793 = x6785;
    int x6794 = x3 - x6793;
    char* x6795 = x6785;
    char* x6796 = strncpy(x8773, x6795, x6794);
    x3 += 1;
    struct NATIONRecord* x9769 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x9769, 0, 1 * sizeof(struct NATIONRecord));
    x9769->N_NATIONKEY = x6756; x9769->N_NAME = x8750; x9769->N_REGIONKEY = x6780; x9769->N_COMMENT = x8773;
    int x28 = x4;
    *(x8726 + x28) = x9769;
    int x30 = x4;
    int x31 = x30+(1);
    x4 = x31;
  };
  FILE* x6809 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x6810 = 0;
  int x6811 = x6810;
  int* x6812 = &x6811;
  int x6813 = fscanf(x6809, "%d", x6812);
  pclose(x6809);
  struct ORDERSRecord** x8803 = (struct ORDERSRecord**)malloc(x6811 * sizeof(struct ORDERSRecord*));
  memset(x8803, 0, x6811 * sizeof(struct ORDERSRecord*));
  int x6817 = O_RDONLY;
  int x6818 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x6817);
  /* VAR */ struct stat x6819 = x6740;
  struct stat x6820 = x6819;
  struct stat* x6821 = &x6820;
  int x6822 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x6821);
  size_t x6823 = x6821->st_size;
  int x6824 = PROT_READ;
  int x6825 = MAP_PRIVATE;
  char* x36 = mmap(NULL, x6823, x6824, x6825, x6818, 0);
  /* VAR */ int x37 = 0;
  while(1) {
    
    int x38 = x37;
    int x39 = x38<(x6811);
    /* VAR */ int ite37063 = 0;
    if(x39) {
      char x45406 = *x36;
      int x45407 = x45406!=('\0');
      ite37063 = x45407;
    } else {
      
      ite37063 = 0;
    };
    int x34585 = ite37063;
    if (!(x34585)) break; 
    
    /* VAR */ int x6833 = 0;
    int x6834 = x6833;
    int* x6835 = &x6834;
    char* x6836 = strntoi_unchecked(x36, x6835);
    x36 = x6836;
    /* VAR */ int x6838 = 0;
    int x6839 = x6838;
    int* x6840 = &x6839;
    char* x6841 = strntoi_unchecked(x36, x6840);
    x36 = x6841;
    char x6843 = *x36;
    /* VAR */ char x6844 = x6843;
    x36 += 1;
    x36 += 1;
    char x6847 = x6844;
    /* VAR */ double x6848 = 0.0;
    double x6849 = x6848;
    double* x6850 = &x6849;
    char* x6851 = strntod_unchecked(x36, x6850);
    x36 = x6851;
    /* VAR */ int x6853 = 0;
    int x6854 = x6853;
    int* x6855 = &x6854;
    char* x6856 = strntoi_unchecked(x36, x6855);
    x36 = x6856;
    /* VAR */ int x6858 = 0;
    int x6859 = x6858;
    int* x6860 = &x6859;
    char* x6861 = strntoi_unchecked(x36, x6860);
    x36 = x6861;
    /* VAR */ int x6863 = 0;
    int x6864 = x6863;
    int* x6865 = &x6864;
    char* x6866 = strntoi_unchecked(x36, x6865);
    x36 = x6866;
    int x6868 = x6854*(10000);
    int x6869 = x6859*(100);
    int x6870 = x6868+(x6869);
    int x6871 = x6870+(x6864);
    char* x8860 = (char*)malloc(16 * sizeof(char));
    memset(x8860, 0, 16 * sizeof(char));
    /* VAR */ char* x6873 = x36;
    while(1) {
      
      char x6874 = *x36;
      int x6875 = x6874!=('|');
      /* VAR */ int ite37116 = 0;
      if(x6875) {
        char x45458 = *x36;
        int x45459 = x45458!=('\n');
        ite37116 = x45459;
      } else {
        
        ite37116 = 0;
      };
      int x34631 = ite37116;
      if (!(x34631)) break; 
      
      x36 += 1;
    };
    char* x6881 = x6873;
    int x6882 = x36 - x6881;
    char* x6883 = x6873;
    char* x6884 = strncpy(x8860, x6883, x6882);
    x36 += 1;
    char* x8878 = (char*)malloc(16 * sizeof(char));
    memset(x8878, 0, 16 * sizeof(char));
    /* VAR */ char* x6892 = x36;
    while(1) {
      
      char x6893 = *x36;
      int x6894 = x6893!=('|');
      /* VAR */ int ite37139 = 0;
      if(x6894) {
        char x45480 = *x36;
        int x45481 = x45480!=('\n');
        ite37139 = x45481;
      } else {
        
        ite37139 = 0;
      };
      int x34647 = ite37139;
      if (!(x34647)) break; 
      
      x36 += 1;
    };
    char* x6900 = x6892;
    int x6901 = x36 - x6900;
    char* x6902 = x6892;
    char* x6903 = strncpy(x8878, x6902, x6901);
    x36 += 1;
    /* VAR */ int x6910 = 0;
    int x6911 = x6910;
    int* x6912 = &x6911;
    char* x6913 = strntoi_unchecked(x36, x6912);
    x36 = x6913;
    char* x8901 = (char*)malloc(80 * sizeof(char));
    memset(x8901, 0, 80 * sizeof(char));
    /* VAR */ char* x6916 = x36;
    while(1) {
      
      char x6917 = *x36;
      int x6918 = x6917!=('|');
      /* VAR */ int ite37167 = 0;
      if(x6918) {
        char x45507 = *x36;
        int x45508 = x45507!=('\n');
        ite37167 = x45508;
      } else {
        
        ite37167 = 0;
      };
      int x34668 = ite37167;
      if (!(x34668)) break; 
      
      x36 += 1;
    };
    char* x6924 = x6916;
    int x6925 = x36 - x6924;
    char* x6926 = x6916;
    char* x6927 = strncpy(x8901, x6926, x6925);
    x36 += 1;
    struct ORDERSRecord* x9899 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x9899, 0, 1 * sizeof(struct ORDERSRecord));
    x9899->O_ORDERKEY = x6834; x9899->O_CUSTKEY = x6839; x9899->O_ORDERSTATUS = x6847; x9899->O_TOTALPRICE = x6849; x9899->O_ORDERDATE = x6871; x9899->O_ORDERPRIORITY = x8860; x9899->O_CLERK = x8878; x9899->O_SHIPPRIORITY = x6911; x9899->O_COMMENT = x8901;
    int x72 = x37;
    *(x8803 + x72) = x9899;
    int x74 = x37;
    int x75 = x74+(1);
    x37 = x75;
  };
  FILE* x6940 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x6941 = 0;
  int x6942 = x6941;
  int* x6943 = &x6942;
  int x6944 = fscanf(x6940, "%d", x6943);
  pclose(x6940);
  struct LINEITEMRecord** x8931 = (struct LINEITEMRecord**)malloc(x6942 * sizeof(struct LINEITEMRecord*));
  memset(x8931, 0, x6942 * sizeof(struct LINEITEMRecord*));
  int x6948 = O_RDONLY;
  int x6949 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x6948);
  /* VAR */ struct stat x6950 = x6740;
  struct stat x6951 = x6950;
  struct stat* x6952 = &x6951;
  int x6953 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x6952);
  size_t x6954 = x6952->st_size;
  int x6955 = PROT_READ;
  int x6956 = MAP_PRIVATE;
  char* x80 = mmap(NULL, x6954, x6955, x6956, x6949, 0);
  /* VAR */ int x81 = 0;
  while(1) {
    
    int x82 = x81;
    int x83 = x82<(x6942);
    /* VAR */ int ite37214 = 0;
    if(x83) {
      char x45553 = *x80;
      int x45554 = x45553!=('\0');
      ite37214 = x45554;
    } else {
      
      ite37214 = 0;
    };
    int x34708 = ite37214;
    if (!(x34708)) break; 
    
    /* VAR */ int x6964 = 0;
    int x6965 = x6964;
    int* x6966 = &x6965;
    char* x6967 = strntoi_unchecked(x80, x6966);
    x80 = x6967;
    /* VAR */ int x6969 = 0;
    int x6970 = x6969;
    int* x6971 = &x6970;
    char* x6972 = strntoi_unchecked(x80, x6971);
    x80 = x6972;
    /* VAR */ int x6974 = 0;
    int x6975 = x6974;
    int* x6976 = &x6975;
    char* x6977 = strntoi_unchecked(x80, x6976);
    x80 = x6977;
    /* VAR */ int x6979 = 0;
    int x6980 = x6979;
    int* x6981 = &x6980;
    char* x6982 = strntoi_unchecked(x80, x6981);
    x80 = x6982;
    /* VAR */ double x6984 = 0.0;
    double x6985 = x6984;
    double* x6986 = &x6985;
    char* x6987 = strntod_unchecked(x80, x6986);
    x80 = x6987;
    /* VAR */ double x6989 = 0.0;
    double x6990 = x6989;
    double* x6991 = &x6990;
    char* x6992 = strntod_unchecked(x80, x6991);
    x80 = x6992;
    /* VAR */ double x6994 = 0.0;
    double x6995 = x6994;
    double* x6996 = &x6995;
    char* x6997 = strntod_unchecked(x80, x6996);
    x80 = x6997;
    /* VAR */ double x6999 = 0.0;
    double x7000 = x6999;
    double* x7001 = &x7000;
    char* x7002 = strntod_unchecked(x80, x7001);
    x80 = x7002;
    char x7004 = *x80;
    /* VAR */ char x7005 = x7004;
    x80 += 1;
    x80 += 1;
    char x7008 = x7005;
    char x7009 = *x80;
    /* VAR */ char x7010 = x7009;
    x80 += 1;
    x80 += 1;
    char x7013 = x7010;
    /* VAR */ int x7014 = 0;
    int x7015 = x7014;
    int* x7016 = &x7015;
    char* x7017 = strntoi_unchecked(x80, x7016);
    x80 = x7017;
    /* VAR */ int x7019 = 0;
    int x7020 = x7019;
    int* x7021 = &x7020;
    char* x7022 = strntoi_unchecked(x80, x7021);
    x80 = x7022;
    /* VAR */ int x7024 = 0;
    int x7025 = x7024;
    int* x7026 = &x7025;
    char* x7027 = strntoi_unchecked(x80, x7026);
    x80 = x7027;
    int x7029 = x7015*(10000);
    int x7030 = x7020*(100);
    int x7031 = x7029+(x7030);
    int x7032 = x7031+(x7025);
    /* VAR */ int x7033 = 0;
    int x7034 = x7033;
    int* x7035 = &x7034;
    char* x7036 = strntoi_unchecked(x80, x7035);
    x80 = x7036;
    /* VAR */ int x7038 = 0;
    int x7039 = x7038;
    int* x7040 = &x7039;
    char* x7041 = strntoi_unchecked(x80, x7040);
    x80 = x7041;
    /* VAR */ int x7043 = 0;
    int x7044 = x7043;
    int* x7045 = &x7044;
    char* x7046 = strntoi_unchecked(x80, x7045);
    x80 = x7046;
    int x7048 = x7034*(10000);
    int x7049 = x7039*(100);
    int x7050 = x7048+(x7049);
    int x7051 = x7050+(x7044);
    /* VAR */ int x7052 = 0;
    int x7053 = x7052;
    int* x7054 = &x7053;
    char* x7055 = strntoi_unchecked(x80, x7054);
    x80 = x7055;
    /* VAR */ int x7057 = 0;
    int x7058 = x7057;
    int* x7059 = &x7058;
    char* x7060 = strntoi_unchecked(x80, x7059);
    x80 = x7060;
    /* VAR */ int x7062 = 0;
    int x7063 = x7062;
    int* x7064 = &x7063;
    char* x7065 = strntoi_unchecked(x80, x7064);
    x80 = x7065;
    int x7067 = x7053*(10000);
    int x7068 = x7058*(100);
    int x7069 = x7067+(x7068);
    int x7070 = x7069+(x7063);
    char* x9056 = (char*)malloc(26 * sizeof(char));
    memset(x9056, 0, 26 * sizeof(char));
    /* VAR */ char* x7072 = x80;
    while(1) {
      
      char x7073 = *x80;
      int x7074 = x7073!=('|');
      /* VAR */ int ite37335 = 0;
      if(x7074) {
        char x45673 = *x80;
        int x45674 = x45673!=('\n');
        ite37335 = x45674;
      } else {
        
        ite37335 = 0;
      };
      int x34822 = ite37335;
      if (!(x34822)) break; 
      
      x80 += 1;
    };
    char* x7080 = x7072;
    int x7081 = x80 - x7080;
    char* x7082 = x7072;
    char* x7083 = strncpy(x9056, x7082, x7081);
    x80 += 1;
    char* x9074 = (char*)malloc(11 * sizeof(char));
    memset(x9074, 0, 11 * sizeof(char));
    /* VAR */ char* x7091 = x80;
    while(1) {
      
      char x7092 = *x80;
      int x7093 = x7092!=('|');
      /* VAR */ int ite37358 = 0;
      if(x7093) {
        char x45695 = *x80;
        int x45696 = x45695!=('\n');
        ite37358 = x45696;
      } else {
        
        ite37358 = 0;
      };
      int x34838 = ite37358;
      if (!(x34838)) break; 
      
      x80 += 1;
    };
    char* x7099 = x7091;
    int x7100 = x80 - x7099;
    char* x7101 = x7091;
    char* x7102 = strncpy(x9074, x7101, x7100);
    x80 += 1;
    char* x9092 = (char*)malloc(45 * sizeof(char));
    memset(x9092, 0, 45 * sizeof(char));
    /* VAR */ char* x7110 = x80;
    while(1) {
      
      char x7111 = *x80;
      int x7112 = x7111!=('|');
      /* VAR */ int ite37381 = 0;
      if(x7112) {
        char x45717 = *x80;
        int x45718 = x45717!=('\n');
        ite37381 = x45718;
      } else {
        
        ite37381 = 0;
      };
      int x34854 = ite37381;
      if (!(x34854)) break; 
      
      x80 += 1;
    };
    char* x7118 = x7110;
    int x7119 = x80 - x7118;
    char* x7120 = x7110;
    char* x7121 = strncpy(x9092, x7120, x7119);
    x80 += 1;
    struct LINEITEMRecord* x10092 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x10092, 0, 1 * sizeof(struct LINEITEMRecord));
    x10092->L_ORDERKEY = x6965; x10092->L_PARTKEY = x6970; x10092->L_SUPPKEY = x6975; x10092->L_LINENUMBER = x6980; x10092->L_QUANTITY = x6985; x10092->L_EXTENDEDPRICE = x6990; x10092->L_DISCOUNT = x6995; x10092->L_TAX = x7000; x10092->L_RETURNFLAG = x7008; x10092->L_LINESTATUS = x7013; x10092->L_SHIPDATE = x7032; x10092->L_COMMITDATE = x7051; x10092->L_RECEIPTDATE = x7070; x10092->L_SHIPINSTRUCT = x9056; x10092->L_SHIPMODE = x9074; x10092->L_COMMENT = x9092;
    int x124 = x81;
    *(x8931 + x124) = x10092;
    int x126 = x81;
    int x127 = x126+(1);
    x81 = x127;
  };
  FILE* x7134 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x7135 = 0;
  int x7136 = x7135;
  int* x7137 = &x7136;
  int x7138 = fscanf(x7134, "%d", x7137);
  pclose(x7134);
  struct CUSTOMERRecord** x9122 = (struct CUSTOMERRecord**)malloc(x7136 * sizeof(struct CUSTOMERRecord*));
  memset(x9122, 0, x7136 * sizeof(struct CUSTOMERRecord*));
  int x7142 = O_RDONLY;
  int x7143 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x7142);
  /* VAR */ struct stat x7144 = x6740;
  struct stat x7145 = x7144;
  struct stat* x7146 = &x7145;
  int x7147 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x7146);
  size_t x7148 = x7146->st_size;
  int x7149 = PROT_READ;
  int x7150 = MAP_PRIVATE;
  char* x132 = mmap(NULL, x7148, x7149, x7150, x7143, 0);
  /* VAR */ int x133 = 0;
  while(1) {
    
    int x134 = x133;
    int x135 = x134<(x7136);
    /* VAR */ int ite37428 = 0;
    if(x135) {
      char x45763 = *x132;
      int x45764 = x45763!=('\0');
      ite37428 = x45764;
    } else {
      
      ite37428 = 0;
    };
    int x34894 = ite37428;
    if (!(x34894)) break; 
    
    /* VAR */ int x7158 = 0;
    int x7159 = x7158;
    int* x7160 = &x7159;
    char* x7161 = strntoi_unchecked(x132, x7160);
    x132 = x7161;
    char* x9145 = (char*)malloc(26 * sizeof(char));
    memset(x9145, 0, 26 * sizeof(char));
    /* VAR */ char* x7164 = x132;
    while(1) {
      
      char x7165 = *x132;
      int x7166 = x7165!=('|');
      /* VAR */ int ite37447 = 0;
      if(x7166) {
        char x45781 = *x132;
        int x45782 = x45781!=('\n');
        ite37447 = x45782;
      } else {
        
        ite37447 = 0;
      };
      int x34906 = ite37447;
      if (!(x34906)) break; 
      
      x132 += 1;
    };
    char* x7172 = x7164;
    int x7173 = x132 - x7172;
    char* x7174 = x7164;
    char* x7175 = strncpy(x9145, x7174, x7173);
    x132 += 1;
    char* x9163 = (char*)malloc(41 * sizeof(char));
    memset(x9163, 0, 41 * sizeof(char));
    /* VAR */ char* x7183 = x132;
    while(1) {
      
      char x7184 = *x132;
      int x7185 = x7184!=('|');
      /* VAR */ int ite37470 = 0;
      if(x7185) {
        char x45803 = *x132;
        int x45804 = x45803!=('\n');
        ite37470 = x45804;
      } else {
        
        ite37470 = 0;
      };
      int x34922 = ite37470;
      if (!(x34922)) break; 
      
      x132 += 1;
    };
    char* x7191 = x7183;
    int x7192 = x132 - x7191;
    char* x7193 = x7183;
    char* x7194 = strncpy(x9163, x7193, x7192);
    x132 += 1;
    /* VAR */ int x7201 = 0;
    int x7202 = x7201;
    int* x7203 = &x7202;
    char* x7204 = strntoi_unchecked(x132, x7203);
    x132 = x7204;
    char* x9186 = (char*)malloc(16 * sizeof(char));
    memset(x9186, 0, 16 * sizeof(char));
    /* VAR */ char* x7207 = x132;
    while(1) {
      
      char x7208 = *x132;
      int x7209 = x7208!=('|');
      /* VAR */ int ite37498 = 0;
      if(x7209) {
        char x45830 = *x132;
        int x45831 = x45830!=('\n');
        ite37498 = x45831;
      } else {
        
        ite37498 = 0;
      };
      int x34943 = ite37498;
      if (!(x34943)) break; 
      
      x132 += 1;
    };
    char* x7215 = x7207;
    int x7216 = x132 - x7215;
    char* x7217 = x7207;
    char* x7218 = strncpy(x9186, x7217, x7216);
    x132 += 1;
    /* VAR */ double x7225 = 0.0;
    double x7226 = x7225;
    double* x7227 = &x7226;
    char* x7228 = strntod_unchecked(x132, x7227);
    x132 = x7228;
    char* x9209 = (char*)malloc(11 * sizeof(char));
    memset(x9209, 0, 11 * sizeof(char));
    /* VAR */ char* x7231 = x132;
    while(1) {
      
      char x7232 = *x132;
      int x7233 = x7232!=('|');
      /* VAR */ int ite37526 = 0;
      if(x7233) {
        char x45857 = *x132;
        int x45858 = x45857!=('\n');
        ite37526 = x45858;
      } else {
        
        ite37526 = 0;
      };
      int x34964 = ite37526;
      if (!(x34964)) break; 
      
      x132 += 1;
    };
    char* x7239 = x7231;
    int x7240 = x132 - x7239;
    char* x7241 = x7231;
    char* x7242 = strncpy(x9209, x7241, x7240);
    x132 += 1;
    char* x9227 = (char*)malloc(118 * sizeof(char));
    memset(x9227, 0, 118 * sizeof(char));
    /* VAR */ char* x7250 = x132;
    while(1) {
      
      char x7251 = *x132;
      int x7252 = x7251!=('|');
      /* VAR */ int ite37549 = 0;
      if(x7252) {
        char x45879 = *x132;
        int x45880 = x45879!=('\n');
        ite37549 = x45880;
      } else {
        
        ite37549 = 0;
      };
      int x34980 = ite37549;
      if (!(x34980)) break; 
      
      x132 += 1;
    };
    char* x7258 = x7250;
    int x7259 = x132 - x7258;
    char* x7260 = x7250;
    char* x7261 = strncpy(x9227, x7260, x7259);
    x132 += 1;
    struct CUSTOMERRecord* x10229 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x10229, 0, 1 * sizeof(struct CUSTOMERRecord));
    x10229->C_CUSTKEY = x7159; x10229->C_NAME = x9145; x10229->C_ADDRESS = x9163; x10229->C_NATIONKEY = x7202; x10229->C_PHONE = x9186; x10229->C_ACCTBAL = x7226; x10229->C_MKTSEGMENT = x9209; x10229->C_COMMENT = x9227;
    int x182 = x133;
    *(x9122 + x182) = x10229;
    int x184 = x133;
    int x185 = x184+(1);
    x133 = x185;
  };
  FILE* x7274 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x7275 = 0;
  int x7276 = x7275;
  int* x7277 = &x7276;
  int x7278 = fscanf(x7274, "%d", x7277);
  pclose(x7274);
  struct SUPPLIERRecord** x9257 = (struct SUPPLIERRecord**)malloc(x7276 * sizeof(struct SUPPLIERRecord*));
  memset(x9257, 0, x7276 * sizeof(struct SUPPLIERRecord*));
  int x7282 = O_RDONLY;
  int x7283 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x7282);
  /* VAR */ struct stat x7284 = x6740;
  struct stat x7285 = x7284;
  struct stat* x7286 = &x7285;
  int x7287 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x7286);
  size_t x7288 = x7286->st_size;
  int x7289 = PROT_READ;
  int x7290 = MAP_PRIVATE;
  char* x190 = mmap(NULL, x7288, x7289, x7290, x7283, 0);
  /* VAR */ int x191 = 0;
  while(1) {
    
    int x192 = x191;
    int x193 = x192<(x7276);
    /* VAR */ int ite37596 = 0;
    if(x193) {
      char x45925 = *x190;
      int x45926 = x45925!=('\0');
      ite37596 = x45926;
    } else {
      
      ite37596 = 0;
    };
    int x35020 = ite37596;
    if (!(x35020)) break; 
    
    /* VAR */ int x7298 = 0;
    int x7299 = x7298;
    int* x7300 = &x7299;
    char* x7301 = strntoi_unchecked(x190, x7300);
    x190 = x7301;
    char* x9280 = (char*)malloc(26 * sizeof(char));
    memset(x9280, 0, 26 * sizeof(char));
    /* VAR */ char* x7304 = x190;
    while(1) {
      
      char x7305 = *x190;
      int x7306 = x7305!=('|');
      /* VAR */ int ite37615 = 0;
      if(x7306) {
        char x45943 = *x190;
        int x45944 = x45943!=('\n');
        ite37615 = x45944;
      } else {
        
        ite37615 = 0;
      };
      int x35032 = ite37615;
      if (!(x35032)) break; 
      
      x190 += 1;
    };
    char* x7312 = x7304;
    int x7313 = x190 - x7312;
    char* x7314 = x7304;
    char* x7315 = strncpy(x9280, x7314, x7313);
    x190 += 1;
    char* x9298 = (char*)malloc(41 * sizeof(char));
    memset(x9298, 0, 41 * sizeof(char));
    /* VAR */ char* x7323 = x190;
    while(1) {
      
      char x7324 = *x190;
      int x7325 = x7324!=('|');
      /* VAR */ int ite37638 = 0;
      if(x7325) {
        char x45965 = *x190;
        int x45966 = x45965!=('\n');
        ite37638 = x45966;
      } else {
        
        ite37638 = 0;
      };
      int x35048 = ite37638;
      if (!(x35048)) break; 
      
      x190 += 1;
    };
    char* x7331 = x7323;
    int x7332 = x190 - x7331;
    char* x7333 = x7323;
    char* x7334 = strncpy(x9298, x7333, x7332);
    x190 += 1;
    /* VAR */ int x7341 = 0;
    int x7342 = x7341;
    int* x7343 = &x7342;
    char* x7344 = strntoi_unchecked(x190, x7343);
    x190 = x7344;
    char* x9321 = (char*)malloc(16 * sizeof(char));
    memset(x9321, 0, 16 * sizeof(char));
    /* VAR */ char* x7347 = x190;
    while(1) {
      
      char x7348 = *x190;
      int x7349 = x7348!=('|');
      /* VAR */ int ite37666 = 0;
      if(x7349) {
        char x45992 = *x190;
        int x45993 = x45992!=('\n');
        ite37666 = x45993;
      } else {
        
        ite37666 = 0;
      };
      int x35069 = ite37666;
      if (!(x35069)) break; 
      
      x190 += 1;
    };
    char* x7355 = x7347;
    int x7356 = x190 - x7355;
    char* x7357 = x7347;
    char* x7358 = strncpy(x9321, x7357, x7356);
    x190 += 1;
    /* VAR */ double x7365 = 0.0;
    double x7366 = x7365;
    double* x7367 = &x7366;
    char* x7368 = strntod_unchecked(x190, x7367);
    x190 = x7368;
    char* x9344 = (char*)malloc(102 * sizeof(char));
    memset(x9344, 0, 102 * sizeof(char));
    /* VAR */ char* x7371 = x190;
    while(1) {
      
      char x7372 = *x190;
      int x7373 = x7372!=('|');
      /* VAR */ int ite37694 = 0;
      if(x7373) {
        char x46019 = *x190;
        int x46020 = x46019!=('\n');
        ite37694 = x46020;
      } else {
        
        ite37694 = 0;
      };
      int x35090 = ite37694;
      if (!(x35090)) break; 
      
      x190 += 1;
    };
    char* x7379 = x7371;
    int x7380 = x190 - x7379;
    char* x7381 = x7371;
    char* x7382 = strncpy(x9344, x7381, x7380);
    x190 += 1;
    struct SUPPLIERRecord* x10348 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x10348, 0, 1 * sizeof(struct SUPPLIERRecord));
    x10348->S_SUPPKEY = x7299; x10348->S_NAME = x9280; x10348->S_ADDRESS = x9298; x10348->S_NATIONKEY = x7342; x10348->S_PHONE = x9321; x10348->S_ACCTBAL = x7366; x10348->S_COMMENT = x9344;
    int x232 = x191;
    *(x9257 + x232) = x10348;
    int x234 = x191;
    int x235 = x234+(1);
    x191 = x235;
  };
  int x239 = 0;
  for(; x239 < 1 ; x239 += 1) {
    
    GHashTable* x47098 = g_hash_table_new(x47033, x47072);
    void*** x47106 = (void***){x47099};
    int* x47107 = (int*){x47102};
    GHashTable* x47108 = g_hash_table_new(x47106, x47107);
    void*** x47116 = (void***){x47109};
    int* x47117 = (int*){x47112};
    GHashTable* x47118 = g_hash_table_new(x47116, x47117);
    void*** x47126 = (void***){x47119};
    int* x47127 = (int*){x47122};
    GHashTable* x47128 = g_hash_table_new(x47126, x47127);
    void*** x47136 = (void***){x47129};
    int* x47137 = (int*){x47132};
    GHashTable* x47138 = g_hash_table_new(x47136, x47137);
    /* VAR */ struct timeval x47139 = x5872;
    struct timeval x47140 = x47139;
    /* VAR */ struct timeval x47141 = x5872;
    struct timeval x47142 = x47141;
    /* VAR */ struct timeval x47143 = x5872;
    struct timeval x47144 = x47143;
    struct timeval* x47145 = &x47142;
    gettimeofday(x47145, NULL);
    /* VAR */ int x47147 = 0;
    /* VAR */ int x47148 = 0;
    /* VAR */ struct NATIONRecord* x47149 = NULL;
    /* VAR */ int x47150 = 0;
    /* VAR */ int x47151 = 0;
    /* VAR */ int x47152 = 0;
    /* VAR */ int x47153 = 0;
    int* x47236 = &(x47195);
    GTree* x47237 = g_tree_new(x47236);
    /* VAR */ int x47238 = 0;
    /* VAR */ int x47239 = 0;
    while(1) {
      
      int x47241 = x47153;
      int x47242 = x47241<(x7136);
      if (!(x47242)) break; 
      
      int x3628 = x47153;
      struct CUSTOMERRecord* x384 = x9122[x3628];
      int x386 = x384->C_CUSTKEY;
      void* x11447 = (void*){x386};
      void* x11448 = (void*){x384};
      void* x11449 = g_hash_table_lookup(x47108, x11447);
      GList** x11450 = (GList**){x11449};
      GList** x11451 = NULL;
      int x11452 = x11450==(x11451);
      /* VAR */ GList** ite36240 = 0;
      if(x11452) {
        GList** x36241 = malloc(8);
        GList* x36242 = NULL;
        pointer_assign(x36241, x36242);
        ite36240 = x36241;
      } else {
        
        ite36240 = x11450;
      };
      GList** x11456 = ite36240;
      GList* x11457 = *(x11456);
      GList* x11458 = g_list_prepend(x11457, x11448);
      pointer_assign(x11456, x11458);
      void* x11460 = (void*){x11456};
      g_hash_table_insert(x47108, x11447, x11460);
      int x3633 = x47153;
      int x390 = x3633+(1);
      x47153 = x390;
    };
    while(1) {
      
      int x47270 = x47147;
      int x47271 = x47270<(x6732);
      if (!(x47271)) break; 
      
      int x3642 = x47147;
      struct NATIONRecord* x399 = x8726[x3642];
      x47149 = x399;
      while(1) {
        
        int x47276 = x47148;
        int x47277 = x47276<(x6732);
        if (!(x47277)) break; 
        
        int x3652 = x47148;
        struct NATIONRecord* x408 = x8726[x3652];
        struct NATIONRecord* x3655 = x47149;
        char* x411 = x3655->N_NAME;
        int x28495 = strcmp(x411, "UNITED STATES");
        int x28496 = x28495==(0);
        /* VAR */ int ite38977 = 0;
        if(x28496) {
          char* x47286 = x408->N_NAME;
          int x47287 = strcmp(x47286, "INDONESIA");
          int x47288 = x47287==(0);
          ite38977 = x47288;
        } else {
          
          ite38977 = 0;
        };
        int x36270 = ite38977;
        /* VAR */ int ite38987 = 0;
        if(x36270) {
          ite38987 = 1;
        } else {
          
          int x47296 = strcmp(x411, "INDONESIA");
          int x47297 = x47296==(0);
          /* VAR */ int x47298 = 0;
          if(x47297) {
            char* x47300 = x408->N_NAME;
            int x47301 = strcmp(x47300, "UNITED STATES");
            int x47302 = x47301==(0);
            x47298 = x47302;
          } else {
            
            x47298 = 0;
          };
          int x47306 = x47298;
          ite38987 = x47306;
        };
        int x36272 = ite38987;
        if(x36272) {
          struct NATIONRecord* x3667 = x47149;
          int x1276 = x3667->N_NATIONKEY;
          char* x1277 = x3667->N_NAME;
          int x1278 = x3667->N_REGIONKEY;
          char* x1279 = x3667->N_COMMENT;
          int x1280 = x408->N_NATIONKEY;
          char* x1281 = x408->N_NAME;
          int x1282 = x408->N_REGIONKEY;
          char* x1283 = x408->N_COMMENT;
          struct NATIONRecord_NATIONRecord* x10449 = (struct NATIONRecord_NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord_NATIONRecord));
          memset(x10449, 0, 1 * sizeof(struct NATIONRecord_NATIONRecord));
          x10449->N1_N_NATIONKEY = x1276; x10449->N1_N_NAME = x1277; x10449->N1_N_REGIONKEY = x1278; x10449->N1_N_COMMENT = x1279; x10449->N2_N_NATIONKEY = x1280; x10449->N2_N_NAME = x1281; x10449->N2_N_REGIONKEY = x1282; x10449->N2_N_COMMENT = x1283;
          int x423 = x10449->N1_N_NATIONKEY;
          void* x11503 = (void*){x423};
          void* x11504 = (void*){x10449};
          void* x11505 = g_hash_table_lookup(x47138, x11503);
          GList** x11506 = (GList**){x11505};
          GList** x11507 = NULL;
          int x11508 = x11506==(x11507);
          /* VAR */ GList** ite36294 = 0;
          if(x11508) {
            GList** x36295 = malloc(8);
            GList* x36296 = NULL;
            pointer_assign(x36295, x36296);
            ite36294 = x36295;
          } else {
            
            ite36294 = x11506;
          };
          GList** x11512 = ite36294;
          GList* x11513 = *(x11512);
          GList* x11514 = g_list_prepend(x11513, x11504);
          pointer_assign(x11512, x11514);
          void* x11516 = (void*){x11512};
          g_hash_table_insert(x47138, x11503, x11516);
        };
        int x3679 = x47148;
        int x428 = x3679+(1);
        x47148 = x428;
      };
      x47148 = 0;
      int x3683 = x47147;
      int x433 = x3683+(1);
      x47147 = x433;
    };
    while(1) {
      
      int x47352 = x47150;
      int x47353 = x47352<(x7276);
      if (!(x47353)) break; 
      
      int x3692 = x47150;
      struct SUPPLIERRecord* x442 = x9257[x3692];
      int x444 = x442->S_NATIONKEY;
      void* x11532 = (void*){x444};
      void* x11533 = g_hash_table_lookup(x47138, x11532);
      GList** x11534 = (GList**){x11533};
      int x21119 = x11534!=(NULL);
      if(x21119) {
        GList* x13815 = *(x11534);
        /* VAR */ GList* x13816 = x13815;
        while(1) {
          
          GList* x13817 = x13816;
          GList* x13818 = NULL;
          int x13819 = x13817!=(x13818);
          if (!(x13819)) break; 
          
          GList* x13820 = x13816;
          void* x13821 = g_list_nth_data(x13820, 0);
          struct NATIONRecord_NATIONRecord* x13822 = (struct NATIONRecord_NATIONRecord*){x13821};
          GList* x13823 = x13816;
          GList* x13824 = g_list_next(x13823);
          x13816 = x13824;
          int x13826 = x13822->N1_N_NATIONKEY;
          int x13827 = x13826==(x444);
          if(x13827) {
            char* x1340 = x13822->N1_N_NAME;
            int x1341 = x13822->N1_N_REGIONKEY;
            char* x1342 = x13822->N1_N_COMMENT;
            int x1343 = x13822->N2_N_NATIONKEY;
            char* x1344 = x13822->N2_N_NAME;
            int x1345 = x13822->N2_N_REGIONKEY;
            char* x1346 = x13822->N2_N_COMMENT;
            int x1347 = x442->S_SUPPKEY;
            char* x1348 = x442->S_NAME;
            char* x1349 = x442->S_ADDRESS;
            char* x1350 = x442->S_PHONE;
            double x1351 = x442->S_ACCTBAL;
            char* x1352 = x442->S_COMMENT;
            struct NATIONRecord_NATIONRecord_SUPPLIERRecord* x10490 = (struct NATIONRecord_NATIONRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_NATIONRecord_SUPPLIERRecord));
            memset(x10490, 0, 1 * sizeof(struct NATIONRecord_NATIONRecord_SUPPLIERRecord));
            x10490->N1_N_NATIONKEY = x13826; x10490->N1_N_NAME = x1340; x10490->N1_N_REGIONKEY = x1341; x10490->N1_N_COMMENT = x1342; x10490->N2_N_NATIONKEY = x1343; x10490->N2_N_NAME = x1344; x10490->N2_N_REGIONKEY = x1345; x10490->N2_N_COMMENT = x1346; x10490->S_SUPPKEY = x1347; x10490->S_NAME = x1348; x10490->S_ADDRESS = x1349; x10490->S_NATIONKEY = x444; x10490->S_PHONE = x1350; x10490->S_ACCTBAL = x1351; x10490->S_COMMENT = x1352;
            int x465 = x10490->S_SUPPKEY;
            void* x11561 = (void*){x465};
            void* x11562 = (void*){x10490};
            void* x11563 = g_hash_table_lookup(x47128, x11561);
            GList** x11564 = (GList**){x11563};
            GList** x11565 = NULL;
            int x11566 = x11564==(x11565);
            /* VAR */ GList** ite36405 = 0;
            if(x11566) {
              GList** x36406 = malloc(8);
              GList* x36407 = NULL;
              pointer_assign(x36406, x36407);
              ite36405 = x36406;
            } else {
              
              ite36405 = x11564;
            };
            GList** x11570 = ite36405;
            GList* x11571 = *(x11570);
            GList* x11572 = g_list_prepend(x11571, x11562);
            pointer_assign(x11570, x11572);
            void* x11574 = (void*){x11570};
            g_hash_table_insert(x47128, x11561, x11574);
          };
        };
      };
      int x3746 = x47150;
      int x473 = x3746+(1);
      x47150 = x473;
    };
    while(1) {
      
      int x47460 = x47151;
      int x47461 = x47460<(x6942);
      if (!(x47461)) break; 
      
      int x3756 = x47151;
      struct LINEITEMRecord* x483 = x8931[x3756];
      int x485 = x483->L_SHIPDATE;
      int x487 = x485>=(19950101);
      /* VAR */ int ite39156 = 0;
      if(x487) {
        int x47468 = x485<=(19961231);
        ite39156 = x47468;
      } else {
        
        ite39156 = 0;
      };
      int x36428 = ite39156;
      if(x36428) {
        int x491 = x483->L_SUPPKEY;
        void* x11592 = (void*){x491};
        void* x11593 = g_hash_table_lookup(x47128, x11592);
        GList** x11594 = (GList**){x11593};
        int x21223 = x11594!=(NULL);
        if(x21223) {
          GList* x13936 = *(x11594);
          /* VAR */ GList* x13937 = x13936;
          while(1) {
            
            GList* x13938 = x13937;
            GList* x13939 = NULL;
            int x13940 = x13938!=(x13939);
            if (!(x13940)) break; 
            
            GList* x13941 = x13937;
            void* x13942 = g_list_nth_data(x13941, 0);
            struct NATIONRecord_NATIONRecord_SUPPLIERRecord* x13943 = (struct NATIONRecord_NATIONRecord_SUPPLIERRecord*){x13942};
            GList* x13944 = x13937;
            GList* x13945 = g_list_next(x13944);
            x13937 = x13945;
            int x13947 = x13943->S_SUPPKEY;
            int x13948 = x13947==(x491);
            if(x13948) {
              int x1429 = x13943->N1_N_NATIONKEY;
              char* x1430 = x13943->N1_N_NAME;
              int x1431 = x13943->N1_N_REGIONKEY;
              char* x1432 = x13943->N1_N_COMMENT;
              int x1433 = x13943->N2_N_NATIONKEY;
              char* x1434 = x13943->N2_N_NAME;
              int x1435 = x13943->N2_N_REGIONKEY;
              char* x1436 = x13943->N2_N_COMMENT;
              char* x1437 = x13943->S_NAME;
              char* x1438 = x13943->S_ADDRESS;
              int x1439 = x13943->S_NATIONKEY;
              char* x1440 = x13943->S_PHONE;
              double x1441 = x13943->S_ACCTBAL;
              char* x1442 = x13943->S_COMMENT;
              int x1443 = x483->L_ORDERKEY;
              int x1444 = x483->L_PARTKEY;
              int x1445 = x483->L_LINENUMBER;
              double x1446 = x483->L_QUANTITY;
              double x1447 = x483->L_EXTENDEDPRICE;
              double x1448 = x483->L_DISCOUNT;
              double x1449 = x483->L_TAX;
              char x1450 = x483->L_RETURNFLAG;
              char x1451 = x483->L_LINESTATUS;
              int x1452 = x483->L_COMMITDATE;
              int x1453 = x483->L_RECEIPTDATE;
              char* x1454 = x483->L_SHIPINSTRUCT;
              char* x1455 = x483->L_SHIPMODE;
              char* x1456 = x483->L_COMMENT;
              struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x10548 = (struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord*)malloc(1 * sizeof(struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
              memset(x10548, 0, 1 * sizeof(struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
              x10548->N1_N_NATIONKEY = x1429; x10548->N1_N_NAME = x1430; x10548->N1_N_REGIONKEY = x1431; x10548->N1_N_COMMENT = x1432; x10548->N2_N_NATIONKEY = x1433; x10548->N2_N_NAME = x1434; x10548->N2_N_REGIONKEY = x1435; x10548->N2_N_COMMENT = x1436; x10548->S_SUPPKEY = x13947; x10548->S_NAME = x1437; x10548->S_ADDRESS = x1438; x10548->S_NATIONKEY = x1439; x10548->S_PHONE = x1440; x10548->S_ACCTBAL = x1441; x10548->S_COMMENT = x1442; x10548->L_ORDERKEY = x1443; x10548->L_PARTKEY = x1444; x10548->L_SUPPKEY = x491; x10548->L_LINENUMBER = x1445; x10548->L_QUANTITY = x1446; x10548->L_EXTENDEDPRICE = x1447; x10548->L_DISCOUNT = x1448; x10548->L_TAX = x1449; x10548->L_RETURNFLAG = x1450; x10548->L_LINESTATUS = x1451; x10548->L_SHIPDATE = x485; x10548->L_COMMITDATE = x1452; x10548->L_RECEIPTDATE = x1453; x10548->L_SHIPINSTRUCT = x1454; x10548->L_SHIPMODE = x1455; x10548->L_COMMENT = x1456;
              int x512 = x10548->L_ORDERKEY;
              void* x11636 = (void*){x512};
              void* x11637 = (void*){x10548};
              void* x11638 = g_hash_table_lookup(x47118, x11636);
              GList** x11639 = (GList**){x11638};
              GList** x11640 = NULL;
              int x11641 = x11639==(x11640);
              /* VAR */ GList** ite36547 = 0;
              if(x11641) {
                GList** x36548 = malloc(8);
                GList* x36549 = NULL;
                pointer_assign(x36548, x36549);
                ite36547 = x36548;
              } else {
                
                ite36547 = x11639;
              };
              GList** x11645 = ite36547;
              GList* x11646 = *(x11645);
              GList* x11647 = g_list_prepend(x11646, x11637);
              pointer_assign(x11645, x11647);
              void* x11649 = (void*){x11645};
              g_hash_table_insert(x47118, x11636, x11649);
            };
          };
        };
      };
      int x3847 = x47151;
      int x521 = x3847+(1);
      x47151 = x521;
    };
    while(1) {
      
      int x47608 = x47152;
      int x47609 = x47608<(x6811);
      if (!(x47609)) break; 
      
      int x3856 = x47152;
      struct ORDERSRecord* x530 = x8803[x3856];
      int x532 = x530->O_ORDERKEY;
      void* x11662 = (void*){x532};
      void* x11663 = g_hash_table_lookup(x47118, x11662);
      GList** x11664 = (GList**){x11663};
      int x21352 = x11664!=(NULL);
      if(x21352) {
        GList* x14161 = *(x11664);
        /* VAR */ GList* x14162 = x14161;
        while(1) {
          
          GList* x14163 = x14162;
          GList* x14164 = NULL;
          int x14165 = x14163!=(x14164);
          if (!(x14165)) break; 
          
          GList* x14166 = x14162;
          void* x14167 = g_list_nth_data(x14166, 0);
          struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x14168 = (struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord*){x14167};
          GList* x14169 = x14162;
          GList* x14170 = g_list_next(x14169);
          x14162 = x14170;
          int x14172 = x14168->L_ORDERKEY;
          int x14173 = x14172==(x532);
          if(x14173) {
            int x1722 = x14168->N1_N_NATIONKEY;
            char* x1723 = x14168->N1_N_NAME;
            int x1724 = x14168->N1_N_REGIONKEY;
            char* x1725 = x14168->N1_N_COMMENT;
            int x1726 = x14168->N2_N_NATIONKEY;
            char* x1727 = x14168->N2_N_NAME;
            int x1728 = x14168->N2_N_REGIONKEY;
            char* x1729 = x14168->N2_N_COMMENT;
            int x1730 = x14168->S_SUPPKEY;
            char* x1731 = x14168->S_NAME;
            char* x1732 = x14168->S_ADDRESS;
            int x1733 = x14168->S_NATIONKEY;
            char* x1734 = x14168->S_PHONE;
            double x1735 = x14168->S_ACCTBAL;
            char* x1736 = x14168->S_COMMENT;
            int x1737 = x14168->L_PARTKEY;
            int x1738 = x14168->L_SUPPKEY;
            int x1739 = x14168->L_LINENUMBER;
            double x1740 = x14168->L_QUANTITY;
            double x1741 = x14168->L_EXTENDEDPRICE;
            double x1742 = x14168->L_DISCOUNT;
            double x1743 = x14168->L_TAX;
            char x1744 = x14168->L_RETURNFLAG;
            char x1745 = x14168->L_LINESTATUS;
            int x1746 = x14168->L_SHIPDATE;
            int x1747 = x14168->L_COMMITDATE;
            int x1748 = x14168->L_RECEIPTDATE;
            char* x1749 = x14168->L_SHIPINSTRUCT;
            char* x1750 = x14168->L_SHIPMODE;
            char* x1751 = x14168->L_COMMENT;
            int x1752 = x530->O_CUSTKEY;
            char x1753 = x530->O_ORDERSTATUS;
            double x1754 = x530->O_TOTALPRICE;
            int x1755 = x530->O_ORDERDATE;
            char* x1756 = x530->O_ORDERPRIORITY;
            char* x1757 = x530->O_CLERK;
            int x1758 = x530->O_SHIPPRIORITY;
            char* x1759 = x530->O_COMMENT;
            void* x11712 = (void*){x1752};
            void* x11713 = g_hash_table_lookup(x47108, x11712);
            GList** x11714 = (GList**){x11713};
            int x21550 = x11714!=(NULL);
            if(x21550) {
              GList* x14110 = *(x11714);
              /* VAR */ GList* x14111 = x14110;
              while(1) {
                
                GList* x14112 = x14111;
                GList* x14113 = NULL;
                int x14114 = x14112!=(x14113);
                if (!(x14114)) break; 
                
                GList* x14115 = x14111;
                void* x14116 = g_list_nth_data(x14115, 0);
                struct CUSTOMERRecord* x14117 = (struct CUSTOMERRecord*){x14116};
                GList* x14118 = x14111;
                GList* x14119 = g_list_next(x14118);
                x14111 = x14119;
                int x14121 = x14117->C_CUSTKEY;
                int x14122 = x14121==(x1752);
                /* VAR */ int ite39596 = 0;
                if(x14122) {
                  int x47903 = x14117->C_NATIONKEY;
                  int x47904 = x47903==(x1726);
                  ite39596 = x47904;
                } else {
                  
                  ite39596 = 0;
                };
                int x36839 = ite39596;
                if(x36839) {
                  char* x1869 = x14117->C_NAME;
                  char* x1870 = x14117->C_ADDRESS;
                  int x1871 = x14117->C_NATIONKEY;
                  char* x1872 = x14117->C_PHONE;
                  double x1873 = x14117->C_ACCTBAL;
                  char* x1874 = x14117->C_MKTSEGMENT;
                  char* x1875 = x14117->C_COMMENT;
                  struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord* x10630 = (struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord*)malloc(1 * sizeof(struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord));
                  memset(x10630, 0, 1 * sizeof(struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord));
                  x10630->C_CUSTKEY = x14121; x10630->C_NAME = x1869; x10630->C_ADDRESS = x1870; x10630->C_NATIONKEY = x1871; x10630->C_PHONE = x1872; x10630->C_ACCTBAL = x1873; x10630->C_MKTSEGMENT = x1874; x10630->C_COMMENT = x1875; x10630->N1_N_NATIONKEY = x1722; x10630->N1_N_NAME = x1723; x10630->N1_N_REGIONKEY = x1724; x10630->N1_N_COMMENT = x1725; x10630->N2_N_NATIONKEY = x1726; x10630->N2_N_NAME = x1727; x10630->N2_N_REGIONKEY = x1728; x10630->N2_N_COMMENT = x1729; x10630->S_SUPPKEY = x1730; x10630->S_NAME = x1731; x10630->S_ADDRESS = x1732; x10630->S_NATIONKEY = x1733; x10630->S_PHONE = x1734; x10630->S_ACCTBAL = x1735; x10630->S_COMMENT = x1736; x10630->L_ORDERKEY = x14172; x10630->L_PARTKEY = x1737; x10630->L_SUPPKEY = x1738; x10630->L_LINENUMBER = x1739; x10630->L_QUANTITY = x1740; x10630->L_EXTENDEDPRICE = x1741; x10630->L_DISCOUNT = x1742; x10630->L_TAX = x1743; x10630->L_RETURNFLAG = x1744; x10630->L_LINESTATUS = x1745; x10630->L_SHIPDATE = x1746; x10630->L_COMMITDATE = x1747; x10630->L_RECEIPTDATE = x1748; x10630->L_SHIPINSTRUCT = x1749; x10630->L_SHIPMODE = x1750; x10630->L_COMMENT = x1751; x10630->O_ORDERKEY = x532; x10630->O_CUSTKEY = x1752; x10630->O_ORDERSTATUS = x1753; x10630->O_TOTALPRICE = x1754; x10630->O_ORDERDATE = x1755; x10630->O_ORDERPRIORITY = x1756; x10630->O_CLERK = x1757; x10630->O_SHIPPRIORITY = x1758; x10630->O_COMMENT = x1759;
                  char* x708 = x10630->N1_N_NAME;
                  char* x709 = x10630->N2_N_NAME;
                  int x710 = x10630->L_SHIPDATE;
                  int x6366 = x710/(10000);
                  struct Q7GRPRecord* x10637 = (struct Q7GRPRecord*)malloc(1 * sizeof(struct Q7GRPRecord));
                  memset(x10637, 0, 1 * sizeof(struct Q7GRPRecord));
                  x10637->SUPP_NATION = x708; x10637->CUST_NATION = x709; x10637->L_YEAR = x6366;
                  void* x14144 = g_hash_table_lookup(x47098, x10637);
                  int x14091 = x14144==(NULL);
                  /* VAR */ struct AGGRecord_Q7GRPRecord* ite36861 = 0;
                  if(x14091) {
                    double* x36862 = (double*)malloc(1 * sizeof(double));
                    memset(x36862, 0, 1 * sizeof(double));
                    struct AGGRecord_Q7GRPRecord* x36863 = (struct AGGRecord_Q7GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q7GRPRecord));
                    memset(x36863, 0, 1 * sizeof(struct AGGRecord_Q7GRPRecord));
                    x36863->key = x10637; x36863->aggs = x36862;
                    g_hash_table_insert(x47098, x10637, x36863);
                    ite36861 = x36863;
                  } else {
                    
                    ite36861 = x14144;
                  };
                  struct AGGRecord_Q7GRPRecord* x14101 = ite36861;
                  double* x717 = x14101->aggs;
                  double x731 = x717[0];
                  double x732 = x10630->L_EXTENDEDPRICE;
                  double x733 = x10630->L_DISCOUNT;
                  double x734 = 1.0-(x733);
                  double x735 = x732*(x734);
                  double x736 = x731+(x735);
                  *x717 = x736;
                };
              };
            };
          };
        };
      };
      int x4168 = x47152;
      int x751 = x4168+(1);
      x47152 = x751;
    };
    GList* x47955 = g_hash_table_get_keys(x47098);
    /* VAR */ GList* x47956 = x47955;
    int x47957 = g_hash_table_size(x47098);
    int x32083 = 0;
    for(; x32083 < x47957 ; x32083 += 1) {
      
      GList* x32084 = x47956;
      void* x32085 = g_list_nth_data(x32084, 0);
      GList* x32086 = g_list_next(x32084);
      x47956 = x32086;
      void* x32088 = g_hash_table_lookup(x47098, x32085);
      struct AGGRecord_Q7GRPRecord* x32090 = (struct AGGRecord_Q7GRPRecord*){x32088};
      g_tree_insert(x47237, x32090, x32090);
    };
    while(1) {
      
      int x4177 = x47238;
      int x762 = !(x4177);
      /* VAR */ int ite39676 = 0;
      if(x762) {
        int x47982 = g_tree_nnodes(x47237);
        int x47983 = x47982!=(0);
        ite39676 = x47983;
      } else {
        
        ite39676 = 0;
      };
      int x36912 = ite39676;
      if (!(x36912)) break; 
      
      void* x14343 = NULL;
      void** x14351 = &(x14343);
      g_tree_foreach(x47237, x14350, x14351);
      struct AGGRecord_Q7GRPRecord* x14353 = (struct AGGRecord_Q7GRPRecord*){x14343};
      int x14354 = g_tree_remove(x47237, x14353);
      if(0) {
        x47238 = 1;
      } else {
        
        struct Q7GRPRecord* x775 = x14353->key;
        char* x776 = x775->SUPP_NATION;
        char* x778 = x775->CUST_NATION;
        int x780 = x775->L_YEAR;
        double* x781 = x14353->aggs;
        double x782 = x781[0];
        printf("%s|%s|%d|%.4f\n", x776, x778, x780, x782);
        int x4199 = x47239;
        int x785 = x4199+(1);
        x47239 = x785;
      };
    };
    int x48012 = x47239;
    printf("(%d rows)\n", x48012);
    struct timeval* x48014 = &x47144;
    gettimeofday(x48014, NULL);
    struct timeval* x48016 = &x47140;
    struct timeval* x48017 = &x47144;
    struct timeval* x48018 = &x47142;
    long x48019 = timeval_subtract(x48016, x48017, x48018);
    printf("Generated code run in %ld milliseconds.\n", x48019);
  };
}
/* ----------- FUNCTIONS ----------- */
int x47033(struct Q7GRPRecord* x13567) {
  char* x23831 = x13567->SUPP_NATION;
  int x28299 = strlen(x23831);
  /* VAR */ int x25307 = 0;
  /* VAR */ int x25308 = 0;
  while(1) {
    
    int x25309 = x25307;
    int x25310 = x25309<(x28299);
    if (!(x25310)) break; 
    
    int x25311 = x25308;
    int x25312 = x25307;
    char* x28307 = pointer_add(x23831, x25312);
    char x28308 = *(x28307);
    int x25315 = x25311+(x28308);
    x25308 = x25315;
    int x25317 = x25307;
    int x25318 = x25317+(1);
    x25307 = x25318;
  };
  int x25321 = x25308;
  char* x23833 = x13567->CUST_NATION;
  int x28317 = strlen(x23833);
  /* VAR */ int x25324 = 0;
  /* VAR */ int x25325 = 0;
  while(1) {
    
    int x25326 = x25324;
    int x25327 = x25326<(x28317);
    if (!(x25327)) break; 
    
    int x25328 = x25325;
    int x25329 = x25324;
    char* x28325 = pointer_add(x23833, x25329);
    char x28326 = *(x28325);
    int x25332 = x25328+(x28326);
    x25325 = x25332;
    int x25334 = x25324;
    int x25335 = x25334+(1);
    x25324 = x25335;
  };
  int x25338 = x25325;
  int x23835 = x13567->L_YEAR;
  int x23837 = x25321+(x25338);
  int x23838 = x23837+(x23835);
  return x23838; 
}

int x47072(struct Q7GRPRecord* x13572, struct Q7GRPRecord* x13573) {
  char* x23842 = x13572->SUPP_NATION;
  char* x23843 = x13573->SUPP_NATION;
  int x25347 = strcmp(x23842, x23843);
  int x25348 = !(x25347);
  char* x23845 = x13572->CUST_NATION;
  char* x23846 = x13573->CUST_NATION;
  int x25351 = strcmp(x23845, x23846);
  int x25352 = !(x25351);
  int x23848 = x13572->L_YEAR;
  int x23849 = x13573->L_YEAR;
  int x23850 = x23848==(x23849);
  /* VAR */ int ite38774 = 0;
  if(x25348) {
    ite38774 = x25352;
  } else {
    
    ite38774 = 0;
  };
  int x36083 = ite38774;
  /* VAR */ int ite38781 = 0;
  if(x36083) {
    ite38781 = x23850;
  } else {
    
    ite38781 = 0;
  };
  int x36085 = ite38781;
  return x36085; 
}

int x47099(void* x11360) {
  int x11361 = g_direct_hash(x11360);
  return x11361; 
}

int x47102(void* x11363, void* x11364) {
  int x11365 = g_direct_equal(x11363, x11364);
  return x11365; 
}

int x47109(void* x11370) {
  int x11371 = g_direct_hash(x11370);
  return x11371; 
}

int x47112(void* x11373, void* x11374) {
  int x11375 = g_direct_equal(x11373, x11374);
  return x11375; 
}

int x47119(void* x11380) {
  int x11381 = g_direct_hash(x11380);
  return x11381; 
}

int x47122(void* x11383, void* x11384) {
  int x11385 = g_direct_equal(x11383, x11384);
  return x11385; 
}

int x47129(void* x11390) {
  int x11391 = g_direct_hash(x11390);
  return x11391; 
}

int x47132(void* x11393, void* x11394) {
  int x11395 = g_direct_equal(x11393, x11394);
  return x11395; 
}

int x47195(struct AGGRecord_Q7GRPRecord* x344, struct AGGRecord_Q7GRPRecord* x345) {
  struct Q7GRPRecord* x346 = x344->key;
  struct Q7GRPRecord* x347 = x345->key;
  char* x348 = x346->SUPP_NATION;
  char* x349 = x347->SUPP_NATION;
  int x28437 = strcmp(x348, x349);
  int x351 = x28437!=(0);
  /* VAR */ int ite36193 = 0;
  if(x351) {
    ite36193 = x28437;
  } else {
    
    char* x36195 = x346->CUST_NATION;
    char* x36196 = x347->CUST_NATION;
    int x36197 = strcmp(x36195, x36196);
    int x36198 = x36197!=(0);
    /* VAR */ int ite36200 = 0;
    if(x36198) {
      ite36200 = x36197;
    } else {
      
      int x36202 = x346->L_YEAR;
      int x36203 = x347->L_YEAR;
      int x36204 = x36202<(x36203);
      /* VAR */ int ite36206 = 0;
      if(x36204) {
        ite36206 = -1;
      } else {
        
        int x36208 = x36202>(x36203);
        /* VAR */ int ite36210 = 0;
        if(x36208) {
          ite36210 = 1;
        } else {
          
          ite36210 = 0;
        };
        int x36209 = ite36210;
        ite36206 = x36209;
      };
      int x36205 = ite36206;
      ite36200 = x36205;
    };
    int x36199 = ite36200;
    ite36193 = x36199;
  };
  int x363 = ite36193;
  return x363; 
}

int x14350(void* x14344, void* x14345, void* x14346) {
  struct AGGRecord_Q7GRPRecord** x14347 = (struct AGGRecord_Q7GRPRecord**){x14346};
  struct AGGRecord_Q7GRPRecord* x14348 = (struct AGGRecord_Q7GRPRecord*){x14345};
  pointer_assign(x14347, x14348);
  return 1; 
}
