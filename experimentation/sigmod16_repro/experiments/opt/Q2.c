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
  struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord;
  struct PARTSUPPRecord;
  
  struct REGIONRecord {
  int R_REGIONKEY;
  char* R_NAME;
  };
  
  struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord {
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* wnd;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  };
  
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord {
  int R_REGIONKEY;
  char* R_NAME;
  int P_PARTKEY;
  char* P_MFGR;
  char* P_TYPE;
  int P_SIZE;
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  int PS_PARTKEY;
  int PS_SUPPKEY;
  double PS_SUPPLYCOST;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  char* P_MFGR;
  char* P_TYPE;
  int P_SIZE;
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
  
  struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord {
  int maxSize;
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* array;
  };
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  double PS_SUPPLYCOST;
  };
  
  


int x38659(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x291, struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x292);

int x19767(void* x19761, void* x19762, void* x19763);
/* GLOBAL VARS */

struct timeval x14209;
int main(int argc, char** argv) {
  FILE* x14913 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x14914 = 0;
  int x14915 = x14914;
  int* x14916 = &x14915;
  int x14917 = fscanf(x14913, "%d", x14916);
  pclose(x14913);
  struct PARTRecord* x16501 = (struct PARTRecord*)malloc(x14915 * sizeof(struct PARTRecord));
  memset(x16501, 0, x14915 * sizeof(struct PARTRecord));
  int x14921 = O_RDONLY;
  int x14922 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x14921);
  struct stat x14923 = (struct stat){0};
  /* VAR */ struct stat x14924 = x14923;
  struct stat x14925 = x14924;
  struct stat* x14926 = &x14925;
  int x14927 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x14926);
  int x14929 = PROT_READ;
  int x14930 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x14926->st_size), x14929, x14930, x14922, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite31157 = 0;
    if((x5<(x14915))) {
      char x37484 = *x3;
      ite31157 = (x37484!=('\0'));
    } else {
      
      ite31157 = 0;
    };
    int x29871 = ite31157;
    if (!(x29871)) break; 
    
    /* VAR */ int x14938 = 0;
    int x14939 = x14938;
    int* x14940 = &x14939;
    char* x14941 = strntoi_unchecked(x3, x14940);
    x3 = x14941;
    char* x16525 = (char*)malloc(56 * sizeof(char));
    memset(x16525, 0, 56 * sizeof(char));
    /* VAR */ char* x14944 = x3;
    while(1) {
      
      char x14945 = *x3;
      /* VAR */ int ite31176 = 0;
      if((x14945!=('|'))) {
        char x37502 = *x3;
        ite31176 = (x37502!=('\n'));
      } else {
        
        ite31176 = 0;
      };
      int x29883 = ite31176;
      if (!(x29883)) break; 
      
      x3 += 1;
    };
    char* x14952 = x14944;
    int x14953 = x3 - x14952;
    char* x14954 = x14944;
    char* x14955 = strncpy(x16525, x14954, x14953);
    x3 += 1;
    char* x16543 = (char*)malloc(26 * sizeof(char));
    memset(x16543, 0, 26 * sizeof(char));
    /* VAR */ char* x14963 = x3;
    while(1) {
      
      char x14964 = *x3;
      /* VAR */ int ite31199 = 0;
      if((x14964!=('|'))) {
        char x37524 = *x3;
        ite31199 = (x37524!=('\n'));
      } else {
        
        ite31199 = 0;
      };
      int x29899 = ite31199;
      if (!(x29899)) break; 
      
      x3 += 1;
    };
    char* x14971 = x14963;
    int x14972 = x3 - x14971;
    char* x14973 = x14963;
    char* x14974 = strncpy(x16543, x14973, x14972);
    x3 += 1;
    char* x16561 = (char*)malloc(11 * sizeof(char));
    memset(x16561, 0, 11 * sizeof(char));
    /* VAR */ char* x14982 = x3;
    while(1) {
      
      char x14983 = *x3;
      /* VAR */ int ite31222 = 0;
      if((x14983!=('|'))) {
        char x37546 = *x3;
        ite31222 = (x37546!=('\n'));
      } else {
        
        ite31222 = 0;
      };
      int x29915 = ite31222;
      if (!(x29915)) break; 
      
      x3 += 1;
    };
    char* x14990 = x14982;
    int x14991 = x3 - x14990;
    char* x14992 = x14982;
    char* x14993 = strncpy(x16561, x14992, x14991);
    x3 += 1;
    char* x16579 = (char*)malloc(26 * sizeof(char));
    memset(x16579, 0, 26 * sizeof(char));
    /* VAR */ char* x15001 = x3;
    while(1) {
      
      char x15002 = *x3;
      /* VAR */ int ite31245 = 0;
      if((x15002!=('|'))) {
        char x37568 = *x3;
        ite31245 = (x37568!=('\n'));
      } else {
        
        ite31245 = 0;
      };
      int x29931 = ite31245;
      if (!(x29931)) break; 
      
      x3 += 1;
    };
    char* x15009 = x15001;
    int x15010 = x3 - x15009;
    char* x15011 = x15001;
    char* x15012 = strncpy(x16579, x15011, x15010);
    x3 += 1;
    /* VAR */ int x15019 = 0;
    int x15020 = x15019;
    int* x15021 = &x15020;
    char* x15022 = strntoi_unchecked(x3, x15021);
    x3 = x15022;
    char* x16602 = (char*)malloc(11 * sizeof(char));
    memset(x16602, 0, 11 * sizeof(char));
    /* VAR */ char* x15025 = x3;
    while(1) {
      
      char x15026 = *x3;
      /* VAR */ int ite31273 = 0;
      if((x15026!=('|'))) {
        char x37595 = *x3;
        ite31273 = (x37595!=('\n'));
      } else {
        
        ite31273 = 0;
      };
      int x29952 = ite31273;
      if (!(x29952)) break; 
      
      x3 += 1;
    };
    char* x15033 = x15025;
    int x15034 = x3 - x15033;
    char* x15035 = x15025;
    char* x15036 = strncpy(x16602, x15035, x15034);
    x3 += 1;
    /* VAR */ double x15043 = 0.0;
    double x15044 = x15043;
    double* x15045 = &x15044;
    char* x15046 = strntod_unchecked(x3, x15045);
    x3 = x15046;
    char* x16625 = (char*)malloc(24 * sizeof(char));
    memset(x16625, 0, 24 * sizeof(char));
    /* VAR */ char* x15049 = x3;
    while(1) {
      
      char x15050 = *x3;
      /* VAR */ int ite31301 = 0;
      if((x15050!=('|'))) {
        char x37622 = *x3;
        ite31301 = (x37622!=('\n'));
      } else {
        
        ite31301 = 0;
      };
      int x29973 = ite31301;
      if (!(x29973)) break; 
      
      x3 += 1;
    };
    char* x15057 = x15049;
    int x15058 = x3 - x15057;
    char* x15059 = x15049;
    char* x15060 = strncpy(x16625, x15059, x15058);
    x3 += 1;
    struct PARTRecord* x17449 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x17449, 0, 1 * sizeof(struct PARTRecord));
    x17449->P_PARTKEY = x14939; x17449->P_MFGR = x16543; x17449->P_TYPE = x16579; x17449->P_SIZE = x15020;
    int x59 = x4;
    struct PARTRecord x16645 = *x17449;
    *(x16501 + x59) = x16645;
    struct PARTRecord* x16647 = &(x16501[x59]);
    x17449 = x16647;
    int x61 = x4;
    x4 = (x61+(1));
  };
  FILE* x15073 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x15074 = 0;
  int x15075 = x15074;
  int* x15076 = &x15075;
  int x15077 = fscanf(x15073, "%d", x15076);
  pclose(x15073);
  struct PARTSUPPRecord* x16658 = (struct PARTSUPPRecord*)malloc(x15075 * sizeof(struct PARTSUPPRecord));
  memset(x16658, 0, x15075 * sizeof(struct PARTSUPPRecord));
  int x15081 = O_RDONLY;
  int x15082 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x15081);
  /* VAR */ struct stat x15083 = x14923;
  struct stat x15084 = x15083;
  struct stat* x15085 = &x15084;
  int x15086 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x15085);
  int x15088 = PROT_READ;
  int x15089 = MAP_PRIVATE;
  char* x67 = mmap(NULL, (x15085->st_size), x15088, x15089, x15082, 0);
  /* VAR */ int x68 = 0;
  while(1) {
    
    int x69 = x68;
    /* VAR */ int ite31351 = 0;
    if((x69<(x15075))) {
      char x37671 = *x67;
      ite31351 = (x37671!=('\0'));
    } else {
      
      ite31351 = 0;
    };
    int x30016 = ite31351;
    if (!(x30016)) break; 
    
    /* VAR */ int x15097 = 0;
    int x15098 = x15097;
    int* x15099 = &x15098;
    char* x15100 = strntoi_unchecked(x67, x15099);
    x67 = x15100;
    /* VAR */ int x15102 = 0;
    int x15103 = x15102;
    int* x15104 = &x15103;
    char* x15105 = strntoi_unchecked(x67, x15104);
    x67 = x15105;
    /* VAR */ int x15107 = 0;
    int x15108 = x15107;
    int* x15109 = &x15108;
    char* x15110 = strntoi_unchecked(x67, x15109);
    x67 = x15110;
    /* VAR */ double x15112 = 0.0;
    double x15113 = x15112;
    double* x15114 = &x15113;
    char* x15115 = strntod_unchecked(x67, x15114);
    x67 = x15115;
    char* x16696 = (char*)malloc(200 * sizeof(char));
    memset(x16696, 0, 200 * sizeof(char));
    /* VAR */ char* x15118 = x67;
    while(1) {
      
      char x15119 = *x67;
      /* VAR */ int ite31385 = 0;
      if((x15119!=('|'))) {
        char x37704 = *x67;
        ite31385 = (x37704!=('\n'));
      } else {
        
        ite31385 = 0;
      };
      int x30043 = ite31385;
      if (!(x30043)) break; 
      
      x67 += 1;
    };
    char* x15126 = x15118;
    int x15127 = x67 - x15126;
    char* x15128 = x15118;
    char* x15129 = strncpy(x16696, x15128, x15127);
    x67 += 1;
    struct PARTSUPPRecord* x17522 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x17522, 0, 1 * sizeof(struct PARTSUPPRecord));
    x17522->PS_PARTKEY = x15098; x17522->PS_SUPPKEY = x15103; x17522->PS_SUPPLYCOST = x15113;
    int x86 = x68;
    struct PARTSUPPRecord x16716 = *x17522;
    *(x16658 + x86) = x16716;
    struct PARTSUPPRecord* x16718 = &(x16658[x86]);
    x17522 = x16718;
    int x88 = x68;
    x68 = (x88+(1));
  };
  FILE* x15142 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x15143 = 0;
  int x15144 = x15143;
  int* x15145 = &x15144;
  int x15146 = fscanf(x15142, "%d", x15145);
  pclose(x15142);
  struct NATIONRecord* x16729 = (struct NATIONRecord*)malloc(x15144 * sizeof(struct NATIONRecord));
  memset(x16729, 0, x15144 * sizeof(struct NATIONRecord));
  int x15150 = O_RDONLY;
  int x15151 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x15150);
  /* VAR */ struct stat x15152 = x14923;
  struct stat x15153 = x15152;
  struct stat* x15154 = &x15153;
  int x15155 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x15154);
  int x15157 = PROT_READ;
  int x15158 = MAP_PRIVATE;
  char* x94 = mmap(NULL, (x15154->st_size), x15157, x15158, x15151, 0);
  /* VAR */ int x95 = 0;
  while(1) {
    
    int x96 = x95;
    /* VAR */ int ite31435 = 0;
    if((x96<(x15144))) {
      char x37753 = *x94;
      ite31435 = (x37753!=('\0'));
    } else {
      
      ite31435 = 0;
    };
    int x30086 = ite31435;
    if (!(x30086)) break; 
    
    /* VAR */ int x15166 = 0;
    int x15167 = x15166;
    int* x15168 = &x15167;
    char* x15169 = strntoi_unchecked(x94, x15168);
    x94 = x15169;
    char* x16752 = (char*)malloc(26 * sizeof(char));
    memset(x16752, 0, 26 * sizeof(char));
    /* VAR */ char* x15172 = x94;
    while(1) {
      
      char x15173 = *x94;
      /* VAR */ int ite31454 = 0;
      if((x15173!=('|'))) {
        char x37771 = *x94;
        ite31454 = (x37771!=('\n'));
      } else {
        
        ite31454 = 0;
      };
      int x30098 = ite31454;
      if (!(x30098)) break; 
      
      x94 += 1;
    };
    char* x15180 = x15172;
    int x15181 = x94 - x15180;
    char* x15182 = x15172;
    char* x15183 = strncpy(x16752, x15182, x15181);
    x94 += 1;
    /* VAR */ int x15190 = 0;
    int x15191 = x15190;
    int* x15192 = &x15191;
    char* x15193 = strntoi_unchecked(x94, x15192);
    x94 = x15193;
    char* x16775 = (char*)malloc(153 * sizeof(char));
    memset(x16775, 0, 153 * sizeof(char));
    /* VAR */ char* x15196 = x94;
    while(1) {
      
      char x15197 = *x94;
      /* VAR */ int ite31482 = 0;
      if((x15197!=('|'))) {
        char x37798 = *x94;
        ite31482 = (x37798!=('\n'));
      } else {
        
        ite31482 = 0;
      };
      int x30119 = ite31482;
      if (!(x30119)) break; 
      
      x94 += 1;
    };
    char* x15204 = x15196;
    int x15205 = x94 - x15204;
    char* x15206 = x15196;
    char* x15207 = strncpy(x16775, x15206, x15205);
    x94 += 1;
    struct NATIONRecord* x17603 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x17603, 0, 1 * sizeof(struct NATIONRecord));
    x17603->N_NATIONKEY = x15167; x17603->N_NAME = x16752; x17603->N_REGIONKEY = x15191;
    int x119 = x95;
    struct NATIONRecord x16795 = *x17603;
    *(x16729 + x119) = x16795;
    struct NATIONRecord* x16797 = &(x16729[x119]);
    x17603 = x16797;
    int x121 = x95;
    x95 = (x121+(1));
  };
  FILE* x15220 = popen("wc -l /mnt/ramdisk/tpch/sf8/region.tbl", "r");
  /* VAR */ int x15221 = 0;
  int x15222 = x15221;
  int* x15223 = &x15222;
  int x15224 = fscanf(x15220, "%d", x15223);
  pclose(x15220);
  struct REGIONRecord* x16808 = (struct REGIONRecord*)malloc(x15222 * sizeof(struct REGIONRecord));
  memset(x16808, 0, x15222 * sizeof(struct REGIONRecord));
  int x15228 = O_RDONLY;
  int x15229 = open("/mnt/ramdisk/tpch/sf8/region.tbl", x15228);
  /* VAR */ struct stat x15230 = x14923;
  struct stat x15231 = x15230;
  struct stat* x15232 = &x15231;
  int x15233 = stat("/mnt/ramdisk/tpch/sf8/region.tbl", x15232);
  int x15235 = PROT_READ;
  int x15236 = MAP_PRIVATE;
  char* x127 = mmap(NULL, (x15232->st_size), x15235, x15236, x15229, 0);
  /* VAR */ int x128 = 0;
  while(1) {
    
    int x129 = x128;
    /* VAR */ int ite31532 = 0;
    if((x129<(x15222))) {
      char x37847 = *x127;
      ite31532 = (x37847!=('\0'));
    } else {
      
      ite31532 = 0;
    };
    int x30162 = ite31532;
    if (!(x30162)) break; 
    
    /* VAR */ int x15244 = 0;
    int x15245 = x15244;
    int* x15246 = &x15245;
    char* x15247 = strntoi_unchecked(x127, x15246);
    x127 = x15247;
    char* x16831 = (char*)malloc(26 * sizeof(char));
    memset(x16831, 0, 26 * sizeof(char));
    /* VAR */ char* x15250 = x127;
    while(1) {
      
      char x15251 = *x127;
      /* VAR */ int ite31551 = 0;
      if((x15251!=('|'))) {
        char x37865 = *x127;
        ite31551 = (x37865!=('\n'));
      } else {
        
        ite31551 = 0;
      };
      int x30174 = ite31551;
      if (!(x30174)) break; 
      
      x127 += 1;
    };
    char* x15258 = x15250;
    int x15259 = x127 - x15258;
    char* x15260 = x15250;
    char* x15261 = strncpy(x16831, x15260, x15259);
    x127 += 1;
    char* x16849 = (char*)malloc(153 * sizeof(char));
    memset(x16849, 0, 153 * sizeof(char));
    /* VAR */ char* x15269 = x127;
    while(1) {
      
      char x15270 = *x127;
      /* VAR */ int ite31574 = 0;
      if((x15270!=('|'))) {
        char x37887 = *x127;
        ite31574 = (x37887!=('\n'));
      } else {
        
        ite31574 = 0;
      };
      int x30190 = ite31574;
      if (!(x30190)) break; 
      
      x127 += 1;
    };
    char* x15277 = x15269;
    int x15278 = x127 - x15277;
    char* x15279 = x15269;
    char* x15280 = strncpy(x16849, x15279, x15278);
    x127 += 1;
    struct REGIONRecord* x17679 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x17679, 0, 1 * sizeof(struct REGIONRecord));
    x17679->R_REGIONKEY = x15245; x17679->R_NAME = x16831;
    int x151 = x128;
    struct REGIONRecord x16869 = *x17679;
    *(x16808 + x151) = x16869;
    struct REGIONRecord* x16871 = &(x16808[x151]);
    x17679 = x16871;
    int x153 = x128;
    x128 = (x153+(1));
  };
  FILE* x15293 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x15294 = 0;
  int x15295 = x15294;
  int* x15296 = &x15295;
  int x15297 = fscanf(x15293, "%d", x15296);
  pclose(x15293);
  struct SUPPLIERRecord* x16882 = (struct SUPPLIERRecord*)malloc(x15295 * sizeof(struct SUPPLIERRecord));
  memset(x16882, 0, x15295 * sizeof(struct SUPPLIERRecord));
  int x15301 = O_RDONLY;
  int x15302 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x15301);
  /* VAR */ struct stat x15303 = x14923;
  struct stat x15304 = x15303;
  struct stat* x15305 = &x15304;
  int x15306 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x15305);
  int x15308 = PROT_READ;
  int x15309 = MAP_PRIVATE;
  char* x159 = mmap(NULL, (x15305->st_size), x15308, x15309, x15302, 0);
  /* VAR */ int x160 = 0;
  while(1) {
    
    int x161 = x160;
    /* VAR */ int ite31624 = 0;
    if((x161<(x15295))) {
      char x37936 = *x159;
      ite31624 = (x37936!=('\0'));
    } else {
      
      ite31624 = 0;
    };
    int x30233 = ite31624;
    if (!(x30233)) break; 
    
    /* VAR */ int x15317 = 0;
    int x15318 = x15317;
    int* x15319 = &x15318;
    char* x15320 = strntoi_unchecked(x159, x15319);
    x159 = x15320;
    char* x16905 = (char*)malloc(26 * sizeof(char));
    memset(x16905, 0, 26 * sizeof(char));
    /* VAR */ char* x15323 = x159;
    while(1) {
      
      char x15324 = *x159;
      /* VAR */ int ite31643 = 0;
      if((x15324!=('|'))) {
        char x37954 = *x159;
        ite31643 = (x37954!=('\n'));
      } else {
        
        ite31643 = 0;
      };
      int x30245 = ite31643;
      if (!(x30245)) break; 
      
      x159 += 1;
    };
    char* x15331 = x15323;
    int x15332 = x159 - x15331;
    char* x15333 = x15323;
    char* x15334 = strncpy(x16905, x15333, x15332);
    x159 += 1;
    char* x16923 = (char*)malloc(41 * sizeof(char));
    memset(x16923, 0, 41 * sizeof(char));
    /* VAR */ char* x15342 = x159;
    while(1) {
      
      char x15343 = *x159;
      /* VAR */ int ite31666 = 0;
      if((x15343!=('|'))) {
        char x37976 = *x159;
        ite31666 = (x37976!=('\n'));
      } else {
        
        ite31666 = 0;
      };
      int x30261 = ite31666;
      if (!(x30261)) break; 
      
      x159 += 1;
    };
    char* x15350 = x15342;
    int x15351 = x159 - x15350;
    char* x15352 = x15342;
    char* x15353 = strncpy(x16923, x15352, x15351);
    x159 += 1;
    /* VAR */ int x15360 = 0;
    int x15361 = x15360;
    int* x15362 = &x15361;
    char* x15363 = strntoi_unchecked(x159, x15362);
    x159 = x15363;
    char* x16946 = (char*)malloc(16 * sizeof(char));
    memset(x16946, 0, 16 * sizeof(char));
    /* VAR */ char* x15366 = x159;
    while(1) {
      
      char x15367 = *x159;
      /* VAR */ int ite31694 = 0;
      if((x15367!=('|'))) {
        char x38003 = *x159;
        ite31694 = (x38003!=('\n'));
      } else {
        
        ite31694 = 0;
      };
      int x30282 = ite31694;
      if (!(x30282)) break; 
      
      x159 += 1;
    };
    char* x15374 = x15366;
    int x15375 = x159 - x15374;
    char* x15376 = x15366;
    char* x15377 = strncpy(x16946, x15376, x15375);
    x159 += 1;
    /* VAR */ double x15384 = 0.0;
    double x15385 = x15384;
    double* x15386 = &x15385;
    char* x15387 = strntod_unchecked(x159, x15386);
    x159 = x15387;
    char* x16969 = (char*)malloc(102 * sizeof(char));
    memset(x16969, 0, 102 * sizeof(char));
    /* VAR */ char* x15390 = x159;
    while(1) {
      
      char x15391 = *x159;
      /* VAR */ int ite31722 = 0;
      if((x15391!=('|'))) {
        char x38030 = *x159;
        ite31722 = (x38030!=('\n'));
      } else {
        
        ite31722 = 0;
      };
      int x30303 = ite31722;
      if (!(x30303)) break; 
      
      x159 += 1;
    };
    char* x15398 = x15390;
    int x15399 = x159 - x15398;
    char* x15400 = x15390;
    char* x15401 = strncpy(x16969, x15400, x15399);
    x159 += 1;
    struct SUPPLIERRecord* x17801 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x17801, 0, 1 * sizeof(struct SUPPLIERRecord));
    x17801->S_SUPPKEY = x15318; x17801->S_NAME = x16905; x17801->S_ADDRESS = x16923; x17801->S_NATIONKEY = x15361; x17801->S_PHONE = x16946; x17801->S_ACCTBAL = x15385; x17801->S_COMMENT = x16969;
    int x201 = x160;
    struct SUPPLIERRecord x16989 = *x17801;
    *(x16882 + x201) = x16989;
    struct SUPPLIERRecord* x16991 = &(x16882[x201]);
    x17801 = x16991;
    int x203 = x160;
    x160 = (x203+(1));
  };
  int x208 = 0;
  for(; x208 < 1 ; x208 += 1) {
    
    struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x38544 = (struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1048576 * sizeof(struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x38544, 0, 1048576 * sizeof(struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    /* VAR */ int x38545 = 0;
    struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x38546 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(6400000 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x38546, 0, 6400000 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    /* VAR */ int x38547 = 0;
    while(1) {
      
      int x13939 = x38547;
      if (!((x13939<(6400000)))) break; 
      
      int x13941 = x38547;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x17823 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x17823, 0, 1 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      x17823->R_REGIONKEY = 0; x17823->R_NAME = ""; x17823->P_PARTKEY = 0; x17823->P_MFGR = ""; x17823->P_TYPE = ""; x17823->P_SIZE = 0; x17823->N_NATIONKEY = 0; x17823->N_NAME = ""; x17823->N_REGIONKEY = 0; x17823->S_SUPPKEY = 0; x17823->S_NAME = ""; x17823->S_ADDRESS = ""; x17823->S_NATIONKEY = 0; x17823->S_PHONE = ""; x17823->S_ACCTBAL = 0.0; x17823->S_COMMENT = ""; x17823->PS_PARTKEY = 0; x17823->PS_SUPPKEY = 0; x17823->PS_SUPPLYCOST = 0.0;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x17008 = *x17823;
      *(x38546 + x13941) = x17008;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x17010 = &(x38546[x13941]);
      x17823 = x17010;
      int x13944 = x38547;
      x38547 = (x13944+(1));
    };
    /* VAR */ int x38562 = 0;
    struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord** x38563 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord**)malloc(6400000 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*));
    memset(x38563, 0, 6400000 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*));
    /* VAR */ int x38564 = 0;
    while(1) {
      
      int x13951 = x38564;
      if (!((x13951<(6400000)))) break; 
      
      int x13953 = x38564;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x17022 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(256 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x17022, 0, 256 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      *(x38563 + x13953) = x17022;
      int x13956 = x38564;
      x38564 = (x13956+(1));
    };
    /* VAR */ int x38574 = 0;
    struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x38575 = (struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(6400000 * sizeof(struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x38575, 0, 6400000 * sizeof(struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    /* VAR */ int x38576 = 0;
    while(1) {
      
      int x13963 = x38576;
      if (!((x13963<(6400000)))) break; 
      
      int x13965 = x38576;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x13966 = x38563[x13965];
      struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x17853 = (struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x17853, 0, 1 * sizeof(struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      x17853->maxSize = 0; x17853->array = x13966;
      struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x17036 = *x17853;
      *(x38575 + x13965) = x17036;
      struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x17038 = &(x38575[x13965]);
      x17853 = x17038;
      int x13969 = x38576;
      x38576 = (x13969+(1));
    };
    /* VAR */ int x38592 = 0;
    struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x38593 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(48000000 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x38593, 0, 48000000 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
    /* VAR */ int x38594 = 0;
    while(1) {
      
      int x13976 = x38594;
      if (!((x13976<(48000000)))) break; 
      
      int x13978 = x38594;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x13979 = &(x38546[x13978]);
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x17871 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x17871, 0, 1 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
      x17871->wnd = x13979;
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord x17052 = *x17871;
      *(x38593 + x13978) = x17052;
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x17054 = &(x38593[x13978]);
      x17871 = x17054;
      int x13982 = x38594;
      x38594 = (x13982+(1));
    };
    /* VAR */ struct timeval x38610 = x14209;
    struct timeval x38611 = x38610;
    /* VAR */ struct timeval x38612 = x14209;
    struct timeval x38613 = x38612;
    /* VAR */ struct timeval x38614 = x14209;
    struct timeval x38615 = x38614;
    struct timeval* x38616 = &x38613;
    gettimeofday(x38616, NULL);
    /* VAR */ int x38618 = 0;
    int* x38699 = &(x38659);
    GTree* x38700 = g_tree_new(x38699);
    /* VAR */ int x38701 = 0;
    /* VAR */ int x38702 = 0;
    while(1) {
      
      int x38704 = x38618;
      if (!((x38704<(x15075)))) break; 
      
      int x4019 = x38618;
      struct PARTSUPPRecord* x416 = &(x16658[x4019]);
      int x418 = x416->PS_SUPPKEY;
      struct SUPPLIERRecord* x12449 = &(x16882[(x418-(1))]);
      if(((x12449->S_SUPPKEY)==(x418))) {
        int x6380 = x12449->S_SUPPKEY;
        if((x6380==(x418))) {
          int x1749 = x12449->S_NATIONKEY;
          int x1753 = x416->PS_PARTKEY;
          struct NATIONRecord* x12465 = &(x16729[(x1749-(0))]);
          if(((x12465->N_NATIONKEY)==(x1749))) {
            int x6396 = x12465->N_NATIONKEY;
            if((x6396==(x1749))) {
              int x1964 = x12465->N_REGIONKEY;
              struct PARTRecord* x12475 = &(x16501[(x1753-(1))]);
              /* VAR */ int ite32402 = 0;
              if(((x12475->P_SIZE)==(43))) {
                char* x38741 = x12475->P_TYPE;
                int x38742 = strlen(x38741);
                int x38743 = strlen("TIN");
                int x38744 = x38742-(x38743);
                char* x38745 = pointer_add(x38741, x38744);
                int x38746 = strncmp(x38745, "TIN", x38744);
                ite32402 = (x38746==(0));
              } else {
                
                ite32402 = 0;
              };
              int x30926 = ite32402;
              if(x30926) {
                if(((x12475->P_PARTKEY)==(x1753))) {
                  int x6412 = x12475->P_PARTKEY;
                  if((x6412==(x1753))) {
                    struct REGIONRecord* x12492 = &(x16808[(x1964-(0))]);
                    int x26583 = strcmp((x12492->R_NAME), "AFRICA");
                    if((x26583==(0))) {
                      if(((x12492->R_REGIONKEY)==(x1964))) {
                        int x6426 = x12492->R_REGIONKEY;
                        if((x6426==(x1964))) {
                          int x14085 = x38545;
                          struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x14086 = &(x38546[x14085]);
                          x14086->R_REGIONKEY = x6426;
                          x14086->R_NAME = (x12492->R_NAME);
                          x14086->P_PARTKEY = x6412;
                          x14086->P_MFGR = (x12475->P_MFGR);
                          x14086->P_TYPE = (x12475->P_TYPE);
                          x14086->P_SIZE = (x12475->P_SIZE);
                          x14086->N_NATIONKEY = x6396;
                          x14086->N_NAME = (x12465->N_NAME);
                          x14086->N_REGIONKEY = x1964;
                          x14086->S_SUPPKEY = x6380;
                          x14086->S_NAME = (x12449->S_NAME);
                          x14086->S_ADDRESS = (x12449->S_ADDRESS);
                          x14086->S_NATIONKEY = x1749;
                          x14086->S_PHONE = (x12449->S_PHONE);
                          x14086->S_ACCTBAL = (x12449->S_ACCTBAL);
                          x14086->S_COMMENT = (x12449->S_COMMENT);
                          x14086->PS_PARTKEY = x1753;
                          x14086->PS_SUPPKEY = x418;
                          x14086->PS_SUPPLYCOST = (x416->PS_SUPPLYCOST);
                          int x14106 = x38545;
                          x38545 = (x14106+(1));
                          int x7857 = (x14086->P_PARTKEY)%(1048576);
                          struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9361 = &(x38544[x7857]);
                          /* VAR */ struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* list9362 = x9361;
                          struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9363 = list9362;
                          /* VAR */ int ite32469 = 0;
                          if((x9363==(NULL))) {
                            ite32469 = 1;
                          } else {
                            
                            struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x38808 = x9363->array;
                            /* VAR */ int x38810 = 0;
                            if((x38808==(NULL))) {
                              x38810 = 1;
                            } else {
                              
                              char* x38813 = x38808->R_NAME;
                              /* VAR */ int x38815 = 0;
                              if((x38813==(NULL))) {
                                x38815 = 1;
                              } else {
                                
                                int x38818 = strcmp(x38813, "");
                                int x38819 = !(x38818);
                                x38815 = x38819;
                              };
                              int x38822 = x38815;
                              x38810 = x38822;
                            };
                            int x38825 = x38810;
                            ite32469 = x38825;
                          };
                          int x30981 = ite32469;
                          if(x30981) {
                            int x14117 = x38562;
                            struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x14118 = x38563[x14117];
                            int x14119 = x38562;
                            x38562 = (x14119+(1));
                            int x14122 = x38574;
                            struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x14123 = &(x38575[x14122]);
                            x14123->maxSize = 0;
                            x14123->array = x14118;
                            int x14126 = x38574;
                            x38574 = (x14126+(1));
                            list9362 = x14123;
                            struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9371 = list9362;
                            struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x17210 = *x9371;
                            *(x38544 + x7857) = x17210;
                            struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x17212 = &(x38544[x7857]);
                            list9362 = x17212;
                          };
                          struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9373 = list9362;
                          struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9374 = x9373->array;
                          int x9375 = x9373->maxSize;
                          struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x17217 = *x14086;
                          *(x9374 + x9375) = x17217;
                          struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x17219 = &(x9374[x9375]);
                          x14086 = x17219;
                          int x9377 = x9373->maxSize;
                          x9373->maxSize = (x9377+(1));
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
      int x4419 = x38618;
      x38618 = (x4419+(1));
    };
    int x28436 = 0;
    for(; x28436 < 1048576 ; x28436 += 1) {
      
      struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28437 = &(x38544[x28436]);
      /* VAR */ int ite32563 = 0;
      if((x28437!=(NULL))) {
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x38926 = x28437->array;
        /* VAR */ int x38928 = 0;
        if((x38926!=(NULL))) {
          char* x38930 = x38926->R_NAME;
          /* VAR */ int x38932 = 0;
          if((x38930!=(NULL))) {
            int x38934 = strcmp(x38930, "");
            x38932 = x38934;
          } else {
            
            x38932 = 0;
          };
          int x38938 = x38932;
          x38928 = x38938;
        } else {
          
          x38928 = 0;
        };
        int x38942 = x38928;
        ite32563 = x38942;
      } else {
        
        ite32563 = 0;
      };
      int x31057 = ite32563;
      if(x31057) {
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9786 = x28437->array;
        /* VAR */ struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* min9396 = ((struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*) { (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord**){x9786} });
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9397 = min9396;
        /* VAR */ double minValue9399 = (x9397->PS_SUPPLYCOST);
        int x9800 = x28437->maxSize;
        int x28419 = 0;
        for(; x28419 < x9800 ; x28419 += 1) {
          
          struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28420 = &(x9786[x28419]);
          double x28421 = x28420->PS_SUPPLYCOST;
          double x28422 = minValue9399;
          int x28423 = x28421<(x28422);
          if(x28423) {
            min9396 = x28420;
            minValue9399 = x28421;
          };
        };
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9409 = min9396;
        int x14167 = x38592;
        struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x14168 = &(x38593[x14167]);
        x14168->wnd = x9409;
        int x14170 = x38592;
        x38592 = (x14170+(1));
        g_tree_insert(x38700, x14168, x14168);
      };
    };
    while(1) {
      
      int x4436 = x38701;
      int x816 = !(x4436);
      /* VAR */ int ite32610 = 0;
      if(x816) {
        int x38985 = g_tree_nnodes(x38700);
        ite32610 = (x38985!=(0));
      } else {
        
        ite32610 = 0;
      };
      int x31095 = ite32610;
      if (!(x31095)) break; 
      
      void* x19760 = NULL;
      void** x19768 = &(x19760);
      g_tree_foreach(x38700, x19767, x19768);
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x19770 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*){x19760};
      int x19771 = g_tree_remove(x38700, x19770);
      int x4444 = x38702;
      if((x4444>=(100))) {
        x38701 = 1;
      } else {
        
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x828 = x19770->wnd;
        printf("%.2f|%s|%s|%d|%s|%s|%s|%s\n", (x828->S_ACCTBAL), (x828->S_NAME), (x828->N_NAME), (x828->P_PARTKEY), (x828->P_MFGR), (x828->S_ADDRESS), (x828->S_PHONE), (x828->S_COMMENT));
        int x4464 = x38702;
        x38702 = (x4464+(1));
      };
    };
    int x39020 = x38702;
    printf("(%d rows)\n", x39020);
    struct timeval* x39022 = &x38615;
    gettimeofday(x39022, NULL);
    struct timeval* x39024 = &x38611;
    struct timeval* x39025 = &x38615;
    struct timeval* x39026 = &x38613;
    long x39027 = timeval_subtract(x39024, x39025, x39026);
    printf("Generated code run in %ld milliseconds.\n", x39027);
  };
}
/* ----------- FUNCTIONS ----------- */
int x38659(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x291, struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x292) {
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x293 = x291->wnd;
  double x294 = x293->S_ACCTBAL;
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x295 = x292->wnd;
  double x296 = x295->S_ACCTBAL;
  /* VAR */ int ite30855 = 0;
  if((x294<(x296))) {
    ite30855 = 1;
  } else {
    
    /* VAR */ int ite30859 = 0;
    if((x294>(x296))) {
      ite30859 = -1;
    } else {
      
      int x30863 = strcmp((x293->N_NAME), (x295->N_NAME));
      /* VAR */ int x30864 = x30863;
      int x30865 = x30864;
      if((x30865==(0))) {
        int x26511 = strcmp((x293->S_NAME), (x295->S_NAME));
        x30864 = x26511;
        int x309 = x30864;
        if((x309==(0))) {
          x30864 = ((x293->P_PARTKEY)-((x295->P_PARTKEY)));
        };
      };
      int x30879 = x30864;
      ite30859 = x30879;
    };
    int x30858 = ite30859;
    ite30855 = x30858;
  };
  int x319 = ite30855;
  return x319; 
}

int x19767(void* x19761, void* x19762, void* x19763) {
  pointer_assign(((struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord**){x19763}), ((struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*){x19762}));
  return 1; 
}
