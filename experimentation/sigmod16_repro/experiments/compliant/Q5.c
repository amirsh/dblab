#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct REGIONRecord_NATIONRecord;
  struct AGGRecord_OptimalString;
  struct REGIONRecord_NATIONRecord_CUSTOMERRecord;
  struct REGIONRecord;
  struct SUPPLIERRecord;
  struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord;
  
  struct REGIONRecord_NATIONRecord {
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  struct REGIONRecord_NATIONRecord* next;
  };
  
  struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
  struct AGGRecord_OptimalString* next;
  };
  
  struct REGIONRecord_NATIONRecord_CUSTOMERRecord {
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
  struct REGIONRecord_NATIONRecord_CUSTOMERRecord* next;
  };
  
  struct REGIONRecord {
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
  struct REGIONRecord* next;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  struct SUPPLIERRecord* next;
  };
  
  struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord {
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
  struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* next;
  };
  
  


int x74873(struct AGGRecord_OptimalString* x375, struct AGGRecord_OptimalString* x376);

int x41963(void* x41957, void* x41958, void* x41959);
/* GLOBAL VARS */

struct timeval x32124;
int main(int argc, char** argv) {
  FILE* x33460 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x33461 = 0;
  int x33462 = x33461;
  int* x33463 = &x33462;
  int x33464 = fscanf(x33460, "%d", x33463);
  pclose(x33460);
  int* x36180 = (int*)malloc(x33462 * sizeof(int));
  memset(x36180, 0, x33462 * sizeof(int));
  char** x36181 = (char**)malloc(x33462 * sizeof(char*));
  memset(x36181, 0, x33462 * sizeof(char*));
  int* x36182 = (int*)malloc(x33462 * sizeof(int));
  memset(x36182, 0, x33462 * sizeof(int));
  char** x36183 = (char**)malloc(x33462 * sizeof(char*));
  memset(x36183, 0, x33462 * sizeof(char*));
  int x33471 = O_RDONLY;
  int x33472 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x33471);
  struct stat x33473 = (struct stat){0};
  /* VAR */ struct stat x33474 = x33473;
  struct stat x33475 = x33474;
  struct stat* x33476 = &x33475;
  int x33477 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x33476);
  size_t x33478 = x33476->st_size;
  int x33479 = PROT_READ;
  int x33480 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x33478, x33479, x33480, x33472, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x33462);
    /* VAR */ int ite61477 = 0;
    if(x6) {
      char x72416 = *x3;
      int x72417 = x72416!=('\0');
      ite61477 = x72417;
    } else {
      
      ite61477 = 0;
    };
    int x59158 = ite61477;
    if (!(x59158)) break; 
    
    /* VAR */ int x33488 = 0;
    int x33489 = x33488;
    int* x33490 = &x33489;
    char* x33491 = strntoi_unchecked(x3, x33490);
    x3 = x33491;
    char* x36207 = (char*)malloc(26 * sizeof(char));
    memset(x36207, 0, 26 * sizeof(char));
    /* VAR */ char* x33494 = x3;
    while(1) {
      
      char x33495 = *x3;
      int x33496 = x33495!=('|');
      /* VAR */ int ite61496 = 0;
      if(x33496) {
        char x72434 = *x3;
        int x72435 = x72434!=('\n');
        ite61496 = x72435;
      } else {
        
        ite61496 = 0;
      };
      int x59170 = ite61496;
      if (!(x59170)) break; 
      
      x3 += 1;
    };
    char* x33502 = x33494;
    int x33503 = x3 - x33502;
    char* x33504 = x33494;
    char* x33505 = strncpy(x36207, x33504, x33503);
    x3 += 1;
    /* VAR */ int x33512 = 0;
    int x33513 = x33512;
    int* x33514 = &x33513;
    char* x33515 = strntoi_unchecked(x3, x33514);
    x3 = x33515;
    char* x36230 = (char*)malloc(153 * sizeof(char));
    memset(x36230, 0, 153 * sizeof(char));
    /* VAR */ char* x33518 = x3;
    while(1) {
      
      char x33519 = *x3;
      int x33520 = x33519!=('|');
      /* VAR */ int ite61524 = 0;
      if(x33520) {
        char x72461 = *x3;
        int x72462 = x72461!=('\n');
        ite61524 = x72462;
      } else {
        
        ite61524 = 0;
      };
      int x59191 = ite61524;
      if (!(x59191)) break; 
      
      x3 += 1;
    };
    char* x33526 = x33518;
    int x33527 = x3 - x33526;
    char* x33528 = x33518;
    char* x33529 = strncpy(x36230, x33528, x33527);
    x3 += 1;
    int x28 = x4;
    *(x36180 + x28) = x33489;
    *(x36181 + x28) = x36207;
    *(x36182 + x28) = x33513;
    *(x36183 + x28) = x36230;
    int x30 = x4;
    int x31 = x30+(1);
    x4 = x31;
  };
  FILE* x33544 = popen("wc -l /mnt/ramdisk/tpch/sf8/region.tbl", "r");
  /* VAR */ int x33545 = 0;
  int x33546 = x33545;
  int* x33547 = &x33546;
  int x33548 = fscanf(x33544, "%d", x33547);
  pclose(x33544);
  struct REGIONRecord* x36262 = (struct REGIONRecord*)malloc(x33546 * sizeof(struct REGIONRecord));
  memset(x36262, 0, x33546 * sizeof(struct REGIONRecord));
  int x33552 = O_RDONLY;
  int x33553 = open("/mnt/ramdisk/tpch/sf8/region.tbl", x33552);
  /* VAR */ struct stat x33554 = x33473;
  struct stat x33555 = x33554;
  struct stat* x33556 = &x33555;
  int x33557 = stat("/mnt/ramdisk/tpch/sf8/region.tbl", x33556);
  size_t x33558 = x33556->st_size;
  int x33559 = PROT_READ;
  int x33560 = MAP_PRIVATE;
  char* x36 = mmap(NULL, x33558, x33559, x33560, x33553, 0);
  /* VAR */ int x37 = 0;
  while(1) {
    
    int x38 = x37;
    int x39 = x38<(x33546);
    /* VAR */ int ite61571 = 0;
    if(x39) {
      char x72507 = *x36;
      int x72508 = x72507!=('\0');
      ite61571 = x72508;
    } else {
      
      ite61571 = 0;
    };
    int x59231 = ite61571;
    if (!(x59231)) break; 
    
    /* VAR */ int x33568 = 0;
    int x33569 = x33568;
    int* x33570 = &x33569;
    char* x33571 = strntoi_unchecked(x36, x33570);
    x36 = x33571;
    char* x36285 = (char*)malloc(26 * sizeof(char));
    memset(x36285, 0, 26 * sizeof(char));
    /* VAR */ char* x33574 = x36;
    while(1) {
      
      char x33575 = *x36;
      int x33576 = x33575!=('|');
      /* VAR */ int ite61590 = 0;
      if(x33576) {
        char x72525 = *x36;
        int x72526 = x72525!=('\n');
        ite61590 = x72526;
      } else {
        
        ite61590 = 0;
      };
      int x59243 = ite61590;
      if (!(x59243)) break; 
      
      x36 += 1;
    };
    char* x33582 = x33574;
    int x33583 = x36 - x33582;
    char* x33584 = x33574;
    char* x33585 = strncpy(x36285, x33584, x33583);
    x36 += 1;
    char* x36303 = (char*)malloc(153 * sizeof(char));
    memset(x36303, 0, 153 * sizeof(char));
    /* VAR */ char* x33593 = x36;
    while(1) {
      
      char x33594 = *x36;
      int x33595 = x33594!=('|');
      /* VAR */ int ite61613 = 0;
      if(x33595) {
        char x72547 = *x36;
        int x72548 = x72547!=('\n');
        ite61613 = x72548;
      } else {
        
        ite61613 = 0;
      };
      int x59259 = ite61613;
      if (!(x59259)) break; 
      
      x36 += 1;
    };
    char* x33601 = x33593;
    int x33602 = x36 - x33601;
    char* x33603 = x33593;
    char* x33604 = strncpy(x36303, x33603, x33602);
    x36 += 1;
    struct REGIONRecord* x37761 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x37761, 0, 1 * sizeof(struct REGIONRecord));
    x37761->R_REGIONKEY = x33569; x37761->R_NAME = x36285; x37761->R_COMMENT = x36303; x37761->next = NULL;
    int x60 = x37;
    int x46567 = x37761==(NULL);
    /* VAR */ int ite61636 = 0;
    if(x46567) {
      ite61636 = 1;
    } else {
      
      char* x72570 = x37761->R_NAME;
      int x72571 = x72570==(NULL);
      /* VAR */ int x72572 = 0;
      if(x72571) {
        x72572 = 1;
      } else {
        
        int x72575 = strcmp(x72570, "");
        int x72576 = !(x72575);
        x72572 = x72576;
      };
      int x72579 = x72572;
      ite61636 = x72579;
    };
    int x59275 = ite61636;
    if(x59275) {
      *(x36262 + x60) = (const struct REGIONRecord){0};
    } else {
      
      struct REGIONRecord x36325 = *x37761;
      *(x36262 + x60) = x36325;
      struct REGIONRecord* x36327 = &(x36262[x60]);
      x37761 = x36327;
    };
    int x62 = x37;
    int x63 = x62+(1);
    x37 = x63;
  };
  FILE* x33617 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x33618 = 0;
  int x33619 = x33618;
  int* x33620 = &x33619;
  int x33621 = fscanf(x33617, "%d", x33620);
  pclose(x33617);
  struct SUPPLIERRecord* x36339 = (struct SUPPLIERRecord*)malloc(x33619 * sizeof(struct SUPPLIERRecord));
  memset(x36339, 0, x33619 * sizeof(struct SUPPLIERRecord));
  int x33625 = O_RDONLY;
  int x33626 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x33625);
  /* VAR */ struct stat x33627 = x33473;
  struct stat x33628 = x33627;
  struct stat* x33629 = &x33628;
  int x33630 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x33629);
  size_t x33631 = x33629->st_size;
  int x33632 = PROT_READ;
  int x33633 = MAP_PRIVATE;
  char* x68 = mmap(NULL, x33631, x33632, x33633, x33626, 0);
  /* VAR */ int x69 = 0;
  while(1) {
    
    int x70 = x69;
    int x71 = x70<(x33619);
    /* VAR */ int ite61677 = 0;
    if(x71) {
      char x72615 = *x68;
      int x72616 = x72615!=('\0');
      ite61677 = x72616;
    } else {
      
      ite61677 = 0;
    };
    int x59307 = ite61677;
    if (!(x59307)) break; 
    
    /* VAR */ int x33641 = 0;
    int x33642 = x33641;
    int* x33643 = &x33642;
    char* x33644 = strntoi_unchecked(x68, x33643);
    x68 = x33644;
    char* x36362 = (char*)malloc(26 * sizeof(char));
    memset(x36362, 0, 26 * sizeof(char));
    /* VAR */ char* x33647 = x68;
    while(1) {
      
      char x33648 = *x68;
      int x33649 = x33648!=('|');
      /* VAR */ int ite61696 = 0;
      if(x33649) {
        char x72633 = *x68;
        int x72634 = x72633!=('\n');
        ite61696 = x72634;
      } else {
        
        ite61696 = 0;
      };
      int x59319 = ite61696;
      if (!(x59319)) break; 
      
      x68 += 1;
    };
    char* x33655 = x33647;
    int x33656 = x68 - x33655;
    char* x33657 = x33647;
    char* x33658 = strncpy(x36362, x33657, x33656);
    x68 += 1;
    char* x36380 = (char*)malloc(41 * sizeof(char));
    memset(x36380, 0, 41 * sizeof(char));
    /* VAR */ char* x33666 = x68;
    while(1) {
      
      char x33667 = *x68;
      int x33668 = x33667!=('|');
      /* VAR */ int ite61719 = 0;
      if(x33668) {
        char x72655 = *x68;
        int x72656 = x72655!=('\n');
        ite61719 = x72656;
      } else {
        
        ite61719 = 0;
      };
      int x59335 = ite61719;
      if (!(x59335)) break; 
      
      x68 += 1;
    };
    char* x33674 = x33666;
    int x33675 = x68 - x33674;
    char* x33676 = x33666;
    char* x33677 = strncpy(x36380, x33676, x33675);
    x68 += 1;
    /* VAR */ int x33684 = 0;
    int x33685 = x33684;
    int* x33686 = &x33685;
    char* x33687 = strntoi_unchecked(x68, x33686);
    x68 = x33687;
    char* x36403 = (char*)malloc(16 * sizeof(char));
    memset(x36403, 0, 16 * sizeof(char));
    /* VAR */ char* x33690 = x68;
    while(1) {
      
      char x33691 = *x68;
      int x33692 = x33691!=('|');
      /* VAR */ int ite61747 = 0;
      if(x33692) {
        char x72682 = *x68;
        int x72683 = x72682!=('\n');
        ite61747 = x72683;
      } else {
        
        ite61747 = 0;
      };
      int x59356 = ite61747;
      if (!(x59356)) break; 
      
      x68 += 1;
    };
    char* x33698 = x33690;
    int x33699 = x68 - x33698;
    char* x33700 = x33690;
    char* x33701 = strncpy(x36403, x33700, x33699);
    x68 += 1;
    /* VAR */ double x33708 = 0.0;
    double x33709 = x33708;
    double* x33710 = &x33709;
    char* x33711 = strntod_unchecked(x68, x33710);
    x68 = x33711;
    char* x36426 = (char*)malloc(102 * sizeof(char));
    memset(x36426, 0, 102 * sizeof(char));
    /* VAR */ char* x33714 = x68;
    while(1) {
      
      char x33715 = *x68;
      int x33716 = x33715!=('|');
      /* VAR */ int ite61775 = 0;
      if(x33716) {
        char x72709 = *x68;
        int x72710 = x72709!=('\n');
        ite61775 = x72710;
      } else {
        
        ite61775 = 0;
      };
      int x59377 = ite61775;
      if (!(x59377)) break; 
      
      x68 += 1;
    };
    char* x33722 = x33714;
    int x33723 = x68 - x33722;
    char* x33724 = x33714;
    char* x33725 = strncpy(x36426, x33724, x33723);
    x68 += 1;
    struct SUPPLIERRecord* x37886 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x37886, 0, 1 * sizeof(struct SUPPLIERRecord));
    x37886->S_SUPPKEY = x33642; x37886->S_NAME = x36362; x37886->S_ADDRESS = x36380; x37886->S_NATIONKEY = x33685; x37886->S_PHONE = x36403; x37886->S_ACCTBAL = x33709; x37886->S_COMMENT = x36426; x37886->next = NULL;
    int x110 = x69;
    int x46695 = x37886==(NULL);
    /* VAR */ int ite61798 = 0;
    if(x46695) {
      ite61798 = 1;
    } else {
      
      char* x72732 = x37886->S_NAME;
      int x72733 = x72732==(NULL);
      /* VAR */ int x72734 = 0;
      if(x72733) {
        x72734 = 1;
      } else {
        
        int x72737 = strcmp(x72732, "");
        int x72738 = !(x72737);
        x72734 = x72738;
      };
      int x72741 = x72734;
      ite61798 = x72741;
    };
    int x59393 = ite61798;
    if(x59393) {
      *(x36339 + x110) = (const struct SUPPLIERRecord){0};
    } else {
      
      struct SUPPLIERRecord x36448 = *x37886;
      *(x36339 + x110) = x36448;
      struct SUPPLIERRecord* x36450 = &(x36339[x110]);
      x37886 = x36450;
    };
    int x112 = x69;
    int x113 = x112+(1);
    x69 = x113;
  };
  FILE* x33738 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x33739 = 0;
  int x33740 = x33739;
  int* x33741 = &x33740;
  int x33742 = fscanf(x33738, "%d", x33741);
  pclose(x33738);
  int* x36462 = (int*)malloc(x33740 * sizeof(int));
  memset(x36462, 0, x33740 * sizeof(int));
  int* x36463 = (int*)malloc(x33740 * sizeof(int));
  memset(x36463, 0, x33740 * sizeof(int));
  int* x36464 = (int*)malloc(x33740 * sizeof(int));
  memset(x36464, 0, x33740 * sizeof(int));
  int* x36465 = (int*)malloc(x33740 * sizeof(int));
  memset(x36465, 0, x33740 * sizeof(int));
  double* x36466 = (double*)malloc(x33740 * sizeof(double));
  memset(x36466, 0, x33740 * sizeof(double));
  double* x36467 = (double*)malloc(x33740 * sizeof(double));
  memset(x36467, 0, x33740 * sizeof(double));
  double* x36468 = (double*)malloc(x33740 * sizeof(double));
  memset(x36468, 0, x33740 * sizeof(double));
  double* x36469 = (double*)malloc(x33740 * sizeof(double));
  memset(x36469, 0, x33740 * sizeof(double));
  char* x36470 = (char*)malloc(x33740 * sizeof(char));
  memset(x36470, 0, x33740 * sizeof(char));
  char* x36471 = (char*)malloc(x33740 * sizeof(char));
  memset(x36471, 0, x33740 * sizeof(char));
  int* x36472 = (int*)malloc(x33740 * sizeof(int));
  memset(x36472, 0, x33740 * sizeof(int));
  int* x36473 = (int*)malloc(x33740 * sizeof(int));
  memset(x36473, 0, x33740 * sizeof(int));
  int* x36474 = (int*)malloc(x33740 * sizeof(int));
  memset(x36474, 0, x33740 * sizeof(int));
  char** x36475 = (char**)malloc(x33740 * sizeof(char*));
  memset(x36475, 0, x33740 * sizeof(char*));
  char** x36476 = (char**)malloc(x33740 * sizeof(char*));
  memset(x36476, 0, x33740 * sizeof(char*));
  char** x36477 = (char**)malloc(x33740 * sizeof(char*));
  memset(x36477, 0, x33740 * sizeof(char*));
  int x33761 = O_RDONLY;
  int x33762 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x33761);
  /* VAR */ struct stat x33763 = x33473;
  struct stat x33764 = x33763;
  struct stat* x33765 = &x33764;
  int x33766 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x33765);
  size_t x33767 = x33765->st_size;
  int x33768 = PROT_READ;
  int x33769 = MAP_PRIVATE;
  char* x118 = mmap(NULL, x33767, x33768, x33769, x33762, 0);
  /* VAR */ int x119 = 0;
  while(1) {
    
    int x120 = x119;
    int x121 = x120<(x33740);
    /* VAR */ int ite61854 = 0;
    if(x121) {
      char x72792 = *x118;
      int x72793 = x72792!=('\0');
      ite61854 = x72793;
    } else {
      
      ite61854 = 0;
    };
    int x59440 = ite61854;
    if (!(x59440)) break; 
    
    /* VAR */ int x33777 = 0;
    int x33778 = x33777;
    int* x33779 = &x33778;
    char* x33780 = strntoi_unchecked(x118, x33779);
    x118 = x33780;
    /* VAR */ int x33782 = 0;
    int x33783 = x33782;
    int* x33784 = &x33783;
    char* x33785 = strntoi_unchecked(x118, x33784);
    x118 = x33785;
    /* VAR */ int x33787 = 0;
    int x33788 = x33787;
    int* x33789 = &x33788;
    char* x33790 = strntoi_unchecked(x118, x33789);
    x118 = x33790;
    /* VAR */ int x33792 = 0;
    int x33793 = x33792;
    int* x33794 = &x33793;
    char* x33795 = strntoi_unchecked(x118, x33794);
    x118 = x33795;
    /* VAR */ double x33797 = 0.0;
    double x33798 = x33797;
    double* x33799 = &x33798;
    char* x33800 = strntod_unchecked(x118, x33799);
    x118 = x33800;
    /* VAR */ double x33802 = 0.0;
    double x33803 = x33802;
    double* x33804 = &x33803;
    char* x33805 = strntod_unchecked(x118, x33804);
    x118 = x33805;
    /* VAR */ double x33807 = 0.0;
    double x33808 = x33807;
    double* x33809 = &x33808;
    char* x33810 = strntod_unchecked(x118, x33809);
    x118 = x33810;
    /* VAR */ double x33812 = 0.0;
    double x33813 = x33812;
    double* x33814 = &x33813;
    char* x33815 = strntod_unchecked(x118, x33814);
    x118 = x33815;
    char x33817 = *x118;
    /* VAR */ char x33818 = x33817;
    x118 += 1;
    x118 += 1;
    char x33821 = x33818;
    char x33822 = *x118;
    /* VAR */ char x33823 = x33822;
    x118 += 1;
    x118 += 1;
    char x33826 = x33823;
    /* VAR */ int x33827 = 0;
    int x33828 = x33827;
    int* x33829 = &x33828;
    char* x33830 = strntoi_unchecked(x118, x33829);
    x118 = x33830;
    /* VAR */ int x33832 = 0;
    int x33833 = x33832;
    int* x33834 = &x33833;
    char* x33835 = strntoi_unchecked(x118, x33834);
    x118 = x33835;
    /* VAR */ int x33837 = 0;
    int x33838 = x33837;
    int* x33839 = &x33838;
    char* x33840 = strntoi_unchecked(x118, x33839);
    x118 = x33840;
    int x33842 = x33828*(10000);
    int x33843 = x33833*(100);
    int x33844 = x33842+(x33843);
    int x33845 = x33844+(x33838);
    /* VAR */ int x33846 = 0;
    int x33847 = x33846;
    int* x33848 = &x33847;
    char* x33849 = strntoi_unchecked(x118, x33848);
    x118 = x33849;
    /* VAR */ int x33851 = 0;
    int x33852 = x33851;
    int* x33853 = &x33852;
    char* x33854 = strntoi_unchecked(x118, x33853);
    x118 = x33854;
    /* VAR */ int x33856 = 0;
    int x33857 = x33856;
    int* x33858 = &x33857;
    char* x33859 = strntoi_unchecked(x118, x33858);
    x118 = x33859;
    int x33861 = x33847*(10000);
    int x33862 = x33852*(100);
    int x33863 = x33861+(x33862);
    int x33864 = x33863+(x33857);
    /* VAR */ int x33865 = 0;
    int x33866 = x33865;
    int* x33867 = &x33866;
    char* x33868 = strntoi_unchecked(x118, x33867);
    x118 = x33868;
    /* VAR */ int x33870 = 0;
    int x33871 = x33870;
    int* x33872 = &x33871;
    char* x33873 = strntoi_unchecked(x118, x33872);
    x118 = x33873;
    /* VAR */ int x33875 = 0;
    int x33876 = x33875;
    int* x33877 = &x33876;
    char* x33878 = strntoi_unchecked(x118, x33877);
    x118 = x33878;
    int x33880 = x33866*(10000);
    int x33881 = x33871*(100);
    int x33882 = x33880+(x33881);
    int x33883 = x33882+(x33876);
    char* x36602 = (char*)malloc(26 * sizeof(char));
    memset(x36602, 0, 26 * sizeof(char));
    /* VAR */ char* x33885 = x118;
    while(1) {
      
      char x33886 = *x118;
      int x33887 = x33886!=('|');
      /* VAR */ int ite61975 = 0;
      if(x33887) {
        char x72912 = *x118;
        int x72913 = x72912!=('\n');
        ite61975 = x72913;
      } else {
        
        ite61975 = 0;
      };
      int x59554 = ite61975;
      if (!(x59554)) break; 
      
      x118 += 1;
    };
    char* x33893 = x33885;
    int x33894 = x118 - x33893;
    char* x33895 = x33885;
    char* x33896 = strncpy(x36602, x33895, x33894);
    x118 += 1;
    char* x36620 = (char*)malloc(11 * sizeof(char));
    memset(x36620, 0, 11 * sizeof(char));
    /* VAR */ char* x33904 = x118;
    while(1) {
      
      char x33905 = *x118;
      int x33906 = x33905!=('|');
      /* VAR */ int ite61998 = 0;
      if(x33906) {
        char x72934 = *x118;
        int x72935 = x72934!=('\n');
        ite61998 = x72935;
      } else {
        
        ite61998 = 0;
      };
      int x59570 = ite61998;
      if (!(x59570)) break; 
      
      x118 += 1;
    };
    char* x33912 = x33904;
    int x33913 = x118 - x33912;
    char* x33914 = x33904;
    char* x33915 = strncpy(x36620, x33914, x33913);
    x118 += 1;
    char* x36638 = (char*)malloc(45 * sizeof(char));
    memset(x36638, 0, 45 * sizeof(char));
    /* VAR */ char* x33923 = x118;
    while(1) {
      
      char x33924 = *x118;
      int x33925 = x33924!=('|');
      /* VAR */ int ite62021 = 0;
      if(x33925) {
        char x72956 = *x118;
        int x72957 = x72956!=('\n');
        ite62021 = x72957;
      } else {
        
        ite62021 = 0;
      };
      int x59586 = ite62021;
      if (!(x59586)) break; 
      
      x118 += 1;
    };
    char* x33931 = x33923;
    int x33932 = x118 - x33931;
    char* x33933 = x33923;
    char* x33934 = strncpy(x36638, x33933, x33932);
    x118 += 1;
    int x162 = x119;
    *(x36462 + x162) = x33778;
    *(x36463 + x162) = x33783;
    *(x36464 + x162) = x33788;
    *(x36465 + x162) = x33793;
    *(x36466 + x162) = x33798;
    *(x36467 + x162) = x33803;
    *(x36468 + x162) = x33808;
    *(x36469 + x162) = x33813;
    *(x36470 + x162) = x33821;
    *(x36471 + x162) = x33826;
    *(x36472 + x162) = x33845;
    *(x36473 + x162) = x33864;
    *(x36474 + x162) = x33883;
    *(x36475 + x162) = x36602;
    *(x36476 + x162) = x36620;
    *(x36477 + x162) = x36638;
    int x164 = x119;
    int x165 = x164+(1);
    x119 = x165;
  };
  FILE* x33961 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x33962 = 0;
  int x33963 = x33962;
  int* x33964 = &x33963;
  int x33965 = fscanf(x33961, "%d", x33964);
  pclose(x33961);
  int* x36682 = (int*)malloc(x33963 * sizeof(int));
  memset(x36682, 0, x33963 * sizeof(int));
  int* x36683 = (int*)malloc(x33963 * sizeof(int));
  memset(x36683, 0, x33963 * sizeof(int));
  char* x36684 = (char*)malloc(x33963 * sizeof(char));
  memset(x36684, 0, x33963 * sizeof(char));
  double* x36685 = (double*)malloc(x33963 * sizeof(double));
  memset(x36685, 0, x33963 * sizeof(double));
  int* x36686 = (int*)malloc(x33963 * sizeof(int));
  memset(x36686, 0, x33963 * sizeof(int));
  char** x36687 = (char**)malloc(x33963 * sizeof(char*));
  memset(x36687, 0, x33963 * sizeof(char*));
  char** x36688 = (char**)malloc(x33963 * sizeof(char*));
  memset(x36688, 0, x33963 * sizeof(char*));
  int* x36689 = (int*)malloc(x33963 * sizeof(int));
  memset(x36689, 0, x33963 * sizeof(int));
  char** x36690 = (char**)malloc(x33963 * sizeof(char*));
  memset(x36690, 0, x33963 * sizeof(char*));
  int x33977 = O_RDONLY;
  int x33978 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x33977);
  /* VAR */ struct stat x33979 = x33473;
  struct stat x33980 = x33979;
  struct stat* x33981 = &x33980;
  int x33982 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x33981);
  size_t x33983 = x33981->st_size;
  int x33984 = PROT_READ;
  int x33985 = MAP_PRIVATE;
  char* x170 = mmap(NULL, x33983, x33984, x33985, x33978, 0);
  /* VAR */ int x171 = 0;
  while(1) {
    
    int x172 = x171;
    int x173 = x172<(x33963);
    /* VAR */ int ite62088 = 0;
    if(x173) {
      char x73022 = *x170;
      int x73023 = x73022!=('\0');
      ite62088 = x73023;
    } else {
      
      ite62088 = 0;
    };
    int x59646 = ite62088;
    if (!(x59646)) break; 
    
    /* VAR */ int x33993 = 0;
    int x33994 = x33993;
    int* x33995 = &x33994;
    char* x33996 = strntoi_unchecked(x170, x33995);
    x170 = x33996;
    /* VAR */ int x33998 = 0;
    int x33999 = x33998;
    int* x34000 = &x33999;
    char* x34001 = strntoi_unchecked(x170, x34000);
    x170 = x34001;
    char x34003 = *x170;
    /* VAR */ char x34004 = x34003;
    x170 += 1;
    x170 += 1;
    char x34007 = x34004;
    /* VAR */ double x34008 = 0.0;
    double x34009 = x34008;
    double* x34010 = &x34009;
    char* x34011 = strntod_unchecked(x170, x34010);
    x170 = x34011;
    /* VAR */ int x34013 = 0;
    int x34014 = x34013;
    int* x34015 = &x34014;
    char* x34016 = strntoi_unchecked(x170, x34015);
    x170 = x34016;
    /* VAR */ int x34018 = 0;
    int x34019 = x34018;
    int* x34020 = &x34019;
    char* x34021 = strntoi_unchecked(x170, x34020);
    x170 = x34021;
    /* VAR */ int x34023 = 0;
    int x34024 = x34023;
    int* x34025 = &x34024;
    char* x34026 = strntoi_unchecked(x170, x34025);
    x170 = x34026;
    int x34028 = x34014*(10000);
    int x34029 = x34019*(100);
    int x34030 = x34028+(x34029);
    int x34031 = x34030+(x34024);
    char* x36747 = (char*)malloc(16 * sizeof(char));
    memset(x36747, 0, 16 * sizeof(char));
    /* VAR */ char* x34033 = x170;
    while(1) {
      
      char x34034 = *x170;
      int x34035 = x34034!=('|');
      /* VAR */ int ite62141 = 0;
      if(x34035) {
        char x73074 = *x170;
        int x73075 = x73074!=('\n');
        ite62141 = x73075;
      } else {
        
        ite62141 = 0;
      };
      int x59692 = ite62141;
      if (!(x59692)) break; 
      
      x170 += 1;
    };
    char* x34041 = x34033;
    int x34042 = x170 - x34041;
    char* x34043 = x34033;
    char* x34044 = strncpy(x36747, x34043, x34042);
    x170 += 1;
    char* x36765 = (char*)malloc(16 * sizeof(char));
    memset(x36765, 0, 16 * sizeof(char));
    /* VAR */ char* x34052 = x170;
    while(1) {
      
      char x34053 = *x170;
      int x34054 = x34053!=('|');
      /* VAR */ int ite62164 = 0;
      if(x34054) {
        char x73096 = *x170;
        int x73097 = x73096!=('\n');
        ite62164 = x73097;
      } else {
        
        ite62164 = 0;
      };
      int x59708 = ite62164;
      if (!(x59708)) break; 
      
      x170 += 1;
    };
    char* x34060 = x34052;
    int x34061 = x170 - x34060;
    char* x34062 = x34052;
    char* x34063 = strncpy(x36765, x34062, x34061);
    x170 += 1;
    /* VAR */ int x34070 = 0;
    int x34071 = x34070;
    int* x34072 = &x34071;
    char* x34073 = strntoi_unchecked(x170, x34072);
    x170 = x34073;
    char* x36788 = (char*)malloc(80 * sizeof(char));
    memset(x36788, 0, 80 * sizeof(char));
    /* VAR */ char* x34076 = x170;
    while(1) {
      
      char x34077 = *x170;
      int x34078 = x34077!=('|');
      /* VAR */ int ite62192 = 0;
      if(x34078) {
        char x73123 = *x170;
        int x73124 = x73123!=('\n');
        ite62192 = x73124;
      } else {
        
        ite62192 = 0;
      };
      int x59729 = ite62192;
      if (!(x59729)) break; 
      
      x170 += 1;
    };
    char* x34084 = x34076;
    int x34085 = x170 - x34084;
    char* x34086 = x34076;
    char* x34087 = strncpy(x36788, x34086, x34085);
    x170 += 1;
    int x206 = x171;
    *(x36682 + x206) = x33994;
    *(x36683 + x206) = x33999;
    *(x36684 + x206) = x34007;
    *(x36685 + x206) = x34009;
    *(x36686 + x206) = x34031;
    *(x36687 + x206) = x36747;
    *(x36688 + x206) = x36765;
    *(x36689 + x206) = x34071;
    *(x36690 + x206) = x36788;
    int x208 = x171;
    int x209 = x208+(1);
    x171 = x209;
  };
  FILE* x34107 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x34108 = 0;
  int x34109 = x34108;
  int* x34110 = &x34109;
  int x34111 = fscanf(x34107, "%d", x34110);
  pclose(x34107);
  int* x36825 = (int*)malloc(x34109 * sizeof(int));
  memset(x36825, 0, x34109 * sizeof(int));
  char** x36826 = (char**)malloc(x34109 * sizeof(char*));
  memset(x36826, 0, x34109 * sizeof(char*));
  char** x36827 = (char**)malloc(x34109 * sizeof(char*));
  memset(x36827, 0, x34109 * sizeof(char*));
  int* x36828 = (int*)malloc(x34109 * sizeof(int));
  memset(x36828, 0, x34109 * sizeof(int));
  char** x36829 = (char**)malloc(x34109 * sizeof(char*));
  memset(x36829, 0, x34109 * sizeof(char*));
  double* x36830 = (double*)malloc(x34109 * sizeof(double));
  memset(x36830, 0, x34109 * sizeof(double));
  char** x36831 = (char**)malloc(x34109 * sizeof(char*));
  memset(x36831, 0, x34109 * sizeof(char*));
  char** x36832 = (char**)malloc(x34109 * sizeof(char*));
  memset(x36832, 0, x34109 * sizeof(char*));
  int x34122 = O_RDONLY;
  int x34123 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x34122);
  /* VAR */ struct stat x34124 = x33473;
  struct stat x34125 = x34124;
  struct stat* x34126 = &x34125;
  int x34127 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x34126);
  size_t x34128 = x34126->st_size;
  int x34129 = PROT_READ;
  int x34130 = MAP_PRIVATE;
  char* x214 = mmap(NULL, x34128, x34129, x34130, x34123, 0);
  /* VAR */ int x215 = 0;
  while(1) {
    
    int x216 = x215;
    int x217 = x216<(x34109);
    /* VAR */ int ite62251 = 0;
    if(x217) {
      char x73181 = *x214;
      int x73182 = x73181!=('\0');
      ite62251 = x73182;
    } else {
      
      ite62251 = 0;
    };
    int x59781 = ite62251;
    if (!(x59781)) break; 
    
    /* VAR */ int x34138 = 0;
    int x34139 = x34138;
    int* x34140 = &x34139;
    char* x34141 = strntoi_unchecked(x214, x34140);
    x214 = x34141;
    char* x36855 = (char*)malloc(26 * sizeof(char));
    memset(x36855, 0, 26 * sizeof(char));
    /* VAR */ char* x34144 = x214;
    while(1) {
      
      char x34145 = *x214;
      int x34146 = x34145!=('|');
      /* VAR */ int ite62270 = 0;
      if(x34146) {
        char x73199 = *x214;
        int x73200 = x73199!=('\n');
        ite62270 = x73200;
      } else {
        
        ite62270 = 0;
      };
      int x59793 = ite62270;
      if (!(x59793)) break; 
      
      x214 += 1;
    };
    char* x34152 = x34144;
    int x34153 = x214 - x34152;
    char* x34154 = x34144;
    char* x34155 = strncpy(x36855, x34154, x34153);
    x214 += 1;
    char* x36873 = (char*)malloc(41 * sizeof(char));
    memset(x36873, 0, 41 * sizeof(char));
    /* VAR */ char* x34163 = x214;
    while(1) {
      
      char x34164 = *x214;
      int x34165 = x34164!=('|');
      /* VAR */ int ite62293 = 0;
      if(x34165) {
        char x73221 = *x214;
        int x73222 = x73221!=('\n');
        ite62293 = x73222;
      } else {
        
        ite62293 = 0;
      };
      int x59809 = ite62293;
      if (!(x59809)) break; 
      
      x214 += 1;
    };
    char* x34171 = x34163;
    int x34172 = x214 - x34171;
    char* x34173 = x34163;
    char* x34174 = strncpy(x36873, x34173, x34172);
    x214 += 1;
    /* VAR */ int x34181 = 0;
    int x34182 = x34181;
    int* x34183 = &x34182;
    char* x34184 = strntoi_unchecked(x214, x34183);
    x214 = x34184;
    char* x36896 = (char*)malloc(16 * sizeof(char));
    memset(x36896, 0, 16 * sizeof(char));
    /* VAR */ char* x34187 = x214;
    while(1) {
      
      char x34188 = *x214;
      int x34189 = x34188!=('|');
      /* VAR */ int ite62321 = 0;
      if(x34189) {
        char x73248 = *x214;
        int x73249 = x73248!=('\n');
        ite62321 = x73249;
      } else {
        
        ite62321 = 0;
      };
      int x59830 = ite62321;
      if (!(x59830)) break; 
      
      x214 += 1;
    };
    char* x34195 = x34187;
    int x34196 = x214 - x34195;
    char* x34197 = x34187;
    char* x34198 = strncpy(x36896, x34197, x34196);
    x214 += 1;
    /* VAR */ double x34205 = 0.0;
    double x34206 = x34205;
    double* x34207 = &x34206;
    char* x34208 = strntod_unchecked(x214, x34207);
    x214 = x34208;
    char* x36919 = (char*)malloc(11 * sizeof(char));
    memset(x36919, 0, 11 * sizeof(char));
    /* VAR */ char* x34211 = x214;
    while(1) {
      
      char x34212 = *x214;
      int x34213 = x34212!=('|');
      /* VAR */ int ite62349 = 0;
      if(x34213) {
        char x73275 = *x214;
        int x73276 = x73275!=('\n');
        ite62349 = x73276;
      } else {
        
        ite62349 = 0;
      };
      int x59851 = ite62349;
      if (!(x59851)) break; 
      
      x214 += 1;
    };
    char* x34219 = x34211;
    int x34220 = x214 - x34219;
    char* x34221 = x34211;
    char* x34222 = strncpy(x36919, x34221, x34220);
    x214 += 1;
    char* x36937 = (char*)malloc(118 * sizeof(char));
    memset(x36937, 0, 118 * sizeof(char));
    /* VAR */ char* x34230 = x214;
    while(1) {
      
      char x34231 = *x214;
      int x34232 = x34231!=('|');
      /* VAR */ int ite62372 = 0;
      if(x34232) {
        char x73297 = *x214;
        int x73298 = x73297!=('\n');
        ite62372 = x73298;
      } else {
        
        ite62372 = 0;
      };
      int x59867 = ite62372;
      if (!(x59867)) break; 
      
      x214 += 1;
    };
    char* x34238 = x34230;
    int x34239 = x214 - x34238;
    char* x34240 = x34230;
    char* x34241 = strncpy(x36937, x34240, x34239);
    x214 += 1;
    int x264 = x215;
    *(x36825 + x264) = x34139;
    *(x36826 + x264) = x36855;
    *(x36827 + x264) = x36873;
    *(x36828 + x264) = x34182;
    *(x36829 + x264) = x36896;
    *(x36830 + x264) = x34206;
    *(x36831 + x264) = x36919;
    *(x36832 + x264) = x36937;
    int x266 = x215;
    int x267 = x266+(1);
    x215 = x267;
  };
  int x271 = 0;
  for(; x271 < 1 ; x271 += 1) {
    
    /* VAR */ int x74667 = 0;
    struct AGGRecord_OptimalString* x74668 = (struct AGGRecord_OptimalString*)malloc(50 * sizeof(struct AGGRecord_OptimalString));
    memset(x74668, 0, 50 * sizeof(struct AGGRecord_OptimalString));
    int x55610 = 0;
    for(; x55610 < 50 ; x55610 += 1) {
      
      *(x74668 + x55610) = (const struct AGGRecord_OptimalString){0};
    };
    struct SUPPLIERRecord* x74674 = (struct SUPPLIERRecord*)malloc(1048576 * sizeof(struct SUPPLIERRecord));
    memset(x74674, 0, 1048576 * sizeof(struct SUPPLIERRecord));
    struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x74675 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord*)malloc(1048576 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord));
    memset(x74675, 0, 1048576 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord));
    struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x74676 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord*)malloc(1048576 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord));
    memset(x74676, 0, 1048576 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord));
    struct REGIONRecord_NATIONRecord* x74677 = (struct REGIONRecord_NATIONRecord*)malloc(1048576 * sizeof(struct REGIONRecord_NATIONRecord));
    memset(x74677, 0, 1048576 * sizeof(struct REGIONRecord_NATIONRecord));
    struct REGIONRecord* x74678 = (struct REGIONRecord*)malloc(1048576 * sizeof(struct REGIONRecord));
    memset(x74678, 0, 1048576 * sizeof(struct REGIONRecord));
    /* VAR */ int x74679 = 0;
    struct REGIONRecord_NATIONRecord* x74680 = (struct REGIONRecord_NATIONRecord*)malloc(25 * sizeof(struct REGIONRecord_NATIONRecord));
    memset(x74680, 0, 25 * sizeof(struct REGIONRecord_NATIONRecord));
    /* VAR */ int x74681 = 0;
    while(1) {
      
      int x31597 = x74681;
      int x31598 = x31597<(25);
      if (!(x31598)) break; 
      
      int x31599 = x74681;
      struct REGIONRecord_NATIONRecord* x38433 = (struct REGIONRecord_NATIONRecord*)malloc(1 * sizeof(struct REGIONRecord_NATIONRecord));
      memset(x38433, 0, 1 * sizeof(struct REGIONRecord_NATIONRecord));
      x38433->R_REGIONKEY = 0; x38433->R_NAME = ""; x38433->R_COMMENT = ""; x38433->N_NATIONKEY = 0; x38433->N_NAME = ""; x38433->N_REGIONKEY = 0; x38433->N_COMMENT = ""; x38433->next = NULL;
      int x47244 = x38433==(NULL);
      /* VAR */ int ite63597 = 0;
      if(x47244) {
        ite63597 = 1;
      } else {
        
        char* x74693 = x38433->R_NAME;
        int x74694 = x74693==(NULL);
        /* VAR */ int x74695 = 0;
        if(x74694) {
          x74695 = 1;
        } else {
          
          int x74698 = strcmp(x74693, "");
          int x74699 = !(x74698);
          x74695 = x74699;
        };
        int x74702 = x74695;
        ite63597 = x74702;
      };
      int x60696 = ite63597;
      if(x60696) {
        *(x74680 + x31599) = (const struct REGIONRecord_NATIONRecord){0};
      } else {
        
        struct REGIONRecord_NATIONRecord x36992 = *x38433;
        *(x74680 + x31599) = x36992;
        struct REGIONRecord_NATIONRecord* x36994 = &(x74680[x31599]);
        x38433 = x36994;
      };
      int x31602 = x74681;
      int x31603 = x31602+(1);
      x74681 = x31603;
    };
    /* VAR */ int x74715 = 0;
    struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x74716 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord*)malloc(1200000 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord));
    memset(x74716, 0, 1200000 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord));
    /* VAR */ int x74717 = 0;
    while(1) {
      
      int x31609 = x74717;
      int x31610 = x31609<(1200000);
      if (!(x31610)) break; 
      
      int x31611 = x74717;
      struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x38453 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord*)malloc(1 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord));
      memset(x38453, 0, 1 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord));
      x38453->R_REGIONKEY = 0; x38453->R_NAME = ""; x38453->R_COMMENT = ""; x38453->N_NATIONKEY = 0; x38453->N_NAME = ""; x38453->N_REGIONKEY = 0; x38453->N_COMMENT = ""; x38453->C_CUSTKEY = 0; x38453->C_NAME = ""; x38453->C_ADDRESS = ""; x38453->C_NATIONKEY = 0; x38453->C_PHONE = ""; x38453->C_ACCTBAL = 0.0; x38453->C_MKTSEGMENT = ""; x38453->C_COMMENT = ""; x38453->next = NULL;
      int x47267 = x38453==(NULL);
      /* VAR */ int ite63628 = 0;
      if(x47267) {
        ite63628 = 1;
      } else {
        
        char* x74729 = x38453->R_NAME;
        int x74730 = x74729==(NULL);
        /* VAR */ int x74731 = 0;
        if(x74730) {
          x74731 = 1;
        } else {
          
          int x74734 = strcmp(x74729, "");
          int x74735 = !(x74734);
          x74731 = x74735;
        };
        int x74738 = x74731;
        ite63628 = x74738;
      };
      int x60718 = ite63628;
      if(x60718) {
        *(x74716 + x31611) = (const struct REGIONRecord_NATIONRecord_CUSTOMERRecord){0};
      } else {
        
        struct REGIONRecord_NATIONRecord_CUSTOMERRecord x37010 = *x38453;
        *(x74716 + x31611) = x37010;
        struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x37012 = &(x74716[x31611]);
        x38453 = x37012;
      };
      int x31614 = x74717;
      int x31615 = x31614+(1);
      x74717 = x31615;
    };
    /* VAR */ int x74751 = 0;
    struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x74752 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord*)malloc(12000000 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord));
    memset(x74752, 0, 12000000 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord));
    /* VAR */ int x74753 = 0;
    while(1) {
      
      int x31621 = x74753;
      int x31622 = x31621<(12000000);
      if (!(x31622)) break; 
      
      int x31623 = x74753;
      struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x38473 = (struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord*)malloc(1 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord));
      memset(x38473, 0, 1 * sizeof(struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord));
      x38473->R_REGIONKEY = 0; x38473->R_NAME = ""; x38473->R_COMMENT = ""; x38473->N_NATIONKEY = 0; x38473->N_NAME = ""; x38473->N_REGIONKEY = 0; x38473->N_COMMENT = ""; x38473->C_CUSTKEY = 0; x38473->C_NAME = ""; x38473->C_ADDRESS = ""; x38473->C_NATIONKEY = 0; x38473->C_PHONE = ""; x38473->C_ACCTBAL = 0.0; x38473->C_MKTSEGMENT = ""; x38473->C_COMMENT = ""; x38473->O_ORDERKEY = 0; x38473->O_CUSTKEY = 0; x38473->O_ORDERSTATUS = '\0'; x38473->O_TOTALPRICE = 0.0; x38473->O_ORDERDATE = 0; x38473->O_ORDERPRIORITY = ""; x38473->O_CLERK = ""; x38473->O_SHIPPRIORITY = 0; x38473->O_COMMENT = ""; x38473->next = NULL;
      int x47290 = x38473==(NULL);
      /* VAR */ int ite63659 = 0;
      if(x47290) {
        ite63659 = 1;
      } else {
        
        char* x74765 = x38473->R_NAME;
        int x74766 = x74765==(NULL);
        /* VAR */ int x74767 = 0;
        if(x74766) {
          x74767 = 1;
        } else {
          
          int x74770 = strcmp(x74765, "");
          int x74771 = !(x74770);
          x74767 = x74771;
        };
        int x74774 = x74767;
        ite63659 = x74774;
      };
      int x60740 = ite63659;
      if(x60740) {
        *(x74752 + x31623) = (const struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord){0};
      } else {
        
        struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord x37028 = *x38473;
        *(x74752 + x31623) = x37028;
        struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x37030 = &(x74752[x31623]);
        x38473 = x37030;
      };
      int x31626 = x74753;
      int x31627 = x31626+(1);
      x74753 = x31627;
    };
    /* VAR */ int x74787 = 0;
    double** x74788 = (double**)malloc(25 * sizeof(double*));
    memset(x74788, 0, 25 * sizeof(double*));
    /* VAR */ int x74789 = 0;
    while(1) {
      
      int x31633 = x74789;
      int x31634 = x31633<(25);
      if (!(x31634)) break; 
      
      int x31635 = x74789;
      double* x37043 = (double*)malloc(1 * sizeof(double));
      memset(x37043, 0, 1 * sizeof(double));
      *(x74788 + x31635) = x37043;
      int x31638 = x74789;
      int x31639 = x31638+(1);
      x74789 = x31639;
    };
    /* VAR */ int x74799 = 0;
    struct AGGRecord_OptimalString* x74800 = (struct AGGRecord_OptimalString*)malloc(25 * sizeof(struct AGGRecord_OptimalString));
    memset(x74800, 0, 25 * sizeof(struct AGGRecord_OptimalString));
    /* VAR */ int x74801 = 0;
    while(1) {
      
      int x31645 = x74801;
      int x31646 = x31645<(25);
      if (!(x31646)) break; 
      
      int x31647 = x74801;
      double* x31648 = x74788[x31647];
      struct AGGRecord_OptimalString* x38506 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x38506, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      x38506->key = ""; x38506->aggs = x31648; x38506->next = NULL;
      int x47326 = x38506==(NULL);
      /* VAR */ int ite63703 = 0;
      if(x47326) {
        ite63703 = 1;
      } else {
        
        char* x74814 = x38506->key;
        int x74815 = x74814==(NULL);
        /* VAR */ int x74816 = 0;
        if(x74815) {
          x74816 = 1;
        } else {
          
          int x74819 = strcmp(x74814, "");
          int x74820 = !(x74819);
          x74816 = x74820;
        };
        int x74823 = x74816;
        ite63703 = x74823;
      };
      int x60775 = ite63703;
      if(x60775) {
        *(x74800 + x31647) = (const struct AGGRecord_OptimalString){0};
      } else {
        
        struct AGGRecord_OptimalString x37059 = *x38506;
        *(x74800 + x31647) = x37059;
        struct AGGRecord_OptimalString* x37061 = &(x74800[x31647]);
        x38506 = x37061;
      };
      int x31651 = x74801;
      int x31652 = x31651+(1);
      x74801 = x31652;
    };
    /* VAR */ struct timeval x74836 = x32124;
    struct timeval x74837 = x74836;
    /* VAR */ struct timeval x74838 = x32124;
    struct timeval x74839 = x74838;
    /* VAR */ struct timeval x74840 = x32124;
    struct timeval x74841 = x74840;
    struct timeval* x74842 = &x74839;
    gettimeofday(x74842, NULL);
    /* VAR */ int x74844 = 0;
    /* VAR */ int x74845 = 0;
    /* VAR */ int x74846 = 0;
    /* VAR */ int x74847 = 0;
    /* VAR */ int x74848 = 0;
    /* VAR */ int x74849 = 0;
    int* x74896 = &(x74873);
    GTree* x74897 = g_tree_new(x74896);
    /* VAR */ int x74898 = 0;
    /* VAR */ int x74899 = 0;
    while(1) {
      
      int x74901 = x74849;
      int x74902 = x74901<(x33619);
      if (!(x74902)) break; 
      
      int x3651 = x74849;
      struct SUPPLIERRecord* x403 = &(x36339[x3651]);
      int x405 = x403->S_SUPPKEY;
      int x6718 = x405%(1048576);
      struct SUPPLIERRecord* x9928 = &(x74674[x6718]);
      /* VAR */ struct SUPPLIERRecord* list9929 = x9928;
      struct SUPPLIERRecord* x9930 = list9929;
      int x47394 = x9930==(NULL);
      /* VAR */ int ite63799 = 0;
      if(x47394) {
        ite63799 = 1;
      } else {
        
        char* x74914 = x9930->S_NAME;
        int x74915 = x74914==(NULL);
        /* VAR */ int x74916 = 0;
        if(x74915) {
          x74916 = 1;
        } else {
          
          int x74919 = strcmp(x74914, "");
          int x74920 = !(x74919);
          x74916 = x74920;
        };
        int x74923 = x74916;
        ite63799 = x74923;
      };
      int x60860 = ite63799;
      if(x60860) {
        list9929 = NULL;
        struct SUPPLIERRecord* x9937 = list9929;
        int x47401 = x9937==(NULL);
        /* VAR */ int ite63814 = 0;
        if(x47401) {
          ite63814 = 1;
        } else {
          
          char* x74934 = x9937->S_NAME;
          int x74935 = x74934==(NULL);
          /* VAR */ int x74936 = 0;
          if(x74935) {
            x74936 = 1;
          } else {
            
            int x74939 = strcmp(x74934, "");
            int x74940 = !(x74939);
            x74936 = x74940;
          };
          int x74943 = x74936;
          ite63814 = x74943;
        };
        int x60866 = ite63814;
        if(x60866) {
          *(x74674 + x6718) = (const struct SUPPLIERRecord){0};
        } else {
          
          struct SUPPLIERRecord x37116 = *x9937;
          *(x74674 + x6718) = x37116;
          struct SUPPLIERRecord* x37118 = &(x74674[x6718]);
          list9929 = x37118;
        };
      };
      int x47411 = x9928==(NULL);
      /* VAR */ int ite63832 = 0;
      if(x47411) {
        ite63832 = 1;
      } else {
        
        char* x74957 = x9928->S_NAME;
        int x74958 = x74957==(NULL);
        /* VAR */ int x74959 = 0;
        if(x74958) {
          x74959 = 1;
        } else {
          
          int x74962 = strcmp(x74957, "");
          int x74963 = !(x74962);
          x74959 = x74963;
        };
        int x74966 = x74959;
        ite63832 = x74966;
      };
      int x60875 = ite63832;
      if(x60875) {
        x403->next = NULL;
        int x47417 = x403==(NULL);
        /* VAR */ int ite63846 = 0;
        if(x47417) {
          ite63846 = 1;
        } else {
          
          char* x74976 = x403->S_NAME;
          int x74977 = x74976==(NULL);
          /* VAR */ int x74978 = 0;
          if(x74977) {
            x74978 = 1;
          } else {
            
            int x74981 = strcmp(x74976, "");
            int x74982 = !(x74981);
            x74978 = x74982;
          };
          int x74985 = x74978;
          ite63846 = x74985;
        };
        int x60880 = ite63846;
        if(x60880) {
          *(x74674 + x6718) = (const struct SUPPLIERRecord){0};
        } else {
          
          struct SUPPLIERRecord x37126 = *x403;
          *(x74674 + x6718) = x37126;
          struct SUPPLIERRecord* x37128 = &(x74674[x6718]);
          x403 = x37128;
        };
        list9929 = x403;
      } else {
        
        struct SUPPLIERRecord* x13473 = x9928->next;
        x403->next = x13473;
        x9928->next = x403;
      };
      int x3656 = x74849;
      int x409 = x3656+(1);
      x74849 = x409;
    };
    while(1) {
      
      int x75003 = x74844;
      int x75004 = x75003<(x33546);
      if (!(x75004)) break; 
      
      int x3665 = x74844;
      struct REGIONRecord* x418 = &(x36262[x3665]);
      char* x420 = x418->R_NAME;
      int x52468 = strcmp(x420, "ASIA");
      int x52469 = x52468==(0);
      if(x52469) {
        int x422 = x418->R_REGIONKEY;
        int x6744 = x422%(1048576);
        struct REGIONRecord* x9963 = &(x74678[x6744]);
        /* VAR */ struct REGIONRecord* list9964 = x9963;
        struct REGIONRecord* x9965 = list9964;
        int x47448 = x9965==(NULL);
        /* VAR */ int ite63886 = 0;
        if(x47448) {
          ite63886 = 1;
        } else {
          
          char* x75020 = x9965->R_NAME;
          int x75021 = x75020==(NULL);
          /* VAR */ int x75022 = 0;
          if(x75021) {
            x75022 = 1;
          } else {
            
            int x75025 = strcmp(x75020, "");
            int x75026 = !(x75025);
            x75022 = x75026;
          };
          int x75029 = x75022;
          ite63886 = x75029;
        };
        int x60909 = ite63886;
        if(x60909) {
          list9964 = NULL;
          struct REGIONRecord* x9972 = list9964;
          int x47455 = x9972==(NULL);
          /* VAR */ int ite63901 = 0;
          if(x47455) {
            ite63901 = 1;
          } else {
            
            char* x75040 = x9972->R_NAME;
            int x75041 = x75040==(NULL);
            /* VAR */ int x75042 = 0;
            if(x75041) {
              x75042 = 1;
            } else {
              
              int x75045 = strcmp(x75040, "");
              int x75046 = !(x75045);
              x75042 = x75046;
            };
            int x75049 = x75042;
            ite63901 = x75049;
          };
          int x60915 = ite63901;
          if(x60915) {
            *(x74678 + x6744) = (const struct REGIONRecord){0};
          } else {
            
            struct REGIONRecord x37159 = *x9972;
            *(x74678 + x6744) = x37159;
            struct REGIONRecord* x37161 = &(x74678[x6744]);
            list9964 = x37161;
          };
        };
        int x47465 = x9963==(NULL);
        /* VAR */ int ite63919 = 0;
        if(x47465) {
          ite63919 = 1;
        } else {
          
          char* x75063 = x9963->R_NAME;
          int x75064 = x75063==(NULL);
          /* VAR */ int x75065 = 0;
          if(x75064) {
            x75065 = 1;
          } else {
            
            int x75068 = strcmp(x75063, "");
            int x75069 = !(x75068);
            x75065 = x75069;
          };
          int x75072 = x75065;
          ite63919 = x75072;
        };
        int x60924 = ite63919;
        if(x60924) {
          x418->next = NULL;
          int x47471 = x418==(NULL);
          /* VAR */ int ite63933 = 0;
          if(x47471) {
            ite63933 = 1;
          } else {
            
            int x75082 = x420==(NULL);
            /* VAR */ int x75083 = 0;
            if(x75082) {
              x75083 = 1;
            } else {
              
              int x75086 = strcmp(x420, "");
              int x75087 = !(x75086);
              x75083 = x75087;
            };
            int x75090 = x75083;
            ite63933 = x75090;
          };
          int x60929 = ite63933;
          if(x60929) {
            *(x74678 + x6744) = (const struct REGIONRecord){0};
          } else {
            
            struct REGIONRecord x37169 = *x418;
            *(x74678 + x6744) = x37169;
            struct REGIONRecord* x37171 = &(x74678[x6744]);
            x418 = x37171;
          };
          list9964 = x418;
        } else {
          
          struct REGIONRecord* x13507 = x9963->next;
          x418->next = x13507;
          x9963->next = x418;
        };
      };
      int x3673 = x74844;
      int x427 = x3673+(1);
      x74844 = x427;
    };
    while(1) {
      
      int x75108 = x74845;
      int x75109 = x75108<(x33462);
      if (!(x75109)) break; 
      
      int x3682 = x74845;
      int x23295 = x36182[x3682];
      int x6767 = x23295%(1048576);
      struct REGIONRecord* x9995 = &(x74678[x6767]);
      int x47495 = x9995!=(NULL);
      /* VAR */ int ite63965 = 0;
      if(x47495) {
        char* x75117 = x9995->R_NAME;
        int x75118 = x75117!=(NULL);
        /* VAR */ int x75119 = 0;
        if(x75118) {
          int x75121 = strcmp(x75117, "");
          x75119 = x75121;
        } else {
          
          x75119 = 0;
        };
        int x75125 = x75119;
        ite63965 = x75125;
      } else {
        
        ite63965 = 0;
      };
      int x60951 = ite63965;
      if(x60951) {
        /* VAR */ struct REGIONRecord* current11210 = x9995;
        while(1) {
          
          struct REGIONRecord* x11212 = current11210;
          int x47503 = x11212!=(NULL);
          /* VAR */ int ite63981 = 0;
          if(x47503) {
            char* x75137 = x11212->R_NAME;
            int x75138 = x75137!=(NULL);
            /* VAR */ int x75139 = 0;
            if(x75138) {
              int x75141 = strcmp(x75137, "");
              x75139 = x75141;
            } else {
              
              x75139 = 0;
            };
            int x75145 = x75139;
            ite63981 = x75145;
          } else {
            
            ite63981 = 0;
          };
          int x60958 = ite63981;
          if (!(x60958)) break; 
          
          struct REGIONRecord* x11214 = current11210;
          struct REGIONRecord* x13566 = x11214->next;
          struct REGIONRecord* x11216 = current11210;
          int x10041 = x11216->R_REGIONKEY;
          int x10042 = x10041==(x23295);
          if(x10042) {
            char* x1330 = x11216->R_NAME;
            char* x1331 = x11216->R_COMMENT;
            int x23314 = x36180[x3682];
            char* x23316 = x36181[x3682];
            char* x23318 = x36183[x3682];
            int x31766 = x74679;
            struct REGIONRecord_NATIONRecord* x31767 = &(x74680[x31766]);
            x31767->R_REGIONKEY = x10041;
            x31767->R_NAME = x1330;
            x31767->R_COMMENT = x1331;
            x31767->N_NATIONKEY = x23314;
            x31767->N_NAME = x23316;
            x31767->N_REGIONKEY = x23295;
            x31767->N_COMMENT = x23318;
            x31767->next = NULL;
            int x31776 = x74679;
            int x31777 = x31776+(1);
            x74679 = x31777;
            int x459 = x31767->N_NATIONKEY;
            int x6786 = x459%(1048576);
            struct REGIONRecord_NATIONRecord* x10014 = &(x74677[x6786]);
            /* VAR */ struct REGIONRecord_NATIONRecord* list10015 = x10014;
            struct REGIONRecord_NATIONRecord* x10016 = list10015;
            int x47536 = x10016==(NULL);
            /* VAR */ int ite64022 = 0;
            if(x47536) {
              ite64022 = 1;
            } else {
              
              char* x75183 = x10016->R_NAME;
              int x75184 = x75183==(NULL);
              /* VAR */ int x75185 = 0;
              if(x75184) {
                x75185 = 1;
              } else {
                
                int x75188 = strcmp(x75183, "");
                int x75189 = !(x75188);
                x75185 = x75189;
              };
              int x75192 = x75185;
              ite64022 = x75192;
            };
            int x60990 = ite64022;
            if(x60990) {
              list10015 = NULL;
              struct REGIONRecord_NATIONRecord* x10023 = list10015;
              int x47543 = x10023==(NULL);
              /* VAR */ int ite64037 = 0;
              if(x47543) {
                ite64037 = 1;
              } else {
                
                char* x75203 = x10023->R_NAME;
                int x75204 = x75203==(NULL);
                /* VAR */ int x75205 = 0;
                if(x75204) {
                  x75205 = 1;
                } else {
                  
                  int x75208 = strcmp(x75203, "");
                  int x75209 = !(x75208);
                  x75205 = x75209;
                };
                int x75212 = x75205;
                ite64037 = x75212;
              };
              int x60996 = ite64037;
              if(x60996) {
                *(x74677 + x6786) = (const struct REGIONRecord_NATIONRecord){0};
              } else {
                
                struct REGIONRecord_NATIONRecord x37232 = *x10023;
                *(x74677 + x6786) = x37232;
                struct REGIONRecord_NATIONRecord* x37234 = &(x74677[x6786]);
                list10015 = x37234;
              };
            };
            int x47553 = x10014==(NULL);
            /* VAR */ int ite64055 = 0;
            if(x47553) {
              ite64055 = 1;
            } else {
              
              char* x75226 = x10014->R_NAME;
              int x75227 = x75226==(NULL);
              /* VAR */ int x75228 = 0;
              if(x75227) {
                x75228 = 1;
              } else {
                
                int x75231 = strcmp(x75226, "");
                int x75232 = !(x75231);
                x75228 = x75232;
              };
              int x75235 = x75228;
              ite64055 = x75235;
            };
            int x61005 = ite64055;
            if(x61005) {
              x31767->next = NULL;
              int x47559 = x31767==(NULL);
              /* VAR */ int ite64069 = 0;
              if(x47559) {
                ite64069 = 1;
              } else {
                
                char* x75245 = x31767->R_NAME;
                int x75246 = x75245==(NULL);
                /* VAR */ int x75247 = 0;
                if(x75246) {
                  x75247 = 1;
                } else {
                  
                  int x75250 = strcmp(x75245, "");
                  int x75251 = !(x75250);
                  x75247 = x75251;
                };
                int x75254 = x75247;
                ite64069 = x75254;
              };
              int x61010 = ite64069;
              if(x61010) {
                *(x74677 + x6786) = (const struct REGIONRecord_NATIONRecord){0};
              } else {
                
                struct REGIONRecord_NATIONRecord x37242 = *x31767;
                *(x74677 + x6786) = x37242;
                struct REGIONRecord_NATIONRecord* x37244 = &(x74677[x6786]);
                x31767 = x37244;
              };
              list10015 = x31767;
            } else {
              
              struct REGIONRecord_NATIONRecord* x13597 = x10014->next;
              x31767->next = x13597;
              x10014->next = x31767;
            };
          };
          current11210 = x13566;
        };
      };
      int x3720 = x74845;
      int x467 = x3720+(1);
      x74845 = x467;
    };
    while(1) {
      
      int x75273 = x74848;
      int x75274 = x75273<(x34109);
      if (!(x75274)) break; 
      
      int x3730 = x74848;
      int x23352 = x36828[x3730];
      int x6810 = x23352%(1048576);
      struct REGIONRecord_NATIONRecord* x10087 = &(x74677[x6810]);
      int x47585 = x10087!=(NULL);
      /* VAR */ int ite64103 = 0;
      if(x47585) {
        char* x75282 = x10087->R_NAME;
        int x75283 = x75282!=(NULL);
        /* VAR */ int x75284 = 0;
        if(x75283) {
          int x75286 = strcmp(x75282, "");
          x75284 = x75286;
        } else {
          
          x75284 = 0;
        };
        int x75290 = x75284;
        ite64103 = x75290;
      } else {
        
        ite64103 = 0;
      };
      int x61033 = ite64103;
      if(x61033) {
        /* VAR */ struct REGIONRecord_NATIONRecord* current11310 = x10087;
        while(1) {
          
          struct REGIONRecord_NATIONRecord* x11312 = current11310;
          int x47593 = x11312!=(NULL);
          /* VAR */ int ite64119 = 0;
          if(x47593) {
            char* x75302 = x11312->R_NAME;
            int x75303 = x75302!=(NULL);
            /* VAR */ int x75304 = 0;
            if(x75303) {
              int x75306 = strcmp(x75302, "");
              x75304 = x75306;
            } else {
              
              x75304 = 0;
            };
            int x75310 = x75304;
            ite64119 = x75310;
          } else {
            
            ite64119 = 0;
          };
          int x61040 = ite64119;
          if (!(x61040)) break; 
          
          struct REGIONRecord_NATIONRecord* x11314 = current11310;
          struct REGIONRecord_NATIONRecord* x13665 = x11314->next;
          struct REGIONRecord_NATIONRecord* x11316 = current11310;
          int x10141 = x11316->N_NATIONKEY;
          int x10142 = x10141==(x23352);
          if(x10142) {
            int x1389 = x11316->R_REGIONKEY;
            char* x1390 = x11316->R_NAME;
            char* x1391 = x11316->R_COMMENT;
            char* x1392 = x11316->N_NAME;
            int x1393 = x11316->N_REGIONKEY;
            char* x1394 = x11316->N_COMMENT;
            int x23375 = x36825[x3730];
            char* x23377 = x36826[x3730];
            char* x23379 = x36827[x3730];
            char* x23381 = x36829[x3730];
            double x23383 = x36830[x3730];
            char* x23385 = x36831[x3730];
            char* x23387 = x36832[x3730];
            int x31836 = x74715;
            struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x31837 = &(x74716[x31836]);
            x31837->R_REGIONKEY = x1389;
            x31837->R_NAME = x1390;
            x31837->R_COMMENT = x1391;
            x31837->N_NATIONKEY = x10141;
            x31837->N_NAME = x1392;
            x31837->N_REGIONKEY = x1393;
            x31837->N_COMMENT = x1394;
            x31837->C_CUSTKEY = x23375;
            x31837->C_NAME = x23377;
            x31837->C_ADDRESS = x23379;
            x31837->C_NATIONKEY = x23352;
            x31837->C_PHONE = x23381;
            x31837->C_ACCTBAL = x23383;
            x31837->C_MKTSEGMENT = x23385;
            x31837->C_COMMENT = x23387;
            x31837->next = NULL;
            int x31854 = x74715;
            int x31855 = x31854+(1);
            x74715 = x31855;
            int x500 = x31837->C_CUSTKEY;
            int x6837 = x500%(1048576);
            struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x10114 = &(x74676[x6837]);
            /* VAR */ struct REGIONRecord_NATIONRecord_CUSTOMERRecord* list10115 = x10114;
            struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x10116 = list10115;
            int x47642 = x10116==(NULL);
            /* VAR */ int ite64176 = 0;
            if(x47642) {
              ite64176 = 1;
            } else {
              
              char* x75364 = x10116->R_NAME;
              int x75365 = x75364==(NULL);
              /* VAR */ int x75366 = 0;
              if(x75365) {
                x75366 = 1;
              } else {
                
                int x75369 = strcmp(x75364, "");
                int x75370 = !(x75369);
                x75366 = x75370;
              };
              int x75373 = x75366;
              ite64176 = x75373;
            };
            int x61088 = ite64176;
            if(x61088) {
              list10115 = NULL;
              struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x10123 = list10115;
              int x47649 = x10123==(NULL);
              /* VAR */ int ite64191 = 0;
              if(x47649) {
                ite64191 = 1;
              } else {
                
                char* x75384 = x10123->R_NAME;
                int x75385 = x75384==(NULL);
                /* VAR */ int x75386 = 0;
                if(x75385) {
                  x75386 = 1;
                } else {
                  
                  int x75389 = strcmp(x75384, "");
                  int x75390 = !(x75389);
                  x75386 = x75390;
                };
                int x75393 = x75386;
                ite64191 = x75393;
              };
              int x61094 = ite64191;
              if(x61094) {
                *(x74676 + x6837) = (const struct REGIONRecord_NATIONRecord_CUSTOMERRecord){0};
              } else {
                
                struct REGIONRecord_NATIONRecord_CUSTOMERRecord x37322 = *x10123;
                *(x74676 + x6837) = x37322;
                struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x37324 = &(x74676[x6837]);
                list10115 = x37324;
              };
            };
            int x47659 = x10114==(NULL);
            /* VAR */ int ite64209 = 0;
            if(x47659) {
              ite64209 = 1;
            } else {
              
              char* x75407 = x10114->R_NAME;
              int x75408 = x75407==(NULL);
              /* VAR */ int x75409 = 0;
              if(x75408) {
                x75409 = 1;
              } else {
                
                int x75412 = strcmp(x75407, "");
                int x75413 = !(x75412);
                x75409 = x75413;
              };
              int x75416 = x75409;
              ite64209 = x75416;
            };
            int x61103 = ite64209;
            if(x61103) {
              x31837->next = NULL;
              int x47665 = x31837==(NULL);
              /* VAR */ int ite64223 = 0;
              if(x47665) {
                ite64223 = 1;
              } else {
                
                char* x75426 = x31837->R_NAME;
                int x75427 = x75426==(NULL);
                /* VAR */ int x75428 = 0;
                if(x75427) {
                  x75428 = 1;
                } else {
                  
                  int x75431 = strcmp(x75426, "");
                  int x75432 = !(x75431);
                  x75428 = x75432;
                };
                int x75435 = x75428;
                ite64223 = x75435;
              };
              int x61108 = ite64223;
              if(x61108) {
                *(x74676 + x6837) = (const struct REGIONRecord_NATIONRecord_CUSTOMERRecord){0};
              } else {
                
                struct REGIONRecord_NATIONRecord_CUSTOMERRecord x37332 = *x31837;
                *(x74676 + x6837) = x37332;
                struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x37334 = &(x74676[x6837]);
                x31837 = x37334;
              };
              list10115 = x31837;
            } else {
              
              struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x13704 = x10114->next;
              x31837->next = x13704;
              x10114->next = x31837;
            };
          };
          current11310 = x13665;
        };
      };
      int x3784 = x74848;
      int x508 = x3784+(1);
      x74848 = x508;
    };
    while(1) {
      
      int x75454 = x74847;
      int x75455 = x75454<(x33963);
      if (!(x75455)) break; 
      
      int x3793 = x74847;
      int x23421 = x36686[x3793];
      int x520 = x23421>=(19960101);
      /* VAR */ int ite64255 = 0;
      if(x520) {
        int x75461 = x23421<(19970101);
        ite64255 = x75461;
      } else {
        
        ite64255 = 0;
      };
      int x61129 = ite64255;
      if(x61129) {
        int x23427 = x36683[x3793];
        int x6866 = x23427%(1048576);
        struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x10200 = &(x74676[x6866]);
        int x47696 = x10200!=(NULL);
        /* VAR */ int ite64268 = 0;
        if(x47696) {
          char* x75473 = x10200->R_NAME;
          int x75474 = x75473!=(NULL);
          /* VAR */ int x75475 = 0;
          if(x75474) {
            int x75477 = strcmp(x75473, "");
            x75475 = x75477;
          } else {
            
            x75475 = 0;
          };
          int x75481 = x75475;
          ite64268 = x75481;
        } else {
          
          ite64268 = 0;
        };
        int x61136 = ite64268;
        if(x61136) {
          /* VAR */ struct REGIONRecord_NATIONRecord_CUSTOMERRecord* current11431 = x10200;
          while(1) {
            
            struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x11433 = current11431;
            int x47704 = x11433!=(NULL);
            /* VAR */ int ite64284 = 0;
            if(x47704) {
              char* x75493 = x11433->R_NAME;
              int x75494 = x75493!=(NULL);
              /* VAR */ int x75495 = 0;
              if(x75494) {
                int x75497 = strcmp(x75493, "");
                x75495 = x75497;
              } else {
                
                x75495 = 0;
              };
              int x75501 = x75495;
              ite64284 = x75501;
            } else {
              
              ite64284 = 0;
            };
            int x61143 = ite64284;
            if (!(x61143)) break; 
            
            struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x11435 = current11431;
            struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x13785 = x11435->next;
            struct REGIONRecord_NATIONRecord_CUSTOMERRecord* x11437 = current11431;
            int x10262 = x11437->C_CUSTKEY;
            int x10263 = x10262==(x23427);
            if(x10263) {
              int x1468 = x11437->R_REGIONKEY;
              char* x1469 = x11437->R_NAME;
              char* x1470 = x11437->R_COMMENT;
              int x1471 = x11437->N_NATIONKEY;
              char* x1472 = x11437->N_NAME;
              int x1473 = x11437->N_REGIONKEY;
              char* x1474 = x11437->N_COMMENT;
              char* x1475 = x11437->C_NAME;
              char* x1476 = x11437->C_ADDRESS;
              int x1477 = x11437->C_NATIONKEY;
              char* x1478 = x11437->C_PHONE;
              double x1479 = x11437->C_ACCTBAL;
              char* x1480 = x11437->C_MKTSEGMENT;
              char* x1481 = x11437->C_COMMENT;
              int x23458 = x36682[x3793];
              char x23460 = x36684[x3793];
              double x23462 = x36685[x3793];
              char* x23464 = x36687[x3793];
              char* x23466 = x36688[x3793];
              int x23468 = x36689[x3793];
              char* x23470 = x36690[x3793];
              int x31927 = x74751;
              struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x31928 = &(x74752[x31927]);
              x31928->R_REGIONKEY = x1468;
              x31928->R_NAME = x1469;
              x31928->R_COMMENT = x1470;
              x31928->N_NATIONKEY = x1471;
              x31928->N_NAME = x1472;
              x31928->N_REGIONKEY = x1473;
              x31928->N_COMMENT = x1474;
              x31928->C_CUSTKEY = x10262;
              x31928->C_NAME = x1475;
              x31928->C_ADDRESS = x1476;
              x31928->C_NATIONKEY = x1477;
              x31928->C_PHONE = x1478;
              x31928->C_ACCTBAL = x1479;
              x31928->C_MKTSEGMENT = x1480;
              x31928->C_COMMENT = x1481;
              x31928->O_ORDERKEY = x23458;
              x31928->O_CUSTKEY = x23427;
              x31928->O_ORDERSTATUS = x23460;
              x31928->O_TOTALPRICE = x23462;
              x31928->O_ORDERDATE = x23421;
              x31928->O_ORDERPRIORITY = x23464;
              x31928->O_CLERK = x23466;
              x31928->O_SHIPPRIORITY = x23468;
              x31928->O_COMMENT = x23470;
              x31928->next = NULL;
              int x31954 = x74751;
              int x31955 = x31954+(1);
              x74751 = x31955;
              int x544 = x31928->O_ORDERKEY;
              int x6901 = x544%(1048576);
              struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x10235 = &(x74675[x6901]);
              /* VAR */ struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* list10236 = x10235;
              struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x10237 = list10236;
              int x47770 = x10237==(NULL);
              /* VAR */ int ite64358 = 0;
              if(x47770) {
                ite64358 = 1;
              } else {
                
                char* x75572 = x10237->R_NAME;
                int x75573 = x75572==(NULL);
                /* VAR */ int x75574 = 0;
                if(x75573) {
                  x75574 = 1;
                } else {
                  
                  int x75577 = strcmp(x75572, "");
                  int x75578 = !(x75577);
                  x75574 = x75578;
                };
                int x75581 = x75574;
                ite64358 = x75581;
              };
              int x61208 = ite64358;
              if(x61208) {
                list10236 = NULL;
                struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x10244 = list10236;
                int x47777 = x10244==(NULL);
                /* VAR */ int ite64373 = 0;
                if(x47777) {
                  ite64373 = 1;
                } else {
                  
                  char* x75592 = x10244->R_NAME;
                  int x75593 = x75592==(NULL);
                  /* VAR */ int x75594 = 0;
                  if(x75593) {
                    x75594 = 1;
                  } else {
                    
                    int x75597 = strcmp(x75592, "");
                    int x75598 = !(x75597);
                    x75594 = x75598;
                  };
                  int x75601 = x75594;
                  ite64373 = x75601;
                };
                int x61214 = ite64373;
                if(x61214) {
                  *(x74675 + x6901) = (const struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord){0};
                } else {
                  
                  struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord x37434 = *x10244;
                  *(x74675 + x6901) = x37434;
                  struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x37436 = &(x74675[x6901]);
                  list10236 = x37436;
                };
              };
              int x47787 = x10235==(NULL);
              /* VAR */ int ite64391 = 0;
              if(x47787) {
                ite64391 = 1;
              } else {
                
                char* x75615 = x10235->R_NAME;
                int x75616 = x75615==(NULL);
                /* VAR */ int x75617 = 0;
                if(x75616) {
                  x75617 = 1;
                } else {
                  
                  int x75620 = strcmp(x75615, "");
                  int x75621 = !(x75620);
                  x75617 = x75621;
                };
                int x75624 = x75617;
                ite64391 = x75624;
              };
              int x61223 = ite64391;
              if(x61223) {
                x31928->next = NULL;
                int x47793 = x31928==(NULL);
                /* VAR */ int ite64405 = 0;
                if(x47793) {
                  ite64405 = 1;
                } else {
                  
                  char* x75634 = x31928->R_NAME;
                  int x75635 = x75634==(NULL);
                  /* VAR */ int x75636 = 0;
                  if(x75635) {
                    x75636 = 1;
                  } else {
                    
                    int x75639 = strcmp(x75634, "");
                    int x75640 = !(x75639);
                    x75636 = x75640;
                  };
                  int x75643 = x75636;
                  ite64405 = x75643;
                };
                int x61228 = ite64405;
                if(x61228) {
                  *(x74675 + x6901) = (const struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord){0};
                } else {
                  
                  struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord x37444 = *x31928;
                  *(x74675 + x6901) = x37444;
                  struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x37446 = &(x74675[x6901]);
                  x31928 = x37446;
                };
                list10236 = x31928;
              } else {
                
                struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x13832 = x10235->next;
                x31928->next = x13832;
                x10235->next = x31928;
              };
            };
            current11431 = x13785;
          };
        };
      };
      int x3868 = x74847;
      int x553 = x3868+(1);
      x74847 = x553;
    };
    while(1) {
      
      int x75662 = x74846;
      int x75663 = x75662<(x33740);
      if (!(x75663)) break; 
      
      int x3877 = x74846;
      int x23504 = x36462[x3877];
      int x6925 = x23504%(1048576);
      struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x10324 = &(x74675[x6925]);
      int x47819 = x10324!=(NULL);
      /* VAR */ int ite64439 = 0;
      if(x47819) {
        char* x75671 = x10324->R_NAME;
        int x75672 = x75671!=(NULL);
        /* VAR */ int x75673 = 0;
        if(x75672) {
          int x75675 = strcmp(x75671, "");
          x75673 = x75675;
        } else {
          
          x75673 = 0;
        };
        int x75679 = x75673;
        ite64439 = x75679;
      } else {
        
        ite64439 = 0;
      };
      int x61251 = ite64439;
      if(x61251) {
        /* VAR */ struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* current11710 = x10324;
        while(1) {
          
          struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x11712 = current11710;
          int x47827 = x11712!=(NULL);
          /* VAR */ int ite64455 = 0;
          if(x47827) {
            char* x75691 = x11712->R_NAME;
            int x75692 = x75691!=(NULL);
            /* VAR */ int x75693 = 0;
            if(x75692) {
              int x75695 = strcmp(x75691, "");
              x75693 = x75695;
            } else {
              
              x75693 = 0;
            };
            int x75699 = x75693;
            ite64455 = x75699;
          } else {
            
            ite64455 = 0;
          };
          int x61258 = ite64455;
          if (!(x61258)) break; 
          
          struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x11714 = current11710;
          struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x14060 = x11714->next;
          struct REGIONRecord_NATIONRecord_CUSTOMERRecord_ORDERSRecord* x11716 = current11710;
          int x10541 = x11716->O_ORDERKEY;
          int x10542 = x10541==(x23504);
          if(x10542) {
            int x1747 = x11716->N_NATIONKEY;
            char* x1748 = x11716->N_NAME;
            int x23546 = x36464[x3877];
            double x23552 = x36467[x3877];
            double x23554 = x36468[x3877];
            int x6975 = x23546%(1048576);
            struct SUPPLIERRecord* x10374 = &(x74674[x6975]);
            int x47844 = x10374!=(NULL);
            /* VAR */ int ite64480 = 0;
            if(x47844) {
              char* x75720 = x10374->S_NAME;
              int x75721 = x75720!=(NULL);
              /* VAR */ int x75722 = 0;
              if(x75721) {
                int x75724 = strcmp(x75720, "");
                x75722 = x75724;
              } else {
                
                x75722 = 0;
              };
              int x75728 = x75722;
              ite64480 = x75728;
            } else {
              
              ite64480 = 0;
            };
            int x61274 = ite64480;
            if(x61274) {
              /* VAR */ struct SUPPLIERRecord* current11840 = x10374;
              while(1) {
                
                struct SUPPLIERRecord* x11842 = current11840;
                int x47852 = x11842!=(NULL);
                /* VAR */ int ite64496 = 0;
                if(x47852) {
                  char* x75740 = x11842->S_NAME;
                  int x75741 = x75740!=(NULL);
                  /* VAR */ int x75742 = 0;
                  if(x75741) {
                    int x75744 = strcmp(x75740, "");
                    x75742 = x75744;
                  } else {
                    
                    x75742 = 0;
                  };
                  int x75748 = x75742;
                  ite64496 = x75748;
                } else {
                  
                  ite64496 = 0;
                };
                int x61281 = ite64496;
                if (!(x61281)) break; 
                
                struct SUPPLIERRecord* x11844 = current11840;
                struct SUPPLIERRecord* x14188 = x11844->next;
                struct SUPPLIERRecord* x11846 = current11840;
                int x10460 = x11846->S_SUPPKEY;
                int x10461 = x10460==(x23546);
                /* VAR */ int ite64512 = 0;
                if(x10461) {
                  int x75760 = x11846->S_NATIONKEY;
                  int x75761 = x1747==(x75760);
                  ite64512 = x75761;
                } else {
                  
                  ite64512 = 0;
                };
                int x61288 = ite64512;
                if(x61288) {
                  int x52961 = strlen(x1748);
                  /* VAR */ int x47866 = 0;
                  /* VAR */ int x47867 = 0;
                  while(1) {
                    
                    int x47868 = x47866;
                    int x47869 = x47868<(x52961);
                    if (!(x47869)) break; 
                    
                    int x47870 = x47867;
                    int x47871 = x47866;
                    char* x52969 = pointer_add(x1748, x47871);
                    char x52970 = *(x52969);
                    int x47874 = x47870+(x52970);
                    x47867 = x47874;
                    int x47876 = x47866;
                    int x47877 = x47876+(1);
                    x47866 = x47877;
                  };
                  int x47880 = x47867;
                  int x8244 = x47880&(49);
                  struct AGGRecord_OptimalString* x10398 = &(x74668[x8244]);
                  int x8246 = x74667;
                  int x8247 = x8244>(x8246);
                  if(x8247) {
                    x74667 = x8244;
                  };
                  /* VAR */ struct AGGRecord_OptimalString* current11874 = x10398;
                  /* VAR */ int found10408 = 0;
                  while(1) {
                    
                    struct AGGRecord_OptimalString* x11877 = current11874;
                    int x47891 = x11877!=(NULL);
                    /* VAR */ int ite64549 = 0;
                    if(x47891) {
                      char* x75796 = x11877->key;
                      int x75797 = x75796!=(NULL);
                      /* VAR */ int x75798 = 0;
                      if(x75797) {
                        int x75800 = strcmp(x75796, "");
                        x75798 = x75800;
                      } else {
                        
                        x75798 = 0;
                      };
                      int x75804 = x75798;
                      ite64549 = x75804;
                    } else {
                      
                      ite64549 = 0;
                    };
                    int x61318 = ite64549;
                    /* VAR */ int ite64560 = 0;
                    if(x61318) {
                      int x75811 = found10408;
                      int x75812 = !(x75811);
                      ite64560 = x75812;
                    } else {
                      
                      ite64560 = 0;
                    };
                    int x61320 = ite64560;
                    if (!(x61320)) break; 
                    
                    struct AGGRecord_OptimalString* x11882 = current11874;
                    char* x10416 = x11882->key;
                    int x47900 = strcmp(x10416, x1748);
                    int x47901 = !(x47900);
                    if(x47901) {
                      found10408 = 1;
                    } else {
                      
                      struct AGGRecord_OptimalString* x11888 = current11874;
                      struct AGGRecord_OptimalString* x14230 = x11888->next;
                      current11874 = x14230;
                    };
                  };
                  int x10424 = found10408;
                  int x10425 = !(x10424);
                  /* VAR */ struct AGGRecord_OptimalString** ite61333 = 0;
                  if(x10425) {
                    ite61333 = NULL;
                  } else {
                    
                    struct AGGRecord_OptimalString* x61335 = current11874;
                    ite61333 = x61335;
                  };
                  struct AGGRecord_OptimalString** x10431 = ite61333;
                  int x19929 = x10431!=(NULL);
                  /* VAR */ struct AGGRecord_OptimalString* ite61341 = 0;
                  if(x19929) {
                    ite61341 = x10431;
                  } else {
                    
                    int x61343 = x74787;
                    double* x61344 = x74788[x61343];
                    int x61345 = x74787;
                    int x61346 = x61345+(1);
                    x74787 = x61346;
                    int x61348 = x74799;
                    struct AGGRecord_OptimalString* x61349 = &(x74800[x61348]);
                    x61349->key = x1748;
                    x61349->aggs = x61344;
                    x61349->next = NULL;
                    int x61353 = x74799;
                    int x61354 = x61353+(1);
                    x74799 = x61354;
                    int x61356 = x10398==(NULL);
                    /* VAR */ int ite64605 = 0;
                    if(x61356) {
                      ite64605 = 1;
                    } else {
                      
                      char* x75856 = x10398->key;
                      int x75857 = x75856==(NULL);
                      /* VAR */ int x75858 = 0;
                      if(x75857) {
                        x75858 = 1;
                      } else {
                        
                        int x75861 = strcmp(x75856, "");
                        int x75862 = !(x75861);
                        x75858 = x75862;
                      };
                      int x75865 = x75858;
                      ite64605 = x75865;
                    };
                    int x61358 = ite64605;
                    if(x61358) {
                      x61349->next = NULL;
                      int x47932 = x61349==(NULL);
                      /* VAR */ int ite64619 = 0;
                      if(x47932) {
                        ite64619 = 1;
                      } else {
                        
                        char* x75875 = x61349->key;
                        int x75876 = x75875==(NULL);
                        /* VAR */ int x75877 = 0;
                        if(x75876) {
                          x75877 = 1;
                        } else {
                          
                          int x75880 = strcmp(x75875, "");
                          int x75881 = !(x75880);
                          x75877 = x75881;
                        };
                        int x75884 = x75877;
                        ite64619 = x75884;
                      };
                      int x61363 = ite64619;
                      if(x61363) {
                        *(x74668 + x8244) = (const struct AGGRecord_OptimalString){0};
                      } else {
                        
                        struct AGGRecord_OptimalString x37548 = *x61349;
                        *(x74668 + x8244) = x37548;
                        struct AGGRecord_OptimalString* x37550 = &(x74668[x8244]);
                        x61349 = x37550;
                      };
                    } else {
                      
                      struct AGGRecord_OptimalString* x14250 = x10398->next;
                      x61349->next = x14250;
                      x10398->next = x61349;
                    };
                    ite61341 = x61349;
                  };
                  struct AGGRecord_OptimalString* x8259 = ite61341;
                  double* x733 = x8259->aggs;
                  double x747 = x733[0];
                  double x750 = 1.0-(x23554);
                  double x751 = x23552*(x750);
                  double x752 = x747+(x751);
                  *x733 = x752;
                };
                current11840 = x14188;
              };
            };
          };
          current11710 = x14060;
        };
      };
      int x4169 = x74846;
      int x767 = x4169+(1);
      x74846 = x767;
    };
    int x75911 = x74667;
    int x75912 = x75911+(1);
    int x56461 = 0;
    for(; x56461 < x75912 ; x56461 += 1) {
      
      struct AGGRecord_OptimalString* x56462 = &(x74668[x56461]);
      /* VAR */ struct AGGRecord_OptimalString* x56463 = x56462;
      while(1) {
        
        struct AGGRecord_OptimalString* x11939 = x56463;
        int x47965 = x11939!=(NULL);
        /* VAR */ int ite64684 = 0;
        if(x47965) {
          char* x75948 = x11939->key;
          int x75949 = x75948!=(NULL);
          /* VAR */ int x75950 = 0;
          if(x75949) {
            int x75952 = strcmp(x75948, "");
            x75950 = x75952;
          } else {
            
            x75950 = 0;
          };
          int x75956 = x75950;
          ite64684 = x75956;
        } else {
          
          ite64684 = 0;
        };
        int x61410 = ite64684;
        if (!(x61410)) break; 
        
        struct AGGRecord_OptimalString* x11941 = x56463;
        struct AGGRecord_OptimalString* x14283 = x11941->next;
        struct AGGRecord_OptimalString* x11943 = x56463;
        g_tree_insert(x74897, x11943, x11943);
        x56463 = x14283;
      };
    };
    while(1) {
      
      int x4178 = x74898;
      int x778 = !(x4178);
      /* VAR */ int ite64703 = 0;
      if(x778) {
        int x75971 = g_tree_nnodes(x74897);
        int x75972 = x75971!=(0);
        ite64703 = x75972;
      } else {
        
        ite64703 = 0;
      };
      int x61420 = ite64703;
      if (!(x61420)) break; 
      
      void* x41956 = NULL;
      void** x41964 = &(x41956);
      g_tree_foreach(x74897, x41963, x41964);
      struct AGGRecord_OptimalString* x41966 = (struct AGGRecord_OptimalString*){x41956};
      int x41967 = g_tree_remove(x74897, x41966);
      if(0) {
        x74898 = 1;
      } else {
        
        char* x791 = x41966->key;
        double* x793 = x41966->aggs;
        double x794 = x793[0];
        printf("%s|%.4f\n", x791, x794);
        int x4196 = x74899;
        int x797 = x4196+(1);
        x74899 = x797;
      };
    };
    int x75998 = x74899;
    printf("(%d rows)\n", x75998);
    struct timeval* x76000 = &x74841;
    gettimeofday(x76000, NULL);
    struct timeval* x76002 = &x74837;
    struct timeval* x76003 = &x74841;
    struct timeval* x76004 = &x74839;
    long x76005 = timeval_subtract(x76002, x76003, x76004);
    printf("Generated code run in %ld milliseconds.\n", x76005);
  };
}
/* ----------- FUNCTIONS ----------- */
int x74873(struct AGGRecord_OptimalString* x375, struct AGGRecord_OptimalString* x376) {
  double* x377 = x375->aggs;
  double x378 = x377[0];
  double* x379 = x376->aggs;
  double x380 = x379[0];
  int x381 = x378<(x380);
  /* VAR */ int ite60831 = 0;
  if(x381) {
    ite60831 = 1;
  } else {
    
    double x60833 = x377[0];
    double x60834 = x379[0];
    int x60835 = x60833>(x60834);
    /* VAR */ int ite60837 = 0;
    if(x60835) {
      ite60837 = -1;
    } else {
      
      ite60837 = 0;
    };
    int x60836 = ite60837;
    ite60831 = x60836;
  };
  int x386 = ite60831;
  return x386; 
}

int x41963(void* x41957, void* x41958, void* x41959) {
  struct AGGRecord_OptimalString** x41960 = (struct AGGRecord_OptimalString**){x41959};
  struct AGGRecord_OptimalString* x41961 = (struct AGGRecord_OptimalString*){x41958};
  pointer_assign(x41960, x41961);
  return 1; 
}
