#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_String;
  struct LINEITEMRecord;
  struct AGGRecord_Int;
  struct SUPPLIERRecord;
  
  struct AGGRecord_String {
  char* key;
  double* aggs;
  };
  
  struct LINEITEMRecord {
  int L_SUPPKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  int L_SHIPDATE;
  };
  
  struct AGGRecord_Int {
  int key;
  double* aggs;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  char* S_PHONE;
  };
  
  

/* GLOBAL VARS */

struct timeval x8228;
int main(int argc, char** argv) {
  FILE* x8670 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x8671 = 0;
  int x8672 = x8671;
  int* x8673 = &x8672;
  int x8674 = fscanf(x8670, "%d", x8673);
  pclose(x8670);
  struct LINEITEMRecord* x9736 = (struct LINEITEMRecord*)malloc(x8672 * sizeof(struct LINEITEMRecord));
  memset(x9736, 0, x8672 * sizeof(struct LINEITEMRecord));
  int x8678 = O_RDONLY;
  int x8679 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x8678);
  struct stat x8680 = (struct stat){0};
  /* VAR */ struct stat x8681 = x8680;
  struct stat x8682 = x8681;
  struct stat* x8683 = &x8682;
  int x8684 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x8683);
  size_t x8685 = x8683->st_size;
  int x8686 = PROT_READ;
  int x8687 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x8685, x8686, x8687, x8679, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x8672);
    /* VAR */ int ite18131 = 0;
    if(x6) {
      char x20776 = *x3;
      int x20777 = x20776!=('\0');
      ite18131 = x20777;
    } else {
      
      ite18131 = 0;
    };
    int x17036 = ite18131;
    if (!(x17036)) break; 
    
    /* VAR */ int x8695 = 0;
    int x8696 = x8695;
    int* x8697 = &x8696;
    char* x8698 = strntoi_unchecked(x3, x8697);
    x3 = x8698;
    /* VAR */ int x8700 = 0;
    int x8701 = x8700;
    int* x8702 = &x8701;
    char* x8703 = strntoi_unchecked(x3, x8702);
    x3 = x8703;
    /* VAR */ int x8705 = 0;
    int x8706 = x8705;
    int* x8707 = &x8706;
    char* x8708 = strntoi_unchecked(x3, x8707);
    x3 = x8708;
    /* VAR */ int x8710 = 0;
    int x8711 = x8710;
    int* x8712 = &x8711;
    char* x8713 = strntoi_unchecked(x3, x8712);
    x3 = x8713;
    /* VAR */ double x8715 = 0.0;
    double x8716 = x8715;
    double* x8717 = &x8716;
    char* x8718 = strntod_unchecked(x3, x8717);
    x3 = x8718;
    /* VAR */ double x8720 = 0.0;
    double x8721 = x8720;
    double* x8722 = &x8721;
    char* x8723 = strntod_unchecked(x3, x8722);
    x3 = x8723;
    /* VAR */ double x8725 = 0.0;
    double x8726 = x8725;
    double* x8727 = &x8726;
    char* x8728 = strntod_unchecked(x3, x8727);
    x3 = x8728;
    /* VAR */ double x8730 = 0.0;
    double x8731 = x8730;
    double* x8732 = &x8731;
    char* x8733 = strntod_unchecked(x3, x8732);
    x3 = x8733;
    char x8735 = *x3;
    /* VAR */ char x8736 = x8735;
    x3 += 1;
    x3 += 1;
    char x8740 = *x3;
    /* VAR */ char x8741 = x8740;
    x3 += 1;
    x3 += 1;
    /* VAR */ int x8745 = 0;
    int x8746 = x8745;
    int* x8747 = &x8746;
    char* x8748 = strntoi_unchecked(x3, x8747);
    x3 = x8748;
    /* VAR */ int x8750 = 0;
    int x8751 = x8750;
    int* x8752 = &x8751;
    char* x8753 = strntoi_unchecked(x3, x8752);
    x3 = x8753;
    /* VAR */ int x8755 = 0;
    int x8756 = x8755;
    int* x8757 = &x8756;
    char* x8758 = strntoi_unchecked(x3, x8757);
    x3 = x8758;
    int x8760 = x8746*(10000);
    int x8761 = x8751*(100);
    int x8762 = x8760+(x8761);
    int x8763 = x8762+(x8756);
    /* VAR */ int x8764 = 0;
    int x8765 = x8764;
    int* x8766 = &x8765;
    char* x8767 = strntoi_unchecked(x3, x8766);
    x3 = x8767;
    /* VAR */ int x8769 = 0;
    int x8770 = x8769;
    int* x8771 = &x8770;
    char* x8772 = strntoi_unchecked(x3, x8771);
    x3 = x8772;
    /* VAR */ int x8774 = 0;
    int x8775 = x8774;
    int* x8776 = &x8775;
    char* x8777 = strntoi_unchecked(x3, x8776);
    x3 = x8777;
    /* VAR */ int x8783 = 0;
    int x8784 = x8783;
    int* x8785 = &x8784;
    char* x8786 = strntoi_unchecked(x3, x8785);
    x3 = x8786;
    /* VAR */ int x8788 = 0;
    int x8789 = x8788;
    int* x8790 = &x8789;
    char* x8791 = strntoi_unchecked(x3, x8790);
    x3 = x8791;
    /* VAR */ int x8793 = 0;
    int x8794 = x8793;
    int* x8795 = &x8794;
    char* x8796 = strntoi_unchecked(x3, x8795);
    x3 = x8796;
    char* x9862 = (char*)malloc(26 * sizeof(char));
    memset(x9862, 0, 26 * sizeof(char));
    /* VAR */ char* x8803 = x3;
    while(1) {
      
      char x8804 = *x3;
      int x8805 = x8804!=('|');
      /* VAR */ int ite18252 = 0;
      if(x8805) {
        char x20896 = *x3;
        int x20897 = x20896!=('\n');
        ite18252 = x20897;
      } else {
        
        ite18252 = 0;
      };
      int x17150 = ite18252;
      if (!(x17150)) break; 
      
      x3 += 1;
    };
    char* x8811 = x8803;
    int x8812 = x3 - x8811;
    char* x8813 = x8803;
    char* x8814 = strncpy(x9862, x8813, x8812);
    x3 += 1;
    char* x9880 = (char*)malloc(11 * sizeof(char));
    memset(x9880, 0, 11 * sizeof(char));
    /* VAR */ char* x8822 = x3;
    while(1) {
      
      char x8823 = *x3;
      int x8824 = x8823!=('|');
      /* VAR */ int ite18275 = 0;
      if(x8824) {
        char x20918 = *x3;
        int x20919 = x20918!=('\n');
        ite18275 = x20919;
      } else {
        
        ite18275 = 0;
      };
      int x17166 = ite18275;
      if (!(x17166)) break; 
      
      x3 += 1;
    };
    char* x8830 = x8822;
    int x8831 = x3 - x8830;
    char* x8832 = x8822;
    char* x8833 = strncpy(x9880, x8832, x8831);
    x3 += 1;
    char* x9898 = (char*)malloc(45 * sizeof(char));
    memset(x9898, 0, 45 * sizeof(char));
    /* VAR */ char* x8841 = x3;
    while(1) {
      
      char x8842 = *x3;
      int x8843 = x8842!=('|');
      /* VAR */ int ite18298 = 0;
      if(x8843) {
        char x20940 = *x3;
        int x20941 = x20940!=('\n');
        ite18298 = x20941;
      } else {
        
        ite18298 = 0;
      };
      int x17182 = ite18298;
      if (!(x17182)) break; 
      
      x3 += 1;
    };
    char* x8849 = x8841;
    int x8850 = x3 - x8849;
    char* x8851 = x8841;
    char* x8852 = strncpy(x9898, x8851, x8850);
    x3 += 1;
    struct LINEITEMRecord* x10457 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x10457, 0, 1 * sizeof(struct LINEITEMRecord));
    x10457->L_SUPPKEY = x8706; x10457->L_EXTENDEDPRICE = x8721; x10457->L_DISCOUNT = x8726; x10457->L_SHIPDATE = x8763;
    int x47 = x4;
    struct LINEITEMRecord x9918 = *x10457;
    *(x9736 + x47) = x9918;
    struct LINEITEMRecord* x9920 = &(x9736[x47]);
    x10457 = x9920;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x8865 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x8866 = 0;
  int x8867 = x8866;
  int* x8868 = &x8867;
  int x8869 = fscanf(x8865, "%d", x8868);
  pclose(x8865);
  struct SUPPLIERRecord* x9931 = (struct SUPPLIERRecord*)malloc(x8867 * sizeof(struct SUPPLIERRecord));
  memset(x9931, 0, x8867 * sizeof(struct SUPPLIERRecord));
  int x8873 = O_RDONLY;
  int x8874 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x8873);
  /* VAR */ struct stat x8875 = x8680;
  struct stat x8876 = x8875;
  struct stat* x8877 = &x8876;
  int x8878 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x8877);
  size_t x8879 = x8877->st_size;
  int x8880 = PROT_READ;
  int x8881 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x8879, x8880, x8881, x8874, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x8867);
    /* VAR */ int ite18348 = 0;
    if(x58) {
      char x20989 = *x55;
      int x20990 = x20989!=('\0');
      ite18348 = x20990;
    } else {
      
      ite18348 = 0;
    };
    int x17225 = ite18348;
    if (!(x17225)) break; 
    
    /* VAR */ int x8889 = 0;
    int x8890 = x8889;
    int* x8891 = &x8890;
    char* x8892 = strntoi_unchecked(x55, x8891);
    x55 = x8892;
    char* x9954 = (char*)malloc(26 * sizeof(char));
    memset(x9954, 0, 26 * sizeof(char));
    /* VAR */ char* x8895 = x55;
    while(1) {
      
      char x8896 = *x55;
      int x8897 = x8896!=('|');
      /* VAR */ int ite18367 = 0;
      if(x8897) {
        char x21007 = *x55;
        int x21008 = x21007!=('\n');
        ite18367 = x21008;
      } else {
        
        ite18367 = 0;
      };
      int x17237 = ite18367;
      if (!(x17237)) break; 
      
      x55 += 1;
    };
    char* x8903 = x8895;
    int x8904 = x55 - x8903;
    char* x8905 = x8895;
    char* x8906 = strncpy(x9954, x8905, x8904);
    x55 += 1;
    char* x9972 = (char*)malloc(41 * sizeof(char));
    memset(x9972, 0, 41 * sizeof(char));
    /* VAR */ char* x8914 = x55;
    while(1) {
      
      char x8915 = *x55;
      int x8916 = x8915!=('|');
      /* VAR */ int ite18390 = 0;
      if(x8916) {
        char x21029 = *x55;
        int x21030 = x21029!=('\n');
        ite18390 = x21030;
      } else {
        
        ite18390 = 0;
      };
      int x17253 = ite18390;
      if (!(x17253)) break; 
      
      x55 += 1;
    };
    char* x8922 = x8914;
    int x8923 = x55 - x8922;
    char* x8924 = x8914;
    char* x8925 = strncpy(x9972, x8924, x8923);
    x55 += 1;
    /* VAR */ int x8932 = 0;
    int x8933 = x8932;
    int* x8934 = &x8933;
    char* x8935 = strntoi_unchecked(x55, x8934);
    x55 = x8935;
    char* x9995 = (char*)malloc(16 * sizeof(char));
    memset(x9995, 0, 16 * sizeof(char));
    /* VAR */ char* x8938 = x55;
    while(1) {
      
      char x8939 = *x55;
      int x8940 = x8939!=('|');
      /* VAR */ int ite18418 = 0;
      if(x8940) {
        char x21056 = *x55;
        int x21057 = x21056!=('\n');
        ite18418 = x21057;
      } else {
        
        ite18418 = 0;
      };
      int x17274 = ite18418;
      if (!(x17274)) break; 
      
      x55 += 1;
    };
    char* x8946 = x8938;
    int x8947 = x55 - x8946;
    char* x8948 = x8938;
    char* x8949 = strncpy(x9995, x8948, x8947);
    x55 += 1;
    /* VAR */ double x8956 = 0.0;
    double x8957 = x8956;
    double* x8958 = &x8957;
    char* x8959 = strntod_unchecked(x55, x8958);
    x55 = x8959;
    char* x10018 = (char*)malloc(102 * sizeof(char));
    memset(x10018, 0, 102 * sizeof(char));
    /* VAR */ char* x8962 = x55;
    while(1) {
      
      char x8963 = *x55;
      int x8964 = x8963!=('|');
      /* VAR */ int ite18446 = 0;
      if(x8964) {
        char x21083 = *x55;
        int x21084 = x21083!=('\n');
        ite18446 = x21084;
      } else {
        
        ite18446 = 0;
      };
      int x17295 = ite18446;
      if (!(x17295)) break; 
      
      x55 += 1;
    };
    char* x8970 = x8962;
    int x8971 = x55 - x8970;
    char* x8972 = x8962;
    char* x8973 = strncpy(x10018, x8972, x8971);
    x55 += 1;
    struct SUPPLIERRecord* x10579 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x10579, 0, 1 * sizeof(struct SUPPLIERRecord));
    x10579->S_SUPPKEY = x8890; x10579->S_NAME = x9954; x10579->S_ADDRESS = x9972; x10579->S_PHONE = x9995;
    int x97 = x56;
    struct SUPPLIERRecord x10038 = *x10579;
    *(x9931 + x97) = x10038;
    struct SUPPLIERRecord* x10040 = &(x9931[x97]);
    x10579 = x10040;
    int x99 = x56;
    int x100 = x99+(1);
    x56 = x100;
  };
  int x104 = 0;
  for(; x104 < 1 ; x104 += 1) {
    
    double* x21575 = (double*)malloc(1 * sizeof(double));
    memset(x21575, 0, 1 * sizeof(double));
    struct AGGRecord_String* x21576 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x21576, 0, 1 * sizeof(struct AGGRecord_String));
    x21576->key = "MAXREVENUE"; x21576->aggs = x21575;
    struct AGGRecord_Int* x21579 = (struct AGGRecord_Int*)malloc(48000000 * sizeof(struct AGGRecord_Int));
    memset(x21579, 0, 48000000 * sizeof(struct AGGRecord_Int));
    /* VAR */ int x21580 = 0;
    void* x21581 = (void*)malloc(160000 * sizeof(void));
    memset(x21581, 0, 160000 * sizeof(void));
    struct AGGRecord_Int* x21582 = (struct AGGRecord_Int*)malloc(160000 * sizeof(struct AGGRecord_Int));
    memset(x21582, 0, 160000 * sizeof(struct AGGRecord_Int));
    struct LINEITEMRecord** x21583 = (struct LINEITEMRecord**)malloc(96 * sizeof(struct LINEITEMRecord*));
    memset(x21583, 0, 96 * sizeof(struct LINEITEMRecord*));
    int* x21584 = (int*)malloc(96 * sizeof(int));
    memset(x21584, 0, 96 * sizeof(int));
    int x15543 = 0;
    for(; x15543 < 96 ; x15543 += 1) {
      
      int x15544 = x8672/(96);
      int x15545 = x15544*(4);
      struct LINEITEMRecord* x15546 = (struct LINEITEMRecord*)malloc(x15545 * sizeof(struct LINEITEMRecord));
      memset(x15546, 0, x15545 * sizeof(struct LINEITEMRecord));
      *(x21583 + x15543) = x15546;
    };
    /* VAR */ int x21596 = 0;
    int x15572 = 0;
    for(; x15572 < x8672 ; x15572 += 1) {
      
      struct LINEITEMRecord* x15573 = &(x9736[x15572]);
      int x15574 = x15573->L_SHIPDATE;
      int x15575 = x15574/(100);
      int x15576 = x15575%(100);
      int x15577 = x15575/(100);
      int x15578 = x15577-(1992);
      int x15579 = x15578*(12);
      int x15580 = x15576-(1);
      int x15581 = x15579+(x15580);
      int x15582 = x21584[x15581];
      struct LINEITEMRecord* x15583 = x21583[x15581];
      struct LINEITEMRecord x15584 = *x15573;
      *(x15583 + x15582) = x15584;
      struct LINEITEMRecord* x15586 = &(x15583[x15582]);
      x15573 = x15586;
      int x15588 = x15582+(1);
      *(x21584 + x15581) = x15588;
      int x15590 = x21596;
      int x15591 = x15590+(1);
      x21596 = x15591;
    };
    /* VAR */ int x21640 = 0;
    double** x21641 = (double**)malloc(80000 * sizeof(double*));
    memset(x21641, 0, 80000 * sizeof(double*));
    /* VAR */ int x21642 = 0;
    while(1) {
      
      int x8071 = x21642;
      int x8072 = x8071<(80000);
      if (!(x8072)) break; 
      
      int x8073 = x21642;
      double* x10096 = (double*)malloc(1 * sizeof(double));
      memset(x10096, 0, 1 * sizeof(double));
      *(x21641 + x8073) = x10096;
      int x8076 = x21642;
      int x8077 = x8076+(1);
      x21642 = x8077;
    };
    /* VAR */ int x21652 = 0;
    struct AGGRecord_Int* x21653 = (struct AGGRecord_Int*)malloc(80000 * sizeof(struct AGGRecord_Int));
    memset(x21653, 0, 80000 * sizeof(struct AGGRecord_Int));
    /* VAR */ int x21654 = 0;
    while(1) {
      
      int x8083 = x21654;
      int x8084 = x8083<(80000);
      if (!(x8084)) break; 
      
      int x8085 = x21654;
      double* x8086 = x21641[x8085];
      struct AGGRecord_Int* x10656 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
      memset(x10656, 0, 1 * sizeof(struct AGGRecord_Int));
      x10656->key = 0; x10656->aggs = x8086;
      struct AGGRecord_Int x10110 = *x10656;
      *(x21653 + x8085) = x10110;
      struct AGGRecord_Int* x10112 = &(x21653[x8085]);
      x10656 = x10112;
      int x8089 = x21654;
      int x8090 = x8089+(1);
      x21654 = x8090;
    };
    /* VAR */ struct timeval x21670 = x8228;
    struct timeval x21671 = x21670;
    /* VAR */ struct timeval x21672 = x8228;
    struct timeval x21673 = x21672;
    /* VAR */ struct timeval x21674 = x8228;
    struct timeval x21675 = x21674;
    struct timeval* x21676 = &x21673;
    gettimeofday(x21676, NULL);
    /* VAR */ int x21678 = 0;
    /* VAR */ int x21679 = 0;
    /* VAR */ struct AGGRecord_String* x21680 = NULL;
    int x15725 = 20;
    for(; x15725 < 24 ; x15725 += 1) {
      
      int x15726 = x21584[x15725];
      struct LINEITEMRecord* x15727 = x21583[x15725];
      int x15682 = 0;
      for(; x15682 < x15726 ; x15682 += 1) {
        
        struct LINEITEMRecord* x15683 = &(x15727[x15682]);
        int x15684 = x15683->L_SHIPDATE;
        int x15685 = x15684>=(19930901);
        /* VAR */ int ite19251 = 0;
        if(x15685) {
          int x21867 = x15684<(19931201);
          ite19251 = x21867;
        } else {
          
          ite19251 = 0;
        };
        int x17972 = ite19251;
        if(x17972) {
          int x156 = x15683->L_SUPPKEY;
          struct AGGRecord_Int* x4186 = &(x21582[x156]);
          int x4187 = x21580;
          int x4188 = x156>(x4187);
          if(x4188) {
            x21580 = x156;
          };
          int x13443 = x4186!=(NULL);
          /* VAR */ int ite19267 = 0;
          if(x13443) {
            double* x21882 = x4186->aggs;
            int x21883 = x21882!=(NULL);
            ite19267 = x21883;
          } else {
            
            ite19267 = 0;
          };
          int x17982 = ite19267;
          /* VAR */ struct AGGRecord_Int* ite17984 = 0;
          if(x17982) {
            ite17984 = x4186;
          } else {
            
            int x17986 = x21640;
            double* x17987 = x21641[x17986];
            int x17988 = x21640;
            int x17989 = x17988+(1);
            x21640 = x17989;
            int x17991 = x21652;
            struct AGGRecord_Int* x17992 = &(x21653[x17991]);
            x17992->key = x156;
            x17992->aggs = x17987;
            int x17995 = x21652;
            int x17996 = x17995+(1);
            x21652 = x17996;
            struct AGGRecord_Int x17998 = *x17992;
            *(x21582 + x156) = x17998;
            struct AGGRecord_Int* x18000 = &(x21582[x156]);
            x17992 = x18000;
            ite17984 = x17992;
          };
          struct AGGRecord_Int* x4194 = ite17984;
          double* x161 = x4194->aggs;
          double x175 = x161[0];
          double x176 = x15683->L_EXTENDEDPRICE;
          double x177 = x15683->L_DISCOUNT;
          double x178 = 1.0-(x177);
          double x179 = x176*(x178);
          double x180 = x175+(x179);
          *x161 = x180;
        };
      };
    };
    int x21918 = x21580;
    int x21919 = x21918+(1);
    int x15832 = 0;
    for(; x15832 < x21919 ; x15832 += 1) {
      
      struct AGGRecord_Int* x15833 = &(x21582[x15832]);
      int x15834 = x15833!=(NULL);
      /* VAR */ int ite19333 = 0;
      if(x15834) {
        double* x21946 = x15833->aggs;
        int x21947 = x21946!=(NULL);
        ite19333 = x21947;
      } else {
        
        ite19333 = 0;
      };
      int x18034 = ite19333;
      if(x18034) {
        int x4223 = x21679;
        struct AGGRecord_Int x10187 = *x15833;
        *(x21579 + x4223) = x10187;
        struct AGGRecord_Int* x10189 = &(x21579[x4223]);
        x15833 = x10189;
        int x4225 = x21679;
        int x4226 = x4225+(1);
        x21679 = x4226;
      };
    };
    /* VAR */ int x21961 = 0;
    while(1) {
      
      int x21963 = x21961;
      int x21964 = x21679;
      int x21965 = x21963<(x21964);
      if (!(x21965)) break; 
      
      int x211 = x21961;
      struct AGGRecord_Int* x212 = &(x21579[x211]);
      int x213 = x21961;
      int x214 = x213+(1);
      x21961 = x214;
      double* x221 = x21576->aggs;
      double x235 = x221[0];
      double* x237 = x212->aggs;
      double x238 = x237[0];
      int x239 = x235<(x238);
      /* VAR */ double ite18058 = 0;
      if(x239) {
        double x18059 = x237[0];
        ite18058 = x18059;
      } else {
        
        ite18058 = x235;
      };
      double x241 = ite18058;
      *x221 = x241;
    };
    x21680 = x21576;
    struct AGGRecord_String* x21985 = x21680;
    /* VAR */ int x21986 = 0;
    /* VAR */ int x21987 = 0;
    /* VAR */ int x21988 = 0;
    while(1) {
      
      int x21990 = x21988;
      int x21991 = x21679;
      int x21992 = x21990<(x21991);
      if (!(x21992)) break; 
      
      int x372 = x21988;
      struct AGGRecord_Int* x373 = &(x21579[x372]);
      int x374 = x21988;
      int x375 = x374+(1);
      x21988 = x375;
      int x378 = x373->key;
      int x6368 = x378-(1);
      struct SUPPLIERRecord* x6369 = &(x9931[x6368]);
      int x6370 = x6369->S_SUPPKEY;
      int x6371 = x6370==(x378);
      if(x6371) {
        int x3371 = x6369->S_SUPPKEY;
        int x3372 = x3371==(x378);
        /* VAR */ int ite19398 = 0;
        if(x3372) {
          double* x22008 = x373->aggs;
          double x22009 = x22008[0];
          double* x22010 = x21985->aggs;
          double x22011 = x22010[0];
          int x22012 = x22009==(x22011);
          ite19398 = x22012;
        } else {
          
          ite19398 = 0;
        };
        int x18086 = ite19398;
        if(x18086) {
          char* x928 = x6369->S_NAME;
          char* x929 = x6369->S_ADDRESS;
          char* x930 = x6369->S_PHONE;
          double* x931 = x373->aggs;
          if(0) {
            x21986 = 1;
          } else {
            
            double x440 = x931[0];
            printf("%d|%s|%s|%s|%.4f\n", x3371, x928, x929, x930, x440);
            int x1919 = x21987;
            int x443 = x1919+(1);
            x21987 = x443;
          };
        };
      };
    };
    int x22029 = x21987;
    printf("(%d rows)\n", x22029);
    struct timeval* x22031 = &x21675;
    gettimeofday(x22031, NULL);
    struct timeval* x22033 = &x21671;
    struct timeval* x22034 = &x21675;
    struct timeval* x22035 = &x21673;
    long x22036 = timeval_subtract(x22033, x22034, x22035);
    printf("Generated code run in %ld milliseconds.\n", x22036);
  };
}
/* ----------- FUNCTIONS ----------- */