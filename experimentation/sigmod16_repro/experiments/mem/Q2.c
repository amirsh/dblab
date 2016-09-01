#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct REGIONRecord;
struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord;
struct NATIONRecord;
struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord;
struct PARTRecord;
struct SUPPLIERRecord;
struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord;
struct PARTSUPPRecord;
struct REGIONRecord {
  numeric_int_t R_REGIONKEY;
  char* R_NAME;
};

struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord {
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* wnd;
};

struct NATIONRecord {
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
  numeric_int_t N_REGIONKEY;
};

struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord {
  numeric_int_t R_REGIONKEY;
  char* R_NAME;
  numeric_int_t P_PARTKEY;
  char* P_MFGR;
  char* P_TYPE;
  numeric_int_t P_SIZE;
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
  numeric_int_t N_REGIONKEY;
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  numeric_int_t S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  numeric_int_t PS_PARTKEY;
  numeric_int_t PS_SUPPKEY;
  double PS_SUPPLYCOST;
};

struct PARTRecord {
  numeric_int_t P_PARTKEY;
  char* P_MFGR;
  char* P_TYPE;
  numeric_int_t P_SIZE;
};

struct SUPPLIERRecord {
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  numeric_int_t S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
};

struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord {
  numeric_int_t maxSize;
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* array;
};

struct PARTSUPPRecord {
  numeric_int_t PS_PARTKEY;
  numeric_int_t PS_SUPPKEY;
  double PS_SUPPLYCOST;
};


numeric_int_t x62596(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x27581, struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x27582);

numeric_int_t x44190(void* x44184, void* x44185, void* x44186);

