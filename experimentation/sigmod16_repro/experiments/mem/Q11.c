#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord;
struct AGGRecord_String;
struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord;
struct WindowRecord_Int_Double;
struct NATIONRecord;
struct SUPPLIERRecord;
struct PARTSUPPRecord;
struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord {
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
  numeric_int_t S_SUPPKEY;
  numeric_int_t S_NATIONKEY;
  numeric_int_t PS_PARTKEY;
  numeric_int_t PS_SUPPKEY;
  numeric_int_t PS_AVAILQTY;
  double PS_SUPPLYCOST;
};

struct AGGRecord_String {
  char* key;
  double* aggs;
};

struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord {
  numeric_int_t maxSize;
  struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* array;
};

struct WindowRecord_Int_Double {
  numeric_int_t key;
  double wnd;
};

struct NATIONRecord {
  numeric_int_t N_NATIONKEY;
  char* N_NAME;
};

struct SUPPLIERRecord {
  numeric_int_t S_SUPPKEY;
  numeric_int_t S_NATIONKEY;
};

struct PARTSUPPRecord {
  numeric_int_t PS_PARTKEY;
  numeric_int_t PS_SUPPKEY;
  numeric_int_t PS_AVAILQTY;
  double PS_SUPPLYCOST;
};


numeric_int_t x523987(struct WindowRecord_Int_Double* x493021, struct WindowRecord_Int_Double* x493022);

numeric_int_t x507575(void* x507569, void* x507570, void* x507571);

