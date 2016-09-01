#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct AGGRecord_OptimalString;
  struct ORDERSRecord;
  
  struct LINEITEMRecord {
  int L_ORDERKEY;
  int L_SHIPDATE;
  int L_COMMITDATE;
  int L_RECEIPTDATE;
  int L_SHIPMODE;
  };
  
  struct AGGRecord_OptimalString {
  int key;
  double* aggs;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  char* O_ORDERPRIORITY;
  };
  
  


int x29476(int x9569);

int x29478(int x9574, int x9575);

int x29506(char** x9600, char** x9601);

int x29782(struct AGGRecord_OptimalString* x170, struct AGGRecord_OptimalString* x171);

int x9911(void* x9905, void* x9906, void* x9907);
/* GLOBAL VARS */

GArray* x9193;
struct timeval x5686;
int main(int argc, char** argv) {
  /* VAR */ int x3428 = 0;
  int x9192 = sizeof(char**);
  x9193 = g_array_new(0, 1, x9192);
  int x9194 = sizeof(char**);
  GArray* x9195 = g_array_new(0, 1, x9194);
  FILE* x28142 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x28143 = 0;
  int x28144 = x28143;
  int* x28145 = &x28144;
  int x28146 = fscanf(x28142, "%d", x28145);
  pclose(x28142);
  struct LINEITEMRecord* x28148 = (struct LINEITEMRecord*)malloc(x28144 * sizeof(struct LINEITEMRecord));
  memset(x28148, 0, x28144 * sizeof(struct LINEITEMRecord));
  int x28149 = O_RDONLY;
  int x28150 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x28149);
  struct stat x28151 = (struct stat){0};
  /* VAR */ struct stat x28152 = x28151;
  struct stat x28153 = x28152;
  struct stat* x28154 = &x28153;
  int x28155 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x28154);
  int x28157 = PROT_READ;
  int x28158 = MAP_PRIVATE;
  char* x28159 = mmap(NULL, (x28154->st_size), x28157, x28158, x28150, 0);
  /* VAR */ int x28160 = 0;
  while(1) {
    
    int x5 = x28160;
    /* VAR */ int ite21167 = 0;
    if((x5<(x28144))) {
      char x28166 = *x28159;
      ite21167 = (x28166!=('\0'));
    } else {
      
      ite21167 = 0;
    };
    int x19400 = ite21167;
    if (!(x19400)) break; 
    
    /* VAR */ int x6196 = 0;
    int x6197 = x6196;
    int* x6198 = &x6197;
    char* x6199 = strntoi_unchecked(x28159, x6198);
    x28159 = x6199;
    /* VAR */ int x6201 = 0;
    int x6202 = x6201;
    int* x6203 = &x6202;
    char* x6204 = strntoi_unchecked(x28159, x6203);
    x28159 = x6204;
    /* VAR */ int x6206 = 0;
    int x6207 = x6206;
    int* x6208 = &x6207;
    char* x6209 = strntoi_unchecked(x28159, x6208);
    x28159 = x6209;
    /* VAR */ int x6211 = 0;
    int x6212 = x6211;
    int* x6213 = &x6212;
    char* x6214 = strntoi_unchecked(x28159, x6213);
    x28159 = x6214;
    /* VAR */ double x6216 = 0.0;
    double x6217 = x6216;
    double* x6218 = &x6217;
    char* x6219 = strntod_unchecked(x28159, x6218);
    x28159 = x6219;
    /* VAR */ double x6221 = 0.0;
    double x6222 = x6221;
    double* x6223 = &x6222;
    char* x6224 = strntod_unchecked(x28159, x6223);
    x28159 = x6224;
    /* VAR */ double x6226 = 0.0;
    double x6227 = x6226;
    double* x6228 = &x6227;
    char* x6229 = strntod_unchecked(x28159, x6228);
    x28159 = x6229;
    /* VAR */ double x6231 = 0.0;
    double x6232 = x6231;
    double* x6233 = &x6232;
    char* x6234 = strntod_unchecked(x28159, x6233);
    x28159 = x6234;
    char x6236 = *x28159;
    /* VAR */ char x6237 = x6236;
    x28159 += 1;
    x28159 += 1;
    char x6241 = *x28159;
    /* VAR */ char x6242 = x6241;
    x28159 += 1;
    x28159 += 1;
    /* VAR */ int x6246 = 0;
    int x6247 = x6246;
    int* x6248 = &x6247;
    char* x6249 = strntoi_unchecked(x28159, x6248);
    x28159 = x6249;
    /* VAR */ int x6251 = 0;
    int x6252 = x6251;
    int* x6253 = &x6252;
    char* x6254 = strntoi_unchecked(x28159, x6253);
    x28159 = x6254;
    /* VAR */ int x6256 = 0;
    int x6257 = x6256;
    int* x6258 = &x6257;
    char* x6259 = strntoi_unchecked(x28159, x6258);
    x28159 = x6259;
    /* VAR */ int x6265 = 0;
    int x6266 = x6265;
    int* x6267 = &x6266;
    char* x6268 = strntoi_unchecked(x28159, x6267);
    x28159 = x6268;
    /* VAR */ int x6270 = 0;
    int x6271 = x6270;
    int* x6272 = &x6271;
    char* x6273 = strntoi_unchecked(x28159, x6272);
    x28159 = x6273;
    /* VAR */ int x6275 = 0;
    int x6276 = x6275;
    int* x6277 = &x6276;
    char* x6278 = strntoi_unchecked(x28159, x6277);
    x28159 = x6278;
    /* VAR */ int x6284 = 0;
    int x6285 = x6284;
    int* x6286 = &x6285;
    char* x6287 = strntoi_unchecked(x28159, x6286);
    x28159 = x6287;
    /* VAR */ int x6289 = 0;
    int x6290 = x6289;
    int* x6291 = &x6290;
    char* x6292 = strntoi_unchecked(x28159, x6291);
    x28159 = x6292;
    /* VAR */ int x6294 = 0;
    int x6295 = x6294;
    int* x6296 = &x6295;
    char* x6297 = strntoi_unchecked(x28159, x6296);
    x28159 = x6297;
    char* x7497 = (char*)malloc(26 * sizeof(char));
    memset(x7497, 0, 26 * sizeof(char));
    /* VAR */ char* x6304 = x28159;
    while(1) {
      
      char x6305 = *x28159;
      /* VAR */ int ite21288 = 0;
      if((x6305!=('|'))) {
        char x28286 = *x28159;
        ite21288 = (x28286!=('\n'));
      } else {
        
        ite21288 = 0;
      };
      int x19514 = ite21288;
      if (!(x19514)) break; 
      
      x28159 += 1;
    };
    char* x6312 = x6304;
    int x6313 = x28159 - x6312;
    char* x6314 = x6304;
    char* x6315 = strncpy(x7497, x6314, x6313);
    x28159 += 1;
    char* x7515 = (char*)malloc(11 * sizeof(char));
    memset(x7515, 0, 11 * sizeof(char));
    /* VAR */ char* x6323 = x28159;
    while(1) {
      
      char x6324 = *x28159;
      /* VAR */ int ite21311 = 0;
      if((x6324!=('|'))) {
        char x28308 = *x28159;
        ite21311 = (x28308!=('\n'));
      } else {
        
        ite21311 = 0;
      };
      int x19530 = ite21311;
      if (!(x19530)) break; 
      
      x28159 += 1;
    };
    char* x6331 = x6323;
    int x6332 = x28159 - x6331;
    char* x6333 = x6323;
    char* x6334 = strncpy(x7515, x6333, x6332);
    x28159 += 1;
    char* x7533 = (char*)malloc(45 * sizeof(char));
    memset(x7533, 0, 45 * sizeof(char));
    /* VAR */ char* x6342 = x28159;
    while(1) {
      
      char x6343 = *x28159;
      /* VAR */ int ite21334 = 0;
      if((x6343!=('|'))) {
        char x28330 = *x28159;
        ite21334 = (x28330!=('\n'));
      } else {
        
        ite21334 = 0;
      };
      int x19546 = ite21334;
      if (!(x19546)) break; 
      
      x28159 += 1;
    };
    char* x6350 = x6342;
    int x6351 = x28159 - x6350;
    char* x6352 = x6342;
    char* x6353 = strncpy(x7533, x6352, x6351);
    x28159 += 1;
    void* x9383 = &(x7515);
    GArray* x9384 = g_array_append_vals(x9195, x9383, 1);
    int x3476 = x3428;
    if((x3476>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "L_SHIPMODE", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "L_SHIPMODE");
    };
    /* VAR */ int x9390 = -1;
    int x9391 = x9193->len;
    int x16755 = 0;
    for(; x16755 < x9391 ; x16755 += 1) {
      
      char* x16756 = g_array_index(x9193, char*, x16755);
      int x16757 = strcmp(x16756, x7515);
      int x16758 = !(x16757);
      if(x16758) {
        x9390 = x16755;
        break;
      };
    };
    int x9401 = x9390;
    int x3482 = !((x9401!=(-1)));
    if(x3482) {
      int x3483 = x3428;
      x3428 = (x3483+(1));
      void* x9408 = &(x7515);
      GArray* x9409 = g_array_append_vals(x9193, x9408, 1);
    };
    /* VAR */ int x9410 = -1;
    int x9411 = x9193->len;
    int x16782 = 0;
    for(; x16782 < x9411 ; x16782 += 1) {
      
      char* x16783 = g_array_index(x9193, char*, x16782);
      int x16784 = strcmp(x16783, x7515);
      int x16785 = !(x16784);
      if(x16785) {
        x9410 = x16782;
        break;
      };
    };
    int x9421 = x9410;
    struct LINEITEMRecord* x8171 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x8171, 0, 1 * sizeof(struct LINEITEMRecord));
    x8171->L_ORDERKEY = x6197; x8171->L_SHIPDATE = (((x6247*(10000))+((x6252*(100))))+(x6257)); x8171->L_COMMITDATE = (((x6266*(10000))+((x6271*(100))))+(x6276)); x8171->L_RECEIPTDATE = (((x6285*(10000))+((x6290*(100))))+(x6295)); x8171->L_SHIPMODE = x9421;
    int x47 = x28160;
    struct LINEITEMRecord x7567 = *x8171;
    *(x28148 + x47) = x7567;
    struct LINEITEMRecord* x7569 = &(x28148[x47]);
    x8171 = x7569;
    int x49 = x28160;
    x28160 = (x49+(1));
  };
  FILE* x28407 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x28408 = 0;
  int x28409 = x28408;
  int* x28410 = &x28409;
  int x28411 = fscanf(x28407, "%d", x28410);
  pclose(x28407);
  struct ORDERSRecord* x28413 = (struct ORDERSRecord*)malloc(x28409 * sizeof(struct ORDERSRecord));
  memset(x28413, 0, x28409 * sizeof(struct ORDERSRecord));
  int x28414 = O_RDONLY;
  int x28415 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x28414);
  /* VAR */ struct stat x28416 = x28151;
  struct stat x28417 = x28416;
  struct stat* x28418 = &x28417;
  int x28419 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x28418);
  int x28421 = PROT_READ;
  int x28422 = MAP_PRIVATE;
  char* x28423 = mmap(NULL, (x28418->st_size), x28421, x28422, x28415, 0);
  /* VAR */ int x28424 = 0;
  while(1) {
    
    int x57 = x28424;
    /* VAR */ int ite21435 = 0;
    if((x57<(x28409))) {
      char x28430 = *x28423;
      ite21435 = (x28430!=('\0'));
    } else {
      
      ite21435 = 0;
    };
    int x19640 = ite21435;
    if (!(x19640)) break; 
    
    /* VAR */ int x6404 = 0;
    int x6405 = x6404;
    int* x6406 = &x6405;
    char* x6407 = strntoi_unchecked(x28423, x6406);
    x28423 = x6407;
    /* VAR */ int x6409 = 0;
    int x6410 = x6409;
    int* x6411 = &x6410;
    char* x6412 = strntoi_unchecked(x28423, x6411);
    x28423 = x6412;
    char x6414 = *x28423;
    /* VAR */ char x6415 = x6414;
    x28423 += 1;
    x28423 += 1;
    /* VAR */ double x6419 = 0.0;
    double x6420 = x6419;
    double* x6421 = &x6420;
    char* x6422 = strntod_unchecked(x28423, x6421);
    x28423 = x6422;
    /* VAR */ int x6424 = 0;
    int x6425 = x6424;
    int* x6426 = &x6425;
    char* x6427 = strntoi_unchecked(x28423, x6426);
    x28423 = x6427;
    /* VAR */ int x6429 = 0;
    int x6430 = x6429;
    int* x6431 = &x6430;
    char* x6432 = strntoi_unchecked(x28423, x6431);
    x28423 = x6432;
    /* VAR */ int x6434 = 0;
    int x6435 = x6434;
    int* x6436 = &x6435;
    char* x6437 = strntoi_unchecked(x28423, x6436);
    x28423 = x6437;
    char* x7637 = (char*)malloc(16 * sizeof(char));
    memset(x7637, 0, 16 * sizeof(char));
    /* VAR */ char* x6444 = x28423;
    while(1) {
      
      char x6445 = *x28423;
      /* VAR */ int ite21488 = 0;
      if((x6445!=('|'))) {
        char x28482 = *x28423;
        ite21488 = (x28482!=('\n'));
      } else {
        
        ite21488 = 0;
      };
      int x19686 = ite21488;
      if (!(x19686)) break; 
      
      x28423 += 1;
    };
    char* x6452 = x6444;
    int x6453 = x28423 - x6452;
    char* x6454 = x6444;
    char* x6455 = strncpy(x7637, x6454, x6453);
    x28423 += 1;
    char* x7655 = (char*)malloc(16 * sizeof(char));
    memset(x7655, 0, 16 * sizeof(char));
    /* VAR */ char* x6463 = x28423;
    while(1) {
      
      char x6464 = *x28423;
      /* VAR */ int ite21511 = 0;
      if((x6464!=('|'))) {
        char x28504 = *x28423;
        ite21511 = (x28504!=('\n'));
      } else {
        
        ite21511 = 0;
      };
      int x19702 = ite21511;
      if (!(x19702)) break; 
      
      x28423 += 1;
    };
    char* x6471 = x6463;
    int x6472 = x28423 - x6471;
    char* x6473 = x6463;
    char* x6474 = strncpy(x7655, x6473, x6472);
    x28423 += 1;
    /* VAR */ int x6481 = 0;
    int x6482 = x6481;
    int* x6483 = &x6482;
    char* x6484 = strntoi_unchecked(x28423, x6483);
    x28423 = x6484;
    char* x7678 = (char*)malloc(80 * sizeof(char));
    memset(x7678, 0, 80 * sizeof(char));
    /* VAR */ char* x6487 = x28423;
    while(1) {
      
      char x6488 = *x28423;
      /* VAR */ int ite21539 = 0;
      if((x6488!=('|'))) {
        char x28531 = *x28423;
        ite21539 = (x28531!=('\n'));
      } else {
        
        ite21539 = 0;
      };
      int x19723 = ite21539;
      if (!(x19723)) break; 
      
      x28423 += 1;
    };
    char* x6495 = x6487;
    int x6496 = x28423 - x6495;
    char* x6497 = x6487;
    char* x6498 = strncpy(x7678, x6497, x6496);
    x28423 += 1;
    struct ORDERSRecord* x8304 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x8304, 0, 1 * sizeof(struct ORDERSRecord));
    x8304->O_ORDERKEY = x6405; x8304->O_ORDERPRIORITY = x7637;
    int x91 = x28424;
    struct ORDERSRecord x7698 = *x8304;
    *(x28413 + x91) = x7698;
    struct ORDERSRecord* x7700 = &(x28413[x91]);
    x8304 = x7700;
    int x93 = x28424;
    x28424 = (x93+(1));
  };
  int x98 = 0;
  for(; x98 < 1 ; x98 += 1) {
    
    GHashTable* x29482 = g_hash_table_new(x29476, x29478);
    struct ORDERSRecord* x29483 = (struct ORDERSRecord*)malloc(60000000 * sizeof(struct ORDERSRecord));
    memset(x29483, 0, 60000000 * sizeof(struct ORDERSRecord));
    int x16951 = 0;
    for(; x16951 < x28409 ; x16951 += 1) {
      
      struct ORDERSRecord* x16952 = &(x28413[x16951]);
      int x16954 = (x16952->O_ORDERKEY)%(60000000);
      struct ORDERSRecord x16955 = *x16952;
      *(x29483 + x16954) = x16955;
      struct ORDERSRecord* x16957 = &(x29483[x16954]);
      x16952 = x16957;
    };
    g_array_sort(x9193, x29506);
    /* VAR */ int x29514 = 0;
    int x17003 = 0;
    for(; x17003 < x28144 ; x17003 += 1) {
      
      struct LINEITEMRecord* x17004 = &(x28148[x17003]);
      int x17005 = x29514;
      char* x17006 = g_array_index(x9195, char*, x17005);
      /* VAR */ int x17007 = -1;
      int x17008 = x9193->len;
      int x16990 = 0;
      for(; x16990 < x17008 ; x16990 += 1) {
        
        char* x16991 = g_array_index(x9193, char*, x16990);
        int x16992 = strcmp(x16991, x17006);
        int x16993 = !(x16992);
        if(x16993) {
          x17007 = x16990;
          break;
        };
      };
      int x17024 = x17007;
      x17004->L_SHIPMODE = x17024;
      int x17026 = x29514;
      x29514 = (x17026+(1));
    };
    /* VAR */ int x29568 = 0;
    int x17059 = 0;
    for(; x17059 < x28144 ; x17059 += 1) {
      
      struct LINEITEMRecord* x17060 = &(x28148[x17059]);
      int x17061 = x29568;
      char* x17062 = g_array_index(x9195, char*, x17061);
      /* VAR */ int x17063 = -1;
      int x17064 = x9193->len;
      int x17046 = 0;
      for(; x17046 < x17064 ; x17046 += 1) {
        
        char* x17047 = g_array_index(x9193, char*, x17046);
        int x17048 = strcmp(x17047, x17062);
        int x17049 = !(x17048);
        if(x17049) {
          x17063 = x17046;
          break;
        };
      };
      int x17080 = x17063;
      x17060->L_SHIPMODE = x17080;
      int x17082 = x29568;
      x29568 = (x17082+(1));
    };
    /* VAR */ int x29622 = 0;
    int x17092 = 0;
    for(; x17092 < x28409 ; x17092 += 1) {
      
      int x17093 = x29622;
      x29622 = (x17093+(1));
    };
    /* VAR */ int x29632 = 0;
    int x17103 = 0;
    for(; x17103 < x28409 ; x17103 += 1) {
      
      int x17104 = x29632;
      x29632 = (x17104+(1));
    };
    struct LINEITEMRecord** x29642 = (struct LINEITEMRecord**)malloc(96 * sizeof(struct LINEITEMRecord*));
    memset(x29642, 0, 96 * sizeof(struct LINEITEMRecord*));
    int* x29643 = (int*)malloc(96 * sizeof(int));
    memset(x29643, 0, 96 * sizeof(int));
    int x17116 = 0;
    for(; x17116 < 96 ; x17116 += 1) {
      
      struct LINEITEMRecord* x17119 = (struct LINEITEMRecord*)malloc(((x28144/(96))*(4)) * sizeof(struct LINEITEMRecord));
      memset(x17119, 0, ((x28144/(96))*(4)) * sizeof(struct LINEITEMRecord));
      *(x29642 + x17116) = x17119;
    };
    /* VAR */ int x29655 = 0;
    int x17145 = 0;
    for(; x17145 < x28144 ; x17145 += 1) {
      
      struct LINEITEMRecord* x17146 = &(x28148[x17145]);
      int x17148 = (x17146->L_RECEIPTDATE)/(100);
      int x17154 = (((x17148/(100))-(1992))*(12))+(((x17148%(100))-(1)));
      int x17155 = x29643[x17154];
      struct LINEITEMRecord* x17156 = x29642[x17154];
      struct LINEITEMRecord x17157 = *x17146;
      *(x17156 + x17155) = x17157;
      struct LINEITEMRecord* x17159 = &(x17156[x17155]);
      x17146 = x17159;
      *(x29643 + x17154) = (x17155+(1));
      int x17163 = x29655;
      x29655 = (x17163+(1));
    };
    /* VAR */ int x29699 = 0;
    double** x29700 = (double**)malloc(7 * sizeof(double*));
    memset(x29700, 0, 7 * sizeof(double*));
    /* VAR */ int x29701 = 0;
    while(1) {
      
      int x5539 = x29701;
      if (!((x5539<(7)))) break; 
      
      int x5541 = x29701;
      double* x7812 = (double*)malloc(2 * sizeof(double));
      memset(x7812, 0, 2 * sizeof(double));
      *(x29700 + x5541) = x7812;
      int x5544 = x29701;
      x29701 = (x5544+(1));
    };
    /* VAR */ int x29711 = 0;
    struct AGGRecord_OptimalString* x29712 = (struct AGGRecord_OptimalString*)malloc(7 * sizeof(struct AGGRecord_OptimalString));
    memset(x29712, 0, 7 * sizeof(struct AGGRecord_OptimalString));
    /* VAR */ int x29713 = 0;
    while(1) {
      
      int x5551 = x29713;
      if (!((x5551<(7)))) break; 
      
      int x5553 = x29713;
      double* x5554 = x29700[x5553];
      struct AGGRecord_OptimalString* x8435 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x8435, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      x8435->key = 0; x8435->aggs = x5554;
      struct AGGRecord_OptimalString x7826 = *x8435;
      *(x29712 + x5553) = x7826;
      struct AGGRecord_OptimalString* x7828 = &(x29712[x5553]);
      x8435 = x7828;
      int x5557 = x29713;
      x29713 = (x5557+(1));
    };
    /* VAR */ struct timeval x29729 = x5686;
    struct timeval x29730 = x29729;
    /* VAR */ struct timeval x29731 = x5686;
    struct timeval x29732 = x29731;
    /* VAR */ struct timeval x29733 = x5686;
    struct timeval x29734 = x29733;
    struct timeval* x29735 = &x29732;
    gettimeofday(x29735, NULL);
    /* VAR */ int x29737 = -1;
    int x29738 = x9193->len;
    int x17215 = 0;
    for(; x17215 < x29738 ; x17215 += 1) {
      
      char* x17216 = g_array_index(x9193, char*, x17215);
      int x17217 = strcmp(x17216, "MAIL");
      int x17218 = !(x17217);
      if(x17218) {
        x29737 = x17215;
        break;
      };
    };
    int x29754 = x29737;
    /* VAR */ int x29755 = -1;
    int x29756 = x9193->len;
    int x17234 = 0;
    for(; x17234 < x29756 ; x17234 += 1) {
      
      char* x17235 = g_array_index(x9193, char*, x17234);
      int x17236 = strcmp(x17235, "SHIP");
      int x17237 = !(x17236);
      if(x17237) {
        x29755 = x17234;
        break;
      };
    };
    int x29772 = x29755;
    /* VAR */ int x29773 = 0;
    int* x29790 = &(x29782);
    GTree* x29791 = g_tree_new(x29790);
    /* VAR */ int x29792 = 0;
    /* VAR */ int x29793 = 0;
    int x17412 = 24;
    for(; x17412 < 37 ; x17412 += 1) {
      
      int x17413 = x29643[x17412];
      struct LINEITEMRecord* x17414 = x29642[x17412];
      int x17340 = 0;
      for(; x17340 < x17413 ; x17340 += 1) {
        
        struct LINEITEMRecord* x17341 = &(x17414[x17340]);
        int x17342 = x17341->L_RECEIPTDATE;
        /* VAR */ int ite23240 = 0;
        if((x17342<(19950101))) {
          ite23240 = ((x17341->L_COMMITDATE)<(19950101));
        } else {
          
          ite23240 = 0;
        };
        int x21004 = ite23240;
        /* VAR */ int ite23249 = 0;
        if(x21004) {
          ite23249 = ((x17341->L_SHIPDATE)<(19950101));
        } else {
          
          ite23249 = 0;
        };
        int x21006 = ite23249;
        /* VAR */ int ite23258 = 0;
        if(x21006) {
          ite23258 = ((x17341->L_SHIPDATE)<((x17341->L_COMMITDATE)));
        } else {
          
          ite23258 = 0;
        };
        int x21008 = ite23258;
        /* VAR */ int ite23268 = 0;
        if(x21008) {
          ite23268 = ((x17341->L_COMMITDATE)<(x17342));
        } else {
          
          ite23268 = 0;
        };
        int x21010 = ite23268;
        /* VAR */ int ite23277 = 0;
        if(x21010) {
          ite23277 = (x17342>=(19940101));
        } else {
          
          ite23277 = 0;
        };
        int x21012 = ite23277;
        /* VAR */ int ite23285 = 0;
        if(x21012) {
          int x30239 = x17341->L_SHIPMODE;
          /* VAR */ int x30241 = 0;
          if((x30239==(x29754))) {
            x30241 = 1;
          } else {
            
            x30241 = (x30239==(x29772));
          };
          int x30247 = x30241;
          ite23285 = x30247;
        } else {
          
          ite23285 = 0;
        };
        int x21014 = ite23285;
        if(x21014) {
          int x231 = x17341->L_ORDERKEY;
          struct ORDERSRecord* x30254 = &(x29483[x231]);
          if(((x30254->O_ORDERKEY)==(x231))) {
            if(((x30254->O_ORDERKEY)==(x231))) {
              char* x718 = x30254->O_ORDERPRIORITY;
              int x3660 = x17341->L_SHIPMODE;
              void* x10578 = g_hash_table_lookup(x29482, x3660);
              /* VAR */ struct AGGRecord_OptimalString* ite21030 = 0;
              if((x10578==(NULL))) {
                int x21031 = x29699;
                double* x21032 = x29700[x21031];
                int x21033 = x29699;
                x29699 = (x21033+(1));
                int x21036 = x29711;
                struct AGGRecord_OptimalString* x21037 = &(x29712[x21036]);
                x21037->key = x3660;
                x21037->aggs = x21032;
                int x21040 = x29711;
                x29711 = (x21040+(1));
                g_hash_table_insert(x29482, x3660, x21037);
                ite21030 = x21037;
              } else {
                
                ite21030 = x10578;
              };
              struct AGGRecord_OptimalString* x9859 = ite21030;
              double* x300 = x9859->aggs;
              double x314 = x300[0];
              int x15733 = strcmp(x718, "1-URGENT");
              /* VAR */ int ite23333 = 0;
              if((x15733==(0))) {
                ite23333 = 1;
              } else {
                
                int x30291 = strcmp(x718, "2-HIGH");
                ite23333 = (x30291==(0));
              };
              int x21053 = ite23333;
              /* VAR */ double ite21055 = 0;
              if(x21053) {
                ite21055 = (x314+(1.0));
              } else {
                
                ite21055 = x314;
              };
              double x321 = ite21055;
              *x300 = x321;
              double x329 = x300[1];
              int x15742 = strcmp(x718, "1-URGENT");
              /* VAR */ int ite23353 = 0;
              if((x15742!=(0))) {
                int x30309 = strcmp(x718, "2-HIGH");
                ite23353 = (x30309!=(0));
              } else {
                
                ite23353 = 0;
              };
              int x21066 = ite23353;
              /* VAR */ double ite21068 = 0;
              if(x21066) {
                ite21068 = (x329+(1.0));
              } else {
                
                ite21068 = x329;
              };
              double x335 = ite21068;
              *(x300 + 1) = x335;
            };
          };
        };
      };
    };
    GList* x30327 = g_hash_table_get_keys(x29482);
    /* VAR */ GList* x30328 = x30327;
    int x30329 = g_hash_table_size(x29482);
    int x17576 = 0;
    for(; x17576 < x30329 ; x17576 += 1) {
      
      GList* x17577 = x30328;
      void* x17578 = g_list_nth_data(x17577, 0);
      GList* x17579 = g_list_next(x17577);
      x30328 = x17579;
      void* x17581 = g_hash_table_lookup(x29482, x17578);
      struct AGGRecord_OptimalString* x17583 = (struct AGGRecord_OptimalString*){x17581};
      g_tree_insert(x29791, x17583, x17583);
    };
    while(1) {
      
      int x1613 = x29792;
      int x359 = !(x1613);
      /* VAR */ int ite23399 = 0;
      if(x359) {
        int x30354 = g_tree_nnodes(x29791);
        ite23399 = (x30354!=(0));
      } else {
        
        ite23399 = 0;
      };
      int x21105 = ite23399;
      if (!(x21105)) break; 
      
      void* x9904 = NULL;
      void** x9912 = &(x9904);
      g_tree_foreach(x29791, x9911, x9912);
      struct AGGRecord_OptimalString* x9914 = (struct AGGRecord_OptimalString*){x9904};
      int x9915 = g_tree_remove(x29791, x9914);
      if(0) {
        x29792 = 1;
      } else {
        
        char* x9922 = g_array_index(x9193, char*, (x9914->key));
        double* x374 = x9914->aggs;
        double x375 = x374[0];
        double x376 = x374[1];
        printf("%s|%.0f|%.0f\n", x9922, x375, x376);
        int x1632 = x29793;
        x29793 = (x1632+(1));
      };
    };
    int x30383 = x29793;
    printf("(%d rows)\n", x30383);
    struct timeval* x30385 = &x29734;
    gettimeofday(x30385, NULL);
    struct timeval* x30387 = &x29730;
    struct timeval* x30388 = &x29734;
    struct timeval* x30389 = &x29732;
    long x30390 = timeval_subtract(x30387, x30388, x30389);
    printf("Generated code run in %ld milliseconds.\n", x30390);
  };
}
/* ----------- FUNCTIONS ----------- */
int x29476(int x9569) {
  return x9569; 
}

int x29478(int x9574, int x9575) {
  return (x9574==(x9575)); 
}

int x29506(char** x9600, char** x9601) {
  char* x9602 = *x9601;
  char* x9603 = *x9600;
  int x15482 = strcmp(x9602, x9603);
  return (x15482<(0)); 
}

int x29782(struct AGGRecord_OptimalString* x170, struct AGGRecord_OptimalString* x171) {
  char* x9775 = g_array_index(x9193, char*, (x170->key));
  char* x9776 = g_array_index(x9193, char*, (x171->key));
  int x15666 = strcmp(x9775, x9776);
  return x15666; 
}

int x9911(void* x9905, void* x9906, void* x9907) {
  pointer_assign(((struct AGGRecord_OptimalString**){x9907}), ((struct AGGRecord_OptimalString*){x9906}));
  return 1; 
}