int main(int argc, char** argv) {
  /* VAR */ long mallocSym_62529_64507 = 0L;
  /* VAR */ long mallocSym_41470_64508 = 0L;
  /* VAR */ long mallocSym_62480_64509 = 0L;
  /* VAR */ long mallocSym_41553_64510 = 0L;
  /* VAR */ long mallocSym_42333_64511 = 0L;
  /* VAR */ long mallocSym_41123_64512 = 0L;
  /* VAR */ long mallocSym_42281_64513 = 0L;
  /* VAR */ long mallocSym_41531_64514 = 0L;
  /* VAR */ long mallocSym_42095_64515 = 0L;
  /* VAR */ long mallocSym_42167_64516 = 0L;
  /* VAR */ long mallocSym_41947_64517 = 0L;
  /* VAR */ long mallocSym_41363_64518 = 0L;
  /* VAR */ long mallocSym_41185_64519 = 0L;
  /* VAR */ long mallocSym_41379_64520 = 0L;
  /* VAR */ long mallocSym_42351_64521 = 0L;
  /* VAR */ long mallocSym_41399_64522 = 0L;
  /* VAR */ long mallocSym_41433_64523 = 0L;
  /* VAR */ long mallocSym_42018_64524 = 0L;
  /* VAR */ long mallocSym_62499_64525 = 0L;
  /* VAR */ long mallocSym_62482_64526 = 0L;
  /* VAR */ long mallocSym_41234_64527 = 0L;
  /* VAR */ long mallocSym_41491_64528 = 0L;
  /* VAR */ long mallocSym_41329_64529 = 0L;
  /* VAR */ long mallocSym_41508_64530 = 0L;
  /* VAR */ long mallocSym_41449_64531 = 0L;
  /* VAR */ long mallocSym_41165_64532 = 0L;
  /* VAR */ long mallocSym_62511_64533 = 0L;
  /* VAR */ long mallocSym_41091_64534 = 0L;
  /* VAR */ long mallocSym_41040_64535 = 0L;
  /* VAR */ long mallocSym_41537_64536 = 0L;
  /* VAR */ long mallocSym_41525_64537 = 0L;
  /* VAR */ long mallocSym_41510_64538 = 0L;
  /* VAR */ long mallocSym_41288_64539 = 0L;
  /* VAR */ long mallocSym_41144_64540 = 0L;
  /* VAR */ long mallocSym_41107_64541 = 0L;
  /* VAR */ long mallocSym_42303_64542 = 0L;
  /* VAR */ long mallocSym_41075_64543 = 0L;
  /* VAR */ long mallocSym_41254_64544 = 0L;
  /* VAR */ long mallocSym_41309_64545 = 0L;
  FILE* x39540 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ numeric_int_t x39541 = 0;
  numeric_int_t x39542 = x39541;
  numeric_int_t* x39543 = &x39542;
  numeric_int_t x39544 = fscanf(x39540, "%d", x39543);
  pclose(x39540);
  struct PARTRecord* x64552 = (struct PARTRecord*)malloc(x39542 * sizeof(struct PARTRecord));
  memset(x64552, 0, x39542 * sizeof(struct PARTRecord));
  long x64553 = mallocSym_41040_64535;
  mallocSym_41040_64535 = (x64553+(((long){x39542})));
  numeric_int_t x39548 = O_RDONLY;
  numeric_int_t x39549 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x39548);
  struct stat x39550 = (struct stat){0};
  /* VAR */ struct stat x39551 = x39550;
  struct stat x39552 = x39551;
  struct stat* x39553 = &x39552;
  numeric_int_t x39554 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x39553);
  numeric_int_t x39556 = PROT_READ;
  numeric_int_t x39557 = MAP_PRIVATE;
  char* x27396 = mmap(NULL, (x39553->st_size), x39556, x39557, x39549, 0);
  /* VAR */ numeric_int_t x27397 = 0;
  while(1) {
    
    numeric_int_t x27398 = x27397;
    /* VAR */ boolean_t ite55234 = 0;
    if((x27398<(x39542))) {
      char x61449 = *x27396;
      ite55234 = (x61449!=('\0'));
    } else {
      
      ite55234 = 0;
    };
    boolean_t x53976 = ite55234;
    if (!(x53976)) break; 
    
    /* VAR */ numeric_int_t x39565 = 0;
    numeric_int_t x39566 = x39565;
    numeric_int_t* x39567 = &x39566;
    char* x39568 = strntoi_unchecked(x27396, x39567);
    x27396 = x39568;
    /* VAR */ char* x39570 = x27396;
    while(1) {
      
      char x39571 = *x27396;
      /* VAR */ boolean_t ite55252 = 0;
      if((x39571!=('|'))) {
        char x61466 = *x27396;
        ite55252 = (x61466!=('\n'));
      } else {
        
        ite55252 = 0;
      };
      boolean_t x53987 = ite55252;
      if (!(x53987)) break; 
      
      x27396 += 1;
    };
    char* x39578 = x39570;
    numeric_int_t x39579 = x27396 - x39578;
    numeric_int_t x39580 = x39579+(1);
    char* x64601 = (char*)malloc(x39580 * sizeof(char));
    memset(x64601, 0, x39580 * sizeof(char));
    long x64602 = mallocSym_41075_64543;
    mallocSym_41075_64543 = (x64602+(((long){x39580})));
    char* x39583 = x39570;
    char* x39584 = strncpy(x64601, x39583, x39579);
    x27396 += 1;
    /* VAR */ char* x39586 = x27396;
    while(1) {
      
      char x39587 = *x27396;
      /* VAR */ boolean_t ite55273 = 0;
      if((x39587!=('|'))) {
        char x61486 = *x27396;
        ite55273 = (x61486!=('\n'));
      } else {
        
        ite55273 = 0;
      };
      boolean_t x54001 = ite55273;
      if (!(x54001)) break; 
      
      x27396 += 1;
    };
    char* x39594 = x39586;
    numeric_int_t x39595 = x27396 - x39594;
    numeric_int_t x39596 = x39595+(1);
    char* x64625 = (char*)malloc(x39596 * sizeof(char));
    memset(x64625, 0, x39596 * sizeof(char));
    long x64626 = mallocSym_41091_64534;
    mallocSym_41091_64534 = (x64626+(((long){x39596})));
    char* x39599 = x39586;
    char* x39600 = strncpy(x64625, x39599, x39595);
    x27396 += 1;
    /* VAR */ char* x39602 = x27396;
    while(1) {
      
      char x39603 = *x27396;
      /* VAR */ boolean_t ite55294 = 0;
      if((x39603!=('|'))) {
        char x61506 = *x27396;
        ite55294 = (x61506!=('\n'));
      } else {
        
        ite55294 = 0;
      };
      boolean_t x54015 = ite55294;
      if (!(x54015)) break; 
      
      x27396 += 1;
    };
    char* x39610 = x39602;
    numeric_int_t x39611 = x27396 - x39610;
    numeric_int_t x39612 = x39611+(1);
    char* x64649 = (char*)malloc(x39612 * sizeof(char));
    memset(x64649, 0, x39612 * sizeof(char));
    long x64650 = mallocSym_41107_64541;
    mallocSym_41107_64541 = (x64650+(((long){x39612})));
    char* x39615 = x39602;
    char* x39616 = strncpy(x64649, x39615, x39611);
    x27396 += 1;
    /* VAR */ char* x39618 = x27396;
    while(1) {
      
      char x39619 = *x27396;
      /* VAR */ boolean_t ite55315 = 0;
      if((x39619!=('|'))) {
        char x61526 = *x27396;
        ite55315 = (x61526!=('\n'));
      } else {
        
        ite55315 = 0;
      };
      boolean_t x54029 = ite55315;
      if (!(x54029)) break; 
      
      x27396 += 1;
    };
    char* x39626 = x39618;
    numeric_int_t x39627 = x27396 - x39626;
    numeric_int_t x39628 = x39627+(1);
    char* x64673 = (char*)malloc(x39628 * sizeof(char));
    memset(x64673, 0, x39628 * sizeof(char));
    long x64674 = mallocSym_41123_64512;
    mallocSym_41123_64512 = (x64674+(((long){x39628})));
    char* x39631 = x39618;
    char* x39632 = strncpy(x64673, x39631, x39627);
    x27396 += 1;
    /* VAR */ numeric_int_t x39634 = 0;
    numeric_int_t x39635 = x39634;
    numeric_int_t* x39636 = &x39635;
    char* x39637 = strntoi_unchecked(x27396, x39636);
    x27396 = x39637;
    /* VAR */ char* x39639 = x27396;
    while(1) {
      
      char x39640 = *x27396;
      /* VAR */ boolean_t ite55341 = 0;
      if((x39640!=('|'))) {
        char x61551 = *x27396;
        ite55341 = (x61551!=('\n'));
      } else {
        
        ite55341 = 0;
      };
      boolean_t x54048 = ite55341;
      if (!(x54048)) break; 
      
      x27396 += 1;
    };
    char* x39647 = x39639;
    numeric_int_t x39648 = x27396 - x39647;
    numeric_int_t x39649 = x39648+(1);
    char* x64702 = (char*)malloc(x39649 * sizeof(char));
    memset(x64702, 0, x39649 * sizeof(char));
    long x64703 = mallocSym_41144_64540;
    mallocSym_41144_64540 = (x64703+(((long){x39649})));
    char* x39652 = x39639;
    char* x39653 = strncpy(x64702, x39652, x39648);
    x27396 += 1;
    /* VAR */ double x39655 = 0.0;
    double x39656 = x39655;
    double* x39657 = &x39656;
    char* x39658 = strntod_unchecked(x27396, x39657);
    x27396 = x39658;
    /* VAR */ char* x39660 = x27396;
    while(1) {
      
      char x39661 = *x27396;
      /* VAR */ boolean_t ite55367 = 0;
      if((x39661!=('|'))) {
        char x61576 = *x27396;
        ite55367 = (x61576!=('\n'));
      } else {
        
        ite55367 = 0;
      };
      boolean_t x54067 = ite55367;
      if (!(x54067)) break; 
      
      x27396 += 1;
    };
    char* x39668 = x39660;
    numeric_int_t x39669 = x27396 - x39668;
    numeric_int_t x39670 = x39669+(1);
    char* x64731 = (char*)malloc(x39670 * sizeof(char));
    memset(x64731, 0, x39670 * sizeof(char));
    long x64732 = mallocSym_41165_64532;
    mallocSym_41165_64532 = (x64732+(((long){x39670})));
    char* x39673 = x39660;
    char* x39674 = strncpy(x64731, x39673, x39669);
    x27396 += 1;
    struct PARTRecord* x64739 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x64739, 0, 1 * sizeof(struct PARTRecord));
    long x64740 = mallocSym_41947_64517;
    mallocSym_41947_64517 = (x64740+(((long){1})));
    x64739->P_PARTKEY = x39566; x64739->P_MFGR = x64625; x64739->P_TYPE = x64673; x64739->P_SIZE = x39635;
    numeric_int_t x27412 = x27397;
    struct PARTRecord x41172 = *x64739;
    *(x64552 + x27412) = x41172;
    struct PARTRecord* x41174 = &(x64552[x27412]);
    x64739 = x41174;
    numeric_int_t x27414 = x27397;
    x27397 = (x27414+(1));
  };
  FILE* x39682 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ numeric_int_t x39683 = 0;
  numeric_int_t x39684 = x39683;
  numeric_int_t* x39685 = &x39684;
  numeric_int_t x39686 = fscanf(x39682, "%d", x39685);
  pclose(x39682);
  struct PARTSUPPRecord* x64760 = (struct PARTSUPPRecord*)malloc(x39684 * sizeof(struct PARTSUPPRecord));
  memset(x64760, 0, x39684 * sizeof(struct PARTSUPPRecord));
  long x64761 = mallocSym_41185_64519;
  mallocSym_41185_64519 = (x64761+(((long){x39684})));
  numeric_int_t x39690 = O_RDONLY;
  numeric_int_t x39691 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x39690);
  /* VAR */ struct stat x39692 = x39550;
  struct stat x39693 = x39692;
  struct stat* x39694 = &x39693;
  numeric_int_t x39695 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x39694);
  numeric_int_t x39697 = PROT_READ;
  numeric_int_t x39698 = MAP_PRIVATE;
  char* x27420 = mmap(NULL, (x39694->st_size), x39697, x39698, x39691, 0);
  /* VAR */ numeric_int_t x27421 = 0;
  while(1) {
    
    numeric_int_t x27422 = x27421;
    /* VAR */ boolean_t ite55416 = 0;
    if((x27422<(x39684))) {
      char x61624 = *x27420;
      ite55416 = (x61624!=('\0'));
    } else {
      
      ite55416 = 0;
    };
    boolean_t x54109 = ite55416;
    if (!(x54109)) break; 
    
    /* VAR */ numeric_int_t x39706 = 0;
    numeric_int_t x39707 = x39706;
    numeric_int_t* x39708 = &x39707;
    char* x39709 = strntoi_unchecked(x27420, x39708);
    x27420 = x39709;
    /* VAR */ numeric_int_t x39711 = 0;
    numeric_int_t x39712 = x39711;
    numeric_int_t* x39713 = &x39712;
    char* x39714 = strntoi_unchecked(x27420, x39713);
    x27420 = x39714;
    /* VAR */ numeric_int_t x39716 = 0;
    numeric_int_t x39717 = x39716;
    numeric_int_t* x39718 = &x39717;
    char* x39719 = strntoi_unchecked(x27420, x39718);
    x27420 = x39719;
    /* VAR */ double x39721 = 0.0;
    double x39722 = x39721;
    double* x39723 = &x39722;
    char* x39724 = strntod_unchecked(x27420, x39723);
    x27420 = x39724;
    /* VAR */ char* x39726 = x27420;
    while(1) {
      
      char x39727 = *x27420;
      /* VAR */ boolean_t ite55449 = 0;
      if((x39727!=('|'))) {
        char x61656 = *x27420;
        ite55449 = (x61656!=('\n'));
      } else {
        
        ite55449 = 0;
      };
      boolean_t x54135 = ite55449;
      if (!(x54135)) break; 
      
      x27420 += 1;
    };
    char* x39734 = x39726;
    numeric_int_t x39735 = x27420 - x39734;
    numeric_int_t x39736 = x39735+(1);
    char* x64823 = (char*)malloc(x39736 * sizeof(char));
    memset(x64823, 0, x39736 * sizeof(char));
    long x64824 = mallocSym_41234_64527;
    mallocSym_41234_64527 = (x64824+(((long){x39736})));
    char* x39739 = x39726;
    char* x39740 = strncpy(x64823, x39739, x39735);
    x27420 += 1;
    struct PARTSUPPRecord* x64831 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x64831, 0, 1 * sizeof(struct PARTSUPPRecord));
    long x64832 = mallocSym_42018_64524;
    mallocSym_42018_64524 = (x64832+(((long){1})));
    x64831->PS_PARTKEY = x39707; x64831->PS_SUPPKEY = x39712; x64831->PS_SUPPLYCOST = x39722;
    numeric_int_t x27432 = x27421;
    struct PARTSUPPRecord x41241 = *x64831;
    *(x64760 + x27432) = x41241;
    struct PARTSUPPRecord* x41243 = &(x64760[x27432]);
    x64831 = x41243;
    numeric_int_t x27434 = x27421;
    x27421 = (x27434+(1));
  };
  FILE* x39748 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ numeric_int_t x39749 = 0;
  numeric_int_t x39750 = x39749;
  numeric_int_t* x39751 = &x39750;
  numeric_int_t x39752 = fscanf(x39748, "%d", x39751);
  pclose(x39748);
  struct NATIONRecord* x64852 = (struct NATIONRecord*)malloc(x39750 * sizeof(struct NATIONRecord));
  memset(x64852, 0, x39750 * sizeof(struct NATIONRecord));
  long x64853 = mallocSym_41254_64544;
  mallocSym_41254_64544 = (x64853+(((long){x39750})));
  numeric_int_t x39756 = O_RDONLY;
  numeric_int_t x39757 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x39756);
  /* VAR */ struct stat x39758 = x39550;
  struct stat x39759 = x39758;
  struct stat* x39760 = &x39759;
  numeric_int_t x39761 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x39760);
  numeric_int_t x39763 = PROT_READ;
  numeric_int_t x39764 = MAP_PRIVATE;
  char* x27440 = mmap(NULL, (x39760->st_size), x39763, x39764, x39757, 0);
  /* VAR */ numeric_int_t x27441 = 0;
  while(1) {
    
    numeric_int_t x27442 = x27441;
    /* VAR */ boolean_t ite55498 = 0;
    if((x27442<(x39750))) {
      char x61704 = *x27440;
      ite55498 = (x61704!=('\0'));
    } else {
      
      ite55498 = 0;
    };
    boolean_t x54177 = ite55498;
    if (!(x54177)) break; 
    
    /* VAR */ numeric_int_t x39772 = 0;
    numeric_int_t x39773 = x39772;
    numeric_int_t* x39774 = &x39773;
    char* x39775 = strntoi_unchecked(x27440, x39774);
    x27440 = x39775;
    /* VAR */ char* x39777 = x27440;
    while(1) {
      
      char x39778 = *x27440;
      /* VAR */ boolean_t ite55516 = 0;
      if((x39778!=('|'))) {
        char x61721 = *x27440;
        ite55516 = (x61721!=('\n'));
      } else {
        
        ite55516 = 0;
      };
      boolean_t x54188 = ite55516;
      if (!(x54188)) break; 
      
      x27440 += 1;
    };
    char* x39785 = x39777;
    numeric_int_t x39786 = x27440 - x39785;
    numeric_int_t x39787 = x39786+(1);
    char* x64900 = (char*)malloc(x39787 * sizeof(char));
    memset(x64900, 0, x39787 * sizeof(char));
    long x64901 = mallocSym_41288_64539;
    mallocSym_41288_64539 = (x64901+(((long){x39787})));
    char* x39790 = x39777;
    char* x39791 = strncpy(x64900, x39790, x39786);
    x27440 += 1;
    /* VAR */ numeric_int_t x39793 = 0;
    numeric_int_t x39794 = x39793;
    numeric_int_t* x39795 = &x39794;
    char* x39796 = strntoi_unchecked(x27440, x39795);
    x27440 = x39796;
    /* VAR */ char* x39798 = x27440;
    while(1) {
      
      char x39799 = *x27440;
      /* VAR */ boolean_t ite55542 = 0;
      if((x39799!=('|'))) {
        char x61746 = *x27440;
        ite55542 = (x61746!=('\n'));
      } else {
        
        ite55542 = 0;
      };
      boolean_t x54207 = ite55542;
      if (!(x54207)) break; 
      
      x27440 += 1;
    };
    char* x39806 = x39798;
    numeric_int_t x39807 = x27440 - x39806;
    numeric_int_t x39808 = x39807+(1);
    char* x64929 = (char*)malloc(x39808 * sizeof(char));
    memset(x64929, 0, x39808 * sizeof(char));
    long x64930 = mallocSym_41309_64545;
    mallocSym_41309_64545 = (x64930+(((long){x39808})));
    char* x39811 = x39798;
    char* x39812 = strncpy(x64929, x39811, x39807);
    x27440 += 1;
    struct NATIONRecord* x64937 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x64937, 0, 1 * sizeof(struct NATIONRecord));
    long x64938 = mallocSym_42095_64515;
    mallocSym_42095_64515 = (x64938+(((long){1})));
    x64937->N_NATIONKEY = x39773; x64937->N_NAME = x64900; x64937->N_REGIONKEY = x39794;
    numeric_int_t x27451 = x27441;
    struct NATIONRecord x41316 = *x64937;
    *(x64852 + x27451) = x41316;
    struct NATIONRecord* x41318 = &(x64852[x27451]);
    x64937 = x41318;
    numeric_int_t x27453 = x27441;
    x27441 = (x27453+(1));
  };
  FILE* x39820 = popen("wc -l /mnt/ramdisk/tpch/sf8/region.tbl", "r");
  /* VAR */ numeric_int_t x39821 = 0;
  numeric_int_t x39822 = x39821;
  numeric_int_t* x39823 = &x39822;
  numeric_int_t x39824 = fscanf(x39820, "%d", x39823);
  pclose(x39820);
  struct REGIONRecord* x64958 = (struct REGIONRecord*)malloc(x39822 * sizeof(struct REGIONRecord));
  memset(x64958, 0, x39822 * sizeof(struct REGIONRecord));
  long x64959 = mallocSym_41329_64529;
  mallocSym_41329_64529 = (x64959+(((long){x39822})));
  numeric_int_t x39828 = O_RDONLY;
  numeric_int_t x39829 = open("/mnt/ramdisk/tpch/sf8/region.tbl", x39828);
  /* VAR */ struct stat x39830 = x39550;
  struct stat x39831 = x39830;
  struct stat* x39832 = &x39831;
  numeric_int_t x39833 = stat("/mnt/ramdisk/tpch/sf8/region.tbl", x39832);
  numeric_int_t x39835 = PROT_READ;
  numeric_int_t x39836 = MAP_PRIVATE;
  char* x27459 = mmap(NULL, (x39832->st_size), x39835, x39836, x39829, 0);
  /* VAR */ numeric_int_t x27460 = 0;
  while(1) {
    
    numeric_int_t x27461 = x27460;
    /* VAR */ boolean_t ite55591 = 0;
    if((x27461<(x39822))) {
      char x61794 = *x27459;
      ite55591 = (x61794!=('\0'));
    } else {
      
      ite55591 = 0;
    };
    boolean_t x54249 = ite55591;
    if (!(x54249)) break; 
    
    /* VAR */ numeric_int_t x39844 = 0;
    numeric_int_t x39845 = x39844;
    numeric_int_t* x39846 = &x39845;
    char* x39847 = strntoi_unchecked(x27459, x39846);
    x27459 = x39847;
    /* VAR */ char* x39849 = x27459;
    while(1) {
      
      char x39850 = *x27459;
      /* VAR */ boolean_t ite55609 = 0;
      if((x39850!=('|'))) {
        char x61811 = *x27459;
        ite55609 = (x61811!=('\n'));
      } else {
        
        ite55609 = 0;
      };
      boolean_t x54260 = ite55609;
      if (!(x54260)) break; 
      
      x27459 += 1;
    };
    char* x39857 = x39849;
    numeric_int_t x39858 = x27459 - x39857;
    numeric_int_t x39859 = x39858+(1);
    char* x65006 = (char*)malloc(x39859 * sizeof(char));
    memset(x65006, 0, x39859 * sizeof(char));
    long x65007 = mallocSym_41363_64518;
    mallocSym_41363_64518 = (x65007+(((long){x39859})));
    char* x39862 = x39849;
    char* x39863 = strncpy(x65006, x39862, x39858);
    x27459 += 1;
    /* VAR */ char* x39865 = x27459;
    while(1) {
      
      char x39866 = *x27459;
      /* VAR */ boolean_t ite55630 = 0;
      if((x39866!=('|'))) {
        char x61831 = *x27459;
        ite55630 = (x61831!=('\n'));
      } else {
        
        ite55630 = 0;
      };
      boolean_t x54274 = ite55630;
      if (!(x54274)) break; 
      
      x27459 += 1;
    };
    char* x39873 = x39865;
    numeric_int_t x39874 = x27459 - x39873;
    numeric_int_t x39875 = x39874+(1);
    char* x65030 = (char*)malloc(x39875 * sizeof(char));
    memset(x65030, 0, x39875 * sizeof(char));
    long x65031 = mallocSym_41379_64520;
    mallocSym_41379_64520 = (x65031+(((long){x39875})));
    char* x39878 = x39865;
    char* x39879 = strncpy(x65030, x39878, x39874);
    x27459 += 1;
    struct REGIONRecord* x65038 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x65038, 0, 1 * sizeof(struct REGIONRecord));
    long x65039 = mallocSym_42167_64516;
    mallocSym_42167_64516 = (x65039+(((long){1})));
    x65038->R_REGIONKEY = x39845; x65038->R_NAME = x65006;
    numeric_int_t x27469 = x27460;
    struct REGIONRecord x41386 = *x65038;
    *(x64958 + x27469) = x41386;
    struct REGIONRecord* x41388 = &(x64958[x27469]);
    x65038 = x41388;
    numeric_int_t x27471 = x27460;
    x27460 = (x27471+(1));
  };
  FILE* x39887 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ numeric_int_t x39888 = 0;
  numeric_int_t x39889 = x39888;
  numeric_int_t* x39890 = &x39889;
  numeric_int_t x39891 = fscanf(x39887, "%d", x39890);
  pclose(x39887);
  struct SUPPLIERRecord* x65059 = (struct SUPPLIERRecord*)malloc(x39889 * sizeof(struct SUPPLIERRecord));
  memset(x65059, 0, x39889 * sizeof(struct SUPPLIERRecord));
  long x65060 = mallocSym_41399_64522;
  mallocSym_41399_64522 = (x65060+(((long){x39889})));
  numeric_int_t x39895 = O_RDONLY;
  numeric_int_t x39896 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x39895);
  /* VAR */ struct stat x39897 = x39550;
  struct stat x39898 = x39897;
  struct stat* x39899 = &x39898;
  numeric_int_t x39900 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x39899);
  numeric_int_t x39902 = PROT_READ;
  numeric_int_t x39903 = MAP_PRIVATE;
  char* x27477 = mmap(NULL, (x39899->st_size), x39902, x39903, x39896, 0);
  /* VAR */ numeric_int_t x27478 = 0;
  while(1) {
    
    numeric_int_t x27479 = x27478;
    /* VAR */ boolean_t ite55679 = 0;
    if((x27479<(x39889))) {
      char x61879 = *x27477;
      ite55679 = (x61879!=('\0'));
    } else {
      
      ite55679 = 0;
    };
    boolean_t x54316 = ite55679;
    if (!(x54316)) break; 
    
    /* VAR */ numeric_int_t x39911 = 0;
    numeric_int_t x39912 = x39911;
    numeric_int_t* x39913 = &x39912;
    char* x39914 = strntoi_unchecked(x27477, x39913);
    x27477 = x39914;
    /* VAR */ char* x39916 = x27477;
    while(1) {
      
      char x39917 = *x27477;
      /* VAR */ boolean_t ite55697 = 0;
      if((x39917!=('|'))) {
        char x61896 = *x27477;
        ite55697 = (x61896!=('\n'));
      } else {
        
        ite55697 = 0;
      };
      boolean_t x54327 = ite55697;
      if (!(x54327)) break; 
      
      x27477 += 1;
    };
    char* x39924 = x39916;
    numeric_int_t x39925 = x27477 - x39924;
    numeric_int_t x39926 = x39925+(1);
    char* x65107 = (char*)malloc(x39926 * sizeof(char));
    memset(x65107, 0, x39926 * sizeof(char));
    long x65108 = mallocSym_41433_64523;
    mallocSym_41433_64523 = (x65108+(((long){x39926})));
    char* x39929 = x39916;
    char* x39930 = strncpy(x65107, x39929, x39925);
    x27477 += 1;
    /* VAR */ char* x39932 = x27477;
    while(1) {
      
      char x39933 = *x27477;
      /* VAR */ boolean_t ite55718 = 0;
      if((x39933!=('|'))) {
        char x61916 = *x27477;
        ite55718 = (x61916!=('\n'));
      } else {
        
        ite55718 = 0;
      };
      boolean_t x54341 = ite55718;
      if (!(x54341)) break; 
      
      x27477 += 1;
    };
    char* x39940 = x39932;
    numeric_int_t x39941 = x27477 - x39940;
    numeric_int_t x39942 = x39941+(1);
    char* x65131 = (char*)malloc(x39942 * sizeof(char));
    memset(x65131, 0, x39942 * sizeof(char));
    long x65132 = mallocSym_41449_64531;
    mallocSym_41449_64531 = (x65132+(((long){x39942})));
    char* x39945 = x39932;
    char* x39946 = strncpy(x65131, x39945, x39941);
    x27477 += 1;
    /* VAR */ numeric_int_t x39948 = 0;
    numeric_int_t x39949 = x39948;
    numeric_int_t* x39950 = &x39949;
    char* x39951 = strntoi_unchecked(x27477, x39950);
    x27477 = x39951;
    /* VAR */ char* x39953 = x27477;
    while(1) {
      
      char x39954 = *x27477;
      /* VAR */ boolean_t ite55744 = 0;
      if((x39954!=('|'))) {
        char x61941 = *x27477;
        ite55744 = (x61941!=('\n'));
      } else {
        
        ite55744 = 0;
      };
      boolean_t x54360 = ite55744;
      if (!(x54360)) break; 
      
      x27477 += 1;
    };
    char* x39961 = x39953;
    numeric_int_t x39962 = x27477 - x39961;
    numeric_int_t x39963 = x39962+(1);
    char* x65160 = (char*)malloc(x39963 * sizeof(char));
    memset(x65160, 0, x39963 * sizeof(char));
    long x65161 = mallocSym_41470_64508;
    mallocSym_41470_64508 = (x65161+(((long){x39963})));
    char* x39966 = x39953;
    char* x39967 = strncpy(x65160, x39966, x39962);
    x27477 += 1;
    /* VAR */ double x39969 = 0.0;
    double x39970 = x39969;
    double* x39971 = &x39970;
    char* x39972 = strntod_unchecked(x27477, x39971);
    x27477 = x39972;
    /* VAR */ char* x39974 = x27477;
    while(1) {
      
      char x39975 = *x27477;
      /* VAR */ boolean_t ite55770 = 0;
      if((x39975!=('|'))) {
        char x61966 = *x27477;
        ite55770 = (x61966!=('\n'));
      } else {
        
        ite55770 = 0;
      };
      boolean_t x54379 = ite55770;
      if (!(x54379)) break; 
      
      x27477 += 1;
    };
    char* x39982 = x39974;
    numeric_int_t x39983 = x27477 - x39982;
    numeric_int_t x39984 = x39983+(1);
    char* x65189 = (char*)malloc(x39984 * sizeof(char));
    memset(x65189, 0, x39984 * sizeof(char));
    long x65190 = mallocSym_41491_64528;
    mallocSym_41491_64528 = (x65190+(((long){x39984})));
    char* x39987 = x39974;
    char* x39988 = strncpy(x65189, x39987, x39983);
    x27477 += 1;
    struct SUPPLIERRecord* x65197 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x65197, 0, 1 * sizeof(struct SUPPLIERRecord));
    long x65198 = mallocSym_42281_64513;
    mallocSym_42281_64513 = (x65198+(((long){1})));
    x65197->S_SUPPKEY = x39912; x65197->S_NAME = x65107; x65197->S_ADDRESS = x65131; x65197->S_NATIONKEY = x39949; x65197->S_PHONE = x65160; x65197->S_ACCTBAL = x39970; x65197->S_COMMENT = x65189;
    numeric_int_t x27491 = x27478;
    struct SUPPLIERRecord x41498 = *x65197;
    *(x65059 + x27491) = x41498;
    struct SUPPLIERRecord* x41500 = &(x65059[x27491]);
    x65197 = x41500;
    numeric_int_t x27493 = x27478;
    x27478 = (x27493+(1));
  };
  numeric_int_t x27498 = 0;
  for(; x27498 < 1 ; x27498 += 1) {
    
    struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x65735 = (struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1048576 * sizeof(struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x65735, 0, 1048576 * sizeof(struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    long x65736 = mallocSym_62480_64509;
    mallocSym_62480_64509 = (x65736+(((long){1048576})));
    /* VAR */ numeric_int_t x62481 = 0;
    struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x65741 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(6400000 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x65741, 0, 6400000 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    long x65742 = mallocSym_62482_64526;
    long x65743 = (long){6400000};
    mallocSym_62482_64526 = (x65742+(x65743));
    /* VAR */ numeric_int_t x62483 = 0;
    while(1) {
      
      numeric_int_t x38656 = x62483;
      if (!((x38656<(6400000)))) break; 
      
      numeric_int_t x38658 = x62483;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x65751 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x65751, 0, 1 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      long x65752 = mallocSym_42303_64542;
      mallocSym_42303_64542 = (x65752+(((long){1})));
      x65751->R_REGIONKEY = 0; x65751->R_NAME = ""; x65751->P_PARTKEY = 0; x65751->P_MFGR = ""; x65751->P_TYPE = ""; x65751->P_SIZE = 0; x65751->N_NATIONKEY = 0; x65751->N_NAME = ""; x65751->N_REGIONKEY = 0; x65751->S_SUPPKEY = 0; x65751->S_NAME = ""; x65751->S_ADDRESS = ""; x65751->S_NATIONKEY = 0; x65751->S_PHONE = ""; x65751->S_ACCTBAL = 0.0; x65751->S_COMMENT = ""; x65751->PS_PARTKEY = 0; x65751->PS_SUPPKEY = 0; x65751->PS_SUPPLYCOST = 0.0;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x41517 = *x65751;
      *(x65741 + x38658) = x41517;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x41519 = &(x65741[x38658]);
      x65751 = x41519;
      numeric_int_t x38661 = x62483;
      x62483 = (x38661+(1));
    };
    /* VAR */ numeric_int_t x62498 = 0;
    struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord** x65766 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord**)malloc(6400000 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*));
    memset(x65766, 0, 6400000 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*));
    long x65767 = mallocSym_62499_64525;
    mallocSym_62499_64525 = (x65767+(x65743));
    /* VAR */ numeric_int_t x62500 = 0;
    while(1) {
      
      numeric_int_t x38668 = x62500;
      if (!((x38668<(6400000)))) break; 
      
      numeric_int_t x38670 = x62500;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x65775 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(4 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x65775, 0, 4 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      long x65776 = mallocSym_41531_64514;
      mallocSym_41531_64514 = (x65776+(((long){4})));
      *(x65766 + x38670) = x65775;
      numeric_int_t x38673 = x62500;
      x62500 = (x38673+(1));
    };
    /* VAR */ numeric_int_t x62510 = 0;
    struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x65785 = (struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(6400000 * sizeof(struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x65785, 0, 6400000 * sizeof(struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    long x65786 = mallocSym_62511_64533;
    mallocSym_62511_64533 = (x65786+(x65743));
    /* VAR */ numeric_int_t x62512 = 0;
    while(1) {
      
      numeric_int_t x38680 = x62512;
      if (!((x38680<(6400000)))) break; 
      
      numeric_int_t x38682 = x62512;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x38683 = x65766[x38682];
      struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x65795 = (struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x65795, 0, 1 * sizeof(struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      long x65796 = mallocSym_42333_64511;
      mallocSym_42333_64511 = (x65796+(((long){1})));
      x65795->maxSize = 0; x65795->array = x38683;
      struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x41545 = *x65795;
      *(x65785 + x38682) = x41545;
      struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x41547 = &(x65785[x38682]);
      x65795 = x41547;
      numeric_int_t x38686 = x62512;
      x62512 = (x38686+(1));
    };
    /* VAR */ numeric_int_t x62528 = 0;
    struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x65810 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1600000 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x65810, 0, 1600000 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
    long x65811 = mallocSym_62529_64507;
    mallocSym_62529_64507 = (x65811+(((long){1600000})));
    /* VAR */ numeric_int_t x62530 = 0;
    while(1) {
      
      numeric_int_t x38693 = x62530;
      if (!((x38693<(1600000)))) break; 
      
      numeric_int_t x38695 = x62530;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x38696 = &(x65741[x38695]);
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x65821 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x65821, 0, 1 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
      long x65822 = mallocSym_42351_64521;
      mallocSym_42351_64521 = (x65822+(((long){1})));
      x65821->wnd = x38696;
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord x41561 = *x65821;
      *(x65810 + x38695) = x41561;
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x41563 = &(x65810[x38695]);
      x65821 = x41563;
      numeric_int_t x38699 = x62530;
      x62530 = (x38699+(1));
    };
    struct timeval x62546 = (struct timeval){0};
    /* VAR */ struct timeval x62547 = x62546;
    struct timeval x62548 = x62547;
    /* VAR */ struct timeval x62549 = x62546;
    struct timeval x62550 = x62549;
    /* VAR */ struct timeval x62551 = x62546;
    struct timeval x62552 = x62551;
    struct timeval* x62553 = &x62550;
    gettimeofday(x62553, NULL);
    /* VAR */ numeric_int_t x62555 = 0;
    numeric_int_t* x62636 = &(x62596);
    GTree* x62637 = g_tree_new(x62636);
    /* VAR */ boolean_t x62638 = 0;
    /* VAR */ numeric_int_t x62639 = 0;
    while(1) {
      
      numeric_int_t x62641 = x62555;
      if (!((x62641<(x39684)))) break; 
      
      numeric_int_t x30999 = x62555;
      struct PARTSUPPRecord* x27706 = &(x64760[x30999]);
      numeric_int_t x27708 = x27706->PS_SUPPKEY;
      struct SUPPLIERRecord* x37526 = &(x65059[(x27708-(1))]);
      if(((x37526->S_SUPPKEY)==(x27708))) {
        numeric_int_t x32897 = x37526->S_SUPPKEY;
        if((x32897==(x27708))) {
          numeric_int_t x28935 = x37526->S_NATIONKEY;
          numeric_int_t x28939 = x27706->PS_PARTKEY;
          struct NATIONRecord* x37542 = &(x64852[(x28935-(0))]);
          if(((x37542->N_NATIONKEY)==(x28935))) {
            numeric_int_t x32913 = x37542->N_NATIONKEY;
            if((x32913==(x28935))) {
              numeric_int_t x29150 = x37542->N_REGIONKEY;
              struct PARTRecord* x37552 = &(x64552[(x28939-(1))]);
              /* VAR */ boolean_t ite56451 = 0;
              if(((x37552->P_SIZE)==(43))) {
                char* x62678 = x37552->P_TYPE;
                numeric_int_t x62679 = strlen(x62678);
                numeric_int_t x62680 = strlen("TIN");
                numeric_int_t x62681 = x62679-(x62680);
                char* x62682 = pointer_add(x62678, x62681);
                numeric_int_t x62683 = strncmp(x62682, "TIN", x62681);
                ite56451 = (x62683==(0));
              } else {
                
                ite56451 = 0;
              };
              boolean_t x55003 = ite56451;
              if(x55003) {
                if(((x37552->P_PARTKEY)==(x28939))) {
                  numeric_int_t x32929 = x37552->P_PARTKEY;
                  if((x32929==(x28939))) {
                    struct REGIONRecord* x37569 = &(x64958[(x29150-(0))]);
                    boolean_t x50774 = strcmp((x37569->R_NAME), "AFRICA");
                    if((x50774==(0))) {
                      if(((x37569->R_REGIONKEY)==(x29150))) {
                        numeric_int_t x32943 = x37569->R_REGIONKEY;
                        if((x32943==(x29150))) {
                          numeric_int_t x38802 = x62481;
                          struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x38803 = &(x65741[x38802]);
                          x38803->R_REGIONKEY = x32943;
                          x38803->R_NAME = (x37569->R_NAME);
                          x38803->P_PARTKEY = x32929;
                          x38803->P_MFGR = (x37552->P_MFGR);
                          x38803->P_TYPE = (x37552->P_TYPE);
                          x38803->P_SIZE = (x37552->P_SIZE);
                          x38803->N_NATIONKEY = x32913;
                          x38803->N_NAME = (x37542->N_NAME);
                          x38803->N_REGIONKEY = x29150;
                          x38803->S_SUPPKEY = x32897;
                          x38803->S_NAME = (x37526->S_NAME);
                          x38803->S_ADDRESS = (x37526->S_ADDRESS);
                          x38803->S_NATIONKEY = x28935;
                          x38803->S_PHONE = (x37526->S_PHONE);
                          x38803->S_ACCTBAL = (x37526->S_ACCTBAL);
                          x38803->S_COMMENT = (x37526->S_COMMENT);
                          x38803->PS_PARTKEY = x28939;
                          x38803->PS_SUPPKEY = x27708;
                          x38803->PS_SUPPLYCOST = (x27706->PS_SUPPLYCOST);
                          numeric_int_t x38823 = x62481;
                          x62481 = (x38823+(1));
                          numeric_int_t x34014 = (x38803->P_PARTKEY)%(1048576);
                          struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x35158 = &(x65735[x34014]);
                          /* VAR */ struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* list35159 = x35158;
                          struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x35160 = list35159;
                          /* VAR */ boolean_t ite56518 = 0;
                          if((x35160==(NULL))) {
                            ite56518 = 1;
                          } else {
                            
                            struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x62745 = x35160->array;
                            /* VAR */ boolean_t x62747 = 0;
                            if((x62745==(NULL))) {
                              x62747 = 1;
                            } else {
                              
                              char* x62750 = x62745->R_NAME;
                              /* VAR */ boolean_t x62752 = 0;
                              if((x62750==(NULL))) {
                                x62752 = 1;
                              } else {
                                
                                boolean_t x62755 = strcmp(x62750, "");
                                boolean_t x62756 = !(x62755);
                                x62752 = x62756;
                              };
                              boolean_t x62759 = x62752;
                              x62747 = x62759;
                            };
                            boolean_t x62762 = x62747;
                            ite56518 = x62762;
                          };
                          boolean_t x55058 = ite56518;
                          if(x55058) {
                            numeric_int_t x38834 = x62498;
                            struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x38835 = x65766[x38834];
                            numeric_int_t x38836 = x62498;
                            x62498 = (x38836+(1));
                            numeric_int_t x38839 = x62510;
                            struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x38840 = &(x65785[x38839]);
                            x38840->maxSize = 0;
                            x38840->array = x38835;
                            numeric_int_t x38843 = x62510;
                            x62510 = (x38843+(1));
                            list35159 = x38840;
                            struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x35168 = list35159;
                            struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x41720 = *x35168;
                            *(x65735 + x34014) = x41720;
                            struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x41722 = &(x65735[x34014]);
                            list35159 = x41722;
                          };
                          struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x35170 = list35159;
                          struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x35171 = x35170->array;
                          numeric_int_t x35172 = x35170->maxSize;
                          struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x41727 = *x38803;
                          *(x35171 + x35172) = x41727;
                          struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x41729 = &(x35171[x35172]);
                          x38803 = x41729;
                          numeric_int_t x35174 = x35170->maxSize;
                          x35170->maxSize = (x35174+(1));
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
      numeric_int_t x31399 = x62555;
      x62555 = (x31399+(1));
    };
    numeric_int_t x52569 = 0;
    for(; x52569 < 1048576 ; x52569 += 1) {
      
      struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x52570 = &(x65735[x52569]);
      /* VAR */ boolean_t ite56612 = 0;
      if((x52570!=(NULL))) {
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x62863 = x52570->array;
        /* VAR */ boolean_t x62865 = 0;
        if((x62863!=(NULL))) {
          char* x62867 = x62863->R_NAME;
          /* VAR */ boolean_t x62869 = 0;
          if((x62867!=(NULL))) {
            boolean_t x62871 = strcmp(x62867, "");
            x62869 = x62871;
          } else {
            
            x62869 = 0;
          };
          boolean_t x62875 = x62869;
          x62865 = x62875;
        } else {
          
          x62865 = 0;
        };
        boolean_t x62879 = x62865;
        ite56612 = x62879;
      } else {
        
        ite56612 = 0;
      };
      boolean_t x55134 = ite56612;
      if(x55134) {
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x35493 = x52570->array;
        /* VAR */ struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* min35193 = ((struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*) { (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord**){x35493} });
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x35194 = min35193;
        /* VAR */ double minValue35196 = (x35194->PS_SUPPLYCOST);
        numeric_int_t x35507 = x52570->maxSize;
        numeric_int_t x52552 = 0;
        for(; x52552 < x35507 ; x52552 += 1) {
          
          struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x52553 = &(x35493[x52552]);
          double x52554 = x52553->PS_SUPPLYCOST;
          double x52555 = minValue35196;
          boolean_t x52556 = x52554<(x52555);
          if(x52556) {
            min35193 = x52553;
            minValue35196 = x52554;
          };
        };
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x35206 = min35193;
        numeric_int_t x38884 = x62528;
        struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x38885 = &(x65810[x38884]);
        x38885->wnd = x35206;
        numeric_int_t x38887 = x62528;
        x62528 = (x38887+(1));
        g_tree_insert(x62637, x38885, x38885);
      };
    };
    while(1) {
      
      boolean_t x31416 = x62638;
      boolean_t x28106 = !(x31416);
      /* VAR */ boolean_t ite56659 = 0;
      if(x28106) {
        numeric_int_t x62922 = g_tree_nnodes(x62637);
        ite56659 = (x62922!=(0));
      } else {
        
        ite56659 = 0;
      };
      boolean_t x55172 = ite56659;
      if (!(x55172)) break; 
      
      void* x44183 = NULL;
      void** x44191 = &(x44183);
      g_tree_foreach(x62637, x44190, x44191);
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x44193 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*){x44183};
      numeric_int_t x44194 = g_tree_remove(x62637, x44193);
      numeric_int_t x31424 = x62639;
      if((x31424>=(100))) {
        x62638 = 1;
      } else {
        
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x28118 = x44193->wnd;
        printf("%.2f|%s|%s|%d|%s|%s|%s|%s\n", (x28118->S_ACCTBAL), (x28118->S_NAME), (x28118->N_NAME), (x28118->P_PARTKEY), (x28118->P_MFGR), (x28118->S_ADDRESS), (x28118->S_PHONE), (x28118->S_COMMENT));
        numeric_int_t x31444 = x62639;
        x62639 = (x31444+(1));
      };
    };
    numeric_int_t x62957 = x62639;
    printf("(%d rows)\n", x62957);
    struct timeval* x62959 = &x62552;
    gettimeofday(x62959, NULL);
    struct timeval* x62961 = &x62548;
    struct timeval* x62962 = &x62552;
    struct timeval* x62963 = &x62550;
    long x62964 = timeval_subtract(x62961, x62962, x62963);
    printf("Generated code run in %ld milliseconds.\n", x62964);
  };
  /* VAR */ long mallocSum66255 = 0L;
  long x66256 = mallocSym_62529_64507;
  numeric_int_t x66257 = sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x66259 = x66256*(((long){x66257}));
  printf("65810 with type WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x66259);
  long x66261 = mallocSum66255;
  mallocSum66255 = (x66261+(x66259));
  long x66264 = mallocSym_41470_64508;
  numeric_int_t x66265 = sizeof(char);
  long x66267 = x66264*(((long){x66265}));
  printf("65160 with type Byte: %ld\n", x66267);
  long x66269 = mallocSum66255;
  mallocSum66255 = (x66269+(x66267));
  long x66272 = mallocSym_62480_64509;
  numeric_int_t x66273 = sizeof(struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x66275 = x66272*(((long){x66273}));
  printf("65735 with type Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x66275);
  long x66277 = mallocSum66255;
  mallocSum66255 = (x66277+(x66275));
  long x66280 = mallocSym_41553_64510;
  numeric_int_t x66281 = sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x66283 = x66280*(((long){x66281}));
  printf("65289 with type WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x66283);
  long x66285 = mallocSum66255;
  mallocSum66255 = (x66285+(x66283));
  long x66288 = mallocSym_42333_64511;
  numeric_int_t x66289 = sizeof(struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x66291 = x66288*(((long){x66289}));
  printf("65795 with type Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x66291);
  long x66293 = mallocSum66255;
  mallocSum66255 = (x66293+(x66291));
  long x66296 = mallocSym_41123_64512;
  numeric_int_t x66297 = sizeof(char);
  long x66299 = x66296*(((long){x66297}));
  printf("64673 with type Byte: %ld\n", x66299);
  long x66301 = mallocSum66255;
  mallocSum66255 = (x66301+(x66299));
  long x66304 = mallocSym_42281_64513;
  numeric_int_t x66305 = sizeof(struct SUPPLIERRecord);
  long x66307 = x66304*(((long){x66305}));
  printf("65197 with type SUPPLIERRecord: %ld\n", x66307);
  long x66309 = mallocSum66255;
  mallocSum66255 = (x66309+(x66307));
  long x66312 = mallocSym_41531_64514;
  numeric_int_t x66313 = sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x66315 = x66312*(((long){x66313}));
  printf("65775 with type REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x66315);
  long x66317 = mallocSum66255;
  mallocSum66255 = (x66317+(x66315));
  long x66320 = mallocSym_42095_64515;
  numeric_int_t x66321 = sizeof(struct NATIONRecord);
  long x66323 = x66320*(((long){x66321}));
  printf("64937 with type NATIONRecord: %ld\n", x66323);
  long x66325 = mallocSum66255;
  mallocSum66255 = (x66325+(x66323));
  long x66328 = mallocSym_42167_64516;
  numeric_int_t x66329 = sizeof(struct REGIONRecord);
  long x66331 = x66328*(((long){x66329}));
  printf("65038 with type REGIONRecord: %ld\n", x66331);
  long x66333 = mallocSum66255;
  mallocSum66255 = (x66333+(x66331));
  long x66336 = mallocSym_41947_64517;
  numeric_int_t x66337 = sizeof(struct PARTRecord);
  long x66339 = x66336*(((long){x66337}));
  printf("64739 with type PARTRecord: %ld\n", x66339);
  long x66341 = mallocSum66255;
  mallocSum66255 = (x66341+(x66339));
  long x66344 = mallocSym_41363_64518;
  numeric_int_t x66345 = sizeof(char);
  long x66347 = x66344*(((long){x66345}));
  printf("65006 with type Byte: %ld\n", x66347);
  long x66349 = mallocSum66255;
  mallocSum66255 = (x66349+(x66347));
  long x66352 = mallocSym_41185_64519;
  numeric_int_t x66353 = sizeof(struct PARTSUPPRecord);
  long x66355 = x66352*(((long){x66353}));
  printf("64760 with type PARTSUPPRecord: %ld\n", x66355);
  long x66357 = mallocSum66255;
  mallocSum66255 = (x66357+(x66355));
  long x66360 = mallocSym_41379_64520;
  numeric_int_t x66361 = sizeof(char);
  long x66363 = x66360*(((long){x66361}));
  printf("65030 with type Byte: %ld\n", x66363);
  long x66365 = mallocSum66255;
  mallocSum66255 = (x66365+(x66363));
  long x66368 = mallocSym_42351_64521;
  numeric_int_t x66369 = sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x66371 = x66368*(((long){x66369}));
  printf("65821 with type WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x66371);
  long x66373 = mallocSum66255;
  mallocSum66255 = (x66373+(x66371));
  long x66376 = mallocSym_41399_64522;
  numeric_int_t x66377 = sizeof(struct SUPPLIERRecord);
  long x66379 = x66376*(((long){x66377}));
  printf("65059 with type SUPPLIERRecord: %ld\n", x66379);
  long x66381 = mallocSum66255;
  mallocSum66255 = (x66381+(x66379));
  long x66384 = mallocSym_41433_64523;
  numeric_int_t x66385 = sizeof(char);
  long x66387 = x66384*(((long){x66385}));
  printf("65107 with type Byte: %ld\n", x66387);
  long x66389 = mallocSum66255;
  mallocSum66255 = (x66389+(x66387));
  long x66392 = mallocSym_42018_64524;
  numeric_int_t x66393 = sizeof(struct PARTSUPPRecord);
  long x66395 = x66392*(((long){x66393}));
  printf("64831 with type PARTSUPPRecord: %ld\n", x66395);
  long x66397 = mallocSum66255;
  mallocSum66255 = (x66397+(x66395));
  long x66400 = mallocSym_62499_64525;
  numeric_int_t x66401 = sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*);
  long x66403 = x66400*(((long){x66401}));
  printf("65766 with type Pointer[REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord]: %ld\n", x66403);
  long x66405 = mallocSum66255;
  mallocSum66255 = (x66405+(x66403));
  long x66408 = mallocSym_62482_64526;
  numeric_int_t x66409 = sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x66411 = x66408*(((long){x66409}));
  printf("65741 with type REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x66411);
  long x66413 = mallocSum66255;
  mallocSum66255 = (x66413+(x66411));
  long x66416 = mallocSym_41234_64527;
  numeric_int_t x66417 = sizeof(char);
  long x66419 = x66416*(((long){x66417}));
  printf("64823 with type Byte: %ld\n", x66419);
  long x66421 = mallocSum66255;
  mallocSum66255 = (x66421+(x66419));
  long x66424 = mallocSym_41491_64528;
  numeric_int_t x66425 = sizeof(char);
  long x66427 = x66424*(((long){x66425}));
  printf("65189 with type Byte: %ld\n", x66427);
  long x66429 = mallocSum66255;
  mallocSum66255 = (x66429+(x66427));
  long x66432 = mallocSym_41329_64529;
  numeric_int_t x66433 = sizeof(struct REGIONRecord);
  long x66435 = x66432*(((long){x66433}));
  printf("64958 with type REGIONRecord: %ld\n", x66435);
  long x66437 = mallocSum66255;
  mallocSum66255 = (x66437+(x66435));
  long x66440 = mallocSym_41508_64530;
  numeric_int_t x66441 = sizeof(struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x66443 = x66440*(((long){x66441}));
  printf("65214 with type Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x66443);
  long x66445 = mallocSum66255;
  mallocSum66255 = (x66445+(x66443));
  long x66448 = mallocSym_41449_64531;
  numeric_int_t x66449 = sizeof(char);
  long x66451 = x66448*(((long){x66449}));
  printf("65131 with type Byte: %ld\n", x66451);
  long x66453 = mallocSum66255;
  mallocSum66255 = (x66453+(x66451));
  long x66456 = mallocSym_41165_64532;
  numeric_int_t x66457 = sizeof(char);
  long x66459 = x66456*(((long){x66457}));
  printf("64731 with type Byte: %ld\n", x66459);
  long x66461 = mallocSum66255;
  mallocSum66255 = (x66461+(x66459));
  long x66464 = mallocSym_62511_64533;
  numeric_int_t x66465 = sizeof(struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x66467 = x66464*(((long){x66465}));
  printf("65785 with type Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x66467);
  long x66469 = mallocSum66255;
  mallocSum66255 = (x66469+(x66467));
  long x66472 = mallocSym_41091_64534;
  numeric_int_t x66473 = sizeof(char);
  long x66475 = x66472*(((long){x66473}));
  printf("64625 with type Byte: %ld\n", x66475);
  long x66477 = mallocSum66255;
  mallocSum66255 = (x66477+(x66475));
  long x66480 = mallocSym_41040_64535;
  numeric_int_t x66481 = sizeof(struct PARTRecord);
  long x66483 = x66480*(((long){x66481}));
  printf("64552 with type PARTRecord: %ld\n", x66483);
  long x66485 = mallocSum66255;
  mallocSum66255 = (x66485+(x66483));
  long x66488 = mallocSym_41537_64536;
  numeric_int_t x66489 = sizeof(struct Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x66491 = x66488*(((long){x66489}));
  printf("65264 with type Set_REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x66491);
  long x66493 = mallocSum66255;
  mallocSum66255 = (x66493+(x66491));
  long x66496 = mallocSym_41525_64537;
  numeric_int_t x66497 = sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*);
  long x66499 = x66496*(((long){x66497}));
  printf("65245 with type Pointer[REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord]: %ld\n", x66499);
  long x66501 = mallocSum66255;
  mallocSum66255 = (x66501+(x66499));
  long x66504 = mallocSym_41510_64538;
  numeric_int_t x66505 = sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x66507 = x66504*(((long){x66505}));
  printf("65220 with type REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x66507);
  long x66509 = mallocSum66255;
  mallocSum66255 = (x66509+(x66507));
  long x66512 = mallocSym_41288_64539;
  numeric_int_t x66513 = sizeof(char);
  long x66515 = x66512*(((long){x66513}));
  printf("64900 with type Byte: %ld\n", x66515);
  long x66517 = mallocSum66255;
  mallocSum66255 = (x66517+(x66515));
  long x66520 = mallocSym_41144_64540;
  numeric_int_t x66521 = sizeof(char);
  long x66523 = x66520*(((long){x66521}));
  printf("64702 with type Byte: %ld\n", x66523);
  long x66525 = mallocSum66255;
  mallocSum66255 = (x66525+(x66523));
  long x66528 = mallocSym_41107_64541;
  numeric_int_t x66529 = sizeof(char);
  long x66531 = x66528*(((long){x66529}));
  printf("64649 with type Byte: %ld\n", x66531);
  long x66533 = mallocSum66255;
  mallocSum66255 = (x66533+(x66531));
  long x66536 = mallocSym_42303_64542;
  numeric_int_t x66537 = sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x66539 = x66536*(((long){x66537}));
  printf("65751 with type REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x66539);
  long x66541 = mallocSum66255;
  mallocSum66255 = (x66541+(x66539));
  long x66544 = mallocSym_41075_64543;
  numeric_int_t x66545 = sizeof(char);
  long x66547 = x66544*(((long){x66545}));
  printf("64601 with type Byte: %ld\n", x66547);
  long x66549 = mallocSum66255;
  mallocSum66255 = (x66549+(x66547));
  long x66552 = mallocSym_41254_64544;
  numeric_int_t x66553 = sizeof(struct NATIONRecord);
  long x66555 = x66552*(((long){x66553}));
  printf("64852 with type NATIONRecord: %ld\n", x66555);
  long x66557 = mallocSum66255;
  mallocSum66255 = (x66557+(x66555));
  long x66560 = mallocSym_41309_64545;
  numeric_int_t x66561 = sizeof(char);
  long x66563 = x66560*(((long){x66561}));
  printf("64929 with type Byte: %ld\n", x66563);
  long x66565 = mallocSum66255;
  mallocSum66255 = (x66565+(x66563));
  long x66568 = mallocSum66255;
  printf("total: %ld\n", x66568);
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x62596(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x27581, struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x27582) {
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x27583 = x27581->wnd;
  double x27584 = x27583->S_ACCTBAL;
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x27585 = x27582->wnd;
  double x27586 = x27585->S_ACCTBAL;
  /* VAR */ numeric_int_t ite54932 = 0;
  if((x27584<(x27586))) {
    ite54932 = 1;
  } else {
    
    /* VAR */ numeric_int_t ite54936 = 0;
    if((x27584>(x27586))) {
      ite54936 = -1;
    } else {
      
      numeric_int_t x54940 = strcmp((x27583->N_NAME), (x27585->N_NAME));
      /* VAR */ numeric_int_t x54941 = x54940;
      numeric_int_t x54942 = x54941;
      if((x54942==(0))) {
        numeric_int_t x50702 = strcmp((x27583->S_NAME), (x27585->S_NAME));
        x54941 = x50702;
        numeric_int_t x27599 = x54941;
        if((x27599==(0))) {
          x54941 = ((x27583->P_PARTKEY)-((x27585->P_PARTKEY)));
        };
      };
      numeric_int_t x54956 = x54941;
      ite54936 = x54956;
    };
    numeric_int_t x54935 = ite54936;
    ite54932 = x54935;
  };
  numeric_int_t x27609 = ite54932;
  return x27609; 
}

numeric_int_t x44190(void* x44184, void* x44185, void* x44186) {
  pointer_assign(((struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord**){x44186}), ((struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*){x44185}));
  return 1; 
}
