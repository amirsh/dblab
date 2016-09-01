#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct Q16GRPRecord2;
struct AGGRecord_Q16GRPRecord2;
struct Q16GRPRecord1;
struct PARTRecord;
struct SUPPLIERRecord;
struct AGGRecord_Q16GRPRecord1;
struct PARTSUPPRecord;
struct Q16GRPRecord2 {
  numeric_int_t P_BRAND;
  numeric_int_t P_TYPE;
  numeric_int_t P_SIZE;
};

struct AGGRecord_Q16GRPRecord2 {
  struct Q16GRPRecord2* key;
  double aggs;
  struct AGGRecord_Q16GRPRecord2* next;
};

struct Q16GRPRecord1 {
  numeric_int_t P_BRAND;
  numeric_int_t P_TYPE;
  numeric_int_t P_SIZE;
  numeric_int_t PS_SUPPKEY;
};

struct PARTRecord {
  numeric_int_t P_PARTKEY;
  numeric_int_t P_BRAND;
  numeric_int_t P_TYPE;
  numeric_int_t P_SIZE;
};

struct SUPPLIERRecord {
  numeric_int_t S_SUPPKEY;
  char* S_COMMENT;
};

struct AGGRecord_Q16GRPRecord1 {
  struct Q16GRPRecord1* key;
  double aggs;
  struct AGGRecord_Q16GRPRecord1* next;
};

struct PARTSUPPRecord {
  numeric_int_t PS_PARTKEY;
  numeric_int_t PS_SUPPKEY;
};


boolean_t x687250(char** x658823, char** x658824);

boolean_t x687263(char** x658836, char** x658837);

numeric_int_t x687781(struct AGGRecord_Q16GRPRecord2* x639101, struct AGGRecord_Q16GRPRecord2* x639102);

numeric_int_t x659421(void* x659415, void* x659416, void* x659417);

