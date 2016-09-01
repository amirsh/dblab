#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_Q20GRPRecord;
  struct LINEITEMRecord;
  struct NATIONRecord;
  struct PARTRecord_PARTSUPPRecord_LINEITEMRecord;
  struct PARTRecord;
  struct Q20GRPRecord;
  struct PARTRecord_PARTSUPPRecord;
  struct SUPPLIERRecord;
  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord;
  struct PARTSUPPRecord;
  
  struct AGGRecord_Q20GRPRecord {
  struct Q20GRPRecord* key;
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
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  };
  
  struct PARTRecord_PARTSUPPRecord_LINEITEMRecord {
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
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
  
  struct Q20GRPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  };
  
  struct PARTRecord_PARTSUPPRecord {
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  };
  
  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  struct Q20GRPRecord* key;
  double* aggs;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  };
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
  };
  
  


int x46334(void* x12326);

int x46337(void* x12329, void* x12330);

int x46344(void* x12336);

int x46347(void* x12339, void* x12340);

int x46354(struct Q20GRPRecord* x14692);

int x46361(struct Q20GRPRecord* x14697, struct Q20GRPRecord* x14698);

int x46386(void* x12347);

int x46389(void* x12350, void* x12351);

int x46396(void* x12357);

int x46399(void* x12360, void* x12361);

int x46526(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x338, struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x339);

int x15565(void* x15559, void* x15560, void* x15561);
/* GLOBAL VARS */

