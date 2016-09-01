#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_String;
  struct AGGRecord_OptimalString;
  struct ORDERSRecord;
  struct CUSTOMERRecord;
  struct Set_AGGRecord_OptimalString;
  
  struct AGGRecord_String {
  char* key;
  double* aggs;
  };
  
  struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
  };
  
  struct ORDERSRecord {
  int O_CUSTKEY;
  };
  
  struct CUSTOMERRecord {
  int C_CUSTKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  };
  
  struct Set_AGGRecord_OptimalString {
  int maxSize;
  struct AGGRecord_OptimalString* array;
  };
  
  


int x36041(struct AGGRecord_OptimalString* x293, struct AGGRecord_OptimalString* x294);

int x14602(void* x14596, void* x14597, void* x14598);
/* GLOBAL VARS */

struct timeval x10354;
int main(int argc, char** argv) {
  FILE* x11026 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x11027 = 0;
  int x11028 = x11027;
  int* x11029 = &x11028;
  int x11030 = fscanf(x11026, "%d", x11029);
  pclose(x11026);
  struct CUSTOMERRecord* x12206 = (struct CUSTOMERRecord*)malloc(x11028 * sizeof(struct CUSTOMERRecord));
  memset(x12206, 0, x11028 * sizeof(struct CUSTOMERRecord));
  int x11034 = O_RDONLY;
  int x11035 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x11034);
  struct stat x11036 = (struct stat){0};
  /* VAR */ struct stat x11037 = x11036;
  struct stat x11038 = x11037;
  struct stat* x11039 = &x11038;
  int x11040 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x11039);
  int x11042 = PROT_READ;
  int x11043 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x11039->st_size), x11042, x11043, x11035, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite22056 = 0;
    if((x5<(x11028))) {
      char x34889 = *x3;
      ite22056 = (x34889!=('\0'));
    } else {
      
      ite22056 = 0;
    };
    int x21102 = ite22056;
    if (!(x21102)) break; 
    
    /* VAR */ int x11051 = 0;
    int x11052 = x11051;
    int* x11053 = &x11052;
    char* x11054 = strntoi_unchecked(x3, x11053);
    x3 = x11054;
    char* x12230 = (char*)malloc(26 * sizeof(char));
    memset(x12230, 0, 26 * sizeof(char));
    /* VAR */ char* x11057 = x3;
    while(1) {
      
      char x11058 = *x3;
      /* VAR */ int ite22075 = 0;
      if((x11058!=('|'))) {
        char x34907 = *x3;
        ite22075 = (x34907!=('\n'));
      } else {
        
        ite22075 = 0;
      };
      int x21114 = ite22075;
      if (!(x21114)) break; 
      
      x3 += 1;
    };
    char* x11065 = x11057;
    int x11066 = x3 - x11065;
    char* x11067 = x11057;
    char* x11068 = strncpy(x12230, x11067, x11066);
    x3 += 1;
    char* x12248 = (char*)malloc(41 * sizeof(char));
    memset(x12248, 0, 41 * sizeof(char));
    /* VAR */ char* x11076 = x3;
    while(1) {
      
      char x11077 = *x3;
      /* VAR */ int ite22098 = 0;
      if((x11077!=('|'))) {
        char x34929 = *x3;
        ite22098 = (x34929!=('\n'));
      } else {
        
        ite22098 = 0;
      };
      int x21130 = ite22098;
      if (!(x21130)) break; 
      
      x3 += 1;
    };
    char* x11084 = x11076;
    int x11085 = x3 - x11084;
    char* x11086 = x11076;
    char* x11087 = strncpy(x12248, x11086, x11085);
    x3 += 1;
    /* VAR */ int x11094 = 0;
    int x11095 = x11094;
    int* x11096 = &x11095;
    char* x11097 = strntoi_unchecked(x3, x11096);
    x3 = x11097;
    char* x12271 = (char*)malloc(16 * sizeof(char));
    memset(x12271, 0, 16 * sizeof(char));
    /* VAR */ char* x11100 = x3;
    while(1) {
      
      char x11101 = *x3;
      /* VAR */ int ite22126 = 0;
      if((x11101!=('|'))) {
        char x34956 = *x3;
        ite22126 = (x34956!=('\n'));
      } else {
        
        ite22126 = 0;
      };
      int x21151 = ite22126;
      if (!(x21151)) break; 
      
      x3 += 1;
    };
    char* x11108 = x11100;
    int x11109 = x3 - x11108;
    char* x11110 = x11100;
    char* x11111 = strncpy(x12271, x11110, x11109);
    x3 += 1;
    /* VAR */ double x11118 = 0.0;
    double x11119 = x11118;
    double* x11120 = &x11119;
    char* x11121 = strntod_unchecked(x3, x11120);
    x3 = x11121;
    char* x12294 = (char*)malloc(11 * sizeof(char));
    memset(x12294, 0, 11 * sizeof(char));
    /* VAR */ char* x11124 = x3;
    while(1) {
      
      char x11125 = *x3;
      /* VAR */ int ite22154 = 0;
      if((x11125!=('|'))) {
        char x34983 = *x3;
        ite22154 = (x34983!=('\n'));
      } else {
        
        ite22154 = 0;
      };
      int x21172 = ite22154;
      if (!(x21172)) break; 
      
      x3 += 1;
    };
    char* x11132 = x11124;
    int x11133 = x3 - x11132;
    char* x11134 = x11124;
    char* x11135 = strncpy(x12294, x11134, x11133);
    x3 += 1;
    char* x12312 = (char*)malloc(118 * sizeof(char));
    memset(x12312, 0, 118 * sizeof(char));
    /* VAR */ char* x11143 = x3;
    while(1) {
      
      char x11144 = *x3;
      /* VAR */ int ite22177 = 0;
      if((x11144!=('|'))) {
        char x35005 = *x3;
        ite22177 = (x35005!=('\n'));
      } else {
        
        ite22177 = 0;
      };
      int x21188 = ite22177;
      if (!(x21188)) break; 
      
      x3 += 1;
    };
    char* x11151 = x11143;
    int x11152 = x3 - x11151;
    char* x11153 = x11143;
    char* x11154 = strncpy(x12312, x11153, x11152);
    x3 += 1;
    struct CUSTOMERRecord* x12924 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x12924, 0, 1 * sizeof(struct CUSTOMERRecord));
    x12924->C_CUSTKEY = x11052; x12924->C_PHONE = x12271; x12924->C_ACCTBAL = x11119;
    int x53 = x4;
    struct CUSTOMERRecord x12332 = *x12924;
    *(x12206 + x53) = x12332;
    struct CUSTOMERRecord* x12334 = &(x12206[x53]);
    x12924 = x12334;
    int x55 = x4;
    x4 = (x55+(1));
  };
  FILE* x11167 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x11168 = 0;
  int x11169 = x11168;
  int* x11170 = &x11169;
  int x11171 = fscanf(x11167, "%d", x11170);
  pclose(x11167);
  struct ORDERSRecord* x12345 = (struct ORDERSRecord*)malloc(x11169 * sizeof(struct ORDERSRecord));
  memset(x12345, 0, x11169 * sizeof(struct ORDERSRecord));
  int x11175 = O_RDONLY;
  int x11176 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x11175);
  /* VAR */ struct stat x11177 = x11036;
  struct stat x11178 = x11177;
  struct stat* x11179 = &x11178;
  int x11180 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x11179);
  int x11182 = PROT_READ;
  int x11183 = MAP_PRIVATE;
  char* x61 = mmap(NULL, (x11179->st_size), x11182, x11183, x11176, 0);
  /* VAR */ int x62 = 0;
  while(1) {
    
    int x63 = x62;
    /* VAR */ int ite22227 = 0;
    if((x63<(x11169))) {
      char x35054 = *x61;
      ite22227 = (x35054!=('\0'));
    } else {
      
      ite22227 = 0;
    };
    int x21231 = ite22227;
    if (!(x21231)) break; 
    
    /* VAR */ int x11191 = 0;
    int x11192 = x11191;
    int* x11193 = &x11192;
    char* x11194 = strntoi_unchecked(x61, x11193);
    x61 = x11194;
    /* VAR */ int x11196 = 0;
    int x11197 = x11196;
    int* x11198 = &x11197;
    char* x11199 = strntoi_unchecked(x61, x11198);
    x61 = x11199;
    char x11201 = *x61;
    /* VAR */ char x11202 = x11201;
    x61 += 1;
    x61 += 1;
    /* VAR */ double x11206 = 0.0;
    double x11207 = x11206;
    double* x11208 = &x11207;
    char* x11209 = strntod_unchecked(x61, x11208);
    x61 = x11209;
    /* VAR */ int x11211 = 0;
    int x11212 = x11211;
    int* x11213 = &x11212;
    char* x11214 = strntoi_unchecked(x61, x11213);
    x61 = x11214;
    /* VAR */ int x11216 = 0;
    int x11217 = x11216;
    int* x11218 = &x11217;
    char* x11219 = strntoi_unchecked(x61, x11218);
    x61 = x11219;
    /* VAR */ int x11221 = 0;
    int x11222 = x11221;
    int* x11223 = &x11222;
    char* x11224 = strntoi_unchecked(x61, x11223);
    x61 = x11224;
    char* x12402 = (char*)malloc(16 * sizeof(char));
    memset(x12402, 0, 16 * sizeof(char));
    /* VAR */ char* x11231 = x61;
    while(1) {
      
      char x11232 = *x61;
      /* VAR */ int ite22280 = 0;
      if((x11232!=('|'))) {
        char x35106 = *x61;
        ite22280 = (x35106!=('\n'));
      } else {
        
        ite22280 = 0;
      };
      int x21277 = ite22280;
      if (!(x21277)) break; 
      
      x61 += 1;
    };
    char* x11239 = x11231;
    int x11240 = x61 - x11239;
    char* x11241 = x11231;
    char* x11242 = strncpy(x12402, x11241, x11240);
    x61 += 1;
    char* x12420 = (char*)malloc(16 * sizeof(char));
    memset(x12420, 0, 16 * sizeof(char));
    /* VAR */ char* x11250 = x61;
    while(1) {
      
      char x11251 = *x61;
      /* VAR */ int ite22303 = 0;
      if((x11251!=('|'))) {
        char x35128 = *x61;
        ite22303 = (x35128!=('\n'));
      } else {
        
        ite22303 = 0;
      };
      int x21293 = ite22303;
      if (!(x21293)) break; 
      
      x61 += 1;
    };
    char* x11258 = x11250;
    int x11259 = x61 - x11258;
    char* x11260 = x11250;
    char* x11261 = strncpy(x12420, x11260, x11259);
    x61 += 1;
    /* VAR */ int x11268 = 0;
    int x11269 = x11268;
    int* x11270 = &x11269;
    char* x11271 = strntoi_unchecked(x61, x11270);
    x61 = x11271;
    char* x12443 = (char*)malloc(80 * sizeof(char));
    memset(x12443, 0, 80 * sizeof(char));
    /* VAR */ char* x11274 = x61;
    while(1) {
      
      char x11275 = *x61;
      /* VAR */ int ite22331 = 0;
      if((x11275!=('|'))) {
        char x35155 = *x61;
        ite22331 = (x35155!=('\n'));
      } else {
        
        ite22331 = 0;
      };
      int x21314 = ite22331;
      if (!(x21314)) break; 
      
      x61 += 1;
    };
    char* x11282 = x11274;
    int x11283 = x61 - x11282;
    char* x11284 = x11274;
    char* x11285 = strncpy(x12443, x11284, x11283);
    x61 += 1;
    struct ORDERSRecord* x13057 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x13057, 0, 1 * sizeof(struct ORDERSRecord));
    x13057->O_CUSTKEY = x11197;
    int x97 = x62;
    struct ORDERSRecord x12463 = *x13057;
    *(x12345 + x97) = x12463;
    struct ORDERSRecord* x12465 = &(x12345[x97]);
    x13057 = x12465;
    int x99 = x62;
    x62 = (x99+(1));
  };
  int x104 = 0;
  for(; x104 < 1 ; x104 += 1) {
    
    /* VAR */ int x35789 = 0;
    struct Set_AGGRecord_OptimalString* x35790 = (struct Set_AGGRecord_OptimalString*)malloc(1048576 * sizeof(struct Set_AGGRecord_OptimalString));
    memset(x35790, 0, 1048576 * sizeof(struct Set_AGGRecord_OptimalString));
    int x19461 = 0;
    for(; x19461 < 1048576 ; x19461 += 1) {
      
      struct AGGRecord_OptimalString* x19462 = (struct AGGRecord_OptimalString*)malloc(256 * sizeof(struct AGGRecord_OptimalString));
      memset(x19462, 0, 256 * sizeof(struct AGGRecord_OptimalString));
      struct Set_AGGRecord_OptimalString* x19463 = (struct Set_AGGRecord_OptimalString*)malloc(1 * sizeof(struct Set_AGGRecord_OptimalString));
      memset(x19463, 0, 1 * sizeof(struct Set_AGGRecord_OptimalString));
      x19463->maxSize = 0; x19463->array = x19462;
      struct Set_AGGRecord_OptimalString x19466 = *x19463;
      *(x35790 + x19461) = x19466;
      struct Set_AGGRecord_OptimalString* x19468 = &(x35790[x19461]);
      x19463 = x19468;
    };
    struct ORDERSRecord** x35810 = (struct ORDERSRecord**)malloc(1200000 * sizeof(struct ORDERSRecord*));
    memset(x35810, 0, 1200000 * sizeof(struct ORDERSRecord*));
    int* x35811 = (int*)malloc(1200000 * sizeof(int));
    memset(x35811, 0, 1200000 * sizeof(int));
    int x19477 = 0;
    for(; x19477 < 1200000 ; x19477 += 1) {
      
      struct ORDERSRecord* x19478 = (struct ORDERSRecord*)malloc(1024 * sizeof(struct ORDERSRecord));
      memset(x19478, 0, 1024 * sizeof(struct ORDERSRecord));
      *(x35810 + x19477) = x19478;
    };
    /* VAR */ int x35819 = 0;
    int x19498 = 0;
    for(; x19498 < x11169 ; x19498 += 1) {
      
      struct ORDERSRecord* x19499 = &(x12345[x19498]);
      int x19501 = (x19499->O_CUSTKEY)%(1200000);
      int x19502 = x35811[x19501];
      struct ORDERSRecord* x19503 = x35810[x19501];
      struct ORDERSRecord x19504 = *x19499;
      *(x19503 + x19502) = x19504;
      struct ORDERSRecord* x19506 = &(x19503[x19502]);
      x19499 = x19506;
      *(x35811 + x19501) = (x19502+(1));
      int x19510 = x35819;
      x35819 = (x19510+(1));
    };
    double* x35851 = (double*)malloc(3 * sizeof(double));
    memset(x35851, 0, 3 * sizeof(double));
    struct AGGRecord_String* x35852 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x35852, 0, 1 * sizeof(struct AGGRecord_String));
    x35852->key = "AVG_C_ACCTBAL"; x35852->aggs = x35851;
    /* VAR */ struct timeval x35855 = x10354;
    struct timeval x35856 = x35855;
    /* VAR */ struct timeval x35857 = x10354;
    struct timeval x35858 = x35857;
    /* VAR */ struct timeval x35859 = x10354;
    struct timeval x35860 = x35859;
    struct timeval* x35861 = &x35858;
    gettimeofday(x35861, NULL);
    /* VAR */ int x35863 = 0;
    /* VAR */ struct AGGRecord_String* x35864 = NULL;
    while(1) {
      
      int x35866 = x35863;
      if (!((x35866<(x11028)))) break; 
      
      int x1667 = x35863;
      struct CUSTOMERRecord* x164 = &(x12206[x1667]);
      double x166 = x164->C_ACCTBAL;
      /* VAR */ int ite22853 = 0;
      if((x166>(0.0))) {
        char* x35874 = x164->C_PHONE;
        char* x35875 = pointer_add(x35874, 0);
        char x35876 = *(x35875);
        /* VAR */ int x35878 = 0;
        if((x35876==('2'))) {
          char* x35880 = pointer_add(x35874, 1);
          char x35881 = *(x35880);
          x35878 = (x35881==('3'));
        } else {
          
          x35878 = 0;
        };
        int x35886 = x35878;
        /* VAR */ int x35887 = 0;
        if(x35886) {
          x35887 = 1;
        } else {
          
          char* x35890 = pointer_add(x35874, 0);
          char x35891 = *(x35890);
          /* VAR */ int x35893 = 0;
          if((x35891==('2'))) {
            char* x35895 = pointer_add(x35874, 1);
            char x35896 = *(x35895);
            x35893 = (x35896==('9'));
          } else {
            
            x35893 = 0;
          };
          int x35901 = x35893;
          /* VAR */ int x35902 = 0;
          if(x35901) {
            x35902 = 1;
          } else {
            
            char* x35905 = pointer_add(x35874, 0);
            char x35906 = *(x35905);
            /* VAR */ int x35908 = 0;
            if((x35906==('2'))) {
              char* x35910 = pointer_add(x35874, 1);
              char x35911 = *(x35910);
              x35908 = (x35911==('2'));
            } else {
              
              x35908 = 0;
            };
            int x35916 = x35908;
            /* VAR */ int x35917 = 0;
            if(x35916) {
              x35917 = 1;
            } else {
              
              char* x35920 = pointer_add(x35874, 0);
              char x35921 = *(x35920);
              /* VAR */ int x35923 = 0;
              if((x35921==('2'))) {
                char* x35925 = pointer_add(x35874, 1);
                char x35926 = *(x35925);
                x35923 = (x35926==('0'));
              } else {
                
                x35923 = 0;
              };
              int x35931 = x35923;
              /* VAR */ int x35932 = 0;
              if(x35931) {
                x35932 = 1;
              } else {
                
                char* x35935 = pointer_add(x35874, 0);
                char x35936 = *(x35935);
                /* VAR */ int x35938 = 0;
                if((x35936==('2'))) {
                  char* x35940 = pointer_add(x35874, 1);
                  char x35941 = *(x35940);
                  x35938 = (x35941==('4'));
                } else {
                  
                  x35938 = 0;
                };
                int x35946 = x35938;
                /* VAR */ int x35947 = 0;
                if(x35946) {
                  x35947 = 1;
                } else {
                  
                  char* x35950 = pointer_add(x35874, 0);
                  char x35951 = *(x35950);
                  /* VAR */ int x35953 = 0;
                  if((x35951==('2'))) {
                    char* x35955 = pointer_add(x35874, 1);
                    char x35956 = *(x35955);
                    x35953 = (x35956==('6'));
                  } else {
                    
                    x35953 = 0;
                  };
                  int x35961 = x35953;
                  /* VAR */ int x35962 = 0;
                  if(x35961) {
                    x35962 = 1;
                  } else {
                    
                    char* x35965 = pointer_add(x35874, 0);
                    char x35966 = *(x35965);
                    /* VAR */ int x35968 = 0;
                    if((x35966==('2'))) {
                      char* x35970 = pointer_add(x35874, 1);
                      char x35971 = *(x35970);
                      x35968 = (x35971==('5'));
                    } else {
                      
                      x35968 = 0;
                    };
                    int x35976 = x35968;
                    x35962 = x35976;
                  };
                  int x35979 = x35962;
                  x35947 = x35979;
                };
                int x35982 = x35947;
                x35932 = x35982;
              };
              int x35985 = x35932;
              x35917 = x35985;
            };
            int x35988 = x35917;
            x35902 = x35988;
          };
          int x35991 = x35902;
          x35887 = x35991;
        };
        int x35994 = x35887;
        ite22853 = x35994;
      } else {
        
        ite22853 = 0;
      };
      int x21769 = ite22853;
      if(x21769) {
        double* x187 = x35852->aggs;
        double x201 = x187[0];
        *x187 = (x166+(x201));
        double x210 = x187[1];
        *(x187 + 1) = (x210+(1.0));
      };
      int x1722 = x35863;
      x35863 = (x1722+(1));
    };
    double* x36010 = x35852->aggs;
    double x36011 = x36010[0];
    double x36012 = x36010[1];
    *(x36010 + 2) = (x36011/(x36012));
    x35864 = x35852;
    struct AGGRecord_String* x36016 = x35864;
    double x36018 = ((double*) { x36016->aggs })[2];
    /* VAR */ int x36019 = 0;
    int* x36062 = &(x36041);
    GTree* x36063 = g_tree_new(x36062);
    /* VAR */ int x36064 = 0;
    /* VAR */ int x36065 = 0;
    while(1) {
      
      int x36067 = x36019;
      if (!((x36067<(x11028)))) break; 
      
      int x1851 = x36019;
      struct CUSTOMERRecord* x326 = &(x12206[x1851]);
      char* x328 = x326->C_PHONE;
      char* x18281 = pointer_add(x328, 0);
      char x18282 = *(x18281);
      /* VAR */ int ite22945 = 0;
      if((x18282==('2'))) {
        char* x36077 = pointer_add(x328, 1);
        char x36078 = *(x36077);
        ite22945 = (x36078==('3'));
      } else {
        
        ite22945 = 0;
      };
      int x21846 = ite22945;
      /* VAR */ int ite22955 = 0;
      if(x21846) {
        ite22955 = 1;
      } else {
        
        char* x36087 = pointer_add(x328, 0);
        char x36088 = *(x36087);
        /* VAR */ int x36090 = 0;
        if((x36088==('2'))) {
          char* x36092 = pointer_add(x328, 1);
          char x36093 = *(x36092);
          x36090 = (x36093==('9'));
        } else {
          
          x36090 = 0;
        };
        int x36098 = x36090;
        /* VAR */ int x36099 = 0;
        if(x36098) {
          x36099 = 1;
        } else {
          
          char* x36102 = pointer_add(x328, 0);
          char x36103 = *(x36102);
          /* VAR */ int x36105 = 0;
          if((x36103==('2'))) {
            char* x36107 = pointer_add(x328, 1);
            char x36108 = *(x36107);
            x36105 = (x36108==('2'));
          } else {
            
            x36105 = 0;
          };
          int x36113 = x36105;
          /* VAR */ int x36114 = 0;
          if(x36113) {
            x36114 = 1;
          } else {
            
            char* x36117 = pointer_add(x328, 0);
            char x36118 = *(x36117);
            /* VAR */ int x36120 = 0;
            if((x36118==('2'))) {
              char* x36122 = pointer_add(x328, 1);
              char x36123 = *(x36122);
              x36120 = (x36123==('0'));
            } else {
              
              x36120 = 0;
            };
            int x36128 = x36120;
            /* VAR */ int x36129 = 0;
            if(x36128) {
              x36129 = 1;
            } else {
              
              char* x36132 = pointer_add(x328, 0);
              char x36133 = *(x36132);
              /* VAR */ int x36135 = 0;
              if((x36133==('2'))) {
                char* x36137 = pointer_add(x328, 1);
                char x36138 = *(x36137);
                x36135 = (x36138==('4'));
              } else {
                
                x36135 = 0;
              };
              int x36143 = x36135;
              /* VAR */ int x36144 = 0;
              if(x36143) {
                x36144 = 1;
              } else {
                
                char* x36147 = pointer_add(x328, 0);
                char x36148 = *(x36147);
                /* VAR */ int x36150 = 0;
                if((x36148==('2'))) {
                  char* x36152 = pointer_add(x328, 1);
                  char x36153 = *(x36152);
                  x36150 = (x36153==('6'));
                } else {
                  
                  x36150 = 0;
                };
                int x36158 = x36150;
                /* VAR */ int x36159 = 0;
                if(x36158) {
                  x36159 = 1;
                } else {
                  
                  char* x36162 = pointer_add(x328, 0);
                  char x36163 = *(x36162);
                  /* VAR */ int x36165 = 0;
                  if((x36163==('2'))) {
                    char* x36167 = pointer_add(x328, 1);
                    char x36168 = *(x36167);
                    x36165 = (x36168==('5'));
                  } else {
                    
                    x36165 = 0;
                  };
                  int x36173 = x36165;
                  x36159 = x36173;
                };
                int x36176 = x36159;
                x36144 = x36176;
              };
              int x36179 = x36144;
              x36129 = x36179;
            };
            int x36182 = x36129;
            x36114 = x36182;
          };
          int x36185 = x36114;
          x36099 = x36185;
        };
        int x36188 = x36099;
        ite22955 = x36188;
      };
      int x21848 = ite22955;
      /* VAR */ int ite22969 = 0;
      if(x21848) {
        ite22969 = ((x326->C_ACCTBAL)>(x36018));
      } else {
        
        ite22969 = 0;
      };
      int x21850 = ite22969;
      if(x21850) {
        /* VAR */ int resultRetain3692 = 0;
        int x3693 = (x326->C_CUSTKEY)%(1200000);
        int x3694 = x35811[x3693];
        struct ORDERSRecord* x3695 = x35810[x3693];
        int x19741 = 0;
        for(; x19741 < x3694 ; x19741 += 1) {
          
          struct ORDERSRecord* x19742 = &(x3695[x19741]);
          int x19746 = !(((x326->C_CUSTKEY)==((x19742->O_CUSTKEY))));
          int x19747 = !(x19746);
          if(x19747) {
            resultRetain3692 = 1;
          };
        };
        int x3709 = resultRetain3692;
        int x3710 = !(x3709);
        if(x3710) {
          int x18362 = (2-(0))+(1);
          char* x18363 = malloc(x18362);
          char* x18364 = pointer_add((x326->C_PHONE), 0);
          int x18365 = x18362-(1);
          char* x18366 = strncpy(x18363, x18364, x18365);
          *(x18363 + x18365) = '\0';
          int x18368 = strlen(x18363);
          /* VAR */ int x17041 = 0;
          /* VAR */ int x17042 = 0;
          while(1) {
            
            int x17043 = x17041;
            if (!((x17043<(x18368)))) break; 
            
            int x17045 = x17042;
            int x17046 = x17041;
            char* x18376 = pointer_add(x18363, x17046);
            char x18377 = *(x18376);
            x17042 = (x17045+(x18377));
            int x17051 = x17041;
            x17041 = (x17051+(1));
          };
          int x17055 = x17042;
          int x5261 = x17055&(1048575);
          struct Set_AGGRecord_OptimalString* x6246 = &(x35790[x5261]);
          int x5263 = x35789;
          if((x5261>(x5263))) {
            x35789 = x5261;
          };
          /* VAR */ int i6255 = 0;
          /* VAR */ int found6256 = 0;
          while(1) {
            
            int x6257 = i6255;
            int x6258 = x6246->maxSize;
            /* VAR */ int ite23042 = 0;
            if((x6257<(x6258))) {
              int x36266 = found6256;
              int x36267 = !(x36266);
              ite23042 = x36267;
            } else {
              
              ite23042 = 0;
            };
            int x21916 = ite23042;
            if (!(x21916)) break; 
            
            int x6264 = i6255;
            struct AGGRecord_OptimalString* x6265 = &(((struct AGGRecord_OptimalString*) { x6246->array })[x6264]);
            int x17075 = strcmp((x6265->key), x18363);
            int x17076 = !(x17075);
            if(x17076) {
              found6256 = 1;
            } else {
              
              int x6269 = i6255;
              i6255 = (x6269+(1));
            };
          };
          int x6274 = found6256;
          int x6275 = !(x6274);
          /* VAR */ struct AGGRecord_OptimalString** ite21931 = 0;
          if(x6275) {
            ite21931 = NULL;
          } else {
            
            int x21934 = i6255;
            struct AGGRecord_OptimalString* x21935 = &(((struct AGGRecord_OptimalString*) { x6246->array })[x21934]);
            ite21931 = x21935;
          };
          struct AGGRecord_OptimalString** x6282 = ite21931;
          /* VAR */ struct AGGRecord_OptimalString* ite21941 = 0;
          if((x6282!=(NULL))) {
            ite21941 = x6282;
          } else {
            
            double* x21943 = (double*)malloc(2 * sizeof(double));
            memset(x21943, 0, 2 * sizeof(double));
            struct AGGRecord_OptimalString* x21944 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
            memset(x21944, 0, 1 * sizeof(struct AGGRecord_OptimalString));
            x21944->key = x18363; x21944->aggs = x21943;
            struct AGGRecord_OptimalString* x21947 = x6246->array;
            int x21948 = x6246->maxSize;
            struct AGGRecord_OptimalString x21949 = *x21944;
            *(x21947 + x21948) = x21949;
            struct AGGRecord_OptimalString* x21951 = &(x21947[x21948]);
            x21944 = x21951;
            int x21953 = x6246->maxSize;
            x6246->maxSize = (x21953+(1));
            ite21941 = x21944;
          };
          struct AGGRecord_OptimalString* x5276 = ite21941;
          double* x3716 = x5276->aggs;
          double x3717 = x3716[0];
          *x3716 = ((x326->C_ACCTBAL)+(x3717));
          double x3721 = x3716[1];
          *(x3716 + 1) = (x3721+(1.0));
        };
      };
      int x1874 = x36019;
      x36019 = (x1874+(1));
    };
    int x36325 = x35789;
    int x19853 = 0;
    for(; x19853 < (x36325+(1)) ; x19853 += 1) {
      
      struct Set_AGGRecord_OptimalString* x19854 = &(x35790[x19853]);
      int x19855 = x19854->maxSize;
      int x19848 = 0;
      for(; x19848 < x19855 ; x19848 += 1) {
        
        struct AGGRecord_OptimalString* x19850 = &(((struct AGGRecord_OptimalString*) { x19854->array })[x19848]);
        g_tree_insert(x36063, x19850, x19850);
      };
    };
    while(1) {
      
      int x1959 = x36064;
      int x440 = !(x1959);
      /* VAR */ int ite23134 = 0;
      if(x440) {
        int x36357 = g_tree_nnodes(x36063);
        ite23134 = (x36357!=(0));
      } else {
        
        ite23134 = 0;
      };
      int x22001 = ite23134;
      if (!(x22001)) break; 
      
      void* x14595 = NULL;
      void** x14603 = &(x14595);
      g_tree_foreach(x36063, x14602, x14603);
      struct AGGRecord_OptimalString* x14605 = (struct AGGRecord_OptimalString*){x14595};
      int x14606 = g_tree_remove(x36063, x14605);
      if(0) {
        x36064 = 1;
      } else {
        
        double* x455 = x14605->aggs;
        double x456 = x455[1];
        double x457 = x455[0];
        printf("%s|%.0f|%.2f\n", (x14605->key), x456, x457);
        int x1978 = x36065;
        x36065 = (x1978+(1));
      };
    };
    int x36385 = x36065;
    printf("(%d rows)\n", x36385);
    struct timeval* x36387 = &x35860;
    gettimeofday(x36387, NULL);
    struct timeval* x36389 = &x35856;
    struct timeval* x36390 = &x35860;
    struct timeval* x36391 = &x35858;
    long x36392 = timeval_subtract(x36389, x36390, x36391);
    printf("Generated code run in %ld milliseconds.\n", x36392);
  };
}
/* ----------- FUNCTIONS ----------- */
int x36041(struct AGGRecord_OptimalString* x293, struct AGGRecord_OptimalString* x294) {
  char* x295 = x293->key;
  char* x18253 = pointer_add(x295, 0);
  char x18254 = *(x18253);
  char* x297 = x294->key;
  char* x18256 = pointer_add(x297, 0);
  char x18257 = *(x18256);
  /* VAR */ int res300 = (x18254-(x18257));
  int x301 = res300;
  if((x301==(0))) {
    char* x18263 = pointer_add(x295, 1);
    char x18264 = *(x18263);
    char* x18265 = pointer_add(x297, 1);
    char x18266 = *(x18265);
    res300 = (x18264-(x18266));
  };
  int x308 = res300;
  return x308; 
}

int x14602(void* x14596, void* x14597, void* x14598) {
  pointer_assign(((struct AGGRecord_OptimalString**){x14598}), ((struct AGGRecord_OptimalString*){x14597}));
  return 1; 
}
