#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct ORDERSRecord;
struct AGGRecord_Int;
struct Q13IntRecord;
struct CUSTOMERRecord;
struct ORDERSRecord {
  numeric_int_t O_CUSTKEY;
  numeric_int_t* O_COMMENT;
};

struct AGGRecord_Int {
  numeric_int_t key;
  double* aggs;
};

struct Q13IntRecord {
  numeric_int_t count;
};

struct CUSTOMERRecord {
  numeric_int_t C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  numeric_int_t C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  numeric_int_t C_MKTSEGMENT;
  char* C_COMMENT;
};


numeric_int_t x584520(struct AGGRecord_Int* x564053, struct AGGRecord_Int* x564054);

numeric_int_t x572884(void* x572878, void* x572879, void* x572880);

int main(int argc, char** argv) {
  /* VAR */ long mallocSym_570863_585897 = 0L;
  /* VAR */ long mallocSym_570989_585898 = 0L;
  /* VAR */ long mallocSym_583686_585899 = 0L;
  /* VAR */ long mallocSym_571539_585900 = 0L;
  /* VAR */ long mallocSym_583481_585901 = 0L;
  /* VAR */ long mallocSym_570645_585902 = 0L;
  /* VAR */ long mallocSym_570746_585903 = 0L;
  /* VAR */ long mallocSym_570919_585904 = 0L;
  /* VAR */ long mallocSym_571504_585905 = 0L;
  /* VAR */ long mallocSym_584354_585906 = 0L;
  /* VAR */ long mallocSym_583971_585907 = 0L;
  /* VAR */ long mallocSym_570973_585908 = 0L;
  /* VAR */ long mallocSym_571489_585909 = 0L;
  /* VAR */ long mallocSym_570910_585910 = 0L;
  /* VAR */ long mallocSym_570704_585911 = 0L;
  /* VAR */ long mallocSym_570977_585912 = 0L;
  /* VAR */ long mallocSym_570725_585913 = 0L;
  /* VAR */ long mallocSym_570974_585914 = 0L;
  /* VAR */ long mallocSym_570900_585915 = 0L;
  /* VAR */ long mallocSym_584342_585916 = 0L;
  /* VAR */ long mallocSym_584339_585917 = 0L;
  /* VAR */ long mallocSym_584338_585918 = 0L;
  /* VAR */ long mallocSym_570879_585919 = 0L;
  /* VAR */ long mallocSym_583982_585920 = 0L;
  /* VAR */ long mallocSym_570983_585921 = 0L;
  /* VAR */ long mallocSym_571317_585922 = 0L;
  /* VAR */ long mallocSym_570762_585923 = 0L;
  /* VAR */ long mallocSym_570688_585924 = 0L;
  /* VAR */ numeric_int_t x567995 = 0;
  numeric_int_t x572268 = sizeof(char*);
  GArray* x572269 = g_array_new(0, 1, x572268);
  /* VAR */ numeric_int_t x567997 = 0;
  numeric_int_t x572271 = sizeof(char*);
  GArray* x572272 = g_array_new(0, 1, x572271);
  /* VAR */ numeric_int_t x567999 = 0;
  numeric_int_t* x585932 = (numeric_int_t*)malloc(12000000 * sizeof(numeric_int_t));
  memset(x585932, 0, 12000000 * sizeof(numeric_int_t));
  long x585933 = mallocSym_570645_585902;
  mallocSym_570645_585902 = (x585933+(((long){12000000})));
  FILE* x583475 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ numeric_int_t x583476 = 0;
  numeric_int_t x583477 = x583476;
  numeric_int_t* x583478 = &x583477;
  numeric_int_t x583479 = fscanf(x583475, "%d", x583478);
  pclose(x583475);
  struct CUSTOMERRecord* x585943 = (struct CUSTOMERRecord*)malloc(x583477 * sizeof(struct CUSTOMERRecord));
  memset(x585943, 0, x583477 * sizeof(struct CUSTOMERRecord));
  long x585944 = mallocSym_583481_585901;
  long x585945 = (long){x583477};
  mallocSym_583481_585901 = (x585944+(x585945));
  numeric_int_t x583482 = O_RDONLY;
  numeric_int_t x583483 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x583482);
  struct stat x583484 = (struct stat){0};
  /* VAR */ struct stat x583485 = x583484;
  struct stat x583486 = x583485;
  struct stat* x583487 = &x583486;
  numeric_int_t x583488 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x583487);
  numeric_int_t x583490 = PROT_READ;
  numeric_int_t x583491 = MAP_PRIVATE;
  char* x583492 = mmap(NULL, (x583487->st_size), x583490, x583491, x583483, 0);
  /* VAR */ numeric_int_t x583493 = 0;
  while(1) {
    
    numeric_int_t x563939 = x583493;
    /* VAR */ boolean_t ite581011 = 0;
    if((x563939<(x583477))) {
      char x583499 = *x583492;
      ite581011 = (x583499!=('\0'));
    } else {
      
      ite581011 = 0;
    };
    boolean_t x579925 = ite581011;
    if (!(x579925)) break; 
    
    /* VAR */ numeric_int_t x569628 = 0;
    numeric_int_t x569629 = x569628;
    numeric_int_t* x569630 = &x569629;
    char* x569631 = strntoi_unchecked(x583492, x569630);
    x583492 = x569631;
    /* VAR */ char* x569633 = x583492;
    while(1) {
      
      char x569634 = *x583492;
      /* VAR */ boolean_t ite581029 = 0;
      if((x569634!=('|'))) {
        char x583516 = *x583492;
        ite581029 = (x583516!=('\n'));
      } else {
        
        ite581029 = 0;
      };
      boolean_t x579936 = ite581029;
      if (!(x579936)) break; 
      
      x583492 += 1;
    };
    char* x569641 = x569633;
    numeric_int_t x569642 = x583492 - x569641;
    numeric_int_t x569643 = x569642+(1);
    char* x585992 = (char*)malloc(x569643 * sizeof(char));
    memset(x585992, 0, x569643 * sizeof(char));
    long x585993 = mallocSym_570688_585924;
    mallocSym_570688_585924 = (x585993+(((long){x569643})));
    char* x569646 = x569633;
    char* x569647 = strncpy(x585992, x569646, x569642);
    x583492 += 1;
    /* VAR */ char* x569649 = x583492;
    while(1) {
      
      char x569650 = *x583492;
      /* VAR */ boolean_t ite581050 = 0;
      if((x569650!=('|'))) {
        char x583536 = *x583492;
        ite581050 = (x583536!=('\n'));
      } else {
        
        ite581050 = 0;
      };
      boolean_t x579950 = ite581050;
      if (!(x579950)) break; 
      
      x583492 += 1;
    };
    char* x569657 = x569649;
    numeric_int_t x569658 = x583492 - x569657;
    numeric_int_t x569659 = x569658+(1);
    char* x586016 = (char*)malloc(x569659 * sizeof(char));
    memset(x586016, 0, x569659 * sizeof(char));
    long x586017 = mallocSym_570704_585911;
    mallocSym_570704_585911 = (x586017+(((long){x569659})));
    char* x569662 = x569649;
    char* x569663 = strncpy(x586016, x569662, x569658);
    x583492 += 1;
    /* VAR */ numeric_int_t x569665 = 0;
    numeric_int_t x569666 = x569665;
    numeric_int_t* x569667 = &x569666;
    char* x569668 = strntoi_unchecked(x583492, x569667);
    x583492 = x569668;
    /* VAR */ char* x569670 = x583492;
    while(1) {
      
      char x569671 = *x583492;
      /* VAR */ boolean_t ite581076 = 0;
      if((x569671!=('|'))) {
        char x583561 = *x583492;
        ite581076 = (x583561!=('\n'));
      } else {
        
        ite581076 = 0;
      };
      boolean_t x579969 = ite581076;
      if (!(x579969)) break; 
      
      x583492 += 1;
    };
    char* x569678 = x569670;
    numeric_int_t x569679 = x583492 - x569678;
    numeric_int_t x569680 = x569679+(1);
    char* x586045 = (char*)malloc(x569680 * sizeof(char));
    memset(x586045, 0, x569680 * sizeof(char));
    long x586046 = mallocSym_570725_585913;
    mallocSym_570725_585913 = (x586046+(((long){x569680})));
    char* x569683 = x569670;
    char* x569684 = strncpy(x586045, x569683, x569679);
    x583492 += 1;
    /* VAR */ double x569686 = 0.0;
    double x569687 = x569686;
    double* x569688 = &x569687;
    char* x569689 = strntod_unchecked(x583492, x569688);
    x583492 = x569689;
    /* VAR */ char* x569691 = x583492;
    while(1) {
      
      char x569692 = *x583492;
      /* VAR */ boolean_t ite581102 = 0;
      if((x569692!=('|'))) {
        char x583586 = *x583492;
        ite581102 = (x583586!=('\n'));
      } else {
        
        ite581102 = 0;
      };
      boolean_t x579988 = ite581102;
      if (!(x579988)) break; 
      
      x583492 += 1;
    };
    char* x569699 = x569691;
    numeric_int_t x569700 = x583492 - x569699;
    numeric_int_t x569701 = x569700+(1);
    char* x586074 = (char*)malloc(x569701 * sizeof(char));
    memset(x586074, 0, x569701 * sizeof(char));
    long x586075 = mallocSym_570746_585903;
    mallocSym_570746_585903 = (x586075+(((long){x569701})));
    char* x569704 = x569691;
    char* x569705 = strncpy(x586074, x569704, x569700);
    x583492 += 1;
    /* VAR */ char* x569707 = x583492;
    while(1) {
      
      char x569708 = *x583492;
      /* VAR */ boolean_t ite581123 = 0;
      if((x569708!=('|'))) {
        char x583606 = *x583492;
        ite581123 = (x583606!=('\n'));
      } else {
        
        ite581123 = 0;
      };
      boolean_t x580002 = ite581123;
      if (!(x580002)) break; 
      
      x583492 += 1;
    };
    char* x569715 = x569707;
    numeric_int_t x569716 = x583492 - x569715;
    numeric_int_t x569717 = x569716+(1);
    char* x586098 = (char*)malloc(x569717 * sizeof(char));
    memset(x586098, 0, x569717 * sizeof(char));
    long x586099 = mallocSym_570762_585923;
    mallocSym_570762_585923 = (x586099+(((long){x569717})));
    char* x569720 = x569707;
    char* x569721 = strncpy(x586098, x569720, x569716);
    x583492 += 1;
    numeric_int_t x568019 = x567997;
    if((x568019>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "C_MKTSEGMENT", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "C_MKTSEGMENT");
    };
    /* VAR */ numeric_int_t x572401 = -1;
    numeric_int_t x572402 = x572272->len;
    numeric_int_t x578255 = 0;
    for(; x578255 < x572402 ; x578255 += 1) {
      
      char* x578256 = g_array_index(x572272, char*, x578255);
      boolean_t x578257 = strcmp(x578256, x586074);
      boolean_t x578258 = !(x578257);
      if(x578258) {
        x572401 = x578255;
        break;
      };
    };
    numeric_int_t x572412 = x572401;
    boolean_t x568025 = !((x572412!=(-1)));
    if(x568025) {
      numeric_int_t x568026 = x567997;
      x567997 = (x568026+(1));
      void* x572419 = &(x586074);
      GArray* x572420 = g_array_append_vals(x572272, x572419, 1);
    };
    /* VAR */ numeric_int_t x572421 = -1;
    numeric_int_t x572422 = x572272->len;
    numeric_int_t x578282 = 0;
    for(; x578282 < x572422 ; x578282 += 1) {
      
      char* x578283 = g_array_index(x572272, char*, x578282);
      boolean_t x578284 = strcmp(x578283, x586074);
      boolean_t x578285 = !(x578284);
      if(x578285) {
        x572421 = x578282;
        break;
      };
    };
    numeric_int_t x572432 = x572421;
    struct CUSTOMERRecord* x586155 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x586155, 0, 1 * sizeof(struct CUSTOMERRecord));
    long x586156 = mallocSym_571317_585922;
    mallocSym_571317_585922 = (x586156+(((long){1})));
    x586155->C_CUSTKEY = x569629; x586155->C_NAME = x585992; x586155->C_ADDRESS = x586016; x586155->C_NATIONKEY = x569666; x586155->C_PHONE = x586045; x586155->C_ACCTBAL = x569687; x586155->C_MKTSEGMENT = x572432; x586155->C_COMMENT = x586098;
    numeric_int_t x563952 = x583493;
    struct CUSTOMERRecord x570782 = *x586155;
    *(x585943 + x563952) = x570782;
    struct CUSTOMERRecord* x570784 = &(x585943[x563952]);
    x586155 = x570784;
    numeric_int_t x563954 = x583493;
    x583493 = (x563954+(1));
  };
  FILE* x583680 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ numeric_int_t x583681 = 0;
  numeric_int_t x583682 = x583681;
  numeric_int_t* x583683 = &x583682;
  numeric_int_t x583684 = fscanf(x583680, "%d", x583683);
  pclose(x583680);
  struct ORDERSRecord* x586176 = (struct ORDERSRecord*)malloc(x583682 * sizeof(struct ORDERSRecord));
  memset(x586176, 0, x583682 * sizeof(struct ORDERSRecord));
  long x586177 = mallocSym_583686_585899;
  mallocSym_583686_585899 = (x586177+(((long){x583682})));
  numeric_int_t x583687 = O_RDONLY;
  numeric_int_t x583688 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x583687);
  /* VAR */ struct stat x583689 = x583484;
  struct stat x583690 = x583689;
  struct stat* x583691 = &x583690;
  numeric_int_t x583692 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x583691);
  numeric_int_t x583694 = PROT_READ;
  numeric_int_t x583695 = MAP_PRIVATE;
  char* x583696 = mmap(NULL, (x583691->st_size), x583694, x583695, x583688, 0);
  /* VAR */ numeric_int_t x583697 = 0;
  while(1) {
    
    numeric_int_t x563962 = x583697;
    /* VAR */ boolean_t ite581221 = 0;
    if((x563962<(x583682))) {
      char x583703 = *x583696;
      ite581221 = (x583703!=('\0'));
    } else {
      
      ite581221 = 0;
    };
    boolean_t x580093 = ite581221;
    if (!(x580093)) break; 
    
    /* VAR */ numeric_int_t x569766 = 0;
    numeric_int_t x569767 = x569766;
    numeric_int_t* x569768 = &x569767;
    char* x569769 = strntoi_unchecked(x583696, x569768);
    x583696 = x569769;
    /* VAR */ numeric_int_t x569771 = 0;
    numeric_int_t x569772 = x569771;
    numeric_int_t* x569773 = &x569772;
    char* x569774 = strntoi_unchecked(x583696, x569773);
    x583696 = x569774;
    char x569776 = *x583696;
    /* VAR */ char x569777 = x569776;
    x583696 += 1;
    x583696 += 1;
    /* VAR */ double x569781 = 0.0;
    double x569782 = x569781;
    double* x569783 = &x569782;
    char* x569784 = strntod_unchecked(x583696, x569783);
    x583696 = x569784;
    /* VAR */ numeric_int_t x569786 = 0;
    numeric_int_t x569787 = x569786;
    numeric_int_t* x569788 = &x569787;
    char* x569789 = strntoi_unchecked(x583696, x569788);
    x583696 = x569789;
    /* VAR */ numeric_int_t x569791 = 0;
    numeric_int_t x569792 = x569791;
    numeric_int_t* x569793 = &x569792;
    char* x569794 = strntoi_unchecked(x583696, x569793);
    x583696 = x569794;
    /* VAR */ numeric_int_t x569796 = 0;
    numeric_int_t x569797 = x569796;
    numeric_int_t* x569798 = &x569797;
    char* x569799 = strntoi_unchecked(x583696, x569798);
    x583696 = x569799;
    /* VAR */ char* x569805 = x583696;
    while(1) {
      
      char x569806 = *x583696;
      /* VAR */ boolean_t ite581273 = 0;
      if((x569806!=('|'))) {
        char x583754 = *x583696;
        ite581273 = (x583754!=('\n'));
      } else {
        
        ite581273 = 0;
      };
      boolean_t x580138 = ite581273;
      if (!(x580138)) break; 
      
      x583696 += 1;
    };
    char* x569813 = x569805;
    numeric_int_t x569814 = x583696 - x569813;
    numeric_int_t x569815 = x569814+(1);
    char* x586258 = (char*)malloc(x569815 * sizeof(char));
    memset(x586258, 0, x569815 * sizeof(char));
    long x586259 = mallocSym_570863_585897;
    mallocSym_570863_585897 = (x586259+(((long){x569815})));
    char* x569818 = x569805;
    char* x569819 = strncpy(x586258, x569818, x569814);
    x583696 += 1;
    /* VAR */ char* x569821 = x583696;
    while(1) {
      
      char x569822 = *x583696;
      /* VAR */ boolean_t ite581294 = 0;
      if((x569822!=('|'))) {
        char x583774 = *x583696;
        ite581294 = (x583774!=('\n'));
      } else {
        
        ite581294 = 0;
      };
      boolean_t x580152 = ite581294;
      if (!(x580152)) break; 
      
      x583696 += 1;
    };
    char* x569829 = x569821;
    numeric_int_t x569830 = x583696 - x569829;
    numeric_int_t x569831 = x569830+(1);
    char* x586282 = (char*)malloc(x569831 * sizeof(char));
    memset(x586282, 0, x569831 * sizeof(char));
    long x586283 = mallocSym_570879_585919;
    mallocSym_570879_585919 = (x586283+(((long){x569831})));
    char* x569834 = x569821;
    char* x569835 = strncpy(x586282, x569834, x569830);
    x583696 += 1;
    /* VAR */ numeric_int_t x569837 = 0;
    numeric_int_t x569838 = x569837;
    numeric_int_t* x569839 = &x569838;
    char* x569840 = strntoi_unchecked(x583696, x569839);
    x583696 = x569840;
    /* VAR */ char* x569842 = x583696;
    while(1) {
      
      char x569843 = *x583696;
      /* VAR */ boolean_t ite581320 = 0;
      if((x569843!=('|'))) {
        char x583799 = *x583696;
        ite581320 = (x583799!=('\n'));
      } else {
        
        ite581320 = 0;
      };
      boolean_t x580171 = ite581320;
      if (!(x580171)) break; 
      
      x583696 += 1;
    };
    char* x569850 = x569842;
    numeric_int_t x569851 = x583696 - x569850;
    numeric_int_t x569852 = x569851+(1);
    char* x586311 = (char*)malloc(x569852 * sizeof(char));
    memset(x586311, 0, x569852 * sizeof(char));
    long x586312 = mallocSym_570900_585915;
    mallocSym_570900_585915 = (x586312+(((long){x569852})));
    char* x569855 = x569842;
    char* x569856 = strncpy(x586311, x569855, x569851);
    x583696 += 1;
    numeric_int_t x568056 = x567995;
    if((x568056>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "O_COMMENT", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "O_COMMENT");
    };
    char* x586324 = (char*)malloc(8 * sizeof(char));
    memset(x586324, 0, 8 * sizeof(char));
    long x586325 = mallocSym_570910_585910;
    mallocSym_570910_585910 = (x586325+(((long){8})));
    *x586324 = 32;
    *(x586324 + 1) = 46;
    *(x586324 + 2) = 33;
    *(x586324 + 3) = 59;
    *(x586324 + 4) = 44;
    *(x586324 + 5) = 58;
    *(x586324 + 6) = 63;
    *(x586324 + 7) = 45;
    numeric_int_t* x586337 = (numeric_int_t*)malloc(15 * sizeof(numeric_int_t));
    memset(x586337, 0, 15 * sizeof(numeric_int_t));
    long x586338 = mallocSym_570919_585904;
    mallocSym_570919_585904 = (x586338+(((long){15})));
    numeric_int_t x578433 = 0;
    for(; x578433 < 15 ; x578433 += 1) {
      
      *(x586337 + x578433) = -1;
    };
    char** x568076 = tokenizeString(x586311);
    numeric_int_t x578496 = 0;
    for(; x578496 < 15 ; x578496 += 1) {
      
      char* x578497 = x568076[x578496];
      /* VAR */ boolean_t ite581424 = 0;
      if((x578497!=(NULL))) {
        boolean_t x583901 = strcmp(x578497, "");
        ite581424 = x583901;
      } else {
        
        ite581424 = 0;
      };
      boolean_t x580262 = ite581424;
      if(x580262) {
        /* VAR */ numeric_int_t x572587 = -1;
        numeric_int_t x572588 = x572269->len;
        numeric_int_t x578454 = 0;
        for(; x578454 < x572588 ; x578454 += 1) {
          
          char* x578455 = g_array_index(x572269, char*, x578454);
          boolean_t x578456 = strcmp(x578455, x578497);
          boolean_t x578457 = !(x578456);
          if(x578457) {
            x572587 = x578454;
            break;
          };
        };
        numeric_int_t x572598 = x572587;
        boolean_t x568082 = !((x572598!=(-1)));
        if(x568082) {
          numeric_int_t x568083 = x567995;
          x567995 = (x568083+(1));
          void* x572605 = &(x578497);
          GArray* x572606 = g_array_append_vals(x572269, x572605, 1);
        };
        /* VAR */ numeric_int_t x572607 = -1;
        numeric_int_t x572608 = x572269->len;
        numeric_int_t x578481 = 0;
        for(; x578481 < x572608 ; x578481 += 1) {
          
          char* x578482 = g_array_index(x572269, char*, x578481);
          boolean_t x578483 = strcmp(x578482, x578497);
          boolean_t x578484 = !(x578483);
          if(x578484) {
            x572607 = x578481;
            break;
          };
        };
        numeric_int_t x572618 = x572607;
        *(x586337 + x578496) = x572618;
        numeric_int_t x568090 = x567999;
        numeric_int_t x568091 = x567999;
        numeric_int_t x568092 = x585932[x568091];
        *(x585932 + x568090) = (x568092+(1));
      };
    };
    numeric_int_t x568098 = x567999;
    x567999 = (x568098+(1));
    struct ORDERSRecord* x586474 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x586474, 0, 1 * sizeof(struct ORDERSRecord));
    long x586475 = mallocSym_571489_585909;
    mallocSym_571489_585909 = (x586475+(((long){1})));
    x586474->O_CUSTKEY = x569772; x586474->O_COMMENT = x586337;
    numeric_int_t x563976 = x583697;
    struct ORDERSRecord x570952 = *x586474;
    *(x586176 + x563976) = x570952;
    struct ORDERSRecord* x570954 = &(x586176[x563976]);
    x586474 = x570954;
    numeric_int_t x563978 = x583697;
    x583697 = (x563978+(1));
  };
  struct Q13IntRecord* x586489 = (struct Q13IntRecord*)malloc(x583477 * sizeof(struct Q13IntRecord));
  memset(x586489, 0, x583477 * sizeof(struct Q13IntRecord));
  long x586490 = mallocSym_583971_585907;
  mallocSym_583971_585907 = (x586490+(x585945));
  numeric_int_t x563984 = 0;
  for(; x563984 < x583477 ; x563984 += 1) {
    
    struct Q13IntRecord* x586507 = (struct Q13IntRecord*)malloc(1 * sizeof(struct Q13IntRecord));
    memset(x586507, 0, 1 * sizeof(struct Q13IntRecord));
    long x586508 = mallocSym_583982_585920;
    mallocSym_583982_585920 = (x586508+(((long){1})));
    x586507->count = 0;
    struct Q13IntRecord x583985 = *x586507;
    *(x586489 + x563984) = x583985;
    struct Q13IntRecord* x583987 = &(x586489[x563984]);
    x586507 = x583987;
  };
  numeric_int_t x563990 = 0;
  for(; x563990 < 1 ; x563990 += 1) {
    
    /* VAR */ numeric_int_t x584337 = 0;
    void* x586889 = (void*)malloc(2097152 * sizeof(void));
    memset(x586889, 0, 2097152 * sizeof(void));
    long x586890 = mallocSym_584338_585918;
    long x586891 = (long){2097152};
    mallocSym_584338_585918 = (x586890+(x586891));
    struct AGGRecord_Int* x586894 = (struct AGGRecord_Int*)malloc(2097152 * sizeof(struct AGGRecord_Int));
    memset(x586894, 0, 2097152 * sizeof(struct AGGRecord_Int));
    long x586895 = mallocSym_584339_585917;
    mallocSym_584339_585917 = (x586895+(x586891));
    x567999 = -1;
    /* VAR */ numeric_int_t x584341 = 0;
    double** x586900 = (double**)malloc(48000000 * sizeof(double*));
    memset(x586900, 0, 48000000 * sizeof(double*));
    long x586901 = mallocSym_584342_585916;
    long x586902 = (long){48000000};
    mallocSym_584342_585916 = (x586901+(x586902));
    /* VAR */ numeric_int_t x584343 = 0;
    while(1) {
      
      numeric_int_t x568944 = x584343;
      if (!((x568944<(48000000)))) break; 
      
      numeric_int_t x568946 = x584343;
      double* x586910 = (double*)malloc(1 * sizeof(double));
      memset(x586910, 0, 1 * sizeof(double));
      long x586911 = mallocSym_570983_585921;
      mallocSym_570983_585921 = (x586911+(((long){1})));
      *(x586900 + x568946) = x586910;
      numeric_int_t x568949 = x584343;
      x584343 = (x568949+(1));
    };
    /* VAR */ numeric_int_t x584353 = 0;
    struct AGGRecord_Int* x586920 = (struct AGGRecord_Int*)malloc(48000000 * sizeof(struct AGGRecord_Int));
    memset(x586920, 0, 48000000 * sizeof(struct AGGRecord_Int));
    long x586921 = mallocSym_584354_585906;
    mallocSym_584354_585906 = (x586921+(x586902));
    /* VAR */ numeric_int_t x584355 = 0;
    while(1) {
      
      numeric_int_t x568956 = x584355;
      if (!((x568956<(48000000)))) break; 
      
      numeric_int_t x568958 = x584355;
      double* x568959 = x586900[x568958];
      struct AGGRecord_Int* x586930 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
      memset(x586930, 0, 1 * sizeof(struct AGGRecord_Int));
      long x586931 = mallocSym_571539_585900;
      mallocSym_571539_585900 = (x586931+(((long){1})));
      x586930->key = 0; x586930->aggs = x568959;
      struct AGGRecord_Int x570997 = *x586930;
      *(x586920 + x568958) = x570997;
      struct AGGRecord_Int* x570999 = &(x586920[x568958]);
      x586930 = x570999;
      numeric_int_t x568962 = x584355;
      x584355 = (x568962+(1));
    };
    struct timeval x584371 = (struct timeval){0};
    /* VAR */ struct timeval x584372 = x584371;
    struct timeval x584373 = x584372;
    /* VAR */ struct timeval x584374 = x584371;
    struct timeval x584375 = x584374;
    /* VAR */ struct timeval x584376 = x584371;
    struct timeval x584377 = x584376;
    struct timeval* x584378 = &x584375;
    gettimeofday(x584378, NULL);
    /* VAR */ numeric_int_t x584380 = -1;
    numeric_int_t x584381 = x572269->len;
    numeric_int_t x578634 = 0;
    for(; x578634 < x584381 ; x578634 += 1) {
      
      char* x578635 = g_array_index(x572269, char*, x578634);
      boolean_t x578636 = strcmp(x578635, "unusual");
      boolean_t x578637 = !(x578636);
      if(x578637) {
        x584380 = x578634;
        break;
      };
    };
    numeric_int_t x584397 = x584380;
    /* VAR */ numeric_int_t x584398 = -1;
    numeric_int_t x584399 = x572269->len;
    numeric_int_t x578653 = 0;
    for(; x578653 < x584399 ; x578653 += 1) {
      
      char* x578654 = g_array_index(x572269, char*, x578653);
      boolean_t x578655 = strcmp(x578654, "packages");
      boolean_t x578656 = !(x578655);
      if(x578656) {
        x584398 = x578653;
        break;
      };
    };
    numeric_int_t x584415 = x584398;
    /* VAR */ numeric_int_t x584416 = 0;
    while(1) {
      
      numeric_int_t x584418 = x584416;
      if (!((x584418<(x583682)))) break; 
      
      numeric_int_t x564732 = x584416;
      struct ORDERSRecord* x564019 = &(x586176[x564732]);
      numeric_int_t* x568132 = x564019->O_COMMENT;
      /* VAR */ numeric_int_t findSlice568133 = 15;
      numeric_int_t x568134 = x567999;
      x567999 = (x568134+(1));
      /* VAR */ numeric_int_t x568137 = 0;
      numeric_int_t x568138 = x567999;
      numeric_int_t x568139 = x585932[x568138];
      while(1) {
        
        numeric_int_t x568140 = x568137;
        if (!((x568140<(x568139)))) break; 
        
        numeric_int_t x568142 = x568137;
        numeric_int_t x568143 = x568132[x568142];
        if((x568143==(x584397))) {
          numeric_int_t x568145 = x568137;
          findSlice568133 = x568145;
          break;
        };
        numeric_int_t x568149 = x568137;
        x568137 = (x568149+(1));
      };
      numeric_int_t x568153 = findSlice568133;
      /* VAR */ numeric_int_t findSlice568154 = 15;
      /* VAR */ numeric_int_t x568155 = x568153;
      numeric_int_t x568156 = x567999;
      numeric_int_t x568157 = x585932[x568156];
      while(1) {
        
        numeric_int_t x568158 = x568155;
        if (!((x568158<(x568157)))) break; 
        
        numeric_int_t x568160 = x568155;
        numeric_int_t x568161 = x568132[x568160];
        if((x568161==(x584415))) {
          numeric_int_t x568163 = x568155;
          findSlice568154 = x568163;
          break;
        };
        numeric_int_t x568167 = x568155;
        x568155 = (x568167+(1));
      };
      numeric_int_t x568171 = findSlice568154;
      /* VAR */ boolean_t ite581999 = 0;
      if((x568153!=(15))) {
        ite581999 = (x568171!=(15));
      } else {
        
        ite581999 = 0;
      };
      boolean_t x580791 = ite581999;
      boolean_t x564027 = !(x580791);
      if(x564027) {
        struct Q13IntRecord* x564032 = &(x586489[(x564019->O_CUSTKEY)]);
        numeric_int_t x564033 = x564032->count;
        x564032->count = (x564033+(1));
      };
      numeric_int_t x564752 = x584416;
      x584416 = (x564752+(1));
    };
    /* VAR */ numeric_int_t x584480 = 0;
    numeric_int_t* x584559 = &(x584520);
    GTree* x584560 = g_tree_new(x584559);
    /* VAR */ boolean_t x584561 = 0;
    /* VAR */ numeric_int_t x584562 = 0;
    while(1) {
      
      numeric_int_t x584564 = x584480;
      if (!((x584564<(x583477)))) break; 
      
      numeric_int_t x564814 = x584480;
      struct Q13IntRecord* x564086 = &(x586489[x564814]);
      numeric_int_t x564088 = x564086->count;
      struct AGGRecord_Int* x566233 = &(x586894[x564088]);
      numeric_int_t x566234 = x584337;
      if((x564088>(x566234))) {
        x584337 = x564088;
      };
      /* VAR */ boolean_t ite582113 = 0;
      if((x566233!=(NULL))) {
        ite582113 = ((x566233->aggs)!=(NULL));
      } else {
        
        ite582113 = 0;
      };
      boolean_t x580897 = ite582113;
      /* VAR */ struct AGGRecord_Int* ite580899 = 0;
      if(x580897) {
        ite580899 = x566233;
      } else {
        
        numeric_int_t x580901 = x584341;
        double* x580902 = x586900[x580901];
        numeric_int_t x580903 = x584341;
        x584341 = (x580903+(1));
        numeric_int_t x580906 = x584353;
        struct AGGRecord_Int* x580907 = &(x586920[x580906]);
        x580907->key = x564088;
        x580907->aggs = x580902;
        numeric_int_t x580910 = x584353;
        x584353 = (x580910+(1));
        struct AGGRecord_Int x580913 = *x580907;
        *(x586894 + x564088) = x580913;
        struct AGGRecord_Int* x580915 = &(x586894[x564088]);
        x580907 = x580915;
        ite580899 = x580907;
      };
      struct AGGRecord_Int* x566241 = ite580899;
      double* x564093 = x566241->aggs;
      double x564107 = x564093[0];
      *x564093 = (x564107+(1.0));
      numeric_int_t x564843 = x584480;
      x584480 = (x564843+(1));
    };
    numeric_int_t x584612 = x584337;
    numeric_int_t x578816 = 0;
    for(; x578816 < (x584612+(1)) ; x578816 += 1) {
      
      struct AGGRecord_Int* x578817 = &(x586894[x578816]);
      /* VAR */ boolean_t ite582171 = 0;
      if((x578817!=(NULL))) {
        ite582171 = ((x578817->aggs)!=(NULL));
      } else {
        
        ite582171 = 0;
      };
      boolean_t x580941 = ite582171;
      if(x580941) {
        g_tree_insert(x584560, x578817, x578817);
      };
    };
    while(1) {
      
      boolean_t x564852 = x584561;
      boolean_t x564127 = !(x564852);
      /* VAR */ boolean_t ite582185 = 0;
      if(x564127) {
        numeric_int_t x584646 = g_tree_nnodes(x584560);
        ite582185 = (x584646!=(0));
      } else {
        
        ite582185 = 0;
      };
      boolean_t x580948 = ite582185;
      if (!(x580948)) break; 
      
      void* x572877 = NULL;
      void** x572885 = &(x572877);
      g_tree_foreach(x584560, x572884, x572885);
      struct AGGRecord_Int* x572887 = (struct AGGRecord_Int*){x572877};
      numeric_int_t x572888 = g_tree_remove(x584560, x572887);
      if(0) {
        x584561 = 1;
      } else {
        
        double x564142 = ((double*) { x572887->aggs })[0];
        printf("%d|%.0f\n", (x572887->key), x564142);
        numeric_int_t x564869 = x584562;
        x584562 = (x564869+(1));
      };
    };
    numeric_int_t x584673 = x584562;
    printf("(%d rows)\n", x584673);
    struct timeval* x584675 = &x584377;
    gettimeofday(x584675, NULL);
    struct timeval* x584677 = &x584373;
    struct timeval* x584678 = &x584377;
    struct timeval* x584679 = &x584375;
    long x584680 = timeval_subtract(x584677, x584678, x584679);
    printf("Generated code run in %ld milliseconds.\n", x584680);
  };
  /* VAR */ long mallocSum587255 = 0L;
  long x587256 = mallocSym_570863_585897;
  numeric_int_t x587257 = sizeof(char);
  long x587259 = x587256*(((long){x587257}));
  printf("586258 with type Byte: %ld\n", x587259);
  long x587261 = mallocSum587255;
  mallocSum587255 = (x587261+(x587259));
  long x587264 = mallocSym_570989_585898;
  numeric_int_t x587265 = sizeof(struct AGGRecord_Int);
  long x587267 = x587264*(((long){x587265}));
  printf("586552 with type AGGRecord_Int: %ld\n", x587267);
  long x587269 = mallocSum587255;
  mallocSum587255 = (x587269+(x587267));
  long x587272 = mallocSym_583686_585899;
  numeric_int_t x587273 = sizeof(struct ORDERSRecord);
  long x587275 = x587272*(((long){x587273}));
  printf("586176 with type ORDERSRecord: %ld\n", x587275);
  long x587277 = mallocSum587255;
  mallocSum587255 = (x587277+(x587275));
  long x587280 = mallocSym_571539_585900;
  numeric_int_t x587281 = sizeof(struct AGGRecord_Int);
  long x587283 = x587280*(((long){x587281}));
  printf("586930 with type AGGRecord_Int: %ld\n", x587283);
  long x587285 = mallocSum587255;
  mallocSum587255 = (x587285+(x587283));
  long x587288 = mallocSym_583481_585901;
  numeric_int_t x587289 = sizeof(struct CUSTOMERRecord);
  long x587291 = x587288*(((long){x587289}));
  printf("585943 with type CUSTOMERRecord: %ld\n", x587291);
  long x587293 = mallocSum587255;
  mallocSum587255 = (x587293+(x587291));
  long x587296 = mallocSym_570645_585902;
  numeric_int_t x587297 = sizeof(numeric_int_t);
  long x587299 = x587296*(((long){x587297}));
  printf("585932 with type Int: %ld\n", x587299);
  long x587301 = mallocSum587255;
  mallocSum587255 = (x587301+(x587299));
  long x587304 = mallocSym_570746_585903;
  numeric_int_t x587305 = sizeof(char);
  long x587307 = x587304*(((long){x587305}));
  printf("586074 with type Byte: %ld\n", x587307);
  long x587309 = mallocSum587255;
  mallocSum587255 = (x587309+(x587307));
  long x587312 = mallocSym_570919_585904;
  numeric_int_t x587313 = sizeof(numeric_int_t);
  long x587315 = x587312*(((long){x587313}));
  printf("586337 with type Int: %ld\n", x587315);
  long x587317 = mallocSum587255;
  mallocSum587255 = (x587317+(x587315));
  long x587320 = mallocSym_571504_585905;
  numeric_int_t x587321 = sizeof(struct Q13IntRecord);
  long x587323 = x587320*(((long){x587321}));
  printf("586495 with type Q13IntRecord: %ld\n", x587323);
  long x587325 = mallocSum587255;
  mallocSum587255 = (x587325+(x587323));
  long x587328 = mallocSym_584354_585906;
  numeric_int_t x587329 = sizeof(struct AGGRecord_Int);
  long x587331 = x587328*(((long){x587329}));
  printf("586920 with type AGGRecord_Int: %ld\n", x587331);
  long x587333 = mallocSum587255;
  mallocSum587255 = (x587333+(x587331));
  long x587336 = mallocSym_583971_585907;
  numeric_int_t x587337 = sizeof(struct Q13IntRecord);
  long x587339 = x587336*(((long){x587337}));
  printf("586489 with type Q13IntRecord: %ld\n", x587339);
  long x587341 = mallocSum587255;
  mallocSum587255 = (x587341+(x587339));
  long x587344 = mallocSym_570973_585908;
  numeric_int_t x587345 = sizeof(void);
  long x587347 = x587344*(((long){x587345}));
  printf("586521 with type Any: %ld\n", x587347);
  long x587349 = mallocSum587255;
  mallocSum587255 = (x587349+(x587347));
  long x587352 = mallocSym_571489_585909;
  numeric_int_t x587353 = sizeof(struct ORDERSRecord);
  long x587355 = x587352*(((long){x587353}));
  printf("586474 with type ORDERSRecord: %ld\n", x587355);
  long x587357 = mallocSum587255;
  mallocSum587255 = (x587357+(x587355));
  long x587360 = mallocSym_570910_585910;
  numeric_int_t x587361 = sizeof(char);
  long x587363 = x587360*(((long){x587361}));
  printf("586324 with type Byte: %ld\n", x587363);
  long x587365 = mallocSum587255;
  mallocSum587255 = (x587365+(x587363));
  long x587368 = mallocSym_570704_585911;
  numeric_int_t x587369 = sizeof(char);
  long x587371 = x587368*(((long){x587369}));
  printf("586016 with type Byte: %ld\n", x587371);
  long x587373 = mallocSum587255;
  mallocSum587255 = (x587373+(x587371));
  long x587376 = mallocSym_570977_585912;
  numeric_int_t x587377 = sizeof(double*);
  long x587379 = x587376*(((long){x587377}));
  printf("586532 with type Pointer[Double]: %ld\n", x587379);
  long x587381 = mallocSum587255;
  mallocSum587255 = (x587381+(x587379));
  long x587384 = mallocSym_570725_585913;
  numeric_int_t x587385 = sizeof(char);
  long x587387 = x587384*(((long){x587385}));
  printf("586045 with type Byte: %ld\n", x587387);
  long x587389 = mallocSum587255;
  mallocSum587255 = (x587389+(x587387));
  long x587392 = mallocSym_570974_585914;
  numeric_int_t x587393 = sizeof(struct AGGRecord_Int);
  long x587395 = x587392*(((long){x587393}));
  printf("586526 with type AGGRecord_Int: %ld\n", x587395);
  long x587397 = mallocSum587255;
  mallocSum587255 = (x587397+(x587395));
  long x587400 = mallocSym_570900_585915;
  numeric_int_t x587401 = sizeof(char);
  long x587403 = x587400*(((long){x587401}));
  printf("586311 with type Byte: %ld\n", x587403);
  long x587405 = mallocSum587255;
  mallocSum587255 = (x587405+(x587403));
  long x587408 = mallocSym_584342_585916;
  numeric_int_t x587409 = sizeof(double*);
  long x587411 = x587408*(((long){x587409}));
  printf("586900 with type Pointer[Double]: %ld\n", x587411);
  long x587413 = mallocSum587255;
  mallocSum587255 = (x587413+(x587411));
  long x587416 = mallocSym_584339_585917;
  numeric_int_t x587417 = sizeof(struct AGGRecord_Int);
  long x587419 = x587416*(((long){x587417}));
  printf("586894 with type AGGRecord_Int: %ld\n", x587419);
  long x587421 = mallocSum587255;
  mallocSum587255 = (x587421+(x587419));
  long x587424 = mallocSym_584338_585918;
  numeric_int_t x587425 = sizeof(void);
  long x587427 = x587424*(((long){x587425}));
  printf("586889 with type Any: %ld\n", x587427);
  long x587429 = mallocSum587255;
  mallocSum587255 = (x587429+(x587427));
  long x587432 = mallocSym_570879_585919;
  numeric_int_t x587433 = sizeof(char);
  long x587435 = x587432*(((long){x587433}));
  printf("586282 with type Byte: %ld\n", x587435);
  long x587437 = mallocSum587255;
  mallocSum587255 = (x587437+(x587435));
  long x587440 = mallocSym_583982_585920;
  numeric_int_t x587441 = sizeof(struct Q13IntRecord);
  long x587443 = x587440*(((long){x587441}));
  printf("586507 with type Q13IntRecord: %ld\n", x587443);
  long x587445 = mallocSum587255;
  mallocSum587255 = (x587445+(x587443));
  long x587448 = mallocSym_570983_585921;
  numeric_int_t x587449 = sizeof(double);
  long x587451 = x587448*(((long){x587449}));
  printf("586910 with type Double: %ld\n", x587451);
  long x587453 = mallocSum587255;
  mallocSum587255 = (x587453+(x587451));
  long x587456 = mallocSym_571317_585922;
  numeric_int_t x587457 = sizeof(struct CUSTOMERRecord);
  long x587459 = x587456*(((long){x587457}));
  printf("586155 with type CUSTOMERRecord: %ld\n", x587459);
  long x587461 = mallocSum587255;
  mallocSum587255 = (x587461+(x587459));
  long x587464 = mallocSym_570762_585923;
  numeric_int_t x587465 = sizeof(char);
  long x587467 = x587464*(((long){x587465}));
  printf("586098 with type Byte: %ld\n", x587467);
  long x587469 = mallocSum587255;
  mallocSum587255 = (x587469+(x587467));
  long x587472 = mallocSym_570688_585924;
  numeric_int_t x587473 = sizeof(char);
  long x587475 = x587472*(((long){x587473}));
  printf("585992 with type Byte: %ld\n", x587475);
  long x587477 = mallocSum587255;
  mallocSum587255 = (x587477+(x587475));
  long x587480 = mallocSum587255;
  printf("total: %ld\n", x587480);
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x584520(struct AGGRecord_Int* x564053, struct AGGRecord_Int* x564054) {
  double* x564055 = x564053->aggs;
  double x564056 = x564055[0];
  double* x564057 = x564054->aggs;
  double x564058 = x564057[0];
  /* VAR */ numeric_int_t ite580851 = 0;
  if((x564056<(x564058))) {
    ite580851 = 1;
  } else {
    
    double x580853 = x564055[0];
    double x580854 = x564057[0];
    /* VAR */ numeric_int_t ite580857 = 0;
    if((x580853>(x580854))) {
      ite580857 = -1;
    } else {
      
      numeric_int_t x580859 = x564053->key;
      numeric_int_t x580860 = x564054->key;
      /* VAR */ numeric_int_t ite580863 = 0;
      if((x580859<(x580860))) {
        ite580863 = 1;
      } else {
        
        /* VAR */ numeric_int_t ite580867 = 0;
        if((x580859>(x580860))) {
          ite580867 = -1;
        } else {
          
          ite580867 = 0;
        };
        numeric_int_t x580866 = ite580867;
        ite580863 = x580866;
      };
      numeric_int_t x580862 = ite580863;
      ite580857 = x580862;
    };
    numeric_int_t x580856 = ite580857;
    ite580851 = x580856;
  };
  numeric_int_t x564070 = ite580851;
  return x564070; 
}

numeric_int_t x572884(void* x572878, void* x572879, void* x572880) {
  pointer_assign(((struct AGGRecord_Int**){x572880}), ((struct AGGRecord_Int*){x572879}));
  return 1; 
}
