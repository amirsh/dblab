#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct LINEITEMRecord;
struct AGGRecord_OptimalString;
struct NATIONRecord;
struct ORDERSRecord;
struct SUPPLIERRecord;
struct Set_AGGRecord_OptimalString;
struct LINEITEMRecord {
  numeric_int_t L_ORDERKEY;
  numeric_int_t L_SUPPKEY;
  numeric_int_t L_COMMITDATE;
  numeric_int_t L_RECEIPTDATE;
};

struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
};

struct NATIONRecord {
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
};

struct ORDERSRecord {
  numeric_int_t O_ORDERKEY;
  char O_ORDERSTATUS;
};

struct SUPPLIERRecord {
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  numeric_int_t S_NATIONKEY;
};

struct Set_AGGRecord_OptimalString {
  numeric_int_t maxSize;
  struct AGGRecord_OptimalString* array;
};


numeric_int_t x874833(struct AGGRecord_OptimalString* x836924, struct AGGRecord_OptimalString* x836925);

numeric_int_t x855218(void* x855212, void* x855213, void* x855214);

int main(int argc, char** argv) {
  /* VAR */ long mallocSym_852058_877538 = 0L;
  /* VAR */ long mallocSym_874622_877539 = 0L;
  /* VAR */ long mallocSym_874621_877540 = 0L;
  /* VAR */ long mallocSym_852269_877541 = 0L;
  /* VAR */ long mallocSym_852172_877542 = 0L;
  /* VAR */ long mallocSym_852154_877543 = 0L;
  /* VAR */ long mallocSym_874782_877544 = 0L;
  /* VAR */ long mallocSym_852133_877545 = 0L;
  /* VAR */ long mallocSym_853045_877546 = 0L;
  /* VAR */ long mallocSym_874603_877547 = 0L;
  /* VAR */ long mallocSym_852294_877548 = 0L;
  /* VAR */ long mallocSym_851912_877549 = 0L;
  /* VAR */ long mallocSym_852727_877550 = 0L;
  /* VAR */ long mallocSym_862212_877551 = 0L;
  /* VAR */ long mallocSym_852841_877552 = 0L;
  /* VAR */ long mallocSym_851933_877553 = 0L;
  /* VAR */ long mallocSym_852244_877554 = 0L;
  /* VAR */ long mallocSym_852220_877555 = 0L;
  /* VAR */ long mallocSym_851862_877556 = 0L;
  /* VAR */ long mallocSym_852195_877557 = 0L;
  /* VAR */ long mallocSym_874770_877558 = 0L;
  /* VAR */ long mallocSym_852196_877559 = 0L;
  /* VAR */ long mallocSym_851826_877560 = 0L;
  /* VAR */ long mallocSym_852099_877561 = 0L;
  /* VAR */ long mallocSym_862279_877562 = 0L;
  /* VAR */ long mallocSym_851810_877563 = 0L;
  /* VAR */ long mallocSym_874583_877564 = 0L;
  /* VAR */ long mallocSym_852183_877565 = 0L;
  /* VAR */ long mallocSym_851974_877566 = 0L;
  /* VAR */ long mallocSym_853065_877567 = 0L;
  /* VAR */ long mallocSym_851842_877568 = 0L;
  /* VAR */ long mallocSym_862213_877569 = 0L;
  /* VAR */ long mallocSym_852300_877570 = 0L;
  /* VAR */ long mallocSym_852176_877571 = 0L;
  /* VAR */ long mallocSym_874695_877572 = 0L;
  /* VAR */ long mallocSym_851673_877573 = 0L;
  /* VAR */ long mallocSym_862357_877574 = 0L;
  /* VAR */ long mallocSym_851954_877575 = 0L;
  /* VAR */ long mallocSym_851896_877576 = 0L;
  /* VAR */ long mallocSym_852245_877577 = 0L;
  /* VAR */ long mallocSym_853203_877578 = 0L;
  /* VAR */ long mallocSym_852042_877579 = 0L;
  /* VAR */ long mallocSym_874696_877580 = 0L;
  /* VAR */ long mallocSym_852079_877581 = 0L;
  /* VAR */ long mallocSym_852306_877582 = 0L;
  /* VAR */ long mallocSym_852968_877583 = 0L;
  FILE* x849967 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x849968 = 0;
  numeric_int_t x849969 = x849968;
  numeric_int_t* x849970 = &x849969;
  numeric_int_t x849971 = fscanf(x849967, "%d", x849970);
  pclose(x849967);
  struct LINEITEMRecord* x877590 = (struct LINEITEMRecord*)malloc(x849969 * sizeof(struct LINEITEMRecord));
  memset(x877590, 0, x849969 * sizeof(struct LINEITEMRecord));
  long x877591 = mallocSym_851673_877573;
  mallocSym_851673_877573 = (x877591+(((long){x849969})));
  numeric_int_t x849975 = O_RDONLY;
  numeric_int_t x849976 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x849975);
  struct stat x849977 = (struct stat){0};
  /* VAR */ struct stat x849978 = x849977;
  struct stat x849979 = x849978;
  struct stat* x849980 = &x849979;
  numeric_int_t x849981 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x849980);
  numeric_int_t x849983 = PROT_READ;
  numeric_int_t x849984 = MAP_PRIVATE;
  char* x836716 = mmap(NULL, (x849980->st_size), x849983, x849984, x849976, 0);
  /* VAR */ numeric_int_t x836717 = 0;
  while(1) {
    
    numeric_int_t x836718 = x836717;
    /* VAR */ boolean_t ite866650 = 0;
    if((x836718<(x849969))) {
      char x873234 = *x836716;
      ite866650 = (x873234!=('\0'));
    } else {
      
      ite866650 = 0;
    };
    boolean_t x864779 = ite866650;
    if (!(x864779)) break; 
    
    /* VAR */ numeric_int_t x849992 = 0;
    numeric_int_t x849993 = x849992;
    numeric_int_t* x849994 = &x849993;
    char* x849995 = strntoi_unchecked(x836716, x849994);
    x836716 = x849995;
    /* VAR */ numeric_int_t x849997 = 0;
    numeric_int_t x849998 = x849997;
    numeric_int_t* x849999 = &x849998;
    char* x850000 = strntoi_unchecked(x836716, x849999);
    x836716 = x850000;
    /* VAR */ numeric_int_t x850002 = 0;
    numeric_int_t x850003 = x850002;
    numeric_int_t* x850004 = &x850003;
    char* x850005 = strntoi_unchecked(x836716, x850004);
    x836716 = x850005;
    /* VAR */ numeric_int_t x850007 = 0;
    numeric_int_t x850008 = x850007;
    numeric_int_t* x850009 = &x850008;
    char* x850010 = strntoi_unchecked(x836716, x850009);
    x836716 = x850010;
    /* VAR */ double x850012 = 0.0;
    double x850013 = x850012;
    double* x850014 = &x850013;
    char* x850015 = strntod_unchecked(x836716, x850014);
    x836716 = x850015;
    /* VAR */ double x850017 = 0.0;
    double x850018 = x850017;
    double* x850019 = &x850018;
    char* x850020 = strntod_unchecked(x836716, x850019);
    x836716 = x850020;
    /* VAR */ double x850022 = 0.0;
    double x850023 = x850022;
    double* x850024 = &x850023;
    char* x850025 = strntod_unchecked(x836716, x850024);
    x836716 = x850025;
    /* VAR */ double x850027 = 0.0;
    double x850028 = x850027;
    double* x850029 = &x850028;
    char* x850030 = strntod_unchecked(x836716, x850029);
    x836716 = x850030;
    char x850032 = *x836716;
    /* VAR */ char x850033 = x850032;
    x836716 += 1;
    x836716 += 1;
    char x850037 = *x836716;
    /* VAR */ char x850038 = x850037;
    x836716 += 1;
    x836716 += 1;
    /* VAR */ numeric_int_t x850042 = 0;
    numeric_int_t x850043 = x850042;
    numeric_int_t* x850044 = &x850043;
    char* x850045 = strntoi_unchecked(x836716, x850044);
    x836716 = x850045;
    /* VAR */ numeric_int_t x850047 = 0;
    numeric_int_t x850048 = x850047;
    numeric_int_t* x850049 = &x850048;
    char* x850050 = strntoi_unchecked(x836716, x850049);
    x836716 = x850050;
    /* VAR */ numeric_int_t x850052 = 0;
    numeric_int_t x850053 = x850052;
    numeric_int_t* x850054 = &x850053;
    char* x850055 = strntoi_unchecked(x836716, x850054);
    x836716 = x850055;
    /* VAR */ numeric_int_t x850061 = 0;
    numeric_int_t x850062 = x850061;
    numeric_int_t* x850063 = &x850062;
    char* x850064 = strntoi_unchecked(x836716, x850063);
    x836716 = x850064;
    /* VAR */ numeric_int_t x850066 = 0;
    numeric_int_t x850067 = x850066;
    numeric_int_t* x850068 = &x850067;
    char* x850069 = strntoi_unchecked(x836716, x850068);
    x836716 = x850069;
    /* VAR */ numeric_int_t x850071 = 0;
    numeric_int_t x850072 = x850071;
    numeric_int_t* x850073 = &x850072;
    char* x850074 = strntoi_unchecked(x836716, x850073);
    x836716 = x850074;
    /* VAR */ numeric_int_t x850080 = 0;
    numeric_int_t x850081 = x850080;
    numeric_int_t* x850082 = &x850081;
    char* x850083 = strntoi_unchecked(x836716, x850082);
    x836716 = x850083;
    /* VAR */ numeric_int_t x850085 = 0;
    numeric_int_t x850086 = x850085;
    numeric_int_t* x850087 = &x850086;
    char* x850088 = strntoi_unchecked(x836716, x850087);
    x836716 = x850088;
    /* VAR */ numeric_int_t x850090 = 0;
    numeric_int_t x850091 = x850090;
    numeric_int_t* x850092 = &x850091;
    char* x850093 = strntoi_unchecked(x836716, x850092);
    x836716 = x850093;
    /* VAR */ char* x850099 = x836716;
    while(1) {
      
      char x850100 = *x836716;
      /* VAR */ boolean_t ite866770 = 0;
      if((x850100!=('|'))) {
        char x873353 = *x836716;
        ite866770 = (x873353!=('\n'));
      } else {
        
        ite866770 = 0;
      };
      boolean_t x864892 = ite866770;
      if (!(x864892)) break; 
      
      x836716 += 1;
    };
    char* x850107 = x850099;
    numeric_int_t x850108 = x836716 - x850107;
    numeric_int_t x850109 = x850108+(1);
    char* x877741 = (char*)malloc(x850109 * sizeof(char));
    memset(x877741, 0, x850109 * sizeof(char));
    long x877742 = mallocSym_851810_877563;
    mallocSym_851810_877563 = (x877742+(((long){x850109})));
    char* x850112 = x850099;
    char* x850113 = strncpy(x877741, x850112, x850108);
    x836716 += 1;
    /* VAR */ char* x850115 = x836716;
    while(1) {
      
      char x850116 = *x836716;
      /* VAR */ boolean_t ite866791 = 0;
      if((x850116!=('|'))) {
        char x873373 = *x836716;
        ite866791 = (x873373!=('\n'));
      } else {
        
        ite866791 = 0;
      };
      boolean_t x864906 = ite866791;
      if (!(x864906)) break; 
      
      x836716 += 1;
    };
    char* x850123 = x850115;
    numeric_int_t x850124 = x836716 - x850123;
    numeric_int_t x850125 = x850124+(1);
    char* x877765 = (char*)malloc(x850125 * sizeof(char));
    memset(x877765, 0, x850125 * sizeof(char));
    long x877766 = mallocSym_851826_877560;
    mallocSym_851826_877560 = (x877766+(((long){x850125})));
    char* x850128 = x850115;
    char* x850129 = strncpy(x877765, x850128, x850124);
    x836716 += 1;
    /* VAR */ char* x850131 = x836716;
    while(1) {
      
      char x850132 = *x836716;
      /* VAR */ boolean_t ite866812 = 0;
      if((x850132!=('|'))) {
        char x873393 = *x836716;
        ite866812 = (x873393!=('\n'));
      } else {
        
        ite866812 = 0;
      };
      boolean_t x864920 = ite866812;
      if (!(x864920)) break; 
      
      x836716 += 1;
    };
    char* x850139 = x850131;
    numeric_int_t x850140 = x836716 - x850139;
    numeric_int_t x850141 = x850140+(1);
    char* x877789 = (char*)malloc(x850141 * sizeof(char));
    memset(x877789, 0, x850141 * sizeof(char));
    long x877790 = mallocSym_851842_877568;
    mallocSym_851842_877568 = (x877790+(((long){x850141})));
    char* x850144 = x850131;
    char* x850145 = strncpy(x877789, x850144, x850140);
    x836716 += 1;
    struct LINEITEMRecord* x877797 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x877797, 0, 1 * sizeof(struct LINEITEMRecord));
    long x877798 = mallocSym_852727_877550;
    mallocSym_852727_877550 = (x877798+(((long){1})));
    x877797->L_ORDERKEY = x849993; x877797->L_SUPPKEY = x850003; x877797->L_COMMITDATE = (((x850062*(10000))+((x850067*(100))))+(x850072)); x877797->L_RECEIPTDATE = (((x850081*(10000))+((x850086*(100))))+(x850091));
    numeric_int_t x836739 = x836717;
    struct LINEITEMRecord x851849 = *x877797;
    *(x877590 + x836739) = x851849;
    struct LINEITEMRecord* x851851 = &(x877590[x836739]);
    x877797 = x851851;
    numeric_int_t x836741 = x836717;
    x836717 = (x836741+(1));
  };
  FILE* x850153 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ numeric_int_t x850154 = 0;
  numeric_int_t x850155 = x850154;
  numeric_int_t* x850156 = &x850155;
  numeric_int_t x850157 = fscanf(x850153, "%d", x850156);
  pclose(x850153);
  struct SUPPLIERRecord* x877818 = (struct SUPPLIERRecord*)malloc(x850155 * sizeof(struct SUPPLIERRecord));
  memset(x877818, 0, x850155 * sizeof(struct SUPPLIERRecord));
  long x877819 = mallocSym_851862_877556;
  mallocSym_851862_877556 = (x877819+(((long){x850155})));
  numeric_int_t x850161 = O_RDONLY;
  numeric_int_t x850162 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x850161);
  /* VAR */ struct stat x850163 = x849977;
  struct stat x850164 = x850163;
  struct stat* x850165 = &x850164;
  numeric_int_t x850166 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x850165);
  numeric_int_t x850168 = PROT_READ;
  numeric_int_t x850169 = MAP_PRIVATE;
  char* x836747 = mmap(NULL, (x850165->st_size), x850168, x850169, x850162, 0);
  /* VAR */ numeric_int_t x836748 = 0;
  while(1) {
    
    numeric_int_t x836749 = x836748;
    /* VAR */ boolean_t ite866861 = 0;
    if((x836749<(x850155))) {
      char x873441 = *x836747;
      ite866861 = (x873441!=('\0'));
    } else {
      
      ite866861 = 0;
    };
    boolean_t x864962 = ite866861;
    if (!(x864962)) break; 
    
    /* VAR */ numeric_int_t x850177 = 0;
    numeric_int_t x850178 = x850177;
    numeric_int_t* x850179 = &x850178;
    char* x850180 = strntoi_unchecked(x836747, x850179);
    x836747 = x850180;
    /* VAR */ char* x850182 = x836747;
    while(1) {
      
      char x850183 = *x836747;
      /* VAR */ boolean_t ite866879 = 0;
      if((x850183!=('|'))) {
        char x873458 = *x836747;
        ite866879 = (x873458!=('\n'));
      } else {
        
        ite866879 = 0;
      };
      boolean_t x864973 = ite866879;
      if (!(x864973)) break; 
      
      x836747 += 1;
    };
    char* x850190 = x850182;
    numeric_int_t x850191 = x836747 - x850190;
    numeric_int_t x850192 = x850191+(1);
    char* x877866 = (char*)malloc(x850192 * sizeof(char));
    memset(x877866, 0, x850192 * sizeof(char));
    long x877867 = mallocSym_851896_877576;
    mallocSym_851896_877576 = (x877867+(((long){x850192})));
    char* x850195 = x850182;
    char* x850196 = strncpy(x877866, x850195, x850191);
    x836747 += 1;
    /* VAR */ char* x850198 = x836747;
    while(1) {
      
      char x850199 = *x836747;
      /* VAR */ boolean_t ite866900 = 0;
      if((x850199!=('|'))) {
        char x873478 = *x836747;
        ite866900 = (x873478!=('\n'));
      } else {
        
        ite866900 = 0;
      };
      boolean_t x864987 = ite866900;
      if (!(x864987)) break; 
      
      x836747 += 1;
    };
    char* x850206 = x850198;
    numeric_int_t x850207 = x836747 - x850206;
    numeric_int_t x850208 = x850207+(1);
    char* x877890 = (char*)malloc(x850208 * sizeof(char));
    memset(x877890, 0, x850208 * sizeof(char));
    long x877891 = mallocSym_851912_877549;
    mallocSym_851912_877549 = (x877891+(((long){x850208})));
    char* x850211 = x850198;
    char* x850212 = strncpy(x877890, x850211, x850207);
    x836747 += 1;
    /* VAR */ numeric_int_t x850214 = 0;
    numeric_int_t x850215 = x850214;
    numeric_int_t* x850216 = &x850215;
    char* x850217 = strntoi_unchecked(x836747, x850216);
    x836747 = x850217;
    /* VAR */ char* x850219 = x836747;
    while(1) {
      
      char x850220 = *x836747;
      /* VAR */ boolean_t ite866926 = 0;
      if((x850220!=('|'))) {
        char x873503 = *x836747;
        ite866926 = (x873503!=('\n'));
      } else {
        
        ite866926 = 0;
      };
      boolean_t x865006 = ite866926;
      if (!(x865006)) break; 
      
      x836747 += 1;
    };
    char* x850227 = x850219;
    numeric_int_t x850228 = x836747 - x850227;
    numeric_int_t x850229 = x850228+(1);
    char* x877919 = (char*)malloc(x850229 * sizeof(char));
    memset(x877919, 0, x850229 * sizeof(char));
    long x877920 = mallocSym_851933_877553;
    mallocSym_851933_877553 = (x877920+(((long){x850229})));
    char* x850232 = x850219;
    char* x850233 = strncpy(x877919, x850232, x850228);
    x836747 += 1;
    /* VAR */ double x850235 = 0.0;
    double x850236 = x850235;
    double* x850237 = &x850236;
    char* x850238 = strntod_unchecked(x836747, x850237);
    x836747 = x850238;
    /* VAR */ char* x850240 = x836747;
    while(1) {
      
      char x850241 = *x836747;
      /* VAR */ boolean_t ite866952 = 0;
      if((x850241!=('|'))) {
        char x873528 = *x836747;
        ite866952 = (x873528!=('\n'));
      } else {
        
        ite866952 = 0;
      };
      boolean_t x865025 = ite866952;
      if (!(x865025)) break; 
      
      x836747 += 1;
    };
    char* x850248 = x850240;
    numeric_int_t x850249 = x836747 - x850248;
    numeric_int_t x850250 = x850249+(1);
    char* x877948 = (char*)malloc(x850250 * sizeof(char));
    memset(x877948, 0, x850250 * sizeof(char));
    long x877949 = mallocSym_851954_877575;
    mallocSym_851954_877575 = (x877949+(((long){x850250})));
    char* x850253 = x850240;
    char* x850254 = strncpy(x877948, x850253, x850249);
    x836747 += 1;
    struct SUPPLIERRecord* x877956 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x877956, 0, 1 * sizeof(struct SUPPLIERRecord));
    long x877957 = mallocSym_852841_877552;
    mallocSym_852841_877552 = (x877957+(((long){1})));
    x877956->S_SUPPKEY = x850178; x877956->S_NAME = x877866; x877956->S_NATIONKEY = x850215;
    numeric_int_t x836761 = x836748;
    struct SUPPLIERRecord x851961 = *x877956;
    *(x877818 + x836761) = x851961;
    struct SUPPLIERRecord* x851963 = &(x877818[x836761]);
    x877956 = x851963;
    numeric_int_t x836763 = x836748;
    x836748 = (x836763+(1));
  };
  FILE* x850262 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ numeric_int_t x850263 = 0;
  numeric_int_t x850264 = x850263;
  numeric_int_t* x850265 = &x850264;
  numeric_int_t x850266 = fscanf(x850262, "%d", x850265);
  pclose(x850262);
  struct ORDERSRecord* x877977 = (struct ORDERSRecord*)malloc(x850264 * sizeof(struct ORDERSRecord));
  memset(x877977, 0, x850264 * sizeof(struct ORDERSRecord));
  long x877978 = mallocSym_851974_877566;
  mallocSym_851974_877566 = (x877978+(((long){x850264})));
  numeric_int_t x850270 = O_RDONLY;
  numeric_int_t x850271 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x850270);
  /* VAR */ struct stat x850272 = x849977;
  struct stat x850273 = x850272;
  struct stat* x850274 = &x850273;
  numeric_int_t x850275 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x850274);
  numeric_int_t x850277 = PROT_READ;
  numeric_int_t x850278 = MAP_PRIVATE;
  char* x836769 = mmap(NULL, (x850274->st_size), x850277, x850278, x850271, 0);
  /* VAR */ numeric_int_t x836770 = 0;
  while(1) {
    
    numeric_int_t x836771 = x836770;
    /* VAR */ boolean_t ite867001 = 0;
    if((x836771<(x850264))) {
      char x873576 = *x836769;
      ite867001 = (x873576!=('\0'));
    } else {
      
      ite867001 = 0;
    };
    boolean_t x865067 = ite867001;
    if (!(x865067)) break; 
    
    /* VAR */ numeric_int_t x850286 = 0;
    numeric_int_t x850287 = x850286;
    numeric_int_t* x850288 = &x850287;
    char* x850289 = strntoi_unchecked(x836769, x850288);
    x836769 = x850289;
    /* VAR */ numeric_int_t x850291 = 0;
    numeric_int_t x850292 = x850291;
    numeric_int_t* x850293 = &x850292;
    char* x850294 = strntoi_unchecked(x836769, x850293);
    x836769 = x850294;
    char x850296 = *x836769;
    /* VAR */ char x850297 = x850296;
    x836769 += 1;
    x836769 += 1;
    char x850300 = x850297;
    /* VAR */ double x850301 = 0.0;
    double x850302 = x850301;
    double* x850303 = &x850302;
    char* x850304 = strntod_unchecked(x836769, x850303);
    x836769 = x850304;
    /* VAR */ numeric_int_t x850306 = 0;
    numeric_int_t x850307 = x850306;
    numeric_int_t* x850308 = &x850307;
    char* x850309 = strntoi_unchecked(x836769, x850308);
    x836769 = x850309;
    /* VAR */ numeric_int_t x850311 = 0;
    numeric_int_t x850312 = x850311;
    numeric_int_t* x850313 = &x850312;
    char* x850314 = strntoi_unchecked(x836769, x850313);
    x836769 = x850314;
    /* VAR */ numeric_int_t x850316 = 0;
    numeric_int_t x850317 = x850316;
    numeric_int_t* x850318 = &x850317;
    char* x850319 = strntoi_unchecked(x836769, x850318);
    x836769 = x850319;
    /* VAR */ char* x850325 = x836769;
    while(1) {
      
      char x850326 = *x836769;
      /* VAR */ boolean_t ite867053 = 0;
      if((x850326!=('|'))) {
        char x873627 = *x836769;
        ite867053 = (x873627!=('\n'));
      } else {
        
        ite867053 = 0;
      };
      boolean_t x865112 = ite867053;
      if (!(x865112)) break; 
      
      x836769 += 1;
    };
    char* x850333 = x850325;
    numeric_int_t x850334 = x836769 - x850333;
    numeric_int_t x850335 = x850334+(1);
    char* x878059 = (char*)malloc(x850335 * sizeof(char));
    memset(x878059, 0, x850335 * sizeof(char));
    long x878060 = mallocSym_852042_877579;
    mallocSym_852042_877579 = (x878060+(((long){x850335})));
    char* x850338 = x850325;
    char* x850339 = strncpy(x878059, x850338, x850334);
    x836769 += 1;
    /* VAR */ char* x850341 = x836769;
    while(1) {
      
      char x850342 = *x836769;
      /* VAR */ boolean_t ite867074 = 0;
      if((x850342!=('|'))) {
        char x873647 = *x836769;
        ite867074 = (x873647!=('\n'));
      } else {
        
        ite867074 = 0;
      };
      boolean_t x865126 = ite867074;
      if (!(x865126)) break; 
      
      x836769 += 1;
    };
    char* x850349 = x850341;
    numeric_int_t x850350 = x836769 - x850349;
    numeric_int_t x850351 = x850350+(1);
    char* x878083 = (char*)malloc(x850351 * sizeof(char));
    memset(x878083, 0, x850351 * sizeof(char));
    long x878084 = mallocSym_852058_877538;
    mallocSym_852058_877538 = (x878084+(((long){x850351})));
    char* x850354 = x850341;
    char* x850355 = strncpy(x878083, x850354, x850350);
    x836769 += 1;
    /* VAR */ numeric_int_t x850357 = 0;
    numeric_int_t x850358 = x850357;
    numeric_int_t* x850359 = &x850358;
    char* x850360 = strntoi_unchecked(x836769, x850359);
    x836769 = x850360;
    /* VAR */ char* x850362 = x836769;
    while(1) {
      
      char x850363 = *x836769;
      /* VAR */ boolean_t ite867100 = 0;
      if((x850363!=('|'))) {
        char x873672 = *x836769;
        ite867100 = (x873672!=('\n'));
      } else {
        
        ite867100 = 0;
      };
      boolean_t x865145 = ite867100;
      if (!(x865145)) break; 
      
      x836769 += 1;
    };
    char* x850370 = x850362;
    numeric_int_t x850371 = x836769 - x850370;
    numeric_int_t x850372 = x850371+(1);
    char* x878112 = (char*)malloc(x850372 * sizeof(char));
    memset(x878112, 0, x850372 * sizeof(char));
    long x878113 = mallocSym_852079_877581;
    mallocSym_852079_877581 = (x878113+(((long){x850372})));
    char* x850375 = x850362;
    char* x850376 = strncpy(x878112, x850375, x850371);
    x836769 += 1;
    struct ORDERSRecord* x878120 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x878120, 0, 1 * sizeof(struct ORDERSRecord));
    long x878121 = mallocSym_852968_877583;
    mallocSym_852968_877583 = (x878121+(((long){1})));
    x878120->O_ORDERKEY = x850287; x878120->O_ORDERSTATUS = x850300;
    numeric_int_t x836785 = x836770;
    struct ORDERSRecord x852086 = *x878120;
    *(x877977 + x836785) = x852086;
    struct ORDERSRecord* x852088 = &(x877977[x836785]);
    x878120 = x852088;
    numeric_int_t x836787 = x836770;
    x836770 = (x836787+(1));
  };
  FILE* x850384 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ numeric_int_t x850385 = 0;
  numeric_int_t x850386 = x850385;
  numeric_int_t* x850387 = &x850386;
  numeric_int_t x850388 = fscanf(x850384, "%d", x850387);
  pclose(x850384);
  struct NATIONRecord* x878141 = (struct NATIONRecord*)malloc(x850386 * sizeof(struct NATIONRecord));
  memset(x878141, 0, x850386 * sizeof(struct NATIONRecord));
  long x878142 = mallocSym_852099_877561;
  mallocSym_852099_877561 = (x878142+(((long){x850386})));
  numeric_int_t x850392 = O_RDONLY;
  numeric_int_t x850393 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x850392);
  /* VAR */ struct stat x850394 = x849977;
  struct stat x850395 = x850394;
  struct stat* x850396 = &x850395;
  numeric_int_t x850397 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x850396);
  numeric_int_t x850399 = PROT_READ;
  numeric_int_t x850400 = MAP_PRIVATE;
  char* x836793 = mmap(NULL, (x850396->st_size), x850399, x850400, x850393, 0);
  /* VAR */ numeric_int_t x836794 = 0;
  while(1) {
    
    numeric_int_t x836795 = x836794;
    /* VAR */ boolean_t ite867149 = 0;
    if((x836795<(x850386))) {
      char x873720 = *x836793;
      ite867149 = (x873720!=('\0'));
    } else {
      
      ite867149 = 0;
    };
    boolean_t x865187 = ite867149;
    if (!(x865187)) break; 
    
    /* VAR */ numeric_int_t x850408 = 0;
    numeric_int_t x850409 = x850408;
    numeric_int_t* x850410 = &x850409;
    char* x850411 = strntoi_unchecked(x836793, x850410);
    x836793 = x850411;
    /* VAR */ char* x850413 = x836793;
    while(1) {
      
      char x850414 = *x836793;
      /* VAR */ boolean_t ite867167 = 0;
      if((x850414!=('|'))) {
        char x873737 = *x836793;
        ite867167 = (x873737!=('\n'));
      } else {
        
        ite867167 = 0;
      };
      boolean_t x865198 = ite867167;
      if (!(x865198)) break; 
      
      x836793 += 1;
    };
    char* x850421 = x850413;
    numeric_int_t x850422 = x836793 - x850421;
    numeric_int_t x850423 = x850422+(1);
    char* x878189 = (char*)malloc(x850423 * sizeof(char));
    memset(x878189, 0, x850423 * sizeof(char));
    long x878190 = mallocSym_852133_877545;
    mallocSym_852133_877545 = (x878190+(((long){x850423})));
    char* x850426 = x850413;
    char* x850427 = strncpy(x878189, x850426, x850422);
    x836793 += 1;
    /* VAR */ numeric_int_t x850429 = 0;
    numeric_int_t x850430 = x850429;
    numeric_int_t* x850431 = &x850430;
    char* x850432 = strntoi_unchecked(x836793, x850431);
    x836793 = x850432;
    /* VAR */ char* x850434 = x836793;
    while(1) {
      
      char x850435 = *x836793;
      /* VAR */ boolean_t ite867193 = 0;
      if((x850435!=('|'))) {
        char x873762 = *x836793;
        ite867193 = (x873762!=('\n'));
      } else {
        
        ite867193 = 0;
      };
      boolean_t x865217 = ite867193;
      if (!(x865217)) break; 
      
      x836793 += 1;
    };
    char* x850442 = x850434;
    numeric_int_t x850443 = x836793 - x850442;
    numeric_int_t x850444 = x850443+(1);
    char* x878218 = (char*)malloc(x850444 * sizeof(char));
    memset(x878218, 0, x850444 * sizeof(char));
    long x878219 = mallocSym_852154_877543;
    mallocSym_852154_877543 = (x878219+(((long){x850444})));
    char* x850447 = x850434;
    char* x850448 = strncpy(x878218, x850447, x850443);
    x836793 += 1;
    struct NATIONRecord* x878226 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x878226, 0, 1 * sizeof(struct NATIONRecord));
    long x878227 = mallocSym_853045_877546;
    mallocSym_853045_877546 = (x878227+(((long){1})));
    x878226->N_NATIONKEY = x850409; x878226->N_NAME = x878189;
    numeric_int_t x836804 = x836794;
    struct NATIONRecord x852161 = *x878226;
    *(x878141 + x836804) = x852161;
    struct NATIONRecord* x852163 = &(x878141[x836804]);
    x878226 = x852163;
    numeric_int_t x836806 = x836794;
    x836794 = (x836806+(1));
  };
  numeric_int_t x836811 = 0;
  for(; x836811 < 1 ; x836811 += 1) {
    
    /* VAR */ numeric_int_t x874582 = 0;
    struct Set_AGGRecord_OptimalString* x879104 = (struct Set_AGGRecord_OptimalString*)malloc(160000 * sizeof(struct Set_AGGRecord_OptimalString));
    memset(x879104, 0, 160000 * sizeof(struct Set_AGGRecord_OptimalString));
    long x879105 = mallocSym_874583_877564;
    mallocSym_874583_877564 = (x879105+(((long){160000})));
    numeric_int_t x862211 = 0;
    for(; x862211 < 160000 ; x862211 += 1) {
      
      struct AGGRecord_OptimalString* x879128 = (struct AGGRecord_OptimalString*)malloc(256 * sizeof(struct AGGRecord_OptimalString));
      memset(x879128, 0, 256 * sizeof(struct AGGRecord_OptimalString));
      long x879129 = mallocSym_862212_877551;
      mallocSym_862212_877551 = (x879129+(((long){256})));
      struct Set_AGGRecord_OptimalString* x879133 = (struct Set_AGGRecord_OptimalString*)malloc(1 * sizeof(struct Set_AGGRecord_OptimalString));
      memset(x879133, 0, 1 * sizeof(struct Set_AGGRecord_OptimalString));
      long x879134 = mallocSym_862213_877569;
      mallocSym_862213_877569 = (x879134+(((long){1})));
      x879133->maxSize = 0; x879133->array = x879128;
      struct Set_AGGRecord_OptimalString x862216 = *x879133;
      *(x879104 + x862211) = x862216;
      struct Set_AGGRecord_OptimalString* x862218 = &(x879104[x862211]);
      x879133 = x862218;
    };
    struct ORDERSRecord* x879144 = (struct ORDERSRecord*)malloc(60000000 * sizeof(struct ORDERSRecord));
    memset(x879144, 0, 60000000 * sizeof(struct ORDERSRecord));
    long x879145 = mallocSym_874603_877547;
    long x879146 = (long){60000000};
    mallocSym_874603_877547 = (x879145+(x879146));
    numeric_int_t x862231 = 0;
    for(; x862231 < x850264 ; x862231 += 1) {
      
      struct ORDERSRecord* x862232 = &(x877977[x862231]);
      numeric_int_t x862234 = (x862232->O_ORDERKEY)%(60000000);
      struct ORDERSRecord x862235 = *x862232;
      *(x879144 + x862234) = x862235;
      struct ORDERSRecord* x862237 = &(x879144[x862234]);
      x862232 = x862237;
    };
    struct LINEITEMRecord** x879166 = (struct LINEITEMRecord**)malloc(60000000 * sizeof(struct LINEITEMRecord*));
    memset(x879166, 0, 60000000 * sizeof(struct LINEITEMRecord*));
    long x879167 = mallocSym_874621_877540;
    mallocSym_874621_877540 = (x879167+(x879146));
    numeric_int_t* x879170 = (numeric_int_t*)malloc(60000000 * sizeof(numeric_int_t));
    memset(x879170, 0, 60000000 * sizeof(numeric_int_t));
    long x879171 = mallocSym_874622_877539;
    mallocSym_874622_877539 = (x879171+(x879146));
    numeric_int_t x862245 = 0;
    for(; x862245 < 60000000 ; x862245 += 1) {
      
      *(x879170 + x862245) = 0;
    };
    /* VAR */ numeric_int_t x874628 = 0;
    numeric_int_t x862260 = 0;
    for(; x862260 < x849969 ; x862260 += 1) {
      
      struct LINEITEMRecord* x862261 = &(x877590[x862260]);
      numeric_int_t x862263 = (x862261->L_ORDERKEY)%(60000000);
      numeric_int_t x862264 = x879170[x862263];
      *(x879170 + x862263) = (x862264+(1));
      numeric_int_t x862267 = x874628;
      x874628 = (x862267+(1));
    };
    numeric_int_t x862277 = 0;
    for(; x862277 < 60000000 ; x862277 += 1) {
      
      numeric_int_t x862278 = x879170[x862277];
      struct LINEITEMRecord* x879213 = (struct LINEITEMRecord*)malloc(x862278 * sizeof(struct LINEITEMRecord));
      memset(x879213, 0, x862278 * sizeof(struct LINEITEMRecord));
      long x879214 = mallocSym_862279_877562;
      mallocSym_862279_877562 = (x879214+(((long){x862278})));
      *(x879166 + x862277) = x879213;
      *(x879170 + x862277) = 0;
    };
    x874628 = 0;
    numeric_int_t x862301 = 0;
    for(; x862301 < x849969 ; x862301 += 1) {
      
      struct LINEITEMRecord* x862302 = &(x877590[x862301]);
      numeric_int_t x862304 = (x862302->L_ORDERKEY)%(60000000);
      numeric_int_t x862305 = x879170[x862304];
      struct LINEITEMRecord* x862306 = x879166[x862304];
      struct LINEITEMRecord x862307 = *x862302;
      *(x862306 + x862305) = x862307;
      struct LINEITEMRecord* x862309 = &(x862306[x862305]);
      x862302 = x862309;
      numeric_int_t x862311 = x879170[x862304];
      *(x879170 + x862304) = (x862311+(1));
      numeric_int_t x862314 = x874628;
      x874628 = (x862314+(1));
    };
    struct LINEITEMRecord** x879254 = (struct LINEITEMRecord**)malloc(80000 * sizeof(struct LINEITEMRecord*));
    memset(x879254, 0, 80000 * sizeof(struct LINEITEMRecord*));
    long x879255 = mallocSym_874695_877572;
    long x879256 = (long){80000};
    mallocSym_874695_877572 = (x879255+(x879256));
    numeric_int_t* x879259 = (numeric_int_t*)malloc(80000 * sizeof(numeric_int_t));
    memset(x879259, 0, 80000 * sizeof(numeric_int_t));
    long x879260 = mallocSym_874696_877580;
    mallocSym_874696_877580 = (x879260+(x879256));
    numeric_int_t x862323 = 0;
    for(; x862323 < 80000 ; x862323 += 1) {
      
      *(x879259 + x862323) = 0;
    };
    /* VAR */ numeric_int_t x874702 = 0;
    numeric_int_t x862338 = 0;
    for(; x862338 < x849969 ; x862338 += 1) {
      
      struct LINEITEMRecord* x862339 = &(x877590[x862338]);
      numeric_int_t x862341 = (x862339->L_SUPPKEY)%(80000);
      numeric_int_t x862342 = x879259[x862341];
      *(x879259 + x862341) = (x862342+(1));
      numeric_int_t x862345 = x874702;
      x874702 = (x862345+(1));
    };
    numeric_int_t x862355 = 0;
    for(; x862355 < 80000 ; x862355 += 1) {
      
      numeric_int_t x862356 = x879259[x862355];
      struct LINEITEMRecord* x879302 = (struct LINEITEMRecord*)malloc(x862356 * sizeof(struct LINEITEMRecord));
      memset(x879302, 0, x862356 * sizeof(struct LINEITEMRecord));
      long x879303 = mallocSym_862357_877574;
      mallocSym_862357_877574 = (x879303+(((long){x862356})));
      *(x879254 + x862355) = x879302;
      *(x879259 + x862355) = 0;
    };
    x874702 = 0;
    numeric_int_t x862379 = 0;
    for(; x862379 < x849969 ; x862379 += 1) {
      
      struct LINEITEMRecord* x862380 = &(x877590[x862379]);
      numeric_int_t x862382 = (x862380->L_SUPPKEY)%(80000);
      numeric_int_t x862383 = x879259[x862382];
      struct LINEITEMRecord* x862384 = x879254[x862382];
      struct LINEITEMRecord x862385 = *x862380;
      *(x862384 + x862383) = x862385;
      struct LINEITEMRecord* x862387 = &(x862384[x862383]);
      x862380 = x862387;
      numeric_int_t x862389 = x879259[x862382];
      *(x879259 + x862382) = (x862389+(1));
      numeric_int_t x862392 = x874702;
      x874702 = (x862392+(1));
    };
    /* VAR */ numeric_int_t x874769 = 0;
    double** x879344 = (double**)malloc(80000 * sizeof(double*));
    memset(x879344, 0, 80000 * sizeof(double*));
    long x879345 = mallocSym_874770_877558;
    mallocSym_874770_877558 = (x879345+(x879256));
    /* VAR */ numeric_int_t x874771 = 0;
    while(1) {
      
      numeric_int_t x849074 = x874771;
      if (!((x849074<(80000)))) break; 
      
      numeric_int_t x849076 = x874771;
      double* x879353 = (double*)malloc(1 * sizeof(double));
      memset(x879353, 0, 1 * sizeof(double));
      long x879354 = mallocSym_852300_877570;
      mallocSym_852300_877570 = (x879354+(((long){1})));
      *(x879344 + x849076) = x879353;
      numeric_int_t x849079 = x874771;
      x874771 = (x849079+(1));
    };
    /* VAR */ numeric_int_t x874781 = 0;
    struct AGGRecord_OptimalString* x879363 = (struct AGGRecord_OptimalString*)malloc(80000 * sizeof(struct AGGRecord_OptimalString));
    memset(x879363, 0, 80000 * sizeof(struct AGGRecord_OptimalString));
    long x879364 = mallocSym_874782_877544;
    mallocSym_874782_877544 = (x879364+(x879256));
    /* VAR */ numeric_int_t x874783 = 0;
    while(1) {
      
      numeric_int_t x849086 = x874783;
      if (!((x849086<(80000)))) break; 
      
      numeric_int_t x849088 = x874783;
      double* x849089 = x879344[x849088];
      struct AGGRecord_OptimalString* x879373 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x879373, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      long x879374 = mallocSym_853203_877578;
      mallocSym_853203_877578 = (x879374+(((long){1})));
      x879373->key = ""; x879373->aggs = x849089;
      struct AGGRecord_OptimalString x852314 = *x879373;
      *(x879363 + x849088) = x852314;
      struct AGGRecord_OptimalString* x852316 = &(x879363[x849088]);
      x879373 = x852316;
      numeric_int_t x849092 = x874783;
      x874783 = (x849092+(1));
    };
    struct timeval x874799 = (struct timeval){0};
    /* VAR */ struct timeval x874800 = x874799;
    struct timeval x874801 = x874800;
    /* VAR */ struct timeval x874802 = x874799;
    struct timeval x874803 = x874802;
    /* VAR */ struct timeval x874804 = x874799;
    struct timeval x874805 = x874804;
    struct timeval* x874806 = &x874803;
    gettimeofday(x874806, NULL);
    /* VAR */ numeric_int_t x874808 = 0;
    numeric_int_t* x874857 = &(x874833);
    GTree* x874858 = g_tree_new(x874857);
    /* VAR */ boolean_t x874859 = 0;
    /* VAR */ numeric_int_t x874860 = 0;
    while(1) {
      
      numeric_int_t x874862 = x874808;
      if (!((x874862<(x850155)))) break; 
      
      numeric_int_t x839030 = x874808;
      struct SUPPLIERRecord* x837004 = &(x877818[x839030]);
      numeric_int_t x837006 = x837004->S_NATIONKEY;
      struct NATIONRecord* x847467 = &(x878141[(x837006-(0))]);
      boolean_t x860563 = strcmp((x847467->N_NAME), "MOROCCO");
      if((x860563==(0))) {
        if(((x847467->N_NATIONKEY)==(x837006))) {
          if(((x847467->N_NATIONKEY)==(x837006))) {
            numeric_int_t x837690 = x837004->S_SUPPKEY;
            char* x837691 = x837004->S_NAME;
            numeric_int_t x840964 = x837690%(80000);
            numeric_int_t x840965 = x879259[x840964];
            struct LINEITEMRecord* x840966 = x879254[x840964];
            numeric_int_t x862659 = 0;
            for(; x862659 < x840965 ; x862659 += 1) {
              
              struct LINEITEMRecord* x862660 = &(x840966[x862659]);
              if(((x862660->L_RECEIPTDATE)>((x862660->L_COMMITDATE)))) {
                numeric_int_t x837050 = x862660->L_SUPPKEY;
                if((x837690==(x837050))) {
                  numeric_int_t x837777 = x862660->L_ORDERKEY;
                  /* VAR */ boolean_t x847494 = 0;
                  numeric_int_t x847495 = x837777%(60000000);
                  numeric_int_t x847496 = x879170[x847495];
                  struct LINEITEMRecord* x847497 = x879166[x847495];
                  numeric_int_t x862520 = 0;
                  for(; x862520 < x847496 ; x862520 += 1) {
                    
                    struct LINEITEMRecord* x862521 = &(x847497[x862520]);
                    /* VAR */ boolean_t ite868546 = 0;
                    if(((x862521->L_ORDERKEY)==(x837777))) {
                      /* VAR */ boolean_t x875138 = 0;
                      if((x837777==((x862521->L_ORDERKEY)))) {
                        x875138 = (x837050!=((x862521->L_SUPPKEY)));
                      } else {
                        
                        x875138 = 0;
                      };
                      boolean_t x875145 = x875138;
                      ite868546 = x875145;
                    } else {
                      
                      ite868546 = 0;
                    };
                    boolean_t x866426 = ite868546;
                    if(x866426) {
                      x847494 = 1;
                    };
                  };
                  boolean_t x847513 = x847494;
                  if(x847513) {
                    /* VAR */ boolean_t resultRetain841018 = 0;
                    numeric_int_t x841019 = x879170[x847495];
                    struct LINEITEMRecord* x841020 = x879166[x847495];
                    numeric_int_t x862554 = 0;
                    for(; x862554 < x841019 ; x862554 += 1) {
                      
                      struct LINEITEMRecord* x862555 = &(x841020[x862554]);
                      if(((x862555->L_RECEIPTDATE)>((x862555->L_COMMITDATE)))) {
                        /* VAR */ boolean_t ite868594 = 0;
                        if((x837777==((x862555->L_ORDERKEY)))) {
                          ite868594 = (x837050!=((x862555->L_SUPPKEY)));
                        } else {
                          
                          ite868594 = 0;
                        };
                        boolean_t x866458 = ite868594;
                        boolean_t x841035 = !(x866458);
                        boolean_t x841036 = !(x841035);
                        if(x841036) {
                          resultRetain841018 = 1;
                        };
                      };
                    };
                    boolean_t x841042 = resultRetain841018;
                    boolean_t x841043 = !(x841042);
                    if(x841043) {
                      struct ORDERSRecord* x847539 = &(x879144[x837777]);
                      if(((x847539->O_ORDERSTATUS)==('F'))) {
                        if(((x847539->O_ORDERKEY)==(x837777))) {
                          if(((x847539->O_ORDERKEY)==(x837777))) {
                            numeric_int_t x860644 = strlen(x837691);
                            /* VAR */ numeric_int_t x858792 = 0;
                            /* VAR */ numeric_int_t x858793 = 0;
                            while(1) {
                              
                              numeric_int_t x858794 = x858792;
                              if (!((x858794<(x860644)))) break; 
                              
                              numeric_int_t x858796 = x858793;
                              numeric_int_t x858797 = x858792;
                              char* x860652 = pointer_add(x837691, x858797);
                              char x860653 = *(x860652);
                              x858793 = (x858796+(x860653));
                              numeric_int_t x858802 = x858792;
                              x858792 = (x858802+(1));
                            };
                            numeric_int_t x858806 = x858793;
                            numeric_int_t x843005 = x858806&(159999);
                            struct Set_AGGRecord_OptimalString* x844179 = &(x879104[x843005]);
                            numeric_int_t x843007 = x874582;
                            if((x843005>(x843007))) {
                              x874582 = x843005;
                            };
                            /* VAR */ numeric_int_t i844188 = 0;
                            /* VAR */ boolean_t found844189 = 0;
                            while(1) {
                              
                              numeric_int_t x844190 = i844188;
                              numeric_int_t x844191 = x844179->maxSize;
                              /* VAR */ boolean_t ite868648 = 0;
                              if((x844190<(x844191))) {
                                boolean_t x875241 = found844189;
                                boolean_t x875242 = !(x875241);
                                ite868648 = x875242;
                              } else {
                                
                                ite868648 = 0;
                              };
                              boolean_t x866505 = ite868648;
                              if (!(x866505)) break; 
                              
                              numeric_int_t x844197 = i844188;
                              struct AGGRecord_OptimalString* x844198 = &(((struct AGGRecord_OptimalString*) { x844179->array })[x844197]);
                              boolean_t x858826 = strcmp((x844198->key), x837691);
                              boolean_t x858827 = !(x858826);
                              if(x858827) {
                                found844189 = 1;
                              } else {
                                
                                numeric_int_t x844202 = i844188;
                                i844188 = (x844202+(1));
                              };
                            };
                            boolean_t x844207 = found844189;
                            boolean_t x844208 = !(x844207);
                            /* VAR */ struct AGGRecord_OptimalString** ite866520 = 0;
                            if(x844208) {
                              ite866520 = NULL;
                            } else {
                              
                              numeric_int_t x866523 = i844188;
                              struct AGGRecord_OptimalString* x866524 = &(((struct AGGRecord_OptimalString*) { x844179->array })[x866523]);
                              ite866520 = x866524;
                            };
                            struct AGGRecord_OptimalString** x844215 = ite866520;
                            /* VAR */ struct AGGRecord_OptimalString* ite866530 = 0;
                            if((x844215!=(NULL))) {
                              ite866530 = x844215;
                            } else {
                              
                              numeric_int_t x866532 = x874769;
                              double* x866533 = x879344[x866532];
                              numeric_int_t x866534 = x874769;
                              x874769 = (x866534+(1));
                              numeric_int_t x866537 = x874781;
                              struct AGGRecord_OptimalString* x866538 = &(x879363[x866537]);
                              x866538->key = x837691;
                              x866538->aggs = x866533;
                              numeric_int_t x866541 = x874781;
                              x874781 = (x866541+(1));
                              struct AGGRecord_OptimalString* x866544 = x844179->array;
                              numeric_int_t x866545 = x844179->maxSize;
                              struct AGGRecord_OptimalString x866546 = *x866538;
                              *(x866544 + x866545) = x866546;
                              struct AGGRecord_OptimalString* x866548 = &(x866544[x866545]);
                              x866538 = x866548;
                              numeric_int_t x866550 = x844179->maxSize;
                              x844179->maxSize = (x866550+(1));
                              ite866530 = x866538;
                            };
                            struct AGGRecord_OptimalString* x843020 = ite866530;
                            double* x837244 = x843020->aggs;
                            double x837258 = x837244[0];
                            *x837244 = (x837258+(1.0));
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
      numeric_int_t x839064 = x874808;
      x874808 = (x839064+(1));
    };
    numeric_int_t x875304 = x874582;
    numeric_int_t x862843 = 0;
    for(; x862843 < (x875304+(1)) ; x862843 += 1) {
      
      struct Set_AGGRecord_OptimalString* x862844 = &(x879104[x862843]);
      numeric_int_t x862845 = x862844->maxSize;
      numeric_int_t x862838 = 0;
      for(; x862838 < x862845 ; x862838 += 1) {
        
        struct AGGRecord_OptimalString* x862840 = &(((struct AGGRecord_OptimalString*) { x862844->array })[x862838]);
        g_tree_insert(x874858, x862840, x862840);
      };
    };
    while(1) {
      
      boolean_t x839325 = x874859;
      boolean_t x837282 = !(x839325);
      /* VAR */ boolean_t ite868744 = 0;
      if(x837282) {
        numeric_int_t x875336 = g_tree_nnodes(x874858);
        ite868744 = (x875336!=(0));
      } else {
        
        ite868744 = 0;
      };
      boolean_t x866594 = ite868744;
      if (!(x866594)) break; 
      
      void* x855211 = NULL;
      void** x855219 = &(x855211);
      g_tree_foreach(x874858, x855218, x855219);
      struct AGGRecord_OptimalString* x855221 = (struct AGGRecord_OptimalString*){x855211};
      numeric_int_t x855222 = g_tree_remove(x874858, x855221);
      numeric_int_t x839333 = x874860;
      if((x839333>=(100))) {
        x874859 = 1;
      } else {
        
        double x837297 = ((double*) { x855221->aggs })[0];
        printf("%s|%.0f\n", (x855221->key), x837297);
        numeric_int_t x839342 = x874860;
        x874860 = (x839342+(1));
      };
    };
    numeric_int_t x875365 = x874860;
    printf("(%d rows)\n", x875365);
    struct timeval* x875367 = &x874805;
    gettimeofday(x875367, NULL);
    struct timeval* x875369 = &x874801;
    struct timeval* x875370 = &x874805;
    struct timeval* x875371 = &x874803;
    long x875372 = timeval_subtract(x875369, x875370, x875371);
    printf("Generated code run in %ld milliseconds.\n", x875372);
  };
  /* VAR */ long mallocSum879962 = 0L;
  long x879963 = mallocSym_852058_877538;
  numeric_int_t x879964 = sizeof(char);
  long x879966 = x879963*(((long){x879964}));
  printf("878083 with type Byte: %ld\n", x879966);
  long x879968 = mallocSum879962;
  mallocSum879962 = (x879968+(x879966));
  long x879971 = mallocSym_874622_877539;
  numeric_int_t x879972 = sizeof(numeric_int_t);
  long x879974 = x879971*(((long){x879972}));
  printf("879170 with type Int: %ld\n", x879974);
  long x879976 = mallocSum879962;
  mallocSum879962 = (x879976+(x879974));
  long x879979 = mallocSym_874621_877540;
  numeric_int_t x879980 = sizeof(struct LINEITEMRecord*);
  long x879982 = x879979*(((long){x879980}));
  printf("879166 with type Pointer[LINEITEMRecord]: %ld\n", x879982);
  long x879984 = mallocSum879962;
  mallocSum879962 = (x879984+(x879982));
  long x879987 = mallocSym_852269_877541;
  numeric_int_t x879988 = sizeof(struct LINEITEMRecord);
  long x879990 = x879987*(((long){x879988}));
  printf("879293 with type LINEITEMRecord: %ld\n", x879990);
  long x879992 = mallocSum879962;
  mallocSum879962 = (x879992+(x879990));
  long x879995 = mallocSym_852172_877542;
  numeric_int_t x879996 = sizeof(struct Set_AGGRecord_OptimalString);
  long x879998 = x879995*(((long){x879996}));
  printf("878244 with type Set_AGGRecord_OptimalString: %ld\n", x879998);
  long x880000 = mallocSum879962;
  mallocSum879962 = (x880000+(x879998));
  long x880003 = mallocSym_852154_877543;
  numeric_int_t x880004 = sizeof(char);
  long x880006 = x880003*(((long){x880004}));
  printf("878218 with type Byte: %ld\n", x880006);
  long x880008 = mallocSum879962;
  mallocSum879962 = (x880008+(x880006));
  long x880011 = mallocSym_874782_877544;
  numeric_int_t x880012 = sizeof(struct AGGRecord_OptimalString);
  long x880014 = x880011*(((long){x880012}));
  printf("879363 with type AGGRecord_OptimalString: %ld\n", x880014);
  long x880016 = mallocSum879962;
  mallocSum879962 = (x880016+(x880014));
  long x880019 = mallocSym_852133_877545;
  numeric_int_t x880020 = sizeof(char);
  long x880022 = x880019*(((long){x880020}));
  printf("878189 with type Byte: %ld\n", x880022);
  long x880024 = mallocSum879962;
  mallocSum879962 = (x880024+(x880022));
  long x880027 = mallocSym_853045_877546;
  numeric_int_t x880028 = sizeof(struct NATIONRecord);
  long x880030 = x880027*(((long){x880028}));
  printf("878226 with type NATIONRecord: %ld\n", x880030);
  long x880032 = mallocSum879962;
  mallocSum879962 = (x880032+(x880030));
  long x880035 = mallocSym_874603_877547;
  numeric_int_t x880036 = sizeof(struct ORDERSRecord);
  long x880038 = x880035*(((long){x880036}));
  printf("879144 with type ORDERSRecord: %ld\n", x880038);
  long x880040 = mallocSum879962;
  mallocSum879962 = (x880040+(x880038));
  long x880043 = mallocSym_852294_877548;
  numeric_int_t x880044 = sizeof(double*);
  long x880046 = x880043*(((long){x880044}));
  printf("878484 with type Pointer[Double]: %ld\n", x880046);
  long x880048 = mallocSum879962;
  mallocSum879962 = (x880048+(x880046));
  long x880051 = mallocSym_851912_877549;
  numeric_int_t x880052 = sizeof(char);
  long x880054 = x880051*(((long){x880052}));
  printf("877890 with type Byte: %ld\n", x880054);
  long x880056 = mallocSum879962;
  mallocSum879962 = (x880056+(x880054));
  long x880059 = mallocSym_852727_877550;
  numeric_int_t x880060 = sizeof(struct LINEITEMRecord);
  long x880062 = x880059*(((long){x880060}));
  printf("877797 with type LINEITEMRecord: %ld\n", x880062);
  long x880064 = mallocSum879962;
  mallocSum879962 = (x880064+(x880062));
  long x880067 = mallocSym_862212_877551;
  numeric_int_t x880068 = sizeof(struct AGGRecord_OptimalString);
  long x880070 = x880067*(((long){x880068}));
  printf("879128 with type AGGRecord_OptimalString: %ld\n", x880070);
  long x880072 = mallocSum879962;
  mallocSum879962 = (x880072+(x880070));
  long x880075 = mallocSym_852841_877552;
  numeric_int_t x880076 = sizeof(struct SUPPLIERRecord);
  long x880078 = x880075*(((long){x880076}));
  printf("877956 with type SUPPLIERRecord: %ld\n", x880078);
  long x880080 = mallocSum879962;
  mallocSum879962 = (x880080+(x880078));
  long x880083 = mallocSym_851933_877553;
  numeric_int_t x880084 = sizeof(char);
  long x880086 = x880083*(((long){x880084}));
  printf("877919 with type Byte: %ld\n", x880086);
  long x880088 = mallocSum879962;
  mallocSum879962 = (x880088+(x880086));
  long x880091 = mallocSym_852244_877554;
  numeric_int_t x880092 = sizeof(struct LINEITEMRecord*);
  long x880094 = x880091*(((long){x880092}));
  printf("878394 with type Pointer[LINEITEMRecord]: %ld\n", x880094);
  long x880096 = mallocSum879962;
  mallocSum879962 = (x880096+(x880094));
  long x880099 = mallocSym_852220_877555;
  numeric_int_t x880100 = sizeof(struct LINEITEMRecord);
  long x880102 = x880099*(((long){x880100}));
  printf("879204 with type LINEITEMRecord: %ld\n", x880102);
  long x880104 = mallocSum879962;
  mallocSum879962 = (x880104+(x880102));
  long x880107 = mallocSym_851862_877556;
  numeric_int_t x880108 = sizeof(struct SUPPLIERRecord);
  long x880110 = x880107*(((long){x880108}));
  printf("877818 with type SUPPLIERRecord: %ld\n", x880110);
  long x880112 = mallocSum879962;
  mallocSum879962 = (x880112+(x880110));
  long x880115 = mallocSym_852195_877557;
  numeric_int_t x880116 = sizeof(struct LINEITEMRecord*);
  long x880118 = x880115*(((long){x880116}));
  printf("878306 with type Pointer[LINEITEMRecord]: %ld\n", x880118);
  long x880120 = mallocSum879962;
  mallocSum879962 = (x880120+(x880118));
  long x880123 = mallocSym_874770_877558;
  numeric_int_t x880124 = sizeof(double*);
  long x880126 = x880123*(((long){x880124}));
  printf("879344 with type Pointer[Double]: %ld\n", x880126);
  long x880128 = mallocSum879962;
  mallocSum879962 = (x880128+(x880126));
  long x880131 = mallocSym_852196_877559;
  numeric_int_t x880132 = sizeof(numeric_int_t);
  long x880134 = x880131*(((long){x880132}));
  printf("878310 with type Int: %ld\n", x880134);
  long x880136 = mallocSum879962;
  mallocSum879962 = (x880136+(x880134));
  long x880139 = mallocSym_851826_877560;
  numeric_int_t x880140 = sizeof(char);
  long x880142 = x880139*(((long){x880140}));
  printf("877765 with type Byte: %ld\n", x880142);
  long x880144 = mallocSum879962;
  mallocSum879962 = (x880144+(x880142));
  long x880147 = mallocSym_852099_877561;
  numeric_int_t x880148 = sizeof(struct NATIONRecord);
  long x880150 = x880147*(((long){x880148}));
  printf("878141 with type NATIONRecord: %ld\n", x880150);
  long x880152 = mallocSum879962;
  mallocSum879962 = (x880152+(x880150));
  long x880155 = mallocSym_862279_877562;
  numeric_int_t x880156 = sizeof(struct LINEITEMRecord);
  long x880158 = x880155*(((long){x880156}));
  printf("879213 with type LINEITEMRecord: %ld\n", x880158);
  long x880160 = mallocSum879962;
  mallocSum879962 = (x880160+(x880158));
  long x880163 = mallocSym_851810_877563;
  numeric_int_t x880164 = sizeof(char);
  long x880166 = x880163*(((long){x880164}));
  printf("877741 with type Byte: %ld\n", x880166);
  long x880168 = mallocSum879962;
  mallocSum879962 = (x880168+(x880166));
  long x880171 = mallocSym_874583_877564;
  numeric_int_t x880172 = sizeof(struct Set_AGGRecord_OptimalString);
  long x880174 = x880171*(((long){x880172}));
  printf("879104 with type Set_AGGRecord_OptimalString: %ld\n", x880174);
  long x880176 = mallocSum879962;
  mallocSum879962 = (x880176+(x880174));
  long x880179 = mallocSym_852183_877565;
  numeric_int_t x880180 = sizeof(struct ORDERSRecord);
  long x880182 = x880179*(((long){x880180}));
  printf("878284 with type ORDERSRecord: %ld\n", x880182);
  long x880184 = mallocSum879962;
  mallocSum879962 = (x880184+(x880182));
  long x880187 = mallocSym_851974_877566;
  numeric_int_t x880188 = sizeof(struct ORDERSRecord);
  long x880190 = x880187*(((long){x880188}));
  printf("877977 with type ORDERSRecord: %ld\n", x880190);
  long x880192 = mallocSum879962;
  mallocSum879962 = (x880192+(x880190));
  long x880195 = mallocSym_853065_877567;
  numeric_int_t x880196 = sizeof(struct Set_AGGRecord_OptimalString);
  long x880198 = x880195*(((long){x880196}));
  printf("879116 with type Set_AGGRecord_OptimalString: %ld\n", x880198);
  long x880200 = mallocSum879962;
  mallocSum879962 = (x880200+(x880198));
  long x880203 = mallocSym_851842_877568;
  numeric_int_t x880204 = sizeof(char);
  long x880206 = x880203*(((long){x880204}));
  printf("877789 with type Byte: %ld\n", x880206);
  long x880208 = mallocSum879962;
  mallocSum879962 = (x880208+(x880206));
  long x880211 = mallocSym_862213_877569;
  numeric_int_t x880212 = sizeof(struct Set_AGGRecord_OptimalString);
  long x880214 = x880211*(((long){x880212}));
  printf("879133 with type Set_AGGRecord_OptimalString: %ld\n", x880214);
  long x880216 = mallocSum879962;
  mallocSum879962 = (x880216+(x880214));
  long x880219 = mallocSym_852300_877570;
  numeric_int_t x880220 = sizeof(double);
  long x880222 = x880219*(((long){x880220}));
  printf("879353 with type Double: %ld\n", x880222);
  long x880224 = mallocSum879962;
  mallocSum879962 = (x880224+(x880222));
  long x880227 = mallocSym_852176_877571;
  numeric_int_t x880228 = sizeof(struct AGGRecord_OptimalString);
  long x880230 = x880227*(((long){x880228}));
  printf("879111 with type AGGRecord_OptimalString: %ld\n", x880230);
  long x880232 = mallocSum879962;
  mallocSum879962 = (x880232+(x880230));
  long x880235 = mallocSym_874695_877572;
  numeric_int_t x880236 = sizeof(struct LINEITEMRecord*);
  long x880238 = x880235*(((long){x880236}));
  printf("879254 with type Pointer[LINEITEMRecord]: %ld\n", x880238);
  long x880240 = mallocSum879962;
  mallocSum879962 = (x880240+(x880238));
  long x880243 = mallocSym_851673_877573;
  numeric_int_t x880244 = sizeof(struct LINEITEMRecord);
  long x880246 = x880243*(((long){x880244}));
  printf("877590 with type LINEITEMRecord: %ld\n", x880246);
  long x880248 = mallocSum879962;
  mallocSum879962 = (x880248+(x880246));
  long x880251 = mallocSym_862357_877574;
  numeric_int_t x880252 = sizeof(struct LINEITEMRecord);
  long x880254 = x880251*(((long){x880252}));
  printf("879302 with type LINEITEMRecord: %ld\n", x880254);
  long x880256 = mallocSum879962;
  mallocSum879962 = (x880256+(x880254));
  long x880259 = mallocSym_851954_877575;
  numeric_int_t x880260 = sizeof(char);
  long x880262 = x880259*(((long){x880260}));
  printf("877948 with type Byte: %ld\n", x880262);
  long x880264 = mallocSum879962;
  mallocSum879962 = (x880264+(x880262));
  long x880267 = mallocSym_851896_877576;
  numeric_int_t x880268 = sizeof(char);
  long x880270 = x880267*(((long){x880268}));
  printf("877866 with type Byte: %ld\n", x880270);
  long x880272 = mallocSum879962;
  mallocSum879962 = (x880272+(x880270));
  long x880275 = mallocSym_852245_877577;
  numeric_int_t x880276 = sizeof(numeric_int_t);
  long x880278 = x880275*(((long){x880276}));
  printf("878399 with type Int: %ld\n", x880278);
  long x880280 = mallocSum879962;
  mallocSum879962 = (x880280+(x880278));
  long x880283 = mallocSym_853203_877578;
  numeric_int_t x880284 = sizeof(struct AGGRecord_OptimalString);
  long x880286 = x880283*(((long){x880284}));
  printf("879373 with type AGGRecord_OptimalString: %ld\n", x880286);
  long x880288 = mallocSum879962;
  mallocSum879962 = (x880288+(x880286));
  long x880291 = mallocSym_852042_877579;
  numeric_int_t x880292 = sizeof(char);
  long x880294 = x880291*(((long){x880292}));
  printf("878059 with type Byte: %ld\n", x880294);
  long x880296 = mallocSum879962;
  mallocSum879962 = (x880296+(x880294));
  long x880299 = mallocSym_874696_877580;
  numeric_int_t x880300 = sizeof(numeric_int_t);
  long x880302 = x880299*(((long){x880300}));
  printf("879259 with type Int: %ld\n", x880302);
  long x880304 = mallocSum879962;
  mallocSum879962 = (x880304+(x880302));
  long x880307 = mallocSym_852079_877581;
  numeric_int_t x880308 = sizeof(char);
  long x880310 = x880307*(((long){x880308}));
  printf("878112 with type Byte: %ld\n", x880310);
  long x880312 = mallocSum879962;
  mallocSum879962 = (x880312+(x880310));
  long x880315 = mallocSym_852306_877582;
  numeric_int_t x880316 = sizeof(struct AGGRecord_OptimalString);
  long x880318 = x880315*(((long){x880316}));
  printf("878503 with type AGGRecord_OptimalString: %ld\n", x880318);
  long x880320 = mallocSum879962;
  mallocSum879962 = (x880320+(x880318));
  long x880323 = mallocSym_852968_877583;
  numeric_int_t x880324 = sizeof(struct ORDERSRecord);
  long x880326 = x880323*(((long){x880324}));
  printf("878120 with type ORDERSRecord: %ld\n", x880326);
  long x880328 = mallocSum879962;
  mallocSum879962 = (x880328+(x880326));
  long x880331 = mallocSum879962;
  printf("total: %ld\n", x880331);
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x874833(struct AGGRecord_OptimalString* x836924, struct AGGRecord_OptimalString* x836925) {
  double x836927 = ((double*) { x836924->aggs })[0];
  double x836929 = ((double*) { x836925->aggs })[0];
  /* VAR */ numeric_int_t ite866194 = 0;
  if((x836927<(x836929))) {
    ite866194 = 1;
  } else {
    
    /* VAR */ numeric_int_t ite866198 = 0;
    if((x836927>(x836929))) {
      ite866198 = -1;
    } else {
      
      numeric_int_t x866202 = strcmp((x836924->key), (x836925->key));
      ite866198 = x866202;
    };
    numeric_int_t x866197 = ite866198;
    ite866194 = x866197;
  };
  numeric_int_t x836936 = ite866194;
  return x836936; 
}

numeric_int_t x855218(void* x855212, void* x855213, void* x855214) {
  pointer_assign(((struct AGGRecord_OptimalString**){x855214}), ((struct AGGRecord_OptimalString*){x855213}));
  return 1; 
}