int main(int argc, char** argv) {
  /* VAR */ long mallocSym_505839_525564 = 0L;
  /* VAR */ long mallocSym_506045_525565 = 0L;
  /* VAR */ long mallocSym_506106_525566 = 0L;
  /* VAR */ long mallocSym_505479_525567 = 0L;
  /* VAR */ long mallocSym_505519_525568 = 0L;
  /* VAR */ long mallocSym_523479_525569 = 0L;
  /* VAR */ long mallocSym_523583_525570 = 0L;
  /* VAR */ long mallocSym_505450_525571 = 0L;
  /* VAR */ long mallocSym_505454_525572 = 0L;
  /* VAR */ long mallocSym_505433_525573 = 0L;
  /* VAR */ long mallocSym_513562_525574 = 0L;
  /* VAR */ long mallocSym_505525_525575 = 0L;
  /* VAR */ long mallocSym_505453_525576 = 0L;
  /* VAR */ long mallocSym_505504_525577 = 0L;
  /* VAR */ long mallocSym_523477_525578 = 0L;
  /* VAR */ long mallocSym_505531_525579 = 0L;
  /* VAR */ long mallocSym_506030_525580 = 0L;
  /* VAR */ long mallocSym_505378_525581 = 0L;
  /* VAR */ long mallocSym_506136_525582 = 0L;
  /* VAR */ long mallocSym_523473_525583 = 0L;
  /* VAR */ long mallocSym_523478_525584 = 0L;
  /* VAR */ long mallocSym_523474_525585 = 0L;
  /* VAR */ long mallocSym_505452_525586 = 0L;
  /* VAR */ long mallocSym_505316_525587 = 0L;
  /* VAR */ long mallocSym_523571_525588 = 0L;
  /* VAR */ long mallocSym_505300_525589 = 0L;
  /* VAR */ long mallocSym_505246_525590 = 0L;
  /* VAR */ long mallocSym_505547_525591 = 0L;
  /* VAR */ long mallocSym_505953_525592 = 0L;
  /* VAR */ long mallocSym_505337_525593 = 0L;
  /* VAR */ long mallocSym_506153_525594 = 0L;
  /* VAR */ long mallocSym_505196_525595 = 0L;
  /* VAR */ long mallocSym_523480_525596 = 0L;
  /* VAR */ long mallocSym_523554_525597 = 0L;
  /* VAR */ long mallocSym_505358_525598 = 0L;
  /* VAR */ long mallocSym_505266_525599 = 0L;
  /* VAR */ long mallocSym_505412_525600 = 0L;
  /* VAR */ long mallocSym_523601_525601 = 0L;
  /* VAR */ long mallocSym_505455_525602 = 0L;
  FILE* x504074 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ numeric_int_t x504075 = 0;
  numeric_int_t x504076 = x504075;
  numeric_int_t* x504077 = &x504076;
  numeric_int_t x504078 = fscanf(x504074, "%d", x504077);
  pclose(x504074);
  struct PARTSUPPRecord* x525609 = (struct PARTSUPPRecord*)malloc(x504076 * sizeof(struct PARTSUPPRecord));
  memset(x525609, 0, x504076 * sizeof(struct PARTSUPPRecord));
  long x525610 = mallocSym_505196_525595;
  mallocSym_505196_525595 = (x525610+(((long){x504076})));
  numeric_int_t x504082 = O_RDONLY;
  numeric_int_t x504083 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x504082);
  struct stat x504084 = (struct stat){0};
  /* VAR */ struct stat x504085 = x504084;
  struct stat x504086 = x504085;
  struct stat* x504087 = &x504086;
  numeric_int_t x504088 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x504087);
  numeric_int_t x504090 = PROT_READ;
  numeric_int_t x504091 = MAP_PRIVATE;
  char* x492718 = mmap(NULL, (x504087->st_size), x504090, x504091, x504083, 0);
  /* VAR */ numeric_int_t x492719 = 0;
  while(1) {
    
    numeric_int_t x492720 = x492719;
    /* VAR */ boolean_t ite516609 = 0;
    if((x492720<(x504076))) {
      char x522594 = *x492718;
      ite516609 = (x522594!=('\0'));
    } else {
      
      ite516609 = 0;
    };
    boolean_t x515365 = ite516609;
    if (!(x515365)) break; 
    
    /* VAR */ numeric_int_t x504099 = 0;
    numeric_int_t x504100 = x504099;
    numeric_int_t* x504101 = &x504100;
    char* x504102 = strntoi_unchecked(x492718, x504101);
    x492718 = x504102;
    /* VAR */ numeric_int_t x504104 = 0;
    numeric_int_t x504105 = x504104;
    numeric_int_t* x504106 = &x504105;
    char* x504107 = strntoi_unchecked(x492718, x504106);
    x492718 = x504107;
    /* VAR */ numeric_int_t x504109 = 0;
    numeric_int_t x504110 = x504109;
    numeric_int_t* x504111 = &x504110;
    char* x504112 = strntoi_unchecked(x492718, x504111);
    x492718 = x504112;
    /* VAR */ double x504114 = 0.0;
    double x504115 = x504114;
    double* x504116 = &x504115;
    char* x504117 = strntod_unchecked(x492718, x504116);
    x492718 = x504117;
    /* VAR */ char* x504119 = x492718;
    while(1) {
      
      char x504120 = *x492718;
      /* VAR */ boolean_t ite516642 = 0;
      if((x504120!=('|'))) {
        char x522626 = *x492718;
        ite516642 = (x522626!=('\n'));
      } else {
        
        ite516642 = 0;
      };
      boolean_t x515391 = ite516642;
      if (!(x515391)) break; 
      
      x492718 += 1;
    };
    char* x504127 = x504119;
    numeric_int_t x504128 = x492718 - x504127;
    numeric_int_t x504129 = x504128+(1);
    char* x525673 = (char*)malloc(x504129 * sizeof(char));
    memset(x525673, 0, x504129 * sizeof(char));
    long x525674 = mallocSym_505246_525590;
    mallocSym_505246_525590 = (x525674+(((long){x504129})));
    char* x504132 = x504119;
    char* x504133 = strncpy(x525673, x504132, x504128);
    x492718 += 1;
    struct PARTSUPPRecord* x525681 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x525681, 0, 1 * sizeof(struct PARTSUPPRecord));
    long x525682 = mallocSym_505839_525564;
    mallocSym_505839_525564 = (x525682+(((long){1})));
    x525681->PS_PARTKEY = x504100; x525681->PS_SUPPKEY = x504105; x525681->PS_AVAILQTY = x504110; x525681->PS_SUPPLYCOST = x504115;
    numeric_int_t x492730 = x492719;
    struct PARTSUPPRecord x505253 = *x525681;
    *(x525609 + x492730) = x505253;
    struct PARTSUPPRecord* x505255 = &(x525609[x492730]);
    x525681 = x505255;
    numeric_int_t x492732 = x492719;
    x492719 = (x492732+(1));
  };
  FILE* x504141 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ numeric_int_t x504142 = 0;
  numeric_int_t x504143 = x504142;
  numeric_int_t* x504144 = &x504143;
  numeric_int_t x504145 = fscanf(x504141, "%d", x504144);
  pclose(x504141);
  struct SUPPLIERRecord* x525702 = (struct SUPPLIERRecord*)malloc(x504143 * sizeof(struct SUPPLIERRecord));
  memset(x525702, 0, x504143 * sizeof(struct SUPPLIERRecord));
  long x525703 = mallocSym_505266_525599;
  mallocSym_505266_525599 = (x525703+(((long){x504143})));
  numeric_int_t x504149 = O_RDONLY;
  numeric_int_t x504150 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x504149);
  /* VAR */ struct stat x504151 = x504084;
  struct stat x504152 = x504151;
  struct stat* x504153 = &x504152;
  numeric_int_t x504154 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x504153);
  numeric_int_t x504156 = PROT_READ;
  numeric_int_t x504157 = MAP_PRIVATE;
  char* x492738 = mmap(NULL, (x504153->st_size), x504156, x504157, x504150, 0);
  /* VAR */ numeric_int_t x492739 = 0;
  while(1) {
    
    numeric_int_t x492740 = x492739;
    /* VAR */ boolean_t ite516691 = 0;
    if((x492740<(x504143))) {
      char x522674 = *x492738;
      ite516691 = (x522674!=('\0'));
    } else {
      
      ite516691 = 0;
    };
    boolean_t x515433 = ite516691;
    if (!(x515433)) break; 
    
    /* VAR */ numeric_int_t x504165 = 0;
    numeric_int_t x504166 = x504165;
    numeric_int_t* x504167 = &x504166;
    char* x504168 = strntoi_unchecked(x492738, x504167);
    x492738 = x504168;
    /* VAR */ char* x504170 = x492738;
    while(1) {
      
      char x504171 = *x492738;
      /* VAR */ boolean_t ite516709 = 0;
      if((x504171!=('|'))) {
        char x522691 = *x492738;
        ite516709 = (x522691!=('\n'));
      } else {
        
        ite516709 = 0;
      };
      boolean_t x515444 = ite516709;
      if (!(x515444)) break; 
      
      x492738 += 1;
    };
    char* x504178 = x504170;
    numeric_int_t x504179 = x492738 - x504178;
    numeric_int_t x504180 = x504179+(1);
    char* x525750 = (char*)malloc(x504180 * sizeof(char));
    memset(x525750, 0, x504180 * sizeof(char));
    long x525751 = mallocSym_505300_525589;
    mallocSym_505300_525589 = (x525751+(((long){x504180})));
    char* x504183 = x504170;
    char* x504184 = strncpy(x525750, x504183, x504179);
    x492738 += 1;
    /* VAR */ char* x504186 = x492738;
    while(1) {
      
      char x504187 = *x492738;
      /* VAR */ boolean_t ite516730 = 0;
      if((x504187!=('|'))) {
        char x522711 = *x492738;
        ite516730 = (x522711!=('\n'));
      } else {
        
        ite516730 = 0;
      };
      boolean_t x515458 = ite516730;
      if (!(x515458)) break; 
      
      x492738 += 1;
    };
    char* x504194 = x504186;
    numeric_int_t x504195 = x492738 - x504194;
    numeric_int_t x504196 = x504195+(1);
    char* x525774 = (char*)malloc(x504196 * sizeof(char));
    memset(x525774, 0, x504196 * sizeof(char));
    long x525775 = mallocSym_505316_525587;
    mallocSym_505316_525587 = (x525775+(((long){x504196})));
    char* x504199 = x504186;
    char* x504200 = strncpy(x525774, x504199, x504195);
    x492738 += 1;
    /* VAR */ numeric_int_t x504202 = 0;
    numeric_int_t x504203 = x504202;
    numeric_int_t* x504204 = &x504203;
    char* x504205 = strntoi_unchecked(x492738, x504204);
    x492738 = x504205;
    /* VAR */ char* x504207 = x492738;
    while(1) {
      
      char x504208 = *x492738;
      /* VAR */ boolean_t ite516756 = 0;
      if((x504208!=('|'))) {
        char x522736 = *x492738;
        ite516756 = (x522736!=('\n'));
      } else {
        
        ite516756 = 0;
      };
      boolean_t x515477 = ite516756;
      if (!(x515477)) break; 
      
      x492738 += 1;
    };
    char* x504215 = x504207;
    numeric_int_t x504216 = x492738 - x504215;
    numeric_int_t x504217 = x504216+(1);
    char* x525803 = (char*)malloc(x504217 * sizeof(char));
    memset(x525803, 0, x504217 * sizeof(char));
    long x525804 = mallocSym_505337_525593;
    mallocSym_505337_525593 = (x525804+(((long){x504217})));
    char* x504220 = x504207;
    char* x504221 = strncpy(x525803, x504220, x504216);
    x492738 += 1;
    /* VAR */ double x504223 = 0.0;
    double x504224 = x504223;
    double* x504225 = &x504224;
    char* x504226 = strntod_unchecked(x492738, x504225);
    x492738 = x504226;
    /* VAR */ char* x504228 = x492738;
    while(1) {
      
      char x504229 = *x492738;
      /* VAR */ boolean_t ite516782 = 0;
      if((x504229!=('|'))) {
        char x522761 = *x492738;
        ite516782 = (x522761!=('\n'));
      } else {
        
        ite516782 = 0;
      };
      boolean_t x515496 = ite516782;
      if (!(x515496)) break; 
      
      x492738 += 1;
    };
    char* x504236 = x504228;
    numeric_int_t x504237 = x492738 - x504236;
    numeric_int_t x504238 = x504237+(1);
    char* x525832 = (char*)malloc(x504238 * sizeof(char));
    memset(x525832, 0, x504238 * sizeof(char));
    long x525833 = mallocSym_505358_525598;
    mallocSym_505358_525598 = (x525833+(((long){x504238})));
    char* x504241 = x504228;
    char* x504242 = strncpy(x525832, x504241, x504237);
    x492738 += 1;
    struct SUPPLIERRecord* x525840 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x525840, 0, 1 * sizeof(struct SUPPLIERRecord));
    long x525841 = mallocSym_505953_525592;
    mallocSym_505953_525592 = (x525841+(((long){1})));
    x525840->S_SUPPKEY = x504166; x525840->S_NATIONKEY = x504203;
    numeric_int_t x492752 = x492739;
    struct SUPPLIERRecord x505365 = *x525840;
    *(x525702 + x492752) = x505365;
    struct SUPPLIERRecord* x505367 = &(x525702[x492752]);
    x525840 = x505367;
    numeric_int_t x492754 = x492739;
    x492739 = (x492754+(1));
  };
  FILE* x504250 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ numeric_int_t x504251 = 0;
  numeric_int_t x504252 = x504251;
  numeric_int_t* x504253 = &x504252;
  numeric_int_t x504254 = fscanf(x504250, "%d", x504253);
  pclose(x504250);
  struct NATIONRecord* x525861 = (struct NATIONRecord*)malloc(x504252 * sizeof(struct NATIONRecord));
  memset(x525861, 0, x504252 * sizeof(struct NATIONRecord));
  long x525862 = mallocSym_505378_525581;
  mallocSym_505378_525581 = (x525862+(((long){x504252})));
  numeric_int_t x504258 = O_RDONLY;
  numeric_int_t x504259 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x504258);
  /* VAR */ struct stat x504260 = x504084;
  struct stat x504261 = x504260;
  struct stat* x504262 = &x504261;
  numeric_int_t x504263 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x504262);
  numeric_int_t x504265 = PROT_READ;
  numeric_int_t x504266 = MAP_PRIVATE;
  char* x492760 = mmap(NULL, (x504262->st_size), x504265, x504266, x504259, 0);
  /* VAR */ numeric_int_t x492761 = 0;
  while(1) {
    
    numeric_int_t x492762 = x492761;
    /* VAR */ boolean_t ite516831 = 0;
    if((x492762<(x504252))) {
      char x522809 = *x492760;
      ite516831 = (x522809!=('\0'));
    } else {
      
      ite516831 = 0;
    };
    boolean_t x515538 = ite516831;
    if (!(x515538)) break; 
    
    /* VAR */ numeric_int_t x504274 = 0;
    numeric_int_t x504275 = x504274;
    numeric_int_t* x504276 = &x504275;
    char* x504277 = strntoi_unchecked(x492760, x504276);
    x492760 = x504277;
    /* VAR */ char* x504279 = x492760;
    while(1) {
      
      char x504280 = *x492760;
      /* VAR */ boolean_t ite516849 = 0;
      if((x504280!=('|'))) {
        char x522826 = *x492760;
        ite516849 = (x522826!=('\n'));
      } else {
        
        ite516849 = 0;
      };
      boolean_t x515549 = ite516849;
      if (!(x515549)) break; 
      
      x492760 += 1;
    };
    char* x504287 = x504279;
    numeric_int_t x504288 = x492760 - x504287;
    numeric_int_t x504289 = x504288+(1);
    char* x525909 = (char*)malloc(x504289 * sizeof(char));
    memset(x525909, 0, x504289 * sizeof(char));
    long x525910 = mallocSym_505412_525600;
    mallocSym_505412_525600 = (x525910+(((long){x504289})));
    char* x504292 = x504279;
    char* x504293 = strncpy(x525909, x504292, x504288);
    x492760 += 1;
    /* VAR */ numeric_int_t x504295 = 0;
    numeric_int_t x504296 = x504295;
    numeric_int_t* x504297 = &x504296;
    char* x504298 = strntoi_unchecked(x492760, x504297);
    x492760 = x504298;
    /* VAR */ char* x504300 = x492760;
    while(1) {
      
      char x504301 = *x492760;
      /* VAR */ boolean_t ite516875 = 0;
      if((x504301!=('|'))) {
        char x522851 = *x492760;
        ite516875 = (x522851!=('\n'));
      } else {
        
        ite516875 = 0;
      };
      boolean_t x515568 = ite516875;
      if (!(x515568)) break; 
      
      x492760 += 1;
    };
    char* x504308 = x504300;
    numeric_int_t x504309 = x492760 - x504308;
    numeric_int_t x504310 = x504309+(1);
    char* x525938 = (char*)malloc(x504310 * sizeof(char));
    memset(x525938, 0, x504310 * sizeof(char));
    long x525939 = mallocSym_505433_525573;
    mallocSym_505433_525573 = (x525939+(((long){x504310})));
    char* x504313 = x504300;
    char* x504314 = strncpy(x525938, x504313, x504309);
    x492760 += 1;
    struct NATIONRecord* x525946 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x525946, 0, 1 * sizeof(struct NATIONRecord));
    long x525947 = mallocSym_506030_525580;
    mallocSym_506030_525580 = (x525947+(((long){1})));
    x525946->N_NATIONKEY = x504275; x525946->N_NAME = x525909;
    numeric_int_t x492771 = x492761;
    struct NATIONRecord x505440 = *x525946;
    *(x525861 + x492771) = x505440;
    struct NATIONRecord* x505442 = &(x525861[x492771]);
    x525946 = x505442;
    numeric_int_t x492773 = x492761;
    x492761 = (x492773+(1));
  };
  numeric_int_t x492778 = 0;
  for(; x492778 < 1 ; x492778 += 1) {
    
    double* x526615 = (double*)malloc(1 * sizeof(double));
    memset(x526615, 0, 1 * sizeof(double));
    long x526616 = mallocSym_523473_525583;
    long x526617 = (long){1};
    mallocSym_523473_525583 = (x526616+(x526617));
    struct AGGRecord_String* x526620 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x526620, 0, 1 * sizeof(struct AGGRecord_String));
    long x526621 = mallocSym_523474_525585;
    mallocSym_523474_525585 = (x526621+(x526617));
    x526620->key = "Total"; x526620->aggs = x526615;
    struct WindowRecord_Int_Double* x526626 = (struct WindowRecord_Int_Double*)malloc(48000000 * sizeof(struct WindowRecord_Int_Double));
    memset(x526626, 0, 48000000 * sizeof(struct WindowRecord_Int_Double));
    long x526627 = mallocSym_523477_525578;
    mallocSym_523477_525578 = (x526627+(((long){48000000})));
    struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x526631 = (struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1048576 * sizeof(struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x526631, 0, 1048576 * sizeof(struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    long x526632 = mallocSym_523478_525584;
    mallocSym_523478_525584 = (x526632+(((long){1048576})));
    struct PARTSUPPRecord** x526636 = (struct PARTSUPPRecord**)malloc(80000 * sizeof(struct PARTSUPPRecord*));
    memset(x526636, 0, 80000 * sizeof(struct PARTSUPPRecord*));
    long x526637 = mallocSym_523479_525569;
    long x526638 = (long){80000};
    mallocSym_523479_525569 = (x526637+(x526638));
    numeric_int_t* x526641 = (numeric_int_t*)malloc(80000 * sizeof(numeric_int_t));
    memset(x526641, 0, 80000 * sizeof(numeric_int_t));
    long x526642 = mallocSym_523480_525596;
    mallocSym_523480_525596 = (x526642+(x526638));
    numeric_int_t x513528 = 0;
    for(; x513528 < 80000 ; x513528 += 1) {
      
      *(x526641 + x513528) = 0;
    };
    /* VAR */ numeric_int_t x523486 = 0;
    numeric_int_t x513543 = 0;
    for(; x513543 < x504076 ; x513543 += 1) {
      
      struct PARTSUPPRecord* x513544 = &(x525609[x513543]);
      numeric_int_t x513546 = (x513544->PS_SUPPKEY)%(80000);
      numeric_int_t x513547 = x526641[x513546];
      *(x526641 + x513546) = (x513547+(1));
      numeric_int_t x513550 = x523486;
      x523486 = (x513550+(1));
    };
    numeric_int_t x513560 = 0;
    for(; x513560 < 80000 ; x513560 += 1) {
      
      numeric_int_t x513561 = x526641[x513560];
      struct PARTSUPPRecord* x526684 = (struct PARTSUPPRecord*)malloc(x513561 * sizeof(struct PARTSUPPRecord));
      memset(x526684, 0, x513561 * sizeof(struct PARTSUPPRecord));
      long x526685 = mallocSym_513562_525574;
      mallocSym_513562_525574 = (x526685+(((long){x513561})));
      *(x526636 + x513560) = x526684;
      *(x526641 + x513560) = 0;
    };
    x523486 = 0;
    numeric_int_t x513584 = 0;
    for(; x513584 < x504076 ; x513584 += 1) {
      
      struct PARTSUPPRecord* x513585 = &(x525609[x513584]);
      numeric_int_t x513587 = (x513585->PS_SUPPKEY)%(80000);
      numeric_int_t x513588 = x526641[x513587];
      struct PARTSUPPRecord* x513589 = x526636[x513587];
      struct PARTSUPPRecord x513590 = *x513585;
      *(x513589 + x513588) = x513590;
      struct PARTSUPPRecord* x513592 = &(x513589[x513588]);
      x513585 = x513592;
      numeric_int_t x513594 = x526641[x513587];
      *(x526641 + x513587) = (x513594+(1));
      numeric_int_t x513597 = x523486;
      x523486 = (x513597+(1));
    };
    /* VAR */ numeric_int_t x523553 = 0;
    struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x526726 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(6400000 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x526726, 0, 6400000 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    long x526727 = mallocSym_523554_525597;
    long x526728 = (long){6400000};
    mallocSym_523554_525597 = (x526727+(x526728));
    /* VAR */ numeric_int_t x523555 = 0;
    while(1) {
      
      numeric_int_t x503273 = x523555;
      if (!((x503273<(6400000)))) break; 
      
      numeric_int_t x503275 = x523555;
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x526736 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x526736, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      long x526737 = mallocSym_506106_525566;
      mallocSym_506106_525566 = (x526737+(x526617));
      x526736->N_NATIONKEY = 0; x526736->N_NAME = ""; x526736->S_SUPPKEY = 0; x526736->S_NATIONKEY = 0; x526736->PS_PARTKEY = 0; x526736->PS_SUPPKEY = 0; x526736->PS_AVAILQTY = 0; x526736->PS_SUPPLYCOST = 0.0;
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x505511 = *x526736;
      *(x526726 + x503275) = x505511;
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x505513 = &(x526726[x503275]);
      x526736 = x505513;
      numeric_int_t x503278 = x523555;
      x523555 = (x503278+(1));
    };
    /* VAR */ numeric_int_t x523570 = 0;
    struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord** x526750 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord**)malloc(6400000 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*));
    memset(x526750, 0, 6400000 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*));
    long x526751 = mallocSym_523571_525588;
    mallocSym_523571_525588 = (x526751+(x526728));
    /* VAR */ numeric_int_t x523572 = 0;
    while(1) {
      
      numeric_int_t x503285 = x523572;
      if (!((x503285<(6400000)))) break; 
      
      numeric_int_t x503287 = x523572;
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x526759 = (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(16 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x526759, 0, 16 * sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      long x526760 = mallocSym_505525_525575;
      mallocSym_505525_525575 = (x526760+(((long){16})));
      *(x526750 + x503287) = x526759;
      numeric_int_t x503290 = x523572;
      x523572 = (x503290+(1));
    };
    /* VAR */ numeric_int_t x523582 = 0;
    struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x526769 = (struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(6400000 * sizeof(struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x526769, 0, 6400000 * sizeof(struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    long x526770 = mallocSym_523583_525570;
    mallocSym_523583_525570 = (x526770+(x526728));
    /* VAR */ numeric_int_t x523584 = 0;
    while(1) {
      
      numeric_int_t x503297 = x523584;
      if (!((x503297<(6400000)))) break; 
      
      numeric_int_t x503299 = x523584;
      struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x503300 = x526750[x503299];
      struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x526779 = (struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x526779, 0, 1 * sizeof(struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      long x526780 = mallocSym_506136_525582;
      mallocSym_506136_525582 = (x526780+(x526617));
      x526779->maxSize = 0; x526779->array = x503300;
      struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x505539 = *x526779;
      *(x526769 + x503299) = x505539;
      struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x505541 = &(x526769[x503299]);
      x526779 = x505541;
      numeric_int_t x503303 = x523584;
      x523584 = (x503303+(1));
    };
    /* VAR */ numeric_int_t x523600 = 0;
    struct WindowRecord_Int_Double* x526793 = (struct WindowRecord_Int_Double*)malloc(1600000 * sizeof(struct WindowRecord_Int_Double));
    memset(x526793, 0, 1600000 * sizeof(struct WindowRecord_Int_Double));
    long x526794 = mallocSym_523601_525601;
    mallocSym_523601_525601 = (x526794+(((long){1600000})));
    /* VAR */ numeric_int_t x523602 = 0;
    while(1) {
      
      numeric_int_t x503310 = x523602;
      if (!((x503310<(1600000)))) break; 
      
      numeric_int_t x503312 = x523602;
      struct WindowRecord_Int_Double* x526803 = (struct WindowRecord_Int_Double*)malloc(1 * sizeof(struct WindowRecord_Int_Double));
      memset(x526803, 0, 1 * sizeof(struct WindowRecord_Int_Double));
      long x526804 = mallocSym_506153_525594;
      mallocSym_506153_525594 = (x526804+(x526617));
      x526803->key = 0; x526803->wnd = 0.0;
      struct WindowRecord_Int_Double x505554 = *x526803;
      *(x526793 + x503312) = x505554;
      struct WindowRecord_Int_Double* x505556 = &(x526793[x503312]);
      x526803 = x505556;
      numeric_int_t x503315 = x523602;
      x523602 = (x503315+(1));
    };
    struct timeval x523617 = (struct timeval){0};
    /* VAR */ struct timeval x523618 = x523617;
    struct timeval x523619 = x523618;
    /* VAR */ struct timeval x523620 = x523617;
    struct timeval x523621 = x523620;
    /* VAR */ struct timeval x523622 = x523617;
    struct timeval x523623 = x523622;
    struct timeval* x523624 = &x523621;
    gettimeofday(x523624, NULL);
    /* VAR */ numeric_int_t x523626 = 0;
    /* VAR */ numeric_int_t x523627 = 0;
    /* VAR */ struct AGGRecord_String* x523628 = NULL;
    while(1) {
      
      numeric_int_t x523630 = x523626;
      if (!((x523630<(x504143)))) break; 
      
      numeric_int_t x495185 = x523626;
      struct SUPPLIERRecord* x492865 = &(x525702[x495185]);
      numeric_int_t x492867 = x492865->S_NATIONKEY;
      struct NATIONRecord* x502162 = &(x525861[(x492867-(0))]);
      boolean_t x512396 = strcmp((x502162->N_NAME), "UNITED KINGDOM");
      if((x512396==(0))) {
        if(((x502162->N_NATIONKEY)==(x492867))) {
          numeric_int_t x497328 = x502162->N_NATIONKEY;
          if((x497328==(x492867))) {
            numeric_int_t x493608 = x492865->S_SUPPKEY;
            numeric_int_t x497335 = x493608%(80000);
            numeric_int_t x497336 = x526641[x497335];
            struct PARTSUPPRecord* x497337 = x526636[x497335];
            numeric_int_t x513767 = 0;
            for(; x513767 < x497336 ; x513767 += 1) {
              
              struct PARTSUPPRecord* x513768 = &(x497337[x513767]);
              numeric_int_t x513769 = x513768->PS_SUPPKEY;
              if((x493608==(x513769))) {
                numeric_int_t x503356 = x523553;
                struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x503357 = &(x526726[x503356]);
                x503357->N_NATIONKEY = x497328;
                x503357->N_NAME = (x502162->N_NAME);
                x503357->S_SUPPKEY = x493608;
                x503357->S_NATIONKEY = x492867;
                x503357->PS_PARTKEY = (x513768->PS_PARTKEY);
                x503357->PS_SUPPKEY = x513769;
                x503357->PS_AVAILQTY = (x513768->PS_AVAILQTY);
                x503357->PS_SUPPLYCOST = (x513768->PS_SUPPLYCOST);
                numeric_int_t x503366 = x523553;
                x523553 = (x503366+(1));
                numeric_int_t x498405 = (x503357->PS_PARTKEY)%(1048576);
                struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x499562 = &(x526631[x498405]);
                /* VAR */ struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* list499563 = x499562;
                struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x499564 = list499563;
                /* VAR */ boolean_t ite517730 = 0;
                if((x499564==(NULL))) {
                  ite517730 = 1;
                } else {
                  
                  struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x523763 = x499564->array;
                  /* VAR */ boolean_t x523765 = 0;
                  if((x523763==(NULL))) {
                    x523765 = 1;
                  } else {
                    
                    char* x523768 = x523763->N_NAME;
                    /* VAR */ boolean_t x523770 = 0;
                    if((x523768==(NULL))) {
                      x523770 = 1;
                    } else {
                      
                      boolean_t x523773 = strcmp(x523768, "");
                      boolean_t x523774 = !(x523773);
                      x523770 = x523774;
                    };
                    boolean_t x523777 = x523770;
                    x523765 = x523777;
                  };
                  boolean_t x523780 = x523765;
                  ite517730 = x523780;
                };
                boolean_t x516354 = ite517730;
                if(x516354) {
                  numeric_int_t x503377 = x523570;
                  struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x503378 = x526750[x503377];
                  numeric_int_t x503379 = x523570;
                  x523570 = (x503379+(1));
                  numeric_int_t x503382 = x523582;
                  struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x503383 = &(x526769[x503382]);
                  x503383->maxSize = 0;
                  x503383->array = x503378;
                  numeric_int_t x503386 = x523582;
                  x523582 = (x503386+(1));
                  list499563 = x503383;
                  struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x499572 = list499563;
                  struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x505641 = *x499572;
                  *(x526631 + x498405) = x505641;
                  struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x505643 = &(x526631[x498405]);
                  list499563 = x505643;
                };
                struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x499574 = list499563;
                struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x499575 = x499574->array;
                numeric_int_t x499576 = x499574->maxSize;
                struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x505648 = *x503357;
                *(x499575 + x499576) = x505648;
                struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x505650 = &(x499575[x499576]);
                x503357 = x505650;
                numeric_int_t x499578 = x499574->maxSize;
                x499574->maxSize = (x499578+(1));
              };
            };
          };
        };
      };
      numeric_int_t x495217 = x523626;
      x523626 = (x495217+(1));
    };
    numeric_int_t x513892 = 0;
    for(; x513892 < 1048576 ; x513892 += 1) {
      
      struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x513893 = &(x526631[x513892]);
      /* VAR */ boolean_t ite517832 = 0;
      if((x513893!=(NULL))) {
        struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x523889 = x513893->array;
        /* VAR */ boolean_t x523891 = 0;
        if((x523889!=(NULL))) {
          char* x523893 = x523889->N_NAME;
          /* VAR */ boolean_t x523895 = 0;
          if((x523893!=(NULL))) {
            boolean_t x523897 = strcmp(x523893, "");
            x523895 = x523897;
          } else {
            
            x523895 = 0;
          };
          boolean_t x523901 = x523895;
          x523891 = x523901;
        } else {
          
          x523891 = 0;
        };
        boolean_t x523905 = x523891;
        ite517832 = x523905;
      } else {
        
        ite517832 = 0;
      };
      boolean_t x516438 = ite517832;
      if(x516438) {
        /* VAR */ double acc499601 = 0.0;
        numeric_int_t x499904 = x513893->maxSize;
        numeric_int_t x513862 = 0;
        for(; x513862 < x499904 ; x513862 += 1) {
          
          struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x513864 = &(((struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*) { x513893->array })[x513862]);
          double x513865 = acc499601;
          acc499601 = (x513865+(((x513864->PS_SUPPLYCOST)*((x513864->PS_AVAILQTY)))));
        };
        double x499612 = acc499601;
        numeric_int_t x503428 = x523600;
        struct WindowRecord_Int_Double* x503429 = &(x526793[x503428]);
        x503429->key = (((struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*) { (struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord**){((struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*) { x513893->array })} })->PS_PARTKEY);
        x503429->wnd = x499612;
        numeric_int_t x503432 = x523600;
        x523600 = (x503432+(1));
        numeric_int_t x498460 = x523627;
        struct WindowRecord_Int_Double x505692 = *x503429;
        *(x526626 + x498460) = x505692;
        struct WindowRecord_Int_Double* x505694 = &(x526626[x498460]);
        x503429 = x505694;
        numeric_int_t x498462 = x523627;
        x523627 = (x498462+(1));
      };
    };
    /* VAR */ numeric_int_t x523951 = 0;
    while(1) {
      
      numeric_int_t x523953 = x523951;
      numeric_int_t x523954 = x523627;
      if (!((x523953<(x523954)))) break; 
      
      numeric_int_t x492972 = x523951;
      struct WindowRecord_Int_Double* x492973 = &(x526626[x492972]);
      numeric_int_t x492974 = x523951;
      x523951 = (x492974+(1));
      double* x492982 = x526620->aggs;
      double x492996 = x492982[0];
      *x492982 = (x492996+((x492973->wnd)));
    };
    x523628 = x526620;
    struct AGGRecord_String* x523967 = x523628;
    numeric_int_t* x524006 = &(x523987);
    GTree* x524007 = g_tree_new(x524006);
    /* VAR */ boolean_t x524008 = 0;
    /* VAR */ numeric_int_t x524009 = 0;
    /* VAR */ numeric_int_t x524010 = 0;
    while(1) {
      
      numeric_int_t x524012 = x524010;
      numeric_int_t x524013 = x523627;
      if (!((x524012<(x524013)))) break; 
      
      numeric_int_t x493347 = x524010;
      struct WindowRecord_Int_Double* x493348 = &(x526626[x493347]);
      numeric_int_t x493349 = x524010;
      x524010 = (x493349+(1));
      double x493356 = ((double*) { x523967->aggs })[0];
      if(((x493348->wnd)>((x493356*(1.0E-4))))) {
        g_tree_insert(x524007, x493348, x493348);
      };
    };
    while(1) {
      
      boolean_t x495738 = x524008;
      boolean_t x493364 = !(x495738);
      /* VAR */ boolean_t ite517965 = 0;
      if(x493364) {
        numeric_int_t x524032 = g_tree_nnodes(x524007);
        ite517965 = (x524032!=(0));
      } else {
        
        ite517965 = 0;
      };
      boolean_t x516556 = ite517965;
      if (!(x516556)) break; 
      
      void* x507568 = NULL;
      void** x507576 = &(x507568);
      g_tree_foreach(x524007, x507575, x507576);
      struct WindowRecord_Int_Double* x507578 = (struct WindowRecord_Int_Double*){x507568};
      numeric_int_t x507579 = g_tree_remove(x524007, x507578);
      if(0) {
        x524008 = 1;
      } else {
        
        printf("%d|%.2f\n", (x507578->key), (x507578->wnd));
        numeric_int_t x495754 = x524009;
        x524009 = (x495754+(1));
      };
    };
    numeric_int_t x524058 = x524009;
    printf("(%d rows)\n", x524058);
    struct timeval* x524060 = &x523623;
    gettimeofday(x524060, NULL);
    struct timeval* x524062 = &x523619;
    struct timeval* x524063 = &x523623;
    struct timeval* x524064 = &x523621;
    long x524065 = timeval_subtract(x524062, x524063, x524064);
    printf("Generated code run in %ld milliseconds.\n", x524065);
  };
  /* VAR */ long mallocSum527266 = 0L;
  long x527267 = mallocSym_505839_525564;
  numeric_int_t x527268 = sizeof(struct PARTSUPPRecord);
  long x527270 = x527267*(((long){x527268}));
  printf("525681 with type PARTSUPPRecord: %ld\n", x527270);
  long x527272 = mallocSum527266;
  mallocSum527266 = (x527272+(x527270));
  long x527275 = mallocSym_506045_525565;
  numeric_int_t x527276 = sizeof(struct AGGRecord_String);
  long x527278 = x527275*(((long){x527276}));
  printf("525968 with type AGGRecord_String: %ld\n", x527278);
  long x527280 = mallocSum527266;
  mallocSum527266 = (x527280+(x527278));
  long x527283 = mallocSym_506106_525566;
  numeric_int_t x527284 = sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x527286 = x527283*(((long){x527284}));
  printf("526736 with type NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x527286);
  long x527288 = mallocSum527266;
  mallocSum527266 = (x527288+(x527286));
  long x527291 = mallocSym_505479_525567;
  numeric_int_t x527292 = sizeof(struct PARTSUPPRecord);
  long x527294 = x527291*(((long){x527292}));
  printf("526675 with type PARTSUPPRecord: %ld\n", x527294);
  long x527296 = mallocSum527266;
  mallocSum527266 = (x527296+(x527294));
  long x527299 = mallocSym_505519_525568;
  numeric_int_t x527300 = sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*);
  long x527302 = x527299*(((long){x527300}));
  printf("526098 with type Pointer[NATIONRecord_SUPPLIERRecord_PARTSUPPRecord]: %ld\n", x527302);
  long x527304 = mallocSum527266;
  mallocSum527266 = (x527304+(x527302));
  long x527307 = mallocSym_523479_525569;
  numeric_int_t x527308 = sizeof(struct PARTSUPPRecord*);
  long x527310 = x527307*(((long){x527308}));
  printf("526636 with type Pointer[PARTSUPPRecord]: %ld\n", x527310);
  long x527312 = mallocSum527266;
  mallocSum527266 = (x527312+(x527310));
  long x527315 = mallocSym_523583_525570;
  numeric_int_t x527316 = sizeof(struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x527318 = x527315*(((long){x527316}));
  printf("526769 with type Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x527318);
  long x527320 = mallocSum527266;
  mallocSum527266 = (x527320+(x527318));
  long x527323 = mallocSym_505450_525571;
  numeric_int_t x527324 = sizeof(double);
  long x527326 = x527323*(((long){x527324}));
  printf("525963 with type Double: %ld\n", x527326);
  long x527328 = mallocSum527266;
  mallocSum527266 = (x527328+(x527326));
  long x527331 = mallocSym_505454_525572;
  numeric_int_t x527332 = sizeof(struct PARTSUPPRecord*);
  long x527334 = x527331*(((long){x527332}));
  printf("525984 with type Pointer[PARTSUPPRecord]: %ld\n", x527334);
  long x527336 = mallocSum527266;
  mallocSum527266 = (x527336+(x527334));
  long x527339 = mallocSym_505433_525573;
  numeric_int_t x527340 = sizeof(char);
  long x527342 = x527339*(((long){x527340}));
  printf("525938 with type Byte: %ld\n", x527342);
  long x527344 = mallocSum527266;
  mallocSum527266 = (x527344+(x527342));
  long x527347 = mallocSym_513562_525574;
  numeric_int_t x527348 = sizeof(struct PARTSUPPRecord);
  long x527350 = x527347*(((long){x527348}));
  printf("526684 with type PARTSUPPRecord: %ld\n", x527350);
  long x527352 = mallocSum527266;
  mallocSum527266 = (x527352+(x527350));
  long x527355 = mallocSym_505525_525575;
  numeric_int_t x527356 = sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x527358 = x527355*(((long){x527356}));
  printf("526759 with type NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x527358);
  long x527360 = mallocSum527266;
  mallocSum527266 = (x527360+(x527358));
  long x527363 = mallocSym_505453_525576;
  numeric_int_t x527364 = sizeof(struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x527366 = x527363*(((long){x527364}));
  printf("525979 with type Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x527366);
  long x527368 = mallocSum527266;
  mallocSum527266 = (x527368+(x527366));
  long x527371 = mallocSym_505504_525577;
  numeric_int_t x527372 = sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x527374 = x527371*(((long){x527372}));
  printf("526074 with type NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x527374);
  long x527376 = mallocSum527266;
  mallocSum527266 = (x527376+(x527374));
  long x527379 = mallocSym_523477_525578;
  numeric_int_t x527380 = sizeof(struct WindowRecord_Int_Double);
  long x527382 = x527379*(((long){x527380}));
  printf("526626 with type WindowRecord_Int_Double: %ld\n", x527382);
  long x527384 = mallocSum527266;
  mallocSum527266 = (x527384+(x527382));
  long x527387 = mallocSym_505531_525579;
  numeric_int_t x527388 = sizeof(struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x527390 = x527387*(((long){x527388}));
  printf("526117 with type Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x527390);
  long x527392 = mallocSum527266;
  mallocSum527266 = (x527392+(x527390));
  long x527395 = mallocSym_506030_525580;
  numeric_int_t x527396 = sizeof(struct NATIONRecord);
  long x527398 = x527395*(((long){x527396}));
  printf("525946 with type NATIONRecord: %ld\n", x527398);
  long x527400 = mallocSum527266;
  mallocSum527266 = (x527400+(x527398));
  long x527403 = mallocSym_505378_525581;
  numeric_int_t x527404 = sizeof(struct NATIONRecord);
  long x527406 = x527403*(((long){x527404}));
  printf("525861 with type NATIONRecord: %ld\n", x527406);
  long x527408 = mallocSum527266;
  mallocSum527266 = (x527408+(x527406));
  long x527411 = mallocSym_506136_525582;
  numeric_int_t x527412 = sizeof(struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x527414 = x527411*(((long){x527412}));
  printf("526779 with type Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x527414);
  long x527416 = mallocSum527266;
  mallocSum527266 = (x527416+(x527414));
  long x527419 = mallocSym_523473_525583;
  numeric_int_t x527420 = sizeof(double);
  long x527422 = x527419*(((long){x527420}));
  printf("526615 with type Double: %ld\n", x527422);
  long x527424 = mallocSum527266;
  mallocSum527266 = (x527424+(x527422));
  long x527427 = mallocSym_523478_525584;
  numeric_int_t x527428 = sizeof(struct Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x527430 = x527427*(((long){x527428}));
  printf("526631 with type Set_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x527430);
  long x527432 = mallocSum527266;
  mallocSum527266 = (x527432+(x527430));
  long x527435 = mallocSym_523474_525585;
  numeric_int_t x527436 = sizeof(struct AGGRecord_String);
  long x527438 = x527435*(((long){x527436}));
  printf("526620 with type AGGRecord_String: %ld\n", x527438);
  long x527440 = mallocSum527266;
  mallocSum527266 = (x527440+(x527438));
  long x527443 = mallocSym_505452_525586;
  numeric_int_t x527444 = sizeof(struct WindowRecord_Int_Double);
  long x527446 = x527443*(((long){x527444}));
  printf("525974 with type WindowRecord_Int_Double: %ld\n", x527446);
  long x527448 = mallocSum527266;
  mallocSum527266 = (x527448+(x527446));
  long x527451 = mallocSym_505316_525587;
  numeric_int_t x527452 = sizeof(char);
  long x527454 = x527451*(((long){x527452}));
  printf("525774 with type Byte: %ld\n", x527454);
  long x527456 = mallocSum527266;
  mallocSum527266 = (x527456+(x527454));
  long x527459 = mallocSym_523571_525588;
  numeric_int_t x527460 = sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*);
  long x527462 = x527459*(((long){x527460}));
  printf("526750 with type Pointer[NATIONRecord_SUPPLIERRecord_PARTSUPPRecord]: %ld\n", x527462);
  long x527464 = mallocSum527266;
  mallocSum527266 = (x527464+(x527462));
  long x527467 = mallocSym_505300_525589;
  numeric_int_t x527468 = sizeof(char);
  long x527470 = x527467*(((long){x527468}));
  printf("525750 with type Byte: %ld\n", x527470);
  long x527472 = mallocSum527266;
  mallocSum527266 = (x527472+(x527470));
  long x527475 = mallocSym_505246_525590;
  numeric_int_t x527476 = sizeof(char);
  long x527478 = x527475*(((long){x527476}));
  printf("525673 with type Byte: %ld\n", x527478);
  long x527480 = mallocSum527266;
  mallocSum527266 = (x527480+(x527478));
  long x527483 = mallocSym_505547_525591;
  numeric_int_t x527484 = sizeof(struct WindowRecord_Int_Double);
  long x527486 = x527483*(((long){x527484}));
  printf("526141 with type WindowRecord_Int_Double: %ld\n", x527486);
  long x527488 = mallocSum527266;
  mallocSum527266 = (x527488+(x527486));
  long x527491 = mallocSym_505953_525592;
  numeric_int_t x527492 = sizeof(struct SUPPLIERRecord);
  long x527494 = x527491*(((long){x527492}));
  printf("525840 with type SUPPLIERRecord: %ld\n", x527494);
  long x527496 = mallocSum527266;
  mallocSum527266 = (x527496+(x527494));
  long x527499 = mallocSym_505337_525593;
  numeric_int_t x527500 = sizeof(char);
  long x527502 = x527499*(((long){x527500}));
  printf("525803 with type Byte: %ld\n", x527502);
  long x527504 = mallocSum527266;
  mallocSum527266 = (x527504+(x527502));
  long x527507 = mallocSym_506153_525594;
  numeric_int_t x527508 = sizeof(struct WindowRecord_Int_Double);
  long x527510 = x527507*(((long){x527508}));
  printf("526803 with type WindowRecord_Int_Double: %ld\n", x527510);
  long x527512 = mallocSum527266;
  mallocSum527266 = (x527512+(x527510));
  long x527515 = mallocSym_505196_525595;
  numeric_int_t x527516 = sizeof(struct PARTSUPPRecord);
  long x527518 = x527515*(((long){x527516}));
  printf("525609 with type PARTSUPPRecord: %ld\n", x527518);
  long x527520 = mallocSum527266;
  mallocSum527266 = (x527520+(x527518));
  long x527523 = mallocSym_523480_525596;
  numeric_int_t x527524 = sizeof(numeric_int_t);
  long x527526 = x527523*(((long){x527524}));
  printf("526641 with type Int: %ld\n", x527526);
  long x527528 = mallocSum527266;
  mallocSum527266 = (x527528+(x527526));
  long x527531 = mallocSym_523554_525597;
  numeric_int_t x527532 = sizeof(struct NATIONRecord_SUPPLIERRecord_PARTSUPPRecord);
  long x527534 = x527531*(((long){x527532}));
  printf("526726 with type NATIONRecord_SUPPLIERRecord_PARTSUPPRecord: %ld\n", x527534);
  long x527536 = mallocSum527266;
  mallocSum527266 = (x527536+(x527534));
  long x527539 = mallocSym_505358_525598;
  numeric_int_t x527540 = sizeof(char);
  long x527542 = x527539*(((long){x527540}));
  printf("525832 with type Byte: %ld\n", x527542);
  long x527544 = mallocSum527266;
  mallocSum527266 = (x527544+(x527542));
  long x527547 = mallocSym_505266_525599;
  numeric_int_t x527548 = sizeof(struct SUPPLIERRecord);
  long x527550 = x527547*(((long){x527548}));
  printf("525702 with type SUPPLIERRecord: %ld\n", x527550);
  long x527552 = mallocSum527266;
  mallocSum527266 = (x527552+(x527550));
  long x527555 = mallocSym_505412_525600;
  numeric_int_t x527556 = sizeof(char);
  long x527558 = x527555*(((long){x527556}));
  printf("525909 with type Byte: %ld\n", x527558);
  long x527560 = mallocSum527266;
  mallocSum527266 = (x527560+(x527558));
  long x527563 = mallocSym_523601_525601;
  numeric_int_t x527564 = sizeof(struct WindowRecord_Int_Double);
  long x527566 = x527563*(((long){x527564}));
  printf("526793 with type WindowRecord_Int_Double: %ld\n", x527566);
  long x527568 = mallocSum527266;
  mallocSum527266 = (x527568+(x527566));
  long x527571 = mallocSym_505455_525602;
  numeric_int_t x527572 = sizeof(numeric_int_t);
  long x527574 = x527571*(((long){x527572}));
  printf("525989 with type Int: %ld\n", x527574);
  long x527576 = mallocSum527266;
  mallocSum527266 = (x527576+(x527574));
  long x527579 = mallocSum527266;
  printf("total: %ld\n", x527579);
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x523987(struct WindowRecord_Int_Double* x493021, struct WindowRecord_Int_Double* x493022) {
  double x493023 = x493021->wnd;
  double x493024 = x493022->wnd;
  /* VAR */ numeric_int_t ite516521 = 0;
  if((x493023>(x493024))) {
    ite516521 = -1;
  } else {
    
    /* VAR */ numeric_int_t ite516525 = 0;
    if((x493023<(x493024))) {
      ite516525 = 1;
    } else {
      
      ite516525 = 0;
    };
    numeric_int_t x516524 = ite516525;
    ite516521 = x516524;
  };
  numeric_int_t x493028 = ite516521;
  return x493028; 
}

numeric_int_t x507575(void* x507569, void* x507570, void* x507571) {
  pointer_assign(((struct WindowRecord_Int_Double**){x507571}), ((struct WindowRecord_Int_Double*){x507570}));
  return 1; 
}
