#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_Q20GRPRecord;
  struct LINEITEMRecord;
  struct NATIONRecord;
  struct PARTRecord_PARTSUPPRecord_LINEITEMRecord;
  struct PARTRecord;
  struct Q20GRPRecord;
  struct PARTRecord_PARTSUPPRecord;
  struct SUPPLIERRecord;
  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord;
  struct PARTSUPPRecord;
  
  struct AGGRecord_Q20GRPRecord {
  struct Q20GRPRecord* key;
  double* aggs;
  };
  
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
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  };
  
  struct PARTRecord_PARTSUPPRecord_LINEITEMRecord {
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
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
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  };
  
  struct Q20GRPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  };
  
  struct PARTRecord_PARTSUPPRecord {
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  };
  
  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  struct Q20GRPRecord* key;
  double* aggs;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  };
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
  };
  
  


int x36516(void* x9381);

int x36519(void* x9384, void* x9385);

int x36526(void* x9391);

int x36529(void* x9394, void* x9395);

int x36536(struct Q20GRPRecord* x11363);

int x36543(struct Q20GRPRecord* x11368, struct Q20GRPRecord* x11369);

int x36568(void* x9402);

int x36571(void* x9405, void* x9406);

int x36578(void* x9412);

int x36581(void* x9415, void* x9416);

int x36607(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x338, struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x339);

int x11945(void* x11939, void* x11940, void* x11941);
/* GLOBAL VARS */

