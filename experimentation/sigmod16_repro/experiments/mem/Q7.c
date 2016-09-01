#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct LINEITEMRecord;
struct AGGRecord_Q7GRPRecord;
struct NATIONRecord;
struct ORDERSRecord;
struct Q7GRPRecord;
struct Set_AGGRecord_Q7GRPRecord;
struct SUPPLIERRecord;
struct CUSTOMERRecord;
struct LINEITEMRecord {
  numeric_int_t L_ORDERKEY;
  numeric_int_t L_SUPPKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  numeric_int_t L_SHIPDATE;
};

struct AGGRecord_Q7GRPRecord {
  struct Q7GRPRecord* key;
  double* aggs;
};

struct NATIONRecord {
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
};

struct ORDERSRecord {
  numeric_int_t O_ORDERKEY;
  numeric_int_t O_CUSTKEY;
};

struct Q7GRPRecord {
  char* SUPP_NATION;
  char* CUST_NATION;
  numeric_int_t L_YEAR;
};

struct Set_AGGRecord_Q7GRPRecord {
  numeric_int_t maxSize;
  struct AGGRecord_Q7GRPRecord* array;
};

struct SUPPLIERRecord {
  numeric_int_t S_SUPPKEY;
  numeric_int_t S_NATIONKEY;
};

struct CUSTOMERRecord {
  numeric_int_t C_CUSTKEY;
  numeric_int_t C_NATIONKEY;
};


numeric_int_t x298527(struct AGGRecord_Q7GRPRecord* x250254, struct AGGRecord_Q7GRPRecord* x250255);

numeric_int_t x270777(void* x270771, void* x270772, void* x270773);

