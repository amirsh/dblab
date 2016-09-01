#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_OptimalString;
  struct ORDERSRecord;
  
  struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
  struct AGGRecord_OptimalString* next;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
  struct ORDERSRecord* next;
  };
  
  


int x32054(struct AGGRecord_OptimalString* x170, struct AGGRecord_OptimalString* x171);

int x17832(void* x17826, void* x17827, void* x17828);
/* GLOBAL VARS */

struct timeval x13572;
int main(int argc, char** argv) {
  FILE* x14133 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x14134 = 0;
  int x14135 = x14134;
  int* x14136 = &x14135;
  int x14137 = fscanf(x14133, "%d", x14136);
  pclose(x14133);
  int* x15341 = (int*)malloc(x14135 * sizeof(int));
  memset(x15341, 0, x14135 * sizeof(int));
  int* x15342 = (int*)malloc(x14135 * sizeof(int));
  memset(x15342, 0, x14135 * sizeof(int));
  int* x15343 = (int*)malloc(x14135 * sizeof(int));
  memset(x15343, 0, x14135 * sizeof(int));
  int* x15344 = (int*)malloc(x14135 * sizeof(int));
  memset(x15344, 0, x14135 * sizeof(int));
  double* x15345 = (double*)malloc(x14135 * sizeof(double));
  memset(x15345, 0, x14135 * sizeof(double));
  double* x15346 = (double*)malloc(x14135 * sizeof(double));
  memset(x15346, 0, x14135 * sizeof(double));
  double* x15347 = (double*)malloc(x14135 * sizeof(double));
  memset(x15347, 0, x14135 * sizeof(double));
  double* x15348 = (double*)malloc(x14135 * sizeof(double));
  memset(x15348, 0, x14135 * sizeof(double));
  char* x15349 = (char*)malloc(x14135 * sizeof(char));
  memset(x15349, 0, x14135 * sizeof(char));
  char* x15350 = (char*)malloc(x14135 * sizeof(char));
  memset(x15350, 0, x14135 * sizeof(char));
  int* x15351 = (int*)malloc(x14135 * sizeof(int));
  memset(x15351, 0, x14135 * sizeof(int));
  int* x15352 = (int*)malloc(x14135 * sizeof(int));
  memset(x15352, 0, x14135 * sizeof(int));
  int* x15353 = (int*)malloc(x14135 * sizeof(int));
  memset(x15353, 0, x14135 * sizeof(int));
  char** x15354 = (char**)malloc(x14135 * sizeof(char*));
  memset(x15354, 0, x14135 * sizeof(char*));
  char** x15355 = (char**)malloc(x14135 * sizeof(char*));
  memset(x15355, 0, x14135 * sizeof(char*));
  char** x15356 = (char**)malloc(x14135 * sizeof(char*));
  memset(x15356, 0, x14135 * sizeof(char*));
  int x14156 = O_RDONLY;
  int x14157 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x14156);
  struct stat x14158 = (struct stat){0};
  /* VAR */ struct stat x14159 = x14158;
  struct stat x14160 = x14159;
  struct stat* x14161 = &x14160;
  int x14162 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x14161);
  size_t x14163 = x14161->st_size;
  int x14164 = PROT_READ;
  int x14165 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x14163, x14164, x14165, x14157, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x14135);
    /* VAR */ int ite26320 = 0;
    if(x6) {
      char x31041 = *x3;
      int x31042 = x31041!=('\0');
      ite26320 = x31042;
    } else {
      
      ite26320 = 0;
    };
    int x25301 = ite26320;
    if (!(x25301)) break; 
    
    /* VAR */ int x14173 = 0;
    int x14174 = x14173;
    int* x14175 = &x14174;
    char* x14176 = strntoi_unchecked(x3, x14175);
    x3 = x14176;
    /* VAR */ int x14178 = 0;
    int x14179 = x14178;
    int* x14180 = &x14179;
    char* x14181 = strntoi_unchecked(x3, x14180);
    x3 = x14181;
    /* VAR */ int x14183 = 0;
    int x14184 = x14183;
    int* x14185 = &x14184;
    char* x14186 = strntoi_unchecked(x3, x14185);
    x3 = x14186;
    /* VAR */ int x14188 = 0;
    int x14189 = x14188;
    int* x14190 = &x14189;
    char* x14191 = strntoi_unchecked(x3, x14190);
    x3 = x14191;
    /* VAR */ double x14193 = 0.0;
    double x14194 = x14193;
    double* x14195 = &x14194;
    char* x14196 = strntod_unchecked(x3, x14195);
    x3 = x14196;
    /* VAR */ double x14198 = 0.0;
    double x14199 = x14198;
    double* x14200 = &x14199;
    char* x14201 = strntod_unchecked(x3, x14200);
    x3 = x14201;
    /* VAR */ double x14203 = 0.0;
    double x14204 = x14203;
    double* x14205 = &x14204;
    char* x14206 = strntod_unchecked(x3, x14205);
    x3 = x14206;
    /* VAR */ double x14208 = 0.0;
    double x14209 = x14208;
    double* x14210 = &x14209;
    char* x14211 = strntod_unchecked(x3, x14210);
    x3 = x14211;
    char x14213 = *x3;
    /* VAR */ char x14214 = x14213;
    x3 += 1;
    x3 += 1;
    char x14217 = x14214;
    char x14218 = *x3;
    /* VAR */ char x14219 = x14218;
    x3 += 1;
    x3 += 1;
    char x14222 = x14219;
    /* VAR */ int x14223 = 0;
    int x14224 = x14223;
    int* x14225 = &x14224;
    char* x14226 = strntoi_unchecked(x3, x14225);
    x3 = x14226;
    /* VAR */ int x14228 = 0;
    int x14229 = x14228;
    int* x14230 = &x14229;
    char* x14231 = strntoi_unchecked(x3, x14230);
    x3 = x14231;
    /* VAR */ int x14233 = 0;
    int x14234 = x14233;
    int* x14235 = &x14234;
    char* x14236 = strntoi_unchecked(x3, x14235);
    x3 = x14236;
    int x14238 = x14224*(10000);
    int x14239 = x14229*(100);
    int x14240 = x14238+(x14239);
    int x14241 = x14240+(x14234);
    /* VAR */ int x14242 = 0;
    int x14243 = x14242;
    int* x14244 = &x14243;
    char* x14245 = strntoi_unchecked(x3, x14244);
    x3 = x14245;
    /* VAR */ int x14247 = 0;
    int x14248 = x14247;
    int* x14249 = &x14248;
    char* x14250 = strntoi_unchecked(x3, x14249);
    x3 = x14250;
    /* VAR */ int x14252 = 0;
    int x14253 = x14252;
    int* x14254 = &x14253;
    char* x14255 = strntoi_unchecked(x3, x14254);
    x3 = x14255;
    int x14257 = x14243*(10000);
    int x14258 = x14248*(100);
    int x14259 = x14257+(x14258);
    int x14260 = x14259+(x14253);
    /* VAR */ int x14261 = 0;
    int x14262 = x14261;
    int* x14263 = &x14262;
    char* x14264 = strntoi_unchecked(x3, x14263);
    x3 = x14264;
    /* VAR */ int x14266 = 0;
    int x14267 = x14266;
    int* x14268 = &x14267;
    char* x14269 = strntoi_unchecked(x3, x14268);
    x3 = x14269;
    /* VAR */ int x14271 = 0;
    int x14272 = x14271;
    int* x14273 = &x14272;
    char* x14274 = strntoi_unchecked(x3, x14273);
    x3 = x14274;
    int x14276 = x14262*(10000);
    int x14277 = x14267*(100);
    int x14278 = x14276+(x14277);
    int x14279 = x14278+(x14272);
    char* x15482 = (char*)malloc(26 * sizeof(char));
    memset(x15482, 0, 26 * sizeof(char));
    /* VAR */ char* x14281 = x3;
    while(1) {
      
      char x14282 = *x3;
      int x14283 = x14282!=('|');
      /* VAR */ int ite26441 = 0;
      if(x14283) {
        char x31161 = *x3;
        int x31162 = x31161!=('\n');
        ite26441 = x31162;
      } else {
        
        ite26441 = 0;
      };
      int x25415 = ite26441;
      if (!(x25415)) break; 
      
      x3 += 1;
    };
    char* x14289 = x14281;
    int x14290 = x3 - x14289;
    char* x14291 = x14281;
    char* x14292 = strncpy(x15482, x14291, x14290);
    x3 += 1;
    char* x15500 = (char*)malloc(11 * sizeof(char));
    memset(x15500, 0, 11 * sizeof(char));
    /* VAR */ char* x14300 = x3;
    while(1) {
      
      char x14301 = *x3;
      int x14302 = x14301!=('|');
      /* VAR */ int ite26464 = 0;
      if(x14302) {
        char x31183 = *x3;
        int x31184 = x31183!=('\n');
        ite26464 = x31184;
      } else {
        
        ite26464 = 0;
      };
      int x25431 = ite26464;
      if (!(x25431)) break; 
      
      x3 += 1;
    };
    char* x14308 = x14300;
    int x14309 = x3 - x14308;
    char* x14310 = x14300;
    char* x14311 = strncpy(x15500, x14310, x14309);
    x3 += 1;
    char* x15518 = (char*)malloc(45 * sizeof(char));
    memset(x15518, 0, 45 * sizeof(char));
    /* VAR */ char* x14319 = x3;
    while(1) {
      
      char x14320 = *x3;
      int x14321 = x14320!=('|');
      /* VAR */ int ite26487 = 0;
      if(x14321) {
        char x31205 = *x3;
        int x31206 = x31205!=('\n');
        ite26487 = x31206;
      } else {
        
        ite26487 = 0;
      };
      int x25447 = ite26487;
      if (!(x25447)) break; 
      
      x3 += 1;
    };
    char* x14327 = x14319;
    int x14328 = x3 - x14327;
    char* x14329 = x14319;
    char* x14330 = strncpy(x15518, x14329, x14328);
    x3 += 1;
    int x47 = x4;
    *(x15341 + x47) = x14174;
    *(x15342 + x47) = x14179;
    *(x15343 + x47) = x14184;
    *(x15344 + x47) = x14189;
    *(x15345 + x47) = x14194;
    *(x15346 + x47) = x14199;
    *(x15347 + x47) = x14204;
    *(x15348 + x47) = x14209;
    *(x15349 + x47) = x14217;
    *(x15350 + x47) = x14222;
    *(x15351 + x47) = x14241;
    *(x15352 + x47) = x14260;
    *(x15353 + x47) = x14279;
    *(x15354 + x47) = x15482;
    *(x15355 + x47) = x15500;
    *(x15356 + x47) = x15518;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x14357 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x14358 = 0;
  int x14359 = x14358;
  int* x14360 = &x14359;
  int x14361 = fscanf(x14357, "%d", x14360);
  pclose(x14357);
  struct ORDERSRecord* x15562 = (struct ORDERSRecord*)malloc(x14359 * sizeof(struct ORDERSRecord));
  memset(x15562, 0, x14359 * sizeof(struct ORDERSRecord));
  int x14365 = O_RDONLY;
  int x14366 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x14365);
  /* VAR */ struct stat x14367 = x14158;
  struct stat x14368 = x14367;
  struct stat* x14369 = &x14368;
  int x14370 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x14369);
  size_t x14371 = x14369->st_size;
  int x14372 = PROT_READ;
  int x14373 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x14371, x14372, x14373, x14366, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x14359);
    /* VAR */ int ite26546 = 0;
    if(x58) {
      char x31263 = *x55;
      int x31264 = x31263!=('\0');
      ite26546 = x31264;
    } else {
      
      ite26546 = 0;
    };
    int x25499 = ite26546;
    if (!(x25499)) break; 
    
    /* VAR */ int x14381 = 0;
    int x14382 = x14381;
    int* x14383 = &x14382;
    char* x14384 = strntoi_unchecked(x55, x14383);
    x55 = x14384;
    /* VAR */ int x14386 = 0;
    int x14387 = x14386;
    int* x14388 = &x14387;
    char* x14389 = strntoi_unchecked(x55, x14388);
    x55 = x14389;
    char x14391 = *x55;
    /* VAR */ char x14392 = x14391;
    x55 += 1;
    x55 += 1;
    char x14395 = x14392;
    /* VAR */ double x14396 = 0.0;
    double x14397 = x14396;
    double* x14398 = &x14397;
    char* x14399 = strntod_unchecked(x55, x14398);
    x55 = x14399;
    /* VAR */ int x14401 = 0;
    int x14402 = x14401;
    int* x14403 = &x14402;
    char* x14404 = strntoi_unchecked(x55, x14403);
    x55 = x14404;
    /* VAR */ int x14406 = 0;
    int x14407 = x14406;
    int* x14408 = &x14407;
    char* x14409 = strntoi_unchecked(x55, x14408);
    x55 = x14409;
    /* VAR */ int x14411 = 0;
    int x14412 = x14411;
    int* x14413 = &x14412;
    char* x14414 = strntoi_unchecked(x55, x14413);
    x55 = x14414;
    int x14416 = x14402*(10000);
    int x14417 = x14407*(100);
    int x14418 = x14416+(x14417);
    int x14419 = x14418+(x14412);
    char* x15619 = (char*)malloc(16 * sizeof(char));
    memset(x15619, 0, 16 * sizeof(char));
    /* VAR */ char* x14421 = x55;
    while(1) {
      
      char x14422 = *x55;
      int x14423 = x14422!=('|');
      /* VAR */ int ite26599 = 0;
      if(x14423) {
        char x31315 = *x55;
        int x31316 = x31315!=('\n');
        ite26599 = x31316;
      } else {
        
        ite26599 = 0;
      };
      int x25545 = ite26599;
      if (!(x25545)) break; 
      
      x55 += 1;
    };
    char* x14429 = x14421;
    int x14430 = x55 - x14429;
    char* x14431 = x14421;
    char* x14432 = strncpy(x15619, x14431, x14430);
    x55 += 1;
    char* x15637 = (char*)malloc(16 * sizeof(char));
    memset(x15637, 0, 16 * sizeof(char));
    /* VAR */ char* x14440 = x55;
    while(1) {
      
      char x14441 = *x55;
      int x14442 = x14441!=('|');
      /* VAR */ int ite26622 = 0;
      if(x14442) {
        char x31337 = *x55;
        int x31338 = x31337!=('\n');
        ite26622 = x31338;
      } else {
        
        ite26622 = 0;
      };
      int x25561 = ite26622;
      if (!(x25561)) break; 
      
      x55 += 1;
    };
    char* x14448 = x14440;
    int x14449 = x55 - x14448;
    char* x14450 = x14440;
    char* x14451 = strncpy(x15637, x14450, x14449);
    x55 += 1;
    /* VAR */ int x14458 = 0;
    int x14459 = x14458;
    int* x14460 = &x14459;
    char* x14461 = strntoi_unchecked(x55, x14460);
    x55 = x14461;
    char* x15660 = (char*)malloc(80 * sizeof(char));
    memset(x15660, 0, 80 * sizeof(char));
    /* VAR */ char* x14464 = x55;
    while(1) {
      
      char x14465 = *x55;
      int x14466 = x14465!=('|');
      /* VAR */ int ite26650 = 0;
      if(x14466) {
        char x31364 = *x55;
        int x31365 = x31364!=('\n');
        ite26650 = x31365;
      } else {
        
        ite26650 = 0;
      };
      int x25582 = ite26650;
      if (!(x25582)) break; 
      
      x55 += 1;
    };
    char* x14472 = x14464;
    int x14473 = x55 - x14472;
    char* x14474 = x14464;
    char* x14475 = strncpy(x15660, x14474, x14473);
    x55 += 1;
    struct ORDERSRecord* x16303 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x16303, 0, 1 * sizeof(struct ORDERSRecord));
    x16303->O_ORDERKEY = x14382; x16303->O_CUSTKEY = x14387; x16303->O_ORDERSTATUS = x14395; x16303->O_TOTALPRICE = x14397; x16303->O_ORDERDATE = x14419; x16303->O_ORDERPRIORITY = x15619; x16303->O_CLERK = x15637; x16303->O_SHIPPRIORITY = x14459; x16303->O_COMMENT = x15660; x16303->next = NULL;
    int x91 = x56;
    int x20143 = x16303==(NULL);
    /* VAR */ int ite26673 = 0;
    if(x20143) {
      ite26673 = 1;
    } else {
      
      char* x31387 = x16303->O_ORDERPRIORITY;
      int x31388 = x31387==(NULL);
      /* VAR */ int x31389 = 0;
      if(x31388) {
        x31389 = 1;
      } else {
        
        int x31392 = strcmp(x31387, "");
        int x31393 = !(x31392);
        x31389 = x31393;
      };
      int x31396 = x31389;
      ite26673 = x31396;
    };
    int x25598 = ite26673;
    if(x25598) {
      *(x15562 + x91) = (const struct ORDERSRecord){0};
    } else {
      
      struct ORDERSRecord x15682 = *x16303;
      *(x15562 + x91) = x15682;
      struct ORDERSRecord* x15684 = &(x15562[x91]);
      x16303 = x15684;
    };
    int x93 = x56;
    int x94 = x93+(1);
    x56 = x94;
  };
  int x98 = 0;
  for(; x98 < 1 ; x98 += 1) {
    
    /* VAR */ int x31981 = 0;
    struct AGGRecord_OptimalString* x31982 = (struct AGGRecord_OptimalString*)malloc(14 * sizeof(struct AGGRecord_OptimalString));
    memset(x31982, 0, 14 * sizeof(struct AGGRecord_OptimalString));
    int x23764 = 0;
    for(; x23764 < 14 ; x23764 += 1) {
      
      *(x31982 + x23764) = (const struct AGGRecord_OptimalString){0};
    };
    struct ORDERSRecord* x31988 = (struct ORDERSRecord*)malloc(1048576 * sizeof(struct ORDERSRecord));
    memset(x31988, 0, 1048576 * sizeof(struct ORDERSRecord));
    /* VAR */ int x31989 = 0;
    double** x31990 = (double**)malloc(7 * sizeof(double*));
    memset(x31990, 0, 7 * sizeof(double*));
    /* VAR */ int x31991 = 0;
    while(1) {
      
      int x13349 = x31991;
      int x13350 = x13349<(7);
      if (!(x13350)) break; 
      
      int x13351 = x31991;
      double* x15708 = (double*)malloc(2 * sizeof(double));
      memset(x15708, 0, 2 * sizeof(double));
      *(x31990 + x13351) = x15708;
      int x13354 = x31991;
      int x13355 = x13354+(1);
      x31991 = x13355;
    };
    /* VAR */ int x32001 = 0;
    struct AGGRecord_OptimalString* x32002 = (struct AGGRecord_OptimalString*)malloc(7 * sizeof(struct AGGRecord_OptimalString));
    memset(x32002, 0, 7 * sizeof(struct AGGRecord_OptimalString));
    /* VAR */ int x32003 = 0;
    while(1) {
      
      int x13361 = x32003;
      int x13362 = x13361<(7);
      if (!(x13362)) break; 
      
      int x13363 = x32003;
      double* x13364 = x31990[x13363];
      struct AGGRecord_OptimalString* x16348 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x16348, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      x16348->key = ""; x16348->aggs = x13364; x16348->next = NULL;
      int x20190 = x16348==(NULL);
      /* VAR */ int ite27249 = 0;
      if(x20190) {
        ite27249 = 1;
      } else {
        
        char* x32016 = x16348->key;
        int x32017 = x32016==(NULL);
        /* VAR */ int x32018 = 0;
        if(x32017) {
          x32018 = 1;
        } else {
          
          int x32021 = strcmp(x32016, "");
          int x32022 = !(x32021);
          x32018 = x32022;
        };
        int x32025 = x32018;
        ite27249 = x32025;
      };
      int x25980 = ite27249;
      if(x25980) {
        *(x32002 + x13363) = (const struct AGGRecord_OptimalString){0};
      } else {
        
        struct AGGRecord_OptimalString x15724 = *x16348;
        *(x32002 + x13363) = x15724;
        struct AGGRecord_OptimalString* x15726 = &(x32002[x13363]);
        x16348 = x15726;
      };
      int x13367 = x32003;
      int x13368 = x13367+(1);
      x32003 = x13368;
    };
    /* VAR */ struct timeval x32038 = x13572;
    struct timeval x32039 = x32038;
    /* VAR */ struct timeval x32040 = x13572;
    struct timeval x32041 = x32040;
    /* VAR */ struct timeval x32042 = x13572;
    struct timeval x32043 = x32042;
    struct timeval* x32044 = &x32041;
    gettimeofday(x32044, NULL);
    /* VAR */ int x32046 = 0;
    /* VAR */ int x32047 = 0;
    int* x32060 = &(x32054);
    GTree* x32061 = g_tree_new(x32060);
    /* VAR */ int x32062 = 0;
    /* VAR */ int x32063 = 0;
    while(1) {
      
      int x32065 = x32046;
      int x32066 = x32065<(x14359);
      if (!(x32066)) break; 
      
      int x1516 = x32046;
      struct ORDERSRecord* x192 = &(x15562[x1516]);
      int x194 = x192->O_ORDERKEY;
      int x2863 = x194%(1048576);
      struct ORDERSRecord* x4263 = &(x31988[x2863]);
      /* VAR */ struct ORDERSRecord* list4264 = x4263;
      struct ORDERSRecord* x4265 = list4264;
      int x20240 = x4265==(NULL);
      /* VAR */ int ite27307 = 0;
      if(x20240) {
        ite27307 = 1;
      } else {
        
        char* x32078 = x4265->O_ORDERPRIORITY;
        int x32079 = x32078==(NULL);
        /* VAR */ int x32080 = 0;
        if(x32079) {
          x32080 = 1;
        } else {
          
          int x32083 = strcmp(x32078, "");
          int x32084 = !(x32083);
          x32080 = x32084;
        };
        int x32087 = x32080;
        ite27307 = x32087;
      };
      int x26027 = ite27307;
      if(x26027) {
        list4264 = NULL;
        struct ORDERSRecord* x4272 = list4264;
        int x20247 = x4272==(NULL);
        /* VAR */ int ite27322 = 0;
        if(x20247) {
          ite27322 = 1;
        } else {
          
          char* x32098 = x4272->O_ORDERPRIORITY;
          int x32099 = x32098==(NULL);
          /* VAR */ int x32100 = 0;
          if(x32099) {
            x32100 = 1;
          } else {
            
            int x32103 = strcmp(x32098, "");
            int x32104 = !(x32103);
            x32100 = x32104;
          };
          int x32107 = x32100;
          ite27322 = x32107;
        };
        int x26033 = ite27322;
        if(x26033) {
          *(x31988 + x2863) = (const struct ORDERSRecord){0};
        } else {
          
          struct ORDERSRecord x15770 = *x4272;
          *(x31988 + x2863) = x15770;
          struct ORDERSRecord* x15772 = &(x31988[x2863]);
          list4264 = x15772;
        };
      };
      int x20257 = x4263==(NULL);
      /* VAR */ int ite27340 = 0;
      if(x20257) {
        ite27340 = 1;
      } else {
        
        char* x32121 = x4263->O_ORDERPRIORITY;
        int x32122 = x32121==(NULL);
        /* VAR */ int x32123 = 0;
        if(x32122) {
          x32123 = 1;
        } else {
          
          int x32126 = strcmp(x32121, "");
          int x32127 = !(x32126);
          x32123 = x32127;
        };
        int x32130 = x32123;
        ite27340 = x32130;
      };
      int x26042 = ite27340;
      if(x26042) {
        x192->next = NULL;
        int x20263 = x192==(NULL);
        /* VAR */ int ite27354 = 0;
        if(x20263) {
          ite27354 = 1;
        } else {
          
          char* x32140 = x192->O_ORDERPRIORITY;
          int x32141 = x32140==(NULL);
          /* VAR */ int x32142 = 0;
          if(x32141) {
            x32142 = 1;
          } else {
            
            int x32145 = strcmp(x32140, "");
            int x32146 = !(x32145);
            x32142 = x32146;
          };
          int x32149 = x32142;
          ite27354 = x32149;
        };
        int x26047 = ite27354;
        if(x26047) {
          *(x31988 + x2863) = (const struct ORDERSRecord){0};
        } else {
          
          struct ORDERSRecord x15780 = *x192;
          *(x31988 + x2863) = x15780;
          struct ORDERSRecord* x15782 = &(x31988[x2863]);
          x192 = x15782;
        };
        list4264 = x192;
      } else {
        
        struct ORDERSRecord* x5611 = x4263->next;
        x192->next = x5611;
        x4263->next = x192;
      };
      int x1521 = x32046;
      int x198 = x1521+(1);
      x32046 = x198;
    };
    while(1) {
      
      int x32167 = x32047;
      int x32168 = x32167<(x14135);
      if (!(x32168)) break; 
      
      int x1530 = x32047;
      int x9663 = x15353[x1530];
      int x210 = x9663<(19950101);
      /* VAR */ int ite27385 = 0;
      if(x210) {
        int x32174 = x15352[x1530];
        int x32175 = x32174<(19950101);
        ite27385 = x32175;
      } else {
        
        ite27385 = 0;
      };
      int x26067 = ite27385;
      /* VAR */ int ite27394 = 0;
      if(x26067) {
        int x32182 = x15351[x1530];
        int x32183 = x32182<(19950101);
        ite27394 = x32183;
      } else {
        
        ite27394 = 0;
      };
      int x26069 = ite27394;
      /* VAR */ int ite27403 = 0;
      if(x26069) {
        int x32190 = x15351[x1530];
        int x32191 = x15352[x1530];
        int x32192 = x32190<(x32191);
        ite27403 = x32192;
      } else {
        
        ite27403 = 0;
      };
      int x26071 = ite27403;
      /* VAR */ int ite27413 = 0;
      if(x26071) {
        int x32199 = x15352[x1530];
        int x32200 = x32199<(x9663);
        ite27413 = x32200;
      } else {
        
        ite27413 = 0;
      };
      int x26073 = ite27413;
      /* VAR */ int ite27422 = 0;
      if(x26073) {
        int x32207 = x9663>=(19940101);
        ite27422 = x32207;
      } else {
        
        ite27422 = 0;
      };
      int x26075 = ite27422;
      /* VAR */ int ite27430 = 0;
      if(x26075) {
        char* x32214 = x15355[x1530];
        int x32215 = strcmp(x32214, "MAIL");
        int x32216 = x32215==(0);
        /* VAR */ int x32217 = 0;
        if(x32216) {
          x32217 = 1;
        } else {
          
          int x32220 = strcmp(x32214, "SHIP");
          int x32221 = x32220==(0);
          x32217 = x32221;
        };
        int x32224 = x32217;
        ite27430 = x32224;
      } else {
        
        ite27430 = 0;
      };
      int x26077 = ite27430;
      if(x26077) {
        int x9693 = x15341[x1530];
        int x2909 = x9693%(1048576);
        struct ORDERSRecord* x4318 = &(x31988[x2909]);
        int x20311 = x4318!=(NULL);
        /* VAR */ int ite27447 = 0;
        if(x20311) {
          char* x32236 = x4318->O_ORDERPRIORITY;
          int x32237 = x32236!=(NULL);
          /* VAR */ int x32238 = 0;
          if(x32237) {
            int x32240 = strcmp(x32236, "");
            x32238 = x32240;
          } else {
            
            x32238 = 0;
          };
          int x32244 = x32238;
          ite27447 = x32244;
        } else {
          
          ite27447 = 0;
        };
        int x26084 = ite27447;
        if(x26084) {
          /* VAR */ struct ORDERSRecord* current4862 = x4318;
          while(1) {
            
            struct ORDERSRecord* x4864 = current4862;
            int x20319 = x4864!=(NULL);
            /* VAR */ int ite27463 = 0;
            if(x20319) {
              char* x32256 = x4864->O_ORDERPRIORITY;
              int x32257 = x32256!=(NULL);
              /* VAR */ int x32258 = 0;
              if(x32257) {
                int x32260 = strcmp(x32256, "");
                x32258 = x32260;
              } else {
                
                x32258 = 0;
              };
              int x32264 = x32258;
              ite27463 = x32264;
            } else {
              
              ite27463 = 0;
            };
            int x26091 = ite27463;
            if (!(x26091)) break; 
            
            struct ORDERSRecord* x4866 = current4862;
            struct ORDERSRecord* x5753 = x4866->next;
            struct ORDERSRecord* x4868 = current4862;
            int x4425 = x4868->O_ORDERKEY;
            int x4426 = x4425==(x9693);
            if(x4426) {
              char* x740 = x4868->O_ORDERPRIORITY;
              char* x9742 = x15355[x1530];
              int x22498 = strlen(x9742);
              /* VAR */ int x20332 = 0;
              /* VAR */ int x20333 = 0;
              while(1) {
                
                int x20334 = x20332;
                int x20335 = x20334<(x22498);
                if (!(x20335)) break; 
                
                int x20336 = x20333;
                int x20337 = x20332;
                char* x22506 = pointer_add(x9742, x20337);
                char x22507 = *(x22506);
                int x20340 = x20336+(x22507);
                x20333 = x20340;
                int x20342 = x20332;
                int x20343 = x20342+(1);
                x20332 = x20343;
              };
              int x20346 = x20333;
              int x3467 = x20346&(13);
              struct AGGRecord_OptimalString* x4355 = &(x31982[x3467]);
              int x3469 = x31981;
              int x3470 = x3467>(x3469);
              if(x3470) {
                x31981 = x3467;
              };
              /* VAR */ struct AGGRecord_OptimalString* current4909 = x4355;
              /* VAR */ int found4365 = 0;
              while(1) {
                
                struct AGGRecord_OptimalString* x4912 = current4909;
                int x20357 = x4912!=(NULL);
                /* VAR */ int ite27509 = 0;
                if(x20357) {
                  char* x32306 = x4912->key;
                  int x32307 = x32306!=(NULL);
                  /* VAR */ int x32308 = 0;
                  if(x32307) {
                    int x32310 = strcmp(x32306, "");
                    x32308 = x32310;
                  } else {
                    
                    x32308 = 0;
                  };
                  int x32314 = x32308;
                  ite27509 = x32314;
                } else {
                  
                  ite27509 = 0;
                };
                int x26128 = ite27509;
                /* VAR */ int ite27520 = 0;
                if(x26128) {
                  int x32321 = found4365;
                  int x32322 = !(x32321);
                  ite27520 = x32322;
                } else {
                  
                  ite27520 = 0;
                };
                int x26130 = ite27520;
                if (!(x26130)) break; 
                
                struct AGGRecord_OptimalString* x4917 = current4909;
                char* x4373 = x4917->key;
                int x20366 = strcmp(x4373, x9742);
                int x20367 = !(x20366);
                if(x20367) {
                  found4365 = 1;
                } else {
                  
                  struct AGGRecord_OptimalString* x4923 = current4909;
                  struct AGGRecord_OptimalString* x5808 = x4923->next;
                  current4909 = x5808;
                };
              };
              int x4381 = found4365;
              int x4382 = !(x4381);
              /* VAR */ struct AGGRecord_OptimalString** ite26143 = 0;
              if(x4382) {
                ite26143 = NULL;
              } else {
                
                struct AGGRecord_OptimalString* x26145 = current4909;
                ite26143 = x26145;
              };
              struct AGGRecord_OptimalString** x4388 = ite26143;
              int x8122 = x4388!=(NULL);
              /* VAR */ struct AGGRecord_OptimalString* ite26151 = 0;
              if(x8122) {
                ite26151 = x4388;
              } else {
                
                int x26153 = x31989;
                double* x26154 = x31990[x26153];
                int x26155 = x31989;
                int x26156 = x26155+(1);
                x31989 = x26156;
                int x26158 = x32001;
                struct AGGRecord_OptimalString* x26159 = &(x32002[x26158]);
                x26159->key = x9742;
                x26159->aggs = x26154;
                x26159->next = NULL;
                int x26163 = x32001;
                int x26164 = x26163+(1);
                x32001 = x26164;
                int x26166 = x4355==(NULL);
                /* VAR */ int ite27565 = 0;
                if(x26166) {
                  ite27565 = 1;
                } else {
                  
                  char* x32366 = x4355->key;
                  int x32367 = x32366==(NULL);
                  /* VAR */ int x32368 = 0;
                  if(x32367) {
                    x32368 = 1;
                  } else {
                    
                    int x32371 = strcmp(x32366, "");
                    int x32372 = !(x32371);
                    x32368 = x32372;
                  };
                  int x32375 = x32368;
                  ite27565 = x32375;
                };
                int x26168 = ite27565;
                if(x26168) {
                  x26159->next = NULL;
                  int x20398 = x26159==(NULL);
                  /* VAR */ int ite27579 = 0;
                  if(x20398) {
                    ite27579 = 1;
                  } else {
                    
                    char* x32385 = x26159->key;
                    int x32386 = x32385==(NULL);
                    /* VAR */ int x32387 = 0;
                    if(x32386) {
                      x32387 = 1;
                    } else {
                      
                      int x32390 = strcmp(x32385, "");
                      int x32391 = !(x32390);
                      x32387 = x32391;
                    };
                    int x32394 = x32387;
                    ite27579 = x32394;
                  };
                  int x26173 = ite27579;
                  if(x26173) {
                    *(x31982 + x3467) = (const struct AGGRecord_OptimalString){0};
                  } else {
                    
                    struct AGGRecord_OptimalString x15885 = *x26159;
                    *(x31982 + x3467) = x15885;
                    struct AGGRecord_OptimalString* x15887 = &(x31982[x3467]);
                    x26159 = x15887;
                  };
                } else {
                  
                  struct AGGRecord_OptimalString* x5828 = x4355->next;
                  x26159->next = x5828;
                  x4355->next = x26159;
                };
                ite26151 = x26159;
              };
              struct AGGRecord_OptimalString* x3482 = ite26151;
              double* x300 = x3482->aggs;
              double x314 = x300[0];
              int x22589 = strcmp(x740, "1-URGENT");
              int x22590 = x22589==(0);
              /* VAR */ int ite27606 = 0;
              if(x22590) {
                ite27606 = 1;
              } else {
                
                int x32417 = strcmp(x740, "2-HIGH");
                int x32418 = x32417==(0);
                ite27606 = x32418;
              };
              int x26191 = ite27606;
              /* VAR */ double ite26193 = 0;
              if(x26191) {
                double x26194 = x314+(1.0);
                ite26193 = x26194;
              } else {
                
                ite26193 = x314;
              };
              double x321 = ite26193;
              *x300 = x321;
              double x329 = x300[1];
              int x22598 = strcmp(x740, "1-URGENT");
              int x22599 = x22598!=(0);
              /* VAR */ int ite27626 = 0;
              if(x22599) {
                int x32435 = strcmp(x740, "2-HIGH");
                int x32436 = x32435!=(0);
                ite27626 = x32436;
              } else {
                
                ite27626 = 0;
              };
              int x26204 = ite27626;
              /* VAR */ double ite26206 = 0;
              if(x26204) {
                double x26207 = x329+(1.0);
                ite26206 = x26207;
              } else {
                
                ite26206 = x329;
              };
              double x335 = ite26206;
              *(x300 + 1) = x335;
            };
            current4862 = x5753;
          };
        };
      };
      int x1711 = x32047;
      int x347 = x1711+(1);
      x32047 = x347;
    };
    int x32453 = x31981;
    int x32454 = x32453+(1);
    int x24084 = 0;
    for(; x24084 < x32454 ; x24084 += 1) {
      
      struct AGGRecord_OptimalString* x24085 = &(x31982[x24084]);
      /* VAR */ struct AGGRecord_OptimalString* x24086 = x24085;
      while(1) {
        
        struct AGGRecord_OptimalString* x4981 = x24086;
        int x20439 = x4981!=(NULL);
        /* VAR */ int ite27678 = 0;
        if(x20439) {
          char* x32490 = x4981->key;
          int x32491 = x32490!=(NULL);
          /* VAR */ int x32492 = 0;
          if(x32491) {
            int x32494 = strcmp(x32490, "");
            x32492 = x32494;
          } else {
            
            x32492 = 0;
          };
          int x32498 = x32492;
          ite27678 = x32498;
        } else {
          
          ite27678 = 0;
        };
        int x26240 = ite27678;
        if (!(x26240)) break; 
        
        struct AGGRecord_OptimalString* x4983 = x24086;
        struct AGGRecord_OptimalString* x5868 = x4983->next;
        struct AGGRecord_OptimalString* x4985 = x24086;
        g_tree_insert(x32061, x4985, x4985);
        x24086 = x5868;
      };
    };
    while(1) {
      
      int x1721 = x32062;
      int x359 = !(x1721);
      /* VAR */ int ite27697 = 0;
      if(x359) {
        int x32513 = g_tree_nnodes(x32061);
        int x32514 = x32513!=(0);
        ite27697 = x32514;
      } else {
        
        ite27697 = 0;
      };
      int x26250 = ite27697;
      if (!(x26250)) break; 
      
      void* x17825 = NULL;
      void** x17833 = &(x17825);
      g_tree_foreach(x32061, x17832, x17833);
      struct AGGRecord_OptimalString* x17835 = (struct AGGRecord_OptimalString*){x17825};
      int x17836 = g_tree_remove(x32061, x17835);
      if(0) {
        x32062 = 1;
      } else {
        
        char* x372 = x17835->key;
        double* x374 = x17835->aggs;
        double x375 = x374[0];
        double x376 = x374[1];
        printf("%s|%.0f|%.0f\n", x372, x375, x376);
        int x1740 = x32063;
        int x379 = x1740+(1);
        x32063 = x379;
      };
    };
    int x32541 = x32063;
    printf("(%d rows)\n", x32541);
    struct timeval* x32543 = &x32043;
    gettimeofday(x32543, NULL);
    struct timeval* x32545 = &x32039;
    struct timeval* x32546 = &x32043;
    struct timeval* x32547 = &x32041;
    long x32548 = timeval_subtract(x32545, x32546, x32547);
    printf("Generated code run in %ld milliseconds.\n", x32548);
  };
}
/* ----------- FUNCTIONS ----------- */
int x32054(struct AGGRecord_OptimalString* x170, struct AGGRecord_OptimalString* x171) {
  char* x172 = x170->key;
  char* x173 = x171->key;
  int x22373 = strcmp(x172, x173);
  return x22373; 
}

int x17832(void* x17826, void* x17827, void* x17828) {
  struct AGGRecord_OptimalString** x17829 = (struct AGGRecord_OptimalString**){x17828};
  struct AGGRecord_OptimalString* x17830 = (struct AGGRecord_OptimalString*){x17827};
  pointer_assign(x17829, x17830);
  return 1; 
}
