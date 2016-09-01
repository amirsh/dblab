#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct LINEITEMRecord;
struct AGGRecord_OptimalString;
struct ORDERSRecord;
struct LINEITEMRecord {
  numeric_int_t L_ORDERKEY;
  numeric_int_t L_SHIPDATE;
  numeric_int_t L_COMMITDATE;
  numeric_int_t L_RECEIPTDATE;
  numeric_int_t L_SHIPMODE;
};

struct AGGRecord_OptimalString {
  numeric_int_t key;
  double* aggs;
};

struct ORDERSRecord {
  numeric_int_t O_ORDERKEY;
  char* O_ORDERPRIORITY;
};


numeric_int_t x557187(numeric_int_t x537450);

boolean_t x557189(numeric_int_t x537455, numeric_int_t x537456);

boolean_t x557217(char** x537481, char** x537482);

numeric_int_t x557494(struct AGGRecord_OptimalString* x528835, struct AGGRecord_OptimalString* x528836);

numeric_int_t x537793(void* x537787, void* x537788, void* x537789);
/* GLOBAL VARS */

GArray* x537086;
int main(int argc, char** argv) {
  /* VAR */ long mallocSym_557194_560349 = 0L;
  /* VAR */ long mallocSym_557411_560350 = 0L;
  /* VAR */ long mallocSym_536338_560351 = 0L;
  /* VAR */ long mallocSym_535691_560352 = 0L;
  /* VAR */ long mallocSym_535450_560353 = 0L;
  /* VAR */ long mallocSym_535605_560354 = 0L;
  /* VAR */ long mallocSym_556505_560355 = 0L;
  /* VAR */ long mallocSym_536207_560356 = 0L;
  /* VAR */ long mallocSym_535584_560357 = 0L;
  /* VAR */ long mallocSym_535568_560358 = 0L;
  /* VAR */ long mallocSym_544890_560359 = 0L;
  /* VAR */ long mallocSym_535434_560360 = 0L;
  /* VAR */ long mallocSym_557354_560361 = 0L;
  /* VAR */ long mallocSym_535466_560362 = 0L;
  /* VAR */ long mallocSym_536080_560363 = 0L;
  /* VAR */ long mallocSym_556129_560364 = 0L;
  /* VAR */ long mallocSym_535726_560365 = 0L;
  /* VAR */ long mallocSym_556493_560366 = 0L;
  /* VAR */ long mallocSym_555870_560367 = 0L;
  /* VAR */ long mallocSym_557353_560368 = 0L;
  /* VAR */ long mallocSym_535623_560369 = 0L;
  /* VAR */ long mallocSym_557423_560370 = 0L;
  /* VAR */ long mallocSym_556435_560371 = 0L;
  /* VAR */ long mallocSym_556436_560372 = 0L;
  /* VAR */ numeric_int_t x531676 = 0;
  numeric_int_t x537085 = sizeof(char*);
  x537086 = g_array_new(0, 1, x537085);
  numeric_int_t x537087 = sizeof(char*);
  GArray* x537088 = g_array_new(0, 1, x537087);
  FILE* x555864 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x555865 = 0;
  numeric_int_t x555866 = x555865;
  numeric_int_t* x555867 = &x555866;
  numeric_int_t x555868 = fscanf(x555864, "%d", x555867);
  pclose(x555864);
  struct LINEITEMRecord* x560384 = (struct LINEITEMRecord*)malloc(x555866 * sizeof(struct LINEITEMRecord));
  memset(x560384, 0, x555866 * sizeof(struct LINEITEMRecord));
  long x560385 = mallocSym_555870_560367;
  mallocSym_555870_560367 = (x560385+(((long){x555866})));
  numeric_int_t x555871 = O_RDONLY;
  numeric_int_t x555872 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x555871);
  struct stat x555873 = (struct stat){0};
  /* VAR */ struct stat x555874 = x555873;
  struct stat x555875 = x555874;
  struct stat* x555876 = &x555875;
  numeric_int_t x555877 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x555876);
  numeric_int_t x555879 = PROT_READ;
  numeric_int_t x555880 = MAP_PRIVATE;
  char* x555881 = mmap(NULL, (x555876->st_size), x555879, x555880, x555872, 0);
  /* VAR */ numeric_int_t x555882 = 0;
  while(1) {
    
    numeric_int_t x528711 = x555882;
    /* VAR */ boolean_t ite548919 = 0;
    if((x528711<(x555866))) {
      char x555888 = *x555881;
      ite548919 = (x555888!=('\0'));
    } else {
      
      ite548919 = 0;
    };
    boolean_t x547162 = ite548919;
    if (!(x547162)) break; 
    
    /* VAR */ numeric_int_t x534156 = 0;
    numeric_int_t x534157 = x534156;
    numeric_int_t* x534158 = &x534157;
    char* x534159 = strntoi_unchecked(x555881, x534158);
    x555881 = x534159;
    /* VAR */ numeric_int_t x534161 = 0;
    numeric_int_t x534162 = x534161;
    numeric_int_t* x534163 = &x534162;
    char* x534164 = strntoi_unchecked(x555881, x534163);
    x555881 = x534164;
    /* VAR */ numeric_int_t x534166 = 0;
    numeric_int_t x534167 = x534166;
    numeric_int_t* x534168 = &x534167;
    char* x534169 = strntoi_unchecked(x555881, x534168);
    x555881 = x534169;
    /* VAR */ numeric_int_t x534171 = 0;
    numeric_int_t x534172 = x534171;
    numeric_int_t* x534173 = &x534172;
    char* x534174 = strntoi_unchecked(x555881, x534173);
    x555881 = x534174;
    /* VAR */ double x534176 = 0.0;
    double x534177 = x534176;
    double* x534178 = &x534177;
    char* x534179 = strntod_unchecked(x555881, x534178);
    x555881 = x534179;
    /* VAR */ double x534181 = 0.0;
    double x534182 = x534181;
    double* x534183 = &x534182;
    char* x534184 = strntod_unchecked(x555881, x534183);
    x555881 = x534184;
    /* VAR */ double x534186 = 0.0;
    double x534187 = x534186;
    double* x534188 = &x534187;
    char* x534189 = strntod_unchecked(x555881, x534188);
    x555881 = x534189;
    /* VAR */ double x534191 = 0.0;
    double x534192 = x534191;
    double* x534193 = &x534192;
    char* x534194 = strntod_unchecked(x555881, x534193);
    x555881 = x534194;
    char x534196 = *x555881;
    /* VAR */ char x534197 = x534196;
    x555881 += 1;
    x555881 += 1;
    char x534201 = *x555881;
    /* VAR */ char x534202 = x534201;
    x555881 += 1;
    x555881 += 1;
    /* VAR */ numeric_int_t x534206 = 0;
    numeric_int_t x534207 = x534206;
    numeric_int_t* x534208 = &x534207;
    char* x534209 = strntoi_unchecked(x555881, x534208);
    x555881 = x534209;
    /* VAR */ numeric_int_t x534211 = 0;
    numeric_int_t x534212 = x534211;
    numeric_int_t* x534213 = &x534212;
    char* x534214 = strntoi_unchecked(x555881, x534213);
    x555881 = x534214;
    /* VAR */ numeric_int_t x534216 = 0;
    numeric_int_t x534217 = x534216;
    numeric_int_t* x534218 = &x534217;
    char* x534219 = strntoi_unchecked(x555881, x534218);
    x555881 = x534219;
    /* VAR */ numeric_int_t x534225 = 0;
    numeric_int_t x534226 = x534225;
    numeric_int_t* x534227 = &x534226;
    char* x534228 = strntoi_unchecked(x555881, x534227);
    x555881 = x534228;
    /* VAR */ numeric_int_t x534230 = 0;
    numeric_int_t x534231 = x534230;
    numeric_int_t* x534232 = &x534231;
    char* x534233 = strntoi_unchecked(x555881, x534232);
    x555881 = x534233;
    /* VAR */ numeric_int_t x534235 = 0;
    numeric_int_t x534236 = x534235;
    numeric_int_t* x534237 = &x534236;
    char* x534238 = strntoi_unchecked(x555881, x534237);
    x555881 = x534238;
    /* VAR */ numeric_int_t x534244 = 0;
    numeric_int_t x534245 = x534244;
    numeric_int_t* x534246 = &x534245;
    char* x534247 = strntoi_unchecked(x555881, x534246);
    x555881 = x534247;
    /* VAR */ numeric_int_t x534249 = 0;
    numeric_int_t x534250 = x534249;
    numeric_int_t* x534251 = &x534250;
    char* x534252 = strntoi_unchecked(x555881, x534251);
    x555881 = x534252;
    /* VAR */ numeric_int_t x534254 = 0;
    numeric_int_t x534255 = x534254;
    numeric_int_t* x534256 = &x534255;
    char* x534257 = strntoi_unchecked(x555881, x534256);
    x555881 = x534257;
    /* VAR */ char* x534263 = x555881;
    while(1) {
      
      char x534264 = *x555881;
      /* VAR */ boolean_t ite549039 = 0;
      if((x534264!=('|'))) {
        char x556007 = *x555881;
        ite549039 = (x556007!=('\n'));
      } else {
        
        ite549039 = 0;
      };
      boolean_t x547275 = ite549039;
      if (!(x547275)) break; 
      
      x555881 += 1;
    };
    char* x534271 = x534263;
    numeric_int_t x534272 = x555881 - x534271;
    numeric_int_t x534273 = x534272+(1);
    char* x560535 = (char*)malloc(x534273 * sizeof(char));
    memset(x560535, 0, x534273 * sizeof(char));
    long x560536 = mallocSym_535434_560360;
    mallocSym_535434_560360 = (x560536+(((long){x534273})));
    char* x534276 = x534263;
    char* x534277 = strncpy(x560535, x534276, x534272);
    x555881 += 1;
    /* VAR */ char* x534279 = x555881;
    while(1) {
      
      char x534280 = *x555881;
      /* VAR */ boolean_t ite549060 = 0;
      if((x534280!=('|'))) {
        char x556027 = *x555881;
        ite549060 = (x556027!=('\n'));
      } else {
        
        ite549060 = 0;
      };
      boolean_t x547289 = ite549060;
      if (!(x547289)) break; 
      
      x555881 += 1;
    };
    char* x534287 = x534279;
    numeric_int_t x534288 = x555881 - x534287;
    numeric_int_t x534289 = x534288+(1);
    char* x560559 = (char*)malloc(x534289 * sizeof(char));
    memset(x560559, 0, x534289 * sizeof(char));
    long x560560 = mallocSym_535450_560353;
    mallocSym_535450_560353 = (x560560+(((long){x534289})));
    char* x534292 = x534279;
    char* x534293 = strncpy(x560559, x534292, x534288);
    x555881 += 1;
    /* VAR */ char* x534295 = x555881;
    while(1) {
      
      char x534296 = *x555881;
      /* VAR */ boolean_t ite549081 = 0;
      if((x534296!=('|'))) {
        char x556047 = *x555881;
        ite549081 = (x556047!=('\n'));
      } else {
        
        ite549081 = 0;
      };
      boolean_t x547303 = ite549081;
      if (!(x547303)) break; 
      
      x555881 += 1;
    };
    char* x534303 = x534295;
    numeric_int_t x534304 = x555881 - x534303;
    numeric_int_t x534305 = x534304+(1);
    char* x560583 = (char*)malloc(x534305 * sizeof(char));
    memset(x560583, 0, x534305 * sizeof(char));
    long x560584 = mallocSym_535466_560362;
    mallocSym_535466_560362 = (x560584+(((long){x534305})));
    char* x534308 = x534295;
    char* x534309 = strncpy(x560583, x534308, x534304);
    x555881 += 1;
    void* x537270 = &(x560559);
    GArray* x537271 = g_array_append_vals(x537088, x537270, 1);
    numeric_int_t x531706 = x531676;
    if((x531706>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "L_SHIPMODE", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "L_SHIPMODE");
    };
    /* VAR */ numeric_int_t x537277 = -1;
    numeric_int_t x537278 = x537086->len;
    numeric_int_t x544532 = 0;
    for(; x544532 < x537278 ; x544532 += 1) {
      
      char* x544533 = g_array_index(x537086, char*, x544532);
      boolean_t x544534 = strcmp(x544533, x560559);
      boolean_t x544535 = !(x544534);
      if(x544535) {
        x537277 = x544532;
        break;
      };
    };
    numeric_int_t x537288 = x537277;
    boolean_t x531712 = !((x537288!=(-1)));
    if(x531712) {
      numeric_int_t x531713 = x531676;
      x531676 = (x531713+(1));
      void* x537295 = &(x560559);
      GArray* x537296 = g_array_append_vals(x537086, x537295, 1);
    };
    /* VAR */ numeric_int_t x537297 = -1;
    numeric_int_t x537298 = x537086->len;
    numeric_int_t x544559 = 0;
    for(; x544559 < x537298 ; x544559 += 1) {
      
      char* x544560 = g_array_index(x537086, char*, x544559);
      boolean_t x544561 = strcmp(x544560, x560559);
      boolean_t x544562 = !(x544561);
      if(x544562) {
        x537297 = x544559;
        break;
      };
    };
    numeric_int_t x537308 = x537297;
    struct LINEITEMRecord* x560642 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x560642, 0, 1 * sizeof(struct LINEITEMRecord));
    long x560643 = mallocSym_536080_560363;
    mallocSym_536080_560363 = (x560643+(((long){1})));
    x560642->L_ORDERKEY = x534157; x560642->L_SHIPDATE = (((x534207*(10000))+((x534212*(100))))+(x534217)); x560642->L_COMMITDATE = (((x534226*(10000))+((x534231*(100))))+(x534236)); x560642->L_RECEIPTDATE = (((x534245*(10000))+((x534250*(100))))+(x534255)); x560642->L_SHIPMODE = x537308;
    numeric_int_t x528732 = x555882;
    struct LINEITEMRecord x535487 = *x560642;
    *(x560384 + x528732) = x535487;
    struct LINEITEMRecord* x535489 = &(x560384[x528732]);
    x560642 = x535489;
    numeric_int_t x528734 = x555882;
    x555882 = (x528734+(1));
  };
  FILE* x556123 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ numeric_int_t x556124 = 0;
  numeric_int_t x556125 = x556124;
  numeric_int_t* x556126 = &x556125;
  numeric_int_t x556127 = fscanf(x556123, "%d", x556126);
  pclose(x556123);
  struct ORDERSRecord* x560663 = (struct ORDERSRecord*)malloc(x556125 * sizeof(struct ORDERSRecord));
  memset(x560663, 0, x556125 * sizeof(struct ORDERSRecord));
  long x560664 = mallocSym_556129_560364;
  mallocSym_556129_560364 = (x560664+(((long){x556125})));
  numeric_int_t x556130 = O_RDONLY;
  numeric_int_t x556131 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x556130);
  /* VAR */ struct stat x556132 = x555873;
  struct stat x556133 = x556132;
  struct stat* x556134 = &x556133;
  numeric_int_t x556135 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x556134);
  numeric_int_t x556137 = PROT_READ;
  numeric_int_t x556138 = MAP_PRIVATE;
  char* x556139 = mmap(NULL, (x556134->st_size), x556137, x556138, x556131, 0);
  /* VAR */ numeric_int_t x556140 = 0;
  while(1) {
    
    numeric_int_t x528742 = x556140;
    /* VAR */ boolean_t ite549181 = 0;
    if((x528742<(x556125))) {
      char x556146 = *x556139;
      ite549181 = (x556146!=('\0'));
    } else {
      
      ite549181 = 0;
    };
    boolean_t x547396 = ite549181;
    if (!(x547396)) break; 
    
    /* VAR */ numeric_int_t x534355 = 0;
    numeric_int_t x534356 = x534355;
    numeric_int_t* x534357 = &x534356;
    char* x534358 = strntoi_unchecked(x556139, x534357);
    x556139 = x534358;
    /* VAR */ numeric_int_t x534360 = 0;
    numeric_int_t x534361 = x534360;
    numeric_int_t* x534362 = &x534361;
    char* x534363 = strntoi_unchecked(x556139, x534362);
    x556139 = x534363;
    char x534365 = *x556139;
    /* VAR */ char x534366 = x534365;
    x556139 += 1;
    x556139 += 1;
    /* VAR */ double x534370 = 0.0;
    double x534371 = x534370;
    double* x534372 = &x534371;
    char* x534373 = strntod_unchecked(x556139, x534372);
    x556139 = x534373;
    /* VAR */ numeric_int_t x534375 = 0;
    numeric_int_t x534376 = x534375;
    numeric_int_t* x534377 = &x534376;
    char* x534378 = strntoi_unchecked(x556139, x534377);
    x556139 = x534378;
    /* VAR */ numeric_int_t x534380 = 0;
    numeric_int_t x534381 = x534380;
    numeric_int_t* x534382 = &x534381;
    char* x534383 = strntoi_unchecked(x556139, x534382);
    x556139 = x534383;
    /* VAR */ numeric_int_t x534385 = 0;
    numeric_int_t x534386 = x534385;
    numeric_int_t* x534387 = &x534386;
    char* x534388 = strntoi_unchecked(x556139, x534387);
    x556139 = x534388;
    /* VAR */ char* x534394 = x556139;
    while(1) {
      
      char x534395 = *x556139;
      /* VAR */ boolean_t ite549233 = 0;
      if((x534395!=('|'))) {
        char x556197 = *x556139;
        ite549233 = (x556197!=('\n'));
      } else {
        
        ite549233 = 0;
      };
      boolean_t x547441 = ite549233;
      if (!(x547441)) break; 
      
      x556139 += 1;
    };
    char* x534402 = x534394;
    numeric_int_t x534403 = x556139 - x534402;
    numeric_int_t x534404 = x534403+(1);
    char* x560745 = (char*)malloc(x534404 * sizeof(char));
    memset(x560745, 0, x534404 * sizeof(char));
    long x560746 = mallocSym_535568_560358;
    mallocSym_535568_560358 = (x560746+(((long){x534404})));
    char* x534407 = x534394;
    char* x534408 = strncpy(x560745, x534407, x534403);
    x556139 += 1;
    /* VAR */ char* x534410 = x556139;
    while(1) {
      
      char x534411 = *x556139;
      /* VAR */ boolean_t ite549254 = 0;
      if((x534411!=('|'))) {
        char x556217 = *x556139;
        ite549254 = (x556217!=('\n'));
      } else {
        
        ite549254 = 0;
      };
      boolean_t x547455 = ite549254;
      if (!(x547455)) break; 
      
      x556139 += 1;
    };
    char* x534418 = x534410;
    numeric_int_t x534419 = x556139 - x534418;
    numeric_int_t x534420 = x534419+(1);
    char* x560769 = (char*)malloc(x534420 * sizeof(char));
    memset(x560769, 0, x534420 * sizeof(char));
    long x560770 = mallocSym_535584_560357;
    mallocSym_535584_560357 = (x560770+(((long){x534420})));
    char* x534423 = x534410;
    char* x534424 = strncpy(x560769, x534423, x534419);
    x556139 += 1;
    /* VAR */ numeric_int_t x534426 = 0;
    numeric_int_t x534427 = x534426;
    numeric_int_t* x534428 = &x534427;
    char* x534429 = strntoi_unchecked(x556139, x534428);
    x556139 = x534429;
    /* VAR */ char* x534431 = x556139;
    while(1) {
      
      char x534432 = *x556139;
      /* VAR */ boolean_t ite549280 = 0;
      if((x534432!=('|'))) {
        char x556242 = *x556139;
        ite549280 = (x556242!=('\n'));
      } else {
        
        ite549280 = 0;
      };
      boolean_t x547474 = ite549280;
      if (!(x547474)) break; 
      
      x556139 += 1;
    };
    char* x534439 = x534431;
    numeric_int_t x534440 = x556139 - x534439;
    numeric_int_t x534441 = x534440+(1);
    char* x560798 = (char*)malloc(x534441 * sizeof(char));
    memset(x560798, 0, x534441 * sizeof(char));
    long x560799 = mallocSym_535605_560354;
    mallocSym_535605_560354 = (x560799+(((long){x534441})));
    char* x534444 = x534431;
    char* x534445 = strncpy(x560798, x534444, x534440);
    x556139 += 1;
    struct ORDERSRecord* x560806 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x560806, 0, 1 * sizeof(struct ORDERSRecord));
    long x560807 = mallocSym_536207_560356;
    mallocSym_536207_560356 = (x560807+(((long){1})));
    x560806->O_ORDERKEY = x534356; x560806->O_ORDERPRIORITY = x560745;
    numeric_int_t x528756 = x556140;
    struct ORDERSRecord x535612 = *x560806;
    *(x560663 + x528756) = x535612;
    struct ORDERSRecord* x535614 = &(x560663[x528756]);
    x560806 = x535614;
    numeric_int_t x528758 = x556140;
    x556140 = (x528758+(1));
  };
  numeric_int_t x528763 = 0;
  for(; x528763 < 1 ; x528763 += 1) {
    
    GHashTable* x557193 = g_hash_table_new(x557187, x557189);
    struct ORDERSRecord* x561782 = (struct ORDERSRecord*)malloc(60000000 * sizeof(struct ORDERSRecord));
    memset(x561782, 0, 60000000 * sizeof(struct ORDERSRecord));
    long x561783 = mallocSym_557194_560349;
    mallocSym_557194_560349 = (x561783+(((long){60000000})));
    numeric_int_t x544722 = 0;
    for(; x544722 < x556125 ; x544722 += 1) {
      
      struct ORDERSRecord* x544723 = &(x560663[x544722]);
      numeric_int_t x544725 = (x544723->O_ORDERKEY)%(60000000);
      struct ORDERSRecord x544726 = *x544723;
      *(x561782 + x544725) = x544726;
      struct ORDERSRecord* x544728 = &(x561782[x544725]);
      x544723 = x544728;
    };
    g_array_sort(x537086, x557217);
    /* VAR */ numeric_int_t x557225 = 0;
    numeric_int_t x544774 = 0;
    for(; x544774 < x555866 ; x544774 += 1) {
      
      struct LINEITEMRecord* x544775 = &(x560384[x544774]);
      numeric_int_t x544776 = x557225;
      char* x544777 = g_array_index(x537088, char*, x544776);
      /* VAR */ numeric_int_t x544778 = -1;
      numeric_int_t x544779 = x537086->len;
      numeric_int_t x544761 = 0;
      for(; x544761 < x544779 ; x544761 += 1) {
        
        char* x544762 = g_array_index(x537086, char*, x544761);
        boolean_t x544763 = strcmp(x544762, x544777);
        boolean_t x544764 = !(x544763);
        if(x544764) {
          x544778 = x544761;
          break;
        };
      };
      numeric_int_t x544795 = x544778;
      x544775->L_SHIPMODE = x544795;
      numeric_int_t x544797 = x557225;
      x557225 = (x544797+(1));
    };
    /* VAR */ numeric_int_t x557279 = 0;
    numeric_int_t x544830 = 0;
    for(; x544830 < x555866 ; x544830 += 1) {
      
      struct LINEITEMRecord* x544831 = &(x560384[x544830]);
      numeric_int_t x544832 = x557279;
      char* x544833 = g_array_index(x537088, char*, x544832);
      /* VAR */ numeric_int_t x544834 = -1;
      numeric_int_t x544835 = x537086->len;
      numeric_int_t x544817 = 0;
      for(; x544817 < x544835 ; x544817 += 1) {
        
        char* x544818 = g_array_index(x537086, char*, x544817);
        boolean_t x544819 = strcmp(x544818, x544833);
        boolean_t x544820 = !(x544819);
        if(x544820) {
          x544834 = x544817;
          break;
        };
      };
      numeric_int_t x544851 = x544834;
      x544831->L_SHIPMODE = x544851;
      numeric_int_t x544853 = x557279;
      x557279 = (x544853+(1));
    };
    /* VAR */ numeric_int_t x557333 = 0;
    numeric_int_t x544863 = 0;
    for(; x544863 < x556125 ; x544863 += 1) {
      
      numeric_int_t x544864 = x557333;
      x557333 = (x544864+(1));
    };
    /* VAR */ numeric_int_t x557343 = 0;
    numeric_int_t x544874 = 0;
    for(; x544874 < x556125 ; x544874 += 1) {
      
      numeric_int_t x544875 = x557343;
      x557343 = (x544875+(1));
    };
    struct LINEITEMRecord** x561945 = (struct LINEITEMRecord**)malloc(96 * sizeof(struct LINEITEMRecord*));
    memset(x561945, 0, 96 * sizeof(struct LINEITEMRecord*));
    long x561946 = mallocSym_557353_560368;
    long x561947 = (long){96};
    mallocSym_557353_560368 = (x561946+(x561947));
    numeric_int_t* x561950 = (numeric_int_t*)malloc(96 * sizeof(numeric_int_t));
    memset(x561950, 0, 96 * sizeof(numeric_int_t));
    long x561951 = mallocSym_557354_560361;
    mallocSym_557354_560361 = (x561951+(x561947));
    numeric_int_t x544887 = 0;
    for(; x544887 < 96 ; x544887 += 1) {
      
      numeric_int_t x544889 = (x555866/(96))*(4);
      struct LINEITEMRecord* x561967 = (struct LINEITEMRecord*)malloc(x544889 * sizeof(struct LINEITEMRecord));
      memset(x561967, 0, x544889 * sizeof(struct LINEITEMRecord));
      long x561968 = mallocSym_544890_560359;
      mallocSym_544890_560359 = (x561968+(((long){x544889})));
      *(x561945 + x544887) = x561967;
    };
    /* VAR */ numeric_int_t x557366 = 0;
    numeric_int_t x544916 = 0;
    for(; x544916 < x555866 ; x544916 += 1) {
      
      struct LINEITEMRecord* x544917 = &(x560384[x544916]);
      numeric_int_t x544919 = (x544917->L_RECEIPTDATE)/(100);
      numeric_int_t x544925 = (((x544919/(100))-(1992))*(12))+(((x544919%(100))-(1)));
      numeric_int_t x544926 = x561950[x544925];
      struct LINEITEMRecord* x544927 = x561945[x544925];
      struct LINEITEMRecord x544928 = *x544917;
      *(x544927 + x544926) = x544928;
      struct LINEITEMRecord* x544930 = &(x544927[x544926]);
      x544917 = x544930;
      *(x561950 + x544925) = (x544926+(1));
      numeric_int_t x544934 = x557366;
      x557366 = (x544934+(1));
    };
    /* VAR */ numeric_int_t x557410 = 0;
    double** x562018 = (double**)malloc(7 * sizeof(double*));
    memset(x562018, 0, 7 * sizeof(double*));
    long x562019 = mallocSym_557411_560350;
    long x562020 = (long){7};
    mallocSym_557411_560350 = (x562019+(x562020));
    /* VAR */ numeric_int_t x557412 = 0;
    while(1) {
      
      numeric_int_t x533535 = x557412;
      if (!((x533535<(7)))) break; 
      
      numeric_int_t x533537 = x557412;
      double* x562028 = (double*)malloc(2 * sizeof(double));
      memset(x562028, 0, 2 * sizeof(double));
      long x562029 = mallocSym_535726_560365;
      mallocSym_535726_560365 = (x562029+(((long){2})));
      *(x562018 + x533537) = x562028;
      numeric_int_t x533540 = x557412;
      x557412 = (x533540+(1));
    };
    /* VAR */ numeric_int_t x557422 = 0;
    struct AGGRecord_OptimalString* x562038 = (struct AGGRecord_OptimalString*)malloc(7 * sizeof(struct AGGRecord_OptimalString));
    memset(x562038, 0, 7 * sizeof(struct AGGRecord_OptimalString));
    long x562039 = mallocSym_557423_560370;
    mallocSym_557423_560370 = (x562039+(x562020));
    /* VAR */ numeric_int_t x557424 = 0;
    while(1) {
      
      numeric_int_t x533547 = x557424;
      if (!((x533547<(7)))) break; 
      
      numeric_int_t x533549 = x557424;
      double* x533550 = x562018[x533549];
      struct AGGRecord_OptimalString* x562048 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x562048, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      long x562049 = mallocSym_536338_560351;
      mallocSym_536338_560351 = (x562049+(((long){1})));
      x562048->key = 0; x562048->aggs = x533550;
      struct AGGRecord_OptimalString x535740 = *x562048;
      *(x562038 + x533549) = x535740;
      struct AGGRecord_OptimalString* x535742 = &(x562038[x533549]);
      x562048 = x535742;
      numeric_int_t x533553 = x557424;
      x557424 = (x533553+(1));
    };
    struct timeval x557440 = (struct timeval){0};
    /* VAR */ struct timeval x557441 = x557440;
    struct timeval x557442 = x557441;
    /* VAR */ struct timeval x557443 = x557440;
    struct timeval x557444 = x557443;
    /* VAR */ struct timeval x557445 = x557440;
    struct timeval x557446 = x557445;
    struct timeval* x557447 = &x557444;
    gettimeofday(x557447, NULL);
    /* VAR */ numeric_int_t x557449 = -1;
    numeric_int_t x557450 = x537086->len;
    numeric_int_t x544987 = 0;
    for(; x544987 < x557450 ; x544987 += 1) {
      
      char* x544988 = g_array_index(x537086, char*, x544987);
      boolean_t x544989 = strcmp(x544988, "MAIL");
      boolean_t x544990 = !(x544989);
      if(x544990) {
        x557449 = x544987;
        break;
      };
    };
    numeric_int_t x557466 = x557449;
    /* VAR */ numeric_int_t x557467 = -1;
    numeric_int_t x557468 = x537086->len;
    numeric_int_t x545006 = 0;
    for(; x545006 < x557468 ; x545006 += 1) {
      
      char* x545007 = g_array_index(x537086, char*, x545006);
      boolean_t x545008 = strcmp(x545007, "SHIP");
      boolean_t x545009 = !(x545008);
      if(x545009) {
        x557467 = x545006;
        break;
      };
    };
    numeric_int_t x557484 = x557467;
    /* VAR */ numeric_int_t x557485 = 0;
    numeric_int_t* x557502 = &(x557494);
    GTree* x557503 = g_tree_new(x557502);
    /* VAR */ boolean_t x557504 = 0;
    /* VAR */ numeric_int_t x557505 = 0;
    numeric_int_t x545184 = 24;
    for(; x545184 < 37 ; x545184 += 1) {
      
      numeric_int_t x545185 = x561950[x545184];
      struct LINEITEMRecord* x545186 = x561945[x545184];
      numeric_int_t x545112 = 0;
      for(; x545112 < x545185 ; x545112 += 1) {
        
        struct LINEITEMRecord* x545113 = &(x545186[x545112]);
        numeric_int_t x545114 = x545113->L_RECEIPTDATE;
        /* VAR */ boolean_t ite550982 = 0;
        if((x545114<(19950101))) {
          ite550982 = ((x545113->L_COMMITDATE)<(19950101));
        } else {
          
          ite550982 = 0;
        };
        boolean_t x548756 = ite550982;
        /* VAR */ boolean_t ite550991 = 0;
        if(x548756) {
          ite550991 = ((x545113->L_SHIPDATE)<(19950101));
        } else {
          
          ite550991 = 0;
        };
        boolean_t x548758 = ite550991;
        /* VAR */ boolean_t ite551000 = 0;
        if(x548758) {
          ite551000 = ((x545113->L_SHIPDATE)<((x545113->L_COMMITDATE)));
        } else {
          
          ite551000 = 0;
        };
        boolean_t x548760 = ite551000;
        /* VAR */ boolean_t ite551010 = 0;
        if(x548760) {
          ite551010 = ((x545113->L_COMMITDATE)<(x545114));
        } else {
          
          ite551010 = 0;
        };
        boolean_t x548762 = ite551010;
        /* VAR */ boolean_t ite551019 = 0;
        if(x548762) {
          ite551019 = (x545114>=(19940101));
        } else {
          
          ite551019 = 0;
        };
        boolean_t x548764 = ite551019;
        /* VAR */ boolean_t ite551027 = 0;
        if(x548764) {
          numeric_int_t x557951 = x545113->L_SHIPMODE;
          /* VAR */ boolean_t x557953 = 0;
          if((x557951==(x557466))) {
            x557953 = 1;
          } else {
            
            x557953 = (x557951==(x557484));
          };
          boolean_t x557959 = x557953;
          ite551027 = x557959;
        } else {
          
          ite551027 = 0;
        };
        boolean_t x548766 = ite551027;
        if(x548766) {
          numeric_int_t x528896 = x545113->L_ORDERKEY;
          struct ORDERSRecord* x557966 = &(x561782[x528896]);
          if(((x557966->O_ORDERKEY)==(x528896))) {
            if(((x557966->O_ORDERKEY)==(x528896))) {
              char* x529341 = x557966->O_ORDERPRIORITY;
              numeric_int_t x531872 = x545113->L_SHIPMODE;
              void* x538449 = g_hash_table_lookup(x557193, x531872);
              /* VAR */ struct AGGRecord_OptimalString* ite548782 = 0;
              if((x538449==(NULL))) {
                numeric_int_t x548783 = x557410;
                double* x548784 = x562018[x548783];
                numeric_int_t x548785 = x557410;
                x557410 = (x548785+(1));
                numeric_int_t x548788 = x557422;
                struct AGGRecord_OptimalString* x548789 = &(x562038[x548788]);
                x548789->key = x531872;
                x548789->aggs = x548784;
                numeric_int_t x548792 = x557422;
                x557422 = (x548792+(1));
                g_hash_table_insert(x557193, x531872, x548789);
                ite548782 = x548789;
              } else {
                
                ite548782 = x538449;
              };
              struct AGGRecord_OptimalString* x537741 = ite548782;
              double* x528965 = x537741->aggs;
              double x528979 = x528965[0];
              boolean_t x543527 = strcmp(x529341, "1-URGENT");
              /* VAR */ boolean_t ite551075 = 0;
              if((x543527==(0))) {
                ite551075 = 1;
              } else {
                
                boolean_t x558003 = strcmp(x529341, "2-HIGH");
                ite551075 = (x558003==(0));
              };
              boolean_t x548805 = ite551075;
              /* VAR */ double ite548807 = 0;
              if(x548805) {
                ite548807 = (x528979+(1.0));
              } else {
                
                ite548807 = x528979;
              };
              double x528986 = ite548807;
              *x528965 = x528986;
              double x528994 = x528965[1];
              boolean_t x543536 = strcmp(x529341, "1-URGENT");
              /* VAR */ boolean_t ite551095 = 0;
              if((x543536!=(0))) {
                boolean_t x558021 = strcmp(x529341, "2-HIGH");
                ite551095 = (x558021!=(0));
              } else {
                
                ite551095 = 0;
              };
              boolean_t x548818 = ite551095;
              /* VAR */ double ite548820 = 0;
              if(x548818) {
                ite548820 = (x528994+(1.0));
              } else {
                
                ite548820 = x528994;
              };
              double x529000 = ite548820;
              *(x528965 + 1) = x529000;
            };
          };
        };
      };
    };
    GList* x558039 = g_hash_table_get_keys(x557193);
    /* VAR */ GList* x558040 = x558039;
    numeric_int_t x558041 = g_hash_table_size(x557193);
    numeric_int_t x545348 = 0;
    for(; x545348 < x558041 ; x545348 += 1) {
      
      GList* x545349 = x558040;
      void* x545350 = g_list_nth_data(x545349, 0);
      GList* x545351 = g_list_next(x545349);
      x558040 = x545351;
      void* x545353 = g_hash_table_lookup(x557193, x545350);
      struct AGGRecord_OptimalString* x545355 = (struct AGGRecord_OptimalString*){x545353};
      g_tree_insert(x557503, x545355, x545355);
    };
    while(1) {
      
      boolean_t x530154 = x557504;
      boolean_t x529024 = !(x530154);
      /* VAR */ boolean_t ite551141 = 0;
      if(x529024) {
        numeric_int_t x558066 = g_tree_nnodes(x557503);
        ite551141 = (x558066!=(0));
      } else {
        
        ite551141 = 0;
      };
      boolean_t x548857 = ite551141;
      if (!(x548857)) break; 
      
      void* x537786 = NULL;
      void** x537794 = &(x537786);
      g_tree_foreach(x557503, x537793, x537794);
      struct AGGRecord_OptimalString* x537796 = (struct AGGRecord_OptimalString*){x537786};
      numeric_int_t x537797 = g_tree_remove(x557503, x537796);
      if(0) {
        x557504 = 1;
      } else {
        
        char* x537804 = g_array_index(x537086, char*, (x537796->key));
        double* x529039 = x537796->aggs;
        double x529040 = x529039[0];
        double x529041 = x529039[1];
        printf("%s|%.0f|%.0f\n", x537804, x529040, x529041);
        numeric_int_t x530173 = x557505;
        x557505 = (x530173+(1));
      };
    };
    numeric_int_t x558095 = x557505;
    printf("(%d rows)\n", x558095);
    struct timeval* x558097 = &x557446;
    gettimeofday(x558097, NULL);
    struct timeval* x558099 = &x557442;
    struct timeval* x558100 = &x557446;
    struct timeval* x558101 = &x557444;
    long x558102 = timeval_subtract(x558099, x558100, x558101);
    printf("Generated code run in %ld milliseconds.\n", x558102);
  };
  /* VAR */ long mallocSum562726 = 0L;
  long x562727 = mallocSym_557194_560349;
  numeric_int_t x562728 = sizeof(struct ORDERSRecord);
  long x562730 = x562727*(((long){x562728}));
  printf("561782 with type ORDERSRecord: %ld\n", x562730);
  long x562732 = mallocSum562726;
  mallocSum562726 = (x562732+(x562730));
  long x562735 = mallocSym_557411_560350;
  numeric_int_t x562736 = sizeof(double*);
  long x562738 = x562735*(((long){x562736}));
  printf("562018 with type Pointer[Double]: %ld\n", x562738);
  long x562740 = mallocSum562726;
  mallocSum562726 = (x562740+(x562738));
  long x562743 = mallocSym_536338_560351;
  numeric_int_t x562744 = sizeof(struct AGGRecord_OptimalString);
  long x562746 = x562743*(((long){x562744}));
  printf("562048 with type AGGRecord_OptimalString: %ld\n", x562746);
  long x562748 = mallocSum562726;
  mallocSum562726 = (x562748+(x562746));
  long x562751 = mallocSym_535691_560352;
  numeric_int_t x562752 = sizeof(struct LINEITEMRecord);
  long x562754 = x562751*(((long){x562752}));
  printf("561958 with type LINEITEMRecord: %ld\n", x562754);
  long x562756 = mallocSum562726;
  mallocSum562726 = (x562756+(x562754));
  long x562759 = mallocSym_535450_560353;
  numeric_int_t x562760 = sizeof(char);
  long x562762 = x562759*(((long){x562760}));
  printf("560559 with type Byte: %ld\n", x562762);
  long x562764 = mallocSum562726;
  mallocSum562726 = (x562764+(x562762));
  long x562767 = mallocSym_535605_560354;
  numeric_int_t x562768 = sizeof(char);
  long x562770 = x562767*(((long){x562768}));
  printf("560798 with type Byte: %ld\n", x562770);
  long x562772 = mallocSum562726;
  mallocSum562726 = (x562772+(x562770));
  long x562775 = mallocSym_556505_560355;
  numeric_int_t x562776 = sizeof(struct AGGRecord_OptimalString);
  long x562778 = x562775*(((long){x562776}));
  printf("561086 with type AGGRecord_OptimalString: %ld\n", x562778);
  long x562780 = mallocSum562726;
  mallocSum562726 = (x562780+(x562778));
  long x562783 = mallocSym_536207_560356;
  numeric_int_t x562784 = sizeof(struct ORDERSRecord);
  long x562786 = x562783*(((long){x562784}));
  printf("560806 with type ORDERSRecord: %ld\n", x562786);
  long x562788 = mallocSum562726;
  mallocSum562726 = (x562788+(x562786));
  long x562791 = mallocSym_535584_560357;
  numeric_int_t x562792 = sizeof(char);
  long x562794 = x562791*(((long){x562792}));
  printf("560769 with type Byte: %ld\n", x562794);
  long x562796 = mallocSum562726;
  mallocSum562726 = (x562796+(x562794));
  long x562799 = mallocSym_535568_560358;
  numeric_int_t x562800 = sizeof(char);
  long x562802 = x562799*(((long){x562800}));
  printf("560745 with type Byte: %ld\n", x562802);
  long x562804 = mallocSum562726;
  mallocSum562726 = (x562804+(x562802));
  long x562807 = mallocSym_544890_560359;
  numeric_int_t x562808 = sizeof(struct LINEITEMRecord);
  long x562810 = x562807*(((long){x562808}));
  printf("561967 with type LINEITEMRecord: %ld\n", x562810);
  long x562812 = mallocSum562726;
  mallocSum562726 = (x562812+(x562810));
  long x562815 = mallocSym_535434_560360;
  numeric_int_t x562816 = sizeof(char);
  long x562818 = x562815*(((long){x562816}));
  printf("560535 with type Byte: %ld\n", x562818);
  long x562820 = mallocSum562726;
  mallocSum562726 = (x562820+(x562818));
  long x562823 = mallocSym_557354_560361;
  numeric_int_t x562824 = sizeof(numeric_int_t);
  long x562826 = x562823*(((long){x562824}));
  printf("561950 with type Int: %ld\n", x562826);
  long x562828 = mallocSum562726;
  mallocSum562726 = (x562828+(x562826));
  long x562831 = mallocSym_535466_560362;
  numeric_int_t x562832 = sizeof(char);
  long x562834 = x562831*(((long){x562832}));
  printf("560583 with type Byte: %ld\n", x562834);
  long x562836 = mallocSum562726;
  mallocSum562726 = (x562836+(x562834));
  long x562839 = mallocSym_536080_560363;
  numeric_int_t x562840 = sizeof(struct LINEITEMRecord);
  long x562842 = x562839*(((long){x562840}));
  printf("560642 with type LINEITEMRecord: %ld\n", x562842);
  long x562844 = mallocSum562726;
  mallocSum562726 = (x562844+(x562842));
  long x562847 = mallocSym_556129_560364;
  numeric_int_t x562848 = sizeof(struct ORDERSRecord);
  long x562850 = x562847*(((long){x562848}));
  printf("560663 with type ORDERSRecord: %ld\n", x562850);
  long x562852 = mallocSum562726;
  mallocSum562726 = (x562852+(x562850));
  long x562855 = mallocSym_535726_560365;
  numeric_int_t x562856 = sizeof(double);
  long x562858 = x562855*(((long){x562856}));
  printf("562028 with type Double: %ld\n", x562858);
  long x562860 = mallocSum562726;
  mallocSum562726 = (x562860+(x562858));
  long x562863 = mallocSym_556493_560366;
  numeric_int_t x562864 = sizeof(double*);
  long x562866 = x562863*(((long){x562864}));
  printf("561066 with type Pointer[Double]: %ld\n", x562866);
  long x562868 = mallocSum562726;
  mallocSum562726 = (x562868+(x562866));
  long x562871 = mallocSym_555870_560367;
  numeric_int_t x562872 = sizeof(struct LINEITEMRecord);
  long x562874 = x562871*(((long){x562872}));
  printf("560384 with type LINEITEMRecord: %ld\n", x562874);
  long x562876 = mallocSum562726;
  mallocSum562726 = (x562876+(x562874));
  long x562879 = mallocSym_557353_560368;
  numeric_int_t x562880 = sizeof(struct LINEITEMRecord*);
  long x562882 = x562879*(((long){x562880}));
  printf("561945 with type Pointer[LINEITEMRecord]: %ld\n", x562882);
  long x562884 = mallocSum562726;
  mallocSum562726 = (x562884+(x562882));
  long x562887 = mallocSym_535623_560369;
  numeric_int_t x562888 = sizeof(struct ORDERSRecord);
  long x562890 = x562887*(((long){x562888}));
  printf("560830 with type ORDERSRecord: %ld\n", x562890);
  long x562892 = mallocSum562726;
  mallocSum562726 = (x562892+(x562890));
  long x562895 = mallocSym_557423_560370;
  numeric_int_t x562896 = sizeof(struct AGGRecord_OptimalString);
  long x562898 = x562895*(((long){x562896}));
  printf("562038 with type AGGRecord_OptimalString: %ld\n", x562898);
  long x562900 = mallocSum562726;
  mallocSum562726 = (x562900+(x562898));
  long x562903 = mallocSym_556435_560371;
  numeric_int_t x562904 = sizeof(struct LINEITEMRecord*);
  long x562906 = x562903*(((long){x562904}));
  printf("560993 with type Pointer[LINEITEMRecord]: %ld\n", x562906);
  long x562908 = mallocSum562726;
  mallocSum562726 = (x562908+(x562906));
  long x562911 = mallocSym_556436_560372;
  numeric_int_t x562912 = sizeof(numeric_int_t);
  long x562914 = x562911*(((long){x562912}));
  printf("560998 with type Int: %ld\n", x562914);
  long x562916 = mallocSum562726;
  mallocSum562726 = (x562916+(x562914));
  long x562919 = mallocSum562726;
  printf("total: %ld\n", x562919);
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x557187(numeric_int_t x537450) {
  return x537450; 
}

boolean_t x557189(numeric_int_t x537455, numeric_int_t x537456) {
  return (x537455==(x537456)); 
}

boolean_t x557217(char** x537481, char** x537482) {
  char* x537483 = *x537482;
  char* x537484 = *x537481;
  numeric_int_t x543275 = strcmp(x537483, x537484);
  return (x543275<(0)); 
}

numeric_int_t x557494(struct AGGRecord_OptimalString* x528835, struct AGGRecord_OptimalString* x528836) {
  char* x537657 = g_array_index(x537086, char*, (x528835->key));
  char* x537658 = g_array_index(x537086, char*, (x528836->key));
  numeric_int_t x543460 = strcmp(x537657, x537658);
  return x543460; 
}

numeric_int_t x537793(void* x537787, void* x537788, void* x537789) {
  pointer_assign(((struct AGGRecord_OptimalString**){x537789}), ((struct AGGRecord_OptimalString*){x537788}));
  return 1; 
}
