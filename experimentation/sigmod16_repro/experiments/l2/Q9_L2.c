#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord;
  struct NATIONRecord;
  struct LINEITEMRecord_PARTRecord_SUPPLIERRecord;
  struct LINEITEMRecord_PARTRecord;
  struct ORDERSRecord;
  struct PARTRecord;
  struct AGGRecord_Q9GRPRecord;
  struct Q9GRPRecord;
  struct SUPPLIERRecord;
  struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord_ORDERSRecord;
  struct PARTSUPPRecord;
  
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
  
  struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
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
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  };
  
  struct LINEITEMRecord_PARTRecord_SUPPLIERRecord {
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
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
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
  
  struct AGGRecord_Q9GRPRecord {
  struct Q9GRPRecord* key;
  double* aggs;
  };
  
  struct Q9GRPRecord {
  char* NATION;
  int O_YEAR;
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
  
  struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord_ORDERSRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
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
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
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
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
  };
  
  


int x49318(struct Q9GRPRecord* x14870);

int x49339(struct Q9GRPRecord* x14875, struct Q9GRPRecord* x14876);

int x49356(void* x12363);

int x49359(void* x12366, void* x12367);

int x49366(void* x12373);

int x49369(void* x12376, void* x12377);

int x49376(void* x12383);

int x49379(void* x12386, void* x12387);

int x49386(void* x12393);

int x49389(void* x12396, void* x12397);

int x49396(void* x12403);

int x49399(void* x12406, void* x12407);

int x49451(struct AGGRecord_Q9GRPRecord* x374, struct AGGRecord_Q9GRPRecord* x375);

int x15780(void* x15774, void* x15775, void* x15776);
/* GLOBAL VARS */

struct timeval x6189;
int main(int argc, char** argv) {
  FILE* x7151 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x7152 = 0;
  int x7153 = x7152;
  int* x7154 = &x7153;
  int x7155 = fscanf(x7151, "%d", x7154);
  pclose(x7151);
  struct PARTRecord** x9395 = (struct PARTRecord**)malloc(x7153 * sizeof(struct PARTRecord*));
  memset(x9395, 0, x7153 * sizeof(struct PARTRecord*));
  int x7159 = O_RDONLY;
  int x7160 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x7159);
  struct stat x7161 = (struct stat){0};
  /* VAR */ struct stat x7162 = x7161;
  struct stat x7163 = x7162;
  struct stat* x7164 = &x7163;
  int x7165 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x7164);
  size_t x7166 = x7164->st_size;
  int x7167 = PROT_READ;
  int x7168 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x7166, x7167, x7168, x7160, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x7153);
    /* VAR */ int ite41371 = 0;
    if(x6) {
      char x47426 = *x3;
      int x47427 = x47426!=('\0');
      ite41371 = x47427;
    } else {
      
      ite41371 = 0;
    };
    int x38623 = ite41371;
    if (!(x38623)) break; 
    
    /* VAR */ int x7176 = 0;
    int x7177 = x7176;
    int* x7178 = &x7177;
    char* x7179 = strntoi_unchecked(x3, x7178);
    x3 = x7179;
    char* x9419 = (char*)malloc(56 * sizeof(char));
    memset(x9419, 0, 56 * sizeof(char));
    /* VAR */ char* x7182 = x3;
    while(1) {
      
      char x7183 = *x3;
      int x7184 = x7183!=('|');
      /* VAR */ int ite41390 = 0;
      if(x7184) {
        char x47444 = *x3;
        int x47445 = x47444!=('\n');
        ite41390 = x47445;
      } else {
        
        ite41390 = 0;
      };
      int x38635 = ite41390;
      if (!(x38635)) break; 
      
      x3 += 1;
    };
    char* x7190 = x7182;
    int x7191 = x3 - x7190;
    char* x7192 = x7182;
    char* x7193 = strncpy(x9419, x7192, x7191);
    x3 += 1;
    char* x9437 = (char*)malloc(26 * sizeof(char));
    memset(x9437, 0, 26 * sizeof(char));
    /* VAR */ char* x7201 = x3;
    while(1) {
      
      char x7202 = *x3;
      int x7203 = x7202!=('|');
      /* VAR */ int ite41413 = 0;
      if(x7203) {
        char x47466 = *x3;
        int x47467 = x47466!=('\n');
        ite41413 = x47467;
      } else {
        
        ite41413 = 0;
      };
      int x38651 = ite41413;
      if (!(x38651)) break; 
      
      x3 += 1;
    };
    char* x7209 = x7201;
    int x7210 = x3 - x7209;
    char* x7211 = x7201;
    char* x7212 = strncpy(x9437, x7211, x7210);
    x3 += 1;
    char* x9455 = (char*)malloc(11 * sizeof(char));
    memset(x9455, 0, 11 * sizeof(char));
    /* VAR */ char* x7220 = x3;
    while(1) {
      
      char x7221 = *x3;
      int x7222 = x7221!=('|');
      /* VAR */ int ite41436 = 0;
      if(x7222) {
        char x47488 = *x3;
        int x47489 = x47488!=('\n');
        ite41436 = x47489;
      } else {
        
        ite41436 = 0;
      };
      int x38667 = ite41436;
      if (!(x38667)) break; 
      
      x3 += 1;
    };
    char* x7228 = x7220;
    int x7229 = x3 - x7228;
    char* x7230 = x7220;
    char* x7231 = strncpy(x9455, x7230, x7229);
    x3 += 1;
    char* x9473 = (char*)malloc(26 * sizeof(char));
    memset(x9473, 0, 26 * sizeof(char));
    /* VAR */ char* x7239 = x3;
    while(1) {
      
      char x7240 = *x3;
      int x7241 = x7240!=('|');
      /* VAR */ int ite41459 = 0;
      if(x7241) {
        char x47510 = *x3;
        int x47511 = x47510!=('\n');
        ite41459 = x47511;
      } else {
        
        ite41459 = 0;
      };
      int x38683 = ite41459;
      if (!(x38683)) break; 
      
      x3 += 1;
    };
    char* x7247 = x7239;
    int x7248 = x3 - x7247;
    char* x7249 = x7239;
    char* x7250 = strncpy(x9473, x7249, x7248);
    x3 += 1;
    /* VAR */ int x7257 = 0;
    int x7258 = x7257;
    int* x7259 = &x7258;
    char* x7260 = strntoi_unchecked(x3, x7259);
    x3 = x7260;
    char* x9496 = (char*)malloc(11 * sizeof(char));
    memset(x9496, 0, 11 * sizeof(char));
    /* VAR */ char* x7263 = x3;
    while(1) {
      
      char x7264 = *x3;
      int x7265 = x7264!=('|');
      /* VAR */ int ite41487 = 0;
      if(x7265) {
        char x47537 = *x3;
        int x47538 = x47537!=('\n');
        ite41487 = x47538;
      } else {
        
        ite41487 = 0;
      };
      int x38704 = ite41487;
      if (!(x38704)) break; 
      
      x3 += 1;
    };
    char* x7271 = x7263;
    int x7272 = x3 - x7271;
    char* x7273 = x7263;
    char* x7274 = strncpy(x9496, x7273, x7272);
    x3 += 1;
    /* VAR */ double x7281 = 0.0;
    double x7282 = x7281;
    double* x7283 = &x7282;
    char* x7284 = strntod_unchecked(x3, x7283);
    x3 = x7284;
    char* x9519 = (char*)malloc(24 * sizeof(char));
    memset(x9519, 0, 24 * sizeof(char));
    /* VAR */ char* x7287 = x3;
    while(1) {
      
      char x7288 = *x3;
      int x7289 = x7288!=('|');
      /* VAR */ int ite41515 = 0;
      if(x7289) {
        char x47564 = *x3;
        int x47565 = x47564!=('\n');
        ite41515 = x47565;
      } else {
        
        ite41515 = 0;
      };
      int x38725 = ite41515;
      if (!(x38725)) break; 
      
      x3 += 1;
    };
    char* x7295 = x7287;
    int x7296 = x3 - x7295;
    char* x7297 = x7287;
    char* x7298 = strncpy(x9519, x7297, x7296);
    x3 += 1;
    struct PARTRecord* x10637 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x10637, 0, 1 * sizeof(struct PARTRecord));
    x10637->P_PARTKEY = x7177; x10637->P_NAME = x9419; x10637->P_MFGR = x9437; x10637->P_BRAND = x9455; x10637->P_TYPE = x9473; x10637->P_SIZE = x7258; x10637->P_CONTAINER = x9496; x10637->P_RETAILPRICE = x7282; x10637->P_COMMENT = x9519;
    int x59 = x4;
    *(x9395 + x59) = x10637;
    int x61 = x4;
    int x62 = x61+(1);
    x4 = x62;
  };
  FILE* x7311 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x7312 = 0;
  int x7313 = x7312;
  int* x7314 = &x7313;
  int x7315 = fscanf(x7311, "%d", x7314);
  pclose(x7311);
  struct NATIONRecord** x9549 = (struct NATIONRecord**)malloc(x7313 * sizeof(struct NATIONRecord*));
  memset(x9549, 0, x7313 * sizeof(struct NATIONRecord*));
  int x7319 = O_RDONLY;
  int x7320 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x7319);
  /* VAR */ struct stat x7321 = x7161;
  struct stat x7322 = x7321;
  struct stat* x7323 = &x7322;
  int x7324 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x7323);
  size_t x7325 = x7323->st_size;
  int x7326 = PROT_READ;
  int x7327 = MAP_PRIVATE;
  char* x67 = mmap(NULL, x7325, x7326, x7327, x7320, 0);
  /* VAR */ int x68 = 0;
  while(1) {
    
    int x69 = x68;
    int x70 = x69<(x7313);
    /* VAR */ int ite41562 = 0;
    if(x70) {
      char x47610 = *x67;
      int x47611 = x47610!=('\0');
      ite41562 = x47611;
    } else {
      
      ite41562 = 0;
    };
    int x38765 = ite41562;
    if (!(x38765)) break; 
    
    /* VAR */ int x7335 = 0;
    int x7336 = x7335;
    int* x7337 = &x7336;
    char* x7338 = strntoi_unchecked(x67, x7337);
    x67 = x7338;
    char* x9572 = (char*)malloc(26 * sizeof(char));
    memset(x9572, 0, 26 * sizeof(char));
    /* VAR */ char* x7341 = x67;
    while(1) {
      
      char x7342 = *x67;
      int x7343 = x7342!=('|');
      /* VAR */ int ite41581 = 0;
      if(x7343) {
        char x47628 = *x67;
        int x47629 = x47628!=('\n');
        ite41581 = x47629;
      } else {
        
        ite41581 = 0;
      };
      int x38777 = ite41581;
      if (!(x38777)) break; 
      
      x67 += 1;
    };
    char* x7349 = x7341;
    int x7350 = x67 - x7349;
    char* x7351 = x7341;
    char* x7352 = strncpy(x9572, x7351, x7350);
    x67 += 1;
    /* VAR */ int x7359 = 0;
    int x7360 = x7359;
    int* x7361 = &x7360;
    char* x7362 = strntoi_unchecked(x67, x7361);
    x67 = x7362;
    char* x9595 = (char*)malloc(153 * sizeof(char));
    memset(x9595, 0, 153 * sizeof(char));
    /* VAR */ char* x7365 = x67;
    while(1) {
      
      char x7366 = *x67;
      int x7367 = x7366!=('|');
      /* VAR */ int ite41609 = 0;
      if(x7367) {
        char x47655 = *x67;
        int x47656 = x47655!=('\n');
        ite41609 = x47656;
      } else {
        
        ite41609 = 0;
      };
      int x38798 = ite41609;
      if (!(x38798)) break; 
      
      x67 += 1;
    };
    char* x7373 = x7365;
    int x7374 = x67 - x7373;
    char* x7375 = x7365;
    char* x7376 = strncpy(x9595, x7375, x7374);
    x67 += 1;
    struct NATIONRecord* x10715 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x10715, 0, 1 * sizeof(struct NATIONRecord));
    x10715->N_NATIONKEY = x7336; x10715->N_NAME = x9572; x10715->N_REGIONKEY = x7360; x10715->N_COMMENT = x9595;
    int x92 = x68;
    *(x9549 + x92) = x10715;
    int x94 = x68;
    int x95 = x94+(1);
    x68 = x95;
  };
  FILE* x7389 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x7390 = 0;
  int x7391 = x7390;
  int* x7392 = &x7391;
  int x7393 = fscanf(x7389, "%d", x7392);
  pclose(x7389);
  struct ORDERSRecord** x9625 = (struct ORDERSRecord**)malloc(x7391 * sizeof(struct ORDERSRecord*));
  memset(x9625, 0, x7391 * sizeof(struct ORDERSRecord*));
  int x7397 = O_RDONLY;
  int x7398 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x7397);
  /* VAR */ struct stat x7399 = x7161;
  struct stat x7400 = x7399;
  struct stat* x7401 = &x7400;
  int x7402 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x7401);
  size_t x7403 = x7401->st_size;
  int x7404 = PROT_READ;
  int x7405 = MAP_PRIVATE;
  char* x100 = mmap(NULL, x7403, x7404, x7405, x7398, 0);
  /* VAR */ int x101 = 0;
  while(1) {
    
    int x102 = x101;
    int x103 = x102<(x7391);
    /* VAR */ int ite41656 = 0;
    if(x103) {
      char x47701 = *x100;
      int x47702 = x47701!=('\0');
      ite41656 = x47702;
    } else {
      
      ite41656 = 0;
    };
    int x38838 = ite41656;
    if (!(x38838)) break; 
    
    /* VAR */ int x7413 = 0;
    int x7414 = x7413;
    int* x7415 = &x7414;
    char* x7416 = strntoi_unchecked(x100, x7415);
    x100 = x7416;
    /* VAR */ int x7418 = 0;
    int x7419 = x7418;
    int* x7420 = &x7419;
    char* x7421 = strntoi_unchecked(x100, x7420);
    x100 = x7421;
    char x7423 = *x100;
    /* VAR */ char x7424 = x7423;
    x100 += 1;
    x100 += 1;
    char x7427 = x7424;
    /* VAR */ double x7428 = 0.0;
    double x7429 = x7428;
    double* x7430 = &x7429;
    char* x7431 = strntod_unchecked(x100, x7430);
    x100 = x7431;
    /* VAR */ int x7433 = 0;
    int x7434 = x7433;
    int* x7435 = &x7434;
    char* x7436 = strntoi_unchecked(x100, x7435);
    x100 = x7436;
    /* VAR */ int x7438 = 0;
    int x7439 = x7438;
    int* x7440 = &x7439;
    char* x7441 = strntoi_unchecked(x100, x7440);
    x100 = x7441;
    /* VAR */ int x7443 = 0;
    int x7444 = x7443;
    int* x7445 = &x7444;
    char* x7446 = strntoi_unchecked(x100, x7445);
    x100 = x7446;
    int x7448 = x7434*(10000);
    int x7449 = x7439*(100);
    int x7450 = x7448+(x7449);
    int x7451 = x7450+(x7444);
    char* x9682 = (char*)malloc(16 * sizeof(char));
    memset(x9682, 0, 16 * sizeof(char));
    /* VAR */ char* x7453 = x100;
    while(1) {
      
      char x7454 = *x100;
      int x7455 = x7454!=('|');
      /* VAR */ int ite41709 = 0;
      if(x7455) {
        char x47753 = *x100;
        int x47754 = x47753!=('\n');
        ite41709 = x47754;
      } else {
        
        ite41709 = 0;
      };
      int x38884 = ite41709;
      if (!(x38884)) break; 
      
      x100 += 1;
    };
    char* x7461 = x7453;
    int x7462 = x100 - x7461;
    char* x7463 = x7453;
    char* x7464 = strncpy(x9682, x7463, x7462);
    x100 += 1;
    char* x9700 = (char*)malloc(16 * sizeof(char));
    memset(x9700, 0, 16 * sizeof(char));
    /* VAR */ char* x7472 = x100;
    while(1) {
      
      char x7473 = *x100;
      int x7474 = x7473!=('|');
      /* VAR */ int ite41732 = 0;
      if(x7474) {
        char x47775 = *x100;
        int x47776 = x47775!=('\n');
        ite41732 = x47776;
      } else {
        
        ite41732 = 0;
      };
      int x38900 = ite41732;
      if (!(x38900)) break; 
      
      x100 += 1;
    };
    char* x7480 = x7472;
    int x7481 = x100 - x7480;
    char* x7482 = x7472;
    char* x7483 = strncpy(x9700, x7482, x7481);
    x100 += 1;
    /* VAR */ int x7490 = 0;
    int x7491 = x7490;
    int* x7492 = &x7491;
    char* x7493 = strntoi_unchecked(x100, x7492);
    x100 = x7493;
    char* x9723 = (char*)malloc(80 * sizeof(char));
    memset(x9723, 0, 80 * sizeof(char));
    /* VAR */ char* x7496 = x100;
    while(1) {
      
      char x7497 = *x100;
      int x7498 = x7497!=('|');
      /* VAR */ int ite41760 = 0;
      if(x7498) {
        char x47802 = *x100;
        int x47803 = x47802!=('\n');
        ite41760 = x47803;
      } else {
        
        ite41760 = 0;
      };
      int x38921 = ite41760;
      if (!(x38921)) break; 
      
      x100 += 1;
    };
    char* x7504 = x7496;
    int x7505 = x100 - x7504;
    char* x7506 = x7496;
    char* x7507 = strncpy(x9723, x7506, x7505);
    x100 += 1;
    struct ORDERSRecord* x10845 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x10845, 0, 1 * sizeof(struct ORDERSRecord));
    x10845->O_ORDERKEY = x7414; x10845->O_CUSTKEY = x7419; x10845->O_ORDERSTATUS = x7427; x10845->O_TOTALPRICE = x7429; x10845->O_ORDERDATE = x7451; x10845->O_ORDERPRIORITY = x9682; x10845->O_CLERK = x9700; x10845->O_SHIPPRIORITY = x7491; x10845->O_COMMENT = x9723;
    int x136 = x101;
    *(x9625 + x136) = x10845;
    int x138 = x101;
    int x139 = x138+(1);
    x101 = x139;
  };
  FILE* x7520 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x7521 = 0;
  int x7522 = x7521;
  int* x7523 = &x7522;
  int x7524 = fscanf(x7520, "%d", x7523);
  pclose(x7520);
  struct PARTSUPPRecord** x9753 = (struct PARTSUPPRecord**)malloc(x7522 * sizeof(struct PARTSUPPRecord*));
  memset(x9753, 0, x7522 * sizeof(struct PARTSUPPRecord*));
  int x7528 = O_RDONLY;
  int x7529 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x7528);
  /* VAR */ struct stat x7530 = x7161;
  struct stat x7531 = x7530;
  struct stat* x7532 = &x7531;
  int x7533 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x7532);
  size_t x7534 = x7532->st_size;
  int x7535 = PROT_READ;
  int x7536 = MAP_PRIVATE;
  char* x144 = mmap(NULL, x7534, x7535, x7536, x7529, 0);
  /* VAR */ int x145 = 0;
  while(1) {
    
    int x146 = x145;
    int x147 = x146<(x7522);
    /* VAR */ int ite41807 = 0;
    if(x147) {
      char x47848 = *x144;
      int x47849 = x47848!=('\0');
      ite41807 = x47849;
    } else {
      
      ite41807 = 0;
    };
    int x38961 = ite41807;
    if (!(x38961)) break; 
    
    /* VAR */ int x7544 = 0;
    int x7545 = x7544;
    int* x7546 = &x7545;
    char* x7547 = strntoi_unchecked(x144, x7546);
    x144 = x7547;
    /* VAR */ int x7549 = 0;
    int x7550 = x7549;
    int* x7551 = &x7550;
    char* x7552 = strntoi_unchecked(x144, x7551);
    x144 = x7552;
    /* VAR */ int x7554 = 0;
    int x7555 = x7554;
    int* x7556 = &x7555;
    char* x7557 = strntoi_unchecked(x144, x7556);
    x144 = x7557;
    /* VAR */ double x7559 = 0.0;
    double x7560 = x7559;
    double* x7561 = &x7560;
    char* x7562 = strntod_unchecked(x144, x7561);
    x144 = x7562;
    char* x9791 = (char*)malloc(200 * sizeof(char));
    memset(x9791, 0, 200 * sizeof(char));
    /* VAR */ char* x7565 = x144;
    while(1) {
      
      char x7566 = *x144;
      int x7567 = x7566!=('|');
      /* VAR */ int ite41841 = 0;
      if(x7567) {
        char x47881 = *x144;
        int x47882 = x47881!=('\n');
        ite41841 = x47882;
      } else {
        
        ite41841 = 0;
      };
      int x38988 = ite41841;
      if (!(x38988)) break; 
      
      x144 += 1;
    };
    char* x7573 = x7565;
    int x7574 = x144 - x7573;
    char* x7575 = x7565;
    char* x7576 = strncpy(x9791, x7575, x7574);
    x144 += 1;
    struct PARTSUPPRecord* x10915 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x10915, 0, 1 * sizeof(struct PARTSUPPRecord));
    x10915->PS_PARTKEY = x7545; x10915->PS_SUPPKEY = x7550; x10915->PS_AVAILQTY = x7555; x10915->PS_SUPPLYCOST = x7560; x10915->PS_COMMENT = x9791;
    int x163 = x145;
    *(x9753 + x163) = x10915;
    int x165 = x145;
    int x166 = x165+(1);
    x145 = x166;
  };
  FILE* x7589 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x7590 = 0;
  int x7591 = x7590;
  int* x7592 = &x7591;
  int x7593 = fscanf(x7589, "%d", x7592);
  pclose(x7589);
  struct SUPPLIERRecord** x9821 = (struct SUPPLIERRecord**)malloc(x7591 * sizeof(struct SUPPLIERRecord*));
  memset(x9821, 0, x7591 * sizeof(struct SUPPLIERRecord*));
  int x7597 = O_RDONLY;
  int x7598 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x7597);
  /* VAR */ struct stat x7599 = x7161;
  struct stat x7600 = x7599;
  struct stat* x7601 = &x7600;
  int x7602 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x7601);
  size_t x7603 = x7601->st_size;
  int x7604 = PROT_READ;
  int x7605 = MAP_PRIVATE;
  char* x171 = mmap(NULL, x7603, x7604, x7605, x7598, 0);
  /* VAR */ int x172 = 0;
  while(1) {
    
    int x173 = x172;
    int x174 = x173<(x7591);
    /* VAR */ int ite41888 = 0;
    if(x174) {
      char x47927 = *x171;
      int x47928 = x47927!=('\0');
      ite41888 = x47928;
    } else {
      
      ite41888 = 0;
    };
    int x39028 = ite41888;
    if (!(x39028)) break; 
    
    /* VAR */ int x7613 = 0;
    int x7614 = x7613;
    int* x7615 = &x7614;
    char* x7616 = strntoi_unchecked(x171, x7615);
    x171 = x7616;
    char* x9844 = (char*)malloc(26 * sizeof(char));
    memset(x9844, 0, 26 * sizeof(char));
    /* VAR */ char* x7619 = x171;
    while(1) {
      
      char x7620 = *x171;
      int x7621 = x7620!=('|');
      /* VAR */ int ite41907 = 0;
      if(x7621) {
        char x47945 = *x171;
        int x47946 = x47945!=('\n');
        ite41907 = x47946;
      } else {
        
        ite41907 = 0;
      };
      int x39040 = ite41907;
      if (!(x39040)) break; 
      
      x171 += 1;
    };
    char* x7627 = x7619;
    int x7628 = x171 - x7627;
    char* x7629 = x7619;
    char* x7630 = strncpy(x9844, x7629, x7628);
    x171 += 1;
    char* x9862 = (char*)malloc(41 * sizeof(char));
    memset(x9862, 0, 41 * sizeof(char));
    /* VAR */ char* x7638 = x171;
    while(1) {
      
      char x7639 = *x171;
      int x7640 = x7639!=('|');
      /* VAR */ int ite41930 = 0;
      if(x7640) {
        char x47967 = *x171;
        int x47968 = x47967!=('\n');
        ite41930 = x47968;
      } else {
        
        ite41930 = 0;
      };
      int x39056 = ite41930;
      if (!(x39056)) break; 
      
      x171 += 1;
    };
    char* x7646 = x7638;
    int x7647 = x171 - x7646;
    char* x7648 = x7638;
    char* x7649 = strncpy(x9862, x7648, x7647);
    x171 += 1;
    /* VAR */ int x7656 = 0;
    int x7657 = x7656;
    int* x7658 = &x7657;
    char* x7659 = strntoi_unchecked(x171, x7658);
    x171 = x7659;
    char* x9885 = (char*)malloc(16 * sizeof(char));
    memset(x9885, 0, 16 * sizeof(char));
    /* VAR */ char* x7662 = x171;
    while(1) {
      
      char x7663 = *x171;
      int x7664 = x7663!=('|');
      /* VAR */ int ite41958 = 0;
      if(x7664) {
        char x47994 = *x171;
        int x47995 = x47994!=('\n');
        ite41958 = x47995;
      } else {
        
        ite41958 = 0;
      };
      int x39077 = ite41958;
      if (!(x39077)) break; 
      
      x171 += 1;
    };
    char* x7670 = x7662;
    int x7671 = x171 - x7670;
    char* x7672 = x7662;
    char* x7673 = strncpy(x9885, x7672, x7671);
    x171 += 1;
    /* VAR */ double x7680 = 0.0;
    double x7681 = x7680;
    double* x7682 = &x7681;
    char* x7683 = strntod_unchecked(x171, x7682);
    x171 = x7683;
    char* x9908 = (char*)malloc(102 * sizeof(char));
    memset(x9908, 0, 102 * sizeof(char));
    /* VAR */ char* x7686 = x171;
    while(1) {
      
      char x7687 = *x171;
      int x7688 = x7687!=('|');
      /* VAR */ int ite41986 = 0;
      if(x7688) {
        char x48021 = *x171;
        int x48022 = x48021!=('\n');
        ite41986 = x48022;
      } else {
        
        ite41986 = 0;
      };
      int x39098 = ite41986;
      if (!(x39098)) break; 
      
      x171 += 1;
    };
    char* x7694 = x7686;
    int x7695 = x171 - x7694;
    char* x7696 = x7686;
    char* x7697 = strncpy(x9908, x7696, x7695);
    x171 += 1;
    struct SUPPLIERRecord* x11034 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x11034, 0, 1 * sizeof(struct SUPPLIERRecord));
    x11034->S_SUPPKEY = x7614; x11034->S_NAME = x9844; x11034->S_ADDRESS = x9862; x11034->S_NATIONKEY = x7657; x11034->S_PHONE = x9885; x11034->S_ACCTBAL = x7681; x11034->S_COMMENT = x9908;
    int x213 = x172;
    *(x9821 + x213) = x11034;
    int x215 = x172;
    int x216 = x215+(1);
    x172 = x216;
  };
  FILE* x7710 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x7711 = 0;
  int x7712 = x7711;
  int* x7713 = &x7712;
  int x7714 = fscanf(x7710, "%d", x7713);
  pclose(x7710);
  struct LINEITEMRecord** x9938 = (struct LINEITEMRecord**)malloc(x7712 * sizeof(struct LINEITEMRecord*));
  memset(x9938, 0, x7712 * sizeof(struct LINEITEMRecord*));
  int x7718 = O_RDONLY;
  int x7719 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x7718);
  /* VAR */ struct stat x7720 = x7161;
  struct stat x7721 = x7720;
  struct stat* x7722 = &x7721;
  int x7723 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x7722);
  size_t x7724 = x7722->st_size;
  int x7725 = PROT_READ;
  int x7726 = MAP_PRIVATE;
  char* x221 = mmap(NULL, x7724, x7725, x7726, x7719, 0);
  /* VAR */ int x222 = 0;
  while(1) {
    
    int x223 = x222;
    int x224 = x223<(x7712);
    /* VAR */ int ite42033 = 0;
    if(x224) {
      char x48067 = *x221;
      int x48068 = x48067!=('\0');
      ite42033 = x48068;
    } else {
      
      ite42033 = 0;
    };
    int x39138 = ite42033;
    if (!(x39138)) break; 
    
    /* VAR */ int x7734 = 0;
    int x7735 = x7734;
    int* x7736 = &x7735;
    char* x7737 = strntoi_unchecked(x221, x7736);
    x221 = x7737;
    /* VAR */ int x7739 = 0;
    int x7740 = x7739;
    int* x7741 = &x7740;
    char* x7742 = strntoi_unchecked(x221, x7741);
    x221 = x7742;
    /* VAR */ int x7744 = 0;
    int x7745 = x7744;
    int* x7746 = &x7745;
    char* x7747 = strntoi_unchecked(x221, x7746);
    x221 = x7747;
    /* VAR */ int x7749 = 0;
    int x7750 = x7749;
    int* x7751 = &x7750;
    char* x7752 = strntoi_unchecked(x221, x7751);
    x221 = x7752;
    /* VAR */ double x7754 = 0.0;
    double x7755 = x7754;
    double* x7756 = &x7755;
    char* x7757 = strntod_unchecked(x221, x7756);
    x221 = x7757;
    /* VAR */ double x7759 = 0.0;
    double x7760 = x7759;
    double* x7761 = &x7760;
    char* x7762 = strntod_unchecked(x221, x7761);
    x221 = x7762;
    /* VAR */ double x7764 = 0.0;
    double x7765 = x7764;
    double* x7766 = &x7765;
    char* x7767 = strntod_unchecked(x221, x7766);
    x221 = x7767;
    /* VAR */ double x7769 = 0.0;
    double x7770 = x7769;
    double* x7771 = &x7770;
    char* x7772 = strntod_unchecked(x221, x7771);
    x221 = x7772;
    char x7774 = *x221;
    /* VAR */ char x7775 = x7774;
    x221 += 1;
    x221 += 1;
    char x7778 = x7775;
    char x7779 = *x221;
    /* VAR */ char x7780 = x7779;
    x221 += 1;
    x221 += 1;
    char x7783 = x7780;
    /* VAR */ int x7784 = 0;
    int x7785 = x7784;
    int* x7786 = &x7785;
    char* x7787 = strntoi_unchecked(x221, x7786);
    x221 = x7787;
    /* VAR */ int x7789 = 0;
    int x7790 = x7789;
    int* x7791 = &x7790;
    char* x7792 = strntoi_unchecked(x221, x7791);
    x221 = x7792;
    /* VAR */ int x7794 = 0;
    int x7795 = x7794;
    int* x7796 = &x7795;
    char* x7797 = strntoi_unchecked(x221, x7796);
    x221 = x7797;
    int x7799 = x7785*(10000);
    int x7800 = x7790*(100);
    int x7801 = x7799+(x7800);
    int x7802 = x7801+(x7795);
    /* VAR */ int x7803 = 0;
    int x7804 = x7803;
    int* x7805 = &x7804;
    char* x7806 = strntoi_unchecked(x221, x7805);
    x221 = x7806;
    /* VAR */ int x7808 = 0;
    int x7809 = x7808;
    int* x7810 = &x7809;
    char* x7811 = strntoi_unchecked(x221, x7810);
    x221 = x7811;
    /* VAR */ int x7813 = 0;
    int x7814 = x7813;
    int* x7815 = &x7814;
    char* x7816 = strntoi_unchecked(x221, x7815);
    x221 = x7816;
    int x7818 = x7804*(10000);
    int x7819 = x7809*(100);
    int x7820 = x7818+(x7819);
    int x7821 = x7820+(x7814);
    /* VAR */ int x7822 = 0;
    int x7823 = x7822;
    int* x7824 = &x7823;
    char* x7825 = strntoi_unchecked(x221, x7824);
    x221 = x7825;
    /* VAR */ int x7827 = 0;
    int x7828 = x7827;
    int* x7829 = &x7828;
    char* x7830 = strntoi_unchecked(x221, x7829);
    x221 = x7830;
    /* VAR */ int x7832 = 0;
    int x7833 = x7832;
    int* x7834 = &x7833;
    char* x7835 = strntoi_unchecked(x221, x7834);
    x221 = x7835;
    int x7837 = x7823*(10000);
    int x7838 = x7828*(100);
    int x7839 = x7837+(x7838);
    int x7840 = x7839+(x7833);
    char* x10063 = (char*)malloc(26 * sizeof(char));
    memset(x10063, 0, 26 * sizeof(char));
    /* VAR */ char* x7842 = x221;
    while(1) {
      
      char x7843 = *x221;
      int x7844 = x7843!=('|');
      /* VAR */ int ite42154 = 0;
      if(x7844) {
        char x48187 = *x221;
        int x48188 = x48187!=('\n');
        ite42154 = x48188;
      } else {
        
        ite42154 = 0;
      };
      int x39252 = ite42154;
      if (!(x39252)) break; 
      
      x221 += 1;
    };
    char* x7850 = x7842;
    int x7851 = x221 - x7850;
    char* x7852 = x7842;
    char* x7853 = strncpy(x10063, x7852, x7851);
    x221 += 1;
    char* x10081 = (char*)malloc(11 * sizeof(char));
    memset(x10081, 0, 11 * sizeof(char));
    /* VAR */ char* x7861 = x221;
    while(1) {
      
      char x7862 = *x221;
      int x7863 = x7862!=('|');
      /* VAR */ int ite42177 = 0;
      if(x7863) {
        char x48209 = *x221;
        int x48210 = x48209!=('\n');
        ite42177 = x48210;
      } else {
        
        ite42177 = 0;
      };
      int x39268 = ite42177;
      if (!(x39268)) break; 
      
      x221 += 1;
    };
    char* x7869 = x7861;
    int x7870 = x221 - x7869;
    char* x7871 = x7861;
    char* x7872 = strncpy(x10081, x7871, x7870);
    x221 += 1;
    char* x10099 = (char*)malloc(45 * sizeof(char));
    memset(x10099, 0, 45 * sizeof(char));
    /* VAR */ char* x7880 = x221;
    while(1) {
      
      char x7881 = *x221;
      int x7882 = x7881!=('|');
      /* VAR */ int ite42200 = 0;
      if(x7882) {
        char x48231 = *x221;
        int x48232 = x48231!=('\n');
        ite42200 = x48232;
      } else {
        
        ite42200 = 0;
      };
      int x39284 = ite42200;
      if (!(x39284)) break; 
      
      x221 += 1;
    };
    char* x7888 = x7880;
    int x7889 = x221 - x7888;
    char* x7890 = x7880;
    char* x7891 = strncpy(x10099, x7890, x7889);
    x221 += 1;
    struct LINEITEMRecord* x11227 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x11227, 0, 1 * sizeof(struct LINEITEMRecord));
    x11227->L_ORDERKEY = x7735; x11227->L_PARTKEY = x7740; x11227->L_SUPPKEY = x7745; x11227->L_LINENUMBER = x7750; x11227->L_QUANTITY = x7755; x11227->L_EXTENDEDPRICE = x7760; x11227->L_DISCOUNT = x7765; x11227->L_TAX = x7770; x11227->L_RETURNFLAG = x7778; x11227->L_LINESTATUS = x7783; x11227->L_SHIPDATE = x7802; x11227->L_COMMITDATE = x7821; x11227->L_RECEIPTDATE = x7840; x11227->L_SHIPINSTRUCT = x10063; x11227->L_SHIPMODE = x10081; x11227->L_COMMENT = x10099;
    int x265 = x222;
    *(x9938 + x265) = x11227;
    int x267 = x222;
    int x268 = x267+(1);
    x222 = x268;
  };
  int x272 = 0;
  for(; x272 < 1 ; x272 += 1) {
    
    GHashTable* x49355 = g_hash_table_new(x49318, x49339);
    void*** x49363 = (void***){x49356};
    int* x49364 = (int*){x49359};
    GHashTable* x49365 = g_hash_table_new(x49363, x49364);
    void*** x49373 = (void***){x49366};
    int* x49374 = (int*){x49369};
    GHashTable* x49375 = g_hash_table_new(x49373, x49374);
    void*** x49383 = (void***){x49376};
    int* x49384 = (int*){x49379};
    GHashTable* x49385 = g_hash_table_new(x49383, x49384);
    void*** x49393 = (void***){x49386};
    int* x49394 = (int*){x49389};
    GHashTable* x49395 = g_hash_table_new(x49393, x49394);
    void*** x49403 = (void***){x49396};
    int* x49404 = (int*){x49399};
    GHashTable* x49405 = g_hash_table_new(x49403, x49404);
    /* VAR */ struct timeval x49406 = x6189;
    struct timeval x49407 = x49406;
    /* VAR */ struct timeval x49408 = x6189;
    struct timeval x49409 = x49408;
    /* VAR */ struct timeval x49410 = x6189;
    struct timeval x49411 = x49410;
    struct timeval* x49412 = &x49409;
    gettimeofday(x49412, NULL);
    /* VAR */ int x49414 = 0;
    /* VAR */ int x49415 = 0;
    /* VAR */ int x49416 = 0;
    /* VAR */ int x49417 = 0;
    /* VAR */ int x49418 = 0;
    /* VAR */ int x49419 = 0;
    int* x49482 = &(x49451);
    GTree* x49483 = g_tree_new(x49482);
    /* VAR */ int x49484 = 0;
    /* VAR */ int x49485 = 0;
    while(1) {
      
      int x49487 = x49418;
      int x49488 = x49487<(x7522);
      if (!(x49488)) break; 
      
      int x3712 = x49418;
      struct PARTSUPPRecord* x407 = x9753[x3712];
      int x409 = x407->PS_PARTKEY;
      void* x12454 = (void*){x409};
      void* x12455 = (void*){x407};
      void* x12456 = g_hash_table_lookup(x49375, x12454);
      GList** x12457 = (GList**){x12456};
      GList** x12458 = NULL;
      int x12459 = x12457==(x12458);
      /* VAR */ GList** ite40503 = 0;
      if(x12459) {
        GList** x40504 = malloc(8);
        GList* x40505 = NULL;
        pointer_assign(x40504, x40505);
        ite40503 = x40504;
      } else {
        
        ite40503 = x12457;
      };
      GList** x12463 = ite40503;
      GList* x12464 = *(x12463);
      GList* x12465 = g_list_prepend(x12464, x12455);
      pointer_assign(x12463, x12465);
      void* x12467 = (void*){x12463};
      g_hash_table_insert(x49375, x12454, x12467);
      int x3717 = x49418;
      int x413 = x3717+(1);
      x49418 = x413;
    };
    while(1) {
      
      int x49516 = x49416;
      int x49517 = x49516<(x7712);
      if (!(x49517)) break; 
      
      int x3726 = x49416;
      struct LINEITEMRecord* x422 = x9938[x3726];
      int x424 = x422->L_PARTKEY;
      void* x12479 = (void*){x424};
      void* x12480 = (void*){x422};
      void* x12481 = g_hash_table_lookup(x49405, x12479);
      GList** x12482 = (GList**){x12481};
      GList** x12483 = NULL;
      int x12484 = x12482==(x12483);
      /* VAR */ GList** ite40531 = 0;
      if(x12484) {
        GList** x40532 = malloc(8);
        GList* x40533 = NULL;
        pointer_assign(x40532, x40533);
        ite40531 = x40532;
      } else {
        
        ite40531 = x12482;
      };
      GList** x12488 = ite40531;
      GList* x12489 = *(x12488);
      GList* x12490 = g_list_prepend(x12489, x12480);
      pointer_assign(x12488, x12490);
      void* x12492 = (void*){x12488};
      g_hash_table_insert(x49405, x12479, x12492);
      int x3731 = x49416;
      int x428 = x3731+(1);
      x49416 = x428;
    };
    while(1) {
      
      int x49545 = x49417;
      int x49546 = x49545<(x7153);
      if (!(x49546)) break; 
      
      int x3740 = x49417;
      struct PARTRecord* x437 = x9395[x3740];
      char* x439 = x437->P_NAME;
      char* x31855 = strstr(x439, "ghost");
      int x31856 = x31855!=(NULL);
      if(x31856) {
        int x441 = x437->P_PARTKEY;
        void* x12507 = (void*){x441};
        void* x12508 = g_hash_table_lookup(x49405, x12507);
        GList** x12509 = (GList**){x12508};
        int x23454 = x12509!=(NULL);
        if(x23454) {
          GList* x15094 = *(x12509);
          /* VAR */ GList* x15095 = x15094;
          while(1) {
            
            GList* x15096 = x15095;
            GList* x15097 = NULL;
            int x15098 = x15096!=(x15097);
            if (!(x15098)) break; 
            
            GList* x15099 = x15095;
            void* x15100 = g_list_nth_data(x15099, 0);
            struct LINEITEMRecord* x15101 = (struct LINEITEMRecord*){x15100};
            GList* x15102 = x15095;
            GList* x15103 = g_list_next(x15102);
            x15095 = x15103;
            int x15105 = x15101->L_PARTKEY;
            int x15106 = x15105==(x441);
            if(x15106) {
              int x1310 = x15101->L_ORDERKEY;
              int x1311 = x15101->L_SUPPKEY;
              int x1312 = x15101->L_LINENUMBER;
              double x1313 = x15101->L_QUANTITY;
              double x1314 = x15101->L_EXTENDEDPRICE;
              double x1315 = x15101->L_DISCOUNT;
              double x1316 = x15101->L_TAX;
              char x1317 = x15101->L_RETURNFLAG;
              char x1318 = x15101->L_LINESTATUS;
              int x1319 = x15101->L_SHIPDATE;
              int x1320 = x15101->L_COMMITDATE;
              int x1321 = x15101->L_RECEIPTDATE;
              char* x1322 = x15101->L_SHIPINSTRUCT;
              char* x1323 = x15101->L_SHIPMODE;
              char* x1324 = x15101->L_COMMENT;
              char* x1325 = x437->P_MFGR;
              char* x1326 = x437->P_BRAND;
              char* x1327 = x437->P_TYPE;
              int x1328 = x437->P_SIZE;
              char* x1329 = x437->P_CONTAINER;
              double x1330 = x437->P_RETAILPRICE;
              char* x1331 = x437->P_COMMENT;
              struct LINEITEMRecord_PARTRecord* x11341 = (struct LINEITEMRecord_PARTRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord));
              memset(x11341, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord));
              x11341->L_ORDERKEY = x1310; x11341->L_PARTKEY = x15105; x11341->L_SUPPKEY = x1311; x11341->L_LINENUMBER = x1312; x11341->L_QUANTITY = x1313; x11341->L_EXTENDEDPRICE = x1314; x11341->L_DISCOUNT = x1315; x11341->L_TAX = x1316; x11341->L_RETURNFLAG = x1317; x11341->L_LINESTATUS = x1318; x11341->L_SHIPDATE = x1319; x11341->L_COMMITDATE = x1320; x11341->L_RECEIPTDATE = x1321; x11341->L_SHIPINSTRUCT = x1322; x11341->L_SHIPMODE = x1323; x11341->L_COMMENT = x1324; x11341->P_PARTKEY = x441; x11341->P_NAME = x439; x11341->P_MFGR = x1325; x11341->P_BRAND = x1326; x11341->P_TYPE = x1327; x11341->P_SIZE = x1328; x11341->P_CONTAINER = x1329; x11341->P_RETAILPRICE = x1330; x11341->P_COMMENT = x1331;
              int x462 = x11341->L_SUPPKEY;
              void* x12545 = (void*){x462};
              void* x12546 = (void*){x11341};
              void* x12547 = g_hash_table_lookup(x49395, x12545);
              GList** x12548 = (GList**){x12547};
              GList** x12549 = NULL;
              int x12550 = x12548==(x12549);
              /* VAR */ GList** ite40660 = 0;
              if(x12550) {
                GList** x40661 = malloc(8);
                GList* x40662 = NULL;
                pointer_assign(x40661, x40662);
                ite40660 = x40661;
              } else {
                
                ite40660 = x12548;
              };
              GList** x12554 = ite40660;
              GList* x12555 = *(x12554);
              GList* x12556 = g_list_prepend(x12555, x12546);
              pointer_assign(x12554, x12556);
              void* x12558 = (void*){x12554};
              g_hash_table_insert(x49395, x12545, x12558);
            };
          };
        };
      };
      int x3815 = x49417;
      int x471 = x3815+(1);
      x49417 = x471;
    };
    while(1) {
      
      int x49675 = x49415;
      int x49676 = x49675<(x7591);
      if (!(x49676)) break; 
      
      int x3825 = x49415;
      struct SUPPLIERRecord* x481 = x9821[x3825];
      int x483 = x481->S_SUPPKEY;
      void* x12571 = (void*){x483};
      void* x12572 = g_hash_table_lookup(x49395, x12571);
      GList** x12573 = (GList**){x12572};
      int x23571 = x12573!=(NULL);
      if(x23571) {
        GList* x15221 = *(x12573);
        /* VAR */ GList* x15222 = x15221;
        while(1) {
          
          GList* x15223 = x15222;
          GList* x15224 = NULL;
          int x15225 = x15223!=(x15224);
          if (!(x15225)) break; 
          
          GList* x15226 = x15222;
          void* x15227 = g_list_nth_data(x15226, 0);
          struct LINEITEMRecord_PARTRecord* x15228 = (struct LINEITEMRecord_PARTRecord*){x15227};
          GList* x15229 = x15222;
          GList* x15230 = g_list_next(x15229);
          x15222 = x15230;
          int x15232 = x15228->L_SUPPKEY;
          int x15233 = x15232==(x483);
          if(x15233) {
            int x1403 = x15228->L_ORDERKEY;
            int x1404 = x15228->L_PARTKEY;
            int x1405 = x15228->L_LINENUMBER;
            double x1406 = x15228->L_QUANTITY;
            double x1407 = x15228->L_EXTENDEDPRICE;
            double x1408 = x15228->L_DISCOUNT;
            double x1409 = x15228->L_TAX;
            char x1410 = x15228->L_RETURNFLAG;
            char x1411 = x15228->L_LINESTATUS;
            int x1412 = x15228->L_SHIPDATE;
            int x1413 = x15228->L_COMMITDATE;
            int x1414 = x15228->L_RECEIPTDATE;
            char* x1415 = x15228->L_SHIPINSTRUCT;
            char* x1416 = x15228->L_SHIPMODE;
            char* x1417 = x15228->L_COMMENT;
            int x1418 = x15228->P_PARTKEY;
            char* x1419 = x15228->P_NAME;
            char* x1420 = x15228->P_MFGR;
            char* x1421 = x15228->P_BRAND;
            char* x1422 = x15228->P_TYPE;
            int x1423 = x15228->P_SIZE;
            char* x1424 = x15228->P_CONTAINER;
            double x1425 = x15228->P_RETAILPRICE;
            char* x1426 = x15228->P_COMMENT;
            char* x1427 = x481->S_NAME;
            char* x1428 = x481->S_ADDRESS;
            int x1429 = x481->S_NATIONKEY;
            char* x1430 = x481->S_PHONE;
            double x1431 = x481->S_ACCTBAL;
            char* x1432 = x481->S_COMMENT;
            struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x11396 = (struct LINEITEMRecord_PARTRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord_SUPPLIERRecord));
            memset(x11396, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord_SUPPLIERRecord));
            x11396->L_ORDERKEY = x1403; x11396->L_PARTKEY = x1404; x11396->L_SUPPKEY = x15232; x11396->L_LINENUMBER = x1405; x11396->L_QUANTITY = x1406; x11396->L_EXTENDEDPRICE = x1407; x11396->L_DISCOUNT = x1408; x11396->L_TAX = x1409; x11396->L_RETURNFLAG = x1410; x11396->L_LINESTATUS = x1411; x11396->L_SHIPDATE = x1412; x11396->L_COMMITDATE = x1413; x11396->L_RECEIPTDATE = x1414; x11396->L_SHIPINSTRUCT = x1415; x11396->L_SHIPMODE = x1416; x11396->L_COMMENT = x1417; x11396->P_PARTKEY = x1418; x11396->P_NAME = x1419; x11396->P_MFGR = x1420; x11396->P_BRAND = x1421; x11396->P_TYPE = x1422; x11396->P_SIZE = x1423; x11396->P_CONTAINER = x1424; x11396->P_RETAILPRICE = x1425; x11396->P_COMMENT = x1426; x11396->S_SUPPKEY = x483; x11396->S_NAME = x1427; x11396->S_ADDRESS = x1428; x11396->S_NATIONKEY = x1429; x11396->S_PHONE = x1430; x11396->S_ACCTBAL = x1431; x11396->S_COMMENT = x1432;
            int x504 = x11396->S_NATIONKEY;
            void* x12617 = (void*){x504};
            void* x12618 = (void*){x11396};
            void* x12619 = g_hash_table_lookup(x49385, x12617);
            GList** x12620 = (GList**){x12619};
            GList** x12621 = NULL;
            int x12622 = x12620==(x12621);
            /* VAR */ GList** ite40801 = 0;
            if(x12622) {
              GList** x40802 = malloc(8);
              GList* x40803 = NULL;
              pointer_assign(x40802, x40803);
              ite40801 = x40802;
            } else {
              
              ite40801 = x12620;
            };
            GList** x12626 = ite40801;
            GList* x12627 = *(x12626);
            GList* x12628 = g_list_prepend(x12627, x12618);
            pointer_assign(x12626, x12628);
            void* x12630 = (void*){x12626};
            g_hash_table_insert(x49385, x12617, x12630);
          };
        };
      };
      int x3913 = x49415;
      int x512 = x3913+(1);
      x49415 = x512;
    };
    while(1) {
      
      int x49817 = x49414;
      int x49818 = x49817<(x7313);
      if (!(x49818)) break; 
      
      int x3922 = x49414;
      struct NATIONRecord* x521 = x9549[x3922];
      int x523 = x521->N_NATIONKEY;
      void* x12643 = (void*){x523};
      void* x12644 = g_hash_table_lookup(x49385, x12643);
      GList** x12645 = (GList**){x12644};
      int x23704 = x12645!=(NULL);
      if(x23704) {
        GList* x15420 = *(x12645);
        /* VAR */ GList* x15421 = x15420;
        while(1) {
          
          GList* x15422 = x15421;
          GList* x15423 = NULL;
          int x15424 = x15422!=(x15423);
          if (!(x15424)) break; 
          
          GList* x15425 = x15421;
          void* x15426 = g_list_nth_data(x15425, 0);
          struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x15427 = (struct LINEITEMRecord_PARTRecord_SUPPLIERRecord*){x15426};
          GList* x15428 = x15421;
          GList* x15429 = g_list_next(x15428);
          x15421 = x15429;
          int x15431 = x15427->S_NATIONKEY;
          int x15432 = x15431==(x523);
          if(x15432) {
            int x1618 = x15427->L_ORDERKEY;
            int x1619 = x15427->L_PARTKEY;
            int x1620 = x15427->L_SUPPKEY;
            int x1621 = x15427->L_LINENUMBER;
            double x1622 = x15427->L_QUANTITY;
            double x1623 = x15427->L_EXTENDEDPRICE;
            double x1624 = x15427->L_DISCOUNT;
            double x1625 = x15427->L_TAX;
            char x1626 = x15427->L_RETURNFLAG;
            char x1627 = x15427->L_LINESTATUS;
            int x1628 = x15427->L_SHIPDATE;
            int x1629 = x15427->L_COMMITDATE;
            int x1630 = x15427->L_RECEIPTDATE;
            char* x1631 = x15427->L_SHIPINSTRUCT;
            char* x1632 = x15427->L_SHIPMODE;
            char* x1633 = x15427->L_COMMENT;
            int x1634 = x15427->P_PARTKEY;
            char* x1635 = x15427->P_NAME;
            char* x1636 = x15427->P_MFGR;
            char* x1637 = x15427->P_BRAND;
            char* x1638 = x15427->P_TYPE;
            int x1639 = x15427->P_SIZE;
            char* x1640 = x15427->P_CONTAINER;
            double x1641 = x15427->P_RETAILPRICE;
            char* x1642 = x15427->P_COMMENT;
            int x1643 = x15427->S_SUPPKEY;
            char* x1644 = x15427->S_NAME;
            char* x1645 = x15427->S_ADDRESS;
            char* x1646 = x15427->S_PHONE;
            double x1647 = x15427->S_ACCTBAL;
            char* x1648 = x15427->S_COMMENT;
            char* x1649 = x521->N_NAME;
            int x1650 = x521->N_REGIONKEY;
            char* x1651 = x521->N_COMMENT;
            void* x12689 = (void*){x1619};
            void* x12690 = g_hash_table_lookup(x49375, x12689);
            GList** x12691 = (GList**){x12690};
            int x23874 = x12691!=(NULL);
            if(x23874) {
              GList* x15379 = *(x12691);
              /* VAR */ GList* x15380 = x15379;
              while(1) {
                
                GList* x15381 = x15380;
                GList* x15382 = NULL;
                int x15383 = x15381!=(x15382);
                if (!(x15383)) break; 
                
                GList* x15384 = x15380;
                void* x15385 = g_list_nth_data(x15384, 0);
                struct PARTSUPPRecord* x15386 = (struct PARTSUPPRecord*){x15385};
                GList* x15387 = x15380;
                GList* x15388 = g_list_next(x15387);
                x15380 = x15388;
                int x15390 = x15386->PS_PARTKEY;
                int x15391 = x15390==(x1619);
                /* VAR */ int ite44066 = 0;
                if(x15391) {
                  int x50074 = x15386->PS_SUPPKEY;
                  int x50075 = x50074==(x1620);
                  ite44066 = x50075;
                } else {
                  
                  ite44066 = 0;
                };
                int x41055 = ite44066;
                if(x41055) {
                  int x1723 = x15386->PS_SUPPKEY;
                  int x1724 = x15386->PS_AVAILQTY;
                  double x1725 = x15386->PS_SUPPLYCOST;
                  char* x1726 = x15386->PS_COMMENT;
                  struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x11471 = (struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord*)malloc(1 * sizeof(struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord));
                  memset(x11471, 0, 1 * sizeof(struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord));
                  x11471->PS_PARTKEY = x15390; x11471->PS_SUPPKEY = x1723; x11471->PS_AVAILQTY = x1724; x11471->PS_SUPPLYCOST = x1725; x11471->PS_COMMENT = x1726; x11471->L_ORDERKEY = x1618; x11471->L_PARTKEY = x1619; x11471->L_SUPPKEY = x1620; x11471->L_LINENUMBER = x1621; x11471->L_QUANTITY = x1622; x11471->L_EXTENDEDPRICE = x1623; x11471->L_DISCOUNT = x1624; x11471->L_TAX = x1625; x11471->L_RETURNFLAG = x1626; x11471->L_LINESTATUS = x1627; x11471->L_SHIPDATE = x1628; x11471->L_COMMITDATE = x1629; x11471->L_RECEIPTDATE = x1630; x11471->L_SHIPINSTRUCT = x1631; x11471->L_SHIPMODE = x1632; x11471->L_COMMENT = x1633; x11471->P_PARTKEY = x1634; x11471->P_NAME = x1635; x11471->P_MFGR = x1636; x11471->P_BRAND = x1637; x11471->P_TYPE = x1638; x11471->P_SIZE = x1639; x11471->P_CONTAINER = x1640; x11471->P_RETAILPRICE = x1641; x11471->P_COMMENT = x1642; x11471->S_SUPPKEY = x1643; x11471->S_NAME = x1644; x11471->S_ADDRESS = x1645; x11471->S_NATIONKEY = x15431; x11471->S_PHONE = x1646; x11471->S_ACCTBAL = x1647; x11471->S_COMMENT = x1648; x11471->N_NATIONKEY = x523; x11471->N_NAME = x1649; x11471->N_REGIONKEY = x1650; x11471->N_COMMENT = x1651;
                  int x606 = x11471->L_ORDERKEY;
                  void* x12712 = (void*){x606};
                  void* x12713 = (void*){x11471};
                  void* x12714 = g_hash_table_lookup(x49365, x12712);
                  GList** x12715 = (GList**){x12714};
                  GList** x12716 = NULL;
                  int x12717 = x12715==(x12716);
                  /* VAR */ GList** ite41072 = 0;
                  if(x12717) {
                    GList** x41073 = malloc(8);
                    GList* x41074 = NULL;
                    pointer_assign(x41073, x41074);
                    ite41072 = x41073;
                  } else {
                    
                    ite41072 = x12715;
                  };
                  GList** x12721 = ite41072;
                  GList* x12722 = *(x12721);
                  GList* x12723 = g_list_prepend(x12722, x12713);
                  pointer_assign(x12721, x12723);
                  void* x12725 = (void*){x12721};
                  g_hash_table_insert(x49365, x12712, x12725);
                };
              };
            };
          };
        };
      };
      int x4090 = x49414;
      int x618 = x4090+(1);
      x49414 = x618;
    };
    while(1) {
      
      int x50113 = x49419;
      int x50114 = x50113<(x7391);
      if (!(x50114)) break; 
      
      int x4099 = x49419;
      struct ORDERSRecord* x627 = x9625[x4099];
      int x629 = x627->O_ORDERKEY;
      void* x12739 = (void*){x629};
      void* x12740 = g_hash_table_lookup(x49365, x12739);
      GList** x12741 = (GList**){x12740};
      int x23961 = x12741!=(NULL);
      if(x23961) {
        GList* x15651 = *(x12741);
        /* VAR */ GList* x15652 = x15651;
        while(1) {
          
          GList* x15653 = x15652;
          GList* x15654 = NULL;
          int x15655 = x15653!=(x15654);
          if (!(x15655)) break; 
          
          GList* x15656 = x15652;
          void* x15657 = g_list_nth_data(x15656, 0);
          struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x15658 = (struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord*){x15657};
          GList* x15659 = x15652;
          GList* x15660 = g_list_next(x15659);
          x15652 = x15660;
          int x15662 = x15658->L_ORDERKEY;
          int x15663 = x15662==(x629);
          if(x15663) {
            int x1885 = x15658->PS_PARTKEY;
            int x1886 = x15658->PS_SUPPKEY;
            int x1887 = x15658->PS_AVAILQTY;
            double x1888 = x15658->PS_SUPPLYCOST;
            char* x1889 = x15658->PS_COMMENT;
            int x1890 = x15658->L_PARTKEY;
            int x1891 = x15658->L_SUPPKEY;
            int x1892 = x15658->L_LINENUMBER;
            double x1893 = x15658->L_QUANTITY;
            double x1894 = x15658->L_EXTENDEDPRICE;
            double x1895 = x15658->L_DISCOUNT;
            double x1896 = x15658->L_TAX;
            char x1897 = x15658->L_RETURNFLAG;
            char x1898 = x15658->L_LINESTATUS;
            int x1899 = x15658->L_SHIPDATE;
            int x1900 = x15658->L_COMMITDATE;
            int x1901 = x15658->L_RECEIPTDATE;
            char* x1902 = x15658->L_SHIPINSTRUCT;
            char* x1903 = x15658->L_SHIPMODE;
            char* x1904 = x15658->L_COMMENT;
            int x1905 = x15658->P_PARTKEY;
            char* x1906 = x15658->P_NAME;
            char* x1907 = x15658->P_MFGR;
            char* x1908 = x15658->P_BRAND;
            char* x1909 = x15658->P_TYPE;
            int x1910 = x15658->P_SIZE;
            char* x1911 = x15658->P_CONTAINER;
            double x1912 = x15658->P_RETAILPRICE;
            char* x1913 = x15658->P_COMMENT;
            int x1914 = x15658->S_SUPPKEY;
            char* x1915 = x15658->S_NAME;
            char* x1916 = x15658->S_ADDRESS;
            int x1917 = x15658->S_NATIONKEY;
            char* x1918 = x15658->S_PHONE;
            double x1919 = x15658->S_ACCTBAL;
            char* x1920 = x15658->S_COMMENT;
            int x1921 = x15658->N_NATIONKEY;
            char* x1922 = x15658->N_NAME;
            int x1923 = x15658->N_REGIONKEY;
            char* x1924 = x15658->N_COMMENT;
            int x1925 = x627->O_CUSTKEY;
            char x1926 = x627->O_ORDERSTATUS;
            double x1927 = x627->O_TOTALPRICE;
            int x1928 = x627->O_ORDERDATE;
            char* x1929 = x627->O_ORDERPRIORITY;
            char* x1930 = x627->O_CLERK;
            int x1931 = x627->O_SHIPPRIORITY;
            char* x1932 = x627->O_COMMENT;
            struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord_ORDERSRecord* x11545 = (struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord_ORDERSRecord*)malloc(1 * sizeof(struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord_ORDERSRecord));
            memset(x11545, 0, 1 * sizeof(struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord_ORDERSRecord));
            x11545->PS_PARTKEY = x1885; x11545->PS_SUPPKEY = x1886; x11545->PS_AVAILQTY = x1887; x11545->PS_SUPPLYCOST = x1888; x11545->PS_COMMENT = x1889; x11545->L_ORDERKEY = x15662; x11545->L_PARTKEY = x1890; x11545->L_SUPPKEY = x1891; x11545->L_LINENUMBER = x1892; x11545->L_QUANTITY = x1893; x11545->L_EXTENDEDPRICE = x1894; x11545->L_DISCOUNT = x1895; x11545->L_TAX = x1896; x11545->L_RETURNFLAG = x1897; x11545->L_LINESTATUS = x1898; x11545->L_SHIPDATE = x1899; x11545->L_COMMITDATE = x1900; x11545->L_RECEIPTDATE = x1901; x11545->L_SHIPINSTRUCT = x1902; x11545->L_SHIPMODE = x1903; x11545->L_COMMENT = x1904; x11545->P_PARTKEY = x1905; x11545->P_NAME = x1906; x11545->P_MFGR = x1907; x11545->P_BRAND = x1908; x11545->P_TYPE = x1909; x11545->P_SIZE = x1910; x11545->P_CONTAINER = x1911; x11545->P_RETAILPRICE = x1912; x11545->P_COMMENT = x1913; x11545->S_SUPPKEY = x1914; x11545->S_NAME = x1915; x11545->S_ADDRESS = x1916; x11545->S_NATIONKEY = x1917; x11545->S_PHONE = x1918; x11545->S_ACCTBAL = x1919; x11545->S_COMMENT = x1920; x11545->N_NATIONKEY = x1921; x11545->N_NAME = x1922; x11545->N_REGIONKEY = x1923; x11545->N_COMMENT = x1924; x11545->O_ORDERKEY = x629; x11545->O_CUSTKEY = x1925; x11545->O_ORDERSTATUS = x1926; x11545->O_TOTALPRICE = x1927; x11545->O_ORDERDATE = x1928; x11545->O_ORDERPRIORITY = x1929; x11545->O_CLERK = x1930; x11545->O_SHIPPRIORITY = x1931; x11545->O_COMMENT = x1932;
            char* x684 = x11545->N_NAME;
            int x685 = x11545->O_ORDERDATE;
            int x6751 = x685/(10000);
            struct Q9GRPRecord* x11551 = (struct Q9GRPRecord*)malloc(1 * sizeof(struct Q9GRPRecord));
            memset(x11551, 0, 1 * sizeof(struct Q9GRPRecord));
            x11551->NATION = x684; x11551->O_YEAR = x6751;
            void* x15722 = g_hash_table_lookup(x49355, x11551);
            int x15628 = x15722==(NULL);
            /* VAR */ struct AGGRecord_Q9GRPRecord* ite41260 = 0;
            if(x15628) {
              double* x41261 = (double*)malloc(1 * sizeof(double));
              memset(x41261, 0, 1 * sizeof(double));
              struct AGGRecord_Q9GRPRecord* x41262 = (struct AGGRecord_Q9GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q9GRPRecord));
              memset(x41262, 0, 1 * sizeof(struct AGGRecord_Q9GRPRecord));
              x41262->key = x11551; x41262->aggs = x41261;
              g_hash_table_insert(x49355, x11551, x41262);
              ite41260 = x41262;
            } else {
              
              ite41260 = x15722;
            };
            struct AGGRecord_Q9GRPRecord* x15638 = ite41260;
            double* x692 = x15638->aggs;
            double x706 = x692[0];
            double x707 = x11545->L_EXTENDEDPRICE;
            double x708 = x11545->L_DISCOUNT;
            double x709 = 1.0-(x708);
            double x710 = x707*(x709);
            double x711 = x706+(x710);
            double x712 = x11545->PS_SUPPLYCOST;
            double x713 = x11545->L_QUANTITY;
            double x714 = x712*(x713);
            double x715 = x711-(x714);
            *x692 = x715;
          };
        };
      };
      int x4291 = x49419;
      int x726 = x4291+(1);
      x49419 = x726;
    };
    GList* x50314 = g_hash_table_get_keys(x49355);
    /* VAR */ GList* x50315 = x50314;
    int x50316 = g_hash_table_size(x49355);
    int x35915 = 0;
    for(; x35915 < x50316 ; x35915 += 1) {
      
      GList* x35916 = x50315;
      void* x35917 = g_list_nth_data(x35916, 0);
      GList* x35918 = g_list_next(x35916);
      x50315 = x35918;
      void* x35920 = g_hash_table_lookup(x49355, x35917);
      struct AGGRecord_Q9GRPRecord* x35922 = (struct AGGRecord_Q9GRPRecord*){x35920};
      g_tree_insert(x49483, x35922, x35922);
    };
    while(1) {
      
      int x4300 = x49484;
      int x737 = !(x4300);
      /* VAR */ int ite44335 = 0;
      if(x737) {
        int x50341 = g_tree_nnodes(x49483);
        int x50342 = x50341!=(0);
        ite44335 = x50342;
      } else {
        
        ite44335 = 0;
      };
      int x41315 = ite44335;
      if (!(x41315)) break; 
      
      void* x15773 = NULL;
      void** x15781 = &(x15773);
      g_tree_foreach(x49483, x15780, x15781);
      struct AGGRecord_Q9GRPRecord* x15783 = (struct AGGRecord_Q9GRPRecord*){x15773};
      int x15784 = g_tree_remove(x49483, x15783);
      if(0) {
        x49484 = 1;
      } else {
        
        struct Q9GRPRecord* x750 = x15783->key;
        char* x751 = x750->NATION;
        int x753 = x750->O_YEAR;
        double* x754 = x15783->aggs;
        double x755 = x754[0];
        printf("%s|%d|%.4f\n", x751, x753, x755);
        int x4320 = x49485;
        int x758 = x4320+(1);
        x49485 = x758;
      };
    };
    int x50370 = x49485;
    printf("(%d rows)\n", x50370);
    struct timeval* x50372 = &x49411;
    gettimeofday(x50372, NULL);
    struct timeval* x50374 = &x49407;
    struct timeval* x50375 = &x49411;
    struct timeval* x50376 = &x49409;
    long x50377 = timeval_subtract(x50374, x50375, x50376);
    printf("Generated code run in %ld milliseconds.\n", x50377);
  };
}
/* ----------- FUNCTIONS ----------- */
int x49318(struct Q9GRPRecord* x14870) {
  char* x26621 = x14870->NATION;
  int x31667 = strlen(x26621);
  /* VAR */ int x28301 = 0;
  /* VAR */ int x28302 = 0;
  while(1) {
    
    int x28303 = x28301;
    int x28304 = x28303<(x31667);
    if (!(x28304)) break; 
    
    int x28305 = x28302;
    int x28306 = x28301;
    char* x31675 = pointer_add(x26621, x28306);
    char x31676 = *(x31675);
    int x28309 = x28305+(x31676);
    x28302 = x28309;
    int x28311 = x28301;
    int x28312 = x28311+(1);
    x28301 = x28312;
  };
  int x28315 = x28302;
  int x26623 = x14870->O_YEAR;
  int x26625 = x28315+(x26623);
  return x26625; 
}

