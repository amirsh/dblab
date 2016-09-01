#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct AGGRecord_String;
struct LINEITEMRecord;
struct LINEITEMRecord_PARTRecord;
struct PARTRecord;
struct AGGRecord_String {
  char* key;
  double* aggs;
};

struct LINEITEMRecord {
  numeric_int_t L_PARTKEY;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
};

struct LINEITEMRecord_PARTRecord {
  numeric_int_t L_PARTKEY;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  numeric_int_t P_PARTKEY;
  numeric_int_t P_BRAND;
  numeric_int_t P_CONTAINER;
};

struct PARTRecord {
  numeric_int_t P_PARTKEY;
  numeric_int_t P_BRAND;
  numeric_int_t P_CONTAINER;
};


numeric_int_t x719737(void* x703379);

numeric_int_t x719740(void* x703382, void* x703383);

int main(int argc, char** argv) {
  /* VAR */ long mallocSym_702228_721774 = 0L;
  /* VAR */ long mallocSym_702084_721775 = 0L;
  /* VAR */ long mallocSym_712359_721776 = 0L;
  /* VAR */ long mallocSym_702299_721777 = 0L;
  /* VAR */ long mallocSym_719748_721778 = 0L;
  /* VAR */ long mallocSym_702154_721779 = 0L;
  /* VAR */ long mallocSym_702635_721780 = 0L;
  /* VAR */ long mallocSym_702271_721781 = 0L;
  /* VAR */ long mallocSym_702324_721782 = 0L;
  /* VAR */ long mallocSym_702138_721783 = 0L;
  /* VAR */ long mallocSym_718738_721784 = 0L;
  /* VAR */ long mallocSym_702186_721785 = 0L;
  /* VAR */ long mallocSym_718946_721786 = 0L;
  /* VAR */ long mallocSym_702822_721787 = 0L;
  /* VAR */ long mallocSym_719734_721788 = 0L;
  /* VAR */ long mallocSym_702275_721789 = 0L;
  /* VAR */ long mallocSym_702807_721790 = 0L;
  /* VAR */ long mallocSym_719733_721791 = 0L;
  /* VAR */ long mallocSym_702170_721792 = 0L;
  /* VAR */ long mallocSym_702068_721793 = 0L;
  /* VAR */ long mallocSym_719822_721794 = 0L;
  /* VAR */ long mallocSym_702274_721795 = 0L;
  /* VAR */ long mallocSym_702207_721796 = 0L;
  /* VAR */ long mallocSym_702052_721797 = 0L;
  /* VAR */ long mallocSym_702882_721798 = 0L;
  /* VAR */ long mallocSym_719747_721799 = 0L;
  /* VAR */ numeric_int_t x699549 = 0;
  numeric_int_t x704239 = sizeof(char*);
  GArray* x704240 = g_array_new(0, 1, x704239);
  /* VAR */ numeric_int_t x699551 = 0;
  numeric_int_t x704242 = sizeof(char*);
  GArray* x704243 = g_array_new(0, 1, x704242);
  FILE* x718732 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x718733 = 0;
  numeric_int_t x718734 = x718733;
  numeric_int_t* x718735 = &x718734;
  numeric_int_t x718736 = fscanf(x718732, "%d", x718735);
  pclose(x718732);
  struct LINEITEMRecord* x721812 = (struct LINEITEMRecord*)malloc(x718734 * sizeof(struct LINEITEMRecord));
  memset(x721812, 0, x718734 * sizeof(struct LINEITEMRecord));
  long x721813 = mallocSym_718738_721784;
  mallocSym_718738_721784 = (x721813+(((long){x718734})));
  numeric_int_t x718739 = O_RDONLY;
  numeric_int_t x718740 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x718739);
  struct stat x718741 = (struct stat){0};
  /* VAR */ struct stat x718742 = x718741;
  struct stat x718743 = x718742;
  struct stat* x718744 = &x718743;
  numeric_int_t x718745 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x718744);
  numeric_int_t x718747 = PROT_READ;
  numeric_int_t x718748 = MAP_PRIVATE;
  char* x718749 = mmap(NULL, (x718744->st_size), x718747, x718748, x718740, 0);
  /* VAR */ numeric_int_t x718750 = 0;
  while(1) {
    
    numeric_int_t x696755 = x718750;
    /* VAR */ boolean_t ite715670 = 0;
    if((x696755<(x718734))) {
      char x718756 = *x718749;
      ite715670 = (x718756!=('\0'));
    } else {
      
      ite715670 = 0;
    };
    boolean_t x714222 = ite715670;
    if (!(x714222)) break; 
    
    /* VAR */ numeric_int_t x700866 = 0;
    numeric_int_t x700867 = x700866;
    numeric_int_t* x700868 = &x700867;
    char* x700869 = strntoi_unchecked(x718749, x700868);
    x718749 = x700869;
    /* VAR */ numeric_int_t x700871 = 0;
    numeric_int_t x700872 = x700871;
    numeric_int_t* x700873 = &x700872;
    char* x700874 = strntoi_unchecked(x718749, x700873);
    x718749 = x700874;
    /* VAR */ numeric_int_t x700876 = 0;
    numeric_int_t x700877 = x700876;
    numeric_int_t* x700878 = &x700877;
    char* x700879 = strntoi_unchecked(x718749, x700878);
    x718749 = x700879;
    /* VAR */ numeric_int_t x700881 = 0;
    numeric_int_t x700882 = x700881;
    numeric_int_t* x700883 = &x700882;
    char* x700884 = strntoi_unchecked(x718749, x700883);
    x718749 = x700884;
    /* VAR */ double x700886 = 0.0;
    double x700887 = x700886;
    double* x700888 = &x700887;
    char* x700889 = strntod_unchecked(x718749, x700888);
    x718749 = x700889;
    /* VAR */ double x700891 = 0.0;
    double x700892 = x700891;
    double* x700893 = &x700892;
    char* x700894 = strntod_unchecked(x718749, x700893);
    x718749 = x700894;
    /* VAR */ double x700896 = 0.0;
    double x700897 = x700896;
    double* x700898 = &x700897;
    char* x700899 = strntod_unchecked(x718749, x700898);
    x718749 = x700899;
    /* VAR */ double x700901 = 0.0;
    double x700902 = x700901;
    double* x700903 = &x700902;
    char* x700904 = strntod_unchecked(x718749, x700903);
    x718749 = x700904;
    char x700906 = *x718749;
    /* VAR */ char x700907 = x700906;
    x718749 += 1;
    x718749 += 1;
    char x700911 = *x718749;
    /* VAR */ char x700912 = x700911;
    x718749 += 1;
    x718749 += 1;
    /* VAR */ numeric_int_t x700916 = 0;
    numeric_int_t x700917 = x700916;
    numeric_int_t* x700918 = &x700917;
    char* x700919 = strntoi_unchecked(x718749, x700918);
    x718749 = x700919;
    /* VAR */ numeric_int_t x700921 = 0;
    numeric_int_t x700922 = x700921;
    numeric_int_t* x700923 = &x700922;
    char* x700924 = strntoi_unchecked(x718749, x700923);
    x718749 = x700924;
    /* VAR */ numeric_int_t x700926 = 0;
    numeric_int_t x700927 = x700926;
    numeric_int_t* x700928 = &x700927;
    char* x700929 = strntoi_unchecked(x718749, x700928);
    x718749 = x700929;
    /* VAR */ numeric_int_t x700935 = 0;
    numeric_int_t x700936 = x700935;
    numeric_int_t* x700937 = &x700936;
    char* x700938 = strntoi_unchecked(x718749, x700937);
    x718749 = x700938;
    /* VAR */ numeric_int_t x700940 = 0;
    numeric_int_t x700941 = x700940;
    numeric_int_t* x700942 = &x700941;
    char* x700943 = strntoi_unchecked(x718749, x700942);
    x718749 = x700943;
    /* VAR */ numeric_int_t x700945 = 0;
    numeric_int_t x700946 = x700945;
    numeric_int_t* x700947 = &x700946;
    char* x700948 = strntoi_unchecked(x718749, x700947);
    x718749 = x700948;
    /* VAR */ numeric_int_t x700954 = 0;
    numeric_int_t x700955 = x700954;
    numeric_int_t* x700956 = &x700955;
    char* x700957 = strntoi_unchecked(x718749, x700956);
    x718749 = x700957;
    /* VAR */ numeric_int_t x700959 = 0;
    numeric_int_t x700960 = x700959;
    numeric_int_t* x700961 = &x700960;
    char* x700962 = strntoi_unchecked(x718749, x700961);
    x718749 = x700962;
    /* VAR */ numeric_int_t x700964 = 0;
    numeric_int_t x700965 = x700964;
    numeric_int_t* x700966 = &x700965;
    char* x700967 = strntoi_unchecked(x718749, x700966);
    x718749 = x700967;
    /* VAR */ char* x700973 = x718749;
    while(1) {
      
      char x700974 = *x718749;
      /* VAR */ boolean_t ite715790 = 0;
      if((x700974!=('|'))) {
        char x718875 = *x718749;
        ite715790 = (x718875!=('\n'));
      } else {
        
        ite715790 = 0;
      };
      boolean_t x714335 = ite715790;
      if (!(x714335)) break; 
      
      x718749 += 1;
    };
    char* x700981 = x700973;
    numeric_int_t x700982 = x718749 - x700981;
    numeric_int_t x700983 = x700982+(1);
    char* x721963 = (char*)malloc(x700983 * sizeof(char));
    memset(x721963, 0, x700983 * sizeof(char));
    long x721964 = mallocSym_702052_721797;
    mallocSym_702052_721797 = (x721964+(((long){x700983})));
    char* x700986 = x700973;
    char* x700987 = strncpy(x721963, x700986, x700982);
    x718749 += 1;
    /* VAR */ char* x700989 = x718749;
    while(1) {
      
      char x700990 = *x718749;
      /* VAR */ boolean_t ite715811 = 0;
      if((x700990!=('|'))) {
        char x718895 = *x718749;
        ite715811 = (x718895!=('\n'));
      } else {
        
        ite715811 = 0;
      };
      boolean_t x714349 = ite715811;
      if (!(x714349)) break; 
      
      x718749 += 1;
    };
    char* x700997 = x700989;
    numeric_int_t x700998 = x718749 - x700997;
    numeric_int_t x700999 = x700998+(1);
    char* x721987 = (char*)malloc(x700999 * sizeof(char));
    memset(x721987, 0, x700999 * sizeof(char));
    long x721988 = mallocSym_702068_721793;
    mallocSym_702068_721793 = (x721988+(((long){x700999})));
    char* x701002 = x700989;
    char* x701003 = strncpy(x721987, x701002, x700998);
    x718749 += 1;
    /* VAR */ char* x701005 = x718749;
    while(1) {
      
      char x701006 = *x718749;
      /* VAR */ boolean_t ite715832 = 0;
      if((x701006!=('|'))) {
        char x718915 = *x718749;
        ite715832 = (x718915!=('\n'));
      } else {
        
        ite715832 = 0;
      };
      boolean_t x714363 = ite715832;
      if (!(x714363)) break; 
      
      x718749 += 1;
    };
    char* x701013 = x701005;
    numeric_int_t x701014 = x718749 - x701013;
    numeric_int_t x701015 = x701014+(1);
    char* x722011 = (char*)malloc(x701015 * sizeof(char));
    memset(x722011, 0, x701015 * sizeof(char));
    long x722012 = mallocSym_702084_721775;
    mallocSym_702084_721775 = (x722012+(((long){x701015})));
    char* x701018 = x701005;
    char* x701019 = strncpy(x722011, x701018, x701014);
    x718749 += 1;
    struct LINEITEMRecord* x722019 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x722019, 0, 1 * sizeof(struct LINEITEMRecord));
    long x722020 = mallocSym_702635_721780;
    mallocSym_702635_721780 = (x722020+(((long){1})));
    x722019->L_PARTKEY = x700872; x722019->L_QUANTITY = x700887; x722019->L_EXTENDEDPRICE = x700892;
    numeric_int_t x696776 = x718750;
    struct LINEITEMRecord x702091 = *x722019;
    *(x721812 + x696776) = x702091;
    struct LINEITEMRecord* x702093 = &(x721812[x696776]);
    x722019 = x702093;
    numeric_int_t x696778 = x718750;
    x718750 = (x696778+(1));
  };
  FILE* x718940 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ numeric_int_t x718941 = 0;
  numeric_int_t x718942 = x718941;
  numeric_int_t* x718943 = &x718942;
  numeric_int_t x718944 = fscanf(x718940, "%d", x718943);
  pclose(x718940);
  struct PARTRecord* x722040 = (struct PARTRecord*)malloc(x718942 * sizeof(struct PARTRecord));
  memset(x722040, 0, x718942 * sizeof(struct PARTRecord));
  long x722041 = mallocSym_718946_721786;
  mallocSym_718946_721786 = (x722041+(((long){x718942})));
  numeric_int_t x718947 = O_RDONLY;
  numeric_int_t x718948 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x718947);
  /* VAR */ struct stat x718949 = x718741;
  struct stat x718950 = x718949;
  struct stat* x718951 = &x718950;
  numeric_int_t x718952 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x718951);
  numeric_int_t x718954 = PROT_READ;
  numeric_int_t x718955 = MAP_PRIVATE;
  char* x718956 = mmap(NULL, (x718951->st_size), x718954, x718955, x718948, 0);
  /* VAR */ numeric_int_t x718957 = 0;
  while(1) {
    
    numeric_int_t x696786 = x718957;
    /* VAR */ boolean_t ite715881 = 0;
    if((x696786<(x718942))) {
      char x718963 = *x718956;
      ite715881 = (x718963!=('\0'));
    } else {
      
      ite715881 = 0;
    };
    boolean_t x714405 = ite715881;
    if (!(x714405)) break; 
    
    /* VAR */ numeric_int_t x701051 = 0;
    numeric_int_t x701052 = x701051;
    numeric_int_t* x701053 = &x701052;
    char* x701054 = strntoi_unchecked(x718956, x701053);
    x718956 = x701054;
    /* VAR */ char* x701056 = x718956;
    while(1) {
      
      char x701057 = *x718956;
      /* VAR */ boolean_t ite715899 = 0;
      if((x701057!=('|'))) {
        char x718980 = *x718956;
        ite715899 = (x718980!=('\n'));
      } else {
        
        ite715899 = 0;
      };
      boolean_t x714416 = ite715899;
      if (!(x714416)) break; 
      
      x718956 += 1;
    };
    char* x701064 = x701056;
    numeric_int_t x701065 = x718956 - x701064;
    numeric_int_t x701066 = x701065+(1);
    char* x722088 = (char*)malloc(x701066 * sizeof(char));
    memset(x722088, 0, x701066 * sizeof(char));
    long x722089 = mallocSym_702138_721783;
    mallocSym_702138_721783 = (x722089+(((long){x701066})));
    char* x701069 = x701056;
    char* x701070 = strncpy(x722088, x701069, x701065);
    x718956 += 1;
    /* VAR */ char* x701072 = x718956;
    while(1) {
      
      char x701073 = *x718956;
      /* VAR */ boolean_t ite715920 = 0;
      if((x701073!=('|'))) {
        char x719000 = *x718956;
        ite715920 = (x719000!=('\n'));
      } else {
        
        ite715920 = 0;
      };
      boolean_t x714430 = ite715920;
      if (!(x714430)) break; 
      
      x718956 += 1;
    };
    char* x701080 = x701072;
    numeric_int_t x701081 = x718956 - x701080;
    numeric_int_t x701082 = x701081+(1);
    char* x722112 = (char*)malloc(x701082 * sizeof(char));
    memset(x722112, 0, x701082 * sizeof(char));
    long x722113 = mallocSym_702154_721779;
    mallocSym_702154_721779 = (x722113+(((long){x701082})));
    char* x701085 = x701072;
    char* x701086 = strncpy(x722112, x701085, x701081);
    x718956 += 1;
    /* VAR */ char* x701088 = x718956;
    while(1) {
      
      char x701089 = *x718956;
      /* VAR */ boolean_t ite715941 = 0;
      if((x701089!=('|'))) {
        char x719020 = *x718956;
        ite715941 = (x719020!=('\n'));
      } else {
        
        ite715941 = 0;
      };
      boolean_t x714444 = ite715941;
      if (!(x714444)) break; 
      
      x718956 += 1;
    };
    char* x701096 = x701088;
    numeric_int_t x701097 = x718956 - x701096;
    numeric_int_t x701098 = x701097+(1);
    char* x722136 = (char*)malloc(x701098 * sizeof(char));
    memset(x722136, 0, x701098 * sizeof(char));
    long x722137 = mallocSym_702170_721792;
    mallocSym_702170_721792 = (x722137+(((long){x701098})));
    char* x701101 = x701088;
    char* x701102 = strncpy(x722136, x701101, x701097);
    x718956 += 1;
    /* VAR */ char* x701104 = x718956;
    while(1) {
      
      char x701105 = *x718956;
      /* VAR */ boolean_t ite715962 = 0;
      if((x701105!=('|'))) {
        char x719040 = *x718956;
        ite715962 = (x719040!=('\n'));
      } else {
        
        ite715962 = 0;
      };
      boolean_t x714458 = ite715962;
      if (!(x714458)) break; 
      
      x718956 += 1;
    };
    char* x701112 = x701104;
    numeric_int_t x701113 = x718956 - x701112;
    numeric_int_t x701114 = x701113+(1);
    char* x722160 = (char*)malloc(x701114 * sizeof(char));
    memset(x722160, 0, x701114 * sizeof(char));
    long x722161 = mallocSym_702186_721785;
    mallocSym_702186_721785 = (x722161+(((long){x701114})));
    char* x701117 = x701104;
    char* x701118 = strncpy(x722160, x701117, x701113);
    x718956 += 1;
    /* VAR */ numeric_int_t x701120 = 0;
    numeric_int_t x701121 = x701120;
    numeric_int_t* x701122 = &x701121;
    char* x701123 = strntoi_unchecked(x718956, x701122);
    x718956 = x701123;
    /* VAR */ char* x701125 = x718956;
    while(1) {
      
      char x701126 = *x718956;
      /* VAR */ boolean_t ite715988 = 0;
      if((x701126!=('|'))) {
        char x719065 = *x718956;
        ite715988 = (x719065!=('\n'));
      } else {
        
        ite715988 = 0;
      };
      boolean_t x714477 = ite715988;
      if (!(x714477)) break; 
      
      x718956 += 1;
    };
    char* x701133 = x701125;
    numeric_int_t x701134 = x718956 - x701133;
    numeric_int_t x701135 = x701134+(1);
    char* x722189 = (char*)malloc(x701135 * sizeof(char));
    memset(x722189, 0, x701135 * sizeof(char));
    long x722190 = mallocSym_702207_721796;
    mallocSym_702207_721796 = (x722190+(((long){x701135})));
    char* x701138 = x701125;
    char* x701139 = strncpy(x722189, x701138, x701134);
    x718956 += 1;
    /* VAR */ double x701141 = 0.0;
    double x701142 = x701141;
    double* x701143 = &x701142;
    char* x701144 = strntod_unchecked(x718956, x701143);
    x718956 = x701144;
    /* VAR */ char* x701146 = x718956;
    while(1) {
      
      char x701147 = *x718956;
      /* VAR */ boolean_t ite716014 = 0;
      if((x701147!=('|'))) {
        char x719090 = *x718956;
        ite716014 = (x719090!=('\n'));
      } else {
        
        ite716014 = 0;
      };
      boolean_t x714496 = ite716014;
      if (!(x714496)) break; 
      
      x718956 += 1;
    };
    char* x701154 = x701146;
    numeric_int_t x701155 = x718956 - x701154;
    numeric_int_t x701156 = x701155+(1);
    char* x722218 = (char*)malloc(x701156 * sizeof(char));
    memset(x722218, 0, x701156 * sizeof(char));
    long x722219 = mallocSym_702228_721774;
    mallocSym_702228_721774 = (x722219+(((long){x701156})));
    char* x701159 = x701146;
    char* x701160 = strncpy(x722218, x701159, x701155);
    x718956 += 1;
    numeric_int_t x699603 = x699549;
    if((x699603>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "P_BRAND", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "P_BRAND");
    };
    /* VAR */ numeric_int_t x704576 = -1;
    numeric_int_t x704577 = x704240->len;
    numeric_int_t x712206 = 0;
    for(; x712206 < x704577 ; x712206 += 1) {
      
      char* x712207 = g_array_index(x704240, char*, x712206);
      boolean_t x712208 = strcmp(x712207, x722136);
      boolean_t x712209 = !(x712208);
      if(x712209) {
        x704576 = x712206;
        break;
      };
    };
    numeric_int_t x704587 = x704576;
    boolean_t x699609 = !((x704587!=(-1)));
    if(x699609) {
      numeric_int_t x699610 = x699549;
      x699549 = (x699610+(1));
      void* x704594 = &(x722136);
      GArray* x704595 = g_array_append_vals(x704240, x704594, 1);
    };
    /* VAR */ numeric_int_t x704596 = -1;
    numeric_int_t x704597 = x704240->len;
    numeric_int_t x712233 = 0;
    for(; x712233 < x704597 ; x712233 += 1) {
      
      char* x712234 = g_array_index(x704240, char*, x712233);
      boolean_t x712235 = strcmp(x712234, x722136);
      boolean_t x712236 = !(x712235);
      if(x712236) {
        x704596 = x712233;
        break;
      };
    };
    numeric_int_t x704607 = x704596;
    numeric_int_t x699616 = x699551;
    if((x699616>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "P_CONTAINER", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "P_CONTAINER");
    };
    /* VAR */ numeric_int_t x704613 = -1;
    numeric_int_t x704614 = x704243->len;
    numeric_int_t x712257 = 0;
    for(; x712257 < x704614 ; x712257 += 1) {
      
      char* x712258 = g_array_index(x704243, char*, x712257);
      boolean_t x712259 = strcmp(x712258, x722189);
      boolean_t x712260 = !(x712259);
      if(x712260) {
        x704613 = x712257;
        break;
      };
    };
    numeric_int_t x704624 = x704613;
    boolean_t x699622 = !((x704624!=(-1)));
    if(x699622) {
      numeric_int_t x699623 = x699551;
      x699551 = (x699623+(1));
      void* x704631 = &(x722189);
      GArray* x704632 = g_array_append_vals(x704243, x704631, 1);
    };
    /* VAR */ numeric_int_t x704633 = -1;
    numeric_int_t x704634 = x704243->len;
    numeric_int_t x712284 = 0;
    for(; x712284 < x704634 ; x712284 += 1) {
      
      char* x712285 = g_array_index(x704243, char*, x712284);
      boolean_t x712286 = strcmp(x712285, x722189);
      boolean_t x712287 = !(x712286);
      if(x712287) {
        x704633 = x712284;
        break;
      };
    };
    numeric_int_t x704644 = x704633;
    struct PARTRecord* x722324 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x722324, 0, 1 * sizeof(struct PARTRecord));
    long x722325 = mallocSym_702807_721790;
    mallocSym_702807_721790 = (x722325+(((long){1})));
    x722324->P_PARTKEY = x701052; x722324->P_BRAND = x704607; x722324->P_CONTAINER = x704644;
    numeric_int_t x696800 = x718957;
    struct PARTRecord x702261 = *x722324;
    *(x722040 + x696800) = x702261;
    struct PARTRecord* x702263 = &(x722040[x696800]);
    x722324 = x702263;
    numeric_int_t x696802 = x718957;
    x718957 = (x696802+(1));
  };
  numeric_int_t x696807 = 0;
  for(; x696807 < 1 ; x696807 += 1) {
    
    double* x722888 = (double*)malloc(1 * sizeof(double));
    memset(x722888, 0, 1 * sizeof(double));
    long x722889 = mallocSym_719733_721791;
    long x722890 = (long){1};
    mallocSym_719733_721791 = (x722889+(x722890));
    struct AGGRecord_String* x722893 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x722893, 0, 1 * sizeof(struct AGGRecord_String));
    long x722894 = mallocSym_719734_721788;
    mallocSym_719734_721788 = (x722894+(x722890));
    x722893->key = "Total"; x722893->aggs = x722888;
    GHashTable* x719746 = g_hash_table_new(((void***){x719737}), ((numeric_int_t*){x719740}));
    struct LINEITEMRecord** x722909 = (struct LINEITEMRecord**)malloc(1600000 * sizeof(struct LINEITEMRecord*));
    memset(x722909, 0, 1600000 * sizeof(struct LINEITEMRecord*));
    long x722910 = mallocSym_719747_721799;
    long x722911 = (long){1600000};
    mallocSym_719747_721799 = (x722910+(x722911));
    numeric_int_t* x722914 = (numeric_int_t*)malloc(1600000 * sizeof(numeric_int_t));
    memset(x722914, 0, 1600000 * sizeof(numeric_int_t));
    long x722915 = mallocSym_719748_721778;
    mallocSym_719748_721778 = (x722915+(x722911));
    numeric_int_t x712325 = 0;
    for(; x712325 < 1600000 ; x712325 += 1) {
      
      *(x722914 + x712325) = 0;
    };
    /* VAR */ numeric_int_t x719754 = 0;
    numeric_int_t x712340 = 0;
    for(; x712340 < x718734 ; x712340 += 1) {
      
      struct LINEITEMRecord* x712341 = &(x721812[x712340]);
      numeric_int_t x712343 = (x712341->L_PARTKEY)%(1600000);
      numeric_int_t x712344 = x722914[x712343];
      *(x722914 + x712343) = (x712344+(1));
      numeric_int_t x712347 = x719754;
      x719754 = (x712347+(1));
    };
    numeric_int_t x712357 = 0;
    for(; x712357 < 1600000 ; x712357 += 1) {
      
      numeric_int_t x712358 = x722914[x712357];
      struct LINEITEMRecord* x722957 = (struct LINEITEMRecord*)malloc(x712358 * sizeof(struct LINEITEMRecord));
      memset(x722957, 0, x712358 * sizeof(struct LINEITEMRecord));
      long x722958 = mallocSym_712359_721776;
      mallocSym_712359_721776 = (x722958+(((long){x712358})));
      *(x722909 + x712357) = x722957;
      *(x722914 + x712357) = 0;
    };
    x719754 = 0;
    numeric_int_t x712381 = 0;
    for(; x712381 < x718734 ; x712381 += 1) {
      
      struct LINEITEMRecord* x712382 = &(x721812[x712381]);
      numeric_int_t x712384 = (x712382->L_PARTKEY)%(1600000);
      numeric_int_t x712385 = x722914[x712384];
      struct LINEITEMRecord* x712386 = x722909[x712384];
      struct LINEITEMRecord x712387 = *x712382;
      *(x712386 + x712385) = x712387;
      struct LINEITEMRecord* x712389 = &(x712386[x712385]);
      x712382 = x712389;
      numeric_int_t x712391 = x722914[x712384];
      *(x722914 + x712384) = (x712391+(1));
      numeric_int_t x712394 = x719754;
      x719754 = (x712394+(1));
    };
    /* VAR */ numeric_int_t x719821 = 0;
    struct LINEITEMRecord_PARTRecord* x722999 = (struct LINEITEMRecord_PARTRecord*)malloc(48000000 * sizeof(struct LINEITEMRecord_PARTRecord));
    memset(x722999, 0, 48000000 * sizeof(struct LINEITEMRecord_PARTRecord));
    long x723000 = mallocSym_719822_721794;
    mallocSym_719822_721794 = (x723000+(((long){48000000})));
    /* VAR */ numeric_int_t x719823 = 0;
    while(1) {
      
      numeric_int_t x700372 = x719823;
      if (!((x700372<(48000000)))) break; 
      
      numeric_int_t x700374 = x719823;
      struct LINEITEMRecord_PARTRecord* x723009 = (struct LINEITEMRecord_PARTRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord));
      memset(x723009, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord));
      long x723010 = mallocSym_702882_721798;
      mallocSym_702882_721798 = (x723010+(x722890));
      x723009->L_PARTKEY = 0; x723009->L_QUANTITY = 0.0; x723009->L_EXTENDEDPRICE = 0.0; x723009->P_PARTKEY = 0; x723009->P_BRAND = 0; x723009->P_CONTAINER = 0;
      struct LINEITEMRecord_PARTRecord x702331 = *x723009;
      *(x722999 + x700374) = x702331;
      struct LINEITEMRecord_PARTRecord* x702333 = &(x722999[x700374]);
      x723009 = x702333;
      numeric_int_t x700377 = x719823;
      x719823 = (x700377+(1));
    };
    struct timeval x719838 = (struct timeval){0};
    /* VAR */ struct timeval x719839 = x719838;
    struct timeval x719840 = x719839;
    /* VAR */ struct timeval x719841 = x719838;
    struct timeval x719842 = x719841;
    /* VAR */ struct timeval x719843 = x719838;
    struct timeval x719844 = x719843;
    struct timeval* x719845 = &x719842;
    gettimeofday(x719845, NULL);
    /* VAR */ numeric_int_t x719847 = -1;
    numeric_int_t x719848 = x704243->len;
    numeric_int_t x712434 = 0;
    for(; x712434 < x719848 ; x712434 += 1) {
      
      char* x712435 = g_array_index(x704243, char*, x712434);
      boolean_t x712436 = strcmp(x712435, "MED BAG");
      boolean_t x712437 = !(x712436);
      if(x712437) {
        x719847 = x712434;
        break;
      };
    };
    numeric_int_t x719864 = x719847;
    /* VAR */ numeric_int_t x719865 = -1;
    numeric_int_t x719866 = x704240->len;
    numeric_int_t x712453 = 0;
    for(; x712453 < x719866 ; x712453 += 1) {
      
      char* x712454 = g_array_index(x704240, char*, x712453);
      boolean_t x712455 = strcmp(x712454, "Brand#15");
      boolean_t x712456 = !(x712455);
      if(x712456) {
        x719865 = x712453;
        break;
      };
    };
    numeric_int_t x719882 = x719865;
    /* VAR */ numeric_int_t x719883 = 0;
    /* VAR */ boolean_t x719884 = 0;
    /* VAR */ numeric_int_t x719885 = 0;
    while(1) {
      
      numeric_int_t x719887 = x719883;
      if (!((x719887<(x718942)))) break; 
      
      numeric_int_t x697764 = x719883;
      struct PARTRecord* x696896 = &(x722040[x697764]);
      numeric_int_t x699700 = x696896->P_CONTAINER;
      /* VAR */ boolean_t ite716825 = 0;
      if((x699700==(x719864))) {
        ite716825 = ((x696896->P_BRAND)==(x719882));
      } else {
        
        ite716825 = 0;
      };
      boolean_t x715289 = ite716825;
      if(x715289) {
        numeric_int_t x696903 = x696896->P_PARTKEY;
        numeric_int_t x719903 = x696903%(1600000);
        numeric_int_t x719904 = x722914[x719903];
        struct LINEITEMRecord* x719905 = x722909[x719903];
        numeric_int_t x712521 = 0;
        for(; x712521 < x719904 ; x712521 += 1) {
          
          struct LINEITEMRecord* x712522 = &(x719905[x712521]);
          if(((x712522->L_PARTKEY)==(x696903))) {
            numeric_int_t x698858 = x712522->L_PARTKEY;
            if((x698858==(x696903))) {
              numeric_int_t x700418 = x719821;
              struct LINEITEMRecord_PARTRecord* x700419 = &(x722999[x700418]);
              x700419->L_PARTKEY = x698858;
              x700419->L_QUANTITY = (x712522->L_QUANTITY);
              x700419->L_EXTENDEDPRICE = (x712522->L_EXTENDEDPRICE);
              x700419->P_PARTKEY = x696903;
              x700419->P_BRAND = (x696896->P_BRAND);
              x700419->P_CONTAINER = x699700;
              numeric_int_t x700426 = x719821;
              x719821 = (x700426+(1));
              void* x703511 = (void*){(x700419->L_PARTKEY)};
              void* x703513 = g_hash_table_lookup(x719746, x703511);
              GList** x703514 = (GList**){x703513};
              GList** x703515 = NULL;
              /* VAR */ GList** ite715370 = 0;
              if((x703514==(x703515))) {
                GList** x715371 = malloc(8);
                GList* x715372 = NULL;
                pointer_assign(x715371, x715372);
                ite715370 = x715371;
              } else {
                
                ite715370 = x703514;
              };
              GList** x703520 = ite715370;
              GList* x703521 = *(x703520);
              GList* x703522 = g_list_prepend(x703521, ((void*){x700419}));
              pointer_assign(x703520, x703522);
              g_hash_table_insert(x719746, x703511, ((void*){x703520}));
            };
          };
        };
      };
      numeric_int_t x697804 = x719883;
      x719883 = (x697804+(1));
    };
    GList* x720071 = g_hash_table_get_keys(x719746);
    /* VAR */ GList* x720072 = x720071;
    numeric_int_t x720073 = g_hash_table_size(x719746);
    numeric_int_t x712703 = 0;
    for(; x712703 < x720073 ; x712703 += 1) {
      
      GList* x712704 = x720072;
      void* x712705 = g_list_nth_data(x712704, 0);
      GList* x712706 = x720072;
      GList* x712707 = g_list_next(x712706);
      x720072 = x712707;
      void* x712709 = g_hash_table_lookup(x719746, x712705);
      GList** x712710 = (GList**){x712709};
      /* VAR */ double x712716 = 0.0;
      GList* x712717 = *(x712710);
      /* VAR */ GList* x712718 = x712717;
      while(1) {
        
        GList* x704925 = x712718;
        GList* x704926 = NULL;
        if (!((x704925!=(x704926)))) break; 
        
        GList* x704928 = x712718;
        void* x704929 = g_list_nth_data(x704928, 0);
        double x704931 = x712716;
        x712716 = (x704931+((((struct LINEITEMRecord_PARTRecord*){x704929})->L_QUANTITY)));
        GList* x704935 = x712718;
        GList* x704936 = g_list_next(x704935);
        x712718 = x704936;
      };
      double x712733 = x712716;
      GList* x712734 = *(x712710);
      numeric_int_t x712735 = g_list_length(x712734);
      /* VAR */ double x712747 = 0.0;
      GList* x712748 = *(x712710);
      /* VAR */ GList* x712749 = x712748;
      while(1) {
        
        GList* x704956 = x712749;
        GList* x704957 = NULL;
        if (!((x704956!=(x704957)))) break; 
        
        GList* x704959 = x712749;
        void* x704960 = g_list_nth_data(x704959, 0);
        struct LINEITEMRecord_PARTRecord* x704961 = (struct LINEITEMRecord_PARTRecord*){x704960};
        double x704962 = x712747;
        /* VAR */ double ite715606 = 0;
        if(((x704961->L_QUANTITY)<((0.2*((x712733/(x712735))))))) {
          ite715606 = (x704962+((x704961->L_EXTENDEDPRICE)));
        } else {
          
          ite715606 = x704962;
        };
        double x704965 = ite715606;
        x712747 = x704965;
        GList* x704969 = x712749;
        GList* x704970 = g_list_next(x704969);
        x712749 = x704970;
      };
      double x712767 = x712747;
      double* x712769 = x722893->aggs;
      double x712770 = x712769[0];
      *x712769 = (x712770+((x712767/(7.0))));
    };
    if(0) {
      x719884 = 1;
    } else {
      
      double x697000 = ((double*) { x722893->aggs })[0];
      printf("%.6f\n", x697000);
      numeric_int_t x697872 = x719885;
      x719885 = (x697872+(1));
    };
    numeric_int_t x720241 = x719885;
    printf("(%d rows)\n", x720241);
    struct timeval* x720243 = &x719844;
    gettimeofday(x720243, NULL);
    struct timeval* x720245 = &x719840;
    struct timeval* x720246 = &x719844;
    struct timeval* x720247 = &x719842;
    long x720248 = timeval_subtract(x720245, x720246, x720247);
    printf("Generated code run in %ld milliseconds.\n", x720248);
  };
  /* VAR */ long mallocSum723434 = 0L;
  long x723435 = mallocSym_702228_721774;
  numeric_int_t x723436 = sizeof(char);
  long x723438 = x723435*(((long){x723436}));
  printf("722218 with type Byte: %ld\n", x723438);
  long x723440 = mallocSum723434;
  mallocSum723434 = (x723440+(x723438));
  long x723443 = mallocSym_702084_721775;
  numeric_int_t x723444 = sizeof(char);
  long x723446 = x723443*(((long){x723444}));
  printf("722011 with type Byte: %ld\n", x723446);
  long x723448 = mallocSum723434;
  mallocSum723434 = (x723448+(x723446));
  long x723451 = mallocSym_712359_721776;
  numeric_int_t x723452 = sizeof(struct LINEITEMRecord);
  long x723454 = x723451*(((long){x723452}));
  printf("722957 with type LINEITEMRecord: %ld\n", x723454);
  long x723456 = mallocSum723434;
  mallocSum723434 = (x723456+(x723454));
  long x723459 = mallocSym_702299_721777;
  numeric_int_t x723460 = sizeof(struct LINEITEMRecord);
  long x723462 = x723459*(((long){x723460}));
  printf("722948 with type LINEITEMRecord: %ld\n", x723462);
  long x723464 = mallocSum723434;
  mallocSum723434 = (x723464+(x723462));
  long x723467 = mallocSym_719748_721778;
  numeric_int_t x723468 = sizeof(numeric_int_t);
  long x723470 = x723467*(((long){x723468}));
  printf("722914 with type Int: %ld\n", x723470);
  long x723472 = mallocSum723434;
  mallocSum723434 = (x723472+(x723470));
  long x723475 = mallocSym_702154_721779;
  numeric_int_t x723476 = sizeof(char);
  long x723478 = x723475*(((long){x723476}));
  printf("722112 with type Byte: %ld\n", x723478);
  long x723480 = mallocSum723434;
  mallocSum723434 = (x723480+(x723478));
  long x723483 = mallocSym_702635_721780;
  numeric_int_t x723484 = sizeof(struct LINEITEMRecord);
  long x723486 = x723483*(((long){x723484}));
  printf("722019 with type LINEITEMRecord: %ld\n", x723486);
  long x723488 = mallocSum723434;
  mallocSum723434 = (x723488+(x723486));
  long x723491 = mallocSym_702271_721781;
  numeric_int_t x723492 = sizeof(double);
  long x723494 = x723491*(((long){x723492}));
  printf("722341 with type Double: %ld\n", x723494);
  long x723496 = mallocSum723434;
  mallocSum723434 = (x723496+(x723494));
  long x723499 = mallocSym_702324_721782;
  numeric_int_t x723500 = sizeof(struct LINEITEMRecord_PARTRecord);
  long x723502 = x723499*(((long){x723500}));
  printf("722452 with type LINEITEMRecord_PARTRecord: %ld\n", x723502);
  long x723504 = mallocSum723434;
  mallocSum723434 = (x723504+(x723502));
  long x723507 = mallocSym_702138_721783;
  numeric_int_t x723508 = sizeof(char);
  long x723510 = x723507*(((long){x723508}));
  printf("722088 with type Byte: %ld\n", x723510);
  long x723512 = mallocSum723434;
  mallocSum723434 = (x723512+(x723510));
  long x723515 = mallocSym_718738_721784;
  numeric_int_t x723516 = sizeof(struct LINEITEMRecord);
  long x723518 = x723515*(((long){x723516}));
  printf("721812 with type LINEITEMRecord: %ld\n", x723518);
  long x723520 = mallocSum723434;
  mallocSum723434 = (x723520+(x723518));
  long x723523 = mallocSym_702186_721785;
  numeric_int_t x723524 = sizeof(char);
  long x723526 = x723523*(((long){x723524}));
  printf("722160 with type Byte: %ld\n", x723526);
  long x723528 = mallocSum723434;
  mallocSum723434 = (x723528+(x723526));
  long x723531 = mallocSym_718946_721786;
  numeric_int_t x723532 = sizeof(struct PARTRecord);
  long x723534 = x723531*(((long){x723532}));
  printf("722040 with type PARTRecord: %ld\n", x723534);
  long x723536 = mallocSum723434;
  mallocSum723434 = (x723536+(x723534));
  long x723539 = mallocSym_702822_721787;
  numeric_int_t x723540 = sizeof(struct AGGRecord_String);
  long x723542 = x723539*(((long){x723540}));
  printf("722346 with type AGGRecord_String: %ld\n", x723542);
  long x723544 = mallocSum723434;
  mallocSum723434 = (x723544+(x723542));
  long x723547 = mallocSym_719734_721788;
  numeric_int_t x723548 = sizeof(struct AGGRecord_String);
  long x723550 = x723547*(((long){x723548}));
  printf("722893 with type AGGRecord_String: %ld\n", x723550);
  long x723552 = mallocSum723434;
  mallocSum723434 = (x723552+(x723550));
  long x723555 = mallocSym_702275_721789;
  numeric_int_t x723556 = sizeof(numeric_int_t);
  long x723558 = x723555*(((long){x723556}));
  printf("722367 with type Int: %ld\n", x723558);
  long x723560 = mallocSum723434;
  mallocSum723434 = (x723560+(x723558));
  long x723563 = mallocSym_702807_721790;
  numeric_int_t x723564 = sizeof(struct PARTRecord);
  long x723566 = x723563*(((long){x723564}));
  printf("722324 with type PARTRecord: %ld\n", x723566);
  long x723568 = mallocSum723434;
  mallocSum723434 = (x723568+(x723566));
  long x723571 = mallocSym_719733_721791;
  numeric_int_t x723572 = sizeof(double);
  long x723574 = x723571*(((long){x723572}));
  printf("722888 with type Double: %ld\n", x723574);
  long x723576 = mallocSum723434;
  mallocSum723434 = (x723576+(x723574));
  long x723579 = mallocSym_702170_721792;
  numeric_int_t x723580 = sizeof(char);
  long x723582 = x723579*(((long){x723580}));
  printf("722136 with type Byte: %ld\n", x723582);
  long x723584 = mallocSum723434;
  mallocSum723434 = (x723584+(x723582));
  long x723587 = mallocSym_702068_721793;
  numeric_int_t x723588 = sizeof(char);
  long x723590 = x723587*(((long){x723588}));
  printf("721987 with type Byte: %ld\n", x723590);
  long x723592 = mallocSum723434;
  mallocSum723434 = (x723592+(x723590));
  long x723595 = mallocSym_719822_721794;
  numeric_int_t x723596 = sizeof(struct LINEITEMRecord_PARTRecord);
  long x723598 = x723595*(((long){x723596}));
  printf("722999 with type LINEITEMRecord_PARTRecord: %ld\n", x723598);
  long x723600 = mallocSum723434;
  mallocSum723434 = (x723600+(x723598));
  long x723603 = mallocSym_702274_721795;
  numeric_int_t x723604 = sizeof(struct LINEITEMRecord*);
  long x723606 = x723603*(((long){x723604}));
  printf("722362 with type Pointer[LINEITEMRecord]: %ld\n", x723606);
  long x723608 = mallocSum723434;
  mallocSum723434 = (x723608+(x723606));
  long x723611 = mallocSym_702207_721796;
  numeric_int_t x723612 = sizeof(char);
  long x723614 = x723611*(((long){x723612}));
  printf("722189 with type Byte: %ld\n", x723614);
  long x723616 = mallocSum723434;
  mallocSum723434 = (x723616+(x723614));
  long x723619 = mallocSym_702052_721797;
  numeric_int_t x723620 = sizeof(char);
  long x723622 = x723619*(((long){x723620}));
  printf("721963 with type Byte: %ld\n", x723622);
  long x723624 = mallocSum723434;
  mallocSum723434 = (x723624+(x723622));
  long x723627 = mallocSym_702882_721798;
  numeric_int_t x723628 = sizeof(struct LINEITEMRecord_PARTRecord);
  long x723630 = x723627*(((long){x723628}));
  printf("723009 with type LINEITEMRecord_PARTRecord: %ld\n", x723630);
  long x723632 = mallocSum723434;
  mallocSum723434 = (x723632+(x723630));
  long x723635 = mallocSym_719747_721799;
  numeric_int_t x723636 = sizeof(struct LINEITEMRecord*);
  long x723638 = x723635*(((long){x723636}));
  printf("722909 with type Pointer[LINEITEMRecord]: %ld\n", x723638);
  long x723640 = mallocSum723434;
  mallocSum723434 = (x723640+(x723638));
  long x723643 = mallocSum723434;
  printf("total: %ld\n", x723643);
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x719737(void* x703379) {
  numeric_int_t x703380 = g_direct_hash(x703379);
  return x703380; 
}

numeric_int_t x719740(void* x703382, void* x703383) {
  numeric_int_t x703384 = g_direct_equal(x703382, x703383);
  return x703384; 
}
