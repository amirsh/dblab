#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct LINEITEMRecord;
struct NATIONRecord;
struct ORDERSRecord;
struct PARTRecord;
struct AGGRecord_Q9GRPRecord;
struct Q9GRPRecord;
struct SUPPLIERRecord;
struct Set_AGGRecord_Q9GRPRecord;
struct PARTSUPPRecord;
struct LINEITEMRecord {
  numeric_int_t L_ORDERKEY;
  numeric_int_t L_PARTKEY;
  numeric_int_t L_SUPPKEY;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
};

struct NATIONRecord {
  numeric_int_t N_NATIONKEY;
  numeric_int_t N_NAME;
};

struct ORDERSRecord {
  numeric_int_t O_ORDERKEY;
  numeric_int_t O_ORDERDATE;
};

struct PARTRecord {
  numeric_int_t P_PARTKEY;
  char* P_NAME;
};

struct AGGRecord_Q9GRPRecord {
  struct Q9GRPRecord* key;
  double aggs;
};

struct Q9GRPRecord {
  numeric_int_t NATION;
  numeric_int_t O_YEAR;
};

struct SUPPLIERRecord {
  numeric_int_t S_SUPPKEY;
  numeric_int_t S_NATIONKEY;
};

struct Set_AGGRecord_Q9GRPRecord {
  numeric_int_t maxSize;
  struct AGGRecord_Q9GRPRecord* array;
};

struct PARTSUPPRecord {
  numeric_int_t PS_PARTKEY;
  numeric_int_t PS_SUPPKEY;
  double PS_SUPPLYCOST;
};


boolean_t x427490(char** x400100, char** x400101);

numeric_int_t x427802(struct AGGRecord_Q9GRPRecord* x376522, struct AGGRecord_Q9GRPRecord* x376523);

numeric_int_t x400494(void* x400488, void* x400489, void* x400490);

