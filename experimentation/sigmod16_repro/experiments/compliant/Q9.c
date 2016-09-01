#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord;
  struct LINEITEMRecord_PARTRecord_SUPPLIERRecord;
  struct LINEITEMRecord_PARTRecord;
  struct AGGRecord_Q9GRPRecord;
  struct Q9GRPRecord;
  struct PARTSUPPRecord;
  
  struct LINEITEMRecord {
  int L_ORDERKEY;
  int L_PARTKEY;
  int L_SUPPKEY;
  int L_LINENUMBER;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  double L_TAX;
  char L_RETURNFLAG;
  char L_LINESTATUS;
  int L_SHIPDATE;
  int L_COMMITDATE;
  int L_RECEIPTDATE;
  char* L_SHIPINSTRUCT;
  char* L_SHIPMODE;
  char* L_COMMENT;
  struct LINEITEMRecord* next;
  };
  
  struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
  int L_ORDERKEY;
  int L_PARTKEY;
  int L_SUPPKEY;
  int L_LINENUMBER;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  double L_TAX;
  char L_RETURNFLAG;
  char L_LINESTATUS;
  int L_SHIPDATE;
  int L_COMMITDATE;
  int L_RECEIPTDATE;
  char* L_SHIPINSTRUCT;
  char* L_SHIPMODE;
  char* L_COMMENT;
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* next;
  };
  
  struct LINEITEMRecord_PARTRecord_SUPPLIERRecord {
  int L_ORDERKEY;
  int L_PARTKEY;
  int L_SUPPKEY;
  int L_LINENUMBER;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  double L_TAX;
  char L_RETURNFLAG;
  char L_LINESTATUS;
  int L_SHIPDATE;
  int L_COMMITDATE;
  int L_RECEIPTDATE;
  char* L_SHIPINSTRUCT;
  char* L_SHIPMODE;
  char* L_COMMENT;
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* next;
  };
  
  struct LINEITEMRecord_PARTRecord {
  int L_ORDERKEY;
  int L_PARTKEY;
  int L_SUPPKEY;
  int L_LINENUMBER;
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  double L_TAX;
  char L_RETURNFLAG;
  char L_LINESTATUS;
  int L_SHIPDATE;
  int L_COMMITDATE;
  int L_RECEIPTDATE;
  char* L_SHIPINSTRUCT;
  char* L_SHIPMODE;
  char* L_COMMENT;
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  struct LINEITEMRecord_PARTRecord* next;
  };
  
  struct AGGRecord_Q9GRPRecord {
  struct Q9GRPRecord* key;
  double aggs;
  struct AGGRecord_Q9GRPRecord* next;
  };
  
  struct Q9GRPRecord {
  char* NATION;
  int O_YEAR;
  };
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
  struct PARTSUPPRecord* next;
  };
  
  


int x88361(struct AGGRecord_Q9GRPRecord* x374, struct AGGRecord_Q9GRPRecord* x375);

int x46315(void* x46309, void* x46310, void* x46311);
/* GLOBAL VARS */

