#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_Q20GRPRecord;
  struct NATIONRecord;
  struct PARTRecord;
  struct Q20GRPRecord;
  struct PARTRecord_PARTSUPPRecord;
  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord;
  
  struct AGGRecord_Q20GRPRecord {
  struct Q20GRPRecord* key;
  double* aggs;
  struct AGGRecord_Q20GRPRecord* next;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  struct NATIONRecord* next;
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
  struct PARTRecord* next;
  };
  
  struct Q20GRPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
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
  struct PARTRecord_PARTSUPPRecord* next;
  };
  
  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  struct Q20GRPRecord* key;
  double* aggs;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  };
  
  


int x61897(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x338, struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x339);

int x34176(void* x34170, void* x34171, void* x34172);
/* GLOBAL VARS */

struct timeval x25830;
int main(int argc, char** argv) {
  FILE* x26958 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x26959 = 0;
  int x26960 = x26959;
  int* x26961 = &x26960;
  int x26962 = fscanf(x26958, "%d", x26961);
  pclose(x26958);
  struct NATIONRecord* x29264 = (struct NATIONRecord*)malloc(x26960 * sizeof(struct NATIONRecord));
  memset(x29264, 0, x26960 * sizeof(struct NATIONRecord));
  int x26966 = O_RDONLY;
  int x26967 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x26966);
  struct stat x26968 = (struct stat){0};
  /* VAR */ struct stat x26969 = x26968;
  struct stat x26970 = x26969;
  struct stat* x26971 = &x26970;
  int x26972 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x26971);
  size_t x26973 = x26971->st_size;
  int x26974 = PROT_READ;
  int x26975 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x26973, x26974, x26975, x26967, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x26960);
    /* VAR */ int ite50691 = 0;
    if(x6) {
      char x59863 = *x3;
      int x59864 = x59863!=('\0');
      ite50691 = x59864;
    } else {
      
      ite50691 = 0;
    };
    int x48663 = ite50691;
    if (!(x48663)) break; 
    
    /* VAR */ int x26983 = 0;
    int x26984 = x26983;
    int* x26985 = &x26984;
    char* x26986 = strntoi_unchecked(x3, x26985);
    x3 = x26986;
    char* x29288 = (char*)malloc(26 * sizeof(char));
    memset(x29288, 0, 26 * sizeof(char));
    /* VAR */ char* x26989 = x3;
    while(1) {
      
      char x26990 = *x3;
      int x26991 = x26990!=('|');
      /* VAR */ int ite50710 = 0;
      if(x26991) {
        char x59881 = *x3;
        int x59882 = x59881!=('\n');
        ite50710 = x59882;
      } else {
        
        ite50710 = 0;
      };
      int x48675 = ite50710;
      if (!(x48675)) break; 
      
      x3 += 1;
    };
    char* x26997 = x26989;
    int x26998 = x3 - x26997;
    char* x26999 = x26989;
    char* x27000 = strncpy(x29288, x26999, x26998);
    x3 += 1;
    /* VAR */ int x27007 = 0;
    int x27008 = x27007;
    int* x27009 = &x27008;
    char* x27010 = strntoi_unchecked(x3, x27009);
    x3 = x27010;
    char* x29311 = (char*)malloc(153 * sizeof(char));
    memset(x29311, 0, 153 * sizeof(char));
    /* VAR */ char* x27013 = x3;
    while(1) {
      
      char x27014 = *x3;
      int x27015 = x27014!=('|');
      /* VAR */ int ite50738 = 0;
      if(x27015) {
        char x59908 = *x3;
        int x59909 = x59908!=('\n');
        ite50738 = x59909;
      } else {
        
        ite50738 = 0;
      };
      int x48696 = ite50738;
      if (!(x48696)) break; 
      
      x3 += 1;
    };
    char* x27021 = x27013;
    int x27022 = x3 - x27021;
    char* x27023 = x27013;
    char* x27024 = strncpy(x29311, x27023, x27022);
    x3 += 1;
    struct NATIONRecord* x30553 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x30553, 0, 1 * sizeof(struct NATIONRecord));
    x30553->N_NATIONKEY = x26984; x30553->N_NAME = x29288; x30553->N_REGIONKEY = x27008; x30553->N_COMMENT = x29311; x30553->next = NULL;
    int x28 = x4;
    int x38035 = x30553==(NULL);
    /* VAR */ int ite50761 = 0;
    if(x38035) {
      ite50761 = 1;
    } else {
      
      char* x59931 = x30553->N_NAME;
      int x59932 = x59931==(NULL);
      /* VAR */ int x59933 = 0;
      if(x59932) {
        x59933 = 1;
      } else {
        
        int x59936 = strcmp(x59931, "");
        int x59937 = !(x59936);
        x59933 = x59937;
      };
      int x59940 = x59933;
      ite50761 = x59940;
    };
    int x48712 = ite50761;
    if(x48712) {
      *(x29264 + x28) = (const struct NATIONRecord){0};
    } else {
      
      struct NATIONRecord x29333 = *x30553;
      *(x29264 + x28) = x29333;
      struct NATIONRecord* x29335 = &(x29264[x28]);
      x30553 = x29335;
    };
    int x30 = x4;
    int x31 = x30+(1);
    x4 = x31;
  };
  FILE* x27037 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x27038 = 0;
  int x27039 = x27038;
  int* x27040 = &x27039;
  int x27041 = fscanf(x27037, "%d", x27040);
  pclose(x27037);
  int* x29347 = (int*)malloc(x27039 * sizeof(int));
  memset(x29347, 0, x27039 * sizeof(int));
  char** x29348 = (char**)malloc(x27039 * sizeof(char*));
  memset(x29348, 0, x27039 * sizeof(char*));
  char** x29349 = (char**)malloc(x27039 * sizeof(char*));
  memset(x29349, 0, x27039 * sizeof(char*));
  int* x29350 = (int*)malloc(x27039 * sizeof(int));
  memset(x29350, 0, x27039 * sizeof(int));
  char** x29351 = (char**)malloc(x27039 * sizeof(char*));
  memset(x29351, 0, x27039 * sizeof(char*));
  double* x29352 = (double*)malloc(x27039 * sizeof(double));
  memset(x29352, 0, x27039 * sizeof(double));
  char** x29353 = (char**)malloc(x27039 * sizeof(char*));
  memset(x29353, 0, x27039 * sizeof(char*));
  int x27051 = O_RDONLY;
  int x27052 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x27051);
  /* VAR */ struct stat x27053 = x26968;
  struct stat x27054 = x27053;
  struct stat* x27055 = &x27054;
  int x27056 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x27055);
  size_t x27057 = x27055->st_size;
  int x27058 = PROT_READ;
  int x27059 = MAP_PRIVATE;
  char* x36 = mmap(NULL, x27057, x27058, x27059, x27052, 0);
  /* VAR */ int x37 = 0;
  while(1) {
    
    int x38 = x37;
    int x39 = x38<(x27039);
    /* VAR */ int ite50808 = 0;
    if(x39) {
      char x59982 = *x36;
      int x59983 = x59982!=('\0');
      ite50808 = x59983;
    } else {
      
      ite50808 = 0;
    };
    int x48750 = ite50808;
    if (!(x48750)) break; 
    
    /* VAR */ int x27067 = 0;
    int x27068 = x27067;
    int* x27069 = &x27068;
    char* x27070 = strntoi_unchecked(x36, x27069);
    x36 = x27070;
    char* x29376 = (char*)malloc(26 * sizeof(char));
    memset(x29376, 0, 26 * sizeof(char));
    /* VAR */ char* x27073 = x36;
    while(1) {
      
      char x27074 = *x36;
      int x27075 = x27074!=('|');
      /* VAR */ int ite50827 = 0;
      if(x27075) {
        char x60000 = *x36;
        int x60001 = x60000!=('\n');
        ite50827 = x60001;
      } else {
        
        ite50827 = 0;
      };
      int x48762 = ite50827;
      if (!(x48762)) break; 
      
      x36 += 1;
    };
    char* x27081 = x27073;
    int x27082 = x36 - x27081;
    char* x27083 = x27073;
    char* x27084 = strncpy(x29376, x27083, x27082);
    x36 += 1;
    char* x29394 = (char*)malloc(41 * sizeof(char));
    memset(x29394, 0, 41 * sizeof(char));
    /* VAR */ char* x27092 = x36;
    while(1) {
      
      char x27093 = *x36;
      int x27094 = x27093!=('|');
      /* VAR */ int ite50850 = 0;
      if(x27094) {
        char x60022 = *x36;
        int x60023 = x60022!=('\n');
        ite50850 = x60023;
      } else {
        
        ite50850 = 0;
      };
      int x48778 = ite50850;
      if (!(x48778)) break; 
      
      x36 += 1;
    };
    char* x27100 = x27092;
    int x27101 = x36 - x27100;
    char* x27102 = x27092;
    char* x27103 = strncpy(x29394, x27102, x27101);
    x36 += 1;
    /* VAR */ int x27110 = 0;
    int x27111 = x27110;
    int* x27112 = &x27111;
    char* x27113 = strntoi_unchecked(x36, x27112);
    x36 = x27113;
    char* x29417 = (char*)malloc(16 * sizeof(char));
    memset(x29417, 0, 16 * sizeof(char));
    /* VAR */ char* x27116 = x36;
    while(1) {
      
      char x27117 = *x36;
      int x27118 = x27117!=('|');
      /* VAR */ int ite50878 = 0;
      if(x27118) {
        char x60049 = *x36;
        int x60050 = x60049!=('\n');
        ite50878 = x60050;
      } else {
        
        ite50878 = 0;
      };
      int x48799 = ite50878;
      if (!(x48799)) break; 
      
      x36 += 1;
    };
    char* x27124 = x27116;
    int x27125 = x36 - x27124;
    char* x27126 = x27116;
    char* x27127 = strncpy(x29417, x27126, x27125);
    x36 += 1;
    /* VAR */ double x27134 = 0.0;
    double x27135 = x27134;
    double* x27136 = &x27135;
    char* x27137 = strntod_unchecked(x36, x27136);
    x36 = x27137;
    char* x29440 = (char*)malloc(102 * sizeof(char));
    memset(x29440, 0, 102 * sizeof(char));
    /* VAR */ char* x27140 = x36;
    while(1) {
      
      char x27141 = *x36;
      int x27142 = x27141!=('|');
      /* VAR */ int ite50906 = 0;
      if(x27142) {
        char x60076 = *x36;
        int x60077 = x60076!=('\n');
        ite50906 = x60077;
      } else {
        
        ite50906 = 0;
      };
      int x48820 = ite50906;
      if (!(x48820)) break; 
      
      x36 += 1;
    };
    char* x27148 = x27140;
    int x27149 = x36 - x27148;
    char* x27150 = x27140;
    char* x27151 = strncpy(x29440, x27150, x27149);
    x36 += 1;
    int x78 = x37;
    *(x29347 + x78) = x27068;
    *(x29348 + x78) = x29376;
    *(x29349 + x78) = x29394;
    *(x29350 + x78) = x27111;
    *(x29351 + x78) = x29417;
    *(x29352 + x78) = x27135;
    *(x29353 + x78) = x29440;
    int x80 = x37;
    int x81 = x80+(1);
    x37 = x81;
  };
  FILE* x27169 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x27170 = 0;
  int x27171 = x27170;
  int* x27172 = &x27171;
  int x27173 = fscanf(x27169, "%d", x27172);
  pclose(x27169);
  struct PARTRecord* x29475 = (struct PARTRecord*)malloc(x27171 * sizeof(struct PARTRecord));
  memset(x29475, 0, x27171 * sizeof(struct PARTRecord));
  int x27177 = O_RDONLY;
  int x27178 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x27177);
  /* VAR */ struct stat x27179 = x26968;
  struct stat x27180 = x27179;
  struct stat* x27181 = &x27180;
  int x27182 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x27181);
  size_t x27183 = x27181->st_size;
  int x27184 = PROT_READ;
  int x27185 = MAP_PRIVATE;
  char* x86 = mmap(NULL, x27183, x27184, x27185, x27178, 0);
  /* VAR */ int x87 = 0;
  while(1) {
    
    int x88 = x87;
    int x89 = x88<(x27171);
    /* VAR */ int ite50956 = 0;
    if(x89) {
      char x60125 = *x86;
      int x60126 = x60125!=('\0');
      ite50956 = x60126;
    } else {
      
      ite50956 = 0;
    };
    int x48863 = ite50956;
    if (!(x48863)) break; 
    
    /* VAR */ int x27193 = 0;
    int x27194 = x27193;
    int* x27195 = &x27194;
    char* x27196 = strntoi_unchecked(x86, x27195);
    x86 = x27196;
    char* x29498 = (char*)malloc(56 * sizeof(char));
    memset(x29498, 0, 56 * sizeof(char));
    /* VAR */ char* x27199 = x86;
    while(1) {
      
      char x27200 = *x86;
      int x27201 = x27200!=('|');
      /* VAR */ int ite50975 = 0;
      if(x27201) {
        char x60143 = *x86;
        int x60144 = x60143!=('\n');
        ite50975 = x60144;
      } else {
        
        ite50975 = 0;
      };
      int x48875 = ite50975;
      if (!(x48875)) break; 
      
      x86 += 1;
    };
    char* x27207 = x27199;
    int x27208 = x86 - x27207;
    char* x27209 = x27199;
    char* x27210 = strncpy(x29498, x27209, x27208);
    x86 += 1;
    char* x29516 = (char*)malloc(26 * sizeof(char));
    memset(x29516, 0, 26 * sizeof(char));
    /* VAR */ char* x27218 = x86;
    while(1) {
      
      char x27219 = *x86;
      int x27220 = x27219!=('|');
      /* VAR */ int ite50998 = 0;
      if(x27220) {
        char x60165 = *x86;
        int x60166 = x60165!=('\n');
        ite50998 = x60166;
      } else {
        
        ite50998 = 0;
      };
      int x48891 = ite50998;
      if (!(x48891)) break; 
      
      x86 += 1;
    };
    char* x27226 = x27218;
    int x27227 = x86 - x27226;
    char* x27228 = x27218;
    char* x27229 = strncpy(x29516, x27228, x27227);
    x86 += 1;
    char* x29534 = (char*)malloc(11 * sizeof(char));
    memset(x29534, 0, 11 * sizeof(char));
    /* VAR */ char* x27237 = x86;
    while(1) {
      
      char x27238 = *x86;
      int x27239 = x27238!=('|');
      /* VAR */ int ite51021 = 0;
      if(x27239) {
        char x60187 = *x86;
        int x60188 = x60187!=('\n');
        ite51021 = x60188;
      } else {
        
        ite51021 = 0;
      };
      int x48907 = ite51021;
      if (!(x48907)) break; 
      
      x86 += 1;
    };
    char* x27245 = x27237;
    int x27246 = x86 - x27245;
    char* x27247 = x27237;
    char* x27248 = strncpy(x29534, x27247, x27246);
    x86 += 1;
    char* x29552 = (char*)malloc(26 * sizeof(char));
    memset(x29552, 0, 26 * sizeof(char));
    /* VAR */ char* x27256 = x86;
    while(1) {
      
      char x27257 = *x86;
      int x27258 = x27257!=('|');
      /* VAR */ int ite51044 = 0;
      if(x27258) {
        char x60209 = *x86;
        int x60210 = x60209!=('\n');
        ite51044 = x60210;
      } else {
        
        ite51044 = 0;
      };
      int x48923 = ite51044;
      if (!(x48923)) break; 
      
      x86 += 1;
    };
    char* x27264 = x27256;
    int x27265 = x86 - x27264;
    char* x27266 = x27256;
    char* x27267 = strncpy(x29552, x27266, x27265);
    x86 += 1;
    /* VAR */ int x27274 = 0;
    int x27275 = x27274;
    int* x27276 = &x27275;
    char* x27277 = strntoi_unchecked(x86, x27276);
    x86 = x27277;
    char* x29575 = (char*)malloc(11 * sizeof(char));
    memset(x29575, 0, 11 * sizeof(char));
    /* VAR */ char* x27280 = x86;
    while(1) {
      
      char x27281 = *x86;
      int x27282 = x27281!=('|');
      /* VAR */ int ite51072 = 0;
      if(x27282) {
        char x60236 = *x86;
        int x60237 = x60236!=('\n');
        ite51072 = x60237;
      } else {
        
        ite51072 = 0;
      };
      int x48944 = ite51072;
      if (!(x48944)) break; 
      
      x86 += 1;
    };
    char* x27288 = x27280;
    int x27289 = x86 - x27288;
    char* x27290 = x27280;
    char* x27291 = strncpy(x29575, x27290, x27289);
    x86 += 1;
    /* VAR */ double x27298 = 0.0;
    double x27299 = x27298;
    double* x27300 = &x27299;
    char* x27301 = strntod_unchecked(x86, x27300);
    x86 = x27301;
    char* x29598 = (char*)malloc(24 * sizeof(char));
    memset(x29598, 0, 24 * sizeof(char));
    /* VAR */ char* x27304 = x86;
    while(1) {
      
      char x27305 = *x86;
      int x27306 = x27305!=('|');
      /* VAR */ int ite51100 = 0;
      if(x27306) {
        char x60263 = *x86;
        int x60264 = x60263!=('\n');
        ite51100 = x60264;
      } else {
        
        ite51100 = 0;
      };
      int x48965 = ite51100;
      if (!(x48965)) break; 
      
      x86 += 1;
    };
    char* x27312 = x27304;
    int x27313 = x86 - x27312;
    char* x27314 = x27304;
    char* x27315 = strncpy(x29598, x27314, x27313);
    x86 += 1;
    struct PARTRecord* x30842 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x30842, 0, 1 * sizeof(struct PARTRecord));
    x30842->P_PARTKEY = x27194; x30842->P_NAME = x29498; x30842->P_MFGR = x29516; x30842->P_BRAND = x29534; x30842->P_TYPE = x29552; x30842->P_SIZE = x27275; x30842->P_CONTAINER = x29575; x30842->P_RETAILPRICE = x27299; x30842->P_COMMENT = x29598; x30842->next = NULL;
    int x142 = x87;
    int x38327 = x30842==(NULL);
    /* VAR */ int ite51123 = 0;
    if(x38327) {
      ite51123 = 1;
    } else {
      
      char* x60286 = x30842->P_NAME;
      int x60287 = x60286==(NULL);
      /* VAR */ int x60288 = 0;
      if(x60287) {
        x60288 = 1;
      } else {
        
        int x60291 = strcmp(x60286, "");
        int x60292 = !(x60291);
        x60288 = x60292;
      };
      int x60295 = x60288;
      ite51123 = x60295;
    };
    int x48981 = ite51123;
    if(x48981) {
      *(x29475 + x142) = (const struct PARTRecord){0};
    } else {
      
      struct PARTRecord x29620 = *x30842;
      *(x29475 + x142) = x29620;
      struct PARTRecord* x29622 = &(x29475[x142]);
      x30842 = x29622;
    };
    int x144 = x87;
    int x145 = x144+(1);
    x87 = x145;
  };
  FILE* x27328 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x27329 = 0;
  int x27330 = x27329;
  int* x27331 = &x27330;
  int x27332 = fscanf(x27328, "%d", x27331);
  pclose(x27328);
  int* x29634 = (int*)malloc(x27330 * sizeof(int));
  memset(x29634, 0, x27330 * sizeof(int));
  int* x29635 = (int*)malloc(x27330 * sizeof(int));
  memset(x29635, 0, x27330 * sizeof(int));
  int* x29636 = (int*)malloc(x27330 * sizeof(int));
  memset(x29636, 0, x27330 * sizeof(int));
  double* x29637 = (double*)malloc(x27330 * sizeof(double));
  memset(x29637, 0, x27330 * sizeof(double));
  char** x29638 = (char**)malloc(x27330 * sizeof(char*));
  memset(x29638, 0, x27330 * sizeof(char*));
  int x27340 = O_RDONLY;
  int x27341 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x27340);
  /* VAR */ struct stat x27342 = x26968;
  struct stat x27343 = x27342;
  struct stat* x27344 = &x27343;
  int x27345 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x27344);
  size_t x27346 = x27344->st_size;
  int x27347 = PROT_READ;
  int x27348 = MAP_PRIVATE;
  char* x150 = mmap(NULL, x27346, x27347, x27348, x27341, 0);
  /* VAR */ int x151 = 0;
  while(1) {
    
    int x152 = x151;
    int x153 = x152<(x27330);
    /* VAR */ int ite51168 = 0;
    if(x153) {
      char x60335 = *x150;
      int x60336 = x60335!=('\0');
      ite51168 = x60336;
    } else {
      
      ite51168 = 0;
    };
    int x49017 = ite51168;
    if (!(x49017)) break; 
    
    /* VAR */ int x27356 = 0;
    int x27357 = x27356;
    int* x27358 = &x27357;
    char* x27359 = strntoi_unchecked(x150, x27358);
    x150 = x27359;
    /* VAR */ int x27361 = 0;
    int x27362 = x27361;
    int* x27363 = &x27362;
    char* x27364 = strntoi_unchecked(x150, x27363);
    x150 = x27364;
    /* VAR */ int x27366 = 0;
    int x27367 = x27366;
    int* x27368 = &x27367;
    char* x27369 = strntoi_unchecked(x150, x27368);
    x150 = x27369;
    /* VAR */ double x27371 = 0.0;
    double x27372 = x27371;
    double* x27373 = &x27372;
    char* x27374 = strntod_unchecked(x150, x27373);
    x150 = x27374;
    char* x29676 = (char*)malloc(200 * sizeof(char));
    memset(x29676, 0, 200 * sizeof(char));
    /* VAR */ char* x27377 = x150;
    while(1) {
      
      char x27378 = *x150;
      int x27379 = x27378!=('|');
      /* VAR */ int ite51202 = 0;
      if(x27379) {
        char x60368 = *x150;
        int x60369 = x60368!=('\n');
        ite51202 = x60369;
      } else {
        
        ite51202 = 0;
      };
      int x49044 = ite51202;
      if (!(x49044)) break; 
      
      x150 += 1;
    };
    char* x27385 = x27377;
    int x27386 = x150 - x27385;
    char* x27387 = x27377;
    char* x27388 = strncpy(x29676, x27387, x27386);
    x150 += 1;
    int x169 = x151;
    *(x29634 + x169) = x27357;
    *(x29635 + x169) = x27362;
    *(x29636 + x169) = x27367;
    *(x29637 + x169) = x27372;
    *(x29638 + x169) = x29676;
    int x171 = x151;
    int x172 = x171+(1);
    x151 = x172;
  };
  FILE* x27404 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x27405 = 0;
  int x27406 = x27405;
  int* x27407 = &x27406;
  int x27408 = fscanf(x27404, "%d", x27407);
  pclose(x27404);
  int* x29709 = (int*)malloc(x27406 * sizeof(int));
  memset(x29709, 0, x27406 * sizeof(int));
  int* x29710 = (int*)malloc(x27406 * sizeof(int));
  memset(x29710, 0, x27406 * sizeof(int));
  int* x29711 = (int*)malloc(x27406 * sizeof(int));
  memset(x29711, 0, x27406 * sizeof(int));
  int* x29712 = (int*)malloc(x27406 * sizeof(int));
  memset(x29712, 0, x27406 * sizeof(int));
  double* x29713 = (double*)malloc(x27406 * sizeof(double));
  memset(x29713, 0, x27406 * sizeof(double));
  double* x29714 = (double*)malloc(x27406 * sizeof(double));
  memset(x29714, 0, x27406 * sizeof(double));
  double* x29715 = (double*)malloc(x27406 * sizeof(double));
  memset(x29715, 0, x27406 * sizeof(double));
  double* x29716 = (double*)malloc(x27406 * sizeof(double));
  memset(x29716, 0, x27406 * sizeof(double));
  char* x29717 = (char*)malloc(x27406 * sizeof(char));
  memset(x29717, 0, x27406 * sizeof(char));
  char* x29718 = (char*)malloc(x27406 * sizeof(char));
  memset(x29718, 0, x27406 * sizeof(char));
  int* x29719 = (int*)malloc(x27406 * sizeof(int));
  memset(x29719, 0, x27406 * sizeof(int));
  int* x29720 = (int*)malloc(x27406 * sizeof(int));
  memset(x29720, 0, x27406 * sizeof(int));
  int* x29721 = (int*)malloc(x27406 * sizeof(int));
  memset(x29721, 0, x27406 * sizeof(int));
  char** x29722 = (char**)malloc(x27406 * sizeof(char*));
  memset(x29722, 0, x27406 * sizeof(char*));
  char** x29723 = (char**)malloc(x27406 * sizeof(char*));
  memset(x29723, 0, x27406 * sizeof(char*));
  char** x29724 = (char**)malloc(x27406 * sizeof(char*));
  memset(x29724, 0, x27406 * sizeof(char*));
  int x27427 = O_RDONLY;
  int x27428 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x27427);
  /* VAR */ struct stat x27429 = x26968;
  struct stat x27430 = x27429;
  struct stat* x27431 = &x27430;
  int x27432 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x27431);
  size_t x27433 = x27431->st_size;
  int x27434 = PROT_READ;
  int x27435 = MAP_PRIVATE;
  char* x177 = mmap(NULL, x27433, x27434, x27435, x27428, 0);
  /* VAR */ int x178 = 0;
  while(1) {
    
    int x179 = x178;
    int x180 = x179<(x27406);
    /* VAR */ int ite51265 = 0;
    if(x180) {
      char x60430 = *x177;
      int x60431 = x60430!=('\0');
      ite51265 = x60431;
    } else {
      
      ite51265 = 0;
    };
    int x49100 = ite51265;
    if (!(x49100)) break; 
    
    /* VAR */ int x27443 = 0;
    int x27444 = x27443;
    int* x27445 = &x27444;
    char* x27446 = strntoi_unchecked(x177, x27445);
    x177 = x27446;
    /* VAR */ int x27448 = 0;
    int x27449 = x27448;
    int* x27450 = &x27449;
    char* x27451 = strntoi_unchecked(x177, x27450);
    x177 = x27451;
    /* VAR */ int x27453 = 0;
    int x27454 = x27453;
    int* x27455 = &x27454;
    char* x27456 = strntoi_unchecked(x177, x27455);
    x177 = x27456;
    /* VAR */ int x27458 = 0;
    int x27459 = x27458;
    int* x27460 = &x27459;
    char* x27461 = strntoi_unchecked(x177, x27460);
    x177 = x27461;
    /* VAR */ double x27463 = 0.0;
    double x27464 = x27463;
    double* x27465 = &x27464;
    char* x27466 = strntod_unchecked(x177, x27465);
    x177 = x27466;
    /* VAR */ double x27468 = 0.0;
    double x27469 = x27468;
    double* x27470 = &x27469;
    char* x27471 = strntod_unchecked(x177, x27470);
    x177 = x27471;
    /* VAR */ double x27473 = 0.0;
    double x27474 = x27473;
    double* x27475 = &x27474;
    char* x27476 = strntod_unchecked(x177, x27475);
    x177 = x27476;
    /* VAR */ double x27478 = 0.0;
    double x27479 = x27478;
    double* x27480 = &x27479;
    char* x27481 = strntod_unchecked(x177, x27480);
    x177 = x27481;
    char x27483 = *x177;
    /* VAR */ char x27484 = x27483;
    x177 += 1;
    x177 += 1;
    char x27487 = x27484;
    char x27488 = *x177;
    /* VAR */ char x27489 = x27488;
    x177 += 1;
    x177 += 1;
    char x27492 = x27489;
    /* VAR */ int x27493 = 0;
    int x27494 = x27493;
    int* x27495 = &x27494;
    char* x27496 = strntoi_unchecked(x177, x27495);
    x177 = x27496;
    /* VAR */ int x27498 = 0;
    int x27499 = x27498;
    int* x27500 = &x27499;
    char* x27501 = strntoi_unchecked(x177, x27500);
    x177 = x27501;
    /* VAR */ int x27503 = 0;
    int x27504 = x27503;
    int* x27505 = &x27504;
    char* x27506 = strntoi_unchecked(x177, x27505);
    x177 = x27506;
    int x27508 = x27494*(10000);
    int x27509 = x27499*(100);
    int x27510 = x27508+(x27509);
    int x27511 = x27510+(x27504);
    /* VAR */ int x27512 = 0;
    int x27513 = x27512;
    int* x27514 = &x27513;
    char* x27515 = strntoi_unchecked(x177, x27514);
    x177 = x27515;
    /* VAR */ int x27517 = 0;
    int x27518 = x27517;
    int* x27519 = &x27518;
    char* x27520 = strntoi_unchecked(x177, x27519);
    x177 = x27520;
    /* VAR */ int x27522 = 0;
    int x27523 = x27522;
    int* x27524 = &x27523;
    char* x27525 = strntoi_unchecked(x177, x27524);
    x177 = x27525;
    int x27527 = x27513*(10000);
    int x27528 = x27518*(100);
    int x27529 = x27527+(x27528);
    int x27530 = x27529+(x27523);
    /* VAR */ int x27531 = 0;
    int x27532 = x27531;
    int* x27533 = &x27532;
    char* x27534 = strntoi_unchecked(x177, x27533);
    x177 = x27534;
    /* VAR */ int x27536 = 0;
    int x27537 = x27536;
    int* x27538 = &x27537;
    char* x27539 = strntoi_unchecked(x177, x27538);
    x177 = x27539;
    /* VAR */ int x27541 = 0;
    int x27542 = x27541;
    int* x27543 = &x27542;
    char* x27544 = strntoi_unchecked(x177, x27543);
    x177 = x27544;
    int x27546 = x27532*(10000);
    int x27547 = x27537*(100);
    int x27548 = x27546+(x27547);
    int x27549 = x27548+(x27542);
    char* x29849 = (char*)malloc(26 * sizeof(char));
    memset(x29849, 0, 26 * sizeof(char));
    /* VAR */ char* x27551 = x177;
    while(1) {
      
      char x27552 = *x177;
      int x27553 = x27552!=('|');
      /* VAR */ int ite51386 = 0;
      if(x27553) {
        char x60550 = *x177;
        int x60551 = x60550!=('\n');
        ite51386 = x60551;
      } else {
        
        ite51386 = 0;
      };
      int x49214 = ite51386;
      if (!(x49214)) break; 
      
      x177 += 1;
    };
    char* x27559 = x27551;
    int x27560 = x177 - x27559;
    char* x27561 = x27551;
    char* x27562 = strncpy(x29849, x27561, x27560);
    x177 += 1;
    char* x29867 = (char*)malloc(11 * sizeof(char));
    memset(x29867, 0, 11 * sizeof(char));
    /* VAR */ char* x27570 = x177;
    while(1) {
      
      char x27571 = *x177;
      int x27572 = x27571!=('|');
      /* VAR */ int ite51409 = 0;
      if(x27572) {
        char x60572 = *x177;
        int x60573 = x60572!=('\n');
        ite51409 = x60573;
      } else {
        
        ite51409 = 0;
      };
      int x49230 = ite51409;
      if (!(x49230)) break; 
      
      x177 += 1;
    };
    char* x27578 = x27570;
    int x27579 = x177 - x27578;
    char* x27580 = x27570;
    char* x27581 = strncpy(x29867, x27580, x27579);
    x177 += 1;
    char* x29885 = (char*)malloc(45 * sizeof(char));
    memset(x29885, 0, 45 * sizeof(char));
    /* VAR */ char* x27589 = x177;
    while(1) {
      
      char x27590 = *x177;
      int x27591 = x27590!=('|');
      /* VAR */ int ite51432 = 0;
      if(x27591) {
        char x60594 = *x177;
        int x60595 = x60594!=('\n');
        ite51432 = x60595;
      } else {
        
        ite51432 = 0;
      };
      int x49246 = ite51432;
      if (!(x49246)) break; 
      
      x177 += 1;
    };
    char* x27597 = x27589;
    int x27598 = x177 - x27597;
    char* x27599 = x27589;
    char* x27600 = strncpy(x29885, x27599, x27598);
    x177 += 1;
    int x221 = x178;
    *(x29709 + x221) = x27444;
    *(x29710 + x221) = x27449;
    *(x29711 + x221) = x27454;
    *(x29712 + x221) = x27459;
    *(x29713 + x221) = x27464;
    *(x29714 + x221) = x27469;
    *(x29715 + x221) = x27474;
    *(x29716 + x221) = x27479;
    *(x29717 + x221) = x27487;
    *(x29718 + x221) = x27492;
    *(x29719 + x221) = x27511;
    *(x29720 + x221) = x27530;
    *(x29721 + x221) = x27549;
    *(x29722 + x221) = x29849;
    *(x29723 + x221) = x29867;
    *(x29724 + x221) = x29885;
    int x223 = x178;
    int x224 = x223+(1);
    x178 = x224;
  };
  int x228 = 0;
  for(; x228 < 1 ; x228 += 1) {
    
    struct NATIONRecord* x61731 = (struct NATIONRecord*)malloc(1048576 * sizeof(struct NATIONRecord));
    memset(x61731, 0, 1048576 * sizeof(struct NATIONRecord));
    struct AGGRecord_Q20GRPRecord* x61732 = (struct AGGRecord_Q20GRPRecord*)malloc(1048576 * sizeof(struct AGGRecord_Q20GRPRecord));
    memset(x61732, 0, 1048576 * sizeof(struct AGGRecord_Q20GRPRecord));
    /* VAR */ int x61733 = 0;
    struct AGGRecord_Q20GRPRecord* x61734 = (struct AGGRecord_Q20GRPRecord*)malloc(1048576 * sizeof(struct AGGRecord_Q20GRPRecord));
    memset(x61734, 0, 1048576 * sizeof(struct AGGRecord_Q20GRPRecord));
    int x45608 = 0;
    for(; x45608 < 1048576 ; x45608 += 1) {
      
      *(x61734 + x45608) = (const struct AGGRecord_Q20GRPRecord){0};
    };
    struct PARTRecord_PARTSUPPRecord* x61740 = (struct PARTRecord_PARTSUPPRecord*)malloc(1048576 * sizeof(struct PARTRecord_PARTSUPPRecord));
    memset(x61740, 0, 1048576 * sizeof(struct PARTRecord_PARTSUPPRecord));
    struct PARTRecord* x61741 = (struct PARTRecord*)malloc(1048576 * sizeof(struct PARTRecord));
    memset(x61741, 0, 1048576 * sizeof(struct PARTRecord));
    /* VAR */ int x61742 = 0;
    struct PARTRecord_PARTSUPPRecord* x61743 = (struct PARTRecord_PARTSUPPRecord*)malloc(6400000 * sizeof(struct PARTRecord_PARTSUPPRecord));
    memset(x61743, 0, 6400000 * sizeof(struct PARTRecord_PARTSUPPRecord));
    /* VAR */ int x61744 = 0;
    while(1) {
      
      int x25377 = x61744;
      int x25378 = x25377<(6400000);
      if (!(x25378)) break; 
      
      int x25379 = x61744;
      struct PARTRecord_PARTSUPPRecord* x31172 = (struct PARTRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct PARTRecord_PARTSUPPRecord));
      memset(x31172, 0, 1 * sizeof(struct PARTRecord_PARTSUPPRecord));
      x31172->P_PARTKEY = 0; x31172->P_NAME = ""; x31172->P_MFGR = ""; x31172->P_BRAND = ""; x31172->P_TYPE = ""; x31172->P_SIZE = 0; x31172->P_CONTAINER = ""; x31172->P_RETAILPRICE = 0.0; x31172->P_COMMENT = ""; x31172->PS_PARTKEY = 0; x31172->PS_SUPPKEY = 0; x31172->PS_AVAILQTY = 0; x31172->PS_SUPPLYCOST = 0.0; x31172->PS_COMMENT = ""; x31172->next = NULL;
      int x38659 = x31172==(NULL);
      /* VAR */ int ite52528 = 0;
      if(x38659) {
        ite52528 = 1;
      } else {
        
        char* x61756 = x31172->P_NAME;
        int x61757 = x61756==(NULL);
        /* VAR */ int x61758 = 0;
        if(x61757) {
          x61758 = 1;
        } else {
          
          int x61761 = strcmp(x61756, "");
          int x61762 = !(x61761);
          x61758 = x61762;
        };
        int x61765 = x61758;
        ite52528 = x61765;
      };
      int x49997 = ite52528;
      if(x49997) {
        *(x61743 + x25379) = (const struct PARTRecord_PARTSUPPRecord){0};
      } else {
        
        struct PARTRecord_PARTSUPPRecord x29947 = *x31172;
        *(x61743 + x25379) = x29947;
        struct PARTRecord_PARTSUPPRecord* x29949 = &(x61743[x25379]);
        x31172 = x29949;
      };
      int x25382 = x61744;
      int x25383 = x25382+(1);
      x61744 = x25383;
    };
    /* VAR */ int x61778 = 0;
    struct Q20GRPRecord* x61779 = (struct Q20GRPRecord*)malloc(48000000 * sizeof(struct Q20GRPRecord));
    memset(x61779, 0, 48000000 * sizeof(struct Q20GRPRecord));
    /* VAR */ int x61780 = 0;
    while(1) {
      
      int x25389 = x61780;
      int x25390 = x25389<(48000000);
      if (!(x25390)) break; 
      
      int x25391 = x61780;
      struct Q20GRPRecord* x31192 = (struct Q20GRPRecord*)malloc(1 * sizeof(struct Q20GRPRecord));
      memset(x31192, 0, 1 * sizeof(struct Q20GRPRecord));
      x31192->PS_PARTKEY = 0; x31192->PS_SUPPKEY = 0; x31192->PS_AVAILQTY = 0;
      int x38682 = x31192==(NULL);
      if(x38682) {
        *(x61779 + x25391) = (const struct Q20GRPRecord){0};
      } else {
        
        struct Q20GRPRecord x29965 = *x31192;
        *(x61779 + x25391) = x29965;
        struct Q20GRPRecord* x29967 = &(x61779[x25391]);
        x31192 = x29967;
      };
      int x25394 = x61780;
      int x25395 = x25394+(1);
      x61780 = x25395;
    };
    /* VAR */ int x61798 = 0;
    double** x61799 = (double**)malloc(48000000 * sizeof(double*));
    memset(x61799, 0, 48000000 * sizeof(double*));
    /* VAR */ int x61800 = 0;
    while(1) {
      
      int x25401 = x61800;
      int x25402 = x25401<(48000000);
      if (!(x25402)) break; 
      
      int x25403 = x61800;
      double* x29980 = (double*)malloc(1 * sizeof(double));
      memset(x29980, 0, 1 * sizeof(double));
      *(x61799 + x25403) = x29980;
      int x25406 = x61800;
      int x25407 = x25406+(1);
      x61800 = x25407;
    };
    /* VAR */ int x61810 = 0;
    struct AGGRecord_Q20GRPRecord* x61811 = (struct AGGRecord_Q20GRPRecord*)malloc(48000000 * sizeof(struct AGGRecord_Q20GRPRecord));
    memset(x61811, 0, 48000000 * sizeof(struct AGGRecord_Q20GRPRecord));
    /* VAR */ int x61812 = 0;
    while(1) {
      
      int x25413 = x61812;
      int x25414 = x25413<(48000000);
      if (!(x25414)) break; 
      
      int x25415 = x61812;
      struct Q20GRPRecord* x25416 = &(x61779[x25415]);
      double* x25417 = x61799[x25415];
      struct AGGRecord_Q20GRPRecord* x31226 = (struct AGGRecord_Q20GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q20GRPRecord));
      memset(x31226, 0, 1 * sizeof(struct AGGRecord_Q20GRPRecord));
      x31226->key = x25416; x31226->aggs = x25417; x31226->next = NULL;
      int x38716 = x31226==(NULL);
      /* VAR */ int ite52593 = 0;
      if(x38716) {
        ite52593 = 1;
      } else {
        
        struct Q20GRPRecord* x61826 = x31226->key;
        int x61827 = x61826==(NULL);
        ite52593 = x61827;
      };
      int x50053 = ite52593;
      if(x50053) {
        *(x61811 + x25415) = (const struct AGGRecord_Q20GRPRecord){0};
      } else {
        
        struct AGGRecord_Q20GRPRecord x29997 = *x31226;
        *(x61811 + x25415) = x29997;
        struct AGGRecord_Q20GRPRecord* x29999 = &(x61811[x25415]);
        x31226 = x29999;
      };
      int x25420 = x61812;
      int x25421 = x25420+(1);
      x61812 = x25421;
    };
    /* VAR */ int x61840 = 0;
    struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x61841 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*)malloc(48000000 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
    memset(x61841, 0, 48000000 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
    /* VAR */ int x61842 = 0;
    while(1) {
      
      int x25427 = x61842;
      int x25428 = x25427<(48000000);
      if (!(x25428)) break; 
      
      int x25429 = x61842;
      struct Q20GRPRecord* x25430 = &(x61779[x25429]);
      double* x25431 = x61799[x25429];
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x31248 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
      memset(x31248, 0, 1 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
      x31248->N_NATIONKEY = 0; x31248->N_NAME = ""; x31248->N_REGIONKEY = 0; x31248->N_COMMENT = ""; x31248->key = x25430; x31248->aggs = x25431; x31248->S_SUPPKEY = 0; x31248->S_NAME = ""; x31248->S_ADDRESS = ""; x31248->S_NATIONKEY = 0; x31248->S_PHONE = ""; x31248->S_ACCTBAL = 0.0; x31248->S_COMMENT = "";
      int x38741 = x31248==(NULL);
      /* VAR */ int ite52624 = 0;
      if(x38741) {
        ite52624 = 1;
      } else {
        
        char* x61856 = x31248->N_NAME;
        int x61857 = x61856==(NULL);
        /* VAR */ int x61858 = 0;
        if(x61857) {
          x61858 = 1;
        } else {
          
          int x61861 = strcmp(x61856, "");
          int x61862 = !(x61861);
          x61858 = x61862;
        };
        int x61865 = x61858;
        ite52624 = x61865;
      };
      int x50077 = ite52624;
      if(x50077) {
        *(x61841 + x25429) = (const struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord){0};
      } else {
        
        struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord x30017 = *x31248;
        *(x61841 + x25429) = x30017;
        struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x30019 = &(x61841[x25429]);
        x31248 = x30019;
      };
      int x25434 = x61842;
      int x25435 = x25434+(1);
      x61842 = x25435;
    };
    /* VAR */ struct timeval x61878 = x25830;
    struct timeval x61879 = x61878;
    /* VAR */ struct timeval x61880 = x25830;
    struct timeval x61881 = x61880;
    /* VAR */ struct timeval x61882 = x25830;
    struct timeval x61883 = x61882;
    struct timeval* x61884 = &x61881;
    gettimeofday(x61884, NULL);
    /* VAR */ int x61886 = 0;
    /* VAR */ int x61887 = 0;
    /* VAR */ int x61888 = 0;
    /* VAR */ int x61889 = 0;
    /* VAR */ int x61890 = 0;
    int* x61903 = &(x61897);
    GTree* x61904 = g_tree_new(x61903);
    /* VAR */ int x61905 = 0;
    /* VAR */ int x61906 = 0;
    while(1) {
      
      int x61908 = x61889;
      int x61909 = x61908<(x26960);
      if (!(x61909)) break; 
      
      int x2799 = x61889;
      struct NATIONRecord* x359 = &(x29264[x2799]);
      char* x361 = x359->N_NAME;
      int x42965 = strcmp(x361, "JORDAN");
      int x42966 = x42965==(0);
      if(x42966) {
        int x363 = x359->N_NATIONKEY;
        int x5295 = x363%(1048576);
        struct NATIONRecord* x8017 = &(x61731[x5295]);
        /* VAR */ struct NATIONRecord* list8018 = x8017;
        struct NATIONRecord* x8019 = list8018;
        int x38797 = x8019==(NULL);
        /* VAR */ int ite52689 = 0;
        if(x38797) {
          ite52689 = 1;
        } else {
          
          char* x61925 = x8019->N_NAME;
          int x61926 = x61925==(NULL);
          /* VAR */ int x61927 = 0;
          if(x61926) {
            x61927 = 1;
          } else {
            
            int x61930 = strcmp(x61925, "");
            int x61931 = !(x61930);
            x61927 = x61931;
          };
          int x61934 = x61927;
          ite52689 = x61934;
        };
        int x50131 = ite52689;
        if(x50131) {
          list8018 = NULL;
          struct NATIONRecord* x8026 = list8018;
          int x38804 = x8026==(NULL);
          /* VAR */ int ite52704 = 0;
          if(x38804) {
            ite52704 = 1;
          } else {
            
            char* x61945 = x8026->N_NAME;
            int x61946 = x61945==(NULL);
            /* VAR */ int x61947 = 0;
            if(x61946) {
              x61947 = 1;
            } else {
              
              int x61950 = strcmp(x61945, "");
              int x61951 = !(x61950);
              x61947 = x61951;
            };
            int x61954 = x61947;
            ite52704 = x61954;
          };
          int x50137 = ite52704;
          if(x50137) {
            *(x61731 + x5295) = (const struct NATIONRecord){0};
          } else {
            
            struct NATIONRecord x30069 = *x8026;
            *(x61731 + x5295) = x30069;
            struct NATIONRecord* x30071 = &(x61731[x5295]);
            list8018 = x30071;
          };
        };
        int x38814 = x8017==(NULL);
        /* VAR */ int ite52722 = 0;
        if(x38814) {
          ite52722 = 1;
        } else {
          
          char* x61968 = x8017->N_NAME;
          int x61969 = x61968==(NULL);
          /* VAR */ int x61970 = 0;
          if(x61969) {
            x61970 = 1;
          } else {
            
            int x61973 = strcmp(x61968, "");
            int x61974 = !(x61973);
            x61970 = x61974;
          };
          int x61977 = x61970;
          ite52722 = x61977;
        };
        int x50146 = ite52722;
        if(x50146) {
          x359->next = NULL;
          int x38820 = x359==(NULL);
          /* VAR */ int ite52736 = 0;
          if(x38820) {
            ite52736 = 1;
          } else {
            
            int x61987 = x361==(NULL);
            /* VAR */ int x61988 = 0;
            if(x61987) {
              x61988 = 1;
            } else {
              
              int x61991 = strcmp(x361, "");
              int x61992 = !(x61991);
              x61988 = x61992;
            };
            int x61995 = x61988;
            ite52736 = x61995;
          };
          int x50151 = ite52736;
          if(x50151) {
            *(x61731 + x5295) = (const struct NATIONRecord){0};
          } else {
            
            struct NATIONRecord x30079 = *x359;
            *(x61731 + x5295) = x30079;
            struct NATIONRecord* x30081 = &(x61731[x5295]);
            x359 = x30081;
          };
          list8018 = x359;
        } else {
          
          struct NATIONRecord* x10656 = x8017->next;
          x359->next = x10656;
          x8017->next = x359;
        };
      };
      int x2807 = x61889;
      int x368 = x2807+(1);
      x61889 = x368;
    };
    while(1) {
      
      int x62013 = x61886;
      int x62014 = x62013<(x27171);
      if (!(x62014)) break; 
      
      int x2816 = x61886;
      struct PARTRecord* x377 = &(x29475[x2816]);
      char* x379 = x377->P_NAME;
      int x43031 = strlen("azure");
      int x43032 = strncmp(x379, "azure", x43031);
      int x43033 = x43032==(0);
      if(x43033) {
        int x381 = x377->P_PARTKEY;
        int x5321 = x381%(1048576);
        struct PARTRecord* x8052 = &(x61741[x5321]);
        /* VAR */ struct PARTRecord* list8053 = x8052;
        struct PARTRecord* x8054 = list8053;
        int x38850 = x8054==(NULL);
        /* VAR */ int ite52776 = 0;
        if(x38850) {
          ite52776 = 1;
        } else {
          
          char* x62031 = x8054->P_NAME;
          int x62032 = x62031==(NULL);
          /* VAR */ int x62033 = 0;
          if(x62032) {
            x62033 = 1;
          } else {
            
            int x62036 = strcmp(x62031, "");
            int x62037 = !(x62036);
            x62033 = x62037;
          };
          int x62040 = x62033;
          ite52776 = x62040;
        };
        int x50181 = ite52776;
        if(x50181) {
          list8053 = NULL;
          struct PARTRecord* x8061 = list8053;
          int x38857 = x8061==(NULL);
          /* VAR */ int ite52791 = 0;
          if(x38857) {
            ite52791 = 1;
          } else {
            
            char* x62051 = x8061->P_NAME;
            int x62052 = x62051==(NULL);
            /* VAR */ int x62053 = 0;
            if(x62052) {
              x62053 = 1;
            } else {
              
              int x62056 = strcmp(x62051, "");
              int x62057 = !(x62056);
              x62053 = x62057;
            };
            int x62060 = x62053;
            ite52791 = x62060;
          };
          int x50187 = ite52791;
          if(x50187) {
            *(x61741 + x5321) = (const struct PARTRecord){0};
          } else {
            
            struct PARTRecord x30112 = *x8061;
            *(x61741 + x5321) = x30112;
            struct PARTRecord* x30114 = &(x61741[x5321]);
            list8053 = x30114;
          };
        };
        int x38867 = x8052==(NULL);
        /* VAR */ int ite52809 = 0;
        if(x38867) {
          ite52809 = 1;
        } else {
          
          char* x62074 = x8052->P_NAME;
          int x62075 = x62074==(NULL);
          /* VAR */ int x62076 = 0;
          if(x62075) {
            x62076 = 1;
          } else {
            
            int x62079 = strcmp(x62074, "");
            int x62080 = !(x62079);
            x62076 = x62080;
          };
          int x62083 = x62076;
          ite52809 = x62083;
        };
        int x50196 = ite52809;
        if(x50196) {
          x377->next = NULL;
          int x38873 = x377==(NULL);
          /* VAR */ int ite52823 = 0;
          if(x38873) {
            ite52823 = 1;
          } else {
            
            int x62093 = x379==(NULL);
            /* VAR */ int x62094 = 0;
            if(x62093) {
              x62094 = 1;
            } else {
              
              int x62097 = strcmp(x379, "");
              int x62098 = !(x62097);
              x62094 = x62098;
            };
            int x62101 = x62094;
            ite52823 = x62101;
          };
          int x50201 = ite52823;
          if(x50201) {
            *(x61741 + x5321) = (const struct PARTRecord){0};
          } else {
            
            struct PARTRecord x30122 = *x377;
            *(x61741 + x5321) = x30122;
            struct PARTRecord* x30124 = &(x61741[x5321]);
            x377 = x30124;
          };
          list8053 = x377;
        } else {
          
          struct PARTRecord* x10690 = x8052->next;
          x377->next = x10690;
          x8052->next = x377;
        };
      };
      int x2824 = x61886;
      int x386 = x2824+(1);
      x61886 = x386;
    };
    while(1) {
      
      int x62119 = x61887;
      int x62120 = x62119<(x27330);
      if (!(x62120)) break; 
      
      int x2833 = x61887;
      int x18440 = x29634[x2833];
      int x5344 = x18440%(1048576);
      struct PARTRecord* x8084 = &(x61741[x5344]);
      int x38897 = x8084!=(NULL);
      /* VAR */ int ite52855 = 0;
      if(x38897) {
        char* x62128 = x8084->P_NAME;
        int x62129 = x62128!=(NULL);
        /* VAR */ int x62130 = 0;
        if(x62129) {
          int x62132 = strcmp(x62128, "");
          x62130 = x62132;
        } else {
          
          x62130 = 0;
        };
        int x62136 = x62130;
        ite52855 = x62136;
      } else {
        
        ite52855 = 0;
      };
      int x50223 = ite52855;
      if(x50223) {
        /* VAR */ struct PARTRecord* current9004 = x8084;
        while(1) {
          
          struct PARTRecord* x9006 = current9004;
          int x38905 = x9006!=(NULL);
          /* VAR */ int ite52871 = 0;
          if(x38905) {
            char* x62148 = x9006->P_NAME;
            int x62149 = x62148!=(NULL);
            /* VAR */ int x62150 = 0;
            if(x62149) {
              int x62152 = strcmp(x62148, "");
              x62150 = x62152;
            } else {
              
              x62150 = 0;
            };
            int x62156 = x62150;
            ite52871 = x62156;
          } else {
            
            ite52871 = 0;
          };
          int x50230 = ite52871;
          if (!(x50230)) break; 
          
          struct PARTRecord* x9008 = current9004;
          struct PARTRecord* x10756 = x9008->next;
          struct PARTRecord* x9010 = current9004;
          int x8137 = x9010->P_PARTKEY;
          int x8138 = x8137==(x18440);
          if(x8138) {
            char* x1158 = x9010->P_NAME;
            char* x1159 = x9010->P_MFGR;
            char* x1160 = x9010->P_BRAND;
            char* x1161 = x9010->P_TYPE;
            int x1162 = x9010->P_SIZE;
            char* x1163 = x9010->P_CONTAINER;
            double x1164 = x9010->P_RETAILPRICE;
            char* x1165 = x9010->P_COMMENT;
            int x18465 = x29635[x2833];
            int x18467 = x29636[x2833];
            double x18469 = x29637[x2833];
            char* x18471 = x29638[x2833];
            int x25552 = x61742;
            struct PARTRecord_PARTSUPPRecord* x25553 = &(x61743[x25552]);
            x25553->P_PARTKEY = x8137;
            x25553->P_NAME = x1158;
            x25553->P_MFGR = x1159;
            x25553->P_BRAND = x1160;
            x25553->P_TYPE = x1161;
            x25553->P_SIZE = x1162;
            x25553->P_CONTAINER = x1163;
            x25553->P_RETAILPRICE = x1164;
            x25553->P_COMMENT = x1165;
            x25553->PS_PARTKEY = x18440;
            x25553->PS_SUPPKEY = x18465;
            x25553->PS_AVAILQTY = x18467;
            x25553->PS_SUPPLYCOST = x18469;
            x25553->PS_COMMENT = x18471;
            x25553->next = NULL;
            int x25569 = x61742;
            int x25570 = x25569+(1);
            x61742 = x25570;
            int x418 = x25553->PS_PARTKEY;
            int x5370 = x418%(1048576);
            struct PARTRecord_PARTSUPPRecord* x8110 = &(x61740[x5370]);
            /* VAR */ struct PARTRecord_PARTSUPPRecord* list8111 = x8110;
            struct PARTRecord_PARTSUPPRecord* x8112 = list8111;
            int x38952 = x8112==(NULL);
            /* VAR */ int ite52926 = 0;
            if(x38952) {
              ite52926 = 1;
            } else {
              
              char* x62208 = x8112->P_NAME;
              int x62209 = x62208==(NULL);
              /* VAR */ int x62210 = 0;
              if(x62209) {
                x62210 = 1;
              } else {
                
                int x62213 = strcmp(x62208, "");
                int x62214 = !(x62213);
                x62210 = x62214;
              };
              int x62217 = x62210;
              ite52926 = x62217;
            };
            int x50276 = ite52926;
            if(x50276) {
              list8111 = NULL;
              struct PARTRecord_PARTSUPPRecord* x8119 = list8111;
              int x38959 = x8119==(NULL);
              /* VAR */ int ite52941 = 0;
              if(x38959) {
                ite52941 = 1;
              } else {
                
                char* x62228 = x8119->P_NAME;
                int x62229 = x62228==(NULL);
                /* VAR */ int x62230 = 0;
                if(x62229) {
                  x62230 = 1;
                } else {
                  
                  int x62233 = strcmp(x62228, "");
                  int x62234 = !(x62233);
                  x62230 = x62234;
                };
                int x62237 = x62230;
                ite52941 = x62237;
              };
              int x50282 = ite52941;
              if(x50282) {
                *(x61740 + x5370) = (const struct PARTRecord_PARTSUPPRecord){0};
              } else {
                
                struct PARTRecord_PARTSUPPRecord x30199 = *x8119;
                *(x61740 + x5370) = x30199;
                struct PARTRecord_PARTSUPPRecord* x30201 = &(x61740[x5370]);
                list8111 = x30201;
              };
            };
            int x38969 = x8110==(NULL);
            /* VAR */ int ite52959 = 0;
            if(x38969) {
              ite52959 = 1;
            } else {
              
              char* x62251 = x8110->P_NAME;
              int x62252 = x62251==(NULL);
              /* VAR */ int x62253 = 0;
              if(x62252) {
                x62253 = 1;
              } else {
                
                int x62256 = strcmp(x62251, "");
                int x62257 = !(x62256);
                x62253 = x62257;
              };
              int x62260 = x62253;
              ite52959 = x62260;
            };
            int x50291 = ite52959;
            if(x50291) {
              x25553->next = NULL;
              int x38975 = x25553==(NULL);
              /* VAR */ int ite52973 = 0;
              if(x38975) {
                ite52973 = 1;
              } else {
                
                char* x62270 = x25553->P_NAME;
                int x62271 = x62270==(NULL);
                /* VAR */ int x62272 = 0;
                if(x62271) {
                  x62272 = 1;
                } else {
                  
                  int x62275 = strcmp(x62270, "");
                  int x62276 = !(x62275);
                  x62272 = x62276;
                };
                int x62279 = x62272;
                ite52973 = x62279;
              };
              int x50296 = ite52973;
              if(x50296) {
                *(x61740 + x5370) = (const struct PARTRecord_PARTSUPPRecord){0};
              } else {
                
                struct PARTRecord_PARTSUPPRecord x30209 = *x25553;
                *(x61740 + x5370) = x30209;
                struct PARTRecord_PARTSUPPRecord* x30211 = &(x61740[x5370]);
                x25553 = x30211;
              };
              list8111 = x25553;
            } else {
              
              struct PARTRecord_PARTSUPPRecord* x10794 = x8110->next;
              x25553->next = x10794;
              x8110->next = x25553;
            };
          };
          current9004 = x10756;
        };
      };
      int x2885 = x61887;
      int x426 = x2885+(1);
      x61887 = x426;
    };
    while(1) {
      
      int x62298 = x61890;
      int x62299 = x62298<(x27406);
      if (!(x62299)) break; 
      
      int x2895 = x61890;
      int x18505 = x29719[x2895];
      int x439 = x18505>=(19960101);
      /* VAR */ int ite53005 = 0;
      if(x439) {
        int x62305 = x18505<(19970101);
        ite53005 = x62305;
      } else {
        
        ite53005 = 0;
      };
      int x50317 = ite53005;
      if(x50317) {
        int x18511 = x29710[x2895];
        int x5399 = x18511%(1048576);
        struct PARTRecord_PARTSUPPRecord* x8195 = &(x61740[x5399]);
        int x39006 = x8195!=(NULL);
        /* VAR */ int ite53018 = 0;
        if(x39006) {
          char* x62317 = x8195->P_NAME;
          int x62318 = x62317!=(NULL);
          /* VAR */ int x62319 = 0;
          if(x62318) {
            int x62321 = strcmp(x62317, "");
            x62319 = x62321;
          } else {
            
            x62319 = 0;
          };
          int x62325 = x62319;
          ite53018 = x62325;
        } else {
          
          ite53018 = 0;
        };
        int x50324 = ite53018;
        if(x50324) {
          /* VAR */ struct PARTRecord_PARTSUPPRecord* current9170 = x8195;
          while(1) {
            
            struct PARTRecord_PARTSUPPRecord* x9172 = current9170;
            int x39014 = x9172!=(NULL);
            /* VAR */ int ite53034 = 0;
            if(x39014) {
              char* x62337 = x9172->P_NAME;
              int x62338 = x62337!=(NULL);
              /* VAR */ int x62339 = 0;
              if(x62338) {
                int x62341 = strcmp(x62337, "");
                x62339 = x62341;
              } else {
                
                x62339 = 0;
              };
              int x62345 = x62339;
              ite53034 = x62345;
            } else {
              
              ite53034 = 0;
            };
            int x50331 = ite53034;
            if (!(x50331)) break; 
            
            struct PARTRecord_PARTSUPPRecord* x9174 = current9170;
            struct PARTRecord_PARTSUPPRecord* x10920 = x9174->next;
            struct PARTRecord_PARTSUPPRecord* x9176 = current9170;
            int x8303 = x9176->PS_PARTKEY;
            int x8304 = x8303==(x18511);
            /* VAR */ int ite53050 = 0;
            if(x8304) {
              int x62357 = x9176->PS_SUPPKEY;
              int x62358 = x29711[x2895];
              int x62359 = x62357==(x62358);
              ite53050 = x62359;
            } else {
              
              ite53050 = 0;
            };
            int x50338 = ite53050;
            if(x50338) {
              int x1287 = x9176->PS_SUPPKEY;
              int x1288 = x9176->PS_AVAILQTY;
              double x18552 = x29713[x2895];
              int x25628 = x61778;
              struct Q20GRPRecord* x25629 = &(x61779[x25628]);
              x25629->PS_PARTKEY = x8303;
              x25629->PS_SUPPKEY = x1287;
              x25629->PS_AVAILQTY = x1288;
              int x25633 = x61778;
              int x25634 = x25633+(1);
              x61778 = x25634;
              int x39039 = x25629->PS_PARTKEY;
              int x39041 = x25629->PS_SUPPKEY;
              int x39043 = x25629->PS_AVAILQTY;
              int x39045 = x39039+(x39041);
              int x39046 = x39045+(x39043);
              int x6481 = x39046&(1048575);
              struct AGGRecord_Q20GRPRecord* x8244 = &(x61734[x6481]);
              int x6483 = x61733;
              int x6484 = x6481>(x6483);
              if(x6484) {
                x61733 = x6481;
              };
              /* VAR */ struct AGGRecord_Q20GRPRecord* current9229 = x8244;
              /* VAR */ int found8254 = 0;
              while(1) {
                
                struct AGGRecord_Q20GRPRecord* x9232 = current9229;
                int x39057 = x9232!=(NULL);
                /* VAR */ int ite53088 = 0;
                if(x39057) {
                  struct Q20GRPRecord* x62394 = x9232->key;
                  int x62395 = x62394!=(NULL);
                  ite53088 = x62395;
                } else {
                  
                  ite53088 = 0;
                };
                int x50368 = ite53088;
                /* VAR */ int ite53097 = 0;
                if(x50368) {
                  int x62402 = found8254;
                  int x62403 = !(x62402);
                  ite53097 = x62403;
                } else {
                  
                  ite53097 = 0;
                };
                int x50370 = ite53097;
                if (!(x50370)) break; 
                
                struct AGGRecord_Q20GRPRecord* x9237 = current9229;
                struct Q20GRPRecord* x8262 = x9237->key;
                int x39066 = x8262->PS_PARTKEY;
                int x39067 = x39066==(x39039);
                int x39068 = x8262->PS_SUPPKEY;
                int x39069 = x39068==(x39041);
                int x39070 = x8262->PS_AVAILQTY;
                int x39071 = x39070==(x39043);
                /* VAR */ int ite53114 = 0;
                if(x39067) {
                  ite53114 = x39069;
                } else {
                  
                  ite53114 = 0;
                };
                int x50380 = ite53114;
                /* VAR */ int ite53121 = 0;
                if(x50380) {
                  ite53121 = x39071;
                } else {
                  
                  ite53121 = 0;
                };
                int x50382 = ite53121;
                if(x50382) {
                  found8254 = 1;
                } else {
                  
                  struct AGGRecord_Q20GRPRecord* x9243 = current9229;
                  struct AGGRecord_Q20GRPRecord* x10987 = x9243->next;
                  current9229 = x10987;
                };
              };
              int x8270 = found8254;
              int x8271 = !(x8270);
              /* VAR */ struct AGGRecord_Q20GRPRecord** ite50391 = 0;
              if(x8271) {
                ite50391 = NULL;
              } else {
                
                struct AGGRecord_Q20GRPRecord* x50393 = current9229;
                ite50391 = x50393;
              };
              struct AGGRecord_Q20GRPRecord** x8277 = ite50391;
              int x15525 = x8277!=(NULL);
              /* VAR */ struct AGGRecord_Q20GRPRecord* ite50399 = 0;
              if(x15525) {
                ite50399 = x8277;
              } else {
                
                int x50401 = x61798;
                double* x50402 = x61799[x50401];
                int x50403 = x61798;
                int x50404 = x50403+(1);
                x61798 = x50404;
                int x50406 = x61810;
                struct AGGRecord_Q20GRPRecord* x50407 = &(x61811[x50406]);
                x50407->key = x25629;
                x50407->aggs = x50402;
                x50407->next = NULL;
                int x50411 = x61810;
                int x50412 = x50411+(1);
                x61810 = x50412;
                int x50414 = x8244==(NULL);
                /* VAR */ int ite53160 = 0;
                if(x50414) {
                  ite53160 = 1;
                } else {
                  
                  struct Q20GRPRecord* x62463 = x8244->key;
                  int x62464 = x62463==(NULL);
                  ite53160 = x62464;
                };
                int x50416 = ite53160;
                if(x50416) {
                  x50407->next = NULL;
                  int x39104 = x50407==(NULL);
                  /* VAR */ int ite53172 = 0;
                  if(x39104) {
                    ite53172 = 1;
                  } else {
                    
                    struct Q20GRPRecord* x62474 = x50407->key;
                    int x62475 = x62474==(NULL);
                    ite53172 = x62475;
                  };
                  int x50421 = ite53172;
                  if(x50421) {
                    *(x61734 + x6481) = (const struct AGGRecord_Q20GRPRecord){0};
                  } else {
                    
                    struct AGGRecord_Q20GRPRecord x30310 = *x50407;
                    *(x61734 + x6481) = x30310;
                    struct AGGRecord_Q20GRPRecord* x30312 = &(x61734[x6481]);
                    x50407 = x30312;
                  };
                } else {
                  
                  struct AGGRecord_Q20GRPRecord* x11007 = x8244->next;
                  x50407->next = x11007;
                  x8244->next = x50407;
                };
                ite50399 = x50407;
              };
              struct AGGRecord_Q20GRPRecord* x6496 = ite50399;
              double* x506 = x6496->aggs;
              double x520 = x506[0];
              double x522 = x520+(x18552);
              *x506 = x522;
            };
            current9170 = x10920;
          };
        };
      };
      int x3044 = x61890;
      int x534 = x3044+(1);
      x61890 = x534;
    };
    int x62499 = x61733;
    int x62500 = x62499+(1);
    int x46205 = 0;
    for(; x46205 < x62500 ; x46205 += 1) {
      
      struct AGGRecord_Q20GRPRecord* x46206 = &(x61734[x46205]);
      /* VAR */ struct AGGRecord_Q20GRPRecord* x46207 = x46206;
      while(1) {
        
        struct AGGRecord_Q20GRPRecord* x9320 = x46207;
        int x39134 = x9320!=(NULL);
        /* VAR */ int ite53302 = 0;
        if(x39134) {
          struct Q20GRPRecord* x62597 = x9320->key;
          int x62598 = x62597!=(NULL);
          ite53302 = x62598;
        } else {
          
          ite53302 = 0;
        };
        int x50509 = ite53302;
        if (!(x50509)) break; 
        
        struct AGGRecord_Q20GRPRecord* x9322 = x46207;
        struct AGGRecord_Q20GRPRecord* x11065 = x9322->next;
        struct AGGRecord_Q20GRPRecord* x9324 = x46207;
        struct Q20GRPRecord* x8454 = x9324->key;
        int x8455 = x8454->PS_SUPPKEY;
        int x8456 = x8454->PS_AVAILQTY;
        double* x8457 = x9324->aggs;
        double x8458 = x8457[0];
        double x8459 = 0.5*(x8458);
        int x8461 = x8456>(x8459);
        if(x8461) {
          int x5471 = x8455%(1048576);
          struct AGGRecord_Q20GRPRecord* x8424 = &(x61732[x5471]);
          /* VAR */ struct AGGRecord_Q20GRPRecord* list8425 = x8424;
          struct AGGRecord_Q20GRPRecord* x8426 = list8425;
          int x39154 = x8426==(NULL);
          /* VAR */ int ite53327 = 0;
          if(x39154) {
            ite53327 = 1;
          } else {
            
            struct Q20GRPRecord* x62622 = x8426->key;
            int x62623 = x62622==(NULL);
            ite53327 = x62623;
          };
          int x50527 = ite53327;
          if(x50527) {
            list8425 = NULL;
            struct AGGRecord_Q20GRPRecord* x8433 = list8425;
            int x39161 = x8433==(NULL);
            /* VAR */ int ite53340 = 0;
            if(x39161) {
              ite53340 = 1;
            } else {
              
              struct Q20GRPRecord* x62634 = x8433->key;
              int x62635 = x62634==(NULL);
              ite53340 = x62635;
            };
            int x50533 = ite53340;
            if(x50533) {
              *(x61732 + x5471) = (const struct AGGRecord_Q20GRPRecord){0};
            } else {
              
              struct AGGRecord_Q20GRPRecord x30359 = *x8433;
              *(x61732 + x5471) = x30359;
              struct AGGRecord_Q20GRPRecord* x30361 = &(x61732[x5471]);
              list8425 = x30361;
            };
          };
          int x39171 = x8424==(NULL);
          /* VAR */ int ite53356 = 0;
          if(x39171) {
            ite53356 = 1;
          } else {
            
            struct Q20GRPRecord* x62649 = x8424->key;
            int x62650 = x62649==(NULL);
            ite53356 = x62650;
          };
          int x50542 = ite53356;
          if(x50542) {
            x9324->next = NULL;
            int x39177 = x9324==(NULL);
            /* VAR */ int ite53368 = 0;
            if(x39177) {
              ite53368 = 1;
            } else {
              
              struct Q20GRPRecord* x62660 = x9324->key;
              int x62661 = x62660==(NULL);
              ite53368 = x62661;
            };
            int x50547 = ite53368;
            if(x50547) {
              *(x61732 + x5471) = (const struct AGGRecord_Q20GRPRecord){0};
            } else {
              
              struct AGGRecord_Q20GRPRecord x30369 = *x9324;
              *(x61732 + x5471) = x30369;
              struct AGGRecord_Q20GRPRecord* x30371 = &(x61732[x5471]);
              x46207 = x30371;
            };
            list8425 = x9324;
          } else {
            
            struct AGGRecord_Q20GRPRecord* x11097 = x8424->next;
            x9324->next = x11097;
            x8424->next = x9324;
          };
        };
        x46207 = x11065;
      };
    };
    while(1) {
      
      int x62677 = x61888;
      int x62678 = x62677<(x27039);
      if (!(x62678)) break; 
      
      int x3068 = x61888;
      int x18672 = x29347[x3068];
      int x5492 = x18672%(1048576);
      struct AGGRecord_Q20GRPRecord* x8497 = &(x61732[x5492]);
      int x39201 = x8497!=(NULL);
      /* VAR */ int ite53397 = 0;
      if(x39201) {
        struct Q20GRPRecord* x62686 = x8497->key;
        int x62687 = x62686!=(NULL);
        ite53397 = x62687;
      } else {
        
        ite53397 = 0;
      };
      int x50567 = ite53397;
      if(x50567) {
        /* VAR */ struct AGGRecord_Q20GRPRecord* current9423 = x8497;
        while(1) {
          
          struct AGGRecord_Q20GRPRecord* x9425 = current9423;
          int x39209 = x9425!=(NULL);
          /* VAR */ int ite53411 = 0;
          if(x39209) {
            struct Q20GRPRecord* x62699 = x9425->key;
            int x62700 = x62699!=(NULL);
            ite53411 = x62700;
          } else {
            
            ite53411 = 0;
          };
          int x50574 = ite53411;
          if (!(x50574)) break; 
          
          struct AGGRecord_Q20GRPRecord* x9427 = current9423;
          struct AGGRecord_Q20GRPRecord* x11167 = x9427->next;
          struct AGGRecord_Q20GRPRecord* x9429 = current9423;
          struct Q20GRPRecord* x8556 = x9429->key;
          int x8557 = x8556->PS_SUPPKEY;
          int x8558 = x8557==(x18672);
          if(x8558) {
            double* x1445 = x9429->aggs;
            char* x18691 = x29348[x3068];
            char* x18693 = x29349[x3068];
            int x18695 = x29350[x3068];
            char* x18697 = x29351[x3068];
            double x18699 = x29352[x3068];
            char* x18701 = x29353[x3068];
            int x5512 = x18695%(1048576);
            struct NATIONRecord* x8517 = &(x61731[x5512]);
            int x39229 = x8517!=(NULL);
            /* VAR */ int ite53437 = 0;
            if(x39229) {
              char* x62724 = x8517->N_NAME;
              int x62725 = x62724!=(NULL);
              /* VAR */ int x62726 = 0;
              if(x62725) {
                int x62728 = strcmp(x62724, "");
                x62726 = x62728;
              } else {
                
                x62726 = 0;
              };
              int x62732 = x62726;
              ite53437 = x62732;
            } else {
              
              ite53437 = 0;
            };
            int x50593 = ite53437;
            if(x50593) {
              /* VAR */ struct NATIONRecord* current9459 = x8517;
              while(1) {
                
                struct NATIONRecord* x9461 = current9459;
                int x39237 = x9461!=(NULL);
                /* VAR */ int ite53453 = 0;
                if(x39237) {
                  char* x62744 = x9461->N_NAME;
                  int x62745 = x62744!=(NULL);
                  /* VAR */ int x62746 = 0;
                  if(x62745) {
                    int x62748 = strcmp(x62744, "");
                    x62746 = x62748;
                  } else {
                    
                    x62746 = 0;
                  };
                  int x62752 = x62746;
                  ite53453 = x62752;
                } else {
                  
                  ite53453 = 0;
                };
                int x50600 = ite53453;
                if (!(x50600)) break; 
                
                struct NATIONRecord* x9463 = current9459;
                struct NATIONRecord* x11202 = x9463->next;
                struct NATIONRecord* x9465 = current9459;
                int x8539 = x9465->N_NATIONKEY;
                int x8540 = x8539==(x18695);
                if(x8540) {
                  char* x1486 = x9465->N_NAME;
                  int x1487 = x9465->N_REGIONKEY;
                  char* x1488 = x9465->N_COMMENT;
                  int x25782 = x61840;
                  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x25783 = &(x61841[x25782]);
                  x25783->N_NATIONKEY = x8539;
                  x25783->N_NAME = x1486;
                  x25783->N_REGIONKEY = x1487;
                  x25783->N_COMMENT = x1488;
                  x25783->key = x8556;
                  x25783->aggs = x1445;
                  x25783->S_SUPPKEY = x18672;
                  x25783->S_NAME = x18691;
                  x25783->S_ADDRESS = x18693;
                  x25783->S_NATIONKEY = x18695;
                  x25783->S_PHONE = x18697;
                  x25783->S_ACCTBAL = x18699;
                  x25783->S_COMMENT = x18701;
                  int x25797 = x61840;
                  int x25798 = x25797+(1);
                  x61840 = x25798;
                  g_tree_insert(x61904, x25783, x25783);
                };
                current9459 = x11202;
              };
            };
          };
          current9423 = x11167;
        };
      };
      int x3164 = x61888;
      int x639 = x3164+(1);
      x61888 = x639;
    };
    while(1) {
      
      int x3168 = x61905;
      int x643 = !(x3168);
      /* VAR */ int ite53500 = 0;
      if(x643) {
        int x62795 = g_tree_nnodes(x61904);
        int x62796 = x62795!=(0);
        ite53500 = x62796;
      } else {
        
        ite53500 = 0;
      };
      int x50638 = ite53500;
      if (!(x50638)) break; 
      
      void* x34169 = NULL;
      void** x34177 = &(x34169);
      g_tree_foreach(x61904, x34176, x34177);
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x34179 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*){x34169};
      int x34180 = g_tree_remove(x61904, x34179);
      if(0) {
        x61905 = 1;
      } else {
        
        char* x656 = x34179->S_NAME;
        char* x658 = x34179->S_ADDRESS;
        printf("%s|%s\n", x656, x658);
        int x3186 = x61906;
        int x662 = x3186+(1);
        x61906 = x662;
      };
    };
    int x62821 = x61906;
    printf("(%d rows)\n", x62821);
    struct timeval* x62823 = &x61883;
    gettimeofday(x62823, NULL);
    struct timeval* x62825 = &x61879;
    struct timeval* x62826 = &x61883;
    struct timeval* x62827 = &x61881;
    long x62828 = timeval_subtract(x62825, x62826, x62827);
    printf("Generated code run in %ld milliseconds.\n", x62828);
  };
}
/* ----------- FUNCTIONS ----------- */
int x61897(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x338, struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x339) {
  char* x340 = x338->S_NAME;
  char* x341 = x339->S_NAME;
  int x42953 = strcmp(x340, x341);
  return x42953; 
}

int x34176(void* x34170, void* x34171, void* x34172) {
  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord** x34173 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord**){x34172};
  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x34174 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*){x34171};
  pointer_assign(x34173, x34174);
  return 1; 
}
