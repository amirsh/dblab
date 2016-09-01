#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_Int_ORDERSRecord;
  struct Q18GRPRecord;
  struct AGGRecord_Int;
  struct AGGRecord_Q18GRPRecord;
  
  struct AGGRecord_Int_ORDERSRecord {
  int key;
  double* aggs;
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
  
  struct Q18GRPRecord {
  char* C_NAME;
  int C_CUSTKEY;
  int O_ORDERKEY;
  int O_ORDERDATE;
  double O_TOTALPRICE;
  };
  
  struct AGGRecord_Int {
  int key;
  double* aggs;
  };
  
  struct AGGRecord_Q18GRPRecord {
  struct Q18GRPRecord* key;
  double* aggs;
  };
  
  


int x31606(struct Q18GRPRecord* x12329);

int x31634(struct Q18GRPRecord* x12334, struct Q18GRPRecord* x12335);

int x31678(void* x10844);

int x31681(void* x10847, void* x10848);

int x31688(void* x10854);

int x31691(void* x10857, void* x10858);

int x31698(int x12362);

int x31700(int x12367, int x12368);

int x31753(struct AGGRecord_Q18GRPRecord* x223, struct AGGRecord_Q18GRPRecord* x224);

int x12715(void* x12709, void* x12710, void* x12711);
/* GLOBAL VARS */

struct timeval x7045;
int main(int argc, char** argv) {
  FILE* x7566 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x7567 = 0;
  int x7568 = x7567;
  int* x7569 = &x7568;
  int x7570 = fscanf(x7566, "%d", x7569);
  pclose(x7566);
  int* x8960 = (int*)malloc(x7568 * sizeof(int));
  memset(x8960, 0, x7568 * sizeof(int));
  int* x8961 = (int*)malloc(x7568 * sizeof(int));
  memset(x8961, 0, x7568 * sizeof(int));
  int* x8962 = (int*)malloc(x7568 * sizeof(int));
  memset(x8962, 0, x7568 * sizeof(int));
  int* x8963 = (int*)malloc(x7568 * sizeof(int));
  memset(x8963, 0, x7568 * sizeof(int));
  double* x8964 = (double*)malloc(x7568 * sizeof(double));
  memset(x8964, 0, x7568 * sizeof(double));
  double* x8965 = (double*)malloc(x7568 * sizeof(double));
  memset(x8965, 0, x7568 * sizeof(double));
  double* x8966 = (double*)malloc(x7568 * sizeof(double));
  memset(x8966, 0, x7568 * sizeof(double));
  double* x8967 = (double*)malloc(x7568 * sizeof(double));
  memset(x8967, 0, x7568 * sizeof(double));
  char* x8968 = (char*)malloc(x7568 * sizeof(char));
  memset(x8968, 0, x7568 * sizeof(char));
  char* x8969 = (char*)malloc(x7568 * sizeof(char));
  memset(x8969, 0, x7568 * sizeof(char));
  int* x8970 = (int*)malloc(x7568 * sizeof(int));
  memset(x8970, 0, x7568 * sizeof(int));
  int* x8971 = (int*)malloc(x7568 * sizeof(int));
  memset(x8971, 0, x7568 * sizeof(int));
  int* x8972 = (int*)malloc(x7568 * sizeof(int));
  memset(x8972, 0, x7568 * sizeof(int));
  char** x8973 = (char**)malloc(x7568 * sizeof(char*));
  memset(x8973, 0, x7568 * sizeof(char*));
  char** x8974 = (char**)malloc(x7568 * sizeof(char*));
  memset(x8974, 0, x7568 * sizeof(char*));
  char** x8975 = (char**)malloc(x7568 * sizeof(char*));
  memset(x8975, 0, x7568 * sizeof(char*));
  int x7589 = O_RDONLY;
  int x7590 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x7589);
  struct stat x7591 = (struct stat){0};
  /* VAR */ struct stat x7592 = x7591;
  struct stat x7593 = x7592;
  struct stat* x7594 = &x7593;
  int x7595 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x7594);
  size_t x7596 = x7594->st_size;
  int x7597 = PROT_READ;
  int x7598 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x7596, x7597, x7598, x7590, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x7568);
    /* VAR */ int ite27005 = 0;
    if(x6) {
      char x30500 = *x3;
      int x30501 = x30500!=('\0');
      ite27005 = x30501;
    } else {
      
      ite27005 = 0;
    };
    int x25422 = ite27005;
    if (!(x25422)) break; 
    
    /* VAR */ int x7606 = 0;
    int x7607 = x7606;
    int* x7608 = &x7607;
    char* x7609 = strntoi_unchecked(x3, x7608);
    x3 = x7609;
    /* VAR */ int x7611 = 0;
    int x7612 = x7611;
    int* x7613 = &x7612;
    char* x7614 = strntoi_unchecked(x3, x7613);
    x3 = x7614;
    /* VAR */ int x7616 = 0;
    int x7617 = x7616;
    int* x7618 = &x7617;
    char* x7619 = strntoi_unchecked(x3, x7618);
    x3 = x7619;
    /* VAR */ int x7621 = 0;
    int x7622 = x7621;
    int* x7623 = &x7622;
    char* x7624 = strntoi_unchecked(x3, x7623);
    x3 = x7624;
    /* VAR */ double x7626 = 0.0;
    double x7627 = x7626;
    double* x7628 = &x7627;
    char* x7629 = strntod_unchecked(x3, x7628);
    x3 = x7629;
    /* VAR */ double x7631 = 0.0;
    double x7632 = x7631;
    double* x7633 = &x7632;
    char* x7634 = strntod_unchecked(x3, x7633);
    x3 = x7634;
    /* VAR */ double x7636 = 0.0;
    double x7637 = x7636;
    double* x7638 = &x7637;
    char* x7639 = strntod_unchecked(x3, x7638);
    x3 = x7639;
    /* VAR */ double x7641 = 0.0;
    double x7642 = x7641;
    double* x7643 = &x7642;
    char* x7644 = strntod_unchecked(x3, x7643);
    x3 = x7644;
    char x7646 = *x3;
    /* VAR */ char x7647 = x7646;
    x3 += 1;
    x3 += 1;
    char x7650 = x7647;
    char x7651 = *x3;
    /* VAR */ char x7652 = x7651;
    x3 += 1;
    x3 += 1;
    char x7655 = x7652;
    /* VAR */ int x7656 = 0;
    int x7657 = x7656;
    int* x7658 = &x7657;
    char* x7659 = strntoi_unchecked(x3, x7658);
    x3 = x7659;
    /* VAR */ int x7661 = 0;
    int x7662 = x7661;
    int* x7663 = &x7662;
    char* x7664 = strntoi_unchecked(x3, x7663);
    x3 = x7664;
    /* VAR */ int x7666 = 0;
    int x7667 = x7666;
    int* x7668 = &x7667;
    char* x7669 = strntoi_unchecked(x3, x7668);
    x3 = x7669;
    int x7671 = x7657*(10000);
    int x7672 = x7662*(100);
    int x7673 = x7671+(x7672);
    int x7674 = x7673+(x7667);
    /* VAR */ int x7675 = 0;
    int x7676 = x7675;
    int* x7677 = &x7676;
    char* x7678 = strntoi_unchecked(x3, x7677);
    x3 = x7678;
    /* VAR */ int x7680 = 0;
    int x7681 = x7680;
    int* x7682 = &x7681;
    char* x7683 = strntoi_unchecked(x3, x7682);
    x3 = x7683;
    /* VAR */ int x7685 = 0;
    int x7686 = x7685;
    int* x7687 = &x7686;
    char* x7688 = strntoi_unchecked(x3, x7687);
    x3 = x7688;
    int x7690 = x7676*(10000);
    int x7691 = x7681*(100);
    int x7692 = x7690+(x7691);
    int x7693 = x7692+(x7686);
    /* VAR */ int x7694 = 0;
    int x7695 = x7694;
    int* x7696 = &x7695;
    char* x7697 = strntoi_unchecked(x3, x7696);
    x3 = x7697;
    /* VAR */ int x7699 = 0;
    int x7700 = x7699;
    int* x7701 = &x7700;
    char* x7702 = strntoi_unchecked(x3, x7701);
    x3 = x7702;
    /* VAR */ int x7704 = 0;
    int x7705 = x7704;
    int* x7706 = &x7705;
    char* x7707 = strntoi_unchecked(x3, x7706);
    x3 = x7707;
    int x7709 = x7695*(10000);
    int x7710 = x7700*(100);
    int x7711 = x7709+(x7710);
    int x7712 = x7711+(x7705);
    char* x9101 = (char*)malloc(26 * sizeof(char));
    memset(x9101, 0, 26 * sizeof(char));
    /* VAR */ char* x7714 = x3;
    while(1) {
      
      char x7715 = *x3;
      int x7716 = x7715!=('|');
      /* VAR */ int ite27126 = 0;
      if(x7716) {
        char x30620 = *x3;
        int x30621 = x30620!=('\n');
        ite27126 = x30621;
      } else {
        
        ite27126 = 0;
      };
      int x25536 = ite27126;
      if (!(x25536)) break; 
      
      x3 += 1;
    };
    char* x7722 = x7714;
    int x7723 = x3 - x7722;
    char* x7724 = x7714;
    char* x7725 = strncpy(x9101, x7724, x7723);
    x3 += 1;
    char* x9119 = (char*)malloc(11 * sizeof(char));
    memset(x9119, 0, 11 * sizeof(char));
    /* VAR */ char* x7733 = x3;
    while(1) {
      
      char x7734 = *x3;
      int x7735 = x7734!=('|');
      /* VAR */ int ite27149 = 0;
      if(x7735) {
        char x30642 = *x3;
        int x30643 = x30642!=('\n');
        ite27149 = x30643;
      } else {
        
        ite27149 = 0;
      };
      int x25552 = ite27149;
      if (!(x25552)) break; 
      
      x3 += 1;
    };
    char* x7741 = x7733;
    int x7742 = x3 - x7741;
    char* x7743 = x7733;
    char* x7744 = strncpy(x9119, x7743, x7742);
    x3 += 1;
    char* x9137 = (char*)malloc(45 * sizeof(char));
    memset(x9137, 0, 45 * sizeof(char));
    /* VAR */ char* x7752 = x3;
    while(1) {
      
      char x7753 = *x3;
      int x7754 = x7753!=('|');
      /* VAR */ int ite27172 = 0;
      if(x7754) {
        char x30664 = *x3;
        int x30665 = x30664!=('\n');
        ite27172 = x30665;
      } else {
        
        ite27172 = 0;
      };
      int x25568 = ite27172;
      if (!(x25568)) break; 
      
      x3 += 1;
    };
    char* x7760 = x7752;
    int x7761 = x3 - x7760;
    char* x7762 = x7752;
    char* x7763 = strncpy(x9137, x7762, x7761);
    x3 += 1;
    int x47 = x4;
    *(x8960 + x47) = x7607;
    *(x8961 + x47) = x7612;
    *(x8962 + x47) = x7617;
    *(x8963 + x47) = x7622;
    *(x8964 + x47) = x7627;
    *(x8965 + x47) = x7632;
    *(x8966 + x47) = x7637;
    *(x8967 + x47) = x7642;
    *(x8968 + x47) = x7650;
    *(x8969 + x47) = x7655;
    *(x8970 + x47) = x7674;
    *(x8971 + x47) = x7693;
    *(x8972 + x47) = x7712;
    *(x8973 + x47) = x9101;
    *(x8974 + x47) = x9119;
    *(x8975 + x47) = x9137;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x7790 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x7791 = 0;
  int x7792 = x7791;
  int* x7793 = &x7792;
  int x7794 = fscanf(x7790, "%d", x7793);
  pclose(x7790);
  int* x9181 = (int*)malloc(x7792 * sizeof(int));
  memset(x9181, 0, x7792 * sizeof(int));
  int* x9182 = (int*)malloc(x7792 * sizeof(int));
  memset(x9182, 0, x7792 * sizeof(int));
  char* x9183 = (char*)malloc(x7792 * sizeof(char));
  memset(x9183, 0, x7792 * sizeof(char));
  double* x9184 = (double*)malloc(x7792 * sizeof(double));
  memset(x9184, 0, x7792 * sizeof(double));
  int* x9185 = (int*)malloc(x7792 * sizeof(int));
  memset(x9185, 0, x7792 * sizeof(int));
  char** x9186 = (char**)malloc(x7792 * sizeof(char*));
  memset(x9186, 0, x7792 * sizeof(char*));
  char** x9187 = (char**)malloc(x7792 * sizeof(char*));
  memset(x9187, 0, x7792 * sizeof(char*));
  int* x9188 = (int*)malloc(x7792 * sizeof(int));
  memset(x9188, 0, x7792 * sizeof(int));
  char** x9189 = (char**)malloc(x7792 * sizeof(char*));
  memset(x9189, 0, x7792 * sizeof(char*));
  int x7806 = O_RDONLY;
  int x7807 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x7806);
  /* VAR */ struct stat x7808 = x7591;
  struct stat x7809 = x7808;
  struct stat* x7810 = &x7809;
  int x7811 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x7810);
  size_t x7812 = x7810->st_size;
  int x7813 = PROT_READ;
  int x7814 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x7812, x7813, x7814, x7807, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x7792);
    /* VAR */ int ite27239 = 0;
    if(x58) {
      char x30730 = *x55;
      int x30731 = x30730!=('\0');
      ite27239 = x30731;
    } else {
      
      ite27239 = 0;
    };
    int x25628 = ite27239;
    if (!(x25628)) break; 
    
    /* VAR */ int x7822 = 0;
    int x7823 = x7822;
    int* x7824 = &x7823;
    char* x7825 = strntoi_unchecked(x55, x7824);
    x55 = x7825;
    /* VAR */ int x7827 = 0;
    int x7828 = x7827;
    int* x7829 = &x7828;
    char* x7830 = strntoi_unchecked(x55, x7829);
    x55 = x7830;
    char x7832 = *x55;
    /* VAR */ char x7833 = x7832;
    x55 += 1;
    x55 += 1;
    char x7836 = x7833;
    /* VAR */ double x7837 = 0.0;
    double x7838 = x7837;
    double* x7839 = &x7838;
    char* x7840 = strntod_unchecked(x55, x7839);
    x55 = x7840;
    /* VAR */ int x7842 = 0;
    int x7843 = x7842;
    int* x7844 = &x7843;
    char* x7845 = strntoi_unchecked(x55, x7844);
    x55 = x7845;
    /* VAR */ int x7847 = 0;
    int x7848 = x7847;
    int* x7849 = &x7848;
    char* x7850 = strntoi_unchecked(x55, x7849);
    x55 = x7850;
    /* VAR */ int x7852 = 0;
    int x7853 = x7852;
    int* x7854 = &x7853;
    char* x7855 = strntoi_unchecked(x55, x7854);
    x55 = x7855;
    int x7857 = x7843*(10000);
    int x7858 = x7848*(100);
    int x7859 = x7857+(x7858);
    int x7860 = x7859+(x7853);
    char* x9246 = (char*)malloc(16 * sizeof(char));
    memset(x9246, 0, 16 * sizeof(char));
    /* VAR */ char* x7862 = x55;
    while(1) {
      
      char x7863 = *x55;
      int x7864 = x7863!=('|');
      /* VAR */ int ite27292 = 0;
      if(x7864) {
        char x30782 = *x55;
        int x30783 = x30782!=('\n');
        ite27292 = x30783;
      } else {
        
        ite27292 = 0;
      };
      int x25674 = ite27292;
      if (!(x25674)) break; 
      
      x55 += 1;
    };
    char* x7870 = x7862;
    int x7871 = x55 - x7870;
    char* x7872 = x7862;
    char* x7873 = strncpy(x9246, x7872, x7871);
    x55 += 1;
    char* x9264 = (char*)malloc(16 * sizeof(char));
    memset(x9264, 0, 16 * sizeof(char));
    /* VAR */ char* x7881 = x55;
    while(1) {
      
      char x7882 = *x55;
      int x7883 = x7882!=('|');
      /* VAR */ int ite27315 = 0;
      if(x7883) {
        char x30804 = *x55;
        int x30805 = x30804!=('\n');
        ite27315 = x30805;
      } else {
        
        ite27315 = 0;
      };
      int x25690 = ite27315;
      if (!(x25690)) break; 
      
      x55 += 1;
    };
    char* x7889 = x7881;
    int x7890 = x55 - x7889;
    char* x7891 = x7881;
    char* x7892 = strncpy(x9264, x7891, x7890);
    x55 += 1;
    /* VAR */ int x7899 = 0;
    int x7900 = x7899;
    int* x7901 = &x7900;
    char* x7902 = strntoi_unchecked(x55, x7901);
    x55 = x7902;
    char* x9287 = (char*)malloc(80 * sizeof(char));
    memset(x9287, 0, 80 * sizeof(char));
    /* VAR */ char* x7905 = x55;
    while(1) {
      
      char x7906 = *x55;
      int x7907 = x7906!=('|');
      /* VAR */ int ite27343 = 0;
      if(x7907) {
        char x30831 = *x55;
        int x30832 = x30831!=('\n');
        ite27343 = x30832;
      } else {
        
        ite27343 = 0;
      };
      int x25711 = ite27343;
      if (!(x25711)) break; 
      
      x55 += 1;
    };
    char* x7913 = x7905;
    int x7914 = x55 - x7913;
    char* x7915 = x7905;
    char* x7916 = strncpy(x9287, x7915, x7914);
    x55 += 1;
    int x91 = x56;
    *(x9181 + x91) = x7823;
    *(x9182 + x91) = x7828;
    *(x9183 + x91) = x7836;
    *(x9184 + x91) = x7838;
    *(x9185 + x91) = x7860;
    *(x9186 + x91) = x9246;
    *(x9187 + x91) = x9264;
    *(x9188 + x91) = x7900;
    *(x9189 + x91) = x9287;
    int x93 = x56;
    int x94 = x93+(1);
    x56 = x94;
  };
  FILE* x7936 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x7937 = 0;
  int x7938 = x7937;
  int* x7939 = &x7938;
  int x7940 = fscanf(x7936, "%d", x7939);
  pclose(x7936);
  int* x9324 = (int*)malloc(x7938 * sizeof(int));
  memset(x9324, 0, x7938 * sizeof(int));
  char** x9325 = (char**)malloc(x7938 * sizeof(char*));
  memset(x9325, 0, x7938 * sizeof(char*));
  char** x9326 = (char**)malloc(x7938 * sizeof(char*));
  memset(x9326, 0, x7938 * sizeof(char*));
  int* x9327 = (int*)malloc(x7938 * sizeof(int));
  memset(x9327, 0, x7938 * sizeof(int));
  char** x9328 = (char**)malloc(x7938 * sizeof(char*));
  memset(x9328, 0, x7938 * sizeof(char*));
  double* x9329 = (double*)malloc(x7938 * sizeof(double));
  memset(x9329, 0, x7938 * sizeof(double));
  char** x9330 = (char**)malloc(x7938 * sizeof(char*));
  memset(x9330, 0, x7938 * sizeof(char*));
  char** x9331 = (char**)malloc(x7938 * sizeof(char*));
  memset(x9331, 0, x7938 * sizeof(char*));
  int x7951 = O_RDONLY;
  int x7952 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x7951);
  /* VAR */ struct stat x7953 = x7591;
  struct stat x7954 = x7953;
  struct stat* x7955 = &x7954;
  int x7956 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x7955);
  size_t x7957 = x7955->st_size;
  int x7958 = PROT_READ;
  int x7959 = MAP_PRIVATE;
  char* x99 = mmap(NULL, x7957, x7958, x7959, x7952, 0);
  /* VAR */ int x100 = 0;
  while(1) {
    
    int x101 = x100;
    int x102 = x101<(x7938);
    /* VAR */ int ite27402 = 0;
    if(x102) {
      char x30889 = *x99;
      int x30890 = x30889!=('\0');
      ite27402 = x30890;
    } else {
      
      ite27402 = 0;
    };
    int x25763 = ite27402;
    if (!(x25763)) break; 
    
    /* VAR */ int x7967 = 0;
    int x7968 = x7967;
    int* x7969 = &x7968;
    char* x7970 = strntoi_unchecked(x99, x7969);
    x99 = x7970;
    char* x9354 = (char*)malloc(26 * sizeof(char));
    memset(x9354, 0, 26 * sizeof(char));
    /* VAR */ char* x7973 = x99;
    while(1) {
      
      char x7974 = *x99;
      int x7975 = x7974!=('|');
      /* VAR */ int ite27421 = 0;
      if(x7975) {
        char x30907 = *x99;
        int x30908 = x30907!=('\n');
        ite27421 = x30908;
      } else {
        
        ite27421 = 0;
      };
      int x25775 = ite27421;
      if (!(x25775)) break; 
      
      x99 += 1;
    };
    char* x7981 = x7973;
    int x7982 = x99 - x7981;
    char* x7983 = x7973;
    char* x7984 = strncpy(x9354, x7983, x7982);
    x99 += 1;
    char* x9372 = (char*)malloc(41 * sizeof(char));
    memset(x9372, 0, 41 * sizeof(char));
    /* VAR */ char* x7992 = x99;
    while(1) {
      
      char x7993 = *x99;
      int x7994 = x7993!=('|');
      /* VAR */ int ite27444 = 0;
      if(x7994) {
        char x30929 = *x99;
        int x30930 = x30929!=('\n');
        ite27444 = x30930;
      } else {
        
        ite27444 = 0;
      };
      int x25791 = ite27444;
      if (!(x25791)) break; 
      
      x99 += 1;
    };
    char* x8000 = x7992;
    int x8001 = x99 - x8000;
    char* x8002 = x7992;
    char* x8003 = strncpy(x9372, x8002, x8001);
    x99 += 1;
    /* VAR */ int x8010 = 0;
    int x8011 = x8010;
    int* x8012 = &x8011;
    char* x8013 = strntoi_unchecked(x99, x8012);
    x99 = x8013;
    char* x9395 = (char*)malloc(16 * sizeof(char));
    memset(x9395, 0, 16 * sizeof(char));
    /* VAR */ char* x8016 = x99;
    while(1) {
      
      char x8017 = *x99;
      int x8018 = x8017!=('|');
      /* VAR */ int ite27472 = 0;
      if(x8018) {
        char x30956 = *x99;
        int x30957 = x30956!=('\n');
        ite27472 = x30957;
      } else {
        
        ite27472 = 0;
      };
      int x25812 = ite27472;
      if (!(x25812)) break; 
      
      x99 += 1;
    };
    char* x8024 = x8016;
    int x8025 = x99 - x8024;
    char* x8026 = x8016;
    char* x8027 = strncpy(x9395, x8026, x8025);
    x99 += 1;
    /* VAR */ double x8034 = 0.0;
    double x8035 = x8034;
    double* x8036 = &x8035;
    char* x8037 = strntod_unchecked(x99, x8036);
    x99 = x8037;
    char* x9418 = (char*)malloc(11 * sizeof(char));
    memset(x9418, 0, 11 * sizeof(char));
    /* VAR */ char* x8040 = x99;
    while(1) {
      
      char x8041 = *x99;
      int x8042 = x8041!=('|');
      /* VAR */ int ite27500 = 0;
      if(x8042) {
        char x30983 = *x99;
        int x30984 = x30983!=('\n');
        ite27500 = x30984;
      } else {
        
        ite27500 = 0;
      };
      int x25833 = ite27500;
      if (!(x25833)) break; 
      
      x99 += 1;
    };
    char* x8048 = x8040;
    int x8049 = x99 - x8048;
    char* x8050 = x8040;
    char* x8051 = strncpy(x9418, x8050, x8049);
    x99 += 1;
    char* x9436 = (char*)malloc(118 * sizeof(char));
    memset(x9436, 0, 118 * sizeof(char));
    /* VAR */ char* x8059 = x99;
    while(1) {
      
      char x8060 = *x99;
      int x8061 = x8060!=('|');
      /* VAR */ int ite27523 = 0;
      if(x8061) {
        char x31005 = *x99;
        int x31006 = x31005!=('\n');
        ite27523 = x31006;
      } else {
        
        ite27523 = 0;
      };
      int x25849 = ite27523;
      if (!(x25849)) break; 
      
      x99 += 1;
    };
    char* x8067 = x8059;
    int x8068 = x99 - x8067;
    char* x8069 = x8059;
    char* x8070 = strncpy(x9436, x8069, x8068);
    x99 += 1;
    int x149 = x100;
    *(x9324 + x149) = x7968;
    *(x9325 + x149) = x9354;
    *(x9326 + x149) = x9372;
    *(x9327 + x149) = x8011;
    *(x9328 + x149) = x9395;
    *(x9329 + x149) = x8035;
    *(x9330 + x149) = x9418;
    *(x9331 + x149) = x9436;
    int x151 = x100;
    int x152 = x151+(1);
    x100 = x152;
  };
  int x156 = 0;
  for(; x156 < 1 ; x156 += 1) {
    
    GHashTable* x31677 = g_hash_table_new(x31606, x31634);
    void*** x31685 = (void***){x31678};
    int* x31686 = (int*){x31681};
    GHashTable* x31687 = g_hash_table_new(x31685, x31686);
    void*** x31695 = (void***){x31688};
    int* x31696 = (int*){x31691};
    GHashTable* x31697 = g_hash_table_new(x31695, x31696);
    GHashTable* x31704 = g_hash_table_new(x31698, x31700);
    /* VAR */ struct timeval x31705 = x7045;
    struct timeval x31706 = x31705;
    /* VAR */ struct timeval x31707 = x7045;
    struct timeval x31708 = x31707;
    /* VAR */ struct timeval x31709 = x7045;
    struct timeval x31710 = x31709;
    struct timeval* x31711 = &x31708;
    gettimeofday(x31711, NULL);
    /* VAR */ int x31713 = 0;
    /* VAR */ int x31714 = 0;
    /* VAR */ int x31715 = 0;
    int* x31790 = &(x31753);
    GTree* x31791 = g_tree_new(x31790);
    /* VAR */ int x31792 = 0;
    /* VAR */ int x31793 = 0;
    while(1) {
      
      int x31795 = x31715;
      int x31796 = x31795<(x7568);
      if (!(x31796)) break; 
      
      int x1948 = x31715;
      int x3821 = x8960[x1948];
      void* x13354 = g_hash_table_lookup(x31704, x3821);
      int x12429 = x13354==(NULL);
      /* VAR */ struct AGGRecord_Int* ite26600 = 0;
      if(x12429) {
        double* x26601 = (double*)malloc(1 * sizeof(double));
        memset(x26601, 0, 1 * sizeof(double));
        struct AGGRecord_Int* x26602 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
        memset(x26602, 0, 1 * sizeof(struct AGGRecord_Int));
        x26602->key = x3821; x26602->aggs = x26601;
        g_hash_table_insert(x31704, x3821, x26602);
        ite26600 = x26602;
      } else {
        
        ite26600 = x13354;
      };
      struct AGGRecord_Int* x12439 = ite26600;
      double* x268 = x12439->aggs;
      double x282 = x268[0];
      double x3828 = x8964[x1948];
      double x284 = x282+(x3828);
      *x268 = x284;
      int x1977 = x31715;
      int x291 = x1977+(1);
      x31715 = x291;
    };
    GList* x31848 = g_hash_table_get_keys(x31704);
    /* VAR */ GList* x31849 = x31848;
    int x31850 = g_hash_table_size(x31704);
    int x23672 = 0;
    for(; x23672 < x31850 ; x23672 += 1) {
      
      GList* x23673 = x31849;
      void* x23674 = g_list_nth_data(x23673, 0);
      GList* x23675 = g_list_next(x23673);
      x31849 = x23675;
      void* x23677 = g_hash_table_lookup(x31704, x23674);
      struct AGGRecord_Int* x23679 = (struct AGGRecord_Int*){x23677};
      double* x23680 = x23679->aggs;
      double x23681 = x23680[0];
      int x23682 = x23681>(300.0);
      if(x23682) {
        int x301 = x23679->key;
        void* x10924 = (void*){x301};
        void* x10925 = (void*){x23679};
        void* x10926 = g_hash_table_lookup(x31697, x10924);
        GList** x10927 = (GList**){x10926};
        GList** x10928 = NULL;
        int x10929 = x10927==(x10928);
        /* VAR */ GList** ite26703 = 0;
        if(x10929) {
          GList** x26704 = malloc(8);
          GList* x26705 = NULL;
          pointer_assign(x26704, x26705);
          ite26703 = x26704;
        } else {
          
          ite26703 = x10927;
        };
        GList** x10933 = ite26703;
        GList* x10934 = *(x10933);
        GList* x10935 = g_list_prepend(x10934, x10925);
        pointer_assign(x10933, x10935);
        void* x10937 = (void*){x10933};
        g_hash_table_insert(x31697, x10924, x10937);
      };
    };
    while(1) {
      
      int x31919 = x31713;
      int x31920 = x31919<(x7792);
      if (!(x31920)) break; 
      
      int x1997 = x31713;
      int x3853 = x9181[x1997];
      void* x10946 = (void*){x3853};
      void* x10947 = g_hash_table_lookup(x31697, x10946);
      GList** x10948 = (GList**){x10947};
      int x17100 = x10948!=(NULL);
      if(x17100) {
        GList* x12553 = *(x10948);
        /* VAR */ GList* x12554 = x12553;
        while(1) {
          
          GList* x12555 = x12554;
          GList* x12556 = NULL;
          int x12557 = x12555!=(x12556);
          if (!(x12557)) break; 
          
          GList* x12558 = x12554;
          void* x12559 = g_list_nth_data(x12558, 0);
          struct AGGRecord_Int* x12560 = (struct AGGRecord_Int*){x12559};
          GList* x12561 = x12554;
          GList* x12562 = g_list_next(x12561);
          x12554 = x12562;
          double* x12564 = x12560->aggs;
          int x12565 = x12560->key;
          int x12566 = x3853==(x12565);
          if(x12566) {
            int x3865 = x9182[x1997];
            char x3867 = x9183[x1997];
            double x3869 = x9184[x1997];
            int x3871 = x9185[x1997];
            char* x3873 = x9186[x1997];
            char* x3875 = x9187[x1997];
            int x3877 = x9188[x1997];
            char* x3879 = x9189[x1997];
            struct AGGRecord_Int_ORDERSRecord* x10241 = (struct AGGRecord_Int_ORDERSRecord*)malloc(1 * sizeof(struct AGGRecord_Int_ORDERSRecord));
            memset(x10241, 0, 1 * sizeof(struct AGGRecord_Int_ORDERSRecord));
            x10241->key = x12565; x10241->aggs = x12564; x10241->O_ORDERKEY = x3853; x10241->O_CUSTKEY = x3865; x10241->O_ORDERSTATUS = x3867; x10241->O_TOTALPRICE = x3869; x10241->O_ORDERDATE = x3871; x10241->O_ORDERPRIORITY = x3873; x10241->O_CLERK = x3875; x10241->O_SHIPPRIORITY = x3877; x10241->O_COMMENT = x3879;
            int x338 = x10241->O_CUSTKEY;
            void* x10971 = (void*){x338};
            void* x10972 = (void*){x10241};
            void* x10973 = g_hash_table_lookup(x31687, x10971);
            GList** x10974 = (GList**){x10973};
            GList** x10975 = NULL;
            int x10976 = x10974==(x10975);
            /* VAR */ GList** ite26798 = 0;
            if(x10976) {
              GList** x26799 = malloc(8);
              GList* x26800 = NULL;
              pointer_assign(x26799, x26800);
              ite26798 = x26799;
            } else {
              
              ite26798 = x10974;
            };
            GList** x10980 = ite26798;
            GList* x10981 = *(x10980);
            GList* x10982 = g_list_prepend(x10981, x10972);
            pointer_assign(x10980, x10982);
            void* x10984 = (void*){x10980};
            g_hash_table_insert(x31687, x10971, x10984);
          };
        };
      };
      int x2043 = x31713;
      int x346 = x2043+(1);
      x31713 = x346;
    };
    while(1) {
      
      int x32018 = x31714;
      int x32019 = x32018<(x7938);
      if (!(x32019)) break; 
      
      int x2053 = x31714;
      int x3896 = x9324[x2053];
      void* x10996 = (void*){x3896};
      void* x10997 = g_hash_table_lookup(x31687, x10996);
      GList** x10998 = (GList**){x10997};
      int x17190 = x10998!=(NULL);
      if(x17190) {
        GList* x12642 = *(x10998);
        /* VAR */ GList* x12643 = x12642;
        while(1) {
          
          GList* x12644 = x12643;
          GList* x12645 = NULL;
          int x12646 = x12644!=(x12645);
          if (!(x12646)) break; 
          
          GList* x12647 = x12643;
          void* x12648 = g_list_nth_data(x12647, 0);
          struct AGGRecord_Int_ORDERSRecord* x12649 = (struct AGGRecord_Int_ORDERSRecord*){x12648};
          GList* x12650 = x12643;
          GList* x12651 = g_list_next(x12650);
          x12643 = x12651;
          int x12653 = x12649->O_CUSTKEY;
          int x12654 = x12653==(x3896);
          if(x12654) {
            double* x981 = x12649->aggs;
            int x982 = x12649->O_ORDERKEY;
            double x984 = x12649->O_TOTALPRICE;
            int x985 = x12649->O_ORDERDATE;
            char* x3917 = x9325[x2053];
            struct Q18GRPRecord* x10270 = (struct Q18GRPRecord*)malloc(1 * sizeof(struct Q18GRPRecord));
            memset(x10270, 0, 1 * sizeof(struct Q18GRPRecord));
            x10270->C_NAME = x3917; x10270->C_CUSTKEY = x3896; x10270->O_ORDERKEY = x982; x10270->O_ORDERDATE = x985; x10270->O_TOTALPRICE = x984;
            void* x12664 = g_hash_table_lookup(x31677, x10270);
            int x12626 = x12664==(NULL);
            /* VAR */ struct AGGRecord_Q18GRPRecord* ite26880 = 0;
            if(x12626) {
              double* x26881 = (double*)malloc(1 * sizeof(double));
              memset(x26881, 0, 1 * sizeof(double));
              struct AGGRecord_Q18GRPRecord* x26882 = (struct AGGRecord_Q18GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q18GRPRecord));
              memset(x26882, 0, 1 * sizeof(struct AGGRecord_Q18GRPRecord));
              x26882->key = x10270; x26882->aggs = x26881;
              g_hash_table_insert(x31677, x10270, x26882);
              ite26880 = x26882;
            } else {
              
              ite26880 = x12664;
            };
            struct AGGRecord_Q18GRPRecord* x12636 = ite26880;
            double* x423 = x12636->aggs;
            double x437 = x423[0];
            double x439 = x981[0];
            double x440 = x437+(x439);
            *x423 = x440;
          };
        };
      };
      int x2179 = x31714;
      int x451 = x2179+(1);
      x31714 = x451;
    };
    GList* x32106 = g_hash_table_get_keys(x31677);
    /* VAR */ GList* x32107 = x32106;
    int x32108 = g_hash_table_size(x31677);
    int x23884 = 0;
    for(; x23884 < x32108 ; x23884 += 1) {
      
      GList* x23885 = x32107;
      void* x23886 = g_list_nth_data(x23885, 0);
      GList* x23887 = g_list_next(x23885);
      x32107 = x23887;
      void* x23889 = g_hash_table_lookup(x31677, x23886);
      struct AGGRecord_Q18GRPRecord* x23891 = (struct AGGRecord_Q18GRPRecord*){x23889};
      g_tree_insert(x31791, x23891, x23891);
    };
    while(1) {
      
      int x2188 = x31792;
      int x462 = !(x2188);
      /* VAR */ int ite28668 = 0;
      if(x462) {
        int x32133 = g_tree_nnodes(x31791);
        int x32134 = x32133!=(0);
        ite28668 = x32134;
      } else {
        
        ite28668 = 0;
      };
      int x26928 = ite28668;
      if (!(x26928)) break; 
      
      void* x12708 = NULL;
      void** x12716 = &(x12708);
      g_tree_foreach(x31791, x12715, x12716);
      struct AGGRecord_Q18GRPRecord* x12718 = (struct AGGRecord_Q18GRPRecord*){x12708};
      int x12719 = g_tree_remove(x31791, x12718);
      int x2196 = x31793;
      int x472 = x2196>=(100);
      if(x472) {
        x31792 = 1;
      } else {
        
        double* x474 = x12718->aggs;
        struct Q18GRPRecord* x475 = x12718->key;
        char* x476 = x475->C_NAME;
        int x478 = x475->C_CUSTKEY;
        int x479 = x475->O_ORDERKEY;
        int x480 = x475->O_ORDERDATE;
        char* x481 = ltoa(x480);
        double x482 = x475->O_TOTALPRICE;
        double x483 = x474[0];
        printf("%s|%d|%d|%s|%.2f|%.2f\n", x476, x478, x479, x481, x482, x483);
        int x2211 = x31793;
        int x486 = x2211+(1);
        x31793 = x486;
      };
    };
    int x32168 = x31793;
    printf("(%d rows)\n", x32168);
    struct timeval* x32170 = &x31710;
    gettimeofday(x32170, NULL);
    struct timeval* x32172 = &x31706;
    struct timeval* x32173 = &x31710;
    struct timeval* x32174 = &x31708;
    long x32175 = timeval_subtract(x32172, x32173, x32174);
    printf("Generated code run in %ld milliseconds.\n", x32175);
  };
}
/* ----------- FUNCTIONS ----------- */
int x31606(struct Q18GRPRecord* x12329) {
  char* x18749 = x12329->C_NAME;
  int x21585 = strlen(x18749);
  /* VAR */ int x19691 = 0;
  /* VAR */ int x19692 = 0;
  while(1) {
    
    int x19693 = x19691;
    int x19694 = x19693<(x21585);
    if (!(x19694)) break; 
    
    int x19695 = x19692;
    int x19696 = x19691;
    char* x21593 = pointer_add(x18749, x19696);
    char x21594 = *(x21593);
    int x19699 = x19695+(x21594);
    x19692 = x19699;
    int x19701 = x19691;
    int x19702 = x19701+(1);
    x19691 = x19702;
  };
  int x19705 = x19692;
  int x18751 = x12329->C_CUSTKEY;
  int x18753 = x12329->O_ORDERKEY;
  int x18755 = x12329->O_ORDERDATE;
  double x18757 = x12329->O_TOTALPRICE;
  int x19710 = (int){x18757};
  int x18759 = x19705+(x18751);
  int x18760 = x18759+(x18753);
  int x18761 = x18760+(x18755);
  int x18762 = x18761+(x19710);
  return x18762; 
}