struct timeval x6565;
int main(int argc, char** argv) {
  FILE* x7504 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x7505 = 0;
  int x7506 = x7505;
  int* x7507 = &x7506;
  int x7508 = fscanf(x7504, "%d", x7507);
  pclose(x7504);
  struct NATIONRecord* x9580 = (struct NATIONRecord*)malloc(x7506 * sizeof(struct NATIONRecord));
  memset(x9580, 0, x7506 * sizeof(struct NATIONRecord));
  int x7512 = O_RDONLY;
  int x7513 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x7512);
  struct stat x7514 = (struct stat){0};
  /* VAR */ struct stat x7515 = x7514;
  struct stat x7516 = x7515;
  struct stat* x7517 = &x7516;
  int x7518 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x7517);
  int x7520 = PROT_READ;
  int x7521 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x7517->st_size), x7520, x7521, x7513, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite39090 = 0;
    if((x5<(x7506))) {
      char x44633 = *x3;
      ite39090 = (x44633!=('\0'));
    } else {
      
      ite39090 = 0;
    };
    int x36564 = ite39090;
    if (!(x36564)) break; 
    
    /* VAR */ int x7529 = 0;
    int x7530 = x7529;
    int* x7531 = &x7530;
    char* x7532 = strntoi_unchecked(x3, x7531);
    x3 = x7532;
    char* x9604 = (char*)malloc(26 * sizeof(char));
    memset(x9604, 0, 26 * sizeof(char));
    /* VAR */ char* x7535 = x3;
    while(1) {
      
      char x7536 = *x3;
      /* VAR */ int ite39109 = 0;
      if((x7536!=('|'))) {
        char x44651 = *x3;
        ite39109 = (x44651!=('\n'));
      } else {
        
        ite39109 = 0;
      };
      int x36576 = ite39109;
      if (!(x36576)) break; 
      
      x3 += 1;
    };
    char* x7543 = x7535;
    int x7544 = x3 - x7543;
    char* x7545 = x7535;
    char* x7546 = strncpy(x9604, x7545, x7544);
    x3 += 1;
    /* VAR */ int x7553 = 0;
    int x7554 = x7553;
    int* x7555 = &x7554;
    char* x7556 = strntoi_unchecked(x3, x7555);
    x3 = x7556;
    char* x9627 = (char*)malloc(153 * sizeof(char));
    memset(x9627, 0, 153 * sizeof(char));
    /* VAR */ char* x7559 = x3;
    while(1) {
      
      char x7560 = *x3;
      /* VAR */ int ite39137 = 0;
      if((x7560!=('|'))) {
        char x44678 = *x3;
        ite39137 = (x44678!=('\n'));
      } else {
        
        ite39137 = 0;
      };
      int x36597 = ite39137;
      if (!(x36597)) break; 
      
      x3 += 1;
    };
    char* x7567 = x7559;
    int x7568 = x3 - x7567;
    char* x7569 = x7559;
    char* x7570 = strncpy(x9627, x7569, x7568);
    x3 += 1;
    struct NATIONRecord* x10694 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x10694, 0, 1 * sizeof(struct NATIONRecord));
    x10694->N_NATIONKEY = x7530; x10694->N_NAME = x9604; x10694->N_REGIONKEY = x7554; x10694->N_COMMENT = x9627;
    int x28 = x4;
    struct NATIONRecord x9647 = *x10694;
    *(x9580 + x28) = x9647;
    struct NATIONRecord* x9649 = &(x9580[x28]);
    x10694 = x9649;
    int x30 = x4;
    x4 = (x30+(1));
  };
  FILE* x7583 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x7584 = 0;
  int x7585 = x7584;
  int* x7586 = &x7585;
  int x7587 = fscanf(x7583, "%d", x7586);
  pclose(x7583);
  struct SUPPLIERRecord* x9660 = (struct SUPPLIERRecord*)malloc(x7585 * sizeof(struct SUPPLIERRecord));
  memset(x9660, 0, x7585 * sizeof(struct SUPPLIERRecord));
  int x7591 = O_RDONLY;
  int x7592 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x7591);
  /* VAR */ struct stat x7593 = x7514;
  struct stat x7594 = x7593;
  struct stat* x7595 = &x7594;
  int x7596 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x7595);
  int x7598 = PROT_READ;
  int x7599 = MAP_PRIVATE;
  char* x36 = mmap(NULL, (x7595->st_size), x7598, x7599, x7592, 0);
  /* VAR */ int x37 = 0;
  while(1) {
    
    int x38 = x37;
    /* VAR */ int ite39187 = 0;
    if((x38<(x7585))) {
      char x44727 = *x36;
      ite39187 = (x44727!=('\0'));
    } else {
      
      ite39187 = 0;
    };
    int x36640 = ite39187;
    if (!(x36640)) break; 
    
    /* VAR */ int x7607 = 0;
    int x7608 = x7607;
    int* x7609 = &x7608;
    char* x7610 = strntoi_unchecked(x36, x7609);
    x36 = x7610;
    char* x9683 = (char*)malloc(26 * sizeof(char));
    memset(x9683, 0, 26 * sizeof(char));
    /* VAR */ char* x7613 = x36;
    while(1) {
      
      char x7614 = *x36;
      /* VAR */ int ite39206 = 0;
      if((x7614!=('|'))) {
        char x44745 = *x36;
        ite39206 = (x44745!=('\n'));
      } else {
        
        ite39206 = 0;
      };
      int x36652 = ite39206;
      if (!(x36652)) break; 
      
      x36 += 1;
    };
    char* x7621 = x7613;
    int x7622 = x36 - x7621;
    char* x7623 = x7613;
    char* x7624 = strncpy(x9683, x7623, x7622);
    x36 += 1;
    char* x9701 = (char*)malloc(41 * sizeof(char));
    memset(x9701, 0, 41 * sizeof(char));
    /* VAR */ char* x7632 = x36;
    while(1) {
      
      char x7633 = *x36;
      /* VAR */ int ite39229 = 0;
      if((x7633!=('|'))) {
        char x44767 = *x36;
        ite39229 = (x44767!=('\n'));
      } else {
        
        ite39229 = 0;
      };
      int x36668 = ite39229;
      if (!(x36668)) break; 
      
      x36 += 1;
    };
    char* x7640 = x7632;
    int x7641 = x36 - x7640;
    char* x7642 = x7632;
    char* x7643 = strncpy(x9701, x7642, x7641);
    x36 += 1;
    /* VAR */ int x7650 = 0;
    int x7651 = x7650;
    int* x7652 = &x7651;
    char* x7653 = strntoi_unchecked(x36, x7652);
    x36 = x7653;
    char* x9724 = (char*)malloc(16 * sizeof(char));
    memset(x9724, 0, 16 * sizeof(char));
    /* VAR */ char* x7656 = x36;
    while(1) {
      
      char x7657 = *x36;
      /* VAR */ int ite39257 = 0;
      if((x7657!=('|'))) {
        char x44794 = *x36;
        ite39257 = (x44794!=('\n'));
      } else {
        
        ite39257 = 0;
      };
      int x36689 = ite39257;
      if (!(x36689)) break; 
      
      x36 += 1;
    };
    char* x7664 = x7656;
    int x7665 = x36 - x7664;
    char* x7666 = x7656;
    char* x7667 = strncpy(x9724, x7666, x7665);
    x36 += 1;
    /* VAR */ double x7674 = 0.0;
    double x7675 = x7674;
    double* x7676 = &x7675;
    char* x7677 = strntod_unchecked(x36, x7676);
    x36 = x7677;
    char* x9747 = (char*)malloc(102 * sizeof(char));
    memset(x9747, 0, 102 * sizeof(char));
    /* VAR */ char* x7680 = x36;
    while(1) {
      
      char x7681 = *x36;
      /* VAR */ int ite39285 = 0;
      if((x7681!=('|'))) {
        char x44821 = *x36;
        ite39285 = (x44821!=('\n'));
      } else {
        
        ite39285 = 0;
      };
      int x36710 = ite39285;
      if (!(x36710)) break; 
      
      x36 += 1;
    };
    char* x7688 = x7680;
    int x7689 = x36 - x7688;
    char* x7690 = x7680;
    char* x7691 = strncpy(x9747, x7690, x7689);
    x36 += 1;
    struct SUPPLIERRecord* x10816 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x10816, 0, 1 * sizeof(struct SUPPLIERRecord));
    x10816->S_SUPPKEY = x7608; x10816->S_NAME = x9683; x10816->S_ADDRESS = x9701; x10816->S_NATIONKEY = x7651; x10816->S_PHONE = x9724; x10816->S_ACCTBAL = x7675; x10816->S_COMMENT = x9747;
    int x78 = x37;
    struct SUPPLIERRecord x9767 = *x10816;
    *(x9660 + x78) = x9767;
    struct SUPPLIERRecord* x9769 = &(x9660[x78]);
    x10816 = x9769;
    int x80 = x37;
    x37 = (x80+(1));
  };
  FILE* x7704 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x7705 = 0;
  int x7706 = x7705;
  int* x7707 = &x7706;
  int x7708 = fscanf(x7704, "%d", x7707);
  pclose(x7704);
  struct PARTRecord* x9780 = (struct PARTRecord*)malloc(x7706 * sizeof(struct PARTRecord));
  memset(x9780, 0, x7706 * sizeof(struct PARTRecord));
  int x7712 = O_RDONLY;
  int x7713 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x7712);
  /* VAR */ struct stat x7714 = x7514;
  struct stat x7715 = x7714;
  struct stat* x7716 = &x7715;
  int x7717 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x7716);
  int x7719 = PROT_READ;
  int x7720 = MAP_PRIVATE;
  char* x86 = mmap(NULL, (x7716->st_size), x7719, x7720, x7713, 0);
  /* VAR */ int x87 = 0;
  while(1) {
    
    int x88 = x87;
    /* VAR */ int ite39335 = 0;
    if((x88<(x7706))) {
      char x44870 = *x86;
      ite39335 = (x44870!=('\0'));
    } else {
      
      ite39335 = 0;
    };
    int x36753 = ite39335;
    if (!(x36753)) break; 
    
    /* VAR */ int x7728 = 0;
    int x7729 = x7728;
    int* x7730 = &x7729;
    char* x7731 = strntoi_unchecked(x86, x7730);
    x86 = x7731;
    char* x9803 = (char*)malloc(56 * sizeof(char));
    memset(x9803, 0, 56 * sizeof(char));
    /* VAR */ char* x7734 = x86;
    while(1) {
      
      char x7735 = *x86;
      /* VAR */ int ite39354 = 0;
      if((x7735!=('|'))) {
        char x44888 = *x86;
        ite39354 = (x44888!=('\n'));
      } else {
        
        ite39354 = 0;
      };
      int x36765 = ite39354;
      if (!(x36765)) break; 
      
      x86 += 1;
    };
    char* x7742 = x7734;
    int x7743 = x86 - x7742;
    char* x7744 = x7734;
    char* x7745 = strncpy(x9803, x7744, x7743);
    x86 += 1;
    char* x9821 = (char*)malloc(26 * sizeof(char));
    memset(x9821, 0, 26 * sizeof(char));
    /* VAR */ char* x7753 = x86;
    while(1) {
      
      char x7754 = *x86;
      /* VAR */ int ite39377 = 0;
      if((x7754!=('|'))) {
        char x44910 = *x86;
        ite39377 = (x44910!=('\n'));
      } else {
        
        ite39377 = 0;
      };
      int x36781 = ite39377;
      if (!(x36781)) break; 
      
      x86 += 1;
    };
    char* x7761 = x7753;
    int x7762 = x86 - x7761;
    char* x7763 = x7753;
    char* x7764 = strncpy(x9821, x7763, x7762);
    x86 += 1;
    char* x9839 = (char*)malloc(11 * sizeof(char));
    memset(x9839, 0, 11 * sizeof(char));
    /* VAR */ char* x7772 = x86;
    while(1) {
      
      char x7773 = *x86;
      /* VAR */ int ite39400 = 0;
      if((x7773!=('|'))) {
        char x44932 = *x86;
        ite39400 = (x44932!=('\n'));
      } else {
        
        ite39400 = 0;
      };
      int x36797 = ite39400;
      if (!(x36797)) break; 
      
      x86 += 1;
    };
    char* x7780 = x7772;
    int x7781 = x86 - x7780;
    char* x7782 = x7772;
    char* x7783 = strncpy(x9839, x7782, x7781);
    x86 += 1;
    char* x9857 = (char*)malloc(26 * sizeof(char));
    memset(x9857, 0, 26 * sizeof(char));
    /* VAR */ char* x7791 = x86;
    while(1) {
      
      char x7792 = *x86;
      /* VAR */ int ite39423 = 0;
      if((x7792!=('|'))) {
        char x44954 = *x86;
        ite39423 = (x44954!=('\n'));
      } else {
        
        ite39423 = 0;
      };
      int x36813 = ite39423;
      if (!(x36813)) break; 
      
      x86 += 1;
    };
    char* x7799 = x7791;
    int x7800 = x86 - x7799;
    char* x7801 = x7791;
    char* x7802 = strncpy(x9857, x7801, x7800);
    x86 += 1;
    /* VAR */ int x7809 = 0;
    int x7810 = x7809;
    int* x7811 = &x7810;
    char* x7812 = strntoi_unchecked(x86, x7811);
    x86 = x7812;
    char* x9880 = (char*)malloc(11 * sizeof(char));
    memset(x9880, 0, 11 * sizeof(char));
    /* VAR */ char* x7815 = x86;
    while(1) {
      
      char x7816 = *x86;
      /* VAR */ int ite39451 = 0;
      if((x7816!=('|'))) {
        char x44981 = *x86;
        ite39451 = (x44981!=('\n'));
      } else {
        
        ite39451 = 0;
      };
      int x36834 = ite39451;
      if (!(x36834)) break; 
      
      x86 += 1;
    };
    char* x7823 = x7815;
    int x7824 = x86 - x7823;
    char* x7825 = x7815;
    char* x7826 = strncpy(x9880, x7825, x7824);
    x86 += 1;
    /* VAR */ double x7833 = 0.0;
    double x7834 = x7833;
    double* x7835 = &x7834;
    char* x7836 = strntod_unchecked(x86, x7835);
    x86 = x7836;
    char* x9903 = (char*)malloc(24 * sizeof(char));
    memset(x9903, 0, 24 * sizeof(char));
    /* VAR */ char* x7839 = x86;
    while(1) {
      
      char x7840 = *x86;
      /* VAR */ int ite39479 = 0;
      if((x7840!=('|'))) {
        char x45008 = *x86;
        ite39479 = (x45008!=('\n'));
      } else {
        
        ite39479 = 0;
      };
      int x36855 = ite39479;
      if (!(x36855)) break; 
      
      x86 += 1;
    };
    char* x7847 = x7839;
    int x7848 = x86 - x7847;
    char* x7849 = x7839;
    char* x7850 = strncpy(x9903, x7849, x7848);
    x86 += 1;
    struct PARTRecord* x10974 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x10974, 0, 1 * sizeof(struct PARTRecord));
    x10974->P_PARTKEY = x7729; x10974->P_NAME = x9803; x10974->P_MFGR = x9821; x10974->P_BRAND = x9839; x10974->P_TYPE = x9857; x10974->P_SIZE = x7810; x10974->P_CONTAINER = x9880; x10974->P_RETAILPRICE = x7834; x10974->P_COMMENT = x9903;
    int x142 = x87;
    struct PARTRecord x9923 = *x10974;
    *(x9780 + x142) = x9923;
    struct PARTRecord* x9925 = &(x9780[x142]);
    x10974 = x9925;
    int x144 = x87;
    x87 = (x144+(1));
  };
  FILE* x7863 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x7864 = 0;
  int x7865 = x7864;
  int* x7866 = &x7865;
  int x7867 = fscanf(x7863, "%d", x7866);
  pclose(x7863);
  struct PARTSUPPRecord* x9936 = (struct PARTSUPPRecord*)malloc(x7865 * sizeof(struct PARTSUPPRecord));
  memset(x9936, 0, x7865 * sizeof(struct PARTSUPPRecord));
  int x7871 = O_RDONLY;
  int x7872 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x7871);
  /* VAR */ struct stat x7873 = x7514;
  struct stat x7874 = x7873;
  struct stat* x7875 = &x7874;
  int x7876 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x7875);
  int x7878 = PROT_READ;
  int x7879 = MAP_PRIVATE;
  char* x150 = mmap(NULL, (x7875->st_size), x7878, x7879, x7872, 0);
  /* VAR */ int x151 = 0;
  while(1) {
    
    int x152 = x151;
    /* VAR */ int ite39529 = 0;
    if((x152<(x7865))) {
      char x45057 = *x150;
      ite39529 = (x45057!=('\0'));
    } else {
      
      ite39529 = 0;
    };
    int x36898 = ite39529;
    if (!(x36898)) break; 
    
    /* VAR */ int x7887 = 0;
    int x7888 = x7887;
    int* x7889 = &x7888;
    char* x7890 = strntoi_unchecked(x150, x7889);
    x150 = x7890;
    /* VAR */ int x7892 = 0;
    int x7893 = x7892;
    int* x7894 = &x7893;
    char* x7895 = strntoi_unchecked(x150, x7894);
    x150 = x7895;
    /* VAR */ int x7897 = 0;
    int x7898 = x7897;
    int* x7899 = &x7898;
    char* x7900 = strntoi_unchecked(x150, x7899);
    x150 = x7900;
    /* VAR */ double x7902 = 0.0;
    double x7903 = x7902;
    double* x7904 = &x7903;
    char* x7905 = strntod_unchecked(x150, x7904);
    x150 = x7905;
    char* x9974 = (char*)malloc(200 * sizeof(char));
    memset(x9974, 0, 200 * sizeof(char));
    /* VAR */ char* x7908 = x150;
    while(1) {
      
      char x7909 = *x150;
      /* VAR */ int ite39563 = 0;
      if((x7909!=('|'))) {
        char x45090 = *x150;
        ite39563 = (x45090!=('\n'));
      } else {
        
        ite39563 = 0;
      };
      int x36925 = ite39563;
      if (!(x36925)) break; 
      
      x150 += 1;
    };
    char* x7916 = x7908;
    int x7917 = x150 - x7916;
    char* x7918 = x7908;
    char* x7919 = strncpy(x9974, x7918, x7917);
    x150 += 1;
    struct PARTSUPPRecord* x11047 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x11047, 0, 1 * sizeof(struct PARTSUPPRecord));
    x11047->PS_PARTKEY = x7888; x11047->PS_SUPPKEY = x7893; x11047->PS_AVAILQTY = x7898; x11047->PS_SUPPLYCOST = x7903; x11047->PS_COMMENT = x9974;
    int x169 = x151;
    struct PARTSUPPRecord x9994 = *x11047;
    *(x9936 + x169) = x9994;
    struct PARTSUPPRecord* x9996 = &(x9936[x169]);
    x11047 = x9996;
    int x171 = x151;
    x151 = (x171+(1));
  };
  FILE* x7932 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x7933 = 0;
  int x7934 = x7933;
  int* x7935 = &x7934;
  int x7936 = fscanf(x7932, "%d", x7935);
  pclose(x7932);
  struct LINEITEMRecord* x10007 = (struct LINEITEMRecord*)malloc(x7934 * sizeof(struct LINEITEMRecord));
  memset(x10007, 0, x7934 * sizeof(struct LINEITEMRecord));
  int x7940 = O_RDONLY;
  int x7941 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x7940);
  /* VAR */ struct stat x7942 = x7514;
  struct stat x7943 = x7942;
  struct stat* x7944 = &x7943;
  int x7945 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x7944);
  int x7947 = PROT_READ;
  int x7948 = MAP_PRIVATE;
  char* x177 = mmap(NULL, (x7944->st_size), x7947, x7948, x7941, 0);
  /* VAR */ int x178 = 0;
  while(1) {
    
    int x179 = x178;
    /* VAR */ int ite39613 = 0;
    if((x179<(x7934))) {
      char x45139 = *x177;
      ite39613 = (x45139!=('\0'));
    } else {
      
      ite39613 = 0;
    };
    int x36968 = ite39613;
    if (!(x36968)) break; 
    
    /* VAR */ int x7956 = 0;
    int x7957 = x7956;
    int* x7958 = &x7957;
    char* x7959 = strntoi_unchecked(x177, x7958);
    x177 = x7959;
    /* VAR */ int x7961 = 0;
    int x7962 = x7961;
    int* x7963 = &x7962;
    char* x7964 = strntoi_unchecked(x177, x7963);
    x177 = x7964;
    /* VAR */ int x7966 = 0;
    int x7967 = x7966;
    int* x7968 = &x7967;
    char* x7969 = strntoi_unchecked(x177, x7968);
    x177 = x7969;
    /* VAR */ int x7971 = 0;
    int x7972 = x7971;
    int* x7973 = &x7972;
    char* x7974 = strntoi_unchecked(x177, x7973);
    x177 = x7974;
    /* VAR */ double x7976 = 0.0;
    double x7977 = x7976;
    double* x7978 = &x7977;
    char* x7979 = strntod_unchecked(x177, x7978);
    x177 = x7979;
    /* VAR */ double x7981 = 0.0;
    double x7982 = x7981;
    double* x7983 = &x7982;
    char* x7984 = strntod_unchecked(x177, x7983);
    x177 = x7984;
    /* VAR */ double x7986 = 0.0;
    double x7987 = x7986;
    double* x7988 = &x7987;
    char* x7989 = strntod_unchecked(x177, x7988);
    x177 = x7989;
    /* VAR */ double x7991 = 0.0;
    double x7992 = x7991;
    double* x7993 = &x7992;
    char* x7994 = strntod_unchecked(x177, x7993);
    x177 = x7994;
    char x7996 = *x177;
    /* VAR */ char x7997 = x7996;
    x177 += 1;
    x177 += 1;
    char x8000 = x7997;
    char x8001 = *x177;
    /* VAR */ char x8002 = x8001;
    x177 += 1;
    x177 += 1;
    char x8005 = x8002;
    /* VAR */ int x8006 = 0;
    int x8007 = x8006;
    int* x8008 = &x8007;
    char* x8009 = strntoi_unchecked(x177, x8008);
    x177 = x8009;
    /* VAR */ int x8011 = 0;
    int x8012 = x8011;
    int* x8013 = &x8012;
    char* x8014 = strntoi_unchecked(x177, x8013);
    x177 = x8014;
    /* VAR */ int x8016 = 0;
    int x8017 = x8016;
    int* x8018 = &x8017;
    char* x8019 = strntoi_unchecked(x177, x8018);
    x177 = x8019;
    /* VAR */ int x8025 = 0;
    int x8026 = x8025;
    int* x8027 = &x8026;
    char* x8028 = strntoi_unchecked(x177, x8027);
    x177 = x8028;
    /* VAR */ int x8030 = 0;
    int x8031 = x8030;
    int* x8032 = &x8031;
    char* x8033 = strntoi_unchecked(x177, x8032);
    x177 = x8033;
    /* VAR */ int x8035 = 0;
    int x8036 = x8035;
    int* x8037 = &x8036;
    char* x8038 = strntoi_unchecked(x177, x8037);
    x177 = x8038;
    /* VAR */ int x8044 = 0;
    int x8045 = x8044;
    int* x8046 = &x8045;
    char* x8047 = strntoi_unchecked(x177, x8046);
    x177 = x8047;
    /* VAR */ int x8049 = 0;
    int x8050 = x8049;
    int* x8051 = &x8050;
    char* x8052 = strntoi_unchecked(x177, x8051);
    x177 = x8052;
    /* VAR */ int x8054 = 0;
    int x8055 = x8054;
    int* x8056 = &x8055;
    char* x8057 = strntoi_unchecked(x177, x8056);
    x177 = x8057;
    char* x10132 = (char*)malloc(26 * sizeof(char));
    memset(x10132, 0, 26 * sizeof(char));
    /* VAR */ char* x8064 = x177;
    while(1) {
      
      char x8065 = *x177;
      /* VAR */ int ite39734 = 0;
      if((x8065!=('|'))) {
        char x45259 = *x177;
        ite39734 = (x45259!=('\n'));
      } else {
        
        ite39734 = 0;
      };
      int x37082 = ite39734;
      if (!(x37082)) break; 
      
      x177 += 1;
    };
    char* x8072 = x8064;
    int x8073 = x177 - x8072;
    char* x8074 = x8064;
    char* x8075 = strncpy(x10132, x8074, x8073);
    x177 += 1;
    char* x10150 = (char*)malloc(11 * sizeof(char));
    memset(x10150, 0, 11 * sizeof(char));
    /* VAR */ char* x8083 = x177;
    while(1) {
      
      char x8084 = *x177;
      /* VAR */ int ite39757 = 0;
      if((x8084!=('|'))) {
        char x45281 = *x177;
        ite39757 = (x45281!=('\n'));
      } else {
        
        ite39757 = 0;
      };
      int x37098 = ite39757;
      if (!(x37098)) break; 
      
      x177 += 1;
    };
    char* x8091 = x8083;
    int x8092 = x177 - x8091;
    char* x8093 = x8083;
    char* x8094 = strncpy(x10150, x8093, x8092);
    x177 += 1;
    char* x10168 = (char*)malloc(45 * sizeof(char));
    memset(x10168, 0, 45 * sizeof(char));
    /* VAR */ char* x8102 = x177;
    while(1) {
      
      char x8103 = *x177;
      /* VAR */ int ite39780 = 0;
      if((x8103!=('|'))) {
        char x45303 = *x177;
        ite39780 = (x45303!=('\n'));
      } else {
        
        ite39780 = 0;
      };
      int x37114 = ite39780;
      if (!(x37114)) break; 
      
      x177 += 1;
    };
    char* x8110 = x8102;
    int x8111 = x177 - x8110;
    char* x8112 = x8102;
    char* x8113 = strncpy(x10168, x8112, x8111);
    x177 += 1;
    struct LINEITEMRecord* x11243 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x11243, 0, 1 * sizeof(struct LINEITEMRecord));
    x11243->L_ORDERKEY = x7957; x11243->L_PARTKEY = x7962; x11243->L_SUPPKEY = x7967; x11243->L_LINENUMBER = x7972; x11243->L_QUANTITY = x7977; x11243->L_EXTENDEDPRICE = x7982; x11243->L_DISCOUNT = x7987; x11243->L_TAX = x7992; x11243->L_RETURNFLAG = x8000; x11243->L_LINESTATUS = x8005; x11243->L_SHIPDATE = (((x8007*(10000))+((x8012*(100))))+(x8017)); x11243->L_COMMITDATE = (((x8026*(10000))+((x8031*(100))))+(x8036)); x11243->L_RECEIPTDATE = (((x8045*(10000))+((x8050*(100))))+(x8055)); x11243->L_SHIPINSTRUCT = x10132; x11243->L_SHIPMODE = x10150; x11243->L_COMMENT = x10168;
    int x221 = x178;
    struct LINEITEMRecord x10188 = *x11243;
    *(x10007 + x221) = x10188;
    struct LINEITEMRecord* x10190 = &(x10007[x221]);
    x11243 = x10190;
    int x223 = x178;
    x178 = (x223+(1));
  };
  int x228 = 0;
  for(; x228 < 1 ; x228 += 1) {
    
    GHashTable* x46343 = g_hash_table_new(((void***){x46334}), ((int*){x46337}));
    GHashTable* x46353 = g_hash_table_new(((void***){x46344}), ((int*){x46347}));
    GHashTable* x46385 = g_hash_table_new(x46354, x46361);
    GHashTable* x46395 = g_hash_table_new(((void***){x46386}), ((int*){x46389}));
    GHashTable* x46405 = g_hash_table_new(((void***){x46396}), ((int*){x46399}));
    /* VAR */ int x46406 = 0;
    struct PARTRecord_PARTSUPPRecord* x46407 = (struct PARTRecord_PARTSUPPRecord*)malloc(6400000 * sizeof(struct PARTRecord_PARTSUPPRecord));
    memset(x46407, 0, 6400000 * sizeof(struct PARTRecord_PARTSUPPRecord));
    /* VAR */ int x46408 = 0;
    while(1) {
      
      int x6174 = x46408;
      if (!((x6174<(6400000)))) break; 
      
      int x6176 = x46408;
      struct PARTRecord_PARTSUPPRecord* x11269 = (struct PARTRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct PARTRecord_PARTSUPPRecord));
      memset(x11269, 0, 1 * sizeof(struct PARTRecord_PARTSUPPRecord));
      x11269->P_PARTKEY = 0; x11269->P_NAME = ""; x11269->P_MFGR = ""; x11269->P_BRAND = ""; x11269->P_TYPE = ""; x11269->P_SIZE = 0; x11269->P_CONTAINER = ""; x11269->P_RETAILPRICE = 0.0; x11269->P_COMMENT = ""; x11269->PS_PARTKEY = 0; x11269->PS_SUPPKEY = 0; x11269->PS_AVAILQTY = 0; x11269->PS_SUPPLYCOST = 0.0; x11269->PS_COMMENT = "";
      struct PARTRecord_PARTSUPPRecord x10211 = *x11269;
      *(x46407 + x6176) = x10211;
      struct PARTRecord_PARTSUPPRecord* x10213 = &(x46407[x6176]);
      x11269 = x10213;
      int x6179 = x46408;
      x46408 = (x6179+(1));
    };
    /* VAR */ int x46423 = 0;
    struct PARTRecord_PARTSUPPRecord_LINEITEMRecord* x46424 = (struct PARTRecord_PARTSUPPRecord_LINEITEMRecord*)malloc(48000000 * sizeof(struct PARTRecord_PARTSUPPRecord_LINEITEMRecord));
    memset(x46424, 0, 48000000 * sizeof(struct PARTRecord_PARTSUPPRecord_LINEITEMRecord));
    /* VAR */ int x46425 = 0;
    while(1) {
      
      int x6186 = x46425;
      if (!((x6186<(48000000)))) break; 
      
      int x6188 = x46425;
      struct PARTRecord_PARTSUPPRecord_LINEITEMRecord* x11286 = (struct PARTRecord_PARTSUPPRecord_LINEITEMRecord*)malloc(1 * sizeof(struct PARTRecord_PARTSUPPRecord_LINEITEMRecord));
      memset(x11286, 0, 1 * sizeof(struct PARTRecord_PARTSUPPRecord_LINEITEMRecord));
      x11286->P_PARTKEY = 0; x11286->P_NAME = ""; x11286->P_MFGR = ""; x11286->P_BRAND = ""; x11286->P_TYPE = ""; x11286->P_SIZE = 0; x11286->P_CONTAINER = ""; x11286->P_RETAILPRICE = 0.0; x11286->P_COMMENT = ""; x11286->PS_PARTKEY = 0; x11286->PS_SUPPKEY = 0; x11286->PS_AVAILQTY = 0; x11286->PS_SUPPLYCOST = 0.0; x11286->PS_COMMENT = ""; x11286->L_ORDERKEY = 0; x11286->L_PARTKEY = 0; x11286->L_SUPPKEY = 0; x11286->L_LINENUMBER = 0; x11286->L_QUANTITY = 0.0; x11286->L_EXTENDEDPRICE = 0.0; x11286->L_DISCOUNT = 0.0; x11286->L_TAX = 0.0; x11286->L_RETURNFLAG = '\0'; x11286->L_LINESTATUS = '\0'; x11286->L_SHIPDATE = 0; x11286->L_COMMITDATE = 0; x11286->L_RECEIPTDATE = 0; x11286->L_SHIPINSTRUCT = ""; x11286->L_SHIPMODE = ""; x11286->L_COMMENT = "";
      struct PARTRecord_PARTSUPPRecord_LINEITEMRecord x10226 = *x11286;
      *(x46424 + x6188) = x10226;
      struct PARTRecord_PARTSUPPRecord_LINEITEMRecord* x10228 = &(x46424[x6188]);
      x11286 = x10228;
      int x6191 = x46425;
      x46425 = (x6191+(1));
    };
    /* VAR */ int x46440 = 0;
    struct Q20GRPRecord* x46441 = (struct Q20GRPRecord*)malloc(48000000 * sizeof(struct Q20GRPRecord));
    memset(x46441, 0, 48000000 * sizeof(struct Q20GRPRecord));
    /* VAR */ int x46442 = 0;
    while(1) {
      
      int x6198 = x46442;
      if (!((x6198<(48000000)))) break; 
      
      int x6200 = x46442;
      struct Q20GRPRecord* x11303 = (struct Q20GRPRecord*)malloc(1 * sizeof(struct Q20GRPRecord));
      memset(x11303, 0, 1 * sizeof(struct Q20GRPRecord));
      x11303->PS_PARTKEY = 0; x11303->PS_SUPPKEY = 0; x11303->PS_AVAILQTY = 0;
      struct Q20GRPRecord x10241 = *x11303;
      *(x46441 + x6200) = x10241;
      struct Q20GRPRecord* x10243 = &(x46441[x6200]);
      x11303 = x10243;
      int x6203 = x46442;
      x46442 = (x6203+(1));
    };
    /* VAR */ int x46457 = 0;
    double** x46458 = (double**)malloc(48000000 * sizeof(double*));
    memset(x46458, 0, 48000000 * sizeof(double*));
    /* VAR */ int x46459 = 0;
    while(1) {
      
      int x6210 = x46459;
      if (!((x6210<(48000000)))) break; 
      
      int x6212 = x46459;
      double* x10255 = (double*)malloc(1 * sizeof(double));
      memset(x10255, 0, 1 * sizeof(double));
      *(x46458 + x6212) = x10255;
      int x6215 = x46459;
      x46459 = (x6215+(1));
    };
    /* VAR */ int x46469 = 0;
    struct AGGRecord_Q20GRPRecord* x46470 = (struct AGGRecord_Q20GRPRecord*)malloc(48000000 * sizeof(struct AGGRecord_Q20GRPRecord));
    memset(x46470, 0, 48000000 * sizeof(struct AGGRecord_Q20GRPRecord));
    /* VAR */ int x46471 = 0;
    while(1) {
      
      int x6222 = x46471;
      if (!((x6222<(48000000)))) break; 
      
      int x6224 = x46471;
      struct Q20GRPRecord* x6225 = &(x46441[x6224]);
      double* x6226 = x46458[x6224];
      struct AGGRecord_Q20GRPRecord* x11334 = (struct AGGRecord_Q20GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q20GRPRecord));
      memset(x11334, 0, 1 * sizeof(struct AGGRecord_Q20GRPRecord));
      x11334->key = x6225; x11334->aggs = x6226;
      struct AGGRecord_Q20GRPRecord x10270 = *x11334;
      *(x46470 + x6224) = x10270;
      struct AGGRecord_Q20GRPRecord* x10272 = &(x46470[x6224]);
      x11334 = x10272;
      int x6229 = x46471;
      x46471 = (x6229+(1));
    };
    /* VAR */ int x46488 = 0;
    struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x46489 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*)malloc(48000000 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
    memset(x46489, 0, 48000000 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
    /* VAR */ int x46490 = 0;
    while(1) {
      
      int x6236 = x46490;
      if (!((x6236<(48000000)))) break; 
      
      int x6238 = x46490;
      struct Q20GRPRecord* x6239 = &(x46441[x6238]);
      double* x6240 = x46458[x6238];
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x11353 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
      memset(x11353, 0, 1 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
      x11353->N_NATIONKEY = 0; x11353->N_NAME = ""; x11353->N_REGIONKEY = 0; x11353->N_COMMENT = ""; x11353->key = x6239; x11353->aggs = x6240; x11353->S_SUPPKEY = 0; x11353->S_NAME = ""; x11353->S_ADDRESS = ""; x11353->S_NATIONKEY = 0; x11353->S_PHONE = ""; x11353->S_ACCTBAL = 0.0; x11353->S_COMMENT = "";
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord x10287 = *x11353;
      *(x46489 + x6238) = x10287;
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x10289 = &(x46489[x6238]);
      x11353 = x10289;
      int x6243 = x46490;
      x46490 = (x6243+(1));
    };
    /* VAR */ struct timeval x46507 = x6565;
    struct timeval x46508 = x46507;
    /* VAR */ struct timeval x46509 = x6565;
    struct timeval x46510 = x46509;
    /* VAR */ struct timeval x46511 = x6565;
    struct timeval x46512 = x46511;
    struct timeval* x46513 = &x46510;
    gettimeofday(x46513, NULL);
    /* VAR */ int x46515 = 0;
    /* VAR */ int x46516 = 0;
    /* VAR */ int x46517 = 0;
    /* VAR */ int x46518 = 0;
    /* VAR */ int x46519 = 0;
    int* x46532 = &(x46526);
    GTree* x46533 = g_tree_new(x46532);
    /* VAR */ int x46534 = 0;
    /* VAR */ int x46535 = 0;
    while(1) {
      
      int x46537 = x46518;
      if (!((x46537<(x7506)))) break; 
      
      int x2799 = x46518;
      struct NATIONRecord* x359 = &(x9580[x2799]);
      int x30251 = strcmp((x359->N_NAME), "JORDAN");
      if((x30251==(0))) {
        void* x12501 = (void*){(x359->N_NATIONKEY)};
        void* x12503 = g_hash_table_lookup(x46343, x12501);
        GList** x12504 = (GList**){x12503};
        GList** x12505 = NULL;
        /* VAR */ GList** ite38313 = 0;
        if((x12504==(x12505))) {
          GList** x38314 = malloc(8);
          GList* x38315 = NULL;
          pointer_assign(x38314, x38315);
          ite38313 = x38314;
        } else {
          
          ite38313 = x12504;
        };
        GList** x12510 = ite38313;
        GList* x12511 = *(x12510);
        GList* x12512 = g_list_prepend(x12511, ((void*){x359}));
        pointer_assign(x12510, x12512);
        g_hash_table_insert(x46343, x12501, ((void*){x12510}));
      };
      int x2807 = x46518;
      x46518 = (x2807+(1));
    };
    while(1) {
      
      int x46570 = x46515;
      if (!((x46570<(x7706)))) break; 
      
      int x2816 = x46515;
      struct PARTRecord* x377 = &(x9780[x2816]);
      int x30280 = strlen("azure");
      int x30281 = strncmp((x377->P_NAME), "azure", x30280);
      if((x30281==(0))) {
        void* x12529 = (void*){(x377->P_PARTKEY)};
        void* x12531 = g_hash_table_lookup(x46405, x12529);
        GList** x12532 = (GList**){x12531};
        GList** x12533 = NULL;
        /* VAR */ GList** ite38346 = 0;
        if((x12532==(x12533))) {
          GList** x38347 = malloc(8);
          GList* x38348 = NULL;
          pointer_assign(x38347, x38348);
          ite38346 = x38347;
        } else {
          
          ite38346 = x12532;
        };
        GList** x12538 = ite38346;
        GList* x12539 = *(x12538);
        GList* x12540 = g_list_prepend(x12539, ((void*){x377}));
        pointer_assign(x12538, x12540);
        g_hash_table_insert(x46405, x12529, ((void*){x12538}));
      };
      int x2824 = x46515;
      x46515 = (x2824+(1));
    };
    while(1) {
      
      int x46604 = x46516;
      if (!((x46604<(x7865)))) break; 
      
      int x2833 = x46516;
      struct PARTSUPPRecord* x395 = &(x9936[x2833]);
      int x397 = x395->PS_PARTKEY;
      void* x12555 = g_hash_table_lookup(x46405, ((void*){x397}));
      GList** x12556 = (GList**){x12555};
      if((x12556!=(NULL))) {
        GList* x14975 = *(x12556);
        /* VAR */ GList* x14976 = x14975;
        while(1) {
          
          GList* x14977 = x14976;
          GList* x14978 = NULL;
          if (!((x14977!=(x14978)))) break; 
          
          GList* x14980 = x14976;
          void* x14981 = g_list_nth_data(x14980, 0);
          struct PARTRecord* x14982 = (struct PARTRecord*){x14981};
          GList* x14983 = x14976;
          GList* x14984 = g_list_next(x14983);
          x14976 = x14984;
          int x14986 = x14982->P_PARTKEY;
          if((x14986==(x397))) {
            int x6322 = x46406;
            struct PARTRecord_PARTSUPPRecord* x6323 = &(x46407[x6322]);
            x6323->P_PARTKEY = x14986;
            x6323->P_NAME = (x14982->P_NAME);
            x6323->P_MFGR = (x14982->P_MFGR);
            x6323->P_BRAND = (x14982->P_BRAND);
            x6323->P_TYPE = (x14982->P_TYPE);
            x6323->P_SIZE = (x14982->P_SIZE);
            x6323->P_CONTAINER = (x14982->P_CONTAINER);
            x6323->P_RETAILPRICE = (x14982->P_RETAILPRICE);
            x6323->P_COMMENT = (x14982->P_COMMENT);
            x6323->PS_PARTKEY = x397;
            x6323->PS_SUPPKEY = (x395->PS_SUPPKEY);
            x6323->PS_AVAILQTY = (x395->PS_AVAILQTY);
            x6323->PS_SUPPLYCOST = (x395->PS_SUPPLYCOST);
            x6323->PS_COMMENT = (x395->PS_COMMENT);
            int x6338 = x46406;
            x46406 = (x6338+(1));
            void* x12598 = (void*){(x6323->PS_PARTKEY)};
            void* x12600 = g_hash_table_lookup(x46395, x12598);
            GList** x12601 = (GList**){x12600};
            GList** x12602 = NULL;
            /* VAR */ GList** ite38483 = 0;
            if((x12601==(x12602))) {
              GList** x38484 = malloc(8);
              GList* x38485 = NULL;
              pointer_assign(x38484, x38485);
              ite38483 = x38484;
            } else {
              
              ite38483 = x12601;
            };
            GList** x12607 = ite38483;
            GList* x12608 = *(x12607);
            GList* x12609 = g_list_prepend(x12608, ((void*){x6323}));
            pointer_assign(x12607, x12609);
            g_hash_table_insert(x46395, x12598, ((void*){x12607}));
          };
        };
      };
      int x2885 = x46516;
      x46516 = (x2885+(1));
    };
    while(1) {
      
      int x46742 = x46519;
      if (!((x46742<(x7934)))) break; 
      
      int x2895 = x46519;
      struct LINEITEMRecord* x436 = &(x10007[x2895]);
      int x438 = x436->L_SHIPDATE;
      /* VAR */ int ite41246 = 0;
      if((x438>=(19960101))) {
        ite41246 = (x438<(19970101));
      } else {
        
        ite41246 = 0;
      };
      int x38506 = ite41246;
      if(x38506) {
        int x442 = x436->L_PARTKEY;
        void* x12630 = g_hash_table_lookup(x46395, ((void*){x442}));
        GList** x12631 = (GList**){x12630};
        if((x12631!=(NULL))) {
          GList* x15174 = *(x12631);
          /* VAR */ GList* x15175 = x15174;
          while(1) {
            
            GList* x15176 = x15175;
            GList* x15177 = NULL;
            if (!((x15176!=(x15177)))) break; 
            
            GList* x15179 = x15175;
            void* x15180 = g_list_nth_data(x15179, 0);
            struct PARTRecord_PARTSUPPRecord* x15181 = (struct PARTRecord_PARTSUPPRecord*){x15180};
            GList* x15182 = x15175;
            GList* x15183 = g_list_next(x15182);
            x15175 = x15183;
            int x15185 = x15181->PS_PARTKEY;
            /* VAR */ int ite41389 = 0;
            if((x15185==(x442))) {
              ite41389 = ((x15181->PS_SUPPKEY)==((x436->L_SUPPKEY)));
            } else {
              
              ite41389 = 0;
            };
            int x38635 = ite41389;
            if(x38635) {
              int x6399 = x46423;
              struct PARTRecord_PARTSUPPRecord_LINEITEMRecord* x6400 = &(x46424[x6399]);
              x6400->P_PARTKEY = (x15181->P_PARTKEY);
              x6400->P_NAME = (x15181->P_NAME);
              x6400->P_MFGR = (x15181->P_MFGR);
              x6400->P_BRAND = (x15181->P_BRAND);
              x6400->P_TYPE = (x15181->P_TYPE);
              x6400->P_SIZE = (x15181->P_SIZE);
              x6400->P_CONTAINER = (x15181->P_CONTAINER);
              x6400->P_RETAILPRICE = (x15181->P_RETAILPRICE);
              x6400->P_COMMENT = (x15181->P_COMMENT);
              x6400->PS_PARTKEY = x15185;
              x6400->PS_SUPPKEY = (x15181->PS_SUPPKEY);
              x6400->PS_AVAILQTY = (x15181->PS_AVAILQTY);
              x6400->PS_SUPPLYCOST = (x15181->PS_SUPPLYCOST);
              x6400->PS_COMMENT = (x15181->PS_COMMENT);
              x6400->L_ORDERKEY = (x436->L_ORDERKEY);
              x6400->L_PARTKEY = x442;
              x6400->L_SUPPKEY = (x436->L_SUPPKEY);
              x6400->L_LINENUMBER = (x436->L_LINENUMBER);
              x6400->L_QUANTITY = (x436->L_QUANTITY);
              x6400->L_EXTENDEDPRICE = (x436->L_EXTENDEDPRICE);
              x6400->L_DISCOUNT = (x436->L_DISCOUNT);
              x6400->L_TAX = (x436->L_TAX);
              x6400->L_RETURNFLAG = (x436->L_RETURNFLAG);
              x6400->L_LINESTATUS = (x436->L_LINESTATUS);
              x6400->L_SHIPDATE = x438;
              x6400->L_COMMITDATE = (x436->L_COMMITDATE);
              x6400->L_RECEIPTDATE = (x436->L_RECEIPTDATE);
              x6400->L_SHIPINSTRUCT = (x436->L_SHIPINSTRUCT);
              x6400->L_SHIPMODE = (x436->L_SHIPMODE);
              x6400->L_COMMENT = (x436->L_COMMENT);
              int x6431 = x46423;
              x46423 = (x6431+(1));
              int x6437 = x46440;
              struct Q20GRPRecord* x6438 = &(x46441[x6437]);
              x6438->PS_PARTKEY = (x6400->PS_PARTKEY);
              x6438->PS_SUPPKEY = (x6400->PS_SUPPKEY);
              x6438->PS_AVAILQTY = (x6400->PS_AVAILQTY);
              int x6442 = x46440;
              x46440 = (x6442+(1));
              void* x15265 = g_hash_table_lookup(x46385, x6438);
              /* VAR */ struct AGGRecord_Q20GRPRecord* ite38713 = 0;
              if((x15265==(NULL))) {
                int x38714 = x46457;
                double* x38715 = x46458[x38714];
                int x38716 = x46457;
                x46457 = (x38716+(1));
                int x38719 = x46469;
                struct AGGRecord_Q20GRPRecord* x38720 = &(x46470[x38719]);
                x38720->key = x6438;
                x38720->aggs = x38715;
                int x38723 = x46469;
                x46469 = (x38723+(1));
                g_hash_table_insert(x46385, x6438, x38720);
                ite38713 = x38720;
              } else {
                
                ite38713 = x15265;
              };
              struct AGGRecord_Q20GRPRecord* x15168 = ite38713;
              double* x506 = x15168->aggs;
              double x520 = x506[0];
              *x506 = (x520+((x6400->L_QUANTITY)));
            };
          };
        };
      };
      int x3044 = x46519;
      x46519 = (x3044+(1));
    };
    GList* x47032 = g_hash_table_get_keys(x46385);
    /* VAR */ GList* x47033 = x47032;
    int x47034 = g_hash_table_size(x46385);
    int x33785 = 0;
    for(; x33785 < x47034 ; x33785 += 1) {
      
      GList* x33786 = x47033;
      void* x33787 = g_list_nth_data(x33786, 0);
      GList* x33788 = g_list_next(x33786);
      x47033 = x33788;
      void* x33790 = g_hash_table_lookup(x46385, x33787);
      struct AGGRecord_Q20GRPRecord* x33792 = (struct AGGRecord_Q20GRPRecord*){x33790};
      struct Q20GRPRecord* x33793 = x33792->key;
      double x33797 = ((double*) { x33792->aggs })[0];
      if(((x33793->PS_AVAILQTY)>((0.5*(x33797))))) {
        void* x12752 = (void*){(x33793->PS_SUPPKEY)};
        void* x12754 = g_hash_table_lookup(x46353, x12752);
        GList** x12755 = (GList**){x12754};
        GList** x12756 = NULL;
        /* VAR */ GList** ite38833 = 0;
        if((x12755==(x12756))) {
          GList** x38834 = malloc(8);
          GList* x38835 = NULL;
          pointer_assign(x38834, x38835);
          ite38833 = x38834;
        } else {
          
          ite38833 = x12755;
        };
        GList** x12761 = ite38833;
        GList* x12762 = *(x12761);
        GList* x12763 = g_list_prepend(x12762, ((void*){x33792}));
        pointer_assign(x12761, x12763);
        g_hash_table_insert(x46353, x12752, ((void*){x12761}));
      };
    };
    while(1) {
      
      int x47109 = x46517;
      if (!((x47109<(x7585)))) break; 
      
      int x3068 = x46517;
      struct SUPPLIERRecord* x560 = &(x9660[x3068]);
      int x562 = x560->S_SUPPKEY;
      void* x12776 = g_hash_table_lookup(x46353, ((void*){x562}));
      GList** x12777 = (GList**){x12776};
      if((x12777!=(NULL))) {
        GList* x15455 = *(x12777);
        /* VAR */ GList* x15456 = x15455;
        while(1) {
          
          GList* x15457 = x15456;
          GList* x15458 = NULL;
          if (!((x15457!=(x15458)))) break; 
          
          GList* x15460 = x15456;
          void* x15461 = g_list_nth_data(x15460, 0);
          struct AGGRecord_Q20GRPRecord* x15462 = (struct AGGRecord_Q20GRPRecord*){x15461};
          GList* x15463 = x15456;
          GList* x15464 = g_list_next(x15463);
          x15456 = x15464;
          struct Q20GRPRecord* x15466 = x15462->key;
          if(((x15466->PS_SUPPKEY)==(x562))) {
            int x1448 = x560->S_NATIONKEY;
            void* x12796 = g_hash_table_lookup(x46343, ((void*){x1448}));
            GList** x12797 = (GList**){x12796};
            if((x12797!=(NULL))) {
              GList* x15418 = *(x12797);
              /* VAR */ GList* x15419 = x15418;
              while(1) {
                
                GList* x15420 = x15419;
                GList* x15421 = NULL;
                if (!((x15420!=(x15421)))) break; 
                
                GList* x15423 = x15419;
                void* x15424 = g_list_nth_data(x15423, 0);
                struct NATIONRecord* x15425 = (struct NATIONRecord*){x15424};
                GList* x15426 = x15419;
                GList* x15427 = g_list_next(x15426);
                x15419 = x15427;
                int x15429 = x15425->N_NATIONKEY;
                if((x15429==(x1448))) {
                  int x6517 = x46488;
                  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x6518 = &(x46489[x6517]);
                  x6518->N_NATIONKEY = x15429;
                  x6518->N_NAME = (x15425->N_NAME);
                  x6518->N_REGIONKEY = (x15425->N_REGIONKEY);
                  x6518->N_COMMENT = (x15425->N_COMMENT);
                  x6518->key = x15466;
                  x6518->aggs = ((double*) { x15462->aggs });
                  x6518->S_SUPPKEY = x562;
                  x6518->S_NAME = (x560->S_NAME);
                  x6518->S_ADDRESS = (x560->S_ADDRESS);
                  x6518->S_NATIONKEY = x1448;
                  x6518->S_PHONE = (x560->S_PHONE);
                  x6518->S_ACCTBAL = (x560->S_ACCTBAL);
                  x6518->S_COMMENT = (x560->S_COMMENT);
                  int x6532 = x46488;
                  x46488 = (x6532+(1));
                  g_tree_insert(x46533, x6518, x6518);
                };
              };
            };
          };
        };
      };
      int x3164 = x46517;
      x46517 = (x3164+(1));
    };
    while(1) {
      
      int x3168 = x46534;
      int x643 = !(x3168);
      /* VAR */ int ite41801 = 0;
      if(x643) {
        int x47301 = g_tree_nnodes(x46533);
        ite41801 = (x47301!=(0));
      } else {
        
        ite41801 = 0;
      };
      int x39037 = ite41801;
      if (!(x39037)) break; 
      
      void* x15558 = NULL;
      void** x15566 = &(x15558);
      g_tree_foreach(x46533, x15565, x15566);
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x15568 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*){x15558};
      int x15569 = g_tree_remove(x46533, x15568);
      if(0) {
        x46534 = 1;
      } else {
        
        printf("%s|%s\n", (x15568->S_NAME), (x15568->S_ADDRESS));
        int x3186 = x46535;
        x46535 = (x3186+(1));
      };
    };
    int x47327 = x46535;
    printf("(%d rows)\n", x47327);
    struct timeval* x47329 = &x46512;
    gettimeofday(x47329, NULL);
    struct timeval* x47331 = &x46508;
    struct timeval* x47332 = &x46512;
    struct timeval* x47333 = &x46510;
    long x47334 = timeval_subtract(x47331, x47332, x47333);
    printf("Generated code run in %ld milliseconds.\n", x47334);
  };
}
/* ----------- FUNCTIONS ----------- */
int x46334(void* x12326) {
  int x12327 = g_direct_hash(x12326);
  return x12327; 
}

