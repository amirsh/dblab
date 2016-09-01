#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct LINEITEMRecord;
struct AGGRecord_OptimalString;
struct ORDERSRecord;
struct LINEITEMRecord {
  numeric_int_t L_ORDERKEY;
  numeric_int_t L_COMMITDATE;
  numeric_int_t L_RECEIPTDATE;
};

struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
  struct AGGRecord_OptimalString* next;
};

struct ORDERSRecord {
  numeric_int_t O_ORDERKEY;
  numeric_int_t O_ORDERDATE;
  char* O_ORDERPRIORITY;
};


numeric_int_t x154968(struct AGGRecord_OptimalString* x122275, struct AGGRecord_OptimalString* x122276);

numeric_int_t x135071(void* x135065, void* x135066, void* x135067);

int main(int argc, char** argv) {
  /* VAR */ long mallocSym_133657_158332 = 0L;
  /* VAR */ long mallocSym_140842_158333 = 0L;
  /* VAR */ long mallocSym_154904_158334 = 0L;
  /* VAR */ long mallocSym_132793_158335 = 0L;
  /* VAR */ long mallocSym_154728_158336 = 0L;
  /* VAR */ long mallocSym_154916_158337 = 0L;
  /* VAR */ long mallocSym_140898_158338 = 0L;
  /* VAR */ long mallocSym_132919_158339 = 0L;
  /* VAR */ long mallocSym_132738_158340 = 0L;
  /* VAR */ long mallocSym_132861_158341 = 0L;
  /* VAR */ long mallocSym_132950_158342 = 0L;
  /* VAR */ long mallocSym_133022_158343 = 0L;
  /* VAR */ long mallocSym_132984_158344 = 0L;
  /* VAR */ long mallocSym_154722_158345 = 0L;
  /* VAR */ long mallocSym_133028_158346 = 0L;
  /* VAR */ long mallocSym_154809_158347 = 0L;
  /* VAR */ long mallocSym_154729_158348 = 0L;
  /* VAR */ long mallocSym_154808_158349 = 0L;
  /* VAR */ long mallocSym_132770_158350 = 0L;
  /* VAR */ long mallocSym_133016_158351 = 0L;
  /* VAR */ long mallocSym_133523_158352 = 0L;
  /* VAR */ long mallocSym_132754_158353 = 0L;
  /* VAR */ long mallocSym_132926_158354 = 0L;
  /* VAR */ long mallocSym_132898_158355 = 0L;
  /* VAR */ long mallocSym_132601_158356 = 0L;
  /* VAR */ long mallocSym_132978_158357 = 0L;
  /* VAR */ long mallocSym_132877_158358 = 0L;
  /* VAR */ long mallocSym_132977_158359 = 0L;
  /* VAR */ long mallocSym_133393_158360 = 0L;
  /* VAR */ long mallocSym_132925_158361 = 0L;
  FILE* x131431 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x131432 = 0;
  numeric_int_t x131433 = x131432;
  numeric_int_t* x131434 = &x131433;
  numeric_int_t x131435 = fscanf(x131431, "%d", x131434);
  pclose(x131431);
  struct LINEITEMRecord* x158368 = (struct LINEITEMRecord*)malloc(x131433 * sizeof(struct LINEITEMRecord));
  memset(x158368, 0, x131433 * sizeof(struct LINEITEMRecord));
  long x158369 = mallocSym_132601_158356;
  mallocSym_132601_158356 = (x158369+(((long){x131433})));
  numeric_int_t x131439 = O_RDONLY;
  numeric_int_t x131440 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x131439);
  struct stat x131441 = (struct stat){0};
  /* VAR */ struct stat x131442 = x131441;
  struct stat x131443 = x131442;
  struct stat* x131444 = &x131443;
  numeric_int_t x131445 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x131444);
  numeric_int_t x131447 = PROT_READ;
  numeric_int_t x131448 = MAP_PRIVATE;
  char* x122180 = mmap(NULL, (x131444->st_size), x131447, x131448, x131440, 0);
  /* VAR */ numeric_int_t x122181 = 0;
  while(1) {
    
    numeric_int_t x122182 = x122181;
    /* VAR */ boolean_t ite145656 = 0;
    if((x122182<(x131433))) {
      char x153290 = *x122180;
      ite145656 = (x153290!=('\0'));
    } else {
      
      ite145656 = 0;
    };
    boolean_t x143708 = ite145656;
    if (!(x143708)) break; 
    
    /* VAR */ numeric_int_t x131456 = 0;
    numeric_int_t x131457 = x131456;
    numeric_int_t* x131458 = &x131457;
    char* x131459 = strntoi_unchecked(x122180, x131458);
    x122180 = x131459;
    /* VAR */ numeric_int_t x131461 = 0;
    numeric_int_t x131462 = x131461;
    numeric_int_t* x131463 = &x131462;
    char* x131464 = strntoi_unchecked(x122180, x131463);
    x122180 = x131464;
    /* VAR */ numeric_int_t x131466 = 0;
    numeric_int_t x131467 = x131466;
    numeric_int_t* x131468 = &x131467;
    char* x131469 = strntoi_unchecked(x122180, x131468);
    x122180 = x131469;
    /* VAR */ numeric_int_t x131471 = 0;
    numeric_int_t x131472 = x131471;
    numeric_int_t* x131473 = &x131472;
    char* x131474 = strntoi_unchecked(x122180, x131473);
    x122180 = x131474;
    /* VAR */ double x131476 = 0.0;
    double x131477 = x131476;
    double* x131478 = &x131477;
    char* x131479 = strntod_unchecked(x122180, x131478);
    x122180 = x131479;
    /* VAR */ double x131481 = 0.0;
    double x131482 = x131481;
    double* x131483 = &x131482;
    char* x131484 = strntod_unchecked(x122180, x131483);
    x122180 = x131484;
    /* VAR */ double x131486 = 0.0;
    double x131487 = x131486;
    double* x131488 = &x131487;
    char* x131489 = strntod_unchecked(x122180, x131488);
    x122180 = x131489;
    /* VAR */ double x131491 = 0.0;
    double x131492 = x131491;
    double* x131493 = &x131492;
    char* x131494 = strntod_unchecked(x122180, x131493);
    x122180 = x131494;
    char x131496 = *x122180;
    /* VAR */ char x131497 = x131496;
    x122180 += 1;
    x122180 += 1;
    char x131501 = *x122180;
    /* VAR */ char x131502 = x131501;
    x122180 += 1;
    x122180 += 1;
    /* VAR */ numeric_int_t x131506 = 0;
    numeric_int_t x131507 = x131506;
    numeric_int_t* x131508 = &x131507;
    char* x131509 = strntoi_unchecked(x122180, x131508);
    x122180 = x131509;
    /* VAR */ numeric_int_t x131511 = 0;
    numeric_int_t x131512 = x131511;
    numeric_int_t* x131513 = &x131512;
    char* x131514 = strntoi_unchecked(x122180, x131513);
    x122180 = x131514;
    /* VAR */ numeric_int_t x131516 = 0;
    numeric_int_t x131517 = x131516;
    numeric_int_t* x131518 = &x131517;
    char* x131519 = strntoi_unchecked(x122180, x131518);
    x122180 = x131519;
    /* VAR */ numeric_int_t x131525 = 0;
    numeric_int_t x131526 = x131525;
    numeric_int_t* x131527 = &x131526;
    char* x131528 = strntoi_unchecked(x122180, x131527);
    x122180 = x131528;
    /* VAR */ numeric_int_t x131530 = 0;
    numeric_int_t x131531 = x131530;
    numeric_int_t* x131532 = &x131531;
    char* x131533 = strntoi_unchecked(x122180, x131532);
    x122180 = x131533;
    /* VAR */ numeric_int_t x131535 = 0;
    numeric_int_t x131536 = x131535;
    numeric_int_t* x131537 = &x131536;
    char* x131538 = strntoi_unchecked(x122180, x131537);
    x122180 = x131538;
    /* VAR */ numeric_int_t x131544 = 0;
    numeric_int_t x131545 = x131544;
    numeric_int_t* x131546 = &x131545;
    char* x131547 = strntoi_unchecked(x122180, x131546);
    x122180 = x131547;
    /* VAR */ numeric_int_t x131549 = 0;
    numeric_int_t x131550 = x131549;
    numeric_int_t* x131551 = &x131550;
    char* x131552 = strntoi_unchecked(x122180, x131551);
    x122180 = x131552;
    /* VAR */ numeric_int_t x131554 = 0;
    numeric_int_t x131555 = x131554;
    numeric_int_t* x131556 = &x131555;
    char* x131557 = strntoi_unchecked(x122180, x131556);
    x122180 = x131557;
    /* VAR */ char* x131563 = x122180;
    while(1) {
      
      char x131564 = *x122180;
      /* VAR */ boolean_t ite145776 = 0;
      if((x131564!=('|'))) {
        char x153409 = *x122180;
        ite145776 = (x153409!=('\n'));
      } else {
        
        ite145776 = 0;
      };
      boolean_t x143821 = ite145776;
      if (!(x143821)) break; 
      
      x122180 += 1;
    };
    char* x131571 = x131563;
    numeric_int_t x131572 = x122180 - x131571;
    numeric_int_t x131573 = x131572+(1);
    char* x158519 = (char*)malloc(x131573 * sizeof(char));
    memset(x158519, 0, x131573 * sizeof(char));
    long x158520 = mallocSym_132738_158340;
    mallocSym_132738_158340 = (x158520+(((long){x131573})));
    char* x131576 = x131563;
    char* x131577 = strncpy(x158519, x131576, x131572);
    x122180 += 1;
    /* VAR */ char* x131579 = x122180;
    while(1) {
      
      char x131580 = *x122180;
      /* VAR */ boolean_t ite145797 = 0;
      if((x131580!=('|'))) {
        char x153429 = *x122180;
        ite145797 = (x153429!=('\n'));
      } else {
        
        ite145797 = 0;
      };
      boolean_t x143835 = ite145797;
      if (!(x143835)) break; 
      
      x122180 += 1;
    };
    char* x131587 = x131579;
    numeric_int_t x131588 = x122180 - x131587;
    numeric_int_t x131589 = x131588+(1);
    char* x158543 = (char*)malloc(x131589 * sizeof(char));
    memset(x158543, 0, x131589 * sizeof(char));
    long x158544 = mallocSym_132754_158353;
    mallocSym_132754_158353 = (x158544+(((long){x131589})));
    char* x131592 = x131579;
    char* x131593 = strncpy(x158543, x131592, x131588);
    x122180 += 1;
    /* VAR */ char* x131595 = x122180;
    while(1) {
      
      char x131596 = *x122180;
      /* VAR */ boolean_t ite145818 = 0;
      if((x131596!=('|'))) {
        char x153449 = *x122180;
        ite145818 = (x153449!=('\n'));
      } else {
        
        ite145818 = 0;
      };
      boolean_t x143849 = ite145818;
      if (!(x143849)) break; 
      
      x122180 += 1;
    };
    char* x131603 = x131595;
    numeric_int_t x131604 = x122180 - x131603;
    numeric_int_t x131605 = x131604+(1);
    char* x158567 = (char*)malloc(x131605 * sizeof(char));
    memset(x158567, 0, x131605 * sizeof(char));
    long x158568 = mallocSym_132770_158350;
    mallocSym_132770_158350 = (x158568+(((long){x131605})));
    char* x131608 = x131595;
    char* x131609 = strncpy(x158567, x131608, x131604);
    x122180 += 1;
    struct LINEITEMRecord* x158575 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x158575, 0, 1 * sizeof(struct LINEITEMRecord));
    long x158576 = mallocSym_133393_158360;
    mallocSym_133393_158360 = (x158576+(((long){1})));
    x158575->L_ORDERKEY = x131457; x158575->L_COMMITDATE = (((x131526*(10000))+((x131531*(100))))+(x131536)); x158575->L_RECEIPTDATE = (((x131545*(10000))+((x131550*(100))))+(x131555));
    numeric_int_t x122203 = x122181;
    if((x158575==(NULL))) {
      *(x158368 + x122203) = (const struct LINEITEMRecord){0};
    } else {
      
      struct LINEITEMRecord x132779 = *x158575;
      *(x158368 + x122203) = x132779;
      struct LINEITEMRecord* x132781 = &(x158368[x122203]);
      x158575 = x132781;
    };
    numeric_int_t x122205 = x122181;
    x122181 = (x122205+(1));
  };
  FILE* x131617 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ numeric_int_t x131618 = 0;
  numeric_int_t x131619 = x131618;
  numeric_int_t* x131620 = &x131619;
  numeric_int_t x131621 = fscanf(x131617, "%d", x131620);
  pclose(x131617);
  struct ORDERSRecord* x158599 = (struct ORDERSRecord*)malloc(x131619 * sizeof(struct ORDERSRecord));
  memset(x158599, 0, x131619 * sizeof(struct ORDERSRecord));
  long x158600 = mallocSym_132793_158335;
  mallocSym_132793_158335 = (x158600+(((long){x131619})));
  numeric_int_t x131625 = O_RDONLY;
  numeric_int_t x131626 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x131625);
  /* VAR */ struct stat x131627 = x131441;
  struct stat x131628 = x131627;
  struct stat* x131629 = &x131628;
  numeric_int_t x131630 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x131629);
  numeric_int_t x131632 = PROT_READ;
  numeric_int_t x131633 = MAP_PRIVATE;
  char* x122211 = mmap(NULL, (x131629->st_size), x131632, x131633, x131626, 0);
  /* VAR */ numeric_int_t x122212 = 0;
  while(1) {
    
    numeric_int_t x122213 = x122212;
    /* VAR */ boolean_t ite145870 = 0;
    if((x122213<(x131619))) {
      char x153500 = *x122211;
      ite145870 = (x153500!=('\0'));
    } else {
      
      ite145870 = 0;
    };
    boolean_t x143894 = ite145870;
    if (!(x143894)) break; 
    
    /* VAR */ numeric_int_t x131641 = 0;
    numeric_int_t x131642 = x131641;
    numeric_int_t* x131643 = &x131642;
    char* x131644 = strntoi_unchecked(x122211, x131643);
    x122211 = x131644;
    /* VAR */ numeric_int_t x131646 = 0;
    numeric_int_t x131647 = x131646;
    numeric_int_t* x131648 = &x131647;
    char* x131649 = strntoi_unchecked(x122211, x131648);
    x122211 = x131649;
    char x131651 = *x122211;
    /* VAR */ char x131652 = x131651;
    x122211 += 1;
    x122211 += 1;
    /* VAR */ double x131656 = 0.0;
    double x131657 = x131656;
    double* x131658 = &x131657;
    char* x131659 = strntod_unchecked(x122211, x131658);
    x122211 = x131659;
    /* VAR */ numeric_int_t x131661 = 0;
    numeric_int_t x131662 = x131661;
    numeric_int_t* x131663 = &x131662;
    char* x131664 = strntoi_unchecked(x122211, x131663);
    x122211 = x131664;
    /* VAR */ numeric_int_t x131666 = 0;
    numeric_int_t x131667 = x131666;
    numeric_int_t* x131668 = &x131667;
    char* x131669 = strntoi_unchecked(x122211, x131668);
    x122211 = x131669;
    /* VAR */ numeric_int_t x131671 = 0;
    numeric_int_t x131672 = x131671;
    numeric_int_t* x131673 = &x131672;
    char* x131674 = strntoi_unchecked(x122211, x131673);
    x122211 = x131674;
    /* VAR */ char* x131680 = x122211;
    while(1) {
      
      char x131681 = *x122211;
      /* VAR */ boolean_t ite145922 = 0;
      if((x131681!=('|'))) {
        char x153551 = *x122211;
        ite145922 = (x153551!=('\n'));
      } else {
        
        ite145922 = 0;
      };
      boolean_t x143939 = ite145922;
      if (!(x143939)) break; 
      
      x122211 += 1;
    };
    char* x131688 = x131680;
    numeric_int_t x131689 = x122211 - x131688;
    numeric_int_t x131690 = x131689+(1);
    char* x158681 = (char*)malloc(x131690 * sizeof(char));
    memset(x158681, 0, x131690 * sizeof(char));
    long x158682 = mallocSym_132861_158341;
    mallocSym_132861_158341 = (x158682+(((long){x131690})));
    char* x131693 = x131680;
    char* x131694 = strncpy(x158681, x131693, x131689);
    x122211 += 1;
    /* VAR */ char* x131696 = x122211;
    while(1) {
      
      char x131697 = *x122211;
      /* VAR */ boolean_t ite145943 = 0;
      if((x131697!=('|'))) {
        char x153571 = *x122211;
        ite145943 = (x153571!=('\n'));
      } else {
        
        ite145943 = 0;
      };
      boolean_t x143953 = ite145943;
      if (!(x143953)) break; 
      
      x122211 += 1;
    };
    char* x131704 = x131696;
    numeric_int_t x131705 = x122211 - x131704;
    numeric_int_t x131706 = x131705+(1);
    char* x158705 = (char*)malloc(x131706 * sizeof(char));
    memset(x158705, 0, x131706 * sizeof(char));
    long x158706 = mallocSym_132877_158358;
    mallocSym_132877_158358 = (x158706+(((long){x131706})));
    char* x131709 = x131696;
    char* x131710 = strncpy(x158705, x131709, x131705);
    x122211 += 1;
    /* VAR */ numeric_int_t x131712 = 0;
    numeric_int_t x131713 = x131712;
    numeric_int_t* x131714 = &x131713;
    char* x131715 = strntoi_unchecked(x122211, x131714);
    x122211 = x131715;
    /* VAR */ char* x131717 = x122211;
    while(1) {
      
      char x131718 = *x122211;
      /* VAR */ boolean_t ite145969 = 0;
      if((x131718!=('|'))) {
        char x153596 = *x122211;
        ite145969 = (x153596!=('\n'));
      } else {
        
        ite145969 = 0;
      };
      boolean_t x143972 = ite145969;
      if (!(x143972)) break; 
      
      x122211 += 1;
    };
    char* x131725 = x131717;
    numeric_int_t x131726 = x122211 - x131725;
    numeric_int_t x131727 = x131726+(1);
    char* x158734 = (char*)malloc(x131727 * sizeof(char));
    memset(x158734, 0, x131727 * sizeof(char));
    long x158735 = mallocSym_132898_158355;
    mallocSym_132898_158355 = (x158735+(((long){x131727})));
    char* x131730 = x131717;
    char* x131731 = strncpy(x158734, x131730, x131726);
    x122211 += 1;
    struct ORDERSRecord* x158742 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x158742, 0, 1 * sizeof(struct ORDERSRecord));
    long x158743 = mallocSym_133523_158352;
    mallocSym_133523_158352 = (x158743+(((long){1})));
    x158742->O_ORDERKEY = x131642; x158742->O_ORDERDATE = (((x131662*(10000))+((x131667*(100))))+(x131672)); x158742->O_ORDERPRIORITY = x158681;
    numeric_int_t x122227 = x122212;
    /* VAR */ boolean_t ite145991 = 0;
    if((x158742==(NULL))) {
      ite145991 = 1;
    } else {
      
      char* x153618 = x158742->O_ORDERPRIORITY;
      /* VAR */ boolean_t x153620 = 0;
      if((x153618==(NULL))) {
        x153620 = 1;
      } else {
        
        boolean_t x153623 = strcmp(x153618, "");
        boolean_t x153624 = !(x153623);
        x153620 = x153624;
      };
      boolean_t x153627 = x153620;
      ite145991 = x153627;
    };
    boolean_t x143987 = ite145991;
    if(x143987) {
      *(x158599 + x122227) = (const struct ORDERSRecord){0};
    } else {
      
      struct ORDERSRecord x132907 = *x158742;
      *(x158599 + x122227) = x132907;
      struct ORDERSRecord* x132909 = &(x158599[x122227]);
      x158742 = x132909;
    };
    numeric_int_t x122229 = x122212;
    x122212 = (x122229+(1));
  };
  numeric_int_t x122234 = 0;
  for(; x122234 < 1 ; x122234 += 1) {
    
    /* VAR */ numeric_int_t x154721 = 0;
    struct AGGRecord_OptimalString* x159907 = (struct AGGRecord_OptimalString*)malloc(10 * sizeof(struct AGGRecord_OptimalString));
    memset(x159907, 0, 10 * sizeof(struct AGGRecord_OptimalString));
    long x159908 = mallocSym_154722_158345;
    mallocSym_154722_158345 = (x159908+(((long){10})));
    numeric_int_t x140800 = 0;
    for(; x140800 < 10 ; x140800 += 1) {
      
      *(x159907 + x140800) = (const struct AGGRecord_OptimalString){0};
    };
    struct LINEITEMRecord** x159917 = (struct LINEITEMRecord**)malloc(60000000 * sizeof(struct LINEITEMRecord*));
    memset(x159917, 0, 60000000 * sizeof(struct LINEITEMRecord*));
    long x159918 = mallocSym_154728_158336;
    long x159919 = (long){60000000};
    mallocSym_154728_158336 = (x159918+(x159919));
    numeric_int_t* x159922 = (numeric_int_t*)malloc(60000000 * sizeof(numeric_int_t));
    memset(x159922, 0, 60000000 * sizeof(numeric_int_t));
    long x159923 = mallocSym_154729_158348;
    mallocSym_154729_158348 = (x159923+(x159919));
    numeric_int_t x140808 = 0;
    for(; x140808 < 60000000 ; x140808 += 1) {
      
      *(x159922 + x140808) = 0;
    };
    /* VAR */ numeric_int_t x154735 = 0;
    numeric_int_t x140823 = 0;
    for(; x140823 < x131433 ; x140823 += 1) {
      
      struct LINEITEMRecord* x140824 = &(x158368[x140823]);
      numeric_int_t x140826 = (x140824->L_ORDERKEY)%(60000000);
      numeric_int_t x140827 = x159922[x140826];
      *(x159922 + x140826) = (x140827+(1));
      numeric_int_t x140830 = x154735;
      x154735 = (x140830+(1));
    };
    numeric_int_t x140840 = 0;
    for(; x140840 < 60000000 ; x140840 += 1) {
      
      numeric_int_t x140841 = x159922[x140840];
      struct LINEITEMRecord* x159965 = (struct LINEITEMRecord*)malloc(x140841 * sizeof(struct LINEITEMRecord));
      memset(x159965, 0, x140841 * sizeof(struct LINEITEMRecord));
      long x159966 = mallocSym_140842_158333;
      mallocSym_140842_158333 = (x159966+(((long){x140841})));
      *(x159917 + x140840) = x159965;
      *(x159922 + x140840) = 0;
    };
    x154735 = 0;
    numeric_int_t x140867 = 0;
    for(; x140867 < x131433 ; x140867 += 1) {
      
      struct LINEITEMRecord* x140868 = &(x158368[x140867]);
      numeric_int_t x140870 = (x140868->L_ORDERKEY)%(60000000);
      numeric_int_t x140871 = x159922[x140870];
      struct LINEITEMRecord* x140872 = x159917[x140870];
      if((x140868==(NULL))) {
        *(x140872 + x140871) = (const struct LINEITEMRecord){0};
      } else {
        
        struct LINEITEMRecord x132965 = *x140868;
        *(x140872 + x140871) = x132965;
        struct LINEITEMRecord* x132967 = &(x140872[x140871]);
        x140868 = x132967;
      };
      numeric_int_t x140880 = x159922[x140870];
      *(x159922 + x140870) = (x140880+(1));
      numeric_int_t x140883 = x154735;
      x154735 = (x140883+(1));
    };
    struct ORDERSRecord** x160012 = (struct ORDERSRecord**)malloc(96 * sizeof(struct ORDERSRecord*));
    memset(x160012, 0, 96 * sizeof(struct ORDERSRecord*));
    long x160013 = mallocSym_154808_158349;
    long x160014 = (long){96};
    mallocSym_154808_158349 = (x160013+(x160014));
    numeric_int_t* x160017 = (numeric_int_t*)malloc(96 * sizeof(numeric_int_t));
    memset(x160017, 0, 96 * sizeof(numeric_int_t));
    long x160018 = mallocSym_154809_158347;
    mallocSym_154809_158347 = (x160018+(x160014));
    numeric_int_t x140895 = 0;
    for(; x140895 < 96 ; x140895 += 1) {
      
      numeric_int_t x140897 = (x131619/(96))*(4);
      struct ORDERSRecord* x160034 = (struct ORDERSRecord*)malloc(x140897 * sizeof(struct ORDERSRecord));
      memset(x160034, 0, x140897 * sizeof(struct ORDERSRecord));
      long x160035 = mallocSym_140898_158338;
      mallocSym_140898_158338 = (x160035+(((long){x140897})));
      *(x160012 + x140895) = x160034;
    };
    /* VAR */ numeric_int_t x154821 = 0;
    numeric_int_t x140933 = 0;
    for(; x140933 < x131619 ; x140933 += 1) {
      
      struct ORDERSRecord* x140934 = &(x158599[x140933]);
      numeric_int_t x140936 = (x140934->O_ORDERDATE)/(100);
      numeric_int_t x140942 = (((x140936/(100))-(1992))*(12))+(((x140936%(100))-(1)));
      numeric_int_t x140943 = x160017[x140942];
      struct ORDERSRecord* x140944 = x160012[x140942];
      /* VAR */ boolean_t ite147169 = 0;
      if((x140934==(NULL))) {
        ite147169 = 1;
      } else {
        
        char* x154879 = x140934->O_ORDERPRIORITY;
        /* VAR */ boolean_t x154881 = 0;
        if((x154879==(NULL))) {
          x154881 = 1;
        } else {
          
          boolean_t x154884 = strcmp(x154879, "");
          boolean_t x154885 = !(x154884);
          x154881 = x154885;
        };
        boolean_t x154888 = x154881;
        ite147169 = x154888;
      };
      boolean_t x144959 = ite147169;
      if(x144959) {
        *(x140944 + x140943) = (const struct ORDERSRecord){0};
      } else {
        
        struct ORDERSRecord x133004 = *x140934;
        *(x140944 + x140943) = x133004;
        struct ORDERSRecord* x133006 = &(x140944[x140943]);
        x140934 = x133006;
      };
      *(x160017 + x140942) = (x140943+(1));
      numeric_int_t x140960 = x154821;
      x154821 = (x140960+(1));
    };
    /* VAR */ numeric_int_t x154903 = 0;
    double** x160123 = (double**)malloc(5 * sizeof(double*));
    memset(x160123, 0, 5 * sizeof(double*));
    long x160124 = mallocSym_154904_158334;
    long x160125 = (long){5};
    mallocSym_154904_158334 = (x160124+(x160125));
    /* VAR */ numeric_int_t x154905 = 0;
    while(1) {
      
      numeric_int_t x130789 = x154905;
      if (!((x130789<(5)))) break; 
      
      numeric_int_t x130791 = x154905;
      double* x160133 = (double*)malloc(1 * sizeof(double));
      memset(x160133, 0, 1 * sizeof(double));
      long x160134 = mallocSym_133022_158343;
      mallocSym_133022_158343 = (x160134+(((long){1})));
      *(x160123 + x130791) = x160133;
      numeric_int_t x130794 = x154905;
      x154905 = (x130794+(1));
    };
    /* VAR */ numeric_int_t x154915 = 0;
    struct AGGRecord_OptimalString* x160143 = (struct AGGRecord_OptimalString*)malloc(5 * sizeof(struct AGGRecord_OptimalString));
    memset(x160143, 0, 5 * sizeof(struct AGGRecord_OptimalString));
    long x160144 = mallocSym_154916_158337;
    mallocSym_154916_158337 = (x160144+(x160125));
    /* VAR */ numeric_int_t x154917 = 0;
    while(1) {
      
      numeric_int_t x130801 = x154917;
      if (!((x130801<(5)))) break; 
      
      numeric_int_t x130803 = x154917;
      double* x130804 = x160123[x130803];
      struct AGGRecord_OptimalString* x160153 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x160153, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      long x160154 = mallocSym_133657_158332;
      mallocSym_133657_158332 = (x160154+(((long){1})));
      x160153->key = ""; x160153->aggs = x130804; x160153->next = NULL;
      /* VAR */ boolean_t ite147215 = 0;
      if((x160153==(NULL))) {
        ite147215 = 1;
      } else {
        
        char* x154930 = x160153->key;
        /* VAR */ boolean_t x154932 = 0;
        if((x154930==(NULL))) {
          x154932 = 1;
        } else {
          
          boolean_t x154935 = strcmp(x154930, "");
          boolean_t x154936 = !(x154935);
          x154932 = x154936;
        };
        boolean_t x154939 = x154932;
        ite147215 = x154939;
      };
      boolean_t x144996 = ite147215;
      if(x144996) {
        *(x160143 + x130803) = (const struct AGGRecord_OptimalString){0};
      } else {
        
        struct AGGRecord_OptimalString x133038 = *x160153;
        *(x160143 + x130803) = x133038;
        struct AGGRecord_OptimalString* x133040 = &(x160143[x130803]);
        x160153 = x133040;
      };
      numeric_int_t x130807 = x154917;
      x154917 = (x130807+(1));
    };
    struct timeval x154952 = (struct timeval){0};
    /* VAR */ struct timeval x154953 = x154952;
    struct timeval x154954 = x154953;
    /* VAR */ struct timeval x154955 = x154952;
    struct timeval x154956 = x154955;
    /* VAR */ struct timeval x154957 = x154952;
    struct timeval x154958 = x154957;
    struct timeval* x154959 = &x154956;
    gettimeofday(x154959, NULL);
    /* VAR */ numeric_int_t x154961 = 0;
    numeric_int_t* x154974 = &(x154968);
    GTree* x154975 = g_tree_new(x154974);
    /* VAR */ boolean_t x154976 = 0;
    /* VAR */ numeric_int_t x154977 = 0;
    numeric_int_t x141306 = 19;
    for(; x141306 < 23 ; x141306 += 1) {
      
      numeric_int_t x141307 = x160017[x141306];
      struct ORDERSRecord* x141308 = x160012[x141306];
      numeric_int_t x141170 = 0;
      for(; x141170 < x141307 ; x141170 += 1) {
        
        struct ORDERSRecord* x141171 = &(x141308[x141170]);
        numeric_int_t x141172 = x141171->O_ORDERDATE;
        if(((x141172<(19931101))&((x141172>=(19930801))))) {
          numeric_int_t x122321 = x141171->O_ORDERKEY;
          /* VAR */ boolean_t x128851 = 0;
          numeric_int_t x128852 = x122321%(60000000);
          numeric_int_t x128853 = x159922[x128852];
          struct LINEITEMRecord* x128854 = x159917[x128852];
          numeric_int_t x141060 = 0;
          for(; x141060 < x128853 ; x141060 += 1) {
            
            struct LINEITEMRecord* x141061 = &(x128854[x141060]);
            if(((x141061->L_COMMITDATE)<((x141061->L_RECEIPTDATE)))) {
              if((((x141061->L_ORDERKEY)==(x122321))&((x122321==((x141061->L_ORDERKEY)))))) {
                x128851 = 1;
              };
            };
          };
          boolean_t x128871 = x128851;
          if(x128871) {
            char* x122366 = x141171->O_ORDERPRIORITY;
            numeric_int_t x139622 = strlen(x122366);
            /* VAR */ numeric_int_t x137551 = 0;
            /* VAR */ numeric_int_t x137552 = 0;
            while(1) {
              
              numeric_int_t x137553 = x137551;
              if (!((x137553<(x139622)))) break; 
              
              numeric_int_t x137555 = x137552;
              numeric_int_t x137556 = x137551;
              char* x139630 = pointer_add(x122366, x137556);
              char x139631 = *(x139630);
              x137552 = (x137555+(x139631));
              numeric_int_t x137561 = x137551;
              x137551 = (x137561+(1));
            };
            numeric_int_t x137565 = x137552;
            numeric_int_t x125055 = x137565&(9);
            struct AGGRecord_OptimalString* x125745 = &(x159907[x125055]);
            numeric_int_t x125057 = x154721;
            if((x125055>(x125057))) {
              x154721 = x125055;
            };
            /* VAR */ struct AGGRecord_OptimalString* current126025 = x125745;
            /* VAR */ boolean_t found125755 = 0;
            while(1) {
              
              struct AGGRecord_OptimalString* x126028 = current126025;
              /* VAR */ boolean_t ite147837 = 0;
              if((x126028!=(NULL))) {
                char* x155595 = x126028->key;
                /* VAR */ boolean_t x155597 = 0;
                if((x155595!=(NULL))) {
                  boolean_t x155599 = strcmp(x155595, "");
                  x155597 = x155599;
                } else {
                  
                  x155597 = 0;
                };
                boolean_t x155603 = x155597;
                ite147837 = x155603;
              } else {
                
                ite147837 = 0;
              };
              boolean_t x145507 = ite147837;
              /* VAR */ boolean_t ite147848 = 0;
              if(x145507) {
                boolean_t x155610 = found125755;
                boolean_t x155611 = !(x155610);
                ite147848 = x155611;
              } else {
                
                ite147848 = 0;
              };
              boolean_t x145509 = ite147848;
              if (!(x145509)) break; 
              
              struct AGGRecord_OptimalString* x126033 = current126025;
              boolean_t x137585 = strcmp((x126033->key), x122366);
              boolean_t x137586 = !(x137585);
              if(x137586) {
                found125755 = 1;
              } else {
                
                struct AGGRecord_OptimalString* x126039 = current126025;
                struct AGGRecord_OptimalString* x126580 = x126039->next;
                current126025 = x126580;
              };
            };
            boolean_t x125771 = found125755;
            boolean_t x125772 = !(x125771);
            /* VAR */ struct AGGRecord_OptimalString** ite145522 = 0;
            if(x125772) {
              ite145522 = NULL;
            } else {
              
              struct AGGRecord_OptimalString* x145524 = current126025;
              ite145522 = x145524;
            };
            struct AGGRecord_OptimalString** x125778 = ite145522;
            /* VAR */ struct AGGRecord_OptimalString* ite145530 = 0;
            if((x125778!=(NULL))) {
              ite145530 = x125778;
            } else {
              
              numeric_int_t x145532 = x154903;
              double* x145533 = x160123[x145532];
              numeric_int_t x145534 = x154903;
              x154903 = (x145534+(1));
              numeric_int_t x145537 = x154915;
              struct AGGRecord_OptimalString* x145538 = &(x160143[x145537]);
              x145538->key = x122366;
              x145538->aggs = x145533;
              x145538->next = NULL;
              numeric_int_t x145542 = x154915;
              x154915 = (x145542+(1));
              /* VAR */ boolean_t ite147893 = 0;
              if((x125745==(NULL))) {
                ite147893 = 1;
              } else {
                
                char* x155655 = x125745->key;
                /* VAR */ boolean_t x155657 = 0;
                if((x155655==(NULL))) {
                  x155657 = 1;
                } else {
                  
                  boolean_t x155660 = strcmp(x155655, "");
                  boolean_t x155661 = !(x155660);
                  x155657 = x155661;
                };
                boolean_t x155664 = x155657;
                ite147893 = x155664;
              };
              boolean_t x145547 = ite147893;
              if(x145547) {
                x145538->next = NULL;
                /* VAR */ boolean_t ite147907 = 0;
                if((x145538==(NULL))) {
                  ite147907 = 1;
                } else {
                  
                  char* x155674 = x145538->key;
                  /* VAR */ boolean_t x155676 = 0;
                  if((x155674==(NULL))) {
                    x155676 = 1;
                  } else {
                    
                    boolean_t x155679 = strcmp(x155674, "");
                    boolean_t x155680 = !(x155679);
                    x155676 = x155680;
                  };
                  boolean_t x155683 = x155676;
                  ite147907 = x155683;
                };
                boolean_t x145552 = ite147907;
                if(x145552) {
                  *(x159907 + x125055) = (const struct AGGRecord_OptimalString){0};
                } else {
                  
                  struct AGGRecord_OptimalString x133152 = *x145538;
                  *(x159907 + x125055) = x133152;
                  struct AGGRecord_OptimalString* x133154 = &(x159907[x125055]);
                  x145538 = x133154;
                };
              } else {
                
                struct AGGRecord_OptimalString* x126600 = x125745->next;
                x145538->next = x126600;
                x125745->next = x145538;
              };
              ite145530 = x145538;
            };
            struct AGGRecord_OptimalString* x125070 = ite145530;
            double* x122371 = x125070->aggs;
            double x122385 = x122371[0];
            *x122371 = (x122385+(1.0));
          };
        };
      };
    };
    numeric_int_t x155703 = x154721;
    numeric_int_t x141600 = 0;
    for(; x141600 < (x155703+(1)) ; x141600 += 1) {
      
      struct AGGRecord_OptimalString* x141601 = &(x159907[x141600]);
      /* VAR */ struct AGGRecord_OptimalString* x141602 = x141601;
      while(1) {
        
        struct AGGRecord_OptimalString* x126084 = x141602;
        /* VAR */ boolean_t ite147965 = 0;
        if((x126084!=(NULL))) {
          char* x155740 = x126084->key;
          /* VAR */ boolean_t x155742 = 0;
          if((x155740!=(NULL))) {
            boolean_t x155744 = strcmp(x155740, "");
            x155742 = x155744;
          } else {
            
            x155742 = 0;
          };
          boolean_t x155748 = x155742;
          ite147965 = x155748;
        } else {
          
          ite147965 = 0;
        };
        boolean_t x145592 = ite147965;
        if (!(x145592)) break; 
        
        struct AGGRecord_OptimalString* x126086 = x141602;
        struct AGGRecord_OptimalString* x126627 = x126086->next;
        struct AGGRecord_OptimalString* x126088 = x141602;
        g_tree_insert(x154975, x126088, x126088);
        x141602 = x126627;
      };
    };
    while(1) {
      
      boolean_t x123256 = x154976;
      boolean_t x122408 = !(x123256);
      /* VAR */ boolean_t ite147984 = 0;
      if(x122408) {
        numeric_int_t x155763 = g_tree_nnodes(x154975);
        ite147984 = (x155763!=(0));
      } else {
        
        ite147984 = 0;
      };
      boolean_t x145602 = ite147984;
      if (!(x145602)) break; 
      
      void* x135064 = NULL;
      void** x135072 = &(x135064);
      g_tree_foreach(x154975, x135071, x135072);
      struct AGGRecord_OptimalString* x135074 = (struct AGGRecord_OptimalString*){x135064};
      numeric_int_t x135075 = g_tree_remove(x154975, x135074);
      if(0) {
        x154976 = 1;
      } else {
        
        double x122424 = ((double*) { x135074->aggs })[0];
        printf("%s|%.0f\n", (x135074->key), x122424);
        numeric_int_t x123274 = x154977;
        x154977 = (x123274+(1));
      };
    };
    numeric_int_t x155790 = x154977;
    printf("(%d rows)\n", x155790);
    struct timeval* x155792 = &x154958;
    gettimeofday(x155792, NULL);
    struct timeval* x155794 = &x154954;
    struct timeval* x155795 = &x154958;
    struct timeval* x155796 = &x154956;
    long x155797 = timeval_subtract(x155794, x155795, x155796);
    printf("Generated code run in %ld milliseconds.\n", x155797);
  };
  /* VAR */ long mallocSum161033 = 0L;
  long x161034 = mallocSym_133657_158332;
  numeric_int_t x161035 = sizeof(struct AGGRecord_OptimalString);
  long x161037 = x161034*(((long){x161035}));
  printf("160153 with type AGGRecord_OptimalString: %ld\n", x161037);
  long x161039 = mallocSum161033;
  mallocSum161033 = (x161039+(x161037));
  long x161042 = mallocSym_140842_158333;
  numeric_int_t x161043 = sizeof(struct LINEITEMRecord);
  long x161045 = x161042*(((long){x161043}));
  printf("159965 with type LINEITEMRecord: %ld\n", x161045);
  long x161047 = mallocSum161033;
  mallocSum161033 = (x161047+(x161045));
  long x161050 = mallocSym_154904_158334;
  numeric_int_t x161051 = sizeof(double*);
  long x161053 = x161050*(((long){x161051}));
  printf("160123 with type Pointer[Double]: %ld\n", x161053);
  long x161055 = mallocSum161033;
  mallocSum161033 = (x161055+(x161053));
  long x161058 = mallocSym_132793_158335;
  numeric_int_t x161059 = sizeof(struct ORDERSRecord);
  long x161061 = x161058*(((long){x161059}));
  printf("158599 with type ORDERSRecord: %ld\n", x161061);
  long x161063 = mallocSum161033;
  mallocSum161033 = (x161063+(x161061));
  long x161066 = mallocSym_154728_158336;
  numeric_int_t x161067 = sizeof(struct LINEITEMRecord*);
  long x161069 = x161066*(((long){x161067}));
  printf("159917 with type Pointer[LINEITEMRecord]: %ld\n", x161069);
  long x161071 = mallocSum161033;
  mallocSum161033 = (x161071+(x161069));
  long x161074 = mallocSym_154916_158337;
  numeric_int_t x161075 = sizeof(struct AGGRecord_OptimalString);
  long x161077 = x161074*(((long){x161075}));
  printf("160143 with type AGGRecord_OptimalString: %ld\n", x161077);
  long x161079 = mallocSum161033;
  mallocSum161033 = (x161079+(x161077));
  long x161082 = mallocSym_140898_158338;
  numeric_int_t x161083 = sizeof(struct ORDERSRecord);
  long x161085 = x161082*(((long){x161083}));
  printf("160034 with type ORDERSRecord: %ld\n", x161085);
  long x161087 = mallocSum161033;
  mallocSum161033 = (x161087+(x161085));
  long x161090 = mallocSym_132919_158339;
  numeric_int_t x161091 = sizeof(struct AGGRecord_OptimalString);
  long x161093 = x161090*(((long){x161091}));
  printf("158779 with type AGGRecord_OptimalString: %ld\n", x161093);
  long x161095 = mallocSum161033;
  mallocSum161033 = (x161095+(x161093));
  long x161098 = mallocSym_132738_158340;
  numeric_int_t x161099 = sizeof(char);
  long x161101 = x161098*(((long){x161099}));
  printf("158519 with type Byte: %ld\n", x161101);
  long x161103 = mallocSum161033;
  mallocSum161033 = (x161103+(x161101));
  long x161106 = mallocSym_132861_158341;
  numeric_int_t x161107 = sizeof(char);
  long x161109 = x161106*(((long){x161107}));
  printf("158681 with type Byte: %ld\n", x161109);
  long x161111 = mallocSum161033;
  mallocSum161033 = (x161111+(x161109));
  long x161114 = mallocSym_132950_158342;
  numeric_int_t x161115 = sizeof(struct LINEITEMRecord);
  long x161117 = x161114*(((long){x161115}));
  printf("159956 with type LINEITEMRecord: %ld\n", x161117);
  long x161119 = mallocSum161033;
  mallocSum161033 = (x161119+(x161117));
  long x161122 = mallocSym_133022_158343;
  numeric_int_t x161123 = sizeof(double);
  long x161125 = x161122*(((long){x161123}));
  printf("160133 with type Double: %ld\n", x161125);
  long x161127 = mallocSum161033;
  mallocSum161033 = (x161127+(x161125));
  long x161130 = mallocSym_132984_158344;
  numeric_int_t x161131 = sizeof(struct ORDERSRecord);
  long x161133 = x161130*(((long){x161131}));
  printf("160025 with type ORDERSRecord: %ld\n", x161133);
  long x161135 = mallocSum161033;
  mallocSum161033 = (x161135+(x161133));
  long x161138 = mallocSym_154722_158345;
  numeric_int_t x161139 = sizeof(struct AGGRecord_OptimalString);
  long x161141 = x161138*(((long){x161139}));
  printf("159907 with type AGGRecord_OptimalString: %ld\n", x161141);
  long x161143 = mallocSum161033;
  mallocSum161033 = (x161143+(x161141));
  long x161146 = mallocSym_133028_158346;
  numeric_int_t x161147 = sizeof(struct AGGRecord_OptimalString);
  long x161149 = x161146*(((long){x161147}));
  printf("159015 with type AGGRecord_OptimalString: %ld\n", x161149);
  long x161151 = mallocSum161033;
  mallocSum161033 = (x161151+(x161149));
  long x161154 = mallocSym_154809_158347;
  numeric_int_t x161155 = sizeof(numeric_int_t);
  long x161157 = x161154*(((long){x161155}));
  printf("160017 with type Int: %ld\n", x161157);
  long x161159 = mallocSum161033;
  mallocSum161033 = (x161159+(x161157));
  long x161162 = mallocSym_154729_158348;
  numeric_int_t x161163 = sizeof(numeric_int_t);
  long x161165 = x161162*(((long){x161163}));
  printf("159922 with type Int: %ld\n", x161165);
  long x161167 = mallocSum161033;
  mallocSum161033 = (x161167+(x161165));
  long x161170 = mallocSym_154808_158349;
  numeric_int_t x161171 = sizeof(struct ORDERSRecord*);
  long x161173 = x161170*(((long){x161171}));
  printf("160012 with type Pointer[ORDERSRecord]: %ld\n", x161173);
  long x161175 = mallocSum161033;
  mallocSum161033 = (x161175+(x161173));
  long x161178 = mallocSym_132770_158350;
  numeric_int_t x161179 = sizeof(char);
  long x161181 = x161178*(((long){x161179}));
  printf("158567 with type Byte: %ld\n", x161181);
  long x161183 = mallocSum161033;
  mallocSum161033 = (x161183+(x161181));
  long x161186 = mallocSym_133016_158351;
  numeric_int_t x161187 = sizeof(double*);
  long x161189 = x161186*(((long){x161187}));
  printf("158995 with type Pointer[Double]: %ld\n", x161189);
  long x161191 = mallocSum161033;
  mallocSum161033 = (x161191+(x161189));
  long x161194 = mallocSym_133523_158352;
  numeric_int_t x161195 = sizeof(struct ORDERSRecord);
  long x161197 = x161194*(((long){x161195}));
  printf("158742 with type ORDERSRecord: %ld\n", x161197);
  long x161199 = mallocSum161033;
  mallocSum161033 = (x161199+(x161197));
  long x161202 = mallocSym_132754_158353;
  numeric_int_t x161203 = sizeof(char);
  long x161205 = x161202*(((long){x161203}));
  printf("158543 with type Byte: %ld\n", x161205);
  long x161207 = mallocSum161033;
  mallocSum161033 = (x161207+(x161205));
  long x161210 = mallocSym_132926_158354;
  numeric_int_t x161211 = sizeof(numeric_int_t);
  long x161213 = x161210*(((long){x161211}));
  printf("158794 with type Int: %ld\n", x161213);
  long x161215 = mallocSum161033;
  mallocSum161033 = (x161215+(x161213));
  long x161218 = mallocSym_132898_158355;
  numeric_int_t x161219 = sizeof(char);
  long x161221 = x161218*(((long){x161219}));
  printf("158734 with type Byte: %ld\n", x161221);
  long x161223 = mallocSum161033;
  mallocSum161033 = (x161223+(x161221));
  long x161226 = mallocSym_132601_158356;
  numeric_int_t x161227 = sizeof(struct LINEITEMRecord);
  long x161229 = x161226*(((long){x161227}));
  printf("158368 with type LINEITEMRecord: %ld\n", x161229);
  long x161231 = mallocSum161033;
  mallocSum161033 = (x161231+(x161229));
  long x161234 = mallocSym_132978_158357;
  numeric_int_t x161235 = sizeof(numeric_int_t);
  long x161237 = x161234*(((long){x161235}));
  printf("158889 with type Int: %ld\n", x161237);
  long x161239 = mallocSum161033;
  mallocSum161033 = (x161239+(x161237));
  long x161242 = mallocSym_132877_158358;
  numeric_int_t x161243 = sizeof(char);
  long x161245 = x161242*(((long){x161243}));
  printf("158705 with type Byte: %ld\n", x161245);
  long x161247 = mallocSum161033;
  mallocSum161033 = (x161247+(x161245));
  long x161250 = mallocSym_132977_158359;
  numeric_int_t x161251 = sizeof(struct ORDERSRecord*);
  long x161253 = x161250*(((long){x161251}));
  printf("158884 with type Pointer[ORDERSRecord]: %ld\n", x161253);
  long x161255 = mallocSum161033;
  mallocSum161033 = (x161255+(x161253));
  long x161258 = mallocSym_133393_158360;
  numeric_int_t x161259 = sizeof(struct LINEITEMRecord);
  long x161261 = x161258*(((long){x161259}));
  printf("158575 with type LINEITEMRecord: %ld\n", x161261);
  long x161263 = mallocSum161033;
  mallocSum161033 = (x161263+(x161261));
  long x161266 = mallocSym_132925_158361;
  numeric_int_t x161267 = sizeof(struct LINEITEMRecord*);
  long x161269 = x161266*(((long){x161267}));
  printf("158789 with type Pointer[LINEITEMRecord]: %ld\n", x161269);
  long x161271 = mallocSum161033;
  mallocSum161033 = (x161271+(x161269));
  long x161274 = mallocSum161033;
  printf("total: %ld\n", x161274);
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x154968(struct AGGRecord_OptimalString* x122275, struct AGGRecord_OptimalString* x122276) {
  numeric_int_t x139578 = strcmp((x122275->key), (x122276->key));
  return x139578; 
}

numeric_int_t x135071(void* x135065, void* x135066, void* x135067) {
  pointer_assign(((struct AGGRecord_OptimalString**){x135067}), ((struct AGGRecord_OptimalString*){x135066}));
  return 1; 
}
