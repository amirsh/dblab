#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct Q16GRPRecord2;
  struct AGGRecord_Q16GRPRecord2;
  struct Q16GRPRecord1;
  struct PARTRecord;
  struct SUPPLIERRecord;
  struct AGGRecord_Q16GRPRecord1;
  struct PARTSUPPRecord;
  
  struct Q16GRPRecord2 {
  int P_BRAND;
  int P_TYPE;
  int P_SIZE;
  };
  
  struct AGGRecord_Q16GRPRecord2 {
  struct Q16GRPRecord2* key;
  double aggs;
  struct AGGRecord_Q16GRPRecord2* next;
  };
  
  struct Q16GRPRecord1 {
  int P_BRAND;
  int P_TYPE;
  int P_SIZE;
  int PS_SUPPKEY;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  int P_BRAND;
  int P_TYPE;
  int P_SIZE;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  char* S_COMMENT;
  };
  
  struct AGGRecord_Q16GRPRecord1 {
  struct Q16GRPRecord1* key;
  double aggs;
  struct AGGRecord_Q16GRPRecord1* next;
  };
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  };
  
  


int x53697(char** x24975, char** x24976);

int x53710(char** x24988, char** x24989);

int x54227(struct AGGRecord_Q16GRPRecord2* x240, struct AGGRecord_Q16GRPRecord2* x241);

int x25572(void* x25566, void* x25567, void* x25568);
/* GLOBAL VARS */

