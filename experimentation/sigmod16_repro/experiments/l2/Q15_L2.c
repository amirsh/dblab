#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_String;
  struct LINEITEMRecord;
  struct AGGRecord_Int;
  struct SUPPLIERRecord;
  
  struct AGGRecord_String {
  char* key;
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
  
  struct AGGRecord_Int {
  int key;
  double* aggs;
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
  
  


int x19071(void* x6678);

int x19074(void* x6681, void* x6682);

int x19086(int x7769);

int x19088(int x7774, int x7775);
/* GLOBAL VARS */

struct timeval x3929;
int main(int argc, char** argv) {
  FILE* x4342 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x4343 = 0;
  int x4344 = x4343;
  int* x4345 = &x4344;
  int x4346 = fscanf(x4342, "%d", x4345);
  pclose(x4342);
  struct LINEITEMRecord* x5346 = (struct LINEITEMRecord*)malloc(x4344 * sizeof(struct LINEITEMRecord));
  memset(x5346, 0, x4344 * sizeof(struct LINEITEMRecord));
  int x4350 = O_RDONLY;
  int x4351 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x4350);
  struct stat x4352 = (struct stat){0};
  /* VAR */ struct stat x4353 = x4352;
  struct stat x4354 = x4353;
  struct stat* x4355 = &x4354;
  int x4356 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x4355);
  size_t x4357 = x4355->st_size;
  int x4358 = PROT_READ;
  int x4359 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x4357, x4358, x4359, x4351, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x4344);
    /* VAR */ int ite16438 = 0;
    if(x6) {
      char x18431 = *x3;
      int x18432 = x18431!=('\0');
      ite16438 = x18432;
    } else {
      
      ite16438 = 0;
    };
    int x15577 = ite16438;
    if (!(x15577)) break; 
    
    /* VAR */ int x4367 = 0;
    int x4368 = x4367;
    int* x4369 = &x4368;
    char* x4370 = strntoi_unchecked(x3, x4369);
    x3 = x4370;
    /* VAR */ int x4372 = 0;
    int x4373 = x4372;
    int* x4374 = &x4373;
    char* x4375 = strntoi_unchecked(x3, x4374);
    x3 = x4375;
    /* VAR */ int x4377 = 0;
    int x4378 = x4377;
    int* x4379 = &x4378;
    char* x4380 = strntoi_unchecked(x3, x4379);
    x3 = x4380;
    /* VAR */ int x4382 = 0;
    int x4383 = x4382;
    int* x4384 = &x4383;
    char* x4385 = strntoi_unchecked(x3, x4384);
    x3 = x4385;
    /* VAR */ double x4387 = 0.0;
    double x4388 = x4387;
    double* x4389 = &x4388;
    char* x4390 = strntod_unchecked(x3, x4389);
    x3 = x4390;
    /* VAR */ double x4392 = 0.0;
    double x4393 = x4392;
    double* x4394 = &x4393;
    char* x4395 = strntod_unchecked(x3, x4394);
    x3 = x4395;
    /* VAR */ double x4397 = 0.0;
    double x4398 = x4397;
    double* x4399 = &x4398;
    char* x4400 = strntod_unchecked(x3, x4399);
    x3 = x4400;
    /* VAR */ double x4402 = 0.0;
    double x4403 = x4402;
    double* x4404 = &x4403;
    char* x4405 = strntod_unchecked(x3, x4404);
    x3 = x4405;
    char x4407 = *x3;
    /* VAR */ char x4408 = x4407;
    x3 += 1;
    x3 += 1;
    char x4411 = x4408;
    char x4412 = *x3;
    /* VAR */ char x4413 = x4412;
    x3 += 1;
    x3 += 1;
    char x4416 = x4413;
    /* VAR */ int x4417 = 0;
    int x4418 = x4417;
    int* x4419 = &x4418;
    char* x4420 = strntoi_unchecked(x3, x4419);
    x3 = x4420;
    /* VAR */ int x4422 = 0;
    int x4423 = x4422;
    int* x4424 = &x4423;
    char* x4425 = strntoi_unchecked(x3, x4424);
    x3 = x4425;
    /* VAR */ int x4427 = 0;
    int x4428 = x4427;
    int* x4429 = &x4428;
    char* x4430 = strntoi_unchecked(x3, x4429);
    x3 = x4430;
    int x4432 = x4418*(10000);
    int x4433 = x4423*(100);
    int x4434 = x4432+(x4433);
    int x4435 = x4434+(x4428);
    /* VAR */ int x4436 = 0;
    int x4437 = x4436;
    int* x4438 = &x4437;
    char* x4439 = strntoi_unchecked(x3, x4438);
    x3 = x4439;
    /* VAR */ int x4441 = 0;
    int x4442 = x4441;
    int* x4443 = &x4442;
    char* x4444 = strntoi_unchecked(x3, x4443);
    x3 = x4444;
    /* VAR */ int x4446 = 0;
    int x4447 = x4446;
    int* x4448 = &x4447;
    char* x4449 = strntoi_unchecked(x3, x4448);
    x3 = x4449;
    int x4451 = x4437*(10000);
    int x4452 = x4442*(100);
    int x4453 = x4451+(x4452);
    int x4454 = x4453+(x4447);
    /* VAR */ int x4455 = 0;
    int x4456 = x4455;
    int* x4457 = &x4456;
    char* x4458 = strntoi_unchecked(x3, x4457);
    x3 = x4458;
    /* VAR */ int x4460 = 0;
    int x4461 = x4460;
    int* x4462 = &x4461;
    char* x4463 = strntoi_unchecked(x3, x4462);
    x3 = x4463;
    /* VAR */ int x4465 = 0;
    int x4466 = x4465;
    int* x4467 = &x4466;
    char* x4468 = strntoi_unchecked(x3, x4467);
    x3 = x4468;
    int x4470 = x4456*(10000);
    int x4471 = x4461*(100);
    int x4472 = x4470+(x4471);
    int x4473 = x4472+(x4466);
    char* x5472 = (char*)malloc(26 * sizeof(char));
    memset(x5472, 0, 26 * sizeof(char));
    /* VAR */ char* x4475 = x3;
    while(1) {
      
      char x4476 = *x3;
      int x4477 = x4476!=('|');
      /* VAR */ int ite16559 = 0;
      if(x4477) {
        char x18551 = *x3;
        int x18552 = x18551!=('\n');
        ite16559 = x18552;
      } else {
        
        ite16559 = 0;
      };
      int x15691 = ite16559;
      if (!(x15691)) break; 
      
      x3 += 1;
    };
    char* x4483 = x4475;
    int x4484 = x3 - x4483;
    char* x4485 = x4475;
    char* x4486 = strncpy(x5472, x4485, x4484);
    x3 += 1;
    char* x5490 = (char*)malloc(11 * sizeof(char));
    memset(x5490, 0, 11 * sizeof(char));
    /* VAR */ char* x4494 = x3;
    while(1) {
      
      char x4495 = *x3;
      int x4496 = x4495!=('|');
      /* VAR */ int ite16582 = 0;
      if(x4496) {
        char x18573 = *x3;
        int x18574 = x18573!=('\n');
        ite16582 = x18574;
      } else {
        
        ite16582 = 0;
      };
      int x15707 = ite16582;
      if (!(x15707)) break; 
      
      x3 += 1;
    };
    char* x4502 = x4494;
    int x4503 = x3 - x4502;
    char* x4504 = x4494;
    char* x4505 = strncpy(x5490, x4504, x4503);
    x3 += 1;
    char* x5508 = (char*)malloc(45 * sizeof(char));
    memset(x5508, 0, 45 * sizeof(char));
    /* VAR */ char* x4513 = x3;
    while(1) {
      
      char x4514 = *x3;
      int x4515 = x4514!=('|');
      /* VAR */ int ite16605 = 0;
      if(x4515) {
        char x18595 = *x3;
        int x18596 = x18595!=('\n');
        ite16605 = x18596;
      } else {
        
        ite16605 = 0;
      };
      int x15723 = ite16605;
      if (!(x15723)) break; 
      
      x3 += 1;
    };
    char* x4521 = x4513;
    int x4522 = x3 - x4521;
    char* x4523 = x4513;
    char* x4524 = strncpy(x5508, x4523, x4522);
    x3 += 1;
    struct LINEITEMRecord* x6030 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x6030, 0, 1 * sizeof(struct LINEITEMRecord));
    x6030->L_ORDERKEY = x4368; x6030->L_PARTKEY = x4373; x6030->L_SUPPKEY = x4378; x6030->L_LINENUMBER = x4383; x6030->L_QUANTITY = x4388; x6030->L_EXTENDEDPRICE = x4393; x6030->L_DISCOUNT = x4398; x6030->L_TAX = x4403; x6030->L_RETURNFLAG = x4411; x6030->L_LINESTATUS = x4416; x6030->L_SHIPDATE = x4435; x6030->L_COMMITDATE = x4454; x6030->L_RECEIPTDATE = x4473; x6030->L_SHIPINSTRUCT = x5472; x6030->L_SHIPMODE = x5490; x6030->L_COMMENT = x5508;
    int x47 = x4;
    struct LINEITEMRecord x5528 = *x6030;
    *(x5346 + x47) = x5528;
    struct LINEITEMRecord* x5530 = &(x5346[x47]);
    x6030 = x5530;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x4537 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x4538 = 0;
  int x4539 = x4538;
  int* x4540 = &x4539;
  int x4541 = fscanf(x4537, "%d", x4540);
  pclose(x4537);
  struct SUPPLIERRecord* x5541 = (struct SUPPLIERRecord*)malloc(x4539 * sizeof(struct SUPPLIERRecord));
  memset(x5541, 0, x4539 * sizeof(struct SUPPLIERRecord));
  int x4545 = O_RDONLY;
  int x4546 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x4545);
  /* VAR */ struct stat x4547 = x4352;
  struct stat x4548 = x4547;
  struct stat* x4549 = &x4548;
  int x4550 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x4549);
  size_t x4551 = x4549->st_size;
  int x4552 = PROT_READ;
  int x4553 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x4551, x4552, x4553, x4546, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x4539);
    /* VAR */ int ite16655 = 0;
    if(x58) {
      char x18644 = *x55;
      int x18645 = x18644!=('\0');
      ite16655 = x18645;
    } else {
      
      ite16655 = 0;
    };
    int x15766 = ite16655;
    if (!(x15766)) break; 
    
    /* VAR */ int x4561 = 0;
    int x4562 = x4561;
    int* x4563 = &x4562;
    char* x4564 = strntoi_unchecked(x55, x4563);
    x55 = x4564;
    char* x5564 = (char*)malloc(26 * sizeof(char));
    memset(x5564, 0, 26 * sizeof(char));
    /* VAR */ char* x4567 = x55;
    while(1) {
      
      char x4568 = *x55;
      int x4569 = x4568!=('|');
      /* VAR */ int ite16674 = 0;
      if(x4569) {
        char x18662 = *x55;
        int x18663 = x18662!=('\n');
        ite16674 = x18663;
      } else {
        
        ite16674 = 0;
      };
      int x15778 = ite16674;
      if (!(x15778)) break; 
      
      x55 += 1;
    };
    char* x4575 = x4567;
    int x4576 = x55 - x4575;
    char* x4577 = x4567;
    char* x4578 = strncpy(x5564, x4577, x4576);
    x55 += 1;
    char* x5582 = (char*)malloc(41 * sizeof(char));
    memset(x5582, 0, 41 * sizeof(char));
    /* VAR */ char* x4586 = x55;
    while(1) {
      
      char x4587 = *x55;
      int x4588 = x4587!=('|');
      /* VAR */ int ite16697 = 0;
      if(x4588) {
        char x18684 = *x55;
        int x18685 = x18684!=('\n');
        ite16697 = x18685;
      } else {
        
        ite16697 = 0;
      };
      int x15794 = ite16697;
      if (!(x15794)) break; 
      
      x55 += 1;
    };
    char* x4594 = x4586;
    int x4595 = x55 - x4594;
    char* x4596 = x4586;
    char* x4597 = strncpy(x5582, x4596, x4595);
    x55 += 1;
    /* VAR */ int x4604 = 0;
    int x4605 = x4604;
    int* x4606 = &x4605;
    char* x4607 = strntoi_unchecked(x55, x4606);
    x55 = x4607;
    char* x5605 = (char*)malloc(16 * sizeof(char));
    memset(x5605, 0, 16 * sizeof(char));
    /* VAR */ char* x4610 = x55;
    while(1) {
      
      char x4611 = *x55;
      int x4612 = x4611!=('|');
      /* VAR */ int ite16725 = 0;
      if(x4612) {
        char x18711 = *x55;
        int x18712 = x18711!=('\n');
        ite16725 = x18712;
      } else {
        
        ite16725 = 0;
      };
      int x15815 = ite16725;
      if (!(x15815)) break; 
      
      x55 += 1;
    };
    char* x4618 = x4610;
    int x4619 = x55 - x4618;
    char* x4620 = x4610;
    char* x4621 = strncpy(x5605, x4620, x4619);
    x55 += 1;
    /* VAR */ double x4628 = 0.0;
    double x4629 = x4628;
    double* x4630 = &x4629;
    char* x4631 = strntod_unchecked(x55, x4630);
    x55 = x4631;
    char* x5628 = (char*)malloc(102 * sizeof(char));
    memset(x5628, 0, 102 * sizeof(char));
    /* VAR */ char* x4634 = x55;
    while(1) {
      
      char x4635 = *x55;
      int x4636 = x4635!=('|');
      /* VAR */ int ite16753 = 0;
      if(x4636) {
        char x18738 = *x55;
        int x18739 = x18738!=('\n');
        ite16753 = x18739;
      } else {
        
        ite16753 = 0;
      };
      int x15836 = ite16753;
      if (!(x15836)) break; 
      
      x55 += 1;
    };
    char* x4642 = x4634;
    int x4643 = x55 - x4642;
    char* x4644 = x4634;
    char* x4645 = strncpy(x5628, x4644, x4643);
    x55 += 1;
    struct SUPPLIERRecord* x6152 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x6152, 0, 1 * sizeof(struct SUPPLIERRecord));
    x6152->S_SUPPKEY = x4562; x6152->S_NAME = x5564; x6152->S_ADDRESS = x5582; x6152->S_NATIONKEY = x4605; x6152->S_PHONE = x5605; x6152->S_ACCTBAL = x4629; x6152->S_COMMENT = x5628;
    int x97 = x56;
    struct SUPPLIERRecord x5648 = *x6152;
    *(x5541 + x97) = x5648;
    struct SUPPLIERRecord* x5650 = &(x5541[x97]);
    x6152 = x5650;
    int x99 = x56;
    int x100 = x99+(1);
    x56 = x100;
  };
  int x104 = 0;
  for(; x104 < 1 ; x104 += 1) {
    
    void*** x19078 = (void***){x19071};
    int* x19079 = (int*){x19074};
    GHashTable* x19080 = g_hash_table_new(x19078, x19079);
    double* x19081 = (double*)malloc(1 * sizeof(double));
    memset(x19081, 0, 1 * sizeof(double));
    struct AGGRecord_String* x19082 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x19082, 0, 1 * sizeof(struct AGGRecord_String));
    x19082->key = "MAXREVENUE"; x19082->aggs = x19081;
    struct AGGRecord_Int* x19085 = (struct AGGRecord_Int*)malloc(48000000 * sizeof(struct AGGRecord_Int));
    memset(x19085, 0, 48000000 * sizeof(struct AGGRecord_Int));
    GHashTable* x19092 = g_hash_table_new(x19086, x19088);
    /* VAR */ int x19093 = 0;
    double** x19094 = (double**)malloc(80000 * sizeof(double*));
    memset(x19094, 0, 80000 * sizeof(double*));
    /* VAR */ int x19095 = 0;
    while(1) {
      
      int x3770 = x19095;
      int x3771 = x3770<(80000);
      if (!(x3771)) break; 
      
      int x3772 = x19095;
      double* x5670 = (double*)malloc(1 * sizeof(double));
      memset(x5670, 0, 1 * sizeof(double));
      *(x19094 + x3772) = x5670;
      int x3775 = x19095;
      int x3776 = x3775+(1);
      x19095 = x3776;
    };
    /* VAR */ int x19105 = 0;
    struct AGGRecord_Int* x19106 = (struct AGGRecord_Int*)malloc(80000 * sizeof(struct AGGRecord_Int));
    memset(x19106, 0, 80000 * sizeof(struct AGGRecord_Int));
    /* VAR */ int x19107 = 0;
    while(1) {
      
      int x3782 = x19107;
      int x3783 = x3782<(80000);
      if (!(x3783)) break; 
      
      int x3784 = x19107;
      double* x3785 = x19094[x3784];
      struct AGGRecord_Int* x6193 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
      memset(x6193, 0, 1 * sizeof(struct AGGRecord_Int));
      x6193->key = 0; x6193->aggs = x3785;
      struct AGGRecord_Int x5684 = *x6193;
      *(x19106 + x3784) = x5684;
      struct AGGRecord_Int* x5686 = &(x19106[x3784]);
      x6193 = x5686;
      int x3788 = x19107;
      int x3789 = x3788+(1);
      x19107 = x3789;
    };
    /* VAR */ struct timeval x19123 = x3929;
    struct timeval x19124 = x19123;
    /* VAR */ struct timeval x19125 = x3929;
    struct timeval x19126 = x19125;
    /* VAR */ struct timeval x19127 = x3929;
    struct timeval x19128 = x19127;
    struct timeval* x19129 = &x19126;
    gettimeofday(x19129, NULL);
    /* VAR */ int x19131 = 0;
    /* VAR */ int x19132 = 0;
    /* VAR */ struct AGGRecord_String* x19133 = NULL;
    while(1) {
      
      int x19135 = x19131;
      int x19136 = x19135<(x4344);
      if (!(x19136)) break; 
      
      int x1638 = x19131;
      struct LINEITEMRecord* x150 = &(x5346[x1638]);
      int x152 = x150->L_SHIPDATE;
      int x153 = x152>=(19930901);
      /* VAR */ int ite17171 = 0;
      if(x153) {
        int x19143 = x152<(19931201);
        ite17171 = x19143;
      } else {
        
        ite17171 = 0;
      };
      int x16209 = ite17171;
      if(x16209) {
        int x156 = x150->L_SUPPKEY;
        void* x8456 = g_hash_table_lookup(x19092, x156);
        int x7837 = x8456==(NULL);
        /* VAR */ struct AGGRecord_Int* ite16215 = 0;
        if(x7837) {
          int x16216 = x19093;
          double* x16217 = x19094[x16216];
          int x16218 = x19093;
          int x16219 = x16218+(1);
          x19093 = x16219;
          int x16221 = x19105;
          struct AGGRecord_Int* x16222 = &(x19106[x16221]);
          x16222->key = x156;
          x16222->aggs = x16217;
          int x16225 = x19105;
          int x16226 = x16225+(1);
          x19105 = x16226;
          g_hash_table_insert(x19092, x156, x16222);
          ite16215 = x16222;
        } else {
          
          ite16215 = x8456;
        };
        struct AGGRecord_Int* x7863 = ite16215;
        double* x161 = x7863->aggs;
        double x175 = x161[0];
        double x176 = x150->L_EXTENDEDPRICE;
        double x177 = x150->L_DISCOUNT;
        double x178 = 1.0-(x177);
        double x179 = x176*(x178);
        double x180 = x175+(x179);
        *x161 = x180;
      };
      int x1675 = x19131;
      int x188 = x1675+(1);
      x19131 = x188;
    };
    GList* x19193 = g_hash_table_get_keys(x19092);
    /* VAR */ GList* x19194 = x19193;
    int x19195 = g_hash_table_size(x19092);
    int x14512 = 0;
    for(; x14512 < x19195 ; x14512 += 1) {
      
      GList* x14513 = x19194;
      void* x14514 = g_list_nth_data(x14513, 0);
      GList* x14515 = g_list_next(x14513);
      x19194 = x14515;
      void* x14517 = g_hash_table_lookup(x19092, x14514);
      struct AGGRecord_Int* x14519 = (struct AGGRecord_Int*){x14517};
      int x14520 = x19132;
      struct AGGRecord_Int x14521 = *x14519;
      *(x19085 + x14520) = x14521;
      struct AGGRecord_Int* x14523 = &(x19085[x14520]);
      x14519 = x14523;
      int x14525 = x19132;
      int x14526 = x14525+(1);
      x19132 = x14526;
    };
    /* VAR */ int x19229 = 0;
    while(1) {
      
      int x19231 = x19229;
      int x19232 = x19132;
      int x19233 = x19231<(x19232);
      if (!(x19233)) break; 
      
      int x211 = x19229;
      struct AGGRecord_Int* x212 = &(x19085[x211]);
      int x213 = x19229;
      int x214 = x213+(1);
      x19229 = x214;
      double* x221 = x19082->aggs;
      double x235 = x221[0];
      double* x237 = x212->aggs;
      double x238 = x237[0];
      int x239 = x235<(x238);
      /* VAR */ double ite16305 = 0;
      if(x239) {
        double x16306 = x237[0];
        ite16305 = x16306;
      } else {
        
        ite16305 = x235;
      };
      double x241 = ite16305;
      *x221 = x241;
    };
    x19133 = x19082;
    struct AGGRecord_String* x19253 = x19133;
    /* VAR */ int x19254 = 0;
    /* VAR */ int x19255 = 0;
    /* VAR */ int x19256 = 0;
    while(1) {
      
      int x19258 = x19254;
      int x19259 = x19258<(x4539);
      if (!(x19259)) break; 
      
      int x1787 = x19254;
      struct SUPPLIERRecord* x295 = &(x5541[x1787]);
      int x297 = x295->S_SUPPKEY;
      void* x6817 = (void*){x297};
      void* x6818 = (void*){x295};
      void* x6819 = g_hash_table_lookup(x19080, x6817);
      GList** x6820 = (GList**){x6819};
      GList** x6821 = NULL;
      int x6822 = x6820==(x6821);
      /* VAR */ GList** ite16329 = 0;
      if(x6822) {
        GList** x16330 = malloc(8);
        GList* x16331 = NULL;
        pointer_assign(x16330, x16331);
        ite16329 = x16330;
      } else {
        
        ite16329 = x6820;
      };
      GList** x6826 = ite16329;
      GList* x6827 = *(x6826);
      GList* x6828 = g_list_prepend(x6827, x6818);
      pointer_assign(x6826, x6828);
      void* x6830 = (void*){x6826};
      g_hash_table_insert(x19080, x6817, x6830);
      int x1792 = x19254;
      int x301 = x1792+(1);
      x19254 = x301;
    };
    /* VAR */ int x19286 = 0;
    while(1) {
      
      int x19288 = x19286;
      int x19289 = x19132;
      int x19290 = x19288<(x19289);
      if (!(x19290)) break; 
      
      int x372 = x19286;
      struct AGGRecord_Int* x373 = &(x19085[x372]);
      int x374 = x19286;
      int x375 = x374+(1);
      x19286 = x375;
      int x378 = x373->key;
      void* x6848 = (void*){x378};
      void* x6849 = g_hash_table_lookup(x19080, x6848);
      GList** x6850 = (GList**){x6849};
      int x11005 = x6850!=(NULL);
      if(x11005) {
        GList* x8009 = *(x6850);
        /* VAR */ GList* x8010 = x8009;
        while(1) {
          
          GList* x8011 = x8010;
          GList* x8012 = NULL;
          int x8013 = x8011!=(x8012);
          if (!(x8013)) break; 
          
          GList* x8014 = x8010;
          void* x8015 = g_list_nth_data(x8014, 0);
          struct SUPPLIERRecord* x8016 = (struct SUPPLIERRecord*){x8015};
          GList* x8017 = x8010;
          GList* x8018 = g_list_next(x8017);
          x8010 = x8018;
          int x8020 = x8016->S_SUPPKEY;
          int x8021 = x8020==(x378);
          /* VAR */ int ite17379 = 0;
          if(x8021) {
            double* x19345 = x373->aggs;
            double x19346 = x19345[0];
            double* x19347 = x19253->aggs;
            double x19348 = x19347[0];
            int x19349 = x19346==(x19348);
            ite17379 = x19349;
          } else {
            
            ite17379 = 0;
          };
          int x16393 = ite17379;
          if(x16393) {
            char* x931 = x8016->S_NAME;
            char* x932 = x8016->S_ADDRESS;
            char* x934 = x8016->S_PHONE;
            double* x937 = x373->aggs;
            if(0) {
              x19255 = 1;
            } else {
              
              double x440 = x937[0];
              printf("%d|%s|%s|%s|%.4f\n", x8020, x931, x932, x934, x440);
              int x1937 = x19256;
              int x443 = x1937+(1);
              x19256 = x443;
            };
          };
        };
      };
    };
    int x19366 = x19256;
    printf("(%d rows)\n", x19366);
    struct timeval* x19368 = &x19128;
    gettimeofday(x19368, NULL);
    struct timeval* x19370 = &x19124;
    struct timeval* x19371 = &x19128;
    struct timeval* x19372 = &x19126;
    long x19373 = timeval_subtract(x19370, x19371, x19372);
    printf("Generated code run in %ld milliseconds.\n", x19373);
  };
}
/* ----------- FUNCTIONS ----------- */
int x19071(void* x6678) {
  int x6679 = g_direct_hash(x6678);
  return x6679; 
}

int x19074(void* x6681, void* x6682) {
  int x6683 = g_direct_equal(x6681, x6682);
  return x6683; 
}

int x19086(int x7769) {
  return x7769; 
}

int x19088(int x7774, int x7775) {
  int x7776 = x7774==(x7775);
  return x7776; 
}
