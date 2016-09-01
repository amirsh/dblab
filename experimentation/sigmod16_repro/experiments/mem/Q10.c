#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct AGGRecord_Q10GRPRecord;
struct Q10GRPRecord;
struct LINEITEMRecord;
struct NATIONRecord;
struct ORDERSRecord;
struct CUSTOMERRecord;
struct AGGRecord_Q10GRPRecord {
  struct Q10GRPRecord* key;
  double aggs;
};

struct Q10GRPRecord {
  numeric_int_t C_CUSTKEY;
  char* C_NAME;
  double C_ACCTBAL;
  char* C_PHONE;
  char* N_NAME;
  char* C_ADDRESS;
  char* C_COMMENT;
};

struct LINEITEMRecord {
  numeric_int_t L_ORDERKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  char L_RETURNFLAG;
};

struct NATIONRecord {
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
};

struct ORDERSRecord {
  numeric_int_t O_ORDERKEY;
  numeric_int_t O_CUSTKEY;
  numeric_int_t O_ORDERDATE;
};

struct CUSTOMERRecord {
  numeric_int_t C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  numeric_int_t C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_COMMENT;
};


numeric_int_t x483530(struct AGGRecord_Q10GRPRecord* x437841, struct AGGRecord_Q10GRPRecord* x437842);

numeric_int_t x455043(void* x455037, void* x455038, void* x455039);