struct timeval x19178;
int main(int argc, char** argv) {
  /* VAR */ int x4893 = 0;
  int x24500 = sizeof(char**);
  GArray* x24501 = g_array_new(0, 1, x24500);
  int x24502 = sizeof(char**);
  GArray* x24503 = g_array_new(0, 1, x24502);
  /* VAR */ int x4896 = 0;
  int x24505 = sizeof(char**);
  GArray* x24506 = g_array_new(0, 1, x24505);
  int x24507 = sizeof(char**);
  GArray* x24508 = g_array_new(0, 1, x24507);
  /* VAR */ int x4899 = 0;
  int* x21808 = (int*)malloc(12000000 * sizeof(int));
  memset(x21808, 0, 12000000 * sizeof(int));
  FILE* x20115 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x20116 = 0;
  int x20117 = x20116;
  int* x20118 = &x20117;
  int x20119 = fscanf(x20115, "%d", x20118);
  pclose(x20115);
  struct SUPPLIERRecord* x21815 = (struct SUPPLIERRecord*)malloc(x20117 * sizeof(struct SUPPLIERRecord));
  memset(x21815, 0, x20117 * sizeof(struct SUPPLIERRecord));
  int x20123 = O_RDONLY;
  int x20124 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x20123);
  struct stat x20125 = (struct stat){0};
  /* VAR */ struct stat x20126 = x20125;
  struct stat x20127 = x20126;
  struct stat* x20128 = &x20127;
  int x20129 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x20128);
  int x20131 = PROT_READ;
  int x20132 = MAP_PRIVATE;
  char* x14767 = mmap(NULL, (x20128->st_size), x20131, x20132, x20124, 0);
  /* VAR */ int x14768 = 0;
  while(1) {
    
    int x5 = x14768;
    /* VAR */ int ite42445 = 0;
    if((x5<(x20117))) {
      char x51895 = *x14767;
      ite42445 = (x51895!=('\0'));
    } else {
      
      ite42445 = 0;
    };
    int x39953 = ite42445;
    if (!(x39953)) break; 
    
    /* VAR */ int x20140 = 0;
    int x20141 = x20140;
    int* x20142 = &x20141;
    char* x20143 = strntoi_unchecked(x14767, x20142);
    x14767 = x20143;
    char* x21839 = (char*)malloc(26 * sizeof(char));
    memset(x21839, 0, 26 * sizeof(char));
    /* VAR */ char* x20146 = x14767;
    while(1) {
      
      char x20147 = *x14767;
      /* VAR */ int ite42464 = 0;
      if((x20147!=('|'))) {
        char x51913 = *x14767;
        ite42464 = (x51913!=('\n'));
      } else {
        
        ite42464 = 0;
      };
      int x39965 = ite42464;
      if (!(x39965)) break; 
      
      x14767 += 1;
    };
    char* x20154 = x20146;
    int x20155 = x14767 - x20154;
    char* x20156 = x20146;
    char* x20157 = strncpy(x21839, x20156, x20155);
    x14767 += 1;
    char* x21857 = (char*)malloc(41 * sizeof(char));
    memset(x21857, 0, 41 * sizeof(char));
    /* VAR */ char* x20165 = x14767;
    while(1) {
      
      char x20166 = *x14767;
      /* VAR */ int ite42487 = 0;
      if((x20166!=('|'))) {
        char x51935 = *x14767;
        ite42487 = (x51935!=('\n'));
      } else {
        
        ite42487 = 0;
      };
      int x39981 = ite42487;
      if (!(x39981)) break; 
      
      x14767 += 1;
    };
    char* x20173 = x20165;
    int x20174 = x14767 - x20173;
    char* x20175 = x20165;
    char* x20176 = strncpy(x21857, x20175, x20174);
    x14767 += 1;
    /* VAR */ int x20183 = 0;
    int x20184 = x20183;
    int* x20185 = &x20184;
    char* x20186 = strntoi_unchecked(x14767, x20185);
    x14767 = x20186;
    char* x21880 = (char*)malloc(16 * sizeof(char));
    memset(x21880, 0, 16 * sizeof(char));
    /* VAR */ char* x20189 = x14767;
    while(1) {
      
      char x20190 = *x14767;
      /* VAR */ int ite42515 = 0;
      if((x20190!=('|'))) {
        char x51962 = *x14767;
        ite42515 = (x51962!=('\n'));
      } else {
        
        ite42515 = 0;
      };
      int x40002 = ite42515;
      if (!(x40002)) break; 
      
      x14767 += 1;
    };
    char* x20197 = x20189;
    int x20198 = x14767 - x20197;
    char* x20199 = x20189;
    char* x20200 = strncpy(x21880, x20199, x20198);
    x14767 += 1;
    /* VAR */ double x20207 = 0.0;
    double x20208 = x20207;
    double* x20209 = &x20208;
    char* x20210 = strntod_unchecked(x14767, x20209);
    x14767 = x20210;
    char* x21903 = (char*)malloc(102 * sizeof(char));
    memset(x21903, 0, 102 * sizeof(char));
    /* VAR */ char* x20213 = x14767;
    while(1) {
      
      char x20214 = *x14767;
      /* VAR */ int ite42543 = 0;
      if((x20214!=('|'))) {
        char x51989 = *x14767;
        ite42543 = (x51989!=('\n'));
      } else {
        
        ite42543 = 0;
      };
      int x40023 = ite42543;
      if (!(x40023)) break; 
      
      x14767 += 1;
    };
    char* x20221 = x20213;
    int x20222 = x14767 - x20221;
    char* x20223 = x20213;
    char* x20224 = strncpy(x21903, x20223, x20222);
    x14767 += 1;
    struct SUPPLIERRecord* x22811 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x22811, 0, 1 * sizeof(struct SUPPLIERRecord));
    x22811->S_SUPPKEY = x20141; x22811->S_COMMENT = x21903;
    int x45 = x14768;
    /* VAR */ int ite42566 = 0;
    if((x22811==(NULL))) {
      ite42566 = 1;
    } else {
      
      char* x52012 = x22811->S_COMMENT;
      /* VAR */ int x52014 = 0;
      if((x52012==(NULL))) {
        x52014 = 1;
      } else {
        
        int x52017 = strcmp(x52012, "");
        int x52018 = !(x52017);
        x52014 = x52018;
      };
      int x52021 = x52014;
      ite42566 = x52021;
    };
    int x40039 = ite42566;
    if(x40039) {
      *(x21815 + x45) = (const struct SUPPLIERRecord){0};
    } else {
      
      struct SUPPLIERRecord x21925 = *x22811;
      *(x21815 + x45) = x21925;
      struct SUPPLIERRecord* x21927 = &(x21815[x45]);
      x22811 = x21927;
    };
    int x47 = x14768;
    x14768 = (x47+(1));
  };
  FILE* x20237 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x20238 = 0;
  int x20239 = x20238;
  int* x20240 = &x20239;
  int x20241 = fscanf(x20237, "%d", x20240);
  pclose(x20237);
  struct PARTRecord* x21939 = (struct PARTRecord*)malloc(x20239 * sizeof(struct PARTRecord));
  memset(x21939, 0, x20239 * sizeof(struct PARTRecord));
  int x20245 = O_RDONLY;
  int x20246 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x20245);
  /* VAR */ struct stat x20247 = x20125;
  struct stat x20248 = x20247;
  struct stat* x20249 = &x20248;
  int x20250 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x20249);
  int x20252 = PROT_READ;
  int x20253 = MAP_PRIVATE;
  char* x14813 = mmap(NULL, (x20249->st_size), x20252, x20253, x20246, 0);
  /* VAR */ int x14814 = 0;
  while(1) {
    
    int x55 = x14814;
    /* VAR */ int ite42607 = 0;
    if((x55<(x20239))) {
      char x52057 = *x14813;
      ite42607 = (x52057!=('\0'));
    } else {
      
      ite42607 = 0;
    };
    int x40071 = ite42607;
    if (!(x40071)) break; 
    
    /* VAR */ int x20261 = 0;
    int x20262 = x20261;
    int* x20263 = &x20262;
    char* x20264 = strntoi_unchecked(x14813, x20263);
    x14813 = x20264;
    char* x21962 = (char*)malloc(56 * sizeof(char));
    memset(x21962, 0, 56 * sizeof(char));
    /* VAR */ char* x20267 = x14813;
    while(1) {
      
      char x20268 = *x14813;
      /* VAR */ int ite42626 = 0;
      if((x20268!=('|'))) {
        char x52075 = *x14813;
        ite42626 = (x52075!=('\n'));
      } else {
        
        ite42626 = 0;
      };
      int x40083 = ite42626;
      if (!(x40083)) break; 
      
      x14813 += 1;
    };
    char* x20275 = x20267;
    int x20276 = x14813 - x20275;
    char* x20277 = x20267;
    char* x20278 = strncpy(x21962, x20277, x20276);
    x14813 += 1;
    char* x21980 = (char*)malloc(26 * sizeof(char));
    memset(x21980, 0, 26 * sizeof(char));
    /* VAR */ char* x20286 = x14813;
    while(1) {
      
      char x20287 = *x14813;
      /* VAR */ int ite42649 = 0;
      if((x20287!=('|'))) {
        char x52097 = *x14813;
        ite42649 = (x52097!=('\n'));
      } else {
        
        ite42649 = 0;
      };
      int x40099 = ite42649;
      if (!(x40099)) break; 
      
      x14813 += 1;
    };
    char* x20294 = x20286;
    int x20295 = x14813 - x20294;
    char* x20296 = x20286;
    char* x20297 = strncpy(x21980, x20296, x20295);
    x14813 += 1;
    char* x21998 = (char*)malloc(11 * sizeof(char));
    memset(x21998, 0, 11 * sizeof(char));
    /* VAR */ char* x20305 = x14813;
    while(1) {
      
      char x20306 = *x14813;
      /* VAR */ int ite42672 = 0;
      if((x20306!=('|'))) {
        char x52119 = *x14813;
        ite42672 = (x52119!=('\n'));
      } else {
        
        ite42672 = 0;
      };
      int x40115 = ite42672;
      if (!(x40115)) break; 
      
      x14813 += 1;
    };
    char* x20313 = x20305;
    int x20314 = x14813 - x20313;
    char* x20315 = x20305;
    char* x20316 = strncpy(x21998, x20315, x20314);
    x14813 += 1;
    char* x22016 = (char*)malloc(26 * sizeof(char));
    memset(x22016, 0, 26 * sizeof(char));
    /* VAR */ char* x20324 = x14813;
    while(1) {
      
      char x20325 = *x14813;
      /* VAR */ int ite42695 = 0;
      if((x20325!=('|'))) {
        char x52141 = *x14813;
        ite42695 = (x52141!=('\n'));
      } else {
        
        ite42695 = 0;
      };
      int x40131 = ite42695;
      if (!(x40131)) break; 
      
      x14813 += 1;
    };
    char* x20332 = x20324;
    int x20333 = x14813 - x20332;
    char* x20334 = x20324;
    char* x20335 = strncpy(x22016, x20334, x20333);
    x14813 += 1;
    /* VAR */ int x20342 = 0;
    int x20343 = x20342;
    int* x20344 = &x20343;
    char* x20345 = strntoi_unchecked(x14813, x20344);
    x14813 = x20345;
    char* x22039 = (char*)malloc(11 * sizeof(char));
    memset(x22039, 0, 11 * sizeof(char));
    /* VAR */ char* x20348 = x14813;
    while(1) {
      
      char x20349 = *x14813;
      /* VAR */ int ite42723 = 0;
      if((x20349!=('|'))) {
        char x52168 = *x14813;
        ite42723 = (x52168!=('\n'));
      } else {
        
        ite42723 = 0;
      };
      int x40152 = ite42723;
      if (!(x40152)) break; 
      
      x14813 += 1;
    };
    char* x20356 = x20348;
    int x20357 = x14813 - x20356;
    char* x20358 = x20348;
    char* x20359 = strncpy(x22039, x20358, x20357);
    x14813 += 1;
    /* VAR */ double x20366 = 0.0;
    double x20367 = x20366;
    double* x20368 = &x20367;
    char* x20369 = strntod_unchecked(x14813, x20368);
    x14813 = x20369;
    char* x22062 = (char*)malloc(24 * sizeof(char));
    memset(x22062, 0, 24 * sizeof(char));
    /* VAR */ char* x20372 = x14813;
    while(1) {
      
      char x20373 = *x14813;
      /* VAR */ int ite42751 = 0;
      if((x20373!=('|'))) {
        char x52195 = *x14813;
        ite42751 = (x52195!=('\n'));
      } else {
        
        ite42751 = 0;
      };
      int x40173 = ite42751;
      if (!(x40173)) break; 
      
      x14813 += 1;
    };
    char* x20380 = x20372;
    int x20381 = x14813 - x20380;
    char* x20382 = x20372;
    char* x20383 = strncpy(x22062, x20382, x20381);
    x14813 += 1;
    void* x24784 = &(x21998);
    GArray* x24785 = g_array_append_vals(x24503, x24784, 1);
    int x5003 = x4893;
    if((x5003>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "P_BRAND", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "P_BRAND");
    };
    /* VAR */ int x24791 = -1;
    int x24792 = x24501->len;
    int x36252 = 0;
    for(; x36252 < x24792 ; x36252 += 1) {
      
      char* x36253 = g_array_index(x24501, char*, x36252);
      int x36254 = strcmp(x36253, x21998);
      int x36255 = !(x36254);
      if(x36255) {
        x24791 = x36252;
        break;
      };
    };
    int x24802 = x24791;
    int x5009 = !((x24802!=(-1)));
    if(x5009) {
      int x5010 = x4893;
      x4893 = (x5010+(1));
      void* x24809 = &(x21998);
      GArray* x24810 = g_array_append_vals(x24501, x24809, 1);
    };
    /* VAR */ int x24811 = -1;
    int x24812 = x24501->len;
    int x36279 = 0;
    for(; x36279 < x24812 ; x36279 += 1) {
      
      char* x36280 = g_array_index(x24501, char*, x36279);
      int x36281 = strcmp(x36280, x21998);
      int x36282 = !(x36281);
      if(x36282) {
        x24811 = x36279;
        break;
      };
    };
    int x24822 = x24811;
    void* x24823 = &(x22016);
    GArray* x24824 = g_array_append_vals(x24508, x24823, 1);
    int x5017 = x4896;
    if((x5017>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "P_TYPE", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "P_TYPE");
    };
    /* VAR */ int x24830 = -1;
    int x24831 = x24506->len;
    int x36305 = 0;
    for(; x36305 < x24831 ; x36305 += 1) {
      
      char* x36306 = g_array_index(x24506, char*, x36305);
      int x36307 = strcmp(x36306, x22016);
      int x36308 = !(x36307);
      if(x36308) {
        x24830 = x36305;
        break;
      };
    };
    int x24841 = x24830;
    int x5023 = !((x24841!=(-1)));
    if(x5023) {
      int x5024 = x4896;
      x4896 = (x5024+(1));
      void* x24848 = &(x22016);
      GArray* x24849 = g_array_append_vals(x24506, x24848, 1);
    };
    /* VAR */ int x24850 = -1;
    int x24851 = x24506->len;
    int x36332 = 0;
    for(; x36332 < x24851 ; x36332 += 1) {
      
      char* x36333 = g_array_index(x24506, char*, x36332);
      int x36334 = strcmp(x36333, x22016);
      int x36335 = !(x36334);
      if(x36335) {
        x24850 = x36332;
        break;
      };
    };
    int x24861 = x24850;
    struct PARTRecord* x23000 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x23000, 0, 1 * sizeof(struct PARTRecord));
    x23000->P_PARTKEY = x20262; x23000->P_BRAND = x24822; x23000->P_TYPE = x24861; x23000->P_SIZE = x20343;
    int x109 = x14814;
    if((x23000==(NULL))) {
      *(x21939 + x109) = (const struct PARTRecord){0};
    } else {
      
      struct PARTRecord x22112 = *x23000;
      *(x21939 + x109) = x22112;
      struct PARTRecord* x22114 = &(x21939[x109]);
      x23000 = x22114;
    };
    int x111 = x14814;
    x14814 = (x111+(1));
  };
  FILE* x20424 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x20425 = 0;
  int x20426 = x20425;
  int* x20427 = &x20426;
  int x20428 = fscanf(x20424, "%d", x20427);
  pclose(x20424);
  struct PARTSUPPRecord* x22126 = (struct PARTSUPPRecord*)malloc(x20426 * sizeof(struct PARTSUPPRecord));
  memset(x22126, 0, x20426 * sizeof(struct PARTSUPPRecord));
  int x20432 = O_RDONLY;
  int x20433 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x20432);
  /* VAR */ struct stat x20434 = x20125;
  struct stat x20435 = x20434;
  struct stat* x20436 = &x20435;
  int x20437 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x20436);
  int x20439 = PROT_READ;
  int x20440 = MAP_PRIVATE;
  char* x14901 = mmap(NULL, (x20436->st_size), x20439, x20440, x20433, 0);
  /* VAR */ int x14902 = 0;
  while(1) {
    
    int x119 = x14902;
    /* VAR */ int ite42906 = 0;
    if((x119<(x20426))) {
      char x52349 = *x14901;
      ite42906 = (x52349!=('\0'));
    } else {
      
      ite42906 = 0;
    };
    int x40321 = ite42906;
    if (!(x40321)) break; 
    
    /* VAR */ int x20448 = 0;
    int x20449 = x20448;
    int* x20450 = &x20449;
    char* x20451 = strntoi_unchecked(x14901, x20450);
    x14901 = x20451;
    /* VAR */ int x20453 = 0;
    int x20454 = x20453;
    int* x20455 = &x20454;
    char* x20456 = strntoi_unchecked(x14901, x20455);
    x14901 = x20456;
    /* VAR */ int x20458 = 0;
    int x20459 = x20458;
    int* x20460 = &x20459;
    char* x20461 = strntoi_unchecked(x14901, x20460);
    x14901 = x20461;
    /* VAR */ double x20463 = 0.0;
    double x20464 = x20463;
    double* x20465 = &x20464;
    char* x20466 = strntod_unchecked(x14901, x20465);
    x14901 = x20466;
    char* x22164 = (char*)malloc(200 * sizeof(char));
    memset(x22164, 0, 200 * sizeof(char));
    /* VAR */ char* x20469 = x14901;
    while(1) {
      
      char x20470 = *x14901;
      /* VAR */ int ite42940 = 0;
      if((x20470!=('|'))) {
        char x52382 = *x14901;
        ite42940 = (x52382!=('\n'));
      } else {
        
        ite42940 = 0;
      };
      int x40348 = ite42940;
      if (!(x40348)) break; 
      
      x14901 += 1;
    };
    char* x20477 = x20469;
    int x20478 = x14901 - x20477;
    char* x20479 = x20469;
    char* x20480 = strncpy(x22164, x20479, x20478);
    x14901 += 1;
    struct PARTSUPPRecord* x23076 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x23076, 0, 1 * sizeof(struct PARTSUPPRecord));
    x23076->PS_PARTKEY = x20449; x23076->PS_SUPPKEY = x20454;
    int x136 = x14902;
    if((x23076==(NULL))) {
      *(x22126 + x136) = (const struct PARTSUPPRecord){0};
    } else {
      
      struct PARTSUPPRecord x22186 = *x23076;
      *(x22126 + x136) = x22186;
      struct PARTSUPPRecord* x22188 = &(x22126[x136]);
      x23076 = x22188;
    };
    int x138 = x14902;
    x14902 = (x138+(1));
  };
  int x143 = 0;
  for(; x143 < 1 ; x143 += 1) {
    
    /* VAR */ int x53677 = 0;
    struct AGGRecord_Q16GRPRecord2* x53678 = (struct AGGRecord_Q16GRPRecord2*)malloc(1048576 * sizeof(struct AGGRecord_Q16GRPRecord2));
    memset(x53678, 0, 1048576 * sizeof(struct AGGRecord_Q16GRPRecord2));
    int x36437 = 0;
    for(; x36437 < 1048576 ; x36437 += 1) {
      
      *(x53678 + x36437) = (const struct AGGRecord_Q16GRPRecord2){0};
    };
    /* VAR */ int x53684 = 0;
    struct AGGRecord_Q16GRPRecord1* x53685 = (struct AGGRecord_Q16GRPRecord1*)malloc(1048576 * sizeof(struct AGGRecord_Q16GRPRecord1));
    memset(x53685, 0, 1048576 * sizeof(struct AGGRecord_Q16GRPRecord1));
    int x36445 = 0;
    for(; x36445 < 1048576 ; x36445 += 1) {
      
      *(x53685 + x36445) = (const struct AGGRecord_Q16GRPRecord1){0};
    };
    x4899 = -1;
    g_array_sort(x24506, x53697);
    g_array_sort(x24501, x53710);
    /* VAR */ int x53718 = 0;
    int x36481 = 0;
    for(; x36481 < x20117 ; x36481 += 1) {
      
      int x36482 = x53718;
      x53718 = (x36482+(1));
    };
    /* VAR */ int x53728 = 0;
    int x36492 = 0;
    for(; x36492 < x20117 ; x36492 += 1) {
      
      int x36493 = x53728;
      x53728 = (x36493+(1));
    };
    /* VAR */ int x53738 = 0;
    int x36548 = 0;
    for(; x36548 < x20239 ; x36548 += 1) {
      
      struct PARTRecord* x36549 = &(x21939[x36548]);
      int x36550 = x53738;
      char* x36551 = g_array_index(x24503, char*, x36550);
      /* VAR */ int x36552 = -1;
      int x36553 = x24501->len;
      int x36513 = 0;
      for(; x36513 < x36553 ; x36513 += 1) {
        
        char* x36514 = g_array_index(x24501, char*, x36513);
        int x36515 = strcmp(x36514, x36551);
        int x36516 = !(x36515);
        if(x36516) {
          x36552 = x36513;
          break;
        };
      };
      int x36569 = x36552;
      x36549->P_BRAND = x36569;
      int x36571 = x53738;
      char* x36572 = g_array_index(x24508, char*, x36571);
      /* VAR */ int x36573 = -1;
      int x36574 = x24506->len;
      int x36535 = 0;
      for(; x36535 < x36574 ; x36535 += 1) {
        
        char* x36536 = g_array_index(x24506, char*, x36535);
        int x36537 = strcmp(x36536, x36572);
        int x36538 = !(x36537);
        if(x36538) {
          x36573 = x36535;
          break;
        };
      };
      int x36590 = x36573;
      x36549->P_TYPE = x36590;
      int x36592 = x53738;
      x53738 = (x36592+(1));
    };
    /* VAR */ int x53834 = 0;
    int x36647 = 0;
    for(; x36647 < x20239 ; x36647 += 1) {
      
      struct PARTRecord* x36648 = &(x21939[x36647]);
      int x36649 = x53834;
      char* x36650 = g_array_index(x24503, char*, x36649);
      /* VAR */ int x36651 = -1;
      int x36652 = x24501->len;
      int x36612 = 0;
      for(; x36612 < x36652 ; x36612 += 1) {
        
        char* x36613 = g_array_index(x24501, char*, x36612);
        int x36614 = strcmp(x36613, x36650);
        int x36615 = !(x36614);
        if(x36615) {
          x36651 = x36612;
          break;
        };
      };
      int x36668 = x36651;
      x36648->P_BRAND = x36668;
      int x36670 = x53834;
      char* x36671 = g_array_index(x24508, char*, x36670);
      /* VAR */ int x36672 = -1;
      int x36673 = x24506->len;
      int x36634 = 0;
      for(; x36634 < x36673 ; x36634 += 1) {
        
        char* x36635 = g_array_index(x24506, char*, x36634);
        int x36636 = strcmp(x36635, x36671);
        int x36637 = !(x36636);
        if(x36637) {
          x36672 = x36634;
          break;
        };
      };
      int x36689 = x36672;
      x36648->P_TYPE = x36689;
      int x36691 = x53834;
      x53834 = (x36691+(1));
    };
    /* VAR */ int x53930 = 0;
    int x36701 = 0;
    for(; x36701 < x20426 ; x36701 += 1) {
      
      int x36702 = x53930;
      x53930 = (x36702+(1));
    };
    /* VAR */ int x53940 = 0;
    int x36712 = 0;
    for(; x36712 < x20426 ; x36712 += 1) {
      
      int x36713 = x53940;
      x53940 = (x36713+(1));
    };
    /* VAR */ int x53950 = 0;
    struct Q16GRPRecord1* x53951 = (struct Q16GRPRecord1*)malloc(6400000 * sizeof(struct Q16GRPRecord1));
    memset(x53951, 0, 6400000 * sizeof(struct Q16GRPRecord1));
    /* VAR */ int x53952 = 0;
    while(1) {
      
      int x18827 = x53952;
      if (!((x18827<(6400000)))) break; 
      
      int x18829 = x53952;
      struct Q16GRPRecord1* x23193 = (struct Q16GRPRecord1*)malloc(1 * sizeof(struct Q16GRPRecord1));
      memset(x23193, 0, 1 * sizeof(struct Q16GRPRecord1));
      x23193->P_BRAND = 0; x23193->P_TYPE = 0; x23193->P_SIZE = 0; x23193->PS_SUPPKEY = 0;
      if((x23193==(NULL))) {
        *(x53951 + x18829) = (const struct Q16GRPRecord1){0};
      } else {
        
        struct Q16GRPRecord1 x22300 = *x23193;
        *(x53951 + x18829) = x22300;
        struct Q16GRPRecord1* x22302 = &(x53951[x18829]);
        x23193 = x22302;
      };
      int x18832 = x53952;
      x53952 = (x18832+(1));
    };
    /* VAR */ int x53970 = 0;
    struct AGGRecord_Q16GRPRecord1* x53971 = (struct AGGRecord_Q16GRPRecord1*)malloc(6400000 * sizeof(struct AGGRecord_Q16GRPRecord1));
    memset(x53971, 0, 6400000 * sizeof(struct AGGRecord_Q16GRPRecord1));
    /* VAR */ int x53972 = 0;
    while(1) {
      
      int x18839 = x53972;
      if (!((x18839<(6400000)))) break; 
      
      int x18841 = x53972;
      struct Q16GRPRecord1* x18842 = &(x53951[x18841]);
      struct AGGRecord_Q16GRPRecord1* x23214 = (struct AGGRecord_Q16GRPRecord1*)malloc(1 * sizeof(struct AGGRecord_Q16GRPRecord1));
      memset(x23214, 0, 1 * sizeof(struct AGGRecord_Q16GRPRecord1));
      x23214->key = x18842; x23214->aggs = 0.0; x23214->next = NULL;
      /* VAR */ int ite44539 = 0;
      if((x23214==(NULL))) {
        ite44539 = 1;
      } else {
        
        ite44539 = ((x23214->key)==(NULL));
      };
      int x41699 = ite44539;
      if(x41699) {
        *(x53971 + x18841) = (const struct AGGRecord_Q16GRPRecord1){0};
      } else {
        
        struct AGGRecord_Q16GRPRecord1 x22319 = *x23214;
        *(x53971 + x18841) = x22319;
        struct AGGRecord_Q16GRPRecord1* x22321 = &(x53971[x18841]);
        x23214 = x22321;
      };
      int x18845 = x53972;
      x53972 = (x18845+(1));
    };
    /* VAR */ int x53999 = 0;
    struct Q16GRPRecord2* x54000 = (struct Q16GRPRecord2*)malloc(6400000 * sizeof(struct Q16GRPRecord2));
    memset(x54000, 0, 6400000 * sizeof(struct Q16GRPRecord2));
    /* VAR */ int x54001 = 0;
    while(1) {
      
      int x18852 = x54001;
      if (!((x18852<(6400000)))) break; 
      
      int x18854 = x54001;
      struct Q16GRPRecord2* x23234 = (struct Q16GRPRecord2*)malloc(1 * sizeof(struct Q16GRPRecord2));
      memset(x23234, 0, 1 * sizeof(struct Q16GRPRecord2));
      x23234->P_BRAND = 0; x23234->P_TYPE = 0; x23234->P_SIZE = 0;
      if((x23234==(NULL))) {
        *(x54000 + x18854) = (const struct Q16GRPRecord2){0};
      } else {
        
        struct Q16GRPRecord2 x22337 = *x23234;
        *(x54000 + x18854) = x22337;
        struct Q16GRPRecord2* x22339 = &(x54000[x18854]);
        x23234 = x22339;
      };
      int x18857 = x54001;
      x54001 = (x18857+(1));
    };
    /* VAR */ int x54019 = 0;
    struct AGGRecord_Q16GRPRecord2* x54020 = (struct AGGRecord_Q16GRPRecord2*)malloc(187500 * sizeof(struct AGGRecord_Q16GRPRecord2));
    memset(x54020, 0, 187500 * sizeof(struct AGGRecord_Q16GRPRecord2));
    /* VAR */ int x54021 = 0;
    while(1) {
      
      int x18864 = x54021;
      if (!((x18864<(187500)))) break; 
      
      int x18866 = x54021;
      struct Q16GRPRecord2* x18867 = &(x54000[x18866]);
      struct AGGRecord_Q16GRPRecord2* x23255 = (struct AGGRecord_Q16GRPRecord2*)malloc(1 * sizeof(struct AGGRecord_Q16GRPRecord2));
      memset(x23255, 0, 1 * sizeof(struct AGGRecord_Q16GRPRecord2));
      x23255->key = x18867; x23255->aggs = 0.0; x23255->next = NULL;
      /* VAR */ int ite44589 = 0;
      if((x23255==(NULL))) {
        ite44589 = 1;
      } else {
        
        ite44589 = ((x23255->key)==(NULL));
      };
      int x41742 = ite44589;
      if(x41742) {
        *(x54020 + x18866) = (const struct AGGRecord_Q16GRPRecord2){0};
      } else {
        
        struct AGGRecord_Q16GRPRecord2 x22356 = *x23255;
        *(x54020 + x18866) = x22356;
        struct AGGRecord_Q16GRPRecord2* x22358 = &(x54020[x18866]);
        x23255 = x22358;
      };
      int x18870 = x54021;
      x54021 = (x18870+(1));
    };
    /* VAR */ struct timeval x54048 = x19178;
    struct timeval x54049 = x54048;
    /* VAR */ struct timeval x54050 = x19178;
    struct timeval x54051 = x54050;
    /* VAR */ struct timeval x54052 = x19178;
    struct timeval x54053 = x54052;
    struct timeval* x54054 = &x54051;
    gettimeofday(x54054, NULL);
    /* VAR */ int x54061 = -1;
    int x54062 = x24501->len;
    int x36832 = 0;
    for(; x36832 < x54062 ; x36832 += 1) {
      
      char* x36833 = g_array_index(x24501, char*, x36832);
      int x36834 = strlen("Brand#21");
      int x36835 = strncmp(x36833, "Brand#21", x36834);
      /* VAR */ int ite44645 = 0;
      if((x36835==(0))) {
        int x54087 = x54061;
        ite44645 = (x54087==(-1));
      } else {
        
        ite44645 = 0;
      };
      int x41784 = ite44645;
      if(x41784) {
        x54061 = x36832;
        break;
      };
    };
    int x54096 = x54061;
    /* VAR */ int x54102 = -1;
    int x54103 = x24501->len;
    int x36860 = 0;
    for(; x36860 < x54103 ; x36860 += 1) {
      
      char* x36861 = g_array_index(x24501, char*, x36860);
      int x36862 = strlen("Brand#21");
      int x36863 = strncmp(x36861, "Brand#21", x36862);
      if((x36863==(0))) {
        x54102 = x36860;
      };
    };
    int x54119 = x54102;
    /* VAR */ int x54125 = -1;
    int x54126 = x24506->len;
    int x36888 = 0;
    for(; x36888 < x54126 ; x36888 += 1) {
      
      char* x36889 = g_array_index(x24506, char*, x36888);
      int x36890 = strlen("PROMO PLATED");
      int x36891 = strncmp(x36889, "PROMO PLATED", x36890);
      /* VAR */ int ite44711 = 0;
      if((x36891==(0))) {
        int x54151 = x54125;
        ite44711 = (x54151==(-1));
      } else {
        
        ite44711 = 0;
      };
      int x41836 = ite44711;
      if(x41836) {
        x54125 = x36888;
        break;
      };
    };
    int x54160 = x54125;
    /* VAR */ int x54166 = -1;
    int x54167 = x24506->len;
    int x36916 = 0;
    for(; x36916 < x54167 ; x36916 += 1) {
      
      char* x36917 = g_array_index(x24506, char*, x36916);
      int x36918 = strlen("PROMO PLATED");
      int x36919 = strncmp(x36917, "PROMO PLATED", x36918);
      if((x36919==(0))) {
        x54166 = x36916;
      };
    };
    int x54183 = x54166;
    /* VAR */ int x54184 = 0;
    int* x54269 = &(x54227);
    GTree* x54270 = g_tree_new(x54269);
    /* VAR */ int x54271 = 0;
    /* VAR */ int x54272 = 0;
    while(1) {
      
      int x54274 = x54184;
      if (!((x54274<(x20426)))) break; 
      
      int x2022 = x54184;
      struct PARTSUPPRecord* x333 = &(x22126[x2022]);
      int x335 = x333->PS_PARTKEY;
      struct PARTRecord* x15089 = &(x21939[(x335-(1))]);
      int x15090 = x15089->P_BRAND;
      /* VAR */ int ite44847 = 0;
      if((x15090>=(x54096))) {
        ite44847 = (x15090<=(x54119));
      } else {
        
        ite44847 = 0;
      };
      int x41963 = ite44847;
      int x15094 = !(x41963);
      /* VAR */ int ite44856 = 0;
      if(x15094) {
        int x54293 = x15089->P_TYPE;
        /* VAR */ int x54295 = 0;
        if((x54293>=(x54160))) {
          x54295 = (x54293<=(x54183));
        } else {
          
          x54295 = 0;
        };
        int x54301 = x54295;
        int x54302 = !(x54301);
        ite44856 = x54302;
      } else {
        
        ite44856 = 0;
      };
      int x41966 = ite44856;
      /* VAR */ int ite44868 = 0;
      if(x41966) {
        int x54309 = x15089->P_SIZE;
        /* VAR */ int x54311 = 0;
        if((x54309==(23))) {
          x54311 = 1;
        } else {
          
          x54311 = (x54309==(3));
        };
        int x54317 = x54311;
        /* VAR */ int x54318 = 0;
        if(x54317) {
          x54318 = 1;
        } else {
          
          x54318 = (x54309==(33));
        };
        int x54324 = x54318;
        /* VAR */ int x54325 = 0;
        if(x54324) {
          x54325 = 1;
        } else {
          
          x54325 = (x54309==(29));
        };
        int x54331 = x54325;
        /* VAR */ int x54332 = 0;
        if(x54331) {
          x54332 = 1;
        } else {
          
          x54332 = (x54309==(40));
        };
        int x54338 = x54332;
        /* VAR */ int x54339 = 0;
        if(x54338) {
          x54339 = 1;
        } else {
          
          x54339 = (x54309==(27));
        };
        int x54345 = x54339;
        /* VAR */ int x54346 = 0;
        if(x54345) {
          x54346 = 1;
        } else {
          
          x54346 = (x54309==(22));
        };
        int x54352 = x54346;
        /* VAR */ int x54353 = 0;
        if(x54352) {
          x54353 = 1;
        } else {
          
          x54353 = (x54309==(4));
        };
        int x54359 = x54353;
        ite44868 = x54359;
      } else {
        
        ite44868 = 0;
      };
      int x41968 = ite44868;
      if(x41968) {
        if(((x15089->P_PARTKEY)==(x335))) {
          if(((x15089->P_PARTKEY)==(x335))) {
            int x927 = x333->PS_SUPPKEY;
            /* VAR */ int resultRetain3836 = 0;
            struct SUPPLIERRecord* x3838 = &(x21815[(x927-(1))]);
            char* x376 = x3838->S_COMMENT;
            char* x34471 = pointer_add(x376, 0);
            char* x34472 = strstr(x34471, "Customer");
            char* x34473 = NULL;
            /* VAR */ int ite41988 = 0;
            if((x34472==(x34473))) {
              ite41988 = -1;
            } else {
              
              int x41990 = str_subtract(x34472, x376);
              ite41988 = x41990;
            };
            int x34476 = ite41988;
            char* x34477 = pointer_add(x376, x34476);
            char* x34478 = strstr(x34477, "Complaints");
            char* x34479 = NULL;
            /* VAR */ int ite41999 = 0;
            if((x34478==(x34479))) {
              ite41999 = -1;
            } else {
              
              int x42001 = str_subtract(x34478, x376);
              ite41999 = x42001;
            };
            int x34482 = ite41999;
            /* VAR */ int ite44928 = 0;
            if((x34476!=(-1))) {
              ite44928 = (x34482!=(-1));
            } else {
              
              ite44928 = 0;
            };
            int x42007 = ite44928;
            if(x42007) {
              int x3849 = !((x927==((x3838->S_SUPPKEY))));
              int x3850 = !(x3849);
              if(x3850) {
                resultRetain3836 = 1;
              };
            };
            int x3854 = resultRetain3836;
            int x3855 = !(x3854);
            if(x3855) {
              int x18997 = x53950;
              struct Q16GRPRecord1* x18998 = &(x53951[x18997]);
              x18998->P_BRAND = x15090;
              x18998->P_TYPE = (x15089->P_TYPE);
              x18998->P_SIZE = (x15089->P_SIZE);
              x18998->PS_SUPPKEY = x927;
              int x19003 = x53950;
              x53950 = (x19003+(1));
              int x30949 = x18998->P_BRAND;
              int x30951 = x18998->P_TYPE;
              int x30953 = x18998->P_SIZE;
              int x30955 = x18998->PS_SUPPKEY;
              int x6201 = (((x30949+(x30951))+(x30953))+(x30955))&(1048575);
              struct AGGRecord_Q16GRPRecord1* x7814 = &(x53685[x6201]);
              int x6203 = x53684;
              if((x6201>(x6203))) {
                x53684 = x6201;
              };
              /* VAR */ struct AGGRecord_Q16GRPRecord1* current8481 = x7814;
              /* VAR */ int found7824 = 0;
              while(1) {
                
                struct AGGRecord_Q16GRPRecord1* x8484 = current8481;
                /* VAR */ int ite44973 = 0;
                if((x8484!=(NULL))) {
                  ite44973 = ((x8484->key)!=(NULL));
                } else {
                  
                  ite44973 = 0;
                };
                int x42046 = ite44973;
                /* VAR */ int ite44982 = 0;
                if(x42046) {
                  int x54455 = found7824;
                  int x54456 = !(x54455);
                  ite44982 = x54456;
                } else {
                  
                  ite44982 = 0;
                };
                int x42048 = ite44982;
                if (!(x42048)) break; 
                
                struct AGGRecord_Q16GRPRecord1* x8489 = current8481;
                struct Q16GRPRecord1* x7832 = x8489->key;
                /* VAR */ int ite45001 = 0;
                if(((x7832->P_BRAND)==(x30949))) {
                  ite45001 = ((x7832->P_TYPE)==(x30951));
                } else {
                  
                  ite45001 = 0;
                };
                int x42060 = ite45001;
                /* VAR */ int ite45008 = 0;
                if(x42060) {
                  ite45008 = ((x7832->P_SIZE)==(x30953));
                } else {
                  
                  ite45008 = 0;
                };
                int x42062 = ite45008;
                /* VAR */ int ite45015 = 0;
                if(x42062) {
                  ite45015 = ((x7832->PS_SUPPKEY)==(x30955));
                } else {
                  
                  ite45015 = 0;
                };
                int x42064 = ite45015;
                if(x42064) {
                  found7824 = 1;
                } else {
                  
                  struct AGGRecord_Q16GRPRecord1* x8495 = current8481;
                  struct AGGRecord_Q16GRPRecord1* x9809 = x8495->next;
                  current8481 = x9809;
                };
              };
              int x7840 = found7824;
              int x7841 = !(x7840);
              /* VAR */ struct AGGRecord_Q16GRPRecord1** ite42073 = 0;
              if(x7841) {
                ite42073 = NULL;
              } else {
                
                struct AGGRecord_Q16GRPRecord1* x42075 = current8481;
                ite42073 = x42075;
              };
              struct AGGRecord_Q16GRPRecord1** x7847 = ite42073;
              /* VAR */ struct AGGRecord_Q16GRPRecord1* ite42081 = 0;
              if((x7847!=(NULL))) {
                ite42081 = x7847;
              } else {
                
                /* VAR */ double x42083 = 0;
                /* VAR */ double x42084 = 0;
                double x42085 = x42084;
                int x42086 = x53970;
                struct AGGRecord_Q16GRPRecord1* x42087 = &(x53971[x42086]);
                x42087->key = x18998;
                x42087->aggs = x42085;
                x42087->next = NULL;
                int x42091 = x53970;
                x53970 = (x42091+(1));
                /* VAR */ int ite45052 = 0;
                if((x7814==(NULL))) {
                  ite45052 = 1;
                } else {
                  
                  ite45052 = ((x7814->key)==(NULL));
                };
                int x42096 = ite45052;
                if(x42096) {
                  x42087->next = NULL;
                  /* VAR */ int ite45064 = 0;
                  if((x42087==(NULL))) {
                    ite45064 = 1;
                  } else {
                    
                    ite45064 = ((x42087->key)==(NULL));
                  };
                  int x42101 = ite45064;
                  if(x42101) {
                    *(x53685 + x6201) = (const struct AGGRecord_Q16GRPRecord1){0};
                  } else {
                    
                    struct AGGRecord_Q16GRPRecord1 x22545 = *x42087;
                    *(x53685 + x6201) = x22545;
                    struct AGGRecord_Q16GRPRecord1* x22547 = &(x53685[x6201]);
                    x42087 = x22547;
                  };
                } else {
                  
                  struct AGGRecord_Q16GRPRecord1* x9829 = x7814->next;
                  x42087->next = x9829;
                  x7814->next = x42087;
                };
                ite42081 = x42087;
              };
              struct AGGRecord_Q16GRPRecord1* x6216 = ite42081;
              double x16271 = x6216->aggs;
              x6216->aggs = x16271;
            };
          };
        };
      };
      int x2058 = x54184;
      x54184 = (x2058+(1));
    };
    int x54555 = x53684;
    int x37268 = 0;
    for(; x37268 < (x54555+(1)) ; x37268 += 1) {
      
      struct AGGRecord_Q16GRPRecord1* x37269 = &(x53685[x37268]);
      /* VAR */ struct AGGRecord_Q16GRPRecord1* x37270 = x37269;
      while(1) {
        
        struct AGGRecord_Q16GRPRecord1* x8597 = x37270;
        /* VAR */ int ite45254 = 0;
        if((x8597!=(NULL))) {
          ite45254 = ((x8597->key)!=(NULL));
        } else {
          
          ite45254 = 0;
        };
        int x42239 = ite45254;
        if (!(x42239)) break; 
        
        struct AGGRecord_Q16GRPRecord1* x8599 = x37270;
        struct AGGRecord_Q16GRPRecord1* x9912 = x8599->next;
        struct AGGRecord_Q16GRPRecord1* x8601 = x37270;
        struct Q16GRPRecord1* x7947 = x8601->key;
        int x19075 = x53999;
        struct Q16GRPRecord2* x19076 = &(x54000[x19075]);
        x19076->P_BRAND = (x7947->P_BRAND);
        x19076->P_TYPE = (x7947->P_TYPE);
        x19076->P_SIZE = (x7947->P_SIZE);
        int x19080 = x53999;
        x53999 = (x19080+(1));
        int x31064 = x19076->P_BRAND;
        int x31066 = x19076->P_TYPE;
        int x31069 = x19076->P_SIZE;
        int x7954 = (((x31064*(10000))+((x31066*(100))))+(x31069))&(1048575);
        struct AGGRecord_Q16GRPRecord2* x7955 = &(x53678[x7954]);
        int x7956 = x53677;
        if((x7954>(x7956))) {
          x53677 = x7954;
        };
        /* VAR */ struct AGGRecord_Q16GRPRecord2* x7964 = x7955;
        /* VAR */ int x7965 = 0;
        while(1) {
          
          struct AGGRecord_Q16GRPRecord2* x8626 = x7964;
          /* VAR */ int ite45296 = 0;
          if((x8626!=(NULL))) {
            ite45296 = ((x8626->key)!=(NULL));
          } else {
            
            ite45296 = 0;
          };
          int x42274 = ite45296;
          /* VAR */ int ite45305 = 0;
          if(x42274) {
            int x54763 = x7965;
            int x54764 = !(x54763);
            ite45305 = x54764;
          } else {
            
            ite45305 = 0;
          };
          int x42276 = ite45305;
          if (!(x42276)) break; 
          
          struct AGGRecord_Q16GRPRecord2* x8631 = x7964;
          struct Q16GRPRecord2* x7904 = x8631->key;
          /* VAR */ int ite45322 = 0;
          if(((x7904->P_BRAND)==(x31064))) {
            ite45322 = ((x7904->P_TYPE)==(x31066));
          } else {
            
            ite45322 = 0;
          };
          int x42286 = ite45322;
          /* VAR */ int ite45329 = 0;
          if(x42286) {
            ite45329 = ((x7904->P_SIZE)==(x31069));
          } else {
            
            ite45329 = 0;
          };
          int x42288 = ite45329;
          if(x42288) {
            x7965 = 1;
          } else {
            
            struct AGGRecord_Q16GRPRecord2* x8637 = x7964;
            struct AGGRecord_Q16GRPRecord2* x9948 = x8637->next;
            x7964 = x9948;
          };
        };
        int x7981 = x7965;
        int x7982 = !(x7981);
        /* VAR */ struct AGGRecord_Q16GRPRecord2** ite42297 = 0;
        if(x7982) {
          ite42297 = NULL;
        } else {
          
          struct AGGRecord_Q16GRPRecord2* x42299 = x7964;
          ite42297 = x42299;
        };
        struct AGGRecord_Q16GRPRecord2** x7983 = ite42297;
        /* VAR */ struct AGGRecord_Q16GRPRecord2* ite42305 = 0;
        if((x7983!=(NULL))) {
          ite42305 = x7983;
        } else {
          
          /* VAR */ double x42307 = 0;
          /* VAR */ double x42308 = 0;
          double x42309 = x42308;
          int x42310 = x54019;
          struct AGGRecord_Q16GRPRecord2* x42311 = &(x54020[x42310]);
          x42311->key = x19076;
          x42311->aggs = x42309;
          x42311->next = NULL;
          int x42315 = x54019;
          x54019 = (x42315+(1));
          /* VAR */ int ite45366 = 0;
          if((x7955==(NULL))) {
            ite45366 = 1;
          } else {
            
            ite45366 = ((x7955->key)==(NULL));
          };
          int x42320 = ite45366;
          if(x42320) {
            x42311->next = NULL;
            /* VAR */ int ite45378 = 0;
            if((x42311==(NULL))) {
              ite45378 = 1;
            } else {
              
              ite45378 = ((x42311->key)==(NULL));
            };
            int x42325 = ite45378;
            if(x42325) {
              *(x53678 + x7954) = (const struct AGGRecord_Q16GRPRecord2){0};
            } else {
              
              struct AGGRecord_Q16GRPRecord2 x22628 = *x42311;
              *(x53678 + x7954) = x22628;
              struct AGGRecord_Q16GRPRecord2* x22630 = &(x53678[x7954]);
              x42311 = x22630;
            };
          } else {
            
            struct AGGRecord_Q16GRPRecord2* x9968 = x7955->next;
            x42311->next = x9968;
            x7955->next = x42311;
          };
          ite42305 = x42311;
        };
        struct AGGRecord_Q16GRPRecord2* x7990 = ite42305;
        double x16335 = x7990->aggs;
        x7990->aggs = (x16335+(1.0));
        x37270 = x9912;
      };
    };
    int x54854 = x53677;
    int x37389 = 0;
    for(; x37389 < (x54854+(1)) ; x37389 += 1) {
      
      struct AGGRecord_Q16GRPRecord2* x37390 = &(x53678[x37389]);
      /* VAR */ struct AGGRecord_Q16GRPRecord2* x37391 = x37390;
      while(1) {
        
        struct AGGRecord_Q16GRPRecord2* x8681 = x37391;
        /* VAR */ int ite45432 = 0;
        if((x8681!=(NULL))) {
          ite45432 = ((x8681->key)!=(NULL));
        } else {
          
          ite45432 = 0;
        };
        int x42365 = ite45432;
        if (!(x42365)) break; 
        
        struct AGGRecord_Q16GRPRecord2* x8683 = x37391;
        struct AGGRecord_Q16GRPRecord2* x9994 = x8683->next;
        struct AGGRecord_Q16GRPRecord2* x8685 = x37391;
        g_tree_insert(x54270, x8685, x8685);
        x37391 = x9994;
      };
    };
    while(1) {
      
      int x2177 = x54271;
      int x490 = !(x2177);
      /* VAR */ int ite45449 = 0;
      if(x490) {
        int x54900 = g_tree_nnodes(x54270);
        ite45449 = (x54900!=(0));
      } else {
        
        ite45449 = 0;
      };
      int x42375 = ite45449;
      if (!(x42375)) break; 
      
      void* x25565 = NULL;
      void** x25573 = &(x25565);
      g_tree_foreach(x54270, x25572, x25573);
      struct AGGRecord_Q16GRPRecord2* x25575 = (struct AGGRecord_Q16GRPRecord2*){x25565};
      int x25576 = g_tree_remove(x54270, x25575);
      if(0) {
        x54271 = 1;
      } else {
        
        struct Q16GRPRecord2* x503 = x25575->key;
        char* x25584 = g_array_index(x24501, char*, (x503->P_BRAND));
        char* x25586 = g_array_index(x24506, char*, (x503->P_TYPE));
        double x16376 = x25575->aggs;
        printf("%s|%s|%d|%.0f\n", x25584, x25586, (x503->P_SIZE), x16376);
        int x2199 = x54272;
        x54272 = (x2199+(1));
      };
    };
    int x54931 = x54272;
    printf("(%d rows)\n", x54931);
    struct timeval* x54933 = &x54053;
    gettimeofday(x54933, NULL);
    struct timeval* x54935 = &x54049;
    struct timeval* x54936 = &x54053;
    struct timeval* x54937 = &x54051;
    long x54938 = timeval_subtract(x54935, x54936, x54937);
    printf("Generated code run in %ld milliseconds.\n", x54938);
  };
}
/* ----------- FUNCTIONS ----------- */
int x53697(char** x24975, char** x24976) {
  char* x24977 = *x24976;
  char* x24978 = *x24975;
  int x34045 = strcmp(x24977, x24978);
  return (x34045<(0)); 
}

