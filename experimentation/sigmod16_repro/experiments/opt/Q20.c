#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_Q20GRPRecord;
  struct LINEITEMRecord;
  struct Set_AGGRecord_Q20GRPRecord;
  struct NATIONRecord;
  struct PARTRecord;
  struct Q20GRPRecord;
  struct SUPPLIERRecord;
  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord;
  struct PARTSUPPRecord;
  
  struct AGGRecord_Q20GRPRecord {
  struct Q20GRPRecord* key;
  double* aggs;
  };
  
  struct LINEITEMRecord {
  int L_PARTKEY;
  int L_SUPPKEY;
  double L_QUANTITY;
  int L_SHIPDATE;
  };
  
  struct Set_AGGRecord_Q20GRPRecord {
  int maxSize;
  struct AGGRecord_Q20GRPRecord* array;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  char* P_NAME;
  };
  
  struct Q20GRPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  };
  
  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord {
  int N_NATIONKEY;
  char* N_NAME;
  struct Q20GRPRecord* key;
  double* aggs;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  };
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  };
  
  


int x38730(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x338, struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x339);

int x20088(void* x20082, void* x20083, void* x20084);
/* GLOBAL VARS */

struct timeval x13699;
int main(int argc, char** argv) {
  FILE* x14418 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x14419 = 0;
  int x14420 = x14419;
  int* x14421 = &x14420;
  int x14422 = fscanf(x14418, "%d", x14421);
  pclose(x14418);
  struct NATIONRecord* x16278 = (struct NATIONRecord*)malloc(x14420 * sizeof(struct NATIONRecord));
  memset(x16278, 0, x14420 * sizeof(struct NATIONRecord));
  int x14426 = O_RDONLY;
  int x14427 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x14426);
  struct stat x14428 = (struct stat){0};
  /* VAR */ struct stat x14429 = x14428;
  struct stat x14430 = x14429;
  struct stat* x14431 = &x14430;
  int x14432 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x14431);
  int x14434 = PROT_READ;
  int x14435 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x14431->st_size), x14434, x14435, x14427, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite32933 = 0;
    if((x5<(x14420))) {
      char x37204 = *x3;
      ite32933 = (x37204!=('\0'));
    } else {
      
      ite32933 = 0;
    };
    int x31083 = ite32933;
    if (!(x31083)) break; 
    
    /* VAR */ int x14443 = 0;
    int x14444 = x14443;
    int* x14445 = &x14444;
    char* x14446 = strntoi_unchecked(x3, x14445);
    x3 = x14446;
    char* x16302 = (char*)malloc(26 * sizeof(char));
    memset(x16302, 0, 26 * sizeof(char));
    /* VAR */ char* x14449 = x3;
    while(1) {
      
      char x14450 = *x3;
      /* VAR */ int ite32952 = 0;
      if((x14450!=('|'))) {
        char x37222 = *x3;
        ite32952 = (x37222!=('\n'));
      } else {
        
        ite32952 = 0;
      };
      int x31095 = ite32952;
      if (!(x31095)) break; 
      
      x3 += 1;
    };
    char* x14457 = x14449;
    int x14458 = x3 - x14457;
    char* x14459 = x14449;
    char* x14460 = strncpy(x16302, x14459, x14458);
    x3 += 1;
    /* VAR */ int x14467 = 0;
    int x14468 = x14467;
    int* x14469 = &x14468;
    char* x14470 = strntoi_unchecked(x3, x14469);
    x3 = x14470;
    char* x16325 = (char*)malloc(153 * sizeof(char));
    memset(x16325, 0, 153 * sizeof(char));
    /* VAR */ char* x14473 = x3;
    while(1) {
      
      char x14474 = *x3;
      /* VAR */ int ite32980 = 0;
      if((x14474!=('|'))) {
        char x37249 = *x3;
        ite32980 = (x37249!=('\n'));
      } else {
        
        ite32980 = 0;
      };
      int x31116 = ite32980;
      if (!(x31116)) break; 
      
      x3 += 1;
    };
    char* x14481 = x14473;
    int x14482 = x3 - x14481;
    char* x14483 = x14473;
    char* x14484 = strncpy(x16325, x14483, x14482);
    x3 += 1;
    struct NATIONRecord* x17287 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x17287, 0, 1 * sizeof(struct NATIONRecord));
    x17287->N_NATIONKEY = x14444; x17287->N_NAME = x16302;
    int x28 = x4;
    struct NATIONRecord x16345 = *x17287;
    *(x16278 + x28) = x16345;
    struct NATIONRecord* x16347 = &(x16278[x28]);
    x17287 = x16347;
    int x30 = x4;
    x4 = (x30+(1));
  };
  FILE* x14497 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x14498 = 0;
  int x14499 = x14498;
  int* x14500 = &x14499;
  int x14501 = fscanf(x14497, "%d", x14500);
  pclose(x14497);
  struct SUPPLIERRecord* x16358 = (struct SUPPLIERRecord*)malloc(x14499 * sizeof(struct SUPPLIERRecord));
  memset(x16358, 0, x14499 * sizeof(struct SUPPLIERRecord));
  int x14505 = O_RDONLY;
  int x14506 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x14505);
  /* VAR */ struct stat x14507 = x14428;
  struct stat x14508 = x14507;
  struct stat* x14509 = &x14508;
  int x14510 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x14509);
  int x14512 = PROT_READ;
  int x14513 = MAP_PRIVATE;
  char* x36 = mmap(NULL, (x14509->st_size), x14512, x14513, x14506, 0);
  /* VAR */ int x37 = 0;
  while(1) {
    
    int x38 = x37;
    /* VAR */ int ite33030 = 0;
    if((x38<(x14499))) {
      char x37298 = *x36;
      ite33030 = (x37298!=('\0'));
    } else {
      
      ite33030 = 0;
    };
    int x31159 = ite33030;
    if (!(x31159)) break; 
    
    /* VAR */ int x14521 = 0;
    int x14522 = x14521;
    int* x14523 = &x14522;
    char* x14524 = strntoi_unchecked(x36, x14523);
    x36 = x14524;
    char* x16381 = (char*)malloc(26 * sizeof(char));
    memset(x16381, 0, 26 * sizeof(char));
    /* VAR */ char* x14527 = x36;
    while(1) {
      
      char x14528 = *x36;
      /* VAR */ int ite33049 = 0;
      if((x14528!=('|'))) {
        char x37316 = *x36;
        ite33049 = (x37316!=('\n'));
      } else {
        
        ite33049 = 0;
      };
      int x31171 = ite33049;
      if (!(x31171)) break; 
      
      x36 += 1;
    };
    char* x14535 = x14527;
    int x14536 = x36 - x14535;
    char* x14537 = x14527;
    char* x14538 = strncpy(x16381, x14537, x14536);
    x36 += 1;
    char* x16399 = (char*)malloc(41 * sizeof(char));
    memset(x16399, 0, 41 * sizeof(char));
    /* VAR */ char* x14546 = x36;
    while(1) {
      
      char x14547 = *x36;
      /* VAR */ int ite33072 = 0;
      if((x14547!=('|'))) {
        char x37338 = *x36;
        ite33072 = (x37338!=('\n'));
      } else {
        
        ite33072 = 0;
      };
      int x31187 = ite33072;
      if (!(x31187)) break; 
      
      x36 += 1;
    };
    char* x14554 = x14546;
    int x14555 = x36 - x14554;
    char* x14556 = x14546;
    char* x14557 = strncpy(x16399, x14556, x14555);
    x36 += 1;
    /* VAR */ int x14564 = 0;
    int x14565 = x14564;
    int* x14566 = &x14565;
    char* x14567 = strntoi_unchecked(x36, x14566);
    x36 = x14567;
    char* x16422 = (char*)malloc(16 * sizeof(char));
    memset(x16422, 0, 16 * sizeof(char));
    /* VAR */ char* x14570 = x36;
    while(1) {
      
      char x14571 = *x36;
      /* VAR */ int ite33100 = 0;
      if((x14571!=('|'))) {
        char x37365 = *x36;
        ite33100 = (x37365!=('\n'));
      } else {
        
        ite33100 = 0;
      };
      int x31208 = ite33100;
      if (!(x31208)) break; 
      
      x36 += 1;
    };
    char* x14578 = x14570;
    int x14579 = x36 - x14578;
    char* x14580 = x14570;
    char* x14581 = strncpy(x16422, x14580, x14579);
    x36 += 1;
    /* VAR */ double x14588 = 0.0;
    double x14589 = x14588;
    double* x14590 = &x14589;
    char* x14591 = strntod_unchecked(x36, x14590);
    x36 = x14591;
    char* x16445 = (char*)malloc(102 * sizeof(char));
    memset(x16445, 0, 102 * sizeof(char));
    /* VAR */ char* x14594 = x36;
    while(1) {
      
      char x14595 = *x36;
      /* VAR */ int ite33128 = 0;
      if((x14595!=('|'))) {
        char x37392 = *x36;
        ite33128 = (x37392!=('\n'));
      } else {
        
        ite33128 = 0;
      };
      int x31229 = ite33128;
      if (!(x31229)) break; 
      
      x36 += 1;
    };
    char* x14602 = x14594;
    int x14603 = x36 - x14602;
    char* x14604 = x14594;
    char* x14605 = strncpy(x16445, x14604, x14603);
    x36 += 1;
    struct SUPPLIERRecord* x17409 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x17409, 0, 1 * sizeof(struct SUPPLIERRecord));
    x17409->S_SUPPKEY = x14522; x17409->S_NAME = x16381; x17409->S_ADDRESS = x16399; x17409->S_NATIONKEY = x14565;
    int x78 = x37;
    struct SUPPLIERRecord x16465 = *x17409;
    *(x16358 + x78) = x16465;
    struct SUPPLIERRecord* x16467 = &(x16358[x78]);
    x17409 = x16467;
    int x80 = x37;
    x37 = (x80+(1));
  };
  FILE* x14618 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x14619 = 0;
  int x14620 = x14619;
  int* x14621 = &x14620;
  int x14622 = fscanf(x14618, "%d", x14621);
  pclose(x14618);
  struct PARTRecord* x16478 = (struct PARTRecord*)malloc(x14620 * sizeof(struct PARTRecord));
  memset(x16478, 0, x14620 * sizeof(struct PARTRecord));
  int x14626 = O_RDONLY;
  int x14627 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x14626);
  /* VAR */ struct stat x14628 = x14428;
  struct stat x14629 = x14628;
  struct stat* x14630 = &x14629;
  int x14631 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x14630);
  int x14633 = PROT_READ;
  int x14634 = MAP_PRIVATE;
  char* x86 = mmap(NULL, (x14630->st_size), x14633, x14634, x14627, 0);
  /* VAR */ int x87 = 0;
  while(1) {
    
    int x88 = x87;
    /* VAR */ int ite33178 = 0;
    if((x88<(x14620))) {
      char x37441 = *x86;
      ite33178 = (x37441!=('\0'));
    } else {
      
      ite33178 = 0;
    };
    int x31272 = ite33178;
    if (!(x31272)) break; 
    
    /* VAR */ int x14642 = 0;
    int x14643 = x14642;
    int* x14644 = &x14643;
    char* x14645 = strntoi_unchecked(x86, x14644);
    x86 = x14645;
    char* x16501 = (char*)malloc(56 * sizeof(char));
    memset(x16501, 0, 56 * sizeof(char));
    /* VAR */ char* x14648 = x86;
    while(1) {
      
      char x14649 = *x86;
      /* VAR */ int ite33197 = 0;
      if((x14649!=('|'))) {
        char x37459 = *x86;
        ite33197 = (x37459!=('\n'));
      } else {
        
        ite33197 = 0;
      };
      int x31284 = ite33197;
      if (!(x31284)) break; 
      
      x86 += 1;
    };
    char* x14656 = x14648;
    int x14657 = x86 - x14656;
    char* x14658 = x14648;
    char* x14659 = strncpy(x16501, x14658, x14657);
    x86 += 1;
    char* x16519 = (char*)malloc(26 * sizeof(char));
    memset(x16519, 0, 26 * sizeof(char));
    /* VAR */ char* x14667 = x86;
    while(1) {
      
      char x14668 = *x86;
      /* VAR */ int ite33220 = 0;
      if((x14668!=('|'))) {
        char x37481 = *x86;
        ite33220 = (x37481!=('\n'));
      } else {
        
        ite33220 = 0;
      };
      int x31300 = ite33220;
      if (!(x31300)) break; 
      
      x86 += 1;
    };
    char* x14675 = x14667;
    int x14676 = x86 - x14675;
    char* x14677 = x14667;
    char* x14678 = strncpy(x16519, x14677, x14676);
    x86 += 1;
    char* x16537 = (char*)malloc(11 * sizeof(char));
    memset(x16537, 0, 11 * sizeof(char));
    /* VAR */ char* x14686 = x86;
    while(1) {
      
      char x14687 = *x86;
      /* VAR */ int ite33243 = 0;
      if((x14687!=('|'))) {
        char x37503 = *x86;
        ite33243 = (x37503!=('\n'));
      } else {
        
        ite33243 = 0;
      };
      int x31316 = ite33243;
      if (!(x31316)) break; 
      
      x86 += 1;
    };
    char* x14694 = x14686;
    int x14695 = x86 - x14694;
    char* x14696 = x14686;
    char* x14697 = strncpy(x16537, x14696, x14695);
    x86 += 1;
    char* x16555 = (char*)malloc(26 * sizeof(char));
    memset(x16555, 0, 26 * sizeof(char));
    /* VAR */ char* x14705 = x86;
    while(1) {
      
      char x14706 = *x86;
      /* VAR */ int ite33266 = 0;
      if((x14706!=('|'))) {
        char x37525 = *x86;
        ite33266 = (x37525!=('\n'));
      } else {
        
        ite33266 = 0;
      };
      int x31332 = ite33266;
      if (!(x31332)) break; 
      
      x86 += 1;
    };
    char* x14713 = x14705;
    int x14714 = x86 - x14713;
    char* x14715 = x14705;
    char* x14716 = strncpy(x16555, x14715, x14714);
    x86 += 1;
    /* VAR */ int x14723 = 0;
    int x14724 = x14723;
    int* x14725 = &x14724;
    char* x14726 = strntoi_unchecked(x86, x14725);
    x86 = x14726;
    char* x16578 = (char*)malloc(11 * sizeof(char));
    memset(x16578, 0, 11 * sizeof(char));
    /* VAR */ char* x14729 = x86;
    while(1) {
      
      char x14730 = *x86;
      /* VAR */ int ite33294 = 0;
      if((x14730!=('|'))) {
        char x37552 = *x86;
        ite33294 = (x37552!=('\n'));
      } else {
        
        ite33294 = 0;
      };
      int x31353 = ite33294;
      if (!(x31353)) break; 
      
      x86 += 1;
    };
    char* x14737 = x14729;
    int x14738 = x86 - x14737;
    char* x14739 = x14729;
    char* x14740 = strncpy(x16578, x14739, x14738);
    x86 += 1;
    /* VAR */ double x14747 = 0.0;
    double x14748 = x14747;
    double* x14749 = &x14748;
    char* x14750 = strntod_unchecked(x86, x14749);
    x86 = x14750;
    char* x16601 = (char*)malloc(24 * sizeof(char));
    memset(x16601, 0, 24 * sizeof(char));
    /* VAR */ char* x14753 = x86;
    while(1) {
      
      char x14754 = *x86;
      /* VAR */ int ite33322 = 0;
      if((x14754!=('|'))) {
        char x37579 = *x86;
        ite33322 = (x37579!=('\n'));
      } else {
        
        ite33322 = 0;
      };
      int x31374 = ite33322;
      if (!(x31374)) break; 
      
      x86 += 1;
    };
    char* x14761 = x14753;
    int x14762 = x86 - x14761;
    char* x14763 = x14753;
    char* x14764 = strncpy(x16601, x14763, x14762);
    x86 += 1;
    struct PARTRecord* x17567 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x17567, 0, 1 * sizeof(struct PARTRecord));
    x17567->P_PARTKEY = x14643; x17567->P_NAME = x16501;
    int x142 = x87;
    struct PARTRecord x16621 = *x17567;
    *(x16478 + x142) = x16621;
    struct PARTRecord* x16623 = &(x16478[x142]);
    x17567 = x16623;
    int x144 = x87;
    x87 = (x144+(1));
  };
  FILE* x14777 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x14778 = 0;
  int x14779 = x14778;
  int* x14780 = &x14779;
  int x14781 = fscanf(x14777, "%d", x14780);
  pclose(x14777);
  struct PARTSUPPRecord* x16634 = (struct PARTSUPPRecord*)malloc(x14779 * sizeof(struct PARTSUPPRecord));
  memset(x16634, 0, x14779 * sizeof(struct PARTSUPPRecord));
  int x14785 = O_RDONLY;
  int x14786 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x14785);
  /* VAR */ struct stat x14787 = x14428;
  struct stat x14788 = x14787;
  struct stat* x14789 = &x14788;
  int x14790 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x14789);
  int x14792 = PROT_READ;
  int x14793 = MAP_PRIVATE;
  char* x150 = mmap(NULL, (x14789->st_size), x14792, x14793, x14786, 0);
  /* VAR */ int x151 = 0;
  while(1) {
    
    int x152 = x151;
    /* VAR */ int ite33372 = 0;
    if((x152<(x14779))) {
      char x37628 = *x150;
      ite33372 = (x37628!=('\0'));
    } else {
      
      ite33372 = 0;
    };
    int x31417 = ite33372;
    if (!(x31417)) break; 
    
    /* VAR */ int x14801 = 0;
    int x14802 = x14801;
    int* x14803 = &x14802;
    char* x14804 = strntoi_unchecked(x150, x14803);
    x150 = x14804;
    /* VAR */ int x14806 = 0;
    int x14807 = x14806;
    int* x14808 = &x14807;
    char* x14809 = strntoi_unchecked(x150, x14808);
    x150 = x14809;
    /* VAR */ int x14811 = 0;
    int x14812 = x14811;
    int* x14813 = &x14812;
    char* x14814 = strntoi_unchecked(x150, x14813);
    x150 = x14814;
    /* VAR */ double x14816 = 0.0;
    double x14817 = x14816;
    double* x14818 = &x14817;
    char* x14819 = strntod_unchecked(x150, x14818);
    x150 = x14819;
    char* x16672 = (char*)malloc(200 * sizeof(char));
    memset(x16672, 0, 200 * sizeof(char));
    /* VAR */ char* x14822 = x150;
    while(1) {
      
      char x14823 = *x150;
      /* VAR */ int ite33406 = 0;
      if((x14823!=('|'))) {
        char x37661 = *x150;
        ite33406 = (x37661!=('\n'));
      } else {
        
        ite33406 = 0;
      };
      int x31444 = ite33406;
      if (!(x31444)) break; 
      
      x150 += 1;
    };
    char* x14830 = x14822;
    int x14831 = x150 - x14830;
    char* x14832 = x14822;
    char* x14833 = strncpy(x16672, x14832, x14831);
    x150 += 1;
    struct PARTSUPPRecord* x17640 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x17640, 0, 1 * sizeof(struct PARTSUPPRecord));
    x17640->PS_PARTKEY = x14802; x17640->PS_SUPPKEY = x14807; x17640->PS_AVAILQTY = x14812;
    int x169 = x151;
    struct PARTSUPPRecord x16692 = *x17640;
    *(x16634 + x169) = x16692;
    struct PARTSUPPRecord* x16694 = &(x16634[x169]);
    x17640 = x16694;
    int x171 = x151;
    x151 = (x171+(1));
  };
  FILE* x14846 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x14847 = 0;
  int x14848 = x14847;
  int* x14849 = &x14848;
  int x14850 = fscanf(x14846, "%d", x14849);
  pclose(x14846);
  struct LINEITEMRecord* x16705 = (struct LINEITEMRecord*)malloc(x14848 * sizeof(struct LINEITEMRecord));
  memset(x16705, 0, x14848 * sizeof(struct LINEITEMRecord));
  int x14854 = O_RDONLY;
  int x14855 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x14854);
  /* VAR */ struct stat x14856 = x14428;
  struct stat x14857 = x14856;
  struct stat* x14858 = &x14857;
  int x14859 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x14858);
  int x14861 = PROT_READ;
  int x14862 = MAP_PRIVATE;
  char* x177 = mmap(NULL, (x14858->st_size), x14861, x14862, x14855, 0);
  /* VAR */ int x178 = 0;
  while(1) {
    
    int x179 = x178;
    /* VAR */ int ite33456 = 0;
    if((x179<(x14848))) {
      char x37710 = *x177;
      ite33456 = (x37710!=('\0'));
    } else {
      
      ite33456 = 0;
    };
    int x31487 = ite33456;
    if (!(x31487)) break; 
    
    /* VAR */ int x14870 = 0;
    int x14871 = x14870;
    int* x14872 = &x14871;
    char* x14873 = strntoi_unchecked(x177, x14872);
    x177 = x14873;
    /* VAR */ int x14875 = 0;
    int x14876 = x14875;
    int* x14877 = &x14876;
    char* x14878 = strntoi_unchecked(x177, x14877);
    x177 = x14878;
    /* VAR */ int x14880 = 0;
    int x14881 = x14880;
    int* x14882 = &x14881;
    char* x14883 = strntoi_unchecked(x177, x14882);
    x177 = x14883;
    /* VAR */ int x14885 = 0;
    int x14886 = x14885;
    int* x14887 = &x14886;
    char* x14888 = strntoi_unchecked(x177, x14887);
    x177 = x14888;
    /* VAR */ double x14890 = 0.0;
    double x14891 = x14890;
    double* x14892 = &x14891;
    char* x14893 = strntod_unchecked(x177, x14892);
    x177 = x14893;
    /* VAR */ double x14895 = 0.0;
    double x14896 = x14895;
    double* x14897 = &x14896;
    char* x14898 = strntod_unchecked(x177, x14897);
    x177 = x14898;
    /* VAR */ double x14900 = 0.0;
    double x14901 = x14900;
    double* x14902 = &x14901;
    char* x14903 = strntod_unchecked(x177, x14902);
    x177 = x14903;
    /* VAR */ double x14905 = 0.0;
    double x14906 = x14905;
    double* x14907 = &x14906;
    char* x14908 = strntod_unchecked(x177, x14907);
    x177 = x14908;
    char x14910 = *x177;
    /* VAR */ char x14911 = x14910;
    x177 += 1;
    x177 += 1;
    char x14915 = *x177;
    /* VAR */ char x14916 = x14915;
    x177 += 1;
    x177 += 1;
    /* VAR */ int x14920 = 0;
    int x14921 = x14920;
    int* x14922 = &x14921;
    char* x14923 = strntoi_unchecked(x177, x14922);
    x177 = x14923;
    /* VAR */ int x14925 = 0;
    int x14926 = x14925;
    int* x14927 = &x14926;
    char* x14928 = strntoi_unchecked(x177, x14927);
    x177 = x14928;
    /* VAR */ int x14930 = 0;
    int x14931 = x14930;
    int* x14932 = &x14931;
    char* x14933 = strntoi_unchecked(x177, x14932);
    x177 = x14933;
    /* VAR */ int x14939 = 0;
    int x14940 = x14939;
    int* x14941 = &x14940;
    char* x14942 = strntoi_unchecked(x177, x14941);
    x177 = x14942;
    /* VAR */ int x14944 = 0;
    int x14945 = x14944;
    int* x14946 = &x14945;
    char* x14947 = strntoi_unchecked(x177, x14946);
    x177 = x14947;
    /* VAR */ int x14949 = 0;
    int x14950 = x14949;
    int* x14951 = &x14950;
    char* x14952 = strntoi_unchecked(x177, x14951);
    x177 = x14952;
    /* VAR */ int x14958 = 0;
    int x14959 = x14958;
    int* x14960 = &x14959;
    char* x14961 = strntoi_unchecked(x177, x14960);
    x177 = x14961;
    /* VAR */ int x14963 = 0;
    int x14964 = x14963;
    int* x14965 = &x14964;
    char* x14966 = strntoi_unchecked(x177, x14965);
    x177 = x14966;
    /* VAR */ int x14968 = 0;
    int x14969 = x14968;
    int* x14970 = &x14969;
    char* x14971 = strntoi_unchecked(x177, x14970);
    x177 = x14971;
    char* x16830 = (char*)malloc(26 * sizeof(char));
    memset(x16830, 0, 26 * sizeof(char));
    /* VAR */ char* x14978 = x177;
    while(1) {
      
      char x14979 = *x177;
      /* VAR */ int ite33577 = 0;
      if((x14979!=('|'))) {
        char x37830 = *x177;
        ite33577 = (x37830!=('\n'));
      } else {
        
        ite33577 = 0;
      };
      int x31601 = ite33577;
      if (!(x31601)) break; 
      
      x177 += 1;
    };
    char* x14986 = x14978;
    int x14987 = x177 - x14986;
    char* x14988 = x14978;
    char* x14989 = strncpy(x16830, x14988, x14987);
    x177 += 1;
    char* x16848 = (char*)malloc(11 * sizeof(char));
    memset(x16848, 0, 11 * sizeof(char));
    /* VAR */ char* x14997 = x177;
    while(1) {
      
      char x14998 = *x177;
      /* VAR */ int ite33600 = 0;
      if((x14998!=('|'))) {
        char x37852 = *x177;
        ite33600 = (x37852!=('\n'));
      } else {
        
        ite33600 = 0;
      };
      int x31617 = ite33600;
      if (!(x31617)) break; 
      
      x177 += 1;
    };
    char* x15005 = x14997;
    int x15006 = x177 - x15005;
    char* x15007 = x14997;
    char* x15008 = strncpy(x16848, x15007, x15006);
    x177 += 1;
    char* x16866 = (char*)malloc(45 * sizeof(char));
    memset(x16866, 0, 45 * sizeof(char));
    /* VAR */ char* x15016 = x177;
    while(1) {
      
      char x15017 = *x177;
      /* VAR */ int ite33623 = 0;
      if((x15017!=('|'))) {
        char x37874 = *x177;
        ite33623 = (x37874!=('\n'));
      } else {
        
        ite33623 = 0;
      };
      int x31633 = ite33623;
      if (!(x31633)) break; 
      
      x177 += 1;
    };
    char* x15024 = x15016;
    int x15025 = x177 - x15024;
    char* x15026 = x15016;
    char* x15027 = strncpy(x16866, x15026, x15025);
    x177 += 1;
    struct LINEITEMRecord* x17836 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x17836, 0, 1 * sizeof(struct LINEITEMRecord));
    x17836->L_PARTKEY = x14876; x17836->L_SUPPKEY = x14881; x17836->L_QUANTITY = x14891; x17836->L_SHIPDATE = (((x14921*(10000))+((x14926*(100))))+(x14931));
    int x221 = x178;
    struct LINEITEMRecord x16886 = *x17836;
    *(x16705 + x221) = x16886;
    struct LINEITEMRecord* x16888 = &(x16705[x221]);
    x17836 = x16888;
    int x223 = x178;
    x178 = (x223+(1));
  };
  int x228 = 0;
  for(; x228 < 1 ; x228 += 1) {
    
    /* VAR */ int x38586 = 0;
    struct Set_AGGRecord_Q20GRPRecord* x38587 = (struct Set_AGGRecord_Q20GRPRecord*)malloc(1048576 * sizeof(struct Set_AGGRecord_Q20GRPRecord));
    memset(x38587, 0, 1048576 * sizeof(struct Set_AGGRecord_Q20GRPRecord));
    int x28598 = 0;
    for(; x28598 < 1048576 ; x28598 += 1) {
      
      struct AGGRecord_Q20GRPRecord* x28599 = (struct AGGRecord_Q20GRPRecord*)malloc(256 * sizeof(struct AGGRecord_Q20GRPRecord));
      memset(x28599, 0, 256 * sizeof(struct AGGRecord_Q20GRPRecord));
      struct Set_AGGRecord_Q20GRPRecord* x28600 = (struct Set_AGGRecord_Q20GRPRecord*)malloc(1 * sizeof(struct Set_AGGRecord_Q20GRPRecord));
      memset(x28600, 0, 1 * sizeof(struct Set_AGGRecord_Q20GRPRecord));
      x28600->maxSize = 0; x28600->array = x28599;
      struct Set_AGGRecord_Q20GRPRecord x28603 = *x28600;
      *(x38587 + x28598) = x28603;
      struct Set_AGGRecord_Q20GRPRecord* x28605 = &(x38587[x28598]);
      x28600 = x28605;
    };
    struct LINEITEMRecord** x38607 = (struct LINEITEMRecord**)malloc(1600000 * sizeof(struct LINEITEMRecord*));
    memset(x38607, 0, 1600000 * sizeof(struct LINEITEMRecord*));
    int* x38608 = (int*)malloc(1600000 * sizeof(int));
    memset(x38608, 0, 1600000 * sizeof(int));
    int x28614 = 0;
    for(; x28614 < 1600000 ; x28614 += 1) {
      
      struct LINEITEMRecord* x28615 = (struct LINEITEMRecord*)malloc(1024 * sizeof(struct LINEITEMRecord));
      memset(x28615, 0, 1024 * sizeof(struct LINEITEMRecord));
      *(x38607 + x28614) = x28615;
    };
    /* VAR */ int x38616 = 0;
    int x28635 = 0;
    for(; x28635 < x14848 ; x28635 += 1) {
      
      struct LINEITEMRecord* x28636 = &(x16705[x28635]);
      int x28638 = (x28636->L_PARTKEY)%(1600000);
      int x28639 = x38608[x28638];
      struct LINEITEMRecord* x28640 = x38607[x28638];
      struct LINEITEMRecord x28641 = *x28636;
      *(x28640 + x28639) = x28641;
      struct LINEITEMRecord* x28643 = &(x28640[x28639]);
      x28636 = x28643;
      *(x38608 + x28638) = (x28639+(1));
      int x28647 = x38616;
      x38616 = (x28647+(1));
    };
    /* VAR */ int x38648 = 0;
    struct Q20GRPRecord* x38649 = (struct Q20GRPRecord*)malloc(48000000 * sizeof(struct Q20GRPRecord));
    memset(x38649, 0, 48000000 * sizeof(struct Q20GRPRecord));
    /* VAR */ int x38650 = 0;
    while(1) {
      
      int x13444 = x38650;
      if (!((x13444<(48000000)))) break; 
      
      int x13446 = x38650;
      struct Q20GRPRecord* x17898 = (struct Q20GRPRecord*)malloc(1 * sizeof(struct Q20GRPRecord));
      memset(x17898, 0, 1 * sizeof(struct Q20GRPRecord));
      x17898->PS_PARTKEY = 0; x17898->PS_SUPPKEY = 0; x17898->PS_AVAILQTY = 0;
      struct Q20GRPRecord x16943 = *x17898;
      *(x38649 + x13446) = x16943;
      struct Q20GRPRecord* x16945 = &(x38649[x13446]);
      x17898 = x16945;
      int x13449 = x38650;
      x38650 = (x13449+(1));
    };
    /* VAR */ int x38665 = 0;
    double** x38666 = (double**)malloc(48000000 * sizeof(double*));
    memset(x38666, 0, 48000000 * sizeof(double*));
    /* VAR */ int x38667 = 0;
    while(1) {
      
      int x13456 = x38667;
      if (!((x13456<(48000000)))) break; 
      
      int x13458 = x38667;
      double* x16957 = (double*)malloc(1 * sizeof(double));
      memset(x16957, 0, 1 * sizeof(double));
      *(x38666 + x13458) = x16957;
      int x13461 = x38667;
      x38667 = (x13461+(1));
    };
    /* VAR */ int x38677 = 0;
    struct AGGRecord_Q20GRPRecord* x38678 = (struct AGGRecord_Q20GRPRecord*)malloc(48000000 * sizeof(struct AGGRecord_Q20GRPRecord));
    memset(x38678, 0, 48000000 * sizeof(struct AGGRecord_Q20GRPRecord));
    /* VAR */ int x38679 = 0;
    while(1) {
      
      int x13468 = x38679;
      if (!((x13468<(48000000)))) break; 
      
      int x13470 = x38679;
      struct Q20GRPRecord* x13471 = &(x38649[x13470]);
      double* x13472 = x38666[x13470];
      struct AGGRecord_Q20GRPRecord* x17929 = (struct AGGRecord_Q20GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q20GRPRecord));
      memset(x17929, 0, 1 * sizeof(struct AGGRecord_Q20GRPRecord));
      x17929->key = x13471; x17929->aggs = x13472;
      struct AGGRecord_Q20GRPRecord x16972 = *x17929;
      *(x38678 + x13470) = x16972;
      struct AGGRecord_Q20GRPRecord* x16974 = &(x38678[x13470]);
      x17929 = x16974;
      int x13475 = x38679;
      x38679 = (x13475+(1));
    };
    /* VAR */ int x38696 = 0;
    struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x38697 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*)malloc(48000000 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
    memset(x38697, 0, 48000000 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
    /* VAR */ int x38698 = 0;
    while(1) {
      
      int x13482 = x38698;
      if (!((x13482<(48000000)))) break; 
      
      int x13484 = x38698;
      struct Q20GRPRecord* x13485 = &(x38649[x13484]);
      double* x13486 = x38666[x13484];
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x17948 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
      memset(x17948, 0, 1 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
      x17948->N_NATIONKEY = 0; x17948->N_NAME = ""; x17948->key = x13485; x17948->aggs = x13486; x17948->S_SUPPKEY = 0; x17948->S_NAME = ""; x17948->S_ADDRESS = ""; x17948->S_NATIONKEY = 0;
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord x16989 = *x17948;
      *(x38697 + x13484) = x16989;
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x16991 = &(x38697[x13484]);
      x17948 = x16991;
      int x13489 = x38698;
      x38698 = (x13489+(1));
    };
    /* VAR */ struct timeval x38715 = x13699;
    struct timeval x38716 = x38715;
    /* VAR */ struct timeval x38717 = x13699;
    struct timeval x38718 = x38717;
    /* VAR */ struct timeval x38719 = x13699;
    struct timeval x38720 = x38719;
    struct timeval* x38721 = &x38718;
    gettimeofday(x38721, NULL);
    /* VAR */ int x38723 = 0;
    int* x38736 = &(x38730);
    GTree* x38737 = g_tree_new(x38736);
    /* VAR */ int x38738 = 0;
    /* VAR */ int x38739 = 0;
    while(1) {
      
      int x38741 = x38723;
      if (!((x38741<(x14779)))) break; 
      
      int x2661 = x38723;
      struct PARTSUPPRecord* x395 = &(x16634[x2661]);
      int x397 = x395->PS_PARTKEY;
      struct PARTRecord* x11760 = &(x16478[(x397-(1))]);
      int x26781 = strlen("azure");
      int x26782 = strncmp((x11760->P_NAME), "azure", x26781);
      if((x26782==(0))) {
        if(((x11760->P_PARTKEY)==(x397))) {
          if(((x11760->P_PARTKEY)==(x397))) {
            int x1150 = x395->PS_SUPPKEY;
            int x4941 = x397%(1600000);
            int x4942 = x38608[x4941];
            struct LINEITEMRecord* x4943 = x38607[x4941];
            int x28861 = 0;
            for(; x28861 < x4942 ; x28861 += 1) {
              
              struct LINEITEMRecord* x28862 = &(x4943[x28861]);
              int x28863 = x28862->L_SHIPDATE;
              /* VAR */ int ite34667 = 0;
              if((x28863>=(19960101))) {
                ite34667 = (x28863<(19970101));
              } else {
                
                ite34667 = 0;
              };
              int x32569 = ite34667;
              if(x32569) {
                /* VAR */ int ite34678 = 0;
                if((x397==((x28862->L_PARTKEY)))) {
                  ite34678 = (x1150==((x28862->L_SUPPKEY)));
                } else {
                  
                  ite34678 = 0;
                };
                int x32574 = ite34678;
                if(x32574) {
                  int x13547 = x38648;
                  struct Q20GRPRecord* x13548 = &(x38649[x13547]);
                  x13548->PS_PARTKEY = x397;
                  x13548->PS_SUPPKEY = x1150;
                  x13548->PS_AVAILQTY = (x395->PS_AVAILQTY);
                  int x13552 = x38648;
                  x38648 = (x13552+(1));
                  int x23864 = x13548->PS_PARTKEY;
                  int x23866 = x13548->PS_SUPPKEY;
                  int x23868 = x13548->PS_AVAILQTY;
                  int x6873 = ((x23864+(x23866))+(x23868))&(1048575);
                  struct Set_AGGRecord_Q20GRPRecord* x8171 = &(x38587[x6873]);
                  int x6875 = x38586;
                  if((x6873>(x6875))) {
                    x38586 = x6873;
                  };
                  /* VAR */ int i8180 = 0;
                  /* VAR */ int found8181 = 0;
                  while(1) {
                    
                    int x8182 = i8180;
                    int x8183 = x8171->maxSize;
                    /* VAR */ int ite34714 = 0;
                    if((x8182<(x8183))) {
                      int x38943 = found8181;
                      int x38944 = !(x38943);
                      ite34714 = x38944;
                    } else {
                      
                      ite34714 = 0;
                    };
                    int x32603 = ite34714;
                    if (!(x32603)) break; 
                    
                    int x8189 = i8180;
                    struct AGGRecord_Q20GRPRecord* x8190 = &(((struct AGGRecord_Q20GRPRecord*) { x8171->array })[x8189]);
                    struct Q20GRPRecord* x8191 = x8190->key;
                    /* VAR */ int ite34733 = 0;
                    if(((x8191->PS_PARTKEY)==(x23864))) {
                      ite34733 = ((x8191->PS_SUPPKEY)==(x23866));
                    } else {
                      
                      ite34733 = 0;
                    };
                    int x32615 = ite34733;
                    /* VAR */ int ite34740 = 0;
                    if(x32615) {
                      ite34740 = ((x8191->PS_AVAILQTY)==(x23868));
                    } else {
                      
                      ite34740 = 0;
                    };
                    int x32617 = ite34740;
                    if(x32617) {
                      found8181 = 1;
                    } else {
                      
                      int x8194 = i8180;
                      i8180 = (x8194+(1));
                    };
                  };
                  int x8199 = found8181;
                  int x8200 = !(x8199);
                  /* VAR */ struct AGGRecord_Q20GRPRecord** ite32626 = 0;
                  if(x8200) {
                    ite32626 = NULL;
                  } else {
                    
                    int x32629 = i8180;
                    struct AGGRecord_Q20GRPRecord* x32630 = &(((struct AGGRecord_Q20GRPRecord*) { x8171->array })[x32629]);
                    ite32626 = x32630;
                  };
                  struct AGGRecord_Q20GRPRecord** x8207 = ite32626;
                  /* VAR */ struct AGGRecord_Q20GRPRecord* ite32636 = 0;
                  if((x8207!=(NULL))) {
                    ite32636 = x8207;
                  } else {
                    
                    int x32638 = x38665;
                    double* x32639 = x38666[x32638];
                    int x32640 = x38665;
                    x38665 = (x32640+(1));
                    int x32643 = x38677;
                    struct AGGRecord_Q20GRPRecord* x32644 = &(x38678[x32643]);
                    x32644->key = x13548;
                    x32644->aggs = x32639;
                    int x32647 = x38677;
                    x38677 = (x32647+(1));
                    struct AGGRecord_Q20GRPRecord* x32650 = x8171->array;
                    int x32651 = x8171->maxSize;
                    struct AGGRecord_Q20GRPRecord x32652 = *x32644;
                    *(x32650 + x32651) = x32652;
                    struct AGGRecord_Q20GRPRecord* x32654 = &(x32650[x32651]);
                    x32644 = x32654;
                    int x32656 = x8171->maxSize;
                    x8171->maxSize = (x32656+(1));
                    ite32636 = x32644;
                  };
                  struct AGGRecord_Q20GRPRecord* x6888 = ite32636;
                  double* x506 = x6888->aggs;
                  double x520 = x506[0];
                  *x506 = (x520+((x28862->L_QUANTITY)));
                };
              };
            };
          };
        };
      };
      int x2695 = x38723;
      x38723 = (x2695+(1));
    };
    int x39022 = x38586;
    int x29065 = 0;
    for(; x29065 < (x39022+(1)) ; x29065 += 1) {
      
      struct Set_AGGRecord_Q20GRPRecord* x29066 = &(x38587[x29065]);
      int x29067 = x29066->maxSize;
      int x29014 = 0;
      for(; x29014 < x29067 ; x29014 += 1) {
        
        struct AGGRecord_Q20GRPRecord* x29016 = &(((struct AGGRecord_Q20GRPRecord*) { x29066->array })[x29014]);
        struct Q20GRPRecord* x29017 = x29016->key;
        double x29021 = ((double*) { x29016->aggs })[0];
        if(((x29017->PS_AVAILQTY)>((0.5*(x29021))))) {
          struct SUPPLIERRecord* x5001 = &(x16358[((x29017->PS_SUPPKEY)-(1))]);
          int x562 = x5001->S_SUPPKEY;
          struct Q20GRPRecord* x11866 = x29016->key;
          if(((x11866->PS_SUPPKEY)==(x562))) {
            int x1375 = x5001->S_NATIONKEY;
            struct NATIONRecord* x11875 = &(x16278[(x1375-(0))]);
            int x26929 = strcmp((x11875->N_NAME), "JORDAN");
            if((x26929==(0))) {
              if(((x11875->N_NATIONKEY)==(x1375))) {
                int x5020 = x11875->N_NATIONKEY;
                if((x5020==(x1375))) {
                  int x13659 = x38696;
                  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x13660 = &(x38697[x13659]);
                  x13660->N_NATIONKEY = x5020;
                  x13660->N_NAME = (x11875->N_NAME);
                  x13660->key = x11866;
                  x13660->aggs = ((double*) { x29016->aggs });
                  x13660->S_SUPPKEY = x562;
                  x13660->S_NAME = (x5001->S_NAME);
                  x13660->S_ADDRESS = (x5001->S_ADDRESS);
                  x13660->S_NATIONKEY = x1375;
                  int x13669 = x38696;
                  x38696 = (x13669+(1));
                  g_tree_insert(x38737, x13660, x13660);
                };
              };
            };
          };
        };
      };
    };
    while(1) {
      
      int x2922 = x38738;
      int x643 = !(x2922);
      /* VAR */ int ite35008 = 0;
      if(x643) {
        int x39234 = g_tree_nnodes(x38737);
        ite35008 = (x39234!=(0));
      } else {
        
        ite35008 = 0;
      };
      int x32880 = ite35008;
      if (!(x32880)) break; 
      
      void* x20081 = NULL;
      void** x20089 = &(x20081);
      g_tree_foreach(x38737, x20088, x20089);
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x20091 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*){x20081};
      int x20092 = g_tree_remove(x38737, x20091);
      if(0) {
        x38738 = 1;
      } else {
        
        printf("%s|%s\n", (x20091->S_NAME), (x20091->S_ADDRESS));
        int x2940 = x38739;
        x38739 = (x2940+(1));
      };
    };
    int x39260 = x38739;
    printf("(%d rows)\n", x39260);
    struct timeval* x39262 = &x38720;
    gettimeofday(x39262, NULL);
    struct timeval* x39264 = &x38716;
    struct timeval* x39265 = &x38720;
    struct timeval* x39266 = &x38718;
    long x39267 = timeval_subtract(x39264, x39265, x39266);
    printf("Generated code run in %ld milliseconds.\n", x39267);
  };
}
/* ----------- FUNCTIONS ----------- */
int x38730(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x338, struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x339) {
  int x26766 = strcmp((x338->S_NAME), (x339->S_NAME));
  return x26766; 
}

int x20088(void* x20082, void* x20083, void* x20084) {
  pointer_assign(((struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord**){x20084}), ((struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*){x20083}));
  return 1; 
}
