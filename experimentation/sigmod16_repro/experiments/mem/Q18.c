#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dblab_clib.h" 
struct Q18GRPRecord;
struct AGGRecord_Q18GRPRecord;
struct Q18GRPRecord {
  char* C_NAME;
  numeric_int_t C_CUSTKEY;
  numeric_int_t O_ORDERKEY;
  numeric_int_t O_ORDERDATE;
  double O_TOTALPRICE;
};

struct AGGRecord_Q18GRPRecord {
  struct Q18GRPRecord* key;
  double aggs;
};


numeric_int_t x750325(struct Q18GRPRecord* x736578);

boolean_t x750353(struct Q18GRPRecord* x736583, struct Q18GRPRecord* x736584);

numeric_int_t x750513(struct AGGRecord_Q18GRPRecord* x724780, struct AGGRecord_Q18GRPRecord* x724781);

numeric_int_t x736808(void* x736802, void* x736803, void* x736804);

int main(int argc, char** argv) {
  /* VAR */ long mallocSym_734605_751952 = 0L;
  /* VAR */ long mallocSym_750397_751953 = 0L;
  /* VAR */ long mallocSym_734658_751954 = 0L;
  /* VAR */ long mallocSym_734493_751955 = 0L;
  /* VAR */ long mallocSym_734220_751956 = 0L;
  /* VAR */ long mallocSym_750400_751957 = 0L;
  /* VAR */ long mallocSym_734409_751958 = 0L;
  /* VAR */ long mallocSym_734514_751959 = 0L;
  /* VAR */ long mallocSym_734219_751960 = 0L;
  /* VAR */ long mallocSym_734676_751961 = 0L;
  /* VAR */ long mallocSym_734406_751962 = 0L;
  /* VAR */ long mallocSym_734408_751963 = 0L;
  /* VAR */ long mallocSym_734533_751964 = 0L;
  /* VAR */ long mallocSym_734584_751965 = 0L;
  /* VAR */ long mallocSym_750399_751966 = 0L;
  /* VAR */ long mallocSym_734657_751967 = 0L;
  /* VAR */ long mallocSym_750449_751968 = 0L;
  /* VAR */ long mallocSym_735327_751969 = 0L;
  /* VAR */ long mallocSym_734534_751970 = 0L;
  /* VAR */ long mallocSym_734373_751971 = 0L;
  /* VAR */ long mallocSym_734477_751972 = 0L;
  /* VAR */ long mallocSym_734642_751973 = 0L;
  /* VAR */ long mallocSym_735345_751974 = 0L;
  /* VAR */ long mallocSym_734568_751975 = 0L;
  /* VAR */ long mallocSym_734389_751976 = 0L;
  /* VAR */ long mallocSym_734626_751977 = 0L;
  /* VAR */ long mallocSym_734659_751978 = 0L;
  /* VAR */ long mallocSym_750432_751979 = 0L;
  /* VAR */ long mallocSym_734407_751980 = 0L;
  /* VAR */ long mallocSym_734698_751981 = 0L;
  /* VAR */ long mallocSym_734660_751982 = 0L;
  /* VAR */ long mallocSym_750398_751983 = 0L;
  /* VAR */ long mallocSym_734683_751984 = 0L;
  /* VAR */ long mallocSym_750425_751985 = 0L;
  /* VAR */ long mallocSym_734357_751986 = 0L;
  FILE* x732949 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ numeric_int_t x732950 = 0;
  numeric_int_t x732951 = x732950;
  numeric_int_t* x732952 = &x732951;
  numeric_int_t x732953 = fscanf(x732949, "%d", x732952);
  pclose(x732949);
  numeric_int_t* x751993 = (numeric_int_t*)malloc(x732951 * sizeof(numeric_int_t));
  memset(x751993, 0, x732951 * sizeof(numeric_int_t));
  long x751994 = mallocSym_734219_751960;
  long x751995 = (long){x732951};
  mallocSym_734219_751960 = (x751994+(x751995));
  double* x751998 = (double*)malloc(x732951 * sizeof(double));
  memset(x751998, 0, x732951 * sizeof(double));
  long x751999 = mallocSym_734220_751956;
  mallocSym_734220_751956 = (x751999+(x751995));
  numeric_int_t x732958 = O_RDONLY;
  numeric_int_t x732959 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x732958);
  struct stat x732960 = (struct stat){0};
  /* VAR */ struct stat x732961 = x732960;
  struct stat x732962 = x732961;
  struct stat* x732963 = &x732962;
  numeric_int_t x732964 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x732963);
  numeric_int_t x732966 = PROT_READ;
  numeric_int_t x732967 = MAP_PRIVATE;
  char* x724636 = mmap(NULL, (x732963->st_size), x732966, x732967, x732959, 0);
  /* VAR */ numeric_int_t x724637 = 0;
  while(1) {
    
    numeric_int_t x724638 = x724637;
    /* VAR */ boolean_t ite746906 = 0;
    if((x724638<(x732951))) {
      char x749473 = *x724636;
      ite746906 = (x749473!=('\0'));
    } else {
      
      ite746906 = 0;
    };
    boolean_t x745779 = ite746906;
    if (!(x745779)) break; 
    
    /* VAR */ numeric_int_t x732975 = 0;
    numeric_int_t x732976 = x732975;
    numeric_int_t* x732977 = &x732976;
    char* x732978 = strntoi_unchecked(x724636, x732977);
    x724636 = x732978;
    /* VAR */ numeric_int_t x732980 = 0;
    numeric_int_t x732981 = x732980;
    numeric_int_t* x732982 = &x732981;
    char* x732983 = strntoi_unchecked(x724636, x732982);
    x724636 = x732983;
    /* VAR */ numeric_int_t x732985 = 0;
    numeric_int_t x732986 = x732985;
    numeric_int_t* x732987 = &x732986;
    char* x732988 = strntoi_unchecked(x724636, x732987);
    x724636 = x732988;
    /* VAR */ numeric_int_t x732990 = 0;
    numeric_int_t x732991 = x732990;
    numeric_int_t* x732992 = &x732991;
    char* x732993 = strntoi_unchecked(x724636, x732992);
    x724636 = x732993;
    /* VAR */ double x732995 = 0.0;
    double x732996 = x732995;
    double* x732997 = &x732996;
    char* x732998 = strntod_unchecked(x724636, x732997);
    x724636 = x732998;
    /* VAR */ double x733000 = 0.0;
    double x733001 = x733000;
    double* x733002 = &x733001;
    char* x733003 = strntod_unchecked(x724636, x733002);
    x724636 = x733003;
    /* VAR */ double x733005 = 0.0;
    double x733006 = x733005;
    double* x733007 = &x733006;
    char* x733008 = strntod_unchecked(x724636, x733007);
    x724636 = x733008;
    /* VAR */ double x733010 = 0.0;
    double x733011 = x733010;
    double* x733012 = &x733011;
    char* x733013 = strntod_unchecked(x724636, x733012);
    x724636 = x733013;
    char x733015 = *x724636;
    /* VAR */ char x733016 = x733015;
    x724636 += 1;
    x724636 += 1;
    char x733020 = *x724636;
    /* VAR */ char x733021 = x733020;
    x724636 += 1;
    x724636 += 1;
    /* VAR */ numeric_int_t x733025 = 0;
    numeric_int_t x733026 = x733025;
    numeric_int_t* x733027 = &x733026;
    char* x733028 = strntoi_unchecked(x724636, x733027);
    x724636 = x733028;
    /* VAR */ numeric_int_t x733030 = 0;
    numeric_int_t x733031 = x733030;
    numeric_int_t* x733032 = &x733031;
    char* x733033 = strntoi_unchecked(x724636, x733032);
    x724636 = x733033;
    /* VAR */ numeric_int_t x733035 = 0;
    numeric_int_t x733036 = x733035;
    numeric_int_t* x733037 = &x733036;
    char* x733038 = strntoi_unchecked(x724636, x733037);
    x724636 = x733038;
    /* VAR */ numeric_int_t x733044 = 0;
    numeric_int_t x733045 = x733044;
    numeric_int_t* x733046 = &x733045;
    char* x733047 = strntoi_unchecked(x724636, x733046);
    x724636 = x733047;
    /* VAR */ numeric_int_t x733049 = 0;
    numeric_int_t x733050 = x733049;
    numeric_int_t* x733051 = &x733050;
    char* x733052 = strntoi_unchecked(x724636, x733051);
    x724636 = x733052;
    /* VAR */ numeric_int_t x733054 = 0;
    numeric_int_t x733055 = x733054;
    numeric_int_t* x733056 = &x733055;
    char* x733057 = strntoi_unchecked(x724636, x733056);
    x724636 = x733057;
    /* VAR */ numeric_int_t x733063 = 0;
    numeric_int_t x733064 = x733063;
    numeric_int_t* x733065 = &x733064;
    char* x733066 = strntoi_unchecked(x724636, x733065);
    x724636 = x733066;
    /* VAR */ numeric_int_t x733068 = 0;
    numeric_int_t x733069 = x733068;
    numeric_int_t* x733070 = &x733069;
    char* x733071 = strntoi_unchecked(x724636, x733070);
    x724636 = x733071;
    /* VAR */ numeric_int_t x733073 = 0;
    numeric_int_t x733074 = x733073;
    numeric_int_t* x733075 = &x733074;
    char* x733076 = strntoi_unchecked(x724636, x733075);
    x724636 = x733076;
    /* VAR */ char* x733082 = x724636;
    while(1) {
      
      char x733083 = *x724636;
      /* VAR */ boolean_t ite747026 = 0;
      if((x733083!=('|'))) {
        char x749592 = *x724636;
        ite747026 = (x749592!=('\n'));
      } else {
        
        ite747026 = 0;
      };
      boolean_t x745892 = ite747026;
      if (!(x745892)) break; 
      
      x724636 += 1;
    };
    char* x733090 = x733082;
    numeric_int_t x733091 = x724636 - x733090;
    numeric_int_t x733092 = x733091+(1);
    char* x752148 = (char*)malloc(x733092 * sizeof(char));
    memset(x752148, 0, x733092 * sizeof(char));
    long x752149 = mallocSym_734357_751986;
    mallocSym_734357_751986 = (x752149+(((long){x733092})));
    char* x733095 = x733082;
    char* x733096 = strncpy(x752148, x733095, x733091);
    x724636 += 1;
    /* VAR */ char* x733098 = x724636;
    while(1) {
      
      char x733099 = *x724636;
      /* VAR */ boolean_t ite747047 = 0;
      if((x733099!=('|'))) {
        char x749612 = *x724636;
        ite747047 = (x749612!=('\n'));
      } else {
        
        ite747047 = 0;
      };
      boolean_t x745906 = ite747047;
      if (!(x745906)) break; 
      
      x724636 += 1;
    };
    char* x733106 = x733098;
    numeric_int_t x733107 = x724636 - x733106;
    numeric_int_t x733108 = x733107+(1);
    char* x752172 = (char*)malloc(x733108 * sizeof(char));
    memset(x752172, 0, x733108 * sizeof(char));
    long x752173 = mallocSym_734373_751971;
    mallocSym_734373_751971 = (x752173+(((long){x733108})));
    char* x733111 = x733098;
    char* x733112 = strncpy(x752172, x733111, x733107);
    x724636 += 1;
    /* VAR */ char* x733114 = x724636;
    while(1) {
      
      char x733115 = *x724636;
      /* VAR */ boolean_t ite747068 = 0;
      if((x733115!=('|'))) {
        char x749632 = *x724636;
        ite747068 = (x749632!=('\n'));
      } else {
        
        ite747068 = 0;
      };
      boolean_t x745920 = ite747068;
      if (!(x745920)) break; 
      
      x724636 += 1;
    };
    char* x733122 = x733114;
    numeric_int_t x733123 = x724636 - x733122;
    numeric_int_t x733124 = x733123+(1);
    char* x752196 = (char*)malloc(x733124 * sizeof(char));
    memset(x752196, 0, x733124 * sizeof(char));
    long x752197 = mallocSym_734389_751976;
    mallocSym_734389_751976 = (x752197+(((long){x733124})));
    char* x733127 = x733114;
    char* x733128 = strncpy(x752196, x733127, x733123);
    x724636 += 1;
    numeric_int_t x724659 = x724637;
    *(x751993 + x724659) = x732976;
    *(x751998 + x724659) = x732996;
    numeric_int_t x724661 = x724637;
    x724637 = (x724661+(1));
  };
  FILE* x733136 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ numeric_int_t x733137 = 0;
  numeric_int_t x733138 = x733137;
  numeric_int_t* x733139 = &x733138;
  numeric_int_t x733140 = fscanf(x733136, "%d", x733139);
  pclose(x733136);
  numeric_int_t* x752216 = (numeric_int_t*)malloc(x733138 * sizeof(numeric_int_t));
  memset(x752216, 0, x733138 * sizeof(numeric_int_t));
  long x752217 = mallocSym_734406_751962;
  long x752218 = (long){x733138};
  mallocSym_734406_751962 = (x752217+(x752218));
  numeric_int_t* x752221 = (numeric_int_t*)malloc(x733138 * sizeof(numeric_int_t));
  memset(x752221, 0, x733138 * sizeof(numeric_int_t));
  long x752222 = mallocSym_734407_751980;
  mallocSym_734407_751980 = (x752222+(x752218));
  double* x752225 = (double*)malloc(x733138 * sizeof(double));
  memset(x752225, 0, x733138 * sizeof(double));
  long x752226 = mallocSym_734408_751963;
  mallocSym_734408_751963 = (x752226+(x752218));
  numeric_int_t* x752229 = (numeric_int_t*)malloc(x733138 * sizeof(numeric_int_t));
  memset(x752229, 0, x733138 * sizeof(numeric_int_t));
  long x752230 = mallocSym_734409_751958;
  mallocSym_734409_751958 = (x752230+(x752218));
  numeric_int_t x733147 = O_RDONLY;
  numeric_int_t x733148 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x733147);
  /* VAR */ struct stat x733149 = x732960;
  struct stat x733150 = x733149;
  struct stat* x733151 = &x733150;
  numeric_int_t x733152 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x733151);
  numeric_int_t x733154 = PROT_READ;
  numeric_int_t x733155 = MAP_PRIVATE;
  char* x724667 = mmap(NULL, (x733151->st_size), x733154, x733155, x733148, 0);
  /* VAR */ numeric_int_t x724668 = 0;
  while(1) {
    
    numeric_int_t x724669 = x724668;
    /* VAR */ boolean_t ite747115 = 0;
    if((x724669<(x733138))) {
      char x749678 = *x724667;
      ite747115 = (x749678!=('\0'));
    } else {
      
      ite747115 = 0;
    };
    boolean_t x745960 = ite747115;
    if (!(x745960)) break; 
    
    /* VAR */ numeric_int_t x733163 = 0;
    numeric_int_t x733164 = x733163;
    numeric_int_t* x733165 = &x733164;
    char* x733166 = strntoi_unchecked(x724667, x733165);
    x724667 = x733166;
    /* VAR */ numeric_int_t x733168 = 0;
    numeric_int_t x733169 = x733168;
    numeric_int_t* x733170 = &x733169;
    char* x733171 = strntoi_unchecked(x724667, x733170);
    x724667 = x733171;
    char x733173 = *x724667;
    /* VAR */ char x733174 = x733173;
    x724667 += 1;
    x724667 += 1;
    /* VAR */ double x733178 = 0.0;
    double x733179 = x733178;
    double* x733180 = &x733179;
    char* x733181 = strntod_unchecked(x724667, x733180);
    x724667 = x733181;
    /* VAR */ numeric_int_t x733183 = 0;
    numeric_int_t x733184 = x733183;
    numeric_int_t* x733185 = &x733184;
    char* x733186 = strntoi_unchecked(x724667, x733185);
    x724667 = x733186;
    /* VAR */ numeric_int_t x733188 = 0;
    numeric_int_t x733189 = x733188;
    numeric_int_t* x733190 = &x733189;
    char* x733191 = strntoi_unchecked(x724667, x733190);
    x724667 = x733191;
    /* VAR */ numeric_int_t x733193 = 0;
    numeric_int_t x733194 = x733193;
    numeric_int_t* x733195 = &x733194;
    char* x733196 = strntoi_unchecked(x724667, x733195);
    x724667 = x733196;
    /* VAR */ char* x733202 = x724667;
    while(1) {
      
      char x733203 = *x724667;
      /* VAR */ boolean_t ite747167 = 0;
      if((x733203!=('|'))) {
        char x749729 = *x724667;
        ite747167 = (x749729!=('\n'));
      } else {
        
        ite747167 = 0;
      };
      boolean_t x746005 = ite747167;
      if (!(x746005)) break; 
      
      x724667 += 1;
    };
    char* x733210 = x733202;
    numeric_int_t x733211 = x724667 - x733210;
    numeric_int_t x733212 = x733211+(1);
    char* x752310 = (char*)malloc(x733212 * sizeof(char));
    memset(x752310, 0, x733212 * sizeof(char));
    long x752311 = mallocSym_734477_751972;
    mallocSym_734477_751972 = (x752311+(((long){x733212})));
    char* x733215 = x733202;
    char* x733216 = strncpy(x752310, x733215, x733211);
    x724667 += 1;
    /* VAR */ char* x733218 = x724667;
    while(1) {
      
      char x733219 = *x724667;
      /* VAR */ boolean_t ite747188 = 0;
      if((x733219!=('|'))) {
        char x749749 = *x724667;
        ite747188 = (x749749!=('\n'));
      } else {
        
        ite747188 = 0;
      };
      boolean_t x746019 = ite747188;
      if (!(x746019)) break; 
      
      x724667 += 1;
    };
    char* x733226 = x733218;
    numeric_int_t x733227 = x724667 - x733226;
    numeric_int_t x733228 = x733227+(1);
    char* x752334 = (char*)malloc(x733228 * sizeof(char));
    memset(x752334, 0, x733228 * sizeof(char));
    long x752335 = mallocSym_734493_751955;
    mallocSym_734493_751955 = (x752335+(((long){x733228})));
    char* x733231 = x733218;
    char* x733232 = strncpy(x752334, x733231, x733227);
    x724667 += 1;
    /* VAR */ numeric_int_t x733234 = 0;
    numeric_int_t x733235 = x733234;
    numeric_int_t* x733236 = &x733235;
    char* x733237 = strntoi_unchecked(x724667, x733236);
    x724667 = x733237;
    /* VAR */ char* x733239 = x724667;
    while(1) {
      
      char x733240 = *x724667;
      /* VAR */ boolean_t ite747214 = 0;
      if((x733240!=('|'))) {
        char x749774 = *x724667;
        ite747214 = (x749774!=('\n'));
      } else {
        
        ite747214 = 0;
      };
      boolean_t x746038 = ite747214;
      if (!(x746038)) break; 
      
      x724667 += 1;
    };
    char* x733247 = x733239;
    numeric_int_t x733248 = x724667 - x733247;
    numeric_int_t x733249 = x733248+(1);
    char* x752363 = (char*)malloc(x733249 * sizeof(char));
    memset(x752363, 0, x733249 * sizeof(char));
    long x752364 = mallocSym_734514_751959;
    mallocSym_734514_751959 = (x752364+(((long){x733249})));
    char* x733252 = x733239;
    char* x733253 = strncpy(x752363, x733252, x733248);
    x724667 += 1;
    numeric_int_t x724683 = x724668;
    *(x752216 + x724683) = x733164;
    *(x752221 + x724683) = x733169;
    *(x752225 + x724683) = x733179;
    *(x752229 + x724683) = (((x733184*(10000))+((x733189*(100))))+(x733194));
    numeric_int_t x724685 = x724668;
    x724668 = (x724685+(1));
  };
  FILE* x733263 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ numeric_int_t x733264 = 0;
  numeric_int_t x733265 = x733264;
  numeric_int_t* x733266 = &x733265;
  numeric_int_t x733267 = fscanf(x733263, "%d", x733266);
  pclose(x733263);
  numeric_int_t* x752385 = (numeric_int_t*)malloc(x733265 * sizeof(numeric_int_t));
  memset(x752385, 0, x733265 * sizeof(numeric_int_t));
  long x752386 = mallocSym_734533_751964;
  long x752387 = (long){x733265};
  mallocSym_734533_751964 = (x752386+(x752387));
  char** x752390 = (char**)malloc(x733265 * sizeof(char*));
  memset(x752390, 0, x733265 * sizeof(char*));
  long x752391 = mallocSym_734534_751970;
  mallocSym_734534_751970 = (x752391+(x752387));
  numeric_int_t x733272 = O_RDONLY;
  numeric_int_t x733273 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x733272);
  /* VAR */ struct stat x733274 = x732960;
  struct stat x733275 = x733274;
  struct stat* x733276 = &x733275;
  numeric_int_t x733277 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x733276);
  numeric_int_t x733279 = PROT_READ;
  numeric_int_t x733280 = MAP_PRIVATE;
  char* x724691 = mmap(NULL, (x733276->st_size), x733279, x733280, x733273, 0);
  /* VAR */ numeric_int_t x724692 = 0;
  while(1) {
    
    numeric_int_t x724693 = x724692;
    /* VAR */ boolean_t ite747261 = 0;
    if((x724693<(x733265))) {
      char x749820 = *x724691;
      ite747261 = (x749820!=('\0'));
    } else {
      
      ite747261 = 0;
    };
    boolean_t x746078 = ite747261;
    if (!(x746078)) break; 
    
    /* VAR */ numeric_int_t x733288 = 0;
    numeric_int_t x733289 = x733288;
    numeric_int_t* x733290 = &x733289;
    char* x733291 = strntoi_unchecked(x724691, x733290);
    x724691 = x733291;
    /* VAR */ char* x733293 = x724691;
    while(1) {
      
      char x733294 = *x724691;
      /* VAR */ boolean_t ite747279 = 0;
      if((x733294!=('|'))) {
        char x749837 = *x724691;
        ite747279 = (x749837!=('\n'));
      } else {
        
        ite747279 = 0;
      };
      boolean_t x746089 = ite747279;
      if (!(x746089)) break; 
      
      x724691 += 1;
    };
    char* x733301 = x733293;
    numeric_int_t x733302 = x724691 - x733301;
    numeric_int_t x733303 = x733302+(1);
    char* x752437 = (char*)malloc(x733303 * sizeof(char));
    memset(x752437, 0, x733303 * sizeof(char));
    long x752438 = mallocSym_734568_751975;
    mallocSym_734568_751975 = (x752438+(((long){x733303})));
    char* x733306 = x733293;
    char* x733307 = strncpy(x752437, x733306, x733302);
    x724691 += 1;
    /* VAR */ char* x733309 = x724691;
    while(1) {
      
      char x733310 = *x724691;
      /* VAR */ boolean_t ite747300 = 0;
      if((x733310!=('|'))) {
        char x749857 = *x724691;
        ite747300 = (x749857!=('\n'));
      } else {
        
        ite747300 = 0;
      };
      boolean_t x746103 = ite747300;
      if (!(x746103)) break; 
      
      x724691 += 1;
    };
    char* x733317 = x733309;
    numeric_int_t x733318 = x724691 - x733317;
    numeric_int_t x733319 = x733318+(1);
    char* x752461 = (char*)malloc(x733319 * sizeof(char));
    memset(x752461, 0, x733319 * sizeof(char));
    long x752462 = mallocSym_734584_751965;
    mallocSym_734584_751965 = (x752462+(((long){x733319})));
    char* x733322 = x733309;
    char* x733323 = strncpy(x752461, x733322, x733318);
    x724691 += 1;
    /* VAR */ numeric_int_t x733325 = 0;
    numeric_int_t x733326 = x733325;
    numeric_int_t* x733327 = &x733326;
    char* x733328 = strntoi_unchecked(x724691, x733327);
    x724691 = x733328;
    /* VAR */ char* x733330 = x724691;
    while(1) {
      
      char x733331 = *x724691;
      /* VAR */ boolean_t ite747326 = 0;
      if((x733331!=('|'))) {
        char x749882 = *x724691;
        ite747326 = (x749882!=('\n'));
      } else {
        
        ite747326 = 0;
      };
      boolean_t x746122 = ite747326;
      if (!(x746122)) break; 
      
      x724691 += 1;
    };
    char* x733338 = x733330;
    numeric_int_t x733339 = x724691 - x733338;
    numeric_int_t x733340 = x733339+(1);
    char* x752490 = (char*)malloc(x733340 * sizeof(char));
    memset(x752490, 0, x733340 * sizeof(char));
    long x752491 = mallocSym_734605_751952;
    mallocSym_734605_751952 = (x752491+(((long){x733340})));
    char* x733343 = x733330;
    char* x733344 = strncpy(x752490, x733343, x733339);
    x724691 += 1;
    /* VAR */ double x733346 = 0.0;
    double x733347 = x733346;
    double* x733348 = &x733347;
    char* x733349 = strntod_unchecked(x724691, x733348);
    x724691 = x733349;
    /* VAR */ char* x733351 = x724691;
    while(1) {
      
      char x733352 = *x724691;
      /* VAR */ boolean_t ite747352 = 0;
      if((x733352!=('|'))) {
        char x749907 = *x724691;
        ite747352 = (x749907!=('\n'));
      } else {
        
        ite747352 = 0;
      };
      boolean_t x746141 = ite747352;
      if (!(x746141)) break; 
      
      x724691 += 1;
    };
    char* x733359 = x733351;
    numeric_int_t x733360 = x724691 - x733359;
    numeric_int_t x733361 = x733360+(1);
    char* x752519 = (char*)malloc(x733361 * sizeof(char));
    memset(x752519, 0, x733361 * sizeof(char));
    long x752520 = mallocSym_734626_751977;
    mallocSym_734626_751977 = (x752520+(((long){x733361})));
    char* x733364 = x733351;
    char* x733365 = strncpy(x752519, x733364, x733360);
    x724691 += 1;
    /* VAR */ char* x733367 = x724691;
    while(1) {
      
      char x733368 = *x724691;
      /* VAR */ boolean_t ite747373 = 0;
      if((x733368!=('|'))) {
        char x749927 = *x724691;
        ite747373 = (x749927!=('\n'));
      } else {
        
        ite747373 = 0;
      };
      boolean_t x746155 = ite747373;
      if (!(x746155)) break; 
      
      x724691 += 1;
    };
    char* x733375 = x733367;
    numeric_int_t x733376 = x724691 - x733375;
    numeric_int_t x733377 = x733376+(1);
    char* x752543 = (char*)malloc(x733377 * sizeof(char));
    memset(x752543, 0, x733377 * sizeof(char));
    long x752544 = mallocSym_734642_751973;
    mallocSym_734642_751973 = (x752544+(((long){x733377})));
    char* x733380 = x733367;
    char* x733381 = strncpy(x752543, x733380, x733376);
    x724691 += 1;
    numeric_int_t x724706 = x724692;
    *(x752385 + x724706) = x733289;
    *(x752390 + x724706) = x752437;
    numeric_int_t x724708 = x724692;
    x724692 = (x724708+(1));
  };
  numeric_int_t x724713 = 0;
  for(; x724713 < 1 ; x724713 += 1) {
    
    GHashTable* x750396 = g_hash_table_new(x750325, x750353);
    numeric_int_t* x753038 = (numeric_int_t*)malloc(60000000 * sizeof(numeric_int_t));
    memset(x753038, 0, 60000000 * sizeof(numeric_int_t));
    long x753039 = mallocSym_750397_751953;
    long x753040 = (long){60000000};
    mallocSym_750397_751953 = (x753039+(x753040));
    numeric_int_t* x753043 = (numeric_int_t*)malloc(60000000 * sizeof(numeric_int_t));
    memset(x753043, 0, 60000000 * sizeof(numeric_int_t));
    long x753044 = mallocSym_750398_751983;
    mallocSym_750398_751983 = (x753044+(x753040));
    double* x753047 = (double*)malloc(60000000 * sizeof(double));
    memset(x753047, 0, 60000000 * sizeof(double));
    long x753048 = mallocSym_750399_751966;
    mallocSym_750399_751966 = (x753048+(x753040));
    numeric_int_t* x753051 = (numeric_int_t*)malloc(60000000 * sizeof(numeric_int_t));
    memset(x753051, 0, 60000000 * sizeof(numeric_int_t));
    long x753052 = mallocSym_750400_751957;
    mallocSym_750400_751957 = (x753052+(x753040));
    numeric_int_t x744460 = 0;
    for(; x744460 < x733138 ; x744460 += 1) {
      
      numeric_int_t x744461 = x752216[x744460];
      numeric_int_t x744462 = x744461%(60000000);
      numeric_int_t x744463 = x752216[x744460];
      *(x753038 + x744462) = x744463;
      numeric_int_t x744465 = x752221[x744460];
      *(x753043 + x744462) = x744465;
      double x744467 = x752225[x744460];
      *(x753047 + x744462) = x744467;
      numeric_int_t x744469 = x752229[x744460];
      *(x753051 + x744462) = x744469;
    };
    /* VAR */ numeric_int_t x750424 = 0;
    double* x753079 = (double*)malloc(49000000 * sizeof(double));
    memset(x753079, 0, 49000000 * sizeof(double));
    long x753080 = mallocSym_750425_751985;
    mallocSym_750425_751985 = (x753080+(((long){49000000})));
    numeric_int_t x744477 = 0;
    for(; x744477 < 49000000 ; x744477 += 1) {
      
      *(x753079 + x744477) = 0;
    };
    /* VAR */ numeric_int_t x750431 = 0;
    struct Q18GRPRecord* x753090 = (struct Q18GRPRecord*)malloc(60000000 * sizeof(struct Q18GRPRecord));
    memset(x753090, 0, 60000000 * sizeof(struct Q18GRPRecord));
    long x753091 = mallocSym_750432_751979;
    mallocSym_750432_751979 = (x753091+(x753040));
    /* VAR */ numeric_int_t x750433 = 0;
    while(1) {
      
      numeric_int_t x732407 = x750433;
      if (!((x732407<(60000000)))) break; 
      
      numeric_int_t x732409 = x750433;
      struct Q18GRPRecord* x753099 = (struct Q18GRPRecord*)malloc(1 * sizeof(struct Q18GRPRecord));
      memset(x753099, 0, 1 * sizeof(struct Q18GRPRecord));
      long x753100 = mallocSym_735327_751969;
      mallocSym_735327_751969 = (x753100+(((long){1})));
      x753099->C_NAME = ""; x753099->C_CUSTKEY = 0; x753099->O_ORDERKEY = 0; x753099->O_ORDERDATE = 0; x753099->O_TOTALPRICE = 0.0;
      struct Q18GRPRecord x734690 = *x753099;
      *(x753090 + x732409) = x734690;
      struct Q18GRPRecord* x734692 = &(x753090[x732409]);
      x753099 = x734692;
      numeric_int_t x732412 = x750433;
      x750433 = (x732412+(1));
    };
    /* VAR */ numeric_int_t x750448 = 0;
    struct AGGRecord_Q18GRPRecord* x753114 = (struct AGGRecord_Q18GRPRecord*)malloc(60000000 * sizeof(struct AGGRecord_Q18GRPRecord));
    memset(x753114, 0, 60000000 * sizeof(struct AGGRecord_Q18GRPRecord));
    long x753115 = mallocSym_750449_751968;
    mallocSym_750449_751968 = (x753115+(x753040));
    /* VAR */ numeric_int_t x750450 = 0;
    while(1) {
      
      numeric_int_t x732419 = x750450;
      if (!((x732419<(60000000)))) break; 
      
      numeric_int_t x732421 = x750450;
      struct Q18GRPRecord* x732422 = &(x753090[x732421]);
      struct AGGRecord_Q18GRPRecord* x753124 = (struct AGGRecord_Q18GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q18GRPRecord));
      memset(x753124, 0, 1 * sizeof(struct AGGRecord_Q18GRPRecord));
      long x753125 = mallocSym_735345_751974;
      mallocSym_735345_751974 = (x753125+(((long){1})));
      x753124->key = x732422; x753124->aggs = 0.0;
      struct AGGRecord_Q18GRPRecord x734706 = *x753124;
      *(x753114 + x732421) = x734706;
      struct AGGRecord_Q18GRPRecord* x734708 = &(x753114[x732421]);
      x753124 = x734708;
      numeric_int_t x732425 = x750450;
      x750450 = (x732425+(1));
    };
    struct timeval x750466 = (struct timeval){0};
    /* VAR */ struct timeval x750467 = x750466;
    struct timeval x750468 = x750467;
    /* VAR */ struct timeval x750469 = x750466;
    struct timeval x750470 = x750469;
    /* VAR */ struct timeval x750471 = x750466;
    struct timeval x750472 = x750471;
    struct timeval* x750473 = &x750470;
    gettimeofday(x750473, NULL);
    /* VAR */ numeric_int_t x750475 = 0;
    numeric_int_t* x750550 = &(x750513);
    GTree* x750551 = g_tree_new(x750550);
    /* VAR */ boolean_t x750552 = 0;
    /* VAR */ numeric_int_t x750553 = 0;
    while(1) {
      
      numeric_int_t x750555 = x750475;
      if (!((x750555<(x732951)))) break; 
      
      numeric_int_t x726212 = x750475;
      numeric_int_t x729873 = x751993[x726212];
      double x728558 = x753079[x729873];
      numeric_int_t x728559 = x750424;
      if((x729873>(x728559))) {
        x750424 = x729873;
      };
      double x729880 = x751998[x726212];
      *(x753079 + x729873) = (x728558+(x729880));
      numeric_int_t x726241 = x750475;
      x750475 = (x726241+(1));
    };
    /* VAR */ numeric_int_t x750570 = 0;
    while(1) {
      
      numeric_int_t x728577 = x750570;
      numeric_int_t x728578 = x750424;
      if (!((x728577<((x728578+(1)))))) break; 
      
      numeric_int_t x728581 = x750570;
      double x728582 = x753079[x728581];
      if((x728582>(300.0))) {
        numeric_int_t x729900 = x753038[x728581];
        if((x729900==(x728581))) {
          numeric_int_t x729905 = x753043[x728581];
          double x729907 = x753047[x728581];
          numeric_int_t x729909 = x753051[x728581];
          /* VAR */ double x727847 = x728582;
          numeric_int_t x728910 = x729905-(1);
          numeric_int_t x729916 = x752385[x728910];
          if((x729905==(x729916))) {
            char* x729921 = x752390[x728910];
            double x729190 = x727847;
            /* VAR */ double x727879 = x729190;
            numeric_int_t x732494 = x750431;
            struct Q18GRPRecord* x732495 = &(x753090[x732494]);
            x732495->C_NAME = x729921;
            x732495->C_CUSTKEY = x729916;
            x732495->O_ORDERKEY = x729900;
            x732495->O_ORDERDATE = x729909;
            x732495->O_TOTALPRICE = x729907;
            numeric_int_t x732501 = x750431;
            x750431 = (x732501+(1));
            void* x737452 = g_hash_table_lookup(x750396, x732495);
            /* VAR */ struct AGGRecord_Q18GRPRecord* ite746795 = 0;
            if((x737452==(NULL))) {
              numeric_int_t x746796 = x750448;
              struct AGGRecord_Q18GRPRecord* x746797 = &(x753114[x746796]);
              x746797->key = x732495;
              x746797->aggs = 0;
              numeric_int_t x746800 = x750448;
              x750448 = (x746800+(1));
              g_hash_table_insert(x750396, x732495, x746797);
              ite746795 = x746797;
            } else {
              
              ite746795 = x737452;
            };
            struct AGGRecord_Q18GRPRecord* x736767 = ite746795;
            double x727643 = x736767->aggs;
            double x729201 = x727879;
            x736767->aggs = (x727643+(x729201));
          };
        };
      };
      x750570 = (x728581+(1));
    };
    GList* x750630 = g_hash_table_get_keys(x750396);
    /* VAR */ GList* x750631 = x750630;
    numeric_int_t x750632 = g_hash_table_size(x750396);
    numeric_int_t x744650 = 0;
    for(; x744650 < x750632 ; x744650 += 1) {
      
      GList* x744651 = x750631;
      void* x744652 = g_list_nth_data(x744651, 0);
      GList* x744653 = g_list_next(x744651);
      x750631 = x744653;
      void* x744655 = g_hash_table_lookup(x750396, x744652);
      struct AGGRecord_Q18GRPRecord* x744657 = (struct AGGRecord_Q18GRPRecord*){x744655};
      g_tree_insert(x750551, x744657, x744657);
    };
    while(1) {
      
      boolean_t x726420 = x750552;
      boolean_t x725019 = !(x726420);
      /* VAR */ boolean_t ite748120 = 0;
      if(x725019) {
        numeric_int_t x750657 = g_tree_nnodes(x750551);
        ite748120 = (x750657!=(0));
      } else {
        
        ite748120 = 0;
      };
      boolean_t x746844 = ite748120;
      if (!(x746844)) break; 
      
      void* x736801 = NULL;
      void** x736809 = &(x736801);
      g_tree_foreach(x750551, x736808, x736809);
      struct AGGRecord_Q18GRPRecord* x736811 = (struct AGGRecord_Q18GRPRecord*){x736801};
      numeric_int_t x736812 = g_tree_remove(x750551, x736811);
      numeric_int_t x726428 = x750553;
      if((x726428>=(100))) {
        x750552 = 1;
      } else {
        
        struct Q18GRPRecord* x725032 = x736811->key;
        char* x725038 = ltoa((x725032->O_ORDERDATE));
        double x727678 = x736811->aggs;
        printf("%s|%d|%d|%s|%.2f|%.2f\n", (x725032->C_NAME), (x725032->C_CUSTKEY), (x725032->O_ORDERKEY), x725038, (x725032->O_TOTALPRICE), x727678);
        numeric_int_t x726443 = x750553;
        x750553 = (x726443+(1));
      };
    };
    numeric_int_t x750691 = x750553;
    printf("(%d rows)\n", x750691);
    struct timeval* x750693 = &x750472;
    gettimeofday(x750693, NULL);
    struct timeval* x750695 = &x750468;
    struct timeval* x750696 = &x750472;
    struct timeval* x750697 = &x750470;
    long x750698 = timeval_subtract(x750695, x750696, x750697);
    printf("Generated code run in %ld milliseconds.\n", x750698);
  };
  /* VAR */ long mallocSum753372 = 0L;
  long x753373 = mallocSym_734605_751952;
  numeric_int_t x753374 = sizeof(char);
  long x753376 = x753373*(((long){x753374}));
  printf("752490 with type Byte: %ld\n", x753376);
  long x753378 = mallocSum753372;
  mallocSum753372 = (x753378+(x753376));
  long x753381 = mallocSym_750397_751953;
  numeric_int_t x753382 = sizeof(numeric_int_t);
  long x753384 = x753381*(((long){x753382}));
  printf("753038 with type Int: %ld\n", x753384);
  long x753386 = mallocSum753372;
  mallocSum753372 = (x753386+(x753384));
  long x753389 = mallocSym_734658_751954;
  numeric_int_t x753390 = sizeof(numeric_int_t);
  long x753392 = x753389*(((long){x753390}));
  printf("752636 with type Int: %ld\n", x753392);
  long x753394 = mallocSum753372;
  mallocSum753372 = (x753394+(x753392));
  long x753397 = mallocSym_734493_751955;
  numeric_int_t x753398 = sizeof(char);
  long x753400 = x753397*(((long){x753398}));
  printf("752334 with type Byte: %ld\n", x753400);
  long x753402 = mallocSum753372;
  mallocSum753372 = (x753402+(x753400));
  long x753405 = mallocSym_734220_751956;
  numeric_int_t x753406 = sizeof(double);
  long x753408 = x753405*(((long){x753406}));
  printf("751998 with type Double: %ld\n", x753408);
  long x753410 = mallocSum753372;
  mallocSum753372 = (x753410+(x753408));
  long x753413 = mallocSym_750400_751957;
  numeric_int_t x753414 = sizeof(numeric_int_t);
  long x753416 = x753413*(((long){x753414}));
  printf("753051 with type Int: %ld\n", x753416);
  long x753418 = mallocSum753372;
  mallocSum753372 = (x753418+(x753416));
  long x753421 = mallocSym_734409_751958;
  numeric_int_t x753422 = sizeof(numeric_int_t);
  long x753424 = x753421*(((long){x753422}));
  printf("752229 with type Int: %ld\n", x753424);
  long x753426 = mallocSum753372;
  mallocSum753372 = (x753426+(x753424));
  long x753429 = mallocSym_734514_751959;
  numeric_int_t x753430 = sizeof(char);
  long x753432 = x753429*(((long){x753430}));
  printf("752363 with type Byte: %ld\n", x753432);
  long x753434 = mallocSum753372;
  mallocSum753372 = (x753434+(x753432));
  long x753437 = mallocSym_734219_751960;
  numeric_int_t x753438 = sizeof(numeric_int_t);
  long x753440 = x753437*(((long){x753438}));
  printf("751993 with type Int: %ld\n", x753440);
  long x753442 = mallocSum753372;
  mallocSum753372 = (x753442+(x753440));
  long x753445 = mallocSym_734676_751961;
  numeric_int_t x753446 = sizeof(double);
  long x753448 = x753445*(((long){x753446}));
  printf("752672 with type Double: %ld\n", x753448);
  long x753450 = mallocSum753372;
  mallocSum753372 = (x753450+(x753448));
  long x753453 = mallocSym_734406_751962;
  numeric_int_t x753454 = sizeof(numeric_int_t);
  long x753456 = x753453*(((long){x753454}));
  printf("752216 with type Int: %ld\n", x753456);
  long x753458 = mallocSum753372;
  mallocSum753372 = (x753458+(x753456));
  long x753461 = mallocSym_734408_751963;
  numeric_int_t x753462 = sizeof(double);
  long x753464 = x753461*(((long){x753462}));
  printf("752225 with type Double: %ld\n", x753464);
  long x753466 = mallocSum753372;
  mallocSum753372 = (x753466+(x753464));
  long x753469 = mallocSym_734533_751964;
  numeric_int_t x753470 = sizeof(numeric_int_t);
  long x753472 = x753469*(((long){x753470}));
  printf("752385 with type Int: %ld\n", x753472);
  long x753474 = mallocSum753372;
  mallocSum753372 = (x753474+(x753472));
  long x753477 = mallocSym_734584_751965;
  numeric_int_t x753478 = sizeof(char);
  long x753480 = x753477*(((long){x753478}));
  printf("752461 with type Byte: %ld\n", x753480);
  long x753482 = mallocSum753372;
  mallocSum753372 = (x753482+(x753480));
  long x753485 = mallocSym_750399_751966;
  numeric_int_t x753486 = sizeof(double);
  long x753488 = x753485*(((long){x753486}));
  printf("753047 with type Double: %ld\n", x753488);
  long x753490 = mallocSum753372;
  mallocSum753372 = (x753490+(x753488));
  long x753493 = mallocSym_734657_751967;
  numeric_int_t x753494 = sizeof(numeric_int_t);
  long x753496 = x753493*(((long){x753494}));
  printf("752631 with type Int: %ld\n", x753496);
  long x753498 = mallocSum753372;
  mallocSum753372 = (x753498+(x753496));
  long x753501 = mallocSym_750449_751968;
  numeric_int_t x753502 = sizeof(struct AGGRecord_Q18GRPRecord);
  long x753504 = x753501*(((long){x753502}));
  printf("753114 with type AGGRecord_Q18GRPRecord: %ld\n", x753504);
  long x753506 = mallocSum753372;
  mallocSum753372 = (x753506+(x753504));
  long x753509 = mallocSym_735327_751969;
  numeric_int_t x753510 = sizeof(struct Q18GRPRecord);
  long x753512 = x753509*(((long){x753510}));
  printf("753099 with type Q18GRPRecord: %ld\n", x753512);
  long x753514 = mallocSum753372;
  mallocSum753372 = (x753514+(x753512));
  long x753517 = mallocSym_734534_751970;
  numeric_int_t x753518 = sizeof(char*);
  long x753520 = x753517*(((long){x753518}));
  printf("752390 with type OptimalString: %ld\n", x753520);
  long x753522 = mallocSum753372;
  mallocSum753372 = (x753522+(x753520));
  long x753525 = mallocSym_734373_751971;
  numeric_int_t x753526 = sizeof(char);
  long x753528 = x753525*(((long){x753526}));
  printf("752172 with type Byte: %ld\n", x753528);
  long x753530 = mallocSum753372;
  mallocSum753372 = (x753530+(x753528));
  long x753533 = mallocSym_734477_751972;
  numeric_int_t x753534 = sizeof(char);
  long x753536 = x753533*(((long){x753534}));
  printf("752310 with type Byte: %ld\n", x753536);
  long x753538 = mallocSum753372;
  mallocSum753372 = (x753538+(x753536));
  long x753541 = mallocSym_734642_751973;
  numeric_int_t x753542 = sizeof(char);
  long x753544 = x753541*(((long){x753542}));
  printf("752543 with type Byte: %ld\n", x753544);
  long x753546 = mallocSum753372;
  mallocSum753372 = (x753546+(x753544));
  long x753549 = mallocSym_735345_751974;
  numeric_int_t x753550 = sizeof(struct AGGRecord_Q18GRPRecord);
  long x753552 = x753549*(((long){x753550}));
  printf("753124 with type AGGRecord_Q18GRPRecord: %ld\n", x753552);
  long x753554 = mallocSum753372;
  mallocSum753372 = (x753554+(x753552));
  long x753557 = mallocSym_734568_751975;
  numeric_int_t x753558 = sizeof(char);
  long x753560 = x753557*(((long){x753558}));
  printf("752437 with type Byte: %ld\n", x753560);
  long x753562 = mallocSum753372;
  mallocSum753372 = (x753562+(x753560));
  long x753565 = mallocSym_734389_751976;
  numeric_int_t x753566 = sizeof(char);
  long x753568 = x753565*(((long){x753566}));
  printf("752196 with type Byte: %ld\n", x753568);
  long x753570 = mallocSum753372;
  mallocSum753372 = (x753570+(x753568));
  long x753573 = mallocSym_734626_751977;
  numeric_int_t x753574 = sizeof(char);
  long x753576 = x753573*(((long){x753574}));
  printf("752519 with type Byte: %ld\n", x753576);
  long x753578 = mallocSum753372;
  mallocSum753372 = (x753578+(x753576));
  long x753581 = mallocSym_734659_751978;
  numeric_int_t x753582 = sizeof(double);
  long x753584 = x753581*(((long){x753582}));
  printf("752640 with type Double: %ld\n", x753584);
  long x753586 = mallocSum753372;
  mallocSum753372 = (x753586+(x753584));
  long x753589 = mallocSym_750432_751979;
  numeric_int_t x753590 = sizeof(struct Q18GRPRecord);
  long x753592 = x753589*(((long){x753590}));
  printf("753090 with type Q18GRPRecord: %ld\n", x753592);
  long x753594 = mallocSum753372;
  mallocSum753372 = (x753594+(x753592));
  long x753597 = mallocSym_734407_751980;
  numeric_int_t x753598 = sizeof(numeric_int_t);
  long x753600 = x753597*(((long){x753598}));
  printf("752221 with type Int: %ld\n", x753600);
  long x753602 = mallocSum753372;
  mallocSum753372 = (x753602+(x753600));
  long x753605 = mallocSym_734698_751981;
  numeric_int_t x753606 = sizeof(struct AGGRecord_Q18GRPRecord);
  long x753608 = x753605*(((long){x753606}));
  printf("752707 with type AGGRecord_Q18GRPRecord: %ld\n", x753608);
  long x753610 = mallocSum753372;
  mallocSum753372 = (x753610+(x753608));
  long x753613 = mallocSym_734660_751982;
  numeric_int_t x753614 = sizeof(numeric_int_t);
  long x753616 = x753613*(((long){x753614}));
  printf("752644 with type Int: %ld\n", x753616);
  long x753618 = mallocSum753372;
  mallocSum753372 = (x753618+(x753616));
  long x753621 = mallocSym_750398_751983;
  numeric_int_t x753622 = sizeof(numeric_int_t);
  long x753624 = x753621*(((long){x753622}));
  printf("753043 with type Int: %ld\n", x753624);
  long x753626 = mallocSum753372;
  mallocSum753372 = (x753626+(x753624));
  long x753629 = mallocSym_734683_751984;
  numeric_int_t x753630 = sizeof(struct Q18GRPRecord);
  long x753632 = x753629*(((long){x753630}));
  printf("752683 with type Q18GRPRecord: %ld\n", x753632);
  long x753634 = mallocSum753372;
  mallocSum753372 = (x753634+(x753632));
  long x753637 = mallocSym_750425_751985;
  numeric_int_t x753638 = sizeof(double);
  long x753640 = x753637*(((long){x753638}));
  printf("753079 with type Double: %ld\n", x753640);
  long x753642 = mallocSum753372;
  mallocSum753372 = (x753642+(x753640));
  long x753645 = mallocSym_734357_751986;
  numeric_int_t x753646 = sizeof(char);
  long x753648 = x753645*(((long){x753646}));
  printf("752148 with type Byte: %ld\n", x753648);
  long x753650 = mallocSum753372;
  mallocSum753372 = (x753650+(x753648));
  long x753653 = mallocSum753372;
  printf("total: %ld\n", x753653);
}
/* ----------- FUNCTIONS ----------- */
numeric_int_t x750325(struct Q18GRPRecord* x736578) {
  char* x740754 = x736578->C_NAME;
  numeric_int_t x742942 = strlen(x740754);
  /* VAR */ numeric_int_t x741480 = 0;
  /* VAR */ numeric_int_t x741481 = 0;
  while(1) {
    
    numeric_int_t x741482 = x741480;
    if (!((x741482<(x742942)))) break; 
    
    numeric_int_t x741484 = x741481;
    numeric_int_t x741485 = x741480;
    char* x742950 = pointer_add(x740754, x741485);
    char x742951 = *(x742950);
    x741481 = (x741484+(x742951));
    numeric_int_t x741490 = x741480;
    x741480 = (x741490+(1));
  };
  numeric_int_t x741494 = x741481;
  return ((((x741494+((x736578->C_CUSTKEY)))+((x736578->O_ORDERKEY)))+((x736578->O_ORDERDATE)))+(((numeric_int_t){(x736578->O_TOTALPRICE)}))); 
}

