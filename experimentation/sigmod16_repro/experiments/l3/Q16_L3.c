#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct Q16GRPRecord2;
  struct AGGRecord_Q16GRPRecord2;
  struct Q16GRPRecord1;
  struct PARTRecord;
  struct SUPPLIERRecord;
  struct AGGRecord_Q16GRPRecord1;
  struct PARTSUPPRecord;
  
  struct Q16GRPRecord2 {
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  };
  
  struct AGGRecord_Q16GRPRecord2 {
  struct Q16GRPRecord2* key;
  double aggs;
  };
  
  struct Q16GRPRecord1 {
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  int PS_SUPPKEY;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  char* S_COMMENT;
  };
  
  struct AGGRecord_Q16GRPRecord1 {
  struct Q16GRPRecord1* key;
  double aggs;
  };
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  };
  
  


int x39893(struct AGGRecord_Q16GRPRecord2* x240, struct AGGRecord_Q16GRPRecord2* x241);

int x14347(void* x14341, void* x14342, void* x14343);
/* GLOBAL VARS */

struct timeval x9402;
int main(int argc, char** argv) {
  FILE* x10092 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x10093 = 0;
  int x10094 = x10093;
  int* x10095 = &x10094;
  int x10096 = fscanf(x10092, "%d", x10095);
  pclose(x10092);
  struct SUPPLIERRecord* x11440 = (struct SUPPLIERRecord*)malloc(x10094 * sizeof(struct SUPPLIERRecord));
  memset(x11440, 0, x10094 * sizeof(struct SUPPLIERRecord));
  int x10100 = O_RDONLY;
  int x10101 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x10100);
  struct stat x10102 = (struct stat){0};
  /* VAR */ struct stat x10103 = x10102;
  struct stat x10104 = x10103;
  struct stat* x10105 = &x10104;
  int x10106 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x10105);
  int x10108 = PROT_READ;
  int x10109 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x10105->st_size), x10108, x10109, x10101, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite29743 = 0;
    if((x5<(x10094))) {
      char x38183 = *x3;
      ite29743 = (x38183!=('\0'));
    } else {
      
      ite29743 = 0;
    };
    int x27396 = ite29743;
    if (!(x27396)) break; 
    
    /* VAR */ int x10117 = 0;
    int x10118 = x10117;
    int* x10119 = &x10118;
    char* x10120 = strntoi_unchecked(x3, x10119);
    x3 = x10120;
    char* x11464 = (char*)malloc(26 * sizeof(char));
    memset(x11464, 0, 26 * sizeof(char));
    /* VAR */ char* x10123 = x3;
    while(1) {
      
      char x10124 = *x3;
      /* VAR */ int ite29762 = 0;
      if((x10124!=('|'))) {
        char x38201 = *x3;
        ite29762 = (x38201!=('\n'));
      } else {
        
        ite29762 = 0;
      };
      int x27408 = ite29762;
      if (!(x27408)) break; 
      
      x3 += 1;
    };
    char* x10131 = x10123;
    int x10132 = x3 - x10131;
    char* x10133 = x10123;
    char* x10134 = strncpy(x11464, x10133, x10132);
    x3 += 1;
    char* x11482 = (char*)malloc(41 * sizeof(char));
    memset(x11482, 0, 41 * sizeof(char));
    /* VAR */ char* x10142 = x3;
    while(1) {
      
      char x10143 = *x3;
      /* VAR */ int ite29785 = 0;
      if((x10143!=('|'))) {
        char x38223 = *x3;
        ite29785 = (x38223!=('\n'));
      } else {
        
        ite29785 = 0;
      };
      int x27424 = ite29785;
      if (!(x27424)) break; 
      
      x3 += 1;
    };
    char* x10150 = x10142;
    int x10151 = x3 - x10150;
    char* x10152 = x10142;
    char* x10153 = strncpy(x11482, x10152, x10151);
    x3 += 1;
    /* VAR */ int x10160 = 0;
    int x10161 = x10160;
    int* x10162 = &x10161;
    char* x10163 = strntoi_unchecked(x3, x10162);
    x3 = x10163;
    char* x11505 = (char*)malloc(16 * sizeof(char));
    memset(x11505, 0, 16 * sizeof(char));
    /* VAR */ char* x10166 = x3;
    while(1) {
      
      char x10167 = *x3;
      /* VAR */ int ite29813 = 0;
      if((x10167!=('|'))) {
        char x38250 = *x3;
        ite29813 = (x38250!=('\n'));
      } else {
        
        ite29813 = 0;
      };
      int x27445 = ite29813;
      if (!(x27445)) break; 
      
      x3 += 1;
    };
    char* x10174 = x10166;
    int x10175 = x3 - x10174;
    char* x10176 = x10166;
    char* x10177 = strncpy(x11505, x10176, x10175);
    x3 += 1;
    /* VAR */ double x10184 = 0.0;
    double x10185 = x10184;
    double* x10186 = &x10185;
    char* x10187 = strntod_unchecked(x3, x10186);
    x3 = x10187;
    char* x11528 = (char*)malloc(102 * sizeof(char));
    memset(x11528, 0, 102 * sizeof(char));
    /* VAR */ char* x10190 = x3;
    while(1) {
      
      char x10191 = *x3;
      /* VAR */ int ite29841 = 0;
      if((x10191!=('|'))) {
        char x38277 = *x3;
        ite29841 = (x38277!=('\n'));
      } else {
        
        ite29841 = 0;
      };
      int x27466 = ite29841;
      if (!(x27466)) break; 
      
      x3 += 1;
    };
    char* x10198 = x10190;
    int x10199 = x3 - x10198;
    char* x10200 = x10190;
    char* x10201 = strncpy(x11528, x10200, x10199);
    x3 += 1;
    struct SUPPLIERRecord* x12227 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x12227, 0, 1 * sizeof(struct SUPPLIERRecord));
    x12227->S_SUPPKEY = x10118; x12227->S_COMMENT = x11528;
    int x45 = x4;
    struct SUPPLIERRecord x11548 = *x12227;
    *(x11440 + x45) = x11548;
    struct SUPPLIERRecord* x11550 = &(x11440[x45]);
    x12227 = x11550;
    int x47 = x4;
    x4 = (x47+(1));
  };
  FILE* x10214 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x10215 = 0;
  int x10216 = x10215;
  int* x10217 = &x10216;
  int x10218 = fscanf(x10214, "%d", x10217);
  pclose(x10214);
  struct PARTRecord* x11561 = (struct PARTRecord*)malloc(x10216 * sizeof(struct PARTRecord));
  memset(x11561, 0, x10216 * sizeof(struct PARTRecord));
  int x10222 = O_RDONLY;
  int x10223 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x10222);
  /* VAR */ struct stat x10224 = x10102;
  struct stat x10225 = x10224;
  struct stat* x10226 = &x10225;
  int x10227 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x10226);
  int x10229 = PROT_READ;
  int x10230 = MAP_PRIVATE;
  char* x53 = mmap(NULL, (x10226->st_size), x10229, x10230, x10223, 0);
  /* VAR */ int x54 = 0;
  while(1) {
    
    int x55 = x54;
    /* VAR */ int ite29891 = 0;
    if((x55<(x10216))) {
      char x38326 = *x53;
      ite29891 = (x38326!=('\0'));
    } else {
      
      ite29891 = 0;
    };
    int x27509 = ite29891;
    if (!(x27509)) break; 
    
    /* VAR */ int x10238 = 0;
    int x10239 = x10238;
    int* x10240 = &x10239;
    char* x10241 = strntoi_unchecked(x53, x10240);
    x53 = x10241;
    char* x11584 = (char*)malloc(56 * sizeof(char));
    memset(x11584, 0, 56 * sizeof(char));
    /* VAR */ char* x10244 = x53;
    while(1) {
      
      char x10245 = *x53;
      /* VAR */ int ite29910 = 0;
      if((x10245!=('|'))) {
        char x38344 = *x53;
        ite29910 = (x38344!=('\n'));
      } else {
        
        ite29910 = 0;
      };
      int x27521 = ite29910;
      if (!(x27521)) break; 
      
      x53 += 1;
    };
    char* x10252 = x10244;
    int x10253 = x53 - x10252;
    char* x10254 = x10244;
    char* x10255 = strncpy(x11584, x10254, x10253);
    x53 += 1;
    char* x11602 = (char*)malloc(26 * sizeof(char));
    memset(x11602, 0, 26 * sizeof(char));
    /* VAR */ char* x10263 = x53;
    while(1) {
      
      char x10264 = *x53;
      /* VAR */ int ite29933 = 0;
      if((x10264!=('|'))) {
        char x38366 = *x53;
        ite29933 = (x38366!=('\n'));
      } else {
        
        ite29933 = 0;
      };
      int x27537 = ite29933;
      if (!(x27537)) break; 
      
      x53 += 1;
    };
    char* x10271 = x10263;
    int x10272 = x53 - x10271;
    char* x10273 = x10263;
    char* x10274 = strncpy(x11602, x10273, x10272);
    x53 += 1;
    char* x11620 = (char*)malloc(11 * sizeof(char));
    memset(x11620, 0, 11 * sizeof(char));
    /* VAR */ char* x10282 = x53;
    while(1) {
      
      char x10283 = *x53;
      /* VAR */ int ite29956 = 0;
      if((x10283!=('|'))) {
        char x38388 = *x53;
        ite29956 = (x38388!=('\n'));
      } else {
        
        ite29956 = 0;
      };
      int x27553 = ite29956;
      if (!(x27553)) break; 
      
      x53 += 1;
    };
    char* x10290 = x10282;
    int x10291 = x53 - x10290;
    char* x10292 = x10282;
    char* x10293 = strncpy(x11620, x10292, x10291);
    x53 += 1;
    char* x11638 = (char*)malloc(26 * sizeof(char));
    memset(x11638, 0, 26 * sizeof(char));
    /* VAR */ char* x10301 = x53;
    while(1) {
      
      char x10302 = *x53;
      /* VAR */ int ite29979 = 0;
      if((x10302!=('|'))) {
        char x38410 = *x53;
        ite29979 = (x38410!=('\n'));
      } else {
        
        ite29979 = 0;
      };
      int x27569 = ite29979;
      if (!(x27569)) break; 
      
      x53 += 1;
    };
    char* x10309 = x10301;
    int x10310 = x53 - x10309;
    char* x10311 = x10301;
    char* x10312 = strncpy(x11638, x10311, x10310);
    x53 += 1;
    /* VAR */ int x10319 = 0;
    int x10320 = x10319;
    int* x10321 = &x10320;
    char* x10322 = strntoi_unchecked(x53, x10321);
    x53 = x10322;
    char* x11661 = (char*)malloc(11 * sizeof(char));
    memset(x11661, 0, 11 * sizeof(char));
    /* VAR */ char* x10325 = x53;
    while(1) {
      
      char x10326 = *x53;
      /* VAR */ int ite30007 = 0;
      if((x10326!=('|'))) {
        char x38437 = *x53;
        ite30007 = (x38437!=('\n'));
      } else {
        
        ite30007 = 0;
      };
      int x27590 = ite30007;
      if (!(x27590)) break; 
      
      x53 += 1;
    };
    char* x10333 = x10325;
    int x10334 = x53 - x10333;
    char* x10335 = x10325;
    char* x10336 = strncpy(x11661, x10335, x10334);
    x53 += 1;
    /* VAR */ double x10343 = 0.0;
    double x10344 = x10343;
    double* x10345 = &x10344;
    char* x10346 = strntod_unchecked(x53, x10345);
    x53 = x10346;
    char* x11684 = (char*)malloc(24 * sizeof(char));
    memset(x11684, 0, 24 * sizeof(char));
    /* VAR */ char* x10349 = x53;
    while(1) {
      
      char x10350 = *x53;
      /* VAR */ int ite30035 = 0;
      if((x10350!=('|'))) {
        char x38464 = *x53;
        ite30035 = (x38464!=('\n'));
      } else {
        
        ite30035 = 0;
      };
      int x27611 = ite30035;
      if (!(x27611)) break; 
      
      x53 += 1;
    };
    char* x10357 = x10349;
    int x10358 = x53 - x10357;
    char* x10359 = x10349;
    char* x10360 = strncpy(x11684, x10359, x10358);
    x53 += 1;
    struct PARTRecord* x12385 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x12385, 0, 1 * sizeof(struct PARTRecord));
    x12385->P_PARTKEY = x10239; x12385->P_BRAND = x11620; x12385->P_TYPE = x11638; x12385->P_SIZE = x10320;
    int x109 = x54;
    struct PARTRecord x11704 = *x12385;
    *(x11561 + x109) = x11704;
    struct PARTRecord* x11706 = &(x11561[x109]);
    x12385 = x11706;
    int x111 = x54;
    x54 = (x111+(1));
  };
  FILE* x10373 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x10374 = 0;
  int x10375 = x10374;
  int* x10376 = &x10375;
  int x10377 = fscanf(x10373, "%d", x10376);
  pclose(x10373);
  struct PARTSUPPRecord* x11717 = (struct PARTSUPPRecord*)malloc(x10375 * sizeof(struct PARTSUPPRecord));
  memset(x11717, 0, x10375 * sizeof(struct PARTSUPPRecord));
  int x10381 = O_RDONLY;
  int x10382 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x10381);
  /* VAR */ struct stat x10383 = x10102;
  struct stat x10384 = x10383;
  struct stat* x10385 = &x10384;
  int x10386 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x10385);
  int x10388 = PROT_READ;
  int x10389 = MAP_PRIVATE;
  char* x117 = mmap(NULL, (x10385->st_size), x10388, x10389, x10382, 0);
  /* VAR */ int x118 = 0;
  while(1) {
    
    int x119 = x118;
    /* VAR */ int ite30085 = 0;
    if((x119<(x10375))) {
      char x38513 = *x117;
      ite30085 = (x38513!=('\0'));
    } else {
      
      ite30085 = 0;
    };
    int x27654 = ite30085;
    if (!(x27654)) break; 
    
    /* VAR */ int x10397 = 0;
    int x10398 = x10397;
    int* x10399 = &x10398;
    char* x10400 = strntoi_unchecked(x117, x10399);
    x117 = x10400;
    /* VAR */ int x10402 = 0;
    int x10403 = x10402;
    int* x10404 = &x10403;
    char* x10405 = strntoi_unchecked(x117, x10404);
    x117 = x10405;
    /* VAR */ int x10407 = 0;
    int x10408 = x10407;
    int* x10409 = &x10408;
    char* x10410 = strntoi_unchecked(x117, x10409);
    x117 = x10410;
    /* VAR */ double x10412 = 0.0;
    double x10413 = x10412;
    double* x10414 = &x10413;
    char* x10415 = strntod_unchecked(x117, x10414);
    x117 = x10415;
    char* x11755 = (char*)malloc(200 * sizeof(char));
    memset(x11755, 0, 200 * sizeof(char));
    /* VAR */ char* x10418 = x117;
    while(1) {
      
      char x10419 = *x117;
      /* VAR */ int ite30119 = 0;
      if((x10419!=('|'))) {
        char x38546 = *x117;
        ite30119 = (x38546!=('\n'));
      } else {
        
        ite30119 = 0;
      };
      int x27681 = ite30119;
      if (!(x27681)) break; 
      
      x117 += 1;
    };
    char* x10426 = x10418;
    int x10427 = x117 - x10426;
    char* x10428 = x10418;
    char* x10429 = strncpy(x11755, x10428, x10427);
    x117 += 1;
    struct PARTSUPPRecord* x12458 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x12458, 0, 1 * sizeof(struct PARTSUPPRecord));
    x12458->PS_PARTKEY = x10398; x12458->PS_SUPPKEY = x10403;
    int x136 = x118;
    struct PARTSUPPRecord x11775 = *x12458;
    *(x11717 + x136) = x11775;
    struct PARTSUPPRecord* x11777 = &(x11717[x136]);
    x12458 = x11777;
    int x138 = x118;
    x118 = (x138+(1));
  };
  int x143 = 0;
  for(; x143 < 1 ; x143 += 1) {
    
    /* VAR */ int x39746 = 0;
    GList*** x39747 = (GList***)malloc(1048576 * sizeof(GList**));
    memset(x39747, 0, 1048576 * sizeof(GList**));
    int x24134 = 0;
    for(; x24134 < 1048576 ; x24134 += 1) {
      
      GList** x24135 = malloc(8);
      GList* x24136 = NULL;
      pointer_assign(x24135, x24136);
      *(x39747 + x24134) = x24135;
    };
    /* VAR */ int x39759 = 0;
    GList*** x39760 = (GList***)malloc(1048576 * sizeof(GList**));
    memset(x39760, 0, 1048576 * sizeof(GList**));
    int x24148 = 0;
    for(; x24148 < 1048576 ; x24148 += 1) {
      
      GList** x24149 = malloc(8);
      GList* x24150 = NULL;
      pointer_assign(x24149, x24150);
      *(x39760 + x24148) = x24149;
    };
    /* VAR */ int x39772 = 0;
    struct Q16GRPRecord1* x39773 = (struct Q16GRPRecord1*)malloc(6400000 * sizeof(struct Q16GRPRecord1));
    memset(x39773, 0, 6400000 * sizeof(struct Q16GRPRecord1));
    /* VAR */ int x39774 = 0;
    while(1) {
      
      int x9114 = x39774;
      if (!((x9114<(6400000)))) break; 
      
      int x9116 = x39774;
      struct Q16GRPRecord1* x12495 = (struct Q16GRPRecord1*)malloc(1 * sizeof(struct Q16GRPRecord1));
      memset(x12495, 0, 1 * sizeof(struct Q16GRPRecord1));
      x12495->P_BRAND = ""; x12495->P_TYPE = ""; x12495->P_SIZE = 0; x12495->PS_SUPPKEY = 0;
      struct Q16GRPRecord1 x11809 = *x12495;
      *(x39773 + x9116) = x11809;
      struct Q16GRPRecord1* x11811 = &(x39773[x9116]);
      x12495 = x11811;
      int x9119 = x39774;
      x39774 = (x9119+(1));
    };
    /* VAR */ int x39789 = 0;
    struct AGGRecord_Q16GRPRecord1* x39790 = (struct AGGRecord_Q16GRPRecord1*)malloc(6400000 * sizeof(struct AGGRecord_Q16GRPRecord1));
    memset(x39790, 0, 6400000 * sizeof(struct AGGRecord_Q16GRPRecord1));
    /* VAR */ int x39791 = 0;
    while(1) {
      
      int x9126 = x39791;
      if (!((x9126<(6400000)))) break; 
      
      int x9128 = x39791;
      struct Q16GRPRecord1* x9129 = &(x39773[x9128]);
      struct AGGRecord_Q16GRPRecord1* x12513 = (struct AGGRecord_Q16GRPRecord1*)malloc(1 * sizeof(struct AGGRecord_Q16GRPRecord1));
      memset(x12513, 0, 1 * sizeof(struct AGGRecord_Q16GRPRecord1));
      x12513->key = x9129; x12513->aggs = 0.0;
      struct AGGRecord_Q16GRPRecord1 x11825 = *x12513;
      *(x39790 + x9128) = x11825;
      struct AGGRecord_Q16GRPRecord1* x11827 = &(x39790[x9128]);
      x12513 = x11827;
      int x9132 = x39791;
      x39791 = (x9132+(1));
    };
    /* VAR */ int x39807 = 0;
    struct Q16GRPRecord2* x39808 = (struct Q16GRPRecord2*)malloc(6400000 * sizeof(struct Q16GRPRecord2));
    memset(x39808, 0, 6400000 * sizeof(struct Q16GRPRecord2));
    /* VAR */ int x39809 = 0;
    while(1) {
      
      int x9139 = x39809;
      if (!((x9139<(6400000)))) break; 
      
      int x9141 = x39809;
      struct Q16GRPRecord2* x12530 = (struct Q16GRPRecord2*)malloc(1 * sizeof(struct Q16GRPRecord2));
      memset(x12530, 0, 1 * sizeof(struct Q16GRPRecord2));
      x12530->P_BRAND = ""; x12530->P_TYPE = ""; x12530->P_SIZE = 0;
      struct Q16GRPRecord2 x11840 = *x12530;
      *(x39808 + x9141) = x11840;
      struct Q16GRPRecord2* x11842 = &(x39808[x9141]);
      x12530 = x11842;
      int x9144 = x39809;
      x39809 = (x9144+(1));
    };
    /* VAR */ int x39824 = 0;
    struct AGGRecord_Q16GRPRecord2* x39825 = (struct AGGRecord_Q16GRPRecord2*)malloc(187500 * sizeof(struct AGGRecord_Q16GRPRecord2));
    memset(x39825, 0, 187500 * sizeof(struct AGGRecord_Q16GRPRecord2));
    /* VAR */ int x39826 = 0;
    while(1) {
      
      int x9151 = x39826;
      if (!((x9151<(187500)))) break; 
      
      int x9153 = x39826;
      struct Q16GRPRecord2* x9154 = &(x39808[x9153]);
      struct AGGRecord_Q16GRPRecord2* x12548 = (struct AGGRecord_Q16GRPRecord2*)malloc(1 * sizeof(struct AGGRecord_Q16GRPRecord2));
      memset(x12548, 0, 1 * sizeof(struct AGGRecord_Q16GRPRecord2));
      x12548->key = x9154; x12548->aggs = 0.0;
      struct AGGRecord_Q16GRPRecord2 x11856 = *x12548;
      *(x39825 + x9153) = x11856;
      struct AGGRecord_Q16GRPRecord2* x11858 = &(x39825[x9153]);
      x12548 = x11858;
      int x9157 = x39826;
      x39826 = (x9157+(1));
    };
    /* VAR */ struct timeval x39842 = x9402;
    struct timeval x39843 = x39842;
    /* VAR */ struct timeval x39844 = x9402;
    struct timeval x39845 = x39844;
    /* VAR */ struct timeval x39846 = x9402;
    struct timeval x39847 = x39846;
    struct timeval* x39848 = &x39845;
    gettimeofday(x39848, NULL);
    /* VAR */ int x39850 = 0;
    int* x39935 = &(x39893);
    GTree* x39936 = g_tree_new(x39935);
    /* VAR */ int x39937 = 0;
    /* VAR */ int x39938 = 0;
    while(1) {
      
      int x39940 = x39850;
      if (!((x39940<(x10375)))) break; 
      
      int x2022 = x39850;
      struct PARTSUPPRecord* x333 = &(x11717[x2022]);
      int x335 = x333->PS_PARTKEY;
      struct PARTRecord* x6578 = &(x11561[(x335-(1))]);
      int x22227 = strlen("Brand#21");
      int x22228 = strncmp((x6578->P_BRAND), "Brand#21", x22227);
      int x6581 = !((x22228==(0)));
      /* VAR */ int ite31522 = 0;
      if(x6581) {
        int x39955 = strlen("PROMO PLATED");
        int x39956 = strncmp((x6578->P_TYPE), "PROMO PLATED", x39955);
        int x39958 = !((x39956==(0)));
        ite31522 = x39958;
      } else {
        
        ite31522 = 0;
      };
      int x28919 = ite31522;
      /* VAR */ int ite31534 = 0;
      if(x28919) {
        int x39965 = x6578->P_SIZE;
        /* VAR */ int x39967 = 0;
        if((x39965==(23))) {
          x39967 = 1;
        } else {
          
          x39967 = (x39965==(3));
        };
        int x39973 = x39967;
        /* VAR */ int x39974 = 0;
        if(x39973) {
          x39974 = 1;
        } else {
          
          x39974 = (x39965==(33));
        };
        int x39980 = x39974;
        /* VAR */ int x39981 = 0;
        if(x39980) {
          x39981 = 1;
        } else {
          
          x39981 = (x39965==(29));
        };
        int x39987 = x39981;
        /* VAR */ int x39988 = 0;
        if(x39987) {
          x39988 = 1;
        } else {
          
          x39988 = (x39965==(40));
        };
        int x39994 = x39988;
        /* VAR */ int x39995 = 0;
        if(x39994) {
          x39995 = 1;
        } else {
          
          x39995 = (x39965==(27));
        };
        int x40001 = x39995;
        /* VAR */ int x40002 = 0;
        if(x40001) {
          x40002 = 1;
        } else {
          
          x40002 = (x39965==(22));
        };
        int x40008 = x40002;
        /* VAR */ int x40009 = 0;
        if(x40008) {
          x40009 = 1;
        } else {
          
          x40009 = (x39965==(4));
        };
        int x40015 = x40009;
        ite31534 = x40015;
      } else {
        
        ite31534 = 0;
      };
      int x28921 = ite31534;
      if(x28921) {
        if(((x6578->P_PARTKEY)==(x335))) {
          if(((x6578->P_PARTKEY)==(x335))) {
            int x927 = x333->PS_SUPPKEY;
            /* VAR */ int resultRetain3836 = 0;
            struct SUPPLIERRecord* x3838 = &(x11440[(x927-(1))]);
            char* x376 = x3838->S_COMMENT;
            char* x22269 = pointer_add(x376, 0);
            char* x22270 = strstr(x22269, "Customer");
            char* x22271 = NULL;
            /* VAR */ int ite28942 = 0;
            if((x22270==(x22271))) {
              ite28942 = -1;
            } else {
              
              int x28944 = str_subtract(x22270, x376);
              ite28942 = x28944;
            };
            int x22274 = ite28942;
            char* x22275 = pointer_add(x376, x22274);
            char* x22276 = strstr(x22275, "Complaints");
            char* x22277 = NULL;
            /* VAR */ int ite28953 = 0;
            if((x22276==(x22277))) {
              ite28953 = -1;
            } else {
              
              int x28955 = str_subtract(x22276, x376);
              ite28953 = x28955;
            };
            int x22280 = ite28953;
            /* VAR */ int ite31595 = 0;
            if((x22274!=(-1))) {
              ite31595 = (x22280!=(-1));
            } else {
              
              ite31595 = 0;
            };
            int x28961 = ite31595;
            if(x28961) {
              int x3849 = !((x927==((x3838->S_SUPPKEY))));
              int x3850 = !(x3849);
              if(x3850) {
                resultRetain3836 = 1;
              };
            };
            int x3854 = resultRetain3836;
            int x3855 = !(x3854);
            if(x3855) {
              int x9265 = x39772;
              struct Q16GRPRecord1* x9266 = &(x39773[x9265]);
              x9266->P_BRAND = (x6578->P_BRAND);
              x9266->P_TYPE = (x6578->P_TYPE);
              x9266->P_SIZE = (x6578->P_SIZE);
              x9266->PS_SUPPKEY = x927;
              int x9271 = x39772;
              x39772 = (x9271+(1));
              char* x19305 = x9266->P_BRAND;
              int x22304 = strlen(x19305);
              /* VAR */ int x20240 = 0;
              /* VAR */ int x20241 = 0;
              while(1) {
                
                int x20242 = x20240;
                if (!((x20242<(x22304)))) break; 
                
                int x20244 = x20241;
                int x20245 = x20240;
                char* x22312 = pointer_add(x19305, x20245);
                char x22313 = *(x22312);
                x20241 = (x20244+(x22313));
                int x20250 = x20240;
                x20240 = (x20250+(1));
              };
              int x20254 = x20241;
              char* x19307 = x9266->P_TYPE;
              int x22322 = strlen(x19307);
              /* VAR */ int x20257 = 0;
              /* VAR */ int x20258 = 0;
              while(1) {
                
                int x20259 = x20257;
                if (!((x20259<(x22322)))) break; 
                
                int x20261 = x20258;
                int x20262 = x20257;
                char* x22330 = pointer_add(x19307, x20262);
                char x22331 = *(x22330);
                x20258 = (x20261+(x22331));
                int x20267 = x20257;
                x20257 = (x20267+(1));
              };
              int x20271 = x20258;
              int x19309 = x9266->P_SIZE;
              int x19311 = x9266->PS_SUPPKEY;
              int x5459 = (((x20254+(x20271))+(x19309))+(x19311))&((1048576-(1)));
              GList** x5460 = x39760[x5459];
              int x5461 = x39759;
              if((x5459>(x5461))) {
                x39759 = x5459;
              };
              /* VAR */ struct AGGRecord_Q16GRPRecord1* x14111 = NULL;
              GList* x14112 = *(x5460);
              /* VAR */ GList* x14113 = x14112;
              while(1) {
                
                GList* x14114 = x14113;
                GList* x14115 = NULL;
                if (!((x14114!=(x14115)))) break; 
                
                GList* x14117 = x14113;
                void* x14118 = g_list_nth_data(x14117, 0);
                struct AGGRecord_Q16GRPRecord1* x14119 = (struct AGGRecord_Q16GRPRecord1*){x14118};
                GList* x14120 = x14113;
                GList* x14121 = g_list_next(x14120);
                x14113 = x14121;
                struct Q16GRPRecord1* x14123 = x14119->key;
                int x20315 = strcmp((x14123->P_BRAND), x19305);
                int x20316 = !(x20315);
                int x20318 = strcmp((x14123->P_TYPE), x19307);
                int x20319 = !(x20318);
                /* VAR */ int ite31726 = 0;
                if(x20316) {
                  ite31726 = x20319;
                } else {
                  
                  ite31726 = 0;
                };
                int x29071 = ite31726;
                /* VAR */ int ite31733 = 0;
                if(x29071) {
                  ite31733 = ((x14123->P_SIZE)==(x19309));
                } else {
                  
                  ite31733 = 0;
                };
                int x29073 = ite31733;
                /* VAR */ int ite31740 = 0;
                if(x29073) {
                  ite31740 = ((x14123->PS_SUPPKEY)==(x19311));
                } else {
                  
                  ite31740 = 0;
                };
                int x29075 = ite31740;
                if(x29075) {
                  x14111 = x14119;
                  break;
                };
              };
              struct AGGRecord_Q16GRPRecord1* x14129 = x14111;
              /* VAR */ struct AGGRecord_Q16GRPRecord1* ite29082 = 0;
              if((x14129!=(NULL))) {
                ite29082 = x14129;
              } else {
                
                /* VAR */ double x29084 = 0;
                /* VAR */ double x29085 = 0;
                double x29086 = x29085;
                int x29087 = x39789;
                struct AGGRecord_Q16GRPRecord1* x29088 = &(x39790[x29087]);
                x29088->key = x9266;
                x29088->aggs = x29086;
                int x29091 = x39789;
                x39789 = (x29091+(1));
                GList* x29094 = *(x5460);
                GList* x29095 = g_list_prepend(x29094, x29088);
                pointer_assign(x5460, x29095);
                ite29082 = x29088;
              };
              struct AGGRecord_Q16GRPRecord1* x5474 = ite29082;
              double x7390 = x5474->aggs;
              x5474->aggs = x7390;
            };
          };
        };
      };
      int x2058 = x39850;
      x39850 = (x2058+(1));
    };
    int x40232 = x39759;
    int x24757 = 0;
    for(; x24757 < (x40232+(1)) ; x24757 += 1) {
      
      GList** x24758 = x39760[x24757];
      GList* x24879 = *(x24758);
      /* VAR */ GList* x24880 = x24879;
      while(1) {
        
        GList* x14228 = x24880;
        GList* x14229 = NULL;
        if (!((x14228!=(x14229)))) break; 
        
        GList* x14231 = x24880;
        void* x14232 = g_list_nth_data(x14231, 0);
        GList* x14234 = x24880;
        GList* x14235 = g_list_next(x14234);
        x24880 = x14235;
        struct Q16GRPRecord1* x14240 = ((struct AGGRecord_Q16GRPRecord1*){x14232})->key;
        int x14244 = x39807;
        struct Q16GRPRecord2* x14245 = &(x39808[x14244]);
        x14245->P_BRAND = (x14240->P_BRAND);
        x14245->P_TYPE = (x14240->P_TYPE);
        x14245->P_SIZE = (x14240->P_SIZE);
        int x14249 = x39807;
        x39807 = (x14249+(1));
        char* x19502 = x14245->P_BRAND;
        int x22570 = strlen(x19502);
        /* VAR */ int x20502 = 0;
        /* VAR */ int x20503 = 0;
        while(1) {
          
          int x20504 = x20502;
          if (!((x20504<(x22570)))) break; 
          
          int x20506 = x20503;
          int x20507 = x20502;
          char* x22578 = pointer_add(x19502, x20507);
          char x22579 = *(x22578);
          x20503 = (x20506+(x22579));
          int x20512 = x20502;
          x20502 = (x20512+(1));
        };
        int x20516 = x20503;
        char* x19504 = x14245->P_TYPE;
        int x22588 = strlen(x19504);
        /* VAR */ int x20519 = 0;
        /* VAR */ int x20520 = 0;
        while(1) {
          
          int x20521 = x20519;
          if (!((x20521<(x22588)))) break; 
          
          int x20523 = x20520;
          int x20524 = x20519;
          char* x22596 = pointer_add(x19504, x20524);
          char x22597 = *(x22596);
          x20520 = (x20523+(x22597));
          int x20529 = x20519;
          x20519 = (x20529+(1));
        };
        int x20533 = x20520;
        int x19506 = x14245->P_SIZE;
        int x14254 = ((x20516+(x20533))+(x19506))&((1048576-(1)));
        GList** x14255 = x39747[x14254];
        int x14256 = x39746;
        if((x14254>(x14256))) {
          x39746 = x14254;
        };
        /* VAR */ struct AGGRecord_Q16GRPRecord2* x14264 = NULL;
        GList* x14265 = *(x14255);
        /* VAR */ GList* x14266 = x14265;
        while(1) {
          
          GList* x14190 = x14266;
          GList* x14191 = NULL;
          if (!((x14190!=(x14191)))) break; 
          
          GList* x14193 = x14266;
          void* x14194 = g_list_nth_data(x14193, 0);
          struct AGGRecord_Q16GRPRecord2* x14195 = (struct AGGRecord_Q16GRPRecord2*){x14194};
          GList* x14196 = x14266;
          GList* x14197 = g_list_next(x14196);
          x14266 = x14197;
          struct Q16GRPRecord2* x14199 = x14195->key;
          int x20572 = strcmp((x14199->P_BRAND), x19502);
          int x20573 = !(x20572);
          int x20575 = strcmp((x14199->P_TYPE), x19504);
          int x20576 = !(x20575);
          /* VAR */ int ite32350 = 0;
          if(x20573) {
            ite32350 = x20576;
          } else {
            
            ite32350 = 0;
          };
          int x29610 = ite32350;
          /* VAR */ int ite32357 = 0;
          if(x29610) {
            ite32357 = ((x14199->P_SIZE)==(x19506));
          } else {
            
            ite32357 = 0;
          };
          int x29612 = ite32357;
          if(x29612) {
            x14264 = x14195;
            break;
          };
        };
        struct AGGRecord_Q16GRPRecord2* x14282 = x14264;
        /* VAR */ struct AGGRecord_Q16GRPRecord2* ite29619 = 0;
        if((x14282!=(NULL))) {
          ite29619 = x14282;
        } else {
          
          /* VAR */ double x29621 = 0;
          /* VAR */ double x29622 = 0;
          double x29623 = x29622;
          int x29624 = x39824;
          struct AGGRecord_Q16GRPRecord2* x29625 = &(x39825[x29624]);
          x29625->key = x14245;
          x29625->aggs = x29623;
          int x29628 = x39824;
          x39824 = (x29628+(1));
          GList* x29631 = *(x14255);
          GList* x29632 = g_list_prepend(x29631, x29625);
          pointer_assign(x14255, x29632);
          ite29619 = x29625;
        };
        struct AGGRecord_Q16GRPRecord2* x14285 = ite29619;
        double x14300 = x14285->aggs;
        x14285->aggs = (x14300+(1.0));
      };
    };
    int x40831 = x39746;
    int x25033 = 0;
    for(; x25033 < (x40831+(1)) ; x25033 += 1) {
      
      GList** x25034 = x39747[x25033];
      GList* x25039 = *(x25034);
      /* VAR */ GList* x25040 = x25039;
      while(1) {
        
        GList* x14319 = x25040;
        GList* x14320 = NULL;
        if (!((x14319!=(x14320)))) break; 
        
        GList* x14322 = x25040;
        void* x14323 = g_list_nth_data(x14322, 0);
        struct AGGRecord_Q16GRPRecord2* x14324 = (struct AGGRecord_Q16GRPRecord2*){x14323};
        GList* x14325 = x25040;
        GList* x14326 = g_list_next(x14325);
        x25040 = x14326;
        g_tree_insert(x39936, x14324, x14324);
      };
    };
    while(1) {
      
      int x2177 = x39937;
      int x490 = !(x2177);
      /* VAR */ int ite32437 = 0;
      if(x490) {
        int x40879 = g_tree_nnodes(x39936);
        ite32437 = (x40879!=(0));
      } else {
        
        ite32437 = 0;
      };
      int x29687 = ite32437;
      if (!(x29687)) break; 
      
      void* x14340 = NULL;
      void** x14348 = &(x14340);
      g_tree_foreach(x39936, x14347, x14348);
      struct AGGRecord_Q16GRPRecord2* x14350 = (struct AGGRecord_Q16GRPRecord2*){x14340};
      int x14351 = g_tree_remove(x39936, x14350);
      if(0) {
        x39937 = 1;
      } else {
        
        struct Q16GRPRecord2* x503 = x14350->key;
        double x7472 = x14350->aggs;
        printf("%s|%s|%d|%.0f\n", (x503->P_BRAND), (x503->P_TYPE), (x503->P_SIZE), x7472);
        int x2199 = x39938;
        x39938 = (x2199+(1));
      };
    };
    int x40908 = x39938;
    printf("(%d rows)\n", x40908);
    struct timeval* x40910 = &x39847;
    gettimeofday(x40910, NULL);
    struct timeval* x40912 = &x39843;
    struct timeval* x40913 = &x39847;
    struct timeval* x40914 = &x39845;
    long x40915 = timeval_subtract(x40912, x40913, x40914);
    printf("Generated code run in %ld milliseconds.\n", x40915);
  };
}
/* ----------- FUNCTIONS ----------- */
int x39893(struct AGGRecord_Q16GRPRecord2* x240, struct AGGRecord_Q16GRPRecord2* x241) {
  double x7641 = x240->aggs;
  double x7643 = x241->aggs;
  /* VAR */ int ite28867 = 0;
  if((x7641<(x7643))) {
    ite28867 = 1;
  } else {
    
    double x28869 = x240->aggs;
    double x28870 = x241->aggs;
    /* VAR */ int ite28873 = 0;
    if((x28869>(x28870))) {
      ite28873 = -1;
    } else {
      
      struct Q16GRPRecord2* x28875 = x240->key;
      struct Q16GRPRecord2* x28877 = x241->key;
      int x28879 = strcmp((x28875->P_BRAND), (x28877->P_BRAND));
      /* VAR */ int x28880 = x28879;
      int x28881 = x28880;
      if((x28881==(0))) {
        int x22203 = strcmp((x28875->P_TYPE), (x28877->P_TYPE));
        x28880 = x22203;
        int x262 = x28880;
        if((x262==(0))) {
          x28880 = ((x28875->P_SIZE)-((x28877->P_SIZE)));
        };
      };
      int x28895 = x28880;
      ite28873 = x28895;
    };
    int x28872 = ite28873;
    ite28867 = x28872;
  };
  int x272 = ite28867;
  return x272; 
}

int x14347(void* x14341, void* x14342, void* x14343) {
  pointer_assign(((struct AGGRecord_Q16GRPRecord2**){x14343}), ((struct AGGRecord_Q16GRPRecord2*){x14342}));
  return 1; 
}
