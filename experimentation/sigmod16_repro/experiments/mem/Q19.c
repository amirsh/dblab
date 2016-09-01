#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct LINEITEMRecord;
struct PARTRecord;
struct LINEITEMRecord {
  numeric_int_t L_PARTKEY;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  numeric_int_t L_SHIPINSTRUCT;
  numeric_int_t L_SHIPMODE;
};

struct PARTRecord {
  numeric_int_t P_PARTKEY;
  numeric_int_t P_BRAND;
  numeric_int_t P_SIZE;
  numeric_int_t P_CONTAINER;
};


int main(int argc, char** argv) {
  /* VAR */ long mallocSym_786575_790004 = 0L;
  /* VAR */ long mallocSym_787489_790005 = 0L;
  /* VAR */ long mallocSym_778200_790006 = 0L;
  /* VAR */ long mallocSym_768050_790007 = 0L;
  /* VAR */ long mallocSym_787487_790008 = 0L;
  /* VAR */ long mallocSym_767476_790009 = 0L;
  /* VAR */ long mallocSym_787488_790010 = 0L;
  /* VAR */ long mallocSym_767345_790011 = 0L;
  /* VAR */ long mallocSym_767460_790012 = 0L;
  /* VAR */ long mallocSym_767508_790013 = 0L;
  /* VAR */ long mallocSym_767492_790014 = 0L;
  /* VAR */ long mallocSym_767529_790015 = 0L;
  /* VAR */ long mallocSym_767550_790016 = 0L;
  /* VAR */ long mallocSym_767622_790017 = 0L;
  /* VAR */ long mallocSym_786266_790018 = 0L;
  /* VAR */ long mallocSym_767361_790019 = 0L;
  /* VAR */ long mallocSym_767377_790020 = 0L;
  /* VAR */ long mallocSym_767598_790021 = 0L;
  /* VAR */ long mallocSym_767597_790022 = 0L;
  /* VAR */ long mallocSym_767596_790023 = 0L;
  /* VAR */ long mallocSym_768225_790024 = 0L;
  /* VAR */ numeric_int_t x764006 = 0;
  numeric_int_t x769128 = sizeof(char*);
  GArray* x769129 = g_array_new(0, 1, x769128);
  /* VAR */ numeric_int_t x764008 = 0;
  numeric_int_t x769131 = sizeof(char*);
  GArray* x769132 = g_array_new(0, 1, x769131);
  /* VAR */ numeric_int_t x764010 = 0;
  numeric_int_t x769134 = sizeof(char*);
  GArray* x769135 = g_array_new(0, 1, x769134);
  /* VAR */ numeric_int_t x764012 = 0;
  numeric_int_t x769137 = sizeof(char*);
  GArray* x769138 = g_array_new(0, 1, x769137);
  FILE* x786260 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x786261 = 0;
  numeric_int_t x786262 = x786261;
  numeric_int_t* x786263 = &x786262;
  numeric_int_t x786264 = fscanf(x786260, "%d", x786263);
  pclose(x786260);
  struct LINEITEMRecord* x790043 = (struct LINEITEMRecord*)malloc(x786262 * sizeof(struct LINEITEMRecord));
  memset(x790043, 0, x786262 * sizeof(struct LINEITEMRecord));
  long x790044 = mallocSym_786266_790018;
  mallocSym_786266_790018 = (x790044+(((long){x786262})));
  numeric_int_t x786267 = O_RDONLY;
  numeric_int_t x786268 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x786267);
  struct stat x786269 = (struct stat){0};
  /* VAR */ struct stat x786270 = x786269;
  struct stat x786271 = x786270;
  struct stat* x786272 = &x786271;
  numeric_int_t x786273 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x786272);
  numeric_int_t x786275 = PROT_READ;
  numeric_int_t x786276 = MAP_PRIVATE;
  char* x786277 = mmap(NULL, (x786272->st_size), x786275, x786276, x786268, 0);
  /* VAR */ numeric_int_t x786278 = 0;
  while(1) {
    
    numeric_int_t x754848 = x786278;
    /* VAR */ boolean_t ite782498 = 0;
    if((x754848<(x786262))) {
      char x786284 = *x786277;
      ite782498 = (x786284!=('\0'));
    } else {
      
      ite782498 = 0;
    };
    boolean_t x780686 = ite782498;
    if (!(x780686)) break; 
    
    /* VAR */ numeric_int_t x765979 = 0;
    numeric_int_t x765980 = x765979;
    numeric_int_t* x765981 = &x765980;
    char* x765982 = strntoi_unchecked(x786277, x765981);
    x786277 = x765982;
    /* VAR */ numeric_int_t x765984 = 0;
    numeric_int_t x765985 = x765984;
    numeric_int_t* x765986 = &x765985;
    char* x765987 = strntoi_unchecked(x786277, x765986);
    x786277 = x765987;
    /* VAR */ numeric_int_t x765989 = 0;
    numeric_int_t x765990 = x765989;
    numeric_int_t* x765991 = &x765990;
    char* x765992 = strntoi_unchecked(x786277, x765991);
    x786277 = x765992;
    /* VAR */ numeric_int_t x765994 = 0;
    numeric_int_t x765995 = x765994;
    numeric_int_t* x765996 = &x765995;
    char* x765997 = strntoi_unchecked(x786277, x765996);
    x786277 = x765997;
    /* VAR */ double x765999 = 0.0;
    double x766000 = x765999;
    double* x766001 = &x766000;
    char* x766002 = strntod_unchecked(x786277, x766001);
    x786277 = x766002;
    /* VAR */ double x766004 = 0.0;
    double x766005 = x766004;
    double* x766006 = &x766005;
    char* x766007 = strntod_unchecked(x786277, x766006);
    x786277 = x766007;
    /* VAR */ double x766009 = 0.0;
    double x766010 = x766009;
    double* x766011 = &x766010;
    char* x766012 = strntod_unchecked(x786277, x766011);
    x786277 = x766012;
    /* VAR */ double x766014 = 0.0;
    double x766015 = x766014;
    double* x766016 = &x766015;
    char* x766017 = strntod_unchecked(x786277, x766016);
    x786277 = x766017;
    char x766019 = *x786277;
    /* VAR */ char x766020 = x766019;
    x786277 += 1;
    x786277 += 1;
    char x766024 = *x786277;
    /* VAR */ char x766025 = x766024;
    x786277 += 1;
    x786277 += 1;
    /* VAR */ numeric_int_t x766029 = 0;
    numeric_int_t x766030 = x766029;
    numeric_int_t* x766031 = &x766030;
    char* x766032 = strntoi_unchecked(x786277, x766031);
    x786277 = x766032;
    /* VAR */ numeric_int_t x766034 = 0;
    numeric_int_t x766035 = x766034;
    numeric_int_t* x766036 = &x766035;
    char* x766037 = strntoi_unchecked(x786277, x766036);
    x786277 = x766037;
    /* VAR */ numeric_int_t x766039 = 0;
    numeric_int_t x766040 = x766039;
    numeric_int_t* x766041 = &x766040;
    char* x766042 = strntoi_unchecked(x786277, x766041);
    x786277 = x766042;
    /* VAR */ numeric_int_t x766048 = 0;
    numeric_int_t x766049 = x766048;
    numeric_int_t* x766050 = &x766049;
    char* x766051 = strntoi_unchecked(x786277, x766050);
    x786277 = x766051;
    /* VAR */ numeric_int_t x766053 = 0;
    numeric_int_t x766054 = x766053;
    numeric_int_t* x766055 = &x766054;
    char* x766056 = strntoi_unchecked(x786277, x766055);
    x786277 = x766056;
    /* VAR */ numeric_int_t x766058 = 0;
    numeric_int_t x766059 = x766058;
    numeric_int_t* x766060 = &x766059;
    char* x766061 = strntoi_unchecked(x786277, x766060);
    x786277 = x766061;
    /* VAR */ numeric_int_t x766067 = 0;
    numeric_int_t x766068 = x766067;
    numeric_int_t* x766069 = &x766068;
    char* x766070 = strntoi_unchecked(x786277, x766069);
    x786277 = x766070;
    /* VAR */ numeric_int_t x766072 = 0;
    numeric_int_t x766073 = x766072;
    numeric_int_t* x766074 = &x766073;
    char* x766075 = strntoi_unchecked(x786277, x766074);
    x786277 = x766075;
    /* VAR */ numeric_int_t x766077 = 0;
    numeric_int_t x766078 = x766077;
    numeric_int_t* x766079 = &x766078;
    char* x766080 = strntoi_unchecked(x786277, x766079);
    x786277 = x766080;
    /* VAR */ char* x766086 = x786277;
    while(1) {
      
      char x766087 = *x786277;
      /* VAR */ boolean_t ite782618 = 0;
      if((x766087!=('|'))) {
        char x786403 = *x786277;
        ite782618 = (x786403!=('\n'));
      } else {
        
        ite782618 = 0;
      };
      boolean_t x780799 = ite782618;
      if (!(x780799)) break; 
      
      x786277 += 1;
    };
    char* x766094 = x766086;
    numeric_int_t x766095 = x786277 - x766094;
    numeric_int_t x766096 = x766095+(1);
    char* x790194 = (char*)malloc(x766096 * sizeof(char));
    memset(x790194, 0, x766096 * sizeof(char));
    long x790195 = mallocSym_767345_790011;
    mallocSym_767345_790011 = (x790195+(((long){x766096})));
    char* x766099 = x766086;
    char* x766100 = strncpy(x790194, x766099, x766095);
    x786277 += 1;
    /* VAR */ char* x766102 = x786277;
    while(1) {
      
      char x766103 = *x786277;
      /* VAR */ boolean_t ite782639 = 0;
      if((x766103!=('|'))) {
        char x786423 = *x786277;
        ite782639 = (x786423!=('\n'));
      } else {
        
        ite782639 = 0;
      };
      boolean_t x780813 = ite782639;
      if (!(x780813)) break; 
      
      x786277 += 1;
    };
    char* x766110 = x766102;
    numeric_int_t x766111 = x786277 - x766110;
    numeric_int_t x766112 = x766111+(1);
    char* x790218 = (char*)malloc(x766112 * sizeof(char));
    memset(x790218, 0, x766112 * sizeof(char));
    long x790219 = mallocSym_767361_790019;
    mallocSym_767361_790019 = (x790219+(((long){x766112})));
    char* x766115 = x766102;
    char* x766116 = strncpy(x790218, x766115, x766111);
    x786277 += 1;
    /* VAR */ char* x766118 = x786277;
    while(1) {
      
      char x766119 = *x786277;
      /* VAR */ boolean_t ite782660 = 0;
      if((x766119!=('|'))) {
        char x786443 = *x786277;
        ite782660 = (x786443!=('\n'));
      } else {
        
        ite782660 = 0;
      };
      boolean_t x780827 = ite782660;
      if (!(x780827)) break; 
      
      x786277 += 1;
    };
    char* x766126 = x766118;
    numeric_int_t x766127 = x786277 - x766126;
    numeric_int_t x766128 = x766127+(1);
    char* x790242 = (char*)malloc(x766128 * sizeof(char));
    memset(x790242, 0, x766128 * sizeof(char));
    long x790243 = mallocSym_767377_790020;
    mallocSym_767377_790020 = (x790243+(((long){x766128})));
    char* x766131 = x766118;
    char* x766132 = strncpy(x790242, x766131, x766127);
    x786277 += 1;
    numeric_int_t x764040 = x764010;
    if((x764040>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "L_SHIPINSTRUCT", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "L_SHIPINSTRUCT");
    };
    /* VAR */ numeric_int_t x769325 = -1;
    numeric_int_t x769326 = x769135->len;
    numeric_int_t x777812 = 0;
    for(; x777812 < x769326 ; x777812 += 1) {
      
      char* x777813 = g_array_index(x769135, char*, x777812);
      boolean_t x777814 = strcmp(x777813, x790194);
      boolean_t x777815 = !(x777814);
      if(x777815) {
        x769325 = x777812;
        break;
      };
    };
    numeric_int_t x769336 = x769325;
    boolean_t x764046 = !((x769336!=(-1)));
    if(x764046) {
      numeric_int_t x764047 = x764010;
      x764010 = (x764047+(1));
      void* x769343 = &(x790194);
      GArray* x769344 = g_array_append_vals(x769135, x769343, 1);
    };
    /* VAR */ numeric_int_t x769345 = -1;
    numeric_int_t x769346 = x769135->len;
    numeric_int_t x777839 = 0;
    for(; x777839 < x769346 ; x777839 += 1) {
      
      char* x777840 = g_array_index(x769135, char*, x777839);
      boolean_t x777841 = strcmp(x777840, x790194);
      boolean_t x777842 = !(x777841);
      if(x777842) {
        x769345 = x777839;
        break;
      };
    };
    numeric_int_t x769356 = x769345;
    numeric_int_t x764053 = x764012;
    if((x764053>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "L_SHIPMODE", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "L_SHIPMODE");
    };
    /* VAR */ numeric_int_t x769362 = -1;
    numeric_int_t x769363 = x769138->len;
    numeric_int_t x777863 = 0;
    for(; x777863 < x769363 ; x777863 += 1) {
      
      char* x777864 = g_array_index(x769138, char*, x777863);
      boolean_t x777865 = strcmp(x777864, x790218);
      boolean_t x777866 = !(x777865);
      if(x777866) {
        x769362 = x777863;
        break;
      };
    };
    numeric_int_t x769373 = x769362;
    boolean_t x764059 = !((x769373!=(-1)));
    if(x764059) {
      numeric_int_t x764060 = x764012;
      x764012 = (x764060+(1));
      void* x769380 = &(x790218);
      GArray* x769381 = g_array_append_vals(x769138, x769380, 1);
    };
    /* VAR */ numeric_int_t x769382 = -1;
    numeric_int_t x769383 = x769138->len;
    numeric_int_t x777890 = 0;
    for(; x777890 < x769383 ; x777890 += 1) {
      
      char* x777891 = g_array_index(x769138, char*, x777890);
      boolean_t x777892 = strcmp(x777891, x790218);
      boolean_t x777893 = !(x777892);
      if(x777893) {
        x769382 = x777890;
        break;
      };
    };
    numeric_int_t x769393 = x769382;
    struct LINEITEMRecord* x790348 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x790348, 0, 1 * sizeof(struct LINEITEMRecord));
    long x790349 = mallocSym_768050_790007;
    mallocSym_768050_790007 = (x790349+(((long){1})));
    x790348->L_PARTKEY = x765985; x790348->L_QUANTITY = x766000; x790348->L_EXTENDEDPRICE = x766005; x790348->L_DISCOUNT = x766010; x790348->L_SHIPINSTRUCT = x769356; x790348->L_SHIPMODE = x769393;
    numeric_int_t x754869 = x786278;
    if((x790348==(NULL))) {
      *(x790043 + x754869) = (const struct LINEITEMRecord){0};
    } else {
      
      struct LINEITEMRecord x767412 = *x790348;
      *(x790043 + x754869) = x767412;
      struct LINEITEMRecord* x767414 = &(x790043[x754869]);
      x790348 = x767414;
    };
    numeric_int_t x754871 = x786278;
    x786278 = (x754871+(1));
  };
  FILE* x786569 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ numeric_int_t x786570 = 0;
  numeric_int_t x786571 = x786570;
  numeric_int_t* x786572 = &x786571;
  numeric_int_t x786573 = fscanf(x786569, "%d", x786572);
  pclose(x786569);
  struct PARTRecord* x790372 = (struct PARTRecord*)malloc(x786571 * sizeof(struct PARTRecord));
  memset(x790372, 0, x786571 * sizeof(struct PARTRecord));
  long x790373 = mallocSym_786575_790004;
  mallocSym_786575_790004 = (x790373+(((long){x786571})));
  numeric_int_t x786576 = O_RDONLY;
  numeric_int_t x786577 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x786576);
  /* VAR */ struct stat x786578 = x786269;
  struct stat x786579 = x786578;
  struct stat* x786580 = &x786579;
  numeric_int_t x786581 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x786580);
  numeric_int_t x786583 = PROT_READ;
  numeric_int_t x786584 = MAP_PRIVATE;
  char* x786585 = mmap(NULL, (x786580->st_size), x786583, x786584, x786577, 0);
  /* VAR */ numeric_int_t x786586 = 0;
  while(1) {
    
    numeric_int_t x754879 = x786586;
    /* VAR */ boolean_t ite782810 = 0;
    if((x754879<(x786571))) {
      char x786592 = *x786585;
      ite782810 = (x786592!=('\0'));
    } else {
      
      ite782810 = 0;
    };
    boolean_t x780970 = ite782810;
    if (!(x780970)) break; 
    
    /* VAR */ numeric_int_t x766190 = 0;
    numeric_int_t x766191 = x766190;
    numeric_int_t* x766192 = &x766191;
    char* x766193 = strntoi_unchecked(x786585, x766192);
    x786585 = x766193;
    /* VAR */ char* x766195 = x786585;
    while(1) {
      
      char x766196 = *x786585;
      /* VAR */ boolean_t ite782828 = 0;
      if((x766196!=('|'))) {
        char x786609 = *x786585;
        ite782828 = (x786609!=('\n'));
      } else {
        
        ite782828 = 0;
      };
      boolean_t x780981 = ite782828;
      if (!(x780981)) break; 
      
      x786585 += 1;
    };
    char* x766203 = x766195;
    numeric_int_t x766204 = x786585 - x766203;
    numeric_int_t x766205 = x766204+(1);
    char* x790420 = (char*)malloc(x766205 * sizeof(char));
    memset(x790420, 0, x766205 * sizeof(char));
    long x790421 = mallocSym_767460_790012;
    mallocSym_767460_790012 = (x790421+(((long){x766205})));
    char* x766208 = x766195;
    char* x766209 = strncpy(x790420, x766208, x766204);
    x786585 += 1;
    /* VAR */ char* x766211 = x786585;
    while(1) {
      
      char x766212 = *x786585;
      /* VAR */ boolean_t ite782849 = 0;
      if((x766212!=('|'))) {
        char x786629 = *x786585;
        ite782849 = (x786629!=('\n'));
      } else {
        
        ite782849 = 0;
      };
      boolean_t x780995 = ite782849;
      if (!(x780995)) break; 
      
      x786585 += 1;
    };
    char* x766219 = x766211;
    numeric_int_t x766220 = x786585 - x766219;
    numeric_int_t x766221 = x766220+(1);
    char* x790444 = (char*)malloc(x766221 * sizeof(char));
    memset(x790444, 0, x766221 * sizeof(char));
    long x790445 = mallocSym_767476_790009;
    mallocSym_767476_790009 = (x790445+(((long){x766221})));
    char* x766224 = x766211;
    char* x766225 = strncpy(x790444, x766224, x766220);
    x786585 += 1;
    /* VAR */ char* x766227 = x786585;
    while(1) {
      
      char x766228 = *x786585;
      /* VAR */ boolean_t ite782870 = 0;
      if((x766228!=('|'))) {
        char x786649 = *x786585;
        ite782870 = (x786649!=('\n'));
      } else {
        
        ite782870 = 0;
      };
      boolean_t x781009 = ite782870;
      if (!(x781009)) break; 
      
      x786585 += 1;
    };
    char* x766235 = x766227;
    numeric_int_t x766236 = x786585 - x766235;
    numeric_int_t x766237 = x766236+(1);
    char* x790468 = (char*)malloc(x766237 * sizeof(char));
    memset(x790468, 0, x766237 * sizeof(char));
    long x790469 = mallocSym_767492_790014;
    mallocSym_767492_790014 = (x790469+(((long){x766237})));
    char* x766240 = x766227;
    char* x766241 = strncpy(x790468, x766240, x766236);
    x786585 += 1;
    /* VAR */ char* x766243 = x786585;
    while(1) {
      
      char x766244 = *x786585;
      /* VAR */ boolean_t ite782891 = 0;
      if((x766244!=('|'))) {
        char x786669 = *x786585;
        ite782891 = (x786669!=('\n'));
      } else {
        
        ite782891 = 0;
      };
      boolean_t x781023 = ite782891;
      if (!(x781023)) break; 
      
      x786585 += 1;
    };
    char* x766251 = x766243;
    numeric_int_t x766252 = x786585 - x766251;
    numeric_int_t x766253 = x766252+(1);
    char* x790492 = (char*)malloc(x766253 * sizeof(char));
    memset(x790492, 0, x766253 * sizeof(char));
    long x790493 = mallocSym_767508_790013;
    mallocSym_767508_790013 = (x790493+(((long){x766253})));
    char* x766256 = x766243;
    char* x766257 = strncpy(x790492, x766256, x766252);
    x786585 += 1;
    /* VAR */ numeric_int_t x766259 = 0;
    numeric_int_t x766260 = x766259;
    numeric_int_t* x766261 = &x766260;
    char* x766262 = strntoi_unchecked(x786585, x766261);
    x786585 = x766262;
    /* VAR */ char* x766264 = x786585;
    while(1) {
      
      char x766265 = *x786585;
      /* VAR */ boolean_t ite782917 = 0;
      if((x766265!=('|'))) {
        char x786694 = *x786585;
        ite782917 = (x786694!=('\n'));
      } else {
        
        ite782917 = 0;
      };
      boolean_t x781042 = ite782917;
      if (!(x781042)) break; 
      
      x786585 += 1;
    };
    char* x766272 = x766264;
    numeric_int_t x766273 = x786585 - x766272;
    numeric_int_t x766274 = x766273+(1);
    char* x790521 = (char*)malloc(x766274 * sizeof(char));
    memset(x790521, 0, x766274 * sizeof(char));
    long x790522 = mallocSym_767529_790015;
    mallocSym_767529_790015 = (x790522+(((long){x766274})));
    char* x766277 = x766264;
    char* x766278 = strncpy(x790521, x766277, x766273);
    x786585 += 1;
    /* VAR */ double x766280 = 0.0;
    double x766281 = x766280;
    double* x766282 = &x766281;
    char* x766283 = strntod_unchecked(x786585, x766282);
    x786585 = x766283;
    /* VAR */ char* x766285 = x786585;
    while(1) {
      
      char x766286 = *x786585;
      /* VAR */ boolean_t ite782943 = 0;
      if((x766286!=('|'))) {
        char x786719 = *x786585;
        ite782943 = (x786719!=('\n'));
      } else {
        
        ite782943 = 0;
      };
      boolean_t x781061 = ite782943;
      if (!(x781061)) break; 
      
      x786585 += 1;
    };
    char* x766293 = x766285;
    numeric_int_t x766294 = x786585 - x766293;
    numeric_int_t x766295 = x766294+(1);
    char* x790550 = (char*)malloc(x766295 * sizeof(char));
    memset(x790550, 0, x766295 * sizeof(char));
    long x790551 = mallocSym_767550_790016;
    mallocSym_767550_790016 = (x790551+(((long){x766295})));
    char* x766298 = x766285;
    char* x766299 = strncpy(x790550, x766298, x766294);
    x786585 += 1;
    numeric_int_t x764090 = x764006;
    if((x764090>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "P_BRAND", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "P_BRAND");
    };
    /* VAR */ numeric_int_t x769548 = -1;
    numeric_int_t x769549 = x769129->len;
    numeric_int_t x778057 = 0;
    for(; x778057 < x769549 ; x778057 += 1) {
      
      char* x778058 = g_array_index(x769129, char*, x778057);
      boolean_t x778059 = strcmp(x778058, x790468);
      boolean_t x778060 = !(x778059);
      if(x778060) {
        x769548 = x778057;
        break;
      };
    };
    numeric_int_t x769559 = x769548;
    boolean_t x764096 = !((x769559!=(-1)));
    if(x764096) {
      numeric_int_t x764097 = x764006;
      x764006 = (x764097+(1));
      void* x769566 = &(x790468);
      GArray* x769567 = g_array_append_vals(x769129, x769566, 1);
    };
    /* VAR */ numeric_int_t x769568 = -1;
    numeric_int_t x769569 = x769129->len;
    numeric_int_t x778084 = 0;
    for(; x778084 < x769569 ; x778084 += 1) {
      
      char* x778085 = g_array_index(x769129, char*, x778084);
      boolean_t x778086 = strcmp(x778085, x790468);
      boolean_t x778087 = !(x778086);
      if(x778087) {
        x769568 = x778084;
        break;
      };
    };
    numeric_int_t x769579 = x769568;
    numeric_int_t x764103 = x764008;
    if((x764103>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "P_CONTAINER", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "P_CONTAINER");
    };
    /* VAR */ numeric_int_t x769585 = -1;
    numeric_int_t x769586 = x769132->len;
    numeric_int_t x778108 = 0;
    for(; x778108 < x769586 ; x778108 += 1) {
      
      char* x778109 = g_array_index(x769132, char*, x778108);
      boolean_t x778110 = strcmp(x778109, x790521);
      boolean_t x778111 = !(x778110);
      if(x778111) {
        x769585 = x778108;
        break;
      };
    };
    numeric_int_t x769596 = x769585;
    boolean_t x764109 = !((x769596!=(-1)));
    if(x764109) {
      numeric_int_t x764110 = x764008;
      x764008 = (x764110+(1));
      void* x769603 = &(x790521);
      GArray* x769604 = g_array_append_vals(x769132, x769603, 1);
    };
    /* VAR */ numeric_int_t x769605 = -1;
    numeric_int_t x769606 = x769132->len;
    numeric_int_t x778135 = 0;
    for(; x778135 < x769606 ; x778135 += 1) {
      
      char* x778136 = g_array_index(x769132, char*, x778135);
      boolean_t x778137 = strcmp(x778136, x790521);
      boolean_t x778138 = !(x778137);
      if(x778138) {
        x769605 = x778135;
        break;
      };
    };
    numeric_int_t x769616 = x769605;
    struct PARTRecord* x790656 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x790656, 0, 1 * sizeof(struct PARTRecord));
    long x790657 = mallocSym_768225_790024;
    mallocSym_768225_790024 = (x790657+(((long){1})));
    x790656->P_PARTKEY = x766191; x790656->P_BRAND = x769579; x790656->P_SIZE = x766260; x790656->P_CONTAINER = x769616;
    numeric_int_t x754893 = x786586;
    if((x790656==(NULL))) {
      *(x790372 + x754893) = (const struct PARTRecord){0};
    } else {
      
      struct PARTRecord x767585 = *x790656;
      *(x790372 + x754893) = x767585;
      struct PARTRecord* x767587 = &(x790372[x754893]);
      x790656 = x767587;
    };
    numeric_int_t x754895 = x786586;
    x786586 = (x754895+(1));
  };
  numeric_int_t x754900 = 0;
  for(; x754900 < 1 ; x754900 += 1) {
    
    double* x791335 = (double*)malloc(1 * sizeof(double));
    memset(x791335, 0, 1 * sizeof(double));
    long x791336 = mallocSym_787487_790008;
    mallocSym_787487_790008 = (x791336+(((long){1})));
    struct LINEITEMRecord** x791340 = (struct LINEITEMRecord**)malloc(1600000 * sizeof(struct LINEITEMRecord*));
    memset(x791340, 0, 1600000 * sizeof(struct LINEITEMRecord*));
    long x791341 = mallocSym_787488_790010;
    long x791342 = (long){1600000};
    mallocSym_787488_790010 = (x791341+(x791342));
    numeric_int_t* x791345 = (numeric_int_t*)malloc(1600000 * sizeof(numeric_int_t));
    memset(x791345, 0, 1600000 * sizeof(numeric_int_t));
    long x791346 = mallocSym_787489_790005;
    mallocSym_787489_790005 = (x791346+(x791342));
    numeric_int_t x778166 = 0;
    for(; x778166 < 1600000 ; x778166 += 1) {
      
      *(x791345 + x778166) = 0;
    };
    /* VAR */ numeric_int_t x787495 = 0;
    numeric_int_t x778181 = 0;
    for(; x778181 < x786262 ; x778181 += 1) {
      
      struct LINEITEMRecord* x778182 = &(x790043[x778181]);
      numeric_int_t x778184 = (x778182->L_PARTKEY)%(1600000);
      numeric_int_t x778185 = x791345[x778184];
      *(x791345 + x778184) = (x778185+(1));
      numeric_int_t x778188 = x787495;
      x787495 = (x778188+(1));
    };
    numeric_int_t x778198 = 0;
    for(; x778198 < 1600000 ; x778198 += 1) {
      
      numeric_int_t x778199 = x791345[x778198];
      struct LINEITEMRecord* x791388 = (struct LINEITEMRecord*)malloc(x778199 * sizeof(struct LINEITEMRecord));
      memset(x791388, 0, x778199 * sizeof(struct LINEITEMRecord));
      long x791389 = mallocSym_778200_790006;
      mallocSym_778200_790006 = (x791389+(((long){x778199})));
      *(x791340 + x778198) = x791388;
      *(x791345 + x778198) = 0;
    };
    x787495 = 0;
    numeric_int_t x778225 = 0;
    for(; x778225 < x786262 ; x778225 += 1) {
      
      struct LINEITEMRecord* x778226 = &(x790043[x778225]);
      numeric_int_t x778228 = (x778226->L_PARTKEY)%(1600000);
      numeric_int_t x778229 = x791345[x778228];
      struct LINEITEMRecord* x778230 = x791340[x778228];
      if((x778226==(NULL))) {
        *(x778230 + x778229) = (const struct LINEITEMRecord){0};
      } else {
        
        struct LINEITEMRecord x767637 = *x778226;
        *(x778230 + x778229) = x767637;
        struct LINEITEMRecord* x767639 = &(x778230[x778229]);
        x778226 = x767639;
      };
      numeric_int_t x778238 = x791345[x778228];
      *(x791345 + x778228) = (x778238+(1));
      numeric_int_t x778241 = x787495;
      x787495 = (x778241+(1));
    };
    struct timeval x787568 = (struct timeval){0};
    /* VAR */ struct timeval x787569 = x787568;
    struct timeval x787570 = x787569;
    /* VAR */ struct timeval x787571 = x787568;
    struct timeval x787572 = x787571;
    /* VAR */ struct timeval x787573 = x787568;
    struct timeval x787574 = x787573;
    struct timeval* x787575 = &x787572;
    gettimeofday(x787575, NULL);
    /* VAR */ numeric_int_t x787577 = -1;
    numeric_int_t x787578 = x769129->len;
    numeric_int_t x778264 = 0;
    for(; x778264 < x787578 ; x778264 += 1) {
      
      char* x778265 = g_array_index(x769129, char*, x778264);
      boolean_t x778266 = strcmp(x778265, "Brand#31");
      boolean_t x778267 = !(x778266);
      if(x778267) {
        x787577 = x778264;
        break;
      };
    };
    numeric_int_t x787594 = x787577;
    /* VAR */ numeric_int_t x787595 = -1;
    numeric_int_t x787596 = x769129->len;
    numeric_int_t x778283 = 0;
    for(; x778283 < x787596 ; x778283 += 1) {
      
      char* x778284 = g_array_index(x769129, char*, x778283);
      boolean_t x778285 = strcmp(x778284, "Brand#43");
      boolean_t x778286 = !(x778285);
      if(x778286) {
        x787595 = x778283;
        break;
      };
    };
    numeric_int_t x787612 = x787595;
    /* VAR */ numeric_int_t x787613 = -1;
    numeric_int_t x787614 = x769132->len;
    numeric_int_t x778302 = 0;
    for(; x778302 < x787614 ; x778302 += 1) {
      
      char* x778303 = g_array_index(x769132, char*, x778302);
      boolean_t x778304 = strcmp(x778303, "SM BOX");
      boolean_t x778305 = !(x778304);
      if(x778305) {
        x787613 = x778302;
        break;
      };
    };
    numeric_int_t x787630 = x787613;
    /* VAR */ numeric_int_t x787631 = -1;
    numeric_int_t x787632 = x769132->len;
    numeric_int_t x778321 = 0;
    for(; x778321 < x787632 ; x778321 += 1) {
      
      char* x778322 = g_array_index(x769132, char*, x778321);
      boolean_t x778323 = strcmp(x778322, "SM CASE");
      boolean_t x778324 = !(x778323);
      if(x778324) {
        x787631 = x778321;
        break;
      };
    };
    numeric_int_t x787648 = x787631;
    /* VAR */ numeric_int_t x787649 = -1;
    numeric_int_t x787650 = x769132->len;
    numeric_int_t x778340 = 0;
    for(; x778340 < x787650 ; x778340 += 1) {
      
      char* x778341 = g_array_index(x769132, char*, x778340);
      boolean_t x778342 = strcmp(x778341, "SM PACK");
      boolean_t x778343 = !(x778342);
      if(x778343) {
        x787649 = x778340;
        break;
      };
    };
    numeric_int_t x787666 = x787649;
    /* VAR */ numeric_int_t x787667 = -1;
    numeric_int_t x787668 = x769132->len;
    numeric_int_t x778359 = 0;
    for(; x778359 < x787668 ; x778359 += 1) {
      
      char* x778360 = g_array_index(x769132, char*, x778359);
      boolean_t x778361 = strcmp(x778360, "SM PKG");
      boolean_t x778362 = !(x778361);
      if(x778362) {
        x787667 = x778359;
        break;
      };
    };
    numeric_int_t x787684 = x787667;
    /* VAR */ numeric_int_t x787685 = -1;
    numeric_int_t x787686 = x769132->len;
    numeric_int_t x778378 = 0;
    for(; x778378 < x787686 ; x778378 += 1) {
      
      char* x778379 = g_array_index(x769132, char*, x778378);
      boolean_t x778380 = strcmp(x778379, "MED BAG");
      boolean_t x778381 = !(x778380);
      if(x778381) {
        x787685 = x778378;
        break;
      };
    };
    numeric_int_t x787702 = x787685;
    /* VAR */ numeric_int_t x787703 = -1;
    numeric_int_t x787704 = x769132->len;
    numeric_int_t x778397 = 0;
    for(; x778397 < x787704 ; x778397 += 1) {
      
      char* x778398 = g_array_index(x769132, char*, x778397);
      boolean_t x778399 = strcmp(x778398, "MED BOX");
      boolean_t x778400 = !(x778399);
      if(x778400) {
        x787703 = x778397;
        break;
      };
    };
    numeric_int_t x787720 = x787703;
    /* VAR */ numeric_int_t x787721 = -1;
    numeric_int_t x787722 = x769132->len;
    numeric_int_t x778416 = 0;
    for(; x778416 < x787722 ; x778416 += 1) {
      
      char* x778417 = g_array_index(x769132, char*, x778416);
      boolean_t x778418 = strcmp(x778417, "MED PACK");
      boolean_t x778419 = !(x778418);
      if(x778419) {
        x787721 = x778416;
        break;
      };
    };
    numeric_int_t x787738 = x787721;
    /* VAR */ numeric_int_t x787739 = -1;
    numeric_int_t x787740 = x769132->len;
    numeric_int_t x778435 = 0;
    for(; x778435 < x787740 ; x778435 += 1) {
      
      char* x778436 = g_array_index(x769132, char*, x778435);
      boolean_t x778437 = strcmp(x778436, "MED PKG");
      boolean_t x778438 = !(x778437);
      if(x778438) {
        x787739 = x778435;
        break;
      };
    };
    numeric_int_t x787756 = x787739;
    /* VAR */ numeric_int_t x787757 = -1;
    numeric_int_t x787758 = x769132->len;
    numeric_int_t x778454 = 0;
    for(; x778454 < x787758 ; x778454 += 1) {
      
      char* x778455 = g_array_index(x769132, char*, x778454);
      boolean_t x778456 = strcmp(x778455, "LG BOX");
      boolean_t x778457 = !(x778456);
      if(x778457) {
        x787757 = x778454;
        break;
      };
    };
    numeric_int_t x787774 = x787757;
    /* VAR */ numeric_int_t x787775 = -1;
    numeric_int_t x787776 = x769132->len;
    numeric_int_t x778473 = 0;
    for(; x778473 < x787776 ; x778473 += 1) {
      
      char* x778474 = g_array_index(x769132, char*, x778473);
      boolean_t x778475 = strcmp(x778474, "LG CASE");
      boolean_t x778476 = !(x778475);
      if(x778476) {
        x787775 = x778473;
        break;
      };
    };
    numeric_int_t x787792 = x787775;
    /* VAR */ numeric_int_t x787793 = -1;
    numeric_int_t x787794 = x769132->len;
    numeric_int_t x778492 = 0;
    for(; x778492 < x787794 ; x778492 += 1) {
      
      char* x778493 = g_array_index(x769132, char*, x778492);
      boolean_t x778494 = strcmp(x778493, "LG PACK");
      boolean_t x778495 = !(x778494);
      if(x778495) {
        x787793 = x778492;
        break;
      };
    };
    numeric_int_t x787810 = x787793;
    /* VAR */ numeric_int_t x787811 = -1;
    numeric_int_t x787812 = x769132->len;
    numeric_int_t x778511 = 0;
    for(; x778511 < x787812 ; x778511 += 1) {
      
      char* x778512 = g_array_index(x769132, char*, x778511);
      boolean_t x778513 = strcmp(x778512, "LG PKG");
      boolean_t x778514 = !(x778513);
      if(x778514) {
        x787811 = x778511;
        break;
      };
    };
    numeric_int_t x787828 = x787811;
    /* VAR */ numeric_int_t x787829 = -1;
    numeric_int_t x787830 = x769135->len;
    numeric_int_t x778530 = 0;
    for(; x778530 < x787830 ; x778530 += 1) {
      
      char* x778531 = g_array_index(x769135, char*, x778530);
      boolean_t x778532 = strcmp(x778531, "DELIVER IN PERSON");
      boolean_t x778533 = !(x778532);
      if(x778533) {
        x787829 = x778530;
        break;
      };
    };
    numeric_int_t x787846 = x787829;
    /* VAR */ numeric_int_t x787847 = -1;
    numeric_int_t x787848 = x769138->len;
    numeric_int_t x778549 = 0;
    for(; x778549 < x787848 ; x778549 += 1) {
      
      char* x778550 = g_array_index(x769138, char*, x778549);
      boolean_t x778551 = strcmp(x778550, "AIR");
      boolean_t x778552 = !(x778551);
      if(x778552) {
        x787847 = x778549;
        break;
      };
    };
    numeric_int_t x787864 = x787847;
    /* VAR */ numeric_int_t x787865 = -1;
    numeric_int_t x787866 = x769138->len;
    numeric_int_t x778568 = 0;
    for(; x778568 < x787866 ; x778568 += 1) {
      
      char* x778569 = g_array_index(x769138, char*, x778568);
      boolean_t x778570 = strcmp(x778569, "AIRREG");
      boolean_t x778571 = !(x778570);
      if(x778571) {
        x787865 = x778568;
        break;
      };
    };
    numeric_int_t x787882 = x787865;
    /* VAR */ numeric_int_t x787883 = 0;
    while(1) {
      
      numeric_int_t x787885 = x787883;
      if (!((x787885<(x786571)))) break; 
      
      numeric_int_t x757013 = x787883;
      struct PARTRecord* x755145 = &(x790372[x757013]);
      numeric_int_t x755147 = x755145->P_SIZE;
      numeric_int_t x782231 = x755145->P_CONTAINER;
      numeric_int_t x782245 = x755145->P_CONTAINER;
      numeric_int_t x782259 = x755145->P_CONTAINER;
      if(((((x755147>=(1))&((((x755147<=(5))&(((x755145->P_BRAND)==(x787594))))&(((((x782231==(x787630))|((x782231==(x787648))))|((x782231==(x787666))))|((x782231==(x787684))))))))|((((x755147<=(10))&(((x755145->P_BRAND)==(x787612))))&(((((x782245==(x787702))|((x782245==(x787720))))|((x782245==(x787738))))|((x782245==(x787756))))))))|((((x755147<=(15))&(((x755145->P_BRAND)==(x787612))))&(((((x782259==(x787774))|((x782259==(x787792))))|((x782259==(x787810))))|((x782259==(x787828))))))))) {
        numeric_int_t x755191 = x755145->P_PARTKEY;
        numeric_int_t x763629 = x755191%(1600000);
        numeric_int_t x763630 = x791345[x763629];
        struct LINEITEMRecord* x763631 = x791340[x763629];
        numeric_int_t x778721 = 0;
        for(; x778721 < x763630 ; x778721 += 1) {
          
          struct LINEITEMRecord* x778722 = &(x763631[x778721]);
          double x778723 = x778722->L_QUANTITY;
          numeric_int_t x782379 = x778722->L_SHIPMODE;
          if(((((((x778723<=(36.0))&((x778723>=(26.0))))|(((x778723<=(25.0))&((x778723>=(15.0))))))|(((x778723<=(14.0))&((x778723>=(4.0))))))&(((x778722->L_SHIPINSTRUCT)==(x787846))))&(((x782379==(x787864))|((x782379==(x787882))))))) {
            if(((x778722->L_PARTKEY)==(x755191))) {
              if((x755191==((x778722->L_PARTKEY)))) {
                double x755932 = x778722->L_QUANTITY;
                numeric_int_t x764297 = x755145->P_BRAND;
                numeric_int_t x764298 = x755145->P_CONTAINER;
                if((((((((x764297==(x787594))&(((((x764298==(x787630))|((x764298==(x787648))))|((x764298==(x787666))))|((x764298==(x787684))))))&((x755932>=(4.0))))&((x755932<=(14.0))))&((x755147<=(5))))|((((((x764297==(x787612))&(((((x764298==(x787702))|((x764298==(x787720))))|((x764298==(x787738))))|((x764298==(x787756))))))&((x755932>=(15.0))))&((x755932<=(25.0))))&((x755147<=(10))))))|((((((x764297==(x787612))&(((((x764298==(x787774))|((x764298==(x787792))))|((x764298==(x787810))))|((x764298==(x787828))))))&((x755932>=(26.0))))&((x755932<=(36.0))))&((x755147<=(15))))))) {
                  double x755389 = x791335[0];
                  *x791335 = (x755389+(((x778722->L_EXTENDEDPRICE)*((1.0-((x778722->L_DISCOUNT)))))));
                };
              };
            };
          };
        };
      };
      numeric_int_t x757286 = x787883;
      x787883 = (x757286+(1));
    };
    double x788116 = x791335[0];
    printf("%.4f\n", x788116);
    printf("(%d rows)\n", 1);
    struct timeval* x788119 = &x787574;
    gettimeofday(x788119, NULL);
    struct timeval* x788121 = &x787570;
    struct timeval* x788122 = &x787574;
    struct timeval* x788123 = &x787572;
    long x788124 = timeval_subtract(x788121, x788122, x788123);
    printf("Generated code run in %ld milliseconds.\n", x788124);
  };
  /* VAR */ long mallocSum791993 = 0L;
  long x791994 = mallocSym_786575_790004;
  numeric_int_t x791995 = sizeof(struct PARTRecord);
  long x791997 = x791994*(((long){x791995}));
  printf("790372 with type PARTRecord: %ld\n", x791997);
  long x791999 = mallocSum791993;
  mallocSum791993 = (x791999+(x791997));
  long x792002 = mallocSym_787489_790005;
  numeric_int_t x792003 = sizeof(numeric_int_t);
  long x792005 = x792002*(((long){x792003}));
  printf("791345 with type Int: %ld\n", x792005);
  long x792007 = mallocSum791993;
  mallocSum791993 = (x792007+(x792005));
  long x792010 = mallocSym_778200_790006;
  numeric_int_t x792011 = sizeof(struct LINEITEMRecord);
  long x792013 = x792010*(((long){x792011}));
  printf("791388 with type LINEITEMRecord: %ld\n", x792013);
  long x792015 = mallocSum791993;
  mallocSum791993 = (x792015+(x792013));
  long x792018 = mallocSym_768050_790007;
  numeric_int_t x792019 = sizeof(struct LINEITEMRecord);
  long x792021 = x792018*(((long){x792019}));
  printf("790348 with type LINEITEMRecord: %ld\n", x792021);
  long x792023 = mallocSum791993;
  mallocSum791993 = (x792023+(x792021));
  long x792026 = mallocSym_787487_790008;
  numeric_int_t x792027 = sizeof(double);
  long x792029 = x792026*(((long){x792027}));
  printf("791335 with type Double: %ld\n", x792029);
  long x792031 = mallocSum791993;
  mallocSum791993 = (x792031+(x792029));
  long x792034 = mallocSym_767476_790009;
  numeric_int_t x792035 = sizeof(char);
  long x792037 = x792034*(((long){x792035}));
  printf("790444 with type Byte: %ld\n", x792037);
  long x792039 = mallocSum791993;
  mallocSum791993 = (x792039+(x792037));
  long x792042 = mallocSym_787488_790010;
  numeric_int_t x792043 = sizeof(struct LINEITEMRecord*);
  long x792045 = x792042*(((long){x792043}));
  printf("791340 with type Pointer[LINEITEMRecord]: %ld\n", x792045);
  long x792047 = mallocSum791993;
  mallocSum791993 = (x792047+(x792045));
  long x792050 = mallocSym_767345_790011;
  numeric_int_t x792051 = sizeof(char);
  long x792053 = x792050*(((long){x792051}));
  printf("790194 with type Byte: %ld\n", x792053);
  long x792055 = mallocSum791993;
  mallocSum791993 = (x792055+(x792053));
  long x792058 = mallocSym_767460_790012;
  numeric_int_t x792059 = sizeof(char);
  long x792061 = x792058*(((long){x792059}));
  printf("790420 with type Byte: %ld\n", x792061);
  long x792063 = mallocSum791993;
  mallocSum791993 = (x792063+(x792061));
  long x792066 = mallocSym_767508_790013;
  numeric_int_t x792067 = sizeof(char);
  long x792069 = x792066*(((long){x792067}));
  printf("790492 with type Byte: %ld\n", x792069);
  long x792071 = mallocSum791993;
  mallocSum791993 = (x792071+(x792069));
  long x792074 = mallocSym_767492_790014;
  numeric_int_t x792075 = sizeof(char);
  long x792077 = x792074*(((long){x792075}));
  printf("790468 with type Byte: %ld\n", x792077);
  long x792079 = mallocSum791993;
  mallocSum791993 = (x792079+(x792077));
  long x792082 = mallocSym_767529_790015;
  numeric_int_t x792083 = sizeof(char);
  long x792085 = x792082*(((long){x792083}));
  printf("790521 with type Byte: %ld\n", x792085);
  long x792087 = mallocSum791993;
  mallocSum791993 = (x792087+(x792085));
  long x792090 = mallocSym_767550_790016;
  numeric_int_t x792091 = sizeof(char);
  long x792093 = x792090*(((long){x792091}));
  printf("790550 with type Byte: %ld\n", x792093);
  long x792095 = mallocSum791993;
  mallocSum791993 = (x792095+(x792093));
  long x792098 = mallocSym_767622_790017;
  numeric_int_t x792099 = sizeof(struct LINEITEMRecord);
  long x792101 = x792098*(((long){x792099}));
  printf("791379 with type LINEITEMRecord: %ld\n", x792101);
  long x792103 = mallocSum791993;
  mallocSum791993 = (x792103+(x792101));
  long x792106 = mallocSym_786266_790018;
  numeric_int_t x792107 = sizeof(struct LINEITEMRecord);
  long x792109 = x792106*(((long){x792107}));
  printf("790043 with type LINEITEMRecord: %ld\n", x792109);
  long x792111 = mallocSum791993;
  mallocSum791993 = (x792111+(x792109));
  long x792114 = mallocSym_767361_790019;
  numeric_int_t x792115 = sizeof(char);
  long x792117 = x792114*(((long){x792115}));
  printf("790218 with type Byte: %ld\n", x792117);
  long x792119 = mallocSum791993;
  mallocSum791993 = (x792119+(x792117));
  long x792122 = mallocSym_767377_790020;
  numeric_int_t x792123 = sizeof(char);
  long x792125 = x792122*(((long){x792123}));
  printf("790242 with type Byte: %ld\n", x792125);
  long x792127 = mallocSum791993;
  mallocSum791993 = (x792127+(x792125));
  long x792130 = mallocSym_767598_790021;
  numeric_int_t x792131 = sizeof(numeric_int_t);
  long x792133 = x792130*(((long){x792131}));
  printf("790686 with type Int: %ld\n", x792133);
  long x792135 = mallocSum791993;
  mallocSum791993 = (x792135+(x792133));
  long x792138 = mallocSym_767597_790022;
  numeric_int_t x792139 = sizeof(struct LINEITEMRecord*);
  long x792141 = x792138*(((long){x792139}));
  printf("790681 with type Pointer[LINEITEMRecord]: %ld\n", x792141);
  long x792143 = mallocSum791993;
  mallocSum791993 = (x792143+(x792141));
  long x792146 = mallocSym_767596_790023;
  numeric_int_t x792147 = sizeof(double);
  long x792149 = x792146*(((long){x792147}));
  printf("790676 with type Double: %ld\n", x792149);
  long x792151 = mallocSum791993;
  mallocSum791993 = (x792151+(x792149));
  long x792154 = mallocSym_768225_790024;
  numeric_int_t x792155 = sizeof(struct PARTRecord);
  long x792157 = x792154*(((long){x792155}));
  printf("790656 with type PARTRecord: %ld\n", x792157);
  long x792159 = mallocSum791993;
  mallocSum791993 = (x792159+(x792157));
  long x792162 = mallocSum791993;
  printf("total: %ld\n", x792162);
}
/* ----------- FUNCTIONS ----------- */