int x49339(struct Q9GRPRecord* x14875, struct Q9GRPRecord* x14876) {
  char* x26629 = x14875->NATION;
  char* x26630 = x14876->NATION;
  int x28323 = strcmp(x26629, x26630);
  int x28324 = !(x28323);
  int x26632 = x14875->O_YEAR;
  int x26633 = x14876->O_YEAR;
  int x26634 = x26632==(x26633);
  /* VAR */ int ite43334 = 0;
  if(x28324) {
    ite43334 = x26634;
  } else {
    
    ite43334 = 0;
  };
  int x40359 = ite43334;
  return x40359; 
}

int x49356(void* x12363) {
  int x12364 = g_direct_hash(x12363);
  return x12364; 
}

int x49359(void* x12366, void* x12367) {
  int x12368 = g_direct_equal(x12366, x12367);
  return x12368; 
}

int x49366(void* x12373) {
  int x12374 = g_direct_hash(x12373);
  return x12374; 
}

int x49369(void* x12376, void* x12377) {
  int x12378 = g_direct_equal(x12376, x12377);
  return x12378; 
}

int x49376(void* x12383) {
  int x12384 = g_direct_hash(x12383);
  return x12384; 
}

int x49379(void* x12386, void* x12387) {
  int x12388 = g_direct_equal(x12386, x12387);
  return x12388; 
}

