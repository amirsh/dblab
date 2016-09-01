#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct LINEITEMRecord;
struct AGGRecord_OptimalString;
struct REGIONRecord;
struct NATIONRecord;
struct ORDERSRecord;
struct SUPPLIERRecord;
struct CUSTOMERRecord;
struct LINEITEMRecord {
  numeric_int_t L_ORDERKEY;
  numeric_int_t L_SUPPKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
};

struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
  struct AGGRecord_OptimalString* next;
};

struct REGIONRecord {
  numeric_int_t R_REGIONKEY;
  char* R_NAME;
};

struct NATIONRecord {
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
  numeric_int_t N_REGIONKEY;
};

struct ORDERSRecord {
  numeric_int_t O_ORDERKEY;
  numeric_int_t O_CUSTKEY;
  numeric_int_t O_ORDERDATE;
};

struct SUPPLIERRecord {
  numeric_int_t S_SUPPKEY;
  numeric_int_t S_NATIONKEY;
};

struct CUSTOMERRecord {
  numeric_int_t C_CUSTKEY;
  numeric_int_t C_NATIONKEY;
};


numeric_int_t x222072(struct AGGRecord_OptimalString* x162612, struct AGGRecord_OptimalString* x162613);

numeric_int_t x186145(void* x186139, void* x186140, void* x186141);

