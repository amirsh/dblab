#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord_PARTRecord_ORDERSRecord;
  struct LINEITEMRecord;
  struct REGIONRecord;
  struct NATIONRecord;
  struct LINEITEMRecord_PARTRecord;
  struct ORDERSRecord;
  struct PARTRecord;
  struct AGGRecord_Int;
  struct SUPPLIERRecord;
  struct CUSTOMERRecord;
  
  struct LINEITEMRecord_PARTRecord_ORDERSRecord {
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
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
  struct LINEITEMRecord_PARTRecord_ORDERSRecord* next;
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
  struct LINEITEMRecord* next;
  };
  
  struct REGIONRecord {
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
  struct REGIONRecord* next;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  struct NATIONRecord* next;
  };
  
  struct LINEITEMRecord_PARTRecord {
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
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  struct LINEITEMRecord_PARTRecord* next;
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
  };
  
  struct AGGRecord_Int {
  int key;
  double* aggs;
  struct AGGRecord_Int* next;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  struct SUPPLIERRecord* next;
  };
  
  struct CUSTOMERRecord {
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
  };
  
  


int x113094(struct AGGRecord_Int* x491, struct AGGRecord_Int* x492);

int x74077(void* x74071, void* x74072, void* x74073);
/* GLOBAL VARS */

