#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct LINEITEMRecord;
struct REGIONRecord;
struct NATIONRecord;
struct ORDERSRecord;
struct PARTRecord;
struct AGGRecord_Int;
struct SUPPLIERRecord;
struct CUSTOMERRecord;
struct LINEITEMRecord {
  numeric_int_t L_ORDERKEY;
  numeric_int_t L_PARTKEY;
  numeric_int_t L_SUPPKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
};

struct REGIONRecord {
  numeric_int_t R_REGIONKEY;
  numeric_int_t R_NAME;
};

struct NATIONRecord {
  numeric_int_t N_NATIONKEY;
  numeric_int_t N_NAME;
  numeric_int_t N_REGIONKEY;
};

struct ORDERSRecord {
  numeric_int_t O_ORDERKEY;
  numeric_int_t O_CUSTKEY;
  numeric_int_t O_ORDERDATE;
};

struct PARTRecord {
  numeric_int_t P_PARTKEY;
  numeric_int_t P_TYPE;
};

struct AGGRecord_Int {
  numeric_int_t key;
  double* aggs;
  struct AGGRecord_Int* next;
};

struct SUPPLIERRecord {
  numeric_int_t S_SUPPKEY;
  numeric_int_t S_NATIONKEY;
};

struct CUSTOMERRecord {
  numeric_int_t C_CUSTKEY;
  numeric_int_t C_NATIONKEY;
};


numeric_int_t x367627(struct AGGRecord_Int* x308640, struct AGGRecord_Int* x308641);

numeric_int_t x342766(void* x342760, void* x342761, void* x342762);

