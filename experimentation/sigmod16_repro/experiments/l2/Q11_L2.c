#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord;
  struct NATIONRecord_SUPPLIERRecord;
  struct AGGRecord_String;
  struct WindowRecord_Int_Double;
  struct NATIONRecord;
  struct SUPPLIERRecord;
  struct PARTSUPPRecord;
  
  struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord {
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
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
  };
  
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
  
  struct AGGRecord_String {
  char* key;
  double* aggs;
  };
  
  struct WindowRecord_Int_Double {
  int key;
  double wnd;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
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
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
  };
  
  


int x27074(void* x9548);

int x27077(void* x9551, void* x9552);

int x27084(void* x9558);

int x27087(void* x9561, void* x9562);

int x27094(void* x9568);

int x27097(void* x9571, void* x9572);

int x27671(struct WindowRecord_Int_Double* x355, struct WindowRecord_Int_Double* x356);

int x11515(void* x11509, void* x11510, void* x11511);
/* GLOBAL VARS */

struct timeval x6392;
int main(int argc, char** argv) {
  FILE* x7005 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x7006 = 0;
  int x7007 = x7006;
  int* x7008 = &x7007;
  int x7009 = fscanf(x7005, "%d", x7008);
  pclose(x7005);
  struct PARTSUPPRecord* x8119 = (struct PARTSUPPRecord*)malloc(x7007 * sizeof(struct PARTSUPPRecord));
  memset(x8119, 0, x7007 * sizeof(struct PARTSUPPRecord));
  int x7013 = O_RDONLY;
  int x7014 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x7013);
  struct stat x7015 = (struct stat){0};
  /* VAR */ struct stat x7016 = x7015;
  struct stat x7017 = x7016;
  struct stat* x7018 = &x7017;
  int x7019 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x7018);
  int x7021 = PROT_READ;
  int x7022 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x7018->st_size), x7021, x7022, x7014, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite22659 = 0;
    if((x5<(x7007))) {
      char x26088 = *x3;
      ite22659 = (x26088!=('\0'));
    } else {
      
      ite22659 = 0;
    };
    int x21053 = ite22659;
    if (!(x21053)) break; 
    
    /* VAR */ int x7030 = 0;
    int x7031 = x7030;
    int* x7032 = &x7031;
    char* x7033 = strntoi_unchecked(x3, x7032);
    x3 = x7033;
    /* VAR */ int x7035 = 0;
    int x7036 = x7035;
    int* x7037 = &x7036;
    char* x7038 = strntoi_unchecked(x3, x7037);
    x3 = x7038;
    /* VAR */ int x7040 = 0;
    int x7041 = x7040;
    int* x7042 = &x7041;
    char* x7043 = strntoi_unchecked(x3, x7042);
    x3 = x7043;
    /* VAR */ double x7045 = 0.0;
    double x7046 = x7045;
    double* x7047 = &x7046;
    char* x7048 = strntod_unchecked(x3, x7047);
    x3 = x7048;
    char* x8158 = (char*)malloc(200 * sizeof(char));
    memset(x8158, 0, 200 * sizeof(char));
    /* VAR */ char* x7051 = x3;
    while(1) {
      
      char x7052 = *x3;
      /* VAR */ int ite22693 = 0;
      if((x7052!=('|'))) {
        char x26121 = *x3;
        ite22693 = (x26121!=('\n'));
      } else {
        
        ite22693 = 0;
      };
      int x21080 = ite22693;
      if (!(x21080)) break; 
      
      x3 += 1;
    };
    char* x7059 = x7051;
    int x7060 = x3 - x7059;
    char* x7061 = x7051;
    char* x7062 = strncpy(x8158, x7061, x7060);
    x3 += 1;
    struct PARTSUPPRecord* x8744 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x8744, 0, 1 * sizeof(struct PARTSUPPRecord));
    x8744->PS_PARTKEY = x7031; x8744->PS_SUPPKEY = x7036; x8744->PS_AVAILQTY = x7041; x8744->PS_SUPPLYCOST = x7046; x8744->PS_COMMENT = x8158;
    int x22 = x4;
    struct PARTSUPPRecord x8178 = *x8744;
    *(x8119 + x22) = x8178;
    struct PARTSUPPRecord* x8180 = &(x8119[x22]);
    x8744 = x8180;
    int x24 = x4;
    x4 = (x24+(1));
  };
  FILE* x7075 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x7076 = 0;
  int x7077 = x7076;
  int* x7078 = &x7077;
  int x7079 = fscanf(x7075, "%d", x7078);
  pclose(x7075);
  struct SUPPLIERRecord* x8191 = (struct SUPPLIERRecord*)malloc(x7077 * sizeof(struct SUPPLIERRecord));
  memset(x8191, 0, x7077 * sizeof(struct SUPPLIERRecord));
  int x7083 = O_RDONLY;
  int x7084 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x7083);
  /* VAR */ struct stat x7085 = x7015;
  struct stat x7086 = x7085;
  struct stat* x7087 = &x7086;
  int x7088 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x7087);
  int x7090 = PROT_READ;
  int x7091 = MAP_PRIVATE;
  char* x30 = mmap(NULL, (x7087->st_size), x7090, x7091, x7084, 0);
  /* VAR */ int x31 = 0;
  while(1) {
    
    int x32 = x31;
    /* VAR */ int ite22743 = 0;
    if((x32<(x7077))) {
      char x26170 = *x30;
      ite22743 = (x26170!=('\0'));
    } else {
      
      ite22743 = 0;
    };
    int x21123 = ite22743;
    if (!(x21123)) break; 
    
    /* VAR */ int x7099 = 0;
    int x7100 = x7099;
    int* x7101 = &x7100;
    char* x7102 = strntoi_unchecked(x30, x7101);
    x30 = x7102;
    char* x8214 = (char*)malloc(26 * sizeof(char));
    memset(x8214, 0, 26 * sizeof(char));
    /* VAR */ char* x7105 = x30;
    while(1) {
      
      char x7106 = *x30;
      /* VAR */ int ite22762 = 0;
      if((x7106!=('|'))) {
        char x26188 = *x30;
        ite22762 = (x26188!=('\n'));
      } else {
        
        ite22762 = 0;
      };
      int x21135 = ite22762;
      if (!(x21135)) break; 
      
      x30 += 1;
    };
    char* x7113 = x7105;
    int x7114 = x30 - x7113;
    char* x7115 = x7105;
    char* x7116 = strncpy(x8214, x7115, x7114);
    x30 += 1;
    char* x8232 = (char*)malloc(41 * sizeof(char));
    memset(x8232, 0, 41 * sizeof(char));
    /* VAR */ char* x7124 = x30;
    while(1) {
      
      char x7125 = *x30;
      /* VAR */ int ite22785 = 0;
      if((x7125!=('|'))) {
        char x26210 = *x30;
        ite22785 = (x26210!=('\n'));
      } else {
        
        ite22785 = 0;
      };
      int x21151 = ite22785;
      if (!(x21151)) break; 
      
      x30 += 1;
    };
    char* x7132 = x7124;
    int x7133 = x30 - x7132;
    char* x7134 = x7124;
    char* x7135 = strncpy(x8232, x7134, x7133);
    x30 += 1;
    /* VAR */ int x7142 = 0;
    int x7143 = x7142;
    int* x7144 = &x7143;
    char* x7145 = strntoi_unchecked(x30, x7144);
    x30 = x7145;
    char* x8255 = (char*)malloc(16 * sizeof(char));
    memset(x8255, 0, 16 * sizeof(char));
    /* VAR */ char* x7148 = x30;
    while(1) {
      
      char x7149 = *x30;
      /* VAR */ int ite22813 = 0;
      if((x7149!=('|'))) {
        char x26237 = *x30;
        ite22813 = (x26237!=('\n'));
      } else {
        
        ite22813 = 0;
      };
      int x21172 = ite22813;
      if (!(x21172)) break; 
      
      x30 += 1;
    };
    char* x7156 = x7148;
    int x7157 = x30 - x7156;
    char* x7158 = x7148;
    char* x7159 = strncpy(x8255, x7158, x7157);
    x30 += 1;
    /* VAR */ double x7166 = 0.0;
    double x7167 = x7166;
    double* x7168 = &x7167;
    char* x7169 = strntod_unchecked(x30, x7168);
    x30 = x7169;
    char* x8278 = (char*)malloc(102 * sizeof(char));
    memset(x8278, 0, 102 * sizeof(char));
    /* VAR */ char* x7172 = x30;
    while(1) {
      
      char x7173 = *x30;
      /* VAR */ int ite22841 = 0;
      if((x7173!=('|'))) {
        char x26264 = *x30;
        ite22841 = (x26264!=('\n'));
      } else {
        
        ite22841 = 0;
      };
      int x21193 = ite22841;
      if (!(x21193)) break; 
      
      x30 += 1;
    };
    char* x7180 = x7172;
    int x7181 = x30 - x7180;
    char* x7182 = x7172;
    char* x7183 = strncpy(x8278, x7182, x7181);
    x30 += 1;
    struct SUPPLIERRecord* x8866 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x8866, 0, 1 * sizeof(struct SUPPLIERRecord));
    x8866->S_SUPPKEY = x7100; x8866->S_NAME = x8214; x8866->S_ADDRESS = x8232; x8866->S_NATIONKEY = x7143; x8866->S_PHONE = x8255; x8866->S_ACCTBAL = x7167; x8866->S_COMMENT = x8278;
    int x72 = x31;
    struct SUPPLIERRecord x8298 = *x8866;
    *(x8191 + x72) = x8298;
    struct SUPPLIERRecord* x8300 = &(x8191[x72]);
    x8866 = x8300;
    int x74 = x31;
    x31 = (x74+(1));
  };
  FILE* x7196 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x7197 = 0;
  int x7198 = x7197;
  int* x7199 = &x7198;
  int x7200 = fscanf(x7196, "%d", x7199);
  pclose(x7196);
  struct NATIONRecord* x8311 = (struct NATIONRecord*)malloc(x7198 * sizeof(struct NATIONRecord));
  memset(x8311, 0, x7198 * sizeof(struct NATIONRecord));
  int x7204 = O_RDONLY;
  int x7205 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x7204);
  /* VAR */ struct stat x7206 = x7015;
  struct stat x7207 = x7206;
  struct stat* x7208 = &x7207;
  int x7209 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x7208);
  int x7211 = PROT_READ;
  int x7212 = MAP_PRIVATE;
  char* x80 = mmap(NULL, (x7208->st_size), x7211, x7212, x7205, 0);
  /* VAR */ int x81 = 0;
  while(1) {
    
    int x82 = x81;
    /* VAR */ int ite22891 = 0;
    if((x82<(x7198))) {
      char x26313 = *x80;
      ite22891 = (x26313!=('\0'));
    } else {
      
      ite22891 = 0;
    };
    int x21236 = ite22891;
    if (!(x21236)) break; 
    
    /* VAR */ int x7220 = 0;
    int x7221 = x7220;
    int* x7222 = &x7221;
    char* x7223 = strntoi_unchecked(x80, x7222);
    x80 = x7223;
    char* x8334 = (char*)malloc(26 * sizeof(char));
    memset(x8334, 0, 26 * sizeof(char));
    /* VAR */ char* x7226 = x80;
    while(1) {
      
      char x7227 = *x80;
      /* VAR */ int ite22910 = 0;
      if((x7227!=('|'))) {
        char x26331 = *x80;
        ite22910 = (x26331!=('\n'));
      } else {
        
        ite22910 = 0;
      };
      int x21248 = ite22910;
      if (!(x21248)) break; 
      
      x80 += 1;
    };
    char* x7234 = x7226;
    int x7235 = x80 - x7234;
    char* x7236 = x7226;
    char* x7237 = strncpy(x8334, x7236, x7235);
    x80 += 1;
    /* VAR */ int x7244 = 0;
    int x7245 = x7244;
    int* x7246 = &x7245;
    char* x7247 = strntoi_unchecked(x80, x7246);
    x80 = x7247;
    char* x8357 = (char*)malloc(153 * sizeof(char));
    memset(x8357, 0, 153 * sizeof(char));
    /* VAR */ char* x7250 = x80;
    while(1) {
      
      char x7251 = *x80;
      /* VAR */ int ite22938 = 0;
      if((x7251!=('|'))) {
        char x26358 = *x80;
        ite22938 = (x26358!=('\n'));
      } else {
        
        ite22938 = 0;
      };
      int x21269 = ite22938;
      if (!(x21269)) break; 
      
      x80 += 1;
    };
    char* x7258 = x7250;
    int x7259 = x80 - x7258;
    char* x7260 = x7250;
    char* x7261 = strncpy(x8357, x7260, x7259);
    x80 += 1;
    struct NATIONRecord* x8947 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x8947, 0, 1 * sizeof(struct NATIONRecord));
    x8947->N_NATIONKEY = x7221; x8947->N_NAME = x8334; x8947->N_REGIONKEY = x7245; x8947->N_COMMENT = x8357;
    int x105 = x81;
    struct NATIONRecord x8377 = *x8947;
    *(x8311 + x105) = x8377;
    struct NATIONRecord* x8379 = &(x8311[x105]);
    x8947 = x8379;
    int x107 = x81;
    x81 = (x107+(1));
  };
  int x112 = 0;
  for(; x112 < 1 ; x112 += 1) {
    
    double* x27069 = (double*)malloc(1 * sizeof(double));
    memset(x27069, 0, 1 * sizeof(double));
    struct AGGRecord_String* x27070 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x27070, 0, 1 * sizeof(struct AGGRecord_String));
    x27070->key = "Total"; x27070->aggs = x27069;
    struct WindowRecord_Int_Double* x27073 = (struct WindowRecord_Int_Double*)malloc(48000000 * sizeof(struct WindowRecord_Int_Double));
    memset(x27073, 0, 48000000 * sizeof(struct WindowRecord_Int_Double));
    GHashTable* x27083 = g_hash_table_new(((void***){x27074}), ((int*){x27077}));
    GHashTable* x27093 = g_hash_table_new(((void***){x27084}), ((int*){x27087}));
    GHashTable* x27103 = g_hash_table_new(((void***){x27094}), ((int*){x27097}));
    /* VAR */ int x27104 = 0;
    struct NATIONRecord_SUPPLIERRecord* x27105 = (struct NATIONRecord_SUPPLIERRecord*)malloc(80000 * sizeof(struct NATIONRecord_SUPPLIERRecord));
    memset(x27105, 0, 80000 * sizeof(struct NATIONRecord_SUPPLIERRecord));
    /* VAR */ int x27106 = 0;
    while(1) {
      
      int x6133 = x27106;
      if (!((x6133<(80000)))) break; 
      
      int x6135 = x27106;
      struct NATIONRecord_SUPPLIERRecord* x8976 = (struct NATIONRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord));
      memset(x8976, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord));
      x8976->N_NATIONKEY = 0; x8976->N_NAME = ""; x8976->N_REGIONKEY = 0; x8976->N_COMMENT = ""; x8976->S_SUPPKEY = 0; x8976->S_NAME = ""; x8976->S_ADDRESS = ""; x8976->S_NATIONKEY = 0; x8976->S_PHONE = ""; x8976->S_ACCTBAL = 0.0; x8976->S_COMMENT = "";
      struct NATIONRecord_SUPPLIERRecord x8401 = *x8976;
      *(x27105 + x6135) = x8401;
      struct NATIONRecord_SUPPLIERRecord* x8403 = &(x27105[x6135]);
      x8976 = x8403;
      int x6138 = x27106;
      x27106 = (x6138+(1));
    };
    /* VAR */ int x27121 = 0;
    struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x27122 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(6400000 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x27122, 0, 6400000 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    /* VAR */ int x27123 = 0;
    while(1) {
      
      int x6145 = x27123;
      if (!((x6145<(6400000)))) break; 
      
      int x6147 = x27123;
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x8993 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x8993, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      x8993->N_NATIONKEY = 0; x8993->N_NAME = ""; x8993->N_REGIONKEY = 0; x8993->N_COMMENT = ""; x8993->S_SUPPKEY = 0; x8993->S_NAME = ""; x8993->S_ADDRESS = ""; x8993->S_NATIONKEY = 0; x8993->S_PHONE = ""; x8993->S_ACCTBAL = 0.0; x8993->S_COMMENT = ""; x8993->PS_PARTKEY = 0; x8993->PS_SUPPKEY = 0; x8993->PS_AVAILQTY = 0; x8993->PS_SUPPLYCOST = 0.0; x8993->PS_COMMENT = "";
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x8416 = *x8993;
      *(x27122 + x6147) = x8416;
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x8418 = &(x27122[x6147]);
      x8993 = x8418;
      int x6150 = x27123;
      x27123 = (x6150+(1));
    };
    /* VAR */ int x27138 = 0;
    struct WindowRecord_Int_Double* x27139 = (struct WindowRecord_Int_Double*)malloc(1600000 * sizeof(struct WindowRecord_Int_Double));
    memset(x27139, 0, 1600000 * sizeof(struct WindowRecord_Int_Double));
    /* VAR */ int x27140 = 0;
    while(1) {
      
      int x6157 = x27140;
      if (!((x6157<(1600000)))) break; 
      
      int x6159 = x27140;
      struct WindowRecord_Int_Double* x9010 = (struct WindowRecord_Int_Double*)malloc(1 * sizeof(struct WindowRecord_Int_Double));
      memset(x9010, 0, 1 * sizeof(struct WindowRecord_Int_Double));
      x9010->key = 0; x9010->wnd = 0.0;
      struct WindowRecord_Int_Double x8431 = *x9010;
      *(x27139 + x6159) = x8431;
      struct WindowRecord_Int_Double* x8433 = &(x27139[x6159]);
      x9010 = x8433;
      int x6162 = x27140;
      x27140 = (x6162+(1));
    };
    /* VAR */ struct timeval x27155 = x6392;
    struct timeval x27156 = x27155;
    /* VAR */ struct timeval x27157 = x6392;
    struct timeval x27158 = x27157;
    /* VAR */ struct timeval x27159 = x6392;
    struct timeval x27160 = x27159;
    struct timeval* x27161 = &x27158;
    gettimeofday(x27161, NULL);
    /* VAR */ int x27163 = 0;
    /* VAR */ int x27164 = 0;
    /* VAR */ int x27165 = 0;
    /* VAR */ int x27166 = 0;
    /* VAR */ struct AGGRecord_String* x27167 = NULL;
    while(1) {
      
      int x27169 = x27164;
      if (!((x27169<(x7198)))) break; 
      
      int x2926 = x27164;
      struct NATIONRecord* x181 = &(x8311[x2926]);
      int x17181 = strcmp((x181->N_NAME), "UNITED KINGDOM");
      if((x17181==(0))) {
        void* x9653 = (void*){(x181->N_NATIONKEY)};
        void* x9655 = g_hash_table_lookup(x27103, x9653);
        GList** x9656 = (GList**){x9655};
        GList** x9657 = NULL;
        /* VAR */ GList** ite22081 = 0;
        if((x9656==(x9657))) {
          GList** x22082 = malloc(8);
          GList* x22083 = NULL;
          pointer_assign(x22082, x22083);
          ite22081 = x22082;
        } else {
          
          ite22081 = x9656;
        };
        GList** x9662 = ite22081;
        GList* x9663 = *(x9662);
        GList* x9664 = g_list_prepend(x9663, ((void*){x181}));
        pointer_assign(x9662, x9664);
        g_hash_table_insert(x27103, x9653, ((void*){x9662}));
      };
      int x2934 = x27164;
      x27164 = (x2934+(1));
    };
    while(1) {
      
      int x27202 = x27163;
      if (!((x27202<(x7077)))) break; 
      
      int x2943 = x27163;
      struct SUPPLIERRecord* x199 = &(x8191[x2943]);
      int x201 = x199->S_NATIONKEY;
      void* x9679 = g_hash_table_lookup(x27103, ((void*){x201}));
      GList** x9680 = (GList**){x9679};
      if((x9680!=(NULL))) {
        GList* x11129 = *(x9680);
        /* VAR */ GList* x11130 = x11129;
        while(1) {
          
          GList* x11131 = x11130;
          GList* x11132 = NULL;
          if (!((x11131!=(x11132)))) break; 
          
          GList* x11134 = x11130;
          void* x11135 = g_list_nth_data(x11134, 0);
          struct NATIONRecord* x11136 = (struct NATIONRecord*){x11135};
          GList* x11137 = x11130;
          GList* x11138 = g_list_next(x11137);
          x11130 = x11138;
          int x11140 = x11136->N_NATIONKEY;
          if((x11140==(x201))) {
            int x6212 = x27104;
            struct NATIONRecord_SUPPLIERRecord* x6213 = &(x27105[x6212]);
            x6213->N_NATIONKEY = x11140;
            x6213->N_NAME = (x11136->N_NAME);
            x6213->N_REGIONKEY = (x11136->N_REGIONKEY);
            x6213->N_COMMENT = (x11136->N_COMMENT);
            x6213->S_SUPPKEY = (x199->S_SUPPKEY);
            x6213->S_NAME = (x199->S_NAME);
            x6213->S_ADDRESS = (x199->S_ADDRESS);
            x6213->S_NATIONKEY = x201;
            x6213->S_PHONE = (x199->S_PHONE);
            x6213->S_ACCTBAL = (x199->S_ACCTBAL);
            x6213->S_COMMENT = (x199->S_COMMENT);
            int x6225 = x27104;
            x27104 = (x6225+(1));
            void* x9716 = (void*){(x6213->S_SUPPKEY)};
            void* x9718 = g_hash_table_lookup(x27093, x9716);
            GList** x9719 = (GList**){x9718};
            GList** x9720 = NULL;
            /* VAR */ GList** ite22206 = 0;
            if((x9719==(x9720))) {
              GList** x22207 = malloc(8);
              GList* x22208 = NULL;
              pointer_assign(x22207, x22208);
              ite22206 = x22207;
            } else {
              
              ite22206 = x9719;
            };
            GList** x9725 = ite22206;
            GList* x9726 = *(x9725);
            GList* x9727 = g_list_prepend(x9726, ((void*){x6213}));
            pointer_assign(x9725, x9727);
            g_hash_table_insert(x27093, x9716, ((void*){x9725}));
          };
        };
      };
      int x2989 = x27163;
      x27163 = (x2989+(1));
    };
    while(1) {
      
      int x27328 = x27165;
      if (!((x27328<(x7007)))) break; 
      
      int x2999 = x27165;
      struct PARTSUPPRecord* x240 = &(x8119[x2999]);
      int x242 = x240->PS_SUPPKEY;
      void* x9743 = g_hash_table_lookup(x27093, ((void*){x242}));
      GList** x9744 = (GList**){x9743};
      if((x9744!=(NULL))) {
        GList* x11258 = *(x9744);
        /* VAR */ GList* x11259 = x11258;
        while(1) {
          
          GList* x11260 = x11259;
          GList* x11261 = NULL;
          if (!((x11260!=(x11261)))) break; 
          
          GList* x11263 = x11259;
          void* x11264 = g_list_nth_data(x11263, 0);
          struct NATIONRecord_SUPPLIERRecord* x11265 = (struct NATIONRecord_SUPPLIERRecord*){x11264};
          GList* x11266 = x11259;
          GList* x11267 = g_list_next(x11266);
          x11259 = x11267;
          int x11269 = x11265->S_SUPPKEY;
          if((x11269==(x242))) {
            int x6264 = x27121;
            struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x6265 = &(x27122[x6264]);
            x6265->N_NATIONKEY = (x11265->N_NATIONKEY);
            x6265->N_NAME = (x11265->N_NAME);
            x6265->N_REGIONKEY = (x11265->N_REGIONKEY);
            x6265->N_COMMENT = (x11265->N_COMMENT);
            x6265->S_SUPPKEY = x11269;
            x6265->S_NAME = (x11265->S_NAME);
            x6265->S_ADDRESS = (x11265->S_ADDRESS);
            x6265->S_NATIONKEY = (x11265->S_NATIONKEY);
            x6265->S_PHONE = (x11265->S_PHONE);
            x6265->S_ACCTBAL = (x11265->S_ACCTBAL);
            x6265->S_COMMENT = (x11265->S_COMMENT);
            x6265->PS_PARTKEY = (x240->PS_PARTKEY);
            x6265->PS_SUPPKEY = x242;
            x6265->PS_AVAILQTY = (x240->PS_AVAILQTY);
            x6265->PS_SUPPLYCOST = (x240->PS_SUPPLYCOST);
            x6265->PS_COMMENT = (x240->PS_COMMENT);
            int x6282 = x27121;
            x27121 = (x6282+(1));
            void* x9790 = (void*){(x6265->PS_PARTKEY)};
            void* x9792 = g_hash_table_lookup(x27083, x9790);
            GList** x9793 = (GList**){x9792};
            GList** x9794 = NULL;
            /* VAR */ GList** ite22351 = 0;
            if((x9793==(x9794))) {
              GList** x22352 = malloc(8);
              GList* x22353 = NULL;
              pointer_assign(x22352, x22353);
              ite22351 = x22352;
            } else {
              
              ite22351 = x9793;
            };
            GList** x9799 = ite22351;
            GList* x9800 = *(x9799);
            GList* x9801 = g_list_prepend(x9800, ((void*){x6265}));
            pointer_assign(x9799, x9801);
            g_hash_table_insert(x27083, x9790, ((void*){x9799}));
          };
        };
      };
      int x3055 = x27165;
      x27165 = (x3055+(1));
    };
    GList* x27523 = g_hash_table_get_keys(x27083);
    /* VAR */ GList* x27524 = x27523;
    int x27525 = g_hash_table_size(x27083);
    int x19305 = 0;
    for(; x19305 < x27525 ; x19305 += 1) {
      
      GList* x19306 = x27524;
      void* x19307 = g_list_nth_data(x19306, 0);
      GList* x19308 = x27524;
      GList* x19309 = g_list_next(x19308);
      x27524 = x19309;
      void* x19311 = g_hash_table_lookup(x27083, x19307);
      GList** x19312 = (GList**){x19311};
      /* VAR */ double x19321 = 0.0;
      GList* x19322 = *(x19312);
      /* VAR */ GList* x19323 = x19322;
      while(1) {
        
        GList* x11405 = x19323;
        GList* x11406 = NULL;
        if (!((x11405!=(x11406)))) break; 
        
        GList* x11408 = x19323;
        void* x11409 = g_list_nth_data(x11408, 0);
        struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x11410 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x11409};
        double x11411 = x19321;
        x19321 = (x11411+(((x11410->PS_SUPPLYCOST)*((x11410->PS_AVAILQTY)))));
        GList* x11418 = x19323;
        GList* x11419 = g_list_next(x11418);
        x19323 = x11419;
      };
      double x19341 = x19321;
      GList* x19342 = *(x19312);
      void* x19343 = g_list_nth_data(x19342, 0);
      int x19346 = x27138;
      struct WindowRecord_Int_Double* x19347 = &(x27139[x19346]);
      x19347->key = (((struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x19343})->PS_PARTKEY);
      x19347->wnd = x19341;
      int x19350 = x27138;
      x27138 = (x19350+(1));
      int x19353 = x27166;
      struct WindowRecord_Int_Double x19354 = *x19347;
      *(x27073 + x19353) = x19354;
      struct WindowRecord_Int_Double* x19356 = &(x27073[x19353]);
      x19347 = x19356;
      int x19358 = x27166;
      x27166 = (x19358+(1));
    };
    /* VAR */ int x27635 = 0;
    while(1) {
      
      int x27637 = x27635;
      int x27638 = x27166;
      if (!((x27637<(x27638)))) break; 
      
      int x306 = x27635;
      struct WindowRecord_Int_Double* x307 = &(x27073[x306]);
      int x308 = x27635;
      x27635 = (x308+(1));
      double* x316 = x27070->aggs;
      double x330 = x316[0];
      *x316 = (x330+((x307->wnd)));
    };
    x27167 = x27070;
    struct AGGRecord_String* x27651 = x27167;
    int* x27690 = &(x27671);
    GTree* x27691 = g_tree_new(x27690);
    /* VAR */ int x27692 = 0;
    /* VAR */ int x27693 = 0;
    /* VAR */ int x27694 = 0;
    while(1) {
      
      int x27696 = x27694;
      int x27697 = x27166;
      if (!((x27696<(x27697)))) break; 
      
      int x681 = x27694;
      struct WindowRecord_Int_Double* x682 = &(x27073[x681]);
      int x683 = x27694;
      x27694 = (x683+(1));
      double x690 = ((double*) { x27651->aggs })[0];
      if(((x682->wnd)>((x690*(1.0E-4))))) {
        g_tree_insert(x27691, x682, x682);
      };
    };
    while(1) {
      
      int x3634 = x27692;
      int x698 = !(x3634);
      /* VAR */ int ite24313 = 0;
      if(x698) {
        int x27716 = g_tree_nnodes(x27691);
        ite24313 = (x27716!=(0));
      } else {
        
        ite24313 = 0;
      };
      int x22606 = ite24313;
      if (!(x22606)) break; 
      
      void* x11508 = NULL;
      void** x11516 = &(x11508);
      g_tree_foreach(x27691, x11515, x11516);
      struct WindowRecord_Int_Double* x11518 = (struct WindowRecord_Int_Double*){x11508};
      int x11519 = g_tree_remove(x27691, x11518);
      if(0) {
        x27692 = 1;
      } else {
        
        printf("%d|%.2f\n", (x11518->key), (x11518->wnd));
        int x3650 = x27693;
        x27693 = (x3650+(1));
      };
    };
    int x27742 = x27693;
    printf("(%d rows)\n", x27742);
    struct timeval* x27744 = &x27160;
    gettimeofday(x27744, NULL);
    struct timeval* x27746 = &x27156;
    struct timeval* x27747 = &x27160;
    struct timeval* x27748 = &x27158;
    long x27749 = timeval_subtract(x27746, x27747, x27748);
    printf("Generated code run in %ld milliseconds.\n", x27749);
  };
}
/* ----------- FUNCTIONS ----------- */
int x27074(void* x9548) {
  int x9549 = g_direct_hash(x9548);
  return x9549; 
}

