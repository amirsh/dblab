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
  int L_PARTKEY;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  };
  
  struct LINEITEMRecord_PARTRecord {
  int L_PARTKEY;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  int P_PARTKEY;
  char* P_BRAND;
  char* P_CONTAINER;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  char* P_BRAND;
  char* P_CONTAINER;
  };
  
  


int x19557(void* x6899);

int x19560(void* x6902, void* x6903);
/* GLOBAL VARS */

struct timeval x4149;
int main(int argc, char** argv) {
  FILE* x4503 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x4504 = 0;
  int x4505 = x4504;
  int* x4506 = &x4505;
  int x4507 = fscanf(x4503, "%d", x4506);
  pclose(x4503);
  struct LINEITEMRecord* x5519 = (struct LINEITEMRecord*)malloc(x4505 * sizeof(struct LINEITEMRecord));
  memset(x5519, 0, x4505 * sizeof(struct LINEITEMRecord));
  int x4511 = O_RDONLY;
  int x4512 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x4511);
  struct stat x4513 = (struct stat){0};
  /* VAR */ struct stat x4514 = x4513;
  struct stat x4515 = x4514;
  struct stat* x4516 = &x4515;
  int x4517 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x4516);
  int x4519 = PROT_READ;
  int x4520 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x4516->st_size), x4519, x4520, x4512, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite16083 = 0;
    if((x5<(x4505))) {
      char x18724 = *x3;
      ite16083 = (x18724!=('\0'));
    } else {
      
      ite16083 = 0;
    };
    int x14860 = ite16083;
    if (!(x14860)) break; 
    
    /* VAR */ int x4528 = 0;
    int x4529 = x4528;
    int* x4530 = &x4529;
    char* x4531 = strntoi_unchecked(x3, x4530);
    x3 = x4531;
    /* VAR */ int x4533 = 0;
    int x4534 = x4533;
    int* x4535 = &x4534;
    char* x4536 = strntoi_unchecked(x3, x4535);
    x3 = x4536;
    /* VAR */ int x4538 = 0;
    int x4539 = x4538;
    int* x4540 = &x4539;
    char* x4541 = strntoi_unchecked(x3, x4540);
    x3 = x4541;
    /* VAR */ int x4543 = 0;
    int x4544 = x4543;
    int* x4545 = &x4544;
    char* x4546 = strntoi_unchecked(x3, x4545);
    x3 = x4546;
    /* VAR */ double x4548 = 0.0;
    double x4549 = x4548;
    double* x4550 = &x4549;
    char* x4551 = strntod_unchecked(x3, x4550);
    x3 = x4551;
    /* VAR */ double x4553 = 0.0;
    double x4554 = x4553;
    double* x4555 = &x4554;
    char* x4556 = strntod_unchecked(x3, x4555);
    x3 = x4556;
    /* VAR */ double x4558 = 0.0;
    double x4559 = x4558;
    double* x4560 = &x4559;
    char* x4561 = strntod_unchecked(x3, x4560);
    x3 = x4561;
    /* VAR */ double x4563 = 0.0;
    double x4564 = x4563;
    double* x4565 = &x4564;
    char* x4566 = strntod_unchecked(x3, x4565);
    x3 = x4566;
    char x4568 = *x3;
    /* VAR */ char x4569 = x4568;
    x3 += 1;
    x3 += 1;
    char x4573 = *x3;
    /* VAR */ char x4574 = x4573;
    x3 += 1;
    x3 += 1;
    /* VAR */ int x4578 = 0;
    int x4579 = x4578;
    int* x4580 = &x4579;
    char* x4581 = strntoi_unchecked(x3, x4580);
    x3 = x4581;
    /* VAR */ int x4583 = 0;
    int x4584 = x4583;
    int* x4585 = &x4584;
    char* x4586 = strntoi_unchecked(x3, x4585);
    x3 = x4586;
    /* VAR */ int x4588 = 0;
    int x4589 = x4588;
    int* x4590 = &x4589;
    char* x4591 = strntoi_unchecked(x3, x4590);
    x3 = x4591;
    /* VAR */ int x4597 = 0;
    int x4598 = x4597;
    int* x4599 = &x4598;
    char* x4600 = strntoi_unchecked(x3, x4599);
    x3 = x4600;
    /* VAR */ int x4602 = 0;
    int x4603 = x4602;
    int* x4604 = &x4603;
    char* x4605 = strntoi_unchecked(x3, x4604);
    x3 = x4605;
    /* VAR */ int x4607 = 0;
    int x4608 = x4607;
    int* x4609 = &x4608;
    char* x4610 = strntoi_unchecked(x3, x4609);
    x3 = x4610;
    /* VAR */ int x4616 = 0;
    int x4617 = x4616;
    int* x4618 = &x4617;
    char* x4619 = strntoi_unchecked(x3, x4618);
    x3 = x4619;
    /* VAR */ int x4621 = 0;
    int x4622 = x4621;
    int* x4623 = &x4622;
    char* x4624 = strntoi_unchecked(x3, x4623);
    x3 = x4624;
    /* VAR */ int x4626 = 0;
    int x4627 = x4626;
    int* x4628 = &x4627;
    char* x4629 = strntoi_unchecked(x3, x4628);
    x3 = x4629;
    char* x5645 = (char*)malloc(26 * sizeof(char));
    memset(x5645, 0, 26 * sizeof(char));
    /* VAR */ char* x4636 = x3;
    while(1) {
      
      char x4637 = *x3;
      /* VAR */ int ite16204 = 0;
      if((x4637!=('|'))) {
        char x18844 = *x3;
        ite16204 = (x18844!=('\n'));
      } else {
        
        ite16204 = 0;
      };
      int x14974 = ite16204;
      if (!(x14974)) break; 
      
      x3 += 1;
    };
    char* x4644 = x4636;
    int x4645 = x3 - x4644;
    char* x4646 = x4636;
    char* x4647 = strncpy(x5645, x4646, x4645);
    x3 += 1;
    char* x5663 = (char*)malloc(11 * sizeof(char));
    memset(x5663, 0, 11 * sizeof(char));
    /* VAR */ char* x4655 = x3;
    while(1) {
      
      char x4656 = *x3;
      /* VAR */ int ite16227 = 0;
      if((x4656!=('|'))) {
        char x18866 = *x3;
        ite16227 = (x18866!=('\n'));
      } else {
        
        ite16227 = 0;
      };
      int x14990 = ite16227;
      if (!(x14990)) break; 
      
      x3 += 1;
    };
    char* x4663 = x4655;
    int x4664 = x3 - x4663;
    char* x4665 = x4655;
    char* x4666 = strncpy(x5663, x4665, x4664);
    x3 += 1;
    char* x5681 = (char*)malloc(45 * sizeof(char));
    memset(x5681, 0, 45 * sizeof(char));
    /* VAR */ char* x4674 = x3;
    while(1) {
      
      char x4675 = *x3;
      /* VAR */ int ite16250 = 0;
      if((x4675!=('|'))) {
        char x18888 = *x3;
        ite16250 = (x18888!=('\n'));
      } else {
        
        ite16250 = 0;
      };
      int x15006 = ite16250;
      if (!(x15006)) break; 
      
      x3 += 1;
    };
    char* x4682 = x4674;
    int x4683 = x3 - x4682;
    char* x4684 = x4674;
    char* x4685 = strncpy(x5681, x4684, x4683);
    x3 += 1;
    struct LINEITEMRecord* x6207 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x6207, 0, 1 * sizeof(struct LINEITEMRecord));
    x6207->L_PARTKEY = x4534; x6207->L_QUANTITY = x4549; x6207->L_EXTENDEDPRICE = x4554;
    int x47 = x4;
    struct LINEITEMRecord x5701 = *x6207;
    *(x5519 + x47) = x5701;
    struct LINEITEMRecord* x5703 = &(x5519[x47]);
    x6207 = x5703;
    int x49 = x4;
    x4 = (x49+(1));
  };
  FILE* x4698 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x4699 = 0;
  int x4700 = x4699;
  int* x4701 = &x4700;
  int x4702 = fscanf(x4698, "%d", x4701);
  pclose(x4698);
  struct PARTRecord* x5714 = (struct PARTRecord*)malloc(x4700 * sizeof(struct PARTRecord));
  memset(x5714, 0, x4700 * sizeof(struct PARTRecord));
  int x4706 = O_RDONLY;
  int x4707 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x4706);
  /* VAR */ struct stat x4708 = x4513;
  struct stat x4709 = x4708;
  struct stat* x4710 = &x4709;
  int x4711 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x4710);
  int x4713 = PROT_READ;
  int x4714 = MAP_PRIVATE;
  char* x55 = mmap(NULL, (x4710->st_size), x4713, x4714, x4707, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    /* VAR */ int ite16300 = 0;
    if((x57<(x4700))) {
      char x18937 = *x55;
      ite16300 = (x18937!=('\0'));
    } else {
      
      ite16300 = 0;
    };
    int x15049 = ite16300;
    if (!(x15049)) break; 
    
    /* VAR */ int x4722 = 0;
    int x4723 = x4722;
    int* x4724 = &x4723;
    char* x4725 = strntoi_unchecked(x55, x4724);
    x55 = x4725;
    char* x5737 = (char*)malloc(56 * sizeof(char));
    memset(x5737, 0, 56 * sizeof(char));
    /* VAR */ char* x4728 = x55;
    while(1) {
      
      char x4729 = *x55;
      /* VAR */ int ite16319 = 0;
      if((x4729!=('|'))) {
        char x18955 = *x55;
        ite16319 = (x18955!=('\n'));
      } else {
        
        ite16319 = 0;
      };
      int x15061 = ite16319;
      if (!(x15061)) break; 
      
      x55 += 1;
    };
    char* x4736 = x4728;
    int x4737 = x55 - x4736;
    char* x4738 = x4728;
    char* x4739 = strncpy(x5737, x4738, x4737);
    x55 += 1;
    char* x5755 = (char*)malloc(26 * sizeof(char));
    memset(x5755, 0, 26 * sizeof(char));
    /* VAR */ char* x4747 = x55;
    while(1) {
      
      char x4748 = *x55;
      /* VAR */ int ite16342 = 0;
      if((x4748!=('|'))) {
        char x18977 = *x55;
        ite16342 = (x18977!=('\n'));
      } else {
        
        ite16342 = 0;
      };
      int x15077 = ite16342;
      if (!(x15077)) break; 
      
      x55 += 1;
    };
    char* x4755 = x4747;
    int x4756 = x55 - x4755;
    char* x4757 = x4747;
    char* x4758 = strncpy(x5755, x4757, x4756);
    x55 += 1;
    char* x5773 = (char*)malloc(11 * sizeof(char));
    memset(x5773, 0, 11 * sizeof(char));
    /* VAR */ char* x4766 = x55;
    while(1) {
      
      char x4767 = *x55;
      /* VAR */ int ite16365 = 0;
      if((x4767!=('|'))) {
        char x18999 = *x55;
        ite16365 = (x18999!=('\n'));
      } else {
        
        ite16365 = 0;
      };
      int x15093 = ite16365;
      if (!(x15093)) break; 
      
      x55 += 1;
    };
    char* x4774 = x4766;
    int x4775 = x55 - x4774;
    char* x4776 = x4766;
    char* x4777 = strncpy(x5773, x4776, x4775);
    x55 += 1;
    char* x5791 = (char*)malloc(26 * sizeof(char));
    memset(x5791, 0, 26 * sizeof(char));
    /* VAR */ char* x4785 = x55;
    while(1) {
      
      char x4786 = *x55;
      /* VAR */ int ite16388 = 0;
      if((x4786!=('|'))) {
        char x19021 = *x55;
        ite16388 = (x19021!=('\n'));
      } else {
        
        ite16388 = 0;
      };
      int x15109 = ite16388;
      if (!(x15109)) break; 
      
      x55 += 1;
    };
    char* x4793 = x4785;
    int x4794 = x55 - x4793;
    char* x4795 = x4785;
    char* x4796 = strncpy(x5791, x4795, x4794);
    x55 += 1;
    /* VAR */ int x4803 = 0;
    int x4804 = x4803;
    int* x4805 = &x4804;
    char* x4806 = strntoi_unchecked(x55, x4805);
    x55 = x4806;
    char* x5814 = (char*)malloc(11 * sizeof(char));
    memset(x5814, 0, 11 * sizeof(char));
    /* VAR */ char* x4809 = x55;
    while(1) {
      
      char x4810 = *x55;
      /* VAR */ int ite16416 = 0;
      if((x4810!=('|'))) {
        char x19048 = *x55;
        ite16416 = (x19048!=('\n'));
      } else {
        
        ite16416 = 0;
      };
      int x15130 = ite16416;
      if (!(x15130)) break; 
      
      x55 += 1;
    };
    char* x4817 = x4809;
    int x4818 = x55 - x4817;
    char* x4819 = x4809;
    char* x4820 = strncpy(x5814, x4819, x4818);
    x55 += 1;
    /* VAR */ double x4827 = 0.0;
    double x4828 = x4827;
    double* x4829 = &x4828;
    char* x4830 = strntod_unchecked(x55, x4829);
    x55 = x4830;
    char* x5837 = (char*)malloc(24 * sizeof(char));
    memset(x5837, 0, 24 * sizeof(char));
    /* VAR */ char* x4833 = x55;
    while(1) {
      
      char x4834 = *x55;
      /* VAR */ int ite16444 = 0;
      if((x4834!=('|'))) {
        char x19075 = *x55;
        ite16444 = (x19075!=('\n'));
      } else {
        
        ite16444 = 0;
      };
      int x15151 = ite16444;
      if (!(x15151)) break; 
      
      x55 += 1;
    };
    char* x4841 = x4833;
    int x4842 = x55 - x4841;
    char* x4843 = x4833;
    char* x4844 = strncpy(x5837, x4843, x4842);
    x55 += 1;
    struct PARTRecord* x6365 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x6365, 0, 1 * sizeof(struct PARTRecord));
    x6365->P_PARTKEY = x4723; x6365->P_BRAND = x5773; x6365->P_CONTAINER = x5814;
    int x111 = x56;
    struct PARTRecord x5857 = *x6365;
    *(x5714 + x111) = x5857;
    struct PARTRecord* x5859 = &(x5714[x111]);
    x6365 = x5859;
    int x113 = x56;
    x56 = (x113+(1));
  };
  int x118 = 0;
  for(; x118 < 1 ; x118 += 1) {
    
    double* x19553 = (double*)malloc(1 * sizeof(double));
    memset(x19553, 0, 1 * sizeof(double));
    struct AGGRecord_String* x19554 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x19554, 0, 1 * sizeof(struct AGGRecord_String));
    x19554->key = "Total"; x19554->aggs = x19553;
    GHashTable* x19566 = g_hash_table_new(((void***){x19557}), ((int*){x19560}));
    struct LINEITEMRecord** x19567 = (struct LINEITEMRecord**)malloc(1600000 * sizeof(struct LINEITEMRecord*));
    memset(x19567, 0, 1600000 * sizeof(struct LINEITEMRecord*));
    int* x19568 = (int*)malloc(1600000 * sizeof(int));
    memset(x19568, 0, 1600000 * sizeof(int));
    int x13266 = 0;
    for(; x13266 < 1600000 ; x13266 += 1) {
      
      struct LINEITEMRecord* x13267 = (struct LINEITEMRecord*)malloc(1024 * sizeof(struct LINEITEMRecord));
      memset(x13267, 0, 1024 * sizeof(struct LINEITEMRecord));
      *(x19567 + x13266) = x13267;
    };
    /* VAR */ int x19576 = 0;
    int x13287 = 0;
    for(; x13287 < x4505 ; x13287 += 1) {
      
      struct LINEITEMRecord* x13288 = &(x5519[x13287]);
      int x13290 = (x13288->L_PARTKEY)%(1600000);
      int x13291 = x19568[x13290];
      struct LINEITEMRecord* x13292 = x19567[x13290];
      struct LINEITEMRecord x13293 = *x13288;
      *(x13292 + x13291) = x13293;
      struct LINEITEMRecord* x13295 = &(x13292[x13291]);
      x13288 = x13295;
      *(x19568 + x13290) = (x13291+(1));
      int x13299 = x19576;
      x19576 = (x13299+(1));
    };
    /* VAR */ int x19608 = 0;
    struct LINEITEMRecord_PARTRecord* x19609 = (struct LINEITEMRecord_PARTRecord*)malloc(48000000 * sizeof(struct LINEITEMRecord_PARTRecord));
    memset(x19609, 0, 48000000 * sizeof(struct LINEITEMRecord_PARTRecord));
    /* VAR */ int x19610 = 0;
    while(1) {
      
      int x4044 = x19610;
      if (!((x4044<(48000000)))) break; 
      
      int x4046 = x19610;
      struct LINEITEMRecord_PARTRecord* x6418 = (struct LINEITEMRecord_PARTRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord));
      memset(x6418, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord));
      x6418->L_PARTKEY = 0; x6418->L_QUANTITY = 0.0; x6418->L_EXTENDEDPRICE = 0.0; x6418->P_PARTKEY = 0; x6418->P_BRAND = ""; x6418->P_CONTAINER = "";
      struct LINEITEMRecord_PARTRecord x5905 = *x6418;
      *(x19609 + x4046) = x5905;
      struct LINEITEMRecord_PARTRecord* x5907 = &(x19609[x4046]);
      x6418 = x5907;
      int x4049 = x19610;
      x19610 = (x4049+(1));
    };
    /* VAR */ struct timeval x19625 = x4149;
    struct timeval x19626 = x19625;
    /* VAR */ struct timeval x19627 = x4149;
    struct timeval x19628 = x19627;
    /* VAR */ struct timeval x19629 = x4149;
    struct timeval x19630 = x19629;
    struct timeval* x19631 = &x19628;
    gettimeofday(x19631, NULL);
    /* VAR */ int x19633 = 0;
    /* VAR */ int x19634 = 0;
    /* VAR */ int x19635 = 0;
    while(1) {
      
      int x19637 = x19633;
      if (!((x19637<(x4700)))) break; 
      
      int x1259 = x19633;
      struct PARTRecord* x207 = &(x5714[x1259]);
      char* x209 = x207->P_CONTAINER;
      int x12034 = strcmp(x209, "MED BAG");
      /* VAR */ int ite17021 = 0;
      if((x12034==(0))) {
        int x19647 = strcmp((x207->P_BRAND), "Brand#15");
        ite17021 = (x19647==(0));
      } else {
        
        ite17021 = 0;
      };
      int x15709 = ite17021;
      if(x15709) {
        int x214 = x207->P_PARTKEY;
        int x19655 = x214%(1600000);
        int x19656 = x19568[x19655];
        struct LINEITEMRecord* x19657 = x19567[x19655];
        int x13389 = 0;
        for(; x13389 < x19656 ; x13389 += 1) {
          
          struct LINEITEMRecord* x13390 = &(x19657[x13389]);
          if(((x13390->L_PARTKEY)==(x214))) {
            int x2662 = x13390->L_PARTKEY;
            if((x2662==(x214))) {
              int x4088 = x19608;
              struct LINEITEMRecord_PARTRecord* x4089 = &(x19609[x4088]);
              x4089->L_PARTKEY = x2662;
              x4089->L_QUANTITY = (x13390->L_QUANTITY);
              x4089->L_EXTENDEDPRICE = (x13390->L_EXTENDEDPRICE);
              x4089->P_PARTKEY = x214;
              x4089->P_BRAND = (x207->P_BRAND);
              x4089->P_CONTAINER = x209;
              int x4096 = x19608;
              x19608 = (x4096+(1));
              void* x7006 = (void*){(x4089->L_PARTKEY)};
              void* x7008 = g_hash_table_lookup(x19566, x7006);
              GList** x7009 = (GList**){x7008};
              GList** x7010 = NULL;
              /* VAR */ GList** ite15790 = 0;
              if((x7009==(x7010))) {
                GList** x15791 = malloc(8);
                GList* x15792 = NULL;
                pointer_assign(x15791, x15792);
                ite15790 = x15791;
              } else {
                
                ite15790 = x7009;
              };
              GList** x7015 = ite15790;
              GList* x7016 = *(x7015);
              GList* x7017 = g_list_prepend(x7016, ((void*){x4089}));
              pointer_assign(x7015, x7017);
              g_hash_table_insert(x19566, x7006, ((void*){x7015}));
            };
          };
        };
      };
      int x1299 = x19633;
      x19633 = (x1299+(1));
    };
    GList* x19823 = g_hash_table_get_keys(x19566);
    /* VAR */ GList* x19824 = x19823;
    int x19825 = g_hash_table_size(x19566);
    int x13571 = 0;
    for(; x13571 < x19825 ; x13571 += 1) {
      
      GList* x13572 = x19824;
      void* x13573 = g_list_nth_data(x13572, 0);
      GList* x13574 = x19824;
      GList* x13575 = g_list_next(x13574);
      x19824 = x13575;
      void* x13577 = g_hash_table_lookup(x19566, x13573);
      GList** x13578 = (GList**){x13577};
      /* VAR */ double x13584 = 0.0;
      GList* x13585 = *(x13578);
      /* VAR */ GList* x13586 = x13585;
      while(1) {
        
        GList* x8272 = x13586;
        GList* x8273 = NULL;
        if (!((x8272!=(x8273)))) break; 
        
        GList* x8275 = x13586;
        void* x8276 = g_list_nth_data(x8275, 0);
        double x8278 = x13584;
        x13584 = (x8278+((((struct LINEITEMRecord_PARTRecord*){x8276})->L_QUANTITY)));
        GList* x8282 = x13586;
        GList* x8283 = g_list_next(x8282);
        x13586 = x8283;
      };
      double x13601 = x13584;
      GList* x13602 = *(x13578);
      int x13603 = g_list_length(x13602);
      /* VAR */ double x13615 = 0.0;
      GList* x13616 = *(x13578);
      /* VAR */ GList* x13617 = x13616;
      while(1) {
        
        GList* x8303 = x13617;
        GList* x8304 = NULL;
        if (!((x8303!=(x8304)))) break; 
        
        GList* x8306 = x13617;
        void* x8307 = g_list_nth_data(x8306, 0);
        struct LINEITEMRecord_PARTRecord* x8308 = (struct LINEITEMRecord_PARTRecord*){x8307};
        double x8309 = x13615;
        /* VAR */ double ite16026 = 0;
        if(((x8308->L_QUANTITY)<((0.2*((x13601/(x13603))))))) {
          ite16026 = (x8309+((x8308->L_EXTENDEDPRICE)));
        } else {
          
          ite16026 = x8309;
        };
        double x8312 = ite16026;
        x13615 = x8312;
        GList* x8316 = x13617;
        GList* x8317 = g_list_next(x8316);
        x13617 = x8317;
      };
      double x13635 = x13615;
      double* x13637 = x19554->aggs;
      double x13638 = x13637[0];
      *x13637 = (x13638+((x13635/(7.0))));
    };
    if(0) {
      x19634 = 1;
    } else {
      
      double x311 = ((double*) { x19554->aggs })[0];
      printf("%.6f\n", x311);
      int x1367 = x19635;
      x19635 = (x1367+(1));
    };
    int x19993 = x19635;
    printf("(%d rows)\n", x19993);
    struct timeval* x19995 = &x19630;
    gettimeofday(x19995, NULL);
    struct timeval* x19997 = &x19626;
    struct timeval* x19998 = &x19630;
    struct timeval* x19999 = &x19628;
    long x20000 = timeval_subtract(x19997, x19998, x19999);
    printf("Generated code run in %ld milliseconds.\n", x20000);
  };
}
/* ----------- FUNCTIONS ----------- */
int x19557(void* x6899) {
  int x6900 = g_direct_hash(x6899);
  return x6900; 
}

int x19560(void* x6902, void* x6903) {
  int x6904 = g_direct_equal(x6902, x6903);
  return x6904; 
}
