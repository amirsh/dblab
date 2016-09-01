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
  int L_ORDERKEY;
  int L_PARTKEY;
  int L_SUPPKEY;
  int L_LINENUMBER;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  double L_TAX;
  char L_RETURNFLAG;
  char L_LINESTATUS;
  int L_SHIPDATE;
  int L_COMMITDATE;
  int L_RECEIPTDATE;
  char* L_SHIPINSTRUCT;
  char* L_SHIPMODE;
  char* L_COMMENT;
  };
  
  struct LINEITEMRecord_PARTRecord {
  int L_ORDERKEY;
  int L_PARTKEY;
  int L_SUPPKEY;
  int L_LINENUMBER;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  double L_TAX;
  char L_RETURNFLAG;
  char L_LINESTATUS;
  int L_SHIPDATE;
  int L_COMMITDATE;
  int L_RECEIPTDATE;
  char* L_SHIPINSTRUCT;
  char* L_SHIPMODE;
  char* L_COMMENT;
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  };
  
  


int x28540(char* x8350);

int x28542(char* x8355, char* x8356);

int x28548(void* x7125);

int x28551(void* x7128, void* x7129);
/* GLOBAL VARS */

struct timeval x3873;
int main(int argc, char** argv) {
  FILE* x4430 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x4431 = 0;
  int x4432 = x4431;
  int* x4433 = &x4432;
  int x4434 = fscanf(x4430, "%d", x4433);
  pclose(x4430);
  struct LINEITEMRecord** x5612 = (struct LINEITEMRecord**)malloc(x4432 * sizeof(struct LINEITEMRecord*));
  memset(x5612, 0, x4432 * sizeof(struct LINEITEMRecord*));
  int x4438 = O_RDONLY;
  int x4439 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x4438);
  struct stat x4440 = (struct stat){0};
  /* VAR */ struct stat x4441 = x4440;
  struct stat x4442 = x4441;
  struct stat* x4443 = &x4442;
  int x4444 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x4443);
  size_t x4445 = x4443->st_size;
  int x4446 = PROT_READ;
  int x4447 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x4445, x4446, x4447, x4439, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x4432);
    /* VAR */ int ite19522 = 0;
    if(x6) {
      char x27329 = *x3;
      int x27330 = x27329!=('\0');
      ite19522 = x27330;
    } else {
      
      ite19522 = 0;
    };
    int x18603 = ite19522;
    if (!(x18603)) break; 
    
    /* VAR */ int x4455 = 0;
    int x4456 = x4455;
    int* x4457 = &x4456;
    char* x4458 = strntoi_unchecked(x3, x4457);
    x3 = x4458;
    /* VAR */ int x4460 = 0;
    int x4461 = x4460;
    int* x4462 = &x4461;
    char* x4463 = strntoi_unchecked(x3, x4462);
    x3 = x4463;
    /* VAR */ int x4465 = 0;
    int x4466 = x4465;
    int* x4467 = &x4466;
    char* x4468 = strntoi_unchecked(x3, x4467);
    x3 = x4468;
    /* VAR */ int x4470 = 0;
    int x4471 = x4470;
    int* x4472 = &x4471;
    char* x4473 = strntoi_unchecked(x3, x4472);
    x3 = x4473;
    /* VAR */ double x4475 = 0.0;
    double x4476 = x4475;
    double* x4477 = &x4476;
    char* x4478 = strntod_unchecked(x3, x4477);
    x3 = x4478;
    /* VAR */ double x4480 = 0.0;
    double x4481 = x4480;
    double* x4482 = &x4481;
    char* x4483 = strntod_unchecked(x3, x4482);
    x3 = x4483;
    /* VAR */ double x4485 = 0.0;
    double x4486 = x4485;
    double* x4487 = &x4486;
    char* x4488 = strntod_unchecked(x3, x4487);
    x3 = x4488;
    /* VAR */ double x4490 = 0.0;
    double x4491 = x4490;
    double* x4492 = &x4491;
    char* x4493 = strntod_unchecked(x3, x4492);
    x3 = x4493;
    char x4495 = *x3;
    /* VAR */ char x4496 = x4495;
    x3 += 1;
    x3 += 1;
    char x4499 = x4496;
    char x4500 = *x3;
    /* VAR */ char x4501 = x4500;
    x3 += 1;
    x3 += 1;
    char x4504 = x4501;
    /* VAR */ int x4505 = 0;
    int x4506 = x4505;
    int* x4507 = &x4506;
    char* x4508 = strntoi_unchecked(x3, x4507);
    x3 = x4508;
    /* VAR */ int x4510 = 0;
    int x4511 = x4510;
    int* x4512 = &x4511;
    char* x4513 = strntoi_unchecked(x3, x4512);
    x3 = x4513;
    /* VAR */ int x4515 = 0;
    int x4516 = x4515;
    int* x4517 = &x4516;
    char* x4518 = strntoi_unchecked(x3, x4517);
    x3 = x4518;
    int x4520 = x4506*(10000);
    int x4521 = x4511*(100);
    int x4522 = x4520+(x4521);
    int x4523 = x4522+(x4516);
    /* VAR */ int x4524 = 0;
    int x4525 = x4524;
    int* x4526 = &x4525;
    char* x4527 = strntoi_unchecked(x3, x4526);
    x3 = x4527;
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
    int x4539 = x4525*(10000);
    int x4540 = x4530*(100);
    int x4541 = x4539+(x4540);
    int x4542 = x4541+(x4535);
    /* VAR */ int x4543 = 0;
    int x4544 = x4543;
    int* x4545 = &x4544;
    char* x4546 = strntoi_unchecked(x3, x4545);
    x3 = x4546;
    /* VAR */ int x4548 = 0;
    int x4549 = x4548;
    int* x4550 = &x4549;
    char* x4551 = strntoi_unchecked(x3, x4550);
    x3 = x4551;
    /* VAR */ int x4553 = 0;
    int x4554 = x4553;
    int* x4555 = &x4554;
    char* x4556 = strntoi_unchecked(x3, x4555);
    x3 = x4556;
    int x4558 = x4544*(10000);
    int x4559 = x4549*(100);
    int x4560 = x4558+(x4559);
    int x4561 = x4560+(x4554);
    char* x5738 = (char*)malloc(26 * sizeof(char));
    memset(x5738, 0, 26 * sizeof(char));
    /* VAR */ char* x4563 = x3;
    while(1) {
      
      char x4564 = *x3;
      int x4565 = x4564!=('|');
      /* VAR */ int ite19643 = 0;
      if(x4565) {
        char x27449 = *x3;
        int x27450 = x27449!=('\n');
        ite19643 = x27450;
      } else {
        
        ite19643 = 0;
      };
      int x18717 = ite19643;
      if (!(x18717)) break; 
      
      x3 += 1;
    };
    char* x4571 = x4563;
    int x4572 = x3 - x4571;
    char* x4573 = x4563;
    char* x4574 = strncpy(x5738, x4573, x4572);
    x3 += 1;
    char* x5756 = (char*)malloc(11 * sizeof(char));
    memset(x5756, 0, 11 * sizeof(char));
    /* VAR */ char* x4582 = x3;
    while(1) {
      
      char x4583 = *x3;
      int x4584 = x4583!=('|');
      /* VAR */ int ite19666 = 0;
      if(x4584) {
        char x27471 = *x3;
        int x27472 = x27471!=('\n');
        ite19666 = x27472;
      } else {
        
        ite19666 = 0;
      };
      int x18733 = ite19666;
      if (!(x18733)) break; 
      
      x3 += 1;
    };
    char* x4590 = x4582;
    int x4591 = x3 - x4590;
    char* x4592 = x4582;
    char* x4593 = strncpy(x5756, x4592, x4591);
    x3 += 1;
    char* x5774 = (char*)malloc(45 * sizeof(char));
    memset(x5774, 0, 45 * sizeof(char));
    /* VAR */ char* x4601 = x3;
    while(1) {
      
      char x4602 = *x3;
      int x4603 = x4602!=('|');
      /* VAR */ int ite19689 = 0;
      if(x4603) {
        char x27493 = *x3;
        int x27494 = x27493!=('\n');
        ite19689 = x27494;
      } else {
        
        ite19689 = 0;
      };
      int x18749 = ite19689;
      if (!(x18749)) break; 
      
      x3 += 1;
    };
    char* x4609 = x4601;
    int x4610 = x3 - x4609;
    char* x4611 = x4601;
    char* x4612 = strncpy(x5774, x4611, x4610);
    x3 += 1;
    struct LINEITEMRecord* x6371 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x6371, 0, 1 * sizeof(struct LINEITEMRecord));
    x6371->L_ORDERKEY = x4456; x6371->L_PARTKEY = x4461; x6371->L_SUPPKEY = x4466; x6371->L_LINENUMBER = x4471; x6371->L_QUANTITY = x4476; x6371->L_EXTENDEDPRICE = x4481; x6371->L_DISCOUNT = x4486; x6371->L_TAX = x4491; x6371->L_RETURNFLAG = x4499; x6371->L_LINESTATUS = x4504; x6371->L_SHIPDATE = x4523; x6371->L_COMMITDATE = x4542; x6371->L_RECEIPTDATE = x4561; x6371->L_SHIPINSTRUCT = x5738; x6371->L_SHIPMODE = x5756; x6371->L_COMMENT = x5774;
    int x47 = x4;
    *(x5612 + x47) = x6371;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x4625 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x4626 = 0;
  int x4627 = x4626;
  int* x4628 = &x4627;
  int x4629 = fscanf(x4625, "%d", x4628);
  pclose(x4625);
  struct PARTRecord** x5804 = (struct PARTRecord**)malloc(x4627 * sizeof(struct PARTRecord*));
  memset(x5804, 0, x4627 * sizeof(struct PARTRecord*));
  int x4633 = O_RDONLY;
  int x4634 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x4633);
  /* VAR */ struct stat x4635 = x4440;
  struct stat x4636 = x4635;
  struct stat* x4637 = &x4636;
  int x4638 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x4637);
  size_t x4639 = x4637->st_size;
  int x4640 = PROT_READ;
  int x4641 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x4639, x4640, x4641, x4634, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x4627);
    /* VAR */ int ite19736 = 0;
    if(x58) {
      char x27539 = *x55;
      int x27540 = x27539!=('\0');
      ite19736 = x27540;
    } else {
      
      ite19736 = 0;
    };
    int x18789 = ite19736;
    if (!(x18789)) break; 
    
    /* VAR */ int x4649 = 0;
    int x4650 = x4649;
    int* x4651 = &x4650;
    char* x4652 = strntoi_unchecked(x55, x4651);
    x55 = x4652;
    char* x5827 = (char*)malloc(56 * sizeof(char));
    memset(x5827, 0, 56 * sizeof(char));
    /* VAR */ char* x4655 = x55;
    while(1) {
      
      char x4656 = *x55;
      int x4657 = x4656!=('|');
      /* VAR */ int ite19755 = 0;
      if(x4657) {
        char x27557 = *x55;
        int x27558 = x27557!=('\n');
        ite19755 = x27558;
      } else {
        
        ite19755 = 0;
      };
      int x18801 = ite19755;
      if (!(x18801)) break; 
      
      x55 += 1;
    };
    char* x4663 = x4655;
    int x4664 = x55 - x4663;
    char* x4665 = x4655;
    char* x4666 = strncpy(x5827, x4665, x4664);
    x55 += 1;
    char* x5845 = (char*)malloc(26 * sizeof(char));
    memset(x5845, 0, 26 * sizeof(char));
    /* VAR */ char* x4674 = x55;
    while(1) {
      
      char x4675 = *x55;
      int x4676 = x4675!=('|');
      /* VAR */ int ite19778 = 0;
      if(x4676) {
        char x27579 = *x55;
        int x27580 = x27579!=('\n');
        ite19778 = x27580;
      } else {
        
        ite19778 = 0;
      };
      int x18817 = ite19778;
      if (!(x18817)) break; 
      
      x55 += 1;
    };
    char* x4682 = x4674;
    int x4683 = x55 - x4682;
    char* x4684 = x4674;
    char* x4685 = strncpy(x5845, x4684, x4683);
    x55 += 1;
    char* x5863 = (char*)malloc(11 * sizeof(char));
    memset(x5863, 0, 11 * sizeof(char));
    /* VAR */ char* x4693 = x55;
    while(1) {
      
      char x4694 = *x55;
      int x4695 = x4694!=('|');
      /* VAR */ int ite19801 = 0;
      if(x4695) {
        char x27601 = *x55;
        int x27602 = x27601!=('\n');
        ite19801 = x27602;
      } else {
        
        ite19801 = 0;
      };
      int x18833 = ite19801;
      if (!(x18833)) break; 
      
      x55 += 1;
    };
    char* x4701 = x4693;
    int x4702 = x55 - x4701;
    char* x4703 = x4693;
    char* x4704 = strncpy(x5863, x4703, x4702);
    x55 += 1;
    char* x5881 = (char*)malloc(26 * sizeof(char));
    memset(x5881, 0, 26 * sizeof(char));
    /* VAR */ char* x4712 = x55;
    while(1) {
      
      char x4713 = *x55;
      int x4714 = x4713!=('|');
      /* VAR */ int ite19824 = 0;
      if(x4714) {
        char x27623 = *x55;
        int x27624 = x27623!=('\n');
        ite19824 = x27624;
      } else {
        
        ite19824 = 0;
      };
      int x18849 = ite19824;
      if (!(x18849)) break; 
      
      x55 += 1;
    };
    char* x4720 = x4712;
    int x4721 = x55 - x4720;
    char* x4722 = x4712;
    char* x4723 = strncpy(x5881, x4722, x4721);
    x55 += 1;
    /* VAR */ int x4730 = 0;
    int x4731 = x4730;
    int* x4732 = &x4731;
    char* x4733 = strntoi_unchecked(x55, x4732);
    x55 = x4733;
    char* x5904 = (char*)malloc(11 * sizeof(char));
    memset(x5904, 0, 11 * sizeof(char));
    /* VAR */ char* x4736 = x55;
    while(1) {
      
      char x4737 = *x55;
      int x4738 = x4737!=('|');
      /* VAR */ int ite19852 = 0;
      if(x4738) {
        char x27650 = *x55;
        int x27651 = x27650!=('\n');
        ite19852 = x27651;
      } else {
        
        ite19852 = 0;
      };
      int x18870 = ite19852;
      if (!(x18870)) break; 
      
      x55 += 1;
    };
    char* x4744 = x4736;
    int x4745 = x55 - x4744;
    char* x4746 = x4736;
    char* x4747 = strncpy(x5904, x4746, x4745);
    x55 += 1;
    /* VAR */ double x4754 = 0.0;
    double x4755 = x4754;
    double* x4756 = &x4755;
    char* x4757 = strntod_unchecked(x55, x4756);
    x55 = x4757;
    char* x5927 = (char*)malloc(24 * sizeof(char));
    memset(x5927, 0, 24 * sizeof(char));
    /* VAR */ char* x4760 = x55;
    while(1) {
      
      char x4761 = *x55;
      int x4762 = x4761!=('|');
      /* VAR */ int ite19880 = 0;
      if(x4762) {
        char x27677 = *x55;
        int x27678 = x27677!=('\n');
        ite19880 = x27678;
      } else {
        
        ite19880 = 0;
      };
      int x18891 = ite19880;
      if (!(x18891)) break; 
      
      x55 += 1;
    };
    char* x4768 = x4760;
    int x4769 = x55 - x4768;
    char* x4770 = x4760;
    char* x4771 = strncpy(x5927, x4770, x4769);
    x55 += 1;
    struct PARTRecord* x6526 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x6526, 0, 1 * sizeof(struct PARTRecord));
    x6526->P_PARTKEY = x4650; x6526->P_NAME = x5827; x6526->P_MFGR = x5845; x6526->P_BRAND = x5863; x6526->P_TYPE = x5881; x6526->P_SIZE = x4731; x6526->P_CONTAINER = x5904; x6526->P_RETAILPRICE = x4755; x6526->P_COMMENT = x5927;
    int x111 = x56;
    *(x5804 + x111) = x6526;
    int x113 = x56;
    int x114 = x113+(1);
    x56 = x114;
  };
  int x118 = 0;
  for(; x118 < 1 ; x118 += 1) {
    
    GHashTable* x28547 = g_hash_table_new(x28540, x28542);
    void*** x28555 = (void***){x28548};
    int* x28556 = (int*){x28551};
    GHashTable* x28557 = g_hash_table_new(x28555, x28556);
    /* VAR */ struct timeval x28558 = x3873;
    struct timeval x28559 = x28558;
    /* VAR */ struct timeval x28560 = x3873;
    struct timeval x28561 = x28560;
    /* VAR */ struct timeval x28562 = x3873;
    struct timeval x28563 = x28562;
    struct timeval* x28564 = &x28561;
    gettimeofday(x28564, NULL);
    /* VAR */ int x28566 = 0;
    /* VAR */ int x28567 = 0;
    /* VAR */ int x28568 = 0;
    /* VAR */ int x28569 = 0;
    while(1) {
      
      int x28571 = x28567;
      int x28572 = x28571<(x4432);
      if (!(x28572)) break; 
      
      int x2434 = x28567;
      struct LINEITEMRecord* x321 = x5612[x2434];
      double x323 = x321->L_QUANTITY;
      int x325 = x323<=(36.0);
      /* VAR */ int ite20445 = 0;
      if(x325) {
        int x28579 = x323>=(26.0);
        ite20445 = x28579;
      } else {
        
        ite20445 = 0;
      };
      int x19243 = ite20445;
      /* VAR */ int ite20453 = 0;
      if(x19243) {
        ite20453 = 1;
      } else {
        
        int x28587 = x323<=(25.0);
        /* VAR */ int x28588 = 0;
        if(x28587) {
          int x28590 = x323>=(15.0);
          x28588 = x28590;
        } else {
          
          x28588 = 0;
        };
        int x28594 = x28588;
        ite20453 = x28594;
      };
      int x19245 = ite20453;
      /* VAR */ int ite20463 = 0;
      if(x19245) {
        ite20463 = 1;
      } else {
        
        int x28601 = x323<=(14.0);
        /* VAR */ int x28602 = 0;
        if(x28601) {
          int x28604 = x323>=(4.0);
          x28602 = x28604;
        } else {
          
          x28602 = 0;
        };
        int x28608 = x28602;
        ite20463 = x28608;
      };
      int x19247 = ite20463;
      /* VAR */ int ite20473 = 0;
      if(x19247) {
        char* x28614 = x321->L_SHIPINSTRUCT;
        int x28615 = strcmp(x28614, "DELIVER IN PERSON");
        int x28616 = x28615==(0);
        ite20473 = x28616;
      } else {
        
        ite20473 = 0;
      };
      int x19249 = ite20473;
      /* VAR */ int ite20483 = 0;
      if(x19249) {
        char* x28623 = x321->L_SHIPMODE;
        int x28624 = strcmp(x28623, "AIR");
        int x28625 = x28624==(0);
        /* VAR */ int x28626 = 0;
        if(x28625) {
          x28626 = 1;
        } else {
          
          int x28629 = strcmp(x28623, "AIRREG");
          int x28630 = x28629==(0);
          x28626 = x28630;
        };
        int x28633 = x28626;
        ite20483 = x28633;
      } else {
        
        ite20483 = 0;
      };
      int x19251 = ite20483;
      if(x19251) {
        int x349 = x321->L_PARTKEY;
        void* x7175 = (void*){x349};
        void* x7176 = (void*){x321};
        void* x7177 = g_hash_table_lookup(x28557, x7175);
        GList** x7178 = (GList**){x7177};
        GList** x7179 = NULL;
        int x7180 = x7178==(x7179);
        /* VAR */ GList** ite19261 = 0;
        if(x7180) {
          GList** x19262 = malloc(8);
          GList* x19263 = NULL;
          pointer_assign(x19262, x19263);
          ite19261 = x19262;
        } else {
          
          ite19261 = x7178;
        };
        GList** x7184 = ite19261;
        GList* x7185 = *(x7184);
        GList* x7186 = g_list_prepend(x7185, x7176);
        pointer_assign(x7184, x7186);
        void* x7188 = (void*){x7184};
        g_hash_table_insert(x28557, x7175, x7188);
      };
      int x2466 = x28567;
      int x354 = x2466+(1);
      x28567 = x354;
    };
    while(1) {
      
      int x28664 = x28566;
      int x28665 = x28664<(x4627);
      if (!(x28665)) break; 
      
      int x2475 = x28566;
      struct PARTRecord* x363 = x5804[x2475];
      int x365 = x363->P_SIZE;
      int x366 = x365>=(1);
      /* VAR */ int ite20528 = 0;
      if(x366) {
        int x28672 = x365<=(5);
        /* VAR */ int x28673 = 0;
        if(x28672) {
          char* x28675 = x363->P_BRAND;
          int x28676 = strcmp(x28675, "Brand#31");
          int x28677 = x28676==(0);
          x28673 = x28677;
        } else {
          
          x28673 = 0;
        };
        int x28681 = x28673;
        /* VAR */ int x28682 = 0;
        if(x28681) {
          char* x28684 = x363->P_CONTAINER;
          int x28685 = strcmp(x28684, "SM BOX");
          int x28686 = x28685==(0);
          /* VAR */ int x28687 = 0;
          if(x28686) {
            x28687 = 1;
          } else {
            
            int x28690 = strcmp(x28684, "SM CASE");
            int x28691 = x28690==(0);
            x28687 = x28691;
          };
          int x28694 = x28687;
          /* VAR */ int x28695 = 0;
          if(x28694) {
            x28695 = 1;
          } else {
            
            int x28698 = strcmp(x28684, "SM PACK");
            int x28699 = x28698==(0);
            x28695 = x28699;
          };
          int x28702 = x28695;
          /* VAR */ int x28703 = 0;
          if(x28702) {
            x28703 = 1;
          } else {
            
            int x28706 = strcmp(x28684, "SM PKG");
            int x28707 = x28706==(0);
            x28703 = x28707;
          };
          int x28710 = x28703;
          x28682 = x28710;
        } else {
          
          x28682 = 0;
        };
        int x28714 = x28682;
        ite20528 = x28714;
      } else {
        
        ite20528 = 0;
      };
      int x19284 = ite20528;
      /* VAR */ int ite20540 = 0;
      if(x19284) {
        ite20540 = 1;
      } else {
        
        int x28722 = x365<=(10);
        /* VAR */ int x28723 = 0;
        if(x28722) {
          char* x28725 = x363->P_BRAND;
          int x28726 = strcmp(x28725, "Brand#43");
          int x28727 = x28726==(0);
          x28723 = x28727;
        } else {
          
          x28723 = 0;
        };
        int x28731 = x28723;
        /* VAR */ int x28732 = 0;
        if(x28731) {
          char* x28734 = x363->P_CONTAINER;
          int x28735 = strcmp(x28734, "MED BAG");
          int x28736 = x28735==(0);
          /* VAR */ int x28737 = 0;
          if(x28736) {
            x28737 = 1;
          } else {
            
            int x28740 = strcmp(x28734, "MED BOX");
            int x28741 = x28740==(0);
            x28737 = x28741;
          };
          int x28744 = x28737;
          /* VAR */ int x28745 = 0;
          if(x28744) {
            x28745 = 1;
          } else {
            
            int x28748 = strcmp(x28734, "MED PACK");
            int x28749 = x28748==(0);
            x28745 = x28749;
          };
          int x28752 = x28745;
          /* VAR */ int x28753 = 0;
          if(x28752) {
            x28753 = 1;
          } else {
            
            int x28756 = strcmp(x28734, "MED PKG");
            int x28757 = x28756==(0);
            x28753 = x28757;
          };
          int x28760 = x28753;
          x28732 = x28760;
        } else {
          
          x28732 = 0;
        };
        int x28764 = x28732;
        ite20540 = x28764;
      };
      int x19286 = ite20540;
      /* VAR */ int ite20552 = 0;
      if(x19286) {
        ite20552 = 1;
      } else {
        
        int x28771 = x365<=(15);
        /* VAR */ int x28772 = 0;
        if(x28771) {
          char* x28774 = x363->P_BRAND;
          int x28775 = strcmp(x28774, "Brand#43");
          int x28776 = x28775==(0);
          x28772 = x28776;
        } else {
          
          x28772 = 0;
        };
        int x28780 = x28772;
        /* VAR */ int x28781 = 0;
        if(x28780) {
          char* x28783 = x363->P_CONTAINER;
          int x28784 = strcmp(x28783, "LG BOX");
          int x28785 = x28784==(0);
          /* VAR */ int x28786 = 0;
          if(x28785) {
            x28786 = 1;
          } else {
            
            int x28789 = strcmp(x28783, "LG CASE");
            int x28790 = x28789==(0);
            x28786 = x28790;
          };
          int x28793 = x28786;
          /* VAR */ int x28794 = 0;
          if(x28793) {
            x28794 = 1;
          } else {
            
            int x28797 = strcmp(x28783, "LG PACK");
            int x28798 = x28797==(0);
            x28794 = x28798;
          };
          int x28801 = x28794;
          /* VAR */ int x28802 = 0;
          if(x28801) {
            x28802 = 1;
          } else {
            
            int x28805 = strcmp(x28783, "LG PKG");
            int x28806 = x28805==(0);
            x28802 = x28806;
          };
          int x28809 = x28802;
          x28781 = x28809;
        } else {
          
          x28781 = 0;
        };
        int x28813 = x28781;
        ite20552 = x28813;
      };
      int x19288 = ite20552;
      if(x19288) {
        int x409 = x363->P_PARTKEY;
        void* x7245 = (void*){x409};
        void* x7246 = g_hash_table_lookup(x28557, x7245);
        GList** x7247 = (GList**){x7246};
        int x12311 = x7247!=(NULL);
        if(x12311) {
          GList* x8601 = *(x7247);
          /* VAR */ GList* x8602 = x8601;
          while(1) {
            
            GList* x8603 = x8602;
            GList* x8604 = NULL;
            int x8605 = x8603!=(x8604);
            if (!(x8605)) break; 
            
            GList* x8606 = x8602;
            void* x8607 = g_list_nth_data(x8606, 0);
            struct LINEITEMRecord* x8608 = (struct LINEITEMRecord*){x8607};
            GList* x8609 = x8602;
            GList* x8610 = g_list_next(x8609);
            x8602 = x8610;
            int x8612 = x8608->L_PARTKEY;
            int x8613 = x409==(x8612);
            if(x8613) {
              int x1227 = x8608->L_ORDERKEY;
              int x1228 = x8608->L_SUPPKEY;
              int x1229 = x8608->L_LINENUMBER;
              double x1230 = x8608->L_QUANTITY;
              double x1231 = x8608->L_EXTENDEDPRICE;
              double x1232 = x8608->L_DISCOUNT;
              double x1233 = x8608->L_TAX;
              char x1234 = x8608->L_RETURNFLAG;
              char x1235 = x8608->L_LINESTATUS;
              int x1236 = x8608->L_SHIPDATE;
              int x1237 = x8608->L_COMMITDATE;
              int x1238 = x8608->L_RECEIPTDATE;
              char* x1239 = x8608->L_SHIPINSTRUCT;
              char* x1240 = x8608->L_SHIPMODE;
              char* x1241 = x8608->L_COMMENT;
              char* x1242 = x363->P_NAME;
              char* x1243 = x363->P_MFGR;
              char* x1244 = x363->P_BRAND;
              char* x1245 = x363->P_TYPE;
              char* x1246 = x363->P_CONTAINER;
              double x1247 = x363->P_RETAILPRICE;
              char* x1248 = x363->P_COMMENT;
              struct LINEITEMRecord_PARTRecord* x6666 = (struct LINEITEMRecord_PARTRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord));
              memset(x6666, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord));
              x6666->L_ORDERKEY = x1227; x6666->L_PARTKEY = x8612; x6666->L_SUPPKEY = x1228; x6666->L_LINENUMBER = x1229; x6666->L_QUANTITY = x1230; x6666->L_EXTENDEDPRICE = x1231; x6666->L_DISCOUNT = x1232; x6666->L_TAX = x1233; x6666->L_RETURNFLAG = x1234; x6666->L_LINESTATUS = x1235; x6666->L_SHIPDATE = x1236; x6666->L_COMMITDATE = x1237; x6666->L_RECEIPTDATE = x1238; x6666->L_SHIPINSTRUCT = x1239; x6666->L_SHIPMODE = x1240; x6666->L_COMMENT = x1241; x6666->P_PARTKEY = x409; x6666->P_NAME = x1242; x6666->P_MFGR = x1243; x6666->P_BRAND = x1244; x6666->P_TYPE = x1245; x6666->P_SIZE = x365; x6666->P_CONTAINER = x1246; x6666->P_RETAILPRICE = x1247; x6666->P_COMMENT = x1248;
              char* x523 = x6666->P_BRAND;
              int x15529 = strcmp(x523, "Brand#31");
              int x15530 = x15529==(0);
              /* VAR */ int ite20746 = 0;
              if(x15530) {
                char* x29111 = x6666->P_CONTAINER;
                int x29112 = strcmp(x29111, "SM BOX");
                int x29113 = x29112==(0);
                /* VAR */ int x29114 = 0;
                if(x29113) {
                  x29114 = 1;
                } else {
                  
                  int x29117 = strcmp(x29111, "SM CASE");
                  int x29118 = x29117==(0);
                  x29114 = x29118;
                };
                int x29121 = x29114;
                /* VAR */ int x29122 = 0;
                if(x29121) {
                  x29122 = 1;
                } else {
                  
                  int x29125 = strcmp(x29111, "SM PACK");
                  int x29126 = x29125==(0);
                  x29122 = x29126;
                };
                int x29129 = x29122;
                /* VAR */ int x29130 = 0;
                if(x29129) {
                  x29130 = 1;
                } else {
                  
                  int x29133 = strcmp(x29111, "SM PKG");
                  int x29134 = x29133==(0);
                  x29130 = x29134;
                };
                int x29137 = x29130;
                ite20746 = x29137;
              } else {
                
                ite20746 = 0;
              };
              int x19407 = ite20746;
              /* VAR */ int ite20762 = 0;
              if(x19407) {
                double x29144 = x6666->L_QUANTITY;
                int x29145 = x29144>=(4.0);
                ite20762 = x29145;
              } else {
                
                ite20762 = 0;
              };
              int x19409 = ite20762;
              /* VAR */ int ite20771 = 0;
              if(x19409) {
                double x29152 = x6666->L_QUANTITY;
                int x29153 = x29152<=(14.0);
                ite20771 = x29153;
              } else {
                
                ite20771 = 0;
              };
              int x19411 = ite20771;
              /* VAR */ int ite20780 = 0;
              if(x19411) {
                int x29160 = x6666->P_SIZE;
                int x29161 = x29160<=(5);
                ite20780 = x29161;
              } else {
                
                ite20780 = 0;
              };
              int x19413 = ite20780;
              /* VAR */ int ite20789 = 0;
              if(x19413) {
                ite20789 = 1;
              } else {
                
                int x29169 = strcmp(x523, "Brand#43");
                int x29170 = x29169==(0);
                /* VAR */ int x29171 = 0;
                if(x29170) {
                  char* x29173 = x6666->P_CONTAINER;
                  int x29174 = strcmp(x29173, "MED BAG");
                  int x29175 = x29174==(0);
                  /* VAR */ int x29176 = 0;
                  if(x29175) {
                    x29176 = 1;
                  } else {
                    
                    int x29179 = strcmp(x29173, "MED BOX");
                    int x29180 = x29179==(0);
                    x29176 = x29180;
                  };
                  int x29183 = x29176;
                  /* VAR */ int x29184 = 0;
                  if(x29183) {
                    x29184 = 1;
                  } else {
                    
                    int x29187 = strcmp(x29173, "MED PACK");
                    int x29188 = x29187==(0);
                    x29184 = x29188;
                  };
                  int x29191 = x29184;
                  /* VAR */ int x29192 = 0;
                  if(x29191) {
                    x29192 = 1;
                  } else {
                    
                    int x29195 = strcmp(x29173, "MED PKG");
                    int x29196 = x29195==(0);
                    x29192 = x29196;
                  };
                  int x29199 = x29192;
                  x29171 = x29199;
                } else {
                  
                  x29171 = 0;
                };
                int x29203 = x29171;
                /* VAR */ int x29204 = 0;
                if(x29203) {
                  double x29206 = x6666->L_QUANTITY;
                  int x29207 = x29206>=(15.0);
                  x29204 = x29207;
                } else {
                  
                  x29204 = 0;
                };
                int x29211 = x29204;
                /* VAR */ int x29212 = 0;
                if(x29211) {
                  double x29214 = x6666->L_QUANTITY;
                  int x29215 = x29214<=(25.0);
                  x29212 = x29215;
                } else {
                  
                  x29212 = 0;
                };
                int x29219 = x29212;
                /* VAR */ int x29220 = 0;
                if(x29219) {
                  int x29222 = x6666->P_SIZE;
                  int x29223 = x29222<=(10);
                  x29220 = x29223;
                } else {
                  
                  x29220 = 0;
                };
                int x29227 = x29220;
                ite20789 = x29227;
              };
              int x19415 = ite20789;
              /* VAR */ int ite20806 = 0;
              if(x19415) {
                ite20806 = 1;
              } else {
                
                int x29234 = strcmp(x523, "Brand#43");
                int x29235 = x29234==(0);
                /* VAR */ int x29236 = 0;
                if(x29235) {
                  char* x29238 = x6666->P_CONTAINER;
                  int x29239 = strcmp(x29238, "LG BOX");
                  int x29240 = x29239==(0);
                  /* VAR */ int x29241 = 0;
                  if(x29240) {
                    x29241 = 1;
                  } else {
                    
                    int x29244 = strcmp(x29238, "LG CASE");
                    int x29245 = x29244==(0);
                    x29241 = x29245;
                  };
                  int x29248 = x29241;
                  /* VAR */ int x29249 = 0;
                  if(x29248) {
                    x29249 = 1;
                  } else {
                    
                    int x29252 = strcmp(x29238, "LG PACK");
                    int x29253 = x29252==(0);
                    x29249 = x29253;
                  };
                  int x29256 = x29249;
                  /* VAR */ int x29257 = 0;
                  if(x29256) {
                    x29257 = 1;
                  } else {
                    
                    int x29260 = strcmp(x29238, "LG PKG");
                    int x29261 = x29260==(0);
                    x29257 = x29261;
                  };
                  int x29264 = x29257;
                  x29236 = x29264;
                } else {
                  
                  x29236 = 0;
                };
                int x29268 = x29236;
                /* VAR */ int x29269 = 0;
                if(x29268) {
                  double x29271 = x6666->L_QUANTITY;
                  int x29272 = x29271>=(26.0);
                  x29269 = x29272;
                } else {
                  
                  x29269 = 0;
                };
                int x29276 = x29269;
                /* VAR */ int x29277 = 0;
                if(x29276) {
                  double x29279 = x6666->L_QUANTITY;
                  int x29280 = x29279<=(36.0);
                  x29277 = x29280;
                } else {
                  
                  x29277 = 0;
                };
                int x29284 = x29277;
                /* VAR */ int x29285 = 0;
                if(x29284) {
                  int x29287 = x6666->P_SIZE;
                  int x29288 = x29287<=(15);
                  x29285 = x29288;
                } else {
                  
                  x29285 = 0;
                };
                int x29292 = x29285;
                ite20806 = x29292;
              };
              int x19417 = ite20806;
              if(x19417) {
                void* x8701 = g_hash_table_lookup(x28547, "Total");
                int x8582 = x8701==(NULL);
                /* VAR */ struct AGGRecord_String* ite19422 = 0;
                if(x8582) {
                  double* x19423 = (double*)malloc(1 * sizeof(double));
                  memset(x19423, 0, 1 * sizeof(double));
                  struct AGGRecord_String* x19424 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
                  memset(x19424, 0, 1 * sizeof(struct AGGRecord_String));
                  x19424->key = "Total"; x19424->aggs = x19423;
                  g_hash_table_insert(x28547, "Total", x19424);
                  ite19422 = x19424;
                } else {
                  
                  ite19422 = x8701;
                };
                struct AGGRecord_String* x8592 = ite19422;
                double* x593 = x8592->aggs;
                double x607 = x593[0];
                double x608 = x6666->L_EXTENDEDPRICE;
                double x609 = x6666->L_DISCOUNT;
                double x610 = 1.0-(x609);
                double x611 = x608*(x610);
                double x612 = x607+(x611);
                *x593 = x612;
              };
            };
          };
        };
      };
      int x2778 = x28566;
      int x625 = x2778+(1);
      x28566 = x625;
    };
    GList* x29332 = g_hash_table_get_keys(x28547);
    /* VAR */ GList* x29333 = x29332;
    int x29334 = g_hash_table_size(x28547);
    int x17260 = 0;
    for(; x17260 < x29334 ; x17260 += 1) {
      
      GList* x17261 = x29333;
      void* x17262 = g_list_nth_data(x17261, 0);
      GList* x17263 = g_list_next(x17261);
      x29333 = x17263;
      void* x17265 = g_hash_table_lookup(x28547, x17262);
      struct AGGRecord_String* x17267 = (struct AGGRecord_String*){x17265};
      if(0) {
        x28568 = 1;
      } else {
        
        double* x637 = x17267->aggs;
        double x638 = x637[0];
        printf("%.4f\n", x638);
        int x2794 = x28569;
        int x641 = x2794+(1);
        x28569 = x641;
      };
    };
    int x29368 = x28569;
    printf("(%d rows)\n", x29368);
    struct timeval* x29370 = &x28563;
    gettimeofday(x29370, NULL);
    struct timeval* x29372 = &x28559;
    struct timeval* x29373 = &x28563;
    struct timeval* x29374 = &x28561;
    long x29375 = timeval_subtract(x29372, x29373, x29374);
    printf("Generated code run in %ld milliseconds.\n", x29375);
  };
}
/* ----------- FUNCTIONS ----------- */
int x28540(char* x8350) {
  return 0; 
}

int x28542(char* x8355, char* x8356) {
  int x13707 = strcmp(x8355, x8356);
  int x13708 = !(x13707);
  return x13708; 
}

int x28548(void* x7125) {
  int x7126 = g_direct_hash(x7125);
  return x7126; 
}

int x28551(void* x7128, void* x7129) {
  int x7130 = g_direct_equal(x7128, x7129);
  return x7130; 
}
