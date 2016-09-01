#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_String;
  struct LINEITEMRecord;
  struct LINEITEMRecord_PARTRecord;
  struct PARTRecord;
  
  struct AGGRecord_String {
  char* key;
  double* aggs;
  };
  
  struct LINEITEMRecord {
  int L_PARTKEY;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  };
  
  struct LINEITEMRecord_PARTRecord {
  int L_PARTKEY;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  int P_PARTKEY;
  int P_BRAND;
  int P_CONTAINER;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  int P_BRAND;
  int P_CONTAINER;
  };
  
  


int x23501(void* x7455);

int x23504(void* x7458, void* x7459);
/* GLOBAL VARS */

struct timeval x4507;
int main(int argc, char** argv) {
  /* VAR */ int x3449 = 0;
  int x8287 = sizeof(char**);
  GArray* x8288 = g_array_new(0, 1, x8287);
  /* VAR */ int x3451 = 0;
  int x8290 = sizeof(char**);
  GArray* x8291 = g_array_new(0, 1, x8290);
  FILE* x22512 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x22513 = 0;
  int x22514 = x22513;
  int* x22515 = &x22514;
  int x22516 = fscanf(x22512, "%d", x22515);
  pclose(x22512);
  struct LINEITEMRecord* x22518 = (struct LINEITEMRecord*)malloc(x22514 * sizeof(struct LINEITEMRecord));
  memset(x22518, 0, x22514 * sizeof(struct LINEITEMRecord));
  int x22519 = O_RDONLY;
  int x22520 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x22519);
  struct stat x22521 = (struct stat){0};
  /* VAR */ struct stat x22522 = x22521;
  struct stat x22523 = x22522;
  struct stat* x22524 = &x22523;
  int x22525 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x22524);
  int x22527 = PROT_READ;
  int x22528 = MAP_PRIVATE;
  char* x22529 = mmap(NULL, (x22524->st_size), x22527, x22528, x22520, 0);
  /* VAR */ int x22530 = 0;
  while(1) {
    
    int x5 = x22530;
    /* VAR */ int ite19550 = 0;
    if((x5<(x22514))) {
      char x22536 = *x22529;
      ite19550 = (x22536!=('\0'));
    } else {
      
      ite19550 = 0;
    };
    int x18152 = ite19550;
    if (!(x18152)) break; 
    
    /* VAR */ int x4926 = 0;
    int x4927 = x4926;
    int* x4928 = &x4927;
    char* x4929 = strntoi_unchecked(x22529, x4928);
    x22529 = x4929;
    /* VAR */ int x4931 = 0;
    int x4932 = x4931;
    int* x4933 = &x4932;
    char* x4934 = strntoi_unchecked(x22529, x4933);
    x22529 = x4934;
    /* VAR */ int x4936 = 0;
    int x4937 = x4936;
    int* x4938 = &x4937;
    char* x4939 = strntoi_unchecked(x22529, x4938);
    x22529 = x4939;
    /* VAR */ int x4941 = 0;
    int x4942 = x4941;
    int* x4943 = &x4942;
    char* x4944 = strntoi_unchecked(x22529, x4943);
    x22529 = x4944;
    /* VAR */ double x4946 = 0.0;
    double x4947 = x4946;
    double* x4948 = &x4947;
    char* x4949 = strntod_unchecked(x22529, x4948);
    x22529 = x4949;
    /* VAR */ double x4951 = 0.0;
    double x4952 = x4951;
    double* x4953 = &x4952;
    char* x4954 = strntod_unchecked(x22529, x4953);
    x22529 = x4954;
    /* VAR */ double x4956 = 0.0;
    double x4957 = x4956;
    double* x4958 = &x4957;
    char* x4959 = strntod_unchecked(x22529, x4958);
    x22529 = x4959;
    /* VAR */ double x4961 = 0.0;
    double x4962 = x4961;
    double* x4963 = &x4962;
    char* x4964 = strntod_unchecked(x22529, x4963);
    x22529 = x4964;
    char x4966 = *x22529;
    /* VAR */ char x4967 = x4966;
    x22529 += 1;
    x22529 += 1;
    char x4971 = *x22529;
    /* VAR */ char x4972 = x4971;
    x22529 += 1;
    x22529 += 1;
    /* VAR */ int x4976 = 0;
    int x4977 = x4976;
    int* x4978 = &x4977;
    char* x4979 = strntoi_unchecked(x22529, x4978);
    x22529 = x4979;
    /* VAR */ int x4981 = 0;
    int x4982 = x4981;
    int* x4983 = &x4982;
    char* x4984 = strntoi_unchecked(x22529, x4983);
    x22529 = x4984;
    /* VAR */ int x4986 = 0;
    int x4987 = x4986;
    int* x4988 = &x4987;
    char* x4989 = strntoi_unchecked(x22529, x4988);
    x22529 = x4989;
    /* VAR */ int x4995 = 0;
    int x4996 = x4995;
    int* x4997 = &x4996;
    char* x4998 = strntoi_unchecked(x22529, x4997);
    x22529 = x4998;
    /* VAR */ int x5000 = 0;
    int x5001 = x5000;
    int* x5002 = &x5001;
    char* x5003 = strntoi_unchecked(x22529, x5002);
    x22529 = x5003;
    /* VAR */ int x5005 = 0;
    int x5006 = x5005;
    int* x5007 = &x5006;
    char* x5008 = strntoi_unchecked(x22529, x5007);
    x22529 = x5008;
    /* VAR */ int x5014 = 0;
    int x5015 = x5014;
    int* x5016 = &x5015;
    char* x5017 = strntoi_unchecked(x22529, x5016);
    x22529 = x5017;
    /* VAR */ int x5019 = 0;
    int x5020 = x5019;
    int* x5021 = &x5020;
    char* x5022 = strntoi_unchecked(x22529, x5021);
    x22529 = x5022;
    /* VAR */ int x5024 = 0;
    int x5025 = x5024;
    int* x5026 = &x5025;
    char* x5027 = strntoi_unchecked(x22529, x5026);
    x22529 = x5027;
    char* x6109 = (char*)malloc(26 * sizeof(char));
    memset(x6109, 0, 26 * sizeof(char));
    /* VAR */ char* x5034 = x22529;
    while(1) {
      
      char x5035 = *x22529;
      /* VAR */ int ite19671 = 0;
      if((x5035!=('|'))) {
        char x22656 = *x22529;
        ite19671 = (x22656!=('\n'));
      } else {
        
        ite19671 = 0;
      };
      int x18266 = ite19671;
      if (!(x18266)) break; 
      
      x22529 += 1;
    };
    char* x5042 = x5034;
    int x5043 = x22529 - x5042;
    char* x5044 = x5034;
    char* x5045 = strncpy(x6109, x5044, x5043);
    x22529 += 1;
    char* x6127 = (char*)malloc(11 * sizeof(char));
    memset(x6127, 0, 11 * sizeof(char));
    /* VAR */ char* x5053 = x22529;
    while(1) {
      
      char x5054 = *x22529;
      /* VAR */ int ite19694 = 0;
      if((x5054!=('|'))) {
        char x22678 = *x22529;
        ite19694 = (x22678!=('\n'));
      } else {
        
        ite19694 = 0;
      };
      int x18282 = ite19694;
      if (!(x18282)) break; 
      
      x22529 += 1;
    };
    char* x5061 = x5053;
    int x5062 = x22529 - x5061;
    char* x5063 = x5053;
    char* x5064 = strncpy(x6127, x5063, x5062);
    x22529 += 1;
    char* x6145 = (char*)malloc(45 * sizeof(char));
    memset(x6145, 0, 45 * sizeof(char));
    /* VAR */ char* x5072 = x22529;
    while(1) {
      
      char x5073 = *x22529;
      /* VAR */ int ite19717 = 0;
      if((x5073!=('|'))) {
        char x22700 = *x22529;
        ite19717 = (x22700!=('\n'));
      } else {
        
        ite19717 = 0;
      };
      int x18298 = ite19717;
      if (!(x18298)) break; 
      
      x22529 += 1;
    };
    char* x5080 = x5072;
    int x5081 = x22529 - x5080;
    char* x5082 = x5072;
    char* x5083 = strncpy(x6145, x5082, x5081);
    x22529 += 1;
    struct LINEITEMRecord* x6704 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x6704, 0, 1 * sizeof(struct LINEITEMRecord));
    x6704->L_PARTKEY = x4932; x6704->L_QUANTITY = x4947; x6704->L_EXTENDEDPRICE = x4952;
    int x47 = x22530;
    struct LINEITEMRecord x6165 = *x6704;
    *(x22518 + x47) = x6165;
    struct LINEITEMRecord* x6167 = &(x22518[x47]);
    x6704 = x6167;
    int x49 = x22530;
    x22530 = (x49+(1));
  };
  FILE* x22726 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x22727 = 0;
  int x22728 = x22727;
  int* x22729 = &x22728;
  int x22730 = fscanf(x22726, "%d", x22729);
  pclose(x22726);
  struct PARTRecord* x22732 = (struct PARTRecord*)malloc(x22728 * sizeof(struct PARTRecord));
  memset(x22732, 0, x22728 * sizeof(struct PARTRecord));
  int x22733 = O_RDONLY;
  int x22734 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x22733);
  /* VAR */ struct stat x22735 = x22521;
  struct stat x22736 = x22735;
  struct stat* x22737 = &x22736;
  int x22738 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x22737);
  int x22740 = PROT_READ;
  int x22741 = MAP_PRIVATE;
  char* x22742 = mmap(NULL, (x22737->st_size), x22740, x22741, x22734, 0);
  /* VAR */ int x22743 = 0;
  while(1) {
    
    int x57 = x22743;
    /* VAR */ int ite19767 = 0;
    if((x57<(x22728))) {
      char x22749 = *x22742;
      ite19767 = (x22749!=('\0'));
    } else {
      
      ite19767 = 0;
    };
    int x18341 = ite19767;
    if (!(x18341)) break; 
    
    /* VAR */ int x5120 = 0;
    int x5121 = x5120;
    int* x5122 = &x5121;
    char* x5123 = strntoi_unchecked(x22742, x5122);
    x22742 = x5123;
    char* x6201 = (char*)malloc(56 * sizeof(char));
    memset(x6201, 0, 56 * sizeof(char));
    /* VAR */ char* x5126 = x22742;
    while(1) {
      
      char x5127 = *x22742;
      /* VAR */ int ite19786 = 0;
      if((x5127!=('|'))) {
        char x22767 = *x22742;
        ite19786 = (x22767!=('\n'));
      } else {
        
        ite19786 = 0;
      };
      int x18353 = ite19786;
      if (!(x18353)) break; 
      
      x22742 += 1;
    };
    char* x5134 = x5126;
    int x5135 = x22742 - x5134;
    char* x5136 = x5126;
    char* x5137 = strncpy(x6201, x5136, x5135);
    x22742 += 1;
    char* x6219 = (char*)malloc(26 * sizeof(char));
    memset(x6219, 0, 26 * sizeof(char));
    /* VAR */ char* x5145 = x22742;
    while(1) {
      
      char x5146 = *x22742;
      /* VAR */ int ite19809 = 0;
      if((x5146!=('|'))) {
        char x22789 = *x22742;
        ite19809 = (x22789!=('\n'));
      } else {
        
        ite19809 = 0;
      };
      int x18369 = ite19809;
      if (!(x18369)) break; 
      
      x22742 += 1;
    };
    char* x5153 = x5145;
    int x5154 = x22742 - x5153;
    char* x5155 = x5145;
    char* x5156 = strncpy(x6219, x5155, x5154);
    x22742 += 1;
    char* x6237 = (char*)malloc(11 * sizeof(char));
    memset(x6237, 0, 11 * sizeof(char));
    /* VAR */ char* x5164 = x22742;
    while(1) {
      
      char x5165 = *x22742;
      /* VAR */ int ite19832 = 0;
      if((x5165!=('|'))) {
        char x22811 = *x22742;
        ite19832 = (x22811!=('\n'));
      } else {
        
        ite19832 = 0;
      };
      int x18385 = ite19832;
      if (!(x18385)) break; 
      
      x22742 += 1;
    };
    char* x5172 = x5164;
    int x5173 = x22742 - x5172;
    char* x5174 = x5164;
    char* x5175 = strncpy(x6237, x5174, x5173);
    x22742 += 1;
    char* x6255 = (char*)malloc(26 * sizeof(char));
    memset(x6255, 0, 26 * sizeof(char));
    /* VAR */ char* x5183 = x22742;
    while(1) {
      
      char x5184 = *x22742;
      /* VAR */ int ite19855 = 0;
      if((x5184!=('|'))) {
        char x22833 = *x22742;
        ite19855 = (x22833!=('\n'));
      } else {
        
        ite19855 = 0;
      };
      int x18401 = ite19855;
      if (!(x18401)) break; 
      
      x22742 += 1;
    };
    char* x5191 = x5183;
    int x5192 = x22742 - x5191;
    char* x5193 = x5183;
    char* x5194 = strncpy(x6255, x5193, x5192);
    x22742 += 1;
    /* VAR */ int x5201 = 0;
    int x5202 = x5201;
    int* x5203 = &x5202;
    char* x5204 = strntoi_unchecked(x22742, x5203);
    x22742 = x5204;
    char* x6278 = (char*)malloc(11 * sizeof(char));
    memset(x6278, 0, 11 * sizeof(char));
    /* VAR */ char* x5207 = x22742;
    while(1) {
      
      char x5208 = *x22742;
      /* VAR */ int ite19883 = 0;
      if((x5208!=('|'))) {
        char x22860 = *x22742;
        ite19883 = (x22860!=('\n'));
      } else {
        
        ite19883 = 0;
      };
      int x18422 = ite19883;
      if (!(x18422)) break; 
      
      x22742 += 1;
    };
    char* x5215 = x5207;
    int x5216 = x22742 - x5215;
    char* x5217 = x5207;
    char* x5218 = strncpy(x6278, x5217, x5216);
    x22742 += 1;
    /* VAR */ double x5225 = 0.0;
    double x5226 = x5225;
    double* x5227 = &x5226;
    char* x5228 = strntod_unchecked(x22742, x5227);
    x22742 = x5228;
    char* x6301 = (char*)malloc(24 * sizeof(char));
    memset(x6301, 0, 24 * sizeof(char));
    /* VAR */ char* x5231 = x22742;
    while(1) {
      
      char x5232 = *x22742;
      /* VAR */ int ite19911 = 0;
      if((x5232!=('|'))) {
        char x22887 = *x22742;
        ite19911 = (x22887!=('\n'));
      } else {
        
        ite19911 = 0;
      };
      int x18443 = ite19911;
      if (!(x18443)) break; 
      
      x22742 += 1;
    };
    char* x5239 = x5231;
    int x5240 = x22742 - x5239;
    char* x5241 = x5231;
    char* x5242 = strncpy(x6301, x5241, x5240);
    x22742 += 1;
    int x3557 = x3449;
    if((x3557>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "P_BRAND", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "P_BRAND");
    };
    /* VAR */ int x8642 = -1;
    int x8643 = x8288->len;
    int x16222 = 0;
    for(; x16222 < x8643 ; x16222 += 1) {
      
      char* x16223 = g_array_index(x8288, char*, x16222);
      int x16224 = strcmp(x16223, x6237);
      int x16225 = !(x16224);
      if(x16225) {
        x8642 = x16222;
        break;
      };
    };
    int x8653 = x8642;
    int x3563 = !((x8653!=(-1)));
    if(x3563) {
      int x3564 = x3449;
      x3449 = (x3564+(1));
      void* x8660 = &(x6237);
      GArray* x8661 = g_array_append_vals(x8288, x8660, 1);
    };
    /* VAR */ int x8662 = -1;
    int x8663 = x8288->len;
    int x16249 = 0;
    for(; x16249 < x8663 ; x16249 += 1) {
      
      char* x16250 = g_array_index(x8288, char*, x16249);
      int x16251 = strcmp(x16250, x6237);
      int x16252 = !(x16251);
      if(x16252) {
        x8662 = x16249;
        break;
      };
    };
    int x8673 = x8662;
    int x3570 = x3451;
    if((x3570>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "P_CONTAINER", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "P_CONTAINER");
    };
    /* VAR */ int x8679 = -1;
    int x8680 = x8291->len;
    int x16273 = 0;
    for(; x16273 < x8680 ; x16273 += 1) {
      
      char* x16274 = g_array_index(x8291, char*, x16273);
      int x16275 = strcmp(x16274, x6278);
      int x16276 = !(x16275);
      if(x16276) {
        x8679 = x16273;
        break;
      };
    };
    int x8690 = x8679;
    int x3576 = !((x8690!=(-1)));
    if(x3576) {
      int x3577 = x3451;
      x3451 = (x3577+(1));
      void* x8697 = &(x6278);
      GArray* x8698 = g_array_append_vals(x8291, x8697, 1);
    };
    /* VAR */ int x8699 = -1;
    int x8700 = x8291->len;
    int x16300 = 0;
    for(; x16300 < x8700 ; x16300 += 1) {
      
      char* x16301 = g_array_index(x8291, char*, x16300);
      int x16302 = strcmp(x16301, x6278);
      int x16303 = !(x16302);
      if(x16303) {
        x8699 = x16300;
        break;
      };
    };
    int x8710 = x8699;
    struct PARTRecord* x6888 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x6888, 0, 1 * sizeof(struct PARTRecord));
    x6888->P_PARTKEY = x5121; x6888->P_BRAND = x8673; x6888->P_CONTAINER = x8710;
    int x111 = x22743;
    struct PARTRecord x6347 = *x6888;
    *(x22732 + x111) = x6347;
    struct PARTRecord* x6349 = &(x22732[x111]);
    x6888 = x6349;
    int x113 = x22743;
    x22743 = (x113+(1));
  };
  int x118 = 0;
  for(; x118 < 1 ; x118 += 1) {
    
    double* x23497 = (double*)malloc(1 * sizeof(double));
    memset(x23497, 0, 1 * sizeof(double));
    struct AGGRecord_String* x23498 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x23498, 0, 1 * sizeof(struct AGGRecord_String));
    x23498->key = "Total"; x23498->aggs = x23497;
    GHashTable* x23510 = g_hash_table_new(((void***){x23501}), ((int*){x23504}));
    struct LINEITEMRecord** x23511 = (struct LINEITEMRecord**)malloc(1600000 * sizeof(struct LINEITEMRecord*));
    memset(x23511, 0, 1600000 * sizeof(struct LINEITEMRecord*));
    int* x23512 = (int*)malloc(1600000 * sizeof(int));
    memset(x23512, 0, 1600000 * sizeof(int));
    int x16342 = 0;
    for(; x16342 < 1600000 ; x16342 += 1) {
      
      struct LINEITEMRecord* x16343 = (struct LINEITEMRecord*)malloc(1024 * sizeof(struct LINEITEMRecord));
      memset(x16343, 0, 1024 * sizeof(struct LINEITEMRecord));
      *(x23511 + x16342) = x16343;
    };
    /* VAR */ int x23520 = 0;
    int x16363 = 0;
    for(; x16363 < x22514 ; x16363 += 1) {
      
      struct LINEITEMRecord* x16364 = &(x22518[x16363]);
      int x16366 = (x16364->L_PARTKEY)%(1600000);
      int x16367 = x23512[x16366];
      struct LINEITEMRecord* x16368 = x23511[x16366];
      struct LINEITEMRecord x16369 = *x16364;
      *(x16368 + x16367) = x16369;
      struct LINEITEMRecord* x16371 = &(x16368[x16367]);
      x16364 = x16371;
      *(x23512 + x16366) = (x16367+(1));
      int x16375 = x23520;
      x23520 = (x16375+(1));
    };
    /* VAR */ int x23552 = 0;
    struct LINEITEMRecord_PARTRecord* x23553 = (struct LINEITEMRecord_PARTRecord*)malloc(48000000 * sizeof(struct LINEITEMRecord_PARTRecord));
    memset(x23553, 0, 48000000 * sizeof(struct LINEITEMRecord_PARTRecord));
    /* VAR */ int x23554 = 0;
    while(1) {
      
      int x4400 = x23554;
      if (!((x4400<(48000000)))) break; 
      
      int x4402 = x23554;
      struct LINEITEMRecord_PARTRecord* x6941 = (struct LINEITEMRecord_PARTRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord));
      memset(x6941, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord));
      x6941->L_PARTKEY = 0; x6941->L_QUANTITY = 0.0; x6941->L_EXTENDEDPRICE = 0.0; x6941->P_PARTKEY = 0; x6941->P_BRAND = 0; x6941->P_CONTAINER = 0;
      struct LINEITEMRecord_PARTRecord x6395 = *x6941;
      *(x23553 + x4402) = x6395;
      struct LINEITEMRecord_PARTRecord* x6397 = &(x23553[x4402]);
      x6941 = x6397;
      int x4405 = x23554;
      x23554 = (x4405+(1));
    };
    /* VAR */ struct timeval x23569 = x4507;
    struct timeval x23570 = x23569;
    /* VAR */ struct timeval x23571 = x4507;
    struct timeval x23572 = x23571;
    /* VAR */ struct timeval x23573 = x4507;
    struct timeval x23574 = x23573;
    struct timeval* x23575 = &x23572;
    gettimeofday(x23575, NULL);
    /* VAR */ int x23577 = -1;
    int x23578 = x8291->len;
    int x16414 = 0;
    for(; x16414 < x23578 ; x16414 += 1) {
      
      char* x16415 = g_array_index(x8291, char*, x16414);
      int x16416 = strcmp(x16415, "MED BAG");
      int x16417 = !(x16416);
      if(x16417) {
        x23577 = x16414;
        break;
      };
    };
    int x23594 = x23577;
    /* VAR */ int x23595 = -1;
    int x23596 = x8288->len;
    int x16433 = 0;
    for(; x16433 < x23596 ; x16433 += 1) {
      
      char* x16434 = g_array_index(x8288, char*, x16433);
      int x16435 = strcmp(x16434, "Brand#15");
      int x16436 = !(x16435);
      if(x16436) {
        x23595 = x16433;
        break;
      };
    };
    int x23612 = x23595;
    /* VAR */ int x23613 = 0;
    /* VAR */ int x23614 = 0;
    /* VAR */ int x23615 = 0;
    while(1) {
      
      int x23617 = x23613;
      if (!((x23617<(x22728)))) break; 
      
      int x1259 = x23613;
      struct PARTRecord* x207 = &(x22732[x1259]);
      int x3632 = x207->P_CONTAINER;
      /* VAR */ int ite20655 = 0;
      if((x3632==(x23594))) {
        ite20655 = ((x207->P_BRAND)==(x23612));
      } else {
        
        ite20655 = 0;
      };
      int x19169 = ite20655;
      if(x19169) {
        int x214 = x207->P_PARTKEY;
        int x23633 = x214%(1600000);
        int x23634 = x23512[x23633];
        struct LINEITEMRecord* x23635 = x23511[x23633];
        int x16501 = 0;
        for(; x16501 < x23634 ; x16501 += 1) {
          
          struct LINEITEMRecord* x16502 = &(x23635[x16501]);
          if(((x16502->L_PARTKEY)==(x214))) {
            int x2662 = x16502->L_PARTKEY;
            if((x2662==(x214))) {
              int x4446 = x23552;
              struct LINEITEMRecord_PARTRecord* x4447 = &(x23553[x4446]);
              x4447->L_PARTKEY = x2662;
              x4447->L_QUANTITY = (x16502->L_QUANTITY);
              x4447->L_EXTENDEDPRICE = (x16502->L_EXTENDEDPRICE);
              x4447->P_PARTKEY = x214;
              x4447->P_BRAND = (x207->P_BRAND);
              x4447->P_CONTAINER = x3632;
              int x4454 = x23552;
              x23552 = (x4454+(1));
              void* x7564 = (void*){(x4447->L_PARTKEY)};
              void* x7566 = g_hash_table_lookup(x23510, x7564);
              GList** x7567 = (GList**){x7566};
              GList** x7568 = NULL;
              /* VAR */ GList** ite19250 = 0;
              if((x7567==(x7568))) {
                GList** x19251 = malloc(8);
                GList* x19252 = NULL;
                pointer_assign(x19251, x19252);
                ite19250 = x19251;
              } else {
                
                ite19250 = x7567;
              };
              GList** x7573 = ite19250;
              GList* x7574 = *(x7573);
              GList* x7575 = g_list_prepend(x7574, ((void*){x4447}));
              pointer_assign(x7573, x7575);
              g_hash_table_insert(x23510, x7564, ((void*){x7573}));
            };
          };
        };
      };
      int x1299 = x23613;
      x23613 = (x1299+(1));
    };
    GList* x23801 = g_hash_table_get_keys(x23510);
    /* VAR */ GList* x23802 = x23801;
    int x23803 = g_hash_table_size(x23510);
    int x16683 = 0;
    for(; x16683 < x23803 ; x16683 += 1) {
      
      GList* x16684 = x23802;
      void* x16685 = g_list_nth_data(x16684, 0);
      GList* x16686 = x23802;
      GList* x16687 = g_list_next(x16686);
      x23802 = x16687;
      void* x16689 = g_hash_table_lookup(x23510, x16685);
      GList** x16690 = (GList**){x16689};
      /* VAR */ double x16696 = 0.0;
      GList* x16697 = *(x16690);
      /* VAR */ GList* x16698 = x16697;
      while(1) {
        
        GList* x8968 = x16698;
        GList* x8969 = NULL;
        if (!((x8968!=(x8969)))) break; 
        
        GList* x8971 = x16698;
        void* x8972 = g_list_nth_data(x8971, 0);
        double x8974 = x16696;
        x16696 = (x8974+((((struct LINEITEMRecord_PARTRecord*){x8972})->L_QUANTITY)));
        GList* x8978 = x16698;
        GList* x8979 = g_list_next(x8978);
        x16698 = x8979;
      };
      double x16713 = x16696;
      GList* x16714 = *(x16690);
      int x16715 = g_list_length(x16714);
      /* VAR */ double x16727 = 0.0;
      GList* x16728 = *(x16690);
      /* VAR */ GList* x16729 = x16728;
      while(1) {
        
        GList* x8999 = x16729;
        GList* x9000 = NULL;
        if (!((x8999!=(x9000)))) break; 
        
        GList* x9002 = x16729;
        void* x9003 = g_list_nth_data(x9002, 0);
        struct LINEITEMRecord_PARTRecord* x9004 = (struct LINEITEMRecord_PARTRecord*){x9003};
        double x9005 = x16727;
        /* VAR */ double ite19486 = 0;
        if(((x9004->L_QUANTITY)<((0.2*((x16713/(x16715))))))) {
          ite19486 = (x9005+((x9004->L_EXTENDEDPRICE)));
        } else {
          
          ite19486 = x9005;
        };
        double x9008 = ite19486;
        x16727 = x9008;
        GList* x9012 = x16729;
        GList* x9013 = g_list_next(x9012);
        x16729 = x9013;
      };
      double x16747 = x16727;
      double* x16749 = x23498->aggs;
      double x16750 = x16749[0];
      *x16749 = (x16750+((x16747/(7.0))));
    };
    if(0) {
      x23614 = 1;
    } else {
      
      double x311 = ((double*) { x23498->aggs })[0];
      printf("%.6f\n", x311);
      int x1367 = x23615;
      x23615 = (x1367+(1));
    };
    int x23971 = x23615;
    printf("(%d rows)\n", x23971);
    struct timeval* x23973 = &x23574;
    gettimeofday(x23973, NULL);
    struct timeval* x23975 = &x23570;
    struct timeval* x23976 = &x23574;
    struct timeval* x23977 = &x23572;
    long x23978 = timeval_subtract(x23975, x23976, x23977);
    printf("Generated code run in %ld milliseconds.\n", x23978);
  };
}
/* ----------- FUNCTIONS ----------- */
int x23501(void* x7455) {
  int x7456 = g_direct_hash(x7455);
  return x7456; 
}

int x23504(void* x7458, void* x7459) {
  int x7460 = g_direct_equal(x7458, x7459);
  return x7460; 
}