int x49386(void* x12393) {
  int x12394 = g_direct_hash(x12393);
  return x12394; 
}

int x49389(void* x12396, void* x12397) {
  int x12398 = g_direct_equal(x12396, x12397);
  return x12398; 
}

int x49396(void* x12403) {
  int x12404 = g_direct_hash(x12403);
  return x12404; 
}

int x49399(void* x12406, void* x12407) {
  int x12408 = g_direct_equal(x12406, x12407);
  return x12408; 
}

int x49451(struct AGGRecord_Q9GRPRecord* x374, struct AGGRecord_Q9GRPRecord* x375) {
  struct Q9GRPRecord* x376 = x374->key;
  struct Q9GRPRecord* x377 = x375->key;
  char* x378 = x376->NATION;
  char* x379 = x377->NATION;
  int x31785 = strcmp(x378, x379);
  int x381 = x31785==(0);
  /* VAR */ int ite40466 = 0;
  if(x381) {
    int x40467 = x376->O_YEAR;
    int x40468 = x377->O_YEAR;
    int x40469 = x40467<(x40468);
    /* VAR */ int ite40471 = 0;
    if(x40469) {
      ite40471 = 1;
    } else {
      
      int x40473 = x40467>(x40468);
      /* VAR */ int ite40475 = 0;
      if(x40473) {
        ite40475 = -1;
      } else {
        
        ite40475 = 0;
      };
      int x40474 = ite40475;
      ite40471 = x40474;
    };
    int x40470 = ite40471;
    ite40466 = x40470;
  } else {
    
    ite40466 = x31785;
  };
  int x388 = ite40466;
  return x388; 
}

int x15780(void* x15774, void* x15775, void* x15776) {
  struct AGGRecord_Q9GRPRecord** x15777 = (struct AGGRecord_Q9GRPRecord**){x15776};
  struct AGGRecord_Q9GRPRecord* x15778 = (struct AGGRecord_Q9GRPRecord*){x15775};
  pointer_assign(x15777, x15778);
  return 1; 
}