int x31634(struct Q18GRPRecord* x12334, struct Q18GRPRecord* x12335) {
  char* x18766 = x12334->C_NAME;
  char* x18767 = x12335->C_NAME;
  int x19720 = strcmp(x18766, x18767);
  int x19721 = !(x19720);
  int x18769 = x12334->C_CUSTKEY;
  int x18770 = x12335->C_CUSTKEY;
  int x18771 = x18769==(x18770);
  int x18772 = x12334->O_ORDERKEY;
  int x18773 = x12335->O_ORDERKEY;
  int x18774 = x18772==(x18773);
  int x18775 = x12334->O_ORDERDATE;
  int x18776 = x12335->O_ORDERDATE;
  int x18777 = x18775==(x18776);
  double x18778 = x12334->O_TOTALPRICE;
  double x18779 = x12335->O_TOTALPRICE;
  int x18780 = x18778==(x18779);
  /* VAR */ int ite28183 = 0;
  if(x19721) {
    ite28183 = x18771;
  } else {
    
    ite28183 = 0;
  };
  int x26469 = ite28183;
  /* VAR */ int ite28190 = 0;
  if(x26469) {
    ite28190 = x18774;
  } else {
    
    ite28190 = 0;
  };
  int x26471 = ite28190;
  /* VAR */ int ite28197 = 0;
  if(x26471) {
    ite28197 = x18777;
  } else {
    
    ite28197 = 0;
  };
  int x26473 = ite28197;
  /* VAR */ int ite28204 = 0;
  if(x26473) {
    ite28204 = x18780;
  } else {
    
    ite28204 = 0;
  };
  int x26475 = ite28204;
  return x26475; 
}

