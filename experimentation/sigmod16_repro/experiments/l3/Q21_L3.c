#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct AGGRecord_OptimalString;
  struct NATIONRecord;
  struct ORDERSRecord;
  struct SUPPLIERRecord;
  
  struct LINEITEMRecord {
  int L_ORDERKEY;
  int L_SUPPKEY;
  int L_COMMITDATE;
  int L_RECEIPTDATE;
  };
  
  struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  char O_ORDERSTATUS;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  char* S_NAME;
  int S_NATIONKEY;
  };
  
  


int x36063(struct AGGRecord_OptimalString* x294, struct AGGRecord_OptimalString* x295);

int x15732(void* x15726, void* x15727, void* x15728);
/* GLOBAL VARS */

struct timeval x10083;
int main(int argc, char** argv) {
  FILE* x10725 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x10726 = 0;
  int x10727 = x10726;
  int* x10728 = &x10727;
  int x10729 = fscanf(x10725, "%d", x10728);
  pclose(x10725);
  struct LINEITEMRecord* x12363 = (struct LINEITEMRecord*)malloc(x10727 * sizeof(struct LINEITEMRecord));
  memset(x12363, 0, x10727 * sizeof(struct LINEITEMRecord));
  int x10733 = O_RDONLY;
  int x10734 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x10733);
  struct stat x10735 = (struct stat){0};
  /* VAR */ struct stat x10736 = x10735;
  struct stat x10737 = x10736;
  struct stat* x10738 = &x10737;
  int x10739 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x10738);
  int x10741 = PROT_READ;
  int x10742 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x10738->st_size), x10741, x10742, x10734, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite28508 = 0;
    if((x5<(x10727))) {
      char x34606 = *x3;
      ite28508 = (x34606!=('\0'));
    } else {
      
      ite28508 = 0;
    };
    int x26771 = ite28508;
    if (!(x26771)) break; 
    
    /* VAR */ int x10750 = 0;
    int x10751 = x10750;
    int* x10752 = &x10751;
    char* x10753 = strntoi_unchecked(x3, x10752);
    x3 = x10753;
    /* VAR */ int x10755 = 0;
    int x10756 = x10755;
    int* x10757 = &x10756;
    char* x10758 = strntoi_unchecked(x3, x10757);
    x3 = x10758;
    /* VAR */ int x10760 = 0;
    int x10761 = x10760;
    int* x10762 = &x10761;
    char* x10763 = strntoi_unchecked(x3, x10762);
    x3 = x10763;
    /* VAR */ int x10765 = 0;
    int x10766 = x10765;
    int* x10767 = &x10766;
    char* x10768 = strntoi_unchecked(x3, x10767);
    x3 = x10768;
    /* VAR */ double x10770 = 0.0;
    double x10771 = x10770;
    double* x10772 = &x10771;
    char* x10773 = strntod_unchecked(x3, x10772);
    x3 = x10773;
    /* VAR */ double x10775 = 0.0;
    double x10776 = x10775;
    double* x10777 = &x10776;
    char* x10778 = strntod_unchecked(x3, x10777);
    x3 = x10778;
    /* VAR */ double x10780 = 0.0;
    double x10781 = x10780;
    double* x10782 = &x10781;
    char* x10783 = strntod_unchecked(x3, x10782);
    x3 = x10783;
    /* VAR */ double x10785 = 0.0;
    double x10786 = x10785;
    double* x10787 = &x10786;
    char* x10788 = strntod_unchecked(x3, x10787);
    x3 = x10788;
    char x10790 = *x3;
    /* VAR */ char x10791 = x10790;
    x3 += 1;
    x3 += 1;
    char x10795 = *x3;
    /* VAR */ char x10796 = x10795;
    x3 += 1;
    x3 += 1;
    /* VAR */ int x10800 = 0;
    int x10801 = x10800;
    int* x10802 = &x10801;
    char* x10803 = strntoi_unchecked(x3, x10802);
    x3 = x10803;
    /* VAR */ int x10805 = 0;
    int x10806 = x10805;
    int* x10807 = &x10806;
    char* x10808 = strntoi_unchecked(x3, x10807);
    x3 = x10808;
    /* VAR */ int x10810 = 0;
    int x10811 = x10810;
    int* x10812 = &x10811;
    char* x10813 = strntoi_unchecked(x3, x10812);
    x3 = x10813;
    /* VAR */ int x10819 = 0;
    int x10820 = x10819;
    int* x10821 = &x10820;
    char* x10822 = strntoi_unchecked(x3, x10821);
    x3 = x10822;
    /* VAR */ int x10824 = 0;
    int x10825 = x10824;
    int* x10826 = &x10825;
    char* x10827 = strntoi_unchecked(x3, x10826);
    x3 = x10827;
    /* VAR */ int x10829 = 0;
    int x10830 = x10829;
    int* x10831 = &x10830;
    char* x10832 = strntoi_unchecked(x3, x10831);
    x3 = x10832;
    /* VAR */ int x10838 = 0;
    int x10839 = x10838;
    int* x10840 = &x10839;
    char* x10841 = strntoi_unchecked(x3, x10840);
    x3 = x10841;
    /* VAR */ int x10843 = 0;
    int x10844 = x10843;
    int* x10845 = &x10844;
    char* x10846 = strntoi_unchecked(x3, x10845);
    x3 = x10846;
    /* VAR */ int x10848 = 0;
    int x10849 = x10848;
    int* x10850 = &x10849;
    char* x10851 = strntoi_unchecked(x3, x10850);
    x3 = x10851;
    char* x12489 = (char*)malloc(26 * sizeof(char));
    memset(x12489, 0, 26 * sizeof(char));
    /* VAR */ char* x10858 = x3;
    while(1) {
      
      char x10859 = *x3;
      /* VAR */ int ite28629 = 0;
      if((x10859!=('|'))) {
        char x34726 = *x3;
        ite28629 = (x34726!=('\n'));
      } else {
        
        ite28629 = 0;
      };
      int x26885 = ite28629;
      if (!(x26885)) break; 
      
      x3 += 1;
    };
    char* x10866 = x10858;
    int x10867 = x3 - x10866;
    char* x10868 = x10858;
    char* x10869 = strncpy(x12489, x10868, x10867);
    x3 += 1;
    char* x12507 = (char*)malloc(11 * sizeof(char));
    memset(x12507, 0, 11 * sizeof(char));
    /* VAR */ char* x10877 = x3;
    while(1) {
      
      char x10878 = *x3;
      /* VAR */ int ite28652 = 0;
      if((x10878!=('|'))) {
        char x34748 = *x3;
        ite28652 = (x34748!=('\n'));
      } else {
        
        ite28652 = 0;
      };
      int x26901 = ite28652;
      if (!(x26901)) break; 
      
      x3 += 1;
    };
    char* x10885 = x10877;
    int x10886 = x3 - x10885;
    char* x10887 = x10877;
    char* x10888 = strncpy(x12507, x10887, x10886);
    x3 += 1;
    char* x12525 = (char*)malloc(45 * sizeof(char));
    memset(x12525, 0, 45 * sizeof(char));
    /* VAR */ char* x10896 = x3;
    while(1) {
      
      char x10897 = *x3;
      /* VAR */ int ite28675 = 0;
      if((x10897!=('|'))) {
        char x34770 = *x3;
        ite28675 = (x34770!=('\n'));
      } else {
        
        ite28675 = 0;
      };
      int x26917 = ite28675;
      if (!(x26917)) break; 
      
      x3 += 1;
    };
    char* x10904 = x10896;
    int x10905 = x3 - x10904;
    char* x10906 = x10896;
    char* x10907 = strncpy(x12525, x10906, x10905);
    x3 += 1;
    struct LINEITEMRecord* x13371 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x13371, 0, 1 * sizeof(struct LINEITEMRecord));
    x13371->L_ORDERKEY = x10751; x13371->L_SUPPKEY = x10761; x13371->L_COMMITDATE = (((x10820*(10000))+((x10825*(100))))+(x10830)); x13371->L_RECEIPTDATE = (((x10839*(10000))+((x10844*(100))))+(x10849));
    int x47 = x4;
    struct LINEITEMRecord x12545 = *x13371;
    *(x12363 + x47) = x12545;
    struct LINEITEMRecord* x12547 = &(x12363[x47]);
    x13371 = x12547;
    int x49 = x4;
    x4 = (x49+(1));
  };
  FILE* x10920 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x10921 = 0;
  int x10922 = x10921;
  int* x10923 = &x10922;
  int x10924 = fscanf(x10920, "%d", x10923);
  pclose(x10920);
  struct SUPPLIERRecord* x12558 = (struct SUPPLIERRecord*)malloc(x10922 * sizeof(struct SUPPLIERRecord));
  memset(x12558, 0, x10922 * sizeof(struct SUPPLIERRecord));
  int x10928 = O_RDONLY;
  int x10929 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x10928);
  /* VAR */ struct stat x10930 = x10735;
  struct stat x10931 = x10930;
  struct stat* x10932 = &x10931;
  int x10933 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x10932);
  int x10935 = PROT_READ;
  int x10936 = MAP_PRIVATE;
  char* x55 = mmap(NULL, (x10932->st_size), x10935, x10936, x10929, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    /* VAR */ int ite28725 = 0;
    if((x57<(x10922))) {
      char x34819 = *x55;
      ite28725 = (x34819!=('\0'));
    } else {
      
      ite28725 = 0;
    };
    int x26960 = ite28725;
    if (!(x26960)) break; 
    
    /* VAR */ int x10944 = 0;
    int x10945 = x10944;
    int* x10946 = &x10945;
    char* x10947 = strntoi_unchecked(x55, x10946);
    x55 = x10947;
    char* x12581 = (char*)malloc(26 * sizeof(char));
    memset(x12581, 0, 26 * sizeof(char));
    /* VAR */ char* x10950 = x55;
    while(1) {
      
      char x10951 = *x55;
      /* VAR */ int ite28744 = 0;
      if((x10951!=('|'))) {
        char x34837 = *x55;
        ite28744 = (x34837!=('\n'));
      } else {
        
        ite28744 = 0;
      };
      int x26972 = ite28744;
      if (!(x26972)) break; 
      
      x55 += 1;
    };
    char* x10958 = x10950;
    int x10959 = x55 - x10958;
    char* x10960 = x10950;
    char* x10961 = strncpy(x12581, x10960, x10959);
    x55 += 1;
    char* x12599 = (char*)malloc(41 * sizeof(char));
    memset(x12599, 0, 41 * sizeof(char));
    /* VAR */ char* x10969 = x55;
    while(1) {
      
      char x10970 = *x55;
      /* VAR */ int ite28767 = 0;
      if((x10970!=('|'))) {
        char x34859 = *x55;
        ite28767 = (x34859!=('\n'));
      } else {
        
        ite28767 = 0;
      };
      int x26988 = ite28767;
      if (!(x26988)) break; 
      
      x55 += 1;
    };
    char* x10977 = x10969;
    int x10978 = x55 - x10977;
    char* x10979 = x10969;
    char* x10980 = strncpy(x12599, x10979, x10978);
    x55 += 1;
    /* VAR */ int x10987 = 0;
    int x10988 = x10987;
    int* x10989 = &x10988;
    char* x10990 = strntoi_unchecked(x55, x10989);
    x55 = x10990;
    char* x12622 = (char*)malloc(16 * sizeof(char));
    memset(x12622, 0, 16 * sizeof(char));
    /* VAR */ char* x10993 = x55;
    while(1) {
      
      char x10994 = *x55;
      /* VAR */ int ite28795 = 0;
      if((x10994!=('|'))) {
        char x34886 = *x55;
        ite28795 = (x34886!=('\n'));
      } else {
        
        ite28795 = 0;
      };
      int x27009 = ite28795;
      if (!(x27009)) break; 
      
      x55 += 1;
    };
    char* x11001 = x10993;
    int x11002 = x55 - x11001;
    char* x11003 = x10993;
    char* x11004 = strncpy(x12622, x11003, x11002);
    x55 += 1;
    /* VAR */ double x11011 = 0.0;
    double x11012 = x11011;
    double* x11013 = &x11012;
    char* x11014 = strntod_unchecked(x55, x11013);
    x55 = x11014;
    char* x12645 = (char*)malloc(102 * sizeof(char));
    memset(x12645, 0, 102 * sizeof(char));
    /* VAR */ char* x11017 = x55;
    while(1) {
      
      char x11018 = *x55;
      /* VAR */ int ite28823 = 0;
      if((x11018!=('|'))) {
        char x34913 = *x55;
        ite28823 = (x34913!=('\n'));
      } else {
        
        ite28823 = 0;
      };
      int x27030 = ite28823;
      if (!(x27030)) break; 
      
      x55 += 1;
    };
    char* x11025 = x11017;
    int x11026 = x55 - x11025;
    char* x11027 = x11017;
    char* x11028 = strncpy(x12645, x11027, x11026);
    x55 += 1;
    struct SUPPLIERRecord* x13493 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x13493, 0, 1 * sizeof(struct SUPPLIERRecord));
    x13493->S_SUPPKEY = x10945; x13493->S_NAME = x12581; x13493->S_NATIONKEY = x10988;
    int x97 = x56;
    struct SUPPLIERRecord x12665 = *x13493;
    *(x12558 + x97) = x12665;
    struct SUPPLIERRecord* x12667 = &(x12558[x97]);
    x13493 = x12667;
    int x99 = x56;
    x56 = (x99+(1));
  };
  FILE* x11041 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x11042 = 0;
  int x11043 = x11042;
  int* x11044 = &x11043;
  int x11045 = fscanf(x11041, "%d", x11044);
  pclose(x11041);
  struct ORDERSRecord* x12678 = (struct ORDERSRecord*)malloc(x11043 * sizeof(struct ORDERSRecord));
  memset(x12678, 0, x11043 * sizeof(struct ORDERSRecord));
  int x11049 = O_RDONLY;
  int x11050 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x11049);
  /* VAR */ struct stat x11051 = x10735;
  struct stat x11052 = x11051;
  struct stat* x11053 = &x11052;
  int x11054 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x11053);
  int x11056 = PROT_READ;
  int x11057 = MAP_PRIVATE;
  char* x105 = mmap(NULL, (x11053->st_size), x11056, x11057, x11050, 0);
  /* VAR */ int x106 = 0;
  while(1) {
    
    int x107 = x106;
    /* VAR */ int ite28873 = 0;
    if((x107<(x11043))) {
      char x34962 = *x105;
      ite28873 = (x34962!=('\0'));
    } else {
      
      ite28873 = 0;
    };
    int x27073 = ite28873;
    if (!(x27073)) break; 
    
    /* VAR */ int x11065 = 0;
    int x11066 = x11065;
    int* x11067 = &x11066;
    char* x11068 = strntoi_unchecked(x105, x11067);
    x105 = x11068;
    /* VAR */ int x11070 = 0;
    int x11071 = x11070;
    int* x11072 = &x11071;
    char* x11073 = strntoi_unchecked(x105, x11072);
    x105 = x11073;
    char x11075 = *x105;
    /* VAR */ char x11076 = x11075;
    x105 += 1;
    x105 += 1;
    char x11079 = x11076;
    /* VAR */ double x11080 = 0.0;
    double x11081 = x11080;
    double* x11082 = &x11081;
    char* x11083 = strntod_unchecked(x105, x11082);
    x105 = x11083;
    /* VAR */ int x11085 = 0;
    int x11086 = x11085;
    int* x11087 = &x11086;
    char* x11088 = strntoi_unchecked(x105, x11087);
    x105 = x11088;
    /* VAR */ int x11090 = 0;
    int x11091 = x11090;
    int* x11092 = &x11091;
    char* x11093 = strntoi_unchecked(x105, x11092);
    x105 = x11093;
    /* VAR */ int x11095 = 0;
    int x11096 = x11095;
    int* x11097 = &x11096;
    char* x11098 = strntoi_unchecked(x105, x11097);
    x105 = x11098;
    char* x12735 = (char*)malloc(16 * sizeof(char));
    memset(x12735, 0, 16 * sizeof(char));
    /* VAR */ char* x11105 = x105;
    while(1) {
      
      char x11106 = *x105;
      /* VAR */ int ite28926 = 0;
      if((x11106!=('|'))) {
        char x35014 = *x105;
        ite28926 = (x35014!=('\n'));
      } else {
        
        ite28926 = 0;
      };
      int x27119 = ite28926;
      if (!(x27119)) break; 
      
      x105 += 1;
    };
    char* x11113 = x11105;
    int x11114 = x105 - x11113;
    char* x11115 = x11105;
    char* x11116 = strncpy(x12735, x11115, x11114);
    x105 += 1;
    char* x12753 = (char*)malloc(16 * sizeof(char));
    memset(x12753, 0, 16 * sizeof(char));
    /* VAR */ char* x11124 = x105;
    while(1) {
      
      char x11125 = *x105;
      /* VAR */ int ite28949 = 0;
      if((x11125!=('|'))) {
        char x35036 = *x105;
        ite28949 = (x35036!=('\n'));
      } else {
        
        ite28949 = 0;
      };
      int x27135 = ite28949;
      if (!(x27135)) break; 
      
      x105 += 1;
    };
    char* x11132 = x11124;
    int x11133 = x105 - x11132;
    char* x11134 = x11124;
    char* x11135 = strncpy(x12753, x11134, x11133);
    x105 += 1;
    /* VAR */ int x11142 = 0;
    int x11143 = x11142;
    int* x11144 = &x11143;
    char* x11145 = strntoi_unchecked(x105, x11144);
    x105 = x11145;
    char* x12776 = (char*)malloc(80 * sizeof(char));
    memset(x12776, 0, 80 * sizeof(char));
    /* VAR */ char* x11148 = x105;
    while(1) {
      
      char x11149 = *x105;
      /* VAR */ int ite28977 = 0;
      if((x11149!=('|'))) {
        char x35063 = *x105;
        ite28977 = (x35063!=('\n'));
      } else {
        
        ite28977 = 0;
      };
      int x27156 = ite28977;
      if (!(x27156)) break; 
      
      x105 += 1;
    };
    char* x11156 = x11148;
    int x11157 = x105 - x11156;
    char* x11158 = x11148;
    char* x11159 = strncpy(x12776, x11158, x11157);
    x105 += 1;
    struct ORDERSRecord* x13626 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x13626, 0, 1 * sizeof(struct ORDERSRecord));
    x13626->O_ORDERKEY = x11066; x13626->O_ORDERSTATUS = x11079;
    int x141 = x106;
    struct ORDERSRecord x12796 = *x13626;
    *(x12678 + x141) = x12796;
    struct ORDERSRecord* x12798 = &(x12678[x141]);
    x13626 = x12798;
    int x143 = x106;
    x106 = (x143+(1));
  };
  FILE* x11172 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x11173 = 0;
  int x11174 = x11173;
  int* x11175 = &x11174;
  int x11176 = fscanf(x11172, "%d", x11175);
  pclose(x11172);
  struct NATIONRecord* x12809 = (struct NATIONRecord*)malloc(x11174 * sizeof(struct NATIONRecord));
  memset(x12809, 0, x11174 * sizeof(struct NATIONRecord));
  int x11180 = O_RDONLY;
  int x11181 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x11180);
  /* VAR */ struct stat x11182 = x10735;
  struct stat x11183 = x11182;
  struct stat* x11184 = &x11183;
  int x11185 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x11184);
  int x11187 = PROT_READ;
  int x11188 = MAP_PRIVATE;
  char* x149 = mmap(NULL, (x11184->st_size), x11187, x11188, x11181, 0);
  /* VAR */ int x150 = 0;
  while(1) {
    
    int x151 = x150;
    /* VAR */ int ite29027 = 0;
    if((x151<(x11174))) {
      char x35112 = *x149;
      ite29027 = (x35112!=('\0'));
    } else {
      
      ite29027 = 0;
    };
    int x27199 = ite29027;
    if (!(x27199)) break; 
    
    /* VAR */ int x11196 = 0;
    int x11197 = x11196;
    int* x11198 = &x11197;
    char* x11199 = strntoi_unchecked(x149, x11198);
    x149 = x11199;
    char* x12832 = (char*)malloc(26 * sizeof(char));
    memset(x12832, 0, 26 * sizeof(char));
    /* VAR */ char* x11202 = x149;
    while(1) {
      
      char x11203 = *x149;
      /* VAR */ int ite29046 = 0;
      if((x11203!=('|'))) {
        char x35130 = *x149;
        ite29046 = (x35130!=('\n'));
      } else {
        
        ite29046 = 0;
      };
      int x27211 = ite29046;
      if (!(x27211)) break; 
      
      x149 += 1;
    };
    char* x11210 = x11202;
    int x11211 = x149 - x11210;
    char* x11212 = x11202;
    char* x11213 = strncpy(x12832, x11212, x11211);
    x149 += 1;
    /* VAR */ int x11220 = 0;
    int x11221 = x11220;
    int* x11222 = &x11221;
    char* x11223 = strntoi_unchecked(x149, x11222);
    x149 = x11223;
    char* x12855 = (char*)malloc(153 * sizeof(char));
    memset(x12855, 0, 153 * sizeof(char));
    /* VAR */ char* x11226 = x149;
    while(1) {
      
      char x11227 = *x149;
      /* VAR */ int ite29074 = 0;
      if((x11227!=('|'))) {
        char x35157 = *x149;
        ite29074 = (x35157!=('\n'));
      } else {
        
        ite29074 = 0;
      };
      int x27232 = ite29074;
      if (!(x27232)) break; 
      
      x149 += 1;
    };
    char* x11234 = x11226;
    int x11235 = x149 - x11234;
    char* x11236 = x11226;
    char* x11237 = strncpy(x12855, x11236, x11235);
    x149 += 1;
    struct NATIONRecord* x13707 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x13707, 0, 1 * sizeof(struct NATIONRecord));
    x13707->N_NATIONKEY = x11197; x13707->N_NAME = x12832;
    int x174 = x150;
    struct NATIONRecord x12875 = *x13707;
    *(x12809 + x174) = x12875;
    struct NATIONRecord* x12877 = &(x12809[x174]);
    x13707 = x12877;
    int x176 = x150;
    x150 = (x176+(1));
  };
  int x181 = 0;
  for(; x181 < 1 ; x181 += 1) {
    
    /* VAR */ int x35887 = 0;
    GList*** x35888 = (GList***)malloc(160000 * sizeof(GList**));
    memset(x35888, 0, 160000 * sizeof(GList**));
    int x24393 = 0;
    for(; x24393 < 160000 ; x24393 += 1) {
      
      GList** x24394 = malloc(8);
      GList* x24395 = NULL;
      pointer_assign(x24394, x24395);
      *(x35888 + x24393) = x24394;
    };
    struct ORDERSRecord* x35900 = (struct ORDERSRecord*)malloc(60000000 * sizeof(struct ORDERSRecord));
    memset(x35900, 0, 60000000 * sizeof(struct ORDERSRecord));
    int x24409 = 0;
    for(; x24409 < x11043 ; x24409 += 1) {
      
      struct ORDERSRecord* x24410 = &(x12678[x24409]);
      int x24412 = (x24410->O_ORDERKEY)%(60000000);
      struct ORDERSRecord x24413 = *x24410;
      *(x35900 + x24412) = x24413;
      struct ORDERSRecord* x24415 = &(x35900[x24412]);
      x24410 = x24415;
    };
    struct LINEITEMRecord** x35918 = (struct LINEITEMRecord**)malloc(60000000 * sizeof(struct LINEITEMRecord*));
    memset(x35918, 0, 60000000 * sizeof(struct LINEITEMRecord*));
    int* x35919 = (int*)malloc(60000000 * sizeof(int));
    memset(x35919, 0, 60000000 * sizeof(int));
    int x24424 = 0;
    for(; x24424 < 60000000 ; x24424 += 1) {
      
      struct LINEITEMRecord* x24425 = (struct LINEITEMRecord*)malloc(16 * sizeof(struct LINEITEMRecord));
      memset(x24425, 0, 16 * sizeof(struct LINEITEMRecord));
      *(x35918 + x24424) = x24425;
    };
    /* VAR */ int x35927 = 0;
    int x24445 = 0;
    for(; x24445 < x10727 ; x24445 += 1) {
      
      struct LINEITEMRecord* x24446 = &(x12363[x24445]);
      int x24448 = (x24446->L_ORDERKEY)%(60000000);
      int x24449 = x35919[x24448];
      struct LINEITEMRecord* x24450 = x35918[x24448];
      struct LINEITEMRecord x24451 = *x24446;
      *(x24450 + x24449) = x24451;
      struct LINEITEMRecord* x24453 = &(x24450[x24449]);
      x24446 = x24453;
      *(x35919 + x24448) = (x24449+(1));
      int x24457 = x35927;
      x35927 = (x24457+(1));
    };
    struct LINEITEMRecord** x35959 = (struct LINEITEMRecord**)malloc(80000 * sizeof(struct LINEITEMRecord*));
    memset(x35959, 0, 80000 * sizeof(struct LINEITEMRecord*));
    int* x35960 = (int*)malloc(80000 * sizeof(int));
    memset(x35960, 0, 80000 * sizeof(int));
    int x24467 = 0;
    for(; x24467 < 80000 ; x24467 += 1) {
      
      struct LINEITEMRecord* x24468 = (struct LINEITEMRecord*)malloc(1024 * sizeof(struct LINEITEMRecord));
      memset(x24468, 0, 1024 * sizeof(struct LINEITEMRecord));
      *(x35959 + x24467) = x24468;
    };
    /* VAR */ int x35968 = 0;
    int x24488 = 0;
    for(; x24488 < x10727 ; x24488 += 1) {
      
      struct LINEITEMRecord* x24489 = &(x12363[x24488]);
      int x24491 = (x24489->L_SUPPKEY)%(80000);
      int x24492 = x35960[x24491];
      struct LINEITEMRecord* x24493 = x35959[x24491];
      struct LINEITEMRecord x24494 = *x24489;
      *(x24493 + x24492) = x24494;
      struct LINEITEMRecord* x24496 = &(x24493[x24492]);
      x24489 = x24496;
      *(x35960 + x24491) = (x24492+(1));
      int x24500 = x35968;
      x35968 = (x24500+(1));
    };
    /* VAR */ int x36000 = 0;
    double** x36001 = (double**)malloc(80000 * sizeof(double*));
    memset(x36001, 0, 80000 * sizeof(double*));
    /* VAR */ int x36002 = 0;
    while(1) {
      
      int x9877 = x36002;
      if (!((x9877<(80000)))) break; 
      
      int x9879 = x36002;
      double* x12966 = (double*)malloc(1 * sizeof(double));
      memset(x12966, 0, 1 * sizeof(double));
      *(x36001 + x9879) = x12966;
      int x9882 = x36002;
      x36002 = (x9882+(1));
    };
    /* VAR */ int x36012 = 0;
    struct AGGRecord_OptimalString* x36013 = (struct AGGRecord_OptimalString*)malloc(80000 * sizeof(struct AGGRecord_OptimalString));
    memset(x36013, 0, 80000 * sizeof(struct AGGRecord_OptimalString));
    /* VAR */ int x36014 = 0;
    while(1) {
      
      int x9889 = x36014;
      if (!((x9889<(80000)))) break; 
      
      int x9891 = x36014;
      double* x9892 = x36001[x9891];
      struct AGGRecord_OptimalString* x13815 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x13815, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      x13815->key = ""; x13815->aggs = x9892;
      struct AGGRecord_OptimalString x12980 = *x13815;
      *(x36013 + x9891) = x12980;
      struct AGGRecord_OptimalString* x12982 = &(x36013[x9891]);
      x13815 = x12982;
      int x9895 = x36014;
      x36014 = (x9895+(1));
    };
    /* VAR */ struct timeval x36030 = x10083;
    struct timeval x36031 = x36030;
    /* VAR */ struct timeval x36032 = x10083;
    struct timeval x36033 = x36032;
    /* VAR */ struct timeval x36034 = x10083;
    struct timeval x36035 = x36034;
    struct timeval* x36036 = &x36033;
    gettimeofday(x36036, NULL);
    /* VAR */ int x36038 = 0;
    int* x36087 = &(x36063);
    GTree* x36088 = g_tree_new(x36087);
    /* VAR */ int x36089 = 0;
    /* VAR */ int x36090 = 0;
    while(1) {
      
      int x36092 = x36038;
      if (!((x36092<(x10922)))) break; 
      
      int x2650 = x36038;
      struct SUPPLIERRecord* x374 = &(x12558[x2650]);
      int x376 = x374->S_NATIONKEY;
      struct NATIONRecord* x8258 = &(x12809[(x376-(0))]);
      int x22742 = strcmp((x8258->N_NAME), "MOROCCO");
      if((x22742==(0))) {
        if(((x8258->N_NATIONKEY)==(x376))) {
          if(((x8258->N_NATIONKEY)==(x376))) {
            int x1144 = x374->S_SUPPKEY;
            char* x1145 = x374->S_NAME;
            int x4911 = x1144%(80000);
            int x4912 = x35960[x4911];
            struct LINEITEMRecord* x4913 = x35959[x4911];
            int x24760 = 0;
            for(; x24760 < x4912 ; x24760 += 1) {
              
              struct LINEITEMRecord* x24761 = &(x4913[x24760]);
              if(((x24761->L_RECEIPTDATE)>((x24761->L_COMMITDATE)))) {
                int x420 = x24761->L_SUPPKEY;
                if((x1144==(x420))) {
                  int x1231 = x24761->L_ORDERKEY;
                  /* VAR */ int x8285 = 0;
                  int x8286 = x1231%(60000000);
                  int x8287 = x35919[x8286];
                  struct LINEITEMRecord* x8288 = x35918[x8286];
                  int x24627 = 0;
                  for(; x24627 < x8287 ; x24627 += 1) {
                    
                    struct LINEITEMRecord* x24628 = &(x8288[x24627]);
                    /* VAR */ int ite30243 = 0;
                    if(((x24628->L_ORDERKEY)==(x1231))) {
                      /* VAR */ int x36352 = 0;
                      if((x1231==((x24628->L_ORDERKEY)))) {
                        x36352 = (x420!=((x24628->L_SUPPKEY)));
                      } else {
                        
                        x36352 = 0;
                      };
                      int x36359 = x36352;
                      ite30243 = x36359;
                    } else {
                      
                      ite30243 = 0;
                    };
                    int x28278 = ite30243;
                    if(x28278) {
                      x8285 = 1;
                    };
                  };
                  int x8304 = x8285;
                  if(x8304) {
                    /* VAR */ int resultRetain4965 = 0;
                    int x4966 = x35919[x8286];
                    struct LINEITEMRecord* x4967 = x35918[x8286];
                    int x24661 = 0;
                    for(; x24661 < x4966 ; x24661 += 1) {
                      
                      struct LINEITEMRecord* x24662 = &(x4967[x24661]);
                      if(((x24662->L_RECEIPTDATE)>((x24662->L_COMMITDATE)))) {
                        /* VAR */ int ite30291 = 0;
                        if((x1231==((x24662->L_ORDERKEY)))) {
                          ite30291 = (x420!=((x24662->L_SUPPKEY)));
                        } else {
                          
                          ite30291 = 0;
                        };
                        int x28310 = ite30291;
                        int x4982 = !(x28310);
                        int x4983 = !(x4982);
                        if(x4983) {
                          resultRetain4965 = 1;
                        };
                      };
                    };
                    int x4989 = resultRetain4965;
                    int x4990 = !(x4989);
                    if(x4990) {
                      struct ORDERSRecord* x8330 = &(x35900[x1231]);
                      if(((x8330->O_ORDERSTATUS)==('F'))) {
                        if(((x8330->O_ORDERKEY)==(x1231))) {
                          if(((x8330->O_ORDERKEY)==(x1231))) {
                            int x22823 = strlen(x1145);
                            /* VAR */ int x21013 = 0;
                            /* VAR */ int x21014 = 0;
                            while(1) {
                              
                              int x21015 = x21013;
                              if (!((x21015<(x22823)))) break; 
                              
                              int x21017 = x21014;
                              int x21018 = x21013;
                              char* x22831 = pointer_add(x1145, x21018);
                              char x22832 = *(x22831);
                              x21014 = (x21017+(x22832));
                              int x21023 = x21013;
                              x21013 = (x21023+(1));
                            };
                            int x21027 = x21014;
                            int x7092 = x21027&((160000-(1)));
                            GList** x7093 = x35888[x7092];
                            int x7094 = x35887;
                            if((x7092>(x7094))) {
                              x35887 = x7092;
                            };
                            /* VAR */ struct AGGRecord_OptimalString* x15644 = NULL;
                            GList* x15645 = *(x7093);
                            /* VAR */ GList* x15646 = x15645;
                            while(1) {
                              
                              GList* x15647 = x15646;
                              GList* x15648 = NULL;
                              if (!((x15647!=(x15648)))) break; 
                              
                              GList* x15650 = x15646;
                              void* x15651 = g_list_nth_data(x15650, 0);
                              struct AGGRecord_OptimalString* x15652 = (struct AGGRecord_OptimalString*){x15651};
                              GList* x15653 = x15646;
                              GList* x15654 = g_list_next(x15653);
                              x15646 = x15654;
                              int x21054 = strcmp((x15652->key), x1145);
                              int x21055 = !(x21054);
                              if(x21055) {
                                x15644 = x15652;
                                break;
                              };
                            };
                            struct AGGRecord_OptimalString* x15662 = x15644;
                            /* VAR */ struct AGGRecord_OptimalString* ite28378 = 0;
                            if((x15662!=(NULL))) {
                              ite28378 = x15662;
                            } else {
                              
                              int x28380 = x36000;
                              double* x28381 = x36001[x28380];
                              int x28382 = x36000;
                              x36000 = (x28382+(1));
                              int x28385 = x36012;
                              struct AGGRecord_OptimalString* x28386 = &(x36013[x28385]);
                              x28386->key = x1145;
                              x28386->aggs = x28381;
                              int x28389 = x36012;
                              x36012 = (x28389+(1));
                              GList* x28392 = *(x7093);
                              GList* x28393 = g_list_prepend(x28392, x28386);
                              pointer_assign(x7093, x28393);
                              ite28378 = x28386;
                            };
                            struct AGGRecord_OptimalString* x7107 = ite28378;
                            double* x614 = x7107->aggs;
                            double x628 = x614[0];
                            *x614 = (x628+(1.0));
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
      int x2684 = x36038;
      x36038 = (x2684+(1));
    };
    int x36502 = x35887;
    int x24945 = 0;
    for(; x24945 < (x36502+(1)) ; x24945 += 1) {
      
      GList** x24946 = x35888[x24945];
      GList* x24951 = *(x24946);
      /* VAR */ GList* x24952 = x24951;
      while(1) {
        
        GList* x15704 = x24952;
        GList* x15705 = NULL;
        if (!((x15704!=(x15705)))) break; 
        
        GList* x15707 = x24952;
        void* x15708 = g_list_nth_data(x15707, 0);
        struct AGGRecord_OptimalString* x15709 = (struct AGGRecord_OptimalString*){x15708};
        GList* x15710 = x24952;
        GList* x15711 = g_list_next(x15710);
        x24952 = x15711;
        g_tree_insert(x36088, x15709, x15709);
      };
    };
    while(1) {
      
      int x2945 = x36089;
      int x652 = !(x2945);
      /* VAR */ int ite30440 = 0;
      if(x652) {
        int x36550 = g_tree_nnodes(x36088);
        ite30440 = (x36550!=(0));
      } else {
        
        ite30440 = 0;
      };
      int x28452 = ite30440;
      if (!(x28452)) break; 
      
      void* x15725 = NULL;
      void** x15733 = &(x15725);
      g_tree_foreach(x36088, x15732, x15733);
      struct AGGRecord_OptimalString* x15735 = (struct AGGRecord_OptimalString*){x15725};
      int x15736 = g_tree_remove(x36088, x15735);
      int x2953 = x36090;
      if((x2953>=(100))) {
        x36089 = 1;
      } else {
        
        double x667 = ((double*) { x15735->aggs })[0];
        printf("%s|%.0f\n", (x15735->key), x667);
        int x2962 = x36090;
        x36090 = (x2962+(1));
      };
    };
    int x36579 = x36090;
    printf("(%d rows)\n", x36579);
    struct timeval* x36581 = &x36035;
    gettimeofday(x36581, NULL);
    struct timeval* x36583 = &x36031;
    struct timeval* x36584 = &x36035;
    struct timeval* x36585 = &x36033;
    long x36586 = timeval_subtract(x36583, x36584, x36585);
    printf("Generated code run in %ld milliseconds.\n", x36586);
  };
}
/* ----------- FUNCTIONS ----------- */
int x36063(struct AGGRecord_OptimalString* x294, struct AGGRecord_OptimalString* x295) {
  double x297 = ((double*) { x294->aggs })[0];
  double x299 = ((double*) { x295->aggs })[0];
  /* VAR */ int ite28056 = 0;
  if((x297<(x299))) {
    ite28056 = 1;
  } else {
    
    /* VAR */ int ite28060 = 0;
    if((x297>(x299))) {
      ite28060 = -1;
    } else {
      
      int x28064 = strcmp((x294->key), (x295->key));
      ite28060 = x28064;
    };
    int x28059 = ite28060;
    ite28056 = x28059;
  };
  int x306 = ite28056;
  return x306; 
}

int x15732(void* x15726, void* x15727, void* x15728) {
  pointer_assign(((struct AGGRecord_OptimalString**){x15728}), ((struct AGGRecord_OptimalString*){x15727}));
  return 1; 
}
