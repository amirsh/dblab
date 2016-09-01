#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct LINEITEMRecord;
struct LINEITEMRecord {
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  numeric_int_t L_SHIPDATE;
};


int main(int argc, char** argv) {
  /* VAR */ long mallocSym_240224_248701 = 0L;
  /* VAR */ long mallocSym_240167_248702 = 0L;
  /* VAR */ long mallocSym_240183_248703 = 0L;
  /* VAR */ long mallocSym_242748_248704 = 0L;
  /* VAR */ long mallocSym_247740_248705 = 0L;
  /* VAR */ long mallocSym_240216_248706 = 0L;
  /* VAR */ long mallocSym_247741_248707 = 0L;
  /* VAR */ long mallocSym_240218_248708 = 0L;
  /* VAR */ long mallocSym_240483_248709 = 0L;
  /* VAR */ long mallocSym_240217_248710 = 0L;
  /* VAR */ long mallocSym_240199_248711 = 0L;
  /* VAR */ long mallocSym_240030_248712 = 0L;
  /* VAR */ long mallocSym_247742_248713 = 0L;
  FILE* x239478 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x239479 = 0;
  numeric_int_t x239480 = x239479;
  numeric_int_t* x239481 = &x239480;
  numeric_int_t x239482 = fscanf(x239478, "%d", x239481);
  pclose(x239478);
  struct LINEITEMRecord* x248720 = (struct LINEITEMRecord*)malloc(x239480 * sizeof(struct LINEITEMRecord));
  memset(x248720, 0, x239480 * sizeof(struct LINEITEMRecord));
  long x248721 = mallocSym_240030_248712;
  mallocSym_240030_248712 = (x248721+(((long){x239480})));
  numeric_int_t x239486 = O_RDONLY;
  numeric_int_t x239487 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x239486);
  /* VAR */ struct stat x239489 = ((struct stat){0});
  struct stat x239490 = x239489;
  struct stat* x239491 = &x239490;
  numeric_int_t x239492 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x239491);
  numeric_int_t x239494 = PROT_READ;
  numeric_int_t x239495 = MAP_PRIVATE;
  char* x235659 = mmap(NULL, (x239491->st_size), x239494, x239495, x239487, 0);
  /* VAR */ numeric_int_t x235660 = 0;
  while(1) {
    
    numeric_int_t x235661 = x235660;
    /* VAR */ boolean_t ite243930 = 0;
    if((x235661<(x239480))) {
      char x247303 = *x235659;
      ite243930 = (x247303!=('\0'));
    } else {
      
      ite243930 = 0;
    };
    boolean_t x243466 = ite243930;
    if (!(x243466)) break; 
    
    /* VAR */ numeric_int_t x239503 = 0;
    numeric_int_t x239504 = x239503;
    numeric_int_t* x239505 = &x239504;
    char* x239506 = strntoi_unchecked(x235659, x239505);
    x235659 = x239506;
    /* VAR */ numeric_int_t x239508 = 0;
    numeric_int_t x239509 = x239508;
    numeric_int_t* x239510 = &x239509;
    char* x239511 = strntoi_unchecked(x235659, x239510);
    x235659 = x239511;
    /* VAR */ numeric_int_t x239513 = 0;
    numeric_int_t x239514 = x239513;
    numeric_int_t* x239515 = &x239514;
    char* x239516 = strntoi_unchecked(x235659, x239515);
    x235659 = x239516;
    /* VAR */ numeric_int_t x239518 = 0;
    numeric_int_t x239519 = x239518;
    numeric_int_t* x239520 = &x239519;
    char* x239521 = strntoi_unchecked(x235659, x239520);
    x235659 = x239521;
    /* VAR */ double x239523 = 0.0;
    double x239524 = x239523;
    double* x239525 = &x239524;
    char* x239526 = strntod_unchecked(x235659, x239525);
    x235659 = x239526;
    /* VAR */ double x239528 = 0.0;
    double x239529 = x239528;
    double* x239530 = &x239529;
    char* x239531 = strntod_unchecked(x235659, x239530);
    x235659 = x239531;
    /* VAR */ double x239533 = 0.0;
    double x239534 = x239533;
    double* x239535 = &x239534;
    char* x239536 = strntod_unchecked(x235659, x239535);
    x235659 = x239536;
    /* VAR */ double x239538 = 0.0;
    double x239539 = x239538;
    double* x239540 = &x239539;
    char* x239541 = strntod_unchecked(x235659, x239540);
    x235659 = x239541;
    char x239543 = *x235659;
    /* VAR */ char x239544 = x239543;
    x235659 += 1;
    x235659 += 1;
    char x239548 = *x235659;
    /* VAR */ char x239549 = x239548;
    x235659 += 1;
    x235659 += 1;
    /* VAR */ numeric_int_t x239553 = 0;
    numeric_int_t x239554 = x239553;
    numeric_int_t* x239555 = &x239554;
    char* x239556 = strntoi_unchecked(x235659, x239555);
    x235659 = x239556;
    /* VAR */ numeric_int_t x239558 = 0;
    numeric_int_t x239559 = x239558;
    numeric_int_t* x239560 = &x239559;
    char* x239561 = strntoi_unchecked(x235659, x239560);
    x235659 = x239561;
    /* VAR */ numeric_int_t x239563 = 0;
    numeric_int_t x239564 = x239563;
    numeric_int_t* x239565 = &x239564;
    char* x239566 = strntoi_unchecked(x235659, x239565);
    x235659 = x239566;
    /* VAR */ numeric_int_t x239572 = 0;
    numeric_int_t x239573 = x239572;
    numeric_int_t* x239574 = &x239573;
    char* x239575 = strntoi_unchecked(x235659, x239574);
    x235659 = x239575;
    /* VAR */ numeric_int_t x239577 = 0;
    numeric_int_t x239578 = x239577;
    numeric_int_t* x239579 = &x239578;
    char* x239580 = strntoi_unchecked(x235659, x239579);
    x235659 = x239580;
    /* VAR */ numeric_int_t x239582 = 0;
    numeric_int_t x239583 = x239582;
    numeric_int_t* x239584 = &x239583;
    char* x239585 = strntoi_unchecked(x235659, x239584);
    x235659 = x239585;
    /* VAR */ numeric_int_t x239591 = 0;
    numeric_int_t x239592 = x239591;
    numeric_int_t* x239593 = &x239592;
    char* x239594 = strntoi_unchecked(x235659, x239593);
    x235659 = x239594;
    /* VAR */ numeric_int_t x239596 = 0;
    numeric_int_t x239597 = x239596;
    numeric_int_t* x239598 = &x239597;
    char* x239599 = strntoi_unchecked(x235659, x239598);
    x235659 = x239599;
    /* VAR */ numeric_int_t x239601 = 0;
    numeric_int_t x239602 = x239601;
    numeric_int_t* x239603 = &x239602;
    char* x239604 = strntoi_unchecked(x235659, x239603);
    x235659 = x239604;
    /* VAR */ char* x239610 = x235659;
    while(1) {
      
      char x239611 = *x235659;
      /* VAR */ boolean_t ite244050 = 0;
      if((x239611!=('|'))) {
        char x247422 = *x235659;
        ite244050 = (x247422!=('\n'));
      } else {
        
        ite244050 = 0;
      };
      boolean_t x243579 = ite244050;
      if (!(x243579)) break; 
      
      x235659 += 1;
    };
    char* x239618 = x239610;
    numeric_int_t x239619 = x235659 - x239618;
    numeric_int_t x239620 = x239619+(1);
    char* x248871 = (char*)malloc(x239620 * sizeof(char));
    memset(x248871, 0, x239620 * sizeof(char));
    long x248872 = mallocSym_240167_248702;
    mallocSym_240167_248702 = (x248872+(((long){x239620})));
    char* x239623 = x239610;
    char* x239624 = strncpy(x248871, x239623, x239619);
    x235659 += 1;
    /* VAR */ char* x239626 = x235659;
    while(1) {
      
      char x239627 = *x235659;
      /* VAR */ boolean_t ite244071 = 0;
      if((x239627!=('|'))) {
        char x247442 = *x235659;
        ite244071 = (x247442!=('\n'));
      } else {
        
        ite244071 = 0;
      };
      boolean_t x243593 = ite244071;
      if (!(x243593)) break; 
      
      x235659 += 1;
    };
    char* x239634 = x239626;
    numeric_int_t x239635 = x235659 - x239634;
    numeric_int_t x239636 = x239635+(1);
    char* x248895 = (char*)malloc(x239636 * sizeof(char));
    memset(x248895, 0, x239636 * sizeof(char));
    long x248896 = mallocSym_240183_248703;
    mallocSym_240183_248703 = (x248896+(((long){x239636})));
    char* x239639 = x239626;
    char* x239640 = strncpy(x248895, x239639, x239635);
    x235659 += 1;
    /* VAR */ char* x239642 = x235659;
    while(1) {
      
      char x239643 = *x235659;
      /* VAR */ boolean_t ite244092 = 0;
      if((x239643!=('|'))) {
        char x247462 = *x235659;
        ite244092 = (x247462!=('\n'));
      } else {
        
        ite244092 = 0;
      };
      boolean_t x243607 = ite244092;
      if (!(x243607)) break; 
      
      x235659 += 1;
    };
    char* x239650 = x239642;
    numeric_int_t x239651 = x235659 - x239650;
    numeric_int_t x239652 = x239651+(1);
    char* x248919 = (char*)malloc(x239652 * sizeof(char));
    memset(x248919, 0, x239652 * sizeof(char));
    long x248920 = mallocSym_240199_248711;
    mallocSym_240199_248711 = (x248920+(((long){x239652})));
    char* x239655 = x239642;
    char* x239656 = strncpy(x248919, x239655, x239651);
    x235659 += 1;
    struct LINEITEMRecord* x248927 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x248927, 0, 1 * sizeof(struct LINEITEMRecord));
    long x248928 = mallocSym_240483_248709;
    mallocSym_240483_248709 = (x248928+(((long){1})));
    x248927->L_QUANTITY = x239524; x248927->L_EXTENDEDPRICE = x239529; x248927->L_DISCOUNT = x239534; x248927->L_SHIPDATE = (((x239554*(10000))+((x239559*(100))))+(x239564));
    numeric_int_t x235682 = x235660;
    struct LINEITEMRecord x240206 = *x248927;
    *(x248720 + x235682) = x240206;
    struct LINEITEMRecord* x240208 = &(x248720[x235682]);
    x248927 = x240208;
    numeric_int_t x235684 = x235660;
    x235660 = (x235684+(1));
  };
  numeric_int_t x235689 = 0;
  for(; x235689 < 1 ; x235689 += 1) {
    
    double* x249214 = (double*)malloc(1 * sizeof(double));
    memset(x249214, 0, 1 * sizeof(double));
    long x249215 = mallocSym_247740_248705;
    mallocSym_247740_248705 = (x249215+(((long){1})));
    struct LINEITEMRecord** x249219 = (struct LINEITEMRecord**)malloc(96 * sizeof(struct LINEITEMRecord*));
    memset(x249219, 0, 96 * sizeof(struct LINEITEMRecord*));
    long x249220 = mallocSym_247741_248707;
    long x249221 = (long){96};
    mallocSym_247741_248707 = (x249220+(x249221));
    numeric_int_t* x249224 = (numeric_int_t*)malloc(96 * sizeof(numeric_int_t));
    memset(x249224, 0, 96 * sizeof(numeric_int_t));
    long x249225 = mallocSym_247742_248713;
    mallocSym_247742_248713 = (x249225+(x249221));
    numeric_int_t x242745 = 0;
    for(; x242745 < 96 ; x242745 += 1) {
      
      numeric_int_t x242747 = (x239480/(96))*(4);
      struct LINEITEMRecord* x249241 = (struct LINEITEMRecord*)malloc(x242747 * sizeof(struct LINEITEMRecord));
      memset(x249241, 0, x242747 * sizeof(struct LINEITEMRecord));
      long x249242 = mallocSym_242748_248704;
      mallocSym_242748_248704 = (x249242+(((long){x242747})));
      *(x249219 + x242745) = x249241;
    };
    /* VAR */ numeric_int_t x247754 = 0;
    numeric_int_t x242774 = 0;
    for(; x242774 < x239480 ; x242774 += 1) {
      
      struct LINEITEMRecord* x242775 = &(x248720[x242774]);
      numeric_int_t x242777 = (x242775->L_SHIPDATE)/(100);
      numeric_int_t x242783 = (((x242777/(100))-(1992))*(12))+(((x242777%(100))-(1)));
      numeric_int_t x242784 = x249224[x242783];
      struct LINEITEMRecord* x242785 = x249219[x242783];
      struct LINEITEMRecord x242786 = *x242775;
      *(x242785 + x242784) = x242786;
      struct LINEITEMRecord* x242788 = &(x242785[x242784]);
      x242775 = x242788;
      *(x249224 + x242783) = (x242784+(1));
      numeric_int_t x242792 = x247754;
      x247754 = (x242792+(1));
    };
    struct timeval x247798 = (struct timeval){0};
    /* VAR */ struct timeval x247799 = x247798;
    struct timeval x247800 = x247799;
    /* VAR */ struct timeval x247801 = x247798;
    struct timeval x247802 = x247801;
    /* VAR */ struct timeval x247803 = x247798;
    struct timeval x247804 = x247803;
    struct timeval* x247805 = &x247802;
    gettimeofday(x247805, NULL);
    numeric_int_t x242853 = 48;
    for(; x242853 < 61 ; x242853 += 1) {
      
      numeric_int_t x242854 = x249224[x242853];
      struct LINEITEMRecord* x242855 = x249219[x242853];
      numeric_int_t x242831 = 0;
      for(; x242831 < x242854 ; x242831 += 1) {
        
        struct LINEITEMRecord* x242832 = &(x242855[x242831]);
        numeric_int_t x242833 = x242832->L_SHIPDATE;
        /* VAR */ boolean_t ite244437 = 0;
        if((x242833>=(19960101))) {
          /* VAR */ boolean_t x247946 = 0;
          if((x242833<(19970101))) {
            double x247948 = x242832->L_DISCOUNT;
            /* VAR */ boolean_t x247950 = 0;
            if((x247948>=(0.08))) {
              /* VAR */ boolean_t x247953 = 0;
              if((x247948<=(0.1))) {
                x247953 = ((x242832->L_QUANTITY)<(24.0));
              } else {
                
                x247953 = 0;
              };
              boolean_t x247960 = x247953;
              x247950 = x247960;
            } else {
              
              x247950 = 0;
            };
            boolean_t x247964 = x247950;
            x247946 = x247964;
          } else {
            
            x247946 = 0;
          };
          boolean_t x247968 = x247946;
          ite244437 = x247968;
        } else {
          
          ite244437 = 0;
        };
        boolean_t x243889 = ite244437;
        if(x243889) {
          double x235766 = x249214[0];
          *x249214 = (((x242832->L_EXTENDEDPRICE)*((x242832->L_DISCOUNT)))+(x235766));
        };
      };
    };
    double x247980 = x249214[0];
    printf("%.4f\n", x247980);
    printf("(%d rows)\n", 1);
    struct timeval* x247983 = &x247804;
    gettimeofday(x247983, NULL);
    struct timeval* x247985 = &x247800;
    struct timeval* x247986 = &x247804;
    struct timeval* x247987 = &x247802;
    long x247988 = timeval_subtract(x247985, x247986, x247987);
    printf("Generated code run in %ld milliseconds.\n", x247988);
  };
  /* VAR */ long mallocSum249483 = 0L;
  long x249484 = mallocSym_240224_248701;
  numeric_int_t x249485 = sizeof(struct LINEITEMRecord);
  long x249487 = x249484*(((long){x249485}));
  printf("249232 with type LINEITEMRecord: %ld\n", x249487);
  long x249489 = mallocSum249483;
  mallocSum249483 = (x249489+(x249487));
  long x249492 = mallocSym_240167_248702;
  numeric_int_t x249493 = sizeof(char);
  long x249495 = x249492*(((long){x249493}));
  printf("248871 with type Byte: %ld\n", x249495);
  long x249497 = mallocSum249483;
  mallocSum249483 = (x249497+(x249495));
  long x249500 = mallocSym_240183_248703;
  numeric_int_t x249501 = sizeof(char);
  long x249503 = x249500*(((long){x249501}));
  printf("248895 with type Byte: %ld\n", x249503);
  long x249505 = mallocSum249483;
  mallocSum249483 = (x249505+(x249503));
  long x249508 = mallocSym_242748_248704;
  numeric_int_t x249509 = sizeof(struct LINEITEMRecord);
  long x249511 = x249508*(((long){x249509}));
  printf("249241 with type LINEITEMRecord: %ld\n", x249511);
  long x249513 = mallocSum249483;
  mallocSum249483 = (x249513+(x249511));
  long x249516 = mallocSym_247740_248705;
  numeric_int_t x249517 = sizeof(double);
  long x249519 = x249516*(((long){x249517}));
  printf("249214 with type Double: %ld\n", x249519);
  long x249521 = mallocSum249483;
  mallocSum249483 = (x249521+(x249519));
  long x249524 = mallocSym_240216_248706;
  numeric_int_t x249525 = sizeof(double);
  long x249527 = x249524*(((long){x249525}));
  printf("248944 with type Double: %ld\n", x249527);
  long x249529 = mallocSum249483;
  mallocSum249483 = (x249529+(x249527));
  long x249532 = mallocSym_247741_248707;
  numeric_int_t x249533 = sizeof(struct LINEITEMRecord*);
  long x249535 = x249532*(((long){x249533}));
  printf("249219 with type Pointer[LINEITEMRecord]: %ld\n", x249535);
  long x249537 = mallocSum249483;
  mallocSum249483 = (x249537+(x249535));
  long x249540 = mallocSym_240218_248708;
  numeric_int_t x249541 = sizeof(numeric_int_t);
  long x249543 = x249540*(((long){x249541}));
  printf("248954 with type Int: %ld\n", x249543);
  long x249545 = mallocSum249483;
  mallocSum249483 = (x249545+(x249543));
  long x249548 = mallocSym_240483_248709;
  numeric_int_t x249549 = sizeof(struct LINEITEMRecord);
  long x249551 = x249548*(((long){x249549}));
  printf("248927 with type LINEITEMRecord: %ld\n", x249551);
  long x249553 = mallocSum249483;
  mallocSum249483 = (x249553+(x249551));
  long x249556 = mallocSym_240217_248710;
  numeric_int_t x249557 = sizeof(struct LINEITEMRecord*);
  long x249559 = x249556*(((long){x249557}));
  printf("248949 with type Pointer[LINEITEMRecord]: %ld\n", x249559);
  long x249561 = mallocSum249483;
  mallocSum249483 = (x249561+(x249559));
  long x249564 = mallocSym_240199_248711;
  numeric_int_t x249565 = sizeof(char);
  long x249567 = x249564*(((long){x249565}));
  printf("248919 with type Byte: %ld\n", x249567);
  long x249569 = mallocSum249483;
  mallocSum249483 = (x249569+(x249567));
  long x249572 = mallocSym_240030_248712;
  numeric_int_t x249573 = sizeof(struct LINEITEMRecord);
  long x249575 = x249572*(((long){x249573}));
  printf("248720 with type LINEITEMRecord: %ld\n", x249575);
  long x249577 = mallocSum249483;
  mallocSum249483 = (x249577+(x249575));
  long x249580 = mallocSym_247742_248713;
  numeric_int_t x249581 = sizeof(numeric_int_t);
  long x249583 = x249580*(((long){x249581}));
  printf("249224 with type Int: %ld\n", x249583);
  long x249585 = mallocSum249483;
  mallocSum249483 = (x249585+(x249583));
  long x249588 = mallocSum249483;
  printf("total: %ld\n", x249588);
}
/* ----------- FUNCTIONS ----------- */