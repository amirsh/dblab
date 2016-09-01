#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct ORDERSRecord;
  struct AGGRecord_Int;
  struct Q13IntRecord;
  struct CUSTOMERRecord;
  
  struct ORDERSRecord {
  int O_CUSTKEY;
  int* O_COMMENT;
  };
  
  struct AGGRecord_Int {
  int key;
  double* aggs;
  };
  
  struct Q13IntRecord {
  int count;
  };
  
  struct CUSTOMERRecord {
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  int C_MKTSEGMENT;
  char* C_COMMENT;
  };
  
  


int x23392(struct AGGRecord_Int* x174, struct AGGRecord_Int* x175);

int x11564(void* x11558, void* x11559, void* x11560);
/* GLOBAL VARS */

struct timeval x7655;
int main(int argc, char** argv) {
  /* VAR */ int x2793 = 0;
  int x10934 = sizeof(char**);
  GArray* x10935 = g_array_new(0, 1, x10934);
  /* VAR */ int x2795 = 0;
  int x10937 = sizeof(char**);
  GArray* x10938 = g_array_new(0, 1, x10937);
  /* VAR */ int x2797 = 0;
  int* x9269 = (int*)malloc(12000000 * sizeof(int));
  memset(x9269, 0, 12000000 * sizeof(int));
  FILE* x8182 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x8183 = 0;
  int x8184 = x8183;
  int* x8185 = &x8184;
  int x8186 = fscanf(x8182, "%d", x8185);
  pclose(x8182);
  struct CUSTOMERRecord* x9276 = (struct CUSTOMERRecord*)malloc(x8184 * sizeof(struct CUSTOMERRecord));
  memset(x9276, 0, x8184 * sizeof(struct CUSTOMERRecord));
  int x8190 = O_RDONLY;
  int x8191 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x8190);
  struct stat x8192 = (struct stat){0};
  /* VAR */ struct stat x8193 = x8192;
  struct stat x8194 = x8193;
  struct stat* x8195 = &x8194;
  int x8196 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x8195);
  int x8198 = PROT_READ;
  int x8199 = MAP_PRIVATE;
  char* x6028 = mmap(NULL, (x8195->st_size), x8198, x8199, x8191, 0);
  /* VAR */ int x6029 = 0;
  while(1) {
    
    int x5 = x6029;
    /* VAR */ int ite19842 = 0;
    if((x5<(x8184))) {
      char x22357 = *x6028;
      ite19842 = (x22357!=('\0'));
    } else {
      
      ite19842 = 0;
    };
    int x18743 = ite19842;
    if (!(x18743)) break; 
    
    /* VAR */ int x8207 = 0;
    int x8208 = x8207;
    int* x8209 = &x8208;
    char* x8210 = strntoi_unchecked(x6028, x8209);
    x6028 = x8210;
    char* x9300 = (char*)malloc(26 * sizeof(char));
    memset(x9300, 0, 26 * sizeof(char));
    /* VAR */ char* x8213 = x6028;
    while(1) {
      
      char x8214 = *x6028;
      /* VAR */ int ite19861 = 0;
      if((x8214!=('|'))) {
        char x22375 = *x6028;
        ite19861 = (x22375!=('\n'));
      } else {
        
        ite19861 = 0;
      };
      int x18755 = ite19861;
      if (!(x18755)) break; 
      
      x6028 += 1;
    };
    char* x8221 = x8213;
    int x8222 = x6028 - x8221;
    char* x8223 = x8213;
    char* x8224 = strncpy(x9300, x8223, x8222);
    x6028 += 1;
    char* x9318 = (char*)malloc(41 * sizeof(char));
    memset(x9318, 0, 41 * sizeof(char));
    /* VAR */ char* x8232 = x6028;
    while(1) {
      
      char x8233 = *x6028;
      /* VAR */ int ite19884 = 0;
      if((x8233!=('|'))) {
        char x22397 = *x6028;
        ite19884 = (x22397!=('\n'));
      } else {
        
        ite19884 = 0;
      };
      int x18771 = ite19884;
      if (!(x18771)) break; 
      
      x6028 += 1;
    };
    char* x8240 = x8232;
    int x8241 = x6028 - x8240;
    char* x8242 = x8232;
    char* x8243 = strncpy(x9318, x8242, x8241);
    x6028 += 1;
    /* VAR */ int x8250 = 0;
    int x8251 = x8250;
    int* x8252 = &x8251;
    char* x8253 = strntoi_unchecked(x6028, x8252);
    x6028 = x8253;
    char* x9341 = (char*)malloc(16 * sizeof(char));
    memset(x9341, 0, 16 * sizeof(char));
    /* VAR */ char* x8256 = x6028;
    while(1) {
      
      char x8257 = *x6028;
      /* VAR */ int ite19912 = 0;
      if((x8257!=('|'))) {
        char x22424 = *x6028;
        ite19912 = (x22424!=('\n'));
      } else {
        
        ite19912 = 0;
      };
      int x18792 = ite19912;
      if (!(x18792)) break; 
      
      x6028 += 1;
    };
    char* x8264 = x8256;
    int x8265 = x6028 - x8264;
    char* x8266 = x8256;
    char* x8267 = strncpy(x9341, x8266, x8265);
    x6028 += 1;
    /* VAR */ double x8274 = 0.0;
    double x8275 = x8274;
    double* x8276 = &x8275;
    char* x8277 = strntod_unchecked(x6028, x8276);
    x6028 = x8277;
    char* x9364 = (char*)malloc(11 * sizeof(char));
    memset(x9364, 0, 11 * sizeof(char));
    /* VAR */ char* x8280 = x6028;
    while(1) {
      
      char x8281 = *x6028;
      /* VAR */ int ite19940 = 0;
      if((x8281!=('|'))) {
        char x22451 = *x6028;
        ite19940 = (x22451!=('\n'));
      } else {
        
        ite19940 = 0;
      };
      int x18813 = ite19940;
      if (!(x18813)) break; 
      
      x6028 += 1;
    };
    char* x8288 = x8280;
    int x8289 = x6028 - x8288;
    char* x8290 = x8280;
    char* x8291 = strncpy(x9364, x8290, x8289);
    x6028 += 1;
    char* x9382 = (char*)malloc(118 * sizeof(char));
    memset(x9382, 0, 118 * sizeof(char));
    /* VAR */ char* x8299 = x6028;
    while(1) {
      
      char x8300 = *x6028;
      /* VAR */ int ite19963 = 0;
      if((x8300!=('|'))) {
        char x22473 = *x6028;
        ite19963 = (x22473!=('\n'));
      } else {
        
        ite19963 = 0;
      };
      int x18829 = ite19963;
      if (!(x18829)) break; 
      
      x6028 += 1;
    };
    char* x8307 = x8299;
    int x8308 = x6028 - x8307;
    char* x8309 = x8299;
    char* x8310 = strncpy(x9382, x8309, x8308);
    x6028 += 1;
    int x2847 = x2795;
    if((x2847>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "C_MKTSEGMENT", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "C_MKTSEGMENT");
    };
    /* VAR */ int x11076 = -1;
    int x11077 = x10938->len;
    int x17056 = 0;
    for(; x17056 < x11077 ; x17056 += 1) {
      
      char* x17057 = g_array_index(x10938, char*, x17056);
      int x17058 = strcmp(x17057, x9364);
      int x17059 = !(x17058);
      if(x17059) {
        x11076 = x17056;
        break;
      };
    };
    int x11087 = x11076;
    int x2853 = !((x11087!=(-1)));
    if(x2853) {
      int x2854 = x2795;
      x2795 = (x2854+(1));
      void* x11094 = &(x9364);
      GArray* x11095 = g_array_append_vals(x10938, x11094, 1);
    };
    /* VAR */ int x11096 = -1;
    int x11097 = x10938->len;
    int x17083 = 0;
    for(; x17083 < x11097 ; x17083 += 1) {
      
      char* x17084 = g_array_index(x10938, char*, x17083);
      int x17085 = strcmp(x17084, x9364);
      int x17086 = !(x17085);
      if(x17086) {
        x11096 = x17083;
        break;
      };
    };
    int x11107 = x11096;
    struct CUSTOMERRecord* x9964 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x9964, 0, 1 * sizeof(struct CUSTOMERRecord));
    x9964->C_CUSTKEY = x8208; x9964->C_NAME = x9300; x9964->C_ADDRESS = x9318; x9964->C_NATIONKEY = x8251; x9964->C_PHONE = x9341; x9964->C_ACCTBAL = x8275; x9964->C_MKTSEGMENT = x11107; x9964->C_COMMENT = x9382;
    int x53 = x6029;
    struct CUSTOMERRecord x9415 = *x9964;
    *(x9276 + x53) = x9415;
    struct CUSTOMERRecord* x9417 = &(x9276[x53]);
    x9964 = x9417;
    int x55 = x6029;
    x6029 = (x55+(1));
  };
  FILE* x8336 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x8337 = 0;
  int x8338 = x8337;
  int* x8339 = &x8338;
  int x8340 = fscanf(x8336, "%d", x8339);
  pclose(x8336);
  struct ORDERSRecord* x9428 = (struct ORDERSRecord*)malloc(x8338 * sizeof(struct ORDERSRecord));
  memset(x9428, 0, x8338 * sizeof(struct ORDERSRecord));
  int x8344 = O_RDONLY;
  int x8345 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x8344);
  /* VAR */ struct stat x8346 = x8192;
  struct stat x8347 = x8346;
  struct stat* x8348 = &x8347;
  int x8349 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x8348);
  int x8351 = PROT_READ;
  int x8352 = MAP_PRIVATE;
  char* x6094 = mmap(NULL, (x8348->st_size), x8351, x8352, x8345, 0);
  /* VAR */ int x6095 = 0;
  while(1) {
    
    int x63 = x6095;
    /* VAR */ int ite20062 = 0;
    if((x63<(x8338))) {
      char x22571 = *x6094;
      ite20062 = (x22571!=('\0'));
    } else {
      
      ite20062 = 0;
    };
    int x18921 = ite20062;
    if (!(x18921)) break; 
    
    /* VAR */ int x8360 = 0;
    int x8361 = x8360;
    int* x8362 = &x8361;
    char* x8363 = strntoi_unchecked(x6094, x8362);
    x6094 = x8363;
    /* VAR */ int x8365 = 0;
    int x8366 = x8365;
    int* x8367 = &x8366;
    char* x8368 = strntoi_unchecked(x6094, x8367);
    x6094 = x8368;
    char x8370 = *x6094;
    /* VAR */ char x8371 = x8370;
    x6094 += 1;
    x6094 += 1;
    /* VAR */ double x8375 = 0.0;
    double x8376 = x8375;
    double* x8377 = &x8376;
    char* x8378 = strntod_unchecked(x6094, x8377);
    x6094 = x8378;
    /* VAR */ int x8380 = 0;
    int x8381 = x8380;
    int* x8382 = &x8381;
    char* x8383 = strntoi_unchecked(x6094, x8382);
    x6094 = x8383;
    /* VAR */ int x8385 = 0;
    int x8386 = x8385;
    int* x8387 = &x8386;
    char* x8388 = strntoi_unchecked(x6094, x8387);
    x6094 = x8388;
    /* VAR */ int x8390 = 0;
    int x8391 = x8390;
    int* x8392 = &x8391;
    char* x8393 = strntoi_unchecked(x6094, x8392);
    x6094 = x8393;
    char* x9485 = (char*)malloc(16 * sizeof(char));
    memset(x9485, 0, 16 * sizeof(char));
    /* VAR */ char* x8400 = x6094;
    while(1) {
      
      char x8401 = *x6094;
      /* VAR */ int ite20115 = 0;
      if((x8401!=('|'))) {
        char x22623 = *x6094;
        ite20115 = (x22623!=('\n'));
      } else {
        
        ite20115 = 0;
      };
      int x18967 = ite20115;
      if (!(x18967)) break; 
      
      x6094 += 1;
    };
    char* x8408 = x8400;
    int x8409 = x6094 - x8408;
    char* x8410 = x8400;
    char* x8411 = strncpy(x9485, x8410, x8409);
    x6094 += 1;
    char* x9503 = (char*)malloc(16 * sizeof(char));
    memset(x9503, 0, 16 * sizeof(char));
    /* VAR */ char* x8419 = x6094;
    while(1) {
      
      char x8420 = *x6094;
      /* VAR */ int ite20138 = 0;
      if((x8420!=('|'))) {
        char x22645 = *x6094;
        ite20138 = (x22645!=('\n'));
      } else {
        
        ite20138 = 0;
      };
      int x18983 = ite20138;
      if (!(x18983)) break; 
      
      x6094 += 1;
    };
    char* x8427 = x8419;
    int x8428 = x6094 - x8427;
    char* x8429 = x8419;
    char* x8430 = strncpy(x9503, x8429, x8428);
    x6094 += 1;
    /* VAR */ int x8437 = 0;
    int x8438 = x8437;
    int* x8439 = &x8438;
    char* x8440 = strntoi_unchecked(x6094, x8439);
    x6094 = x8440;
    char* x9526 = (char*)malloc(80 * sizeof(char));
    memset(x9526, 0, 80 * sizeof(char));
    /* VAR */ char* x8443 = x6094;
    while(1) {
      
      char x8444 = *x6094;
      /* VAR */ int ite20166 = 0;
      if((x8444!=('|'))) {
        char x22672 = *x6094;
        ite20166 = (x22672!=('\n'));
      } else {
        
        ite20166 = 0;
      };
      int x19004 = ite20166;
      if (!(x19004)) break; 
      
      x6094 += 1;
    };
    char* x8451 = x8443;
    int x8452 = x6094 - x8451;
    char* x8453 = x8443;
    char* x8454 = strncpy(x9526, x8453, x8452);
    x6094 += 1;
    int x2902 = x2793;
    if((x2902>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "O_COMMENT", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "O_COMMENT");
    };
    char* x9549 = (char*)malloc(8 * sizeof(char));
    memset(x9549, 0, 8 * sizeof(char));
    *x9549 = 32;
    *(x9549 + 1) = 46;
    *(x9549 + 2) = 33;
    *(x9549 + 3) = 59;
    *(x9549 + 4) = 44;
    *(x9549 + 5) = 58;
    *(x9549 + 6) = 63;
    *(x9549 + 7) = 45;
    int* x9558 = (int*)malloc(15 * sizeof(int));
    memset(x9558, 0, 15 * sizeof(int));
    int x17240 = 0;
    for(; x17240 < 15 ; x17240 += 1) {
      
      *(x9558 + x17240) = -1;
    };
    char** x2922 = tokenizeString(x9526);
    int x17303 = 0;
    for(; x17303 < 15 ; x17303 += 1) {
      
      char* x17304 = x2922[x17303];
      /* VAR */ int ite20271 = 0;
      if((x17304!=(NULL))) {
        int x22775 = strcmp(x17304, "");
        ite20271 = x22775;
      } else {
        
        ite20271 = 0;
      };
      int x19096 = ite20271;
      if(x19096) {
        /* VAR */ int x11268 = -1;
        int x11269 = x10935->len;
        int x17261 = 0;
        for(; x17261 < x11269 ; x17261 += 1) {
          
          char* x17262 = g_array_index(x10935, char*, x17261);
          int x17263 = strcmp(x17262, x17304);
          int x17264 = !(x17263);
          if(x17264) {
            x11268 = x17261;
            break;
          };
        };
        int x11279 = x11268;
        int x2928 = !((x11279!=(-1)));
        if(x2928) {
          int x2929 = x2793;
          x2793 = (x2929+(1));
          void* x11286 = &(x17304);
          GArray* x11287 = g_array_append_vals(x10935, x11286, 1);
        };
        /* VAR */ int x11288 = -1;
        int x11289 = x10935->len;
        int x17288 = 0;
        for(; x17288 < x11289 ; x17288 += 1) {
          
          char* x17289 = g_array_index(x10935, char*, x17288);
          int x17290 = strcmp(x17289, x17304);
          int x17291 = !(x17290);
          if(x17291) {
            x11288 = x17288;
            break;
          };
        };
        int x11299 = x11288;
        *(x9558 + x17303) = x11299;
        int x2936 = x2797;
        int x2937 = x2797;
        int x2938 = x9269[x2937];
        *(x9269 + x2936) = (x2938+(1));
      };
    };
    int x2944 = x2797;
    x2797 = (x2944+(1));
    struct ORDERSRecord* x10142 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x10142, 0, 1 * sizeof(struct ORDERSRecord));
    x10142->O_CUSTKEY = x8366; x10142->O_COMMENT = x9558;
    int x97 = x6095;
    struct ORDERSRecord x9591 = *x10142;
    *(x9428 + x97) = x9591;
    struct ORDERSRecord* x9593 = &(x9428[x97]);
    x10142 = x9593;
    int x99 = x6095;
    x6095 = (x99+(1));
  };
  struct Q13IntRecord* x9598 = (struct Q13IntRecord*)malloc(x8184 * sizeof(struct Q13IntRecord));
  memset(x9598, 0, x8184 * sizeof(struct Q13IntRecord));
  int x105 = 0;
  for(; x105 < x8184 ; x105 += 1) {
    
    struct Q13IntRecord* x22856 = (struct Q13IntRecord*)malloc(1 * sizeof(struct Q13IntRecord));
    memset(x22856, 0, 1 * sizeof(struct Q13IntRecord));
    x22856->count = 0;
    struct Q13IntRecord x22859 = *x22856;
    *(x9598 + x105) = x22859;
    struct Q13IntRecord* x22861 = &(x9598[x105]);
    x22856 = x22861;
  };
  int x111 = 0;
  for(; x111 < 1 ; x111 += 1) {
    
    /* VAR */ int x23210 = 0;
    void* x23211 = (void*)malloc(2097152 * sizeof(void));
    memset(x23211, 0, 2097152 * sizeof(void));
    struct AGGRecord_Int* x23212 = (struct AGGRecord_Int*)malloc(2097152 * sizeof(struct AGGRecord_Int));
    memset(x23212, 0, 2097152 * sizeof(struct AGGRecord_Int));
    x2797 = -1;
    /* VAR */ int x23214 = 0;
    double** x23215 = (double**)malloc(48000000 * sizeof(double*));
    memset(x23215, 0, 48000000 * sizeof(double*));
    /* VAR */ int x23216 = 0;
    while(1) {
      
      int x7477 = x23216;
      if (!((x7477<(48000000)))) break; 
      
      int x7479 = x23216;
      double* x9622 = (double*)malloc(1 * sizeof(double));
      memset(x9622, 0, 1 * sizeof(double));
      *(x23215 + x7479) = x9622;
      int x7482 = x23216;
      x23216 = (x7482+(1));
    };
    /* VAR */ int x23226 = 0;
    struct AGGRecord_Int* x23227 = (struct AGGRecord_Int*)malloc(48000000 * sizeof(struct AGGRecord_Int));
    memset(x23227, 0, 48000000 * sizeof(struct AGGRecord_Int));
    /* VAR */ int x23228 = 0;
    while(1) {
      
      int x7489 = x23228;
      if (!((x7489<(48000000)))) break; 
      
      int x7491 = x23228;
      double* x7492 = x23215[x7491];
      struct AGGRecord_Int* x10192 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
      memset(x10192, 0, 1 * sizeof(struct AGGRecord_Int));
      x10192->key = 0; x10192->aggs = x7492;
      struct AGGRecord_Int x9636 = *x10192;
      *(x23227 + x7491) = x9636;
      struct AGGRecord_Int* x9638 = &(x23227[x7491]);
      x10192 = x9638;
      int x7495 = x23228;
      x23228 = (x7495+(1));
    };
    /* VAR */ struct timeval x23244 = x7655;
    struct timeval x23245 = x23244;
    /* VAR */ struct timeval x23246 = x7655;
    struct timeval x23247 = x23246;
    /* VAR */ struct timeval x23248 = x7655;
    struct timeval x23249 = x23248;
    struct timeval* x23250 = &x23247;
    gettimeofday(x23250, NULL);
    /* VAR */ int x23252 = -1;
    int x23253 = x10935->len;
    int x17440 = 0;
    for(; x17440 < x23253 ; x17440 += 1) {
      
      char* x17441 = g_array_index(x10935, char*, x17440);
      int x17442 = strcmp(x17441, "unusual");
      int x17443 = !(x17442);
      if(x17443) {
        x23252 = x17440;
        break;
      };
    };
    int x23269 = x23252;
    /* VAR */ int x23270 = -1;
    int x23271 = x10935->len;
    int x17459 = 0;
    for(; x17459 < x23271 ; x17459 += 1) {
      
      char* x17460 = g_array_index(x10935, char*, x17459);
      int x17461 = strcmp(x17460, "packages");
      int x17462 = !(x17461);
      if(x17462) {
        x23270 = x17459;
        break;
      };
    };
    int x23287 = x23270;
    /* VAR */ int x23288 = 0;
    while(1) {
      
      int x23290 = x23288;
      if (!((x23290<(x8338)))) break; 
      
      int x1019 = x23288;
      struct ORDERSRecord* x140 = &(x9428[x1019]);
      int* x2976 = x140->O_COMMENT;
      /* VAR */ int findSlice2977 = 15;
      int x2978 = x2797;
      x2797 = (x2978+(1));
      /* VAR */ int x2981 = 0;
      int x2982 = x2797;
      int x2983 = x9269[x2982];
      while(1) {
        
        int x2984 = x2981;
        if (!((x2984<(x2983)))) break; 
        
        int x2986 = x2981;
        int x2987 = x2976[x2986];
        if((x2987==(x23269))) {
          int x2989 = x2981;
          findSlice2977 = x2989;
          break;
        };
        int x2993 = x2981;
        x2981 = (x2993+(1));
      };
      int x2997 = findSlice2977;
      /* VAR */ int findSlice2998 = 15;
      /* VAR */ int x2999 = x2997;
      int x3000 = x2797;
      int x3001 = x9269[x3000];
      while(1) {
        
        int x3002 = x2999;
        if (!((x3002<(x3001)))) break; 
        
        int x3004 = x2999;
        int x3005 = x2976[x3004];
        if((x3005==(x23287))) {
          int x3007 = x2999;
          findSlice2998 = x3007;
          break;
        };
        int x3011 = x2999;
        x2999 = (x3011+(1));
      };
      int x3015 = findSlice2998;
      /* VAR */ int ite20844 = 0;
      if((x2997!=(15))) {
        ite20844 = (x3015!=(15));
      } else {
        
        ite20844 = 0;
      };
      int x19623 = ite20844;
      int x148 = !(x19623);
      if(x148) {
        struct Q13IntRecord* x153 = &(x9598[(x140->O_CUSTKEY)]);
        int x154 = x153->count;
        x153->count = (x154+(1));
      };
      int x1039 = x23288;
      x23288 = (x1039+(1));
    };
    /* VAR */ int x23352 = 0;
    int* x23431 = &(x23392);
    GTree* x23432 = g_tree_new(x23431);
    /* VAR */ int x23433 = 0;
    /* VAR */ int x23434 = 0;
    while(1) {
      
      int x23436 = x23352;
      if (!((x23436<(x8184)))) break; 
      
      int x1101 = x23352;
      struct Q13IntRecord* x207 = &(x9598[x1101]);
      int x209 = x207->count;
      struct AGGRecord_Int* x3370 = &(x23212[x209]);
      int x3371 = x23210;
      if((x209>(x3371))) {
        x23210 = x209;
      };
      /* VAR */ int ite20958 = 0;
      if((x3370!=(NULL))) {
        ite20958 = ((x3370->aggs)!=(NULL));
      } else {
        
        ite20958 = 0;
      };
      int x19729 = ite20958;
      /* VAR */ struct AGGRecord_Int* ite19731 = 0;
      if(x19729) {
        ite19731 = x3370;
      } else {
        
        int x19733 = x23214;
        double* x19734 = x23215[x19733];
        int x19735 = x23214;
        x23214 = (x19735+(1));
        int x19738 = x23226;
        struct AGGRecord_Int* x19739 = &(x23227[x19738]);
        x19739->key = x209;
        x19739->aggs = x19734;
        int x19742 = x23226;
        x23226 = (x19742+(1));
        struct AGGRecord_Int x19745 = *x19739;
        *(x23212 + x209) = x19745;
        struct AGGRecord_Int* x19747 = &(x23212[x209]);
        x19739 = x19747;
        ite19731 = x19739;
      };
      struct AGGRecord_Int* x3378 = ite19731;
      double* x214 = x3378->aggs;
      double x228 = x214[0];
      *x214 = (x228+(1.0));
      int x1130 = x23352;
      x23352 = (x1130+(1));
    };
    int x23484 = x23210;
    int x17622 = 0;
    for(; x17622 < (x23484+(1)) ; x17622 += 1) {
      
      struct AGGRecord_Int* x17623 = &(x23212[x17622]);
      /* VAR */ int ite21016 = 0;
      if((x17623!=(NULL))) {
        ite21016 = ((x17623->aggs)!=(NULL));
      } else {
        
        ite21016 = 0;
      };
      int x19773 = ite21016;
      if(x19773) {
        g_tree_insert(x23432, x17623, x17623);
      };
    };
    while(1) {
      
      int x1139 = x23433;
      int x248 = !(x1139);
      /* VAR */ int ite21030 = 0;
      if(x248) {
        int x23518 = g_tree_nnodes(x23432);
        ite21030 = (x23518!=(0));
      } else {
        
        ite21030 = 0;
      };
      int x19780 = ite21030;
      if (!(x19780)) break; 
      
      void* x11557 = NULL;
      void** x11565 = &(x11557);
      g_tree_foreach(x23432, x11564, x11565);
      struct AGGRecord_Int* x11567 = (struct AGGRecord_Int*){x11557};
      int x11568 = g_tree_remove(x23432, x11567);
      if(0) {
        x23433 = 1;
      } else {
        
        double x263 = ((double*) { x11567->aggs })[0];
        printf("%d|%.0f\n", (x11567->key), x263);
        int x1156 = x23434;
        x23434 = (x1156+(1));
      };
    };
    int x23545 = x23434;
    printf("(%d rows)\n", x23545);
    struct timeval* x23547 = &x23249;
    gettimeofday(x23547, NULL);
    struct timeval* x23549 = &x23245;
    struct timeval* x23550 = &x23249;
    struct timeval* x23551 = &x23247;
    long x23552 = timeval_subtract(x23549, x23550, x23551);
    printf("Generated code run in %ld milliseconds.\n", x23552);
  };
}
/* ----------- FUNCTIONS ----------- */
int x23392(struct AGGRecord_Int* x174, struct AGGRecord_Int* x175) {
  double* x176 = x174->aggs;
  double x177 = x176[0];
  double* x178 = x175->aggs;
  double x179 = x178[0];
  /* VAR */ int ite19683 = 0;
  if((x177<(x179))) {
    ite19683 = 1;
  } else {
    
    double x19685 = x176[0];
    double x19686 = x178[0];
    /* VAR */ int ite19689 = 0;
    if((x19685>(x19686))) {
      ite19689 = -1;
    } else {
      
      int x19691 = x174->key;
      int x19692 = x175->key;
      /* VAR */ int ite19695 = 0;
      if((x19691<(x19692))) {
        ite19695 = 1;
      } else {
        
        /* VAR */ int ite19699 = 0;
        if((x19691>(x19692))) {
          ite19699 = -1;
        } else {
          
          ite19699 = 0;
        };
        int x19698 = ite19699;
        ite19695 = x19698;
      };
      int x19694 = ite19695;
      ite19689 = x19694;
    };
    int x19688 = ite19689;
    ite19683 = x19688;
  };
  int x191 = ite19683;
  return x191; 
}

int x11564(void* x11558, void* x11559, void* x11560) {
  pointer_assign(((struct AGGRecord_Int**){x11560}), ((struct AGGRecord_Int*){x11559}));
  return 1; 
}
