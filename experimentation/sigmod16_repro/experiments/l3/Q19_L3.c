#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_String;
  struct LINEITEMRecord;
  struct PARTRecord;
  
  struct AGGRecord_String {
  char* key;
  double* aggs;
  };
  
  struct LINEITEMRecord {
  int L_PARTKEY;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  char* L_SHIPINSTRUCT;
  char* L_SHIPMODE;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  char* P_BRAND;
  int P_SIZE;
  char* P_CONTAINER;
  };
  
  

/* GLOBAL VARS */

struct timeval x8386;
int main(int argc, char** argv) {
  FILE* x8875 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x8876 = 0;
  int x8877 = x8876;
  int* x8878 = &x8877;
  int x8879 = fscanf(x8875, "%d", x8878);
  pclose(x8875);
  struct LINEITEMRecord* x10013 = (struct LINEITEMRecord*)malloc(x8877 * sizeof(struct LINEITEMRecord));
  memset(x10013, 0, x8877 * sizeof(struct LINEITEMRecord));
  int x8883 = O_RDONLY;
  int x8884 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x8883);
  struct stat x8885 = (struct stat){0};
  /* VAR */ struct stat x8886 = x8885;
  struct stat x8887 = x8886;
  struct stat* x8888 = &x8887;
  int x8889 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x8888);
  int x8891 = PROT_READ;
  int x8892 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x8888->st_size), x8891, x8892, x8884, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite18324 = 0;
    if((x5<(x8877))) {
      char x24535 = *x3;
      ite18324 = (x24535!=('\0'));
    } else {
      
      ite18324 = 0;
    };
    int x17569 = ite18324;
    if (!(x17569)) break; 
    
    /* VAR */ int x8900 = 0;
    int x8901 = x8900;
    int* x8902 = &x8901;
    char* x8903 = strntoi_unchecked(x3, x8902);
    x3 = x8903;
    /* VAR */ int x8905 = 0;
    int x8906 = x8905;
    int* x8907 = &x8906;
    char* x8908 = strntoi_unchecked(x3, x8907);
    x3 = x8908;
    /* VAR */ int x8910 = 0;
    int x8911 = x8910;
    int* x8912 = &x8911;
    char* x8913 = strntoi_unchecked(x3, x8912);
    x3 = x8913;
    /* VAR */ int x8915 = 0;
    int x8916 = x8915;
    int* x8917 = &x8916;
    char* x8918 = strntoi_unchecked(x3, x8917);
    x3 = x8918;
    /* VAR */ double x8920 = 0.0;
    double x8921 = x8920;
    double* x8922 = &x8921;
    char* x8923 = strntod_unchecked(x3, x8922);
    x3 = x8923;
    /* VAR */ double x8925 = 0.0;
    double x8926 = x8925;
    double* x8927 = &x8926;
    char* x8928 = strntod_unchecked(x3, x8927);
    x3 = x8928;
    /* VAR */ double x8930 = 0.0;
    double x8931 = x8930;
    double* x8932 = &x8931;
    char* x8933 = strntod_unchecked(x3, x8932);
    x3 = x8933;
    /* VAR */ double x8935 = 0.0;
    double x8936 = x8935;
    double* x8937 = &x8936;
    char* x8938 = strntod_unchecked(x3, x8937);
    x3 = x8938;
    char x8940 = *x3;
    /* VAR */ char x8941 = x8940;
    x3 += 1;
    x3 += 1;
    char x8945 = *x3;
    /* VAR */ char x8946 = x8945;
    x3 += 1;
    x3 += 1;
    /* VAR */ int x8950 = 0;
    int x8951 = x8950;
    int* x8952 = &x8951;
    char* x8953 = strntoi_unchecked(x3, x8952);
    x3 = x8953;
    /* VAR */ int x8955 = 0;
    int x8956 = x8955;
    int* x8957 = &x8956;
    char* x8958 = strntoi_unchecked(x3, x8957);
    x3 = x8958;
    /* VAR */ int x8960 = 0;
    int x8961 = x8960;
    int* x8962 = &x8961;
    char* x8963 = strntoi_unchecked(x3, x8962);
    x3 = x8963;
    /* VAR */ int x8969 = 0;
    int x8970 = x8969;
    int* x8971 = &x8970;
    char* x8972 = strntoi_unchecked(x3, x8971);
    x3 = x8972;
    /* VAR */ int x8974 = 0;
    int x8975 = x8974;
    int* x8976 = &x8975;
    char* x8977 = strntoi_unchecked(x3, x8976);
    x3 = x8977;
    /* VAR */ int x8979 = 0;
    int x8980 = x8979;
    int* x8981 = &x8980;
    char* x8982 = strntoi_unchecked(x3, x8981);
    x3 = x8982;
    /* VAR */ int x8988 = 0;
    int x8989 = x8988;
    int* x8990 = &x8989;
    char* x8991 = strntoi_unchecked(x3, x8990);
    x3 = x8991;
    /* VAR */ int x8993 = 0;
    int x8994 = x8993;
    int* x8995 = &x8994;
    char* x8996 = strntoi_unchecked(x3, x8995);
    x3 = x8996;
    /* VAR */ int x8998 = 0;
    int x8999 = x8998;
    int* x9000 = &x8999;
    char* x9001 = strntoi_unchecked(x3, x9000);
    x3 = x9001;
    char* x10139 = (char*)malloc(26 * sizeof(char));
    memset(x10139, 0, 26 * sizeof(char));
    /* VAR */ char* x9008 = x3;
    while(1) {
      
      char x9009 = *x3;
      /* VAR */ int ite18445 = 0;
      if((x9009!=('|'))) {
        char x24655 = *x3;
        ite18445 = (x24655!=('\n'));
      } else {
        
        ite18445 = 0;
      };
      int x17683 = ite18445;
      if (!(x17683)) break; 
      
      x3 += 1;
    };
    char* x9016 = x9008;
    int x9017 = x3 - x9016;
    char* x9018 = x9008;
    char* x9019 = strncpy(x10139, x9018, x9017);
    x3 += 1;
    char* x10157 = (char*)malloc(11 * sizeof(char));
    memset(x10157, 0, 11 * sizeof(char));
    /* VAR */ char* x9027 = x3;
    while(1) {
      
      char x9028 = *x3;
      /* VAR */ int ite18468 = 0;
      if((x9028!=('|'))) {
        char x24677 = *x3;
        ite18468 = (x24677!=('\n'));
      } else {
        
        ite18468 = 0;
      };
      int x17699 = ite18468;
      if (!(x17699)) break; 
      
      x3 += 1;
    };
    char* x9035 = x9027;
    int x9036 = x3 - x9035;
    char* x9037 = x9027;
    char* x9038 = strncpy(x10157, x9037, x9036);
    x3 += 1;
    char* x10175 = (char*)malloc(45 * sizeof(char));
    memset(x10175, 0, 45 * sizeof(char));
    /* VAR */ char* x9046 = x3;
    while(1) {
      
      char x9047 = *x3;
      /* VAR */ int ite18491 = 0;
      if((x9047!=('|'))) {
        char x24699 = *x3;
        ite18491 = (x24699!=('\n'));
      } else {
        
        ite18491 = 0;
      };
      int x17715 = ite18491;
      if (!(x17715)) break; 
      
      x3 += 1;
    };
    char* x9054 = x9046;
    int x9055 = x3 - x9054;
    char* x9056 = x9046;
    char* x9057 = strncpy(x10175, x9056, x9055);
    x3 += 1;
    struct LINEITEMRecord* x10759 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x10759, 0, 1 * sizeof(struct LINEITEMRecord));
    x10759->L_PARTKEY = x8906; x10759->L_QUANTITY = x8921; x10759->L_EXTENDEDPRICE = x8926; x10759->L_DISCOUNT = x8931; x10759->L_SHIPINSTRUCT = x10139; x10759->L_SHIPMODE = x10157;
    int x47 = x4;
    struct LINEITEMRecord x10195 = *x10759;
    *(x10013 + x47) = x10195;
    struct LINEITEMRecord* x10197 = &(x10013[x47]);
    x10759 = x10197;
    int x49 = x4;
    x4 = (x49+(1));
  };
  FILE* x9070 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x9071 = 0;
  int x9072 = x9071;
  int* x9073 = &x9072;
  int x9074 = fscanf(x9070, "%d", x9073);
  pclose(x9070);
  struct PARTRecord* x10208 = (struct PARTRecord*)malloc(x9072 * sizeof(struct PARTRecord));
  memset(x10208, 0, x9072 * sizeof(struct PARTRecord));
  int x9078 = O_RDONLY;
  int x9079 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x9078);
  /* VAR */ struct stat x9080 = x8885;
  struct stat x9081 = x9080;
  struct stat* x9082 = &x9081;
  int x9083 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x9082);
  int x9085 = PROT_READ;
  int x9086 = MAP_PRIVATE;
  char* x55 = mmap(NULL, (x9082->st_size), x9085, x9086, x9079, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    /* VAR */ int ite18541 = 0;
    if((x57<(x9072))) {
      char x24748 = *x55;
      ite18541 = (x24748!=('\0'));
    } else {
      
      ite18541 = 0;
    };
    int x17758 = ite18541;
    if (!(x17758)) break; 
    
    /* VAR */ int x9094 = 0;
    int x9095 = x9094;
    int* x9096 = &x9095;
    char* x9097 = strntoi_unchecked(x55, x9096);
    x55 = x9097;
    char* x10231 = (char*)malloc(56 * sizeof(char));
    memset(x10231, 0, 56 * sizeof(char));
    /* VAR */ char* x9100 = x55;
    while(1) {
      
      char x9101 = *x55;
      /* VAR */ int ite18560 = 0;
      if((x9101!=('|'))) {
        char x24766 = *x55;
        ite18560 = (x24766!=('\n'));
      } else {
        
        ite18560 = 0;
      };
      int x17770 = ite18560;
      if (!(x17770)) break; 
      
      x55 += 1;
    };
    char* x9108 = x9100;
    int x9109 = x55 - x9108;
    char* x9110 = x9100;
    char* x9111 = strncpy(x10231, x9110, x9109);
    x55 += 1;
    char* x10249 = (char*)malloc(26 * sizeof(char));
    memset(x10249, 0, 26 * sizeof(char));
    /* VAR */ char* x9119 = x55;
    while(1) {
      
      char x9120 = *x55;
      /* VAR */ int ite18583 = 0;
      if((x9120!=('|'))) {
        char x24788 = *x55;
        ite18583 = (x24788!=('\n'));
      } else {
        
        ite18583 = 0;
      };
      int x17786 = ite18583;
      if (!(x17786)) break; 
      
      x55 += 1;
    };
    char* x9127 = x9119;
    int x9128 = x55 - x9127;
    char* x9129 = x9119;
    char* x9130 = strncpy(x10249, x9129, x9128);
    x55 += 1;
    char* x10267 = (char*)malloc(11 * sizeof(char));
    memset(x10267, 0, 11 * sizeof(char));
    /* VAR */ char* x9138 = x55;
    while(1) {
      
      char x9139 = *x55;
      /* VAR */ int ite18606 = 0;
      if((x9139!=('|'))) {
        char x24810 = *x55;
        ite18606 = (x24810!=('\n'));
      } else {
        
        ite18606 = 0;
      };
      int x17802 = ite18606;
      if (!(x17802)) break; 
      
      x55 += 1;
    };
    char* x9146 = x9138;
    int x9147 = x55 - x9146;
    char* x9148 = x9138;
    char* x9149 = strncpy(x10267, x9148, x9147);
    x55 += 1;
    char* x10285 = (char*)malloc(26 * sizeof(char));
    memset(x10285, 0, 26 * sizeof(char));
    /* VAR */ char* x9157 = x55;
    while(1) {
      
      char x9158 = *x55;
      /* VAR */ int ite18629 = 0;
      if((x9158!=('|'))) {
        char x24832 = *x55;
        ite18629 = (x24832!=('\n'));
      } else {
        
        ite18629 = 0;
      };
      int x17818 = ite18629;
      if (!(x17818)) break; 
      
      x55 += 1;
    };
    char* x9165 = x9157;
    int x9166 = x55 - x9165;
    char* x9167 = x9157;
    char* x9168 = strncpy(x10285, x9167, x9166);
    x55 += 1;
    /* VAR */ int x9175 = 0;
    int x9176 = x9175;
    int* x9177 = &x9176;
    char* x9178 = strntoi_unchecked(x55, x9177);
    x55 = x9178;
    char* x10308 = (char*)malloc(11 * sizeof(char));
    memset(x10308, 0, 11 * sizeof(char));
    /* VAR */ char* x9181 = x55;
    while(1) {
      
      char x9182 = *x55;
      /* VAR */ int ite18657 = 0;
      if((x9182!=('|'))) {
        char x24859 = *x55;
        ite18657 = (x24859!=('\n'));
      } else {
        
        ite18657 = 0;
      };
      int x17839 = ite18657;
      if (!(x17839)) break; 
      
      x55 += 1;
    };
    char* x9189 = x9181;
    int x9190 = x55 - x9189;
    char* x9191 = x9181;
    char* x9192 = strncpy(x10308, x9191, x9190);
    x55 += 1;
    /* VAR */ double x9199 = 0.0;
    double x9200 = x9199;
    double* x9201 = &x9200;
    char* x9202 = strntod_unchecked(x55, x9201);
    x55 = x9202;
    char* x10331 = (char*)malloc(24 * sizeof(char));
    memset(x10331, 0, 24 * sizeof(char));
    /* VAR */ char* x9205 = x55;
    while(1) {
      
      char x9206 = *x55;
      /* VAR */ int ite18685 = 0;
      if((x9206!=('|'))) {
        char x24886 = *x55;
        ite18685 = (x24886!=('\n'));
      } else {
        
        ite18685 = 0;
      };
      int x17860 = ite18685;
      if (!(x17860)) break; 
      
      x55 += 1;
    };
    char* x9213 = x9205;
    int x9214 = x55 - x9213;
    char* x9215 = x9205;
    char* x9216 = strncpy(x10331, x9215, x9214);
    x55 += 1;
    struct PARTRecord* x10917 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x10917, 0, 1 * sizeof(struct PARTRecord));
    x10917->P_PARTKEY = x9095; x10917->P_BRAND = x10267; x10917->P_SIZE = x9176; x10917->P_CONTAINER = x10308;
    int x111 = x56;
    struct PARTRecord x10351 = *x10917;
    *(x10208 + x111) = x10351;
    struct PARTRecord* x10353 = &(x10208[x111]);
    x10917 = x10353;
    int x113 = x56;
    x56 = (x113+(1));
  };
  int x118 = 0;
  for(; x118 < 1 ; x118 += 1) {
    
    double* x25518 = (double*)malloc(1 * sizeof(double));
    memset(x25518, 0, 1 * sizeof(double));
    struct AGGRecord_String* x25519 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x25519, 0, 1 * sizeof(struct AGGRecord_String));
    x25519->key = "Total"; x25519->aggs = x25518;
    struct LINEITEMRecord** x25522 = (struct LINEITEMRecord**)malloc(1600000 * sizeof(struct LINEITEMRecord*));
    memset(x25522, 0, 1600000 * sizeof(struct LINEITEMRecord*));
    int* x25523 = (int*)malloc(1600000 * sizeof(int));
    memset(x25523, 0, 1600000 * sizeof(int));
    int x16116 = 0;
    for(; x16116 < 1600000 ; x16116 += 1) {
      
      struct LINEITEMRecord* x16117 = (struct LINEITEMRecord*)malloc(1024 * sizeof(struct LINEITEMRecord));
      memset(x16117, 0, 1024 * sizeof(struct LINEITEMRecord));
      *(x25522 + x16116) = x16117;
    };
    /* VAR */ int x25531 = 0;
    int x16137 = 0;
    for(; x16137 < x8877 ; x16137 += 1) {
      
      struct LINEITEMRecord* x16138 = &(x10013[x16137]);
      int x16140 = (x16138->L_PARTKEY)%(1600000);
      int x16141 = x25523[x16140];
      struct LINEITEMRecord* x16142 = x25522[x16140];
      struct LINEITEMRecord x16143 = *x16138;
      *(x16142 + x16141) = x16143;
      struct LINEITEMRecord* x16145 = &(x16142[x16141]);
      x16138 = x16145;
      *(x25523 + x16140) = (x16141+(1));
      int x16149 = x25531;
      x25531 = (x16149+(1));
    };
    /* VAR */ struct timeval x25563 = x8386;
    struct timeval x25564 = x25563;
    /* VAR */ struct timeval x25565 = x8386;
    struct timeval x25566 = x25565;
    /* VAR */ struct timeval x25567 = x8386;
    struct timeval x25568 = x25567;
    struct timeval* x25569 = &x25566;
    gettimeofday(x25569, NULL);
    /* VAR */ int x25571 = 0;
    /* VAR */ int x25572 = 0;
    /* VAR */ int x25573 = 0;
    while(1) {
      
      int x25575 = x25571;
      if (!((x25575<(x9072)))) break; 
      
      int x2415 = x25571;
      struct PARTRecord* x363 = &(x10208[x2415]);
      int x365 = x363->P_SIZE;
      /* VAR */ int ite19181 = 0;
      if((x365<=(5))) {
        int x25585 = strcmp((x363->P_BRAND), "Brand#31");
        ite19181 = (x25585==(0));
      } else {
        
        ite19181 = 0;
      };
      int x18157 = ite19181;
      /* VAR */ int ite19191 = 0;
      if(x18157) {
        char* x25593 = x363->P_CONTAINER;
        int x25594 = strcmp(x25593, "SM BOX");
        /* VAR */ int x25596 = 0;
        if((x25594==(0))) {
          x25596 = 1;
        } else {
          
          int x25599 = strcmp(x25593, "SM CASE");
          x25596 = (x25599==(0));
        };
        int x25603 = x25596;
        /* VAR */ int x25604 = 0;
        if(x25603) {
          x25604 = 1;
        } else {
          
          int x25607 = strcmp(x25593, "SM PACK");
          x25604 = (x25607==(0));
        };
        int x25611 = x25604;
        /* VAR */ int x25612 = 0;
        if(x25611) {
          x25612 = 1;
        } else {
          
          int x25615 = strcmp(x25593, "SM PKG");
          x25612 = (x25615==(0));
        };
        int x25619 = x25612;
        ite19191 = x25619;
      } else {
        
        ite19191 = 0;
      };
      int x18159 = ite19191;
      /* VAR */ int ite19209 = 0;
      if((x365<=(10))) {
        int x25629 = strcmp((x363->P_BRAND), "Brand#43");
        ite19209 = (x25629==(0));
      } else {
        
        ite19209 = 0;
      };
      int x18163 = ite19209;
      /* VAR */ int ite19219 = 0;
      if(x18163) {
        char* x25637 = x363->P_CONTAINER;
        int x25638 = strcmp(x25637, "MED BAG");
        /* VAR */ int x25640 = 0;
        if((x25638==(0))) {
          x25640 = 1;
        } else {
          
          int x25643 = strcmp(x25637, "MED BOX");
          x25640 = (x25643==(0));
        };
        int x25647 = x25640;
        /* VAR */ int x25648 = 0;
        if(x25647) {
          x25648 = 1;
        } else {
          
          int x25651 = strcmp(x25637, "MED PACK");
          x25648 = (x25651==(0));
        };
        int x25655 = x25648;
        /* VAR */ int x25656 = 0;
        if(x25655) {
          x25656 = 1;
        } else {
          
          int x25659 = strcmp(x25637, "MED PKG");
          x25656 = (x25659==(0));
        };
        int x25663 = x25656;
        ite19219 = x25663;
      } else {
        
        ite19219 = 0;
      };
      int x18165 = ite19219;
      /* VAR */ int ite19237 = 0;
      if((x365<=(15))) {
        int x25673 = strcmp((x363->P_BRAND), "Brand#43");
        ite19237 = (x25673==(0));
      } else {
        
        ite19237 = 0;
      };
      int x18169 = ite19237;
      /* VAR */ int ite19247 = 0;
      if(x18169) {
        char* x25681 = x363->P_CONTAINER;
        int x25682 = strcmp(x25681, "LG BOX");
        /* VAR */ int x25684 = 0;
        if((x25682==(0))) {
          x25684 = 1;
        } else {
          
          int x25687 = strcmp(x25681, "LG CASE");
          x25684 = (x25687==(0));
        };
        int x25691 = x25684;
        /* VAR */ int x25692 = 0;
        if(x25691) {
          x25692 = 1;
        } else {
          
          int x25695 = strcmp(x25681, "LG PACK");
          x25692 = (x25695==(0));
        };
        int x25699 = x25692;
        /* VAR */ int x25700 = 0;
        if(x25699) {
          x25700 = 1;
        } else {
          
          int x25703 = strcmp(x25681, "LG PKG");
          x25700 = (x25703==(0));
        };
        int x25707 = x25700;
        ite19247 = x25707;
      } else {
        
        ite19247 = 0;
      };
      int x18171 = ite19247;
      if(((((x365>=(1))&(x18159))|(x18165))|(x18171))) {
        int x409 = x363->P_PARTKEY;
        int x6977 = x409%(1600000);
        int x6978 = x25523[x6977];
        struct LINEITEMRecord* x6979 = x25522[x6977];
        int x16341 = 0;
        for(; x16341 < x6978 ; x16341 += 1) {
          
          struct LINEITEMRecord* x16342 = &(x6979[x16341]);
          double x16343 = x16342->L_QUANTITY;
          /* VAR */ int ite19396 = 0;
          if(((((x16343<=(36.0))&((x16343>=(26.0))))|(((x16343<=(25.0))&((x16343>=(15.0))))))|(((x16343<=(14.0))&((x16343>=(4.0))))))) {
            int x25927 = strcmp((x16342->L_SHIPINSTRUCT), "DELIVER IN PERSON");
            ite19396 = (x25927==(0));
          } else {
            
            ite19396 = 0;
          };
          int x18245 = ite19396;
          /* VAR */ int ite19406 = 0;
          if(x18245) {
            char* x25935 = x16342->L_SHIPMODE;
            int x25936 = strcmp(x25935, "AIR");
            /* VAR */ int x25938 = 0;
            if((x25936==(0))) {
              x25938 = 1;
            } else {
              
              int x25941 = strcmp(x25935, "AIRREG");
              x25938 = (x25941==(0));
            };
            int x25945 = x25938;
            ite19406 = x25945;
          } else {
            
            ite19406 = 0;
          };
          int x18247 = ite19406;
          if(x18247) {
            if(((x16342->L_PARTKEY)==(x409))) {
              if((x409==((x16342->L_PARTKEY)))) {
                double x1212 = x16342->L_QUANTITY;
                char* x1217 = x363->P_BRAND;
                char* x1218 = x363->P_CONTAINER;
                int x15069 = strcmp(x1217, "Brand#31");
                /* VAR */ int ite19432 = 0;
                if((x15069==(0))) {
                  int x25966 = strcmp(x1218, "SM BOX");
                  /* VAR */ int x25968 = 0;
                  if((x25966==(0))) {
                    x25968 = 1;
                  } else {
                    
                    int x25971 = strcmp(x1218, "SM CASE");
                    x25968 = (x25971==(0));
                  };
                  int x25975 = x25968;
                  /* VAR */ int x25976 = 0;
                  if(x25975) {
                    x25976 = 1;
                  } else {
                    
                    int x25979 = strcmp(x1218, "SM PACK");
                    x25976 = (x25979==(0));
                  };
                  int x25983 = x25976;
                  /* VAR */ int x25984 = 0;
                  if(x25983) {
                    x25984 = 1;
                  } else {
                    
                    int x25987 = strcmp(x1218, "SM PKG");
                    x25984 = (x25987==(0));
                  };
                  int x25991 = x25984;
                  ite19432 = x25991;
                } else {
                  
                  ite19432 = 0;
                };
                int x18263 = ite19432;
                /* VAR */ int ite19453 = 0;
                if((((x18263&((x1212>=(4.0))))&((x1212<=(14.0))))&((x365<=(5))))) {
                  ite19453 = 1;
                } else {
                  
                  int x26005 = strcmp(x1217, "Brand#43");
                  /* VAR */ int x26007 = 0;
                  if((x26005==(0))) {
                    int x26009 = strcmp(x1218, "MED BAG");
                    /* VAR */ int x26011 = 0;
                    if((x26009==(0))) {
                      x26011 = 1;
                    } else {
                      
                      int x26014 = strcmp(x1218, "MED BOX");
                      x26011 = (x26014==(0));
                    };
                    int x26018 = x26011;
                    /* VAR */ int x26019 = 0;
                    if(x26018) {
                      x26019 = 1;
                    } else {
                      
                      int x26022 = strcmp(x1218, "MED PACK");
                      x26019 = (x26022==(0));
                    };
                    int x26026 = x26019;
                    /* VAR */ int x26027 = 0;
                    if(x26026) {
                      x26027 = 1;
                    } else {
                      
                      int x26030 = strcmp(x1218, "MED PKG");
                      x26027 = (x26030==(0));
                    };
                    int x26034 = x26027;
                    x26007 = x26034;
                  } else {
                    
                    x26007 = 0;
                  };
                  int x26038 = x26007;
                  ite19453 = (((x26038&((x1212>=(15.0))))&((x1212<=(25.0))))&((x365<=(10))));
                };
                int x18271 = ite19453;
                /* VAR */ int ite19470 = 0;
                if(x18271) {
                  ite19470 = 1;
                } else {
                  
                  int x26051 = strcmp(x1217, "Brand#43");
                  /* VAR */ int x26053 = 0;
                  if((x26051==(0))) {
                    int x26055 = strcmp(x1218, "LG BOX");
                    /* VAR */ int x26057 = 0;
                    if((x26055==(0))) {
                      x26057 = 1;
                    } else {
                      
                      int x26060 = strcmp(x1218, "LG CASE");
                      x26057 = (x26060==(0));
                    };
                    int x26064 = x26057;
                    /* VAR */ int x26065 = 0;
                    if(x26064) {
                      x26065 = 1;
                    } else {
                      
                      int x26068 = strcmp(x1218, "LG PACK");
                      x26065 = (x26068==(0));
                    };
                    int x26072 = x26065;
                    /* VAR */ int x26073 = 0;
                    if(x26072) {
                      x26073 = 1;
                    } else {
                      
                      int x26076 = strcmp(x1218, "LG PKG");
                      x26073 = (x26076==(0));
                    };
                    int x26080 = x26073;
                    x26053 = x26080;
                  } else {
                    
                    x26053 = 0;
                  };
                  int x26084 = x26053;
                  ite19470 = (((x26084&((x1212>=(26.0))))&((x1212<=(36.0))))&((x365<=(15))));
                };
                int x18273 = ite19470;
                if(x18273) {
                  double* x593 = x25519->aggs;
                  double x607 = x593[0];
                  *x593 = (x607+(((x16342->L_EXTENDEDPRICE)*((1.0-((x16342->L_DISCOUNT)))))));
                };
              };
            };
          };
        };
      };
      int x2688 = x25571;
      x25571 = (x2688+(1));
    };
    if(0) {
      x25572 = 1;
    } else {
      
      double x638 = ((double*) { x25519->aggs })[0];
      printf("%.4f\n", x638);
      int x2704 = x25573;
      x25573 = (x2704+(1));
    };
    int x26112 = x25573;
    printf("(%d rows)\n", x26112);
    struct timeval* x26114 = &x25568;
    gettimeofday(x26114, NULL);
    struct timeval* x26116 = &x25564;
    struct timeval* x26117 = &x25568;
    struct timeval* x26118 = &x25566;
    long x26119 = timeval_subtract(x26116, x26117, x26118);
    printf("Generated code run in %ld milliseconds.\n", x26119);
  };
}
/* ----------- FUNCTIONS ----------- */