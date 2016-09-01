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
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  };
  
  


int x24954(struct AGGRecord_OptimalString* x139, struct AGGRecord_OptimalString* x140);

int x9861(void* x9855, void* x9856, void* x9857);
/* GLOBAL VARS */

struct timeval x6003;
int main(int argc, char** argv) {
  FILE* x6447 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x6448 = 0;
  int x6449 = x6448;
  int* x6450 = &x6449;
  int x6451 = fscanf(x6447, "%d", x6450);
  pclose(x6447);
  struct LINEITEMRecord* x7565 = (struct LINEITEMRecord*)malloc(x6449 * sizeof(struct LINEITEMRecord));
  memset(x7565, 0, x6449 * sizeof(struct LINEITEMRecord));
  int x6455 = O_RDONLY;
  int x6456 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x6455);
  struct stat x6457 = (struct stat){0};
  /* VAR */ struct stat x6458 = x6457;
  struct stat x6459 = x6458;
  struct stat* x6460 = &x6459;
  int x6461 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x6460);
  int x6463 = PROT_READ;
  int x6464 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x6460->st_size), x6463, x6464, x6456, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite20083 = 0;
    if((x5<(x6449))) {
      char x23732 = *x3;
      ite20083 = (x23732!=('\0'));
    } else {
      
      ite20083 = 0;
    };
    int x18329 = ite20083;
    if (!(x18329)) break; 
    
    /* VAR */ int x6472 = 0;
    int x6473 = x6472;
    int* x6474 = &x6473;
    char* x6475 = strntoi_unchecked(x3, x6474);
    x3 = x6475;
    /* VAR */ int x6477 = 0;
    int x6478 = x6477;
    int* x6479 = &x6478;
    char* x6480 = strntoi_unchecked(x3, x6479);
    x3 = x6480;
    /* VAR */ int x6482 = 0;
    int x6483 = x6482;
    int* x6484 = &x6483;
    char* x6485 = strntoi_unchecked(x3, x6484);
    x3 = x6485;
    /* VAR */ int x6487 = 0;
    int x6488 = x6487;
    int* x6489 = &x6488;
    char* x6490 = strntoi_unchecked(x3, x6489);
    x3 = x6490;
    /* VAR */ double x6492 = 0.0;
    double x6493 = x6492;
    double* x6494 = &x6493;
    char* x6495 = strntod_unchecked(x3, x6494);
    x3 = x6495;
    /* VAR */ double x6497 = 0.0;
    double x6498 = x6497;
    double* x6499 = &x6498;
    char* x6500 = strntod_unchecked(x3, x6499);
    x3 = x6500;
    /* VAR */ double x6502 = 0.0;
    double x6503 = x6502;
    double* x6504 = &x6503;
    char* x6505 = strntod_unchecked(x3, x6504);
    x3 = x6505;
    /* VAR */ double x6507 = 0.0;
    double x6508 = x6507;
    double* x6509 = &x6508;
    char* x6510 = strntod_unchecked(x3, x6509);
    x3 = x6510;
    char x6512 = *x3;
    /* VAR */ char x6513 = x6512;
    x3 += 1;
    x3 += 1;
    char x6517 = *x3;
    /* VAR */ char x6518 = x6517;
    x3 += 1;
    x3 += 1;
    /* VAR */ int x6522 = 0;
    int x6523 = x6522;
    int* x6524 = &x6523;
    char* x6525 = strntoi_unchecked(x3, x6524);
    x3 = x6525;
    /* VAR */ int x6527 = 0;
    int x6528 = x6527;
    int* x6529 = &x6528;
    char* x6530 = strntoi_unchecked(x3, x6529);
    x3 = x6530;
    /* VAR */ int x6532 = 0;
    int x6533 = x6532;
    int* x6534 = &x6533;
    char* x6535 = strntoi_unchecked(x3, x6534);
    x3 = x6535;
    /* VAR */ int x6541 = 0;
    int x6542 = x6541;
    int* x6543 = &x6542;
    char* x6544 = strntoi_unchecked(x3, x6543);
    x3 = x6544;
    /* VAR */ int x6546 = 0;
    int x6547 = x6546;
    int* x6548 = &x6547;
    char* x6549 = strntoi_unchecked(x3, x6548);
    x3 = x6549;
    /* VAR */ int x6551 = 0;
    int x6552 = x6551;
    int* x6553 = &x6552;
    char* x6554 = strntoi_unchecked(x3, x6553);
    x3 = x6554;
    /* VAR */ int x6560 = 0;
    int x6561 = x6560;
    int* x6562 = &x6561;
    char* x6563 = strntoi_unchecked(x3, x6562);
    x3 = x6563;
    /* VAR */ int x6565 = 0;
    int x6566 = x6565;
    int* x6567 = &x6566;
    char* x6568 = strntoi_unchecked(x3, x6567);
    x3 = x6568;
    /* VAR */ int x6570 = 0;
    int x6571 = x6570;
    int* x6572 = &x6571;
    char* x6573 = strntoi_unchecked(x3, x6572);
    x3 = x6573;
    char* x7691 = (char*)malloc(26 * sizeof(char));
    memset(x7691, 0, 26 * sizeof(char));
    /* VAR */ char* x6580 = x3;
    while(1) {
      
      char x6581 = *x3;
      /* VAR */ int ite20204 = 0;
      if((x6581!=('|'))) {
        char x23852 = *x3;
        ite20204 = (x23852!=('\n'));
      } else {
        
        ite20204 = 0;
      };
      int x18443 = ite20204;
      if (!(x18443)) break; 
      
      x3 += 1;
    };
    char* x6588 = x6580;
    int x6589 = x3 - x6588;
    char* x6590 = x6580;
    char* x6591 = strncpy(x7691, x6590, x6589);
    x3 += 1;
    char* x7709 = (char*)malloc(11 * sizeof(char));
    memset(x7709, 0, 11 * sizeof(char));
    /* VAR */ char* x6599 = x3;
    while(1) {
      
      char x6600 = *x3;
      /* VAR */ int ite20227 = 0;
      if((x6600!=('|'))) {
        char x23874 = *x3;
        ite20227 = (x23874!=('\n'));
      } else {
        
        ite20227 = 0;
      };
      int x18459 = ite20227;
      if (!(x18459)) break; 
      
      x3 += 1;
    };
    char* x6607 = x6599;
    int x6608 = x3 - x6607;
    char* x6609 = x6599;
    char* x6610 = strncpy(x7709, x6609, x6608);
    x3 += 1;
    char* x7727 = (char*)malloc(45 * sizeof(char));
    memset(x7727, 0, 45 * sizeof(char));
    /* VAR */ char* x6618 = x3;
    while(1) {
      
      char x6619 = *x3;
      /* VAR */ int ite20250 = 0;
      if((x6619!=('|'))) {
        char x23896 = *x3;
        ite20250 = (x23896!=('\n'));
      } else {
        
        ite20250 = 0;
      };
      int x18475 = ite20250;
      if (!(x18475)) break; 
      
      x3 += 1;
    };
    char* x6626 = x6618;
    int x6627 = x3 - x6626;
    char* x6628 = x6618;
    char* x6629 = strncpy(x7727, x6628, x6627);
    x3 += 1;
    struct LINEITEMRecord* x8310 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x8310, 0, 1 * sizeof(struct LINEITEMRecord));
    x8310->L_ORDERKEY = x6473; x8310->L_COMMITDATE = (((x6542*(10000))+((x6547*(100))))+(x6552)); x8310->L_RECEIPTDATE = (((x6561*(10000))+((x6566*(100))))+(x6571));
    int x47 = x4;
    struct LINEITEMRecord x7747 = *x8310;
    *(x7565 + x47) = x7747;
    struct LINEITEMRecord* x7749 = &(x7565[x47]);
    x8310 = x7749;
    int x49 = x4;
    x4 = (x49+(1));
  };
  FILE* x6642 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x6643 = 0;
  int x6644 = x6643;
  int* x6645 = &x6644;
  int x6646 = fscanf(x6642, "%d", x6645);
  pclose(x6642);
  struct ORDERSRecord* x7760 = (struct ORDERSRecord*)malloc(x6644 * sizeof(struct ORDERSRecord));
  memset(x7760, 0, x6644 * sizeof(struct ORDERSRecord));
  int x6650 = O_RDONLY;
  int x6651 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x6650);
  /* VAR */ struct stat x6652 = x6457;
  struct stat x6653 = x6652;
  struct stat* x6654 = &x6653;
  int x6655 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x6654);
  int x6657 = PROT_READ;
  int x6658 = MAP_PRIVATE;
  char* x55 = mmap(NULL, (x6654->st_size), x6657, x6658, x6651, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    /* VAR */ int ite20300 = 0;
    if((x57<(x6644))) {
      char x23945 = *x55;
      ite20300 = (x23945!=('\0'));
    } else {
      
      ite20300 = 0;
    };
    int x18518 = ite20300;
    if (!(x18518)) break; 
    
    /* VAR */ int x6666 = 0;
    int x6667 = x6666;
    int* x6668 = &x6667;
    char* x6669 = strntoi_unchecked(x55, x6668);
    x55 = x6669;
    /* VAR */ int x6671 = 0;
    int x6672 = x6671;
    int* x6673 = &x6672;
    char* x6674 = strntoi_unchecked(x55, x6673);
    x55 = x6674;
    char x6676 = *x55;
    /* VAR */ char x6677 = x6676;
    x55 += 1;
    x55 += 1;
    /* VAR */ double x6681 = 0.0;
    double x6682 = x6681;
    double* x6683 = &x6682;
    char* x6684 = strntod_unchecked(x55, x6683);
    x55 = x6684;
    /* VAR */ int x6686 = 0;
    int x6687 = x6686;
    int* x6688 = &x6687;
    char* x6689 = strntoi_unchecked(x55, x6688);
    x55 = x6689;
    /* VAR */ int x6691 = 0;
    int x6692 = x6691;
    int* x6693 = &x6692;
    char* x6694 = strntoi_unchecked(x55, x6693);
    x55 = x6694;
    /* VAR */ int x6696 = 0;
    int x6697 = x6696;
    int* x6698 = &x6697;
    char* x6699 = strntoi_unchecked(x55, x6698);
    x55 = x6699;
    char* x7817 = (char*)malloc(16 * sizeof(char));
    memset(x7817, 0, 16 * sizeof(char));
    /* VAR */ char* x6706 = x55;
    while(1) {
      
      char x6707 = *x55;
      /* VAR */ int ite20353 = 0;
      if((x6707!=('|'))) {
        char x23997 = *x55;
        ite20353 = (x23997!=('\n'));
      } else {
        
        ite20353 = 0;
      };
      int x18564 = ite20353;
      if (!(x18564)) break; 
      
      x55 += 1;
    };
    char* x6714 = x6706;
    int x6715 = x55 - x6714;
    char* x6716 = x6706;
    char* x6717 = strncpy(x7817, x6716, x6715);
    x55 += 1;
    char* x7835 = (char*)malloc(16 * sizeof(char));
    memset(x7835, 0, 16 * sizeof(char));
    /* VAR */ char* x6725 = x55;
    while(1) {
      
      char x6726 = *x55;
      /* VAR */ int ite20376 = 0;
      if((x6726!=('|'))) {
        char x24019 = *x55;
        ite20376 = (x24019!=('\n'));
      } else {
        
        ite20376 = 0;
      };
      int x18580 = ite20376;
      if (!(x18580)) break; 
      
      x55 += 1;
    };
    char* x6733 = x6725;
    int x6734 = x55 - x6733;
    char* x6735 = x6725;
    char* x6736 = strncpy(x7835, x6735, x6734);
    x55 += 1;
    /* VAR */ int x6743 = 0;
    int x6744 = x6743;
    int* x6745 = &x6744;
    char* x6746 = strntoi_unchecked(x55, x6745);
    x55 = x6746;
    char* x7858 = (char*)malloc(80 * sizeof(char));
    memset(x7858, 0, 80 * sizeof(char));
    /* VAR */ char* x6749 = x55;
    while(1) {
      
      char x6750 = *x55;
      /* VAR */ int ite20404 = 0;
      if((x6750!=('|'))) {
        char x24046 = *x55;
        ite20404 = (x24046!=('\n'));
      } else {
        
        ite20404 = 0;
      };
      int x18601 = ite20404;
      if (!(x18601)) break; 
      
      x55 += 1;
    };
    char* x6757 = x6749;
    int x6758 = x55 - x6757;
    char* x6759 = x6749;
    char* x6760 = strncpy(x7858, x6759, x6758);
    x55 += 1;
    struct ORDERSRecord* x8443 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x8443, 0, 1 * sizeof(struct ORDERSRecord));
    x8443->O_ORDERKEY = x6667; x8443->O_ORDERDATE = (((x6687*(10000))+((x6692*(100))))+(x6697)); x8443->O_ORDERPRIORITY = x7817;
    int x91 = x56;
    struct ORDERSRecord x7878 = *x8443;
    *(x7760 + x91) = x7878;
    struct ORDERSRecord* x7880 = &(x7760[x91]);
    x8443 = x7880;
    int x93 = x56;
    x56 = (x93+(1));
  };
  int x98 = 0;
  for(; x98 < 1 ; x98 += 1) {
    
    /* VAR */ int x24798 = 0;
    GList*** x24799 = (GList***)malloc(10 * sizeof(GList**));
    memset(x24799, 0, 10 * sizeof(GList**));
    int x15861 = 0;
    for(; x15861 < 10 ; x15861 += 1) {
      
      GList** x15862 = malloc(8);
      GList* x15863 = NULL;
      pointer_assign(x15862, x15863);
      *(x24799 + x15861) = x15862;
    };
    struct LINEITEMRecord** x24811 = (struct LINEITEMRecord**)malloc(60000000 * sizeof(struct LINEITEMRecord*));
    memset(x24811, 0, 60000000 * sizeof(struct LINEITEMRecord*));
    int* x24812 = (int*)malloc(60000000 * sizeof(int));
    memset(x24812, 0, 60000000 * sizeof(int));
    int x15873 = 0;
    for(; x15873 < 60000000 ; x15873 += 1) {
      
      struct LINEITEMRecord* x15874 = (struct LINEITEMRecord*)malloc(16 * sizeof(struct LINEITEMRecord));
      memset(x15874, 0, 16 * sizeof(struct LINEITEMRecord));
      *(x24811 + x15873) = x15874;
    };
    /* VAR */ int x24820 = 0;
    int x15894 = 0;
    for(; x15894 < x6449 ; x15894 += 1) {
      
      struct LINEITEMRecord* x15895 = &(x7565[x15894]);
      int x15897 = (x15895->L_ORDERKEY)%(60000000);
      int x15898 = x24812[x15897];
      struct LINEITEMRecord* x15899 = x24811[x15897];
      struct LINEITEMRecord x15900 = *x15895;
      *(x15899 + x15898) = x15900;
      struct LINEITEMRecord* x15902 = &(x15899[x15898]);
      x15895 = x15902;
      *(x24812 + x15897) = (x15898+(1));
      int x15906 = x24820;
      x24820 = (x15906+(1));
    };
    struct ORDERSRecord** x24852 = (struct ORDERSRecord**)malloc(96 * sizeof(struct ORDERSRecord*));
    memset(x24852, 0, 96 * sizeof(struct ORDERSRecord*));
    int* x24853 = (int*)malloc(96 * sizeof(int));
    memset(x24853, 0, 96 * sizeof(int));
    int x15918 = 0;
    for(; x15918 < 96 ; x15918 += 1) {
      
      struct ORDERSRecord* x15921 = (struct ORDERSRecord*)malloc(((x6644/(96))*(4)) * sizeof(struct ORDERSRecord));
      memset(x15921, 0, ((x6644/(96))*(4)) * sizeof(struct ORDERSRecord));
      *(x24852 + x15918) = x15921;
    };
    /* VAR */ int x24865 = 0;
    int x15947 = 0;
    for(; x15947 < x6644 ; x15947 += 1) {
      
      struct ORDERSRecord* x15948 = &(x7760[x15947]);
      int x15950 = (x15948->O_ORDERDATE)/(100);
      int x15956 = (((x15950/(100))-(1992))*(12))+(((x15950%(100))-(1)));
      int x15957 = x24853[x15956];
      struct ORDERSRecord* x15958 = x24852[x15956];
      struct ORDERSRecord x15959 = *x15948;
      *(x15958 + x15957) = x15959;
      struct ORDERSRecord* x15961 = &(x15958[x15957]);
      x15948 = x15961;
      *(x24853 + x15956) = (x15957+(1));
      int x15965 = x24865;
      x24865 = (x15965+(1));
    };
    /* VAR */ int x24909 = 0;
    double** x24910 = (double**)malloc(5 * sizeof(double*));
    memset(x24910, 0, 5 * sizeof(double*));
    /* VAR */ int x24911 = 0;
    while(1) {
      
      int x5856 = x24911;
      if (!((x5856<(5)))) break; 
      
      int x5858 = x24911;
      double* x7965 = (double*)malloc(1 * sizeof(double));
      memset(x7965, 0, 1 * sizeof(double));
      *(x24910 + x5858) = x7965;
      int x5861 = x24911;
      x24911 = (x5861+(1));
    };
    /* VAR */ int x24921 = 0;
    struct AGGRecord_OptimalString* x24922 = (struct AGGRecord_OptimalString*)malloc(5 * sizeof(struct AGGRecord_OptimalString));
    memset(x24922, 0, 5 * sizeof(struct AGGRecord_OptimalString));
    /* VAR */ int x24923 = 0;
    while(1) {
      
      int x5868 = x24923;
      if (!((x5868<(5)))) break; 
      
      int x5870 = x24923;
      double* x5871 = x24910[x5870];
      struct AGGRecord_OptimalString* x8547 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x8547, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      x8547->key = ""; x8547->aggs = x5871;
      struct AGGRecord_OptimalString x7979 = *x8547;
      *(x24922 + x5870) = x7979;
      struct AGGRecord_OptimalString* x7981 = &(x24922[x5870]);
      x8547 = x7981;
      int x5874 = x24923;
      x24923 = (x5874+(1));
    };
    /* VAR */ struct timeval x24939 = x6003;
    struct timeval x24940 = x24939;
    /* VAR */ struct timeval x24941 = x6003;
    struct timeval x24942 = x24941;
    /* VAR */ struct timeval x24943 = x6003;
    struct timeval x24944 = x24943;
    struct timeval* x24945 = &x24942;
    gettimeofday(x24945, NULL);
    /* VAR */ int x24947 = 0;
    int* x24960 = &(x24954);
    GTree* x24961 = g_tree_new(x24960);
    /* VAR */ int x24962 = 0;
    /* VAR */ int x24963 = 0;
    int x16255 = 19;
    for(; x16255 < 23 ; x16255 += 1) {
      
      int x16256 = x24853[x16255];
      struct ORDERSRecord* x16257 = x24852[x16255];
      int x16142 = 0;
      for(; x16142 < x16256 ; x16142 += 1) {
        
        struct ORDERSRecord* x16143 = &(x16257[x16142]);
        int x16144 = x16143->O_ORDERDATE;
        if(((x16144<(19931101))&((x16144>=(19930801))))) {
          int x185 = x16143->O_ORDERKEY;
          /* VAR */ int x3979 = 0;
          int x3980 = x185%(60000000);
          int x3981 = x24812[x3980];
          struct LINEITEMRecord* x3982 = x24811[x3980];
          int x16055 = 0;
          for(; x16055 < x3981 ; x16055 += 1) {
            
            struct LINEITEMRecord* x16056 = &(x3982[x16055]);
            if(((x16056->L_COMMITDATE)<((x16056->L_RECEIPTDATE)))) {
              if((((x16056->L_ORDERKEY)==(x185))&((x185==((x16056->L_ORDERKEY)))))) {
                x3979 = 1;
              };
            };
          };
          int x3999 = x3979;
          if(x3999) {
            char* x230 = x16143->O_ORDERPRIORITY;
            int x14759 = strlen(x230);
            /* VAR */ int x13494 = 0;
            /* VAR */ int x13495 = 0;
            while(1) {
              
              int x13496 = x13494;
              if (!((x13496<(x14759)))) break; 
              
              int x13498 = x13495;
              int x13499 = x13494;
              char* x14767 = pointer_add(x230, x13499);
              char x14768 = *(x14767);
              x13495 = (x13498+(x14768));
              int x13504 = x13494;
              x13494 = (x13504+(1));
            };
            int x13508 = x13495;
            int x3276 = x13508&((10-(1)));
            GList** x3277 = x24799[x3276];
            int x3278 = x24798;
            if((x3276>(x3278))) {
              x24798 = x3276;
            };
            /* VAR */ struct AGGRecord_OptimalString* x9775 = NULL;
            GList* x9776 = *(x3277);
            /* VAR */ GList* x9777 = x9776;
            while(1) {
              
              GList* x9778 = x9777;
              GList* x9779 = NULL;
              if (!((x9778!=(x9779)))) break; 
              
              GList* x9781 = x9777;
              void* x9782 = g_list_nth_data(x9781, 0);
              struct AGGRecord_OptimalString* x9783 = (struct AGGRecord_OptimalString*){x9782};
              GList* x9784 = x9777;
              GList* x9785 = g_list_next(x9784);
              x9777 = x9785;
              int x13535 = strcmp((x9783->key), x230);
              int x13536 = !(x13535);
              if(x13536) {
                x9775 = x9783;
                break;
              };
            };
            struct AGGRecord_OptimalString* x9793 = x9775;
            /* VAR */ struct AGGRecord_OptimalString* ite19958 = 0;
            if((x9793!=(NULL))) {
              ite19958 = x9793;
            } else {
              
              int x19960 = x24909;
              double* x19961 = x24910[x19960];
              int x19962 = x24909;
              x24909 = (x19962+(1));
              int x19965 = x24921;
              struct AGGRecord_OptimalString* x19966 = &(x24922[x19965]);
              x19966->key = x230;
              x19966->aggs = x19961;
              int x19969 = x24921;
              x24921 = (x19969+(1));
              GList* x19972 = *(x3277);
              GList* x19973 = g_list_prepend(x19972, x19966);
              pointer_assign(x3277, x19973);
              ite19958 = x19966;
            };
            struct AGGRecord_OptimalString* x3291 = ite19958;
            double* x235 = x3291->aggs;
            double x249 = x235[0];
            *x235 = (x249+(1.0));
          };
        };
      };
    };
    int x25437 = x24798;
    int x16507 = 0;
    for(; x16507 < (x25437+(1)) ; x16507 += 1) {
      
      GList** x16508 = x24799[x16507];
      GList* x16513 = *(x16508);
      /* VAR */ GList* x16514 = x16513;
      while(1) {
        
        GList* x9833 = x16514;
        GList* x9834 = NULL;
        if (!((x9833!=(x9834)))) break; 
        
        GList* x9836 = x16514;
        void* x9837 = g_list_nth_data(x9836, 0);
        struct AGGRecord_OptimalString* x9838 = (struct AGGRecord_OptimalString*){x9837};
        GList* x9839 = x16514;
        GList* x9840 = g_list_next(x9839);
        x16514 = x9840;
        g_tree_insert(x24961, x9838, x9838);
      };
    };
    while(1) {
      
      int x1244 = x24962;
      int x272 = !(x1244);
      /* VAR */ int ite21846 = 0;
      if(x272) {
        int x25485 = g_tree_nnodes(x24961);
        ite21846 = (x25485!=(0));
      } else {
        
        ite21846 = 0;
      };
      int x20029 = ite21846;
      if (!(x20029)) break; 
      
      void* x9854 = NULL;
      void** x9862 = &(x9854);
      g_tree_foreach(x24961, x9861, x9862);
      struct AGGRecord_OptimalString* x9864 = (struct AGGRecord_OptimalString*){x9854};
      int x9865 = g_tree_remove(x24961, x9864);
      if(0) {
        x24962 = 1;
      } else {
        
        double x288 = ((double*) { x9864->aggs })[0];
        printf("%s|%.0f\n", (x9864->key), x288);
        int x1262 = x24963;
        x24963 = (x1262+(1));
      };
    };
    int x25512 = x24963;
    printf("(%d rows)\n", x25512);
    struct timeval* x25514 = &x24944;
    gettimeofday(x25514, NULL);
    struct timeval* x25516 = &x24940;
    struct timeval* x25517 = &x24944;
    struct timeval* x25518 = &x24942;
    long x25519 = timeval_subtract(x25516, x25517, x25518);
    printf("Generated code run in %ld milliseconds.\n", x25519);
  };
}
/* ----------- FUNCTIONS ----------- */
int x24954(struct AGGRecord_OptimalString* x139, struct AGGRecord_OptimalString* x140) {
  int x14715 = strcmp((x139->key), (x140->key));
  return x14715; 
}

int x9861(void* x9855, void* x9856, void* x9857) {
  pointer_assign(((struct AGGRecord_OptimalString**){x9857}), ((struct AGGRecord_OptimalString*){x9856}));
  return 1; 
}
