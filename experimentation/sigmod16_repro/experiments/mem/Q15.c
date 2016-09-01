#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct AGGRecord_String;
struct LINEITEMRecord;
struct AGGRecord_Int;
struct SUPPLIERRecord;
struct AGGRecord_String {
  char* key;
  double* aggs;
};

struct LINEITEMRecord {
  numeric_int_t L_SUPPKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  numeric_int_t L_SHIPDATE;
};

struct AGGRecord_Int {
  numeric_int_t key;
  double* aggs;
};

struct SUPPLIERRecord {
  numeric_int_t S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  char* S_PHONE;
};


int main(int argc, char** argv) {
  /* VAR */ long mallocSym_628577_636284 = 0L;
  /* VAR */ long mallocSym_623100_636285 = 0L;
  /* VAR */ long mallocSym_623222_636286 = 0L;
  /* VAR */ long mallocSym_623727_636287 = 0L;
  /* VAR */ long mallocSym_634552_636288 = 0L;
  /* VAR */ long mallocSym_623064_636289 = 0L;
  /* VAR */ long mallocSym_623048_636290 = 0L;
  /* VAR */ long mallocSym_623213_636291 = 0L;
  /* VAR */ long mallocSym_623214_636292 = 0L;
  /* VAR */ long mallocSym_634550_636293 = 0L;
  /* VAR */ long mallocSym_634547_636294 = 0L;
  /* VAR */ long mallocSym_634612_636295 = 0L;
  /* VAR */ long mallocSym_634554_636296 = 0L;
  /* VAR */ long mallocSym_623171_636297 = 0L;
  /* VAR */ long mallocSym_623150_636298 = 0L;
  /* VAR */ long mallocSym_623192_636299 = 0L;
  /* VAR */ long mallocSym_623211_636300 = 0L;
  /* VAR */ long mallocSym_622911_636301 = 0L;
  /* VAR */ long mallocSym_623215_636302 = 0L;
  /* VAR */ long mallocSym_634546_636303 = 0L;
  /* VAR */ long mallocSym_623263_636304 = 0L;
  /* VAR */ long mallocSym_623613_636305 = 0L;
  /* VAR */ long mallocSym_623257_636306 = 0L;
  /* VAR */ long mallocSym_623209_636307 = 0L;
  /* VAR */ long mallocSym_623080_636308 = 0L;
  /* VAR */ long mallocSym_634553_636309 = 0L;
  /* VAR */ long mallocSym_634555_636310 = 0L;
  /* VAR */ long mallocSym_623742_636311 = 0L;
  /* VAR */ long mallocSym_623216_636312 = 0L;
  /* VAR */ long mallocSym_623804_636313 = 0L;
  /* VAR */ long mallocSym_623251_636314 = 0L;
  /* VAR */ long mallocSym_634624_636315 = 0L;
  /* VAR */ long mallocSym_623134_636316 = 0L;
  FILE* x621885 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x621886 = 0;
  numeric_int_t x621887 = x621886;
  numeric_int_t* x621888 = &x621887;
  numeric_int_t x621889 = fscanf(x621885, "%d", x621888);
  pclose(x621885);
  struct LINEITEMRecord* x636323 = (struct LINEITEMRecord*)malloc(x621887 * sizeof(struct LINEITEMRecord));
  memset(x636323, 0, x621887 * sizeof(struct LINEITEMRecord));
  long x636324 = mallocSym_622911_636301;
  long x636325 = (long){x621887};
  long x636326 = x636324+(x636325);
  mallocSym_622911_636301 = x636326;
  numeric_int_t x621893 = O_RDONLY;
  numeric_int_t x621894 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x621893);
  struct stat x621895 = (struct stat){0};
  /* VAR */ struct stat x621896 = x621895;
  struct stat x621897 = x621896;
  struct stat* x621898 = &x621897;
  numeric_int_t x621899 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x621898);
  size_t x621900 = x621898->st_size;
  numeric_int_t x621901 = PROT_READ;
  numeric_int_t x621902 = MAP_PRIVATE;
  char* x614556 = mmap(NULL, x621900, x621901, x621902, x621894, 0);
  /* VAR */ numeric_int_t x614557 = 0;
  while(1) {
    
    numeric_int_t x614558 = x614557;
    boolean_t x614559 = x614558<(x621887);
    /* VAR */ boolean_t ite631139 = 0;
    if(x614559) {
      char x633760 = *x614556;
      boolean_t x633761 = x633760!=('\0');
      ite631139 = x633761;
    } else {
      
      ite631139 = 0;
    };
    boolean_t x630056 = ite631139;
    if (!(x630056)) break; 
    
    /* VAR */ numeric_int_t x621910 = 0;
    numeric_int_t x621911 = x621910;
    numeric_int_t* x621912 = &x621911;
    char* x621913 = strntoi_unchecked(x614556, x621912);
    x614556 = x621913;
    /* VAR */ numeric_int_t x621915 = 0;
    numeric_int_t x621916 = x621915;
    numeric_int_t* x621917 = &x621916;
    char* x621918 = strntoi_unchecked(x614556, x621917);
    x614556 = x621918;
    /* VAR */ numeric_int_t x621920 = 0;
    numeric_int_t x621921 = x621920;
    numeric_int_t* x621922 = &x621921;
    char* x621923 = strntoi_unchecked(x614556, x621922);
    x614556 = x621923;
    /* VAR */ numeric_int_t x621925 = 0;
    numeric_int_t x621926 = x621925;
    numeric_int_t* x621927 = &x621926;
    char* x621928 = strntoi_unchecked(x614556, x621927);
    x614556 = x621928;
    /* VAR */ double x621930 = 0.0;
    double x621931 = x621930;
    double* x621932 = &x621931;
    char* x621933 = strntod_unchecked(x614556, x621932);
    x614556 = x621933;
    /* VAR */ double x621935 = 0.0;
    double x621936 = x621935;
    double* x621937 = &x621936;
    char* x621938 = strntod_unchecked(x614556, x621937);
    x614556 = x621938;
    /* VAR */ double x621940 = 0.0;
    double x621941 = x621940;
    double* x621942 = &x621941;
    char* x621943 = strntod_unchecked(x614556, x621942);
    x614556 = x621943;
    /* VAR */ double x621945 = 0.0;
    double x621946 = x621945;
    double* x621947 = &x621946;
    char* x621948 = strntod_unchecked(x614556, x621947);
    x614556 = x621948;
    char x621950 = *x614556;
    /* VAR */ char x621951 = x621950;
    x614556 += 1;
    x614556 += 1;
    char x621955 = *x614556;
    /* VAR */ char x621956 = x621955;
    x614556 += 1;
    x614556 += 1;
    /* VAR */ numeric_int_t x621960 = 0;
    numeric_int_t x621961 = x621960;
    numeric_int_t* x621962 = &x621961;
    char* x621963 = strntoi_unchecked(x614556, x621962);
    x614556 = x621963;
    /* VAR */ numeric_int_t x621965 = 0;
    numeric_int_t x621966 = x621965;
    numeric_int_t* x621967 = &x621966;
    char* x621968 = strntoi_unchecked(x614556, x621967);
    x614556 = x621968;
    /* VAR */ numeric_int_t x621970 = 0;
    numeric_int_t x621971 = x621970;
    numeric_int_t* x621972 = &x621971;
    char* x621973 = strntoi_unchecked(x614556, x621972);
    x614556 = x621973;
    numeric_int_t x621975 = x621961*(10000);
    numeric_int_t x621976 = x621966*(100);
    numeric_int_t x621977 = x621975+(x621976);
    numeric_int_t x621978 = x621977+(x621971);
    /* VAR */ numeric_int_t x621979 = 0;
    numeric_int_t x621980 = x621979;
    numeric_int_t* x621981 = &x621980;
    char* x621982 = strntoi_unchecked(x614556, x621981);
    x614556 = x621982;
    /* VAR */ numeric_int_t x621984 = 0;
    numeric_int_t x621985 = x621984;
    numeric_int_t* x621986 = &x621985;
    char* x621987 = strntoi_unchecked(x614556, x621986);
    x614556 = x621987;
    /* VAR */ numeric_int_t x621989 = 0;
    numeric_int_t x621990 = x621989;
    numeric_int_t* x621991 = &x621990;
    char* x621992 = strntoi_unchecked(x614556, x621991);
    x614556 = x621992;
    /* VAR */ numeric_int_t x621998 = 0;
    numeric_int_t x621999 = x621998;
    numeric_int_t* x622000 = &x621999;
    char* x622001 = strntoi_unchecked(x614556, x622000);
    x614556 = x622001;
    /* VAR */ numeric_int_t x622003 = 0;
    numeric_int_t x622004 = x622003;
    numeric_int_t* x622005 = &x622004;
    char* x622006 = strntoi_unchecked(x614556, x622005);
    x614556 = x622006;
    /* VAR */ numeric_int_t x622008 = 0;
    numeric_int_t x622009 = x622008;
    numeric_int_t* x622010 = &x622009;
    char* x622011 = strntoi_unchecked(x614556, x622010);
    x614556 = x622011;
    /* VAR */ char* x622017 = x614556;
    while(1) {
      
      char x622018 = *x614556;
      boolean_t x622019 = x622018!=('|');
      /* VAR */ boolean_t ite631259 = 0;
      if(x622019) {
        char x633879 = *x614556;
        boolean_t x633880 = x633879!=('\n');
        ite631259 = x633880;
      } else {
        
        ite631259 = 0;
      };
      boolean_t x630169 = ite631259;
      if (!(x630169)) break; 
      
      x614556 += 1;
    };
    char* x622025 = x622017;
    numeric_int_t x622026 = x614556 - x622025;
    numeric_int_t x622027 = x622026+(1);
    char* x636474 = (char*)malloc(x622027 * sizeof(char));
    memset(x636474, 0, x622027 * sizeof(char));
    long x636475 = mallocSym_623048_636290;
    long x636476 = (long){x622027};
    long x636477 = x636475+(x636476);
    mallocSym_623048_636290 = x636477;
    char* x622030 = x622017;
    char* x622031 = strncpy(x636474, x622030, x622026);
    x614556 += 1;
    /* VAR */ char* x622033 = x614556;
    while(1) {
      
      char x622034 = *x614556;
      boolean_t x622035 = x622034!=('|');
      /* VAR */ boolean_t ite631280 = 0;
      if(x622035) {
        char x633899 = *x614556;
        boolean_t x633900 = x633899!=('\n');
        ite631280 = x633900;
      } else {
        
        ite631280 = 0;
      };
      boolean_t x630183 = ite631280;
      if (!(x630183)) break; 
      
      x614556 += 1;
    };
    char* x622041 = x622033;
    numeric_int_t x622042 = x614556 - x622041;
    numeric_int_t x622043 = x622042+(1);
    char* x636498 = (char*)malloc(x622043 * sizeof(char));
    memset(x636498, 0, x622043 * sizeof(char));
    long x636499 = mallocSym_623064_636289;
    long x636500 = (long){x622043};
    long x636501 = x636499+(x636500);
    mallocSym_623064_636289 = x636501;
    char* x622046 = x622033;
    char* x622047 = strncpy(x636498, x622046, x622042);
    x614556 += 1;
    /* VAR */ char* x622049 = x614556;
    while(1) {
      
      char x622050 = *x614556;
      boolean_t x622051 = x622050!=('|');
      /* VAR */ boolean_t ite631301 = 0;
      if(x622051) {
        char x633919 = *x614556;
        boolean_t x633920 = x633919!=('\n');
        ite631301 = x633920;
      } else {
        
        ite631301 = 0;
      };
      boolean_t x630197 = ite631301;
      if (!(x630197)) break; 
      
      x614556 += 1;
    };
    char* x622057 = x622049;
    numeric_int_t x622058 = x614556 - x622057;
    numeric_int_t x622059 = x622058+(1);
    char* x636522 = (char*)malloc(x622059 * sizeof(char));
    memset(x636522, 0, x622059 * sizeof(char));
    long x636523 = mallocSym_623080_636308;
    long x636524 = (long){x622059};
    long x636525 = x636523+(x636524);
    mallocSym_623080_636308 = x636525;
    char* x622062 = x622049;
    char* x622063 = strncpy(x636522, x622062, x622058);
    x614556 += 1;
    struct LINEITEMRecord* x636530 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x636530, 0, 1 * sizeof(struct LINEITEMRecord));
    long x636531 = mallocSym_623613_636305;
    long x636532 = (long){1};
    long x636533 = x636531+(x636532);
    mallocSym_623613_636305 = x636533;
    x636530->L_SUPPKEY = x621921; x636530->L_EXTENDEDPRICE = x621936; x636530->L_DISCOUNT = x621941; x636530->L_SHIPDATE = x621978;
    numeric_int_t x614579 = x614557;
    struct LINEITEMRecord x623087 = *x636530;
    *(x636323 + x614579) = x623087;
    struct LINEITEMRecord* x623089 = &(x636323[x614579]);
    x636530 = x623089;
    numeric_int_t x614581 = x614557;
    numeric_int_t x614582 = x614581+(1);
    x614557 = x614582;
  };
  FILE* x622071 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ numeric_int_t x622072 = 0;
  numeric_int_t x622073 = x622072;
  numeric_int_t* x622074 = &x622073;
  numeric_int_t x622075 = fscanf(x622071, "%d", x622074);
  pclose(x622071);
  struct SUPPLIERRecord* x636551 = (struct SUPPLIERRecord*)malloc(x622073 * sizeof(struct SUPPLIERRecord));
  memset(x636551, 0, x622073 * sizeof(struct SUPPLIERRecord));
  long x636552 = mallocSym_623100_636285;
  long x636553 = (long){x622073};
  long x636554 = x636552+(x636553);
  mallocSym_623100_636285 = x636554;
  numeric_int_t x622079 = O_RDONLY;
  numeric_int_t x622080 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x622079);
  /* VAR */ struct stat x622081 = x621895;
  struct stat x622082 = x622081;
  struct stat* x622083 = &x622082;
  numeric_int_t x622084 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x622083);
  size_t x622085 = x622083->st_size;
  numeric_int_t x622086 = PROT_READ;
  numeric_int_t x622087 = MAP_PRIVATE;
  char* x614587 = mmap(NULL, x622085, x622086, x622087, x622080, 0);
  /* VAR */ numeric_int_t x614588 = 0;
  while(1) {
    
    numeric_int_t x614589 = x614588;
    boolean_t x614590 = x614589<(x622073);
    /* VAR */ boolean_t ite631350 = 0;
    if(x614590) {
      char x633967 = *x614587;
      boolean_t x633968 = x633967!=('\0');
      ite631350 = x633968;
    } else {
      
      ite631350 = 0;
    };
    boolean_t x630239 = ite631350;
    if (!(x630239)) break; 
    
    /* VAR */ numeric_int_t x622095 = 0;
    numeric_int_t x622096 = x622095;
    numeric_int_t* x622097 = &x622096;
    char* x622098 = strntoi_unchecked(x614587, x622097);
    x614587 = x622098;
    /* VAR */ char* x622100 = x614587;
    while(1) {
      
      char x622101 = *x614587;
      boolean_t x622102 = x622101!=('|');
      /* VAR */ boolean_t ite631368 = 0;
      if(x622102) {
        char x633984 = *x614587;
        boolean_t x633985 = x633984!=('\n');
        ite631368 = x633985;
      } else {
        
        ite631368 = 0;
      };
      boolean_t x630250 = ite631368;
      if (!(x630250)) break; 
      
      x614587 += 1;
    };
    char* x622108 = x622100;
    numeric_int_t x622109 = x614587 - x622108;
    numeric_int_t x622110 = x622109+(1);
    char* x636599 = (char*)malloc(x622110 * sizeof(char));
    memset(x636599, 0, x622110 * sizeof(char));
    long x636600 = mallocSym_623134_636316;
    long x636601 = (long){x622110};
    long x636602 = x636600+(x636601);
    mallocSym_623134_636316 = x636602;
    char* x622113 = x622100;
    char* x622114 = strncpy(x636599, x622113, x622109);
    x614587 += 1;
    /* VAR */ char* x622116 = x614587;
    while(1) {
      
      char x622117 = *x614587;
      boolean_t x622118 = x622117!=('|');
      /* VAR */ boolean_t ite631389 = 0;
      if(x622118) {
        char x634004 = *x614587;
        boolean_t x634005 = x634004!=('\n');
        ite631389 = x634005;
      } else {
        
        ite631389 = 0;
      };
      boolean_t x630264 = ite631389;
      if (!(x630264)) break; 
      
      x614587 += 1;
    };
    char* x622124 = x622116;
    numeric_int_t x622125 = x614587 - x622124;
    numeric_int_t x622126 = x622125+(1);
    char* x636623 = (char*)malloc(x622126 * sizeof(char));
    memset(x636623, 0, x622126 * sizeof(char));
    long x636624 = mallocSym_623150_636298;
    long x636625 = (long){x622126};
    long x636626 = x636624+(x636625);
    mallocSym_623150_636298 = x636626;
    char* x622129 = x622116;
    char* x622130 = strncpy(x636623, x622129, x622125);
    x614587 += 1;
    /* VAR */ numeric_int_t x622132 = 0;
    numeric_int_t x622133 = x622132;
    numeric_int_t* x622134 = &x622133;
    char* x622135 = strntoi_unchecked(x614587, x622134);
    x614587 = x622135;
    /* VAR */ char* x622137 = x614587;
    while(1) {
      
      char x622138 = *x614587;
      boolean_t x622139 = x622138!=('|');
      /* VAR */ boolean_t ite631415 = 0;
      if(x622139) {
        char x634029 = *x614587;
        boolean_t x634030 = x634029!=('\n');
        ite631415 = x634030;
      } else {
        
        ite631415 = 0;
      };
      boolean_t x630283 = ite631415;
      if (!(x630283)) break; 
      
      x614587 += 1;
    };
    char* x622145 = x622137;
    numeric_int_t x622146 = x614587 - x622145;
    numeric_int_t x622147 = x622146+(1);
    char* x636652 = (char*)malloc(x622147 * sizeof(char));
    memset(x636652, 0, x622147 * sizeof(char));
    long x636653 = mallocSym_623171_636297;
    long x636654 = (long){x622147};
    long x636655 = x636653+(x636654);
    mallocSym_623171_636297 = x636655;
    char* x622150 = x622137;
    char* x622151 = strncpy(x636652, x622150, x622146);
    x614587 += 1;
    /* VAR */ double x622153 = 0.0;
    double x622154 = x622153;
    double* x622155 = &x622154;
    char* x622156 = strntod_unchecked(x614587, x622155);
    x614587 = x622156;
    /* VAR */ char* x622158 = x614587;
    while(1) {
      
      char x622159 = *x614587;
      boolean_t x622160 = x622159!=('|');
      /* VAR */ boolean_t ite631441 = 0;
      if(x622160) {
        char x634054 = *x614587;
        boolean_t x634055 = x634054!=('\n');
        ite631441 = x634055;
      } else {
        
        ite631441 = 0;
      };
      boolean_t x630302 = ite631441;
      if (!(x630302)) break; 
      
      x614587 += 1;
    };
    char* x622166 = x622158;
    numeric_int_t x622167 = x614587 - x622166;
    numeric_int_t x622168 = x622167+(1);
    char* x636681 = (char*)malloc(x622168 * sizeof(char));
    memset(x636681, 0, x622168 * sizeof(char));
    long x636682 = mallocSym_623192_636299;
    long x636683 = (long){x622168};
    long x636684 = x636682+(x636683);
    mallocSym_623192_636299 = x636684;
    char* x622171 = x622158;
    char* x622172 = strncpy(x636681, x622171, x622167);
    x614587 += 1;
    struct SUPPLIERRecord* x636689 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x636689, 0, 1 * sizeof(struct SUPPLIERRecord));
    long x636690 = mallocSym_623727_636287;
    long x636691 = (long){1};
    long x636692 = x636690+(x636691);
    mallocSym_623727_636287 = x636692;
    x636689->S_SUPPKEY = x622096; x636689->S_NAME = x636599; x636689->S_ADDRESS = x636623; x636689->S_PHONE = x636652;
    numeric_int_t x614601 = x614588;
    struct SUPPLIERRecord x623199 = *x636689;
    *(x636551 + x614601) = x623199;
    struct SUPPLIERRecord* x623201 = &(x636551[x614601]);
    x636689 = x623201;
    numeric_int_t x614603 = x614588;
    numeric_int_t x614604 = x614603+(1);
    x614588 = x614604;
  };
  numeric_int_t x614608 = 0;
  for(; x614608 < 1 ; x614608 += 1) {
    
    double* x637217 = (double*)malloc(1 * sizeof(double));
    memset(x637217, 0, 1 * sizeof(double));
    long x637218 = mallocSym_634546_636303;
    long x637219 = (long){1};
    long x637220 = x637218+(x637219);
    mallocSym_634546_636303 = x637220;
    struct AGGRecord_String* x637222 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x637222, 0, 1 * sizeof(struct AGGRecord_String));
    long x637223 = mallocSym_634547_636294;
    long x637224 = x637223+(x637219);
    mallocSym_634547_636294 = x637224;
    x637222->key = "MAXREVENUE"; x637222->aggs = x637217;
    struct AGGRecord_Int* x637228 = (struct AGGRecord_Int*)malloc(48000000 * sizeof(struct AGGRecord_Int));
    memset(x637228, 0, 48000000 * sizeof(struct AGGRecord_Int));
    long x637229 = mallocSym_634550_636293;
    long x637230 = (long){48000000};
    long x637231 = x637229+(x637230);
    mallocSym_634550_636293 = x637231;
    /* VAR */ numeric_int_t x634551 = 0;
    void* x637234 = (void*)malloc(160000 * sizeof(void));
    memset(x637234, 0, 160000 * sizeof(void));
    long x637235 = mallocSym_634552_636288;
    long x637236 = (long){160000};
    long x637237 = x637235+(x637236);
    mallocSym_634552_636288 = x637237;
    struct AGGRecord_Int* x637239 = (struct AGGRecord_Int*)malloc(160000 * sizeof(struct AGGRecord_Int));
    memset(x637239, 0, 160000 * sizeof(struct AGGRecord_Int));
    long x637240 = mallocSym_634553_636309;
    long x637241 = x637240+(x637236);
    mallocSym_634553_636309 = x637241;
    struct LINEITEMRecord** x637243 = (struct LINEITEMRecord**)malloc(96 * sizeof(struct LINEITEMRecord*));
    memset(x637243, 0, 96 * sizeof(struct LINEITEMRecord*));
    long x637244 = mallocSym_634554_636296;
    long x637245 = (long){96};
    long x637246 = x637244+(x637245);
    mallocSym_634554_636296 = x637246;
    numeric_int_t* x637248 = (numeric_int_t*)malloc(96 * sizeof(numeric_int_t));
    memset(x637248, 0, 96 * sizeof(numeric_int_t));
    long x637249 = mallocSym_634555_636310;
    long x637250 = x637249+(x637245);
    mallocSym_634555_636310 = x637250;
    numeric_int_t x628574 = 0;
    for(; x628574 < 96 ; x628574 += 1) {
      
      numeric_int_t x628575 = x621887/(96);
      numeric_int_t x628576 = x628575*(4);
      struct LINEITEMRecord* x637265 = (struct LINEITEMRecord*)malloc(x628576 * sizeof(struct LINEITEMRecord));
      memset(x637265, 0, x628576 * sizeof(struct LINEITEMRecord));
      long x637266 = mallocSym_628577_636284;
      long x637267 = (long){x628576};
      long x637268 = x637266+(x637267);
      mallocSym_628577_636284 = x637268;
      *(x637243 + x628574) = x637265;
    };
    /* VAR */ numeric_int_t x634567 = 0;
    numeric_int_t x628603 = 0;
    for(; x628603 < x621887 ; x628603 += 1) {
      
      struct LINEITEMRecord* x628604 = &(x636323[x628603]);
      numeric_int_t x628605 = x628604->L_SHIPDATE;
      numeric_int_t x628606 = x628605/(100);
      numeric_int_t x628607 = x628606%(100);
      numeric_int_t x628608 = x628606/(100);
      numeric_int_t x628609 = x628608-(1992);
      numeric_int_t x628610 = x628609*(12);
      numeric_int_t x628611 = x628607-(1);
      numeric_int_t x628612 = x628610+(x628611);
      numeric_int_t x628613 = x637248[x628612];
      struct LINEITEMRecord* x628614 = x637243[x628612];
      struct LINEITEMRecord x628615 = *x628604;
      *(x628614 + x628613) = x628615;
      struct LINEITEMRecord* x628617 = &(x628614[x628613]);
      x628604 = x628617;
      numeric_int_t x628619 = x628613+(1);
      *(x637248 + x628612) = x628619;
      numeric_int_t x628621 = x634567;
      numeric_int_t x628622 = x628621+(1);
      x634567 = x628622;
    };
    /* VAR */ numeric_int_t x634611 = 0;
    double** x637316 = (double**)malloc(80000 * sizeof(double*));
    memset(x637316, 0, 80000 * sizeof(double*));
    long x637317 = mallocSym_634612_636295;
    long x637318 = (long){80000};
    long x637319 = x637317+(x637318);
    mallocSym_634612_636295 = x637319;
    /* VAR */ numeric_int_t x634613 = 0;
    while(1) {
      
      numeric_int_t x621328 = x634613;
      boolean_t x621329 = x621328<(80000);
      if (!(x621329)) break; 
      
      numeric_int_t x621330 = x634613;
      double* x637326 = (double*)malloc(1 * sizeof(double));
      memset(x637326, 0, 1 * sizeof(double));
      long x637327 = mallocSym_623257_636306;
      long x637328 = x637327+(x637219);
      mallocSym_623257_636306 = x637328;
      *(x637316 + x621330) = x637326;
      numeric_int_t x621333 = x634613;
      numeric_int_t x621334 = x621333+(1);
      x634613 = x621334;
    };
    /* VAR */ numeric_int_t x634623 = 0;
    struct AGGRecord_Int* x637335 = (struct AGGRecord_Int*)malloc(80000 * sizeof(struct AGGRecord_Int));
    memset(x637335, 0, 80000 * sizeof(struct AGGRecord_Int));
    long x637336 = mallocSym_634624_636315;
    long x637337 = x637336+(x637318);
    mallocSym_634624_636315 = x637337;
    /* VAR */ numeric_int_t x634625 = 0;
    while(1) {
      
      numeric_int_t x621340 = x634625;
      boolean_t x621341 = x621340<(80000);
      if (!(x621341)) break; 
      
      numeric_int_t x621342 = x634625;
      double* x621343 = x637316[x621342];
      struct AGGRecord_Int* x637345 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
      memset(x637345, 0, 1 * sizeof(struct AGGRecord_Int));
      long x637346 = mallocSym_623804_636313;
      long x637347 = x637346+(x637219);
      mallocSym_623804_636313 = x637347;
      x637345->key = 0; x637345->aggs = x621343;
      struct AGGRecord_Int x623271 = *x637345;
      *(x637335 + x621342) = x623271;
      struct AGGRecord_Int* x623273 = &(x637335[x621342]);
      x637345 = x623273;
      numeric_int_t x621346 = x634625;
      numeric_int_t x621347 = x621346+(1);
      x634625 = x621347;
    };
    struct timeval x634641 = (struct timeval){0};
    /* VAR */ struct timeval x634642 = x634641;
    struct timeval x634643 = x634642;
    /* VAR */ struct timeval x634644 = x634641;
    struct timeval x634645 = x634644;
    /* VAR */ struct timeval x634646 = x634641;
    struct timeval x634647 = x634646;
    struct timeval* x634648 = &x634645;
    gettimeofday(x634648, NULL);
    /* VAR */ numeric_int_t x634650 = 0;
    /* VAR */ numeric_int_t x634651 = 0;
    /* VAR */ struct AGGRecord_String* x634652 = NULL;
    numeric_int_t x628757 = 20;
    for(; x628757 < 24 ; x628757 += 1) {
      
      numeric_int_t x628758 = x637248[x628757];
      struct LINEITEMRecord* x628759 = x637243[x628757];
      numeric_int_t x628714 = 0;
      for(; x628714 < x628758 ; x628714 += 1) {
        
        struct LINEITEMRecord* x628715 = &(x628759[x628714]);
        numeric_int_t x628716 = x628715->L_SHIPDATE;
        boolean_t x628717 = x628716>=(19930901);
        /* VAR */ boolean_t ite632247 = 0;
        if(x628717) {
          boolean_t x634839 = x628716<(19931201);
          ite632247 = x634839;
        } else {
          
          ite632247 = 0;
        };
        boolean_t x630980 = ite632247;
        if(x630980) {
          numeric_int_t x614660 = x628715->L_SUPPKEY;
          struct AGGRecord_Int* x618115 = &(x637239[x614660]);
          numeric_int_t x618116 = x634551;
          boolean_t x618117 = x614660>(x618116);
          if(x618117) {
            x634551 = x614660;
          };
          boolean_t x626527 = x618115!=(NULL);
          /* VAR */ boolean_t ite632263 = 0;
          if(x626527) {
            double* x634854 = x618115->aggs;
            boolean_t x634855 = x634854!=(NULL);
            ite632263 = x634855;
          } else {
            
            ite632263 = 0;
          };
          boolean_t x630990 = ite632263;
          /* VAR */ struct AGGRecord_Int* ite630992 = 0;
          if(x630990) {
            ite630992 = x618115;
          } else {
            
            numeric_int_t x630994 = x634611;
            double* x630995 = x637316[x630994];
            numeric_int_t x630996 = x634611;
            numeric_int_t x630997 = x630996+(1);
            x634611 = x630997;
            numeric_int_t x630999 = x634623;
            struct AGGRecord_Int* x631000 = &(x637335[x630999]);
            x631000->key = x614660;
            x631000->aggs = x630995;
            numeric_int_t x631003 = x634623;
            numeric_int_t x631004 = x631003+(1);
            x634623 = x631004;
            struct AGGRecord_Int x631006 = *x631000;
            *(x637239 + x614660) = x631006;
            struct AGGRecord_Int* x631008 = &(x637239[x614660]);
            x631000 = x631008;
            ite630992 = x631000;
          };
          struct AGGRecord_Int* x618123 = ite630992;
          double* x614665 = x618123->aggs;
          double x614679 = x614665[0];
          double x614680 = x628715->L_EXTENDEDPRICE;
          double x614681 = x628715->L_DISCOUNT;
          double x614682 = 1.0-(x614681);
          double x614683 = x614680*(x614682);
          double x614684 = x614679+(x614683);
          *x614665 = x614684;
        };
      };
    };
    numeric_int_t x634890 = x634551;
    numeric_int_t x634891 = x634890+(1);
    numeric_int_t x628864 = 0;
    for(; x628864 < x634891 ; x628864 += 1) {
      
      struct AGGRecord_Int* x628865 = &(x637239[x628864]);
      boolean_t x628866 = x628865!=(NULL);
      /* VAR */ boolean_t ite632329 = 0;
      if(x628866) {
        double* x634918 = x628865->aggs;
        boolean_t x634919 = x634918!=(NULL);
        ite632329 = x634919;
      } else {
        
        ite632329 = 0;
      };
      boolean_t x631042 = ite632329;
      if(x631042) {
        numeric_int_t x618152 = x634651;
        struct AGGRecord_Int x623349 = *x628865;
        *(x637228 + x618152) = x623349;
        struct AGGRecord_Int* x623351 = &(x637228[x618152]);
        x628865 = x623351;
        numeric_int_t x618154 = x634651;
        numeric_int_t x618155 = x618154+(1);
        x634651 = x618155;
      };
    };
    /* VAR */ numeric_int_t x634933 = 0;
    while(1) {
      
      numeric_int_t x634935 = x634933;
      numeric_int_t x634936 = x634651;
      boolean_t x634937 = x634935<(x634936);
      if (!(x634937)) break; 
      
      numeric_int_t x614715 = x634933;
      struct AGGRecord_Int* x614716 = &(x637228[x614715]);
      numeric_int_t x614717 = x634933;
      numeric_int_t x614718 = x614717+(1);
      x634933 = x614718;
      double* x614725 = x637222->aggs;
      double x614739 = x614725[0];
      double* x614741 = x614716->aggs;
      double x614742 = x614741[0];
      boolean_t x614743 = x614739<(x614742);
      /* VAR */ double ite631066 = 0;
      if(x614743) {
        double x631067 = x614741[0];
        ite631066 = x631067;
      } else {
        
        ite631066 = x614739;
      };
      double x614745 = ite631066;
      *x614725 = x614745;
    };
    x634652 = x637222;
    struct AGGRecord_String* x634957 = x634652;
    /* VAR */ boolean_t x634958 = 0;
    /* VAR */ numeric_int_t x634959 = 0;
    /* VAR */ numeric_int_t x634960 = 0;
    while(1) {
      
      numeric_int_t x634962 = x634960;
      numeric_int_t x634963 = x634651;
      boolean_t x634964 = x634962<(x634963);
      if (!(x634964)) break; 
      
      numeric_int_t x614876 = x634960;
      struct AGGRecord_Int* x614877 = &(x637228[x614876]);
      numeric_int_t x614878 = x634960;
      numeric_int_t x614879 = x614878+(1);
      x634960 = x614879;
      numeric_int_t x614882 = x614877->key;
      numeric_int_t x619919 = x614882-(1);
      struct SUPPLIERRecord* x619920 = &(x636551[x619919]);
      numeric_int_t x619921 = x619920->S_SUPPKEY;
      boolean_t x619922 = x619921==(x614882);
      if(x619922) {
        numeric_int_t x617468 = x619920->S_SUPPKEY;
        boolean_t x617469 = x617468==(x614882);
        /* VAR */ boolean_t ite632394 = 0;
        if(x617469) {
          double* x634980 = x614877->aggs;
          double x634981 = x634980[0];
          double* x634982 = x634957->aggs;
          double x634983 = x634982[0];
          boolean_t x634984 = x634981==(x634983);
          ite632394 = x634984;
        } else {
          
          ite632394 = 0;
        };
        boolean_t x631094 = ite632394;
        if(x631094) {
          char* x615382 = x619920->S_NAME;
          char* x615383 = x619920->S_ADDRESS;
          char* x615384 = x619920->S_PHONE;
          double* x615385 = x614877->aggs;
          if(0) {
            x634958 = 1;
          } else {
            
            double x614944 = x615385[0];
            printf("%d|%s|%s|%s|%.4f\n", x617468, x615382, x615383, x615384, x614944);
            numeric_int_t x616275 = x634959;
            numeric_int_t x614947 = x616275+(1);
            x634959 = x614947;
          };
        };
      };
    };
    numeric_int_t x635001 = x634959;
    printf("(%d rows)\n", x635001);
    struct timeval* x635003 = &x634647;
    gettimeofday(x635003, NULL);
    struct timeval* x635005 = &x634643;
    struct timeval* x635006 = &x634647;
    struct timeval* x635007 = &x634645;
    long x635008 = timeval_subtract(x635005, x635006, x635007);
    printf("Generated code run in %ld milliseconds.\n", x635008);
  };
  /* VAR */ long mallocSum637727 = 0L;
  long x637728 = mallocSym_628577_636284;
  numeric_int_t x637729 = sizeof(struct LINEITEMRecord);
  long x637730 = (long){x637729};
  long x637731 = x637728*(x637730);
  printf("637265 with type LINEITEMRecord: %ld\n", x637731);
  long x637733 = mallocSum637727;
  long x637734 = x637733+(x637731);
  mallocSum637727 = x637734;
  long x637736 = mallocSym_623100_636285;
  numeric_int_t x637737 = sizeof(struct SUPPLIERRecord);
  long x637738 = (long){x637737};
  long x637739 = x637736*(x637738);
  printf("636551 with type SUPPLIERRecord: %ld\n", x637739);
  long x637741 = mallocSum637727;
  long x637742 = x637741+(x637739);
  mallocSum637727 = x637742;
  long x637744 = mallocSym_623222_636286;
  numeric_int_t x637745 = sizeof(struct LINEITEMRecord);
  long x637746 = (long){x637745};
  long x637747 = x637744*(x637746);
  printf("637256 with type LINEITEMRecord: %ld\n", x637747);
  long x637749 = mallocSum637727;
  long x637750 = x637749+(x637747);
  mallocSum637727 = x637750;
  long x637752 = mallocSym_623727_636287;
  numeric_int_t x637753 = sizeof(struct SUPPLIERRecord);
  long x637754 = (long){x637753};
  long x637755 = x637752*(x637754);
  printf("636689 with type SUPPLIERRecord: %ld\n", x637755);
  long x637757 = mallocSum637727;
  long x637758 = x637757+(x637755);
  mallocSum637727 = x637758;
  long x637760 = mallocSym_634552_636288;
  numeric_int_t x637761 = sizeof(void);
  long x637762 = (long){x637761};
  long x637763 = x637760*(x637762);
  printf("637234 with type Any: %ld\n", x637763);
  long x637765 = mallocSum637727;
  long x637766 = x637765+(x637763);
  mallocSum637727 = x637766;
  long x637768 = mallocSym_623064_636289;
  numeric_int_t x637769 = sizeof(char);
  long x637770 = (long){x637769};
  long x637771 = x637768*(x637770);
  printf("636498 with type Byte: %ld\n", x637771);
  long x637773 = mallocSum637727;
  long x637774 = x637773+(x637771);
  mallocSum637727 = x637774;
  long x637776 = mallocSym_623048_636290;
  numeric_int_t x637777 = sizeof(char);
  long x637778 = (long){x637777};
  long x637779 = x637776*(x637778);
  printf("636474 with type Byte: %ld\n", x637779);
  long x637781 = mallocSum637727;
  long x637782 = x637781+(x637779);
  mallocSum637727 = x637782;
  long x637784 = mallocSym_623213_636291;
  numeric_int_t x637785 = sizeof(void);
  long x637786 = (long){x637785};
  long x637787 = x637784*(x637786);
  printf("636723 with type Any: %ld\n", x637787);
  long x637789 = mallocSum637727;
  long x637790 = x637789+(x637787);
  mallocSum637727 = x637790;
  long x637792 = mallocSym_623214_636292;
  numeric_int_t x637793 = sizeof(struct AGGRecord_Int);
  long x637794 = (long){x637793};
  long x637795 = x637792*(x637794);
  printf("636728 with type AGGRecord_Int: %ld\n", x637795);
  long x637797 = mallocSum637727;
  long x637798 = x637797+(x637795);
  mallocSum637727 = x637798;
  long x637800 = mallocSym_634550_636293;
  numeric_int_t x637801 = sizeof(struct AGGRecord_Int);
  long x637802 = (long){x637801};
  long x637803 = x637800*(x637802);
  printf("637228 with type AGGRecord_Int: %ld\n", x637803);
  long x637805 = mallocSum637727;
  long x637806 = x637805+(x637803);
  mallocSum637727 = x637806;
  long x637808 = mallocSym_634547_636294;
  numeric_int_t x637809 = sizeof(struct AGGRecord_String);
  long x637810 = (long){x637809};
  long x637811 = x637808*(x637810);
  printf("637222 with type AGGRecord_String: %ld\n", x637811);
  long x637813 = mallocSum637727;
  long x637814 = x637813+(x637811);
  mallocSum637727 = x637814;
  long x637816 = mallocSym_634612_636295;
  numeric_int_t x637817 = sizeof(double*);
  long x637818 = (long){x637817};
  long x637819 = x637816*(x637818);
  printf("637316 with type Pointer[Double]: %ld\n", x637819);
  long x637821 = mallocSum637727;
  long x637822 = x637821+(x637819);
  mallocSum637727 = x637822;
  long x637824 = mallocSym_634554_636296;
  numeric_int_t x637825 = sizeof(struct LINEITEMRecord*);
  long x637826 = (long){x637825};
  long x637827 = x637824*(x637826);
  printf("637243 with type Pointer[LINEITEMRecord]: %ld\n", x637827);
  long x637829 = mallocSum637727;
  long x637830 = x637829+(x637827);
  mallocSum637727 = x637830;
  long x637832 = mallocSym_623171_636297;
  numeric_int_t x637833 = sizeof(char);
  long x637834 = (long){x637833};
  long x637835 = x637832*(x637834);
  printf("636652 with type Byte: %ld\n", x637835);
  long x637837 = mallocSum637727;
  long x637838 = x637837+(x637835);
  mallocSum637727 = x637838;
  long x637840 = mallocSym_623150_636298;
  numeric_int_t x637841 = sizeof(char);
  long x637842 = (long){x637841};
  long x637843 = x637840*(x637842);
  printf("636623 with type Byte: %ld\n", x637843);
  long x637845 = mallocSum637727;
  long x637846 = x637845+(x637843);
  mallocSum637727 = x637846;
  long x637848 = mallocSym_623192_636299;
  numeric_int_t x637849 = sizeof(char);
  long x637850 = (long){x637849};
  long x637851 = x637848*(x637850);
  printf("636681 with type Byte: %ld\n", x637851);
  long x637853 = mallocSum637727;
  long x637854 = x637853+(x637851);
  mallocSum637727 = x637854;
  long x637856 = mallocSym_623211_636300;
  numeric_int_t x637857 = sizeof(struct AGGRecord_Int);
  long x637858 = (long){x637857};
  long x637859 = x637856*(x637858);
  printf("636717 with type AGGRecord_Int: %ld\n", x637859);
  long x637861 = mallocSum637727;
  long x637862 = x637861+(x637859);
  mallocSum637727 = x637862;
  long x637864 = mallocSym_622911_636301;
  numeric_int_t x637865 = sizeof(struct LINEITEMRecord);
  long x637866 = (long){x637865};
  long x637867 = x637864*(x637866);
  printf("636323 with type LINEITEMRecord: %ld\n", x637867);
  long x637869 = mallocSum637727;
  long x637870 = x637869+(x637867);
  mallocSum637727 = x637870;
  long x637872 = mallocSym_623215_636302;
  numeric_int_t x637873 = sizeof(struct LINEITEMRecord*);
  long x637874 = (long){x637873};
  long x637875 = x637872*(x637874);
  printf("636732 with type Pointer[LINEITEMRecord]: %ld\n", x637875);
  long x637877 = mallocSum637727;
  long x637878 = x637877+(x637875);
  mallocSum637727 = x637878;
  long x637880 = mallocSym_634546_636303;
  numeric_int_t x637881 = sizeof(double);
  long x637882 = (long){x637881};
  long x637883 = x637880*(x637882);
  printf("637217 with type Double: %ld\n", x637883);
  long x637885 = mallocSum637727;
  long x637886 = x637885+(x637883);
  mallocSum637727 = x637886;
  long x637888 = mallocSym_623263_636304;
  numeric_int_t x637889 = sizeof(struct AGGRecord_Int);
  long x637890 = (long){x637889};
  long x637891 = x637888*(x637890);
  printf("636824 with type AGGRecord_Int: %ld\n", x637891);
  long x637893 = mallocSum637727;
  long x637894 = x637893+(x637891);
  mallocSum637727 = x637894;
  long x637896 = mallocSym_623613_636305;
  numeric_int_t x637897 = sizeof(struct LINEITEMRecord);
  long x637898 = (long){x637897};
  long x637899 = x637896*(x637898);
  printf("636530 with type LINEITEMRecord: %ld\n", x637899);
  long x637901 = mallocSum637727;
  long x637902 = x637901+(x637899);
  mallocSum637727 = x637902;
  long x637904 = mallocSym_623257_636306;
  numeric_int_t x637905 = sizeof(double);
  long x637906 = (long){x637905};
  long x637907 = x637904*(x637906);
  printf("637326 with type Double: %ld\n", x637907);
  long x637909 = mallocSum637727;
  long x637910 = x637909+(x637907);
  mallocSum637727 = x637910;
  long x637912 = mallocSym_623209_636307;
  numeric_int_t x637913 = sizeof(double);
  long x637914 = (long){x637913};
  long x637915 = x637912*(x637914);
  printf("636706 with type Double: %ld\n", x637915);
  long x637917 = mallocSum637727;
  long x637918 = x637917+(x637915);
  mallocSum637727 = x637918;
  long x637920 = mallocSym_623080_636308;
  numeric_int_t x637921 = sizeof(char);
  long x637922 = (long){x637921};
  long x637923 = x637920*(x637922);
  printf("636522 with type Byte: %ld\n", x637923);
  long x637925 = mallocSum637727;
  long x637926 = x637925+(x637923);
  mallocSum637727 = x637926;
  long x637928 = mallocSym_634553_636309;
  numeric_int_t x637929 = sizeof(struct AGGRecord_Int);
  long x637930 = (long){x637929};
  long x637931 = x637928*(x637930);
  printf("637239 with type AGGRecord_Int: %ld\n", x637931);
  long x637933 = mallocSum637727;
  long x637934 = x637933+(x637931);
  mallocSum637727 = x637934;
  long x637936 = mallocSym_634555_636310;
  numeric_int_t x637937 = sizeof(numeric_int_t);
  long x637938 = (long){x637937};
  long x637939 = x637936*(x637938);
  printf("637248 with type Int: %ld\n", x637939);
  long x637941 = mallocSum637727;
  long x637942 = x637941+(x637939);
  mallocSum637727 = x637942;
  long x637944 = mallocSym_623742_636311;
  numeric_int_t x637945 = sizeof(struct AGGRecord_String);
  long x637946 = (long){x637945};
  long x637947 = x637944*(x637946);
  printf("636711 with type AGGRecord_String: %ld\n", x637947);
  long x637949 = mallocSum637727;
  long x637950 = x637949+(x637947);
  mallocSum637727 = x637950;
  long x637952 = mallocSym_623216_636312;
  numeric_int_t x637953 = sizeof(numeric_int_t);
  long x637954 = (long){x637953};
  long x637955 = x637952*(x637954);
  printf("636737 with type Int: %ld\n", x637955);
  long x637957 = mallocSum637727;
  long x637958 = x637957+(x637955);
  mallocSum637727 = x637958;
  long x637960 = mallocSym_623804_636313;
  numeric_int_t x637961 = sizeof(struct AGGRecord_Int);
  long x637962 = (long){x637961};
  long x637963 = x637960*(x637962);
  printf("637345 with type AGGRecord_Int: %ld\n", x637963);
  long x637965 = mallocSum637727;
  long x637966 = x637965+(x637963);
  mallocSum637727 = x637966;
  long x637968 = mallocSym_623251_636314;
  numeric_int_t x637969 = sizeof(double*);
  long x637970 = (long){x637969};
  long x637971 = x637968*(x637970);
  printf("636805 with type Pointer[Double]: %ld\n", x637971);
  long x637973 = mallocSum637727;
  long x637974 = x637973+(x637971);
  mallocSum637727 = x637974;
  long x637976 = mallocSym_634624_636315;
  numeric_int_t x637977 = sizeof(struct AGGRecord_Int);
  long x637978 = (long){x637977};
  long x637979 = x637976*(x637978);
  printf("637335 with type AGGRecord_Int: %ld\n", x637979);
  long x637981 = mallocSum637727;
  long x637982 = x637981+(x637979);
  mallocSum637727 = x637982;
  long x637984 = mallocSym_623134_636316;
  numeric_int_t x637985 = sizeof(char);
  long x637986 = (long){x637985};
  long x637987 = x637984*(x637986);
  printf("636599 with type Byte: %ld\n", x637987);
  long x637989 = mallocSum637727;
  long x637990 = x637989+(x637987);
  mallocSum637727 = x637990;
  long x637992 = mallocSum637727;
  printf("total: %ld\n", x637992);
}
/* ----------- FUNCTIONS ----------- */