int main(int argc, char** argv) {
  /* VAR */ long mallocSym_182438_228262 = 0L;
  /* VAR */ long mallocSym_182410_228263 = 0L;
  /* VAR */ long mallocSym_181856_228264 = 0L;
  /* VAR */ long mallocSym_182502_228265 = 0L;
  /* VAR */ long mallocSym_221831_228266 = 0L;
  /* VAR */ long mallocSym_181691_228267 = 0L;
  /* VAR */ long mallocSym_182290_228268 = 0L;
  /* VAR */ long mallocSym_182437_228269 = 0L;
  /* VAR */ long mallocSym_196474_228270 = 0L;
  /* VAR */ long mallocSym_221830_228271 = 0L;
  /* VAR */ long mallocSym_182015_228272 = 0L;
  /* VAR */ long mallocSym_181612_228273 = 0L;
  /* VAR */ long mallocSym_221750_228274 = 0L;
  /* VAR */ long mallocSym_183447_228275 = 0L;
  /* VAR */ long mallocSym_182385_228276 = 0L;
  /* VAR */ long mallocSym_221910_228277 = 0L;
  /* VAR */ long mallocSym_221744_228278 = 0L;
  /* VAR */ long mallocSym_182991_228279 = 0L;
  /* VAR */ long mallocSym_181879_228280 = 0L;
  /* VAR */ long mallocSym_182799_228281 = 0L;
  /* VAR */ long mallocSym_182874_228282 = 0L;
  /* VAR */ long mallocSym_181668_228283 = 0L;
  /* VAR */ long mallocSym_221991_228284 = 0L;
  /* VAR */ long mallocSym_221751_228285 = 0L;
  /* VAR */ long mallocSym_181798_228286 = 0L;
  /* VAR */ long mallocSym_182333_228287 = 0L;
  /* VAR */ long mallocSym_182358_228288 = 0L;
  /* VAR */ long mallocSym_183184_228289 = 0L;
  /* VAR */ long mallocSym_182334_228290 = 0L;
  /* VAR */ long mallocSym_181647_228291 = 0L;
  /* VAR */ long mallocSym_182327_228292 = 0L;
  /* VAR */ long mallocSym_182047_228293 = 0L;
  /* VAR */ long mallocSym_182386_228294 = 0L;
  /* VAR */ long mallocSym_182462_228295 = 0L;
  /* VAR */ long mallocSym_181725_228296 = 0L;
  /* VAR */ long mallocSym_181835_228297 = 0L;
  /* VAR */ long mallocSym_182248_228298 = 0L;
  /* VAR */ long mallocSym_183314_228299 = 0L;
  /* VAR */ long mallocSym_181814_228300 = 0L;
  /* VAR */ long mallocSym_182269_228301 = 0L;
  /* VAR */ long mallocSym_221911_228302 = 0L;
  /* VAR */ long mallocSym_182198_228303 = 0L;
  /* VAR */ long mallocSym_222003_228304 = 0L;
  /* VAR */ long mallocSym_182138_228305 = 0L;
  /* VAR */ long mallocSym_182154_228306 = 0L;
  /* VAR */ long mallocSym_183647_228307 = 0L;
  /* VAR */ long mallocSym_182232_228308 = 0L;
  /* VAR */ long mallocSym_196558_228309 = 0L;
  /* VAR */ long mallocSym_182490_228310 = 0L;
  /* VAR */ long mallocSym_181741_228311 = 0L;
  /* VAR */ long mallocSym_182306_228312 = 0L;
  /* VAR */ long mallocSym_182175_228313 = 0L;
  /* VAR */ long mallocSym_182070_228314 = 0L;
  /* VAR */ long mallocSym_181764_228315 = 0L;
  /* VAR */ long mallocSym_182031_228316 = 0L;
  /* VAR */ long mallocSym_182496_228317 = 0L;
  /* VAR */ long mallocSym_196642_228318 = 0L;
  FILE* x179486 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ numeric_int_t x179487 = 0;
  numeric_int_t x179488 = x179487;
  numeric_int_t* x179489 = &x179488;
  numeric_int_t x179490 = fscanf(x179486, "%d", x179489);
  pclose(x179486);
  struct NATIONRecord* x228325 = (struct NATIONRecord*)malloc(x179488 * sizeof(struct NATIONRecord));
  memset(x228325, 0, x179488 * sizeof(struct NATIONRecord));
  long x228326 = mallocSym_181612_228273;
  mallocSym_181612_228273 = (x228326+(((long){x179488})));
  numeric_int_t x179494 = O_RDONLY;
  numeric_int_t x179495 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x179494);
  struct stat x179496 = (struct stat){0};
  /* VAR */ struct stat x179497 = x179496;
  struct stat x179498 = x179497;
  struct stat* x179499 = &x179498;
  numeric_int_t x179500 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x179499);
  numeric_int_t x179502 = PROT_READ;
  numeric_int_t x179503 = MAP_PRIVATE;
  char* x162372 = mmap(NULL, (x179499->st_size), x179502, x179503, x179495, 0);
  /* VAR */ numeric_int_t x162373 = 0;
  while(1) {
    
    numeric_int_t x162374 = x162373;
    /* VAR */ boolean_t ite204931 = 0;
    if((x162374<(x179488))) {
      char x219014 = *x162372;
      ite204931 = (x219014!=('\0'));
    } else {
      
      ite204931 = 0;
    };
    boolean_t x201454 = ite204931;
    if (!(x201454)) break; 
    
    /* VAR */ numeric_int_t x179511 = 0;
    numeric_int_t x179512 = x179511;
    numeric_int_t* x179513 = &x179512;
    char* x179514 = strntoi_unchecked(x162372, x179513);
    x162372 = x179514;
    /* VAR */ char* x179516 = x162372;
    while(1) {
      
      char x179517 = *x162372;
      /* VAR */ boolean_t ite204949 = 0;
      if((x179517!=('|'))) {
        char x219031 = *x162372;
        ite204949 = (x219031!=('\n'));
      } else {
        
        ite204949 = 0;
      };
      boolean_t x201465 = ite204949;
      if (!(x201465)) break; 
      
      x162372 += 1;
    };
    char* x179524 = x179516;
    numeric_int_t x179525 = x162372 - x179524;
    numeric_int_t x179526 = x179525+(1);
    char* x228374 = (char*)malloc(x179526 * sizeof(char));
    memset(x228374, 0, x179526 * sizeof(char));
    long x228375 = mallocSym_181647_228291;
    mallocSym_181647_228291 = (x228375+(((long){x179526})));
    char* x179529 = x179516;
    char* x179530 = strncpy(x228374, x179529, x179525);
    x162372 += 1;
    /* VAR */ numeric_int_t x179532 = 0;
    numeric_int_t x179533 = x179532;
    numeric_int_t* x179534 = &x179533;
    char* x179535 = strntoi_unchecked(x162372, x179534);
    x162372 = x179535;
    /* VAR */ char* x179537 = x162372;
    while(1) {
      
      char x179538 = *x162372;
      /* VAR */ boolean_t ite204975 = 0;
      if((x179538!=('|'))) {
        char x219056 = *x162372;
        ite204975 = (x219056!=('\n'));
      } else {
        
        ite204975 = 0;
      };
      boolean_t x201484 = ite204975;
      if (!(x201484)) break; 
      
      x162372 += 1;
    };
    char* x179545 = x179537;
    numeric_int_t x179546 = x162372 - x179545;
    numeric_int_t x179547 = x179546+(1);
    char* x228403 = (char*)malloc(x179547 * sizeof(char));
    memset(x228403, 0, x179547 * sizeof(char));
    long x228404 = mallocSym_181668_228283;
    mallocSym_181668_228283 = (x228404+(((long){x179547})));
    char* x179550 = x179537;
    char* x179551 = strncpy(x228403, x179550, x179546);
    x162372 += 1;
    struct NATIONRecord* x228411 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x228411, 0, 1 * sizeof(struct NATIONRecord));
    long x228412 = mallocSym_182799_228281;
    mallocSym_182799_228281 = (x228412+(((long){1})));
    x228411->N_NATIONKEY = x179512; x228411->N_NAME = x228374; x228411->N_REGIONKEY = x179533;
    numeric_int_t x162383 = x162373;
    /* VAR */ boolean_t ite204997 = 0;
    if((x228411==(NULL))) {
      ite204997 = 1;
    } else {
      
      char* x219078 = x228411->N_NAME;
      /* VAR */ boolean_t x219080 = 0;
      if((x219078==(NULL))) {
        x219080 = 1;
      } else {
        
        boolean_t x219083 = strcmp(x219078, "");
        boolean_t x219084 = !(x219083);
        x219080 = x219084;
      };
      boolean_t x219087 = x219080;
      ite204997 = x219087;
    };
    boolean_t x201499 = ite204997;
    if(x201499) {
      *(x228325 + x162383) = (const struct NATIONRecord){0};
    } else {
      
      struct NATIONRecord x181677 = *x228411;
      *(x228325 + x162383) = x181677;
      struct NATIONRecord* x181679 = &(x228325[x162383]);
      x228411 = x181679;
    };
    numeric_int_t x162385 = x162373;
    x162373 = (x162385+(1));
  };
  FILE* x179559 = popen("wc -l /mnt/ramdisk/tpch/sf8/region.tbl", "r");
  /* VAR */ numeric_int_t x179560 = 0;
  numeric_int_t x179561 = x179560;
  numeric_int_t* x179562 = &x179561;
  numeric_int_t x179563 = fscanf(x179559, "%d", x179562);
  pclose(x179559);
  struct REGIONRecord* x228451 = (struct REGIONRecord*)malloc(x179561 * sizeof(struct REGIONRecord));
  memset(x228451, 0, x179561 * sizeof(struct REGIONRecord));
  long x228452 = mallocSym_181691_228267;
  mallocSym_181691_228267 = (x228452+(((long){x179561})));
  numeric_int_t x179567 = O_RDONLY;
  numeric_int_t x179568 = open("/mnt/ramdisk/tpch/sf8/region.tbl", x179567);
  /* VAR */ struct stat x179569 = x179496;
  struct stat x179570 = x179569;
  struct stat* x179571 = &x179570;
  numeric_int_t x179572 = stat("/mnt/ramdisk/tpch/sf8/region.tbl", x179571);
  numeric_int_t x179574 = PROT_READ;
  numeric_int_t x179575 = MAP_PRIVATE;
  char* x162391 = mmap(NULL, (x179571->st_size), x179574, x179575, x179568, 0);
  /* VAR */ numeric_int_t x162392 = 0;
  while(1) {
    
    numeric_int_t x162393 = x162392;
    /* VAR */ boolean_t ite205038 = 0;
    if((x162393<(x179561))) {
      char x219123 = *x162391;
      ite205038 = (x219123!=('\0'));
    } else {
      
      ite205038 = 0;
    };
    boolean_t x201531 = ite205038;
    if (!(x201531)) break; 
    
    /* VAR */ numeric_int_t x179583 = 0;
    numeric_int_t x179584 = x179583;
    numeric_int_t* x179585 = &x179584;
    char* x179586 = strntoi_unchecked(x162391, x179585);
    x162391 = x179586;
    /* VAR */ char* x179588 = x162391;
    while(1) {
      
      char x179589 = *x162391;
      /* VAR */ boolean_t ite205056 = 0;
      if((x179589!=('|'))) {
        char x219140 = *x162391;
        ite205056 = (x219140!=('\n'));
      } else {
        
        ite205056 = 0;
      };
      boolean_t x201542 = ite205056;
      if (!(x201542)) break; 
      
      x162391 += 1;
    };
    char* x179596 = x179588;
    numeric_int_t x179597 = x162391 - x179596;
    numeric_int_t x179598 = x179597+(1);
    char* x228499 = (char*)malloc(x179598 * sizeof(char));
    memset(x228499, 0, x179598 * sizeof(char));
    long x228500 = mallocSym_181725_228296;
    mallocSym_181725_228296 = (x228500+(((long){x179598})));
    char* x179601 = x179588;
    char* x179602 = strncpy(x228499, x179601, x179597);
    x162391 += 1;
    /* VAR */ char* x179604 = x162391;
    while(1) {
      
      char x179605 = *x162391;
      /* VAR */ boolean_t ite205077 = 0;
      if((x179605!=('|'))) {
        char x219160 = *x162391;
        ite205077 = (x219160!=('\n'));
      } else {
        
        ite205077 = 0;
      };
      boolean_t x201556 = ite205077;
      if (!(x201556)) break; 
      
      x162391 += 1;
    };
    char* x179612 = x179604;
    numeric_int_t x179613 = x162391 - x179612;
    numeric_int_t x179614 = x179613+(1);
    char* x228523 = (char*)malloc(x179614 * sizeof(char));
    memset(x228523, 0, x179614 * sizeof(char));
    long x228524 = mallocSym_181741_228311;
    mallocSym_181741_228311 = (x228524+(((long){x179614})));
    char* x179617 = x179604;
    char* x179618 = strncpy(x228523, x179617, x179613);
    x162391 += 1;
    struct REGIONRecord* x228531 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x228531, 0, 1 * sizeof(struct REGIONRecord));
    long x228532 = mallocSym_182874_228282;
    mallocSym_182874_228282 = (x228532+(((long){1})));
    x228531->R_REGIONKEY = x179584; x228531->R_NAME = x228499;
    numeric_int_t x162401 = x162392;
    /* VAR */ boolean_t ite205099 = 0;
    if((x228531==(NULL))) {
      ite205099 = 1;
    } else {
      
      char* x219182 = x228531->R_NAME;
      /* VAR */ boolean_t x219184 = 0;
      if((x219182==(NULL))) {
        x219184 = 1;
      } else {
        
        boolean_t x219187 = strcmp(x219182, "");
        boolean_t x219188 = !(x219187);
        x219184 = x219188;
      };
      boolean_t x219191 = x219184;
      ite205099 = x219191;
    };
    boolean_t x201571 = ite205099;
    if(x201571) {
      *(x228451 + x162401) = (const struct REGIONRecord){0};
    } else {
      
      struct REGIONRecord x181750 = *x228531;
      *(x228451 + x162401) = x181750;
      struct REGIONRecord* x181752 = &(x228451[x162401]);
      x228531 = x181752;
    };
    numeric_int_t x162403 = x162392;
    x162392 = (x162403+(1));
  };
  FILE* x179626 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ numeric_int_t x179627 = 0;
  numeric_int_t x179628 = x179627;
  numeric_int_t* x179629 = &x179628;
  numeric_int_t x179630 = fscanf(x179626, "%d", x179629);
  pclose(x179626);
  struct SUPPLIERRecord* x228571 = (struct SUPPLIERRecord*)malloc(x179628 * sizeof(struct SUPPLIERRecord));
  memset(x228571, 0, x179628 * sizeof(struct SUPPLIERRecord));
  long x228572 = mallocSym_181764_228315;
  mallocSym_181764_228315 = (x228572+(((long){x179628})));
  numeric_int_t x179634 = O_RDONLY;
  numeric_int_t x179635 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x179634);
  /* VAR */ struct stat x179636 = x179496;
  struct stat x179637 = x179636;
  struct stat* x179638 = &x179637;
  numeric_int_t x179639 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x179638);
  numeric_int_t x179641 = PROT_READ;
  numeric_int_t x179642 = MAP_PRIVATE;
  char* x162409 = mmap(NULL, (x179638->st_size), x179641, x179642, x179635, 0);
  /* VAR */ numeric_int_t x162410 = 0;
  while(1) {
    
    numeric_int_t x162411 = x162410;
    /* VAR */ boolean_t ite205140 = 0;
    if((x162411<(x179628))) {
      char x219227 = *x162409;
      ite205140 = (x219227!=('\0'));
    } else {
      
      ite205140 = 0;
    };
    boolean_t x201603 = ite205140;
    if (!(x201603)) break; 
    
    /* VAR */ numeric_int_t x179650 = 0;
    numeric_int_t x179651 = x179650;
    numeric_int_t* x179652 = &x179651;
    char* x179653 = strntoi_unchecked(x162409, x179652);
    x162409 = x179653;
    /* VAR */ char* x179655 = x162409;
    while(1) {
      
      char x179656 = *x162409;
      /* VAR */ boolean_t ite205158 = 0;
      if((x179656!=('|'))) {
        char x219244 = *x162409;
        ite205158 = (x219244!=('\n'));
      } else {
        
        ite205158 = 0;
      };
      boolean_t x201614 = ite205158;
      if (!(x201614)) break; 
      
      x162409 += 1;
    };
    char* x179663 = x179655;
    numeric_int_t x179664 = x162409 - x179663;
    numeric_int_t x179665 = x179664+(1);
    char* x228619 = (char*)malloc(x179665 * sizeof(char));
    memset(x228619, 0, x179665 * sizeof(char));
    long x228620 = mallocSym_181798_228286;
    mallocSym_181798_228286 = (x228620+(((long){x179665})));
    char* x179668 = x179655;
    char* x179669 = strncpy(x228619, x179668, x179664);
    x162409 += 1;
    /* VAR */ char* x179671 = x162409;
    while(1) {
      
      char x179672 = *x162409;
      /* VAR */ boolean_t ite205179 = 0;
      if((x179672!=('|'))) {
        char x219264 = *x162409;
        ite205179 = (x219264!=('\n'));
      } else {
        
        ite205179 = 0;
      };
      boolean_t x201628 = ite205179;
      if (!(x201628)) break; 
      
      x162409 += 1;
    };
    char* x179679 = x179671;
    numeric_int_t x179680 = x162409 - x179679;
    numeric_int_t x179681 = x179680+(1);
    char* x228643 = (char*)malloc(x179681 * sizeof(char));
    memset(x228643, 0, x179681 * sizeof(char));
    long x228644 = mallocSym_181814_228300;
    mallocSym_181814_228300 = (x228644+(((long){x179681})));
    char* x179684 = x179671;
    char* x179685 = strncpy(x228643, x179684, x179680);
    x162409 += 1;
    /* VAR */ numeric_int_t x179687 = 0;
    numeric_int_t x179688 = x179687;
    numeric_int_t* x179689 = &x179688;
    char* x179690 = strntoi_unchecked(x162409, x179689);
    x162409 = x179690;
    /* VAR */ char* x179692 = x162409;
    while(1) {
      
      char x179693 = *x162409;
      /* VAR */ boolean_t ite205205 = 0;
      if((x179693!=('|'))) {
        char x219289 = *x162409;
        ite205205 = (x219289!=('\n'));
      } else {
        
        ite205205 = 0;
      };
      boolean_t x201647 = ite205205;
      if (!(x201647)) break; 
      
      x162409 += 1;
    };
    char* x179700 = x179692;
    numeric_int_t x179701 = x162409 - x179700;
    numeric_int_t x179702 = x179701+(1);
    char* x228672 = (char*)malloc(x179702 * sizeof(char));
    memset(x228672, 0, x179702 * sizeof(char));
    long x228673 = mallocSym_181835_228297;
    mallocSym_181835_228297 = (x228673+(((long){x179702})));
    char* x179705 = x179692;
    char* x179706 = strncpy(x228672, x179705, x179701);
    x162409 += 1;
    /* VAR */ double x179708 = 0.0;
    double x179709 = x179708;
    double* x179710 = &x179709;
    char* x179711 = strntod_unchecked(x162409, x179710);
    x162409 = x179711;
    /* VAR */ char* x179713 = x162409;
    while(1) {
      
      char x179714 = *x162409;
      /* VAR */ boolean_t ite205231 = 0;
      if((x179714!=('|'))) {
        char x219314 = *x162409;
        ite205231 = (x219314!=('\n'));
      } else {
        
        ite205231 = 0;
      };
      boolean_t x201666 = ite205231;
      if (!(x201666)) break; 
      
      x162409 += 1;
    };
    char* x179721 = x179713;
    numeric_int_t x179722 = x162409 - x179721;
    numeric_int_t x179723 = x179722+(1);
    char* x228701 = (char*)malloc(x179723 * sizeof(char));
    memset(x228701, 0, x179723 * sizeof(char));
    long x228702 = mallocSym_181856_228264;
    mallocSym_181856_228264 = (x228702+(((long){x179723})));
    char* x179726 = x179713;
    char* x179727 = strncpy(x228701, x179726, x179722);
    x162409 += 1;
    struct SUPPLIERRecord* x228709 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x228709, 0, 1 * sizeof(struct SUPPLIERRecord));
    long x228710 = mallocSym_182991_228279;
    mallocSym_182991_228279 = (x228710+(((long){1})));
    x228709->S_SUPPKEY = x179651; x228709->S_NATIONKEY = x179688;
    numeric_int_t x162423 = x162410;
    if((x228709==(NULL))) {
      *(x228571 + x162423) = (const struct SUPPLIERRecord){0};
    } else {
      
      struct SUPPLIERRecord x181865 = *x228709;
      *(x228571 + x162423) = x181865;
      struct SUPPLIERRecord* x181867 = &(x228571[x162423]);
      x228709 = x181867;
    };
    numeric_int_t x162425 = x162410;
    x162410 = (x162425+(1));
  };
  FILE* x179735 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x179736 = 0;
  numeric_int_t x179737 = x179736;
  numeric_int_t* x179738 = &x179737;
  numeric_int_t x179739 = fscanf(x179735, "%d", x179738);
  pclose(x179735);
  struct LINEITEMRecord* x228733 = (struct LINEITEMRecord*)malloc(x179737 * sizeof(struct LINEITEMRecord));
  memset(x228733, 0, x179737 * sizeof(struct LINEITEMRecord));
  long x228734 = mallocSym_181879_228280;
  mallocSym_181879_228280 = (x228734+(((long){x179737})));
  numeric_int_t x179743 = O_RDONLY;
  numeric_int_t x179744 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x179743);
  /* VAR */ struct stat x179745 = x179496;
  struct stat x179746 = x179745;
  struct stat* x179747 = &x179746;
  numeric_int_t x179748 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x179747);
  numeric_int_t x179750 = PROT_READ;
  numeric_int_t x179751 = MAP_PRIVATE;
  char* x162431 = mmap(NULL, (x179747->st_size), x179750, x179751, x179744, 0);
  /* VAR */ numeric_int_t x162432 = 0;
  while(1) {
    
    numeric_int_t x162433 = x162432;
    /* VAR */ boolean_t ite205283 = 0;
    if((x162433<(x179737))) {
      char x219365 = *x162431;
      ite205283 = (x219365!=('\0'));
    } else {
      
      ite205283 = 0;
    };
    boolean_t x201711 = ite205283;
    if (!(x201711)) break; 
    
    /* VAR */ numeric_int_t x179759 = 0;
    numeric_int_t x179760 = x179759;
    numeric_int_t* x179761 = &x179760;
    char* x179762 = strntoi_unchecked(x162431, x179761);
    x162431 = x179762;
    /* VAR */ numeric_int_t x179764 = 0;
    numeric_int_t x179765 = x179764;
    numeric_int_t* x179766 = &x179765;
    char* x179767 = strntoi_unchecked(x162431, x179766);
    x162431 = x179767;
    /* VAR */ numeric_int_t x179769 = 0;
    numeric_int_t x179770 = x179769;
    numeric_int_t* x179771 = &x179770;
    char* x179772 = strntoi_unchecked(x162431, x179771);
    x162431 = x179772;
    /* VAR */ numeric_int_t x179774 = 0;
    numeric_int_t x179775 = x179774;
    numeric_int_t* x179776 = &x179775;
    char* x179777 = strntoi_unchecked(x162431, x179776);
    x162431 = x179777;
    /* VAR */ double x179779 = 0.0;
    double x179780 = x179779;
    double* x179781 = &x179780;
    char* x179782 = strntod_unchecked(x162431, x179781);
    x162431 = x179782;
    /* VAR */ double x179784 = 0.0;
    double x179785 = x179784;
    double* x179786 = &x179785;
    char* x179787 = strntod_unchecked(x162431, x179786);
    x162431 = x179787;
    /* VAR */ double x179789 = 0.0;
    double x179790 = x179789;
    double* x179791 = &x179790;
    char* x179792 = strntod_unchecked(x162431, x179791);
    x162431 = x179792;
    /* VAR */ double x179794 = 0.0;
    double x179795 = x179794;
    double* x179796 = &x179795;
    char* x179797 = strntod_unchecked(x162431, x179796);
    x162431 = x179797;
    char x179799 = *x162431;
    /* VAR */ char x179800 = x179799;
    x162431 += 1;
    x162431 += 1;
    char x179804 = *x162431;
    /* VAR */ char x179805 = x179804;
    x162431 += 1;
    x162431 += 1;
    /* VAR */ numeric_int_t x179809 = 0;
    numeric_int_t x179810 = x179809;
    numeric_int_t* x179811 = &x179810;
    char* x179812 = strntoi_unchecked(x162431, x179811);
    x162431 = x179812;
    /* VAR */ numeric_int_t x179814 = 0;
    numeric_int_t x179815 = x179814;
    numeric_int_t* x179816 = &x179815;
    char* x179817 = strntoi_unchecked(x162431, x179816);
    x162431 = x179817;
    /* VAR */ numeric_int_t x179819 = 0;
    numeric_int_t x179820 = x179819;
    numeric_int_t* x179821 = &x179820;
    char* x179822 = strntoi_unchecked(x162431, x179821);
    x162431 = x179822;
    /* VAR */ numeric_int_t x179828 = 0;
    numeric_int_t x179829 = x179828;
    numeric_int_t* x179830 = &x179829;
    char* x179831 = strntoi_unchecked(x162431, x179830);
    x162431 = x179831;
    /* VAR */ numeric_int_t x179833 = 0;
    numeric_int_t x179834 = x179833;
    numeric_int_t* x179835 = &x179834;
    char* x179836 = strntoi_unchecked(x162431, x179835);
    x162431 = x179836;
    /* VAR */ numeric_int_t x179838 = 0;
    numeric_int_t x179839 = x179838;
    numeric_int_t* x179840 = &x179839;
    char* x179841 = strntoi_unchecked(x162431, x179840);
    x162431 = x179841;
    /* VAR */ numeric_int_t x179847 = 0;
    numeric_int_t x179848 = x179847;
    numeric_int_t* x179849 = &x179848;
    char* x179850 = strntoi_unchecked(x162431, x179849);
    x162431 = x179850;
    /* VAR */ numeric_int_t x179852 = 0;
    numeric_int_t x179853 = x179852;
    numeric_int_t* x179854 = &x179853;
    char* x179855 = strntoi_unchecked(x162431, x179854);
    x162431 = x179855;
    /* VAR */ numeric_int_t x179857 = 0;
    numeric_int_t x179858 = x179857;
    numeric_int_t* x179859 = &x179858;
    char* x179860 = strntoi_unchecked(x162431, x179859);
    x162431 = x179860;
    /* VAR */ char* x179866 = x162431;
    while(1) {
      
      char x179867 = *x162431;
      /* VAR */ boolean_t ite205403 = 0;
      if((x179867!=('|'))) {
        char x219484 = *x162431;
        ite205403 = (x219484!=('\n'));
      } else {
        
        ite205403 = 0;
      };
      boolean_t x201824 = ite205403;
      if (!(x201824)) break; 
      
      x162431 += 1;
    };
    char* x179874 = x179866;
    numeric_int_t x179875 = x162431 - x179874;
    numeric_int_t x179876 = x179875+(1);
    char* x228883 = (char*)malloc(x179876 * sizeof(char));
    memset(x228883, 0, x179876 * sizeof(char));
    long x228884 = mallocSym_182015_228272;
    mallocSym_182015_228272 = (x228884+(((long){x179876})));
    char* x179879 = x179866;
    char* x179880 = strncpy(x228883, x179879, x179875);
    x162431 += 1;
    /* VAR */ char* x179882 = x162431;
    while(1) {
      
      char x179883 = *x162431;
      /* VAR */ boolean_t ite205424 = 0;
      if((x179883!=('|'))) {
        char x219504 = *x162431;
        ite205424 = (x219504!=('\n'));
      } else {
        
        ite205424 = 0;
      };
      boolean_t x201838 = ite205424;
      if (!(x201838)) break; 
      
      x162431 += 1;
    };
    char* x179890 = x179882;
    numeric_int_t x179891 = x162431 - x179890;
    numeric_int_t x179892 = x179891+(1);
    char* x228907 = (char*)malloc(x179892 * sizeof(char));
    memset(x228907, 0, x179892 * sizeof(char));
    long x228908 = mallocSym_182031_228316;
    mallocSym_182031_228316 = (x228908+(((long){x179892})));
    char* x179895 = x179882;
    char* x179896 = strncpy(x228907, x179895, x179891);
    x162431 += 1;
    /* VAR */ char* x179898 = x162431;
    while(1) {
      
      char x179899 = *x162431;
      /* VAR */ boolean_t ite205445 = 0;
      if((x179899!=('|'))) {
        char x219524 = *x162431;
        ite205445 = (x219524!=('\n'));
      } else {
        
        ite205445 = 0;
      };
      boolean_t x201852 = ite205445;
      if (!(x201852)) break; 
      
      x162431 += 1;
    };
    char* x179906 = x179898;
    numeric_int_t x179907 = x162431 - x179906;
    numeric_int_t x179908 = x179907+(1);
    char* x228931 = (char*)malloc(x179908 * sizeof(char));
    memset(x228931, 0, x179908 * sizeof(char));
    long x228932 = mallocSym_182047_228293;
    mallocSym_182047_228293 = (x228932+(((long){x179908})));
    char* x179911 = x179898;
    char* x179912 = strncpy(x228931, x179911, x179907);
    x162431 += 1;
    struct LINEITEMRecord* x228939 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x228939, 0, 1 * sizeof(struct LINEITEMRecord));
    long x228940 = mallocSym_183184_228289;
    mallocSym_183184_228289 = (x228940+(((long){1})));
    x228939->L_ORDERKEY = x179760; x228939->L_SUPPKEY = x179770; x228939->L_EXTENDEDPRICE = x179785; x228939->L_DISCOUNT = x179790;
    numeric_int_t x162454 = x162432;
    if((x228939==(NULL))) {
      *(x228733 + x162454) = (const struct LINEITEMRecord){0};
    } else {
      
      struct LINEITEMRecord x182056 = *x228939;
      *(x228733 + x162454) = x182056;
      struct LINEITEMRecord* x182058 = &(x228733[x162454]);
      x228939 = x182058;
    };
    numeric_int_t x162456 = x162432;
    x162432 = (x162456+(1));
  };
  FILE* x179920 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ numeric_int_t x179921 = 0;
  numeric_int_t x179922 = x179921;
  numeric_int_t* x179923 = &x179922;
  numeric_int_t x179924 = fscanf(x179920, "%d", x179923);
  pclose(x179920);
  struct ORDERSRecord* x228963 = (struct ORDERSRecord*)malloc(x179922 * sizeof(struct ORDERSRecord));
  memset(x228963, 0, x179922 * sizeof(struct ORDERSRecord));
  long x228964 = mallocSym_182070_228314;
  mallocSym_182070_228314 = (x228964+(((long){x179922})));
  numeric_int_t x179928 = O_RDONLY;
  numeric_int_t x179929 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x179928);
  /* VAR */ struct stat x179930 = x179496;
  struct stat x179931 = x179930;
  struct stat* x179932 = &x179931;
  numeric_int_t x179933 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x179932);
  numeric_int_t x179935 = PROT_READ;
  numeric_int_t x179936 = MAP_PRIVATE;
  char* x162462 = mmap(NULL, (x179932->st_size), x179935, x179936, x179929, 0);
  /* VAR */ numeric_int_t x162463 = 0;
  while(1) {
    
    numeric_int_t x162464 = x162463;
    /* VAR */ boolean_t ite205497 = 0;
    if((x162464<(x179922))) {
      char x219575 = *x162462;
      ite205497 = (x219575!=('\0'));
    } else {
      
      ite205497 = 0;
    };
    boolean_t x201897 = ite205497;
    if (!(x201897)) break; 
    
    /* VAR */ numeric_int_t x179944 = 0;
    numeric_int_t x179945 = x179944;
    numeric_int_t* x179946 = &x179945;
    char* x179947 = strntoi_unchecked(x162462, x179946);
    x162462 = x179947;
    /* VAR */ numeric_int_t x179949 = 0;
    numeric_int_t x179950 = x179949;
    numeric_int_t* x179951 = &x179950;
    char* x179952 = strntoi_unchecked(x162462, x179951);
    x162462 = x179952;
    char x179954 = *x162462;
    /* VAR */ char x179955 = x179954;
    x162462 += 1;
    x162462 += 1;
    /* VAR */ double x179959 = 0.0;
    double x179960 = x179959;
    double* x179961 = &x179960;
    char* x179962 = strntod_unchecked(x162462, x179961);
    x162462 = x179962;
    /* VAR */ numeric_int_t x179964 = 0;
    numeric_int_t x179965 = x179964;
    numeric_int_t* x179966 = &x179965;
    char* x179967 = strntoi_unchecked(x162462, x179966);
    x162462 = x179967;
    /* VAR */ numeric_int_t x179969 = 0;
    numeric_int_t x179970 = x179969;
    numeric_int_t* x179971 = &x179970;
    char* x179972 = strntoi_unchecked(x162462, x179971);
    x162462 = x179972;
    /* VAR */ numeric_int_t x179974 = 0;
    numeric_int_t x179975 = x179974;
    numeric_int_t* x179976 = &x179975;
    char* x179977 = strntoi_unchecked(x162462, x179976);
    x162462 = x179977;
    /* VAR */ char* x179983 = x162462;
    while(1) {
      
      char x179984 = *x162462;
      /* VAR */ boolean_t ite205549 = 0;
      if((x179984!=('|'))) {
        char x219626 = *x162462;
        ite205549 = (x219626!=('\n'));
      } else {
        
        ite205549 = 0;
      };
      boolean_t x201942 = ite205549;
      if (!(x201942)) break; 
      
      x162462 += 1;
    };
    char* x179991 = x179983;
    numeric_int_t x179992 = x162462 - x179991;
    numeric_int_t x179993 = x179992+(1);
    char* x229045 = (char*)malloc(x179993 * sizeof(char));
    memset(x229045, 0, x179993 * sizeof(char));
    long x229046 = mallocSym_182138_228305;
    mallocSym_182138_228305 = (x229046+(((long){x179993})));
    char* x179996 = x179983;
    char* x179997 = strncpy(x229045, x179996, x179992);
    x162462 += 1;
    /* VAR */ char* x179999 = x162462;
    while(1) {
      
      char x180000 = *x162462;
      /* VAR */ boolean_t ite205570 = 0;
      if((x180000!=('|'))) {
        char x219646 = *x162462;
        ite205570 = (x219646!=('\n'));
      } else {
        
        ite205570 = 0;
      };
      boolean_t x201956 = ite205570;
      if (!(x201956)) break; 
      
      x162462 += 1;
    };
    char* x180007 = x179999;
    numeric_int_t x180008 = x162462 - x180007;
    numeric_int_t x180009 = x180008+(1);
    char* x229069 = (char*)malloc(x180009 * sizeof(char));
    memset(x229069, 0, x180009 * sizeof(char));
    long x229070 = mallocSym_182154_228306;
    mallocSym_182154_228306 = (x229070+(((long){x180009})));
    char* x180012 = x179999;
    char* x180013 = strncpy(x229069, x180012, x180008);
    x162462 += 1;
    /* VAR */ numeric_int_t x180015 = 0;
    numeric_int_t x180016 = x180015;
    numeric_int_t* x180017 = &x180016;
    char* x180018 = strntoi_unchecked(x162462, x180017);
    x162462 = x180018;
    /* VAR */ char* x180020 = x162462;
    while(1) {
      
      char x180021 = *x162462;
      /* VAR */ boolean_t ite205596 = 0;
      if((x180021!=('|'))) {
        char x219671 = *x162462;
        ite205596 = (x219671!=('\n'));
      } else {
        
        ite205596 = 0;
      };
      boolean_t x201975 = ite205596;
      if (!(x201975)) break; 
      
      x162462 += 1;
    };
    char* x180028 = x180020;
    numeric_int_t x180029 = x162462 - x180028;
    numeric_int_t x180030 = x180029+(1);
    char* x229098 = (char*)malloc(x180030 * sizeof(char));
    memset(x229098, 0, x180030 * sizeof(char));
    long x229099 = mallocSym_182175_228313;
    mallocSym_182175_228313 = (x229099+(((long){x180030})));
    char* x180033 = x180020;
    char* x180034 = strncpy(x229098, x180033, x180029);
    x162462 += 1;
    struct ORDERSRecord* x229106 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x229106, 0, 1 * sizeof(struct ORDERSRecord));
    long x229107 = mallocSym_183314_228299;
    mallocSym_183314_228299 = (x229107+(((long){1})));
    x229106->O_ORDERKEY = x179945; x229106->O_CUSTKEY = x179950; x229106->O_ORDERDATE = (((x179965*(10000))+((x179970*(100))))+(x179975));
    numeric_int_t x162478 = x162463;
    if((x229106==(NULL))) {
      *(x228963 + x162478) = (const struct ORDERSRecord){0};
    } else {
      
      struct ORDERSRecord x182184 = *x229106;
      *(x228963 + x162478) = x182184;
      struct ORDERSRecord* x182186 = &(x228963[x162478]);
      x229106 = x182186;
    };
    numeric_int_t x162480 = x162463;
    x162463 = (x162480+(1));
  };
  FILE* x180042 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ numeric_int_t x180043 = 0;
  numeric_int_t x180044 = x180043;
  numeric_int_t* x180045 = &x180044;
  numeric_int_t x180046 = fscanf(x180042, "%d", x180045);
  pclose(x180042);
  struct CUSTOMERRecord* x229130 = (struct CUSTOMERRecord*)malloc(x180044 * sizeof(struct CUSTOMERRecord));
  memset(x229130, 0, x180044 * sizeof(struct CUSTOMERRecord));
  long x229131 = mallocSym_182198_228303;
  mallocSym_182198_228303 = (x229131+(((long){x180044})));
  numeric_int_t x180050 = O_RDONLY;
  numeric_int_t x180051 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x180050);
  /* VAR */ struct stat x180052 = x179496;
  struct stat x180053 = x180052;
  struct stat* x180054 = &x180053;
  numeric_int_t x180055 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x180054);
  numeric_int_t x180057 = PROT_READ;
  numeric_int_t x180058 = MAP_PRIVATE;
  char* x162486 = mmap(NULL, (x180054->st_size), x180057, x180058, x180051, 0);
  /* VAR */ numeric_int_t x162487 = 0;
  while(1) {
    
    numeric_int_t x162488 = x162487;
    /* VAR */ boolean_t ite205648 = 0;
    if((x162488<(x180044))) {
      char x219722 = *x162486;
      ite205648 = (x219722!=('\0'));
    } else {
      
      ite205648 = 0;
    };
    boolean_t x202020 = ite205648;
    if (!(x202020)) break; 
    
    /* VAR */ numeric_int_t x180066 = 0;
    numeric_int_t x180067 = x180066;
    numeric_int_t* x180068 = &x180067;
    char* x180069 = strntoi_unchecked(x162486, x180068);
    x162486 = x180069;
    /* VAR */ char* x180071 = x162486;
    while(1) {
      
      char x180072 = *x162486;
      /* VAR */ boolean_t ite205666 = 0;
      if((x180072!=('|'))) {
        char x219739 = *x162486;
        ite205666 = (x219739!=('\n'));
      } else {
        
        ite205666 = 0;
      };
      boolean_t x202031 = ite205666;
      if (!(x202031)) break; 
      
      x162486 += 1;
    };
    char* x180079 = x180071;
    numeric_int_t x180080 = x162486 - x180079;
    numeric_int_t x180081 = x180080+(1);
    char* x229178 = (char*)malloc(x180081 * sizeof(char));
    memset(x229178, 0, x180081 * sizeof(char));
    long x229179 = mallocSym_182232_228308;
    mallocSym_182232_228308 = (x229179+(((long){x180081})));
    char* x180084 = x180071;
    char* x180085 = strncpy(x229178, x180084, x180080);
    x162486 += 1;
    /* VAR */ char* x180087 = x162486;
    while(1) {
      
      char x180088 = *x162486;
      /* VAR */ boolean_t ite205687 = 0;
      if((x180088!=('|'))) {
        char x219759 = *x162486;
        ite205687 = (x219759!=('\n'));
      } else {
        
        ite205687 = 0;
      };
      boolean_t x202045 = ite205687;
      if (!(x202045)) break; 
      
      x162486 += 1;
    };
    char* x180095 = x180087;
    numeric_int_t x180096 = x162486 - x180095;
    numeric_int_t x180097 = x180096+(1);
    char* x229202 = (char*)malloc(x180097 * sizeof(char));
    memset(x229202, 0, x180097 * sizeof(char));
    long x229203 = mallocSym_182248_228298;
    mallocSym_182248_228298 = (x229203+(((long){x180097})));
    char* x180100 = x180087;
    char* x180101 = strncpy(x229202, x180100, x180096);
    x162486 += 1;
    /* VAR */ numeric_int_t x180103 = 0;
    numeric_int_t x180104 = x180103;
    numeric_int_t* x180105 = &x180104;
    char* x180106 = strntoi_unchecked(x162486, x180105);
    x162486 = x180106;
    /* VAR */ char* x180108 = x162486;
    while(1) {
      
      char x180109 = *x162486;
      /* VAR */ boolean_t ite205713 = 0;
      if((x180109!=('|'))) {
        char x219784 = *x162486;
        ite205713 = (x219784!=('\n'));
      } else {
        
        ite205713 = 0;
      };
      boolean_t x202064 = ite205713;
      if (!(x202064)) break; 
      
      x162486 += 1;
    };
    char* x180116 = x180108;
    numeric_int_t x180117 = x162486 - x180116;
    numeric_int_t x180118 = x180117+(1);
    char* x229231 = (char*)malloc(x180118 * sizeof(char));
    memset(x229231, 0, x180118 * sizeof(char));
    long x229232 = mallocSym_182269_228301;
    mallocSym_182269_228301 = (x229232+(((long){x180118})));
    char* x180121 = x180108;
    char* x180122 = strncpy(x229231, x180121, x180117);
    x162486 += 1;
    /* VAR */ double x180124 = 0.0;
    double x180125 = x180124;
    double* x180126 = &x180125;
    char* x180127 = strntod_unchecked(x162486, x180126);
    x162486 = x180127;
    /* VAR */ char* x180129 = x162486;
    while(1) {
      
      char x180130 = *x162486;
      /* VAR */ boolean_t ite205739 = 0;
      if((x180130!=('|'))) {
        char x219809 = *x162486;
        ite205739 = (x219809!=('\n'));
      } else {
        
        ite205739 = 0;
      };
      boolean_t x202083 = ite205739;
      if (!(x202083)) break; 
      
      x162486 += 1;
    };
    char* x180137 = x180129;
    numeric_int_t x180138 = x162486 - x180137;
    numeric_int_t x180139 = x180138+(1);
    char* x229260 = (char*)malloc(x180139 * sizeof(char));
    memset(x229260, 0, x180139 * sizeof(char));
    long x229261 = mallocSym_182290_228268;
    mallocSym_182290_228268 = (x229261+(((long){x180139})));
    char* x180142 = x180129;
    char* x180143 = strncpy(x229260, x180142, x180138);
    x162486 += 1;
    /* VAR */ char* x180145 = x162486;
    while(1) {
      
      char x180146 = *x162486;
      /* VAR */ boolean_t ite205760 = 0;
      if((x180146!=('|'))) {
        char x219829 = *x162486;
        ite205760 = (x219829!=('\n'));
      } else {
        
        ite205760 = 0;
      };
      boolean_t x202097 = ite205760;
      if (!(x202097)) break; 
      
      x162486 += 1;
    };
    char* x180153 = x180145;
    numeric_int_t x180154 = x162486 - x180153;
    numeric_int_t x180155 = x180154+(1);
    char* x229284 = (char*)malloc(x180155 * sizeof(char));
    memset(x229284, 0, x180155 * sizeof(char));
    long x229285 = mallocSym_182306_228312;
    mallocSym_182306_228312 = (x229285+(((long){x180155})));
    char* x180158 = x180145;
    char* x180159 = strncpy(x229284, x180158, x180154);
    x162486 += 1;
    struct CUSTOMERRecord* x229292 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x229292, 0, 1 * sizeof(struct CUSTOMERRecord));
    long x229293 = mallocSym_183447_228275;
    mallocSym_183447_228275 = (x229293+(((long){1})));
    x229292->C_CUSTKEY = x180067; x229292->C_NATIONKEY = x180104;
    numeric_int_t x162501 = x162487;
    if((x229292==(NULL))) {
      *(x229130 + x162501) = (const struct CUSTOMERRecord){0};
    } else {
      
      struct CUSTOMERRecord x182315 = *x229292;
      *(x229130 + x162501) = x182315;
      struct CUSTOMERRecord* x182317 = &(x229130[x162501]);
      x229292 = x182317;
    };
    numeric_int_t x162503 = x162487;
    x162487 = (x162503+(1));
  };
  numeric_int_t x162508 = 0;
  for(; x162508 < 1 ; x162508 += 1) {
    
    /* VAR */ numeric_int_t x221743 = 0;
    struct AGGRecord_OptimalString* x231260 = (struct AGGRecord_OptimalString*)malloc(50 * sizeof(struct AGGRecord_OptimalString));
    memset(x231260, 0, 50 * sizeof(struct AGGRecord_OptimalString));
    long x231261 = mallocSym_221744_228278;
    mallocSym_221744_228278 = (x231261+(((long){50})));
    numeric_int_t x196432 = 0;
    for(; x196432 < 50 ; x196432 += 1) {
      
      *(x231260 + x196432) = (const struct AGGRecord_OptimalString){0};
    };
    struct LINEITEMRecord** x231270 = (struct LINEITEMRecord**)malloc(60000000 * sizeof(struct LINEITEMRecord*));
    memset(x231270, 0, 60000000 * sizeof(struct LINEITEMRecord*));
    long x231271 = mallocSym_221750_228274;
    long x231272 = (long){60000000};
    mallocSym_221750_228274 = (x231271+(x231272));
    numeric_int_t* x231275 = (numeric_int_t*)malloc(60000000 * sizeof(numeric_int_t));
    memset(x231275, 0, 60000000 * sizeof(numeric_int_t));
    long x231276 = mallocSym_221751_228285;
    mallocSym_221751_228285 = (x231276+(x231272));
    numeric_int_t x196440 = 0;
    for(; x196440 < 60000000 ; x196440 += 1) {
      
      *(x231275 + x196440) = 0;
    };
    /* VAR */ numeric_int_t x221757 = 0;
    numeric_int_t x196455 = 0;
    for(; x196455 < x179737 ; x196455 += 1) {
      
      struct LINEITEMRecord* x196456 = &(x228733[x196455]);
      numeric_int_t x196458 = (x196456->L_ORDERKEY)%(60000000);
      numeric_int_t x196459 = x231275[x196458];
      *(x231275 + x196458) = (x196459+(1));
      numeric_int_t x196462 = x221757;
      x221757 = (x196462+(1));
    };
    numeric_int_t x196472 = 0;
    for(; x196472 < 60000000 ; x196472 += 1) {
      
      numeric_int_t x196473 = x231275[x196472];
      struct LINEITEMRecord* x231318 = (struct LINEITEMRecord*)malloc(x196473 * sizeof(struct LINEITEMRecord));
      memset(x231318, 0, x196473 * sizeof(struct LINEITEMRecord));
      long x231319 = mallocSym_196474_228270;
      mallocSym_196474_228270 = (x231319+(((long){x196473})));
      *(x231270 + x196472) = x231318;
      *(x231275 + x196472) = 0;
    };
    x221757 = 0;
    numeric_int_t x196499 = 0;
    for(; x196499 < x179737 ; x196499 += 1) {
      
      struct LINEITEMRecord* x196500 = &(x228733[x196499]);
      numeric_int_t x196502 = (x196500->L_ORDERKEY)%(60000000);
      numeric_int_t x196503 = x231275[x196502];
      struct LINEITEMRecord* x196504 = x231270[x196502];
      if((x196500==(NULL))) {
        *(x196504 + x196503) = (const struct LINEITEMRecord){0};
      } else {
        
        struct LINEITEMRecord x182373 = *x196500;
        *(x196504 + x196503) = x182373;
        struct LINEITEMRecord* x182375 = &(x196504[x196503]);
        x196500 = x182375;
      };
      numeric_int_t x196512 = x231275[x196502];
      *(x231275 + x196502) = (x196512+(1));
      numeric_int_t x196515 = x221757;
      x221757 = (x196515+(1));
    };
    struct ORDERSRecord** x231365 = (struct ORDERSRecord**)malloc(1200000 * sizeof(struct ORDERSRecord*));
    memset(x231365, 0, 1200000 * sizeof(struct ORDERSRecord*));
    long x231366 = mallocSym_221830_228271;
    long x231367 = (long){1200000};
    mallocSym_221830_228271 = (x231366+(x231367));
    numeric_int_t* x231370 = (numeric_int_t*)malloc(1200000 * sizeof(numeric_int_t));
    memset(x231370, 0, 1200000 * sizeof(numeric_int_t));
    long x231371 = mallocSym_221831_228266;
    mallocSym_221831_228266 = (x231371+(x231367));
    numeric_int_t x196524 = 0;
    for(; x196524 < 1200000 ; x196524 += 1) {
      
      *(x231370 + x196524) = 0;
    };
    /* VAR */ numeric_int_t x221837 = 0;
    numeric_int_t x196539 = 0;
    for(; x196539 < x179922 ; x196539 += 1) {
      
      struct ORDERSRecord* x196540 = &(x228963[x196539]);
      numeric_int_t x196542 = (x196540->O_CUSTKEY)%(1200000);
      numeric_int_t x196543 = x231370[x196542];
      *(x231370 + x196542) = (x196543+(1));
      numeric_int_t x196546 = x221837;
      x221837 = (x196546+(1));
    };
    numeric_int_t x196556 = 0;
    for(; x196556 < 1200000 ; x196556 += 1) {
      
      numeric_int_t x196557 = x231370[x196556];
      struct ORDERSRecord* x231413 = (struct ORDERSRecord*)malloc(x196557 * sizeof(struct ORDERSRecord));
      memset(x231413, 0, x196557 * sizeof(struct ORDERSRecord));
      long x231414 = mallocSym_196558_228309;
      mallocSym_196558_228309 = (x231414+(((long){x196557})));
      *(x231365 + x196556) = x231413;
      *(x231370 + x196556) = 0;
    };
    x221837 = 0;
    numeric_int_t x196583 = 0;
    for(; x196583 < x179922 ; x196583 += 1) {
      
      struct ORDERSRecord* x196584 = &(x228963[x196583]);
      numeric_int_t x196586 = (x196584->O_CUSTKEY)%(1200000);
      numeric_int_t x196587 = x231370[x196586];
      struct ORDERSRecord* x196588 = x231365[x196586];
      if((x196584==(NULL))) {
        *(x196588 + x196587) = (const struct ORDERSRecord){0};
      } else {
        
        struct ORDERSRecord x182425 = *x196584;
        *(x196588 + x196587) = x182425;
        struct ORDERSRecord* x182427 = &(x196588[x196587]);
        x196584 = x182427;
      };
      numeric_int_t x196596 = x231370[x196586];
      *(x231370 + x196586) = (x196596+(1));
      numeric_int_t x196599 = x221837;
      x221837 = (x196599+(1));
    };
    struct CUSTOMERRecord** x231460 = (struct CUSTOMERRecord**)malloc(25 * sizeof(struct CUSTOMERRecord*));
    memset(x231460, 0, 25 * sizeof(struct CUSTOMERRecord*));
    long x231461 = mallocSym_221910_228277;
    long x231462 = (long){25};
    mallocSym_221910_228277 = (x231461+(x231462));
    numeric_int_t* x231465 = (numeric_int_t*)malloc(25 * sizeof(numeric_int_t));
    memset(x231465, 0, 25 * sizeof(numeric_int_t));
    long x231466 = mallocSym_221911_228302;
    mallocSym_221911_228302 = (x231466+(x231462));
    numeric_int_t x196608 = 0;
    for(; x196608 < 25 ; x196608 += 1) {
      
      *(x231465 + x196608) = 0;
    };
    /* VAR */ numeric_int_t x221917 = 0;
    numeric_int_t x196623 = 0;
    for(; x196623 < x180044 ; x196623 += 1) {
      
      struct CUSTOMERRecord* x196624 = &(x229130[x196623]);
      numeric_int_t x196626 = (x196624->C_NATIONKEY)%(25);
      numeric_int_t x196627 = x231465[x196626];
      *(x231465 + x196626) = (x196627+(1));
      numeric_int_t x196630 = x221917;
      x221917 = (x196630+(1));
    };
    numeric_int_t x196640 = 0;
    for(; x196640 < 25 ; x196640 += 1) {
      
      numeric_int_t x196641 = x231465[x196640];
      struct CUSTOMERRecord* x231508 = (struct CUSTOMERRecord*)malloc(x196641 * sizeof(struct CUSTOMERRecord));
      memset(x231508, 0, x196641 * sizeof(struct CUSTOMERRecord));
      long x231509 = mallocSym_196642_228318;
      mallocSym_196642_228318 = (x231509+(((long){x196641})));
      *(x231460 + x196640) = x231508;
      *(x231465 + x196640) = 0;
    };
    x221917 = 0;
    numeric_int_t x196667 = 0;
    for(; x196667 < x180044 ; x196667 += 1) {
      
      struct CUSTOMERRecord* x196668 = &(x229130[x196667]);
      numeric_int_t x196670 = (x196668->C_NATIONKEY)%(25);
      numeric_int_t x196671 = x231465[x196670];
      struct CUSTOMERRecord* x196672 = x231460[x196670];
      if((x196668==(NULL))) {
        *(x196672 + x196671) = (const struct CUSTOMERRecord){0};
      } else {
        
        struct CUSTOMERRecord x182477 = *x196668;
        *(x196672 + x196671) = x182477;
        struct CUSTOMERRecord* x182479 = &(x196672[x196671]);
        x196668 = x182479;
      };
      numeric_int_t x196680 = x231465[x196670];
      *(x231465 + x196670) = (x196680+(1));
      numeric_int_t x196683 = x221917;
      x221917 = (x196683+(1));
    };
    /* VAR */ numeric_int_t x221990 = 0;
    double** x231556 = (double**)malloc(25 * sizeof(double*));
    memset(x231556, 0, 25 * sizeof(double*));
    long x231557 = mallocSym_221991_228284;
    mallocSym_221991_228284 = (x231557+(x231462));
    /* VAR */ numeric_int_t x221992 = 0;
    while(1) {
      
      numeric_int_t x178566 = x221992;
      if (!((x178566<(25)))) break; 
      
      numeric_int_t x178568 = x221992;
      double* x231565 = (double*)malloc(1 * sizeof(double));
      memset(x231565, 0, 1 * sizeof(double));
      long x231566 = mallocSym_182496_228317;
      mallocSym_182496_228317 = (x231566+(((long){1})));
      *(x231556 + x178568) = x231565;
      numeric_int_t x178571 = x221992;
      x221992 = (x178571+(1));
    };
    /* VAR */ numeric_int_t x222002 = 0;
    struct AGGRecord_OptimalString* x231575 = (struct AGGRecord_OptimalString*)malloc(25 * sizeof(struct AGGRecord_OptimalString));
    memset(x231575, 0, 25 * sizeof(struct AGGRecord_OptimalString));
    long x231576 = mallocSym_222003_228304;
    mallocSym_222003_228304 = (x231576+(x231462));
    /* VAR */ numeric_int_t x222004 = 0;
    while(1) {
      
      numeric_int_t x178578 = x222004;
      if (!((x178578<(25)))) break; 
      
      numeric_int_t x178580 = x222004;
      double* x178581 = x231556[x178580];
      struct AGGRecord_OptimalString* x231585 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x231585, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      long x231586 = mallocSym_183647_228307;
      mallocSym_183647_228307 = (x231586+(((long){1})));
      x231585->key = ""; x231585->aggs = x178581; x231585->next = NULL;
      /* VAR */ boolean_t ite207846 = 0;
      if((x231585==(NULL))) {
        ite207846 = 1;
      } else {
        
        char* x222017 = x231585->key;
        /* VAR */ boolean_t x222019 = 0;
        if((x222017==(NULL))) {
          x222019 = 1;
        } else {
          
          boolean_t x222022 = strcmp(x222017, "");
          boolean_t x222023 = !(x222022);
          x222019 = x222023;
        };
        boolean_t x222026 = x222019;
        ite207846 = x222026;
      };
      boolean_t x203788 = ite207846;
      if(x203788) {
        *(x231575 + x178580) = (const struct AGGRecord_OptimalString){0};
      } else {
        
        struct AGGRecord_OptimalString x182512 = *x231585;
        *(x231575 + x178580) = x182512;
        struct AGGRecord_OptimalString* x182514 = &(x231575[x178580]);
        x231585 = x182514;
      };
      numeric_int_t x178584 = x222004;
      x222004 = (x178584+(1));
    };
    struct timeval x222039 = (struct timeval){0};
    /* VAR */ struct timeval x222040 = x222039;
    struct timeval x222041 = x222040;
    /* VAR */ struct timeval x222042 = x222039;
    struct timeval x222043 = x222042;
    /* VAR */ struct timeval x222044 = x222039;
    struct timeval x222045 = x222044;
    struct timeval* x222046 = &x222043;
    gettimeofday(x222046, NULL);
    /* VAR */ numeric_int_t x222048 = 0;
    numeric_int_t* x222095 = &(x222072);
    GTree* x222096 = g_tree_new(x222095);
    /* VAR */ boolean_t x222097 = 0;
    /* VAR */ numeric_int_t x222098 = 0;
    while(1) {
      
      numeric_int_t x222100 = x222048;
      if (!((x222100<(x179488)))) break; 
      
      numeric_int_t x165074 = x222048;
      struct NATIONRecord* x162673 = &(x228325[x165074]);
      numeric_int_t x162675 = x162673->N_REGIONKEY;
      struct REGIONRecord* x176720 = &(x228451[(x162675-(0))]);
      boolean_t x194277 = strcmp((x176720->R_NAME), "ASIA");
      if((x194277==(0))) {
        if(((x176720->R_REGIONKEY)==(x162675))) {
          if(((x176720->R_REGIONKEY)==(x162675))) {
            numeric_int_t x163433 = x162673->N_NATIONKEY;
            char* x163434 = x162673->N_NAME;
            numeric_int_t x167330 = x163433%(25);
            numeric_int_t x167331 = x231465[x167330];
            struct CUSTOMERRecord* x167332 = x231460[x167330];
            numeric_int_t x197289 = 0;
            for(; x197289 < x167331 ; x197289 += 1) {
              
              struct CUSTOMERRecord* x197290 = &(x167332[x197289]);
              if((x163433==((x197290->C_NATIONKEY)))) {
                numeric_int_t x163485 = x197290->C_CUSTKEY;
                numeric_int_t x167348 = x163485%(1200000);
                numeric_int_t x167349 = x231370[x167348];
                struct ORDERSRecord* x167350 = x231365[x167348];
                numeric_int_t x197045 = 0;
                for(; x197045 < x167349 ; x197045 += 1) {
                  
                  struct ORDERSRecord* x197046 = &(x167350[x197045]);
                  numeric_int_t x197047 = x197046->O_ORDERDATE;
                  /* VAR */ boolean_t ite208944 = 0;
                  if((x197047>=(19960101))) {
                    ite208944 = (x197047<(19970101));
                  } else {
                    
                    ite208944 = 0;
                  };
                  boolean_t x204611 = ite208944;
                  if(x204611) {
                    if((x163485==((x197046->O_CUSTKEY)))) {
                      numeric_int_t x163544 = x197046->O_ORDERKEY;
                      numeric_int_t x167373 = x163544%(60000000);
                      numeric_int_t x167374 = x231275[x167373];
                      struct LINEITEMRecord* x167375 = x231270[x167373];
                      numeric_int_t x196930 = 0;
                      for(; x196930 < x167374 ; x196930 += 1) {
                        
                        struct LINEITEMRecord* x196931 = &(x167375[x196930]);
                        if((x163544==((x196931->L_ORDERKEY)))) {
                          numeric_int_t x163721 = x196931->L_SUPPKEY;
                          struct SUPPLIERRecord* x176773 = &(x228571[(x163721-(1))]);
                          if(((x176773->S_SUPPKEY)==(x163721))) {
                            /* VAR */ boolean_t ite209127 = 0;
                            if(((x176773->S_SUPPKEY)==(x163721))) {
                              ite209127 = (x163433==((x176773->S_NATIONKEY)));
                            } else {
                              
                              ite209127 = 0;
                            };
                            boolean_t x204747 = ite209127;
                            if(x204747) {
                              numeric_int_t x194339 = strlen(x163434);
                              /* VAR */ numeric_int_t x190711 = 0;
                              /* VAR */ numeric_int_t x190712 = 0;
                              while(1) {
                                
                                numeric_int_t x190713 = x190711;
                                if (!((x190713<(x194339)))) break; 
                                
                                numeric_int_t x190715 = x190712;
                                numeric_int_t x190716 = x190711;
                                char* x194347 = pointer_add(x163434, x190716);
                                char x194348 = *(x194347);
                                x190712 = (x190715+(x194348));
                                numeric_int_t x190721 = x190711;
                                x190711 = (x190721+(1));
                              };
                              numeric_int_t x190725 = x190712;
                              numeric_int_t x169563 = x190725&(49);
                              struct AGGRecord_OptimalString* x170934 = &(x231260[x169563]);
                              numeric_int_t x169565 = x221743;
                              if((x169563>(x169565))) {
                                x221743 = x169563;
                              };
                              /* VAR */ struct AGGRecord_OptimalString* current171441 = x170934;
                              /* VAR */ boolean_t found170944 = 0;
                              while(1) {
                                
                                struct AGGRecord_OptimalString* x171444 = current171441;
                                /* VAR */ boolean_t ite209164 = 0;
                                if((x171444!=(NULL))) {
                                  char* x223417 = x171444->key;
                                  /* VAR */ boolean_t x223419 = 0;
                                  if((x223417!=(NULL))) {
                                    boolean_t x223421 = strcmp(x223417, "");
                                    x223419 = x223421;
                                  } else {
                                    
                                    x223419 = 0;
                                  };
                                  boolean_t x223425 = x223419;
                                  ite209164 = x223425;
                                } else {
                                  
                                  ite209164 = 0;
                                };
                                boolean_t x204777 = ite209164;
                                /* VAR */ boolean_t ite209175 = 0;
                                if(x204777) {
                                  boolean_t x223432 = found170944;
                                  boolean_t x223433 = !(x223432);
                                  ite209175 = x223433;
                                } else {
                                  
                                  ite209175 = 0;
                                };
                                boolean_t x204779 = ite209175;
                                if (!(x204779)) break; 
                                
                                struct AGGRecord_OptimalString* x171449 = current171441;
                                boolean_t x190745 = strcmp((x171449->key), x163434);
                                boolean_t x190746 = !(x190745);
                                if(x190746) {
                                  found170944 = 1;
                                } else {
                                  
                                  struct AGGRecord_OptimalString* x171455 = current171441;
                                  struct AGGRecord_OptimalString* x172450 = x171455->next;
                                  current171441 = x172450;
                                };
                              };
                              boolean_t x170960 = found170944;
                              boolean_t x170961 = !(x170960);
                              /* VAR */ struct AGGRecord_OptimalString** ite204792 = 0;
                              if(x170961) {
                                ite204792 = NULL;
                              } else {
                                
                                struct AGGRecord_OptimalString* x204794 = current171441;
                                ite204792 = x204794;
                              };
                              struct AGGRecord_OptimalString** x170967 = ite204792;
                              /* VAR */ struct AGGRecord_OptimalString* ite204800 = 0;
                              if((x170967!=(NULL))) {
                                ite204800 = x170967;
                              } else {
                                
                                numeric_int_t x204802 = x221990;
                                double* x204803 = x231556[x204802];
                                numeric_int_t x204804 = x221990;
                                x221990 = (x204804+(1));
                                numeric_int_t x204807 = x222002;
                                struct AGGRecord_OptimalString* x204808 = &(x231575[x204807]);
                                x204808->key = x163434;
                                x204808->aggs = x204803;
                                x204808->next = NULL;
                                numeric_int_t x204812 = x222002;
                                x222002 = (x204812+(1));
                                /* VAR */ boolean_t ite209220 = 0;
                                if((x170934==(NULL))) {
                                  ite209220 = 1;
                                } else {
                                  
                                  char* x223477 = x170934->key;
                                  /* VAR */ boolean_t x223479 = 0;
                                  if((x223477==(NULL))) {
                                    x223479 = 1;
                                  } else {
                                    
                                    boolean_t x223482 = strcmp(x223477, "");
                                    boolean_t x223483 = !(x223482);
                                    x223479 = x223483;
                                  };
                                  boolean_t x223486 = x223479;
                                  ite209220 = x223486;
                                };
                                boolean_t x204817 = ite209220;
                                if(x204817) {
                                  x204808->next = NULL;
                                  /* VAR */ boolean_t ite209234 = 0;
                                  if((x204808==(NULL))) {
                                    ite209234 = 1;
                                  } else {
                                    
                                    char* x223496 = x204808->key;
                                    /* VAR */ boolean_t x223498 = 0;
                                    if((x223496==(NULL))) {
                                      x223498 = 1;
                                    } else {
                                      
                                      boolean_t x223501 = strcmp(x223496, "");
                                      boolean_t x223502 = !(x223501);
                                      x223498 = x223502;
                                    };
                                    boolean_t x223505 = x223498;
                                    ite209234 = x223505;
                                  };
                                  boolean_t x204822 = ite209234;
                                  if(x204822) {
                                    *(x231260 + x169563) = (const struct AGGRecord_OptimalString){0};
                                  } else {
                                    
                                    struct AGGRecord_OptimalString x182665 = *x204808;
                                    *(x231260 + x169563) = x182665;
                                    struct AGGRecord_OptimalString* x182667 = &(x231260[x169563]);
                                    x204808 = x182667;
                                  };
                                } else {
                                  
                                  struct AGGRecord_OptimalString* x172470 = x170934->next;
                                  x204808->next = x172470;
                                  x170934->next = x204808;
                                };
                                ite204800 = x204808;
                              };
                              struct AGGRecord_OptimalString* x169578 = ite204800;
                              double* x162970 = x169578->aggs;
                              double x162984 = x162970[0];
                              *x162970 = (x162984+(((x196931->L_EXTENDEDPRICE)*((1.0-((x196931->L_DISCOUNT)))))));
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
      };
      numeric_int_t x165108 = x222048;
      x222048 = (x165108+(1));
    };
    numeric_int_t x223530 = x221743;
    numeric_int_t x197808 = 0;
    for(; x197808 < (x223530+(1)) ; x197808 += 1) {
      
      struct AGGRecord_OptimalString* x197809 = &(x231260[x197808]);
      /* VAR */ struct AGGRecord_OptimalString* x197810 = x197809;
      while(1) {
        
        struct AGGRecord_OptimalString* x171505 = x197810;
        /* VAR */ boolean_t ite209297 = 0;
        if((x171505!=(NULL))) {
          char* x223567 = x171505->key;
          /* VAR */ boolean_t x223569 = 0;
          if((x223567!=(NULL))) {
            boolean_t x223571 = strcmp(x223567, "");
            x223569 = x223571;
          } else {
            
            x223569 = 0;
          };
          boolean_t x223575 = x223569;
          ite209297 = x223575;
        } else {
          
          ite209297 = 0;
        };
        boolean_t x204867 = ite209297;
        if (!(x204867)) break; 
        
        struct AGGRecord_OptimalString* x171507 = x197810;
        struct AGGRecord_OptimalString* x172502 = x171507->next;
        struct AGGRecord_OptimalString* x171509 = x197810;
        g_tree_insert(x222096, x171509, x171509);
        x197810 = x172502;
      };
    };
    while(1) {
      
      boolean_t x165450 = x222097;
      boolean_t x163015 = !(x165450);
      /* VAR */ boolean_t ite209316 = 0;
      if(x163015) {
        numeric_int_t x223590 = g_tree_nnodes(x222096);
        ite209316 = (x223590!=(0));
      } else {
        
        ite209316 = 0;
      };
      boolean_t x204877 = ite209316;
      if (!(x204877)) break; 
      
      void* x186138 = NULL;
      void** x186146 = &(x186138);
      g_tree_foreach(x222096, x186145, x186146);
      struct AGGRecord_OptimalString* x186148 = (struct AGGRecord_OptimalString*){x186138};
      numeric_int_t x186149 = g_tree_remove(x222096, x186148);
      if(0) {
        x222097 = 1;
      } else {
        
        double x163031 = ((double*) { x186148->aggs })[0];
        printf("%s|%.4f\n", (x186148->key), x163031);
        numeric_int_t x165468 = x222098;
        x222098 = (x165468+(1));
      };
    };
    numeric_int_t x223617 = x222098;
    printf("(%d rows)\n", x223617);
    struct timeval* x223619 = &x222045;
    gettimeofday(x223619, NULL);
    struct timeval* x223621 = &x222041;
    struct timeval* x223622 = &x222045;
    struct timeval* x223623 = &x222043;
    long x223624 = timeval_subtract(x223621, x223622, x223623);
    printf("Generated code run in %ld milliseconds.\n", x223624);
  };
  /* VAR */ long mallocSum233205 = 0L;
  long x233206 = mallocSym_182438_228262;
  numeric_int_t x233207 = sizeof(numeric_int_t);
  long x233209 = x233206*(((long){x233207}));
  printf("229518 with type Int: %ld\n", x233209);
  long x233211 = mallocSum233205;
  mallocSum233205 = (x233211+(x233209));
  long x233214 = mallocSym_182410_228263;
  numeric_int_t x233215 = sizeof(struct ORDERSRecord);
  long x233217 = x233214*(((long){x233215}));
  printf("231404 with type ORDERSRecord: %ld\n", x233217);
  long x233219 = mallocSum233205;
  mallocSum233205 = (x233219+(x233217));
  long x233222 = mallocSym_181856_228264;
  numeric_int_t x233223 = sizeof(char);
  long x233225 = x233222*(((long){x233223}));
  printf("228701 with type Byte: %ld\n", x233225);
  long x233227 = mallocSum233205;
  mallocSum233205 = (x233227+(x233225));
  long x233230 = mallocSym_182502_228265;
  numeric_int_t x233231 = sizeof(struct AGGRecord_OptimalString);
  long x233233 = x233230*(((long){x233231}));
  printf("229628 with type AGGRecord_OptimalString: %ld\n", x233233);
  long x233235 = mallocSum233205;
  mallocSum233205 = (x233235+(x233233));
  long x233238 = mallocSym_221831_228266;
  numeric_int_t x233239 = sizeof(numeric_int_t);
  long x233241 = x233238*(((long){x233239}));
  printf("231370 with type Int: %ld\n", x233241);
  long x233243 = mallocSum233205;
  mallocSum233205 = (x233243+(x233241));
  long x233246 = mallocSym_181691_228267;
  numeric_int_t x233247 = sizeof(struct REGIONRecord);
  long x233249 = x233246*(((long){x233247}));
  printf("228451 with type REGIONRecord: %ld\n", x233249);
  long x233251 = mallocSum233205;
  mallocSum233205 = (x233251+(x233249));
  long x233254 = mallocSym_182290_228268;
  numeric_int_t x233255 = sizeof(char);
  long x233257 = x233254*(((long){x233255}));
  printf("229260 with type Byte: %ld\n", x233257);
  long x233259 = mallocSum233205;
  mallocSum233205 = (x233259+(x233257));
  long x233262 = mallocSym_182437_228269;
  numeric_int_t x233263 = sizeof(struct CUSTOMERRecord*);
  long x233265 = x233262*(((long){x233263}));
  printf("229513 with type Pointer[CUSTOMERRecord]: %ld\n", x233265);
  long x233267 = mallocSum233205;
  mallocSum233205 = (x233267+(x233265));
  long x233270 = mallocSym_196474_228270;
  numeric_int_t x233271 = sizeof(struct LINEITEMRecord);
  long x233273 = x233270*(((long){x233271}));
  printf("231318 with type LINEITEMRecord: %ld\n", x233273);
  long x233275 = mallocSum233205;
  mallocSum233205 = (x233275+(x233273));
  long x233278 = mallocSym_221830_228271;
  numeric_int_t x233279 = sizeof(struct ORDERSRecord*);
  long x233281 = x233278*(((long){x233279}));
  printf("231365 with type Pointer[ORDERSRecord]: %ld\n", x233281);
  long x233283 = mallocSum233205;
  mallocSum233205 = (x233283+(x233281));
  long x233286 = mallocSym_182015_228272;
  numeric_int_t x233287 = sizeof(char);
  long x233289 = x233286*(((long){x233287}));
  printf("228883 with type Byte: %ld\n", x233289);
  long x233291 = mallocSum233205;
  mallocSum233205 = (x233291+(x233289));
  long x233294 = mallocSym_181612_228273;
  numeric_int_t x233295 = sizeof(struct NATIONRecord);
  long x233297 = x233294*(((long){x233295}));
  printf("228325 with type NATIONRecord: %ld\n", x233297);
  long x233299 = mallocSum233205;
  mallocSum233205 = (x233299+(x233297));
  long x233302 = mallocSym_221750_228274;
  numeric_int_t x233303 = sizeof(struct LINEITEMRecord*);
  long x233305 = x233302*(((long){x233303}));
  printf("231270 with type Pointer[LINEITEMRecord]: %ld\n", x233305);
  long x233307 = mallocSum233205;
  mallocSum233205 = (x233307+(x233305));
  long x233310 = mallocSym_183447_228275;
  numeric_int_t x233311 = sizeof(struct CUSTOMERRecord);
  long x233313 = x233310*(((long){x233311}));
  printf("229292 with type CUSTOMERRecord: %ld\n", x233313);
  long x233315 = mallocSum233205;
  mallocSum233205 = (x233315+(x233313));
  long x233318 = mallocSym_182385_228276;
  numeric_int_t x233319 = sizeof(struct ORDERSRecord*);
  long x233321 = x233318*(((long){x233319}));
  printf("229418 with type Pointer[ORDERSRecord]: %ld\n", x233321);
  long x233323 = mallocSum233205;
  mallocSum233205 = (x233323+(x233321));
  long x233326 = mallocSym_221910_228277;
  numeric_int_t x233327 = sizeof(struct CUSTOMERRecord*);
  long x233329 = x233326*(((long){x233327}));
  printf("231460 with type Pointer[CUSTOMERRecord]: %ld\n", x233329);
  long x233331 = mallocSum233205;
  mallocSum233205 = (x233331+(x233329));
  long x233334 = mallocSym_221744_228278;
  numeric_int_t x233335 = sizeof(struct AGGRecord_OptimalString);
  long x233337 = x233334*(((long){x233335}));
  printf("231260 with type AGGRecord_OptimalString: %ld\n", x233337);
  long x233339 = mallocSum233205;
  mallocSum233205 = (x233339+(x233337));
  long x233342 = mallocSym_182991_228279;
  numeric_int_t x233343 = sizeof(struct SUPPLIERRecord);
  long x233345 = x233342*(((long){x233343}));
  printf("228709 with type SUPPLIERRecord: %ld\n", x233345);
  long x233347 = mallocSum233205;
  mallocSum233205 = (x233347+(x233345));
  long x233350 = mallocSym_181879_228280;
  numeric_int_t x233351 = sizeof(struct LINEITEMRecord);
  long x233353 = x233350*(((long){x233351}));
  printf("228733 with type LINEITEMRecord: %ld\n", x233353);
  long x233355 = mallocSum233205;
  mallocSum233205 = (x233355+(x233353));
  long x233358 = mallocSym_182799_228281;
  numeric_int_t x233359 = sizeof(struct NATIONRecord);
  long x233361 = x233358*(((long){x233359}));
  printf("228411 with type NATIONRecord: %ld\n", x233361);
  long x233363 = mallocSum233205;
  mallocSum233205 = (x233363+(x233361));
  long x233366 = mallocSym_182874_228282;
  numeric_int_t x233367 = sizeof(struct REGIONRecord);
  long x233369 = x233366*(((long){x233367}));
  printf("228531 with type REGIONRecord: %ld\n", x233369);
  long x233371 = mallocSum233205;
  mallocSum233205 = (x233371+(x233369));
  long x233374 = mallocSym_181668_228283;
  numeric_int_t x233375 = sizeof(char);
  long x233377 = x233374*(((long){x233375}));
  printf("228403 with type Byte: %ld\n", x233377);
  long x233379 = mallocSum233205;
  mallocSum233205 = (x233379+(x233377));
  long x233382 = mallocSym_221991_228284;
  numeric_int_t x233383 = sizeof(double*);
  long x233385 = x233382*(((long){x233383}));
  printf("231556 with type Pointer[Double]: %ld\n", x233385);
  long x233387 = mallocSum233205;
  mallocSum233205 = (x233387+(x233385));
  long x233390 = mallocSym_221751_228285;
  numeric_int_t x233391 = sizeof(numeric_int_t);
  long x233393 = x233390*(((long){x233391}));
  printf("231275 with type Int: %ld\n", x233393);
  long x233395 = mallocSum233205;
  mallocSum233205 = (x233395+(x233393));
  long x233398 = mallocSym_181798_228286;
  numeric_int_t x233399 = sizeof(char);
  long x233401 = x233398*(((long){x233399}));
  printf("228619 with type Byte: %ld\n", x233401);
  long x233403 = mallocSum233205;
  mallocSum233205 = (x233403+(x233401));
  long x233406 = mallocSym_182333_228287;
  numeric_int_t x233407 = sizeof(struct LINEITEMRecord*);
  long x233409 = x233406*(((long){x233407}));
  printf("229323 with type Pointer[LINEITEMRecord]: %ld\n", x233409);
  long x233411 = mallocSum233205;
  mallocSum233205 = (x233411+(x233409));
  long x233414 = mallocSym_182358_228288;
  numeric_int_t x233415 = sizeof(struct LINEITEMRecord);
  long x233417 = x233414*(((long){x233415}));
  printf("231309 with type LINEITEMRecord: %ld\n", x233417);
  long x233419 = mallocSum233205;
  mallocSum233205 = (x233419+(x233417));
  long x233422 = mallocSym_183184_228289;
  numeric_int_t x233423 = sizeof(struct LINEITEMRecord);
  long x233425 = x233422*(((long){x233423}));
  printf("228939 with type LINEITEMRecord: %ld\n", x233425);
  long x233427 = mallocSum233205;
  mallocSum233205 = (x233427+(x233425));
  long x233430 = mallocSym_182334_228290;
  numeric_int_t x233431 = sizeof(numeric_int_t);
  long x233433 = x233430*(((long){x233431}));
  printf("229328 with type Int: %ld\n", x233433);
  long x233435 = mallocSum233205;
  mallocSum233205 = (x233435+(x233433));
  long x233438 = mallocSym_181647_228291;
  numeric_int_t x233439 = sizeof(char);
  long x233441 = x233438*(((long){x233439}));
  printf("228374 with type Byte: %ld\n", x233441);
  long x233443 = mallocSum233205;
  mallocSum233205 = (x233443+(x233441));
  long x233446 = mallocSym_182327_228292;
  numeric_int_t x233447 = sizeof(struct AGGRecord_OptimalString);
  long x233449 = x233446*(((long){x233447}));
  printf("229313 with type AGGRecord_OptimalString: %ld\n", x233449);
  long x233451 = mallocSum233205;
  mallocSum233205 = (x233451+(x233449));
  long x233454 = mallocSym_182047_228293;
  numeric_int_t x233455 = sizeof(char);
  long x233457 = x233454*(((long){x233455}));
  printf("228931 with type Byte: %ld\n", x233457);
  long x233459 = mallocSum233205;
  mallocSum233205 = (x233459+(x233457));
  long x233462 = mallocSym_182386_228294;
  numeric_int_t x233463 = sizeof(numeric_int_t);
  long x233465 = x233462*(((long){x233463}));
  printf("229423 with type Int: %ld\n", x233465);
  long x233467 = mallocSum233205;
  mallocSum233205 = (x233467+(x233465));
  long x233470 = mallocSym_182462_228295;
  numeric_int_t x233471 = sizeof(struct CUSTOMERRecord);
  long x233473 = x233470*(((long){x233471}));
  printf("231499 with type CUSTOMERRecord: %ld\n", x233473);
  long x233475 = mallocSum233205;
  mallocSum233205 = (x233475+(x233473));
  long x233478 = mallocSym_181725_228296;
  numeric_int_t x233479 = sizeof(char);
  long x233481 = x233478*(((long){x233479}));
  printf("228499 with type Byte: %ld\n", x233481);
  long x233483 = mallocSum233205;
  mallocSum233205 = (x233483+(x233481));
  long x233486 = mallocSym_181835_228297;
  numeric_int_t x233487 = sizeof(char);
  long x233489 = x233486*(((long){x233487}));
  printf("228672 with type Byte: %ld\n", x233489);
  long x233491 = mallocSum233205;
  mallocSum233205 = (x233491+(x233489));
  long x233494 = mallocSym_182248_228298;
  numeric_int_t x233495 = sizeof(char);
  long x233497 = x233494*(((long){x233495}));
  printf("229202 with type Byte: %ld\n", x233497);
  long x233499 = mallocSum233205;
  mallocSum233205 = (x233499+(x233497));
  long x233502 = mallocSym_183314_228299;
  numeric_int_t x233503 = sizeof(struct ORDERSRecord);
  long x233505 = x233502*(((long){x233503}));
  printf("229106 with type ORDERSRecord: %ld\n", x233505);
  long x233507 = mallocSum233205;
  mallocSum233205 = (x233507+(x233505));
  long x233510 = mallocSym_181814_228300;
  numeric_int_t x233511 = sizeof(char);
  long x233513 = x233510*(((long){x233511}));
  printf("228643 with type Byte: %ld\n", x233513);
  long x233515 = mallocSum233205;
  mallocSum233205 = (x233515+(x233513));
  long x233518 = mallocSym_182269_228301;
  numeric_int_t x233519 = sizeof(char);
  long x233521 = x233518*(((long){x233519}));
  printf("229231 with type Byte: %ld\n", x233521);
  long x233523 = mallocSum233205;
  mallocSum233205 = (x233523+(x233521));
  long x233526 = mallocSym_221911_228302;
  numeric_int_t x233527 = sizeof(numeric_int_t);
  long x233529 = x233526*(((long){x233527}));
  printf("231465 with type Int: %ld\n", x233529);
  long x233531 = mallocSum233205;
  mallocSum233205 = (x233531+(x233529));
  long x233534 = mallocSym_182198_228303;
  numeric_int_t x233535 = sizeof(struct CUSTOMERRecord);
  long x233537 = x233534*(((long){x233535}));
  printf("229130 with type CUSTOMERRecord: %ld\n", x233537);
  long x233539 = mallocSum233205;
  mallocSum233205 = (x233539+(x233537));
  long x233542 = mallocSym_222003_228304;
  numeric_int_t x233543 = sizeof(struct AGGRecord_OptimalString);
  long x233545 = x233542*(((long){x233543}));
  printf("231575 with type AGGRecord_OptimalString: %ld\n", x233545);
  long x233547 = mallocSum233205;
  mallocSum233205 = (x233547+(x233545));
  long x233550 = mallocSym_182138_228305;
  numeric_int_t x233551 = sizeof(char);
  long x233553 = x233550*(((long){x233551}));
  printf("229045 with type Byte: %ld\n", x233553);
  long x233555 = mallocSum233205;
  mallocSum233205 = (x233555+(x233553));
  long x233558 = mallocSym_182154_228306;
  numeric_int_t x233559 = sizeof(char);
  long x233561 = x233558*(((long){x233559}));
  printf("229069 with type Byte: %ld\n", x233561);
  long x233563 = mallocSum233205;
  mallocSum233205 = (x233563+(x233561));
  long x233566 = mallocSym_183647_228307;
  numeric_int_t x233567 = sizeof(struct AGGRecord_OptimalString);
  long x233569 = x233566*(((long){x233567}));
  printf("231585 with type AGGRecord_OptimalString: %ld\n", x233569);
  long x233571 = mallocSum233205;
  mallocSum233205 = (x233571+(x233569));
  long x233574 = mallocSym_182232_228308;
  numeric_int_t x233575 = sizeof(char);
  long x233577 = x233574*(((long){x233575}));
  printf("229178 with type Byte: %ld\n", x233577);
  long x233579 = mallocSum233205;
  mallocSum233205 = (x233579+(x233577));
  long x233582 = mallocSym_196558_228309;
  numeric_int_t x233583 = sizeof(struct ORDERSRecord);
  long x233585 = x233582*(((long){x233583}));
  printf("231413 with type ORDERSRecord: %ld\n", x233585);
  long x233587 = mallocSum233205;
  mallocSum233205 = (x233587+(x233585));
  long x233590 = mallocSym_182490_228310;
  numeric_int_t x233591 = sizeof(double*);
  long x233593 = x233590*(((long){x233591}));
  printf("229609 with type Pointer[Double]: %ld\n", x233593);
  long x233595 = mallocSum233205;
  mallocSum233205 = (x233595+(x233593));
  long x233598 = mallocSym_181741_228311;
  numeric_int_t x233599 = sizeof(char);
  long x233601 = x233598*(((long){x233599}));
  printf("228523 with type Byte: %ld\n", x233601);
  long x233603 = mallocSum233205;
  mallocSum233205 = (x233603+(x233601));
  long x233606 = mallocSym_182306_228312;
  numeric_int_t x233607 = sizeof(char);
  long x233609 = x233606*(((long){x233607}));
  printf("229284 with type Byte: %ld\n", x233609);
  long x233611 = mallocSum233205;
  mallocSum233205 = (x233611+(x233609));
  long x233614 = mallocSym_182175_228313;
  numeric_int_t x233615 = sizeof(char);
  long x233617 = x233614*(((long){x233615}));
  printf("229098 with type Byte: %ld\n", x233617);
  long x233619 = mallocSum233205;
  mallocSum233205 = (x233619+(x233617));
  long x233622 = mallocSym_182070_228314;
  numeric_int_t x233623 = sizeof(struct ORDERSRecord);
  long x233625 = x233622*(((long){x233623}));
  printf("228963 with type ORDERSRecord: %ld\n", x233625);
  long x233627 = mallocSum233205;
  mallocSum233205 = (x233627+(x233625));
  long x233630 = mallocSym_181764_228315;
  numeric_int_t x233631 = sizeof(struct SUPPLIERRecord);
  long x233633 = x233630*(((long){x233631}));
  printf("228571 with type SUPPLIERRecord: %ld\n", x233633);
  long x233635 = mallocSum233205;
  mallocSum233205 = (x233635+(x233633));
  long x233638 = mallocSym_182031_228316;
  numeric_int_t x233639 = sizeof(char);
  long x233641 = x233638*(((long){x233639}));
  printf("228907 with type Byte: %ld\n", x233641);
  long x233643 = mallocSum233205;
  mallocSum233205 = (x233643+(x233641));
  long x233646 = mallocSym_182496_228317;
  numeric_int_t x233647 = sizeof(double);
  long x233649 = x233646*(((long){x233647}));
  printf("231565 with type Double: %ld\n", x233649);
  long x233651 = mallocSum233205;
  mallocSum233205 = (x233651+(x233649));
  long x233654 = mallocSym_196642_228318;
  numeric_int_t x233655 = sizeof(struct CUSTOMERRecord);
  long x233657 = x233654*(((long){x233655}));
  printf("231508 with type CUSTOMERRecord: %ld\n", x233657);
  long x233659 = mallocSum233205;
  mallocSum233205 = (x233659+(x233657));
  long x233662 = mallocSum233205;
  printf("total: %ld\n", x233662);
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x222072(struct AGGRecord_OptimalString* x162612, struct AGGRecord_OptimalString* x162613) {
  double* x162614 = x162612->aggs;
  double x162615 = x162614[0];
  double* x162616 = x162613->aggs;
  double x162617 = x162616[0];
  /* VAR */ numeric_int_t ite203840 = 0;
  if((x162615<(x162617))) {
    ite203840 = 1;
  } else {
    
    double x203842 = x162614[0];
    double x203843 = x162616[0];
    /* VAR */ numeric_int_t ite203846 = 0;
    if((x203842>(x203843))) {
      ite203846 = -1;
    } else {
      
      ite203846 = 0;
    };
    numeric_int_t x203845 = ite203846;
    ite203840 = x203845;
  };
  numeric_int_t x162623 = ite203840;
  return x162623; 
}

numeric_int_t x186145(void* x186139, void* x186140, void* x186141) {
  pointer_assign(((struct AGGRecord_OptimalString**){x186141}), ((struct AGGRecord_OptimalString*){x186140}));
  return 1; 
}
