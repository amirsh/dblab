#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct REGIONRecord_NATIONRecord;
  struct LINEITEMRecord;
  struct AGGRecord_OptimalString;
  struct REGIONRecord_NATIONRecord_CUSTOMERRecord;
  struct REGIONRecord;
  struct NATIONRecord;
  struct ORDERSRecord;
  struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord;
  struct SUPPLIERRecord;
  struct CUSTOMERRecord;
  struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord;
  
  struct REGIONRecord_NATIONRecord {
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
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
  
  struct REGIONRecord_NATIONRecord_CUSTOMERRecord {
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
  };
  
  struct REGIONRecord {
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
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
  
  struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord {
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
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
  
  struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord {
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
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
  
  


int x43657(char* x13950);

int x43675(char* x13955, char* x13956);

int x43681(void* x11601);

int x43684(void* x11604, void* x11605);

int x43691(void* x11611);

int x43694(void* x11614, void* x11615);

int x43701(void* x11621);

int x43704(void* x11624, void* x11625);

int x43711(void* x11631);

int x43714(void* x11634, void* x11635);

int x43721(void* x11641);

int x43724(void* x11644, void* x11645);

int x43768(struct AGGRecord_OptimalString* x375, struct AGGRecord_OptimalString* x376);

int x14737(void* x14731, void* x14732, void* x14733);
/* GLOBAL VARS */

struct timeval x5879;
int main(int argc, char** argv) {
  FILE* x6714 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x6715 = 0;
  int x6716 = x6715;
  int* x6717 = &x6716;
  int x6718 = fscanf(x6714, "%d", x6717);
  pclose(x6714);
  struct NATIONRecord** x8804 = (struct NATIONRecord**)malloc(x6716 * sizeof(struct NATIONRecord*));
  memset(x8804, 0, x6716 * sizeof(struct NATIONRecord*));
  int x6722 = O_RDONLY;
  int x6723 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x6722);
  struct stat x6724 = (struct stat){0};
  /* VAR */ struct stat x6725 = x6724;
  struct stat x6726 = x6725;
  struct stat* x6727 = &x6726;
  int x6728 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x6727);
  size_t x6729 = x6727->st_size;
  int x6730 = PROT_READ;
  int x6731 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x6729, x6730, x6731, x6723, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x6716);
    /* VAR */ int ite36475 = 0;
    if(x6) {
      char x41924 = *x3;
      int x41925 = x41924!=('\0');
      ite36475 = x41925;
    } else {
      
      ite36475 = 0;
    };
    int x34032 = ite36475;
    if (!(x34032)) break; 
    
    /* VAR */ int x6739 = 0;
    int x6740 = x6739;
    int* x6741 = &x6740;
    char* x6742 = strntoi_unchecked(x3, x6741);
    x3 = x6742;
    char* x8828 = (char*)malloc(26 * sizeof(char));
    memset(x8828, 0, 26 * sizeof(char));
    /* VAR */ char* x6745 = x3;
    while(1) {
      
      char x6746 = *x3;
      int x6747 = x6746!=('|');
      /* VAR */ int ite36494 = 0;
      if(x6747) {
        char x41942 = *x3;
        int x41943 = x41942!=('\n');
        ite36494 = x41943;
      } else {
        
        ite36494 = 0;
      };
      int x34044 = ite36494;
      if (!(x34044)) break; 
      
      x3 += 1;
    };
    char* x6753 = x6745;
    int x6754 = x3 - x6753;
    char* x6755 = x6745;
    char* x6756 = strncpy(x8828, x6755, x6754);
    x3 += 1;
    /* VAR */ int x6763 = 0;
    int x6764 = x6763;
    int* x6765 = &x6764;
    char* x6766 = strntoi_unchecked(x3, x6765);
    x3 = x6766;
    char* x8851 = (char*)malloc(153 * sizeof(char));
    memset(x8851, 0, 153 * sizeof(char));
    /* VAR */ char* x6769 = x3;
    while(1) {
      
      char x6770 = *x3;
      int x6771 = x6770!=('|');
      /* VAR */ int ite36522 = 0;
      if(x6771) {
        char x41969 = *x3;
        int x41970 = x41969!=('\n');
        ite36522 = x41970;
      } else {
        
        ite36522 = 0;
      };
      int x34065 = ite36522;
      if (!(x34065)) break; 
      
      x3 += 1;
    };
    char* x6777 = x6769;
    int x6778 = x3 - x6777;
    char* x6779 = x6769;
    char* x6780 = strncpy(x8851, x6779, x6778);
    x3 += 1;
    struct NATIONRecord* x9892 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x9892, 0, 1 * sizeof(struct NATIONRecord));
    x9892->N_NATIONKEY = x6740; x9892->N_NAME = x8828; x9892->N_REGIONKEY = x6764; x9892->N_COMMENT = x8851;
    int x28 = x4;
    *(x8804 + x28) = x9892;
    int x30 = x4;
    int x31 = x30+(1);
    x4 = x31;
  };
  FILE* x6793 = popen("wc -l /mnt/ramdisk/tpch/sf8/region.tbl", "r");
  /* VAR */ int x6794 = 0;
  int x6795 = x6794;
  int* x6796 = &x6795;
  int x6797 = fscanf(x6793, "%d", x6796);
  pclose(x6793);
  struct REGIONRecord** x8881 = (struct REGIONRecord**)malloc(x6795 * sizeof(struct REGIONRecord*));
  memset(x8881, 0, x6795 * sizeof(struct REGIONRecord*));
  int x6801 = O_RDONLY;
  int x6802 = open("/mnt/ramdisk/tpch/sf8/region.tbl", x6801);
  /* VAR */ struct stat x6803 = x6724;
  struct stat x6804 = x6803;
  struct stat* x6805 = &x6804;
  int x6806 = stat("/mnt/ramdisk/tpch/sf8/region.tbl", x6805);
  size_t x6807 = x6805->st_size;
  int x6808 = PROT_READ;
  int x6809 = MAP_PRIVATE;
  char* x36 = mmap(NULL, x6807, x6808, x6809, x6802, 0);
  /* VAR */ int x37 = 0;
  while(1) {
    
    int x38 = x37;
    int x39 = x38<(x6795);
    /* VAR */ int ite36569 = 0;
    if(x39) {
      char x42015 = *x36;
      int x42016 = x42015!=('\0');
      ite36569 = x42016;
    } else {
      
      ite36569 = 0;
    };
    int x34105 = ite36569;
    if (!(x34105)) break; 
    
    /* VAR */ int x6817 = 0;
    int x6818 = x6817;
    int* x6819 = &x6818;
    char* x6820 = strntoi_unchecked(x36, x6819);
    x36 = x6820;
    char* x8904 = (char*)malloc(26 * sizeof(char));
    memset(x8904, 0, 26 * sizeof(char));
    /* VAR */ char* x6823 = x36;
    while(1) {
      
      char x6824 = *x36;
      int x6825 = x6824!=('|');
      /* VAR */ int ite36588 = 0;
      if(x6825) {
        char x42033 = *x36;
        int x42034 = x42033!=('\n');
        ite36588 = x42034;
      } else {
        
        ite36588 = 0;
      };
      int x34117 = ite36588;
      if (!(x34117)) break; 
      
      x36 += 1;
    };
    char* x6831 = x6823;
    int x6832 = x36 - x6831;
    char* x6833 = x6823;
    char* x6834 = strncpy(x8904, x6833, x6832);
    x36 += 1;
    char* x8922 = (char*)malloc(153 * sizeof(char));
    memset(x8922, 0, 153 * sizeof(char));
    /* VAR */ char* x6842 = x36;
    while(1) {
      
      char x6843 = *x36;
      int x6844 = x6843!=('|');
      /* VAR */ int ite36611 = 0;
      if(x6844) {
        char x42055 = *x36;
        int x42056 = x42055!=('\n');
        ite36611 = x42056;
      } else {
        
        ite36611 = 0;
      };
      int x34133 = ite36611;
      if (!(x34133)) break; 
      
      x36 += 1;
    };
    char* x6850 = x6842;
    int x6851 = x36 - x6850;
    char* x6852 = x6842;
    char* x6853 = strncpy(x8922, x6852, x6851);
    x36 += 1;
    struct REGIONRecord* x9965 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x9965, 0, 1 * sizeof(struct REGIONRecord));
    x9965->R_REGIONKEY = x6818; x9965->R_NAME = x8904; x9965->R_COMMENT = x8922;
    int x60 = x37;
    *(x8881 + x60) = x9965;
    int x62 = x37;
    int x63 = x62+(1);
    x37 = x63;
  };
  FILE* x6866 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x6867 = 0;
  int x6868 = x6867;
  int* x6869 = &x6868;
  int x6870 = fscanf(x6866, "%d", x6869);
  pclose(x6866);
  struct SUPPLIERRecord** x8952 = (struct SUPPLIERRecord**)malloc(x6868 * sizeof(struct SUPPLIERRecord*));
  memset(x8952, 0, x6868 * sizeof(struct SUPPLIERRecord*));
  int x6874 = O_RDONLY;
  int x6875 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x6874);
  /* VAR */ struct stat x6876 = x6724;
  struct stat x6877 = x6876;
  struct stat* x6878 = &x6877;
  int x6879 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x6878);
  size_t x6880 = x6878->st_size;
  int x6881 = PROT_READ;
  int x6882 = MAP_PRIVATE;
  char* x68 = mmap(NULL, x6880, x6881, x6882, x6875, 0);
  /* VAR */ int x69 = 0;
  while(1) {
    
    int x70 = x69;
    int x71 = x70<(x6868);
    /* VAR */ int ite36658 = 0;
    if(x71) {
      char x42101 = *x68;
      int x42102 = x42101!=('\0');
      ite36658 = x42102;
    } else {
      
      ite36658 = 0;
    };
    int x34173 = ite36658;
    if (!(x34173)) break; 
    
    /* VAR */ int x6890 = 0;
    int x6891 = x6890;
    int* x6892 = &x6891;
    char* x6893 = strntoi_unchecked(x68, x6892);
    x68 = x6893;
    char* x8975 = (char*)malloc(26 * sizeof(char));
    memset(x8975, 0, 26 * sizeof(char));
    /* VAR */ char* x6896 = x68;
    while(1) {
      
      char x6897 = *x68;
      int x6898 = x6897!=('|');
      /* VAR */ int ite36677 = 0;
      if(x6898) {
        char x42119 = *x68;
        int x42120 = x42119!=('\n');
        ite36677 = x42120;
      } else {
        
        ite36677 = 0;
      };
      int x34185 = ite36677;
      if (!(x34185)) break; 
      
      x68 += 1;
    };
    char* x6904 = x6896;
    int x6905 = x68 - x6904;
    char* x6906 = x6896;
    char* x6907 = strncpy(x8975, x6906, x6905);
    x68 += 1;
    char* x8993 = (char*)malloc(41 * sizeof(char));
    memset(x8993, 0, 41 * sizeof(char));
    /* VAR */ char* x6915 = x68;
    while(1) {
      
      char x6916 = *x68;
      int x6917 = x6916!=('|');
      /* VAR */ int ite36700 = 0;
      if(x6917) {
        char x42141 = *x68;
        int x42142 = x42141!=('\n');
        ite36700 = x42142;
      } else {
        
        ite36700 = 0;
      };
      int x34201 = ite36700;
      if (!(x34201)) break; 
      
      x68 += 1;
    };
    char* x6923 = x6915;
    int x6924 = x68 - x6923;
    char* x6925 = x6915;
    char* x6926 = strncpy(x8993, x6925, x6924);
    x68 += 1;
    /* VAR */ int x6933 = 0;
    int x6934 = x6933;
    int* x6935 = &x6934;
    char* x6936 = strntoi_unchecked(x68, x6935);
    x68 = x6936;
    char* x9016 = (char*)malloc(16 * sizeof(char));
    memset(x9016, 0, 16 * sizeof(char));
    /* VAR */ char* x6939 = x68;
    while(1) {
      
      char x6940 = *x68;
      int x6941 = x6940!=('|');
      /* VAR */ int ite36728 = 0;
      if(x6941) {
        char x42168 = *x68;
        int x42169 = x42168!=('\n');
        ite36728 = x42169;
      } else {
        
        ite36728 = 0;
      };
      int x34222 = ite36728;
      if (!(x34222)) break; 
      
      x68 += 1;
    };
    char* x6947 = x6939;
    int x6948 = x68 - x6947;
    char* x6949 = x6939;
    char* x6950 = strncpy(x9016, x6949, x6948);
    x68 += 1;
    /* VAR */ double x6957 = 0.0;
    double x6958 = x6957;
    double* x6959 = &x6958;
    char* x6960 = strntod_unchecked(x68, x6959);
    x68 = x6960;
    char* x9039 = (char*)malloc(102 * sizeof(char));
    memset(x9039, 0, 102 * sizeof(char));
    /* VAR */ char* x6963 = x68;
    while(1) {
      
      char x6964 = *x68;
      int x6965 = x6964!=('|');
      /* VAR */ int ite36756 = 0;
      if(x6965) {
        char x42195 = *x68;
        int x42196 = x42195!=('\n');
        ite36756 = x42196;
      } else {
        
        ite36756 = 0;
      };
      int x34243 = ite36756;
      if (!(x34243)) break; 
      
      x68 += 1;
    };
    char* x6971 = x6963;
    int x6972 = x68 - x6971;
    char* x6973 = x6963;
    char* x6974 = strncpy(x9039, x6973, x6972);
    x68 += 1;
    struct SUPPLIERRecord* x10084 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x10084, 0, 1 * sizeof(struct SUPPLIERRecord));
    x10084->S_SUPPKEY = x6891; x10084->S_NAME = x8975; x10084->S_ADDRESS = x8993; x10084->S_NATIONKEY = x6934; x10084->S_PHONE = x9016; x10084->S_ACCTBAL = x6958; x10084->S_COMMENT = x9039;
    int x110 = x69;
    *(x8952 + x110) = x10084;
    int x112 = x69;
    int x113 = x112+(1);
    x69 = x113;
  };
  FILE* x6987 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x6988 = 0;
  int x6989 = x6988;
  int* x6990 = &x6989;
  int x6991 = fscanf(x6987, "%d", x6990);
  pclose(x6987);
  struct LINEITEMRecord** x9069 = (struct LINEITEMRecord**)malloc(x6989 * sizeof(struct LINEITEMRecord*));
  memset(x9069, 0, x6989 * sizeof(struct LINEITEMRecord*));
  int x6995 = O_RDONLY;
  int x6996 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x6995);
  /* VAR */ struct stat x6997 = x6724;
  struct stat x6998 = x6997;
  struct stat* x6999 = &x6998;
  int x7000 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x6999);
  size_t x7001 = x6999->st_size;
  int x7002 = PROT_READ;
  int x7003 = MAP_PRIVATE;
  char* x118 = mmap(NULL, x7001, x7002, x7003, x6996, 0);
  /* VAR */ int x119 = 0;
  while(1) {
    
    int x120 = x119;
    int x121 = x120<(x6989);
    /* VAR */ int ite36803 = 0;
    if(x121) {
      char x42241 = *x118;
      int x42242 = x42241!=('\0');
      ite36803 = x42242;
    } else {
      
      ite36803 = 0;
    };
    int x34283 = ite36803;
    if (!(x34283)) break; 
    
    /* VAR */ int x7011 = 0;
    int x7012 = x7011;
    int* x7013 = &x7012;
    char* x7014 = strntoi_unchecked(x118, x7013);
    x118 = x7014;
    /* VAR */ int x7016 = 0;
    int x7017 = x7016;
    int* x7018 = &x7017;
    char* x7019 = strntoi_unchecked(x118, x7018);
    x118 = x7019;
    /* VAR */ int x7021 = 0;
    int x7022 = x7021;
    int* x7023 = &x7022;
    char* x7024 = strntoi_unchecked(x118, x7023);
    x118 = x7024;
    /* VAR */ int x7026 = 0;
    int x7027 = x7026;
    int* x7028 = &x7027;
    char* x7029 = strntoi_unchecked(x118, x7028);
    x118 = x7029;
    /* VAR */ double x7031 = 0.0;
    double x7032 = x7031;
    double* x7033 = &x7032;
    char* x7034 = strntod_unchecked(x118, x7033);
    x118 = x7034;
    /* VAR */ double x7036 = 0.0;
    double x7037 = x7036;
    double* x7038 = &x7037;
    char* x7039 = strntod_unchecked(x118, x7038);
    x118 = x7039;
    /* VAR */ double x7041 = 0.0;
    double x7042 = x7041;
    double* x7043 = &x7042;
    char* x7044 = strntod_unchecked(x118, x7043);
    x118 = x7044;
    /* VAR */ double x7046 = 0.0;
    double x7047 = x7046;
    double* x7048 = &x7047;
    char* x7049 = strntod_unchecked(x118, x7048);
    x118 = x7049;
    char x7051 = *x118;
    /* VAR */ char x7052 = x7051;
    x118 += 1;
    x118 += 1;
    char x7055 = x7052;
    char x7056 = *x118;
    /* VAR */ char x7057 = x7056;
    x118 += 1;
    x118 += 1;
    char x7060 = x7057;
    /* VAR */ int x7061 = 0;
    int x7062 = x7061;
    int* x7063 = &x7062;
    char* x7064 = strntoi_unchecked(x118, x7063);
    x118 = x7064;
    /* VAR */ int x7066 = 0;
    int x7067 = x7066;
    int* x7068 = &x7067;
    char* x7069 = strntoi_unchecked(x118, x7068);
    x118 = x7069;
    /* VAR */ int x7071 = 0;
    int x7072 = x7071;
    int* x7073 = &x7072;
    char* x7074 = strntoi_unchecked(x118, x7073);
    x118 = x7074;
    int x7076 = x7062*(10000);
    int x7077 = x7067*(100);
    int x7078 = x7076+(x7077);
    int x7079 = x7078+(x7072);
    /* VAR */ int x7080 = 0;
    int x7081 = x7080;
    int* x7082 = &x7081;
    char* x7083 = strntoi_unchecked(x118, x7082);
    x118 = x7083;
    /* VAR */ int x7085 = 0;
    int x7086 = x7085;
    int* x7087 = &x7086;
    char* x7088 = strntoi_unchecked(x118, x7087);
    x118 = x7088;
    /* VAR */ int x7090 = 0;
    int x7091 = x7090;
    int* x7092 = &x7091;
    char* x7093 = strntoi_unchecked(x118, x7092);
    x118 = x7093;
    int x7095 = x7081*(10000);
    int x7096 = x7086*(100);
    int x7097 = x7095+(x7096);
    int x7098 = x7097+(x7091);
    /* VAR */ int x7099 = 0;
    int x7100 = x7099;
    int* x7101 = &x7100;
    char* x7102 = strntoi_unchecked(x118, x7101);
    x118 = x7102;
    /* VAR */ int x7104 = 0;
    int x7105 = x7104;
    int* x7106 = &x7105;
    char* x7107 = strntoi_unchecked(x118, x7106);
    x118 = x7107;
    /* VAR */ int x7109 = 0;
    int x7110 = x7109;
    int* x7111 = &x7110;
    char* x7112 = strntoi_unchecked(x118, x7111);
    x118 = x7112;
    int x7114 = x7100*(10000);
    int x7115 = x7105*(100);
    int x7116 = x7114+(x7115);
    int x7117 = x7116+(x7110);
    char* x9194 = (char*)malloc(26 * sizeof(char));
    memset(x9194, 0, 26 * sizeof(char));
    /* VAR */ char* x7119 = x118;
    while(1) {
      
      char x7120 = *x118;
      int x7121 = x7120!=('|');
      /* VAR */ int ite36924 = 0;
      if(x7121) {
        char x42361 = *x118;
        int x42362 = x42361!=('\n');
        ite36924 = x42362;
      } else {
        
        ite36924 = 0;
      };
      int x34397 = ite36924;
      if (!(x34397)) break; 
      
      x118 += 1;
    };
    char* x7127 = x7119;
    int x7128 = x118 - x7127;
    char* x7129 = x7119;
    char* x7130 = strncpy(x9194, x7129, x7128);
    x118 += 1;
    char* x9212 = (char*)malloc(11 * sizeof(char));
    memset(x9212, 0, 11 * sizeof(char));
    /* VAR */ char* x7138 = x118;
    while(1) {
      
      char x7139 = *x118;
      int x7140 = x7139!=('|');
      /* VAR */ int ite36947 = 0;
      if(x7140) {
        char x42383 = *x118;
        int x42384 = x42383!=('\n');
        ite36947 = x42384;
      } else {
        
        ite36947 = 0;
      };
      int x34413 = ite36947;
      if (!(x34413)) break; 
      
      x118 += 1;
    };
    char* x7146 = x7138;
    int x7147 = x118 - x7146;
    char* x7148 = x7138;
    char* x7149 = strncpy(x9212, x7148, x7147);
    x118 += 1;
    char* x9230 = (char*)malloc(45 * sizeof(char));
    memset(x9230, 0, 45 * sizeof(char));
    /* VAR */ char* x7157 = x118;
    while(1) {
      
      char x7158 = *x118;
      int x7159 = x7158!=('|');
      /* VAR */ int ite36970 = 0;
      if(x7159) {
        char x42405 = *x118;
        int x42406 = x42405!=('\n');
        ite36970 = x42406;
      } else {
        
        ite36970 = 0;
      };
      int x34429 = ite36970;
      if (!(x34429)) break; 
      
      x118 += 1;
    };
    char* x7165 = x7157;
    int x7166 = x118 - x7165;
    char* x7167 = x7157;
    char* x7168 = strncpy(x9230, x7167, x7166);
    x118 += 1;
    struct LINEITEMRecord* x10277 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x10277, 0, 1 * sizeof(struct LINEITEMRecord));
    x10277->L_ORDERKEY = x7012; x10277->L_PARTKEY = x7017; x10277->L_SUPPKEY = x7022; x10277->L_LINENUMBER = x7027; x10277->L_QUANTITY = x7032; x10277->L_EXTENDEDPRICE = x7037; x10277->L_DISCOUNT = x7042; x10277->L_TAX = x7047; x10277->L_RETURNFLAG = x7055; x10277->L_LINESTATUS = x7060; x10277->L_SHIPDATE = x7079; x10277->L_COMMITDATE = x7098; x10277->L_RECEIPTDATE = x7117; x10277->L_SHIPINSTRUCT = x9194; x10277->L_SHIPMODE = x9212; x10277->L_COMMENT = x9230;
    int x162 = x119;
    *(x9069 + x162) = x10277;
    int x164 = x119;
    int x165 = x164+(1);
    x119 = x165;
  };
  FILE* x7181 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x7182 = 0;
  int x7183 = x7182;
  int* x7184 = &x7183;
  int x7185 = fscanf(x7181, "%d", x7184);
  pclose(x7181);
  struct ORDERSRecord** x9260 = (struct ORDERSRecord**)malloc(x7183 * sizeof(struct ORDERSRecord*));
  memset(x9260, 0, x7183 * sizeof(struct ORDERSRecord*));
  int x7189 = O_RDONLY;
  int x7190 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x7189);
  /* VAR */ struct stat x7191 = x6724;
  struct stat x7192 = x7191;
  struct stat* x7193 = &x7192;
  int x7194 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x7193);
  size_t x7195 = x7193->st_size;
  int x7196 = PROT_READ;
  int x7197 = MAP_PRIVATE;
  char* x170 = mmap(NULL, x7195, x7196, x7197, x7190, 0);
  /* VAR */ int x171 = 0;
  while(1) {
    
    int x172 = x171;
    int x173 = x172<(x7183);
    /* VAR */ int ite37017 = 0;
    if(x173) {
      char x42451 = *x170;
      int x42452 = x42451!=('\0');
      ite37017 = x42452;
    } else {
      
      ite37017 = 0;
    };
    int x34469 = ite37017;
    if (!(x34469)) break; 
    
    /* VAR */ int x7205 = 0;
    int x7206 = x7205;
    int* x7207 = &x7206;
    char* x7208 = strntoi_unchecked(x170, x7207);
    x170 = x7208;
    /* VAR */ int x7210 = 0;
    int x7211 = x7210;
    int* x7212 = &x7211;
    char* x7213 = strntoi_unchecked(x170, x7212);
    x170 = x7213;
    char x7215 = *x170;
    /* VAR */ char x7216 = x7215;
    x170 += 1;
    x170 += 1;
    char x7219 = x7216;
    /* VAR */ double x7220 = 0.0;
    double x7221 = x7220;
    double* x7222 = &x7221;
    char* x7223 = strntod_unchecked(x170, x7222);
    x170 = x7223;
    /* VAR */ int x7225 = 0;
    int x7226 = x7225;
    int* x7227 = &x7226;
    char* x7228 = strntoi_unchecked(x170, x7227);
    x170 = x7228;
    /* VAR */ int x7230 = 0;
    int x7231 = x7230;
    int* x7232 = &x7231;
    char* x7233 = strntoi_unchecked(x170, x7232);
    x170 = x7233;
    /* VAR */ int x7235 = 0;
    int x7236 = x7235;
    int* x7237 = &x7236;
    char* x7238 = strntoi_unchecked(x170, x7237);
    x170 = x7238;
    int x7240 = x7226*(10000);
    int x7241 = x7231*(100);
    int x7242 = x7240+(x7241);
    int x7243 = x7242+(x7236);
    char* x9317 = (char*)malloc(16 * sizeof(char));
    memset(x9317, 0, 16 * sizeof(char));
    /* VAR */ char* x7245 = x170;
    while(1) {
      
      char x7246 = *x170;
      int x7247 = x7246!=('|');
      /* VAR */ int ite37070 = 0;
      if(x7247) {
        char x42503 = *x170;
        int x42504 = x42503!=('\n');
        ite37070 = x42504;
      } else {
        
        ite37070 = 0;
      };
      int x34515 = ite37070;
      if (!(x34515)) break; 
      
      x170 += 1;
    };
    char* x7253 = x7245;
    int x7254 = x170 - x7253;
    char* x7255 = x7245;
    char* x7256 = strncpy(x9317, x7255, x7254);
    x170 += 1;
    char* x9335 = (char*)malloc(16 * sizeof(char));
    memset(x9335, 0, 16 * sizeof(char));
    /* VAR */ char* x7264 = x170;
    while(1) {
      
      char x7265 = *x170;
      int x7266 = x7265!=('|');
      /* VAR */ int ite37093 = 0;
      if(x7266) {
        char x42525 = *x170;
        int x42526 = x42525!=('\n');
        ite37093 = x42526;
      } else {
        
        ite37093 = 0;
      };
      int x34531 = ite37093;
      if (!(x34531)) break; 
      
      x170 += 1;
    };
    char* x7272 = x7264;
    int x7273 = x170 - x7272;
    char* x7274 = x7264;
    char* x7275 = strncpy(x9335, x7274, x7273);
    x170 += 1;
    /* VAR */ int x7282 = 0;
    int x7283 = x7282;
    int* x7284 = &x7283;
    char* x7285 = strntoi_unchecked(x170, x7284);
    x170 = x7285;
    char* x9358 = (char*)malloc(80 * sizeof(char));
    memset(x9358, 0, 80 * sizeof(char));
    /* VAR */ char* x7288 = x170;
    while(1) {
      
      char x7289 = *x170;
      int x7290 = x7289!=('|');
      /* VAR */ int ite37121 = 0;
      if(x7290) {
        char x42552 = *x170;
        int x42553 = x42552!=('\n');
        ite37121 = x42553;
      } else {
        
        ite37121 = 0;
      };
      int x34552 = ite37121;
      if (!(x34552)) break; 
      
      x170 += 1;
    };
    char* x7296 = x7288;
    int x7297 = x170 - x7296;
    char* x7298 = x7288;
    char* x7299 = strncpy(x9358, x7298, x7297);
    x170 += 1;
    struct ORDERSRecord* x10407 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x10407, 0, 1 * sizeof(struct ORDERSRecord));
    x10407->O_ORDERKEY = x7206; x10407->O_CUSTKEY = x7211; x10407->O_ORDERSTATUS = x7219; x10407->O_TOTALPRICE = x7221; x10407->O_ORDERDATE = x7243; x10407->O_ORDERPRIORITY = x9317; x10407->O_CLERK = x9335; x10407->O_SHIPPRIORITY = x7283; x10407->O_COMMENT = x9358;
    int x206 = x171;
    *(x9260 + x206) = x10407;
    int x208 = x171;
    int x209 = x208+(1);
    x171 = x209;
  };
  FILE* x7312 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x7313 = 0;
  int x7314 = x7313;
  int* x7315 = &x7314;
  int x7316 = fscanf(x7312, "%d", x7315);
  pclose(x7312);
  struct CUSTOMERRecord** x9388 = (struct CUSTOMERRecord**)malloc(x7314 * sizeof(struct CUSTOMERRecord*));
  memset(x9388, 0, x7314 * sizeof(struct CUSTOMERRecord*));
  int x7320 = O_RDONLY;
  int x7321 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x7320);
  /* VAR */ struct stat x7322 = x6724;
  struct stat x7323 = x7322;
  struct stat* x7324 = &x7323;
  int x7325 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x7324);
  size_t x7326 = x7324->st_size;
  int x7327 = PROT_READ;
  int x7328 = MAP_PRIVATE;
  char* x214 = mmap(NULL, x7326, x7327, x7328, x7321, 0);
  /* VAR */ int x215 = 0;
  while(1) {
    
    int x216 = x215;
    int x217 = x216<(x7314);
    /* VAR */ int ite37168 = 0;
    if(x217) {
      char x42598 = *x214;
      int x42599 = x42598!=('\0');
      ite37168 = x42599;
    } else {
      
      ite37168 = 0;
    };
    int x34592 = ite37168;
    if (!(x34592)) break; 
    
    /* VAR */ int x7336 = 0;
    int x7337 = x7336;
    int* x7338 = &x7337;
    char* x7339 = strntoi_unchecked(x214, x7338);
    x214 = x7339;
    char* x9411 = (char*)malloc(26 * sizeof(char));
    memset(x9411, 0, 26 * sizeof(char));
    /* VAR */ char* x7342 = x214;
    while(1) {
      
      char x7343 = *x214;
      int x7344 = x7343!=('|');
      /* VAR */ int ite37187 = 0;
      if(x7344) {
        char x42616 = *x214;
        int x42617 = x42616!=('\n');
        ite37187 = x42617;
      } else {
        
        ite37187 = 0;
      };
      int x34604 = ite37187;
      if (!(x34604)) break; 
      
      x214 += 1;
    };
    char* x7350 = x7342;
    int x7351 = x214 - x7350;
    char* x7352 = x7342;
    char* x7353 = strncpy(x9411, x7352, x7351);
    x214 += 1;
    char* x9429 = (char*)malloc(41 * sizeof(char));
    memset(x9429, 0, 41 * sizeof(char));
    /* VAR */ char* x7361 = x214;
    while(1) {
      
      char x7362 = *x214;
      int x7363 = x7362!=('|');
      /* VAR */ int ite37210 = 0;
      if(x7363) {
        char x42638 = *x214;
        int x42639 = x42638!=('\n');
        ite37210 = x42639;
      } else {
        
        ite37210 = 0;
      };
      int x34620 = ite37210;
      if (!(x34620)) break; 
      
      x214 += 1;
    };
    char* x7369 = x7361;
    int x7370 = x214 - x7369;
    char* x7371 = x7361;
    char* x7372 = strncpy(x9429, x7371, x7370);
    x214 += 1;
    /* VAR */ int x7379 = 0;
    int x7380 = x7379;
    int* x7381 = &x7380;
    char* x7382 = strntoi_unchecked(x214, x7381);
    x214 = x7382;
    char* x9452 = (char*)malloc(16 * sizeof(char));
    memset(x9452, 0, 16 * sizeof(char));
    /* VAR */ char* x7385 = x214;
    while(1) {
      
      char x7386 = *x214;
      int x7387 = x7386!=('|');
      /* VAR */ int ite37238 = 0;
      if(x7387) {
        char x42665 = *x214;
        int x42666 = x42665!=('\n');
        ite37238 = x42666;
      } else {
        
        ite37238 = 0;
      };
      int x34641 = ite37238;
      if (!(x34641)) break; 
      
      x214 += 1;
    };
    char* x7393 = x7385;
    int x7394 = x214 - x7393;
    char* x7395 = x7385;
    char* x7396 = strncpy(x9452, x7395, x7394);
    x214 += 1;
    /* VAR */ double x7403 = 0.0;
    double x7404 = x7403;
    double* x7405 = &x7404;
    char* x7406 = strntod_unchecked(x214, x7405);
    x214 = x7406;
    char* x9475 = (char*)malloc(11 * sizeof(char));
    memset(x9475, 0, 11 * sizeof(char));
    /* VAR */ char* x7409 = x214;
    while(1) {
      
      char x7410 = *x214;
      int x7411 = x7410!=('|');
      /* VAR */ int ite37266 = 0;
      if(x7411) {
        char x42692 = *x214;
        int x42693 = x42692!=('\n');
        ite37266 = x42693;
      } else {
        
        ite37266 = 0;
      };
      int x34662 = ite37266;
      if (!(x34662)) break; 
      
      x214 += 1;
    };
    char* x7417 = x7409;
    int x7418 = x214 - x7417;
    char* x7419 = x7409;
    char* x7420 = strncpy(x9475, x7419, x7418);
    x214 += 1;
    char* x9493 = (char*)malloc(118 * sizeof(char));
    memset(x9493, 0, 118 * sizeof(char));
    /* VAR */ char* x7428 = x214;
    while(1) {
      
      char x7429 = *x214;
      int x7430 = x7429!=('|');
      /* VAR */ int ite37289 = 0;
      if(x7430) {
        char x42714 = *x214;
        int x42715 = x42714!=('\n');
        ite37289 = x42715;
      } else {
        
        ite37289 = 0;
      };
      int x34678 = ite37289;
      if (!(x34678)) break; 
      
      x214 += 1;
    };
    char* x7436 = x7428;
    int x7437 = x214 - x7436;
    char* x7438 = x7428;
    char* x7439 = strncpy(x9493, x7438, x7437);
    x214 += 1;
    struct CUSTOMERRecord* x10544 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x10544, 0, 1 * sizeof(struct CUSTOMERRecord));
    x10544->C_CUSTKEY = x7337; x10544->C_NAME = x9411; x10544->C_ADDRESS = x9429; x10544->C_NATIONKEY = x7380; x10544->C_PHONE = x9452; x10544->C_ACCTBAL = x7404; x10544->C_MKTSEGMENT = x9475; x10544->C_COMMENT = x9493;
    int x264 = x215;
    *(x9388 + x264) = x10544;
    int x266 = x215;
    int x267 = x266+(1);
    x215 = x267;
  };
  int x271 = 0;
  for(; x271 < 1 ; x271 += 1) {
    
    GHashTable* x43680 = g_hash_table_new(x43657, x43675);
    void*** x43688 = (void***){x43681};
    int* x43689 = (int*){x43684};
    GHashTable* x43690 = g_hash_table_new(x43688, x43689);
    void*** x43698 = (void***){x43691};
    int* x43699 = (int*){x43694};
    GHashTable* x43700 = g_hash_table_new(x43698, x43699);
    void*** x43708 = (void***){x43701};
    int* x43709 = (int*){x43704};
    GHashTable* x43710 = g_hash_table_new(x43708, x43709);
    void*** x43718 = (void***){x43711};
    int* x43719 = (int*){x43714};
    GHashTable* x43720 = g_hash_table_new(x43718, x43719);
    void*** x43728 = (void***){x43721};
    int* x43729 = (int*){x43724};
    GHashTable* x43730 = g_hash_table_new(x43728, x43729);
    /* VAR */ struct timeval x43731 = x5879;
    struct timeval x43732 = x43731;
    /* VAR */ struct timeval x43733 = x5879;
    struct timeval x43734 = x43733;
    /* VAR */ struct timeval x43735 = x5879;
    struct timeval x43736 = x43735;
    struct timeval* x43737 = &x43734;
    gettimeofday(x43737, NULL);
    /* VAR */ int x43739 = 0;
    /* VAR */ int x43740 = 0;
    /* VAR */ int x43741 = 0;
    /* VAR */ int x43742 = 0;
    /* VAR */ int x43743 = 0;
    /* VAR */ int x43744 = 0;
    int* x43791 = &(x43768);
    GTree* x43792 = g_tree_new(x43791);
    /* VAR */ int x43793 = 0;
    /* VAR */ int x43794 = 0;
    while(1) {
      
      int x43796 = x43744;
      int x43797 = x43796<(x6868);
      if (!(x43797)) break; 
      
      int x3651 = x43744;
      struct SUPPLIERRecord* x403 = x8952[x3651];
      int x405 = x403->S_SUPPKEY;
      void* x11689 = (void*){x405};
      void* x11690 = (void*){x403};
      void* x11691 = g_hash_table_lookup(x43690, x11689);
      GList** x11692 = (GList**){x11691};
      GList** x11693 = NULL;
      int x11694 = x11692==(x11693);
      /* VAR */ GList** ite35726 = 0;
      if(x11694) {
        GList** x35727 = malloc(8);
        GList* x35728 = NULL;
        pointer_assign(x35727, x35728);
        ite35726 = x35727;
      } else {
        
        ite35726 = x11692;
      };
      GList** x11698 = ite35726;
      GList* x11699 = *(x11698);
      GList* x11700 = g_list_prepend(x11699, x11690);
      pointer_assign(x11698, x11700);
      void* x11702 = (void*){x11698};
      g_hash_table_insert(x43690, x11689, x11702);
      int x3656 = x43744;
      int x409 = x3656+(1);
      x43744 = x409;
    };
    while(1) {
      
      int x43825 = x43739;
      int x43826 = x43825<(x6795);
      if (!(x43826)) break; 
      
      int x3665 = x43739;
      struct REGIONRecord* x418 = x8881[x3665];
      char* x420 = x418->R_NAME;
      int x27939 = strcmp(x420, "ASIA");
      int x27940 = x27939==(0);
      if(x27940) {
        int x422 = x418->R_REGIONKEY;
        void* x11717 = (void*){x422};
        void* x11718 = (void*){x418};
        void* x11719 = g_hash_table_lookup(x43730, x11717);
        GList** x11720 = (GList**){x11719};
        GList** x11721 = NULL;
        int x11722 = x11720==(x11721);
        /* VAR */ GList** ite35758 = 0;
        if(x11722) {
          GList** x35759 = malloc(8);
          GList* x35760 = NULL;
          pointer_assign(x35759, x35760);
          ite35758 = x35759;
        } else {
          
          ite35758 = x11720;
        };
        GList** x11726 = ite35758;
        GList* x11727 = *(x11726);
        GList* x11728 = g_list_prepend(x11727, x11718);
        pointer_assign(x11726, x11728);
        void* x11730 = (void*){x11726};
        g_hash_table_insert(x43730, x11717, x11730);
      };
      int x3673 = x43739;
      int x427 = x3673+(1);
      x43739 = x427;
    };
    while(1) {
      
      int x43858 = x43740;
      int x43859 = x43858<(x6716);
      if (!(x43859)) break; 
      
      int x3682 = x43740;
      struct NATIONRecord* x436 = x8804[x3682];
      int x438 = x436->N_REGIONKEY;
      void* x11742 = (void*){x438};
      void* x11743 = g_hash_table_lookup(x43730, x11742);
      GList** x11744 = (GList**){x11743};
      int x21828 = x11744!=(NULL);
      if(x21828) {
        GList* x14151 = *(x11744);
        /* VAR */ GList* x14152 = x14151;
        while(1) {
          
          GList* x14153 = x14152;
          GList* x14154 = NULL;
          int x14155 = x14153!=(x14154);
          if (!(x14155)) break; 
          
          GList* x14156 = x14152;
          void* x14157 = g_list_nth_data(x14156, 0);
          struct REGIONRecord* x14158 = (struct REGIONRecord*){x14157};
          GList* x14159 = x14152;
          GList* x14160 = g_list_next(x14159);
          x14152 = x14160;
          int x14162 = x14158->R_REGIONKEY;
          int x14163 = x14162==(x438);
          if(x14163) {
            char* x1330 = x14158->R_NAME;
            char* x1331 = x14158->R_COMMENT;
            int x1332 = x436->N_NATIONKEY;
            char* x1333 = x436->N_NAME;
            char* x1334 = x436->N_COMMENT;
            struct REGIONRecord_NATIONRecord* x10638 = (struct REGIONRecord_NATIONRecord*)malloc(1 * sizeof(struct REGIONRecord_NATIONRecord));
            memset(x10638, 0, 1 * sizeof(struct REGIONRecord_NATIONRecord));
            x10638->R_REGIONKEY = x14162; x10638->R_NAME = x1330; x10638->R_COMMENT = x1331; x10638->N_NATIONKEY = x1332; x10638->N_NAME = x1333; x10638->N_REGIONKEY = x438; x10638->N_COMMENT = x1334;
            int x459 = x10638->N_NATIONKEY;
            void* x11763 = (void*){x459};
            void* x11764 = (void*){x10638};
            void* x11765 = g_hash_table_lookup(x43720, x11763);
            GList** x11766 = (GList**){x11765};
            GList** x11767 = NULL;
            int x11768 = x11766==(x11767);
            /* VAR */ GList** ite35849 = 0;
            if(x11768) {
              GList** x35850 = malloc(8);
              GList* x35851 = NULL;
              pointer_assign(x35850, x35851);
              ite35849 = x35850;
            } else {
              
              ite35849 = x11766;
            };
            GList** x11772 = ite35849;
            GList* x11773 = *(x11772);
            GList* x11774 = g_list_prepend(x11773, x11764);
            pointer_assign(x11772, x11774);
            void* x11776 = (void*){x11772};
            g_hash_table_insert(x43720, x11763, x11776);
          };
        };
      };
      int x3720 = x43740;
      int x467 = x3720+(1);
      x43740 = x467;
    };
    while(1) {
      
      int x43950 = x43743;
      int x43951 = x43950<(x7314);
      if (!(x43951)) break; 
      
      int x3730 = x43743;
      struct CUSTOMERRecord* x477 = x9388[x3730];
      int x479 = x477->C_NATIONKEY;
      void* x11789 = (void*){x479};
      void* x11790 = g_hash_table_lookup(x43720, x11789);
      GList** x11791 = (GList**){x11790};
      int x21911 = x11791!=(NULL);
      if(x21911) {
        GList* x14244 = *(x11791);
        /* VAR */ GList* x14245 = x14244;
        while(1) {
          
          GList* x14246 = x14245;
          GList* x14247 = NULL;
          int x14248 = x14246!=(x14247);
          if (!(x14248)) break; 
          
          GList* x14249 = x14245;
          void* x14250 = g_list_nth_data(x14249, 0);
          struct REGIONRecord_NATIONRecord* x14251 = (struct REGIONRecord_NATIONRecord*){x14250};
          GList* x14252 = x14245;
          GList* x14253 = g_list_next(x14252);
          x14245 = x14253;
          int x14255 = x14251->N_NATIONKEY;
          int x14256 = x14255==(x479);
          if(x14256) {
            int x1389 = x14251->R_REGIONKEY;
            char* x1390 = x14251->R_NAME;
            char* x1391 = x14251->R_COMMENT;
            char* x1392 = x14251->N_NAME;
            int x1393 = x14251->N_REGIONKEY;
            char* x1394 = x14251->N_COMMENT;
            int x1395 = x477->C_CUSTKEY;
            char* x1396 = x477->C_NAME;
            char* x1397 = x477->C_ADDRESS;
            char* x1398 = x477->C_PHONE;
            double x1399 = x477->C_ACCTBAL;
            char* x1400 = x477->C_MKTSEGMENT;
            char* x1401 = x477->C_COMMENT;
            struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x10676 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord*)malloc(1 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord));
            memset(x10676, 0, 1 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord));
            x10676->R_REGIONKEY = x1389; x10676->R_NAME = x1390; x10676->R_COMMENT = x1391; x10676->N_NATIONKEY = x14255; x10676->N_NAME = x1392; x10676->N_REGIONKEY = x1393; x10676->N_COMMENT = x1394; x10676->C_CUSTKEY = x1395; x10676->C_NAME = x1396; x10676->C_ADDRESS = x1397; x10676->C_NATIONKEY = x479; x10676->C_PHONE = x1398; x10676->C_ACCTBAL = x1399; x10676->C_MKTSEGMENT = x1400; x10676->C_COMMENT = x1401;
            int x500 = x10676->C_CUSTKEY;
            void* x11818 = (void*){x500};
            void* x11819 = (void*){x10676};
            void* x11820 = g_hash_table_lookup(x43710, x11818);
            GList** x11821 = (GList**){x11820};
            GList** x11822 = NULL;
            int x11823 = x11821==(x11822);
            /* VAR */ GList** ite35956 = 0;
            if(x11823) {
              GList** x35957 = malloc(8);
              GList* x35958 = NULL;
              pointer_assign(x35957, x35958);
              ite35956 = x35957;
            } else {
              
              ite35956 = x11821;
            };
            GList** x11827 = ite35956;
            GList* x11828 = *(x11827);
            GList* x11829 = g_list_prepend(x11828, x11819);
            pointer_assign(x11827, x11829);
            void* x11831 = (void*){x11827};
            g_hash_table_insert(x43710, x11818, x11831);
          };
        };
      };
      int x3784 = x43743;
      int x508 = x3784+(1);
      x43743 = x508;
    };
    while(1) {
      
      int x44058 = x43742;
      int x44059 = x44058<(x7183);
      if (!(x44059)) break; 
      
      int x3793 = x43742;
      struct ORDERSRecord* x517 = x9260[x3793];
      int x519 = x517->O_ORDERDATE;
      int x520 = x519>=(19960101);
      /* VAR */ int ite38660 = 0;
      if(x520) {
        int x44066 = x519<(19970101);
        ite38660 = x44066;
      } else {
        
        ite38660 = 0;
      };
      int x35979 = ite38660;
      if(x35979) {
        int x523 = x517->O_CUSTKEY;
        void* x11849 = (void*){x523};
        void* x11850 = g_hash_table_lookup(x43710, x11849);
        GList** x11851 = (GList**){x11850};
        int x22015 = x11851!=(NULL);
        if(x22015) {
          GList* x14358 = *(x11851);
          /* VAR */ GList* x14359 = x14358;
          while(1) {
            
            GList* x14360 = x14359;
            GList* x14361 = NULL;
            int x14362 = x14360!=(x14361);
            if (!(x14362)) break; 
            
            GList* x14363 = x14359;
            void* x14364 = g_list_nth_data(x14363, 0);
            struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x14365 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord*){x14364};
            GList* x14366 = x14359;
            GList* x14367 = g_list_next(x14366);
            x14359 = x14367;
            int x14369 = x14365->C_CUSTKEY;
            int x14370 = x14369==(x523);
            if(x14370) {
              int x1468 = x14365->R_REGIONKEY;
              char* x1469 = x14365->R_NAME;
              char* x1470 = x14365->R_COMMENT;
              int x1471 = x14365->N_NATIONKEY;
              char* x1472 = x14365->N_NAME;
              int x1473 = x14365->N_REGIONKEY;
              char* x1474 = x14365->N_COMMENT;
              char* x1475 = x14365->C_NAME;
              char* x1476 = x14365->C_ADDRESS;
              int x1477 = x14365->C_NATIONKEY;
              char* x1478 = x14365->C_PHONE;
              double x1479 = x14365->C_ACCTBAL;
              char* x1480 = x14365->C_MKTSEGMENT;
              char* x1481 = x14365->C_COMMENT;
              int x1482 = x517->O_ORDERKEY;
              char x1483 = x517->O_ORDERSTATUS;
              double x1484 = x517->O_TOTALPRICE;
              char* x1485 = x517->O_ORDERPRIORITY;
              char* x1486 = x517->O_CLERK;
              int x1487 = x517->O_SHIPPRIORITY;
              char* x1488 = x517->O_COMMENT;
              struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x10727 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord*)malloc(1 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord));
              memset(x10727, 0, 1 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord));
              x10727->R_REGIONKEY = x1468; x10727->R_NAME = x1469; x10727->R_COMMENT = x1470; x10727->N_NATIONKEY = x1471; x10727->N_NAME = x1472; x10727->N_REGIONKEY = x1473; x10727->N_COMMENT = x1474; x10727->C_CUSTKEY = x14369; x10727->C_NAME = x1475; x10727->C_ADDRESS = x1476; x10727->C_NATIONKEY = x1477; x10727->C_PHONE = x1478; x10727->C_ACCTBAL = x1479; x10727->C_MKTSEGMENT = x1480; x10727->C_COMMENT = x1481; x10727->O_ORDERKEY = x1482; x10727->O_CUSTKEY = x523; x10727->O_ORDERSTATUS = x1483; x10727->O_TOTALPRICE = x1484; x10727->O_ORDERDATE = x519; x10727->O_ORDERPRIORITY = x1485; x10727->O_CLERK = x1486; x10727->O_SHIPPRIORITY = x1487; x10727->O_COMMENT = x1488;
              int x544 = x10727->O_ORDERKEY;
              void* x11886 = (void*){x544};
              void* x11887 = (void*){x10727};
              void* x11888 = g_hash_table_lookup(x43700, x11886);
              GList** x11889 = (GList**){x11888};
              GList** x11890 = NULL;
              int x11891 = x11889==(x11890);
              /* VAR */ GList** ite36084 = 0;
              if(x11891) {
                GList** x36085 = malloc(8);
                GList* x36086 = NULL;
                pointer_assign(x36085, x36086);
                ite36084 = x36085;
              } else {
                
                ite36084 = x11889;
              };
              GList** x11895 = ite36084;
              GList* x11896 = *(x11895);
              GList* x11897 = g_list_prepend(x11896, x11887);
              pointer_assign(x11895, x11897);
              void* x11899 = (void*){x11895};
              g_hash_table_insert(x43700, x11886, x11899);
            };
          };
        };
      };
      int x3868 = x43742;
      int x553 = x3868+(1);
      x43742 = x553;
    };
    while(1) {
      
      int x44192 = x43741;
      int x44193 = x44192<(x6989);
      if (!(x44193)) break; 
      
      int x3877 = x43741;
      struct LINEITEMRecord* x562 = x9069[x3877];
      int x564 = x562->L_ORDERKEY;
      void* x11912 = (void*){x564};
      void* x11913 = g_hash_table_lookup(x43700, x11912);
      GList** x11914 = (GList**){x11913};
      int x22130 = x11914!=(NULL);
      if(x22130) {
        GList* x14562 = *(x11914);
        /* VAR */ GList* x14563 = x14562;
        while(1) {
          
          GList* x14564 = x14563;
          GList* x14565 = NULL;
          int x14566 = x14564!=(x14565);
          if (!(x14566)) break; 
          
          GList* x14567 = x14563;
          void* x14568 = g_list_nth_data(x14567, 0);
          struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x14569 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord*){x14568};
          GList* x14570 = x14563;
          GList* x14571 = g_list_next(x14570);
          x14563 = x14571;
          int x14573 = x14569->O_ORDERKEY;
          int x14574 = x14573==(x564);
          if(x14574) {
            int x1744 = x14569->R_REGIONKEY;
            char* x1745 = x14569->R_NAME;
            char* x1746 = x14569->R_COMMENT;
            int x1747 = x14569->N_NATIONKEY;
            char* x1748 = x14569->N_NAME;
            int x1749 = x14569->N_REGIONKEY;
            char* x1750 = x14569->N_COMMENT;
            int x1751 = x14569->C_CUSTKEY;
            char* x1752 = x14569->C_NAME;
            char* x1753 = x14569->C_ADDRESS;
            int x1754 = x14569->C_NATIONKEY;
            char* x1755 = x14569->C_PHONE;
            double x1756 = x14569->C_ACCTBAL;
            char* x1757 = x14569->C_MKTSEGMENT;
            char* x1758 = x14569->C_COMMENT;
            int x1759 = x14569->O_CUSTKEY;
            char x1760 = x14569->O_ORDERSTATUS;
            double x1761 = x14569->O_TOTALPRICE;
            int x1762 = x14569->O_ORDERDATE;
            char* x1763 = x14569->O_ORDERPRIORITY;
            char* x1764 = x14569->O_CLERK;
            int x1765 = x14569->O_SHIPPRIORITY;
            char* x1766 = x14569->O_COMMENT;
            int x1767 = x562->L_PARTKEY;
            int x1768 = x562->L_SUPPKEY;
            int x1769 = x562->L_LINENUMBER;
            double x1770 = x562->L_QUANTITY;
            double x1771 = x562->L_EXTENDEDPRICE;
            double x1772 = x562->L_DISCOUNT;
            double x1773 = x562->L_TAX;
            char x1774 = x562->L_RETURNFLAG;
            char x1775 = x562->L_LINESTATUS;
            int x1776 = x562->L_SHIPDATE;
            int x1777 = x562->L_COMMITDATE;
            int x1778 = x562->L_RECEIPTDATE;
            char* x1779 = x562->L_SHIPINSTRUCT;
            char* x1780 = x562->L_SHIPMODE;
            char* x1781 = x562->L_COMMENT;
            void* x11962 = (void*){x1768};
            void* x11963 = g_hash_table_lookup(x43690, x11962);
            GList** x11964 = (GList**){x11963};
            int x22314 = x11964!=(NULL);
            if(x22314) {
              GList* x14518 = *(x11964);
              /* VAR */ GList* x14519 = x14518;
              while(1) {
                
                GList* x14520 = x14519;
                GList* x14521 = NULL;
                int x14522 = x14520!=(x14521);
                if (!(x14522)) break; 
                
                GList* x14523 = x14519;
                void* x14524 = g_list_nth_data(x14523, 0);
                struct SUPPLIERRecord* x14525 = (struct SUPPLIERRecord*){x14524};
                GList* x14526 = x14519;
                GList* x14527 = g_list_next(x14526);
                x14519 = x14527;
                int x14529 = x14525->S_SUPPKEY;
                int x14530 = x14529==(x1768);
                /* VAR */ int ite39065 = 0;
                if(x14530) {
                  int x44466 = x14525->S_NATIONKEY;
                  int x44467 = x1747==(x44466);
                  ite39065 = x44467;
                } else {
                  
                  ite39065 = 0;
                };
                int x36355 = ite39065;
                if(x36355) {
                  char* x1886 = x14525->S_NAME;
                  char* x1887 = x14525->S_ADDRESS;
                  int x1888 = x14525->S_NATIONKEY;
                  char* x1889 = x14525->S_PHONE;
                  double x1890 = x14525->S_ACCTBAL;
                  char* x1891 = x14525->S_COMMENT;
                  struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord* x10808 = (struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord*)malloc(1 * sizeof(struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
                  memset(x10808, 0, 1 * sizeof(struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
                  x10808->S_SUPPKEY = x14529; x10808->S_NAME = x1886; x10808->S_ADDRESS = x1887; x10808->S_NATIONKEY = x1888; x10808->S_PHONE = x1889; x10808->S_ACCTBAL = x1890; x10808->S_COMMENT = x1891; x10808->R_REGIONKEY = x1744; x10808->R_NAME = x1745; x10808->R_COMMENT = x1746; x10808->N_NATIONKEY = x1747; x10808->N_NAME = x1748; x10808->N_REGIONKEY = x1749; x10808->N_COMMENT = x1750; x10808->C_CUSTKEY = x1751; x10808->C_NAME = x1752; x10808->C_ADDRESS = x1753; x10808->C_NATIONKEY = x1754; x10808->C_PHONE = x1755; x10808->C_ACCTBAL = x1756; x10808->C_MKTSEGMENT = x1757; x10808->C_COMMENT = x1758; x10808->O_ORDERKEY = x14573; x10808->O_CUSTKEY = x1759; x10808->O_ORDERSTATUS = x1760; x10808->O_TOTALPRICE = x1761; x10808->O_ORDERDATE = x1762; x10808->O_ORDERPRIORITY = x1763; x10808->O_CLERK = x1764; x10808->O_SHIPPRIORITY = x1765; x10808->O_COMMENT = x1766; x10808->L_ORDERKEY = x564; x10808->L_PARTKEY = x1767; x10808->L_SUPPKEY = x1768; x10808->L_LINENUMBER = x1769; x10808->L_QUANTITY = x1770; x10808->L_EXTENDEDPRICE = x1771; x10808->L_DISCOUNT = x1772; x10808->L_TAX = x1773; x10808->L_RETURNFLAG = x1774; x10808->L_LINESTATUS = x1775; x10808->L_SHIPDATE = x1776; x10808->L_COMMITDATE = x1777; x10808->L_RECEIPTDATE = x1778; x10808->L_SHIPINSTRUCT = x1779; x10808->L_SHIPMODE = x1780; x10808->L_COMMENT = x1781;
                  char* x728 = x10808->N_NAME;
                  void* x14545 = g_hash_table_lookup(x43680, x728);
                  int x14499 = x14545==(NULL);
                  /* VAR */ struct AGGRecord_OptimalString* ite36370 = 0;
                  if(x14499) {
                    double* x36371 = (double*)malloc(1 * sizeof(double));
                    memset(x36371, 0, 1 * sizeof(double));
                    struct AGGRecord_OptimalString* x36372 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
                    memset(x36372, 0, 1 * sizeof(struct AGGRecord_OptimalString));
                    x36372->key = x728; x36372->aggs = x36371;
                    g_hash_table_insert(x43680, x728, x36372);
                    ite36370 = x36372;
                  } else {
                    
                    ite36370 = x14545;
                  };
                  struct AGGRecord_OptimalString* x14509 = ite36370;
                  double* x733 = x14509->aggs;
                  double x747 = x733[0];
                  double x748 = x10808->L_EXTENDEDPRICE;
                  double x749 = x10808->L_DISCOUNT;
                  double x750 = 1.0-(x749);
                  double x751 = x748*(x750);
                  double x752 = x747+(x751);
                  *x733 = x752;
                };
              };
            };
          };
        };
      };
      int x4169 = x43741;
      int x767 = x4169+(1);
      x43741 = x767;
    };
    GList* x44511 = g_hash_table_get_keys(x43680);
    /* VAR */ GList* x44512 = x44511;
    int x44513 = g_hash_table_size(x43680);
    int x31609 = 0;
    for(; x31609 < x44513 ; x31609 += 1) {
      
      GList* x31610 = x44512;
      void* x31611 = g_list_nth_data(x31610, 0);
      GList* x31612 = g_list_next(x31610);
      x44512 = x31612;
      void* x31614 = g_hash_table_lookup(x43680, x31611);
      struct AGGRecord_OptimalString* x31616 = (struct AGGRecord_OptimalString*){x31614};
      g_tree_insert(x43792, x31616, x31616);
    };
    while(1) {
      
      int x4178 = x43793;
      int x778 = !(x4178);
      /* VAR */ int ite39138 = 0;
      if(x778) {
        int x44538 = g_tree_nnodes(x43792);
        int x44539 = x44538!=(0);
        ite39138 = x44539;
      } else {
        
        ite39138 = 0;
      };
      int x36421 = ite39138;
      if (!(x36421)) break; 
      
      void* x14730 = NULL;
      void** x14738 = &(x14730);
      g_tree_foreach(x43792, x14737, x14738);
      struct AGGRecord_OptimalString* x14740 = (struct AGGRecord_OptimalString*){x14730};
      int x14741 = g_tree_remove(x43792, x14740);
      if(0) {
        x43793 = 1;
      } else {
        
        char* x791 = x14740->key;
        double* x793 = x14740->aggs;
        double x794 = x793[0];
        printf("%s|%.4f\n", x791, x794);
        int x4196 = x43794;
        int x797 = x4196+(1);
        x43794 = x797;
      };
    };
    int x44565 = x43794;
    printf("(%d rows)\n", x44565);
    struct timeval* x44567 = &x43736;
    gettimeofday(x44567, NULL);
    struct timeval* x44569 = &x43732;
    struct timeval* x44570 = &x43736;
    struct timeval* x44571 = &x43734;
    long x44572 = timeval_subtract(x44569, x44570, x44571);
    printf("Generated code run in %ld milliseconds.\n", x44572);
  };
}
/* ----------- FUNCTIONS ----------- */
int x43657(char* x13950) {
  int x27790 = strlen(x13950);
  /* VAR */ int x24722 = 0;
  /* VAR */ int x24723 = 0;
  while(1) {
    
    int x24724 = x24722;
    int x24725 = x24724<(x27790);
    if (!(x24725)) break; 
    
    int x24726 = x24723;
    int x24727 = x24722;
    char* x27798 = pointer_add(x13950, x24727);
    char x27799 = *(x27798);
    int x24730 = x24726+(x27799);
    x24723 = x24730;
    int x24732 = x24722;
    int x24733 = x24732+(1);
    x24722 = x24733;
  };
  int x24736 = x24723;
  return x24736; 
}

int x43675(char* x13955, char* x13956) {
  int x24740 = strcmp(x13955, x13956);
  int x24741 = !(x24740);
  return x24741; 
}

int x43681(void* x11601) {
  int x11602 = g_direct_hash(x11601);
  return x11602; 
}

int x43684(void* x11604, void* x11605) {
  int x11606 = g_direct_equal(x11604, x11605);
  return x11606; 
}

int x43691(void* x11611) {
  int x11612 = g_direct_hash(x11611);
  return x11612; 
}

int x43694(void* x11614, void* x11615) {
  int x11616 = g_direct_equal(x11614, x11615);
  return x11616; 
}

int x43701(void* x11621) {
  int x11622 = g_direct_hash(x11621);
  return x11622; 
}

int x43704(void* x11624, void* x11625) {
  int x11626 = g_direct_equal(x11624, x11625);
  return x11626; 
}

int x43711(void* x11631) {
  int x11632 = g_direct_hash(x11631);
  return x11632; 
}

int x43714(void* x11634, void* x11635) {
  int x11636 = g_direct_equal(x11634, x11635);
  return x11636; 
}

int x43721(void* x11641) {
  int x11642 = g_direct_hash(x11641);
  return x11642; 
}

int x43724(void* x11644, void* x11645) {
  int x11646 = g_direct_equal(x11644, x11645);
  return x11646; 
}

int x43768(struct AGGRecord_OptimalString* x375, struct AGGRecord_OptimalString* x376) {
  double* x377 = x375->aggs;
  double x378 = x377[0];
  double* x379 = x376->aggs;
  double x380 = x379[0];
  int x381 = x378<(x380);
  /* VAR */ int ite35696 = 0;
  if(x381) {
    ite35696 = 1;
  } else {
    
    double x35698 = x377[0];
    double x35699 = x379[0];
    int x35700 = x35698>(x35699);
    /* VAR */ int ite35702 = 0;
    if(x35700) {
      ite35702 = -1;
    } else {
      
      ite35702 = 0;
    };
    int x35701 = ite35702;
    ite35696 = x35701;
  };
  int x386 = ite35696;
  return x386; 
}

int x14737(void* x14731, void* x14732, void* x14733) {
  struct AGGRecord_OptimalString** x14734 = (struct AGGRecord_OptimalString**){x14733};
  struct AGGRecord_OptimalString* x14735 = (struct AGGRecord_OptimalString*){x14732};
  pointer_assign(x14734, x14735);
  return 1; 
}