struct timeval x4591;
int main(int argc, char** argv) {
  FILE* x5282 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x5283 = 0;
  int x5284 = x5283;
  int* x5285 = &x5284;
  int x5286 = fscanf(x5282, "%d", x5285);
  pclose(x5282);
  struct NATIONRecord** x7034 = (struct NATIONRecord**)malloc(x5284 * sizeof(struct NATIONRecord*));
  memset(x7034, 0, x5284 * sizeof(struct NATIONRecord*));
  int x5290 = O_RDONLY;
  int x5291 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x5290);
  struct stat x5292 = (struct stat){0};
  /* VAR */ struct stat x5293 = x5292;
  struct stat x5294 = x5293;
  struct stat* x5295 = &x5294;
  int x5296 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x5295);
  size_t x5297 = x5295->st_size;
  int x5298 = PROT_READ;
  int x5299 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x5297, x5298, x5299, x5291, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x5284);
    /* VAR */ int ite30732 = 0;
    if(x6) {
      char x35113 = *x3;
      int x35114 = x35113!=('\0');
      ite30732 = x35114;
    } else {
      
      ite30732 = 0;
    };
    int x28787 = ite30732;
    if (!(x28787)) break; 
    
    /* VAR */ int x5307 = 0;
    int x5308 = x5307;
    int* x5309 = &x5308;
    char* x5310 = strntoi_unchecked(x3, x5309);
    x3 = x5310;
    char* x7058 = (char*)malloc(26 * sizeof(char));
    memset(x7058, 0, 26 * sizeof(char));
    /* VAR */ char* x5313 = x3;
    while(1) {
      
      char x5314 = *x3;
      int x5315 = x5314!=('|');
      /* VAR */ int ite30751 = 0;
      if(x5315) {
        char x35131 = *x3;
        int x35132 = x35131!=('\n');
        ite30751 = x35132;
      } else {
        
        ite30751 = 0;
      };
      int x28799 = ite30751;
      if (!(x28799)) break; 
      
      x3 += 1;
    };
    char* x5321 = x5313;
    int x5322 = x3 - x5321;
    char* x5323 = x5313;
    char* x5324 = strncpy(x7058, x5323, x5322);
    x3 += 1;
    /* VAR */ int x5331 = 0;
    int x5332 = x5331;
    int* x5333 = &x5332;
    char* x5334 = strntoi_unchecked(x3, x5333);
    x3 = x5334;
    char* x7081 = (char*)malloc(153 * sizeof(char));
    memset(x7081, 0, 153 * sizeof(char));
    /* VAR */ char* x5337 = x3;
    while(1) {
      
      char x5338 = *x3;
      int x5339 = x5338!=('|');
      /* VAR */ int ite30779 = 0;
      if(x5339) {
        char x35158 = *x3;
        int x35159 = x35158!=('\n');
        ite30779 = x35159;
      } else {
        
        ite30779 = 0;
      };
      int x28820 = ite30779;
      if (!(x28820)) break; 
      
      x3 += 1;
    };
    char* x5345 = x5337;
    int x5346 = x3 - x5345;
    char* x5347 = x5337;
    char* x5348 = strncpy(x7081, x5347, x5346);
    x3 += 1;
    struct NATIONRecord* x7956 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x7956, 0, 1 * sizeof(struct NATIONRecord));
    x7956->N_NATIONKEY = x5308; x7956->N_NAME = x7058; x7956->N_REGIONKEY = x5332; x7956->N_COMMENT = x7081;
    int x28 = x4;
    *(x7034 + x28) = x7956;
    int x30 = x4;
    int x31 = x30+(1);
    x4 = x31;
  };
  FILE* x5361 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x5362 = 0;
  int x5363 = x5362;
  int* x5364 = &x5363;
  int x5365 = fscanf(x5361, "%d", x5364);
  pclose(x5361);
  struct SUPPLIERRecord** x7111 = (struct SUPPLIERRecord**)malloc(x5363 * sizeof(struct SUPPLIERRecord*));
  memset(x7111, 0, x5363 * sizeof(struct SUPPLIERRecord*));
  int x5369 = O_RDONLY;
  int x5370 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x5369);
  /* VAR */ struct stat x5371 = x5292;
  struct stat x5372 = x5371;
  struct stat* x5373 = &x5372;
  int x5374 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x5373);
  size_t x5375 = x5373->st_size;
  int x5376 = PROT_READ;
  int x5377 = MAP_PRIVATE;
  char* x36 = mmap(NULL, x5375, x5376, x5377, x5370, 0);
  /* VAR */ int x37 = 0;
  while(1) {
    
    int x38 = x37;
    int x39 = x38<(x5363);
    /* VAR */ int ite30826 = 0;
    if(x39) {
      char x35204 = *x36;
      int x35205 = x35204!=('\0');
      ite30826 = x35205;
    } else {
      
      ite30826 = 0;
    };
    int x28860 = ite30826;
    if (!(x28860)) break; 
    
    /* VAR */ int x5385 = 0;
    int x5386 = x5385;
    int* x5387 = &x5386;
    char* x5388 = strntoi_unchecked(x36, x5387);
    x36 = x5388;
    char* x7134 = (char*)malloc(26 * sizeof(char));
    memset(x7134, 0, 26 * sizeof(char));
    /* VAR */ char* x5391 = x36;
    while(1) {
      
      char x5392 = *x36;
      int x5393 = x5392!=('|');
      /* VAR */ int ite30845 = 0;
      if(x5393) {
        char x35222 = *x36;
        int x35223 = x35222!=('\n');
        ite30845 = x35223;
      } else {
        
        ite30845 = 0;
      };
      int x28872 = ite30845;
      if (!(x28872)) break; 
      
      x36 += 1;
    };
    char* x5399 = x5391;
    int x5400 = x36 - x5399;
    char* x5401 = x5391;
    char* x5402 = strncpy(x7134, x5401, x5400);
    x36 += 1;
    char* x7152 = (char*)malloc(41 * sizeof(char));
    memset(x7152, 0, 41 * sizeof(char));
    /* VAR */ char* x5410 = x36;
    while(1) {
      
      char x5411 = *x36;
      int x5412 = x5411!=('|');
      /* VAR */ int ite30868 = 0;
      if(x5412) {
        char x35244 = *x36;
        int x35245 = x35244!=('\n');
        ite30868 = x35245;
      } else {
        
        ite30868 = 0;
      };
      int x28888 = ite30868;
      if (!(x28888)) break; 
      
      x36 += 1;
    };
    char* x5418 = x5410;
    int x5419 = x36 - x5418;
    char* x5420 = x5410;
    char* x5421 = strncpy(x7152, x5420, x5419);
    x36 += 1;
    /* VAR */ int x5428 = 0;
    int x5429 = x5428;
    int* x5430 = &x5429;
    char* x5431 = strntoi_unchecked(x36, x5430);
    x36 = x5431;
    char* x7175 = (char*)malloc(16 * sizeof(char));
    memset(x7175, 0, 16 * sizeof(char));
    /* VAR */ char* x5434 = x36;
    while(1) {
      
      char x5435 = *x36;
      int x5436 = x5435!=('|');
      /* VAR */ int ite30896 = 0;
      if(x5436) {
        char x35271 = *x36;
        int x35272 = x35271!=('\n');
        ite30896 = x35272;
      } else {
        
        ite30896 = 0;
      };
      int x28909 = ite30896;
      if (!(x28909)) break; 
      
      x36 += 1;
    };
    char* x5442 = x5434;
    int x5443 = x36 - x5442;
    char* x5444 = x5434;
    char* x5445 = strncpy(x7175, x5444, x5443);
    x36 += 1;
    /* VAR */ double x5452 = 0.0;
    double x5453 = x5452;
    double* x5454 = &x5453;
    char* x5455 = strntod_unchecked(x36, x5454);
    x36 = x5455;
    char* x7198 = (char*)malloc(102 * sizeof(char));
    memset(x7198, 0, 102 * sizeof(char));
    /* VAR */ char* x5458 = x36;
    while(1) {
      
      char x5459 = *x36;
      int x5460 = x5459!=('|');
      /* VAR */ int ite30924 = 0;
      if(x5460) {
        char x35298 = *x36;
        int x35299 = x35298!=('\n');
        ite30924 = x35299;
      } else {
        
        ite30924 = 0;
      };
      int x28930 = ite30924;
      if (!(x28930)) break; 
      
      x36 += 1;
    };
    char* x5466 = x5458;
    int x5467 = x36 - x5466;
    char* x5468 = x5458;
    char* x5469 = strncpy(x7198, x5468, x5467);
    x36 += 1;
    struct SUPPLIERRecord* x8075 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x8075, 0, 1 * sizeof(struct SUPPLIERRecord));
    x8075->S_SUPPKEY = x5386; x8075->S_NAME = x7134; x8075->S_ADDRESS = x7152; x8075->S_NATIONKEY = x5429; x8075->S_PHONE = x7175; x8075->S_ACCTBAL = x5453; x8075->S_COMMENT = x7198;
    int x78 = x37;
    *(x7111 + x78) = x8075;
    int x80 = x37;
    int x81 = x80+(1);
    x37 = x81;
  };
  FILE* x5482 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x5483 = 0;
  int x5484 = x5483;
  int* x5485 = &x5484;
  int x5486 = fscanf(x5482, "%d", x5485);
  pclose(x5482);
  struct PARTRecord** x7228 = (struct PARTRecord**)malloc(x5484 * sizeof(struct PARTRecord*));
  memset(x7228, 0, x5484 * sizeof(struct PARTRecord*));
  int x5490 = O_RDONLY;
  int x5491 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x5490);
  /* VAR */ struct stat x5492 = x5292;
  struct stat x5493 = x5492;
  struct stat* x5494 = &x5493;
  int x5495 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x5494);
  size_t x5496 = x5494->st_size;
  int x5497 = PROT_READ;
  int x5498 = MAP_PRIVATE;
  char* x86 = mmap(NULL, x5496, x5497, x5498, x5491, 0);
  /* VAR */ int x87 = 0;
  while(1) {
    
    int x88 = x87;
    int x89 = x88<(x5484);
    /* VAR */ int ite30971 = 0;
    if(x89) {
      char x35344 = *x86;
      int x35345 = x35344!=('\0');
      ite30971 = x35345;
    } else {
      
      ite30971 = 0;
    };
    int x28970 = ite30971;
    if (!(x28970)) break; 
    
    /* VAR */ int x5506 = 0;
    int x5507 = x5506;
    int* x5508 = &x5507;
    char* x5509 = strntoi_unchecked(x86, x5508);
    x86 = x5509;
    char* x7251 = (char*)malloc(56 * sizeof(char));
    memset(x7251, 0, 56 * sizeof(char));
    /* VAR */ char* x5512 = x86;
    while(1) {
      
      char x5513 = *x86;
      int x5514 = x5513!=('|');
      /* VAR */ int ite30990 = 0;
      if(x5514) {
        char x35362 = *x86;
        int x35363 = x35362!=('\n');
        ite30990 = x35363;
      } else {
        
        ite30990 = 0;
      };
      int x28982 = ite30990;
      if (!(x28982)) break; 
      
      x86 += 1;
    };
    char* x5520 = x5512;
    int x5521 = x86 - x5520;
    char* x5522 = x5512;
    char* x5523 = strncpy(x7251, x5522, x5521);
    x86 += 1;
    char* x7269 = (char*)malloc(26 * sizeof(char));
    memset(x7269, 0, 26 * sizeof(char));
    /* VAR */ char* x5531 = x86;
    while(1) {
      
      char x5532 = *x86;
      int x5533 = x5532!=('|');
      /* VAR */ int ite31013 = 0;
      if(x5533) {
        char x35384 = *x86;
        int x35385 = x35384!=('\n');
        ite31013 = x35385;
      } else {
        
        ite31013 = 0;
      };
      int x28998 = ite31013;
      if (!(x28998)) break; 
      
      x86 += 1;
    };
    char* x5539 = x5531;
    int x5540 = x86 - x5539;
    char* x5541 = x5531;
    char* x5542 = strncpy(x7269, x5541, x5540);
    x86 += 1;
    char* x7287 = (char*)malloc(11 * sizeof(char));
    memset(x7287, 0, 11 * sizeof(char));
    /* VAR */ char* x5550 = x86;
    while(1) {
      
      char x5551 = *x86;
      int x5552 = x5551!=('|');
      /* VAR */ int ite31036 = 0;
      if(x5552) {
        char x35406 = *x86;
        int x35407 = x35406!=('\n');
        ite31036 = x35407;
      } else {
        
        ite31036 = 0;
      };
      int x29014 = ite31036;
      if (!(x29014)) break; 
      
      x86 += 1;
    };
    char* x5558 = x5550;
    int x5559 = x86 - x5558;
    char* x5560 = x5550;
    char* x5561 = strncpy(x7287, x5560, x5559);
    x86 += 1;
    char* x7305 = (char*)malloc(26 * sizeof(char));
    memset(x7305, 0, 26 * sizeof(char));
    /* VAR */ char* x5569 = x86;
    while(1) {
      
      char x5570 = *x86;
      int x5571 = x5570!=('|');
      /* VAR */ int ite31059 = 0;
      if(x5571) {
        char x35428 = *x86;
        int x35429 = x35428!=('\n');
        ite31059 = x35429;
      } else {
        
        ite31059 = 0;
      };
      int x29030 = ite31059;
      if (!(x29030)) break; 
      
      x86 += 1;
    };
    char* x5577 = x5569;
    int x5578 = x86 - x5577;
    char* x5579 = x5569;
    char* x5580 = strncpy(x7305, x5579, x5578);
    x86 += 1;
    /* VAR */ int x5587 = 0;
    int x5588 = x5587;
    int* x5589 = &x5588;
    char* x5590 = strntoi_unchecked(x86, x5589);
    x86 = x5590;
    char* x7328 = (char*)malloc(11 * sizeof(char));
    memset(x7328, 0, 11 * sizeof(char));
    /* VAR */ char* x5593 = x86;
    while(1) {
      
      char x5594 = *x86;
      int x5595 = x5594!=('|');
      /* VAR */ int ite31087 = 0;
      if(x5595) {
        char x35455 = *x86;
        int x35456 = x35455!=('\n');
        ite31087 = x35456;
      } else {
        
        ite31087 = 0;
      };
      int x29051 = ite31087;
      if (!(x29051)) break; 
      
      x86 += 1;
    };
    char* x5601 = x5593;
    int x5602 = x86 - x5601;
    char* x5603 = x5593;
    char* x5604 = strncpy(x7328, x5603, x5602);
    x86 += 1;
    /* VAR */ double x5611 = 0.0;
    double x5612 = x5611;
    double* x5613 = &x5612;
    char* x5614 = strntod_unchecked(x86, x5613);
    x86 = x5614;
    char* x7351 = (char*)malloc(24 * sizeof(char));
    memset(x7351, 0, 24 * sizeof(char));
    /* VAR */ char* x5617 = x86;
    while(1) {
      
      char x5618 = *x86;
      int x5619 = x5618!=('|');
      /* VAR */ int ite31115 = 0;
      if(x5619) {
        char x35482 = *x86;
        int x35483 = x35482!=('\n');
        ite31115 = x35483;
      } else {
        
        ite31115 = 0;
      };
      int x29072 = ite31115;
      if (!(x29072)) break; 
      
      x86 += 1;
    };
    char* x5625 = x5617;
    int x5626 = x86 - x5625;
    char* x5627 = x5617;
    char* x5628 = strncpy(x7351, x5627, x5626);
    x86 += 1;
    struct PARTRecord* x8230 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x8230, 0, 1 * sizeof(struct PARTRecord));
    x8230->P_PARTKEY = x5507; x8230->P_NAME = x7251; x8230->P_MFGR = x7269; x8230->P_BRAND = x7287; x8230->P_TYPE = x7305; x8230->P_SIZE = x5588; x8230->P_CONTAINER = x7328; x8230->P_RETAILPRICE = x5612; x8230->P_COMMENT = x7351;
    int x142 = x87;
    *(x7228 + x142) = x8230;
    int x144 = x87;
    int x145 = x144+(1);
    x87 = x145;
  };
  FILE* x5641 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x5642 = 0;
  int x5643 = x5642;
  int* x5644 = &x5643;
  int x5645 = fscanf(x5641, "%d", x5644);
  pclose(x5641);
  struct PARTSUPPRecord** x7381 = (struct PARTSUPPRecord**)malloc(x5643 * sizeof(struct PARTSUPPRecord*));
  memset(x7381, 0, x5643 * sizeof(struct PARTSUPPRecord*));
  int x5649 = O_RDONLY;
  int x5650 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x5649);
  /* VAR */ struct stat x5651 = x5292;
  struct stat x5652 = x5651;
  struct stat* x5653 = &x5652;
  int x5654 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x5653);
  size_t x5655 = x5653->st_size;
  int x5656 = PROT_READ;
  int x5657 = MAP_PRIVATE;
  char* x150 = mmap(NULL, x5655, x5656, x5657, x5650, 0);
  /* VAR */ int x151 = 0;
  while(1) {
    
    int x152 = x151;
    int x153 = x152<(x5643);
    /* VAR */ int ite31162 = 0;
    if(x153) {
      char x35528 = *x150;
      int x35529 = x35528!=('\0');
      ite31162 = x35529;
    } else {
      
      ite31162 = 0;
    };
    int x29112 = ite31162;
    if (!(x29112)) break; 
    
    /* VAR */ int x5665 = 0;
    int x5666 = x5665;
    int* x5667 = &x5666;
    char* x5668 = strntoi_unchecked(x150, x5667);
    x150 = x5668;
    /* VAR */ int x5670 = 0;
    int x5671 = x5670;
    int* x5672 = &x5671;
    char* x5673 = strntoi_unchecked(x150, x5672);
    x150 = x5673;
    /* VAR */ int x5675 = 0;
    int x5676 = x5675;
    int* x5677 = &x5676;
    char* x5678 = strntoi_unchecked(x150, x5677);
    x150 = x5678;
    /* VAR */ double x5680 = 0.0;
    double x5681 = x5680;
    double* x5682 = &x5681;
    char* x5683 = strntod_unchecked(x150, x5682);
    x150 = x5683;
    char* x7419 = (char*)malloc(200 * sizeof(char));
    memset(x7419, 0, 200 * sizeof(char));
    /* VAR */ char* x5686 = x150;
    while(1) {
      
      char x5687 = *x150;
      int x5688 = x5687!=('|');
      /* VAR */ int ite31196 = 0;
      if(x5688) {
        char x35561 = *x150;
        int x35562 = x35561!=('\n');
        ite31196 = x35562;
      } else {
        
        ite31196 = 0;
      };
      int x29139 = ite31196;
      if (!(x29139)) break; 
      
      x150 += 1;
    };
    char* x5694 = x5686;
    int x5695 = x150 - x5694;
    char* x5696 = x5686;
    char* x5697 = strncpy(x7419, x5696, x5695);
    x150 += 1;
    struct PARTSUPPRecord* x8300 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x8300, 0, 1 * sizeof(struct PARTSUPPRecord));
    x8300->PS_PARTKEY = x5666; x8300->PS_SUPPKEY = x5671; x8300->PS_AVAILQTY = x5676; x8300->PS_SUPPLYCOST = x5681; x8300->PS_COMMENT = x7419;
    int x169 = x151;
    *(x7381 + x169) = x8300;
    int x171 = x151;
    int x172 = x171+(1);
    x151 = x172;
  };
  FILE* x5710 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x5711 = 0;
  int x5712 = x5711;
  int* x5713 = &x5712;
  int x5714 = fscanf(x5710, "%d", x5713);
  pclose(x5710);
  struct LINEITEMRecord** x7449 = (struct LINEITEMRecord**)malloc(x5712 * sizeof(struct LINEITEMRecord*));
  memset(x7449, 0, x5712 * sizeof(struct LINEITEMRecord*));
  int x5718 = O_RDONLY;
  int x5719 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x5718);
  /* VAR */ struct stat x5720 = x5292;
  struct stat x5721 = x5720;
  struct stat* x5722 = &x5721;
  int x5723 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x5722);
  size_t x5724 = x5722->st_size;
  int x5725 = PROT_READ;
  int x5726 = MAP_PRIVATE;
  char* x177 = mmap(NULL, x5724, x5725, x5726, x5719, 0);
  /* VAR */ int x178 = 0;
  while(1) {
    
    int x179 = x178;
    int x180 = x179<(x5712);
    /* VAR */ int ite31243 = 0;
    if(x180) {
      char x35607 = *x177;
      int x35608 = x35607!=('\0');
      ite31243 = x35608;
    } else {
      
      ite31243 = 0;
    };
    int x29179 = ite31243;
    if (!(x29179)) break; 
    
    /* VAR */ int x5734 = 0;
    int x5735 = x5734;
    int* x5736 = &x5735;
    char* x5737 = strntoi_unchecked(x177, x5736);
    x177 = x5737;
    /* VAR */ int x5739 = 0;
    int x5740 = x5739;
    int* x5741 = &x5740;
    char* x5742 = strntoi_unchecked(x177, x5741);
    x177 = x5742;
    /* VAR */ int x5744 = 0;
    int x5745 = x5744;
    int* x5746 = &x5745;
    char* x5747 = strntoi_unchecked(x177, x5746);
    x177 = x5747;
    /* VAR */ int x5749 = 0;
    int x5750 = x5749;
    int* x5751 = &x5750;
    char* x5752 = strntoi_unchecked(x177, x5751);
    x177 = x5752;
    /* VAR */ double x5754 = 0.0;
    double x5755 = x5754;
    double* x5756 = &x5755;
    char* x5757 = strntod_unchecked(x177, x5756);
    x177 = x5757;
    /* VAR */ double x5759 = 0.0;
    double x5760 = x5759;
    double* x5761 = &x5760;
    char* x5762 = strntod_unchecked(x177, x5761);
    x177 = x5762;
    /* VAR */ double x5764 = 0.0;
    double x5765 = x5764;
    double* x5766 = &x5765;
    char* x5767 = strntod_unchecked(x177, x5766);
    x177 = x5767;
    /* VAR */ double x5769 = 0.0;
    double x5770 = x5769;
    double* x5771 = &x5770;
    char* x5772 = strntod_unchecked(x177, x5771);
    x177 = x5772;
    char x5774 = *x177;
    /* VAR */ char x5775 = x5774;
    x177 += 1;
    x177 += 1;
    char x5778 = x5775;
    char x5779 = *x177;
    /* VAR */ char x5780 = x5779;
    x177 += 1;
    x177 += 1;
    char x5783 = x5780;
    /* VAR */ int x5784 = 0;
    int x5785 = x5784;
    int* x5786 = &x5785;
    char* x5787 = strntoi_unchecked(x177, x5786);
    x177 = x5787;
    /* VAR */ int x5789 = 0;
    int x5790 = x5789;
    int* x5791 = &x5790;
    char* x5792 = strntoi_unchecked(x177, x5791);
    x177 = x5792;
    /* VAR */ int x5794 = 0;
    int x5795 = x5794;
    int* x5796 = &x5795;
    char* x5797 = strntoi_unchecked(x177, x5796);
    x177 = x5797;
    int x5799 = x5785*(10000);
    int x5800 = x5790*(100);
    int x5801 = x5799+(x5800);
    int x5802 = x5801+(x5795);
    /* VAR */ int x5803 = 0;
    int x5804 = x5803;
    int* x5805 = &x5804;
    char* x5806 = strntoi_unchecked(x177, x5805);
    x177 = x5806;
    /* VAR */ int x5808 = 0;
    int x5809 = x5808;
    int* x5810 = &x5809;
    char* x5811 = strntoi_unchecked(x177, x5810);
    x177 = x5811;
    /* VAR */ int x5813 = 0;
    int x5814 = x5813;
    int* x5815 = &x5814;
    char* x5816 = strntoi_unchecked(x177, x5815);
    x177 = x5816;
    int x5818 = x5804*(10000);
    int x5819 = x5809*(100);
    int x5820 = x5818+(x5819);
    int x5821 = x5820+(x5814);
    /* VAR */ int x5822 = 0;
    int x5823 = x5822;
    int* x5824 = &x5823;
    char* x5825 = strntoi_unchecked(x177, x5824);
    x177 = x5825;
    /* VAR */ int x5827 = 0;
    int x5828 = x5827;
    int* x5829 = &x5828;
    char* x5830 = strntoi_unchecked(x177, x5829);
    x177 = x5830;
    /* VAR */ int x5832 = 0;
    int x5833 = x5832;
    int* x5834 = &x5833;
    char* x5835 = strntoi_unchecked(x177, x5834);
    x177 = x5835;
    int x5837 = x5823*(10000);
    int x5838 = x5828*(100);
    int x5839 = x5837+(x5838);
    int x5840 = x5839+(x5833);
    char* x7574 = (char*)malloc(26 * sizeof(char));
    memset(x7574, 0, 26 * sizeof(char));
    /* VAR */ char* x5842 = x177;
    while(1) {
      
      char x5843 = *x177;
      int x5844 = x5843!=('|');
      /* VAR */ int ite31364 = 0;
      if(x5844) {
        char x35727 = *x177;
        int x35728 = x35727!=('\n');
        ite31364 = x35728;
      } else {
        
        ite31364 = 0;
      };
      int x29293 = ite31364;
      if (!(x29293)) break; 
      
      x177 += 1;
    };
    char* x5850 = x5842;
    int x5851 = x177 - x5850;
    char* x5852 = x5842;
    char* x5853 = strncpy(x7574, x5852, x5851);
    x177 += 1;
    char* x7592 = (char*)malloc(11 * sizeof(char));
    memset(x7592, 0, 11 * sizeof(char));
    /* VAR */ char* x5861 = x177;
    while(1) {
      
      char x5862 = *x177;
      int x5863 = x5862!=('|');
      /* VAR */ int ite31387 = 0;
      if(x5863) {
        char x35749 = *x177;
        int x35750 = x35749!=('\n');
        ite31387 = x35750;
      } else {
        
        ite31387 = 0;
      };
      int x29309 = ite31387;
      if (!(x29309)) break; 
      
      x177 += 1;
    };
    char* x5869 = x5861;
    int x5870 = x177 - x5869;
    char* x5871 = x5861;
    char* x5872 = strncpy(x7592, x5871, x5870);
    x177 += 1;
    char* x7610 = (char*)malloc(45 * sizeof(char));
    memset(x7610, 0, 45 * sizeof(char));
    /* VAR */ char* x5880 = x177;
    while(1) {
      
      char x5881 = *x177;
      int x5882 = x5881!=('|');
      /* VAR */ int ite31410 = 0;
      if(x5882) {
        char x35771 = *x177;
        int x35772 = x35771!=('\n');
        ite31410 = x35772;
      } else {
        
        ite31410 = 0;
      };
      int x29325 = ite31410;
      if (!(x29325)) break; 
      
      x177 += 1;
    };
    char* x5888 = x5880;
    int x5889 = x177 - x5888;
    char* x5890 = x5880;
    char* x5891 = strncpy(x7610, x5890, x5889);
    x177 += 1;
    struct LINEITEMRecord* x8493 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x8493, 0, 1 * sizeof(struct LINEITEMRecord));
    x8493->L_ORDERKEY = x5735; x8493->L_PARTKEY = x5740; x8493->L_SUPPKEY = x5745; x8493->L_LINENUMBER = x5750; x8493->L_QUANTITY = x5755; x8493->L_EXTENDEDPRICE = x5760; x8493->L_DISCOUNT = x5765; x8493->L_TAX = x5770; x8493->L_RETURNFLAG = x5778; x8493->L_LINESTATUS = x5783; x8493->L_SHIPDATE = x5802; x8493->L_COMMITDATE = x5821; x8493->L_RECEIPTDATE = x5840; x8493->L_SHIPINSTRUCT = x7574; x8493->L_SHIPMODE = x7592; x8493->L_COMMENT = x7610;
    int x221 = x178;
    *(x7449 + x221) = x8493;
    int x223 = x178;
    int x224 = x223+(1);
    x178 = x224;
  };
  int x228 = 0;
  for(; x228 < 1 ; x228 += 1) {
    
    void*** x36523 = (void***){x36516};
    int* x36524 = (int*){x36519};
    GHashTable* x36525 = g_hash_table_new(x36523, x36524);
    void*** x36533 = (void***){x36526};
    int* x36534 = (int*){x36529};
    GHashTable* x36535 = g_hash_table_new(x36533, x36534);
    GHashTable* x36567 = g_hash_table_new(x36536, x36543);
    void*** x36575 = (void***){x36568};
    int* x36576 = (int*){x36571};
    GHashTable* x36577 = g_hash_table_new(x36575, x36576);
    void*** x36585 = (void***){x36578};
    int* x36586 = (int*){x36581};
    GHashTable* x36587 = g_hash_table_new(x36585, x36586);
    /* VAR */ struct timeval x36588 = x4591;
    struct timeval x36589 = x36588;
    /* VAR */ struct timeval x36590 = x4591;
    struct timeval x36591 = x36590;
    /* VAR */ struct timeval x36592 = x4591;
    struct timeval x36593 = x36592;
    struct timeval* x36594 = &x36591;
    gettimeofday(x36594, NULL);
    /* VAR */ int x36596 = 0;
    /* VAR */ int x36597 = 0;
    /* VAR */ int x36598 = 0;
    /* VAR */ int x36599 = 0;
    /* VAR */ int x36600 = 0;
    int* x36613 = &(x36607);
    GTree* x36614 = g_tree_new(x36613);
    /* VAR */ int x36615 = 0;
    /* VAR */ int x36616 = 0;
    while(1) {
      
      int x36618 = x36599;
      int x36619 = x36618<(x5284);
      if (!(x36619)) break; 
      
      int x2799 = x36599;
      struct NATIONRecord* x359 = x7034[x2799];
      char* x361 = x359->N_NAME;
      int x23833 = strcmp(x361, "JORDAN");
      int x23834 = x23833==(0);
      if(x23834) {
        int x363 = x359->N_NATIONKEY;
        void* x9455 = (void*){x363};
        void* x9456 = (void*){x359};
        void* x9457 = g_hash_table_lookup(x36525, x9455);
        GList** x9458 = (GList**){x9457};
        GList** x9459 = NULL;
        int x9460 = x9458==(x9459);
        /* VAR */ GList** ite30137 = 0;
        if(x9460) {
          GList** x30138 = malloc(8);
          GList* x30139 = NULL;
          pointer_assign(x30138, x30139);
          ite30137 = x30138;
        } else {
          
          ite30137 = x9458;
        };
        GList** x9464 = ite30137;
        GList* x9465 = *(x9464);
        GList* x9466 = g_list_prepend(x9465, x9456);
        pointer_assign(x9464, x9466);
        void* x9468 = (void*){x9464};
        g_hash_table_insert(x36525, x9455, x9468);
      };
      int x2807 = x36599;
      int x368 = x2807+(1);
      x36599 = x368;
    };
    while(1) {
      
      int x36651 = x36596;
      int x36652 = x36651<(x5484);
      if (!(x36652)) break; 
      
      int x2816 = x36596;
      struct PARTRecord* x377 = x7228[x2816];
      char* x379 = x377->P_NAME;
      int x23862 = strlen("azure");
      int x23863 = strncmp(x379, "azure", x23862);
      int x23864 = x23863==(0);
      if(x23864) {
        int x381 = x377->P_PARTKEY;
        void* x9483 = (void*){x381};
        void* x9484 = (void*){x377};
        void* x9485 = g_hash_table_lookup(x36587, x9483);
        GList** x9486 = (GList**){x9485};
        GList** x9487 = NULL;
        int x9488 = x9486==(x9487);
        /* VAR */ GList** ite30170 = 0;
        if(x9488) {
          GList** x30171 = malloc(8);
          GList* x30172 = NULL;
          pointer_assign(x30171, x30172);
          ite30170 = x30171;
        } else {
          
          ite30170 = x9486;
        };
        GList** x9492 = ite30170;
        GList* x9493 = *(x9492);
        GList* x9494 = g_list_prepend(x9493, x9484);
        pointer_assign(x9492, x9494);
        void* x9496 = (void*){x9492};
        g_hash_table_insert(x36587, x9483, x9496);
      };
      int x2824 = x36596;
      int x386 = x2824+(1);
      x36596 = x386;
    };
    while(1) {
      
      int x36685 = x36597;
      int x36686 = x36685<(x5643);
      if (!(x36686)) break; 
      
      int x2833 = x36597;
      struct PARTSUPPRecord* x395 = x7381[x2833];
      int x397 = x395->PS_PARTKEY;
      void* x9508 = (void*){x397};
      void* x9509 = g_hash_table_lookup(x36587, x9508);
      GList** x9510 = (GList**){x9509};
      int x17699 = x9510!=(NULL);
      if(x17699) {
        GList* x11529 = *(x9510);
        /* VAR */ GList* x11530 = x11529;
        while(1) {
          
          GList* x11531 = x11530;
          GList* x11532 = NULL;
          int x11533 = x11531!=(x11532);
          if (!(x11533)) break; 
          
          GList* x11534 = x11530;
          void* x11535 = g_list_nth_data(x11534, 0);
          struct PARTRecord* x11536 = (struct PARTRecord*){x11535};
          GList* x11537 = x11530;
          GList* x11538 = g_list_next(x11537);
          x11530 = x11538;
          int x11540 = x11536->P_PARTKEY;
          int x11541 = x11540==(x397);
          if(x11541) {
            char* x1158 = x11536->P_NAME;
            char* x1159 = x11536->P_MFGR;
            char* x1160 = x11536->P_BRAND;
            char* x1161 = x11536->P_TYPE;
            int x1162 = x11536->P_SIZE;
            char* x1163 = x11536->P_CONTAINER;
            double x1164 = x11536->P_RETAILPRICE;
            char* x1165 = x11536->P_COMMENT;
            int x1166 = x395->PS_SUPPKEY;
            int x1167 = x395->PS_AVAILQTY;
            double x1168 = x395->PS_SUPPLYCOST;
            char* x1169 = x395->PS_COMMENT;
            struct PARTRecord_PARTSUPPRecord* x8588 = (struct PARTRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct PARTRecord_PARTSUPPRecord));
            memset(x8588, 0, 1 * sizeof(struct PARTRecord_PARTSUPPRecord));
            x8588->P_PARTKEY = x11540; x8588->P_NAME = x1158; x8588->P_MFGR = x1159; x8588->P_BRAND = x1160; x8588->P_TYPE = x1161; x8588->P_SIZE = x1162; x8588->P_CONTAINER = x1163; x8588->P_RETAILPRICE = x1164; x8588->P_COMMENT = x1165; x8588->PS_PARTKEY = x397; x8588->PS_SUPPKEY = x1166; x8588->PS_AVAILQTY = x1167; x8588->PS_SUPPLYCOST = x1168; x8588->PS_COMMENT = x1169;
            int x418 = x8588->PS_PARTKEY;
            void* x9536 = (void*){x418};
            void* x9537 = (void*){x8588};
            void* x9538 = g_hash_table_lookup(x36577, x9536);
            GList** x9539 = (GList**){x9538};
            GList** x9540 = NULL;
            int x9541 = x9539==(x9540);
            /* VAR */ GList** ite30275 = 0;
            if(x9541) {
              GList** x30276 = malloc(8);
              GList* x30277 = NULL;
              pointer_assign(x30276, x30277);
              ite30275 = x30276;
            } else {
              
              ite30275 = x9539;
            };
            GList** x9545 = ite30275;
            GList* x9546 = *(x9545);
            GList* x9547 = g_list_prepend(x9546, x9537);
            pointer_assign(x9545, x9547);
            void* x9549 = (void*){x9545};
            g_hash_table_insert(x36577, x9536, x9549);
          };
        };
      };
      int x2885 = x36597;
      int x426 = x2885+(1);
      x36597 = x426;
    };
    while(1) {
      
      int x36791 = x36600;
      int x36792 = x36791<(x5712);
      if (!(x36792)) break; 
      
      int x2895 = x36600;
      struct LINEITEMRecord* x436 = x7449[x2895];
      int x438 = x436->L_SHIPDATE;
      int x439 = x438>=(19960101);
      /* VAR */ int ite32457 = 0;
      if(x439) {
        int x36799 = x438<(19970101);
        ite32457 = x36799;
      } else {
        
        ite32457 = 0;
      };
      int x30298 = ite32457;
      if(x30298) {
        int x442 = x436->L_PARTKEY;
        void* x9567 = (void*){x442};
        void* x9568 = g_hash_table_lookup(x36577, x9567);
        GList** x9569 = (GList**){x9568};
        int x17801 = x9569!=(NULL);
        if(x17801) {
          GList* x11659 = *(x9569);
          /* VAR */ GList* x11660 = x11659;
          while(1) {
            
            GList* x11661 = x11660;
            GList* x11662 = NULL;
            int x11663 = x11661!=(x11662);
            if (!(x11663)) break; 
            
            GList* x11664 = x11660;
            void* x11665 = g_list_nth_data(x11664, 0);
            struct PARTRecord_PARTSUPPRecord* x11666 = (struct PARTRecord_PARTSUPPRecord*){x11665};
            GList* x11667 = x11660;
            GList* x11668 = g_list_next(x11667);
            x11660 = x11668;
            int x11670 = x11666->PS_PARTKEY;
            int x11671 = x11670==(x442);
            /* VAR */ int ite32555 = 0;
            if(x11671) {
              int x36895 = x11666->PS_SUPPKEY;
              int x36896 = x436->L_SUPPKEY;
              int x36897 = x36895==(x36896);
              ite32555 = x36897;
            } else {
              
              ite32555 = 0;
            };
            int x30382 = ite32555;
            if(x30382) {
              int x1278 = x11666->P_PARTKEY;
              char* x1279 = x11666->P_NAME;
              char* x1280 = x11666->P_MFGR;
              char* x1281 = x11666->P_BRAND;
              char* x1282 = x11666->P_TYPE;
              int x1283 = x11666->P_SIZE;
              char* x1284 = x11666->P_CONTAINER;
              double x1285 = x11666->P_RETAILPRICE;
              char* x1286 = x11666->P_COMMENT;
              int x1287 = x11666->PS_SUPPKEY;
              int x1288 = x11666->PS_AVAILQTY;
              double x1289 = x11666->PS_SUPPLYCOST;
              char* x1290 = x11666->PS_COMMENT;
              int x1291 = x436->L_ORDERKEY;
              int x1292 = x436->L_SUPPKEY;
              int x1293 = x436->L_LINENUMBER;
              double x1294 = x436->L_QUANTITY;
              double x1295 = x436->L_EXTENDEDPRICE;
              double x1296 = x436->L_DISCOUNT;
              double x1297 = x436->L_TAX;
              char x1298 = x436->L_RETURNFLAG;
              char x1299 = x436->L_LINESTATUS;
              int x1300 = x436->L_COMMITDATE;
              int x1301 = x436->L_RECEIPTDATE;
              char* x1302 = x436->L_SHIPINSTRUCT;
              char* x1303 = x436->L_SHIPMODE;
              char* x1304 = x436->L_COMMENT;
              struct PARTRecord_PARTSUPPRecord_LINEITEMRecord* x8649 = (struct PARTRecord_PARTSUPPRecord_LINEITEMRecord*)malloc(1 * sizeof(struct PARTRecord_PARTSUPPRecord_LINEITEMRecord));
              memset(x8649, 0, 1 * sizeof(struct PARTRecord_PARTSUPPRecord_LINEITEMRecord));
              x8649->P_PARTKEY = x1278; x8649->P_NAME = x1279; x8649->P_MFGR = x1280; x8649->P_BRAND = x1281; x8649->P_TYPE = x1282; x8649->P_SIZE = x1283; x8649->P_CONTAINER = x1284; x8649->P_RETAILPRICE = x1285; x8649->P_COMMENT = x1286; x8649->PS_PARTKEY = x11670; x8649->PS_SUPPKEY = x1287; x8649->PS_AVAILQTY = x1288; x8649->PS_SUPPLYCOST = x1289; x8649->PS_COMMENT = x1290; x8649->L_ORDERKEY = x1291; x8649->L_PARTKEY = x442; x8649->L_SUPPKEY = x1292; x8649->L_LINENUMBER = x1293; x8649->L_QUANTITY = x1294; x8649->L_EXTENDEDPRICE = x1295; x8649->L_DISCOUNT = x1296; x8649->L_TAX = x1297; x8649->L_RETURNFLAG = x1298; x8649->L_LINESTATUS = x1299; x8649->L_SHIPDATE = x438; x8649->L_COMMITDATE = x1300; x8649->L_RECEIPTDATE = x1301; x8649->L_SHIPINSTRUCT = x1302; x8649->L_SHIPMODE = x1303; x8649->L_COMMENT = x1304;
              int x498 = x8649->PS_PARTKEY;
              int x499 = x8649->PS_SUPPKEY;
              int x500 = x8649->PS_AVAILQTY;
              struct Q20GRPRecord* x8655 = (struct Q20GRPRecord*)malloc(1 * sizeof(struct Q20GRPRecord));
              memset(x8655, 0, 1 * sizeof(struct Q20GRPRecord));
              x8655->PS_PARTKEY = x498; x8655->PS_SUPPKEY = x499; x8655->PS_AVAILQTY = x500;
              void* x11713 = g_hash_table_lookup(x36567, x8655);
              int x11643 = x11713==(NULL);
              /* VAR */ struct AGGRecord_Q20GRPRecord* ite30423 = 0;
              if(x11643) {
                double* x30424 = (double*)malloc(1 * sizeof(double));
                memset(x30424, 0, 1 * sizeof(double));
                struct AGGRecord_Q20GRPRecord* x30425 = (struct AGGRecord_Q20GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q20GRPRecord));
                memset(x30425, 0, 1 * sizeof(struct AGGRecord_Q20GRPRecord));
                x30425->key = x8655; x30425->aggs = x30424;
                g_hash_table_insert(x36567, x8655, x30425);
                ite30423 = x30425;
              } else {
                
                ite30423 = x11713;
              };
              struct AGGRecord_Q20GRPRecord* x11653 = ite30423;
              double* x506 = x11653->aggs;
              double x520 = x506[0];
              double x521 = x8649->L_QUANTITY;
              double x522 = x520+(x521);
              *x506 = x522;
            };
          };
        };
      };
      int x3044 = x36600;
      int x534 = x3044+(1);
      x36600 = x534;
    };
    GList* x36991 = g_hash_table_get_keys(x36567);
    /* VAR */ GList* x36992 = x36991;
    int x36993 = g_hash_table_size(x36567);
    int x26649 = 0;
    for(; x26649 < x36993 ; x26649 += 1) {
      
      GList* x26650 = x36992;
      void* x26651 = g_list_nth_data(x26650, 0);
      GList* x26652 = g_list_next(x26650);
      x36992 = x26652;
      void* x26654 = g_hash_table_lookup(x36567, x26651);
      struct AGGRecord_Q20GRPRecord* x26656 = (struct AGGRecord_Q20GRPRecord*){x26654};
      struct Q20GRPRecord* x26657 = x26656->key;
      int x26658 = x26657->PS_SUPPKEY;
      int x26659 = x26657->PS_AVAILQTY;
      double* x26660 = x26656->aggs;
      double x26661 = x26660[0];
      double x26662 = 0.5*(x26661);
      int x26664 = x26659>(x26662);
      if(x26664) {
        void* x9645 = (void*){x26658};
        void* x9646 = (void*){x26656};
        void* x9647 = g_hash_table_lookup(x36535, x9645);
        GList** x9648 = (GList**){x9647};
        GList** x9649 = NULL;
        int x9650 = x9648==(x9649);
        /* VAR */ GList** ite30535 = 0;
        if(x9650) {
          GList** x30536 = malloc(8);
          GList* x30537 = NULL;
          pointer_assign(x30536, x30537);
          ite30535 = x30536;
        } else {
          
          ite30535 = x9648;
        };
        GList** x9654 = ite30535;
        GList* x9655 = *(x9654);
        GList* x9656 = g_list_prepend(x9655, x9646);
        pointer_assign(x9654, x9656);
        void* x9658 = (void*){x9654};
        g_hash_table_insert(x36535, x9645, x9658);
      };
    };
    while(1) {
      
      int x37068 = x36598;
      int x37069 = x37068<(x5363);
      if (!(x37069)) break; 
      
      int x3068 = x36598;
      struct SUPPLIERRecord* x560 = x7111[x3068];
      int x562 = x560->S_SUPPKEY;
      void* x9668 = (void*){x562};
      void* x9669 = g_hash_table_lookup(x36535, x9668);
      GList** x9670 = (GList**){x9669};
      int x18007 = x9670!=(NULL);
      if(x18007) {
        GList* x11865 = *(x9670);
        /* VAR */ GList* x11866 = x11865;
        while(1) {
          
          GList* x11867 = x11866;
          GList* x11868 = NULL;
          int x11869 = x11867!=(x11868);
          if (!(x11869)) break; 
          
          GList* x11870 = x11866;
          void* x11871 = g_list_nth_data(x11870, 0);
          struct AGGRecord_Q20GRPRecord* x11872 = (struct AGGRecord_Q20GRPRecord*){x11871};
          GList* x11873 = x11866;
          GList* x11874 = g_list_next(x11873);
          x11866 = x11874;
          struct Q20GRPRecord* x11876 = x11872->key;
          int x11877 = x11876->PS_SUPPKEY;
          int x11878 = x11877==(x562);
          if(x11878) {
            double* x1445 = x11872->aggs;
            char* x1446 = x560->S_NAME;
            char* x1447 = x560->S_ADDRESS;
            int x1448 = x560->S_NATIONKEY;
            char* x1449 = x560->S_PHONE;
            double x1450 = x560->S_ACCTBAL;
            char* x1451 = x560->S_COMMENT;
            void* x9688 = (void*){x1448};
            void* x9689 = g_hash_table_lookup(x36525, x9688);
            GList** x9690 = (GList**){x9689};
            int x18087 = x9690!=(NULL);
            if(x18087) {
              GList* x11843 = *(x9690);
              /* VAR */ GList* x11844 = x11843;
              while(1) {
                
                GList* x11845 = x11844;
                GList* x11846 = NULL;
                int x11847 = x11845!=(x11846);
                if (!(x11847)) break; 
                
                GList* x11848 = x11844;
                void* x11849 = g_list_nth_data(x11848, 0);
                struct NATIONRecord* x11850 = (struct NATIONRecord*){x11849};
                GList* x11851 = x11844;
                GList* x11852 = g_list_next(x11851);
                x11844 = x11852;
                int x11854 = x11850->N_NATIONKEY;
                int x11855 = x11854==(x1448);
                if(x11855) {
                  char* x1486 = x11850->N_NAME;
                  int x1487 = x11850->N_REGIONKEY;
                  char* x1488 = x11850->N_COMMENT;
                  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x8722 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
                  memset(x8722, 0, 1 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
                  x8722->N_NATIONKEY = x11854; x8722->N_NAME = x1486; x8722->N_REGIONKEY = x1487; x8722->N_COMMENT = x1488; x8722->key = x11876; x8722->aggs = x1445; x8722->S_SUPPKEY = x562; x8722->S_NAME = x1446; x8722->S_ADDRESS = x1447; x8722->S_NATIONKEY = x1448; x8722->S_PHONE = x1449; x8722->S_ACCTBAL = x1450; x8722->S_COMMENT = x1451;
                  g_tree_insert(x36614, x8722, x8722);
                };
              };
            };
          };
        };
      };
      int x3164 = x36598;
      int x639 = x3164+(1);
      x36598 = x639;
    };
    while(1) {
      
      int x3168 = x36615;
      int x643 = !(x3168);
      /* VAR */ int ite32862 = 0;
      if(x643) {
        int x37200 = g_tree_nnodes(x36614);
        int x37201 = x37200!=(0);
        ite32862 = x37201;
      } else {
        
        ite32862 = 0;
      };
      int x30679 = ite32862;
      if (!(x30679)) break; 
      
      void* x11938 = NULL;
      void** x11946 = &(x11938);
      g_tree_foreach(x36614, x11945, x11946);
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x11948 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*){x11938};
      int x11949 = g_tree_remove(x36614, x11948);
      if(0) {
        x36615 = 1;
      } else {
        
        char* x656 = x11948->S_NAME;
        char* x658 = x11948->S_ADDRESS;
        printf("%s|%s\n", x656, x658);
        int x3186 = x36616;
        int x662 = x3186+(1);
        x36616 = x662;
      };
    };
    int x37226 = x36616;
    printf("(%d rows)\n", x37226);
    struct timeval* x37228 = &x36593;
    gettimeofday(x37228, NULL);
    struct timeval* x37230 = &x36589;
    struct timeval* x37231 = &x36593;
    struct timeval* x37232 = &x36591;
    long x37233 = timeval_subtract(x37230, x37231, x37232);
    printf("Generated code run in %ld milliseconds.\n", x37233);
  };
}
/* ----------- FUNCTIONS ----------- */
int x36516(void* x9381) {
  int x9382 = g_direct_hash(x9381);
  return x9382; 
}