int main(int argc, char** argv) {
  /* VAR */ long mallocSym_396926_431649 = 0L;
  /* VAR */ long mallocSym_395935_431650 = 0L;
  /* VAR */ long mallocSym_395652_431651 = 0L;
  /* VAR */ long mallocSym_427298_431652 = 0L;
  /* VAR */ long mallocSym_396222_431653 = 0L;
  /* VAR */ long mallocSym_427744_431654 = 0L;
  /* VAR */ long mallocSym_411971_431655 = 0L;
  /* VAR */ long mallocSym_427411_431656 = 0L;
  /* VAR */ long mallocSym_425725_431657 = 0L;
  /* VAR */ long mallocSym_395972_431658 = 0L;
  /* VAR */ long mallocSym_396199_431659 = 0L;
  /* VAR */ long mallocSym_395673_431660 = 0L;
  /* VAR */ long mallocSym_396181_431661 = 0L;
  /* VAR */ long mallocSym_397428_431662 = 0L;
  /* VAR */ long mallocSym_425264_431663 = 0L;
  /* VAR */ long mallocSym_395598_431664 = 0L;
  /* VAR */ long mallocSym_396271_431665 = 0L;
  /* VAR */ long mallocSym_427410_431666 = 0L;
  /* VAR */ long mallocSym_395465_431667 = 0L;
  /* VAR */ long mallocSym_396272_431668 = 0L;
  /* VAR */ long mallocSym_395791_431669 = 0L;
  /* VAR */ long mallocSym_396835_431670 = 0L;
  /* VAR */ long mallocSym_396223_431671 = 0L;
  /* VAR */ long mallocSym_396203_431672 = 0L;
  /* VAR */ long mallocSym_427727_431673 = 0L;
  /* VAR */ long mallocSym_396149_431674 = 0L;
  /* VAR */ long mallocSym_395524_431675 = 0L;
  /* VAR */ long mallocSym_395508_431676 = 0L;
  /* VAR */ long mallocSym_395951_431677 = 0L;
  /* VAR */ long mallocSym_395556_431678 = 0L;
  /* VAR */ long mallocSym_397124_431679 = 0L;
  /* VAR */ long mallocSym_395577_431680 = 0L;
  /* VAR */ long mallocSym_412038_431681 = 0L;
  /* VAR */ long mallocSym_427336_431682 = 0L;
  /* VAR */ long mallocSym_426590_431683 = 0L;
  /* VAR */ long mallocSym_396210_431684 = 0L;
  /* VAR */ long mallocSym_397238_431685 = 0L;
  /* VAR */ long mallocSym_396165_431686 = 0L;
  /* VAR */ long mallocSym_425440_431687 = 0L;
  /* VAR */ long mallocSym_396296_431688 = 0L;
  /* VAR */ long mallocSym_395993_431689 = 0L;
  /* VAR */ long mallocSym_396247_431690 = 0L;
  /* VAR */ long mallocSym_411972_431691 = 0L;
  /* VAR */ long mallocSym_395540_431692 = 0L;
  /* VAR */ long mallocSym_395775_431693 = 0L;
  /* VAR */ long mallocSym_425940_431694 = 0L;
  /* VAR */ long mallocSym_426573_431695 = 0L;
  /* VAR */ long mallocSym_397703_431696 = 0L;
  /* VAR */ long mallocSym_427337_431697 = 0L;
  /* VAR */ long mallocSym_395881_431698 = 0L;
  /* VAR */ long mallocSym_397448_431699 = 0L;
  /* VAR */ long mallocSym_425581_431700 = 0L;
  /* VAR */ long mallocSym_395812_431701 = 0L;
  /* VAR */ long mallocSym_427318_431702 = 0L;
  /* VAR */ long mallocSym_397053_431703 = 0L;
  /* VAR */ long mallocSym_397721_431704 = 0L;
  /* VAR */ long mallocSym_425805_431705 = 0L;
  /* VAR */ long mallocSym_412116_431706 = 0L;
  /* VAR */ numeric_int_t x388639 = 0;
  numeric_int_t x399194 = sizeof(char*);
  GArray* x399195 = g_array_new(0, 1, x399194);
  numeric_int_t x399196 = sizeof(char*);
  GArray* x399197 = g_array_new(0, 1, x399196);
  /* VAR */ numeric_int_t x388642 = 0;
  numeric_int_t* x431713 = (numeric_int_t*)malloc(12000000 * sizeof(numeric_int_t));
  memset(x431713, 0, 12000000 * sizeof(numeric_int_t));
  long x431714 = mallocSym_395465_431667;
  long x431715 = (long){12000000};
  long x431716 = x431714+(x431715);
  mallocSym_395465_431667 = x431716;
  FILE* x425258 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ numeric_int_t x425259 = 0;
  numeric_int_t x425260 = x425259;
  numeric_int_t* x425261 = &x425260;
  numeric_int_t x425262 = fscanf(x425258, "%d", x425261);
  pclose(x425258);
  struct PARTRecord* x431724 = (struct PARTRecord*)malloc(x425260 * sizeof(struct PARTRecord));
  memset(x431724, 0, x425260 * sizeof(struct PARTRecord));
  long x431725 = mallocSym_425264_431663;
  long x431726 = (long){x425260};
  long x431727 = x431725+(x431726);
  mallocSym_425264_431663 = x431727;
  numeric_int_t x425265 = O_RDONLY;
  numeric_int_t x425266 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x425265);
  struct stat x425267 = (struct stat){0};
  /* VAR */ struct stat x425268 = x425267;
  struct stat x425269 = x425268;
  struct stat* x425270 = &x425269;
  numeric_int_t x425271 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x425270);
  size_t x425272 = x425270->st_size;
  numeric_int_t x425273 = PROT_READ;
  numeric_int_t x425274 = MAP_PRIVATE;
  char* x425275 = mmap(NULL, x425272, x425273, x425274, x425266, 0);
  /* VAR */ numeric_int_t x425276 = 0;
  while(1) {
    
    numeric_int_t x376283 = x425276;
    boolean_t x376284 = x376283<(x425260);
    /* VAR */ boolean_t ite418770 = 0;
    if(x376284) {
      char x425282 = *x425275;
      boolean_t x425283 = x425282!=('\0');
      ite418770 = x425283;
    } else {
      
      ite418770 = 0;
    };
    boolean_t x415859 = ite418770;
    if (!(x415859)) break; 
    
    /* VAR */ numeric_int_t x393106 = 0;
    numeric_int_t x393107 = x393106;
    numeric_int_t* x393108 = &x393107;
    char* x393109 = strntoi_unchecked(x425275, x393108);
    x425275 = x393109;
    /* VAR */ char* x393111 = x425275;
    while(1) {
      
      char x393112 = *x425275;
      boolean_t x393113 = x393112!=('|');
      /* VAR */ boolean_t ite418788 = 0;
      if(x393113) {
        char x425299 = *x425275;
        boolean_t x425300 = x425299!=('\n');
        ite418788 = x425300;
      } else {
        
        ite418788 = 0;
      };
      boolean_t x415870 = ite418788;
      if (!(x415870)) break; 
      
      x425275 += 1;
    };
    char* x393119 = x393111;
    numeric_int_t x393120 = x425275 - x393119;
    numeric_int_t x393121 = x393120+(1);
    char* x431773 = (char*)malloc(x393121 * sizeof(char));
    memset(x431773, 0, x393121 * sizeof(char));
    long x431774 = mallocSym_395508_431676;
    long x431775 = (long){x393121};
    long x431776 = x431774+(x431775);
    mallocSym_395508_431676 = x431776;
    char* x393124 = x393111;
    char* x393125 = strncpy(x431773, x393124, x393120);
    x425275 += 1;
    /* VAR */ char* x393127 = x425275;
    while(1) {
      
      char x393128 = *x425275;
      boolean_t x393129 = x393128!=('|');
      /* VAR */ boolean_t ite418809 = 0;
      if(x393129) {
        char x425319 = *x425275;
        boolean_t x425320 = x425319!=('\n');
        ite418809 = x425320;
      } else {
        
        ite418809 = 0;
      };
      boolean_t x415884 = ite418809;
      if (!(x415884)) break; 
      
      x425275 += 1;
    };
    char* x393135 = x393127;
    numeric_int_t x393136 = x425275 - x393135;
    numeric_int_t x393137 = x393136+(1);
    char* x431797 = (char*)malloc(x393137 * sizeof(char));
    memset(x431797, 0, x393137 * sizeof(char));
    long x431798 = mallocSym_395524_431675;
    long x431799 = (long){x393137};
    long x431800 = x431798+(x431799);
    mallocSym_395524_431675 = x431800;
    char* x393140 = x393127;
    char* x393141 = strncpy(x431797, x393140, x393136);
    x425275 += 1;
    /* VAR */ char* x393143 = x425275;
    while(1) {
      
      char x393144 = *x425275;
      boolean_t x393145 = x393144!=('|');
      /* VAR */ boolean_t ite418830 = 0;
      if(x393145) {
        char x425339 = *x425275;
        boolean_t x425340 = x425339!=('\n');
        ite418830 = x425340;
      } else {
        
        ite418830 = 0;
      };
      boolean_t x415898 = ite418830;
      if (!(x415898)) break; 
      
      x425275 += 1;
    };
    char* x393151 = x393143;
    numeric_int_t x393152 = x425275 - x393151;
    numeric_int_t x393153 = x393152+(1);
    char* x431821 = (char*)malloc(x393153 * sizeof(char));
    memset(x431821, 0, x393153 * sizeof(char));
    long x431822 = mallocSym_395540_431692;
    long x431823 = (long){x393153};
    long x431824 = x431822+(x431823);
    mallocSym_395540_431692 = x431824;
    char* x393156 = x393143;
    char* x393157 = strncpy(x431821, x393156, x393152);
    x425275 += 1;
    /* VAR */ char* x393159 = x425275;
    while(1) {
      
      char x393160 = *x425275;
      boolean_t x393161 = x393160!=('|');
      /* VAR */ boolean_t ite418851 = 0;
      if(x393161) {
        char x425359 = *x425275;
        boolean_t x425360 = x425359!=('\n');
        ite418851 = x425360;
      } else {
        
        ite418851 = 0;
      };
      boolean_t x415912 = ite418851;
      if (!(x415912)) break; 
      
      x425275 += 1;
    };
    char* x393167 = x393159;
    numeric_int_t x393168 = x425275 - x393167;
    numeric_int_t x393169 = x393168+(1);
    char* x431845 = (char*)malloc(x393169 * sizeof(char));
    memset(x431845, 0, x393169 * sizeof(char));
    long x431846 = mallocSym_395556_431678;
    long x431847 = (long){x393169};
    long x431848 = x431846+(x431847);
    mallocSym_395556_431678 = x431848;
    char* x393172 = x393159;
    char* x393173 = strncpy(x431845, x393172, x393168);
    x425275 += 1;
    /* VAR */ numeric_int_t x393175 = 0;
    numeric_int_t x393176 = x393175;
    numeric_int_t* x393177 = &x393176;
    char* x393178 = strntoi_unchecked(x425275, x393177);
    x425275 = x393178;
    /* VAR */ char* x393180 = x425275;
    while(1) {
      
      char x393181 = *x425275;
      boolean_t x393182 = x393181!=('|');
      /* VAR */ boolean_t ite418877 = 0;
      if(x393182) {
        char x425384 = *x425275;
        boolean_t x425385 = x425384!=('\n');
        ite418877 = x425385;
      } else {
        
        ite418877 = 0;
      };
      boolean_t x415931 = ite418877;
      if (!(x415931)) break; 
      
      x425275 += 1;
    };
    char* x393188 = x393180;
    numeric_int_t x393189 = x425275 - x393188;
    numeric_int_t x393190 = x393189+(1);
    char* x431874 = (char*)malloc(x393190 * sizeof(char));
    memset(x431874, 0, x393190 * sizeof(char));
    long x431875 = mallocSym_395577_431680;
    long x431876 = (long){x393190};
    long x431877 = x431875+(x431876);
    mallocSym_395577_431680 = x431877;
    char* x393193 = x393180;
    char* x393194 = strncpy(x431874, x393193, x393189);
    x425275 += 1;
    /* VAR */ double x393196 = 0.0;
    double x393197 = x393196;
    double* x393198 = &x393197;
    char* x393199 = strntod_unchecked(x425275, x393198);
    x425275 = x393199;
    /* VAR */ char* x393201 = x425275;
    while(1) {
      
      char x393202 = *x425275;
      boolean_t x393203 = x393202!=('|');
      /* VAR */ boolean_t ite418903 = 0;
      if(x393203) {
        char x425409 = *x425275;
        boolean_t x425410 = x425409!=('\n');
        ite418903 = x425410;
      } else {
        
        ite418903 = 0;
      };
      boolean_t x415950 = ite418903;
      if (!(x415950)) break; 
      
      x425275 += 1;
    };
    char* x393209 = x393201;
    numeric_int_t x393210 = x425275 - x393209;
    numeric_int_t x393211 = x393210+(1);
    char* x431903 = (char*)malloc(x393211 * sizeof(char));
    memset(x431903, 0, x393211 * sizeof(char));
    long x431904 = mallocSym_395598_431664;
    long x431905 = (long){x393211};
    long x431906 = x431904+(x431905);
    mallocSym_395598_431664 = x431906;
    char* x393214 = x393201;
    char* x393215 = strncpy(x431903, x393214, x393210);
    x425275 += 1;
    struct PARTRecord* x431911 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x431911, 0, 1 * sizeof(struct PARTRecord));
    long x431912 = mallocSym_396835_431670;
    long x431913 = (long){1};
    long x431914 = x431912+(x431913);
    mallocSym_396835_431670 = x431914;
    x431911->P_PARTKEY = x393107; x431911->P_NAME = x431773;
    numeric_int_t x376297 = x425276;
    struct PARTRecord x395605 = *x431911;
    *(x431724 + x376297) = x395605;
    struct PARTRecord* x395607 = &(x431724[x376297]);
    x431911 = x395607;
    numeric_int_t x376299 = x425276;
    numeric_int_t x376300 = x376299+(1);
    x425276 = x376300;
  };
  FILE* x425434 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ numeric_int_t x425435 = 0;
  numeric_int_t x425436 = x425435;
  numeric_int_t* x425437 = &x425436;
  numeric_int_t x425438 = fscanf(x425434, "%d", x425437);
  pclose(x425434);
  struct NATIONRecord* x431932 = (struct NATIONRecord*)malloc(x425436 * sizeof(struct NATIONRecord));
  memset(x431932, 0, x425436 * sizeof(struct NATIONRecord));
  long x431933 = mallocSym_425440_431687;
  long x431934 = (long){x425436};
  long x431935 = x431933+(x431934);
  mallocSym_425440_431687 = x431935;
  numeric_int_t x425441 = O_RDONLY;
  numeric_int_t x425442 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x425441);
  /* VAR */ struct stat x425443 = x425267;
  struct stat x425444 = x425443;
  struct stat* x425445 = &x425444;
  numeric_int_t x425446 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x425445);
  size_t x425447 = x425445->st_size;
  numeric_int_t x425448 = PROT_READ;
  numeric_int_t x425449 = MAP_PRIVATE;
  char* x425450 = mmap(NULL, x425447, x425448, x425449, x425442, 0);
  /* VAR */ numeric_int_t x425451 = 0;
  while(1) {
    
    numeric_int_t x376307 = x425451;
    boolean_t x376308 = x376307<(x425436);
    /* VAR */ boolean_t ite418952 = 0;
    if(x376308) {
      char x425457 = *x425450;
      boolean_t x425458 = x425457!=('\0');
      ite418952 = x425458;
    } else {
      
      ite418952 = 0;
    };
    boolean_t x415992 = ite418952;
    if (!(x415992)) break; 
    
    /* VAR */ numeric_int_t x393247 = 0;
    numeric_int_t x393248 = x393247;
    numeric_int_t* x393249 = &x393248;
    char* x393250 = strntoi_unchecked(x425450, x393249);
    x425450 = x393250;
    /* VAR */ char* x393252 = x425450;
    while(1) {
      
      char x393253 = *x425450;
      boolean_t x393254 = x393253!=('|');
      /* VAR */ boolean_t ite418970 = 0;
      if(x393254) {
        char x425474 = *x425450;
        boolean_t x425475 = x425474!=('\n');
        ite418970 = x425475;
      } else {
        
        ite418970 = 0;
      };
      boolean_t x416003 = ite418970;
      if (!(x416003)) break; 
      
      x425450 += 1;
    };
    char* x393260 = x393252;
    numeric_int_t x393261 = x425450 - x393260;
    numeric_int_t x393262 = x393261+(1);
    char* x431980 = (char*)malloc(x393262 * sizeof(char));
    memset(x431980, 0, x393262 * sizeof(char));
    long x431981 = mallocSym_395652_431651;
    long x431982 = (long){x393262};
    long x431983 = x431981+(x431982);
    mallocSym_395652_431651 = x431983;
    char* x393265 = x393252;
    char* x393266 = strncpy(x431980, x393265, x393261);
    x425450 += 1;
    /* VAR */ numeric_int_t x393268 = 0;
    numeric_int_t x393269 = x393268;
    numeric_int_t* x393270 = &x393269;
    char* x393271 = strntoi_unchecked(x425450, x393270);
    x425450 = x393271;
    /* VAR */ char* x393273 = x425450;
    while(1) {
      
      char x393274 = *x425450;
      boolean_t x393275 = x393274!=('|');
      /* VAR */ boolean_t ite418996 = 0;
      if(x393275) {
        char x425499 = *x425450;
        boolean_t x425500 = x425499!=('\n');
        ite418996 = x425500;
      } else {
        
        ite418996 = 0;
      };
      boolean_t x416022 = ite418996;
      if (!(x416022)) break; 
      
      x425450 += 1;
    };
    char* x393281 = x393273;
    numeric_int_t x393282 = x425450 - x393281;
    numeric_int_t x393283 = x393282+(1);
    char* x432009 = (char*)malloc(x393283 * sizeof(char));
    memset(x432009, 0, x393283 * sizeof(char));
    long x432010 = mallocSym_395673_431660;
    long x432011 = (long){x393283};
    long x432012 = x432010+(x432011);
    mallocSym_395673_431660 = x432012;
    char* x393286 = x393273;
    char* x393287 = strncpy(x432009, x393286, x393282);
    x425450 += 1;
    void* x399414 = &(x431980);
    GArray* x399415 = g_array_append_vals(x399197, x399414, 1);
    numeric_int_t x388683 = x388639;
    boolean_t x388684 = x388683>(4096);
    if(x388684) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "N_NAME", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "N_NAME");
    };
    /* VAR */ numeric_int_t x399421 = -1;
    numeric_int_t x399422 = x399195->len;
    numeric_int_t x411418 = 0;
    for(; x411418 < x399422 ; x411418 += 1) {
      
      char* x411419 = g_array_index(x399195, char*, x411418);
      boolean_t x411420 = strcmp(x411419, x431980);
      boolean_t x411421 = !(x411420);
      if(x411421) {
        x399421 = x411418;
        break;
      };
    };
    numeric_int_t x399432 = x399421;
    boolean_t x399433 = x399432!=(-1);
    boolean_t x388689 = !(x399433);
    if(x388689) {
      numeric_int_t x388690 = x388639;
      numeric_int_t x388691 = x388690+(1);
      x388639 = x388691;
      void* x399439 = &(x431980);
      GArray* x399440 = g_array_append_vals(x399195, x399439, 1);
    };
    /* VAR */ numeric_int_t x399441 = -1;
    numeric_int_t x399442 = x399195->len;
    numeric_int_t x411445 = 0;
    for(; x411445 < x399442 ; x411445 += 1) {
      
      char* x411446 = g_array_index(x399195, char*, x411445);
      boolean_t x411447 = strcmp(x411446, x431980);
      boolean_t x411448 = !(x411447);
      if(x411448) {
        x399441 = x411445;
        break;
      };
    };
    numeric_int_t x399452 = x399441;
    struct NATIONRecord* x432068 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x432068, 0, 1 * sizeof(struct NATIONRecord));
    long x432069 = mallocSym_396926_431649;
    long x432070 = (long){1};
    long x432071 = x432069+(x432070);
    mallocSym_396926_431649 = x432071;
    x432068->N_NATIONKEY = x393248; x432068->N_NAME = x399452;
    numeric_int_t x376316 = x425451;
    struct NATIONRecord x395694 = *x432068;
    *(x431932 + x376316) = x395694;
    struct NATIONRecord* x395696 = &(x431932[x376316]);
    x432068 = x395696;
    numeric_int_t x376318 = x425451;
    numeric_int_t x376319 = x376318+(1);
    x425451 = x376319;
  };
  FILE* x425575 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ numeric_int_t x425576 = 0;
  numeric_int_t x425577 = x425576;
  numeric_int_t* x425578 = &x425577;
  numeric_int_t x425579 = fscanf(x425575, "%d", x425578);
  pclose(x425575);
  struct ORDERSRecord* x432089 = (struct ORDERSRecord*)malloc(x425577 * sizeof(struct ORDERSRecord));
  memset(x432089, 0, x425577 * sizeof(struct ORDERSRecord));
  long x432090 = mallocSym_425581_431700;
  long x432091 = (long){x425577};
  long x432092 = x432090+(x432091);
  mallocSym_425581_431700 = x432092;
  numeric_int_t x425582 = O_RDONLY;
  numeric_int_t x425583 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x425582);
  /* VAR */ struct stat x425584 = x425267;
  struct stat x425585 = x425584;
  struct stat* x425586 = &x425585;
  numeric_int_t x425587 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x425586);
  size_t x425588 = x425586->st_size;
  numeric_int_t x425589 = PROT_READ;
  numeric_int_t x425590 = MAP_PRIVATE;
  char* x425591 = mmap(NULL, x425588, x425589, x425590, x425583, 0);
  /* VAR */ numeric_int_t x425592 = 0;
  while(1) {
    
    numeric_int_t x376326 = x425592;
    boolean_t x376327 = x376326<(x425577);
    /* VAR */ boolean_t ite419096 = 0;
    if(x376327) {
      char x425598 = *x425591;
      boolean_t x425599 = x425598!=('\0');
      ite419096 = x425599;
    } else {
      
      ite419096 = 0;
    };
    boolean_t x416115 = ite419096;
    if (!(x416115)) break; 
    
    /* VAR */ numeric_int_t x393333 = 0;
    numeric_int_t x393334 = x393333;
    numeric_int_t* x393335 = &x393334;
    char* x393336 = strntoi_unchecked(x425591, x393335);
    x425591 = x393336;
    /* VAR */ numeric_int_t x393338 = 0;
    numeric_int_t x393339 = x393338;
    numeric_int_t* x393340 = &x393339;
    char* x393341 = strntoi_unchecked(x425591, x393340);
    x425591 = x393341;
    char x393343 = *x425591;
    /* VAR */ char x393344 = x393343;
    x425591 += 1;
    x425591 += 1;
    /* VAR */ double x393348 = 0.0;
    double x393349 = x393348;
    double* x393350 = &x393349;
    char* x393351 = strntod_unchecked(x425591, x393350);
    x425591 = x393351;
    /* VAR */ numeric_int_t x393353 = 0;
    numeric_int_t x393354 = x393353;
    numeric_int_t* x393355 = &x393354;
    char* x393356 = strntoi_unchecked(x425591, x393355);
    x425591 = x393356;
    /* VAR */ numeric_int_t x393358 = 0;
    numeric_int_t x393359 = x393358;
    numeric_int_t* x393360 = &x393359;
    char* x393361 = strntoi_unchecked(x425591, x393360);
    x425591 = x393361;
    /* VAR */ numeric_int_t x393363 = 0;
    numeric_int_t x393364 = x393363;
    numeric_int_t* x393365 = &x393364;
    char* x393366 = strntoi_unchecked(x425591, x393365);
    x425591 = x393366;
    numeric_int_t x393368 = x393354*(10000);
    numeric_int_t x393369 = x393359*(100);
    numeric_int_t x393370 = x393368+(x393369);
    numeric_int_t x393371 = x393370+(x393364);
    /* VAR */ char* x393372 = x425591;
    while(1) {
      
      char x393373 = *x425591;
      boolean_t x393374 = x393373!=('|');
      /* VAR */ boolean_t ite419148 = 0;
      if(x393374) {
        char x425649 = *x425591;
        boolean_t x425650 = x425649!=('\n');
        ite419148 = x425650;
      } else {
        
        ite419148 = 0;
      };
      boolean_t x416160 = ite419148;
      if (!(x416160)) break; 
      
      x425591 += 1;
    };
    char* x393380 = x393372;
    numeric_int_t x393381 = x425591 - x393380;
    numeric_int_t x393382 = x393381+(1);
    char* x432171 = (char*)malloc(x393382 * sizeof(char));
    memset(x432171, 0, x393382 * sizeof(char));
    long x432172 = mallocSym_395775_431693;
    long x432173 = (long){x393382};
    long x432174 = x432172+(x432173);
    mallocSym_395775_431693 = x432174;
    char* x393385 = x393372;
    char* x393386 = strncpy(x432171, x393385, x393381);
    x425591 += 1;
    /* VAR */ char* x393388 = x425591;
    while(1) {
      
      char x393389 = *x425591;
      boolean_t x393390 = x393389!=('|');
      /* VAR */ boolean_t ite419169 = 0;
      if(x393390) {
        char x425669 = *x425591;
        boolean_t x425670 = x425669!=('\n');
        ite419169 = x425670;
      } else {
        
        ite419169 = 0;
      };
      boolean_t x416174 = ite419169;
      if (!(x416174)) break; 
      
      x425591 += 1;
    };
    char* x393396 = x393388;
    numeric_int_t x393397 = x425591 - x393396;
    numeric_int_t x393398 = x393397+(1);
    char* x432195 = (char*)malloc(x393398 * sizeof(char));
    memset(x432195, 0, x393398 * sizeof(char));
    long x432196 = mallocSym_395791_431669;
    long x432197 = (long){x393398};
    long x432198 = x432196+(x432197);
    mallocSym_395791_431669 = x432198;
    char* x393401 = x393388;
    char* x393402 = strncpy(x432195, x393401, x393397);
    x425591 += 1;
    /* VAR */ numeric_int_t x393404 = 0;
    numeric_int_t x393405 = x393404;
    numeric_int_t* x393406 = &x393405;
    char* x393407 = strntoi_unchecked(x425591, x393406);
    x425591 = x393407;
    /* VAR */ char* x393409 = x425591;
    while(1) {
      
      char x393410 = *x425591;
      boolean_t x393411 = x393410!=('|');
      /* VAR */ boolean_t ite419195 = 0;
      if(x393411) {
        char x425694 = *x425591;
        boolean_t x425695 = x425694!=('\n');
        ite419195 = x425695;
      } else {
        
        ite419195 = 0;
      };
      boolean_t x416193 = ite419195;
      if (!(x416193)) break; 
      
      x425591 += 1;
    };
    char* x393417 = x393409;
    numeric_int_t x393418 = x425591 - x393417;
    numeric_int_t x393419 = x393418+(1);
    char* x432224 = (char*)malloc(x393419 * sizeof(char));
    memset(x432224, 0, x393419 * sizeof(char));
    long x432225 = mallocSym_395812_431701;
    long x432226 = (long){x393419};
    long x432227 = x432225+(x432226);
    mallocSym_395812_431701 = x432227;
    char* x393422 = x393409;
    char* x393423 = strncpy(x432224, x393422, x393418);
    x425591 += 1;
    struct ORDERSRecord* x432232 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x432232, 0, 1 * sizeof(struct ORDERSRecord));
    long x432233 = mallocSym_397053_431703;
    long x432234 = (long){1};
    long x432235 = x432233+(x432234);
    mallocSym_397053_431703 = x432235;
    x432232->O_ORDERKEY = x393334; x432232->O_ORDERDATE = x393371;
    numeric_int_t x376340 = x425592;
    struct ORDERSRecord x395819 = *x432232;
    *(x432089 + x376340) = x395819;
    struct ORDERSRecord* x395821 = &(x432089[x376340]);
    x432232 = x395821;
    numeric_int_t x376342 = x425592;
    numeric_int_t x376343 = x376342+(1);
    x425592 = x376343;
  };
  FILE* x425719 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ numeric_int_t x425720 = 0;
  numeric_int_t x425721 = x425720;
  numeric_int_t* x425722 = &x425721;
  numeric_int_t x425723 = fscanf(x425719, "%d", x425722);
  pclose(x425719);
  struct PARTSUPPRecord* x432253 = (struct PARTSUPPRecord*)malloc(x425721 * sizeof(struct PARTSUPPRecord));
  memset(x432253, 0, x425721 * sizeof(struct PARTSUPPRecord));
  long x432254 = mallocSym_425725_431657;
  long x432255 = (long){x425721};
  long x432256 = x432254+(x432255);
  mallocSym_425725_431657 = x432256;
  numeric_int_t x425726 = O_RDONLY;
  numeric_int_t x425727 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x425726);
  /* VAR */ struct stat x425728 = x425267;
  struct stat x425729 = x425728;
  struct stat* x425730 = &x425729;
  numeric_int_t x425731 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x425730);
  size_t x425732 = x425730->st_size;
  numeric_int_t x425733 = PROT_READ;
  numeric_int_t x425734 = MAP_PRIVATE;
  char* x425735 = mmap(NULL, x425732, x425733, x425734, x425727, 0);
  /* VAR */ numeric_int_t x425736 = 0;
  while(1) {
    
    numeric_int_t x376350 = x425736;
    boolean_t x376351 = x376350<(x425721);
    /* VAR */ boolean_t ite419244 = 0;
    if(x376351) {
      char x425742 = *x425735;
      boolean_t x425743 = x425742!=('\0');
      ite419244 = x425743;
    } else {
      
      ite419244 = 0;
    };
    boolean_t x416235 = ite419244;
    if (!(x416235)) break; 
    
    /* VAR */ numeric_int_t x393455 = 0;
    numeric_int_t x393456 = x393455;
    numeric_int_t* x393457 = &x393456;
    char* x393458 = strntoi_unchecked(x425735, x393457);
    x425735 = x393458;
    /* VAR */ numeric_int_t x393460 = 0;
    numeric_int_t x393461 = x393460;
    numeric_int_t* x393462 = &x393461;
    char* x393463 = strntoi_unchecked(x425735, x393462);
    x425735 = x393463;
    /* VAR */ numeric_int_t x393465 = 0;
    numeric_int_t x393466 = x393465;
    numeric_int_t* x393467 = &x393466;
    char* x393468 = strntoi_unchecked(x425735, x393467);
    x425735 = x393468;
    /* VAR */ double x393470 = 0.0;
    double x393471 = x393470;
    double* x393472 = &x393471;
    char* x393473 = strntod_unchecked(x425735, x393472);
    x425735 = x393473;
    /* VAR */ char* x393475 = x425735;
    while(1) {
      
      char x393476 = *x425735;
      boolean_t x393477 = x393476!=('|');
      /* VAR */ boolean_t ite419277 = 0;
      if(x393477) {
        char x425774 = *x425735;
        boolean_t x425775 = x425774!=('\n');
        ite419277 = x425775;
      } else {
        
        ite419277 = 0;
      };
      boolean_t x416261 = ite419277;
      if (!(x416261)) break; 
      
      x425735 += 1;
    };
    char* x393483 = x393475;
    numeric_int_t x393484 = x425735 - x393483;
    numeric_int_t x393485 = x393484+(1);
    char* x432316 = (char*)malloc(x393485 * sizeof(char));
    memset(x432316, 0, x393485 * sizeof(char));
    long x432317 = mallocSym_395881_431698;
    long x432318 = (long){x393485};
    long x432319 = x432317+(x432318);
    mallocSym_395881_431698 = x432319;
    char* x393488 = x393475;
    char* x393489 = strncpy(x432316, x393488, x393484);
    x425735 += 1;
    struct PARTSUPPRecord* x432324 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x432324, 0, 1 * sizeof(struct PARTSUPPRecord));
    long x432325 = mallocSym_397124_431679;
    long x432326 = (long){1};
    long x432327 = x432325+(x432326);
    mallocSym_397124_431679 = x432327;
    x432324->PS_PARTKEY = x393456; x432324->PS_SUPPKEY = x393461; x432324->PS_SUPPLYCOST = x393471;
    numeric_int_t x376360 = x425736;
    struct PARTSUPPRecord x395888 = *x432324;
    *(x432253 + x376360) = x395888;
    struct PARTSUPPRecord* x395890 = &(x432253[x376360]);
    x432324 = x395890;
    numeric_int_t x376362 = x425736;
    numeric_int_t x376363 = x376362+(1);
    x425736 = x376363;
  };
  FILE* x425799 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ numeric_int_t x425800 = 0;
  numeric_int_t x425801 = x425800;
  numeric_int_t* x425802 = &x425801;
  numeric_int_t x425803 = fscanf(x425799, "%d", x425802);
  pclose(x425799);
  struct SUPPLIERRecord* x432345 = (struct SUPPLIERRecord*)malloc(x425801 * sizeof(struct SUPPLIERRecord));
  memset(x432345, 0, x425801 * sizeof(struct SUPPLIERRecord));
  long x432346 = mallocSym_425805_431705;
  long x432347 = (long){x425801};
  long x432348 = x432346+(x432347);
  mallocSym_425805_431705 = x432348;
  numeric_int_t x425806 = O_RDONLY;
  numeric_int_t x425807 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x425806);
  /* VAR */ struct stat x425808 = x425267;
  struct stat x425809 = x425808;
  struct stat* x425810 = &x425809;
  numeric_int_t x425811 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x425810);
  size_t x425812 = x425810->st_size;
  numeric_int_t x425813 = PROT_READ;
  numeric_int_t x425814 = MAP_PRIVATE;
  char* x425815 = mmap(NULL, x425812, x425813, x425814, x425807, 0);
  /* VAR */ numeric_int_t x425816 = 0;
  while(1) {
    
    numeric_int_t x376370 = x425816;
    boolean_t x376371 = x376370<(x425801);
    /* VAR */ boolean_t ite419326 = 0;
    if(x376371) {
      char x425822 = *x425815;
      boolean_t x425823 = x425822!=('\0');
      ite419326 = x425823;
    } else {
      
      ite419326 = 0;
    };
    boolean_t x416303 = ite419326;
    if (!(x416303)) break; 
    
    /* VAR */ numeric_int_t x393521 = 0;
    numeric_int_t x393522 = x393521;
    numeric_int_t* x393523 = &x393522;
    char* x393524 = strntoi_unchecked(x425815, x393523);
    x425815 = x393524;
    /* VAR */ char* x393526 = x425815;
    while(1) {
      
      char x393527 = *x425815;
      boolean_t x393528 = x393527!=('|');
      /* VAR */ boolean_t ite419344 = 0;
      if(x393528) {
        char x425839 = *x425815;
        boolean_t x425840 = x425839!=('\n');
        ite419344 = x425840;
      } else {
        
        ite419344 = 0;
      };
      boolean_t x416314 = ite419344;
      if (!(x416314)) break; 
      
      x425815 += 1;
    };
    char* x393534 = x393526;
    numeric_int_t x393535 = x425815 - x393534;
    numeric_int_t x393536 = x393535+(1);
    char* x432393 = (char*)malloc(x393536 * sizeof(char));
    memset(x432393, 0, x393536 * sizeof(char));
    long x432394 = mallocSym_395935_431650;
    long x432395 = (long){x393536};
    long x432396 = x432394+(x432395);
    mallocSym_395935_431650 = x432396;
    char* x393539 = x393526;
    char* x393540 = strncpy(x432393, x393539, x393535);
    x425815 += 1;
    /* VAR */ char* x393542 = x425815;
    while(1) {
      
      char x393543 = *x425815;
      boolean_t x393544 = x393543!=('|');
      /* VAR */ boolean_t ite419365 = 0;
      if(x393544) {
        char x425859 = *x425815;
        boolean_t x425860 = x425859!=('\n');
        ite419365 = x425860;
      } else {
        
        ite419365 = 0;
      };
      boolean_t x416328 = ite419365;
      if (!(x416328)) break; 
      
      x425815 += 1;
    };
    char* x393550 = x393542;
    numeric_int_t x393551 = x425815 - x393550;
    numeric_int_t x393552 = x393551+(1);
    char* x432417 = (char*)malloc(x393552 * sizeof(char));
    memset(x432417, 0, x393552 * sizeof(char));
    long x432418 = mallocSym_395951_431677;
    long x432419 = (long){x393552};
    long x432420 = x432418+(x432419);
    mallocSym_395951_431677 = x432420;
    char* x393555 = x393542;
    char* x393556 = strncpy(x432417, x393555, x393551);
    x425815 += 1;
    /* VAR */ numeric_int_t x393558 = 0;
    numeric_int_t x393559 = x393558;
    numeric_int_t* x393560 = &x393559;
    char* x393561 = strntoi_unchecked(x425815, x393560);
    x425815 = x393561;
    /* VAR */ char* x393563 = x425815;
    while(1) {
      
      char x393564 = *x425815;
      boolean_t x393565 = x393564!=('|');
      /* VAR */ boolean_t ite419391 = 0;
      if(x393565) {
        char x425884 = *x425815;
        boolean_t x425885 = x425884!=('\n');
        ite419391 = x425885;
      } else {
        
        ite419391 = 0;
      };
      boolean_t x416347 = ite419391;
      if (!(x416347)) break; 
      
      x425815 += 1;
    };
    char* x393571 = x393563;
    numeric_int_t x393572 = x425815 - x393571;
    numeric_int_t x393573 = x393572+(1);
    char* x432446 = (char*)malloc(x393573 * sizeof(char));
    memset(x432446, 0, x393573 * sizeof(char));
    long x432447 = mallocSym_395972_431658;
    long x432448 = (long){x393573};
    long x432449 = x432447+(x432448);
    mallocSym_395972_431658 = x432449;
    char* x393576 = x393563;
    char* x393577 = strncpy(x432446, x393576, x393572);
    x425815 += 1;
    /* VAR */ double x393579 = 0.0;
    double x393580 = x393579;
    double* x393581 = &x393580;
    char* x393582 = strntod_unchecked(x425815, x393581);
    x425815 = x393582;
    /* VAR */ char* x393584 = x425815;
    while(1) {
      
      char x393585 = *x425815;
      boolean_t x393586 = x393585!=('|');
      /* VAR */ boolean_t ite419417 = 0;
      if(x393586) {
        char x425909 = *x425815;
        boolean_t x425910 = x425909!=('\n');
        ite419417 = x425910;
      } else {
        
        ite419417 = 0;
      };
      boolean_t x416366 = ite419417;
      if (!(x416366)) break; 
      
      x425815 += 1;
    };
    char* x393592 = x393584;
    numeric_int_t x393593 = x425815 - x393592;
    numeric_int_t x393594 = x393593+(1);
    char* x432475 = (char*)malloc(x393594 * sizeof(char));
    memset(x432475, 0, x393594 * sizeof(char));
    long x432476 = mallocSym_395993_431689;
    long x432477 = (long){x393594};
    long x432478 = x432476+(x432477);
    mallocSym_395993_431689 = x432478;
    char* x393597 = x393584;
    char* x393598 = strncpy(x432475, x393597, x393593);
    x425815 += 1;
    struct SUPPLIERRecord* x432483 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x432483, 0, 1 * sizeof(struct SUPPLIERRecord));
    long x432484 = mallocSym_397238_431685;
    long x432485 = (long){1};
    long x432486 = x432484+(x432485);
    mallocSym_397238_431685 = x432486;
    x432483->S_SUPPKEY = x393522; x432483->S_NATIONKEY = x393559;
    numeric_int_t x376382 = x425816;
    struct SUPPLIERRecord x396000 = *x432483;
    *(x432345 + x376382) = x396000;
    struct SUPPLIERRecord* x396002 = &(x432345[x376382]);
    x432483 = x396002;
    numeric_int_t x376384 = x425816;
    numeric_int_t x376385 = x376384+(1);
    x425816 = x376385;
  };
  FILE* x425934 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x425935 = 0;
  numeric_int_t x425936 = x425935;
  numeric_int_t* x425937 = &x425936;
  numeric_int_t x425938 = fscanf(x425934, "%d", x425937);
  pclose(x425934);
  struct LINEITEMRecord* x432504 = (struct LINEITEMRecord*)malloc(x425936 * sizeof(struct LINEITEMRecord));
  memset(x432504, 0, x425936 * sizeof(struct LINEITEMRecord));
  long x432505 = mallocSym_425940_431694;
  long x432506 = (long){x425936};
  long x432507 = x432505+(x432506);
  mallocSym_425940_431694 = x432507;
  numeric_int_t x425941 = O_RDONLY;
  numeric_int_t x425942 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x425941);
  /* VAR */ struct stat x425943 = x425267;
  struct stat x425944 = x425943;
  struct stat* x425945 = &x425944;
  numeric_int_t x425946 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x425945);
  size_t x425947 = x425945->st_size;
  numeric_int_t x425948 = PROT_READ;
  numeric_int_t x425949 = MAP_PRIVATE;
  char* x425950 = mmap(NULL, x425947, x425948, x425949, x425942, 0);
  /* VAR */ numeric_int_t x425951 = 0;
  while(1) {
    
    numeric_int_t x376392 = x425951;
    boolean_t x376393 = x376392<(x425936);
    /* VAR */ boolean_t ite419466 = 0;
    if(x376393) {
      char x425957 = *x425950;
      boolean_t x425958 = x425957!=('\0');
      ite419466 = x425958;
    } else {
      
      ite419466 = 0;
    };
    boolean_t x416408 = ite419466;
    if (!(x416408)) break; 
    
    /* VAR */ numeric_int_t x393630 = 0;
    numeric_int_t x393631 = x393630;
    numeric_int_t* x393632 = &x393631;
    char* x393633 = strntoi_unchecked(x425950, x393632);
    x425950 = x393633;
    /* VAR */ numeric_int_t x393635 = 0;
    numeric_int_t x393636 = x393635;
    numeric_int_t* x393637 = &x393636;
    char* x393638 = strntoi_unchecked(x425950, x393637);
    x425950 = x393638;
    /* VAR */ numeric_int_t x393640 = 0;
    numeric_int_t x393641 = x393640;
    numeric_int_t* x393642 = &x393641;
    char* x393643 = strntoi_unchecked(x425950, x393642);
    x425950 = x393643;
    /* VAR */ numeric_int_t x393645 = 0;
    numeric_int_t x393646 = x393645;
    numeric_int_t* x393647 = &x393646;
    char* x393648 = strntoi_unchecked(x425950, x393647);
    x425950 = x393648;
    /* VAR */ double x393650 = 0.0;
    double x393651 = x393650;
    double* x393652 = &x393651;
    char* x393653 = strntod_unchecked(x425950, x393652);
    x425950 = x393653;
    /* VAR */ double x393655 = 0.0;
    double x393656 = x393655;
    double* x393657 = &x393656;
    char* x393658 = strntod_unchecked(x425950, x393657);
    x425950 = x393658;
    /* VAR */ double x393660 = 0.0;
    double x393661 = x393660;
    double* x393662 = &x393661;
    char* x393663 = strntod_unchecked(x425950, x393662);
    x425950 = x393663;
    /* VAR */ double x393665 = 0.0;
    double x393666 = x393665;
    double* x393667 = &x393666;
    char* x393668 = strntod_unchecked(x425950, x393667);
    x425950 = x393668;
    char x393670 = *x425950;
    /* VAR */ char x393671 = x393670;
    x425950 += 1;
    x425950 += 1;
    char x393675 = *x425950;
    /* VAR */ char x393676 = x393675;
    x425950 += 1;
    x425950 += 1;
    /* VAR */ numeric_int_t x393680 = 0;
    numeric_int_t x393681 = x393680;
    numeric_int_t* x393682 = &x393681;
    char* x393683 = strntoi_unchecked(x425950, x393682);
    x425950 = x393683;
    /* VAR */ numeric_int_t x393685 = 0;
    numeric_int_t x393686 = x393685;
    numeric_int_t* x393687 = &x393686;
    char* x393688 = strntoi_unchecked(x425950, x393687);
    x425950 = x393688;
    /* VAR */ numeric_int_t x393690 = 0;
    numeric_int_t x393691 = x393690;
    numeric_int_t* x393692 = &x393691;
    char* x393693 = strntoi_unchecked(x425950, x393692);
    x425950 = x393693;
    /* VAR */ numeric_int_t x393699 = 0;
    numeric_int_t x393700 = x393699;
    numeric_int_t* x393701 = &x393700;
    char* x393702 = strntoi_unchecked(x425950, x393701);
    x425950 = x393702;
    /* VAR */ numeric_int_t x393704 = 0;
    numeric_int_t x393705 = x393704;
    numeric_int_t* x393706 = &x393705;
    char* x393707 = strntoi_unchecked(x425950, x393706);
    x425950 = x393707;
    /* VAR */ numeric_int_t x393709 = 0;
    numeric_int_t x393710 = x393709;
    numeric_int_t* x393711 = &x393710;
    char* x393712 = strntoi_unchecked(x425950, x393711);
    x425950 = x393712;
    /* VAR */ numeric_int_t x393718 = 0;
    numeric_int_t x393719 = x393718;
    numeric_int_t* x393720 = &x393719;
    char* x393721 = strntoi_unchecked(x425950, x393720);
    x425950 = x393721;
    /* VAR */ numeric_int_t x393723 = 0;
    numeric_int_t x393724 = x393723;
    numeric_int_t* x393725 = &x393724;
    char* x393726 = strntoi_unchecked(x425950, x393725);
    x425950 = x393726;
    /* VAR */ numeric_int_t x393728 = 0;
    numeric_int_t x393729 = x393728;
    numeric_int_t* x393730 = &x393729;
    char* x393731 = strntoi_unchecked(x425950, x393730);
    x425950 = x393731;
    /* VAR */ char* x393737 = x425950;
    while(1) {
      
      char x393738 = *x425950;
      boolean_t x393739 = x393738!=('|');
      /* VAR */ boolean_t ite419586 = 0;
      if(x393739) {
        char x426076 = *x425950;
        boolean_t x426077 = x426076!=('\n');
        ite419586 = x426077;
      } else {
        
        ite419586 = 0;
      };
      boolean_t x416521 = ite419586;
      if (!(x416521)) break; 
      
      x425950 += 1;
    };
    char* x393745 = x393737;
    numeric_int_t x393746 = x425950 - x393745;
    numeric_int_t x393747 = x393746+(1);
    char* x432654 = (char*)malloc(x393747 * sizeof(char));
    memset(x432654, 0, x393747 * sizeof(char));
    long x432655 = mallocSym_396149_431674;
    long x432656 = (long){x393747};
    long x432657 = x432655+(x432656);
    mallocSym_396149_431674 = x432657;
    char* x393750 = x393737;
    char* x393751 = strncpy(x432654, x393750, x393746);
    x425950 += 1;
    /* VAR */ char* x393753 = x425950;
    while(1) {
      
      char x393754 = *x425950;
      boolean_t x393755 = x393754!=('|');
      /* VAR */ boolean_t ite419607 = 0;
      if(x393755) {
        char x426096 = *x425950;
        boolean_t x426097 = x426096!=('\n');
        ite419607 = x426097;
      } else {
        
        ite419607 = 0;
      };
      boolean_t x416535 = ite419607;
      if (!(x416535)) break; 
      
      x425950 += 1;
    };
    char* x393761 = x393753;
    numeric_int_t x393762 = x425950 - x393761;
    numeric_int_t x393763 = x393762+(1);
    char* x432678 = (char*)malloc(x393763 * sizeof(char));
    memset(x432678, 0, x393763 * sizeof(char));
    long x432679 = mallocSym_396165_431686;
    long x432680 = (long){x393763};
    long x432681 = x432679+(x432680);
    mallocSym_396165_431686 = x432681;
    char* x393766 = x393753;
    char* x393767 = strncpy(x432678, x393766, x393762);
    x425950 += 1;
    /* VAR */ char* x393769 = x425950;
    while(1) {
      
      char x393770 = *x425950;
      boolean_t x393771 = x393770!=('|');
      /* VAR */ boolean_t ite419628 = 0;
      if(x393771) {
        char x426116 = *x425950;
        boolean_t x426117 = x426116!=('\n');
        ite419628 = x426117;
      } else {
        
        ite419628 = 0;
      };
      boolean_t x416549 = ite419628;
      if (!(x416549)) break; 
      
      x425950 += 1;
    };
    char* x393777 = x393769;
    numeric_int_t x393778 = x425950 - x393777;
    numeric_int_t x393779 = x393778+(1);
    char* x432702 = (char*)malloc(x393779 * sizeof(char));
    memset(x432702, 0, x393779 * sizeof(char));
    long x432703 = mallocSym_396181_431661;
    long x432704 = (long){x393779};
    long x432705 = x432703+(x432704);
    mallocSym_396181_431661 = x432705;
    char* x393782 = x393769;
    char* x393783 = strncpy(x432702, x393782, x393778);
    x425950 += 1;
    struct LINEITEMRecord* x432710 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x432710, 0, 1 * sizeof(struct LINEITEMRecord));
    long x432711 = mallocSym_397428_431662;
    long x432712 = (long){1};
    long x432713 = x432711+(x432712);
    mallocSym_397428_431662 = x432713;
    x432710->L_ORDERKEY = x393631; x432710->L_PARTKEY = x393636; x432710->L_SUPPKEY = x393641; x432710->L_QUANTITY = x393651; x432710->L_EXTENDEDPRICE = x393656; x432710->L_DISCOUNT = x393661;
    numeric_int_t x376413 = x425951;
    struct LINEITEMRecord x396188 = *x432710;
    *(x432504 + x376413) = x396188;
    struct LINEITEMRecord* x396190 = &(x432504[x376413]);
    x432710 = x396190;
    numeric_int_t x376415 = x425951;
    numeric_int_t x376416 = x376415+(1);
    x425951 = x376416;
  };
  numeric_int_t x376420 = 0;
  for(; x376420 < 1 ; x376420 += 1) {
    
    /* VAR */ numeric_int_t x427297 = 0;
    struct Set_AGGRecord_Q9GRPRecord* x433951 = (struct Set_AGGRecord_Q9GRPRecord*)malloc(1048576 * sizeof(struct Set_AGGRecord_Q9GRPRecord));
    memset(x433951, 0, 1048576 * sizeof(struct Set_AGGRecord_Q9GRPRecord));
    long x433952 = mallocSym_427298_431652;
    long x433953 = (long){1048576};
    long x433954 = x433952+(x433953);
    mallocSym_427298_431652 = x433954;
    numeric_int_t x411970 = 0;
    for(; x411970 < 1048576 ; x411970 += 1) {
      
      struct AGGRecord_Q9GRPRecord* x433975 = (struct AGGRecord_Q9GRPRecord*)malloc(256 * sizeof(struct AGGRecord_Q9GRPRecord));
      memset(x433975, 0, 256 * sizeof(struct AGGRecord_Q9GRPRecord));
      long x433976 = mallocSym_411971_431655;
      long x433977 = (long){256};
      long x433978 = x433976+(x433977);
      mallocSym_411971_431655 = x433978;
      struct Set_AGGRecord_Q9GRPRecord* x433980 = (struct Set_AGGRecord_Q9GRPRecord*)malloc(1 * sizeof(struct Set_AGGRecord_Q9GRPRecord));
      memset(x433980, 0, 1 * sizeof(struct Set_AGGRecord_Q9GRPRecord));
      long x433981 = mallocSym_411972_431691;
      long x433982 = (long){1};
      long x433983 = x433981+(x433982);
      mallocSym_411972_431691 = x433983;
      x433980->maxSize = 0; x433980->array = x433975;
      struct Set_AGGRecord_Q9GRPRecord x411975 = *x433980;
      *(x433951 + x411970) = x411975;
      struct Set_AGGRecord_Q9GRPRecord* x411977 = &(x433951[x411970]);
      x433980 = x411977;
    };
    struct ORDERSRecord* x433991 = (struct ORDERSRecord*)malloc(60000000 * sizeof(struct ORDERSRecord));
    memset(x433991, 0, 60000000 * sizeof(struct ORDERSRecord));
    long x433992 = mallocSym_427318_431702;
    long x433993 = (long){60000000};
    long x433994 = x433992+(x433993);
    mallocSym_427318_431702 = x433994;
    numeric_int_t x411990 = 0;
    for(; x411990 < x425577 ; x411990 += 1) {
      
      struct ORDERSRecord* x411991 = &(x432089[x411990]);
      numeric_int_t x411992 = x411991->O_ORDERKEY;
      numeric_int_t x411993 = x411992%(60000000);
      struct ORDERSRecord x411994 = *x411991;
      *(x433991 + x411993) = x411994;
      struct ORDERSRecord* x411996 = &(x433991[x411993]);
      x411991 = x411996;
    };
    struct PARTSUPPRecord** x434013 = (struct PARTSUPPRecord**)malloc(1600000 * sizeof(struct PARTSUPPRecord*));
    memset(x434013, 0, 1600000 * sizeof(struct PARTSUPPRecord*));
    long x434014 = mallocSym_427336_431682;
    long x434015 = (long){1600000};
    long x434016 = x434014+(x434015);
    mallocSym_427336_431682 = x434016;
    numeric_int_t* x434018 = (numeric_int_t*)malloc(1600000 * sizeof(numeric_int_t));
    memset(x434018, 0, 1600000 * sizeof(numeric_int_t));
    long x434019 = mallocSym_427337_431697;
    long x434020 = x434019+(x434015);
    mallocSym_427337_431697 = x434020;
    numeric_int_t x412004 = 0;
    for(; x412004 < 1600000 ; x412004 += 1) {
      
      *(x434018 + x412004) = 0;
    };
    /* VAR */ numeric_int_t x427343 = 0;
    numeric_int_t x412019 = 0;
    for(; x412019 < x425721 ; x412019 += 1) {
      
      struct PARTSUPPRecord* x412020 = &(x432253[x412019]);
      numeric_int_t x412021 = x412020->PS_PARTKEY;
      numeric_int_t x412022 = x412021%(1600000);
      numeric_int_t x412023 = x434018[x412022];
      numeric_int_t x412024 = x412023+(1);
      *(x434018 + x412022) = x412024;
      numeric_int_t x412026 = x427343;
      numeric_int_t x412027 = x412026+(1);
      x427343 = x412027;
    };
    numeric_int_t x412036 = 0;
    for(; x412036 < 1600000 ; x412036 += 1) {
      
      numeric_int_t x412037 = x434018[x412036];
      struct PARTSUPPRecord* x434061 = (struct PARTSUPPRecord*)malloc(x412037 * sizeof(struct PARTSUPPRecord));
      memset(x434061, 0, x412037 * sizeof(struct PARTSUPPRecord));
      long x434062 = mallocSym_412038_431681;
      long x434063 = (long){x412037};
      long x434064 = x434062+(x434063);
      mallocSym_412038_431681 = x434064;
      *(x434013 + x412036) = x434061;
      *(x434018 + x412036) = 0;
    };
    x427343 = 0;
    numeric_int_t x412060 = 0;
    for(; x412060 < x425721 ; x412060 += 1) {
      
      struct PARTSUPPRecord* x412061 = &(x432253[x412060]);
      numeric_int_t x412062 = x412061->PS_PARTKEY;
      numeric_int_t x412063 = x412062%(1600000);
      numeric_int_t x412064 = x434018[x412063];
      struct PARTSUPPRecord* x412065 = x434013[x412063];
      struct PARTSUPPRecord x412066 = *x412061;
      *(x412065 + x412064) = x412066;
      struct PARTSUPPRecord* x412068 = &(x412065[x412064]);
      x412061 = x412068;
      numeric_int_t x412070 = x434018[x412063];
      numeric_int_t x412071 = x412070+(1);
      *(x434018 + x412063) = x412071;
      numeric_int_t x412073 = x427343;
      numeric_int_t x412074 = x412073+(1);
      x427343 = x412074;
    };
    struct LINEITEMRecord** x434102 = (struct LINEITEMRecord**)malloc(1600000 * sizeof(struct LINEITEMRecord*));
    memset(x434102, 0, 1600000 * sizeof(struct LINEITEMRecord*));
    long x434103 = mallocSym_427410_431666;
    long x434104 = x434103+(x434015);
    mallocSym_427410_431666 = x434104;
    numeric_int_t* x434106 = (numeric_int_t*)malloc(1600000 * sizeof(numeric_int_t));
    memset(x434106, 0, 1600000 * sizeof(numeric_int_t));
    long x434107 = mallocSym_427411_431656;
    long x434108 = x434107+(x434015);
    mallocSym_427411_431656 = x434108;
    numeric_int_t x412082 = 0;
    for(; x412082 < 1600000 ; x412082 += 1) {
      
      *(x434106 + x412082) = 0;
    };
    /* VAR */ numeric_int_t x427417 = 0;
    numeric_int_t x412097 = 0;
    for(; x412097 < x425936 ; x412097 += 1) {
      
      struct LINEITEMRecord* x412098 = &(x432504[x412097]);
      numeric_int_t x412099 = x412098->L_PARTKEY;
      numeric_int_t x412100 = x412099%(1600000);
      numeric_int_t x412101 = x434106[x412100];
      numeric_int_t x412102 = x412101+(1);
      *(x434106 + x412100) = x412102;
      numeric_int_t x412104 = x427417;
      numeric_int_t x412105 = x412104+(1);
      x427417 = x412105;
    };
    numeric_int_t x412114 = 0;
    for(; x412114 < 1600000 ; x412114 += 1) {
      
      numeric_int_t x412115 = x434106[x412114];
      struct LINEITEMRecord* x434149 = (struct LINEITEMRecord*)malloc(x412115 * sizeof(struct LINEITEMRecord));
      memset(x434149, 0, x412115 * sizeof(struct LINEITEMRecord));
      long x434150 = mallocSym_412116_431706;
      long x434151 = (long){x412115};
      long x434152 = x434150+(x434151);
      mallocSym_412116_431706 = x434152;
      *(x434102 + x412114) = x434149;
      *(x434106 + x412114) = 0;
    };
    x427417 = 0;
    numeric_int_t x412138 = 0;
    for(; x412138 < x425936 ; x412138 += 1) {
      
      struct LINEITEMRecord* x412139 = &(x432504[x412138]);
      numeric_int_t x412140 = x412139->L_PARTKEY;
      numeric_int_t x412141 = x412140%(1600000);
      numeric_int_t x412142 = x434106[x412141];
      struct LINEITEMRecord* x412143 = x434102[x412141];
      struct LINEITEMRecord x412144 = *x412139;
      *(x412143 + x412142) = x412144;
      struct LINEITEMRecord* x412146 = &(x412143[x412142]);
      x412139 = x412146;
      numeric_int_t x412148 = x434106[x412141];
      numeric_int_t x412149 = x412148+(1);
      *(x434106 + x412141) = x412149;
      numeric_int_t x412151 = x427417;
      numeric_int_t x412152 = x412151+(1);
      x427417 = x412152;
    };
    x388642 = -1;
    g_array_sort(x399195, x427490);
    /* VAR */ numeric_int_t x427498 = 0;
    numeric_int_t x412176 = 0;
    for(; x412176 < x425260 ; x412176 += 1) {
      
      numeric_int_t x412177 = x427498;
      numeric_int_t x412178 = x412177+(1);
      x427498 = x412178;
    };
    /* VAR */ numeric_int_t x427508 = 0;
    numeric_int_t x412187 = 0;
    for(; x412187 < x425260 ; x412187 += 1) {
      
      numeric_int_t x412188 = x427508;
      numeric_int_t x412189 = x412188+(1);
      x427508 = x412189;
    };
    /* VAR */ numeric_int_t x427518 = 0;
    numeric_int_t x412221 = 0;
    for(; x412221 < x425436 ; x412221 += 1) {
      
      struct NATIONRecord* x412222 = &(x431932[x412221]);
      numeric_int_t x412223 = x427518;
      char* x412224 = g_array_index(x399197, char*, x412223);
      /* VAR */ numeric_int_t x412225 = -1;
      numeric_int_t x412226 = x399195->len;
      numeric_int_t x412208 = 0;
      for(; x412208 < x412226 ; x412208 += 1) {
        
        char* x412209 = g_array_index(x399195, char*, x412208);
        boolean_t x412210 = strcmp(x412209, x412224);
        boolean_t x412211 = !(x412210);
        if(x412211) {
          x412225 = x412208;
          break;
        };
      };
      numeric_int_t x412242 = x412225;
      x412222->N_NAME = x412242;
      numeric_int_t x412244 = x427518;
      numeric_int_t x412245 = x412244+(1);
      x427518 = x412245;
    };
    /* VAR */ numeric_int_t x427572 = 0;
    numeric_int_t x412277 = 0;
    for(; x412277 < x425436 ; x412277 += 1) {
      
      struct NATIONRecord* x412278 = &(x431932[x412277]);
      numeric_int_t x412279 = x427572;
      char* x412280 = g_array_index(x399197, char*, x412279);
      /* VAR */ numeric_int_t x412281 = -1;
      numeric_int_t x412282 = x399195->len;
      numeric_int_t x412264 = 0;
      for(; x412264 < x412282 ; x412264 += 1) {
        
        char* x412265 = g_array_index(x399195, char*, x412264);
        boolean_t x412266 = strcmp(x412265, x412280);
        boolean_t x412267 = !(x412266);
        if(x412267) {
          x412281 = x412264;
          break;
        };
      };
      numeric_int_t x412298 = x412281;
      x412278->N_NAME = x412298;
      numeric_int_t x412300 = x427572;
      numeric_int_t x412301 = x412300+(1);
      x427572 = x412301;
    };
    /* VAR */ numeric_int_t x427626 = 0;
    numeric_int_t x412310 = 0;
    for(; x412310 < x425577 ; x412310 += 1) {
      
      numeric_int_t x412311 = x427626;
      numeric_int_t x412312 = x412311+(1);
      x427626 = x412312;
    };
    /* VAR */ numeric_int_t x427636 = 0;
    numeric_int_t x412321 = 0;
    for(; x412321 < x425577 ; x412321 += 1) {
      
      numeric_int_t x412322 = x427636;
      numeric_int_t x412323 = x412322+(1);
      x427636 = x412323;
    };
    /* VAR */ numeric_int_t x427646 = 0;
    numeric_int_t x412332 = 0;
    for(; x412332 < x425721 ; x412332 += 1) {
      
      numeric_int_t x412333 = x427646;
      numeric_int_t x412334 = x412333+(1);
      x427646 = x412334;
    };
    /* VAR */ numeric_int_t x427656 = 0;
    numeric_int_t x412343 = 0;
    for(; x412343 < x425721 ; x412343 += 1) {
      
      numeric_int_t x412344 = x427656;
      numeric_int_t x412345 = x412344+(1);
      x427656 = x412345;
    };
    /* VAR */ numeric_int_t x427666 = 0;
    numeric_int_t x412354 = 0;
    for(; x412354 < x425801 ; x412354 += 1) {
      
      numeric_int_t x412355 = x427666;
      numeric_int_t x412356 = x412355+(1);
      x427666 = x412356;
    };
    /* VAR */ numeric_int_t x427676 = 0;
    numeric_int_t x412365 = 0;
    for(; x412365 < x425801 ; x412365 += 1) {
      
      numeric_int_t x412366 = x427676;
      numeric_int_t x412367 = x412366+(1);
      x427676 = x412367;
    };
    /* VAR */ numeric_int_t x427686 = 0;
    numeric_int_t x412376 = 0;
    for(; x412376 < x425936 ; x412376 += 1) {
      
      numeric_int_t x412377 = x427686;
      numeric_int_t x412378 = x412377+(1);
      x427686 = x412378;
    };
    /* VAR */ numeric_int_t x427696 = 0;
    numeric_int_t x412387 = 0;
    for(; x412387 < x425936 ; x412387 += 1) {
      
      numeric_int_t x412388 = x427696;
      numeric_int_t x412389 = x412388+(1);
      x427696 = x412389;
    };
    /* VAR */ numeric_int_t x427706 = 0;
    numeric_int_t x412398 = 0;
    for(; x412398 < 1048576 ; x412398 += 1) {
      
      numeric_int_t x412399 = x427706;
      numeric_int_t x412400 = x412399+(1);
      x427706 = x412400;
    };
    /* VAR */ numeric_int_t x427716 = 0;
    numeric_int_t x412409 = 0;
    for(; x412409 < 1048576 ; x412409 += 1) {
      
      numeric_int_t x412410 = x427716;
      numeric_int_t x412411 = x412410+(1);
      x427716 = x412411;
    };
    /* VAR */ numeric_int_t x427726 = 0;
    struct Q9GRPRecord* x434433 = (struct Q9GRPRecord*)malloc(48000000 * sizeof(struct Q9GRPRecord));
    memset(x434433, 0, 48000000 * sizeof(struct Q9GRPRecord));
    long x434434 = mallocSym_427727_431673;
    long x434435 = (long){48000000};
    long x434436 = x434434+(x434435);
    mallocSym_427727_431673 = x434436;
    /* VAR */ numeric_int_t x427728 = 0;
    while(1) {
      
      numeric_int_t x392030 = x427728;
      boolean_t x392031 = x392030<(48000000);
      if (!(x392031)) break; 
      
      numeric_int_t x392032 = x427728;
      struct Q9GRPRecord* x434443 = (struct Q9GRPRecord*)malloc(1 * sizeof(struct Q9GRPRecord));
      memset(x434443, 0, 1 * sizeof(struct Q9GRPRecord));
      long x434444 = mallocSym_397703_431696;
      long x434445 = (long){1};
      long x434446 = x434444+(x434445);
      mallocSym_397703_431696 = x434446;
      x434443->NATION = 0; x434443->O_YEAR = 0;
      struct Q9GRPRecord x396458 = *x434443;
      *(x434433 + x392032) = x396458;
      struct Q9GRPRecord* x396460 = &(x434433[x392032]);
      x434443 = x396460;
      numeric_int_t x392035 = x427728;
      numeric_int_t x392036 = x392035+(1);
      x427728 = x392036;
    };
    /* VAR */ numeric_int_t x427743 = 0;
    struct AGGRecord_Q9GRPRecord* x434458 = (struct AGGRecord_Q9GRPRecord*)malloc(175 * sizeof(struct AGGRecord_Q9GRPRecord));
    memset(x434458, 0, 175 * sizeof(struct AGGRecord_Q9GRPRecord));
    long x434459 = mallocSym_427744_431654;
    long x434460 = (long){175};
    long x434461 = x434459+(x434460);
    mallocSym_427744_431654 = x434461;
    /* VAR */ numeric_int_t x427745 = 0;
    while(1) {
      
      numeric_int_t x392042 = x427745;
      boolean_t x392043 = x392042<(175);
      if (!(x392043)) break; 
      
      numeric_int_t x392044 = x427745;
      struct Q9GRPRecord* x392045 = &(x434433[x392044]);
      struct AGGRecord_Q9GRPRecord* x434469 = (struct AGGRecord_Q9GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q9GRPRecord));
      memset(x434469, 0, 1 * sizeof(struct AGGRecord_Q9GRPRecord));
      long x434470 = mallocSym_397721_431704;
      long x434471 = (long){1};
      long x434472 = x434470+(x434471);
      mallocSym_397721_431704 = x434472;
      x434469->key = x392045; x434469->aggs = 0.0;
      struct AGGRecord_Q9GRPRecord x396474 = *x434469;
      *(x434458 + x392044) = x396474;
      struct AGGRecord_Q9GRPRecord* x396476 = &(x434458[x392044]);
      x434469 = x396476;
      numeric_int_t x392048 = x427745;
      numeric_int_t x392049 = x392048+(1);
      x427745 = x392049;
    };
    struct timeval x427761 = (struct timeval){0};
    /* VAR */ struct timeval x427762 = x427761;
    struct timeval x427763 = x427762;
    /* VAR */ struct timeval x427764 = x427761;
    struct timeval x427765 = x427764;
    /* VAR */ struct timeval x427766 = x427761;
    struct timeval x427767 = x427766;
    struct timeval* x427768 = &x427765;
    gettimeofday(x427768, NULL);
    /* VAR */ numeric_int_t x427770 = 0;
    numeric_int_t* x427833 = &(x427802);
    GTree* x427834 = g_tree_new(x427833);
    /* VAR */ boolean_t x427835 = 0;
    /* VAR */ numeric_int_t x427836 = 0;
    while(1) {
      
      numeric_int_t x427838 = x427770;
      boolean_t x427839 = x427838<(x425260);
      if (!(x427839)) break; 
      
      numeric_int_t x378905 = x427770;
      struct PARTRecord* x376585 = &(x431724[x378905]);
      char* x376587 = x376585->P_NAME;
      char* x409669 = strstr(x376587, "ghost");
      boolean_t x409670 = x409669!=(NULL);
      if(x409670) {
        numeric_int_t x376589 = x376585->P_PARTKEY;
        numeric_int_t x388053 = x376589%(1600000);
        numeric_int_t x388054 = x434106[x388053];
        struct LINEITEMRecord* x388055 = x434102[x388053];
        numeric_int_t x412724 = 0;
        for(; x412724 < x388054 ; x412724 += 1) {
          
          struct LINEITEMRecord* x412725 = &(x388055[x412724]);
          numeric_int_t x412726 = x412725->L_PARTKEY;
          boolean_t x412727 = x412726==(x376589);
          if(x412727) {
            numeric_int_t x381189 = x412725->L_PARTKEY;
            boolean_t x381190 = x381189==(x376589);
            if(x381190) {
              numeric_int_t x377310 = x412725->L_ORDERKEY;
              numeric_int_t x377311 = x412725->L_SUPPKEY;
              double x377312 = x412725->L_QUANTITY;
              double x377313 = x412725->L_EXTENDEDPRICE;
              double x377314 = x412725->L_DISCOUNT;
              numeric_int_t x381199 = x377311-(1);
              struct SUPPLIERRecord* x381200 = &(x432345[x381199]);
              numeric_int_t x376631 = x381200->S_SUPPKEY;
              boolean_t x388074 = x377311==(x376631);
              if(x388074) {
                numeric_int_t x377371 = x381200->S_NATIONKEY;
                numeric_int_t x381216 = x377371-(0);
                struct NATIONRecord* x381217 = &(x431932[x381216]);
                numeric_int_t x376671 = x381217->N_NATIONKEY;
                boolean_t x388080 = x377371==(x376671);
                if(x388080) {
                  numeric_int_t x389114 = x381217->N_NAME;
                  numeric_int_t x388083 = x381189%(1600000);
                  numeric_int_t x388084 = x434018[x388083];
                  struct PARTSUPPRecord* x388085 = x434013[x388083];
                  numeric_int_t x412631 = 0;
                  for(; x412631 < x388084 ; x412631 += 1) {
                    
                    struct PARTSUPPRecord* x412632 = &(x388085[x412631]);
                    numeric_int_t x412633 = x412632->PS_PARTKEY;
                    boolean_t x412634 = x412633==(x381189);
                    if(x412634) {
                      numeric_int_t x381242 = x412632->PS_PARTKEY;
                      boolean_t x381243 = x381242==(x381189);
                      /* VAR */ boolean_t ite421809 = 0;
                      if(x381243) {
                        numeric_int_t x428269 = x412632->PS_SUPPKEY;
                        boolean_t x428270 = x428269==(x377311);
                        ite421809 = x428270;
                      } else {
                        
                        ite421809 = 0;
                      };
                      boolean_t x418579 = ite421809;
                      if(x418579) {
                        double x377537 = x412632->PS_SUPPLYCOST;
                        struct ORDERSRecord* x381252 = &(x433991[x377310]);
                        numeric_int_t x376777 = x381252->O_ORDERKEY;
                        boolean_t x388102 = x377310==(x376777);
                        if(x388102) {
                          numeric_int_t x377653 = x381252->O_ORDERDATE;
                          numeric_int_t x392766 = x377653/(10000);
                          numeric_int_t x392137 = x427726;
                          struct Q9GRPRecord* x392138 = &(x434433[x392137]);
                          x392138->NATION = x389114;
                          x392138->O_YEAR = x392766;
                          numeric_int_t x392141 = x427726;
                          numeric_int_t x392142 = x392141+(1);
                          x427726 = x392142;
                          numeric_int_t x407065 = x392138->NATION;
                          numeric_int_t x407066 = x407065*(10000);
                          numeric_int_t x407067 = x392138->O_YEAR;
                          numeric_int_t x407068 = x407066+(x407067);
                          numeric_int_t x383245 = x407068&(1048575);
                          struct Set_AGGRecord_Q9GRPRecord* x384506 = &(x433951[x383245]);
                          numeric_int_t x383247 = x427297;
                          boolean_t x383248 = x383245>(x383247);
                          if(x383248) {
                            x427297 = x383245;
                          };
                          /* VAR */ numeric_int_t i384515 = 0;
                          /* VAR */ boolean_t found384516 = 0;
                          while(1) {
                            
                            numeric_int_t x384517 = i384515;
                            numeric_int_t x384518 = x384506->maxSize;
                            boolean_t x384519 = x384517<(x384518);
                            /* VAR */ boolean_t ite421849 = 0;
                            if(x384519) {
                              boolean_t x428308 = found384516;
                              boolean_t x428309 = !(x428308);
                              ite421849 = x428309;
                            } else {
                              
                              ite421849 = 0;
                            };
                            boolean_t x418612 = ite421849;
                            if (!(x418612)) break; 
                            
                            struct AGGRecord_Q9GRPRecord* x384523 = x384506->array;
                            numeric_int_t x384524 = i384515;
                            struct AGGRecord_Q9GRPRecord* x384525 = &(x384523[x384524]);
                            struct Q9GRPRecord* x384526 = x384525->key;
                            numeric_int_t x407088 = x384526->NATION;
                            boolean_t x407089 = x407088==(x407065);
                            numeric_int_t x407090 = x384526->O_YEAR;
                            boolean_t x407091 = x407090==(x407067);
                            /* VAR */ boolean_t ite421866 = 0;
                            if(x407089) {
                              ite421866 = x407091;
                            } else {
                              
                              ite421866 = 0;
                            };
                            boolean_t x418622 = ite421866;
                            if(x418622) {
                              found384516 = 1;
                            } else {
                              
                              numeric_int_t x384529 = i384515;
                              numeric_int_t x384530 = x384529+(1);
                              i384515 = x384530;
                            };
                          };
                          boolean_t x384534 = found384516;
                          boolean_t x384535 = !(x384534);
                          /* VAR */ struct AGGRecord_Q9GRPRecord** ite418631 = 0;
                          if(x384535) {
                            ite418631 = NULL;
                          } else {
                            
                            struct AGGRecord_Q9GRPRecord* x418633 = x384506->array;
                            numeric_int_t x418634 = i384515;
                            struct AGGRecord_Q9GRPRecord* x418635 = &(x418633[x418634]);
                            ite418631 = x418635;
                          };
                          struct AGGRecord_Q9GRPRecord** x384542 = ite418631;
                          boolean_t x386818 = x384542!=(NULL);
                          /* VAR */ struct AGGRecord_Q9GRPRecord* ite418641 = 0;
                          if(x386818) {
                            ite418641 = x384542;
                          } else {
                            
                            /* VAR */ double x418643 = 0;
                            /* VAR */ double x418644 = 0;
                            double x418645 = x418644;
                            numeric_int_t x418646 = x427743;
                            struct AGGRecord_Q9GRPRecord* x418647 = &(x434458[x418646]);
                            x418647->key = x392138;
                            x418647->aggs = x418645;
                            numeric_int_t x418650 = x427743;
                            numeric_int_t x418651 = x418650+(1);
                            x427743 = x418651;
                            struct AGGRecord_Q9GRPRecord* x418653 = x384506->array;
                            numeric_int_t x418654 = x384506->maxSize;
                            struct AGGRecord_Q9GRPRecord x418655 = *x418647;
                            *(x418653 + x418654) = x418655;
                            struct AGGRecord_Q9GRPRecord* x418657 = &(x418653[x418654]);
                            x418647 = x418657;
                            numeric_int_t x418659 = x384506->maxSize;
                            numeric_int_t x418660 = x418659+(1);
                            x384506->maxSize = x418660;
                            ite418641 = x418647;
                          };
                          struct AGGRecord_Q9GRPRecord* x383260 = ite418641;
                          double x389784 = x383260->aggs;
                          double x376857 = 1.0-(x377314);
                          double x376858 = x377313*(x376857);
                          double x376859 = x389784+(x376858);
                          double x376862 = x377537*(x377312);
                          double x376863 = x376859-(x376862);
                          x383260->aggs = x376863;
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
      numeric_int_t x378946 = x427770;
      numeric_int_t x376619 = x378946+(1);
      x427770 = x376619;
    };
    numeric_int_t x428380 = x427297;
    numeric_int_t x428381 = x428380+(1);
    numeric_int_t x412957 = 0;
    for(; x412957 < x428381 ; x412957 += 1) {
      
      struct Set_AGGRecord_Q9GRPRecord* x412958 = &(x433951[x412957]);
      numeric_int_t x412959 = x412958->maxSize;
      numeric_int_t x412952 = 0;
      for(; x412952 < x412959 ; x412952 += 1) {
        
        struct AGGRecord_Q9GRPRecord* x412953 = x412958->array;
        struct AGGRecord_Q9GRPRecord* x412954 = &(x412953[x412952]);
        g_tree_insert(x427834, x412954, x412954);
      };
    };
    while(1) {
      
      boolean_t x379265 = x427835;
      boolean_t x376885 = !(x379265);
      /* VAR */ boolean_t ite421955 = 0;
      if(x376885) {
        numeric_int_t x428412 = g_tree_nnodes(x427834);
        boolean_t x428413 = x428412!=(0);
        ite421955 = x428413;
      } else {
        
        ite421955 = 0;
      };
      boolean_t x418706 = ite421955;
      if (!(x418706)) break; 
      
      void* x400487 = NULL;
      void** x400495 = &(x400487);
      g_tree_foreach(x427834, x400494, x400495);
      struct AGGRecord_Q9GRPRecord* x400497 = (struct AGGRecord_Q9GRPRecord*){x400487};
      numeric_int_t x400498 = g_tree_remove(x427834, x400497);
      if(0) {
        x427835 = 1;
      } else {
        
        struct Q9GRPRecord* x376898 = x400497->key;
        numeric_int_t x389223 = x376898->NATION;
        char* x400506 = g_array_index(x399195, char*, x389223);
        numeric_int_t x376901 = x376898->O_YEAR;
        double x389829 = x400497->aggs;
        printf("%s|%d|%.4f\n", x400506, x376901, x389829);
        numeric_int_t x379285 = x427836;
        numeric_int_t x376906 = x379285+(1);
        x427836 = x376906;
      };
    };
    numeric_int_t x428441 = x427836;
    printf("(%d rows)\n", x428441);
    struct timeval* x428443 = &x427767;
    gettimeofday(x428443, NULL);
    struct timeval* x428445 = &x427763;
    struct timeval* x428446 = &x427767;
    struct timeval* x428447 = &x427765;
    long x428448 = timeval_subtract(x428445, x428446, x428447);
    printf("Generated code run in %ld milliseconds.\n", x428448);
  };
  /* VAR */ long mallocSum435172 = 0L;
  long x435173 = mallocSym_396926_431649;
  numeric_int_t x435174 = sizeof(struct NATIONRecord);
  long x435175 = (long){x435174};
  long x435176 = x435173*(x435175);
  printf("432068 with type NATIONRecord: %ld\n", x435176);
  long x435178 = mallocSum435172;
  long x435179 = x435178+(x435176);
  mallocSum435172 = x435179;
  long x435181 = mallocSym_395935_431650;
  numeric_int_t x435182 = sizeof(char);
  long x435183 = (long){x435182};
  long x435184 = x435181*(x435183);
  printf("432393 with type Byte: %ld\n", x435184);
  long x435186 = mallocSum435172;
  long x435187 = x435186+(x435184);
  mallocSum435172 = x435187;
  long x435189 = mallocSym_395652_431651;
  numeric_int_t x435190 = sizeof(char);
  long x435191 = (long){x435190};
  long x435192 = x435189*(x435191);
  printf("431980 with type Byte: %ld\n", x435192);
  long x435194 = mallocSum435172;
  long x435195 = x435194+(x435192);
  mallocSum435172 = x435195;
  long x435197 = mallocSym_427298_431652;
  numeric_int_t x435198 = sizeof(struct Set_AGGRecord_Q9GRPRecord);
  long x435199 = (long){x435198};
  long x435200 = x435197*(x435199);
  printf("433951 with type Set_AGGRecord_Q9GRPRecord: %ld\n", x435200);
  long x435202 = mallocSum435172;
  long x435203 = x435202+(x435200);
  mallocSum435172 = x435203;
  long x435205 = mallocSym_396222_431653;
  numeric_int_t x435206 = sizeof(struct PARTSUPPRecord*);
  long x435207 = (long){x435206};
  long x435208 = x435205*(x435207);
  printf("432790 with type Pointer[PARTSUPPRecord]: %ld\n", x435208);
  long x435210 = mallocSum435172;
  long x435211 = x435210+(x435208);
  mallocSum435172 = x435211;
  long x435213 = mallocSym_427744_431654;
  numeric_int_t x435214 = sizeof(struct AGGRecord_Q9GRPRecord);
  long x435215 = (long){x435214};
  long x435216 = x435213*(x435215);
  printf("434458 with type AGGRecord_Q9GRPRecord: %ld\n", x435216);
  long x435218 = mallocSum435172;
  long x435219 = x435218+(x435216);
  mallocSum435172 = x435219;
  long x435221 = mallocSym_411971_431655;
  numeric_int_t x435222 = sizeof(struct AGGRecord_Q9GRPRecord);
  long x435223 = (long){x435222};
  long x435224 = x435221*(x435223);
  printf("433975 with type AGGRecord_Q9GRPRecord: %ld\n", x435224);
  long x435226 = mallocSum435172;
  long x435227 = x435226+(x435224);
  mallocSum435172 = x435227;
  long x435229 = mallocSym_427411_431656;
  numeric_int_t x435230 = sizeof(numeric_int_t);
  long x435231 = (long){x435230};
  long x435232 = x435229*(x435231);
  printf("434106 with type Int: %ld\n", x435232);
  long x435234 = mallocSum435172;
  long x435235 = x435234+(x435232);
  mallocSum435172 = x435235;
  long x435237 = mallocSym_425725_431657;
  numeric_int_t x435238 = sizeof(struct PARTSUPPRecord);
  long x435239 = (long){x435238};
  long x435240 = x435237*(x435239);
  printf("432253 with type PARTSUPPRecord: %ld\n", x435240);
  long x435242 = mallocSum435172;
  long x435243 = x435242+(x435240);
  mallocSum435172 = x435243;
  long x435245 = mallocSym_395972_431658;
  numeric_int_t x435246 = sizeof(char);
  long x435247 = (long){x435246};
  long x435248 = x435245*(x435247);
  printf("432446 with type Byte: %ld\n", x435248);
  long x435250 = mallocSum435172;
  long x435251 = x435250+(x435248);
  mallocSum435172 = x435251;
  long x435253 = mallocSym_396199_431659;
  numeric_int_t x435254 = sizeof(struct Set_AGGRecord_Q9GRPRecord);
  long x435255 = (long){x435254};
  long x435256 = x435253*(x435255);
  printf("432728 with type Set_AGGRecord_Q9GRPRecord: %ld\n", x435256);
  long x435258 = mallocSum435172;
  long x435259 = x435258+(x435256);
  mallocSum435172 = x435259;
  long x435261 = mallocSym_395673_431660;
  numeric_int_t x435262 = sizeof(char);
  long x435263 = (long){x435262};
  long x435264 = x435261*(x435263);
  printf("432009 with type Byte: %ld\n", x435264);
  long x435266 = mallocSum435172;
  long x435267 = x435266+(x435264);
  mallocSum435172 = x435267;
  long x435269 = mallocSym_396181_431661;
  numeric_int_t x435270 = sizeof(char);
  long x435271 = (long){x435270};
  long x435272 = x435269*(x435271);
  printf("432702 with type Byte: %ld\n", x435272);
  long x435274 = mallocSum435172;
  long x435275 = x435274+(x435272);
  mallocSum435172 = x435275;
  long x435277 = mallocSym_397428_431662;
  numeric_int_t x435278 = sizeof(struct LINEITEMRecord);
  long x435279 = (long){x435278};
  long x435280 = x435277*(x435279);
  printf("432710 with type LINEITEMRecord: %ld\n", x435280);
  long x435282 = mallocSum435172;
  long x435283 = x435282+(x435280);
  mallocSum435172 = x435283;
  long x435285 = mallocSym_425264_431663;
  numeric_int_t x435286 = sizeof(struct PARTRecord);
  long x435287 = (long){x435286};
  long x435288 = x435285*(x435287);
  printf("431724 with type PARTRecord: %ld\n", x435288);
  long x435290 = mallocSum435172;
  long x435291 = x435290+(x435288);
  mallocSum435172 = x435291;
  long x435293 = mallocSym_395598_431664;
  numeric_int_t x435294 = sizeof(char);
  long x435295 = (long){x435294};
  long x435296 = x435293*(x435295);
  printf("431903 with type Byte: %ld\n", x435296);
  long x435298 = mallocSum435172;
  long x435299 = x435298+(x435296);
  mallocSum435172 = x435299;
  long x435301 = mallocSym_396271_431665;
  numeric_int_t x435302 = sizeof(struct LINEITEMRecord*);
  long x435303 = (long){x435302};
  long x435304 = x435301*(x435303);
  printf("432879 with type Pointer[LINEITEMRecord]: %ld\n", x435304);
  long x435306 = mallocSum435172;
  long x435307 = x435306+(x435304);
  mallocSum435172 = x435307;
  long x435309 = mallocSym_427410_431666;
  numeric_int_t x435310 = sizeof(struct LINEITEMRecord*);
  long x435311 = (long){x435310};
  long x435312 = x435309*(x435311);
  printf("434102 with type Pointer[LINEITEMRecord]: %ld\n", x435312);
  long x435314 = mallocSum435172;
  long x435315 = x435314+(x435312);
  mallocSum435172 = x435315;
  long x435317 = mallocSym_395465_431667;
  numeric_int_t x435318 = sizeof(numeric_int_t);
  long x435319 = (long){x435318};
  long x435320 = x435317*(x435319);
  printf("431713 with type Int: %ld\n", x435320);
  long x435322 = mallocSum435172;
  long x435323 = x435322+(x435320);
  mallocSum435172 = x435323;
  long x435325 = mallocSym_396272_431668;
  numeric_int_t x435326 = sizeof(numeric_int_t);
  long x435327 = (long){x435326};
  long x435328 = x435325*(x435327);
  printf("432883 with type Int: %ld\n", x435328);
  long x435330 = mallocSum435172;
  long x435331 = x435330+(x435328);
  mallocSum435172 = x435331;
  long x435333 = mallocSym_395791_431669;
  numeric_int_t x435334 = sizeof(char);
  long x435335 = (long){x435334};
  long x435336 = x435333*(x435335);
  printf("432195 with type Byte: %ld\n", x435336);
  long x435338 = mallocSum435172;
  long x435339 = x435338+(x435336);
  mallocSum435172 = x435339;
  long x435341 = mallocSym_396835_431670;
  numeric_int_t x435342 = sizeof(struct PARTRecord);
  long x435343 = (long){x435342};
  long x435344 = x435341*(x435343);
  printf("431911 with type PARTRecord: %ld\n", x435344);
  long x435346 = mallocSum435172;
  long x435347 = x435346+(x435344);
  mallocSum435172 = x435347;
  long x435349 = mallocSym_396223_431671;
  numeric_int_t x435350 = sizeof(numeric_int_t);
  long x435351 = (long){x435350};
  long x435352 = x435349*(x435351);
  printf("432795 with type Int: %ld\n", x435352);
  long x435354 = mallocSum435172;
  long x435355 = x435354+(x435352);
  mallocSum435172 = x435355;
  long x435357 = mallocSym_396203_431672;
  numeric_int_t x435358 = sizeof(struct AGGRecord_Q9GRPRecord);
  long x435359 = (long){x435358};
  long x435360 = x435357*(x435359);
  printf("433958 with type AGGRecord_Q9GRPRecord: %ld\n", x435360);
  long x435362 = mallocSum435172;
  long x435363 = x435362+(x435360);
  mallocSum435172 = x435363;
  long x435365 = mallocSym_427727_431673;
  numeric_int_t x435366 = sizeof(struct Q9GRPRecord);
  long x435367 = (long){x435366};
  long x435368 = x435365*(x435367);
  printf("434433 with type Q9GRPRecord: %ld\n", x435368);
  long x435370 = mallocSum435172;
  long x435371 = x435370+(x435368);
  mallocSum435172 = x435371;
  long x435373 = mallocSym_396149_431674;
  numeric_int_t x435374 = sizeof(char);
  long x435375 = (long){x435374};
  long x435376 = x435373*(x435375);
  printf("432654 with type Byte: %ld\n", x435376);
  long x435378 = mallocSum435172;
  long x435379 = x435378+(x435376);
  mallocSum435172 = x435379;
  long x435381 = mallocSym_395524_431675;
  numeric_int_t x435382 = sizeof(char);
  long x435383 = (long){x435382};
  long x435384 = x435381*(x435383);
  printf("431797 with type Byte: %ld\n", x435384);
  long x435386 = mallocSum435172;
  long x435387 = x435386+(x435384);
  mallocSum435172 = x435387;
  long x435389 = mallocSym_395508_431676;
  numeric_int_t x435390 = sizeof(char);
  long x435391 = (long){x435390};
  long x435392 = x435389*(x435391);
  printf("431773 with type Byte: %ld\n", x435392);
  long x435394 = mallocSum435172;
  long x435395 = x435394+(x435392);
  mallocSum435172 = x435395;
  long x435397 = mallocSym_395951_431677;
  numeric_int_t x435398 = sizeof(char);
  long x435399 = (long){x435398};
  long x435400 = x435397*(x435399);
  printf("432417 with type Byte: %ld\n", x435400);
  long x435402 = mallocSum435172;
  long x435403 = x435402+(x435400);
  mallocSum435172 = x435403;
  long x435405 = mallocSym_395556_431678;
  numeric_int_t x435406 = sizeof(char);
  long x435407 = (long){x435406};
  long x435408 = x435405*(x435407);
  printf("431845 with type Byte: %ld\n", x435408);
  long x435410 = mallocSum435172;
  long x435411 = x435410+(x435408);
  mallocSum435172 = x435411;
  long x435413 = mallocSym_397124_431679;
  numeric_int_t x435414 = sizeof(struct PARTSUPPRecord);
  long x435415 = (long){x435414};
  long x435416 = x435413*(x435415);
  printf("432324 with type PARTSUPPRecord: %ld\n", x435416);
  long x435418 = mallocSum435172;
  long x435419 = x435418+(x435416);
  mallocSum435172 = x435419;
  long x435421 = mallocSym_395577_431680;
  numeric_int_t x435422 = sizeof(char);
  long x435423 = (long){x435422};
  long x435424 = x435421*(x435423);
  printf("431874 with type Byte: %ld\n", x435424);
  long x435426 = mallocSum435172;
  long x435427 = x435426+(x435424);
  mallocSum435172 = x435427;
  long x435429 = mallocSym_412038_431681;
  numeric_int_t x435430 = sizeof(struct PARTSUPPRecord);
  long x435431 = (long){x435430};
  long x435432 = x435429*(x435431);
  printf("434061 with type PARTSUPPRecord: %ld\n", x435432);
  long x435434 = mallocSum435172;
  long x435435 = x435434+(x435432);
  mallocSum435172 = x435435;
  long x435437 = mallocSym_427336_431682;
  numeric_int_t x435438 = sizeof(struct PARTSUPPRecord*);
  long x435439 = (long){x435438};
  long x435440 = x435437*(x435439);
  printf("434013 with type Pointer[PARTSUPPRecord]: %ld\n", x435440);
  long x435442 = mallocSum435172;
  long x435443 = x435442+(x435440);
  mallocSum435172 = x435443;
  long x435445 = mallocSym_426590_431683;
  numeric_int_t x435446 = sizeof(struct AGGRecord_Q9GRPRecord);
  long x435447 = (long){x435446};
  long x435448 = x435445*(x435447);
  printf("433235 with type AGGRecord_Q9GRPRecord: %ld\n", x435448);
  long x435450 = mallocSum435172;
  long x435451 = x435450+(x435448);
  mallocSum435172 = x435451;
  long x435453 = mallocSym_396210_431684;
  numeric_int_t x435454 = sizeof(struct ORDERSRecord);
  long x435455 = (long){x435454};
  long x435456 = x435453*(x435455);
  printf("432768 with type ORDERSRecord: %ld\n", x435456);
  long x435458 = mallocSum435172;
  long x435459 = x435458+(x435456);
  mallocSum435172 = x435459;
  long x435461 = mallocSym_397238_431685;
  numeric_int_t x435462 = sizeof(struct SUPPLIERRecord);
  long x435463 = (long){x435462};
  long x435464 = x435461*(x435463);
  printf("432483 with type SUPPLIERRecord: %ld\n", x435464);
  long x435466 = mallocSum435172;
  long x435467 = x435466+(x435464);
  mallocSum435172 = x435467;
  long x435469 = mallocSym_396165_431686;
  numeric_int_t x435470 = sizeof(char);
  long x435471 = (long){x435470};
  long x435472 = x435469*(x435471);
  printf("432678 with type Byte: %ld\n", x435472);
  long x435474 = mallocSum435172;
  long x435475 = x435474+(x435472);
  mallocSum435172 = x435475;
  long x435477 = mallocSym_425440_431687;
  numeric_int_t x435478 = sizeof(struct NATIONRecord);
  long x435479 = (long){x435478};
  long x435480 = x435477*(x435479);
  printf("431932 with type NATIONRecord: %ld\n", x435480);
  long x435482 = mallocSum435172;
  long x435483 = x435482+(x435480);
  mallocSum435172 = x435483;
  long x435485 = mallocSym_396296_431688;
  numeric_int_t x435486 = sizeof(struct LINEITEMRecord);
  long x435487 = (long){x435486};
  long x435488 = x435485*(x435487);
  printf("434140 with type LINEITEMRecord: %ld\n", x435488);
  long x435490 = mallocSum435172;
  long x435491 = x435490+(x435488);
  mallocSum435172 = x435491;
  long x435493 = mallocSym_395993_431689;
  numeric_int_t x435494 = sizeof(char);
  long x435495 = (long){x435494};
  long x435496 = x435493*(x435495);
  printf("432475 with type Byte: %ld\n", x435496);
  long x435498 = mallocSum435172;
  long x435499 = x435498+(x435496);
  mallocSum435172 = x435499;
  long x435501 = mallocSym_396247_431690;
  numeric_int_t x435502 = sizeof(struct PARTSUPPRecord);
  long x435503 = (long){x435502};
  long x435504 = x435501*(x435503);
  printf("434052 with type PARTSUPPRecord: %ld\n", x435504);
  long x435506 = mallocSum435172;
  long x435507 = x435506+(x435504);
  mallocSum435172 = x435507;
  long x435509 = mallocSym_411972_431691;
  numeric_int_t x435510 = sizeof(struct Set_AGGRecord_Q9GRPRecord);
  long x435511 = (long){x435510};
  long x435512 = x435509*(x435511);
  printf("433980 with type Set_AGGRecord_Q9GRPRecord: %ld\n", x435512);
  long x435514 = mallocSum435172;
  long x435515 = x435514+(x435512);
  mallocSum435172 = x435515;
  long x435517 = mallocSym_395540_431692;
  numeric_int_t x435518 = sizeof(char);
  long x435519 = (long){x435518};
  long x435520 = x435517*(x435519);
  printf("431821 with type Byte: %ld\n", x435520);
  long x435522 = mallocSum435172;
  long x435523 = x435522+(x435520);
  mallocSum435172 = x435523;
  long x435525 = mallocSym_395775_431693;
  numeric_int_t x435526 = sizeof(char);
  long x435527 = (long){x435526};
  long x435528 = x435525*(x435527);
  printf("432171 with type Byte: %ld\n", x435528);
  long x435530 = mallocSum435172;
  long x435531 = x435530+(x435528);
  mallocSum435172 = x435531;
  long x435533 = mallocSym_425940_431694;
  numeric_int_t x435534 = sizeof(struct LINEITEMRecord);
  long x435535 = (long){x435534};
  long x435536 = x435533*(x435535);
  printf("432504 with type LINEITEMRecord: %ld\n", x435536);
  long x435538 = mallocSum435172;
  long x435539 = x435538+(x435536);
  mallocSum435172 = x435539;
  long x435541 = mallocSym_426573_431695;
  numeric_int_t x435542 = sizeof(struct Q9GRPRecord);
  long x435543 = (long){x435542};
  long x435544 = x435541*(x435543);
  printf("433210 with type Q9GRPRecord: %ld\n", x435544);
  long x435546 = mallocSum435172;
  long x435547 = x435546+(x435544);
  mallocSum435172 = x435547;
  long x435549 = mallocSym_397703_431696;
  numeric_int_t x435550 = sizeof(struct Q9GRPRecord);
  long x435551 = (long){x435550};
  long x435552 = x435549*(x435551);
  printf("434443 with type Q9GRPRecord: %ld\n", x435552);
  long x435554 = mallocSum435172;
  long x435555 = x435554+(x435552);
  mallocSum435172 = x435555;
  long x435557 = mallocSym_427337_431697;
  numeric_int_t x435558 = sizeof(numeric_int_t);
  long x435559 = (long){x435558};
  long x435560 = x435557*(x435559);
  printf("434018 with type Int: %ld\n", x435560);
  long x435562 = mallocSum435172;
  long x435563 = x435562+(x435560);
  mallocSum435172 = x435563;
  long x435565 = mallocSym_395881_431698;
  numeric_int_t x435566 = sizeof(char);
  long x435567 = (long){x435566};
  long x435568 = x435565*(x435567);
  printf("432316 with type Byte: %ld\n", x435568);
  long x435570 = mallocSum435172;
  long x435571 = x435570+(x435568);
  mallocSum435172 = x435571;
  long x435573 = mallocSym_397448_431699;
  numeric_int_t x435574 = sizeof(struct Set_AGGRecord_Q9GRPRecord);
  long x435575 = (long){x435574};
  long x435576 = x435573*(x435575);
  printf("433963 with type Set_AGGRecord_Q9GRPRecord: %ld\n", x435576);
  long x435578 = mallocSum435172;
  long x435579 = x435578+(x435576);
  mallocSum435172 = x435579;
  long x435581 = mallocSym_425581_431700;
  numeric_int_t x435582 = sizeof(struct ORDERSRecord);
  long x435583 = (long){x435582};
  long x435584 = x435581*(x435583);
  printf("432089 with type ORDERSRecord: %ld\n", x435584);
  long x435586 = mallocSum435172;
  long x435587 = x435586+(x435584);
  mallocSum435172 = x435587;
  long x435589 = mallocSym_395812_431701;
  numeric_int_t x435590 = sizeof(char);
  long x435591 = (long){x435590};
  long x435592 = x435589*(x435591);
  printf("432224 with type Byte: %ld\n", x435592);
  long x435594 = mallocSum435172;
  long x435595 = x435594+(x435592);
  mallocSum435172 = x435595;
  long x435597 = mallocSym_427318_431702;
  numeric_int_t x435598 = sizeof(struct ORDERSRecord);
  long x435599 = (long){x435598};
  long x435600 = x435597*(x435599);
  printf("433991 with type ORDERSRecord: %ld\n", x435600);
  long x435602 = mallocSum435172;
  long x435603 = x435602+(x435600);
  mallocSum435172 = x435603;
  long x435605 = mallocSym_397053_431703;
  numeric_int_t x435606 = sizeof(struct ORDERSRecord);
  long x435607 = (long){x435606};
  long x435608 = x435605*(x435607);
  printf("432232 with type ORDERSRecord: %ld\n", x435608);
  long x435610 = mallocSum435172;
  long x435611 = x435610+(x435608);
  mallocSum435172 = x435611;
  long x435613 = mallocSym_397721_431704;
  numeric_int_t x435614 = sizeof(struct AGGRecord_Q9GRPRecord);
  long x435615 = (long){x435614};
  long x435616 = x435613*(x435615);
  printf("434469 with type AGGRecord_Q9GRPRecord: %ld\n", x435616);
  long x435618 = mallocSum435172;
  long x435619 = x435618+(x435616);
  mallocSum435172 = x435619;
  long x435621 = mallocSym_425805_431705;
  numeric_int_t x435622 = sizeof(struct SUPPLIERRecord);
  long x435623 = (long){x435622};
  long x435624 = x435621*(x435623);
  printf("432345 with type SUPPLIERRecord: %ld\n", x435624);
  long x435626 = mallocSum435172;
  long x435627 = x435626+(x435624);
  mallocSum435172 = x435627;
  long x435629 = mallocSym_412116_431706;
  numeric_int_t x435630 = sizeof(struct LINEITEMRecord);
  long x435631 = (long){x435630};
  long x435632 = x435629*(x435631);
  printf("434149 with type LINEITEMRecord: %ld\n", x435632);
  long x435634 = mallocSum435172;
  long x435635 = x435634+(x435632);
  mallocSum435172 = x435635;
  long x435637 = mallocSum435172;
  printf("total: %ld\n", x435637);
}
/* ----------- FUNCTIONS ----------- */
boolean_t x427490(char** x400100, char** x400101) {
  char* x400102 = *x400101;
  char* x400103 = *x400100;
  numeric_int_t x409432 = strcmp(x400102, x400103);
  boolean_t x400105 = x409432<(0);
  return x400105; 
}

numeric_int_t x427802(struct AGGRecord_Q9GRPRecord* x376522, struct AGGRecord_Q9GRPRecord* x376523) {
  struct Q9GRPRecord* x376524 = x376522->key;
  struct Q9GRPRecord* x376525 = x376523->key;
  numeric_int_t x389060 = x376524->NATION;
  numeric_int_t x389061 = x376525->NATION;
  numeric_int_t x389062 = x389060-(x389061);
  boolean_t x376529 = x389062==(0);
  /* VAR */ numeric_int_t ite418172 = 0;
  if(x376529) {
    numeric_int_t x418173 = x376524->O_YEAR;
    numeric_int_t x418174 = x376525->O_YEAR;
    boolean_t x418175 = x418173<(x418174);
    /* VAR */ numeric_int_t ite418177 = 0;
    if(x418175) {
      ite418177 = 1;
    } else {
      
      boolean_t x418179 = x418173>(x418174);
      /* VAR */ numeric_int_t ite418181 = 0;
      if(x418179) {
        ite418181 = -1;
      } else {
        
        ite418181 = 0;
      };
      numeric_int_t x418180 = ite418181;
      ite418177 = x418180;
    };
    numeric_int_t x418176 = ite418177;
    ite418172 = x418176;
  } else {
    
    ite418172 = x389062;
  };
  numeric_int_t x376536 = ite418172;
  return x376536; 
}

numeric_int_t x400494(void* x400488, void* x400489, void* x400490) {
  struct AGGRecord_Q9GRPRecord** x400491 = (struct AGGRecord_Q9GRPRecord**){x400490};
  struct AGGRecord_Q9GRPRecord* x400492 = (struct AGGRecord_Q9GRPRecord*){x400489};
  pointer_assign(x400491, x400492);
  return 1; 
}
