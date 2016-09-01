#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_Q10GRPRecord;
  struct Q10GRPRecord;
  struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord;
  struct LINEITEMRecord;
  struct NATIONRecord;
  struct ORDERSRecord;
  struct CUSTOMERRecord;
  
  struct AGGRecord_Q10GRPRecord {
  struct Q10GRPRecord* key;
  double aggs;
  };
  
  struct Q10GRPRecord {
  int C_CUSTKEY;
  char* C_NAME;
  double C_ACCTBAL;
  char* C_PHONE;
  char* N_NAME;
  char* C_ADDRESS;
  char* C_COMMENT;
  };
  
  struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
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
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
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
  
  


int x50215(struct Q10GRPRecord* x15026);

int x50218(struct Q10GRPRecord* x15031, struct Q10GRPRecord* x15032);

int x50225(void* x13127);

int x50228(void* x13130, void* x13131);

int x50235(void* x13137);

int x50238(void* x13140, void* x13141);

int x50245(void* x13147);

int x50248(void* x13150, void* x13151);

int x50338(struct AGGRecord_Q10GRPRecord* x267, struct AGGRecord_Q10GRPRecord* x268);

int x16231(void* x16225, void* x16226, void* x16227);
/* GLOBAL VARS */

struct timeval x8414;
int main(int argc, char** argv) {
  FILE* x9142 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x9143 = 0;
  int x9144 = x9143;
  int* x9145 = &x9144;
  int x9146 = fscanf(x9142, "%d", x9145);
  pclose(x9142);
  struct LINEITEMRecord* x10848 = (struct LINEITEMRecord*)malloc(x9144 * sizeof(struct LINEITEMRecord));
  memset(x10848, 0, x9144 * sizeof(struct LINEITEMRecord));
  int x9150 = O_RDONLY;
  int x9151 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x9150);
  struct stat x9152 = (struct stat){0};
  /* VAR */ struct stat x9153 = x9152;
  struct stat x9154 = x9153;
  struct stat* x9155 = &x9154;
  int x9156 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x9155);
  int x9158 = PROT_READ;
  int x9159 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x9155->st_size), x9158, x9159, x9151, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite41815 = 0;
    if((x5<(x9144))) {
      char x48316 = *x3;
      ite41815 = (x48316!=('\0'));
    } else {
      
      ite41815 = 0;
    };
    int x38726 = ite41815;
    if (!(x38726)) break; 
    
    /* VAR */ int x9167 = 0;
    int x9168 = x9167;
    int* x9169 = &x9168;
    char* x9170 = strntoi_unchecked(x3, x9169);
    x3 = x9170;
    /* VAR */ int x9172 = 0;
    int x9173 = x9172;
    int* x9174 = &x9173;
    char* x9175 = strntoi_unchecked(x3, x9174);
    x3 = x9175;
    /* VAR */ int x9177 = 0;
    int x9178 = x9177;
    int* x9179 = &x9178;
    char* x9180 = strntoi_unchecked(x3, x9179);
    x3 = x9180;
    /* VAR */ int x9182 = 0;
    int x9183 = x9182;
    int* x9184 = &x9183;
    char* x9185 = strntoi_unchecked(x3, x9184);
    x3 = x9185;
    /* VAR */ double x9187 = 0.0;
    double x9188 = x9187;
    double* x9189 = &x9188;
    char* x9190 = strntod_unchecked(x3, x9189);
    x3 = x9190;
    /* VAR */ double x9192 = 0.0;
    double x9193 = x9192;
    double* x9194 = &x9193;
    char* x9195 = strntod_unchecked(x3, x9194);
    x3 = x9195;
    /* VAR */ double x9197 = 0.0;
    double x9198 = x9197;
    double* x9199 = &x9198;
    char* x9200 = strntod_unchecked(x3, x9199);
    x3 = x9200;
    /* VAR */ double x9202 = 0.0;
    double x9203 = x9202;
    double* x9204 = &x9203;
    char* x9205 = strntod_unchecked(x3, x9204);
    x3 = x9205;
    char x9207 = *x3;
    /* VAR */ char x9208 = x9207;
    x3 += 1;
    x3 += 1;
    char x9211 = x9208;
    char x9212 = *x3;
    /* VAR */ char x9213 = x9212;
    x3 += 1;
    x3 += 1;
    char x9216 = x9213;
    /* VAR */ int x9217 = 0;
    int x9218 = x9217;
    int* x9219 = &x9218;
    char* x9220 = strntoi_unchecked(x3, x9219);
    x3 = x9220;
    /* VAR */ int x9222 = 0;
    int x9223 = x9222;
    int* x9224 = &x9223;
    char* x9225 = strntoi_unchecked(x3, x9224);
    x3 = x9225;
    /* VAR */ int x9227 = 0;
    int x9228 = x9227;
    int* x9229 = &x9228;
    char* x9230 = strntoi_unchecked(x3, x9229);
    x3 = x9230;
    /* VAR */ int x9236 = 0;
    int x9237 = x9236;
    int* x9238 = &x9237;
    char* x9239 = strntoi_unchecked(x3, x9238);
    x3 = x9239;
    /* VAR */ int x9241 = 0;
    int x9242 = x9241;
    int* x9243 = &x9242;
    char* x9244 = strntoi_unchecked(x3, x9243);
    x3 = x9244;
    /* VAR */ int x9246 = 0;
    int x9247 = x9246;
    int* x9248 = &x9247;
    char* x9249 = strntoi_unchecked(x3, x9248);
    x3 = x9249;
    /* VAR */ int x9255 = 0;
    int x9256 = x9255;
    int* x9257 = &x9256;
    char* x9258 = strntoi_unchecked(x3, x9257);
    x3 = x9258;
    /* VAR */ int x9260 = 0;
    int x9261 = x9260;
    int* x9262 = &x9261;
    char* x9263 = strntoi_unchecked(x3, x9262);
    x3 = x9263;
    /* VAR */ int x9265 = 0;
    int x9266 = x9265;
    int* x9267 = &x9266;
    char* x9268 = strntoi_unchecked(x3, x9267);
    x3 = x9268;
    char* x10974 = (char*)malloc(26 * sizeof(char));
    memset(x10974, 0, 26 * sizeof(char));
    /* VAR */ char* x9275 = x3;
    while(1) {
      
      char x9276 = *x3;
      /* VAR */ int ite41936 = 0;
      if((x9276!=('|'))) {
        char x48436 = *x3;
        ite41936 = (x48436!=('\n'));
      } else {
        
        ite41936 = 0;
      };
      int x38840 = ite41936;
      if (!(x38840)) break; 
      
      x3 += 1;
    };
    char* x9283 = x9275;
    int x9284 = x3 - x9283;
    char* x9285 = x9275;
    char* x9286 = strncpy(x10974, x9285, x9284);
    x3 += 1;
    char* x10992 = (char*)malloc(11 * sizeof(char));
    memset(x10992, 0, 11 * sizeof(char));
    /* VAR */ char* x9294 = x3;
    while(1) {
      
      char x9295 = *x3;
      /* VAR */ int ite41959 = 0;
      if((x9295!=('|'))) {
        char x48458 = *x3;
        ite41959 = (x48458!=('\n'));
      } else {
        
        ite41959 = 0;
      };
      int x38856 = ite41959;
      if (!(x38856)) break; 
      
      x3 += 1;
    };
    char* x9302 = x9294;
    int x9303 = x3 - x9302;
    char* x9304 = x9294;
    char* x9305 = strncpy(x10992, x9304, x9303);
    x3 += 1;
    char* x11010 = (char*)malloc(45 * sizeof(char));
    memset(x11010, 0, 45 * sizeof(char));
    /* VAR */ char* x9313 = x3;
    while(1) {
      
      char x9314 = *x3;
      /* VAR */ int ite41982 = 0;
      if((x9314!=('|'))) {
        char x48480 = *x3;
        ite41982 = (x48480!=('\n'));
      } else {
        
        ite41982 = 0;
      };
      int x38872 = ite41982;
      if (!(x38872)) break; 
      
      x3 += 1;
    };
    char* x9321 = x9313;
    int x9322 = x3 - x9321;
    char* x9323 = x9313;
    char* x9324 = strncpy(x11010, x9323, x9322);
    x3 += 1;
    struct LINEITEMRecord* x11886 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x11886, 0, 1 * sizeof(struct LINEITEMRecord));
    x11886->L_ORDERKEY = x9168; x11886->L_PARTKEY = x9173; x11886->L_SUPPKEY = x9178; x11886->L_LINENUMBER = x9183; x11886->L_QUANTITY = x9188; x11886->L_EXTENDEDPRICE = x9193; x11886->L_DISCOUNT = x9198; x11886->L_TAX = x9203; x11886->L_RETURNFLAG = x9211; x11886->L_LINESTATUS = x9216; x11886->L_SHIPDATE = (((x9218*(10000))+((x9223*(100))))+(x9228)); x11886->L_COMMITDATE = (((x9237*(10000))+((x9242*(100))))+(x9247)); x11886->L_RECEIPTDATE = (((x9256*(10000))+((x9261*(100))))+(x9266)); x11886->L_SHIPINSTRUCT = x10974; x11886->L_SHIPMODE = x10992; x11886->L_COMMENT = x11010;
    int x47 = x4;
    struct LINEITEMRecord x11030 = *x11886;
    *(x10848 + x47) = x11030;
    struct LINEITEMRecord* x11032 = &(x10848[x47]);
    x11886 = x11032;
    int x49 = x4;
    x4 = (x49+(1));
  };
  FILE* x9337 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x9338 = 0;
  int x9339 = x9338;
  int* x9340 = &x9339;
  int x9341 = fscanf(x9337, "%d", x9340);
  pclose(x9337);
  struct NATIONRecord* x11043 = (struct NATIONRecord*)malloc(x9339 * sizeof(struct NATIONRecord));
  memset(x11043, 0, x9339 * sizeof(struct NATIONRecord));
  int x9345 = O_RDONLY;
  int x9346 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x9345);
  /* VAR */ struct stat x9347 = x9152;
  struct stat x9348 = x9347;
  struct stat* x9349 = &x9348;
  int x9350 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x9349);
  int x9352 = PROT_READ;
  int x9353 = MAP_PRIVATE;
  char* x55 = mmap(NULL, (x9349->st_size), x9352, x9353, x9346, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    /* VAR */ int ite42032 = 0;
    if((x57<(x9339))) {
      char x48529 = *x55;
      ite42032 = (x48529!=('\0'));
    } else {
      
      ite42032 = 0;
    };
    int x38915 = ite42032;
    if (!(x38915)) break; 
    
    /* VAR */ int x9361 = 0;
    int x9362 = x9361;
    int* x9363 = &x9362;
    char* x9364 = strntoi_unchecked(x55, x9363);
    x55 = x9364;
    char* x11066 = (char*)malloc(26 * sizeof(char));
    memset(x11066, 0, 26 * sizeof(char));
    /* VAR */ char* x9367 = x55;
    while(1) {
      
      char x9368 = *x55;
      /* VAR */ int ite42051 = 0;
      if((x9368!=('|'))) {
        char x48547 = *x55;
        ite42051 = (x48547!=('\n'));
      } else {
        
        ite42051 = 0;
      };
      int x38927 = ite42051;
      if (!(x38927)) break; 
      
      x55 += 1;
    };
    char* x9375 = x9367;
    int x9376 = x55 - x9375;
    char* x9377 = x9367;
    char* x9378 = strncpy(x11066, x9377, x9376);
    x55 += 1;
    /* VAR */ int x9385 = 0;
    int x9386 = x9385;
    int* x9387 = &x9386;
    char* x9388 = strntoi_unchecked(x55, x9387);
    x55 = x9388;
    char* x11089 = (char*)malloc(153 * sizeof(char));
    memset(x11089, 0, 153 * sizeof(char));
    /* VAR */ char* x9391 = x55;
    while(1) {
      
      char x9392 = *x55;
      /* VAR */ int ite42079 = 0;
      if((x9392!=('|'))) {
        char x48574 = *x55;
        ite42079 = (x48574!=('\n'));
      } else {
        
        ite42079 = 0;
      };
      int x38948 = ite42079;
      if (!(x38948)) break; 
      
      x55 += 1;
    };
    char* x9399 = x9391;
    int x9400 = x55 - x9399;
    char* x9401 = x9391;
    char* x9402 = strncpy(x11089, x9401, x9400);
    x55 += 1;
    struct NATIONRecord* x11967 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x11967, 0, 1 * sizeof(struct NATIONRecord));
    x11967->N_NATIONKEY = x9362; x11967->N_NAME = x11066; x11967->N_REGIONKEY = x9386; x11967->N_COMMENT = x11089;
    int x80 = x56;
    struct NATIONRecord x11109 = *x11967;
    *(x11043 + x80) = x11109;
    struct NATIONRecord* x11111 = &(x11043[x80]);
    x11967 = x11111;
    int x82 = x56;
    x56 = (x82+(1));
  };
  FILE* x9415 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x9416 = 0;
  int x9417 = x9416;
  int* x9418 = &x9417;
  int x9419 = fscanf(x9415, "%d", x9418);
  pclose(x9415);
  struct CUSTOMERRecord* x11122 = (struct CUSTOMERRecord*)malloc(x9417 * sizeof(struct CUSTOMERRecord));
  memset(x11122, 0, x9417 * sizeof(struct CUSTOMERRecord));
  int x9423 = O_RDONLY;
  int x9424 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x9423);
  /* VAR */ struct stat x9425 = x9152;
  struct stat x9426 = x9425;
  struct stat* x9427 = &x9426;
  int x9428 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x9427);
  int x9430 = PROT_READ;
  int x9431 = MAP_PRIVATE;
  char* x88 = mmap(NULL, (x9427->st_size), x9430, x9431, x9424, 0);
  /* VAR */ int x89 = 0;
  while(1) {
    
    int x90 = x89;
    /* VAR */ int ite42129 = 0;
    if((x90<(x9417))) {
      char x48623 = *x88;
      ite42129 = (x48623!=('\0'));
    } else {
      
      ite42129 = 0;
    };
    int x38991 = ite42129;
    if (!(x38991)) break; 
    
    /* VAR */ int x9439 = 0;
    int x9440 = x9439;
    int* x9441 = &x9440;
    char* x9442 = strntoi_unchecked(x88, x9441);
    x88 = x9442;
    char* x11145 = (char*)malloc(26 * sizeof(char));
    memset(x11145, 0, 26 * sizeof(char));
    /* VAR */ char* x9445 = x88;
    while(1) {
      
      char x9446 = *x88;
      /* VAR */ int ite42148 = 0;
      if((x9446!=('|'))) {
        char x48641 = *x88;
        ite42148 = (x48641!=('\n'));
      } else {
        
        ite42148 = 0;
      };
      int x39003 = ite42148;
      if (!(x39003)) break; 
      
      x88 += 1;
    };
    char* x9453 = x9445;
    int x9454 = x88 - x9453;
    char* x9455 = x9445;
    char* x9456 = strncpy(x11145, x9455, x9454);
    x88 += 1;
    char* x11163 = (char*)malloc(41 * sizeof(char));
    memset(x11163, 0, 41 * sizeof(char));
    /* VAR */ char* x9464 = x88;
    while(1) {
      
      char x9465 = *x88;
      /* VAR */ int ite42171 = 0;
      if((x9465!=('|'))) {
        char x48663 = *x88;
        ite42171 = (x48663!=('\n'));
      } else {
        
        ite42171 = 0;
      };
      int x39019 = ite42171;
      if (!(x39019)) break; 
      
      x88 += 1;
    };
    char* x9472 = x9464;
    int x9473 = x88 - x9472;
    char* x9474 = x9464;
    char* x9475 = strncpy(x11163, x9474, x9473);
    x88 += 1;
    /* VAR */ int x9482 = 0;
    int x9483 = x9482;
    int* x9484 = &x9483;
    char* x9485 = strntoi_unchecked(x88, x9484);
    x88 = x9485;
    char* x11186 = (char*)malloc(16 * sizeof(char));
    memset(x11186, 0, 16 * sizeof(char));
    /* VAR */ char* x9488 = x88;
    while(1) {
      
      char x9489 = *x88;
      /* VAR */ int ite42199 = 0;
      if((x9489!=('|'))) {
        char x48690 = *x88;
        ite42199 = (x48690!=('\n'));
      } else {
        
        ite42199 = 0;
      };
      int x39040 = ite42199;
      if (!(x39040)) break; 
      
      x88 += 1;
    };
    char* x9496 = x9488;
    int x9497 = x88 - x9496;
    char* x9498 = x9488;
    char* x9499 = strncpy(x11186, x9498, x9497);
    x88 += 1;
    /* VAR */ double x9506 = 0.0;
    double x9507 = x9506;
    double* x9508 = &x9507;
    char* x9509 = strntod_unchecked(x88, x9508);
    x88 = x9509;
    char* x11209 = (char*)malloc(11 * sizeof(char));
    memset(x11209, 0, 11 * sizeof(char));
    /* VAR */ char* x9512 = x88;
    while(1) {
      
      char x9513 = *x88;
      /* VAR */ int ite42227 = 0;
      if((x9513!=('|'))) {
        char x48717 = *x88;
        ite42227 = (x48717!=('\n'));
      } else {
        
        ite42227 = 0;
      };
      int x39061 = ite42227;
      if (!(x39061)) break; 
      
      x88 += 1;
    };
    char* x9520 = x9512;
    int x9521 = x88 - x9520;
    char* x9522 = x9512;
    char* x9523 = strncpy(x11209, x9522, x9521);
    x88 += 1;
    char* x11227 = (char*)malloc(118 * sizeof(char));
    memset(x11227, 0, 118 * sizeof(char));
    /* VAR */ char* x9531 = x88;
    while(1) {
      
      char x9532 = *x88;
      /* VAR */ int ite42250 = 0;
      if((x9532!=('|'))) {
        char x48739 = *x88;
        ite42250 = (x48739!=('\n'));
      } else {
        
        ite42250 = 0;
      };
      int x39077 = ite42250;
      if (!(x39077)) break; 
      
      x88 += 1;
    };
    char* x9539 = x9531;
    int x9540 = x88 - x9539;
    char* x9541 = x9531;
    char* x9542 = strncpy(x11227, x9541, x9540);
    x88 += 1;
    struct CUSTOMERRecord* x12107 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x12107, 0, 1 * sizeof(struct CUSTOMERRecord));
    x12107->C_CUSTKEY = x9440; x12107->C_NAME = x11145; x12107->C_ADDRESS = x11163; x12107->C_NATIONKEY = x9483; x12107->C_PHONE = x11186; x12107->C_ACCTBAL = x9507; x12107->C_MKTSEGMENT = x11209; x12107->C_COMMENT = x11227;
    int x138 = x89;
    struct CUSTOMERRecord x11247 = *x12107;
    *(x11122 + x138) = x11247;
    struct CUSTOMERRecord* x11249 = &(x11122[x138]);
    x12107 = x11249;
    int x140 = x89;
    x89 = (x140+(1));
  };
  FILE* x9555 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x9556 = 0;
  int x9557 = x9556;
  int* x9558 = &x9557;
  int x9559 = fscanf(x9555, "%d", x9558);
  pclose(x9555);
  struct ORDERSRecord* x11260 = (struct ORDERSRecord*)malloc(x9557 * sizeof(struct ORDERSRecord));
  memset(x11260, 0, x9557 * sizeof(struct ORDERSRecord));
  int x9563 = O_RDONLY;
  int x9564 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x9563);
  /* VAR */ struct stat x9565 = x9152;
  struct stat x9566 = x9565;
  struct stat* x9567 = &x9566;
  int x9568 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x9567);
  int x9570 = PROT_READ;
  int x9571 = MAP_PRIVATE;
  char* x146 = mmap(NULL, (x9567->st_size), x9570, x9571, x9564, 0);
  /* VAR */ int x147 = 0;
  while(1) {
    
    int x148 = x147;
    /* VAR */ int ite42300 = 0;
    if((x148<(x9557))) {
      char x48788 = *x146;
      ite42300 = (x48788!=('\0'));
    } else {
      
      ite42300 = 0;
    };
    int x39120 = ite42300;
    if (!(x39120)) break; 
    
    /* VAR */ int x9579 = 0;
    int x9580 = x9579;
    int* x9581 = &x9580;
    char* x9582 = strntoi_unchecked(x146, x9581);
    x146 = x9582;
    /* VAR */ int x9584 = 0;
    int x9585 = x9584;
    int* x9586 = &x9585;
    char* x9587 = strntoi_unchecked(x146, x9586);
    x146 = x9587;
    char x9589 = *x146;
    /* VAR */ char x9590 = x9589;
    x146 += 1;
    x146 += 1;
    char x9593 = x9590;
    /* VAR */ double x9594 = 0.0;
    double x9595 = x9594;
    double* x9596 = &x9595;
    char* x9597 = strntod_unchecked(x146, x9596);
    x146 = x9597;
    /* VAR */ int x9599 = 0;
    int x9600 = x9599;
    int* x9601 = &x9600;
    char* x9602 = strntoi_unchecked(x146, x9601);
    x146 = x9602;
    /* VAR */ int x9604 = 0;
    int x9605 = x9604;
    int* x9606 = &x9605;
    char* x9607 = strntoi_unchecked(x146, x9606);
    x146 = x9607;
    /* VAR */ int x9609 = 0;
    int x9610 = x9609;
    int* x9611 = &x9610;
    char* x9612 = strntoi_unchecked(x146, x9611);
    x146 = x9612;
    char* x11317 = (char*)malloc(16 * sizeof(char));
    memset(x11317, 0, 16 * sizeof(char));
    /* VAR */ char* x9619 = x146;
    while(1) {
      
      char x9620 = *x146;
      /* VAR */ int ite42353 = 0;
      if((x9620!=('|'))) {
        char x48840 = *x146;
        ite42353 = (x48840!=('\n'));
      } else {
        
        ite42353 = 0;
      };
      int x39166 = ite42353;
      if (!(x39166)) break; 
      
      x146 += 1;
    };
    char* x9627 = x9619;
    int x9628 = x146 - x9627;
    char* x9629 = x9619;
    char* x9630 = strncpy(x11317, x9629, x9628);
    x146 += 1;
    char* x11335 = (char*)malloc(16 * sizeof(char));
    memset(x11335, 0, 16 * sizeof(char));
    /* VAR */ char* x9638 = x146;
    while(1) {
      
      char x9639 = *x146;
      /* VAR */ int ite42376 = 0;
      if((x9639!=('|'))) {
        char x48862 = *x146;
        ite42376 = (x48862!=('\n'));
      } else {
        
        ite42376 = 0;
      };
      int x39182 = ite42376;
      if (!(x39182)) break; 
      
      x146 += 1;
    };
    char* x9646 = x9638;
    int x9647 = x146 - x9646;
    char* x9648 = x9638;
    char* x9649 = strncpy(x11335, x9648, x9647);
    x146 += 1;
    /* VAR */ int x9656 = 0;
    int x9657 = x9656;
    int* x9658 = &x9657;
    char* x9659 = strntoi_unchecked(x146, x9658);
    x146 = x9659;
    char* x11358 = (char*)malloc(80 * sizeof(char));
    memset(x11358, 0, 80 * sizeof(char));
    /* VAR */ char* x9662 = x146;
    while(1) {
      
      char x9663 = *x146;
      /* VAR */ int ite42404 = 0;
      if((x9663!=('|'))) {
        char x48889 = *x146;
        ite42404 = (x48889!=('\n'));
      } else {
        
        ite42404 = 0;
      };
      int x39203 = ite42404;
      if (!(x39203)) break; 
      
      x146 += 1;
    };
    char* x9670 = x9662;
    int x9671 = x146 - x9670;
    char* x9672 = x9662;
    char* x9673 = strncpy(x11358, x9672, x9671);
    x146 += 1;
    struct ORDERSRecord* x12240 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x12240, 0, 1 * sizeof(struct ORDERSRecord));
    x12240->O_ORDERKEY = x9580; x12240->O_CUSTKEY = x9585; x12240->O_ORDERSTATUS = x9593; x12240->O_TOTALPRICE = x9595; x12240->O_ORDERDATE = (((x9600*(10000))+((x9605*(100))))+(x9610)); x12240->O_ORDERPRIORITY = x11317; x12240->O_CLERK = x11335; x12240->O_SHIPPRIORITY = x9657; x12240->O_COMMENT = x11358;
    int x182 = x147;
    struct ORDERSRecord x11378 = *x12240;
    *(x11260 + x182) = x11378;
    struct ORDERSRecord* x11380 = &(x11260[x182]);
    x12240 = x11380;
    int x184 = x147;
    x147 = (x184+(1));
  };
  int x189 = 0;
  for(; x189 < 1 ; x189 += 1) {
    
    GHashTable* x50224 = g_hash_table_new(x50215, x50218);
    GHashTable* x50234 = g_hash_table_new(((void***){x50225}), ((int*){x50228}));
    GHashTable* x50244 = g_hash_table_new(((void***){x50235}), ((int*){x50238}));
    GHashTable* x50254 = g_hash_table_new(((void***){x50245}), ((int*){x50248}));
    /* VAR */ int x50255 = 0;
    struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord* x50256 = (struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord*)malloc(48000000 * sizeof(struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord));
    memset(x50256, 0, 48000000 * sizeof(struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord));
    /* VAR */ int x50257 = 0;
    while(1) {
      
      int x8131 = x50257;
      if (!((x8131<(48000000)))) break; 
      
      int x8133 = x50257;
      struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord* x12265 = (struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord*)malloc(1 * sizeof(struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord));
      memset(x12265, 0, 1 * sizeof(struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord));
      x12265->N_NATIONKEY = 0; x12265->N_NAME = ""; x12265->N_REGIONKEY = 0; x12265->N_COMMENT = ""; x12265->C_CUSTKEY = 0; x12265->C_NAME = ""; x12265->C_ADDRESS = ""; x12265->C_NATIONKEY = 0; x12265->C_PHONE = ""; x12265->C_ACCTBAL = 0.0; x12265->C_MKTSEGMENT = ""; x12265->C_COMMENT = ""; x12265->L_ORDERKEY = 0; x12265->L_PARTKEY = 0; x12265->L_SUPPKEY = 0; x12265->L_LINENUMBER = 0; x12265->L_QUANTITY = 0.0; x12265->L_EXTENDEDPRICE = 0.0; x12265->L_DISCOUNT = 0.0; x12265->L_TAX = 0.0; x12265->L_RETURNFLAG = '\0'; x12265->L_LINESTATUS = '\0'; x12265->L_SHIPDATE = 0; x12265->L_COMMITDATE = 0; x12265->L_RECEIPTDATE = 0; x12265->L_SHIPINSTRUCT = ""; x12265->L_SHIPMODE = ""; x12265->L_COMMENT = ""; x12265->O_ORDERKEY = 0; x12265->O_CUSTKEY = 0; x12265->O_ORDERSTATUS = '\0'; x12265->O_TOTALPRICE = 0.0; x12265->O_ORDERDATE = 0; x12265->O_ORDERPRIORITY = ""; x12265->O_CLERK = ""; x12265->O_SHIPPRIORITY = 0; x12265->O_COMMENT = "";
      struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord x11400 = *x12265;
      *(x50256 + x8133) = x11400;
      struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord* x11402 = &(x50256[x8133]);
      x12265 = x11402;
      int x8136 = x50257;
      x50257 = (x8136+(1));
    };
    /* VAR */ int x50272 = 0;
    struct Q10GRPRecord* x50273 = (struct Q10GRPRecord*)malloc(48000000 * sizeof(struct Q10GRPRecord));
    memset(x50273, 0, 48000000 * sizeof(struct Q10GRPRecord));
    /* VAR */ int x50274 = 0;
    while(1) {
      
      int x8143 = x50274;
      if (!((x8143<(48000000)))) break; 
      
      int x8145 = x50274;
      struct Q10GRPRecord* x12282 = (struct Q10GRPRecord*)malloc(1 * sizeof(struct Q10GRPRecord));
      memset(x12282, 0, 1 * sizeof(struct Q10GRPRecord));
      x12282->C_CUSTKEY = 0; x12282->C_NAME = ""; x12282->C_ACCTBAL = 0.0; x12282->C_PHONE = ""; x12282->N_NAME = ""; x12282->C_ADDRESS = ""; x12282->C_COMMENT = "";
      struct Q10GRPRecord x11415 = *x12282;
      *(x50273 + x8145) = x11415;
      struct Q10GRPRecord* x11417 = &(x50273[x8145]);
      x12282 = x11417;
      int x8148 = x50274;
      x50274 = (x8148+(1));
    };
    /* VAR */ int x50289 = 0;
    struct AGGRecord_Q10GRPRecord* x50290 = (struct AGGRecord_Q10GRPRecord*)malloc(48000000 * sizeof(struct AGGRecord_Q10GRPRecord));
    memset(x50290, 0, 48000000 * sizeof(struct AGGRecord_Q10GRPRecord));
    /* VAR */ int x50291 = 0;
    while(1) {
      
      int x8155 = x50291;
      if (!((x8155<(48000000)))) break; 
      
      int x8157 = x50291;
      struct Q10GRPRecord* x8158 = &(x50273[x8157]);
      struct AGGRecord_Q10GRPRecord* x12300 = (struct AGGRecord_Q10GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q10GRPRecord));
      memset(x12300, 0, 1 * sizeof(struct AGGRecord_Q10GRPRecord));
      x12300->key = x8158; x12300->aggs = 0.0;
      struct AGGRecord_Q10GRPRecord x11431 = *x12300;
      *(x50290 + x8157) = x11431;
      struct AGGRecord_Q10GRPRecord* x11433 = &(x50290[x8157]);
      x12300 = x11433;
      int x8161 = x50291;
      x50291 = (x8161+(1));
    };
    /* VAR */ struct timeval x50307 = x8414;
    struct timeval x50308 = x50307;
    /* VAR */ struct timeval x50309 = x8414;
    struct timeval x50310 = x50309;
    /* VAR */ struct timeval x50311 = x8414;
    struct timeval x50312 = x50311;
    struct timeval* x50313 = &x50310;
    gettimeofday(x50313, NULL);
    /* VAR */ int x50315 = 0;
    /* VAR */ int x50316 = 0;
    /* VAR */ int x50317 = 0;
    /* VAR */ int x50318 = 0;
    int* x50357 = &(x50338);
    GTree* x50358 = g_tree_new(x50357);
    /* VAR */ int x50359 = 0;
    /* VAR */ int x50360 = 0;
    while(1) {
      
      int x50362 = x50317;
      if (!((x50362<(x9339)))) break; 
      
      int x3900 = x50317;
      struct NATIONRecord* x304 = &(x11043[x3900]);
      void* x13241 = (void*){(x304->N_NATIONKEY)};
      void* x13243 = g_hash_table_lookup(x50234, x13241);
      GList** x13244 = (GList**){x13243};
      GList** x13245 = NULL;
      /* VAR */ GList** ite40668 = 0;
      if((x13244==(x13245))) {
        GList** x40669 = malloc(8);
        GList* x40670 = NULL;
        pointer_assign(x40669, x40670);
        ite40668 = x40669;
      } else {
        
        ite40668 = x13244;
      };
      GList** x13250 = ite40668;
      GList* x13251 = *(x13250);
      GList* x13252 = g_list_prepend(x13251, ((void*){x304}));
      pointer_assign(x13250, x13252);
      g_hash_table_insert(x50234, x13241, ((void*){x13250}));
      int x3905 = x50317;
      x50317 = (x3905+(1));
    };
    while(1) {
      
      int x50391 = x50316;
      if (!((x50391<(x9417)))) break; 
      
      int x3914 = x50316;
      struct CUSTOMERRecord* x319 = &(x11122[x3914]);
      void* x13266 = (void*){(x319->C_CUSTKEY)};
      void* x13268 = g_hash_table_lookup(x50244, x13266);
      GList** x13269 = (GList**){x13268};
      GList** x13270 = NULL;
      /* VAR */ GList** ite40696 = 0;
      if((x13269==(x13270))) {
        GList** x40697 = malloc(8);
        GList* x40698 = NULL;
        pointer_assign(x40697, x40698);
        ite40696 = x40697;
      } else {
        
        ite40696 = x13269;
      };
      GList** x13275 = ite40696;
      GList* x13276 = *(x13275);
      GList* x13277 = g_list_prepend(x13276, ((void*){x319}));
      pointer_assign(x13275, x13277);
      g_hash_table_insert(x50244, x13266, ((void*){x13275}));
      int x3919 = x50316;
      x50316 = (x3919+(1));
    };
    while(1) {
      
      int x50420 = x50318;
      if (!((x50420<(x9144)))) break; 
      
      int x3928 = x50318;
      struct LINEITEMRecord* x334 = &(x10848[x3928]);
      if(((x334->L_RETURNFLAG)==('R'))) {
        void* x13294 = (void*){(x334->L_ORDERKEY)};
        void* x13296 = g_hash_table_lookup(x50254, x13294);
        GList** x13297 = (GList**){x13296};
        GList** x13298 = NULL;
        /* VAR */ GList** ite40727 = 0;
        if((x13297==(x13298))) {
          GList** x40728 = malloc(8);
          GList* x40729 = NULL;
          pointer_assign(x40728, x40729);
          ite40727 = x40728;
        } else {
          
          ite40727 = x13297;
        };
        GList** x13303 = ite40727;
        GList* x13304 = *(x13303);
        GList* x13305 = g_list_prepend(x13304, ((void*){x334}));
        pointer_assign(x13303, x13305);
        g_hash_table_insert(x50254, x13294, ((void*){x13303}));
      };
      int x3936 = x50318;
      x50318 = (x3936+(1));
    };
    while(1) {
      
      int x50452 = x50315;
      if (!((x50452<(x9557)))) break; 
      
      int x3945 = x50315;
      struct ORDERSRecord* x352 = &(x11260[x3945]);
      int x354 = x352->O_ORDERDATE;
      /* VAR */ int ite43987 = 0;
      if((x354>=(19941101))) {
        ite43987 = (x354<(19950201));
      } else {
        
        ite43987 = 0;
      };
      int x40750 = ite43987;
      if(x40750) {
        int x358 = x352->O_ORDERKEY;
        void* x13325 = g_hash_table_lookup(x50254, ((void*){x358}));
        GList** x13326 = (GList**){x13325};
        if((x13326!=(NULL))) {
          GList* x15722 = *(x13326);
          /* VAR */ GList* x15723 = x15722;
          while(1) {
            
            GList* x15724 = x15723;
            GList* x15725 = NULL;
            if (!((x15724!=(x15725)))) break; 
            
            GList* x15727 = x15723;
            void* x15728 = g_list_nth_data(x15727, 0);
            struct LINEITEMRecord* x15729 = (struct LINEITEMRecord*){x15728};
            GList* x15730 = x15723;
            GList* x15731 = g_list_next(x15730);
            x15723 = x15731;
            int x15733 = x15729->L_ORDERKEY;
            if((x15733==(x358))) {
              int x1736 = x352->O_CUSTKEY;
              void* x13359 = g_hash_table_lookup(x50244, ((void*){x1736}));
              GList** x13360 = (GList**){x13359};
              if((x13360!=(NULL))) {
                GList* x15503 = *(x13360);
                /* VAR */ GList* x15504 = x15503;
                while(1) {
                  
                  GList* x15505 = x15504;
                  GList* x15506 = NULL;
                  if (!((x15505!=(x15506)))) break; 
                  
                  GList* x15508 = x15504;
                  void* x15509 = g_list_nth_data(x15508, 0);
                  struct CUSTOMERRecord* x15510 = (struct CUSTOMERRecord*){x15509};
                  GList* x15511 = x15504;
                  GList* x15512 = g_list_next(x15511);
                  x15504 = x15512;
                  int x15514 = x15510->C_CUSTKEY;
                  if((x15514==(x1736))) {
                    int x1963 = x15510->C_NATIONKEY;
                    void* x13378 = g_hash_table_lookup(x50234, ((void*){x1963}));
                    GList** x13379 = (GList**){x13378};
                    if((x13379!=(NULL))) {
                      GList* x15403 = *(x13379);
                      /* VAR */ GList* x15404 = x15403;
                      while(1) {
                        
                        GList* x15405 = x15404;
                        GList* x15406 = NULL;
                        if (!((x15405!=(x15406)))) break; 
                        
                        GList* x15408 = x15404;
                        void* x15409 = g_list_nth_data(x15408, 0);
                        struct NATIONRecord* x15410 = (struct NATIONRecord*){x15409};
                        GList* x15411 = x15404;
                        GList* x15412 = g_list_next(x15411);
                        x15404 = x15412;
                        int x15414 = x15410->N_NATIONKEY;
                        if((x15414==(x1963))) {
                          int x8291 = x50255;
                          struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord* x8292 = &(x50256[x8291]);
                          x8292->N_NATIONKEY = x15414;
                          x8292->N_NAME = (x15410->N_NAME);
                          x8292->N_REGIONKEY = (x15410->N_REGIONKEY);
                          x8292->N_COMMENT = (x15410->N_COMMENT);
                          x8292->C_CUSTKEY = x15514;
                          x8292->C_NAME = (x15510->C_NAME);
                          x8292->C_ADDRESS = (x15510->C_ADDRESS);
                          x8292->C_NATIONKEY = x1963;
                          x8292->C_PHONE = (x15510->C_PHONE);
                          x8292->C_ACCTBAL = (x15510->C_ACCTBAL);
                          x8292->C_MKTSEGMENT = (x15510->C_MKTSEGMENT);
                          x8292->C_COMMENT = (x15510->C_COMMENT);
                          x8292->L_ORDERKEY = x15733;
                          x8292->L_PARTKEY = (x15729->L_PARTKEY);
                          x8292->L_SUPPKEY = (x15729->L_SUPPKEY);
                          x8292->L_LINENUMBER = (x15729->L_LINENUMBER);
                          x8292->L_QUANTITY = (x15729->L_QUANTITY);
                          x8292->L_EXTENDEDPRICE = (x15729->L_EXTENDEDPRICE);
                          x8292->L_DISCOUNT = (x15729->L_DISCOUNT);
                          x8292->L_TAX = (x15729->L_TAX);
                          x8292->L_RETURNFLAG = (x15729->L_RETURNFLAG);
                          x8292->L_LINESTATUS = (x15729->L_LINESTATUS);
                          x8292->L_SHIPDATE = (x15729->L_SHIPDATE);
                          x8292->L_COMMITDATE = (x15729->L_COMMITDATE);
                          x8292->L_RECEIPTDATE = (x15729->L_RECEIPTDATE);
                          x8292->L_SHIPINSTRUCT = (x15729->L_SHIPINSTRUCT);
                          x8292->L_SHIPMODE = (x15729->L_SHIPMODE);
                          x8292->L_COMMENT = (x15729->L_COMMENT);
                          x8292->O_ORDERKEY = x358;
                          x8292->O_CUSTKEY = x1736;
                          x8292->O_ORDERSTATUS = (x352->O_ORDERSTATUS);
                          x8292->O_TOTALPRICE = (x352->O_TOTALPRICE);
                          x8292->O_ORDERDATE = x354;
                          x8292->O_ORDERPRIORITY = (x352->O_ORDERPRIORITY);
                          x8292->O_CLERK = (x352->O_CLERK);
                          x8292->O_SHIPPRIORITY = (x352->O_SHIPPRIORITY);
                          x8292->O_COMMENT = (x352->O_COMMENT);
                          int x8330 = x50255;
                          x50255 = (x8330+(1));
                          int x8340 = x50272;
                          struct Q10GRPRecord* x8341 = &(x50273[x8340]);
                          x8341->C_CUSTKEY = (x8292->C_CUSTKEY);
                          x8341->C_NAME = (x8292->C_NAME);
                          x8341->C_ACCTBAL = (x8292->C_ACCTBAL);
                          x8341->C_PHONE = (x8292->C_PHONE);
                          x8341->N_NAME = (x8292->N_NAME);
                          x8341->C_ADDRESS = (x8292->C_ADDRESS);
                          x8341->C_COMMENT = (x8292->C_COMMENT);
                          int x8349 = x50272;
                          x50272 = (x8349+(1));
                          void* x15481 = g_hash_table_lookup(x50224, x8341);
                          /* VAR */ struct AGGRecord_Q10GRPRecord* ite41697 = 0;
                          if((x15481==(NULL))) {
                            /* VAR */ double x41698 = 0;
                            /* VAR */ double x41699 = 0;
                            double x41700 = x41699;
                            int x41701 = x50289;
                            struct AGGRecord_Q10GRPRecord* x41702 = &(x50290[x41701]);
                            x41702->key = x8341;
                            x41702->aggs = x41700;
                            int x41705 = x50289;
                            x50289 = (x41705+(1));
                            g_hash_table_insert(x50224, x8341, x41702);
                            ite41697 = x41702;
                          } else {
                            
                            ite41697 = x15481;
                          };
                          struct AGGRecord_Q10GRPRecord* x15395 = ite41697;
                          double x6385 = x15395->aggs;
                          x15395->aggs = (x6385+(((x8292->L_EXTENDEDPRICE)*((1.0-((x8292->L_DISCOUNT)))))));
                        };
                      };
                    };
                  };
                };
              };
            };
          };
        };
      };
      int x4478 = x50315;
      x50315 = (x4478+(1));
    };
    GList* x51441 = g_hash_table_get_keys(x50224);
    /* VAR */ GList* x51442 = x51441;
    int x51443 = g_hash_table_size(x50224);
    int x35674 = 0;
    for(; x35674 < x51443 ; x35674 += 1) {
      
      GList* x35675 = x51442;
      void* x35676 = g_list_nth_data(x35675, 0);
      GList* x35677 = g_list_next(x35675);
      x51442 = x35677;
      void* x35679 = g_hash_table_lookup(x50224, x35676);
      struct AGGRecord_Q10GRPRecord* x35681 = (struct AGGRecord_Q10GRPRecord*){x35679};
      g_tree_insert(x50358, x35681, x35681);
    };
    while(1) {
      
      int x4488 = x50359;
      int x822 = !(x4488);
      /* VAR */ int ite44996 = 0;
      if(x822) {
        int x51468 = g_tree_nnodes(x50358);
        ite44996 = (x51468!=(0));
      } else {
        
        ite44996 = 0;
      };
      int x41753 = ite44996;
      if (!(x41753)) break; 
      
      void* x16224 = NULL;
      void** x16232 = &(x16224);
      g_tree_foreach(x50358, x16231, x16232);
      struct AGGRecord_Q10GRPRecord* x16234 = (struct AGGRecord_Q10GRPRecord*){x16224};
      int x16235 = g_tree_remove(x50358, x16234);
      int x4496 = x50360;
      if((x4496>=(20))) {
        x50359 = 1;
      } else {
        
        struct Q10GRPRecord* x834 = x16234->key;
        double x6420 = x16234->aggs;
        printf("%d|%s|%.4f|%.2f|%s|%s|%s|%s\n", (x834->C_CUSTKEY), (x834->C_NAME), x6420, (x834->C_ACCTBAL), (x834->N_NAME), (x834->C_ADDRESS), (x834->C_PHONE), (x834->C_COMMENT));
        int x4516 = x50360;
        x50360 = (x4516+(1));
      };
    };
    int x51503 = x50360;
    printf("(%d rows)\n", x51503);
    struct timeval* x51505 = &x50312;
    gettimeofday(x51505, NULL);
    struct timeval* x51507 = &x50308;
    struct timeval* x51508 = &x50312;
    struct timeval* x51509 = &x50310;
    long x51510 = timeval_subtract(x51507, x51508, x51509);
    printf("Generated code run in %ld milliseconds.\n", x51510);
  };
}
/* ----------- FUNCTIONS ----------- */
int x50215(struct Q10GRPRecord* x15026) {
  return (x15026->C_CUSTKEY); 
}

