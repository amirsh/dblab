#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct Q3GRPRecord;
  struct LINEITEMRecord;
  struct AGGRecord_Q3GRPRecord;
  struct ORDERSRecord;
  struct CUSTOMERRecord;
  
  struct Q3GRPRecord {
  int L_ORDERKEY;
  int O_ORDERDATE;
  int O_SHIPPRIORITY;
  };
  
  struct LINEITEMRecord {
  int L_ORDERKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  int L_SHIPDATE;
  };
  
  struct AGGRecord_Q3GRPRecord {
  struct Q3GRPRecord* key;
  double* aggs;
  struct AGGRecord_Q3GRPRecord* next;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  int O_ORDERDATE;
  int O_SHIPPRIORITY;
  };
  
  struct CUSTOMERRecord {
  int C_CUSTKEY;
  int C_MKTSEGMENT;
  };
  
  


int x45147(struct AGGRecord_Q3GRPRecord* x219, struct AGGRecord_Q3GRPRecord* x220);

int x18986(void* x18980, void* x18981, void* x18982);
/* GLOBAL VARS */

struct timeval x13497;
int main(int argc, char** argv) {
  /* VAR */ int x4356 = 0;
  int x18132 = sizeof(char**);
  GArray* x18133 = g_array_new(0, 1, x18132);
  FILE* x14127 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x14128 = 0;
  int x14129 = x14128;
  int* x14130 = &x14129;
  int x14131 = fscanf(x14127, "%d", x14130);
  pclose(x14127);
  struct LINEITEMRecord* x15683 = (struct LINEITEMRecord*)malloc(x14129 * sizeof(struct LINEITEMRecord));
  memset(x15683, 0, x14129 * sizeof(struct LINEITEMRecord));
  int x14135 = O_RDONLY;
  int x14136 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x14135);
  struct stat x14137 = (struct stat){0};
  /* VAR */ struct stat x14138 = x14137;
  struct stat x14139 = x14138;
  struct stat* x14140 = &x14139;
  int x14141 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x14140);
  size_t x14142 = x14140->st_size;
  int x14143 = PROT_READ;
  int x14144 = MAP_PRIVATE;
  char* x10390 = mmap(NULL, x14142, x14143, x14144, x14136, 0);
  /* VAR */ int x10391 = 0;
  while(1) {
    
    int x5 = x10391;
    int x6 = x5<(x14129);
    /* VAR */ int ite34966 = 0;
    if(x6) {
      char x42747 = *x10390;
      int x42748 = x42747!=('\0');
      ite34966 = x42748;
    } else {
      
      ite34966 = 0;
    };
    int x31838 = ite34966;
    if (!(x31838)) break; 
    
    /* VAR */ int x14152 = 0;
    int x14153 = x14152;
    int* x14154 = &x14153;
    char* x14155 = strntoi_unchecked(x10390, x14154);
    x10390 = x14155;
    /* VAR */ int x14157 = 0;
    int x14158 = x14157;
    int* x14159 = &x14158;
    char* x14160 = strntoi_unchecked(x10390, x14159);
    x10390 = x14160;
    /* VAR */ int x14162 = 0;
    int x14163 = x14162;
    int* x14164 = &x14163;
    char* x14165 = strntoi_unchecked(x10390, x14164);
    x10390 = x14165;
    /* VAR */ int x14167 = 0;
    int x14168 = x14167;
    int* x14169 = &x14168;
    char* x14170 = strntoi_unchecked(x10390, x14169);
    x10390 = x14170;
    /* VAR */ double x14172 = 0.0;
    double x14173 = x14172;
    double* x14174 = &x14173;
    char* x14175 = strntod_unchecked(x10390, x14174);
    x10390 = x14175;
    /* VAR */ double x14177 = 0.0;
    double x14178 = x14177;
    double* x14179 = &x14178;
    char* x14180 = strntod_unchecked(x10390, x14179);
    x10390 = x14180;
    /* VAR */ double x14182 = 0.0;
    double x14183 = x14182;
    double* x14184 = &x14183;
    char* x14185 = strntod_unchecked(x10390, x14184);
    x10390 = x14185;
    /* VAR */ double x14187 = 0.0;
    double x14188 = x14187;
    double* x14189 = &x14188;
    char* x14190 = strntod_unchecked(x10390, x14189);
    x10390 = x14190;
    char x14192 = *x10390;
    /* VAR */ char x14193 = x14192;
    x10390 += 1;
    x10390 += 1;
    char x14197 = *x10390;
    /* VAR */ char x14198 = x14197;
    x10390 += 1;
    x10390 += 1;
    /* VAR */ int x14202 = 0;
    int x14203 = x14202;
    int* x14204 = &x14203;
    char* x14205 = strntoi_unchecked(x10390, x14204);
    x10390 = x14205;
    /* VAR */ int x14207 = 0;
    int x14208 = x14207;
    int* x14209 = &x14208;
    char* x14210 = strntoi_unchecked(x10390, x14209);
    x10390 = x14210;
    /* VAR */ int x14212 = 0;
    int x14213 = x14212;
    int* x14214 = &x14213;
    char* x14215 = strntoi_unchecked(x10390, x14214);
    x10390 = x14215;
    int x14217 = x14203*(10000);
    int x14218 = x14208*(100);
    int x14219 = x14217+(x14218);
    int x14220 = x14219+(x14213);
    /* VAR */ int x14221 = 0;
    int x14222 = x14221;
    int* x14223 = &x14222;
    char* x14224 = strntoi_unchecked(x10390, x14223);
    x10390 = x14224;
    /* VAR */ int x14226 = 0;
    int x14227 = x14226;
    int* x14228 = &x14227;
    char* x14229 = strntoi_unchecked(x10390, x14228);
    x10390 = x14229;
    /* VAR */ int x14231 = 0;
    int x14232 = x14231;
    int* x14233 = &x14232;
    char* x14234 = strntoi_unchecked(x10390, x14233);
    x10390 = x14234;
    /* VAR */ int x14240 = 0;
    int x14241 = x14240;
    int* x14242 = &x14241;
    char* x14243 = strntoi_unchecked(x10390, x14242);
    x10390 = x14243;
    /* VAR */ int x14245 = 0;
    int x14246 = x14245;
    int* x14247 = &x14246;
    char* x14248 = strntoi_unchecked(x10390, x14247);
    x10390 = x14248;
    /* VAR */ int x14250 = 0;
    int x14251 = x14250;
    int* x14252 = &x14251;
    char* x14253 = strntoi_unchecked(x10390, x14252);
    x10390 = x14253;
    char* x15809 = (char*)malloc(26 * sizeof(char));
    memset(x15809, 0, 26 * sizeof(char));
    /* VAR */ char* x14260 = x10390;
    while(1) {
      
      char x14261 = *x10390;
      int x14262 = x14261!=('|');
      /* VAR */ int ite35087 = 0;
      if(x14262) {
        char x42867 = *x10390;
        int x42868 = x42867!=('\n');
        ite35087 = x42868;
      } else {
        
        ite35087 = 0;
      };
      int x31952 = ite35087;
      if (!(x31952)) break; 
      
      x10390 += 1;
    };
    char* x14268 = x14260;
    int x14269 = x10390 - x14268;
    char* x14270 = x14260;
    char* x14271 = strncpy(x15809, x14270, x14269);
    x10390 += 1;
    char* x15827 = (char*)malloc(11 * sizeof(char));
    memset(x15827, 0, 11 * sizeof(char));
    /* VAR */ char* x14279 = x10390;
    while(1) {
      
      char x14280 = *x10390;
      int x14281 = x14280!=('|');
      /* VAR */ int ite35110 = 0;
      if(x14281) {
        char x42889 = *x10390;
        int x42890 = x42889!=('\n');
        ite35110 = x42890;
      } else {
        
        ite35110 = 0;
      };
      int x31968 = ite35110;
      if (!(x31968)) break; 
      
      x10390 += 1;
    };
    char* x14287 = x14279;
    int x14288 = x10390 - x14287;
    char* x14289 = x14279;
    char* x14290 = strncpy(x15827, x14289, x14288);
    x10390 += 1;
    char* x15845 = (char*)malloc(45 * sizeof(char));
    memset(x15845, 0, 45 * sizeof(char));
    /* VAR */ char* x14298 = x10390;
    while(1) {
      
      char x14299 = *x10390;
      int x14300 = x14299!=('|');
      /* VAR */ int ite35133 = 0;
      if(x14300) {
        char x42911 = *x10390;
        int x42912 = x42911!=('\n');
        ite35133 = x42912;
      } else {
        
        ite35133 = 0;
      };
      int x31984 = ite35133;
      if (!(x31984)) break; 
      
      x10390 += 1;
    };
    char* x14306 = x14298;
    int x14307 = x10390 - x14306;
    char* x14308 = x14298;
    char* x14309 = strncpy(x15845, x14308, x14307);
    x10390 += 1;
    struct LINEITEMRecord* x16675 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x16675, 0, 1 * sizeof(struct LINEITEMRecord));
    x16675->L_ORDERKEY = x14153; x16675->L_EXTENDEDPRICE = x14178; x16675->L_DISCOUNT = x14183; x16675->L_SHIPDATE = x14220;
    int x47 = x10391;
    int x22757 = x16675==(NULL);
    if(x22757) {
      *(x15683 + x47) = (const struct LINEITEMRecord){0};
    } else {
      
      struct LINEITEMRecord x15867 = *x16675;
      *(x15683 + x47) = x15867;
      struct LINEITEMRecord* x15869 = &(x15683[x47]);
      x16675 = x15869;
    };
    int x49 = x10391;
    int x50 = x49+(1);
    x10391 = x50;
  };
  FILE* x14322 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x14323 = 0;
  int x14324 = x14323;
  int* x14325 = &x14324;
  int x14326 = fscanf(x14322, "%d", x14325);
  pclose(x14322);
  struct ORDERSRecord* x15881 = (struct ORDERSRecord*)malloc(x14324 * sizeof(struct ORDERSRecord));
  memset(x15881, 0, x14324 * sizeof(struct ORDERSRecord));
  int x14330 = O_RDONLY;
  int x14331 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x14330);
  /* VAR */ struct stat x14332 = x14137;
  struct stat x14333 = x14332;
  struct stat* x14334 = &x14333;
  int x14335 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x14334);
  size_t x14336 = x14334->st_size;
  int x14337 = PROT_READ;
  int x14338 = MAP_PRIVATE;
  char* x10439 = mmap(NULL, x14336, x14337, x14338, x14331, 0);
  /* VAR */ int x10440 = 0;
  while(1) {
    
    int x57 = x10440;
    int x58 = x57<(x14324);
    /* VAR */ int ite35186 = 0;
    if(x58) {
      char x42963 = *x10439;
      int x42964 = x42963!=('\0');
      ite35186 = x42964;
    } else {
      
      ite35186 = 0;
    };
    int x32030 = ite35186;
    if (!(x32030)) break; 
    
    /* VAR */ int x14346 = 0;
    int x14347 = x14346;
    int* x14348 = &x14347;
    char* x14349 = strntoi_unchecked(x10439, x14348);
    x10439 = x14349;
    /* VAR */ int x14351 = 0;
    int x14352 = x14351;
    int* x14353 = &x14352;
    char* x14354 = strntoi_unchecked(x10439, x14353);
    x10439 = x14354;
    char x14356 = *x10439;
    /* VAR */ char x14357 = x14356;
    x10439 += 1;
    x10439 += 1;
    /* VAR */ double x14361 = 0.0;
    double x14362 = x14361;
    double* x14363 = &x14362;
    char* x14364 = strntod_unchecked(x10439, x14363);
    x10439 = x14364;
    /* VAR */ int x14366 = 0;
    int x14367 = x14366;
    int* x14368 = &x14367;
    char* x14369 = strntoi_unchecked(x10439, x14368);
    x10439 = x14369;
    /* VAR */ int x14371 = 0;
    int x14372 = x14371;
    int* x14373 = &x14372;
    char* x14374 = strntoi_unchecked(x10439, x14373);
    x10439 = x14374;
    /* VAR */ int x14376 = 0;
    int x14377 = x14376;
    int* x14378 = &x14377;
    char* x14379 = strntoi_unchecked(x10439, x14378);
    x10439 = x14379;
    int x14381 = x14367*(10000);
    int x14382 = x14372*(100);
    int x14383 = x14381+(x14382);
    int x14384 = x14383+(x14377);
    char* x15938 = (char*)malloc(16 * sizeof(char));
    memset(x15938, 0, 16 * sizeof(char));
    /* VAR */ char* x14386 = x10439;
    while(1) {
      
      char x14387 = *x10439;
      int x14388 = x14387!=('|');
      /* VAR */ int ite35239 = 0;
      if(x14388) {
        char x43015 = *x10439;
        int x43016 = x43015!=('\n');
        ite35239 = x43016;
      } else {
        
        ite35239 = 0;
      };
      int x32076 = ite35239;
      if (!(x32076)) break; 
      
      x10439 += 1;
    };
    char* x14394 = x14386;
    int x14395 = x10439 - x14394;
    char* x14396 = x14386;
    char* x14397 = strncpy(x15938, x14396, x14395);
    x10439 += 1;
    char* x15956 = (char*)malloc(16 * sizeof(char));
    memset(x15956, 0, 16 * sizeof(char));
    /* VAR */ char* x14405 = x10439;
    while(1) {
      
      char x14406 = *x10439;
      int x14407 = x14406!=('|');
      /* VAR */ int ite35262 = 0;
      if(x14407) {
        char x43037 = *x10439;
        int x43038 = x43037!=('\n');
        ite35262 = x43038;
      } else {
        
        ite35262 = 0;
      };
      int x32092 = ite35262;
      if (!(x32092)) break; 
      
      x10439 += 1;
    };
    char* x14413 = x14405;
    int x14414 = x10439 - x14413;
    char* x14415 = x14405;
    char* x14416 = strncpy(x15956, x14415, x14414);
    x10439 += 1;
    /* VAR */ int x14423 = 0;
    int x14424 = x14423;
    int* x14425 = &x14424;
    char* x14426 = strntoi_unchecked(x10439, x14425);
    x10439 = x14426;
    char* x15979 = (char*)malloc(80 * sizeof(char));
    memset(x15979, 0, 80 * sizeof(char));
    /* VAR */ char* x14429 = x10439;
    while(1) {
      
      char x14430 = *x10439;
      int x14431 = x14430!=('|');
      /* VAR */ int ite35290 = 0;
      if(x14431) {
        char x43064 = *x10439;
        int x43065 = x43064!=('\n');
        ite35290 = x43065;
      } else {
        
        ite35290 = 0;
      };
      int x32113 = ite35290;
      if (!(x32113)) break; 
      
      x10439 += 1;
    };
    char* x14437 = x14429;
    int x14438 = x10439 - x14437;
    char* x14439 = x14429;
    char* x14440 = strncpy(x15979, x14439, x14438);
    x10439 += 1;
    struct ORDERSRecord* x16811 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x16811, 0, 1 * sizeof(struct ORDERSRecord));
    x16811->O_ORDERKEY = x14347; x16811->O_CUSTKEY = x14352; x16811->O_ORDERDATE = x14384; x16811->O_SHIPPRIORITY = x14424;
    int x91 = x10440;
    int x22893 = x16811==(NULL);
    if(x22893) {
      *(x15881 + x91) = (const struct ORDERSRecord){0};
    } else {
      
      struct ORDERSRecord x16001 = *x16811;
      *(x15881 + x91) = x16001;
      struct ORDERSRecord* x16003 = &(x15881[x91]);
      x16811 = x16003;
    };
    int x93 = x10440;
    int x94 = x93+(1);
    x10440 = x94;
  };
  FILE* x14453 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x14454 = 0;
  int x14455 = x14454;
  int* x14456 = &x14455;
  int x14457 = fscanf(x14453, "%d", x14456);
  pclose(x14453);
  struct CUSTOMERRecord* x16015 = (struct CUSTOMERRecord*)malloc(x14455 * sizeof(struct CUSTOMERRecord));
  memset(x16015, 0, x14455 * sizeof(struct CUSTOMERRecord));
  int x14461 = O_RDONLY;
  int x14462 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x14461);
  /* VAR */ struct stat x14463 = x14137;
  struct stat x14464 = x14463;
  struct stat* x14465 = &x14464;
  int x14466 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x14465);
  size_t x14467 = x14465->st_size;
  int x14468 = PROT_READ;
  int x14469 = MAP_PRIVATE;
  char* x10481 = mmap(NULL, x14467, x14468, x14469, x14462, 0);
  /* VAR */ int x10482 = 0;
  while(1) {
    
    int x101 = x10482;
    int x102 = x101<(x14455);
    /* VAR */ int ite35343 = 0;
    if(x102) {
      char x43116 = *x10481;
      int x43117 = x43116!=('\0');
      ite35343 = x43117;
    } else {
      
      ite35343 = 0;
    };
    int x32159 = ite35343;
    if (!(x32159)) break; 
    
    /* VAR */ int x14477 = 0;
    int x14478 = x14477;
    int* x14479 = &x14478;
    char* x14480 = strntoi_unchecked(x10481, x14479);
    x10481 = x14480;
    char* x16038 = (char*)malloc(26 * sizeof(char));
    memset(x16038, 0, 26 * sizeof(char));
    /* VAR */ char* x14483 = x10481;
    while(1) {
      
      char x14484 = *x10481;
      int x14485 = x14484!=('|');
      /* VAR */ int ite35362 = 0;
      if(x14485) {
        char x43134 = *x10481;
        int x43135 = x43134!=('\n');
        ite35362 = x43135;
      } else {
        
        ite35362 = 0;
      };
      int x32171 = ite35362;
      if (!(x32171)) break; 
      
      x10481 += 1;
    };
    char* x14491 = x14483;
    int x14492 = x10481 - x14491;
    char* x14493 = x14483;
    char* x14494 = strncpy(x16038, x14493, x14492);
    x10481 += 1;
    char* x16056 = (char*)malloc(41 * sizeof(char));
    memset(x16056, 0, 41 * sizeof(char));
    /* VAR */ char* x14502 = x10481;
    while(1) {
      
      char x14503 = *x10481;
      int x14504 = x14503!=('|');
      /* VAR */ int ite35385 = 0;
      if(x14504) {
        char x43156 = *x10481;
        int x43157 = x43156!=('\n');
        ite35385 = x43157;
      } else {
        
        ite35385 = 0;
      };
      int x32187 = ite35385;
      if (!(x32187)) break; 
      
      x10481 += 1;
    };
    char* x14510 = x14502;
    int x14511 = x10481 - x14510;
    char* x14512 = x14502;
    char* x14513 = strncpy(x16056, x14512, x14511);
    x10481 += 1;
    /* VAR */ int x14520 = 0;
    int x14521 = x14520;
    int* x14522 = &x14521;
    char* x14523 = strntoi_unchecked(x10481, x14522);
    x10481 = x14523;
    char* x16079 = (char*)malloc(16 * sizeof(char));
    memset(x16079, 0, 16 * sizeof(char));
    /* VAR */ char* x14526 = x10481;
    while(1) {
      
      char x14527 = *x10481;
      int x14528 = x14527!=('|');
      /* VAR */ int ite35413 = 0;
      if(x14528) {
        char x43183 = *x10481;
        int x43184 = x43183!=('\n');
        ite35413 = x43184;
      } else {
        
        ite35413 = 0;
      };
      int x32208 = ite35413;
      if (!(x32208)) break; 
      
      x10481 += 1;
    };
    char* x14534 = x14526;
    int x14535 = x10481 - x14534;
    char* x14536 = x14526;
    char* x14537 = strncpy(x16079, x14536, x14535);
    x10481 += 1;
    /* VAR */ double x14544 = 0.0;
    double x14545 = x14544;
    double* x14546 = &x14545;
    char* x14547 = strntod_unchecked(x10481, x14546);
    x10481 = x14547;
    char* x16102 = (char*)malloc(11 * sizeof(char));
    memset(x16102, 0, 11 * sizeof(char));
    /* VAR */ char* x14550 = x10481;
    while(1) {
      
      char x14551 = *x10481;
      int x14552 = x14551!=('|');
      /* VAR */ int ite35441 = 0;
      if(x14552) {
        char x43210 = *x10481;
        int x43211 = x43210!=('\n');
        ite35441 = x43211;
      } else {
        
        ite35441 = 0;
      };
      int x32229 = ite35441;
      if (!(x32229)) break; 
      
      x10481 += 1;
    };
    char* x14558 = x14550;
    int x14559 = x10481 - x14558;
    char* x14560 = x14550;
    char* x14561 = strncpy(x16102, x14560, x14559);
    x10481 += 1;
    char* x16120 = (char*)malloc(118 * sizeof(char));
    memset(x16120, 0, 118 * sizeof(char));
    /* VAR */ char* x14569 = x10481;
    while(1) {
      
      char x14570 = *x10481;
      int x14571 = x14570!=('|');
      /* VAR */ int ite35464 = 0;
      if(x14571) {
        char x43232 = *x10481;
        int x43233 = x43232!=('\n');
        ite35464 = x43233;
      } else {
        
        ite35464 = 0;
      };
      int x32245 = ite35464;
      if (!(x32245)) break; 
      
      x10481 += 1;
    };
    char* x14577 = x14569;
    int x14578 = x10481 - x14577;
    char* x14579 = x14569;
    char* x14580 = strncpy(x16120, x14579, x14578);
    x10481 += 1;
    int x4497 = x4356;
    int x4498 = x4497>(4096);
    if(x4498) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "C_MKTSEGMENT", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "C_MKTSEGMENT");
    };
    /* VAR */ int x18604 = -1;
    int x18605 = x18133->len;
    int x27598 = 0;
    for(; x27598 < x18605 ; x27598 += 1) {
      
      char* x27599 = g_array_index(x18133, char*, x27598);
      int x27600 = strcmp(x27599, x16102);
      int x27601 = !(x27600);
      if(x27601) {
        x18604 = x27598;
        break;
      };
    };
    int x18615 = x18604;
    int x18616 = x18615!=(-1);
    int x4503 = !(x18616);
    if(x4503) {
      int x4504 = x4356;
      int x4505 = x4504+(1);
      x4356 = x4505;
      void* x18622 = &(x16102);
      GArray* x18623 = g_array_append_vals(x18133, x18622, 1);
    };
    /* VAR */ int x18624 = -1;
    int x18625 = x18133->len;
    int x27625 = 0;
    for(; x27625 < x18625 ; x27625 += 1) {
      
      char* x27626 = g_array_index(x18133, char*, x27625);
      int x27627 = strcmp(x27626, x16102);
      int x27628 = !(x27627);
      if(x27628) {
        x18624 = x27625;
        break;
      };
    };
    int x18635 = x18624;
    struct CUSTOMERRecord* x16967 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x16967, 0, 1 * sizeof(struct CUSTOMERRecord));
    x16967->C_CUSTKEY = x14478; x16967->C_MKTSEGMENT = x18635;
    int x149 = x10482;
    int x23075 = x16967==(NULL);
    if(x23075) {
      *(x16015 + x149) = (const struct CUSTOMERRecord){0};
    } else {
      
      struct CUSTOMERRecord x16155 = *x16967;
      *(x16015 + x149) = x16155;
      struct CUSTOMERRecord* x16157 = &(x16015[x149]);
      x16967 = x16157;
    };
    int x151 = x10482;
    int x152 = x151+(1);
    x10482 = x152;
  };
  int x156 = 0;
  for(; x156 < 1 ; x156 += 1) {
    
    /* VAR */ int x44902 = 0;
    struct AGGRecord_Q3GRPRecord* x44903 = (struct AGGRecord_Q3GRPRecord*)malloc(1048576 * sizeof(struct AGGRecord_Q3GRPRecord));
    memset(x44903, 0, 1048576 * sizeof(struct AGGRecord_Q3GRPRecord));
    int x27655 = 0;
    for(; x27655 < 1048576 ; x27655 += 1) {
      
      *(x44903 + x27655) = (const struct AGGRecord_Q3GRPRecord){0};
    };
    struct LINEITEMRecord** x44909 = (struct LINEITEMRecord**)malloc(60000000 * sizeof(struct LINEITEMRecord*));
    memset(x44909, 0, 60000000 * sizeof(struct LINEITEMRecord*));
    int* x44910 = (int*)malloc(60000000 * sizeof(int));
    memset(x44910, 0, 60000000 * sizeof(int));
    int x27664 = 0;
    for(; x27664 < 60000000 ; x27664 += 1) {
      
      struct LINEITEMRecord* x27665 = (struct LINEITEMRecord*)malloc(16 * sizeof(struct LINEITEMRecord));
      memset(x27665, 0, 16 * sizeof(struct LINEITEMRecord));
      *(x44909 + x27664) = x27665;
    };
    /* VAR */ int x44918 = 0;
    int x27688 = 0;
    for(; x27688 < x14129 ; x27688 += 1) {
      
      struct LINEITEMRecord* x27689 = &(x15683[x27688]);
      int x27690 = x27689->L_ORDERKEY;
      int x27691 = x27690%(60000000);
      int x27692 = x44910[x27691];
      struct LINEITEMRecord* x27693 = x44909[x27691];
      int x27694 = x27689==(NULL);
      if(x27694) {
        *(x27693 + x27692) = (const struct LINEITEMRecord){0};
      } else {
        
        struct LINEITEMRecord x16192 = *x27689;
        *(x27693 + x27692) = x16192;
        struct LINEITEMRecord* x16194 = &(x27693[x27692]);
        x27689 = x16194;
      };
      int x27701 = x27692+(1);
      *(x44910 + x27691) = x27701;
      int x27703 = x44918;
      int x27704 = x27703+(1);
      x44918 = x27704;
    };
    struct ORDERSRecord** x44956 = (struct ORDERSRecord**)malloc(96 * sizeof(struct ORDERSRecord*));
    memset(x44956, 0, 96 * sizeof(struct ORDERSRecord*));
    int* x44957 = (int*)malloc(96 * sizeof(int));
    memset(x44957, 0, 96 * sizeof(int));
    int x27715 = 0;
    for(; x27715 < 96 ; x27715 += 1) {
      
      int x27716 = x14324/(96);
      int x27717 = x27716*(4);
      struct ORDERSRecord* x27718 = (struct ORDERSRecord*)malloc(x27717 * sizeof(struct ORDERSRecord));
      memset(x27718, 0, x27717 * sizeof(struct ORDERSRecord));
      *(x44956 + x27715) = x27718;
    };
    /* VAR */ int x44969 = 0;
    int x27747 = 0;
    for(; x27747 < x14324 ; x27747 += 1) {
      
      struct ORDERSRecord* x27748 = &(x15881[x27747]);
      int x27749 = x27748->O_ORDERDATE;
      int x27750 = x27749/(100);
      int x27751 = x27750%(100);
      int x27752 = x27750/(100);
      int x27753 = x27752-(1992);
      int x27754 = x27753*(12);
      int x27755 = x27751-(1);
      int x27756 = x27754+(x27755);
      int x27757 = x44957[x27756];
      struct ORDERSRecord* x27758 = x44956[x27756];
      int x27759 = x27748==(NULL);
      if(x27759) {
        *(x27758 + x27757) = (const struct ORDERSRecord){0};
      } else {
        
        struct ORDERSRecord x16230 = *x27748;
        *(x27758 + x27757) = x16230;
        struct ORDERSRecord* x16232 = &(x27758[x27757]);
        x27748 = x16232;
      };
      int x27766 = x27757+(1);
      *(x44957 + x27756) = x27766;
      int x27768 = x44969;
      int x27769 = x27768+(1);
      x44969 = x27769;
    };
    /* VAR */ int x45019 = 0;
    struct Q3GRPRecord* x45020 = (struct Q3GRPRecord*)malloc(48000000 * sizeof(struct Q3GRPRecord));
    memset(x45020, 0, 48000000 * sizeof(struct Q3GRPRecord));
    /* VAR */ int x45021 = 0;
    while(1) {
      
      int x13285 = x45021;
      int x13286 = x13285<(48000000);
      if (!(x13286)) break; 
      
      int x13287 = x45021;
      struct Q3GRPRecord* x17066 = (struct Q3GRPRecord*)malloc(1 * sizeof(struct Q3GRPRecord));
      memset(x17066, 0, 1 * sizeof(struct Q3GRPRecord));
      x17066->L_ORDERKEY = 0; x17066->O_ORDERDATE = 0; x17066->O_SHIPPRIORITY = 0;
      int x23173 = x17066==(NULL);
      if(x23173) {
        *(x45020 + x13287) = (const struct Q3GRPRecord){0};
      } else {
        
        struct Q3GRPRecord x16251 = *x17066;
        *(x45020 + x13287) = x16251;
        struct Q3GRPRecord* x16253 = &(x45020[x13287]);
        x17066 = x16253;
      };
      int x13290 = x45021;
      int x13291 = x13290+(1);
      x45021 = x13291;
    };
    /* VAR */ int x45039 = 0;
    double** x45040 = (double**)malloc(48000000 * sizeof(double*));
    memset(x45040, 0, 48000000 * sizeof(double*));
    /* VAR */ int x45041 = 0;
    while(1) {
      
      int x13297 = x45041;
      int x13298 = x13297<(48000000);
      if (!(x13298)) break; 
      
      int x13299 = x45041;
      double* x16266 = (double*)malloc(1 * sizeof(double));
      memset(x16266, 0, 1 * sizeof(double));
      *(x45040 + x13299) = x16266;
      int x13302 = x45041;
      int x13303 = x13302+(1);
      x45041 = x13303;
    };
    /* VAR */ int x45051 = 0;
    struct AGGRecord_Q3GRPRecord* x45052 = (struct AGGRecord_Q3GRPRecord*)malloc(48000000 * sizeof(struct AGGRecord_Q3GRPRecord));
    memset(x45052, 0, 48000000 * sizeof(struct AGGRecord_Q3GRPRecord));
    /* VAR */ int x45053 = 0;
    while(1) {
      
      int x13309 = x45053;
      int x13310 = x13309<(48000000);
      if (!(x13310)) break; 
      
      int x13311 = x45053;
      struct Q3GRPRecord* x13312 = &(x45020[x13311]);
      double* x13313 = x45040[x13311];
      struct AGGRecord_Q3GRPRecord* x17100 = (struct AGGRecord_Q3GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q3GRPRecord));
      memset(x17100, 0, 1 * sizeof(struct AGGRecord_Q3GRPRecord));
      x17100->key = x13312; x17100->aggs = x13313; x17100->next = NULL;
      int x23207 = x17100==(NULL);
      /* VAR */ int ite37352 = 0;
      if(x23207) {
        ite37352 = 1;
      } else {
        
        struct Q3GRPRecord* x45067 = x17100->key;
        int x45068 = x45067==(NULL);
        ite37352 = x45068;
      };
      int x33794 = ite37352;
      if(x33794) {
        *(x45052 + x13311) = (const struct AGGRecord_Q3GRPRecord){0};
      } else {
        
        struct AGGRecord_Q3GRPRecord x16283 = *x17100;
        *(x45052 + x13311) = x16283;
        struct AGGRecord_Q3GRPRecord* x16285 = &(x45052[x13311]);
        x17100 = x16285;
      };
      int x13316 = x45053;
      int x13317 = x13316+(1);
      x45053 = x13317;
    };
    /* VAR */ struct timeval x45081 = x13497;
    struct timeval x45082 = x45081;
    /* VAR */ struct timeval x45083 = x13497;
    struct timeval x45084 = x45083;
    /* VAR */ struct timeval x45085 = x13497;
    struct timeval x45086 = x45085;
    struct timeval* x45087 = &x45084;
    gettimeofday(x45087, NULL);
    /* VAR */ int x45089 = -1;
    int x45090 = x18133->len;
    int x27847 = 0;
    for(; x27847 < x45090 ; x27847 += 1) {
      
      char* x27848 = g_array_index(x18133, char*, x27847);
      int x27849 = strcmp(x27848, "HOUSEHOLD");
      int x27850 = !(x27849);
      if(x27850) {
        x45089 = x27847;
        break;
      };
    };
    int x45106 = x45089;
    /* VAR */ int x45107 = 0;
    int* x45186 = &(x45147);
    GTree* x45187 = g_tree_new(x45186);
    /* VAR */ int x45188 = 0;
    /* VAR */ int x45189 = 0;
    int x28348 = 33;
    for(; x28348 < 39 ; x28348 += 1) {
      
      int x28349 = x44957[x28348];
      struct ORDERSRecord* x28350 = x44956[x28348];
      int x28126 = 0;
      for(; x28126 < x28349 ; x28126 += 1) {
        
        struct ORDERSRecord* x28127 = &(x28350[x28126]);
        int x28128 = x28127->O_ORDERDATE;
        int x28129 = x28128<(19950304);
        if(x28129) {
          int x278 = x28127->O_CUSTKEY;
          int x10617 = x278-(1);
          struct CUSTOMERRecord* x10618 = &(x16015[x10617]);
          int x10619 = x10618->C_MKTSEGMENT;
          int x10620 = x10619==(x45106);
          if(x10620) {
            int x260 = x10618->C_CUSTKEY;
            int x3407 = x260==(x278);
            if(x3407) {
              int x3408 = x10618->C_CUSTKEY;
              int x3409 = x3408==(x278);
              if(x3409) {
                int x798 = x28127->O_ORDERKEY;
                int x799 = x28127->O_SHIPPRIORITY;
                int x3416 = x798%(60000000);
                int x3417 = x44910[x3416];
                struct LINEITEMRecord* x3418 = x44909[x3416];
                int x28026 = 0;
                for(; x28026 < x3417 ; x28026 += 1) {
                  
                  struct LINEITEMRecord* x28027 = &(x3418[x28026]);
                  int x28028 = x28027->L_SHIPDATE;
                  int x28029 = x28028>(19950304);
                  if(x28029) {
                    int x322 = x28027->L_ORDERKEY;
                    int x10641 = x798==(x322);
                    if(x10641) {
                      double x886 = x28027->L_EXTENDEDPRICE;
                      double x887 = x28027->L_DISCOUNT;
                      int x13389 = x45019;
                      struct Q3GRPRecord* x13390 = &(x45020[x13389]);
                      x13390->L_ORDERKEY = x322;
                      x13390->O_ORDERDATE = x28128;
                      x13390->O_SHIPPRIORITY = x799;
                      int x13394 = x45019;
                      int x13395 = x13394+(1);
                      x45019 = x13395;
                      int x23334 = x13390->L_ORDERKEY;
                      int x23336 = x13390->O_ORDERDATE;
                      int x23338 = x13390->O_SHIPPRIORITY;
                      int x23340 = x23334+(x23336);
                      int x23341 = x23340+(x23338);
                      int x5224 = x23341&(1048575);
                      struct AGGRecord_Q3GRPRecord* x6235 = &(x44903[x5224]);
                      int x5226 = x44902;
                      int x5227 = x5224>(x5226);
                      if(x5227) {
                        x44902 = x5224;
                      };
                      /* VAR */ struct AGGRecord_Q3GRPRecord* current6622 = x6235;
                      /* VAR */ int found6245 = 0;
                      while(1) {
                        
                        struct AGGRecord_Q3GRPRecord* x6625 = current6622;
                        int x23352 = x6625!=(NULL);
                        /* VAR */ int ite38629 = 0;
                        if(x23352) {
                          struct Q3GRPRecord* x46300 = x6625->key;
                          int x46301 = x46300!=(NULL);
                          ite38629 = x46301;
                        } else {
                          
                          ite38629 = 0;
                        };
                        int x34798 = ite38629;
                        /* VAR */ int ite38638 = 0;
                        if(x34798) {
                          int x46308 = found6245;
                          int x46309 = !(x46308);
                          ite38638 = x46309;
                        } else {
                          
                          ite38638 = 0;
                        };
                        int x34800 = ite38638;
                        if (!(x34800)) break; 
                        
                        struct AGGRecord_Q3GRPRecord* x6630 = current6622;
                        struct Q3GRPRecord* x6253 = x6630->key;
                        int x23361 = x6253->L_ORDERKEY;
                        int x23362 = x23361==(x23334);
                        int x23363 = x6253->O_ORDERDATE;
                        int x23364 = x23363==(x23336);
                        int x23365 = x6253->O_SHIPPRIORITY;
                        int x23366 = x23365==(x23338);
                        /* VAR */ int ite38655 = 0;
                        if(x23362) {
                          ite38655 = x23364;
                        } else {
                          
                          ite38655 = 0;
                        };
                        int x34810 = ite38655;
                        /* VAR */ int ite38662 = 0;
                        if(x34810) {
                          ite38662 = x23366;
                        } else {
                          
                          ite38662 = 0;
                        };
                        int x34812 = ite38662;
                        if(x34812) {
                          found6245 = 1;
                        } else {
                          
                          struct AGGRecord_Q3GRPRecord* x6636 = current6622;
                          struct AGGRecord_Q3GRPRecord* x7391 = x6636->next;
                          current6622 = x7391;
                        };
                      };
                      int x6261 = found6245;
                      int x6262 = !(x6261);
                      /* VAR */ struct AGGRecord_Q3GRPRecord** ite34821 = 0;
                      if(x6262) {
                        ite34821 = NULL;
                      } else {
                        
                        struct AGGRecord_Q3GRPRecord* x34823 = current6622;
                        ite34821 = x34823;
                      };
                      struct AGGRecord_Q3GRPRecord** x6268 = ite34821;
                      int x9614 = x6268!=(NULL);
                      /* VAR */ struct AGGRecord_Q3GRPRecord* ite34829 = 0;
                      if(x9614) {
                        ite34829 = x6268;
                      } else {
                        
                        int x34831 = x45039;
                        double* x34832 = x45040[x34831];
                        int x34833 = x45039;
                        int x34834 = x34833+(1);
                        x45039 = x34834;
                        int x34836 = x45051;
                        struct AGGRecord_Q3GRPRecord* x34837 = &(x45052[x34836]);
                        x34837->key = x13390;
                        x34837->aggs = x34832;
                        x34837->next = NULL;
                        int x34841 = x45051;
                        int x34842 = x34841+(1);
                        x45051 = x34842;
                        int x34844 = x6235==(NULL);
                        /* VAR */ int ite38701 = 0;
                        if(x34844) {
                          ite38701 = 1;
                        } else {
                          
                          struct Q3GRPRecord* x46369 = x6235->key;
                          int x46370 = x46369==(NULL);
                          ite38701 = x46370;
                        };
                        int x34846 = ite38701;
                        if(x34846) {
                          x34837->next = NULL;
                          int x23399 = x34837==(NULL);
                          /* VAR */ int ite38713 = 0;
                          if(x23399) {
                            ite38713 = 1;
                          } else {
                            
                            struct Q3GRPRecord* x46380 = x34837->key;
                            int x46381 = x46380==(NULL);
                            ite38713 = x46381;
                          };
                          int x34851 = ite38713;
                          if(x34851) {
                            *(x44903 + x5224) = (const struct AGGRecord_Q3GRPRecord){0};
                          } else {
                            
                            struct AGGRecord_Q3GRPRecord x16421 = *x34837;
                            *(x44903 + x5224) = x16421;
                            struct AGGRecord_Q3GRPRecord* x16423 = &(x44903[x5224]);
                            x34837 = x16423;
                          };
                        } else {
                          
                          struct AGGRecord_Q3GRPRecord* x7411 = x6235->next;
                          x34837->next = x7411;
                          x6235->next = x34837;
                        };
                        ite34829 = x34837;
                      };
                      struct AGGRecord_Q3GRPRecord* x5239 = ite34829;
                      double* x381 = x5239->aggs;
                      double x395 = x381[0];
                      double x398 = 1.0-(x887);
                      double x399 = x886*(x398);
                      double x400 = x395+(x399);
                      *x381 = x400;
                    };
                  };
                };
              };
            };
          };
        };
      };
    };
    int x46403 = x44902;
    int x46404 = x46403+(1);
    int x28812 = 0;
    for(; x28812 < x46404 ; x28812 += 1) {
      
      struct AGGRecord_Q3GRPRecord* x28813 = &(x44903[x28812]);
      /* VAR */ struct AGGRecord_Q3GRPRecord* x28814 = x28813;
      while(1) {
        
        struct AGGRecord_Q3GRPRecord* x6684 = x28814;
        int x23430 = x6684!=(NULL);
        /* VAR */ int ite38769 = 0;
        if(x23430) {
          struct Q3GRPRecord* x46433 = x6684->key;
          int x46434 = x46433!=(NULL);
          ite38769 = x46434;
        } else {
          
          ite38769 = 0;
        };
        int x34893 = ite38769;
        if (!(x34893)) break; 
        
        struct AGGRecord_Q3GRPRecord* x6686 = x28814;
        struct AGGRecord_Q3GRPRecord* x7441 = x6686->next;
        struct AGGRecord_Q3GRPRecord* x6688 = x28814;
        g_tree_insert(x45187, x6688, x6688);
        x28814 = x7441;
      };
    };
    while(1) {
      
      int x1938 = x45188;
      int x423 = !(x1938);
      /* VAR */ int ite38786 = 0;
      if(x423) {
        int x46449 = g_tree_nnodes(x45187);
        int x46450 = x46449!=(0);
        ite38786 = x46450;
      } else {
        
        ite38786 = 0;
      };
      int x34903 = ite38786;
      if (!(x34903)) break; 
      
      void* x18979 = NULL;
      void** x18987 = &(x18979);
      g_tree_foreach(x45187, x18986, x18987);
      struct AGGRecord_Q3GRPRecord* x18989 = (struct AGGRecord_Q3GRPRecord*){x18979};
      int x18990 = g_tree_remove(x45187, x18989);
      int x1946 = x45189;
      int x433 = x1946>=(10);
      if(x433) {
        x45188 = 1;
      } else {
        
        struct Q3GRPRecord* x435 = x18989->key;
        int x436 = x435->L_ORDERKEY;
        double* x437 = x18989->aggs;
        double x438 = x437[0];
        int x439 = x435->O_ORDERDATE;
        char* x440 = ltoa(x439);
        int x441 = x435->O_SHIPPRIORITY;
        printf("%d|%.4f|%s|%d\n", x436, x438, x440, x441);
        int x1958 = x45189;
        int x444 = x1958+(1);
        x45189 = x444;
      };
    };
    int x46482 = x45189;
    printf("(%d rows)\n", x46482);
    struct timeval* x46484 = &x45086;
    gettimeofday(x46484, NULL);
    struct timeval* x46486 = &x45082;
    struct timeval* x46487 = &x45086;
    struct timeval* x46488 = &x45084;
    long x46489 = timeval_subtract(x46486, x46487, x46488);
    printf("Generated code run in %ld milliseconds.\n", x46489);
  };
}
/* ----------- FUNCTIONS ----------- */
int x45147(struct AGGRecord_Q3GRPRecord* x219, struct AGGRecord_Q3GRPRecord* x220) {
  double* x221 = x219->aggs;
  double x222 = x221[0];
  double* x223 = x220->aggs;
  double x224 = x223[0];
  int x225 = x222<(x224);
  /* VAR */ int ite33879 = 0;
  if(x225) {
    ite33879 = 1;
  } else {
    
    int x33881 = x222>(x224);
    /* VAR */ int ite33883 = 0;
    if(x33881) {
      ite33883 = -1;
    } else {
      
      struct Q3GRPRecord* x33885 = x219->key;
      int x33886 = x33885->O_ORDERDATE;
      struct Q3GRPRecord* x33887 = x220->key;
      int x33888 = x33887->O_ORDERDATE;
      int x33889 = x33886<(x33888);
      /* VAR */ int ite33891 = 0;
      if(x33889) {
        ite33891 = -1;
      } else {
        
        int x33893 = x33886>(x33888);
        /* VAR */ int ite33895 = 0;
        if(x33893) {
          ite33895 = 1;
        } else {
          
          ite33895 = 0;
        };
        int x33894 = ite33895;
        ite33891 = x33894;
      };
      int x33890 = ite33891;
      ite33883 = x33890;
    };
    int x33882 = ite33883;
    ite33879 = x33882;
  };
  int x236 = ite33879;
  return x236; 
}

int x18986(void* x18980, void* x18981, void* x18982) {
  struct AGGRecord_Q3GRPRecord** x18983 = (struct AGGRecord_Q3GRPRecord**){x18982};
  struct AGGRecord_Q3GRPRecord* x18984 = (struct AGGRecord_Q3GRPRecord*){x18981};
  pointer_assign(x18983, x18984);
  return 1; 
}
