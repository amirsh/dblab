#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct PARTRecord;
  
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
  struct PARTRecord* next;
  };
  
  

/* GLOBAL VARS */

struct timeval x10481;
int main(int argc, char** argv) {
  FILE* x10807 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x10808 = 0;
  int x10809 = x10808;
  int* x10810 = &x10809;
  int x10811 = fscanf(x10807, "%d", x10810);
  pclose(x10807);
  int* x11787 = (int*)malloc(x10809 * sizeof(int));
  memset(x11787, 0, x10809 * sizeof(int));
  int* x11788 = (int*)malloc(x10809 * sizeof(int));
  memset(x11788, 0, x10809 * sizeof(int));
  int* x11789 = (int*)malloc(x10809 * sizeof(int));
  memset(x11789, 0, x10809 * sizeof(int));
  int* x11790 = (int*)malloc(x10809 * sizeof(int));
  memset(x11790, 0, x10809 * sizeof(int));
  double* x11791 = (double*)malloc(x10809 * sizeof(double));
  memset(x11791, 0, x10809 * sizeof(double));
  double* x11792 = (double*)malloc(x10809 * sizeof(double));
  memset(x11792, 0, x10809 * sizeof(double));
  double* x11793 = (double*)malloc(x10809 * sizeof(double));
  memset(x11793, 0, x10809 * sizeof(double));
  double* x11794 = (double*)malloc(x10809 * sizeof(double));
  memset(x11794, 0, x10809 * sizeof(double));
  char* x11795 = (char*)malloc(x10809 * sizeof(char));
  memset(x11795, 0, x10809 * sizeof(char));
  char* x11796 = (char*)malloc(x10809 * sizeof(char));
  memset(x11796, 0, x10809 * sizeof(char));
  int* x11797 = (int*)malloc(x10809 * sizeof(int));
  memset(x11797, 0, x10809 * sizeof(int));
  int* x11798 = (int*)malloc(x10809 * sizeof(int));
  memset(x11798, 0, x10809 * sizeof(int));
  int* x11799 = (int*)malloc(x10809 * sizeof(int));
  memset(x11799, 0, x10809 * sizeof(int));
  char** x11800 = (char**)malloc(x10809 * sizeof(char*));
  memset(x11800, 0, x10809 * sizeof(char*));
  char** x11801 = (char**)malloc(x10809 * sizeof(char*));
  memset(x11801, 0, x10809 * sizeof(char*));
  char** x11802 = (char**)malloc(x10809 * sizeof(char*));
  memset(x11802, 0, x10809 * sizeof(char*));
  int x10830 = O_RDONLY;
  int x10831 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x10830);
  struct stat x10832 = (struct stat){0};
  /* VAR */ struct stat x10833 = x10832;
  struct stat x10834 = x10833;
  struct stat* x10835 = &x10834;
  int x10836 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x10835);
  size_t x10837 = x10835->st_size;
  int x10838 = PROT_READ;
  int x10839 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x10837, x10838, x10839, x10831, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x10809);
    /* VAR */ int ite19274 = 0;
    if(x6) {
      char x21945 = *x3;
      int x21946 = x21945!=('\0');
      ite19274 = x21946;
    } else {
      
      ite19274 = 0;
    };
    int x18656 = ite19274;
    if (!(x18656)) break; 
    
    /* VAR */ int x10847 = 0;
    int x10848 = x10847;
    int* x10849 = &x10848;
    char* x10850 = strntoi_unchecked(x3, x10849);
    x3 = x10850;
    /* VAR */ int x10852 = 0;
    int x10853 = x10852;
    int* x10854 = &x10853;
    char* x10855 = strntoi_unchecked(x3, x10854);
    x3 = x10855;
    /* VAR */ int x10857 = 0;
    int x10858 = x10857;
    int* x10859 = &x10858;
    char* x10860 = strntoi_unchecked(x3, x10859);
    x3 = x10860;
    /* VAR */ int x10862 = 0;
    int x10863 = x10862;
    int* x10864 = &x10863;
    char* x10865 = strntoi_unchecked(x3, x10864);
    x3 = x10865;
    /* VAR */ double x10867 = 0.0;
    double x10868 = x10867;
    double* x10869 = &x10868;
    char* x10870 = strntod_unchecked(x3, x10869);
    x3 = x10870;
    /* VAR */ double x10872 = 0.0;
    double x10873 = x10872;
    double* x10874 = &x10873;
    char* x10875 = strntod_unchecked(x3, x10874);
    x3 = x10875;
    /* VAR */ double x10877 = 0.0;
    double x10878 = x10877;
    double* x10879 = &x10878;
    char* x10880 = strntod_unchecked(x3, x10879);
    x3 = x10880;
    /* VAR */ double x10882 = 0.0;
    double x10883 = x10882;
    double* x10884 = &x10883;
    char* x10885 = strntod_unchecked(x3, x10884);
    x3 = x10885;
    char x10887 = *x3;
    /* VAR */ char x10888 = x10887;
    x3 += 1;
    x3 += 1;
    char x10891 = x10888;
    char x10892 = *x3;
    /* VAR */ char x10893 = x10892;
    x3 += 1;
    x3 += 1;
    char x10896 = x10893;
    /* VAR */ int x10897 = 0;
    int x10898 = x10897;
    int* x10899 = &x10898;
    char* x10900 = strntoi_unchecked(x3, x10899);
    x3 = x10900;
    /* VAR */ int x10902 = 0;
    int x10903 = x10902;
    int* x10904 = &x10903;
    char* x10905 = strntoi_unchecked(x3, x10904);
    x3 = x10905;
    /* VAR */ int x10907 = 0;
    int x10908 = x10907;
    int* x10909 = &x10908;
    char* x10910 = strntoi_unchecked(x3, x10909);
    x3 = x10910;
    int x10912 = x10898*(10000);
    int x10913 = x10903*(100);
    int x10914 = x10912+(x10913);
    int x10915 = x10914+(x10908);
    /* VAR */ int x10916 = 0;
    int x10917 = x10916;
    int* x10918 = &x10917;
    char* x10919 = strntoi_unchecked(x3, x10918);
    x3 = x10919;
    /* VAR */ int x10921 = 0;
    int x10922 = x10921;
    int* x10923 = &x10922;
    char* x10924 = strntoi_unchecked(x3, x10923);
    x3 = x10924;
    /* VAR */ int x10926 = 0;
    int x10927 = x10926;
    int* x10928 = &x10927;
    char* x10929 = strntoi_unchecked(x3, x10928);
    x3 = x10929;
    int x10931 = x10917*(10000);
    int x10932 = x10922*(100);
    int x10933 = x10931+(x10932);
    int x10934 = x10933+(x10927);
    /* VAR */ int x10935 = 0;
    int x10936 = x10935;
    int* x10937 = &x10936;
    char* x10938 = strntoi_unchecked(x3, x10937);
    x3 = x10938;
    /* VAR */ int x10940 = 0;
    int x10941 = x10940;
    int* x10942 = &x10941;
    char* x10943 = strntoi_unchecked(x3, x10942);
    x3 = x10943;
    /* VAR */ int x10945 = 0;
    int x10946 = x10945;
    int* x10947 = &x10946;
    char* x10948 = strntoi_unchecked(x3, x10947);
    x3 = x10948;
    int x10950 = x10936*(10000);
    int x10951 = x10941*(100);
    int x10952 = x10950+(x10951);
    int x10953 = x10952+(x10946);
    char* x11928 = (char*)malloc(26 * sizeof(char));
    memset(x11928, 0, 26 * sizeof(char));
    /* VAR */ char* x10955 = x3;
    while(1) {
      
      char x10956 = *x3;
      int x10957 = x10956!=('|');
      /* VAR */ int ite19395 = 0;
      if(x10957) {
        char x22065 = *x3;
        int x22066 = x22065!=('\n');
        ite19395 = x22066;
      } else {
        
        ite19395 = 0;
      };
      int x18770 = ite19395;
      if (!(x18770)) break; 
      
      x3 += 1;
    };
    char* x10963 = x10955;
    int x10964 = x3 - x10963;
    char* x10965 = x10955;
    char* x10966 = strncpy(x11928, x10965, x10964);
    x3 += 1;
    char* x11946 = (char*)malloc(11 * sizeof(char));
    memset(x11946, 0, 11 * sizeof(char));
    /* VAR */ char* x10974 = x3;
    while(1) {
      
      char x10975 = *x3;
      int x10976 = x10975!=('|');
      /* VAR */ int ite19418 = 0;
      if(x10976) {
        char x22087 = *x3;
        int x22088 = x22087!=('\n');
        ite19418 = x22088;
      } else {
        
        ite19418 = 0;
      };
      int x18786 = ite19418;
      if (!(x18786)) break; 
      
      x3 += 1;
    };
    char* x10982 = x10974;
    int x10983 = x3 - x10982;
    char* x10984 = x10974;
    char* x10985 = strncpy(x11946, x10984, x10983);
    x3 += 1;
    char* x11964 = (char*)malloc(45 * sizeof(char));
    memset(x11964, 0, 45 * sizeof(char));
    /* VAR */ char* x10993 = x3;
    while(1) {
      
      char x10994 = *x3;
      int x10995 = x10994!=('|');
      /* VAR */ int ite19441 = 0;
      if(x10995) {
        char x22109 = *x3;
        int x22110 = x22109!=('\n');
        ite19441 = x22110;
      } else {
        
        ite19441 = 0;
      };
      int x18802 = ite19441;
      if (!(x18802)) break; 
      
      x3 += 1;
    };
    char* x11001 = x10993;
    int x11002 = x3 - x11001;
    char* x11003 = x10993;
    char* x11004 = strncpy(x11964, x11003, x11002);
    x3 += 1;
    int x47 = x4;
    *(x11787 + x47) = x10848;
    *(x11788 + x47) = x10853;
    *(x11789 + x47) = x10858;
    *(x11790 + x47) = x10863;
    *(x11791 + x47) = x10868;
    *(x11792 + x47) = x10873;
    *(x11793 + x47) = x10878;
    *(x11794 + x47) = x10883;
    *(x11795 + x47) = x10891;
    *(x11796 + x47) = x10896;
    *(x11797 + x47) = x10915;
    *(x11798 + x47) = x10934;
    *(x11799 + x47) = x10953;
    *(x11800 + x47) = x11928;
    *(x11801 + x47) = x11946;
    *(x11802 + x47) = x11964;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x11031 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x11032 = 0;
  int x11033 = x11032;
  int* x11034 = &x11033;
  int x11035 = fscanf(x11031, "%d", x11034);
  pclose(x11031);
  struct PARTRecord* x12008 = (struct PARTRecord*)malloc(x11033 * sizeof(struct PARTRecord));
  memset(x12008, 0, x11033 * sizeof(struct PARTRecord));
  int x11039 = O_RDONLY;
  int x11040 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x11039);
  /* VAR */ struct stat x11041 = x10832;
  struct stat x11042 = x11041;
  struct stat* x11043 = &x11042;
  int x11044 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x11043);
  size_t x11045 = x11043->st_size;
  int x11046 = PROT_READ;
  int x11047 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x11045, x11046, x11047, x11040, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x11033);
    /* VAR */ int ite19500 = 0;
    if(x58) {
      char x22167 = *x55;
      int x22168 = x22167!=('\0');
      ite19500 = x22168;
    } else {
      
      ite19500 = 0;
    };
    int x18854 = ite19500;
    if (!(x18854)) break; 
    
    /* VAR */ int x11055 = 0;
    int x11056 = x11055;
    int* x11057 = &x11056;
    char* x11058 = strntoi_unchecked(x55, x11057);
    x55 = x11058;
    char* x12031 = (char*)malloc(56 * sizeof(char));
    memset(x12031, 0, 56 * sizeof(char));
    /* VAR */ char* x11061 = x55;
    while(1) {
      
      char x11062 = *x55;
      int x11063 = x11062!=('|');
      /* VAR */ int ite19519 = 0;
      if(x11063) {
        char x22185 = *x55;
        int x22186 = x22185!=('\n');
        ite19519 = x22186;
      } else {
        
        ite19519 = 0;
      };
      int x18866 = ite19519;
      if (!(x18866)) break; 
      
      x55 += 1;
    };
    char* x11069 = x11061;
    int x11070 = x55 - x11069;
    char* x11071 = x11061;
    char* x11072 = strncpy(x12031, x11071, x11070);
    x55 += 1;
    char* x12049 = (char*)malloc(26 * sizeof(char));
    memset(x12049, 0, 26 * sizeof(char));
    /* VAR */ char* x11080 = x55;
    while(1) {
      
      char x11081 = *x55;
      int x11082 = x11081!=('|');
      /* VAR */ int ite19542 = 0;
      if(x11082) {
        char x22207 = *x55;
        int x22208 = x22207!=('\n');
        ite19542 = x22208;
      } else {
        
        ite19542 = 0;
      };
      int x18882 = ite19542;
      if (!(x18882)) break; 
      
      x55 += 1;
    };
    char* x11088 = x11080;
    int x11089 = x55 - x11088;
    char* x11090 = x11080;
    char* x11091 = strncpy(x12049, x11090, x11089);
    x55 += 1;
    char* x12067 = (char*)malloc(11 * sizeof(char));
    memset(x12067, 0, 11 * sizeof(char));
    /* VAR */ char* x11099 = x55;
    while(1) {
      
      char x11100 = *x55;
      int x11101 = x11100!=('|');
      /* VAR */ int ite19565 = 0;
      if(x11101) {
        char x22229 = *x55;
        int x22230 = x22229!=('\n');
        ite19565 = x22230;
      } else {
        
        ite19565 = 0;
      };
      int x18898 = ite19565;
      if (!(x18898)) break; 
      
      x55 += 1;
    };
    char* x11107 = x11099;
    int x11108 = x55 - x11107;
    char* x11109 = x11099;
    char* x11110 = strncpy(x12067, x11109, x11108);
    x55 += 1;
    char* x12085 = (char*)malloc(26 * sizeof(char));
    memset(x12085, 0, 26 * sizeof(char));
    /* VAR */ char* x11118 = x55;
    while(1) {
      
      char x11119 = *x55;
      int x11120 = x11119!=('|');
      /* VAR */ int ite19588 = 0;
      if(x11120) {
        char x22251 = *x55;
        int x22252 = x22251!=('\n');
        ite19588 = x22252;
      } else {
        
        ite19588 = 0;
      };
      int x18914 = ite19588;
      if (!(x18914)) break; 
      
      x55 += 1;
    };
    char* x11126 = x11118;
    int x11127 = x55 - x11126;
    char* x11128 = x11118;
    char* x11129 = strncpy(x12085, x11128, x11127);
    x55 += 1;
    /* VAR */ int x11136 = 0;
    int x11137 = x11136;
    int* x11138 = &x11137;
    char* x11139 = strntoi_unchecked(x55, x11138);
    x55 = x11139;
    char* x12108 = (char*)malloc(11 * sizeof(char));
    memset(x12108, 0, 11 * sizeof(char));
    /* VAR */ char* x11142 = x55;
    while(1) {
      
      char x11143 = *x55;
      int x11144 = x11143!=('|');
      /* VAR */ int ite19616 = 0;
      if(x11144) {
        char x22278 = *x55;
        int x22279 = x22278!=('\n');
        ite19616 = x22279;
      } else {
        
        ite19616 = 0;
      };
      int x18935 = ite19616;
      if (!(x18935)) break; 
      
      x55 += 1;
    };
    char* x11150 = x11142;
    int x11151 = x55 - x11150;
    char* x11152 = x11142;
    char* x11153 = strncpy(x12108, x11152, x11151);
    x55 += 1;
    /* VAR */ double x11160 = 0.0;
    double x11161 = x11160;
    double* x11162 = &x11161;
    char* x11163 = strntod_unchecked(x55, x11162);
    x55 = x11163;
    char* x12131 = (char*)malloc(24 * sizeof(char));
    memset(x12131, 0, 24 * sizeof(char));
    /* VAR */ char* x11166 = x55;
    while(1) {
      
      char x11167 = *x55;
      int x11168 = x11167!=('|');
      /* VAR */ int ite19644 = 0;
      if(x11168) {
        char x22305 = *x55;
        int x22306 = x22305!=('\n');
        ite19644 = x22306;
      } else {
        
        ite19644 = 0;
      };
      int x18956 = ite19644;
      if (!(x18956)) break; 
      
      x55 += 1;
    };
    char* x11174 = x11166;
    int x11175 = x55 - x11174;
    char* x11176 = x11166;
    char* x11177 = strncpy(x12131, x11176, x11175);
    x55 += 1;
    struct PARTRecord* x12645 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x12645, 0, 1 * sizeof(struct PARTRecord));
    x12645->P_PARTKEY = x11056; x12645->P_NAME = x12031; x12645->P_MFGR = x12049; x12645->P_BRAND = x12067; x12645->P_TYPE = x12085; x12645->P_SIZE = x11137; x12645->P_CONTAINER = x12108; x12645->P_RETAILPRICE = x11161; x12645->P_COMMENT = x12131; x12645->next = NULL;
    int x111 = x56;
    int x15139 = x12645==(NULL);
    /* VAR */ int ite19667 = 0;
    if(x15139) {
      ite19667 = 1;
    } else {
      
      char* x22328 = x12645->P_NAME;
      int x22329 = x22328==(NULL);
      /* VAR */ int x22330 = 0;
      if(x22329) {
        x22330 = 1;
      } else {
        
        int x22333 = strcmp(x22328, "");
        int x22334 = !(x22333);
        x22330 = x22334;
      };
      int x22337 = x22330;
      ite19667 = x22337;
    };
    int x18972 = ite19667;
    if(x18972) {
      *(x12008 + x111) = (const struct PARTRecord){0};
    } else {
      
      struct PARTRecord x12153 = *x12645;
      *(x12008 + x111) = x12153;
      struct PARTRecord* x12155 = &(x12008[x111]);
      x12645 = x12155;
    };
    int x113 = x56;
    int x114 = x113+(1);
    x56 = x114;
  };
  int x118 = 0;
  for(; x118 < 1 ; x118 += 1) {
    
    double* x22567 = (double*)malloc(3 * sizeof(double));
    memset(x22567, 0, 3 * sizeof(double));
    struct PARTRecord* x22568 = (struct PARTRecord*)malloc(1048576 * sizeof(struct PARTRecord));
    memset(x22568, 0, 1048576 * sizeof(struct PARTRecord));
    /* VAR */ struct timeval x22569 = x10481;
    struct timeval x22570 = x22569;
    /* VAR */ struct timeval x22571 = x10481;
    struct timeval x22572 = x22571;
    /* VAR */ struct timeval x22573 = x10481;
    struct timeval x22574 = x22573;
    struct timeval* x22575 = &x22572;
    gettimeofday(x22575, NULL);
    /* VAR */ int x22577 = 0;
    /* VAR */ int x22578 = 0;
    while(1) {
      
      int x22580 = x22577;
      int x22581 = x22580<(x11033);
      if (!(x22581)) break; 
      
      int x1431 = x22577;
      struct PARTRecord* x191 = &(x12008[x1431]);
      int x193 = x191->P_PARTKEY;
      int x2952 = x193%(1048576);
      struct PARTRecord* x3954 = &(x22568[x2952]);
      /* VAR */ struct PARTRecord* list3955 = x3954;
      struct PARTRecord* x3956 = list3955;
      int x15178 = x3956==(NULL);
      /* VAR */ int ite19904 = 0;
      if(x15178) {
        ite19904 = 1;
      } else {
        
        char* x22593 = x3956->P_NAME;
        int x22594 = x22593==(NULL);
        /* VAR */ int x22595 = 0;
        if(x22594) {
          x22595 = 1;
        } else {
          
          int x22598 = strcmp(x22593, "");
          int x22599 = !(x22598);
          x22595 = x22599;
        };
        int x22602 = x22595;
        ite19904 = x22602;
      };
      int x19134 = ite19904;
      if(x19134) {
        list3955 = NULL;
        struct PARTRecord* x3963 = list3955;
        int x15185 = x3963==(NULL);
        /* VAR */ int ite19919 = 0;
        if(x15185) {
          ite19919 = 1;
        } else {
          
          char* x22613 = x3963->P_NAME;
          int x22614 = x22613==(NULL);
          /* VAR */ int x22615 = 0;
          if(x22614) {
            x22615 = 1;
          } else {
            
            int x22618 = strcmp(x22613, "");
            int x22619 = !(x22618);
            x22615 = x22619;
          };
          int x22622 = x22615;
          ite19919 = x22622;
        };
        int x19140 = ite19919;
        if(x19140) {
          *(x22568 + x2952) = (const struct PARTRecord){0};
        } else {
          
          struct PARTRecord x12194 = *x3963;
          *(x22568 + x2952) = x12194;
          struct PARTRecord* x12196 = &(x22568[x2952]);
          list3955 = x12196;
        };
      };
      int x15195 = x3954==(NULL);
      /* VAR */ int ite19937 = 0;
      if(x15195) {
        ite19937 = 1;
      } else {
        
        char* x22636 = x3954->P_NAME;
        int x22637 = x22636==(NULL);
        /* VAR */ int x22638 = 0;
        if(x22637) {
          x22638 = 1;
        } else {
          
          int x22641 = strcmp(x22636, "");
          int x22642 = !(x22641);
          x22638 = x22642;
        };
        int x22645 = x22638;
        ite19937 = x22645;
      };
      int x19149 = ite19937;
      if(x19149) {
        x191->next = NULL;
        int x15201 = x191==(NULL);
        /* VAR */ int ite19951 = 0;
        if(x15201) {
          ite19951 = 1;
        } else {
          
          char* x22655 = x191->P_NAME;
          int x22656 = x22655==(NULL);
          /* VAR */ int x22657 = 0;
          if(x22656) {
            x22657 = 1;
          } else {
            
            int x22660 = strcmp(x22655, "");
            int x22661 = !(x22660);
            x22657 = x22661;
          };
          int x22664 = x22657;
          ite19951 = x22664;
        };
        int x19154 = ite19951;
        if(x19154) {
          *(x22568 + x2952) = (const struct PARTRecord){0};
        } else {
          
          struct PARTRecord x12204 = *x191;
          *(x22568 + x2952) = x12204;
          struct PARTRecord* x12206 = &(x22568[x2952]);
          x191 = x12206;
        };
        list3955 = x191;
      } else {
        
        struct PARTRecord* x4862 = x3954->next;
        x191->next = x4862;
        x3954->next = x191;
      };
      int x1436 = x22577;
      int x197 = x1436+(1);
      x22577 = x197;
    };
    while(1) {
      
      int x22682 = x22578;
      int x22683 = x22682<(x10809);
      if (!(x22683)) break; 
      
      int x1445 = x22578;
      int x7723 = x11797[x1445];
      int x209 = x7723>=(19940301);
      /* VAR */ int ite19982 = 0;
      if(x209) {
        int x22689 = x7723<(19940401);
        ite19982 = x22689;
      } else {
        
        ite19982 = 0;
      };
      int x19174 = ite19982;
      if(x19174) {
        int x7729 = x11788[x1445];
        int x2980 = x7729%(1048576);
        struct PARTRecord* x3991 = &(x22568[x2980]);
        int x15231 = x3991!=(NULL);
        /* VAR */ int ite19995 = 0;
        if(x15231) {
          char* x22701 = x3991->P_NAME;
          int x22702 = x22701!=(NULL);
          /* VAR */ int x22703 = 0;
          if(x22702) {
            int x22705 = strcmp(x22701, "");
            x22703 = x22705;
          } else {
            
            x22703 = 0;
          };
          int x22709 = x22703;
          ite19995 = x22709;
        } else {
          
          ite19995 = 0;
        };
        int x19181 = ite19995;
        if(x19181) {
          /* VAR */ struct PARTRecord* current4339 = x3991;
          while(1) {
            
            struct PARTRecord* x4341 = current4339;
            int x15239 = x4341!=(NULL);
            /* VAR */ int ite20011 = 0;
            if(x15239) {
              char* x22721 = x4341->P_NAME;
              int x22722 = x22721!=(NULL);
              /* VAR */ int x22723 = 0;
              if(x22722) {
                int x22725 = strcmp(x22721, "");
                x22723 = x22725;
              } else {
                
                x22723 = 0;
              };
              int x22729 = x22723;
              ite20011 = x22729;
            } else {
              
              ite20011 = 0;
            };
            int x19188 = ite20011;
            if (!(x19188)) break; 
            
            struct PARTRecord* x4343 = current4339;
            struct PARTRecord* x4938 = x4343->next;
            struct PARTRecord* x4345 = current4339;
            int x4049 = x4345->P_PARTKEY;
            int x4050 = x4049==(x7729);
            if(x4050) {
              char* x691 = x4345->P_TYPE;
              double x7762 = x11792[x1445];
              double x7764 = x11793[x1445];
              double x293 = x22567[0];
              int x16852 = strlen("PROMO");
              int x16853 = strncmp(x691, "PROMO", x16852);
              int x16854 = x16853==(0);
              /* VAR */ double ite19203 = 0;
              if(x16854) {
                double x19204 = 1.0-(x7764);
                double x19205 = x7762*(x19204);
                double x19206 = x293+(x19205);
                ite19203 = x19206;
              } else {
                
                ite19203 = x293;
              };
              double x301 = ite19203;
              *x22567 = x301;
              double x309 = x22567[1];
              double x312 = 1.0-(x7764);
              double x313 = x7762*(x312);
              double x314 = x309+(x313);
              *(x22567 + 1) = x314;
            };
            current4339 = x4938;
          };
        };
      };
      int x1606 = x22578;
      int x326 = x1606+(1);
      x22578 = x326;
    };
    double x22766 = x22567[0];
    double x22767 = x22766*(100.0);
    double x22768 = x22567[1];
    double x22769 = x22767/(x22768);
    *(x22567 + 2) = x22769;
    double x22771 = x22567[2];
    printf("%.4f\n", x22771);
    printf("(%d rows)\n", 1);
    struct timeval* x22774 = &x22574;
    gettimeofday(x22774, NULL);
    struct timeval* x22776 = &x22570;
    struct timeval* x22777 = &x22574;
    struct timeval* x22778 = &x22572;
    long x22779 = timeval_subtract(x22776, x22777, x22778);
    printf("Generated code run in %ld milliseconds.\n", x22779);
  };
}
/* ----------- FUNCTIONS ----------- */