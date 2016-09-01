#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct ORDERSRecord;
  struct AGGRecord_Int;
  struct Q13IntRecord;
  struct CUSTOMERRecord;
  
  struct ORDERSRecord {
  int O_CUSTKEY;
  char* O_COMMENT;
  };
  
  struct AGGRecord_Int {
  int key;
  double* aggs;
  };
  
  struct Q13IntRecord {
  int count;
  };
  
  struct CUSTOMERRecord {
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
  };
  
  


int x17048(struct AGGRecord_Int* x174, struct AGGRecord_Int* x175);

int x8954(void* x8948, void* x8949, void* x8950);
/* GLOBAL VARS */

struct timeval x5884;
int main(int argc, char** argv) {
  FILE* x6262 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x6263 = 0;
  int x6264 = x6263;
  int* x6265 = &x6264;
  int x6266 = fscanf(x6262, "%d", x6265);
  pclose(x6262);
  struct CUSTOMERRecord* x7148 = (struct CUSTOMERRecord*)malloc(x6264 * sizeof(struct CUSTOMERRecord));
  memset(x7148, 0, x6264 * sizeof(struct CUSTOMERRecord));
  int x6270 = O_RDONLY;
  int x6271 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x6270);
  struct stat x6272 = (struct stat){0};
  /* VAR */ struct stat x6273 = x6272;
  struct stat x6274 = x6273;
  struct stat* x6275 = &x6274;
  int x6276 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x6275);
  int x6278 = PROT_READ;
  int x6279 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x6275->st_size), x6278, x6279, x6271, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite14430 = 0;
    if((x5<(x6264))) {
      char x16317 = *x3;
      ite14430 = (x16317!=('\0'));
    } else {
      
      ite14430 = 0;
    };
    int x13633 = ite14430;
    if (!(x13633)) break; 
    
    /* VAR */ int x6287 = 0;
    int x6288 = x6287;
    int* x6289 = &x6288;
    char* x6290 = strntoi_unchecked(x3, x6289);
    x3 = x6290;
    char* x7172 = (char*)malloc(26 * sizeof(char));
    memset(x7172, 0, 26 * sizeof(char));
    /* VAR */ char* x6293 = x3;
    while(1) {
      
      char x6294 = *x3;
      /* VAR */ int ite14449 = 0;
      if((x6294!=('|'))) {
        char x16335 = *x3;
        ite14449 = (x16335!=('\n'));
      } else {
        
        ite14449 = 0;
      };
      int x13645 = ite14449;
      if (!(x13645)) break; 
      
      x3 += 1;
    };
    char* x6301 = x6293;
    int x6302 = x3 - x6301;
    char* x6303 = x6293;
    char* x6304 = strncpy(x7172, x6303, x6302);
    x3 += 1;
    char* x7190 = (char*)malloc(41 * sizeof(char));
    memset(x7190, 0, 41 * sizeof(char));
    /* VAR */ char* x6312 = x3;
    while(1) {
      
      char x6313 = *x3;
      /* VAR */ int ite14472 = 0;
      if((x6313!=('|'))) {
        char x16357 = *x3;
        ite14472 = (x16357!=('\n'));
      } else {
        
        ite14472 = 0;
      };
      int x13661 = ite14472;
      if (!(x13661)) break; 
      
      x3 += 1;
    };
    char* x6320 = x6312;
    int x6321 = x3 - x6320;
    char* x6322 = x6312;
    char* x6323 = strncpy(x7190, x6322, x6321);
    x3 += 1;
    /* VAR */ int x6330 = 0;
    int x6331 = x6330;
    int* x6332 = &x6331;
    char* x6333 = strntoi_unchecked(x3, x6332);
    x3 = x6333;
    char* x7213 = (char*)malloc(16 * sizeof(char));
    memset(x7213, 0, 16 * sizeof(char));
    /* VAR */ char* x6336 = x3;
    while(1) {
      
      char x6337 = *x3;
      /* VAR */ int ite14500 = 0;
      if((x6337!=('|'))) {
        char x16384 = *x3;
        ite14500 = (x16384!=('\n'));
      } else {
        
        ite14500 = 0;
      };
      int x13682 = ite14500;
      if (!(x13682)) break; 
      
      x3 += 1;
    };
    char* x6344 = x6336;
    int x6345 = x3 - x6344;
    char* x6346 = x6336;
    char* x6347 = strncpy(x7213, x6346, x6345);
    x3 += 1;
    /* VAR */ double x6354 = 0.0;
    double x6355 = x6354;
    double* x6356 = &x6355;
    char* x6357 = strntod_unchecked(x3, x6356);
    x3 = x6357;
    char* x7236 = (char*)malloc(11 * sizeof(char));
    memset(x7236, 0, 11 * sizeof(char));
    /* VAR */ char* x6360 = x3;
    while(1) {
      
      char x6361 = *x3;
      /* VAR */ int ite14528 = 0;
      if((x6361!=('|'))) {
        char x16411 = *x3;
        ite14528 = (x16411!=('\n'));
      } else {
        
        ite14528 = 0;
      };
      int x13703 = ite14528;
      if (!(x13703)) break; 
      
      x3 += 1;
    };
    char* x6368 = x6360;
    int x6369 = x3 - x6368;
    char* x6370 = x6360;
    char* x6371 = strncpy(x7236, x6370, x6369);
    x3 += 1;
    char* x7254 = (char*)malloc(118 * sizeof(char));
    memset(x7254, 0, 118 * sizeof(char));
    /* VAR */ char* x6379 = x3;
    while(1) {
      
      char x6380 = *x3;
      /* VAR */ int ite14551 = 0;
      if((x6380!=('|'))) {
        char x16433 = *x3;
        ite14551 = (x16433!=('\n'));
      } else {
        
        ite14551 = 0;
      };
      int x13719 = ite14551;
      if (!(x13719)) break; 
      
      x3 += 1;
    };
    char* x6387 = x6379;
    int x6388 = x3 - x6387;
    char* x6389 = x6379;
    char* x6390 = strncpy(x7254, x6389, x6388);
    x3 += 1;
    struct CUSTOMERRecord* x7719 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x7719, 0, 1 * sizeof(struct CUSTOMERRecord));
    x7719->C_CUSTKEY = x6288; x7719->C_NAME = x7172; x7719->C_ADDRESS = x7190; x7719->C_NATIONKEY = x6331; x7719->C_PHONE = x7213; x7719->C_ACCTBAL = x6355; x7719->C_MKTSEGMENT = x7236; x7719->C_COMMENT = x7254;
    int x53 = x4;
    struct CUSTOMERRecord x7274 = *x7719;
    *(x7148 + x53) = x7274;
    struct CUSTOMERRecord* x7276 = &(x7148[x53]);
    x7719 = x7276;
    int x55 = x4;
    x4 = (x55+(1));
  };
  FILE* x6403 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x6404 = 0;
  int x6405 = x6404;
  int* x6406 = &x6405;
  int x6407 = fscanf(x6403, "%d", x6406);
  pclose(x6403);
  struct ORDERSRecord* x7287 = (struct ORDERSRecord*)malloc(x6405 * sizeof(struct ORDERSRecord));
  memset(x7287, 0, x6405 * sizeof(struct ORDERSRecord));
  int x6411 = O_RDONLY;
  int x6412 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x6411);
  /* VAR */ struct stat x6413 = x6272;
  struct stat x6414 = x6413;
  struct stat* x6415 = &x6414;
  int x6416 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x6415);
  int x6418 = PROT_READ;
  int x6419 = MAP_PRIVATE;
  char* x61 = mmap(NULL, (x6415->st_size), x6418, x6419, x6412, 0);
  /* VAR */ int x62 = 0;
  while(1) {
    
    int x63 = x62;
    /* VAR */ int ite14601 = 0;
    if((x63<(x6405))) {
      char x16482 = *x61;
      ite14601 = (x16482!=('\0'));
    } else {
      
      ite14601 = 0;
    };
    int x13762 = ite14601;
    if (!(x13762)) break; 
    
    /* VAR */ int x6427 = 0;
    int x6428 = x6427;
    int* x6429 = &x6428;
    char* x6430 = strntoi_unchecked(x61, x6429);
    x61 = x6430;
    /* VAR */ int x6432 = 0;
    int x6433 = x6432;
    int* x6434 = &x6433;
    char* x6435 = strntoi_unchecked(x61, x6434);
    x61 = x6435;
    char x6437 = *x61;
    /* VAR */ char x6438 = x6437;
    x61 += 1;
    x61 += 1;
    /* VAR */ double x6442 = 0.0;
    double x6443 = x6442;
    double* x6444 = &x6443;
    char* x6445 = strntod_unchecked(x61, x6444);
    x61 = x6445;
    /* VAR */ int x6447 = 0;
    int x6448 = x6447;
    int* x6449 = &x6448;
    char* x6450 = strntoi_unchecked(x61, x6449);
    x61 = x6450;
    /* VAR */ int x6452 = 0;
    int x6453 = x6452;
    int* x6454 = &x6453;
    char* x6455 = strntoi_unchecked(x61, x6454);
    x61 = x6455;
    /* VAR */ int x6457 = 0;
    int x6458 = x6457;
    int* x6459 = &x6458;
    char* x6460 = strntoi_unchecked(x61, x6459);
    x61 = x6460;
    char* x7344 = (char*)malloc(16 * sizeof(char));
    memset(x7344, 0, 16 * sizeof(char));
    /* VAR */ char* x6467 = x61;
    while(1) {
      
      char x6468 = *x61;
      /* VAR */ int ite14654 = 0;
      if((x6468!=('|'))) {
        char x16534 = *x61;
        ite14654 = (x16534!=('\n'));
      } else {
        
        ite14654 = 0;
      };
      int x13808 = ite14654;
      if (!(x13808)) break; 
      
      x61 += 1;
    };
    char* x6475 = x6467;
    int x6476 = x61 - x6475;
    char* x6477 = x6467;
    char* x6478 = strncpy(x7344, x6477, x6476);
    x61 += 1;
    char* x7362 = (char*)malloc(16 * sizeof(char));
    memset(x7362, 0, 16 * sizeof(char));
    /* VAR */ char* x6486 = x61;
    while(1) {
      
      char x6487 = *x61;
      /* VAR */ int ite14677 = 0;
      if((x6487!=('|'))) {
        char x16556 = *x61;
        ite14677 = (x16556!=('\n'));
      } else {
        
        ite14677 = 0;
      };
      int x13824 = ite14677;
      if (!(x13824)) break; 
      
      x61 += 1;
    };
    char* x6494 = x6486;
    int x6495 = x61 - x6494;
    char* x6496 = x6486;
    char* x6497 = strncpy(x7362, x6496, x6495);
    x61 += 1;
    /* VAR */ int x6504 = 0;
    int x6505 = x6504;
    int* x6506 = &x6505;
    char* x6507 = strntoi_unchecked(x61, x6506);
    x61 = x6507;
    char* x7385 = (char*)malloc(80 * sizeof(char));
    memset(x7385, 0, 80 * sizeof(char));
    /* VAR */ char* x6510 = x61;
    while(1) {
      
      char x6511 = *x61;
      /* VAR */ int ite14705 = 0;
      if((x6511!=('|'))) {
        char x16583 = *x61;
        ite14705 = (x16583!=('\n'));
      } else {
        
        ite14705 = 0;
      };
      int x13845 = ite14705;
      if (!(x13845)) break; 
      
      x61 += 1;
    };
    char* x6518 = x6510;
    int x6519 = x61 - x6518;
    char* x6520 = x6510;
    char* x6521 = strncpy(x7385, x6520, x6519);
    x61 += 1;
    struct ORDERSRecord* x7852 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x7852, 0, 1 * sizeof(struct ORDERSRecord));
    x7852->O_CUSTKEY = x6433; x7852->O_COMMENT = x7385;
    int x97 = x62;
    struct ORDERSRecord x7405 = *x7852;
    *(x7287 + x97) = x7405;
    struct ORDERSRecord* x7407 = &(x7287[x97]);
    x7852 = x7407;
    int x99 = x62;
    x62 = (x99+(1));
  };
  struct Q13IntRecord* x7412 = (struct Q13IntRecord*)malloc(x6264 * sizeof(struct Q13IntRecord));
  memset(x7412, 0, x6264 * sizeof(struct Q13IntRecord));
  int x105 = 0;
  for(; x105 < x6264 ; x105 += 1) {
    
    struct Q13IntRecord* x16620 = (struct Q13IntRecord*)malloc(1 * sizeof(struct Q13IntRecord));
    memset(x16620, 0, 1 * sizeof(struct Q13IntRecord));
    x16620->count = 0;
    struct Q13IntRecord x16623 = *x16620;
    *(x7412 + x105) = x16623;
    struct Q13IntRecord* x16625 = &(x7412[x105]);
    x16620 = x16625;
  };
  int x111 = 0;
  for(; x111 < 1 ; x111 += 1) {
    
    /* VAR */ int x16920 = 0;
    void* x16921 = (void*)malloc(2097152 * sizeof(void));
    memset(x16921, 0, 2097152 * sizeof(void));
    struct AGGRecord_Int* x16922 = (struct AGGRecord_Int*)malloc(2097152 * sizeof(struct AGGRecord_Int));
    memset(x16922, 0, 2097152 * sizeof(struct AGGRecord_Int));
    /* VAR */ int x16923 = 0;
    double** x16924 = (double**)malloc(48000000 * sizeof(double*));
    memset(x16924, 0, 48000000 * sizeof(double*));
    /* VAR */ int x16925 = 0;
    while(1) {
      
      int x5745 = x16925;
      if (!((x5745<(48000000)))) break; 
      
      int x5747 = x16925;
      double* x7435 = (double*)malloc(1 * sizeof(double));
      memset(x7435, 0, 1 * sizeof(double));
      *(x16924 + x5747) = x7435;
      int x5750 = x16925;
      x16925 = (x5750+(1));
    };
    /* VAR */ int x16935 = 0;
    struct AGGRecord_Int* x16936 = (struct AGGRecord_Int*)malloc(48000000 * sizeof(struct AGGRecord_Int));
    memset(x16936, 0, 48000000 * sizeof(struct AGGRecord_Int));
    /* VAR */ int x16937 = 0;
    while(1) {
      
      int x5757 = x16937;
      if (!((x5757<(48000000)))) break; 
      
      int x5759 = x16937;
      double* x5760 = x16924[x5759];
      struct AGGRecord_Int* x7901 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
      memset(x7901, 0, 1 * sizeof(struct AGGRecord_Int));
      x7901->key = 0; x7901->aggs = x5760;
      struct AGGRecord_Int x7449 = *x7901;
      *(x16936 + x5759) = x7449;
      struct AGGRecord_Int* x7451 = &(x16936[x5759]);
      x7901 = x7451;
      int x5763 = x16937;
      x16937 = (x5763+(1));
    };
    /* VAR */ struct timeval x16953 = x5884;
    struct timeval x16954 = x16953;
    /* VAR */ struct timeval x16955 = x5884;
    struct timeval x16956 = x16955;
    /* VAR */ struct timeval x16957 = x5884;
    struct timeval x16958 = x16957;
    struct timeval* x16959 = &x16956;
    gettimeofday(x16959, NULL);
    /* VAR */ int x16961 = 0;
    while(1) {
      
      int x16963 = x16961;
      if (!((x16963<(x6405)))) break; 
      
      int x1019 = x16961;
      struct ORDERSRecord* x140 = &(x7287[x1019]);
      char* x142 = x140->O_COMMENT;
      char* x11741 = pointer_add(x142, 0);
      char* x11742 = strstr(x11741, "unusual");
      char* x11743 = NULL;
      /* VAR */ int ite14200 = 0;
      if((x11742==(x11743))) {
        ite14200 = -1;
      } else {
        
        int x14202 = str_subtract(x11742, x142);
        ite14200 = x14202;
      };
      int x11746 = ite14200;
      char* x11747 = pointer_add(x142, x11746);
      char* x11748 = strstr(x11747, "packages");
      char* x11749 = NULL;
      /* VAR */ int ite14211 = 0;
      if((x11748==(x11749))) {
        ite14211 = -1;
      } else {
        
        int x14213 = str_subtract(x11748, x142);
        ite14211 = x14213;
      };
      int x11752 = ite14211;
      /* VAR */ int ite15126 = 0;
      if((x11746!=(-1))) {
        ite15126 = (x11752!=(-1));
      } else {
        
        ite15126 = 0;
      };
      int x14219 = ite15126;
      int x148 = !(x14219);
      if(x148) {
        struct Q13IntRecord* x153 = &(x7412[(x140->O_CUSTKEY)]);
        int x154 = x153->count;
        x153->count = (x154+(1));
      };
      int x1039 = x16961;
      x16961 = (x1039+(1));
    };
    /* VAR */ int x17008 = 0;
    int* x17087 = &(x17048);
    GTree* x17088 = g_tree_new(x17087);
    /* VAR */ int x17089 = 0;
    /* VAR */ int x17090 = 0;
    while(1) {
      
      int x17092 = x17008;
      if (!((x17092<(x6264)))) break; 
      
      int x1101 = x17008;
      struct Q13IntRecord* x207 = &(x7412[x1101]);
      int x209 = x207->count;
      struct AGGRecord_Int* x2959 = &(x16922[x209]);
      int x2960 = x16920;
      if((x209>(x2960))) {
        x16920 = x209;
      };
      /* VAR */ int ite15240 = 0;
      if((x2959!=(NULL))) {
        ite15240 = ((x2959->aggs)!=(NULL));
      } else {
        
        ite15240 = 0;
      };
      int x14325 = ite15240;
      /* VAR */ struct AGGRecord_Int* ite14327 = 0;
      if(x14325) {
        ite14327 = x2959;
      } else {
        
        int x14329 = x16923;
        double* x14330 = x16924[x14329];
        int x14331 = x16923;
        x16923 = (x14331+(1));
        int x14334 = x16935;
        struct AGGRecord_Int* x14335 = &(x16936[x14334]);
        x14335->key = x209;
        x14335->aggs = x14330;
        int x14338 = x16935;
        x16935 = (x14338+(1));
        struct AGGRecord_Int x14341 = *x14335;
        *(x16922 + x209) = x14341;
        struct AGGRecord_Int* x14343 = &(x16922[x209]);
        x14335 = x14343;
        ite14327 = x14335;
      };
      struct AGGRecord_Int* x2967 = ite14327;
      double* x214 = x2967->aggs;
      double x228 = x214[0];
      *x214 = (x228+(1.0));
      int x1130 = x17008;
      x17008 = (x1130+(1));
    };
    int x17140 = x16920;
    int x12842 = 0;
    for(; x12842 < (x17140+(1)) ; x12842 += 1) {
      
      struct AGGRecord_Int* x12843 = &(x16922[x12842]);
      /* VAR */ int ite15298 = 0;
      if((x12843!=(NULL))) {
        ite15298 = ((x12843->aggs)!=(NULL));
      } else {
        
        ite15298 = 0;
      };
      int x14369 = ite15298;
      if(x14369) {
        g_tree_insert(x17088, x12843, x12843);
      };
    };
    while(1) {
      
      int x1139 = x17089;
      int x248 = !(x1139);
      /* VAR */ int ite15312 = 0;
      if(x248) {
        int x17174 = g_tree_nnodes(x17088);
        ite15312 = (x17174!=(0));
      } else {
        
        ite15312 = 0;
      };
      int x14376 = ite15312;
      if (!(x14376)) break; 
      
      void* x8947 = NULL;
      void** x8955 = &(x8947);
      g_tree_foreach(x17088, x8954, x8955);
      struct AGGRecord_Int* x8957 = (struct AGGRecord_Int*){x8947};
      int x8958 = g_tree_remove(x17088, x8957);
      if(0) {
        x17089 = 1;
      } else {
        
        double x263 = ((double*) { x8957->aggs })[0];
        printf("%d|%.0f\n", (x8957->key), x263);
        int x1156 = x17090;
        x17090 = (x1156+(1));
      };
    };
    int x17201 = x17090;
    printf("(%d rows)\n", x17201);
    struct timeval* x17203 = &x16958;
    gettimeofday(x17203, NULL);
    struct timeval* x17205 = &x16954;
    struct timeval* x17206 = &x16958;
    struct timeval* x17207 = &x16956;
    long x17208 = timeval_subtract(x17205, x17206, x17207);
    printf("Generated code run in %ld milliseconds.\n", x17208);
  };
}
/* ----------- FUNCTIONS ----------- */
int x17048(struct AGGRecord_Int* x174, struct AGGRecord_Int* x175) {
  double* x176 = x174->aggs;
  double x177 = x176[0];
  double* x178 = x175->aggs;
  double x179 = x178[0];
  /* VAR */ int ite14279 = 0;
  if((x177<(x179))) {
    ite14279 = 1;
  } else {
    
    double x14281 = x176[0];
    double x14282 = x178[0];
    /* VAR */ int ite14285 = 0;
    if((x14281>(x14282))) {
      ite14285 = -1;
    } else {
      
      int x14287 = x174->key;
      int x14288 = x175->key;
      /* VAR */ int ite14291 = 0;
      if((x14287<(x14288))) {
        ite14291 = 1;
      } else {
        
        /* VAR */ int ite14295 = 0;
        if((x14287>(x14288))) {
          ite14295 = -1;
        } else {
          
          ite14295 = 0;
        };
        int x14294 = ite14295;
        ite14291 = x14294;
      };
      int x14290 = ite14291;
      ite14285 = x14290;
    };
    int x14284 = ite14285;
    ite14279 = x14284;
  };
  int x191 = ite14279;
  return x191; 
}

int x8954(void* x8948, void* x8949, void* x8950) {
  pointer_assign(((struct AGGRecord_Int**){x8950}), ((struct AGGRecord_Int*){x8949}));
  return 1; 
}
