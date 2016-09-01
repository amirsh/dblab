#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_String;
  struct LINEITEMRecord;
  struct AGGRecord_Int;
  struct SUPPLIERRecord;
  
  struct AGGRecord_String {
  char* key;
  double* aggs;
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
  
  struct AGGRecord_Int {
  int key;
  double* aggs;
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
  
  


int x17280(void* x5286);

int x17283(void* x5289, void* x5290);

int x17290(char* x6286);

int x17292(char* x6291, char* x6292);

int x17299(int x6300);

int x17301(int x6305, int x6306);
/* GLOBAL VARS */

struct timeval x2727;
int main(int argc, char** argv) {
  FILE* x3104 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x3105 = 0;
  int x3106 = x3105;
  int* x3107 = &x3106;
  int x3108 = fscanf(x3104, "%d", x3107);
  pclose(x3104);
  struct LINEITEMRecord** x4046 = (struct LINEITEMRecord**)malloc(x3106 * sizeof(struct LINEITEMRecord*));
  memset(x4046, 0, x3106 * sizeof(struct LINEITEMRecord*));
  int x3112 = O_RDONLY;
  int x3113 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x3112);
  struct stat x3114 = (struct stat){0};
  /* VAR */ struct stat x3115 = x3114;
  struct stat x3116 = x3115;
  struct stat* x3117 = &x3116;
  int x3118 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x3117);
  size_t x3119 = x3117->st_size;
  int x3120 = PROT_READ;
  int x3121 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x3119, x3120, x3121, x3113, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x3106);
    /* VAR */ int ite14690 = 0;
    if(x6) {
      char x16651 = *x3;
      int x16652 = x16651!=('\0');
      ite14690 = x16652;
    } else {
      
      ite14690 = 0;
    };
    int x13845 = ite14690;
    if (!(x13845)) break; 
    
    /* VAR */ int x3129 = 0;
    int x3130 = x3129;
    int* x3131 = &x3130;
    char* x3132 = strntoi_unchecked(x3, x3131);
    x3 = x3132;
    /* VAR */ int x3134 = 0;
    int x3135 = x3134;
    int* x3136 = &x3135;
    char* x3137 = strntoi_unchecked(x3, x3136);
    x3 = x3137;
    /* VAR */ int x3139 = 0;
    int x3140 = x3139;
    int* x3141 = &x3140;
    char* x3142 = strntoi_unchecked(x3, x3141);
    x3 = x3142;
    /* VAR */ int x3144 = 0;
    int x3145 = x3144;
    int* x3146 = &x3145;
    char* x3147 = strntoi_unchecked(x3, x3146);
    x3 = x3147;
    /* VAR */ double x3149 = 0.0;
    double x3150 = x3149;
    double* x3151 = &x3150;
    char* x3152 = strntod_unchecked(x3, x3151);
    x3 = x3152;
    /* VAR */ double x3154 = 0.0;
    double x3155 = x3154;
    double* x3156 = &x3155;
    char* x3157 = strntod_unchecked(x3, x3156);
    x3 = x3157;
    /* VAR */ double x3159 = 0.0;
    double x3160 = x3159;
    double* x3161 = &x3160;
    char* x3162 = strntod_unchecked(x3, x3161);
    x3 = x3162;
    /* VAR */ double x3164 = 0.0;
    double x3165 = x3164;
    double* x3166 = &x3165;
    char* x3167 = strntod_unchecked(x3, x3166);
    x3 = x3167;
    char x3169 = *x3;
    /* VAR */ char x3170 = x3169;
    x3 += 1;
    x3 += 1;
    char x3173 = x3170;
    char x3174 = *x3;
    /* VAR */ char x3175 = x3174;
    x3 += 1;
    x3 += 1;
    char x3178 = x3175;
    /* VAR */ int x3179 = 0;
    int x3180 = x3179;
    int* x3181 = &x3180;
    char* x3182 = strntoi_unchecked(x3, x3181);
    x3 = x3182;
    /* VAR */ int x3184 = 0;
    int x3185 = x3184;
    int* x3186 = &x3185;
    char* x3187 = strntoi_unchecked(x3, x3186);
    x3 = x3187;
    /* VAR */ int x3189 = 0;
    int x3190 = x3189;
    int* x3191 = &x3190;
    char* x3192 = strntoi_unchecked(x3, x3191);
    x3 = x3192;
    int x3194 = x3180*(10000);
    int x3195 = x3185*(100);
    int x3196 = x3194+(x3195);
    int x3197 = x3196+(x3190);
    /* VAR */ int x3198 = 0;
    int x3199 = x3198;
    int* x3200 = &x3199;
    char* x3201 = strntoi_unchecked(x3, x3200);
    x3 = x3201;
    /* VAR */ int x3203 = 0;
    int x3204 = x3203;
    int* x3205 = &x3204;
    char* x3206 = strntoi_unchecked(x3, x3205);
    x3 = x3206;
    /* VAR */ int x3208 = 0;
    int x3209 = x3208;
    int* x3210 = &x3209;
    char* x3211 = strntoi_unchecked(x3, x3210);
    x3 = x3211;
    int x3213 = x3199*(10000);
    int x3214 = x3204*(100);
    int x3215 = x3213+(x3214);
    int x3216 = x3215+(x3209);
    /* VAR */ int x3217 = 0;
    int x3218 = x3217;
    int* x3219 = &x3218;
    char* x3220 = strntoi_unchecked(x3, x3219);
    x3 = x3220;
    /* VAR */ int x3222 = 0;
    int x3223 = x3222;
    int* x3224 = &x3223;
    char* x3225 = strntoi_unchecked(x3, x3224);
    x3 = x3225;
    /* VAR */ int x3227 = 0;
    int x3228 = x3227;
    int* x3229 = &x3228;
    char* x3230 = strntoi_unchecked(x3, x3229);
    x3 = x3230;
    int x3232 = x3218*(10000);
    int x3233 = x3223*(100);
    int x3234 = x3232+(x3233);
    int x3235 = x3234+(x3228);
    char* x4172 = (char*)malloc(26 * sizeof(char));
    memset(x4172, 0, 26 * sizeof(char));
    /* VAR */ char* x3237 = x3;
    while(1) {
      
      char x3238 = *x3;
      int x3239 = x3238!=('|');
      /* VAR */ int ite14811 = 0;
      if(x3239) {
        char x16771 = *x3;
        int x16772 = x16771!=('\n');
        ite14811 = x16772;
      } else {
        
        ite14811 = 0;
      };
      int x13959 = ite14811;
      if (!(x13959)) break; 
      
      x3 += 1;
    };
    char* x3245 = x3237;
    int x3246 = x3 - x3245;
    char* x3247 = x3237;
    char* x3248 = strncpy(x4172, x3247, x3246);
    x3 += 1;
    char* x4190 = (char*)malloc(11 * sizeof(char));
    memset(x4190, 0, 11 * sizeof(char));
    /* VAR */ char* x3256 = x3;
    while(1) {
      
      char x3257 = *x3;
      int x3258 = x3257!=('|');
      /* VAR */ int ite14834 = 0;
      if(x3258) {
        char x16793 = *x3;
        int x16794 = x16793!=('\n');
        ite14834 = x16794;
      } else {
        
        ite14834 = 0;
      };
      int x13975 = ite14834;
      if (!(x13975)) break; 
      
      x3 += 1;
    };
    char* x3264 = x3256;
    int x3265 = x3 - x3264;
    char* x3266 = x3256;
    char* x3267 = strncpy(x4190, x3266, x3265);
    x3 += 1;
    char* x4208 = (char*)malloc(45 * sizeof(char));
    memset(x4208, 0, 45 * sizeof(char));
    /* VAR */ char* x3275 = x3;
    while(1) {
      
      char x3276 = *x3;
      int x3277 = x3276!=('|');
      /* VAR */ int ite14857 = 0;
      if(x3277) {
        char x16815 = *x3;
        int x16816 = x16815!=('\n');
        ite14857 = x16816;
      } else {
        
        ite14857 = 0;
      };
      int x13991 = ite14857;
      if (!(x13991)) break; 
      
      x3 += 1;
    };
    char* x3283 = x3275;
    int x3284 = x3 - x3283;
    char* x3285 = x3275;
    char* x3286 = strncpy(x4208, x3285, x3284);
    x3 += 1;
    struct LINEITEMRecord* x4687 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x4687, 0, 1 * sizeof(struct LINEITEMRecord));
    x4687->L_ORDERKEY = x3130; x4687->L_PARTKEY = x3135; x4687->L_SUPPKEY = x3140; x4687->L_LINENUMBER = x3145; x4687->L_QUANTITY = x3150; x4687->L_EXTENDEDPRICE = x3155; x4687->L_DISCOUNT = x3160; x4687->L_TAX = x3165; x4687->L_RETURNFLAG = x3173; x4687->L_LINESTATUS = x3178; x4687->L_SHIPDATE = x3197; x4687->L_COMMITDATE = x3216; x4687->L_RECEIPTDATE = x3235; x4687->L_SHIPINSTRUCT = x4172; x4687->L_SHIPMODE = x4190; x4687->L_COMMENT = x4208;
    int x47 = x4;
    *(x4046 + x47) = x4687;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x3299 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x3300 = 0;
  int x3301 = x3300;
  int* x3302 = &x3301;
  int x3303 = fscanf(x3299, "%d", x3302);
  pclose(x3299);
  struct SUPPLIERRecord** x4238 = (struct SUPPLIERRecord**)malloc(x3301 * sizeof(struct SUPPLIERRecord*));
  memset(x4238, 0, x3301 * sizeof(struct SUPPLIERRecord*));
  int x3307 = O_RDONLY;
  int x3308 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x3307);
  /* VAR */ struct stat x3309 = x3114;
  struct stat x3310 = x3309;
  struct stat* x3311 = &x3310;
  int x3312 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x3311);
  size_t x3313 = x3311->st_size;
  int x3314 = PROT_READ;
  int x3315 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x3313, x3314, x3315, x3308, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x3301);
    /* VAR */ int ite14904 = 0;
    if(x58) {
      char x16861 = *x55;
      int x16862 = x16861!=('\0');
      ite14904 = x16862;
    } else {
      
      ite14904 = 0;
    };
    int x14031 = ite14904;
    if (!(x14031)) break; 
    
    /* VAR */ int x3323 = 0;
    int x3324 = x3323;
    int* x3325 = &x3324;
    char* x3326 = strntoi_unchecked(x55, x3325);
    x55 = x3326;
    char* x4261 = (char*)malloc(26 * sizeof(char));
    memset(x4261, 0, 26 * sizeof(char));
    /* VAR */ char* x3329 = x55;
    while(1) {
      
      char x3330 = *x55;
      int x3331 = x3330!=('|');
      /* VAR */ int ite14923 = 0;
      if(x3331) {
        char x16879 = *x55;
        int x16880 = x16879!=('\n');
        ite14923 = x16880;
      } else {
        
        ite14923 = 0;
      };
      int x14043 = ite14923;
      if (!(x14043)) break; 
      
      x55 += 1;
    };
    char* x3337 = x3329;
    int x3338 = x55 - x3337;
    char* x3339 = x3329;
    char* x3340 = strncpy(x4261, x3339, x3338);
    x55 += 1;
    char* x4279 = (char*)malloc(41 * sizeof(char));
    memset(x4279, 0, 41 * sizeof(char));
    /* VAR */ char* x3348 = x55;
    while(1) {
      
      char x3349 = *x55;
      int x3350 = x3349!=('|');
      /* VAR */ int ite14946 = 0;
      if(x3350) {
        char x16901 = *x55;
        int x16902 = x16901!=('\n');
        ite14946 = x16902;
      } else {
        
        ite14946 = 0;
      };
      int x14059 = ite14946;
      if (!(x14059)) break; 
      
      x55 += 1;
    };
    char* x3356 = x3348;
    int x3357 = x55 - x3356;
    char* x3358 = x3348;
    char* x3359 = strncpy(x4279, x3358, x3357);
    x55 += 1;
    /* VAR */ int x3366 = 0;
    int x3367 = x3366;
    int* x3368 = &x3367;
    char* x3369 = strntoi_unchecked(x55, x3368);
    x55 = x3369;
    char* x4302 = (char*)malloc(16 * sizeof(char));
    memset(x4302, 0, 16 * sizeof(char));
    /* VAR */ char* x3372 = x55;
    while(1) {
      
      char x3373 = *x55;
      int x3374 = x3373!=('|');
      /* VAR */ int ite14974 = 0;
      if(x3374) {
        char x16928 = *x55;
        int x16929 = x16928!=('\n');
        ite14974 = x16929;
      } else {
        
        ite14974 = 0;
      };
      int x14080 = ite14974;
      if (!(x14080)) break; 
      
      x55 += 1;
    };
    char* x3380 = x3372;
    int x3381 = x55 - x3380;
    char* x3382 = x3372;
    char* x3383 = strncpy(x4302, x3382, x3381);
    x55 += 1;
    /* VAR */ double x3390 = 0.0;
    double x3391 = x3390;
    double* x3392 = &x3391;
    char* x3393 = strntod_unchecked(x55, x3392);
    x55 = x3393;
    char* x4325 = (char*)malloc(102 * sizeof(char));
    memset(x4325, 0, 102 * sizeof(char));
    /* VAR */ char* x3396 = x55;
    while(1) {
      
      char x3397 = *x55;
      int x3398 = x3397!=('|');
      /* VAR */ int ite15002 = 0;
      if(x3398) {
        char x16955 = *x55;
        int x16956 = x16955!=('\n');
        ite15002 = x16956;
      } else {
        
        ite15002 = 0;
      };
      int x14101 = ite15002;
      if (!(x14101)) break; 
      
      x55 += 1;
    };
    char* x3404 = x3396;
    int x3405 = x55 - x3404;
    char* x3406 = x3396;
    char* x3407 = strncpy(x4325, x3406, x3405);
    x55 += 1;
    struct SUPPLIERRecord* x4806 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x4806, 0, 1 * sizeof(struct SUPPLIERRecord));
    x4806->S_SUPPKEY = x3324; x4806->S_NAME = x4261; x4806->S_ADDRESS = x4279; x4806->S_NATIONKEY = x3367; x4806->S_PHONE = x4302; x4806->S_ACCTBAL = x3391; x4806->S_COMMENT = x4325;
    int x97 = x56;
    *(x4238 + x97) = x4806;
    int x99 = x56;
    int x100 = x99+(1);
    x56 = x100;
  };
  int x104 = 0;
  for(; x104 < 1 ; x104 += 1) {
    
    void*** x17287 = (void***){x17280};
    int* x17288 = (int*){x17283};
    GHashTable* x17289 = g_hash_table_new(x17287, x17288);
    GHashTable* x17297 = g_hash_table_new(x17290, x17292);
    struct AGGRecord_Int** x17298 = (struct AGGRecord_Int**)malloc(48000000 * sizeof(struct AGGRecord_Int*));
    memset(x17298, 0, 48000000 * sizeof(struct AGGRecord_Int*));
    GHashTable* x17305 = g_hash_table_new(x17299, x17301);
    /* VAR */ struct timeval x17306 = x2727;
    struct timeval x17307 = x17306;
    /* VAR */ struct timeval x17308 = x2727;
    struct timeval x17309 = x17308;
    /* VAR */ struct timeval x17310 = x2727;
    struct timeval x17311 = x17310;
    struct timeval* x17312 = &x17309;
    gettimeofday(x17312, NULL);
    /* VAR */ int x17314 = 0;
    /* VAR */ int x17315 = 0;
    /* VAR */ struct AGGRecord_String* x17316 = NULL;
    while(1) {
      
      int x17318 = x17314;
      int x17319 = x17318<(x3106);
      if (!(x17319)) break; 
      
      int x1638 = x17314;
      struct LINEITEMRecord* x150 = x4046[x1638];
      int x152 = x150->L_SHIPDATE;
      int x153 = x152>=(19930901);
      /* VAR */ int ite15386 = 0;
      if(x153) {
        int x17326 = x152<(19931201);
        ite15386 = x17326;
      } else {
        
        ite15386 = 0;
      };
      int x14440 = ite15386;
      if(x14440) {
        int x156 = x150->L_SUPPKEY;
        void* x6933 = g_hash_table_lookup(x17305, x156);
        int x6338 = x6933==(NULL);
        /* VAR */ struct AGGRecord_Int* ite14446 = 0;
        if(x6338) {
          double* x14447 = (double*)malloc(1 * sizeof(double));
          memset(x14447, 0, 1 * sizeof(double));
          struct AGGRecord_Int* x14448 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
          memset(x14448, 0, 1 * sizeof(struct AGGRecord_Int));
          x14448->key = x156; x14448->aggs = x14447;
          g_hash_table_insert(x17305, x156, x14448);
          ite14446 = x14448;
        } else {
          
          ite14446 = x6933;
        };
        struct AGGRecord_Int* x6348 = ite14446;
        double* x161 = x6348->aggs;
        double x175 = x161[0];
        double x176 = x150->L_EXTENDEDPRICE;
        double x177 = x150->L_DISCOUNT;
        double x178 = 1.0-(x177);
        double x179 = x176*(x178);
        double x180 = x175+(x179);
        *x161 = x180;
      };
      int x1675 = x17314;
      int x188 = x1675+(1);
      x17314 = x188;
    };
    GList* x17365 = g_hash_table_get_keys(x17305);
    /* VAR */ GList* x17366 = x17365;
    int x17367 = g_hash_table_size(x17305);
    int x12775 = 0;
    for(; x12775 < x17367 ; x12775 += 1) {
      
      GList* x12776 = x17366;
      void* x12777 = g_list_nth_data(x12776, 0);
      GList* x12778 = g_list_next(x12776);
      x17366 = x12778;
      void* x12780 = g_hash_table_lookup(x17305, x12777);
      struct AGGRecord_Int* x12782 = (struct AGGRecord_Int*){x12780};
      int x12783 = x17315;
      *(x17298 + x12783) = x12782;
      int x12785 = x17315;
      int x12786 = x12785+(1);
      x17315 = x12786;
    };
    /* VAR */ int x17395 = 0;
    while(1) {
      
      int x17397 = x17395;
      int x17398 = x17315;
      int x17399 = x17397<(x17398);
      if (!(x17399)) break; 
      
      int x211 = x17395;
      struct AGGRecord_Int* x212 = x17298[x211];
      int x213 = x17395;
      int x214 = x213+(1);
      x17395 = x214;
      void* x6992 = g_hash_table_lookup(x17297, "MAXREVENUE");
      int x6401 = x6992==(NULL);
      /* VAR */ struct AGGRecord_String* ite14516 = 0;
      if(x6401) {
        double* x14517 = (double*)malloc(1 * sizeof(double));
        memset(x14517, 0, 1 * sizeof(double));
        struct AGGRecord_String* x14518 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
        memset(x14518, 0, 1 * sizeof(struct AGGRecord_String));
        x14518->key = "MAXREVENUE"; x14518->aggs = x14517;
        g_hash_table_insert(x17297, "MAXREVENUE", x14518);
        ite14516 = x14518;
      } else {
        
        ite14516 = x6992;
      };
      struct AGGRecord_String* x6411 = ite14516;
      double* x221 = x6411->aggs;
      double x235 = x221[0];
      double* x237 = x212->aggs;
      double x238 = x237[0];
      int x239 = x235<(x238);
      /* VAR */ double ite14532 = 0;
      if(x239) {
        double x14533 = x237[0];
        ite14532 = x14533;
      } else {
        
        ite14532 = x235;
      };
      double x241 = ite14532;
      *x221 = x241;
    };
    GList* x17435 = g_hash_table_get_keys(x17297);
    /* VAR */ GList* x17436 = x17435;
    int x17437 = g_hash_table_size(x17297);
    int x12833 = 0;
    for(; x12833 < x17437 ; x12833 += 1) {
      
      GList* x12834 = x17436;
      void* x12835 = g_list_nth_data(x12834, 0);
      GList* x12836 = g_list_next(x12834);
      x17436 = x12836;
      void* x12838 = g_hash_table_lookup(x17297, x12835);
      struct AGGRecord_String* x12840 = (struct AGGRecord_String*){x12838};
      x17316 = x12840;
    };
    struct AGGRecord_String* x17457 = x17316;
    /* VAR */ int x17458 = 0;
    /* VAR */ int x17459 = 0;
    /* VAR */ int x17460 = 0;
    while(1) {
      
      int x17462 = x17458;
      int x17463 = x17462<(x3301);
      if (!(x17463)) break; 
      
      int x1787 = x17458;
      struct SUPPLIERRecord* x295 = x4238[x1787];
      int x297 = x295->S_SUPPKEY;
      void* x5388 = (void*){x297};
      void* x5389 = (void*){x295};
      void* x5390 = g_hash_table_lookup(x17289, x5388);
      GList** x5391 = (GList**){x5390};
      GList** x5392 = NULL;
      int x5393 = x5391==(x5392);
      /* VAR */ GList** ite14581 = 0;
      if(x5393) {
        GList** x14582 = malloc(8);
        GList* x14583 = NULL;
        pointer_assign(x14582, x14583);
        ite14581 = x14582;
      } else {
        
        ite14581 = x5391;
      };
      GList** x5397 = ite14581;
      GList* x5398 = *(x5397);
      GList* x5399 = g_list_prepend(x5398, x5389);
      pointer_assign(x5397, x5399);
      void* x5401 = (void*){x5397};
      g_hash_table_insert(x17289, x5388, x5401);
      int x1792 = x17458;
      int x301 = x1792+(1);
      x17458 = x301;
    };
    /* VAR */ int x17490 = 0;
    while(1) {
      
      int x17492 = x17490;
      int x17493 = x17315;
      int x17494 = x17492<(x17493);
      if (!(x17494)) break; 
      
      int x372 = x17490;
      struct AGGRecord_Int* x373 = x17298[x372];
      int x374 = x17490;
      int x375 = x374+(1);
      x17490 = x375;
      int x378 = x373->key;
      void* x5419 = (void*){x378};
      void* x5420 = g_hash_table_lookup(x17289, x5419);
      GList** x5421 = (GList**){x5420};
      int x9414 = x5421!=(NULL);
      if(x9414) {
        GList* x6518 = *(x5421);
        /* VAR */ GList* x6519 = x6518;
        while(1) {
          
          GList* x6520 = x6519;
          GList* x6521 = NULL;
          int x6522 = x6520!=(x6521);
          if (!(x6522)) break; 
          
          GList* x6523 = x6519;
          void* x6524 = g_list_nth_data(x6523, 0);
          struct SUPPLIERRecord* x6525 = (struct SUPPLIERRecord*){x6524};
          GList* x6526 = x6519;
          GList* x6527 = g_list_next(x6526);
          x6519 = x6527;
          int x6529 = x6525->S_SUPPKEY;
          int x6530 = x6529==(x378);
          /* VAR */ int ite15615 = 0;
          if(x6530) {
            double* x17549 = x373->aggs;
            double x17550 = x17549[0];
            double* x17551 = x17457->aggs;
            double x17552 = x17551[0];
            int x17553 = x17550==(x17552);
            ite15615 = x17553;
          } else {
            
            ite15615 = 0;
          };
          int x14645 = ite15615;
          if(x14645) {
            char* x931 = x6525->S_NAME;
            char* x932 = x6525->S_ADDRESS;
            char* x934 = x6525->S_PHONE;
            double* x937 = x373->aggs;
            if(0) {
              x17459 = 1;
            } else {
              
              double x440 = x937[0];
              printf("%d|%s|%s|%s|%.4f\n", x6529, x931, x932, x934, x440);
              int x1937 = x17460;
              int x443 = x1937+(1);
              x17460 = x443;
            };
          };
        };
      };
    };
    int x17570 = x17460;
    printf("(%d rows)\n", x17570);
    struct timeval* x17572 = &x17311;
    gettimeofday(x17572, NULL);
    struct timeval* x17574 = &x17307;
    struct timeval* x17575 = &x17311;
    struct timeval* x17576 = &x17309;
    long x17577 = timeval_subtract(x17574, x17575, x17576);
    printf("Generated code run in %ld milliseconds.\n", x17577);
  };
}
/* ----------- FUNCTIONS ----------- */
int x17280(void* x5286) {
  int x5287 = g_direct_hash(x5286);
  return x5287; 
}

int x17283(void* x5289, void* x5290) {
  int x5291 = g_direct_equal(x5289, x5290);
  return x5291; 
}

int x17290(char* x6286) {
  return 0; 
}

int x17292(char* x6291, char* x6292) {
  int x10405 = strcmp(x6291, x6292);
  int x10406 = !(x10405);
  return x10406; 
}

int x17299(int x6300) {
  return x6300; 
}

int x17301(int x6305, int x6306) {
  int x6307 = x6305==(x6306);
  return x6307; 
}