int x27077(void* x9551, void* x9552) {
  int x9553 = g_direct_equal(x9551, x9552);
  return x9553; 
}

int x27084(void* x9558) {
  int x9559 = g_direct_hash(x9558);
  return x9559; 
}

int x27087(void* x9561, void* x9562) {
  int x9563 = g_direct_equal(x9561, x9562);
  return x9563; 
}

int x27094(void* x9568) {
  int x9569 = g_direct_hash(x9568);
  return x9569; 
}

int x27097(void* x9571, void* x9572) {
  int x9573 = g_direct_equal(x9571, x9572);
  return x9573; 
}

int x27671(struct WindowRecord_Int_Double* x355, struct WindowRecord_Int_Double* x356) {
  double x357 = x355->wnd;
  double x358 = x356->wnd;
  /* VAR */ int ite22570 = 0;
  if((x357>(x358))) {
    ite22570 = -1;
  } else {
    
    /* VAR */ int ite22574 = 0;
    if((x357<(x358))) {
      ite22574 = 1;
    } else {
      
      ite22574 = 0;
    };
    int x22573 = ite22574;
    ite22570 = x22573;
  };
  int x362 = ite22570;
  return x362; 
}

int x11515(void* x11509, void* x11510, void* x11511) {
  pointer_assign(((struct WindowRecord_Int_Double**){x11511}), ((struct WindowRecord_Int_Double*){x11510}));
  return 1; 
}