int x46337(void* x12329, void* x12330) {
  int x12331 = g_direct_equal(x12329, x12330);
  return x12331; 
}

int x46344(void* x12336) {
  int x12337 = g_direct_hash(x12336);
  return x12337; 
}

int x46347(void* x12339, void* x12340) {
  int x12341 = g_direct_equal(x12339, x12340);
  return x12341; 
}

int x46354(struct Q20GRPRecord* x14692) {
  return (((x14692->PS_PARTKEY)+((x14692->PS_SUPPKEY)))+((x14692->PS_AVAILQTY))); 
}

int x46361(struct Q20GRPRecord* x14697, struct Q20GRPRecord* x14698) {
  /* VAR */ int ite40865 = 0;
  if(((x14697->PS_PARTKEY)==((x14698->PS_PARTKEY)))) {
    ite40865 = ((x14697->PS_SUPPKEY)==((x14698->PS_SUPPKEY)));
  } else {
    
    ite40865 = 0;
  };
  int x38143 = ite40865;
  /* VAR */ int ite40872 = 0;
  if(x38143) {
    ite40872 = ((x14697->PS_AVAILQTY)==((x14698->PS_AVAILQTY)));
  } else {
    
    ite40872 = 0;
  };
  int x38145 = ite40872;
  return x38145; 
}

int x46386(void* x12347) {
  int x12348 = g_direct_hash(x12347);
  return x12348; 
}

int x46389(void* x12350, void* x12351) {
  int x12352 = g_direct_equal(x12350, x12351);
  return x12352; 
}

int x46396(void* x12357) {
  int x12358 = g_direct_hash(x12357);
  return x12358; 
}

int x46399(void* x12360, void* x12361) {
  int x12362 = g_direct_equal(x12360, x12361);
  return x12362; 
}

int x46526(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x338, struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x339) {
  int x30239 = strcmp((x338->S_NAME), (x339->S_NAME));
  return x30239; 
}

int x15565(void* x15559, void* x15560, void* x15561) {
  pointer_assign(((struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord**){x15561}), ((struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*){x15560}));
  return 1; 
}
