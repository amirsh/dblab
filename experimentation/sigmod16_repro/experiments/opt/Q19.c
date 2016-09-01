#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct PARTRecord;
  
  struct LINEITEMRecord {
  int L_PARTKEY;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  int L_SHIPINSTRUCT;
  int L_SHIPMODE;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  int P_BRAND;
  int P_SIZE;
  int P_CONTAINER;
  };
  
  

/* GLOBAL VARS */

struct timeval x12910;
int main(int argc, char** argv) {
  /* VAR */ int x5791 = 0;
  int x16633 = sizeof(char**);
  GArray* x16634 = g_array_new(0, 1, x16633);
  /* VAR */ int x5793 = 0;
  int x16636 = sizeof(char**);
  GArray* x16637 = g_array_new(0, 1, x16636);
  /* VAR */ int x5795 = 0;
  int x16639 = sizeof(char**);
  GArray* x16640 = g_array_new(0, 1, x16639);
  /* VAR */ int x5797 = 0;
  int x16642 = sizeof(char**);
  GArray* x16643 = g_array_new(0, 1, x16642);
  FILE* x13470 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x13471 = 0;
  int x13472 = x13471;
  int* x13473 = &x13472;
  int x13474 = fscanf(x13470, "%d", x13473);
  pclose(x13470);
  struct LINEITEMRecord* x14730 = (struct LINEITEMRecord*)malloc(x13472 * sizeof(struct LINEITEMRecord));
  memset(x14730, 0, x13472 * sizeof(struct LINEITEMRecord));
  int x13478 = O_RDONLY;
  int x13479 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x13478);
  struct stat x13480 = (struct stat){0};
  /* VAR */ struct stat x13481 = x13480;
  struct stat x13482 = x13481;
  struct stat* x13483 = &x13482;
  int x13484 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x13483);
  int x13486 = PROT_READ;
  int x13487 = MAP_PRIVATE;
  char* x10992 = mmap(NULL, (x13483->st_size), x13486, x13487, x13479, 0);
  /* VAR */ int x10993 = 0;
  while(1) {
    
    int x5 = x10993;
    /* VAR */ int ite29827 = 0;
    if((x5<(x13472))) {
      char x33512 = *x10992;
      ite29827 = (x33512!=('\0'));
    } else {
      
      ite29827 = 0;
    };
    int x28066 = ite29827;
    if (!(x28066)) break; 
    
    /* VAR */ int x13495 = 0;
    int x13496 = x13495;
    int* x13497 = &x13496;
    char* x13498 = strntoi_unchecked(x10992, x13497);
    x10992 = x13498;
    /* VAR */ int x13500 = 0;
    int x13501 = x13500;
    int* x13502 = &x13501;
    char* x13503 = strntoi_unchecked(x10992, x13502);
    x10992 = x13503;
    /* VAR */ int x13505 = 0;
    int x13506 = x13505;
    int* x13507 = &x13506;
    char* x13508 = strntoi_unchecked(x10992, x13507);
    x10992 = x13508;
    /* VAR */ int x13510 = 0;
    int x13511 = x13510;
    int* x13512 = &x13511;
    char* x13513 = strntoi_unchecked(x10992, x13512);
    x10992 = x13513;
    /* VAR */ double x13515 = 0.0;
    double x13516 = x13515;
    double* x13517 = &x13516;
    char* x13518 = strntod_unchecked(x10992, x13517);
    x10992 = x13518;
    /* VAR */ double x13520 = 0.0;
    double x13521 = x13520;
    double* x13522 = &x13521;
    char* x13523 = strntod_unchecked(x10992, x13522);
    x10992 = x13523;
    /* VAR */ double x13525 = 0.0;
    double x13526 = x13525;
    double* x13527 = &x13526;
    char* x13528 = strntod_unchecked(x10992, x13527);
    x10992 = x13528;
    /* VAR */ double x13530 = 0.0;
    double x13531 = x13530;
    double* x13532 = &x13531;
    char* x13533 = strntod_unchecked(x10992, x13532);
    x10992 = x13533;
    char x13535 = *x10992;
    /* VAR */ char x13536 = x13535;
    x10992 += 1;
    x10992 += 1;
    char x13540 = *x10992;
    /* VAR */ char x13541 = x13540;
    x10992 += 1;
    x10992 += 1;
    /* VAR */ int x13545 = 0;
    int x13546 = x13545;
    int* x13547 = &x13546;
    char* x13548 = strntoi_unchecked(x10992, x13547);
    x10992 = x13548;
    /* VAR */ int x13550 = 0;
    int x13551 = x13550;
    int* x13552 = &x13551;
    char* x13553 = strntoi_unchecked(x10992, x13552);
    x10992 = x13553;
    /* VAR */ int x13555 = 0;
    int x13556 = x13555;
    int* x13557 = &x13556;
    char* x13558 = strntoi_unchecked(x10992, x13557);
    x10992 = x13558;
    /* VAR */ int x13564 = 0;
    int x13565 = x13564;
    int* x13566 = &x13565;
    char* x13567 = strntoi_unchecked(x10992, x13566);
    x10992 = x13567;
    /* VAR */ int x13569 = 0;
    int x13570 = x13569;
    int* x13571 = &x13570;
    char* x13572 = strntoi_unchecked(x10992, x13571);
    x10992 = x13572;
    /* VAR */ int x13574 = 0;
    int x13575 = x13574;
    int* x13576 = &x13575;
    char* x13577 = strntoi_unchecked(x10992, x13576);
    x10992 = x13577;
    /* VAR */ int x13583 = 0;
    int x13584 = x13583;
    int* x13585 = &x13584;
    char* x13586 = strntoi_unchecked(x10992, x13585);
    x10992 = x13586;
    /* VAR */ int x13588 = 0;
    int x13589 = x13588;
    int* x13590 = &x13589;
    char* x13591 = strntoi_unchecked(x10992, x13590);
    x10992 = x13591;
    /* VAR */ int x13593 = 0;
    int x13594 = x13593;
    int* x13595 = &x13594;
    char* x13596 = strntoi_unchecked(x10992, x13595);
    x10992 = x13596;
    char* x14856 = (char*)malloc(26 * sizeof(char));
    memset(x14856, 0, 26 * sizeof(char));
    /* VAR */ char* x13603 = x10992;
    while(1) {
      
      char x13604 = *x10992;
      /* VAR */ int ite29948 = 0;
      if((x13604!=('|'))) {
        char x33632 = *x10992;
        ite29948 = (x33632!=('\n'));
      } else {
        
        ite29948 = 0;
      };
      int x28180 = ite29948;
      if (!(x28180)) break; 
      
      x10992 += 1;
    };
    char* x13611 = x13603;
    int x13612 = x10992 - x13611;
    char* x13613 = x13603;
    char* x13614 = strncpy(x14856, x13613, x13612);
    x10992 += 1;
    char* x14874 = (char*)malloc(11 * sizeof(char));
    memset(x14874, 0, 11 * sizeof(char));
    /* VAR */ char* x13622 = x10992;
    while(1) {
      
      char x13623 = *x10992;
      /* VAR */ int ite29971 = 0;
      if((x13623!=('|'))) {
        char x33654 = *x10992;
        ite29971 = (x33654!=('\n'));
      } else {
        
        ite29971 = 0;
      };
      int x28196 = ite29971;
      if (!(x28196)) break; 
      
      x10992 += 1;
    };
    char* x13630 = x13622;
    int x13631 = x10992 - x13630;
    char* x13632 = x13622;
    char* x13633 = strncpy(x14874, x13632, x13631);
    x10992 += 1;
    char* x14892 = (char*)malloc(45 * sizeof(char));
    memset(x14892, 0, 45 * sizeof(char));
    /* VAR */ char* x13641 = x10992;
    while(1) {
      
      char x13642 = *x10992;
      /* VAR */ int ite29994 = 0;
      if((x13642!=('|'))) {
        char x33676 = *x10992;
        ite29994 = (x33676!=('\n'));
      } else {
        
        ite29994 = 0;
      };
      int x28212 = ite29994;
      if (!(x28212)) break; 
      
      x10992 += 1;
    };
    char* x13649 = x13641;
    int x13650 = x10992 - x13649;
    char* x13651 = x13641;
    char* x13652 = strncpy(x14892, x13651, x13650);
    x10992 += 1;
    int x5843 = x5795;
    if((x5843>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "L_SHIPINSTRUCT", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "L_SHIPINSTRUCT");
    };
    /* VAR */ int x16835 = -1;
    int x16836 = x16640->len;
    int x25268 = 0;
    for(; x25268 < x16836 ; x25268 += 1) {
      
      char* x25269 = g_array_index(x16640, char*, x25268);
      int x25270 = strcmp(x25269, x14856);
      int x25271 = !(x25270);
      if(x25271) {
        x16835 = x25268;
        break;
      };
    };
    int x16846 = x16835;
    int x5849 = !((x16846!=(-1)));
    if(x5849) {
      int x5850 = x5795;
      x5795 = (x5850+(1));
      void* x16853 = &(x14856);
      GArray* x16854 = g_array_append_vals(x16640, x16853, 1);
    };
    /* VAR */ int x16855 = -1;
    int x16856 = x16640->len;
    int x25295 = 0;
    for(; x25295 < x16856 ; x25295 += 1) {
      
      char* x25296 = g_array_index(x16640, char*, x25295);
      int x25297 = strcmp(x25296, x14856);
      int x25298 = !(x25297);
      if(x25298) {
        x16855 = x25295;
        break;
      };
    };
    int x16866 = x16855;
    int x5856 = x5797;
    if((x5856>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "L_SHIPMODE", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "L_SHIPMODE");
    };
    /* VAR */ int x16872 = -1;
    int x16873 = x16643->len;
    int x25319 = 0;
    for(; x25319 < x16873 ; x25319 += 1) {
      
      char* x25320 = g_array_index(x16643, char*, x25319);
      int x25321 = strcmp(x25320, x14874);
      int x25322 = !(x25321);
      if(x25322) {
        x16872 = x25319;
        break;
      };
    };
    int x16883 = x16872;
    int x5862 = !((x16883!=(-1)));
    if(x5862) {
      int x5863 = x5797;
      x5797 = (x5863+(1));
      void* x16890 = &(x14874);
      GArray* x16891 = g_array_append_vals(x16643, x16890, 1);
    };
    /* VAR */ int x16892 = -1;
    int x16893 = x16643->len;
    int x25346 = 0;
    for(; x25346 < x16893 ; x25346 += 1) {
      
      char* x25347 = g_array_index(x16643, char*, x25346);
      int x25348 = strcmp(x25347, x14874);
      int x25349 = !(x25348);
      if(x25349) {
        x16892 = x25346;
        break;
      };
    };
    int x16903 = x16892;
    struct LINEITEMRecord* x15572 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x15572, 0, 1 * sizeof(struct LINEITEMRecord));
    x15572->L_PARTKEY = x13501; x15572->L_QUANTITY = x13516; x15572->L_EXTENDEDPRICE = x13521; x15572->L_DISCOUNT = x13526; x15572->L_SHIPINSTRUCT = x16866; x15572->L_SHIPMODE = x16903;
    int x47 = x10993;
    if((x15572==(NULL))) {
      *(x14730 + x47) = (const struct LINEITEMRecord){0};
    } else {
      
      struct LINEITEMRecord x14940 = *x15572;
      *(x14730 + x47) = x14940;
      struct LINEITEMRecord* x14942 = &(x14730[x47]);
      x15572 = x14942;
    };
    int x49 = x10993;
    x10993 = (x49+(1));
  };
  FILE* x13691 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x13692 = 0;
  int x13693 = x13692;
  int* x13694 = &x13693;
  int x13695 = fscanf(x13691, "%d", x13694);
  pclose(x13691);
  struct PARTRecord* x14954 = (struct PARTRecord*)malloc(x13693 * sizeof(struct PARTRecord));
  memset(x14954, 0, x13693 * sizeof(struct PARTRecord));
  int x13699 = O_RDONLY;
  int x13700 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x13699);
  /* VAR */ struct stat x13701 = x13480;
  struct stat x13702 = x13701;
  struct stat* x13703 = &x13702;
  int x13704 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x13703);
  int x13706 = PROT_READ;
  int x13707 = MAP_PRIVATE;
  char* x11067 = mmap(NULL, (x13703->st_size), x13706, x13707, x13700, 0);
  /* VAR */ int x11068 = 0;
  while(1) {
    
    int x57 = x11068;
    /* VAR */ int ite30145 = 0;
    if((x57<(x13693))) {
      char x33826 = *x11067;
      ite30145 = (x33826!=('\0'));
    } else {
      
      ite30145 = 0;
    };
    int x28356 = ite30145;
    if (!(x28356)) break; 
    
    /* VAR */ int x13715 = 0;
    int x13716 = x13715;
    int* x13717 = &x13716;
    char* x13718 = strntoi_unchecked(x11067, x13717);
    x11067 = x13718;
    char* x14977 = (char*)malloc(56 * sizeof(char));
    memset(x14977, 0, 56 * sizeof(char));
    /* VAR */ char* x13721 = x11067;
    while(1) {
      
      char x13722 = *x11067;
      /* VAR */ int ite30164 = 0;
      if((x13722!=('|'))) {
        char x33844 = *x11067;
        ite30164 = (x33844!=('\n'));
      } else {
        
        ite30164 = 0;
      };
      int x28368 = ite30164;
      if (!(x28368)) break; 
      
      x11067 += 1;
    };
    char* x13729 = x13721;
    int x13730 = x11067 - x13729;
    char* x13731 = x13721;
    char* x13732 = strncpy(x14977, x13731, x13730);
    x11067 += 1;
    char* x14995 = (char*)malloc(26 * sizeof(char));
    memset(x14995, 0, 26 * sizeof(char));
    /* VAR */ char* x13740 = x11067;
    while(1) {
      
      char x13741 = *x11067;
      /* VAR */ int ite30187 = 0;
      if((x13741!=('|'))) {
        char x33866 = *x11067;
        ite30187 = (x33866!=('\n'));
      } else {
        
        ite30187 = 0;
      };
      int x28384 = ite30187;
      if (!(x28384)) break; 
      
      x11067 += 1;
    };
    char* x13748 = x13740;
    int x13749 = x11067 - x13748;
    char* x13750 = x13740;
    char* x13751 = strncpy(x14995, x13750, x13749);
    x11067 += 1;
    char* x15013 = (char*)malloc(11 * sizeof(char));
    memset(x15013, 0, 11 * sizeof(char));
    /* VAR */ char* x13759 = x11067;
    while(1) {
      
      char x13760 = *x11067;
      /* VAR */ int ite30210 = 0;
      if((x13760!=('|'))) {
        char x33888 = *x11067;
        ite30210 = (x33888!=('\n'));
      } else {
        
        ite30210 = 0;
      };
      int x28400 = ite30210;
      if (!(x28400)) break; 
      
      x11067 += 1;
    };
    char* x13767 = x13759;
    int x13768 = x11067 - x13767;
    char* x13769 = x13759;
    char* x13770 = strncpy(x15013, x13769, x13768);
    x11067 += 1;
    char* x15031 = (char*)malloc(26 * sizeof(char));
    memset(x15031, 0, 26 * sizeof(char));
    /* VAR */ char* x13778 = x11067;
    while(1) {
      
      char x13779 = *x11067;
      /* VAR */ int ite30233 = 0;
      if((x13779!=('|'))) {
        char x33910 = *x11067;
        ite30233 = (x33910!=('\n'));
      } else {
        
        ite30233 = 0;
      };
      int x28416 = ite30233;
      if (!(x28416)) break; 
      
      x11067 += 1;
    };
    char* x13786 = x13778;
    int x13787 = x11067 - x13786;
    char* x13788 = x13778;
    char* x13789 = strncpy(x15031, x13788, x13787);
    x11067 += 1;
    /* VAR */ int x13796 = 0;
    int x13797 = x13796;
    int* x13798 = &x13797;
    char* x13799 = strntoi_unchecked(x11067, x13798);
    x11067 = x13799;
    char* x15054 = (char*)malloc(11 * sizeof(char));
    memset(x15054, 0, 11 * sizeof(char));
    /* VAR */ char* x13802 = x11067;
    while(1) {
      
      char x13803 = *x11067;
      /* VAR */ int ite30261 = 0;
      if((x13803!=('|'))) {
        char x33937 = *x11067;
        ite30261 = (x33937!=('\n'));
      } else {
        
        ite30261 = 0;
      };
      int x28437 = ite30261;
      if (!(x28437)) break; 
      
      x11067 += 1;
    };
    char* x13810 = x13802;
    int x13811 = x11067 - x13810;
    char* x13812 = x13802;
    char* x13813 = strncpy(x15054, x13812, x13811);
    x11067 += 1;
    /* VAR */ double x13820 = 0.0;
    double x13821 = x13820;
    double* x13822 = &x13821;
    char* x13823 = strntod_unchecked(x11067, x13822);
    x11067 = x13823;
    char* x15077 = (char*)malloc(24 * sizeof(char));
    memset(x15077, 0, 24 * sizeof(char));
    /* VAR */ char* x13826 = x11067;
    while(1) {
      
      char x13827 = *x11067;
      /* VAR */ int ite30289 = 0;
      if((x13827!=('|'))) {
        char x33964 = *x11067;
        ite30289 = (x33964!=('\n'));
      } else {
        
        ite30289 = 0;
      };
      int x28458 = ite30289;
      if (!(x28458)) break; 
      
      x11067 += 1;
    };
    char* x13834 = x13826;
    int x13835 = x11067 - x13834;
    char* x13836 = x13826;
    char* x13837 = strncpy(x15077, x13836, x13835);
    x11067 += 1;
    int x5929 = x5791;
    if((x5929>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "P_BRAND", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "P_BRAND");
    };
    /* VAR */ int x17070 = -1;
    int x17071 = x16634->len;
    int x25525 = 0;
    for(; x25525 < x17071 ; x25525 += 1) {
      
      char* x25526 = g_array_index(x16634, char*, x25525);
      int x25527 = strcmp(x25526, x15013);
      int x25528 = !(x25527);
      if(x25528) {
        x17070 = x25525;
        break;
      };
    };
    int x17081 = x17070;
    int x5935 = !((x17081!=(-1)));
    if(x5935) {
      int x5936 = x5791;
      x5791 = (x5936+(1));
      void* x17088 = &(x15013);
      GArray* x17089 = g_array_append_vals(x16634, x17088, 1);
    };
    /* VAR */ int x17090 = -1;
    int x17091 = x16634->len;
    int x25552 = 0;
    for(; x25552 < x17091 ; x25552 += 1) {
      
      char* x25553 = g_array_index(x16634, char*, x25552);
      int x25554 = strcmp(x25553, x15013);
      int x25555 = !(x25554);
      if(x25555) {
        x17090 = x25552;
        break;
      };
    };
    int x17101 = x17090;
    int x5942 = x5793;
    if((x5942>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "P_CONTAINER", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "P_CONTAINER");
    };
    /* VAR */ int x17107 = -1;
    int x17108 = x16637->len;
    int x25576 = 0;
    for(; x25576 < x17108 ; x25576 += 1) {
      
      char* x25577 = g_array_index(x16637, char*, x25576);
      int x25578 = strcmp(x25577, x15054);
      int x25579 = !(x25578);
      if(x25579) {
        x17107 = x25576;
        break;
      };
    };
    int x17118 = x17107;
    int x5948 = !((x17118!=(-1)));
    if(x5948) {
      int x5949 = x5793;
      x5793 = (x5949+(1));
      void* x17125 = &(x15054);
      GArray* x17126 = g_array_append_vals(x16637, x17125, 1);
    };
    /* VAR */ int x17127 = -1;
    int x17128 = x16637->len;
    int x25603 = 0;
    for(; x25603 < x17128 ; x25603 += 1) {
      
      char* x25604 = g_array_index(x16637, char*, x25603);
      int x25605 = strcmp(x25604, x15054);
      int x25606 = !(x25605);
      if(x25606) {
        x17127 = x25603;
        break;
      };
    };
    int x17138 = x17127;
    struct PARTRecord* x15759 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x15759, 0, 1 * sizeof(struct PARTRecord));
    x15759->P_PARTKEY = x13716; x15759->P_BRAND = x17101; x15759->P_SIZE = x13797; x15759->P_CONTAINER = x17138;
    int x111 = x11068;
    if((x15759==(NULL))) {
      *(x14954 + x111) = (const struct PARTRecord){0};
    } else {
      
      struct PARTRecord x15125 = *x15759;
      *(x14954 + x111) = x15125;
      struct PARTRecord* x15127 = &(x14954[x111]);
      x15759 = x15127;
    };
    int x113 = x11068;
    x11068 = (x113+(1));
  };
  int x118 = 0;
  for(; x118 < 1 ; x118 += 1) {
    
    double* x34699 = (double*)malloc(1 * sizeof(double));
    memset(x34699, 0, 1 * sizeof(double));
    struct LINEITEMRecord** x34700 = (struct LINEITEMRecord**)malloc(1600000 * sizeof(struct LINEITEMRecord*));
    memset(x34700, 0, 1600000 * sizeof(struct LINEITEMRecord*));
    int* x34701 = (int*)malloc(1600000 * sizeof(int));
    memset(x34701, 0, 1600000 * sizeof(int));
    int x25635 = 0;
    for(; x25635 < 1600000 ; x25635 += 1) {
      
      struct LINEITEMRecord* x25636 = (struct LINEITEMRecord*)malloc(1024 * sizeof(struct LINEITEMRecord));
      memset(x25636, 0, 1024 * sizeof(struct LINEITEMRecord));
      *(x34700 + x25635) = x25636;
    };
    /* VAR */ int x34709 = 0;
    int x25659 = 0;
    for(; x25659 < x13472 ; x25659 += 1) {
      
      struct LINEITEMRecord* x25660 = &(x14730[x25659]);
      int x25662 = (x25660->L_PARTKEY)%(1600000);
      int x25663 = x34701[x25662];
      struct LINEITEMRecord* x25664 = x34700[x25662];
      if((x25660==(NULL))) {
        *(x25664 + x25663) = (const struct LINEITEMRecord){0};
      } else {
        
        struct LINEITEMRecord x15156 = *x25660;
        *(x25664 + x25663) = x15156;
        struct LINEITEMRecord* x15158 = &(x25664[x25663]);
        x25660 = x15158;
      };
      *(x34701 + x25662) = (x25663+(1));
      int x25674 = x34709;
      x34709 = (x25674+(1));
    };
    /* VAR */ struct timeval x34747 = x12910;
    struct timeval x34748 = x34747;
    /* VAR */ struct timeval x34749 = x12910;
    struct timeval x34750 = x34749;
    /* VAR */ struct timeval x34751 = x12910;
    struct timeval x34752 = x34751;
    struct timeval* x34753 = &x34750;
    gettimeofday(x34753, NULL);
    /* VAR */ int x34755 = -1;
    int x34756 = x16634->len;
    int x25696 = 0;
    for(; x25696 < x34756 ; x25696 += 1) {
      
      char* x25697 = g_array_index(x16634, char*, x25696);
      int x25698 = strcmp(x25697, "Brand#31");
      int x25699 = !(x25698);
      if(x25699) {
        x34755 = x25696;
        break;
      };
    };
    int x34772 = x34755;
    /* VAR */ int x34773 = -1;
    int x34774 = x16634->len;
    int x25715 = 0;
    for(; x25715 < x34774 ; x25715 += 1) {
      
      char* x25716 = g_array_index(x16634, char*, x25715);
      int x25717 = strcmp(x25716, "Brand#43");
      int x25718 = !(x25717);
      if(x25718) {
        x34773 = x25715;
        break;
      };
    };
    int x34790 = x34773;
    /* VAR */ int x34791 = -1;
    int x34792 = x16637->len;
    int x25734 = 0;
    for(; x25734 < x34792 ; x25734 += 1) {
      
      char* x25735 = g_array_index(x16637, char*, x25734);
      int x25736 = strcmp(x25735, "SM BOX");
      int x25737 = !(x25736);
      if(x25737) {
        x34791 = x25734;
        break;
      };
    };
    int x34808 = x34791;
    /* VAR */ int x34809 = -1;
    int x34810 = x16637->len;
    int x25753 = 0;
    for(; x25753 < x34810 ; x25753 += 1) {
      
      char* x25754 = g_array_index(x16637, char*, x25753);
      int x25755 = strcmp(x25754, "SM CASE");
      int x25756 = !(x25755);
      if(x25756) {
        x34809 = x25753;
        break;
      };
    };
    int x34826 = x34809;
    /* VAR */ int x34827 = -1;
    int x34828 = x16637->len;
    int x25772 = 0;
    for(; x25772 < x34828 ; x25772 += 1) {
      
      char* x25773 = g_array_index(x16637, char*, x25772);
      int x25774 = strcmp(x25773, "SM PACK");
      int x25775 = !(x25774);
      if(x25775) {
        x34827 = x25772;
        break;
      };
    };
    int x34844 = x34827;
    /* VAR */ int x34845 = -1;
    int x34846 = x16637->len;
    int x25791 = 0;
    for(; x25791 < x34846 ; x25791 += 1) {
      
      char* x25792 = g_array_index(x16637, char*, x25791);
      int x25793 = strcmp(x25792, "SM PKG");
      int x25794 = !(x25793);
      if(x25794) {
        x34845 = x25791;
        break;
      };
    };
    int x34862 = x34845;
    /* VAR */ int x34863 = -1;
    int x34864 = x16637->len;
    int x25810 = 0;
    for(; x25810 < x34864 ; x25810 += 1) {
      
      char* x25811 = g_array_index(x16637, char*, x25810);
      int x25812 = strcmp(x25811, "MED BAG");
      int x25813 = !(x25812);
      if(x25813) {
        x34863 = x25810;
        break;
      };
    };
    int x34880 = x34863;
    /* VAR */ int x34881 = -1;
    int x34882 = x16637->len;
    int x25829 = 0;
    for(; x25829 < x34882 ; x25829 += 1) {
      
      char* x25830 = g_array_index(x16637, char*, x25829);
      int x25831 = strcmp(x25830, "MED BOX");
      int x25832 = !(x25831);
      if(x25832) {
        x34881 = x25829;
        break;
      };
    };
    int x34898 = x34881;
    /* VAR */ int x34899 = -1;
    int x34900 = x16637->len;
    int x25848 = 0;
    for(; x25848 < x34900 ; x25848 += 1) {
      
      char* x25849 = g_array_index(x16637, char*, x25848);
      int x25850 = strcmp(x25849, "MED PACK");
      int x25851 = !(x25850);
      if(x25851) {
        x34899 = x25848;
        break;
      };
    };
    int x34916 = x34899;
    /* VAR */ int x34917 = -1;
    int x34918 = x16637->len;
    int x25867 = 0;
    for(; x25867 < x34918 ; x25867 += 1) {
      
      char* x25868 = g_array_index(x16637, char*, x25867);
      int x25869 = strcmp(x25868, "MED PKG");
      int x25870 = !(x25869);
      if(x25870) {
        x34917 = x25867;
        break;
      };
    };
    int x34934 = x34917;
    /* VAR */ int x34935 = -1;
    int x34936 = x16637->len;
    int x25886 = 0;
    for(; x25886 < x34936 ; x25886 += 1) {
      
      char* x25887 = g_array_index(x16637, char*, x25886);
      int x25888 = strcmp(x25887, "LG BOX");
      int x25889 = !(x25888);
      if(x25889) {
        x34935 = x25886;
        break;
      };
    };
    int x34952 = x34935;
    /* VAR */ int x34953 = -1;
    int x34954 = x16637->len;
    int x25905 = 0;
    for(; x25905 < x34954 ; x25905 += 1) {
      
      char* x25906 = g_array_index(x16637, char*, x25905);
      int x25907 = strcmp(x25906, "LG CASE");
      int x25908 = !(x25907);
      if(x25908) {
        x34953 = x25905;
        break;
      };
    };
    int x34970 = x34953;
    /* VAR */ int x34971 = -1;
    int x34972 = x16637->len;
    int x25924 = 0;
    for(; x25924 < x34972 ; x25924 += 1) {
      
      char* x25925 = g_array_index(x16637, char*, x25924);
      int x25926 = strcmp(x25925, "LG PACK");
      int x25927 = !(x25926);
      if(x25927) {
        x34971 = x25924;
        break;
      };
    };
    int x34988 = x34971;
    /* VAR */ int x34989 = -1;
    int x34990 = x16637->len;
    int x25943 = 0;
    for(; x25943 < x34990 ; x25943 += 1) {
      
      char* x25944 = g_array_index(x16637, char*, x25943);
      int x25945 = strcmp(x25944, "LG PKG");
      int x25946 = !(x25945);
      if(x25946) {
        x34989 = x25943;
        break;
      };
    };
    int x35006 = x34989;
    /* VAR */ int x35007 = -1;
    int x35008 = x16640->len;
    int x25962 = 0;
    for(; x25962 < x35008 ; x25962 += 1) {
      
      char* x25963 = g_array_index(x16640, char*, x25962);
      int x25964 = strcmp(x25963, "DELIVER IN PERSON");
      int x25965 = !(x25964);
      if(x25965) {
        x35007 = x25962;
        break;
      };
    };
    int x35024 = x35007;
    /* VAR */ int x35025 = -1;
    int x35026 = x16643->len;
    int x25981 = 0;
    for(; x25981 < x35026 ; x25981 += 1) {
      
      char* x25982 = g_array_index(x16643, char*, x25981);
      int x25983 = strcmp(x25982, "AIR");
      int x25984 = !(x25983);
      if(x25984) {
        x35025 = x25981;
        break;
      };
    };
    int x35042 = x35025;
    /* VAR */ int x35043 = -1;
    int x35044 = x16643->len;
    int x26000 = 0;
    for(; x26000 < x35044 ; x26000 += 1) {
      
      char* x26001 = g_array_index(x16643, char*, x26000);
      int x26002 = strcmp(x26001, "AIRREG");
      int x26003 = !(x26002);
      if(x26003) {
        x35043 = x26000;
        break;
      };
    };
    int x35060 = x35043;
    /* VAR */ int x35061 = 0;
    while(1) {
      
      int x35063 = x35061;
      if (!((x35063<(x13693)))) break; 
      
      int x2415 = x35061;
      struct PARTRecord* x363 = &(x14954[x2415]);
      int x365 = x363->P_SIZE;
      int x29561 = x363->P_CONTAINER;
      int x29575 = x363->P_CONTAINER;
      int x29589 = x363->P_CONTAINER;
      if(((((x365>=(1))&((((x365<=(5))&(((x363->P_BRAND)==(x34772))))&(((((x29561==(x34808))|((x29561==(x34826))))|((x29561==(x34844))))|((x29561==(x34862))))))))|((((x365<=(10))&(((x363->P_BRAND)==(x34790))))&(((((x29575==(x34880))|((x29575==(x34898))))|((x29575==(x34916))))|((x29575==(x34934))))))))|((((x365<=(15))&(((x363->P_BRAND)==(x34790))))&(((((x29589==(x34952))|((x29589==(x34970))))|((x29589==(x34988))))|((x29589==(x35006))))))))) {
        int x409 = x363->P_PARTKEY;
        int x11268 = x409%(1600000);
        int x11269 = x34701[x11268];
        struct LINEITEMRecord* x11270 = x34700[x11268];
        int x26153 = 0;
        for(; x26153 < x11269 ; x26153 += 1) {
          
          struct LINEITEMRecord* x26154 = &(x11270[x26153]);
          double x26155 = x26154->L_QUANTITY;
          int x29709 = x26154->L_SHIPMODE;
          if(((((((x26155<=(36.0))&((x26155>=(26.0))))|(((x26155<=(25.0))&((x26155>=(15.0))))))|(((x26155<=(14.0))&((x26155>=(4.0))))))&(((x26154->L_SHIPINSTRUCT)==(x35024))))&(((x29709==(x35042))|((x29709==(x35060))))))) {
            if(((x26154->L_PARTKEY)==(x409))) {
              if((x409==((x26154->L_PARTKEY)))) {
                double x1212 = x26154->L_QUANTITY;
                int x6117 = x363->P_BRAND;
                int x6118 = x363->P_CONTAINER;
                if((((((((x6117==(x34772))&(((((x6118==(x34808))|((x6118==(x34826))))|((x6118==(x34844))))|((x6118==(x34862))))))&((x1212>=(4.0))))&((x1212<=(14.0))))&((x365<=(5))))|((((((x6117==(x34790))&(((((x6118==(x34880))|((x6118==(x34898))))|((x6118==(x34916))))|((x6118==(x34934))))))&((x1212>=(15.0))))&((x1212<=(25.0))))&((x365<=(10))))))|((((((x6117==(x34790))&(((((x6118==(x34952))|((x6118==(x34970))))|((x6118==(x34988))))|((x6118==(x35006))))))&((x1212>=(26.0))))&((x1212<=(36.0))))&((x365<=(15))))))) {
                  double x607 = x34699[0];
                  *x34699 = (x607+(((x26154->L_EXTENDEDPRICE)*((1.0-((x26154->L_DISCOUNT)))))));
                };
              };
            };
          };
        };
      };
      int x2688 = x35061;
      x35061 = (x2688+(1));
    };
    double x35294 = x34699[0];
    printf("%.4f\n", x35294);
    printf("(%d rows)\n", 1);
    struct timeval* x35297 = &x34752;
    gettimeofday(x35297, NULL);
    struct timeval* x35299 = &x34748;
    struct timeval* x35300 = &x34752;
    struct timeval* x35301 = &x34750;
    long x35302 = timeval_subtract(x35299, x35300, x35301);
    printf("Generated code run in %ld milliseconds.\n", x35302);
  };
}
/* ----------- FUNCTIONS ----------- */