int main(int argc, char** argv) {
  /* VAR */ long mallocSym_452124_487646 = 0L;
  /* VAR */ long mallocSym_452355_487647 = 0L;
  /* VAR */ long mallocSym_452305_487648 = 0L;
  /* VAR */ long mallocSym_463261_487649 = 0L;
  /* VAR */ long mallocSym_452103_487650 = 0L;
  /* VAR */ long mallocSym_452033_487651 = 0L;
  /* VAR */ long mallocSym_452306_487652 = 0L;
  /* VAR */ long mallocSym_483409_487653 = 0L;
  /* VAR */ long mallocSym_452406_487654 = 0L;
  /* VAR */ long mallocSym_483410_487655 = 0L;
  /* VAR */ long mallocSym_452851_487656 = 0L;
  /* VAR */ long mallocSym_452265_487657 = 0L;
  /* VAR */ long mallocSym_483334_487658 = 0L;
  /* VAR */ long mallocSym_483467_487659 = 0L;
  /* VAR */ long mallocSym_452249_487660 = 0L;
  /* VAR */ long mallocSym_452087_487661 = 0L;
  /* VAR */ long mallocSym_452774_487662 = 0L;
  /* VAR */ long mallocSym_452981_487663 = 0L;
  /* VAR */ long mallocSym_452362_487664 = 0L;
  /* VAR */ long mallocSym_483336_487665 = 0L;
  /* VAR */ long mallocSym_452053_487666 = 0L;
  /* VAR */ long mallocSym_452012_487667 = 0L;
  /* VAR */ long mallocSym_451926_487668 = 0L;
  /* VAR */ long mallocSym_452145_487669 = 0L;
  /* VAR */ long mallocSym_483484_487670 = 0L;
  /* VAR */ long mallocSym_452307_487671 = 0L;
  /* VAR */ long mallocSym_452286_487672 = 0L;
  /* VAR */ long mallocSym_463311_487673 = 0L;
  /* VAR */ long mallocSym_451789_487674 = 0L;
  /* VAR */ long mallocSym_452304_487675 = 0L;
  /* VAR */ long mallocSym_483335_487676 = 0L;
  /* VAR */ long mallocSym_483333_487677 = 0L;
  /* VAR */ long mallocSym_452331_487678 = 0L;
  /* VAR */ long mallocSym_453234_487679 = 0L;
  /* VAR */ long mallocSym_453216_487680 = 0L;
  /* VAR */ long mallocSym_453108_487681 = 0L;
  /* VAR */ long mallocSym_452356_487682 = 0L;
  /* VAR */ long mallocSym_452391_487683 = 0L;
  /* VAR */ long mallocSym_451942_487684 = 0L;
  /* VAR */ long mallocSym_452161_487685 = 0L;
  /* VAR */ long mallocSym_451978_487686 = 0L;
  /* VAR */ long mallocSym_451958_487687 = 0L;
  /* VAR */ long mallocSym_452181_487688 = 0L;
  FILE* x450215 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x450216 = 0;
  numeric_int_t x450217 = x450216;
  numeric_int_t* x450218 = &x450217;
  numeric_int_t x450219 = fscanf(x450215, "%d", x450218);
  pclose(x450215);
  struct LINEITEMRecord* x487695 = (struct LINEITEMRecord*)malloc(x450217 * sizeof(struct LINEITEMRecord));
  memset(x487695, 0, x450217 * sizeof(struct LINEITEMRecord));
  long x487696 = mallocSym_451789_487674;
  mallocSym_451789_487674 = (x487696+(((long){x450217})));
  numeric_int_t x450223 = O_RDONLY;
  numeric_int_t x450224 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x450223);
  struct stat x450225 = (struct stat){0};
  /* VAR */ struct stat x450226 = x450225;
  struct stat x450227 = x450226;
  struct stat* x450228 = &x450227;
  numeric_int_t x450229 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x450228);
  numeric_int_t x450231 = PROT_READ;
  numeric_int_t x450232 = MAP_PRIVATE;
  char* x437667 = mmap(NULL, (x450228->st_size), x450231, x450232, x450224, 0);
  /* VAR */ numeric_int_t x437668 = 0;
  while(1) {
    
    numeric_int_t x437669 = x437668;
    /* VAR */ boolean_t ite469281 = 0;
    if((x437669<(x450217))) {
      char x481518 = *x437667;
      ite469281 = (x481518!=('\0'));
    } else {
      
      ite469281 = 0;
    };
    boolean_t x466778 = ite469281;
    if (!(x466778)) break; 
    
    /* VAR */ numeric_int_t x450240 = 0;
    numeric_int_t x450241 = x450240;
    numeric_int_t* x450242 = &x450241;
    char* x450243 = strntoi_unchecked(x437667, x450242);
    x437667 = x450243;
    /* VAR */ numeric_int_t x450245 = 0;
    numeric_int_t x450246 = x450245;
    numeric_int_t* x450247 = &x450246;
    char* x450248 = strntoi_unchecked(x437667, x450247);
    x437667 = x450248;
    /* VAR */ numeric_int_t x450250 = 0;
    numeric_int_t x450251 = x450250;
    numeric_int_t* x450252 = &x450251;
    char* x450253 = strntoi_unchecked(x437667, x450252);
    x437667 = x450253;
    /* VAR */ numeric_int_t x450255 = 0;
    numeric_int_t x450256 = x450255;
    numeric_int_t* x450257 = &x450256;
    char* x450258 = strntoi_unchecked(x437667, x450257);
    x437667 = x450258;
    /* VAR */ double x450260 = 0.0;
    double x450261 = x450260;
    double* x450262 = &x450261;
    char* x450263 = strntod_unchecked(x437667, x450262);
    x437667 = x450263;
    /* VAR */ double x450265 = 0.0;
    double x450266 = x450265;
    double* x450267 = &x450266;
    char* x450268 = strntod_unchecked(x437667, x450267);
    x437667 = x450268;
    /* VAR */ double x450270 = 0.0;
    double x450271 = x450270;
    double* x450272 = &x450271;
    char* x450273 = strntod_unchecked(x437667, x450272);
    x437667 = x450273;
    /* VAR */ double x450275 = 0.0;
    double x450276 = x450275;
    double* x450277 = &x450276;
    char* x450278 = strntod_unchecked(x437667, x450277);
    x437667 = x450278;
    char x450280 = *x437667;
    /* VAR */ char x450281 = x450280;
    x437667 += 1;
    x437667 += 1;
    char x450284 = x450281;
    char x450285 = *x437667;
    /* VAR */ char x450286 = x450285;
    x437667 += 1;
    x437667 += 1;
    /* VAR */ numeric_int_t x450290 = 0;
    numeric_int_t x450291 = x450290;
    numeric_int_t* x450292 = &x450291;
    char* x450293 = strntoi_unchecked(x437667, x450292);
    x437667 = x450293;
    /* VAR */ numeric_int_t x450295 = 0;
    numeric_int_t x450296 = x450295;
    numeric_int_t* x450297 = &x450296;
    char* x450298 = strntoi_unchecked(x437667, x450297);
    x437667 = x450298;
    /* VAR */ numeric_int_t x450300 = 0;
    numeric_int_t x450301 = x450300;
    numeric_int_t* x450302 = &x450301;
    char* x450303 = strntoi_unchecked(x437667, x450302);
    x437667 = x450303;
    /* VAR */ numeric_int_t x450309 = 0;
    numeric_int_t x450310 = x450309;
    numeric_int_t* x450311 = &x450310;
    char* x450312 = strntoi_unchecked(x437667, x450311);
    x437667 = x450312;
    /* VAR */ numeric_int_t x450314 = 0;
    numeric_int_t x450315 = x450314;
    numeric_int_t* x450316 = &x450315;
    char* x450317 = strntoi_unchecked(x437667, x450316);
    x437667 = x450317;
    /* VAR */ numeric_int_t x450319 = 0;
    numeric_int_t x450320 = x450319;
    numeric_int_t* x450321 = &x450320;
    char* x450322 = strntoi_unchecked(x437667, x450321);
    x437667 = x450322;
    /* VAR */ numeric_int_t x450328 = 0;
    numeric_int_t x450329 = x450328;
    numeric_int_t* x450330 = &x450329;
    char* x450331 = strntoi_unchecked(x437667, x450330);
    x437667 = x450331;
    /* VAR */ numeric_int_t x450333 = 0;
    numeric_int_t x450334 = x450333;
    numeric_int_t* x450335 = &x450334;
    char* x450336 = strntoi_unchecked(x437667, x450335);
    x437667 = x450336;
    /* VAR */ numeric_int_t x450338 = 0;
    numeric_int_t x450339 = x450338;
    numeric_int_t* x450340 = &x450339;
    char* x450341 = strntoi_unchecked(x437667, x450340);
    x437667 = x450341;
    /* VAR */ char* x450347 = x437667;
    while(1) {
      
      char x450348 = *x437667;
      /* VAR */ boolean_t ite469401 = 0;
      if((x450348!=('|'))) {
        char x481637 = *x437667;
        ite469401 = (x481637!=('\n'));
      } else {
        
        ite469401 = 0;
      };
      boolean_t x466891 = ite469401;
      if (!(x466891)) break; 
      
      x437667 += 1;
    };
    char* x450355 = x450347;
    numeric_int_t x450356 = x437667 - x450355;
    numeric_int_t x450357 = x450356+(1);
    char* x487846 = (char*)malloc(x450357 * sizeof(char));
    memset(x487846, 0, x450357 * sizeof(char));
    long x487847 = mallocSym_451926_487668;
    mallocSym_451926_487668 = (x487847+(((long){x450357})));
    char* x450360 = x450347;
    char* x450361 = strncpy(x487846, x450360, x450356);
    x437667 += 1;
    /* VAR */ char* x450363 = x437667;
    while(1) {
      
      char x450364 = *x437667;
      /* VAR */ boolean_t ite469422 = 0;
      if((x450364!=('|'))) {
        char x481657 = *x437667;
        ite469422 = (x481657!=('\n'));
      } else {
        
        ite469422 = 0;
      };
      boolean_t x466905 = ite469422;
      if (!(x466905)) break; 
      
      x437667 += 1;
    };
    char* x450371 = x450363;
    numeric_int_t x450372 = x437667 - x450371;
    numeric_int_t x450373 = x450372+(1);
    char* x487870 = (char*)malloc(x450373 * sizeof(char));
    memset(x487870, 0, x450373 * sizeof(char));
    long x487871 = mallocSym_451942_487684;
    mallocSym_451942_487684 = (x487871+(((long){x450373})));
    char* x450376 = x450363;
    char* x450377 = strncpy(x487870, x450376, x450372);
    x437667 += 1;
    /* VAR */ char* x450379 = x437667;
    while(1) {
      
      char x450380 = *x437667;
      /* VAR */ boolean_t ite469443 = 0;
      if((x450380!=('|'))) {
        char x481677 = *x437667;
        ite469443 = (x481677!=('\n'));
      } else {
        
        ite469443 = 0;
      };
      boolean_t x466919 = ite469443;
      if (!(x466919)) break; 
      
      x437667 += 1;
    };
    char* x450387 = x450379;
    numeric_int_t x450388 = x437667 - x450387;
    numeric_int_t x450389 = x450388+(1);
    char* x487894 = (char*)malloc(x450389 * sizeof(char));
    memset(x487894, 0, x450389 * sizeof(char));
    long x487895 = mallocSym_451958_487687;
    mallocSym_451958_487687 = (x487895+(((long){x450389})));
    char* x450392 = x450379;
    char* x450393 = strncpy(x487894, x450392, x450388);
    x437667 += 1;
    struct LINEITEMRecord* x487902 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x487902, 0, 1 * sizeof(struct LINEITEMRecord));
    long x487903 = mallocSym_452774_487662;
    mallocSym_452774_487662 = (x487903+(((long){1})));
    x487902->L_ORDERKEY = x450241; x487902->L_EXTENDEDPRICE = x450266; x487902->L_DISCOUNT = x450271; x487902->L_RETURNFLAG = x450284;
    numeric_int_t x437690 = x437668;
    struct LINEITEMRecord x451965 = *x487902;
    *(x487695 + x437690) = x451965;
    struct LINEITEMRecord* x451967 = &(x487695[x437690]);
    x487902 = x451967;
    numeric_int_t x437692 = x437668;
    x437668 = (x437692+(1));
  };
  FILE* x450401 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ numeric_int_t x450402 = 0;
  numeric_int_t x450403 = x450402;
  numeric_int_t* x450404 = &x450403;
  numeric_int_t x450405 = fscanf(x450401, "%d", x450404);
  pclose(x450401);
  struct NATIONRecord* x487923 = (struct NATIONRecord*)malloc(x450403 * sizeof(struct NATIONRecord));
  memset(x487923, 0, x450403 * sizeof(struct NATIONRecord));
  long x487924 = mallocSym_451978_487686;
  mallocSym_451978_487686 = (x487924+(((long){x450403})));
  numeric_int_t x450409 = O_RDONLY;
  numeric_int_t x450410 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x450409);
  /* VAR */ struct stat x450411 = x450225;
  struct stat x450412 = x450411;
  struct stat* x450413 = &x450412;
  numeric_int_t x450414 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x450413);
  numeric_int_t x450416 = PROT_READ;
  numeric_int_t x450417 = MAP_PRIVATE;
  char* x437698 = mmap(NULL, (x450413->st_size), x450416, x450417, x450410, 0);
  /* VAR */ numeric_int_t x437699 = 0;
  while(1) {
    
    numeric_int_t x437700 = x437699;
    /* VAR */ boolean_t ite469492 = 0;
    if((x437700<(x450403))) {
      char x481725 = *x437698;
      ite469492 = (x481725!=('\0'));
    } else {
      
      ite469492 = 0;
    };
    boolean_t x466961 = ite469492;
    if (!(x466961)) break; 
    
    /* VAR */ numeric_int_t x450425 = 0;
    numeric_int_t x450426 = x450425;
    numeric_int_t* x450427 = &x450426;
    char* x450428 = strntoi_unchecked(x437698, x450427);
    x437698 = x450428;
    /* VAR */ char* x450430 = x437698;
    while(1) {
      
      char x450431 = *x437698;
      /* VAR */ boolean_t ite469510 = 0;
      if((x450431!=('|'))) {
        char x481742 = *x437698;
        ite469510 = (x481742!=('\n'));
      } else {
        
        ite469510 = 0;
      };
      boolean_t x466972 = ite469510;
      if (!(x466972)) break; 
      
      x437698 += 1;
    };
    char* x450438 = x450430;
    numeric_int_t x450439 = x437698 - x450438;
    numeric_int_t x450440 = x450439+(1);
    char* x487971 = (char*)malloc(x450440 * sizeof(char));
    memset(x487971, 0, x450440 * sizeof(char));
    long x487972 = mallocSym_452012_487667;
    mallocSym_452012_487667 = (x487972+(((long){x450440})));
    char* x450443 = x450430;
    char* x450444 = strncpy(x487971, x450443, x450439);
    x437698 += 1;
    /* VAR */ numeric_int_t x450446 = 0;
    numeric_int_t x450447 = x450446;
    numeric_int_t* x450448 = &x450447;
    char* x450449 = strntoi_unchecked(x437698, x450448);
    x437698 = x450449;
    /* VAR */ char* x450451 = x437698;
    while(1) {
      
      char x450452 = *x437698;
      /* VAR */ boolean_t ite469536 = 0;
      if((x450452!=('|'))) {
        char x481767 = *x437698;
        ite469536 = (x481767!=('\n'));
      } else {
        
        ite469536 = 0;
      };
      boolean_t x466991 = ite469536;
      if (!(x466991)) break; 
      
      x437698 += 1;
    };
    char* x450459 = x450451;
    numeric_int_t x450460 = x437698 - x450459;
    numeric_int_t x450461 = x450460+(1);
    char* x488000 = (char*)malloc(x450461 * sizeof(char));
    memset(x488000, 0, x450461 * sizeof(char));
    long x488001 = mallocSym_452033_487651;
    mallocSym_452033_487651 = (x488001+(((long){x450461})));
    char* x450464 = x450451;
    char* x450465 = strncpy(x488000, x450464, x450460);
    x437698 += 1;
    struct NATIONRecord* x488008 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x488008, 0, 1 * sizeof(struct NATIONRecord));
    long x488009 = mallocSym_452851_487656;
    mallocSym_452851_487656 = (x488009+(((long){1})));
    x488008->N_NATIONKEY = x450426; x488008->N_NAME = x487971;
    numeric_int_t x437709 = x437699;
    struct NATIONRecord x452040 = *x488008;
    *(x487923 + x437709) = x452040;
    struct NATIONRecord* x452042 = &(x487923[x437709]);
    x488008 = x452042;
    numeric_int_t x437711 = x437699;
    x437699 = (x437711+(1));
  };
  FILE* x450473 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ numeric_int_t x450474 = 0;
  numeric_int_t x450475 = x450474;
  numeric_int_t* x450476 = &x450475;
  numeric_int_t x450477 = fscanf(x450473, "%d", x450476);
  pclose(x450473);
  struct CUSTOMERRecord* x488029 = (struct CUSTOMERRecord*)malloc(x450475 * sizeof(struct CUSTOMERRecord));
  memset(x488029, 0, x450475 * sizeof(struct CUSTOMERRecord));
  long x488030 = mallocSym_452053_487666;
  mallocSym_452053_487666 = (x488030+(((long){x450475})));
  numeric_int_t x450481 = O_RDONLY;
  numeric_int_t x450482 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x450481);
  /* VAR */ struct stat x450483 = x450225;
  struct stat x450484 = x450483;
  struct stat* x450485 = &x450484;
  numeric_int_t x450486 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x450485);
  numeric_int_t x450488 = PROT_READ;
  numeric_int_t x450489 = MAP_PRIVATE;
  char* x437717 = mmap(NULL, (x450485->st_size), x450488, x450489, x450482, 0);
  /* VAR */ numeric_int_t x437718 = 0;
  while(1) {
    
    numeric_int_t x437719 = x437718;
    /* VAR */ boolean_t ite469585 = 0;
    if((x437719<(x450475))) {
      char x481815 = *x437717;
      ite469585 = (x481815!=('\0'));
    } else {
      
      ite469585 = 0;
    };
    boolean_t x467033 = ite469585;
    if (!(x467033)) break; 
    
    /* VAR */ numeric_int_t x450497 = 0;
    numeric_int_t x450498 = x450497;
    numeric_int_t* x450499 = &x450498;
    char* x450500 = strntoi_unchecked(x437717, x450499);
    x437717 = x450500;
    /* VAR */ char* x450502 = x437717;
    while(1) {
      
      char x450503 = *x437717;
      /* VAR */ boolean_t ite469603 = 0;
      if((x450503!=('|'))) {
        char x481832 = *x437717;
        ite469603 = (x481832!=('\n'));
      } else {
        
        ite469603 = 0;
      };
      boolean_t x467044 = ite469603;
      if (!(x467044)) break; 
      
      x437717 += 1;
    };
    char* x450510 = x450502;
    numeric_int_t x450511 = x437717 - x450510;
    numeric_int_t x450512 = x450511+(1);
    char* x488077 = (char*)malloc(x450512 * sizeof(char));
    memset(x488077, 0, x450512 * sizeof(char));
    long x488078 = mallocSym_452087_487661;
    mallocSym_452087_487661 = (x488078+(((long){x450512})));
    char* x450515 = x450502;
    char* x450516 = strncpy(x488077, x450515, x450511);
    x437717 += 1;
    /* VAR */ char* x450518 = x437717;
    while(1) {
      
      char x450519 = *x437717;
      /* VAR */ boolean_t ite469624 = 0;
      if((x450519!=('|'))) {
        char x481852 = *x437717;
        ite469624 = (x481852!=('\n'));
      } else {
        
        ite469624 = 0;
      };
      boolean_t x467058 = ite469624;
      if (!(x467058)) break; 
      
      x437717 += 1;
    };
    char* x450526 = x450518;
    numeric_int_t x450527 = x437717 - x450526;
    numeric_int_t x450528 = x450527+(1);
    char* x488101 = (char*)malloc(x450528 * sizeof(char));
    memset(x488101, 0, x450528 * sizeof(char));
    long x488102 = mallocSym_452103_487650;
    mallocSym_452103_487650 = (x488102+(((long){x450528})));
    char* x450531 = x450518;
    char* x450532 = strncpy(x488101, x450531, x450527);
    x437717 += 1;
    /* VAR */ numeric_int_t x450534 = 0;
    numeric_int_t x450535 = x450534;
    numeric_int_t* x450536 = &x450535;
    char* x450537 = strntoi_unchecked(x437717, x450536);
    x437717 = x450537;
    /* VAR */ char* x450539 = x437717;
    while(1) {
      
      char x450540 = *x437717;
      /* VAR */ boolean_t ite469650 = 0;
      if((x450540!=('|'))) {
        char x481877 = *x437717;
        ite469650 = (x481877!=('\n'));
      } else {
        
        ite469650 = 0;
      };
      boolean_t x467077 = ite469650;
      if (!(x467077)) break; 
      
      x437717 += 1;
    };
    char* x450547 = x450539;
    numeric_int_t x450548 = x437717 - x450547;
    numeric_int_t x450549 = x450548+(1);
    char* x488130 = (char*)malloc(x450549 * sizeof(char));
    memset(x488130, 0, x450549 * sizeof(char));
    long x488131 = mallocSym_452124_487646;
    mallocSym_452124_487646 = (x488131+(((long){x450549})));
    char* x450552 = x450539;
    char* x450553 = strncpy(x488130, x450552, x450548);
    x437717 += 1;
    /* VAR */ double x450555 = 0.0;
    double x450556 = x450555;
    double* x450557 = &x450556;
    char* x450558 = strntod_unchecked(x437717, x450557);
    x437717 = x450558;
    /* VAR */ char* x450560 = x437717;
    while(1) {
      
      char x450561 = *x437717;
      /* VAR */ boolean_t ite469676 = 0;
      if((x450561!=('|'))) {
        char x481902 = *x437717;
        ite469676 = (x481902!=('\n'));
      } else {
        
        ite469676 = 0;
      };
      boolean_t x467096 = ite469676;
      if (!(x467096)) break; 
      
      x437717 += 1;
    };
    char* x450568 = x450560;
    numeric_int_t x450569 = x437717 - x450568;
    numeric_int_t x450570 = x450569+(1);
    char* x488159 = (char*)malloc(x450570 * sizeof(char));
    memset(x488159, 0, x450570 * sizeof(char));
    long x488160 = mallocSym_452145_487669;
    mallocSym_452145_487669 = (x488160+(((long){x450570})));
    char* x450573 = x450560;
    char* x450574 = strncpy(x488159, x450573, x450569);
    x437717 += 1;
    /* VAR */ char* x450576 = x437717;
    while(1) {
      
      char x450577 = *x437717;
      /* VAR */ boolean_t ite469697 = 0;
      if((x450577!=('|'))) {
        char x481922 = *x437717;
        ite469697 = (x481922!=('\n'));
      } else {
        
        ite469697 = 0;
      };
      boolean_t x467110 = ite469697;
      if (!(x467110)) break; 
      
      x437717 += 1;
    };
    char* x450584 = x450576;
    numeric_int_t x450585 = x437717 - x450584;
    numeric_int_t x450586 = x450585+(1);
    char* x488183 = (char*)malloc(x450586 * sizeof(char));
    memset(x488183, 0, x450586 * sizeof(char));
    long x488184 = mallocSym_452161_487685;
    mallocSym_452161_487685 = (x488184+(((long){x450586})));
    char* x450589 = x450576;
    char* x450590 = strncpy(x488183, x450589, x450585);
    x437717 += 1;
    struct CUSTOMERRecord* x488191 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x488191, 0, 1 * sizeof(struct CUSTOMERRecord));
    long x488192 = mallocSym_452981_487663;
    mallocSym_452981_487663 = (x488192+(((long){1})));
    x488191->C_CUSTKEY = x450498; x488191->C_NAME = x488077; x488191->C_ADDRESS = x488101; x488191->C_NATIONKEY = x450535; x488191->C_PHONE = x488130; x488191->C_ACCTBAL = x450556; x488191->C_COMMENT = x488183;
    numeric_int_t x437732 = x437718;
    struct CUSTOMERRecord x452168 = *x488191;
    *(x488029 + x437732) = x452168;
    struct CUSTOMERRecord* x452170 = &(x488029[x437732]);
    x488191 = x452170;
    numeric_int_t x437734 = x437718;
    x437718 = (x437734+(1));
  };
  FILE* x450598 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ numeric_int_t x450599 = 0;
  numeric_int_t x450600 = x450599;
  numeric_int_t* x450601 = &x450600;
  numeric_int_t x450602 = fscanf(x450598, "%d", x450601);
  pclose(x450598);
  struct ORDERSRecord* x488212 = (struct ORDERSRecord*)malloc(x450600 * sizeof(struct ORDERSRecord));
  memset(x488212, 0, x450600 * sizeof(struct ORDERSRecord));
  long x488213 = mallocSym_452181_487688;
  mallocSym_452181_487688 = (x488213+(((long){x450600})));
  numeric_int_t x450606 = O_RDONLY;
  numeric_int_t x450607 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x450606);
  /* VAR */ struct stat x450608 = x450225;
  struct stat x450609 = x450608;
  struct stat* x450610 = &x450609;
  numeric_int_t x450611 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x450610);
  numeric_int_t x450613 = PROT_READ;
  numeric_int_t x450614 = MAP_PRIVATE;
  char* x437740 = mmap(NULL, (x450610->st_size), x450613, x450614, x450607, 0);
  /* VAR */ numeric_int_t x437741 = 0;
  while(1) {
    
    numeric_int_t x437742 = x437741;
    /* VAR */ boolean_t ite469746 = 0;
    if((x437742<(x450600))) {
      char x481970 = *x437740;
      ite469746 = (x481970!=('\0'));
    } else {
      
      ite469746 = 0;
    };
    boolean_t x467152 = ite469746;
    if (!(x467152)) break; 
    
    /* VAR */ numeric_int_t x450622 = 0;
    numeric_int_t x450623 = x450622;
    numeric_int_t* x450624 = &x450623;
    char* x450625 = strntoi_unchecked(x437740, x450624);
    x437740 = x450625;
    /* VAR */ numeric_int_t x450627 = 0;
    numeric_int_t x450628 = x450627;
    numeric_int_t* x450629 = &x450628;
    char* x450630 = strntoi_unchecked(x437740, x450629);
    x437740 = x450630;
    char x450632 = *x437740;
    /* VAR */ char x450633 = x450632;
    x437740 += 1;
    x437740 += 1;
    /* VAR */ double x450637 = 0.0;
    double x450638 = x450637;
    double* x450639 = &x450638;
    char* x450640 = strntod_unchecked(x437740, x450639);
    x437740 = x450640;
    /* VAR */ numeric_int_t x450642 = 0;
    numeric_int_t x450643 = x450642;
    numeric_int_t* x450644 = &x450643;
    char* x450645 = strntoi_unchecked(x437740, x450644);
    x437740 = x450645;
    /* VAR */ numeric_int_t x450647 = 0;
    numeric_int_t x450648 = x450647;
    numeric_int_t* x450649 = &x450648;
    char* x450650 = strntoi_unchecked(x437740, x450649);
    x437740 = x450650;
    /* VAR */ numeric_int_t x450652 = 0;
    numeric_int_t x450653 = x450652;
    numeric_int_t* x450654 = &x450653;
    char* x450655 = strntoi_unchecked(x437740, x450654);
    x437740 = x450655;
    /* VAR */ char* x450661 = x437740;
    while(1) {
      
      char x450662 = *x437740;
      /* VAR */ boolean_t ite469798 = 0;
      if((x450662!=('|'))) {
        char x482021 = *x437740;
        ite469798 = (x482021!=('\n'));
      } else {
        
        ite469798 = 0;
      };
      boolean_t x467197 = ite469798;
      if (!(x467197)) break; 
      
      x437740 += 1;
    };
    char* x450669 = x450661;
    numeric_int_t x450670 = x437740 - x450669;
    numeric_int_t x450671 = x450670+(1);
    char* x488294 = (char*)malloc(x450671 * sizeof(char));
    memset(x488294, 0, x450671 * sizeof(char));
    long x488295 = mallocSym_452249_487660;
    mallocSym_452249_487660 = (x488295+(((long){x450671})));
    char* x450674 = x450661;
    char* x450675 = strncpy(x488294, x450674, x450670);
    x437740 += 1;
    /* VAR */ char* x450677 = x437740;
    while(1) {
      
      char x450678 = *x437740;
      /* VAR */ boolean_t ite469819 = 0;
      if((x450678!=('|'))) {
        char x482041 = *x437740;
        ite469819 = (x482041!=('\n'));
      } else {
        
        ite469819 = 0;
      };
      boolean_t x467211 = ite469819;
      if (!(x467211)) break; 
      
      x437740 += 1;
    };
    char* x450685 = x450677;
    numeric_int_t x450686 = x437740 - x450685;
    numeric_int_t x450687 = x450686+(1);
    char* x488318 = (char*)malloc(x450687 * sizeof(char));
    memset(x488318, 0, x450687 * sizeof(char));
    long x488319 = mallocSym_452265_487657;
    mallocSym_452265_487657 = (x488319+(((long){x450687})));
    char* x450690 = x450677;
    char* x450691 = strncpy(x488318, x450690, x450686);
    x437740 += 1;
    /* VAR */ numeric_int_t x450693 = 0;
    numeric_int_t x450694 = x450693;
    numeric_int_t* x450695 = &x450694;
    char* x450696 = strntoi_unchecked(x437740, x450695);
    x437740 = x450696;
    /* VAR */ char* x450698 = x437740;
    while(1) {
      
      char x450699 = *x437740;
      /* VAR */ boolean_t ite469845 = 0;
      if((x450699!=('|'))) {
        char x482066 = *x437740;
        ite469845 = (x482066!=('\n'));
      } else {
        
        ite469845 = 0;
      };
      boolean_t x467230 = ite469845;
      if (!(x467230)) break; 
      
      x437740 += 1;
    };
    char* x450706 = x450698;
    numeric_int_t x450707 = x437740 - x450706;
    numeric_int_t x450708 = x450707+(1);
    char* x488347 = (char*)malloc(x450708 * sizeof(char));
    memset(x488347, 0, x450708 * sizeof(char));
    long x488348 = mallocSym_452286_487672;
    mallocSym_452286_487672 = (x488348+(((long){x450708})));
    char* x450711 = x450698;
    char* x450712 = strncpy(x488347, x450711, x450707);
    x437740 += 1;
    struct ORDERSRecord* x488355 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x488355, 0, 1 * sizeof(struct ORDERSRecord));
    long x488356 = mallocSym_453108_487681;
    mallocSym_453108_487681 = (x488356+(((long){1})));
    x488355->O_ORDERKEY = x450623; x488355->O_CUSTKEY = x450628; x488355->O_ORDERDATE = (((x450643*(10000))+((x450648*(100))))+(x450653));
    numeric_int_t x437756 = x437741;
    struct ORDERSRecord x452293 = *x488355;
    *(x488212 + x437756) = x452293;
    struct ORDERSRecord* x452295 = &(x488212[x437756]);
    x488355 = x452295;
    numeric_int_t x437758 = x437741;
    x437741 = (x437758+(1));
  };
  numeric_int_t x437763 = 0;
  for(; x437763 < 1 ; x437763 += 1) {
    
    /* VAR */ numeric_int_t x483332 = 0;
    void* x489665 = (void*)malloc(2097152 * sizeof(void));
    memset(x489665, 0, 2097152 * sizeof(void));
    long x489666 = mallocSym_483333_487677;
    long x489667 = (long){2097152};
    mallocSym_483333_487677 = (x489666+(x489667));
    struct AGGRecord_Q10GRPRecord* x489670 = (struct AGGRecord_Q10GRPRecord*)malloc(2097152 * sizeof(struct AGGRecord_Q10GRPRecord));
    memset(x489670, 0, 2097152 * sizeof(struct AGGRecord_Q10GRPRecord));
    long x489671 = mallocSym_483334_487658;
    mallocSym_483334_487658 = (x489671+(x489667));
    struct LINEITEMRecord** x489674 = (struct LINEITEMRecord**)malloc(60000000 * sizeof(struct LINEITEMRecord*));
    memset(x489674, 0, 60000000 * sizeof(struct LINEITEMRecord*));
    long x489675 = mallocSym_483335_487676;
    long x489676 = (long){60000000};
    mallocSym_483335_487676 = (x489675+(x489676));
    numeric_int_t* x489679 = (numeric_int_t*)malloc(60000000 * sizeof(numeric_int_t));
    memset(x489679, 0, 60000000 * sizeof(numeric_int_t));
    long x489680 = mallocSym_483336_487665;
    mallocSym_483336_487665 = (x489680+(x489676));
    numeric_int_t x463227 = 0;
    for(; x463227 < 60000000 ; x463227 += 1) {
      
      *(x489679 + x463227) = 0;
    };
    /* VAR */ numeric_int_t x483342 = 0;
    numeric_int_t x463242 = 0;
    for(; x463242 < x450217 ; x463242 += 1) {
      
      struct LINEITEMRecord* x463243 = &(x487695[x463242]);
      numeric_int_t x463245 = (x463243->L_ORDERKEY)%(60000000);
      numeric_int_t x463246 = x489679[x463245];
      *(x489679 + x463245) = (x463246+(1));
      numeric_int_t x463249 = x483342;
      x483342 = (x463249+(1));
    };
    numeric_int_t x463259 = 0;
    for(; x463259 < 60000000 ; x463259 += 1) {
      
      numeric_int_t x463260 = x489679[x463259];
      struct LINEITEMRecord* x489722 = (struct LINEITEMRecord*)malloc(x463260 * sizeof(struct LINEITEMRecord));
      memset(x489722, 0, x463260 * sizeof(struct LINEITEMRecord));
      long x489723 = mallocSym_463261_487649;
      mallocSym_463261_487649 = (x489723+(((long){x463260})));
      *(x489674 + x463259) = x489722;
      *(x489679 + x463259) = 0;
    };
    x483342 = 0;
    numeric_int_t x463283 = 0;
    for(; x463283 < x450217 ; x463283 += 1) {
      
      struct LINEITEMRecord* x463284 = &(x487695[x463283]);
      numeric_int_t x463286 = (x463284->L_ORDERKEY)%(60000000);
      numeric_int_t x463287 = x489679[x463286];
      struct LINEITEMRecord* x463288 = x489674[x463286];
      struct LINEITEMRecord x463289 = *x463284;
      *(x463288 + x463287) = x463289;
      struct LINEITEMRecord* x463291 = &(x463288[x463287]);
      x463284 = x463291;
      numeric_int_t x463293 = x489679[x463286];
      *(x489679 + x463286) = (x463293+(1));
      numeric_int_t x463296 = x483342;
      x483342 = (x463296+(1));
    };
    struct ORDERSRecord** x489763 = (struct ORDERSRecord**)malloc(96 * sizeof(struct ORDERSRecord*));
    memset(x489763, 0, 96 * sizeof(struct ORDERSRecord*));
    long x489764 = mallocSym_483409_487653;
    long x489765 = (long){96};
    mallocSym_483409_487653 = (x489764+(x489765));
    numeric_int_t* x489768 = (numeric_int_t*)malloc(96 * sizeof(numeric_int_t));
    memset(x489768, 0, 96 * sizeof(numeric_int_t));
    long x489769 = mallocSym_483410_487655;
    mallocSym_483410_487655 = (x489769+(x489765));
    numeric_int_t x463308 = 0;
    for(; x463308 < 96 ; x463308 += 1) {
      
      numeric_int_t x463310 = (x450600/(96))*(4);
      struct ORDERSRecord* x489785 = (struct ORDERSRecord*)malloc(x463310 * sizeof(struct ORDERSRecord));
      memset(x489785, 0, x463310 * sizeof(struct ORDERSRecord));
      long x489786 = mallocSym_463311_487673;
      mallocSym_463311_487673 = (x489786+(((long){x463310})));
      *(x489763 + x463308) = x489785;
    };
    /* VAR */ numeric_int_t x483422 = 0;
    numeric_int_t x463337 = 0;
    for(; x463337 < x450600 ; x463337 += 1) {
      
      struct ORDERSRecord* x463338 = &(x488212[x463337]);
      numeric_int_t x463340 = (x463338->O_ORDERDATE)/(100);
      numeric_int_t x463346 = (((x463340/(100))-(1992))*(12))+(((x463340%(100))-(1)));
      numeric_int_t x463347 = x489768[x463346];
      struct ORDERSRecord* x463348 = x489763[x463346];
      struct ORDERSRecord x463349 = *x463338;
      *(x463348 + x463347) = x463349;
      struct ORDERSRecord* x463351 = &(x463348[x463347]);
      x463338 = x463351;
      *(x489768 + x463346) = (x463347+(1));
      numeric_int_t x463355 = x483422;
      x483422 = (x463355+(1));
    };
    /* VAR */ numeric_int_t x483466 = 0;
    struct Q10GRPRecord* x489836 = (struct Q10GRPRecord*)malloc(48000000 * sizeof(struct Q10GRPRecord));
    memset(x489836, 0, 48000000 * sizeof(struct Q10GRPRecord));
    long x489837 = mallocSym_483467_487659;
    mallocSym_483467_487659 = (x489837+(((long){48000000})));
    /* VAR */ numeric_int_t x483468 = 0;
    while(1) {
      
      numeric_int_t x449508 = x483468;
      if (!((x449508<(48000000)))) break; 
      
      numeric_int_t x449510 = x483468;
      struct Q10GRPRecord* x489846 = (struct Q10GRPRecord*)malloc(1 * sizeof(struct Q10GRPRecord));
      memset(x489846, 0, 1 * sizeof(struct Q10GRPRecord));
      long x489847 = mallocSym_453216_487680;
      mallocSym_453216_487680 = (x489847+(((long){1})));
      x489846->C_CUSTKEY = 0; x489846->C_NAME = ""; x489846->C_ACCTBAL = 0.0; x489846->C_PHONE = ""; x489846->N_NAME = ""; x489846->C_ADDRESS = ""; x489846->C_COMMENT = "";
      struct Q10GRPRecord x452398 = *x489846;
      *(x489836 + x449510) = x452398;
      struct Q10GRPRecord* x452400 = &(x489836[x449510]);
      x489846 = x452400;
      numeric_int_t x449513 = x483468;
      x483468 = (x449513+(1));
    };
    /* VAR */ numeric_int_t x483483 = 0;
    struct AGGRecord_Q10GRPRecord* x489861 = (struct AGGRecord_Q10GRPRecord*)malloc(1200000 * sizeof(struct AGGRecord_Q10GRPRecord));
    memset(x489861, 0, 1200000 * sizeof(struct AGGRecord_Q10GRPRecord));
    long x489862 = mallocSym_483484_487670;
    mallocSym_483484_487670 = (x489862+(((long){1200000})));
    /* VAR */ numeric_int_t x483485 = 0;
    while(1) {
      
      numeric_int_t x449520 = x483485;
      if (!((x449520<(1200000)))) break; 
      
      numeric_int_t x449522 = x483485;
      struct Q10GRPRecord* x449523 = &(x489836[x449522]);
      struct AGGRecord_Q10GRPRecord* x489872 = (struct AGGRecord_Q10GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q10GRPRecord));
      memset(x489872, 0, 1 * sizeof(struct AGGRecord_Q10GRPRecord));
      long x489873 = mallocSym_453234_487679;
      mallocSym_453234_487679 = (x489873+(((long){1})));
      x489872->key = x449523; x489872->aggs = 0.0;
      struct AGGRecord_Q10GRPRecord x452414 = *x489872;
      *(x489861 + x449522) = x452414;
      struct AGGRecord_Q10GRPRecord* x452416 = &(x489861[x449522]);
      x489872 = x452416;
      numeric_int_t x449526 = x483485;
      x483485 = (x449526+(1));
    };
    struct timeval x483501 = (struct timeval){0};
    /* VAR */ struct timeval x483502 = x483501;
    struct timeval x483503 = x483502;
    /* VAR */ struct timeval x483504 = x483501;
    struct timeval x483505 = x483504;
    /* VAR */ struct timeval x483506 = x483501;
    struct timeval x483507 = x483506;
    struct timeval* x483508 = &x483505;
    gettimeofday(x483508, NULL);
    /* VAR */ numeric_int_t x483510 = 0;
    numeric_int_t* x483549 = &(x483530);
    GTree* x483550 = g_tree_new(x483549);
    /* VAR */ boolean_t x483551 = 0;
    /* VAR */ numeric_int_t x483552 = 0;
    numeric_int_t x463793 = 34;
    for(; x463793 < 38 ; x463793 += 1) {
      
      numeric_int_t x463794 = x489768[x463793];
      struct ORDERSRecord* x463795 = x489763[x463793];
      numeric_int_t x463612 = 0;
      for(; x463612 < x463794 ; x463612 += 1) {
        
        struct ORDERSRecord* x463613 = &(x463795[x463612]);
        numeric_int_t x463614 = x463613->O_ORDERDATE;
        /* VAR */ boolean_t ite471840 = 0;
        if((x463614>=(19941101))) {
          ite471840 = (x463614<(19950201));
        } else {
          
          ite471840 = 0;
        };
        boolean_t x469025 = ite471840;
        if(x469025) {
          numeric_int_t x437932 = x463613->O_ORDERKEY;
          numeric_int_t x446303 = x437932%(60000000);
          numeric_int_t x446304 = x489679[x446303];
          struct LINEITEMRecord* x446305 = x489674[x446303];
          numeric_int_t x463527 = 0;
          for(; x463527 < x446304 ; x463527 += 1) {
            
            struct LINEITEMRecord* x463528 = &(x446305[x463527]);
            if(((x463528->L_RETURNFLAG)==('R'))) {
              if(((x463528->L_ORDERKEY)==(x437932))) {
                if(((x463528->L_ORDERKEY)==(x437932))) {
                  numeric_int_t x439067 = x463613->O_CUSTKEY;
                  struct CUSTOMERRecord* x446323 = &(x488029[(x439067-(1))]);
                  if(((x446323->C_CUSTKEY)==(x439067))) {
                    numeric_int_t x442543 = x446323->C_CUSTKEY;
                    if((x442543==(x439067))) {
                      numeric_int_t x439227 = x446323->C_NATIONKEY;
                      struct NATIONRecord* x446337 = &(x487923[(x439227-(0))]);
                      if(((x446337->N_NATIONKEY)==(x439227))) {
                        if(((x446337->N_NATIONKEY)==(x439227))) {
                          numeric_int_t x449604 = x483466;
                          struct Q10GRPRecord* x449605 = &(x489836[x449604]);
                          x449605->C_CUSTKEY = x442543;
                          x449605->C_NAME = (x446323->C_NAME);
                          x449605->C_ACCTBAL = (x446323->C_ACCTBAL);
                          x449605->C_PHONE = (x446323->C_PHONE);
                          x449605->N_NAME = (x446337->N_NAME);
                          x449605->C_ADDRESS = (x446323->C_ADDRESS);
                          x449605->C_COMMENT = (x446323->C_COMMENT);
                          numeric_int_t x449613 = x483466;
                          x483466 = (x449613+(1));
                          numeric_int_t x458358 = x449605->C_CUSTKEY;
                          struct AGGRecord_Q10GRPRecord* x443699 = &(x489670[x458358]);
                          numeric_int_t x443700 = x483332;
                          if((x458358>(x443700))) {
                            x483332 = x458358;
                          };
                          /* VAR */ boolean_t ite472002 = 0;
                          if((x443699!=(NULL))) {
                            struct Q10GRPRecord* x484416 = x443699->key;
                            /* VAR */ boolean_t x484418 = 0;
                            if((x484416!=(NULL))) {
                              char* x484420 = x484416->C_NAME;
                              /* VAR */ boolean_t x484422 = 0;
                              if((x484420!=(NULL))) {
                                boolean_t x484424 = strcmp(x484420, "");
                                x484422 = x484424;
                              } else {
                                
                                x484422 = 0;
                              };
                              boolean_t x484428 = x484422;
                              x484418 = x484428;
                            } else {
                              
                              x484418 = 0;
                            };
                            boolean_t x484432 = x484418;
                            ite472002 = x484432;
                          } else {
                            
                            ite472002 = 0;
                          };
                          boolean_t x469172 = ite472002;
                          /* VAR */ struct AGGRecord_Q10GRPRecord* ite469174 = 0;
                          if(x469172) {
                            ite469174 = x443699;
                          } else {
                            
                            /* VAR */ double x469176 = 0;
                            /* VAR */ double x469177 = 0;
                            double x469178 = x469177;
                            numeric_int_t x469179 = x483483;
                            struct AGGRecord_Q10GRPRecord* x469180 = &(x489861[x469179]);
                            x469180->key = x449605;
                            x469180->aggs = x469178;
                            numeric_int_t x469183 = x483483;
                            x483483 = (x469183+(1));
                            struct AGGRecord_Q10GRPRecord x469186 = *x469180;
                            *(x489670 + x458358) = x469186;
                            struct AGGRecord_Q10GRPRecord* x469188 = &(x489670[x458358]);
                            x469180 = x469188;
                            ite469174 = x469180;
                          };
                          struct AGGRecord_Q10GRPRecord* x443707 = ite469174;
                          double x447975 = x443707->aggs;
                          x443707->aggs = (x447975+(((x463528->L_EXTENDEDPRICE)*((1.0-((x463528->L_DISCOUNT)))))));
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
    numeric_int_t x484462 = x483332;
    numeric_int_t x464174 = 0;
    for(; x464174 < (x484462+(1)) ; x464174 += 1) {
      
      struct AGGRecord_Q10GRPRecord* x464175 = &(x489670[x464174]);
      /* VAR */ boolean_t ite472060 = 0;
      if((x464175!=(NULL))) {
        struct Q10GRPRecord* x484498 = x464175->key;
        /* VAR */ boolean_t x484500 = 0;
        if((x484498!=(NULL))) {
          char* x484502 = x484498->C_NAME;
          /* VAR */ boolean_t x484504 = 0;
          if((x484502!=(NULL))) {
            boolean_t x484506 = strcmp(x484502, "");
            x484504 = x484506;
          } else {
            
            x484504 = 0;
          };
          boolean_t x484510 = x484504;
          x484500 = x484510;
        } else {
          
          x484500 = 0;
        };
        boolean_t x484514 = x484500;
        ite472060 = x484514;
      } else {
        
        ite472060 = 0;
      };
      boolean_t x469212 = ite472060;
      if(x469212) {
        g_tree_insert(x483550, x464175, x464175);
      };
    };
    while(1) {
      
      boolean_t x441175 = x483551;
      boolean_t x438396 = !(x441175);
      /* VAR */ boolean_t ite472076 = 0;
      if(x438396) {
        numeric_int_t x484526 = g_tree_nnodes(x483550);
        ite472076 = (x484526!=(0));
      } else {
        
        ite472076 = 0;
      };
      boolean_t x469219 = ite472076;
      if (!(x469219)) break; 
      
      void* x455036 = NULL;
      void** x455044 = &(x455036);
      g_tree_foreach(x483550, x455043, x455044);
      struct AGGRecord_Q10GRPRecord* x455046 = (struct AGGRecord_Q10GRPRecord*){x455036};
      numeric_int_t x455047 = g_tree_remove(x483550, x455046);
      numeric_int_t x441183 = x483552;
      if((x441183>=(20))) {
        x483551 = 1;
      } else {
        
        struct Q10GRPRecord* x438408 = x455046->key;
        double x448010 = x455046->aggs;
        printf("%d|%s|%.4f|%.2f|%s|%s|%s|%s\n", (x438408->C_CUSTKEY), (x438408->C_NAME), x448010, (x438408->C_ACCTBAL), (x438408->N_NAME), (x438408->C_ADDRESS), (x438408->C_PHONE), (x438408->C_COMMENT));
        numeric_int_t x441203 = x483552;
        x483552 = (x441203+(1));
      };
    };
    numeric_int_t x484561 = x483552;
    printf("(%d rows)\n", x484561);
    struct timeval* x484563 = &x483507;
    gettimeofday(x484563, NULL);
    struct timeval* x484565 = &x483503;
    struct timeval* x484566 = &x483507;
    struct timeval* x484567 = &x483505;
    long x484568 = timeval_subtract(x484565, x484566, x484567);
    printf("Generated code run in %ld milliseconds.\n", x484568);
  };
  /* VAR */ long mallocSum490955 = 0L;
  long x490956 = mallocSym_452124_487646;
  numeric_int_t x490957 = sizeof(char);
  long x490959 = x490956*(((long){x490957}));
  printf("488130 with type Byte: %ld\n", x490959);
  long x490961 = mallocSum490955;
  mallocSum490955 = (x490961+(x490959));
  long x490964 = mallocSym_452355_487647;
  numeric_int_t x490965 = sizeof(struct ORDERSRecord*);
  long x490967 = x490964*(((long){x490965}));
  printf("488471 with type Pointer[ORDERSRecord]: %ld\n", x490967);
  long x490969 = mallocSum490955;
  mallocSum490955 = (x490969+(x490967));
  long x490972 = mallocSym_452305_487648;
  numeric_int_t x490973 = sizeof(struct AGGRecord_Q10GRPRecord);
  long x490975 = x490972*(((long){x490973}));
  printf("488378 with type AGGRecord_Q10GRPRecord: %ld\n", x490975);
  long x490977 = mallocSum490955;
  mallocSum490955 = (x490977+(x490975));
  long x490980 = mallocSym_463261_487649;
  numeric_int_t x490981 = sizeof(struct LINEITEMRecord);
  long x490983 = x490980*(((long){x490981}));
  printf("489722 with type LINEITEMRecord: %ld\n", x490983);
  long x490985 = mallocSum490955;
  mallocSum490955 = (x490985+(x490983));
  long x490988 = mallocSym_452103_487650;
  numeric_int_t x490989 = sizeof(char);
  long x490991 = x490988*(((long){x490989}));
  printf("488101 with type Byte: %ld\n", x490991);
  long x490993 = mallocSum490955;
  mallocSum490955 = (x490993+(x490991));
  long x490996 = mallocSym_452033_487651;
  numeric_int_t x490997 = sizeof(char);
  long x490999 = x490996*(((long){x490997}));
  printf("488000 with type Byte: %ld\n", x490999);
  long x491001 = mallocSum490955;
  mallocSum490955 = (x491001+(x490999));
  long x491004 = mallocSym_452306_487652;
  numeric_int_t x491005 = sizeof(struct LINEITEMRecord*);
  long x491007 = x491004*(((long){x491005}));
  printf("488382 with type Pointer[LINEITEMRecord]: %ld\n", x491007);
  long x491009 = mallocSum490955;
  mallocSum490955 = (x491009+(x491007));
  long x491012 = mallocSym_483409_487653;
  numeric_int_t x491013 = sizeof(struct ORDERSRecord*);
  long x491015 = x491012*(((long){x491013}));
  printf("489763 with type Pointer[ORDERSRecord]: %ld\n", x491015);
  long x491017 = mallocSum490955;
  mallocSum490955 = (x491017+(x491015));
  long x491020 = mallocSym_452406_487654;
  numeric_int_t x491021 = sizeof(struct AGGRecord_Q10GRPRecord);
  long x491023 = x491020*(((long){x491021}));
  printf("488569 with type AGGRecord_Q10GRPRecord: %ld\n", x491023);
  long x491025 = mallocSum490955;
  mallocSum490955 = (x491025+(x491023));
  long x491028 = mallocSym_483410_487655;
  numeric_int_t x491029 = sizeof(numeric_int_t);
  long x491031 = x491028*(((long){x491029}));
  printf("489768 with type Int: %ld\n", x491031);
  long x491033 = mallocSum490955;
  mallocSum490955 = (x491033+(x491031));
  long x491036 = mallocSym_452851_487656;
  numeric_int_t x491037 = sizeof(struct NATIONRecord);
  long x491039 = x491036*(((long){x491037}));
  printf("488008 with type NATIONRecord: %ld\n", x491039);
  long x491041 = mallocSum490955;
  mallocSum490955 = (x491041+(x491039));
  long x491044 = mallocSym_452265_487657;
  numeric_int_t x491045 = sizeof(char);
  long x491047 = x491044*(((long){x491045}));
  printf("488318 with type Byte: %ld\n", x491047);
  long x491049 = mallocSum490955;
  mallocSum490955 = (x491049+(x491047));
  long x491052 = mallocSym_483334_487658;
  numeric_int_t x491053 = sizeof(struct AGGRecord_Q10GRPRecord);
  long x491055 = x491052*(((long){x491053}));
  printf("489670 with type AGGRecord_Q10GRPRecord: %ld\n", x491055);
  long x491057 = mallocSum490955;
  mallocSum490955 = (x491057+(x491055));
  long x491060 = mallocSym_483467_487659;
  numeric_int_t x491061 = sizeof(struct Q10GRPRecord);
  long x491063 = x491060*(((long){x491061}));
  printf("489836 with type Q10GRPRecord: %ld\n", x491063);
  long x491065 = mallocSum490955;
  mallocSum490955 = (x491065+(x491063));
  long x491068 = mallocSym_452249_487660;
  numeric_int_t x491069 = sizeof(char);
  long x491071 = x491068*(((long){x491069}));
  printf("488294 with type Byte: %ld\n", x491071);
  long x491073 = mallocSum490955;
  mallocSum490955 = (x491073+(x491071));
  long x491076 = mallocSym_452087_487661;
  numeric_int_t x491077 = sizeof(char);
  long x491079 = x491076*(((long){x491077}));
  printf("488077 with type Byte: %ld\n", x491079);
  long x491081 = mallocSum490955;
  mallocSum490955 = (x491081+(x491079));
  long x491084 = mallocSym_452774_487662;
  numeric_int_t x491085 = sizeof(struct LINEITEMRecord);
  long x491087 = x491084*(((long){x491085}));
  printf("487902 with type LINEITEMRecord: %ld\n", x491087);
  long x491089 = mallocSum490955;
  mallocSum490955 = (x491089+(x491087));
  long x491092 = mallocSym_452981_487663;
  numeric_int_t x491093 = sizeof(struct CUSTOMERRecord);
  long x491095 = x491092*(((long){x491093}));
  printf("488191 with type CUSTOMERRecord: %ld\n", x491095);
  long x491097 = mallocSum490955;
  mallocSum490955 = (x491097+(x491095));
  long x491100 = mallocSym_452362_487664;
  numeric_int_t x491101 = sizeof(struct ORDERSRecord);
  long x491103 = x491100*(((long){x491101}));
  printf("489776 with type ORDERSRecord: %ld\n", x491103);
  long x491105 = mallocSum490955;
  mallocSum490955 = (x491105+(x491103));
  long x491108 = mallocSym_483336_487665;
  numeric_int_t x491109 = sizeof(numeric_int_t);
  long x491111 = x491108*(((long){x491109}));
  printf("489679 with type Int: %ld\n", x491111);
  long x491113 = mallocSum490955;
  mallocSum490955 = (x491113+(x491111));
  long x491116 = mallocSym_452053_487666;
  numeric_int_t x491117 = sizeof(struct CUSTOMERRecord);
  long x491119 = x491116*(((long){x491117}));
  printf("488029 with type CUSTOMERRecord: %ld\n", x491119);
  long x491121 = mallocSum490955;
  mallocSum490955 = (x491121+(x491119));
  long x491124 = mallocSym_452012_487667;
  numeric_int_t x491125 = sizeof(char);
  long x491127 = x491124*(((long){x491125}));
  printf("487971 with type Byte: %ld\n", x491127);
  long x491129 = mallocSum490955;
  mallocSum490955 = (x491129+(x491127));
  long x491132 = mallocSym_451926_487668;
  numeric_int_t x491133 = sizeof(char);
  long x491135 = x491132*(((long){x491133}));
  printf("487846 with type Byte: %ld\n", x491135);
  long x491137 = mallocSum490955;
  mallocSum490955 = (x491137+(x491135));
  long x491140 = mallocSym_452145_487669;
  numeric_int_t x491141 = sizeof(char);
  long x491143 = x491140*(((long){x491141}));
  printf("488159 with type Byte: %ld\n", x491143);
  long x491145 = mallocSum490955;
  mallocSum490955 = (x491145+(x491143));
  long x491148 = mallocSym_483484_487670;
  numeric_int_t x491149 = sizeof(struct AGGRecord_Q10GRPRecord);
  long x491151 = x491148*(((long){x491149}));
  printf("489861 with type AGGRecord_Q10GRPRecord: %ld\n", x491151);
  long x491153 = mallocSum490955;
  mallocSum490955 = (x491153+(x491151));
  long x491156 = mallocSym_452307_487671;
  numeric_int_t x491157 = sizeof(numeric_int_t);
  long x491159 = x491156*(((long){x491157}));
  printf("488387 with type Int: %ld\n", x491159);
  long x491161 = mallocSum490955;
  mallocSum490955 = (x491161+(x491159));
  long x491164 = mallocSym_452286_487672;
  numeric_int_t x491165 = sizeof(char);
  long x491167 = x491164*(((long){x491165}));
  printf("488347 with type Byte: %ld\n", x491167);
  long x491169 = mallocSum490955;
  mallocSum490955 = (x491169+(x491167));
  long x491172 = mallocSym_463311_487673;
  numeric_int_t x491173 = sizeof(struct ORDERSRecord);
  long x491175 = x491172*(((long){x491173}));
  printf("489785 with type ORDERSRecord: %ld\n", x491175);
  long x491177 = mallocSum490955;
  mallocSum490955 = (x491177+(x491175));
  long x491180 = mallocSym_451789_487674;
  numeric_int_t x491181 = sizeof(struct LINEITEMRecord);
  long x491183 = x491180*(((long){x491181}));
  printf("487695 with type LINEITEMRecord: %ld\n", x491183);
  long x491185 = mallocSum490955;
  mallocSum490955 = (x491185+(x491183));
  long x491188 = mallocSym_452304_487675;
  numeric_int_t x491189 = sizeof(void);
  long x491191 = x491188*(((long){x491189}));
  printf("488373 with type Any: %ld\n", x491191);
  long x491193 = mallocSum490955;
  mallocSum490955 = (x491193+(x491191));
  long x491196 = mallocSym_483335_487676;
  numeric_int_t x491197 = sizeof(struct LINEITEMRecord*);
  long x491199 = x491196*(((long){x491197}));
  printf("489674 with type Pointer[LINEITEMRecord]: %ld\n", x491199);
  long x491201 = mallocSum490955;
  mallocSum490955 = (x491201+(x491199));
  long x491204 = mallocSym_483333_487677;
  numeric_int_t x491205 = sizeof(void);
  long x491207 = x491204*(((long){x491205}));
  printf("489665 with type Any: %ld\n", x491207);
  long x491209 = mallocSum490955;
  mallocSum490955 = (x491209+(x491207));
  long x491212 = mallocSym_452331_487678;
  numeric_int_t x491213 = sizeof(struct LINEITEMRecord);
  long x491215 = x491212*(((long){x491213}));
  printf("489713 with type LINEITEMRecord: %ld\n", x491215);
  long x491217 = mallocSum490955;
  mallocSum490955 = (x491217+(x491215));
  long x491220 = mallocSym_453234_487679;
  numeric_int_t x491221 = sizeof(struct AGGRecord_Q10GRPRecord);
  long x491223 = x491220*(((long){x491221}));
  printf("489872 with type AGGRecord_Q10GRPRecord: %ld\n", x491223);
  long x491225 = mallocSum490955;
  mallocSum490955 = (x491225+(x491223));
  long x491228 = mallocSym_453216_487680;
  numeric_int_t x491229 = sizeof(struct Q10GRPRecord);
  long x491231 = x491228*(((long){x491229}));
  printf("489846 with type Q10GRPRecord: %ld\n", x491231);
  long x491233 = mallocSum490955;
  mallocSum490955 = (x491233+(x491231));
  long x491236 = mallocSym_453108_487681;
  numeric_int_t x491237 = sizeof(struct ORDERSRecord);
  long x491239 = x491236*(((long){x491237}));
  printf("488355 with type ORDERSRecord: %ld\n", x491239);
  long x491241 = mallocSum490955;
  mallocSum490955 = (x491241+(x491239));
  long x491244 = mallocSym_452356_487682;
  numeric_int_t x491245 = sizeof(numeric_int_t);
  long x491247 = x491244*(((long){x491245}));
  printf("488476 with type Int: %ld\n", x491247);
  long x491249 = mallocSum490955;
  mallocSum490955 = (x491249+(x491247));
  long x491252 = mallocSym_452391_487683;
  numeric_int_t x491253 = sizeof(struct Q10GRPRecord);
  long x491255 = x491252*(((long){x491253}));
  printf("488544 with type Q10GRPRecord: %ld\n", x491255);
  long x491257 = mallocSum490955;
  mallocSum490955 = (x491257+(x491255));
  long x491260 = mallocSym_451942_487684;
  numeric_int_t x491261 = sizeof(char);
  long x491263 = x491260*(((long){x491261}));
  printf("487870 with type Byte: %ld\n", x491263);
  long x491265 = mallocSum490955;
  mallocSum490955 = (x491265+(x491263));
  long x491268 = mallocSym_452161_487685;
  numeric_int_t x491269 = sizeof(char);
  long x491271 = x491268*(((long){x491269}));
  printf("488183 with type Byte: %ld\n", x491271);
  long x491273 = mallocSum490955;
  mallocSum490955 = (x491273+(x491271));
  long x491276 = mallocSym_451978_487686;
  numeric_int_t x491277 = sizeof(struct NATIONRecord);
  long x491279 = x491276*(((long){x491277}));
  printf("487923 with type NATIONRecord: %ld\n", x491279);
  long x491281 = mallocSum490955;
  mallocSum490955 = (x491281+(x491279));
  long x491284 = mallocSym_451958_487687;
  numeric_int_t x491285 = sizeof(char);
  long x491287 = x491284*(((long){x491285}));
  printf("487894 with type Byte: %ld\n", x491287);
  long x491289 = mallocSum490955;
  mallocSum490955 = (x491289+(x491287));
  long x491292 = mallocSym_452181_487688;
  numeric_int_t x491293 = sizeof(struct ORDERSRecord);
  long x491295 = x491292*(((long){x491293}));
  printf("488212 with type ORDERSRecord: %ld\n", x491295);
  long x491297 = mallocSum490955;
  mallocSum490955 = (x491297+(x491295));
  long x491300 = mallocSum490955;
  printf("total: %ld\n", x491300);
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x483530(struct AGGRecord_Q10GRPRecord* x437841, struct AGGRecord_Q10GRPRecord* x437842) {
  double x448216 = x437841->aggs;
  double x448218 = x437842->aggs;
  /* VAR */ numeric_int_t ite468461 = 0;
  if((x448216<(x448218))) {
    ite468461 = 1;
  } else {
    
    /* VAR */ numeric_int_t ite468465 = 0;
    if((x448216>(x448218))) {
      ite468465 = -1;
    } else {
      
      ite468465 = 0;
    };
    numeric_int_t x468464 = ite468465;
    ite468461 = x468464;
  };
  numeric_int_t x437850 = ite468461;
  return x437850; 
}

numeric_int_t x455043(void* x455037, void* x455038, void* x455039) {
  pointer_assign(((struct AGGRecord_Q10GRPRecord**){x455039}), ((struct AGGRecord_Q10GRPRecord*){x455038}));
  return 1; 
}
