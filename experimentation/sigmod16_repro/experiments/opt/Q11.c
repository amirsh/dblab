#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord;
  struct AGGRecord_String;
  struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord;
  struct WindowRecord_Int_Double;
  struct NATIONRecord;
  struct SUPPLIERRecord;
  struct PARTSUPPRecord;
  
  struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int S_SUPPKEY;
  int S_NATIONKEY;
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  };
  
  struct AGGRecord_String {
  char* key;
  double* aggs;
  };
  
  struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord {
  int maxSize;
  struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* array;
  };
  
  struct WindowRecord_Int_Double {
  int key;
  double wnd;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  int S_NATIONKEY;
  };
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  };
  
  


int x31625(struct WindowRecord_Int_Double* x355, struct WindowRecord_Int_Double* x356);

int x15694(void* x15688, void* x15689, void* x15690);
/* GLOBAL VARS */

struct timeval x11651;
int main(int argc, char** argv) {
  FILE* x12233 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x12234 = 0;
  int x12235 = x12234;
  int* x12236 = &x12235;
  int x12237 = fscanf(x12233, "%d", x12236);
  pclose(x12233);
  struct PARTSUPPRecord* x13351 = (struct PARTSUPPRecord*)malloc(x12235 * sizeof(struct PARTSUPPRecord));
  memset(x13351, 0, x12235 * sizeof(struct PARTSUPPRecord));
  int x12241 = O_RDONLY;
  int x12242 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x12241);
  struct stat x12243 = (struct stat){0};
  /* VAR */ struct stat x12244 = x12243;
  struct stat x12245 = x12244;
  struct stat* x12246 = &x12245;
  int x12247 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x12246);
  int x12249 = PROT_READ;
  int x12250 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x12246->st_size), x12249, x12250, x12242, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite24517 = 0;
    if((x5<(x12235))) {
      char x30286 = *x3;
      ite24517 = (x30286!=('\0'));
    } else {
      
      ite24517 = 0;
    };
    int x23327 = ite24517;
    if (!(x23327)) break; 
    
    /* VAR */ int x12258 = 0;
    int x12259 = x12258;
    int* x12260 = &x12259;
    char* x12261 = strntoi_unchecked(x3, x12260);
    x3 = x12261;
    /* VAR */ int x12263 = 0;
    int x12264 = x12263;
    int* x12265 = &x12264;
    char* x12266 = strntoi_unchecked(x3, x12265);
    x3 = x12266;
    /* VAR */ int x12268 = 0;
    int x12269 = x12268;
    int* x12270 = &x12269;
    char* x12271 = strntoi_unchecked(x3, x12270);
    x3 = x12271;
    /* VAR */ double x12273 = 0.0;
    double x12274 = x12273;
    double* x12275 = &x12274;
    char* x12276 = strntod_unchecked(x3, x12275);
    x3 = x12276;
    char* x13390 = (char*)malloc(200 * sizeof(char));
    memset(x13390, 0, 200 * sizeof(char));
    /* VAR */ char* x12279 = x3;
    while(1) {
      
      char x12280 = *x3;
      /* VAR */ int ite24551 = 0;
      if((x12280!=('|'))) {
        char x30319 = *x3;
        ite24551 = (x30319!=('\n'));
      } else {
        
        ite24551 = 0;
      };
      int x23354 = ite24551;
      if (!(x23354)) break; 
      
      x3 += 1;
    };
    char* x12287 = x12279;
    int x12288 = x3 - x12287;
    char* x12289 = x12279;
    char* x12290 = strncpy(x13390, x12289, x12288);
    x3 += 1;
    struct PARTSUPPRecord* x13987 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x13987, 0, 1 * sizeof(struct PARTSUPPRecord));
    x13987->PS_PARTKEY = x12259; x13987->PS_SUPPKEY = x12264; x13987->PS_AVAILQTY = x12269; x13987->PS_SUPPLYCOST = x12274;
    int x22 = x4;
    struct PARTSUPPRecord x13410 = *x13987;
    *(x13351 + x22) = x13410;
    struct PARTSUPPRecord* x13412 = &(x13351[x22]);
    x13987 = x13412;
    int x24 = x4;
    x4 = (x24+(1));
  };
  FILE* x12303 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x12304 = 0;
  int x12305 = x12304;
  int* x12306 = &x12305;
  int x12307 = fscanf(x12303, "%d", x12306);
  pclose(x12303);
  struct SUPPLIERRecord* x13423 = (struct SUPPLIERRecord*)malloc(x12305 * sizeof(struct SUPPLIERRecord));
  memset(x13423, 0, x12305 * sizeof(struct SUPPLIERRecord));
  int x12311 = O_RDONLY;
  int x12312 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x12311);
  /* VAR */ struct stat x12313 = x12243;
  struct stat x12314 = x12313;
  struct stat* x12315 = &x12314;
  int x12316 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x12315);
  int x12318 = PROT_READ;
  int x12319 = MAP_PRIVATE;
  char* x30 = mmap(NULL, (x12315->st_size), x12318, x12319, x12312, 0);
  /* VAR */ int x31 = 0;
  while(1) {
    
    int x32 = x31;
    /* VAR */ int ite24601 = 0;
    if((x32<(x12305))) {
      char x30368 = *x30;
      ite24601 = (x30368!=('\0'));
    } else {
      
      ite24601 = 0;
    };
    int x23397 = ite24601;
    if (!(x23397)) break; 
    
    /* VAR */ int x12327 = 0;
    int x12328 = x12327;
    int* x12329 = &x12328;
    char* x12330 = strntoi_unchecked(x30, x12329);
    x30 = x12330;
    char* x13446 = (char*)malloc(26 * sizeof(char));
    memset(x13446, 0, 26 * sizeof(char));
    /* VAR */ char* x12333 = x30;
    while(1) {
      
      char x12334 = *x30;
      /* VAR */ int ite24620 = 0;
      if((x12334!=('|'))) {
        char x30386 = *x30;
        ite24620 = (x30386!=('\n'));
      } else {
        
        ite24620 = 0;
      };
      int x23409 = ite24620;
      if (!(x23409)) break; 
      
      x30 += 1;
    };
    char* x12341 = x12333;
    int x12342 = x30 - x12341;
    char* x12343 = x12333;
    char* x12344 = strncpy(x13446, x12343, x12342);
    x30 += 1;
    char* x13464 = (char*)malloc(41 * sizeof(char));
    memset(x13464, 0, 41 * sizeof(char));
    /* VAR */ char* x12352 = x30;
    while(1) {
      
      char x12353 = *x30;
      /* VAR */ int ite24643 = 0;
      if((x12353!=('|'))) {
        char x30408 = *x30;
        ite24643 = (x30408!=('\n'));
      } else {
        
        ite24643 = 0;
      };
      int x23425 = ite24643;
      if (!(x23425)) break; 
      
      x30 += 1;
    };
    char* x12360 = x12352;
    int x12361 = x30 - x12360;
    char* x12362 = x12352;
    char* x12363 = strncpy(x13464, x12362, x12361);
    x30 += 1;
    /* VAR */ int x12370 = 0;
    int x12371 = x12370;
    int* x12372 = &x12371;
    char* x12373 = strntoi_unchecked(x30, x12372);
    x30 = x12373;
    char* x13487 = (char*)malloc(16 * sizeof(char));
    memset(x13487, 0, 16 * sizeof(char));
    /* VAR */ char* x12376 = x30;
    while(1) {
      
      char x12377 = *x30;
      /* VAR */ int ite24671 = 0;
      if((x12377!=('|'))) {
        char x30435 = *x30;
        ite24671 = (x30435!=('\n'));
      } else {
        
        ite24671 = 0;
      };
      int x23446 = ite24671;
      if (!(x23446)) break; 
      
      x30 += 1;
    };
    char* x12384 = x12376;
    int x12385 = x30 - x12384;
    char* x12386 = x12376;
    char* x12387 = strncpy(x13487, x12386, x12385);
    x30 += 1;
    /* VAR */ double x12394 = 0.0;
    double x12395 = x12394;
    double* x12396 = &x12395;
    char* x12397 = strntod_unchecked(x30, x12396);
    x30 = x12397;
    char* x13510 = (char*)malloc(102 * sizeof(char));
    memset(x13510, 0, 102 * sizeof(char));
    /* VAR */ char* x12400 = x30;
    while(1) {
      
      char x12401 = *x30;
      /* VAR */ int ite24699 = 0;
      if((x12401!=('|'))) {
        char x30462 = *x30;
        ite24699 = (x30462!=('\n'));
      } else {
        
        ite24699 = 0;
      };
      int x23467 = ite24699;
      if (!(x23467)) break; 
      
      x30 += 1;
    };
    char* x12408 = x12400;
    int x12409 = x30 - x12408;
    char* x12410 = x12400;
    char* x12411 = strncpy(x13510, x12410, x12409);
    x30 += 1;
    struct SUPPLIERRecord* x14109 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x14109, 0, 1 * sizeof(struct SUPPLIERRecord));
    x14109->S_SUPPKEY = x12328; x14109->S_NATIONKEY = x12371;
    int x72 = x31;
    struct SUPPLIERRecord x13530 = *x14109;
    *(x13423 + x72) = x13530;
    struct SUPPLIERRecord* x13532 = &(x13423[x72]);
    x14109 = x13532;
    int x74 = x31;
    x31 = (x74+(1));
  };
  FILE* x12424 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x12425 = 0;
  int x12426 = x12425;
  int* x12427 = &x12426;
  int x12428 = fscanf(x12424, "%d", x12427);
  pclose(x12424);
  struct NATIONRecord* x13543 = (struct NATIONRecord*)malloc(x12426 * sizeof(struct NATIONRecord));
  memset(x13543, 0, x12426 * sizeof(struct NATIONRecord));
  int x12432 = O_RDONLY;
  int x12433 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x12432);
  /* VAR */ struct stat x12434 = x12243;
  struct stat x12435 = x12434;
  struct stat* x12436 = &x12435;
  int x12437 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x12436);
  int x12439 = PROT_READ;
  int x12440 = MAP_PRIVATE;
  char* x80 = mmap(NULL, (x12436->st_size), x12439, x12440, x12433, 0);
  /* VAR */ int x81 = 0;
  while(1) {
    
    int x82 = x81;
    /* VAR */ int ite24749 = 0;
    if((x82<(x12426))) {
      char x30511 = *x80;
      ite24749 = (x30511!=('\0'));
    } else {
      
      ite24749 = 0;
    };
    int x23510 = ite24749;
    if (!(x23510)) break; 
    
    /* VAR */ int x12448 = 0;
    int x12449 = x12448;
    int* x12450 = &x12449;
    char* x12451 = strntoi_unchecked(x80, x12450);
    x80 = x12451;
    char* x13566 = (char*)malloc(26 * sizeof(char));
    memset(x13566, 0, 26 * sizeof(char));
    /* VAR */ char* x12454 = x80;
    while(1) {
      
      char x12455 = *x80;
      /* VAR */ int ite24768 = 0;
      if((x12455!=('|'))) {
        char x30529 = *x80;
        ite24768 = (x30529!=('\n'));
      } else {
        
        ite24768 = 0;
      };
      int x23522 = ite24768;
      if (!(x23522)) break; 
      
      x80 += 1;
    };
    char* x12462 = x12454;
    int x12463 = x80 - x12462;
    char* x12464 = x12454;
    char* x12465 = strncpy(x13566, x12464, x12463);
    x80 += 1;
    /* VAR */ int x12472 = 0;
    int x12473 = x12472;
    int* x12474 = &x12473;
    char* x12475 = strntoi_unchecked(x80, x12474);
    x80 = x12475;
    char* x13589 = (char*)malloc(153 * sizeof(char));
    memset(x13589, 0, 153 * sizeof(char));
    /* VAR */ char* x12478 = x80;
    while(1) {
      
      char x12479 = *x80;
      /* VAR */ int ite24796 = 0;
      if((x12479!=('|'))) {
        char x30556 = *x80;
        ite24796 = (x30556!=('\n'));
      } else {
        
        ite24796 = 0;
      };
      int x23543 = ite24796;
      if (!(x23543)) break; 
      
      x80 += 1;
    };
    char* x12486 = x12478;
    int x12487 = x80 - x12486;
    char* x12488 = x12478;
    char* x12489 = strncpy(x13589, x12488, x12487);
    x80 += 1;
    struct NATIONRecord* x14190 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x14190, 0, 1 * sizeof(struct NATIONRecord));
    x14190->N_NATIONKEY = x12449; x14190->N_NAME = x13566;
    int x105 = x81;
    struct NATIONRecord x13609 = *x14190;
    *(x13543 + x105) = x13609;
    struct NATIONRecord* x13611 = &(x13543[x105]);
    x14190 = x13611;
    int x107 = x81;
    x81 = (x107+(1));
  };
  int x112 = 0;
  for(; x112 < 1 ; x112 += 1) {
    
    double* x31145 = (double*)malloc(1 * sizeof(double));
    memset(x31145, 0, 1 * sizeof(double));
    struct AGGRecord_String* x31146 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x31146, 0, 1 * sizeof(struct AGGRecord_String));
    x31146->key = "Total"; x31146->aggs = x31145;
    struct WindowRecord_Int_Double* x31149 = (struct WindowRecord_Int_Double*)malloc(48000000 * sizeof(struct WindowRecord_Int_Double));
    memset(x31149, 0, 48000000 * sizeof(struct WindowRecord_Int_Double));
    struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x31150 = (struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1048576 * sizeof(struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x31150, 0, 1048576 * sizeof(struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    struct PARTSUPPRecord** x31151 = (struct PARTSUPPRecord**)malloc(80000 * sizeof(struct PARTSUPPRecord*));
    memset(x31151, 0, 80000 * sizeof(struct PARTSUPPRecord*));
    int* x31152 = (int*)malloc(80000 * sizeof(int));
    memset(x31152, 0, 80000 * sizeof(int));
    int x21581 = 0;
    for(; x21581 < 80000 ; x21581 += 1) {
      
      struct PARTSUPPRecord* x21582 = (struct PARTSUPPRecord*)malloc(1024 * sizeof(struct PARTSUPPRecord));
      memset(x21582, 0, 1024 * sizeof(struct PARTSUPPRecord));
      *(x31151 + x21581) = x21582;
    };
    /* VAR */ int x31160 = 0;
    int x21602 = 0;
    for(; x21602 < x12235 ; x21602 += 1) {
      
      struct PARTSUPPRecord* x21603 = &(x13351[x21602]);
      int x21605 = (x21603->PS_SUPPKEY)%(80000);
      int x21606 = x31152[x21605];
      struct PARTSUPPRecord* x21607 = x31151[x21605];
      struct PARTSUPPRecord x21608 = *x21603;
      *(x21607 + x21606) = x21608;
      struct PARTSUPPRecord* x21610 = &(x21607[x21606]);
      x21603 = x21610;
      *(x31152 + x21605) = (x21606+(1));
      int x21614 = x31160;
      x31160 = (x21614+(1));
    };
    /* VAR */ int x31192 = 0;
    struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x31193 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(6400000 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x31193, 0, 6400000 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    /* VAR */ int x31194 = 0;
    while(1) {
      
      int x11412 = x31194;
      if (!((x11412<(6400000)))) break; 
      
      int x11414 = x31194;
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x14244 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x14244, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      x14244->N_NATIONKEY = 0; x14244->N_NAME = ""; x14244->S_SUPPKEY = 0; x14244->S_NATIONKEY = 0; x14244->PS_PARTKEY = 0; x14244->PS_SUPPKEY = 0; x14244->PS_AVAILQTY = 0; x14244->PS_SUPPLYCOST = 0.0;
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x13658 = *x14244;
      *(x31193 + x11414) = x13658;
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x13660 = &(x31193[x11414]);
      x14244 = x13660;
      int x11417 = x31194;
      x31194 = (x11417+(1));
    };
    /* VAR */ int x31209 = 0;
    struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord** x31210 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord**)malloc(6400000 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*));
    memset(x31210, 0, 6400000 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*));
    /* VAR */ int x31211 = 0;
    while(1) {
      
      int x11424 = x31211;
      if (!((x11424<(6400000)))) break; 
      
      int x11426 = x31211;
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x13672 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(256 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x13672, 0, 256 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      *(x31210 + x11426) = x13672;
      int x11429 = x31211;
      x31211 = (x11429+(1));
    };
    /* VAR */ int x31221 = 0;
    struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x31222 = (struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(6400000 * sizeof(struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x31222, 0, 6400000 * sizeof(struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    /* VAR */ int x31223 = 0;
    while(1) {
      
      int x11436 = x31223;
      if (!((x11436<(6400000)))) break; 
      
      int x11438 = x31223;
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x11439 = x31210[x11438];
      struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x14274 = (struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x14274, 0, 1 * sizeof(struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      x14274->maxSize = 0; x14274->array = x11439;
      struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x13686 = *x14274;
      *(x31222 + x11438) = x13686;
      struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x13688 = &(x31222[x11438]);
      x14274 = x13688;
      int x11442 = x31223;
      x31223 = (x11442+(1));
    };
    /* VAR */ int x31239 = 0;
    struct WindowRecord_Int_Double* x31240 = (struct WindowRecord_Int_Double*)malloc(1600000 * sizeof(struct WindowRecord_Int_Double));
    memset(x31240, 0, 1600000 * sizeof(struct WindowRecord_Int_Double));
    /* VAR */ int x31241 = 0;
    while(1) {
      
      int x11449 = x31241;
      if (!((x11449<(1600000)))) break; 
      
      int x11451 = x31241;
      struct WindowRecord_Int_Double* x14291 = (struct WindowRecord_Int_Double*)malloc(1 * sizeof(struct WindowRecord_Int_Double));
      memset(x14291, 0, 1 * sizeof(struct WindowRecord_Int_Double));
      x14291->key = 0; x14291->wnd = 0.0;
      struct WindowRecord_Int_Double x13701 = *x14291;
      *(x31240 + x11451) = x13701;
      struct WindowRecord_Int_Double* x13703 = &(x31240[x11451]);
      x14291 = x13703;
      int x11454 = x31241;
      x31241 = (x11454+(1));
    };
    /* VAR */ struct timeval x31256 = x11651;
    struct timeval x31257 = x31256;
    /* VAR */ struct timeval x31258 = x11651;
    struct timeval x31259 = x31258;
    /* VAR */ struct timeval x31260 = x11651;
    struct timeval x31261 = x31260;
    struct timeval* x31262 = &x31259;
    gettimeofday(x31262, NULL);
    /* VAR */ int x31264 = 0;
    /* VAR */ int x31265 = 0;
    /* VAR */ struct AGGRecord_String* x31266 = NULL;
    while(1) {
      
      int x31268 = x31264;
      if (!((x31268<(x12305)))) break; 
      
      int x2667 = x31264;
      struct SUPPLIERRecord* x199 = &(x13423[x2667]);
      int x201 = x199->S_NATIONKEY;
      struct NATIONRecord* x10221 = &(x13543[(x201-(0))]);
      int x20443 = strcmp((x10221->N_NAME), "UNITED KINGDOM");
      if((x20443==(0))) {
        if(((x10221->N_NATIONKEY)==(x201))) {
          int x5047 = x10221->N_NATIONKEY;
          if((x5047==(x201))) {
            int x992 = x199->S_SUPPKEY;
            int x5054 = x992%(80000);
            int x5055 = x31152[x5054];
            struct PARTSUPPRecord* x5056 = x31151[x5054];
            int x21783 = 0;
            for(; x21783 < x5055 ; x21783 += 1) {
              
              struct PARTSUPPRecord* x21784 = &(x5056[x21783]);
              int x21785 = x21784->PS_SUPPKEY;
              if((x992==(x21785))) {
                int x11495 = x31192;
                struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x11496 = &(x31193[x11495]);
                x11496->N_NATIONKEY = x5047;
                x11496->N_NAME = (x10221->N_NAME);
                x11496->S_SUPPKEY = x992;
                x11496->S_NATIONKEY = x201;
                x11496->PS_PARTKEY = (x21784->PS_PARTKEY);
                x11496->PS_SUPPKEY = x21785;
                x11496->PS_AVAILQTY = (x21784->PS_AVAILQTY);
                x11496->PS_SUPPLYCOST = (x21784->PS_SUPPLYCOST);
                int x11505 = x31192;
                x31192 = (x11505+(1));
                int x6204 = (x11496->PS_PARTKEY)%(1048576);
                struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x7441 = &(x31150[x6204]);
                /* VAR */ struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* list7442 = x7441;
                struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x7443 = list7442;
                /* VAR */ int ite25584 = 0;
                if((x7443==(NULL))) {
                  ite25584 = 1;
                } else {
                  
                  struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x31401 = x7443->array;
                  /* VAR */ int x31403 = 0;
                  if((x31401==(NULL))) {
                    x31403 = 1;
                  } else {
                    
                    char* x31406 = x31401->N_NAME;
                    /* VAR */ int x31408 = 0;
                    if((x31406==(NULL))) {
                      x31408 = 1;
                    } else {
                      
                      int x31411 = strcmp(x31406, "");
                      int x31412 = !(x31411);
                      x31408 = x31412;
                    };
                    int x31415 = x31408;
                    x31403 = x31415;
                  };
                  int x31418 = x31403;
                  ite25584 = x31418;
                };
                int x24262 = ite25584;
                if(x24262) {
                  int x11516 = x31209;
                  struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x11517 = x31210[x11516];
                  int x11518 = x31209;
                  x31209 = (x11518+(1));
                  int x11521 = x31221;
                  struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x11522 = &(x31222[x11521]);
                  x11522->maxSize = 0;
                  x11522->array = x11517;
                  int x11525 = x31221;
                  x31221 = (x11525+(1));
                  list7442 = x11522;
                  struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x7451 = list7442;
                  struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x13787 = *x7451;
                  *(x31150 + x6204) = x13787;
                  struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x13789 = &(x31150[x6204]);
                  list7442 = x13789;
                };
                struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x7453 = list7442;
                struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x7454 = x7453->array;
                int x7455 = x7453->maxSize;
                struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x13794 = *x11496;
                *(x7454 + x7455) = x13794;
                struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x13796 = &(x7454[x7455]);
                x11496 = x13796;
                int x7457 = x7453->maxSize;
                x7453->maxSize = (x7457+(1));
              };
            };
          };
        };
      };
      int x2699 = x31264;
      x31264 = (x2699+(1));
    };
    int x21908 = 0;
    for(; x21908 < 1048576 ; x21908 += 1) {
      
      struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x21909 = &(x31150[x21908]);
      /* VAR */ int ite25686 = 0;
      if((x21909!=(NULL))) {
        struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x31527 = x21909->array;
        /* VAR */ int x31529 = 0;
        if((x31527!=(NULL))) {
          char* x31531 = x31527->N_NAME;
          /* VAR */ int x31533 = 0;
          if((x31531!=(NULL))) {
            int x31535 = strcmp(x31531, "");
            x31533 = x31535;
          } else {
            
            x31533 = 0;
          };
          int x31539 = x31533;
          x31529 = x31539;
        } else {
          
          x31529 = 0;
        };
        int x31543 = x31529;
        ite25686 = x31543;
      } else {
        
        ite25686 = 0;
      };
      int x24346 = ite25686;
      if(x24346) {
        /* VAR */ double acc7480 = 0.0;
        int x7803 = x21909->maxSize;
        int x21878 = 0;
        for(; x21878 < x7803 ; x21878 += 1) {
          
          struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x21880 = &(((struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*) { x21909->array })[x21878]);
          double x21881 = acc7480;
          acc7480 = (x21881+(((x21880->PS_SUPPLYCOST)*((x21880->PS_AVAILQTY)))));
        };
        double x7491 = acc7480;
        int x11567 = x31239;
        struct WindowRecord_Int_Double* x11568 = &(x31240[x11567]);
        x11568->key = (((struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*) { (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord**){((struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*) { x21909->array })} })->PS_PARTKEY);
        x11568->wnd = x7491;
        int x11571 = x31239;
        x31239 = (x11571+(1));
        int x6259 = x31265;
        struct WindowRecord_Int_Double x13838 = *x11568;
        *(x31149 + x6259) = x13838;
        struct WindowRecord_Int_Double* x13840 = &(x31149[x6259]);
        x11568 = x13840;
        int x6261 = x31265;
        x31265 = (x6261+(1));
      };
    };
    /* VAR */ int x31589 = 0;
    while(1) {
      
      int x31591 = x31589;
      int x31592 = x31265;
      if (!((x31591<(x31592)))) break; 
      
      int x306 = x31589;
      struct WindowRecord_Int_Double* x307 = &(x31149[x306]);
      int x308 = x31589;
      x31589 = (x308+(1));
      double* x316 = x31146->aggs;
      double x330 = x316[0];
      *x316 = (x330+((x307->wnd)));
    };
    x31266 = x31146;
    struct AGGRecord_String* x31605 = x31266;
    int* x31644 = &(x31625);
    GTree* x31645 = g_tree_new(x31644);
    /* VAR */ int x31646 = 0;
    /* VAR */ int x31647 = 0;
    /* VAR */ int x31648 = 0;
    while(1) {
      
      int x31650 = x31648;
      int x31651 = x31265;
      if (!((x31650<(x31651)))) break; 
      
      int x681 = x31648;
      struct WindowRecord_Int_Double* x682 = &(x31149[x681]);
      int x683 = x31648;
      x31648 = (x683+(1));
      double x690 = ((double*) { x31605->aggs })[0];
      if(((x682->wnd)>((x690*(1.0E-4))))) {
        g_tree_insert(x31645, x682, x682);
      };
    };
    while(1) {
      
      int x3220 = x31646;
      int x698 = !(x3220);
      /* VAR */ int ite25819 = 0;
      if(x698) {
        int x31670 = g_tree_nnodes(x31645);
        ite25819 = (x31670!=(0));
      } else {
        
        ite25819 = 0;
      };
      int x24464 = ite25819;
      if (!(x24464)) break; 
      
      void* x15687 = NULL;
      void** x15695 = &(x15687);
      g_tree_foreach(x31645, x15694, x15695);
      struct WindowRecord_Int_Double* x15697 = (struct WindowRecord_Int_Double*){x15687};
      int x15698 = g_tree_remove(x31645, x15697);
      if(0) {
        x31646 = 1;
      } else {
        
        printf("%d|%.2f\n", (x15697->key), (x15697->wnd));
        int x3236 = x31647;
        x31647 = (x3236+(1));
      };
    };
    int x31696 = x31647;
    printf("(%d rows)\n", x31696);
    struct timeval* x31698 = &x31261;
    gettimeofday(x31698, NULL);
    struct timeval* x31700 = &x31257;
    struct timeval* x31701 = &x31261;
    struct timeval* x31702 = &x31259;
    long x31703 = timeval_subtract(x31700, x31701, x31702);
    printf("Generated code run in %ld milliseconds.\n", x31703);
  };
}
/* ----------- FUNCTIONS ----------- */
int x31625(struct WindowRecord_Int_Double* x355, struct WindowRecord_Int_Double* x356) {
  double x357 = x355->wnd;
  double x358 = x356->wnd;
  /* VAR */ int ite24429 = 0;
  if((x357>(x358))) {
    ite24429 = -1;
  } else {
    
    /* VAR */ int ite24433 = 0;
    if((x357<(x358))) {
      ite24433 = 1;
    } else {
      
      ite24433 = 0;
    };
    int x24432 = ite24433;
    ite24429 = x24432;
  };
  int x362 = ite24429;
  return x362; 
}

int x15694(void* x15688, void* x15689, void* x15690) {
  pointer_assign(((struct WindowRecord_Int_Double**){x15690}), ((struct WindowRecord_Int_Double*){x15689}));
  return 1; 
}
