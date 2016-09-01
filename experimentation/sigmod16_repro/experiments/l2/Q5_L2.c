#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct REGIONRecord_NATIONRecord;
  struct LINEITEMRecord;
  struct AGGRecord_OptimalString;
  struct REGIONRecord_NATIONRecord_CUSTOMERRecord;
  struct REGIONRecord;
  struct NATIONRecord;
  struct ORDERSRecord;
  struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord;
  struct SUPPLIERRecord;
  struct CUSTOMERRecord;
  struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord;
  
  struct REGIONRecord_NATIONRecord {
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
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
  
  struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
  };
  
  struct REGIONRecord_NATIONRecord_CUSTOMERRecord {
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
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
  };
  
  struct REGIONRecord {
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
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
  
  struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord {
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
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
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
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
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
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
  
  struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord {
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
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
  
  


int x56964(char* x17931);

int x56982(char* x17936, char* x17937);

int x56988(void* x15132);

int x56991(void* x15135, void* x15136);

int x56998(void* x15142);

int x57001(void* x15145, void* x15146);

int x57008(void* x15152);

int x57011(void* x15155, void* x15156);

int x57018(void* x15162);

int x57021(void* x15165, void* x15166);

int x57028(void* x15172);

int x57031(void* x15175, void* x15176);

int x57173(struct AGGRecord_OptimalString* x375, struct AGGRecord_OptimalString* x376);

int x19156(void* x19150, void* x19151, void* x19152);
/* GLOBAL VARS */

struct timeval x8247;
int main(int argc, char** argv) {
  FILE* x9393 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x9394 = 0;
  int x9395 = x9394;
  int* x9396 = &x9395;
  int x9397 = fscanf(x9393, "%d", x9396);
  pclose(x9393);
  struct NATIONRecord* x11867 = (struct NATIONRecord*)malloc(x9395 * sizeof(struct NATIONRecord));
  memset(x11867, 0, x9395 * sizeof(struct NATIONRecord));
  int x9401 = O_RDONLY;
  int x9402 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x9401);
  struct stat x9403 = (struct stat){0};
  /* VAR */ struct stat x9404 = x9403;
  struct stat x9405 = x9404;
  struct stat* x9406 = &x9405;
  int x9407 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x9406);
  int x9409 = PROT_READ;
  int x9410 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x9406->st_size), x9409, x9410, x9402, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite47578 = 0;
    if((x5<(x9395))) {
      char x54783 = *x3;
      ite47578 = (x54783!=('\0'));
    } else {
      
      ite47578 = 0;
    };
    int x44257 = ite47578;
    if (!(x44257)) break; 
    
    /* VAR */ int x9418 = 0;
    int x9419 = x9418;
    int* x9420 = &x9419;
    char* x9421 = strntoi_unchecked(x3, x9420);
    x3 = x9421;
    char* x11891 = (char*)malloc(26 * sizeof(char));
    memset(x11891, 0, 26 * sizeof(char));
    /* VAR */ char* x9424 = x3;
    while(1) {
      
      char x9425 = *x3;
      /* VAR */ int ite47597 = 0;
      if((x9425!=('|'))) {
        char x54801 = *x3;
        ite47597 = (x54801!=('\n'));
      } else {
        
        ite47597 = 0;
      };
      int x44269 = ite47597;
      if (!(x44269)) break; 
      
      x3 += 1;
    };
    char* x9432 = x9424;
    int x9433 = x3 - x9432;
    char* x9434 = x9424;
    char* x9435 = strncpy(x11891, x9434, x9433);
    x3 += 1;
    /* VAR */ int x9442 = 0;
    int x9443 = x9442;
    int* x9444 = &x9443;
    char* x9445 = strntoi_unchecked(x3, x9444);
    x3 = x9445;
    char* x11914 = (char*)malloc(153 * sizeof(char));
    memset(x11914, 0, 153 * sizeof(char));
    /* VAR */ char* x9448 = x3;
    while(1) {
      
      char x9449 = *x3;
      /* VAR */ int ite47625 = 0;
      if((x9449!=('|'))) {
        char x54828 = *x3;
        ite47625 = (x54828!=('\n'));
      } else {
        
        ite47625 = 0;
      };
      int x44290 = ite47625;
      if (!(x44290)) break; 
      
      x3 += 1;
    };
    char* x9456 = x9448;
    int x9457 = x3 - x9456;
    char* x9458 = x9448;
    char* x9459 = strncpy(x11914, x9458, x9457);
    x3 += 1;
    struct NATIONRecord* x13180 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x13180, 0, 1 * sizeof(struct NATIONRecord));
    x13180->N_NATIONKEY = x9419; x13180->N_NAME = x11891; x13180->N_REGIONKEY = x9443; x13180->N_COMMENT = x11914;
    int x28 = x4;
    struct NATIONRecord x11934 = *x13180;
    *(x11867 + x28) = x11934;
    struct NATIONRecord* x11936 = &(x11867[x28]);
    x13180 = x11936;
    int x30 = x4;
    x4 = (x30+(1));
  };
  FILE* x9472 = popen("wc -l /mnt/ramdisk/tpch/sf8/region.tbl", "r");
  /* VAR */ int x9473 = 0;
  int x9474 = x9473;
  int* x9475 = &x9474;
  int x9476 = fscanf(x9472, "%d", x9475);
  pclose(x9472);
  struct REGIONRecord* x11947 = (struct REGIONRecord*)malloc(x9474 * sizeof(struct REGIONRecord));
  memset(x11947, 0, x9474 * sizeof(struct REGIONRecord));
  int x9480 = O_RDONLY;
  int x9481 = open("/mnt/ramdisk/tpch/sf8/region.tbl", x9480);
  /* VAR */ struct stat x9482 = x9403;
  struct stat x9483 = x9482;
  struct stat* x9484 = &x9483;
  int x9485 = stat("/mnt/ramdisk/tpch/sf8/region.tbl", x9484);
  int x9487 = PROT_READ;
  int x9488 = MAP_PRIVATE;
  char* x36 = mmap(NULL, (x9484->st_size), x9487, x9488, x9481, 0);
  /* VAR */ int x37 = 0;
  while(1) {
    
    int x38 = x37;
    /* VAR */ int ite47675 = 0;
    if((x38<(x9474))) {
      char x54877 = *x36;
      ite47675 = (x54877!=('\0'));
    } else {
      
      ite47675 = 0;
    };
    int x44333 = ite47675;
    if (!(x44333)) break; 
    
    /* VAR */ int x9496 = 0;
    int x9497 = x9496;
    int* x9498 = &x9497;
    char* x9499 = strntoi_unchecked(x36, x9498);
    x36 = x9499;
    char* x11970 = (char*)malloc(26 * sizeof(char));
    memset(x11970, 0, 26 * sizeof(char));
    /* VAR */ char* x9502 = x36;
    while(1) {
      
      char x9503 = *x36;
      /* VAR */ int ite47694 = 0;
      if((x9503!=('|'))) {
        char x54895 = *x36;
        ite47694 = (x54895!=('\n'));
      } else {
        
        ite47694 = 0;
      };
      int x44345 = ite47694;
      if (!(x44345)) break; 
      
      x36 += 1;
    };
    char* x9510 = x9502;
    int x9511 = x36 - x9510;
    char* x9512 = x9502;
    char* x9513 = strncpy(x11970, x9512, x9511);
    x36 += 1;
    char* x11988 = (char*)malloc(153 * sizeof(char));
    memset(x11988, 0, 153 * sizeof(char));
    /* VAR */ char* x9521 = x36;
    while(1) {
      
      char x9522 = *x36;
      /* VAR */ int ite47717 = 0;
      if((x9522!=('|'))) {
        char x54917 = *x36;
        ite47717 = (x54917!=('\n'));
      } else {
        
        ite47717 = 0;
      };
      int x44361 = ite47717;
      if (!(x44361)) break; 
      
      x36 += 1;
    };
    char* x9529 = x9521;
    int x9530 = x36 - x9529;
    char* x9531 = x9521;
    char* x9532 = strncpy(x11988, x9531, x9530);
    x36 += 1;
    struct REGIONRecord* x13256 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x13256, 0, 1 * sizeof(struct REGIONRecord));
    x13256->R_REGIONKEY = x9497; x13256->R_NAME = x11970; x13256->R_COMMENT = x11988;
    int x60 = x37;
    struct REGIONRecord x12008 = *x13256;
    *(x11947 + x60) = x12008;
    struct REGIONRecord* x12010 = &(x11947[x60]);
    x13256 = x12010;
    int x62 = x37;
    x37 = (x62+(1));
  };
  FILE* x9545 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x9546 = 0;
  int x9547 = x9546;
  int* x9548 = &x9547;
  int x9549 = fscanf(x9545, "%d", x9548);
  pclose(x9545);
  struct SUPPLIERRecord* x12021 = (struct SUPPLIERRecord*)malloc(x9547 * sizeof(struct SUPPLIERRecord));
  memset(x12021, 0, x9547 * sizeof(struct SUPPLIERRecord));
  int x9553 = O_RDONLY;
  int x9554 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x9553);
  /* VAR */ struct stat x9555 = x9403;
  struct stat x9556 = x9555;
  struct stat* x9557 = &x9556;
  int x9558 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x9557);
  int x9560 = PROT_READ;
  int x9561 = MAP_PRIVATE;
  char* x68 = mmap(NULL, (x9557->st_size), x9560, x9561, x9554, 0);
  /* VAR */ int x69 = 0;
  while(1) {
    
    int x70 = x69;
    /* VAR */ int ite47767 = 0;
    if((x70<(x9547))) {
      char x54966 = *x68;
      ite47767 = (x54966!=('\0'));
    } else {
      
      ite47767 = 0;
    };
    int x44404 = ite47767;
    if (!(x44404)) break; 
    
    /* VAR */ int x9569 = 0;
    int x9570 = x9569;
    int* x9571 = &x9570;
    char* x9572 = strntoi_unchecked(x68, x9571);
    x68 = x9572;
    char* x12044 = (char*)malloc(26 * sizeof(char));
    memset(x12044, 0, 26 * sizeof(char));
    /* VAR */ char* x9575 = x68;
    while(1) {
      
      char x9576 = *x68;
      /* VAR */ int ite47786 = 0;
      if((x9576!=('|'))) {
        char x54984 = *x68;
        ite47786 = (x54984!=('\n'));
      } else {
        
        ite47786 = 0;
      };
      int x44416 = ite47786;
      if (!(x44416)) break; 
      
      x68 += 1;
    };
    char* x9583 = x9575;
    int x9584 = x68 - x9583;
    char* x9585 = x9575;
    char* x9586 = strncpy(x12044, x9585, x9584);
    x68 += 1;
    char* x12062 = (char*)malloc(41 * sizeof(char));
    memset(x12062, 0, 41 * sizeof(char));
    /* VAR */ char* x9594 = x68;
    while(1) {
      
      char x9595 = *x68;
      /* VAR */ int ite47809 = 0;
      if((x9595!=('|'))) {
        char x55006 = *x68;
        ite47809 = (x55006!=('\n'));
      } else {
        
        ite47809 = 0;
      };
      int x44432 = ite47809;
      if (!(x44432)) break; 
      
      x68 += 1;
    };
    char* x9602 = x9594;
    int x9603 = x68 - x9602;
    char* x9604 = x9594;
    char* x9605 = strncpy(x12062, x9604, x9603);
    x68 += 1;
    /* VAR */ int x9612 = 0;
    int x9613 = x9612;
    int* x9614 = &x9613;
    char* x9615 = strntoi_unchecked(x68, x9614);
    x68 = x9615;
    char* x12085 = (char*)malloc(16 * sizeof(char));
    memset(x12085, 0, 16 * sizeof(char));
    /* VAR */ char* x9618 = x68;
    while(1) {
      
      char x9619 = *x68;
      /* VAR */ int ite47837 = 0;
      if((x9619!=('|'))) {
        char x55033 = *x68;
        ite47837 = (x55033!=('\n'));
      } else {
        
        ite47837 = 0;
      };
      int x44453 = ite47837;
      if (!(x44453)) break; 
      
      x68 += 1;
    };
    char* x9626 = x9618;
    int x9627 = x68 - x9626;
    char* x9628 = x9618;
    char* x9629 = strncpy(x12085, x9628, x9627);
    x68 += 1;
    /* VAR */ double x9636 = 0.0;
    double x9637 = x9636;
    double* x9638 = &x9637;
    char* x9639 = strntod_unchecked(x68, x9638);
    x68 = x9639;
    char* x12108 = (char*)malloc(102 * sizeof(char));
    memset(x12108, 0, 102 * sizeof(char));
    /* VAR */ char* x9642 = x68;
    while(1) {
      
      char x9643 = *x68;
      /* VAR */ int ite47865 = 0;
      if((x9643!=('|'))) {
        char x55060 = *x68;
        ite47865 = (x55060!=('\n'));
      } else {
        
        ite47865 = 0;
      };
      int x44474 = ite47865;
      if (!(x44474)) break; 
      
      x68 += 1;
    };
    char* x9650 = x9642;
    int x9651 = x68 - x9650;
    char* x9652 = x9642;
    char* x9653 = strncpy(x12108, x9652, x9651);
    x68 += 1;
    struct SUPPLIERRecord* x13378 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x13378, 0, 1 * sizeof(struct SUPPLIERRecord));
    x13378->S_SUPPKEY = x9570; x13378->S_NAME = x12044; x13378->S_ADDRESS = x12062; x13378->S_NATIONKEY = x9613; x13378->S_PHONE = x12085; x13378->S_ACCTBAL = x9637; x13378->S_COMMENT = x12108;
    int x110 = x69;
    struct SUPPLIERRecord x12128 = *x13378;
    *(x12021 + x110) = x12128;
    struct SUPPLIERRecord* x12130 = &(x12021[x110]);
    x13378 = x12130;
    int x112 = x69;
    x69 = (x112+(1));
  };
  FILE* x9666 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x9667 = 0;
  int x9668 = x9667;
  int* x9669 = &x9668;
  int x9670 = fscanf(x9666, "%d", x9669);
  pclose(x9666);
  struct LINEITEMRecord* x12141 = (struct LINEITEMRecord*)malloc(x9668 * sizeof(struct LINEITEMRecord));
  memset(x12141, 0, x9668 * sizeof(struct LINEITEMRecord));
  int x9674 = O_RDONLY;
  int x9675 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x9674);
  /* VAR */ struct stat x9676 = x9403;
  struct stat x9677 = x9676;
  struct stat* x9678 = &x9677;
  int x9679 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x9678);
  int x9681 = PROT_READ;
  int x9682 = MAP_PRIVATE;
  char* x118 = mmap(NULL, (x9678->st_size), x9681, x9682, x9675, 0);
  /* VAR */ int x119 = 0;
  while(1) {
    
    int x120 = x119;
    /* VAR */ int ite47915 = 0;
    if((x120<(x9668))) {
      char x55109 = *x118;
      ite47915 = (x55109!=('\0'));
    } else {
      
      ite47915 = 0;
    };
    int x44517 = ite47915;
    if (!(x44517)) break; 
    
    /* VAR */ int x9690 = 0;
    int x9691 = x9690;
    int* x9692 = &x9691;
    char* x9693 = strntoi_unchecked(x118, x9692);
    x118 = x9693;
    /* VAR */ int x9695 = 0;
    int x9696 = x9695;
    int* x9697 = &x9696;
    char* x9698 = strntoi_unchecked(x118, x9697);
    x118 = x9698;
    /* VAR */ int x9700 = 0;
    int x9701 = x9700;
    int* x9702 = &x9701;
    char* x9703 = strntoi_unchecked(x118, x9702);
    x118 = x9703;
    /* VAR */ int x9705 = 0;
    int x9706 = x9705;
    int* x9707 = &x9706;
    char* x9708 = strntoi_unchecked(x118, x9707);
    x118 = x9708;
    /* VAR */ double x9710 = 0.0;
    double x9711 = x9710;
    double* x9712 = &x9711;
    char* x9713 = strntod_unchecked(x118, x9712);
    x118 = x9713;
    /* VAR */ double x9715 = 0.0;
    double x9716 = x9715;
    double* x9717 = &x9716;
    char* x9718 = strntod_unchecked(x118, x9717);
    x118 = x9718;
    /* VAR */ double x9720 = 0.0;
    double x9721 = x9720;
    double* x9722 = &x9721;
    char* x9723 = strntod_unchecked(x118, x9722);
    x118 = x9723;
    /* VAR */ double x9725 = 0.0;
    double x9726 = x9725;
    double* x9727 = &x9726;
    char* x9728 = strntod_unchecked(x118, x9727);
    x118 = x9728;
    char x9730 = *x118;
    /* VAR */ char x9731 = x9730;
    x118 += 1;
    x118 += 1;
    char x9734 = x9731;
    char x9735 = *x118;
    /* VAR */ char x9736 = x9735;
    x118 += 1;
    x118 += 1;
    char x9739 = x9736;
    /* VAR */ int x9740 = 0;
    int x9741 = x9740;
    int* x9742 = &x9741;
    char* x9743 = strntoi_unchecked(x118, x9742);
    x118 = x9743;
    /* VAR */ int x9745 = 0;
    int x9746 = x9745;
    int* x9747 = &x9746;
    char* x9748 = strntoi_unchecked(x118, x9747);
    x118 = x9748;
    /* VAR */ int x9750 = 0;
    int x9751 = x9750;
    int* x9752 = &x9751;
    char* x9753 = strntoi_unchecked(x118, x9752);
    x118 = x9753;
    /* VAR */ int x9759 = 0;
    int x9760 = x9759;
    int* x9761 = &x9760;
    char* x9762 = strntoi_unchecked(x118, x9761);
    x118 = x9762;
    /* VAR */ int x9764 = 0;
    int x9765 = x9764;
    int* x9766 = &x9765;
    char* x9767 = strntoi_unchecked(x118, x9766);
    x118 = x9767;
    /* VAR */ int x9769 = 0;
    int x9770 = x9769;
    int* x9771 = &x9770;
    char* x9772 = strntoi_unchecked(x118, x9771);
    x118 = x9772;
    /* VAR */ int x9778 = 0;
    int x9779 = x9778;
    int* x9780 = &x9779;
    char* x9781 = strntoi_unchecked(x118, x9780);
    x118 = x9781;
    /* VAR */ int x9783 = 0;
    int x9784 = x9783;
    int* x9785 = &x9784;
    char* x9786 = strntoi_unchecked(x118, x9785);
    x118 = x9786;
    /* VAR */ int x9788 = 0;
    int x9789 = x9788;
    int* x9790 = &x9789;
    char* x9791 = strntoi_unchecked(x118, x9790);
    x118 = x9791;
    char* x12266 = (char*)malloc(26 * sizeof(char));
    memset(x12266, 0, 26 * sizeof(char));
    /* VAR */ char* x9798 = x118;
    while(1) {
      
      char x9799 = *x118;
      /* VAR */ int ite48036 = 0;
      if((x9799!=('|'))) {
        char x55229 = *x118;
        ite48036 = (x55229!=('\n'));
      } else {
        
        ite48036 = 0;
      };
      int x44631 = ite48036;
      if (!(x44631)) break; 
      
      x118 += 1;
    };
    char* x9806 = x9798;
    int x9807 = x118 - x9806;
    char* x9808 = x9798;
    char* x9809 = strncpy(x12266, x9808, x9807);
    x118 += 1;
    char* x12284 = (char*)malloc(11 * sizeof(char));
    memset(x12284, 0, 11 * sizeof(char));
    /* VAR */ char* x9817 = x118;
    while(1) {
      
      char x9818 = *x118;
      /* VAR */ int ite48059 = 0;
      if((x9818!=('|'))) {
        char x55251 = *x118;
        ite48059 = (x55251!=('\n'));
      } else {
        
        ite48059 = 0;
      };
      int x44647 = ite48059;
      if (!(x44647)) break; 
      
      x118 += 1;
    };
    char* x9825 = x9817;
    int x9826 = x118 - x9825;
    char* x9827 = x9817;
    char* x9828 = strncpy(x12284, x9827, x9826);
    x118 += 1;
    char* x12302 = (char*)malloc(45 * sizeof(char));
    memset(x12302, 0, 45 * sizeof(char));
    /* VAR */ char* x9836 = x118;
    while(1) {
      
      char x9837 = *x118;
      /* VAR */ int ite48082 = 0;
      if((x9837!=('|'))) {
        char x55273 = *x118;
        ite48082 = (x55273!=('\n'));
      } else {
        
        ite48082 = 0;
      };
      int x44663 = ite48082;
      if (!(x44663)) break; 
      
      x118 += 1;
    };
    char* x9844 = x9836;
    int x9845 = x118 - x9844;
    char* x9846 = x9836;
    char* x9847 = strncpy(x12302, x9846, x9845);
    x118 += 1;
    struct LINEITEMRecord* x13574 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x13574, 0, 1 * sizeof(struct LINEITEMRecord));
    x13574->L_ORDERKEY = x9691; x13574->L_PARTKEY = x9696; x13574->L_SUPPKEY = x9701; x13574->L_LINENUMBER = x9706; x13574->L_QUANTITY = x9711; x13574->L_EXTENDEDPRICE = x9716; x13574->L_DISCOUNT = x9721; x13574->L_TAX = x9726; x13574->L_RETURNFLAG = x9734; x13574->L_LINESTATUS = x9739; x13574->L_SHIPDATE = (((x9741*(10000))+((x9746*(100))))+(x9751)); x13574->L_COMMITDATE = (((x9760*(10000))+((x9765*(100))))+(x9770)); x13574->L_RECEIPTDATE = (((x9779*(10000))+((x9784*(100))))+(x9789)); x13574->L_SHIPINSTRUCT = x12266; x13574->L_SHIPMODE = x12284; x13574->L_COMMENT = x12302;
    int x162 = x119;
    struct LINEITEMRecord x12322 = *x13574;
    *(x12141 + x162) = x12322;
    struct LINEITEMRecord* x12324 = &(x12141[x162]);
    x13574 = x12324;
    int x164 = x119;
    x119 = (x164+(1));
  };
  FILE* x9860 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x9861 = 0;
  int x9862 = x9861;
  int* x9863 = &x9862;
  int x9864 = fscanf(x9860, "%d", x9863);
  pclose(x9860);
  struct ORDERSRecord* x12335 = (struct ORDERSRecord*)malloc(x9862 * sizeof(struct ORDERSRecord));
  memset(x12335, 0, x9862 * sizeof(struct ORDERSRecord));
  int x9868 = O_RDONLY;
  int x9869 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x9868);
  /* VAR */ struct stat x9870 = x9403;
  struct stat x9871 = x9870;
  struct stat* x9872 = &x9871;
  int x9873 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x9872);
  int x9875 = PROT_READ;
  int x9876 = MAP_PRIVATE;
  char* x170 = mmap(NULL, (x9872->st_size), x9875, x9876, x9869, 0);
  /* VAR */ int x171 = 0;
  while(1) {
    
    int x172 = x171;
    /* VAR */ int ite48132 = 0;
    if((x172<(x9862))) {
      char x55322 = *x170;
      ite48132 = (x55322!=('\0'));
    } else {
      
      ite48132 = 0;
    };
    int x44706 = ite48132;
    if (!(x44706)) break; 
    
    /* VAR */ int x9884 = 0;
    int x9885 = x9884;
    int* x9886 = &x9885;
    char* x9887 = strntoi_unchecked(x170, x9886);
    x170 = x9887;
    /* VAR */ int x9889 = 0;
    int x9890 = x9889;
    int* x9891 = &x9890;
    char* x9892 = strntoi_unchecked(x170, x9891);
    x170 = x9892;
    char x9894 = *x170;
    /* VAR */ char x9895 = x9894;
    x170 += 1;
    x170 += 1;
    char x9898 = x9895;
    /* VAR */ double x9899 = 0.0;
    double x9900 = x9899;
    double* x9901 = &x9900;
    char* x9902 = strntod_unchecked(x170, x9901);
    x170 = x9902;
    /* VAR */ int x9904 = 0;
    int x9905 = x9904;
    int* x9906 = &x9905;
    char* x9907 = strntoi_unchecked(x170, x9906);
    x170 = x9907;
    /* VAR */ int x9909 = 0;
    int x9910 = x9909;
    int* x9911 = &x9910;
    char* x9912 = strntoi_unchecked(x170, x9911);
    x170 = x9912;
    /* VAR */ int x9914 = 0;
    int x9915 = x9914;
    int* x9916 = &x9915;
    char* x9917 = strntoi_unchecked(x170, x9916);
    x170 = x9917;
    char* x12392 = (char*)malloc(16 * sizeof(char));
    memset(x12392, 0, 16 * sizeof(char));
    /* VAR */ char* x9924 = x170;
    while(1) {
      
      char x9925 = *x170;
      /* VAR */ int ite48185 = 0;
      if((x9925!=('|'))) {
        char x55374 = *x170;
        ite48185 = (x55374!=('\n'));
      } else {
        
        ite48185 = 0;
      };
      int x44752 = ite48185;
      if (!(x44752)) break; 
      
      x170 += 1;
    };
    char* x9932 = x9924;
    int x9933 = x170 - x9932;
    char* x9934 = x9924;
    char* x9935 = strncpy(x12392, x9934, x9933);
    x170 += 1;
    char* x12410 = (char*)malloc(16 * sizeof(char));
    memset(x12410, 0, 16 * sizeof(char));
    /* VAR */ char* x9943 = x170;
    while(1) {
      
      char x9944 = *x170;
      /* VAR */ int ite48208 = 0;
      if((x9944!=('|'))) {
        char x55396 = *x170;
        ite48208 = (x55396!=('\n'));
      } else {
        
        ite48208 = 0;
      };
      int x44768 = ite48208;
      if (!(x44768)) break; 
      
      x170 += 1;
    };
    char* x9951 = x9943;
    int x9952 = x170 - x9951;
    char* x9953 = x9943;
    char* x9954 = strncpy(x12410, x9953, x9952);
    x170 += 1;
    /* VAR */ int x9961 = 0;
    int x9962 = x9961;
    int* x9963 = &x9962;
    char* x9964 = strntoi_unchecked(x170, x9963);
    x170 = x9964;
    char* x12433 = (char*)malloc(80 * sizeof(char));
    memset(x12433, 0, 80 * sizeof(char));
    /* VAR */ char* x9967 = x170;
    while(1) {
      
      char x9968 = *x170;
      /* VAR */ int ite48236 = 0;
      if((x9968!=('|'))) {
        char x55423 = *x170;
        ite48236 = (x55423!=('\n'));
      } else {
        
        ite48236 = 0;
      };
      int x44789 = ite48236;
      if (!(x44789)) break; 
      
      x170 += 1;
    };
    char* x9975 = x9967;
    int x9976 = x170 - x9975;
    char* x9977 = x9967;
    char* x9978 = strncpy(x12433, x9977, x9976);
    x170 += 1;
    struct ORDERSRecord* x13707 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x13707, 0, 1 * sizeof(struct ORDERSRecord));
    x13707->O_ORDERKEY = x9885; x13707->O_CUSTKEY = x9890; x13707->O_ORDERSTATUS = x9898; x13707->O_TOTALPRICE = x9900; x13707->O_ORDERDATE = (((x9905*(10000))+((x9910*(100))))+(x9915)); x13707->O_ORDERPRIORITY = x12392; x13707->O_CLERK = x12410; x13707->O_SHIPPRIORITY = x9962; x13707->O_COMMENT = x12433;
    int x206 = x171;
    struct ORDERSRecord x12453 = *x13707;
    *(x12335 + x206) = x12453;
    struct ORDERSRecord* x12455 = &(x12335[x206]);
    x13707 = x12455;
    int x208 = x171;
    x171 = (x208+(1));
  };
  FILE* x9991 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x9992 = 0;
  int x9993 = x9992;
  int* x9994 = &x9993;
  int x9995 = fscanf(x9991, "%d", x9994);
  pclose(x9991);
  struct CUSTOMERRecord* x12466 = (struct CUSTOMERRecord*)malloc(x9993 * sizeof(struct CUSTOMERRecord));
  memset(x12466, 0, x9993 * sizeof(struct CUSTOMERRecord));
  int x9999 = O_RDONLY;
  int x10000 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x9999);
  /* VAR */ struct stat x10001 = x9403;
  struct stat x10002 = x10001;
  struct stat* x10003 = &x10002;
  int x10004 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x10003);
  int x10006 = PROT_READ;
  int x10007 = MAP_PRIVATE;
  char* x214 = mmap(NULL, (x10003->st_size), x10006, x10007, x10000, 0);
  /* VAR */ int x215 = 0;
  while(1) {
    
    int x216 = x215;
    /* VAR */ int ite48286 = 0;
    if((x216<(x9993))) {
      char x55472 = *x214;
      ite48286 = (x55472!=('\0'));
    } else {
      
      ite48286 = 0;
    };
    int x44832 = ite48286;
    if (!(x44832)) break; 
    
    /* VAR */ int x10015 = 0;
    int x10016 = x10015;
    int* x10017 = &x10016;
    char* x10018 = strntoi_unchecked(x214, x10017);
    x214 = x10018;
    char* x12489 = (char*)malloc(26 * sizeof(char));
    memset(x12489, 0, 26 * sizeof(char));
    /* VAR */ char* x10021 = x214;
    while(1) {
      
      char x10022 = *x214;
      /* VAR */ int ite48305 = 0;
      if((x10022!=('|'))) {
        char x55490 = *x214;
        ite48305 = (x55490!=('\n'));
      } else {
        
        ite48305 = 0;
      };
      int x44844 = ite48305;
      if (!(x44844)) break; 
      
      x214 += 1;
    };
    char* x10029 = x10021;
    int x10030 = x214 - x10029;
    char* x10031 = x10021;
    char* x10032 = strncpy(x12489, x10031, x10030);
    x214 += 1;
    char* x12507 = (char*)malloc(41 * sizeof(char));
    memset(x12507, 0, 41 * sizeof(char));
    /* VAR */ char* x10040 = x214;
    while(1) {
      
      char x10041 = *x214;
      /* VAR */ int ite48328 = 0;
      if((x10041!=('|'))) {
        char x55512 = *x214;
        ite48328 = (x55512!=('\n'));
      } else {
        
        ite48328 = 0;
      };
      int x44860 = ite48328;
      if (!(x44860)) break; 
      
      x214 += 1;
    };
    char* x10048 = x10040;
    int x10049 = x214 - x10048;
    char* x10050 = x10040;
    char* x10051 = strncpy(x12507, x10050, x10049);
    x214 += 1;
    /* VAR */ int x10058 = 0;
    int x10059 = x10058;
    int* x10060 = &x10059;
    char* x10061 = strntoi_unchecked(x214, x10060);
    x214 = x10061;
    char* x12530 = (char*)malloc(16 * sizeof(char));
    memset(x12530, 0, 16 * sizeof(char));
    /* VAR */ char* x10064 = x214;
    while(1) {
      
      char x10065 = *x214;
      /* VAR */ int ite48356 = 0;
      if((x10065!=('|'))) {
        char x55539 = *x214;
        ite48356 = (x55539!=('\n'));
      } else {
        
        ite48356 = 0;
      };
      int x44881 = ite48356;
      if (!(x44881)) break; 
      
      x214 += 1;
    };
    char* x10072 = x10064;
    int x10073 = x214 - x10072;
    char* x10074 = x10064;
    char* x10075 = strncpy(x12530, x10074, x10073);
    x214 += 1;
    /* VAR */ double x10082 = 0.0;
    double x10083 = x10082;
    double* x10084 = &x10083;
    char* x10085 = strntod_unchecked(x214, x10084);
    x214 = x10085;
    char* x12553 = (char*)malloc(11 * sizeof(char));
    memset(x12553, 0, 11 * sizeof(char));
    /* VAR */ char* x10088 = x214;
    while(1) {
      
      char x10089 = *x214;
      /* VAR */ int ite48384 = 0;
      if((x10089!=('|'))) {
        char x55566 = *x214;
        ite48384 = (x55566!=('\n'));
      } else {
        
        ite48384 = 0;
      };
      int x44902 = ite48384;
      if (!(x44902)) break; 
      
      x214 += 1;
    };
    char* x10096 = x10088;
    int x10097 = x214 - x10096;
    char* x10098 = x10088;
    char* x10099 = strncpy(x12553, x10098, x10097);
    x214 += 1;
    char* x12571 = (char*)malloc(118 * sizeof(char));
    memset(x12571, 0, 118 * sizeof(char));
    /* VAR */ char* x10107 = x214;
    while(1) {
      
      char x10108 = *x214;
      /* VAR */ int ite48407 = 0;
      if((x10108!=('|'))) {
        char x55588 = *x214;
        ite48407 = (x55588!=('\n'));
      } else {
        
        ite48407 = 0;
      };
      int x44918 = ite48407;
      if (!(x44918)) break; 
      
      x214 += 1;
    };
    char* x10115 = x10107;
    int x10116 = x214 - x10115;
    char* x10117 = x10107;
    char* x10118 = strncpy(x12571, x10117, x10116);
    x214 += 1;
    struct CUSTOMERRecord* x13847 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x13847, 0, 1 * sizeof(struct CUSTOMERRecord));
    x13847->C_CUSTKEY = x10016; x13847->C_NAME = x12489; x13847->C_ADDRESS = x12507; x13847->C_NATIONKEY = x10059; x13847->C_PHONE = x12530; x13847->C_ACCTBAL = x10083; x13847->C_MKTSEGMENT = x12553; x13847->C_COMMENT = x12571;
    int x264 = x215;
    struct CUSTOMERRecord x12591 = *x13847;
    *(x12466 + x264) = x12591;
    struct CUSTOMERRecord* x12593 = &(x12466[x264]);
    x13847 = x12593;
    int x266 = x215;
    x215 = (x266+(1));
  };
  int x271 = 0;
  for(; x271 < 1 ; x271 += 1) {
    
    GHashTable* x56987 = g_hash_table_new(x56964, x56982);
    GHashTable* x56997 = g_hash_table_new(((void***){x56988}), ((int*){x56991}));
    GHashTable* x57007 = g_hash_table_new(((void***){x56998}), ((int*){x57001}));
    GHashTable* x57017 = g_hash_table_new(((void***){x57008}), ((int*){x57011}));
    GHashTable* x57027 = g_hash_table_new(((void***){x57018}), ((int*){x57021}));
    GHashTable* x57037 = g_hash_table_new(((void***){x57028}), ((int*){x57031}));
    /* VAR */ int x57038 = 0;
    struct REGIONRecord_NATIONRecord* x57039 = (struct REGIONRecord_NATIONRecord*)malloc(25 * sizeof(struct REGIONRecord_NATIONRecord));
    memset(x57039, 0, 25 * sizeof(struct REGIONRecord_NATIONRecord));
    /* VAR */ int x57040 = 0;
    while(1) {
      
      int x7775 = x57040;
      if (!((x7775<(25)))) break; 
      
      int x7777 = x57040;
      struct REGIONRecord_NATIONRecord* x13874 = (struct REGIONRecord_NATIONRecord*)malloc(1 * sizeof(struct REGIONRecord_NATIONRecord));
      memset(x13874, 0, 1 * sizeof(struct REGIONRecord_NATIONRecord));
      x13874->R_REGIONKEY = 0; x13874->R_NAME = ""; x13874->R_COMMENT = ""; x13874->N_NATIONKEY = 0; x13874->N_NAME = ""; x13874->N_REGIONKEY = 0; x13874->N_COMMENT = "";
      struct REGIONRecord_NATIONRecord x12615 = *x13874;
      *(x57039 + x7777) = x12615;
      struct REGIONRecord_NATIONRecord* x12617 = &(x57039[x7777]);
      x13874 = x12617;
      int x7780 = x57040;
      x57040 = (x7780+(1));
    };
    /* VAR */ int x57055 = 0;
    struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x57056 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord*)malloc(1200000 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord));
    memset(x57056, 0, 1200000 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord));
    /* VAR */ int x57057 = 0;
    while(1) {
      
      int x7787 = x57057;
      if (!((x7787<(1200000)))) break; 
      
      int x7789 = x57057;
      struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x13891 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord*)malloc(1 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord));
      memset(x13891, 0, 1 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord));
      x13891->R_REGIONKEY = 0; x13891->R_NAME = ""; x13891->R_COMMENT = ""; x13891->N_NATIONKEY = 0; x13891->N_NAME = ""; x13891->N_REGIONKEY = 0; x13891->N_COMMENT = ""; x13891->C_CUSTKEY = 0; x13891->C_NAME = ""; x13891->C_ADDRESS = ""; x13891->C_NATIONKEY = 0; x13891->C_PHONE = ""; x13891->C_ACCTBAL = 0.0; x13891->C_MKTSEGMENT = ""; x13891->C_COMMENT = "";
      struct REGIONRecord_NATIONRecord_CUSTOMERRecord x12630 = *x13891;
      *(x57056 + x7789) = x12630;
      struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x12632 = &(x57056[x7789]);
      x13891 = x12632;
      int x7792 = x57057;
      x57057 = (x7792+(1));
    };
    /* VAR */ int x57072 = 0;
    struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x57073 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord*)malloc(12000000 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord));
    memset(x57073, 0, 12000000 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord));
    /* VAR */ int x57074 = 0;
    while(1) {
      
      int x7799 = x57074;
      if (!((x7799<(12000000)))) break; 
      
      int x7801 = x57074;
      struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x13908 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord*)malloc(1 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord));
      memset(x13908, 0, 1 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord));
      x13908->R_REGIONKEY = 0; x13908->R_NAME = ""; x13908->R_COMMENT = ""; x13908->N_NATIONKEY = 0; x13908->N_NAME = ""; x13908->N_REGIONKEY = 0; x13908->N_COMMENT = ""; x13908->C_CUSTKEY = 0; x13908->C_NAME = ""; x13908->C_ADDRESS = ""; x13908->C_NATIONKEY = 0; x13908->C_PHONE = ""; x13908->C_ACCTBAL = 0.0; x13908->C_MKTSEGMENT = ""; x13908->C_COMMENT = ""; x13908->O_ORDERKEY = 0; x13908->O_CUSTKEY = 0; x13908->O_ORDERSTATUS = '\0'; x13908->O_TOTALPRICE = 0.0; x13908->O_ORDERDATE = 0; x13908->O_ORDERPRIORITY = ""; x13908->O_CLERK = ""; x13908->O_SHIPPRIORITY = 0; x13908->O_COMMENT = "";
      struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord x12645 = *x13908;
      *(x57073 + x7801) = x12645;
      struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x12647 = &(x57073[x7801]);
      x13908 = x12647;
      int x7804 = x57074;
      x57074 = (x7804+(1));
    };
    /* VAR */ int x57089 = 0;
    struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord* x57090 = (struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord*)malloc(48000000 * sizeof(struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
    memset(x57090, 0, 48000000 * sizeof(struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
    /* VAR */ int x57091 = 0;
    while(1) {
      
      int x7811 = x57091;
      if (!((x7811<(48000000)))) break; 
      
      int x7813 = x57091;
      struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord* x13925 = (struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord*)malloc(1 * sizeof(struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
      memset(x13925, 0, 1 * sizeof(struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
      x13925->S_SUPPKEY = 0; x13925->S_NAME = ""; x13925->S_ADDRESS = ""; x13925->S_NATIONKEY = 0; x13925->S_PHONE = ""; x13925->S_ACCTBAL = 0.0; x13925->S_COMMENT = ""; x13925->R_REGIONKEY = 0; x13925->R_NAME = ""; x13925->R_COMMENT = ""; x13925->N_NATIONKEY = 0; x13925->N_NAME = ""; x13925->N_REGIONKEY = 0; x13925->N_COMMENT = ""; x13925->C_CUSTKEY = 0; x13925->C_NAME = ""; x13925->C_ADDRESS = ""; x13925->C_NATIONKEY = 0; x13925->C_PHONE = ""; x13925->C_ACCTBAL = 0.0; x13925->C_MKTSEGMENT = ""; x13925->C_COMMENT = ""; x13925->O_ORDERKEY = 0; x13925->O_CUSTKEY = 0; x13925->O_ORDERSTATUS = '\0'; x13925->O_TOTALPRICE = 0.0; x13925->O_ORDERDATE = 0; x13925->O_ORDERPRIORITY = ""; x13925->O_CLERK = ""; x13925->O_SHIPPRIORITY = 0; x13925->O_COMMENT = ""; x13925->L_ORDERKEY = 0; x13925->L_PARTKEY = 0; x13925->L_SUPPKEY = 0; x13925->L_LINENUMBER = 0; x13925->L_QUANTITY = 0.0; x13925->L_EXTENDEDPRICE = 0.0; x13925->L_DISCOUNT = 0.0; x13925->L_TAX = 0.0; x13925->L_RETURNFLAG = '\0'; x13925->L_LINESTATUS = '\0'; x13925->L_SHIPDATE = 0; x13925->L_COMMITDATE = 0; x13925->L_RECEIPTDATE = 0; x13925->L_SHIPINSTRUCT = ""; x13925->L_SHIPMODE = ""; x13925->L_COMMENT = "";
      struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord x12660 = *x13925;
      *(x57090 + x7813) = x12660;
      struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord* x12662 = &(x57090[x7813]);
      x13925 = x12662;
      int x7816 = x57091;
      x57091 = (x7816+(1));
    };
    /* VAR */ int x57106 = 0;
    double** x57107 = (double**)malloc(25 * sizeof(double*));
    memset(x57107, 0, 25 * sizeof(double*));
    /* VAR */ int x57108 = 0;
    while(1) {
      
      int x7823 = x57108;
      if (!((x7823<(25)))) break; 
      
      int x7825 = x57108;
      double* x12674 = (double*)malloc(1 * sizeof(double));
      memset(x12674, 0, 1 * sizeof(double));
      *(x57107 + x7825) = x12674;
      int x7828 = x57108;
      x57108 = (x7828+(1));
    };
    /* VAR */ int x57118 = 0;
    struct AGGRecord_OptimalString* x57119 = (struct AGGRecord_OptimalString*)malloc(25 * sizeof(struct AGGRecord_OptimalString));
    memset(x57119, 0, 25 * sizeof(struct AGGRecord_OptimalString));
    /* VAR */ int x57120 = 0;
    while(1) {
      
      int x7835 = x57120;
      if (!((x7835<(25)))) break; 
      
      int x7837 = x57120;
      double* x7838 = x57107[x7837];
      struct AGGRecord_OptimalString* x13955 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x13955, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      x13955->key = ""; x13955->aggs = x7838;
      struct AGGRecord_OptimalString x12688 = *x13955;
      *(x57119 + x7837) = x12688;
      struct AGGRecord_OptimalString* x12690 = &(x57119[x7837]);
      x13955 = x12690;
      int x7841 = x57120;
      x57120 = (x7841+(1));
    };
    /* VAR */ struct timeval x57136 = x8247;
    struct timeval x57137 = x57136;
    /* VAR */ struct timeval x57138 = x8247;
    struct timeval x57139 = x57138;
    /* VAR */ struct timeval x57140 = x8247;
    struct timeval x57141 = x57140;
    struct timeval* x57142 = &x57139;
    gettimeofday(x57142, NULL);
    /* VAR */ int x57144 = 0;
    /* VAR */ int x57145 = 0;
    /* VAR */ int x57146 = 0;
    /* VAR */ int x57147 = 0;
    /* VAR */ int x57148 = 0;
    /* VAR */ int x57149 = 0;
    int* x57196 = &(x57173);
    GTree* x57197 = g_tree_new(x57196);
    /* VAR */ int x57198 = 0;
    /* VAR */ int x57199 = 0;
    while(1) {
      
      int x57201 = x57149;
      if (!((x57201<(x9547)))) break; 
      
      int x3651 = x57149;
      struct SUPPLIERRecord* x403 = &(x12021[x3651]);
      void* x15318 = (void*){(x403->S_SUPPKEY)};
      void* x15320 = g_hash_table_lookup(x56997, x15318);
      GList** x15321 = (GList**){x15320};
      GList** x15322 = NULL;
      /* VAR */ GList** ite46497 = 0;
      if((x15321==(x15322))) {
        GList** x46498 = malloc(8);
        GList* x46499 = NULL;
        pointer_assign(x46498, x46499);
        ite46497 = x46498;
      } else {
        
        ite46497 = x15321;
      };
      GList** x15327 = ite46497;
      GList* x15328 = *(x15327);
      GList* x15329 = g_list_prepend(x15328, ((void*){x403}));
      pointer_assign(x15327, x15329);
      g_hash_table_insert(x56997, x15318, ((void*){x15327}));
      int x3656 = x57149;
      x57149 = (x3656+(1));
    };
    while(1) {
      
      int x57230 = x57144;
      if (!((x57230<(x9474)))) break; 
      
      int x3665 = x57144;
      struct REGIONRecord* x418 = &(x11947[x3665]);
      int x36058 = strcmp((x418->R_NAME), "ASIA");
      if((x36058==(0))) {
        void* x15346 = (void*){(x418->R_REGIONKEY)};
        void* x15348 = g_hash_table_lookup(x57037, x15346);
        GList** x15349 = (GList**){x15348};
        GList** x15350 = NULL;
        /* VAR */ GList** ite46529 = 0;
        if((x15349==(x15350))) {
          GList** x46530 = malloc(8);
          GList* x46531 = NULL;
          pointer_assign(x46530, x46531);
          ite46529 = x46530;
        } else {
          
          ite46529 = x15349;
        };
        GList** x15355 = ite46529;
        GList* x15356 = *(x15355);
        GList* x15357 = g_list_prepend(x15356, ((void*){x418}));
        pointer_assign(x15355, x15357);
        g_hash_table_insert(x57037, x15346, ((void*){x15355}));
      };
      int x3673 = x57144;
      x57144 = (x3673+(1));
    };
    while(1) {
      
      int x57263 = x57145;
      if (!((x57263<(x9395)))) break; 
      
      int x3682 = x57145;
      struct NATIONRecord* x436 = &(x11867[x3682]);
      int x438 = x436->N_REGIONKEY;
      void* x15372 = g_hash_table_lookup(x57037, ((void*){x438}));
      GList** x15373 = (GList**){x15372};
      if((x15373!=(NULL))) {
        GList* x18239 = *(x15373);
        /* VAR */ GList* x18240 = x18239;
        while(1) {
          
          GList* x18241 = x18240;
          GList* x18242 = NULL;
          if (!((x18241!=(x18242)))) break; 
          
          GList* x18244 = x18240;
          void* x18245 = g_list_nth_data(x18244, 0);
          struct REGIONRecord* x18246 = (struct REGIONRecord*){x18245};
          GList* x18247 = x18240;
          GList* x18248 = g_list_next(x18247);
          x18240 = x18248;
          int x18250 = x18246->R_REGIONKEY;
          if((x18250==(x438))) {
            int x7917 = x57038;
            struct REGIONRecord_NATIONRecord* x7918 = &(x57039[x7917]);
            x7918->R_REGIONKEY = x18250;
            x7918->R_NAME = (x18246->R_NAME);
            x7918->R_COMMENT = (x18246->R_COMMENT);
            x7918->N_NATIONKEY = (x436->N_NATIONKEY);
            x7918->N_NAME = (x436->N_NAME);
            x7918->N_REGIONKEY = x438;
            x7918->N_COMMENT = (x436->N_COMMENT);
            int x7926 = x57038;
            x57038 = (x7926+(1));
            void* x15401 = (void*){(x7918->N_NATIONKEY)};
            void* x15403 = g_hash_table_lookup(x57027, x15401);
            GList** x15404 = (GList**){x15403};
            GList** x15405 = NULL;
            /* VAR */ GList** ite46638 = 0;
            if((x15404==(x15405))) {
              GList** x46639 = malloc(8);
              GList* x46640 = NULL;
              pointer_assign(x46639, x46640);
              ite46638 = x46639;
            } else {
              
              ite46638 = x15404;
            };
            GList** x15410 = ite46638;
            GList* x15411 = *(x15410);
            GList* x15412 = g_list_prepend(x15411, ((void*){x7918}));
            pointer_assign(x15410, x15412);
            g_hash_table_insert(x57027, x15401, ((void*){x15410}));
          };
        };
      };
      int x3720 = x57145;
      x57145 = (x3720+(1));
    };
    while(1) {
      
      int x57373 = x57148;
      if (!((x57373<(x9993)))) break; 
      
      int x3730 = x57148;
      struct CUSTOMERRecord* x477 = &(x12466[x3730]);
      int x479 = x477->C_NATIONKEY;
      void* x15428 = g_hash_table_lookup(x57027, ((void*){x479}));
      GList** x15429 = (GList**){x15428};
      if((x15429!=(NULL))) {
        GList* x18358 = *(x15429);
        /* VAR */ GList* x18359 = x18358;
        while(1) {
          
          GList* x18360 = x18359;
          GList* x18361 = NULL;
          if (!((x18360!=(x18361)))) break; 
          
          GList* x18363 = x18359;
          void* x18364 = g_list_nth_data(x18363, 0);
          struct REGIONRecord_NATIONRecord* x18365 = (struct REGIONRecord_NATIONRecord*){x18364};
          GList* x18366 = x18359;
          GList* x18367 = g_list_next(x18366);
          x18359 = x18367;
          int x18369 = x18365->N_NATIONKEY;
          if((x18369==(x479))) {
            int x7964 = x57055;
            struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x7965 = &(x57056[x7964]);
            x7965->R_REGIONKEY = (x18365->R_REGIONKEY);
            x7965->R_NAME = (x18365->R_NAME);
            x7965->R_COMMENT = (x18365->R_COMMENT);
            x7965->N_NATIONKEY = x18369;
            x7965->N_NAME = (x18365->N_NAME);
            x7965->N_REGIONKEY = (x18365->N_REGIONKEY);
            x7965->N_COMMENT = (x18365->N_COMMENT);
            x7965->C_CUSTKEY = (x477->C_CUSTKEY);
            x7965->C_NAME = (x477->C_NAME);
            x7965->C_ADDRESS = (x477->C_ADDRESS);
            x7965->C_NATIONKEY = x479;
            x7965->C_PHONE = (x477->C_PHONE);
            x7965->C_ACCTBAL = (x477->C_ACCTBAL);
            x7965->C_MKTSEGMENT = (x477->C_MKTSEGMENT);
            x7965->C_COMMENT = (x477->C_COMMENT);
            int x7981 = x57055;
            x57055 = (x7981+(1));
            void* x15473 = (void*){(x7965->C_CUSTKEY)};
            void* x15475 = g_hash_table_lookup(x57017, x15473);
            GList** x15476 = (GList**){x15475};
            GList** x15477 = NULL;
            /* VAR */ GList** ite46779 = 0;
            if((x15476==(x15477))) {
              GList** x46780 = malloc(8);
              GList* x46781 = NULL;
              pointer_assign(x46780, x46781);
              ite46779 = x46780;
            } else {
              
              ite46779 = x15476;
            };
            GList** x15482 = ite46779;
            GList* x15483 = *(x15482);
            GList* x15484 = g_list_prepend(x15483, ((void*){x7965}));
            pointer_assign(x15482, x15484);
            g_hash_table_insert(x57017, x15473, ((void*){x15482}));
          };
        };
      };
      int x3784 = x57148;
      x57148 = (x3784+(1));
    };
    while(1) {
      
      int x57515 = x57147;
      if (!((x57515<(x9862)))) break; 
      
      int x3793 = x57147;
      struct ORDERSRecord* x517 = &(x12335[x3793]);
      int x519 = x517->O_ORDERDATE;
      /* VAR */ int ite50361 = 0;
      if((x519>=(19960101))) {
        ite50361 = (x519<(19970101));
      } else {
        
        ite50361 = 0;
      };
      int x46802 = ite50361;
      if(x46802) {
        int x523 = x517->O_CUSTKEY;
        void* x15505 = g_hash_table_lookup(x57017, ((void*){x523}));
        GList** x15506 = (GList**){x15505};
        if((x15506!=(NULL))) {
          GList* x18515 = *(x15506);
          /* VAR */ GList* x18516 = x18515;
          while(1) {
            
            GList* x18517 = x18516;
            GList* x18518 = NULL;
            if (!((x18517!=(x18518)))) break; 
            
            GList* x18520 = x18516;
            void* x18521 = g_list_nth_data(x18520, 0);
            struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x18522 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord*){x18521};
            GList* x18523 = x18516;
            GList* x18524 = g_list_next(x18523);
            x18516 = x18524;
            int x18526 = x18522->C_CUSTKEY;
            if((x18526==(x523))) {
              int x8032 = x57072;
              struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x8033 = &(x57073[x8032]);
              x8033->R_REGIONKEY = (x18522->R_REGIONKEY);
              x8033->R_NAME = (x18522->R_NAME);
              x8033->R_COMMENT = (x18522->R_COMMENT);
              x8033->N_NATIONKEY = (x18522->N_NATIONKEY);
              x8033->N_NAME = (x18522->N_NAME);
              x8033->N_REGIONKEY = (x18522->N_REGIONKEY);
              x8033->N_COMMENT = (x18522->N_COMMENT);
              x8033->C_CUSTKEY = x18526;
              x8033->C_NAME = (x18522->C_NAME);
              x8033->C_ADDRESS = (x18522->C_ADDRESS);
              x8033->C_NATIONKEY = (x18522->C_NATIONKEY);
              x8033->C_PHONE = (x18522->C_PHONE);
              x8033->C_ACCTBAL = (x18522->C_ACCTBAL);
              x8033->C_MKTSEGMENT = (x18522->C_MKTSEGMENT);
              x8033->C_COMMENT = (x18522->C_COMMENT);
              x8033->O_ORDERKEY = (x517->O_ORDERKEY);
              x8033->O_CUSTKEY = x523;
              x8033->O_ORDERSTATUS = (x517->O_ORDERSTATUS);
              x8033->O_TOTALPRICE = (x517->O_TOTALPRICE);
              x8033->O_ORDERDATE = x519;
              x8033->O_ORDERPRIORITY = (x517->O_ORDERPRIORITY);
              x8033->O_CLERK = (x517->O_CLERK);
              x8033->O_SHIPPRIORITY = (x517->O_SHIPPRIORITY);
              x8033->O_COMMENT = (x517->O_COMMENT);
              int x8058 = x57072;
              x57072 = (x8058+(1));
              void* x15567 = (void*){(x8033->O_ORDERKEY)};
              void* x15569 = g_hash_table_lookup(x57007, x15567);
              GList** x15570 = (GList**){x15569};
              GList** x15571 = NULL;
              /* VAR */ GList** ite46959 = 0;
              if((x15570==(x15571))) {
                GList** x46960 = malloc(8);
                GList* x46961 = NULL;
                pointer_assign(x46960, x46961);
                ite46959 = x46960;
              } else {
                
                ite46959 = x15570;
              };
              GList** x15576 = ite46959;
              GList* x15577 = *(x15576);
              GList* x15578 = g_list_prepend(x15577, ((void*){x8033}));
              pointer_assign(x15576, x15578);
              g_hash_table_insert(x57007, x15567, ((void*){x15576}));
            };
          };
        };
      };
      int x3868 = x57147;
      x57147 = (x3868+(1));
    };
    while(1) {
      
      int x57701 = x57146;
      if (!((x57701<(x9668)))) break; 
      
      int x3877 = x57146;
      struct LINEITEMRecord* x562 = &(x12141[x3877]);
      int x564 = x562->L_ORDERKEY;
      void* x15594 = g_hash_table_lookup(x57007, ((void*){x564}));
      GList** x15595 = (GList**){x15594};
      if((x15595!=(NULL))) {
        GList* x18867 = *(x15595);
        /* VAR */ GList* x18868 = x18867;
        while(1) {
          
          GList* x18869 = x18868;
          GList* x18870 = NULL;
          if (!((x18869!=(x18870)))) break; 
          
          GList* x18872 = x18868;
          void* x18873 = g_list_nth_data(x18872, 0);
          struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x18874 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord*){x18873};
          GList* x18875 = x18868;
          GList* x18876 = g_list_next(x18875);
          x18868 = x18876;
          int x18878 = x18874->O_ORDERKEY;
          if((x18878==(x564))) {
            int x1747 = x18874->N_NATIONKEY;
            int x1768 = x562->L_SUPPKEY;
            void* x15644 = g_hash_table_lookup(x56997, ((void*){x1768}));
            GList** x15645 = (GList**){x15644};
            if((x15645!=(NULL))) {
              GList* x18766 = *(x15645);
              /* VAR */ GList* x18767 = x18766;
              while(1) {
                
                GList* x18768 = x18767;
                GList* x18769 = NULL;
                if (!((x18768!=(x18769)))) break; 
                
                GList* x18771 = x18767;
                void* x18772 = g_list_nth_data(x18771, 0);
                struct SUPPLIERRecord* x18773 = (struct SUPPLIERRecord*){x18772};
                GList* x18774 = x18767;
                GList* x18775 = g_list_next(x18774);
                x18767 = x18775;
                int x18777 = x18773->S_SUPPKEY;
                /* VAR */ int ite50989 = 0;
                if((x18777==(x1768))) {
                  ite50989 = (x1747==((x18773->S_NATIONKEY)));
                } else {
                  
                  ite50989 = 0;
                };
                int x47401 = ite50989;
                if(x47401) {
                  int x8139 = x57089;
                  struct SUPPLIERRecord_REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord_LINEITEMRecord* x8140 = &(x57090[x8139]);
                  x8140->S_SUPPKEY = x18777;
                  x8140->S_NAME = (x18773->S_NAME);
                  x8140->S_ADDRESS = (x18773->S_ADDRESS);
                  x8140->S_NATIONKEY = (x18773->S_NATIONKEY);
                  x8140->S_PHONE = (x18773->S_PHONE);
                  x8140->S_ACCTBAL = (x18773->S_ACCTBAL);
                  x8140->S_COMMENT = (x18773->S_COMMENT);
                  x8140->R_REGIONKEY = (x18874->R_REGIONKEY);
                  x8140->R_NAME = (x18874->R_NAME);
                  x8140->R_COMMENT = (x18874->R_COMMENT);
                  x8140->N_NATIONKEY = x1747;
                  x8140->N_NAME = (x18874->N_NAME);
                  x8140->N_REGIONKEY = (x18874->N_REGIONKEY);
                  x8140->N_COMMENT = (x18874->N_COMMENT);
                  x8140->C_CUSTKEY = (x18874->C_CUSTKEY);
                  x8140->C_NAME = (x18874->C_NAME);
                  x8140->C_ADDRESS = (x18874->C_ADDRESS);
                  x8140->C_NATIONKEY = (x18874->C_NATIONKEY);
                  x8140->C_PHONE = (x18874->C_PHONE);
                  x8140->C_ACCTBAL = (x18874->C_ACCTBAL);
                  x8140->C_MKTSEGMENT = (x18874->C_MKTSEGMENT);
                  x8140->C_COMMENT = (x18874->C_COMMENT);
                  x8140->O_ORDERKEY = x18878;
                  x8140->O_CUSTKEY = (x18874->O_CUSTKEY);
                  x8140->O_ORDERSTATUS = (x18874->O_ORDERSTATUS);
                  x8140->O_TOTALPRICE = (x18874->O_TOTALPRICE);
                  x8140->O_ORDERDATE = (x18874->O_ORDERDATE);
                  x8140->O_ORDERPRIORITY = (x18874->O_ORDERPRIORITY);
                  x8140->O_CLERK = (x18874->O_CLERK);
                  x8140->O_SHIPPRIORITY = (x18874->O_SHIPPRIORITY);
                  x8140->O_COMMENT = (x18874->O_COMMENT);
                  x8140->L_ORDERKEY = x564;
                  x8140->L_PARTKEY = (x562->L_PARTKEY);
                  x8140->L_SUPPKEY = x1768;
                  x8140->L_LINENUMBER = (x562->L_LINENUMBER);
                  x8140->L_QUANTITY = (x562->L_QUANTITY);
                  x8140->L_EXTENDEDPRICE = (x562->L_EXTENDEDPRICE);
                  x8140->L_DISCOUNT = (x562->L_DISCOUNT);
                  x8140->L_TAX = (x562->L_TAX);
                  x8140->L_RETURNFLAG = (x562->L_RETURNFLAG);
                  x8140->L_LINESTATUS = (x562->L_LINESTATUS);
                  x8140->L_SHIPDATE = (x562->L_SHIPDATE);
                  x8140->L_COMMITDATE = (x562->L_COMMITDATE);
                  x8140->L_RECEIPTDATE = (x562->L_RECEIPTDATE);
                  x8140->L_SHIPINSTRUCT = (x562->L_SHIPINSTRUCT);
                  x8140->L_SHIPMODE = (x562->L_SHIPMODE);
                  x8140->L_COMMENT = (x562->L_COMMENT);
                  int x8188 = x57089;
                  x57089 = (x8188+(1));
                  char* x728 = x8140->N_NAME;
                  void* x18842 = g_hash_table_lookup(x56987, x728);
                  /* VAR */ struct AGGRecord_OptimalString* ite47465 = 0;
                  if((x18842==(NULL))) {
                    int x47466 = x57106;
                    double* x47467 = x57107[x47466];
                    int x47468 = x57106;
                    x57106 = (x47468+(1));
                    int x47471 = x57118;
                    struct AGGRecord_OptimalString* x47472 = &(x57119[x47471]);
                    x47472->key = x728;
                    x47472->aggs = x47467;
                    int x47475 = x57118;
                    x57118 = (x47475+(1));
                    g_hash_table_insert(x56987, x728, x47472);
                    ite47465 = x47472;
                  } else {
                    
                    ite47465 = x18842;
                  };
                  struct AGGRecord_OptimalString* x18757 = ite47465;
                  double* x733 = x18757->aggs;
                  double x747 = x733[0];
                  *x733 = (x747+(((x8140->L_EXTENDEDPRICE)*((1.0-((x8140->L_DISCOUNT)))))));
                };
              };
            };
          };
        };
      };
      int x4169 = x57146;
      x57146 = (x4169+(1));
    };
    GList* x58248 = g_hash_table_get_keys(x56987);
    /* VAR */ GList* x58249 = x58248;
    int x58250 = g_hash_table_size(x56987);
    int x40956 = 0;
    for(; x40956 < x58250 ; x40956 += 1) {
      
      GList* x40957 = x58249;
      void* x40958 = g_list_nth_data(x40957, 0);
      GList* x40959 = g_list_next(x40957);
      x58249 = x40959;
      void* x40961 = g_hash_table_lookup(x56987, x40958);
      struct AGGRecord_OptimalString* x40963 = (struct AGGRecord_OptimalString*){x40961};
      g_tree_insert(x57197, x40963, x40963);
    };
    while(1) {
      
      int x4178 = x57198;
      int x778 = !(x4178);
      /* VAR */ int ite51119 = 0;
      if(x778) {
        int x58275 = g_tree_nnodes(x57197);
        ite51119 = (x58275!=(0));
      } else {
        
        ite51119 = 0;
      };
      int x47524 = ite51119;
      if (!(x47524)) break; 
      
      void* x19149 = NULL;
      void** x19157 = &(x19149);
      g_tree_foreach(x57197, x19156, x19157);
      struct AGGRecord_OptimalString* x19159 = (struct AGGRecord_OptimalString*){x19149};
      int x19160 = g_tree_remove(x57197, x19159);
      if(0) {
        x57198 = 1;
      } else {
        
        double x794 = ((double*) { x19159->aggs })[0];
        printf("%s|%.4f\n", (x19159->key), x794);
        int x4196 = x57199;
        x57199 = (x4196+(1));
      };
    };
    int x58302 = x57199;
    printf("(%d rows)\n", x58302);
    struct timeval* x58304 = &x57141;
    gettimeofday(x58304, NULL);
    struct timeval* x58306 = &x57137;
    struct timeval* x58307 = &x57141;
    struct timeval* x58308 = &x57139;
    long x58309 = timeval_subtract(x58306, x58307, x58308);
    printf("Generated code run in %ld milliseconds.\n", x58309);
  };
}
/* ----------- FUNCTIONS ----------- */
int x56964(char* x17931) {
  int x35811 = strlen(x17931);
  /* VAR */ int x31847 = 0;
  /* VAR */ int x31848 = 0;
  while(1) {
    
    int x31849 = x31847;
    if (!((x31849<(x35811)))) break; 
    
    int x31851 = x31848;
    int x31852 = x31847;
    char* x35819 = pointer_add(x17931, x31852);
    char x35820 = *(x35819);
    x31848 = (x31851+(x35820));
    int x31857 = x31847;
    x31847 = (x31857+(1));
  };
  int x31861 = x31848;
  return x31861; 
}

int x56982(char* x17936, char* x17937) {
  int x31865 = strcmp(x17936, x17937);
  int x31866 = !(x31865);
  return x31866; 
}

int x56988(void* x15132) {
  int x15133 = g_direct_hash(x15132);
  return x15133; 
}

int x56991(void* x15135, void* x15136) {
  int x15137 = g_direct_equal(x15135, x15136);
  return x15137; 
}

int x56998(void* x15142) {
  int x15143 = g_direct_hash(x15142);
  return x15143; 
}

int x57001(void* x15145, void* x15146) {
  int x15147 = g_direct_equal(x15145, x15146);
  return x15147; 
}

int x57008(void* x15152) {
  int x15153 = g_direct_hash(x15152);
  return x15153; 
}

int x57011(void* x15155, void* x15156) {
  int x15157 = g_direct_equal(x15155, x15156);
  return x15157; 
}

int x57018(void* x15162) {
  int x15163 = g_direct_hash(x15162);
  return x15163; 
}

int x57021(void* x15165, void* x15166) {
  int x15167 = g_direct_equal(x15165, x15166);
  return x15167; 
}

int x57028(void* x15172) {
  int x15173 = g_direct_hash(x15172);
  return x15173; 
}

int x57031(void* x15175, void* x15176) {
  int x15177 = g_direct_equal(x15175, x15176);
  return x15177; 
}

int x57173(struct AGGRecord_OptimalString* x375, struct AGGRecord_OptimalString* x376) {
  double* x377 = x375->aggs;
  double x378 = x377[0];
  double* x379 = x376->aggs;
  double x380 = x379[0];
  /* VAR */ int ite46467 = 0;
  if((x378<(x380))) {
    ite46467 = 1;
  } else {
    
    double x46469 = x377[0];
    double x46470 = x379[0];
    /* VAR */ int ite46473 = 0;
    if((x46469>(x46470))) {
      ite46473 = -1;
    } else {
      
      ite46473 = 0;
    };
    int x46472 = ite46473;
    ite46467 = x46472;
  };
  int x386 = ite46467;
  return x386; 
}

int x19156(void* x19150, void* x19151, void* x19152) {
  pointer_assign(((struct AGGRecord_OptimalString**){x19152}), ((struct AGGRecord_OptimalString*){x19151}));
  return 1; 
}
