#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_String;
  struct LINEITEMRecord;
  struct PARTRecord;
  
  struct AGGRecord_String {
  char* key;
  double* aggs;
  };
  
  struct LINEITEMRecord {
  int L_PARTKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  int L_SHIPDATE;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  char* P_TYPE;
  };
  
  

/* GLOBAL VARS */

struct timeval x5611;
int main(int argc, char** argv) {
  FILE* x5904 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x5905 = 0;
  int x5906 = x5905;
  int* x5907 = &x5906;
  int x5908 = fscanf(x5904, "%d", x5907);
  pclose(x5904);
  struct LINEITEMRecord* x6854 = (struct LINEITEMRecord*)malloc(x5906 * sizeof(struct LINEITEMRecord));
  memset(x6854, 0, x5906 * sizeof(struct LINEITEMRecord));
  int x5912 = O_RDONLY;
  int x5913 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x5912);
  struct stat x5914 = (struct stat){0};
  /* VAR */ struct stat x5915 = x5914;
  struct stat x5916 = x5915;
  struct stat* x5917 = &x5916;
  int x5918 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x5917);
  int x5920 = PROT_READ;
  int x5921 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x5917->st_size), x5920, x5921, x5913, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite13906 = 0;
    if((x5<(x5906))) {
      char x15871 = *x3;
      ite13906 = (x15871!=('\0'));
    } else {
      
      ite13906 = 0;
    };
    int x13049 = ite13906;
    if (!(x13049)) break; 
    
    /* VAR */ int x5929 = 0;
    int x5930 = x5929;
    int* x5931 = &x5930;
    char* x5932 = strntoi_unchecked(x3, x5931);
    x3 = x5932;
    /* VAR */ int x5934 = 0;
    int x5935 = x5934;
    int* x5936 = &x5935;
    char* x5937 = strntoi_unchecked(x3, x5936);
    x3 = x5937;
    /* VAR */ int x5939 = 0;
    int x5940 = x5939;
    int* x5941 = &x5940;
    char* x5942 = strntoi_unchecked(x3, x5941);
    x3 = x5942;
    /* VAR */ int x5944 = 0;
    int x5945 = x5944;
    int* x5946 = &x5945;
    char* x5947 = strntoi_unchecked(x3, x5946);
    x3 = x5947;
    /* VAR */ double x5949 = 0.0;
    double x5950 = x5949;
    double* x5951 = &x5950;
    char* x5952 = strntod_unchecked(x3, x5951);
    x3 = x5952;
    /* VAR */ double x5954 = 0.0;
    double x5955 = x5954;
    double* x5956 = &x5955;
    char* x5957 = strntod_unchecked(x3, x5956);
    x3 = x5957;
    /* VAR */ double x5959 = 0.0;
    double x5960 = x5959;
    double* x5961 = &x5960;
    char* x5962 = strntod_unchecked(x3, x5961);
    x3 = x5962;
    /* VAR */ double x5964 = 0.0;
    double x5965 = x5964;
    double* x5966 = &x5965;
    char* x5967 = strntod_unchecked(x3, x5966);
    x3 = x5967;
    char x5969 = *x3;
    /* VAR */ char x5970 = x5969;
    x3 += 1;
    x3 += 1;
    char x5974 = *x3;
    /* VAR */ char x5975 = x5974;
    x3 += 1;
    x3 += 1;
    /* VAR */ int x5979 = 0;
    int x5980 = x5979;
    int* x5981 = &x5980;
    char* x5982 = strntoi_unchecked(x3, x5981);
    x3 = x5982;
    /* VAR */ int x5984 = 0;
    int x5985 = x5984;
    int* x5986 = &x5985;
    char* x5987 = strntoi_unchecked(x3, x5986);
    x3 = x5987;
    /* VAR */ int x5989 = 0;
    int x5990 = x5989;
    int* x5991 = &x5990;
    char* x5992 = strntoi_unchecked(x3, x5991);
    x3 = x5992;
    /* VAR */ int x5998 = 0;
    int x5999 = x5998;
    int* x6000 = &x5999;
    char* x6001 = strntoi_unchecked(x3, x6000);
    x3 = x6001;
    /* VAR */ int x6003 = 0;
    int x6004 = x6003;
    int* x6005 = &x6004;
    char* x6006 = strntoi_unchecked(x3, x6005);
    x3 = x6006;
    /* VAR */ int x6008 = 0;
    int x6009 = x6008;
    int* x6010 = &x6009;
    char* x6011 = strntoi_unchecked(x3, x6010);
    x3 = x6011;
    /* VAR */ int x6017 = 0;
    int x6018 = x6017;
    int* x6019 = &x6018;
    char* x6020 = strntoi_unchecked(x3, x6019);
    x3 = x6020;
    /* VAR */ int x6022 = 0;
    int x6023 = x6022;
    int* x6024 = &x6023;
    char* x6025 = strntoi_unchecked(x3, x6024);
    x3 = x6025;
    /* VAR */ int x6027 = 0;
    int x6028 = x6027;
    int* x6029 = &x6028;
    char* x6030 = strntoi_unchecked(x3, x6029);
    x3 = x6030;
    char* x6980 = (char*)malloc(26 * sizeof(char));
    memset(x6980, 0, 26 * sizeof(char));
    /* VAR */ char* x6037 = x3;
    while(1) {
      
      char x6038 = *x3;
      /* VAR */ int ite14027 = 0;
      if((x6038!=('|'))) {
        char x15991 = *x3;
        ite14027 = (x15991!=('\n'));
      } else {
        
        ite14027 = 0;
      };
      int x13163 = ite14027;
      if (!(x13163)) break; 
      
      x3 += 1;
    };
    char* x6045 = x6037;
    int x6046 = x3 - x6045;
    char* x6047 = x6037;
    char* x6048 = strncpy(x6980, x6047, x6046);
    x3 += 1;
    char* x6998 = (char*)malloc(11 * sizeof(char));
    memset(x6998, 0, 11 * sizeof(char));
    /* VAR */ char* x6056 = x3;
    while(1) {
      
      char x6057 = *x3;
      /* VAR */ int ite14050 = 0;
      if((x6057!=('|'))) {
        char x16013 = *x3;
        ite14050 = (x16013!=('\n'));
      } else {
        
        ite14050 = 0;
      };
      int x13179 = ite14050;
      if (!(x13179)) break; 
      
      x3 += 1;
    };
    char* x6064 = x6056;
    int x6065 = x3 - x6064;
    char* x6066 = x6056;
    char* x6067 = strncpy(x6998, x6066, x6065);
    x3 += 1;
    char* x7016 = (char*)malloc(45 * sizeof(char));
    memset(x7016, 0, 45 * sizeof(char));
    /* VAR */ char* x6075 = x3;
    while(1) {
      
      char x6076 = *x3;
      /* VAR */ int ite14073 = 0;
      if((x6076!=('|'))) {
        char x16035 = *x3;
        ite14073 = (x16035!=('\n'));
      } else {
        
        ite14073 = 0;
      };
      int x13195 = ite14073;
      if (!(x13195)) break; 
      
      x3 += 1;
    };
    char* x6083 = x6075;
    int x6084 = x3 - x6083;
    char* x6085 = x6075;
    char* x6086 = strncpy(x7016, x6085, x6084);
    x3 += 1;
    struct LINEITEMRecord* x7506 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x7506, 0, 1 * sizeof(struct LINEITEMRecord));
    x7506->L_PARTKEY = x5935; x7506->L_EXTENDEDPRICE = x5955; x7506->L_DISCOUNT = x5960; x7506->L_SHIPDATE = (((x5980*(10000))+((x5985*(100))))+(x5990));
    int x47 = x4;
    struct LINEITEMRecord x7036 = *x7506;
    *(x6854 + x47) = x7036;
    struct LINEITEMRecord* x7038 = &(x6854[x47]);
    x7506 = x7038;
    int x49 = x4;
    x4 = (x49+(1));
  };
  FILE* x6099 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x6100 = 0;
  int x6101 = x6100;
  int* x6102 = &x6101;
  int x6103 = fscanf(x6099, "%d", x6102);
  pclose(x6099);
  struct PARTRecord* x7049 = (struct PARTRecord*)malloc(x6101 * sizeof(struct PARTRecord));
  memset(x7049, 0, x6101 * sizeof(struct PARTRecord));
  int x6107 = O_RDONLY;
  int x6108 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x6107);
  /* VAR */ struct stat x6109 = x5914;
  struct stat x6110 = x6109;
  struct stat* x6111 = &x6110;
  int x6112 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x6111);
  int x6114 = PROT_READ;
  int x6115 = MAP_PRIVATE;
  char* x55 = mmap(NULL, (x6111->st_size), x6114, x6115, x6108, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    /* VAR */ int ite14123 = 0;
    if((x57<(x6101))) {
      char x16084 = *x55;
      ite14123 = (x16084!=('\0'));
    } else {
      
      ite14123 = 0;
    };
    int x13238 = ite14123;
    if (!(x13238)) break; 
    
    /* VAR */ int x6123 = 0;
    int x6124 = x6123;
    int* x6125 = &x6124;
    char* x6126 = strntoi_unchecked(x55, x6125);
    x55 = x6126;
    char* x7072 = (char*)malloc(56 * sizeof(char));
    memset(x7072, 0, 56 * sizeof(char));
    /* VAR */ char* x6129 = x55;
    while(1) {
      
      char x6130 = *x55;
      /* VAR */ int ite14142 = 0;
      if((x6130!=('|'))) {
        char x16102 = *x55;
        ite14142 = (x16102!=('\n'));
      } else {
        
        ite14142 = 0;
      };
      int x13250 = ite14142;
      if (!(x13250)) break; 
      
      x55 += 1;
    };
    char* x6137 = x6129;
    int x6138 = x55 - x6137;
    char* x6139 = x6129;
    char* x6140 = strncpy(x7072, x6139, x6138);
    x55 += 1;
    char* x7090 = (char*)malloc(26 * sizeof(char));
    memset(x7090, 0, 26 * sizeof(char));
    /* VAR */ char* x6148 = x55;
    while(1) {
      
      char x6149 = *x55;
      /* VAR */ int ite14165 = 0;
      if((x6149!=('|'))) {
        char x16124 = *x55;
        ite14165 = (x16124!=('\n'));
      } else {
        
        ite14165 = 0;
      };
      int x13266 = ite14165;
      if (!(x13266)) break; 
      
      x55 += 1;
    };
    char* x6156 = x6148;
    int x6157 = x55 - x6156;
    char* x6158 = x6148;
    char* x6159 = strncpy(x7090, x6158, x6157);
    x55 += 1;
    char* x7108 = (char*)malloc(11 * sizeof(char));
    memset(x7108, 0, 11 * sizeof(char));
    /* VAR */ char* x6167 = x55;
    while(1) {
      
      char x6168 = *x55;
      /* VAR */ int ite14188 = 0;
      if((x6168!=('|'))) {
        char x16146 = *x55;
        ite14188 = (x16146!=('\n'));
      } else {
        
        ite14188 = 0;
      };
      int x13282 = ite14188;
      if (!(x13282)) break; 
      
      x55 += 1;
    };
    char* x6175 = x6167;
    int x6176 = x55 - x6175;
    char* x6177 = x6167;
    char* x6178 = strncpy(x7108, x6177, x6176);
    x55 += 1;
    char* x7126 = (char*)malloc(26 * sizeof(char));
    memset(x7126, 0, 26 * sizeof(char));
    /* VAR */ char* x6186 = x55;
    while(1) {
      
      char x6187 = *x55;
      /* VAR */ int ite14211 = 0;
      if((x6187!=('|'))) {
        char x16168 = *x55;
        ite14211 = (x16168!=('\n'));
      } else {
        
        ite14211 = 0;
      };
      int x13298 = ite14211;
      if (!(x13298)) break; 
      
      x55 += 1;
    };
    char* x6194 = x6186;
    int x6195 = x55 - x6194;
    char* x6196 = x6186;
    char* x6197 = strncpy(x7126, x6196, x6195);
    x55 += 1;
    /* VAR */ int x6204 = 0;
    int x6205 = x6204;
    int* x6206 = &x6205;
    char* x6207 = strntoi_unchecked(x55, x6206);
    x55 = x6207;
    char* x7149 = (char*)malloc(11 * sizeof(char));
    memset(x7149, 0, 11 * sizeof(char));
    /* VAR */ char* x6210 = x55;
    while(1) {
      
      char x6211 = *x55;
      /* VAR */ int ite14239 = 0;
      if((x6211!=('|'))) {
        char x16195 = *x55;
        ite14239 = (x16195!=('\n'));
      } else {
        
        ite14239 = 0;
      };
      int x13319 = ite14239;
      if (!(x13319)) break; 
      
      x55 += 1;
    };
    char* x6218 = x6210;
    int x6219 = x55 - x6218;
    char* x6220 = x6210;
    char* x6221 = strncpy(x7149, x6220, x6219);
    x55 += 1;
    /* VAR */ double x6228 = 0.0;
    double x6229 = x6228;
    double* x6230 = &x6229;
    char* x6231 = strntod_unchecked(x55, x6230);
    x55 = x6231;
    char* x7172 = (char*)malloc(24 * sizeof(char));
    memset(x7172, 0, 24 * sizeof(char));
    /* VAR */ char* x6234 = x55;
    while(1) {
      
      char x6235 = *x55;
      /* VAR */ int ite14267 = 0;
      if((x6235!=('|'))) {
        char x16222 = *x55;
        ite14267 = (x16222!=('\n'));
      } else {
        
        ite14267 = 0;
      };
      int x13340 = ite14267;
      if (!(x13340)) break; 
      
      x55 += 1;
    };
    char* x6242 = x6234;
    int x6243 = x55 - x6242;
    char* x6244 = x6234;
    char* x6245 = strncpy(x7172, x6244, x6243);
    x55 += 1;
    struct PARTRecord* x7664 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x7664, 0, 1 * sizeof(struct PARTRecord));
    x7664->P_PARTKEY = x6124; x7664->P_TYPE = x7126;
    int x111 = x56;
    struct PARTRecord x7192 = *x7664;
    *(x7049 + x111) = x7192;
    struct PARTRecord* x7194 = &(x7049[x111]);
    x7664 = x7194;
    int x113 = x56;
    x56 = (x113+(1));
  };
  int x118 = 0;
  for(; x118 < 1 ; x118 += 1) {
    
    double* x16530 = (double*)malloc(3 * sizeof(double));
    memset(x16530, 0, 3 * sizeof(double));
    struct AGGRecord_String* x16531 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x16531, 0, 1 * sizeof(struct AGGRecord_String));
    x16531->key = "Total"; x16531->aggs = x16530;
    struct LINEITEMRecord** x16534 = (struct LINEITEMRecord**)malloc(96 * sizeof(struct LINEITEMRecord*));
    memset(x16534, 0, 96 * sizeof(struct LINEITEMRecord*));
    int* x16535 = (int*)malloc(96 * sizeof(int));
    memset(x16535, 0, 96 * sizeof(int));
    int x11957 = 0;
    for(; x11957 < 96 ; x11957 += 1) {
      
      struct LINEITEMRecord* x11960 = (struct LINEITEMRecord*)malloc(((x5906/(96))*(4)) * sizeof(struct LINEITEMRecord));
      memset(x11960, 0, ((x5906/(96))*(4)) * sizeof(struct LINEITEMRecord));
      *(x16534 + x11957) = x11960;
    };
    /* VAR */ int x16547 = 0;
    int x11986 = 0;
    for(; x11986 < x5906 ; x11986 += 1) {
      
      struct LINEITEMRecord* x11987 = &(x6854[x11986]);
      int x11989 = (x11987->L_SHIPDATE)/(100);
      int x11995 = (((x11989/(100))-(1992))*(12))+(((x11989%(100))-(1)));
      int x11996 = x16535[x11995];
      struct LINEITEMRecord* x11997 = x16534[x11995];
      struct LINEITEMRecord x11998 = *x11987;
      *(x11997 + x11996) = x11998;
      struct LINEITEMRecord* x12000 = &(x11997[x11996]);
      x11987 = x12000;
      *(x16535 + x11995) = (x11996+(1));
      int x12004 = x16547;
      x16547 = (x12004+(1));
    };
    /* VAR */ struct timeval x16591 = x5611;
    struct timeval x16592 = x16591;
    /* VAR */ struct timeval x16593 = x5611;
    struct timeval x16594 = x16593;
    /* VAR */ struct timeval x16595 = x5611;
    struct timeval x16596 = x16595;
    struct timeval* x16597 = &x16594;
    gettimeofday(x16597, NULL);
    /* VAR */ int x16599 = 0;
    /* VAR */ int x16600 = 0;
    /* VAR */ int x16601 = 0;
    int x12093 = 26;
    for(; x12093 < 28 ; x12093 += 1) {
      
      int x12094 = x16535[x12093];
      struct LINEITEMRecord* x12095 = x16534[x12093];
      int x12058 = 0;
      for(; x12058 < x12094 ; x12058 += 1) {
        
        struct LINEITEMRecord* x12059 = &(x12095[x12058]);
        int x12060 = x12059->L_SHIPDATE;
        /* VAR */ int ite14803 = 0;
        if((x12060>=(19940301))) {
          ite14803 = (x12060<(19940401));
        } else {
          
          ite14803 = 0;
        };
        int x13827 = ite14803;
        if(x13827) {
          int x212 = x12059->L_PARTKEY;
          struct PARTRecord* x4090 = &(x7049[(x212-(1))]);
          if(((x4090->P_PARTKEY)==(x212))) {
            if(((x4090->P_PARTKEY)==(x212))) {
              double x670 = x12059->L_EXTENDEDPRICE;
              double x671 = x12059->L_DISCOUNT;
              double* x279 = x16531->aggs;
              double x293 = x279[0];
              int x11086 = strlen("PROMO");
              int x11087 = strncmp((x4090->P_TYPE), "PROMO", x11086);
              /* VAR */ double ite13847 = 0;
              if((x11087==(0))) {
                ite13847 = (x293+((x670*((1.0-(x671))))));
              } else {
                
                ite13847 = x293;
              };
              double x301 = ite13847;
              *x279 = x301;
              double x309 = x279[1];
              *(x279 + 1) = (x309+((x670*((1.0-(x671))))));
            };
          };
        };
      };
    };
    double* x16787 = x16531->aggs;
    double x16788 = x16787[0];
    double x16790 = x16787[1];
    *(x16787 + 2) = ((x16788*(100.0))/(x16790));
    if(0) {
      x16600 = 1;
    } else {
      
      double x349 = x16787[2];
      printf("%.4f\n", x349);
      int x1518 = x16601;
      x16601 = (x1518+(1));
    };
    int x16800 = x16601;
    printf("(%d rows)\n", x16800);
    struct timeval* x16802 = &x16596;
    gettimeofday(x16802, NULL);
    struct timeval* x16804 = &x16592;
    struct timeval* x16805 = &x16596;
    struct timeval* x16806 = &x16594;
    long x16807 = timeval_subtract(x16804, x16805, x16806);
    printf("Generated code run in %ld milliseconds.\n", x16807);
  };
}
/* ----------- FUNCTIONS ----------- */