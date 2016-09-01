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
  
  


int x43491(void* x10346);

int x43494(void* x10349, void* x10350);

int x43501(void* x10356);

int x43504(void* x10359, void* x10360);

int x43511(void* x10366);

int x43514(void* x10369, void* x10370);

int x43521(void* x10376);

int x43524(void* x10379, void* x10380);

int x43531(void* x10386);

int x43534(void* x10389, void* x10390);

int x43594(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x291, struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x292);

int x13316(void* x13310, void* x13311, void* x13312);
/* GLOBAL VARS */

struct timeval x6267;
int main(int argc, char** argv) {
  FILE* x6911 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x6912 = 0;
  int x6913 = x6912;
  int* x6914 = &x6913;
  int x6915 = fscanf(x6911, "%d", x6914);
  pclose(x6911);
  struct PARTRecord** x8393 = (struct PARTRecord**)malloc(x6913 * sizeof(struct PARTRecord*));
  memset(x8393, 0, x6913 * sizeof(struct PARTRecord*));
  int x6919 = O_RDONLY;
  int x6920 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x6919);
  struct stat x6921 = (struct stat){0};
  /* VAR */ struct stat x6922 = x6921;
  struct stat x6923 = x6922;
  struct stat* x6924 = &x6923;
  int x6925 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x6924);
  size_t x6926 = x6924->st_size;
  int x6927 = PROT_READ;
  int x6928 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x6926, x6927, x6928, x6920, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x6913);
    /* VAR */ int ite34862 = 0;
    if(x6) {
      char x41565 = *x3;
      int x41566 = x41565!=('\0');
      ite34862 = x41566;
    } else {
      
      ite34862 = 0;
    };
    int x31709 = ite34862;
    if (!(x31709)) break; 
    
    /* VAR */ int x6936 = 0;
    int x6937 = x6936;
    int* x6938 = &x6937;
    char* x6939 = strntoi_unchecked(x3, x6938);
    x3 = x6939;
    char* x8417 = (char*)malloc(56 * sizeof(char));
    memset(x8417, 0, 56 * sizeof(char));
    /* VAR */ char* x6942 = x3;
    while(1) {
      
      char x6943 = *x3;
      int x6944 = x6943!=('|');
      /* VAR */ int ite34881 = 0;
      if(x6944) {
        char x41583 = *x3;
        int x41584 = x41583!=('\n');
        ite34881 = x41584;
      } else {
        
        ite34881 = 0;
      };
      int x31721 = ite34881;
      if (!(x31721)) break; 
      
      x3 += 1;
    };
    char* x6950 = x6942;
    int x6951 = x3 - x6950;
    char* x6952 = x6942;
    char* x6953 = strncpy(x8417, x6952, x6951);
    x3 += 1;
    char* x8435 = (char*)malloc(26 * sizeof(char));
    memset(x8435, 0, 26 * sizeof(char));
    /* VAR */ char* x6961 = x3;
    while(1) {
      
      char x6962 = *x3;
      int x6963 = x6962!=('|');
      /* VAR */ int ite34904 = 0;
      if(x6963) {
        char x41605 = *x3;
        int x41606 = x41605!=('\n');
        ite34904 = x41606;
      } else {
        
        ite34904 = 0;
      };
      int x31737 = ite34904;
      if (!(x31737)) break; 
      
      x3 += 1;
    };
    char* x6969 = x6961;
    int x6970 = x3 - x6969;
    char* x6971 = x6961;
    char* x6972 = strncpy(x8435, x6971, x6970);
    x3 += 1;
    char* x8453 = (char*)malloc(11 * sizeof(char));
    memset(x8453, 0, 11 * sizeof(char));
    /* VAR */ char* x6980 = x3;
    while(1) {
      
      char x6981 = *x3;
      int x6982 = x6981!=('|');
      /* VAR */ int ite34927 = 0;
      if(x6982) {
        char x41627 = *x3;
        int x41628 = x41627!=('\n');
        ite34927 = x41628;
      } else {
        
        ite34927 = 0;
      };
      int x31753 = ite34927;
      if (!(x31753)) break; 
      
      x3 += 1;
    };
    char* x6988 = x6980;
    int x6989 = x3 - x6988;
    char* x6990 = x6980;
    char* x6991 = strncpy(x8453, x6990, x6989);
    x3 += 1;
    char* x8471 = (char*)malloc(26 * sizeof(char));
    memset(x8471, 0, 26 * sizeof(char));
    /* VAR */ char* x6999 = x3;
    while(1) {
      
      char x7000 = *x3;
      int x7001 = x7000!=('|');
      /* VAR */ int ite34950 = 0;
      if(x7001) {
        char x41649 = *x3;
        int x41650 = x41649!=('\n');
        ite34950 = x41650;
      } else {
        
        ite34950 = 0;
      };
      int x31769 = ite34950;
      if (!(x31769)) break; 
      
      x3 += 1;
    };
    char* x7007 = x6999;
    int x7008 = x3 - x7007;
    char* x7009 = x6999;
    char* x7010 = strncpy(x8471, x7009, x7008);
    x3 += 1;
    /* VAR */ int x7017 = 0;
    int x7018 = x7017;
    int* x7019 = &x7018;
    char* x7020 = strntoi_unchecked(x3, x7019);
    x3 = x7020;
    char* x8494 = (char*)malloc(11 * sizeof(char));
    memset(x8494, 0, 11 * sizeof(char));
    /* VAR */ char* x7023 = x3;
    while(1) {
      
      char x7024 = *x3;
      int x7025 = x7024!=('|');
      /* VAR */ int ite34978 = 0;
      if(x7025) {
        char x41676 = *x3;
        int x41677 = x41676!=('\n');
        ite34978 = x41677;
      } else {
        
        ite34978 = 0;
      };
      int x31790 = ite34978;
      if (!(x31790)) break; 
      
      x3 += 1;
    };
    char* x7031 = x7023;
    int x7032 = x3 - x7031;
    char* x7033 = x7023;
    char* x7034 = strncpy(x8494, x7033, x7032);
    x3 += 1;
    /* VAR */ double x7041 = 0.0;
    double x7042 = x7041;
    double* x7043 = &x7042;
    char* x7044 = strntod_unchecked(x3, x7043);
    x3 = x7044;
    char* x8517 = (char*)malloc(24 * sizeof(char));
    memset(x8517, 0, 24 * sizeof(char));
    /* VAR */ char* x7047 = x3;
    while(1) {
      
      char x7048 = *x3;
      int x7049 = x7048!=('|');
      /* VAR */ int ite35006 = 0;
      if(x7049) {
        char x41703 = *x3;
        int x41704 = x41703!=('\n');
        ite35006 = x41704;
      } else {
        
        ite35006 = 0;
      };
      int x31811 = ite35006;
      if (!(x31811)) break; 
      
      x3 += 1;
    };
    char* x7055 = x7047;
    int x7056 = x3 - x7055;
    char* x7057 = x7047;
    char* x7058 = strncpy(x8517, x7057, x7056);
    x3 += 1;
    struct PARTRecord* x9258 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x9258, 0, 1 * sizeof(struct PARTRecord));
    x9258->P_PARTKEY = x6937; x9258->P_NAME = x8417; x9258->P_MFGR = x8435; x9258->P_BRAND = x8453; x9258->P_TYPE = x8471; x9258->P_SIZE = x7018; x9258->P_CONTAINER = x8494; x9258->P_RETAILPRICE = x7042; x9258->P_COMMENT = x8517;
    int x59 = x4;
    *(x8393 + x59) = x9258;
    int x61 = x4;
    int x62 = x61+(1);
    x4 = x62;
  };
  FILE* x7071 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x7072 = 0;
  int x7073 = x7072;
  int* x7074 = &x7073;
  int x7075 = fscanf(x7071, "%d", x7074);
  pclose(x7071);
  struct PARTSUPPRecord** x8547 = (struct PARTSUPPRecord**)malloc(x7073 * sizeof(struct PARTSUPPRecord*));
  memset(x8547, 0, x7073 * sizeof(struct PARTSUPPRecord*));
  int x7079 = O_RDONLY;
  int x7080 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x7079);
  /* VAR */ struct stat x7081 = x6921;
  struct stat x7082 = x7081;
  struct stat* x7083 = &x7082;
  int x7084 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x7083);
  size_t x7085 = x7083->st_size;
  int x7086 = PROT_READ;
  int x7087 = MAP_PRIVATE;
  char* x67 = mmap(NULL, x7085, x7086, x7087, x7080, 0);
  /* VAR */ int x68 = 0;
  while(1) {
    
    int x69 = x68;
    int x70 = x69<(x7073);
    /* VAR */ int ite35053 = 0;
    if(x70) {
      char x41749 = *x67;
      int x41750 = x41749!=('\0');
      ite35053 = x41750;
    } else {
      
      ite35053 = 0;
    };
    int x31851 = ite35053;
    if (!(x31851)) break; 
    
    /* VAR */ int x7095 = 0;
    int x7096 = x7095;
    int* x7097 = &x7096;
    char* x7098 = strntoi_unchecked(x67, x7097);
    x67 = x7098;
    /* VAR */ int x7100 = 0;
    int x7101 = x7100;
    int* x7102 = &x7101;
    char* x7103 = strntoi_unchecked(x67, x7102);
    x67 = x7103;
    /* VAR */ int x7105 = 0;
    int x7106 = x7105;
    int* x7107 = &x7106;
    char* x7108 = strntoi_unchecked(x67, x7107);
    x67 = x7108;
    /* VAR */ double x7110 = 0.0;
    double x7111 = x7110;
    double* x7112 = &x7111;
    char* x7113 = strntod_unchecked(x67, x7112);
    x67 = x7113;
    char* x8585 = (char*)malloc(200 * sizeof(char));
    memset(x8585, 0, 200 * sizeof(char));
    /* VAR */ char* x7116 = x67;
    while(1) {
      
      char x7117 = *x67;
      int x7118 = x7117!=('|');
      /* VAR */ int ite35087 = 0;
      if(x7118) {
        char x41782 = *x67;
        int x41783 = x41782!=('\n');
        ite35087 = x41783;
      } else {
        
        ite35087 = 0;
      };
      int x31878 = ite35087;
      if (!(x31878)) break; 
      
      x67 += 1;
    };
    char* x7124 = x7116;
    int x7125 = x67 - x7124;
    char* x7126 = x7116;
    char* x7127 = strncpy(x8585, x7126, x7125);
    x67 += 1;
    struct PARTSUPPRecord* x9328 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x9328, 0, 1 * sizeof(struct PARTSUPPRecord));
    x9328->PS_PARTKEY = x7096; x9328->PS_SUPPKEY = x7101; x9328->PS_AVAILQTY = x7106; x9328->PS_SUPPLYCOST = x7111; x9328->PS_COMMENT = x8585;
    int x86 = x68;
    *(x8547 + x86) = x9328;
    int x88 = x68;
    int x89 = x88+(1);
    x68 = x89;
  };
  FILE* x7140 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x7141 = 0;
  int x7142 = x7141;
  int* x7143 = &x7142;
  int x7144 = fscanf(x7140, "%d", x7143);
  pclose(x7140);
  struct NATIONRecord** x8615 = (struct NATIONRecord**)malloc(x7142 * sizeof(struct NATIONRecord*));
  memset(x8615, 0, x7142 * sizeof(struct NATIONRecord*));
  int x7148 = O_RDONLY;
  int x7149 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x7148);
  /* VAR */ struct stat x7150 = x6921;
  struct stat x7151 = x7150;
  struct stat* x7152 = &x7151;
  int x7153 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x7152);
  size_t x7154 = x7152->st_size;
  int x7155 = PROT_READ;
  int x7156 = MAP_PRIVATE;
  char* x94 = mmap(NULL, x7154, x7155, x7156, x7149, 0);
  /* VAR */ int x95 = 0;
  while(1) {
    
    int x96 = x95;
    int x97 = x96<(x7142);
    /* VAR */ int ite35134 = 0;
    if(x97) {
      char x41828 = *x94;
      int x41829 = x41828!=('\0');
      ite35134 = x41829;
    } else {
      
      ite35134 = 0;
    };
    int x31918 = ite35134;
    if (!(x31918)) break; 
    
    /* VAR */ int x7164 = 0;
    int x7165 = x7164;
    int* x7166 = &x7165;
    char* x7167 = strntoi_unchecked(x94, x7166);
    x94 = x7167;
    char* x8638 = (char*)malloc(26 * sizeof(char));
    memset(x8638, 0, 26 * sizeof(char));
    /* VAR */ char* x7170 = x94;
    while(1) {
      
      char x7171 = *x94;
      int x7172 = x7171!=('|');
      /* VAR */ int ite35153 = 0;
      if(x7172) {
        char x41846 = *x94;
        int x41847 = x41846!=('\n');
        ite35153 = x41847;
      } else {
        
        ite35153 = 0;
      };
      int x31930 = ite35153;
      if (!(x31930)) break; 
      
      x94 += 1;
    };
    char* x7178 = x7170;
    int x7179 = x94 - x7178;
    char* x7180 = x7170;
    char* x7181 = strncpy(x8638, x7180, x7179);
    x94 += 1;
    /* VAR */ int x7188 = 0;
    int x7189 = x7188;
    int* x7190 = &x7189;
    char* x7191 = strntoi_unchecked(x94, x7190);
    x94 = x7191;
    char* x8661 = (char*)malloc(153 * sizeof(char));
    memset(x8661, 0, 153 * sizeof(char));
    /* VAR */ char* x7194 = x94;
    while(1) {
      
      char x7195 = *x94;
      int x7196 = x7195!=('|');
      /* VAR */ int ite35181 = 0;
      if(x7196) {
        char x41873 = *x94;
        int x41874 = x41873!=('\n');
        ite35181 = x41874;
      } else {
        
        ite35181 = 0;
      };
      int x31951 = ite35181;
      if (!(x31951)) break; 
      
      x94 += 1;
    };
    char* x7202 = x7194;
    int x7203 = x94 - x7202;
    char* x7204 = x7194;
    char* x7205 = strncpy(x8661, x7204, x7203);
    x94 += 1;
    struct NATIONRecord* x9406 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x9406, 0, 1 * sizeof(struct NATIONRecord));
    x9406->N_NATIONKEY = x7165; x9406->N_NAME = x8638; x9406->N_REGIONKEY = x7189; x9406->N_COMMENT = x8661;
    int x119 = x95;
    *(x8615 + x119) = x9406;
    int x121 = x95;
    int x122 = x121+(1);
    x95 = x122;
  };
  FILE* x7218 = popen("wc -l /mnt/ramdisk/tpch/sf8/region.tbl", "r");
  /* VAR */ int x7219 = 0;
  int x7220 = x7219;
  int* x7221 = &x7220;
  int x7222 = fscanf(x7218, "%d", x7221);
  pclose(x7218);
  struct REGIONRecord** x8691 = (struct REGIONRecord**)malloc(x7220 * sizeof(struct REGIONRecord*));
  memset(x8691, 0, x7220 * sizeof(struct REGIONRecord*));
  int x7226 = O_RDONLY;
  int x7227 = open("/mnt/ramdisk/tpch/sf8/region.tbl", x7226);
  /* VAR */ struct stat x7228 = x6921;
  struct stat x7229 = x7228;
  struct stat* x7230 = &x7229;
  int x7231 = stat("/mnt/ramdisk/tpch/sf8/region.tbl", x7230);
  size_t x7232 = x7230->st_size;
  int x7233 = PROT_READ;
  int x7234 = MAP_PRIVATE;
  char* x127 = mmap(NULL, x7232, x7233, x7234, x7227, 0);
  /* VAR */ int x128 = 0;
  while(1) {
    
    int x129 = x128;
    int x130 = x129<(x7220);
    /* VAR */ int ite35228 = 0;
    if(x130) {
      char x41919 = *x127;
      int x41920 = x41919!=('\0');
      ite35228 = x41920;
    } else {
      
      ite35228 = 0;
    };
    int x31991 = ite35228;
    if (!(x31991)) break; 
    
    /* VAR */ int x7242 = 0;
    int x7243 = x7242;
    int* x7244 = &x7243;
    char* x7245 = strntoi_unchecked(x127, x7244);
    x127 = x7245;
    char* x8714 = (char*)malloc(26 * sizeof(char));
    memset(x8714, 0, 26 * sizeof(char));
    /* VAR */ char* x7248 = x127;
    while(1) {
      
      char x7249 = *x127;
      int x7250 = x7249!=('|');
      /* VAR */ int ite35247 = 0;
      if(x7250) {
        char x41937 = *x127;
        int x41938 = x41937!=('\n');
        ite35247 = x41938;
      } else {
        
        ite35247 = 0;
      };
      int x32003 = ite35247;
      if (!(x32003)) break; 
      
      x127 += 1;
    };
    char* x7256 = x7248;
    int x7257 = x127 - x7256;
    char* x7258 = x7248;
    char* x7259 = strncpy(x8714, x7258, x7257);
    x127 += 1;
    char* x8732 = (char*)malloc(153 * sizeof(char));
    memset(x8732, 0, 153 * sizeof(char));
    /* VAR */ char* x7267 = x127;
    while(1) {
      
      char x7268 = *x127;
      int x7269 = x7268!=('|');
      /* VAR */ int ite35270 = 0;
      if(x7269) {
        char x41959 = *x127;
        int x41960 = x41959!=('\n');
        ite35270 = x41960;
      } else {
        
        ite35270 = 0;
      };
      int x32019 = ite35270;
      if (!(x32019)) break; 
      
      x127 += 1;
    };
    char* x7275 = x7267;
    int x7276 = x127 - x7275;
    char* x7277 = x7267;
    char* x7278 = strncpy(x8732, x7277, x7276);
    x127 += 1;
    struct REGIONRecord* x9479 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x9479, 0, 1 * sizeof(struct REGIONRecord));
    x9479->R_REGIONKEY = x7243; x9479->R_NAME = x8714; x9479->R_COMMENT = x8732;
    int x151 = x128;
    *(x8691 + x151) = x9479;
    int x153 = x128;
    int x154 = x153+(1);
    x128 = x154;
  };
  FILE* x7291 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x7292 = 0;
  int x7293 = x7292;
  int* x7294 = &x7293;
  int x7295 = fscanf(x7291, "%d", x7294);
  pclose(x7291);
  struct SUPPLIERRecord** x8762 = (struct SUPPLIERRecord**)malloc(x7293 * sizeof(struct SUPPLIERRecord*));
  memset(x8762, 0, x7293 * sizeof(struct SUPPLIERRecord*));
  int x7299 = O_RDONLY;
  int x7300 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x7299);
  /* VAR */ struct stat x7301 = x6921;
  struct stat x7302 = x7301;
  struct stat* x7303 = &x7302;
  int x7304 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x7303);
  size_t x7305 = x7303->st_size;
  int x7306 = PROT_READ;
  int x7307 = MAP_PRIVATE;
  char* x159 = mmap(NULL, x7305, x7306, x7307, x7300, 0);
  /* VAR */ int x160 = 0;
  while(1) {
    
    int x161 = x160;
    int x162 = x161<(x7293);
    /* VAR */ int ite35317 = 0;
    if(x162) {
      char x42005 = *x159;
      int x42006 = x42005!=('\0');
      ite35317 = x42006;
    } else {
      
      ite35317 = 0;
    };
    int x32059 = ite35317;
    if (!(x32059)) break; 
    
    /* VAR */ int x7315 = 0;
    int x7316 = x7315;
    int* x7317 = &x7316;
    char* x7318 = strntoi_unchecked(x159, x7317);
    x159 = x7318;
    char* x8785 = (char*)malloc(26 * sizeof(char));
    memset(x8785, 0, 26 * sizeof(char));
    /* VAR */ char* x7321 = x159;
    while(1) {
      
      char x7322 = *x159;
      int x7323 = x7322!=('|');
      /* VAR */ int ite35336 = 0;
      if(x7323) {
        char x42023 = *x159;
        int x42024 = x42023!=('\n');
        ite35336 = x42024;
      } else {
        
        ite35336 = 0;
      };
      int x32071 = ite35336;
      if (!(x32071)) break; 
      
      x159 += 1;
    };
    char* x7329 = x7321;
    int x7330 = x159 - x7329;
    char* x7331 = x7321;
    char* x7332 = strncpy(x8785, x7331, x7330);
    x159 += 1;
    char* x8803 = (char*)malloc(41 * sizeof(char));
    memset(x8803, 0, 41 * sizeof(char));
    /* VAR */ char* x7340 = x159;
    while(1) {
      
      char x7341 = *x159;
      int x7342 = x7341!=('|');
      /* VAR */ int ite35359 = 0;
      if(x7342) {
        char x42045 = *x159;
        int x42046 = x42045!=('\n');
        ite35359 = x42046;
      } else {
        
        ite35359 = 0;
      };
      int x32087 = ite35359;
      if (!(x32087)) break; 
      
      x159 += 1;
    };
    char* x7348 = x7340;
    int x7349 = x159 - x7348;
    char* x7350 = x7340;
    char* x7351 = strncpy(x8803, x7350, x7349);
    x159 += 1;
    /* VAR */ int x7358 = 0;
    int x7359 = x7358;
    int* x7360 = &x7359;
    char* x7361 = strntoi_unchecked(x159, x7360);
    x159 = x7361;
    char* x8826 = (char*)malloc(16 * sizeof(char));
    memset(x8826, 0, 16 * sizeof(char));
    /* VAR */ char* x7364 = x159;
    while(1) {
      
      char x7365 = *x159;
      int x7366 = x7365!=('|');
      /* VAR */ int ite35387 = 0;
      if(x7366) {
        char x42072 = *x159;
        int x42073 = x42072!=('\n');
        ite35387 = x42073;
      } else {
        
        ite35387 = 0;
      };
      int x32108 = ite35387;
      if (!(x32108)) break; 
      
      x159 += 1;
    };
    char* x7372 = x7364;
    int x7373 = x159 - x7372;
    char* x7374 = x7364;
    char* x7375 = strncpy(x8826, x7374, x7373);
    x159 += 1;
    /* VAR */ double x7382 = 0.0;
    double x7383 = x7382;
    double* x7384 = &x7383;
    char* x7385 = strntod_unchecked(x159, x7384);
    x159 = x7385;
    char* x8849 = (char*)malloc(102 * sizeof(char));
    memset(x8849, 0, 102 * sizeof(char));
    /* VAR */ char* x7388 = x159;
    while(1) {
      
      char x7389 = *x159;
      int x7390 = x7389!=('|');
      /* VAR */ int ite35415 = 0;
      if(x7390) {
        char x42099 = *x159;
        int x42100 = x42099!=('\n');
        ite35415 = x42100;
      } else {
        
        ite35415 = 0;
      };
      int x32129 = ite35415;
      if (!(x32129)) break; 
      
      x159 += 1;
    };
    char* x7396 = x7388;
    int x7397 = x159 - x7396;
    char* x7398 = x7388;
    char* x7399 = strncpy(x8849, x7398, x7397);
    x159 += 1;
    struct SUPPLIERRecord* x9598 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x9598, 0, 1 * sizeof(struct SUPPLIERRecord));
    x9598->S_SUPPKEY = x7316; x9598->S_NAME = x8785; x9598->S_ADDRESS = x8803; x9598->S_NATIONKEY = x7359; x9598->S_PHONE = x8826; x9598->S_ACCTBAL = x7383; x9598->S_COMMENT = x8849;
    int x201 = x160;
    *(x8762 + x201) = x9598;
    int x203 = x160;
    int x204 = x203+(1);
    x160 = x204;
  };
  int x208 = 0;
  for(; x208 < 1 ; x208 += 1) {
    
    void*** x43498 = (void***){x43491};
    int* x43499 = (int*){x43494};
    GHashTable* x43500 = g_hash_table_new(x43498, x43499);
    void*** x43508 = (void***){x43501};
    int* x43509 = (int*){x43504};
    GHashTable* x43510 = g_hash_table_new(x43508, x43509);
    void*** x43518 = (void***){x43511};
    int* x43519 = (int*){x43514};
    GHashTable* x43520 = g_hash_table_new(x43518, x43519);
    void*** x43528 = (void***){x43521};
    int* x43529 = (int*){x43524};
    GHashTable* x43530 = g_hash_table_new(x43528, x43529);
    void*** x43538 = (void***){x43531};
    int* x43539 = (int*){x43534};
    GHashTable* x43540 = g_hash_table_new(x43538, x43539);
    /* VAR */ struct timeval x43541 = x6267;
    struct timeval x43542 = x43541;
    /* VAR */ struct timeval x43543 = x6267;
    struct timeval x43544 = x43543;
    /* VAR */ struct timeval x43545 = x6267;
    struct timeval x43546 = x43545;
    struct timeval* x43547 = &x43544;
    gettimeofday(x43547, NULL);
    /* VAR */ int x43549 = 0;
    /* VAR */ int x43550 = 0;
    /* VAR */ int x43551 = 0;
    /* VAR */ int x43552 = 0;
    /* VAR */ int x43553 = 0;
    int* x43634 = &(x43594);
    GTree* x43635 = g_tree_new(x43634);
    /* VAR */ int x43636 = 0;
    /* VAR */ int x43637 = 0;
    while(1) {
      
      int x43639 = x43553;
      int x43640 = x43639<(x7220);
      if (!(x43640)) break; 
      
      int x4402 = x43553;
      struct REGIONRecord* x347 = x8691[x4402];
      char* x349 = x347->R_NAME;
      int x24246 = strcmp(x349, "AFRICA");
      int x24247 = x24246==(0);
      if(x24247) {
        int x351 = x347->R_REGIONKEY;
        void* x10453 = (void*){x351};
        void* x10454 = (void*){x347};
        void* x10455 = g_hash_table_lookup(x43510, x10453);
        GList** x10456 = (GList**){x10455};
        GList** x10457 = NULL;
        int x10458 = x10456==(x10457);
        /* VAR */ GList** ite33658 = 0;
        if(x10458) {
          GList** x33659 = malloc(8);
          GList* x33660 = NULL;
          pointer_assign(x33659, x33660);
          ite33658 = x33659;
        } else {
          
          ite33658 = x10456;
        };
        GList** x10462 = ite33658;
        GList* x10463 = *(x10462);
        GList* x10464 = g_list_prepend(x10463, x10454);
        pointer_assign(x10462, x10464);
        void* x10466 = (void*){x10462};
        g_hash_table_insert(x43510, x10453, x10466);
      };
      int x4410 = x43553;
      int x356 = x4410+(1);
      x43553 = x356;
    };
    while(1) {
      
      int x43672 = x43552;
      int x43673 = x43672<(x6913);
      if (!(x43673)) break; 
      
      int x4419 = x43552;
      struct PARTRecord* x365 = x8393[x4419];
      int x367 = x365->P_SIZE;
      int x368 = x367==(43);
      /* VAR */ int ite37007 = 0;
      if(x368) {
        char* x43680 = x365->P_TYPE;
        int x43681 = strlen(x43680);
        int x43682 = strlen("TIN");
        int x43683 = x43681-(x43682);
        char* x43684 = pointer_add(x43680, x43683);
        int x43685 = strncmp(x43684, "TIN", x43683);
        int x43686 = x43685==(0);
        ite37007 = x43686;
      } else {
        
        ite37007 = 0;
      };
      int x33681 = ite37007;
      if(x33681) {
        int x372 = x365->P_PARTKEY;
        void* x10484 = (void*){x372};
        void* x10485 = (void*){x365};
        void* x10486 = g_hash_table_lookup(x43520, x10484);
        GList** x10487 = (GList**){x10486};
        GList** x10488 = NULL;
        int x10489 = x10487==(x10488);
        /* VAR */ GList** ite33691 = 0;
        if(x10489) {
          GList** x33692 = malloc(8);
          GList* x33693 = NULL;
          pointer_assign(x33692, x33693);
          ite33691 = x33692;
        } else {
          
          ite33691 = x10487;
        };
        GList** x10493 = ite33691;
        GList* x10494 = *(x10493);
        GList* x10495 = g_list_prepend(x10494, x10485);
        pointer_assign(x10493, x10495);
        void* x10497 = (void*){x10493};
        g_hash_table_insert(x43520, x10484, x10497);
      };
      int x4430 = x43552;
      int x377 = x4430+(1);
      x43552 = x377;
    };
    while(1) {
      
      int x43717 = x43551;
      int x43718 = x43717<(x7142);
      if (!(x43718)) break; 
      
      int x4439 = x43551;
      struct NATIONRecord* x386 = x8615[x4439];
      int x388 = x386->N_NATIONKEY;
      void* x10509 = (void*){x388};
      void* x10510 = (void*){x386};
      void* x10511 = g_hash_table_lookup(x43530, x10509);
      GList** x10512 = (GList**){x10511};
      GList** x10513 = NULL;
      int x10514 = x10512==(x10513);
      /* VAR */ GList** ite33719 = 0;
      if(x10514) {
        GList** x33720 = malloc(8);
        GList* x33721 = NULL;
        pointer_assign(x33720, x33721);
        ite33719 = x33720;
      } else {
        
        ite33719 = x10512;
      };
      GList** x10518 = ite33719;
      GList* x10519 = *(x10518);
      GList* x10520 = g_list_prepend(x10519, x10510);
      pointer_assign(x10518, x10520);
      void* x10522 = (void*){x10518};
      g_hash_table_insert(x43530, x10509, x10522);
      int x4444 = x43551;
      int x392 = x4444+(1);
      x43551 = x392;
    };
    while(1) {
      
      int x43746 = x43550;
      int x43747 = x43746<(x7293);
      if (!(x43747)) break; 
      
      int x4453 = x43550;
      struct SUPPLIERRecord* x401 = x8762[x4453];
      int x403 = x401->S_SUPPKEY;
      void* x10534 = (void*){x403};
      void* x10535 = (void*){x401};
      void* x10536 = g_hash_table_lookup(x43540, x10534);
      GList** x10537 = (GList**){x10536};
      GList** x10538 = NULL;
      int x10539 = x10537==(x10538);
      /* VAR */ GList** ite33747 = 0;
      if(x10539) {
        GList** x33748 = malloc(8);
        GList* x33749 = NULL;
        pointer_assign(x33748, x33749);
        ite33747 = x33748;
      } else {
        
        ite33747 = x10537;
      };
      GList** x10543 = ite33747;
      GList* x10544 = *(x10543);
      GList* x10545 = g_list_prepend(x10544, x10535);
      pointer_assign(x10543, x10545);
      void* x10547 = (void*){x10543};
      g_hash_table_insert(x43540, x10534, x10547);
      int x4458 = x43550;
      int x407 = x4458+(1);
      x43550 = x407;
    };
    while(1) {
      
      int x43775 = x43549;
      int x43776 = x43775<(x7073);
      if (!(x43776)) break; 
      
      int x4467 = x43549;
      struct PARTSUPPRecord* x416 = x8547[x4467];
      int x418 = x416->PS_SUPPKEY;
      void* x10559 = (void*){x418};
      void* x10560 = g_hash_table_lookup(x43540, x10559);
      GList** x10561 = (GList**){x10560};
      int x19282 = x10561!=(NULL);
      if(x19282) {
        GList* x12784 = *(x10561);
        /* VAR */ GList* x12785 = x12784;
        while(1) {
          
          GList* x12786 = x12785;
          GList* x12787 = NULL;
          int x12788 = x12786!=(x12787);
          if (!(x12788)) break; 
          
          GList* x12789 = x12785;
          void* x12790 = g_list_nth_data(x12789, 0);
          struct SUPPLIERRecord* x12791 = (struct SUPPLIERRecord*){x12790};
          GList* x12792 = x12785;
          GList* x12793 = g_list_next(x12792);
          x12785 = x12793;
          int x12795 = x12791->S_SUPPKEY;
          int x12796 = x12795==(x418);
          if(x12796) {
            char* x1859 = x12791->S_NAME;
            char* x1860 = x12791->S_ADDRESS;
            int x1861 = x12791->S_NATIONKEY;
            char* x1862 = x12791->S_PHONE;
            double x1863 = x12791->S_ACCTBAL;
            char* x1864 = x12791->S_COMMENT;
            int x1865 = x416->PS_PARTKEY;
            int x1866 = x416->PS_AVAILQTY;
            double x1867 = x416->PS_SUPPLYCOST;
            char* x1868 = x416->PS_COMMENT;
            void* x10581 = (void*){x1861};
            void* x10582 = g_hash_table_lookup(x43530, x10581);
            GList** x10583 = (GList**){x10582};
            int x19708 = x10583!=(NULL);
            if(x19708) {
              GList* x12585 = *(x10583);
              /* VAR */ GList* x12586 = x12585;
              while(1) {
                
                GList* x12587 = x12586;
                GList* x12588 = NULL;
                int x12589 = x12587!=(x12588);
                if (!(x12589)) break; 
                
                GList* x12590 = x12586;
                void* x12591 = g_list_nth_data(x12590, 0);
                struct NATIONRecord* x12592 = (struct NATIONRecord*){x12591};
                GList* x12593 = x12586;
                GList* x12594 = g_list_next(x12593);
                x12586 = x12594;
                int x12596 = x12592->N_NATIONKEY;
                int x12597 = x12596==(x1861);
                if(x12597) {
                  char* x2132 = x12592->N_NAME;
                  int x2133 = x12592->N_REGIONKEY;
                  char* x2134 = x12592->N_COMMENT;
                  void* x10596 = (void*){x1865};
                  void* x10597 = g_hash_table_lookup(x43520, x10596);
                  GList** x10598 = (GList**){x10597};
                  int x19914 = x10598!=(NULL);
                  if(x19914) {
                    GList* x12493 = *(x10598);
                    /* VAR */ GList* x12494 = x12493;
                    while(1) {
                      
                      GList* x12495 = x12494;
                      GList* x12496 = NULL;
                      int x12497 = x12495!=(x12496);
                      if (!(x12497)) break; 
                      
                      GList* x12498 = x12494;
                      void* x12499 = g_list_nth_data(x12498, 0);
                      struct PARTRecord* x12500 = (struct PARTRecord*){x12499};
                      GList* x12501 = x12494;
                      GList* x12502 = g_list_next(x12501);
                      x12494 = x12502;
                      int x12504 = x12500->P_PARTKEY;
                      int x12505 = x12504==(x1865);
                      if(x12505) {
                        char* x2270 = x12500->P_NAME;
                        char* x2271 = x12500->P_MFGR;
                        char* x2272 = x12500->P_BRAND;
                        char* x2273 = x12500->P_TYPE;
                        int x2274 = x12500->P_SIZE;
                        char* x2275 = x12500->P_CONTAINER;
                        double x2276 = x12500->P_RETAILPRICE;
                        char* x2277 = x12500->P_COMMENT;
                        void* x10616 = (void*){x2133};
                        void* x10617 = g_hash_table_lookup(x43510, x10616);
                        GList** x10618 = (GList**){x10617};
                        int x20022 = x10618!=(NULL);
                        if(x20022) {
                          GList* x12457 = *(x10618);
                          /* VAR */ GList* x12458 = x12457;
                          while(1) {
                            
                            GList* x12459 = x12458;
                            GList* x12460 = NULL;
                            int x12461 = x12459!=(x12460);
                            if (!(x12461)) break; 
                            
                            GList* x12462 = x12458;
                            void* x12463 = g_list_nth_data(x12462, 0);
                            struct REGIONRecord* x12464 = (struct REGIONRecord*){x12463};
                            GList* x12465 = x12458;
                            GList* x12466 = g_list_next(x12465);
                            x12458 = x12466;
                            int x12468 = x12464->R_REGIONKEY;
                            int x12469 = x12468==(x2133);
                            if(x12469) {
                              char* x2343 = x12464->R_NAME;
                              char* x2344 = x12464->R_COMMENT;
                              struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9780 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
                              memset(x9780, 0, 1 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
                              x9780->R_REGIONKEY = x12468; x9780->R_NAME = x2343; x9780->R_COMMENT = x2344; x9780->P_PARTKEY = x12504; x9780->P_NAME = x2270; x9780->P_MFGR = x2271; x9780->P_BRAND = x2272; x9780->P_TYPE = x2273; x9780->P_SIZE = x2274; x9780->P_CONTAINER = x2275; x9780->P_RETAILPRICE = x2276; x9780->P_COMMENT = x2277; x9780->N_NATIONKEY = x12596; x9780->N_NAME = x2132; x9780->N_REGIONKEY = x2133; x9780->N_COMMENT = x2134; x9780->S_SUPPKEY = x12795; x9780->S_NAME = x1859; x9780->S_ADDRESS = x1860; x9780->S_NATIONKEY = x1861; x9780->S_PHONE = x1862; x9780->S_ACCTBAL = x1863; x9780->S_COMMENT = x1864; x9780->PS_PARTKEY = x1865; x9780->PS_SUPPKEY = x418; x9780->PS_AVAILQTY = x1866; x9780->PS_SUPPLYCOST = x1867; x9780->PS_COMMENT = x1868;
                              int x777 = x9780->P_PARTKEY;
                              void* x10634 = (void*){x777};
                              void* x10635 = (void*){x9780};
                              void* x10636 = g_hash_table_lookup(x43500, x10634);
                              GList** x10637 = (GList**){x10636};
                              GList** x10638 = NULL;
                              int x10639 = x10637==(x10638);
                              /* VAR */ GList** ite34642 = 0;
                              if(x10639) {
                                GList** x34643 = malloc(8);
                                GList* x34644 = NULL;
                                pointer_assign(x34643, x34644);
                                ite34642 = x34643;
                              } else {
                                
                                ite34642 = x10637;
                              };
                              GList** x10643 = ite34642;
                              GList* x10644 = *(x10643);
                              GList* x10645 = g_list_prepend(x10644, x10635);
                              pointer_assign(x10643, x10645);
                              void* x10647 = (void*){x10643};
                              g_hash_table_insert(x43500, x10634, x10647);
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
      int x4931 = x43549;
      int x797 = x4931+(1);
      x43549 = x797;
    };
    GList* x44712 = g_hash_table_get_keys(x43500);
    /* VAR */ GList* x44713 = x44712;
    int x44714 = g_hash_table_size(x43500);
    int x28627 = 0;
    for(; x28627 < x44714 ; x28627 += 1) {
      
      GList* x28628 = x44713;
      void* x28629 = g_list_nth_data(x28628, 0);
      GList* x28630 = x44713;
      GList* x28631 = g_list_next(x28630);
      x44713 = x28631;
      void* x28633 = g_hash_table_lookup(x43500, x28629);
      GList** x28634 = (GList**){x28633};
      GList* x28638 = *(x28634);
      /* VAR */ GList* x28639 = x28638;
      GList* x28640 = x28639;
      void* x28641 = g_list_nth_data(x28640, 0);
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28642 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x28641};
      /* VAR */ struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28643 = x28642;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28644 = x28643;
      double x28645 = x28644->PS_SUPPLYCOST;
      /* VAR */ double x28646 = x28645;
      while(1) {
        
        GList* x13277 = x28639;
        GList* x13278 = NULL;
        int x13279 = x13277!=(x13278);
        if (!(x13279)) break; 
        
        GList* x13280 = x28639;
        void* x13281 = g_list_nth_data(x13280, 0);
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x13282 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x13281};
        GList* x13283 = x28639;
        GList* x13284 = g_list_next(x13283);
        x28639 = x13284;
        double x13286 = x13282->PS_SUPPLYCOST;
        double x13287 = x28646;
        int x13288 = x13286<(x13287);
        if(x13288) {
          x28646 = x13286;
          x28643 = x13282;
        };
      };
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28664 = x28643;
      GList* x28665 = *(x28634);
      void* x28666 = g_list_nth_data(x28665, 0);
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28667 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x28666};
      int x28668 = x28667->P_PARTKEY;
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x28669 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x28669, 0, 1 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
      x28669->key = x28668; x28669->wnd = x28664;
      g_tree_insert(x43635, x28669, x28669);
    };
    while(1) {
      
      int x4948 = x43636;
      int x816 = !(x4948);
      /* VAR */ int ite38144 = 0;
      if(x816) {
        int x44813 = g_tree_nnodes(x43635);
        int x44814 = x44813!=(0);
        ite38144 = x44814;
      } else {
        
        ite38144 = 0;
      };
      int x34800 = ite38144;
      if (!(x34800)) break; 
      
      void* x13309 = NULL;
      void** x13317 = &(x13309);
      g_tree_foreach(x43635, x13316, x13317);
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x13319 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*){x13309};
      int x13320 = g_tree_remove(x43635, x13319);
      int x4956 = x43637;
      int x826 = x4956>=(100);
      if(x826) {
        x43636 = 1;
      } else {
        
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x828 = x13319->wnd;
        double x829 = x828->S_ACCTBAL;
        char* x830 = x828->S_NAME;
        char* x832 = x828->N_NAME;
        int x834 = x828->P_PARTKEY;
        char* x835 = x828->P_MFGR;
        char* x837 = x828->S_ADDRESS;
        char* x839 = x828->S_PHONE;
        char* x841 = x828->S_COMMENT;
        printf("%.2f|%s|%s|%d|%s|%s|%s|%s\n", x829, x830, x832, x834, x835, x837, x839, x841);
        int x4976 = x43637;
        int x845 = x4976+(1);
        x43637 = x845;
      };
    };
    int x44848 = x43637;
    printf("(%d rows)\n", x44848);
    struct timeval* x44850 = &x43546;
    gettimeofday(x44850, NULL);
    struct timeval* x44852 = &x43542;
    struct timeval* x44853 = &x43546;
    struct timeval* x44854 = &x43544;
    long x44855 = timeval_subtract(x44852, x44853, x44854);
    printf("Generated code run in %ld milliseconds.\n", x44855);
  };
}
/* ----------- FUNCTIONS ----------- */
int x43491(void* x10346) {
  int x10347 = g_direct_hash(x10346);
  return x10347; 
}

int x43494(void* x10349, void* x10350) {
  int x10351 = g_direct_equal(x10349, x10350);
  return x10351; 
}

int x43501(void* x10356) {
  int x10357 = g_direct_hash(x10356);
  return x10357; 
}

int x43504(void* x10359, void* x10360) {
  int x10361 = g_direct_equal(x10359, x10360);
  return x10361; 
}

int x43511(void* x10366) {
  int x10367 = g_direct_hash(x10366);
  return x10367; 
}

int x43514(void* x10369, void* x10370) {
  int x10371 = g_direct_equal(x10369, x10370);
  return x10371; 
}

int x43521(void* x10376) {
  int x10377 = g_direct_hash(x10376);
  return x10377; 
}

int x43524(void* x10379, void* x10380) {
  int x10381 = g_direct_equal(x10379, x10380);
  return x10381; 
}

int x43531(void* x10386) {
  int x10387 = g_direct_hash(x10386);
  return x10387; 
}

int x43534(void* x10389, void* x10390) {
  int x10391 = g_direct_equal(x10389, x10390);
  return x10391; 
}

int x43594(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x291, struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x292) {
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x293 = x291->wnd;
  double x294 = x293->S_ACCTBAL;
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x295 = x292->wnd;
  double x296 = x295->S_ACCTBAL;
  int x297 = x294<(x296);
  /* VAR */ int ite33607 = 0;
  if(x297) {
    ite33607 = 1;
  } else {
    
    int x33609 = x294>(x296);
    /* VAR */ int ite33611 = 0;
    if(x33609) {
      ite33611 = -1;
    } else {
      
      char* x33613 = x293->N_NAME;
      char* x33614 = x295->N_NAME;
      int x33615 = strcmp(x33613, x33614);
      /* VAR */ int x33616 = x33615;
      int x33617 = x33616;
      int x33618 = x33617==(0);
      if(x33618) {
        char* x305 = x293->S_NAME;
        char* x306 = x295->S_NAME;
        int x24225 = strcmp(x305, x306);
        x33616 = x24225;
        int x309 = x33616;
        int x310 = x309==(0);
        if(x310) {
          int x311 = x293->P_PARTKEY;
          int x312 = x295->P_PARTKEY;
          int x313 = x311-(x312);
          x33616 = x313;
        };
      };
      int x33631 = x33616;
      ite33611 = x33631;
    };
    int x33610 = ite33611;
    ite33607 = x33610;
  };
  int x319 = ite33607;
  return x319; 
}

int x13316(void* x13310, void* x13311, void* x13312) {
  struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord** x13313 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord**){x13312};
  struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x13314 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*){x13311};
  pointer_assign(x13313, x13314);
  return 1; 
}
