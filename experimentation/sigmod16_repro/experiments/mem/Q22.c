#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct AGGRecord_String;
struct AGGRecord_OptimalString;
struct ORDERSRecord;
struct CUSTOMERRecord;
struct Set_AGGRecord_OptimalString;
struct AGGRecord_String {
  char* key;
  double* aggs;
};

struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
};

struct ORDERSRecord {
  numeric_int_t O_CUSTKEY;
};

struct CUSTOMERRecord {
  numeric_int_t C_CUSTKEY;
  char* C_PHONE;
  double C_ACCTBAL;
};

struct Set_AGGRecord_OptimalString {
  numeric_int_t maxSize;
  struct AGGRecord_OptimalString* array;
};


numeric_int_t x917573(struct AGGRecord_OptimalString* x882065, struct AGGRecord_OptimalString* x882066);

numeric_int_t x895441(void* x895435, void* x895436, void* x895437);

int main(int argc, char** argv) {
  /* VAR */ long mallocSym_917288_919507 = 0L;
  /* VAR */ long mallocSym_893110_919508 = 0L;
  /* VAR */ long mallocSym_893305_919509 = 0L;
  /* VAR */ long mallocSym_900382_919510 = 0L;
  /* VAR */ long mallocSym_893859_919511 = 0L;
  /* VAR */ long mallocSym_893068_919512 = 0L;
  /* VAR */ long mallocSym_917308_919513 = 0L;
  /* VAR */ long mallocSym_893089_919514 = 0L;
  /* VAR */ long mallocSym_893937_919515 = 0L;
  /* VAR */ long mallocSym_893273_919516 = 0L;
  /* VAR */ long mallocSym_893732_919517 = 0L;
  /* VAR */ long mallocSym_893329_919518 = 0L;
  /* VAR */ long mallocSym_902572_919519 = 0L;
  /* VAR */ long mallocSym_917383_919520 = 0L;
  /* VAR */ long mallocSym_917309_919521 = 0L;
  /* VAR */ long mallocSym_893230_919522 = 0L;
  /* VAR */ long mallocSym_902955_919523 = 0L;
  /* VAR */ long mallocSym_902956_919524 = 0L;
  /* VAR */ long mallocSym_893251_919525 = 0L;
  /* VAR */ long mallocSym_893879_919526 = 0L;
  /* VAR */ long mallocSym_900334_919527 = 0L;
  /* VAR */ long mallocSym_893126_919528 = 0L;
  /* VAR */ long mallocSym_893214_919529 = 0L;
  /* VAR */ long mallocSym_900335_919530 = 0L;
  /* VAR */ long mallocSym_917382_919531 = 0L;
  /* VAR */ long mallocSym_893281_919532 = 0L;
  /* VAR */ long mallocSym_893280_919533 = 0L;
  /* VAR */ long mallocSym_893269_919534 = 0L;
  /* VAR */ long mallocSym_893146_919535 = 0L;
  /* VAR */ long mallocSym_893052_919536 = 0L;
  /* VAR */ long mallocSym_893017_919537 = 0L;
  /* VAR */ long mallocSym_902573_919538 = 0L;
  FILE* x891839 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ numeric_int_t x891840 = 0;
  numeric_int_t x891841 = x891840;
  numeric_int_t* x891842 = &x891841;
  numeric_int_t x891843 = fscanf(x891839, "%d", x891842);
  pclose(x891839);
  struct CUSTOMERRecord* x919545 = (struct CUSTOMERRecord*)malloc(x891841 * sizeof(struct CUSTOMERRecord));
  memset(x919545, 0, x891841 * sizeof(struct CUSTOMERRecord));
  long x919546 = mallocSym_893017_919537;
  mallocSym_893017_919537 = (x919546+(((long){x891841})));
  numeric_int_t x891847 = O_RDONLY;
  numeric_int_t x891848 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x891847);
  struct stat x891849 = (struct stat){0};
  /* VAR */ struct stat x891850 = x891849;
  struct stat x891851 = x891850;
  struct stat* x891852 = &x891851;
  numeric_int_t x891853 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x891852);
  numeric_int_t x891855 = PROT_READ;
  numeric_int_t x891856 = MAP_PRIVATE;
  char* x881830 = mmap(NULL, (x891852->st_size), x891855, x891856, x891848, 0);
  /* VAR */ numeric_int_t x881831 = 0;
  while(1) {
    
    numeric_int_t x881832 = x881831;
    /* VAR */ boolean_t ite903068 = 0;
    if((x881832<(x891841))) {
      char x916369 = *x881830;
      ite903068 = (x916369!=('\0'));
    } else {
      
      ite903068 = 0;
    };
    boolean_t x902062 = ite903068;
    if (!(x902062)) break; 
    
    /* VAR */ numeric_int_t x891864 = 0;
    numeric_int_t x891865 = x891864;
    numeric_int_t* x891866 = &x891865;
    char* x891867 = strntoi_unchecked(x881830, x891866);
    x881830 = x891867;
    /* VAR */ char* x891869 = x881830;
    while(1) {
      
      char x891870 = *x881830;
      /* VAR */ boolean_t ite903086 = 0;
      if((x891870!=('|'))) {
        char x916386 = *x881830;
        ite903086 = (x916386!=('\n'));
      } else {
        
        ite903086 = 0;
      };
      boolean_t x902073 = ite903086;
      if (!(x902073)) break; 
      
      x881830 += 1;
    };
    char* x891877 = x891869;
    numeric_int_t x891878 = x881830 - x891877;
    numeric_int_t x891879 = x891878+(1);
    char* x919594 = (char*)malloc(x891879 * sizeof(char));
    memset(x919594, 0, x891879 * sizeof(char));
    long x919595 = mallocSym_893052_919536;
    mallocSym_893052_919536 = (x919595+(((long){x891879})));
    char* x891882 = x891869;
    char* x891883 = strncpy(x919594, x891882, x891878);
    x881830 += 1;
    /* VAR */ char* x891885 = x881830;
    while(1) {
      
      char x891886 = *x881830;
      /* VAR */ boolean_t ite903107 = 0;
      if((x891886!=('|'))) {
        char x916406 = *x881830;
        ite903107 = (x916406!=('\n'));
      } else {
        
        ite903107 = 0;
      };
      boolean_t x902087 = ite903107;
      if (!(x902087)) break; 
      
      x881830 += 1;
    };
    char* x891893 = x891885;
    numeric_int_t x891894 = x881830 - x891893;
    numeric_int_t x891895 = x891894+(1);
    char* x919618 = (char*)malloc(x891895 * sizeof(char));
    memset(x919618, 0, x891895 * sizeof(char));
    long x919619 = mallocSym_893068_919512;
    mallocSym_893068_919512 = (x919619+(((long){x891895})));
    char* x891898 = x891885;
    char* x891899 = strncpy(x919618, x891898, x891894);
    x881830 += 1;
    /* VAR */ numeric_int_t x891901 = 0;
    numeric_int_t x891902 = x891901;
    numeric_int_t* x891903 = &x891902;
    char* x891904 = strntoi_unchecked(x881830, x891903);
    x881830 = x891904;
    /* VAR */ char* x891906 = x881830;
    while(1) {
      
      char x891907 = *x881830;
      /* VAR */ boolean_t ite903133 = 0;
      if((x891907!=('|'))) {
        char x916431 = *x881830;
        ite903133 = (x916431!=('\n'));
      } else {
        
        ite903133 = 0;
      };
      boolean_t x902106 = ite903133;
      if (!(x902106)) break; 
      
      x881830 += 1;
    };
    char* x891914 = x891906;
    numeric_int_t x891915 = x881830 - x891914;
    numeric_int_t x891916 = x891915+(1);
    char* x919647 = (char*)malloc(x891916 * sizeof(char));
    memset(x919647, 0, x891916 * sizeof(char));
    long x919648 = mallocSym_893089_919514;
    mallocSym_893089_919514 = (x919648+(((long){x891916})));
    char* x891919 = x891906;
    char* x891920 = strncpy(x919647, x891919, x891915);
    x881830 += 1;
    /* VAR */ double x891922 = 0.0;
    double x891923 = x891922;
    double* x891924 = &x891923;
    char* x891925 = strntod_unchecked(x881830, x891924);
    x881830 = x891925;
    /* VAR */ char* x891927 = x881830;
    while(1) {
      
      char x891928 = *x881830;
      /* VAR */ boolean_t ite903159 = 0;
      if((x891928!=('|'))) {
        char x916456 = *x881830;
        ite903159 = (x916456!=('\n'));
      } else {
        
        ite903159 = 0;
      };
      boolean_t x902125 = ite903159;
      if (!(x902125)) break; 
      
      x881830 += 1;
    };
    char* x891935 = x891927;
    numeric_int_t x891936 = x881830 - x891935;
    numeric_int_t x891937 = x891936+(1);
    char* x919676 = (char*)malloc(x891937 * sizeof(char));
    memset(x919676, 0, x891937 * sizeof(char));
    long x919677 = mallocSym_893110_919508;
    mallocSym_893110_919508 = (x919677+(((long){x891937})));
    char* x891940 = x891927;
    char* x891941 = strncpy(x919676, x891940, x891936);
    x881830 += 1;
    /* VAR */ char* x891943 = x881830;
    while(1) {
      
      char x891944 = *x881830;
      /* VAR */ boolean_t ite903180 = 0;
      if((x891944!=('|'))) {
        char x916476 = *x881830;
        ite903180 = (x916476!=('\n'));
      } else {
        
        ite903180 = 0;
      };
      boolean_t x902139 = ite903180;
      if (!(x902139)) break; 
      
      x881830 += 1;
    };
    char* x891951 = x891943;
    numeric_int_t x891952 = x881830 - x891951;
    numeric_int_t x891953 = x891952+(1);
    char* x919700 = (char*)malloc(x891953 * sizeof(char));
    memset(x919700, 0, x891953 * sizeof(char));
    long x919701 = mallocSym_893126_919528;
    mallocSym_893126_919528 = (x919701+(((long){x891953})));
    char* x891956 = x891943;
    char* x891957 = strncpy(x919700, x891956, x891952);
    x881830 += 1;
    struct CUSTOMERRecord* x919708 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x919708, 0, 1 * sizeof(struct CUSTOMERRecord));
    long x919709 = mallocSym_893732_919517;
    mallocSym_893732_919517 = (x919709+(((long){1})));
    x919708->C_CUSTKEY = x891865; x919708->C_PHONE = x919647; x919708->C_ACCTBAL = x891923;
    numeric_int_t x881845 = x881831;
    struct CUSTOMERRecord x893133 = *x919708;
    *(x919545 + x881845) = x893133;
    struct CUSTOMERRecord* x893135 = &(x919545[x881845]);
    x919708 = x893135;
    numeric_int_t x881847 = x881831;
    x881831 = (x881847+(1));
  };
  FILE* x891965 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ numeric_int_t x891966 = 0;
  numeric_int_t x891967 = x891966;
  numeric_int_t* x891968 = &x891967;
  numeric_int_t x891969 = fscanf(x891965, "%d", x891968);
  pclose(x891965);
  struct ORDERSRecord* x919729 = (struct ORDERSRecord*)malloc(x891967 * sizeof(struct ORDERSRecord));
  memset(x919729, 0, x891967 * sizeof(struct ORDERSRecord));
  long x919730 = mallocSym_893146_919535;
  mallocSym_893146_919535 = (x919730+(((long){x891967})));
  numeric_int_t x891973 = O_RDONLY;
  numeric_int_t x891974 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x891973);
  /* VAR */ struct stat x891975 = x891849;
  struct stat x891976 = x891975;
  struct stat* x891977 = &x891976;
  numeric_int_t x891978 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x891977);
  numeric_int_t x891980 = PROT_READ;
  numeric_int_t x891981 = MAP_PRIVATE;
  char* x881853 = mmap(NULL, (x891977->st_size), x891980, x891981, x891974, 0);
  /* VAR */ numeric_int_t x881854 = 0;
  while(1) {
    
    numeric_int_t x881855 = x881854;
    /* VAR */ boolean_t ite903229 = 0;
    if((x881855<(x891967))) {
      char x916524 = *x881853;
      ite903229 = (x916524!=('\0'));
    } else {
      
      ite903229 = 0;
    };
    boolean_t x902181 = ite903229;
    if (!(x902181)) break; 
    
    /* VAR */ numeric_int_t x891989 = 0;
    numeric_int_t x891990 = x891989;
    numeric_int_t* x891991 = &x891990;
    char* x891992 = strntoi_unchecked(x881853, x891991);
    x881853 = x891992;
    /* VAR */ numeric_int_t x891994 = 0;
    numeric_int_t x891995 = x891994;
    numeric_int_t* x891996 = &x891995;
    char* x891997 = strntoi_unchecked(x881853, x891996);
    x881853 = x891997;
    char x891999 = *x881853;
    /* VAR */ char x892000 = x891999;
    x881853 += 1;
    x881853 += 1;
    /* VAR */ double x892004 = 0.0;
    double x892005 = x892004;
    double* x892006 = &x892005;
    char* x892007 = strntod_unchecked(x881853, x892006);
    x881853 = x892007;
    /* VAR */ numeric_int_t x892009 = 0;
    numeric_int_t x892010 = x892009;
    numeric_int_t* x892011 = &x892010;
    char* x892012 = strntoi_unchecked(x881853, x892011);
    x881853 = x892012;
    /* VAR */ numeric_int_t x892014 = 0;
    numeric_int_t x892015 = x892014;
    numeric_int_t* x892016 = &x892015;
    char* x892017 = strntoi_unchecked(x881853, x892016);
    x881853 = x892017;
    /* VAR */ numeric_int_t x892019 = 0;
    numeric_int_t x892020 = x892019;
    numeric_int_t* x892021 = &x892020;
    char* x892022 = strntoi_unchecked(x881853, x892021);
    x881853 = x892022;
    /* VAR */ char* x892028 = x881853;
    while(1) {
      
      char x892029 = *x881853;
      /* VAR */ boolean_t ite903281 = 0;
      if((x892029!=('|'))) {
        char x916575 = *x881853;
        ite903281 = (x916575!=('\n'));
      } else {
        
        ite903281 = 0;
      };
      boolean_t x902226 = ite903281;
      if (!(x902226)) break; 
      
      x881853 += 1;
    };
    char* x892036 = x892028;
    numeric_int_t x892037 = x881853 - x892036;
    numeric_int_t x892038 = x892037+(1);
    char* x919811 = (char*)malloc(x892038 * sizeof(char));
    memset(x919811, 0, x892038 * sizeof(char));
    long x919812 = mallocSym_893214_919529;
    mallocSym_893214_919529 = (x919812+(((long){x892038})));
    char* x892041 = x892028;
    char* x892042 = strncpy(x919811, x892041, x892037);
    x881853 += 1;
    /* VAR */ char* x892044 = x881853;
    while(1) {
      
      char x892045 = *x881853;
      /* VAR */ boolean_t ite903302 = 0;
      if((x892045!=('|'))) {
        char x916595 = *x881853;
        ite903302 = (x916595!=('\n'));
      } else {
        
        ite903302 = 0;
      };
      boolean_t x902240 = ite903302;
      if (!(x902240)) break; 
      
      x881853 += 1;
    };
    char* x892052 = x892044;
    numeric_int_t x892053 = x881853 - x892052;
    numeric_int_t x892054 = x892053+(1);
    char* x919835 = (char*)malloc(x892054 * sizeof(char));
    memset(x919835, 0, x892054 * sizeof(char));
    long x919836 = mallocSym_893230_919522;
    mallocSym_893230_919522 = (x919836+(((long){x892054})));
    char* x892057 = x892044;
    char* x892058 = strncpy(x919835, x892057, x892053);
    x881853 += 1;
    /* VAR */ numeric_int_t x892060 = 0;
    numeric_int_t x892061 = x892060;
    numeric_int_t* x892062 = &x892061;
    char* x892063 = strntoi_unchecked(x881853, x892062);
    x881853 = x892063;
    /* VAR */ char* x892065 = x881853;
    while(1) {
      
      char x892066 = *x881853;
      /* VAR */ boolean_t ite903328 = 0;
      if((x892066!=('|'))) {
        char x916620 = *x881853;
        ite903328 = (x916620!=('\n'));
      } else {
        
        ite903328 = 0;
      };
      boolean_t x902259 = ite903328;
      if (!(x902259)) break; 
      
      x881853 += 1;
    };
    char* x892073 = x892065;
    numeric_int_t x892074 = x881853 - x892073;
    numeric_int_t x892075 = x892074+(1);
    char* x919864 = (char*)malloc(x892075 * sizeof(char));
    memset(x919864, 0, x892075 * sizeof(char));
    long x919865 = mallocSym_893251_919525;
    mallocSym_893251_919525 = (x919865+(((long){x892075})));
    char* x892078 = x892065;
    char* x892079 = strncpy(x919864, x892078, x892074);
    x881853 += 1;
    struct ORDERSRecord* x919872 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x919872, 0, 1 * sizeof(struct ORDERSRecord));
    long x919873 = mallocSym_893859_919511;
    mallocSym_893859_919511 = (x919873+(((long){1})));
    x919872->O_CUSTKEY = x891995;
    numeric_int_t x881869 = x881854;
    struct ORDERSRecord x893258 = *x919872;
    *(x919729 + x881869) = x893258;
    struct ORDERSRecord* x893260 = &(x919729[x881869]);
    x919872 = x893260;
    numeric_int_t x881871 = x881854;
    x881854 = (x881871+(1));
  };
  numeric_int_t x881876 = 0;
  for(; x881876 < 1 ; x881876 += 1) {
    
    /* VAR */ numeric_int_t x917287 = 0;
    struct Set_AGGRecord_OptimalString* x920580 = (struct Set_AGGRecord_OptimalString*)malloc(1048576 * sizeof(struct Set_AGGRecord_OptimalString));
    memset(x920580, 0, 1048576 * sizeof(struct Set_AGGRecord_OptimalString));
    long x920581 = mallocSym_917288_919507;
    mallocSym_917288_919507 = (x920581+(((long){1048576})));
    numeric_int_t x900333 = 0;
    for(; x900333 < 1048576 ; x900333 += 1) {
      
      struct AGGRecord_OptimalString* x920604 = (struct AGGRecord_OptimalString*)malloc(256 * sizeof(struct AGGRecord_OptimalString));
      memset(x920604, 0, 256 * sizeof(struct AGGRecord_OptimalString));
      long x920605 = mallocSym_900334_919527;
      mallocSym_900334_919527 = (x920605+(((long){256})));
      struct Set_AGGRecord_OptimalString* x920609 = (struct Set_AGGRecord_OptimalString*)malloc(1 * sizeof(struct Set_AGGRecord_OptimalString));
      memset(x920609, 0, 1 * sizeof(struct Set_AGGRecord_OptimalString));
      long x920610 = mallocSym_900335_919530;
      mallocSym_900335_919530 = (x920610+(((long){1})));
      x920609->maxSize = 0; x920609->array = x920604;
      struct Set_AGGRecord_OptimalString x900338 = *x920609;
      *(x920580 + x900333) = x900338;
      struct Set_AGGRecord_OptimalString* x900340 = &(x920580[x900333]);
      x920609 = x900340;
    };
    struct ORDERSRecord** x920620 = (struct ORDERSRecord**)malloc(1200000 * sizeof(struct ORDERSRecord*));
    memset(x920620, 0, 1200000 * sizeof(struct ORDERSRecord*));
    long x920621 = mallocSym_917308_919513;
    long x920622 = (long){1200000};
    mallocSym_917308_919513 = (x920621+(x920622));
    numeric_int_t* x920625 = (numeric_int_t*)malloc(1200000 * sizeof(numeric_int_t));
    memset(x920625, 0, 1200000 * sizeof(numeric_int_t));
    long x920626 = mallocSym_917309_919521;
    mallocSym_917309_919521 = (x920626+(x920622));
    numeric_int_t x900348 = 0;
    for(; x900348 < 1200000 ; x900348 += 1) {
      
      *(x920625 + x900348) = 0;
    };
    /* VAR */ numeric_int_t x917315 = 0;
    numeric_int_t x900363 = 0;
    for(; x900363 < x891967 ; x900363 += 1) {
      
      struct ORDERSRecord* x900364 = &(x919729[x900363]);
      numeric_int_t x900366 = (x900364->O_CUSTKEY)%(1200000);
      numeric_int_t x900367 = x920625[x900366];
      *(x920625 + x900366) = (x900367+(1));
      numeric_int_t x900370 = x917315;
      x917315 = (x900370+(1));
    };
    numeric_int_t x900380 = 0;
    for(; x900380 < 1200000 ; x900380 += 1) {
      
      numeric_int_t x900381 = x920625[x900380];
      struct ORDERSRecord* x920668 = (struct ORDERSRecord*)malloc(x900381 * sizeof(struct ORDERSRecord));
      memset(x920668, 0, x900381 * sizeof(struct ORDERSRecord));
      long x920669 = mallocSym_900382_919510;
      mallocSym_900382_919510 = (x920669+(((long){x900381})));
      *(x920620 + x900380) = x920668;
      *(x920625 + x900380) = 0;
    };
    x917315 = 0;
    numeric_int_t x900404 = 0;
    for(; x900404 < x891967 ; x900404 += 1) {
      
      struct ORDERSRecord* x900405 = &(x919729[x900404]);
      numeric_int_t x900407 = (x900405->O_CUSTKEY)%(1200000);
      numeric_int_t x900408 = x920625[x900407];
      struct ORDERSRecord* x900409 = x920620[x900407];
      struct ORDERSRecord x900410 = *x900405;
      *(x900409 + x900408) = x900410;
      struct ORDERSRecord* x900412 = &(x900409[x900408]);
      x900405 = x900412;
      numeric_int_t x900414 = x920625[x900407];
      *(x920625 + x900407) = (x900414+(1));
      numeric_int_t x900417 = x917315;
      x917315 = (x900417+(1));
    };
    double* x920709 = (double*)malloc(3 * sizeof(double));
    memset(x920709, 0, 3 * sizeof(double));
    long x920710 = mallocSym_917382_919531;
    mallocSym_917382_919531 = (x920710+(((long){3})));
    struct AGGRecord_String* x920714 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x920714, 0, 1 * sizeof(struct AGGRecord_String));
    long x920715 = mallocSym_917383_919520;
    long x920716 = (long){1};
    mallocSym_917383_919520 = (x920715+(x920716));
    x920714->key = "AVG_C_ACCTBAL"; x920714->aggs = x920709;
    struct timeval x917386 = (struct timeval){0};
    /* VAR */ struct timeval x917387 = x917386;
    struct timeval x917388 = x917387;
    /* VAR */ struct timeval x917389 = x917386;
    struct timeval x917390 = x917389;
    /* VAR */ struct timeval x917391 = x917386;
    struct timeval x917392 = x917391;
    struct timeval* x917393 = &x917390;
    gettimeofday(x917393, NULL);
    /* VAR */ numeric_int_t x917395 = 0;
    /* VAR */ struct AGGRecord_String* x917396 = NULL;
    while(1) {
      
      numeric_int_t x917398 = x917395;
      if (!((x917398<(x891841)))) break; 
      
      numeric_int_t x883273 = x917395;
      struct CUSTOMERRecord* x881936 = &(x919545[x883273]);
      double x881938 = x881936->C_ACCTBAL;
      /* VAR */ boolean_t ite903917 = 0;
      if((x881938>(0.0))) {
        char* x917406 = x881936->C_PHONE;
        char* x917407 = pointer_add(x917406, 0);
        char x917408 = *(x917407);
        /* VAR */ boolean_t x917410 = 0;
        if((x917408==('2'))) {
          char* x917412 = pointer_add(x917406, 1);
          char x917413 = *(x917412);
          x917410 = (x917413==('3'));
        } else {
          
          x917410 = 0;
        };
        boolean_t x917418 = x917410;
        /* VAR */ boolean_t x917419 = 0;
        if(x917418) {
          x917419 = 1;
        } else {
          
          char* x917422 = pointer_add(x917406, 0);
          char x917423 = *(x917422);
          /* VAR */ boolean_t x917425 = 0;
          if((x917423==('2'))) {
            char* x917427 = pointer_add(x917406, 1);
            char x917428 = *(x917427);
            x917425 = (x917428==('9'));
          } else {
            
            x917425 = 0;
          };
          boolean_t x917433 = x917425;
          /* VAR */ boolean_t x917434 = 0;
          if(x917433) {
            x917434 = 1;
          } else {
            
            char* x917437 = pointer_add(x917406, 0);
            char x917438 = *(x917437);
            /* VAR */ boolean_t x917440 = 0;
            if((x917438==('2'))) {
              char* x917442 = pointer_add(x917406, 1);
              char x917443 = *(x917442);
              x917440 = (x917443==('2'));
            } else {
              
              x917440 = 0;
            };
            boolean_t x917448 = x917440;
            /* VAR */ boolean_t x917449 = 0;
            if(x917448) {
              x917449 = 1;
            } else {
              
              char* x917452 = pointer_add(x917406, 0);
              char x917453 = *(x917452);
              /* VAR */ boolean_t x917455 = 0;
              if((x917453==('2'))) {
                char* x917457 = pointer_add(x917406, 1);
                char x917458 = *(x917457);
                x917455 = (x917458==('0'));
              } else {
                
                x917455 = 0;
              };
              boolean_t x917463 = x917455;
              /* VAR */ boolean_t x917464 = 0;
              if(x917463) {
                x917464 = 1;
              } else {
                
                char* x917467 = pointer_add(x917406, 0);
                char x917468 = *(x917467);
                /* VAR */ boolean_t x917470 = 0;
                if((x917468==('2'))) {
                  char* x917472 = pointer_add(x917406, 1);
                  char x917473 = *(x917472);
                  x917470 = (x917473==('4'));
                } else {
                  
                  x917470 = 0;
                };
                boolean_t x917478 = x917470;
                /* VAR */ boolean_t x917479 = 0;
                if(x917478) {
                  x917479 = 1;
                } else {
                  
                  char* x917482 = pointer_add(x917406, 0);
                  char x917483 = *(x917482);
                  /* VAR */ boolean_t x917485 = 0;
                  if((x917483==('2'))) {
                    char* x917487 = pointer_add(x917406, 1);
                    char x917488 = *(x917487);
                    x917485 = (x917488==('6'));
                  } else {
                    
                    x917485 = 0;
                  };
                  boolean_t x917493 = x917485;
                  /* VAR */ boolean_t x917494 = 0;
                  if(x917493) {
                    x917494 = 1;
                  } else {
                    
                    char* x917497 = pointer_add(x917406, 0);
                    char x917498 = *(x917497);
                    /* VAR */ boolean_t x917500 = 0;
                    if((x917498==('2'))) {
                      char* x917502 = pointer_add(x917406, 1);
                      char x917503 = *(x917502);
                      x917500 = (x917503==('5'));
                    } else {
                      
                      x917500 = 0;
                    };
                    boolean_t x917508 = x917500;
                    x917494 = x917508;
                  };
                  boolean_t x917511 = x917494;
                  x917479 = x917511;
                };
                boolean_t x917514 = x917479;
                x917464 = x917514;
              };
              boolean_t x917517 = x917464;
              x917449 = x917517;
            };
            boolean_t x917520 = x917449;
            x917434 = x917520;
          };
          boolean_t x917523 = x917434;
          x917419 = x917523;
        };
        boolean_t x917526 = x917419;
        ite903917 = x917526;
      } else {
        
        ite903917 = 0;
      };
      boolean_t x902781 = ite903917;
      if(x902781) {
        double* x881959 = x920714->aggs;
        double x881973 = x881959[0];
        *x881959 = (x881938+(x881973));
        double x881982 = x881959[1];
        *(x881959 + 1) = (x881982+(1.0));
      };
      numeric_int_t x883328 = x917395;
      x917395 = (x883328+(1));
    };
    double* x917542 = x920714->aggs;
    double x917543 = x917542[0];
    double x917544 = x917542[1];
    *(x917542 + 2) = (x917543/(x917544));
    x917396 = x920714;
    struct AGGRecord_String* x917548 = x917396;
    double x917550 = ((double*) { x917548->aggs })[2];
    /* VAR */ numeric_int_t x917551 = 0;
    numeric_int_t* x917594 = &(x917573);
    GTree* x917595 = g_tree_new(x917594);
    /* VAR */ boolean_t x917596 = 0;
    /* VAR */ numeric_int_t x917597 = 0;
    while(1) {
      
      numeric_int_t x917599 = x917551;
      if (!((x917599<(x891841)))) break; 
      
      numeric_int_t x883457 = x917551;
      struct CUSTOMERRecord* x882098 = &(x919545[x883457]);
      char* x882100 = x882098->C_PHONE;
      char* x899162 = pointer_add(x882100, 0);
      char x899163 = *(x899162);
      /* VAR */ boolean_t ite904009 = 0;
      if((x899163==('2'))) {
        char* x917609 = pointer_add(x882100, 1);
        char x917610 = *(x917609);
        ite904009 = (x917610==('3'));
      } else {
        
        ite904009 = 0;
      };
      boolean_t x902858 = ite904009;
      /* VAR */ boolean_t ite904019 = 0;
      if(x902858) {
        ite904019 = 1;
      } else {
        
        char* x917619 = pointer_add(x882100, 0);
        char x917620 = *(x917619);
        /* VAR */ boolean_t x917622 = 0;
        if((x917620==('2'))) {
          char* x917624 = pointer_add(x882100, 1);
          char x917625 = *(x917624);
          x917622 = (x917625==('9'));
        } else {
          
          x917622 = 0;
        };
        boolean_t x917630 = x917622;
        /* VAR */ boolean_t x917631 = 0;
        if(x917630) {
          x917631 = 1;
        } else {
          
          char* x917634 = pointer_add(x882100, 0);
          char x917635 = *(x917634);
          /* VAR */ boolean_t x917637 = 0;
          if((x917635==('2'))) {
            char* x917639 = pointer_add(x882100, 1);
            char x917640 = *(x917639);
            x917637 = (x917640==('2'));
          } else {
            
            x917637 = 0;
          };
          boolean_t x917645 = x917637;
          /* VAR */ boolean_t x917646 = 0;
          if(x917645) {
            x917646 = 1;
          } else {
            
            char* x917649 = pointer_add(x882100, 0);
            char x917650 = *(x917649);
            /* VAR */ boolean_t x917652 = 0;
            if((x917650==('2'))) {
              char* x917654 = pointer_add(x882100, 1);
              char x917655 = *(x917654);
              x917652 = (x917655==('0'));
            } else {
              
              x917652 = 0;
            };
            boolean_t x917660 = x917652;
            /* VAR */ boolean_t x917661 = 0;
            if(x917660) {
              x917661 = 1;
            } else {
              
              char* x917664 = pointer_add(x882100, 0);
              char x917665 = *(x917664);
              /* VAR */ boolean_t x917667 = 0;
              if((x917665==('2'))) {
                char* x917669 = pointer_add(x882100, 1);
                char x917670 = *(x917669);
                x917667 = (x917670==('4'));
              } else {
                
                x917667 = 0;
              };
              boolean_t x917675 = x917667;
              /* VAR */ boolean_t x917676 = 0;
              if(x917675) {
                x917676 = 1;
              } else {
                
                char* x917679 = pointer_add(x882100, 0);
                char x917680 = *(x917679);
                /* VAR */ boolean_t x917682 = 0;
                if((x917680==('2'))) {
                  char* x917684 = pointer_add(x882100, 1);
                  char x917685 = *(x917684);
                  x917682 = (x917685==('6'));
                } else {
                  
                  x917682 = 0;
                };
                boolean_t x917690 = x917682;
                /* VAR */ boolean_t x917691 = 0;
                if(x917690) {
                  x917691 = 1;
                } else {
                  
                  char* x917694 = pointer_add(x882100, 0);
                  char x917695 = *(x917694);
                  /* VAR */ boolean_t x917697 = 0;
                  if((x917695==('2'))) {
                    char* x917699 = pointer_add(x882100, 1);
                    char x917700 = *(x917699);
                    x917697 = (x917700==('5'));
                  } else {
                    
                    x917697 = 0;
                  };
                  boolean_t x917705 = x917697;
                  x917691 = x917705;
                };
                boolean_t x917708 = x917691;
                x917676 = x917708;
              };
              boolean_t x917711 = x917676;
              x917661 = x917711;
            };
            boolean_t x917714 = x917661;
            x917646 = x917714;
          };
          boolean_t x917717 = x917646;
          x917631 = x917717;
        };
        boolean_t x917720 = x917631;
        ite904019 = x917720;
      };
      boolean_t x902860 = ite904019;
      /* VAR */ boolean_t ite904033 = 0;
      if(x902860) {
        ite904033 = ((x882098->C_ACCTBAL)>(x917550));
      } else {
        
        ite904033 = 0;
      };
      boolean_t x902862 = ite904033;
      if(x902862) {
        /* VAR */ boolean_t resultRetain885025 = 0;
        numeric_int_t x885026 = (x882098->C_CUSTKEY)%(1200000);
        numeric_int_t x885027 = x920625[x885026];
        struct ORDERSRecord* x885028 = x920620[x885026];
        numeric_int_t x900649 = 0;
        for(; x900649 < x885027 ; x900649 += 1) {
          
          struct ORDERSRecord* x900650 = &(x885028[x900649]);
          boolean_t x900654 = !(((x882098->C_CUSTKEY)==((x900650->O_CUSTKEY))));
          boolean_t x900655 = !(x900654);
          if(x900655) {
            resultRetain885025 = 1;
          };
        };
        boolean_t x885042 = resultRetain885025;
        boolean_t x885043 = !(x885042);
        if(x885043) {
          numeric_int_t x899243 = (2-(0))+(1);
          char* x899244 = malloc(x899243);
          char* x899245 = pointer_add((x882098->C_PHONE), 0);
          numeric_int_t x899246 = x899243-(1);
          char* x899247 = strncpy(x899244, x899245, x899246);
          *(x899244 + x899246) = '\0';
          numeric_int_t x899249 = strlen(x899244);
          /* VAR */ numeric_int_t x897908 = 0;
          /* VAR */ numeric_int_t x897909 = 0;
          while(1) {
            
            numeric_int_t x897910 = x897908;
            if (!((x897910<(x899249)))) break; 
            
            numeric_int_t x897912 = x897909;
            numeric_int_t x897913 = x897908;
            char* x899257 = pointer_add(x899244, x897913);
            char x899258 = *(x899257);
            x897909 = (x897912+(x899258));
            numeric_int_t x897918 = x897908;
            x897908 = (x897918+(1));
          };
          numeric_int_t x897922 = x897909;
          numeric_int_t x886464 = x897922&(1048575);
          struct Set_AGGRecord_OptimalString* x887371 = &(x920580[x886464]);
          numeric_int_t x886466 = x917287;
          if((x886464>(x886466))) {
            x917287 = x886464;
          };
          /* VAR */ numeric_int_t i887380 = 0;
          /* VAR */ boolean_t found887381 = 0;
          while(1) {
            
            numeric_int_t x887382 = i887380;
            numeric_int_t x887383 = x887371->maxSize;
            /* VAR */ boolean_t ite904106 = 0;
            if((x887382<(x887383))) {
              boolean_t x917798 = found887381;
              boolean_t x917799 = !(x917798);
              ite904106 = x917799;
            } else {
              
              ite904106 = 0;
            };
            boolean_t x902928 = ite904106;
            if (!(x902928)) break; 
            
            numeric_int_t x887389 = i887380;
            struct AGGRecord_OptimalString* x887390 = &(((struct AGGRecord_OptimalString*) { x887371->array })[x887389]);
            boolean_t x897942 = strcmp((x887390->key), x899244);
            boolean_t x897943 = !(x897942);
            if(x897943) {
              found887381 = 1;
            } else {
              
              numeric_int_t x887394 = i887380;
              i887380 = (x887394+(1));
            };
          };
          boolean_t x887399 = found887381;
          boolean_t x887400 = !(x887399);
          /* VAR */ struct AGGRecord_OptimalString** ite902943 = 0;
          if(x887400) {
            ite902943 = NULL;
          } else {
            
            numeric_int_t x902946 = i887380;
            struct AGGRecord_OptimalString* x902947 = &(((struct AGGRecord_OptimalString*) { x887371->array })[x902946]);
            ite902943 = x902947;
          };
          struct AGGRecord_OptimalString** x887407 = ite902943;
          /* VAR */ struct AGGRecord_OptimalString* ite902953 = 0;
          if((x887407!=(NULL))) {
            ite902953 = x887407;
          } else {
            
            double* x921165 = (double*)malloc(2 * sizeof(double));
            memset(x921165, 0, 2 * sizeof(double));
            long x921166 = mallocSym_902955_919523;
            mallocSym_902955_919523 = (x921166+(((long){2})));
            struct AGGRecord_OptimalString* x921170 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
            memset(x921170, 0, 1 * sizeof(struct AGGRecord_OptimalString));
            long x921171 = mallocSym_902956_919524;
            mallocSym_902956_919524 = (x921171+(x920716));
            x921170->key = x899244; x921170->aggs = x921165;
            struct AGGRecord_OptimalString* x902959 = x887371->array;
            numeric_int_t x902960 = x887371->maxSize;
            struct AGGRecord_OptimalString x902961 = *x921170;
            *(x902959 + x902960) = x902961;
            struct AGGRecord_OptimalString* x902963 = &(x902959[x902960]);
            x921170 = x902963;
            numeric_int_t x902965 = x887371->maxSize;
            x887371->maxSize = (x902965+(1));
            ite902953 = x921170;
          };
          struct AGGRecord_OptimalString* x886479 = ite902953;
          double* x885049 = x886479->aggs;
          double x885050 = x885049[0];
          *x885049 = ((x882098->C_ACCTBAL)+(x885050));
          double x885054 = x885049[1];
          *(x885049 + 1) = (x885054+(1.0));
        };
      };
      numeric_int_t x883480 = x917551;
      x917551 = (x883480+(1));
    };
    numeric_int_t x917857 = x917287;
    numeric_int_t x900761 = 0;
    for(; x900761 < (x917857+(1)) ; x900761 += 1) {
      
      struct Set_AGGRecord_OptimalString* x900762 = &(x920580[x900761]);
      numeric_int_t x900763 = x900762->maxSize;
      numeric_int_t x900756 = 0;
      for(; x900756 < x900763 ; x900756 += 1) {
        
        struct AGGRecord_OptimalString* x900758 = &(((struct AGGRecord_OptimalString*) { x900762->array })[x900756]);
        g_tree_insert(x917595, x900758, x900758);
      };
    };
    while(1) {
      
      boolean_t x883565 = x917596;
      boolean_t x882212 = !(x883565);
      /* VAR */ boolean_t ite904198 = 0;
      if(x882212) {
        numeric_int_t x917889 = g_tree_nnodes(x917595);
        ite904198 = (x917889!=(0));
      } else {
        
        ite904198 = 0;
      };
      boolean_t x903013 = ite904198;
      if (!(x903013)) break; 
      
      void* x895434 = NULL;
      void** x895442 = &(x895434);
      g_tree_foreach(x917595, x895441, x895442);
      struct AGGRecord_OptimalString* x895444 = (struct AGGRecord_OptimalString*){x895434};
      numeric_int_t x895445 = g_tree_remove(x917595, x895444);
      if(0) {
        x917596 = 1;
      } else {
        
        double* x882227 = x895444->aggs;
        double x882228 = x882227[1];
        double x882229 = x882227[0];
        printf("%s|%.0f|%.2f\n", (x895444->key), x882228, x882229);
        numeric_int_t x883584 = x917597;
        x917597 = (x883584+(1));
      };
    };
    numeric_int_t x917917 = x917597;
    printf("(%d rows)\n", x917917);
    struct timeval* x917919 = &x917392;
    gettimeofday(x917919, NULL);
    struct timeval* x917921 = &x917388;
    struct timeval* x917922 = &x917392;
    struct timeval* x917923 = &x917390;
    long x917924 = timeval_subtract(x917921, x917922, x917923);
    printf("Generated code run in %ld milliseconds.\n", x917924);
  };
  /* VAR */ long mallocSum921268 = 0L;
  long x921269 = mallocSym_917288_919507;
  numeric_int_t x921270 = sizeof(struct Set_AGGRecord_OptimalString);
  long x921272 = x921269*(((long){x921270}));
  printf("920580 with type Set_AGGRecord_OptimalString: %ld\n", x921272);
  long x921274 = mallocSum921268;
  mallocSum921268 = (x921274+(x921272));
  long x921277 = mallocSym_893110_919508;
  numeric_int_t x921278 = sizeof(char);
  long x921280 = x921277*(((long){x921278}));
  printf("919676 with type Byte: %ld\n", x921280);
  long x921282 = mallocSum921268;
  mallocSum921268 = (x921282+(x921280));
  long x921285 = mallocSym_893305_919509;
  numeric_int_t x921286 = sizeof(struct ORDERSRecord);
  long x921288 = x921285*(((long){x921286}));
  printf("920659 with type ORDERSRecord: %ld\n", x921288);
  long x921290 = mallocSum921268;
  mallocSum921268 = (x921290+(x921288));
  long x921293 = mallocSym_900382_919510;
  numeric_int_t x921294 = sizeof(struct ORDERSRecord);
  long x921296 = x921293*(((long){x921294}));
  printf("920668 with type ORDERSRecord: %ld\n", x921296);
  long x921298 = mallocSum921268;
  mallocSum921268 = (x921298+(x921296));
  long x921301 = mallocSym_893859_919511;
  numeric_int_t x921302 = sizeof(struct ORDERSRecord);
  long x921304 = x921301*(((long){x921302}));
  printf("919872 with type ORDERSRecord: %ld\n", x921304);
  long x921306 = mallocSum921268;
  mallocSum921268 = (x921306+(x921304));
  long x921309 = mallocSym_893068_919512;
  numeric_int_t x921310 = sizeof(char);
  long x921312 = x921309*(((long){x921310}));
  printf("919618 with type Byte: %ld\n", x921312);
  long x921314 = mallocSum921268;
  mallocSum921268 = (x921314+(x921312));
  long x921317 = mallocSym_917308_919513;
  numeric_int_t x921318 = sizeof(struct ORDERSRecord*);
  long x921320 = x921317*(((long){x921318}));
  printf("920620 with type Pointer[ORDERSRecord]: %ld\n", x921320);
  long x921322 = mallocSum921268;
  mallocSum921268 = (x921322+(x921320));
  long x921325 = mallocSym_893089_919514;
  numeric_int_t x921326 = sizeof(char);
  long x921328 = x921325*(((long){x921326}));
  printf("919647 with type Byte: %ld\n", x921328);
  long x921330 = mallocSum921268;
  mallocSum921268 = (x921330+(x921328));
  long x921333 = mallocSym_893937_919515;
  numeric_int_t x921334 = sizeof(struct AGGRecord_String);
  long x921336 = x921333*(((long){x921334}));
  printf("920024 with type AGGRecord_String: %ld\n", x921336);
  long x921338 = mallocSum921268;
  mallocSum921268 = (x921338+(x921336));
  long x921341 = mallocSym_893273_919516;
  numeric_int_t x921342 = sizeof(struct AGGRecord_OptimalString);
  long x921344 = x921341*(((long){x921342}));
  printf("920587 with type AGGRecord_OptimalString: %ld\n", x921344);
  long x921346 = mallocSum921268;
  mallocSum921268 = (x921346+(x921344));
  long x921349 = mallocSym_893732_919517;
  numeric_int_t x921350 = sizeof(struct CUSTOMERRecord);
  long x921352 = x921349*(((long){x921350}));
  printf("919708 with type CUSTOMERRecord: %ld\n", x921352);
  long x921354 = mallocSum921268;
  mallocSum921268 = (x921354+(x921352));
  long x921357 = mallocSym_893329_919518;
  numeric_int_t x921358 = sizeof(double);
  long x921360 = x921357*(((long){x921358}));
  printf("920019 with type Double: %ld\n", x921360);
  long x921362 = mallocSum921268;
  mallocSum921268 = (x921362+(x921360));
  long x921365 = mallocSym_902572_919519;
  numeric_int_t x921366 = sizeof(double);
  long x921368 = x921365*(((long){x921366}));
  printf("920475 with type Double: %ld\n", x921368);
  long x921370 = mallocSum921268;
  mallocSum921268 = (x921370+(x921368));
  long x921373 = mallocSym_917383_919520;
  numeric_int_t x921374 = sizeof(struct AGGRecord_String);
  long x921376 = x921373*(((long){x921374}));
  printf("920714 with type AGGRecord_String: %ld\n", x921376);
  long x921378 = mallocSum921268;
  mallocSum921268 = (x921378+(x921376));
  long x921381 = mallocSym_917309_919521;
  numeric_int_t x921382 = sizeof(numeric_int_t);
  long x921384 = x921381*(((long){x921382}));
  printf("920625 with type Int: %ld\n", x921384);
  long x921386 = mallocSum921268;
  mallocSum921268 = (x921386+(x921384));
  long x921389 = mallocSym_893230_919522;
  numeric_int_t x921390 = sizeof(char);
  long x921392 = x921389*(((long){x921390}));
  printf("919835 with type Byte: %ld\n", x921392);
  long x921394 = mallocSum921268;
  mallocSum921268 = (x921394+(x921392));
  long x921397 = mallocSym_902955_919523;
  numeric_int_t x921398 = sizeof(double);
  long x921400 = x921397*(((long){x921398}));
  printf("921165 with type Double: %ld\n", x921400);
  long x921402 = mallocSum921268;
  mallocSum921268 = (x921402+(x921400));
  long x921405 = mallocSym_902956_919524;
  numeric_int_t x921406 = sizeof(struct AGGRecord_OptimalString);
  long x921408 = x921405*(((long){x921406}));
  printf("921170 with type AGGRecord_OptimalString: %ld\n", x921408);
  long x921410 = mallocSum921268;
  mallocSum921268 = (x921410+(x921408));
  long x921413 = mallocSym_893251_919525;
  numeric_int_t x921414 = sizeof(char);
  long x921416 = x921413*(((long){x921414}));
  printf("919864 with type Byte: %ld\n", x921416);
  long x921418 = mallocSum921268;
  mallocSum921268 = (x921418+(x921416));
  long x921421 = mallocSym_893879_919526;
  numeric_int_t x921422 = sizeof(struct Set_AGGRecord_OptimalString);
  long x921424 = x921421*(((long){x921422}));
  printf("920592 with type Set_AGGRecord_OptimalString: %ld\n", x921424);
  long x921426 = mallocSum921268;
  mallocSum921268 = (x921426+(x921424));
  long x921429 = mallocSym_900334_919527;
  numeric_int_t x921430 = sizeof(struct AGGRecord_OptimalString);
  long x921432 = x921429*(((long){x921430}));
  printf("920604 with type AGGRecord_OptimalString: %ld\n", x921432);
  long x921434 = mallocSum921268;
  mallocSum921268 = (x921434+(x921432));
  long x921437 = mallocSym_893126_919528;
  numeric_int_t x921438 = sizeof(char);
  long x921440 = x921437*(((long){x921438}));
  printf("919700 with type Byte: %ld\n", x921440);
  long x921442 = mallocSum921268;
  mallocSum921268 = (x921442+(x921440));
  long x921445 = mallocSym_893214_919529;
  numeric_int_t x921446 = sizeof(char);
  long x921448 = x921445*(((long){x921446}));
  printf("919811 with type Byte: %ld\n", x921448);
  long x921450 = mallocSum921268;
  mallocSum921268 = (x921450+(x921448));
  long x921453 = mallocSym_900335_919530;
  numeric_int_t x921454 = sizeof(struct Set_AGGRecord_OptimalString);
  long x921456 = x921453*(((long){x921454}));
  printf("920609 with type Set_AGGRecord_OptimalString: %ld\n", x921456);
  long x921458 = mallocSum921268;
  mallocSum921268 = (x921458+(x921456));
  long x921461 = mallocSym_917382_919531;
  numeric_int_t x921462 = sizeof(double);
  long x921464 = x921461*(((long){x921462}));
  printf("920709 with type Double: %ld\n", x921464);
  long x921466 = mallocSum921268;
  mallocSum921268 = (x921466+(x921464));
  long x921469 = mallocSym_893281_919532;
  numeric_int_t x921470 = sizeof(numeric_int_t);
  long x921472 = x921469*(((long){x921470}));
  printf("919935 with type Int: %ld\n", x921472);
  long x921474 = mallocSum921268;
  mallocSum921268 = (x921474+(x921472));
  long x921477 = mallocSym_893280_919533;
  numeric_int_t x921478 = sizeof(struct ORDERSRecord*);
  long x921480 = x921477*(((long){x921478}));
  printf("919930 with type Pointer[ORDERSRecord]: %ld\n", x921480);
  long x921482 = mallocSum921268;
  mallocSum921268 = (x921482+(x921480));
  long x921485 = mallocSym_893269_919534;
  numeric_int_t x921486 = sizeof(struct Set_AGGRecord_OptimalString);
  long x921488 = x921485*(((long){x921486}));
  printf("919890 with type Set_AGGRecord_OptimalString: %ld\n", x921488);
  long x921490 = mallocSum921268;
  mallocSum921268 = (x921490+(x921488));
  long x921493 = mallocSym_893146_919535;
  numeric_int_t x921494 = sizeof(struct ORDERSRecord);
  long x921496 = x921493*(((long){x921494}));
  printf("919729 with type ORDERSRecord: %ld\n", x921496);
  long x921498 = mallocSum921268;
  mallocSum921268 = (x921498+(x921496));
  long x921501 = mallocSym_893052_919536;
  numeric_int_t x921502 = sizeof(char);
  long x921504 = x921501*(((long){x921502}));
  printf("919594 with type Byte: %ld\n", x921504);
  long x921506 = mallocSum921268;
  mallocSum921268 = (x921506+(x921504));
  long x921509 = mallocSym_893017_919537;
  numeric_int_t x921510 = sizeof(struct CUSTOMERRecord);
  long x921512 = x921509*(((long){x921510}));
  printf("919545 with type CUSTOMERRecord: %ld\n", x921512);
  long x921514 = mallocSum921268;
  mallocSum921268 = (x921514+(x921512));
  long x921517 = mallocSym_902573_919538;
  numeric_int_t x921518 = sizeof(struct AGGRecord_OptimalString);
  long x921520 = x921517*(((long){x921518}));
  printf("920480 with type AGGRecord_OptimalString: %ld\n", x921520);
  long x921522 = mallocSum921268;
  mallocSum921268 = (x921522+(x921520));
  long x921525 = mallocSum921268;
  printf("total: %ld\n", x921525);
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x917573(struct AGGRecord_OptimalString* x882065, struct AGGRecord_OptimalString* x882066) {
  char* x882067 = x882065->key;
  char* x899134 = pointer_add(x882067, 0);
  char x899135 = *(x899134);
  char* x882069 = x882066->key;
  char* x899137 = pointer_add(x882069, 0);
  char x899138 = *(x899137);
  /* VAR */ numeric_int_t res882072 = (x899135-(x899138));
  numeric_int_t x882073 = res882072;
  if((x882073==(0))) {
    char* x899144 = pointer_add(x882067, 1);
    char x899145 = *(x899144);
    char* x899146 = pointer_add(x882069, 1);
    char x899147 = *(x899146);
    res882072 = (x899145-(x899147));
  };
  numeric_int_t x882080 = res882072;
  return x882080; 
}

numeric_int_t x895441(void* x895435, void* x895436, void* x895437) {
  pointer_assign(((struct AGGRecord_OptimalString**){x895437}), ((struct AGGRecord_OptimalString*){x895436}));
  return 1; 
}