int x31678(void* x10844) {
  int x10845 = g_direct_hash(x10844);
  return x10845; 
}

int x31681(void* x10847, void* x10848) {
  int x10849 = g_direct_equal(x10847, x10848);
  return x10849; 
}

int x31688(void* x10854) {
  int x10855 = g_direct_hash(x10854);
  return x10855; 
}

int x31691(void* x10857, void* x10858) {
  int x10859 = g_direct_equal(x10857, x10858);
  return x10859; 
}

int x31698(int x12362) {
  return x12362; 
}

int x31700(int x12367, int x12368) {
  int x12369 = x12367==(x12368);
  return x12369; 
}

int x31753(struct AGGRecord_Q18GRPRecord* x223, struct AGGRecord_Q18GRPRecord* x224) {
  struct Q18GRPRecord* x225 = x223->key;
  double x226 = x225->O_TOTALPRICE;
  struct Q18GRPRecord* x227 = x224->key;
  double x228 = x227->O_TOTALPRICE;
  int x229 = x226<(x228);
  /* VAR */ int ite26561 = 0;
  if(x229) {
    ite26561 = 1;
  } else {
    
    int x26563 = x226>(x228);
    /* VAR */ int ite26565 = 0;
    if(x26563) {
      ite26565 = -1;
    } else {
      
      int x26567 = x225->O_ORDERDATE;
      int x26568 = x227->O_ORDERDATE;
      int x26569 = x26567<(x26568);
      /* VAR */ int ite26571 = 0;
      if(x26569) {
        ite26571 = -1;
      } else {
        
        int x26573 = x26567>(x26568);
        /* VAR */ int ite26575 = 0;
        if(x26573) {
          ite26575 = 1;
        } else {
          
          ite26575 = 0;
        };
        int x26574 = ite26575;
        ite26571 = x26574;
      };
      int x26570 = ite26571;
      ite26565 = x26570;
    };
    int x26564 = ite26565;
    ite26561 = x26564;
  };
  int x238 = ite26561;
  return x238; 
}

int x12715(void* x12709, void* x12710, void* x12711) {
  struct AGGRecord_Q18GRPRecord** x12712 = (struct AGGRecord_Q18GRPRecord**){x12711};
  struct AGGRecord_Q18GRPRecord* x12713 = (struct AGGRecord_Q18GRPRecord*){x12710};
  pointer_assign(x12712, x12713);
  return 1; 
}