boolean_t x750353(struct Q18GRPRecord* x736583, struct Q18GRPRecord* x736584) {
  boolean_t x741509 = strcmp((x736583->C_NAME), (x736584->C_NAME));
  boolean_t x741510 = !(x741509);
  /* VAR */ boolean_t ite747830 = 0;
  if(x741510) {
    ite747830 = ((x736583->C_CUSTKEY)==((x736584->C_CUSTKEY)));
  } else {
    
    ite747830 = 0;
  };
  boolean_t x746576 = ite747830;
  /* VAR */ boolean_t ite747837 = 0;
  if(x746576) {
    ite747837 = ((x736583->O_ORDERKEY)==((x736584->O_ORDERKEY)));
  } else {
    
    ite747837 = 0;
  };
  boolean_t x746578 = ite747837;
  /* VAR */ boolean_t ite747844 = 0;
  if(x746578) {
    ite747844 = ((x736583->O_ORDERDATE)==((x736584->O_ORDERDATE)));
  } else {
    
    ite747844 = 0;
  };
  boolean_t x746580 = ite747844;
  /* VAR */ boolean_t ite747851 = 0;
  if(x746580) {
    ite747851 = ((x736583->O_TOTALPRICE)==((x736584->O_TOTALPRICE)));
  } else {
    
    ite747851 = 0;
  };
  boolean_t x746582 = ite747851;
  return x746582; 
}

