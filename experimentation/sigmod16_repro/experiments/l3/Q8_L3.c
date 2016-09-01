#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct REGIONRecord;
  struct NATIONRecord;
  struct ORDERSRecord;
  struct PARTRecord;
  struct AGGRecord_Int;
  struct SUPPLIERRecord;
  struct CUSTOMERRecord;
  
  struct LINEITEMRecord {
  int L_ORDERKEY;
  int L_PARTKEY;
  int L_SUPPKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  };
  
  struct REGIONRecord {
  int R_REGIONKEY;
  char* R_NAME;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  int O_ORDERDATE;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  char* P_TYPE;
  };
  
  struct AGGRecord_Int {
  int key;
  double* aggs;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  int S_NATIONKEY;
  };
  
  struct CUSTOMERRecord {
  int C_CUSTKEY;
  int C_NATIONKEY;
  };
  
  


int x53432(struct AGGRecord_Int* x491, struct AGGRecord_Int* x492);

int x30911(void* x30905, void* x30906, void* x30907);
/* GLOBAL VARS */

struct timeval x23073;
int main(int argc, char** argv) {
  FILE* x23832 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x23833 = 0;
  int x23834 = x23833;
  int* x23835 = &x23834;
  int x23836 = fscanf(x23832, "%d", x23835);
  pclose(x23832);
  struct PARTRecord* x26164 = (struct PARTRecord*)malloc(x23834 * sizeof(struct PARTRecord));
  memset(x26164, 0, x23834 * sizeof(struct PARTRecord));
  int x23840 = O_RDONLY;
  int x23841 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x23840);
  struct stat x23842 = (struct stat){0};
  /* VAR */ struct stat x23843 = x23842;
  struct stat x23844 = x23843;
  struct stat* x23845 = &x23844;
  int x23846 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x23845);
  int x23848 = PROT_READ;
  int x23849 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x23845->st_size), x23848, x23849, x23841, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite47318 = 0;
    if((x5<(x23834))) {
      char x51723 = *x3;
      ite47318 = (x51723!=('\0'));
    } else {
      
      ite47318 = 0;
    };
    int x45382 = ite47318;
    if (!(x45382)) break; 
    
    /* VAR */ int x23857 = 0;
    int x23858 = x23857;
    int* x23859 = &x23858;
    char* x23860 = strntoi_unchecked(x3, x23859);
    x3 = x23860;
    char* x26188 = (char*)malloc(56 * sizeof(char));
    memset(x26188, 0, 56 * sizeof(char));
    /* VAR */ char* x23863 = x3;
    while(1) {
      
      char x23864 = *x3;
      /* VAR */ int ite47337 = 0;
      if((x23864!=('|'))) {
        char x51741 = *x3;
        ite47337 = (x51741!=('\n'));
      } else {
        
        ite47337 = 0;
      };
      int x45394 = ite47337;
      if (!(x45394)) break; 
      
      x3 += 1;
    };
    char* x23871 = x23863;
    int x23872 = x3 - x23871;
    char* x23873 = x23863;
    char* x23874 = strncpy(x26188, x23873, x23872);
    x3 += 1;
    char* x26206 = (char*)malloc(26 * sizeof(char));
    memset(x26206, 0, 26 * sizeof(char));
    /* VAR */ char* x23882 = x3;
    while(1) {
      
      char x23883 = *x3;
      /* VAR */ int ite47360 = 0;
      if((x23883!=('|'))) {
        char x51763 = *x3;
        ite47360 = (x51763!=('\n'));
      } else {
        
        ite47360 = 0;
      };
      int x45410 = ite47360;
      if (!(x45410)) break; 
      
      x3 += 1;
    };
    char* x23890 = x23882;
    int x23891 = x3 - x23890;
    char* x23892 = x23882;
    char* x23893 = strncpy(x26206, x23892, x23891);
    x3 += 1;
    char* x26224 = (char*)malloc(11 * sizeof(char));
    memset(x26224, 0, 11 * sizeof(char));
    /* VAR */ char* x23901 = x3;
    while(1) {
      
      char x23902 = *x3;
      /* VAR */ int ite47383 = 0;
      if((x23902!=('|'))) {
        char x51785 = *x3;
        ite47383 = (x51785!=('\n'));
      } else {
        
        ite47383 = 0;
      };
      int x45426 = ite47383;
      if (!(x45426)) break; 
      
      x3 += 1;
    };
    char* x23909 = x23901;
    int x23910 = x3 - x23909;
    char* x23911 = x23901;
    char* x23912 = strncpy(x26224, x23911, x23910);
    x3 += 1;
    char* x26242 = (char*)malloc(26 * sizeof(char));
    memset(x26242, 0, 26 * sizeof(char));
    /* VAR */ char* x23920 = x3;
    while(1) {
      
      char x23921 = *x3;
      /* VAR */ int ite47406 = 0;
      if((x23921!=('|'))) {
        char x51807 = *x3;
        ite47406 = (x51807!=('\n'));
      } else {
        
        ite47406 = 0;
      };
      int x45442 = ite47406;
      if (!(x45442)) break; 
      
      x3 += 1;
    };
    char* x23928 = x23920;
    int x23929 = x3 - x23928;
    char* x23930 = x23920;
    char* x23931 = strncpy(x26242, x23930, x23929);
    x3 += 1;
    /* VAR */ int x23938 = 0;
    int x23939 = x23938;
    int* x23940 = &x23939;
    char* x23941 = strntoi_unchecked(x3, x23940);
    x3 = x23941;
    char* x26265 = (char*)malloc(11 * sizeof(char));
    memset(x26265, 0, 11 * sizeof(char));
    /* VAR */ char* x23944 = x3;
    while(1) {
      
      char x23945 = *x3;
      /* VAR */ int ite47434 = 0;
      if((x23945!=('|'))) {
        char x51834 = *x3;
        ite47434 = (x51834!=('\n'));
      } else {
        
        ite47434 = 0;
      };
      int x45463 = ite47434;
      if (!(x45463)) break; 
      
      x3 += 1;
    };
    char* x23952 = x23944;
    int x23953 = x3 - x23952;
    char* x23954 = x23944;
    char* x23955 = strncpy(x26265, x23954, x23953);
    x3 += 1;
    /* VAR */ double x23962 = 0.0;
    double x23963 = x23962;
    double* x23964 = &x23963;
    char* x23965 = strntod_unchecked(x3, x23964);
    x3 = x23965;
    char* x26288 = (char*)malloc(24 * sizeof(char));
    memset(x26288, 0, 24 * sizeof(char));
    /* VAR */ char* x23968 = x3;
    while(1) {
      
      char x23969 = *x3;
      /* VAR */ int ite47462 = 0;
      if((x23969!=('|'))) {
        char x51861 = *x3;
        ite47462 = (x51861!=('\n'));
      } else {
        
        ite47462 = 0;
      };
      int x45484 = ite47462;
      if (!(x45484)) break; 
      
      x3 += 1;
    };
    char* x23976 = x23968;
    int x23977 = x3 - x23976;
    char* x23978 = x23968;
    char* x23979 = strncpy(x26288, x23978, x23977);
    x3 += 1;
    struct PARTRecord* x27474 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x27474, 0, 1 * sizeof(struct PARTRecord));
    x27474->P_PARTKEY = x23858; x27474->P_TYPE = x26242;
    int x59 = x4;
    struct PARTRecord x26308 = *x27474;
    *(x26164 + x59) = x26308;
    struct PARTRecord* x26310 = &(x26164[x59]);
    x27474 = x26310;
    int x61 = x4;
    x4 = (x61+(1));
  };
  FILE* x23992 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x23993 = 0;
  int x23994 = x23993;
  int* x23995 = &x23994;
  int x23996 = fscanf(x23992, "%d", x23995);
  pclose(x23992);
  struct LINEITEMRecord* x26321 = (struct LINEITEMRecord*)malloc(x23994 * sizeof(struct LINEITEMRecord));
  memset(x26321, 0, x23994 * sizeof(struct LINEITEMRecord));
  int x24000 = O_RDONLY;
  int x24001 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x24000);
  /* VAR */ struct stat x24002 = x23842;
  struct stat x24003 = x24002;
  struct stat* x24004 = &x24003;
  int x24005 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x24004);
  int x24007 = PROT_READ;
  int x24008 = MAP_PRIVATE;
  char* x67 = mmap(NULL, (x24004->st_size), x24007, x24008, x24001, 0);
  /* VAR */ int x68 = 0;
  while(1) {
    
    int x69 = x68;
    /* VAR */ int ite47512 = 0;
    if((x69<(x23994))) {
      char x51910 = *x67;
      ite47512 = (x51910!=('\0'));
    } else {
      
      ite47512 = 0;
    };
    int x45527 = ite47512;
    if (!(x45527)) break; 
    
    /* VAR */ int x24016 = 0;
    int x24017 = x24016;
    int* x24018 = &x24017;
    char* x24019 = strntoi_unchecked(x67, x24018);
    x67 = x24019;
    /* VAR */ int x24021 = 0;
    int x24022 = x24021;
    int* x24023 = &x24022;
    char* x24024 = strntoi_unchecked(x67, x24023);
    x67 = x24024;
    /* VAR */ int x24026 = 0;
    int x24027 = x24026;
    int* x24028 = &x24027;
    char* x24029 = strntoi_unchecked(x67, x24028);
    x67 = x24029;
    /* VAR */ int x24031 = 0;
    int x24032 = x24031;
    int* x24033 = &x24032;
    char* x24034 = strntoi_unchecked(x67, x24033);
    x67 = x24034;
    /* VAR */ double x24036 = 0.0;
    double x24037 = x24036;
    double* x24038 = &x24037;
    char* x24039 = strntod_unchecked(x67, x24038);
    x67 = x24039;
    /* VAR */ double x24041 = 0.0;
    double x24042 = x24041;
    double* x24043 = &x24042;
    char* x24044 = strntod_unchecked(x67, x24043);
    x67 = x24044;
    /* VAR */ double x24046 = 0.0;
    double x24047 = x24046;
    double* x24048 = &x24047;
    char* x24049 = strntod_unchecked(x67, x24048);
    x67 = x24049;
    /* VAR */ double x24051 = 0.0;
    double x24052 = x24051;
    double* x24053 = &x24052;
    char* x24054 = strntod_unchecked(x67, x24053);
    x67 = x24054;
    char x24056 = *x67;
    /* VAR */ char x24057 = x24056;
    x67 += 1;
    x67 += 1;
    char x24061 = *x67;
    /* VAR */ char x24062 = x24061;
    x67 += 1;
    x67 += 1;
    /* VAR */ int x24066 = 0;
    int x24067 = x24066;
    int* x24068 = &x24067;
    char* x24069 = strntoi_unchecked(x67, x24068);
    x67 = x24069;
    /* VAR */ int x24071 = 0;
    int x24072 = x24071;
    int* x24073 = &x24072;
    char* x24074 = strntoi_unchecked(x67, x24073);
    x67 = x24074;
    /* VAR */ int x24076 = 0;
    int x24077 = x24076;
    int* x24078 = &x24077;
    char* x24079 = strntoi_unchecked(x67, x24078);
    x67 = x24079;
    /* VAR */ int x24085 = 0;
    int x24086 = x24085;
    int* x24087 = &x24086;
    char* x24088 = strntoi_unchecked(x67, x24087);
    x67 = x24088;
    /* VAR */ int x24090 = 0;
    int x24091 = x24090;
    int* x24092 = &x24091;
    char* x24093 = strntoi_unchecked(x67, x24092);
    x67 = x24093;
    /* VAR */ int x24095 = 0;
    int x24096 = x24095;
    int* x24097 = &x24096;
    char* x24098 = strntoi_unchecked(x67, x24097);
    x67 = x24098;
    /* VAR */ int x24104 = 0;
    int x24105 = x24104;
    int* x24106 = &x24105;
    char* x24107 = strntoi_unchecked(x67, x24106);
    x67 = x24107;
    /* VAR */ int x24109 = 0;
    int x24110 = x24109;
    int* x24111 = &x24110;
    char* x24112 = strntoi_unchecked(x67, x24111);
    x67 = x24112;
    /* VAR */ int x24114 = 0;
    int x24115 = x24114;
    int* x24116 = &x24115;
    char* x24117 = strntoi_unchecked(x67, x24116);
    x67 = x24117;
    char* x26446 = (char*)malloc(26 * sizeof(char));
    memset(x26446, 0, 26 * sizeof(char));
    /* VAR */ char* x24124 = x67;
    while(1) {
      
      char x24125 = *x67;
      /* VAR */ int ite47633 = 0;
      if((x24125!=('|'))) {
        char x52030 = *x67;
        ite47633 = (x52030!=('\n'));
      } else {
        
        ite47633 = 0;
      };
      int x45641 = ite47633;
      if (!(x45641)) break; 
      
      x67 += 1;
    };
    char* x24132 = x24124;
    int x24133 = x67 - x24132;
    char* x24134 = x24124;
    char* x24135 = strncpy(x26446, x24134, x24133);
    x67 += 1;
    char* x26464 = (char*)malloc(11 * sizeof(char));
    memset(x26464, 0, 11 * sizeof(char));
    /* VAR */ char* x24143 = x67;
    while(1) {
      
      char x24144 = *x67;
      /* VAR */ int ite47656 = 0;
      if((x24144!=('|'))) {
        char x52052 = *x67;
        ite47656 = (x52052!=('\n'));
      } else {
        
        ite47656 = 0;
      };
      int x45657 = ite47656;
      if (!(x45657)) break; 
      
      x67 += 1;
    };
    char* x24151 = x24143;
    int x24152 = x67 - x24151;
    char* x24153 = x24143;
    char* x24154 = strncpy(x26464, x24153, x24152);
    x67 += 1;
    char* x26482 = (char*)malloc(45 * sizeof(char));
    memset(x26482, 0, 45 * sizeof(char));
    /* VAR */ char* x24162 = x67;
    while(1) {
      
      char x24163 = *x67;
      /* VAR */ int ite47679 = 0;
      if((x24163!=('|'))) {
        char x52074 = *x67;
        ite47679 = (x52074!=('\n'));
      } else {
        
        ite47679 = 0;
      };
      int x45673 = ite47679;
      if (!(x45673)) break; 
      
      x67 += 1;
    };
    char* x24170 = x24162;
    int x24171 = x67 - x24170;
    char* x24172 = x24162;
    char* x24173 = strncpy(x26482, x24172, x24171);
    x67 += 1;
    struct LINEITEMRecord* x27670 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x27670, 0, 1 * sizeof(struct LINEITEMRecord));
    x27670->L_ORDERKEY = x24017; x27670->L_PARTKEY = x24022; x27670->L_SUPPKEY = x24027; x27670->L_EXTENDEDPRICE = x24042; x27670->L_DISCOUNT = x24047;
    int x111 = x68;
    struct LINEITEMRecord x26502 = *x27670;
    *(x26321 + x111) = x26502;
    struct LINEITEMRecord* x26504 = &(x26321[x111]);
    x27670 = x26504;
    int x113 = x68;
    x68 = (x113+(1));
  };
  FILE* x24186 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x24187 = 0;
  int x24188 = x24187;
  int* x24189 = &x24188;
  int x24190 = fscanf(x24186, "%d", x24189);
  pclose(x24186);
  struct ORDERSRecord* x26515 = (struct ORDERSRecord*)malloc(x24188 * sizeof(struct ORDERSRecord));
  memset(x26515, 0, x24188 * sizeof(struct ORDERSRecord));
  int x24194 = O_RDONLY;
  int x24195 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x24194);
  /* VAR */ struct stat x24196 = x23842;
  struct stat x24197 = x24196;
  struct stat* x24198 = &x24197;
  int x24199 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x24198);
  int x24201 = PROT_READ;
  int x24202 = MAP_PRIVATE;
  char* x119 = mmap(NULL, (x24198->st_size), x24201, x24202, x24195, 0);
  /* VAR */ int x120 = 0;
  while(1) {
    
    int x121 = x120;
    /* VAR */ int ite47729 = 0;
    if((x121<(x24188))) {
      char x52123 = *x119;
      ite47729 = (x52123!=('\0'));
    } else {
      
      ite47729 = 0;
    };
    int x45716 = ite47729;
    if (!(x45716)) break; 
    
    /* VAR */ int x24210 = 0;
    int x24211 = x24210;
    int* x24212 = &x24211;
    char* x24213 = strntoi_unchecked(x119, x24212);
    x119 = x24213;
    /* VAR */ int x24215 = 0;
    int x24216 = x24215;
    int* x24217 = &x24216;
    char* x24218 = strntoi_unchecked(x119, x24217);
    x119 = x24218;
    char x24220 = *x119;
    /* VAR */ char x24221 = x24220;
    x119 += 1;
    x119 += 1;
    /* VAR */ double x24225 = 0.0;
    double x24226 = x24225;
    double* x24227 = &x24226;
    char* x24228 = strntod_unchecked(x119, x24227);
    x119 = x24228;
    /* VAR */ int x24230 = 0;
    int x24231 = x24230;
    int* x24232 = &x24231;
    char* x24233 = strntoi_unchecked(x119, x24232);
    x119 = x24233;
    /* VAR */ int x24235 = 0;
    int x24236 = x24235;
    int* x24237 = &x24236;
    char* x24238 = strntoi_unchecked(x119, x24237);
    x119 = x24238;
    /* VAR */ int x24240 = 0;
    int x24241 = x24240;
    int* x24242 = &x24241;
    char* x24243 = strntoi_unchecked(x119, x24242);
    x119 = x24243;
    char* x26572 = (char*)malloc(16 * sizeof(char));
    memset(x26572, 0, 16 * sizeof(char));
    /* VAR */ char* x24250 = x119;
    while(1) {
      
      char x24251 = *x119;
      /* VAR */ int ite47782 = 0;
      if((x24251!=('|'))) {
        char x52175 = *x119;
        ite47782 = (x52175!=('\n'));
      } else {
        
        ite47782 = 0;
      };
      int x45762 = ite47782;
      if (!(x45762)) break; 
      
      x119 += 1;
    };
    char* x24258 = x24250;
    int x24259 = x119 - x24258;
    char* x24260 = x24250;
    char* x24261 = strncpy(x26572, x24260, x24259);
    x119 += 1;
    char* x26590 = (char*)malloc(16 * sizeof(char));
    memset(x26590, 0, 16 * sizeof(char));
    /* VAR */ char* x24269 = x119;
    while(1) {
      
      char x24270 = *x119;
      /* VAR */ int ite47805 = 0;
      if((x24270!=('|'))) {
        char x52197 = *x119;
        ite47805 = (x52197!=('\n'));
      } else {
        
        ite47805 = 0;
      };
      int x45778 = ite47805;
      if (!(x45778)) break; 
      
      x119 += 1;
    };
    char* x24277 = x24269;
    int x24278 = x119 - x24277;
    char* x24279 = x24269;
    char* x24280 = strncpy(x26590, x24279, x24278);
    x119 += 1;
    /* VAR */ int x24287 = 0;
    int x24288 = x24287;
    int* x24289 = &x24288;
    char* x24290 = strntoi_unchecked(x119, x24289);
    x119 = x24290;
    char* x26613 = (char*)malloc(80 * sizeof(char));
    memset(x26613, 0, 80 * sizeof(char));
    /* VAR */ char* x24293 = x119;
    while(1) {
      
      char x24294 = *x119;
      /* VAR */ int ite47833 = 0;
      if((x24294!=('|'))) {
        char x52224 = *x119;
        ite47833 = (x52224!=('\n'));
      } else {
        
        ite47833 = 0;
      };
      int x45799 = ite47833;
      if (!(x45799)) break; 
      
      x119 += 1;
    };
    char* x24301 = x24293;
    int x24302 = x119 - x24301;
    char* x24303 = x24293;
    char* x24304 = strncpy(x26613, x24303, x24302);
    x119 += 1;
    struct ORDERSRecord* x27803 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x27803, 0, 1 * sizeof(struct ORDERSRecord));
    x27803->O_ORDERKEY = x24211; x27803->O_CUSTKEY = x24216; x27803->O_ORDERDATE = (((x24231*(10000))+((x24236*(100))))+(x24241));
    int x155 = x120;
    struct ORDERSRecord x26633 = *x27803;
    *(x26515 + x155) = x26633;
    struct ORDERSRecord* x26635 = &(x26515[x155]);
    x27803 = x26635;
    int x157 = x120;
    x120 = (x157+(1));
  };
  FILE* x24317 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x24318 = 0;
  int x24319 = x24318;
  int* x24320 = &x24319;
  int x24321 = fscanf(x24317, "%d", x24320);
  pclose(x24317);
  struct CUSTOMERRecord* x26646 = (struct CUSTOMERRecord*)malloc(x24319 * sizeof(struct CUSTOMERRecord));
  memset(x26646, 0, x24319 * sizeof(struct CUSTOMERRecord));
  int x24325 = O_RDONLY;
  int x24326 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x24325);
  /* VAR */ struct stat x24327 = x23842;
  struct stat x24328 = x24327;
  struct stat* x24329 = &x24328;
  int x24330 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x24329);
  int x24332 = PROT_READ;
  int x24333 = MAP_PRIVATE;
  char* x163 = mmap(NULL, (x24329->st_size), x24332, x24333, x24326, 0);
  /* VAR */ int x164 = 0;
  while(1) {
    
    int x165 = x164;
    /* VAR */ int ite47883 = 0;
    if((x165<(x24319))) {
      char x52273 = *x163;
      ite47883 = (x52273!=('\0'));
    } else {
      
      ite47883 = 0;
    };
    int x45842 = ite47883;
    if (!(x45842)) break; 
    
    /* VAR */ int x24341 = 0;
    int x24342 = x24341;
    int* x24343 = &x24342;
    char* x24344 = strntoi_unchecked(x163, x24343);
    x163 = x24344;
    char* x26669 = (char*)malloc(26 * sizeof(char));
    memset(x26669, 0, 26 * sizeof(char));
    /* VAR */ char* x24347 = x163;
    while(1) {
      
      char x24348 = *x163;
      /* VAR */ int ite47902 = 0;
      if((x24348!=('|'))) {
        char x52291 = *x163;
        ite47902 = (x52291!=('\n'));
      } else {
        
        ite47902 = 0;
      };
      int x45854 = ite47902;
      if (!(x45854)) break; 
      
      x163 += 1;
    };
    char* x24355 = x24347;
    int x24356 = x163 - x24355;
    char* x24357 = x24347;
    char* x24358 = strncpy(x26669, x24357, x24356);
    x163 += 1;
    char* x26687 = (char*)malloc(41 * sizeof(char));
    memset(x26687, 0, 41 * sizeof(char));
    /* VAR */ char* x24366 = x163;
    while(1) {
      
      char x24367 = *x163;
      /* VAR */ int ite47925 = 0;
      if((x24367!=('|'))) {
        char x52313 = *x163;
        ite47925 = (x52313!=('\n'));
      } else {
        
        ite47925 = 0;
      };
      int x45870 = ite47925;
      if (!(x45870)) break; 
      
      x163 += 1;
    };
    char* x24374 = x24366;
    int x24375 = x163 - x24374;
    char* x24376 = x24366;
    char* x24377 = strncpy(x26687, x24376, x24375);
    x163 += 1;
    /* VAR */ int x24384 = 0;
    int x24385 = x24384;
    int* x24386 = &x24385;
    char* x24387 = strntoi_unchecked(x163, x24386);
    x163 = x24387;
    char* x26710 = (char*)malloc(16 * sizeof(char));
    memset(x26710, 0, 16 * sizeof(char));
    /* VAR */ char* x24390 = x163;
    while(1) {
      
      char x24391 = *x163;
      /* VAR */ int ite47953 = 0;
      if((x24391!=('|'))) {
        char x52340 = *x163;
        ite47953 = (x52340!=('\n'));
      } else {
        
        ite47953 = 0;
      };
      int x45891 = ite47953;
      if (!(x45891)) break; 
      
      x163 += 1;
    };
    char* x24398 = x24390;
    int x24399 = x163 - x24398;
    char* x24400 = x24390;
    char* x24401 = strncpy(x26710, x24400, x24399);
    x163 += 1;
    /* VAR */ double x24408 = 0.0;
    double x24409 = x24408;
    double* x24410 = &x24409;
    char* x24411 = strntod_unchecked(x163, x24410);
    x163 = x24411;
    char* x26733 = (char*)malloc(11 * sizeof(char));
    memset(x26733, 0, 11 * sizeof(char));
    /* VAR */ char* x24414 = x163;
    while(1) {
      
      char x24415 = *x163;
      /* VAR */ int ite47981 = 0;
      if((x24415!=('|'))) {
        char x52367 = *x163;
        ite47981 = (x52367!=('\n'));
      } else {
        
        ite47981 = 0;
      };
      int x45912 = ite47981;
      if (!(x45912)) break; 
      
      x163 += 1;
    };
    char* x24422 = x24414;
    int x24423 = x163 - x24422;
    char* x24424 = x24414;
    char* x24425 = strncpy(x26733, x24424, x24423);
    x163 += 1;
    char* x26751 = (char*)malloc(118 * sizeof(char));
    memset(x26751, 0, 118 * sizeof(char));
    /* VAR */ char* x24433 = x163;
    while(1) {
      
      char x24434 = *x163;
      /* VAR */ int ite48004 = 0;
      if((x24434!=('|'))) {
        char x52389 = *x163;
        ite48004 = (x52389!=('\n'));
      } else {
        
        ite48004 = 0;
      };
      int x45928 = ite48004;
      if (!(x45928)) break; 
      
      x163 += 1;
    };
    char* x24441 = x24433;
    int x24442 = x163 - x24441;
    char* x24443 = x24433;
    char* x24444 = strncpy(x26751, x24443, x24442);
    x163 += 1;
    struct CUSTOMERRecord* x27943 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x27943, 0, 1 * sizeof(struct CUSTOMERRecord));
    x27943->C_CUSTKEY = x24342; x27943->C_NATIONKEY = x24385;
    int x213 = x164;
    struct CUSTOMERRecord x26771 = *x27943;
    *(x26646 + x213) = x26771;
    struct CUSTOMERRecord* x26773 = &(x26646[x213]);
    x27943 = x26773;
    int x215 = x164;
    x164 = (x215+(1));
  };
  FILE* x24457 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x24458 = 0;
  int x24459 = x24458;
  int* x24460 = &x24459;
  int x24461 = fscanf(x24457, "%d", x24460);
  pclose(x24457);
  struct NATIONRecord* x26784 = (struct NATIONRecord*)malloc(x24459 * sizeof(struct NATIONRecord));
  memset(x26784, 0, x24459 * sizeof(struct NATIONRecord));
  int x24465 = O_RDONLY;
  int x24466 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x24465);
  /* VAR */ struct stat x24467 = x23842;
  struct stat x24468 = x24467;
  struct stat* x24469 = &x24468;
  int x24470 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x24469);
  int x24472 = PROT_READ;
  int x24473 = MAP_PRIVATE;
  char* x221 = mmap(NULL, (x24469->st_size), x24472, x24473, x24466, 0);
  /* VAR */ int x222 = 0;
  while(1) {
    
    int x223 = x222;
    /* VAR */ int ite48054 = 0;
    if((x223<(x24459))) {
      char x52438 = *x221;
      ite48054 = (x52438!=('\0'));
    } else {
      
      ite48054 = 0;
    };
    int x45971 = ite48054;
    if (!(x45971)) break; 
    
    /* VAR */ int x24481 = 0;
    int x24482 = x24481;
    int* x24483 = &x24482;
    char* x24484 = strntoi_unchecked(x221, x24483);
    x221 = x24484;
    char* x26807 = (char*)malloc(26 * sizeof(char));
    memset(x26807, 0, 26 * sizeof(char));
    /* VAR */ char* x24487 = x221;
    while(1) {
      
      char x24488 = *x221;
      /* VAR */ int ite48073 = 0;
      if((x24488!=('|'))) {
        char x52456 = *x221;
        ite48073 = (x52456!=('\n'));
      } else {
        
        ite48073 = 0;
      };
      int x45983 = ite48073;
      if (!(x45983)) break; 
      
      x221 += 1;
    };
    char* x24495 = x24487;
    int x24496 = x221 - x24495;
    char* x24497 = x24487;
    char* x24498 = strncpy(x26807, x24497, x24496);
    x221 += 1;
    /* VAR */ int x24505 = 0;
    int x24506 = x24505;
    int* x24507 = &x24506;
    char* x24508 = strntoi_unchecked(x221, x24507);
    x221 = x24508;
    char* x26830 = (char*)malloc(153 * sizeof(char));
    memset(x26830, 0, 153 * sizeof(char));
    /* VAR */ char* x24511 = x221;
    while(1) {
      
      char x24512 = *x221;
      /* VAR */ int ite48101 = 0;
      if((x24512!=('|'))) {
        char x52483 = *x221;
        ite48101 = (x52483!=('\n'));
      } else {
        
        ite48101 = 0;
      };
      int x46004 = ite48101;
      if (!(x46004)) break; 
      
      x221 += 1;
    };
    char* x24519 = x24511;
    int x24520 = x221 - x24519;
    char* x24521 = x24511;
    char* x24522 = strncpy(x26830, x24521, x24520);
    x221 += 1;
    struct NATIONRecord* x28024 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x28024, 0, 1 * sizeof(struct NATIONRecord));
    x28024->N_NATIONKEY = x24482; x28024->N_NAME = x26807; x28024->N_REGIONKEY = x24506;
    int x246 = x222;
    struct NATIONRecord x26850 = *x28024;
    *(x26784 + x246) = x26850;
    struct NATIONRecord* x26852 = &(x26784[x246]);
    x28024 = x26852;
    int x248 = x222;
    x222 = (x248+(1));
  };
  FILE* x24535 = popen("wc -l /mnt/ramdisk/tpch/sf8/region.tbl", "r");
  /* VAR */ int x24536 = 0;
  int x24537 = x24536;
  int* x24538 = &x24537;
  int x24539 = fscanf(x24535, "%d", x24538);
  pclose(x24535);
  struct REGIONRecord* x26863 = (struct REGIONRecord*)malloc(x24537 * sizeof(struct REGIONRecord));
  memset(x26863, 0, x24537 * sizeof(struct REGIONRecord));
  int x24543 = O_RDONLY;
  int x24544 = open("/mnt/ramdisk/tpch/sf8/region.tbl", x24543);
  /* VAR */ struct stat x24545 = x23842;
  struct stat x24546 = x24545;
  struct stat* x24547 = &x24546;
  int x24548 = stat("/mnt/ramdisk/tpch/sf8/region.tbl", x24547);
  int x24550 = PROT_READ;
  int x24551 = MAP_PRIVATE;
  char* x254 = mmap(NULL, (x24547->st_size), x24550, x24551, x24544, 0);
  /* VAR */ int x255 = 0;
  while(1) {
    
    int x256 = x255;
    /* VAR */ int ite48151 = 0;
    if((x256<(x24537))) {
      char x52532 = *x254;
      ite48151 = (x52532!=('\0'));
    } else {
      
      ite48151 = 0;
    };
    int x46047 = ite48151;
    if (!(x46047)) break; 
    
    /* VAR */ int x24559 = 0;
    int x24560 = x24559;
    int* x24561 = &x24560;
    char* x24562 = strntoi_unchecked(x254, x24561);
    x254 = x24562;
    char* x26886 = (char*)malloc(26 * sizeof(char));
    memset(x26886, 0, 26 * sizeof(char));
    /* VAR */ char* x24565 = x254;
    while(1) {
      
      char x24566 = *x254;
      /* VAR */ int ite48170 = 0;
      if((x24566!=('|'))) {
        char x52550 = *x254;
        ite48170 = (x52550!=('\n'));
      } else {
        
        ite48170 = 0;
      };
      int x46059 = ite48170;
      if (!(x46059)) break; 
      
      x254 += 1;
    };
    char* x24573 = x24565;
    int x24574 = x254 - x24573;
    char* x24575 = x24565;
    char* x24576 = strncpy(x26886, x24575, x24574);
    x254 += 1;
    char* x26904 = (char*)malloc(153 * sizeof(char));
    memset(x26904, 0, 153 * sizeof(char));
    /* VAR */ char* x24584 = x254;
    while(1) {
      
      char x24585 = *x254;
      /* VAR */ int ite48193 = 0;
      if((x24585!=('|'))) {
        char x52572 = *x254;
        ite48193 = (x52572!=('\n'));
      } else {
        
        ite48193 = 0;
      };
      int x46075 = ite48193;
      if (!(x46075)) break; 
      
      x254 += 1;
    };
    char* x24592 = x24584;
    int x24593 = x254 - x24592;
    char* x24594 = x24584;
    char* x24595 = strncpy(x26904, x24594, x24593);
    x254 += 1;
    struct REGIONRecord* x28100 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x28100, 0, 1 * sizeof(struct REGIONRecord));
    x28100->R_REGIONKEY = x24560; x28100->R_NAME = x26886;
    int x278 = x255;
    struct REGIONRecord x26924 = *x28100;
    *(x26863 + x278) = x26924;
    struct REGIONRecord* x26926 = &(x26863[x278]);
    x28100 = x26926;
    int x280 = x255;
    x255 = (x280+(1));
  };
  FILE* x24608 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x24609 = 0;
  int x24610 = x24609;
  int* x24611 = &x24610;
  int x24612 = fscanf(x24608, "%d", x24611);
  pclose(x24608);
  struct SUPPLIERRecord* x26937 = (struct SUPPLIERRecord*)malloc(x24610 * sizeof(struct SUPPLIERRecord));
  memset(x26937, 0, x24610 * sizeof(struct SUPPLIERRecord));
  int x24616 = O_RDONLY;
  int x24617 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x24616);
  /* VAR */ struct stat x24618 = x23842;
  struct stat x24619 = x24618;
  struct stat* x24620 = &x24619;
  int x24621 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x24620);
  int x24623 = PROT_READ;
  int x24624 = MAP_PRIVATE;
  char* x286 = mmap(NULL, (x24620->st_size), x24623, x24624, x24617, 0);
  /* VAR */ int x287 = 0;
  while(1) {
    
    int x288 = x287;
    /* VAR */ int ite48243 = 0;
    if((x288<(x24610))) {
      char x52621 = *x286;
      ite48243 = (x52621!=('\0'));
    } else {
      
      ite48243 = 0;
    };
    int x46118 = ite48243;
    if (!(x46118)) break; 
    
    /* VAR */ int x24632 = 0;
    int x24633 = x24632;
    int* x24634 = &x24633;
    char* x24635 = strntoi_unchecked(x286, x24634);
    x286 = x24635;
    char* x26960 = (char*)malloc(26 * sizeof(char));
    memset(x26960, 0, 26 * sizeof(char));
    /* VAR */ char* x24638 = x286;
    while(1) {
      
      char x24639 = *x286;
      /* VAR */ int ite48262 = 0;
      if((x24639!=('|'))) {
        char x52639 = *x286;
        ite48262 = (x52639!=('\n'));
      } else {
        
        ite48262 = 0;
      };
      int x46130 = ite48262;
      if (!(x46130)) break; 
      
      x286 += 1;
    };
    char* x24646 = x24638;
    int x24647 = x286 - x24646;
    char* x24648 = x24638;
    char* x24649 = strncpy(x26960, x24648, x24647);
    x286 += 1;
    char* x26978 = (char*)malloc(41 * sizeof(char));
    memset(x26978, 0, 41 * sizeof(char));
    /* VAR */ char* x24657 = x286;
    while(1) {
      
      char x24658 = *x286;
      /* VAR */ int ite48285 = 0;
      if((x24658!=('|'))) {
        char x52661 = *x286;
        ite48285 = (x52661!=('\n'));
      } else {
        
        ite48285 = 0;
      };
      int x46146 = ite48285;
      if (!(x46146)) break; 
      
      x286 += 1;
    };
    char* x24665 = x24657;
    int x24666 = x286 - x24665;
    char* x24667 = x24657;
    char* x24668 = strncpy(x26978, x24667, x24666);
    x286 += 1;
    /* VAR */ int x24675 = 0;
    int x24676 = x24675;
    int* x24677 = &x24676;
    char* x24678 = strntoi_unchecked(x286, x24677);
    x286 = x24678;
    char* x27001 = (char*)malloc(16 * sizeof(char));
    memset(x27001, 0, 16 * sizeof(char));
    /* VAR */ char* x24681 = x286;
    while(1) {
      
      char x24682 = *x286;
      /* VAR */ int ite48313 = 0;
      if((x24682!=('|'))) {
        char x52688 = *x286;
        ite48313 = (x52688!=('\n'));
      } else {
        
        ite48313 = 0;
      };
      int x46167 = ite48313;
      if (!(x46167)) break; 
      
      x286 += 1;
    };
    char* x24689 = x24681;
    int x24690 = x286 - x24689;
    char* x24691 = x24681;
    char* x24692 = strncpy(x27001, x24691, x24690);
    x286 += 1;
    /* VAR */ double x24699 = 0.0;
    double x24700 = x24699;
    double* x24701 = &x24700;
    char* x24702 = strntod_unchecked(x286, x24701);
    x286 = x24702;
    char* x27024 = (char*)malloc(102 * sizeof(char));
    memset(x27024, 0, 102 * sizeof(char));
    /* VAR */ char* x24705 = x286;
    while(1) {
      
      char x24706 = *x286;
      /* VAR */ int ite48341 = 0;
      if((x24706!=('|'))) {
        char x52715 = *x286;
        ite48341 = (x52715!=('\n'));
      } else {
        
        ite48341 = 0;
      };
      int x46188 = ite48341;
      if (!(x46188)) break; 
      
      x286 += 1;
    };
    char* x24713 = x24705;
    int x24714 = x286 - x24713;
    char* x24715 = x24705;
    char* x24716 = strncpy(x27024, x24715, x24714);
    x286 += 1;
    struct SUPPLIERRecord* x28222 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x28222, 0, 1 * sizeof(struct SUPPLIERRecord));
    x28222->S_SUPPKEY = x24633; x28222->S_NATIONKEY = x24676;
    int x328 = x287;
    struct SUPPLIERRecord x27044 = *x28222;
    *(x26937 + x328) = x27044;
    struct SUPPLIERRecord* x27046 = &(x26937[x328]);
    x28222 = x27046;
    int x330 = x287;
    x287 = (x330+(1));
  };
  int x335 = 0;
  for(; x335 < 1 ; x335 += 1) {
    
    /* VAR */ int x53302 = 0;
    GList*** x53303 = (GList***)malloc(1048576 * sizeof(GList**));
    memset(x53303, 0, 1048576 * sizeof(GList**));
    int x42953 = 0;
    for(; x42953 < 1048576 ; x42953 += 1) {
      
      GList** x42954 = malloc(8);
      GList* x42955 = NULL;
      pointer_assign(x42954, x42955);
      *(x53303 + x42953) = x42954;
    };
    struct ORDERSRecord* x53315 = (struct ORDERSRecord*)malloc(60000000 * sizeof(struct ORDERSRecord));
    memset(x53315, 0, 60000000 * sizeof(struct ORDERSRecord));
    int x42969 = 0;
    for(; x42969 < x24188 ; x42969 += 1) {
      
      struct ORDERSRecord* x42970 = &(x26515[x42969]);
      int x42972 = (x42970->O_ORDERKEY)%(60000000);
      struct ORDERSRecord x42973 = *x42970;
      *(x53315 + x42972) = x42973;
      struct ORDERSRecord* x42975 = &(x53315[x42972]);
      x42970 = x42975;
    };
    struct LINEITEMRecord** x53333 = (struct LINEITEMRecord**)malloc(1600000 * sizeof(struct LINEITEMRecord*));
    memset(x53333, 0, 1600000 * sizeof(struct LINEITEMRecord*));
    int* x53334 = (int*)malloc(1600000 * sizeof(int));
    memset(x53334, 0, 1600000 * sizeof(int));
    int x42984 = 0;
    for(; x42984 < 1600000 ; x42984 += 1) {
      
      struct LINEITEMRecord* x42985 = (struct LINEITEMRecord*)malloc(1024 * sizeof(struct LINEITEMRecord));
      memset(x42985, 0, 1024 * sizeof(struct LINEITEMRecord));
      *(x53333 + x42984) = x42985;
    };
    /* VAR */ int x53342 = 0;
    int x43005 = 0;
    for(; x43005 < x23994 ; x43005 += 1) {
      
      struct LINEITEMRecord* x43006 = &(x26321[x43005]);
      int x43008 = (x43006->L_PARTKEY)%(1600000);
      int x43009 = x53334[x43008];
      struct LINEITEMRecord* x43010 = x53333[x43008];
      struct LINEITEMRecord x43011 = *x43006;
      *(x43010 + x43009) = x43011;
      struct LINEITEMRecord* x43013 = &(x43010[x43009]);
      x43006 = x43013;
      *(x53334 + x43008) = (x43009+(1));
      int x43017 = x53342;
      x53342 = (x43017+(1));
    };
    /* VAR */ int x53374 = 0;
    double** x53375 = (double**)malloc(7 * sizeof(double*));
    memset(x53375, 0, 7 * sizeof(double*));
    /* VAR */ int x53376 = 0;
    while(1) {
      
      int x22864 = x53376;
      if (!((x22864<(7)))) break; 
      
      int x22866 = x53376;
      double* x27108 = (double*)malloc(3 * sizeof(double));
      memset(x27108, 0, 3 * sizeof(double));
      *(x53375 + x22866) = x27108;
      int x22869 = x53376;
      x53376 = (x22869+(1));
    };
    /* VAR */ int x53386 = 0;
    struct AGGRecord_Int* x53387 = (struct AGGRecord_Int*)malloc(7 * sizeof(struct AGGRecord_Int));
    memset(x53387, 0, 7 * sizeof(struct AGGRecord_Int));
    /* VAR */ int x53388 = 0;
    while(1) {
      
      int x22876 = x53388;
      if (!((x22876<(7)))) break; 
      
      int x22878 = x53388;
      double* x22879 = x53375[x22878];
      struct AGGRecord_Int* x28303 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
      memset(x28303, 0, 1 * sizeof(struct AGGRecord_Int));
      x28303->key = 0; x28303->aggs = x22879;
      struct AGGRecord_Int x27122 = *x28303;
      *(x53387 + x22878) = x27122;
      struct AGGRecord_Int* x27124 = &(x53387[x22878]);
      x28303 = x27124;
      int x22882 = x53388;
      x53388 = (x22882+(1));
    };
    /* VAR */ struct timeval x53404 = x23073;
    struct timeval x53405 = x53404;
    /* VAR */ struct timeval x53406 = x23073;
    struct timeval x53407 = x53406;
    /* VAR */ struct timeval x53408 = x23073;
    struct timeval x53409 = x53408;
    struct timeval* x53410 = &x53407;
    gettimeofday(x53410, NULL);
    /* VAR */ int x53412 = 0;
    int* x53451 = &(x53432);
    GTree* x53452 = g_tree_new(x53451);
    /* VAR */ int x53453 = 0;
    /* VAR */ int x53454 = 0;
    while(1) {
      
      int x53456 = x53412;
      if (!((x53456<(x23834)))) break; 
      
      int x11422 = x53412;
      struct PARTRecord* x592 = &(x26164[x11422]);
      int x40628 = strcmp((x592->P_TYPE), "MEDIUM ANODIZED NICKEL");
      if((x40628==(0))) {
        int x596 = x592->P_PARTKEY;
        int x20758 = x596%(1600000);
        int x20759 = x53334[x20758];
        struct LINEITEMRecord* x20760 = x53333[x20758];
        int x43224 = 0;
        for(; x43224 < x20759 ; x43224 += 1) {
          
          struct LINEITEMRecord* x43225 = &(x20760[x43224]);
          if(((x43225->L_PARTKEY)==(x596))) {
            if(((x43225->L_PARTKEY)==(x596))) {
              int x3489 = x43225->L_ORDERKEY;
              int x3490 = x43225->L_SUPPKEY;
              struct ORDERSRecord* x16521 = &(x53315[x3489]);
              int x638 = x16521->O_ORDERDATE;
              /* VAR */ int ite49262 = 0;
              if((x638>=(19950101))) {
                ite49262 = (x638<=(19961231));
              } else {
                
                ite49262 = 0;
              };
              int x47073 = ite49262;
              if(x47073) {
                if((x3489==((x16521->O_ORDERKEY)))) {
                  int x3552 = x16521->O_CUSTKEY;
                  struct CUSTOMERRecord* x16542 = &(x26646[(x3552-(1))]);
                  if((x3552==((x16542->C_CUSTKEY)))) {
                    int x5169 = x16542->C_NATIONKEY;
                    struct NATIONRecord* x20792 = &(x26784[(x5169-(0))]);
                    if(((x20792->N_NATIONKEY)==(x5169))) {
                      if(((x20792->N_NATIONKEY)==(x5169))) {
                        int x5961 = x20792->N_REGIONKEY;
                        struct REGIONRecord* x20801 = &(x26863[(x5961-(0))]);
                        int x40677 = strcmp((x20801->R_NAME), "ASIA");
                        if((x40677==(0))) {
                          if(((x20801->R_REGIONKEY)==(x5961))) {
                            if(((x20801->R_REGIONKEY)==(x5961))) {
                              struct SUPPLIERRecord* x20812 = &(x26937[(x3490-(1))]);
                              if(((x20812->S_SUPPKEY)==(x3490))) {
                                if(((x20812->S_SUPPKEY)==(x3490))) {
                                  int x6562 = x20812->S_NATIONKEY;
                                  struct NATIONRecord* x20821 = &(x26784[(x6562-(0))]);
                                  if(((x20821->N_NATIONKEY)==(x6562))) {
                                    if(((x20821->N_NATIONKEY)==(x6562))) {
                                      int x23557 = x638/(10000);
                                      int x19200 = x23557&((1048576-(1)));
                                      GList** x19201 = x53303[x19200];
                                      int x19202 = x53302;
                                      if((x19200>(x19202))) {
                                        x53302 = x19200;
                                      };
                                      /* VAR */ struct AGGRecord_Int* x30806 = NULL;
                                      GList* x30807 = *(x19201);
                                      /* VAR */ GList* x30808 = x30807;
                                      while(1) {
                                        
                                        GList* x30809 = x30808;
                                        GList* x30810 = NULL;
                                        if (!((x30809!=(x30810)))) break; 
                                        
                                        GList* x30812 = x30808;
                                        void* x30813 = g_list_nth_data(x30812, 0);
                                        struct AGGRecord_Int* x30814 = (struct AGGRecord_Int*){x30813};
                                        GList* x30815 = x30808;
                                        GList* x30816 = g_list_next(x30815);
                                        x30808 = x30816;
                                        if(((x30814->key)==(x23557))) {
                                          x30806 = x30814;
                                          break;
                                        };
                                      };
                                      struct AGGRecord_Int* x30824 = x30806;
                                      /* VAR */ struct AGGRecord_Int* ite47157 = 0;
                                      if((x30824!=(NULL))) {
                                        ite47157 = x30824;
                                      } else {
                                        
                                        int x47159 = x53374;
                                        double* x47160 = x53375[x47159];
                                        int x47161 = x53374;
                                        x53374 = (x47161+(1));
                                        int x47164 = x53386;
                                        struct AGGRecord_Int* x47165 = &(x53387[x47164]);
                                        x47165->key = x23557;
                                        x47165->aggs = x47160;
                                        int x47168 = x53386;
                                        x53386 = (x47168+(1));
                                        GList* x47171 = *(x19201);
                                        GList* x47172 = g_list_prepend(x47171, x47165);
                                        pointer_assign(x19201, x47172);
                                        ite47157 = x47165;
                                      };
                                      struct AGGRecord_Int* x19215 = ite47157;
                                      double* x2684 = x19215->aggs;
                                      double x2698 = x2684[0];
                                      double x2702 = (x43225->L_EXTENDEDPRICE)*((1.0-((x43225->L_DISCOUNT))));
                                      *x2684 = (x2698+(x2702));
                                      double x2711 = x2684[1];
                                      int x40759 = strcmp((x20821->N_NAME), "INDONESIA");
                                      /* VAR */ double ite47187 = 0;
                                      if((x40759==(0))) {
                                        ite47187 = (x2711+(x2702));
                                      } else {
                                        
                                        ite47187 = x2711;
                                      };
                                      double x2715 = ite47187;
                                      *(x2684 + 1) = x2715;
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
      int x11461 = x53412;
      x53412 = (x11461+(1));
    };
    int x53756 = x53302;
    int x43388 = 0;
    for(; x43388 < (x53756+(1)) ; x43388 += 1) {
      
      GList** x43389 = x53303[x43388];
      GList* x43399 = *(x43389);
      /* VAR */ GList* x43400 = x43399;
      while(1) {
        
        GList* x30878 = x43400;
        GList* x30879 = NULL;
        if (!((x30878!=(x30879)))) break; 
        
        GList* x30881 = x43400;
        void* x30882 = g_list_nth_data(x30881, 0);
        struct AGGRecord_Int* x30883 = (struct AGGRecord_Int*){x30882};
        GList* x30884 = x43400;
        GList* x30885 = g_list_next(x30884);
        x43400 = x30885;
        double* x30890 = x30883->aggs;
        double x30891 = x30890[1];
        double x30892 = x30890[0];
        *(x30890 + 2) = (x30891/(x30892));
        g_tree_insert(x53452, x30883, x30883);
      };
    };
    while(1) {
      
      int x13629 = x53453;
      int x2762 = !(x13629);
      /* VAR */ int ite49459 = 0;
      if(x2762) {
        int x53824 = g_tree_nnodes(x53452);
        ite49459 = (x53824!=(0));
      } else {
        
        ite49459 = 0;
      };
      int x47264 = ite49459;
      if (!(x47264)) break; 
      
      void* x30904 = NULL;
      void** x30912 = &(x30904);
      g_tree_foreach(x53452, x30911, x30912);
      struct AGGRecord_Int* x30914 = (struct AGGRecord_Int*){x30904};
      int x30915 = g_tree_remove(x53452, x30914);
      if(0) {
        x53453 = 1;
      } else {
        
        double x2777 = ((double*) { x30914->aggs })[2];
        printf("%d|%.4f\n", (x30914->key), x2777);
        int x13646 = x53454;
        x53454 = (x13646+(1));
      };
    };
    int x53851 = x53454;
    printf("(%d rows)\n", x53851);
    struct timeval* x53853 = &x53409;
    gettimeofday(x53853, NULL);
    struct timeval* x53855 = &x53405;
    struct timeval* x53856 = &x53409;
    struct timeval* x53857 = &x53407;
    long x53858 = timeval_subtract(x53855, x53856, x53857);
    printf("Generated code run in %ld milliseconds.\n", x53858);
  };
}
/* ----------- FUNCTIONS ----------- */
int x53432(struct AGGRecord_Int* x491, struct AGGRecord_Int* x492) {
  int x493 = x491->key;
  int x494 = x492->key;
  /* VAR */ int ite46891 = 0;
  if((x493<(x494))) {
    ite46891 = -1;
  } else {
    
    /* VAR */ int ite46895 = 0;
    if((x493>(x494))) {
      ite46895 = 1;
    } else {
      
      ite46895 = 0;
    };
    int x46894 = ite46895;
    ite46891 = x46894;
  };
  int x498 = ite46891;
  return x498; 
}

int x30911(void* x30905, void* x30906, void* x30907) {
  pointer_assign(((struct AGGRecord_Int**){x30907}), ((struct AGGRecord_Int*){x30906}));
  return 1; 
}
