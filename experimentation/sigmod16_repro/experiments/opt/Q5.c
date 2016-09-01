#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct AGGRecord_OptimalString;
  struct REGIONRecord;
  struct NATIONRecord;
  struct ORDERSRecord;
  struct SUPPLIERRecord;
  struct CUSTOMERRecord;
  
  struct LINEITEMRecord {
  int L_ORDERKEY;
  int L_SUPPKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  };
  
  struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
  struct AGGRecord_OptimalString* next;
  };
  
  struct REGIONRecord {
  int R_REGIONKEY;
  char* R_NAME;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  int O_ORDERDATE;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  int S_NATIONKEY;
  };
  
  struct CUSTOMERRecord {
  int C_CUSTKEY;
  int C_NATIONKEY;
  };
  
  


int x60546(struct AGGRecord_OptimalString* x375, struct AGGRecord_OptimalString* x376);

int x25891(void* x25885, void* x25886, void* x25887);
/* GLOBAL VARS */

struct timeval x18615;
int main(int argc, char** argv) {
  FILE* x19368 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x19369 = 0;
  int x19370 = x19369;
  int* x19371 = &x19370;
  int x19372 = fscanf(x19368, "%d", x19371);
  pclose(x19368);
  struct NATIONRecord* x21474 = (struct NATIONRecord*)malloc(x19370 * sizeof(struct NATIONRecord));
  memset(x21474, 0, x19370 * sizeof(struct NATIONRecord));
  int x19376 = O_RDONLY;
  int x19377 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x19376);
  struct stat x19378 = (struct stat){0};
  /* VAR */ struct stat x19379 = x19378;
  struct stat x19380 = x19379;
  struct stat* x19381 = &x19380;
  int x19382 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x19381);
  int x19384 = PROT_READ;
  int x19385 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x19381->st_size), x19384, x19385, x19377, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite44053 = 0;
    if((x5<(x19370))) {
      char x57650 = *x3;
      ite44053 = (x57650!=('\0'));
    } else {
      
      ite44053 = 0;
    };
    int x40738 = ite44053;
    if (!(x40738)) break; 
    
    /* VAR */ int x19393 = 0;
    int x19394 = x19393;
    int* x19395 = &x19394;
    char* x19396 = strntoi_unchecked(x3, x19395);
    x3 = x19396;
    char* x21498 = (char*)malloc(26 * sizeof(char));
    memset(x21498, 0, 26 * sizeof(char));
    /* VAR */ char* x19399 = x3;
    while(1) {
      
      char x19400 = *x3;
      /* VAR */ int ite44072 = 0;
      if((x19400!=('|'))) {
        char x57668 = *x3;
        ite44072 = (x57668!=('\n'));
      } else {
        
        ite44072 = 0;
      };
      int x40750 = ite44072;
      if (!(x40750)) break; 
      
      x3 += 1;
    };
    char* x19407 = x19399;
    int x19408 = x3 - x19407;
    char* x19409 = x19399;
    char* x19410 = strncpy(x21498, x19409, x19408);
    x3 += 1;
    /* VAR */ int x19417 = 0;
    int x19418 = x19417;
    int* x19419 = &x19418;
    char* x19420 = strntoi_unchecked(x3, x19419);
    x3 = x19420;
    char* x21521 = (char*)malloc(153 * sizeof(char));
    memset(x21521, 0, 153 * sizeof(char));
    /* VAR */ char* x19423 = x3;
    while(1) {
      
      char x19424 = *x3;
      /* VAR */ int ite44100 = 0;
      if((x19424!=('|'))) {
        char x57695 = *x3;
        ite44100 = (x57695!=('\n'));
      } else {
        
        ite44100 = 0;
      };
      int x40771 = ite44100;
      if (!(x40771)) break; 
      
      x3 += 1;
    };
    char* x19431 = x19423;
    int x19432 = x3 - x19431;
    char* x19433 = x19423;
    char* x19434 = strncpy(x21521, x19433, x19432);
    x3 += 1;
    struct NATIONRecord* x22636 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x22636, 0, 1 * sizeof(struct NATIONRecord));
    x22636->N_NATIONKEY = x19394; x22636->N_NAME = x21498; x22636->N_REGIONKEY = x19418;
    int x28 = x4;
    /* VAR */ int ite44123 = 0;
    if((x22636==(NULL))) {
      ite44123 = 1;
    } else {
      
      char* x57718 = x22636->N_NAME;
      /* VAR */ int x57720 = 0;
      if((x57718==(NULL))) {
        x57720 = 1;
      } else {
        
        int x57723 = strcmp(x57718, "");
        int x57724 = !(x57723);
        x57720 = x57724;
      };
      int x57727 = x57720;
      ite44123 = x57727;
    };
    int x40787 = ite44123;
    if(x40787) {
      *(x21474 + x28) = (const struct NATIONRecord){0};
    } else {
      
      struct NATIONRecord x21543 = *x22636;
      *(x21474 + x28) = x21543;
      struct NATIONRecord* x21545 = &(x21474[x28]);
      x22636 = x21545;
    };
    int x30 = x4;
    x4 = (x30+(1));
  };
  FILE* x19447 = popen("wc -l /mnt/ramdisk/tpch/sf8/region.tbl", "r");
  /* VAR */ int x19448 = 0;
  int x19449 = x19448;
  int* x19450 = &x19449;
  int x19451 = fscanf(x19447, "%d", x19450);
  pclose(x19447);
  struct REGIONRecord* x21557 = (struct REGIONRecord*)malloc(x19449 * sizeof(struct REGIONRecord));
  memset(x21557, 0, x19449 * sizeof(struct REGIONRecord));
  int x19455 = O_RDONLY;
  int x19456 = open("/mnt/ramdisk/tpch/sf8/region.tbl", x19455);
  /* VAR */ struct stat x19457 = x19378;
  struct stat x19458 = x19457;
  struct stat* x19459 = &x19458;
  int x19460 = stat("/mnt/ramdisk/tpch/sf8/region.tbl", x19459);
  int x19462 = PROT_READ;
  int x19463 = MAP_PRIVATE;
  char* x36 = mmap(NULL, (x19459->st_size), x19462, x19463, x19456, 0);
  /* VAR */ int x37 = 0;
  while(1) {
    
    int x38 = x37;
    /* VAR */ int ite44164 = 0;
    if((x38<(x19449))) {
      char x57763 = *x36;
      ite44164 = (x57763!=('\0'));
    } else {
      
      ite44164 = 0;
    };
    int x40819 = ite44164;
    if (!(x40819)) break; 
    
    /* VAR */ int x19471 = 0;
    int x19472 = x19471;
    int* x19473 = &x19472;
    char* x19474 = strntoi_unchecked(x36, x19473);
    x36 = x19474;
    char* x21580 = (char*)malloc(26 * sizeof(char));
    memset(x21580, 0, 26 * sizeof(char));
    /* VAR */ char* x19477 = x36;
    while(1) {
      
      char x19478 = *x36;
      /* VAR */ int ite44183 = 0;
      if((x19478!=('|'))) {
        char x57781 = *x36;
        ite44183 = (x57781!=('\n'));
      } else {
        
        ite44183 = 0;
      };
      int x40831 = ite44183;
      if (!(x40831)) break; 
      
      x36 += 1;
    };
    char* x19485 = x19477;
    int x19486 = x36 - x19485;
    char* x19487 = x19477;
    char* x19488 = strncpy(x21580, x19487, x19486);
    x36 += 1;
    char* x21598 = (char*)malloc(153 * sizeof(char));
    memset(x21598, 0, 153 * sizeof(char));
    /* VAR */ char* x19496 = x36;
    while(1) {
      
      char x19497 = *x36;
      /* VAR */ int ite44206 = 0;
      if((x19497!=('|'))) {
        char x57803 = *x36;
        ite44206 = (x57803!=('\n'));
      } else {
        
        ite44206 = 0;
      };
      int x40847 = ite44206;
      if (!(x40847)) break; 
      
      x36 += 1;
    };
    char* x19504 = x19496;
    int x19505 = x36 - x19504;
    char* x19506 = x19496;
    char* x19507 = strncpy(x21598, x19506, x19505);
    x36 += 1;
    struct REGIONRecord* x22715 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x22715, 0, 1 * sizeof(struct REGIONRecord));
    x22715->R_REGIONKEY = x19472; x22715->R_NAME = x21580;
    int x60 = x37;
    /* VAR */ int ite44229 = 0;
    if((x22715==(NULL))) {
      ite44229 = 1;
    } else {
      
      char* x57826 = x22715->R_NAME;
      /* VAR */ int x57828 = 0;
      if((x57826==(NULL))) {
        x57828 = 1;
      } else {
        
        int x57831 = strcmp(x57826, "");
        int x57832 = !(x57831);
        x57828 = x57832;
      };
      int x57835 = x57828;
      ite44229 = x57835;
    };
    int x40863 = ite44229;
    if(x40863) {
      *(x21557 + x60) = (const struct REGIONRecord){0};
    } else {
      
      struct REGIONRecord x21620 = *x22715;
      *(x21557 + x60) = x21620;
      struct REGIONRecord* x21622 = &(x21557[x60]);
      x22715 = x21622;
    };
    int x62 = x37;
    x37 = (x62+(1));
  };
  FILE* x19520 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x19521 = 0;
  int x19522 = x19521;
  int* x19523 = &x19522;
  int x19524 = fscanf(x19520, "%d", x19523);
  pclose(x19520);
  struct SUPPLIERRecord* x21634 = (struct SUPPLIERRecord*)malloc(x19522 * sizeof(struct SUPPLIERRecord));
  memset(x21634, 0, x19522 * sizeof(struct SUPPLIERRecord));
  int x19528 = O_RDONLY;
  int x19529 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x19528);
  /* VAR */ struct stat x19530 = x19378;
  struct stat x19531 = x19530;
  struct stat* x19532 = &x19531;
  int x19533 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x19532);
  int x19535 = PROT_READ;
  int x19536 = MAP_PRIVATE;
  char* x68 = mmap(NULL, (x19532->st_size), x19535, x19536, x19529, 0);
  /* VAR */ int x69 = 0;
  while(1) {
    
    int x70 = x69;
    /* VAR */ int ite44270 = 0;
    if((x70<(x19522))) {
      char x57871 = *x68;
      ite44270 = (x57871!=('\0'));
    } else {
      
      ite44270 = 0;
    };
    int x40895 = ite44270;
    if (!(x40895)) break; 
    
    /* VAR */ int x19544 = 0;
    int x19545 = x19544;
    int* x19546 = &x19545;
    char* x19547 = strntoi_unchecked(x68, x19546);
    x68 = x19547;
    char* x21657 = (char*)malloc(26 * sizeof(char));
    memset(x21657, 0, 26 * sizeof(char));
    /* VAR */ char* x19550 = x68;
    while(1) {
      
      char x19551 = *x68;
      /* VAR */ int ite44289 = 0;
      if((x19551!=('|'))) {
        char x57889 = *x68;
        ite44289 = (x57889!=('\n'));
      } else {
        
        ite44289 = 0;
      };
      int x40907 = ite44289;
      if (!(x40907)) break; 
      
      x68 += 1;
    };
    char* x19558 = x19550;
    int x19559 = x68 - x19558;
    char* x19560 = x19550;
    char* x19561 = strncpy(x21657, x19560, x19559);
    x68 += 1;
    char* x21675 = (char*)malloc(41 * sizeof(char));
    memset(x21675, 0, 41 * sizeof(char));
    /* VAR */ char* x19569 = x68;
    while(1) {
      
      char x19570 = *x68;
      /* VAR */ int ite44312 = 0;
      if((x19570!=('|'))) {
        char x57911 = *x68;
        ite44312 = (x57911!=('\n'));
      } else {
        
        ite44312 = 0;
      };
      int x40923 = ite44312;
      if (!(x40923)) break; 
      
      x68 += 1;
    };
    char* x19577 = x19569;
    int x19578 = x68 - x19577;
    char* x19579 = x19569;
    char* x19580 = strncpy(x21675, x19579, x19578);
    x68 += 1;
    /* VAR */ int x19587 = 0;
    int x19588 = x19587;
    int* x19589 = &x19588;
    char* x19590 = strntoi_unchecked(x68, x19589);
    x68 = x19590;
    char* x21698 = (char*)malloc(16 * sizeof(char));
    memset(x21698, 0, 16 * sizeof(char));
    /* VAR */ char* x19593 = x68;
    while(1) {
      
      char x19594 = *x68;
      /* VAR */ int ite44340 = 0;
      if((x19594!=('|'))) {
        char x57938 = *x68;
        ite44340 = (x57938!=('\n'));
      } else {
        
        ite44340 = 0;
      };
      int x40944 = ite44340;
      if (!(x40944)) break; 
      
      x68 += 1;
    };
    char* x19601 = x19593;
    int x19602 = x68 - x19601;
    char* x19603 = x19593;
    char* x19604 = strncpy(x21698, x19603, x19602);
    x68 += 1;
    /* VAR */ double x19611 = 0.0;
    double x19612 = x19611;
    double* x19613 = &x19612;
    char* x19614 = strntod_unchecked(x68, x19613);
    x68 = x19614;
    char* x21721 = (char*)malloc(102 * sizeof(char));
    memset(x21721, 0, 102 * sizeof(char));
    /* VAR */ char* x19617 = x68;
    while(1) {
      
      char x19618 = *x68;
      /* VAR */ int ite44368 = 0;
      if((x19618!=('|'))) {
        char x57965 = *x68;
        ite44368 = (x57965!=('\n'));
      } else {
        
        ite44368 = 0;
      };
      int x40965 = ite44368;
      if (!(x40965)) break; 
      
      x68 += 1;
    };
    char* x19625 = x19617;
    int x19626 = x68 - x19625;
    char* x19627 = x19617;
    char* x19628 = strncpy(x21721, x19627, x19626);
    x68 += 1;
    struct SUPPLIERRecord* x22840 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x22840, 0, 1 * sizeof(struct SUPPLIERRecord));
    x22840->S_SUPPKEY = x19545; x22840->S_NATIONKEY = x19588;
    int x110 = x69;
    if((x22840==(NULL))) {
      *(x21634 + x110) = (const struct SUPPLIERRecord){0};
    } else {
      
      struct SUPPLIERRecord x21743 = *x22840;
      *(x21634 + x110) = x21743;
      struct SUPPLIERRecord* x21745 = &(x21634[x110]);
      x22840 = x21745;
    };
    int x112 = x69;
    x69 = (x112+(1));
  };
  FILE* x19641 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x19642 = 0;
  int x19643 = x19642;
  int* x19644 = &x19643;
  int x19645 = fscanf(x19641, "%d", x19644);
  pclose(x19641);
  struct LINEITEMRecord* x21757 = (struct LINEITEMRecord*)malloc(x19643 * sizeof(struct LINEITEMRecord));
  memset(x21757, 0, x19643 * sizeof(struct LINEITEMRecord));
  int x19649 = O_RDONLY;
  int x19650 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x19649);
  /* VAR */ struct stat x19651 = x19378;
  struct stat x19652 = x19651;
  struct stat* x19653 = &x19652;
  int x19654 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x19653);
  int x19656 = PROT_READ;
  int x19657 = MAP_PRIVATE;
  char* x118 = mmap(NULL, (x19653->st_size), x19656, x19657, x19650, 0);
  /* VAR */ int x119 = 0;
  while(1) {
    
    int x120 = x119;
    /* VAR */ int ite44421 = 0;
    if((x120<(x19643))) {
      char x58017 = *x118;
      ite44421 = (x58017!=('\0'));
    } else {
      
      ite44421 = 0;
    };
    int x41011 = ite44421;
    if (!(x41011)) break; 
    
    /* VAR */ int x19665 = 0;
    int x19666 = x19665;
    int* x19667 = &x19666;
    char* x19668 = strntoi_unchecked(x118, x19667);
    x118 = x19668;
    /* VAR */ int x19670 = 0;
    int x19671 = x19670;
    int* x19672 = &x19671;
    char* x19673 = strntoi_unchecked(x118, x19672);
    x118 = x19673;
    /* VAR */ int x19675 = 0;
    int x19676 = x19675;
    int* x19677 = &x19676;
    char* x19678 = strntoi_unchecked(x118, x19677);
    x118 = x19678;
    /* VAR */ int x19680 = 0;
    int x19681 = x19680;
    int* x19682 = &x19681;
    char* x19683 = strntoi_unchecked(x118, x19682);
    x118 = x19683;
    /* VAR */ double x19685 = 0.0;
    double x19686 = x19685;
    double* x19687 = &x19686;
    char* x19688 = strntod_unchecked(x118, x19687);
    x118 = x19688;
    /* VAR */ double x19690 = 0.0;
    double x19691 = x19690;
    double* x19692 = &x19691;
    char* x19693 = strntod_unchecked(x118, x19692);
    x118 = x19693;
    /* VAR */ double x19695 = 0.0;
    double x19696 = x19695;
    double* x19697 = &x19696;
    char* x19698 = strntod_unchecked(x118, x19697);
    x118 = x19698;
    /* VAR */ double x19700 = 0.0;
    double x19701 = x19700;
    double* x19702 = &x19701;
    char* x19703 = strntod_unchecked(x118, x19702);
    x118 = x19703;
    char x19705 = *x118;
    /* VAR */ char x19706 = x19705;
    x118 += 1;
    x118 += 1;
    char x19710 = *x118;
    /* VAR */ char x19711 = x19710;
    x118 += 1;
    x118 += 1;
    /* VAR */ int x19715 = 0;
    int x19716 = x19715;
    int* x19717 = &x19716;
    char* x19718 = strntoi_unchecked(x118, x19717);
    x118 = x19718;
    /* VAR */ int x19720 = 0;
    int x19721 = x19720;
    int* x19722 = &x19721;
    char* x19723 = strntoi_unchecked(x118, x19722);
    x118 = x19723;
    /* VAR */ int x19725 = 0;
    int x19726 = x19725;
    int* x19727 = &x19726;
    char* x19728 = strntoi_unchecked(x118, x19727);
    x118 = x19728;
    /* VAR */ int x19734 = 0;
    int x19735 = x19734;
    int* x19736 = &x19735;
    char* x19737 = strntoi_unchecked(x118, x19736);
    x118 = x19737;
    /* VAR */ int x19739 = 0;
    int x19740 = x19739;
    int* x19741 = &x19740;
    char* x19742 = strntoi_unchecked(x118, x19741);
    x118 = x19742;
    /* VAR */ int x19744 = 0;
    int x19745 = x19744;
    int* x19746 = &x19745;
    char* x19747 = strntoi_unchecked(x118, x19746);
    x118 = x19747;
    /* VAR */ int x19753 = 0;
    int x19754 = x19753;
    int* x19755 = &x19754;
    char* x19756 = strntoi_unchecked(x118, x19755);
    x118 = x19756;
    /* VAR */ int x19758 = 0;
    int x19759 = x19758;
    int* x19760 = &x19759;
    char* x19761 = strntoi_unchecked(x118, x19760);
    x118 = x19761;
    /* VAR */ int x19763 = 0;
    int x19764 = x19763;
    int* x19765 = &x19764;
    char* x19766 = strntoi_unchecked(x118, x19765);
    x118 = x19766;
    char* x21882 = (char*)malloc(26 * sizeof(char));
    memset(x21882, 0, 26 * sizeof(char));
    /* VAR */ char* x19773 = x118;
    while(1) {
      
      char x19774 = *x118;
      /* VAR */ int ite44542 = 0;
      if((x19774!=('|'))) {
        char x58137 = *x118;
        ite44542 = (x58137!=('\n'));
      } else {
        
        ite44542 = 0;
      };
      int x41125 = ite44542;
      if (!(x41125)) break; 
      
      x118 += 1;
    };
    char* x19781 = x19773;
    int x19782 = x118 - x19781;
    char* x19783 = x19773;
    char* x19784 = strncpy(x21882, x19783, x19782);
    x118 += 1;
    char* x21900 = (char*)malloc(11 * sizeof(char));
    memset(x21900, 0, 11 * sizeof(char));
    /* VAR */ char* x19792 = x118;
    while(1) {
      
      char x19793 = *x118;
      /* VAR */ int ite44565 = 0;
      if((x19793!=('|'))) {
        char x58159 = *x118;
        ite44565 = (x58159!=('\n'));
      } else {
        
        ite44565 = 0;
      };
      int x41141 = ite44565;
      if (!(x41141)) break; 
      
      x118 += 1;
    };
    char* x19800 = x19792;
    int x19801 = x118 - x19800;
    char* x19802 = x19792;
    char* x19803 = strncpy(x21900, x19802, x19801);
    x118 += 1;
    char* x21918 = (char*)malloc(45 * sizeof(char));
    memset(x21918, 0, 45 * sizeof(char));
    /* VAR */ char* x19811 = x118;
    while(1) {
      
      char x19812 = *x118;
      /* VAR */ int ite44588 = 0;
      if((x19812!=('|'))) {
        char x58181 = *x118;
        ite44588 = (x58181!=('\n'));
      } else {
        
        ite44588 = 0;
      };
      int x41157 = ite44588;
      if (!(x41157)) break; 
      
      x118 += 1;
    };
    char* x19819 = x19811;
    int x19820 = x118 - x19819;
    char* x19821 = x19811;
    char* x19822 = strncpy(x21918, x19821, x19820);
    x118 += 1;
    struct LINEITEMRecord* x23039 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x23039, 0, 1 * sizeof(struct LINEITEMRecord));
    x23039->L_ORDERKEY = x19666; x23039->L_SUPPKEY = x19676; x23039->L_EXTENDEDPRICE = x19691; x23039->L_DISCOUNT = x19696;
    int x162 = x119;
    if((x23039==(NULL))) {
      *(x21757 + x162) = (const struct LINEITEMRecord){0};
    } else {
      
      struct LINEITEMRecord x21940 = *x23039;
      *(x21757 + x162) = x21940;
      struct LINEITEMRecord* x21942 = &(x21757[x162]);
      x23039 = x21942;
    };
    int x164 = x119;
    x119 = (x164+(1));
  };
  FILE* x19835 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x19836 = 0;
  int x19837 = x19836;
  int* x19838 = &x19837;
  int x19839 = fscanf(x19835, "%d", x19838);
  pclose(x19835);
  struct ORDERSRecord* x21954 = (struct ORDERSRecord*)malloc(x19837 * sizeof(struct ORDERSRecord));
  memset(x21954, 0, x19837 * sizeof(struct ORDERSRecord));
  int x19843 = O_RDONLY;
  int x19844 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x19843);
  /* VAR */ struct stat x19845 = x19378;
  struct stat x19846 = x19845;
  struct stat* x19847 = &x19846;
  int x19848 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x19847);
  int x19850 = PROT_READ;
  int x19851 = MAP_PRIVATE;
  char* x170 = mmap(NULL, (x19847->st_size), x19850, x19851, x19844, 0);
  /* VAR */ int x171 = 0;
  while(1) {
    
    int x172 = x171;
    /* VAR */ int ite44641 = 0;
    if((x172<(x19837))) {
      char x58233 = *x170;
      ite44641 = (x58233!=('\0'));
    } else {
      
      ite44641 = 0;
    };
    int x41203 = ite44641;
    if (!(x41203)) break; 
    
    /* VAR */ int x19859 = 0;
    int x19860 = x19859;
    int* x19861 = &x19860;
    char* x19862 = strntoi_unchecked(x170, x19861);
    x170 = x19862;
    /* VAR */ int x19864 = 0;
    int x19865 = x19864;
    int* x19866 = &x19865;
    char* x19867 = strntoi_unchecked(x170, x19866);
    x170 = x19867;
    char x19869 = *x170;
    /* VAR */ char x19870 = x19869;
    x170 += 1;
    x170 += 1;
    /* VAR */ double x19874 = 0.0;
    double x19875 = x19874;
    double* x19876 = &x19875;
    char* x19877 = strntod_unchecked(x170, x19876);
    x170 = x19877;
    /* VAR */ int x19879 = 0;
    int x19880 = x19879;
    int* x19881 = &x19880;
    char* x19882 = strntoi_unchecked(x170, x19881);
    x170 = x19882;
    /* VAR */ int x19884 = 0;
    int x19885 = x19884;
    int* x19886 = &x19885;
    char* x19887 = strntoi_unchecked(x170, x19886);
    x170 = x19887;
    /* VAR */ int x19889 = 0;
    int x19890 = x19889;
    int* x19891 = &x19890;
    char* x19892 = strntoi_unchecked(x170, x19891);
    x170 = x19892;
    char* x22011 = (char*)malloc(16 * sizeof(char));
    memset(x22011, 0, 16 * sizeof(char));
    /* VAR */ char* x19899 = x170;
    while(1) {
      
      char x19900 = *x170;
      /* VAR */ int ite44694 = 0;
      if((x19900!=('|'))) {
        char x58285 = *x170;
        ite44694 = (x58285!=('\n'));
      } else {
        
        ite44694 = 0;
      };
      int x41249 = ite44694;
      if (!(x41249)) break; 
      
      x170 += 1;
    };
    char* x19907 = x19899;
    int x19908 = x170 - x19907;
    char* x19909 = x19899;
    char* x19910 = strncpy(x22011, x19909, x19908);
    x170 += 1;
    char* x22029 = (char*)malloc(16 * sizeof(char));
    memset(x22029, 0, 16 * sizeof(char));
    /* VAR */ char* x19918 = x170;
    while(1) {
      
      char x19919 = *x170;
      /* VAR */ int ite44717 = 0;
      if((x19919!=('|'))) {
        char x58307 = *x170;
        ite44717 = (x58307!=('\n'));
      } else {
        
        ite44717 = 0;
      };
      int x41265 = ite44717;
      if (!(x41265)) break; 
      
      x170 += 1;
    };
    char* x19926 = x19918;
    int x19927 = x170 - x19926;
    char* x19928 = x19918;
    char* x19929 = strncpy(x22029, x19928, x19927);
    x170 += 1;
    /* VAR */ int x19936 = 0;
    int x19937 = x19936;
    int* x19938 = &x19937;
    char* x19939 = strntoi_unchecked(x170, x19938);
    x170 = x19939;
    char* x22052 = (char*)malloc(80 * sizeof(char));
    memset(x22052, 0, 80 * sizeof(char));
    /* VAR */ char* x19942 = x170;
    while(1) {
      
      char x19943 = *x170;
      /* VAR */ int ite44745 = 0;
      if((x19943!=('|'))) {
        char x58334 = *x170;
        ite44745 = (x58334!=('\n'));
      } else {
        
        ite44745 = 0;
      };
      int x41286 = ite44745;
      if (!(x41286)) break; 
      
      x170 += 1;
    };
    char* x19950 = x19942;
    int x19951 = x170 - x19950;
    char* x19952 = x19942;
    char* x19953 = strncpy(x22052, x19952, x19951);
    x170 += 1;
    struct ORDERSRecord* x23175 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x23175, 0, 1 * sizeof(struct ORDERSRecord));
    x23175->O_ORDERKEY = x19860; x23175->O_CUSTKEY = x19865; x23175->O_ORDERDATE = (((x19880*(10000))+((x19885*(100))))+(x19890));
    int x206 = x171;
    if((x23175==(NULL))) {
      *(x21954 + x206) = (const struct ORDERSRecord){0};
    } else {
      
      struct ORDERSRecord x22074 = *x23175;
      *(x21954 + x206) = x22074;
      struct ORDERSRecord* x22076 = &(x21954[x206]);
      x23175 = x22076;
    };
    int x208 = x171;
    x171 = (x208+(1));
  };
  FILE* x19966 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x19967 = 0;
  int x19968 = x19967;
  int* x19969 = &x19968;
  int x19970 = fscanf(x19966, "%d", x19969);
  pclose(x19966);
  struct CUSTOMERRecord* x22088 = (struct CUSTOMERRecord*)malloc(x19968 * sizeof(struct CUSTOMERRecord));
  memset(x22088, 0, x19968 * sizeof(struct CUSTOMERRecord));
  int x19974 = O_RDONLY;
  int x19975 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x19974);
  /* VAR */ struct stat x19976 = x19378;
  struct stat x19977 = x19976;
  struct stat* x19978 = &x19977;
  int x19979 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x19978);
  int x19981 = PROT_READ;
  int x19982 = MAP_PRIVATE;
  char* x214 = mmap(NULL, (x19978->st_size), x19981, x19982, x19975, 0);
  /* VAR */ int x215 = 0;
  while(1) {
    
    int x216 = x215;
    /* VAR */ int ite44798 = 0;
    if((x216<(x19968))) {
      char x58386 = *x214;
      ite44798 = (x58386!=('\0'));
    } else {
      
      ite44798 = 0;
    };
    int x41332 = ite44798;
    if (!(x41332)) break; 
    
    /* VAR */ int x19990 = 0;
    int x19991 = x19990;
    int* x19992 = &x19991;
    char* x19993 = strntoi_unchecked(x214, x19992);
    x214 = x19993;
    char* x22111 = (char*)malloc(26 * sizeof(char));
    memset(x22111, 0, 26 * sizeof(char));
    /* VAR */ char* x19996 = x214;
    while(1) {
      
      char x19997 = *x214;
      /* VAR */ int ite44817 = 0;
      if((x19997!=('|'))) {
        char x58404 = *x214;
        ite44817 = (x58404!=('\n'));
      } else {
        
        ite44817 = 0;
      };
      int x41344 = ite44817;
      if (!(x41344)) break; 
      
      x214 += 1;
    };
    char* x20004 = x19996;
    int x20005 = x214 - x20004;
    char* x20006 = x19996;
    char* x20007 = strncpy(x22111, x20006, x20005);
    x214 += 1;
    char* x22129 = (char*)malloc(41 * sizeof(char));
    memset(x22129, 0, 41 * sizeof(char));
    /* VAR */ char* x20015 = x214;
    while(1) {
      
      char x20016 = *x214;
      /* VAR */ int ite44840 = 0;
      if((x20016!=('|'))) {
        char x58426 = *x214;
        ite44840 = (x58426!=('\n'));
      } else {
        
        ite44840 = 0;
      };
      int x41360 = ite44840;
      if (!(x41360)) break; 
      
      x214 += 1;
    };
    char* x20023 = x20015;
    int x20024 = x214 - x20023;
    char* x20025 = x20015;
    char* x20026 = strncpy(x22129, x20025, x20024);
    x214 += 1;
    /* VAR */ int x20033 = 0;
    int x20034 = x20033;
    int* x20035 = &x20034;
    char* x20036 = strntoi_unchecked(x214, x20035);
    x214 = x20036;
    char* x22152 = (char*)malloc(16 * sizeof(char));
    memset(x22152, 0, 16 * sizeof(char));
    /* VAR */ char* x20039 = x214;
    while(1) {
      
      char x20040 = *x214;
      /* VAR */ int ite44868 = 0;
      if((x20040!=('|'))) {
        char x58453 = *x214;
        ite44868 = (x58453!=('\n'));
      } else {
        
        ite44868 = 0;
      };
      int x41381 = ite44868;
      if (!(x41381)) break; 
      
      x214 += 1;
    };
    char* x20047 = x20039;
    int x20048 = x214 - x20047;
    char* x20049 = x20039;
    char* x20050 = strncpy(x22152, x20049, x20048);
    x214 += 1;
    /* VAR */ double x20057 = 0.0;
    double x20058 = x20057;
    double* x20059 = &x20058;
    char* x20060 = strntod_unchecked(x214, x20059);
    x214 = x20060;
    char* x22175 = (char*)malloc(11 * sizeof(char));
    memset(x22175, 0, 11 * sizeof(char));
    /* VAR */ char* x20063 = x214;
    while(1) {
      
      char x20064 = *x214;
      /* VAR */ int ite44896 = 0;
      if((x20064!=('|'))) {
        char x58480 = *x214;
        ite44896 = (x58480!=('\n'));
      } else {
        
        ite44896 = 0;
      };
      int x41402 = ite44896;
      if (!(x41402)) break; 
      
      x214 += 1;
    };
    char* x20071 = x20063;
    int x20072 = x214 - x20071;
    char* x20073 = x20063;
    char* x20074 = strncpy(x22175, x20073, x20072);
    x214 += 1;
    char* x22193 = (char*)malloc(118 * sizeof(char));
    memset(x22193, 0, 118 * sizeof(char));
    /* VAR */ char* x20082 = x214;
    while(1) {
      
      char x20083 = *x214;
      /* VAR */ int ite44919 = 0;
      if((x20083!=('|'))) {
        char x58502 = *x214;
        ite44919 = (x58502!=('\n'));
      } else {
        
        ite44919 = 0;
      };
      int x41418 = ite44919;
      if (!(x41418)) break; 
      
      x214 += 1;
    };
    char* x20090 = x20082;
    int x20091 = x214 - x20090;
    char* x20092 = x20082;
    char* x20093 = strncpy(x22193, x20092, x20091);
    x214 += 1;
    struct CUSTOMERRecord* x23318 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x23318, 0, 1 * sizeof(struct CUSTOMERRecord));
    x23318->C_CUSTKEY = x19991; x23318->C_NATIONKEY = x20034;
    int x264 = x215;
    if((x23318==(NULL))) {
      *(x22088 + x264) = (const struct CUSTOMERRecord){0};
    } else {
      
      struct CUSTOMERRecord x22215 = *x23318;
      *(x22088 + x264) = x22215;
      struct CUSTOMERRecord* x22217 = &(x22088[x264]);
      x23318 = x22217;
    };
    int x266 = x215;
    x215 = (x266+(1));
  };
  int x271 = 0;
  for(; x271 < 1 ; x271 += 1) {
    
    /* VAR */ int x60317 = 0;
    struct AGGRecord_OptimalString* x60318 = (struct AGGRecord_OptimalString*)malloc(50 * sizeof(struct AGGRecord_OptimalString));
    memset(x60318, 0, 50 * sizeof(struct AGGRecord_OptimalString));
    int x35984 = 0;
    for(; x35984 < 50 ; x35984 += 1) {
      
      *(x60318 + x35984) = (const struct AGGRecord_OptimalString){0};
    };
    struct LINEITEMRecord** x60324 = (struct LINEITEMRecord**)malloc(60000000 * sizeof(struct LINEITEMRecord*));
    memset(x60324, 0, 60000000 * sizeof(struct LINEITEMRecord*));
    int* x60325 = (int*)malloc(60000000 * sizeof(int));
    memset(x60325, 0, 60000000 * sizeof(int));
    int x35993 = 0;
    for(; x35993 < 60000000 ; x35993 += 1) {
      
      struct LINEITEMRecord* x35994 = (struct LINEITEMRecord*)malloc(16 * sizeof(struct LINEITEMRecord));
      memset(x35994, 0, 16 * sizeof(struct LINEITEMRecord));
      *(x60324 + x35993) = x35994;
    };
    /* VAR */ int x60333 = 0;
    int x36017 = 0;
    for(; x36017 < x19643 ; x36017 += 1) {
      
      struct LINEITEMRecord* x36018 = &(x21757[x36017]);
      int x36020 = (x36018->L_ORDERKEY)%(60000000);
      int x36021 = x60325[x36020];
      struct LINEITEMRecord* x36022 = x60324[x36020];
      if((x36018==(NULL))) {
        *(x36022 + x36021) = (const struct LINEITEMRecord){0};
      } else {
        
        struct LINEITEMRecord x22252 = *x36018;
        *(x36022 + x36021) = x22252;
        struct LINEITEMRecord* x22254 = &(x36022[x36021]);
        x36018 = x22254;
      };
      *(x60325 + x36020) = (x36021+(1));
      int x36032 = x60333;
      x60333 = (x36032+(1));
    };
    struct ORDERSRecord** x60371 = (struct ORDERSRecord**)malloc(1200000 * sizeof(struct ORDERSRecord*));
    memset(x60371, 0, 1200000 * sizeof(struct ORDERSRecord*));
    int* x60372 = (int*)malloc(1200000 * sizeof(int));
    memset(x60372, 0, 1200000 * sizeof(int));
    int x36042 = 0;
    for(; x36042 < 1200000 ; x36042 += 1) {
      
      struct ORDERSRecord* x36043 = (struct ORDERSRecord*)malloc(1024 * sizeof(struct ORDERSRecord));
      memset(x36043, 0, 1024 * sizeof(struct ORDERSRecord));
      *(x60371 + x36042) = x36043;
    };
    /* VAR */ int x60380 = 0;
    int x36066 = 0;
    for(; x36066 < x19837 ; x36066 += 1) {
      
      struct ORDERSRecord* x36067 = &(x21954[x36066]);
      int x36069 = (x36067->O_CUSTKEY)%(1200000);
      int x36070 = x60372[x36069];
      struct ORDERSRecord* x36071 = x60371[x36069];
      if((x36067==(NULL))) {
        *(x36071 + x36070) = (const struct ORDERSRecord){0};
      } else {
        
        struct ORDERSRecord x22282 = *x36067;
        *(x36071 + x36070) = x22282;
        struct ORDERSRecord* x22284 = &(x36071[x36070]);
        x36067 = x22284;
      };
      *(x60372 + x36069) = (x36070+(1));
      int x36081 = x60380;
      x60380 = (x36081+(1));
    };
    struct CUSTOMERRecord** x60418 = (struct CUSTOMERRecord**)malloc(25 * sizeof(struct CUSTOMERRecord*));
    memset(x60418, 0, 25 * sizeof(struct CUSTOMERRecord*));
    int* x60419 = (int*)malloc(25 * sizeof(int));
    memset(x60419, 0, 25 * sizeof(int));
    int x36091 = 0;
    for(; x36091 < 25 ; x36091 += 1) {
      
      struct CUSTOMERRecord* x36092 = (struct CUSTOMERRecord*)malloc(60000 * sizeof(struct CUSTOMERRecord));
      memset(x36092, 0, 60000 * sizeof(struct CUSTOMERRecord));
      *(x60418 + x36091) = x36092;
    };
    /* VAR */ int x60427 = 0;
    int x36115 = 0;
    for(; x36115 < x19968 ; x36115 += 1) {
      
      struct CUSTOMERRecord* x36116 = &(x22088[x36115]);
      int x36118 = (x36116->C_NATIONKEY)%(25);
      int x36119 = x60419[x36118];
      struct CUSTOMERRecord* x36120 = x60418[x36118];
      if((x36116==(NULL))) {
        *(x36120 + x36119) = (const struct CUSTOMERRecord){0};
      } else {
        
        struct CUSTOMERRecord x22312 = *x36116;
        *(x36120 + x36119) = x22312;
        struct CUSTOMERRecord* x22314 = &(x36120[x36119]);
        x36116 = x22314;
      };
      *(x60419 + x36118) = (x36119+(1));
      int x36130 = x60427;
      x60427 = (x36130+(1));
    };
    /* VAR */ int x60465 = 0;
    double** x60466 = (double**)malloc(25 * sizeof(double*));
    memset(x60466, 0, 25 * sizeof(double*));
    /* VAR */ int x60467 = 0;
    while(1) {
      
      int x18400 = x60467;
      if (!((x18400<(25)))) break; 
      
      int x18402 = x60467;
      double* x22330 = (double*)malloc(1 * sizeof(double));
      memset(x22330, 0, 1 * sizeof(double));
      *(x60466 + x18402) = x22330;
      int x18405 = x60467;
      x60467 = (x18405+(1));
    };
    /* VAR */ int x60477 = 0;
    struct AGGRecord_OptimalString* x60478 = (struct AGGRecord_OptimalString*)malloc(25 * sizeof(struct AGGRecord_OptimalString));
    memset(x60478, 0, 25 * sizeof(struct AGGRecord_OptimalString));
    /* VAR */ int x60479 = 0;
    while(1) {
      
      int x18412 = x60479;
      if (!((x18412<(25)))) break; 
      
      int x18414 = x60479;
      double* x18415 = x60466[x18414];
      struct AGGRecord_OptimalString* x23452 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x23452, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      x23452->key = ""; x23452->aggs = x18415; x23452->next = NULL;
      /* VAR */ int ite46807 = 0;
      if((x23452==(NULL))) {
        ite46807 = 1;
      } else {
        
        char* x60492 = x23452->key;
        /* VAR */ int x60494 = 0;
        if((x60492==(NULL))) {
          x60494 = 1;
        } else {
          
          int x60497 = strcmp(x60492, "");
          int x60498 = !(x60497);
          x60494 = x60498;
        };
        int x60501 = x60494;
        ite46807 = x60501;
      };
      int x42911 = ite46807;
      if(x42911) {
        *(x60478 + x18414) = (const struct AGGRecord_OptimalString){0};
      } else {
        
        struct AGGRecord_OptimalString x22346 = *x23452;
        *(x60478 + x18414) = x22346;
        struct AGGRecord_OptimalString* x22348 = &(x60478[x18414]);
        x23452 = x22348;
      };
      int x18418 = x60479;
      x60479 = (x18418+(1));
    };
    /* VAR */ struct timeval x60514 = x18615;
    struct timeval x60515 = x60514;
    /* VAR */ struct timeval x60516 = x18615;
    struct timeval x60517 = x60516;
    /* VAR */ struct timeval x60518 = x18615;
    struct timeval x60519 = x60518;
    struct timeval* x60520 = &x60517;
    gettimeofday(x60520, NULL);
    /* VAR */ int x60522 = 0;
    int* x60569 = &(x60546);
    GTree* x60570 = g_tree_new(x60569);
    /* VAR */ int x60571 = 0;
    /* VAR */ int x60572 = 0;
    while(1) {
      
      int x60574 = x60522;
      if (!((x60574<(x19370)))) break; 
      
      int x3234 = x60522;
      struct NATIONRecord* x436 = &(x21474[x3234]);
      int x438 = x436->N_REGIONKEY;
      struct REGIONRecord* x16362 = &(x21557[(x438-(0))]);
      int x33820 = strcmp((x16362->R_NAME), "ASIA");
      if((x33820==(0))) {
        if(((x16362->R_REGIONKEY)==(x438))) {
          if(((x16362->R_REGIONKEY)==(x438))) {
            int x1329 = x436->N_NATIONKEY;
            char* x1330 = x436->N_NAME;
            int x6012 = x1329%(25);
            int x6013 = x60419[x6012];
            struct CUSTOMERRecord* x6014 = x60418[x6012];
            int x36735 = 0;
            for(; x36735 < x6013 ; x36735 += 1) {
              
              struct CUSTOMERRecord* x36736 = &(x6014[x36735]);
              if((x1329==((x36736->C_NATIONKEY)))) {
                int x1381 = x36736->C_CUSTKEY;
                int x6030 = x1381%(1200000);
                int x6031 = x60372[x6030];
                struct ORDERSRecord* x6032 = x60371[x6030];
                int x36491 = 0;
                for(; x36491 < x6031 ; x36491 += 1) {
                  
                  struct ORDERSRecord* x36492 = &(x6032[x36491]);
                  int x36493 = x36492->O_ORDERDATE;
                  /* VAR */ int ite47904 = 0;
                  if((x36493>=(19960101))) {
                    ite47904 = (x36493<(19970101));
                  } else {
                    
                    ite47904 = 0;
                  };
                  int x43733 = ite47904;
                  if(x43733) {
                    if((x1381==((x36492->O_CUSTKEY)))) {
                      int x1440 = x36492->O_ORDERKEY;
                      int x6055 = x1440%(60000000);
                      int x6056 = x60325[x6055];
                      struct LINEITEMRecord* x6057 = x60324[x6055];
                      int x36376 = 0;
                      for(; x36376 < x6056 ; x36376 += 1) {
                        
                        struct LINEITEMRecord* x36377 = &(x6057[x36376]);
                        if((x1440==((x36377->L_ORDERKEY)))) {
                          int x1617 = x36377->L_SUPPKEY;
                          struct SUPPLIERRecord* x16415 = &(x21634[(x1617-(1))]);
                          if(((x16415->S_SUPPKEY)==(x1617))) {
                            /* VAR */ int ite48087 = 0;
                            if(((x16415->S_SUPPKEY)==(x1617))) {
                              ite48087 = (x1329==((x16415->S_NATIONKEY)));
                            } else {
                              
                              ite48087 = 0;
                            };
                            int x43869 = ite48087;
                            if(x43869) {
                              int x33882 = strlen(x1330);
                              /* VAR */ int x30341 = 0;
                              /* VAR */ int x30342 = 0;
                              while(1) {
                                
                                int x30343 = x30341;
                                if (!((x30343<(x33882)))) break; 
                                
                                int x30345 = x30342;
                                int x30346 = x30341;
                                char* x33890 = pointer_add(x1330, x30346);
                                char x33891 = *(x33890);
                                x30342 = (x30345+(x33891));
                                int x30351 = x30341;
                                x30341 = (x30351+(1));
                              };
                              int x30355 = x30342;
                              int x8485 = x30355&(49);
                              struct AGGRecord_OptimalString* x10000 = &(x60318[x8485]);
                              int x8487 = x60317;
                              if((x8485>(x8487))) {
                                x60317 = x8485;
                              };
                              /* VAR */ struct AGGRecord_OptimalString* current10555 = x10000;
                              /* VAR */ int found10010 = 0;
                              while(1) {
                                
                                struct AGGRecord_OptimalString* x10558 = current10555;
                                /* VAR */ int ite48124 = 0;
                                if((x10558!=(NULL))) {
                                  char* x61891 = x10558->key;
                                  /* VAR */ int x61893 = 0;
                                  if((x61891!=(NULL))) {
                                    int x61895 = strcmp(x61891, "");
                                    x61893 = x61895;
                                  } else {
                                    
                                    x61893 = 0;
                                  };
                                  int x61899 = x61893;
                                  ite48124 = x61899;
                                } else {
                                  
                                  ite48124 = 0;
                                };
                                int x43899 = ite48124;
                                /* VAR */ int ite48135 = 0;
                                if(x43899) {
                                  int x61906 = found10010;
                                  int x61907 = !(x61906);
                                  ite48135 = x61907;
                                } else {
                                  
                                  ite48135 = 0;
                                };
                                int x43901 = ite48135;
                                if (!(x43901)) break; 
                                
                                struct AGGRecord_OptimalString* x10563 = current10555;
                                int x30375 = strcmp((x10563->key), x1330);
                                int x30376 = !(x30375);
                                if(x30376) {
                                  found10010 = 1;
                                } else {
                                  
                                  struct AGGRecord_OptimalString* x10569 = current10555;
                                  struct AGGRecord_OptimalString* x11660 = x10569->next;
                                  current10555 = x11660;
                                };
                              };
                              int x10026 = found10010;
                              int x10027 = !(x10026);
                              /* VAR */ struct AGGRecord_OptimalString** ite43914 = 0;
                              if(x10027) {
                                ite43914 = NULL;
                              } else {
                                
                                struct AGGRecord_OptimalString* x43916 = current10555;
                                ite43914 = x43916;
                              };
                              struct AGGRecord_OptimalString** x10033 = ite43914;
                              /* VAR */ struct AGGRecord_OptimalString* ite43922 = 0;
                              if((x10033!=(NULL))) {
                                ite43922 = x10033;
                              } else {
                                
                                int x43924 = x60465;
                                double* x43925 = x60466[x43924];
                                int x43926 = x60465;
                                x60465 = (x43926+(1));
                                int x43929 = x60477;
                                struct AGGRecord_OptimalString* x43930 = &(x60478[x43929]);
                                x43930->key = x1330;
                                x43930->aggs = x43925;
                                x43930->next = NULL;
                                int x43934 = x60477;
                                x60477 = (x43934+(1));
                                /* VAR */ int ite48180 = 0;
                                if((x10000==(NULL))) {
                                  ite48180 = 1;
                                } else {
                                  
                                  char* x61951 = x10000->key;
                                  /* VAR */ int x61953 = 0;
                                  if((x61951==(NULL))) {
                                    x61953 = 1;
                                  } else {
                                    
                                    int x61956 = strcmp(x61951, "");
                                    int x61957 = !(x61956);
                                    x61953 = x61957;
                                  };
                                  int x61960 = x61953;
                                  ite48180 = x61960;
                                };
                                int x43939 = ite48180;
                                if(x43939) {
                                  x43930->next = NULL;
                                  /* VAR */ int ite48194 = 0;
                                  if((x43930==(NULL))) {
                                    ite48194 = 1;
                                  } else {
                                    
                                    char* x61970 = x43930->key;
                                    /* VAR */ int x61972 = 0;
                                    if((x61970==(NULL))) {
                                      x61972 = 1;
                                    } else {
                                      
                                      int x61975 = strcmp(x61970, "");
                                      int x61976 = !(x61975);
                                      x61972 = x61976;
                                    };
                                    int x61979 = x61972;
                                    ite48194 = x61979;
                                  };
                                  int x43944 = ite48194;
                                  if(x43944) {
                                    *(x60318 + x8485) = (const struct AGGRecord_OptimalString){0};
                                  } else {
                                    
                                    struct AGGRecord_OptimalString x22498 = *x43930;
                                    *(x60318 + x8485) = x22498;
                                    struct AGGRecord_OptimalString* x22500 = &(x60318[x8485]);
                                    x43930 = x22500;
                                  };
                                } else {
                                  
                                  struct AGGRecord_OptimalString* x11680 = x10000->next;
                                  x43930->next = x11680;
                                  x10000->next = x43930;
                                };
                                ite43922 = x43930;
                              };
                              struct AGGRecord_OptimalString* x8500 = ite43922;
                              double* x733 = x8500->aggs;
                              double x747 = x733[0];
                              *x733 = (x747+(((x36377->L_EXTENDEDPRICE)*((1.0-((x36377->L_DISCOUNT)))))));
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
      int x3268 = x60522;
      x60522 = (x3268+(1));
    };
    int x62004 = x60317;
    int x37254 = 0;
    for(; x37254 < (x62004+(1)) ; x37254 += 1) {
      
      struct AGGRecord_OptimalString* x37255 = &(x60318[x37254]);
      /* VAR */ struct AGGRecord_OptimalString* x37256 = x37255;
      while(1) {
        
        struct AGGRecord_OptimalString* x10619 = x37256;
        /* VAR */ int ite48257 = 0;
        if((x10619!=(NULL))) {
          char* x62041 = x10619->key;
          /* VAR */ int x62043 = 0;
          if((x62041!=(NULL))) {
            int x62045 = strcmp(x62041, "");
            x62043 = x62045;
          } else {
            
            x62043 = 0;
          };
          int x62049 = x62043;
          ite48257 = x62049;
        } else {
          
          ite48257 = 0;
        };
        int x43989 = ite48257;
        if (!(x43989)) break; 
        
        struct AGGRecord_OptimalString* x10621 = x37256;
        struct AGGRecord_OptimalString* x11712 = x10621->next;
        struct AGGRecord_OptimalString* x10623 = x37256;
        g_tree_insert(x60570, x10623, x10623);
        x37256 = x11712;
      };
    };
    while(1) {
      
      int x3610 = x60571;
      int x778 = !(x3610);
      /* VAR */ int ite48276 = 0;
      if(x778) {
        int x62064 = g_tree_nnodes(x60570);
        ite48276 = (x62064!=(0));
      } else {
        
        ite48276 = 0;
      };
      int x43999 = ite48276;
      if (!(x43999)) break; 
      
      void* x25884 = NULL;
      void** x25892 = &(x25884);
      g_tree_foreach(x60570, x25891, x25892);
      struct AGGRecord_OptimalString* x25894 = (struct AGGRecord_OptimalString*){x25884};
      int x25895 = g_tree_remove(x60570, x25894);
      if(0) {
        x60571 = 1;
      } else {
        
        double x794 = ((double*) { x25894->aggs })[0];
        printf("%s|%.4f\n", (x25894->key), x794);
        int x3628 = x60572;
        x60572 = (x3628+(1));
      };
    };
    int x62091 = x60572;
    printf("(%d rows)\n", x62091);
    struct timeval* x62093 = &x60519;
    gettimeofday(x62093, NULL);
    struct timeval* x62095 = &x60515;
    struct timeval* x62096 = &x60519;
    struct timeval* x62097 = &x60517;
    long x62098 = timeval_subtract(x62095, x62096, x62097);
    printf("Generated code run in %ld milliseconds.\n", x62098);
  };
}
/* ----------- FUNCTIONS ----------- */
int x60546(struct AGGRecord_OptimalString* x375, struct AGGRecord_OptimalString* x376) {
  double* x377 = x375->aggs;
  double x378 = x377[0];
  double* x379 = x376->aggs;
  double x380 = x379[0];
  /* VAR */ int ite42962 = 0;
  if((x378<(x380))) {
    ite42962 = 1;
  } else {
    
    double x42964 = x377[0];
    double x42965 = x379[0];
    /* VAR */ int ite42968 = 0;
    if((x42964>(x42965))) {
      ite42968 = -1;
    } else {
      
      ite42968 = 0;
    };
    int x42967 = ite42968;
    ite42962 = x42967;
  };
  int x386 = ite42962;
  return x386; 
}

int x25891(void* x25885, void* x25886, void* x25887) {
  pointer_assign(((struct AGGRecord_OptimalString**){x25887}), ((struct AGGRecord_OptimalString*){x25886}));
  return 1; 
}
