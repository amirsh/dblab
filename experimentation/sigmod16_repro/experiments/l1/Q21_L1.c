#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct NATIONRecord_SUPPLIERRecord;
  struct LINEITEMRecord;
  struct AGGRecord_OptimalString;
  struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord;
  struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord;
  struct NATIONRecord;
  struct ORDERSRecord;
  struct SUPPLIERRecord;
  
  struct NATIONRecord_SUPPLIERRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
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
  
  struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
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
  
  struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
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
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  };
  
  


int x47835(char* x11304);

int x47853(char* x11309, char* x11310);

int x47859(void* x9229);

int x47862(void* x9232, void* x9233);

int x47869(void* x9239);

int x47872(void* x9242, void* x9243);

int x47879(void* x9249);

int x47882(void* x9252, void* x9253);

int x47889(void* x9259);

int x47892(void* x9262, void* x9263);

int x47899(void* x9269);

int x47902(void* x9272, void* x9273);

int x47947(struct AGGRecord_OptimalString* x294, struct AGGRecord_OptimalString* x295);

int x12428(void* x12422, void* x12423, void* x12424);
/* GLOBAL VARS */

struct timeval x4668;
int main(int argc, char** argv) {
  FILE* x5412 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x5413 = 0;
  int x5414 = x5413;
  int* x5415 = &x5414;
  int x5416 = fscanf(x5412, "%d", x5415);
  pclose(x5412);
  struct LINEITEMRecord** x7068 = (struct LINEITEMRecord**)malloc(x5414 * sizeof(struct LINEITEMRecord*));
  memset(x7068, 0, x5414 * sizeof(struct LINEITEMRecord*));
  int x5420 = O_RDONLY;
  int x5421 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x5420);
  struct stat x5422 = (struct stat){0};
  /* VAR */ struct stat x5423 = x5422;
  struct stat x5424 = x5423;
  struct stat* x5425 = &x5424;
  int x5426 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x5425);
  size_t x5427 = x5425->st_size;
  int x5428 = PROT_READ;
  int x5429 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x5427, x5428, x5429, x5421, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x5414);
    /* VAR */ int ite38111 = 0;
    if(x6) {
      char x45690 = *x3;
      int x45691 = x45690!=('\0');
      ite38111 = x45691;
    } else {
      
      ite38111 = 0;
    };
    int x34568 = ite38111;
    if (!(x34568)) break; 
    
    /* VAR */ int x5437 = 0;
    int x5438 = x5437;
    int* x5439 = &x5438;
    char* x5440 = strntoi_unchecked(x3, x5439);
    x3 = x5440;
    /* VAR */ int x5442 = 0;
    int x5443 = x5442;
    int* x5444 = &x5443;
    char* x5445 = strntoi_unchecked(x3, x5444);
    x3 = x5445;
    /* VAR */ int x5447 = 0;
    int x5448 = x5447;
    int* x5449 = &x5448;
    char* x5450 = strntoi_unchecked(x3, x5449);
    x3 = x5450;
    /* VAR */ int x5452 = 0;
    int x5453 = x5452;
    int* x5454 = &x5453;
    char* x5455 = strntoi_unchecked(x3, x5454);
    x3 = x5455;
    /* VAR */ double x5457 = 0.0;
    double x5458 = x5457;
    double* x5459 = &x5458;
    char* x5460 = strntod_unchecked(x3, x5459);
    x3 = x5460;
    /* VAR */ double x5462 = 0.0;
    double x5463 = x5462;
    double* x5464 = &x5463;
    char* x5465 = strntod_unchecked(x3, x5464);
    x3 = x5465;
    /* VAR */ double x5467 = 0.0;
    double x5468 = x5467;
    double* x5469 = &x5468;
    char* x5470 = strntod_unchecked(x3, x5469);
    x3 = x5470;
    /* VAR */ double x5472 = 0.0;
    double x5473 = x5472;
    double* x5474 = &x5473;
    char* x5475 = strntod_unchecked(x3, x5474);
    x3 = x5475;
    char x5477 = *x3;
    /* VAR */ char x5478 = x5477;
    x3 += 1;
    x3 += 1;
    char x5481 = x5478;
    char x5482 = *x3;
    /* VAR */ char x5483 = x5482;
    x3 += 1;
    x3 += 1;
    char x5486 = x5483;
    /* VAR */ int x5487 = 0;
    int x5488 = x5487;
    int* x5489 = &x5488;
    char* x5490 = strntoi_unchecked(x3, x5489);
    x3 = x5490;
    /* VAR */ int x5492 = 0;
    int x5493 = x5492;
    int* x5494 = &x5493;
    char* x5495 = strntoi_unchecked(x3, x5494);
    x3 = x5495;
    /* VAR */ int x5497 = 0;
    int x5498 = x5497;
    int* x5499 = &x5498;
    char* x5500 = strntoi_unchecked(x3, x5499);
    x3 = x5500;
    int x5502 = x5488*(10000);
    int x5503 = x5493*(100);
    int x5504 = x5502+(x5503);
    int x5505 = x5504+(x5498);
    /* VAR */ int x5506 = 0;
    int x5507 = x5506;
    int* x5508 = &x5507;
    char* x5509 = strntoi_unchecked(x3, x5508);
    x3 = x5509;
    /* VAR */ int x5511 = 0;
    int x5512 = x5511;
    int* x5513 = &x5512;
    char* x5514 = strntoi_unchecked(x3, x5513);
    x3 = x5514;
    /* VAR */ int x5516 = 0;
    int x5517 = x5516;
    int* x5518 = &x5517;
    char* x5519 = strntoi_unchecked(x3, x5518);
    x3 = x5519;
    int x5521 = x5507*(10000);
    int x5522 = x5512*(100);
    int x5523 = x5521+(x5522);
    int x5524 = x5523+(x5517);
    /* VAR */ int x5525 = 0;
    int x5526 = x5525;
    int* x5527 = &x5526;
    char* x5528 = strntoi_unchecked(x3, x5527);
    x3 = x5528;
    /* VAR */ int x5530 = 0;
    int x5531 = x5530;
    int* x5532 = &x5531;
    char* x5533 = strntoi_unchecked(x3, x5532);
    x3 = x5533;
    /* VAR */ int x5535 = 0;
    int x5536 = x5535;
    int* x5537 = &x5536;
    char* x5538 = strntoi_unchecked(x3, x5537);
    x3 = x5538;
    int x5540 = x5526*(10000);
    int x5541 = x5531*(100);
    int x5542 = x5540+(x5541);
    int x5543 = x5542+(x5536);
    char* x7194 = (char*)malloc(26 * sizeof(char));
    memset(x7194, 0, 26 * sizeof(char));
    /* VAR */ char* x5545 = x3;
    while(1) {
      
      char x5546 = *x3;
      int x5547 = x5546!=('|');
      /* VAR */ int ite38232 = 0;
      if(x5547) {
        char x45810 = *x3;
        int x45811 = x45810!=('\n');
        ite38232 = x45811;
      } else {
        
        ite38232 = 0;
      };
      int x34682 = ite38232;
      if (!(x34682)) break; 
      
      x3 += 1;
    };
    char* x5553 = x5545;
    int x5554 = x3 - x5553;
    char* x5555 = x5545;
    char* x5556 = strncpy(x7194, x5555, x5554);
    x3 += 1;
    char* x7212 = (char*)malloc(11 * sizeof(char));
    memset(x7212, 0, 11 * sizeof(char));
    /* VAR */ char* x5564 = x3;
    while(1) {
      
      char x5565 = *x3;
      int x5566 = x5565!=('|');
      /* VAR */ int ite38255 = 0;
      if(x5566) {
        char x45832 = *x3;
        int x45833 = x45832!=('\n');
        ite38255 = x45833;
      } else {
        
        ite38255 = 0;
      };
      int x34698 = ite38255;
      if (!(x34698)) break; 
      
      x3 += 1;
    };
    char* x5572 = x5564;
    int x5573 = x3 - x5572;
    char* x5574 = x5564;
    char* x5575 = strncpy(x7212, x5574, x5573);
    x3 += 1;
    char* x7230 = (char*)malloc(45 * sizeof(char));
    memset(x7230, 0, 45 * sizeof(char));
    /* VAR */ char* x5583 = x3;
    while(1) {
      
      char x5584 = *x3;
      int x5585 = x5584!=('|');
      /* VAR */ int ite38278 = 0;
      if(x5585) {
        char x45854 = *x3;
        int x45855 = x45854!=('\n');
        ite38278 = x45855;
      } else {
        
        ite38278 = 0;
      };
      int x34714 = ite38278;
      if (!(x34714)) break; 
      
      x3 += 1;
    };
    char* x5591 = x5583;
    int x5592 = x3 - x5591;
    char* x5593 = x5583;
    char* x5594 = strncpy(x7230, x5593, x5592);
    x3 += 1;
    struct LINEITEMRecord* x8061 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x8061, 0, 1 * sizeof(struct LINEITEMRecord));
    x8061->L_ORDERKEY = x5438; x8061->L_PARTKEY = x5443; x8061->L_SUPPKEY = x5448; x8061->L_LINENUMBER = x5453; x8061->L_QUANTITY = x5458; x8061->L_EXTENDEDPRICE = x5463; x8061->L_DISCOUNT = x5468; x8061->L_TAX = x5473; x8061->L_RETURNFLAG = x5481; x8061->L_LINESTATUS = x5486; x8061->L_SHIPDATE = x5505; x8061->L_COMMITDATE = x5524; x8061->L_RECEIPTDATE = x5543; x8061->L_SHIPINSTRUCT = x7194; x8061->L_SHIPMODE = x7212; x8061->L_COMMENT = x7230;
    int x47 = x4;
    *(x7068 + x47) = x8061;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x5607 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x5608 = 0;
  int x5609 = x5608;
  int* x5610 = &x5609;
  int x5611 = fscanf(x5607, "%d", x5610);
  pclose(x5607);
  struct SUPPLIERRecord** x7260 = (struct SUPPLIERRecord**)malloc(x5609 * sizeof(struct SUPPLIERRecord*));
  memset(x7260, 0, x5609 * sizeof(struct SUPPLIERRecord*));
  int x5615 = O_RDONLY;
  int x5616 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x5615);
  /* VAR */ struct stat x5617 = x5422;
  struct stat x5618 = x5617;
  struct stat* x5619 = &x5618;
  int x5620 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x5619);
  size_t x5621 = x5619->st_size;
  int x5622 = PROT_READ;
  int x5623 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x5621, x5622, x5623, x5616, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x5609);
    /* VAR */ int ite38325 = 0;
    if(x58) {
      char x45900 = *x55;
      int x45901 = x45900!=('\0');
      ite38325 = x45901;
    } else {
      
      ite38325 = 0;
    };
    int x34754 = ite38325;
    if (!(x34754)) break; 
    
    /* VAR */ int x5631 = 0;
    int x5632 = x5631;
    int* x5633 = &x5632;
    char* x5634 = strntoi_unchecked(x55, x5633);
    x55 = x5634;
    char* x7283 = (char*)malloc(26 * sizeof(char));
    memset(x7283, 0, 26 * sizeof(char));
    /* VAR */ char* x5637 = x55;
    while(1) {
      
      char x5638 = *x55;
      int x5639 = x5638!=('|');
      /* VAR */ int ite38344 = 0;
      if(x5639) {
        char x45918 = *x55;
        int x45919 = x45918!=('\n');
        ite38344 = x45919;
      } else {
        
        ite38344 = 0;
      };
      int x34766 = ite38344;
      if (!(x34766)) break; 
      
      x55 += 1;
    };
    char* x5645 = x5637;
    int x5646 = x55 - x5645;
    char* x5647 = x5637;
    char* x5648 = strncpy(x7283, x5647, x5646);
    x55 += 1;
    char* x7301 = (char*)malloc(41 * sizeof(char));
    memset(x7301, 0, 41 * sizeof(char));
    /* VAR */ char* x5656 = x55;
    while(1) {
      
      char x5657 = *x55;
      int x5658 = x5657!=('|');
      /* VAR */ int ite38367 = 0;
      if(x5658) {
        char x45940 = *x55;
        int x45941 = x45940!=('\n');
        ite38367 = x45941;
      } else {
        
        ite38367 = 0;
      };
      int x34782 = ite38367;
      if (!(x34782)) break; 
      
      x55 += 1;
    };
    char* x5664 = x5656;
    int x5665 = x55 - x5664;
    char* x5666 = x5656;
    char* x5667 = strncpy(x7301, x5666, x5665);
    x55 += 1;
    /* VAR */ int x5674 = 0;
    int x5675 = x5674;
    int* x5676 = &x5675;
    char* x5677 = strntoi_unchecked(x55, x5676);
    x55 = x5677;
    char* x7324 = (char*)malloc(16 * sizeof(char));
    memset(x7324, 0, 16 * sizeof(char));
    /* VAR */ char* x5680 = x55;
    while(1) {
      
      char x5681 = *x55;
      int x5682 = x5681!=('|');
      /* VAR */ int ite38395 = 0;
      if(x5682) {
        char x45967 = *x55;
        int x45968 = x45967!=('\n');
        ite38395 = x45968;
      } else {
        
        ite38395 = 0;
      };
      int x34803 = ite38395;
      if (!(x34803)) break; 
      
      x55 += 1;
    };
    char* x5688 = x5680;
    int x5689 = x55 - x5688;
    char* x5690 = x5680;
    char* x5691 = strncpy(x7324, x5690, x5689);
    x55 += 1;
    /* VAR */ double x5698 = 0.0;
    double x5699 = x5698;
    double* x5700 = &x5699;
    char* x5701 = strntod_unchecked(x55, x5700);
    x55 = x5701;
    char* x7347 = (char*)malloc(102 * sizeof(char));
    memset(x7347, 0, 102 * sizeof(char));
    /* VAR */ char* x5704 = x55;
    while(1) {
      
      char x5705 = *x55;
      int x5706 = x5705!=('|');
      /* VAR */ int ite38423 = 0;
      if(x5706) {
        char x45994 = *x55;
        int x45995 = x45994!=('\n');
        ite38423 = x45995;
      } else {
        
        ite38423 = 0;
      };
      int x34824 = ite38423;
      if (!(x34824)) break; 
      
      x55 += 1;
    };
    char* x5712 = x5704;
    int x5713 = x55 - x5712;
    char* x5714 = x5704;
    char* x5715 = strncpy(x7347, x5714, x5713);
    x55 += 1;
    struct SUPPLIERRecord* x8180 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x8180, 0, 1 * sizeof(struct SUPPLIERRecord));
    x8180->S_SUPPKEY = x5632; x8180->S_NAME = x7283; x8180->S_ADDRESS = x7301; x8180->S_NATIONKEY = x5675; x8180->S_PHONE = x7324; x8180->S_ACCTBAL = x5699; x8180->S_COMMENT = x7347;
    int x97 = x56;
    *(x7260 + x97) = x8180;
    int x99 = x56;
    int x100 = x99+(1);
    x56 = x100;
  };
  FILE* x5728 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x5729 = 0;
  int x5730 = x5729;
  int* x5731 = &x5730;
  int x5732 = fscanf(x5728, "%d", x5731);
  pclose(x5728);
  struct ORDERSRecord** x7377 = (struct ORDERSRecord**)malloc(x5730 * sizeof(struct ORDERSRecord*));
  memset(x7377, 0, x5730 * sizeof(struct ORDERSRecord*));
  int x5736 = O_RDONLY;
  int x5737 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x5736);
  /* VAR */ struct stat x5738 = x5422;
  struct stat x5739 = x5738;
  struct stat* x5740 = &x5739;
  int x5741 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x5740);
  size_t x5742 = x5740->st_size;
  int x5743 = PROT_READ;
  int x5744 = MAP_PRIVATE;
  char* x105 = mmap(NULL, x5742, x5743, x5744, x5737, 0);
  /* VAR */ int x106 = 0;
  while(1) {
    
    int x107 = x106;
    int x108 = x107<(x5730);
    /* VAR */ int ite38470 = 0;
    if(x108) {
      char x46040 = *x105;
      int x46041 = x46040!=('\0');
      ite38470 = x46041;
    } else {
      
      ite38470 = 0;
    };
    int x34864 = ite38470;
    if (!(x34864)) break; 
    
    /* VAR */ int x5752 = 0;
    int x5753 = x5752;
    int* x5754 = &x5753;
    char* x5755 = strntoi_unchecked(x105, x5754);
    x105 = x5755;
    /* VAR */ int x5757 = 0;
    int x5758 = x5757;
    int* x5759 = &x5758;
    char* x5760 = strntoi_unchecked(x105, x5759);
    x105 = x5760;
    char x5762 = *x105;
    /* VAR */ char x5763 = x5762;
    x105 += 1;
    x105 += 1;
    char x5766 = x5763;
    /* VAR */ double x5767 = 0.0;
    double x5768 = x5767;
    double* x5769 = &x5768;
    char* x5770 = strntod_unchecked(x105, x5769);
    x105 = x5770;
    /* VAR */ int x5772 = 0;
    int x5773 = x5772;
    int* x5774 = &x5773;
    char* x5775 = strntoi_unchecked(x105, x5774);
    x105 = x5775;
    /* VAR */ int x5777 = 0;
    int x5778 = x5777;
    int* x5779 = &x5778;
    char* x5780 = strntoi_unchecked(x105, x5779);
    x105 = x5780;
    /* VAR */ int x5782 = 0;
    int x5783 = x5782;
    int* x5784 = &x5783;
    char* x5785 = strntoi_unchecked(x105, x5784);
    x105 = x5785;
    int x5787 = x5773*(10000);
    int x5788 = x5778*(100);
    int x5789 = x5787+(x5788);
    int x5790 = x5789+(x5783);
    char* x7434 = (char*)malloc(16 * sizeof(char));
    memset(x7434, 0, 16 * sizeof(char));
    /* VAR */ char* x5792 = x105;
    while(1) {
      
      char x5793 = *x105;
      int x5794 = x5793!=('|');
      /* VAR */ int ite38523 = 0;
      if(x5794) {
        char x46092 = *x105;
        int x46093 = x46092!=('\n');
        ite38523 = x46093;
      } else {
        
        ite38523 = 0;
      };
      int x34910 = ite38523;
      if (!(x34910)) break; 
      
      x105 += 1;
    };
    char* x5800 = x5792;
    int x5801 = x105 - x5800;
    char* x5802 = x5792;
    char* x5803 = strncpy(x7434, x5802, x5801);
    x105 += 1;
    char* x7452 = (char*)malloc(16 * sizeof(char));
    memset(x7452, 0, 16 * sizeof(char));
    /* VAR */ char* x5811 = x105;
    while(1) {
      
      char x5812 = *x105;
      int x5813 = x5812!=('|');
      /* VAR */ int ite38546 = 0;
      if(x5813) {
        char x46114 = *x105;
        int x46115 = x46114!=('\n');
        ite38546 = x46115;
      } else {
        
        ite38546 = 0;
      };
      int x34926 = ite38546;
      if (!(x34926)) break; 
      
      x105 += 1;
    };
    char* x5819 = x5811;
    int x5820 = x105 - x5819;
    char* x5821 = x5811;
    char* x5822 = strncpy(x7452, x5821, x5820);
    x105 += 1;
    /* VAR */ int x5829 = 0;
    int x5830 = x5829;
    int* x5831 = &x5830;
    char* x5832 = strntoi_unchecked(x105, x5831);
    x105 = x5832;
    char* x7475 = (char*)malloc(80 * sizeof(char));
    memset(x7475, 0, 80 * sizeof(char));
    /* VAR */ char* x5835 = x105;
    while(1) {
      
      char x5836 = *x105;
      int x5837 = x5836!=('|');
      /* VAR */ int ite38574 = 0;
      if(x5837) {
        char x46141 = *x105;
        int x46142 = x46141!=('\n');
        ite38574 = x46142;
      } else {
        
        ite38574 = 0;
      };
      int x34947 = ite38574;
      if (!(x34947)) break; 
      
      x105 += 1;
    };
    char* x5843 = x5835;
    int x5844 = x105 - x5843;
    char* x5845 = x5835;
    char* x5846 = strncpy(x7475, x5845, x5844);
    x105 += 1;
    struct ORDERSRecord* x8310 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x8310, 0, 1 * sizeof(struct ORDERSRecord));
    x8310->O_ORDERKEY = x5753; x8310->O_CUSTKEY = x5758; x8310->O_ORDERSTATUS = x5766; x8310->O_TOTALPRICE = x5768; x8310->O_ORDERDATE = x5790; x8310->O_ORDERPRIORITY = x7434; x8310->O_CLERK = x7452; x8310->O_SHIPPRIORITY = x5830; x8310->O_COMMENT = x7475;
    int x141 = x106;
    *(x7377 + x141) = x8310;
    int x143 = x106;
    int x144 = x143+(1);
    x106 = x144;
  };
  FILE* x5859 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x5860 = 0;
  int x5861 = x5860;
  int* x5862 = &x5861;
  int x5863 = fscanf(x5859, "%d", x5862);
  pclose(x5859);
  struct NATIONRecord** x7505 = (struct NATIONRecord**)malloc(x5861 * sizeof(struct NATIONRecord*));
  memset(x7505, 0, x5861 * sizeof(struct NATIONRecord*));
  int x5867 = O_RDONLY;
  int x5868 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x5867);
  /* VAR */ struct stat x5869 = x5422;
  struct stat x5870 = x5869;
  struct stat* x5871 = &x5870;
  int x5872 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x5871);
  size_t x5873 = x5871->st_size;
  int x5874 = PROT_READ;
  int x5875 = MAP_PRIVATE;
  char* x149 = mmap(NULL, x5873, x5874, x5875, x5868, 0);
  /* VAR */ int x150 = 0;
  while(1) {
    
    int x151 = x150;
    int x152 = x151<(x5861);
    /* VAR */ int ite38621 = 0;
    if(x152) {
      char x46187 = *x149;
      int x46188 = x46187!=('\0');
      ite38621 = x46188;
    } else {
      
      ite38621 = 0;
    };
    int x34987 = ite38621;
    if (!(x34987)) break; 
    
    /* VAR */ int x5883 = 0;
    int x5884 = x5883;
    int* x5885 = &x5884;
    char* x5886 = strntoi_unchecked(x149, x5885);
    x149 = x5886;
    char* x7528 = (char*)malloc(26 * sizeof(char));
    memset(x7528, 0, 26 * sizeof(char));
    /* VAR */ char* x5889 = x149;
    while(1) {
      
      char x5890 = *x149;
      int x5891 = x5890!=('|');
      /* VAR */ int ite38640 = 0;
      if(x5891) {
        char x46205 = *x149;
        int x46206 = x46205!=('\n');
        ite38640 = x46206;
      } else {
        
        ite38640 = 0;
      };
      int x34999 = ite38640;
      if (!(x34999)) break; 
      
      x149 += 1;
    };
    char* x5897 = x5889;
    int x5898 = x149 - x5897;
    char* x5899 = x5889;
    char* x5900 = strncpy(x7528, x5899, x5898);
    x149 += 1;
    /* VAR */ int x5907 = 0;
    int x5908 = x5907;
    int* x5909 = &x5908;
    char* x5910 = strntoi_unchecked(x149, x5909);
    x149 = x5910;
    char* x7551 = (char*)malloc(153 * sizeof(char));
    memset(x7551, 0, 153 * sizeof(char));
    /* VAR */ char* x5913 = x149;
    while(1) {
      
      char x5914 = *x149;
      int x5915 = x5914!=('|');
      /* VAR */ int ite38668 = 0;
      if(x5915) {
        char x46232 = *x149;
        int x46233 = x46232!=('\n');
        ite38668 = x46233;
      } else {
        
        ite38668 = 0;
      };
      int x35020 = ite38668;
      if (!(x35020)) break; 
      
      x149 += 1;
    };
    char* x5921 = x5913;
    int x5922 = x149 - x5921;
    char* x5923 = x5913;
    char* x5924 = strncpy(x7551, x5923, x5922);
    x149 += 1;
    struct NATIONRecord* x8388 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x8388, 0, 1 * sizeof(struct NATIONRecord));
    x8388->N_NATIONKEY = x5884; x8388->N_NAME = x7528; x8388->N_REGIONKEY = x5908; x8388->N_COMMENT = x7551;
    int x174 = x150;
    *(x7505 + x174) = x8388;
    int x176 = x150;
    int x177 = x176+(1);
    x150 = x177;
  };
  int x181 = 0;
  for(; x181 < 1 ; x181 += 1) {
    
    GHashTable* x47858 = g_hash_table_new(x47835, x47853);
    void*** x47866 = (void***){x47859};
    int* x47867 = (int*){x47862};
    GHashTable* x47868 = g_hash_table_new(x47866, x47867);
    void*** x47876 = (void***){x47869};
    int* x47877 = (int*){x47872};
    GHashTable* x47878 = g_hash_table_new(x47876, x47877);
    void*** x47886 = (void***){x47879};
    int* x47887 = (int*){x47882};
    GHashTable* x47888 = g_hash_table_new(x47886, x47887);
    void*** x47896 = (void***){x47889};
    int* x47897 = (int*){x47892};
    GHashTable* x47898 = g_hash_table_new(x47896, x47897);
    void*** x47906 = (void***){x47899};
    int* x47907 = (int*){x47902};
    GHashTable* x47908 = g_hash_table_new(x47906, x47907);
    /* VAR */ struct timeval x47909 = x4668;
    struct timeval x47910 = x47909;
    /* VAR */ struct timeval x47911 = x4668;
    struct timeval x47912 = x47911;
    /* VAR */ struct timeval x47913 = x4668;
    struct timeval x47914 = x47913;
    struct timeval* x47915 = &x47912;
    gettimeofday(x47915, NULL);
    /* VAR */ int x47917 = 0;
    /* VAR */ int x47918 = 0;
    /* VAR */ int x47919 = 0;
    /* VAR */ int x47920 = 0;
    /* VAR */ int x47921 = 0;
    /* VAR */ int x47922 = 0;
    int* x47971 = &(x47947);
    GTree* x47972 = g_tree_new(x47971);
    /* VAR */ int x47973 = 0;
    /* VAR */ int x47974 = 0;
    while(1) {
      
      int x47976 = x47922;
      int x47977 = x47976<(x5730);
      if (!(x47977)) break; 
      
      int x2798 = x47922;
      struct ORDERSRecord* x323 = x7377[x2798];
      char x325 = x323->O_ORDERSTATUS;
      int x326 = x325==('F');
      if(x326) {
        int x327 = x323->O_ORDERKEY;
        void* x9321 = (void*){x327};
        void* x9322 = (void*){x323};
        void* x9323 = g_hash_table_lookup(x47868, x9321);
        GList** x9324 = (GList**){x9323};
        GList** x9325 = NULL;
        int x9326 = x9324==(x9325);
        /* VAR */ GList** ite36720 = 0;
        if(x9326) {
          GList** x36721 = malloc(8);
          GList* x36722 = NULL;
          pointer_assign(x36721, x36722);
          ite36720 = x36721;
        } else {
          
          ite36720 = x9324;
        };
        GList** x9330 = ite36720;
        GList* x9331 = *(x9330);
        GList* x9332 = g_list_prepend(x9331, x9322);
        pointer_assign(x9330, x9332);
        void* x9334 = (void*){x9330};
        g_hash_table_insert(x47868, x9321, x9334);
      };
      int x2806 = x47922;
      int x332 = x2806+(1);
      x47922 = x332;
    };
    while(1) {
      
      int x48008 = x47918;
      int x48009 = x48008<(x5414);
      if (!(x48009)) break; 
      
      int x2815 = x47918;
      struct LINEITEMRecord* x341 = x7068[x2815];
      int x343 = x341->L_ORDERKEY;
      void* x9346 = (void*){x343};
      void* x9347 = (void*){x341};
      void* x9348 = g_hash_table_lookup(x47888, x9346);
      GList** x9349 = (GList**){x9348};
      GList** x9350 = NULL;
      int x9351 = x9349==(x9350);
      /* VAR */ GList** ite36748 = 0;
      if(x9351) {
        GList** x36749 = malloc(8);
        GList* x36750 = NULL;
        pointer_assign(x36749, x36750);
        ite36748 = x36749;
      } else {
        
        ite36748 = x9349;
      };
      GList** x9355 = ite36748;
      GList* x9356 = *(x9355);
      GList* x9357 = g_list_prepend(x9356, x9347);
      pointer_assign(x9355, x9357);
      void* x9359 = (void*){x9355};
      g_hash_table_insert(x47888, x9346, x9359);
      int x2820 = x47918;
      int x347 = x2820+(1);
      x47918 = x347;
    };
    while(1) {
      
      int x48037 = x47921;
      int x48038 = x48037<(x5861);
      if (!(x48038)) break; 
      
      int x2829 = x47921;
      struct NATIONRecord* x356 = x7505[x2829];
      char* x358 = x356->N_NAME;
      int x26572 = strcmp(x358, "MOROCCO");
      int x26573 = x26572==(0);
      if(x26573) {
        int x360 = x356->N_NATIONKEY;
        void* x9374 = (void*){x360};
        void* x9375 = (void*){x356};
        void* x9376 = g_hash_table_lookup(x47908, x9374);
        GList** x9377 = (GList**){x9376};
        GList** x9378 = NULL;
        int x9379 = x9377==(x9378);
        /* VAR */ GList** ite36780 = 0;
        if(x9379) {
          GList** x36781 = malloc(8);
          GList* x36782 = NULL;
          pointer_assign(x36781, x36782);
          ite36780 = x36781;
        } else {
          
          ite36780 = x9377;
        };
        GList** x9383 = ite36780;
        GList* x9384 = *(x9383);
        GList* x9385 = g_list_prepend(x9384, x9375);
        pointer_assign(x9383, x9385);
        void* x9387 = (void*){x9383};
        g_hash_table_insert(x47908, x9374, x9387);
      };
      int x2837 = x47921;
      int x365 = x2837+(1);
      x47921 = x365;
    };
    while(1) {
      
      int x48070 = x47920;
      int x48071 = x48070<(x5609);
      if (!(x48071)) break; 
      
      int x2846 = x47920;
      struct SUPPLIERRecord* x374 = x7260[x2846];
      int x376 = x374->S_NATIONKEY;
      void* x9399 = (void*){x376};
      void* x9400 = g_hash_table_lookup(x47908, x9399);
      GList** x9401 = (GList**){x9400};
      int x19914 = x9401!=(NULL);
      if(x19914) {
        GList* x11539 = *(x9401);
        /* VAR */ GList* x11540 = x11539;
        while(1) {
          
          GList* x11541 = x11540;
          GList* x11542 = NULL;
          int x11543 = x11541!=(x11542);
          if (!(x11543)) break; 
          
          GList* x11544 = x11540;
          void* x11545 = g_list_nth_data(x11544, 0);
          struct NATIONRecord* x11546 = (struct NATIONRecord*){x11545};
          GList* x11547 = x11540;
          GList* x11548 = g_list_next(x11547);
          x11540 = x11548;
          int x11550 = x11546->N_NATIONKEY;
          int x11551 = x11550==(x376);
          if(x11551) {
            char* x1149 = x11546->N_NAME;
            int x1150 = x11546->N_REGIONKEY;
            char* x1151 = x11546->N_COMMENT;
            int x1152 = x374->S_SUPPKEY;
            char* x1153 = x374->S_NAME;
            char* x1154 = x374->S_ADDRESS;
            char* x1155 = x374->S_PHONE;
            double x1156 = x374->S_ACCTBAL;
            char* x1157 = x374->S_COMMENT;
            struct NATIONRecord_SUPPLIERRecord* x8501 = (struct NATIONRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord));
            memset(x8501, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord));
            x8501->N_NATIONKEY = x11550; x8501->N_NAME = x1149; x8501->N_REGIONKEY = x1150; x8501->N_COMMENT = x1151; x8501->S_SUPPKEY = x1152; x8501->S_NAME = x1153; x8501->S_ADDRESS = x1154; x8501->S_NATIONKEY = x376; x8501->S_PHONE = x1155; x8501->S_ACCTBAL = x1156; x8501->S_COMMENT = x1157;
            int x397 = x8501->S_SUPPKEY;
            void* x9424 = (void*){x397};
            void* x9425 = (void*){x8501};
            void* x9426 = g_hash_table_lookup(x47898, x9424);
            GList** x9427 = (GList**){x9426};
            GList** x9428 = NULL;
            int x9429 = x9427==(x9428);
            /* VAR */ GList** ite36879 = 0;
            if(x9429) {
              GList** x36880 = malloc(8);
              GList* x36881 = NULL;
              pointer_assign(x36880, x36881);
              ite36879 = x36880;
            } else {
              
              ite36879 = x9427;
            };
            GList** x9433 = ite36879;
            GList* x9434 = *(x9433);
            GList* x9435 = g_list_prepend(x9434, x9425);
            pointer_assign(x9433, x9435);
            void* x9437 = (void*){x9433};
            g_hash_table_insert(x47898, x9424, x9437);
          };
        };
      };
      int x2892 = x47920;
      int x405 = x2892+(1);
      x47920 = x405;
    };
    while(1) {
      
      int x48170 = x47917;
      int x48171 = x48170<(x5414);
      if (!(x48171)) break; 
      
      int x2902 = x47917;
      struct LINEITEMRecord* x415 = x7068[x2902];
      int x417 = x415->L_RECEIPTDATE;
      int x418 = x415->L_COMMITDATE;
      int x419 = x417>(x418);
      if(x419) {
        int x420 = x415->L_SUPPKEY;
        void* x9454 = (void*){x420};
        void* x9455 = g_hash_table_lookup(x47898, x9454);
        GList** x9456 = (GList**){x9455};
        int x20009 = x9456!=(NULL);
        if(x20009) {
          GList* x11667 = *(x9456);
          /* VAR */ GList* x11668 = x11667;
          while(1) {
            
            GList* x11669 = x11668;
            GList* x11670 = NULL;
            int x11671 = x11669!=(x11670);
            if (!(x11671)) break; 
            
            GList* x11672 = x11668;
            void* x11673 = g_list_nth_data(x11672, 0);
            struct NATIONRecord_SUPPLIERRecord* x11674 = (struct NATIONRecord_SUPPLIERRecord*){x11673};
            GList* x11675 = x11668;
            GList* x11676 = g_list_next(x11675);
            x11668 = x11676;
            int x11678 = x11674->S_SUPPKEY;
            int x11679 = x11678==(x420);
            if(x11679) {
              int x1257 = x11674->N_NATIONKEY;
              char* x1258 = x11674->N_NAME;
              int x1259 = x11674->N_REGIONKEY;
              char* x1260 = x11674->N_COMMENT;
              char* x1261 = x11674->S_NAME;
              char* x1262 = x11674->S_ADDRESS;
              int x1263 = x11674->S_NATIONKEY;
              char* x1264 = x11674->S_PHONE;
              double x1265 = x11674->S_ACCTBAL;
              char* x1266 = x11674->S_COMMENT;
              int x1267 = x415->L_ORDERKEY;
              int x1268 = x415->L_PARTKEY;
              int x1269 = x415->L_LINENUMBER;
              double x1270 = x415->L_QUANTITY;
              double x1271 = x415->L_EXTENDEDPRICE;
              double x1272 = x415->L_DISCOUNT;
              double x1273 = x415->L_TAX;
              char x1274 = x415->L_RETURNFLAG;
              char x1275 = x415->L_LINESTATUS;
              int x1276 = x415->L_SHIPDATE;
              char* x1277 = x415->L_SHIPINSTRUCT;
              char* x1278 = x415->L_SHIPMODE;
              char* x1279 = x415->L_COMMENT;
              struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x8553 = (struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
              memset(x8553, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
              x8553->N_NATIONKEY = x1257; x8553->N_NAME = x1258; x8553->N_REGIONKEY = x1259; x8553->N_COMMENT = x1260; x8553->S_SUPPKEY = x11678; x8553->S_NAME = x1261; x8553->S_ADDRESS = x1262; x8553->S_NATIONKEY = x1263; x8553->S_PHONE = x1264; x8553->S_ACCTBAL = x1265; x8553->S_COMMENT = x1266; x8553->L_ORDERKEY = x1267; x8553->L_PARTKEY = x1268; x8553->L_SUPPKEY = x420; x8553->L_LINENUMBER = x1269; x8553->L_QUANTITY = x1270; x8553->L_EXTENDEDPRICE = x1271; x8553->L_DISCOUNT = x1272; x8553->L_TAX = x1273; x8553->L_RETURNFLAG = x1274; x8553->L_LINESTATUS = x1275; x8553->L_SHIPDATE = x1276; x8553->L_COMMITDATE = x418; x8553->L_RECEIPTDATE = x417; x8553->L_SHIPINSTRUCT = x1277; x8553->L_SHIPMODE = x1278; x8553->L_COMMENT = x1279;
              int x472 = x8553->L_ORDERKEY;
              void* x9493 = (void*){x472};
              void* x9494 = g_hash_table_lookup(x47888, x9493);
              GList** x9495 = (GList**){x9494};
              int x20140 = x9495!=(NULL);
              if(x20140) {
                /* VAR */ struct LINEITEMRecord* x11723 = NULL;
                GList* x11724 = *(x9495);
                /* VAR */ GList* x11725 = x11724;
                while(1) {
                  
                  GList* x11726 = x11725;
                  GList* x11727 = NULL;
                  int x11728 = x11726!=(x11727);
                  if (!(x11728)) break; 
                  
                  GList* x11729 = x11725;
                  void* x11730 = g_list_nth_data(x11729, 0);
                  struct LINEITEMRecord* x11731 = (struct LINEITEMRecord*){x11730};
                  GList* x11732 = x11725;
                  GList* x11733 = g_list_next(x11732);
                  x11725 = x11733;
                  int x11735 = x11731->L_ORDERKEY;
                  int x11736 = x472==(x11735);
                  /* VAR */ int ite40819 = 0;
                  if(x11736) {
                    int x48360 = x8553->L_SUPPKEY;
                    int x48361 = x11731->L_SUPPKEY;
                    int x48362 = x48360!=(x48361);
                    ite40819 = x48362;
                  } else {
                    
                    ite40819 = 0;
                  };
                  int x37063 = ite40819;
                  if(x37063) {
                    x11723 = x11731;
                    break;
                  };
                };
                struct LINEITEMRecord* x11745 = x11723;
                int x20173 = x11745!=(NULL);
                if(x20173) {
                  void* x9510 = (void*){x8553};
                  void* x9511 = g_hash_table_lookup(x47878, x9493);
                  GList** x9512 = (GList**){x9511};
                  GList** x9513 = NULL;
                  int x9514 = x9512==(x9513);
                  /* VAR */ GList** ite37076 = 0;
                  if(x9514) {
                    GList** x37077 = malloc(8);
                    GList* x37078 = NULL;
                    pointer_assign(x37077, x37078);
                    ite37076 = x37077;
                  } else {
                    
                    ite37076 = x9512;
                  };
                  GList** x9518 = ite37076;
                  GList* x9519 = *(x9518);
                  GList* x9520 = g_list_prepend(x9519, x9510);
                  pointer_assign(x9518, x9520);
                  void* x9522 = (void*){x9518};
                  g_hash_table_insert(x47878, x9493, x9522);
                };
              };
            };
          };
        };
      };
      int x3038 = x47917;
      int x512 = x3038+(1);
      x47917 = x512;
    };
    while(1) {
      
      int x48396 = x47919;
      int x48397 = x48396<(x5414);
      if (!(x48397)) break; 
      
      int x3047 = x47919;
      struct LINEITEMRecord* x521 = x7068[x3047];
      int x523 = x521->L_RECEIPTDATE;
      int x524 = x521->L_COMMITDATE;
      int x525 = x523>(x524);
      if(x525) {
        int x526 = x521->L_ORDERKEY;
        void* x9539 = (void*){x526};
        void* x9540 = g_hash_table_lookup(x47878, x9539);
        GList** x9541 = (GList**){x9540};
        int x20206 = x9541!=(NULL);
        if(x20206) {
          GList* x11794 = *(x9541);
          /* VAR */ GList* x11795 = x11794;
          /* VAR */ GList** x11796 = x9541;
          while(1) {
            
            GList* x11797 = x11795;
            GList* x11798 = NULL;
            int x11799 = x11797!=(x11798);
            if (!(x11799)) break; 
            
            GList* x11800 = x11795;
            void* x11801 = g_list_nth_data(x11800, 0);
            struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x11802 = (struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord*){x11801};
            int x11803 = x11802->L_ORDERKEY;
            int x11804 = x11803==(x526);
            /* VAR */ int ite40900 = 0;
            if(x11804) {
              int x48438 = x11802->L_SUPPKEY;
              int x48439 = x521->L_SUPPKEY;
              int x48440 = x48438!=(x48439);
              ite40900 = x48440;
            } else {
              
              ite40900 = 0;
            };
            int x37126 = ite40900;
            int x11809 = !(x37126);
            if(x11809) {
              GList* x11810 = x11795;
              GList* x11811 = x11810->next;
              GList** x11812 = &(x11811);
              x11796 = x11812;
            } else {
              
              GList** x11814 = x11796;
              GList* x11815 = x11795;
              GList* x11816 = g_list_next(x11815);
              pointer_assign(x11814, x11816);
            };
            GList* x11819 = x11795;
            GList* x11820 = g_list_next(x11819);
            x11795 = x11820;
          };
        };
      };
      int x3081 = x47919;
      int x556 = x3081+(1);
      x47919 = x556;
    };
    GList* x48751 = g_hash_table_get_keys(x47878);
    /* VAR */ GList* x48752 = x48751;
    int x48753 = g_hash_table_size(x47878);
    int x30823 = 0;
    for(; x30823 < x48753 ; x30823 += 1) {
      
      GList* x30824 = x48752;
      void* x30825 = g_list_nth_data(x30824, 0);
      GList* x30826 = x48752;
      GList* x30827 = g_list_next(x30826);
      x48752 = x30827;
      void* x30829 = g_hash_table_lookup(x47878, x30825);
      GList** x30830 = (GList**){x30829};
      GList* x30959 = *(x30830);
      /* VAR */ GList* x30960 = x30959;
      while(1) {
        
        GList* x12255 = x30960;
        GList* x12256 = NULL;
        int x12257 = x12255!=(x12256);
        if (!(x12257)) break; 
        
        GList* x12258 = x30960;
        void* x12259 = g_list_nth_data(x12258, 0);
        struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x12260 = (struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord*){x12259};
        GList* x12261 = x30960;
        GList* x12262 = g_list_next(x12261);
        x30960 = x12262;
        int x12264 = x12260->L_ORDERKEY;
        void* x12265 = (void*){x12264};
        void* x12266 = g_hash_table_lookup(x47868, x12265);
        GList** x12267 = (GList**){x12266};
        int x20676 = x12267!=(NULL);
        if(x20676) {
          GList* x12188 = *(x12267);
          /* VAR */ GList* x12189 = x12188;
          while(1) {
            
            GList* x12190 = x12189;
            GList* x12191 = NULL;
            int x12192 = x12190!=(x12191);
            if (!(x12192)) break; 
            
            GList* x12193 = x12189;
            void* x12194 = g_list_nth_data(x12193, 0);
            struct ORDERSRecord* x12195 = (struct ORDERSRecord*){x12194};
            GList* x12196 = x12189;
            GList* x12197 = g_list_next(x12196);
            x12189 = x12197;
            int x12199 = x12195->O_ORDERKEY;
            int x12200 = x12199==(x12264);
            if(x12200) {
              int x1451 = x12195->O_CUSTKEY;
              char x1452 = x12195->O_ORDERSTATUS;
              double x1453 = x12195->O_TOTALPRICE;
              int x1454 = x12195->O_ORDERDATE;
              char* x1455 = x12195->O_ORDERPRIORITY;
              char* x1456 = x12195->O_CLERK;
              int x1457 = x12195->O_SHIPPRIORITY;
              char* x1458 = x12195->O_COMMENT;
              int x1459 = x12260->N_NATIONKEY;
              char* x1460 = x12260->N_NAME;
              int x1461 = x12260->N_REGIONKEY;
              char* x1462 = x12260->N_COMMENT;
              int x1463 = x12260->S_SUPPKEY;
              char* x1464 = x12260->S_NAME;
              char* x1465 = x12260->S_ADDRESS;
              int x1466 = x12260->S_NATIONKEY;
              char* x1467 = x12260->S_PHONE;
              double x1468 = x12260->S_ACCTBAL;
              char* x1469 = x12260->S_COMMENT;
              int x1470 = x12260->L_PARTKEY;
              int x1471 = x12260->L_SUPPKEY;
              int x1472 = x12260->L_LINENUMBER;
              double x1473 = x12260->L_QUANTITY;
              double x1474 = x12260->L_EXTENDEDPRICE;
              double x1475 = x12260->L_DISCOUNT;
              double x1476 = x12260->L_TAX;
              char x1477 = x12260->L_RETURNFLAG;
              char x1478 = x12260->L_LINESTATUS;
              int x1479 = x12260->L_SHIPDATE;
              int x1480 = x12260->L_COMMITDATE;
              int x1481 = x12260->L_RECEIPTDATE;
              char* x1482 = x12260->L_SHIPINSTRUCT;
              char* x1483 = x12260->L_SHIPMODE;
              char* x1484 = x12260->L_COMMENT;
              struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x8653 = (struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord*)malloc(1 * sizeof(struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
              memset(x8653, 0, 1 * sizeof(struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
              x8653->O_ORDERKEY = x12199; x8653->O_CUSTKEY = x1451; x8653->O_ORDERSTATUS = x1452; x8653->O_TOTALPRICE = x1453; x8653->O_ORDERDATE = x1454; x8653->O_ORDERPRIORITY = x1455; x8653->O_CLERK = x1456; x8653->O_SHIPPRIORITY = x1457; x8653->O_COMMENT = x1458; x8653->N_NATIONKEY = x1459; x8653->N_NAME = x1460; x8653->N_REGIONKEY = x1461; x8653->N_COMMENT = x1462; x8653->S_SUPPKEY = x1463; x8653->S_NAME = x1464; x8653->S_ADDRESS = x1465; x8653->S_NATIONKEY = x1466; x8653->S_PHONE = x1467; x8653->S_ACCTBAL = x1468; x8653->S_COMMENT = x1469; x8653->L_ORDERKEY = x12264; x8653->L_PARTKEY = x1470; x8653->L_SUPPKEY = x1471; x8653->L_LINENUMBER = x1472; x8653->L_QUANTITY = x1473; x8653->L_EXTENDEDPRICE = x1474; x8653->L_DISCOUNT = x1475; x8653->L_TAX = x1476; x8653->L_RETURNFLAG = x1477; x8653->L_LINESTATUS = x1478; x8653->L_SHIPDATE = x1479; x8653->L_COMMITDATE = x1480; x8653->L_RECEIPTDATE = x1481; x8653->L_SHIPINSTRUCT = x1482; x8653->L_SHIPMODE = x1483; x8653->L_COMMENT = x1484;
              char* x609 = x8653->S_NAME;
              void* x12240 = g_hash_table_lookup(x47858, x609);
              int x12173 = x12240==(NULL);
              /* VAR */ struct AGGRecord_OptimalString* ite38011 = 0;
              if(x12173) {
                double* x38012 = (double*)malloc(1 * sizeof(double));
                memset(x38012, 0, 1 * sizeof(double));
                struct AGGRecord_OptimalString* x38013 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
                memset(x38013, 0, 1 * sizeof(struct AGGRecord_OptimalString));
                x38013->key = x609; x38013->aggs = x38012;
                g_hash_table_insert(x47858, x609, x38013);
                ite38011 = x38013;
              } else {
                
                ite38011 = x12240;
              };
              struct AGGRecord_OptimalString* x12183 = ite38011;
              double* x614 = x12183->aggs;
              double x628 = x614[0];
              double x630 = x628+(1.0);
              *x614 = x630;
            };
          };
        };
      };
    };
    GList* x49347 = g_hash_table_get_keys(x47858);
    /* VAR */ GList* x49348 = x49347;
    int x49349 = g_hash_table_size(x47858);
    int x31115 = 0;
    for(; x31115 < x49349 ; x31115 += 1) {
      
      GList* x31116 = x49348;
      void* x31117 = g_list_nth_data(x31116, 0);
      GList* x31118 = g_list_next(x31116);
      x49348 = x31118;
      void* x31120 = g_hash_table_lookup(x47858, x31117);
      struct AGGRecord_OptimalString* x31122 = (struct AGGRecord_OptimalString*){x31120};
      g_tree_insert(x47972, x31122, x31122);
    };
    while(1) {
      
      int x3239 = x47973;
      int x652 = !(x3239);
      /* VAR */ int ite41837 = 0;
      if(x652) {
        int x49374 = g_tree_nnodes(x47972);
        int x49375 = x49374!=(0);
        ite41837 = x49375;
      } else {
        
        ite41837 = 0;
      };
      int x38055 = ite41837;
      if (!(x38055)) break; 
      
      void* x12421 = NULL;
      void** x12429 = &(x12421);
      g_tree_foreach(x47972, x12428, x12429);
      struct AGGRecord_OptimalString* x12431 = (struct AGGRecord_OptimalString*){x12421};
      int x12432 = g_tree_remove(x47972, x12431);
      int x3247 = x47974;
      int x662 = x3247>=(100);
      if(x662) {
        x47973 = 1;
      } else {
        
        char* x664 = x12431->key;
        double* x666 = x12431->aggs;
        double x667 = x666[0];
        printf("%s|%.0f\n", x664, x667);
        int x3256 = x47974;
        int x670 = x3256+(1);
        x47974 = x670;
      };
    };
    int x49403 = x47974;
    printf("(%d rows)\n", x49403);
    struct timeval* x49405 = &x47914;
    gettimeofday(x49405, NULL);
    struct timeval* x49407 = &x47910;
    struct timeval* x49408 = &x47914;
    struct timeval* x49409 = &x47912;
    long x49410 = timeval_subtract(x49407, x49408, x49409);
    printf("Generated code run in %ld milliseconds.\n", x49410);
  };
}
/* ----------- FUNCTIONS ----------- */
int x47835(char* x11304) {
  int x26393 = strlen(x11304);
  /* VAR */ int x23048 = 0;
  /* VAR */ int x23049 = 0;
  while(1) {
    
    int x23050 = x23048;
    int x23051 = x23050<(x26393);
    if (!(x23051)) break; 
    
    int x23052 = x23049;
    int x23053 = x23048;
    char* x26401 = pointer_add(x11304, x23053);
    char x26402 = *(x26401);
    int x23056 = x23052+(x26402);
    x23049 = x23056;
    int x23058 = x23048;
    int x23059 = x23058+(1);
    x23048 = x23059;
  };
  int x23062 = x23049;
  return x23062; 
}

int x47853(char* x11309, char* x11310) {
  int x23066 = strcmp(x11309, x11310);
  int x23067 = !(x23066);
  return x23067; 
}

int x47859(void* x9229) {
  int x9230 = g_direct_hash(x9229);
  return x9230; 
}

int x47862(void* x9232, void* x9233) {
  int x9234 = g_direct_equal(x9232, x9233);
  return x9234; 
}

int x47869(void* x9239) {
  int x9240 = g_direct_hash(x9239);
  return x9240; 
}

int x47872(void* x9242, void* x9243) {
  int x9244 = g_direct_equal(x9242, x9243);
  return x9244; 
}

int x47879(void* x9249) {
  int x9250 = g_direct_hash(x9249);
  return x9250; 
}

int x47882(void* x9252, void* x9253) {
  int x9254 = g_direct_equal(x9252, x9253);
  return x9254; 
}

int x47889(void* x9259) {
  int x9260 = g_direct_hash(x9259);
  return x9260; 
}

int x47892(void* x9262, void* x9263) {
  int x9264 = g_direct_equal(x9262, x9263);
  return x9264; 
}

int x47899(void* x9269) {
  int x9270 = g_direct_hash(x9269);
  return x9270; 
}

int x47902(void* x9272, void* x9273) {
  int x9274 = g_direct_equal(x9272, x9273);
  return x9274; 
}

int x47947(struct AGGRecord_OptimalString* x294, struct AGGRecord_OptimalString* x295) {
  double* x296 = x294->aggs;
  double x297 = x296[0];
  double* x298 = x295->aggs;
  double x299 = x298[0];
  int x300 = x297<(x299);
  /* VAR */ int ite36686 = 0;
  if(x300) {
    ite36686 = 1;
  } else {
    
    int x36688 = x297>(x299);
    /* VAR */ int ite36690 = 0;
    if(x36688) {
      ite36690 = -1;
    } else {
      
      char* x36692 = x294->key;
      char* x36693 = x295->key;
      int x36694 = strcmp(x36692, x36693);
      ite36690 = x36694;
    };
    int x36689 = ite36690;
    ite36686 = x36689;
  };
  int x306 = ite36686;
  return x306; 
}

int x12428(void* x12422, void* x12423, void* x12424) {
  struct AGGRecord_OptimalString** x12425 = (struct AGGRecord_OptimalString**){x12424};
  struct AGGRecord_OptimalString* x12426 = (struct AGGRecord_OptimalString*){x12423};
  pointer_assign(x12425, x12426);
  return 1; 
}