int x53710(char** x24988, char** x24989) {
  char* x24990 = *x24989;
  char* x24991 = *x24988;
  int x34058 = strcmp(x24990, x24991);
  return (x34058<(0)); 
}

int x54227(struct AGGRecord_Q16GRPRecord2* x240, struct AGGRecord_Q16GRPRecord2* x241) {
  double x16674 = x240->aggs;
  double x16676 = x241->aggs;
  /* VAR */ int ite41914 = 0;
  if((x16674<(x16676))) {
    ite41914 = 1;
  } else {
    
    double x41916 = x240->aggs;
    double x41917 = x241->aggs;
    /* VAR */ int ite41920 = 0;
    if((x41916>(x41917))) {
      ite41920 = -1;
    } else {
      
      struct Q16GRPRecord2* x41922 = x240->key;
      struct Q16GRPRecord2* x41924 = x241->key;
      /* VAR */ int x41927 = ((x41922->P_BRAND)-((x41924->P_BRAND)));
      int x41928 = x41927;
      if((x41928==(0))) {
        x41927 = ((x41922->P_TYPE)-((x41924->P_TYPE)));
        int x262 = x41927;
        if((x262==(0))) {
          x41927 = ((x41922->P_SIZE)-((x41924->P_SIZE)));
        };
      };
      int x41942 = x41927;
      ite41920 = x41942;
    };
    int x41919 = ite41920;
    ite41914 = x41919;
  };
  int x272 = ite41914;
  return x272; 
}

int x25572(void* x25566, void* x25567, void* x25568) {
  pointer_assign(((struct AGGRecord_Q16GRPRecord2**){x25568}), ((struct AGGRecord_Q16GRPRecord2*){x25567}));
  return 1; 
}