int main(int argc, char** argv) {
  /* VAR */ long mallocSym_656109_691555 = 0L;
  /* VAR */ long mallocSym_656102_691556 = 0L;
  /* VAR */ long mallocSym_655939_691557 = 0L;
  /* VAR */ long mallocSym_655923_691558 = 0L;
  /* VAR */ long mallocSym_685606_691559 = 0L;
  /* VAR */ long mallocSym_655813_691560 = 0L;
  /* VAR */ long mallocSym_685886_691561 = 0L;
  /* VAR */ long mallocSym_655792_691562 = 0L;
  /* VAR */ long mallocSym_655907_691563 = 0L;
  /* VAR */ long mallocSym_655834_691564 = 0L;
  /* VAR */ long mallocSym_687504_691565 = 0L;
  /* VAR */ long mallocSym_687573_691566 = 0L;
  /* VAR */ long mallocSym_687238_691567 = 0L;
  /* VAR */ long mallocSym_686308_691568 = 0L;
  /* VAR */ long mallocSym_655981_691569 = 0L;
  /* VAR */ long mallocSym_655733_691570 = 0L;
  /* VAR */ long mallocSym_656710_691571 = 0L;
  /* VAR */ long mallocSym_655891_691572 = 0L;
  /* VAR */ long mallocSym_657120_691573 = 0L;
  /* VAR */ long mallocSym_656887_691574 = 0L;
  /* VAR */ long mallocSym_686288_691575 = 0L;
  /* VAR */ long mallocSym_655960_691576 = 0L;
  /* VAR */ long mallocSym_685451_691577 = 0L;
  /* VAR */ long mallocSym_686259_691578 = 0L;
  /* VAR */ long mallocSym_656961_691579 = 0L;
  /* VAR */ long mallocSym_686239_691580 = 0L;
  /* VAR */ long mallocSym_657141_691581 = 0L;
  /* VAR */ long mallocSym_655776_691582 = 0L;
  /* VAR */ long mallocSym_687524_691583 = 0L;
  /* VAR */ long mallocSym_687231_691584 = 0L;
  /* VAR */ long mallocSym_687553_691585 = 0L;
  /* VAR */ long mallocSym_657079_691586 = 0L;
  /* VAR */ long mallocSym_657100_691587 = 0L;
  /* VAR */ long mallocSym_656081_691588 = 0L;
  /* VAR */ numeric_int_t x649765 = 0;
  numeric_int_t x658368 = sizeof(char*);
  GArray* x658369 = g_array_new(0, 1, x658368);
  numeric_int_t x658370 = sizeof(char*);
  GArray* x658371 = g_array_new(0, 1, x658370);
  /* VAR */ numeric_int_t x649768 = 0;
  numeric_int_t x658373 = sizeof(char*);
  GArray* x658374 = g_array_new(0, 1, x658373);
  numeric_int_t x658375 = sizeof(char*);
  GArray* x658376 = g_array_new(0, 1, x658375);
  /* VAR */ numeric_int_t x649771 = 0;
  numeric_int_t* x691600 = (numeric_int_t*)malloc(12000000 * sizeof(numeric_int_t));
  memset(x691600, 0, 12000000 * sizeof(numeric_int_t));
  long x691601 = mallocSym_655733_691570;
  mallocSym_655733_691570 = (x691601+(((long){12000000})));
  FILE* x685445 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ numeric_int_t x685446 = 0;
  numeric_int_t x685447 = x685446;
  numeric_int_t* x685448 = &x685447;
  numeric_int_t x685449 = fscanf(x685445, "%d", x685448);
  pclose(x685445);
  struct SUPPLIERRecord* x691611 = (struct SUPPLIERRecord*)malloc(x685447 * sizeof(struct SUPPLIERRecord));
  memset(x691611, 0, x685447 * sizeof(struct SUPPLIERRecord));
  long x691612 = mallocSym_685451_691577;
  mallocSym_685451_691577 = (x691612+(((long){x685447})));
  numeric_int_t x685452 = O_RDONLY;
  numeric_int_t x685453 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x685452);
  struct stat x685454 = (struct stat){0};
  /* VAR */ struct stat x685455 = x685454;
  struct stat x685456 = x685455;
  struct stat* x685457 = &x685456;
  numeric_int_t x685458 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x685457);
  numeric_int_t x685460 = PROT_READ;
  numeric_int_t x685461 = MAP_PRIVATE;
  char* x685462 = mmap(NULL, (x685457->st_size), x685460, x685461, x685453, 0);
  /* VAR */ numeric_int_t x685463 = 0;
  while(1) {
    
    numeric_int_t x638941 = x685463;
    /* VAR */ boolean_t ite676071 = 0;
    if((x638941<(x685447))) {
      char x685469 = *x685462;
      ite676071 = (x685469!=('\0'));
    } else {
      
      ite676071 = 0;
    };
    boolean_t x673596 = ite676071;
    if (!(x673596)) break; 
    
    /* VAR */ numeric_int_t x654126 = 0;
    numeric_int_t x654127 = x654126;
    numeric_int_t* x654128 = &x654127;
    char* x654129 = strntoi_unchecked(x685462, x654128);
    x685462 = x654129;
    /* VAR */ char* x654131 = x685462;
    while(1) {
      
      char x654132 = *x685462;
      /* VAR */ boolean_t ite676089 = 0;
      if((x654132!=('|'))) {
        char x685486 = *x685462;
        ite676089 = (x685486!=('\n'));
      } else {
        
        ite676089 = 0;
      };
      boolean_t x673607 = ite676089;
      if (!(x673607)) break; 
      
      x685462 += 1;
    };
    char* x654139 = x654131;
    numeric_int_t x654140 = x685462 - x654139;
    numeric_int_t x654141 = x654140+(1);
    char* x691660 = (char*)malloc(x654141 * sizeof(char));
    memset(x691660, 0, x654141 * sizeof(char));
    long x691661 = mallocSym_655776_691582;
    mallocSym_655776_691582 = (x691661+(((long){x654141})));
    char* x654144 = x654131;
    char* x654145 = strncpy(x691660, x654144, x654140);
    x685462 += 1;
    /* VAR */ char* x654147 = x685462;
    while(1) {
      
      char x654148 = *x685462;
      /* VAR */ boolean_t ite676110 = 0;
      if((x654148!=('|'))) {
        char x685506 = *x685462;
        ite676110 = (x685506!=('\n'));
      } else {
        
        ite676110 = 0;
      };
      boolean_t x673621 = ite676110;
      if (!(x673621)) break; 
      
      x685462 += 1;
    };
    char* x654155 = x654147;
    numeric_int_t x654156 = x685462 - x654155;
    numeric_int_t x654157 = x654156+(1);
    char* x691684 = (char*)malloc(x654157 * sizeof(char));
    memset(x691684, 0, x654157 * sizeof(char));
    long x691685 = mallocSym_655792_691562;
    mallocSym_655792_691562 = (x691685+(((long){x654157})));
    char* x654160 = x654147;
    char* x654161 = strncpy(x691684, x654160, x654156);
    x685462 += 1;
    /* VAR */ numeric_int_t x654163 = 0;
    numeric_int_t x654164 = x654163;
    numeric_int_t* x654165 = &x654164;
    char* x654166 = strntoi_unchecked(x685462, x654165);
    x685462 = x654166;
    /* VAR */ char* x654168 = x685462;
    while(1) {
      
      char x654169 = *x685462;
      /* VAR */ boolean_t ite676136 = 0;
      if((x654169!=('|'))) {
        char x685531 = *x685462;
        ite676136 = (x685531!=('\n'));
      } else {
        
        ite676136 = 0;
      };
      boolean_t x673640 = ite676136;
      if (!(x673640)) break; 
      
      x685462 += 1;
    };
    char* x654176 = x654168;
    numeric_int_t x654177 = x685462 - x654176;
    numeric_int_t x654178 = x654177+(1);
    char* x691713 = (char*)malloc(x654178 * sizeof(char));
    memset(x691713, 0, x654178 * sizeof(char));
    long x691714 = mallocSym_655813_691560;
    mallocSym_655813_691560 = (x691714+(((long){x654178})));
    char* x654181 = x654168;
    char* x654182 = strncpy(x691713, x654181, x654177);
    x685462 += 1;
    /* VAR */ double x654184 = 0.0;
    double x654185 = x654184;
    double* x654186 = &x654185;
    char* x654187 = strntod_unchecked(x685462, x654186);
    x685462 = x654187;
    /* VAR */ char* x654189 = x685462;
    while(1) {
      
      char x654190 = *x685462;
      /* VAR */ boolean_t ite676162 = 0;
      if((x654190!=('|'))) {
        char x685556 = *x685462;
        ite676162 = (x685556!=('\n'));
      } else {
        
        ite676162 = 0;
      };
      boolean_t x673659 = ite676162;
      if (!(x673659)) break; 
      
      x685462 += 1;
    };
    char* x654197 = x654189;
    numeric_int_t x654198 = x685462 - x654197;
    numeric_int_t x654199 = x654198+(1);
    char* x691742 = (char*)malloc(x654199 * sizeof(char));
    memset(x691742, 0, x654199 * sizeof(char));
    long x691743 = mallocSym_655834_691564;
    mallocSym_655834_691564 = (x691743+(((long){x654199})));
    char* x654202 = x654189;
    char* x654203 = strncpy(x691742, x654202, x654198);
    x685462 += 1;
    struct SUPPLIERRecord* x691750 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x691750, 0, 1 * sizeof(struct SUPPLIERRecord));
    long x691751 = mallocSym_656710_691571;
    mallocSym_656710_691571 = (x691751+(((long){1})));
    x691750->S_SUPPKEY = x654127; x691750->S_COMMENT = x691742;
    numeric_int_t x638953 = x685463;
    /* VAR */ boolean_t ite676184 = 0;
    if((x691750==(NULL))) {
      ite676184 = 1;
    } else {
      
      char* x685578 = x691750->S_COMMENT;
      /* VAR */ boolean_t x685580 = 0;
      if((x685578==(NULL))) {
        x685580 = 1;
      } else {
        
        boolean_t x685583 = strcmp(x685578, "");
        boolean_t x685584 = !(x685583);
        x685580 = x685584;
      };
      boolean_t x685587 = x685580;
      ite676184 = x685587;
    };
    boolean_t x673674 = ite676184;
    if(x673674) {
      *(x691611 + x638953) = (const struct SUPPLIERRecord){0};
    } else {
      
      struct SUPPLIERRecord x655843 = *x691750;
      *(x691611 + x638953) = x655843;
      struct SUPPLIERRecord* x655845 = &(x691611[x638953]);
      x691750 = x655845;
    };
    numeric_int_t x638955 = x685463;
    x685463 = (x638955+(1));
  };
  FILE* x685600 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ numeric_int_t x685601 = 0;
  numeric_int_t x685602 = x685601;
  numeric_int_t* x685603 = &x685602;
  numeric_int_t x685604 = fscanf(x685600, "%d", x685603);
  pclose(x685600);
  struct PARTRecord* x691790 = (struct PARTRecord*)malloc(x685602 * sizeof(struct PARTRecord));
  memset(x691790, 0, x685602 * sizeof(struct PARTRecord));
  long x691791 = mallocSym_685606_691559;
  mallocSym_685606_691559 = (x691791+(((long){x685602})));
  numeric_int_t x685607 = O_RDONLY;
  numeric_int_t x685608 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x685607);
  /* VAR */ struct stat x685609 = x685454;
  struct stat x685610 = x685609;
  struct stat* x685611 = &x685610;
  numeric_int_t x685612 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x685611);
  numeric_int_t x685614 = PROT_READ;
  numeric_int_t x685615 = MAP_PRIVATE;
  char* x685616 = mmap(NULL, (x685611->st_size), x685614, x685615, x685608, 0);
  /* VAR */ numeric_int_t x685617 = 0;
  while(1) {
    
    numeric_int_t x638963 = x685617;
    /* VAR */ boolean_t ite676225 = 0;
    if((x638963<(x685602))) {
      char x685623 = *x685616;
      ite676225 = (x685623!=('\0'));
    } else {
      
      ite676225 = 0;
    };
    boolean_t x673706 = ite676225;
    if (!(x673706)) break; 
    
    /* VAR */ numeric_int_t x654235 = 0;
    numeric_int_t x654236 = x654235;
    numeric_int_t* x654237 = &x654236;
    char* x654238 = strntoi_unchecked(x685616, x654237);
    x685616 = x654238;
    /* VAR */ char* x654240 = x685616;
    while(1) {
      
      char x654241 = *x685616;
      /* VAR */ boolean_t ite676243 = 0;
      if((x654241!=('|'))) {
        char x685640 = *x685616;
        ite676243 = (x685640!=('\n'));
      } else {
        
        ite676243 = 0;
      };
      boolean_t x673717 = ite676243;
      if (!(x673717)) break; 
      
      x685616 += 1;
    };
    char* x654248 = x654240;
    numeric_int_t x654249 = x685616 - x654248;
    numeric_int_t x654250 = x654249+(1);
    char* x691838 = (char*)malloc(x654250 * sizeof(char));
    memset(x691838, 0, x654250 * sizeof(char));
    long x691839 = mallocSym_655891_691572;
    mallocSym_655891_691572 = (x691839+(((long){x654250})));
    char* x654253 = x654240;
    char* x654254 = strncpy(x691838, x654253, x654249);
    x685616 += 1;
    /* VAR */ char* x654256 = x685616;
    while(1) {
      
      char x654257 = *x685616;
      /* VAR */ boolean_t ite676264 = 0;
      if((x654257!=('|'))) {
        char x685660 = *x685616;
        ite676264 = (x685660!=('\n'));
      } else {
        
        ite676264 = 0;
      };
      boolean_t x673731 = ite676264;
      if (!(x673731)) break; 
      
      x685616 += 1;
    };
    char* x654264 = x654256;
    numeric_int_t x654265 = x685616 - x654264;
    numeric_int_t x654266 = x654265+(1);
    char* x691862 = (char*)malloc(x654266 * sizeof(char));
    memset(x691862, 0, x654266 * sizeof(char));
    long x691863 = mallocSym_655907_691563;
    mallocSym_655907_691563 = (x691863+(((long){x654266})));
    char* x654269 = x654256;
    char* x654270 = strncpy(x691862, x654269, x654265);
    x685616 += 1;
    /* VAR */ char* x654272 = x685616;
    while(1) {
      
      char x654273 = *x685616;
      /* VAR */ boolean_t ite676285 = 0;
      if((x654273!=('|'))) {
        char x685680 = *x685616;
        ite676285 = (x685680!=('\n'));
      } else {
        
        ite676285 = 0;
      };
      boolean_t x673745 = ite676285;
      if (!(x673745)) break; 
      
      x685616 += 1;
    };
    char* x654280 = x654272;
    numeric_int_t x654281 = x685616 - x654280;
    numeric_int_t x654282 = x654281+(1);
    char* x691886 = (char*)malloc(x654282 * sizeof(char));
    memset(x691886, 0, x654282 * sizeof(char));
    long x691887 = mallocSym_655923_691558;
    mallocSym_655923_691558 = (x691887+(((long){x654282})));
    char* x654285 = x654272;
    char* x654286 = strncpy(x691886, x654285, x654281);
    x685616 += 1;
    /* VAR */ char* x654288 = x685616;
    while(1) {
      
      char x654289 = *x685616;
      /* VAR */ boolean_t ite676306 = 0;
      if((x654289!=('|'))) {
        char x685700 = *x685616;
        ite676306 = (x685700!=('\n'));
      } else {
        
        ite676306 = 0;
      };
      boolean_t x673759 = ite676306;
      if (!(x673759)) break; 
      
      x685616 += 1;
    };
    char* x654296 = x654288;
    numeric_int_t x654297 = x685616 - x654296;
    numeric_int_t x654298 = x654297+(1);
    char* x691910 = (char*)malloc(x654298 * sizeof(char));
    memset(x691910, 0, x654298 * sizeof(char));
    long x691911 = mallocSym_655939_691557;
    mallocSym_655939_691557 = (x691911+(((long){x654298})));
    char* x654301 = x654288;
    char* x654302 = strncpy(x691910, x654301, x654297);
    x685616 += 1;
    /* VAR */ numeric_int_t x654304 = 0;
    numeric_int_t x654305 = x654304;
    numeric_int_t* x654306 = &x654305;
    char* x654307 = strntoi_unchecked(x685616, x654306);
    x685616 = x654307;
    /* VAR */ char* x654309 = x685616;
    while(1) {
      
      char x654310 = *x685616;
      /* VAR */ boolean_t ite676332 = 0;
      if((x654310!=('|'))) {
        char x685725 = *x685616;
        ite676332 = (x685725!=('\n'));
      } else {
        
        ite676332 = 0;
      };
      boolean_t x673778 = ite676332;
      if (!(x673778)) break; 
      
      x685616 += 1;
    };
    char* x654317 = x654309;
    numeric_int_t x654318 = x685616 - x654317;
    numeric_int_t x654319 = x654318+(1);
    char* x691939 = (char*)malloc(x654319 * sizeof(char));
    memset(x691939, 0, x654319 * sizeof(char));
    long x691940 = mallocSym_655960_691576;
    mallocSym_655960_691576 = (x691940+(((long){x654319})));
    char* x654322 = x654309;
    char* x654323 = strncpy(x691939, x654322, x654318);
    x685616 += 1;
    /* VAR */ double x654325 = 0.0;
    double x654326 = x654325;
    double* x654327 = &x654326;
    char* x654328 = strntod_unchecked(x685616, x654327);
    x685616 = x654328;
    /* VAR */ char* x654330 = x685616;
    while(1) {
      
      char x654331 = *x685616;
      /* VAR */ boolean_t ite676358 = 0;
      if((x654331!=('|'))) {
        char x685750 = *x685616;
        ite676358 = (x685750!=('\n'));
      } else {
        
        ite676358 = 0;
      };
      boolean_t x673797 = ite676358;
      if (!(x673797)) break; 
      
      x685616 += 1;
    };
    char* x654338 = x654330;
    numeric_int_t x654339 = x685616 - x654338;
    numeric_int_t x654340 = x654339+(1);
    char* x691968 = (char*)malloc(x654340 * sizeof(char));
    memset(x691968, 0, x654340 * sizeof(char));
    long x691969 = mallocSym_655981_691569;
    mallocSym_655981_691569 = (x691969+(((long){x654340})));
    char* x654343 = x654330;
    char* x654344 = strncpy(x691968, x654343, x654339);
    x685616 += 1;
    void* x658633 = &(x691886);
    GArray* x658634 = g_array_append_vals(x658371, x658633, 1);
    numeric_int_t x649815 = x649765;
    if((x649815>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "P_BRAND", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "P_BRAND");
    };
    /* VAR */ numeric_int_t x658640 = -1;
    numeric_int_t x658641 = x658369->len;
    numeric_int_t x669911 = 0;
    for(; x669911 < x658641 ; x669911 += 1) {
      
      char* x669912 = g_array_index(x658369, char*, x669911);
      boolean_t x669913 = strcmp(x669912, x691886);
      boolean_t x669914 = !(x669913);
      if(x669914) {
        x658640 = x669911;
        break;
      };
    };
    numeric_int_t x658651 = x658640;
    boolean_t x649821 = !((x658651!=(-1)));
    if(x649821) {
      numeric_int_t x649822 = x649765;
      x649765 = (x649822+(1));
      void* x658658 = &(x691886);
      GArray* x658659 = g_array_append_vals(x658369, x658658, 1);
    };
    /* VAR */ numeric_int_t x658660 = -1;
    numeric_int_t x658661 = x658369->len;
    numeric_int_t x669938 = 0;
    for(; x669938 < x658661 ; x669938 += 1) {
      
      char* x669939 = g_array_index(x658369, char*, x669938);
      boolean_t x669940 = strcmp(x669939, x691886);
      boolean_t x669941 = !(x669940);
      if(x669941) {
        x658660 = x669938;
        break;
      };
    };
    numeric_int_t x658671 = x658660;
    void* x658672 = &(x691910);
    GArray* x658673 = g_array_append_vals(x658376, x658672, 1);
    numeric_int_t x649829 = x649768;
    if((x649829>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "P_TYPE", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "P_TYPE");
    };
    /* VAR */ numeric_int_t x658679 = -1;
    numeric_int_t x658680 = x658374->len;
    numeric_int_t x669964 = 0;
    for(; x669964 < x658680 ; x669964 += 1) {
      
      char* x669965 = g_array_index(x658374, char*, x669964);
      boolean_t x669966 = strcmp(x669965, x691910);
      boolean_t x669967 = !(x669966);
      if(x669967) {
        x658679 = x669964;
        break;
      };
    };
    numeric_int_t x658690 = x658679;
    boolean_t x649835 = !((x658690!=(-1)));
    if(x649835) {
      numeric_int_t x649836 = x649768;
      x649768 = (x649836+(1));
      void* x658697 = &(x691910);
      GArray* x658698 = g_array_append_vals(x658374, x658697, 1);
    };
    /* VAR */ numeric_int_t x658699 = -1;
    numeric_int_t x658700 = x658374->len;
    numeric_int_t x669991 = 0;
    for(; x669991 < x658700 ; x669991 += 1) {
      
      char* x669992 = g_array_index(x658374, char*, x669991);
      boolean_t x669993 = strcmp(x669992, x691910);
      boolean_t x669994 = !(x669993);
      if(x669994) {
        x658699 = x669991;
        break;
      };
    };
    numeric_int_t x658710 = x658699;
    struct PARTRecord* x692078 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x692078, 0, 1 * sizeof(struct PARTRecord));
    long x692079 = mallocSym_656887_691574;
    mallocSym_656887_691574 = (x692079+(((long){1})));
    x692078->P_PARTKEY = x654236; x692078->P_BRAND = x658671; x692078->P_TYPE = x658710; x692078->P_SIZE = x654305;
    numeric_int_t x638977 = x685617;
    if((x692078==(NULL))) {
      *(x691790 + x638977) = (const struct PARTRecord){0};
    } else {
      
      struct PARTRecord x656018 = *x692078;
      *(x691790 + x638977) = x656018;
      struct PARTRecord* x656020 = &(x691790[x638977]);
      x692078 = x656020;
    };
    numeric_int_t x638979 = x685617;
    x685617 = (x638979+(1));
  };
  FILE* x685880 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ numeric_int_t x685881 = 0;
  numeric_int_t x685882 = x685881;
  numeric_int_t* x685883 = &x685882;
  numeric_int_t x685884 = fscanf(x685880, "%d", x685883);
  pclose(x685880);
  struct PARTSUPPRecord* x692102 = (struct PARTSUPPRecord*)malloc(x685882 * sizeof(struct PARTSUPPRecord));
  memset(x692102, 0, x685882 * sizeof(struct PARTSUPPRecord));
  long x692103 = mallocSym_685886_691561;
  mallocSym_685886_691561 = (x692103+(((long){x685882})));
  numeric_int_t x685887 = O_RDONLY;
  numeric_int_t x685888 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x685887);
  /* VAR */ struct stat x685889 = x685454;
  struct stat x685890 = x685889;
  struct stat* x685891 = &x685890;
  numeric_int_t x685892 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x685891);
  numeric_int_t x685894 = PROT_READ;
  numeric_int_t x685895 = MAP_PRIVATE;
  char* x685896 = mmap(NULL, (x685891->st_size), x685894, x685895, x685888, 0);
  /* VAR */ numeric_int_t x685897 = 0;
  while(1) {
    
    numeric_int_t x638987 = x685897;
    /* VAR */ boolean_t ite676512 = 0;
    if((x638987<(x685882))) {
      char x685903 = *x685896;
      ite676512 = (x685903!=('\0'));
    } else {
      
      ite676512 = 0;
    };
    boolean_t x673944 = ite676512;
    if (!(x673944)) break; 
    
    /* VAR */ numeric_int_t x654404 = 0;
    numeric_int_t x654405 = x654404;
    numeric_int_t* x654406 = &x654405;
    char* x654407 = strntoi_unchecked(x685896, x654406);
    x685896 = x654407;
    /* VAR */ numeric_int_t x654409 = 0;
    numeric_int_t x654410 = x654409;
    numeric_int_t* x654411 = &x654410;
    char* x654412 = strntoi_unchecked(x685896, x654411);
    x685896 = x654412;
    /* VAR */ numeric_int_t x654414 = 0;
    numeric_int_t x654415 = x654414;
    numeric_int_t* x654416 = &x654415;
    char* x654417 = strntoi_unchecked(x685896, x654416);
    x685896 = x654417;
    /* VAR */ double x654419 = 0.0;
    double x654420 = x654419;
    double* x654421 = &x654420;
    char* x654422 = strntod_unchecked(x685896, x654421);
    x685896 = x654422;
    /* VAR */ char* x654424 = x685896;
    while(1) {
      
      char x654425 = *x685896;
      /* VAR */ boolean_t ite676545 = 0;
      if((x654425!=('|'))) {
        char x685935 = *x685896;
        ite676545 = (x685935!=('\n'));
      } else {
        
        ite676545 = 0;
      };
      boolean_t x673970 = ite676545;
      if (!(x673970)) break; 
      
      x685896 += 1;
    };
    char* x654432 = x654424;
    numeric_int_t x654433 = x685896 - x654432;
    numeric_int_t x654434 = x654433+(1);
    char* x692165 = (char*)malloc(x654434 * sizeof(char));
    memset(x692165, 0, x654434 * sizeof(char));
    long x692166 = mallocSym_656081_691588;
    mallocSym_656081_691588 = (x692166+(((long){x654434})));
    char* x654437 = x654424;
    char* x654438 = strncpy(x692165, x654437, x654433);
    x685896 += 1;
    struct PARTSUPPRecord* x692173 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x692173, 0, 1 * sizeof(struct PARTSUPPRecord));
    long x692174 = mallocSym_656961_691579;
    mallocSym_656961_691579 = (x692174+(((long){1})));
    x692173->PS_PARTKEY = x654405; x692173->PS_SUPPKEY = x654410;
    numeric_int_t x638997 = x685897;
    if((x692173==(NULL))) {
      *(x692102 + x638997) = (const struct PARTSUPPRecord){0};
    } else {
      
      struct PARTSUPPRecord x656090 = *x692173;
      *(x692102 + x638997) = x656090;
      struct PARTSUPPRecord* x656092 = &(x692102[x638997]);
      x692173 = x656092;
    };
    numeric_int_t x638999 = x685897;
    x685897 = (x638999+(1));
  };
  numeric_int_t x639004 = 0;
  for(; x639004 < 1 ; x639004 += 1) {
    
    /* VAR */ numeric_int_t x687230 = 0;
    struct AGGRecord_Q16GRPRecord2* x693496 = (struct AGGRecord_Q16GRPRecord2*)malloc(1048576 * sizeof(struct AGGRecord_Q16GRPRecord2));
    memset(x693496, 0, 1048576 * sizeof(struct AGGRecord_Q16GRPRecord2));
    long x693497 = mallocSym_687231_691584;
    long x693498 = (long){1048576};
    mallocSym_687231_691584 = (x693497+(x693498));
    numeric_int_t x670094 = 0;
    for(; x670094 < 1048576 ; x670094 += 1) {
      
      *(x693496 + x670094) = (const struct AGGRecord_Q16GRPRecord2){0};
    };
    /* VAR */ numeric_int_t x687237 = 0;
    struct AGGRecord_Q16GRPRecord1* x693507 = (struct AGGRecord_Q16GRPRecord1*)malloc(1048576 * sizeof(struct AGGRecord_Q16GRPRecord1));
    memset(x693507, 0, 1048576 * sizeof(struct AGGRecord_Q16GRPRecord1));
    long x693508 = mallocSym_687238_691567;
    mallocSym_687238_691567 = (x693508+(x693498));
    numeric_int_t x670102 = 0;
    for(; x670102 < 1048576 ; x670102 += 1) {
      
      *(x693507 + x670102) = (const struct AGGRecord_Q16GRPRecord1){0};
    };
    x649771 = -1;
    g_array_sort(x658374, x687250);
    g_array_sort(x658369, x687263);
    /* VAR */ numeric_int_t x687271 = 0;
    numeric_int_t x670139 = 0;
    for(; x670139 < x685447 ; x670139 += 1) {
      
      numeric_int_t x670140 = x687271;
      x687271 = (x670140+(1));
    };
    /* VAR */ numeric_int_t x687281 = 0;
    numeric_int_t x670150 = 0;
    for(; x670150 < x685447 ; x670150 += 1) {
      
      numeric_int_t x670151 = x687281;
      x687281 = (x670151+(1));
    };
    /* VAR */ numeric_int_t x687291 = 0;
    numeric_int_t x670206 = 0;
    for(; x670206 < x685602 ; x670206 += 1) {
      
      struct PARTRecord* x670207 = &(x691790[x670206]);
      numeric_int_t x670208 = x687291;
      char* x670209 = g_array_index(x658371, char*, x670208);
      /* VAR */ numeric_int_t x670210 = -1;
      numeric_int_t x670211 = x658369->len;
      numeric_int_t x670171 = 0;
      for(; x670171 < x670211 ; x670171 += 1) {
        
        char* x670172 = g_array_index(x658369, char*, x670171);
        boolean_t x670173 = strcmp(x670172, x670209);
        boolean_t x670174 = !(x670173);
        if(x670174) {
          x670210 = x670171;
          break;
        };
      };
      numeric_int_t x670227 = x670210;
      x670207->P_BRAND = x670227;
      numeric_int_t x670229 = x687291;
      char* x670230 = g_array_index(x658376, char*, x670229);
      /* VAR */ numeric_int_t x670231 = -1;
      numeric_int_t x670232 = x658374->len;
      numeric_int_t x670193 = 0;
      for(; x670193 < x670232 ; x670193 += 1) {
        
        char* x670194 = g_array_index(x658374, char*, x670193);
        boolean_t x670195 = strcmp(x670194, x670230);
        boolean_t x670196 = !(x670195);
        if(x670196) {
          x670231 = x670193;
          break;
        };
      };
      numeric_int_t x670248 = x670231;
      x670207->P_TYPE = x670248;
      numeric_int_t x670250 = x687291;
      x687291 = (x670250+(1));
    };
    /* VAR */ numeric_int_t x687387 = 0;
    numeric_int_t x670305 = 0;
    for(; x670305 < x685602 ; x670305 += 1) {
      
      struct PARTRecord* x670306 = &(x691790[x670305]);
      numeric_int_t x670307 = x687387;
      char* x670308 = g_array_index(x658371, char*, x670307);
      /* VAR */ numeric_int_t x670309 = -1;
      numeric_int_t x670310 = x658369->len;
      numeric_int_t x670270 = 0;
      for(; x670270 < x670310 ; x670270 += 1) {
        
        char* x670271 = g_array_index(x658369, char*, x670270);
        boolean_t x670272 = strcmp(x670271, x670308);
        boolean_t x670273 = !(x670272);
        if(x670273) {
          x670309 = x670270;
          break;
        };
      };
      numeric_int_t x670326 = x670309;
      x670306->P_BRAND = x670326;
      numeric_int_t x670328 = x687387;
      char* x670329 = g_array_index(x658376, char*, x670328);
      /* VAR */ numeric_int_t x670330 = -1;
      numeric_int_t x670331 = x658374->len;
      numeric_int_t x670292 = 0;
      for(; x670292 < x670331 ; x670292 += 1) {
        
        char* x670293 = g_array_index(x658374, char*, x670292);
        boolean_t x670294 = strcmp(x670293, x670329);
        boolean_t x670295 = !(x670294);
        if(x670295) {
          x670330 = x670292;
          break;
        };
      };
      numeric_int_t x670347 = x670330;
      x670306->P_TYPE = x670347;
      numeric_int_t x670349 = x687387;
      x687387 = (x670349+(1));
    };
    /* VAR */ numeric_int_t x687483 = 0;
    numeric_int_t x670359 = 0;
    for(; x670359 < x685882 ; x670359 += 1) {
      
      numeric_int_t x670360 = x687483;
      x687483 = (x670360+(1));
    };
    /* VAR */ numeric_int_t x687493 = 0;
    numeric_int_t x670370 = 0;
    for(; x670370 < x685882 ; x670370 += 1) {
      
      numeric_int_t x670371 = x687493;
      x687493 = (x670371+(1));
    };
    /* VAR */ numeric_int_t x687503 = 0;
    struct Q16GRPRecord1* x693776 = (struct Q16GRPRecord1*)malloc(6400000 * sizeof(struct Q16GRPRecord1));
    memset(x693776, 0, 6400000 * sizeof(struct Q16GRPRecord1));
    long x693777 = mallocSym_687504_691565;
    long x693778 = (long){6400000};
    mallocSym_687504_691565 = (x693777+(x693778));
    /* VAR */ numeric_int_t x687505 = 0;
    while(1) {
      
      numeric_int_t x652876 = x687505;
      if (!((x652876<(6400000)))) break; 
      
      numeric_int_t x652878 = x687505;
      struct Q16GRPRecord1* x693786 = (struct Q16GRPRecord1*)malloc(1 * sizeof(struct Q16GRPRecord1));
      memset(x693786, 0, 1 * sizeof(struct Q16GRPRecord1));
      long x693787 = mallocSym_657079_691586;
      mallocSym_657079_691586 = (x693787+(((long){1})));
      x693786->P_BRAND = 0; x693786->P_TYPE = 0; x693786->P_SIZE = 0; x693786->PS_SUPPKEY = 0;
      if((x693786==(NULL))) {
        *(x693776 + x652878) = (const struct Q16GRPRecord1){0};
      } else {
        
        struct Q16GRPRecord1 x656205 = *x693786;
        *(x693776 + x652878) = x656205;
        struct Q16GRPRecord1* x656207 = &(x693776[x652878]);
        x693786 = x656207;
      };
      numeric_int_t x652881 = x687505;
      x687505 = (x652881+(1));
    };
    /* VAR */ numeric_int_t x687523 = 0;
    struct AGGRecord_Q16GRPRecord1* x693804 = (struct AGGRecord_Q16GRPRecord1*)malloc(6400000 * sizeof(struct AGGRecord_Q16GRPRecord1));
    memset(x693804, 0, 6400000 * sizeof(struct AGGRecord_Q16GRPRecord1));
    long x693805 = mallocSym_687524_691583;
    mallocSym_687524_691583 = (x693805+(x693778));
    /* VAR */ numeric_int_t x687525 = 0;
    while(1) {
      
      numeric_int_t x652888 = x687525;
      if (!((x652888<(6400000)))) break; 
      
      numeric_int_t x652890 = x687525;
      struct Q16GRPRecord1* x652891 = &(x693776[x652890]);
      struct AGGRecord_Q16GRPRecord1* x693814 = (struct AGGRecord_Q16GRPRecord1*)malloc(1 * sizeof(struct AGGRecord_Q16GRPRecord1));
      memset(x693814, 0, 1 * sizeof(struct AGGRecord_Q16GRPRecord1));
      long x693815 = mallocSym_657100_691587;
      mallocSym_657100_691587 = (x693815+(((long){1})));
      x693814->key = x652891; x693814->aggs = 0.0; x693814->next = NULL;
      /* VAR */ boolean_t ite678146 = 0;
      if((x693814==(NULL))) {
        ite678146 = 1;
      } else {
        
        ite678146 = ((x693814->key)==(NULL));
      };
      boolean_t x675323 = ite678146;
      if(x675323) {
        *(x693804 + x652890) = (const struct AGGRecord_Q16GRPRecord1){0};
      } else {
        
        struct AGGRecord_Q16GRPRecord1 x656224 = *x693814;
        *(x693804 + x652890) = x656224;
        struct AGGRecord_Q16GRPRecord1* x656226 = &(x693804[x652890]);
        x693814 = x656226;
      };
      numeric_int_t x652894 = x687525;
      x687525 = (x652894+(1));
    };
    /* VAR */ numeric_int_t x687552 = 0;
    struct Q16GRPRecord2* x693840 = (struct Q16GRPRecord2*)malloc(6400000 * sizeof(struct Q16GRPRecord2));
    memset(x693840, 0, 6400000 * sizeof(struct Q16GRPRecord2));
    long x693841 = mallocSym_687553_691585;
    mallocSym_687553_691585 = (x693841+(x693778));
    /* VAR */ numeric_int_t x687554 = 0;
    while(1) {
      
      numeric_int_t x652901 = x687554;
      if (!((x652901<(6400000)))) break; 
      
      numeric_int_t x652903 = x687554;
      struct Q16GRPRecord2* x693849 = (struct Q16GRPRecord2*)malloc(1 * sizeof(struct Q16GRPRecord2));
      memset(x693849, 0, 1 * sizeof(struct Q16GRPRecord2));
      long x693850 = mallocSym_657120_691573;
      mallocSym_657120_691573 = (x693850+(((long){1})));
      x693849->P_BRAND = 0; x693849->P_TYPE = 0; x693849->P_SIZE = 0;
      if((x693849==(NULL))) {
        *(x693840 + x652903) = (const struct Q16GRPRecord2){0};
      } else {
        
        struct Q16GRPRecord2 x656242 = *x693849;
        *(x693840 + x652903) = x656242;
        struct Q16GRPRecord2* x656244 = &(x693840[x652903]);
        x693849 = x656244;
      };
      numeric_int_t x652906 = x687554;
      x687554 = (x652906+(1));
    };
    /* VAR */ numeric_int_t x687572 = 0;
    struct AGGRecord_Q16GRPRecord2* x693867 = (struct AGGRecord_Q16GRPRecord2*)malloc(187500 * sizeof(struct AGGRecord_Q16GRPRecord2));
    memset(x693867, 0, 187500 * sizeof(struct AGGRecord_Q16GRPRecord2));
    long x693868 = mallocSym_687573_691566;
    mallocSym_687573_691566 = (x693868+(((long){187500})));
    /* VAR */ numeric_int_t x687574 = 0;
    while(1) {
      
      numeric_int_t x652913 = x687574;
      if (!((x652913<(187500)))) break; 
      
      numeric_int_t x652915 = x687574;
      struct Q16GRPRecord2* x652916 = &(x693840[x652915]);
      struct AGGRecord_Q16GRPRecord2* x693878 = (struct AGGRecord_Q16GRPRecord2*)malloc(1 * sizeof(struct AGGRecord_Q16GRPRecord2));
      memset(x693878, 0, 1 * sizeof(struct AGGRecord_Q16GRPRecord2));
      long x693879 = mallocSym_657141_691581;
      mallocSym_657141_691581 = (x693879+(((long){1})));
      x693878->key = x652916; x693878->aggs = 0.0; x693878->next = NULL;
      /* VAR */ boolean_t ite678196 = 0;
      if((x693878==(NULL))) {
        ite678196 = 1;
      } else {
        
        ite678196 = ((x693878->key)==(NULL));
      };
      boolean_t x675366 = ite678196;
      if(x675366) {
        *(x693867 + x652915) = (const struct AGGRecord_Q16GRPRecord2){0};
      } else {
        
        struct AGGRecord_Q16GRPRecord2 x656261 = *x693878;
        *(x693867 + x652915) = x656261;
        struct AGGRecord_Q16GRPRecord2* x656263 = &(x693867[x652915]);
        x693878 = x656263;
      };
      numeric_int_t x652919 = x687574;
      x687574 = (x652919+(1));
    };
    struct timeval x687601 = (struct timeval){0};
    /* VAR */ struct timeval x687602 = x687601;
    struct timeval x687603 = x687602;
    /* VAR */ struct timeval x687604 = x687601;
    struct timeval x687605 = x687604;
    /* VAR */ struct timeval x687606 = x687601;
    struct timeval x687607 = x687606;
    struct timeval* x687608 = &x687605;
    gettimeofday(x687608, NULL);
    /* VAR */ numeric_int_t x687615 = -1;
    numeric_int_t x687616 = x658369->len;
    numeric_int_t x670491 = 0;
    for(; x670491 < x687616 ; x670491 += 1) {
      
      char* x670492 = g_array_index(x658369, char*, x670491);
      numeric_int_t x670493 = strlen("Brand#21");
      numeric_int_t x670494 = strncmp(x670492, "Brand#21", x670493);
      /* VAR */ boolean_t ite678253 = 0;
      if((x670494==(0))) {
        numeric_int_t x687641 = x687615;
        ite678253 = (x687641==(-1));
      } else {
        
        ite678253 = 0;
      };
      boolean_t x675409 = ite678253;
      if(x675409) {
        x687615 = x670491;
        break;
      };
    };
    numeric_int_t x687650 = x687615;
    /* VAR */ numeric_int_t x687656 = -1;
    numeric_int_t x687657 = x658369->len;
    numeric_int_t x670519 = 0;
    for(; x670519 < x687657 ; x670519 += 1) {
      
      char* x670520 = g_array_index(x658369, char*, x670519);
      numeric_int_t x670521 = strlen("Brand#21");
      numeric_int_t x670522 = strncmp(x670520, "Brand#21", x670521);
      if((x670522==(0))) {
        x687656 = x670519;
      };
    };
    numeric_int_t x687673 = x687656;
    /* VAR */ numeric_int_t x687679 = -1;
    numeric_int_t x687680 = x658374->len;
    numeric_int_t x670547 = 0;
    for(; x670547 < x687680 ; x670547 += 1) {
      
      char* x670548 = g_array_index(x658374, char*, x670547);
      numeric_int_t x670549 = strlen("PROMO PLATED");
      numeric_int_t x670550 = strncmp(x670548, "PROMO PLATED", x670549);
      /* VAR */ boolean_t ite678319 = 0;
      if((x670550==(0))) {
        numeric_int_t x687705 = x687679;
        ite678319 = (x687705==(-1));
      } else {
        
        ite678319 = 0;
      };
      boolean_t x675461 = ite678319;
      if(x675461) {
        x687679 = x670547;
        break;
      };
    };
    numeric_int_t x687714 = x687679;
    /* VAR */ numeric_int_t x687720 = -1;
    numeric_int_t x687721 = x658374->len;
    numeric_int_t x670575 = 0;
    for(; x670575 < x687721 ; x670575 += 1) {
      
      char* x670576 = g_array_index(x658374, char*, x670575);
      numeric_int_t x670577 = strlen("PROMO PLATED");
      numeric_int_t x670578 = strncmp(x670576, "PROMO PLATED", x670577);
      if((x670578==(0))) {
        x687720 = x670575;
      };
    };
    numeric_int_t x687737 = x687720;
    /* VAR */ numeric_int_t x687738 = 0;
    numeric_int_t* x687823 = &(x687781);
    GTree* x687824 = g_tree_new(x687823);
    /* VAR */ boolean_t x687825 = 0;
    /* VAR */ numeric_int_t x687826 = 0;
    while(1) {
      
      numeric_int_t x687828 = x687738;
      if (!((x687828<(x685882)))) break; 
      
      numeric_int_t x640657 = x687738;
      struct PARTSUPPRecord* x639194 = &(x692102[x640657]);
      numeric_int_t x639196 = x639194->PS_PARTKEY;
      struct PARTRecord* x649218 = &(x691790[(x639196-(1))]);
      numeric_int_t x650038 = x649218->P_BRAND;
      /* VAR */ boolean_t ite678455 = 0;
      if((x650038>=(x687650))) {
        ite678455 = (x650038<=(x687673));
      } else {
        
        ite678455 = 0;
      };
      boolean_t x675588 = ite678455;
      boolean_t x649221 = !(x675588);
      /* VAR */ boolean_t ite678464 = 0;
      if(x649221) {
        numeric_int_t x687847 = x649218->P_TYPE;
        /* VAR */ boolean_t x687849 = 0;
        if((x687847>=(x687714))) {
          x687849 = (x687847<=(x687737));
        } else {
          
          x687849 = 0;
        };
        boolean_t x687855 = x687849;
        boolean_t x687856 = !(x687855);
        ite678464 = x687856;
      } else {
        
        ite678464 = 0;
      };
      boolean_t x675591 = ite678464;
      /* VAR */ boolean_t ite678476 = 0;
      if(x675591) {
        numeric_int_t x687863 = x649218->P_SIZE;
        /* VAR */ boolean_t x687865 = 0;
        if((x687863==(23))) {
          x687865 = 1;
        } else {
          
          x687865 = (x687863==(3));
        };
        boolean_t x687871 = x687865;
        /* VAR */ boolean_t x687872 = 0;
        if(x687871) {
          x687872 = 1;
        } else {
          
          x687872 = (x687863==(33));
        };
        boolean_t x687878 = x687872;
        /* VAR */ boolean_t x687879 = 0;
        if(x687878) {
          x687879 = 1;
        } else {
          
          x687879 = (x687863==(29));
        };
        boolean_t x687885 = x687879;
        /* VAR */ boolean_t x687886 = 0;
        if(x687885) {
          x687886 = 1;
        } else {
          
          x687886 = (x687863==(40));
        };
        boolean_t x687892 = x687886;
        /* VAR */ boolean_t x687893 = 0;
        if(x687892) {
          x687893 = 1;
        } else {
          
          x687893 = (x687863==(27));
        };
        boolean_t x687899 = x687893;
        /* VAR */ boolean_t x687900 = 0;
        if(x687899) {
          x687900 = 1;
        } else {
          
          x687900 = (x687863==(22));
        };
        boolean_t x687906 = x687900;
        /* VAR */ boolean_t x687907 = 0;
        if(x687906) {
          x687907 = 1;
        } else {
          
          x687907 = (x687863==(4));
        };
        boolean_t x687913 = x687907;
        ite678476 = x687913;
      } else {
        
        ite678476 = 0;
      };
      boolean_t x675593 = ite678476;
      if(x675593) {
        if(((x649218->P_PARTKEY)==(x639196))) {
          if(((x649218->P_PARTKEY)==(x639196))) {
            numeric_int_t x639712 = x639194->PS_SUPPKEY;
            /* VAR */ boolean_t resultRetain642132 = 0;
            struct SUPPLIERRecord* x642134 = &(x691611[(x639712-(1))]);
            char* x639237 = x642134->S_COMMENT;
            char* x668168 = pointer_add(x639237, 0);
            char* x668169 = strstr(x668168, "Customer");
            char* x668170 = NULL;
            /* VAR */ numeric_int_t ite675613 = 0;
            if((x668169==(x668170))) {
              ite675613 = -1;
            } else {
              
              numeric_int_t x675615 = str_subtract(x668169, x639237);
              ite675613 = x675615;
            };
            numeric_int_t x668173 = ite675613;
            char* x668174 = pointer_add(x639237, x668173);
            char* x668175 = strstr(x668174, "Complaints");
            char* x668176 = NULL;
            /* VAR */ numeric_int_t ite675624 = 0;
            if((x668175==(x668176))) {
              ite675624 = -1;
            } else {
              
              numeric_int_t x675626 = str_subtract(x668175, x639237);
              ite675624 = x675626;
            };
            numeric_int_t x668179 = ite675624;
            /* VAR */ boolean_t ite678536 = 0;
            if((x668173!=(-1))) {
              ite678536 = (x668179!=(-1));
            } else {
              
              ite678536 = 0;
            };
            boolean_t x675632 = ite678536;
            if(x675632) {
              boolean_t x642145 = !((x639712==((x642134->S_SUPPKEY))));
              boolean_t x642146 = !(x642145);
              if(x642146) {
                resultRetain642132 = 1;
              };
            };
            boolean_t x642150 = resultRetain642132;
            boolean_t x642151 = !(x642150);
            if(x642151) {
              numeric_int_t x653046 = x687503;
              struct Q16GRPRecord1* x653047 = &(x693776[x653046]);
              x653047->P_BRAND = x650038;
              x653047->P_TYPE = (x649218->P_TYPE);
              x653047->P_SIZE = (x649218->P_SIZE);
              x653047->PS_SUPPKEY = x639712;
              numeric_int_t x653052 = x687503;
              x687503 = (x653052+(1));
              numeric_int_t x664703 = x653047->P_BRAND;
              numeric_int_t x664705 = x653047->P_TYPE;
              numeric_int_t x664707 = x653047->P_SIZE;
              numeric_int_t x664709 = x653047->PS_SUPPKEY;
              numeric_int_t x643425 = (((x664703+(x664705))+(x664707))+(x664709))&(1048575);
              struct AGGRecord_Q16GRPRecord1* x644410 = &(x693507[x643425]);
              numeric_int_t x643427 = x687237;
              if((x643425>(x643427))) {
                x687237 = x643425;
              };
              /* VAR */ struct AGGRecord_Q16GRPRecord1* current644869 = x644410;
              /* VAR */ boolean_t found644420 = 0;
              while(1) {
                
                struct AGGRecord_Q16GRPRecord1* x644872 = current644869;
                /* VAR */ boolean_t ite678581 = 0;
                if((x644872!=(NULL))) {
                  ite678581 = ((x644872->key)!=(NULL));
                } else {
                  
                  ite678581 = 0;
                };
                boolean_t x675671 = ite678581;
                /* VAR */ boolean_t ite678590 = 0;
                if(x675671) {
                  boolean_t x688009 = found644420;
                  boolean_t x688010 = !(x688009);
                  ite678590 = x688010;
                } else {
                  
                  ite678590 = 0;
                };
                boolean_t x675673 = ite678590;
                if (!(x675673)) break; 
                
                struct AGGRecord_Q16GRPRecord1* x644877 = current644869;
                struct Q16GRPRecord1* x644428 = x644877->key;
                /* VAR */ boolean_t ite678609 = 0;
                if(((x644428->P_BRAND)==(x664703))) {
                  ite678609 = ((x644428->P_TYPE)==(x664705));
                } else {
                  
                  ite678609 = 0;
                };
                boolean_t x675685 = ite678609;
                /* VAR */ boolean_t ite678616 = 0;
                if(x675685) {
                  ite678616 = ((x644428->P_SIZE)==(x664707));
                } else {
                  
                  ite678616 = 0;
                };
                boolean_t x675687 = ite678616;
                /* VAR */ boolean_t ite678623 = 0;
                if(x675687) {
                  ite678623 = ((x644428->PS_SUPPKEY)==(x664709));
                } else {
                  
                  ite678623 = 0;
                };
                boolean_t x675689 = ite678623;
                if(x675689) {
                  found644420 = 1;
                } else {
                  
                  struct AGGRecord_Q16GRPRecord1* x644883 = current644869;
                  struct AGGRecord_Q16GRPRecord1* x645781 = x644883->next;
                  current644869 = x645781;
                };
              };
              boolean_t x644436 = found644420;
              boolean_t x644437 = !(x644436);
              /* VAR */ struct AGGRecord_Q16GRPRecord1** ite675698 = 0;
              if(x644437) {
                ite675698 = NULL;
              } else {
                
                struct AGGRecord_Q16GRPRecord1* x675700 = current644869;
                ite675698 = x675700;
              };
              struct AGGRecord_Q16GRPRecord1** x644443 = ite675698;
              /* VAR */ struct AGGRecord_Q16GRPRecord1* ite675706 = 0;
              if((x644443!=(NULL))) {
                ite675706 = x644443;
              } else {
                
                /* VAR */ double x675708 = 0;
                /* VAR */ double x675709 = 0;
                double x675710 = x675709;
                numeric_int_t x675711 = x687523;
                struct AGGRecord_Q16GRPRecord1* x675712 = &(x693804[x675711]);
                x675712->key = x653047;
                x675712->aggs = x675710;
                x675712->next = NULL;
                numeric_int_t x675716 = x687523;
                x687523 = (x675716+(1));
                /* VAR */ boolean_t ite678660 = 0;
                if((x644410==(NULL))) {
                  ite678660 = 1;
                } else {
                  
                  ite678660 = ((x644410->key)==(NULL));
                };
                boolean_t x675721 = ite678660;
                if(x675721) {
                  x675712->next = NULL;
                  /* VAR */ boolean_t ite678672 = 0;
                  if((x675712==(NULL))) {
                    ite678672 = 1;
                  } else {
                    
                    ite678672 = ((x675712->key)==(NULL));
                  };
                  boolean_t x675726 = ite678672;
                  if(x675726) {
                    *(x693507 + x643425) = (const struct AGGRecord_Q16GRPRecord1){0};
                  } else {
                    
                    struct AGGRecord_Q16GRPRecord1 x656451 = *x675712;
                    *(x693507 + x643425) = x656451;
                    struct AGGRecord_Q16GRPRecord1* x656453 = &(x693507[x643425]);
                    x675712 = x656453;
                  };
                } else {
                  
                  struct AGGRecord_Q16GRPRecord1* x645801 = x644410->next;
                  x675712->next = x645801;
                  x644410->next = x675712;
                };
                ite675706 = x675712;
              };
              struct AGGRecord_Q16GRPRecord1* x643440 = ite675706;
              double x650622 = x643440->aggs;
              x643440->aggs = x650622;
            };
          };
        };
      };
      numeric_int_t x640693 = x687738;
      x687738 = (x640693+(1));
    };
    numeric_int_t x688109 = x687237;
    numeric_int_t x670927 = 0;
    for(; x670927 < (x688109+(1)) ; x670927 += 1) {
      
      struct AGGRecord_Q16GRPRecord1* x670928 = &(x693507[x670927]);
      /* VAR */ struct AGGRecord_Q16GRPRecord1* x670929 = x670928;
      while(1) {
        
        struct AGGRecord_Q16GRPRecord1* x644985 = x670929;
        /* VAR */ boolean_t ite678862 = 0;
        if((x644985!=(NULL))) {
          ite678862 = ((x644985->key)!=(NULL));
        } else {
          
          ite678862 = 0;
        };
        boolean_t x675864 = ite678862;
        if (!(x675864)) break; 
        
        struct AGGRecord_Q16GRPRecord1* x644987 = x670929;
        struct AGGRecord_Q16GRPRecord1* x645884 = x644987->next;
        struct AGGRecord_Q16GRPRecord1* x644989 = x670929;
        struct Q16GRPRecord1* x644543 = x644989->key;
        numeric_int_t x653124 = x687552;
        struct Q16GRPRecord2* x653125 = &(x693840[x653124]);
        x653125->P_BRAND = (x644543->P_BRAND);
        x653125->P_TYPE = (x644543->P_TYPE);
        x653125->P_SIZE = (x644543->P_SIZE);
        numeric_int_t x653129 = x687552;
        x687552 = (x653129+(1));
        numeric_int_t x664818 = x653125->P_BRAND;
        numeric_int_t x664820 = x653125->P_TYPE;
        numeric_int_t x664823 = x653125->P_SIZE;
        numeric_int_t x644550 = (((x664818*(10000))+((x664820*(100))))+(x664823))&(1048575);
        struct AGGRecord_Q16GRPRecord2* x644551 = &(x693496[x644550]);
        numeric_int_t x644552 = x687230;
        if((x644550>(x644552))) {
          x687230 = x644550;
        };
        /* VAR */ struct AGGRecord_Q16GRPRecord2* x644560 = x644551;
        /* VAR */ boolean_t x644561 = 0;
        while(1) {
          
          struct AGGRecord_Q16GRPRecord2* x645014 = x644560;
          /* VAR */ boolean_t ite678904 = 0;
          if((x645014!=(NULL))) {
            ite678904 = ((x645014->key)!=(NULL));
          } else {
            
            ite678904 = 0;
          };
          boolean_t x675899 = ite678904;
          /* VAR */ boolean_t ite678913 = 0;
          if(x675899) {
            boolean_t x688317 = x644561;
            boolean_t x688318 = !(x688317);
            ite678913 = x688318;
          } else {
            
            ite678913 = 0;
          };
          boolean_t x675901 = ite678913;
          if (!(x675901)) break; 
          
          struct AGGRecord_Q16GRPRecord2* x645019 = x644560;
          struct Q16GRPRecord2* x644500 = x645019->key;
          /* VAR */ boolean_t ite678930 = 0;
          if(((x644500->P_BRAND)==(x664818))) {
            ite678930 = ((x644500->P_TYPE)==(x664820));
          } else {
            
            ite678930 = 0;
          };
          boolean_t x675911 = ite678930;
          /* VAR */ boolean_t ite678937 = 0;
          if(x675911) {
            ite678937 = ((x644500->P_SIZE)==(x664823));
          } else {
            
            ite678937 = 0;
          };
          boolean_t x675913 = ite678937;
          if(x675913) {
            x644561 = 1;
          } else {
            
            struct AGGRecord_Q16GRPRecord2* x645025 = x644560;
            struct AGGRecord_Q16GRPRecord2* x645920 = x645025->next;
            x644560 = x645920;
          };
        };
        boolean_t x644577 = x644561;
        boolean_t x644578 = !(x644577);
        /* VAR */ struct AGGRecord_Q16GRPRecord2** ite675922 = 0;
        if(x644578) {
          ite675922 = NULL;
        } else {
          
          struct AGGRecord_Q16GRPRecord2* x675924 = x644560;
          ite675922 = x675924;
        };
        struct AGGRecord_Q16GRPRecord2** x644579 = ite675922;
        /* VAR */ struct AGGRecord_Q16GRPRecord2* ite675930 = 0;
        if((x644579!=(NULL))) {
          ite675930 = x644579;
        } else {
          
          /* VAR */ double x675932 = 0;
          /* VAR */ double x675933 = 0;
          double x675934 = x675933;
          numeric_int_t x675935 = x687572;
          struct AGGRecord_Q16GRPRecord2* x675936 = &(x693867[x675935]);
          x675936->key = x653125;
          x675936->aggs = x675934;
          x675936->next = NULL;
          numeric_int_t x675940 = x687572;
          x687572 = (x675940+(1));
          /* VAR */ boolean_t ite678974 = 0;
          if((x644551==(NULL))) {
            ite678974 = 1;
          } else {
            
            ite678974 = ((x644551->key)==(NULL));
          };
          boolean_t x675945 = ite678974;
          if(x675945) {
            x675936->next = NULL;
            /* VAR */ boolean_t ite678986 = 0;
            if((x675936==(NULL))) {
              ite678986 = 1;
            } else {
              
              ite678986 = ((x675936->key)==(NULL));
            };
            boolean_t x675950 = ite678986;
            if(x675950) {
              *(x693496 + x644550) = (const struct AGGRecord_Q16GRPRecord2){0};
            } else {
              
              struct AGGRecord_Q16GRPRecord2 x656534 = *x675936;
              *(x693496 + x644550) = x656534;
              struct AGGRecord_Q16GRPRecord2* x656536 = &(x693496[x644550]);
              x675936 = x656536;
            };
          } else {
            
            struct AGGRecord_Q16GRPRecord2* x645940 = x644551->next;
            x675936->next = x645940;
            x644551->next = x675936;
          };
          ite675930 = x675936;
        };
        struct AGGRecord_Q16GRPRecord2* x644586 = ite675930;
        double x650686 = x644586->aggs;
        x644586->aggs = (x650686+(1.0));
        x670929 = x645884;
      };
    };
    numeric_int_t x688408 = x687230;
    numeric_int_t x671048 = 0;
    for(; x671048 < (x688408+(1)) ; x671048 += 1) {
      
      struct AGGRecord_Q16GRPRecord2* x671049 = &(x693496[x671048]);
      /* VAR */ struct AGGRecord_Q16GRPRecord2* x671050 = x671049;
      while(1) {
        
        struct AGGRecord_Q16GRPRecord2* x645069 = x671050;
        /* VAR */ boolean_t ite679040 = 0;
        if((x645069!=(NULL))) {
          ite679040 = ((x645069->key)!=(NULL));
        } else {
          
          ite679040 = 0;
        };
        boolean_t x675990 = ite679040;
        if (!(x675990)) break; 
        
        struct AGGRecord_Q16GRPRecord2* x645071 = x671050;
        struct AGGRecord_Q16GRPRecord2* x645966 = x645071->next;
        struct AGGRecord_Q16GRPRecord2* x645073 = x671050;
        g_tree_insert(x687824, x645073, x645073);
        x671050 = x645966;
      };
    };
    while(1) {
      
      boolean_t x640812 = x687825;
      boolean_t x639351 = !(x640812);
      /* VAR */ boolean_t ite679057 = 0;
      if(x639351) {
        numeric_int_t x688454 = g_tree_nnodes(x687824);
        ite679057 = (x688454!=(0));
      } else {
        
        ite679057 = 0;
      };
      boolean_t x676000 = ite679057;
      if (!(x676000)) break; 
      
      void* x659414 = NULL;
      void** x659422 = &(x659414);
      g_tree_foreach(x687824, x659421, x659422);
      struct AGGRecord_Q16GRPRecord2* x659424 = (struct AGGRecord_Q16GRPRecord2*){x659414};
      numeric_int_t x659425 = g_tree_remove(x687824, x659424);
      if(0) {
        x687825 = 1;
      } else {
        
        struct Q16GRPRecord2* x639364 = x659424->key;
        char* x659433 = g_array_index(x658369, char*, (x639364->P_BRAND));
        char* x659435 = g_array_index(x658374, char*, (x639364->P_TYPE));
        double x650727 = x659424->aggs;
        printf("%s|%s|%d|%.0f\n", x659433, x659435, (x639364->P_SIZE), x650727);
        numeric_int_t x640834 = x687826;
        x687826 = (x640834+(1));
      };
    };
    numeric_int_t x688485 = x687826;
    printf("(%d rows)\n", x688485);
    struct timeval* x688487 = &x687607;
    gettimeofday(x688487, NULL);
    struct timeval* x688489 = &x687603;
    struct timeval* x688490 = &x687607;
    struct timeval* x688491 = &x687605;
    long x688492 = timeval_subtract(x688489, x688490, x688491);
    printf("Generated code run in %ld milliseconds.\n", x688492);
  };
  /* VAR */ long mallocSum694796 = 0L;
  long x694797 = mallocSym_656109_691555;
  numeric_int_t x694798 = sizeof(struct AGGRecord_Q16GRPRecord1);
  long x694800 = x694797*(((long){x694798}));
  printf("692205 with type AGGRecord_Q16GRPRecord1: %ld\n", x694800);
  long x694802 = mallocSum694796;
  mallocSum694796 = (x694802+(x694800));
  long x694805 = mallocSym_656102_691556;
  numeric_int_t x694806 = sizeof(struct AGGRecord_Q16GRPRecord2);
  long x694808 = x694805*(((long){x694806}));
  printf("692194 with type AGGRecord_Q16GRPRecord2: %ld\n", x694808);
  long x694810 = mallocSum694796;
  mallocSum694796 = (x694810+(x694808));
  long x694813 = mallocSym_655939_691557;
  numeric_int_t x694814 = sizeof(char);
  long x694816 = x694813*(((long){x694814}));
  printf("691910 with type Byte: %ld\n", x694816);
  long x694818 = mallocSum694796;
  mallocSum694796 = (x694818+(x694816));
  long x694821 = mallocSym_655923_691558;
  numeric_int_t x694822 = sizeof(char);
  long x694824 = x694821*(((long){x694822}));
  printf("691886 with type Byte: %ld\n", x694824);
  long x694826 = mallocSum694796;
  mallocSum694796 = (x694826+(x694824));
  long x694829 = mallocSym_685606_691559;
  numeric_int_t x694830 = sizeof(struct PARTRecord);
  long x694832 = x694829*(((long){x694830}));
  printf("691790 with type PARTRecord: %ld\n", x694832);
  long x694834 = mallocSum694796;
  mallocSum694796 = (x694834+(x694832));
  long x694837 = mallocSym_655813_691560;
  numeric_int_t x694838 = sizeof(char);
  long x694840 = x694837*(((long){x694838}));
  printf("691713 with type Byte: %ld\n", x694840);
  long x694842 = mallocSum694796;
  mallocSum694796 = (x694842+(x694840));
  long x694845 = mallocSym_685886_691561;
  numeric_int_t x694846 = sizeof(struct PARTSUPPRecord);
  long x694848 = x694845*(((long){x694846}));
  printf("692102 with type PARTSUPPRecord: %ld\n", x694848);
  long x694850 = mallocSum694796;
  mallocSum694796 = (x694850+(x694848));
  long x694853 = mallocSym_655792_691562;
  numeric_int_t x694854 = sizeof(char);
  long x694856 = x694853*(((long){x694854}));
  printf("691684 with type Byte: %ld\n", x694856);
  long x694858 = mallocSum694796;
  mallocSum694796 = (x694858+(x694856));
  long x694861 = mallocSym_655907_691563;
  numeric_int_t x694862 = sizeof(char);
  long x694864 = x694861*(((long){x694862}));
  printf("691862 with type Byte: %ld\n", x694864);
  long x694866 = mallocSum694796;
  mallocSum694796 = (x694866+(x694864));
  long x694869 = mallocSym_655834_691564;
  numeric_int_t x694870 = sizeof(char);
  long x694872 = x694869*(((long){x694870}));
  printf("691742 with type Byte: %ld\n", x694872);
  long x694874 = mallocSum694796;
  mallocSum694796 = (x694874+(x694872));
  long x694877 = mallocSym_687504_691565;
  numeric_int_t x694878 = sizeof(struct Q16GRPRecord1);
  long x694880 = x694877*(((long){x694878}));
  printf("693776 with type Q16GRPRecord1: %ld\n", x694880);
  long x694882 = mallocSum694796;
  mallocSum694796 = (x694882+(x694880));
  long x694885 = mallocSym_687573_691566;
  numeric_int_t x694886 = sizeof(struct AGGRecord_Q16GRPRecord2);
  long x694888 = x694885*(((long){x694886}));
  printf("693867 with type AGGRecord_Q16GRPRecord2: %ld\n", x694888);
  long x694890 = mallocSum694796;
  mallocSum694796 = (x694890+(x694888));
  long x694893 = mallocSym_687238_691567;
  numeric_int_t x694894 = sizeof(struct AGGRecord_Q16GRPRecord1);
  long x694896 = x694893*(((long){x694894}));
  printf("693507 with type AGGRecord_Q16GRPRecord1: %ld\n", x694896);
  long x694898 = mallocSum694796;
  mallocSum694796 = (x694898+(x694896));
  long x694901 = mallocSym_686308_691568;
  numeric_int_t x694902 = sizeof(struct AGGRecord_Q16GRPRecord2);
  long x694904 = x694901*(((long){x694902}));
  printf("692565 with type AGGRecord_Q16GRPRecord2: %ld\n", x694904);
  long x694906 = mallocSum694796;
  mallocSum694796 = (x694906+(x694904));
  long x694909 = mallocSym_655981_691569;
  numeric_int_t x694910 = sizeof(char);
  long x694912 = x694909*(((long){x694910}));
  printf("691968 with type Byte: %ld\n", x694912);
  long x694914 = mallocSum694796;
  mallocSum694796 = (x694914+(x694912));
  long x694917 = mallocSym_655733_691570;
  numeric_int_t x694918 = sizeof(numeric_int_t);
  long x694920 = x694917*(((long){x694918}));
  printf("691600 with type Int: %ld\n", x694920);
  long x694922 = mallocSum694796;
  mallocSum694796 = (x694922+(x694920));
  long x694925 = mallocSym_656710_691571;
  numeric_int_t x694926 = sizeof(struct SUPPLIERRecord);
  long x694928 = x694925*(((long){x694926}));
  printf("691750 with type SUPPLIERRecord: %ld\n", x694928);
  long x694930 = mallocSum694796;
  mallocSum694796 = (x694930+(x694928));
  long x694933 = mallocSym_655891_691572;
  numeric_int_t x694934 = sizeof(char);
  long x694936 = x694933*(((long){x694934}));
  printf("691838 with type Byte: %ld\n", x694936);
  long x694938 = mallocSum694796;
  mallocSum694796 = (x694938+(x694936));
  long x694941 = mallocSym_657120_691573;
  numeric_int_t x694942 = sizeof(struct Q16GRPRecord2);
  long x694944 = x694941*(((long){x694942}));
  printf("693849 with type Q16GRPRecord2: %ld\n", x694944);
  long x694946 = mallocSum694796;
  mallocSum694796 = (x694946+(x694944));
  long x694949 = mallocSym_656887_691574;
  numeric_int_t x694950 = sizeof(struct PARTRecord);
  long x694952 = x694949*(((long){x694950}));
  printf("692078 with type PARTRecord: %ld\n", x694952);
  long x694954 = mallocSum694796;
  mallocSum694796 = (x694954+(x694952));
  long x694957 = mallocSym_686288_691575;
  numeric_int_t x694958 = sizeof(struct Q16GRPRecord2);
  long x694960 = x694957*(((long){x694958}));
  printf("692538 with type Q16GRPRecord2: %ld\n", x694960);
  long x694962 = mallocSum694796;
  mallocSum694796 = (x694962+(x694960));
  long x694965 = mallocSym_655960_691576;
  numeric_int_t x694966 = sizeof(char);
  long x694968 = x694965*(((long){x694966}));
  printf("691939 with type Byte: %ld\n", x694968);
  long x694970 = mallocSum694796;
  mallocSum694796 = (x694970+(x694968));
  long x694973 = mallocSym_685451_691577;
  numeric_int_t x694974 = sizeof(struct SUPPLIERRecord);
  long x694976 = x694973*(((long){x694974}));
  printf("691611 with type SUPPLIERRecord: %ld\n", x694976);
  long x694978 = mallocSum694796;
  mallocSum694796 = (x694978+(x694976));
  long x694981 = mallocSym_686259_691578;
  numeric_int_t x694982 = sizeof(struct AGGRecord_Q16GRPRecord1);
  long x694984 = x694981*(((long){x694982}));
  printf("692502 with type AGGRecord_Q16GRPRecord1: %ld\n", x694984);
  long x694986 = mallocSum694796;
  mallocSum694796 = (x694986+(x694984));
  long x694989 = mallocSym_656961_691579;
  numeric_int_t x694990 = sizeof(struct PARTSUPPRecord);
  long x694992 = x694989*(((long){x694990}));
  printf("692173 with type PARTSUPPRecord: %ld\n", x694992);
  long x694994 = mallocSum694796;
  mallocSum694796 = (x694994+(x694992));
  long x694997 = mallocSym_686239_691580;
  numeric_int_t x694998 = sizeof(struct Q16GRPRecord1);
  long x695000 = x694997*(((long){x694998}));
  printf("692474 with type Q16GRPRecord1: %ld\n", x695000);
  long x695002 = mallocSum694796;
  mallocSum694796 = (x695002+(x695000));
  long x695005 = mallocSym_657141_691581;
  numeric_int_t x695006 = sizeof(struct AGGRecord_Q16GRPRecord2);
  long x695008 = x695005*(((long){x695006}));
  printf("693878 with type AGGRecord_Q16GRPRecord2: %ld\n", x695008);
  long x695010 = mallocSum694796;
  mallocSum694796 = (x695010+(x695008));
  long x695013 = mallocSym_655776_691582;
  numeric_int_t x695014 = sizeof(char);
  long x695016 = x695013*(((long){x695014}));
  printf("691660 with type Byte: %ld\n", x695016);
  long x695018 = mallocSum694796;
  mallocSum694796 = (x695018+(x695016));
  long x695021 = mallocSym_687524_691583;
  numeric_int_t x695022 = sizeof(struct AGGRecord_Q16GRPRecord1);
  long x695024 = x695021*(((long){x695022}));
  printf("693804 with type AGGRecord_Q16GRPRecord1: %ld\n", x695024);
  long x695026 = mallocSum694796;
  mallocSum694796 = (x695026+(x695024));
  long x695029 = mallocSym_687231_691584;
  numeric_int_t x695030 = sizeof(struct AGGRecord_Q16GRPRecord2);
  long x695032 = x695029*(((long){x695030}));
  printf("693496 with type AGGRecord_Q16GRPRecord2: %ld\n", x695032);
  long x695034 = mallocSum694796;
  mallocSum694796 = (x695034+(x695032));
  long x695037 = mallocSym_687553_691585;
  numeric_int_t x695038 = sizeof(struct Q16GRPRecord2);
  long x695040 = x695037*(((long){x695038}));
  printf("693840 with type Q16GRPRecord2: %ld\n", x695040);
  long x695042 = mallocSum694796;
  mallocSum694796 = (x695042+(x695040));
  long x695045 = mallocSym_657079_691586;
  numeric_int_t x695046 = sizeof(struct Q16GRPRecord1);
  long x695048 = x695045*(((long){x695046}));
  printf("693786 with type Q16GRPRecord1: %ld\n", x695048);
  long x695050 = mallocSum694796;
  mallocSum694796 = (x695050+(x695048));
  long x695053 = mallocSym_657100_691587;
  numeric_int_t x695054 = sizeof(struct AGGRecord_Q16GRPRecord1);
  long x695056 = x695053*(((long){x695054}));
  printf("693814 with type AGGRecord_Q16GRPRecord1: %ld\n", x695056);
  long x695058 = mallocSum694796;
  mallocSum694796 = (x695058+(x695056));
  long x695061 = mallocSym_656081_691588;
  numeric_int_t x695062 = sizeof(char);
  long x695064 = x695061*(((long){x695062}));
  printf("692165 with type Byte: %ld\n", x695064);
  long x695066 = mallocSum694796;
  mallocSum694796 = (x695066+(x695064));
  long x695069 = mallocSum694796;
  printf("total: %ld\n", x695069);
}
/* ----------- FUNCTIONS ----------- */
boolean_t x687250(char** x658823, char** x658824) {
  char* x658825 = *x658824;
  char* x658826 = *x658823;
  numeric_int_t x667741 = strcmp(x658825, x658826);
  return (x667741<(0)); 
}

