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
  double* aggs;
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
  
  


int x36592(struct Q10GRPRecord* x11492);

int x36595(struct Q10GRPRecord* x11497, struct Q10GRPRecord* x11498);

int x36602(void* x9821);

int x36605(void* x9824, void* x9825);

int x36612(void* x9831);

int x36615(void* x9834, void* x9835);

int x36622(void* x9841);

int x36625(void* x9844, void* x9845);

int x36665(struct AGGRecord_Q10GRPRecord* x267, struct AGGRecord_Q10GRPRecord* x268);

int x12219(void* x12213, void* x12214, void* x12215);
/* GLOBAL VARS */

struct timeval x5683;
int main(int argc, char** argv) {
  FILE* x6262 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x6263 = 0;
  int x6264 = x6263;
  int* x6265 = &x6264;
  int x6266 = fscanf(x6262, "%d", x6265);
  pclose(x6262);
  struct LINEITEMRecord** x7782 = (struct LINEITEMRecord**)malloc(x6264 * sizeof(struct LINEITEMRecord*));
  memset(x7782, 0, x6264 * sizeof(struct LINEITEMRecord*));
  int x6270 = O_RDONLY;
  int x6271 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x6270);
  struct stat x6272 = (struct stat){0};
  /* VAR */ struct stat x6273 = x6272;
  struct stat x6274 = x6273;
  struct stat* x6275 = &x6274;
  int x6276 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x6275);
  size_t x6277 = x6275->st_size;
  int x6278 = PROT_READ;
  int x6279 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x6277, x6278, x6279, x6271, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x6264);
    /* VAR */ int ite30583 = 0;
    if(x6) {
      char x35176 = *x3;
      int x35177 = x35176!=('\0');
      ite30583 = x35177;
    } else {
      
      ite30583 = 0;
    };
    int x28448 = ite30583;
    if (!(x28448)) break; 
    
    /* VAR */ int x6287 = 0;
    int x6288 = x6287;
    int* x6289 = &x6288;
    char* x6290 = strntoi_unchecked(x3, x6289);
    x3 = x6290;
    /* VAR */ int x6292 = 0;
    int x6293 = x6292;
    int* x6294 = &x6293;
    char* x6295 = strntoi_unchecked(x3, x6294);
    x3 = x6295;
    /* VAR */ int x6297 = 0;
    int x6298 = x6297;
    int* x6299 = &x6298;
    char* x6300 = strntoi_unchecked(x3, x6299);
    x3 = x6300;
    /* VAR */ int x6302 = 0;
    int x6303 = x6302;
    int* x6304 = &x6303;
    char* x6305 = strntoi_unchecked(x3, x6304);
    x3 = x6305;
    /* VAR */ double x6307 = 0.0;
    double x6308 = x6307;
    double* x6309 = &x6308;
    char* x6310 = strntod_unchecked(x3, x6309);
    x3 = x6310;
    /* VAR */ double x6312 = 0.0;
    double x6313 = x6312;
    double* x6314 = &x6313;
    char* x6315 = strntod_unchecked(x3, x6314);
    x3 = x6315;
    /* VAR */ double x6317 = 0.0;
    double x6318 = x6317;
    double* x6319 = &x6318;
    char* x6320 = strntod_unchecked(x3, x6319);
    x3 = x6320;
    /* VAR */ double x6322 = 0.0;
    double x6323 = x6322;
    double* x6324 = &x6323;
    char* x6325 = strntod_unchecked(x3, x6324);
    x3 = x6325;
    char x6327 = *x3;
    /* VAR */ char x6328 = x6327;
    x3 += 1;
    x3 += 1;
    char x6331 = x6328;
    char x6332 = *x3;
    /* VAR */ char x6333 = x6332;
    x3 += 1;
    x3 += 1;
    char x6336 = x6333;
    /* VAR */ int x6337 = 0;
    int x6338 = x6337;
    int* x6339 = &x6338;
    char* x6340 = strntoi_unchecked(x3, x6339);
    x3 = x6340;
    /* VAR */ int x6342 = 0;
    int x6343 = x6342;
    int* x6344 = &x6343;
    char* x6345 = strntoi_unchecked(x3, x6344);
    x3 = x6345;
    /* VAR */ int x6347 = 0;
    int x6348 = x6347;
    int* x6349 = &x6348;
    char* x6350 = strntoi_unchecked(x3, x6349);
    x3 = x6350;
    int x6352 = x6338*(10000);
    int x6353 = x6343*(100);
    int x6354 = x6352+(x6353);
    int x6355 = x6354+(x6348);
    /* VAR */ int x6356 = 0;
    int x6357 = x6356;
    int* x6358 = &x6357;
    char* x6359 = strntoi_unchecked(x3, x6358);
    x3 = x6359;
    /* VAR */ int x6361 = 0;
    int x6362 = x6361;
    int* x6363 = &x6362;
    char* x6364 = strntoi_unchecked(x3, x6363);
    x3 = x6364;
    /* VAR */ int x6366 = 0;
    int x6367 = x6366;
    int* x6368 = &x6367;
    char* x6369 = strntoi_unchecked(x3, x6368);
    x3 = x6369;
    int x6371 = x6357*(10000);
    int x6372 = x6362*(100);
    int x6373 = x6371+(x6372);
    int x6374 = x6373+(x6367);
    /* VAR */ int x6375 = 0;
    int x6376 = x6375;
    int* x6377 = &x6376;
    char* x6378 = strntoi_unchecked(x3, x6377);
    x3 = x6378;
    /* VAR */ int x6380 = 0;
    int x6381 = x6380;
    int* x6382 = &x6381;
    char* x6383 = strntoi_unchecked(x3, x6382);
    x3 = x6383;
    /* VAR */ int x6385 = 0;
    int x6386 = x6385;
    int* x6387 = &x6386;
    char* x6388 = strntoi_unchecked(x3, x6387);
    x3 = x6388;
    int x6390 = x6376*(10000);
    int x6391 = x6381*(100);
    int x6392 = x6390+(x6391);
    int x6393 = x6392+(x6386);
    char* x7908 = (char*)malloc(26 * sizeof(char));
    memset(x7908, 0, 26 * sizeof(char));
    /* VAR */ char* x6395 = x3;
    while(1) {
      
      char x6396 = *x3;
      int x6397 = x6396!=('|');
      /* VAR */ int ite30704 = 0;
      if(x6397) {
        char x35296 = *x3;
        int x35297 = x35296!=('\n');
        ite30704 = x35297;
      } else {
        
        ite30704 = 0;
      };
      int x28562 = ite30704;
      if (!(x28562)) break; 
      
      x3 += 1;
    };
    char* x6403 = x6395;
    int x6404 = x3 - x6403;
    char* x6405 = x6395;
    char* x6406 = strncpy(x7908, x6405, x6404);
    x3 += 1;
    char* x7926 = (char*)malloc(11 * sizeof(char));
    memset(x7926, 0, 11 * sizeof(char));
    /* VAR */ char* x6414 = x3;
    while(1) {
      
      char x6415 = *x3;
      int x6416 = x6415!=('|');
      /* VAR */ int ite30727 = 0;
      if(x6416) {
        char x35318 = *x3;
        int x35319 = x35318!=('\n');
        ite30727 = x35319;
      } else {
        
        ite30727 = 0;
      };
      int x28578 = ite30727;
      if (!(x28578)) break; 
      
      x3 += 1;
    };
    char* x6422 = x6414;
    int x6423 = x3 - x6422;
    char* x6424 = x6414;
    char* x6425 = strncpy(x7926, x6424, x6423);
    x3 += 1;
    char* x7944 = (char*)malloc(45 * sizeof(char));
    memset(x7944, 0, 45 * sizeof(char));
    /* VAR */ char* x6433 = x3;
    while(1) {
      
      char x6434 = *x3;
      int x6435 = x6434!=('|');
      /* VAR */ int ite30750 = 0;
      if(x6435) {
        char x35340 = *x3;
        int x35341 = x35340!=('\n');
        ite30750 = x35341;
      } else {
        
        ite30750 = 0;
      };
      int x28594 = ite30750;
      if (!(x28594)) break; 
      
      x3 += 1;
    };
    char* x6441 = x6433;
    int x6442 = x3 - x6441;
    char* x6443 = x6433;
    char* x6444 = strncpy(x7944, x6443, x6442);
    x3 += 1;
    struct LINEITEMRecord* x8706 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x8706, 0, 1 * sizeof(struct LINEITEMRecord));
    x8706->L_ORDERKEY = x6288; x8706->L_PARTKEY = x6293; x8706->L_SUPPKEY = x6298; x8706->L_LINENUMBER = x6303; x8706->L_QUANTITY = x6308; x8706->L_EXTENDEDPRICE = x6313; x8706->L_DISCOUNT = x6318; x8706->L_TAX = x6323; x8706->L_RETURNFLAG = x6331; x8706->L_LINESTATUS = x6336; x8706->L_SHIPDATE = x6355; x8706->L_COMMITDATE = x6374; x8706->L_RECEIPTDATE = x6393; x8706->L_SHIPINSTRUCT = x7908; x8706->L_SHIPMODE = x7926; x8706->L_COMMENT = x7944;
    int x47 = x4;
    *(x7782 + x47) = x8706;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x6457 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x6458 = 0;
  int x6459 = x6458;
  int* x6460 = &x6459;
  int x6461 = fscanf(x6457, "%d", x6460);
  pclose(x6457);
  struct NATIONRecord** x7974 = (struct NATIONRecord**)malloc(x6459 * sizeof(struct NATIONRecord*));
  memset(x7974, 0, x6459 * sizeof(struct NATIONRecord*));
  int x6465 = O_RDONLY;
  int x6466 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x6465);
  /* VAR */ struct stat x6467 = x6272;
  struct stat x6468 = x6467;
  struct stat* x6469 = &x6468;
  int x6470 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x6469);
  size_t x6471 = x6469->st_size;
  int x6472 = PROT_READ;
  int x6473 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x6471, x6472, x6473, x6466, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x6459);
    /* VAR */ int ite30797 = 0;
    if(x58) {
      char x35386 = *x55;
      int x35387 = x35386!=('\0');
      ite30797 = x35387;
    } else {
      
      ite30797 = 0;
    };
    int x28634 = ite30797;
    if (!(x28634)) break; 
    
    /* VAR */ int x6481 = 0;
    int x6482 = x6481;
    int* x6483 = &x6482;
    char* x6484 = strntoi_unchecked(x55, x6483);
    x55 = x6484;
    char* x7997 = (char*)malloc(26 * sizeof(char));
    memset(x7997, 0, 26 * sizeof(char));
    /* VAR */ char* x6487 = x55;
    while(1) {
      
      char x6488 = *x55;
      int x6489 = x6488!=('|');
      /* VAR */ int ite30816 = 0;
      if(x6489) {
        char x35404 = *x55;
        int x35405 = x35404!=('\n');
        ite30816 = x35405;
      } else {
        
        ite30816 = 0;
      };
      int x28646 = ite30816;
      if (!(x28646)) break; 
      
      x55 += 1;
    };
    char* x6495 = x6487;
    int x6496 = x55 - x6495;
    char* x6497 = x6487;
    char* x6498 = strncpy(x7997, x6497, x6496);
    x55 += 1;
    /* VAR */ int x6505 = 0;
    int x6506 = x6505;
    int* x6507 = &x6506;
    char* x6508 = strntoi_unchecked(x55, x6507);
    x55 = x6508;
    char* x8020 = (char*)malloc(153 * sizeof(char));
    memset(x8020, 0, 153 * sizeof(char));
    /* VAR */ char* x6511 = x55;
    while(1) {
      
      char x6512 = *x55;
      int x6513 = x6512!=('|');
      /* VAR */ int ite30844 = 0;
      if(x6513) {
        char x35431 = *x55;
        int x35432 = x35431!=('\n');
        ite30844 = x35432;
      } else {
        
        ite30844 = 0;
      };
      int x28667 = ite30844;
      if (!(x28667)) break; 
      
      x55 += 1;
    };
    char* x6519 = x6511;
    int x6520 = x55 - x6519;
    char* x6521 = x6511;
    char* x6522 = strncpy(x8020, x6521, x6520);
    x55 += 1;
    struct NATIONRecord* x8784 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x8784, 0, 1 * sizeof(struct NATIONRecord));
    x8784->N_NATIONKEY = x6482; x8784->N_NAME = x7997; x8784->N_REGIONKEY = x6506; x8784->N_COMMENT = x8020;
    int x80 = x56;
    *(x7974 + x80) = x8784;
    int x82 = x56;
    int x83 = x82+(1);
    x56 = x83;
  };
  FILE* x6535 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x6536 = 0;
  int x6537 = x6536;
  int* x6538 = &x6537;
  int x6539 = fscanf(x6535, "%d", x6538);
  pclose(x6535);
  struct CUSTOMERRecord** x8050 = (struct CUSTOMERRecord**)malloc(x6537 * sizeof(struct CUSTOMERRecord*));
  memset(x8050, 0, x6537 * sizeof(struct CUSTOMERRecord*));
  int x6543 = O_RDONLY;
  int x6544 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x6543);
  /* VAR */ struct stat x6545 = x6272;
  struct stat x6546 = x6545;
  struct stat* x6547 = &x6546;
  int x6548 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x6547);
  size_t x6549 = x6547->st_size;
  int x6550 = PROT_READ;
  int x6551 = MAP_PRIVATE;
  char* x88 = mmap(NULL, x6549, x6550, x6551, x6544, 0);
  /* VAR */ int x89 = 0;
  while(1) {
    
    int x90 = x89;
    int x91 = x90<(x6537);
    /* VAR */ int ite30891 = 0;
    if(x91) {
      char x35477 = *x88;
      int x35478 = x35477!=('\0');
      ite30891 = x35478;
    } else {
      
      ite30891 = 0;
    };
    int x28707 = ite30891;
    if (!(x28707)) break; 
    
    /* VAR */ int x6559 = 0;
    int x6560 = x6559;
    int* x6561 = &x6560;
    char* x6562 = strntoi_unchecked(x88, x6561);
    x88 = x6562;
    char* x8073 = (char*)malloc(26 * sizeof(char));
    memset(x8073, 0, 26 * sizeof(char));
    /* VAR */ char* x6565 = x88;
    while(1) {
      
      char x6566 = *x88;
      int x6567 = x6566!=('|');
      /* VAR */ int ite30910 = 0;
      if(x6567) {
        char x35495 = *x88;
        int x35496 = x35495!=('\n');
        ite30910 = x35496;
      } else {
        
        ite30910 = 0;
      };
      int x28719 = ite30910;
      if (!(x28719)) break; 
      
      x88 += 1;
    };
    char* x6573 = x6565;
    int x6574 = x88 - x6573;
    char* x6575 = x6565;
    char* x6576 = strncpy(x8073, x6575, x6574);
    x88 += 1;
    char* x8091 = (char*)malloc(41 * sizeof(char));
    memset(x8091, 0, 41 * sizeof(char));
    /* VAR */ char* x6584 = x88;
    while(1) {
      
      char x6585 = *x88;
      int x6586 = x6585!=('|');
      /* VAR */ int ite30933 = 0;
      if(x6586) {
        char x35517 = *x88;
        int x35518 = x35517!=('\n');
        ite30933 = x35518;
      } else {
        
        ite30933 = 0;
      };
      int x28735 = ite30933;
      if (!(x28735)) break; 
      
      x88 += 1;
    };
    char* x6592 = x6584;
    int x6593 = x88 - x6592;
    char* x6594 = x6584;
    char* x6595 = strncpy(x8091, x6594, x6593);
    x88 += 1;
    /* VAR */ int x6602 = 0;
    int x6603 = x6602;
    int* x6604 = &x6603;
    char* x6605 = strntoi_unchecked(x88, x6604);
    x88 = x6605;
    char* x8114 = (char*)malloc(16 * sizeof(char));
    memset(x8114, 0, 16 * sizeof(char));
    /* VAR */ char* x6608 = x88;
    while(1) {
      
      char x6609 = *x88;
      int x6610 = x6609!=('|');
      /* VAR */ int ite30961 = 0;
      if(x6610) {
        char x35544 = *x88;
        int x35545 = x35544!=('\n');
        ite30961 = x35545;
      } else {
        
        ite30961 = 0;
      };
      int x28756 = ite30961;
      if (!(x28756)) break; 
      
      x88 += 1;
    };
    char* x6616 = x6608;
    int x6617 = x88 - x6616;
    char* x6618 = x6608;
    char* x6619 = strncpy(x8114, x6618, x6617);
    x88 += 1;
    /* VAR */ double x6626 = 0.0;
    double x6627 = x6626;
    double* x6628 = &x6627;
    char* x6629 = strntod_unchecked(x88, x6628);
    x88 = x6629;
    char* x8137 = (char*)malloc(11 * sizeof(char));
    memset(x8137, 0, 11 * sizeof(char));
    /* VAR */ char* x6632 = x88;
    while(1) {
      
      char x6633 = *x88;
      int x6634 = x6633!=('|');
      /* VAR */ int ite30989 = 0;
      if(x6634) {
        char x35571 = *x88;
        int x35572 = x35571!=('\n');
        ite30989 = x35572;
      } else {
        
        ite30989 = 0;
      };
      int x28777 = ite30989;
      if (!(x28777)) break; 
      
      x88 += 1;
    };
    char* x6640 = x6632;
    int x6641 = x88 - x6640;
    char* x6642 = x6632;
    char* x6643 = strncpy(x8137, x6642, x6641);
    x88 += 1;
    char* x8155 = (char*)malloc(118 * sizeof(char));
    memset(x8155, 0, 118 * sizeof(char));
    /* VAR */ char* x6651 = x88;
    while(1) {
      
      char x6652 = *x88;
      int x6653 = x6652!=('|');
      /* VAR */ int ite31012 = 0;
      if(x6653) {
        char x35593 = *x88;
        int x35594 = x35593!=('\n');
        ite31012 = x35594;
      } else {
        
        ite31012 = 0;
      };
      int x28793 = ite31012;
      if (!(x28793)) break; 
      
      x88 += 1;
    };
    char* x6659 = x6651;
    int x6660 = x88 - x6659;
    char* x6661 = x6651;
    char* x6662 = strncpy(x8155, x6661, x6660);
    x88 += 1;
    struct CUSTOMERRecord* x8921 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x8921, 0, 1 * sizeof(struct CUSTOMERRecord));
    x8921->C_CUSTKEY = x6560; x8921->C_NAME = x8073; x8921->C_ADDRESS = x8091; x8921->C_NATIONKEY = x6603; x8921->C_PHONE = x8114; x8921->C_ACCTBAL = x6627; x8921->C_MKTSEGMENT = x8137; x8921->C_COMMENT = x8155;
    int x138 = x89;
    *(x8050 + x138) = x8921;
    int x140 = x89;
    int x141 = x140+(1);
    x89 = x141;
  };
  FILE* x6675 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x6676 = 0;
  int x6677 = x6676;
  int* x6678 = &x6677;
  int x6679 = fscanf(x6675, "%d", x6678);
  pclose(x6675);
  struct ORDERSRecord** x8185 = (struct ORDERSRecord**)malloc(x6677 * sizeof(struct ORDERSRecord*));
  memset(x8185, 0, x6677 * sizeof(struct ORDERSRecord*));
  int x6683 = O_RDONLY;
  int x6684 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x6683);
  /* VAR */ struct stat x6685 = x6272;
  struct stat x6686 = x6685;
  struct stat* x6687 = &x6686;
  int x6688 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x6687);
  size_t x6689 = x6687->st_size;
  int x6690 = PROT_READ;
  int x6691 = MAP_PRIVATE;
  char* x146 = mmap(NULL, x6689, x6690, x6691, x6684, 0);
  /* VAR */ int x147 = 0;
  while(1) {
    
    int x148 = x147;
    int x149 = x148<(x6677);
    /* VAR */ int ite31059 = 0;
    if(x149) {
      char x35639 = *x146;
      int x35640 = x35639!=('\0');
      ite31059 = x35640;
    } else {
      
      ite31059 = 0;
    };
    int x28833 = ite31059;
    if (!(x28833)) break; 
    
    /* VAR */ int x6699 = 0;
    int x6700 = x6699;
    int* x6701 = &x6700;
    char* x6702 = strntoi_unchecked(x146, x6701);
    x146 = x6702;
    /* VAR */ int x6704 = 0;
    int x6705 = x6704;
    int* x6706 = &x6705;
    char* x6707 = strntoi_unchecked(x146, x6706);
    x146 = x6707;
    char x6709 = *x146;
    /* VAR */ char x6710 = x6709;
    x146 += 1;
    x146 += 1;
    char x6713 = x6710;
    /* VAR */ double x6714 = 0.0;
    double x6715 = x6714;
    double* x6716 = &x6715;
    char* x6717 = strntod_unchecked(x146, x6716);
    x146 = x6717;
    /* VAR */ int x6719 = 0;
    int x6720 = x6719;
    int* x6721 = &x6720;
    char* x6722 = strntoi_unchecked(x146, x6721);
    x146 = x6722;
    /* VAR */ int x6724 = 0;
    int x6725 = x6724;
    int* x6726 = &x6725;
    char* x6727 = strntoi_unchecked(x146, x6726);
    x146 = x6727;
    /* VAR */ int x6729 = 0;
    int x6730 = x6729;
    int* x6731 = &x6730;
    char* x6732 = strntoi_unchecked(x146, x6731);
    x146 = x6732;
    int x6734 = x6720*(10000);
    int x6735 = x6725*(100);
    int x6736 = x6734+(x6735);
    int x6737 = x6736+(x6730);
    char* x8242 = (char*)malloc(16 * sizeof(char));
    memset(x8242, 0, 16 * sizeof(char));
    /* VAR */ char* x6739 = x146;
    while(1) {
      
      char x6740 = *x146;
      int x6741 = x6740!=('|');
      /* VAR */ int ite31112 = 0;
      if(x6741) {
        char x35691 = *x146;
        int x35692 = x35691!=('\n');
        ite31112 = x35692;
      } else {
        
        ite31112 = 0;
      };
      int x28879 = ite31112;
      if (!(x28879)) break; 
      
      x146 += 1;
    };
    char* x6747 = x6739;
    int x6748 = x146 - x6747;
    char* x6749 = x6739;
    char* x6750 = strncpy(x8242, x6749, x6748);
    x146 += 1;
    char* x8260 = (char*)malloc(16 * sizeof(char));
    memset(x8260, 0, 16 * sizeof(char));
    /* VAR */ char* x6758 = x146;
    while(1) {
      
      char x6759 = *x146;
      int x6760 = x6759!=('|');
      /* VAR */ int ite31135 = 0;
      if(x6760) {
        char x35713 = *x146;
        int x35714 = x35713!=('\n');
        ite31135 = x35714;
      } else {
        
        ite31135 = 0;
      };
      int x28895 = ite31135;
      if (!(x28895)) break; 
      
      x146 += 1;
    };
    char* x6766 = x6758;
    int x6767 = x146 - x6766;
    char* x6768 = x6758;
    char* x6769 = strncpy(x8260, x6768, x6767);
    x146 += 1;
    /* VAR */ int x6776 = 0;
    int x6777 = x6776;
    int* x6778 = &x6777;
    char* x6779 = strntoi_unchecked(x146, x6778);
    x146 = x6779;
    char* x8283 = (char*)malloc(80 * sizeof(char));
    memset(x8283, 0, 80 * sizeof(char));
    /* VAR */ char* x6782 = x146;
    while(1) {
      
      char x6783 = *x146;
      int x6784 = x6783!=('|');
      /* VAR */ int ite31163 = 0;
      if(x6784) {
        char x35740 = *x146;
        int x35741 = x35740!=('\n');
        ite31163 = x35741;
      } else {
        
        ite31163 = 0;
      };
      int x28916 = ite31163;
      if (!(x28916)) break; 
      
      x146 += 1;
    };
    char* x6790 = x6782;
    int x6791 = x146 - x6790;
    char* x6792 = x6782;
    char* x6793 = strncpy(x8283, x6792, x6791);
    x146 += 1;
    struct ORDERSRecord* x9051 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x9051, 0, 1 * sizeof(struct ORDERSRecord));
    x9051->O_ORDERKEY = x6700; x9051->O_CUSTKEY = x6705; x9051->O_ORDERSTATUS = x6713; x9051->O_TOTALPRICE = x6715; x9051->O_ORDERDATE = x6737; x9051->O_ORDERPRIORITY = x8242; x9051->O_CLERK = x8260; x9051->O_SHIPPRIORITY = x6777; x9051->O_COMMENT = x8283;
    int x182 = x147;
    *(x8185 + x182) = x9051;
    int x184 = x147;
    int x185 = x184+(1);
    x147 = x185;
  };
  int x189 = 0;
  for(; x189 < 1 ; x189 += 1) {
    
    GHashTable* x36601 = g_hash_table_new(x36592, x36595);
    void*** x36609 = (void***){x36602};
    int* x36610 = (int*){x36605};
    GHashTable* x36611 = g_hash_table_new(x36609, x36610);
    void*** x36619 = (void***){x36612};
    int* x36620 = (int*){x36615};
    GHashTable* x36621 = g_hash_table_new(x36619, x36620);
    void*** x36629 = (void***){x36622};
    int* x36630 = (int*){x36625};
    GHashTable* x36631 = g_hash_table_new(x36629, x36630);
    /* VAR */ struct timeval x36632 = x5683;
    struct timeval x36633 = x36632;
    /* VAR */ struct timeval x36634 = x5683;
    struct timeval x36635 = x36634;
    /* VAR */ struct timeval x36636 = x5683;
    struct timeval x36637 = x36636;
    struct timeval* x36638 = &x36635;
    gettimeofday(x36638, NULL);
    /* VAR */ int x36640 = 0;
    /* VAR */ int x36641 = 0;
    /* VAR */ int x36642 = 0;
    /* VAR */ int x36643 = 0;
    int* x36686 = &(x36665);
    GTree* x36687 = g_tree_new(x36686);
    /* VAR */ int x36688 = 0;
    /* VAR */ int x36689 = 0;
    while(1) {
      
      int x36691 = x36642;
      int x36692 = x36691<(x6459);
      if (!(x36692)) break; 
      
      int x3900 = x36642;
      struct NATIONRecord* x304 = x7974[x3900];
      int x306 = x304->N_NATIONKEY;
      void* x9885 = (void*){x306};
      void* x9886 = (void*){x304};
      void* x9887 = g_hash_table_lookup(x36611, x9885);
      GList** x9888 = (GList**){x9887};
      GList** x9889 = NULL;
      int x9890 = x9888==(x9889);
      /* VAR */ GList** ite29859 = 0;
      if(x9890) {
        GList** x29860 = malloc(8);
        GList* x29861 = NULL;
        pointer_assign(x29860, x29861);
        ite29859 = x29860;
      } else {
        
        ite29859 = x9888;
      };
      GList** x9894 = ite29859;
      GList* x9895 = *(x9894);
      GList* x9896 = g_list_prepend(x9895, x9886);
      pointer_assign(x9894, x9896);
      void* x9898 = (void*){x9894};
      g_hash_table_insert(x36611, x9885, x9898);
      int x3905 = x36642;
      int x310 = x3905+(1);
      x36642 = x310;
    };
    while(1) {
      
      int x36720 = x36641;
      int x36721 = x36720<(x6537);
      if (!(x36721)) break; 
      
      int x3914 = x36641;
      struct CUSTOMERRecord* x319 = x8050[x3914];
      int x321 = x319->C_CUSTKEY;
      void* x9910 = (void*){x321};
      void* x9911 = (void*){x319};
      void* x9912 = g_hash_table_lookup(x36621, x9910);
      GList** x9913 = (GList**){x9912};
      GList** x9914 = NULL;
      int x9915 = x9913==(x9914);
      /* VAR */ GList** ite29887 = 0;
      if(x9915) {
        GList** x29888 = malloc(8);
        GList* x29889 = NULL;
        pointer_assign(x29888, x29889);
        ite29887 = x29888;
      } else {
        
        ite29887 = x9913;
      };
      GList** x9919 = ite29887;
      GList* x9920 = *(x9919);
      GList* x9921 = g_list_prepend(x9920, x9911);
      pointer_assign(x9919, x9921);
      void* x9923 = (void*){x9919};
      g_hash_table_insert(x36621, x9910, x9923);
      int x3919 = x36641;
      int x325 = x3919+(1);
      x36641 = x325;
    };
    while(1) {
      
      int x36749 = x36643;
      int x36750 = x36749<(x6264);
      if (!(x36750)) break; 
      
      int x3928 = x36643;
      struct LINEITEMRecord* x334 = x7782[x3928];
      char x336 = x334->L_RETURNFLAG;
      int x337 = x336==('R');
      if(x337) {
        int x338 = x334->L_ORDERKEY;
        void* x9938 = (void*){x338};
        void* x9939 = (void*){x334};
        void* x9940 = g_hash_table_lookup(x36631, x9938);
        GList** x9941 = (GList**){x9940};
        GList** x9942 = NULL;
        int x9943 = x9941==(x9942);
        /* VAR */ GList** ite29918 = 0;
        if(x9943) {
          GList** x29919 = malloc(8);
          GList* x29920 = NULL;
          pointer_assign(x29919, x29920);
          ite29918 = x29919;
        } else {
          
          ite29918 = x9941;
        };
        GList** x9947 = ite29918;
        GList* x9948 = *(x9947);
        GList* x9949 = g_list_prepend(x9948, x9939);
        pointer_assign(x9947, x9949);
        void* x9951 = (void*){x9947};
        g_hash_table_insert(x36631, x9938, x9951);
      };
      int x3936 = x36643;
      int x343 = x3936+(1);
      x36643 = x343;
    };
    while(1) {
      
      int x36781 = x36640;
      int x36782 = x36781<(x6677);
      if (!(x36782)) break; 
      
      int x3945 = x36640;
      struct ORDERSRecord* x352 = x8185[x3945];
      int x354 = x352->O_ORDERDATE;
      int x355 = x354>=(19941101);
      /* VAR */ int ite32224 = 0;
      if(x355) {
        int x36789 = x354<(19950201);
        ite32224 = x36789;
      } else {
        
        ite32224 = 0;
      };
      int x29941 = ite32224;
      if(x29941) {
        int x358 = x352->O_ORDERKEY;
        void* x9968 = (void*){x358};
        void* x9969 = g_hash_table_lookup(x36631, x9968);
        GList** x9970 = (GList**){x9969};
        int x18164 = x9970!=(NULL);
        if(x18164) {
          GList* x11922 = *(x9970);
          /* VAR */ GList* x11923 = x11922;
          while(1) {
            
            GList* x11924 = x11923;
            GList* x11925 = NULL;
            int x11926 = x11924!=(x11925);
            if (!(x11926)) break; 
            
            GList* x11927 = x11923;
            void* x11928 = g_list_nth_data(x11927, 0);
            struct LINEITEMRecord* x11929 = (struct LINEITEMRecord*){x11928};
            GList* x11930 = x11923;
            GList* x11931 = g_list_next(x11930);
            x11923 = x11931;
            int x11933 = x11929->L_ORDERKEY;
            int x11934 = x11933==(x358);
            if(x11934) {
              int x1721 = x11929->L_PARTKEY;
              int x1722 = x11929->L_SUPPKEY;
              int x1723 = x11929->L_LINENUMBER;
              double x1724 = x11929->L_QUANTITY;
              double x1725 = x11929->L_EXTENDEDPRICE;
              double x1726 = x11929->L_DISCOUNT;
              double x1727 = x11929->L_TAX;
              char x1728 = x11929->L_RETURNFLAG;
              char x1729 = x11929->L_LINESTATUS;
              int x1730 = x11929->L_SHIPDATE;
              int x1731 = x11929->L_COMMITDATE;
              int x1732 = x11929->L_RECEIPTDATE;
              char* x1733 = x11929->L_SHIPINSTRUCT;
              char* x1734 = x11929->L_SHIPMODE;
              char* x1735 = x11929->L_COMMENT;
              int x1736 = x352->O_CUSTKEY;
              char x1737 = x352->O_ORDERSTATUS;
              double x1738 = x352->O_TOTALPRICE;
              char* x1739 = x352->O_ORDERPRIORITY;
              char* x1740 = x352->O_CLERK;
              int x1741 = x352->O_SHIPPRIORITY;
              char* x1742 = x352->O_COMMENT;
              void* x10002 = (void*){x1736};
              void* x10003 = g_hash_table_lookup(x36621, x10002);
              GList** x10004 = (GList**){x10003};
              int x18450 = x10004!=(NULL);
              if(x18450) {
                GList* x11809 = *(x10004);
                /* VAR */ GList* x11810 = x11809;
                while(1) {
                  
                  GList* x11811 = x11810;
                  GList* x11812 = NULL;
                  int x11813 = x11811!=(x11812);
                  if (!(x11813)) break; 
                  
                  GList* x11814 = x11810;
                  void* x11815 = g_list_nth_data(x11814, 0);
                  struct CUSTOMERRecord* x11816 = (struct CUSTOMERRecord*){x11815};
                  GList* x11817 = x11810;
                  GList* x11818 = g_list_next(x11817);
                  x11810 = x11818;
                  int x11820 = x11816->C_CUSTKEY;
                  int x11821 = x11820==(x1736);
                  if(x11821) {
                    char* x1961 = x11816->C_NAME;
                    char* x1962 = x11816->C_ADDRESS;
                    int x1963 = x11816->C_NATIONKEY;
                    char* x1964 = x11816->C_PHONE;
                    double x1965 = x11816->C_ACCTBAL;
                    char* x1966 = x11816->C_MKTSEGMENT;
                    char* x1967 = x11816->C_COMMENT;
                    void* x10021 = (void*){x1963};
                    void* x10022 = g_hash_table_lookup(x36611, x10021);
                    GList** x10023 = (GList**){x10022};
                    int x18578 = x10023!=(NULL);
                    if(x18578) {
                      GList* x11762 = *(x10023);
                      /* VAR */ GList* x11763 = x11762;
                      while(1) {
                        
                        GList* x11764 = x11763;
                        GList* x11765 = NULL;
                        int x11766 = x11764!=(x11765);
                        if (!(x11766)) break; 
                        
                        GList* x11767 = x11763;
                        void* x11768 = g_list_nth_data(x11767, 0);
                        struct NATIONRecord* x11769 = (struct NATIONRecord*){x11768};
                        GList* x11770 = x11763;
                        GList* x11771 = g_list_next(x11770);
                        x11763 = x11771;
                        int x11773 = x11769->N_NATIONKEY;
                        int x11774 = x11773==(x1963);
                        if(x11774) {
                          char* x2085 = x11769->N_NAME;
                          int x2086 = x11769->N_REGIONKEY;
                          char* x2087 = x11769->N_COMMENT;
                          struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord* x9200 = (struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord*)malloc(1 * sizeof(struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord));
                          memset(x9200, 0, 1 * sizeof(struct NATIONRecord_CUSTOMERRecord_LINEITEMRecord_ORDERSRecord));
                          x9200->N_NATIONKEY = x11773; x9200->N_NAME = x2085; x9200->N_REGIONKEY = x2086; x9200->N_COMMENT = x2087; x9200->C_CUSTKEY = x11820; x9200->C_NAME = x1961; x9200->C_ADDRESS = x1962; x9200->C_NATIONKEY = x1963; x9200->C_PHONE = x1964; x9200->C_ACCTBAL = x1965; x9200->C_MKTSEGMENT = x1966; x9200->C_COMMENT = x1967; x9200->L_ORDERKEY = x11933; x9200->L_PARTKEY = x1721; x9200->L_SUPPKEY = x1722; x9200->L_LINENUMBER = x1723; x9200->L_QUANTITY = x1724; x9200->L_EXTENDEDPRICE = x1725; x9200->L_DISCOUNT = x1726; x9200->L_TAX = x1727; x9200->L_RETURNFLAG = x1728; x9200->L_LINESTATUS = x1729; x9200->L_SHIPDATE = x1730; x9200->L_COMMITDATE = x1731; x9200->L_RECEIPTDATE = x1732; x9200->L_SHIPINSTRUCT = x1733; x9200->L_SHIPMODE = x1734; x9200->L_COMMENT = x1735; x9200->O_ORDERKEY = x358; x9200->O_CUSTKEY = x1736; x9200->O_ORDERSTATUS = x1737; x9200->O_TOTALPRICE = x1738; x9200->O_ORDERDATE = x354; x9200->O_ORDERPRIORITY = x1739; x9200->O_CLERK = x1740; x9200->O_SHIPPRIORITY = x1741; x9200->O_COMMENT = x1742;
                          int x759 = x9200->C_CUSTKEY;
                          char* x760 = x9200->C_NAME;
                          double x761 = x9200->C_ACCTBAL;
                          char* x762 = x9200->C_PHONE;
                          char* x763 = x9200->N_NAME;
                          char* x764 = x9200->C_ADDRESS;
                          char* x765 = x9200->C_COMMENT;
                          struct Q10GRPRecord* x9210 = (struct Q10GRPRecord*)malloc(1 * sizeof(struct Q10GRPRecord));
                          memset(x9210, 0, 1 * sizeof(struct Q10GRPRecord));
                          x9210->C_CUSTKEY = x759; x9210->C_NAME = x760; x9210->C_ACCTBAL = x761; x9210->C_PHONE = x762; x9210->N_NAME = x763; x9210->C_ADDRESS = x764; x9210->C_COMMENT = x765;
                          void* x11792 = g_hash_table_lookup(x36601, x9210);
                          int x11743 = x11792==(NULL);
                          /* VAR */ struct AGGRecord_Q10GRPRecord* ite30469 = 0;
                          if(x11743) {
                            double* x30470 = (double*)malloc(1 * sizeof(double));
                            memset(x30470, 0, 1 * sizeof(double));
                            struct AGGRecord_Q10GRPRecord* x30471 = (struct AGGRecord_Q10GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q10GRPRecord));
                            memset(x30471, 0, 1 * sizeof(struct AGGRecord_Q10GRPRecord));
                            x30471->key = x9210; x30471->aggs = x30470;
                            g_hash_table_insert(x36601, x9210, x30471);
                            ite30469 = x30471;
                          } else {
                            
                            ite30469 = x11792;
                          };
                          struct AGGRecord_Q10GRPRecord* x11753 = ite30469;
                          double* x771 = x11753->aggs;
                          double x785 = x771[0];
                          double x786 = x9200->L_EXTENDEDPRICE;
                          double x787 = x9200->L_DISCOUNT;
                          double x788 = 1.0-(x787);
                          double x789 = x786*(x788);
                          double x790 = x785+(x789);
                          *x771 = x790;
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
      int x4478 = x36640;
      int x810 = x4478+(1);
      x36640 = x810;
    };
    GList* x37346 = g_hash_table_get_keys(x36601);
    /* VAR */ GList* x37347 = x37346;
    int x37348 = g_hash_table_size(x36601);
    int x26349 = 0;
    for(; x26349 < x37348 ; x26349 += 1) {
      
      GList* x26350 = x37347;
      void* x26351 = g_list_nth_data(x26350, 0);
      GList* x26352 = g_list_next(x26350);
      x37347 = x26352;
      void* x26354 = g_hash_table_lookup(x36601, x26351);
      struct AGGRecord_Q10GRPRecord* x26356 = (struct AGGRecord_Q10GRPRecord*){x26354};
      g_tree_insert(x36687, x26356, x26356);
    };
    while(1) {
      
      int x4488 = x36688;
      int x822 = !(x4488);
      /* VAR */ int ite32809 = 0;
      if(x822) {
        int x37373 = g_tree_nnodes(x36687);
        int x37374 = x37373!=(0);
        ite32809 = x37374;
      } else {
        
        ite32809 = 0;
      };
      int x30520 = ite32809;
      if (!(x30520)) break; 
      
      void* x12212 = NULL;
      void** x12220 = &(x12212);
      g_tree_foreach(x36687, x12219, x12220);
      struct AGGRecord_Q10GRPRecord* x12222 = (struct AGGRecord_Q10GRPRecord*){x12212};
      int x12223 = g_tree_remove(x36687, x12222);
      int x4496 = x36689;
      int x832 = x4496>=(20);
      if(x832) {
        x36688 = 1;
      } else {
        
        struct Q10GRPRecord* x834 = x12222->key;
        int x835 = x834->C_CUSTKEY;
        char* x836 = x834->C_NAME;
        double* x838 = x12222->aggs;
        double x839 = x838[0];
        double x840 = x834->C_ACCTBAL;
        char* x841 = x834->N_NAME;
        char* x843 = x834->C_ADDRESS;
        char* x845 = x834->C_PHONE;
        char* x847 = x834->C_COMMENT;
        printf("%d|%s|%.4f|%.2f|%s|%s|%s|%s\n", x835, x836, x839, x840, x841, x843, x845, x847);
        int x4516 = x36689;
        int x851 = x4516+(1);
        x36689 = x851;
      };
    };
    int x37409 = x36689;
    printf("(%d rows)\n", x37409);
    struct timeval* x37411 = &x36637;
    gettimeofday(x37411, NULL);
    struct timeval* x37413 = &x36633;
    struct timeval* x37414 = &x36637;
    struct timeval* x37415 = &x36635;
    long x37416 = timeval_subtract(x37413, x37414, x37415);
    printf("Generated code run in %ld milliseconds.\n", x37416);
  };
}
/* ----------- FUNCTIONS ----------- */
int x36592(struct Q10GRPRecord* x11492) {
  int x20565 = x11492->C_CUSTKEY;
  return x20565; 
}

int x36595(struct Q10GRPRecord* x11497, struct Q10GRPRecord* x11498) {
  int x20569 = x11497->C_CUSTKEY;
  int x20570 = x11498->C_CUSTKEY;
  int x20571 = x20569==(x20570);
  return x20571; 
}

int x36602(void* x9821) {
  int x9822 = g_direct_hash(x9821);
  return x9822; 
}

int x36605(void* x9824, void* x9825) {
  int x9826 = g_direct_equal(x9824, x9825);
  return x9826; 
}

int x36612(void* x9831) {
  int x9832 = g_direct_hash(x9831);
  return x9832; 
}

int x36615(void* x9834, void* x9835) {
  int x9836 = g_direct_equal(x9834, x9835);
  return x9836; 
}

int x36622(void* x9841) {
  int x9842 = g_direct_hash(x9841);
  return x9842; 
}

int x36625(void* x9844, void* x9845) {
  int x9846 = g_direct_equal(x9844, x9845);
  return x9846; 
}

int x36665(struct AGGRecord_Q10GRPRecord* x267, struct AGGRecord_Q10GRPRecord* x268) {
  double* x269 = x267->aggs;
  double x270 = x269[0];
  double* x271 = x268->aggs;
  double x272 = x271[0];
  int x273 = x270<(x272);
  /* VAR */ int ite29831 = 0;
  if(x273) {
    ite29831 = 1;
  } else {
    
    int x29833 = x270>(x272);
    /* VAR */ int ite29835 = 0;
    if(x29833) {
      ite29835 = -1;
    } else {
      
      ite29835 = 0;
    };
    int x29834 = ite29835;
    ite29831 = x29834;
  };
  int x276 = ite29831;
  return x276; 
}

int x12219(void* x12213, void* x12214, void* x12215) {
  struct AGGRecord_Q10GRPRecord** x12216 = (struct AGGRecord_Q10GRPRecord**){x12215};
  struct AGGRecord_Q10GRPRecord* x12217 = (struct AGGRecord_Q10GRPRecord*){x12214};
  pointer_assign(x12216, x12217);
  return 1; 
}