int x36519(void* x9384, void* x9385) {
  int x9386 = g_direct_equal(x9384, x9385);
  return x9386; 
}

int x36526(void* x9391) {
  int x9392 = g_direct_hash(x9391);
  return x9392; 
}

int x36529(void* x9394, void* x9395) {
  int x9396 = g_direct_equal(x9394, x9395);
  return x9396; 
}

int x36536(struct Q20GRPRecord* x11363) {
  int x20038 = x11363->PS_PARTKEY;
  int x20040 = x11363->PS_SUPPKEY;
  int x20042 = x11363->PS_AVAILQTY;
  int x20044 = x20038+(x20040);
  int x20045 = x20044+(x20042);
  return x20045; 
}

int x36543(struct Q20GRPRecord* x11368, struct Q20GRPRecord* x11369) {
  int x20049 = x11368->PS_PARTKEY;
  int x20050 = x11369->PS_PARTKEY;
  int x20051 = x20049==(x20050);
  int x20052 = x11368->PS_SUPPKEY;
  int x20053 = x11369->PS_SUPPKEY;
  int x20054 = x20052==(x20053);
  int x20055 = x11368->PS_AVAILQTY;
  int x20056 = x11369->PS_AVAILQTY;
  int x20057 = x20055==(x20056);
  /* VAR */ int ite32209 = 0;
  if(x20051) {
    ite32209 = x20054;
  } else {
    
    ite32209 = 0;
  };
  int x30068 = ite32209;
  /* VAR */ int ite32216 = 0;
  if(x30068) {
    ite32216 = x20057;
  } else {
    
    ite32216 = 0;
  };
  int x30070 = ite32216;
  return x30070; 
}

int x36568(void* x9402) {
  int x9403 = g_direct_hash(x9402);
  return x9403; 
}

int x36571(void* x9405, void* x9406) {
  int x9407 = g_direct_equal(x9405, x9406);
  return x9407; 
}

int x36578(void* x9412) {
  int x9413 = g_direct_hash(x9412);
  return x9413; 
}

int x36581(void* x9415, void* x9416) {
  int x9417 = g_direct_equal(x9415, x9416);
  return x9417; 
}

int x36607(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x338, struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x339) {
  char* x340 = x338->S_NAME;
  char* x341 = x339->S_NAME;
  int x23821 = strcmp(x340, x341);
  return x23821; 
}

int x11945(void* x11939, void* x11940, void* x11941) {
  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord** x11942 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord**){x11941};
  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x11943 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*){x11940};
  pointer_assign(x11942, x11943);
  return 1; 
}