int x50218(struct Q10GRPRecord* x15031, struct Q10GRPRecord* x15032) {
  return ((x15031->C_CUSTKEY)==((x15032->C_CUSTKEY))); 
}

int x50225(void* x13127) {
  int x13128 = g_direct_hash(x13127);
  return x13128; 
}

int x50228(void* x13130, void* x13131) {
  int x13132 = g_direct_equal(x13130, x13131);
  return x13132; 
}

int x50235(void* x13137) {
  int x13138 = g_direct_hash(x13137);
  return x13138; 
}

int x50238(void* x13140, void* x13141) {
  int x13142 = g_direct_equal(x13140, x13141);
  return x13142; 
}

int x50245(void* x13147) {
  int x13148 = g_direct_hash(x13147);
  return x13148; 
}

int x50248(void* x13150, void* x13151) {
  int x13152 = g_direct_equal(x13150, x13151);
  return x13152; 
}

int x50338(struct AGGRecord_Q10GRPRecord* x267, struct AGGRecord_Q10GRPRecord* x268) {
  double x6630 = x267->aggs;
  double x6632 = x268->aggs;
  /* VAR */ int ite40640 = 0;
  if((x6630<(x6632))) {
    ite40640 = 1;
  } else {
    
    /* VAR */ int ite40644 = 0;
    if((x6630>(x6632))) {
      ite40644 = -1;
    } else {
      
      ite40644 = 0;
    };
    int x40643 = ite40644;
    ite40640 = x40643;
  };
  int x276 = ite40640;
  return x276; 
}

int x16231(void* x16225, void* x16226, void* x16227) {
  pointer_assign(((struct AGGRecord_Q10GRPRecord**){x16227}), ((struct AGGRecord_Q10GRPRecord*){x16226}));
  return 1; 
}