numeric_int_t x750513(struct AGGRecord_Q18GRPRecord* x724780, struct AGGRecord_Q18GRPRecord* x724781) {
  struct Q18GRPRecord* x724782 = x724780->key;
  double x724783 = x724782->O_TOTALPRICE;
  struct Q18GRPRecord* x724784 = x724781->key;
  double x724785 = x724784->O_TOTALPRICE;
  /* VAR */ numeric_int_t ite746709 = 0;
  if((x724783<(x724785))) {
    ite746709 = 1;
  } else {
    
    /* VAR */ numeric_int_t ite746713 = 0;
    if((x724783>(x724785))) {
      ite746713 = -1;
    } else {
      
      numeric_int_t x746715 = x724782->O_ORDERDATE;
      numeric_int_t x746716 = x724784->O_ORDERDATE;
      /* VAR */ numeric_int_t ite746719 = 0;
      if((x746715<(x746716))) {
        ite746719 = -1;
      } else {
        
        /* VAR */ numeric_int_t ite746723 = 0;
        if((x746715>(x746716))) {
          ite746723 = 1;
        } else {
          
          ite746723 = 0;
        };
        numeric_int_t x746722 = ite746723;
        ite746719 = x746722;
      };
      numeric_int_t x746718 = ite746719;
      ite746713 = x746718;
    };
    numeric_int_t x746712 = ite746713;
    ite746709 = x746712;
  };
  numeric_int_t x724795 = ite746709;
  return x724795; 
}

numeric_int_t x736808(void* x736802, void* x736803, void* x736804) {
  pointer_assign(((struct AGGRecord_Q18GRPRecord**){x736804}), ((struct AGGRecord_Q18GRPRecord*){x736803}));
  return 1; 
}
