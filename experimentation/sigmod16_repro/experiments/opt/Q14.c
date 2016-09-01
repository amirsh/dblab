#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct PARTRecord;
  
  struct LINEITEMRecord {
  int L_PARTKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  int L_SHIPDATE;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  int P_TYPE;
  };
  
  


int x24897(char** x12348, char** x12349);
/* GLOBAL VARS */

struct timeval x8897;
int main(int argc, char** argv) {
  /* VAR */ int x3410 = 0;
  int x11935 = sizeof(char**);
  GArray* x11936 = g_array_new(0, 1, x11935);
  int x11937 = sizeof(char**);
  GArray* x11938 = g_array_new(0, 1, x11937);
  FILE* x9247 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x9248 = 0;
  int x9249 = x9248;
  int* x9250 = &x9249;
  int x9251 = fscanf(x9247, "%d", x9250);
  pclose(x9247);
  struct LINEITEMRecord* x10315 = (struct LINEITEMRecord*)malloc(x9249 * sizeof(struct LINEITEMRecord));
  memset(x10315, 0, x9249 * sizeof(struct LINEITEMRecord));
  int x9255 = O_RDONLY;
  int x9256 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x9255);
  struct stat x9257 = (struct stat){0};
  /* VAR */ struct stat x9258 = x9257;
  struct stat x9259 = x9258;
  struct stat* x9260 = &x9259;
  int x9261 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x9260);
  int x9263 = PROT_READ;
  int x9264 = MAP_PRIVATE;
  char* x6770 = mmap(NULL, (x9260->st_size), x9263, x9264, x9256, 0);
  /* VAR */ int x6771 = 0;
  while(1) {
    
    int x5 = x6771;
    /* VAR */ int ite20987 = 0;
    if((x5<(x9249))) {
      char x23960 = *x6770;
      ite20987 = (x23960!=('\0'));
    } else {
      
      ite20987 = 0;
    };
    int x19702 = ite20987;
    if (!(x19702)) break; 
    
    /* VAR */ int x9272 = 0;
    int x9273 = x9272;
    int* x9274 = &x9273;
    char* x9275 = strntoi_unchecked(x6770, x9274);
    x6770 = x9275;
    /* VAR */ int x9277 = 0;
    int x9278 = x9277;
    int* x9279 = &x9278;
    char* x9280 = strntoi_unchecked(x6770, x9279);
    x6770 = x9280;
    /* VAR */ int x9282 = 0;
    int x9283 = x9282;
    int* x9284 = &x9283;
    char* x9285 = strntoi_unchecked(x6770, x9284);
    x6770 = x9285;
    /* VAR */ int x9287 = 0;
    int x9288 = x9287;
    int* x9289 = &x9288;
    char* x9290 = strntoi_unchecked(x6770, x9289);
    x6770 = x9290;
    /* VAR */ double x9292 = 0.0;
    double x9293 = x9292;
    double* x9294 = &x9293;
    char* x9295 = strntod_unchecked(x6770, x9294);
    x6770 = x9295;
    /* VAR */ double x9297 = 0.0;
    double x9298 = x9297;
    double* x9299 = &x9298;
    char* x9300 = strntod_unchecked(x6770, x9299);
    x6770 = x9300;
    /* VAR */ double x9302 = 0.0;
    double x9303 = x9302;
    double* x9304 = &x9303;
    char* x9305 = strntod_unchecked(x6770, x9304);
    x6770 = x9305;
    /* VAR */ double x9307 = 0.0;
    double x9308 = x9307;
    double* x9309 = &x9308;
    char* x9310 = strntod_unchecked(x6770, x9309);
    x6770 = x9310;
    char x9312 = *x6770;
    /* VAR */ char x9313 = x9312;
    x6770 += 1;
    x6770 += 1;
    char x9317 = *x6770;
    /* VAR */ char x9318 = x9317;
    x6770 += 1;
    x6770 += 1;
    /* VAR */ int x9322 = 0;
    int x9323 = x9322;
    int* x9324 = &x9323;
    char* x9325 = strntoi_unchecked(x6770, x9324);
    x6770 = x9325;
    /* VAR */ int x9327 = 0;
    int x9328 = x9327;
    int* x9329 = &x9328;
    char* x9330 = strntoi_unchecked(x6770, x9329);
    x6770 = x9330;
    /* VAR */ int x9332 = 0;
    int x9333 = x9332;
    int* x9334 = &x9333;
    char* x9335 = strntoi_unchecked(x6770, x9334);
    x6770 = x9335;
    /* VAR */ int x9341 = 0;
    int x9342 = x9341;
    int* x9343 = &x9342;
    char* x9344 = strntoi_unchecked(x6770, x9343);
    x6770 = x9344;
    /* VAR */ int x9346 = 0;
    int x9347 = x9346;
    int* x9348 = &x9347;
    char* x9349 = strntoi_unchecked(x6770, x9348);
    x6770 = x9349;
    /* VAR */ int x9351 = 0;
    int x9352 = x9351;
    int* x9353 = &x9352;
    char* x9354 = strntoi_unchecked(x6770, x9353);
    x6770 = x9354;
    /* VAR */ int x9360 = 0;
    int x9361 = x9360;
    int* x9362 = &x9361;
    char* x9363 = strntoi_unchecked(x6770, x9362);
    x6770 = x9363;
    /* VAR */ int x9365 = 0;
    int x9366 = x9365;
    int* x9367 = &x9366;
    char* x9368 = strntoi_unchecked(x6770, x9367);
    x6770 = x9368;
    /* VAR */ int x9370 = 0;
    int x9371 = x9370;
    int* x9372 = &x9371;
    char* x9373 = strntoi_unchecked(x6770, x9372);
    x6770 = x9373;
    char* x10441 = (char*)malloc(26 * sizeof(char));
    memset(x10441, 0, 26 * sizeof(char));
    /* VAR */ char* x9380 = x6770;
    while(1) {
      
      char x9381 = *x6770;
      /* VAR */ int ite21108 = 0;
      if((x9381!=('|'))) {
        char x24080 = *x6770;
        ite21108 = (x24080!=('\n'));
      } else {
        
        ite21108 = 0;
      };
      int x19816 = ite21108;
      if (!(x19816)) break; 
      
      x6770 += 1;
    };
    char* x9388 = x9380;
    int x9389 = x6770 - x9388;
    char* x9390 = x9380;
    char* x9391 = strncpy(x10441, x9390, x9389);
    x6770 += 1;
    char* x10459 = (char*)malloc(11 * sizeof(char));
    memset(x10459, 0, 11 * sizeof(char));
    /* VAR */ char* x9399 = x6770;
    while(1) {
      
      char x9400 = *x6770;
      /* VAR */ int ite21131 = 0;
      if((x9400!=('|'))) {
        char x24102 = *x6770;
        ite21131 = (x24102!=('\n'));
      } else {
        
        ite21131 = 0;
      };
      int x19832 = ite21131;
      if (!(x19832)) break; 
      
      x6770 += 1;
    };
    char* x9407 = x9399;
    int x9408 = x6770 - x9407;
    char* x9409 = x9399;
    char* x9410 = strncpy(x10459, x9409, x9408);
    x6770 += 1;
    char* x10477 = (char*)malloc(45 * sizeof(char));
    memset(x10477, 0, 45 * sizeof(char));
    /* VAR */ char* x9418 = x6770;
    while(1) {
      
      char x9419 = *x6770;
      /* VAR */ int ite21154 = 0;
      if((x9419!=('|'))) {
        char x24124 = *x6770;
        ite21154 = (x24124!=('\n'));
      } else {
        
        ite21154 = 0;
      };
      int x19848 = ite21154;
      if (!(x19848)) break; 
      
      x6770 += 1;
    };
    char* x9426 = x9418;
    int x9427 = x6770 - x9426;
    char* x9428 = x9418;
    char* x9429 = strncpy(x10477, x9428, x9427);
    x6770 += 1;
    struct LINEITEMRecord* x11035 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x11035, 0, 1 * sizeof(struct LINEITEMRecord));
    x11035->L_PARTKEY = x9278; x11035->L_EXTENDEDPRICE = x9298; x11035->L_DISCOUNT = x9303; x11035->L_SHIPDATE = (((x9323*(10000))+((x9328*(100))))+(x9333));
    int x47 = x6771;
    if((x11035==(NULL))) {
      *(x10315 + x47) = (const struct LINEITEMRecord){0};
    } else {
      
      struct LINEITEMRecord x10499 = *x11035;
      *(x10315 + x47) = x10499;
      struct LINEITEMRecord* x10501 = &(x10315[x47]);
      x11035 = x10501;
    };
    int x49 = x6771;
    x6771 = (x49+(1));
  };
  FILE* x9442 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x9443 = 0;
  int x9444 = x9443;
  int* x9445 = &x9444;
  int x9446 = fscanf(x9442, "%d", x9445);
  pclose(x9442);
  struct PARTRecord* x10513 = (struct PARTRecord*)malloc(x9444 * sizeof(struct PARTRecord));
  memset(x10513, 0, x9444 * sizeof(struct PARTRecord));
  int x9450 = O_RDONLY;
  int x9451 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x9450);
  /* VAR */ struct stat x9452 = x9257;
  struct stat x9453 = x9452;
  struct stat* x9454 = &x9453;
  int x9455 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x9454);
  int x9457 = PROT_READ;
  int x9458 = MAP_PRIVATE;
  char* x6819 = mmap(NULL, (x9454->st_size), x9457, x9458, x9451, 0);
  /* VAR */ int x6820 = 0;
  while(1) {
    
    int x57 = x6820;
    /* VAR */ int ite21207 = 0;
    if((x57<(x9444))) {
      char x24176 = *x6819;
      ite21207 = (x24176!=('\0'));
    } else {
      
      ite21207 = 0;
    };
    int x19894 = ite21207;
    if (!(x19894)) break; 
    
    /* VAR */ int x9466 = 0;
    int x9467 = x9466;
    int* x9468 = &x9467;
    char* x9469 = strntoi_unchecked(x6819, x9468);
    x6819 = x9469;
    char* x10536 = (char*)malloc(56 * sizeof(char));
    memset(x10536, 0, 56 * sizeof(char));
    /* VAR */ char* x9472 = x6819;
    while(1) {
      
      char x9473 = *x6819;
      /* VAR */ int ite21226 = 0;
      if((x9473!=('|'))) {
        char x24194 = *x6819;
        ite21226 = (x24194!=('\n'));
      } else {
        
        ite21226 = 0;
      };
      int x19906 = ite21226;
      if (!(x19906)) break; 
      
      x6819 += 1;
    };
    char* x9480 = x9472;
    int x9481 = x6819 - x9480;
    char* x9482 = x9472;
    char* x9483 = strncpy(x10536, x9482, x9481);
    x6819 += 1;
    char* x10554 = (char*)malloc(26 * sizeof(char));
    memset(x10554, 0, 26 * sizeof(char));
    /* VAR */ char* x9491 = x6819;
    while(1) {
      
      char x9492 = *x6819;
      /* VAR */ int ite21249 = 0;
      if((x9492!=('|'))) {
        char x24216 = *x6819;
        ite21249 = (x24216!=('\n'));
      } else {
        
        ite21249 = 0;
      };
      int x19922 = ite21249;
      if (!(x19922)) break; 
      
      x6819 += 1;
    };
    char* x9499 = x9491;
    int x9500 = x6819 - x9499;
    char* x9501 = x9491;
    char* x9502 = strncpy(x10554, x9501, x9500);
    x6819 += 1;
    char* x10572 = (char*)malloc(11 * sizeof(char));
    memset(x10572, 0, 11 * sizeof(char));
    /* VAR */ char* x9510 = x6819;
    while(1) {
      
      char x9511 = *x6819;
      /* VAR */ int ite21272 = 0;
      if((x9511!=('|'))) {
        char x24238 = *x6819;
        ite21272 = (x24238!=('\n'));
      } else {
        
        ite21272 = 0;
      };
      int x19938 = ite21272;
      if (!(x19938)) break; 
      
      x6819 += 1;
    };
    char* x9518 = x9510;
    int x9519 = x6819 - x9518;
    char* x9520 = x9510;
    char* x9521 = strncpy(x10572, x9520, x9519);
    x6819 += 1;
    char* x10590 = (char*)malloc(26 * sizeof(char));
    memset(x10590, 0, 26 * sizeof(char));
    /* VAR */ char* x9529 = x6819;
    while(1) {
      
      char x9530 = *x6819;
      /* VAR */ int ite21295 = 0;
      if((x9530!=('|'))) {
        char x24260 = *x6819;
        ite21295 = (x24260!=('\n'));
      } else {
        
        ite21295 = 0;
      };
      int x19954 = ite21295;
      if (!(x19954)) break; 
      
      x6819 += 1;
    };
    char* x9537 = x9529;
    int x9538 = x6819 - x9537;
    char* x9539 = x9529;
    char* x9540 = strncpy(x10590, x9539, x9538);
    x6819 += 1;
    /* VAR */ int x9547 = 0;
    int x9548 = x9547;
    int* x9549 = &x9548;
    char* x9550 = strntoi_unchecked(x6819, x9549);
    x6819 = x9550;
    char* x10613 = (char*)malloc(11 * sizeof(char));
    memset(x10613, 0, 11 * sizeof(char));
    /* VAR */ char* x9553 = x6819;
    while(1) {
      
      char x9554 = *x6819;
      /* VAR */ int ite21323 = 0;
      if((x9554!=('|'))) {
        char x24287 = *x6819;
        ite21323 = (x24287!=('\n'));
      } else {
        
        ite21323 = 0;
      };
      int x19975 = ite21323;
      if (!(x19975)) break; 
      
      x6819 += 1;
    };
    char* x9561 = x9553;
    int x9562 = x6819 - x9561;
    char* x9563 = x9553;
    char* x9564 = strncpy(x10613, x9563, x9562);
    x6819 += 1;
    /* VAR */ double x9571 = 0.0;
    double x9572 = x9571;
    double* x9573 = &x9572;
    char* x9574 = strntod_unchecked(x6819, x9573);
    x6819 = x9574;
    char* x10636 = (char*)malloc(24 * sizeof(char));
    memset(x10636, 0, 24 * sizeof(char));
    /* VAR */ char* x9577 = x6819;
    while(1) {
      
      char x9578 = *x6819;
      /* VAR */ int ite21351 = 0;
      if((x9578!=('|'))) {
        char x24314 = *x6819;
        ite21351 = (x24314!=('\n'));
      } else {
        
        ite21351 = 0;
      };
      int x19996 = ite21351;
      if (!(x19996)) break; 
      
      x6819 += 1;
    };
    char* x9585 = x9577;
    int x9586 = x6819 - x9585;
    char* x9587 = x9577;
    char* x9588 = strncpy(x10636, x9587, x9586);
    x6819 += 1;
    void* x12286 = &(x10590);
    GArray* x12287 = g_array_append_vals(x11938, x12286, 1);
    int x3518 = x3410;
    if((x3518>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "P_TYPE", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "P_TYPE");
    };
    /* VAR */ int x12293 = -1;
    int x12294 = x11936->len;
    int x17925 = 0;
    for(; x17925 < x12294 ; x17925 += 1) {
      
      char* x17926 = g_array_index(x11936, char*, x17925);
      int x17927 = strcmp(x17926, x10590);
      int x17928 = !(x17927);
      if(x17928) {
        x12293 = x17925;
        break;
      };
    };
    int x12304 = x12293;
    int x3524 = !((x12304!=(-1)));
    if(x3524) {
      int x3525 = x3410;
      x3410 = (x3525+(1));
      void* x12311 = &(x10590);
      GArray* x12312 = g_array_append_vals(x11936, x12311, 1);
    };
    /* VAR */ int x12313 = -1;
    int x12314 = x11936->len;
    int x17952 = 0;
    for(; x17952 < x12314 ; x17952 += 1) {
      
      char* x17953 = g_array_index(x11936, char*, x17952);
      int x17954 = strcmp(x17953, x10590);
      int x17955 = !(x17954);
      if(x17955) {
        x12313 = x17952;
        break;
      };
    };
    int x12324 = x12313;
    struct PARTRecord* x11210 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x11210, 0, 1 * sizeof(struct PARTRecord));
    x11210->P_PARTKEY = x9467; x11210->P_TYPE = x12324;
    int x111 = x6820;
    if((x11210==(NULL))) {
      *(x10513 + x111) = (const struct PARTRecord){0};
    } else {
      
      struct PARTRecord x10672 = *x11210;
      *(x10513 + x111) = x10672;
      struct PARTRecord* x10674 = &(x10513[x111]);
      x11210 = x10674;
    };
    int x113 = x6820;
    x6820 = (x113+(1));
  };
  int x118 = 0;
  for(; x118 < 1 ; x118 += 1) {
    
    double* x24891 = (double*)malloc(3 * sizeof(double));
    memset(x24891, 0, 3 * sizeof(double));
    g_array_sort(x11936, x24897);
    /* VAR */ int x24905 = 0;
    int x17997 = 0;
    for(; x17997 < x9249 ; x17997 += 1) {
      
      int x17998 = x24905;
      x24905 = (x17998+(1));
    };
    /* VAR */ int x24915 = 0;
    int x18008 = 0;
    for(; x18008 < x9249 ; x18008 += 1) {
      
      int x18009 = x24915;
      x24915 = (x18009+(1));
    };
    /* VAR */ int x24925 = 0;
    int x18042 = 0;
    for(; x18042 < x9444 ; x18042 += 1) {
      
      struct PARTRecord* x18043 = &(x10513[x18042]);
      int x18044 = x24925;
      char* x18045 = g_array_index(x11938, char*, x18044);
      /* VAR */ int x18046 = -1;
      int x18047 = x11936->len;
      int x18029 = 0;
      for(; x18029 < x18047 ; x18029 += 1) {
        
        char* x18030 = g_array_index(x11936, char*, x18029);
        int x18031 = strcmp(x18030, x18045);
        int x18032 = !(x18031);
        if(x18032) {
          x18046 = x18029;
          break;
        };
      };
      int x18063 = x18046;
      x18043->P_TYPE = x18063;
      int x18065 = x24925;
      x24925 = (x18065+(1));
    };
    /* VAR */ int x24979 = 0;
    int x18098 = 0;
    for(; x18098 < x9444 ; x18098 += 1) {
      
      struct PARTRecord* x18099 = &(x10513[x18098]);
      int x18100 = x24979;
      char* x18101 = g_array_index(x11938, char*, x18100);
      /* VAR */ int x18102 = -1;
      int x18103 = x11936->len;
      int x18085 = 0;
      for(; x18085 < x18103 ; x18085 += 1) {
        
        char* x18086 = g_array_index(x11936, char*, x18085);
        int x18087 = strcmp(x18086, x18101);
        int x18088 = !(x18087);
        if(x18088) {
          x18102 = x18085;
          break;
        };
      };
      int x18119 = x18102;
      x18099->P_TYPE = x18119;
      int x18121 = x24979;
      x24979 = (x18121+(1));
    };
    struct LINEITEMRecord** x25033 = (struct LINEITEMRecord**)malloc(96 * sizeof(struct LINEITEMRecord*));
    memset(x25033, 0, 96 * sizeof(struct LINEITEMRecord*));
    int* x25034 = (int*)malloc(96 * sizeof(int));
    memset(x25034, 0, 96 * sizeof(int));
    int x18133 = 0;
    for(; x18133 < 96 ; x18133 += 1) {
      
      struct LINEITEMRecord* x18136 = (struct LINEITEMRecord*)malloc(((x9249/(96))*(4)) * sizeof(struct LINEITEMRecord));
      memset(x18136, 0, ((x9249/(96))*(4)) * sizeof(struct LINEITEMRecord));
      *(x25033 + x18133) = x18136;
    };
    /* VAR */ int x25046 = 0;
    int x18165 = 0;
    for(; x18165 < x9249 ; x18165 += 1) {
      
      struct LINEITEMRecord* x18166 = &(x10315[x18165]);
      int x18168 = (x18166->L_SHIPDATE)/(100);
      int x18174 = (((x18168/(100))-(1992))*(12))+(((x18168%(100))-(1)));
      int x18175 = x25034[x18174];
      struct LINEITEMRecord* x18176 = x25033[x18174];
      if((x18166==(NULL))) {
        *(x18176 + x18175) = (const struct LINEITEMRecord){0};
      } else {
        
        struct LINEITEMRecord x10759 = *x18166;
        *(x18176 + x18175) = x10759;
        struct LINEITEMRecord* x10761 = &(x18176[x18175]);
        x18166 = x10761;
      };
      *(x25034 + x18174) = (x18175+(1));
      int x18186 = x25046;
      x25046 = (x18186+(1));
    };
    /* VAR */ struct timeval x25096 = x8897;
    struct timeval x25097 = x25096;
    /* VAR */ struct timeval x25098 = x8897;
    struct timeval x25099 = x25098;
    /* VAR */ struct timeval x25100 = x8897;
    struct timeval x25101 = x25100;
    struct timeval* x25102 = &x25099;
    gettimeofday(x25102, NULL);
    /* VAR */ int x25109 = -1;
    int x25110 = x11936->len;
    int x18217 = 0;
    for(; x18217 < x25110 ; x18217 += 1) {
      
      char* x18218 = g_array_index(x11936, char*, x18217);
      int x18219 = strlen("PROMO");
      int x18220 = strncmp(x18218, "PROMO", x18219);
      /* VAR */ int ite22185 = 0;
      if((x18220==(0))) {
        int x25135 = x25109;
        ite22185 = (x25135==(-1));
      } else {
        
        ite22185 = 0;
      };
      int x20754 = ite22185;
      if(x20754) {
        x25109 = x18217;
        break;
      };
    };
    int x25144 = x25109;
    /* VAR */ int x25150 = -1;
    int x25151 = x11936->len;
    int x18245 = 0;
    for(; x18245 < x25151 ; x18245 += 1) {
      
      char* x18246 = g_array_index(x11936, char*, x18245);
      int x18247 = strlen("PROMO");
      int x18248 = strncmp(x18246, "PROMO", x18247);
      if((x18248==(0))) {
        x25150 = x18245;
      };
    };
    int x25167 = x25150;
    /* VAR */ int x25168 = 0;
    int x18327 = 26;
    for(; x18327 < 28 ; x18327 += 1) {
      
      int x18328 = x25034[x18327];
      struct LINEITEMRecord* x18329 = x25033[x18327];
      int x18293 = 0;
      for(; x18293 < x18328 ; x18293 += 1) {
        
        struct LINEITEMRecord* x18294 = &(x18329[x18293]);
        int x18295 = x18294->L_SHIPDATE;
        /* VAR */ int ite22385 = 0;
        if((x18295>=(19940301))) {
          ite22385 = (x18295<(19940401));
        } else {
          
          ite22385 = 0;
        };
        int x20911 = ite22385;
        if(x20911) {
          int x212 = x18294->L_PARTKEY;
          struct PARTRecord* x6970 = &(x10513[(x212-(1))]);
          if(((x6970->P_PARTKEY)==(x212))) {
            if(((x6970->P_PARTKEY)==(x212))) {
              int x3628 = x6970->P_TYPE;
              double x670 = x18294->L_EXTENDEDPRICE;
              double x671 = x18294->L_DISCOUNT;
              double x293 = x24891[0];
              /* VAR */ int ite22408 = 0;
              if((x3628>=(x25144))) {
                ite22408 = (x3628<=(x25167));
              } else {
                
                ite22408 = 0;
              };
              int x20928 = ite22408;
              /* VAR */ double ite20930 = 0;
              if(x20928) {
                ite20930 = (x293+((x670*((1.0-(x671))))));
              } else {
                
                ite20930 = x293;
              };
              double x301 = ite20930;
              *x24891 = x301;
              double x309 = x24891[1];
              *(x24891 + 1) = (x309+((x670*((1.0-(x671))))));
            };
          };
        };
      };
    };
    double x25370 = x24891[0];
    double x25372 = x24891[1];
    *(x24891 + 2) = ((x25370*(100.0))/(x25372));
    double x25375 = x24891[2];
    printf("%.4f\n", x25375);
    printf("(%d rows)\n", 1);
    struct timeval* x25378 = &x25101;
    gettimeofday(x25378, NULL);
    struct timeval* x25380 = &x25097;
    struct timeval* x25381 = &x25101;
    struct timeval* x25382 = &x25099;
    long x25383 = timeval_subtract(x25380, x25381, x25382);
    printf("Generated code run in %ld milliseconds.\n", x25383);
  };
}
/* ----------- FUNCTIONS ----------- */
int x24897(char** x12348, char** x12349) {
  char* x12350 = *x12349;
  char* x12351 = *x12348;
  int x16722 = strcmp(x12350, x12351);
  return (x16722<(0)); 
}
