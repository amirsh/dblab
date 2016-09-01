#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct AGGRecord_OptimalString;
  struct ORDERSRecord;
  
  struct LINEITEMRecord {
  int L_ORDERKEY;
  int L_COMMITDATE;
  int L_RECEIPTDATE;
  };
  
  struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
  struct AGGRecord_OptimalString* next;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  };
  
  


int x33009(struct AGGRecord_OptimalString* x139, struct AGGRecord_OptimalString* x140);

int x13560(void* x13554, void* x13555, void* x13556);
/* GLOBAL VARS */

struct timeval x9487;
int main(int argc, char** argv) {
  FILE* x9974 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x9975 = 0;
  int x9976 = x9975;
  int* x9977 = &x9976;
  int x9978 = fscanf(x9974, "%d", x9977);
  pclose(x9974);
  struct LINEITEMRecord* x11134 = (struct LINEITEMRecord*)malloc(x9976 * sizeof(struct LINEITEMRecord));
  memset(x11134, 0, x9976 * sizeof(struct LINEITEMRecord));
  int x9982 = O_RDONLY;
  int x9983 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x9982);
  struct stat x9984 = (struct stat){0};
  /* VAR */ struct stat x9985 = x9984;
  struct stat x9986 = x9985;
  struct stat* x9987 = &x9986;
  int x9988 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x9987);
  int x9990 = PROT_READ;
  int x9991 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x9987->st_size), x9990, x9991, x9983, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite23921 = 0;
    if((x5<(x9976))) {
      char x31387 = *x3;
      ite23921 = (x31387!=('\0'));
    } else {
      
      ite23921 = 0;
    };
    int x22029 = ite23921;
    if (!(x22029)) break; 
    
    /* VAR */ int x9999 = 0;
    int x10000 = x9999;
    int* x10001 = &x10000;
    char* x10002 = strntoi_unchecked(x3, x10001);
    x3 = x10002;
    /* VAR */ int x10004 = 0;
    int x10005 = x10004;
    int* x10006 = &x10005;
    char* x10007 = strntoi_unchecked(x3, x10006);
    x3 = x10007;
    /* VAR */ int x10009 = 0;
    int x10010 = x10009;
    int* x10011 = &x10010;
    char* x10012 = strntoi_unchecked(x3, x10011);
    x3 = x10012;
    /* VAR */ int x10014 = 0;
    int x10015 = x10014;
    int* x10016 = &x10015;
    char* x10017 = strntoi_unchecked(x3, x10016);
    x3 = x10017;
    /* VAR */ double x10019 = 0.0;
    double x10020 = x10019;
    double* x10021 = &x10020;
    char* x10022 = strntod_unchecked(x3, x10021);
    x3 = x10022;
    /* VAR */ double x10024 = 0.0;
    double x10025 = x10024;
    double* x10026 = &x10025;
    char* x10027 = strntod_unchecked(x3, x10026);
    x3 = x10027;
    /* VAR */ double x10029 = 0.0;
    double x10030 = x10029;
    double* x10031 = &x10030;
    char* x10032 = strntod_unchecked(x3, x10031);
    x3 = x10032;
    /* VAR */ double x10034 = 0.0;
    double x10035 = x10034;
    double* x10036 = &x10035;
    char* x10037 = strntod_unchecked(x3, x10036);
    x3 = x10037;
    char x10039 = *x3;
    /* VAR */ char x10040 = x10039;
    x3 += 1;
    x3 += 1;
    char x10044 = *x3;
    /* VAR */ char x10045 = x10044;
    x3 += 1;
    x3 += 1;
    /* VAR */ int x10049 = 0;
    int x10050 = x10049;
    int* x10051 = &x10050;
    char* x10052 = strntoi_unchecked(x3, x10051);
    x3 = x10052;
    /* VAR */ int x10054 = 0;
    int x10055 = x10054;
    int* x10056 = &x10055;
    char* x10057 = strntoi_unchecked(x3, x10056);
    x3 = x10057;
    /* VAR */ int x10059 = 0;
    int x10060 = x10059;
    int* x10061 = &x10060;
    char* x10062 = strntoi_unchecked(x3, x10061);
    x3 = x10062;
    /* VAR */ int x10068 = 0;
    int x10069 = x10068;
    int* x10070 = &x10069;
    char* x10071 = strntoi_unchecked(x3, x10070);
    x3 = x10071;
    /* VAR */ int x10073 = 0;
    int x10074 = x10073;
    int* x10075 = &x10074;
    char* x10076 = strntoi_unchecked(x3, x10075);
    x3 = x10076;
    /* VAR */ int x10078 = 0;
    int x10079 = x10078;
    int* x10080 = &x10079;
    char* x10081 = strntoi_unchecked(x3, x10080);
    x3 = x10081;
    /* VAR */ int x10087 = 0;
    int x10088 = x10087;
    int* x10089 = &x10088;
    char* x10090 = strntoi_unchecked(x3, x10089);
    x3 = x10090;
    /* VAR */ int x10092 = 0;
    int x10093 = x10092;
    int* x10094 = &x10093;
    char* x10095 = strntoi_unchecked(x3, x10094);
    x3 = x10095;
    /* VAR */ int x10097 = 0;
    int x10098 = x10097;
    int* x10099 = &x10098;
    char* x10100 = strntoi_unchecked(x3, x10099);
    x3 = x10100;
    char* x11260 = (char*)malloc(26 * sizeof(char));
    memset(x11260, 0, 26 * sizeof(char));
    /* VAR */ char* x10107 = x3;
    while(1) {
      
      char x10108 = *x3;
      /* VAR */ int ite24042 = 0;
      if((x10108!=('|'))) {
        char x31507 = *x3;
        ite24042 = (x31507!=('\n'));
      } else {
        
        ite24042 = 0;
      };
      int x22143 = ite24042;
      if (!(x22143)) break; 
      
      x3 += 1;
    };
    char* x10115 = x10107;
    int x10116 = x3 - x10115;
    char* x10117 = x10107;
    char* x10118 = strncpy(x11260, x10117, x10116);
    x3 += 1;
    char* x11278 = (char*)malloc(11 * sizeof(char));
    memset(x11278, 0, 11 * sizeof(char));
    /* VAR */ char* x10126 = x3;
    while(1) {
      
      char x10127 = *x3;
      /* VAR */ int ite24065 = 0;
      if((x10127!=('|'))) {
        char x31529 = *x3;
        ite24065 = (x31529!=('\n'));
      } else {
        
        ite24065 = 0;
      };
      int x22159 = ite24065;
      if (!(x22159)) break; 
      
      x3 += 1;
    };
    char* x10134 = x10126;
    int x10135 = x3 - x10134;
    char* x10136 = x10126;
    char* x10137 = strncpy(x11278, x10136, x10135);
    x3 += 1;
    char* x11296 = (char*)malloc(45 * sizeof(char));
    memset(x11296, 0, 45 * sizeof(char));
    /* VAR */ char* x10145 = x3;
    while(1) {
      
      char x10146 = *x3;
      /* VAR */ int ite24088 = 0;
      if((x10146!=('|'))) {
        char x31551 = *x3;
        ite24088 = (x31551!=('\n'));
      } else {
        
        ite24088 = 0;
      };
      int x22175 = ite24088;
      if (!(x22175)) break; 
      
      x3 += 1;
    };
    char* x10153 = x10145;
    int x10154 = x3 - x10153;
    char* x10155 = x10145;
    char* x10156 = strncpy(x11296, x10155, x10154);
    x3 += 1;
    struct LINEITEMRecord* x11921 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x11921, 0, 1 * sizeof(struct LINEITEMRecord));
    x11921->L_ORDERKEY = x10000; x11921->L_COMMITDATE = (((x10069*(10000))+((x10074*(100))))+(x10079)); x11921->L_RECEIPTDATE = (((x10088*(10000))+((x10093*(100))))+(x10098));
    int x47 = x4;
    if((x11921==(NULL))) {
      *(x11134 + x47) = (const struct LINEITEMRecord){0};
    } else {
      
      struct LINEITEMRecord x11318 = *x11921;
      *(x11134 + x47) = x11318;
      struct LINEITEMRecord* x11320 = &(x11134[x47]);
      x11921 = x11320;
    };
    int x49 = x4;
    x4 = (x49+(1));
  };
  FILE* x10169 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x10170 = 0;
  int x10171 = x10170;
  int* x10172 = &x10171;
  int x10173 = fscanf(x10169, "%d", x10172);
  pclose(x10169);
  struct ORDERSRecord* x11332 = (struct ORDERSRecord*)malloc(x10171 * sizeof(struct ORDERSRecord));
  memset(x11332, 0, x10171 * sizeof(struct ORDERSRecord));
  int x10177 = O_RDONLY;
  int x10178 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x10177);
  /* VAR */ struct stat x10179 = x9984;
  struct stat x10180 = x10179;
  struct stat* x10181 = &x10180;
  int x10182 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x10181);
  int x10184 = PROT_READ;
  int x10185 = MAP_PRIVATE;
  char* x55 = mmap(NULL, (x10181->st_size), x10184, x10185, x10178, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    /* VAR */ int ite24141 = 0;
    if((x57<(x10171))) {
      char x31603 = *x55;
      ite24141 = (x31603!=('\0'));
    } else {
      
      ite24141 = 0;
    };
    int x22221 = ite24141;
    if (!(x22221)) break; 
    
    /* VAR */ int x10193 = 0;
    int x10194 = x10193;
    int* x10195 = &x10194;
    char* x10196 = strntoi_unchecked(x55, x10195);
    x55 = x10196;
    /* VAR */ int x10198 = 0;
    int x10199 = x10198;
    int* x10200 = &x10199;
    char* x10201 = strntoi_unchecked(x55, x10200);
    x55 = x10201;
    char x10203 = *x55;
    /* VAR */ char x10204 = x10203;
    x55 += 1;
    x55 += 1;
    /* VAR */ double x10208 = 0.0;
    double x10209 = x10208;
    double* x10210 = &x10209;
    char* x10211 = strntod_unchecked(x55, x10210);
    x55 = x10211;
    /* VAR */ int x10213 = 0;
    int x10214 = x10213;
    int* x10215 = &x10214;
    char* x10216 = strntoi_unchecked(x55, x10215);
    x55 = x10216;
    /* VAR */ int x10218 = 0;
    int x10219 = x10218;
    int* x10220 = &x10219;
    char* x10221 = strntoi_unchecked(x55, x10220);
    x55 = x10221;
    /* VAR */ int x10223 = 0;
    int x10224 = x10223;
    int* x10225 = &x10224;
    char* x10226 = strntoi_unchecked(x55, x10225);
    x55 = x10226;
    char* x11389 = (char*)malloc(16 * sizeof(char));
    memset(x11389, 0, 16 * sizeof(char));
    /* VAR */ char* x10233 = x55;
    while(1) {
      
      char x10234 = *x55;
      /* VAR */ int ite24194 = 0;
      if((x10234!=('|'))) {
        char x31655 = *x55;
        ite24194 = (x31655!=('\n'));
      } else {
        
        ite24194 = 0;
      };
      int x22267 = ite24194;
      if (!(x22267)) break; 
      
      x55 += 1;
    };
    char* x10241 = x10233;
    int x10242 = x55 - x10241;
    char* x10243 = x10233;
    char* x10244 = strncpy(x11389, x10243, x10242);
    x55 += 1;
    char* x11407 = (char*)malloc(16 * sizeof(char));
    memset(x11407, 0, 16 * sizeof(char));
    /* VAR */ char* x10252 = x55;
    while(1) {
      
      char x10253 = *x55;
      /* VAR */ int ite24217 = 0;
      if((x10253!=('|'))) {
        char x31677 = *x55;
        ite24217 = (x31677!=('\n'));
      } else {
        
        ite24217 = 0;
      };
      int x22283 = ite24217;
      if (!(x22283)) break; 
      
      x55 += 1;
    };
    char* x10260 = x10252;
    int x10261 = x55 - x10260;
    char* x10262 = x10252;
    char* x10263 = strncpy(x11407, x10262, x10261);
    x55 += 1;
    /* VAR */ int x10270 = 0;
    int x10271 = x10270;
    int* x10272 = &x10271;
    char* x10273 = strntoi_unchecked(x55, x10272);
    x55 = x10273;
    char* x11430 = (char*)malloc(80 * sizeof(char));
    memset(x11430, 0, 80 * sizeof(char));
    /* VAR */ char* x10276 = x55;
    while(1) {
      
      char x10277 = *x55;
      /* VAR */ int ite24245 = 0;
      if((x10277!=('|'))) {
        char x31704 = *x55;
        ite24245 = (x31704!=('\n'));
      } else {
        
        ite24245 = 0;
      };
      int x22304 = ite24245;
      if (!(x22304)) break; 
      
      x55 += 1;
    };
    char* x10284 = x10276;
    int x10285 = x55 - x10284;
    char* x10286 = x10276;
    char* x10287 = strncpy(x11430, x10286, x10285);
    x55 += 1;
    struct ORDERSRecord* x12057 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x12057, 0, 1 * sizeof(struct ORDERSRecord));
    x12057->O_ORDERKEY = x10194; x12057->O_ORDERDATE = (((x10214*(10000))+((x10219*(100))))+(x10224)); x12057->O_ORDERPRIORITY = x11389;
    int x91 = x56;
    /* VAR */ int ite24268 = 0;
    if((x12057==(NULL))) {
      ite24268 = 1;
    } else {
      
      char* x31727 = x12057->O_ORDERPRIORITY;
      /* VAR */ int x31729 = 0;
      if((x31727==(NULL))) {
        x31729 = 1;
      } else {
        
        int x31732 = strcmp(x31727, "");
        int x31733 = !(x31732);
        x31729 = x31733;
      };
      int x31736 = x31729;
      ite24268 = x31736;
    };
    int x22320 = ite24268;
    if(x22320) {
      *(x11332 + x91) = (const struct ORDERSRecord){0};
    } else {
      
      struct ORDERSRecord x11452 = *x12057;
      *(x11332 + x91) = x11452;
      struct ORDERSRecord* x11454 = &(x11332[x91]);
      x12057 = x11454;
    };
    int x93 = x56;
    x56 = (x93+(1));
  };
  int x98 = 0;
  for(; x98 < 1 ; x98 += 1) {
    
    /* VAR */ int x32796 = 0;
    struct AGGRecord_OptimalString* x32797 = (struct AGGRecord_OptimalString*)malloc(10 * sizeof(struct AGGRecord_OptimalString));
    memset(x32797, 0, 10 * sizeof(struct AGGRecord_OptimalString));
    int x19213 = 0;
    for(; x19213 < 10 ; x19213 += 1) {
      
      *(x32797 + x19213) = (const struct AGGRecord_OptimalString){0};
    };
    struct LINEITEMRecord** x32803 = (struct LINEITEMRecord**)malloc(60000000 * sizeof(struct LINEITEMRecord*));
    memset(x32803, 0, 60000000 * sizeof(struct LINEITEMRecord*));
    int* x32804 = (int*)malloc(60000000 * sizeof(int));
    memset(x32804, 0, 60000000 * sizeof(int));
    int x19222 = 0;
    for(; x19222 < 60000000 ; x19222 += 1) {
      
      struct LINEITEMRecord* x19223 = (struct LINEITEMRecord*)malloc(16 * sizeof(struct LINEITEMRecord));
      memset(x19223, 0, 16 * sizeof(struct LINEITEMRecord));
      *(x32803 + x19222) = x19223;
    };
    /* VAR */ int x32812 = 0;
    int x19246 = 0;
    for(; x19246 < x9976 ; x19246 += 1) {
      
      struct LINEITEMRecord* x19247 = &(x11134[x19246]);
      int x19249 = (x19247->L_ORDERKEY)%(60000000);
      int x19250 = x32804[x19249];
      struct LINEITEMRecord* x19251 = x32803[x19249];
      if((x19247==(NULL))) {
        *(x19251 + x19250) = (const struct LINEITEMRecord){0};
      } else {
        
        struct LINEITEMRecord x11489 = *x19247;
        *(x19251 + x19250) = x11489;
        struct LINEITEMRecord* x11491 = &(x19251[x19250]);
        x19247 = x11491;
      };
      *(x32804 + x19249) = (x19250+(1));
      int x19261 = x32812;
      x32812 = (x19261+(1));
    };
    struct ORDERSRecord** x32850 = (struct ORDERSRecord**)malloc(96 * sizeof(struct ORDERSRecord*));
    memset(x32850, 0, 96 * sizeof(struct ORDERSRecord*));
    int* x32851 = (int*)malloc(96 * sizeof(int));
    memset(x32851, 0, 96 * sizeof(int));
    int x19273 = 0;
    for(; x19273 < 96 ; x19273 += 1) {
      
      struct ORDERSRecord* x19276 = (struct ORDERSRecord*)malloc(((x10171/(96))*(4)) * sizeof(struct ORDERSRecord));
      memset(x19276, 0, ((x10171/(96))*(4)) * sizeof(struct ORDERSRecord));
      *(x32850 + x19273) = x19276;
    };
    /* VAR */ int x32863 = 0;
    int x19311 = 0;
    for(; x19311 < x10171 ; x19311 += 1) {
      
      struct ORDERSRecord* x19312 = &(x11332[x19311]);
      int x19314 = (x19312->O_ORDERDATE)/(100);
      int x19320 = (((x19314/(100))-(1992))*(12))+(((x19314%(100))-(1)));
      int x19321 = x32851[x19320];
      struct ORDERSRecord* x19322 = x32850[x19320];
      /* VAR */ int ite25379 = 0;
      if((x19312==(NULL))) {
        ite25379 = 1;
      } else {
        
        char* x32921 = x19312->O_ORDERPRIORITY;
        /* VAR */ int x32923 = 0;
        if((x32921==(NULL))) {
          x32923 = 1;
        } else {
          
          int x32926 = strcmp(x32921, "");
          int x32927 = !(x32926);
          x32923 = x32927;
        };
        int x32930 = x32923;
        ite25379 = x32930;
      };
      int x23225 = ite25379;
      if(x23225) {
        *(x19322 + x19321) = (const struct ORDERSRecord){0};
      } else {
        
        struct ORDERSRecord x11527 = *x19312;
        *(x19322 + x19321) = x11527;
        struct ORDERSRecord* x11529 = &(x19322[x19321]);
        x19312 = x11529;
      };
      *(x32851 + x19320) = (x19321+(1));
      int x19338 = x32863;
      x32863 = (x19338+(1));
    };
    /* VAR */ int x32945 = 0;
    double** x32946 = (double**)malloc(5 * sizeof(double*));
    memset(x32946, 0, 5 * sizeof(double*));
    /* VAR */ int x32947 = 0;
    while(1) {
      
      int x9318 = x32947;
      if (!((x9318<(5)))) break; 
      
      int x9320 = x32947;
      double* x11545 = (double*)malloc(1 * sizeof(double));
      memset(x11545, 0, 1 * sizeof(double));
      *(x32946 + x9320) = x11545;
      int x9323 = x32947;
      x32947 = (x9323+(1));
    };
    /* VAR */ int x32957 = 0;
    struct AGGRecord_OptimalString* x32958 = (struct AGGRecord_OptimalString*)malloc(5 * sizeof(struct AGGRecord_OptimalString));
    memset(x32958, 0, 5 * sizeof(struct AGGRecord_OptimalString));
    /* VAR */ int x32959 = 0;
    while(1) {
      
      int x9330 = x32959;
      if (!((x9330<(5)))) break; 
      
      int x9332 = x32959;
      double* x9333 = x32946[x9332];
      struct AGGRecord_OptimalString* x12169 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x12169, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      x12169->key = ""; x12169->aggs = x9333; x12169->next = NULL;
      /* VAR */ int ite25425 = 0;
      if((x12169==(NULL))) {
        ite25425 = 1;
      } else {
        
        char* x32972 = x12169->key;
        /* VAR */ int x32974 = 0;
        if((x32972==(NULL))) {
          x32974 = 1;
        } else {
          
          int x32977 = strcmp(x32972, "");
          int x32978 = !(x32977);
          x32974 = x32978;
        };
        int x32981 = x32974;
        ite25425 = x32981;
      };
      int x23262 = ite25425;
      if(x23262) {
        *(x32958 + x9332) = (const struct AGGRecord_OptimalString){0};
      } else {
        
        struct AGGRecord_OptimalString x11561 = *x12169;
        *(x32958 + x9332) = x11561;
        struct AGGRecord_OptimalString* x11563 = &(x32958[x9332]);
        x12169 = x11563;
      };
      int x9336 = x32959;
      x32959 = (x9336+(1));
    };
    /* VAR */ struct timeval x32994 = x9487;
    struct timeval x32995 = x32994;
    /* VAR */ struct timeval x32996 = x9487;
    struct timeval x32997 = x32996;
    /* VAR */ struct timeval x32998 = x9487;
    struct timeval x32999 = x32998;
    struct timeval* x33000 = &x32997;
    gettimeofday(x33000, NULL);
    /* VAR */ int x33002 = 0;
    int* x33015 = &(x33009);
    GTree* x33016 = g_tree_new(x33015);
    /* VAR */ int x33017 = 0;
    /* VAR */ int x33018 = 0;
    int x19683 = 19;
    for(; x19683 < 23 ; x19683 += 1) {
      
      int x19684 = x32851[x19683];
      struct ORDERSRecord* x19685 = x32850[x19683];
      int x19547 = 0;
      for(; x19547 < x19684 ; x19547 += 1) {
        
        struct ORDERSRecord* x19548 = &(x19685[x19547]);
        int x19549 = x19548->O_ORDERDATE;
        if(((x19549<(19931101))&((x19549>=(19930801))))) {
          int x185 = x19548->O_ORDERKEY;
          /* VAR */ int x7282 = 0;
          int x7283 = x185%(60000000);
          int x7284 = x32804[x7283];
          struct LINEITEMRecord* x7285 = x32803[x7283];
          int x19437 = 0;
          for(; x19437 < x7284 ; x19437 += 1) {
            
            struct LINEITEMRecord* x19438 = &(x7285[x19437]);
            if(((x19438->L_COMMITDATE)<((x19438->L_RECEIPTDATE)))) {
              if((((x19438->L_ORDERKEY)==(x185))&((x185==((x19438->L_ORDERKEY)))))) {
                x7282 = 1;
              };
            };
          };
          int x7302 = x7282;
          if(x7302) {
            char* x230 = x19548->O_ORDERPRIORITY;
            int x18034 = strlen(x230);
            /* VAR */ int x15996 = 0;
            /* VAR */ int x15997 = 0;
            while(1) {
              
              int x15998 = x15996;
              if (!((x15998<(x18034)))) break; 
              
              int x16000 = x15997;
              int x16001 = x15996;
              char* x18042 = pointer_add(x230, x16001);
              char x18043 = *(x18042);
              x15997 = (x16000+(x18043));
              int x16006 = x15996;
              x15996 = (x16006+(1));
            };
            int x16010 = x15997;
            int x3276 = x16010&(9);
            struct AGGRecord_OptimalString* x4008 = &(x32797[x3276]);
            int x3278 = x32796;
            if((x3276>(x3278))) {
              x32796 = x3276;
            };
            /* VAR */ struct AGGRecord_OptimalString* current4302 = x4008;
            /* VAR */ int found4018 = 0;
            while(1) {
              
              struct AGGRecord_OptimalString* x4305 = current4302;
              /* VAR */ int ite26046 = 0;
              if((x4305!=(NULL))) {
                char* x33636 = x4305->key;
                /* VAR */ int x33638 = 0;
                if((x33636!=(NULL))) {
                  int x33640 = strcmp(x33636, "");
                  x33638 = x33640;
                } else {
                  
                  x33638 = 0;
                };
                int x33644 = x33638;
                ite26046 = x33644;
              } else {
                
                ite26046 = 0;
              };
              int x23772 = ite26046;
              /* VAR */ int ite26057 = 0;
              if(x23772) {
                int x33651 = found4018;
                int x33652 = !(x33651);
                ite26057 = x33652;
              } else {
                
                ite26057 = 0;
              };
              int x23774 = ite26057;
              if (!(x23774)) break; 
              
              struct AGGRecord_OptimalString* x4310 = current4302;
              int x16030 = strcmp((x4310->key), x230);
              int x16031 = !(x16030);
              if(x16031) {
                found4018 = 1;
              } else {
                
                struct AGGRecord_OptimalString* x4316 = current4302;
                struct AGGRecord_OptimalString* x4885 = x4316->next;
                current4302 = x4885;
              };
            };
            int x4034 = found4018;
            int x4035 = !(x4034);
            /* VAR */ struct AGGRecord_OptimalString** ite23787 = 0;
            if(x4035) {
              ite23787 = NULL;
            } else {
              
              struct AGGRecord_OptimalString* x23789 = current4302;
              ite23787 = x23789;
            };
            struct AGGRecord_OptimalString** x4041 = ite23787;
            /* VAR */ struct AGGRecord_OptimalString* ite23795 = 0;
            if((x4041!=(NULL))) {
              ite23795 = x4041;
            } else {
              
              int x23797 = x32945;
              double* x23798 = x32946[x23797];
              int x23799 = x32945;
              x32945 = (x23799+(1));
              int x23802 = x32957;
              struct AGGRecord_OptimalString* x23803 = &(x32958[x23802]);
              x23803->key = x230;
              x23803->aggs = x23798;
              x23803->next = NULL;
              int x23807 = x32957;
              x32957 = (x23807+(1));
              /* VAR */ int ite26102 = 0;
              if((x4008==(NULL))) {
                ite26102 = 1;
              } else {
                
                char* x33696 = x4008->key;
                /* VAR */ int x33698 = 0;
                if((x33696==(NULL))) {
                  x33698 = 1;
                } else {
                  
                  int x33701 = strcmp(x33696, "");
                  int x33702 = !(x33701);
                  x33698 = x33702;
                };
                int x33705 = x33698;
                ite26102 = x33705;
              };
              int x23812 = ite26102;
              if(x23812) {
                x23803->next = NULL;
                /* VAR */ int ite26116 = 0;
                if((x23803==(NULL))) {
                  ite26116 = 1;
                } else {
                  
                  char* x33715 = x23803->key;
                  /* VAR */ int x33717 = 0;
                  if((x33715==(NULL))) {
                    x33717 = 1;
                  } else {
                    
                    int x33720 = strcmp(x33715, "");
                    int x33721 = !(x33720);
                    x33717 = x33721;
                  };
                  int x33724 = x33717;
                  ite26116 = x33724;
                };
                int x23817 = ite26116;
                if(x23817) {
                  *(x32797 + x3276) = (const struct AGGRecord_OptimalString){0};
                } else {
                  
                  struct AGGRecord_OptimalString x11674 = *x23803;
                  *(x32797 + x3276) = x11674;
                  struct AGGRecord_OptimalString* x11676 = &(x32797[x3276]);
                  x23803 = x11676;
                };
              } else {
                
                struct AGGRecord_OptimalString* x4905 = x4008->next;
                x23803->next = x4905;
                x4008->next = x23803;
              };
              ite23795 = x23803;
            };
            struct AGGRecord_OptimalString* x3291 = ite23795;
            double* x235 = x3291->aggs;
            double x249 = x235[0];
            *x235 = (x249+(1.0));
          };
        };
      };
    };
    int x33744 = x32796;
    int x19977 = 0;
    for(; x19977 < (x33744+(1)) ; x19977 += 1) {
      
      struct AGGRecord_OptimalString* x19978 = &(x32797[x19977]);
      /* VAR */ struct AGGRecord_OptimalString* x19979 = x19978;
      while(1) {
        
        struct AGGRecord_OptimalString* x4361 = x19979;
        /* VAR */ int ite26174 = 0;
        if((x4361!=(NULL))) {
          char* x33781 = x4361->key;
          /* VAR */ int x33783 = 0;
          if((x33781!=(NULL))) {
            int x33785 = strcmp(x33781, "");
            x33783 = x33785;
          } else {
            
            x33783 = 0;
          };
          int x33789 = x33783;
          ite26174 = x33789;
        } else {
          
          ite26174 = 0;
        };
        int x23857 = ite26174;
        if (!(x23857)) break; 
        
        struct AGGRecord_OptimalString* x4363 = x19979;
        struct AGGRecord_OptimalString* x4932 = x4363->next;
        struct AGGRecord_OptimalString* x4365 = x19979;
        g_tree_insert(x33016, x4365, x4365);
        x19979 = x4932;
      };
    };
    while(1) {
      
      int x1244 = x33017;
      int x272 = !(x1244);
      /* VAR */ int ite26193 = 0;
      if(x272) {
        int x33804 = g_tree_nnodes(x33016);
        ite26193 = (x33804!=(0));
      } else {
        
        ite26193 = 0;
      };
      int x23867 = ite26193;
      if (!(x23867)) break; 
      
      void* x13553 = NULL;
      void** x13561 = &(x13553);
      g_tree_foreach(x33016, x13560, x13561);
      struct AGGRecord_OptimalString* x13563 = (struct AGGRecord_OptimalString*){x13553};
      int x13564 = g_tree_remove(x33016, x13563);
      if(0) {
        x33017 = 1;
      } else {
        
        double x288 = ((double*) { x13563->aggs })[0];
        printf("%s|%.0f\n", (x13563->key), x288);
        int x1262 = x33018;
        x33018 = (x1262+(1));
      };
    };
    int x33831 = x33018;
    printf("(%d rows)\n", x33831);
    struct timeval* x33833 = &x32999;
    gettimeofday(x33833, NULL);
    struct timeval* x33835 = &x32995;
    struct timeval* x33836 = &x32999;
    struct timeval* x33837 = &x32997;
    long x33838 = timeval_subtract(x33835, x33836, x33837);
    printf("Generated code run in %ld milliseconds.\n", x33838);
  };
}
/* ----------- FUNCTIONS ----------- */
int x33009(struct AGGRecord_OptimalString* x139, struct AGGRecord_OptimalString* x140) {
  int x17990 = strcmp((x139->key), (x140->key));
  return x17990; 
}

int x13560(void* x13554, void* x13555, void* x13556) {
  pointer_assign(((struct AGGRecord_OptimalString**){x13556}), ((struct AGGRecord_OptimalString*){x13555}));
  return 1; 
}
