#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct Q3GRPRecord;
struct LINEITEMRecord;
struct AGGRecord_Q3GRPRecord;
struct ORDERSRecord;
struct CUSTOMERRecord;
struct Q3GRPRecord {
  numeric_int_t L_ORDERKEY;
  numeric_int_t O_ORDERDATE;
  numeric_int_t O_SHIPPRIORITY;
};

struct LINEITEMRecord {
  numeric_int_t L_ORDERKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  numeric_int_t L_SHIPDATE;
};

struct AGGRecord_Q3GRPRecord {
  struct Q3GRPRecord* key;
  double* aggs;
  struct AGGRecord_Q3GRPRecord* next;
};

struct ORDERSRecord {
  numeric_int_t O_ORDERKEY;
  numeric_int_t O_CUSTKEY;
  numeric_int_t O_ORDERDATE;
  numeric_int_t O_SHIPPRIORITY;
};

struct CUSTOMERRecord {
  numeric_int_t C_CUSTKEY;
  numeric_int_t C_MKTSEGMENT;
};


numeric_int_t x111229(struct AGGRecord_Q3GRPRecord* x68114, struct AGGRecord_Q3GRPRecord* x68115);

numeric_int_t x84801(void* x84795, void* x84796, void* x84797);

int main(int argc, char** argv) {
  /* VAR */ long mallocSym_81882_116390 = 0L;
  /* VAR */ long mallocSym_108765_116391 = 0L;
  /* VAR */ long mallocSym_81960_116392 = 0L;
  /* VAR */ long mallocSym_111133_116393 = 0L;
  /* VAR */ long mallocSym_111038_116394 = 0L;
  /* VAR */ long mallocSym_110958_116395 = 0L;
  /* VAR */ long mallocSym_82876_116396 = 0L;
  /* VAR */ long mallocSym_81903_116397 = 0L;
  /* VAR */ long mallocSym_82910_116398 = 0L;
  /* VAR */ long mallocSym_81788_116399 = 0L;
  /* VAR */ long mallocSym_81959_116400 = 0L;
  /* VAR */ long mallocSym_82068_116401 = 0L;
  /* VAR */ long mallocSym_93565_116402 = 0L;
  /* VAR */ long mallocSym_81861_116403 = 0L;
  /* VAR */ long mallocSym_109123_116404 = 0L;
  /* VAR */ long mallocSym_81984_116405 = 0L;
  /* VAR */ long mallocSym_82011_116406 = 0L;
  /* VAR */ long mallocSym_81644_116407 = 0L;
  /* VAR */ long mallocSym_111101_116408 = 0L;
  /* VAR */ long mallocSym_81845_116409 = 0L;
  /* VAR */ long mallocSym_111037_116410 = 0L;
  /* VAR */ long mallocSym_82479_116411 = 0L;
  /* VAR */ long mallocSym_81919_116412 = 0L;
  /* VAR */ long mallocSym_111121_116413 = 0L;
  /* VAR */ long mallocSym_81767_116414 = 0L;
  /* VAR */ long mallocSym_82012_116415 = 0L;
  /* VAR */ long mallocSym_110957_116416 = 0L;
  /* VAR */ long mallocSym_82050_116417 = 0L;
  /* VAR */ long mallocSym_81751_116418 = 0L;
  /* VAR */ long mallocSym_82074_116419 = 0L;
  /* VAR */ long mallocSym_81953_116420 = 0L;
  /* VAR */ long mallocSym_93509_116421 = 0L;
  /* VAR */ long mallocSym_82609_116422 = 0L;
  /* VAR */ long mallocSym_82755_116423 = 0L;
  /* VAR */ long mallocSym_82080_116424 = 0L;
  /* VAR */ long mallocSym_82018_116425 = 0L;
  /* VAR */ long mallocSym_110951_116426 = 0L;
  /* VAR */ long mallocSym_81628_116427 = 0L;
  /* VAR */ long mallocSym_108976_116428 = 0L;
  /* VAR */ long mallocSym_81660_116429 = 0L;
  /* VAR */ numeric_int_t x76905 = 0;
  numeric_int_t x83945 = sizeof(char*);
  GArray* x83946 = g_array_new(0, 1, x83945);
  FILE* x108759 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x108760 = 0;
  numeric_int_t x108761 = x108760;
  numeric_int_t* x108762 = &x108761;
  numeric_int_t x108763 = fscanf(x108759, "%d", x108762);
  pclose(x108759);
  struct LINEITEMRecord* x116439 = (struct LINEITEMRecord*)malloc(x108761 * sizeof(struct LINEITEMRecord));
  memset(x116439, 0, x108761 * sizeof(struct LINEITEMRecord));
  long x116440 = mallocSym_108765_116391;
  long x116441 = (long){x108761};
  long x116442 = x116440+(x116441);
  mallocSym_108765_116391 = x116442;
  numeric_int_t x108766 = O_RDONLY;
  numeric_int_t x108767 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x108766);
  struct stat x108768 = (struct stat){0};
  /* VAR */ struct stat x108769 = x108768;
  struct stat x108770 = x108769;
  struct stat* x108771 = &x108770;
  numeric_int_t x108772 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x108771);
  size_t x108773 = x108771->st_size;
  numeric_int_t x108774 = PROT_READ;
  numeric_int_t x108775 = MAP_PRIVATE;
  char* x108776 = mmap(NULL, x108773, x108774, x108775, x108767, 0);
  /* VAR */ numeric_int_t x108777 = 0;
  while(1) {
    
    numeric_int_t x67976 = x108777;
    boolean_t x67977 = x67976<(x108761);
    /* VAR */ boolean_t ite100909 = 0;
    if(x67977) {
      char x108783 = *x108776;
      boolean_t x108784 = x108783!=('\0');
      ite100909 = x108784;
    } else {
      
      ite100909 = 0;
    };
    boolean_t x97734 = ite100909;
    if (!(x97734)) break; 
    
    /* VAR */ numeric_int_t x79978 = 0;
    numeric_int_t x79979 = x79978;
    numeric_int_t* x79980 = &x79979;
    char* x79981 = strntoi_unchecked(x108776, x79980);
    x108776 = x79981;
    /* VAR */ numeric_int_t x79983 = 0;
    numeric_int_t x79984 = x79983;
    numeric_int_t* x79985 = &x79984;
    char* x79986 = strntoi_unchecked(x108776, x79985);
    x108776 = x79986;
    /* VAR */ numeric_int_t x79988 = 0;
    numeric_int_t x79989 = x79988;
    numeric_int_t* x79990 = &x79989;
    char* x79991 = strntoi_unchecked(x108776, x79990);
    x108776 = x79991;
    /* VAR */ numeric_int_t x79993 = 0;
    numeric_int_t x79994 = x79993;
    numeric_int_t* x79995 = &x79994;
    char* x79996 = strntoi_unchecked(x108776, x79995);
    x108776 = x79996;
    /* VAR */ double x79998 = 0.0;
    double x79999 = x79998;
    double* x80000 = &x79999;
    char* x80001 = strntod_unchecked(x108776, x80000);
    x108776 = x80001;
    /* VAR */ double x80003 = 0.0;
    double x80004 = x80003;
    double* x80005 = &x80004;
    char* x80006 = strntod_unchecked(x108776, x80005);
    x108776 = x80006;
    /* VAR */ double x80008 = 0.0;
    double x80009 = x80008;
    double* x80010 = &x80009;
    char* x80011 = strntod_unchecked(x108776, x80010);
    x108776 = x80011;
    /* VAR */ double x80013 = 0.0;
    double x80014 = x80013;
    double* x80015 = &x80014;
    char* x80016 = strntod_unchecked(x108776, x80015);
    x108776 = x80016;
    char x80018 = *x108776;
    /* VAR */ char x80019 = x80018;
    x108776 += 1;
    x108776 += 1;
    char x80023 = *x108776;
    /* VAR */ char x80024 = x80023;
    x108776 += 1;
    x108776 += 1;
    /* VAR */ numeric_int_t x80028 = 0;
    numeric_int_t x80029 = x80028;
    numeric_int_t* x80030 = &x80029;
    char* x80031 = strntoi_unchecked(x108776, x80030);
    x108776 = x80031;
    /* VAR */ numeric_int_t x80033 = 0;
    numeric_int_t x80034 = x80033;
    numeric_int_t* x80035 = &x80034;
    char* x80036 = strntoi_unchecked(x108776, x80035);
    x108776 = x80036;
    /* VAR */ numeric_int_t x80038 = 0;
    numeric_int_t x80039 = x80038;
    numeric_int_t* x80040 = &x80039;
    char* x80041 = strntoi_unchecked(x108776, x80040);
    x108776 = x80041;
    numeric_int_t x80043 = x80029*(10000);
    numeric_int_t x80044 = x80034*(100);
    numeric_int_t x80045 = x80043+(x80044);
    numeric_int_t x80046 = x80045+(x80039);
    /* VAR */ numeric_int_t x80047 = 0;
    numeric_int_t x80048 = x80047;
    numeric_int_t* x80049 = &x80048;
    char* x80050 = strntoi_unchecked(x108776, x80049);
    x108776 = x80050;
    /* VAR */ numeric_int_t x80052 = 0;
    numeric_int_t x80053 = x80052;
    numeric_int_t* x80054 = &x80053;
    char* x80055 = strntoi_unchecked(x108776, x80054);
    x108776 = x80055;
    /* VAR */ numeric_int_t x80057 = 0;
    numeric_int_t x80058 = x80057;
    numeric_int_t* x80059 = &x80058;
    char* x80060 = strntoi_unchecked(x108776, x80059);
    x108776 = x80060;
    /* VAR */ numeric_int_t x80066 = 0;
    numeric_int_t x80067 = x80066;
    numeric_int_t* x80068 = &x80067;
    char* x80069 = strntoi_unchecked(x108776, x80068);
    x108776 = x80069;
    /* VAR */ numeric_int_t x80071 = 0;
    numeric_int_t x80072 = x80071;
    numeric_int_t* x80073 = &x80072;
    char* x80074 = strntoi_unchecked(x108776, x80073);
    x108776 = x80074;
    /* VAR */ numeric_int_t x80076 = 0;
    numeric_int_t x80077 = x80076;
    numeric_int_t* x80078 = &x80077;
    char* x80079 = strntoi_unchecked(x108776, x80078);
    x108776 = x80079;
    /* VAR */ char* x80085 = x108776;
    while(1) {
      
      char x80086 = *x108776;
      boolean_t x80087 = x80086!=('|');
      /* VAR */ boolean_t ite101029 = 0;
      if(x80087) {
        char x108902 = *x108776;
        boolean_t x108903 = x108902!=('\n');
        ite101029 = x108903;
      } else {
        
        ite101029 = 0;
      };
      boolean_t x97847 = ite101029;
      if (!(x97847)) break; 
      
      x108776 += 1;
    };
    char* x80093 = x80085;
    numeric_int_t x80094 = x108776 - x80093;
    numeric_int_t x80095 = x80094+(1);
    char* x116590 = (char*)malloc(x80095 * sizeof(char));
    memset(x116590, 0, x80095 * sizeof(char));
    long x116591 = mallocSym_81628_116427;
    long x116592 = (long){x80095};
    long x116593 = x116591+(x116592);
    mallocSym_81628_116427 = x116593;
    char* x80098 = x80085;
    char* x80099 = strncpy(x116590, x80098, x80094);
    x108776 += 1;
    /* VAR */ char* x80101 = x108776;
    while(1) {
      
      char x80102 = *x108776;
      boolean_t x80103 = x80102!=('|');
      /* VAR */ boolean_t ite101050 = 0;
      if(x80103) {
        char x108922 = *x108776;
        boolean_t x108923 = x108922!=('\n');
        ite101050 = x108923;
      } else {
        
        ite101050 = 0;
      };
      boolean_t x97861 = ite101050;
      if (!(x97861)) break; 
      
      x108776 += 1;
    };
    char* x80109 = x80101;
    numeric_int_t x80110 = x108776 - x80109;
    numeric_int_t x80111 = x80110+(1);
    char* x116614 = (char*)malloc(x80111 * sizeof(char));
    memset(x116614, 0, x80111 * sizeof(char));
    long x116615 = mallocSym_81644_116407;
    long x116616 = (long){x80111};
    long x116617 = x116615+(x116616);
    mallocSym_81644_116407 = x116617;
    char* x80114 = x80101;
    char* x80115 = strncpy(x116614, x80114, x80110);
    x108776 += 1;
    /* VAR */ char* x80117 = x108776;
    while(1) {
      
      char x80118 = *x108776;
      boolean_t x80119 = x80118!=('|');
      /* VAR */ boolean_t ite101071 = 0;
      if(x80119) {
        char x108942 = *x108776;
        boolean_t x108943 = x108942!=('\n');
        ite101071 = x108943;
      } else {
        
        ite101071 = 0;
      };
      boolean_t x97875 = ite101071;
      if (!(x97875)) break; 
      
      x108776 += 1;
    };
    char* x80125 = x80117;
    numeric_int_t x80126 = x108776 - x80125;
    numeric_int_t x80127 = x80126+(1);
    char* x116638 = (char*)malloc(x80127 * sizeof(char));
    memset(x116638, 0, x80127 * sizeof(char));
    long x116639 = mallocSym_81660_116429;
    long x116640 = (long){x80127};
    long x116641 = x116639+(x116640);
    mallocSym_81660_116429 = x116641;
    char* x80130 = x80117;
    char* x80131 = strncpy(x116638, x80130, x80126);
    x108776 += 1;
    struct LINEITEMRecord* x116646 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x116646, 0, 1 * sizeof(struct LINEITEMRecord));
    long x116647 = mallocSym_82479_116411;
    long x116648 = (long){1};
    long x116649 = x116647+(x116648);
    mallocSym_82479_116411 = x116649;
    x116646->L_ORDERKEY = x79979; x116646->L_EXTENDEDPRICE = x80004; x116646->L_DISCOUNT = x80009; x116646->L_SHIPDATE = x80046;
    numeric_int_t x67997 = x108777;
    boolean_t x88575 = x116646==(NULL);
    if(x88575) {
      *(x116439 + x67997) = (const struct LINEITEMRecord){0};
    } else {
      
      struct LINEITEMRecord x81669 = *x116646;
      *(x116439 + x67997) = x81669;
      struct LINEITEMRecord* x81671 = &(x116439[x67997]);
      x116646 = x81671;
    };
    numeric_int_t x67999 = x108777;
    numeric_int_t x68000 = x67999+(1);
    x108777 = x68000;
  };
  FILE* x108970 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ numeric_int_t x108971 = 0;
  numeric_int_t x108972 = x108971;
  numeric_int_t* x108973 = &x108972;
  numeric_int_t x108974 = fscanf(x108970, "%d", x108973);
  pclose(x108970);
  struct ORDERSRecord* x116670 = (struct ORDERSRecord*)malloc(x108972 * sizeof(struct ORDERSRecord));
  memset(x116670, 0, x108972 * sizeof(struct ORDERSRecord));
  long x116671 = mallocSym_108976_116428;
  long x116672 = (long){x108972};
  long x116673 = x116671+(x116672);
  mallocSym_108976_116428 = x116673;
  numeric_int_t x108977 = O_RDONLY;
  numeric_int_t x108978 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x108977);
  /* VAR */ struct stat x108979 = x108768;
  struct stat x108980 = x108979;
  struct stat* x108981 = &x108980;
  numeric_int_t x108982 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x108981);
  size_t x108983 = x108981->st_size;
  numeric_int_t x108984 = PROT_READ;
  numeric_int_t x108985 = MAP_PRIVATE;
  char* x108986 = mmap(NULL, x108983, x108984, x108985, x108978, 0);
  /* VAR */ numeric_int_t x108987 = 0;
  while(1) {
    
    numeric_int_t x68007 = x108987;
    boolean_t x68008 = x68007<(x108972);
    /* VAR */ boolean_t ite101123 = 0;
    if(x68008) {
      char x108993 = *x108986;
      boolean_t x108994 = x108993!=('\0');
      ite101123 = x108994;
    } else {
      
      ite101123 = 0;
    };
    boolean_t x97920 = ite101123;
    if (!(x97920)) break; 
    
    /* VAR */ numeric_int_t x80163 = 0;
    numeric_int_t x80164 = x80163;
    numeric_int_t* x80165 = &x80164;
    char* x80166 = strntoi_unchecked(x108986, x80165);
    x108986 = x80166;
    /* VAR */ numeric_int_t x80168 = 0;
    numeric_int_t x80169 = x80168;
    numeric_int_t* x80170 = &x80169;
    char* x80171 = strntoi_unchecked(x108986, x80170);
    x108986 = x80171;
    char x80173 = *x108986;
    /* VAR */ char x80174 = x80173;
    x108986 += 1;
    x108986 += 1;
    /* VAR */ double x80178 = 0.0;
    double x80179 = x80178;
    double* x80180 = &x80179;
    char* x80181 = strntod_unchecked(x108986, x80180);
    x108986 = x80181;
    /* VAR */ numeric_int_t x80183 = 0;
    numeric_int_t x80184 = x80183;
    numeric_int_t* x80185 = &x80184;
    char* x80186 = strntoi_unchecked(x108986, x80185);
    x108986 = x80186;
    /* VAR */ numeric_int_t x80188 = 0;
    numeric_int_t x80189 = x80188;
    numeric_int_t* x80190 = &x80189;
    char* x80191 = strntoi_unchecked(x108986, x80190);
    x108986 = x80191;
    /* VAR */ numeric_int_t x80193 = 0;
    numeric_int_t x80194 = x80193;
    numeric_int_t* x80195 = &x80194;
    char* x80196 = strntoi_unchecked(x108986, x80195);
    x108986 = x80196;
    numeric_int_t x80198 = x80184*(10000);
    numeric_int_t x80199 = x80189*(100);
    numeric_int_t x80200 = x80198+(x80199);
    numeric_int_t x80201 = x80200+(x80194);
    /* VAR */ char* x80202 = x108986;
    while(1) {
      
      char x80203 = *x108986;
      boolean_t x80204 = x80203!=('|');
      /* VAR */ boolean_t ite101175 = 0;
      if(x80204) {
        char x109044 = *x108986;
        boolean_t x109045 = x109044!=('\n');
        ite101175 = x109045;
      } else {
        
        ite101175 = 0;
      };
      boolean_t x97965 = ite101175;
      if (!(x97965)) break; 
      
      x108986 += 1;
    };
    char* x80210 = x80202;
    numeric_int_t x80211 = x108986 - x80210;
    numeric_int_t x80212 = x80211+(1);
    char* x116752 = (char*)malloc(x80212 * sizeof(char));
    memset(x116752, 0, x80212 * sizeof(char));
    long x116753 = mallocSym_81751_116418;
    long x116754 = (long){x80212};
    long x116755 = x116753+(x116754);
    mallocSym_81751_116418 = x116755;
    char* x80215 = x80202;
    char* x80216 = strncpy(x116752, x80215, x80211);
    x108986 += 1;
    /* VAR */ char* x80218 = x108986;
    while(1) {
      
      char x80219 = *x108986;
      boolean_t x80220 = x80219!=('|');
      /* VAR */ boolean_t ite101196 = 0;
      if(x80220) {
        char x109064 = *x108986;
        boolean_t x109065 = x109064!=('\n');
        ite101196 = x109065;
      } else {
        
        ite101196 = 0;
      };
      boolean_t x97979 = ite101196;
      if (!(x97979)) break; 
      
      x108986 += 1;
    };
    char* x80226 = x80218;
    numeric_int_t x80227 = x108986 - x80226;
    numeric_int_t x80228 = x80227+(1);
    char* x116776 = (char*)malloc(x80228 * sizeof(char));
    memset(x116776, 0, x80228 * sizeof(char));
    long x116777 = mallocSym_81767_116414;
    long x116778 = (long){x80228};
    long x116779 = x116777+(x116778);
    mallocSym_81767_116414 = x116779;
    char* x80231 = x80218;
    char* x80232 = strncpy(x116776, x80231, x80227);
    x108986 += 1;
    /* VAR */ numeric_int_t x80234 = 0;
    numeric_int_t x80235 = x80234;
    numeric_int_t* x80236 = &x80235;
    char* x80237 = strntoi_unchecked(x108986, x80236);
    x108986 = x80237;
    /* VAR */ char* x80239 = x108986;
    while(1) {
      
      char x80240 = *x108986;
      boolean_t x80241 = x80240!=('|');
      /* VAR */ boolean_t ite101222 = 0;
      if(x80241) {
        char x109089 = *x108986;
        boolean_t x109090 = x109089!=('\n');
        ite101222 = x109090;
      } else {
        
        ite101222 = 0;
      };
      boolean_t x97998 = ite101222;
      if (!(x97998)) break; 
      
      x108986 += 1;
    };
    char* x80247 = x80239;
    numeric_int_t x80248 = x108986 - x80247;
    numeric_int_t x80249 = x80248+(1);
    char* x116805 = (char*)malloc(x80249 * sizeof(char));
    memset(x116805, 0, x80249 * sizeof(char));
    long x116806 = mallocSym_81788_116399;
    long x116807 = (long){x80249};
    long x116808 = x116806+(x116807);
    mallocSym_81788_116399 = x116808;
    char* x80252 = x80239;
    char* x80253 = strncpy(x116805, x80252, x80248);
    x108986 += 1;
    struct ORDERSRecord* x116813 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x116813, 0, 1 * sizeof(struct ORDERSRecord));
    long x116814 = mallocSym_82609_116422;
    long x116815 = (long){1};
    long x116816 = x116814+(x116815);
    mallocSym_82609_116422 = x116816;
    x116813->O_ORDERKEY = x80164; x116813->O_CUSTKEY = x80169; x116813->O_ORDERDATE = x80201; x116813->O_SHIPPRIORITY = x80235;
    numeric_int_t x68021 = x108987;
    boolean_t x88705 = x116813==(NULL);
    if(x88705) {
      *(x116670 + x68021) = (const struct ORDERSRecord){0};
    } else {
      
      struct ORDERSRecord x81797 = *x116813;
      *(x116670 + x68021) = x81797;
      struct ORDERSRecord* x81799 = &(x116670[x68021]);
      x116813 = x81799;
    };
    numeric_int_t x68023 = x108987;
    numeric_int_t x68024 = x68023+(1);
    x108987 = x68024;
  };
  FILE* x109117 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ numeric_int_t x109118 = 0;
  numeric_int_t x109119 = x109118;
  numeric_int_t* x109120 = &x109119;
  numeric_int_t x109121 = fscanf(x109117, "%d", x109120);
  pclose(x109117);
  struct CUSTOMERRecord* x116837 = (struct CUSTOMERRecord*)malloc(x109119 * sizeof(struct CUSTOMERRecord));
  memset(x116837, 0, x109119 * sizeof(struct CUSTOMERRecord));
  long x116838 = mallocSym_109123_116404;
  long x116839 = (long){x109119};
  long x116840 = x116838+(x116839);
  mallocSym_109123_116404 = x116840;
  numeric_int_t x109124 = O_RDONLY;
  numeric_int_t x109125 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x109124);
  /* VAR */ struct stat x109126 = x108768;
  struct stat x109127 = x109126;
  struct stat* x109128 = &x109127;
  numeric_int_t x109129 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x109128);
  size_t x109130 = x109128->st_size;
  numeric_int_t x109131 = PROT_READ;
  numeric_int_t x109132 = MAP_PRIVATE;
  char* x109133 = mmap(NULL, x109130, x109131, x109132, x109125, 0);
  /* VAR */ numeric_int_t x109134 = 0;
  while(1) {
    
    numeric_int_t x68031 = x109134;
    boolean_t x68032 = x68031<(x109119);
    /* VAR */ boolean_t ite101274 = 0;
    if(x68032) {
      char x109140 = *x109133;
      boolean_t x109141 = x109140!=('\0');
      ite101274 = x109141;
    } else {
      
      ite101274 = 0;
    };
    boolean_t x98043 = ite101274;
    if (!(x98043)) break; 
    
    /* VAR */ numeric_int_t x80285 = 0;
    numeric_int_t x80286 = x80285;
    numeric_int_t* x80287 = &x80286;
    char* x80288 = strntoi_unchecked(x109133, x80287);
    x109133 = x80288;
    /* VAR */ char* x80290 = x109133;
    while(1) {
      
      char x80291 = *x109133;
      boolean_t x80292 = x80291!=('|');
      /* VAR */ boolean_t ite101292 = 0;
      if(x80292) {
        char x109157 = *x109133;
        boolean_t x109158 = x109157!=('\n');
        ite101292 = x109158;
      } else {
        
        ite101292 = 0;
      };
      boolean_t x98054 = ite101292;
      if (!(x98054)) break; 
      
      x109133 += 1;
    };
    char* x80298 = x80290;
    numeric_int_t x80299 = x109133 - x80298;
    numeric_int_t x80300 = x80299+(1);
    char* x116885 = (char*)malloc(x80300 * sizeof(char));
    memset(x116885, 0, x80300 * sizeof(char));
    long x116886 = mallocSym_81845_116409;
    long x116887 = (long){x80300};
    long x116888 = x116886+(x116887);
    mallocSym_81845_116409 = x116888;
    char* x80303 = x80290;
    char* x80304 = strncpy(x116885, x80303, x80299);
    x109133 += 1;
    /* VAR */ char* x80306 = x109133;
    while(1) {
      
      char x80307 = *x109133;
      boolean_t x80308 = x80307!=('|');
      /* VAR */ boolean_t ite101313 = 0;
      if(x80308) {
        char x109177 = *x109133;
        boolean_t x109178 = x109177!=('\n');
        ite101313 = x109178;
      } else {
        
        ite101313 = 0;
      };
      boolean_t x98068 = ite101313;
      if (!(x98068)) break; 
      
      x109133 += 1;
    };
    char* x80314 = x80306;
    numeric_int_t x80315 = x109133 - x80314;
    numeric_int_t x80316 = x80315+(1);
    char* x116909 = (char*)malloc(x80316 * sizeof(char));
    memset(x116909, 0, x80316 * sizeof(char));
    long x116910 = mallocSym_81861_116403;
    long x116911 = (long){x80316};
    long x116912 = x116910+(x116911);
    mallocSym_81861_116403 = x116912;
    char* x80319 = x80306;
    char* x80320 = strncpy(x116909, x80319, x80315);
    x109133 += 1;
    /* VAR */ numeric_int_t x80322 = 0;
    numeric_int_t x80323 = x80322;
    numeric_int_t* x80324 = &x80323;
    char* x80325 = strntoi_unchecked(x109133, x80324);
    x109133 = x80325;
    /* VAR */ char* x80327 = x109133;
    while(1) {
      
      char x80328 = *x109133;
      boolean_t x80329 = x80328!=('|');
      /* VAR */ boolean_t ite101339 = 0;
      if(x80329) {
        char x109202 = *x109133;
        boolean_t x109203 = x109202!=('\n');
        ite101339 = x109203;
      } else {
        
        ite101339 = 0;
      };
      boolean_t x98087 = ite101339;
      if (!(x98087)) break; 
      
      x109133 += 1;
    };
    char* x80335 = x80327;
    numeric_int_t x80336 = x109133 - x80335;
    numeric_int_t x80337 = x80336+(1);
    char* x116938 = (char*)malloc(x80337 * sizeof(char));
    memset(x116938, 0, x80337 * sizeof(char));
    long x116939 = mallocSym_81882_116390;
    long x116940 = (long){x80337};
    long x116941 = x116939+(x116940);
    mallocSym_81882_116390 = x116941;
    char* x80340 = x80327;
    char* x80341 = strncpy(x116938, x80340, x80336);
    x109133 += 1;
    /* VAR */ double x80343 = 0.0;
    double x80344 = x80343;
    double* x80345 = &x80344;
    char* x80346 = strntod_unchecked(x109133, x80345);
    x109133 = x80346;
    /* VAR */ char* x80348 = x109133;
    while(1) {
      
      char x80349 = *x109133;
      boolean_t x80350 = x80349!=('|');
      /* VAR */ boolean_t ite101365 = 0;
      if(x80350) {
        char x109227 = *x109133;
        boolean_t x109228 = x109227!=('\n');
        ite101365 = x109228;
      } else {
        
        ite101365 = 0;
      };
      boolean_t x98106 = ite101365;
      if (!(x98106)) break; 
      
      x109133 += 1;
    };
    char* x80356 = x80348;
    numeric_int_t x80357 = x109133 - x80356;
    numeric_int_t x80358 = x80357+(1);
    char* x116967 = (char*)malloc(x80358 * sizeof(char));
    memset(x116967, 0, x80358 * sizeof(char));
    long x116968 = mallocSym_81903_116397;
    long x116969 = (long){x80358};
    long x116970 = x116968+(x116969);
    mallocSym_81903_116397 = x116970;
    char* x80361 = x80348;
    char* x80362 = strncpy(x116967, x80361, x80357);
    x109133 += 1;
    /* VAR */ char* x80364 = x109133;
    while(1) {
      
      char x80365 = *x109133;
      boolean_t x80366 = x80365!=('|');
      /* VAR */ boolean_t ite101386 = 0;
      if(x80366) {
        char x109247 = *x109133;
        boolean_t x109248 = x109247!=('\n');
        ite101386 = x109248;
      } else {
        
        ite101386 = 0;
      };
      boolean_t x98120 = ite101386;
      if (!(x98120)) break; 
      
      x109133 += 1;
    };
    char* x80372 = x80364;
    numeric_int_t x80373 = x109133 - x80372;
    numeric_int_t x80374 = x80373+(1);
    char* x116991 = (char*)malloc(x80374 * sizeof(char));
    memset(x116991, 0, x80374 * sizeof(char));
    long x116992 = mallocSym_81919_116412;
    long x116993 = (long){x80374};
    long x116994 = x116992+(x116993);
    mallocSym_81919_116412 = x116994;
    char* x80377 = x80364;
    char* x80378 = strncpy(x116991, x80377, x80373);
    x109133 += 1;
    numeric_int_t x76980 = x76905;
    boolean_t x76981 = x76980>(4096);
    if(x76981) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "C_MKTSEGMENT", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "C_MKTSEGMENT");
    };
    /* VAR */ numeric_int_t x84396 = -1;
    numeric_int_t x84397 = x83946->len;
    numeric_int_t x93410 = 0;
    for(; x93410 < x84397 ; x93410 += 1) {
      
      char* x93411 = g_array_index(x83946, char*, x93410);
      boolean_t x93412 = strcmp(x93411, x116967);
      boolean_t x93413 = !(x93412);
      if(x93413) {
        x84396 = x93410;
        break;
      };
    };
    numeric_int_t x84407 = x84396;
    boolean_t x84408 = x84407!=(-1);
    boolean_t x76986 = !(x84408);
    if(x76986) {
      numeric_int_t x76987 = x76905;
      numeric_int_t x76988 = x76987+(1);
      x76905 = x76988;
      void* x84414 = &(x116967);
      GArray* x84415 = g_array_append_vals(x83946, x84414, 1);
    };
    /* VAR */ numeric_int_t x84416 = -1;
    numeric_int_t x84417 = x83946->len;
    numeric_int_t x93437 = 0;
    for(; x93437 < x84417 ; x93437 += 1) {
      
      char* x93438 = g_array_index(x83946, char*, x93437);
      boolean_t x93439 = strcmp(x93438, x116967);
      boolean_t x93440 = !(x93439);
      if(x93440) {
        x84416 = x93437;
        break;
      };
    };
    numeric_int_t x84427 = x84416;
    struct CUSTOMERRecord* x117048 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x117048, 0, 1 * sizeof(struct CUSTOMERRecord));
    long x117049 = mallocSym_82755_116423;
    long x117050 = (long){1};
    long x117051 = x117049+(x117050);
    mallocSym_82755_116423 = x117051;
    x117048->C_CUSTKEY = x80286; x117048->C_MKTSEGMENT = x84427;
    numeric_int_t x68044 = x109134;
    boolean_t x88877 = x117048==(NULL);
    if(x88877) {
      *(x116837 + x68044) = (const struct CUSTOMERRecord){0};
    } else {
      
      struct CUSTOMERRecord x81941 = *x117048;
      *(x116837 + x68044) = x81941;
      struct CUSTOMERRecord* x81943 = &(x116837[x68044]);
      x117048 = x81943;
    };
    numeric_int_t x68046 = x109134;
    numeric_int_t x68047 = x68046+(1);
    x109134 = x68047;
  };
  numeric_int_t x68051 = 0;
  for(; x68051 < 1 ; x68051 += 1) {
    
    /* VAR */ numeric_int_t x110950 = 0;
    struct AGGRecord_Q3GRPRecord* x118750 = (struct AGGRecord_Q3GRPRecord*)malloc(1048576 * sizeof(struct AGGRecord_Q3GRPRecord));
    memset(x118750, 0, 1048576 * sizeof(struct AGGRecord_Q3GRPRecord));
    long x118751 = mallocSym_110951_116426;
    long x118752 = (long){1048576};
    long x118753 = x118751+(x118752);
    mallocSym_110951_116426 = x118753;
    numeric_int_t x93467 = 0;
    for(; x93467 < 1048576 ; x93467 += 1) {
      
      *(x118750 + x93467) = (const struct AGGRecord_Q3GRPRecord){0};
    };
    struct LINEITEMRecord** x118760 = (struct LINEITEMRecord**)malloc(60000000 * sizeof(struct LINEITEMRecord*));
    memset(x118760, 0, 60000000 * sizeof(struct LINEITEMRecord*));
    long x118761 = mallocSym_110957_116416;
    long x118762 = (long){60000000};
    long x118763 = x118761+(x118762);
    mallocSym_110957_116416 = x118763;
    numeric_int_t* x118765 = (numeric_int_t*)malloc(60000000 * sizeof(numeric_int_t));
    memset(x118765, 0, 60000000 * sizeof(numeric_int_t));
    long x118766 = mallocSym_110958_116395;
    long x118767 = x118766+(x118762);
    mallocSym_110958_116395 = x118767;
    numeric_int_t x93475 = 0;
    for(; x93475 < 60000000 ; x93475 += 1) {
      
      *(x118765 + x93475) = 0;
    };
    /* VAR */ numeric_int_t x110964 = 0;
    numeric_int_t x93490 = 0;
    for(; x93490 < x108761 ; x93490 += 1) {
      
      struct LINEITEMRecord* x93491 = &(x116439[x93490]);
      numeric_int_t x93492 = x93491->L_ORDERKEY;
      numeric_int_t x93493 = x93492%(60000000);
      numeric_int_t x93494 = x118765[x93493];
      numeric_int_t x93495 = x93494+(1);
      *(x118765 + x93493) = x93495;
      numeric_int_t x93497 = x110964;
      numeric_int_t x93498 = x93497+(1);
      x110964 = x93498;
    };
    numeric_int_t x93507 = 0;
    for(; x93507 < 60000000 ; x93507 += 1) {
      
      numeric_int_t x93508 = x118765[x93507];
      struct LINEITEMRecord* x118808 = (struct LINEITEMRecord*)malloc(x93508 * sizeof(struct LINEITEMRecord));
      memset(x118808, 0, x93508 * sizeof(struct LINEITEMRecord));
      long x118809 = mallocSym_93509_116421;
      long x118810 = (long){x93508};
      long x118811 = x118809+(x118810);
      mallocSym_93509_116421 = x118811;
      *(x118760 + x93507) = x118808;
      *(x118765 + x93507) = 0;
    };
    x110964 = 0;
    numeric_int_t x93534 = 0;
    for(; x93534 < x108761 ; x93534 += 1) {
      
      struct LINEITEMRecord* x93535 = &(x116439[x93534]);
      numeric_int_t x93536 = x93535->L_ORDERKEY;
      numeric_int_t x93537 = x93536%(60000000);
      numeric_int_t x93538 = x118765[x93537];
      struct LINEITEMRecord* x93539 = x118760[x93537];
      boolean_t x93540 = x93535==(NULL);
      if(x93540) {
        *(x93539 + x93538) = (const struct LINEITEMRecord){0};
      } else {
        
        struct LINEITEMRecord x81999 = *x93535;
        *(x93539 + x93538) = x81999;
        struct LINEITEMRecord* x82001 = &(x93539[x93538]);
        x93535 = x82001;
      };
      numeric_int_t x93547 = x118765[x93537];
      numeric_int_t x93548 = x93547+(1);
      *(x118765 + x93537) = x93548;
      numeric_int_t x93550 = x110964;
      numeric_int_t x93551 = x93550+(1);
      x110964 = x93551;
    };
    struct ORDERSRecord** x118855 = (struct ORDERSRecord**)malloc(96 * sizeof(struct ORDERSRecord*));
    memset(x118855, 0, 96 * sizeof(struct ORDERSRecord*));
    long x118856 = mallocSym_111037_116410;
    long x118857 = (long){96};
    long x118858 = x118856+(x118857);
    mallocSym_111037_116410 = x118858;
    numeric_int_t* x118860 = (numeric_int_t*)malloc(96 * sizeof(numeric_int_t));
    memset(x118860, 0, 96 * sizeof(numeric_int_t));
    long x118861 = mallocSym_111038_116394;
    long x118862 = x118861+(x118857);
    mallocSym_111038_116394 = x118862;
    numeric_int_t x93562 = 0;
    for(; x93562 < 96 ; x93562 += 1) {
      
      numeric_int_t x93563 = x108972/(96);
      numeric_int_t x93564 = x93563*(4);
      struct ORDERSRecord* x118877 = (struct ORDERSRecord*)malloc(x93564 * sizeof(struct ORDERSRecord));
      memset(x118877, 0, x93564 * sizeof(struct ORDERSRecord));
      long x118878 = mallocSym_93565_116402;
      long x118879 = (long){x93564};
      long x118880 = x118878+(x118879);
      mallocSym_93565_116402 = x118880;
      *(x118855 + x93562) = x118877;
    };
    /* VAR */ numeric_int_t x111050 = 0;
    numeric_int_t x93594 = 0;
    for(; x93594 < x108972 ; x93594 += 1) {
      
      struct ORDERSRecord* x93595 = &(x116670[x93594]);
      numeric_int_t x93596 = x93595->O_ORDERDATE;
      numeric_int_t x93597 = x93596/(100);
      numeric_int_t x93598 = x93597%(100);
      numeric_int_t x93599 = x93597/(100);
      numeric_int_t x93600 = x93599-(1992);
      numeric_int_t x93601 = x93600*(12);
      numeric_int_t x93602 = x93598-(1);
      numeric_int_t x93603 = x93601+(x93602);
      numeric_int_t x93604 = x118860[x93603];
      struct ORDERSRecord* x93605 = x118855[x93603];
      boolean_t x93606 = x93595==(NULL);
      if(x93606) {
        *(x93605 + x93604) = (const struct ORDERSRecord){0};
      } else {
        
        struct ORDERSRecord x82038 = *x93595;
        *(x93605 + x93604) = x82038;
        struct ORDERSRecord* x82040 = &(x93605[x93604]);
        x93595 = x82040;
      };
      numeric_int_t x93613 = x93604+(1);
      *(x118860 + x93603) = x93613;
      numeric_int_t x93615 = x111050;
      numeric_int_t x93616 = x93615+(1);
      x111050 = x93616;
    };
    /* VAR */ numeric_int_t x111100 = 0;
    struct Q3GRPRecord* x118934 = (struct Q3GRPRecord*)malloc(48000000 * sizeof(struct Q3GRPRecord));
    memset(x118934, 0, 48000000 * sizeof(struct Q3GRPRecord));
    long x118935 = mallocSym_111101_116408;
    long x118936 = (long){48000000};
    long x118937 = x118935+(x118936);
    mallocSym_111101_116408 = x118937;
    /* VAR */ numeric_int_t x111102 = 0;
    while(1) {
      
      numeric_int_t x79153 = x111102;
      boolean_t x79154 = x79153<(48000000);
      if (!(x79154)) break; 
      
      numeric_int_t x79155 = x111102;
      struct Q3GRPRecord* x118944 = (struct Q3GRPRecord*)malloc(1 * sizeof(struct Q3GRPRecord));
      memset(x118944, 0, 1 * sizeof(struct Q3GRPRecord));
      long x118945 = mallocSym_82876_116396;
      long x118946 = (long){1};
      long x118947 = x118945+(x118946);
      mallocSym_82876_116396 = x118947;
      x118944->L_ORDERKEY = 0; x118944->O_ORDERDATE = 0; x118944->O_SHIPPRIORITY = 0;
      boolean_t x88997 = x118944==(NULL);
      if(x88997) {
        *(x118934 + x79155) = (const struct Q3GRPRecord){0};
      } else {
        
        struct Q3GRPRecord x82059 = *x118944;
        *(x118934 + x79155) = x82059;
        struct Q3GRPRecord* x82061 = &(x118934[x79155]);
        x118944 = x82061;
      };
      numeric_int_t x79158 = x111102;
      numeric_int_t x79159 = x79158+(1);
      x111102 = x79159;
    };
    /* VAR */ numeric_int_t x111120 = 0;
    double** x118962 = (double**)malloc(120000 * sizeof(double*));
    memset(x118962, 0, 120000 * sizeof(double*));
    long x118963 = mallocSym_111121_116413;
    long x118964 = (long){120000};
    long x118965 = x118963+(x118964);
    mallocSym_111121_116413 = x118965;
    /* VAR */ numeric_int_t x111122 = 0;
    while(1) {
      
      numeric_int_t x79165 = x111122;
      boolean_t x79166 = x79165<(120000);
      if (!(x79166)) break; 
      
      numeric_int_t x79167 = x111122;
      double* x118972 = (double*)malloc(1 * sizeof(double));
      memset(x118972, 0, 1 * sizeof(double));
      long x118973 = mallocSym_82074_116419;
      long x118974 = (long){1};
      long x118975 = x118973+(x118974);
      mallocSym_82074_116419 = x118975;
      *(x118962 + x79167) = x118972;
      numeric_int_t x79170 = x111122;
      numeric_int_t x79171 = x79170+(1);
      x111122 = x79171;
    };
    /* VAR */ numeric_int_t x111132 = 0;
    struct AGGRecord_Q3GRPRecord* x118982 = (struct AGGRecord_Q3GRPRecord*)malloc(120000 * sizeof(struct AGGRecord_Q3GRPRecord));
    memset(x118982, 0, 120000 * sizeof(struct AGGRecord_Q3GRPRecord));
    long x118983 = mallocSym_111133_116393;
    long x118984 = x118983+(x118964);
    mallocSym_111133_116393 = x118984;
    /* VAR */ numeric_int_t x111134 = 0;
    while(1) {
      
      numeric_int_t x79177 = x111134;
      boolean_t x79178 = x79177<(120000);
      if (!(x79178)) break; 
      
      numeric_int_t x79179 = x111134;
      struct Q3GRPRecord* x79180 = &(x118934[x79179]);
      double* x79181 = x118962[x79179];
      struct AGGRecord_Q3GRPRecord* x118993 = (struct AGGRecord_Q3GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q3GRPRecord));
      memset(x118993, 0, 1 * sizeof(struct AGGRecord_Q3GRPRecord));
      long x118994 = mallocSym_82910_116398;
      long x118995 = (long){1};
      long x118996 = x118994+(x118995);
      mallocSym_82910_116398 = x118996;
      x118993->key = x79180; x118993->aggs = x79181; x118993->next = NULL;
      boolean_t x89031 = x118993==(NULL);
      /* VAR */ boolean_t ite103340 = 0;
      if(x89031) {
        ite103340 = 1;
      } else {
        
        struct Q3GRPRecord* x111148 = x118993->key;
        boolean_t x111149 = x111148==(NULL);
        ite103340 = x111149;
      };
      boolean_t x99735 = ite103340;
      if(x99735) {
        *(x118982 + x79179) = (const struct AGGRecord_Q3GRPRecord){0};
      } else {
        
        struct AGGRecord_Q3GRPRecord x82091 = *x118993;
        *(x118982 + x79179) = x82091;
        struct AGGRecord_Q3GRPRecord* x82093 = &(x118982[x79179]);
        x118993 = x82093;
      };
      numeric_int_t x79184 = x111134;
      numeric_int_t x79185 = x79184+(1);
      x111134 = x79185;
    };
    struct timeval x111162 = (struct timeval){0};
    /* VAR */ struct timeval x111163 = x111162;
    struct timeval x111164 = x111163;
    /* VAR */ struct timeval x111165 = x111162;
    struct timeval x111166 = x111165;
    /* VAR */ struct timeval x111167 = x111162;
    struct timeval x111168 = x111167;
    struct timeval* x111169 = &x111166;
    gettimeofday(x111169, NULL);
    /* VAR */ numeric_int_t x111171 = -1;
    numeric_int_t x111172 = x83946->len;
    numeric_int_t x93695 = 0;
    for(; x93695 < x111172 ; x93695 += 1) {
      
      char* x93696 = g_array_index(x83946, char*, x93695);
      boolean_t x93697 = strcmp(x93696, "HOUSEHOLD");
      boolean_t x93698 = !(x93697);
      if(x93698) {
        x111171 = x93695;
        break;
      };
    };
    numeric_int_t x111188 = x111171;
    /* VAR */ numeric_int_t x111189 = 0;
    numeric_int_t* x111268 = &(x111229);
    GTree* x111269 = g_tree_new(x111268);
    /* VAR */ boolean_t x111270 = 0;
    /* VAR */ numeric_int_t x111271 = 0;
    numeric_int_t x94196 = 33;
    for(; x94196 < 39 ; x94196 += 1) {
      
      numeric_int_t x94197 = x118860[x94196];
      struct ORDERSRecord* x94198 = x118855[x94196];
      numeric_int_t x93974 = 0;
      for(; x93974 < x94197 ; x93974 += 1) {
        
        struct ORDERSRecord* x93975 = &(x94198[x93974]);
        numeric_int_t x93976 = x93975->O_ORDERDATE;
        boolean_t x93977 = x93976<(19950304);
        if(x93977) {
          numeric_int_t x68173 = x93975->O_CUSTKEY;
          numeric_int_t x76496 = x68173-(1);
          struct CUSTOMERRecord* x76497 = &(x116837[x76496]);
          numeric_int_t x77094 = x76497->C_MKTSEGMENT;
          boolean_t x77095 = x77094==(x111188);
          if(x77095) {
            numeric_int_t x68155 = x76497->C_CUSTKEY;
            boolean_t x70755 = x68155==(x68173);
            if(x70755) {
              numeric_int_t x70756 = x76497->C_CUSTKEY;
              boolean_t x70757 = x70756==(x68173);
              if(x70757) {
                numeric_int_t x68616 = x93975->O_ORDERKEY;
                numeric_int_t x68617 = x93975->O_SHIPPRIORITY;
                numeric_int_t x70764 = x68616%(60000000);
                numeric_int_t x70765 = x118765[x70764];
                struct LINEITEMRecord* x70766 = x118760[x70764];
                numeric_int_t x93874 = 0;
                for(; x93874 < x70765 ; x93874 += 1) {
                  
                  struct LINEITEMRecord* x93875 = &(x70766[x93874]);
                  numeric_int_t x93876 = x93875->L_SHIPDATE;
                  boolean_t x93877 = x93876>(19950304);
                  if(x93877) {
                    numeric_int_t x68217 = x93875->L_ORDERKEY;
                    boolean_t x76520 = x68616==(x68217);
                    if(x76520) {
                      double x68704 = x93875->L_EXTENDEDPRICE;
                      double x68705 = x93875->L_DISCOUNT;
                      numeric_int_t x79257 = x111100;
                      struct Q3GRPRecord* x79258 = &(x118934[x79257]);
                      x79258->L_ORDERKEY = x68217;
                      x79258->O_ORDERDATE = x93976;
                      x79258->O_SHIPPRIORITY = x68617;
                      numeric_int_t x79262 = x111100;
                      numeric_int_t x79263 = x79262+(1);
                      x111100 = x79263;
                      numeric_int_t x89159 = x79258->L_ORDERKEY;
                      numeric_int_t x89161 = x79258->O_ORDERDATE;
                      numeric_int_t x89163 = x79258->O_SHIPPRIORITY;
                      numeric_int_t x89165 = x89159+(x89161);
                      numeric_int_t x89166 = x89165+(x89163);
                      numeric_int_t x72017 = x89166&(1048575);
                      struct AGGRecord_Q3GRPRecord* x72845 = &(x118750[x72017]);
                      numeric_int_t x72019 = x110950;
                      boolean_t x72020 = x72017>(x72019);
                      if(x72020) {
                        x110950 = x72017;
                      };
                      /* VAR */ struct AGGRecord_Q3GRPRecord* current73171 = x72845;
                      /* VAR */ boolean_t found72855 = 0;
                      while(1) {
                        
                        struct AGGRecord_Q3GRPRecord* x73174 = current73171;
                        boolean_t x89177 = x73174!=(NULL);
                        /* VAR */ boolean_t ite104618 = 0;
                        if(x89177) {
                          struct Q3GRPRecord* x112382 = x73174->key;
                          boolean_t x112383 = x112382!=(NULL);
                          ite104618 = x112383;
                        } else {
                          
                          ite104618 = 0;
                        };
                        boolean_t x100740 = ite104618;
                        /* VAR */ boolean_t ite104627 = 0;
                        if(x100740) {
                          boolean_t x112390 = found72855;
                          boolean_t x112391 = !(x112390);
                          ite104627 = x112391;
                        } else {
                          
                          ite104627 = 0;
                        };
                        boolean_t x100742 = ite104627;
                        if (!(x100742)) break; 
                        
                        struct AGGRecord_Q3GRPRecord* x73179 = current73171;
                        struct Q3GRPRecord* x72863 = x73179->key;
                        numeric_int_t x89186 = x72863->L_ORDERKEY;
                        boolean_t x89187 = x89186==(x89159);
                        numeric_int_t x89188 = x72863->O_ORDERDATE;
                        boolean_t x89189 = x89188==(x89161);
                        numeric_int_t x89190 = x72863->O_SHIPPRIORITY;
                        boolean_t x89191 = x89190==(x89163);
                        /* VAR */ boolean_t ite104644 = 0;
                        if(x89187) {
                          ite104644 = x89189;
                        } else {
                          
                          ite104644 = 0;
                        };
                        boolean_t x100752 = ite104644;
                        /* VAR */ boolean_t ite104651 = 0;
                        if(x100752) {
                          ite104651 = x89191;
                        } else {
                          
                          ite104651 = 0;
                        };
                        boolean_t x100754 = ite104651;
                        if(x100754) {
                          found72855 = 1;
                        } else {
                          
                          struct AGGRecord_Q3GRPRecord* x73185 = current73171;
                          struct AGGRecord_Q3GRPRecord* x73818 = x73185->next;
                          current73171 = x73818;
                        };
                      };
                      boolean_t x72871 = found72855;
                      boolean_t x72872 = !(x72871);
                      /* VAR */ struct AGGRecord_Q3GRPRecord** ite100763 = 0;
                      if(x72872) {
                        ite100763 = NULL;
                      } else {
                        
                        struct AGGRecord_Q3GRPRecord* x100765 = current73171;
                        ite100763 = x100765;
                      };
                      struct AGGRecord_Q3GRPRecord** x72878 = ite100763;
                      boolean_t x75675 = x72878!=(NULL);
                      /* VAR */ struct AGGRecord_Q3GRPRecord* ite100771 = 0;
                      if(x75675) {
                        ite100771 = x72878;
                      } else {
                        
                        numeric_int_t x100773 = x111120;
                        double* x100774 = x118962[x100773];
                        numeric_int_t x100775 = x111120;
                        numeric_int_t x100776 = x100775+(1);
                        x111120 = x100776;
                        numeric_int_t x100778 = x111132;
                        struct AGGRecord_Q3GRPRecord* x100779 = &(x118982[x100778]);
                        x100779->key = x79258;
                        x100779->aggs = x100774;
                        x100779->next = NULL;
                        numeric_int_t x100783 = x111132;
                        numeric_int_t x100784 = x100783+(1);
                        x111132 = x100784;
                        boolean_t x100786 = x72845==(NULL);
                        /* VAR */ boolean_t ite104690 = 0;
                        if(x100786) {
                          ite104690 = 1;
                        } else {
                          
                          struct Q3GRPRecord* x112451 = x72845->key;
                          boolean_t x112452 = x112451==(NULL);
                          ite104690 = x112452;
                        };
                        boolean_t x100788 = ite104690;
                        if(x100788) {
                          x100779->next = NULL;
                          boolean_t x89224 = x100779==(NULL);
                          /* VAR */ boolean_t ite104702 = 0;
                          if(x89224) {
                            ite104702 = 1;
                          } else {
                            
                            struct Q3GRPRecord* x112462 = x100779->key;
                            boolean_t x112463 = x112462==(NULL);
                            ite104702 = x112463;
                          };
                          boolean_t x100793 = ite104702;
                          if(x100793) {
                            *(x118750 + x72017) = (const struct AGGRecord_Q3GRPRecord){0};
                          } else {
                            
                            struct AGGRecord_Q3GRPRecord x82230 = *x100779;
                            *(x118750 + x72017) = x82230;
                            struct AGGRecord_Q3GRPRecord* x82232 = &(x118750[x72017]);
                            x100779 = x82232;
                          };
                        } else {
                          
                          struct AGGRecord_Q3GRPRecord* x73838 = x72845->next;
                          x100779->next = x73838;
                          x72845->next = x100779;
                        };
                        ite100771 = x100779;
                      };
                      struct AGGRecord_Q3GRPRecord* x72032 = ite100771;
                      double* x68276 = x72032->aggs;
                      double x68290 = x68276[0];
                      double x68293 = 1.0-(x68705);
                      double x68294 = x68704*(x68293);
                      double x68295 = x68290+(x68294);
                      *x68276 = x68295;
                    };
                  };
                };
              };
            };
          };
        };
      };
    };
    numeric_int_t x112485 = x110950;
    numeric_int_t x112486 = x112485+(1);
    numeric_int_t x94660 = 0;
    for(; x94660 < x112486 ; x94660 += 1) {
      
      struct AGGRecord_Q3GRPRecord* x94661 = &(x118750[x94660]);
      /* VAR */ struct AGGRecord_Q3GRPRecord* x94662 = x94661;
      while(1) {
        
        struct AGGRecord_Q3GRPRecord* x73233 = x94662;
        boolean_t x89255 = x73233!=(NULL);
        /* VAR */ boolean_t ite104758 = 0;
        if(x89255) {
          struct Q3GRPRecord* x112515 = x73233->key;
          boolean_t x112516 = x112515!=(NULL);
          ite104758 = x112516;
        } else {
          
          ite104758 = 0;
        };
        boolean_t x100835 = ite104758;
        if (!(x100835)) break; 
        
        struct AGGRecord_Q3GRPRecord* x73235 = x94662;
        struct AGGRecord_Q3GRPRecord* x73868 = x73235->next;
        struct AGGRecord_Q3GRPRecord* x73237 = x94662;
        g_tree_insert(x111269, x73237, x73237);
        x94662 = x73868;
      };
    };
    while(1) {
      
      boolean_t x69604 = x111270;
      boolean_t x68318 = !(x69604);
      /* VAR */ boolean_t ite104775 = 0;
      if(x68318) {
        numeric_int_t x112531 = g_tree_nnodes(x111269);
        boolean_t x112532 = x112531!=(0);
        ite104775 = x112532;
      } else {
        
        ite104775 = 0;
      };
      boolean_t x100845 = ite104775;
      if (!(x100845)) break; 
      
      void* x84794 = NULL;
      void** x84802 = &(x84794);
      g_tree_foreach(x111269, x84801, x84802);
      struct AGGRecord_Q3GRPRecord* x84804 = (struct AGGRecord_Q3GRPRecord*){x84794};
      numeric_int_t x84805 = g_tree_remove(x111269, x84804);
      numeric_int_t x69612 = x111271;
      boolean_t x68328 = x69612>=(10);
      if(x68328) {
        x111270 = 1;
      } else {
        
        struct Q3GRPRecord* x68330 = x84804->key;
        numeric_int_t x68331 = x68330->L_ORDERKEY;
        double* x68332 = x84804->aggs;
        double x68333 = x68332[0];
        numeric_int_t x68334 = x68330->O_ORDERDATE;
        char* x68335 = ltoa(x68334);
        numeric_int_t x68336 = x68330->O_SHIPPRIORITY;
        printf("%d|%.4f|%s|%d\n", x68331, x68333, x68335, x68336);
        numeric_int_t x69624 = x111271;
        numeric_int_t x68339 = x69624+(1);
        x111271 = x68339;
      };
    };
    numeric_int_t x112564 = x111271;
    printf("(%d rows)\n", x112564);
    struct timeval* x112566 = &x111168;
    gettimeofday(x112566, NULL);
    struct timeval* x112568 = &x111164;
    struct timeval* x112569 = &x111168;
    struct timeval* x112570 = &x111166;
    long x112571 = timeval_subtract(x112568, x112569, x112570);
    printf("Generated code run in %ld milliseconds.\n", x112571);
  };
  /* VAR */ long mallocSum120429 = 0L;
  long x120430 = mallocSym_81882_116390;
  numeric_int_t x120431 = sizeof(char);
  long x120432 = (long){x120431};
  long x120433 = x120430*(x120432);
  printf("116938 with type Byte: %ld\n", x120433);
  long x120435 = mallocSum120429;
  long x120436 = x120435+(x120433);
  mallocSum120429 = x120436;
  long x120438 = mallocSym_108765_116391;
  numeric_int_t x120439 = sizeof(struct LINEITEMRecord);
  long x120440 = (long){x120439};
  long x120441 = x120438*(x120440);
  printf("116439 with type LINEITEMRecord: %ld\n", x120441);
  long x120443 = mallocSum120429;
  long x120444 = x120443+(x120441);
  mallocSum120429 = x120444;
  long x120446 = mallocSym_81960_116392;
  numeric_int_t x120447 = sizeof(numeric_int_t);
  long x120448 = (long){x120447};
  long x120449 = x120446*(x120448);
  printf("117084 with type Int: %ld\n", x120449);
  long x120451 = mallocSum120429;
  long x120452 = x120451+(x120449);
  mallocSum120429 = x120452;
  long x120454 = mallocSym_111133_116393;
  numeric_int_t x120455 = sizeof(struct AGGRecord_Q3GRPRecord);
  long x120456 = (long){x120455};
  long x120457 = x120454*(x120456);
  printf("118982 with type AGGRecord_Q3GRPRecord: %ld\n", x120457);
  long x120459 = mallocSum120429;
  long x120460 = x120459+(x120457);
  mallocSum120429 = x120460;
  long x120462 = mallocSym_111038_116394;
  numeric_int_t x120463 = sizeof(numeric_int_t);
  long x120464 = (long){x120463};
  long x120465 = x120462*(x120464);
  printf("118860 with type Int: %ld\n", x120465);
  long x120467 = mallocSum120429;
  long x120468 = x120467+(x120465);
  mallocSum120429 = x120468;
  long x120470 = mallocSym_110958_116395;
  numeric_int_t x120471 = sizeof(numeric_int_t);
  long x120472 = (long){x120471};
  long x120473 = x120470*(x120472);
  printf("118765 with type Int: %ld\n", x120473);
  long x120475 = mallocSum120429;
  long x120476 = x120475+(x120473);
  mallocSum120429 = x120476;
  long x120478 = mallocSym_82876_116396;
  numeric_int_t x120479 = sizeof(struct Q3GRPRecord);
  long x120480 = (long){x120479};
  long x120481 = x120478*(x120480);
  printf("118944 with type Q3GRPRecord: %ld\n", x120481);
  long x120483 = mallocSum120429;
  long x120484 = x120483+(x120481);
  mallocSum120429 = x120484;
  long x120486 = mallocSym_81903_116397;
  numeric_int_t x120487 = sizeof(char);
  long x120488 = (long){x120487};
  long x120489 = x120486*(x120488);
  printf("116967 with type Byte: %ld\n", x120489);
  long x120491 = mallocSum120429;
  long x120492 = x120491+(x120489);
  mallocSum120429 = x120492;
  long x120494 = mallocSym_82910_116398;
  numeric_int_t x120495 = sizeof(struct AGGRecord_Q3GRPRecord);
  long x120496 = (long){x120495};
  long x120497 = x120494*(x120496);
  printf("118993 with type AGGRecord_Q3GRPRecord: %ld\n", x120497);
  long x120499 = mallocSum120429;
  long x120500 = x120499+(x120497);
  mallocSum120429 = x120500;
  long x120502 = mallocSym_81788_116399;
  numeric_int_t x120503 = sizeof(char);
  long x120504 = (long){x120503};
  long x120505 = x120502*(x120504);
  printf("116805 with type Byte: %ld\n", x120505);
  long x120507 = mallocSum120429;
  long x120508 = x120507+(x120505);
  mallocSum120429 = x120508;
  long x120510 = mallocSym_81959_116400;
  numeric_int_t x120511 = sizeof(struct LINEITEMRecord*);
  long x120512 = (long){x120511};
  long x120513 = x120510*(x120512);
  printf("117079 with type Pointer[LINEITEMRecord]: %ld\n", x120513);
  long x120515 = mallocSum120429;
  long x120516 = x120515+(x120513);
  mallocSum120429 = x120516;
  long x120518 = mallocSym_82068_116401;
  numeric_int_t x120519 = sizeof(double*);
  long x120520 = (long){x120519};
  long x120521 = x120518*(x120520);
  printf("117281 with type Pointer[Double]: %ld\n", x120521);
  long x120523 = mallocSum120429;
  long x120524 = x120523+(x120521);
  mallocSum120429 = x120524;
  long x120526 = mallocSym_93565_116402;
  numeric_int_t x120527 = sizeof(struct ORDERSRecord);
  long x120528 = (long){x120527};
  long x120529 = x120526*(x120528);
  printf("118877 with type ORDERSRecord: %ld\n", x120529);
  long x120531 = mallocSum120429;
  long x120532 = x120531+(x120529);
  mallocSum120429 = x120532;
  long x120534 = mallocSym_81861_116403;
  numeric_int_t x120535 = sizeof(char);
  long x120536 = (long){x120535};
  long x120537 = x120534*(x120536);
  printf("116909 with type Byte: %ld\n", x120537);
  long x120539 = mallocSum120429;
  long x120540 = x120539+(x120537);
  mallocSum120429 = x120540;
  long x120542 = mallocSym_109123_116404;
  numeric_int_t x120543 = sizeof(struct CUSTOMERRecord);
  long x120544 = (long){x120543};
  long x120545 = x120542*(x120544);
  printf("116837 with type CUSTOMERRecord: %ld\n", x120545);
  long x120547 = mallocSum120429;
  long x120548 = x120547+(x120545);
  mallocSum120429 = x120548;
  long x120550 = mallocSym_81984_116405;
  numeric_int_t x120551 = sizeof(struct LINEITEMRecord);
  long x120552 = (long){x120551};
  long x120553 = x120550*(x120552);
  printf("118799 with type LINEITEMRecord: %ld\n", x120553);
  long x120555 = mallocSum120429;
  long x120556 = x120555+(x120553);
  mallocSum120429 = x120556;
  long x120558 = mallocSym_82011_116406;
  numeric_int_t x120559 = sizeof(struct ORDERSRecord*);
  long x120560 = (long){x120559};
  long x120561 = x120558*(x120560);
  printf("117174 with type Pointer[ORDERSRecord]: %ld\n", x120561);
  long x120563 = mallocSum120429;
  long x120564 = x120563+(x120561);
  mallocSum120429 = x120564;
  long x120566 = mallocSym_81644_116407;
  numeric_int_t x120567 = sizeof(char);
  long x120568 = (long){x120567};
  long x120569 = x120566*(x120568);
  printf("116614 with type Byte: %ld\n", x120569);
  long x120571 = mallocSum120429;
  long x120572 = x120571+(x120569);
  mallocSum120429 = x120572;
  long x120574 = mallocSym_111101_116408;
  numeric_int_t x120575 = sizeof(struct Q3GRPRecord);
  long x120576 = (long){x120575};
  long x120577 = x120574*(x120576);
  printf("118934 with type Q3GRPRecord: %ld\n", x120577);
  long x120579 = mallocSum120429;
  long x120580 = x120579+(x120577);
  mallocSum120429 = x120580;
  long x120582 = mallocSym_81845_116409;
  numeric_int_t x120583 = sizeof(char);
  long x120584 = (long){x120583};
  long x120585 = x120582*(x120584);
  printf("116885 with type Byte: %ld\n", x120585);
  long x120587 = mallocSum120429;
  long x120588 = x120587+(x120585);
  mallocSum120429 = x120588;
  long x120590 = mallocSym_111037_116410;
  numeric_int_t x120591 = sizeof(struct ORDERSRecord*);
  long x120592 = (long){x120591};
  long x120593 = x120590*(x120592);
  printf("118855 with type Pointer[ORDERSRecord]: %ld\n", x120593);
  long x120595 = mallocSum120429;
  long x120596 = x120595+(x120593);
  mallocSum120429 = x120596;
  long x120598 = mallocSym_82479_116411;
  numeric_int_t x120599 = sizeof(struct LINEITEMRecord);
  long x120600 = (long){x120599};
  long x120601 = x120598*(x120600);
  printf("116646 with type LINEITEMRecord: %ld\n", x120601);
  long x120603 = mallocSum120429;
  long x120604 = x120603+(x120601);
  mallocSum120429 = x120604;
  long x120606 = mallocSym_81919_116412;
  numeric_int_t x120607 = sizeof(char);
  long x120608 = (long){x120607};
  long x120609 = x120606*(x120608);
  printf("116991 with type Byte: %ld\n", x120609);
  long x120611 = mallocSum120429;
  long x120612 = x120611+(x120609);
  mallocSum120429 = x120612;
  long x120614 = mallocSym_111121_116413;
  numeric_int_t x120615 = sizeof(double*);
  long x120616 = (long){x120615};
  long x120617 = x120614*(x120616);
  printf("118962 with type Pointer[Double]: %ld\n", x120617);
  long x120619 = mallocSum120429;
  long x120620 = x120619+(x120617);
  mallocSum120429 = x120620;
  long x120622 = mallocSym_81767_116414;
  numeric_int_t x120623 = sizeof(char);
  long x120624 = (long){x120623};
  long x120625 = x120622*(x120624);
  printf("116776 with type Byte: %ld\n", x120625);
  long x120627 = mallocSum120429;
  long x120628 = x120627+(x120625);
  mallocSum120429 = x120628;
  long x120630 = mallocSym_82012_116415;
  numeric_int_t x120631 = sizeof(numeric_int_t);
  long x120632 = (long){x120631};
  long x120633 = x120630*(x120632);
  printf("117179 with type Int: %ld\n", x120633);
  long x120635 = mallocSum120429;
  long x120636 = x120635+(x120633);
  mallocSum120429 = x120636;
  long x120638 = mallocSym_110957_116416;
  numeric_int_t x120639 = sizeof(struct LINEITEMRecord*);
  long x120640 = (long){x120639};
  long x120641 = x120638*(x120640);
  printf("118760 with type Pointer[LINEITEMRecord]: %ld\n", x120641);
  long x120643 = mallocSum120429;
  long x120644 = x120643+(x120641);
  mallocSum120429 = x120644;
  long x120646 = mallocSym_82050_116417;
  numeric_int_t x120647 = sizeof(struct Q3GRPRecord);
  long x120648 = (long){x120647};
  long x120649 = x120646*(x120648);
  printf("117253 with type Q3GRPRecord: %ld\n", x120649);
  long x120651 = mallocSum120429;
  long x120652 = x120651+(x120649);
  mallocSum120429 = x120652;
  long x120654 = mallocSym_81751_116418;
  numeric_int_t x120655 = sizeof(char);
  long x120656 = (long){x120655};
  long x120657 = x120654*(x120656);
  printf("116752 with type Byte: %ld\n", x120657);
  long x120659 = mallocSum120429;
  long x120660 = x120659+(x120657);
  mallocSum120429 = x120660;
  long x120662 = mallocSym_82074_116419;
  numeric_int_t x120663 = sizeof(double);
  long x120664 = (long){x120663};
  long x120665 = x120662*(x120664);
  printf("118972 with type Double: %ld\n", x120665);
  long x120667 = mallocSum120429;
  long x120668 = x120667+(x120665);
  mallocSum120429 = x120668;
  long x120670 = mallocSym_81953_116420;
  numeric_int_t x120671 = sizeof(struct AGGRecord_Q3GRPRecord);
  long x120672 = (long){x120671};
  long x120673 = x120670*(x120672);
  printf("117069 with type AGGRecord_Q3GRPRecord: %ld\n", x120673);
  long x120675 = mallocSum120429;
  long x120676 = x120675+(x120673);
  mallocSum120429 = x120676;
  long x120678 = mallocSym_93509_116421;
  numeric_int_t x120679 = sizeof(struct LINEITEMRecord);
  long x120680 = (long){x120679};
  long x120681 = x120678*(x120680);
  printf("118808 with type LINEITEMRecord: %ld\n", x120681);
  long x120683 = mallocSum120429;
  long x120684 = x120683+(x120681);
  mallocSum120429 = x120684;
  long x120686 = mallocSym_82609_116422;
  numeric_int_t x120687 = sizeof(struct ORDERSRecord);
  long x120688 = (long){x120687};
  long x120689 = x120686*(x120688);
  printf("116813 with type ORDERSRecord: %ld\n", x120689);
  long x120691 = mallocSum120429;
  long x120692 = x120691+(x120689);
  mallocSum120429 = x120692;
  long x120694 = mallocSym_82755_116423;
  numeric_int_t x120695 = sizeof(struct CUSTOMERRecord);
  long x120696 = (long){x120695};
  long x120697 = x120694*(x120696);
  printf("117048 with type CUSTOMERRecord: %ld\n", x120697);
  long x120699 = mallocSum120429;
  long x120700 = x120699+(x120697);
  mallocSum120429 = x120700;
  long x120702 = mallocSym_82080_116424;
  numeric_int_t x120703 = sizeof(struct AGGRecord_Q3GRPRecord);
  long x120704 = (long){x120703};
  long x120705 = x120702*(x120704);
  printf("117301 with type AGGRecord_Q3GRPRecord: %ld\n", x120705);
  long x120707 = mallocSum120429;
  long x120708 = x120707+(x120705);
  mallocSum120429 = x120708;
  long x120710 = mallocSym_82018_116425;
  numeric_int_t x120711 = sizeof(struct ORDERSRecord);
  long x120712 = (long){x120711};
  long x120713 = x120710*(x120712);
  printf("118868 with type ORDERSRecord: %ld\n", x120713);
  long x120715 = mallocSum120429;
  long x120716 = x120715+(x120713);
  mallocSum120429 = x120716;
  long x120718 = mallocSym_110951_116426;
  numeric_int_t x120719 = sizeof(struct AGGRecord_Q3GRPRecord);
  long x120720 = (long){x120719};
  long x120721 = x120718*(x120720);
  printf("118750 with type AGGRecord_Q3GRPRecord: %ld\n", x120721);
  long x120723 = mallocSum120429;
  long x120724 = x120723+(x120721);
  mallocSum120429 = x120724;
  long x120726 = mallocSym_81628_116427;
  numeric_int_t x120727 = sizeof(char);
  long x120728 = (long){x120727};
  long x120729 = x120726*(x120728);
  printf("116590 with type Byte: %ld\n", x120729);
  long x120731 = mallocSum120429;
  long x120732 = x120731+(x120729);
  mallocSum120429 = x120732;
  long x120734 = mallocSym_108976_116428;
  numeric_int_t x120735 = sizeof(struct ORDERSRecord);
  long x120736 = (long){x120735};
  long x120737 = x120734*(x120736);
  printf("116670 with type ORDERSRecord: %ld\n", x120737);
  long x120739 = mallocSum120429;
  long x120740 = x120739+(x120737);
  mallocSum120429 = x120740;
  long x120742 = mallocSym_81660_116429;
  numeric_int_t x120743 = sizeof(char);
  long x120744 = (long){x120743};
  long x120745 = x120742*(x120744);
  printf("116638 with type Byte: %ld\n", x120745);
  long x120747 = mallocSum120429;
  long x120748 = x120747+(x120745);
  mallocSum120429 = x120748;
  long x120750 = mallocSum120429;
  printf("total: %ld\n", x120750);
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x111229(struct AGGRecord_Q3GRPRecord* x68114, struct AGGRecord_Q3GRPRecord* x68115) {
  double* x68116 = x68114->aggs;
  double x68117 = x68116[0];
  double* x68118 = x68115->aggs;
  double x68119 = x68118[0];
  boolean_t x68120 = x68117<(x68119);
  /* VAR */ numeric_int_t ite99821 = 0;
  if(x68120) {
    ite99821 = 1;
  } else {
    
    boolean_t x99823 = x68117>(x68119);
    /* VAR */ numeric_int_t ite99825 = 0;
    if(x99823) {
      ite99825 = -1;
    } else {
      
      struct Q3GRPRecord* x99827 = x68114->key;
      numeric_int_t x99828 = x99827->O_ORDERDATE;
      struct Q3GRPRecord* x99829 = x68115->key;
      numeric_int_t x99830 = x99829->O_ORDERDATE;
      boolean_t x99831 = x99828<(x99830);
      /* VAR */ numeric_int_t ite99833 = 0;
      if(x99831) {
        ite99833 = -1;
      } else {
        
        boolean_t x99835 = x99828>(x99830);
        /* VAR */ numeric_int_t ite99837 = 0;
        if(x99835) {
          ite99837 = 1;
        } else {
          
          ite99837 = 0;
        };
        numeric_int_t x99836 = ite99837;
        ite99833 = x99836;
      };
      numeric_int_t x99832 = ite99833;
      ite99825 = x99832;
    };
    numeric_int_t x99824 = ite99825;
    ite99821 = x99824;
  };
  numeric_int_t x68131 = ite99821;
  return x68131; 
}

numeric_int_t x84801(void* x84795, void* x84796, void* x84797) {
  struct AGGRecord_Q3GRPRecord** x84798 = (struct AGGRecord_Q3GRPRecord**){x84797};
  struct AGGRecord_Q3GRPRecord* x84799 = (struct AGGRecord_Q3GRPRecord*){x84796};
  pointer_assign(x84798, x84799);
  return 1; 
}
