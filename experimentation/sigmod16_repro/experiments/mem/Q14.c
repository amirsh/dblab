#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct LINEITEMRecord;
struct PARTRecord;
struct LINEITEMRecord {
  numeric_int_t L_PARTKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  numeric_int_t L_SHIPDATE;
};

struct PARTRecord {
  numeric_int_t P_PARTKEY;
  numeric_int_t P_TYPE;
};


boolean_t x610049(char** x597703, char** x597704);

int main(int argc, char** argv) {
  /* VAR */ long mallocSym_595901_611976 = 0L;
  /* VAR */ long mallocSym_595974_611977 = 0L;
  /* VAR */ long mallocSym_609690_611978 = 0L;
  /* VAR */ long mallocSym_596006_611979 = 0L;
  /* VAR */ long mallocSym_603356_611980 = 0L;
  /* VAR */ long mallocSym_596139_611981 = 0L;
  /* VAR */ long mallocSym_596082_611982 = 0L;
  /* VAR */ long mallocSym_609322_611983 = 0L;
  /* VAR */ long mallocSym_610043_611984 = 0L;
  /* VAR */ long mallocSym_596048_611985 = 0L;
  /* VAR */ long mallocSym_610185_611986 = 0L;
  /* VAR */ long mallocSym_595958_611987 = 0L;
  /* VAR */ long mallocSym_609689_611988 = 0L;
  /* VAR */ long mallocSym_596027_611989 = 0L;
  /* VAR */ long mallocSym_596431_611990 = 0L;
  /* VAR */ long mallocSym_610186_611991 = 0L;
  /* VAR */ long mallocSym_595885_611992 = 0L;
  /* VAR */ long mallocSym_595990_611993 = 0L;
  /* VAR */ long mallocSym_609111_611994 = 0L;
  /* VAR */ long mallocSym_596594_611995 = 0L;
  /* VAR */ long mallocSym_595869_611996 = 0L;
  /* VAR */ numeric_int_t x592877 = 0;
  numeric_int_t x597306 = sizeof(char*);
  GArray* x597307 = g_array_new(0, 1, x597306);
  numeric_int_t x597308 = sizeof(char*);
  GArray* x597309 = g_array_new(0, 1, x597308);
  FILE* x609105 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x609106 = 0;
  numeric_int_t x609107 = x609106;
  numeric_int_t* x609108 = &x609107;
  numeric_int_t x609109 = fscanf(x609105, "%d", x609108);
  pclose(x609105);
  struct LINEITEMRecord* x612008 = (struct LINEITEMRecord*)malloc(x609107 * sizeof(struct LINEITEMRecord));
  memset(x612008, 0, x609107 * sizeof(struct LINEITEMRecord));
  long x612009 = mallocSym_609111_611994;
  mallocSym_609111_611994 = (x612009+(((long){x609107})));
  numeric_int_t x609112 = O_RDONLY;
  numeric_int_t x609113 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x609112);
  struct stat x609114 = (struct stat){0};
  /* VAR */ struct stat x609115 = x609114;
  struct stat x609116 = x609115;
  struct stat* x609117 = &x609116;
  numeric_int_t x609118 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x609117);
  numeric_int_t x609120 = PROT_READ;
  numeric_int_t x609121 = MAP_PRIVATE;
  char* x609122 = mmap(NULL, (x609117->st_size), x609120, x609121, x609113, 0);
  /* VAR */ numeric_int_t x609123 = 0;
  while(1) {
    
    numeric_int_t x588498 = x609123;
    /* VAR */ boolean_t ite606183 = 0;
    if((x588498<(x609107))) {
      char x609129 = *x609122;
      ite606183 = (x609129!=('\0'));
    } else {
      
      ite606183 = 0;
    };
    boolean_t x604911 = ite606183;
    if (!(x604911)) break; 
    
    /* VAR */ numeric_int_t x594737 = 0;
    numeric_int_t x594738 = x594737;
    numeric_int_t* x594739 = &x594738;
    char* x594740 = strntoi_unchecked(x609122, x594739);
    x609122 = x594740;
    /* VAR */ numeric_int_t x594742 = 0;
    numeric_int_t x594743 = x594742;
    numeric_int_t* x594744 = &x594743;
    char* x594745 = strntoi_unchecked(x609122, x594744);
    x609122 = x594745;
    /* VAR */ numeric_int_t x594747 = 0;
    numeric_int_t x594748 = x594747;
    numeric_int_t* x594749 = &x594748;
    char* x594750 = strntoi_unchecked(x609122, x594749);
    x609122 = x594750;
    /* VAR */ numeric_int_t x594752 = 0;
    numeric_int_t x594753 = x594752;
    numeric_int_t* x594754 = &x594753;
    char* x594755 = strntoi_unchecked(x609122, x594754);
    x609122 = x594755;
    /* VAR */ double x594757 = 0.0;
    double x594758 = x594757;
    double* x594759 = &x594758;
    char* x594760 = strntod_unchecked(x609122, x594759);
    x609122 = x594760;
    /* VAR */ double x594762 = 0.0;
    double x594763 = x594762;
    double* x594764 = &x594763;
    char* x594765 = strntod_unchecked(x609122, x594764);
    x609122 = x594765;
    /* VAR */ double x594767 = 0.0;
    double x594768 = x594767;
    double* x594769 = &x594768;
    char* x594770 = strntod_unchecked(x609122, x594769);
    x609122 = x594770;
    /* VAR */ double x594772 = 0.0;
    double x594773 = x594772;
    double* x594774 = &x594773;
    char* x594775 = strntod_unchecked(x609122, x594774);
    x609122 = x594775;
    char x594777 = *x609122;
    /* VAR */ char x594778 = x594777;
    x609122 += 1;
    x609122 += 1;
    char x594782 = *x609122;
    /* VAR */ char x594783 = x594782;
    x609122 += 1;
    x609122 += 1;
    /* VAR */ numeric_int_t x594787 = 0;
    numeric_int_t x594788 = x594787;
    numeric_int_t* x594789 = &x594788;
    char* x594790 = strntoi_unchecked(x609122, x594789);
    x609122 = x594790;
    /* VAR */ numeric_int_t x594792 = 0;
    numeric_int_t x594793 = x594792;
    numeric_int_t* x594794 = &x594793;
    char* x594795 = strntoi_unchecked(x609122, x594794);
    x609122 = x594795;
    /* VAR */ numeric_int_t x594797 = 0;
    numeric_int_t x594798 = x594797;
    numeric_int_t* x594799 = &x594798;
    char* x594800 = strntoi_unchecked(x609122, x594799);
    x609122 = x594800;
    /* VAR */ numeric_int_t x594806 = 0;
    numeric_int_t x594807 = x594806;
    numeric_int_t* x594808 = &x594807;
    char* x594809 = strntoi_unchecked(x609122, x594808);
    x609122 = x594809;
    /* VAR */ numeric_int_t x594811 = 0;
    numeric_int_t x594812 = x594811;
    numeric_int_t* x594813 = &x594812;
    char* x594814 = strntoi_unchecked(x609122, x594813);
    x609122 = x594814;
    /* VAR */ numeric_int_t x594816 = 0;
    numeric_int_t x594817 = x594816;
    numeric_int_t* x594818 = &x594817;
    char* x594819 = strntoi_unchecked(x609122, x594818);
    x609122 = x594819;
    /* VAR */ numeric_int_t x594825 = 0;
    numeric_int_t x594826 = x594825;
    numeric_int_t* x594827 = &x594826;
    char* x594828 = strntoi_unchecked(x609122, x594827);
    x609122 = x594828;
    /* VAR */ numeric_int_t x594830 = 0;
    numeric_int_t x594831 = x594830;
    numeric_int_t* x594832 = &x594831;
    char* x594833 = strntoi_unchecked(x609122, x594832);
    x609122 = x594833;
    /* VAR */ numeric_int_t x594835 = 0;
    numeric_int_t x594836 = x594835;
    numeric_int_t* x594837 = &x594836;
    char* x594838 = strntoi_unchecked(x609122, x594837);
    x609122 = x594838;
    /* VAR */ char* x594844 = x609122;
    while(1) {
      
      char x594845 = *x609122;
      /* VAR */ boolean_t ite606303 = 0;
      if((x594845!=('|'))) {
        char x609248 = *x609122;
        ite606303 = (x609248!=('\n'));
      } else {
        
        ite606303 = 0;
      };
      boolean_t x605024 = ite606303;
      if (!(x605024)) break; 
      
      x609122 += 1;
    };
    char* x594852 = x594844;
    numeric_int_t x594853 = x609122 - x594852;
    numeric_int_t x594854 = x594853+(1);
    char* x612159 = (char*)malloc(x594854 * sizeof(char));
    memset(x612159, 0, x594854 * sizeof(char));
    long x612160 = mallocSym_595869_611996;
    mallocSym_595869_611996 = (x612160+(((long){x594854})));
    char* x594857 = x594844;
    char* x594858 = strncpy(x612159, x594857, x594853);
    x609122 += 1;
    /* VAR */ char* x594860 = x609122;
    while(1) {
      
      char x594861 = *x609122;
      /* VAR */ boolean_t ite606324 = 0;
      if((x594861!=('|'))) {
        char x609268 = *x609122;
        ite606324 = (x609268!=('\n'));
      } else {
        
        ite606324 = 0;
      };
      boolean_t x605038 = ite606324;
      if (!(x605038)) break; 
      
      x609122 += 1;
    };
    char* x594868 = x594860;
    numeric_int_t x594869 = x609122 - x594868;
    numeric_int_t x594870 = x594869+(1);
    char* x612183 = (char*)malloc(x594870 * sizeof(char));
    memset(x612183, 0, x594870 * sizeof(char));
    long x612184 = mallocSym_595885_611992;
    mallocSym_595885_611992 = (x612184+(((long){x594870})));
    char* x594873 = x594860;
    char* x594874 = strncpy(x612183, x594873, x594869);
    x609122 += 1;
    /* VAR */ char* x594876 = x609122;
    while(1) {
      
      char x594877 = *x609122;
      /* VAR */ boolean_t ite606345 = 0;
      if((x594877!=('|'))) {
        char x609288 = *x609122;
        ite606345 = (x609288!=('\n'));
      } else {
        
        ite606345 = 0;
      };
      boolean_t x605052 = ite606345;
      if (!(x605052)) break; 
      
      x609122 += 1;
    };
    char* x594884 = x594876;
    numeric_int_t x594885 = x609122 - x594884;
    numeric_int_t x594886 = x594885+(1);
    char* x612207 = (char*)malloc(x594886 * sizeof(char));
    memset(x612207, 0, x594886 * sizeof(char));
    long x612208 = mallocSym_595901_611976;
    mallocSym_595901_611976 = (x612208+(((long){x594886})));
    char* x594889 = x594876;
    char* x594890 = strncpy(x612207, x594889, x594885);
    x609122 += 1;
    struct LINEITEMRecord* x612215 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x612215, 0, 1 * sizeof(struct LINEITEMRecord));
    long x612216 = mallocSym_596431_611990;
    mallocSym_596431_611990 = (x612216+(((long){1})));
    x612215->L_PARTKEY = x594743; x612215->L_EXTENDEDPRICE = x594763; x612215->L_DISCOUNT = x594768; x612215->L_SHIPDATE = (((x594788*(10000))+((x594793*(100))))+(x594798));
    numeric_int_t x588519 = x609123;
    if((x612215==(NULL))) {
      *(x612008 + x588519) = (const struct LINEITEMRecord){0};
    } else {
      
      struct LINEITEMRecord x595910 = *x612215;
      *(x612008 + x588519) = x595910;
      struct LINEITEMRecord* x595912 = &(x612008[x588519]);
      x612215 = x595912;
    };
    numeric_int_t x588521 = x609123;
    x609123 = (x588521+(1));
  };
  FILE* x609316 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ numeric_int_t x609317 = 0;
  numeric_int_t x609318 = x609317;
  numeric_int_t* x609319 = &x609318;
  numeric_int_t x609320 = fscanf(x609316, "%d", x609319);
  pclose(x609316);
  struct PARTRecord* x612239 = (struct PARTRecord*)malloc(x609318 * sizeof(struct PARTRecord));
  memset(x612239, 0, x609318 * sizeof(struct PARTRecord));
  long x612240 = mallocSym_609322_611983;
  mallocSym_609322_611983 = (x612240+(((long){x609318})));
  numeric_int_t x609323 = O_RDONLY;
  numeric_int_t x609324 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x609323);
  /* VAR */ struct stat x609325 = x609114;
  struct stat x609326 = x609325;
  struct stat* x609327 = &x609326;
  numeric_int_t x609328 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x609327);
  numeric_int_t x609330 = PROT_READ;
  numeric_int_t x609331 = MAP_PRIVATE;
  char* x609332 = mmap(NULL, (x609327->st_size), x609330, x609331, x609324, 0);
  /* VAR */ numeric_int_t x609333 = 0;
  while(1) {
    
    numeric_int_t x588529 = x609333;
    /* VAR */ boolean_t ite606397 = 0;
    if((x588529<(x609318))) {
      char x609339 = *x609332;
      ite606397 = (x609339!=('\0'));
    } else {
      
      ite606397 = 0;
    };
    boolean_t x605097 = ite606397;
    if (!(x605097)) break; 
    
    /* VAR */ numeric_int_t x594922 = 0;
    numeric_int_t x594923 = x594922;
    numeric_int_t* x594924 = &x594923;
    char* x594925 = strntoi_unchecked(x609332, x594924);
    x609332 = x594925;
    /* VAR */ char* x594927 = x609332;
    while(1) {
      
      char x594928 = *x609332;
      /* VAR */ boolean_t ite606415 = 0;
      if((x594928!=('|'))) {
        char x609356 = *x609332;
        ite606415 = (x609356!=('\n'));
      } else {
        
        ite606415 = 0;
      };
      boolean_t x605108 = ite606415;
      if (!(x605108)) break; 
      
      x609332 += 1;
    };
    char* x594935 = x594927;
    numeric_int_t x594936 = x609332 - x594935;
    numeric_int_t x594937 = x594936+(1);
    char* x612287 = (char*)malloc(x594937 * sizeof(char));
    memset(x612287, 0, x594937 * sizeof(char));
    long x612288 = mallocSym_595958_611987;
    mallocSym_595958_611987 = (x612288+(((long){x594937})));
    char* x594940 = x594927;
    char* x594941 = strncpy(x612287, x594940, x594936);
    x609332 += 1;
    /* VAR */ char* x594943 = x609332;
    while(1) {
      
      char x594944 = *x609332;
      /* VAR */ boolean_t ite606436 = 0;
      if((x594944!=('|'))) {
        char x609376 = *x609332;
        ite606436 = (x609376!=('\n'));
      } else {
        
        ite606436 = 0;
      };
      boolean_t x605122 = ite606436;
      if (!(x605122)) break; 
      
      x609332 += 1;
    };
    char* x594951 = x594943;
    numeric_int_t x594952 = x609332 - x594951;
    numeric_int_t x594953 = x594952+(1);
    char* x612311 = (char*)malloc(x594953 * sizeof(char));
    memset(x612311, 0, x594953 * sizeof(char));
    long x612312 = mallocSym_595974_611977;
    mallocSym_595974_611977 = (x612312+(((long){x594953})));
    char* x594956 = x594943;
    char* x594957 = strncpy(x612311, x594956, x594952);
    x609332 += 1;
    /* VAR */ char* x594959 = x609332;
    while(1) {
      
      char x594960 = *x609332;
      /* VAR */ boolean_t ite606457 = 0;
      if((x594960!=('|'))) {
        char x609396 = *x609332;
        ite606457 = (x609396!=('\n'));
      } else {
        
        ite606457 = 0;
      };
      boolean_t x605136 = ite606457;
      if (!(x605136)) break; 
      
      x609332 += 1;
    };
    char* x594967 = x594959;
    numeric_int_t x594968 = x609332 - x594967;
    numeric_int_t x594969 = x594968+(1);
    char* x612335 = (char*)malloc(x594969 * sizeof(char));
    memset(x612335, 0, x594969 * sizeof(char));
    long x612336 = mallocSym_595990_611993;
    mallocSym_595990_611993 = (x612336+(((long){x594969})));
    char* x594972 = x594959;
    char* x594973 = strncpy(x612335, x594972, x594968);
    x609332 += 1;
    /* VAR */ char* x594975 = x609332;
    while(1) {
      
      char x594976 = *x609332;
      /* VAR */ boolean_t ite606478 = 0;
      if((x594976!=('|'))) {
        char x609416 = *x609332;
        ite606478 = (x609416!=('\n'));
      } else {
        
        ite606478 = 0;
      };
      boolean_t x605150 = ite606478;
      if (!(x605150)) break; 
      
      x609332 += 1;
    };
    char* x594983 = x594975;
    numeric_int_t x594984 = x609332 - x594983;
    numeric_int_t x594985 = x594984+(1);
    char* x612359 = (char*)malloc(x594985 * sizeof(char));
    memset(x612359, 0, x594985 * sizeof(char));
    long x612360 = mallocSym_596006_611979;
    mallocSym_596006_611979 = (x612360+(((long){x594985})));
    char* x594988 = x594975;
    char* x594989 = strncpy(x612359, x594988, x594984);
    x609332 += 1;
    /* VAR */ numeric_int_t x594991 = 0;
    numeric_int_t x594992 = x594991;
    numeric_int_t* x594993 = &x594992;
    char* x594994 = strntoi_unchecked(x609332, x594993);
    x609332 = x594994;
    /* VAR */ char* x594996 = x609332;
    while(1) {
      
      char x594997 = *x609332;
      /* VAR */ boolean_t ite606504 = 0;
      if((x594997!=('|'))) {
        char x609441 = *x609332;
        ite606504 = (x609441!=('\n'));
      } else {
        
        ite606504 = 0;
      };
      boolean_t x605169 = ite606504;
      if (!(x605169)) break; 
      
      x609332 += 1;
    };
    char* x595004 = x594996;
    numeric_int_t x595005 = x609332 - x595004;
    numeric_int_t x595006 = x595005+(1);
    char* x612388 = (char*)malloc(x595006 * sizeof(char));
    memset(x612388, 0, x595006 * sizeof(char));
    long x612389 = mallocSym_596027_611989;
    mallocSym_596027_611989 = (x612389+(((long){x595006})));
    char* x595009 = x594996;
    char* x595010 = strncpy(x612388, x595009, x595005);
    x609332 += 1;
    /* VAR */ double x595012 = 0.0;
    double x595013 = x595012;
    double* x595014 = &x595013;
    char* x595015 = strntod_unchecked(x609332, x595014);
    x609332 = x595015;
    /* VAR */ char* x595017 = x609332;
    while(1) {
      
      char x595018 = *x609332;
      /* VAR */ boolean_t ite606530 = 0;
      if((x595018!=('|'))) {
        char x609466 = *x609332;
        ite606530 = (x609466!=('\n'));
      } else {
        
        ite606530 = 0;
      };
      boolean_t x605188 = ite606530;
      if (!(x605188)) break; 
      
      x609332 += 1;
    };
    char* x595025 = x595017;
    numeric_int_t x595026 = x609332 - x595025;
    numeric_int_t x595027 = x595026+(1);
    char* x612417 = (char*)malloc(x595027 * sizeof(char));
    memset(x612417, 0, x595027 * sizeof(char));
    long x612418 = mallocSym_596048_611985;
    mallocSym_596048_611985 = (x612418+(((long){x595027})));
    char* x595030 = x595017;
    char* x595031 = strncpy(x612417, x595030, x595026);
    x609332 += 1;
    void* x597640 = &(x612359);
    GArray* x597641 = g_array_append_vals(x597309, x597640, 1);
    numeric_int_t x592931 = x592877;
    if((x592931>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "P_TYPE", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "P_TYPE");
    };
    /* VAR */ numeric_int_t x597647 = -1;
    numeric_int_t x597648 = x597307->len;
    numeric_int_t x603144 = 0;
    for(; x603144 < x597648 ; x603144 += 1) {
      
      char* x603145 = g_array_index(x597307, char*, x603144);
      boolean_t x603146 = strcmp(x603145, x612359);
      boolean_t x603147 = !(x603146);
      if(x603147) {
        x597647 = x603144;
        break;
      };
    };
    numeric_int_t x597658 = x597647;
    boolean_t x592937 = !((x597658!=(-1)));
    if(x592937) {
      numeric_int_t x592938 = x592877;
      x592877 = (x592938+(1));
      void* x597665 = &(x612359);
      GArray* x597666 = g_array_append_vals(x597307, x597665, 1);
    };
    /* VAR */ numeric_int_t x597667 = -1;
    numeric_int_t x597668 = x597307->len;
    numeric_int_t x603171 = 0;
    for(; x603171 < x597668 ; x603171 += 1) {
      
      char* x603172 = g_array_index(x597307, char*, x603171);
      boolean_t x603173 = strcmp(x603172, x612359);
      boolean_t x603174 = !(x603173);
      if(x603174) {
        x597667 = x603171;
        break;
      };
    };
    numeric_int_t x597678 = x597667;
    struct PARTRecord* x612476 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x612476, 0, 1 * sizeof(struct PARTRecord));
    long x612477 = mallocSym_596594_611995;
    mallocSym_596594_611995 = (x612477+(((long){1})));
    x612476->P_PARTKEY = x594923; x612476->P_TYPE = x597678;
    numeric_int_t x588543 = x609333;
    if((x612476==(NULL))) {
      *(x612239 + x588543) = (const struct PARTRecord){0};
    } else {
      
      struct PARTRecord x596071 = *x612476;
      *(x612239 + x588543) = x596071;
      struct PARTRecord* x596073 = &(x612239[x588543]);
      x612476 = x596073;
    };
    numeric_int_t x588545 = x609333;
    x609333 = (x588545+(1));
  };
  numeric_int_t x588550 = 0;
  for(; x588550 < 1 ; x588550 += 1) {
    
    double* x613011 = (double*)malloc(3 * sizeof(double));
    memset(x613011, 0, 3 * sizeof(double));
    long x613012 = mallocSym_610043_611984;
    mallocSym_610043_611984 = (x613012+(((long){3})));
    g_array_sort(x597307, x610049);
    /* VAR */ numeric_int_t x610057 = 0;
    numeric_int_t x603217 = 0;
    for(; x603217 < x609107 ; x603217 += 1) {
      
      numeric_int_t x603218 = x610057;
      x610057 = (x603218+(1));
    };
    /* VAR */ numeric_int_t x610067 = 0;
    numeric_int_t x603228 = 0;
    for(; x603228 < x609107 ; x603228 += 1) {
      
      numeric_int_t x603229 = x610067;
      x610067 = (x603229+(1));
    };
    /* VAR */ numeric_int_t x610077 = 0;
    numeric_int_t x603262 = 0;
    for(; x603262 < x609318 ; x603262 += 1) {
      
      struct PARTRecord* x603263 = &(x612239[x603262]);
      numeric_int_t x603264 = x610077;
      char* x603265 = g_array_index(x597309, char*, x603264);
      /* VAR */ numeric_int_t x603266 = -1;
      numeric_int_t x603267 = x597307->len;
      numeric_int_t x603249 = 0;
      for(; x603249 < x603267 ; x603249 += 1) {
        
        char* x603250 = g_array_index(x597307, char*, x603249);
        boolean_t x603251 = strcmp(x603250, x603265);
        boolean_t x603252 = !(x603251);
        if(x603252) {
          x603266 = x603249;
          break;
        };
      };
      numeric_int_t x603283 = x603266;
      x603263->P_TYPE = x603283;
      numeric_int_t x603285 = x610077;
      x610077 = (x603285+(1));
    };
    /* VAR */ numeric_int_t x610131 = 0;
    numeric_int_t x603318 = 0;
    for(; x603318 < x609318 ; x603318 += 1) {
      
      struct PARTRecord* x603319 = &(x612239[x603318]);
      numeric_int_t x603320 = x610131;
      char* x603321 = g_array_index(x597309, char*, x603320);
      /* VAR */ numeric_int_t x603322 = -1;
      numeric_int_t x603323 = x597307->len;
      numeric_int_t x603305 = 0;
      for(; x603305 < x603323 ; x603305 += 1) {
        
        char* x603306 = g_array_index(x597307, char*, x603305);
        boolean_t x603307 = strcmp(x603306, x603321);
        boolean_t x603308 = !(x603307);
        if(x603308) {
          x603322 = x603305;
          break;
        };
      };
      numeric_int_t x603339 = x603322;
      x603319->P_TYPE = x603339;
      numeric_int_t x603341 = x610131;
      x610131 = (x603341+(1));
    };
    struct LINEITEMRecord** x613157 = (struct LINEITEMRecord**)malloc(96 * sizeof(struct LINEITEMRecord*));
    memset(x613157, 0, 96 * sizeof(struct LINEITEMRecord*));
    long x613158 = mallocSym_610185_611986;
    long x613159 = (long){96};
    mallocSym_610185_611986 = (x613158+(x613159));
    numeric_int_t* x613162 = (numeric_int_t*)malloc(96 * sizeof(numeric_int_t));
    memset(x613162, 0, 96 * sizeof(numeric_int_t));
    long x613163 = mallocSym_610186_611991;
    mallocSym_610186_611991 = (x613163+(x613159));
    numeric_int_t x603353 = 0;
    for(; x603353 < 96 ; x603353 += 1) {
      
      numeric_int_t x603355 = (x609107/(96))*(4);
      struct LINEITEMRecord* x613179 = (struct LINEITEMRecord*)malloc(x603355 * sizeof(struct LINEITEMRecord));
      memset(x613179, 0, x603355 * sizeof(struct LINEITEMRecord));
      long x613180 = mallocSym_603356_611980;
      mallocSym_603356_611980 = (x613180+(((long){x603355})));
      *(x613157 + x603353) = x613179;
    };
    /* VAR */ numeric_int_t x610198 = 0;
    numeric_int_t x603385 = 0;
    for(; x603385 < x609107 ; x603385 += 1) {
      
      struct LINEITEMRecord* x603386 = &(x612008[x603385]);
      numeric_int_t x603388 = (x603386->L_SHIPDATE)/(100);
      numeric_int_t x603394 = (((x603388/(100))-(1992))*(12))+(((x603388%(100))-(1)));
      numeric_int_t x603395 = x613162[x603394];
      struct LINEITEMRecord* x603396 = x613157[x603394];
      if((x603386==(NULL))) {
        *(x603396 + x603395) = (const struct LINEITEMRecord){0};
      } else {
        
        struct LINEITEMRecord x596159 = *x603386;
        *(x603396 + x603395) = x596159;
        struct LINEITEMRecord* x596161 = &(x603396[x603395]);
        x603386 = x596161;
      };
      *(x613162 + x603394) = (x603395+(1));
      numeric_int_t x603406 = x610198;
      x610198 = (x603406+(1));
    };
    struct timeval x610248 = (struct timeval){0};
    /* VAR */ struct timeval x610249 = x610248;
    struct timeval x610250 = x610249;
    /* VAR */ struct timeval x610251 = x610248;
    struct timeval x610252 = x610251;
    /* VAR */ struct timeval x610253 = x610248;
    struct timeval x610254 = x610253;
    struct timeval* x610255 = &x610252;
    gettimeofday(x610255, NULL);
    /* VAR */ numeric_int_t x610262 = -1;
    numeric_int_t x610263 = x597307->len;
    numeric_int_t x603438 = 0;
    for(; x603438 < x610263 ; x603438 += 1) {
      
      char* x603439 = g_array_index(x597307, char*, x603438);
      numeric_int_t x603440 = strlen("PROMO");
      numeric_int_t x603441 = strncmp(x603439, "PROMO", x603440);
      /* VAR */ boolean_t ite607367 = 0;
      if((x603441==(0))) {
        numeric_int_t x610288 = x610262;
        ite607367 = (x610288==(-1));
      } else {
        
        ite607367 = 0;
      };
      boolean_t x605949 = ite607367;
      if(x605949) {
        x610262 = x603438;
        break;
      };
    };
    numeric_int_t x610297 = x610262;
    /* VAR */ numeric_int_t x610303 = -1;
    numeric_int_t x610304 = x597307->len;
    numeric_int_t x603466 = 0;
    for(; x603466 < x610304 ; x603466 += 1) {
      
      char* x603467 = g_array_index(x597307, char*, x603466);
      numeric_int_t x603468 = strlen("PROMO");
      numeric_int_t x603469 = strncmp(x603467, "PROMO", x603468);
      if((x603469==(0))) {
        x610303 = x603466;
      };
    };
    numeric_int_t x610320 = x610303;
    /* VAR */ numeric_int_t x610321 = 0;
    numeric_int_t x603548 = 26;
    for(; x603548 < 28 ; x603548 += 1) {
      
      numeric_int_t x603549 = x613162[x603548];
      struct LINEITEMRecord* x603550 = x613157[x603548];
      numeric_int_t x603514 = 0;
      for(; x603514 < x603549 ; x603514 += 1) {
        
        struct LINEITEMRecord* x603515 = &(x603550[x603514]);
        numeric_int_t x603516 = x603515->L_SHIPDATE;
        /* VAR */ boolean_t ite607567 = 0;
        if((x603516>=(19940301))) {
          ite607567 = (x603516<(19940401));
        } else {
          
          ite607567 = 0;
        };
        boolean_t x606106 = ite607567;
        if(x606106) {
          numeric_int_t x588644 = x603515->L_PARTKEY;
          struct PARTRecord* x592731 = &(x612239[(x588644-(1))]);
          if(((x592731->P_PARTKEY)==(x588644))) {
            if(((x592731->P_PARTKEY)==(x588644))) {
              numeric_int_t x593038 = x592731->P_TYPE;
              double x589040 = x603515->L_EXTENDEDPRICE;
              double x589041 = x603515->L_DISCOUNT;
              double x588725 = x613011[0];
              /* VAR */ boolean_t ite607590 = 0;
              if((x593038>=(x610297))) {
                ite607590 = (x593038<=(x610320));
              } else {
                
                ite607590 = 0;
              };
              boolean_t x606123 = ite607590;
              /* VAR */ double ite606125 = 0;
              if(x606123) {
                ite606125 = (x588725+((x589040*((1.0-(x589041))))));
              } else {
                
                ite606125 = x588725;
              };
              double x588733 = ite606125;
              *x613011 = x588733;
              double x588741 = x613011[1];
              *(x613011 + 1) = (x588741+((x589040*((1.0-(x589041))))));
            };
          };
        };
      };
    };
    double x610523 = x613011[0];
    double x610525 = x613011[1];
    *(x613011 + 2) = ((x610523*(100.0))/(x610525));
    double x610528 = x613011[2];
    printf("%.4f\n", x610528);
    printf("(%d rows)\n", 1);
    struct timeval* x610531 = &x610254;
    gettimeofday(x610531, NULL);
    struct timeval* x610533 = &x610250;
    struct timeval* x610534 = &x610254;
    struct timeval* x610535 = &x610252;
    long x610536 = timeval_subtract(x610533, x610534, x610535);
    printf("Generated code run in %ld milliseconds.\n", x610536);
  };
  /* VAR */ long mallocSum613525 = 0L;
  long x613526 = mallocSym_595901_611976;
  numeric_int_t x613527 = sizeof(char);
  long x613529 = x613526*(((long){x613527}));
  printf("612207 with type Byte: %ld\n", x613529);
  long x613531 = mallocSum613525;
  mallocSum613525 = (x613531+(x613529));
  long x613534 = mallocSym_595974_611977;
  numeric_int_t x613535 = sizeof(char);
  long x613537 = x613534*(((long){x613535}));
  printf("612311 with type Byte: %ld\n", x613537);
  long x613539 = mallocSum613525;
  mallocSum613525 = (x613539+(x613537));
  long x613542 = mallocSym_609690_611978;
  numeric_int_t x613543 = sizeof(numeric_int_t);
  long x613545 = x613542*(((long){x613543}));
  printf("612647 with type Int: %ld\n", x613545);
  long x613547 = mallocSum613525;
  mallocSum613525 = (x613547+(x613545));
  long x613550 = mallocSym_596006_611979;
  numeric_int_t x613551 = sizeof(char);
  long x613553 = x613550*(((long){x613551}));
  printf("612359 with type Byte: %ld\n", x613553);
  long x613555 = mallocSum613525;
  mallocSum613525 = (x613555+(x613553));
  long x613558 = mallocSym_603356_611980;
  numeric_int_t x613559 = sizeof(struct LINEITEMRecord);
  long x613561 = x613558*(((long){x613559}));
  printf("613179 with type LINEITEMRecord: %ld\n", x613561);
  long x613563 = mallocSum613525;
  mallocSum613525 = (x613563+(x613561));
  long x613566 = mallocSym_596139_611981;
  numeric_int_t x613567 = sizeof(struct LINEITEMRecord);
  long x613569 = x613566*(((long){x613567}));
  printf("613170 with type LINEITEMRecord: %ld\n", x613569);
  long x613571 = mallocSum613525;
  mallocSum613525 = (x613571+(x613569));
  long x613574 = mallocSym_596082_611982;
  numeric_int_t x613575 = sizeof(double);
  long x613577 = x613574*(((long){x613575}));
  printf("612496 with type Double: %ld\n", x613577);
  long x613579 = mallocSum613525;
  mallocSum613525 = (x613579+(x613577));
  long x613582 = mallocSym_609322_611983;
  numeric_int_t x613583 = sizeof(struct PARTRecord);
  long x613585 = x613582*(((long){x613583}));
  printf("612239 with type PARTRecord: %ld\n", x613585);
  long x613587 = mallocSum613525;
  mallocSum613525 = (x613587+(x613585));
  long x613590 = mallocSym_610043_611984;
  numeric_int_t x613591 = sizeof(double);
  long x613593 = x613590*(((long){x613591}));
  printf("613011 with type Double: %ld\n", x613593);
  long x613595 = mallocSum613525;
  mallocSum613525 = (x613595+(x613593));
  long x613598 = mallocSym_596048_611985;
  numeric_int_t x613599 = sizeof(char);
  long x613601 = x613598*(((long){x613599}));
  printf("612417 with type Byte: %ld\n", x613601);
  long x613603 = mallocSum613525;
  mallocSum613525 = (x613603+(x613601));
  long x613606 = mallocSym_610185_611986;
  numeric_int_t x613607 = sizeof(struct LINEITEMRecord*);
  long x613609 = x613606*(((long){x613607}));
  printf("613157 with type Pointer[LINEITEMRecord]: %ld\n", x613609);
  long x613611 = mallocSum613525;
  mallocSum613525 = (x613611+(x613609));
  long x613614 = mallocSym_595958_611987;
  numeric_int_t x613615 = sizeof(char);
  long x613617 = x613614*(((long){x613615}));
  printf("612287 with type Byte: %ld\n", x613617);
  long x613619 = mallocSum613525;
  mallocSum613525 = (x613619+(x613617));
  long x613622 = mallocSym_609689_611988;
  numeric_int_t x613623 = sizeof(struct LINEITEMRecord*);
  long x613625 = x613622*(((long){x613623}));
  printf("612642 with type Pointer[LINEITEMRecord]: %ld\n", x613625);
  long x613627 = mallocSum613525;
  mallocSum613525 = (x613627+(x613625));
  long x613630 = mallocSym_596027_611989;
  numeric_int_t x613631 = sizeof(char);
  long x613633 = x613630*(((long){x613631}));
  printf("612388 with type Byte: %ld\n", x613633);
  long x613635 = mallocSum613525;
  mallocSum613525 = (x613635+(x613633));
  long x613638 = mallocSym_596431_611990;
  numeric_int_t x613639 = sizeof(struct LINEITEMRecord);
  long x613641 = x613638*(((long){x613639}));
  printf("612215 with type LINEITEMRecord: %ld\n", x613641);
  long x613643 = mallocSum613525;
  mallocSum613525 = (x613643+(x613641));
  long x613646 = mallocSym_610186_611991;
  numeric_int_t x613647 = sizeof(numeric_int_t);
  long x613649 = x613646*(((long){x613647}));
  printf("613162 with type Int: %ld\n", x613649);
  long x613651 = mallocSum613525;
  mallocSum613525 = (x613651+(x613649));
  long x613654 = mallocSym_595885_611992;
  numeric_int_t x613655 = sizeof(char);
  long x613657 = x613654*(((long){x613655}));
  printf("612183 with type Byte: %ld\n", x613657);
  long x613659 = mallocSum613525;
  mallocSum613525 = (x613659+(x613657));
  long x613662 = mallocSym_595990_611993;
  numeric_int_t x613663 = sizeof(char);
  long x613665 = x613662*(((long){x613663}));
  printf("612335 with type Byte: %ld\n", x613665);
  long x613667 = mallocSum613525;
  mallocSum613525 = (x613667+(x613665));
  long x613670 = mallocSym_609111_611994;
  numeric_int_t x613671 = sizeof(struct LINEITEMRecord);
  long x613673 = x613670*(((long){x613671}));
  printf("612008 with type LINEITEMRecord: %ld\n", x613673);
  long x613675 = mallocSum613525;
  mallocSum613525 = (x613675+(x613673));
  long x613678 = mallocSym_596594_611995;
  numeric_int_t x613679 = sizeof(struct PARTRecord);
  long x613681 = x613678*(((long){x613679}));
  printf("612476 with type PARTRecord: %ld\n", x613681);
  long x613683 = mallocSum613525;
  mallocSum613525 = (x613683+(x613681));
  long x613686 = mallocSym_595869_611996;
  numeric_int_t x613687 = sizeof(char);
  long x613689 = x613686*(((long){x613687}));
  printf("612159 with type Byte: %ld\n", x613689);
  long x613691 = mallocSum613525;
  mallocSum613525 = (x613691+(x613689));
  long x613694 = mallocSum613525;
  printf("total: %ld\n", x613694);
}
/* ----------- FUNCTIONS ----------- */
boolean_t x610049(char** x597703, char** x597704) {
  char* x597705 = *x597704;
  char* x597706 = *x597703;
  numeric_int_t x601972 = strcmp(x597705, x597706);
  return (x601972<(0)); 
}
