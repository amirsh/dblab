#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct AGGRecord_OptimalString;
  struct ORDERSRecord;
  
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
  struct LINEITEMRecord* next;
  };
  
  struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
  struct AGGRecord_OptimalString* next;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
  };
  
  


int x25192(struct AGGRecord_OptimalString* x139, struct AGGRecord_OptimalString* x140);

int x11987(void* x11981, void* x11982, void* x11983);
/* GLOBAL VARS */

struct timeval x8051;
int main(int argc, char** argv) {
  FILE* x8545 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x8546 = 0;
  int x8547 = x8546;
  int* x8548 = &x8547;
  int x8549 = fscanf(x8545, "%d", x8548);
  pclose(x8545);
  struct LINEITEMRecord* x9657 = (struct LINEITEMRecord*)malloc(x8547 * sizeof(struct LINEITEMRecord));
  memset(x9657, 0, x8547 * sizeof(struct LINEITEMRecord));
  int x8553 = O_RDONLY;
  int x8554 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x8553);
  struct stat x8555 = (struct stat){0};
  /* VAR */ struct stat x8556 = x8555;
  struct stat x8557 = x8556;
  struct stat* x8558 = &x8557;
  int x8559 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x8558);
  size_t x8560 = x8558->st_size;
  int x8561 = PROT_READ;
  int x8562 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x8560, x8561, x8562, x8554, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x8547);
    /* VAR */ int ite19982 = 0;
    if(x6) {
      char x24239 = *x3;
      int x24240 = x24239!=('\0');
      ite19982 = x24240;
    } else {
      
      ite19982 = 0;
    };
    int x19030 = ite19982;
    if (!(x19030)) break; 
    
    /* VAR */ int x8570 = 0;
    int x8571 = x8570;
    int* x8572 = &x8571;
    char* x8573 = strntoi_unchecked(x3, x8572);
    x3 = x8573;
    /* VAR */ int x8575 = 0;
    int x8576 = x8575;
    int* x8577 = &x8576;
    char* x8578 = strntoi_unchecked(x3, x8577);
    x3 = x8578;
    /* VAR */ int x8580 = 0;
    int x8581 = x8580;
    int* x8582 = &x8581;
    char* x8583 = strntoi_unchecked(x3, x8582);
    x3 = x8583;
    /* VAR */ int x8585 = 0;
    int x8586 = x8585;
    int* x8587 = &x8586;
    char* x8588 = strntoi_unchecked(x3, x8587);
    x3 = x8588;
    /* VAR */ double x8590 = 0.0;
    double x8591 = x8590;
    double* x8592 = &x8591;
    char* x8593 = strntod_unchecked(x3, x8592);
    x3 = x8593;
    /* VAR */ double x8595 = 0.0;
    double x8596 = x8595;
    double* x8597 = &x8596;
    char* x8598 = strntod_unchecked(x3, x8597);
    x3 = x8598;
    /* VAR */ double x8600 = 0.0;
    double x8601 = x8600;
    double* x8602 = &x8601;
    char* x8603 = strntod_unchecked(x3, x8602);
    x3 = x8603;
    /* VAR */ double x8605 = 0.0;
    double x8606 = x8605;
    double* x8607 = &x8606;
    char* x8608 = strntod_unchecked(x3, x8607);
    x3 = x8608;
    char x8610 = *x3;
    /* VAR */ char x8611 = x8610;
    x3 += 1;
    x3 += 1;
    char x8614 = x8611;
    char x8615 = *x3;
    /* VAR */ char x8616 = x8615;
    x3 += 1;
    x3 += 1;
    char x8619 = x8616;
    /* VAR */ int x8620 = 0;
    int x8621 = x8620;
    int* x8622 = &x8621;
    char* x8623 = strntoi_unchecked(x3, x8622);
    x3 = x8623;
    /* VAR */ int x8625 = 0;
    int x8626 = x8625;
    int* x8627 = &x8626;
    char* x8628 = strntoi_unchecked(x3, x8627);
    x3 = x8628;
    /* VAR */ int x8630 = 0;
    int x8631 = x8630;
    int* x8632 = &x8631;
    char* x8633 = strntoi_unchecked(x3, x8632);
    x3 = x8633;
    int x8635 = x8621*(10000);
    int x8636 = x8626*(100);
    int x8637 = x8635+(x8636);
    int x8638 = x8637+(x8631);
    /* VAR */ int x8639 = 0;
    int x8640 = x8639;
    int* x8641 = &x8640;
    char* x8642 = strntoi_unchecked(x3, x8641);
    x3 = x8642;
    /* VAR */ int x8644 = 0;
    int x8645 = x8644;
    int* x8646 = &x8645;
    char* x8647 = strntoi_unchecked(x3, x8646);
    x3 = x8647;
    /* VAR */ int x8649 = 0;
    int x8650 = x8649;
    int* x8651 = &x8650;
    char* x8652 = strntoi_unchecked(x3, x8651);
    x3 = x8652;
    int x8654 = x8640*(10000);
    int x8655 = x8645*(100);
    int x8656 = x8654+(x8655);
    int x8657 = x8656+(x8650);
    /* VAR */ int x8658 = 0;
    int x8659 = x8658;
    int* x8660 = &x8659;
    char* x8661 = strntoi_unchecked(x3, x8660);
    x3 = x8661;
    /* VAR */ int x8663 = 0;
    int x8664 = x8663;
    int* x8665 = &x8664;
    char* x8666 = strntoi_unchecked(x3, x8665);
    x3 = x8666;
    /* VAR */ int x8668 = 0;
    int x8669 = x8668;
    int* x8670 = &x8669;
    char* x8671 = strntoi_unchecked(x3, x8670);
    x3 = x8671;
    int x8673 = x8659*(10000);
    int x8674 = x8664*(100);
    int x8675 = x8673+(x8674);
    int x8676 = x8675+(x8669);
    char* x9783 = (char*)malloc(26 * sizeof(char));
    memset(x9783, 0, 26 * sizeof(char));
    /* VAR */ char* x8678 = x3;
    while(1) {
      
      char x8679 = *x3;
      int x8680 = x8679!=('|');
      /* VAR */ int ite20103 = 0;
      if(x8680) {
        char x24359 = *x3;
        int x24360 = x24359!=('\n');
        ite20103 = x24360;
      } else {
        
        ite20103 = 0;
      };
      int x19144 = ite20103;
      if (!(x19144)) break; 
      
      x3 += 1;
    };
    char* x8686 = x8678;
    int x8687 = x3 - x8686;
    char* x8688 = x8678;
    char* x8689 = strncpy(x9783, x8688, x8687);
    x3 += 1;
    char* x9801 = (char*)malloc(11 * sizeof(char));
    memset(x9801, 0, 11 * sizeof(char));
    /* VAR */ char* x8697 = x3;
    while(1) {
      
      char x8698 = *x3;
      int x8699 = x8698!=('|');
      /* VAR */ int ite20126 = 0;
      if(x8699) {
        char x24381 = *x3;
        int x24382 = x24381!=('\n');
        ite20126 = x24382;
      } else {
        
        ite20126 = 0;
      };
      int x19160 = ite20126;
      if (!(x19160)) break; 
      
      x3 += 1;
    };
    char* x8705 = x8697;
    int x8706 = x3 - x8705;
    char* x8707 = x8697;
    char* x8708 = strncpy(x9801, x8707, x8706);
    x3 += 1;
    char* x9819 = (char*)malloc(45 * sizeof(char));
    memset(x9819, 0, 45 * sizeof(char));
    /* VAR */ char* x8716 = x3;
    while(1) {
      
      char x8717 = *x3;
      int x8718 = x8717!=('|');
      /* VAR */ int ite20149 = 0;
      if(x8718) {
        char x24403 = *x3;
        int x24404 = x24403!=('\n');
        ite20149 = x24404;
      } else {
        
        ite20149 = 0;
      };
      int x19176 = ite20149;
      if (!(x19176)) break; 
      
      x3 += 1;
    };
    char* x8724 = x8716;
    int x8725 = x3 - x8724;
    char* x8726 = x8716;
    char* x8727 = strncpy(x9819, x8726, x8725);
    x3 += 1;
    struct LINEITEMRecord* x10420 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x10420, 0, 1 * sizeof(struct LINEITEMRecord));
    x10420->L_ORDERKEY = x8571; x10420->L_PARTKEY = x8576; x10420->L_SUPPKEY = x8581; x10420->L_LINENUMBER = x8586; x10420->L_QUANTITY = x8591; x10420->L_EXTENDEDPRICE = x8596; x10420->L_DISCOUNT = x8601; x10420->L_TAX = x8606; x10420->L_RETURNFLAG = x8614; x10420->L_LINESTATUS = x8619; x10420->L_SHIPDATE = x8638; x10420->L_COMMITDATE = x8657; x10420->L_RECEIPTDATE = x8676; x10420->L_SHIPINSTRUCT = x9783; x10420->L_SHIPMODE = x9801; x10420->L_COMMENT = x9819; x10420->next = NULL;
    int x47 = x4;
    int x14020 = x10420==(NULL);
    /* VAR */ int ite20172 = 0;
    if(x14020) {
      ite20172 = 1;
    } else {
      
      char* x24426 = x10420->L_SHIPINSTRUCT;
      int x24427 = x24426==(NULL);
      /* VAR */ int x24428 = 0;
      if(x24427) {
        x24428 = 1;
      } else {
        
        int x24431 = strcmp(x24426, "");
        int x24432 = !(x24431);
        x24428 = x24432;
      };
      int x24435 = x24428;
      ite20172 = x24435;
    };
    int x19192 = ite20172;
    if(x19192) {
      *(x9657 + x47) = (const struct LINEITEMRecord){0};
    } else {
      
      struct LINEITEMRecord x9841 = *x10420;
      *(x9657 + x47) = x9841;
      struct LINEITEMRecord* x9843 = &(x9657[x47]);
      x10420 = x9843;
    };
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x8740 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x8741 = 0;
  int x8742 = x8741;
  int* x8743 = &x8742;
  int x8744 = fscanf(x8740, "%d", x8743);
  pclose(x8740);
  struct ORDERSRecord* x9855 = (struct ORDERSRecord*)malloc(x8742 * sizeof(struct ORDERSRecord));
  memset(x9855, 0, x8742 * sizeof(struct ORDERSRecord));
  int x8748 = O_RDONLY;
  int x8749 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x8748);
  /* VAR */ struct stat x8750 = x8555;
  struct stat x8751 = x8750;
  struct stat* x8752 = &x8751;
  int x8753 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x8752);
  size_t x8754 = x8752->st_size;
  int x8755 = PROT_READ;
  int x8756 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x8754, x8755, x8756, x8749, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x8742);
    /* VAR */ int ite20213 = 0;
    if(x58) {
      char x24471 = *x55;
      int x24472 = x24471!=('\0');
      ite20213 = x24472;
    } else {
      
      ite20213 = 0;
    };
    int x19224 = ite20213;
    if (!(x19224)) break; 
    
    /* VAR */ int x8764 = 0;
    int x8765 = x8764;
    int* x8766 = &x8765;
    char* x8767 = strntoi_unchecked(x55, x8766);
    x55 = x8767;
    /* VAR */ int x8769 = 0;
    int x8770 = x8769;
    int* x8771 = &x8770;
    char* x8772 = strntoi_unchecked(x55, x8771);
    x55 = x8772;
    char x8774 = *x55;
    /* VAR */ char x8775 = x8774;
    x55 += 1;
    x55 += 1;
    char x8778 = x8775;
    /* VAR */ double x8779 = 0.0;
    double x8780 = x8779;
    double* x8781 = &x8780;
    char* x8782 = strntod_unchecked(x55, x8781);
    x55 = x8782;
    /* VAR */ int x8784 = 0;
    int x8785 = x8784;
    int* x8786 = &x8785;
    char* x8787 = strntoi_unchecked(x55, x8786);
    x55 = x8787;
    /* VAR */ int x8789 = 0;
    int x8790 = x8789;
    int* x8791 = &x8790;
    char* x8792 = strntoi_unchecked(x55, x8791);
    x55 = x8792;
    /* VAR */ int x8794 = 0;
    int x8795 = x8794;
    int* x8796 = &x8795;
    char* x8797 = strntoi_unchecked(x55, x8796);
    x55 = x8797;
    int x8799 = x8785*(10000);
    int x8800 = x8790*(100);
    int x8801 = x8799+(x8800);
    int x8802 = x8801+(x8795);
    char* x9912 = (char*)malloc(16 * sizeof(char));
    memset(x9912, 0, 16 * sizeof(char));
    /* VAR */ char* x8804 = x55;
    while(1) {
      
      char x8805 = *x55;
      int x8806 = x8805!=('|');
      /* VAR */ int ite20266 = 0;
      if(x8806) {
        char x24523 = *x55;
        int x24524 = x24523!=('\n');
        ite20266 = x24524;
      } else {
        
        ite20266 = 0;
      };
      int x19270 = ite20266;
      if (!(x19270)) break; 
      
      x55 += 1;
    };
    char* x8812 = x8804;
    int x8813 = x55 - x8812;
    char* x8814 = x8804;
    char* x8815 = strncpy(x9912, x8814, x8813);
    x55 += 1;
    char* x9930 = (char*)malloc(16 * sizeof(char));
    memset(x9930, 0, 16 * sizeof(char));
    /* VAR */ char* x8823 = x55;
    while(1) {
      
      char x8824 = *x55;
      int x8825 = x8824!=('|');
      /* VAR */ int ite20289 = 0;
      if(x8825) {
        char x24545 = *x55;
        int x24546 = x24545!=('\n');
        ite20289 = x24546;
      } else {
        
        ite20289 = 0;
      };
      int x19286 = ite20289;
      if (!(x19286)) break; 
      
      x55 += 1;
    };
    char* x8831 = x8823;
    int x8832 = x55 - x8831;
    char* x8833 = x8823;
    char* x8834 = strncpy(x9930, x8833, x8832);
    x55 += 1;
    /* VAR */ int x8841 = 0;
    int x8842 = x8841;
    int* x8843 = &x8842;
    char* x8844 = strntoi_unchecked(x55, x8843);
    x55 = x8844;
    char* x9953 = (char*)malloc(80 * sizeof(char));
    memset(x9953, 0, 80 * sizeof(char));
    /* VAR */ char* x8847 = x55;
    while(1) {
      
      char x8848 = *x55;
      int x8849 = x8848!=('|');
      /* VAR */ int ite20317 = 0;
      if(x8849) {
        char x24572 = *x55;
        int x24573 = x24572!=('\n');
        ite20317 = x24573;
      } else {
        
        ite20317 = 0;
      };
      int x19307 = ite20317;
      if (!(x19307)) break; 
      
      x55 += 1;
    };
    char* x8855 = x8847;
    int x8856 = x55 - x8855;
    char* x8857 = x8847;
    char* x8858 = strncpy(x9953, x8857, x8856);
    x55 += 1;
    struct ORDERSRecord* x10556 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x10556, 0, 1 * sizeof(struct ORDERSRecord));
    x10556->O_ORDERKEY = x8765; x10556->O_CUSTKEY = x8770; x10556->O_ORDERSTATUS = x8778; x10556->O_TOTALPRICE = x8780; x10556->O_ORDERDATE = x8802; x10556->O_ORDERPRIORITY = x9912; x10556->O_CLERK = x9930; x10556->O_SHIPPRIORITY = x8842; x10556->O_COMMENT = x9953;
    int x91 = x56;
    int x14159 = x10556==(NULL);
    /* VAR */ int ite20340 = 0;
    if(x14159) {
      ite20340 = 1;
    } else {
      
      char* x24595 = x10556->O_ORDERPRIORITY;
      int x24596 = x24595==(NULL);
      /* VAR */ int x24597 = 0;
      if(x24596) {
        x24597 = 1;
      } else {
        
        int x24600 = strcmp(x24595, "");
        int x24601 = !(x24600);
        x24597 = x24601;
      };
      int x24604 = x24597;
      ite20340 = x24604;
    };
    int x19323 = ite20340;
    if(x19323) {
      *(x9855 + x91) = (const struct ORDERSRecord){0};
    } else {
      
      struct ORDERSRecord x9975 = *x10556;
      *(x9855 + x91) = x9975;
      struct ORDERSRecord* x9977 = &(x9855[x91]);
      x10556 = x9977;
    };
    int x93 = x56;
    int x94 = x93+(1);
    x56 = x94;
  };
  int x98 = 0;
  for(; x98 < 1 ; x98 += 1) {
    
    /* VAR */ int x25119 = 0;
    struct AGGRecord_OptimalString* x25120 = (struct AGGRecord_OptimalString*)malloc(10 * sizeof(struct AGGRecord_OptimalString));
    memset(x25120, 0, 10 * sizeof(struct AGGRecord_OptimalString));
    int x17598 = 0;
    for(; x17598 < 10 ; x17598 += 1) {
      
      *(x25120 + x17598) = (const struct AGGRecord_OptimalString){0};
    };
    struct LINEITEMRecord* x25126 = (struct LINEITEMRecord*)malloc(1048576 * sizeof(struct LINEITEMRecord));
    memset(x25126, 0, 1048576 * sizeof(struct LINEITEMRecord));
    /* VAR */ int x25127 = 0;
    double** x25128 = (double**)malloc(5 * sizeof(double*));
    memset(x25128, 0, 5 * sizeof(double*));
    /* VAR */ int x25129 = 0;
    while(1) {
      
      int x7851 = x25129;
      int x7852 = x7851<(5);
      if (!(x7852)) break; 
      
      int x7853 = x25129;
      double* x10001 = (double*)malloc(1 * sizeof(double));
      memset(x10001, 0, 1 * sizeof(double));
      *(x25128 + x7853) = x10001;
      int x7856 = x25129;
      int x7857 = x7856+(1);
      x25129 = x7857;
    };
    /* VAR */ int x25139 = 0;
    struct AGGRecord_OptimalString* x25140 = (struct AGGRecord_OptimalString*)malloc(5 * sizeof(struct AGGRecord_OptimalString));
    memset(x25140, 0, 5 * sizeof(struct AGGRecord_OptimalString));
    /* VAR */ int x25141 = 0;
    while(1) {
      
      int x7863 = x25141;
      int x7864 = x7863<(5);
      if (!(x7864)) break; 
      
      int x7865 = x25141;
      double* x7866 = x25128[x7865];
      struct AGGRecord_OptimalString* x10601 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x10601, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      x10601->key = ""; x10601->aggs = x7866; x10601->next = NULL;
      int x14206 = x10601==(NULL);
      /* VAR */ int ite20846 = 0;
      if(x14206) {
        ite20846 = 1;
      } else {
        
        char* x25154 = x10601->key;
        int x25155 = x25154==(NULL);
        /* VAR */ int x25156 = 0;
        if(x25155) {
          x25156 = 1;
        } else {
          
          int x25159 = strcmp(x25154, "");
          int x25160 = !(x25159);
          x25156 = x25160;
        };
        int x25163 = x25156;
        ite20846 = x25163;
      };
      int x19681 = ite20846;
      if(x19681) {
        *(x25140 + x7865) = (const struct AGGRecord_OptimalString){0};
      } else {
        
        struct AGGRecord_OptimalString x10017 = *x10601;
        *(x25140 + x7865) = x10017;
        struct AGGRecord_OptimalString* x10019 = &(x25140[x7865]);
        x10601 = x10019;
      };
      int x7869 = x25141;
      int x7870 = x7869+(1);
      x25141 = x7870;
    };
    /* VAR */ struct timeval x25176 = x8051;
    struct timeval x25177 = x25176;
    /* VAR */ struct timeval x25178 = x8051;
    struct timeval x25179 = x25178;
    /* VAR */ struct timeval x25180 = x8051;
    struct timeval x25181 = x25180;
    struct timeval* x25182 = &x25179;
    gettimeofday(x25182, NULL);
    /* VAR */ int x25184 = 0;
    /* VAR */ int x25185 = 0;
    int* x25198 = &(x25192);
    GTree* x25199 = g_tree_new(x25198);
    /* VAR */ int x25200 = 0;
    /* VAR */ int x25201 = 0;
    while(1) {
      
      int x25203 = x25185;
      int x25204 = x25203<(x8547);
      if (!(x25204)) break; 
      
      int x1138 = x25185;
      struct LINEITEMRecord* x160 = &(x9657[x1138]);
      int x162 = x160->L_COMMITDATE;
      int x163 = x160->L_RECEIPTDATE;
      int x164 = x162<(x163);
      if(x164) {
        int x165 = x160->L_ORDERKEY;
        int x2164 = x165%(1048576);
        struct LINEITEMRecord* x3294 = &(x25126[x2164]);
        /* VAR */ struct LINEITEMRecord* list3295 = x3294;
        struct LINEITEMRecord* x3296 = list3295;
        int x14260 = x3296==(NULL);
        /* VAR */ int ite20908 = 0;
        if(x14260) {
          ite20908 = 1;
        } else {
          
          char* x25220 = x3296->L_SHIPINSTRUCT;
          int x25221 = x25220==(NULL);
          /* VAR */ int x25222 = 0;
          if(x25221) {
            x25222 = 1;
          } else {
            
            int x25225 = strcmp(x25220, "");
            int x25226 = !(x25225);
            x25222 = x25226;
          };
          int x25229 = x25222;
          ite20908 = x25229;
        };
        int x19732 = ite20908;
        if(x19732) {
          list3295 = NULL;
          struct LINEITEMRecord* x3303 = list3295;
          int x14267 = x3303==(NULL);
          /* VAR */ int ite20923 = 0;
          if(x14267) {
            ite20923 = 1;
          } else {
            
            char* x25240 = x3303->L_SHIPINSTRUCT;
            int x25241 = x25240==(NULL);
            /* VAR */ int x25242 = 0;
            if(x25241) {
              x25242 = 1;
            } else {
              
              int x25245 = strcmp(x25240, "");
              int x25246 = !(x25245);
              x25242 = x25246;
            };
            int x25249 = x25242;
            ite20923 = x25249;
          };
          int x19738 = ite20923;
          if(x19738) {
            *(x25126 + x2164) = (const struct LINEITEMRecord){0};
          } else {
            
            struct LINEITEMRecord x10067 = *x3303;
            *(x25126 + x2164) = x10067;
            struct LINEITEMRecord* x10069 = &(x25126[x2164]);
            list3295 = x10069;
          };
        };
        int x14277 = x3294==(NULL);
        /* VAR */ int ite20941 = 0;
        if(x14277) {
          ite20941 = 1;
        } else {
          
          char* x25263 = x3294->L_SHIPINSTRUCT;
          int x25264 = x25263==(NULL);
          /* VAR */ int x25265 = 0;
          if(x25264) {
            x25265 = 1;
          } else {
            
            int x25268 = strcmp(x25263, "");
            int x25269 = !(x25268);
            x25265 = x25269;
          };
          int x25272 = x25265;
          ite20941 = x25272;
        };
        int x19747 = ite20941;
        if(x19747) {
          x160->next = NULL;
          int x14283 = x160==(NULL);
          /* VAR */ int ite20955 = 0;
          if(x14283) {
            ite20955 = 1;
          } else {
            
            char* x25282 = x160->L_SHIPINSTRUCT;
            int x25283 = x25282==(NULL);
            /* VAR */ int x25284 = 0;
            if(x25283) {
              x25284 = 1;
            } else {
              
              int x25287 = strcmp(x25282, "");
              int x25288 = !(x25287);
              x25284 = x25288;
            };
            int x25291 = x25284;
            ite20955 = x25291;
          };
          int x19752 = ite20955;
          if(x19752) {
            *(x25126 + x2164) = (const struct LINEITEMRecord){0};
          } else {
            
            struct LINEITEMRecord x10077 = *x160;
            *(x25126 + x2164) = x10077;
            struct LINEITEMRecord* x10079 = &(x25126[x2164]);
            x160 = x10079;
          };
          list3295 = x160;
        } else {
          
          struct LINEITEMRecord* x4228 = x3294->next;
          x160->next = x4228;
          x3294->next = x160;
        };
      };
      int x1147 = x25185;
      int x170 = x1147+(1);
      x25185 = x170;
    };
    while(1) {
      
      int x25309 = x25184;
      int x25310 = x25309<(x8742);
      if (!(x25310)) break; 
      
      int x1156 = x25184;
      struct ORDERSRecord* x179 = &(x9855[x1156]);
      int x181 = x179->O_ORDERDATE;
      int x182 = x181<(19931101);
      /* VAR */ int ite20987 = 0;
      if(x182) {
        int x25317 = x181>=(19930801);
        ite20987 = x25317;
      } else {
        
        ite20987 = 0;
      };
      int x19773 = ite20987;
      if(x19773) {
        int x185 = x179->O_ORDERKEY;
        int x2192 = x185%(1048576);
        struct LINEITEMRecord* x3331 = &(x25126[x2192]);
        int x14314 = x3331!=(NULL);
        /* VAR */ int ite21000 = 0;
        if(x14314) {
          char* x25329 = x3331->L_SHIPINSTRUCT;
          int x25330 = x25329!=(NULL);
          /* VAR */ int x25331 = 0;
          if(x25330) {
            int x25333 = strcmp(x25329, "");
            x25331 = x25333;
          } else {
            
            x25331 = 0;
          };
          int x25337 = x25331;
          ite21000 = x25337;
        } else {
          
          ite21000 = 0;
        };
        int x19780 = ite21000;
        if(x19780) {
          /* VAR */ struct LINEITEMRecord* current3646 = x3331;
          /* VAR */ int found3341 = 0;
          while(1) {
            
            struct LINEITEMRecord* x3649 = current3646;
            int x14323 = x3649!=(NULL);
            /* VAR */ int ite21017 = 0;
            if(x14323) {
              char* x25350 = x3649->L_SHIPINSTRUCT;
              int x25351 = x25350!=(NULL);
              /* VAR */ int x25352 = 0;
              if(x25351) {
                int x25354 = strcmp(x25350, "");
                x25352 = x25354;
              } else {
                
                x25352 = 0;
              };
              int x25358 = x25352;
              ite21017 = x25358;
            } else {
              
              ite21017 = 0;
            };
            int x19788 = ite21017;
            /* VAR */ int ite21028 = 0;
            if(x19788) {
              int x25365 = found3341;
              int x25366 = !(x25365);
              ite21028 = x25366;
            } else {
              
              ite21028 = 0;
            };
            int x19790 = ite21028;
            if (!(x19790)) break; 
            
            struct LINEITEMRecord* x3654 = current3646;
            int x3349 = x3654->L_ORDERKEY;
            int x3350 = x185==(x3349);
            if(x3350) {
              found3341 = 1;
            };
            struct LINEITEMRecord* x3660 = current3646;
            struct LINEITEMRecord* x4271 = x3660->next;
            current3646 = x4271;
          };
          int x3357 = found3341;
          if(x3357) {
            char* x230 = x179->O_ORDERPRIORITY;
            int x16404 = strlen(x230);
            /* VAR */ int x14342 = 0;
            /* VAR */ int x14343 = 0;
            while(1) {
              
              int x14344 = x14342;
              int x14345 = x14344<(x16404);
              if (!(x14345)) break; 
              
              int x14346 = x14343;
              int x14347 = x14342;
              char* x16412 = pointer_add(x230, x14347);
              char x16413 = *(x16412);
              int x14350 = x14346+(x16413);
              x14343 = x14350;
              int x14352 = x14342;
              int x14353 = x14352+(1);
              x14342 = x14353;
            };
            int x14356 = x14343;
            int x2620 = x14356&(9);
            struct AGGRecord_OptimalString* x3363 = &(x25120[x2620]);
            int x2622 = x25119;
            int x2623 = x2620>(x2622);
            if(x2623) {
              x25119 = x2620;
            };
            /* VAR */ struct AGGRecord_OptimalString* current3678 = x3363;
            /* VAR */ int found3373 = 0;
            while(1) {
              
              struct AGGRecord_OptimalString* x3681 = current3678;
              int x14367 = x3681!=(NULL);
              /* VAR */ int ite21075 = 0;
              if(x14367) {
                char* x25411 = x3681->key;
                int x25412 = x25411!=(NULL);
                /* VAR */ int x25413 = 0;
                if(x25412) {
                  int x25415 = strcmp(x25411, "");
                  x25413 = x25415;
                } else {
                  
                  x25413 = 0;
                };
                int x25419 = x25413;
                ite21075 = x25419;
              } else {
                
                ite21075 = 0;
              };
              int x19830 = ite21075;
              /* VAR */ int ite21086 = 0;
              if(x19830) {
                int x25426 = found3373;
                int x25427 = !(x25426);
                ite21086 = x25427;
              } else {
                
                ite21086 = 0;
              };
              int x19832 = ite21086;
              if (!(x19832)) break; 
              
              struct AGGRecord_OptimalString* x3686 = current3678;
              char* x3381 = x3686->key;
              int x14376 = strcmp(x3381, x230);
              int x14377 = !(x14376);
              if(x14377) {
                found3373 = 1;
              } else {
                
                struct AGGRecord_OptimalString* x3692 = current3678;
                struct AGGRecord_OptimalString* x4302 = x3692->next;
                current3678 = x4302;
              };
            };
            int x3389 = found3373;
            int x3390 = !(x3389);
            /* VAR */ struct AGGRecord_OptimalString** ite19845 = 0;
            if(x3390) {
              ite19845 = NULL;
            } else {
              
              struct AGGRecord_OptimalString* x19847 = current3678;
              ite19845 = x19847;
            };
            struct AGGRecord_OptimalString** x3396 = ite19845;
            int x6064 = x3396!=(NULL);
            /* VAR */ struct AGGRecord_OptimalString* ite19853 = 0;
            if(x6064) {
              ite19853 = x3396;
            } else {
              
              int x19855 = x25127;
              double* x19856 = x25128[x19855];
              int x19857 = x25127;
              int x19858 = x19857+(1);
              x25127 = x19858;
              int x19860 = x25139;
              struct AGGRecord_OptimalString* x19861 = &(x25140[x19860]);
              x19861->key = x230;
              x19861->aggs = x19856;
              x19861->next = NULL;
              int x19865 = x25139;
              int x19866 = x19865+(1);
              x25139 = x19866;
              int x19868 = x3363==(NULL);
              /* VAR */ int ite21131 = 0;
              if(x19868) {
                ite21131 = 1;
              } else {
                
                char* x25471 = x3363->key;
                int x25472 = x25471==(NULL);
                /* VAR */ int x25473 = 0;
                if(x25472) {
                  x25473 = 1;
                } else {
                  
                  int x25476 = strcmp(x25471, "");
                  int x25477 = !(x25476);
                  x25473 = x25477;
                };
                int x25480 = x25473;
                ite21131 = x25480;
              };
              int x19870 = ite21131;
              if(x19870) {
                x19861->next = NULL;
                int x14408 = x19861==(NULL);
                /* VAR */ int ite21145 = 0;
                if(x14408) {
                  ite21145 = 1;
                } else {
                  
                  char* x25490 = x19861->key;
                  int x25491 = x25490==(NULL);
                  /* VAR */ int x25492 = 0;
                  if(x25491) {
                    x25492 = 1;
                  } else {
                    
                    int x25495 = strcmp(x25490, "");
                    int x25496 = !(x25495);
                    x25492 = x25496;
                  };
                  int x25499 = x25492;
                  ite21145 = x25499;
                };
                int x19875 = ite21145;
                if(x19875) {
                  *(x25120 + x2620) = (const struct AGGRecord_OptimalString){0};
                } else {
                  
                  struct AGGRecord_OptimalString x10172 = *x19861;
                  *(x25120 + x2620) = x10172;
                  struct AGGRecord_OptimalString* x10174 = &(x25120[x2620]);
                  x19861 = x10174;
                };
              } else {
                
                struct AGGRecord_OptimalString* x4322 = x3363->next;
                x19861->next = x4322;
                x3363->next = x19861;
              };
              ite19853 = x19861;
            };
            struct AGGRecord_OptimalString* x2635 = ite19853;
            double* x235 = x2635->aggs;
            double x249 = x235[0];
            double x251 = x249+(1.0);
            *x235 = x251;
          };
        };
      };
      int x1235 = x25184;
      int x261 = x1235+(1);
      x25184 = x261;
    };
    int x25522 = x25119;
    int x25523 = x25522+(1);
    int x17894 = 0;
    for(; x17894 < x25523 ; x17894 += 1) {
      
      struct AGGRecord_OptimalString* x17895 = &(x25120[x17894]);
      /* VAR */ struct AGGRecord_OptimalString* x17896 = x17895;
      while(1) {
        
        struct AGGRecord_OptimalString* x3737 = x17896;
        int x14437 = x3737!=(NULL);
        /* VAR */ int ite21206 = 0;
        if(x14437) {
          char* x25559 = x3737->key;
          int x25560 = x25559!=(NULL);
          /* VAR */ int x25561 = 0;
          if(x25560) {
            int x25563 = strcmp(x25559, "");
            x25561 = x25563;
          } else {
            
            x25561 = 0;
          };
          int x25567 = x25561;
          ite21206 = x25567;
        } else {
          
          ite21206 = 0;
        };
        int x19918 = ite21206;
        if (!(x19918)) break; 
        
        struct AGGRecord_OptimalString* x3739 = x17896;
        struct AGGRecord_OptimalString* x4349 = x3739->next;
        struct AGGRecord_OptimalString* x3741 = x17896;
        g_tree_insert(x25199, x3741, x3741);
        x17896 = x4349;
      };
    };
    while(1) {
      
      int x1244 = x25200;
      int x272 = !(x1244);
      /* VAR */ int ite21225 = 0;
      if(x272) {
        int x25582 = g_tree_nnodes(x25199);
        int x25583 = x25582!=(0);
        ite21225 = x25583;
      } else {
        
        ite21225 = 0;
      };
      int x19928 = ite21225;
      if (!(x19928)) break; 
      
      void* x11980 = NULL;
      void** x11988 = &(x11980);
      g_tree_foreach(x25199, x11987, x11988);
      struct AGGRecord_OptimalString* x11990 = (struct AGGRecord_OptimalString*){x11980};
      int x11991 = g_tree_remove(x25199, x11990);
      if(0) {
        x25200 = 1;
      } else {
        
        char* x285 = x11990->key;
        double* x287 = x11990->aggs;
        double x288 = x287[0];
        printf("%s|%.0f\n", x285, x288);
        int x1262 = x25201;
        int x291 = x1262+(1);
        x25201 = x291;
      };
    };
    int x25609 = x25201;
    printf("(%d rows)\n", x25609);
    struct timeval* x25611 = &x25181;
    gettimeofday(x25611, NULL);
    struct timeval* x25613 = &x25177;
    struct timeval* x25614 = &x25181;
    struct timeval* x25615 = &x25179;
    long x25616 = timeval_subtract(x25613, x25614, x25615);
    printf("Generated code run in %ld milliseconds.\n", x25616);
  };
}
/* ----------- FUNCTIONS ----------- */
int x25192(struct AGGRecord_OptimalString* x139, struct AGGRecord_OptimalString* x140) {
  char* x141 = x139->key;
  char* x142 = x140->key;
  int x16287 = strcmp(x141, x142);
  return x16287; 
}

int x11987(void* x11981, void* x11982, void* x11983) {
  struct AGGRecord_OptimalString** x11984 = (struct AGGRecord_OptimalString**){x11983};
  struct AGGRecord_OptimalString* x11985 = (struct AGGRecord_OptimalString*){x11982};
  pointer_assign(x11984, x11985);
  return 1; 
}