int main(int argc, char** argv) {
  /* VAR */ long mallocSym_266971_302568 = 0L;
  /* VAR */ long mallocSym_267042_302569 = 0L;
  /* VAR */ long mallocSym_298352_302570 = 0L;
  /* VAR */ long mallocSym_267133_302571 = 0L;
  /* VAR */ long mallocSym_267079_302572 = 0L;
  /* VAR */ long mallocSym_266638_302573 = 0L;
  /* VAR */ long mallocSym_298260_302574 = 0L;
  /* VAR */ long mallocSym_267149_302575 = 0L;
  /* VAR */ long mallocSym_267021_302576 = 0L;
  /* VAR */ long mallocSym_267358_302577 = 0L;
  /* VAR */ long mallocSym_266658_302578 = 0L;
  /* VAR */ long mallocSym_268263_302579 = 0L;
  /* VAR */ long mallocSym_280370_302580 = 0L;
  /* VAR */ long mallocSym_267281_302581 = 0L;
  /* VAR */ long mallocSym_280448_302582 = 0L;
  /* VAR */ long mallocSym_298240_302583 = 0L;
  /* VAR */ long mallocSym_268419_302584 = 0L;
  /* VAR */ long mallocSym_268129_302585 = 0L;
  /* VAR */ long mallocSym_266742_302586 = 0L;
  /* VAR */ long mallocSym_267809_302587 = 0L;
  /* VAR */ long mallocSym_267005_302588 = 0L;
  /* VAR */ long mallocSym_298278_302589 = 0L;
  /* VAR */ long mallocSym_266783_302590 = 0L;
  /* VAR */ long mallocSym_267233_302591 = 0L;
  /* VAR */ long mallocSym_266763_302592 = 0L;
  /* VAR */ long mallocSym_267232_302593 = 0L;
  /* VAR */ long mallocSym_267191_302594 = 0L;
  /* VAR */ long mallocSym_266919_302595 = 0L;
  /* VAR */ long mallocSym_267346_302596 = 0L;
  /* VAR */ long mallocSym_298456_302597 = 0L;
  /* VAR */ long mallocSym_298279_302598 = 0L;
  /* VAR */ long mallocSym_267170_302599 = 0L;
  /* VAR */ long mallocSym_267352_302600 = 0L;
  /* VAR */ long mallocSym_267257_302601 = 0L;
  /* VAR */ long mallocSym_298444_302602 = 0L;
  /* VAR */ long mallocSym_298353_302603 = 0L;
  /* VAR */ long mallocSym_267999_302604 = 0L;
  /* VAR */ long mallocSym_267682_302605 = 0L;
  /* VAR */ long mallocSym_280304_302606 = 0L;
  /* VAR */ long mallocSym_267209_302607 = 0L;
  /* VAR */ long mallocSym_268388_302608 = 0L;
  /* VAR */ long mallocSym_266935_302609 = 0L;
  /* VAR */ long mallocSym_298427_302610 = 0L;
  /* VAR */ long mallocSym_267220_302611 = 0L;
  /* VAR */ long mallocSym_267282_302612 = 0L;
  /* VAR */ long mallocSym_267306_302613 = 0L;
  /* VAR */ long mallocSym_266582_302614 = 0L;
  /* VAR */ long mallocSym_280303_302615 = 0L;
  /* VAR */ long mallocSym_266726_302616 = 0L;
  /* VAR */ long mallocSym_267063_302617 = 0L;
  /* VAR */ long mallocSym_267331_302618 = 0L;
  /* VAR */ long mallocSym_268243_302619 = 0L;
  /* VAR */ long mallocSym_266617_302620 = 0L;
  /* VAR */ long mallocSym_267213_302621 = 0L;
  /* VAR */ long mallocSym_267099_302622 = 0L;
  /* VAR */ long mallocSym_266951_302623 = 0L;
  FILE* x264570 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ numeric_int_t x264571 = 0;
  numeric_int_t x264572 = x264571;
  numeric_int_t* x264573 = &x264572;
  numeric_int_t x264574 = fscanf(x264570, "%d", x264573);
  pclose(x264570);
  struct NATIONRecord* x302630 = (struct NATIONRecord*)malloc(x264572 * sizeof(struct NATIONRecord));
  memset(x302630, 0, x264572 * sizeof(struct NATIONRecord));
  long x302631 = mallocSym_266582_302614;
  mallocSym_266582_302614 = (x302631+(((long){x264572})));
  numeric_int_t x264578 = O_RDONLY;
  numeric_int_t x264579 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x264578);
  struct stat x264580 = (struct stat){0};
  /* VAR */ struct stat x264581 = x264580;
  struct stat x264582 = x264581;
  struct stat* x264583 = &x264582;
  numeric_int_t x264584 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x264583);
  numeric_int_t x264586 = PROT_READ;
  numeric_int_t x264587 = MAP_PRIVATE;
  char* x250031 = mmap(NULL, (x264583->st_size), x264586, x264587, x264579, 0);
  /* VAR */ numeric_int_t x250032 = 0;
  while(1) {
    
    numeric_int_t x250033 = x250032;
    /* VAR */ boolean_t ite286727 = 0;
    if((x250033<(x264572))) {
      char x296330 = *x250031;
      ite286727 = (x296330!=('\0'));
    } else {
      
      ite286727 = 0;
    };
    boolean_t x283987 = ite286727;
    if (!(x283987)) break; 
    
    /* VAR */ numeric_int_t x264595 = 0;
    numeric_int_t x264596 = x264595;
    numeric_int_t* x264597 = &x264596;
    char* x264598 = strntoi_unchecked(x250031, x264597);
    x250031 = x264598;
    /* VAR */ char* x264600 = x250031;
    while(1) {
      
      char x264601 = *x250031;
      /* VAR */ boolean_t ite286745 = 0;
      if((x264601!=('|'))) {
        char x296347 = *x250031;
        ite286745 = (x296347!=('\n'));
      } else {
        
        ite286745 = 0;
      };
      boolean_t x283998 = ite286745;
      if (!(x283998)) break; 
      
      x250031 += 1;
    };
    char* x264608 = x264600;
    numeric_int_t x264609 = x250031 - x264608;
    numeric_int_t x264610 = x264609+(1);
    char* x302679 = (char*)malloc(x264610 * sizeof(char));
    memset(x302679, 0, x264610 * sizeof(char));
    long x302680 = mallocSym_266617_302620;
    mallocSym_266617_302620 = (x302680+(((long){x264610})));
    char* x264613 = x264600;
    char* x264614 = strncpy(x302679, x264613, x264609);
    x250031 += 1;
    /* VAR */ numeric_int_t x264616 = 0;
    numeric_int_t x264617 = x264616;
    numeric_int_t* x264618 = &x264617;
    char* x264619 = strntoi_unchecked(x250031, x264618);
    x250031 = x264619;
    /* VAR */ char* x264621 = x250031;
    while(1) {
      
      char x264622 = *x250031;
      /* VAR */ boolean_t ite286771 = 0;
      if((x264622!=('|'))) {
        char x296372 = *x250031;
        ite286771 = (x296372!=('\n'));
      } else {
        
        ite286771 = 0;
      };
      boolean_t x284017 = ite286771;
      if (!(x284017)) break; 
      
      x250031 += 1;
    };
    char* x264629 = x264621;
    numeric_int_t x264630 = x250031 - x264629;
    numeric_int_t x264631 = x264630+(1);
    char* x302708 = (char*)malloc(x264631 * sizeof(char));
    memset(x302708, 0, x264631 * sizeof(char));
    long x302709 = mallocSym_266638_302573;
    mallocSym_266638_302573 = (x302709+(((long){x264631})));
    char* x264634 = x264621;
    char* x264635 = strncpy(x302708, x264634, x264630);
    x250031 += 1;
    struct NATIONRecord* x302716 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x302716, 0, 1 * sizeof(struct NATIONRecord));
    long x302717 = mallocSym_267682_302605;
    mallocSym_267682_302605 = (x302717+(((long){1})));
    x302716->N_NATIONKEY = x264596; x302716->N_NAME = x302679;
    numeric_int_t x250042 = x250032;
    struct NATIONRecord x266645 = *x302716;
    *(x302630 + x250042) = x266645;
    struct NATIONRecord* x266647 = &(x302630[x250042]);
    x302716 = x266647;
    numeric_int_t x250044 = x250032;
    x250032 = (x250044+(1));
  };
  FILE* x264643 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ numeric_int_t x264644 = 0;
  numeric_int_t x264645 = x264644;
  numeric_int_t* x264646 = &x264645;
  numeric_int_t x264647 = fscanf(x264643, "%d", x264646);
  pclose(x264643);
  struct ORDERSRecord* x302737 = (struct ORDERSRecord*)malloc(x264645 * sizeof(struct ORDERSRecord));
  memset(x302737, 0, x264645 * sizeof(struct ORDERSRecord));
  long x302738 = mallocSym_266658_302578;
  mallocSym_266658_302578 = (x302738+(((long){x264645})));
  numeric_int_t x264651 = O_RDONLY;
  numeric_int_t x264652 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x264651);
  /* VAR */ struct stat x264653 = x264580;
  struct stat x264654 = x264653;
  struct stat* x264655 = &x264654;
  numeric_int_t x264656 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x264655);
  numeric_int_t x264658 = PROT_READ;
  numeric_int_t x264659 = MAP_PRIVATE;
  char* x250050 = mmap(NULL, (x264655->st_size), x264658, x264659, x264652, 0);
  /* VAR */ numeric_int_t x250051 = 0;
  while(1) {
    
    numeric_int_t x250052 = x250051;
    /* VAR */ boolean_t ite286820 = 0;
    if((x250052<(x264645))) {
      char x296420 = *x250050;
      ite286820 = (x296420!=('\0'));
    } else {
      
      ite286820 = 0;
    };
    boolean_t x284059 = ite286820;
    if (!(x284059)) break; 
    
    /* VAR */ numeric_int_t x264667 = 0;
    numeric_int_t x264668 = x264667;
    numeric_int_t* x264669 = &x264668;
    char* x264670 = strntoi_unchecked(x250050, x264669);
    x250050 = x264670;
    /* VAR */ numeric_int_t x264672 = 0;
    numeric_int_t x264673 = x264672;
    numeric_int_t* x264674 = &x264673;
    char* x264675 = strntoi_unchecked(x250050, x264674);
    x250050 = x264675;
    char x264677 = *x250050;
    /* VAR */ char x264678 = x264677;
    x250050 += 1;
    x250050 += 1;
    /* VAR */ double x264682 = 0.0;
    double x264683 = x264682;
    double* x264684 = &x264683;
    char* x264685 = strntod_unchecked(x250050, x264684);
    x250050 = x264685;
    /* VAR */ numeric_int_t x264687 = 0;
    numeric_int_t x264688 = x264687;
    numeric_int_t* x264689 = &x264688;
    char* x264690 = strntoi_unchecked(x250050, x264689);
    x250050 = x264690;
    /* VAR */ numeric_int_t x264692 = 0;
    numeric_int_t x264693 = x264692;
    numeric_int_t* x264694 = &x264693;
    char* x264695 = strntoi_unchecked(x250050, x264694);
    x250050 = x264695;
    /* VAR */ numeric_int_t x264697 = 0;
    numeric_int_t x264698 = x264697;
    numeric_int_t* x264699 = &x264698;
    char* x264700 = strntoi_unchecked(x250050, x264699);
    x250050 = x264700;
    /* VAR */ char* x264706 = x250050;
    while(1) {
      
      char x264707 = *x250050;
      /* VAR */ boolean_t ite286872 = 0;
      if((x264707!=('|'))) {
        char x296471 = *x250050;
        ite286872 = (x296471!=('\n'));
      } else {
        
        ite286872 = 0;
      };
      boolean_t x284104 = ite286872;
      if (!(x284104)) break; 
      
      x250050 += 1;
    };
    char* x264714 = x264706;
    numeric_int_t x264715 = x250050 - x264714;
    numeric_int_t x264716 = x264715+(1);
    char* x302819 = (char*)malloc(x264716 * sizeof(char));
    memset(x302819, 0, x264716 * sizeof(char));
    long x302820 = mallocSym_266726_302616;
    mallocSym_266726_302616 = (x302820+(((long){x264716})));
    char* x264719 = x264706;
    char* x264720 = strncpy(x302819, x264719, x264715);
    x250050 += 1;
    /* VAR */ char* x264722 = x250050;
    while(1) {
      
      char x264723 = *x250050;
      /* VAR */ boolean_t ite286893 = 0;
      if((x264723!=('|'))) {
        char x296491 = *x250050;
        ite286893 = (x296491!=('\n'));
      } else {
        
        ite286893 = 0;
      };
      boolean_t x284118 = ite286893;
      if (!(x284118)) break; 
      
      x250050 += 1;
    };
    char* x264730 = x264722;
    numeric_int_t x264731 = x250050 - x264730;
    numeric_int_t x264732 = x264731+(1);
    char* x302843 = (char*)malloc(x264732 * sizeof(char));
    memset(x302843, 0, x264732 * sizeof(char));
    long x302844 = mallocSym_266742_302586;
    mallocSym_266742_302586 = (x302844+(((long){x264732})));
    char* x264735 = x264722;
    char* x264736 = strncpy(x302843, x264735, x264731);
    x250050 += 1;
    /* VAR */ numeric_int_t x264738 = 0;
    numeric_int_t x264739 = x264738;
    numeric_int_t* x264740 = &x264739;
    char* x264741 = strntoi_unchecked(x250050, x264740);
    x250050 = x264741;
    /* VAR */ char* x264743 = x250050;
    while(1) {
      
      char x264744 = *x250050;
      /* VAR */ boolean_t ite286919 = 0;
      if((x264744!=('|'))) {
        char x296516 = *x250050;
        ite286919 = (x296516!=('\n'));
      } else {
        
        ite286919 = 0;
      };
      boolean_t x284137 = ite286919;
      if (!(x284137)) break; 
      
      x250050 += 1;
    };
    char* x264751 = x264743;
    numeric_int_t x264752 = x250050 - x264751;
    numeric_int_t x264753 = x264752+(1);
    char* x302872 = (char*)malloc(x264753 * sizeof(char));
    memset(x302872, 0, x264753 * sizeof(char));
    long x302873 = mallocSym_266763_302592;
    mallocSym_266763_302592 = (x302873+(((long){x264753})));
    char* x264756 = x264743;
    char* x264757 = strncpy(x302872, x264756, x264752);
    x250050 += 1;
    struct ORDERSRecord* x302880 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x302880, 0, 1 * sizeof(struct ORDERSRecord));
    long x302881 = mallocSym_267809_302587;
    mallocSym_267809_302587 = (x302881+(((long){1})));
    x302880->O_ORDERKEY = x264668; x302880->O_CUSTKEY = x264673;
    numeric_int_t x250066 = x250051;
    struct ORDERSRecord x266770 = *x302880;
    *(x302737 + x250066) = x266770;
    struct ORDERSRecord* x266772 = &(x302737[x250066]);
    x302880 = x266772;
    numeric_int_t x250068 = x250051;
    x250051 = (x250068+(1));
  };
  FILE* x264765 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x264766 = 0;
  numeric_int_t x264767 = x264766;
  numeric_int_t* x264768 = &x264767;
  numeric_int_t x264769 = fscanf(x264765, "%d", x264768);
  pclose(x264765);
  struct LINEITEMRecord* x302901 = (struct LINEITEMRecord*)malloc(x264767 * sizeof(struct LINEITEMRecord));
  memset(x302901, 0, x264767 * sizeof(struct LINEITEMRecord));
  long x302902 = mallocSym_266783_302590;
  mallocSym_266783_302590 = (x302902+(((long){x264767})));
  numeric_int_t x264773 = O_RDONLY;
  numeric_int_t x264774 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x264773);
  /* VAR */ struct stat x264775 = x264580;
  struct stat x264776 = x264775;
  struct stat* x264777 = &x264776;
  numeric_int_t x264778 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x264777);
  numeric_int_t x264780 = PROT_READ;
  numeric_int_t x264781 = MAP_PRIVATE;
  char* x250074 = mmap(NULL, (x264777->st_size), x264780, x264781, x264774, 0);
  /* VAR */ numeric_int_t x250075 = 0;
  while(1) {
    
    numeric_int_t x250076 = x250075;
    /* VAR */ boolean_t ite286968 = 0;
    if((x250076<(x264767))) {
      char x296564 = *x250074;
      ite286968 = (x296564!=('\0'));
    } else {
      
      ite286968 = 0;
    };
    boolean_t x284179 = ite286968;
    if (!(x284179)) break; 
    
    /* VAR */ numeric_int_t x264789 = 0;
    numeric_int_t x264790 = x264789;
    numeric_int_t* x264791 = &x264790;
    char* x264792 = strntoi_unchecked(x250074, x264791);
    x250074 = x264792;
    /* VAR */ numeric_int_t x264794 = 0;
    numeric_int_t x264795 = x264794;
    numeric_int_t* x264796 = &x264795;
    char* x264797 = strntoi_unchecked(x250074, x264796);
    x250074 = x264797;
    /* VAR */ numeric_int_t x264799 = 0;
    numeric_int_t x264800 = x264799;
    numeric_int_t* x264801 = &x264800;
    char* x264802 = strntoi_unchecked(x250074, x264801);
    x250074 = x264802;
    /* VAR */ numeric_int_t x264804 = 0;
    numeric_int_t x264805 = x264804;
    numeric_int_t* x264806 = &x264805;
    char* x264807 = strntoi_unchecked(x250074, x264806);
    x250074 = x264807;
    /* VAR */ double x264809 = 0.0;
    double x264810 = x264809;
    double* x264811 = &x264810;
    char* x264812 = strntod_unchecked(x250074, x264811);
    x250074 = x264812;
    /* VAR */ double x264814 = 0.0;
    double x264815 = x264814;
    double* x264816 = &x264815;
    char* x264817 = strntod_unchecked(x250074, x264816);
    x250074 = x264817;
    /* VAR */ double x264819 = 0.0;
    double x264820 = x264819;
    double* x264821 = &x264820;
    char* x264822 = strntod_unchecked(x250074, x264821);
    x250074 = x264822;
    /* VAR */ double x264824 = 0.0;
    double x264825 = x264824;
    double* x264826 = &x264825;
    char* x264827 = strntod_unchecked(x250074, x264826);
    x250074 = x264827;
    char x264829 = *x250074;
    /* VAR */ char x264830 = x264829;
    x250074 += 1;
    x250074 += 1;
    char x264834 = *x250074;
    /* VAR */ char x264835 = x264834;
    x250074 += 1;
    x250074 += 1;
    /* VAR */ numeric_int_t x264839 = 0;
    numeric_int_t x264840 = x264839;
    numeric_int_t* x264841 = &x264840;
    char* x264842 = strntoi_unchecked(x250074, x264841);
    x250074 = x264842;
    /* VAR */ numeric_int_t x264844 = 0;
    numeric_int_t x264845 = x264844;
    numeric_int_t* x264846 = &x264845;
    char* x264847 = strntoi_unchecked(x250074, x264846);
    x250074 = x264847;
    /* VAR */ numeric_int_t x264849 = 0;
    numeric_int_t x264850 = x264849;
    numeric_int_t* x264851 = &x264850;
    char* x264852 = strntoi_unchecked(x250074, x264851);
    x250074 = x264852;
    /* VAR */ numeric_int_t x264858 = 0;
    numeric_int_t x264859 = x264858;
    numeric_int_t* x264860 = &x264859;
    char* x264861 = strntoi_unchecked(x250074, x264860);
    x250074 = x264861;
    /* VAR */ numeric_int_t x264863 = 0;
    numeric_int_t x264864 = x264863;
    numeric_int_t* x264865 = &x264864;
    char* x264866 = strntoi_unchecked(x250074, x264865);
    x250074 = x264866;
    /* VAR */ numeric_int_t x264868 = 0;
    numeric_int_t x264869 = x264868;
    numeric_int_t* x264870 = &x264869;
    char* x264871 = strntoi_unchecked(x250074, x264870);
    x250074 = x264871;
    /* VAR */ numeric_int_t x264877 = 0;
    numeric_int_t x264878 = x264877;
    numeric_int_t* x264879 = &x264878;
    char* x264880 = strntoi_unchecked(x250074, x264879);
    x250074 = x264880;
    /* VAR */ numeric_int_t x264882 = 0;
    numeric_int_t x264883 = x264882;
    numeric_int_t* x264884 = &x264883;
    char* x264885 = strntoi_unchecked(x250074, x264884);
    x250074 = x264885;
    /* VAR */ numeric_int_t x264887 = 0;
    numeric_int_t x264888 = x264887;
    numeric_int_t* x264889 = &x264888;
    char* x264890 = strntoi_unchecked(x250074, x264889);
    x250074 = x264890;
    /* VAR */ char* x264896 = x250074;
    while(1) {
      
      char x264897 = *x250074;
      /* VAR */ boolean_t ite287088 = 0;
      if((x264897!=('|'))) {
        char x296683 = *x250074;
        ite287088 = (x296683!=('\n'));
      } else {
        
        ite287088 = 0;
      };
      boolean_t x284292 = ite287088;
      if (!(x284292)) break; 
      
      x250074 += 1;
    };
    char* x264904 = x264896;
    numeric_int_t x264905 = x250074 - x264904;
    numeric_int_t x264906 = x264905+(1);
    char* x303051 = (char*)malloc(x264906 * sizeof(char));
    memset(x303051, 0, x264906 * sizeof(char));
    long x303052 = mallocSym_266919_302595;
    mallocSym_266919_302595 = (x303052+(((long){x264906})));
    char* x264909 = x264896;
    char* x264910 = strncpy(x303051, x264909, x264905);
    x250074 += 1;
    /* VAR */ char* x264912 = x250074;
    while(1) {
      
      char x264913 = *x250074;
      /* VAR */ boolean_t ite287109 = 0;
      if((x264913!=('|'))) {
        char x296703 = *x250074;
        ite287109 = (x296703!=('\n'));
      } else {
        
        ite287109 = 0;
      };
      boolean_t x284306 = ite287109;
      if (!(x284306)) break; 
      
      x250074 += 1;
    };
    char* x264920 = x264912;
    numeric_int_t x264921 = x250074 - x264920;
    numeric_int_t x264922 = x264921+(1);
    char* x303075 = (char*)malloc(x264922 * sizeof(char));
    memset(x303075, 0, x264922 * sizeof(char));
    long x303076 = mallocSym_266935_302609;
    mallocSym_266935_302609 = (x303076+(((long){x264922})));
    char* x264925 = x264912;
    char* x264926 = strncpy(x303075, x264925, x264921);
    x250074 += 1;
    /* VAR */ char* x264928 = x250074;
    while(1) {
      
      char x264929 = *x250074;
      /* VAR */ boolean_t ite287130 = 0;
      if((x264929!=('|'))) {
        char x296723 = *x250074;
        ite287130 = (x296723!=('\n'));
      } else {
        
        ite287130 = 0;
      };
      boolean_t x284320 = ite287130;
      if (!(x284320)) break; 
      
      x250074 += 1;
    };
    char* x264936 = x264928;
    numeric_int_t x264937 = x250074 - x264936;
    numeric_int_t x264938 = x264937+(1);
    char* x303099 = (char*)malloc(x264938 * sizeof(char));
    memset(x303099, 0, x264938 * sizeof(char));
    long x303100 = mallocSym_266951_302623;
    mallocSym_266951_302623 = (x303100+(((long){x264938})));
    char* x264941 = x264928;
    char* x264942 = strncpy(x303099, x264941, x264937);
    x250074 += 1;
    struct LINEITEMRecord* x303107 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x303107, 0, 1 * sizeof(struct LINEITEMRecord));
    long x303108 = mallocSym_267999_302604;
    mallocSym_267999_302604 = (x303108+(((long){1})));
    x303107->L_ORDERKEY = x264790; x303107->L_SUPPKEY = x264800; x303107->L_EXTENDEDPRICE = x264815; x303107->L_DISCOUNT = x264820; x303107->L_SHIPDATE = (((x264840*(10000))+((x264845*(100))))+(x264850));
    numeric_int_t x250097 = x250075;
    struct LINEITEMRecord x266958 = *x303107;
    *(x302901 + x250097) = x266958;
    struct LINEITEMRecord* x266960 = &(x302901[x250097]);
    x303107 = x266960;
    numeric_int_t x250099 = x250075;
    x250075 = (x250099+(1));
  };
  FILE* x264950 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ numeric_int_t x264951 = 0;
  numeric_int_t x264952 = x264951;
  numeric_int_t* x264953 = &x264952;
  numeric_int_t x264954 = fscanf(x264950, "%d", x264953);
  pclose(x264950);
  struct CUSTOMERRecord* x303128 = (struct CUSTOMERRecord*)malloc(x264952 * sizeof(struct CUSTOMERRecord));
  memset(x303128, 0, x264952 * sizeof(struct CUSTOMERRecord));
  long x303129 = mallocSym_266971_302568;
  mallocSym_266971_302568 = (x303129+(((long){x264952})));
  numeric_int_t x264958 = O_RDONLY;
  numeric_int_t x264959 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x264958);
  /* VAR */ struct stat x264960 = x264580;
  struct stat x264961 = x264960;
  struct stat* x264962 = &x264961;
  numeric_int_t x264963 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x264962);
  numeric_int_t x264965 = PROT_READ;
  numeric_int_t x264966 = MAP_PRIVATE;
  char* x250105 = mmap(NULL, (x264962->st_size), x264965, x264966, x264959, 0);
  /* VAR */ numeric_int_t x250106 = 0;
  while(1) {
    
    numeric_int_t x250107 = x250106;
    /* VAR */ boolean_t ite287179 = 0;
    if((x250107<(x264952))) {
      char x296771 = *x250105;
      ite287179 = (x296771!=('\0'));
    } else {
      
      ite287179 = 0;
    };
    boolean_t x284362 = ite287179;
    if (!(x284362)) break; 
    
    /* VAR */ numeric_int_t x264974 = 0;
    numeric_int_t x264975 = x264974;
    numeric_int_t* x264976 = &x264975;
    char* x264977 = strntoi_unchecked(x250105, x264976);
    x250105 = x264977;
    /* VAR */ char* x264979 = x250105;
    while(1) {
      
      char x264980 = *x250105;
      /* VAR */ boolean_t ite287197 = 0;
      if((x264980!=('|'))) {
        char x296788 = *x250105;
        ite287197 = (x296788!=('\n'));
      } else {
        
        ite287197 = 0;
      };
      boolean_t x284373 = ite287197;
      if (!(x284373)) break; 
      
      x250105 += 1;
    };
    char* x264987 = x264979;
    numeric_int_t x264988 = x250105 - x264987;
    numeric_int_t x264989 = x264988+(1);
    char* x303176 = (char*)malloc(x264989 * sizeof(char));
    memset(x303176, 0, x264989 * sizeof(char));
    long x303177 = mallocSym_267005_302588;
    mallocSym_267005_302588 = (x303177+(((long){x264989})));
    char* x264992 = x264979;
    char* x264993 = strncpy(x303176, x264992, x264988);
    x250105 += 1;
    /* VAR */ char* x264995 = x250105;
    while(1) {
      
      char x264996 = *x250105;
      /* VAR */ boolean_t ite287218 = 0;
      if((x264996!=('|'))) {
        char x296808 = *x250105;
        ite287218 = (x296808!=('\n'));
      } else {
        
        ite287218 = 0;
      };
      boolean_t x284387 = ite287218;
      if (!(x284387)) break; 
      
      x250105 += 1;
    };
    char* x265003 = x264995;
    numeric_int_t x265004 = x250105 - x265003;
    numeric_int_t x265005 = x265004+(1);
    char* x303200 = (char*)malloc(x265005 * sizeof(char));
    memset(x303200, 0, x265005 * sizeof(char));
    long x303201 = mallocSym_267021_302576;
    mallocSym_267021_302576 = (x303201+(((long){x265005})));
    char* x265008 = x264995;
    char* x265009 = strncpy(x303200, x265008, x265004);
    x250105 += 1;
    /* VAR */ numeric_int_t x265011 = 0;
    numeric_int_t x265012 = x265011;
    numeric_int_t* x265013 = &x265012;
    char* x265014 = strntoi_unchecked(x250105, x265013);
    x250105 = x265014;
    /* VAR */ char* x265016 = x250105;
    while(1) {
      
      char x265017 = *x250105;
      /* VAR */ boolean_t ite287244 = 0;
      if((x265017!=('|'))) {
        char x296833 = *x250105;
        ite287244 = (x296833!=('\n'));
      } else {
        
        ite287244 = 0;
      };
      boolean_t x284406 = ite287244;
      if (!(x284406)) break; 
      
      x250105 += 1;
    };
    char* x265024 = x265016;
    numeric_int_t x265025 = x250105 - x265024;
    numeric_int_t x265026 = x265025+(1);
    char* x303229 = (char*)malloc(x265026 * sizeof(char));
    memset(x303229, 0, x265026 * sizeof(char));
    long x303230 = mallocSym_267042_302569;
    mallocSym_267042_302569 = (x303230+(((long){x265026})));
    char* x265029 = x265016;
    char* x265030 = strncpy(x303229, x265029, x265025);
    x250105 += 1;
    /* VAR */ double x265032 = 0.0;
    double x265033 = x265032;
    double* x265034 = &x265033;
    char* x265035 = strntod_unchecked(x250105, x265034);
    x250105 = x265035;
    /* VAR */ char* x265037 = x250105;
    while(1) {
      
      char x265038 = *x250105;
      /* VAR */ boolean_t ite287270 = 0;
      if((x265038!=('|'))) {
        char x296858 = *x250105;
        ite287270 = (x296858!=('\n'));
      } else {
        
        ite287270 = 0;
      };
      boolean_t x284425 = ite287270;
      if (!(x284425)) break; 
      
      x250105 += 1;
    };
    char* x265045 = x265037;
    numeric_int_t x265046 = x250105 - x265045;
    numeric_int_t x265047 = x265046+(1);
    char* x303258 = (char*)malloc(x265047 * sizeof(char));
    memset(x303258, 0, x265047 * sizeof(char));
    long x303259 = mallocSym_267063_302617;
    mallocSym_267063_302617 = (x303259+(((long){x265047})));
    char* x265050 = x265037;
    char* x265051 = strncpy(x303258, x265050, x265046);
    x250105 += 1;
    /* VAR */ char* x265053 = x250105;
    while(1) {
      
      char x265054 = *x250105;
      /* VAR */ boolean_t ite287291 = 0;
      if((x265054!=('|'))) {
        char x296878 = *x250105;
        ite287291 = (x296878!=('\n'));
      } else {
        
        ite287291 = 0;
      };
      boolean_t x284439 = ite287291;
      if (!(x284439)) break; 
      
      x250105 += 1;
    };
    char* x265061 = x265053;
    numeric_int_t x265062 = x250105 - x265061;
    numeric_int_t x265063 = x265062+(1);
    char* x303282 = (char*)malloc(x265063 * sizeof(char));
    memset(x303282, 0, x265063 * sizeof(char));
    long x303283 = mallocSym_267079_302572;
    mallocSym_267079_302572 = (x303283+(((long){x265063})));
    char* x265066 = x265053;
    char* x265067 = strncpy(x303282, x265066, x265062);
    x250105 += 1;
    struct CUSTOMERRecord* x303290 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x303290, 0, 1 * sizeof(struct CUSTOMERRecord));
    long x303291 = mallocSym_268129_302585;
    mallocSym_268129_302585 = (x303291+(((long){1})));
    x303290->C_CUSTKEY = x264975; x303290->C_NATIONKEY = x265012;
    numeric_int_t x250120 = x250106;
    struct CUSTOMERRecord x267086 = *x303290;
    *(x303128 + x250120) = x267086;
    struct CUSTOMERRecord* x267088 = &(x303128[x250120]);
    x303290 = x267088;
    numeric_int_t x250122 = x250106;
    x250106 = (x250122+(1));
  };
  FILE* x265075 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ numeric_int_t x265076 = 0;
  numeric_int_t x265077 = x265076;
  numeric_int_t* x265078 = &x265077;
  numeric_int_t x265079 = fscanf(x265075, "%d", x265078);
  pclose(x265075);
  struct SUPPLIERRecord* x303311 = (struct SUPPLIERRecord*)malloc(x265077 * sizeof(struct SUPPLIERRecord));
  memset(x303311, 0, x265077 * sizeof(struct SUPPLIERRecord));
  long x303312 = mallocSym_267099_302622;
  mallocSym_267099_302622 = (x303312+(((long){x265077})));
  numeric_int_t x265083 = O_RDONLY;
  numeric_int_t x265084 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x265083);
  /* VAR */ struct stat x265085 = x264580;
  struct stat x265086 = x265085;
  struct stat* x265087 = &x265086;
  numeric_int_t x265088 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x265087);
  numeric_int_t x265090 = PROT_READ;
  numeric_int_t x265091 = MAP_PRIVATE;
  char* x250128 = mmap(NULL, (x265087->st_size), x265090, x265091, x265084, 0);
  /* VAR */ numeric_int_t x250129 = 0;
  while(1) {
    
    numeric_int_t x250130 = x250129;
    /* VAR */ boolean_t ite287340 = 0;
    if((x250130<(x265077))) {
      char x296926 = *x250128;
      ite287340 = (x296926!=('\0'));
    } else {
      
      ite287340 = 0;
    };
    boolean_t x284481 = ite287340;
    if (!(x284481)) break; 
    
    /* VAR */ numeric_int_t x265099 = 0;
    numeric_int_t x265100 = x265099;
    numeric_int_t* x265101 = &x265100;
    char* x265102 = strntoi_unchecked(x250128, x265101);
    x250128 = x265102;
    /* VAR */ char* x265104 = x250128;
    while(1) {
      
      char x265105 = *x250128;
      /* VAR */ boolean_t ite287358 = 0;
      if((x265105!=('|'))) {
        char x296943 = *x250128;
        ite287358 = (x296943!=('\n'));
      } else {
        
        ite287358 = 0;
      };
      boolean_t x284492 = ite287358;
      if (!(x284492)) break; 
      
      x250128 += 1;
    };
    char* x265112 = x265104;
    numeric_int_t x265113 = x250128 - x265112;
    numeric_int_t x265114 = x265113+(1);
    char* x303359 = (char*)malloc(x265114 * sizeof(char));
    memset(x303359, 0, x265114 * sizeof(char));
    long x303360 = mallocSym_267133_302571;
    mallocSym_267133_302571 = (x303360+(((long){x265114})));
    char* x265117 = x265104;
    char* x265118 = strncpy(x303359, x265117, x265113);
    x250128 += 1;
    /* VAR */ char* x265120 = x250128;
    while(1) {
      
      char x265121 = *x250128;
      /* VAR */ boolean_t ite287379 = 0;
      if((x265121!=('|'))) {
        char x296963 = *x250128;
        ite287379 = (x296963!=('\n'));
      } else {
        
        ite287379 = 0;
      };
      boolean_t x284506 = ite287379;
      if (!(x284506)) break; 
      
      x250128 += 1;
    };
    char* x265128 = x265120;
    numeric_int_t x265129 = x250128 - x265128;
    numeric_int_t x265130 = x265129+(1);
    char* x303383 = (char*)malloc(x265130 * sizeof(char));
    memset(x303383, 0, x265130 * sizeof(char));
    long x303384 = mallocSym_267149_302575;
    mallocSym_267149_302575 = (x303384+(((long){x265130})));
    char* x265133 = x265120;
    char* x265134 = strncpy(x303383, x265133, x265129);
    x250128 += 1;
    /* VAR */ numeric_int_t x265136 = 0;
    numeric_int_t x265137 = x265136;
    numeric_int_t* x265138 = &x265137;
    char* x265139 = strntoi_unchecked(x250128, x265138);
    x250128 = x265139;
    /* VAR */ char* x265141 = x250128;
    while(1) {
      
      char x265142 = *x250128;
      /* VAR */ boolean_t ite287405 = 0;
      if((x265142!=('|'))) {
        char x296988 = *x250128;
        ite287405 = (x296988!=('\n'));
      } else {
        
        ite287405 = 0;
      };
      boolean_t x284525 = ite287405;
      if (!(x284525)) break; 
      
      x250128 += 1;
    };
    char* x265149 = x265141;
    numeric_int_t x265150 = x250128 - x265149;
    numeric_int_t x265151 = x265150+(1);
    char* x303412 = (char*)malloc(x265151 * sizeof(char));
    memset(x303412, 0, x265151 * sizeof(char));
    long x303413 = mallocSym_267170_302599;
    mallocSym_267170_302599 = (x303413+(((long){x265151})));
    char* x265154 = x265141;
    char* x265155 = strncpy(x303412, x265154, x265150);
    x250128 += 1;
    /* VAR */ double x265157 = 0.0;
    double x265158 = x265157;
    double* x265159 = &x265158;
    char* x265160 = strntod_unchecked(x250128, x265159);
    x250128 = x265160;
    /* VAR */ char* x265162 = x250128;
    while(1) {
      
      char x265163 = *x250128;
      /* VAR */ boolean_t ite287431 = 0;
      if((x265163!=('|'))) {
        char x297013 = *x250128;
        ite287431 = (x297013!=('\n'));
      } else {
        
        ite287431 = 0;
      };
      boolean_t x284544 = ite287431;
      if (!(x284544)) break; 
      
      x250128 += 1;
    };
    char* x265170 = x265162;
    numeric_int_t x265171 = x250128 - x265170;
    numeric_int_t x265172 = x265171+(1);
    char* x303441 = (char*)malloc(x265172 * sizeof(char));
    memset(x303441, 0, x265172 * sizeof(char));
    long x303442 = mallocSym_267191_302594;
    mallocSym_267191_302594 = (x303442+(((long){x265172})));
    char* x265175 = x265162;
    char* x265176 = strncpy(x303441, x265175, x265171);
    x250128 += 1;
    struct SUPPLIERRecord* x303449 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x303449, 0, 1 * sizeof(struct SUPPLIERRecord));
    long x303450 = mallocSym_268243_302619;
    mallocSym_268243_302619 = (x303450+(((long){1})));
    x303449->S_SUPPKEY = x265100; x303449->S_NATIONKEY = x265137;
    numeric_int_t x250142 = x250129;
    struct SUPPLIERRecord x267198 = *x303449;
    *(x303311 + x250142) = x267198;
    struct SUPPLIERRecord* x267200 = &(x303311[x250142]);
    x303449 = x267200;
    numeric_int_t x250144 = x250129;
    x250129 = (x250144+(1));
  };
  numeric_int_t x250149 = 0;
  for(; x250149 < 1 ; x250149 += 1) {
    
    /* VAR */ numeric_int_t x298239 = 0;
    struct Set_AGGRecord_Q7GRPRecord* x304743 = (struct Set_AGGRecord_Q7GRPRecord*)malloc(1048576 * sizeof(struct Set_AGGRecord_Q7GRPRecord));
    memset(x304743, 0, 1048576 * sizeof(struct Set_AGGRecord_Q7GRPRecord));
    long x304744 = mallocSym_298240_302583;
    mallocSym_298240_302583 = (x304744+(((long){1048576})));
    numeric_int_t x280302 = 0;
    for(; x280302 < 1048576 ; x280302 += 1) {
      
      struct AGGRecord_Q7GRPRecord* x304767 = (struct AGGRecord_Q7GRPRecord*)malloc(256 * sizeof(struct AGGRecord_Q7GRPRecord));
      memset(x304767, 0, 256 * sizeof(struct AGGRecord_Q7GRPRecord));
      long x304768 = mallocSym_280303_302615;
      mallocSym_280303_302615 = (x304768+(((long){256})));
      struct Set_AGGRecord_Q7GRPRecord* x304772 = (struct Set_AGGRecord_Q7GRPRecord*)malloc(1 * sizeof(struct Set_AGGRecord_Q7GRPRecord));
      memset(x304772, 0, 1 * sizeof(struct Set_AGGRecord_Q7GRPRecord));
      long x304773 = mallocSym_280304_302606;
      mallocSym_280304_302606 = (x304773+(((long){1})));
      x304772->maxSize = 0; x304772->array = x304767;
      struct Set_AGGRecord_Q7GRPRecord x280307 = *x304772;
      *(x304743 + x280302) = x280307;
      struct Set_AGGRecord_Q7GRPRecord* x280309 = &(x304743[x280302]);
      x304772 = x280309;
    };
    struct ORDERSRecord* x304783 = (struct ORDERSRecord*)malloc(60000000 * sizeof(struct ORDERSRecord));
    memset(x304783, 0, 60000000 * sizeof(struct ORDERSRecord));
    long x304784 = mallocSym_298260_302574;
    mallocSym_298260_302574 = (x304784+(((long){60000000})));
    numeric_int_t x280322 = 0;
    for(; x280322 < x264645 ; x280322 += 1) {
      
      struct ORDERSRecord* x280323 = &(x302737[x280322]);
      numeric_int_t x280325 = (x280323->O_ORDERKEY)%(60000000);
      struct ORDERSRecord x280326 = *x280323;
      *(x304783 + x280325) = x280326;
      struct ORDERSRecord* x280328 = &(x304783[x280325]);
      x280323 = x280328;
    };
    struct LINEITEMRecord** x304805 = (struct LINEITEMRecord**)malloc(80000 * sizeof(struct LINEITEMRecord*));
    memset(x304805, 0, 80000 * sizeof(struct LINEITEMRecord*));
    long x304806 = mallocSym_298278_302589;
    long x304807 = (long){80000};
    mallocSym_298278_302589 = (x304806+(x304807));
    numeric_int_t* x304810 = (numeric_int_t*)malloc(80000 * sizeof(numeric_int_t));
    memset(x304810, 0, 80000 * sizeof(numeric_int_t));
    long x304811 = mallocSym_298279_302598;
    mallocSym_298279_302598 = (x304811+(x304807));
    numeric_int_t x280336 = 0;
    for(; x280336 < 80000 ; x280336 += 1) {
      
      *(x304810 + x280336) = 0;
    };
    /* VAR */ numeric_int_t x298285 = 0;
    numeric_int_t x280351 = 0;
    for(; x280351 < x264767 ; x280351 += 1) {
      
      struct LINEITEMRecord* x280352 = &(x302901[x280351]);
      numeric_int_t x280354 = (x280352->L_SUPPKEY)%(80000);
      numeric_int_t x280355 = x304810[x280354];
      *(x304810 + x280354) = (x280355+(1));
      numeric_int_t x280358 = x298285;
      x298285 = (x280358+(1));
    };
    numeric_int_t x280368 = 0;
    for(; x280368 < 80000 ; x280368 += 1) {
      
      numeric_int_t x280369 = x304810[x280368];
      struct LINEITEMRecord* x304853 = (struct LINEITEMRecord*)malloc(x280369 * sizeof(struct LINEITEMRecord));
      memset(x304853, 0, x280369 * sizeof(struct LINEITEMRecord));
      long x304854 = mallocSym_280370_302580;
      mallocSym_280370_302580 = (x304854+(((long){x280369})));
      *(x304805 + x280368) = x304853;
      *(x304810 + x280368) = 0;
    };
    x298285 = 0;
    numeric_int_t x280392 = 0;
    for(; x280392 < x264767 ; x280392 += 1) {
      
      struct LINEITEMRecord* x280393 = &(x302901[x280392]);
      numeric_int_t x280395 = (x280393->L_SUPPKEY)%(80000);
      numeric_int_t x280396 = x304810[x280395];
      struct LINEITEMRecord* x280397 = x304805[x280395];
      struct LINEITEMRecord x280398 = *x280393;
      *(x280397 + x280396) = x280398;
      struct LINEITEMRecord* x280400 = &(x280397[x280396]);
      x280393 = x280400;
      numeric_int_t x280402 = x304810[x280395];
      *(x304810 + x280395) = (x280402+(1));
      numeric_int_t x280405 = x298285;
      x298285 = (x280405+(1));
    };
    struct SUPPLIERRecord** x304894 = (struct SUPPLIERRecord**)malloc(25 * sizeof(struct SUPPLIERRecord*));
    memset(x304894, 0, 25 * sizeof(struct SUPPLIERRecord*));
    long x304895 = mallocSym_298352_302570;
    long x304896 = (long){25};
    mallocSym_298352_302570 = (x304895+(x304896));
    numeric_int_t* x304899 = (numeric_int_t*)malloc(25 * sizeof(numeric_int_t));
    memset(x304899, 0, 25 * sizeof(numeric_int_t));
    long x304900 = mallocSym_298353_302603;
    mallocSym_298353_302603 = (x304900+(x304896));
    numeric_int_t x280414 = 0;
    for(; x280414 < 25 ; x280414 += 1) {
      
      *(x304899 + x280414) = 0;
    };
    /* VAR */ numeric_int_t x298359 = 0;
    numeric_int_t x280429 = 0;
    for(; x280429 < x265077 ; x280429 += 1) {
      
      struct SUPPLIERRecord* x280430 = &(x303311[x280429]);
      numeric_int_t x280432 = (x280430->S_NATIONKEY)%(25);
      numeric_int_t x280433 = x304899[x280432];
      *(x304899 + x280432) = (x280433+(1));
      numeric_int_t x280436 = x298359;
      x298359 = (x280436+(1));
    };
    numeric_int_t x280446 = 0;
    for(; x280446 < 25 ; x280446 += 1) {
      
      numeric_int_t x280447 = x304899[x280446];
      struct SUPPLIERRecord* x304942 = (struct SUPPLIERRecord*)malloc(x280447 * sizeof(struct SUPPLIERRecord));
      memset(x304942, 0, x280447 * sizeof(struct SUPPLIERRecord));
      long x304943 = mallocSym_280448_302582;
      mallocSym_280448_302582 = (x304943+(((long){x280447})));
      *(x304894 + x280446) = x304942;
      *(x304899 + x280446) = 0;
    };
    x298359 = 0;
    numeric_int_t x280470 = 0;
    for(; x280470 < x265077 ; x280470 += 1) {
      
      struct SUPPLIERRecord* x280471 = &(x303311[x280470]);
      numeric_int_t x280473 = (x280471->S_NATIONKEY)%(25);
      numeric_int_t x280474 = x304899[x280473];
      struct SUPPLIERRecord* x280475 = x304894[x280473];
      struct SUPPLIERRecord x280476 = *x280471;
      *(x280475 + x280474) = x280476;
      struct SUPPLIERRecord* x280478 = &(x280475[x280474]);
      x280471 = x280478;
      numeric_int_t x280480 = x304899[x280473];
      *(x304899 + x280473) = (x280480+(1));
      numeric_int_t x280483 = x298359;
      x298359 = (x280483+(1));
    };
    /* VAR */ numeric_int_t x298426 = 0;
    struct Q7GRPRecord* x304984 = (struct Q7GRPRecord*)malloc(48000000 * sizeof(struct Q7GRPRecord));
    memset(x304984, 0, 48000000 * sizeof(struct Q7GRPRecord));
    long x304985 = mallocSym_298427_302610;
    mallocSym_298427_302610 = (x304985+(((long){48000000})));
    /* VAR */ numeric_int_t x298428 = 0;
    while(1) {
      
      numeric_int_t x263580 = x298428;
      if (!((x263580<(48000000)))) break; 
      
      numeric_int_t x263582 = x298428;
      struct Q7GRPRecord* x304994 = (struct Q7GRPRecord*)malloc(1 * sizeof(struct Q7GRPRecord));
      memset(x304994, 0, 1 * sizeof(struct Q7GRPRecord));
      long x304995 = mallocSym_268388_302608;
      mallocSym_268388_302608 = (x304995+(((long){1})));
      x304994->SUPP_NATION = ""; x304994->CUST_NATION = ""; x304994->L_YEAR = 0;
      struct Q7GRPRecord x267338 = *x304994;
      *(x304984 + x263582) = x267338;
      struct Q7GRPRecord* x267340 = &(x304984[x263582]);
      x304994 = x267340;
      numeric_int_t x263585 = x298428;
      x298428 = (x263585+(1));
    };
    /* VAR */ numeric_int_t x298443 = 0;
    double** x305009 = (double**)malloc(4375 * sizeof(double*));
    memset(x305009, 0, 4375 * sizeof(double*));
    long x305010 = mallocSym_298444_302602;
    long x305011 = (long){4375};
    mallocSym_298444_302602 = (x305010+(x305011));
    /* VAR */ numeric_int_t x298445 = 0;
    while(1) {
      
      numeric_int_t x263592 = x298445;
      if (!((x263592<(4375)))) break; 
      
      numeric_int_t x263594 = x298445;
      double* x305019 = (double*)malloc(1 * sizeof(double));
      memset(x305019, 0, 1 * sizeof(double));
      long x305020 = mallocSym_267352_302600;
      mallocSym_267352_302600 = (x305020+(((long){1})));
      *(x305009 + x263594) = x305019;
      numeric_int_t x263597 = x298445;
      x298445 = (x263597+(1));
    };
    /* VAR */ numeric_int_t x298455 = 0;
    struct AGGRecord_Q7GRPRecord* x305029 = (struct AGGRecord_Q7GRPRecord*)malloc(4375 * sizeof(struct AGGRecord_Q7GRPRecord));
    memset(x305029, 0, 4375 * sizeof(struct AGGRecord_Q7GRPRecord));
    long x305030 = mallocSym_298456_302597;
    mallocSym_298456_302597 = (x305030+(x305011));
    /* VAR */ numeric_int_t x298457 = 0;
    while(1) {
      
      numeric_int_t x263604 = x298457;
      if (!((x263604<(4375)))) break; 
      
      numeric_int_t x263606 = x298457;
      struct Q7GRPRecord* x263607 = &(x304984[x263606]);
      double* x263608 = x305009[x263606];
      struct AGGRecord_Q7GRPRecord* x305040 = (struct AGGRecord_Q7GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q7GRPRecord));
      memset(x305040, 0, 1 * sizeof(struct AGGRecord_Q7GRPRecord));
      long x305041 = mallocSym_268419_302584;
      mallocSym_268419_302584 = (x305041+(((long){1})));
      x305040->key = x263607; x305040->aggs = x263608;
      struct AGGRecord_Q7GRPRecord x267367 = *x305040;
      *(x305029 + x263606) = x267367;
      struct AGGRecord_Q7GRPRecord* x267369 = &(x305029[x263606]);
      x305040 = x267369;
      numeric_int_t x263611 = x298457;
      x298457 = (x263611+(1));
    };
    struct timeval x298474 = (struct timeval){0};
    /* VAR */ struct timeval x298475 = x298474;
    struct timeval x298476 = x298475;
    /* VAR */ struct timeval x298477 = x298474;
    struct timeval x298478 = x298477;
    /* VAR */ struct timeval x298479 = x298474;
    struct timeval x298480 = x298479;
    struct timeval* x298481 = &x298478;
    gettimeofday(x298481, NULL);
    /* VAR */ numeric_int_t x298483 = 0;
    /* VAR */ numeric_int_t x298484 = 0;
    /* VAR */ struct NATIONRecord* x298485 = NULL;
    numeric_int_t* x298568 = &(x298527);
    GTree* x298569 = g_tree_new(x298568);
    /* VAR */ boolean_t x298570 = 0;
    /* VAR */ numeric_int_t x298571 = 0;
    while(1) {
      
      numeric_int_t x298573 = x298483;
      if (!((x298573<(x264572)))) break; 
      
      numeric_int_t x252701 = x298483;
      struct NATIONRecord* x250309 = &(x302630[x252701]);
      x298485 = x250309;
      while(1) {
        
        numeric_int_t x298579 = x298484;
        if (!((x298579<(x264572)))) break; 
        
        numeric_int_t x252711 = x298484;
        struct NATIONRecord* x250318 = &(x302630[x252711]);
        struct NATIONRecord* x252714 = x298485;
        char* x250321 = x252714->N_NAME;
        boolean_t x278299 = strcmp(x250321, "UNITED STATES");
        /* VAR */ boolean_t ite289029 = 0;
        if((x278299==(0))) {
          boolean_t x298590 = strcmp((x250318->N_NAME), "INDONESIA");
          ite289029 = (x298590==(0));
        } else {
          
          ite289029 = 0;
        };
        boolean_t x285983 = ite289029;
        /* VAR */ boolean_t ite289039 = 0;
        if(x285983) {
          ite289039 = 1;
        } else {
          
          boolean_t x298599 = strcmp(x250321, "INDONESIA");
          /* VAR */ boolean_t x298601 = 0;
          if((x298599==(0))) {
            boolean_t x298604 = strcmp((x250318->N_NAME), "UNITED STATES");
            x298601 = (x298604==(0));
          } else {
            
            x298601 = 0;
          };
          boolean_t x298609 = x298601;
          ite289039 = x298609;
        };
        boolean_t x285985 = ite289039;
        if(x285985) {
          struct NATIONRecord* x252726 = x298485;
          numeric_int_t x251067 = x252726->N_NATIONKEY;
          numeric_int_t x254935 = x251067%(25);
          numeric_int_t x254936 = x304899[x254935];
          struct SUPPLIERRecord* x254937 = x304894[x254935];
          numeric_int_t x280934 = 0;
          for(; x280934 < x254936 ; x280934 += 1) {
            
            struct SUPPLIERRecord* x280935 = &(x254937[x280934]);
            if((x251067==((x280935->S_NATIONKEY)))) {
              numeric_int_t x251121 = x280935->S_SUPPKEY;
              numeric_int_t x254952 = x251121%(80000);
              numeric_int_t x254953 = x304810[x254952];
              struct LINEITEMRecord* x254954 = x304805[x254952];
              numeric_int_t x280787 = 0;
              for(; x280787 < x254953 ; x280787 += 1) {
                
                struct LINEITEMRecord* x280788 = &(x254954[x280787]);
                numeric_int_t x280789 = x280788->L_SHIPDATE;
                /* VAR */ boolean_t ite289636 = 0;
                if((x280789>=(19950101))) {
                  ite289636 = (x280789<=(19961231));
                } else {
                  
                  ite289636 = 0;
                };
                boolean_t x286483 = ite289636;
                if(x286483) {
                  if((x251121==((x280788->L_SUPPKEY)))) {
                    numeric_int_t x251183 = x280788->L_ORDERKEY;
                    struct ORDERSRecord* x254980 = &(x304783[x251183]);
                    if((x251183==((x254980->O_ORDERKEY)))) {
                      numeric_int_t x251368 = x254980->O_CUSTKEY;
                      struct CUSTOMERRecord* x261906 = &(x303128[(x251368-(1))]);
                      if(((x261906->C_CUSTKEY)==(x251368))) {
                        /* VAR */ boolean_t ite289663 = 0;
                        if(((x261906->C_CUSTKEY)==(x251368))) {
                          ite289663 = ((x261906->C_NATIONKEY)==((x250318->N_NATIONKEY)));
                        } else {
                          
                          ite289663 = 0;
                        };
                        boolean_t x286504 = ite289663;
                        if(x286504) {
                          numeric_int_t x263723 = x298426;
                          struct Q7GRPRecord* x263724 = &(x304984[x263723]);
                          x263724->SUPP_NATION = (x252726->N_NAME);
                          x263724->CUST_NATION = (x250318->N_NAME);
                          x263724->L_YEAR = (x280789/(10000));
                          numeric_int_t x263728 = x298426;
                          x298426 = (x263728+(1));
                          char* x275023 = x263724->SUPP_NATION;
                          numeric_int_t x278373 = strlen(x275023);
                          /* VAR */ numeric_int_t x276125 = 0;
                          /* VAR */ numeric_int_t x276126 = 0;
                          while(1) {
                            
                            numeric_int_t x276127 = x276125;
                            if (!((x276127<(x278373)))) break; 
                            
                            numeric_int_t x276129 = x276126;
                            numeric_int_t x276130 = x276125;
                            char* x278381 = pointer_add(x275023, x276130);
                            char x278382 = *(x278381);
                            x276126 = (x276129+(x278382));
                            numeric_int_t x276135 = x276125;
                            x276125 = (x276135+(1));
                          };
                          numeric_int_t x276139 = x276126;
                          char* x275025 = x263724->CUST_NATION;
                          numeric_int_t x278391 = strlen(x275025);
                          /* VAR */ numeric_int_t x276142 = 0;
                          /* VAR */ numeric_int_t x276143 = 0;
                          while(1) {
                            
                            numeric_int_t x276144 = x276142;
                            if (!((x276144<(x278391)))) break; 
                            
                            numeric_int_t x276146 = x276143;
                            numeric_int_t x276147 = x276142;
                            char* x278399 = pointer_add(x275025, x276147);
                            char x278400 = *(x278399);
                            x276143 = (x276146+(x278400));
                            numeric_int_t x276152 = x276142;
                            x276142 = (x276152+(1));
                          };
                          numeric_int_t x276156 = x276143;
                          numeric_int_t x275027 = x263724->L_YEAR;
                          numeric_int_t x257000 = ((x276139+(x276156))+(x275027))&(1048575);
                          struct Set_AGGRecord_Q7GRPRecord* x258276 = &(x304743[x257000]);
                          numeric_int_t x257002 = x298239;
                          if((x257000>(x257002))) {
                            x298239 = x257000;
                          };
                          /* VAR */ numeric_int_t i258285 = 0;
                          /* VAR */ boolean_t found258286 = 0;
                          while(1) {
                            
                            numeric_int_t x258287 = i258285;
                            numeric_int_t x258288 = x258276->maxSize;
                            /* VAR */ boolean_t ite289731 = 0;
                            if((x258287<(x258288))) {
                              boolean_t x299279 = found258286;
                              boolean_t x299280 = !(x299279);
                              ite289731 = x299280;
                            } else {
                              
                              ite289731 = 0;
                            };
                            boolean_t x286565 = ite289731;
                            if (!(x286565)) break; 
                            
                            numeric_int_t x258294 = i258285;
                            struct AGGRecord_Q7GRPRecord* x258295 = &(((struct AGGRecord_Q7GRPRecord*) { x258276->array })[x258294]);
                            struct Q7GRPRecord* x258296 = x258295->key;
                            boolean_t x276180 = strcmp((x258296->SUPP_NATION), x275023);
                            boolean_t x276181 = !(x276180);
                            boolean_t x276183 = strcmp((x258296->CUST_NATION), x275025);
                            boolean_t x276184 = !(x276183);
                            /* VAR */ boolean_t ite289752 = 0;
                            if(x276181) {
                              ite289752 = x276184;
                            } else {
                              
                              ite289752 = 0;
                            };
                            boolean_t x286579 = ite289752;
                            /* VAR */ boolean_t ite289759 = 0;
                            if(x286579) {
                              ite289759 = ((x258296->L_YEAR)==(x275027));
                            } else {
                              
                              ite289759 = 0;
                            };
                            boolean_t x286581 = ite289759;
                            if(x286581) {
                              found258286 = 1;
                            } else {
                              
                              numeric_int_t x258299 = i258285;
                              i258285 = (x258299+(1));
                            };
                          };
                          boolean_t x258304 = found258286;
                          boolean_t x258305 = !(x258304);
                          /* VAR */ struct AGGRecord_Q7GRPRecord** ite286590 = 0;
                          if(x258305) {
                            ite286590 = NULL;
                          } else {
                            
                            numeric_int_t x286593 = i258285;
                            struct AGGRecord_Q7GRPRecord* x286594 = &(((struct AGGRecord_Q7GRPRecord*) { x258276->array })[x286593]);
                            ite286590 = x286594;
                          };
                          struct AGGRecord_Q7GRPRecord** x258312 = ite286590;
                          /* VAR */ struct AGGRecord_Q7GRPRecord* ite286600 = 0;
                          if((x258312!=(NULL))) {
                            ite286600 = x258312;
                          } else {
                            
                            numeric_int_t x286602 = x298443;
                            double* x286603 = x305009[x286602];
                            numeric_int_t x286604 = x298443;
                            x298443 = (x286604+(1));
                            numeric_int_t x286607 = x298455;
                            struct AGGRecord_Q7GRPRecord* x286608 = &(x305029[x286607]);
                            x286608->key = x263724;
                            x286608->aggs = x286603;
                            numeric_int_t x286611 = x298455;
                            x298455 = (x286611+(1));
                            struct AGGRecord_Q7GRPRecord* x286614 = x258276->array;
                            numeric_int_t x286615 = x258276->maxSize;
                            struct AGGRecord_Q7GRPRecord x286616 = *x286608;
                            *(x286614 + x286615) = x286616;
                            struct AGGRecord_Q7GRPRecord* x286618 = &(x286614[x286615]);
                            x286608 = x286618;
                            numeric_int_t x286620 = x258276->maxSize;
                            x258276->maxSize = (x286620+(1));
                            ite286600 = x286608;
                          };
                          struct AGGRecord_Q7GRPRecord* x257015 = ite286600;
                          double* x250627 = x257015->aggs;
                          double x250641 = x250627[0];
                          *x250627 = (x250641+(((x280788->L_EXTENDEDPRICE)*((1.0-((x280788->L_DISCOUNT)))))));
                        };
                      };
                    };
                  };
                };
              };
            };
          };
        };
        numeric_int_t x252734 = x298484;
        x298484 = (x252734+(1));
      };
      x298484 = 0;
      numeric_int_t x252738 = x298483;
      x298483 = (x252738+(1));
    };
    numeric_int_t x299366 = x298239;
    numeric_int_t x281260 = 0;
    for(; x281260 < (x299366+(1)) ; x281260 += 1) {
      
      struct Set_AGGRecord_Q7GRPRecord* x281261 = &(x304743[x281260]);
      numeric_int_t x281262 = x281261->maxSize;
      numeric_int_t x281255 = 0;
      for(; x281255 < x281262 ; x281255 += 1) {
        
        struct AGGRecord_Q7GRPRecord* x281257 = &(((struct AGGRecord_Q7GRPRecord*) { x281261->array })[x281255]);
        g_tree_insert(x298569, x281257, x281257);
      };
    };
    while(1) {
      
      boolean_t x253096 = x298570;
      boolean_t x250672 = !(x253096);
      /* VAR */ boolean_t ite289853 = 0;
      if(x250672) {
        numeric_int_t x299398 = g_tree_nnodes(x298569);
        ite289853 = (x299398!=(0));
      } else {
        
        ite289853 = 0;
      };
      boolean_t x286670 = ite289853;
      if (!(x286670)) break; 
      
      void* x270770 = NULL;
      void** x270778 = &(x270770);
      g_tree_foreach(x298569, x270777, x270778);
      struct AGGRecord_Q7GRPRecord* x270780 = (struct AGGRecord_Q7GRPRecord*){x270770};
      numeric_int_t x270781 = g_tree_remove(x298569, x270780);
      if(0) {
        x298570 = 1;
      } else {
        
        struct Q7GRPRecord* x250685 = x270780->key;
        double x250692 = ((double*) { x270780->aggs })[0];
        printf("%s|%s|%d|%.4f\n", (x250685->SUPP_NATION), (x250685->CUST_NATION), (x250685->L_YEAR), x250692);
        numeric_int_t x253118 = x298571;
        x298571 = (x253118+(1));
      };
    };
    numeric_int_t x299428 = x298571;
    printf("(%d rows)\n", x299428);
    struct timeval* x299430 = &x298480;
    gettimeofday(x299430, NULL);
    struct timeval* x299432 = &x298476;
    struct timeval* x299433 = &x298480;
    struct timeval* x299434 = &x298478;
    long x299435 = timeval_subtract(x299432, x299433, x299434);
    printf("Generated code run in %ld milliseconds.\n", x299435);
  };
  /* VAR */ long mallocSum306017 = 0L;
  long x306018 = mallocSym_266971_302568;
  numeric_int_t x306019 = sizeof(struct CUSTOMERRecord);
  long x306021 = x306018*(((long){x306019}));
  printf("303128 with type CUSTOMERRecord: %ld\n", x306021);
  long x306023 = mallocSum306017;
  mallocSum306017 = (x306023+(x306021));
  long x306026 = mallocSym_267042_302569;
  numeric_int_t x306027 = sizeof(char);
  long x306029 = x306026*(((long){x306027}));
  printf("303229 with type Byte: %ld\n", x306029);
  long x306031 = mallocSum306017;
  mallocSum306017 = (x306031+(x306029));
  long x306034 = mallocSym_298352_302570;
  numeric_int_t x306035 = sizeof(struct SUPPLIERRecord*);
  long x306037 = x306034*(((long){x306035}));
  printf("304894 with type Pointer[SUPPLIERRecord]: %ld\n", x306037);
  long x306039 = mallocSum306017;
  mallocSum306017 = (x306039+(x306037));
  long x306042 = mallocSym_267133_302571;
  numeric_int_t x306043 = sizeof(char);
  long x306045 = x306042*(((long){x306043}));
  printf("303359 with type Byte: %ld\n", x306045);
  long x306047 = mallocSum306017;
  mallocSum306017 = (x306047+(x306045));
  long x306050 = mallocSym_267079_302572;
  numeric_int_t x306051 = sizeof(char);
  long x306053 = x306050*(((long){x306051}));
  printf("303282 with type Byte: %ld\n", x306053);
  long x306055 = mallocSum306017;
  mallocSum306017 = (x306055+(x306053));
  long x306058 = mallocSym_266638_302573;
  numeric_int_t x306059 = sizeof(char);
  long x306061 = x306058*(((long){x306059}));
  printf("302708 with type Byte: %ld\n", x306061);
  long x306063 = mallocSum306017;
  mallocSum306017 = (x306063+(x306061));
  long x306066 = mallocSym_298260_302574;
  numeric_int_t x306067 = sizeof(struct ORDERSRecord);
  long x306069 = x306066*(((long){x306067}));
  printf("304783 with type ORDERSRecord: %ld\n", x306069);
  long x306071 = mallocSum306017;
  mallocSum306017 = (x306071+(x306069));
  long x306074 = mallocSym_267149_302575;
  numeric_int_t x306075 = sizeof(char);
  long x306077 = x306074*(((long){x306075}));
  printf("303383 with type Byte: %ld\n", x306077);
  long x306079 = mallocSum306017;
  mallocSum306017 = (x306079+(x306077));
  long x306082 = mallocSym_267021_302576;
  numeric_int_t x306083 = sizeof(char);
  long x306085 = x306082*(((long){x306083}));
  printf("303200 with type Byte: %ld\n", x306085);
  long x306087 = mallocSum306017;
  mallocSum306017 = (x306087+(x306085));
  long x306090 = mallocSym_267358_302577;
  numeric_int_t x306091 = sizeof(struct AGGRecord_Q7GRPRecord);
  long x306093 = x306090*(((long){x306091}));
  printf("303753 with type AGGRecord_Q7GRPRecord: %ld\n", x306093);
  long x306095 = mallocSum306017;
  mallocSum306017 = (x306095+(x306093));
  long x306098 = mallocSym_266658_302578;
  numeric_int_t x306099 = sizeof(struct ORDERSRecord);
  long x306101 = x306098*(((long){x306099}));
  printf("302737 with type ORDERSRecord: %ld\n", x306101);
  long x306103 = mallocSum306017;
  mallocSum306017 = (x306103+(x306101));
  long x306106 = mallocSym_268263_302579;
  numeric_int_t x306107 = sizeof(struct Set_AGGRecord_Q7GRPRecord);
  long x306109 = x306106*(((long){x306107}));
  printf("304755 with type Set_AGGRecord_Q7GRPRecord: %ld\n", x306109);
  long x306111 = mallocSum306017;
  mallocSum306017 = (x306111+(x306109));
  long x306114 = mallocSym_280370_302580;
  numeric_int_t x306115 = sizeof(struct LINEITEMRecord);
  long x306117 = x306114*(((long){x306115}));
  printf("304853 with type LINEITEMRecord: %ld\n", x306117);
  long x306119 = mallocSum306017;
  mallocSum306017 = (x306119+(x306117));
  long x306122 = mallocSym_267281_302581;
  numeric_int_t x306123 = sizeof(struct SUPPLIERRecord*);
  long x306125 = x306122*(((long){x306123}));
  printf("303618 with type Pointer[SUPPLIERRecord]: %ld\n", x306125);
  long x306127 = mallocSum306017;
  mallocSum306017 = (x306127+(x306125));
  long x306130 = mallocSym_280448_302582;
  numeric_int_t x306131 = sizeof(struct SUPPLIERRecord);
  long x306133 = x306130*(((long){x306131}));
  printf("304942 with type SUPPLIERRecord: %ld\n", x306133);
  long x306135 = mallocSum306017;
  mallocSum306017 = (x306135+(x306133));
  long x306138 = mallocSym_298240_302583;
  numeric_int_t x306139 = sizeof(struct Set_AGGRecord_Q7GRPRecord);
  long x306141 = x306138*(((long){x306139}));
  printf("304743 with type Set_AGGRecord_Q7GRPRecord: %ld\n", x306141);
  long x306143 = mallocSum306017;
  mallocSum306017 = (x306143+(x306141));
  long x306146 = mallocSym_268419_302584;
  numeric_int_t x306147 = sizeof(struct AGGRecord_Q7GRPRecord);
  long x306149 = x306146*(((long){x306147}));
  printf("305040 with type AGGRecord_Q7GRPRecord: %ld\n", x306149);
  long x306151 = mallocSum306017;
  mallocSum306017 = (x306151+(x306149));
  long x306154 = mallocSym_268129_302585;
  numeric_int_t x306155 = sizeof(struct CUSTOMERRecord);
  long x306157 = x306154*(((long){x306155}));
  printf("303290 with type CUSTOMERRecord: %ld\n", x306157);
  long x306159 = mallocSum306017;
  mallocSum306017 = (x306159+(x306157));
  long x306162 = mallocSym_266742_302586;
  numeric_int_t x306163 = sizeof(char);
  long x306165 = x306162*(((long){x306163}));
  printf("302843 with type Byte: %ld\n", x306165);
  long x306167 = mallocSum306017;
  mallocSum306017 = (x306167+(x306165));
  long x306170 = mallocSym_267809_302587;
  numeric_int_t x306171 = sizeof(struct ORDERSRecord);
  long x306173 = x306170*(((long){x306171}));
  printf("302880 with type ORDERSRecord: %ld\n", x306173);
  long x306175 = mallocSum306017;
  mallocSum306017 = (x306175+(x306173));
  long x306178 = mallocSym_267005_302588;
  numeric_int_t x306179 = sizeof(char);
  long x306181 = x306178*(((long){x306179}));
  printf("303176 with type Byte: %ld\n", x306181);
  long x306183 = mallocSum306017;
  mallocSum306017 = (x306183+(x306181));
  long x306186 = mallocSym_298278_302589;
  numeric_int_t x306187 = sizeof(struct LINEITEMRecord*);
  long x306189 = x306186*(((long){x306187}));
  printf("304805 with type Pointer[LINEITEMRecord]: %ld\n", x306189);
  long x306191 = mallocSum306017;
  mallocSum306017 = (x306191+(x306189));
  long x306194 = mallocSym_266783_302590;
  numeric_int_t x306195 = sizeof(struct LINEITEMRecord);
  long x306197 = x306194*(((long){x306195}));
  printf("302901 with type LINEITEMRecord: %ld\n", x306197);
  long x306199 = mallocSum306017;
  mallocSum306017 = (x306199+(x306197));
  long x306202 = mallocSym_267233_302591;
  numeric_int_t x306203 = sizeof(numeric_int_t);
  long x306205 = x306202*(((long){x306203}));
  printf("303534 with type Int: %ld\n", x306205);
  long x306207 = mallocSum306017;
  mallocSum306017 = (x306207+(x306205));
  long x306210 = mallocSym_266763_302592;
  numeric_int_t x306211 = sizeof(char);
  long x306213 = x306210*(((long){x306211}));
  printf("302872 with type Byte: %ld\n", x306213);
  long x306215 = mallocSum306017;
  mallocSum306017 = (x306215+(x306213));
  long x306218 = mallocSym_267232_302593;
  numeric_int_t x306219 = sizeof(struct LINEITEMRecord*);
  long x306221 = x306218*(((long){x306219}));
  printf("303529 with type Pointer[LINEITEMRecord]: %ld\n", x306221);
  long x306223 = mallocSum306017;
  mallocSum306017 = (x306223+(x306221));
  long x306226 = mallocSym_267191_302594;
  numeric_int_t x306227 = sizeof(char);
  long x306229 = x306226*(((long){x306227}));
  printf("303441 with type Byte: %ld\n", x306229);
  long x306231 = mallocSum306017;
  mallocSum306017 = (x306231+(x306229));
  long x306234 = mallocSym_266919_302595;
  numeric_int_t x306235 = sizeof(char);
  long x306237 = x306234*(((long){x306235}));
  printf("303051 with type Byte: %ld\n", x306237);
  long x306239 = mallocSum306017;
  mallocSum306017 = (x306239+(x306237));
  long x306242 = mallocSym_267346_302596;
  numeric_int_t x306243 = sizeof(double*);
  long x306245 = x306242*(((long){x306243}));
  printf("303733 with type Pointer[Double]: %ld\n", x306245);
  long x306247 = mallocSum306017;
  mallocSum306017 = (x306247+(x306245));
  long x306250 = mallocSym_298456_302597;
  numeric_int_t x306251 = sizeof(struct AGGRecord_Q7GRPRecord);
  long x306253 = x306250*(((long){x306251}));
  printf("305029 with type AGGRecord_Q7GRPRecord: %ld\n", x306253);
  long x306255 = mallocSum306017;
  mallocSum306017 = (x306255+(x306253));
  long x306258 = mallocSym_298279_302598;
  numeric_int_t x306259 = sizeof(numeric_int_t);
  long x306261 = x306258*(((long){x306259}));
  printf("304810 with type Int: %ld\n", x306261);
  long x306263 = mallocSum306017;
  mallocSum306017 = (x306263+(x306261));
  long x306266 = mallocSym_267170_302599;
  numeric_int_t x306267 = sizeof(char);
  long x306269 = x306266*(((long){x306267}));
  printf("303412 with type Byte: %ld\n", x306269);
  long x306271 = mallocSum306017;
  mallocSum306017 = (x306271+(x306269));
  long x306274 = mallocSym_267352_302600;
  numeric_int_t x306275 = sizeof(double);
  long x306277 = x306274*(((long){x306275}));
  printf("305019 with type Double: %ld\n", x306277);
  long x306279 = mallocSum306017;
  mallocSum306017 = (x306279+(x306277));
  long x306282 = mallocSym_267257_302601;
  numeric_int_t x306283 = sizeof(struct LINEITEMRecord);
  long x306285 = x306282*(((long){x306283}));
  printf("304844 with type LINEITEMRecord: %ld\n", x306285);
  long x306287 = mallocSum306017;
  mallocSum306017 = (x306287+(x306285));
  long x306290 = mallocSym_298444_302602;
  numeric_int_t x306291 = sizeof(double*);
  long x306293 = x306290*(((long){x306291}));
  printf("305009 with type Pointer[Double]: %ld\n", x306293);
  long x306295 = mallocSum306017;
  mallocSum306017 = (x306295+(x306293));
  long x306298 = mallocSym_298353_302603;
  numeric_int_t x306299 = sizeof(numeric_int_t);
  long x306301 = x306298*(((long){x306299}));
  printf("304899 with type Int: %ld\n", x306301);
  long x306303 = mallocSum306017;
  mallocSum306017 = (x306303+(x306301));
  long x306306 = mallocSym_267999_302604;
  numeric_int_t x306307 = sizeof(struct LINEITEMRecord);
  long x306309 = x306306*(((long){x306307}));
  printf("303107 with type LINEITEMRecord: %ld\n", x306309);
  long x306311 = mallocSum306017;
  mallocSum306017 = (x306311+(x306309));
  long x306314 = mallocSym_267682_302605;
  numeric_int_t x306315 = sizeof(struct NATIONRecord);
  long x306317 = x306314*(((long){x306315}));
  printf("302716 with type NATIONRecord: %ld\n", x306317);
  long x306319 = mallocSum306017;
  mallocSum306017 = (x306319+(x306317));
  long x306322 = mallocSym_280304_302606;
  numeric_int_t x306323 = sizeof(struct Set_AGGRecord_Q7GRPRecord);
  long x306325 = x306322*(((long){x306323}));
  printf("304772 with type Set_AGGRecord_Q7GRPRecord: %ld\n", x306325);
  long x306327 = mallocSum306017;
  mallocSum306017 = (x306327+(x306325));
  long x306330 = mallocSym_267209_302607;
  numeric_int_t x306331 = sizeof(struct Set_AGGRecord_Q7GRPRecord);
  long x306333 = x306330*(((long){x306331}));
  printf("303467 with type Set_AGGRecord_Q7GRPRecord: %ld\n", x306333);
  long x306335 = mallocSum306017;
  mallocSum306017 = (x306335+(x306333));
  long x306338 = mallocSym_268388_302608;
  numeric_int_t x306339 = sizeof(struct Q7GRPRecord);
  long x306341 = x306338*(((long){x306339}));
  printf("304994 with type Q7GRPRecord: %ld\n", x306341);
  long x306343 = mallocSum306017;
  mallocSum306017 = (x306343+(x306341));
  long x306346 = mallocSym_266935_302609;
  numeric_int_t x306347 = sizeof(char);
  long x306349 = x306346*(((long){x306347}));
  printf("303075 with type Byte: %ld\n", x306349);
  long x306351 = mallocSum306017;
  mallocSum306017 = (x306351+(x306349));
  long x306354 = mallocSym_298427_302610;
  numeric_int_t x306355 = sizeof(struct Q7GRPRecord);
  long x306357 = x306354*(((long){x306355}));
  printf("304984 with type Q7GRPRecord: %ld\n", x306357);
  long x306359 = mallocSum306017;
  mallocSum306017 = (x306359+(x306357));
  long x306362 = mallocSym_267220_302611;
  numeric_int_t x306363 = sizeof(struct ORDERSRecord);
  long x306365 = x306362*(((long){x306363}));
  printf("303507 with type ORDERSRecord: %ld\n", x306365);
  long x306367 = mallocSum306017;
  mallocSum306017 = (x306367+(x306365));
  long x306370 = mallocSym_267282_302612;
  numeric_int_t x306371 = sizeof(numeric_int_t);
  long x306373 = x306370*(((long){x306371}));
  printf("303623 with type Int: %ld\n", x306373);
  long x306375 = mallocSum306017;
  mallocSum306017 = (x306375+(x306373));
  long x306378 = mallocSym_267306_302613;
  numeric_int_t x306379 = sizeof(struct SUPPLIERRecord);
  long x306381 = x306378*(((long){x306379}));
  printf("304933 with type SUPPLIERRecord: %ld\n", x306381);
  long x306383 = mallocSum306017;
  mallocSum306017 = (x306383+(x306381));
  long x306386 = mallocSym_266582_302614;
  numeric_int_t x306387 = sizeof(struct NATIONRecord);
  long x306389 = x306386*(((long){x306387}));
  printf("302630 with type NATIONRecord: %ld\n", x306389);
  long x306391 = mallocSum306017;
  mallocSum306017 = (x306391+(x306389));
  long x306394 = mallocSym_280303_302615;
  numeric_int_t x306395 = sizeof(struct AGGRecord_Q7GRPRecord);
  long x306397 = x306394*(((long){x306395}));
  printf("304767 with type AGGRecord_Q7GRPRecord: %ld\n", x306397);
  long x306399 = mallocSum306017;
  mallocSum306017 = (x306399+(x306397));
  long x306402 = mallocSym_266726_302616;
  numeric_int_t x306403 = sizeof(char);
  long x306405 = x306402*(((long){x306403}));
  printf("302819 with type Byte: %ld\n", x306405);
  long x306407 = mallocSum306017;
  mallocSum306017 = (x306407+(x306405));
  long x306410 = mallocSym_267063_302617;
  numeric_int_t x306411 = sizeof(char);
  long x306413 = x306410*(((long){x306411}));
  printf("303258 with type Byte: %ld\n", x306413);
  long x306415 = mallocSum306017;
  mallocSum306017 = (x306415+(x306413));
  long x306418 = mallocSym_267331_302618;
  numeric_int_t x306419 = sizeof(struct Q7GRPRecord);
  long x306421 = x306418*(((long){x306419}));
  printf("303708 with type Q7GRPRecord: %ld\n", x306421);
  long x306423 = mallocSum306017;
  mallocSum306017 = (x306423+(x306421));
  long x306426 = mallocSym_268243_302619;
  numeric_int_t x306427 = sizeof(struct SUPPLIERRecord);
  long x306429 = x306426*(((long){x306427}));
  printf("303449 with type SUPPLIERRecord: %ld\n", x306429);
  long x306431 = mallocSum306017;
  mallocSum306017 = (x306431+(x306429));
  long x306434 = mallocSym_266617_302620;
  numeric_int_t x306435 = sizeof(char);
  long x306437 = x306434*(((long){x306435}));
  printf("302679 with type Byte: %ld\n", x306437);
  long x306439 = mallocSum306017;
  mallocSum306017 = (x306439+(x306437));
  long x306442 = mallocSym_267213_302621;
  numeric_int_t x306443 = sizeof(struct AGGRecord_Q7GRPRecord);
  long x306445 = x306442*(((long){x306443}));
  printf("304750 with type AGGRecord_Q7GRPRecord: %ld\n", x306445);
  long x306447 = mallocSum306017;
  mallocSum306017 = (x306447+(x306445));
  long x306450 = mallocSym_267099_302622;
  numeric_int_t x306451 = sizeof(struct SUPPLIERRecord);
  long x306453 = x306450*(((long){x306451}));
  printf("303311 with type SUPPLIERRecord: %ld\n", x306453);
  long x306455 = mallocSum306017;
  mallocSum306017 = (x306455+(x306453));
  long x306458 = mallocSym_266951_302623;
  numeric_int_t x306459 = sizeof(char);
  long x306461 = x306458*(((long){x306459}));
  printf("303099 with type Byte: %ld\n", x306461);
  long x306463 = mallocSum306017;
  mallocSum306017 = (x306463+(x306461));
  long x306466 = mallocSum306017;
  printf("total: %ld\n", x306466);
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x298527(struct AGGRecord_Q7GRPRecord* x250254, struct AGGRecord_Q7GRPRecord* x250255) {
  struct Q7GRPRecord* x250256 = x250254->key;
  struct Q7GRPRecord* x250257 = x250255->key;
  numeric_int_t x278266 = strcmp((x250256->SUPP_NATION), (x250257->SUPP_NATION));
  /* VAR */ numeric_int_t ite285934 = 0;
  if((x278266!=(0))) {
    ite285934 = x278266;
  } else {
    
    numeric_int_t x285938 = strcmp((x250256->CUST_NATION), (x250257->CUST_NATION));
    /* VAR */ numeric_int_t ite285941 = 0;
    if((x285938!=(0))) {
      ite285941 = x285938;
    } else {
      
      numeric_int_t x285943 = x250256->L_YEAR;
      numeric_int_t x285944 = x250257->L_YEAR;
      /* VAR */ numeric_int_t ite285947 = 0;
      if((x285943<(x285944))) {
        ite285947 = -1;
      } else {
        
        /* VAR */ numeric_int_t ite285951 = 0;
        if((x285943>(x285944))) {
          ite285951 = 1;
        } else {
          
          ite285951 = 0;
        };
        numeric_int_t x285950 = ite285951;
        ite285947 = x285950;
      };
      numeric_int_t x285946 = ite285947;
      ite285941 = x285946;
    };
    numeric_int_t x285940 = ite285941;
    ite285934 = x285940;
  };
  numeric_int_t x250273 = ite285934;
  return x250273; 
}

numeric_int_t x270777(void* x270771, void* x270772, void* x270773) {
  pointer_assign(((struct AGGRecord_Q7GRPRecord**){x270773}), ((struct AGGRecord_Q7GRPRecord*){x270772}));
  return 1; 
}
