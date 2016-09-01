#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct REGIONRecord;
  struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord;
  struct NATIONRecord;
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord;
  struct PARTRecord;
  struct SUPPLIERRecord;
  struct PARTSUPPRecord;
  
  struct REGIONRecord {
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
  };
  
  struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord {
  int key;
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* wnd;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  };
  
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord {
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
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
  
  


int x55999(void* x12491);

int x56002(void* x12494, void* x12495);

int x56009(void* x12501);

int x56012(void* x12504, void* x12505);

int x56019(void* x12511);

int x56022(void* x12514, void* x12515);

int x56029(void* x12521);

int x56032(void* x12524, void* x12525);

int x56039(void* x12531);

int x56042(void* x12534, void* x12535);

int x56137(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x291, struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x292);

int x16160(void* x16154, void* x16155, void* x16156);
/* GLOBAL VARS */

struct timeval x8002;
int main(int argc, char** argv) {
  FILE* x8747 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x8748 = 0;
  int x8749 = x8748;
  int* x8750 = &x8749;
  int x8751 = fscanf(x8747, "%d", x8750);
  pclose(x8747);
  struct PARTRecord* x10355 = (struct PARTRecord*)malloc(x8749 * sizeof(struct PARTRecord));
  memset(x10355, 0, x8749 * sizeof(struct PARTRecord));
  int x8755 = O_RDONLY;
  int x8756 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x8755);
  struct stat x8757 = (struct stat){0};
  /* VAR */ struct stat x8758 = x8757;
  struct stat x8759 = x8758;
  struct stat* x8760 = &x8759;
  int x8761 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x8760);
  int x8763 = PROT_READ;
  int x8764 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x8760->st_size), x8763, x8764, x8756, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite44690 = 0;
    if((x5<(x8749))) {
      char x53531 = *x3;
      ite44690 = (x53531!=('\0'));
    } else {
      
      ite44690 = 0;
    };
    int x40468 = ite44690;
    if (!(x40468)) break; 
    
    /* VAR */ int x8772 = 0;
    int x8773 = x8772;
    int* x8774 = &x8773;
    char* x8775 = strntoi_unchecked(x3, x8774);
    x3 = x8775;
    char* x10379 = (char*)malloc(56 * sizeof(char));
    memset(x10379, 0, 56 * sizeof(char));
    /* VAR */ char* x8778 = x3;
    while(1) {
      
      char x8779 = *x3;
      /* VAR */ int ite44709 = 0;
      if((x8779!=('|'))) {
        char x53549 = *x3;
        ite44709 = (x53549!=('\n'));
      } else {
        
        ite44709 = 0;
      };
      int x40480 = ite44709;
      if (!(x40480)) break; 
      
      x3 += 1;
    };
    char* x8786 = x8778;
    int x8787 = x3 - x8786;
    char* x8788 = x8778;
    char* x8789 = strncpy(x10379, x8788, x8787);
    x3 += 1;
    char* x10397 = (char*)malloc(26 * sizeof(char));
    memset(x10397, 0, 26 * sizeof(char));
    /* VAR */ char* x8797 = x3;
    while(1) {
      
      char x8798 = *x3;
      /* VAR */ int ite44732 = 0;
      if((x8798!=('|'))) {
        char x53571 = *x3;
        ite44732 = (x53571!=('\n'));
      } else {
        
        ite44732 = 0;
      };
      int x40496 = ite44732;
      if (!(x40496)) break; 
      
      x3 += 1;
    };
    char* x8805 = x8797;
    int x8806 = x3 - x8805;
    char* x8807 = x8797;
    char* x8808 = strncpy(x10397, x8807, x8806);
    x3 += 1;
    char* x10415 = (char*)malloc(11 * sizeof(char));
    memset(x10415, 0, 11 * sizeof(char));
    /* VAR */ char* x8816 = x3;
    while(1) {
      
      char x8817 = *x3;
      /* VAR */ int ite44755 = 0;
      if((x8817!=('|'))) {
        char x53593 = *x3;
        ite44755 = (x53593!=('\n'));
      } else {
        
        ite44755 = 0;
      };
      int x40512 = ite44755;
      if (!(x40512)) break; 
      
      x3 += 1;
    };
    char* x8824 = x8816;
    int x8825 = x3 - x8824;
    char* x8826 = x8816;
    char* x8827 = strncpy(x10415, x8826, x8825);
    x3 += 1;
    char* x10433 = (char*)malloc(26 * sizeof(char));
    memset(x10433, 0, 26 * sizeof(char));
    /* VAR */ char* x8835 = x3;
    while(1) {
      
      char x8836 = *x3;
      /* VAR */ int ite44778 = 0;
      if((x8836!=('|'))) {
        char x53615 = *x3;
        ite44778 = (x53615!=('\n'));
      } else {
        
        ite44778 = 0;
      };
      int x40528 = ite44778;
      if (!(x40528)) break; 
      
      x3 += 1;
    };
    char* x8843 = x8835;
    int x8844 = x3 - x8843;
    char* x8845 = x8835;
    char* x8846 = strncpy(x10433, x8845, x8844);
    x3 += 1;
    /* VAR */ int x8853 = 0;
    int x8854 = x8853;
    int* x8855 = &x8854;
    char* x8856 = strntoi_unchecked(x3, x8855);
    x3 = x8856;
    char* x10456 = (char*)malloc(11 * sizeof(char));
    memset(x10456, 0, 11 * sizeof(char));
    /* VAR */ char* x8859 = x3;
    while(1) {
      
      char x8860 = *x3;
      /* VAR */ int ite44806 = 0;
      if((x8860!=('|'))) {
        char x53642 = *x3;
        ite44806 = (x53642!=('\n'));
      } else {
        
        ite44806 = 0;
      };
      int x40549 = ite44806;
      if (!(x40549)) break; 
      
      x3 += 1;
    };
    char* x8867 = x8859;
    int x8868 = x3 - x8867;
    char* x8869 = x8859;
    char* x8870 = strncpy(x10456, x8869, x8868);
    x3 += 1;
    /* VAR */ double x8877 = 0.0;
    double x8878 = x8877;
    double* x8879 = &x8878;
    char* x8880 = strntod_unchecked(x3, x8879);
    x3 = x8880;
    char* x10479 = (char*)malloc(24 * sizeof(char));
    memset(x10479, 0, 24 * sizeof(char));
    /* VAR */ char* x8883 = x3;
    while(1) {
      
      char x8884 = *x3;
      /* VAR */ int ite44834 = 0;
      if((x8884!=('|'))) {
        char x53669 = *x3;
        ite44834 = (x53669!=('\n'));
      } else {
        
        ite44834 = 0;
      };
      int x40570 = ite44834;
      if (!(x40570)) break; 
      
      x3 += 1;
    };
    char* x8891 = x8883;
    int x8892 = x3 - x8891;
    char* x8893 = x8883;
    char* x8894 = strncpy(x10479, x8893, x8892);
    x3 += 1;
    struct PARTRecord* x11304 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x11304, 0, 1 * sizeof(struct PARTRecord));
    x11304->P_PARTKEY = x8773; x11304->P_NAME = x10379; x11304->P_MFGR = x10397; x11304->P_BRAND = x10415; x11304->P_TYPE = x10433; x11304->P_SIZE = x8854; x11304->P_CONTAINER = x10456; x11304->P_RETAILPRICE = x8878; x11304->P_COMMENT = x10479;
    int x59 = x4;
    struct PARTRecord x10499 = *x11304;
    *(x10355 + x59) = x10499;
    struct PARTRecord* x10501 = &(x10355[x59]);
    x11304 = x10501;
    int x61 = x4;
    x4 = (x61+(1));
  };
  FILE* x8907 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x8908 = 0;
  int x8909 = x8908;
  int* x8910 = &x8909;
  int x8911 = fscanf(x8907, "%d", x8910);
  pclose(x8907);
  struct PARTSUPPRecord* x10512 = (struct PARTSUPPRecord*)malloc(x8909 * sizeof(struct PARTSUPPRecord));
  memset(x10512, 0, x8909 * sizeof(struct PARTSUPPRecord));
  int x8915 = O_RDONLY;
  int x8916 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x8915);
  /* VAR */ struct stat x8917 = x8757;
  struct stat x8918 = x8917;
  struct stat* x8919 = &x8918;
  int x8920 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x8919);
  int x8922 = PROT_READ;
  int x8923 = MAP_PRIVATE;
  char* x67 = mmap(NULL, (x8919->st_size), x8922, x8923, x8916, 0);
  /* VAR */ int x68 = 0;
  while(1) {
    
    int x69 = x68;
    /* VAR */ int ite44884 = 0;
    if((x69<(x8909))) {
      char x53718 = *x67;
      ite44884 = (x53718!=('\0'));
    } else {
      
      ite44884 = 0;
    };
    int x40613 = ite44884;
    if (!(x40613)) break; 
    
    /* VAR */ int x8931 = 0;
    int x8932 = x8931;
    int* x8933 = &x8932;
    char* x8934 = strntoi_unchecked(x67, x8933);
    x67 = x8934;
    /* VAR */ int x8936 = 0;
    int x8937 = x8936;
    int* x8938 = &x8937;
    char* x8939 = strntoi_unchecked(x67, x8938);
    x67 = x8939;
    /* VAR */ int x8941 = 0;
    int x8942 = x8941;
    int* x8943 = &x8942;
    char* x8944 = strntoi_unchecked(x67, x8943);
    x67 = x8944;
    /* VAR */ double x8946 = 0.0;
    double x8947 = x8946;
    double* x8948 = &x8947;
    char* x8949 = strntod_unchecked(x67, x8948);
    x67 = x8949;
    char* x10550 = (char*)malloc(200 * sizeof(char));
    memset(x10550, 0, 200 * sizeof(char));
    /* VAR */ char* x8952 = x67;
    while(1) {
      
      char x8953 = *x67;
      /* VAR */ int ite44918 = 0;
      if((x8953!=('|'))) {
        char x53751 = *x67;
        ite44918 = (x53751!=('\n'));
      } else {
        
        ite44918 = 0;
      };
      int x40640 = ite44918;
      if (!(x40640)) break; 
      
      x67 += 1;
    };
    char* x8960 = x8952;
    int x8961 = x67 - x8960;
    char* x8962 = x8952;
    char* x8963 = strncpy(x10550, x8962, x8961);
    x67 += 1;
    struct PARTSUPPRecord* x11377 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x11377, 0, 1 * sizeof(struct PARTSUPPRecord));
    x11377->PS_PARTKEY = x8932; x11377->PS_SUPPKEY = x8937; x11377->PS_AVAILQTY = x8942; x11377->PS_SUPPLYCOST = x8947; x11377->PS_COMMENT = x10550;
    int x86 = x68;
    struct PARTSUPPRecord x10570 = *x11377;
    *(x10512 + x86) = x10570;
    struct PARTSUPPRecord* x10572 = &(x10512[x86]);
    x11377 = x10572;
    int x88 = x68;
    x68 = (x88+(1));
  };
  FILE* x8976 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x8977 = 0;
  int x8978 = x8977;
  int* x8979 = &x8978;
  int x8980 = fscanf(x8976, "%d", x8979);
  pclose(x8976);
  struct NATIONRecord* x10583 = (struct NATIONRecord*)malloc(x8978 * sizeof(struct NATIONRecord));
  memset(x10583, 0, x8978 * sizeof(struct NATIONRecord));
  int x8984 = O_RDONLY;
  int x8985 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x8984);
  /* VAR */ struct stat x8986 = x8757;
  struct stat x8987 = x8986;
  struct stat* x8988 = &x8987;
  int x8989 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x8988);
  int x8991 = PROT_READ;
  int x8992 = MAP_PRIVATE;
  char* x94 = mmap(NULL, (x8988->st_size), x8991, x8992, x8985, 0);
  /* VAR */ int x95 = 0;
  while(1) {
    
    int x96 = x95;
    /* VAR */ int ite44968 = 0;
    if((x96<(x8978))) {
      char x53800 = *x94;
      ite44968 = (x53800!=('\0'));
    } else {
      
      ite44968 = 0;
    };
    int x40683 = ite44968;
    if (!(x40683)) break; 
    
    /* VAR */ int x9000 = 0;
    int x9001 = x9000;
    int* x9002 = &x9001;
    char* x9003 = strntoi_unchecked(x94, x9002);
    x94 = x9003;
    char* x10606 = (char*)malloc(26 * sizeof(char));
    memset(x10606, 0, 26 * sizeof(char));
    /* VAR */ char* x9006 = x94;
    while(1) {
      
      char x9007 = *x94;
      /* VAR */ int ite44987 = 0;
      if((x9007!=('|'))) {
        char x53818 = *x94;
        ite44987 = (x53818!=('\n'));
      } else {
        
        ite44987 = 0;
      };
      int x40695 = ite44987;
      if (!(x40695)) break; 
      
      x94 += 1;
    };
    char* x9014 = x9006;
    int x9015 = x94 - x9014;
    char* x9016 = x9006;
    char* x9017 = strncpy(x10606, x9016, x9015);
    x94 += 1;
    /* VAR */ int x9024 = 0;
    int x9025 = x9024;
    int* x9026 = &x9025;
    char* x9027 = strntoi_unchecked(x94, x9026);
    x94 = x9027;
    char* x10629 = (char*)malloc(153 * sizeof(char));
    memset(x10629, 0, 153 * sizeof(char));
    /* VAR */ char* x9030 = x94;
    while(1) {
      
      char x9031 = *x94;
      /* VAR */ int ite45015 = 0;
      if((x9031!=('|'))) {
        char x53845 = *x94;
        ite45015 = (x53845!=('\n'));
      } else {
        
        ite45015 = 0;
      };
      int x40716 = ite45015;
      if (!(x40716)) break; 
      
      x94 += 1;
    };
    char* x9038 = x9030;
    int x9039 = x94 - x9038;
    char* x9040 = x9030;
    char* x9041 = strncpy(x10629, x9040, x9039);
    x94 += 1;
    struct NATIONRecord* x11458 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x11458, 0, 1 * sizeof(struct NATIONRecord));
    x11458->N_NATIONKEY = x9001; x11458->N_NAME = x10606; x11458->N_REGIONKEY = x9025; x11458->N_COMMENT = x10629;
    int x119 = x95;
    struct NATIONRecord x10649 = *x11458;
    *(x10583 + x119) = x10649;
    struct NATIONRecord* x10651 = &(x10583[x119]);
    x11458 = x10651;
    int x121 = x95;
    x95 = (x121+(1));
  };
  FILE* x9054 = popen("wc -l /mnt/ramdisk/tpch/sf8/region.tbl", "r");
  /* VAR */ int x9055 = 0;
  int x9056 = x9055;
  int* x9057 = &x9056;
  int x9058 = fscanf(x9054, "%d", x9057);
  pclose(x9054);
  struct REGIONRecord* x10662 = (struct REGIONRecord*)malloc(x9056 * sizeof(struct REGIONRecord));
  memset(x10662, 0, x9056 * sizeof(struct REGIONRecord));
  int x9062 = O_RDONLY;
  int x9063 = open("/mnt/ramdisk/tpch/sf8/region.tbl", x9062);
  /* VAR */ struct stat x9064 = x8757;
  struct stat x9065 = x9064;
  struct stat* x9066 = &x9065;
  int x9067 = stat("/mnt/ramdisk/tpch/sf8/region.tbl", x9066);
  int x9069 = PROT_READ;
  int x9070 = MAP_PRIVATE;
  char* x127 = mmap(NULL, (x9066->st_size), x9069, x9070, x9063, 0);
  /* VAR */ int x128 = 0;
  while(1) {
    
    int x129 = x128;
    /* VAR */ int ite45065 = 0;
    if((x129<(x9056))) {
      char x53894 = *x127;
      ite45065 = (x53894!=('\0'));
    } else {
      
      ite45065 = 0;
    };
    int x40759 = ite45065;
    if (!(x40759)) break; 
    
    /* VAR */ int x9078 = 0;
    int x9079 = x9078;
    int* x9080 = &x9079;
    char* x9081 = strntoi_unchecked(x127, x9080);
    x127 = x9081;
    char* x10685 = (char*)malloc(26 * sizeof(char));
    memset(x10685, 0, 26 * sizeof(char));
    /* VAR */ char* x9084 = x127;
    while(1) {
      
      char x9085 = *x127;
      /* VAR */ int ite45084 = 0;
      if((x9085!=('|'))) {
        char x53912 = *x127;
        ite45084 = (x53912!=('\n'));
      } else {
        
        ite45084 = 0;
      };
      int x40771 = ite45084;
      if (!(x40771)) break; 
      
      x127 += 1;
    };
    char* x9092 = x9084;
    int x9093 = x127 - x9092;
    char* x9094 = x9084;
    char* x9095 = strncpy(x10685, x9094, x9093);
    x127 += 1;
    char* x10703 = (char*)malloc(153 * sizeof(char));
    memset(x10703, 0, 153 * sizeof(char));
    /* VAR */ char* x9103 = x127;
    while(1) {
      
      char x9104 = *x127;
      /* VAR */ int ite45107 = 0;
      if((x9104!=('|'))) {
        char x53934 = *x127;
        ite45107 = (x53934!=('\n'));
      } else {
        
        ite45107 = 0;
      };
      int x40787 = ite45107;
      if (!(x40787)) break; 
      
      x127 += 1;
    };
    char* x9111 = x9103;
    int x9112 = x127 - x9111;
    char* x9113 = x9103;
    char* x9114 = strncpy(x10703, x9113, x9112);
    x127 += 1;
    struct REGIONRecord* x11534 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x11534, 0, 1 * sizeof(struct REGIONRecord));
    x11534->R_REGIONKEY = x9079; x11534->R_NAME = x10685; x11534->R_COMMENT = x10703;
    int x151 = x128;
    struct REGIONRecord x10723 = *x11534;
    *(x10662 + x151) = x10723;
    struct REGIONRecord* x10725 = &(x10662[x151]);
    x11534 = x10725;
    int x153 = x128;
    x128 = (x153+(1));
  };
  FILE* x9127 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x9128 = 0;
  int x9129 = x9128;
  int* x9130 = &x9129;
  int x9131 = fscanf(x9127, "%d", x9130);
  pclose(x9127);
  struct SUPPLIERRecord* x10736 = (struct SUPPLIERRecord*)malloc(x9129 * sizeof(struct SUPPLIERRecord));
  memset(x10736, 0, x9129 * sizeof(struct SUPPLIERRecord));
  int x9135 = O_RDONLY;
  int x9136 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x9135);
  /* VAR */ struct stat x9137 = x8757;
  struct stat x9138 = x9137;
  struct stat* x9139 = &x9138;
  int x9140 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x9139);
  int x9142 = PROT_READ;
  int x9143 = MAP_PRIVATE;
  char* x159 = mmap(NULL, (x9139->st_size), x9142, x9143, x9136, 0);
  /* VAR */ int x160 = 0;
  while(1) {
    
    int x161 = x160;
    /* VAR */ int ite45157 = 0;
    if((x161<(x9129))) {
      char x53983 = *x159;
      ite45157 = (x53983!=('\0'));
    } else {
      
      ite45157 = 0;
    };
    int x40830 = ite45157;
    if (!(x40830)) break; 
    
    /* VAR */ int x9151 = 0;
    int x9152 = x9151;
    int* x9153 = &x9152;
    char* x9154 = strntoi_unchecked(x159, x9153);
    x159 = x9154;
    char* x10759 = (char*)malloc(26 * sizeof(char));
    memset(x10759, 0, 26 * sizeof(char));
    /* VAR */ char* x9157 = x159;
    while(1) {
      
      char x9158 = *x159;
      /* VAR */ int ite45176 = 0;
      if((x9158!=('|'))) {
        char x54001 = *x159;
        ite45176 = (x54001!=('\n'));
      } else {
        
        ite45176 = 0;
      };
      int x40842 = ite45176;
      if (!(x40842)) break; 
      
      x159 += 1;
    };
    char* x9165 = x9157;
    int x9166 = x159 - x9165;
    char* x9167 = x9157;
    char* x9168 = strncpy(x10759, x9167, x9166);
    x159 += 1;
    char* x10777 = (char*)malloc(41 * sizeof(char));
    memset(x10777, 0, 41 * sizeof(char));
    /* VAR */ char* x9176 = x159;
    while(1) {
      
      char x9177 = *x159;
      /* VAR */ int ite45199 = 0;
      if((x9177!=('|'))) {
        char x54023 = *x159;
        ite45199 = (x54023!=('\n'));
      } else {
        
        ite45199 = 0;
      };
      int x40858 = ite45199;
      if (!(x40858)) break; 
      
      x159 += 1;
    };
    char* x9184 = x9176;
    int x9185 = x159 - x9184;
    char* x9186 = x9176;
    char* x9187 = strncpy(x10777, x9186, x9185);
    x159 += 1;
    /* VAR */ int x9194 = 0;
    int x9195 = x9194;
    int* x9196 = &x9195;
    char* x9197 = strntoi_unchecked(x159, x9196);
    x159 = x9197;
    char* x10800 = (char*)malloc(16 * sizeof(char));
    memset(x10800, 0, 16 * sizeof(char));
    /* VAR */ char* x9200 = x159;
    while(1) {
      
      char x9201 = *x159;
      /* VAR */ int ite45227 = 0;
      if((x9201!=('|'))) {
        char x54050 = *x159;
        ite45227 = (x54050!=('\n'));
      } else {
        
        ite45227 = 0;
      };
      int x40879 = ite45227;
      if (!(x40879)) break; 
      
      x159 += 1;
    };
    char* x9208 = x9200;
    int x9209 = x159 - x9208;
    char* x9210 = x9200;
    char* x9211 = strncpy(x10800, x9210, x9209);
    x159 += 1;
    /* VAR */ double x9218 = 0.0;
    double x9219 = x9218;
    double* x9220 = &x9219;
    char* x9221 = strntod_unchecked(x159, x9220);
    x159 = x9221;
    char* x10823 = (char*)malloc(102 * sizeof(char));
    memset(x10823, 0, 102 * sizeof(char));
    /* VAR */ char* x9224 = x159;
    while(1) {
      
      char x9225 = *x159;
      /* VAR */ int ite45255 = 0;
      if((x9225!=('|'))) {
        char x54077 = *x159;
        ite45255 = (x54077!=('\n'));
      } else {
        
        ite45255 = 0;
      };
      int x40900 = ite45255;
      if (!(x40900)) break; 
      
      x159 += 1;
    };
    char* x9232 = x9224;
    int x9233 = x159 - x9232;
    char* x9234 = x9224;
    char* x9235 = strncpy(x10823, x9234, x9233);
    x159 += 1;
    struct SUPPLIERRecord* x11656 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x11656, 0, 1 * sizeof(struct SUPPLIERRecord));
    x11656->S_SUPPKEY = x9152; x11656->S_NAME = x10759; x11656->S_ADDRESS = x10777; x11656->S_NATIONKEY = x9195; x11656->S_PHONE = x10800; x11656->S_ACCTBAL = x9219; x11656->S_COMMENT = x10823;
    int x201 = x160;
    struct SUPPLIERRecord x10843 = *x11656;
    *(x10736 + x201) = x10843;
    struct SUPPLIERRecord* x10845 = &(x10736[x201]);
    x11656 = x10845;
    int x203 = x160;
    x160 = (x203+(1));
  };
  int x208 = 0;
  for(; x208 < 1 ; x208 += 1) {
    
    GHashTable* x56008 = g_hash_table_new(((void***){x55999}), ((int*){x56002}));
    GHashTable* x56018 = g_hash_table_new(((void***){x56009}), ((int*){x56012}));
    GHashTable* x56028 = g_hash_table_new(((void***){x56019}), ((int*){x56022}));
    GHashTable* x56038 = g_hash_table_new(((void***){x56029}), ((int*){x56032}));
    GHashTable* x56048 = g_hash_table_new(((void***){x56039}), ((int*){x56042}));
    /* VAR */ int x56049 = 0;
    struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x56050 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(6400000 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x56050, 0, 6400000 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    /* VAR */ int x56051 = 0;
    while(1) {
      
      int x7726 = x56051;
      if (!((x7726<(6400000)))) break; 
      
      int x7728 = x56051;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x11682 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x11682, 0, 1 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      x11682->R_REGIONKEY = 0; x11682->R_NAME = ""; x11682->R_COMMENT = ""; x11682->P_PARTKEY = 0; x11682->P_NAME = ""; x11682->P_MFGR = ""; x11682->P_BRAND = ""; x11682->P_TYPE = ""; x11682->P_SIZE = 0; x11682->P_CONTAINER = ""; x11682->P_RETAILPRICE = 0.0; x11682->P_COMMENT = ""; x11682->N_NATIONKEY = 0; x11682->N_NAME = ""; x11682->N_REGIONKEY = 0; x11682->N_COMMENT = ""; x11682->S_SUPPKEY = 0; x11682->S_NAME = ""; x11682->S_ADDRESS = ""; x11682->S_NATIONKEY = 0; x11682->S_PHONE = ""; x11682->S_ACCTBAL = 0.0; x11682->S_COMMENT = ""; x11682->PS_PARTKEY = 0; x11682->PS_SUPPKEY = 0; x11682->PS_AVAILQTY = 0; x11682->PS_SUPPLYCOST = 0.0; x11682->PS_COMMENT = "";
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x10866 = *x11682;
      *(x56050 + x7728) = x10866;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x10868 = &(x56050[x7728]);
      x11682 = x10868;
      int x7731 = x56051;
      x56051 = (x7731+(1));
    };
    /* VAR */ int x56066 = 0;
    struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x56067 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(48000000 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x56067, 0, 48000000 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
    /* VAR */ int x56068 = 0;
    while(1) {
      
      int x7738 = x56068;
      if (!((x7738<(48000000)))) break; 
      
      int x7740 = x56068;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x7741 = &(x56050[x7740]);
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x11700 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x11700, 0, 1 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
      x11700->key = 0; x11700->wnd = x7741;
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord x10882 = *x11700;
      *(x56067 + x7740) = x10882;
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x10884 = &(x56067[x7740]);
      x11700 = x10884;
      int x7744 = x56068;
      x56068 = (x7744+(1));
    };
    /* VAR */ struct timeval x56084 = x8002;
    struct timeval x56085 = x56084;
    /* VAR */ struct timeval x56086 = x8002;
    struct timeval x56087 = x56086;
    /* VAR */ struct timeval x56088 = x8002;
    struct timeval x56089 = x56088;
    struct timeval* x56090 = &x56087;
    gettimeofday(x56090, NULL);
    /* VAR */ int x56092 = 0;
    /* VAR */ int x56093 = 0;
    /* VAR */ int x56094 = 0;
    /* VAR */ int x56095 = 0;
    /* VAR */ int x56096 = 0;
    int* x56177 = &(x56137);
    GTree* x56178 = g_tree_new(x56177);
    /* VAR */ int x56179 = 0;
    /* VAR */ int x56180 = 0;
    while(1) {
      
      int x56182 = x56096;
      if (!((x56182<(x9056)))) break; 
      
      int x4402 = x56096;
      struct REGIONRecord* x347 = &(x10662[x4402]);
      int x30368 = strcmp((x347->R_NAME), "AFRICA");
      if((x30368==(0))) {
        void* x12633 = (void*){(x347->R_REGIONKEY)};
        void* x12635 = g_hash_table_lookup(x56018, x12633);
        GList** x12636 = (GList**){x12635};
        GList** x12637 = NULL;
        /* VAR */ GList** ite42994 = 0;
        if((x12636==(x12637))) {
          GList** x42995 = malloc(8);
          GList* x42996 = NULL;
          pointer_assign(x42995, x42996);
          ite42994 = x42995;
        } else {
          
          ite42994 = x12636;
        };
        GList** x12642 = ite42994;
        GList* x12643 = *(x12642);
        GList* x12644 = g_list_prepend(x12643, ((void*){x347}));
        pointer_assign(x12642, x12644);
        g_hash_table_insert(x56018, x12633, ((void*){x12642}));
      };
      int x4410 = x56096;
      x56096 = (x4410+(1));
    };
    while(1) {
      
      int x56215 = x56095;
      if (!((x56215<(x8749)))) break; 
      
      int x4419 = x56095;
      struct PARTRecord* x365 = &(x10355[x4419]);
      /* VAR */ int ite47412 = 0;
      if(((x365->P_SIZE)==(43))) {
        char* x56223 = x365->P_TYPE;
        int x56224 = strlen(x56223);
        int x56225 = strlen("TIN");
        int x56226 = x56224-(x56225);
        char* x56227 = pointer_add(x56223, x56226);
        int x56228 = strncmp(x56227, "TIN", x56226);
        ite47412 = (x56228==(0));
      } else {
        
        ite47412 = 0;
      };
      int x43017 = ite47412;
      if(x43017) {
        void* x12664 = (void*){(x365->P_PARTKEY)};
        void* x12666 = g_hash_table_lookup(x56028, x12664);
        GList** x12667 = (GList**){x12666};
        GList** x12668 = NULL;
        /* VAR */ GList** ite43027 = 0;
        if((x12667==(x12668))) {
          GList** x43028 = malloc(8);
          GList* x43029 = NULL;
          pointer_assign(x43028, x43029);
          ite43027 = x43028;
        } else {
          
          ite43027 = x12667;
        };
        GList** x12673 = ite43027;
        GList* x12674 = *(x12673);
        GList* x12675 = g_list_prepend(x12674, ((void*){x365}));
        pointer_assign(x12673, x12675);
        g_hash_table_insert(x56028, x12664, ((void*){x12673}));
      };
      int x4430 = x56095;
      x56095 = (x4430+(1));
    };
    while(1) {
      
      int x56260 = x56094;
      if (!((x56260<(x8978)))) break; 
      
      int x4439 = x56094;
      struct NATIONRecord* x386 = &(x10583[x4439]);
      void* x12689 = (void*){(x386->N_NATIONKEY)};
      void* x12691 = g_hash_table_lookup(x56038, x12689);
      GList** x12692 = (GList**){x12691};
      GList** x12693 = NULL;
      /* VAR */ GList** ite43055 = 0;
      if((x12692==(x12693))) {
        GList** x43056 = malloc(8);
        GList* x43057 = NULL;
        pointer_assign(x43056, x43057);
        ite43055 = x43056;
      } else {
        
        ite43055 = x12692;
      };
      GList** x12698 = ite43055;
      GList* x12699 = *(x12698);
      GList* x12700 = g_list_prepend(x12699, ((void*){x386}));
      pointer_assign(x12698, x12700);
      g_hash_table_insert(x56038, x12689, ((void*){x12698}));
      int x4444 = x56094;
      x56094 = (x4444+(1));
    };
    while(1) {
      
      int x56289 = x56093;
      if (!((x56289<(x9129)))) break; 
      
      int x4453 = x56093;
      struct SUPPLIERRecord* x401 = &(x10736[x4453]);
      void* x12714 = (void*){(x401->S_SUPPKEY)};
      void* x12716 = g_hash_table_lookup(x56048, x12714);
      GList** x12717 = (GList**){x12716};
      GList** x12718 = NULL;
      /* VAR */ GList** ite43083 = 0;
      if((x12717==(x12718))) {
        GList** x43084 = malloc(8);
        GList* x43085 = NULL;
        pointer_assign(x43084, x43085);
        ite43083 = x43084;
      } else {
        
        ite43083 = x12717;
      };
      GList** x12723 = ite43083;
      GList* x12724 = *(x12723);
      GList* x12725 = g_list_prepend(x12724, ((void*){x401}));
      pointer_assign(x12723, x12725);
      g_hash_table_insert(x56048, x12714, ((void*){x12723}));
      int x4458 = x56093;
      x56093 = (x4458+(1));
    };
    while(1) {
      
      int x56318 = x56092;
      if (!((x56318<(x8909)))) break; 
      
      int x4467 = x56092;
      struct PARTSUPPRecord* x416 = &(x10512[x4467]);
      int x418 = x416->PS_SUPPKEY;
      void* x12740 = g_hash_table_lookup(x56048, ((void*){x418}));
      GList** x12741 = (GList**){x12740};
      if((x12741!=(NULL))) {
        GList* x15380 = *(x12741);
        /* VAR */ GList* x15381 = x15380;
        while(1) {
          
          GList* x15382 = x15381;
          GList* x15383 = NULL;
          if (!((x15382!=(x15383)))) break; 
          
          GList* x15385 = x15381;
          void* x15386 = g_list_nth_data(x15385, 0);
          struct SUPPLIERRecord* x15387 = (struct SUPPLIERRecord*){x15386};
          GList* x15388 = x15381;
          GList* x15389 = g_list_next(x15388);
          x15381 = x15389;
          int x15391 = x15387->S_SUPPKEY;
          if((x15391==(x418))) {
            int x1861 = x15387->S_NATIONKEY;
            int x1865 = x416->PS_PARTKEY;
            void* x12762 = g_hash_table_lookup(x56038, ((void*){x1861}));
            GList** x12763 = (GList**){x12762};
            if((x12763!=(NULL))) {
              GList* x15061 = *(x12763);
              /* VAR */ GList* x15062 = x15061;
              while(1) {
                
                GList* x15063 = x15062;
                GList* x15064 = NULL;
                if (!((x15063!=(x15064)))) break; 
                
                GList* x15066 = x15062;
                void* x15067 = g_list_nth_data(x15066, 0);
                struct NATIONRecord* x15068 = (struct NATIONRecord*){x15067};
                GList* x15069 = x15062;
                GList* x15070 = g_list_next(x15069);
                x15062 = x15070;
                int x15072 = x15068->N_NATIONKEY;
                if((x15072==(x1861))) {
                  int x2133 = x15068->N_REGIONKEY;
                  void* x12777 = g_hash_table_lookup(x56028, ((void*){x1865}));
                  GList** x12778 = (GList**){x12777};
                  if((x12778!=(NULL))) {
                    GList* x14909 = *(x12778);
                    /* VAR */ GList* x14910 = x14909;
                    while(1) {
                      
                      GList* x14911 = x14910;
                      GList* x14912 = NULL;
                      if (!((x14911!=(x14912)))) break; 
                      
                      GList* x14914 = x14910;
                      void* x14915 = g_list_nth_data(x14914, 0);
                      struct PARTRecord* x14916 = (struct PARTRecord*){x14915};
                      GList* x14917 = x14910;
                      GList* x14918 = g_list_next(x14917);
                      x14910 = x14918;
                      int x14920 = x14916->P_PARTKEY;
                      if((x14920==(x1865))) {
                        void* x12797 = g_hash_table_lookup(x56018, ((void*){x2133}));
                        GList** x12798 = (GList**){x12797};
                        if((x12798!=(NULL))) {
                          GList* x14843 = *(x12798);
                          /* VAR */ GList* x14844 = x14843;
                          while(1) {
                            
                            GList* x14845 = x14844;
                            GList* x14846 = NULL;
                            if (!((x14845!=(x14846)))) break; 
                            
                            GList* x14848 = x14844;
                            void* x14849 = g_list_nth_data(x14848, 0);
                            struct REGIONRecord* x14850 = (struct REGIONRecord*){x14849};
                            GList* x14851 = x14844;
                            GList* x14852 = g_list_next(x14851);
                            x14844 = x14852;
                            int x14854 = x14850->R_REGIONKEY;
                            if((x14854==(x2133))) {
                              int x7908 = x56049;
                              struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x7909 = &(x56050[x7908]);
                              x7909->R_REGIONKEY = x14854;
                              x7909->R_NAME = (x14850->R_NAME);
                              x7909->R_COMMENT = (x14850->R_COMMENT);
                              x7909->P_PARTKEY = x14920;
                              x7909->P_NAME = (x14916->P_NAME);
                              x7909->P_MFGR = (x14916->P_MFGR);
                              x7909->P_BRAND = (x14916->P_BRAND);
                              x7909->P_TYPE = (x14916->P_TYPE);
                              x7909->P_SIZE = (x14916->P_SIZE);
                              x7909->P_CONTAINER = (x14916->P_CONTAINER);
                              x7909->P_RETAILPRICE = (x14916->P_RETAILPRICE);
                              x7909->P_COMMENT = (x14916->P_COMMENT);
                              x7909->N_NATIONKEY = x15072;
                              x7909->N_NAME = (x15068->N_NAME);
                              x7909->N_REGIONKEY = x2133;
                              x7909->N_COMMENT = (x15068->N_COMMENT);
                              x7909->S_SUPPKEY = x15391;
                              x7909->S_NAME = (x15387->S_NAME);
                              x7909->S_ADDRESS = (x15387->S_ADDRESS);
                              x7909->S_NATIONKEY = x1861;
                              x7909->S_PHONE = (x15387->S_PHONE);
                              x7909->S_ACCTBAL = (x15387->S_ACCTBAL);
                              x7909->S_COMMENT = (x15387->S_COMMENT);
                              x7909->PS_PARTKEY = x1865;
                              x7909->PS_SUPPKEY = x418;
                              x7909->PS_AVAILQTY = (x416->PS_AVAILQTY);
                              x7909->PS_SUPPLYCOST = (x416->PS_SUPPLYCOST);
                              x7909->PS_COMMENT = (x416->PS_COMMENT);
                              int x7938 = x56049;
                              x56049 = (x7938+(1));
                              void* x12844 = (void*){(x7909->P_PARTKEY)};
                              void* x12846 = g_hash_table_lookup(x56008, x12844);
                              GList** x12847 = (GList**){x12846};
                              GList** x12848 = NULL;
                              /* VAR */ GList** ite44458 = 0;
                              if((x12847==(x12848))) {
                                GList** x44459 = malloc(8);
                                GList* x44460 = NULL;
                                pointer_assign(x44459, x44460);
                                ite44458 = x44459;
                              } else {
                                
                                ite44458 = x12847;
                              };
                              GList** x12853 = ite44458;
                              GList* x12854 = *(x12853);
                              GList* x12855 = g_list_prepend(x12854, ((void*){x7909}));
                              pointer_assign(x12853, x12855);
                              g_hash_table_insert(x56008, x12844, ((void*){x12853}));
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
        };
      };
      int x4931 = x56092;
      x56092 = (x4931+(1));
    };
    GList* x57739 = g_hash_table_get_keys(x56008);
    /* VAR */ GList* x57740 = x57739;
    int x57741 = g_hash_table_size(x56008);
    int x36313 = 0;
    for(; x36313 < x57741 ; x36313 += 1) {
      
      GList* x36314 = x57740;
      void* x36315 = g_list_nth_data(x36314, 0);
      GList* x36316 = x57740;
      GList* x36317 = g_list_next(x36316);
      x57740 = x36317;
      void* x36319 = g_hash_table_lookup(x56008, x36315);
      GList** x36320 = (GList**){x36319};
      GList* x36324 = *(x36320);
      /* VAR */ GList* x36325 = x36324;
      GList* x36326 = x36325;
      void* x36327 = g_list_nth_data(x36326, 0);
      /* VAR */ struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x36329 = ((struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x36327});
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x36330 = x36329;
      /* VAR */ double x36332 = (x36330->PS_SUPPLYCOST);
      while(1) {
        
        GList* x16117 = x36325;
        GList* x16118 = NULL;
        if (!((x16117!=(x16118)))) break; 
        
        GList* x16120 = x36325;
        void* x16121 = g_list_nth_data(x16120, 0);
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x16122 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x16121};
        GList* x16123 = x36325;
        GList* x16124 = g_list_next(x16123);
        x36325 = x16124;
        double x16126 = x16122->PS_SUPPLYCOST;
        double x16127 = x36332;
        int x16128 = x16126<(x16127);
        if(x16128) {
          x36332 = x16126;
          x36329 = x16122;
        };
      };
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x36350 = x36329;
      GList* x36351 = *(x36320);
      void* x36352 = g_list_nth_data(x36351, 0);
      int x36355 = x56066;
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x36356 = &(x56067[x36355]);
      x36356->key = (((struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x36352})->P_PARTKEY);
      x36356->wnd = x36350;
      int x36359 = x56066;
      x56066 = (x36359+(1));
      g_tree_insert(x56178, x36356, x36356);
    };
    while(1) {
      
      int x4948 = x56179;
      int x816 = !(x4948);
      /* VAR */ int ite49041 = 0;
      if(x816) {
        int x57848 = g_tree_nnodes(x56178);
        ite49041 = (x57848!=(0));
      } else {
        
        ite49041 = 0;
      };
      int x44628 = ite49041;
      if (!(x44628)) break; 
      
      void* x16153 = NULL;
      void** x16161 = &(x16153);
      g_tree_foreach(x56178, x16160, x16161);
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x16163 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*){x16153};
      int x16164 = g_tree_remove(x56178, x16163);
      int x4956 = x56180;
      if((x4956>=(100))) {
        x56179 = 1;
      } else {
        
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x828 = x16163->wnd;
        printf("%.2f|%s|%s|%d|%s|%s|%s|%s\n", (x828->S_ACCTBAL), (x828->S_NAME), (x828->N_NAME), (x828->P_PARTKEY), (x828->P_MFGR), (x828->S_ADDRESS), (x828->S_PHONE), (x828->S_COMMENT));
        int x4976 = x56180;
        x56180 = (x4976+(1));
      };
    };
    int x57883 = x56180;
    printf("(%d rows)\n", x57883);
    struct timeval* x57885 = &x56089;
    gettimeofday(x57885, NULL);
    struct timeval* x57887 = &x56085;
    struct timeval* x57888 = &x56089;
    struct timeval* x57889 = &x56087;
    long x57890 = timeval_subtract(x57887, x57888, x57889);
    printf("Generated code run in %ld milliseconds.\n", x57890);
  };
}
/* ----------- FUNCTIONS ----------- */
int x55999(void* x12491) {
  int x12492 = g_direct_hash(x12491);
  return x12492; 
}

int x56002(void* x12494, void* x12495) {
  int x12496 = g_direct_equal(x12494, x12495);
  return x12496; 
}

int x56009(void* x12501) {
  int x12502 = g_direct_hash(x12501);
  return x12502; 
}

int x56012(void* x12504, void* x12505) {
  int x12506 = g_direct_equal(x12504, x12505);
  return x12506; 
}

int x56019(void* x12511) {
  int x12512 = g_direct_hash(x12511);
  return x12512; 
}

int x56022(void* x12514, void* x12515) {
  int x12516 = g_direct_equal(x12514, x12515);
  return x12516; 
}

int x56029(void* x12521) {
  int x12522 = g_direct_hash(x12521);
  return x12522; 
}

int x56032(void* x12524, void* x12525) {
  int x12526 = g_direct_equal(x12524, x12525);
  return x12526; 
}

int x56039(void* x12531) {
  int x12532 = g_direct_hash(x12531);
  return x12532; 
}

int x56042(void* x12534, void* x12535) {
  int x12536 = g_direct_equal(x12534, x12535);
  return x12536; 
}

int x56137(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x291, struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x292) {
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x293 = x291->wnd;
  double x294 = x293->S_ACCTBAL;
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x295 = x292->wnd;
  double x296 = x295->S_ACCTBAL;
  /* VAR */ int ite42943 = 0;
  if((x294<(x296))) {
    ite42943 = 1;
  } else {
    
    /* VAR */ int ite42947 = 0;
    if((x294>(x296))) {
      ite42947 = -1;
    } else {
      
      int x42951 = strcmp((x293->N_NAME), (x295->N_NAME));
      /* VAR */ int x42952 = x42951;
      int x42953 = x42952;
      if((x42953==(0))) {
        int x30347 = strcmp((x293->S_NAME), (x295->S_NAME));
        x42952 = x30347;
        int x309 = x42952;
        if((x309==(0))) {
          x42952 = ((x293->P_PARTKEY)-((x295->P_PARTKEY)));
        };
      };
      int x42967 = x42952;
      ite42947 = x42967;
    };
    int x42946 = ite42947;
    ite42943 = x42946;
  };
  int x319 = ite42943;
  return x319; 
}

int x16160(void* x16154, void* x16155, void* x16156) {
  pointer_assign(((struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord**){x16156}), ((struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*){x16155}));
  return 1; 
}