struct timeval x35607;
int main(int argc, char** argv) {
  FILE* x37144 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x37145 = 0;
  int x37146 = x37145;
  int* x37147 = &x37146;
  int x37148 = fscanf(x37144, "%d", x37147);
  pclose(x37144);
  int* x40076 = (int*)malloc(x37146 * sizeof(int));
  memset(x40076, 0, x37146 * sizeof(int));
  char** x40077 = (char**)malloc(x37146 * sizeof(char*));
  memset(x40077, 0, x37146 * sizeof(char*));
  char** x40078 = (char**)malloc(x37146 * sizeof(char*));
  memset(x40078, 0, x37146 * sizeof(char*));
  char** x40079 = (char**)malloc(x37146 * sizeof(char*));
  memset(x40079, 0, x37146 * sizeof(char*));
  char** x40080 = (char**)malloc(x37146 * sizeof(char*));
  memset(x40080, 0, x37146 * sizeof(char*));
  int* x40081 = (int*)malloc(x37146 * sizeof(int));
  memset(x40081, 0, x37146 * sizeof(int));
  char** x40082 = (char**)malloc(x37146 * sizeof(char*));
  memset(x40082, 0, x37146 * sizeof(char*));
  double* x40083 = (double*)malloc(x37146 * sizeof(double));
  memset(x40083, 0, x37146 * sizeof(double));
  char** x40084 = (char**)malloc(x37146 * sizeof(char*));
  memset(x40084, 0, x37146 * sizeof(char*));
  int x37160 = O_RDONLY;
  int x37161 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x37160);
  struct stat x37162 = (struct stat){0};
  /* VAR */ struct stat x37163 = x37162;
  struct stat x37164 = x37163;
  struct stat* x37165 = &x37164;
  int x37166 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x37165);
  size_t x37167 = x37165->st_size;
  int x37168 = PROT_READ;
  int x37169 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x37167, x37168, x37169, x37161, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x37146);
    /* VAR */ int ite69447 = 0;
    if(x6) {
      char x85670 = *x3;
      int x85671 = x85670!=('\0');
      ite69447 = x85671;
    } else {
      
      ite69447 = 0;
    };
    int x66853 = ite69447;
    if (!(x66853)) break; 
    
    /* VAR */ int x37177 = 0;
    int x37178 = x37177;
    int* x37179 = &x37178;
    char* x37180 = strntoi_unchecked(x3, x37179);
    x3 = x37180;
    char* x40108 = (char*)malloc(56 * sizeof(char));
    memset(x40108, 0, 56 * sizeof(char));
    /* VAR */ char* x37183 = x3;
    while(1) {
      
      char x37184 = *x3;
      int x37185 = x37184!=('|');
      /* VAR */ int ite69466 = 0;
      if(x37185) {
        char x85688 = *x3;
        int x85689 = x85688!=('\n');
        ite69466 = x85689;
      } else {
        
        ite69466 = 0;
      };
      int x66865 = ite69466;
      if (!(x66865)) break; 
      
      x3 += 1;
    };
    char* x37191 = x37183;
    int x37192 = x3 - x37191;
    char* x37193 = x37183;
    char* x37194 = strncpy(x40108, x37193, x37192);
    x3 += 1;
    char* x40126 = (char*)malloc(26 * sizeof(char));
    memset(x40126, 0, 26 * sizeof(char));
    /* VAR */ char* x37202 = x3;
    while(1) {
      
      char x37203 = *x3;
      int x37204 = x37203!=('|');
      /* VAR */ int ite69489 = 0;
      if(x37204) {
        char x85710 = *x3;
        int x85711 = x85710!=('\n');
        ite69489 = x85711;
      } else {
        
        ite69489 = 0;
      };
      int x66881 = ite69489;
      if (!(x66881)) break; 
      
      x3 += 1;
    };
    char* x37210 = x37202;
    int x37211 = x3 - x37210;
    char* x37212 = x37202;
    char* x37213 = strncpy(x40126, x37212, x37211);
    x3 += 1;
    char* x40144 = (char*)malloc(11 * sizeof(char));
    memset(x40144, 0, 11 * sizeof(char));
    /* VAR */ char* x37221 = x3;
    while(1) {
      
      char x37222 = *x3;
      int x37223 = x37222!=('|');
      /* VAR */ int ite69512 = 0;
      if(x37223) {
        char x85732 = *x3;
        int x85733 = x85732!=('\n');
        ite69512 = x85733;
      } else {
        
        ite69512 = 0;
      };
      int x66897 = ite69512;
      if (!(x66897)) break; 
      
      x3 += 1;
    };
    char* x37229 = x37221;
    int x37230 = x3 - x37229;
    char* x37231 = x37221;
    char* x37232 = strncpy(x40144, x37231, x37230);
    x3 += 1;
    char* x40162 = (char*)malloc(26 * sizeof(char));
    memset(x40162, 0, 26 * sizeof(char));
    /* VAR */ char* x37240 = x3;
    while(1) {
      
      char x37241 = *x3;
      int x37242 = x37241!=('|');
      /* VAR */ int ite69535 = 0;
      if(x37242) {
        char x85754 = *x3;
        int x85755 = x85754!=('\n');
        ite69535 = x85755;
      } else {
        
        ite69535 = 0;
      };
      int x66913 = ite69535;
      if (!(x66913)) break; 
      
      x3 += 1;
    };
    char* x37248 = x37240;
    int x37249 = x3 - x37248;
    char* x37250 = x37240;
    char* x37251 = strncpy(x40162, x37250, x37249);
    x3 += 1;
    /* VAR */ int x37258 = 0;
    int x37259 = x37258;
    int* x37260 = &x37259;
    char* x37261 = strntoi_unchecked(x3, x37260);
    x3 = x37261;
    char* x40185 = (char*)malloc(11 * sizeof(char));
    memset(x40185, 0, 11 * sizeof(char));
    /* VAR */ char* x37264 = x3;
    while(1) {
      
      char x37265 = *x3;
      int x37266 = x37265!=('|');
      /* VAR */ int ite69563 = 0;
      if(x37266) {
        char x85781 = *x3;
        int x85782 = x85781!=('\n');
        ite69563 = x85782;
      } else {
        
        ite69563 = 0;
      };
      int x66934 = ite69563;
      if (!(x66934)) break; 
      
      x3 += 1;
    };
    char* x37272 = x37264;
    int x37273 = x3 - x37272;
    char* x37274 = x37264;
    char* x37275 = strncpy(x40185, x37274, x37273);
    x3 += 1;
    /* VAR */ double x37282 = 0.0;
    double x37283 = x37282;
    double* x37284 = &x37283;
    char* x37285 = strntod_unchecked(x3, x37284);
    x3 = x37285;
    char* x40208 = (char*)malloc(24 * sizeof(char));
    memset(x40208, 0, 24 * sizeof(char));
    /* VAR */ char* x37288 = x3;
    while(1) {
      
      char x37289 = *x3;
      int x37290 = x37289!=('|');
      /* VAR */ int ite69591 = 0;
      if(x37290) {
        char x85808 = *x3;
        int x85809 = x85808!=('\n');
        ite69591 = x85809;
      } else {
        
        ite69591 = 0;
      };
      int x66955 = ite69591;
      if (!(x66955)) break; 
      
      x3 += 1;
    };
    char* x37296 = x37288;
    int x37297 = x3 - x37296;
    char* x37298 = x37288;
    char* x37299 = strncpy(x40208, x37298, x37297);
    x3 += 1;
    int x59 = x4;
    *(x40076 + x59) = x37178;
    *(x40077 + x59) = x40108;
    *(x40078 + x59) = x40126;
    *(x40079 + x59) = x40144;
    *(x40080 + x59) = x40162;
    *(x40081 + x59) = x37259;
    *(x40082 + x59) = x40185;
    *(x40083 + x59) = x37283;
    *(x40084 + x59) = x40208;
    int x61 = x4;
    int x62 = x61+(1);
    x4 = x62;
  };
  FILE* x37319 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x37320 = 0;
  int x37321 = x37320;
  int* x37322 = &x37321;
  int x37323 = fscanf(x37319, "%d", x37322);
  pclose(x37319);
  int* x40245 = (int*)malloc(x37321 * sizeof(int));
  memset(x40245, 0, x37321 * sizeof(int));
  char** x40246 = (char**)malloc(x37321 * sizeof(char*));
  memset(x40246, 0, x37321 * sizeof(char*));
  int* x40247 = (int*)malloc(x37321 * sizeof(int));
  memset(x40247, 0, x37321 * sizeof(int));
  char** x40248 = (char**)malloc(x37321 * sizeof(char*));
  memset(x40248, 0, x37321 * sizeof(char*));
  int x37330 = O_RDONLY;
  int x37331 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x37330);
  /* VAR */ struct stat x37332 = x37162;
  struct stat x37333 = x37332;
  struct stat* x37334 = &x37333;
  int x37335 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x37334);
  size_t x37336 = x37334->st_size;
  int x37337 = PROT_READ;
  int x37338 = MAP_PRIVATE;
  char* x67 = mmap(NULL, x37336, x37337, x37338, x37331, 0);
  /* VAR */ int x68 = 0;
  while(1) {
    
    int x69 = x68;
    int x70 = x69<(x37321);
    /* VAR */ int ite69646 = 0;
    if(x70) {
      char x85862 = *x67;
      int x85863 = x85862!=('\0');
      ite69646 = x85863;
    } else {
      
      ite69646 = 0;
    };
    int x67003 = ite69646;
    if (!(x67003)) break; 
    
    /* VAR */ int x37346 = 0;
    int x37347 = x37346;
    int* x37348 = &x37347;
    char* x37349 = strntoi_unchecked(x67, x37348);
    x67 = x37349;
    char* x40271 = (char*)malloc(26 * sizeof(char));
    memset(x40271, 0, 26 * sizeof(char));
    /* VAR */ char* x37352 = x67;
    while(1) {
      
      char x37353 = *x67;
      int x37354 = x37353!=('|');
      /* VAR */ int ite69665 = 0;
      if(x37354) {
        char x85880 = *x67;
        int x85881 = x85880!=('\n');
        ite69665 = x85881;
      } else {
        
        ite69665 = 0;
      };
      int x67015 = ite69665;
      if (!(x67015)) break; 
      
      x67 += 1;
    };
    char* x37360 = x37352;
    int x37361 = x67 - x37360;
    char* x37362 = x37352;
    char* x37363 = strncpy(x40271, x37362, x37361);
    x67 += 1;
    /* VAR */ int x37370 = 0;
    int x37371 = x37370;
    int* x37372 = &x37371;
    char* x37373 = strntoi_unchecked(x67, x37372);
    x67 = x37373;
    char* x40294 = (char*)malloc(153 * sizeof(char));
    memset(x40294, 0, 153 * sizeof(char));
    /* VAR */ char* x37376 = x67;
    while(1) {
      
      char x37377 = *x67;
      int x37378 = x37377!=('|');
      /* VAR */ int ite69693 = 0;
      if(x37378) {
        char x85907 = *x67;
        int x85908 = x85907!=('\n');
        ite69693 = x85908;
      } else {
        
        ite69693 = 0;
      };
      int x67036 = ite69693;
      if (!(x67036)) break; 
      
      x67 += 1;
    };
    char* x37384 = x37376;
    int x37385 = x67 - x37384;
    char* x37386 = x37376;
    char* x37387 = strncpy(x40294, x37386, x37385);
    x67 += 1;
    int x92 = x68;
    *(x40245 + x92) = x37347;
    *(x40246 + x92) = x40271;
    *(x40247 + x92) = x37371;
    *(x40248 + x92) = x40294;
    int x94 = x68;
    int x95 = x94+(1);
    x68 = x95;
  };
  FILE* x37402 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x37403 = 0;
  int x37404 = x37403;
  int* x37405 = &x37404;
  int x37406 = fscanf(x37402, "%d", x37405);
  pclose(x37402);
  int* x40326 = (int*)malloc(x37404 * sizeof(int));
  memset(x40326, 0, x37404 * sizeof(int));
  int* x40327 = (int*)malloc(x37404 * sizeof(int));
  memset(x40327, 0, x37404 * sizeof(int));
  char* x40328 = (char*)malloc(x37404 * sizeof(char));
  memset(x40328, 0, x37404 * sizeof(char));
  double* x40329 = (double*)malloc(x37404 * sizeof(double));
  memset(x40329, 0, x37404 * sizeof(double));
  int* x40330 = (int*)malloc(x37404 * sizeof(int));
  memset(x40330, 0, x37404 * sizeof(int));
  char** x40331 = (char**)malloc(x37404 * sizeof(char*));
  memset(x40331, 0, x37404 * sizeof(char*));
  char** x40332 = (char**)malloc(x37404 * sizeof(char*));
  memset(x40332, 0, x37404 * sizeof(char*));
  int* x40333 = (int*)malloc(x37404 * sizeof(int));
  memset(x40333, 0, x37404 * sizeof(int));
  char** x40334 = (char**)malloc(x37404 * sizeof(char*));
  memset(x40334, 0, x37404 * sizeof(char*));
  int x37418 = O_RDONLY;
  int x37419 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x37418);
  /* VAR */ struct stat x37420 = x37162;
  struct stat x37421 = x37420;
  struct stat* x37422 = &x37421;
  int x37423 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x37422);
  size_t x37424 = x37422->st_size;
  int x37425 = PROT_READ;
  int x37426 = MAP_PRIVATE;
  char* x100 = mmap(NULL, x37424, x37425, x37426, x37419, 0);
  /* VAR */ int x101 = 0;
  while(1) {
    
    int x102 = x101;
    int x103 = x102<(x37404);
    /* VAR */ int ite69748 = 0;
    if(x103) {
      char x85961 = *x100;
      int x85962 = x85961!=('\0');
      ite69748 = x85962;
    } else {
      
      ite69748 = 0;
    };
    int x67084 = ite69748;
    if (!(x67084)) break; 
    
    /* VAR */ int x37434 = 0;
    int x37435 = x37434;
    int* x37436 = &x37435;
    char* x37437 = strntoi_unchecked(x100, x37436);
    x100 = x37437;
    /* VAR */ int x37439 = 0;
    int x37440 = x37439;
    int* x37441 = &x37440;
    char* x37442 = strntoi_unchecked(x100, x37441);
    x100 = x37442;
    char x37444 = *x100;
    /* VAR */ char x37445 = x37444;
    x100 += 1;
    x100 += 1;
    char x37448 = x37445;
    /* VAR */ double x37449 = 0.0;
    double x37450 = x37449;
    double* x37451 = &x37450;
    char* x37452 = strntod_unchecked(x100, x37451);
    x100 = x37452;
    /* VAR */ int x37454 = 0;
    int x37455 = x37454;
    int* x37456 = &x37455;
    char* x37457 = strntoi_unchecked(x100, x37456);
    x100 = x37457;
    /* VAR */ int x37459 = 0;
    int x37460 = x37459;
    int* x37461 = &x37460;
    char* x37462 = strntoi_unchecked(x100, x37461);
    x100 = x37462;
    /* VAR */ int x37464 = 0;
    int x37465 = x37464;
    int* x37466 = &x37465;
    char* x37467 = strntoi_unchecked(x100, x37466);
    x100 = x37467;
    int x37469 = x37455*(10000);
    int x37470 = x37460*(100);
    int x37471 = x37469+(x37470);
    int x37472 = x37471+(x37465);
    char* x40391 = (char*)malloc(16 * sizeof(char));
    memset(x40391, 0, 16 * sizeof(char));
    /* VAR */ char* x37474 = x100;
    while(1) {
      
      char x37475 = *x100;
      int x37476 = x37475!=('|');
      /* VAR */ int ite69801 = 0;
      if(x37476) {
        char x86013 = *x100;
        int x86014 = x86013!=('\n');
        ite69801 = x86014;
      } else {
        
        ite69801 = 0;
      };
      int x67130 = ite69801;
      if (!(x67130)) break; 
      
      x100 += 1;
    };
    char* x37482 = x37474;
    int x37483 = x100 - x37482;
    char* x37484 = x37474;
    char* x37485 = strncpy(x40391, x37484, x37483);
    x100 += 1;
    char* x40409 = (char*)malloc(16 * sizeof(char));
    memset(x40409, 0, 16 * sizeof(char));
    /* VAR */ char* x37493 = x100;
    while(1) {
      
      char x37494 = *x100;
      int x37495 = x37494!=('|');
      /* VAR */ int ite69824 = 0;
      if(x37495) {
        char x86035 = *x100;
        int x86036 = x86035!=('\n');
        ite69824 = x86036;
      } else {
        
        ite69824 = 0;
      };
      int x67146 = ite69824;
      if (!(x67146)) break; 
      
      x100 += 1;
    };
    char* x37501 = x37493;
    int x37502 = x100 - x37501;
    char* x37503 = x37493;
    char* x37504 = strncpy(x40409, x37503, x37502);
    x100 += 1;
    /* VAR */ int x37511 = 0;
    int x37512 = x37511;
    int* x37513 = &x37512;
    char* x37514 = strntoi_unchecked(x100, x37513);
    x100 = x37514;
    char* x40432 = (char*)malloc(80 * sizeof(char));
    memset(x40432, 0, 80 * sizeof(char));
    /* VAR */ char* x37517 = x100;
    while(1) {
      
      char x37518 = *x100;
      int x37519 = x37518!=('|');
      /* VAR */ int ite69852 = 0;
      if(x37519) {
        char x86062 = *x100;
        int x86063 = x86062!=('\n');
        ite69852 = x86063;
      } else {
        
        ite69852 = 0;
      };
      int x67167 = ite69852;
      if (!(x67167)) break; 
      
      x100 += 1;
    };
    char* x37525 = x37517;
    int x37526 = x100 - x37525;
    char* x37527 = x37517;
    char* x37528 = strncpy(x40432, x37527, x37526);
    x100 += 1;
    int x136 = x101;
    *(x40326 + x136) = x37435;
    *(x40327 + x136) = x37440;
    *(x40328 + x136) = x37448;
    *(x40329 + x136) = x37450;
    *(x40330 + x136) = x37472;
    *(x40331 + x136) = x40391;
    *(x40332 + x136) = x40409;
    *(x40333 + x136) = x37512;
    *(x40334 + x136) = x40432;
    int x138 = x101;
    int x139 = x138+(1);
    x101 = x139;
  };
  FILE* x37548 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x37549 = 0;
  int x37550 = x37549;
  int* x37551 = &x37550;
  int x37552 = fscanf(x37548, "%d", x37551);
  pclose(x37548);
  struct PARTSUPPRecord* x40469 = (struct PARTSUPPRecord*)malloc(x37550 * sizeof(struct PARTSUPPRecord));
  memset(x40469, 0, x37550 * sizeof(struct PARTSUPPRecord));
  int x37556 = O_RDONLY;
  int x37557 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x37556);
  /* VAR */ struct stat x37558 = x37162;
  struct stat x37559 = x37558;
  struct stat* x37560 = &x37559;
  int x37561 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x37560);
  size_t x37562 = x37560->st_size;
  int x37563 = PROT_READ;
  int x37564 = MAP_PRIVATE;
  char* x144 = mmap(NULL, x37562, x37563, x37564, x37557, 0);
  /* VAR */ int x145 = 0;
  while(1) {
    
    int x146 = x145;
    int x147 = x146<(x37550);
    /* VAR */ int ite69904 = 0;
    if(x147) {
      char x86113 = *x144;
      int x86114 = x86113!=('\0');
      ite69904 = x86114;
    } else {
      
      ite69904 = 0;
    };
    int x67212 = ite69904;
    if (!(x67212)) break; 
    
    /* VAR */ int x37572 = 0;
    int x37573 = x37572;
    int* x37574 = &x37573;
    char* x37575 = strntoi_unchecked(x144, x37574);
    x144 = x37575;
    /* VAR */ int x37577 = 0;
    int x37578 = x37577;
    int* x37579 = &x37578;
    char* x37580 = strntoi_unchecked(x144, x37579);
    x144 = x37580;
    /* VAR */ int x37582 = 0;
    int x37583 = x37582;
    int* x37584 = &x37583;
    char* x37585 = strntoi_unchecked(x144, x37584);
    x144 = x37585;
    /* VAR */ double x37587 = 0.0;
    double x37588 = x37587;
    double* x37589 = &x37588;
    char* x37590 = strntod_unchecked(x144, x37589);
    x144 = x37590;
    char* x40507 = (char*)malloc(200 * sizeof(char));
    memset(x40507, 0, 200 * sizeof(char));
    /* VAR */ char* x37593 = x144;
    while(1) {
      
      char x37594 = *x144;
      int x37595 = x37594!=('|');
      /* VAR */ int ite69938 = 0;
      if(x37595) {
        char x86146 = *x144;
        int x86147 = x86146!=('\n');
        ite69938 = x86147;
      } else {
        
        ite69938 = 0;
      };
      int x67239 = ite69938;
      if (!(x67239)) break; 
      
      x144 += 1;
    };
    char* x37601 = x37593;
    int x37602 = x144 - x37601;
    char* x37603 = x37593;
    char* x37604 = strncpy(x40507, x37603, x37602);
    x144 += 1;
    struct PARTSUPPRecord* x42077 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x42077, 0, 1 * sizeof(struct PARTSUPPRecord));
    x42077->PS_PARTKEY = x37573; x42077->PS_SUPPKEY = x37578; x42077->PS_AVAILQTY = x37583; x42077->PS_SUPPLYCOST = x37588; x42077->PS_COMMENT = x40507; x42077->next = NULL;
    int x163 = x145;
    int x51579 = x42077==(NULL);
    /* VAR */ int ite69961 = 0;
    if(x51579) {
      ite69961 = 1;
    } else {
      
      char* x86169 = x42077->PS_COMMENT;
      int x86170 = x86169==(NULL);
      /* VAR */ int x86171 = 0;
      if(x86170) {
        x86171 = 1;
      } else {
        
        int x86174 = strcmp(x86169, "");
        int x86175 = !(x86174);
        x86171 = x86175;
      };
      int x86178 = x86171;
      ite69961 = x86178;
    };
    int x67255 = ite69961;
    if(x67255) {
      *(x40469 + x163) = (const struct PARTSUPPRecord){0};
    } else {
      
      struct PARTSUPPRecord x40529 = *x42077;
      *(x40469 + x163) = x40529;
      struct PARTSUPPRecord* x40531 = &(x40469[x163]);
      x42077 = x40531;
    };
    int x165 = x145;
    int x166 = x165+(1);
    x145 = x166;
  };
  FILE* x37617 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x37618 = 0;
  int x37619 = x37618;
  int* x37620 = &x37619;
  int x37621 = fscanf(x37617, "%d", x37620);
  pclose(x37617);
  int* x40543 = (int*)malloc(x37619 * sizeof(int));
  memset(x40543, 0, x37619 * sizeof(int));
  char** x40544 = (char**)malloc(x37619 * sizeof(char*));
  memset(x40544, 0, x37619 * sizeof(char*));
  char** x40545 = (char**)malloc(x37619 * sizeof(char*));
  memset(x40545, 0, x37619 * sizeof(char*));
  int* x40546 = (int*)malloc(x37619 * sizeof(int));
  memset(x40546, 0, x37619 * sizeof(int));
  char** x40547 = (char**)malloc(x37619 * sizeof(char*));
  memset(x40547, 0, x37619 * sizeof(char*));
  double* x40548 = (double*)malloc(x37619 * sizeof(double));
  memset(x40548, 0, x37619 * sizeof(double));
  char** x40549 = (char**)malloc(x37619 * sizeof(char*));
  memset(x40549, 0, x37619 * sizeof(char*));
  int x37631 = O_RDONLY;
  int x37632 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x37631);
  /* VAR */ struct stat x37633 = x37162;
  struct stat x37634 = x37633;
  struct stat* x37635 = &x37634;
  int x37636 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x37635);
  size_t x37637 = x37635->st_size;
  int x37638 = PROT_READ;
  int x37639 = MAP_PRIVATE;
  char* x171 = mmap(NULL, x37637, x37638, x37639, x37632, 0);
  /* VAR */ int x172 = 0;
  while(1) {
    
    int x173 = x172;
    int x174 = x173<(x37619);
    /* VAR */ int ite70008 = 0;
    if(x174) {
      char x86220 = *x171;
      int x86221 = x86220!=('\0');
      ite70008 = x86221;
    } else {
      
      ite70008 = 0;
    };
    int x67293 = ite70008;
    if (!(x67293)) break; 
    
    /* VAR */ int x37647 = 0;
    int x37648 = x37647;
    int* x37649 = &x37648;
    char* x37650 = strntoi_unchecked(x171, x37649);
    x171 = x37650;
    char* x40572 = (char*)malloc(26 * sizeof(char));
    memset(x40572, 0, 26 * sizeof(char));
    /* VAR */ char* x37653 = x171;
    while(1) {
      
      char x37654 = *x171;
      int x37655 = x37654!=('|');
      /* VAR */ int ite70027 = 0;
      if(x37655) {
        char x86238 = *x171;
        int x86239 = x86238!=('\n');
        ite70027 = x86239;
      } else {
        
        ite70027 = 0;
      };
      int x67305 = ite70027;
      if (!(x67305)) break; 
      
      x171 += 1;
    };
    char* x37661 = x37653;
    int x37662 = x171 - x37661;
    char* x37663 = x37653;
    char* x37664 = strncpy(x40572, x37663, x37662);
    x171 += 1;
    char* x40590 = (char*)malloc(41 * sizeof(char));
    memset(x40590, 0, 41 * sizeof(char));
    /* VAR */ char* x37672 = x171;
    while(1) {
      
      char x37673 = *x171;
      int x37674 = x37673!=('|');
      /* VAR */ int ite70050 = 0;
      if(x37674) {
        char x86260 = *x171;
        int x86261 = x86260!=('\n');
        ite70050 = x86261;
      } else {
        
        ite70050 = 0;
      };
      int x67321 = ite70050;
      if (!(x67321)) break; 
      
      x171 += 1;
    };
    char* x37680 = x37672;
    int x37681 = x171 - x37680;
    char* x37682 = x37672;
    char* x37683 = strncpy(x40590, x37682, x37681);
    x171 += 1;
    /* VAR */ int x37690 = 0;
    int x37691 = x37690;
    int* x37692 = &x37691;
    char* x37693 = strntoi_unchecked(x171, x37692);
    x171 = x37693;
    char* x40613 = (char*)malloc(16 * sizeof(char));
    memset(x40613, 0, 16 * sizeof(char));
    /* VAR */ char* x37696 = x171;
    while(1) {
      
      char x37697 = *x171;
      int x37698 = x37697!=('|');
      /* VAR */ int ite70078 = 0;
      if(x37698) {
        char x86287 = *x171;
        int x86288 = x86287!=('\n');
        ite70078 = x86288;
      } else {
        
        ite70078 = 0;
      };
      int x67342 = ite70078;
      if (!(x67342)) break; 
      
      x171 += 1;
    };
    char* x37704 = x37696;
    int x37705 = x171 - x37704;
    char* x37706 = x37696;
    char* x37707 = strncpy(x40613, x37706, x37705);
    x171 += 1;
    /* VAR */ double x37714 = 0.0;
    double x37715 = x37714;
    double* x37716 = &x37715;
    char* x37717 = strntod_unchecked(x171, x37716);
    x171 = x37717;
    char* x40636 = (char*)malloc(102 * sizeof(char));
    memset(x40636, 0, 102 * sizeof(char));
    /* VAR */ char* x37720 = x171;
    while(1) {
      
      char x37721 = *x171;
      int x37722 = x37721!=('|');
      /* VAR */ int ite70106 = 0;
      if(x37722) {
        char x86314 = *x171;
        int x86315 = x86314!=('\n');
        ite70106 = x86315;
      } else {
        
        ite70106 = 0;
      };
      int x67363 = ite70106;
      if (!(x67363)) break; 
      
      x171 += 1;
    };
    char* x37728 = x37720;
    int x37729 = x171 - x37728;
    char* x37730 = x37720;
    char* x37731 = strncpy(x40636, x37730, x37729);
    x171 += 1;
    int x213 = x172;
    *(x40543 + x213) = x37648;
    *(x40544 + x213) = x40572;
    *(x40545 + x213) = x40590;
    *(x40546 + x213) = x37691;
    *(x40547 + x213) = x40613;
    *(x40548 + x213) = x37715;
    *(x40549 + x213) = x40636;
    int x215 = x172;
    int x216 = x215+(1);
    x172 = x216;
  };
  FILE* x37749 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x37750 = 0;
  int x37751 = x37750;
  int* x37752 = &x37751;
  int x37753 = fscanf(x37749, "%d", x37752);
  pclose(x37749);
  struct LINEITEMRecord* x40671 = (struct LINEITEMRecord*)malloc(x37751 * sizeof(struct LINEITEMRecord));
  memset(x40671, 0, x37751 * sizeof(struct LINEITEMRecord));
  int x37757 = O_RDONLY;
  int x37758 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x37757);
  /* VAR */ struct stat x37759 = x37162;
  struct stat x37760 = x37759;
  struct stat* x37761 = &x37760;
  int x37762 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x37761);
  size_t x37763 = x37761->st_size;
  int x37764 = PROT_READ;
  int x37765 = MAP_PRIVATE;
  char* x221 = mmap(NULL, x37763, x37764, x37765, x37758, 0);
  /* VAR */ int x222 = 0;
  while(1) {
    
    int x223 = x222;
    int x224 = x223<(x37751);
    /* VAR */ int ite70156 = 0;
    if(x224) {
      char x86363 = *x221;
      int x86364 = x86363!=('\0');
      ite70156 = x86364;
    } else {
      
      ite70156 = 0;
    };
    int x67406 = ite70156;
    if (!(x67406)) break; 
    
    /* VAR */ int x37773 = 0;
    int x37774 = x37773;
    int* x37775 = &x37774;
    char* x37776 = strntoi_unchecked(x221, x37775);
    x221 = x37776;
    /* VAR */ int x37778 = 0;
    int x37779 = x37778;
    int* x37780 = &x37779;
    char* x37781 = strntoi_unchecked(x221, x37780);
    x221 = x37781;
    /* VAR */ int x37783 = 0;
    int x37784 = x37783;
    int* x37785 = &x37784;
    char* x37786 = strntoi_unchecked(x221, x37785);
    x221 = x37786;
    /* VAR */ int x37788 = 0;
    int x37789 = x37788;
    int* x37790 = &x37789;
    char* x37791 = strntoi_unchecked(x221, x37790);
    x221 = x37791;
    /* VAR */ double x37793 = 0.0;
    double x37794 = x37793;
    double* x37795 = &x37794;
    char* x37796 = strntod_unchecked(x221, x37795);
    x221 = x37796;
    /* VAR */ double x37798 = 0.0;
    double x37799 = x37798;
    double* x37800 = &x37799;
    char* x37801 = strntod_unchecked(x221, x37800);
    x221 = x37801;
    /* VAR */ double x37803 = 0.0;
    double x37804 = x37803;
    double* x37805 = &x37804;
    char* x37806 = strntod_unchecked(x221, x37805);
    x221 = x37806;
    /* VAR */ double x37808 = 0.0;
    double x37809 = x37808;
    double* x37810 = &x37809;
    char* x37811 = strntod_unchecked(x221, x37810);
    x221 = x37811;
    char x37813 = *x221;
    /* VAR */ char x37814 = x37813;
    x221 += 1;
    x221 += 1;
    char x37817 = x37814;
    char x37818 = *x221;
    /* VAR */ char x37819 = x37818;
    x221 += 1;
    x221 += 1;
    char x37822 = x37819;
    /* VAR */ int x37823 = 0;
    int x37824 = x37823;
    int* x37825 = &x37824;
    char* x37826 = strntoi_unchecked(x221, x37825);
    x221 = x37826;
    /* VAR */ int x37828 = 0;
    int x37829 = x37828;
    int* x37830 = &x37829;
    char* x37831 = strntoi_unchecked(x221, x37830);
    x221 = x37831;
    /* VAR */ int x37833 = 0;
    int x37834 = x37833;
    int* x37835 = &x37834;
    char* x37836 = strntoi_unchecked(x221, x37835);
    x221 = x37836;
    int x37838 = x37824*(10000);
    int x37839 = x37829*(100);
    int x37840 = x37838+(x37839);
    int x37841 = x37840+(x37834);
    /* VAR */ int x37842 = 0;
    int x37843 = x37842;
    int* x37844 = &x37843;
    char* x37845 = strntoi_unchecked(x221, x37844);
    x221 = x37845;
    /* VAR */ int x37847 = 0;
    int x37848 = x37847;
    int* x37849 = &x37848;
    char* x37850 = strntoi_unchecked(x221, x37849);
    x221 = x37850;
    /* VAR */ int x37852 = 0;
    int x37853 = x37852;
    int* x37854 = &x37853;
    char* x37855 = strntoi_unchecked(x221, x37854);
    x221 = x37855;
    int x37857 = x37843*(10000);
    int x37858 = x37848*(100);
    int x37859 = x37857+(x37858);
    int x37860 = x37859+(x37853);
    /* VAR */ int x37861 = 0;
    int x37862 = x37861;
    int* x37863 = &x37862;
    char* x37864 = strntoi_unchecked(x221, x37863);
    x221 = x37864;
    /* VAR */ int x37866 = 0;
    int x37867 = x37866;
    int* x37868 = &x37867;
    char* x37869 = strntoi_unchecked(x221, x37868);
    x221 = x37869;
    /* VAR */ int x37871 = 0;
    int x37872 = x37871;
    int* x37873 = &x37872;
    char* x37874 = strntoi_unchecked(x221, x37873);
    x221 = x37874;
    int x37876 = x37862*(10000);
    int x37877 = x37867*(100);
    int x37878 = x37876+(x37877);
    int x37879 = x37878+(x37872);
    char* x40796 = (char*)malloc(26 * sizeof(char));
    memset(x40796, 0, 26 * sizeof(char));
    /* VAR */ char* x37881 = x221;
    while(1) {
      
      char x37882 = *x221;
      int x37883 = x37882!=('|');
      /* VAR */ int ite70277 = 0;
      if(x37883) {
        char x86483 = *x221;
        int x86484 = x86483!=('\n');
        ite70277 = x86484;
      } else {
        
        ite70277 = 0;
      };
      int x67520 = ite70277;
      if (!(x67520)) break; 
      
      x221 += 1;
    };
    char* x37889 = x37881;
    int x37890 = x221 - x37889;
    char* x37891 = x37881;
    char* x37892 = strncpy(x40796, x37891, x37890);
    x221 += 1;
    char* x40814 = (char*)malloc(11 * sizeof(char));
    memset(x40814, 0, 11 * sizeof(char));
    /* VAR */ char* x37900 = x221;
    while(1) {
      
      char x37901 = *x221;
      int x37902 = x37901!=('|');
      /* VAR */ int ite70300 = 0;
      if(x37902) {
        char x86505 = *x221;
        int x86506 = x86505!=('\n');
        ite70300 = x86506;
      } else {
        
        ite70300 = 0;
      };
      int x67536 = ite70300;
      if (!(x67536)) break; 
      
      x221 += 1;
    };
    char* x37908 = x37900;
    int x37909 = x221 - x37908;
    char* x37910 = x37900;
    char* x37911 = strncpy(x40814, x37910, x37909);
    x221 += 1;
    char* x40832 = (char*)malloc(45 * sizeof(char));
    memset(x40832, 0, 45 * sizeof(char));
    /* VAR */ char* x37919 = x221;
    while(1) {
      
      char x37920 = *x221;
      int x37921 = x37920!=('|');
      /* VAR */ int ite70323 = 0;
      if(x37921) {
        char x86527 = *x221;
        int x86528 = x86527!=('\n');
        ite70323 = x86528;
      } else {
        
        ite70323 = 0;
      };
      int x67552 = ite70323;
      if (!(x67552)) break; 
      
      x221 += 1;
    };
    char* x37927 = x37919;
    int x37928 = x221 - x37927;
    char* x37929 = x37919;
    char* x37930 = strncpy(x40832, x37929, x37928);
    x221 += 1;
    struct LINEITEMRecord* x42404 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x42404, 0, 1 * sizeof(struct LINEITEMRecord));
    x42404->L_ORDERKEY = x37774; x42404->L_PARTKEY = x37779; x42404->L_SUPPKEY = x37784; x42404->L_LINENUMBER = x37789; x42404->L_QUANTITY = x37794; x42404->L_EXTENDEDPRICE = x37799; x42404->L_DISCOUNT = x37804; x42404->L_TAX = x37809; x42404->L_RETURNFLAG = x37817; x42404->L_LINESTATUS = x37822; x42404->L_SHIPDATE = x37841; x42404->L_COMMITDATE = x37860; x42404->L_RECEIPTDATE = x37879; x42404->L_SHIPINSTRUCT = x40796; x42404->L_SHIPMODE = x40814; x42404->L_COMMENT = x40832; x42404->next = NULL;
    int x265 = x222;
    int x51909 = x42404==(NULL);
    /* VAR */ int ite70346 = 0;
    if(x51909) {
      ite70346 = 1;
    } else {
      
      char* x86550 = x42404->L_SHIPINSTRUCT;
      int x86551 = x86550==(NULL);
      /* VAR */ int x86552 = 0;
      if(x86551) {
        x86552 = 1;
      } else {
        
        int x86555 = strcmp(x86550, "");
        int x86556 = !(x86555);
        x86552 = x86556;
      };
      int x86559 = x86552;
      ite70346 = x86559;
    };
    int x67568 = ite70346;
    if(x67568) {
      *(x40671 + x265) = (const struct LINEITEMRecord){0};
    } else {
      
      struct LINEITEMRecord x40854 = *x42404;
      *(x40671 + x265) = x40854;
      struct LINEITEMRecord* x40856 = &(x40671[x265]);
      x42404 = x40856;
    };
    int x267 = x222;
    int x268 = x267+(1);
    x222 = x268;
  };
  int x272 = 0;
  for(; x272 < 1 ; x272 += 1) {
    
    /* VAR */ int x88115 = 0;
    struct AGGRecord_Q9GRPRecord* x88116 = (struct AGGRecord_Q9GRPRecord*)malloc(1048576 * sizeof(struct AGGRecord_Q9GRPRecord));
    memset(x88116, 0, 1048576 * sizeof(struct AGGRecord_Q9GRPRecord));
    int x62851 = 0;
    for(; x62851 < 1048576 ; x62851 += 1) {
      
      *(x88116 + x62851) = (const struct AGGRecord_Q9GRPRecord){0};
    };
    struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x88122 = (struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord*)malloc(1048576 * sizeof(struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord));
    memset(x88122, 0, 1048576 * sizeof(struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord));
    struct PARTSUPPRecord* x88123 = (struct PARTSUPPRecord*)malloc(1048576 * sizeof(struct PARTSUPPRecord));
    memset(x88123, 0, 1048576 * sizeof(struct PARTSUPPRecord));
    struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x88124 = (struct LINEITEMRecord_PARTRecord_SUPPLIERRecord*)malloc(1048576 * sizeof(struct LINEITEMRecord_PARTRecord_SUPPLIERRecord));
    memset(x88124, 0, 1048576 * sizeof(struct LINEITEMRecord_PARTRecord_SUPPLIERRecord));
    struct LINEITEMRecord_PARTRecord* x88125 = (struct LINEITEMRecord_PARTRecord*)malloc(1048576 * sizeof(struct LINEITEMRecord_PARTRecord));
    memset(x88125, 0, 1048576 * sizeof(struct LINEITEMRecord_PARTRecord));
    struct LINEITEMRecord* x88126 = (struct LINEITEMRecord*)malloc(1048576 * sizeof(struct LINEITEMRecord));
    memset(x88126, 0, 1048576 * sizeof(struct LINEITEMRecord));
    /* VAR */ int x88127 = 0;
    struct LINEITEMRecord_PARTRecord* x88128 = (struct LINEITEMRecord_PARTRecord*)malloc(48000000 * sizeof(struct LINEITEMRecord_PARTRecord));
    memset(x88128, 0, 48000000 * sizeof(struct LINEITEMRecord_PARTRecord));
    /* VAR */ int x88129 = 0;
    while(1) {
      
      int x34975 = x88129;
      int x34976 = x34975<(48000000);
      if (!(x34976)) break; 
      
      int x34977 = x88129;
      struct LINEITEMRecord_PARTRecord* x42440 = (struct LINEITEMRecord_PARTRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord));
      memset(x42440, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord));
      x42440->L_ORDERKEY = 0; x42440->L_PARTKEY = 0; x42440->L_SUPPKEY = 0; x42440->L_LINENUMBER = 0; x42440->L_QUANTITY = 0.0; x42440->L_EXTENDEDPRICE = 0.0; x42440->L_DISCOUNT = 0.0; x42440->L_TAX = 0.0; x42440->L_RETURNFLAG = '\0'; x42440->L_LINESTATUS = '\0'; x42440->L_SHIPDATE = 0; x42440->L_COMMITDATE = 0; x42440->L_RECEIPTDATE = 0; x42440->L_SHIPINSTRUCT = ""; x42440->L_SHIPMODE = ""; x42440->L_COMMENT = ""; x42440->P_PARTKEY = 0; x42440->P_NAME = ""; x42440->P_MFGR = ""; x42440->P_BRAND = ""; x42440->P_TYPE = ""; x42440->P_SIZE = 0; x42440->P_CONTAINER = ""; x42440->P_RETAILPRICE = 0.0; x42440->P_COMMENT = ""; x42440->next = NULL;
      int x51947 = x42440==(NULL);
      /* VAR */ int ite71708 = 0;
      if(x51947) {
        ite71708 = 1;
      } else {
        
        char* x88141 = x42440->L_SHIPINSTRUCT;
        int x88142 = x88141==(NULL);
        /* VAR */ int x88143 = 0;
        if(x88142) {
          x88143 = 1;
        } else {
          
          int x88146 = strcmp(x88141, "");
          int x88147 = !(x88146);
          x88143 = x88147;
        };
        int x88150 = x88143;
        ite71708 = x88150;
      };
      int x68523 = ite71708;
      if(x68523) {
        *(x88128 + x34977) = (const struct LINEITEMRecord_PARTRecord){0};
      } else {
        
        struct LINEITEMRecord_PARTRecord x40887 = *x42440;
        *(x88128 + x34977) = x40887;
        struct LINEITEMRecord_PARTRecord* x40889 = &(x88128[x34977]);
        x42440 = x40889;
      };
      int x34980 = x88129;
      int x34981 = x34980+(1);
      x88129 = x34981;
    };
    /* VAR */ int x88163 = 0;
    struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x88164 = (struct LINEITEMRecord_PARTRecord_SUPPLIERRecord*)malloc(48000000 * sizeof(struct LINEITEMRecord_PARTRecord_SUPPLIERRecord));
    memset(x88164, 0, 48000000 * sizeof(struct LINEITEMRecord_PARTRecord_SUPPLIERRecord));
    /* VAR */ int x88165 = 0;
    while(1) {
      
      int x34987 = x88165;
      int x34988 = x34987<(48000000);
      if (!(x34988)) break; 
      
      int x34989 = x88165;
      struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x42460 = (struct LINEITEMRecord_PARTRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord_SUPPLIERRecord));
      memset(x42460, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord_SUPPLIERRecord));
      x42460->L_ORDERKEY = 0; x42460->L_PARTKEY = 0; x42460->L_SUPPKEY = 0; x42460->L_LINENUMBER = 0; x42460->L_QUANTITY = 0.0; x42460->L_EXTENDEDPRICE = 0.0; x42460->L_DISCOUNT = 0.0; x42460->L_TAX = 0.0; x42460->L_RETURNFLAG = '\0'; x42460->L_LINESTATUS = '\0'; x42460->L_SHIPDATE = 0; x42460->L_COMMITDATE = 0; x42460->L_RECEIPTDATE = 0; x42460->L_SHIPINSTRUCT = ""; x42460->L_SHIPMODE = ""; x42460->L_COMMENT = ""; x42460->P_PARTKEY = 0; x42460->P_NAME = ""; x42460->P_MFGR = ""; x42460->P_BRAND = ""; x42460->P_TYPE = ""; x42460->P_SIZE = 0; x42460->P_CONTAINER = ""; x42460->P_RETAILPRICE = 0.0; x42460->P_COMMENT = ""; x42460->S_SUPPKEY = 0; x42460->S_NAME = ""; x42460->S_ADDRESS = ""; x42460->S_NATIONKEY = 0; x42460->S_PHONE = ""; x42460->S_ACCTBAL = 0.0; x42460->S_COMMENT = ""; x42460->next = NULL;
      int x51970 = x42460==(NULL);
      /* VAR */ int ite71739 = 0;
      if(x51970) {
        ite71739 = 1;
      } else {
        
        char* x88177 = x42460->L_SHIPINSTRUCT;
        int x88178 = x88177==(NULL);
        /* VAR */ int x88179 = 0;
        if(x88178) {
          x88179 = 1;
        } else {
          
          int x88182 = strcmp(x88177, "");
          int x88183 = !(x88182);
          x88179 = x88183;
        };
        int x88186 = x88179;
        ite71739 = x88186;
      };
      int x68545 = ite71739;
      if(x68545) {
        *(x88164 + x34989) = (const struct LINEITEMRecord_PARTRecord_SUPPLIERRecord){0};
      } else {
        
        struct LINEITEMRecord_PARTRecord_SUPPLIERRecord x40905 = *x42460;
        *(x88164 + x34989) = x40905;
        struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x40907 = &(x88164[x34989]);
        x42460 = x40907;
      };
      int x34992 = x88165;
      int x34993 = x34992+(1);
      x88165 = x34993;
    };
    /* VAR */ int x88199 = 0;
    struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x88200 = (struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord*)malloc(48000000 * sizeof(struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord));
    memset(x88200, 0, 48000000 * sizeof(struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord));
    /* VAR */ int x88201 = 0;
    while(1) {
      
      int x34999 = x88201;
      int x35000 = x34999<(48000000);
      if (!(x35000)) break; 
      
      int x35001 = x88201;
      struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x42480 = (struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord*)malloc(1 * sizeof(struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord));
      memset(x42480, 0, 1 * sizeof(struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord));
      x42480->PS_PARTKEY = 0; x42480->PS_SUPPKEY = 0; x42480->PS_AVAILQTY = 0; x42480->PS_SUPPLYCOST = 0.0; x42480->PS_COMMENT = ""; x42480->L_ORDERKEY = 0; x42480->L_PARTKEY = 0; x42480->L_SUPPKEY = 0; x42480->L_LINENUMBER = 0; x42480->L_QUANTITY = 0.0; x42480->L_EXTENDEDPRICE = 0.0; x42480->L_DISCOUNT = 0.0; x42480->L_TAX = 0.0; x42480->L_RETURNFLAG = '\0'; x42480->L_LINESTATUS = '\0'; x42480->L_SHIPDATE = 0; x42480->L_COMMITDATE = 0; x42480->L_RECEIPTDATE = 0; x42480->L_SHIPINSTRUCT = ""; x42480->L_SHIPMODE = ""; x42480->L_COMMENT = ""; x42480->P_PARTKEY = 0; x42480->P_NAME = ""; x42480->P_MFGR = ""; x42480->P_BRAND = ""; x42480->P_TYPE = ""; x42480->P_SIZE = 0; x42480->P_CONTAINER = ""; x42480->P_RETAILPRICE = 0.0; x42480->P_COMMENT = ""; x42480->S_SUPPKEY = 0; x42480->S_NAME = ""; x42480->S_ADDRESS = ""; x42480->S_NATIONKEY = 0; x42480->S_PHONE = ""; x42480->S_ACCTBAL = 0.0; x42480->S_COMMENT = ""; x42480->N_NATIONKEY = 0; x42480->N_NAME = ""; x42480->N_REGIONKEY = 0; x42480->N_COMMENT = ""; x42480->next = NULL;
      int x51993 = x42480==(NULL);
      /* VAR */ int ite71770 = 0;
      if(x51993) {
        ite71770 = 1;
      } else {
        
        char* x88213 = x42480->PS_COMMENT;
        int x88214 = x88213==(NULL);
        /* VAR */ int x88215 = 0;
        if(x88214) {
          x88215 = 1;
        } else {
          
          int x88218 = strcmp(x88213, "");
          int x88219 = !(x88218);
          x88215 = x88219;
        };
        int x88222 = x88215;
        ite71770 = x88222;
      };
      int x68567 = ite71770;
      if(x68567) {
        *(x88200 + x35001) = (const struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord){0};
      } else {
        
        struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord x40923 = *x42480;
        *(x88200 + x35001) = x40923;
        struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x40925 = &(x88200[x35001]);
        x42480 = x40925;
      };
      int x35004 = x88201;
      int x35005 = x35004+(1);
      x88201 = x35005;
    };
    /* VAR */ int x88235 = 0;
    struct Q9GRPRecord* x88236 = (struct Q9GRPRecord*)malloc(48000000 * sizeof(struct Q9GRPRecord));
    memset(x88236, 0, 48000000 * sizeof(struct Q9GRPRecord));
    /* VAR */ int x88237 = 0;
    while(1) {
      
      int x35011 = x88237;
      int x35012 = x35011<(48000000);
      if (!(x35012)) break; 
      
      int x35013 = x88237;
      struct Q9GRPRecord* x42500 = (struct Q9GRPRecord*)malloc(1 * sizeof(struct Q9GRPRecord));
      memset(x42500, 0, 1 * sizeof(struct Q9GRPRecord));
      x42500->NATION = ""; x42500->O_YEAR = 0;
      int x52016 = x42500==(NULL);
      /* VAR */ int ite71801 = 0;
      if(x52016) {
        ite71801 = 1;
      } else {
        
        char* x88249 = x42500->NATION;
        int x88250 = x88249==(NULL);
        /* VAR */ int x88251 = 0;
        if(x88250) {
          x88251 = 1;
        } else {
          
          int x88254 = strcmp(x88249, "");
          int x88255 = !(x88254);
          x88251 = x88255;
        };
        int x88258 = x88251;
        ite71801 = x88258;
      };
      int x68589 = ite71801;
      if(x68589) {
        *(x88236 + x35013) = (const struct Q9GRPRecord){0};
      } else {
        
        struct Q9GRPRecord x40941 = *x42500;
        *(x88236 + x35013) = x40941;
        struct Q9GRPRecord* x40943 = &(x88236[x35013]);
        x42500 = x40943;
      };
      int x35016 = x88237;
      int x35017 = x35016+(1);
      x88237 = x35017;
    };
    /* VAR */ int x88271 = 0;
    struct AGGRecord_Q9GRPRecord* x88272 = (struct AGGRecord_Q9GRPRecord*)malloc(175 * sizeof(struct AGGRecord_Q9GRPRecord));
    memset(x88272, 0, 175 * sizeof(struct AGGRecord_Q9GRPRecord));
    /* VAR */ int x88273 = 0;
    while(1) {
      
      int x35023 = x88273;
      int x35024 = x35023<(175);
      if (!(x35024)) break; 
      
      int x35025 = x88273;
      struct Q9GRPRecord* x35026 = &(x88236[x35025]);
      struct AGGRecord_Q9GRPRecord* x42521 = (struct AGGRecord_Q9GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q9GRPRecord));
      memset(x42521, 0, 1 * sizeof(struct AGGRecord_Q9GRPRecord));
      x42521->key = x35026; x42521->aggs = 0.0; x42521->next = NULL;
      int x52040 = x42521==(NULL);
      /* VAR */ int ite71833 = 0;
      if(x52040) {
        ite71833 = 1;
      } else {
        
        struct Q9GRPRecord* x88286 = x42521->key;
        int x88287 = x88286==(NULL);
        /* VAR */ int x88288 = 0;
        if(x88287) {
          x88288 = 1;
        } else {
          
          char* x88291 = x88286->NATION;
          int x88292 = x88291==(NULL);
          /* VAR */ int x88293 = 0;
          if(x88292) {
            x88293 = 1;
          } else {
            
            int x88296 = strcmp(x88291, "");
            int x88297 = !(x88296);
            x88293 = x88297;
          };
          int x88300 = x88293;
          x88288 = x88300;
        };
        int x88303 = x88288;
        ite71833 = x88303;
      };
      int x68612 = ite71833;
      if(x68612) {
        *(x88272 + x35025) = (const struct AGGRecord_Q9GRPRecord){0};
      } else {
        
        struct AGGRecord_Q9GRPRecord x40960 = *x42521;
        *(x88272 + x35025) = x40960;
        struct AGGRecord_Q9GRPRecord* x40962 = &(x88272[x35025]);
        x42521 = x40962;
      };
      int x35029 = x88273;
      int x35030 = x35029+(1);
      x88273 = x35030;
    };
    /* VAR */ struct timeval x88316 = x35607;
    struct timeval x88317 = x88316;
    /* VAR */ struct timeval x88318 = x35607;
    struct timeval x88319 = x88318;
    /* VAR */ struct timeval x88320 = x35607;
    struct timeval x88321 = x88320;
    struct timeval* x88322 = &x88319;
    gettimeofday(x88322, NULL);
    /* VAR */ int x88324 = 0;
    /* VAR */ int x88325 = 0;
    /* VAR */ int x88326 = 0;
    /* VAR */ int x88327 = 0;
    /* VAR */ int x88328 = 0;
    /* VAR */ int x88329 = 0;
    int* x88392 = &(x88361);
    GTree* x88393 = g_tree_new(x88392);
    /* VAR */ int x88394 = 0;
    /* VAR */ int x88395 = 0;
    while(1) {
      
      int x88397 = x88328;
      int x88398 = x88397<(x37550);
      if (!(x88398)) break; 
      
      int x3712 = x88328;
      struct PARTSUPPRecord* x407 = &(x40469[x3712]);
      int x409 = x407->PS_PARTKEY;
      int x7095 = x409%(1048576);
      struct PARTSUPPRecord* x10620 = &(x88123[x7095]);
      /* VAR */ struct PARTSUPPRecord* list10621 = x10620;
      struct PARTSUPPRecord* x10622 = list10621;
      int x52114 = x10622==(NULL);
      /* VAR */ int ite71945 = 0;
      if(x52114) {
        ite71945 = 1;
      } else {
        
        char* x88410 = x10622->PS_COMMENT;
        int x88411 = x88410==(NULL);
        /* VAR */ int x88412 = 0;
        if(x88411) {
          x88412 = 1;
        } else {
          
          int x88415 = strcmp(x88410, "");
          int x88416 = !(x88415);
          x88412 = x88416;
        };
        int x88419 = x88412;
        ite71945 = x88419;
      };
      int x68713 = ite71945;
      if(x68713) {
        list10621 = NULL;
        struct PARTSUPPRecord* x10629 = list10621;
        int x52121 = x10629==(NULL);
        /* VAR */ int ite71960 = 0;
        if(x52121) {
          ite71960 = 1;
        } else {
          
          char* x88430 = x10629->PS_COMMENT;
          int x88431 = x88430==(NULL);
          /* VAR */ int x88432 = 0;
          if(x88431) {
            x88432 = 1;
          } else {
            
            int x88435 = strcmp(x88430, "");
            int x88436 = !(x88435);
            x88432 = x88436;
          };
          int x88439 = x88432;
          ite71960 = x88439;
        };
        int x68719 = ite71960;
        if(x68719) {
          *(x88123 + x7095) = (const struct PARTSUPPRecord){0};
        } else {
          
          struct PARTSUPPRecord x41020 = *x10629;
          *(x88123 + x7095) = x41020;
          struct PARTSUPPRecord* x41022 = &(x88123[x7095]);
          list10621 = x41022;
        };
      };
      int x52131 = x10620==(NULL);
      /* VAR */ int ite71978 = 0;
      if(x52131) {
        ite71978 = 1;
      } else {
        
        char* x88453 = x10620->PS_COMMENT;
        int x88454 = x88453==(NULL);
        /* VAR */ int x88455 = 0;
        if(x88454) {
          x88455 = 1;
        } else {
          
          int x88458 = strcmp(x88453, "");
          int x88459 = !(x88458);
          x88455 = x88459;
        };
        int x88462 = x88455;
        ite71978 = x88462;
      };
      int x68728 = ite71978;
      if(x68728) {
        x407->next = NULL;
        int x52137 = x407==(NULL);
        /* VAR */ int ite71992 = 0;
        if(x52137) {
          ite71992 = 1;
        } else {
          
          char* x88472 = x407->PS_COMMENT;
          int x88473 = x88472==(NULL);
          /* VAR */ int x88474 = 0;
          if(x88473) {
            x88474 = 1;
          } else {
            
            int x88477 = strcmp(x88472, "");
            int x88478 = !(x88477);
            x88474 = x88478;
          };
          int x88481 = x88474;
          ite71992 = x88481;
        };
        int x68733 = ite71992;
        if(x68733) {
          *(x88123 + x7095) = (const struct PARTSUPPRecord){0};
        } else {
          
          struct PARTSUPPRecord x41030 = *x407;
          *(x88123 + x7095) = x41030;
          struct PARTSUPPRecord* x41032 = &(x88123[x7095]);
          x407 = x41032;
        };
        list10621 = x407;
      } else {
        
        struct PARTSUPPRecord* x14312 = x10620->next;
        x407->next = x14312;
        x10620->next = x407;
      };
      int x3717 = x88328;
      int x413 = x3717+(1);
      x88328 = x413;
    };
    while(1) {
      
      int x88499 = x88326;
      int x88500 = x88499<(x37751);
      if (!(x88500)) break; 
      
      int x3726 = x88326;
      struct LINEITEMRecord* x422 = &(x40671[x3726]);
      int x424 = x422->L_PARTKEY;
      int x7118 = x424%(1048576);
      struct LINEITEMRecord* x10652 = &(x88126[x7118]);
      /* VAR */ struct LINEITEMRecord* list10653 = x10652;
      struct LINEITEMRecord* x10654 = list10653;
      int x52165 = x10654==(NULL);
      /* VAR */ int ite72028 = 0;
      if(x52165) {
        ite72028 = 1;
      } else {
        
        char* x88512 = x10654->L_SHIPINSTRUCT;
        int x88513 = x88512==(NULL);
        /* VAR */ int x88514 = 0;
        if(x88513) {
          x88514 = 1;
        } else {
          
          int x88517 = strcmp(x88512, "");
          int x88518 = !(x88517);
          x88514 = x88518;
        };
        int x88521 = x88514;
        ite72028 = x88521;
      };
      int x68758 = ite72028;
      if(x68758) {
        list10653 = NULL;
        struct LINEITEMRecord* x10661 = list10653;
        int x52172 = x10661==(NULL);
        /* VAR */ int ite72043 = 0;
        if(x52172) {
          ite72043 = 1;
        } else {
          
          char* x88532 = x10661->L_SHIPINSTRUCT;
          int x88533 = x88532==(NULL);
          /* VAR */ int x88534 = 0;
          if(x88533) {
            x88534 = 1;
          } else {
            
            int x88537 = strcmp(x88532, "");
            int x88538 = !(x88537);
            x88534 = x88538;
          };
          int x88541 = x88534;
          ite72043 = x88541;
        };
        int x68764 = ite72043;
        if(x68764) {
          *(x88126 + x7118) = (const struct LINEITEMRecord){0};
        } else {
          
          struct LINEITEMRecord x41060 = *x10661;
          *(x88126 + x7118) = x41060;
          struct LINEITEMRecord* x41062 = &(x88126[x7118]);
          list10653 = x41062;
        };
      };
      int x52182 = x10652==(NULL);
      /* VAR */ int ite72061 = 0;
      if(x52182) {
        ite72061 = 1;
      } else {
        
        char* x88555 = x10652->L_SHIPINSTRUCT;
        int x88556 = x88555==(NULL);
        /* VAR */ int x88557 = 0;
        if(x88556) {
          x88557 = 1;
        } else {
          
          int x88560 = strcmp(x88555, "");
          int x88561 = !(x88560);
          x88557 = x88561;
        };
        int x88564 = x88557;
        ite72061 = x88564;
      };
      int x68773 = ite72061;
      if(x68773) {
        x422->next = NULL;
        int x52188 = x422==(NULL);
        /* VAR */ int ite72075 = 0;
        if(x52188) {
          ite72075 = 1;
        } else {
          
          char* x88574 = x422->L_SHIPINSTRUCT;
          int x88575 = x88574==(NULL);
          /* VAR */ int x88576 = 0;
          if(x88575) {
            x88576 = 1;
          } else {
            
            int x88579 = strcmp(x88574, "");
            int x88580 = !(x88579);
            x88576 = x88580;
          };
          int x88583 = x88576;
          ite72075 = x88583;
        };
        int x68778 = ite72075;
        if(x68778) {
          *(x88126 + x7118) = (const struct LINEITEMRecord){0};
        } else {
          
          struct LINEITEMRecord x41070 = *x422;
          *(x88126 + x7118) = x41070;
          struct LINEITEMRecord* x41072 = &(x88126[x7118]);
          x422 = x41072;
        };
        list10653 = x422;
      } else {
        
        struct LINEITEMRecord* x14343 = x10652->next;
        x422->next = x14343;
        x10652->next = x422;
      };
      int x3731 = x88326;
      int x428 = x3731+(1);
      x88326 = x428;
    };
    while(1) {
      
      int x88601 = x88327;
      int x88602 = x88601<(x37146);
      if (!(x88602)) break; 
      
      int x3740 = x88327;
      char* x26283 = x40077[x3740];
      char* x59502 = strstr(x26283, "ghost");
      int x59503 = x59502!=(NULL);
      if(x59503) {
        int x26287 = x40076[x3740];
        int x7144 = x26287%(1048576);
        struct LINEITEMRecord* x10687 = &(x88126[x7144]);
        int x52216 = x10687!=(NULL);
        /* VAR */ int ite72112 = 0;
        if(x52216) {
          char* x88614 = x10687->L_SHIPINSTRUCT;
          int x88615 = x88614!=(NULL);
          /* VAR */ int x88616 = 0;
          if(x88615) {
            int x88618 = strcmp(x88614, "");
            x88616 = x88618;
          } else {
            
            x88616 = 0;
          };
          int x88622 = x88616;
          ite72112 = x88622;
        } else {
          
          ite72112 = 0;
        };
        int x68804 = ite72112;
        if(x68804) {
          /* VAR */ struct LINEITEMRecord* current11968 = x10687;
          while(1) {
            
            struct LINEITEMRecord* x11970 = current11968;
            int x52224 = x11970!=(NULL);
            /* VAR */ int ite72128 = 0;
            if(x52224) {
              char* x88634 = x11970->L_SHIPINSTRUCT;
              int x88635 = x88634!=(NULL);
              /* VAR */ int x88636 = 0;
              if(x88635) {
                int x88638 = strcmp(x88634, "");
                x88636 = x88638;
              } else {
                
                x88636 = 0;
              };
              int x88642 = x88636;
              ite72128 = x88642;
            } else {
              
              ite72128 = 0;
            };
            int x68811 = ite72128;
            if (!(x68811)) break; 
            
            struct LINEITEMRecord* x11972 = current11968;
            struct LINEITEMRecord* x14422 = x11972->next;
            struct LINEITEMRecord* x11974 = current11968;
            int x10750 = x11974->L_PARTKEY;
            int x10751 = x10750==(x26287);
            if(x10751) {
              int x1310 = x11974->L_ORDERKEY;
              int x1311 = x11974->L_SUPPKEY;
              int x1312 = x11974->L_LINENUMBER;
              double x1313 = x11974->L_QUANTITY;
              double x1314 = x11974->L_EXTENDEDPRICE;
              double x1315 = x11974->L_DISCOUNT;
              double x1316 = x11974->L_TAX;
              char x1317 = x11974->L_RETURNFLAG;
              char x1318 = x11974->L_LINESTATUS;
              int x1319 = x11974->L_SHIPDATE;
              int x1320 = x11974->L_COMMITDATE;
              int x1321 = x11974->L_RECEIPTDATE;
              char* x1322 = x11974->L_SHIPINSTRUCT;
              char* x1323 = x11974->L_SHIPMODE;
              char* x1324 = x11974->L_COMMENT;
              char* x26319 = x40078[x3740];
              char* x26321 = x40079[x3740];
              char* x26323 = x40080[x3740];
              int x26325 = x40081[x3740];
              char* x26327 = x40082[x3740];
              double x26329 = x40083[x3740];
              char* x26331 = x40084[x3740];
              int x35162 = x88127;
              struct LINEITEMRecord_PARTRecord* x35163 = &(x88128[x35162]);
              x35163->L_ORDERKEY = x1310;
              x35163->L_PARTKEY = x10750;
              x35163->L_SUPPKEY = x1311;
              x35163->L_LINENUMBER = x1312;
              x35163->L_QUANTITY = x1313;
              x35163->L_EXTENDEDPRICE = x1314;
              x35163->L_DISCOUNT = x1315;
              x35163->L_TAX = x1316;
              x35163->L_RETURNFLAG = x1317;
              x35163->L_LINESTATUS = x1318;
              x35163->L_SHIPDATE = x1319;
              x35163->L_COMMITDATE = x1320;
              x35163->L_RECEIPTDATE = x1321;
              x35163->L_SHIPINSTRUCT = x1322;
              x35163->L_SHIPMODE = x1323;
              x35163->L_COMMENT = x1324;
              x35163->P_PARTKEY = x26287;
              x35163->P_NAME = x26283;
              x35163->P_MFGR = x26319;
              x35163->P_BRAND = x26321;
              x35163->P_TYPE = x26323;
              x35163->P_SIZE = x26325;
              x35163->P_CONTAINER = x26327;
              x35163->P_RETAILPRICE = x26329;
              x35163->P_COMMENT = x26331;
              x35163->next = NULL;
              int x35190 = x88127;
              int x35191 = x35190+(1);
              x88127 = x35191;
              int x462 = x35163->L_SUPPKEY;
              int x7180 = x462%(1048576);
              struct LINEITEMRecord_PARTRecord* x10723 = &(x88125[x7180]);
              /* VAR */ struct LINEITEMRecord_PARTRecord* list10724 = x10723;
              struct LINEITEMRecord_PARTRecord* x10725 = list10724;
              int x52292 = x10725==(NULL);
              /* VAR */ int ite72204 = 0;
              if(x52292) {
                ite72204 = 1;
              } else {
                
                char* x88715 = x10725->L_SHIPINSTRUCT;
                int x88716 = x88715==(NULL);
                /* VAR */ int x88717 = 0;
                if(x88716) {
                  x88717 = 1;
                } else {
                  
                  int x88720 = strcmp(x88715, "");
                  int x88721 = !(x88720);
                  x88717 = x88721;
                };
                int x88724 = x88717;
                ite72204 = x88724;
              };
              int x68878 = ite72204;
              if(x68878) {
                list10724 = NULL;
                struct LINEITEMRecord_PARTRecord* x10732 = list10724;
                int x52299 = x10732==(NULL);
                /* VAR */ int ite72219 = 0;
                if(x52299) {
                  ite72219 = 1;
                } else {
                  
                  char* x88735 = x10732->L_SHIPINSTRUCT;
                  int x88736 = x88735==(NULL);
                  /* VAR */ int x88737 = 0;
                  if(x88736) {
                    x88737 = 1;
                  } else {
                    
                    int x88740 = strcmp(x88735, "");
                    int x88741 = !(x88740);
                    x88737 = x88741;
                  };
                  int x88744 = x88737;
                  ite72219 = x88744;
                };
                int x68884 = ite72219;
                if(x68884) {
                  *(x88125 + x7180) = (const struct LINEITEMRecord_PARTRecord){0};
                } else {
                  
                  struct LINEITEMRecord_PARTRecord x41171 = *x10732;
                  *(x88125 + x7180) = x41171;
                  struct LINEITEMRecord_PARTRecord* x41173 = &(x88125[x7180]);
                  list10724 = x41173;
                };
              };
              int x52309 = x10723==(NULL);
              /* VAR */ int ite72237 = 0;
              if(x52309) {
                ite72237 = 1;
              } else {
                
                char* x88758 = x10723->L_SHIPINSTRUCT;
                int x88759 = x88758==(NULL);
                /* VAR */ int x88760 = 0;
                if(x88759) {
                  x88760 = 1;
                } else {
                  
                  int x88763 = strcmp(x88758, "");
                  int x88764 = !(x88763);
                  x88760 = x88764;
                };
                int x88767 = x88760;
                ite72237 = x88767;
              };
              int x68893 = ite72237;
              if(x68893) {
                x35163->next = NULL;
                int x52315 = x35163==(NULL);
                /* VAR */ int ite72251 = 0;
                if(x52315) {
                  ite72251 = 1;
                } else {
                  
                  char* x88777 = x35163->L_SHIPINSTRUCT;
                  int x88778 = x88777==(NULL);
                  /* VAR */ int x88779 = 0;
                  if(x88778) {
                    x88779 = 1;
                  } else {
                    
                    int x88782 = strcmp(x88777, "");
                    int x88783 = !(x88782);
                    x88779 = x88783;
                  };
                  int x88786 = x88779;
                  ite72251 = x88786;
                };
                int x68898 = ite72251;
                if(x68898) {
                  *(x88125 + x7180) = (const struct LINEITEMRecord_PARTRecord){0};
                } else {
                  
                  struct LINEITEMRecord_PARTRecord x41181 = *x35163;
                  *(x88125 + x7180) = x41181;
                  struct LINEITEMRecord_PARTRecord* x41183 = &(x88125[x7180]);
                  x35163 = x41183;
                };
                list10724 = x35163;
              } else {
                
                struct LINEITEMRecord_PARTRecord* x14470 = x10723->next;
                x35163->next = x14470;
                x10723->next = x35163;
              };
            };
            current11968 = x14422;
          };
        };
      };
      int x3815 = x88327;
      int x471 = x3815+(1);
      x88327 = x471;
    };
    while(1) {
      
      int x88805 = x88325;
      int x88806 = x88805<(x37619);
      if (!(x88806)) break; 
      
      int x3825 = x88325;
      int x26365 = x40543[x3825];
      int x7204 = x26365%(1048576);
      struct LINEITEMRecord_PARTRecord* x10813 = &(x88125[x7204]);
      int x52341 = x10813!=(NULL);
      /* VAR */ int ite72285 = 0;
      if(x52341) {
        char* x88814 = x10813->L_SHIPINSTRUCT;
        int x88815 = x88814!=(NULL);
        /* VAR */ int x88816 = 0;
        if(x88815) {
          int x88818 = strcmp(x88814, "");
          x88816 = x88818;
        } else {
          
          x88816 = 0;
        };
        int x88822 = x88816;
        ite72285 = x88822;
      } else {
        
        ite72285 = 0;
      };
      int x68921 = ite72285;
      if(x68921) {
        /* VAR */ struct LINEITEMRecord_PARTRecord* current12102 = x10813;
        while(1) {
          
          struct LINEITEMRecord_PARTRecord* x12104 = current12102;
          int x52349 = x12104!=(NULL);
          /* VAR */ int ite72301 = 0;
          if(x52349) {
            char* x88834 = x12104->L_SHIPINSTRUCT;
            int x88835 = x88834!=(NULL);
            /* VAR */ int x88836 = 0;
            if(x88835) {
              int x88838 = strcmp(x88834, "");
              x88836 = x88838;
            } else {
              
              x88836 = 0;
            };
            int x88842 = x88836;
            ite72301 = x88842;
          } else {
            
            ite72301 = 0;
          };
          int x68928 = ite72301;
          if (!(x68928)) break; 
          
          struct LINEITEMRecord_PARTRecord* x12106 = current12102;
          struct LINEITEMRecord_PARTRecord* x14555 = x12106->next;
          struct LINEITEMRecord_PARTRecord* x12108 = current12102;
          int x10884 = x12108->L_SUPPKEY;
          int x10885 = x10884==(x26365);
          if(x10885) {
            int x1403 = x12108->L_ORDERKEY;
            int x1404 = x12108->L_PARTKEY;
            int x1405 = x12108->L_LINENUMBER;
            double x1406 = x12108->L_QUANTITY;
            double x1407 = x12108->L_EXTENDEDPRICE;
            double x1408 = x12108->L_DISCOUNT;
            double x1409 = x12108->L_TAX;
            char x1410 = x12108->L_RETURNFLAG;
            char x1411 = x12108->L_LINESTATUS;
            int x1412 = x12108->L_SHIPDATE;
            int x1413 = x12108->L_COMMITDATE;
            int x1414 = x12108->L_RECEIPTDATE;
            char* x1415 = x12108->L_SHIPINSTRUCT;
            char* x1416 = x12108->L_SHIPMODE;
            char* x1417 = x12108->L_COMMENT;
            int x1418 = x12108->P_PARTKEY;
            char* x1419 = x12108->P_NAME;
            char* x1420 = x12108->P_MFGR;
            char* x1421 = x12108->P_BRAND;
            char* x1422 = x12108->P_TYPE;
            int x1423 = x12108->P_SIZE;
            char* x1424 = x12108->P_CONTAINER;
            double x1425 = x12108->P_RETAILPRICE;
            char* x1426 = x12108->P_COMMENT;
            char* x26406 = x40544[x3825];
            char* x26408 = x40545[x3825];
            int x26410 = x40546[x3825];
            char* x26412 = x40547[x3825];
            double x26414 = x40548[x3825];
            char* x26416 = x40549[x3825];
            int x35267 = x88163;
            struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x35268 = &(x88164[x35267]);
            x35268->L_ORDERKEY = x1403;
            x35268->L_PARTKEY = x1404;
            x35268->L_SUPPKEY = x10884;
            x35268->L_LINENUMBER = x1405;
            x35268->L_QUANTITY = x1406;
            x35268->L_EXTENDEDPRICE = x1407;
            x35268->L_DISCOUNT = x1408;
            x35268->L_TAX = x1409;
            x35268->L_RETURNFLAG = x1410;
            x35268->L_LINESTATUS = x1411;
            x35268->L_SHIPDATE = x1412;
            x35268->L_COMMITDATE = x1413;
            x35268->L_RECEIPTDATE = x1414;
            x35268->L_SHIPINSTRUCT = x1415;
            x35268->L_SHIPMODE = x1416;
            x35268->L_COMMENT = x1417;
            x35268->P_PARTKEY = x1418;
            x35268->P_NAME = x1419;
            x35268->P_MFGR = x1420;
            x35268->P_BRAND = x1421;
            x35268->P_TYPE = x1422;
            x35268->P_SIZE = x1423;
            x35268->P_CONTAINER = x1424;
            x35268->P_RETAILPRICE = x1425;
            x35268->P_COMMENT = x1426;
            x35268->S_SUPPKEY = x26365;
            x35268->S_NAME = x26406;
            x35268->S_ADDRESS = x26408;
            x35268->S_NATIONKEY = x26410;
            x35268->S_PHONE = x26412;
            x35268->S_ACCTBAL = x26414;
            x35268->S_COMMENT = x26416;
            x35268->next = NULL;
            int x35302 = x88163;
            int x35303 = x35302+(1);
            x88163 = x35303;
            int x504 = x35268->S_NATIONKEY;
            int x7248 = x504%(1048576);
            struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x10857 = &(x88124[x7248]);
            /* VAR */ struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* list10858 = x10857;
            struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x10859 = list10858;
            int x52432 = x10859==(NULL);
            /* VAR */ int ite72392 = 0;
            if(x52432) {
              ite72392 = 1;
            } else {
              
              char* x88930 = x10859->L_SHIPINSTRUCT;
              int x88931 = x88930==(NULL);
              /* VAR */ int x88932 = 0;
              if(x88931) {
                x88932 = 1;
              } else {
                
                int x88935 = strcmp(x88930, "");
                int x88936 = !(x88935);
                x88932 = x88936;
              };
              int x88939 = x88932;
              ite72392 = x88939;
            };
            int x69010 = ite72392;
            if(x69010) {
              list10858 = NULL;
              struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x10866 = list10858;
              int x52439 = x10866==(NULL);
              /* VAR */ int ite72407 = 0;
              if(x52439) {
                ite72407 = 1;
              } else {
                
                char* x88950 = x10866->L_SHIPINSTRUCT;
                int x88951 = x88950==(NULL);
                /* VAR */ int x88952 = 0;
                if(x88951) {
                  x88952 = 1;
                } else {
                  
                  int x88955 = strcmp(x88950, "");
                  int x88956 = !(x88955);
                  x88952 = x88956;
                };
                int x88959 = x88952;
                ite72407 = x88959;
              };
              int x69016 = ite72407;
              if(x69016) {
                *(x88124 + x7248) = (const struct LINEITEMRecord_PARTRecord_SUPPLIERRecord){0};
              } else {
                
                struct LINEITEMRecord_PARTRecord_SUPPLIERRecord x41295 = *x10866;
                *(x88124 + x7248) = x41295;
                struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x41297 = &(x88124[x7248]);
                list10858 = x41297;
              };
            };
            int x52449 = x10857==(NULL);
            /* VAR */ int ite72425 = 0;
            if(x52449) {
              ite72425 = 1;
            } else {
              
              char* x88973 = x10857->L_SHIPINSTRUCT;
              int x88974 = x88973==(NULL);
              /* VAR */ int x88975 = 0;
              if(x88974) {
                x88975 = 1;
              } else {
                
                int x88978 = strcmp(x88973, "");
                int x88979 = !(x88978);
                x88975 = x88979;
              };
              int x88982 = x88975;
              ite72425 = x88982;
            };
            int x69025 = ite72425;
            if(x69025) {
              x35268->next = NULL;
              int x52455 = x35268==(NULL);
              /* VAR */ int ite72439 = 0;
              if(x52455) {
                ite72439 = 1;
              } else {
                
                char* x88992 = x35268->L_SHIPINSTRUCT;
                int x88993 = x88992==(NULL);
                /* VAR */ int x88994 = 0;
                if(x88993) {
                  x88994 = 1;
                } else {
                  
                  int x88997 = strcmp(x88992, "");
                  int x88998 = !(x88997);
                  x88994 = x88998;
                };
                int x89001 = x88994;
                ite72439 = x89001;
              };
              int x69030 = ite72439;
              if(x69030) {
                *(x88124 + x7248) = (const struct LINEITEMRecord_PARTRecord_SUPPLIERRecord){0};
              } else {
                
                struct LINEITEMRecord_PARTRecord_SUPPLIERRecord x41305 = *x35268;
                *(x88124 + x7248) = x41305;
                struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x41307 = &(x88124[x7248]);
                x35268 = x41307;
              };
              list10858 = x35268;
            } else {
              
              struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x14611 = x10857->next;
              x35268->next = x14611;
              x10857->next = x35268;
            };
          };
          current12102 = x14555;
        };
      };
      int x3913 = x88325;
      int x512 = x3913+(1);
      x88325 = x512;
    };
    while(1) {
      
      int x89020 = x88324;
      int x89021 = x89020<(x37321);
      if (!(x89021)) break; 
      
      int x3922 = x88324;
      int x26450 = x40245[x3922];
      int x7272 = x26450%(1048576);
      struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x10955 = &(x88124[x7272]);
      int x52481 = x10955!=(NULL);
      /* VAR */ int ite72473 = 0;
      if(x52481) {
        char* x89029 = x10955->L_SHIPINSTRUCT;
        int x89030 = x89029!=(NULL);
        /* VAR */ int x89031 = 0;
        if(x89030) {
          int x89033 = strcmp(x89029, "");
          x89031 = x89033;
        } else {
          
          x89031 = 0;
        };
        int x89037 = x89031;
        ite72473 = x89037;
      } else {
        
        ite72473 = 0;
      };
      int x69053 = ite72473;
      if(x69053) {
        /* VAR */ struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* current12310 = x10955;
        while(1) {
          
          struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x12312 = current12310;
          int x52489 = x12312!=(NULL);
          /* VAR */ int ite72489 = 0;
          if(x52489) {
            char* x89049 = x12312->L_SHIPINSTRUCT;
            int x89050 = x89049!=(NULL);
            /* VAR */ int x89051 = 0;
            if(x89050) {
              int x89053 = strcmp(x89049, "");
              x89051 = x89053;
            } else {
              
              x89051 = 0;
            };
            int x89057 = x89051;
            ite72489 = x89057;
          } else {
            
            ite72489 = 0;
          };
          int x69060 = ite72489;
          if (!(x69060)) break; 
          
          struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x12314 = current12310;
          struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x14761 = x12314->next;
          struct LINEITEMRecord_PARTRecord_SUPPLIERRecord* x12316 = current12310;
          int x11092 = x12316->S_NATIONKEY;
          int x11093 = x11092==(x26450);
          if(x11093) {
            int x1618 = x12316->L_ORDERKEY;
            int x1619 = x12316->L_PARTKEY;
            int x1620 = x12316->L_SUPPKEY;
            int x1621 = x12316->L_LINENUMBER;
            double x1622 = x12316->L_QUANTITY;
            double x1623 = x12316->L_EXTENDEDPRICE;
            double x1624 = x12316->L_DISCOUNT;
            double x1625 = x12316->L_TAX;
            char x1626 = x12316->L_RETURNFLAG;
            char x1627 = x12316->L_LINESTATUS;
            int x1628 = x12316->L_SHIPDATE;
            int x1629 = x12316->L_COMMITDATE;
            int x1630 = x12316->L_RECEIPTDATE;
            char* x1631 = x12316->L_SHIPINSTRUCT;
            char* x1632 = x12316->L_SHIPMODE;
            char* x1633 = x12316->L_COMMENT;
            int x1634 = x12316->P_PARTKEY;
            char* x1635 = x12316->P_NAME;
            char* x1636 = x12316->P_MFGR;
            char* x1637 = x12316->P_BRAND;
            char* x1638 = x12316->P_TYPE;
            int x1639 = x12316->P_SIZE;
            char* x1640 = x12316->P_CONTAINER;
            double x1641 = x12316->P_RETAILPRICE;
            char* x1642 = x12316->P_COMMENT;
            int x1643 = x12316->S_SUPPKEY;
            char* x1644 = x12316->S_NAME;
            char* x1645 = x12316->S_ADDRESS;
            char* x1646 = x12316->S_PHONE;
            double x1647 = x12316->S_ACCTBAL;
            char* x1648 = x12316->S_COMMENT;
            char* x26498 = x40246[x3922];
            int x26500 = x40247[x3922];
            char* x26502 = x40248[x3922];
            int x7318 = x1619%(1048576);
            struct PARTSUPPRecord* x11001 = &(x88123[x7318]);
            int x52535 = x11001!=(NULL);
            /* VAR */ int ite72543 = 0;
            if(x52535) {
              char* x89107 = x11001->PS_COMMENT;
              int x89108 = x89107!=(NULL);
              /* VAR */ int x89109 = 0;
              if(x89108) {
                int x89111 = strcmp(x89107, "");
                x89109 = x89111;
              } else {
                
                x89109 = 0;
              };
              int x89115 = x89109;
              ite72543 = x89115;
            } else {
              
              ite72543 = 0;
            };
            int x69105 = ite72543;
            if(x69105) {
              /* VAR */ struct PARTSUPPRecord* current12398 = x11001;
              while(1) {
                
                struct PARTSUPPRecord* x12400 = current12398;
                int x52543 = x12400!=(NULL);
                /* VAR */ int ite72559 = 0;
                if(x52543) {
                  char* x89127 = x12400->PS_COMMENT;
                  int x89128 = x89127!=(NULL);
                  /* VAR */ int x89129 = 0;
                  if(x89128) {
                    int x89131 = strcmp(x89127, "");
                    x89129 = x89131;
                  } else {
                    
                    x89129 = 0;
                  };
                  int x89135 = x89129;
                  ite72559 = x89135;
                } else {
                  
                  ite72559 = 0;
                };
                int x69112 = ite72559;
                if (!(x69112)) break; 
                
                struct PARTSUPPRecord* x12402 = current12398;
                struct PARTSUPPRecord* x14848 = x12402->next;
                struct PARTSUPPRecord* x12404 = current12398;
                int x11049 = x12404->PS_PARTKEY;
                int x11050 = x11049==(x1619);
                /* VAR */ int ite72575 = 0;
                if(x11050) {
                  int x89147 = x12404->PS_SUPPKEY;
                  int x89148 = x89147==(x1620);
                  ite72575 = x89148;
                } else {
                  
                  ite72575 = 0;
                };
                int x69119 = ite72575;
                if(x69119) {
                  int x1723 = x12404->PS_SUPPKEY;
                  int x1724 = x12404->PS_AVAILQTY;
                  double x1725 = x12404->PS_SUPPLYCOST;
                  char* x1726 = x12404->PS_COMMENT;
                  int x35405 = x88199;
                  struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x35406 = &(x88200[x35405]);
                  x35406->PS_PARTKEY = x11049;
                  x35406->PS_SUPPKEY = x1723;
                  x35406->PS_AVAILQTY = x1724;
                  x35406->PS_SUPPLYCOST = x1725;
                  x35406->PS_COMMENT = x1726;
                  x35406->L_ORDERKEY = x1618;
                  x35406->L_PARTKEY = x1619;
                  x35406->L_SUPPKEY = x1620;
                  x35406->L_LINENUMBER = x1621;
                  x35406->L_QUANTITY = x1622;
                  x35406->L_EXTENDEDPRICE = x1623;
                  x35406->L_DISCOUNT = x1624;
                  x35406->L_TAX = x1625;
                  x35406->L_RETURNFLAG = x1626;
                  x35406->L_LINESTATUS = x1627;
                  x35406->L_SHIPDATE = x1628;
                  x35406->L_COMMITDATE = x1629;
                  x35406->L_RECEIPTDATE = x1630;
                  x35406->L_SHIPINSTRUCT = x1631;
                  x35406->L_SHIPMODE = x1632;
                  x35406->L_COMMENT = x1633;
                  x35406->P_PARTKEY = x1634;
                  x35406->P_NAME = x1635;
                  x35406->P_MFGR = x1636;
                  x35406->P_BRAND = x1637;
                  x35406->P_TYPE = x1638;
                  x35406->P_SIZE = x1639;
                  x35406->P_CONTAINER = x1640;
                  x35406->P_RETAILPRICE = x1641;
                  x35406->P_COMMENT = x1642;
                  x35406->S_SUPPKEY = x1643;
                  x35406->S_NAME = x1644;
                  x35406->S_ADDRESS = x1645;
                  x35406->S_NATIONKEY = x11092;
                  x35406->S_PHONE = x1646;
                  x35406->S_ACCTBAL = x1647;
                  x35406->S_COMMENT = x1648;
                  x35406->N_NATIONKEY = x26450;
                  x35406->N_NAME = x26498;
                  x35406->N_REGIONKEY = x26500;
                  x35406->N_COMMENT = x26502;
                  x35406->next = NULL;
                  int x35449 = x88199;
                  int x35450 = x35449+(1);
                  x88199 = x35450;
                  int x606 = x35406->L_ORDERKEY;
                  int x7339 = x606%(1048576);
                  struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x11022 = &(x88122[x7339]);
                  /* VAR */ struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* list11023 = x11022;
                  struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x11024 = list11023;
                  int x52612 = x11024==(NULL);
                  /* VAR */ int ite72642 = 0;
                  if(x52612) {
                    ite72642 = 1;
                  } else {
                    
                    char* x89214 = x11024->PS_COMMENT;
                    int x89215 = x89214==(NULL);
                    /* VAR */ int x89216 = 0;
                    if(x89215) {
                      x89216 = 1;
                    } else {
                      
                      int x89219 = strcmp(x89214, "");
                      int x89220 = !(x89219);
                      x89216 = x89220;
                    };
                    int x89223 = x89216;
                    ite72642 = x89223;
                  };
                  int x69179 = ite72642;
                  if(x69179) {
                    list11023 = NULL;
                    struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x11031 = list11023;
                    int x52619 = x11031==(NULL);
                    /* VAR */ int ite72657 = 0;
                    if(x52619) {
                      ite72657 = 1;
                    } else {
                      
                      char* x89234 = x11031->PS_COMMENT;
                      int x89235 = x89234==(NULL);
                      /* VAR */ int x89236 = 0;
                      if(x89235) {
                        x89236 = 1;
                      } else {
                        
                        int x89239 = strcmp(x89234, "");
                        int x89240 = !(x89239);
                        x89236 = x89240;
                      };
                      int x89243 = x89236;
                      ite72657 = x89243;
                    };
                    int x69185 = ite72657;
                    if(x69185) {
                      *(x88122 + x7339) = (const struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord){0};
                    } else {
                      
                      struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord x41454 = *x11031;
                      *(x88122 + x7339) = x41454;
                      struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x41456 = &(x88122[x7339]);
                      list11023 = x41456;
                    };
                  };
                  int x52629 = x11022==(NULL);
                  /* VAR */ int ite72675 = 0;
                  if(x52629) {
                    ite72675 = 1;
                  } else {
                    
                    char* x89257 = x11022->PS_COMMENT;
                    int x89258 = x89257==(NULL);
                    /* VAR */ int x89259 = 0;
                    if(x89258) {
                      x89259 = 1;
                    } else {
                      
                      int x89262 = strcmp(x89257, "");
                      int x89263 = !(x89262);
                      x89259 = x89263;
                    };
                    int x89266 = x89259;
                    ite72675 = x89266;
                  };
                  int x69194 = ite72675;
                  if(x69194) {
                    x35406->next = NULL;
                    int x52635 = x35406==(NULL);
                    /* VAR */ int ite72689 = 0;
                    if(x52635) {
                      ite72689 = 1;
                    } else {
                      
                      char* x89276 = x35406->PS_COMMENT;
                      int x89277 = x89276==(NULL);
                      /* VAR */ int x89278 = 0;
                      if(x89277) {
                        x89278 = 1;
                      } else {
                        
                        int x89281 = strcmp(x89276, "");
                        int x89282 = !(x89281);
                        x89278 = x89282;
                      };
                      int x89285 = x89278;
                      ite72689 = x89285;
                    };
                    int x69199 = ite72689;
                    if(x69199) {
                      *(x88122 + x7339) = (const struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord){0};
                    } else {
                      
                      struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord x41464 = *x35406;
                      *(x88122 + x7339) = x41464;
                      struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x41466 = &(x88122[x7339]);
                      x35406 = x41466;
                    };
                    list11023 = x35406;
                  } else {
                    
                    struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x14881 = x11022->next;
                    x35406->next = x14881;
                    x11022->next = x35406;
                  };
                };
                current12398 = x14848;
              };
            };
          };
          current12310 = x14761;
        };
      };
      int x4090 = x88324;
      int x618 = x4090+(1);
      x88324 = x618;
    };
    while(1) {
      
      int x89305 = x88329;
      int x89306 = x89305<(x37404);
      if (!(x89306)) break; 
      
      int x4099 = x88329;
      int x26559 = x40326[x4099];
      int x7364 = x26559%(1048576);
      struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x11229 = &(x88122[x7364]);
      int x52662 = x11229!=(NULL);
      /* VAR */ int ite72724 = 0;
      if(x52662) {
        char* x89314 = x11229->PS_COMMENT;
        int x89315 = x89314!=(NULL);
        /* VAR */ int x89316 = 0;
        if(x89315) {
          int x89318 = strcmp(x89314, "");
          x89316 = x89318;
        } else {
          
          x89316 = 0;
        };
        int x89322 = x89316;
        ite72724 = x89322;
      } else {
        
        ite72724 = 0;
      };
      int x69223 = ite72724;
      if(x69223) {
        /* VAR */ struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* current12579 = x11229;
        while(1) {
          
          struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x12581 = current12579;
          int x52670 = x12581!=(NULL);
          /* VAR */ int ite72740 = 0;
          if(x52670) {
            char* x89334 = x12581->PS_COMMENT;
            int x89335 = x89334!=(NULL);
            /* VAR */ int x89336 = 0;
            if(x89335) {
              int x89338 = strcmp(x89334, "");
              x89336 = x89338;
            } else {
              
              x89336 = 0;
            };
            int x89342 = x89336;
            ite72740 = x89342;
          } else {
            
            ite72740 = 0;
          };
          int x69230 = ite72740;
          if (!(x69230)) break; 
          
          struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x12583 = current12579;
          struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x15027 = x12583->next;
          struct PARTSUPPRecord_LINEITEMRecord_PARTRecord_SUPPLIERRecord_NATIONRecord* x12585 = current12579;
          int x11361 = x12585->L_ORDERKEY;
          int x11362 = x11361==(x26559);
          if(x11362) {
            double x1888 = x12585->PS_SUPPLYCOST;
            double x1893 = x12585->L_QUANTITY;
            double x1894 = x12585->L_EXTENDEDPRICE;
            double x1895 = x12585->L_DISCOUNT;
            char* x1922 = x12585->N_NAME;
            int x26622 = x40330[x4099];
            int x36461 = x26622/(10000);
            int x35504 = x88235;
            struct Q9GRPRecord* x35505 = &(x88236[x35504]);
            x35505->NATION = x1922;
            x35505->O_YEAR = x36461;
            int x35508 = x88235;
            int x35509 = x35508+(1);
            x88235 = x35509;
            char* x52694 = x35505->NATION;
            int x60043 = strlen(x52694);
            /* VAR */ int x54510 = 0;
            /* VAR */ int x54511 = 0;
            while(1) {
              
              int x54512 = x54510;
              int x54513 = x54512<(x60043);
              if (!(x54513)) break; 
              
              int x54514 = x54511;
              int x54515 = x54510;
              char* x60051 = pointer_add(x52694, x54515);
              char x60052 = *(x60051);
              int x54518 = x54514+(x60052);
              x54511 = x54518;
              int x54520 = x54510;
              int x54521 = x54520+(1);
              x54510 = x54521;
            };
            int x54524 = x54511;
            int x52696 = x35505->O_YEAR;
            int x52698 = x54524+(x52696);
            int x8801 = x52698&(1048575);
            struct AGGRecord_Q9GRPRecord* x11295 = &(x88116[x8801]);
            int x8803 = x88115;
            int x8804 = x8801>(x8803);
            if(x8804) {
              x88115 = x8801;
            };
            /* VAR */ struct AGGRecord_Q9GRPRecord* current12655 = x11295;
            /* VAR */ int found11305 = 0;
            while(1) {
              
              struct AGGRecord_Q9GRPRecord* x12658 = current12655;
              int x52709 = x12658!=(NULL);
              /* VAR */ int ite72801 = 0;
              if(x52709) {
                struct Q9GRPRecord* x89399 = x12658->key;
                int x89400 = x89399!=(NULL);
                /* VAR */ int x89401 = 0;
                if(x89400) {
                  char* x89403 = x89399->NATION;
                  int x89404 = x89403!=(NULL);
                  /* VAR */ int x89405 = 0;
                  if(x89404) {
                    int x89407 = strcmp(x89403, "");
                    x89405 = x89407;
                  } else {
                    
                    x89405 = 0;
                  };
                  int x89411 = x89405;
                  x89401 = x89411;
                } else {
                  
                  x89401 = 0;
                };
                int x89415 = x89401;
                ite72801 = x89415;
              } else {
                
                ite72801 = 0;
              };
              int x69282 = ite72801;
              /* VAR */ int ite72812 = 0;
              if(x69282) {
                int x89422 = found11305;
                int x89423 = !(x89422);
                ite72812 = x89423;
              } else {
                
                ite72812 = 0;
              };
              int x69284 = ite72812;
              if (!(x69284)) break; 
              
              struct AGGRecord_Q9GRPRecord* x12663 = current12655;
              struct Q9GRPRecord* x11313 = x12663->key;
              char* x52718 = x11313->NATION;
              int x54550 = strcmp(x52718, x52694);
              int x54551 = !(x54550);
              int x52720 = x11313->O_YEAR;
              int x52721 = x52720==(x52696);
              /* VAR */ int ite72828 = 0;
              if(x54551) {
                ite72828 = x52721;
              } else {
                
                ite72828 = 0;
              };
              int x69293 = ite72828;
              if(x69293) {
                found11305 = 1;
              } else {
                
                struct AGGRecord_Q9GRPRecord* x12669 = current12655;
                struct AGGRecord_Q9GRPRecord* x15111 = x12669->next;
                current12655 = x15111;
              };
            };
            int x11321 = found11305;
            int x11322 = !(x11321);
            /* VAR */ struct AGGRecord_Q9GRPRecord** ite69302 = 0;
            if(x11322) {
              ite69302 = NULL;
            } else {
              
              struct AGGRecord_Q9GRPRecord* x69304 = current12655;
              ite69302 = x69304;
            };
            struct AGGRecord_Q9GRPRecord** x11328 = ite69302;
            int x21152 = x11328!=(NULL);
            /* VAR */ struct AGGRecord_Q9GRPRecord* ite69310 = 0;
            if(x21152) {
              ite69310 = x11328;
            } else {
              
              int x69312 = x88271;
              struct AGGRecord_Q9GRPRecord* x69313 = &(x88272[x69312]);
              x69313->key = x35505;
              x69313->aggs = 0;
              x69313->next = NULL;
              int x69317 = x88271;
              int x69318 = x69317+(1);
              x88271 = x69318;
              int x69320 = x11295==(NULL);
              /* VAR */ int ite72862 = 0;
              if(x69320) {
                ite72862 = 1;
              } else {
                
                struct Q9GRPRecord* x89471 = x11295->key;
                int x89472 = x89471==(NULL);
                /* VAR */ int x89473 = 0;
                if(x89472) {
                  x89473 = 1;
                } else {
                  
                  char* x89476 = x89471->NATION;
                  int x89477 = x89476==(NULL);
                  /* VAR */ int x89478 = 0;
                  if(x89477) {
                    x89478 = 1;
                  } else {
                    
                    int x89481 = strcmp(x89476, "");
                    int x89482 = !(x89481);
                    x89478 = x89482;
                  };
                  int x89485 = x89478;
                  x89473 = x89485;
                };
                int x89488 = x89473;
                ite72862 = x89488;
              };
              int x69322 = ite72862;
              if(x69322) {
                x69313->next = NULL;
                int x52748 = x69313==(NULL);
                /* VAR */ int ite72876 = 0;
                if(x52748) {
                  ite72876 = 1;
                } else {
                  
                  struct Q9GRPRecord* x89498 = x69313->key;
                  int x89499 = x89498==(NULL);
                  /* VAR */ int x89500 = 0;
                  if(x89499) {
                    x89500 = 1;
                  } else {
                    
                    char* x89503 = x89498->NATION;
                    int x89504 = x89503==(NULL);
                    /* VAR */ int x89505 = 0;
                    if(x89504) {
                      x89505 = 1;
                    } else {
                      
                      int x89508 = strcmp(x89503, "");
                      int x89509 = !(x89508);
                      x89505 = x89509;
                    };
                    int x89512 = x89505;
                    x89500 = x89512;
                  };
                  int x89515 = x89500;
                  ite72876 = x89515;
                };
                int x69327 = ite72876;
                if(x69327) {
                  *(x88116 + x8801) = (const struct AGGRecord_Q9GRPRecord){0};
                } else {
                  
                  struct AGGRecord_Q9GRPRecord x41555 = *x69313;
                  *(x88116 + x8801) = x41555;
                  struct AGGRecord_Q9GRPRecord* x41557 = &(x88116[x8801]);
                  x69313 = x41557;
                };
              } else {
                
                struct AGGRecord_Q9GRPRecord* x15131 = x11295->next;
                x69313->next = x15131;
                x11295->next = x69313;
              };
              ite69310 = x69313;
            };
            struct AGGRecord_Q9GRPRecord* x8816 = ite69310;
            double x25019 = x8816->aggs;
            double x709 = 1.0-(x1895);
            double x710 = x1894*(x709);
            double x711 = x25019+(x710);
            double x714 = x1888*(x1893);
            double x715 = x711-(x714);
            x8816->aggs = x715;
          };
          current12579 = x15027;
        };
      };
      int x4291 = x88329;
      int x726 = x4291+(1);
      x88329 = x726;
    };
    int x89542 = x88115;
    int x89543 = x89542+(1);
    int x63848 = 0;
    for(; x63848 < x89543 ; x63848 += 1) {
      
      struct AGGRecord_Q9GRPRecord* x63849 = &(x88116[x63848]);
      /* VAR */ struct AGGRecord_Q9GRPRecord* x63850 = x63849;
      while(1) {
        
        struct AGGRecord_Q9GRPRecord* x12723 = x63850;
        int x52781 = x12723!=(NULL);
        /* VAR */ int ite72941 = 0;
        if(x52781) {
          struct Q9GRPRecord* x89587 = x12723->key;
          int x89588 = x89587!=(NULL);
          /* VAR */ int x89589 = 0;
          if(x89588) {
            char* x89591 = x89587->NATION;
            int x89592 = x89591!=(NULL);
            /* VAR */ int x89593 = 0;
            if(x89592) {
              int x89595 = strcmp(x89591, "");
              x89593 = x89595;
            } else {
              
              x89593 = 0;
            };
            int x89599 = x89593;
            x89589 = x89599;
          } else {
            
            x89589 = 0;
          };
          int x89603 = x89589;
          ite72941 = x89603;
        } else {
          
          ite72941 = 0;
        };
        int x69374 = ite72941;
        if (!(x69374)) break; 
        
        struct AGGRecord_Q9GRPRecord* x12725 = x63850;
        struct AGGRecord_Q9GRPRecord* x15167 = x12725->next;
        struct AGGRecord_Q9GRPRecord* x12727 = x63850;
        g_tree_insert(x88393, x12727, x12727);
        x63850 = x15167;
      };
    };
    while(1) {
      
      int x4300 = x88394;
      int x737 = !(x4300);
      /* VAR */ int ite72960 = 0;
      if(x737) {
        int x89618 = g_tree_nnodes(x88393);
        int x89619 = x89618!=(0);
        ite72960 = x89619;
      } else {
        
        ite72960 = 0;
      };
      int x69384 = ite72960;
      if (!(x69384)) break; 
      
      void* x46308 = NULL;
      void** x46316 = &(x46308);
      g_tree_foreach(x88393, x46315, x46316);
      struct AGGRecord_Q9GRPRecord* x46318 = (struct AGGRecord_Q9GRPRecord*){x46308};
      int x46319 = g_tree_remove(x88393, x46318);
      if(0) {
        x88394 = 1;
      } else {
        
        struct Q9GRPRecord* x750 = x46318->key;
        char* x751 = x750->NATION;
        int x753 = x750->O_YEAR;
        double x25064 = x46318->aggs;
        printf("%s|%d|%.4f\n", x751, x753, x25064);
        int x4320 = x88395;
        int x758 = x4320+(1);
        x88395 = x758;
      };
    };
    int x89646 = x88395;
    printf("(%d rows)\n", x89646);
    struct timeval* x89648 = &x88321;
    gettimeofday(x89648, NULL);
    struct timeval* x89650 = &x88317;
    struct timeval* x89651 = &x88321;
    struct timeval* x89652 = &x88319;
    long x89653 = timeval_subtract(x89650, x89651, x89652);
    printf("Generated code run in %ld milliseconds.\n", x89653);
  };
}
/* ----------- FUNCTIONS ----------- */
int x88361(struct AGGRecord_Q9GRPRecord* x374, struct AGGRecord_Q9GRPRecord* x375) {
  struct Q9GRPRecord* x376 = x374->key;
  struct Q9GRPRecord* x377 = x375->key;
  char* x378 = x376->NATION;
  char* x379 = x377->NATION;
  int x59357 = strcmp(x378, x379);
  int x381 = x59357==(0);
  /* VAR */ int ite68677 = 0;
  if(x381) {
    int x68678 = x376->O_YEAR;
    int x68679 = x377->O_YEAR;
    int x68680 = x68678<(x68679);
    /* VAR */ int ite68682 = 0;
    if(x68680) {
      ite68682 = 1;
    } else {
      
      int x68684 = x68678>(x68679);
      /* VAR */ int ite68686 = 0;
      if(x68684) {
        ite68686 = -1;
      } else {
        
        ite68686 = 0;
      };
      int x68685 = ite68686;
      ite68682 = x68685;
    };
    int x68681 = ite68682;
    ite68677 = x68681;
  } else {
    
    ite68677 = x59357;
  };
  int x388 = ite68677;
  return x388; 
}

int x46315(void* x46309, void* x46310, void* x46311) {
  struct AGGRecord_Q9GRPRecord** x46312 = (struct AGGRecord_Q9GRPRecord**){x46311};
  struct AGGRecord_Q9GRPRecord* x46313 = (struct AGGRecord_Q9GRPRecord*){x46310};
  pointer_assign(x46312, x46313);
  return 1; 
}
