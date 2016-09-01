#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  
  struct LINEITEMRecord {
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  int L_SHIPDATE;
  };
  
  

/* GLOBAL VARS */

struct timeval x4334;
int main(int argc, char** argv) {
  FILE* x4504 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x4505 = 0;
  int x4506 = x4505;
  int* x4507 = &x4506;
  int x4508 = fscanf(x4504, "%d", x4507);
  pclose(x4504);
  struct LINEITEMRecord* x5072 = (struct LINEITEMRecord*)malloc(x4506 * sizeof(struct LINEITEMRecord));
  memset(x5072, 0, x4506 * sizeof(struct LINEITEMRecord));
  int x4512 = O_RDONLY;
  int x4513 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x4512);
  /* VAR */ struct stat x4515 = ((struct stat){0});
  struct stat x4516 = x4515;
  struct stat* x4517 = &x4516;
  int x4518 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x4517);
  int x4520 = PROT_READ;
  int x4521 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x4517->st_size), x4520, x4521, x4513, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite9030 = 0;
    if((x5<(x4506))) {
      char x12423 = *x3;
      ite9030 = (x12423!=('\0'));
    } else {
      
      ite9030 = 0;
    };
    int x8562 = ite9030;
    if (!(x8562)) break; 
    
    /* VAR */ int x4529 = 0;
    int x4530 = x4529;
    int* x4531 = &x4530;
    char* x4532 = strntoi_unchecked(x3, x4531);
    x3 = x4532;
    /* VAR */ int x4534 = 0;
    int x4535 = x4534;
    int* x4536 = &x4535;
    char* x4537 = strntoi_unchecked(x3, x4536);
    x3 = x4537;
    /* VAR */ int x4539 = 0;
    int x4540 = x4539;
    int* x4541 = &x4540;
    char* x4542 = strntoi_unchecked(x3, x4541);
    x3 = x4542;
    /* VAR */ int x4544 = 0;
    int x4545 = x4544;
    int* x4546 = &x4545;
    char* x4547 = strntoi_unchecked(x3, x4546);
    x3 = x4547;
    /* VAR */ double x4549 = 0.0;
    double x4550 = x4549;
    double* x4551 = &x4550;
    char* x4552 = strntod_unchecked(x3, x4551);
    x3 = x4552;
    /* VAR */ double x4554 = 0.0;
    double x4555 = x4554;
    double* x4556 = &x4555;
    char* x4557 = strntod_unchecked(x3, x4556);
    x3 = x4557;
    /* VAR */ double x4559 = 0.0;
    double x4560 = x4559;
    double* x4561 = &x4560;
    char* x4562 = strntod_unchecked(x3, x4561);
    x3 = x4562;
    /* VAR */ double x4564 = 0.0;
    double x4565 = x4564;
    double* x4566 = &x4565;
    char* x4567 = strntod_unchecked(x3, x4566);
    x3 = x4567;
    char x4569 = *x3;
    /* VAR */ char x4570 = x4569;
    x3 += 1;
    x3 += 1;
    char x4574 = *x3;
    /* VAR */ char x4575 = x4574;
    x3 += 1;
    x3 += 1;
    /* VAR */ int x4579 = 0;
    int x4580 = x4579;
    int* x4581 = &x4580;
    char* x4582 = strntoi_unchecked(x3, x4581);
    x3 = x4582;
    /* VAR */ int x4584 = 0;
    int x4585 = x4584;
    int* x4586 = &x4585;
    char* x4587 = strntoi_unchecked(x3, x4586);
    x3 = x4587;
    /* VAR */ int x4589 = 0;
    int x4590 = x4589;
    int* x4591 = &x4590;
    char* x4592 = strntoi_unchecked(x3, x4591);
    x3 = x4592;
    /* VAR */ int x4598 = 0;
    int x4599 = x4598;
    int* x4600 = &x4599;
    char* x4601 = strntoi_unchecked(x3, x4600);
    x3 = x4601;
    /* VAR */ int x4603 = 0;
    int x4604 = x4603;
    int* x4605 = &x4604;
    char* x4606 = strntoi_unchecked(x3, x4605);
    x3 = x4606;
    /* VAR */ int x4608 = 0;
    int x4609 = x4608;
    int* x4610 = &x4609;
    char* x4611 = strntoi_unchecked(x3, x4610);
    x3 = x4611;
    /* VAR */ int x4617 = 0;
    int x4618 = x4617;
    int* x4619 = &x4618;
    char* x4620 = strntoi_unchecked(x3, x4619);
    x3 = x4620;
    /* VAR */ int x4622 = 0;
    int x4623 = x4622;
    int* x4624 = &x4623;
    char* x4625 = strntoi_unchecked(x3, x4624);
    x3 = x4625;
    /* VAR */ int x4627 = 0;
    int x4628 = x4627;
    int* x4629 = &x4628;
    char* x4630 = strntoi_unchecked(x3, x4629);
    x3 = x4630;
    char* x5198 = (char*)malloc(26 * sizeof(char));
    memset(x5198, 0, 26 * sizeof(char));
    /* VAR */ char* x4637 = x3;
    while(1) {
      
      char x4638 = *x3;
      /* VAR */ int ite9151 = 0;
      if((x4638!=('|'))) {
        char x12543 = *x3;
        ite9151 = (x12543!=('\n'));
      } else {
        
        ite9151 = 0;
      };
      int x8676 = ite9151;
      if (!(x8676)) break; 
      
      x3 += 1;
    };
    char* x4645 = x4637;
    int x4646 = x3 - x4645;
    char* x4647 = x4637;
    char* x4648 = strncpy(x5198, x4647, x4646);
    x3 += 1;
    char* x5216 = (char*)malloc(11 * sizeof(char));
    memset(x5216, 0, 11 * sizeof(char));
    /* VAR */ char* x4656 = x3;
    while(1) {
      
      char x4657 = *x3;
      /* VAR */ int ite9174 = 0;
      if((x4657!=('|'))) {
        char x12565 = *x3;
        ite9174 = (x12565!=('\n'));
      } else {
        
        ite9174 = 0;
      };
      int x8692 = ite9174;
      if (!(x8692)) break; 
      
      x3 += 1;
    };
    char* x4664 = x4656;
    int x4665 = x3 - x4664;
    char* x4666 = x4656;
    char* x4667 = strncpy(x5216, x4666, x4665);
    x3 += 1;
    char* x5234 = (char*)malloc(45 * sizeof(char));
    memset(x5234, 0, 45 * sizeof(char));
    /* VAR */ char* x4675 = x3;
    while(1) {
      
      char x4676 = *x3;
      /* VAR */ int ite9197 = 0;
      if((x4676!=('|'))) {
        char x12587 = *x3;
        ite9197 = (x12587!=('\n'));
      } else {
        
        ite9197 = 0;
      };
      int x8708 = ite9197;
      if (!(x8708)) break; 
      
      x3 += 1;
    };
    char* x4683 = x4675;
    int x4684 = x3 - x4683;
    char* x4685 = x4675;
    char* x4686 = strncpy(x5234, x4685, x4684);
    x3 += 1;
    struct LINEITEMRecord* x5536 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x5536, 0, 1 * sizeof(struct LINEITEMRecord));
    x5536->L_QUANTITY = x4550; x5536->L_EXTENDEDPRICE = x4555; x5536->L_DISCOUNT = x4560; x5536->L_SHIPDATE = (((x4580*(10000))+((x4585*(100))))+(x4590));
    int x47 = x4;
    struct LINEITEMRecord x5254 = *x5536;
    *(x5072 + x47) = x5254;
    struct LINEITEMRecord* x5256 = &(x5072[x47]);
    x5536 = x5256;
    int x49 = x4;
    x4 = (x49+(1));
  };
  int x54 = 0;
  for(; x54 < 1 ; x54 += 1) {
    
    double* x12865 = (double*)malloc(1 * sizeof(double));
    memset(x12865, 0, 1 * sizeof(double));
    struct LINEITEMRecord** x12866 = (struct LINEITEMRecord**)malloc(96 * sizeof(struct LINEITEMRecord*));
    memset(x12866, 0, 96 * sizeof(struct LINEITEMRecord*));
    int* x12867 = (int*)malloc(96 * sizeof(int));
    memset(x12867, 0, 96 * sizeof(int));
    int x7838 = 0;
    for(; x7838 < 96 ; x7838 += 1) {
      
      struct LINEITEMRecord* x7841 = (struct LINEITEMRecord*)malloc(((x4506/(96))*(4)) * sizeof(struct LINEITEMRecord));
      memset(x7841, 0, ((x4506/(96))*(4)) * sizeof(struct LINEITEMRecord));
      *(x12866 + x7838) = x7841;
    };
    /* VAR */ int x12879 = 0;
    int x7867 = 0;
    for(; x7867 < x4506 ; x7867 += 1) {
      
      struct LINEITEMRecord* x7868 = &(x5072[x7867]);
      int x7870 = (x7868->L_SHIPDATE)/(100);
      int x7876 = (((x7870/(100))-(1992))*(12))+(((x7870%(100))-(1)));
      int x7877 = x12867[x7876];
      struct LINEITEMRecord* x7878 = x12866[x7876];
      struct LINEITEMRecord x7879 = *x7868;
      *(x7878 + x7877) = x7879;
      struct LINEITEMRecord* x7881 = &(x7878[x7877]);
      x7868 = x7881;
      *(x12867 + x7876) = (x7877+(1));
      int x7885 = x12879;
      x12879 = (x7885+(1));
    };
    /* VAR */ struct timeval x12923 = x4334;
    struct timeval x12924 = x12923;
    /* VAR */ struct timeval x12925 = x4334;
    struct timeval x12926 = x12925;
    /* VAR */ struct timeval x12927 = x4334;
    struct timeval x12928 = x12927;
    struct timeval* x12929 = &x12926;
    gettimeofday(x12929, NULL);
    int x7945 = 48;
    for(; x7945 < 61 ; x7945 += 1) {
      
      int x7946 = x12867[x7945];
      struct LINEITEMRecord* x7947 = x12866[x7945];
      int x7923 = 0;
      for(; x7923 < x7946 ; x7923 += 1) {
        
        struct LINEITEMRecord* x7924 = &(x7947[x7923]);
        int x7925 = x7924->L_SHIPDATE;
        /* VAR */ int ite9541 = 0;
        if((x7925>=(19960101))) {
          /* VAR */ int x13070 = 0;
          if((x7925<(19970101))) {
            double x13072 = x7924->L_DISCOUNT;
            /* VAR */ int x13074 = 0;
            if((x13072>=(0.08))) {
              /* VAR */ int x13077 = 0;
              if((x13072<=(0.1))) {
                x13077 = ((x7924->L_QUANTITY)<(24.0));
              } else {
                
                x13077 = 0;
              };
              int x13084 = x13077;
              x13074 = x13084;
            } else {
              
              x13074 = 0;
            };
            int x13088 = x13074;
            x13070 = x13088;
          } else {
            
            x13070 = 0;
          };
          int x13092 = x13070;
          ite9541 = x13092;
        } else {
          
          ite9541 = 0;
        };
        int x8989 = ite9541;
        if(x8989) {
          double x131 = x12865[0];
          *x12865 = (((x7924->L_EXTENDEDPRICE)*((x7924->L_DISCOUNT)))+(x131));
        };
      };
    };
    double x13104 = x12865[0];
    printf("%.4f\n", x13104);
    printf("(%d rows)\n", 1);
    struct timeval* x13107 = &x12928;
    gettimeofday(x13107, NULL);
    struct timeval* x13109 = &x12924;
    struct timeval* x13110 = &x12928;
    struct timeval* x13111 = &x12926;
    long x13112 = timeval_subtract(x13109, x13110, x13111);
    printf("Generated code run in %ld milliseconds.\n", x13112);
  };
}
/* ----------- FUNCTIONS ----------- */