struct timeval x62555;
int main(int argc, char** argv) {
  FILE* x64125 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x64126 = 0;
  int x64127 = x64126;
  int* x64128 = &x64127;
  int x64129 = fscanf(x64125, "%d", x64128);
  pclose(x64125);
  struct PARTRecord* x67265 = (struct PARTRecord*)malloc(x64127 * sizeof(struct PARTRecord));
  memset(x67265, 0, x64127 * sizeof(struct PARTRecord));
  int x64133 = O_RDONLY;
  int x64134 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x64133);
  struct stat x64135 = (struct stat){0};
  /* VAR */ struct stat x64136 = x64135;
  struct stat x64137 = x64136;
  struct stat* x64138 = &x64137;
  int x64139 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x64138);
  size_t x64140 = x64138->st_size;
  int x64141 = PROT_READ;
  int x64142 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x64140, x64141, x64142, x64134, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x64127);
    /* VAR */ int ite97070 = 0;
    if(x6) {
      char x110201 = *x3;
      int x110202 = x110201!=('\0');
      ite97070 = x110202;
    } else {
      
      ite97070 = 0;
    };
    int x94351 = ite97070;
    if (!(x94351)) break; 
    
    /* VAR */ int x64150 = 0;
    int x64151 = x64150;
    int* x64152 = &x64151;
    char* x64153 = strntoi_unchecked(x3, x64152);
    x3 = x64153;
    char* x67289 = (char*)malloc(56 * sizeof(char));
    memset(x67289, 0, 56 * sizeof(char));
    /* VAR */ char* x64156 = x3;
    while(1) {
      
      char x64157 = *x3;
      int x64158 = x64157!=('|');
      /* VAR */ int ite97089 = 0;
      if(x64158) {
        char x110219 = *x3;
        int x110220 = x110219!=('\n');
        ite97089 = x110220;
      } else {
        
        ite97089 = 0;
      };
      int x94363 = ite97089;
      if (!(x94363)) break; 
      
      x3 += 1;
    };
    char* x64164 = x64156;
    int x64165 = x3 - x64164;
    char* x64166 = x64156;
    char* x64167 = strncpy(x67289, x64166, x64165);
    x3 += 1;
    char* x67307 = (char*)malloc(26 * sizeof(char));
    memset(x67307, 0, 26 * sizeof(char));
    /* VAR */ char* x64175 = x3;
    while(1) {
      
      char x64176 = *x3;
      int x64177 = x64176!=('|');
      /* VAR */ int ite97112 = 0;
      if(x64177) {
        char x110241 = *x3;
        int x110242 = x110241!=('\n');
        ite97112 = x110242;
      } else {
        
        ite97112 = 0;
      };
      int x94379 = ite97112;
      if (!(x94379)) break; 
      
      x3 += 1;
    };
    char* x64183 = x64175;
    int x64184 = x3 - x64183;
    char* x64185 = x64175;
    char* x64186 = strncpy(x67307, x64185, x64184);
    x3 += 1;
    char* x67325 = (char*)malloc(11 * sizeof(char));
    memset(x67325, 0, 11 * sizeof(char));
    /* VAR */ char* x64194 = x3;
    while(1) {
      
      char x64195 = *x3;
      int x64196 = x64195!=('|');
      /* VAR */ int ite97135 = 0;
      if(x64196) {
        char x110263 = *x3;
        int x110264 = x110263!=('\n');
        ite97135 = x110264;
      } else {
        
        ite97135 = 0;
      };
      int x94395 = ite97135;
      if (!(x94395)) break; 
      
      x3 += 1;
    };
    char* x64202 = x64194;
    int x64203 = x3 - x64202;
    char* x64204 = x64194;
    char* x64205 = strncpy(x67325, x64204, x64203);
    x3 += 1;
    char* x67343 = (char*)malloc(26 * sizeof(char));
    memset(x67343, 0, 26 * sizeof(char));
    /* VAR */ char* x64213 = x3;
    while(1) {
      
      char x64214 = *x3;
      int x64215 = x64214!=('|');
      /* VAR */ int ite97158 = 0;
      if(x64215) {
        char x110285 = *x3;
        int x110286 = x110285!=('\n');
        ite97158 = x110286;
      } else {
        
        ite97158 = 0;
      };
      int x94411 = ite97158;
      if (!(x94411)) break; 
      
      x3 += 1;
    };
    char* x64221 = x64213;
    int x64222 = x3 - x64221;
    char* x64223 = x64213;
    char* x64224 = strncpy(x67343, x64223, x64222);
    x3 += 1;
    /* VAR */ int x64231 = 0;
    int x64232 = x64231;
    int* x64233 = &x64232;
    char* x64234 = strntoi_unchecked(x3, x64233);
    x3 = x64234;
    char* x67366 = (char*)malloc(11 * sizeof(char));
    memset(x67366, 0, 11 * sizeof(char));
    /* VAR */ char* x64237 = x3;
    while(1) {
      
      char x64238 = *x3;
      int x64239 = x64238!=('|');
      /* VAR */ int ite97186 = 0;
      if(x64239) {
        char x110312 = *x3;
        int x110313 = x110312!=('\n');
        ite97186 = x110313;
      } else {
        
        ite97186 = 0;
      };
      int x94432 = ite97186;
      if (!(x94432)) break; 
      
      x3 += 1;
    };
    char* x64245 = x64237;
    int x64246 = x3 - x64245;
    char* x64247 = x64237;
    char* x64248 = strncpy(x67366, x64247, x64246);
    x3 += 1;
    /* VAR */ double x64255 = 0.0;
    double x64256 = x64255;
    double* x64257 = &x64256;
    char* x64258 = strntod_unchecked(x3, x64257);
    x3 = x64258;
    char* x67389 = (char*)malloc(24 * sizeof(char));
    memset(x67389, 0, 24 * sizeof(char));
    /* VAR */ char* x64261 = x3;
    while(1) {
      
      char x64262 = *x3;
      int x64263 = x64262!=('|');
      /* VAR */ int ite97214 = 0;
      if(x64263) {
        char x110339 = *x3;
        int x110340 = x110339!=('\n');
        ite97214 = x110340;
      } else {
        
        ite97214 = 0;
      };
      int x94453 = ite97214;
      if (!(x94453)) break; 
      
      x3 += 1;
    };
    char* x64269 = x64261;
    int x64270 = x3 - x64269;
    char* x64271 = x64261;
    char* x64272 = strncpy(x67389, x64271, x64270);
    x3 += 1;
    struct PARTRecord* x69099 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x69099, 0, 1 * sizeof(struct PARTRecord));
    x69099->P_PARTKEY = x64151; x69099->P_NAME = x67289; x69099->P_MFGR = x67307; x69099->P_BRAND = x67325; x69099->P_TYPE = x67343; x69099->P_SIZE = x64232; x69099->P_CONTAINER = x67366; x69099->P_RETAILPRICE = x64256; x69099->P_COMMENT = x67389;
    int x59 = x4;
    int x79449 = x69099==(NULL);
    /* VAR */ int ite97237 = 0;
    if(x79449) {
      ite97237 = 1;
    } else {
      
      char* x110362 = x69099->P_NAME;
      int x110363 = x110362==(NULL);
      /* VAR */ int x110364 = 0;
      if(x110363) {
        x110364 = 1;
      } else {
        
        int x110367 = strcmp(x110362, "");
        int x110368 = !(x110367);
        x110364 = x110368;
      };
      int x110371 = x110364;
      ite97237 = x110371;
    };
    int x94469 = ite97237;
    if(x94469) {
      *(x67265 + x59) = (const struct PARTRecord){0};
    } else {
      
      struct PARTRecord x67411 = *x69099;
      *(x67265 + x59) = x67411;
      struct PARTRecord* x67413 = &(x67265[x59]);
      x69099 = x67413;
    };
    int x61 = x4;
    int x62 = x61+(1);
    x4 = x62;
  };
  FILE* x64285 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x64286 = 0;
  int x64287 = x64286;
  int* x64288 = &x64287;
  int x64289 = fscanf(x64285, "%d", x64288);
  pclose(x64285);
  struct LINEITEMRecord* x67425 = (struct LINEITEMRecord*)malloc(x64287 * sizeof(struct LINEITEMRecord));
  memset(x67425, 0, x64287 * sizeof(struct LINEITEMRecord));
  int x64293 = O_RDONLY;
  int x64294 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x64293);
  /* VAR */ struct stat x64295 = x64135;
  struct stat x64296 = x64295;
  struct stat* x64297 = &x64296;
  int x64298 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x64297);
  size_t x64299 = x64297->st_size;
  int x64300 = PROT_READ;
  int x64301 = MAP_PRIVATE;
  char* x67 = mmap(NULL, x64299, x64300, x64301, x64294, 0);
  /* VAR */ int x68 = 0;
  while(1) {
    
    int x69 = x68;
    int x70 = x69<(x64287);
    /* VAR */ int ite97278 = 0;
    if(x70) {
      char x110407 = *x67;
      int x110408 = x110407!=('\0');
      ite97278 = x110408;
    } else {
      
      ite97278 = 0;
    };
    int x94501 = ite97278;
    if (!(x94501)) break; 
    
    /* VAR */ int x64309 = 0;
    int x64310 = x64309;
    int* x64311 = &x64310;
    char* x64312 = strntoi_unchecked(x67, x64311);
    x67 = x64312;
    /* VAR */ int x64314 = 0;
    int x64315 = x64314;
    int* x64316 = &x64315;
    char* x64317 = strntoi_unchecked(x67, x64316);
    x67 = x64317;
    /* VAR */ int x64319 = 0;
    int x64320 = x64319;
    int* x64321 = &x64320;
    char* x64322 = strntoi_unchecked(x67, x64321);
    x67 = x64322;
    /* VAR */ int x64324 = 0;
    int x64325 = x64324;
    int* x64326 = &x64325;
    char* x64327 = strntoi_unchecked(x67, x64326);
    x67 = x64327;
    /* VAR */ double x64329 = 0.0;
    double x64330 = x64329;
    double* x64331 = &x64330;
    char* x64332 = strntod_unchecked(x67, x64331);
    x67 = x64332;
    /* VAR */ double x64334 = 0.0;
    double x64335 = x64334;
    double* x64336 = &x64335;
    char* x64337 = strntod_unchecked(x67, x64336);
    x67 = x64337;
    /* VAR */ double x64339 = 0.0;
    double x64340 = x64339;
    double* x64341 = &x64340;
    char* x64342 = strntod_unchecked(x67, x64341);
    x67 = x64342;
    /* VAR */ double x64344 = 0.0;
    double x64345 = x64344;
    double* x64346 = &x64345;
    char* x64347 = strntod_unchecked(x67, x64346);
    x67 = x64347;
    char x64349 = *x67;
    /* VAR */ char x64350 = x64349;
    x67 += 1;
    x67 += 1;
    char x64353 = x64350;
    char x64354 = *x67;
    /* VAR */ char x64355 = x64354;
    x67 += 1;
    x67 += 1;
    char x64358 = x64355;
    /* VAR */ int x64359 = 0;
    int x64360 = x64359;
    int* x64361 = &x64360;
    char* x64362 = strntoi_unchecked(x67, x64361);
    x67 = x64362;
    /* VAR */ int x64364 = 0;
    int x64365 = x64364;
    int* x64366 = &x64365;
    char* x64367 = strntoi_unchecked(x67, x64366);
    x67 = x64367;
    /* VAR */ int x64369 = 0;
    int x64370 = x64369;
    int* x64371 = &x64370;
    char* x64372 = strntoi_unchecked(x67, x64371);
    x67 = x64372;
    int x64374 = x64360*(10000);
    int x64375 = x64365*(100);
    int x64376 = x64374+(x64375);
    int x64377 = x64376+(x64370);
    /* VAR */ int x64378 = 0;
    int x64379 = x64378;
    int* x64380 = &x64379;
    char* x64381 = strntoi_unchecked(x67, x64380);
    x67 = x64381;
    /* VAR */ int x64383 = 0;
    int x64384 = x64383;
    int* x64385 = &x64384;
    char* x64386 = strntoi_unchecked(x67, x64385);
    x67 = x64386;
    /* VAR */ int x64388 = 0;
    int x64389 = x64388;
    int* x64390 = &x64389;
    char* x64391 = strntoi_unchecked(x67, x64390);
    x67 = x64391;
    int x64393 = x64379*(10000);
    int x64394 = x64384*(100);
    int x64395 = x64393+(x64394);
    int x64396 = x64395+(x64389);
    /* VAR */ int x64397 = 0;
    int x64398 = x64397;
    int* x64399 = &x64398;
    char* x64400 = strntoi_unchecked(x67, x64399);
    x67 = x64400;
    /* VAR */ int x64402 = 0;
    int x64403 = x64402;
    int* x64404 = &x64403;
    char* x64405 = strntoi_unchecked(x67, x64404);
    x67 = x64405;
    /* VAR */ int x64407 = 0;
    int x64408 = x64407;
    int* x64409 = &x64408;
    char* x64410 = strntoi_unchecked(x67, x64409);
    x67 = x64410;
    int x64412 = x64398*(10000);
    int x64413 = x64403*(100);
    int x64414 = x64412+(x64413);
    int x64415 = x64414+(x64408);
    char* x67550 = (char*)malloc(26 * sizeof(char));
    memset(x67550, 0, 26 * sizeof(char));
    /* VAR */ char* x64417 = x67;
    while(1) {
      
      char x64418 = *x67;
      int x64419 = x64418!=('|');
      /* VAR */ int ite97399 = 0;
      if(x64419) {
        char x110527 = *x67;
        int x110528 = x110527!=('\n');
        ite97399 = x110528;
      } else {
        
        ite97399 = 0;
      };
      int x94615 = ite97399;
      if (!(x94615)) break; 
      
      x67 += 1;
    };
    char* x64425 = x64417;
    int x64426 = x67 - x64425;
    char* x64427 = x64417;
    char* x64428 = strncpy(x67550, x64427, x64426);
    x67 += 1;
    char* x67568 = (char*)malloc(11 * sizeof(char));
    memset(x67568, 0, 11 * sizeof(char));
    /* VAR */ char* x64436 = x67;
    while(1) {
      
      char x64437 = *x67;
      int x64438 = x64437!=('|');
      /* VAR */ int ite97422 = 0;
      if(x64438) {
        char x110549 = *x67;
        int x110550 = x110549!=('\n');
        ite97422 = x110550;
      } else {
        
        ite97422 = 0;
      };
      int x94631 = ite97422;
      if (!(x94631)) break; 
      
      x67 += 1;
    };
    char* x64444 = x64436;
    int x64445 = x67 - x64444;
    char* x64446 = x64436;
    char* x64447 = strncpy(x67568, x64446, x64445);
    x67 += 1;
    char* x67586 = (char*)malloc(45 * sizeof(char));
    memset(x67586, 0, 45 * sizeof(char));
    /* VAR */ char* x64455 = x67;
    while(1) {
      
      char x64456 = *x67;
      int x64457 = x64456!=('|');
      /* VAR */ int ite97445 = 0;
      if(x64457) {
        char x110571 = *x67;
        int x110572 = x110571!=('\n');
        ite97445 = x110572;
      } else {
        
        ite97445 = 0;
      };
      int x94647 = ite97445;
      if (!(x94647)) break; 
      
      x67 += 1;
    };
    char* x64463 = x64455;
    int x64464 = x67 - x64463;
    char* x64465 = x64455;
    char* x64466 = strncpy(x67586, x64465, x64464);
    x67 += 1;
    struct LINEITEMRecord* x69298 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x69298, 0, 1 * sizeof(struct LINEITEMRecord));
    x69298->L_ORDERKEY = x64310; x69298->L_PARTKEY = x64315; x69298->L_SUPPKEY = x64320; x69298->L_LINENUMBER = x64325; x69298->L_QUANTITY = x64330; x69298->L_EXTENDEDPRICE = x64335; x69298->L_DISCOUNT = x64340; x69298->L_TAX = x64345; x69298->L_RETURNFLAG = x64353; x69298->L_LINESTATUS = x64358; x69298->L_SHIPDATE = x64377; x69298->L_COMMITDATE = x64396; x69298->L_RECEIPTDATE = x64415; x69298->L_SHIPINSTRUCT = x67550; x69298->L_SHIPMODE = x67568; x69298->L_COMMENT = x67586; x69298->next = NULL;
    int x111 = x68;
    int x79651 = x69298==(NULL);
    /* VAR */ int ite97468 = 0;
    if(x79651) {
      ite97468 = 1;
    } else {
      
      char* x110594 = x69298->L_SHIPINSTRUCT;
      int x110595 = x110594==(NULL);
      /* VAR */ int x110596 = 0;
      if(x110595) {
        x110596 = 1;
      } else {
        
        int x110599 = strcmp(x110594, "");
        int x110600 = !(x110599);
        x110596 = x110600;
      };
      int x110603 = x110596;
      ite97468 = x110603;
    };
    int x94663 = ite97468;
    if(x94663) {
      *(x67425 + x111) = (const struct LINEITEMRecord){0};
    } else {
      
      struct LINEITEMRecord x67608 = *x69298;
      *(x67425 + x111) = x67608;
      struct LINEITEMRecord* x67610 = &(x67425[x111]);
      x69298 = x67610;
    };
    int x113 = x68;
    int x114 = x113+(1);
    x68 = x114;
  };
  FILE* x64479 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x64480 = 0;
  int x64481 = x64480;
  int* x64482 = &x64481;
  int x64483 = fscanf(x64479, "%d", x64482);
  pclose(x64479);
  struct ORDERSRecord* x67622 = (struct ORDERSRecord*)malloc(x64481 * sizeof(struct ORDERSRecord));
  memset(x67622, 0, x64481 * sizeof(struct ORDERSRecord));
  int x64487 = O_RDONLY;
  int x64488 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x64487);
  /* VAR */ struct stat x64489 = x64135;
  struct stat x64490 = x64489;
  struct stat* x64491 = &x64490;
  int x64492 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x64491);
  size_t x64493 = x64491->st_size;
  int x64494 = PROT_READ;
  int x64495 = MAP_PRIVATE;
  char* x119 = mmap(NULL, x64493, x64494, x64495, x64488, 0);
  /* VAR */ int x120 = 0;
  while(1) {
    
    int x121 = x120;
    int x122 = x121<(x64481);
    /* VAR */ int ite97509 = 0;
    if(x122) {
      char x110639 = *x119;
      int x110640 = x110639!=('\0');
      ite97509 = x110640;
    } else {
      
      ite97509 = 0;
    };
    int x94695 = ite97509;
    if (!(x94695)) break; 
    
    /* VAR */ int x64503 = 0;
    int x64504 = x64503;
    int* x64505 = &x64504;
    char* x64506 = strntoi_unchecked(x119, x64505);
    x119 = x64506;
    /* VAR */ int x64508 = 0;
    int x64509 = x64508;
    int* x64510 = &x64509;
    char* x64511 = strntoi_unchecked(x119, x64510);
    x119 = x64511;
    char x64513 = *x119;
    /* VAR */ char x64514 = x64513;
    x119 += 1;
    x119 += 1;
    char x64517 = x64514;
    /* VAR */ double x64518 = 0.0;
    double x64519 = x64518;
    double* x64520 = &x64519;
    char* x64521 = strntod_unchecked(x119, x64520);
    x119 = x64521;
    /* VAR */ int x64523 = 0;
    int x64524 = x64523;
    int* x64525 = &x64524;
    char* x64526 = strntoi_unchecked(x119, x64525);
    x119 = x64526;
    /* VAR */ int x64528 = 0;
    int x64529 = x64528;
    int* x64530 = &x64529;
    char* x64531 = strntoi_unchecked(x119, x64530);
    x119 = x64531;
    /* VAR */ int x64533 = 0;
    int x64534 = x64533;
    int* x64535 = &x64534;
    char* x64536 = strntoi_unchecked(x119, x64535);
    x119 = x64536;
    int x64538 = x64524*(10000);
    int x64539 = x64529*(100);
    int x64540 = x64538+(x64539);
    int x64541 = x64540+(x64534);
    char* x67679 = (char*)malloc(16 * sizeof(char));
    memset(x67679, 0, 16 * sizeof(char));
    /* VAR */ char* x64543 = x119;
    while(1) {
      
      char x64544 = *x119;
      int x64545 = x64544!=('|');
      /* VAR */ int ite97562 = 0;
      if(x64545) {
        char x110691 = *x119;
        int x110692 = x110691!=('\n');
        ite97562 = x110692;
      } else {
        
        ite97562 = 0;
      };
      int x94741 = ite97562;
      if (!(x94741)) break; 
      
      x119 += 1;
    };
    char* x64551 = x64543;
    int x64552 = x119 - x64551;
    char* x64553 = x64543;
    char* x64554 = strncpy(x67679, x64553, x64552);
    x119 += 1;
    char* x67697 = (char*)malloc(16 * sizeof(char));
    memset(x67697, 0, 16 * sizeof(char));
    /* VAR */ char* x64562 = x119;
    while(1) {
      
      char x64563 = *x119;
      int x64564 = x64563!=('|');
      /* VAR */ int ite97585 = 0;
      if(x64564) {
        char x110713 = *x119;
        int x110714 = x110713!=('\n');
        ite97585 = x110714;
      } else {
        
        ite97585 = 0;
      };
      int x94757 = ite97585;
      if (!(x94757)) break; 
      
      x119 += 1;
    };
    char* x64570 = x64562;
    int x64571 = x119 - x64570;
    char* x64572 = x64562;
    char* x64573 = strncpy(x67697, x64572, x64571);
    x119 += 1;
    /* VAR */ int x64580 = 0;
    int x64581 = x64580;
    int* x64582 = &x64581;
    char* x64583 = strntoi_unchecked(x119, x64582);
    x119 = x64583;
    char* x67720 = (char*)malloc(80 * sizeof(char));
    memset(x67720, 0, 80 * sizeof(char));
    /* VAR */ char* x64586 = x119;
    while(1) {
      
      char x64587 = *x119;
      int x64588 = x64587!=('|');
      /* VAR */ int ite97613 = 0;
      if(x64588) {
        char x110740 = *x119;
        int x110741 = x110740!=('\n');
        ite97613 = x110741;
      } else {
        
        ite97613 = 0;
      };
      int x94778 = ite97613;
      if (!(x94778)) break; 
      
      x119 += 1;
    };
    char* x64594 = x64586;
    int x64595 = x119 - x64594;
    char* x64596 = x64586;
    char* x64597 = strncpy(x67720, x64596, x64595);
    x119 += 1;
    struct ORDERSRecord* x69434 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x69434, 0, 1 * sizeof(struct ORDERSRecord));
    x69434->O_ORDERKEY = x64504; x69434->O_CUSTKEY = x64509; x69434->O_ORDERSTATUS = x64517; x69434->O_TOTALPRICE = x64519; x69434->O_ORDERDATE = x64541; x69434->O_ORDERPRIORITY = x67679; x69434->O_CLERK = x67697; x69434->O_SHIPPRIORITY = x64581; x69434->O_COMMENT = x67720;
    int x155 = x120;
    int x79790 = x69434==(NULL);
    /* VAR */ int ite97636 = 0;
    if(x79790) {
      ite97636 = 1;
    } else {
      
      char* x110763 = x69434->O_ORDERPRIORITY;
      int x110764 = x110763==(NULL);
      /* VAR */ int x110765 = 0;
      if(x110764) {
        x110765 = 1;
      } else {
        
        int x110768 = strcmp(x110763, "");
        int x110769 = !(x110768);
        x110765 = x110769;
      };
      int x110772 = x110765;
      ite97636 = x110772;
    };
    int x94794 = ite97636;
    if(x94794) {
      *(x67622 + x155) = (const struct ORDERSRecord){0};
    } else {
      
      struct ORDERSRecord x67742 = *x69434;
      *(x67622 + x155) = x67742;
      struct ORDERSRecord* x67744 = &(x67622[x155]);
      x69434 = x67744;
    };
    int x157 = x120;
    int x158 = x157+(1);
    x120 = x158;
  };
  FILE* x64610 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x64611 = 0;
  int x64612 = x64611;
  int* x64613 = &x64612;
  int x64614 = fscanf(x64610, "%d", x64613);
  pclose(x64610);
  struct CUSTOMERRecord* x67756 = (struct CUSTOMERRecord*)malloc(x64612 * sizeof(struct CUSTOMERRecord));
  memset(x67756, 0, x64612 * sizeof(struct CUSTOMERRecord));
  int x64618 = O_RDONLY;
  int x64619 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x64618);
  /* VAR */ struct stat x64620 = x64135;
  struct stat x64621 = x64620;
  struct stat* x64622 = &x64621;
  int x64623 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x64622);
  size_t x64624 = x64622->st_size;
  int x64625 = PROT_READ;
  int x64626 = MAP_PRIVATE;
  char* x163 = mmap(NULL, x64624, x64625, x64626, x64619, 0);
  /* VAR */ int x164 = 0;
  while(1) {
    
    int x165 = x164;
    int x166 = x165<(x64612);
    /* VAR */ int ite97677 = 0;
    if(x166) {
      char x110808 = *x163;
      int x110809 = x110808!=('\0');
      ite97677 = x110809;
    } else {
      
      ite97677 = 0;
    };
    int x94826 = ite97677;
    if (!(x94826)) break; 
    
    /* VAR */ int x64634 = 0;
    int x64635 = x64634;
    int* x64636 = &x64635;
    char* x64637 = strntoi_unchecked(x163, x64636);
    x163 = x64637;
    char* x67779 = (char*)malloc(26 * sizeof(char));
    memset(x67779, 0, 26 * sizeof(char));
    /* VAR */ char* x64640 = x163;
    while(1) {
      
      char x64641 = *x163;
      int x64642 = x64641!=('|');
      /* VAR */ int ite97696 = 0;
      if(x64642) {
        char x110826 = *x163;
        int x110827 = x110826!=('\n');
        ite97696 = x110827;
      } else {
        
        ite97696 = 0;
      };
      int x94838 = ite97696;
      if (!(x94838)) break; 
      
      x163 += 1;
    };
    char* x64648 = x64640;
    int x64649 = x163 - x64648;
    char* x64650 = x64640;
    char* x64651 = strncpy(x67779, x64650, x64649);
    x163 += 1;
    char* x67797 = (char*)malloc(41 * sizeof(char));
    memset(x67797, 0, 41 * sizeof(char));
    /* VAR */ char* x64659 = x163;
    while(1) {
      
      char x64660 = *x163;
      int x64661 = x64660!=('|');
      /* VAR */ int ite97719 = 0;
      if(x64661) {
        char x110848 = *x163;
        int x110849 = x110848!=('\n');
        ite97719 = x110849;
      } else {
        
        ite97719 = 0;
      };
      int x94854 = ite97719;
      if (!(x94854)) break; 
      
      x163 += 1;
    };
    char* x64667 = x64659;
    int x64668 = x163 - x64667;
    char* x64669 = x64659;
    char* x64670 = strncpy(x67797, x64669, x64668);
    x163 += 1;
    /* VAR */ int x64677 = 0;
    int x64678 = x64677;
    int* x64679 = &x64678;
    char* x64680 = strntoi_unchecked(x163, x64679);
    x163 = x64680;
    char* x67820 = (char*)malloc(16 * sizeof(char));
    memset(x67820, 0, 16 * sizeof(char));
    /* VAR */ char* x64683 = x163;
    while(1) {
      
      char x64684 = *x163;
      int x64685 = x64684!=('|');
      /* VAR */ int ite97747 = 0;
      if(x64685) {
        char x110875 = *x163;
        int x110876 = x110875!=('\n');
        ite97747 = x110876;
      } else {
        
        ite97747 = 0;
      };
      int x94875 = ite97747;
      if (!(x94875)) break; 
      
      x163 += 1;
    };
    char* x64691 = x64683;
    int x64692 = x163 - x64691;
    char* x64693 = x64683;
    char* x64694 = strncpy(x67820, x64693, x64692);
    x163 += 1;
    /* VAR */ double x64701 = 0.0;
    double x64702 = x64701;
    double* x64703 = &x64702;
    char* x64704 = strntod_unchecked(x163, x64703);
    x163 = x64704;
    char* x67843 = (char*)malloc(11 * sizeof(char));
    memset(x67843, 0, 11 * sizeof(char));
    /* VAR */ char* x64707 = x163;
    while(1) {
      
      char x64708 = *x163;
      int x64709 = x64708!=('|');
      /* VAR */ int ite97775 = 0;
      if(x64709) {
        char x110902 = *x163;
        int x110903 = x110902!=('\n');
        ite97775 = x110903;
      } else {
        
        ite97775 = 0;
      };
      int x94896 = ite97775;
      if (!(x94896)) break; 
      
      x163 += 1;
    };
    char* x64715 = x64707;
    int x64716 = x163 - x64715;
    char* x64717 = x64707;
    char* x64718 = strncpy(x67843, x64717, x64716);
    x163 += 1;
    char* x67861 = (char*)malloc(118 * sizeof(char));
    memset(x67861, 0, 118 * sizeof(char));
    /* VAR */ char* x64726 = x163;
    while(1) {
      
      char x64727 = *x163;
      int x64728 = x64727!=('|');
      /* VAR */ int ite97798 = 0;
      if(x64728) {
        char x110924 = *x163;
        int x110925 = x110924!=('\n');
        ite97798 = x110925;
      } else {
        
        ite97798 = 0;
      };
      int x94912 = ite97798;
      if (!(x94912)) break; 
      
      x163 += 1;
    };
    char* x64734 = x64726;
    int x64735 = x163 - x64734;
    char* x64736 = x64726;
    char* x64737 = strncpy(x67861, x64736, x64735);
    x163 += 1;
    struct CUSTOMERRecord* x69577 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x69577, 0, 1 * sizeof(struct CUSTOMERRecord));
    x69577->C_CUSTKEY = x64635; x69577->C_NAME = x67779; x69577->C_ADDRESS = x67797; x69577->C_NATIONKEY = x64678; x69577->C_PHONE = x67820; x69577->C_ACCTBAL = x64702; x69577->C_MKTSEGMENT = x67843; x69577->C_COMMENT = x67861;
    int x213 = x164;
    int x79936 = x69577==(NULL);
    /* VAR */ int ite97821 = 0;
    if(x79936) {
      ite97821 = 1;
    } else {
      
      char* x110947 = x69577->C_NAME;
      int x110948 = x110947==(NULL);
      /* VAR */ int x110949 = 0;
      if(x110948) {
        x110949 = 1;
      } else {
        
        int x110952 = strcmp(x110947, "");
        int x110953 = !(x110952);
        x110949 = x110953;
      };
      int x110956 = x110949;
      ite97821 = x110956;
    };
    int x94928 = ite97821;
    if(x94928) {
      *(x67756 + x213) = (const struct CUSTOMERRecord){0};
    } else {
      
      struct CUSTOMERRecord x67883 = *x69577;
      *(x67756 + x213) = x67883;
      struct CUSTOMERRecord* x67885 = &(x67756[x213]);
      x69577 = x67885;
    };
    int x215 = x164;
    int x216 = x215+(1);
    x164 = x216;
  };
  FILE* x64750 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x64751 = 0;
  int x64752 = x64751;
  int* x64753 = &x64752;
  int x64754 = fscanf(x64750, "%d", x64753);
  pclose(x64750);
  struct NATIONRecord* x67897 = (struct NATIONRecord*)malloc(x64752 * sizeof(struct NATIONRecord));
  memset(x67897, 0, x64752 * sizeof(struct NATIONRecord));
  int x64758 = O_RDONLY;
  int x64759 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x64758);
  /* VAR */ struct stat x64760 = x64135;
  struct stat x64761 = x64760;
  struct stat* x64762 = &x64761;
  int x64763 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x64762);
  size_t x64764 = x64762->st_size;
  int x64765 = PROT_READ;
  int x64766 = MAP_PRIVATE;
  char* x221 = mmap(NULL, x64764, x64765, x64766, x64759, 0);
  /* VAR */ int x222 = 0;
  while(1) {
    
    int x223 = x222;
    int x224 = x223<(x64752);
    /* VAR */ int ite97862 = 0;
    if(x224) {
      char x110992 = *x221;
      int x110993 = x110992!=('\0');
      ite97862 = x110993;
    } else {
      
      ite97862 = 0;
    };
    int x94960 = ite97862;
    if (!(x94960)) break; 
    
    /* VAR */ int x64774 = 0;
    int x64775 = x64774;
    int* x64776 = &x64775;
    char* x64777 = strntoi_unchecked(x221, x64776);
    x221 = x64777;
    char* x67920 = (char*)malloc(26 * sizeof(char));
    memset(x67920, 0, 26 * sizeof(char));
    /* VAR */ char* x64780 = x221;
    while(1) {
      
      char x64781 = *x221;
      int x64782 = x64781!=('|');
      /* VAR */ int ite97881 = 0;
      if(x64782) {
        char x111010 = *x221;
        int x111011 = x111010!=('\n');
        ite97881 = x111011;
      } else {
        
        ite97881 = 0;
      };
      int x94972 = ite97881;
      if (!(x94972)) break; 
      
      x221 += 1;
    };
    char* x64788 = x64780;
    int x64789 = x221 - x64788;
    char* x64790 = x64780;
    char* x64791 = strncpy(x67920, x64790, x64789);
    x221 += 1;
    /* VAR */ int x64798 = 0;
    int x64799 = x64798;
    int* x64800 = &x64799;
    char* x64801 = strntoi_unchecked(x221, x64800);
    x221 = x64801;
    char* x67943 = (char*)malloc(153 * sizeof(char));
    memset(x67943, 0, 153 * sizeof(char));
    /* VAR */ char* x64804 = x221;
    while(1) {
      
      char x64805 = *x221;
      int x64806 = x64805!=('|');
      /* VAR */ int ite97909 = 0;
      if(x64806) {
        char x111037 = *x221;
        int x111038 = x111037!=('\n');
        ite97909 = x111038;
      } else {
        
        ite97909 = 0;
      };
      int x94993 = ite97909;
      if (!(x94993)) break; 
      
      x221 += 1;
    };
    char* x64812 = x64804;
    int x64813 = x221 - x64812;
    char* x64814 = x64804;
    char* x64815 = strncpy(x67943, x64814, x64813);
    x221 += 1;
    struct NATIONRecord* x69661 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x69661, 0, 1 * sizeof(struct NATIONRecord));
    x69661->N_NATIONKEY = x64775; x69661->N_NAME = x67920; x69661->N_REGIONKEY = x64799; x69661->N_COMMENT = x67943; x69661->next = NULL;
    int x246 = x222;
    int x80023 = x69661==(NULL);
    /* VAR */ int ite97932 = 0;
    if(x80023) {
      ite97932 = 1;
    } else {
      
      char* x111060 = x69661->N_NAME;
      int x111061 = x111060==(NULL);
      /* VAR */ int x111062 = 0;
      if(x111061) {
        x111062 = 1;
      } else {
        
        int x111065 = strcmp(x111060, "");
        int x111066 = !(x111065);
        x111062 = x111066;
      };
      int x111069 = x111062;
      ite97932 = x111069;
    };
    int x95009 = ite97932;
    if(x95009) {
      *(x67897 + x246) = (const struct NATIONRecord){0};
    } else {
      
      struct NATIONRecord x67965 = *x69661;
      *(x67897 + x246) = x67965;
      struct NATIONRecord* x67967 = &(x67897[x246]);
      x69661 = x67967;
    };
    int x248 = x222;
    int x249 = x248+(1);
    x222 = x249;
  };
  FILE* x64828 = popen("wc -l /mnt/ramdisk/tpch/sf8/region.tbl", "r");
  /* VAR */ int x64829 = 0;
  int x64830 = x64829;
  int* x64831 = &x64830;
  int x64832 = fscanf(x64828, "%d", x64831);
  pclose(x64828);
  struct REGIONRecord* x67979 = (struct REGIONRecord*)malloc(x64830 * sizeof(struct REGIONRecord));
  memset(x67979, 0, x64830 * sizeof(struct REGIONRecord));
  int x64836 = O_RDONLY;
  int x64837 = open("/mnt/ramdisk/tpch/sf8/region.tbl", x64836);
  /* VAR */ struct stat x64838 = x64135;
  struct stat x64839 = x64838;
  struct stat* x64840 = &x64839;
  int x64841 = stat("/mnt/ramdisk/tpch/sf8/region.tbl", x64840);
  size_t x64842 = x64840->st_size;
  int x64843 = PROT_READ;
  int x64844 = MAP_PRIVATE;
  char* x254 = mmap(NULL, x64842, x64843, x64844, x64837, 0);
  /* VAR */ int x255 = 0;
  while(1) {
    
    int x256 = x255;
    int x257 = x256<(x64830);
    /* VAR */ int ite97973 = 0;
    if(x257) {
      char x111105 = *x254;
      int x111106 = x111105!=('\0');
      ite97973 = x111106;
    } else {
      
      ite97973 = 0;
    };
    int x95041 = ite97973;
    if (!(x95041)) break; 
    
    /* VAR */ int x64852 = 0;
    int x64853 = x64852;
    int* x64854 = &x64853;
    char* x64855 = strntoi_unchecked(x254, x64854);
    x254 = x64855;
    char* x68002 = (char*)malloc(26 * sizeof(char));
    memset(x68002, 0, 26 * sizeof(char));
    /* VAR */ char* x64858 = x254;
    while(1) {
      
      char x64859 = *x254;
      int x64860 = x64859!=('|');
      /* VAR */ int ite97992 = 0;
      if(x64860) {
        char x111123 = *x254;
        int x111124 = x111123!=('\n');
        ite97992 = x111124;
      } else {
        
        ite97992 = 0;
      };
      int x95053 = ite97992;
      if (!(x95053)) break; 
      
      x254 += 1;
    };
    char* x64866 = x64858;
    int x64867 = x254 - x64866;
    char* x64868 = x64858;
    char* x64869 = strncpy(x68002, x64868, x64867);
    x254 += 1;
    char* x68020 = (char*)malloc(153 * sizeof(char));
    memset(x68020, 0, 153 * sizeof(char));
    /* VAR */ char* x64877 = x254;
    while(1) {
      
      char x64878 = *x254;
      int x64879 = x64878!=('|');
      /* VAR */ int ite98015 = 0;
      if(x64879) {
        char x111145 = *x254;
        int x111146 = x111145!=('\n');
        ite98015 = x111146;
      } else {
        
        ite98015 = 0;
      };
      int x95069 = ite98015;
      if (!(x95069)) break; 
      
      x254 += 1;
    };
    char* x64885 = x64877;
    int x64886 = x254 - x64885;
    char* x64887 = x64877;
    char* x64888 = strncpy(x68020, x64887, x64886);
    x254 += 1;
    struct REGIONRecord* x69740 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x69740, 0, 1 * sizeof(struct REGIONRecord));
    x69740->R_REGIONKEY = x64853; x69740->R_NAME = x68002; x69740->R_COMMENT = x68020; x69740->next = NULL;
    int x278 = x255;
    int x80105 = x69740==(NULL);
    /* VAR */ int ite98038 = 0;
    if(x80105) {
      ite98038 = 1;
    } else {
      
      char* x111168 = x69740->R_NAME;
      int x111169 = x111168==(NULL);
      /* VAR */ int x111170 = 0;
      if(x111169) {
        x111170 = 1;
      } else {
        
        int x111173 = strcmp(x111168, "");
        int x111174 = !(x111173);
        x111170 = x111174;
      };
      int x111177 = x111170;
      ite98038 = x111177;
    };
    int x95085 = ite98038;
    if(x95085) {
      *(x67979 + x278) = (const struct REGIONRecord){0};
    } else {
      
      struct REGIONRecord x68042 = *x69740;
      *(x67979 + x278) = x68042;
      struct REGIONRecord* x68044 = &(x67979[x278]);
      x69740 = x68044;
    };
    int x280 = x255;
    int x281 = x280+(1);
    x255 = x281;
  };
  FILE* x64901 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x64902 = 0;
  int x64903 = x64902;
  int* x64904 = &x64903;
  int x64905 = fscanf(x64901, "%d", x64904);
  pclose(x64901);
  struct SUPPLIERRecord* x68056 = (struct SUPPLIERRecord*)malloc(x64903 * sizeof(struct SUPPLIERRecord));
  memset(x68056, 0, x64903 * sizeof(struct SUPPLIERRecord));
  int x64909 = O_RDONLY;
  int x64910 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x64909);
  /* VAR */ struct stat x64911 = x64135;
  struct stat x64912 = x64911;
  struct stat* x64913 = &x64912;
  int x64914 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x64913);
  size_t x64915 = x64913->st_size;
  int x64916 = PROT_READ;
  int x64917 = MAP_PRIVATE;
  char* x286 = mmap(NULL, x64915, x64916, x64917, x64910, 0);
  /* VAR */ int x287 = 0;
  while(1) {
    
    int x288 = x287;
    int x289 = x288<(x64903);
    /* VAR */ int ite98079 = 0;
    if(x289) {
      char x111213 = *x286;
      int x111214 = x111213!=('\0');
      ite98079 = x111214;
    } else {
      
      ite98079 = 0;
    };
    int x95117 = ite98079;
    if (!(x95117)) break; 
    
    /* VAR */ int x64925 = 0;
    int x64926 = x64925;
    int* x64927 = &x64926;
    char* x64928 = strntoi_unchecked(x286, x64927);
    x286 = x64928;
    char* x68079 = (char*)malloc(26 * sizeof(char));
    memset(x68079, 0, 26 * sizeof(char));
    /* VAR */ char* x64931 = x286;
    while(1) {
      
      char x64932 = *x286;
      int x64933 = x64932!=('|');
      /* VAR */ int ite98098 = 0;
      if(x64933) {
        char x111231 = *x286;
        int x111232 = x111231!=('\n');
        ite98098 = x111232;
      } else {
        
        ite98098 = 0;
      };
      int x95129 = ite98098;
      if (!(x95129)) break; 
      
      x286 += 1;
    };
    char* x64939 = x64931;
    int x64940 = x286 - x64939;
    char* x64941 = x64931;
    char* x64942 = strncpy(x68079, x64941, x64940);
    x286 += 1;
    char* x68097 = (char*)malloc(41 * sizeof(char));
    memset(x68097, 0, 41 * sizeof(char));
    /* VAR */ char* x64950 = x286;
    while(1) {
      
      char x64951 = *x286;
      int x64952 = x64951!=('|');
      /* VAR */ int ite98121 = 0;
      if(x64952) {
        char x111253 = *x286;
        int x111254 = x111253!=('\n');
        ite98121 = x111254;
      } else {
        
        ite98121 = 0;
      };
      int x95145 = ite98121;
      if (!(x95145)) break; 
      
      x286 += 1;
    };
    char* x64958 = x64950;
    int x64959 = x286 - x64958;
    char* x64960 = x64950;
    char* x64961 = strncpy(x68097, x64960, x64959);
    x286 += 1;
    /* VAR */ int x64968 = 0;
    int x64969 = x64968;
    int* x64970 = &x64969;
    char* x64971 = strntoi_unchecked(x286, x64970);
    x286 = x64971;
    char* x68120 = (char*)malloc(16 * sizeof(char));
    memset(x68120, 0, 16 * sizeof(char));
    /* VAR */ char* x64974 = x286;
    while(1) {
      
      char x64975 = *x286;
      int x64976 = x64975!=('|');
      /* VAR */ int ite98149 = 0;
      if(x64976) {
        char x111280 = *x286;
        int x111281 = x111280!=('\n');
        ite98149 = x111281;
      } else {
        
        ite98149 = 0;
      };
      int x95166 = ite98149;
      if (!(x95166)) break; 
      
      x286 += 1;
    };
    char* x64982 = x64974;
    int x64983 = x286 - x64982;
    char* x64984 = x64974;
    char* x64985 = strncpy(x68120, x64984, x64983);
    x286 += 1;
    /* VAR */ double x64992 = 0.0;
    double x64993 = x64992;
    double* x64994 = &x64993;
    char* x64995 = strntod_unchecked(x286, x64994);
    x286 = x64995;
    char* x68143 = (char*)malloc(102 * sizeof(char));
    memset(x68143, 0, 102 * sizeof(char));
    /* VAR */ char* x64998 = x286;
    while(1) {
      
      char x64999 = *x286;
      int x65000 = x64999!=('|');
      /* VAR */ int ite98177 = 0;
      if(x65000) {
        char x111307 = *x286;
        int x111308 = x111307!=('\n');
        ite98177 = x111308;
      } else {
        
        ite98177 = 0;
      };
      int x95187 = ite98177;
      if (!(x95187)) break; 
      
      x286 += 1;
    };
    char* x65006 = x64998;
    int x65007 = x286 - x65006;
    char* x65008 = x64998;
    char* x65009 = strncpy(x68143, x65008, x65007);
    x286 += 1;
    struct SUPPLIERRecord* x69865 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x69865, 0, 1 * sizeof(struct SUPPLIERRecord));
    x69865->S_SUPPKEY = x64926; x69865->S_NAME = x68079; x69865->S_ADDRESS = x68097; x69865->S_NATIONKEY = x64969; x69865->S_PHONE = x68120; x69865->S_ACCTBAL = x64993; x69865->S_COMMENT = x68143; x69865->next = NULL;
    int x328 = x287;
    int x80233 = x69865==(NULL);
    /* VAR */ int ite98200 = 0;
    if(x80233) {
      ite98200 = 1;
    } else {
      
      char* x111330 = x69865->S_NAME;
      int x111331 = x111330==(NULL);
      /* VAR */ int x111332 = 0;
      if(x111331) {
        x111332 = 1;
      } else {
        
        int x111335 = strcmp(x111330, "");
        int x111336 = !(x111335);
        x111332 = x111336;
      };
      int x111339 = x111332;
      ite98200 = x111339;
    };
    int x95203 = ite98200;
    if(x95203) {
      *(x68056 + x328) = (const struct SUPPLIERRecord){0};
    } else {
      
      struct SUPPLIERRecord x68165 = *x69865;
      *(x68056 + x328) = x68165;
      struct SUPPLIERRecord* x68167 = &(x68056[x328]);
      x69865 = x68167;
    };
    int x330 = x287;
    int x331 = x330+(1);
    x287 = x331;
  };
  int x335 = 0;
  for(; x335 < 1 ; x335 += 1) {
    
    /* VAR */ int x112932 = 0;
    struct AGGRecord_Int* x112933 = (struct AGGRecord_Int*)malloc(1048576 * sizeof(struct AGGRecord_Int));
    memset(x112933, 0, 1048576 * sizeof(struct AGGRecord_Int));
    int x90177 = 0;
    for(; x90177 < 1048576 ; x90177 += 1) {
      
      *(x112933 + x90177) = (const struct AGGRecord_Int){0};
    };
    struct NATIONRecord* x112939 = (struct NATIONRecord*)malloc(1048576 * sizeof(struct NATIONRecord));
    memset(x112939, 0, 1048576 * sizeof(struct NATIONRecord));
    struct SUPPLIERRecord* x112940 = (struct SUPPLIERRecord*)malloc(1048576 * sizeof(struct SUPPLIERRecord));
    memset(x112940, 0, 1048576 * sizeof(struct SUPPLIERRecord));
    struct REGIONRecord* x112941 = (struct REGIONRecord*)malloc(1048576 * sizeof(struct REGIONRecord));
    memset(x112941, 0, 1048576 * sizeof(struct REGIONRecord));
    struct NATIONRecord* x112942 = (struct NATIONRecord*)malloc(1048576 * sizeof(struct NATIONRecord));
    memset(x112942, 0, 1048576 * sizeof(struct NATIONRecord));
    struct LINEITEMRecord_PARTRecord_ORDERSRecord* x112943 = (struct LINEITEMRecord_PARTRecord_ORDERSRecord*)malloc(1048576 * sizeof(struct LINEITEMRecord_PARTRecord_ORDERSRecord));
    memset(x112943, 0, 1048576 * sizeof(struct LINEITEMRecord_PARTRecord_ORDERSRecord));
    struct LINEITEMRecord_PARTRecord* x112944 = (struct LINEITEMRecord_PARTRecord*)malloc(1048576 * sizeof(struct LINEITEMRecord_PARTRecord));
    memset(x112944, 0, 1048576 * sizeof(struct LINEITEMRecord_PARTRecord));
    struct LINEITEMRecord* x112945 = (struct LINEITEMRecord*)malloc(1048576 * sizeof(struct LINEITEMRecord));
    memset(x112945, 0, 1048576 * sizeof(struct LINEITEMRecord));
    /* VAR */ int x112946 = 0;
    struct LINEITEMRecord_PARTRecord* x112947 = (struct LINEITEMRecord_PARTRecord*)malloc(48000000 * sizeof(struct LINEITEMRecord_PARTRecord));
    memset(x112947, 0, 48000000 * sizeof(struct LINEITEMRecord_PARTRecord));
    /* VAR */ int x112948 = 0;
    while(1) {
      
      int x61915 = x112948;
      int x61916 = x61915<(48000000);
      if (!(x61916)) break; 
      
      int x61917 = x112948;
      struct LINEITEMRecord_PARTRecord* x69903 = (struct LINEITEMRecord_PARTRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord));
      memset(x69903, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord));
      x69903->L_ORDERKEY = 0; x69903->L_PARTKEY = 0; x69903->L_SUPPKEY = 0; x69903->L_LINENUMBER = 0; x69903->L_QUANTITY = 0.0; x69903->L_EXTENDEDPRICE = 0.0; x69903->L_DISCOUNT = 0.0; x69903->L_TAX = 0.0; x69903->L_RETURNFLAG = '\0'; x69903->L_LINESTATUS = '\0'; x69903->L_SHIPDATE = 0; x69903->L_COMMITDATE = 0; x69903->L_RECEIPTDATE = 0; x69903->L_SHIPINSTRUCT = ""; x69903->L_SHIPMODE = ""; x69903->L_COMMENT = ""; x69903->P_PARTKEY = 0; x69903->P_NAME = ""; x69903->P_MFGR = ""; x69903->P_BRAND = ""; x69903->P_TYPE = ""; x69903->P_SIZE = 0; x69903->P_CONTAINER = ""; x69903->P_RETAILPRICE = 0.0; x69903->P_COMMENT = ""; x69903->next = NULL;
      int x80273 = x69903==(NULL);
      /* VAR */ int ite99637 = 0;
      if(x80273) {
        ite99637 = 1;
      } else {
        
        char* x112960 = x69903->L_SHIPINSTRUCT;
        int x112961 = x112960==(NULL);
        /* VAR */ int x112962 = 0;
        if(x112961) {
          x112962 = 1;
        } else {
          
          int x112965 = strcmp(x112960, "");
          int x112966 = !(x112965);
          x112962 = x112966;
        };
        int x112969 = x112962;
        ite99637 = x112969;
      };
      int x96158 = ite99637;
      if(x96158) {
        *(x112947 + x61917) = (const struct LINEITEMRecord_PARTRecord){0};
      } else {
        
        struct LINEITEMRecord_PARTRecord x68200 = *x69903;
        *(x112947 + x61917) = x68200;
        struct LINEITEMRecord_PARTRecord* x68202 = &(x112947[x61917]);
        x69903 = x68202;
      };
      int x61920 = x112948;
      int x61921 = x61920+(1);
      x112948 = x61921;
    };
    /* VAR */ int x112982 = 0;
    struct LINEITEMRecord_PARTRecord_ORDERSRecord* x112983 = (struct LINEITEMRecord_PARTRecord_ORDERSRecord*)malloc(48000000 * sizeof(struct LINEITEMRecord_PARTRecord_ORDERSRecord));
    memset(x112983, 0, 48000000 * sizeof(struct LINEITEMRecord_PARTRecord_ORDERSRecord));
    /* VAR */ int x112984 = 0;
    while(1) {
      
      int x61927 = x112984;
      int x61928 = x61927<(48000000);
      if (!(x61928)) break; 
      
      int x61929 = x112984;
      struct LINEITEMRecord_PARTRecord_ORDERSRecord* x69923 = (struct LINEITEMRecord_PARTRecord_ORDERSRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord_ORDERSRecord));
      memset(x69923, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord_ORDERSRecord));
      x69923->L_ORDERKEY = 0; x69923->L_PARTKEY = 0; x69923->L_SUPPKEY = 0; x69923->L_LINENUMBER = 0; x69923->L_QUANTITY = 0.0; x69923->L_EXTENDEDPRICE = 0.0; x69923->L_DISCOUNT = 0.0; x69923->L_TAX = 0.0; x69923->L_RETURNFLAG = '\0'; x69923->L_LINESTATUS = '\0'; x69923->L_SHIPDATE = 0; x69923->L_COMMITDATE = 0; x69923->L_RECEIPTDATE = 0; x69923->L_SHIPINSTRUCT = ""; x69923->L_SHIPMODE = ""; x69923->L_COMMENT = ""; x69923->P_PARTKEY = 0; x69923->P_NAME = ""; x69923->P_MFGR = ""; x69923->P_BRAND = ""; x69923->P_TYPE = ""; x69923->P_SIZE = 0; x69923->P_CONTAINER = ""; x69923->P_RETAILPRICE = 0.0; x69923->P_COMMENT = ""; x69923->O_ORDERKEY = 0; x69923->O_CUSTKEY = 0; x69923->O_ORDERSTATUS = '\0'; x69923->O_TOTALPRICE = 0.0; x69923->O_ORDERDATE = 0; x69923->O_ORDERPRIORITY = ""; x69923->O_CLERK = ""; x69923->O_SHIPPRIORITY = 0; x69923->O_COMMENT = ""; x69923->next = NULL;
      int x80296 = x69923==(NULL);
      /* VAR */ int ite99668 = 0;
      if(x80296) {
        ite99668 = 1;
      } else {
        
        char* x112996 = x69923->L_SHIPINSTRUCT;
        int x112997 = x112996==(NULL);
        /* VAR */ int x112998 = 0;
        if(x112997) {
          x112998 = 1;
        } else {
          
          int x113001 = strcmp(x112996, "");
          int x113002 = !(x113001);
          x112998 = x113002;
        };
        int x113005 = x112998;
        ite99668 = x113005;
      };
      int x96180 = ite99668;
      if(x96180) {
        *(x112983 + x61929) = (const struct LINEITEMRecord_PARTRecord_ORDERSRecord){0};
      } else {
        
        struct LINEITEMRecord_PARTRecord_ORDERSRecord x68218 = *x69923;
        *(x112983 + x61929) = x68218;
        struct LINEITEMRecord_PARTRecord_ORDERSRecord* x68220 = &(x112983[x61929]);
        x69923 = x68220;
      };
      int x61932 = x112984;
      int x61933 = x61932+(1);
      x112984 = x61933;
    };
    /* VAR */ int x113018 = 0;
    double** x113019 = (double**)malloc(7 * sizeof(double*));
    memset(x113019, 0, 7 * sizeof(double*));
    /* VAR */ int x113020 = 0;
    while(1) {
      
      int x61939 = x113020;
      int x61940 = x61939<(7);
      if (!(x61940)) break; 
      
      int x61941 = x113020;
      double* x68233 = (double*)malloc(3 * sizeof(double));
      memset(x68233, 0, 3 * sizeof(double));
      *(x113019 + x61941) = x68233;
      int x61944 = x113020;
      int x61945 = x61944+(1);
      x113020 = x61945;
    };
    /* VAR */ int x113030 = 0;
    struct AGGRecord_Int* x113031 = (struct AGGRecord_Int*)malloc(7 * sizeof(struct AGGRecord_Int));
    memset(x113031, 0, 7 * sizeof(struct AGGRecord_Int));
    /* VAR */ int x113032 = 0;
    while(1) {
      
      int x61951 = x113032;
      int x61952 = x61951<(7);
      if (!(x61952)) break; 
      
      int x61953 = x113032;
      double* x61954 = x113019[x61953];
      struct AGGRecord_Int* x69956 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
      memset(x69956, 0, 1 * sizeof(struct AGGRecord_Int));
      x69956->key = 0; x69956->aggs = x61954; x69956->next = NULL;
      int x80332 = x69956==(NULL);
      /* VAR */ int ite99712 = 0;
      if(x80332) {
        ite99712 = 1;
      } else {
        
        double* x113045 = x69956->aggs;
        int x113046 = x113045==(NULL);
        ite99712 = x113046;
      };
      int x96215 = ite99712;
      if(x96215) {
        *(x113031 + x61953) = (const struct AGGRecord_Int){0};
      } else {
        
        struct AGGRecord_Int x68249 = *x69956;
        *(x113031 + x61953) = x68249;
        struct AGGRecord_Int* x68251 = &(x113031[x61953]);
        x69956 = x68251;
      };
      int x61957 = x113032;
      int x61958 = x61957+(1);
      x113032 = x61958;
    };
    /* VAR */ struct timeval x113059 = x62555;
    struct timeval x113060 = x113059;
    /* VAR */ struct timeval x113061 = x62555;
    struct timeval x113062 = x113061;
    /* VAR */ struct timeval x113063 = x62555;
    struct timeval x113064 = x113063;
    struct timeval* x113065 = &x113062;
    gettimeofday(x113065, NULL);
    /* VAR */ int x113067 = 0;
    /* VAR */ int x113068 = 0;
    /* VAR */ int x113069 = 0;
    /* VAR */ int x113070 = 0;
    /* VAR */ int x113071 = 0;
    /* VAR */ int x113072 = 0;
    /* VAR */ int x113073 = 0;
    /* VAR */ int x113074 = 0;
    int* x113113 = &(x113094);
    GTree* x113114 = g_tree_new(x113113);
    /* VAR */ int x113115 = 0;
    /* VAR */ int x113116 = 0;
    while(1) {
      
      int x113118 = x113074;
      int x113119 = x113118<(x64752);
      if (!(x113119)) break; 
      
      int x16013 = x113074;
      struct NATIONRecord* x514 = &(x67897[x16013]);
      int x516 = x514->N_NATIONKEY;
      int x21727 = x516%(1048576);
      struct NATIONRecord* x25782 = &(x112939[x21727]);
      /* VAR */ struct NATIONRecord* list25783 = x25782;
      struct NATIONRecord* x25784 = list25783;
      int x80394 = x25784==(NULL);
      /* VAR */ int ite99800 = 0;
      if(x80394) {
        ite99800 = 1;
      } else {
        
        char* x113131 = x25784->N_NAME;
        int x113132 = x113131==(NULL);
        /* VAR */ int x113133 = 0;
        if(x113132) {
          x113133 = 1;
        } else {
          
          int x113136 = strcmp(x113131, "");
          int x113137 = !(x113136);
          x113133 = x113137;
        };
        int x113140 = x113133;
        ite99800 = x113140;
      };
      int x96294 = ite99800;
      if(x96294) {
        list25783 = NULL;
        struct NATIONRecord* x25791 = list25783;
        int x80401 = x25791==(NULL);
        /* VAR */ int ite99815 = 0;
        if(x80401) {
          ite99815 = 1;
        } else {
          
          char* x113151 = x25791->N_NAME;
          int x113152 = x113151==(NULL);
          /* VAR */ int x113153 = 0;
          if(x113152) {
            x113153 = 1;
          } else {
            
            int x113156 = strcmp(x113151, "");
            int x113157 = !(x113156);
            x113153 = x113157;
          };
          int x113160 = x113153;
          ite99815 = x113160;
        };
        int x96300 = ite99815;
        if(x96300) {
          *(x112939 + x21727) = (const struct NATIONRecord){0};
        } else {
          
          struct NATIONRecord x68304 = *x25791;
          *(x112939 + x21727) = x68304;
          struct NATIONRecord* x68306 = &(x112939[x21727]);
          list25783 = x68306;
        };
      };
      int x80411 = x25782==(NULL);
      /* VAR */ int ite99833 = 0;
      if(x80411) {
        ite99833 = 1;
      } else {
        
        char* x113174 = x25782->N_NAME;
        int x113175 = x113174==(NULL);
        /* VAR */ int x113176 = 0;
        if(x113175) {
          x113176 = 1;
        } else {
          
          int x113179 = strcmp(x113174, "");
          int x113180 = !(x113179);
          x113176 = x113180;
        };
        int x113183 = x113176;
        ite99833 = x113183;
      };
      int x96309 = ite99833;
      if(x96309) {
        x514->next = NULL;
        int x80417 = x514==(NULL);
        /* VAR */ int ite99847 = 0;
        if(x80417) {
          ite99847 = 1;
        } else {
          
          char* x113193 = x514->N_NAME;
          int x113194 = x113193==(NULL);
          /* VAR */ int x113195 = 0;
          if(x113194) {
            x113195 = 1;
          } else {
            
            int x113198 = strcmp(x113193, "");
            int x113199 = !(x113198);
            x113195 = x113199;
          };
          int x113202 = x113195;
          ite99847 = x113202;
        };
        int x96314 = ite99847;
        if(x96314) {
          *(x112939 + x21727) = (const struct NATIONRecord){0};
        } else {
          
          struct NATIONRecord x68314 = *x514;
          *(x112939 + x21727) = x68314;
          struct NATIONRecord* x68316 = &(x112939[x21727]);
          x514 = x68316;
        };
        list25783 = x514;
      } else {
        
        struct NATIONRecord* x37969 = x25782->next;
        x514->next = x37969;
        x25782->next = x514;
      };
      int x16018 = x113074;
      int x520 = x16018+(1);
      x113074 = x520;
    };
    while(1) {
      
      int x113220 = x113073;
      int x113221 = x113220<(x64903);
      if (!(x113221)) break; 
      
      int x16027 = x113073;
      struct SUPPLIERRecord* x529 = &(x68056[x16027]);
      int x531 = x529->S_SUPPKEY;
      int x21750 = x531%(1048576);
      struct SUPPLIERRecord* x25814 = &(x112940[x21750]);
      /* VAR */ struct SUPPLIERRecord* list25815 = x25814;
      struct SUPPLIERRecord* x25816 = list25815;
      int x80445 = x25816==(NULL);
      /* VAR */ int ite99883 = 0;
      if(x80445) {
        ite99883 = 1;
      } else {
        
        char* x113233 = x25816->S_NAME;
        int x113234 = x113233==(NULL);
        /* VAR */ int x113235 = 0;
        if(x113234) {
          x113235 = 1;
        } else {
          
          int x113238 = strcmp(x113233, "");
          int x113239 = !(x113238);
          x113235 = x113239;
        };
        int x113242 = x113235;
        ite99883 = x113242;
      };
      int x96339 = ite99883;
      if(x96339) {
        list25815 = NULL;
        struct SUPPLIERRecord* x25823 = list25815;
        int x80452 = x25823==(NULL);
        /* VAR */ int ite99898 = 0;
        if(x80452) {
          ite99898 = 1;
        } else {
          
          char* x113253 = x25823->S_NAME;
          int x113254 = x113253==(NULL);
          /* VAR */ int x113255 = 0;
          if(x113254) {
            x113255 = 1;
          } else {
            
            int x113258 = strcmp(x113253, "");
            int x113259 = !(x113258);
            x113255 = x113259;
          };
          int x113262 = x113255;
          ite99898 = x113262;
        };
        int x96345 = ite99898;
        if(x96345) {
          *(x112940 + x21750) = (const struct SUPPLIERRecord){0};
        } else {
          
          struct SUPPLIERRecord x68344 = *x25823;
          *(x112940 + x21750) = x68344;
          struct SUPPLIERRecord* x68346 = &(x112940[x21750]);
          list25815 = x68346;
        };
      };
      int x80462 = x25814==(NULL);
      /* VAR */ int ite99916 = 0;
      if(x80462) {
        ite99916 = 1;
      } else {
        
        char* x113276 = x25814->S_NAME;
        int x113277 = x113276==(NULL);
        /* VAR */ int x113278 = 0;
        if(x113277) {
          x113278 = 1;
        } else {
          
          int x113281 = strcmp(x113276, "");
          int x113282 = !(x113281);
          x113278 = x113282;
        };
        int x113285 = x113278;
        ite99916 = x113285;
      };
      int x96354 = ite99916;
      if(x96354) {
        x529->next = NULL;
        int x80468 = x529==(NULL);
        /* VAR */ int ite99930 = 0;
        if(x80468) {
          ite99930 = 1;
        } else {
          
          char* x113295 = x529->S_NAME;
          int x113296 = x113295==(NULL);
          /* VAR */ int x113297 = 0;
          if(x113296) {
            x113297 = 1;
          } else {
            
            int x113300 = strcmp(x113295, "");
            int x113301 = !(x113300);
            x113297 = x113301;
          };
          int x113304 = x113297;
          ite99930 = x113304;
        };
        int x96359 = ite99930;
        if(x96359) {
          *(x112940 + x21750) = (const struct SUPPLIERRecord){0};
        } else {
          
          struct SUPPLIERRecord x68354 = *x529;
          *(x112940 + x21750) = x68354;
          struct SUPPLIERRecord* x68356 = &(x112940[x21750]);
          x529 = x68356;
        };
        list25815 = x529;
      } else {
        
        struct SUPPLIERRecord* x38000 = x25814->next;
        x529->next = x38000;
        x25814->next = x529;
      };
      int x16032 = x113073;
      int x535 = x16032+(1);
      x113073 = x535;
    };
    while(1) {
      
      int x113322 = x113072;
      int x113323 = x113322<(x64830);
      if (!(x113323)) break; 
      
      int x16041 = x113072;
      struct REGIONRecord* x544 = &(x67979[x16041]);
      char* x546 = x544->R_NAME;
      int x86445 = strcmp(x546, "ASIA");
      int x86446 = x86445==(0);
      if(x86446) {
        int x548 = x544->R_REGIONKEY;
        int x21776 = x548%(1048576);
        struct REGIONRecord* x25849 = &(x112941[x21776]);
        /* VAR */ struct REGIONRecord* list25850 = x25849;
        struct REGIONRecord* x25851 = list25850;
        int x80499 = x25851==(NULL);
        /* VAR */ int ite99970 = 0;
        if(x80499) {
          ite99970 = 1;
        } else {
          
          char* x113339 = x25851->R_NAME;
          int x113340 = x113339==(NULL);
          /* VAR */ int x113341 = 0;
          if(x113340) {
            x113341 = 1;
          } else {
            
            int x113344 = strcmp(x113339, "");
            int x113345 = !(x113344);
            x113341 = x113345;
          };
          int x113348 = x113341;
          ite99970 = x113348;
        };
        int x96388 = ite99970;
        if(x96388) {
          list25850 = NULL;
          struct REGIONRecord* x25858 = list25850;
          int x80506 = x25858==(NULL);
          /* VAR */ int ite99985 = 0;
          if(x80506) {
            ite99985 = 1;
          } else {
            
            char* x113359 = x25858->R_NAME;
            int x113360 = x113359==(NULL);
            /* VAR */ int x113361 = 0;
            if(x113360) {
              x113361 = 1;
            } else {
              
              int x113364 = strcmp(x113359, "");
              int x113365 = !(x113364);
              x113361 = x113365;
            };
            int x113368 = x113361;
            ite99985 = x113368;
          };
          int x96394 = ite99985;
          if(x96394) {
            *(x112941 + x21776) = (const struct REGIONRecord){0};
          } else {
            
            struct REGIONRecord x68387 = *x25858;
            *(x112941 + x21776) = x68387;
            struct REGIONRecord* x68389 = &(x112941[x21776]);
            list25850 = x68389;
          };
        };
        int x80516 = x25849==(NULL);
        /* VAR */ int ite100003 = 0;
        if(x80516) {
          ite100003 = 1;
        } else {
          
          char* x113382 = x25849->R_NAME;
          int x113383 = x113382==(NULL);
          /* VAR */ int x113384 = 0;
          if(x113383) {
            x113384 = 1;
          } else {
            
            int x113387 = strcmp(x113382, "");
            int x113388 = !(x113387);
            x113384 = x113388;
          };
          int x113391 = x113384;
          ite100003 = x113391;
        };
        int x96403 = ite100003;
        if(x96403) {
          x544->next = NULL;
          int x80522 = x544==(NULL);
          /* VAR */ int ite100017 = 0;
          if(x80522) {
            ite100017 = 1;
          } else {
            
            int x113401 = x546==(NULL);
            /* VAR */ int x113402 = 0;
            if(x113401) {
              x113402 = 1;
            } else {
              
              int x113405 = strcmp(x546, "");
              int x113406 = !(x113405);
              x113402 = x113406;
            };
            int x113409 = x113402;
            ite100017 = x113409;
          };
          int x96408 = ite100017;
          if(x96408) {
            *(x112941 + x21776) = (const struct REGIONRecord){0};
          } else {
            
            struct REGIONRecord x68397 = *x544;
            *(x112941 + x21776) = x68397;
            struct REGIONRecord* x68399 = &(x112941[x21776]);
            x544 = x68399;
          };
          list25850 = x544;
        } else {
          
          struct REGIONRecord* x38034 = x25849->next;
          x544->next = x38034;
          x25849->next = x544;
        };
      };
      int x16049 = x113072;
      int x553 = x16049+(1);
      x113072 = x553;
    };
    while(1) {
      
      int x113427 = x113071;
      int x113428 = x113427<(x64752);
      if (!(x113428)) break; 
      
      int x16058 = x113071;
      struct NATIONRecord* x562 = &(x67897[x16058]);
      int x564 = x562->N_NATIONKEY;
      int x21799 = x564%(1048576);
      struct NATIONRecord* x25881 = &(x112942[x21799]);
      /* VAR */ struct NATIONRecord* list25882 = x25881;
      struct NATIONRecord* x25883 = list25882;
      int x80549 = x25883==(NULL);
      /* VAR */ int ite100052 = 0;
      if(x80549) {
        ite100052 = 1;
      } else {
        
        char* x113440 = x25883->N_NAME;
        int x113441 = x113440==(NULL);
        /* VAR */ int x113442 = 0;
        if(x113441) {
          x113442 = 1;
        } else {
          
          int x113445 = strcmp(x113440, "");
          int x113446 = !(x113445);
          x113442 = x113446;
        };
        int x113449 = x113442;
        ite100052 = x113449;
      };
      int x96433 = ite100052;
      if(x96433) {
        list25882 = NULL;
        struct NATIONRecord* x25890 = list25882;
        int x80556 = x25890==(NULL);
        /* VAR */ int ite100067 = 0;
        if(x80556) {
          ite100067 = 1;
        } else {
          
          char* x113460 = x25890->N_NAME;
          int x113461 = x113460==(NULL);
          /* VAR */ int x113462 = 0;
          if(x113461) {
            x113462 = 1;
          } else {
            
            int x113465 = strcmp(x113460, "");
            int x113466 = !(x113465);
            x113462 = x113466;
          };
          int x113469 = x113462;
          ite100067 = x113469;
        };
        int x96439 = ite100067;
        if(x96439) {
          *(x112942 + x21799) = (const struct NATIONRecord){0};
        } else {
          
          struct NATIONRecord x68427 = *x25890;
          *(x112942 + x21799) = x68427;
          struct NATIONRecord* x68429 = &(x112942[x21799]);
          list25882 = x68429;
        };
      };
      int x80566 = x25881==(NULL);
      /* VAR */ int ite100085 = 0;
      if(x80566) {
        ite100085 = 1;
      } else {
        
        char* x113483 = x25881->N_NAME;
        int x113484 = x113483==(NULL);
        /* VAR */ int x113485 = 0;
        if(x113484) {
          x113485 = 1;
        } else {
          
          int x113488 = strcmp(x113483, "");
          int x113489 = !(x113488);
          x113485 = x113489;
        };
        int x113492 = x113485;
        ite100085 = x113492;
      };
      int x96448 = ite100085;
      if(x96448) {
        x562->next = NULL;
        int x80572 = x562==(NULL);
        /* VAR */ int ite100099 = 0;
        if(x80572) {
          ite100099 = 1;
        } else {
          
          char* x113502 = x562->N_NAME;
          int x113503 = x113502==(NULL);
          /* VAR */ int x113504 = 0;
          if(x113503) {
            x113504 = 1;
          } else {
            
            int x113507 = strcmp(x113502, "");
            int x113508 = !(x113507);
            x113504 = x113508;
          };
          int x113511 = x113504;
          ite100099 = x113511;
        };
        int x96453 = ite100099;
        if(x96453) {
          *(x112942 + x21799) = (const struct NATIONRecord){0};
        } else {
          
          struct NATIONRecord x68437 = *x562;
          *(x112942 + x21799) = x68437;
          struct NATIONRecord* x68439 = &(x112942[x21799]);
          x562 = x68439;
        };
        list25882 = x562;
      } else {
        
        struct NATIONRecord* x38065 = x25881->next;
        x562->next = x38065;
        x25881->next = x562;
      };
      int x16063 = x113071;
      int x568 = x16063+(1);
      x113071 = x568;
    };
    while(1) {
      
      int x113529 = x113068;
      int x113530 = x113529<(x64287);
      if (!(x113530)) break; 
      
      int x16072 = x113068;
      struct LINEITEMRecord* x577 = &(x67425[x16072]);
      int x579 = x577->L_PARTKEY;
      int x21822 = x579%(1048576);
      struct LINEITEMRecord* x25913 = &(x112945[x21822]);
      /* VAR */ struct LINEITEMRecord* list25914 = x25913;
      struct LINEITEMRecord* x25915 = list25914;
      int x80600 = x25915==(NULL);
      /* VAR */ int ite100135 = 0;
      if(x80600) {
        ite100135 = 1;
      } else {
        
        char* x113542 = x25915->L_SHIPINSTRUCT;
        int x113543 = x113542==(NULL);
        /* VAR */ int x113544 = 0;
        if(x113543) {
          x113544 = 1;
        } else {
          
          int x113547 = strcmp(x113542, "");
          int x113548 = !(x113547);
          x113544 = x113548;
        };
        int x113551 = x113544;
        ite100135 = x113551;
      };
      int x96478 = ite100135;
      if(x96478) {
        list25914 = NULL;
        struct LINEITEMRecord* x25922 = list25914;
        int x80607 = x25922==(NULL);
        /* VAR */ int ite100150 = 0;
        if(x80607) {
          ite100150 = 1;
        } else {
          
          char* x113562 = x25922->L_SHIPINSTRUCT;
          int x113563 = x113562==(NULL);
          /* VAR */ int x113564 = 0;
          if(x113563) {
            x113564 = 1;
          } else {
            
            int x113567 = strcmp(x113562, "");
            int x113568 = !(x113567);
            x113564 = x113568;
          };
          int x113571 = x113564;
          ite100150 = x113571;
        };
        int x96484 = ite100150;
        if(x96484) {
          *(x112945 + x21822) = (const struct LINEITEMRecord){0};
        } else {
          
          struct LINEITEMRecord x68467 = *x25922;
          *(x112945 + x21822) = x68467;
          struct LINEITEMRecord* x68469 = &(x112945[x21822]);
          list25914 = x68469;
        };
      };
      int x80617 = x25913==(NULL);
      /* VAR */ int ite100168 = 0;
      if(x80617) {
        ite100168 = 1;
      } else {
        
        char* x113585 = x25913->L_SHIPINSTRUCT;
        int x113586 = x113585==(NULL);
        /* VAR */ int x113587 = 0;
        if(x113586) {
          x113587 = 1;
        } else {
          
          int x113590 = strcmp(x113585, "");
          int x113591 = !(x113590);
          x113587 = x113591;
        };
        int x113594 = x113587;
        ite100168 = x113594;
      };
      int x96493 = ite100168;
      if(x96493) {
        x577->next = NULL;
        int x80623 = x577==(NULL);
        /* VAR */ int ite100182 = 0;
        if(x80623) {
          ite100182 = 1;
        } else {
          
          char* x113604 = x577->L_SHIPINSTRUCT;
          int x113605 = x113604==(NULL);
          /* VAR */ int x113606 = 0;
          if(x113605) {
            x113606 = 1;
          } else {
            
            int x113609 = strcmp(x113604, "");
            int x113610 = !(x113609);
            x113606 = x113610;
          };
          int x113613 = x113606;
          ite100182 = x113613;
        };
        int x96498 = ite100182;
        if(x96498) {
          *(x112945 + x21822) = (const struct LINEITEMRecord){0};
        } else {
          
          struct LINEITEMRecord x68477 = *x577;
          *(x112945 + x21822) = x68477;
          struct LINEITEMRecord* x68479 = &(x112945[x21822]);
          x577 = x68479;
        };
        list25914 = x577;
      } else {
        
        struct LINEITEMRecord* x38096 = x25913->next;
        x577->next = x38096;
        x25913->next = x577;
      };
      int x16077 = x113068;
      int x583 = x16077+(1);
      x113068 = x583;
    };
    while(1) {
      
      int x113631 = x113067;
      int x113632 = x113631<(x64127);
      if (!(x113632)) break; 
      
      int x16086 = x113067;
      struct PARTRecord* x592 = &(x67265[x16086]);
      char* x594 = x592->P_TYPE;
      int x86637 = strcmp(x594, "MEDIUM ANODIZED NICKEL");
      int x86638 = x86637==(0);
      if(x86638) {
        int x596 = x592->P_PARTKEY;
        int x21848 = x596%(1048576);
        struct LINEITEMRecord* x25948 = &(x112945[x21848]);
        int x80652 = x25948!=(NULL);
        /* VAR */ int ite100220 = 0;
        if(x80652) {
          char* x113645 = x25948->L_SHIPINSTRUCT;
          int x113646 = x113645!=(NULL);
          /* VAR */ int x113647 = 0;
          if(x113646) {
            int x113649 = strcmp(x113645, "");
            x113647 = x113649;
          } else {
            
            x113647 = 0;
          };
          int x113653 = x113647;
          ite100220 = x113653;
        } else {
          
          ite100220 = 0;
        };
        int x96525 = ite100220;
        if(x96525) {
          /* VAR */ struct LINEITEMRecord* current30060 = x25948;
          while(1) {
            
            struct LINEITEMRecord* x30062 = current30060;
            int x80660 = x30062!=(NULL);
            /* VAR */ int ite100236 = 0;
            if(x80660) {
              char* x113665 = x30062->L_SHIPINSTRUCT;
              int x113666 = x113665!=(NULL);
              /* VAR */ int x113667 = 0;
              if(x113666) {
                int x113669 = strcmp(x113665, "");
                x113667 = x113669;
              } else {
                
                x113667 = 0;
              };
              int x113673 = x113667;
              ite100236 = x113673;
            } else {
              
              ite100236 = 0;
            };
            int x96532 = ite100236;
            if (!(x96532)) break; 
            
            struct LINEITEMRecord* x30064 = current30060;
            struct LINEITEMRecord* x38175 = x30064->next;
            struct LINEITEMRecord* x30066 = current30060;
            int x26011 = x30066->L_PARTKEY;
            int x26012 = x26011==(x596);
            if(x26012) {
              int x3507 = x30066->L_ORDERKEY;
              int x3508 = x30066->L_SUPPKEY;
              int x3509 = x30066->L_LINENUMBER;
              double x3510 = x30066->L_QUANTITY;
              double x3511 = x30066->L_EXTENDEDPRICE;
              double x3512 = x30066->L_DISCOUNT;
              double x3513 = x30066->L_TAX;
              char x3514 = x30066->L_RETURNFLAG;
              char x3515 = x30066->L_LINESTATUS;
              int x3516 = x30066->L_SHIPDATE;
              int x3517 = x30066->L_COMMITDATE;
              int x3518 = x30066->L_RECEIPTDATE;
              char* x3519 = x30066->L_SHIPINSTRUCT;
              char* x3520 = x30066->L_SHIPMODE;
              char* x3521 = x30066->L_COMMENT;
              char* x3522 = x592->P_NAME;
              char* x3523 = x592->P_MFGR;
              char* x3524 = x592->P_BRAND;
              int x3525 = x592->P_SIZE;
              char* x3526 = x592->P_CONTAINER;
              double x3527 = x592->P_RETAILPRICE;
              char* x3528 = x592->P_COMMENT;
              int x62177 = x112946;
              struct LINEITEMRecord_PARTRecord* x62178 = &(x112947[x62177]);
              x62178->L_ORDERKEY = x3507;
              x62178->L_PARTKEY = x26011;
              x62178->L_SUPPKEY = x3508;
              x62178->L_LINENUMBER = x3509;
              x62178->L_QUANTITY = x3510;
              x62178->L_EXTENDEDPRICE = x3511;
              x62178->L_DISCOUNT = x3512;
              x62178->L_TAX = x3513;
              x62178->L_RETURNFLAG = x3514;
              x62178->L_LINESTATUS = x3515;
              x62178->L_SHIPDATE = x3516;
              x62178->L_COMMITDATE = x3517;
              x62178->L_RECEIPTDATE = x3518;
              x62178->L_SHIPINSTRUCT = x3519;
              x62178->L_SHIPMODE = x3520;
              x62178->L_COMMENT = x3521;
              x62178->P_PARTKEY = x596;
              x62178->P_NAME = x3522;
              x62178->P_MFGR = x3523;
              x62178->P_BRAND = x3524;
              x62178->P_TYPE = x594;
              x62178->P_SIZE = x3525;
              x62178->P_CONTAINER = x3526;
              x62178->P_RETAILPRICE = x3527;
              x62178->P_COMMENT = x3528;
              x62178->next = NULL;
              int x62205 = x112946;
              int x62206 = x62205+(1);
              x112946 = x62206;
              int x617 = x62178->L_ORDERKEY;
              int x21884 = x617%(1048576);
              struct LINEITEMRecord_PARTRecord* x25984 = &(x112944[x21884]);
              /* VAR */ struct LINEITEMRecord_PARTRecord* list25985 = x25984;
              struct LINEITEMRecord_PARTRecord* x25986 = list25985;
              int x80728 = x25986==(NULL);
              /* VAR */ int ite100312 = 0;
              if(x80728) {
                ite100312 = 1;
              } else {
                
                char* x113746 = x25986->L_SHIPINSTRUCT;
                int x113747 = x113746==(NULL);
                /* VAR */ int x113748 = 0;
                if(x113747) {
                  x113748 = 1;
                } else {
                  
                  int x113751 = strcmp(x113746, "");
                  int x113752 = !(x113751);
                  x113748 = x113752;
                };
                int x113755 = x113748;
                ite100312 = x113755;
              };
              int x96599 = ite100312;
              if(x96599) {
                list25985 = NULL;
                struct LINEITEMRecord_PARTRecord* x25993 = list25985;
                int x80735 = x25993==(NULL);
                /* VAR */ int ite100327 = 0;
                if(x80735) {
                  ite100327 = 1;
                } else {
                  
                  char* x113766 = x25993->L_SHIPINSTRUCT;
                  int x113767 = x113766==(NULL);
                  /* VAR */ int x113768 = 0;
                  if(x113767) {
                    x113768 = 1;
                  } else {
                    
                    int x113771 = strcmp(x113766, "");
                    int x113772 = !(x113771);
                    x113768 = x113772;
                  };
                  int x113775 = x113768;
                  ite100327 = x113775;
                };
                int x96605 = ite100327;
                if(x96605) {
                  *(x112944 + x21884) = (const struct LINEITEMRecord_PARTRecord){0};
                } else {
                  
                  struct LINEITEMRecord_PARTRecord x68579 = *x25993;
                  *(x112944 + x21884) = x68579;
                  struct LINEITEMRecord_PARTRecord* x68581 = &(x112944[x21884]);
                  list25985 = x68581;
                };
              };
              int x80745 = x25984==(NULL);
              /* VAR */ int ite100345 = 0;
              if(x80745) {
                ite100345 = 1;
              } else {
                
                char* x113789 = x25984->L_SHIPINSTRUCT;
                int x113790 = x113789==(NULL);
                /* VAR */ int x113791 = 0;
                if(x113790) {
                  x113791 = 1;
                } else {
                  
                  int x113794 = strcmp(x113789, "");
                  int x113795 = !(x113794);
                  x113791 = x113795;
                };
                int x113798 = x113791;
                ite100345 = x113798;
              };
              int x96614 = ite100345;
              if(x96614) {
                x62178->next = NULL;
                int x80751 = x62178==(NULL);
                /* VAR */ int ite100359 = 0;
                if(x80751) {
                  ite100359 = 1;
                } else {
                  
                  char* x113808 = x62178->L_SHIPINSTRUCT;
                  int x113809 = x113808==(NULL);
                  /* VAR */ int x113810 = 0;
                  if(x113809) {
                    x113810 = 1;
                  } else {
                    
                    int x113813 = strcmp(x113808, "");
                    int x113814 = !(x113813);
                    x113810 = x113814;
                  };
                  int x113817 = x113810;
                  ite100359 = x113817;
                };
                int x96619 = ite100359;
                if(x96619) {
                  *(x112944 + x21884) = (const struct LINEITEMRecord_PARTRecord){0};
                } else {
                  
                  struct LINEITEMRecord_PARTRecord x68589 = *x62178;
                  *(x112944 + x21884) = x68589;
                  struct LINEITEMRecord_PARTRecord* x68591 = &(x112944[x21884]);
                  x62178 = x68591;
                };
                list25985 = x62178;
              } else {
                
                struct LINEITEMRecord_PARTRecord* x38223 = x25984->next;
                x62178->next = x38223;
                x25984->next = x62178;
              };
            };
            current30060 = x38175;
          };
        };
      };
      int x16161 = x113067;
      int x626 = x16161+(1);
      x113067 = x626;
    };
    while(1) {
      
      int x113836 = x113069;
      int x113837 = x113836<(x64481);
      if (!(x113837)) break; 
      
      int x16171 = x113069;
      struct ORDERSRecord* x636 = &(x67622[x16171]);
      int x638 = x636->O_ORDERDATE;
      int x639 = x638>=(19950101);
      /* VAR */ int ite100392 = 0;
      if(x639) {
        int x113844 = x638<=(19961231);
        ite100392 = x113844;
      } else {
        
        ite100392 = 0;
      };
      int x96641 = ite100392;
      if(x96641) {
        int x642 = x636->O_ORDERKEY;
        int x21913 = x642%(1048576);
        struct LINEITEMRecord_PARTRecord* x26079 = &(x112944[x21913]);
        int x80783 = x26079!=(NULL);
        /* VAR */ int ite100405 = 0;
        if(x80783) {
          char* x113856 = x26079->L_SHIPINSTRUCT;
          int x113857 = x113856!=(NULL);
          /* VAR */ int x113858 = 0;
          if(x113857) {
            int x113860 = strcmp(x113856, "");
            x113858 = x113860;
          } else {
            
            x113858 = 0;
          };
          int x113864 = x113858;
          ite100405 = x113864;
        } else {
          
          ite100405 = 0;
        };
        int x96648 = ite100405;
        if(x96648) {
          /* VAR */ struct LINEITEMRecord_PARTRecord* current30200 = x26079;
          while(1) {
            
            struct LINEITEMRecord_PARTRecord* x30202 = current30200;
            int x80791 = x30202!=(NULL);
            /* VAR */ int ite100421 = 0;
            if(x80791) {
              char* x113876 = x30202->L_SHIPINSTRUCT;
              int x113877 = x113876!=(NULL);
              /* VAR */ int x113878 = 0;
              if(x113877) {
                int x113880 = strcmp(x113876, "");
                x113878 = x113880;
              } else {
                
                x113878 = 0;
              };
              int x113884 = x113878;
              ite100421 = x113884;
            } else {
              
              ite100421 = 0;
            };
            int x96655 = ite100421;
            if (!(x96655)) break; 
            
            struct LINEITEMRecord_PARTRecord* x30204 = current30200;
            struct LINEITEMRecord_PARTRecord* x38314 = x30204->next;
            struct LINEITEMRecord_PARTRecord* x30206 = current30200;
            int x26151 = x30206->L_ORDERKEY;
            int x26152 = x26151==(x642);
            if(x26152) {
              int x3606 = x30206->L_PARTKEY;
              int x3607 = x30206->L_SUPPKEY;
              int x3608 = x30206->L_LINENUMBER;
              double x3609 = x30206->L_QUANTITY;
              double x3610 = x30206->L_EXTENDEDPRICE;
              double x3611 = x30206->L_DISCOUNT;
              double x3612 = x30206->L_TAX;
              char x3613 = x30206->L_RETURNFLAG;
              char x3614 = x30206->L_LINESTATUS;
              int x3615 = x30206->L_SHIPDATE;
              int x3616 = x30206->L_COMMITDATE;
              int x3617 = x30206->L_RECEIPTDATE;
              char* x3618 = x30206->L_SHIPINSTRUCT;
              char* x3619 = x30206->L_SHIPMODE;
              char* x3620 = x30206->L_COMMENT;
              int x3621 = x30206->P_PARTKEY;
              char* x3622 = x30206->P_NAME;
              char* x3623 = x30206->P_MFGR;
              char* x3624 = x30206->P_BRAND;
              char* x3625 = x30206->P_TYPE;
              int x3626 = x30206->P_SIZE;
              char* x3627 = x30206->P_CONTAINER;
              double x3628 = x30206->P_RETAILPRICE;
              char* x3629 = x30206->P_COMMENT;
              int x3630 = x636->O_CUSTKEY;
              char x3631 = x636->O_ORDERSTATUS;
              double x3632 = x636->O_TOTALPRICE;
              char* x3633 = x636->O_ORDERPRIORITY;
              char* x3634 = x636->O_CLERK;
              int x3635 = x636->O_SHIPPRIORITY;
              char* x3636 = x636->O_COMMENT;
              int x62289 = x112982;
              struct LINEITEMRecord_PARTRecord_ORDERSRecord* x62290 = &(x112983[x62289]);
              x62290->L_ORDERKEY = x26151;
              x62290->L_PARTKEY = x3606;
              x62290->L_SUPPKEY = x3607;
              x62290->L_LINENUMBER = x3608;
              x62290->L_QUANTITY = x3609;
              x62290->L_EXTENDEDPRICE = x3610;
              x62290->L_DISCOUNT = x3611;
              x62290->L_TAX = x3612;
              x62290->L_RETURNFLAG = x3613;
              x62290->L_LINESTATUS = x3614;
              x62290->L_SHIPDATE = x3615;
              x62290->L_COMMITDATE = x3616;
              x62290->L_RECEIPTDATE = x3617;
              x62290->L_SHIPINSTRUCT = x3618;
              x62290->L_SHIPMODE = x3619;
              x62290->L_COMMENT = x3620;
              x62290->P_PARTKEY = x3621;
              x62290->P_NAME = x3622;
              x62290->P_MFGR = x3623;
              x62290->P_BRAND = x3624;
              x62290->P_TYPE = x3625;
              x62290->P_SIZE = x3626;
              x62290->P_CONTAINER = x3627;
              x62290->P_RETAILPRICE = x3628;
              x62290->P_COMMENT = x3629;
              x62290->O_ORDERKEY = x642;
              x62290->O_CUSTKEY = x3630;
              x62290->O_ORDERSTATUS = x3631;
              x62290->O_TOTALPRICE = x3632;
              x62290->O_ORDERDATE = x638;
              x62290->O_ORDERPRIORITY = x3633;
              x62290->O_CLERK = x3634;
              x62290->O_SHIPPRIORITY = x3635;
              x62290->O_COMMENT = x3636;
              x62290->next = NULL;
              int x62326 = x112982;
              int x62327 = x62326+(1);
              x112982 = x62327;
              int x663 = x62290->O_CUSTKEY;
              int x21958 = x663%(1048576);
              struct LINEITEMRecord_PARTRecord_ORDERSRecord* x26124 = &(x112943[x21958]);
              /* VAR */ struct LINEITEMRecord_PARTRecord_ORDERSRecord* list26125 = x26124;
              struct LINEITEMRecord_PARTRecord_ORDERSRecord* x26126 = list26125;
              int x80877 = x26126==(NULL);
              /* VAR */ int ite100515 = 0;
              if(x80877) {
                ite100515 = 1;
              } else {
                
                char* x113975 = x26126->L_SHIPINSTRUCT;
                int x113976 = x113975==(NULL);
                /* VAR */ int x113977 = 0;
                if(x113976) {
                  x113977 = 1;
                } else {
                  
                  int x113980 = strcmp(x113975, "");
                  int x113981 = !(x113980);
                  x113977 = x113981;
                };
                int x113984 = x113977;
                ite100515 = x113984;
              };
              int x96740 = ite100515;
              if(x96740) {
                list26125 = NULL;
                struct LINEITEMRecord_PARTRecord_ORDERSRecord* x26133 = list26125;
                int x80884 = x26133==(NULL);
                /* VAR */ int ite100530 = 0;
                if(x80884) {
                  ite100530 = 1;
                } else {
                  
                  char* x113995 = x26133->L_SHIPINSTRUCT;
                  int x113996 = x113995==(NULL);
                  /* VAR */ int x113997 = 0;
                  if(x113996) {
                    x113997 = 1;
                  } else {
                    
                    int x114000 = strcmp(x113995, "");
                    int x114001 = !(x114000);
                    x113997 = x114001;
                  };
                  int x114004 = x113997;
                  ite100530 = x114004;
                };
                int x96746 = ite100530;
                if(x96746) {
                  *(x112943 + x21958) = (const struct LINEITEMRecord_PARTRecord_ORDERSRecord){0};
                } else {
                  
                  struct LINEITEMRecord_PARTRecord_ORDERSRecord x68712 = *x26133;
                  *(x112943 + x21958) = x68712;
                  struct LINEITEMRecord_PARTRecord_ORDERSRecord* x68714 = &(x112943[x21958]);
                  list26125 = x68714;
                };
              };
              int x80894 = x26124==(NULL);
              /* VAR */ int ite100548 = 0;
              if(x80894) {
                ite100548 = 1;
              } else {
                
                char* x114018 = x26124->L_SHIPINSTRUCT;
                int x114019 = x114018==(NULL);
                /* VAR */ int x114020 = 0;
                if(x114019) {
                  x114020 = 1;
                } else {
                  
                  int x114023 = strcmp(x114018, "");
                  int x114024 = !(x114023);
                  x114020 = x114024;
                };
                int x114027 = x114020;
                ite100548 = x114027;
              };
              int x96755 = ite100548;
              if(x96755) {
                x62290->next = NULL;
                int x80900 = x62290==(NULL);
                /* VAR */ int ite100562 = 0;
                if(x80900) {
                  ite100562 = 1;
                } else {
                  
                  char* x114037 = x62290->L_SHIPINSTRUCT;
                  int x114038 = x114037==(NULL);
                  /* VAR */ int x114039 = 0;
                  if(x114038) {
                    x114039 = 1;
                  } else {
                    
                    int x114042 = strcmp(x114037, "");
                    int x114043 = !(x114042);
                    x114039 = x114043;
                  };
                  int x114046 = x114039;
                  ite100562 = x114046;
                };
                int x96760 = ite100562;
                if(x96760) {
                  *(x112943 + x21958) = (const struct LINEITEMRecord_PARTRecord_ORDERSRecord){0};
                } else {
                  
                  struct LINEITEMRecord_PARTRecord_ORDERSRecord x68722 = *x62290;
                  *(x112943 + x21958) = x68722;
                  struct LINEITEMRecord_PARTRecord_ORDERSRecord* x68724 = &(x112943[x21958]);
                  x62290 = x68724;
                };
                list26125 = x62290;
              } else {
                
                struct LINEITEMRecord_PARTRecord_ORDERSRecord* x38371 = x26124->next;
                x62290->next = x38371;
                x26124->next = x62290;
              };
            };
            current30200 = x38314;
          };
        };
      };
      int x16266 = x113069;
      int x672 = x16266+(1);
      x113069 = x672;
    };
    while(1) {
      
      int x114065 = x113070;
      int x114066 = x114065<(x64612);
      if (!(x114066)) break; 
      
      int x16275 = x113070;
      struct CUSTOMERRecord* x681 = &(x67756[x16275]);
      int x683 = x681->C_CUSTKEY;
      int x21982 = x683%(1048576);
      struct LINEITEMRecord_PARTRecord_ORDERSRecord* x26223 = &(x112943[x21982]);
      int x80927 = x26223!=(NULL);
      /* VAR */ int ite100597 = 0;
      if(x80927) {
        char* x114075 = x26223->L_SHIPINSTRUCT;
        int x114076 = x114075!=(NULL);
        /* VAR */ int x114077 = 0;
        if(x114076) {
          int x114079 = strcmp(x114075, "");
          x114077 = x114079;
        } else {
          
          x114077 = 0;
        };
        int x114083 = x114077;
        ite100597 = x114083;
      } else {
        
        ite100597 = 0;
      };
      int x96784 = ite100597;
      if(x96784) {
        /* VAR */ struct LINEITEMRecord_PARTRecord_ORDERSRecord* current31871 = x26223;
        while(1) {
          
          struct LINEITEMRecord_PARTRecord_ORDERSRecord* x31873 = current31871;
          int x80935 = x31873!=(NULL);
          /* VAR */ int ite100613 = 0;
          if(x80935) {
            char* x114095 = x31873->L_SHIPINSTRUCT;
            int x114096 = x114095!=(NULL);
            /* VAR */ int x114097 = 0;
            if(x114096) {
              int x114099 = strcmp(x114095, "");
              x114097 = x114099;
            } else {
              
              x114097 = 0;
            };
            int x114103 = x114097;
            ite100613 = x114103;
          } else {
            
            ite100613 = 0;
          };
          int x96791 = ite100613;
          if (!(x96791)) break; 
          
          struct LINEITEMRecord_PARTRecord_ORDERSRecord* x31875 = current31871;
          struct LINEITEMRecord_PARTRecord_ORDERSRecord* x39953 = x31875->next;
          struct LINEITEMRecord_PARTRecord_ORDERSRecord* x31877 = current31871;
          int x27822 = x31877->O_CUSTKEY;
          int x27823 = x27822==(x683);
          if(x27823) {
            int x6370 = x31877->L_SUPPKEY;
            double x6373 = x31877->L_EXTENDEDPRICE;
            double x6374 = x31877->L_DISCOUNT;
            int x6396 = x31877->O_ORDERDATE;
            int x6403 = x681->C_NATIONKEY;
            int x22034 = x6403%(1048576);
            struct NATIONRecord* x26275 = &(x112942[x22034]);
            int x80952 = x26275!=(NULL);
            /* VAR */ int ite100638 = 0;
            if(x80952) {
              char* x114124 = x26275->N_NAME;
              int x114125 = x114124!=(NULL);
              /* VAR */ int x114126 = 0;
              if(x114125) {
                int x114128 = strcmp(x114124, "");
                x114126 = x114128;
              } else {
                
                x114126 = 0;
              };
              int x114132 = x114126;
              ite100638 = x114132;
            } else {
              
              ite100638 = 0;
            };
            int x96807 = ite100638;
            if(x96807) {
              /* VAR */ struct NATIONRecord* current32693 = x26275;
              while(1) {
                
                struct NATIONRecord* x32695 = current32693;
                int x80960 = x32695!=(NULL);
                /* VAR */ int ite100654 = 0;
                if(x80960) {
                  char* x114144 = x32695->N_NAME;
                  int x114145 = x114144!=(NULL);
                  /* VAR */ int x114146 = 0;
                  if(x114145) {
                    int x114148 = strcmp(x114144, "");
                    x114146 = x114148;
                  } else {
                    
                    x114146 = 0;
                  };
                  int x114152 = x114146;
                  ite100654 = x114152;
                } else {
                  
                  ite100654 = 0;
                };
                int x96814 = ite100654;
                if (!(x96814)) break; 
                
                struct NATIONRecord* x32697 = current32693;
                struct NATIONRecord* x40759 = x32697->next;
                struct NATIONRecord* x32699 = current32693;
                int x27051 = x32699->N_NATIONKEY;
                int x27052 = x27051==(x6403);
                if(x27052) {
                  int x7746 = x32699->N_REGIONKEY;
                  int x22049 = x7746%(1048576);
                  struct REGIONRecord* x26290 = &(x112941[x22049]);
                  int x80973 = x26290!=(NULL);
                  /* VAR */ int ite100675 = 0;
                  if(x80973) {
                    char* x114169 = x26290->R_NAME;
                    int x114170 = x114169!=(NULL);
                    /* VAR */ int x114171 = 0;
                    if(x114170) {
                      int x114173 = strcmp(x114169, "");
                      x114171 = x114173;
                    } else {
                      
                      x114171 = 0;
                    };
                    int x114177 = x114171;
                    ite100675 = x114177;
                  } else {
                    
                    ite100675 = 0;
                  };
                  int x96826 = ite100675;
                  if(x96826) {
                    /* VAR */ struct REGIONRecord* current33085 = x26290;
                    while(1) {
                      
                      struct REGIONRecord* x33087 = current33085;
                      int x80981 = x33087!=(NULL);
                      /* VAR */ int ite100691 = 0;
                      if(x80981) {
                        char* x114189 = x33087->R_NAME;
                        int x114190 = x114189!=(NULL);
                        /* VAR */ int x114191 = 0;
                        if(x114190) {
                          int x114193 = strcmp(x114189, "");
                          x114191 = x114193;
                        } else {
                          
                          x114191 = 0;
                        };
                        int x114197 = x114191;
                        ite100691 = x114197;
                      } else {
                        
                        ite100691 = 0;
                      };
                      int x96833 = ite100691;
                      if (!(x96833)) break; 
                      
                      struct REGIONRecord* x33089 = current33085;
                      struct REGIONRecord* x41143 = x33089->next;
                      struct REGIONRecord* x33091 = current33085;
                      int x26673 = x33091->R_REGIONKEY;
                      int x26674 = x26673==(x7746);
                      if(x26674) {
                        int x22063 = x6370%(1048576);
                        struct SUPPLIERRecord* x26304 = &(x112940[x22063]);
                        int x80993 = x26304!=(NULL);
                        /* VAR */ int ite100711 = 0;
                        if(x80993) {
                          char* x114213 = x26304->S_NAME;
                          int x114214 = x114213!=(NULL);
                          /* VAR */ int x114215 = 0;
                          if(x114214) {
                            int x114217 = strcmp(x114213, "");
                            x114215 = x114217;
                          } else {
                            
                            x114215 = 0;
                          };
                          int x114221 = x114215;
                          ite100711 = x114221;
                        } else {
                          
                          ite100711 = 0;
                        };
                        int x96844 = ite100711;
                        if(x96844) {
                          /* VAR */ struct SUPPLIERRecord* current33280 = x26304;
                          while(1) {
                            
                            struct SUPPLIERRecord* x33282 = current33280;
                            int x81001 = x33282!=(NULL);
                            /* VAR */ int ite100727 = 0;
                            if(x81001) {
                              char* x114233 = x33282->S_NAME;
                              int x114234 = x114233!=(NULL);
                              /* VAR */ int x114235 = 0;
                              if(x114234) {
                                int x114237 = strcmp(x114233, "");
                                x114235 = x114237;
                              } else {
                                
                                x114235 = 0;
                              };
                              int x114241 = x114235;
                              ite100727 = x114241;
                            } else {
                              
                              ite100727 = 0;
                            };
                            int x96851 = ite100727;
                            if (!(x96851)) break; 
                            
                            struct SUPPLIERRecord* x33284 = current33280;
                            struct SUPPLIERRecord* x41334 = x33284->next;
                            struct SUPPLIERRecord* x33286 = current33280;
                            int x26491 = x33286->S_SUPPKEY;
                            int x26492 = x26491==(x6370);
                            if(x26492) {
                              int x8783 = x33286->S_NATIONKEY;
                              int x22081 = x8783%(1048576);
                              struct NATIONRecord* x26322 = &(x112939[x22081]);
                              int x81014 = x26322!=(NULL);
                              /* VAR */ int ite100748 = 0;
                              if(x81014) {
                                char* x114258 = x26322->N_NAME;
                                int x114259 = x114258!=(NULL);
                                /* VAR */ int x114260 = 0;
                                if(x114259) {
                                  int x114262 = strcmp(x114258, "");
                                  x114260 = x114262;
                                } else {
                                  
                                  x114260 = 0;
                                };
                                int x114266 = x114260;
                                ite100748 = x114266;
                              } else {
                                
                                ite100748 = 0;
                              };
                              int x96863 = ite100748;
                              if(x96863) {
                                /* VAR */ struct NATIONRecord* current33379 = x26322;
                                while(1) {
                                  
                                  struct NATIONRecord* x33381 = current33379;
                                  int x81022 = x33381!=(NULL);
                                  /* VAR */ int ite100764 = 0;
                                  if(x81022) {
                                    char* x114278 = x33381->N_NAME;
                                    int x114279 = x114278!=(NULL);
                                    /* VAR */ int x114280 = 0;
                                    if(x114279) {
                                      int x114282 = strcmp(x114278, "");
                                      x114280 = x114282;
                                    } else {
                                      
                                      x114280 = 0;
                                    };
                                    int x114286 = x114280;
                                    ite100764 = x114286;
                                  } else {
                                    
                                    ite100764 = 0;
                                  };
                                  int x96870 = ite100764;
                                  if (!(x96870)) break; 
                                  
                                  struct NATIONRecord* x33383 = current33379;
                                  struct NATIONRecord* x41431 = x33383->next;
                                  struct NATIONRecord* x33385 = current33379;
                                  int x26409 = x33385->N_NATIONKEY;
                                  int x26410 = x26409==(x8783);
                                  if(x26410) {
                                    char* x8957 = x33385->N_NAME;
                                    int x63417 = x6396/(10000);
                                    int x23679 = x63417&(1048575);
                                    struct AGGRecord_Int* x26341 = &(x112933[x23679]);
                                    int x23681 = x112932;
                                    int x23682 = x23679>(x23681);
                                    if(x23682) {
                                      x112932 = x23679;
                                    };
                                    /* VAR */ struct AGGRecord_Int* current33408 = x26341;
                                    /* VAR */ int found26351 = 0;
                                    while(1) {
                                      
                                      struct AGGRecord_Int* x33411 = current33408;
                                      int x81044 = x33411!=(NULL);
                                      /* VAR */ int ite100794 = 0;
                                      if(x81044) {
                                        double* x114312 = x33411->aggs;
                                        int x114313 = x114312!=(NULL);
                                        ite100794 = x114313;
                                      } else {
                                        
                                        ite100794 = 0;
                                      };
                                      int x96891 = ite100794;
                                      /* VAR */ int ite100803 = 0;
                                      if(x96891) {
                                        int x114320 = found26351;
                                        int x114321 = !(x114320);
                                        ite100803 = x114321;
                                      } else {
                                        
                                        ite100803 = 0;
                                      };
                                      int x96893 = ite100803;
                                      if (!(x96893)) break; 
                                      
                                      struct AGGRecord_Int* x33416 = current33408;
                                      int x26359 = x33416->key;
                                      int x26360 = x26359==(x63417);
                                      if(x26360) {
                                        found26351 = 1;
                                      } else {
                                        
                                        struct AGGRecord_Int* x33422 = current33408;
                                        struct AGGRecord_Int* x41468 = x33422->next;
                                        current33408 = x41468;
                                      };
                                    };
                                    int x26367 = found26351;
                                    int x26368 = !(x26367);
                                    /* VAR */ struct AGGRecord_Int** ite96905 = 0;
                                    if(x26368) {
                                      ite96905 = NULL;
                                    } else {
                                      
                                      struct AGGRecord_Int* x96907 = current33408;
                                      ite96905 = x96907;
                                    };
                                    struct AGGRecord_Int** x26374 = ite96905;
                                    int x56206 = x26374!=(NULL);
                                    /* VAR */ struct AGGRecord_Int* ite96913 = 0;
                                    if(x56206) {
                                      ite96913 = x26374;
                                    } else {
                                      
                                      int x96915 = x113018;
                                      double* x96916 = x113019[x96915];
                                      int x96917 = x113018;
                                      int x96918 = x96917+(1);
                                      x113018 = x96918;
                                      int x96920 = x113030;
                                      struct AGGRecord_Int* x96921 = &(x113031[x96920]);
                                      x96921->key = x63417;
                                      x96921->aggs = x96916;
                                      x96921->next = NULL;
                                      int x96925 = x113030;
                                      int x96926 = x96925+(1);
                                      x113030 = x96926;
                                      int x96928 = x26341==(NULL);
                                      /* VAR */ int ite100847 = 0;
                                      if(x96928) {
                                        ite100847 = 1;
                                      } else {
                                        
                                        double* x114364 = x26341->aggs;
                                        int x114365 = x114364==(NULL);
                                        ite100847 = x114365;
                                      };
                                      int x96930 = ite100847;
                                      if(x96930) {
                                        x96921->next = NULL;
                                        int x81084 = x96921==(NULL);
                                        /* VAR */ int ite100859 = 0;
                                        if(x81084) {
                                          ite100859 = 1;
                                        } else {
                                          
                                          double* x114375 = x96921->aggs;
                                          int x114376 = x114375==(NULL);
                                          ite100859 = x114376;
                                        };
                                        int x96935 = ite100859;
                                        if(x96935) {
                                          *(x112933 + x23679) = (const struct AGGRecord_Int){0};
                                        } else {
                                          
                                          struct AGGRecord_Int x68873 = *x96921;
                                          *(x112933 + x23679) = x68873;
                                          struct AGGRecord_Int* x68875 = &(x112933[x23679]);
                                          x96921 = x68875;
                                        };
                                      } else {
                                        
                                        struct AGGRecord_Int* x41488 = x26341->next;
                                        x96921->next = x41488;
                                        x26341->next = x96921;
                                      };
                                      ite96913 = x96921;
                                    };
                                    struct AGGRecord_Int* x23694 = ite96913;
                                    double* x2684 = x23694->aggs;
                                    double x2698 = x2684[0];
                                    double x2701 = 1.0-(x6374);
                                    double x2702 = x6373*(x2701);
                                    double x2703 = x2698+(x2702);
                                    *x2684 = x2703;
                                    double x2711 = x2684[1];
                                    int x87147 = strcmp(x8957, "INDONESIA");
                                    int x87148 = x87147==(0);
                                    /* VAR */ double ite96958 = 0;
                                    if(x87148) {
                                      double x96959 = x2711+(x2702);
                                      ite96958 = x96959;
                                    } else {
                                      
                                      ite96958 = x2711;
                                    };
                                    double x2715 = ite96958;
                                    *(x2684 + 1) = x2715;
                                  };
                                  current33379 = x41431;
                                };
                              };
                            };
                            current33280 = x41334;
                          };
                        };
                      };
                      current33085 = x41143;
                    };
                  };
                };
                current32693 = x40759;
              };
            };
          };
          current31871 = x39953;
        };
      };
      int x18543 = x113070;
      int x2742 = x18543+(1);
      x113070 = x2742;
    };
    int x114417 = x112932;
    int x114418 = x114417+(1);
    int x91183 = 0;
    for(; x91183 < x114418 ; x91183 += 1) {
      
      struct AGGRecord_Int* x91184 = &(x112933[x91183]);
      /* VAR */ struct AGGRecord_Int* x91185 = x91184;
      while(1) {
        
        struct AGGRecord_Int* x33487 = x91185;
        int x81125 = x33487!=(NULL);
        /* VAR */ int ite100939 = 0;
        if(x81125) {
          double* x114452 = x33487->aggs;
          int x114453 = x114452!=(NULL);
          ite100939 = x114453;
        } else {
          
          ite100939 = 0;
        };
        int x97001 = ite100939;
        if (!(x97001)) break; 
        
        struct AGGRecord_Int* x33489 = x91185;
        struct AGGRecord_Int* x41535 = x33489->next;
        struct AGGRecord_Int* x33491 = x91185;
        double* x29439 = x33491->aggs;
        double x29440 = x29439[1];
        double x29441 = x29439[0];
        double x29442 = x29440/(x29441);
        *(x29439 + 2) = x29442;
        g_tree_insert(x113114, x33491, x33491);
        x91185 = x41535;
      };
    };
    while(1) {
      
      int x18561 = x113115;
      int x2762 = !(x18561);
      /* VAR */ int ite100961 = 0;
      if(x2762) {
        int x114473 = g_tree_nnodes(x113114);
        int x114474 = x114473!=(0);
        ite100961 = x114474;
      } else {
        
        ite100961 = 0;
      };
      int x97016 = ite100961;
      if (!(x97016)) break; 
      
      void* x74070 = NULL;
      void** x74078 = &(x74070);
      g_tree_foreach(x113114, x74077, x74078);
      struct AGGRecord_Int* x74080 = (struct AGGRecord_Int*){x74070};
      int x74081 = g_tree_remove(x113114, x74080);
      if(0) {
        x113115 = 1;
      } else {
        
        int x2775 = x74080->key;
        double* x2776 = x74080->aggs;
        double x2777 = x2776[2];
        printf("%d|%.4f\n", x2775, x2777);
        int x18578 = x113116;
        int x2780 = x18578+(1);
        x113116 = x2780;
      };
    };
    int x114500 = x113116;
    printf("(%d rows)\n", x114500);
    struct timeval* x114502 = &x113064;
    gettimeofday(x114502, NULL);
    struct timeval* x114504 = &x113060;
    struct timeval* x114505 = &x113064;
    struct timeval* x114506 = &x113062;
    long x114507 = timeval_subtract(x114504, x114505, x114506);
    printf("Generated code run in %ld milliseconds.\n", x114507);
  };
}
/* ----------- FUNCTIONS ----------- */
int x113094(struct AGGRecord_Int* x491, struct AGGRecord_Int* x492) {
  int x493 = x491->key;
  int x494 = x492->key;
  int x495 = x493<(x494);
  /* VAR */ int ite96267 = 0;
  if(x495) {
    ite96267 = -1;
  } else {
    
    int x96269 = x493>(x494);
    /* VAR */ int ite96271 = 0;
    if(x96269) {
      ite96271 = 1;
    } else {
      
      ite96271 = 0;
    };
    int x96270 = ite96271;
    ite96267 = x96270;
  };
  int x498 = ite96267;
  return x498; 
}

int x74077(void* x74071, void* x74072, void* x74073) {
  struct AGGRecord_Int** x74074 = (struct AGGRecord_Int**){x74073};
  struct AGGRecord_Int* x74075 = (struct AGGRecord_Int*){x74072};
  pointer_assign(x74074, x74075);
  return 1; 
}
