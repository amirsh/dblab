#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_Q10GRPRecord;
  struct Q10GRPRecord;
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
  
  struct LINEITEMRecord {
  int L_ORDERKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  char L_RETURNFLAG;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  int O_ORDERDATE;
  };
  
  struct CUSTOMERRecord {
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_COMMENT;
  };
  
  


int x47718(struct AGGRecord_Q10GRPRecord* x267, struct AGGRecord_Q10GRPRecord* x268);

int x19508(void* x19502, void* x19503, void* x19504);
/* GLOBAL VARS */

struct timeval x14051;
int main(int argc, char** argv) {
  FILE* x14636 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x14637 = 0;
  int x14638 = x14637;
  int* x14639 = &x14638;
  int x14640 = fscanf(x14636, "%d", x14639);
  pclose(x14636);
  struct LINEITEMRecord* x16242 = (struct LINEITEMRecord*)malloc(x14638 * sizeof(struct LINEITEMRecord));
  memset(x16242, 0, x14638 * sizeof(struct LINEITEMRecord));
  int x14644 = O_RDONLY;
  int x14645 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x14644);
  struct stat x14646 = (struct stat){0};
  /* VAR */ struct stat x14647 = x14646;
  struct stat x14648 = x14647;
  struct stat* x14649 = &x14648;
  int x14650 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x14649);
  int x14652 = PROT_READ;
  int x14653 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x14649->st_size), x14652, x14653, x14645, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite33679 = 0;
    if((x5<(x14638))) {
      char x45748 = *x3;
      ite33679 = (x45748!=('\0'));
    } else {
      
      ite33679 = 0;
    };
    int x31218 = ite33679;
    if (!(x31218)) break; 
    
    /* VAR */ int x14661 = 0;
    int x14662 = x14661;
    int* x14663 = &x14662;
    char* x14664 = strntoi_unchecked(x3, x14663);
    x3 = x14664;
    /* VAR */ int x14666 = 0;
    int x14667 = x14666;
    int* x14668 = &x14667;
    char* x14669 = strntoi_unchecked(x3, x14668);
    x3 = x14669;
    /* VAR */ int x14671 = 0;
    int x14672 = x14671;
    int* x14673 = &x14672;
    char* x14674 = strntoi_unchecked(x3, x14673);
    x3 = x14674;
    /* VAR */ int x14676 = 0;
    int x14677 = x14676;
    int* x14678 = &x14677;
    char* x14679 = strntoi_unchecked(x3, x14678);
    x3 = x14679;
    /* VAR */ double x14681 = 0.0;
    double x14682 = x14681;
    double* x14683 = &x14682;
    char* x14684 = strntod_unchecked(x3, x14683);
    x3 = x14684;
    /* VAR */ double x14686 = 0.0;
    double x14687 = x14686;
    double* x14688 = &x14687;
    char* x14689 = strntod_unchecked(x3, x14688);
    x3 = x14689;
    /* VAR */ double x14691 = 0.0;
    double x14692 = x14691;
    double* x14693 = &x14692;
    char* x14694 = strntod_unchecked(x3, x14693);
    x3 = x14694;
    /* VAR */ double x14696 = 0.0;
    double x14697 = x14696;
    double* x14698 = &x14697;
    char* x14699 = strntod_unchecked(x3, x14698);
    x3 = x14699;
    char x14701 = *x3;
    /* VAR */ char x14702 = x14701;
    x3 += 1;
    x3 += 1;
    char x14705 = x14702;
    char x14706 = *x3;
    /* VAR */ char x14707 = x14706;
    x3 += 1;
    x3 += 1;
    /* VAR */ int x14711 = 0;
    int x14712 = x14711;
    int* x14713 = &x14712;
    char* x14714 = strntoi_unchecked(x3, x14713);
    x3 = x14714;
    /* VAR */ int x14716 = 0;
    int x14717 = x14716;
    int* x14718 = &x14717;
    char* x14719 = strntoi_unchecked(x3, x14718);
    x3 = x14719;
    /* VAR */ int x14721 = 0;
    int x14722 = x14721;
    int* x14723 = &x14722;
    char* x14724 = strntoi_unchecked(x3, x14723);
    x3 = x14724;
    /* VAR */ int x14730 = 0;
    int x14731 = x14730;
    int* x14732 = &x14731;
    char* x14733 = strntoi_unchecked(x3, x14732);
    x3 = x14733;
    /* VAR */ int x14735 = 0;
    int x14736 = x14735;
    int* x14737 = &x14736;
    char* x14738 = strntoi_unchecked(x3, x14737);
    x3 = x14738;
    /* VAR */ int x14740 = 0;
    int x14741 = x14740;
    int* x14742 = &x14741;
    char* x14743 = strntoi_unchecked(x3, x14742);
    x3 = x14743;
    /* VAR */ int x14749 = 0;
    int x14750 = x14749;
    int* x14751 = &x14750;
    char* x14752 = strntoi_unchecked(x3, x14751);
    x3 = x14752;
    /* VAR */ int x14754 = 0;
    int x14755 = x14754;
    int* x14756 = &x14755;
    char* x14757 = strntoi_unchecked(x3, x14756);
    x3 = x14757;
    /* VAR */ int x14759 = 0;
    int x14760 = x14759;
    int* x14761 = &x14760;
    char* x14762 = strntoi_unchecked(x3, x14761);
    x3 = x14762;
    char* x16368 = (char*)malloc(26 * sizeof(char));
    memset(x16368, 0, 26 * sizeof(char));
    /* VAR */ char* x14769 = x3;
    while(1) {
      
      char x14770 = *x3;
      /* VAR */ int ite33800 = 0;
      if((x14770!=('|'))) {
        char x45868 = *x3;
        ite33800 = (x45868!=('\n'));
      } else {
        
        ite33800 = 0;
      };
      int x31332 = ite33800;
      if (!(x31332)) break; 
      
      x3 += 1;
    };
    char* x14777 = x14769;
    int x14778 = x3 - x14777;
    char* x14779 = x14769;
    char* x14780 = strncpy(x16368, x14779, x14778);
    x3 += 1;
    char* x16386 = (char*)malloc(11 * sizeof(char));
    memset(x16386, 0, 11 * sizeof(char));
    /* VAR */ char* x14788 = x3;
    while(1) {
      
      char x14789 = *x3;
      /* VAR */ int ite33823 = 0;
      if((x14789!=('|'))) {
        char x45890 = *x3;
        ite33823 = (x45890!=('\n'));
      } else {
        
        ite33823 = 0;
      };
      int x31348 = ite33823;
      if (!(x31348)) break; 
      
      x3 += 1;
    };
    char* x14796 = x14788;
    int x14797 = x3 - x14796;
    char* x14798 = x14788;
    char* x14799 = strncpy(x16386, x14798, x14797);
    x3 += 1;
    char* x16404 = (char*)malloc(45 * sizeof(char));
    memset(x16404, 0, 45 * sizeof(char));
    /* VAR */ char* x14807 = x3;
    while(1) {
      
      char x14808 = *x3;
      /* VAR */ int ite33846 = 0;
      if((x14808!=('|'))) {
        char x45912 = *x3;
        ite33846 = (x45912!=('\n'));
      } else {
        
        ite33846 = 0;
      };
      int x31364 = ite33846;
      if (!(x31364)) break; 
      
      x3 += 1;
    };
    char* x14815 = x14807;
    int x14816 = x3 - x14815;
    char* x14817 = x14807;
    char* x14818 = strncpy(x16404, x14817, x14816);
    x3 += 1;
    struct LINEITEMRecord* x17236 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x17236, 0, 1 * sizeof(struct LINEITEMRecord));
    x17236->L_ORDERKEY = x14662; x17236->L_EXTENDEDPRICE = x14687; x17236->L_DISCOUNT = x14692; x17236->L_RETURNFLAG = x14705;
    int x47 = x4;
    struct LINEITEMRecord x16424 = *x17236;
    *(x16242 + x47) = x16424;
    struct LINEITEMRecord* x16426 = &(x16242[x47]);
    x17236 = x16426;
    int x49 = x4;
    x4 = (x49+(1));
  };
  FILE* x14831 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x14832 = 0;
  int x14833 = x14832;
  int* x14834 = &x14833;
  int x14835 = fscanf(x14831, "%d", x14834);
  pclose(x14831);
  struct NATIONRecord* x16437 = (struct NATIONRecord*)malloc(x14833 * sizeof(struct NATIONRecord));
  memset(x16437, 0, x14833 * sizeof(struct NATIONRecord));
  int x14839 = O_RDONLY;
  int x14840 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x14839);
  /* VAR */ struct stat x14841 = x14646;
  struct stat x14842 = x14841;
  struct stat* x14843 = &x14842;
  int x14844 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x14843);
  int x14846 = PROT_READ;
  int x14847 = MAP_PRIVATE;
  char* x55 = mmap(NULL, (x14843->st_size), x14846, x14847, x14840, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    /* VAR */ int ite33896 = 0;
    if((x57<(x14833))) {
      char x45961 = *x55;
      ite33896 = (x45961!=('\0'));
    } else {
      
      ite33896 = 0;
    };
    int x31407 = ite33896;
    if (!(x31407)) break; 
    
    /* VAR */ int x14855 = 0;
    int x14856 = x14855;
    int* x14857 = &x14856;
    char* x14858 = strntoi_unchecked(x55, x14857);
    x55 = x14858;
    char* x16460 = (char*)malloc(26 * sizeof(char));
    memset(x16460, 0, 26 * sizeof(char));
    /* VAR */ char* x14861 = x55;
    while(1) {
      
      char x14862 = *x55;
      /* VAR */ int ite33915 = 0;
      if((x14862!=('|'))) {
        char x45979 = *x55;
        ite33915 = (x45979!=('\n'));
      } else {
        
        ite33915 = 0;
      };
      int x31419 = ite33915;
      if (!(x31419)) break; 
      
      x55 += 1;
    };
    char* x14869 = x14861;
    int x14870 = x55 - x14869;
    char* x14871 = x14861;
    char* x14872 = strncpy(x16460, x14871, x14870);
    x55 += 1;
    /* VAR */ int x14879 = 0;
    int x14880 = x14879;
    int* x14881 = &x14880;
    char* x14882 = strntoi_unchecked(x55, x14881);
    x55 = x14882;
    char* x16483 = (char*)malloc(153 * sizeof(char));
    memset(x16483, 0, 153 * sizeof(char));
    /* VAR */ char* x14885 = x55;
    while(1) {
      
      char x14886 = *x55;
      /* VAR */ int ite33943 = 0;
      if((x14886!=('|'))) {
        char x46006 = *x55;
        ite33943 = (x46006!=('\n'));
      } else {
        
        ite33943 = 0;
      };
      int x31440 = ite33943;
      if (!(x31440)) break; 
      
      x55 += 1;
    };
    char* x14893 = x14885;
    int x14894 = x55 - x14893;
    char* x14895 = x14885;
    char* x14896 = strncpy(x16483, x14895, x14894);
    x55 += 1;
    struct NATIONRecord* x17317 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x17317, 0, 1 * sizeof(struct NATIONRecord));
    x17317->N_NATIONKEY = x14856; x17317->N_NAME = x16460;
    int x80 = x56;
    struct NATIONRecord x16503 = *x17317;
    *(x16437 + x80) = x16503;
    struct NATIONRecord* x16505 = &(x16437[x80]);
    x17317 = x16505;
    int x82 = x56;
    x56 = (x82+(1));
  };
  FILE* x14909 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x14910 = 0;
  int x14911 = x14910;
  int* x14912 = &x14911;
  int x14913 = fscanf(x14909, "%d", x14912);
  pclose(x14909);
  struct CUSTOMERRecord* x16516 = (struct CUSTOMERRecord*)malloc(x14911 * sizeof(struct CUSTOMERRecord));
  memset(x16516, 0, x14911 * sizeof(struct CUSTOMERRecord));
  int x14917 = O_RDONLY;
  int x14918 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x14917);
  /* VAR */ struct stat x14919 = x14646;
  struct stat x14920 = x14919;
  struct stat* x14921 = &x14920;
  int x14922 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x14921);
  int x14924 = PROT_READ;
  int x14925 = MAP_PRIVATE;
  char* x88 = mmap(NULL, (x14921->st_size), x14924, x14925, x14918, 0);
  /* VAR */ int x89 = 0;
  while(1) {
    
    int x90 = x89;
    /* VAR */ int ite33993 = 0;
    if((x90<(x14911))) {
      char x46055 = *x88;
      ite33993 = (x46055!=('\0'));
    } else {
      
      ite33993 = 0;
    };
    int x31483 = ite33993;
    if (!(x31483)) break; 
    
    /* VAR */ int x14933 = 0;
    int x14934 = x14933;
    int* x14935 = &x14934;
    char* x14936 = strntoi_unchecked(x88, x14935);
    x88 = x14936;
    char* x16539 = (char*)malloc(26 * sizeof(char));
    memset(x16539, 0, 26 * sizeof(char));
    /* VAR */ char* x14939 = x88;
    while(1) {
      
      char x14940 = *x88;
      /* VAR */ int ite34012 = 0;
      if((x14940!=('|'))) {
        char x46073 = *x88;
        ite34012 = (x46073!=('\n'));
      } else {
        
        ite34012 = 0;
      };
      int x31495 = ite34012;
      if (!(x31495)) break; 
      
      x88 += 1;
    };
    char* x14947 = x14939;
    int x14948 = x88 - x14947;
    char* x14949 = x14939;
    char* x14950 = strncpy(x16539, x14949, x14948);
    x88 += 1;
    char* x16557 = (char*)malloc(41 * sizeof(char));
    memset(x16557, 0, 41 * sizeof(char));
    /* VAR */ char* x14958 = x88;
    while(1) {
      
      char x14959 = *x88;
      /* VAR */ int ite34035 = 0;
      if((x14959!=('|'))) {
        char x46095 = *x88;
        ite34035 = (x46095!=('\n'));
      } else {
        
        ite34035 = 0;
      };
      int x31511 = ite34035;
      if (!(x31511)) break; 
      
      x88 += 1;
    };
    char* x14966 = x14958;
    int x14967 = x88 - x14966;
    char* x14968 = x14958;
    char* x14969 = strncpy(x16557, x14968, x14967);
    x88 += 1;
    /* VAR */ int x14976 = 0;
    int x14977 = x14976;
    int* x14978 = &x14977;
    char* x14979 = strntoi_unchecked(x88, x14978);
    x88 = x14979;
    char* x16580 = (char*)malloc(16 * sizeof(char));
    memset(x16580, 0, 16 * sizeof(char));
    /* VAR */ char* x14982 = x88;
    while(1) {
      
      char x14983 = *x88;
      /* VAR */ int ite34063 = 0;
      if((x14983!=('|'))) {
        char x46122 = *x88;
        ite34063 = (x46122!=('\n'));
      } else {
        
        ite34063 = 0;
      };
      int x31532 = ite34063;
      if (!(x31532)) break; 
      
      x88 += 1;
    };
    char* x14990 = x14982;
    int x14991 = x88 - x14990;
    char* x14992 = x14982;
    char* x14993 = strncpy(x16580, x14992, x14991);
    x88 += 1;
    /* VAR */ double x15000 = 0.0;
    double x15001 = x15000;
    double* x15002 = &x15001;
    char* x15003 = strntod_unchecked(x88, x15002);
    x88 = x15003;
    char* x16603 = (char*)malloc(11 * sizeof(char));
    memset(x16603, 0, 11 * sizeof(char));
    /* VAR */ char* x15006 = x88;
    while(1) {
      
      char x15007 = *x88;
      /* VAR */ int ite34091 = 0;
      if((x15007!=('|'))) {
        char x46149 = *x88;
        ite34091 = (x46149!=('\n'));
      } else {
        
        ite34091 = 0;
      };
      int x31553 = ite34091;
      if (!(x31553)) break; 
      
      x88 += 1;
    };
    char* x15014 = x15006;
    int x15015 = x88 - x15014;
    char* x15016 = x15006;
    char* x15017 = strncpy(x16603, x15016, x15015);
    x88 += 1;
    char* x16621 = (char*)malloc(118 * sizeof(char));
    memset(x16621, 0, 118 * sizeof(char));
    /* VAR */ char* x15025 = x88;
    while(1) {
      
      char x15026 = *x88;
      /* VAR */ int ite34114 = 0;
      if((x15026!=('|'))) {
        char x46171 = *x88;
        ite34114 = (x46171!=('\n'));
      } else {
        
        ite34114 = 0;
      };
      int x31569 = ite34114;
      if (!(x31569)) break; 
      
      x88 += 1;
    };
    char* x15033 = x15025;
    int x15034 = x88 - x15033;
    char* x15035 = x15025;
    char* x15036 = strncpy(x16621, x15035, x15034);
    x88 += 1;
    struct CUSTOMERRecord* x17457 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x17457, 0, 1 * sizeof(struct CUSTOMERRecord));
    x17457->C_CUSTKEY = x14934; x17457->C_NAME = x16539; x17457->C_ADDRESS = x16557; x17457->C_NATIONKEY = x14977; x17457->C_PHONE = x16580; x17457->C_ACCTBAL = x15001; x17457->C_COMMENT = x16621;
    int x138 = x89;
    struct CUSTOMERRecord x16641 = *x17457;
    *(x16516 + x138) = x16641;
    struct CUSTOMERRecord* x16643 = &(x16516[x138]);
    x17457 = x16643;
    int x140 = x89;
    x89 = (x140+(1));
  };
  FILE* x15049 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x15050 = 0;
  int x15051 = x15050;
  int* x15052 = &x15051;
  int x15053 = fscanf(x15049, "%d", x15052);
  pclose(x15049);
  struct ORDERSRecord* x16654 = (struct ORDERSRecord*)malloc(x15051 * sizeof(struct ORDERSRecord));
  memset(x16654, 0, x15051 * sizeof(struct ORDERSRecord));
  int x15057 = O_RDONLY;
  int x15058 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x15057);
  /* VAR */ struct stat x15059 = x14646;
  struct stat x15060 = x15059;
  struct stat* x15061 = &x15060;
  int x15062 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x15061);
  int x15064 = PROT_READ;
  int x15065 = MAP_PRIVATE;
  char* x146 = mmap(NULL, (x15061->st_size), x15064, x15065, x15058, 0);
  /* VAR */ int x147 = 0;
  while(1) {
    
    int x148 = x147;
    /* VAR */ int ite34164 = 0;
    if((x148<(x15051))) {
      char x46220 = *x146;
      ite34164 = (x46220!=('\0'));
    } else {
      
      ite34164 = 0;
    };
    int x31612 = ite34164;
    if (!(x31612)) break; 
    
    /* VAR */ int x15073 = 0;
    int x15074 = x15073;
    int* x15075 = &x15074;
    char* x15076 = strntoi_unchecked(x146, x15075);
    x146 = x15076;
    /* VAR */ int x15078 = 0;
    int x15079 = x15078;
    int* x15080 = &x15079;
    char* x15081 = strntoi_unchecked(x146, x15080);
    x146 = x15081;
    char x15083 = *x146;
    /* VAR */ char x15084 = x15083;
    x146 += 1;
    x146 += 1;
    /* VAR */ double x15088 = 0.0;
    double x15089 = x15088;
    double* x15090 = &x15089;
    char* x15091 = strntod_unchecked(x146, x15090);
    x146 = x15091;
    /* VAR */ int x15093 = 0;
    int x15094 = x15093;
    int* x15095 = &x15094;
    char* x15096 = strntoi_unchecked(x146, x15095);
    x146 = x15096;
    /* VAR */ int x15098 = 0;
    int x15099 = x15098;
    int* x15100 = &x15099;
    char* x15101 = strntoi_unchecked(x146, x15100);
    x146 = x15101;
    /* VAR */ int x15103 = 0;
    int x15104 = x15103;
    int* x15105 = &x15104;
    char* x15106 = strntoi_unchecked(x146, x15105);
    x146 = x15106;
    char* x16711 = (char*)malloc(16 * sizeof(char));
    memset(x16711, 0, 16 * sizeof(char));
    /* VAR */ char* x15113 = x146;
    while(1) {
      
      char x15114 = *x146;
      /* VAR */ int ite34217 = 0;
      if((x15114!=('|'))) {
        char x46272 = *x146;
        ite34217 = (x46272!=('\n'));
      } else {
        
        ite34217 = 0;
      };
      int x31658 = ite34217;
      if (!(x31658)) break; 
      
      x146 += 1;
    };
    char* x15121 = x15113;
    int x15122 = x146 - x15121;
    char* x15123 = x15113;
    char* x15124 = strncpy(x16711, x15123, x15122);
    x146 += 1;
    char* x16729 = (char*)malloc(16 * sizeof(char));
    memset(x16729, 0, 16 * sizeof(char));
    /* VAR */ char* x15132 = x146;
    while(1) {
      
      char x15133 = *x146;
      /* VAR */ int ite34240 = 0;
      if((x15133!=('|'))) {
        char x46294 = *x146;
        ite34240 = (x46294!=('\n'));
      } else {
        
        ite34240 = 0;
      };
      int x31674 = ite34240;
      if (!(x31674)) break; 
      
      x146 += 1;
    };
    char* x15140 = x15132;
    int x15141 = x146 - x15140;
    char* x15142 = x15132;
    char* x15143 = strncpy(x16729, x15142, x15141);
    x146 += 1;
    /* VAR */ int x15150 = 0;
    int x15151 = x15150;
    int* x15152 = &x15151;
    char* x15153 = strntoi_unchecked(x146, x15152);
    x146 = x15153;
    char* x16752 = (char*)malloc(80 * sizeof(char));
    memset(x16752, 0, 80 * sizeof(char));
    /* VAR */ char* x15156 = x146;
    while(1) {
      
      char x15157 = *x146;
      /* VAR */ int ite34268 = 0;
      if((x15157!=('|'))) {
        char x46321 = *x146;
        ite34268 = (x46321!=('\n'));
      } else {
        
        ite34268 = 0;
      };
      int x31695 = ite34268;
      if (!(x31695)) break; 
      
      x146 += 1;
    };
    char* x15164 = x15156;
    int x15165 = x146 - x15164;
    char* x15166 = x15156;
    char* x15167 = strncpy(x16752, x15166, x15165);
    x146 += 1;
    struct ORDERSRecord* x17590 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x17590, 0, 1 * sizeof(struct ORDERSRecord));
    x17590->O_ORDERKEY = x15074; x17590->O_CUSTKEY = x15079; x17590->O_ORDERDATE = (((x15094*(10000))+((x15099*(100))))+(x15104));
    int x182 = x147;
    struct ORDERSRecord x16772 = *x17590;
    *(x16654 + x182) = x16772;
    struct ORDERSRecord* x16774 = &(x16654[x182]);
    x17590 = x16774;
    int x184 = x147;
    x147 = (x184+(1));
  };
  int x189 = 0;
  for(; x189 < 1 ; x189 += 1) {
    
    /* VAR */ int x47554 = 0;
    void* x47555 = (void*)malloc(2097152 * sizeof(void));
    memset(x47555, 0, 2097152 * sizeof(void));
    struct AGGRecord_Q10GRPRecord* x47556 = (struct AGGRecord_Q10GRPRecord*)malloc(2097152 * sizeof(struct AGGRecord_Q10GRPRecord));
    memset(x47556, 0, 2097152 * sizeof(struct AGGRecord_Q10GRPRecord));
    struct LINEITEMRecord** x47557 = (struct LINEITEMRecord**)malloc(60000000 * sizeof(struct LINEITEMRecord*));
    memset(x47557, 0, 60000000 * sizeof(struct LINEITEMRecord*));
    int* x47558 = (int*)malloc(60000000 * sizeof(int));
    memset(x47558, 0, 60000000 * sizeof(int));
    int x27746 = 0;
    for(; x27746 < 60000000 ; x27746 += 1) {
      
      struct LINEITEMRecord* x27747 = (struct LINEITEMRecord*)malloc(16 * sizeof(struct LINEITEMRecord));
      memset(x27747, 0, 16 * sizeof(struct LINEITEMRecord));
      *(x47557 + x27746) = x27747;
    };
    /* VAR */ int x47566 = 0;
    int x27767 = 0;
    for(; x27767 < x14638 ; x27767 += 1) {
      
      struct LINEITEMRecord* x27768 = &(x16242[x27767]);
      int x27770 = (x27768->L_ORDERKEY)%(60000000);
      int x27771 = x47558[x27770];
      struct LINEITEMRecord* x27772 = x47557[x27770];
      struct LINEITEMRecord x27773 = *x27768;
      *(x27772 + x27771) = x27773;
      struct LINEITEMRecord* x27775 = &(x27772[x27771]);
      x27768 = x27775;
      *(x47558 + x27770) = (x27771+(1));
      int x27779 = x47566;
      x47566 = (x27779+(1));
    };
    struct ORDERSRecord** x47598 = (struct ORDERSRecord**)malloc(96 * sizeof(struct ORDERSRecord*));
    memset(x47598, 0, 96 * sizeof(struct ORDERSRecord*));
    int* x47599 = (int*)malloc(96 * sizeof(int));
    memset(x47599, 0, 96 * sizeof(int));
    int x27791 = 0;
    for(; x27791 < 96 ; x27791 += 1) {
      
      struct ORDERSRecord* x27794 = (struct ORDERSRecord*)malloc(((x15051/(96))*(4)) * sizeof(struct ORDERSRecord));
      memset(x27794, 0, ((x15051/(96))*(4)) * sizeof(struct ORDERSRecord));
      *(x47598 + x27791) = x27794;
    };
    /* VAR */ int x47611 = 0;
    int x27820 = 0;
    for(; x27820 < x15051 ; x27820 += 1) {
      
      struct ORDERSRecord* x27821 = &(x16654[x27820]);
      int x27823 = (x27821->O_ORDERDATE)/(100);
      int x27829 = (((x27823/(100))-(1992))*(12))+(((x27823%(100))-(1)));
      int x27830 = x47599[x27829];
      struct ORDERSRecord* x27831 = x47598[x27829];
      struct ORDERSRecord x27832 = *x27821;
      *(x27831 + x27830) = x27832;
      struct ORDERSRecord* x27834 = &(x27831[x27830]);
      x27821 = x27834;
      *(x47599 + x27829) = (x27830+(1));
      int x27838 = x47611;
      x47611 = (x27838+(1));
    };
    /* VAR */ int x47655 = 0;
    struct Q10GRPRecord* x47656 = (struct Q10GRPRecord*)malloc(48000000 * sizeof(struct Q10GRPRecord));
    memset(x47656, 0, 48000000 * sizeof(struct Q10GRPRecord));
    /* VAR */ int x47657 = 0;
    while(1) {
      
      int x13873 = x47657;
      if (!((x13873<(48000000)))) break; 
      
      int x13875 = x47657;
      struct Q10GRPRecord* x17676 = (struct Q10GRPRecord*)malloc(1 * sizeof(struct Q10GRPRecord));
      memset(x17676, 0, 1 * sizeof(struct Q10GRPRecord));
      x17676->C_CUSTKEY = 0; x17676->C_NAME = ""; x17676->C_ACCTBAL = 0.0; x17676->C_PHONE = ""; x17676->N_NAME = ""; x17676->C_ADDRESS = ""; x17676->C_COMMENT = "";
      struct Q10GRPRecord x16855 = *x17676;
      *(x47656 + x13875) = x16855;
      struct Q10GRPRecord* x16857 = &(x47656[x13875]);
      x17676 = x16857;
      int x13878 = x47657;
      x47657 = (x13878+(1));
    };
    /* VAR */ int x47672 = 0;
    struct AGGRecord_Q10GRPRecord* x47673 = (struct AGGRecord_Q10GRPRecord*)malloc(48000000 * sizeof(struct AGGRecord_Q10GRPRecord));
    memset(x47673, 0, 48000000 * sizeof(struct AGGRecord_Q10GRPRecord));
    /* VAR */ int x47674 = 0;
    while(1) {
      
      int x13885 = x47674;
      if (!((x13885<(48000000)))) break; 
      
      int x13887 = x47674;
      struct Q10GRPRecord* x13888 = &(x47656[x13887]);
      struct AGGRecord_Q10GRPRecord* x17694 = (struct AGGRecord_Q10GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q10GRPRecord));
      memset(x17694, 0, 1 * sizeof(struct AGGRecord_Q10GRPRecord));
      x17694->key = x13888; x17694->aggs = 0.0;
      struct AGGRecord_Q10GRPRecord x16871 = *x17694;
      *(x47673 + x13887) = x16871;
      struct AGGRecord_Q10GRPRecord* x16873 = &(x47673[x13887]);
      x17694 = x16873;
      int x13891 = x47674;
      x47674 = (x13891+(1));
    };
    /* VAR */ struct timeval x47690 = x14051;
    struct timeval x47691 = x47690;
    /* VAR */ struct timeval x47692 = x14051;
    struct timeval x47693 = x47692;
    /* VAR */ struct timeval x47694 = x14051;
    struct timeval x47695 = x47694;
    struct timeval* x47696 = &x47693;
    gettimeofday(x47696, NULL);
    /* VAR */ int x47698 = 0;
    int* x47737 = &(x47718);
    GTree* x47738 = g_tree_new(x47737);
    /* VAR */ int x47739 = 0;
    /* VAR */ int x47740 = 0;
    int x28275 = 34;
    for(; x28275 < 38 ; x28275 += 1) {
      
      int x28276 = x47599[x28275];
      struct ORDERSRecord* x28277 = x47598[x28275];
      int x28094 = 0;
      for(; x28094 < x28276 ; x28094 += 1) {
        
        struct ORDERSRecord* x28095 = &(x28277[x28094]);
        int x28096 = x28095->O_ORDERDATE;
        /* VAR */ int ite36196 = 0;
        if((x28096>=(19941101))) {
          ite36196 = (x28096<(19950201));
        } else {
          
          ite36196 = 0;
        };
        int x33423 = ite36196;
        if(x33423) {
          int x358 = x28095->O_ORDERKEY;
          int x10108 = x358%(60000000);
          int x10109 = x47558[x10108];
          struct LINEITEMRecord* x10110 = x47557[x10108];
          int x28009 = 0;
          for(; x28009 < x10109 ; x28009 += 1) {
            
            struct LINEITEMRecord* x28010 = &(x10110[x28009]);
            if(((x28010->L_RETURNFLAG)==('R'))) {
              if(((x28010->L_ORDERKEY)==(x358))) {
                if(((x28010->L_ORDERKEY)==(x358))) {
                  int x1584 = x28095->O_CUSTKEY;
                  struct CUSTOMERRecord* x10128 = &(x16516[(x1584-(1))]);
                  if(((x10128->C_CUSTKEY)==(x1584))) {
                    int x5620 = x10128->C_CUSTKEY;
                    if((x5620==(x1584))) {
                      int x1744 = x10128->C_NATIONKEY;
                      struct NATIONRecord* x10142 = &(x16437[(x1744-(0))]);
                      if(((x10142->N_NATIONKEY)==(x1744))) {
                        if(((x10142->N_NATIONKEY)==(x1744))) {
                          int x13969 = x47655;
                          struct Q10GRPRecord* x13970 = &(x47656[x13969]);
                          x13970->C_CUSTKEY = x5620;
                          x13970->C_NAME = (x10128->C_NAME);
                          x13970->C_ACCTBAL = (x10128->C_ACCTBAL);
                          x13970->C_PHONE = (x10128->C_PHONE);
                          x13970->N_NAME = (x10142->N_NAME);
                          x13970->C_ADDRESS = (x10128->C_ADDRESS);
                          x13970->C_COMMENT = (x10128->C_COMMENT);
                          int x13978 = x47655;
                          x47655 = (x13978+(1));
                          int x22835 = x13970->C_CUSTKEY;
                          struct AGGRecord_Q10GRPRecord* x7000 = &(x47556[x22835]);
                          int x7001 = x47554;
                          if((x22835>(x7001))) {
                            x47554 = x22835;
                          };
                          /* VAR */ int ite36358 = 0;
                          if((x7000!=(NULL))) {
                            struct Q10GRPRecord* x48604 = x7000->key;
                            /* VAR */ int x48606 = 0;
                            if((x48604!=(NULL))) {
                              char* x48608 = x48604->C_NAME;
                              /* VAR */ int x48610 = 0;
                              if((x48608!=(NULL))) {
                                int x48612 = strcmp(x48608, "");
                                x48610 = x48612;
                              } else {
                                
                                x48610 = 0;
                              };
                              int x48616 = x48610;
                              x48606 = x48616;
                            } else {
                              
                              x48606 = 0;
                            };
                            int x48620 = x48606;
                            ite36358 = x48620;
                          } else {
                            
                            ite36358 = 0;
                          };
                          int x33570 = ite36358;
                          /* VAR */ struct AGGRecord_Q10GRPRecord* ite33572 = 0;
                          if(x33570) {
                            ite33572 = x7000;
                          } else {
                            
                            /* VAR */ double x33574 = 0;
                            /* VAR */ double x33575 = 0;
                            double x33576 = x33575;
                            int x33577 = x47672;
                            struct AGGRecord_Q10GRPRecord* x33578 = &(x47673[x33577]);
                            x33578->key = x13970;
                            x33578->aggs = x33576;
                            int x33581 = x47672;
                            x47672 = (x33581+(1));
                            struct AGGRecord_Q10GRPRecord x33584 = *x33578;
                            *(x47556 + x22835) = x33584;
                            struct AGGRecord_Q10GRPRecord* x33586 = &(x47556[x22835]);
                            x33578 = x33586;
                            ite33572 = x33578;
                          };
                          struct AGGRecord_Q10GRPRecord* x7008 = ite33572;
                          double x12060 = x7008->aggs;
                          x7008->aggs = (x12060+(((x28010->L_EXTENDEDPRICE)*((1.0-((x28010->L_DISCOUNT)))))));
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
    };
    int x48650 = x47554;
    int x28656 = 0;
    for(; x28656 < (x48650+(1)) ; x28656 += 1) {
      
      struct AGGRecord_Q10GRPRecord* x28657 = &(x47556[x28656]);
      /* VAR */ int ite36416 = 0;
      if((x28657!=(NULL))) {
        struct Q10GRPRecord* x48686 = x28657->key;
        /* VAR */ int x48688 = 0;
        if((x48686!=(NULL))) {
          char* x48690 = x48686->C_NAME;
          /* VAR */ int x48692 = 0;
          if((x48690!=(NULL))) {
            int x48694 = strcmp(x48690, "");
            x48692 = x48694;
          } else {
            
            x48692 = 0;
          };
          int x48698 = x48692;
          x48688 = x48698;
        } else {
          
          x48688 = 0;
        };
        int x48702 = x48688;
        ite36416 = x48702;
      } else {
        
        ite36416 = 0;
      };
      int x33610 = ite36416;
      if(x33610) {
        g_tree_insert(x47738, x28657, x28657);
      };
    };
    while(1) {
      
      int x3872 = x47739;
      int x822 = !(x3872);
      /* VAR */ int ite36432 = 0;
      if(x822) {
        int x48714 = g_tree_nnodes(x47738);
        ite36432 = (x48714!=(0));
      } else {
        
        ite36432 = 0;
      };
      int x33617 = ite36432;
      if (!(x33617)) break; 
      
      void* x19501 = NULL;
      void** x19509 = &(x19501);
      g_tree_foreach(x47738, x19508, x19509);
      struct AGGRecord_Q10GRPRecord* x19511 = (struct AGGRecord_Q10GRPRecord*){x19501};
      int x19512 = g_tree_remove(x47738, x19511);
      int x3880 = x47740;
      if((x3880>=(20))) {
        x47739 = 1;
      } else {
        
        struct Q10GRPRecord* x834 = x19511->key;
        double x12095 = x19511->aggs;
        printf("%d|%s|%.4f|%.2f|%s|%s|%s|%s\n", (x834->C_CUSTKEY), (x834->C_NAME), x12095, (x834->C_ACCTBAL), (x834->N_NAME), (x834->C_ADDRESS), (x834->C_PHONE), (x834->C_COMMENT));
        int x3900 = x47740;
        x47740 = (x3900+(1));
      };
    };
    int x48749 = x47740;
    printf("(%d rows)\n", x48749);
    struct timeval* x48751 = &x47695;
    gettimeofday(x48751, NULL);
    struct timeval* x48753 = &x47691;
    struct timeval* x48754 = &x47695;
    struct timeval* x48755 = &x47693;
    long x48756 = timeval_subtract(x48753, x48754, x48755);
    printf("Generated code run in %ld milliseconds.\n", x48756);
  };
}
/* ----------- FUNCTIONS ----------- */
int x47718(struct AGGRecord_Q10GRPRecord* x267, struct AGGRecord_Q10GRPRecord* x268) {
  double x12357 = x267->aggs;
  double x12359 = x268->aggs;
  /* VAR */ int ite32859 = 0;
  if((x12357<(x12359))) {
    ite32859 = 1;
  } else {
    
    /* VAR */ int ite32863 = 0;
    if((x12357>(x12359))) {
      ite32863 = -1;
    } else {
      
      ite32863 = 0;
    };
    int x32862 = ite32863;
    ite32859 = x32862;
  };
  int x276 = ite32859;
  return x276; 
}

int x19508(void* x19502, void* x19503, void* x19504) {
  pointer_assign(((struct AGGRecord_Q10GRPRecord**){x19504}), ((struct AGGRecord_Q10GRPRecord*){x19503}));
  return 1; 
}
