#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct LINEITEMRecord_PARTRecord;
  struct PARTRecord;
  
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
  
  

/* GLOBAL VARS */

struct timeval x10023;
int main(int argc, char** argv) {
  FILE* x10555 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x10556 = 0;
  int x10557 = x10556;
  int* x10558 = &x10557;
  int x10559 = fscanf(x10555, "%d", x10558);
  pclose(x10555);
  struct LINEITEMRecord* x11725 = (struct LINEITEMRecord*)malloc(x10557 * sizeof(struct LINEITEMRecord));
  memset(x11725, 0, x10557 * sizeof(struct LINEITEMRecord));
  int x10563 = O_RDONLY;
  int x10564 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x10563);
  struct stat x10565 = (struct stat){0};
  /* VAR */ struct stat x10566 = x10565;
  struct stat x10567 = x10566;
  struct stat* x10568 = &x10567;
  int x10569 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x10568);
  size_t x10570 = x10568->st_size;
  int x10571 = PROT_READ;
  int x10572 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x10570, x10571, x10572, x10564, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x10557);
    /* VAR */ int ite21986 = 0;
    if(x6) {
      char x27019 = *x3;
      int x27020 = x27019!=('\0');
      ite21986 = x27020;
    } else {
      
      ite21986 = 0;
    };
    int x20943 = ite21986;
    if (!(x20943)) break; 
    
    /* VAR */ int x10580 = 0;
    int x10581 = x10580;
    int* x10582 = &x10581;
    char* x10583 = strntoi_unchecked(x3, x10582);
    x3 = x10583;
    /* VAR */ int x10585 = 0;
    int x10586 = x10585;
    int* x10587 = &x10586;
    char* x10588 = strntoi_unchecked(x3, x10587);
    x3 = x10588;
    /* VAR */ int x10590 = 0;
    int x10591 = x10590;
    int* x10592 = &x10591;
    char* x10593 = strntoi_unchecked(x3, x10592);
    x3 = x10593;
    /* VAR */ int x10595 = 0;
    int x10596 = x10595;
    int* x10597 = &x10596;
    char* x10598 = strntoi_unchecked(x3, x10597);
    x3 = x10598;
    /* VAR */ double x10600 = 0.0;
    double x10601 = x10600;
    double* x10602 = &x10601;
    char* x10603 = strntod_unchecked(x3, x10602);
    x3 = x10603;
    /* VAR */ double x10605 = 0.0;
    double x10606 = x10605;
    double* x10607 = &x10606;
    char* x10608 = strntod_unchecked(x3, x10607);
    x3 = x10608;
    /* VAR */ double x10610 = 0.0;
    double x10611 = x10610;
    double* x10612 = &x10611;
    char* x10613 = strntod_unchecked(x3, x10612);
    x3 = x10613;
    /* VAR */ double x10615 = 0.0;
    double x10616 = x10615;
    double* x10617 = &x10616;
    char* x10618 = strntod_unchecked(x3, x10617);
    x3 = x10618;
    char x10620 = *x3;
    /* VAR */ char x10621 = x10620;
    x3 += 1;
    x3 += 1;
    char x10624 = x10621;
    char x10625 = *x3;
    /* VAR */ char x10626 = x10625;
    x3 += 1;
    x3 += 1;
    char x10629 = x10626;
    /* VAR */ int x10630 = 0;
    int x10631 = x10630;
    int* x10632 = &x10631;
    char* x10633 = strntoi_unchecked(x3, x10632);
    x3 = x10633;
    /* VAR */ int x10635 = 0;
    int x10636 = x10635;
    int* x10637 = &x10636;
    char* x10638 = strntoi_unchecked(x3, x10637);
    x3 = x10638;
    /* VAR */ int x10640 = 0;
    int x10641 = x10640;
    int* x10642 = &x10641;
    char* x10643 = strntoi_unchecked(x3, x10642);
    x3 = x10643;
    int x10645 = x10631*(10000);
    int x10646 = x10636*(100);
    int x10647 = x10645+(x10646);
    int x10648 = x10647+(x10641);
    /* VAR */ int x10649 = 0;
    int x10650 = x10649;
    int* x10651 = &x10650;
    char* x10652 = strntoi_unchecked(x3, x10651);
    x3 = x10652;
    /* VAR */ int x10654 = 0;
    int x10655 = x10654;
    int* x10656 = &x10655;
    char* x10657 = strntoi_unchecked(x3, x10656);
    x3 = x10657;
    /* VAR */ int x10659 = 0;
    int x10660 = x10659;
    int* x10661 = &x10660;
    char* x10662 = strntoi_unchecked(x3, x10661);
    x3 = x10662;
    int x10664 = x10650*(10000);
    int x10665 = x10655*(100);
    int x10666 = x10664+(x10665);
    int x10667 = x10666+(x10660);
    /* VAR */ int x10668 = 0;
    int x10669 = x10668;
    int* x10670 = &x10669;
    char* x10671 = strntoi_unchecked(x3, x10670);
    x3 = x10671;
    /* VAR */ int x10673 = 0;
    int x10674 = x10673;
    int* x10675 = &x10674;
    char* x10676 = strntoi_unchecked(x3, x10675);
    x3 = x10676;
    /* VAR */ int x10678 = 0;
    int x10679 = x10678;
    int* x10680 = &x10679;
    char* x10681 = strntoi_unchecked(x3, x10680);
    x3 = x10681;
    int x10683 = x10669*(10000);
    int x10684 = x10674*(100);
    int x10685 = x10683+(x10684);
    int x10686 = x10685+(x10679);
    char* x11851 = (char*)malloc(26 * sizeof(char));
    memset(x11851, 0, 26 * sizeof(char));
    /* VAR */ char* x10688 = x3;
    while(1) {
      
      char x10689 = *x3;
      int x10690 = x10689!=('|');
      /* VAR */ int ite22107 = 0;
      if(x10690) {
        char x27139 = *x3;
        int x27140 = x27139!=('\n');
        ite22107 = x27140;
      } else {
        
        ite22107 = 0;
      };
      int x21057 = ite22107;
      if (!(x21057)) break; 
      
      x3 += 1;
    };
    char* x10696 = x10688;
    int x10697 = x3 - x10696;
    char* x10698 = x10688;
    char* x10699 = strncpy(x11851, x10698, x10697);
    x3 += 1;
    char* x11869 = (char*)malloc(11 * sizeof(char));
    memset(x11869, 0, 11 * sizeof(char));
    /* VAR */ char* x10707 = x3;
    while(1) {
      
      char x10708 = *x3;
      int x10709 = x10708!=('|');
      /* VAR */ int ite22130 = 0;
      if(x10709) {
        char x27161 = *x3;
        int x27162 = x27161!=('\n');
        ite22130 = x27162;
      } else {
        
        ite22130 = 0;
      };
      int x21073 = ite22130;
      if (!(x21073)) break; 
      
      x3 += 1;
    };
    char* x10715 = x10707;
    int x10716 = x3 - x10715;
    char* x10717 = x10707;
    char* x10718 = strncpy(x11869, x10717, x10716);
    x3 += 1;
    char* x11887 = (char*)malloc(45 * sizeof(char));
    memset(x11887, 0, 45 * sizeof(char));
    /* VAR */ char* x10726 = x3;
    while(1) {
      
      char x10727 = *x3;
      int x10728 = x10727!=('|');
      /* VAR */ int ite22153 = 0;
      if(x10728) {
        char x27183 = *x3;
        int x27184 = x27183!=('\n');
        ite22153 = x27184;
      } else {
        
        ite22153 = 0;
      };
      int x21089 = ite22153;
      if (!(x21089)) break; 
      
      x3 += 1;
    };
    char* x10734 = x10726;
    int x10735 = x3 - x10734;
    char* x10736 = x10726;
    char* x10737 = strncpy(x11887, x10736, x10735);
    x3 += 1;
    struct LINEITEMRecord* x12520 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x12520, 0, 1 * sizeof(struct LINEITEMRecord));
    x12520->L_ORDERKEY = x10581; x12520->L_PARTKEY = x10586; x12520->L_SUPPKEY = x10591; x12520->L_LINENUMBER = x10596; x12520->L_QUANTITY = x10601; x12520->L_EXTENDEDPRICE = x10606; x12520->L_DISCOUNT = x10611; x12520->L_TAX = x10616; x12520->L_RETURNFLAG = x10624; x12520->L_LINESTATUS = x10629; x12520->L_SHIPDATE = x10648; x12520->L_COMMITDATE = x10667; x12520->L_RECEIPTDATE = x10686; x12520->L_SHIPINSTRUCT = x11851; x12520->L_SHIPMODE = x11869; x12520->L_COMMENT = x11887; x12520->next = NULL;
    int x47 = x4;
    int x15629 = x12520==(NULL);
    /* VAR */ int ite22176 = 0;
    if(x15629) {
      ite22176 = 1;
    } else {
      
      char* x27206 = x12520->L_SHIPINSTRUCT;
      int x27207 = x27206==(NULL);
      /* VAR */ int x27208 = 0;
      if(x27207) {
        x27208 = 1;
      } else {
        
        int x27211 = strcmp(x27206, "");
        int x27212 = !(x27211);
        x27208 = x27212;
      };
      int x27215 = x27208;
      ite22176 = x27215;
    };
    int x21105 = ite22176;
    if(x21105) {
      *(x11725 + x47) = (const struct LINEITEMRecord){0};
    } else {
      
      struct LINEITEMRecord x11909 = *x12520;
      *(x11725 + x47) = x11909;
      struct LINEITEMRecord* x11911 = &(x11725[x47]);
      x12520 = x11911;
    };
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x10750 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x10751 = 0;
  int x10752 = x10751;
  int* x10753 = &x10752;
  int x10754 = fscanf(x10750, "%d", x10753);
  pclose(x10750);
  struct PARTRecord* x11923 = (struct PARTRecord*)malloc(x10752 * sizeof(struct PARTRecord));
  memset(x11923, 0, x10752 * sizeof(struct PARTRecord));
  int x10758 = O_RDONLY;
  int x10759 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x10758);
  /* VAR */ struct stat x10760 = x10565;
  struct stat x10761 = x10760;
  struct stat* x10762 = &x10761;
  int x10763 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x10762);
  size_t x10764 = x10762->st_size;
  int x10765 = PROT_READ;
  int x10766 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x10764, x10765, x10766, x10759, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x10752);
    /* VAR */ int ite22217 = 0;
    if(x58) {
      char x27251 = *x55;
      int x27252 = x27251!=('\0');
      ite22217 = x27252;
    } else {
      
      ite22217 = 0;
    };
    int x21137 = ite22217;
    if (!(x21137)) break; 
    
    /* VAR */ int x10774 = 0;
    int x10775 = x10774;
    int* x10776 = &x10775;
    char* x10777 = strntoi_unchecked(x55, x10776);
    x55 = x10777;
    char* x11946 = (char*)malloc(56 * sizeof(char));
    memset(x11946, 0, 56 * sizeof(char));
    /* VAR */ char* x10780 = x55;
    while(1) {
      
      char x10781 = *x55;
      int x10782 = x10781!=('|');
      /* VAR */ int ite22236 = 0;
      if(x10782) {
        char x27269 = *x55;
        int x27270 = x27269!=('\n');
        ite22236 = x27270;
      } else {
        
        ite22236 = 0;
      };
      int x21149 = ite22236;
      if (!(x21149)) break; 
      
      x55 += 1;
    };
    char* x10788 = x10780;
    int x10789 = x55 - x10788;
    char* x10790 = x10780;
    char* x10791 = strncpy(x11946, x10790, x10789);
    x55 += 1;
    char* x11964 = (char*)malloc(26 * sizeof(char));
    memset(x11964, 0, 26 * sizeof(char));
    /* VAR */ char* x10799 = x55;
    while(1) {
      
      char x10800 = *x55;
      int x10801 = x10800!=('|');
      /* VAR */ int ite22259 = 0;
      if(x10801) {
        char x27291 = *x55;
        int x27292 = x27291!=('\n');
        ite22259 = x27292;
      } else {
        
        ite22259 = 0;
      };
      int x21165 = ite22259;
      if (!(x21165)) break; 
      
      x55 += 1;
    };
    char* x10807 = x10799;
    int x10808 = x55 - x10807;
    char* x10809 = x10799;
    char* x10810 = strncpy(x11964, x10809, x10808);
    x55 += 1;
    char* x11982 = (char*)malloc(11 * sizeof(char));
    memset(x11982, 0, 11 * sizeof(char));
    /* VAR */ char* x10818 = x55;
    while(1) {
      
      char x10819 = *x55;
      int x10820 = x10819!=('|');
      /* VAR */ int ite22282 = 0;
      if(x10820) {
        char x27313 = *x55;
        int x27314 = x27313!=('\n');
        ite22282 = x27314;
      } else {
        
        ite22282 = 0;
      };
      int x21181 = ite22282;
      if (!(x21181)) break; 
      
      x55 += 1;
    };
    char* x10826 = x10818;
    int x10827 = x55 - x10826;
    char* x10828 = x10818;
    char* x10829 = strncpy(x11982, x10828, x10827);
    x55 += 1;
    char* x12000 = (char*)malloc(26 * sizeof(char));
    memset(x12000, 0, 26 * sizeof(char));
    /* VAR */ char* x10837 = x55;
    while(1) {
      
      char x10838 = *x55;
      int x10839 = x10838!=('|');
      /* VAR */ int ite22305 = 0;
      if(x10839) {
        char x27335 = *x55;
        int x27336 = x27335!=('\n');
        ite22305 = x27336;
      } else {
        
        ite22305 = 0;
      };
      int x21197 = ite22305;
      if (!(x21197)) break; 
      
      x55 += 1;
    };
    char* x10845 = x10837;
    int x10846 = x55 - x10845;
    char* x10847 = x10837;
    char* x10848 = strncpy(x12000, x10847, x10846);
    x55 += 1;
    /* VAR */ int x10855 = 0;
    int x10856 = x10855;
    int* x10857 = &x10856;
    char* x10858 = strntoi_unchecked(x55, x10857);
    x55 = x10858;
    char* x12023 = (char*)malloc(11 * sizeof(char));
    memset(x12023, 0, 11 * sizeof(char));
    /* VAR */ char* x10861 = x55;
    while(1) {
      
      char x10862 = *x55;
      int x10863 = x10862!=('|');
      /* VAR */ int ite22333 = 0;
      if(x10863) {
        char x27362 = *x55;
        int x27363 = x27362!=('\n');
        ite22333 = x27363;
      } else {
        
        ite22333 = 0;
      };
      int x21218 = ite22333;
      if (!(x21218)) break; 
      
      x55 += 1;
    };
    char* x10869 = x10861;
    int x10870 = x55 - x10869;
    char* x10871 = x10861;
    char* x10872 = strncpy(x12023, x10871, x10870);
    x55 += 1;
    /* VAR */ double x10879 = 0.0;
    double x10880 = x10879;
    double* x10881 = &x10880;
    char* x10882 = strntod_unchecked(x55, x10881);
    x55 = x10882;
    char* x12046 = (char*)malloc(24 * sizeof(char));
    memset(x12046, 0, 24 * sizeof(char));
    /* VAR */ char* x10885 = x55;
    while(1) {
      
      char x10886 = *x55;
      int x10887 = x10886!=('|');
      /* VAR */ int ite22361 = 0;
      if(x10887) {
        char x27389 = *x55;
        int x27390 = x27389!=('\n');
        ite22361 = x27390;
      } else {
        
        ite22361 = 0;
      };
      int x21239 = ite22361;
      if (!(x21239)) break; 
      
      x55 += 1;
    };
    char* x10893 = x10885;
    int x10894 = x55 - x10893;
    char* x10895 = x10885;
    char* x10896 = strncpy(x12046, x10895, x10894);
    x55 += 1;
    struct PARTRecord* x12681 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x12681, 0, 1 * sizeof(struct PARTRecord));
    x12681->P_PARTKEY = x10775; x12681->P_NAME = x11946; x12681->P_MFGR = x11964; x12681->P_BRAND = x11982; x12681->P_TYPE = x12000; x12681->P_SIZE = x10856; x12681->P_CONTAINER = x12023; x12681->P_RETAILPRICE = x10880; x12681->P_COMMENT = x12046;
    int x111 = x56;
    int x15793 = x12681==(NULL);
    /* VAR */ int ite22384 = 0;
    if(x15793) {
      ite22384 = 1;
    } else {
      
      char* x27412 = x12681->P_NAME;
      int x27413 = x27412==(NULL);
      /* VAR */ int x27414 = 0;
      if(x27413) {
        x27414 = 1;
      } else {
        
        int x27417 = strcmp(x27412, "");
        int x27418 = !(x27417);
        x27414 = x27418;
      };
      int x27421 = x27414;
      ite22384 = x27421;
    };
    int x21255 = ite22384;
    if(x21255) {
      *(x11923 + x111) = (const struct PARTRecord){0};
    } else {
      
      struct PARTRecord x12068 = *x12681;
      *(x11923 + x111) = x12068;
      struct PARTRecord* x12070 = &(x11923[x111]);
      x12681 = x12070;
    };
    int x113 = x56;
    int x114 = x113+(1);
    x56 = x114;
  };
  int x118 = 0;
  for(; x118 < 1 ; x118 += 1) {
    
    double* x28049 = (double*)malloc(1 * sizeof(double));
    memset(x28049, 0, 1 * sizeof(double));
    struct LINEITEMRecord_PARTRecord* x28050 = (struct LINEITEMRecord_PARTRecord*)malloc(1048576 * sizeof(struct LINEITEMRecord_PARTRecord));
    memset(x28050, 0, 1048576 * sizeof(struct LINEITEMRecord_PARTRecord));
    struct LINEITEMRecord* x28051 = (struct LINEITEMRecord*)malloc(1048576 * sizeof(struct LINEITEMRecord));
    memset(x28051, 0, 1048576 * sizeof(struct LINEITEMRecord));
    /* VAR */ int x28052 = 0;
    struct LINEITEMRecord_PARTRecord* x28053 = (struct LINEITEMRecord_PARTRecord*)malloc(48000000 * sizeof(struct LINEITEMRecord_PARTRecord));
    memset(x28053, 0, 48000000 * sizeof(struct LINEITEMRecord_PARTRecord));
    /* VAR */ int x28054 = 0;
    while(1) {
      
      int x9817 = x28054;
      int x9818 = x9817<(48000000);
      if (!(x9818)) break; 
      
      int x9819 = x28054;
      struct LINEITEMRecord_PARTRecord* x12708 = (struct LINEITEMRecord_PARTRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord));
      memset(x12708, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord));
      x12708->L_ORDERKEY = 0; x12708->L_PARTKEY = 0; x12708->L_SUPPKEY = 0; x12708->L_LINENUMBER = 0; x12708->L_QUANTITY = 0.0; x12708->L_EXTENDEDPRICE = 0.0; x12708->L_DISCOUNT = 0.0; x12708->L_TAX = 0.0; x12708->L_RETURNFLAG = '\0'; x12708->L_LINESTATUS = '\0'; x12708->L_SHIPDATE = 0; x12708->L_COMMITDATE = 0; x12708->L_RECEIPTDATE = 0; x12708->L_SHIPINSTRUCT = ""; x12708->L_SHIPMODE = ""; x12708->L_COMMENT = ""; x12708->P_PARTKEY = 0; x12708->P_NAME = ""; x12708->P_MFGR = ""; x12708->P_BRAND = ""; x12708->P_TYPE = ""; x12708->P_SIZE = 0; x12708->P_CONTAINER = ""; x12708->P_RETAILPRICE = 0.0; x12708->P_COMMENT = ""; x12708->next = NULL;
      int x15822 = x12708==(NULL);
      /* VAR */ int ite22952 = 0;
      if(x15822) {
        ite22952 = 1;
      } else {
        
        char* x28066 = x12708->L_SHIPINSTRUCT;
        int x28067 = x28066==(NULL);
        /* VAR */ int x28068 = 0;
        if(x28067) {
          x28068 = 1;
        } else {
          
          int x28071 = strcmp(x28066, "");
          int x28072 = !(x28071);
          x28068 = x28072;
        };
        int x28075 = x28068;
        ite22952 = x28075;
      };
      int x21631 = ite22952;
      if(x21631) {
        *(x28053 + x9819) = (const struct LINEITEMRecord_PARTRecord){0};
      } else {
        
        struct LINEITEMRecord_PARTRecord x12092 = *x12708;
        *(x28053 + x9819) = x12092;
        struct LINEITEMRecord_PARTRecord* x12094 = &(x28053[x9819]);
        x12708 = x12094;
      };
      int x9822 = x28054;
      int x9823 = x9822+(1);
      x28054 = x9823;
    };
    /* VAR */ struct timeval x28088 = x10023;
    struct timeval x28089 = x28088;
    /* VAR */ struct timeval x28090 = x10023;
    struct timeval x28091 = x28090;
    /* VAR */ struct timeval x28092 = x10023;
    struct timeval x28093 = x28092;
    struct timeval* x28094 = &x28091;
    gettimeofday(x28094, NULL);
    /* VAR */ int x28096 = 0;
    /* VAR */ int x28097 = 0;
    while(1) {
      
      int x28099 = x28096;
      int x28100 = x28099<(x10557);
      if (!(x28100)) break; 
      
      int x1321 = x28096;
      struct LINEITEMRecord* x192 = &(x11725[x1321]);
      int x194 = x192->L_PARTKEY;
      int x2844 = x194%(1048576);
      struct LINEITEMRecord* x4044 = &(x28051[x2844]);
      /* VAR */ struct LINEITEMRecord* list4045 = x4044;
      struct LINEITEMRecord* x4046 = list4045;
      int x15856 = x4046==(NULL);
      /* VAR */ int ite22994 = 0;
      if(x15856) {
        ite22994 = 1;
      } else {
        
        char* x28112 = x4046->L_SHIPINSTRUCT;
        int x28113 = x28112==(NULL);
        /* VAR */ int x28114 = 0;
        if(x28113) {
          x28114 = 1;
        } else {
          
          int x28117 = strcmp(x28112, "");
          int x28118 = !(x28117);
          x28114 = x28118;
        };
        int x28121 = x28114;
        ite22994 = x28121;
      };
      int x21662 = ite22994;
      if(x21662) {
        list4045 = NULL;
        struct LINEITEMRecord* x4053 = list4045;
        int x15863 = x4053==(NULL);
        /* VAR */ int ite23009 = 0;
        if(x15863) {
          ite23009 = 1;
        } else {
          
          char* x28132 = x4053->L_SHIPINSTRUCT;
          int x28133 = x28132==(NULL);
          /* VAR */ int x28134 = 0;
          if(x28133) {
            x28134 = 1;
          } else {
            
            int x28137 = strcmp(x28132, "");
            int x28138 = !(x28137);
            x28134 = x28138;
          };
          int x28141 = x28134;
          ite23009 = x28141;
        };
        int x21668 = ite23009;
        if(x21668) {
          *(x28051 + x2844) = (const struct LINEITEMRecord){0};
        } else {
          
          struct LINEITEMRecord x12128 = *x4053;
          *(x28051 + x2844) = x12128;
          struct LINEITEMRecord* x12130 = &(x28051[x2844]);
          list4045 = x12130;
        };
      };
      int x15873 = x4044==(NULL);
      /* VAR */ int ite23027 = 0;
      if(x15873) {
        ite23027 = 1;
      } else {
        
        char* x28155 = x4044->L_SHIPINSTRUCT;
        int x28156 = x28155==(NULL);
        /* VAR */ int x28157 = 0;
        if(x28156) {
          x28157 = 1;
        } else {
          
          int x28160 = strcmp(x28155, "");
          int x28161 = !(x28160);
          x28157 = x28161;
        };
        int x28164 = x28157;
        ite23027 = x28164;
      };
      int x21677 = ite23027;
      if(x21677) {
        x192->next = NULL;
        int x15879 = x192==(NULL);
        /* VAR */ int ite23041 = 0;
        if(x15879) {
          ite23041 = 1;
        } else {
          
          char* x28174 = x192->L_SHIPINSTRUCT;
          int x28175 = x28174==(NULL);
          /* VAR */ int x28176 = 0;
          if(x28175) {
            x28176 = 1;
          } else {
            
            int x28179 = strcmp(x28174, "");
            int x28180 = !(x28179);
            x28176 = x28180;
          };
          int x28183 = x28176;
          ite23041 = x28183;
        };
        int x21682 = ite23041;
        if(x21682) {
          *(x28051 + x2844) = (const struct LINEITEMRecord){0};
        } else {
          
          struct LINEITEMRecord x12138 = *x192;
          *(x28051 + x2844) = x12138;
          struct LINEITEMRecord* x12140 = &(x28051[x2844]);
          x192 = x12140;
        };
        list4045 = x192;
      } else {
        
        struct LINEITEMRecord* x5639 = x4044->next;
        x192->next = x5639;
        x4044->next = x192;
      };
      int x1326 = x28096;
      int x198 = x1326+(1);
      x28096 = x198;
    };
    while(1) {
      
      int x28201 = x28097;
      int x28202 = x28201<(x10752);
      if (!(x28202)) break; 
      
      int x1335 = x28097;
      struct PARTRecord* x207 = &(x11923[x1335]);
      char* x209 = x207->P_CONTAINER;
      int x18012 = strcmp(x209, "MED BAG");
      int x18013 = x18012==(0);
      /* VAR */ int ite23074 = 0;
      if(x18013) {
        char* x28210 = x207->P_BRAND;
        int x28211 = strcmp(x28210, "Brand#15");
        int x28212 = x28211==(0);
        ite23074 = x28212;
      } else {
        
        ite23074 = 0;
      };
      int x21704 = ite23074;
      if(x21704) {
        int x214 = x207->P_PARTKEY;
        int x2873 = x214%(1048576);
        struct LINEITEMRecord* x4082 = &(x28051[x2873]);
        int x15911 = x4082!=(NULL);
        /* VAR */ int ite23089 = 0;
        if(x15911) {
          char* x28224 = x4082->L_SHIPINSTRUCT;
          int x28225 = x28224!=(NULL);
          /* VAR */ int x28226 = 0;
          if(x28225) {
            int x28228 = strcmp(x28224, "");
            x28226 = x28228;
          } else {
            
            x28226 = 0;
          };
          int x28232 = x28226;
          ite23089 = x28232;
        } else {
          
          ite23089 = 0;
        };
        int x21711 = ite23089;
        if(x21711) {
          /* VAR */ struct LINEITEMRecord* current4504 = x4082;
          while(1) {
            
            struct LINEITEMRecord* x4506 = current4504;
            int x15919 = x4506!=(NULL);
            /* VAR */ int ite23105 = 0;
            if(x15919) {
              char* x28244 = x4506->L_SHIPINSTRUCT;
              int x28245 = x28244!=(NULL);
              /* VAR */ int x28246 = 0;
              if(x28245) {
                int x28248 = strcmp(x28244, "");
                x28246 = x28248;
              } else {
                
                x28246 = 0;
              };
              int x28252 = x28246;
              ite23105 = x28252;
            } else {
              
              ite23105 = 0;
            };
            int x21718 = ite23105;
            if (!(x21718)) break; 
            
            struct LINEITEMRecord* x4508 = current4504;
            struct LINEITEMRecord* x5721 = x4508->next;
            struct LINEITEMRecord* x4510 = current4504;
            int x4145 = x4510->L_PARTKEY;
            int x4146 = x4145==(x214);
            if(x4146) {
              int x611 = x4510->L_ORDERKEY;
              int x612 = x4510->L_SUPPKEY;
              int x613 = x4510->L_LINENUMBER;
              double x614 = x4510->L_QUANTITY;
              double x615 = x4510->L_EXTENDEDPRICE;
              double x616 = x4510->L_DISCOUNT;
              double x617 = x4510->L_TAX;
              char x618 = x4510->L_RETURNFLAG;
              char x619 = x4510->L_LINESTATUS;
              int x620 = x4510->L_SHIPDATE;
              int x621 = x4510->L_COMMITDATE;
              int x622 = x4510->L_RECEIPTDATE;
              char* x623 = x4510->L_SHIPINSTRUCT;
              char* x624 = x4510->L_SHIPMODE;
              char* x625 = x4510->L_COMMENT;
              char* x626 = x207->P_NAME;
              char* x627 = x207->P_MFGR;
              char* x628 = x207->P_BRAND;
              char* x629 = x207->P_TYPE;
              int x630 = x207->P_SIZE;
              double x631 = x207->P_RETAILPRICE;
              char* x632 = x207->P_COMMENT;
              int x9908 = x28052;
              struct LINEITEMRecord_PARTRecord* x9909 = &(x28053[x9908]);
              x9909->L_ORDERKEY = x611;
              x9909->L_PARTKEY = x4145;
              x9909->L_SUPPKEY = x612;
              x9909->L_LINENUMBER = x613;
              x9909->L_QUANTITY = x614;
              x9909->L_EXTENDEDPRICE = x615;
              x9909->L_DISCOUNT = x616;
              x9909->L_TAX = x617;
              x9909->L_RETURNFLAG = x618;
              x9909->L_LINESTATUS = x619;
              x9909->L_SHIPDATE = x620;
              x9909->L_COMMITDATE = x621;
              x9909->L_RECEIPTDATE = x622;
              x9909->L_SHIPINSTRUCT = x623;
              x9909->L_SHIPMODE = x624;
              x9909->L_COMMENT = x625;
              x9909->P_PARTKEY = x214;
              x9909->P_NAME = x626;
              x9909->P_MFGR = x627;
              x9909->P_BRAND = x628;
              x9909->P_TYPE = x629;
              x9909->P_SIZE = x630;
              x9909->P_CONTAINER = x209;
              x9909->P_RETAILPRICE = x631;
              x9909->P_COMMENT = x632;
              x9909->next = NULL;
              int x9936 = x28052;
              int x9937 = x9936+(1);
              x28052 = x9937;
              int x235 = x9909->L_PARTKEY;
              int x2909 = x235%(1048576);
              struct LINEITEMRecord_PARTRecord* x4118 = &(x28050[x2909]);
              /* VAR */ struct LINEITEMRecord_PARTRecord* list4119 = x4118;
              struct LINEITEMRecord_PARTRecord* x4120 = list4119;
              int x15987 = x4120==(NULL);
              /* VAR */ int ite23181 = 0;
              if(x15987) {
                ite23181 = 1;
              } else {
                
                char* x28325 = x4120->L_SHIPINSTRUCT;
                int x28326 = x28325==(NULL);
                /* VAR */ int x28327 = 0;
                if(x28326) {
                  x28327 = 1;
                } else {
                  
                  int x28330 = strcmp(x28325, "");
                  int x28331 = !(x28330);
                  x28327 = x28331;
                };
                int x28334 = x28327;
                ite23181 = x28334;
              };
              int x21785 = ite23181;
              if(x21785) {
                list4119 = NULL;
                struct LINEITEMRecord_PARTRecord* x4127 = list4119;
                int x15994 = x4127==(NULL);
                /* VAR */ int ite23196 = 0;
                if(x15994) {
                  ite23196 = 1;
                } else {
                  
                  char* x28345 = x4127->L_SHIPINSTRUCT;
                  int x28346 = x28345==(NULL);
                  /* VAR */ int x28347 = 0;
                  if(x28346) {
                    x28347 = 1;
                  } else {
                    
                    int x28350 = strcmp(x28345, "");
                    int x28351 = !(x28350);
                    x28347 = x28351;
                  };
                  int x28354 = x28347;
                  ite23196 = x28354;
                };
                int x21791 = ite23196;
                if(x21791) {
                  *(x28050 + x2909) = (const struct LINEITEMRecord_PARTRecord){0};
                } else {
                  
                  struct LINEITEMRecord_PARTRecord x12243 = *x4127;
                  *(x28050 + x2909) = x12243;
                  struct LINEITEMRecord_PARTRecord* x12245 = &(x28050[x2909]);
                  list4119 = x12245;
                };
              };
              int x16004 = x4118==(NULL);
              /* VAR */ int ite23214 = 0;
              if(x16004) {
                ite23214 = 1;
              } else {
                
                char* x28368 = x4118->L_SHIPINSTRUCT;
                int x28369 = x28368==(NULL);
                /* VAR */ int x28370 = 0;
                if(x28369) {
                  x28370 = 1;
                } else {
                  
                  int x28373 = strcmp(x28368, "");
                  int x28374 = !(x28373);
                  x28370 = x28374;
                };
                int x28377 = x28370;
                ite23214 = x28377;
              };
              int x21800 = ite23214;
              if(x21800) {
                x9909->next = NULL;
                int x16010 = x9909==(NULL);
                /* VAR */ int ite23228 = 0;
                if(x16010) {
                  ite23228 = 1;
                } else {
                  
                  char* x28387 = x9909->L_SHIPINSTRUCT;
                  int x28388 = x28387==(NULL);
                  /* VAR */ int x28389 = 0;
                  if(x28388) {
                    x28389 = 1;
                  } else {
                    
                    int x28392 = strcmp(x28387, "");
                    int x28393 = !(x28392);
                    x28389 = x28393;
                  };
                  int x28396 = x28389;
                  ite23228 = x28396;
                };
                int x21805 = ite23228;
                if(x21805) {
                  *(x28050 + x2909) = (const struct LINEITEMRecord_PARTRecord){0};
                } else {
                  
                  struct LINEITEMRecord_PARTRecord x12253 = *x9909;
                  *(x28050 + x2909) = x12253;
                  struct LINEITEMRecord_PARTRecord* x12255 = &(x28050[x2909]);
                  x9909 = x12255;
                };
                list4119 = x9909;
              } else {
                
                struct LINEITEMRecord_PARTRecord* x5769 = x4118->next;
                x9909->next = x5769;
                x4118->next = x9909;
              };
            };
            current4504 = x5721;
          };
        };
      };
      int x1413 = x28097;
      int x244 = x1413+(1);
      x28097 = x244;
    };
    int x19644 = 0;
    for(; x19644 < 1048576 ; x19644 += 1) {
      
      struct LINEITEMRecord_PARTRecord* x19645 = &(x28050[x19644]);
      int x19646 = x19645!=(NULL);
      /* VAR */ int ite23359 = 0;
      if(x19646) {
        char* x28538 = x19645->L_SHIPINSTRUCT;
        int x28539 = x28538!=(NULL);
        /* VAR */ int x28540 = 0;
        if(x28539) {
          int x28542 = strcmp(x28538, "");
          x28540 = x28542;
        } else {
          
          x28540 = 0;
        };
        int x28546 = x28540;
        ite23359 = x28546;
      } else {
        
        ite23359 = 0;
      };
      int x21891 = ite23359;
      if(x21891) {
        /* VAR */ double acc4212 = 0.0;
        /* VAR */ struct LINEITEMRecord_PARTRecord* current4989 = x19645;
        while(1) {
          
          struct LINEITEMRecord_PARTRecord* x4991 = current4989;
          int x16041 = x4991!=(NULL);
          /* VAR */ int ite23376 = 0;
          if(x16041) {
            char* x28559 = x4991->L_SHIPINSTRUCT;
            int x28560 = x28559!=(NULL);
            /* VAR */ int x28561 = 0;
            if(x28560) {
              int x28563 = strcmp(x28559, "");
              x28561 = x28563;
            } else {
              
              x28561 = 0;
            };
            int x28567 = x28561;
            ite23376 = x28567;
          } else {
            
            ite23376 = 0;
          };
          int x21899 = ite23376;
          if (!(x21899)) break; 
          
          struct LINEITEMRecord_PARTRecord* x4993 = current4989;
          struct LINEITEMRecord_PARTRecord* x5801 = x4993->next;
          struct LINEITEMRecord_PARTRecord* x4995 = current4989;
          double x4592 = acc4212;
          double x4593 = x4995->L_QUANTITY;
          double x4594 = x4592+(x4593);
          acc4212 = x4594;
          current4989 = x5801;
        };
        double x4220 = acc4212;
        /* VAR */ int s4221 = 0;
        /* VAR */ struct LINEITEMRecord_PARTRecord* current5009 = x19645;
        while(1) {
          
          struct LINEITEMRecord_PARTRecord* x5011 = current5009;
          int x16058 = x5011!=(NULL);
          /* VAR */ int ite23401 = 0;
          if(x16058) {
            char* x28588 = x5011->L_SHIPINSTRUCT;
            int x28589 = x28588!=(NULL);
            /* VAR */ int x28590 = 0;
            if(x28589) {
              int x28592 = strcmp(x28588, "");
              x28590 = x28592;
            } else {
              
              x28590 = 0;
            };
            int x28596 = x28590;
            ite23401 = x28596;
          } else {
            
            ite23401 = 0;
          };
          int x21915 = ite23401;
          if (!(x21915)) break; 
          
          struct LINEITEMRecord_PARTRecord* x5013 = current5009;
          struct LINEITEMRecord_PARTRecord* x5820 = x5013->next;
          int x4612 = s4221;
          int x4613 = x4612+(1);
          s4221 = x4613;
          current5009 = x5820;
        };
        int x4228 = s4221;
        double x2971 = x4220/(x4228);
        double x2972 = 0.2*(x2971);
        /* VAR */ double acc4240 = 0.0;
        /* VAR */ struct LINEITEMRecord_PARTRecord* current5043 = x19645;
        while(1) {
          
          struct LINEITEMRecord_PARTRecord* x5045 = current5043;
          int x16076 = x5045!=(NULL);
          /* VAR */ int ite23426 = 0;
          if(x16076) {
            char* x28617 = x5045->L_SHIPINSTRUCT;
            int x28618 = x28617!=(NULL);
            /* VAR */ int x28619 = 0;
            if(x28618) {
              int x28621 = strcmp(x28617, "");
              x28619 = x28621;
            } else {
              
              x28619 = 0;
            };
            int x28625 = x28619;
            ite23426 = x28625;
          } else {
            
            ite23426 = 0;
          };
          int x21931 = ite23426;
          if (!(x21931)) break; 
          
          struct LINEITEMRecord_PARTRecord* x5047 = current5043;
          struct LINEITEMRecord_PARTRecord* x5853 = x5047->next;
          struct LINEITEMRecord_PARTRecord* x5049 = current5043;
          double x4646 = acc4240;
          double x4647 = x5049->L_QUANTITY;
          int x4648 = x4647<(x2972);
          /* VAR */ double ite21939 = 0;
          if(x4648) {
            double x21940 = x5049->L_EXTENDEDPRICE;
            double x21941 = x4646+(x21940);
            ite21939 = x21941;
          } else {
            
            ite21939 = x4646;
          };
          double x4649 = ite21939;
          acc4240 = x4649;
          current5043 = x5853;
        };
        double x4251 = acc4240;
        double x2982 = x4251/(7.0);
        double x2987 = x28049[0];
        double x2989 = x2987+(x2982);
        *x28049 = x2989;
      };
    };
    double x28651 = x28049[0];
    printf("%.6f\n", x28651);
    printf("(%d rows)\n", 1);
    struct timeval* x28654 = &x28093;
    gettimeofday(x28654, NULL);
    struct timeval* x28656 = &x28089;
    struct timeval* x28657 = &x28093;
    struct timeval* x28658 = &x28091;
    long x28659 = timeval_subtract(x28656, x28657, x28658);
    printf("Generated code run in %ld milliseconds.\n", x28659);
  };
}
/* ----------- FUNCTIONS ----------- */