#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct AGGRecord_OptimalString;
  struct ORDERSRecord;
  
  struct LINEITEMRecord {
  int L_ORDERKEY;
  int L_SHIPDATE;
  int L_COMMITDATE;
  int L_RECEIPTDATE;
  char* L_SHIPMODE;
  };
  
  struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  char* O_ORDERPRIORITY;
  };
  
  


int x24544(char* x8378);

int x24562(char* x8383, char* x8384);

int x24688(struct AGGRecord_OptimalString* x170, struct AGGRecord_OptimalString* x171);

int x8614(void* x8608, void* x8609, void* x8610);
/* GLOBAL VARS */

struct timeval x4970;
int main(int argc, char** argv) {
  FILE* x5376 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x5377 = 0;
  int x5378 = x5377;
  int* x5379 = &x5378;
  int x5380 = fscanf(x5376, "%d", x5379);
  pclose(x5376);
  struct LINEITEMRecord* x6434 = (struct LINEITEMRecord*)malloc(x5378 * sizeof(struct LINEITEMRecord));
  memset(x6434, 0, x5378 * sizeof(struct LINEITEMRecord));
  int x5384 = O_RDONLY;
  int x5385 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x5384);
  struct stat x5386 = (struct stat){0};
  /* VAR */ struct stat x5387 = x5386;
  struct stat x5388 = x5387;
  struct stat* x5389 = &x5388;
  int x5390 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x5389);
  int x5392 = PROT_READ;
  int x5393 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x5389->st_size), x5392, x5393, x5385, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite17569 = 0;
    if((x5<(x5378))) {
      char x23442 = *x3;
      ite17569 = (x23442!=('\0'));
    } else {
      
      ite17569 = 0;
    };
    int x16191 = ite17569;
    if (!(x16191)) break; 
    
    /* VAR */ int x5401 = 0;
    int x5402 = x5401;
    int* x5403 = &x5402;
    char* x5404 = strntoi_unchecked(x3, x5403);
    x3 = x5404;
    /* VAR */ int x5406 = 0;
    int x5407 = x5406;
    int* x5408 = &x5407;
    char* x5409 = strntoi_unchecked(x3, x5408);
    x3 = x5409;
    /* VAR */ int x5411 = 0;
    int x5412 = x5411;
    int* x5413 = &x5412;
    char* x5414 = strntoi_unchecked(x3, x5413);
    x3 = x5414;
    /* VAR */ int x5416 = 0;
    int x5417 = x5416;
    int* x5418 = &x5417;
    char* x5419 = strntoi_unchecked(x3, x5418);
    x3 = x5419;
    /* VAR */ double x5421 = 0.0;
    double x5422 = x5421;
    double* x5423 = &x5422;
    char* x5424 = strntod_unchecked(x3, x5423);
    x3 = x5424;
    /* VAR */ double x5426 = 0.0;
    double x5427 = x5426;
    double* x5428 = &x5427;
    char* x5429 = strntod_unchecked(x3, x5428);
    x3 = x5429;
    /* VAR */ double x5431 = 0.0;
    double x5432 = x5431;
    double* x5433 = &x5432;
    char* x5434 = strntod_unchecked(x3, x5433);
    x3 = x5434;
    /* VAR */ double x5436 = 0.0;
    double x5437 = x5436;
    double* x5438 = &x5437;
    char* x5439 = strntod_unchecked(x3, x5438);
    x3 = x5439;
    char x5441 = *x3;
    /* VAR */ char x5442 = x5441;
    x3 += 1;
    x3 += 1;
    char x5446 = *x3;
    /* VAR */ char x5447 = x5446;
    x3 += 1;
    x3 += 1;
    /* VAR */ int x5451 = 0;
    int x5452 = x5451;
    int* x5453 = &x5452;
    char* x5454 = strntoi_unchecked(x3, x5453);
    x3 = x5454;
    /* VAR */ int x5456 = 0;
    int x5457 = x5456;
    int* x5458 = &x5457;
    char* x5459 = strntoi_unchecked(x3, x5458);
    x3 = x5459;
    /* VAR */ int x5461 = 0;
    int x5462 = x5461;
    int* x5463 = &x5462;
    char* x5464 = strntoi_unchecked(x3, x5463);
    x3 = x5464;
    /* VAR */ int x5470 = 0;
    int x5471 = x5470;
    int* x5472 = &x5471;
    char* x5473 = strntoi_unchecked(x3, x5472);
    x3 = x5473;
    /* VAR */ int x5475 = 0;
    int x5476 = x5475;
    int* x5477 = &x5476;
    char* x5478 = strntoi_unchecked(x3, x5477);
    x3 = x5478;
    /* VAR */ int x5480 = 0;
    int x5481 = x5480;
    int* x5482 = &x5481;
    char* x5483 = strntoi_unchecked(x3, x5482);
    x3 = x5483;
    /* VAR */ int x5489 = 0;
    int x5490 = x5489;
    int* x5491 = &x5490;
    char* x5492 = strntoi_unchecked(x3, x5491);
    x3 = x5492;
    /* VAR */ int x5494 = 0;
    int x5495 = x5494;
    int* x5496 = &x5495;
    char* x5497 = strntoi_unchecked(x3, x5496);
    x3 = x5497;
    /* VAR */ int x5499 = 0;
    int x5500 = x5499;
    int* x5501 = &x5500;
    char* x5502 = strntoi_unchecked(x3, x5501);
    x3 = x5502;
    char* x6560 = (char*)malloc(26 * sizeof(char));
    memset(x6560, 0, 26 * sizeof(char));
    /* VAR */ char* x5509 = x3;
    while(1) {
      
      char x5510 = *x3;
      /* VAR */ int ite17690 = 0;
      if((x5510!=('|'))) {
        char x23562 = *x3;
        ite17690 = (x23562!=('\n'));
      } else {
        
        ite17690 = 0;
      };
      int x16305 = ite17690;
      if (!(x16305)) break; 
      
      x3 += 1;
    };
    char* x5517 = x5509;
    int x5518 = x3 - x5517;
    char* x5519 = x5509;
    char* x5520 = strncpy(x6560, x5519, x5518);
    x3 += 1;
    char* x6578 = (char*)malloc(11 * sizeof(char));
    memset(x6578, 0, 11 * sizeof(char));
    /* VAR */ char* x5528 = x3;
    while(1) {
      
      char x5529 = *x3;
      /* VAR */ int ite17713 = 0;
      if((x5529!=('|'))) {
        char x23584 = *x3;
        ite17713 = (x23584!=('\n'));
      } else {
        
        ite17713 = 0;
      };
      int x16321 = ite17713;
      if (!(x16321)) break; 
      
      x3 += 1;
    };
    char* x5536 = x5528;
    int x5537 = x3 - x5536;
    char* x5538 = x5528;
    char* x5539 = strncpy(x6578, x5538, x5537);
    x3 += 1;
    char* x6596 = (char*)malloc(45 * sizeof(char));
    memset(x6596, 0, 45 * sizeof(char));
    /* VAR */ char* x5547 = x3;
    while(1) {
      
      char x5548 = *x3;
      /* VAR */ int ite17736 = 0;
      if((x5548!=('|'))) {
        char x23606 = *x3;
        ite17736 = (x23606!=('\n'));
      } else {
        
        ite17736 = 0;
      };
      int x16337 = ite17736;
      if (!(x16337)) break; 
      
      x3 += 1;
    };
    char* x5555 = x5547;
    int x5556 = x3 - x5555;
    char* x5557 = x5547;
    char* x5558 = strncpy(x6596, x5557, x5556);
    x3 += 1;
    struct LINEITEMRecord* x7149 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x7149, 0, 1 * sizeof(struct LINEITEMRecord));
    x7149->L_ORDERKEY = x5402; x7149->L_SHIPDATE = (((x5452*(10000))+((x5457*(100))))+(x5462)); x7149->L_COMMITDATE = (((x5471*(10000))+((x5476*(100))))+(x5481)); x7149->L_RECEIPTDATE = (((x5490*(10000))+((x5495*(100))))+(x5500)); x7149->L_SHIPMODE = x6578;
    int x47 = x4;
    struct LINEITEMRecord x6616 = *x7149;
    *(x6434 + x47) = x6616;
    struct LINEITEMRecord* x6618 = &(x6434[x47]);
    x7149 = x6618;
    int x49 = x4;
    x4 = (x49+(1));
  };
  FILE* x5571 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x5572 = 0;
  int x5573 = x5572;
  int* x5574 = &x5573;
  int x5575 = fscanf(x5571, "%d", x5574);
  pclose(x5571);
  struct ORDERSRecord* x6629 = (struct ORDERSRecord*)malloc(x5573 * sizeof(struct ORDERSRecord));
  memset(x6629, 0, x5573 * sizeof(struct ORDERSRecord));
  int x5579 = O_RDONLY;
  int x5580 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x5579);
  /* VAR */ struct stat x5581 = x5386;
  struct stat x5582 = x5581;
  struct stat* x5583 = &x5582;
  int x5584 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x5583);
  int x5586 = PROT_READ;
  int x5587 = MAP_PRIVATE;
  char* x55 = mmap(NULL, (x5583->st_size), x5586, x5587, x5580, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    /* VAR */ int ite17786 = 0;
    if((x57<(x5573))) {
      char x23655 = *x55;
      ite17786 = (x23655!=('\0'));
    } else {
      
      ite17786 = 0;
    };
    int x16380 = ite17786;
    if (!(x16380)) break; 
    
    /* VAR */ int x5595 = 0;
    int x5596 = x5595;
    int* x5597 = &x5596;
    char* x5598 = strntoi_unchecked(x55, x5597);
    x55 = x5598;
    /* VAR */ int x5600 = 0;
    int x5601 = x5600;
    int* x5602 = &x5601;
    char* x5603 = strntoi_unchecked(x55, x5602);
    x55 = x5603;
    char x5605 = *x55;
    /* VAR */ char x5606 = x5605;
    x55 += 1;
    x55 += 1;
    /* VAR */ double x5610 = 0.0;
    double x5611 = x5610;
    double* x5612 = &x5611;
    char* x5613 = strntod_unchecked(x55, x5612);
    x55 = x5613;
    /* VAR */ int x5615 = 0;
    int x5616 = x5615;
    int* x5617 = &x5616;
    char* x5618 = strntoi_unchecked(x55, x5617);
    x55 = x5618;
    /* VAR */ int x5620 = 0;
    int x5621 = x5620;
    int* x5622 = &x5621;
    char* x5623 = strntoi_unchecked(x55, x5622);
    x55 = x5623;
    /* VAR */ int x5625 = 0;
    int x5626 = x5625;
    int* x5627 = &x5626;
    char* x5628 = strntoi_unchecked(x55, x5627);
    x55 = x5628;
    char* x6686 = (char*)malloc(16 * sizeof(char));
    memset(x6686, 0, 16 * sizeof(char));
    /* VAR */ char* x5635 = x55;
    while(1) {
      
      char x5636 = *x55;
      /* VAR */ int ite17839 = 0;
      if((x5636!=('|'))) {
        char x23707 = *x55;
        ite17839 = (x23707!=('\n'));
      } else {
        
        ite17839 = 0;
      };
      int x16426 = ite17839;
      if (!(x16426)) break; 
      
      x55 += 1;
    };
    char* x5643 = x5635;
    int x5644 = x55 - x5643;
    char* x5645 = x5635;
    char* x5646 = strncpy(x6686, x5645, x5644);
    x55 += 1;
    char* x6704 = (char*)malloc(16 * sizeof(char));
    memset(x6704, 0, 16 * sizeof(char));
    /* VAR */ char* x5654 = x55;
    while(1) {
      
      char x5655 = *x55;
      /* VAR */ int ite17862 = 0;
      if((x5655!=('|'))) {
        char x23729 = *x55;
        ite17862 = (x23729!=('\n'));
      } else {
        
        ite17862 = 0;
      };
      int x16442 = ite17862;
      if (!(x16442)) break; 
      
      x55 += 1;
    };
    char* x5662 = x5654;
    int x5663 = x55 - x5662;
    char* x5664 = x5654;
    char* x5665 = strncpy(x6704, x5664, x5663);
    x55 += 1;
    /* VAR */ int x5672 = 0;
    int x5673 = x5672;
    int* x5674 = &x5673;
    char* x5675 = strntoi_unchecked(x55, x5674);
    x55 = x5675;
    char* x6727 = (char*)malloc(80 * sizeof(char));
    memset(x6727, 0, 80 * sizeof(char));
    /* VAR */ char* x5678 = x55;
    while(1) {
      
      char x5679 = *x55;
      /* VAR */ int ite17890 = 0;
      if((x5679!=('|'))) {
        char x23756 = *x55;
        ite17890 = (x23756!=('\n'));
      } else {
        
        ite17890 = 0;
      };
      int x16463 = ite17890;
      if (!(x16463)) break; 
      
      x55 += 1;
    };
    char* x5686 = x5678;
    int x5687 = x55 - x5686;
    char* x5688 = x5678;
    char* x5689 = strncpy(x6727, x5688, x5687);
    x55 += 1;
    struct ORDERSRecord* x7282 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x7282, 0, 1 * sizeof(struct ORDERSRecord));
    x7282->O_ORDERKEY = x5596; x7282->O_ORDERPRIORITY = x6686;
    int x91 = x56;
    struct ORDERSRecord x6747 = *x7282;
    *(x6629 + x91) = x6747;
    struct ORDERSRecord* x6749 = &(x6629[x91]);
    x7282 = x6749;
    int x93 = x56;
    x56 = (x93+(1));
  };
  int x98 = 0;
  for(; x98 < 1 ; x98 += 1) {
    
    GHashTable* x24567 = g_hash_table_new(x24544, x24562);
    struct ORDERSRecord* x24568 = (struct ORDERSRecord*)malloc(60000000 * sizeof(struct ORDERSRecord));
    memset(x24568, 0, 60000000 * sizeof(struct ORDERSRecord));
    int x14302 = 0;
    for(; x14302 < x5573 ; x14302 += 1) {
      
      struct ORDERSRecord* x14303 = &(x6629[x14302]);
      int x14305 = (x14303->O_ORDERKEY)%(60000000);
      struct ORDERSRecord x14306 = *x14303;
      *(x24568 + x14305) = x14306;
      struct ORDERSRecord* x14308 = &(x24568[x14305]);
      x14303 = x14308;
    };
    struct LINEITEMRecord** x24586 = (struct LINEITEMRecord**)malloc(96 * sizeof(struct LINEITEMRecord*));
    memset(x24586, 0, 96 * sizeof(struct LINEITEMRecord*));
    int* x24587 = (int*)malloc(96 * sizeof(int));
    memset(x24587, 0, 96 * sizeof(int));
    int x14319 = 0;
    for(; x14319 < 96 ; x14319 += 1) {
      
      struct LINEITEMRecord* x14322 = (struct LINEITEMRecord*)malloc(((x5378/(96))*(4)) * sizeof(struct LINEITEMRecord));
      memset(x14322, 0, ((x5378/(96))*(4)) * sizeof(struct LINEITEMRecord));
      *(x24586 + x14319) = x14322;
    };
    /* VAR */ int x24599 = 0;
    int x14348 = 0;
    for(; x14348 < x5378 ; x14348 += 1) {
      
      struct LINEITEMRecord* x14349 = &(x6434[x14348]);
      int x14351 = (x14349->L_RECEIPTDATE)/(100);
      int x14357 = (((x14351/(100))-(1992))*(12))+(((x14351%(100))-(1)));
      int x14358 = x24587[x14357];
      struct LINEITEMRecord* x14359 = x24586[x14357];
      struct LINEITEMRecord x14360 = *x14349;
      *(x14359 + x14358) = x14360;
      struct LINEITEMRecord* x14362 = &(x14359[x14358]);
      x14349 = x14362;
      *(x24587 + x14357) = (x14358+(1));
      int x14366 = x24599;
      x24599 = (x14366+(1));
    };
    /* VAR */ int x24643 = 0;
    double** x24644 = (double**)malloc(7 * sizeof(double*));
    memset(x24644, 0, 7 * sizeof(double*));
    /* VAR */ int x24645 = 0;
    while(1) {
      
      int x4827 = x24645;
      if (!((x4827<(7)))) break; 
      
      int x4829 = x24645;
      double* x6812 = (double*)malloc(2 * sizeof(double));
      memset(x6812, 0, 2 * sizeof(double));
      *(x24644 + x4829) = x6812;
      int x4832 = x24645;
      x24645 = (x4832+(1));
    };
    /* VAR */ int x24655 = 0;
    struct AGGRecord_OptimalString* x24656 = (struct AGGRecord_OptimalString*)malloc(7 * sizeof(struct AGGRecord_OptimalString));
    memset(x24656, 0, 7 * sizeof(struct AGGRecord_OptimalString));
    /* VAR */ int x24657 = 0;
    while(1) {
      
      int x4839 = x24657;
      if (!((x4839<(7)))) break; 
      
      int x4841 = x24657;
      double* x4842 = x24644[x4841];
      struct AGGRecord_OptimalString* x7364 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x7364, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      x7364->key = ""; x7364->aggs = x4842;
      struct AGGRecord_OptimalString x6826 = *x7364;
      *(x24656 + x4841) = x6826;
      struct AGGRecord_OptimalString* x6828 = &(x24656[x4841]);
      x7364 = x6828;
      int x4845 = x24657;
      x24657 = (x4845+(1));
    };
    /* VAR */ struct timeval x24673 = x4970;
    struct timeval x24674 = x24673;
    /* VAR */ struct timeval x24675 = x4970;
    struct timeval x24676 = x24675;
    /* VAR */ struct timeval x24677 = x4970;
    struct timeval x24678 = x24677;
    struct timeval* x24679 = &x24676;
    gettimeofday(x24679, NULL);
    /* VAR */ int x24681 = 0;
    int* x24694 = &(x24688);
    GTree* x24695 = g_tree_new(x24694);
    /* VAR */ int x24696 = 0;
    /* VAR */ int x24697 = 0;
    int x14577 = 24;
    for(; x14577 < 37 ; x14577 += 1) {
      
      int x14578 = x24587[x14577];
      struct LINEITEMRecord* x14579 = x24586[x14577];
      int x14503 = 0;
      for(; x14503 < x14578 ; x14503 += 1) {
        
        struct LINEITEMRecord* x14504 = &(x14579[x14503]);
        int x14505 = x14504->L_RECEIPTDATE;
        /* VAR */ int ite19267 = 0;
        if((x14505<(19950101))) {
          ite19267 = ((x14504->L_COMMITDATE)<(19950101));
        } else {
          
          ite19267 = 0;
        };
        int x17413 = ite19267;
        /* VAR */ int ite19276 = 0;
        if(x17413) {
          ite19276 = ((x14504->L_SHIPDATE)<(19950101));
        } else {
          
          ite19276 = 0;
        };
        int x17415 = ite19276;
        /* VAR */ int ite19285 = 0;
        if(x17415) {
          ite19285 = ((x14504->L_SHIPDATE)<((x14504->L_COMMITDATE)));
        } else {
          
          ite19285 = 0;
        };
        int x17417 = ite19285;
        /* VAR */ int ite19295 = 0;
        if(x17417) {
          ite19295 = ((x14504->L_COMMITDATE)<(x14505));
        } else {
          
          ite19295 = 0;
        };
        int x17419 = ite19295;
        /* VAR */ int ite19304 = 0;
        if(x17419) {
          ite19304 = (x14505>=(19940101));
        } else {
          
          ite19304 = 0;
        };
        int x17421 = ite19304;
        /* VAR */ int ite19312 = 0;
        if(x17421) {
          char* x25149 = x14504->L_SHIPMODE;
          int x25150 = strcmp(x25149, "MAIL");
          /* VAR */ int x25152 = 0;
          if((x25150==(0))) {
            x25152 = 1;
          } else {
            
            int x25155 = strcmp(x25149, "SHIP");
            x25152 = (x25155==(0));
          };
          int x25159 = x25152;
          ite19312 = x25159;
        } else {
          
          ite19312 = 0;
        };
        int x17423 = ite19312;
        if(x17423) {
          int x231 = x14504->L_ORDERKEY;
          struct ORDERSRecord* x25166 = &(x24568[x231]);
          if(((x25166->O_ORDERKEY)==(x231))) {
            if(((x25166->O_ORDERKEY)==(x231))) {
              char* x718 = x25166->O_ORDERPRIORITY;
              char* x721 = x14504->L_SHIPMODE;
              void* x9130 = g_hash_table_lookup(x24567, x721);
              /* VAR */ struct AGGRecord_OptimalString* ite17439 = 0;
              if((x9130==(NULL))) {
                int x17440 = x24643;
                double* x17441 = x24644[x17440];
                int x17442 = x24643;
                x24643 = (x17442+(1));
                int x17445 = x24655;
                struct AGGRecord_OptimalString* x17446 = &(x24656[x17445]);
                x17446->key = x721;
                x17446->aggs = x17441;
                int x17449 = x24655;
                x24655 = (x17449+(1));
                g_hash_table_insert(x24567, x721, x17446);
                ite17439 = x17446;
              } else {
                
                ite17439 = x9130;
              };
              struct AGGRecord_OptimalString* x8562 = ite17439;
              double* x300 = x8562->aggs;
              double x314 = x300[0];
              int x13264 = strcmp(x718, "1-URGENT");
              /* VAR */ int ite19361 = 0;
              if((x13264==(0))) {
                ite19361 = 1;
              } else {
                
                int x25203 = strcmp(x718, "2-HIGH");
                ite19361 = (x25203==(0));
              };
              int x17462 = ite19361;
              /* VAR */ double ite17464 = 0;
              if(x17462) {
                ite17464 = (x314+(1.0));
              } else {
                
                ite17464 = x314;
              };
              double x321 = ite17464;
              *x300 = x321;
              double x329 = x300[1];
              int x13273 = strcmp(x718, "1-URGENT");
              /* VAR */ int ite19381 = 0;
              if((x13273!=(0))) {
                int x25221 = strcmp(x718, "2-HIGH");
                ite19381 = (x25221!=(0));
              } else {
                
                ite19381 = 0;
              };
              int x17475 = ite19381;
              /* VAR */ double ite17477 = 0;
              if(x17475) {
                ite17477 = (x329+(1.0));
              } else {
                
                ite17477 = x329;
              };
              double x335 = ite17477;
              *(x300 + 1) = x335;
            };
          };
        };
      };
    };
    GList* x25239 = g_hash_table_get_keys(x24567);
    /* VAR */ GList* x25240 = x25239;
    int x25241 = g_hash_table_size(x24567);
    int x14745 = 0;
    for(; x14745 < x25241 ; x14745 += 1) {
      
      GList* x14746 = x25240;
      void* x14747 = g_list_nth_data(x14746, 0);
      GList* x14748 = g_list_next(x14746);
      x25240 = x14748;
      void* x14750 = g_hash_table_lookup(x24567, x14747);
      struct AGGRecord_OptimalString* x14752 = (struct AGGRecord_OptimalString*){x14750};
      g_tree_insert(x24695, x14752, x14752);
    };
    while(1) {
      
      int x1613 = x24696;
      int x359 = !(x1613);
      /* VAR */ int ite19427 = 0;
      if(x359) {
        int x25266 = g_tree_nnodes(x24695);
        ite19427 = (x25266!=(0));
      } else {
        
        ite19427 = 0;
      };
      int x17514 = ite19427;
      if (!(x17514)) break; 
      
      void* x8607 = NULL;
      void** x8615 = &(x8607);
      g_tree_foreach(x24695, x8614, x8615);
      struct AGGRecord_OptimalString* x8617 = (struct AGGRecord_OptimalString*){x8607};
      int x8618 = g_tree_remove(x24695, x8617);
      if(0) {
        x24696 = 1;
      } else {
        
        double* x374 = x8617->aggs;
        double x375 = x374[0];
        double x376 = x374[1];
        printf("%s|%.0f|%.0f\n", (x8617->key), x375, x376);
        int x1632 = x24697;
        x24697 = (x1632+(1));
      };
    };
    int x25294 = x24697;
    printf("(%d rows)\n", x25294);
    struct timeval* x25296 = &x24678;
    gettimeofday(x25296, NULL);
    struct timeval* x25298 = &x24674;
    struct timeval* x25299 = &x24678;
    struct timeval* x25300 = &x24676;
    long x25301 = timeval_subtract(x25298, x25299, x25300);
    printf("Generated code run in %ld milliseconds.\n", x25301);
  };
}
/* ----------- FUNCTIONS ----------- */
int x24544(char* x8378) {
  int x13075 = strlen(x8378);
  /* VAR */ int x11888 = 0;
  /* VAR */ int x11889 = 0;
  while(1) {
    
    int x11890 = x11888;
    if (!((x11890<(x13075)))) break; 
    
    int x11892 = x11889;
    int x11893 = x11888;
    char* x13083 = pointer_add(x8378, x11893);
    char x13084 = *(x13083);
    x11889 = (x11892+(x13084));
    int x11898 = x11888;
    x11888 = (x11898+(1));
  };
  int x11902 = x11889;
  return x11902; 
}

int x24562(char* x8383, char* x8384) {
  int x11906 = strcmp(x8383, x8384);
  int x11907 = !(x11906);
  return x11907; 
}

int x24688(struct AGGRecord_OptimalString* x170, struct AGGRecord_OptimalString* x171) {
  int x13195 = strcmp((x170->key), (x171->key));
  return x13195; 
}

int x8614(void* x8608, void* x8609, void* x8610) {
  pointer_assign(((struct AGGRecord_OptimalString**){x8610}), ((struct AGGRecord_OptimalString*){x8609}));
  return 1; 
}