boolean_t x687263(char** x658836, char** x658837) {
  char* x658838 = *x658837;
  char* x658839 = *x658836;
  numeric_int_t x667754 = strcmp(x658838, x658839);
  return (x667754<(0)); 
}

numeric_int_t x687781(struct AGGRecord_Q16GRPRecord2* x639101, struct AGGRecord_Q16GRPRecord2* x639102) {
  double x650967 = x639101->aggs;
  double x650969 = x639102->aggs;
  /* VAR */ numeric_int_t ite675539 = 0;
  if((x650967<(x650969))) {
    ite675539 = 1;
  } else {
    
    double x675541 = x639101->aggs;
    double x675542 = x639102->aggs;
    /* VAR */ numeric_int_t ite675545 = 0;
    if((x675541>(x675542))) {
      ite675545 = -1;
    } else {
      
      struct Q16GRPRecord2* x675547 = x639101->key;
      struct Q16GRPRecord2* x675549 = x639102->key;
      /* VAR */ numeric_int_t x675552 = ((x675547->P_BRAND)-((x675549->P_BRAND)));
      numeric_int_t x675553 = x675552;
      if((x675553==(0))) {
        x675552 = ((x675547->P_TYPE)-((x675549->P_TYPE)));
        numeric_int_t x639123 = x675552;
        if((x639123==(0))) {
          x675552 = ((x675547->P_SIZE)-((x675549->P_SIZE)));
        };
      };
      numeric_int_t x675567 = x675552;
      ite675545 = x675567;
    };
    numeric_int_t x675544 = ite675545;
    ite675539 = x675544;
  };
  numeric_int_t x639133 = ite675539;
  return x639133; 
}

numeric_int_t x659421(void* x659415, void* x659416, void* x659417) {
  pointer_assign(((struct AGGRecord_Q16GRPRecord2**){x659417}), ((struct AGGRecord_Q16GRPRecord2*){x659416}));
  return 1; 
}
