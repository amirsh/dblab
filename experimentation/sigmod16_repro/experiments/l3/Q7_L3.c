#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct AGGRecord_Q7GRPRecord;
  struct NATIONRecord;
  struct ORDERSRecord;
  struct Q7GRPRecord;
  struct SUPPLIERRecord;
  struct CUSTOMERRecord;
  
  struct LINEITEMRecord {
  int L_ORDERKEY;
  int L_SUPPKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  int L_SHIPDATE;
  };
  
  struct AGGRecord_Q7GRPRecord {
  struct Q7GRPRecord* key;
  double* aggs;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  };
  
  struct Q7GRPRecord {
  char* SUPP_NATION;
  char* CUST_NATION;
  int L_YEAR;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  int S_NATIONKEY;
  };
  
  struct CUSTOMERRecord {
  int C_CUSTKEY;
  int C_NATIONKEY;
  };
  
  


int x47868(struct AGGRecord_Q7GRPRecord* x344, struct AGGRecord_Q7GRPRecord* x345);

int x18459(void* x18453, void* x18454, void* x18455);
/* GLOBAL VARS */

struct timeval x11688;
int main(int argc, char** argv) {
  FILE* x12426 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x12427 = 0;
  int x12428 = x12427;
  int* x12429 = &x12428;
  int x12430 = fscanf(x12426, "%d", x12429);
  pclose(x12426);
  struct NATIONRecord* x14400 = (struct NATIONRecord*)malloc(x12428 * sizeof(struct NATIONRecord));
  memset(x14400, 0, x12428 * sizeof(struct NATIONRecord));
  int x12434 = O_RDONLY;
  int x12435 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x12434);
  struct stat x12436 = (struct stat){0};
  /* VAR */ struct stat x12437 = x12436;
  struct stat x12438 = x12437;
  struct stat* x12439 = &x12438;
  int x12440 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x12439);
  int x12442 = PROT_READ;
  int x12443 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x12439->st_size), x12442, x12443, x12435, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite36340 = 0;
    if((x5<(x12428))) {
      char x45763 = *x3;
      ite36340 = (x45763!=('\0'));
    } else {
      
      ite36340 = 0;
    };
    int x33684 = ite36340;
    if (!(x33684)) break; 
    
    /* VAR */ int x12451 = 0;
    int x12452 = x12451;
    int* x12453 = &x12452;
    char* x12454 = strntoi_unchecked(x3, x12453);
    x3 = x12454;
    char* x14424 = (char*)malloc(26 * sizeof(char));
    memset(x14424, 0, 26 * sizeof(char));
    /* VAR */ char* x12457 = x3;
    while(1) {
      
      char x12458 = *x3;
      /* VAR */ int ite36359 = 0;
      if((x12458!=('|'))) {
        char x45781 = *x3;
        ite36359 = (x45781!=('\n'));
      } else {
        
        ite36359 = 0;
      };
      int x33696 = ite36359;
      if (!(x33696)) break; 
      
      x3 += 1;
    };
    char* x12465 = x12457;
    int x12466 = x3 - x12465;
    char* x12467 = x12457;
    char* x12468 = strncpy(x14424, x12467, x12466);
    x3 += 1;
    /* VAR */ int x12475 = 0;
    int x12476 = x12475;
    int* x12477 = &x12476;
    char* x12478 = strntoi_unchecked(x3, x12477);
    x3 = x12478;
    char* x14447 = (char*)malloc(153 * sizeof(char));
    memset(x14447, 0, 153 * sizeof(char));
    /* VAR */ char* x12481 = x3;
    while(1) {
      
      char x12482 = *x3;
      /* VAR */ int ite36387 = 0;
      if((x12482!=('|'))) {
        char x45808 = *x3;
        ite36387 = (x45808!=('\n'));
      } else {
        
        ite36387 = 0;
      };
      int x33717 = ite36387;
      if (!(x33717)) break; 
      
      x3 += 1;
    };
    char* x12489 = x12481;
    int x12490 = x3 - x12489;
    char* x12491 = x12481;
    char* x12492 = strncpy(x14447, x12491, x12490);
    x3 += 1;
    struct NATIONRecord* x15462 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x15462, 0, 1 * sizeof(struct NATIONRecord));
    x15462->N_NATIONKEY = x12452; x15462->N_NAME = x14424;
    int x28 = x4;
    struct NATIONRecord x14467 = *x15462;
    *(x14400 + x28) = x14467;
    struct NATIONRecord* x14469 = &(x14400[x28]);
    x15462 = x14469;
    int x30 = x4;
    x4 = (x30+(1));
  };
  FILE* x12505 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x12506 = 0;
  int x12507 = x12506;
  int* x12508 = &x12507;
  int x12509 = fscanf(x12505, "%d", x12508);
  pclose(x12505);
  struct ORDERSRecord* x14480 = (struct ORDERSRecord*)malloc(x12507 * sizeof(struct ORDERSRecord));
  memset(x14480, 0, x12507 * sizeof(struct ORDERSRecord));
  int x12513 = O_RDONLY;
  int x12514 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x12513);
  /* VAR */ struct stat x12515 = x12436;
  struct stat x12516 = x12515;
  struct stat* x12517 = &x12516;
  int x12518 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x12517);
  int x12520 = PROT_READ;
  int x12521 = MAP_PRIVATE;
  char* x36 = mmap(NULL, (x12517->st_size), x12520, x12521, x12514, 0);
  /* VAR */ int x37 = 0;
  while(1) {
    
    int x38 = x37;
    /* VAR */ int ite36437 = 0;
    if((x38<(x12507))) {
      char x45857 = *x36;
      ite36437 = (x45857!=('\0'));
    } else {
      
      ite36437 = 0;
    };
    int x33760 = ite36437;
    if (!(x33760)) break; 
    
    /* VAR */ int x12529 = 0;
    int x12530 = x12529;
    int* x12531 = &x12530;
    char* x12532 = strntoi_unchecked(x36, x12531);
    x36 = x12532;
    /* VAR */ int x12534 = 0;
    int x12535 = x12534;
    int* x12536 = &x12535;
    char* x12537 = strntoi_unchecked(x36, x12536);
    x36 = x12537;
    char x12539 = *x36;
    /* VAR */ char x12540 = x12539;
    x36 += 1;
    x36 += 1;
    /* VAR */ double x12544 = 0.0;
    double x12545 = x12544;
    double* x12546 = &x12545;
    char* x12547 = strntod_unchecked(x36, x12546);
    x36 = x12547;
    /* VAR */ int x12549 = 0;
    int x12550 = x12549;
    int* x12551 = &x12550;
    char* x12552 = strntoi_unchecked(x36, x12551);
    x36 = x12552;
    /* VAR */ int x12554 = 0;
    int x12555 = x12554;
    int* x12556 = &x12555;
    char* x12557 = strntoi_unchecked(x36, x12556);
    x36 = x12557;
    /* VAR */ int x12559 = 0;
    int x12560 = x12559;
    int* x12561 = &x12560;
    char* x12562 = strntoi_unchecked(x36, x12561);
    x36 = x12562;
    char* x14537 = (char*)malloc(16 * sizeof(char));
    memset(x14537, 0, 16 * sizeof(char));
    /* VAR */ char* x12569 = x36;
    while(1) {
      
      char x12570 = *x36;
      /* VAR */ int ite36490 = 0;
      if((x12570!=('|'))) {
        char x45909 = *x36;
        ite36490 = (x45909!=('\n'));
      } else {
        
        ite36490 = 0;
      };
      int x33806 = ite36490;
      if (!(x33806)) break; 
      
      x36 += 1;
    };
    char* x12577 = x12569;
    int x12578 = x36 - x12577;
    char* x12579 = x12569;
    char* x12580 = strncpy(x14537, x12579, x12578);
    x36 += 1;
    char* x14555 = (char*)malloc(16 * sizeof(char));
    memset(x14555, 0, 16 * sizeof(char));
    /* VAR */ char* x12588 = x36;
    while(1) {
      
      char x12589 = *x36;
      /* VAR */ int ite36513 = 0;
      if((x12589!=('|'))) {
        char x45931 = *x36;
        ite36513 = (x45931!=('\n'));
      } else {
        
        ite36513 = 0;
      };
      int x33822 = ite36513;
      if (!(x33822)) break; 
      
      x36 += 1;
    };
    char* x12596 = x12588;
    int x12597 = x36 - x12596;
    char* x12598 = x12588;
    char* x12599 = strncpy(x14555, x12598, x12597);
    x36 += 1;
    /* VAR */ int x12606 = 0;
    int x12607 = x12606;
    int* x12608 = &x12607;
    char* x12609 = strntoi_unchecked(x36, x12608);
    x36 = x12609;
    char* x14578 = (char*)malloc(80 * sizeof(char));
    memset(x14578, 0, 80 * sizeof(char));
    /* VAR */ char* x12612 = x36;
    while(1) {
      
      char x12613 = *x36;
      /* VAR */ int ite36541 = 0;
      if((x12613!=('|'))) {
        char x45958 = *x36;
        ite36541 = (x45958!=('\n'));
      } else {
        
        ite36541 = 0;
      };
      int x33843 = ite36541;
      if (!(x33843)) break; 
      
      x36 += 1;
    };
    char* x12620 = x12612;
    int x12621 = x36 - x12620;
    char* x12622 = x12612;
    char* x12623 = strncpy(x14578, x12622, x12621);
    x36 += 1;
    struct ORDERSRecord* x15595 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x15595, 0, 1 * sizeof(struct ORDERSRecord));
    x15595->O_ORDERKEY = x12530; x15595->O_CUSTKEY = x12535;
    int x72 = x37;
    struct ORDERSRecord x14598 = *x15595;
    *(x14480 + x72) = x14598;
    struct ORDERSRecord* x14600 = &(x14480[x72]);
    x15595 = x14600;
    int x74 = x37;
    x37 = (x74+(1));
  };
  FILE* x12636 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x12637 = 0;
  int x12638 = x12637;
  int* x12639 = &x12638;
  int x12640 = fscanf(x12636, "%d", x12639);
  pclose(x12636);
  struct LINEITEMRecord* x14611 = (struct LINEITEMRecord*)malloc(x12638 * sizeof(struct LINEITEMRecord));
  memset(x14611, 0, x12638 * sizeof(struct LINEITEMRecord));
  int x12644 = O_RDONLY;
  int x12645 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x12644);
  /* VAR */ struct stat x12646 = x12436;
  struct stat x12647 = x12646;
  struct stat* x12648 = &x12647;
  int x12649 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x12648);
  int x12651 = PROT_READ;
  int x12652 = MAP_PRIVATE;
  char* x80 = mmap(NULL, (x12648->st_size), x12651, x12652, x12645, 0);
  /* VAR */ int x81 = 0;
  while(1) {
    
    int x82 = x81;
    /* VAR */ int ite36591 = 0;
    if((x82<(x12638))) {
      char x46007 = *x80;
      ite36591 = (x46007!=('\0'));
    } else {
      
      ite36591 = 0;
    };
    int x33886 = ite36591;
    if (!(x33886)) break; 
    
    /* VAR */ int x12660 = 0;
    int x12661 = x12660;
    int* x12662 = &x12661;
    char* x12663 = strntoi_unchecked(x80, x12662);
    x80 = x12663;
    /* VAR */ int x12665 = 0;
    int x12666 = x12665;
    int* x12667 = &x12666;
    char* x12668 = strntoi_unchecked(x80, x12667);
    x80 = x12668;
    /* VAR */ int x12670 = 0;
    int x12671 = x12670;
    int* x12672 = &x12671;
    char* x12673 = strntoi_unchecked(x80, x12672);
    x80 = x12673;
    /* VAR */ int x12675 = 0;
    int x12676 = x12675;
    int* x12677 = &x12676;
    char* x12678 = strntoi_unchecked(x80, x12677);
    x80 = x12678;
    /* VAR */ double x12680 = 0.0;
    double x12681 = x12680;
    double* x12682 = &x12681;
    char* x12683 = strntod_unchecked(x80, x12682);
    x80 = x12683;
    /* VAR */ double x12685 = 0.0;
    double x12686 = x12685;
    double* x12687 = &x12686;
    char* x12688 = strntod_unchecked(x80, x12687);
    x80 = x12688;
    /* VAR */ double x12690 = 0.0;
    double x12691 = x12690;
    double* x12692 = &x12691;
    char* x12693 = strntod_unchecked(x80, x12692);
    x80 = x12693;
    /* VAR */ double x12695 = 0.0;
    double x12696 = x12695;
    double* x12697 = &x12696;
    char* x12698 = strntod_unchecked(x80, x12697);
    x80 = x12698;
    char x12700 = *x80;
    /* VAR */ char x12701 = x12700;
    x80 += 1;
    x80 += 1;
    char x12705 = *x80;
    /* VAR */ char x12706 = x12705;
    x80 += 1;
    x80 += 1;
    /* VAR */ int x12710 = 0;
    int x12711 = x12710;
    int* x12712 = &x12711;
    char* x12713 = strntoi_unchecked(x80, x12712);
    x80 = x12713;
    /* VAR */ int x12715 = 0;
    int x12716 = x12715;
    int* x12717 = &x12716;
    char* x12718 = strntoi_unchecked(x80, x12717);
    x80 = x12718;
    /* VAR */ int x12720 = 0;
    int x12721 = x12720;
    int* x12722 = &x12721;
    char* x12723 = strntoi_unchecked(x80, x12722);
    x80 = x12723;
    /* VAR */ int x12729 = 0;
    int x12730 = x12729;
    int* x12731 = &x12730;
    char* x12732 = strntoi_unchecked(x80, x12731);
    x80 = x12732;
    /* VAR */ int x12734 = 0;
    int x12735 = x12734;
    int* x12736 = &x12735;
    char* x12737 = strntoi_unchecked(x80, x12736);
    x80 = x12737;
    /* VAR */ int x12739 = 0;
    int x12740 = x12739;
    int* x12741 = &x12740;
    char* x12742 = strntoi_unchecked(x80, x12741);
    x80 = x12742;
    /* VAR */ int x12748 = 0;
    int x12749 = x12748;
    int* x12750 = &x12749;
    char* x12751 = strntoi_unchecked(x80, x12750);
    x80 = x12751;
    /* VAR */ int x12753 = 0;
    int x12754 = x12753;
    int* x12755 = &x12754;
    char* x12756 = strntoi_unchecked(x80, x12755);
    x80 = x12756;
    /* VAR */ int x12758 = 0;
    int x12759 = x12758;
    int* x12760 = &x12759;
    char* x12761 = strntoi_unchecked(x80, x12760);
    x80 = x12761;
    char* x14736 = (char*)malloc(26 * sizeof(char));
    memset(x14736, 0, 26 * sizeof(char));
    /* VAR */ char* x12768 = x80;
    while(1) {
      
      char x12769 = *x80;
      /* VAR */ int ite36712 = 0;
      if((x12769!=('|'))) {
        char x46127 = *x80;
        ite36712 = (x46127!=('\n'));
      } else {
        
        ite36712 = 0;
      };
      int x34000 = ite36712;
      if (!(x34000)) break; 
      
      x80 += 1;
    };
    char* x12776 = x12768;
    int x12777 = x80 - x12776;
    char* x12778 = x12768;
    char* x12779 = strncpy(x14736, x12778, x12777);
    x80 += 1;
    char* x14754 = (char*)malloc(11 * sizeof(char));
    memset(x14754, 0, 11 * sizeof(char));
    /* VAR */ char* x12787 = x80;
    while(1) {
      
      char x12788 = *x80;
      /* VAR */ int ite36735 = 0;
      if((x12788!=('|'))) {
        char x46149 = *x80;
        ite36735 = (x46149!=('\n'));
      } else {
        
        ite36735 = 0;
      };
      int x34016 = ite36735;
      if (!(x34016)) break; 
      
      x80 += 1;
    };
    char* x12795 = x12787;
    int x12796 = x80 - x12795;
    char* x12797 = x12787;
    char* x12798 = strncpy(x14754, x12797, x12796);
    x80 += 1;
    char* x14772 = (char*)malloc(45 * sizeof(char));
    memset(x14772, 0, 45 * sizeof(char));
    /* VAR */ char* x12806 = x80;
    while(1) {
      
      char x12807 = *x80;
      /* VAR */ int ite36758 = 0;
      if((x12807!=('|'))) {
        char x46171 = *x80;
        ite36758 = (x46171!=('\n'));
      } else {
        
        ite36758 = 0;
      };
      int x34032 = ite36758;
      if (!(x34032)) break; 
      
      x80 += 1;
    };
    char* x12814 = x12806;
    int x12815 = x80 - x12814;
    char* x12816 = x12806;
    char* x12817 = strncpy(x14772, x12816, x12815);
    x80 += 1;
    struct LINEITEMRecord* x15791 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x15791, 0, 1 * sizeof(struct LINEITEMRecord));
    x15791->L_ORDERKEY = x12661; x15791->L_SUPPKEY = x12671; x15791->L_EXTENDEDPRICE = x12686; x15791->L_DISCOUNT = x12691; x15791->L_SHIPDATE = (((x12711*(10000))+((x12716*(100))))+(x12721));
    int x124 = x81;
    struct LINEITEMRecord x14792 = *x15791;
    *(x14611 + x124) = x14792;
    struct LINEITEMRecord* x14794 = &(x14611[x124]);
    x15791 = x14794;
    int x126 = x81;
    x81 = (x126+(1));
  };
  FILE* x12830 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x12831 = 0;
  int x12832 = x12831;
  int* x12833 = &x12832;
  int x12834 = fscanf(x12830, "%d", x12833);
  pclose(x12830);
  struct CUSTOMERRecord* x14805 = (struct CUSTOMERRecord*)malloc(x12832 * sizeof(struct CUSTOMERRecord));
  memset(x14805, 0, x12832 * sizeof(struct CUSTOMERRecord));
  int x12838 = O_RDONLY;
  int x12839 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x12838);
  /* VAR */ struct stat x12840 = x12436;
  struct stat x12841 = x12840;
  struct stat* x12842 = &x12841;
  int x12843 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x12842);
  int x12845 = PROT_READ;
  int x12846 = MAP_PRIVATE;
  char* x132 = mmap(NULL, (x12842->st_size), x12845, x12846, x12839, 0);
  /* VAR */ int x133 = 0;
  while(1) {
    
    int x134 = x133;
    /* VAR */ int ite36808 = 0;
    if((x134<(x12832))) {
      char x46220 = *x132;
      ite36808 = (x46220!=('\0'));
    } else {
      
      ite36808 = 0;
    };
    int x34075 = ite36808;
    if (!(x34075)) break; 
    
    /* VAR */ int x12854 = 0;
    int x12855 = x12854;
    int* x12856 = &x12855;
    char* x12857 = strntoi_unchecked(x132, x12856);
    x132 = x12857;
    char* x14828 = (char*)malloc(26 * sizeof(char));
    memset(x14828, 0, 26 * sizeof(char));
    /* VAR */ char* x12860 = x132;
    while(1) {
      
      char x12861 = *x132;
      /* VAR */ int ite36827 = 0;
      if((x12861!=('|'))) {
        char x46238 = *x132;
        ite36827 = (x46238!=('\n'));
      } else {
        
        ite36827 = 0;
      };
      int x34087 = ite36827;
      if (!(x34087)) break; 
      
      x132 += 1;
    };
    char* x12868 = x12860;
    int x12869 = x132 - x12868;
    char* x12870 = x12860;
    char* x12871 = strncpy(x14828, x12870, x12869);
    x132 += 1;
    char* x14846 = (char*)malloc(41 * sizeof(char));
    memset(x14846, 0, 41 * sizeof(char));
    /* VAR */ char* x12879 = x132;
    while(1) {
      
      char x12880 = *x132;
      /* VAR */ int ite36850 = 0;
      if((x12880!=('|'))) {
        char x46260 = *x132;
        ite36850 = (x46260!=('\n'));
      } else {
        
        ite36850 = 0;
      };
      int x34103 = ite36850;
      if (!(x34103)) break; 
      
      x132 += 1;
    };
    char* x12887 = x12879;
    int x12888 = x132 - x12887;
    char* x12889 = x12879;
    char* x12890 = strncpy(x14846, x12889, x12888);
    x132 += 1;
    /* VAR */ int x12897 = 0;
    int x12898 = x12897;
    int* x12899 = &x12898;
    char* x12900 = strntoi_unchecked(x132, x12899);
    x132 = x12900;
    char* x14869 = (char*)malloc(16 * sizeof(char));
    memset(x14869, 0, 16 * sizeof(char));
    /* VAR */ char* x12903 = x132;
    while(1) {
      
      char x12904 = *x132;
      /* VAR */ int ite36878 = 0;
      if((x12904!=('|'))) {
        char x46287 = *x132;
        ite36878 = (x46287!=('\n'));
      } else {
        
        ite36878 = 0;
      };
      int x34124 = ite36878;
      if (!(x34124)) break; 
      
      x132 += 1;
    };
    char* x12911 = x12903;
    int x12912 = x132 - x12911;
    char* x12913 = x12903;
    char* x12914 = strncpy(x14869, x12913, x12912);
    x132 += 1;
    /* VAR */ double x12921 = 0.0;
    double x12922 = x12921;
    double* x12923 = &x12922;
    char* x12924 = strntod_unchecked(x132, x12923);
    x132 = x12924;
    char* x14892 = (char*)malloc(11 * sizeof(char));
    memset(x14892, 0, 11 * sizeof(char));
    /* VAR */ char* x12927 = x132;
    while(1) {
      
      char x12928 = *x132;
      /* VAR */ int ite36906 = 0;
      if((x12928!=('|'))) {
        char x46314 = *x132;
        ite36906 = (x46314!=('\n'));
      } else {
        
        ite36906 = 0;
      };
      int x34145 = ite36906;
      if (!(x34145)) break; 
      
      x132 += 1;
    };
    char* x12935 = x12927;
    int x12936 = x132 - x12935;
    char* x12937 = x12927;
    char* x12938 = strncpy(x14892, x12937, x12936);
    x132 += 1;
    char* x14910 = (char*)malloc(118 * sizeof(char));
    memset(x14910, 0, 118 * sizeof(char));
    /* VAR */ char* x12946 = x132;
    while(1) {
      
      char x12947 = *x132;
      /* VAR */ int ite36929 = 0;
      if((x12947!=('|'))) {
        char x46336 = *x132;
        ite36929 = (x46336!=('\n'));
      } else {
        
        ite36929 = 0;
      };
      int x34161 = ite36929;
      if (!(x34161)) break; 
      
      x132 += 1;
    };
    char* x12954 = x12946;
    int x12955 = x132 - x12954;
    char* x12956 = x12946;
    char* x12957 = strncpy(x14910, x12956, x12955);
    x132 += 1;
    struct CUSTOMERRecord* x15931 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x15931, 0, 1 * sizeof(struct CUSTOMERRecord));
    x15931->C_CUSTKEY = x12855; x15931->C_NATIONKEY = x12898;
    int x182 = x133;
    struct CUSTOMERRecord x14930 = *x15931;
    *(x14805 + x182) = x14930;
    struct CUSTOMERRecord* x14932 = &(x14805[x182]);
    x15931 = x14932;
    int x184 = x133;
    x133 = (x184+(1));
  };
  FILE* x12970 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x12971 = 0;
  int x12972 = x12971;
  int* x12973 = &x12972;
  int x12974 = fscanf(x12970, "%d", x12973);
  pclose(x12970);
  struct SUPPLIERRecord* x14943 = (struct SUPPLIERRecord*)malloc(x12972 * sizeof(struct SUPPLIERRecord));
  memset(x14943, 0, x12972 * sizeof(struct SUPPLIERRecord));
  int x12978 = O_RDONLY;
  int x12979 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x12978);
  /* VAR */ struct stat x12980 = x12436;
  struct stat x12981 = x12980;
  struct stat* x12982 = &x12981;
  int x12983 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x12982);
  int x12985 = PROT_READ;
  int x12986 = MAP_PRIVATE;
  char* x190 = mmap(NULL, (x12982->st_size), x12985, x12986, x12979, 0);
  /* VAR */ int x191 = 0;
  while(1) {
    
    int x192 = x191;
    /* VAR */ int ite36979 = 0;
    if((x192<(x12972))) {
      char x46385 = *x190;
      ite36979 = (x46385!=('\0'));
    } else {
      
      ite36979 = 0;
    };
    int x34204 = ite36979;
    if (!(x34204)) break; 
    
    /* VAR */ int x12994 = 0;
    int x12995 = x12994;
    int* x12996 = &x12995;
    char* x12997 = strntoi_unchecked(x190, x12996);
    x190 = x12997;
    char* x14966 = (char*)malloc(26 * sizeof(char));
    memset(x14966, 0, 26 * sizeof(char));
    /* VAR */ char* x13000 = x190;
    while(1) {
      
      char x13001 = *x190;
      /* VAR */ int ite36998 = 0;
      if((x13001!=('|'))) {
        char x46403 = *x190;
        ite36998 = (x46403!=('\n'));
      } else {
        
        ite36998 = 0;
      };
      int x34216 = ite36998;
      if (!(x34216)) break; 
      
      x190 += 1;
    };
    char* x13008 = x13000;
    int x13009 = x190 - x13008;
    char* x13010 = x13000;
    char* x13011 = strncpy(x14966, x13010, x13009);
    x190 += 1;
    char* x14984 = (char*)malloc(41 * sizeof(char));
    memset(x14984, 0, 41 * sizeof(char));
    /* VAR */ char* x13019 = x190;
    while(1) {
      
      char x13020 = *x190;
      /* VAR */ int ite37021 = 0;
      if((x13020!=('|'))) {
        char x46425 = *x190;
        ite37021 = (x46425!=('\n'));
      } else {
        
        ite37021 = 0;
      };
      int x34232 = ite37021;
      if (!(x34232)) break; 
      
      x190 += 1;
    };
    char* x13027 = x13019;
    int x13028 = x190 - x13027;
    char* x13029 = x13019;
    char* x13030 = strncpy(x14984, x13029, x13028);
    x190 += 1;
    /* VAR */ int x13037 = 0;
    int x13038 = x13037;
    int* x13039 = &x13038;
    char* x13040 = strntoi_unchecked(x190, x13039);
    x190 = x13040;
    char* x15007 = (char*)malloc(16 * sizeof(char));
    memset(x15007, 0, 16 * sizeof(char));
    /* VAR */ char* x13043 = x190;
    while(1) {
      
      char x13044 = *x190;
      /* VAR */ int ite37049 = 0;
      if((x13044!=('|'))) {
        char x46452 = *x190;
        ite37049 = (x46452!=('\n'));
      } else {
        
        ite37049 = 0;
      };
      int x34253 = ite37049;
      if (!(x34253)) break; 
      
      x190 += 1;
    };
    char* x13051 = x13043;
    int x13052 = x190 - x13051;
    char* x13053 = x13043;
    char* x13054 = strncpy(x15007, x13053, x13052);
    x190 += 1;
    /* VAR */ double x13061 = 0.0;
    double x13062 = x13061;
    double* x13063 = &x13062;
    char* x13064 = strntod_unchecked(x190, x13063);
    x190 = x13064;
    char* x15030 = (char*)malloc(102 * sizeof(char));
    memset(x15030, 0, 102 * sizeof(char));
    /* VAR */ char* x13067 = x190;
    while(1) {
      
      char x13068 = *x190;
      /* VAR */ int ite37077 = 0;
      if((x13068!=('|'))) {
        char x46479 = *x190;
        ite37077 = (x46479!=('\n'));
      } else {
        
        ite37077 = 0;
      };
      int x34274 = ite37077;
      if (!(x34274)) break; 
      
      x190 += 1;
    };
    char* x13075 = x13067;
    int x13076 = x190 - x13075;
    char* x13077 = x13067;
    char* x13078 = strncpy(x15030, x13077, x13076);
    x190 += 1;
    struct SUPPLIERRecord* x16053 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x16053, 0, 1 * sizeof(struct SUPPLIERRecord));
    x16053->S_SUPPKEY = x12995; x16053->S_NATIONKEY = x13038;
    int x232 = x191;
    struct SUPPLIERRecord x15050 = *x16053;
    *(x14943 + x232) = x15050;
    struct SUPPLIERRecord* x15052 = &(x14943[x232]);
    x16053 = x15052;
    int x234 = x191;
    x191 = (x234+(1));
  };
  int x239 = 0;
  for(; x239 < 1 ; x239 += 1) {
    
    /* VAR */ int x47655 = 0;
    GList*** x47656 = (GList***)malloc(1048576 * sizeof(GList**));
    memset(x47656, 0, 1048576 * sizeof(GList**));
    int x30119 = 0;
    for(; x30119 < 1048576 ; x30119 += 1) {
      
      GList** x30120 = malloc(8);
      GList* x30121 = NULL;
      pointer_assign(x30120, x30121);
      *(x47656 + x30119) = x30120;
    };
    struct ORDERSRecord* x47668 = (struct ORDERSRecord*)malloc(60000000 * sizeof(struct ORDERSRecord));
    memset(x47668, 0, 60000000 * sizeof(struct ORDERSRecord));
    int x30135 = 0;
    for(; x30135 < x12507 ; x30135 += 1) {
      
      struct ORDERSRecord* x30136 = &(x14480[x30135]);
      int x30138 = (x30136->O_ORDERKEY)%(60000000);
      struct ORDERSRecord x30139 = *x30136;
      *(x47668 + x30138) = x30139;
      struct ORDERSRecord* x30141 = &(x47668[x30138]);
      x30136 = x30141;
    };
    struct LINEITEMRecord** x47686 = (struct LINEITEMRecord**)malloc(80000 * sizeof(struct LINEITEMRecord*));
    memset(x47686, 0, 80000 * sizeof(struct LINEITEMRecord*));
    int* x47687 = (int*)malloc(80000 * sizeof(int));
    memset(x47687, 0, 80000 * sizeof(int));
    int x30150 = 0;
    for(; x30150 < 80000 ; x30150 += 1) {
      
      struct LINEITEMRecord* x30151 = (struct LINEITEMRecord*)malloc(1024 * sizeof(struct LINEITEMRecord));
      memset(x30151, 0, 1024 * sizeof(struct LINEITEMRecord));
      *(x47686 + x30150) = x30151;
    };
    /* VAR */ int x47695 = 0;
    int x30171 = 0;
    for(; x30171 < x12638 ; x30171 += 1) {
      
      struct LINEITEMRecord* x30172 = &(x14611[x30171]);
      int x30174 = (x30172->L_SUPPKEY)%(80000);
      int x30175 = x47687[x30174];
      struct LINEITEMRecord* x30176 = x47686[x30174];
      struct LINEITEMRecord x30177 = *x30172;
      *(x30176 + x30175) = x30177;
      struct LINEITEMRecord* x30179 = &(x30176[x30175]);
      x30172 = x30179;
      *(x47687 + x30174) = (x30175+(1));
      int x30183 = x47695;
      x47695 = (x30183+(1));
    };
    struct SUPPLIERRecord** x47727 = (struct SUPPLIERRecord**)malloc(25 * sizeof(struct SUPPLIERRecord*));
    memset(x47727, 0, 25 * sizeof(struct SUPPLIERRecord*));
    int* x47728 = (int*)malloc(25 * sizeof(int));
    memset(x47728, 0, 25 * sizeof(int));
    int x30193 = 0;
    for(; x30193 < 25 ; x30193 += 1) {
      
      struct SUPPLIERRecord* x30194 = (struct SUPPLIERRecord*)malloc(4000 * sizeof(struct SUPPLIERRecord));
      memset(x30194, 0, 4000 * sizeof(struct SUPPLIERRecord));
      *(x47727 + x30193) = x30194;
    };
    /* VAR */ int x47736 = 0;
    int x30214 = 0;
    for(; x30214 < x12972 ; x30214 += 1) {
      
      struct SUPPLIERRecord* x30215 = &(x14943[x30214]);
      int x30217 = (x30215->S_NATIONKEY)%(25);
      int x30218 = x47728[x30217];
      struct SUPPLIERRecord* x30219 = x47727[x30217];
      struct SUPPLIERRecord x30220 = *x30215;
      *(x30219 + x30218) = x30220;
      struct SUPPLIERRecord* x30222 = &(x30219[x30218]);
      x30215 = x30222;
      *(x47728 + x30217) = (x30218+(1));
      int x30226 = x47736;
      x47736 = (x30226+(1));
    };
    /* VAR */ int x47768 = 0;
    struct Q7GRPRecord* x47769 = (struct Q7GRPRecord*)malloc(48000000 * sizeof(struct Q7GRPRecord));
    memset(x47769, 0, 48000000 * sizeof(struct Q7GRPRecord));
    /* VAR */ int x47770 = 0;
    while(1) {
      
      int x11451 = x47770;
      if (!((x11451<(48000000)))) break; 
      
      int x11453 = x47770;
      struct Q7GRPRecord* x16148 = (struct Q7GRPRecord*)malloc(1 * sizeof(struct Q7GRPRecord));
      memset(x16148, 0, 1 * sizeof(struct Q7GRPRecord));
      x16148->SUPP_NATION = ""; x16148->CUST_NATION = ""; x16148->L_YEAR = 0;
      struct Q7GRPRecord x15142 = *x16148;
      *(x47769 + x11453) = x15142;
      struct Q7GRPRecord* x15144 = &(x47769[x11453]);
      x16148 = x15144;
      int x11456 = x47770;
      x47770 = (x11456+(1));
    };
    /* VAR */ int x47785 = 0;
    double** x47786 = (double**)malloc(4375 * sizeof(double*));
    memset(x47786, 0, 4375 * sizeof(double*));
    /* VAR */ int x47787 = 0;
    while(1) {
      
      int x11463 = x47787;
      if (!((x11463<(4375)))) break; 
      
      int x11465 = x47787;
      double* x15156 = (double*)malloc(1 * sizeof(double));
      memset(x15156, 0, 1 * sizeof(double));
      *(x47786 + x11465) = x15156;
      int x11468 = x47787;
      x47787 = (x11468+(1));
    };
    /* VAR */ int x47797 = 0;
    struct AGGRecord_Q7GRPRecord* x47798 = (struct AGGRecord_Q7GRPRecord*)malloc(4375 * sizeof(struct AGGRecord_Q7GRPRecord));
    memset(x47798, 0, 4375 * sizeof(struct AGGRecord_Q7GRPRecord));
    /* VAR */ int x47799 = 0;
    while(1) {
      
      int x11475 = x47799;
      if (!((x11475<(4375)))) break; 
      
      int x11477 = x47799;
      struct Q7GRPRecord* x11478 = &(x47769[x11477]);
      double* x11479 = x47786[x11477];
      struct AGGRecord_Q7GRPRecord* x16179 = (struct AGGRecord_Q7GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q7GRPRecord));
      memset(x16179, 0, 1 * sizeof(struct AGGRecord_Q7GRPRecord));
      x16179->key = x11478; x16179->aggs = x11479;
      struct AGGRecord_Q7GRPRecord x15171 = *x16179;
      *(x47798 + x11477) = x15171;
      struct AGGRecord_Q7GRPRecord* x15173 = &(x47798[x11477]);
      x16179 = x15173;
      int x11482 = x47799;
      x47799 = (x11482+(1));
    };
    /* VAR */ struct timeval x47816 = x11688;
    struct timeval x47817 = x47816;
    /* VAR */ struct timeval x47818 = x11688;
    struct timeval x47819 = x47818;
    /* VAR */ struct timeval x47820 = x11688;
    struct timeval x47821 = x47820;
    struct timeval* x47822 = &x47819;
    gettimeofday(x47822, NULL);
    /* VAR */ int x47824 = 0;
    /* VAR */ int x47825 = 0;
    /* VAR */ struct NATIONRecord* x47826 = NULL;
    int* x47909 = &(x47868);
    GTree* x47910 = g_tree_new(x47909);
    /* VAR */ int x47911 = 0;
    /* VAR */ int x47912 = 0;
    while(1) {
      
      int x47914 = x47824;
      if (!((x47914<(x12428)))) break; 
      
      int x3146 = x47824;
      struct NATIONRecord* x399 = &(x14400[x3146]);
      x47826 = x399;
      while(1) {
        
        int x47920 = x47825;
        if (!((x47920<(x12428)))) break; 
        
        int x3156 = x47825;
        struct NATIONRecord* x408 = &(x14400[x3156]);
        struct NATIONRecord* x3159 = x47826;
        char* x411 = x3159->N_NAME;
        int x28077 = strcmp(x411, "UNITED STATES");
        /* VAR */ int ite38554 = 0;
        if((x28077==(0))) {
          int x47931 = strcmp((x408->N_NAME), "INDONESIA");
          ite38554 = (x47931==(0));
        } else {
          
          ite38554 = 0;
        };
        int x35580 = ite38554;
        /* VAR */ int ite38564 = 0;
        if(x35580) {
          ite38564 = 1;
        } else {
          
          int x47940 = strcmp(x411, "INDONESIA");
          /* VAR */ int x47942 = 0;
          if((x47940==(0))) {
            int x47945 = strcmp((x408->N_NAME), "UNITED STATES");
            x47942 = (x47945==(0));
          } else {
            
            x47942 = 0;
          };
          int x47950 = x47942;
          ite38564 = x47950;
        };
        int x35582 = ite38564;
        if(x35582) {
          struct NATIONRecord* x3171 = x47826;
          int x1276 = x3171->N_NATIONKEY;
          int x5862 = x1276%(25);
          int x5863 = x47728[x5862];
          struct SUPPLIERRecord* x5864 = x47727[x5862];
          int x30680 = 0;
          for(; x30680 < x5863 ; x30680 += 1) {
            
            struct SUPPLIERRecord* x30681 = &(x5864[x30680]);
            if((x1276==((x30681->S_NATIONKEY)))) {
              int x1330 = x30681->S_SUPPKEY;
              int x5879 = x1330%(80000);
              int x5880 = x47687[x5879];
              struct LINEITEMRecord* x5881 = x47686[x5879];
              int x30531 = 0;
              for(; x30531 < x5880 ; x30531 += 1) {
                
                struct LINEITEMRecord* x30532 = &(x5881[x30531]);
                int x30533 = x30532->L_SHIPDATE;
                /* VAR */ int ite39170 = 0;
                if((x30533>=(19950101))) {
                  ite39170 = (x30533<=(19961231));
                } else {
                  
                  ite39170 = 0;
                };
                int x36080 = ite39170;
                if(x36080) {
                  if((x1330==((x30532->L_SUPPKEY)))) {
                    int x1392 = x30532->L_ORDERKEY;
                    struct ORDERSRecord* x5907 = &(x47668[x1392]);
                    if((x1392==((x5907->O_ORDERKEY)))) {
                      int x1577 = x5907->O_CUSTKEY;
                      struct CUSTOMERRecord* x9645 = &(x14805[(x1577-(1))]);
                      if(((x9645->C_CUSTKEY)==(x1577))) {
                        /* VAR */ int ite39197 = 0;
                        if(((x9645->C_CUSTKEY)==(x1577))) {
                          ite39197 = ((x9645->C_NATIONKEY)==((x408->N_NATIONKEY)));
                        } else {
                          
                          ite39197 = 0;
                        };
                        int x36101 = ite39197;
                        if(x36101) {
                          int x11594 = x47768;
                          struct Q7GRPRecord* x11595 = &(x47769[x11594]);
                          x11595->SUPP_NATION = (x3171->N_NAME);
                          x11595->CUST_NATION = (x408->N_NAME);
                          x11595->L_YEAR = (x30533/(10000));
                          int x11599 = x47768;
                          x47768 = (x11599+(1));
                          char* x24812 = x11595->SUPP_NATION;
                          int x28151 = strlen(x24812);
                          /* VAR */ int x25909 = 0;
                          /* VAR */ int x25910 = 0;
                          while(1) {
                            
                            int x25911 = x25909;
                            if (!((x25911<(x28151)))) break; 
                            
                            int x25913 = x25910;
                            int x25914 = x25909;
                            char* x28159 = pointer_add(x24812, x25914);
                            char x28160 = *(x28159);
                            x25910 = (x25913+(x28160));
                            int x25919 = x25909;
                            x25909 = (x25919+(1));
                          };
                          int x25923 = x25910;
                          char* x24814 = x11595->CUST_NATION;
                          int x28169 = strlen(x24814);
                          /* VAR */ int x25926 = 0;
                          /* VAR */ int x25927 = 0;
                          while(1) {
                            
                            int x25928 = x25926;
                            if (!((x25928<(x28169)))) break; 
                            
                            int x25930 = x25927;
                            int x25931 = x25926;
                            char* x28177 = pointer_add(x24814, x25931);
                            char x28178 = *(x28177);
                            x25927 = (x25930+(x28178));
                            int x25936 = x25926;
                            x25926 = (x25936+(1));
                          };
                          int x25940 = x25927;
                          int x24816 = x11595->L_YEAR;
                          int x8217 = ((x25923+(x25940))+(x24816))&((1048576-(1)));
                          GList** x8218 = x47656[x8217];
                          int x8219 = x47655;
                          if((x8217>(x8219))) {
                            x47655 = x8217;
                          };
                          /* VAR */ struct AGGRecord_Q7GRPRecord* x18364 = NULL;
                          GList* x18365 = *(x8218);
                          /* VAR */ GList* x18366 = x18365;
                          while(1) {
                            
                            GList* x18367 = x18366;
                            GList* x18368 = NULL;
                            if (!((x18367!=(x18368)))) break; 
                            
                            GList* x18370 = x18366;
                            void* x18371 = g_list_nth_data(x18370, 0);
                            struct AGGRecord_Q7GRPRecord* x18372 = (struct AGGRecord_Q7GRPRecord*){x18371};
                            GList* x18373 = x18366;
                            GList* x18374 = g_list_next(x18373);
                            x18366 = x18374;
                            struct Q7GRPRecord* x18376 = x18372->key;
                            int x25979 = strcmp((x18376->SUPP_NATION), x24812);
                            int x25980 = !(x25979);
                            int x25982 = strcmp((x18376->CUST_NATION), x24814);
                            int x25983 = !(x25982);
                            /* VAR */ int ite39307 = 0;
                            if(x25980) {
                              ite39307 = x25983;
                            } else {
                              
                              ite39307 = 0;
                            };
                            int x36194 = ite39307;
                            /* VAR */ int ite39314 = 0;
                            if(x36194) {
                              ite39314 = ((x18376->L_YEAR)==(x24816));
                            } else {
                              
                              ite39314 = 0;
                            };
                            int x36196 = ite39314;
                            if(x36196) {
                              x18364 = x18372;
                              break;
                            };
                          };
                          struct AGGRecord_Q7GRPRecord* x18382 = x18364;
                          /* VAR */ struct AGGRecord_Q7GRPRecord* ite36203 = 0;
                          if((x18382!=(NULL))) {
                            ite36203 = x18382;
                          } else {
                            
                            int x36205 = x47785;
                            double* x36206 = x47786[x36205];
                            int x36207 = x47785;
                            x47785 = (x36207+(1));
                            int x36210 = x47797;
                            struct AGGRecord_Q7GRPRecord* x36211 = &(x47798[x36210]);
                            x36211->key = x11595;
                            x36211->aggs = x36206;
                            int x36214 = x47797;
                            x47797 = (x36214+(1));
                            GList* x36217 = *(x8218);
                            GList* x36218 = g_list_prepend(x36217, x36211);
                            pointer_assign(x8218, x36218);
                            ite36203 = x36211;
                          };
                          struct AGGRecord_Q7GRPRecord* x8232 = ite36203;
                          double* x717 = x8232->aggs;
                          double x731 = x717[0];
                          *x717 = (x731+(((x30532->L_EXTENDEDPRICE)*((1.0-((x30532->L_DISCOUNT)))))));
                        };
                      };
                    };
                  };
                };
              };
            };
          };
        };
        int x3179 = x47825;
        x47825 = (x3179+(1));
      };
      x47825 = 0;
      int x3183 = x47824;
      x47824 = (x3183+(1));
    };
    int x48715 = x47655;
    int x31017 = 0;
    for(; x31017 < (x48715+(1)) ; x31017 += 1) {
      
      GList** x31018 = x47656[x31017];
      GList* x31023 = *(x31018);
      /* VAR */ GList* x31024 = x31023;
      while(1) {
        
        GList* x18431 = x31024;
        GList* x18432 = NULL;
        if (!((x18431!=(x18432)))) break; 
        
        GList* x18434 = x31024;
        void* x18435 = g_list_nth_data(x18434, 0);
        struct AGGRecord_Q7GRPRecord* x18436 = (struct AGGRecord_Q7GRPRecord*){x18435};
        GList* x18437 = x31024;
        GList* x18438 = g_list_next(x18437);
        x31024 = x18438;
        g_tree_insert(x47910, x18436, x18436);
      };
    };
    while(1) {
      
      int x3541 = x47911;
      int x762 = !(x3541);
      /* VAR */ int ite39406 = 0;
      if(x762) {
        int x48763 = g_tree_nnodes(x47910);
        ite39406 = (x48763!=(0));
      } else {
        
        ite39406 = 0;
      };
      int x36283 = ite39406;
      if (!(x36283)) break; 
      
      void* x18452 = NULL;
      void** x18460 = &(x18452);
      g_tree_foreach(x47910, x18459, x18460);
      struct AGGRecord_Q7GRPRecord* x18462 = (struct AGGRecord_Q7GRPRecord*){x18452};
      int x18463 = g_tree_remove(x47910, x18462);
      if(0) {
        x47911 = 1;
      } else {
        
        struct Q7GRPRecord* x775 = x18462->key;
        double x782 = ((double*) { x18462->aggs })[0];
        printf("%s|%s|%d|%.4f\n", (x775->SUPP_NATION), (x775->CUST_NATION), (x775->L_YEAR), x782);
        int x3563 = x47912;
        x47912 = (x3563+(1));
      };
    };
    int x48793 = x47912;
    printf("(%d rows)\n", x48793);
    struct timeval* x48795 = &x47821;
    gettimeofday(x48795, NULL);
    struct timeval* x48797 = &x47817;
    struct timeval* x48798 = &x47821;
    struct timeval* x48799 = &x47819;
    long x48800 = timeval_subtract(x48797, x48798, x48799);
    printf("Generated code run in %ld milliseconds.\n", x48800);
  };
}
/* ----------- FUNCTIONS ----------- */
int x47868(struct AGGRecord_Q7GRPRecord* x344, struct AGGRecord_Q7GRPRecord* x345) {
  struct Q7GRPRecord* x346 = x344->key;
  struct Q7GRPRecord* x347 = x345->key;
  int x28044 = strcmp((x346->SUPP_NATION), (x347->SUPP_NATION));
  /* VAR */ int ite35531 = 0;
  if((x28044!=(0))) {
    ite35531 = x28044;
  } else {
    
    int x35535 = strcmp((x346->CUST_NATION), (x347->CUST_NATION));
    /* VAR */ int ite35538 = 0;
    if((x35535!=(0))) {
      ite35538 = x35535;
    } else {
      
      int x35540 = x346->L_YEAR;
      int x35541 = x347->L_YEAR;
      /* VAR */ int ite35544 = 0;
      if((x35540<(x35541))) {
        ite35544 = -1;
      } else {
        
        /* VAR */ int ite35548 = 0;
        if((x35540>(x35541))) {
          ite35548 = 1;
        } else {
          
          ite35548 = 0;
        };
        int x35547 = ite35548;
        ite35544 = x35547;
      };
      int x35543 = ite35544;
      ite35538 = x35543;
    };
    int x35537 = ite35538;
    ite35531 = x35537;
  };
  int x363 = ite35531;
  return x363; 
}

int x18459(void* x18453, void* x18454, void* x18455) {
  pointer_assign(((struct AGGRecord_Q7GRPRecord**){x18455}), ((struct AGGRecord_Q7GRPRecord*){x18454}));
  return 1; 
}