int main(int argc, char** argv) {
  /* VAR */ long mallocSym_338483_370748 = 0L;
  /* VAR */ long mallocSym_337749_370749 = 0L;
  /* VAR */ long mallocSym_365945_370750 = 0L;
  /* VAR */ long mallocSym_339584_370751 = 0L;
  /* VAR */ long mallocSym_339900_370752 = 0L;
  /* VAR */ long mallocSym_338081_370753 = 0L;
  /* VAR */ long mallocSym_367393_370754 = 0L;
  /* VAR */ long mallocSym_339035_370755 = 0L;
  /* VAR */ long mallocSym_367423_370756 = 0L;
  /* VAR */ long mallocSym_338196_370757 = 0L;
  /* VAR */ long mallocSym_337728_370758 = 0L;
  /* VAR */ long mallocSym_337942_370759 = 0L;
  /* VAR */ long mallocSym_338467_370760 = 0L;
  /* VAR */ long mallocSym_338102_370761 = 0L;
  /* VAR */ long mallocSym_337770_370762 = 0L;
  /* VAR */ long mallocSym_338626_370763 = 0L;
  /* VAR */ long mallocSym_365507_370764 = 0L;
  /* VAR */ long mallocSym_338567_370765 = 0L;
  /* VAR */ long mallocSym_339228_370766 = 0L;
  /* VAR */ long mallocSym_337958_370767 = 0L;
  /* VAR */ long mallocSym_366392_370768 = 0L;
  /* VAR */ long mallocSym_367399_370769 = 0L;
  /* VAR */ long mallocSym_367516_370770 = 0L;
  /* VAR */ long mallocSym_339491_370771 = 0L;
  /* VAR */ long mallocSym_338159_370772 = 0L;
  /* VAR */ long mallocSym_337712_370773 = 0L;
  /* VAR */ long mallocSym_367424_370774 = 0L;
  /* VAR */ long mallocSym_366529_370775 = 0L;
  /* VAR */ long mallocSym_338397_370776 = 0L;
  /* VAR */ long mallocSym_339789_370777 = 0L;
  /* VAR */ long mallocSym_338568_370778 = 0L;
  /* VAR */ long mallocSym_338217_370779 = 0L;
  /* VAR */ long mallocSym_337696_370780 = 0L;
  /* VAR */ long mallocSym_337680_370781 = 0L;
  /* VAR */ long mallocSym_339358_370782 = 0L;
  /* VAR */ long mallocSym_366250_370783 = 0L;
  /* VAR */ long mallocSym_355046_370784 = 0L;
  /* VAR */ long mallocSym_338175_370785 = 0L;
  /* VAR */ long mallocSym_338620_370786 = 0L;
  /* VAR */ long mallocSym_365735_370787 = 0L;
  /* VAR */ long mallocSym_339672_370788 = 0L;
  /* VAR */ long mallocSym_338065_370789 = 0L;
  /* VAR */ long mallocSym_338381_370790 = 0L;
  /* VAR */ long mallocSym_338632_370791 = 0L;
  /* VAR */ long mallocSym_367504_370792 = 0L;
  /* VAR */ long mallocSym_338552_370793 = 0L;
  /* VAR */ long mallocSym_366092_370794 = 0L;
  /* VAR */ long mallocSym_338290_370795 = 0L;
  /* VAR */ long mallocSym_338504_370796 = 0L;
  /* VAR */ long mallocSym_338525_370797 = 0L;
  /* VAR */ long mallocSym_338592_370798 = 0L;
  /* VAR */ long mallocSym_337974_370799 = 0L;
  /* VAR */ long mallocSym_338233_370800 = 0L;
  /* VAR */ long mallocSym_338311_370801 = 0L;
  /* VAR */ long mallocSym_338546_370802 = 0L;
  /* VAR */ numeric_int_t x332612 = 0;
  numeric_int_t x341406 = sizeof(char*);
  GArray* x341407 = g_array_new(0, 1, x341406);
  /* VAR */ numeric_int_t x332614 = 0;
  numeric_int_t x341409 = sizeof(char*);
  GArray* x341410 = g_array_new(0, 1, x341409);
  /* VAR */ numeric_int_t x332616 = 0;
  numeric_int_t x341412 = sizeof(char*);
  GArray* x341413 = g_array_new(0, 1, x341412);
  FILE* x365501 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ numeric_int_t x365502 = 0;
  numeric_int_t x365503 = x365502;
  numeric_int_t* x365504 = &x365503;
  numeric_int_t x365505 = fscanf(x365501, "%d", x365504);
  pclose(x365501);
  struct PARTRecord* x370818 = (struct PARTRecord*)malloc(x365503 * sizeof(struct PARTRecord));
  memset(x370818, 0, x365503 * sizeof(struct PARTRecord));
  long x370819 = mallocSym_365507_370764;
  mallocSym_365507_370764 = (x370819+(((long){x365503})));
  numeric_int_t x365508 = O_RDONLY;
  numeric_int_t x365509 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x365508);
  struct stat x365510 = (struct stat){0};
  /* VAR */ struct stat x365511 = x365510;
  struct stat x365512 = x365511;
  struct stat* x365513 = &x365512;
  numeric_int_t x365514 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x365513);
  numeric_int_t x365516 = PROT_READ;
  numeric_int_t x365517 = MAP_PRIVATE;
  char* x365518 = mmap(NULL, (x365513->st_size), x365516, x365517, x365509, 0);
  /* VAR */ numeric_int_t x365519 = 0;
  while(1) {
    
    numeric_int_t x308326 = x365519;
    /* VAR */ boolean_t ite360141 = 0;
    if((x308326<(x365503))) {
      char x365525 = *x365518;
      ite360141 = (x365525!=('\0'));
    } else {
      
      ite360141 = 0;
    };
    boolean_t x357869 = ite360141;
    if (!(x357869)) break; 
    
    /* VAR */ numeric_int_t x335302 = 0;
    numeric_int_t x335303 = x335302;
    numeric_int_t* x335304 = &x335303;
    char* x335305 = strntoi_unchecked(x365518, x335304);
    x365518 = x335305;
    /* VAR */ char* x335307 = x365518;
    while(1) {
      
      char x335308 = *x365518;
      /* VAR */ boolean_t ite360159 = 0;
      if((x335308!=('|'))) {
        char x365542 = *x365518;
        ite360159 = (x365542!=('\n'));
      } else {
        
        ite360159 = 0;
      };
      boolean_t x357880 = ite360159;
      if (!(x357880)) break; 
      
      x365518 += 1;
    };
    char* x335315 = x335307;
    numeric_int_t x335316 = x365518 - x335315;
    numeric_int_t x335317 = x335316+(1);
    char* x370867 = (char*)malloc(x335317 * sizeof(char));
    memset(x370867, 0, x335317 * sizeof(char));
    long x370868 = mallocSym_337680_370781;
    mallocSym_337680_370781 = (x370868+(((long){x335317})));
    char* x335320 = x335307;
    char* x335321 = strncpy(x370867, x335320, x335316);
    x365518 += 1;
    /* VAR */ char* x335323 = x365518;
    while(1) {
      
      char x335324 = *x365518;
      /* VAR */ boolean_t ite360180 = 0;
      if((x335324!=('|'))) {
        char x365562 = *x365518;
        ite360180 = (x365562!=('\n'));
      } else {
        
        ite360180 = 0;
      };
      boolean_t x357894 = ite360180;
      if (!(x357894)) break; 
      
      x365518 += 1;
    };
    char* x335331 = x335323;
    numeric_int_t x335332 = x365518 - x335331;
    numeric_int_t x335333 = x335332+(1);
    char* x370891 = (char*)malloc(x335333 * sizeof(char));
    memset(x370891, 0, x335333 * sizeof(char));
    long x370892 = mallocSym_337696_370780;
    mallocSym_337696_370780 = (x370892+(((long){x335333})));
    char* x335336 = x335323;
    char* x335337 = strncpy(x370891, x335336, x335332);
    x365518 += 1;
    /* VAR */ char* x335339 = x365518;
    while(1) {
      
      char x335340 = *x365518;
      /* VAR */ boolean_t ite360201 = 0;
      if((x335340!=('|'))) {
        char x365582 = *x365518;
        ite360201 = (x365582!=('\n'));
      } else {
        
        ite360201 = 0;
      };
      boolean_t x357908 = ite360201;
      if (!(x357908)) break; 
      
      x365518 += 1;
    };
    char* x335347 = x335339;
    numeric_int_t x335348 = x365518 - x335347;
    numeric_int_t x335349 = x335348+(1);
    char* x370915 = (char*)malloc(x335349 * sizeof(char));
    memset(x370915, 0, x335349 * sizeof(char));
    long x370916 = mallocSym_337712_370773;
    mallocSym_337712_370773 = (x370916+(((long){x335349})));
    char* x335352 = x335339;
    char* x335353 = strncpy(x370915, x335352, x335348);
    x365518 += 1;
    /* VAR */ char* x335355 = x365518;
    while(1) {
      
      char x335356 = *x365518;
      /* VAR */ boolean_t ite360222 = 0;
      if((x335356!=('|'))) {
        char x365602 = *x365518;
        ite360222 = (x365602!=('\n'));
      } else {
        
        ite360222 = 0;
      };
      boolean_t x357922 = ite360222;
      if (!(x357922)) break; 
      
      x365518 += 1;
    };
    char* x335363 = x335355;
    numeric_int_t x335364 = x365518 - x335363;
    numeric_int_t x335365 = x335364+(1);
    char* x370939 = (char*)malloc(x335365 * sizeof(char));
    memset(x370939, 0, x335365 * sizeof(char));
    long x370940 = mallocSym_337728_370758;
    mallocSym_337728_370758 = (x370940+(((long){x335365})));
    char* x335368 = x335355;
    char* x335369 = strncpy(x370939, x335368, x335364);
    x365518 += 1;
    /* VAR */ numeric_int_t x335371 = 0;
    numeric_int_t x335372 = x335371;
    numeric_int_t* x335373 = &x335372;
    char* x335374 = strntoi_unchecked(x365518, x335373);
    x365518 = x335374;
    /* VAR */ char* x335376 = x365518;
    while(1) {
      
      char x335377 = *x365518;
      /* VAR */ boolean_t ite360248 = 0;
      if((x335377!=('|'))) {
        char x365627 = *x365518;
        ite360248 = (x365627!=('\n'));
      } else {
        
        ite360248 = 0;
      };
      boolean_t x357941 = ite360248;
      if (!(x357941)) break; 
      
      x365518 += 1;
    };
    char* x335384 = x335376;
    numeric_int_t x335385 = x365518 - x335384;
    numeric_int_t x335386 = x335385+(1);
    char* x370968 = (char*)malloc(x335386 * sizeof(char));
    memset(x370968, 0, x335386 * sizeof(char));
    long x370969 = mallocSym_337749_370749;
    mallocSym_337749_370749 = (x370969+(((long){x335386})));
    char* x335389 = x335376;
    char* x335390 = strncpy(x370968, x335389, x335385);
    x365518 += 1;
    /* VAR */ double x335392 = 0.0;
    double x335393 = x335392;
    double* x335394 = &x335393;
    char* x335395 = strntod_unchecked(x365518, x335394);
    x365518 = x335395;
    /* VAR */ char* x335397 = x365518;
    while(1) {
      
      char x335398 = *x365518;
      /* VAR */ boolean_t ite360274 = 0;
      if((x335398!=('|'))) {
        char x365652 = *x365518;
        ite360274 = (x365652!=('\n'));
      } else {
        
        ite360274 = 0;
      };
      boolean_t x357960 = ite360274;
      if (!(x357960)) break; 
      
      x365518 += 1;
    };
    char* x335405 = x335397;
    numeric_int_t x335406 = x365518 - x335405;
    numeric_int_t x335407 = x335406+(1);
    char* x370997 = (char*)malloc(x335407 * sizeof(char));
    memset(x370997, 0, x335407 * sizeof(char));
    long x370998 = mallocSym_337770_370762;
    mallocSym_337770_370762 = (x370998+(((long){x335407})));
    char* x335410 = x335397;
    char* x335411 = strncpy(x370997, x335410, x335406);
    x365518 += 1;
    numeric_int_t x332637 = x332614;
    if((x332637>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "P_TYPE", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "P_TYPE");
    };
    /* VAR */ numeric_int_t x341556 = -1;
    numeric_int_t x341557 = x341410->len;
    numeric_int_t x354111 = 0;
    for(; x354111 < x341557 ; x354111 += 1) {
      
      char* x354112 = g_array_index(x341410, char*, x354111);
      boolean_t x354113 = strcmp(x354112, x370939);
      boolean_t x354114 = !(x354113);
      if(x354114) {
        x341556 = x354111;
        break;
      };
    };
    numeric_int_t x341567 = x341556;
    boolean_t x332643 = !((x341567!=(-1)));
    if(x332643) {
      numeric_int_t x332644 = x332614;
      x332614 = (x332644+(1));
      void* x341574 = &(x370939);
      GArray* x341575 = g_array_append_vals(x341410, x341574, 1);
    };
    /* VAR */ numeric_int_t x341576 = -1;
    numeric_int_t x341577 = x341410->len;
    numeric_int_t x354138 = 0;
    for(; x354138 < x341577 ; x354138 += 1) {
      
      char* x354139 = g_array_index(x341410, char*, x354138);
      boolean_t x354140 = strcmp(x354139, x370939);
      boolean_t x354141 = !(x354140);
      if(x354141) {
        x341576 = x354138;
        break;
      };
    };
    numeric_int_t x341587 = x341576;
    struct PARTRecord* x371054 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x371054, 0, 1 * sizeof(struct PARTRecord));
    long x371055 = mallocSym_339035_370755;
    mallocSym_339035_370755 = (x371055+(((long){1})));
    x371054->P_PARTKEY = x335303; x371054->P_TYPE = x341587;
    numeric_int_t x308340 = x365519;
    if((x371054==(NULL))) {
      *(x370818 + x308340) = (const struct PARTRecord){0};
    } else {
      
      struct PARTRecord x337792 = *x371054;
      *(x370818 + x308340) = x337792;
      struct PARTRecord* x337794 = &(x370818[x308340]);
      x371054 = x337794;
    };
    numeric_int_t x308342 = x365519;
    x365519 = (x308342+(1));
  };
  FILE* x365729 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x365730 = 0;
  numeric_int_t x365731 = x365730;
  numeric_int_t* x365732 = &x365731;
  numeric_int_t x365733 = fscanf(x365729, "%d", x365732);
  pclose(x365729);
  struct LINEITEMRecord* x371078 = (struct LINEITEMRecord*)malloc(x365731 * sizeof(struct LINEITEMRecord));
  memset(x371078, 0, x365731 * sizeof(struct LINEITEMRecord));
  long x371079 = mallocSym_365735_370787;
  mallocSym_365735_370787 = (x371079+(((long){x365731})));
  numeric_int_t x365736 = O_RDONLY;
  numeric_int_t x365737 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x365736);
  /* VAR */ struct stat x365738 = x365510;
  struct stat x365739 = x365738;
  struct stat* x365740 = &x365739;
  numeric_int_t x365741 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x365740);
  numeric_int_t x365743 = PROT_READ;
  numeric_int_t x365744 = MAP_PRIVATE;
  char* x365745 = mmap(NULL, (x365740->st_size), x365743, x365744, x365737, 0);
  /* VAR */ numeric_int_t x365746 = 0;
  while(1) {
    
    numeric_int_t x308350 = x365746;
    /* VAR */ boolean_t ite360375 = 0;
    if((x308350<(x365731))) {
      char x365752 = *x365745;
      ite360375 = (x365752!=('\0'));
    } else {
      
      ite360375 = 0;
    };
    boolean_t x358054 = ite360375;
    if (!(x358054)) break; 
    
    /* VAR */ numeric_int_t x335456 = 0;
    numeric_int_t x335457 = x335456;
    numeric_int_t* x335458 = &x335457;
    char* x335459 = strntoi_unchecked(x365745, x335458);
    x365745 = x335459;
    /* VAR */ numeric_int_t x335461 = 0;
    numeric_int_t x335462 = x335461;
    numeric_int_t* x335463 = &x335462;
    char* x335464 = strntoi_unchecked(x365745, x335463);
    x365745 = x335464;
    /* VAR */ numeric_int_t x335466 = 0;
    numeric_int_t x335467 = x335466;
    numeric_int_t* x335468 = &x335467;
    char* x335469 = strntoi_unchecked(x365745, x335468);
    x365745 = x335469;
    /* VAR */ numeric_int_t x335471 = 0;
    numeric_int_t x335472 = x335471;
    numeric_int_t* x335473 = &x335472;
    char* x335474 = strntoi_unchecked(x365745, x335473);
    x365745 = x335474;
    /* VAR */ double x335476 = 0.0;
    double x335477 = x335476;
    double* x335478 = &x335477;
    char* x335479 = strntod_unchecked(x365745, x335478);
    x365745 = x335479;
    /* VAR */ double x335481 = 0.0;
    double x335482 = x335481;
    double* x335483 = &x335482;
    char* x335484 = strntod_unchecked(x365745, x335483);
    x365745 = x335484;
    /* VAR */ double x335486 = 0.0;
    double x335487 = x335486;
    double* x335488 = &x335487;
    char* x335489 = strntod_unchecked(x365745, x335488);
    x365745 = x335489;
    /* VAR */ double x335491 = 0.0;
    double x335492 = x335491;
    double* x335493 = &x335492;
    char* x335494 = strntod_unchecked(x365745, x335493);
    x365745 = x335494;
    char x335496 = *x365745;
    /* VAR */ char x335497 = x335496;
    x365745 += 1;
    x365745 += 1;
    char x335501 = *x365745;
    /* VAR */ char x335502 = x335501;
    x365745 += 1;
    x365745 += 1;
    /* VAR */ numeric_int_t x335506 = 0;
    numeric_int_t x335507 = x335506;
    numeric_int_t* x335508 = &x335507;
    char* x335509 = strntoi_unchecked(x365745, x335508);
    x365745 = x335509;
    /* VAR */ numeric_int_t x335511 = 0;
    numeric_int_t x335512 = x335511;
    numeric_int_t* x335513 = &x335512;
    char* x335514 = strntoi_unchecked(x365745, x335513);
    x365745 = x335514;
    /* VAR */ numeric_int_t x335516 = 0;
    numeric_int_t x335517 = x335516;
    numeric_int_t* x335518 = &x335517;
    char* x335519 = strntoi_unchecked(x365745, x335518);
    x365745 = x335519;
    /* VAR */ numeric_int_t x335525 = 0;
    numeric_int_t x335526 = x335525;
    numeric_int_t* x335527 = &x335526;
    char* x335528 = strntoi_unchecked(x365745, x335527);
    x365745 = x335528;
    /* VAR */ numeric_int_t x335530 = 0;
    numeric_int_t x335531 = x335530;
    numeric_int_t* x335532 = &x335531;
    char* x335533 = strntoi_unchecked(x365745, x335532);
    x365745 = x335533;
    /* VAR */ numeric_int_t x335535 = 0;
    numeric_int_t x335536 = x335535;
    numeric_int_t* x335537 = &x335536;
    char* x335538 = strntoi_unchecked(x365745, x335537);
    x365745 = x335538;
    /* VAR */ numeric_int_t x335544 = 0;
    numeric_int_t x335545 = x335544;
    numeric_int_t* x335546 = &x335545;
    char* x335547 = strntoi_unchecked(x365745, x335546);
    x365745 = x335547;
    /* VAR */ numeric_int_t x335549 = 0;
    numeric_int_t x335550 = x335549;
    numeric_int_t* x335551 = &x335550;
    char* x335552 = strntoi_unchecked(x365745, x335551);
    x365745 = x335552;
    /* VAR */ numeric_int_t x335554 = 0;
    numeric_int_t x335555 = x335554;
    numeric_int_t* x335556 = &x335555;
    char* x335557 = strntoi_unchecked(x365745, x335556);
    x365745 = x335557;
    /* VAR */ char* x335563 = x365745;
    while(1) {
      
      char x335564 = *x365745;
      /* VAR */ boolean_t ite360495 = 0;
      if((x335564!=('|'))) {
        char x365871 = *x365745;
        ite360495 = (x365871!=('\n'));
      } else {
        
        ite360495 = 0;
      };
      boolean_t x358167 = ite360495;
      if (!(x358167)) break; 
      
      x365745 += 1;
    };
    char* x335571 = x335563;
    numeric_int_t x335572 = x365745 - x335571;
    numeric_int_t x335573 = x335572+(1);
    char* x371228 = (char*)malloc(x335573 * sizeof(char));
    memset(x371228, 0, x335573 * sizeof(char));
    long x371229 = mallocSym_337942_370759;
    mallocSym_337942_370759 = (x371229+(((long){x335573})));
    char* x335576 = x335563;
    char* x335577 = strncpy(x371228, x335576, x335572);
    x365745 += 1;
    /* VAR */ char* x335579 = x365745;
    while(1) {
      
      char x335580 = *x365745;
      /* VAR */ boolean_t ite360516 = 0;
      if((x335580!=('|'))) {
        char x365891 = *x365745;
        ite360516 = (x365891!=('\n'));
      } else {
        
        ite360516 = 0;
      };
      boolean_t x358181 = ite360516;
      if (!(x358181)) break; 
      
      x365745 += 1;
    };
    char* x335587 = x335579;
    numeric_int_t x335588 = x365745 - x335587;
    numeric_int_t x335589 = x335588+(1);
    char* x371252 = (char*)malloc(x335589 * sizeof(char));
    memset(x371252, 0, x335589 * sizeof(char));
    long x371253 = mallocSym_337958_370767;
    mallocSym_337958_370767 = (x371253+(((long){x335589})));
    char* x335592 = x335579;
    char* x335593 = strncpy(x371252, x335592, x335588);
    x365745 += 1;
    /* VAR */ char* x335595 = x365745;
    while(1) {
      
      char x335596 = *x365745;
      /* VAR */ boolean_t ite360537 = 0;
      if((x335596!=('|'))) {
        char x365911 = *x365745;
        ite360537 = (x365911!=('\n'));
      } else {
        
        ite360537 = 0;
      };
      boolean_t x358195 = ite360537;
      if (!(x358195)) break; 
      
      x365745 += 1;
    };
    char* x335603 = x335595;
    numeric_int_t x335604 = x365745 - x335603;
    numeric_int_t x335605 = x335604+(1);
    char* x371276 = (char*)malloc(x335605 * sizeof(char));
    memset(x371276, 0, x335605 * sizeof(char));
    long x371277 = mallocSym_337974_370799;
    mallocSym_337974_370799 = (x371277+(((long){x335605})));
    char* x335608 = x335595;
    char* x335609 = strncpy(x371276, x335608, x335604);
    x365745 += 1;
    struct LINEITEMRecord* x371284 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x371284, 0, 1 * sizeof(struct LINEITEMRecord));
    long x371285 = mallocSym_339228_370766;
    mallocSym_339228_370766 = (x371285+(((long){1})));
    x371284->L_ORDERKEY = x335457; x371284->L_PARTKEY = x335462; x371284->L_SUPPKEY = x335467; x371284->L_EXTENDEDPRICE = x335482; x371284->L_DISCOUNT = x335487;
    numeric_int_t x308371 = x365746;
    if((x371284==(NULL))) {
      *(x371078 + x308371) = (const struct LINEITEMRecord){0};
    } else {
      
      struct LINEITEMRecord x337983 = *x371284;
      *(x371078 + x308371) = x337983;
      struct LINEITEMRecord* x337985 = &(x371078[x308371]);
      x371284 = x337985;
    };
    numeric_int_t x308373 = x365746;
    x365746 = (x308373+(1));
  };
  FILE* x365939 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ numeric_int_t x365940 = 0;
  numeric_int_t x365941 = x365940;
  numeric_int_t* x365942 = &x365941;
  numeric_int_t x365943 = fscanf(x365939, "%d", x365942);
  pclose(x365939);
  struct ORDERSRecord* x371308 = (struct ORDERSRecord*)malloc(x365941 * sizeof(struct ORDERSRecord));
  memset(x371308, 0, x365941 * sizeof(struct ORDERSRecord));
  long x371309 = mallocSym_365945_370750;
  mallocSym_365945_370750 = (x371309+(((long){x365941})));
  numeric_int_t x365946 = O_RDONLY;
  numeric_int_t x365947 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x365946);
  /* VAR */ struct stat x365948 = x365510;
  struct stat x365949 = x365948;
  struct stat* x365950 = &x365949;
  numeric_int_t x365951 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x365950);
  numeric_int_t x365953 = PROT_READ;
  numeric_int_t x365954 = MAP_PRIVATE;
  char* x365955 = mmap(NULL, (x365950->st_size), x365953, x365954, x365947, 0);
  /* VAR */ numeric_int_t x365956 = 0;
  while(1) {
    
    numeric_int_t x308381 = x365956;
    /* VAR */ boolean_t ite360589 = 0;
    if((x308381<(x365941))) {
      char x365962 = *x365955;
      ite360589 = (x365962!=('\0'));
    } else {
      
      ite360589 = 0;
    };
    boolean_t x358240 = ite360589;
    if (!(x358240)) break; 
    
    /* VAR */ numeric_int_t x335641 = 0;
    numeric_int_t x335642 = x335641;
    numeric_int_t* x335643 = &x335642;
    char* x335644 = strntoi_unchecked(x365955, x335643);
    x365955 = x335644;
    /* VAR */ numeric_int_t x335646 = 0;
    numeric_int_t x335647 = x335646;
    numeric_int_t* x335648 = &x335647;
    char* x335649 = strntoi_unchecked(x365955, x335648);
    x365955 = x335649;
    char x335651 = *x365955;
    /* VAR */ char x335652 = x335651;
    x365955 += 1;
    x365955 += 1;
    /* VAR */ double x335656 = 0.0;
    double x335657 = x335656;
    double* x335658 = &x335657;
    char* x335659 = strntod_unchecked(x365955, x335658);
    x365955 = x335659;
    /* VAR */ numeric_int_t x335661 = 0;
    numeric_int_t x335662 = x335661;
    numeric_int_t* x335663 = &x335662;
    char* x335664 = strntoi_unchecked(x365955, x335663);
    x365955 = x335664;
    /* VAR */ numeric_int_t x335666 = 0;
    numeric_int_t x335667 = x335666;
    numeric_int_t* x335668 = &x335667;
    char* x335669 = strntoi_unchecked(x365955, x335668);
    x365955 = x335669;
    /* VAR */ numeric_int_t x335671 = 0;
    numeric_int_t x335672 = x335671;
    numeric_int_t* x335673 = &x335672;
    char* x335674 = strntoi_unchecked(x365955, x335673);
    x365955 = x335674;
    /* VAR */ char* x335680 = x365955;
    while(1) {
      
      char x335681 = *x365955;
      /* VAR */ boolean_t ite360641 = 0;
      if((x335681!=('|'))) {
        char x366013 = *x365955;
        ite360641 = (x366013!=('\n'));
      } else {
        
        ite360641 = 0;
      };
      boolean_t x358285 = ite360641;
      if (!(x358285)) break; 
      
      x365955 += 1;
    };
    char* x335688 = x335680;
    numeric_int_t x335689 = x365955 - x335688;
    numeric_int_t x335690 = x335689+(1);
    char* x371390 = (char*)malloc(x335690 * sizeof(char));
    memset(x371390, 0, x335690 * sizeof(char));
    long x371391 = mallocSym_338065_370789;
    mallocSym_338065_370789 = (x371391+(((long){x335690})));
    char* x335693 = x335680;
    char* x335694 = strncpy(x371390, x335693, x335689);
    x365955 += 1;
    /* VAR */ char* x335696 = x365955;
    while(1) {
      
      char x335697 = *x365955;
      /* VAR */ boolean_t ite360662 = 0;
      if((x335697!=('|'))) {
        char x366033 = *x365955;
        ite360662 = (x366033!=('\n'));
      } else {
        
        ite360662 = 0;
      };
      boolean_t x358299 = ite360662;
      if (!(x358299)) break; 
      
      x365955 += 1;
    };
    char* x335704 = x335696;
    numeric_int_t x335705 = x365955 - x335704;
    numeric_int_t x335706 = x335705+(1);
    char* x371414 = (char*)malloc(x335706 * sizeof(char));
    memset(x371414, 0, x335706 * sizeof(char));
    long x371415 = mallocSym_338081_370753;
    mallocSym_338081_370753 = (x371415+(((long){x335706})));
    char* x335709 = x335696;
    char* x335710 = strncpy(x371414, x335709, x335705);
    x365955 += 1;
    /* VAR */ numeric_int_t x335712 = 0;
    numeric_int_t x335713 = x335712;
    numeric_int_t* x335714 = &x335713;
    char* x335715 = strntoi_unchecked(x365955, x335714);
    x365955 = x335715;
    /* VAR */ char* x335717 = x365955;
    while(1) {
      
      char x335718 = *x365955;
      /* VAR */ boolean_t ite360688 = 0;
      if((x335718!=('|'))) {
        char x366058 = *x365955;
        ite360688 = (x366058!=('\n'));
      } else {
        
        ite360688 = 0;
      };
      boolean_t x358318 = ite360688;
      if (!(x358318)) break; 
      
      x365955 += 1;
    };
    char* x335725 = x335717;
    numeric_int_t x335726 = x365955 - x335725;
    numeric_int_t x335727 = x335726+(1);
    char* x371443 = (char*)malloc(x335727 * sizeof(char));
    memset(x371443, 0, x335727 * sizeof(char));
    long x371444 = mallocSym_338102_370761;
    mallocSym_338102_370761 = (x371444+(((long){x335727})));
    char* x335730 = x335717;
    char* x335731 = strncpy(x371443, x335730, x335726);
    x365955 += 1;
    struct ORDERSRecord* x371451 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x371451, 0, 1 * sizeof(struct ORDERSRecord));
    long x371452 = mallocSym_339358_370782;
    mallocSym_339358_370782 = (x371452+(((long){1})));
    x371451->O_ORDERKEY = x335642; x371451->O_CUSTKEY = x335647; x371451->O_ORDERDATE = (((x335662*(10000))+((x335667*(100))))+(x335672));
    numeric_int_t x308395 = x365956;
    if((x371451==(NULL))) {
      *(x371308 + x308395) = (const struct ORDERSRecord){0};
    } else {
      
      struct ORDERSRecord x338111 = *x371451;
      *(x371308 + x308395) = x338111;
      struct ORDERSRecord* x338113 = &(x371308[x308395]);
      x371451 = x338113;
    };
    numeric_int_t x308397 = x365956;
    x365956 = (x308397+(1));
  };
  FILE* x366086 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ numeric_int_t x366087 = 0;
  numeric_int_t x366088 = x366087;
  numeric_int_t* x366089 = &x366088;
  numeric_int_t x366090 = fscanf(x366086, "%d", x366089);
  pclose(x366086);
  struct CUSTOMERRecord* x371475 = (struct CUSTOMERRecord*)malloc(x366088 * sizeof(struct CUSTOMERRecord));
  memset(x371475, 0, x366088 * sizeof(struct CUSTOMERRecord));
  long x371476 = mallocSym_366092_370794;
  mallocSym_366092_370794 = (x371476+(((long){x366088})));
  numeric_int_t x366093 = O_RDONLY;
  numeric_int_t x366094 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x366093);
  /* VAR */ struct stat x366095 = x365510;
  struct stat x366096 = x366095;
  struct stat* x366097 = &x366096;
  numeric_int_t x366098 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x366097);
  numeric_int_t x366100 = PROT_READ;
  numeric_int_t x366101 = MAP_PRIVATE;
  char* x366102 = mmap(NULL, (x366097->st_size), x366100, x366101, x366094, 0);
  /* VAR */ numeric_int_t x366103 = 0;
  while(1) {
    
    numeric_int_t x308405 = x366103;
    /* VAR */ boolean_t ite360740 = 0;
    if((x308405<(x366088))) {
      char x366109 = *x366102;
      ite360740 = (x366109!=('\0'));
    } else {
      
      ite360740 = 0;
    };
    boolean_t x358363 = ite360740;
    if (!(x358363)) break; 
    
    /* VAR */ numeric_int_t x335763 = 0;
    numeric_int_t x335764 = x335763;
    numeric_int_t* x335765 = &x335764;
    char* x335766 = strntoi_unchecked(x366102, x335765);
    x366102 = x335766;
    /* VAR */ char* x335768 = x366102;
    while(1) {
      
      char x335769 = *x366102;
      /* VAR */ boolean_t ite360758 = 0;
      if((x335769!=('|'))) {
        char x366126 = *x366102;
        ite360758 = (x366126!=('\n'));
      } else {
        
        ite360758 = 0;
      };
      boolean_t x358374 = ite360758;
      if (!(x358374)) break; 
      
      x366102 += 1;
    };
    char* x335776 = x335768;
    numeric_int_t x335777 = x366102 - x335776;
    numeric_int_t x335778 = x335777+(1);
    char* x371523 = (char*)malloc(x335778 * sizeof(char));
    memset(x371523, 0, x335778 * sizeof(char));
    long x371524 = mallocSym_338159_370772;
    mallocSym_338159_370772 = (x371524+(((long){x335778})));
    char* x335781 = x335768;
    char* x335782 = strncpy(x371523, x335781, x335777);
    x366102 += 1;
    /* VAR */ char* x335784 = x366102;
    while(1) {
      
      char x335785 = *x366102;
      /* VAR */ boolean_t ite360779 = 0;
      if((x335785!=('|'))) {
        char x366146 = *x366102;
        ite360779 = (x366146!=('\n'));
      } else {
        
        ite360779 = 0;
      };
      boolean_t x358388 = ite360779;
      if (!(x358388)) break; 
      
      x366102 += 1;
    };
    char* x335792 = x335784;
    numeric_int_t x335793 = x366102 - x335792;
    numeric_int_t x335794 = x335793+(1);
    char* x371547 = (char*)malloc(x335794 * sizeof(char));
    memset(x371547, 0, x335794 * sizeof(char));
    long x371548 = mallocSym_338175_370785;
    mallocSym_338175_370785 = (x371548+(((long){x335794})));
    char* x335797 = x335784;
    char* x335798 = strncpy(x371547, x335797, x335793);
    x366102 += 1;
    /* VAR */ numeric_int_t x335800 = 0;
    numeric_int_t x335801 = x335800;
    numeric_int_t* x335802 = &x335801;
    char* x335803 = strntoi_unchecked(x366102, x335802);
    x366102 = x335803;
    /* VAR */ char* x335805 = x366102;
    while(1) {
      
      char x335806 = *x366102;
      /* VAR */ boolean_t ite360805 = 0;
      if((x335806!=('|'))) {
        char x366171 = *x366102;
        ite360805 = (x366171!=('\n'));
      } else {
        
        ite360805 = 0;
      };
      boolean_t x358407 = ite360805;
      if (!(x358407)) break; 
      
      x366102 += 1;
    };
    char* x335813 = x335805;
    numeric_int_t x335814 = x366102 - x335813;
    numeric_int_t x335815 = x335814+(1);
    char* x371576 = (char*)malloc(x335815 * sizeof(char));
    memset(x371576, 0, x335815 * sizeof(char));
    long x371577 = mallocSym_338196_370757;
    mallocSym_338196_370757 = (x371577+(((long){x335815})));
    char* x335818 = x335805;
    char* x335819 = strncpy(x371576, x335818, x335814);
    x366102 += 1;
    /* VAR */ double x335821 = 0.0;
    double x335822 = x335821;
    double* x335823 = &x335822;
    char* x335824 = strntod_unchecked(x366102, x335823);
    x366102 = x335824;
    /* VAR */ char* x335826 = x366102;
    while(1) {
      
      char x335827 = *x366102;
      /* VAR */ boolean_t ite360831 = 0;
      if((x335827!=('|'))) {
        char x366196 = *x366102;
        ite360831 = (x366196!=('\n'));
      } else {
        
        ite360831 = 0;
      };
      boolean_t x358426 = ite360831;
      if (!(x358426)) break; 
      
      x366102 += 1;
    };
    char* x335834 = x335826;
    numeric_int_t x335835 = x366102 - x335834;
    numeric_int_t x335836 = x335835+(1);
    char* x371605 = (char*)malloc(x335836 * sizeof(char));
    memset(x371605, 0, x335836 * sizeof(char));
    long x371606 = mallocSym_338217_370779;
    mallocSym_338217_370779 = (x371606+(((long){x335836})));
    char* x335839 = x335826;
    char* x335840 = strncpy(x371605, x335839, x335835);
    x366102 += 1;
    /* VAR */ char* x335842 = x366102;
    while(1) {
      
      char x335843 = *x366102;
      /* VAR */ boolean_t ite360852 = 0;
      if((x335843!=('|'))) {
        char x366216 = *x366102;
        ite360852 = (x366216!=('\n'));
      } else {
        
        ite360852 = 0;
      };
      boolean_t x358440 = ite360852;
      if (!(x358440)) break; 
      
      x366102 += 1;
    };
    char* x335850 = x335842;
    numeric_int_t x335851 = x366102 - x335850;
    numeric_int_t x335852 = x335851+(1);
    char* x371629 = (char*)malloc(x335852 * sizeof(char));
    memset(x371629, 0, x335852 * sizeof(char));
    long x371630 = mallocSym_338233_370800;
    mallocSym_338233_370800 = (x371630+(((long){x335852})));
    char* x335855 = x335842;
    char* x335856 = strncpy(x371629, x335855, x335851);
    x366102 += 1;
    struct CUSTOMERRecord* x371637 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x371637, 0, 1 * sizeof(struct CUSTOMERRecord));
    long x371638 = mallocSym_339491_370771;
    mallocSym_339491_370771 = (x371638+(((long){1})));
    x371637->C_CUSTKEY = x335764; x371637->C_NATIONKEY = x335801;
    numeric_int_t x308418 = x366103;
    if((x371637==(NULL))) {
      *(x371475 + x308418) = (const struct CUSTOMERRecord){0};
    } else {
      
      struct CUSTOMERRecord x338242 = *x371637;
      *(x371475 + x308418) = x338242;
      struct CUSTOMERRecord* x338244 = &(x371475[x308418]);
      x371637 = x338244;
    };
    numeric_int_t x308420 = x366103;
    x366103 = (x308420+(1));
  };
  FILE* x366244 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ numeric_int_t x366245 = 0;
  numeric_int_t x366246 = x366245;
  numeric_int_t* x366247 = &x366246;
  numeric_int_t x366248 = fscanf(x366244, "%d", x366247);
  pclose(x366244);
  struct NATIONRecord* x371661 = (struct NATIONRecord*)malloc(x366246 * sizeof(struct NATIONRecord));
  memset(x371661, 0, x366246 * sizeof(struct NATIONRecord));
  long x371662 = mallocSym_366250_370783;
  mallocSym_366250_370783 = (x371662+(((long){x366246})));
  numeric_int_t x366251 = O_RDONLY;
  numeric_int_t x366252 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x366251);
  /* VAR */ struct stat x366253 = x365510;
  struct stat x366254 = x366253;
  struct stat* x366255 = &x366254;
  numeric_int_t x366256 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x366255);
  numeric_int_t x366258 = PROT_READ;
  numeric_int_t x366259 = MAP_PRIVATE;
  char* x366260 = mmap(NULL, (x366255->st_size), x366258, x366259, x366252, 0);
  /* VAR */ numeric_int_t x366261 = 0;
  while(1) {
    
    numeric_int_t x308428 = x366261;
    /* VAR */ boolean_t ite360904 = 0;
    if((x308428<(x366246))) {
      char x366267 = *x366260;
      ite360904 = (x366267!=('\0'));
    } else {
      
      ite360904 = 0;
    };
    boolean_t x358485 = ite360904;
    if (!(x358485)) break; 
    
    /* VAR */ numeric_int_t x335888 = 0;
    numeric_int_t x335889 = x335888;
    numeric_int_t* x335890 = &x335889;
    char* x335891 = strntoi_unchecked(x366260, x335890);
    x366260 = x335891;
    /* VAR */ char* x335893 = x366260;
    while(1) {
      
      char x335894 = *x366260;
      /* VAR */ boolean_t ite360922 = 0;
      if((x335894!=('|'))) {
        char x366284 = *x366260;
        ite360922 = (x366284!=('\n'));
      } else {
        
        ite360922 = 0;
      };
      boolean_t x358496 = ite360922;
      if (!(x358496)) break; 
      
      x366260 += 1;
    };
    char* x335901 = x335893;
    numeric_int_t x335902 = x366260 - x335901;
    numeric_int_t x335903 = x335902+(1);
    char* x371709 = (char*)malloc(x335903 * sizeof(char));
    memset(x371709, 0, x335903 * sizeof(char));
    long x371710 = mallocSym_338290_370795;
    mallocSym_338290_370795 = (x371710+(((long){x335903})));
    char* x335906 = x335893;
    char* x335907 = strncpy(x371709, x335906, x335902);
    x366260 += 1;
    /* VAR */ numeric_int_t x335909 = 0;
    numeric_int_t x335910 = x335909;
    numeric_int_t* x335911 = &x335910;
    char* x335912 = strntoi_unchecked(x366260, x335911);
    x366260 = x335912;
    /* VAR */ char* x335914 = x366260;
    while(1) {
      
      char x335915 = *x366260;
      /* VAR */ boolean_t ite360948 = 0;
      if((x335915!=('|'))) {
        char x366309 = *x366260;
        ite360948 = (x366309!=('\n'));
      } else {
        
        ite360948 = 0;
      };
      boolean_t x358515 = ite360948;
      if (!(x358515)) break; 
      
      x366260 += 1;
    };
    char* x335922 = x335914;
    numeric_int_t x335923 = x366260 - x335922;
    numeric_int_t x335924 = x335923+(1);
    char* x371738 = (char*)malloc(x335924 * sizeof(char));
    memset(x371738, 0, x335924 * sizeof(char));
    long x371739 = mallocSym_338311_370801;
    mallocSym_338311_370801 = (x371739+(((long){x335924})));
    char* x335927 = x335914;
    char* x335928 = strncpy(x371738, x335927, x335923);
    x366260 += 1;
    numeric_int_t x332747 = x332616;
    if((x332747>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "N_NAME", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "N_NAME");
    };
    /* VAR */ numeric_int_t x342129 = -1;
    numeric_int_t x342130 = x341413->len;
    numeric_int_t x354685 = 0;
    for(; x354685 < x342130 ; x354685 += 1) {
      
      char* x354686 = g_array_index(x341413, char*, x354685);
      boolean_t x354687 = strcmp(x354686, x371709);
      boolean_t x354688 = !(x354687);
      if(x354688) {
        x342129 = x354685;
        break;
      };
    };
    numeric_int_t x342140 = x342129;
    boolean_t x332753 = !((x342140!=(-1)));
    if(x332753) {
      numeric_int_t x332754 = x332616;
      x332616 = (x332754+(1));
      void* x342147 = &(x371709);
      GArray* x342148 = g_array_append_vals(x341413, x342147, 1);
    };
    /* VAR */ numeric_int_t x342149 = -1;
    numeric_int_t x342150 = x341413->len;
    numeric_int_t x354712 = 0;
    for(; x354712 < x342150 ; x354712 += 1) {
      
      char* x354713 = g_array_index(x341413, char*, x354712);
      boolean_t x354714 = strcmp(x354713, x371709);
      boolean_t x354715 = !(x354714);
      if(x354715) {
        x342149 = x354712;
        break;
      };
    };
    numeric_int_t x342160 = x342149;
    struct NATIONRecord* x371795 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x371795, 0, 1 * sizeof(struct NATIONRecord));
    long x371796 = mallocSym_339584_370751;
    mallocSym_339584_370751 = (x371796+(((long){1})));
    x371795->N_NATIONKEY = x335889; x371795->N_NAME = x342160; x371795->N_REGIONKEY = x335910;
    numeric_int_t x308437 = x366261;
    if((x371795==(NULL))) {
      *(x371661 + x308437) = (const struct NATIONRecord){0};
    } else {
      
      struct NATIONRecord x338333 = *x371795;
      *(x371661 + x308437) = x338333;
      struct NATIONRecord* x338335 = &(x371661[x308437]);
      x371795 = x338335;
    };
    numeric_int_t x308439 = x366261;
    x366261 = (x308439+(1));
  };
  FILE* x366386 = popen("wc -l /mnt/ramdisk/tpch/sf8/region.tbl", "r");
  /* VAR */ numeric_int_t x366387 = 0;
  numeric_int_t x366388 = x366387;
  numeric_int_t* x366389 = &x366388;
  numeric_int_t x366390 = fscanf(x366386, "%d", x366389);
  pclose(x366386);
  struct REGIONRecord* x371819 = (struct REGIONRecord*)malloc(x366388 * sizeof(struct REGIONRecord));
  memset(x371819, 0, x366388 * sizeof(struct REGIONRecord));
  long x371820 = mallocSym_366392_370768;
  mallocSym_366392_370768 = (x371820+(((long){x366388})));
  numeric_int_t x366393 = O_RDONLY;
  numeric_int_t x366394 = open("/mnt/ramdisk/tpch/sf8/region.tbl", x366393);
  /* VAR */ struct stat x366395 = x365510;
  struct stat x366396 = x366395;
  struct stat* x366397 = &x366396;
  numeric_int_t x366398 = stat("/mnt/ramdisk/tpch/sf8/region.tbl", x366397);
  numeric_int_t x366400 = PROT_READ;
  numeric_int_t x366401 = MAP_PRIVATE;
  char* x366402 = mmap(NULL, (x366397->st_size), x366400, x366401, x366394, 0);
  /* VAR */ numeric_int_t x366403 = 0;
  while(1) {
    
    numeric_int_t x308447 = x366403;
    /* VAR */ boolean_t ite361049 = 0;
    if((x308447<(x366388))) {
      char x366409 = *x366402;
      ite361049 = (x366409!=('\0'));
    } else {
      
      ite361049 = 0;
    };
    boolean_t x358609 = ite361049;
    if (!(x358609)) break; 
    
    /* VAR */ numeric_int_t x335973 = 0;
    numeric_int_t x335974 = x335973;
    numeric_int_t* x335975 = &x335974;
    char* x335976 = strntoi_unchecked(x366402, x335975);
    x366402 = x335976;
    /* VAR */ char* x335978 = x366402;
    while(1) {
      
      char x335979 = *x366402;
      /* VAR */ boolean_t ite361067 = 0;
      if((x335979!=('|'))) {
        char x366426 = *x366402;
        ite361067 = (x366426!=('\n'));
      } else {
        
        ite361067 = 0;
      };
      boolean_t x358620 = ite361067;
      if (!(x358620)) break; 
      
      x366402 += 1;
    };
    char* x335986 = x335978;
    numeric_int_t x335987 = x366402 - x335986;
    numeric_int_t x335988 = x335987+(1);
    char* x371867 = (char*)malloc(x335988 * sizeof(char));
    memset(x371867, 0, x335988 * sizeof(char));
    long x371868 = mallocSym_338381_370790;
    mallocSym_338381_370790 = (x371868+(((long){x335988})));
    char* x335991 = x335978;
    char* x335992 = strncpy(x371867, x335991, x335987);
    x366402 += 1;
    /* VAR */ char* x335994 = x366402;
    while(1) {
      
      char x335995 = *x366402;
      /* VAR */ boolean_t ite361088 = 0;
      if((x335995!=('|'))) {
        char x366446 = *x366402;
        ite361088 = (x366446!=('\n'));
      } else {
        
        ite361088 = 0;
      };
      boolean_t x358634 = ite361088;
      if (!(x358634)) break; 
      
      x366402 += 1;
    };
    char* x336002 = x335994;
    numeric_int_t x336003 = x366402 - x336002;
    numeric_int_t x336004 = x336003+(1);
    char* x371891 = (char*)malloc(x336004 * sizeof(char));
    memset(x371891, 0, x336004 * sizeof(char));
    long x371892 = mallocSym_338397_370776;
    mallocSym_338397_370776 = (x371892+(((long){x336004})));
    char* x336007 = x335994;
    char* x336008 = strncpy(x371891, x336007, x336003);
    x366402 += 1;
    numeric_int_t x332778 = x332612;
    if((x332778>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "R_NAME", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "R_NAME");
    };
    /* VAR */ numeric_int_t x342241 = -1;
    numeric_int_t x342242 = x341407->len;
    numeric_int_t x354809 = 0;
    for(; x354809 < x342242 ; x354809 += 1) {
      
      char* x354810 = g_array_index(x341407, char*, x354809);
      boolean_t x354811 = strcmp(x354810, x371867);
      boolean_t x354812 = !(x354811);
      if(x354812) {
        x342241 = x354809;
        break;
      };
    };
    numeric_int_t x342252 = x342241;
    boolean_t x332784 = !((x342252!=(-1)));
    if(x332784) {
      numeric_int_t x332785 = x332612;
      x332612 = (x332785+(1));
      void* x342259 = &(x371867);
      GArray* x342260 = g_array_append_vals(x341407, x342259, 1);
    };
    /* VAR */ numeric_int_t x342261 = -1;
    numeric_int_t x342262 = x341407->len;
    numeric_int_t x354836 = 0;
    for(; x354836 < x342262 ; x354836 += 1) {
      
      char* x354837 = g_array_index(x341407, char*, x354836);
      boolean_t x354838 = strcmp(x354837, x371867);
      boolean_t x354839 = !(x354838);
      if(x354839) {
        x342261 = x354836;
        break;
      };
    };
    numeric_int_t x342272 = x342261;
    struct REGIONRecord* x371948 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x371948, 0, 1 * sizeof(struct REGIONRecord));
    long x371949 = mallocSym_339672_370788;
    mallocSym_339672_370788 = (x371949+(((long){1})));
    x371948->R_REGIONKEY = x335974; x371948->R_NAME = x342272;
    numeric_int_t x308455 = x366403;
    if((x371948==(NULL))) {
      *(x371819 + x308455) = (const struct REGIONRecord){0};
    } else {
      
      struct REGIONRecord x338419 = *x371948;
      *(x371819 + x308455) = x338419;
      struct REGIONRecord* x338421 = &(x371819[x308455]);
      x371948 = x338421;
    };
    numeric_int_t x308457 = x366403;
    x366403 = (x308457+(1));
  };
  FILE* x366523 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ numeric_int_t x366524 = 0;
  numeric_int_t x366525 = x366524;
  numeric_int_t* x366526 = &x366525;
  numeric_int_t x366527 = fscanf(x366523, "%d", x366526);
  pclose(x366523);
  struct SUPPLIERRecord* x371972 = (struct SUPPLIERRecord*)malloc(x366525 * sizeof(struct SUPPLIERRecord));
  memset(x371972, 0, x366525 * sizeof(struct SUPPLIERRecord));
  long x371973 = mallocSym_366529_370775;
  mallocSym_366529_370775 = (x371973+(((long){x366525})));
  numeric_int_t x366530 = O_RDONLY;
  numeric_int_t x366531 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x366530);
  /* VAR */ struct stat x366532 = x365510;
  struct stat x366533 = x366532;
  struct stat* x366534 = &x366533;
  numeric_int_t x366535 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x366534);
  numeric_int_t x366537 = PROT_READ;
  numeric_int_t x366538 = MAP_PRIVATE;
  char* x366539 = mmap(NULL, (x366534->st_size), x366537, x366538, x366531, 0);
  /* VAR */ numeric_int_t x366540 = 0;
  while(1) {
    
    numeric_int_t x308465 = x366540;
    /* VAR */ boolean_t ite361189 = 0;
    if((x308465<(x366525))) {
      char x366546 = *x366539;
      ite361189 = (x366546!=('\0'));
    } else {
      
      ite361189 = 0;
    };
    boolean_t x358728 = ite361189;
    if (!(x358728)) break; 
    
    /* VAR */ numeric_int_t x336053 = 0;
    numeric_int_t x336054 = x336053;
    numeric_int_t* x336055 = &x336054;
    char* x336056 = strntoi_unchecked(x366539, x336055);
    x366539 = x336056;
    /* VAR */ char* x336058 = x366539;
    while(1) {
      
      char x336059 = *x366539;
      /* VAR */ boolean_t ite361207 = 0;
      if((x336059!=('|'))) {
        char x366563 = *x366539;
        ite361207 = (x366563!=('\n'));
      } else {
        
        ite361207 = 0;
      };
      boolean_t x358739 = ite361207;
      if (!(x358739)) break; 
      
      x366539 += 1;
    };
    char* x336066 = x336058;
    numeric_int_t x336067 = x366539 - x336066;
    numeric_int_t x336068 = x336067+(1);
    char* x372020 = (char*)malloc(x336068 * sizeof(char));
    memset(x372020, 0, x336068 * sizeof(char));
    long x372021 = mallocSym_338467_370760;
    mallocSym_338467_370760 = (x372021+(((long){x336068})));
    char* x336071 = x336058;
    char* x336072 = strncpy(x372020, x336071, x336067);
    x366539 += 1;
    /* VAR */ char* x336074 = x366539;
    while(1) {
      
      char x336075 = *x366539;
      /* VAR */ boolean_t ite361228 = 0;
      if((x336075!=('|'))) {
        char x366583 = *x366539;
        ite361228 = (x366583!=('\n'));
      } else {
        
        ite361228 = 0;
      };
      boolean_t x358753 = ite361228;
      if (!(x358753)) break; 
      
      x366539 += 1;
    };
    char* x336082 = x336074;
    numeric_int_t x336083 = x366539 - x336082;
    numeric_int_t x336084 = x336083+(1);
    char* x372044 = (char*)malloc(x336084 * sizeof(char));
    memset(x372044, 0, x336084 * sizeof(char));
    long x372045 = mallocSym_338483_370748;
    mallocSym_338483_370748 = (x372045+(((long){x336084})));
    char* x336087 = x336074;
    char* x336088 = strncpy(x372044, x336087, x336083);
    x366539 += 1;
    /* VAR */ numeric_int_t x336090 = 0;
    numeric_int_t x336091 = x336090;
    numeric_int_t* x336092 = &x336091;
    char* x336093 = strntoi_unchecked(x366539, x336092);
    x366539 = x336093;
    /* VAR */ char* x336095 = x366539;
    while(1) {
      
      char x336096 = *x366539;
      /* VAR */ boolean_t ite361254 = 0;
      if((x336096!=('|'))) {
        char x366608 = *x366539;
        ite361254 = (x366608!=('\n'));
      } else {
        
        ite361254 = 0;
      };
      boolean_t x358772 = ite361254;
      if (!(x358772)) break; 
      
      x366539 += 1;
    };
    char* x336103 = x336095;
    numeric_int_t x336104 = x366539 - x336103;
    numeric_int_t x336105 = x336104+(1);
    char* x372073 = (char*)malloc(x336105 * sizeof(char));
    memset(x372073, 0, x336105 * sizeof(char));
    long x372074 = mallocSym_338504_370796;
    mallocSym_338504_370796 = (x372074+(((long){x336105})));
    char* x336108 = x336095;
    char* x336109 = strncpy(x372073, x336108, x336104);
    x366539 += 1;
    /* VAR */ double x336111 = 0.0;
    double x336112 = x336111;
    double* x336113 = &x336112;
    char* x336114 = strntod_unchecked(x366539, x336113);
    x366539 = x336114;
    /* VAR */ char* x336116 = x366539;
    while(1) {
      
      char x336117 = *x366539;
      /* VAR */ boolean_t ite361280 = 0;
      if((x336117!=('|'))) {
        char x366633 = *x366539;
        ite361280 = (x366633!=('\n'));
      } else {
        
        ite361280 = 0;
      };
      boolean_t x358791 = ite361280;
      if (!(x358791)) break; 
      
      x366539 += 1;
    };
    char* x336124 = x336116;
    numeric_int_t x336125 = x366539 - x336124;
    numeric_int_t x336126 = x336125+(1);
    char* x372102 = (char*)malloc(x336126 * sizeof(char));
    memset(x372102, 0, x336126 * sizeof(char));
    long x372103 = mallocSym_338525_370797;
    mallocSym_338525_370797 = (x372103+(((long){x336126})));
    char* x336129 = x336116;
    char* x336130 = strncpy(x372102, x336129, x336125);
    x366539 += 1;
    struct SUPPLIERRecord* x372110 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x372110, 0, 1 * sizeof(struct SUPPLIERRecord));
    long x372111 = mallocSym_339789_370777;
    mallocSym_339789_370777 = (x372111+(((long){1})));
    x372110->S_SUPPKEY = x336054; x372110->S_NATIONKEY = x336091;
    numeric_int_t x308477 = x366540;
    if((x372110==(NULL))) {
      *(x371972 + x308477) = (const struct SUPPLIERRecord){0};
    } else {
      
      struct SUPPLIERRecord x338534 = *x372110;
      *(x371972 + x308477) = x338534;
      struct SUPPLIERRecord* x338536 = &(x371972[x308477]);
      x372110 = x338536;
    };
    numeric_int_t x308479 = x366540;
    x366540 = (x308479+(1));
  };
  numeric_int_t x308484 = 0;
  for(; x308484 < 1 ; x308484 += 1) {
    
    /* VAR */ numeric_int_t x367392 = 0;
    struct AGGRecord_Int* x372898 = (struct AGGRecord_Int*)malloc(1048576 * sizeof(struct AGGRecord_Int));
    memset(x372898, 0, 1048576 * sizeof(struct AGGRecord_Int));
    long x372899 = mallocSym_367393_370754;
    mallocSym_367393_370754 = (x372899+(((long){1048576})));
    numeric_int_t x354979 = 0;
    for(; x354979 < 1048576 ; x354979 += 1) {
      
      *(x372898 + x354979) = (const struct AGGRecord_Int){0};
    };
    struct ORDERSRecord* x372908 = (struct ORDERSRecord*)malloc(60000000 * sizeof(struct ORDERSRecord));
    memset(x372908, 0, 60000000 * sizeof(struct ORDERSRecord));
    long x372909 = mallocSym_367399_370769;
    mallocSym_367399_370769 = (x372909+(((long){60000000})));
    numeric_int_t x354995 = 0;
    for(; x354995 < x365941 ; x354995 += 1) {
      
      struct ORDERSRecord* x354996 = &(x371308[x354995]);
      numeric_int_t x354998 = (x354996->O_ORDERKEY)%(60000000);
      if((x354996==(NULL))) {
        *(x372908 + x354998) = (const struct ORDERSRecord){0};
      } else {
        
        struct ORDERSRecord x338561 = *x354996;
        *(x372908 + x354998) = x338561;
        struct ORDERSRecord* x338563 = &(x372908[x354998]);
        x354996 = x338563;
      };
    };
    struct LINEITEMRecord** x372936 = (struct LINEITEMRecord**)malloc(1600000 * sizeof(struct LINEITEMRecord*));
    memset(x372936, 0, 1600000 * sizeof(struct LINEITEMRecord*));
    long x372937 = mallocSym_367423_370756;
    long x372938 = (long){1600000};
    mallocSym_367423_370756 = (x372937+(x372938));
    numeric_int_t* x372941 = (numeric_int_t*)malloc(1600000 * sizeof(numeric_int_t));
    memset(x372941, 0, 1600000 * sizeof(numeric_int_t));
    long x372942 = mallocSym_367424_370774;
    mallocSym_367424_370774 = (x372942+(x372938));
    numeric_int_t x355012 = 0;
    for(; x355012 < 1600000 ; x355012 += 1) {
      
      *(x372941 + x355012) = 0;
    };
    /* VAR */ numeric_int_t x367430 = 0;
    numeric_int_t x355027 = 0;
    for(; x355027 < x365731 ; x355027 += 1) {
      
      struct LINEITEMRecord* x355028 = &(x371078[x355027]);
      numeric_int_t x355030 = (x355028->L_PARTKEY)%(1600000);
      numeric_int_t x355031 = x372941[x355030];
      *(x372941 + x355030) = (x355031+(1));
      numeric_int_t x355034 = x367430;
      x367430 = (x355034+(1));
    };
    numeric_int_t x355044 = 0;
    for(; x355044 < 1600000 ; x355044 += 1) {
      
      numeric_int_t x355045 = x372941[x355044];
      struct LINEITEMRecord* x372984 = (struct LINEITEMRecord*)malloc(x355045 * sizeof(struct LINEITEMRecord));
      memset(x372984, 0, x355045 * sizeof(struct LINEITEMRecord));
      long x372985 = mallocSym_355046_370784;
      mallocSym_355046_370784 = (x372985+(((long){x355045})));
      *(x372936 + x355044) = x372984;
      *(x372941 + x355044) = 0;
    };
    x367430 = 0;
    numeric_int_t x355071 = 0;
    for(; x355071 < x365731 ; x355071 += 1) {
      
      struct LINEITEMRecord* x355072 = &(x371078[x355071]);
      numeric_int_t x355074 = (x355072->L_PARTKEY)%(1600000);
      numeric_int_t x355075 = x372941[x355074];
      struct LINEITEMRecord* x355076 = x372936[x355074];
      if((x355072==(NULL))) {
        *(x355076 + x355075) = (const struct LINEITEMRecord){0};
      } else {
        
        struct LINEITEMRecord x338607 = *x355072;
        *(x355076 + x355075) = x338607;
        struct LINEITEMRecord* x338609 = &(x355076[x355075]);
        x355072 = x338609;
      };
      numeric_int_t x355084 = x372941[x355074];
      *(x372941 + x355074) = (x355084+(1));
      numeric_int_t x355087 = x367430;
      x367430 = (x355087+(1));
    };
    /* VAR */ numeric_int_t x367503 = 0;
    double** x373032 = (double**)malloc(7 * sizeof(double*));
    memset(x373032, 0, 7 * sizeof(double*));
    long x373033 = mallocSym_367504_370792;
    long x373034 = (long){7};
    mallocSym_367504_370792 = (x373033+(x373034));
    /* VAR */ numeric_int_t x367505 = 0;
    while(1) {
      
      numeric_int_t x334310 = x367505;
      if (!((x334310<(7)))) break; 
      
      numeric_int_t x334312 = x367505;
      double* x373042 = (double*)malloc(3 * sizeof(double));
      memset(x373042, 0, 3 * sizeof(double));
      long x373043 = mallocSym_338626_370763;
      mallocSym_338626_370763 = (x373043+(((long){3})));
      *(x373032 + x334312) = x373042;
      numeric_int_t x334315 = x367505;
      x367505 = (x334315+(1));
    };
    /* VAR */ numeric_int_t x367515 = 0;
    struct AGGRecord_Int* x373052 = (struct AGGRecord_Int*)malloc(7 * sizeof(struct AGGRecord_Int));
    memset(x373052, 0, 7 * sizeof(struct AGGRecord_Int));
    long x373053 = mallocSym_367516_370770;
    mallocSym_367516_370770 = (x373053+(x373034));
    /* VAR */ numeric_int_t x367517 = 0;
    while(1) {
      
      numeric_int_t x334322 = x367517;
      if (!((x334322<(7)))) break; 
      
      numeric_int_t x334324 = x367517;
      double* x334325 = x373032[x334324];
      struct AGGRecord_Int* x373062 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
      memset(x373062, 0, 1 * sizeof(struct AGGRecord_Int));
      long x373063 = mallocSym_339900_370752;
      mallocSym_339900_370752 = (x373063+(((long){1})));
      x373062->key = 0; x373062->aggs = x334325; x373062->next = NULL;
      /* VAR */ boolean_t ite362193 = 0;
      if((x373062==(NULL))) {
        ite362193 = 1;
      } else {
        
        ite362193 = ((x373062->aggs)==(NULL));
      };
      boolean_t x359599 = ite362193;
      if(x359599) {
        *(x373052 + x334324) = (const struct AGGRecord_Int){0};
      } else {
        
        struct AGGRecord_Int x338642 = *x373062;
        *(x373052 + x334324) = x338642;
        struct AGGRecord_Int* x338644 = &(x373052[x334324]);
        x373062 = x338644;
      };
      numeric_int_t x334328 = x367517;
      x367517 = (x334328+(1));
    };
    struct timeval x367544 = (struct timeval){0};
    /* VAR */ struct timeval x367545 = x367544;
    struct timeval x367546 = x367545;
    /* VAR */ struct timeval x367547 = x367544;
    struct timeval x367548 = x367547;
    /* VAR */ struct timeval x367549 = x367544;
    struct timeval x367550 = x367549;
    struct timeval* x367551 = &x367548;
    gettimeofday(x367551, NULL);
    /* VAR */ numeric_int_t x367553 = -1;
    numeric_int_t x367554 = x341407->len;
    numeric_int_t x355146 = 0;
    for(; x355146 < x367554 ; x355146 += 1) {
      
      char* x355147 = g_array_index(x341407, char*, x355146);
      boolean_t x355148 = strcmp(x355147, "ASIA");
      boolean_t x355149 = !(x355148);
      if(x355149) {
        x367553 = x355146;
        break;
      };
    };
    numeric_int_t x367570 = x367553;
    /* VAR */ numeric_int_t x367571 = -1;
    numeric_int_t x367572 = x341413->len;
    numeric_int_t x355165 = 0;
    for(; x355165 < x367572 ; x355165 += 1) {
      
      char* x355166 = g_array_index(x341413, char*, x355165);
      boolean_t x355167 = strcmp(x355166, "INDONESIA");
      boolean_t x355168 = !(x355167);
      if(x355168) {
        x367571 = x355165;
        break;
      };
    };
    numeric_int_t x367588 = x367571;
    /* VAR */ numeric_int_t x367589 = -1;
    numeric_int_t x367590 = x341410->len;
    numeric_int_t x355184 = 0;
    for(; x355184 < x367590 ; x355184 += 1) {
      
      char* x355185 = g_array_index(x341410, char*, x355184);
      boolean_t x355186 = strcmp(x355185, "MEDIUM ANODIZED NICKEL");
      boolean_t x355187 = !(x355186);
      if(x355187) {
        x367589 = x355184;
        break;
      };
    };
    numeric_int_t x367606 = x367589;
    /* VAR */ numeric_int_t x367607 = 0;
    numeric_int_t* x367646 = &(x367627);
    GTree* x367647 = g_tree_new(x367646);
    /* VAR */ boolean_t x367648 = 0;
    /* VAR */ numeric_int_t x367649 = 0;
    while(1) {
      
      numeric_int_t x367651 = x367607;
      if (!((x367651<(x365503)))) break; 
      
      numeric_int_t x319054 = x367607;
      struct PARTRecord* x308741 = &(x370818[x319054]);
      if(((x308741->P_TYPE)==(x367606))) {
        numeric_int_t x308745 = x308741->P_PARTKEY;
        numeric_int_t x332018 = x308745%(1600000);
        numeric_int_t x332019 = x372941[x332018];
        struct LINEITEMRecord* x332020 = x372936[x332018];
        numeric_int_t x355371 = 0;
        for(; x355371 < x332019 ; x355371 += 1) {
          
          struct LINEITEMRecord* x355372 = &(x332020[x355371]);
          if(((x355372->L_PARTKEY)==(x308745))) {
            if(((x355372->L_PARTKEY)==(x308745))) {
              numeric_int_t x311465 = x355372->L_ORDERKEY;
              numeric_int_t x311466 = x355372->L_SUPPKEY;
              struct ORDERSRecord* x323403 = &(x372908[x311465]);
              numeric_int_t x308787 = x323403->O_ORDERDATE;
              /* VAR */ boolean_t ite362532 = 0;
              if((x308787>=(19950101))) {
                ite362532 = (x308787<=(19961231));
              } else {
                
                ite362532 = 0;
              };
              boolean_t x359895 = ite362532;
              if(x359895) {
                if((x311465==((x323403->O_ORDERKEY)))) {
                  numeric_int_t x311528 = x323403->O_CUSTKEY;
                  struct CUSTOMERRecord* x323424 = &(x371475[(x311528-(1))]);
                  if((x311528==((x323424->C_CUSTKEY)))) {
                    numeric_int_t x313145 = x323424->C_NATIONKEY;
                    struct NATIONRecord* x332052 = &(x371661[(x313145-(0))]);
                    if(((x332052->N_NATIONKEY)==(x313145))) {
                      if(((x332052->N_NATIONKEY)==(x313145))) {
                        numeric_int_t x313937 = x332052->N_REGIONKEY;
                        struct REGIONRecord* x332061 = &(x371819[(x313937-(0))]);
                        if(((x332061->R_NAME)==(x367570))) {
                          if(((x332061->R_REGIONKEY)==(x313937))) {
                            if(((x332061->R_REGIONKEY)==(x313937))) {
                              struct SUPPLIERRecord* x332072 = &(x371972[(x311466-(1))]);
                              if(((x332072->S_SUPPKEY)==(x311466))) {
                                if(((x332072->S_SUPPKEY)==(x311466))) {
                                  numeric_int_t x314538 = x332072->S_NATIONKEY;
                                  struct NATIONRecord* x332081 = &(x371661[(x314538-(0))]);
                                  if(((x332081->N_NATIONKEY)==(x314538))) {
                                    if(((x332081->N_NATIONKEY)==(x314538))) {
                                      numeric_int_t x334948 = x308787/(10000);
                                      numeric_int_t x325442 = x334948&(1048575);
                                      struct AGGRecord_Int* x326700 = &(x372898[x325442]);
                                      numeric_int_t x325444 = x367392;
                                      if((x325442>(x325444))) {
                                        x367392 = x325442;
                                      };
                                      /* VAR */ struct AGGRecord_Int* current327171 = x326700;
                                      /* VAR */ boolean_t found326710 = 0;
                                      while(1) {
                                        
                                        struct AGGRecord_Int* x327174 = current327171;
                                        /* VAR */ boolean_t ite362601 = 0;
                                        if((x327174!=(NULL))) {
                                          ite362601 = ((x327174->aggs)!=(NULL));
                                        } else {
                                          
                                          ite362601 = 0;
                                        };
                                        boolean_t x359958 = ite362601;
                                        /* VAR */ boolean_t ite362610 = 0;
                                        if(x359958) {
                                          boolean_t x367937 = found326710;
                                          boolean_t x367938 = !(x367937);
                                          ite362610 = x367938;
                                        } else {
                                          
                                          ite362610 = 0;
                                        };
                                        boolean_t x359960 = ite362610;
                                        if (!(x359960)) break; 
                                        
                                        struct AGGRecord_Int* x327179 = current327171;
                                        if(((x327179->key)==(x334948))) {
                                          found326710 = 1;
                                        } else {
                                          
                                          struct AGGRecord_Int* x327185 = current327171;
                                          struct AGGRecord_Int* x328108 = x327185->next;
                                          current327171 = x328108;
                                        };
                                      };
                                      boolean_t x326726 = found326710;
                                      boolean_t x326727 = !(x326726);
                                      /* VAR */ struct AGGRecord_Int** ite359972 = 0;
                                      if(x326727) {
                                        ite359972 = NULL;
                                      } else {
                                        
                                        struct AGGRecord_Int* x359974 = current327171;
                                        ite359972 = x359974;
                                      };
                                      struct AGGRecord_Int** x326733 = ite359972;
                                      /* VAR */ struct AGGRecord_Int* ite359980 = 0;
                                      if((x326733!=(NULL))) {
                                        ite359980 = x326733;
                                      } else {
                                        
                                        numeric_int_t x359982 = x367503;
                                        double* x359983 = x373032[x359982];
                                        numeric_int_t x359984 = x367503;
                                        x367503 = (x359984+(1));
                                        numeric_int_t x359987 = x367515;
                                        struct AGGRecord_Int* x359988 = &(x373052[x359987]);
                                        x359988->key = x334948;
                                        x359988->aggs = x359983;
                                        x359988->next = NULL;
                                        numeric_int_t x359992 = x367515;
                                        x367515 = (x359992+(1));
                                        /* VAR */ boolean_t ite362654 = 0;
                                        if((x326700==(NULL))) {
                                          ite362654 = 1;
                                        } else {
                                          
                                          ite362654 = ((x326700->aggs)==(NULL));
                                        };
                                        boolean_t x359997 = ite362654;
                                        if(x359997) {
                                          x359988->next = NULL;
                                          /* VAR */ boolean_t ite362666 = 0;
                                          if((x359988==(NULL))) {
                                            ite362666 = 1;
                                          } else {
                                            
                                            ite362666 = ((x359988->aggs)==(NULL));
                                          };
                                          boolean_t x360002 = ite362666;
                                          if(x360002) {
                                            *(x372898 + x325442) = (const struct AGGRecord_Int){0};
                                          } else {
                                            
                                            struct AGGRecord_Int x338805 = *x359988;
                                            *(x372898 + x325442) = x338805;
                                            struct AGGRecord_Int* x338807 = &(x372898[x325442]);
                                            x359988 = x338807;
                                          };
                                        } else {
                                          
                                          struct AGGRecord_Int* x328128 = x326700->next;
                                          x359988->next = x328128;
                                          x326700->next = x359988;
                                        };
                                        ite359980 = x359988;
                                      };
                                      struct AGGRecord_Int* x325457 = ite359980;
                                      double* x310833 = x325457->aggs;
                                      double x310847 = x310833[0];
                                      double x310851 = (x355372->L_EXTENDEDPRICE)*((1.0-((x355372->L_DISCOUNT))));
                                      *x310833 = (x310847+(x310851));
                                      double x310860 = x310833[1];
                                      /* VAR */ double ite360024 = 0;
                                      if(((x332081->N_NAME)==(x367588))) {
                                        ite360024 = (x310860+(x310851));
                                      } else {
                                        
                                        ite360024 = x310860;
                                      };
                                      double x310864 = ite360024;
                                      *(x310833 + 1) = x310864;
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
              };
            };
          };
        };
      };
      numeric_int_t x319093 = x367607;
      x367607 = (x319093+(1));
    };
    numeric_int_t x368028 = x367392;
    numeric_int_t x355538 = 0;
    for(; x355538 < (x368028+(1)) ; x355538 += 1) {
      
      struct AGGRecord_Int* x355539 = &(x372898[x355538]);
      /* VAR */ struct AGGRecord_Int* x355540 = x355539;
      while(1) {
        
        struct AGGRecord_Int* x327243 = x355540;
        /* VAR */ boolean_t ite362740 = 0;
        if((x327243!=(NULL))) {
          ite362740 = ((x327243->aggs)!=(NULL));
        } else {
          
          ite362740 = 0;
        };
        boolean_t x360062 = ite362740;
        if (!(x360062)) break; 
        
        struct AGGRecord_Int* x327245 = x355540;
        struct AGGRecord_Int* x328168 = x327245->next;
        struct AGGRecord_Int* x327247 = x355540;
        double* x326789 = x327247->aggs;
        double x326790 = x326789[1];
        double x326791 = x326789[0];
        *(x326789 + 2) = (x326790/(x326791));
        g_tree_insert(x367647, x327247, x327247);
        x355540 = x328168;
      };
    };
    while(1) {
      
      boolean_t x321261 = x367648;
      boolean_t x310911 = !(x321261);
      /* VAR */ boolean_t ite362762 = 0;
      if(x310911) {
        numeric_int_t x368084 = g_tree_nnodes(x367647);
        ite362762 = (x368084!=(0));
      } else {
        
        ite362762 = 0;
      };
      boolean_t x360077 = ite362762;
      if (!(x360077)) break; 
      
      void* x342759 = NULL;
      void** x342767 = &(x342759);
      g_tree_foreach(x367647, x342766, x342767);
      struct AGGRecord_Int* x342769 = (struct AGGRecord_Int*){x342759};
      numeric_int_t x342770 = g_tree_remove(x367647, x342769);
      if(0) {
        x367648 = 1;
      } else {
        
        double x310926 = ((double*) { x342769->aggs })[2];
        printf("%d|%.4f\n", (x342769->key), x310926);
        numeric_int_t x321278 = x367649;
        x367649 = (x321278+(1));
      };
    };
    numeric_int_t x368111 = x367649;
    printf("(%d rows)\n", x368111);
    struct timeval* x368113 = &x367550;
    gettimeofday(x368113, NULL);
    struct timeval* x368115 = &x367546;
    struct timeval* x368116 = &x367550;
    struct timeval* x368117 = &x367548;
    long x368118 = timeval_subtract(x368115, x368116, x368117);
    printf("Generated code run in %ld milliseconds.\n", x368118);
  };
  /* VAR */ long mallocSum373663 = 0L;
  long x373664 = mallocSym_338483_370748;
  numeric_int_t x373665 = sizeof(char);
  long x373667 = x373664*(((long){x373665}));
  printf("372044 with type Byte: %ld\n", x373667);
  long x373669 = mallocSum373663;
  mallocSum373663 = (x373669+(x373667));
  long x373672 = mallocSym_337749_370749;
  numeric_int_t x373673 = sizeof(char);
  long x373675 = x373672*(((long){x373673}));
  printf("370968 with type Byte: %ld\n", x373675);
  long x373677 = mallocSum373663;
  mallocSum373663 = (x373677+(x373675));
  long x373680 = mallocSym_365945_370750;
  numeric_int_t x373681 = sizeof(struct ORDERSRecord);
  long x373683 = x373680*(((long){x373681}));
  printf("371308 with type ORDERSRecord: %ld\n", x373683);
  long x373685 = mallocSum373663;
  mallocSum373663 = (x373685+(x373683));
  long x373688 = mallocSym_339584_370751;
  numeric_int_t x373689 = sizeof(struct NATIONRecord);
  long x373691 = x373688*(((long){x373689}));
  printf("371795 with type NATIONRecord: %ld\n", x373691);
  long x373693 = mallocSum373663;
  mallocSum373663 = (x373693+(x373691));
  long x373696 = mallocSym_339900_370752;
  numeric_int_t x373697 = sizeof(struct AGGRecord_Int);
  long x373699 = x373696*(((long){x373697}));
  printf("373062 with type AGGRecord_Int: %ld\n", x373699);
  long x373701 = mallocSum373663;
  mallocSum373663 = (x373701+(x373699));
  long x373704 = mallocSym_338081_370753;
  numeric_int_t x373705 = sizeof(char);
  long x373707 = x373704*(((long){x373705}));
  printf("371414 with type Byte: %ld\n", x373707);
  long x373709 = mallocSum373663;
  mallocSum373663 = (x373709+(x373707));
  long x373712 = mallocSym_367393_370754;
  numeric_int_t x373713 = sizeof(struct AGGRecord_Int);
  long x373715 = x373712*(((long){x373713}));
  printf("372898 with type AGGRecord_Int: %ld\n", x373715);
  long x373717 = mallocSum373663;
  mallocSum373663 = (x373717+(x373715));
  long x373720 = mallocSym_339035_370755;
  numeric_int_t x373721 = sizeof(struct PARTRecord);
  long x373723 = x373720*(((long){x373721}));
  printf("371054 with type PARTRecord: %ld\n", x373723);
  long x373725 = mallocSum373663;
  mallocSum373663 = (x373725+(x373723));
  long x373728 = mallocSym_367423_370756;
  numeric_int_t x373729 = sizeof(struct LINEITEMRecord*);
  long x373731 = x373728*(((long){x373729}));
  printf("372936 with type Pointer[LINEITEMRecord]: %ld\n", x373731);
  long x373733 = mallocSum373663;
  mallocSum373663 = (x373733+(x373731));
  long x373736 = mallocSym_338196_370757;
  numeric_int_t x373737 = sizeof(char);
  long x373739 = x373736*(((long){x373737}));
  printf("371576 with type Byte: %ld\n", x373739);
  long x373741 = mallocSum373663;
  mallocSum373663 = (x373741+(x373739));
  long x373744 = mallocSym_337728_370758;
  numeric_int_t x373745 = sizeof(char);
  long x373747 = x373744*(((long){x373745}));
  printf("370939 with type Byte: %ld\n", x373747);
  long x373749 = mallocSum373663;
  mallocSum373663 = (x373749+(x373747));
  long x373752 = mallocSym_337942_370759;
  numeric_int_t x373753 = sizeof(char);
  long x373755 = x373752*(((long){x373753}));
  printf("371228 with type Byte: %ld\n", x373755);
  long x373757 = mallocSum373663;
  mallocSum373663 = (x373757+(x373755));
  long x373760 = mallocSym_338467_370760;
  numeric_int_t x373761 = sizeof(char);
  long x373763 = x373760*(((long){x373761}));
  printf("372020 with type Byte: %ld\n", x373763);
  long x373765 = mallocSum373663;
  mallocSum373663 = (x373765+(x373763));
  long x373768 = mallocSym_338102_370761;
  numeric_int_t x373769 = sizeof(char);
  long x373771 = x373768*(((long){x373769}));
  printf("371443 with type Byte: %ld\n", x373771);
  long x373773 = mallocSum373663;
  mallocSum373663 = (x373773+(x373771));
  long x373776 = mallocSym_337770_370762;
  numeric_int_t x373777 = sizeof(char);
  long x373779 = x373776*(((long){x373777}));
  printf("370997 with type Byte: %ld\n", x373779);
  long x373781 = mallocSum373663;
  mallocSum373663 = (x373781+(x373779));
  long x373784 = mallocSym_338626_370763;
  numeric_int_t x373785 = sizeof(double);
  long x373787 = x373784*(((long){x373785}));
  printf("373042 with type Double: %ld\n", x373787);
  long x373789 = mallocSum373663;
  mallocSum373663 = (x373789+(x373787));
  long x373792 = mallocSym_365507_370764;
  numeric_int_t x373793 = sizeof(struct PARTRecord);
  long x373795 = x373792*(((long){x373793}));
  printf("370818 with type PARTRecord: %ld\n", x373795);
  long x373797 = mallocSum373663;
  mallocSum373663 = (x373797+(x373795));
  long x373800 = mallocSym_338567_370765;
  numeric_int_t x373801 = sizeof(struct LINEITEMRecord*);
  long x373803 = x373800*(((long){x373801}));
  printf("372169 with type Pointer[LINEITEMRecord]: %ld\n", x373803);
  long x373805 = mallocSum373663;
  mallocSum373663 = (x373805+(x373803));
  long x373808 = mallocSym_339228_370766;
  numeric_int_t x373809 = sizeof(struct LINEITEMRecord);
  long x373811 = x373808*(((long){x373809}));
  printf("371284 with type LINEITEMRecord: %ld\n", x373811);
  long x373813 = mallocSum373663;
  mallocSum373663 = (x373813+(x373811));
  long x373816 = mallocSym_337958_370767;
  numeric_int_t x373817 = sizeof(char);
  long x373819 = x373816*(((long){x373817}));
  printf("371252 with type Byte: %ld\n", x373819);
  long x373821 = mallocSum373663;
  mallocSum373663 = (x373821+(x373819));
  long x373824 = mallocSym_366392_370768;
  numeric_int_t x373825 = sizeof(struct REGIONRecord);
  long x373827 = x373824*(((long){x373825}));
  printf("371819 with type REGIONRecord: %ld\n", x373827);
  long x373829 = mallocSum373663;
  mallocSum373663 = (x373829+(x373827));
  long x373832 = mallocSym_367399_370769;
  numeric_int_t x373833 = sizeof(struct ORDERSRecord);
  long x373835 = x373832*(((long){x373833}));
  printf("372908 with type ORDERSRecord: %ld\n", x373835);
  long x373837 = mallocSum373663;
  mallocSum373663 = (x373837+(x373835));
  long x373840 = mallocSym_367516_370770;
  numeric_int_t x373841 = sizeof(struct AGGRecord_Int);
  long x373843 = x373840*(((long){x373841}));
  printf("373052 with type AGGRecord_Int: %ld\n", x373843);
  long x373845 = mallocSum373663;
  mallocSum373663 = (x373845+(x373843));
  long x373848 = mallocSym_339491_370771;
  numeric_int_t x373849 = sizeof(struct CUSTOMERRecord);
  long x373851 = x373848*(((long){x373849}));
  printf("371637 with type CUSTOMERRecord: %ld\n", x373851);
  long x373853 = mallocSum373663;
  mallocSum373663 = (x373853+(x373851));
  long x373856 = mallocSym_338159_370772;
  numeric_int_t x373857 = sizeof(char);
  long x373859 = x373856*(((long){x373857}));
  printf("371523 with type Byte: %ld\n", x373859);
  long x373861 = mallocSum373663;
  mallocSum373663 = (x373861+(x373859));
  long x373864 = mallocSym_337712_370773;
  numeric_int_t x373865 = sizeof(char);
  long x373867 = x373864*(((long){x373865}));
  printf("370915 with type Byte: %ld\n", x373867);
  long x373869 = mallocSum373663;
  mallocSum373663 = (x373869+(x373867));
  long x373872 = mallocSym_367424_370774;
  numeric_int_t x373873 = sizeof(numeric_int_t);
  long x373875 = x373872*(((long){x373873}));
  printf("372941 with type Int: %ld\n", x373875);
  long x373877 = mallocSum373663;
  mallocSum373663 = (x373877+(x373875));
  long x373880 = mallocSym_366529_370775;
  numeric_int_t x373881 = sizeof(struct SUPPLIERRecord);
  long x373883 = x373880*(((long){x373881}));
  printf("371972 with type SUPPLIERRecord: %ld\n", x373883);
  long x373885 = mallocSum373663;
  mallocSum373663 = (x373885+(x373883));
  long x373888 = mallocSym_338397_370776;
  numeric_int_t x373889 = sizeof(char);
  long x373891 = x373888*(((long){x373889}));
  printf("371891 with type Byte: %ld\n", x373891);
  long x373893 = mallocSum373663;
  mallocSum373663 = (x373893+(x373891));
  long x373896 = mallocSym_339789_370777;
  numeric_int_t x373897 = sizeof(struct SUPPLIERRecord);
  long x373899 = x373896*(((long){x373897}));
  printf("372110 with type SUPPLIERRecord: %ld\n", x373899);
  long x373901 = mallocSum373663;
  mallocSum373663 = (x373901+(x373899));
  long x373904 = mallocSym_338568_370778;
  numeric_int_t x373905 = sizeof(numeric_int_t);
  long x373907 = x373904*(((long){x373905}));
  printf("372174 with type Int: %ld\n", x373907);
  long x373909 = mallocSum373663;
  mallocSum373663 = (x373909+(x373907));
  long x373912 = mallocSym_338217_370779;
  numeric_int_t x373913 = sizeof(char);
  long x373915 = x373912*(((long){x373913}));
  printf("371605 with type Byte: %ld\n", x373915);
  long x373917 = mallocSum373663;
  mallocSum373663 = (x373917+(x373915));
  long x373920 = mallocSym_337696_370780;
  numeric_int_t x373921 = sizeof(char);
  long x373923 = x373920*(((long){x373921}));
  printf("370891 with type Byte: %ld\n", x373923);
  long x373925 = mallocSum373663;
  mallocSum373663 = (x373925+(x373923));
  long x373928 = mallocSym_337680_370781;
  numeric_int_t x373929 = sizeof(char);
  long x373931 = x373928*(((long){x373929}));
  printf("370867 with type Byte: %ld\n", x373931);
  long x373933 = mallocSum373663;
  mallocSum373663 = (x373933+(x373931));
  long x373936 = mallocSym_339358_370782;
  numeric_int_t x373937 = sizeof(struct ORDERSRecord);
  long x373939 = x373936*(((long){x373937}));
  printf("371451 with type ORDERSRecord: %ld\n", x373939);
  long x373941 = mallocSum373663;
  mallocSum373663 = (x373941+(x373939));
  long x373944 = mallocSym_366250_370783;
  numeric_int_t x373945 = sizeof(struct NATIONRecord);
  long x373947 = x373944*(((long){x373945}));
  printf("371661 with type NATIONRecord: %ld\n", x373947);
  long x373949 = mallocSum373663;
  mallocSum373663 = (x373949+(x373947));
  long x373952 = mallocSym_355046_370784;
  numeric_int_t x373953 = sizeof(struct LINEITEMRecord);
  long x373955 = x373952*(((long){x373953}));
  printf("372984 with type LINEITEMRecord: %ld\n", x373955);
  long x373957 = mallocSum373663;
  mallocSum373663 = (x373957+(x373955));
  long x373960 = mallocSym_338175_370785;
  numeric_int_t x373961 = sizeof(char);
  long x373963 = x373960*(((long){x373961}));
  printf("371547 with type Byte: %ld\n", x373963);
  long x373965 = mallocSum373663;
  mallocSum373663 = (x373965+(x373963));
  long x373968 = mallocSym_338620_370786;
  numeric_int_t x373969 = sizeof(double*);
  long x373971 = x373968*(((long){x373969}));
  printf("372265 with type Pointer[Double]: %ld\n", x373971);
  long x373973 = mallocSum373663;
  mallocSum373663 = (x373973+(x373971));
  long x373976 = mallocSym_365735_370787;
  numeric_int_t x373977 = sizeof(struct LINEITEMRecord);
  long x373979 = x373976*(((long){x373977}));
  printf("371078 with type LINEITEMRecord: %ld\n", x373979);
  long x373981 = mallocSum373663;
  mallocSum373663 = (x373981+(x373979));
  long x373984 = mallocSym_339672_370788;
  numeric_int_t x373985 = sizeof(struct REGIONRecord);
  long x373987 = x373984*(((long){x373985}));
  printf("371948 with type REGIONRecord: %ld\n", x373987);
  long x373989 = mallocSum373663;
  mallocSum373663 = (x373989+(x373987));
  long x373992 = mallocSym_338065_370789;
  numeric_int_t x373993 = sizeof(char);
  long x373995 = x373992*(((long){x373993}));
  printf("371390 with type Byte: %ld\n", x373995);
  long x373997 = mallocSum373663;
  mallocSum373663 = (x373997+(x373995));
  long x374000 = mallocSym_338381_370790;
  numeric_int_t x374001 = sizeof(char);
  long x374003 = x374000*(((long){x374001}));
  printf("371867 with type Byte: %ld\n", x374003);
  long x374005 = mallocSum373663;
  mallocSum373663 = (x374005+(x374003));
  long x374008 = mallocSym_338632_370791;
  numeric_int_t x374009 = sizeof(struct AGGRecord_Int);
  long x374011 = x374008*(((long){x374009}));
  printf("372285 with type AGGRecord_Int: %ld\n", x374011);
  long x374013 = mallocSum373663;
  mallocSum373663 = (x374013+(x374011));
  long x374016 = mallocSym_367504_370792;
  numeric_int_t x374017 = sizeof(double*);
  long x374019 = x374016*(((long){x374017}));
  printf("373032 with type Pointer[Double]: %ld\n", x374019);
  long x374021 = mallocSum373663;
  mallocSum373663 = (x374021+(x374019));
  long x374024 = mallocSym_338552_370793;
  numeric_int_t x374025 = sizeof(struct ORDERSRecord);
  long x374027 = x374024*(((long){x374025}));
  printf("372141 with type ORDERSRecord: %ld\n", x374027);
  long x374029 = mallocSum373663;
  mallocSum373663 = (x374029+(x374027));
  long x374032 = mallocSym_366092_370794;
  numeric_int_t x374033 = sizeof(struct CUSTOMERRecord);
  long x374035 = x374032*(((long){x374033}));
  printf("371475 with type CUSTOMERRecord: %ld\n", x374035);
  long x374037 = mallocSum373663;
  mallocSum373663 = (x374037+(x374035));
  long x374040 = mallocSym_338290_370795;
  numeric_int_t x374041 = sizeof(char);
  long x374043 = x374040*(((long){x374041}));
  printf("371709 with type Byte: %ld\n", x374043);
  long x374045 = mallocSum373663;
  mallocSum373663 = (x374045+(x374043));
  long x374048 = mallocSym_338504_370796;
  numeric_int_t x374049 = sizeof(char);
  long x374051 = x374048*(((long){x374049}));
  printf("372073 with type Byte: %ld\n", x374051);
  long x374053 = mallocSum373663;
  mallocSum373663 = (x374053+(x374051));
  long x374056 = mallocSym_338525_370797;
  numeric_int_t x374057 = sizeof(char);
  long x374059 = x374056*(((long){x374057}));
  printf("372102 with type Byte: %ld\n", x374059);
  long x374061 = mallocSum373663;
  mallocSum373663 = (x374061+(x374059));
  long x374064 = mallocSym_338592_370798;
  numeric_int_t x374065 = sizeof(struct LINEITEMRecord);
  long x374067 = x374064*(((long){x374065}));
  printf("372975 with type LINEITEMRecord: %ld\n", x374067);
  long x374069 = mallocSum373663;
  mallocSum373663 = (x374069+(x374067));
  long x374072 = mallocSym_337974_370799;
  numeric_int_t x374073 = sizeof(char);
  long x374075 = x374072*(((long){x374073}));
  printf("371276 with type Byte: %ld\n", x374075);
  long x374077 = mallocSum373663;
  mallocSum373663 = (x374077+(x374075));
  long x374080 = mallocSym_338233_370800;
  numeric_int_t x374081 = sizeof(char);
  long x374083 = x374080*(((long){x374081}));
  printf("371629 with type Byte: %ld\n", x374083);
  long x374085 = mallocSum373663;
  mallocSum373663 = (x374085+(x374083));
  long x374088 = mallocSym_338311_370801;
  numeric_int_t x374089 = sizeof(char);
  long x374091 = x374088*(((long){x374089}));
  printf("371738 with type Byte: %ld\n", x374091);
  long x374093 = mallocSum373663;
  mallocSum373663 = (x374093+(x374091));
  long x374096 = mallocSym_338546_370802;
  numeric_int_t x374097 = sizeof(struct AGGRecord_Int);
  long x374099 = x374096*(((long){x374097}));
  printf("372131 with type AGGRecord_Int: %ld\n", x374099);
  long x374101 = mallocSum373663;
  mallocSum373663 = (x374101+(x374099));
  long x374104 = mallocSum373663;
  printf("total: %ld\n", x374104);
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x367627(struct AGGRecord_Int* x308640, struct AGGRecord_Int* x308641) {
  numeric_int_t x308642 = x308640->key;
  numeric_int_t x308643 = x308641->key;
  /* VAR */ numeric_int_t ite359699 = 0;
  if((x308642<(x308643))) {
    ite359699 = -1;
  } else {
    
    /* VAR */ numeric_int_t ite359703 = 0;
    if((x308642>(x308643))) {
      ite359703 = 1;
    } else {
      
      ite359703 = 0;
    };
    numeric_int_t x359702 = ite359703;
    ite359699 = x359702;
  };
  numeric_int_t x308647 = ite359699;
  return x308647; 
}

numeric_int_t x342766(void* x342760, void* x342761, void* x342762) {
  pointer_assign(((struct AGGRecord_Int**){x342762}), ((struct AGGRecord_Int*){x342761}));
  return 1; 
}
