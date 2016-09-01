#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct Q3GRPRecord;
  struct LINEITEMRecord;
  struct AGGRecord_Q3GRPRecord;
  struct CUSTOMERRecord_ORDERSRecord;
  struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord;
  struct ORDERSRecord;
  struct CUSTOMERRecord;
  
  struct Q3GRPRecord {
  int L_ORDERKEY;
  int O_ORDERDATE;
  int O_SHIPPRIORITY;
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
  
  struct AGGRecord_Q3GRPRecord {
  struct Q3GRPRecord* key;
  double* aggs;
  };
  
  struct CUSTOMERRecord_ORDERSRecord {
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
  
  struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord {
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
  
  


int x33981(struct Q3GRPRecord* x10885);

int x33988(struct Q3GRPRecord* x10890, struct Q3GRPRecord* x10891);

int x34013(void* x9126);

int x34016(void* x9129, void* x9130);

int x34023(void* x9136);

int x34026(void* x9139, void* x9140);

int x34165(struct AGGRecord_Q3GRPRecord* x219, struct AGGRecord_Q3GRPRecord* x220);

int x11515(void* x11509, void* x11510, void* x11511);
/* GLOBAL VARS */

struct timeval x4665;
int main(int argc, char** argv) {
  FILE* x5402 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x5403 = 0;
  int x5404 = x5403;
  int* x5405 = &x5404;
  int x5406 = fscanf(x5402, "%d", x5405);
  pclose(x5402);
  struct LINEITEMRecord* x7016 = (struct LINEITEMRecord*)malloc(x5404 * sizeof(struct LINEITEMRecord));
  memset(x7016, 0, x5404 * sizeof(struct LINEITEMRecord));
  int x5410 = O_RDONLY;
  int x5411 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x5410);
  struct stat x5412 = (struct stat){0};
  /* VAR */ struct stat x5413 = x5412;
  struct stat x5414 = x5413;
  struct stat* x5415 = &x5414;
  int x5416 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x5415);
  size_t x5417 = x5415->st_size;
  int x5418 = PROT_READ;
  int x5419 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x5417, x5418, x5419, x5411, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x5404);
    /* VAR */ int ite28669 = 0;
    if(x6) {
      char x32736 = *x3;
      int x32737 = x32736!=('\0');
      ite28669 = x32737;
    } else {
      
      ite28669 = 0;
    };
    int x26780 = ite28669;
    if (!(x26780)) break; 
    
    /* VAR */ int x5427 = 0;
    int x5428 = x5427;
    int* x5429 = &x5428;
    char* x5430 = strntoi_unchecked(x3, x5429);
    x3 = x5430;
    /* VAR */ int x5432 = 0;
    int x5433 = x5432;
    int* x5434 = &x5433;
    char* x5435 = strntoi_unchecked(x3, x5434);
    x3 = x5435;
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
    /* VAR */ double x5447 = 0.0;
    double x5448 = x5447;
    double* x5449 = &x5448;
    char* x5450 = strntod_unchecked(x3, x5449);
    x3 = x5450;
    /* VAR */ double x5452 = 0.0;
    double x5453 = x5452;
    double* x5454 = &x5453;
    char* x5455 = strntod_unchecked(x3, x5454);
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
    char x5467 = *x3;
    /* VAR */ char x5468 = x5467;
    x3 += 1;
    x3 += 1;
    char x5471 = x5468;
    char x5472 = *x3;
    /* VAR */ char x5473 = x5472;
    x3 += 1;
    x3 += 1;
    char x5476 = x5473;
    /* VAR */ int x5477 = 0;
    int x5478 = x5477;
    int* x5479 = &x5478;
    char* x5480 = strntoi_unchecked(x3, x5479);
    x3 = x5480;
    /* VAR */ int x5482 = 0;
    int x5483 = x5482;
    int* x5484 = &x5483;
    char* x5485 = strntoi_unchecked(x3, x5484);
    x3 = x5485;
    /* VAR */ int x5487 = 0;
    int x5488 = x5487;
    int* x5489 = &x5488;
    char* x5490 = strntoi_unchecked(x3, x5489);
    x3 = x5490;
    int x5492 = x5478*(10000);
    int x5493 = x5483*(100);
    int x5494 = x5492+(x5493);
    int x5495 = x5494+(x5488);
    /* VAR */ int x5496 = 0;
    int x5497 = x5496;
    int* x5498 = &x5497;
    char* x5499 = strntoi_unchecked(x3, x5498);
    x3 = x5499;
    /* VAR */ int x5501 = 0;
    int x5502 = x5501;
    int* x5503 = &x5502;
    char* x5504 = strntoi_unchecked(x3, x5503);
    x3 = x5504;
    /* VAR */ int x5506 = 0;
    int x5507 = x5506;
    int* x5508 = &x5507;
    char* x5509 = strntoi_unchecked(x3, x5508);
    x3 = x5509;
    int x5511 = x5497*(10000);
    int x5512 = x5502*(100);
    int x5513 = x5511+(x5512);
    int x5514 = x5513+(x5507);
    /* VAR */ int x5515 = 0;
    int x5516 = x5515;
    int* x5517 = &x5516;
    char* x5518 = strntoi_unchecked(x3, x5517);
    x3 = x5518;
    /* VAR */ int x5520 = 0;
    int x5521 = x5520;
    int* x5522 = &x5521;
    char* x5523 = strntoi_unchecked(x3, x5522);
    x3 = x5523;
    /* VAR */ int x5525 = 0;
    int x5526 = x5525;
    int* x5527 = &x5526;
    char* x5528 = strntoi_unchecked(x3, x5527);
    x3 = x5528;
    int x5530 = x5516*(10000);
    int x5531 = x5521*(100);
    int x5532 = x5530+(x5531);
    int x5533 = x5532+(x5526);
    char* x7142 = (char*)malloc(26 * sizeof(char));
    memset(x7142, 0, 26 * sizeof(char));
    /* VAR */ char* x5535 = x3;
    while(1) {
      
      char x5536 = *x3;
      int x5537 = x5536!=('|');
      /* VAR */ int ite28790 = 0;
      if(x5537) {
        char x32856 = *x3;
        int x32857 = x32856!=('\n');
        ite28790 = x32857;
      } else {
        
        ite28790 = 0;
      };
      int x26894 = ite28790;
      if (!(x26894)) break; 
      
      x3 += 1;
    };
    char* x5543 = x5535;
    int x5544 = x3 - x5543;
    char* x5545 = x5535;
    char* x5546 = strncpy(x7142, x5545, x5544);
    x3 += 1;
    char* x7160 = (char*)malloc(11 * sizeof(char));
    memset(x7160, 0, 11 * sizeof(char));
    /* VAR */ char* x5554 = x3;
    while(1) {
      
      char x5555 = *x3;
      int x5556 = x5555!=('|');
      /* VAR */ int ite28813 = 0;
      if(x5556) {
        char x32878 = *x3;
        int x32879 = x32878!=('\n');
        ite28813 = x32879;
      } else {
        
        ite28813 = 0;
      };
      int x26910 = ite28813;
      if (!(x26910)) break; 
      
      x3 += 1;
    };
    char* x5562 = x5554;
    int x5563 = x3 - x5562;
    char* x5564 = x5554;
    char* x5565 = strncpy(x7160, x5564, x5563);
    x3 += 1;
    char* x7178 = (char*)malloc(45 * sizeof(char));
    memset(x7178, 0, 45 * sizeof(char));
    /* VAR */ char* x5573 = x3;
    while(1) {
      
      char x5574 = *x3;
      int x5575 = x5574!=('|');
      /* VAR */ int ite28836 = 0;
      if(x5575) {
        char x32900 = *x3;
        int x32901 = x32900!=('\n');
        ite28836 = x32901;
      } else {
        
        ite28836 = 0;
      };
      int x26926 = ite28836;
      if (!(x26926)) break; 
      
      x3 += 1;
    };
    char* x5581 = x5573;
    int x5582 = x3 - x5581;
    char* x5583 = x5573;
    char* x5584 = strncpy(x7178, x5583, x5582);
    x3 += 1;
    struct LINEITEMRecord* x8010 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x8010, 0, 1 * sizeof(struct LINEITEMRecord));
    x8010->L_ORDERKEY = x5428; x8010->L_PARTKEY = x5433; x8010->L_SUPPKEY = x5438; x8010->L_LINENUMBER = x5443; x8010->L_QUANTITY = x5448; x8010->L_EXTENDEDPRICE = x5453; x8010->L_DISCOUNT = x5458; x8010->L_TAX = x5463; x8010->L_RETURNFLAG = x5471; x8010->L_LINESTATUS = x5476; x8010->L_SHIPDATE = x5495; x8010->L_COMMITDATE = x5514; x8010->L_RECEIPTDATE = x5533; x8010->L_SHIPINSTRUCT = x7142; x8010->L_SHIPMODE = x7160; x8010->L_COMMENT = x7178;
    int x47 = x4;
    struct LINEITEMRecord x7198 = *x8010;
    *(x7016 + x47) = x7198;
    struct LINEITEMRecord* x7200 = &(x7016[x47]);
    x8010 = x7200;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x5597 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x5598 = 0;
  int x5599 = x5598;
  int* x5600 = &x5599;
  int x5601 = fscanf(x5597, "%d", x5600);
  pclose(x5597);
  struct ORDERSRecord* x7211 = (struct ORDERSRecord*)malloc(x5599 * sizeof(struct ORDERSRecord));
  memset(x7211, 0, x5599 * sizeof(struct ORDERSRecord));
  int x5605 = O_RDONLY;
  int x5606 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x5605);
  /* VAR */ struct stat x5607 = x5412;
  struct stat x5608 = x5607;
  struct stat* x5609 = &x5608;
  int x5610 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x5609);
  size_t x5611 = x5609->st_size;
  int x5612 = PROT_READ;
  int x5613 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x5611, x5612, x5613, x5606, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x5599);
    /* VAR */ int ite28886 = 0;
    if(x58) {
      char x32949 = *x55;
      int x32950 = x32949!=('\0');
      ite28886 = x32950;
    } else {
      
      ite28886 = 0;
    };
    int x26969 = ite28886;
    if (!(x26969)) break; 
    
    /* VAR */ int x5621 = 0;
    int x5622 = x5621;
    int* x5623 = &x5622;
    char* x5624 = strntoi_unchecked(x55, x5623);
    x55 = x5624;
    /* VAR */ int x5626 = 0;
    int x5627 = x5626;
    int* x5628 = &x5627;
    char* x5629 = strntoi_unchecked(x55, x5628);
    x55 = x5629;
    char x5631 = *x55;
    /* VAR */ char x5632 = x5631;
    x55 += 1;
    x55 += 1;
    char x5635 = x5632;
    /* VAR */ double x5636 = 0.0;
    double x5637 = x5636;
    double* x5638 = &x5637;
    char* x5639 = strntod_unchecked(x55, x5638);
    x55 = x5639;
    /* VAR */ int x5641 = 0;
    int x5642 = x5641;
    int* x5643 = &x5642;
    char* x5644 = strntoi_unchecked(x55, x5643);
    x55 = x5644;
    /* VAR */ int x5646 = 0;
    int x5647 = x5646;
    int* x5648 = &x5647;
    char* x5649 = strntoi_unchecked(x55, x5648);
    x55 = x5649;
    /* VAR */ int x5651 = 0;
    int x5652 = x5651;
    int* x5653 = &x5652;
    char* x5654 = strntoi_unchecked(x55, x5653);
    x55 = x5654;
    int x5656 = x5642*(10000);
    int x5657 = x5647*(100);
    int x5658 = x5656+(x5657);
    int x5659 = x5658+(x5652);
    char* x7268 = (char*)malloc(16 * sizeof(char));
    memset(x7268, 0, 16 * sizeof(char));
    /* VAR */ char* x5661 = x55;
    while(1) {
      
      char x5662 = *x55;
      int x5663 = x5662!=('|');
      /* VAR */ int ite28939 = 0;
      if(x5663) {
        char x33001 = *x55;
        int x33002 = x33001!=('\n');
        ite28939 = x33002;
      } else {
        
        ite28939 = 0;
      };
      int x27015 = ite28939;
      if (!(x27015)) break; 
      
      x55 += 1;
    };
    char* x5669 = x5661;
    int x5670 = x55 - x5669;
    char* x5671 = x5661;
    char* x5672 = strncpy(x7268, x5671, x5670);
    x55 += 1;
    char* x7286 = (char*)malloc(16 * sizeof(char));
    memset(x7286, 0, 16 * sizeof(char));
    /* VAR */ char* x5680 = x55;
    while(1) {
      
      char x5681 = *x55;
      int x5682 = x5681!=('|');
      /* VAR */ int ite28962 = 0;
      if(x5682) {
        char x33023 = *x55;
        int x33024 = x33023!=('\n');
        ite28962 = x33024;
      } else {
        
        ite28962 = 0;
      };
      int x27031 = ite28962;
      if (!(x27031)) break; 
      
      x55 += 1;
    };
    char* x5688 = x5680;
    int x5689 = x55 - x5688;
    char* x5690 = x5680;
    char* x5691 = strncpy(x7286, x5690, x5689);
    x55 += 1;
    /* VAR */ int x5698 = 0;
    int x5699 = x5698;
    int* x5700 = &x5699;
    char* x5701 = strntoi_unchecked(x55, x5700);
    x55 = x5701;
    char* x7309 = (char*)malloc(80 * sizeof(char));
    memset(x7309, 0, 80 * sizeof(char));
    /* VAR */ char* x5704 = x55;
    while(1) {
      
      char x5705 = *x55;
      int x5706 = x5705!=('|');
      /* VAR */ int ite28990 = 0;
      if(x5706) {
        char x33050 = *x55;
        int x33051 = x33050!=('\n');
        ite28990 = x33051;
      } else {
        
        ite28990 = 0;
      };
      int x27052 = ite28990;
      if (!(x27052)) break; 
      
      x55 += 1;
    };
    char* x5712 = x5704;
    int x5713 = x55 - x5712;
    char* x5714 = x5704;
    char* x5715 = strncpy(x7309, x5714, x5713);
    x55 += 1;
    struct ORDERSRecord* x8143 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x8143, 0, 1 * sizeof(struct ORDERSRecord));
    x8143->O_ORDERKEY = x5622; x8143->O_CUSTKEY = x5627; x8143->O_ORDERSTATUS = x5635; x8143->O_TOTALPRICE = x5637; x8143->O_ORDERDATE = x5659; x8143->O_ORDERPRIORITY = x7268; x8143->O_CLERK = x7286; x8143->O_SHIPPRIORITY = x5699; x8143->O_COMMENT = x7309;
    int x91 = x56;
    struct ORDERSRecord x7329 = *x8143;
    *(x7211 + x91) = x7329;
    struct ORDERSRecord* x7331 = &(x7211[x91]);
    x8143 = x7331;
    int x93 = x56;
    int x94 = x93+(1);
    x56 = x94;
  };
  FILE* x5728 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x5729 = 0;
  int x5730 = x5729;
  int* x5731 = &x5730;
  int x5732 = fscanf(x5728, "%d", x5731);
  pclose(x5728);
  struct CUSTOMERRecord* x7342 = (struct CUSTOMERRecord*)malloc(x5730 * sizeof(struct CUSTOMERRecord));
  memset(x7342, 0, x5730 * sizeof(struct CUSTOMERRecord));
  int x5736 = O_RDONLY;
  int x5737 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x5736);
  /* VAR */ struct stat x5738 = x5412;
  struct stat x5739 = x5738;
  struct stat* x5740 = &x5739;
  int x5741 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x5740);
  size_t x5742 = x5740->st_size;
  int x5743 = PROT_READ;
  int x5744 = MAP_PRIVATE;
  char* x99 = mmap(NULL, x5742, x5743, x5744, x5737, 0);
  /* VAR */ int x100 = 0;
  while(1) {
    
    int x101 = x100;
    int x102 = x101<(x5730);
    /* VAR */ int ite29040 = 0;
    if(x102) {
      char x33099 = *x99;
      int x33100 = x33099!=('\0');
      ite29040 = x33100;
    } else {
      
      ite29040 = 0;
    };
    int x27095 = ite29040;
    if (!(x27095)) break; 
    
    /* VAR */ int x5752 = 0;
    int x5753 = x5752;
    int* x5754 = &x5753;
    char* x5755 = strntoi_unchecked(x99, x5754);
    x99 = x5755;
    char* x7365 = (char*)malloc(26 * sizeof(char));
    memset(x7365, 0, 26 * sizeof(char));
    /* VAR */ char* x5758 = x99;
    while(1) {
      
      char x5759 = *x99;
      int x5760 = x5759!=('|');
      /* VAR */ int ite29059 = 0;
      if(x5760) {
        char x33117 = *x99;
        int x33118 = x33117!=('\n');
        ite29059 = x33118;
      } else {
        
        ite29059 = 0;
      };
      int x27107 = ite29059;
      if (!(x27107)) break; 
      
      x99 += 1;
    };
    char* x5766 = x5758;
    int x5767 = x99 - x5766;
    char* x5768 = x5758;
    char* x5769 = strncpy(x7365, x5768, x5767);
    x99 += 1;
    char* x7383 = (char*)malloc(41 * sizeof(char));
    memset(x7383, 0, 41 * sizeof(char));
    /* VAR */ char* x5777 = x99;
    while(1) {
      
      char x5778 = *x99;
      int x5779 = x5778!=('|');
      /* VAR */ int ite29082 = 0;
      if(x5779) {
        char x33139 = *x99;
        int x33140 = x33139!=('\n');
        ite29082 = x33140;
      } else {
        
        ite29082 = 0;
      };
      int x27123 = ite29082;
      if (!(x27123)) break; 
      
      x99 += 1;
    };
    char* x5785 = x5777;
    int x5786 = x99 - x5785;
    char* x5787 = x5777;
    char* x5788 = strncpy(x7383, x5787, x5786);
    x99 += 1;
    /* VAR */ int x5795 = 0;
    int x5796 = x5795;
    int* x5797 = &x5796;
    char* x5798 = strntoi_unchecked(x99, x5797);
    x99 = x5798;
    char* x7406 = (char*)malloc(16 * sizeof(char));
    memset(x7406, 0, 16 * sizeof(char));
    /* VAR */ char* x5801 = x99;
    while(1) {
      
      char x5802 = *x99;
      int x5803 = x5802!=('|');
      /* VAR */ int ite29110 = 0;
      if(x5803) {
        char x33166 = *x99;
        int x33167 = x33166!=('\n');
        ite29110 = x33167;
      } else {
        
        ite29110 = 0;
      };
      int x27144 = ite29110;
      if (!(x27144)) break; 
      
      x99 += 1;
    };
    char* x5809 = x5801;
    int x5810 = x99 - x5809;
    char* x5811 = x5801;
    char* x5812 = strncpy(x7406, x5811, x5810);
    x99 += 1;
    /* VAR */ double x5819 = 0.0;
    double x5820 = x5819;
    double* x5821 = &x5820;
    char* x5822 = strntod_unchecked(x99, x5821);
    x99 = x5822;
    char* x7429 = (char*)malloc(11 * sizeof(char));
    memset(x7429, 0, 11 * sizeof(char));
    /* VAR */ char* x5825 = x99;
    while(1) {
      
      char x5826 = *x99;
      int x5827 = x5826!=('|');
      /* VAR */ int ite29138 = 0;
      if(x5827) {
        char x33193 = *x99;
        int x33194 = x33193!=('\n');
        ite29138 = x33194;
      } else {
        
        ite29138 = 0;
      };
      int x27165 = ite29138;
      if (!(x27165)) break; 
      
      x99 += 1;
    };
    char* x5833 = x5825;
    int x5834 = x99 - x5833;
    char* x5835 = x5825;
    char* x5836 = strncpy(x7429, x5835, x5834);
    x99 += 1;
    char* x7447 = (char*)malloc(118 * sizeof(char));
    memset(x7447, 0, 118 * sizeof(char));
    /* VAR */ char* x5844 = x99;
    while(1) {
      
      char x5845 = *x99;
      int x5846 = x5845!=('|');
      /* VAR */ int ite29161 = 0;
      if(x5846) {
        char x33215 = *x99;
        int x33216 = x33215!=('\n');
        ite29161 = x33216;
      } else {
        
        ite29161 = 0;
      };
      int x27181 = ite29161;
      if (!(x27181)) break; 
      
      x99 += 1;
    };
    char* x5852 = x5844;
    int x5853 = x99 - x5852;
    char* x5854 = x5844;
    char* x5855 = strncpy(x7447, x5854, x5853);
    x99 += 1;
    struct CUSTOMERRecord* x8283 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x8283, 0, 1 * sizeof(struct CUSTOMERRecord));
    x8283->C_CUSTKEY = x5753; x8283->C_NAME = x7365; x8283->C_ADDRESS = x7383; x8283->C_NATIONKEY = x5796; x8283->C_PHONE = x7406; x8283->C_ACCTBAL = x5820; x8283->C_MKTSEGMENT = x7429; x8283->C_COMMENT = x7447;
    int x149 = x100;
    struct CUSTOMERRecord x7467 = *x8283;
    *(x7342 + x149) = x7467;
    struct CUSTOMERRecord* x7469 = &(x7342[x149]);
    x8283 = x7469;
    int x151 = x100;
    int x152 = x151+(1);
    x100 = x152;
  };
  int x156 = 0;
  for(; x156 < 1 ; x156 += 1) {
    
    GHashTable* x34012 = g_hash_table_new(x33981, x33988);
    void*** x34020 = (void***){x34013};
    int* x34021 = (int*){x34016};
    GHashTable* x34022 = g_hash_table_new(x34020, x34021);
    void*** x34030 = (void***){x34023};
    int* x34031 = (int*){x34026};
    GHashTable* x34032 = g_hash_table_new(x34030, x34031);
    /* VAR */ int x34033 = 0;
    struct CUSTOMERRecord_ORDERSRecord* x34034 = (struct CUSTOMERRecord_ORDERSRecord*)malloc(12000000 * sizeof(struct CUSTOMERRecord_ORDERSRecord));
    memset(x34034, 0, 12000000 * sizeof(struct CUSTOMERRecord_ORDERSRecord));
    /* VAR */ int x34035 = 0;
    while(1) {
      
      int x4349 = x34035;
      int x4350 = x4349<(12000000);
      if (!(x4350)) break; 
      
      int x4351 = x34035;
      struct CUSTOMERRecord_ORDERSRecord* x8307 = (struct CUSTOMERRecord_ORDERSRecord*)malloc(1 * sizeof(struct CUSTOMERRecord_ORDERSRecord));
      memset(x8307, 0, 1 * sizeof(struct CUSTOMERRecord_ORDERSRecord));
      x8307->C_CUSTKEY = 0; x8307->C_NAME = ""; x8307->C_ADDRESS = ""; x8307->C_NATIONKEY = 0; x8307->C_PHONE = ""; x8307->C_ACCTBAL = 0.0; x8307->C_MKTSEGMENT = ""; x8307->C_COMMENT = ""; x8307->O_ORDERKEY = 0; x8307->O_CUSTKEY = 0; x8307->O_ORDERSTATUS = '\0'; x8307->O_TOTALPRICE = 0.0; x8307->O_ORDERDATE = 0; x8307->O_ORDERPRIORITY = ""; x8307->O_CLERK = ""; x8307->O_SHIPPRIORITY = 0; x8307->O_COMMENT = "";
      struct CUSTOMERRecord_ORDERSRecord x7488 = *x8307;
      *(x34034 + x4351) = x7488;
      struct CUSTOMERRecord_ORDERSRecord* x7490 = &(x34034[x4351]);
      x8307 = x7490;
      int x4354 = x34035;
      int x4355 = x4354+(1);
      x34035 = x4355;
    };
    /* VAR */ int x34050 = 0;
    struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord* x34051 = (struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord*)malloc(48000000 * sizeof(struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
    memset(x34051, 0, 48000000 * sizeof(struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
    /* VAR */ int x34052 = 0;
    while(1) {
      
      int x4361 = x34052;
      int x4362 = x4361<(48000000);
      if (!(x4362)) break; 
      
      int x4363 = x34052;
      struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord* x8324 = (struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord*)malloc(1 * sizeof(struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
      memset(x8324, 0, 1 * sizeof(struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
      x8324->C_CUSTKEY = 0; x8324->C_NAME = ""; x8324->C_ADDRESS = ""; x8324->C_NATIONKEY = 0; x8324->C_PHONE = ""; x8324->C_ACCTBAL = 0.0; x8324->C_MKTSEGMENT = ""; x8324->C_COMMENT = ""; x8324->O_ORDERKEY = 0; x8324->O_CUSTKEY = 0; x8324->O_ORDERSTATUS = '\0'; x8324->O_TOTALPRICE = 0.0; x8324->O_ORDERDATE = 0; x8324->O_ORDERPRIORITY = ""; x8324->O_CLERK = ""; x8324->O_SHIPPRIORITY = 0; x8324->O_COMMENT = ""; x8324->L_ORDERKEY = 0; x8324->L_PARTKEY = 0; x8324->L_SUPPKEY = 0; x8324->L_LINENUMBER = 0; x8324->L_QUANTITY = 0.0; x8324->L_EXTENDEDPRICE = 0.0; x8324->L_DISCOUNT = 0.0; x8324->L_TAX = 0.0; x8324->L_RETURNFLAG = '\0'; x8324->L_LINESTATUS = '\0'; x8324->L_SHIPDATE = 0; x8324->L_COMMITDATE = 0; x8324->L_RECEIPTDATE = 0; x8324->L_SHIPINSTRUCT = ""; x8324->L_SHIPMODE = ""; x8324->L_COMMENT = "";
      struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord x7503 = *x8324;
      *(x34051 + x4363) = x7503;
      struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord* x7505 = &(x34051[x4363]);
      x8324 = x7505;
      int x4366 = x34052;
      int x4367 = x4366+(1);
      x34052 = x4367;
    };
    /* VAR */ int x34067 = 0;
    struct Q3GRPRecord* x34068 = (struct Q3GRPRecord*)malloc(48000000 * sizeof(struct Q3GRPRecord));
    memset(x34068, 0, 48000000 * sizeof(struct Q3GRPRecord));
    /* VAR */ int x34069 = 0;
    while(1) {
      
      int x4373 = x34069;
      int x4374 = x4373<(48000000);
      if (!(x4374)) break; 
      
      int x4375 = x34069;
      struct Q3GRPRecord* x8341 = (struct Q3GRPRecord*)malloc(1 * sizeof(struct Q3GRPRecord));
      memset(x8341, 0, 1 * sizeof(struct Q3GRPRecord));
      x8341->L_ORDERKEY = 0; x8341->O_ORDERDATE = 0; x8341->O_SHIPPRIORITY = 0;
      struct Q3GRPRecord x7518 = *x8341;
      *(x34068 + x4375) = x7518;
      struct Q3GRPRecord* x7520 = &(x34068[x4375]);
      x8341 = x7520;
      int x4378 = x34069;
      int x4379 = x4378+(1);
      x34069 = x4379;
    };
    /* VAR */ int x34084 = 0;
    double** x34085 = (double**)malloc(48000000 * sizeof(double*));
    memset(x34085, 0, 48000000 * sizeof(double*));
    /* VAR */ int x34086 = 0;
    while(1) {
      
      int x4385 = x34086;
      int x4386 = x4385<(48000000);
      if (!(x4386)) break; 
      
      int x4387 = x34086;
      double* x7532 = (double*)malloc(1 * sizeof(double));
      memset(x7532, 0, 1 * sizeof(double));
      *(x34085 + x4387) = x7532;
      int x4390 = x34086;
      int x4391 = x4390+(1);
      x34086 = x4391;
    };
    /* VAR */ int x34096 = 0;
    struct AGGRecord_Q3GRPRecord* x34097 = (struct AGGRecord_Q3GRPRecord*)malloc(48000000 * sizeof(struct AGGRecord_Q3GRPRecord));
    memset(x34097, 0, 48000000 * sizeof(struct AGGRecord_Q3GRPRecord));
    /* VAR */ int x34098 = 0;
    while(1) {
      
      int x4397 = x34098;
      int x4398 = x4397<(48000000);
      if (!(x4398)) break; 
      
      int x4399 = x34098;
      struct Q3GRPRecord* x4400 = &(x34068[x4399]);
      double* x4401 = x34085[x4399];
      struct AGGRecord_Q3GRPRecord* x8372 = (struct AGGRecord_Q3GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q3GRPRecord));
      memset(x8372, 0, 1 * sizeof(struct AGGRecord_Q3GRPRecord));
      x8372->key = x4400; x8372->aggs = x4401;
      struct AGGRecord_Q3GRPRecord x7547 = *x8372;
      *(x34097 + x4399) = x7547;
      struct AGGRecord_Q3GRPRecord* x7549 = &(x34097[x4399]);
      x8372 = x7549;
      int x4404 = x34098;
      int x4405 = x4404+(1);
      x34098 = x4405;
    };
    /* VAR */ struct timeval x34115 = x4665;
    struct timeval x34116 = x34115;
    /* VAR */ struct timeval x34117 = x4665;
    struct timeval x34118 = x34117;
    /* VAR */ struct timeval x34119 = x4665;
    struct timeval x34120 = x34119;
    struct timeval* x34121 = &x34118;
    gettimeofday(x34121, NULL);
    /* VAR */ int x34123 = 0;
    /* VAR */ int x34124 = 0;
    /* VAR */ int x34125 = 0;
    int* x34204 = &(x34165);
    GTree* x34205 = g_tree_new(x34204);
    /* VAR */ int x34206 = 0;
    /* VAR */ int x34207 = 0;
    while(1) {
      
      int x34209 = x34123;
      int x34210 = x34209<(x5730);
      if (!(x34210)) break; 
      
      int x1896 = x34123;
      struct CUSTOMERRecord* x256 = &(x7342[x1896]);
      char* x258 = x256->C_MKTSEGMENT;
      int x22264 = strcmp(x258, "HOUSEHOLD");
      int x22265 = x22264==(0);
      if(x22265) {
        int x260 = x256->C_CUSTKEY;
        void* x9272 = (void*){x260};
        void* x9273 = (void*){x256};
        void* x9274 = g_hash_table_lookup(x34032, x9272);
        GList** x9275 = (GList**){x9274};
        GList** x9276 = NULL;
        int x9277 = x9275==(x9276);
        /* VAR */ GList** ite28161 = 0;
        if(x9277) {
          GList** x28162 = malloc(8);
          GList* x28163 = NULL;
          pointer_assign(x28162, x28163);
          ite28161 = x28162;
        } else {
          
          ite28161 = x9275;
        };
        GList** x9281 = ite28161;
        GList* x9282 = *(x9281);
        GList* x9283 = g_list_prepend(x9282, x9273);
        pointer_assign(x9281, x9283);
        void* x9285 = (void*){x9281};
        g_hash_table_insert(x34032, x9272, x9285);
      };
      int x1904 = x34123;
      int x265 = x1904+(1);
      x34123 = x265;
    };
    while(1) {
      
      int x34242 = x34124;
      int x34243 = x34242<(x5599);
      if (!(x34243)) break; 
      
      int x1913 = x34124;
      struct ORDERSRecord* x274 = &(x7211[x1913]);
      int x276 = x274->O_ORDERDATE;
      int x277 = x276<(19950304);
      if(x277) {
        int x278 = x274->O_CUSTKEY;
        void* x9300 = (void*){x278};
        void* x9301 = g_hash_table_lookup(x34032, x9300);
        GList** x9302 = (GList**){x9301};
        int x16690 = x9302!=(NULL);
        if(x16690) {
          GList* x11153 = *(x9302);
          /* VAR */ GList* x11154 = x11153;
          while(1) {
            
            GList* x11155 = x11154;
            GList* x11156 = NULL;
            int x11157 = x11155!=(x11156);
            if (!(x11157)) break; 
            
            GList* x11158 = x11154;
            void* x11159 = g_list_nth_data(x11158, 0);
            struct CUSTOMERRecord* x11160 = (struct CUSTOMERRecord*){x11159};
            GList* x11161 = x11154;
            GList* x11162 = g_list_next(x11161);
            x11154 = x11162;
            int x11164 = x11160->C_CUSTKEY;
            int x11165 = x11164==(x278);
            if(x11165) {
              char* x808 = x11160->C_NAME;
              char* x809 = x11160->C_ADDRESS;
              int x810 = x11160->C_NATIONKEY;
              char* x811 = x11160->C_PHONE;
              double x812 = x11160->C_ACCTBAL;
              char* x813 = x11160->C_MKTSEGMENT;
              char* x814 = x11160->C_COMMENT;
              int x815 = x274->O_ORDERKEY;
              char x816 = x274->O_ORDERSTATUS;
              double x817 = x274->O_TOTALPRICE;
              char* x818 = x274->O_ORDERPRIORITY;
              char* x819 = x274->O_CLERK;
              int x820 = x274->O_SHIPPRIORITY;
              char* x821 = x274->O_COMMENT;
              int x4483 = x34033;
              struct CUSTOMERRecord_ORDERSRecord* x4484 = &(x34034[x4483]);
              x4484->C_CUSTKEY = x11164;
              x4484->C_NAME = x808;
              x4484->C_ADDRESS = x809;
              x4484->C_NATIONKEY = x810;
              x4484->C_PHONE = x811;
              x4484->C_ACCTBAL = x812;
              x4484->C_MKTSEGMENT = x813;
              x4484->C_COMMENT = x814;
              x4484->O_ORDERKEY = x815;
              x4484->O_CUSTKEY = x278;
              x4484->O_ORDERSTATUS = x816;
              x4484->O_TOTALPRICE = x817;
              x4484->O_ORDERDATE = x276;
              x4484->O_ORDERPRIORITY = x818;
              x4484->O_CLERK = x819;
              x4484->O_SHIPPRIORITY = x820;
              x4484->O_COMMENT = x821;
              int x4502 = x34033;
              int x4503 = x4502+(1);
              x34033 = x4503;
              int x299 = x4484->O_ORDERKEY;
              void* x9349 = (void*){x299};
              void* x9350 = (void*){x4484};
              void* x9351 = g_hash_table_lookup(x34022, x9349);
              GList** x9352 = (GList**){x9351};
              GList** x9353 = NULL;
              int x9354 = x9352==(x9353);
              /* VAR */ GList** ite28311 = 0;
              if(x9354) {
                GList** x28312 = malloc(8);
                GList* x28313 = NULL;
                pointer_assign(x28312, x28313);
                ite28311 = x28312;
              } else {
                
                ite28311 = x9352;
              };
              GList** x9358 = ite28311;
              GList* x9359 = *(x9358);
              GList* x9360 = g_list_prepend(x9359, x9350);
              pointer_assign(x9358, x9360);
              void* x9362 = (void*){x9358};
              g_hash_table_insert(x34022, x9349, x9362);
            };
          };
        };
      };
      int x1972 = x34124;
      int x308 = x1972+(1);
      x34124 = x308;
    };
    while(1) {
      
      int x34393 = x34125;
      int x34394 = x34393<(x5404);
      if (!(x34394)) break; 
      
      int x1982 = x34125;
      struct LINEITEMRecord* x318 = &(x7016[x1982]);
      int x320 = x318->L_SHIPDATE;
      int x321 = x320>(19950304);
      if(x321) {
        int x322 = x318->L_ORDERKEY;
        void* x9378 = (void*){x322};
        void* x9379 = g_hash_table_lookup(x34022, x9378);
        GList** x9380 = (GList**){x9379};
        int x16832 = x9380!=(NULL);
        if(x16832) {
          GList* x11360 = *(x9380);
          /* VAR */ GList* x11361 = x11360;
          while(1) {
            
            GList* x11362 = x11361;
            GList* x11363 = NULL;
            int x11364 = x11362!=(x11363);
            if (!(x11364)) break; 
            
            GList* x11365 = x11361;
            void* x11366 = g_list_nth_data(x11365, 0);
            struct CUSTOMERRecord_ORDERSRecord* x11367 = (struct CUSTOMERRecord_ORDERSRecord*){x11366};
            GList* x11368 = x11361;
            GList* x11369 = g_list_next(x11368);
            x11361 = x11369;
            int x11371 = x11367->O_ORDERKEY;
            int x11372 = x11371==(x322);
            if(x11372) {
              int x926 = x11367->C_CUSTKEY;
              char* x927 = x11367->C_NAME;
              char* x928 = x11367->C_ADDRESS;
              int x929 = x11367->C_NATIONKEY;
              char* x930 = x11367->C_PHONE;
              double x931 = x11367->C_ACCTBAL;
              char* x932 = x11367->C_MKTSEGMENT;
              char* x933 = x11367->C_COMMENT;
              int x934 = x11367->O_CUSTKEY;
              char x935 = x11367->O_ORDERSTATUS;
              double x936 = x11367->O_TOTALPRICE;
              int x937 = x11367->O_ORDERDATE;
              char* x938 = x11367->O_ORDERPRIORITY;
              char* x939 = x11367->O_CLERK;
              int x940 = x11367->O_SHIPPRIORITY;
              char* x941 = x11367->O_COMMENT;
              int x942 = x318->L_PARTKEY;
              int x943 = x318->L_SUPPKEY;
              int x944 = x318->L_LINENUMBER;
              double x945 = x318->L_QUANTITY;
              double x946 = x318->L_EXTENDEDPRICE;
              double x947 = x318->L_DISCOUNT;
              double x948 = x318->L_TAX;
              char x949 = x318->L_RETURNFLAG;
              char x950 = x318->L_LINESTATUS;
              int x951 = x318->L_COMMITDATE;
              int x952 = x318->L_RECEIPTDATE;
              char* x953 = x318->L_SHIPINSTRUCT;
              char* x954 = x318->L_SHIPMODE;
              char* x955 = x318->L_COMMENT;
              int x4560 = x34050;
              struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord* x4561 = &(x34051[x4560]);
              x4561->C_CUSTKEY = x926;
              x4561->C_NAME = x927;
              x4561->C_ADDRESS = x928;
              x4561->C_NATIONKEY = x929;
              x4561->C_PHONE = x930;
              x4561->C_ACCTBAL = x931;
              x4561->C_MKTSEGMENT = x932;
              x4561->C_COMMENT = x933;
              x4561->O_ORDERKEY = x11371;
              x4561->O_CUSTKEY = x934;
              x4561->O_ORDERSTATUS = x935;
              x4561->O_TOTALPRICE = x936;
              x4561->O_ORDERDATE = x937;
              x4561->O_ORDERPRIORITY = x938;
              x4561->O_CLERK = x939;
              x4561->O_SHIPPRIORITY = x940;
              x4561->O_COMMENT = x941;
              x4561->L_ORDERKEY = x322;
              x4561->L_PARTKEY = x942;
              x4561->L_SUPPKEY = x943;
              x4561->L_LINENUMBER = x944;
              x4561->L_QUANTITY = x945;
              x4561->L_EXTENDEDPRICE = x946;
              x4561->L_DISCOUNT = x947;
              x4561->L_TAX = x948;
              x4561->L_RETURNFLAG = x949;
              x4561->L_LINESTATUS = x950;
              x4561->L_SHIPDATE = x320;
              x4561->L_COMMITDATE = x951;
              x4561->L_RECEIPTDATE = x952;
              x4561->L_SHIPINSTRUCT = x953;
              x4561->L_SHIPMODE = x954;
              x4561->L_COMMENT = x955;
              int x4595 = x34050;
              int x4596 = x4595+(1);
              x34050 = x4596;
              int x373 = x4561->L_ORDERKEY;
              int x374 = x4561->O_ORDERDATE;
              int x375 = x4561->O_SHIPPRIORITY;
              int x4601 = x34067;
              struct Q3GRPRecord* x4602 = &(x34068[x4601]);
              x4602->L_ORDERKEY = x373;
              x4602->O_ORDERDATE = x374;
              x4602->O_SHIPPRIORITY = x375;
              int x4606 = x34067;
              int x4607 = x4606+(1);
              x34067 = x4607;
              void* x11453 = g_hash_table_lookup(x34012, x4602);
              int x11325 = x11453==(NULL);
              /* VAR */ struct AGGRecord_Q3GRPRecord* ite28550 = 0;
              if(x11325) {
                int x28551 = x34084;
                double* x28552 = x34085[x28551];
                int x28553 = x34084;
                int x28554 = x28553+(1);
                x34084 = x28554;
                int x28556 = x34096;
                struct AGGRecord_Q3GRPRecord* x28557 = &(x34097[x28556]);
                x28557->key = x4602;
                x28557->aggs = x28552;
                int x28560 = x34096;
                int x28561 = x28560+(1);
                x34096 = x28561;
                g_hash_table_insert(x34012, x4602, x28557);
                ite28550 = x28557;
              } else {
                
                ite28550 = x11453;
              };
              struct AGGRecord_Q3GRPRecord* x11351 = ite28550;
              double* x381 = x11351->aggs;
              double x395 = x381[0];
              double x396 = x4561->L_EXTENDEDPRICE;
              double x397 = x4561->L_DISCOUNT;
              double x398 = 1.0-(x397);
              double x399 = x396*(x398);
              double x400 = x395+(x399);
              *x381 = x400;
            };
          };
        };
      };
      int x2133 = x34125;
      int x412 = x2133+(1);
      x34125 = x412;
    };
    GList* x34649 = g_hash_table_get_keys(x34012);
    /* VAR */ GList* x34650 = x34649;
    int x34651 = g_hash_table_size(x34012);
    int x24921 = 0;
    for(; x24921 < x34651 ; x24921 += 1) {
      
      GList* x24922 = x34650;
      void* x24923 = g_list_nth_data(x24922, 0);
      GList* x24924 = g_list_next(x24922);
      x34650 = x24924;
      void* x24926 = g_hash_table_lookup(x34012, x24923);
      struct AGGRecord_Q3GRPRecord* x24928 = (struct AGGRecord_Q3GRPRecord*){x24926};
      g_tree_insert(x34205, x24928, x24928);
    };
    while(1) {
      
      int x2142 = x34206;
      int x423 = !(x2142);
      /* VAR */ int ite30635 = 0;
      if(x423) {
        int x34676 = g_tree_nnodes(x34205);
        int x34677 = x34676!=(0);
        ite30635 = x34677;
      } else {
        
        ite30635 = 0;
      };
      int x28609 = ite30635;
      if (!(x28609)) break; 
      
      void* x11508 = NULL;
      void** x11516 = &(x11508);
      g_tree_foreach(x34205, x11515, x11516);
      struct AGGRecord_Q3GRPRecord* x11518 = (struct AGGRecord_Q3GRPRecord*){x11508};
      int x11519 = g_tree_remove(x34205, x11518);
      int x2150 = x34207;
      int x433 = x2150>=(10);
      if(x433) {
        x34206 = 1;
      } else {
        
        struct Q3GRPRecord* x435 = x11518->key;
        int x436 = x435->L_ORDERKEY;
        double* x437 = x11518->aggs;
        double x438 = x437[0];
        int x439 = x435->O_ORDERDATE;
        char* x440 = ltoa(x439);
        int x441 = x435->O_SHIPPRIORITY;
        printf("%d|%.4f|%s|%d\n", x436, x438, x440, x441);
        int x2162 = x34207;
        int x444 = x2162+(1);
        x34207 = x444;
      };
    };
    int x34709 = x34207;
    printf("(%d rows)\n", x34709);
    struct timeval* x34711 = &x34120;
    gettimeofday(x34711, NULL);
    struct timeval* x34713 = &x34116;
    struct timeval* x34714 = &x34120;
    struct timeval* x34715 = &x34118;
    long x34716 = timeval_subtract(x34713, x34714, x34715);
    printf("Generated code run in %ld milliseconds.\n", x34716);
  };
}
/* ----------- FUNCTIONS ----------- */
int x33981(struct Q3GRPRecord* x10885) {
  int x18712 = x10885->L_ORDERKEY;
  int x18714 = x10885->O_ORDERDATE;
  int x18716 = x10885->O_SHIPPRIORITY;
  int x18718 = x18712+(x18714);
  int x18719 = x18718+(x18716);
  return x18719; 
}

int x33988(struct Q3GRPRecord* x10890, struct Q3GRPRecord* x10891) {
  int x18723 = x10890->L_ORDERKEY;
  int x18724 = x10891->L_ORDERKEY;
  int x18725 = x18723==(x18724);
  int x18726 = x10890->O_ORDERDATE;
  int x18727 = x10891->O_ORDERDATE;
  int x18728 = x18726==(x18727);
  int x18729 = x10890->O_SHIPPRIORITY;
  int x18730 = x10891->O_SHIPPRIORITY;
  int x18731 = x18729==(x18730);
  /* VAR */ int ite29956 = 0;
  if(x18725) {
    ite29956 = x18728;
  } else {
    
    ite29956 = 0;
  };
  int x27946 = ite29956;
  /* VAR */ int ite29963 = 0;
  if(x27946) {
    ite29963 = x18731;
  } else {
    
    ite29963 = 0;
  };
  int x27948 = ite29963;
  return x27948; 
}

int x34013(void* x9126) {
  int x9127 = g_direct_hash(x9126);
  return x9127; 
}

int x34016(void* x9129, void* x9130) {
  int x9131 = g_direct_equal(x9129, x9130);
  return x9131; 
}

int x34023(void* x9136) {
  int x9137 = g_direct_hash(x9136);
  return x9137; 
}

int x34026(void* x9139, void* x9140) {
  int x9141 = g_direct_equal(x9139, x9140);
  return x9141; 
}

int x34165(struct AGGRecord_Q3GRPRecord* x219, struct AGGRecord_Q3GRPRecord* x220) {
  double* x221 = x219->aggs;
  double x222 = x221[0];
  double* x223 = x220->aggs;
  double x224 = x223[0];
  int x225 = x222<(x224);
  /* VAR */ int ite28111 = 0;
  if(x225) {
    ite28111 = 1;
  } else {
    
    int x28113 = x222>(x224);
    /* VAR */ int ite28115 = 0;
    if(x28113) {
      ite28115 = -1;
    } else {
      
      struct Q3GRPRecord* x28117 = x219->key;
      int x28118 = x28117->O_ORDERDATE;
      struct Q3GRPRecord* x28119 = x220->key;
      int x28120 = x28119->O_ORDERDATE;
      int x28121 = x28118<(x28120);
      /* VAR */ int ite28123 = 0;
      if(x28121) {
        ite28123 = -1;
      } else {
        
        int x28125 = x28118>(x28120);
        /* VAR */ int ite28127 = 0;
        if(x28125) {
          ite28127 = 1;
        } else {
          
          ite28127 = 0;
        };
        int x28126 = ite28127;
        ite28123 = x28126;
      };
      int x28122 = ite28123;
      ite28115 = x28122;
    };
    int x28114 = ite28115;
    ite28111 = x28114;
  };
  int x236 = ite28111;
  return x236; 
}

int x11515(void* x11509, void* x11510, void* x11511) {
  struct AGGRecord_Q3GRPRecord** x11512 = (struct AGGRecord_Q3GRPRecord**){x11511};
  struct AGGRecord_Q3GRPRecord* x11513 = (struct AGGRecord_Q3GRPRecord*){x11510};
  pointer_assign(x11512, x11513);
  return 1; 
}
