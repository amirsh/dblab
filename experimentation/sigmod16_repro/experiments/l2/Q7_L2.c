#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct NATIONRecord_NATIONRecord;
  struct LINEITEMRecord;
  struct NATIONRecord_NATIONRecord_SUPPLIERRecord;
  struct AGGRecord_Q7GRPRecord;
  struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord;
  struct NATIONRecord;
  struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord;
  struct ORDERSRecord;
  struct Q7GRPRecord;
  struct SUPPLIERRecord;
  struct CUSTOMERRecord;
  
  struct NATIONRecord_NATIONRecord {
  int N1_N_NATIONKEY;
  char* N1_N_NAME;
  int N1_N_REGIONKEY;
  char* N1_N_COMMENT;
  int N2_N_NATIONKEY;
  char* N2_N_NAME;
  int N2_N_REGIONKEY;
  char* N2_N_COMMENT;
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
  
  struct NATIONRecord_NATIONRecord_SUPPLIERRecord {
  int N1_N_NATIONKEY;
  char* N1_N_NAME;
  int N1_N_REGIONKEY;
  char* N1_N_COMMENT;
  int N2_N_NATIONKEY;
  char* N2_N_NAME;
  int N2_N_REGIONKEY;
  char* N2_N_COMMENT;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  };
  
  struct AGGRecord_Q7GRPRecord {
  struct Q7GRPRecord* key;
  double* aggs;
  };
  
  struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord {
  int N1_N_NATIONKEY;
  char* N1_N_NAME;
  int N1_N_REGIONKEY;
  char* N1_N_COMMENT;
  int N2_N_NATIONKEY;
  char* N2_N_NAME;
  int N2_N_REGIONKEY;
  char* N2_N_COMMENT;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
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
  
  struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord {
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
  int N1_N_NATIONKEY;
  char* N1_N_NAME;
  int N1_N_REGIONKEY;
  char* N1_N_COMMENT;
  int N2_N_NATIONKEY;
  char* N2_N_NAME;
  int N2_N_REGIONKEY;
  char* N2_N_COMMENT;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
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
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
  };
  
  struct Q7GRPRecord {
  char* SUPP_NATION;
  char* CUST_NATION;
  int L_YEAR;
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
  
  


int x62997(struct Q7GRPRecord* x17781);

int x63036(struct Q7GRPRecord* x17786, struct Q7GRPRecord* x17787);

int x63063(void* x15066);

int x63066(void* x15069, void* x15070);

int x63073(void* x15076);

int x63076(void* x15079, void* x15080);

int x63083(void* x15086);

int x63086(void* x15089, void* x15090);

int x63093(void* x15096);

int x63096(void* x15099, void* x15100);

int x63275(struct AGGRecord_Q7GRPRecord* x344, struct AGGRecord_Q7GRPRecord* x345);

int x19050(void* x19044, void* x19045, void* x19046);
/* GLOBAL VARS */

struct timeval x8257;
int main(int argc, char** argv) {
  FILE* x9471 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x9472 = 0;
  int x9473 = x9472;
  int* x9474 = &x9473;
  int x9475 = fscanf(x9471, "%d", x9474);
  pclose(x9471);
  struct NATIONRecord* x11909 = (struct NATIONRecord*)malloc(x9473 * sizeof(struct NATIONRecord));
  memset(x11909, 0, x9473 * sizeof(struct NATIONRecord));
  int x9479 = O_RDONLY;
  int x9480 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x9479);
  struct stat x9481 = (struct stat){0};
  /* VAR */ struct stat x9482 = x9481;
  struct stat x9483 = x9482;
  struct stat* x9484 = &x9483;
  int x9485 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x9484);
  int x9487 = PROT_READ;
  int x9488 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x9484->st_size), x9487, x9488, x9480, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite49527 = 0;
    if((x5<(x9473))) {
      char x60786 = *x3;
      ite49527 = (x60786!=('\0'));
    } else {
      
      ite49527 = 0;
    };
    int x46099 = ite49527;
    if (!(x46099)) break; 
    
    /* VAR */ int x9496 = 0;
    int x9497 = x9496;
    int* x9498 = &x9497;
    char* x9499 = strntoi_unchecked(x3, x9498);
    x3 = x9499;
    char* x11933 = (char*)malloc(26 * sizeof(char));
    memset(x11933, 0, 26 * sizeof(char));
    /* VAR */ char* x9502 = x3;
    while(1) {
      
      char x9503 = *x3;
      /* VAR */ int ite49546 = 0;
      if((x9503!=('|'))) {
        char x60804 = *x3;
        ite49546 = (x60804!=('\n'));
      } else {
        
        ite49546 = 0;
      };
      int x46111 = ite49546;
      if (!(x46111)) break; 
      
      x3 += 1;
    };
    char* x9510 = x9502;
    int x9511 = x3 - x9510;
    char* x9512 = x9502;
    char* x9513 = strncpy(x11933, x9512, x9511);
    x3 += 1;
    /* VAR */ int x9520 = 0;
    int x9521 = x9520;
    int* x9522 = &x9521;
    char* x9523 = strntoi_unchecked(x3, x9522);
    x3 = x9523;
    char* x11956 = (char*)malloc(153 * sizeof(char));
    memset(x11956, 0, 153 * sizeof(char));
    /* VAR */ char* x9526 = x3;
    while(1) {
      
      char x9527 = *x3;
      /* VAR */ int ite49574 = 0;
      if((x9527!=('|'))) {
        char x60831 = *x3;
        ite49574 = (x60831!=('\n'));
      } else {
        
        ite49574 = 0;
      };
      int x46132 = ite49574;
      if (!(x46132)) break; 
      
      x3 += 1;
    };
    char* x9534 = x9526;
    int x9535 = x3 - x9534;
    char* x9536 = x9526;
    char* x9537 = strncpy(x11956, x9536, x9535);
    x3 += 1;
    struct NATIONRecord* x13206 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x13206, 0, 1 * sizeof(struct NATIONRecord));
    x13206->N_NATIONKEY = x9497; x13206->N_NAME = x11933; x13206->N_REGIONKEY = x9521; x13206->N_COMMENT = x11956;
    int x28 = x4;
    struct NATIONRecord x11976 = *x13206;
    *(x11909 + x28) = x11976;
    struct NATIONRecord* x11978 = &(x11909[x28]);
    x13206 = x11978;
    int x30 = x4;
    x4 = (x30+(1));
  };
  FILE* x9550 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x9551 = 0;
  int x9552 = x9551;
  int* x9553 = &x9552;
  int x9554 = fscanf(x9550, "%d", x9553);
  pclose(x9550);
  struct ORDERSRecord* x11989 = (struct ORDERSRecord*)malloc(x9552 * sizeof(struct ORDERSRecord));
  memset(x11989, 0, x9552 * sizeof(struct ORDERSRecord));
  int x9558 = O_RDONLY;
  int x9559 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x9558);
  /* VAR */ struct stat x9560 = x9481;
  struct stat x9561 = x9560;
  struct stat* x9562 = &x9561;
  int x9563 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x9562);
  int x9565 = PROT_READ;
  int x9566 = MAP_PRIVATE;
  char* x36 = mmap(NULL, (x9562->st_size), x9565, x9566, x9559, 0);
  /* VAR */ int x37 = 0;
  while(1) {
    
    int x38 = x37;
    /* VAR */ int ite49624 = 0;
    if((x38<(x9552))) {
      char x60880 = *x36;
      ite49624 = (x60880!=('\0'));
    } else {
      
      ite49624 = 0;
    };
    int x46175 = ite49624;
    if (!(x46175)) break; 
    
    /* VAR */ int x9574 = 0;
    int x9575 = x9574;
    int* x9576 = &x9575;
    char* x9577 = strntoi_unchecked(x36, x9576);
    x36 = x9577;
    /* VAR */ int x9579 = 0;
    int x9580 = x9579;
    int* x9581 = &x9580;
    char* x9582 = strntoi_unchecked(x36, x9581);
    x36 = x9582;
    char x9584 = *x36;
    /* VAR */ char x9585 = x9584;
    x36 += 1;
    x36 += 1;
    char x9588 = x9585;
    /* VAR */ double x9589 = 0.0;
    double x9590 = x9589;
    double* x9591 = &x9590;
    char* x9592 = strntod_unchecked(x36, x9591);
    x36 = x9592;
    /* VAR */ int x9594 = 0;
    int x9595 = x9594;
    int* x9596 = &x9595;
    char* x9597 = strntoi_unchecked(x36, x9596);
    x36 = x9597;
    /* VAR */ int x9599 = 0;
    int x9600 = x9599;
    int* x9601 = &x9600;
    char* x9602 = strntoi_unchecked(x36, x9601);
    x36 = x9602;
    /* VAR */ int x9604 = 0;
    int x9605 = x9604;
    int* x9606 = &x9605;
    char* x9607 = strntoi_unchecked(x36, x9606);
    x36 = x9607;
    char* x12046 = (char*)malloc(16 * sizeof(char));
    memset(x12046, 0, 16 * sizeof(char));
    /* VAR */ char* x9614 = x36;
    while(1) {
      
      char x9615 = *x36;
      /* VAR */ int ite49677 = 0;
      if((x9615!=('|'))) {
        char x60932 = *x36;
        ite49677 = (x60932!=('\n'));
      } else {
        
        ite49677 = 0;
      };
      int x46221 = ite49677;
      if (!(x46221)) break; 
      
      x36 += 1;
    };
    char* x9622 = x9614;
    int x9623 = x36 - x9622;
    char* x9624 = x9614;
    char* x9625 = strncpy(x12046, x9624, x9623);
    x36 += 1;
    char* x12064 = (char*)malloc(16 * sizeof(char));
    memset(x12064, 0, 16 * sizeof(char));
    /* VAR */ char* x9633 = x36;
    while(1) {
      
      char x9634 = *x36;
      /* VAR */ int ite49700 = 0;
      if((x9634!=('|'))) {
        char x60954 = *x36;
        ite49700 = (x60954!=('\n'));
      } else {
        
        ite49700 = 0;
      };
      int x46237 = ite49700;
      if (!(x46237)) break; 
      
      x36 += 1;
    };
    char* x9641 = x9633;
    int x9642 = x36 - x9641;
    char* x9643 = x9633;
    char* x9644 = strncpy(x12064, x9643, x9642);
    x36 += 1;
    /* VAR */ int x9651 = 0;
    int x9652 = x9651;
    int* x9653 = &x9652;
    char* x9654 = strntoi_unchecked(x36, x9653);
    x36 = x9654;
    char* x12087 = (char*)malloc(80 * sizeof(char));
    memset(x12087, 0, 80 * sizeof(char));
    /* VAR */ char* x9657 = x36;
    while(1) {
      
      char x9658 = *x36;
      /* VAR */ int ite49728 = 0;
      if((x9658!=('|'))) {
        char x60981 = *x36;
        ite49728 = (x60981!=('\n'));
      } else {
        
        ite49728 = 0;
      };
      int x46258 = ite49728;
      if (!(x46258)) break; 
      
      x36 += 1;
    };
    char* x9665 = x9657;
    int x9666 = x36 - x9665;
    char* x9667 = x9657;
    char* x9668 = strncpy(x12087, x9667, x9666);
    x36 += 1;
    struct ORDERSRecord* x13339 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x13339, 0, 1 * sizeof(struct ORDERSRecord));
    x13339->O_ORDERKEY = x9575; x13339->O_CUSTKEY = x9580; x13339->O_ORDERSTATUS = x9588; x13339->O_TOTALPRICE = x9590; x13339->O_ORDERDATE = (((x9595*(10000))+((x9600*(100))))+(x9605)); x13339->O_ORDERPRIORITY = x12046; x13339->O_CLERK = x12064; x13339->O_SHIPPRIORITY = x9652; x13339->O_COMMENT = x12087;
    int x72 = x37;
    struct ORDERSRecord x12107 = *x13339;
    *(x11989 + x72) = x12107;
    struct ORDERSRecord* x12109 = &(x11989[x72]);
    x13339 = x12109;
    int x74 = x37;
    x37 = (x74+(1));
  };
  FILE* x9681 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x9682 = 0;
  int x9683 = x9682;
  int* x9684 = &x9683;
  int x9685 = fscanf(x9681, "%d", x9684);
  pclose(x9681);
  struct LINEITEMRecord* x12120 = (struct LINEITEMRecord*)malloc(x9683 * sizeof(struct LINEITEMRecord));
  memset(x12120, 0, x9683 * sizeof(struct LINEITEMRecord));
  int x9689 = O_RDONLY;
  int x9690 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x9689);
  /* VAR */ struct stat x9691 = x9481;
  struct stat x9692 = x9691;
  struct stat* x9693 = &x9692;
  int x9694 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x9693);
  int x9696 = PROT_READ;
  int x9697 = MAP_PRIVATE;
  char* x80 = mmap(NULL, (x9693->st_size), x9696, x9697, x9690, 0);
  /* VAR */ int x81 = 0;
  while(1) {
    
    int x82 = x81;
    /* VAR */ int ite49778 = 0;
    if((x82<(x9683))) {
      char x61030 = *x80;
      ite49778 = (x61030!=('\0'));
    } else {
      
      ite49778 = 0;
    };
    int x46301 = ite49778;
    if (!(x46301)) break; 
    
    /* VAR */ int x9705 = 0;
    int x9706 = x9705;
    int* x9707 = &x9706;
    char* x9708 = strntoi_unchecked(x80, x9707);
    x80 = x9708;
    /* VAR */ int x9710 = 0;
    int x9711 = x9710;
    int* x9712 = &x9711;
    char* x9713 = strntoi_unchecked(x80, x9712);
    x80 = x9713;
    /* VAR */ int x9715 = 0;
    int x9716 = x9715;
    int* x9717 = &x9716;
    char* x9718 = strntoi_unchecked(x80, x9717);
    x80 = x9718;
    /* VAR */ int x9720 = 0;
    int x9721 = x9720;
    int* x9722 = &x9721;
    char* x9723 = strntoi_unchecked(x80, x9722);
    x80 = x9723;
    /* VAR */ double x9725 = 0.0;
    double x9726 = x9725;
    double* x9727 = &x9726;
    char* x9728 = strntod_unchecked(x80, x9727);
    x80 = x9728;
    /* VAR */ double x9730 = 0.0;
    double x9731 = x9730;
    double* x9732 = &x9731;
    char* x9733 = strntod_unchecked(x80, x9732);
    x80 = x9733;
    /* VAR */ double x9735 = 0.0;
    double x9736 = x9735;
    double* x9737 = &x9736;
    char* x9738 = strntod_unchecked(x80, x9737);
    x80 = x9738;
    /* VAR */ double x9740 = 0.0;
    double x9741 = x9740;
    double* x9742 = &x9741;
    char* x9743 = strntod_unchecked(x80, x9742);
    x80 = x9743;
    char x9745 = *x80;
    /* VAR */ char x9746 = x9745;
    x80 += 1;
    x80 += 1;
    char x9749 = x9746;
    char x9750 = *x80;
    /* VAR */ char x9751 = x9750;
    x80 += 1;
    x80 += 1;
    char x9754 = x9751;
    /* VAR */ int x9755 = 0;
    int x9756 = x9755;
    int* x9757 = &x9756;
    char* x9758 = strntoi_unchecked(x80, x9757);
    x80 = x9758;
    /* VAR */ int x9760 = 0;
    int x9761 = x9760;
    int* x9762 = &x9761;
    char* x9763 = strntoi_unchecked(x80, x9762);
    x80 = x9763;
    /* VAR */ int x9765 = 0;
    int x9766 = x9765;
    int* x9767 = &x9766;
    char* x9768 = strntoi_unchecked(x80, x9767);
    x80 = x9768;
    /* VAR */ int x9774 = 0;
    int x9775 = x9774;
    int* x9776 = &x9775;
    char* x9777 = strntoi_unchecked(x80, x9776);
    x80 = x9777;
    /* VAR */ int x9779 = 0;
    int x9780 = x9779;
    int* x9781 = &x9780;
    char* x9782 = strntoi_unchecked(x80, x9781);
    x80 = x9782;
    /* VAR */ int x9784 = 0;
    int x9785 = x9784;
    int* x9786 = &x9785;
    char* x9787 = strntoi_unchecked(x80, x9786);
    x80 = x9787;
    /* VAR */ int x9793 = 0;
    int x9794 = x9793;
    int* x9795 = &x9794;
    char* x9796 = strntoi_unchecked(x80, x9795);
    x80 = x9796;
    /* VAR */ int x9798 = 0;
    int x9799 = x9798;
    int* x9800 = &x9799;
    char* x9801 = strntoi_unchecked(x80, x9800);
    x80 = x9801;
    /* VAR */ int x9803 = 0;
    int x9804 = x9803;
    int* x9805 = &x9804;
    char* x9806 = strntoi_unchecked(x80, x9805);
    x80 = x9806;
    char* x12245 = (char*)malloc(26 * sizeof(char));
    memset(x12245, 0, 26 * sizeof(char));
    /* VAR */ char* x9813 = x80;
    while(1) {
      
      char x9814 = *x80;
      /* VAR */ int ite49899 = 0;
      if((x9814!=('|'))) {
        char x61150 = *x80;
        ite49899 = (x61150!=('\n'));
      } else {
        
        ite49899 = 0;
      };
      int x46415 = ite49899;
      if (!(x46415)) break; 
      
      x80 += 1;
    };
    char* x9821 = x9813;
    int x9822 = x80 - x9821;
    char* x9823 = x9813;
    char* x9824 = strncpy(x12245, x9823, x9822);
    x80 += 1;
    char* x12263 = (char*)malloc(11 * sizeof(char));
    memset(x12263, 0, 11 * sizeof(char));
    /* VAR */ char* x9832 = x80;
    while(1) {
      
      char x9833 = *x80;
      /* VAR */ int ite49922 = 0;
      if((x9833!=('|'))) {
        char x61172 = *x80;
        ite49922 = (x61172!=('\n'));
      } else {
        
        ite49922 = 0;
      };
      int x46431 = ite49922;
      if (!(x46431)) break; 
      
      x80 += 1;
    };
    char* x9840 = x9832;
    int x9841 = x80 - x9840;
    char* x9842 = x9832;
    char* x9843 = strncpy(x12263, x9842, x9841);
    x80 += 1;
    char* x12281 = (char*)malloc(45 * sizeof(char));
    memset(x12281, 0, 45 * sizeof(char));
    /* VAR */ char* x9851 = x80;
    while(1) {
      
      char x9852 = *x80;
      /* VAR */ int ite49945 = 0;
      if((x9852!=('|'))) {
        char x61194 = *x80;
        ite49945 = (x61194!=('\n'));
      } else {
        
        ite49945 = 0;
      };
      int x46447 = ite49945;
      if (!(x46447)) break; 
      
      x80 += 1;
    };
    char* x9859 = x9851;
    int x9860 = x80 - x9859;
    char* x9861 = x9851;
    char* x9862 = strncpy(x12281, x9861, x9860);
    x80 += 1;
    struct LINEITEMRecord* x13535 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x13535, 0, 1 * sizeof(struct LINEITEMRecord));
    x13535->L_ORDERKEY = x9706; x13535->L_PARTKEY = x9711; x13535->L_SUPPKEY = x9716; x13535->L_LINENUMBER = x9721; x13535->L_QUANTITY = x9726; x13535->L_EXTENDEDPRICE = x9731; x13535->L_DISCOUNT = x9736; x13535->L_TAX = x9741; x13535->L_RETURNFLAG = x9749; x13535->L_LINESTATUS = x9754; x13535->L_SHIPDATE = (((x9756*(10000))+((x9761*(100))))+(x9766)); x13535->L_COMMITDATE = (((x9775*(10000))+((x9780*(100))))+(x9785)); x13535->L_RECEIPTDATE = (((x9794*(10000))+((x9799*(100))))+(x9804)); x13535->L_SHIPINSTRUCT = x12245; x13535->L_SHIPMODE = x12263; x13535->L_COMMENT = x12281;
    int x124 = x81;
    struct LINEITEMRecord x12301 = *x13535;
    *(x12120 + x124) = x12301;
    struct LINEITEMRecord* x12303 = &(x12120[x124]);
    x13535 = x12303;
    int x126 = x81;
    x81 = (x126+(1));
  };
  FILE* x9875 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x9876 = 0;
  int x9877 = x9876;
  int* x9878 = &x9877;
  int x9879 = fscanf(x9875, "%d", x9878);
  pclose(x9875);
  struct CUSTOMERRecord* x12314 = (struct CUSTOMERRecord*)malloc(x9877 * sizeof(struct CUSTOMERRecord));
  memset(x12314, 0, x9877 * sizeof(struct CUSTOMERRecord));
  int x9883 = O_RDONLY;
  int x9884 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x9883);
  /* VAR */ struct stat x9885 = x9481;
  struct stat x9886 = x9885;
  struct stat* x9887 = &x9886;
  int x9888 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x9887);
  int x9890 = PROT_READ;
  int x9891 = MAP_PRIVATE;
  char* x132 = mmap(NULL, (x9887->st_size), x9890, x9891, x9884, 0);
  /* VAR */ int x133 = 0;
  while(1) {
    
    int x134 = x133;
    /* VAR */ int ite49995 = 0;
    if((x134<(x9877))) {
      char x61243 = *x132;
      ite49995 = (x61243!=('\0'));
    } else {
      
      ite49995 = 0;
    };
    int x46490 = ite49995;
    if (!(x46490)) break; 
    
    /* VAR */ int x9899 = 0;
    int x9900 = x9899;
    int* x9901 = &x9900;
    char* x9902 = strntoi_unchecked(x132, x9901);
    x132 = x9902;
    char* x12337 = (char*)malloc(26 * sizeof(char));
    memset(x12337, 0, 26 * sizeof(char));
    /* VAR */ char* x9905 = x132;
    while(1) {
      
      char x9906 = *x132;
      /* VAR */ int ite50014 = 0;
      if((x9906!=('|'))) {
        char x61261 = *x132;
        ite50014 = (x61261!=('\n'));
      } else {
        
        ite50014 = 0;
      };
      int x46502 = ite50014;
      if (!(x46502)) break; 
      
      x132 += 1;
    };
    char* x9913 = x9905;
    int x9914 = x132 - x9913;
    char* x9915 = x9905;
    char* x9916 = strncpy(x12337, x9915, x9914);
    x132 += 1;
    char* x12355 = (char*)malloc(41 * sizeof(char));
    memset(x12355, 0, 41 * sizeof(char));
    /* VAR */ char* x9924 = x132;
    while(1) {
      
      char x9925 = *x132;
      /* VAR */ int ite50037 = 0;
      if((x9925!=('|'))) {
        char x61283 = *x132;
        ite50037 = (x61283!=('\n'));
      } else {
        
        ite50037 = 0;
      };
      int x46518 = ite50037;
      if (!(x46518)) break; 
      
      x132 += 1;
    };
    char* x9932 = x9924;
    int x9933 = x132 - x9932;
    char* x9934 = x9924;
    char* x9935 = strncpy(x12355, x9934, x9933);
    x132 += 1;
    /* VAR */ int x9942 = 0;
    int x9943 = x9942;
    int* x9944 = &x9943;
    char* x9945 = strntoi_unchecked(x132, x9944);
    x132 = x9945;
    char* x12378 = (char*)malloc(16 * sizeof(char));
    memset(x12378, 0, 16 * sizeof(char));
    /* VAR */ char* x9948 = x132;
    while(1) {
      
      char x9949 = *x132;
      /* VAR */ int ite50065 = 0;
      if((x9949!=('|'))) {
        char x61310 = *x132;
        ite50065 = (x61310!=('\n'));
      } else {
        
        ite50065 = 0;
      };
      int x46539 = ite50065;
      if (!(x46539)) break; 
      
      x132 += 1;
    };
    char* x9956 = x9948;
    int x9957 = x132 - x9956;
    char* x9958 = x9948;
    char* x9959 = strncpy(x12378, x9958, x9957);
    x132 += 1;
    /* VAR */ double x9966 = 0.0;
    double x9967 = x9966;
    double* x9968 = &x9967;
    char* x9969 = strntod_unchecked(x132, x9968);
    x132 = x9969;
    char* x12401 = (char*)malloc(11 * sizeof(char));
    memset(x12401, 0, 11 * sizeof(char));
    /* VAR */ char* x9972 = x132;
    while(1) {
      
      char x9973 = *x132;
      /* VAR */ int ite50093 = 0;
      if((x9973!=('|'))) {
        char x61337 = *x132;
        ite50093 = (x61337!=('\n'));
      } else {
        
        ite50093 = 0;
      };
      int x46560 = ite50093;
      if (!(x46560)) break; 
      
      x132 += 1;
    };
    char* x9980 = x9972;
    int x9981 = x132 - x9980;
    char* x9982 = x9972;
    char* x9983 = strncpy(x12401, x9982, x9981);
    x132 += 1;
    char* x12419 = (char*)malloc(118 * sizeof(char));
    memset(x12419, 0, 118 * sizeof(char));
    /* VAR */ char* x9991 = x132;
    while(1) {
      
      char x9992 = *x132;
      /* VAR */ int ite50116 = 0;
      if((x9992!=('|'))) {
        char x61359 = *x132;
        ite50116 = (x61359!=('\n'));
      } else {
        
        ite50116 = 0;
      };
      int x46576 = ite50116;
      if (!(x46576)) break; 
      
      x132 += 1;
    };
    char* x9999 = x9991;
    int x10000 = x132 - x9999;
    char* x10001 = x9991;
    char* x10002 = strncpy(x12419, x10001, x10000);
    x132 += 1;
    struct CUSTOMERRecord* x13675 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x13675, 0, 1 * sizeof(struct CUSTOMERRecord));
    x13675->C_CUSTKEY = x9900; x13675->C_NAME = x12337; x13675->C_ADDRESS = x12355; x13675->C_NATIONKEY = x9943; x13675->C_PHONE = x12378; x13675->C_ACCTBAL = x9967; x13675->C_MKTSEGMENT = x12401; x13675->C_COMMENT = x12419;
    int x182 = x133;
    struct CUSTOMERRecord x12439 = *x13675;
    *(x12314 + x182) = x12439;
    struct CUSTOMERRecord* x12441 = &(x12314[x182]);
    x13675 = x12441;
    int x184 = x133;
    x133 = (x184+(1));
  };
  FILE* x10015 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x10016 = 0;
  int x10017 = x10016;
  int* x10018 = &x10017;
  int x10019 = fscanf(x10015, "%d", x10018);
  pclose(x10015);
  struct SUPPLIERRecord* x12452 = (struct SUPPLIERRecord*)malloc(x10017 * sizeof(struct SUPPLIERRecord));
  memset(x12452, 0, x10017 * sizeof(struct SUPPLIERRecord));
  int x10023 = O_RDONLY;
  int x10024 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x10023);
  /* VAR */ struct stat x10025 = x9481;
  struct stat x10026 = x10025;
  struct stat* x10027 = &x10026;
  int x10028 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x10027);
  int x10030 = PROT_READ;
  int x10031 = MAP_PRIVATE;
  char* x190 = mmap(NULL, (x10027->st_size), x10030, x10031, x10024, 0);
  /* VAR */ int x191 = 0;
  while(1) {
    
    int x192 = x191;
    /* VAR */ int ite50166 = 0;
    if((x192<(x10017))) {
      char x61408 = *x190;
      ite50166 = (x61408!=('\0'));
    } else {
      
      ite50166 = 0;
    };
    int x46619 = ite50166;
    if (!(x46619)) break; 
    
    /* VAR */ int x10039 = 0;
    int x10040 = x10039;
    int* x10041 = &x10040;
    char* x10042 = strntoi_unchecked(x190, x10041);
    x190 = x10042;
    char* x12475 = (char*)malloc(26 * sizeof(char));
    memset(x12475, 0, 26 * sizeof(char));
    /* VAR */ char* x10045 = x190;
    while(1) {
      
      char x10046 = *x190;
      /* VAR */ int ite50185 = 0;
      if((x10046!=('|'))) {
        char x61426 = *x190;
        ite50185 = (x61426!=('\n'));
      } else {
        
        ite50185 = 0;
      };
      int x46631 = ite50185;
      if (!(x46631)) break; 
      
      x190 += 1;
    };
    char* x10053 = x10045;
    int x10054 = x190 - x10053;
    char* x10055 = x10045;
    char* x10056 = strncpy(x12475, x10055, x10054);
    x190 += 1;
    char* x12493 = (char*)malloc(41 * sizeof(char));
    memset(x12493, 0, 41 * sizeof(char));
    /* VAR */ char* x10064 = x190;
    while(1) {
      
      char x10065 = *x190;
      /* VAR */ int ite50208 = 0;
      if((x10065!=('|'))) {
        char x61448 = *x190;
        ite50208 = (x61448!=('\n'));
      } else {
        
        ite50208 = 0;
      };
      int x46647 = ite50208;
      if (!(x46647)) break; 
      
      x190 += 1;
    };
    char* x10072 = x10064;
    int x10073 = x190 - x10072;
    char* x10074 = x10064;
    char* x10075 = strncpy(x12493, x10074, x10073);
    x190 += 1;
    /* VAR */ int x10082 = 0;
    int x10083 = x10082;
    int* x10084 = &x10083;
    char* x10085 = strntoi_unchecked(x190, x10084);
    x190 = x10085;
    char* x12516 = (char*)malloc(16 * sizeof(char));
    memset(x12516, 0, 16 * sizeof(char));
    /* VAR */ char* x10088 = x190;
    while(1) {
      
      char x10089 = *x190;
      /* VAR */ int ite50236 = 0;
      if((x10089!=('|'))) {
        char x61475 = *x190;
        ite50236 = (x61475!=('\n'));
      } else {
        
        ite50236 = 0;
      };
      int x46668 = ite50236;
      if (!(x46668)) break; 
      
      x190 += 1;
    };
    char* x10096 = x10088;
    int x10097 = x190 - x10096;
    char* x10098 = x10088;
    char* x10099 = strncpy(x12516, x10098, x10097);
    x190 += 1;
    /* VAR */ double x10106 = 0.0;
    double x10107 = x10106;
    double* x10108 = &x10107;
    char* x10109 = strntod_unchecked(x190, x10108);
    x190 = x10109;
    char* x12539 = (char*)malloc(102 * sizeof(char));
    memset(x12539, 0, 102 * sizeof(char));
    /* VAR */ char* x10112 = x190;
    while(1) {
      
      char x10113 = *x190;
      /* VAR */ int ite50264 = 0;
      if((x10113!=('|'))) {
        char x61502 = *x190;
        ite50264 = (x61502!=('\n'));
      } else {
        
        ite50264 = 0;
      };
      int x46689 = ite50264;
      if (!(x46689)) break; 
      
      x190 += 1;
    };
    char* x10120 = x10112;
    int x10121 = x190 - x10120;
    char* x10122 = x10112;
    char* x10123 = strncpy(x12539, x10122, x10121);
    x190 += 1;
    struct SUPPLIERRecord* x13797 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x13797, 0, 1 * sizeof(struct SUPPLIERRecord));
    x13797->S_SUPPKEY = x10040; x13797->S_NAME = x12475; x13797->S_ADDRESS = x12493; x13797->S_NATIONKEY = x10083; x13797->S_PHONE = x12516; x13797->S_ACCTBAL = x10107; x13797->S_COMMENT = x12539;
    int x232 = x191;
    struct SUPPLIERRecord x12559 = *x13797;
    *(x12452 + x232) = x12559;
    struct SUPPLIERRecord* x12561 = &(x12452[x232]);
    x13797 = x12561;
    int x234 = x191;
    x191 = (x234+(1));
  };
  int x239 = 0;
  for(; x239 < 1 ; x239 += 1) {
    
    GHashTable* x63062 = g_hash_table_new(x62997, x63036);
    GHashTable* x63072 = g_hash_table_new(((void***){x63063}), ((int*){x63066}));
    GHashTable* x63082 = g_hash_table_new(((void***){x63073}), ((int*){x63076}));
    GHashTable* x63092 = g_hash_table_new(((void***){x63083}), ((int*){x63086}));
    GHashTable* x63102 = g_hash_table_new(((void***){x63093}), ((int*){x63096}));
    /* VAR */ int x63103 = 0;
    struct NATIONRecord_NATIONRecord* x63104 = (struct NATIONRecord_NATIONRecord*)malloc(25 * sizeof(struct NATIONRecord_NATIONRecord));
    memset(x63104, 0, 25 * sizeof(struct NATIONRecord_NATIONRecord));
    /* VAR */ int x63105 = 0;
    while(1) {
      
      int x7728 = x63105;
      if (!((x7728<(25)))) break; 
      
      int x7730 = x63105;
      struct NATIONRecord_NATIONRecord* x13823 = (struct NATIONRecord_NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord_NATIONRecord));
      memset(x13823, 0, 1 * sizeof(struct NATIONRecord_NATIONRecord));
      x13823->N1_N_NATIONKEY = 0; x13823->N1_N_NAME = ""; x13823->N1_N_REGIONKEY = 0; x13823->N1_N_COMMENT = ""; x13823->N2_N_NATIONKEY = 0; x13823->N2_N_NAME = ""; x13823->N2_N_REGIONKEY = 0; x13823->N2_N_COMMENT = "";
      struct NATIONRecord_NATIONRecord x12582 = *x13823;
      *(x63104 + x7730) = x12582;
      struct NATIONRecord_NATIONRecord* x12584 = &(x63104[x7730]);
      x13823 = x12584;
      int x7733 = x63105;
      x63105 = (x7733+(1));
    };
    /* VAR */ int x63120 = 0;
    struct NATIONRecord_NATIONRecord_SUPPLIERRecord* x63121 = (struct NATIONRecord_NATIONRecord_SUPPLIERRecord*)malloc(80000 * sizeof(struct NATIONRecord_NATIONRecord_SUPPLIERRecord));
    memset(x63121, 0, 80000 * sizeof(struct NATIONRecord_NATIONRecord_SUPPLIERRecord));
    /* VAR */ int x63122 = 0;
    while(1) {
      
      int x7740 = x63122;
      if (!((x7740<(80000)))) break; 
      
      int x7742 = x63122;
      struct NATIONRecord_NATIONRecord_SUPPLIERRecord* x13840 = (struct NATIONRecord_NATIONRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_NATIONRecord_SUPPLIERRecord));
      memset(x13840, 0, 1 * sizeof(struct NATIONRecord_NATIONRecord_SUPPLIERRecord));
      x13840->N1_N_NATIONKEY = 0; x13840->N1_N_NAME = ""; x13840->N1_N_REGIONKEY = 0; x13840->N1_N_COMMENT = ""; x13840->N2_N_NATIONKEY = 0; x13840->N2_N_NAME = ""; x13840->N2_N_REGIONKEY = 0; x13840->N2_N_COMMENT = ""; x13840->S_SUPPKEY = 0; x13840->S_NAME = ""; x13840->S_ADDRESS = ""; x13840->S_NATIONKEY = 0; x13840->S_PHONE = ""; x13840->S_ACCTBAL = 0.0; x13840->S_COMMENT = "";
      struct NATIONRecord_NATIONRecord_SUPPLIERRecord x12597 = *x13840;
      *(x63121 + x7742) = x12597;
      struct NATIONRecord_NATIONRecord_SUPPLIERRecord* x12599 = &(x63121[x7742]);
      x13840 = x12599;
      int x7745 = x63122;
      x63122 = (x7745+(1));
    };
    /* VAR */ int x63137 = 0;
    struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x63138 = (struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord*)malloc(48000000 * sizeof(struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
    memset(x63138, 0, 48000000 * sizeof(struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
    /* VAR */ int x63139 = 0;
    while(1) {
      
      int x7752 = x63139;
      if (!((x7752<(48000000)))) break; 
      
      int x7754 = x63139;
      struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x13857 = (struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord*)malloc(1 * sizeof(struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
      memset(x13857, 0, 1 * sizeof(struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
      x13857->N1_N_NATIONKEY = 0; x13857->N1_N_NAME = ""; x13857->N1_N_REGIONKEY = 0; x13857->N1_N_COMMENT = ""; x13857->N2_N_NATIONKEY = 0; x13857->N2_N_NAME = ""; x13857->N2_N_REGIONKEY = 0; x13857->N2_N_COMMENT = ""; x13857->S_SUPPKEY = 0; x13857->S_NAME = ""; x13857->S_ADDRESS = ""; x13857->S_NATIONKEY = 0; x13857->S_PHONE = ""; x13857->S_ACCTBAL = 0.0; x13857->S_COMMENT = ""; x13857->L_ORDERKEY = 0; x13857->L_PARTKEY = 0; x13857->L_SUPPKEY = 0; x13857->L_LINENUMBER = 0; x13857->L_QUANTITY = 0.0; x13857->L_EXTENDEDPRICE = 0.0; x13857->L_DISCOUNT = 0.0; x13857->L_TAX = 0.0; x13857->L_RETURNFLAG = '\0'; x13857->L_LINESTATUS = '\0'; x13857->L_SHIPDATE = 0; x13857->L_COMMITDATE = 0; x13857->L_RECEIPTDATE = 0; x13857->L_SHIPINSTRUCT = ""; x13857->L_SHIPMODE = ""; x13857->L_COMMENT = "";
      struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord x12612 = *x13857;
      *(x63138 + x7754) = x12612;
      struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x12614 = &(x63138[x7754]);
      x13857 = x12614;
      int x7757 = x63139;
      x63139 = (x7757+(1));
    };
    /* VAR */ int x63154 = 0;
    struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord* x63155 = (struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord*)malloc(48000000 * sizeof(struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord));
    memset(x63155, 0, 48000000 * sizeof(struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord));
    /* VAR */ int x63156 = 0;
    while(1) {
      
      int x7764 = x63156;
      if (!((x7764<(48000000)))) break; 
      
      int x7766 = x63156;
      struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord* x13874 = (struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord*)malloc(1 * sizeof(struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord));
      memset(x13874, 0, 1 * sizeof(struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord));
      x13874->C_CUSTKEY = 0; x13874->C_NAME = ""; x13874->C_ADDRESS = ""; x13874->C_NATIONKEY = 0; x13874->C_PHONE = ""; x13874->C_ACCTBAL = 0.0; x13874->C_MKTSEGMENT = ""; x13874->C_COMMENT = ""; x13874->N1_N_NATIONKEY = 0; x13874->N1_N_NAME = ""; x13874->N1_N_REGIONKEY = 0; x13874->N1_N_COMMENT = ""; x13874->N2_N_NATIONKEY = 0; x13874->N2_N_NAME = ""; x13874->N2_N_REGIONKEY = 0; x13874->N2_N_COMMENT = ""; x13874->S_SUPPKEY = 0; x13874->S_NAME = ""; x13874->S_ADDRESS = ""; x13874->S_NATIONKEY = 0; x13874->S_PHONE = ""; x13874->S_ACCTBAL = 0.0; x13874->S_COMMENT = ""; x13874->L_ORDERKEY = 0; x13874->L_PARTKEY = 0; x13874->L_SUPPKEY = 0; x13874->L_LINENUMBER = 0; x13874->L_QUANTITY = 0.0; x13874->L_EXTENDEDPRICE = 0.0; x13874->L_DISCOUNT = 0.0; x13874->L_TAX = 0.0; x13874->L_RETURNFLAG = '\0'; x13874->L_LINESTATUS = '\0'; x13874->L_SHIPDATE = 0; x13874->L_COMMITDATE = 0; x13874->L_RECEIPTDATE = 0; x13874->L_SHIPINSTRUCT = ""; x13874->L_SHIPMODE = ""; x13874->L_COMMENT = ""; x13874->O_ORDERKEY = 0; x13874->O_CUSTKEY = 0; x13874->O_ORDERSTATUS = '\0'; x13874->O_TOTALPRICE = 0.0; x13874->O_ORDERDATE = 0; x13874->O_ORDERPRIORITY = ""; x13874->O_CLERK = ""; x13874->O_SHIPPRIORITY = 0; x13874->O_COMMENT = "";
      struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord x12627 = *x13874;
      *(x63155 + x7766) = x12627;
      struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord* x12629 = &(x63155[x7766]);
      x13874 = x12629;
      int x7769 = x63156;
      x63156 = (x7769+(1));
    };
    /* VAR */ int x63171 = 0;
    struct Q7GRPRecord* x63172 = (struct Q7GRPRecord*)malloc(48000000 * sizeof(struct Q7GRPRecord));
    memset(x63172, 0, 48000000 * sizeof(struct Q7GRPRecord));
    /* VAR */ int x63173 = 0;
    while(1) {
      
      int x7776 = x63173;
      if (!((x7776<(48000000)))) break; 
      
      int x7778 = x63173;
      struct Q7GRPRecord* x13891 = (struct Q7GRPRecord*)malloc(1 * sizeof(struct Q7GRPRecord));
      memset(x13891, 0, 1 * sizeof(struct Q7GRPRecord));
      x13891->SUPP_NATION = ""; x13891->CUST_NATION = ""; x13891->L_YEAR = 0;
      struct Q7GRPRecord x12642 = *x13891;
      *(x63172 + x7778) = x12642;
      struct Q7GRPRecord* x12644 = &(x63172[x7778]);
      x13891 = x12644;
      int x7781 = x63173;
      x63173 = (x7781+(1));
    };
    /* VAR */ int x63188 = 0;
    double** x63189 = (double**)malloc(4375 * sizeof(double*));
    memset(x63189, 0, 4375 * sizeof(double*));
    /* VAR */ int x63190 = 0;
    while(1) {
      
      int x7788 = x63190;
      if (!((x7788<(4375)))) break; 
      
      int x7790 = x63190;
      double* x12656 = (double*)malloc(1 * sizeof(double));
      memset(x12656, 0, 1 * sizeof(double));
      *(x63189 + x7790) = x12656;
      int x7793 = x63190;
      x63190 = (x7793+(1));
    };
    /* VAR */ int x63200 = 0;
    struct AGGRecord_Q7GRPRecord* x63201 = (struct AGGRecord_Q7GRPRecord*)malloc(4375 * sizeof(struct AGGRecord_Q7GRPRecord));
    memset(x63201, 0, 4375 * sizeof(struct AGGRecord_Q7GRPRecord));
    /* VAR */ int x63202 = 0;
    while(1) {
      
      int x7800 = x63202;
      if (!((x7800<(4375)))) break; 
      
      int x7802 = x63202;
      struct Q7GRPRecord* x7803 = &(x63172[x7802]);
      double* x7804 = x63189[x7802];
      struct AGGRecord_Q7GRPRecord* x13922 = (struct AGGRecord_Q7GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q7GRPRecord));
      memset(x13922, 0, 1 * sizeof(struct AGGRecord_Q7GRPRecord));
      x13922->key = x7803; x13922->aggs = x7804;
      struct AGGRecord_Q7GRPRecord x12671 = *x13922;
      *(x63201 + x7802) = x12671;
      struct AGGRecord_Q7GRPRecord* x12673 = &(x63201[x7802]);
      x13922 = x12673;
      int x7807 = x63202;
      x63202 = (x7807+(1));
    };
    /* VAR */ struct timeval x63219 = x8257;
    struct timeval x63220 = x63219;
    /* VAR */ struct timeval x63221 = x8257;
    struct timeval x63222 = x63221;
    /* VAR */ struct timeval x63223 = x8257;
    struct timeval x63224 = x63223;
    struct timeval* x63225 = &x63222;
    gettimeofday(x63225, NULL);
    /* VAR */ int x63227 = 0;
    /* VAR */ int x63228 = 0;
    /* VAR */ struct NATIONRecord* x63229 = NULL;
    /* VAR */ int x63230 = 0;
    /* VAR */ int x63231 = 0;
    /* VAR */ int x63232 = 0;
    /* VAR */ int x63233 = 0;
    int* x63316 = &(x63275);
    GTree* x63317 = g_tree_new(x63316);
    /* VAR */ int x63318 = 0;
    /* VAR */ int x63319 = 0;
    while(1) {
      
      int x63321 = x63233;
      if (!((x63321<(x9877)))) break; 
      
      int x3628 = x63233;
      struct CUSTOMERRecord* x384 = &(x12314[x3628]);
      void* x15269 = (void*){(x384->C_CUSTKEY)};
      void* x15271 = g_hash_table_lookup(x63072, x15269);
      GList** x15272 = (GList**){x15271};
      GList** x15273 = NULL;
      /* VAR */ GList** ite48436 = 0;
      if((x15272==(x15273))) {
        GList** x48437 = malloc(8);
        GList* x48438 = NULL;
        pointer_assign(x48437, x48438);
        ite48436 = x48437;
      } else {
        
        ite48436 = x15272;
      };
      GList** x15278 = ite48436;
      GList* x15279 = *(x15278);
      GList* x15280 = g_list_prepend(x15279, ((void*){x384}));
      pointer_assign(x15278, x15280);
      g_hash_table_insert(x63072, x15269, ((void*){x15278}));
      int x3633 = x63233;
      x63233 = (x3633+(1));
    };
    while(1) {
      
      int x63350 = x63227;
      if (!((x63350<(x9473)))) break; 
      
      int x3642 = x63227;
      struct NATIONRecord* x399 = &(x11909[x3642]);
      x63229 = x399;
      while(1) {
        
        int x63356 = x63228;
        if (!((x63356<(x9473)))) break; 
        
        int x3652 = x63228;
        struct NATIONRecord* x408 = &(x11909[x3652]);
        struct NATIONRecord* x3655 = x63229;
        char* x411 = x3655->N_NAME;
        int x37763 = strcmp(x411, "UNITED STATES");
        /* VAR */ int ite52144 = 0;
        if((x37763==(0))) {
          int x63367 = strcmp((x408->N_NAME), "INDONESIA");
          ite52144 = (x63367==(0));
        } else {
          
          ite52144 = 0;
        };
        int x48466 = ite52144;
        /* VAR */ int ite52154 = 0;
        if(x48466) {
          ite52154 = 1;
        } else {
          
          int x63376 = strcmp(x411, "INDONESIA");
          /* VAR */ int x63378 = 0;
          if((x63376==(0))) {
            int x63381 = strcmp((x408->N_NAME), "UNITED STATES");
            x63378 = (x63381==(0));
          } else {
            
            x63378 = 0;
          };
          int x63386 = x63378;
          ite52154 = x63386;
        };
        int x48468 = ite52154;
        if(x48468) {
          struct NATIONRecord* x3667 = x63229;
          int x7890 = x63103;
          struct NATIONRecord_NATIONRecord* x7891 = &(x63104[x7890]);
          x7891->N1_N_NATIONKEY = (x3667->N_NATIONKEY);
          x7891->N1_N_NAME = (x3667->N_NAME);
          x7891->N1_N_REGIONKEY = (x3667->N_REGIONKEY);
          x7891->N1_N_COMMENT = (x3667->N_COMMENT);
          x7891->N2_N_NATIONKEY = (x408->N_NATIONKEY);
          x7891->N2_N_NAME = (x408->N_NAME);
          x7891->N2_N_REGIONKEY = (x408->N_REGIONKEY);
          x7891->N2_N_COMMENT = (x408->N_COMMENT);
          int x7900 = x63103;
          x63103 = (x7900+(1));
          void* x15335 = (void*){(x7891->N1_N_NATIONKEY)};
          void* x15337 = g_hash_table_lookup(x63102, x15335);
          GList** x15338 = (GList**){x15337};
          GList** x15339 = NULL;
          /* VAR */ GList** ite48500 = 0;
          if((x15338==(x15339))) {
            GList** x48501 = malloc(8);
            GList* x48502 = NULL;
            pointer_assign(x48501, x48502);
            ite48500 = x48501;
          } else {
            
            ite48500 = x15338;
          };
          GList** x15344 = ite48500;
          GList* x15345 = *(x15344);
          GList* x15346 = g_list_prepend(x15345, ((void*){x7891}));
          pointer_assign(x15344, x15346);
          g_hash_table_insert(x63102, x15335, ((void*){x15344}));
        };
        int x3679 = x63228;
        x63228 = (x3679+(1));
      };
      x63228 = 0;
      int x3683 = x63227;
      x63227 = (x3683+(1));
    };
    while(1) {
      
      int x63442 = x63230;
      if (!((x63442<(x10017)))) break; 
      
      int x3692 = x63230;
      struct SUPPLIERRecord* x442 = &(x12452[x3692]);
      int x444 = x442->S_NATIONKEY;
      void* x15365 = g_hash_table_lookup(x63102, ((void*){x444}));
      GList** x15366 = (GList**){x15365};
      if((x15366!=(NULL))) {
        GList* x18172 = *(x15366);
        /* VAR */ GList* x18173 = x18172;
        while(1) {
          
          GList* x18174 = x18173;
          GList* x18175 = NULL;
          if (!((x18174!=(x18175)))) break; 
          
          GList* x18177 = x18173;
          void* x18178 = g_list_nth_data(x18177, 0);
          struct NATIONRecord_NATIONRecord* x18179 = (struct NATIONRecord_NATIONRecord*){x18178};
          GList* x18180 = x18173;
          GList* x18181 = g_list_next(x18180);
          x18173 = x18181;
          int x18183 = x18179->N1_N_NATIONKEY;
          if((x18183==(x444))) {
            int x7941 = x63120;
            struct NATIONRecord_NATIONRecord_SUPPLIERRecord* x7942 = &(x63121[x7941]);
            x7942->N1_N_NATIONKEY = x18183;
            x7942->N1_N_NAME = (x18179->N1_N_NAME);
            x7942->N1_N_REGIONKEY = (x18179->N1_N_REGIONKEY);
            x7942->N1_N_COMMENT = (x18179->N1_N_COMMENT);
            x7942->N2_N_NATIONKEY = (x18179->N2_N_NATIONKEY);
            x7942->N2_N_NAME = (x18179->N2_N_NAME);
            x7942->N2_N_REGIONKEY = (x18179->N2_N_REGIONKEY);
            x7942->N2_N_COMMENT = (x18179->N2_N_COMMENT);
            x7942->S_SUPPKEY = (x442->S_SUPPKEY);
            x7942->S_NAME = (x442->S_NAME);
            x7942->S_ADDRESS = (x442->S_ADDRESS);
            x7942->S_NATIONKEY = x444;
            x7942->S_PHONE = (x442->S_PHONE);
            x7942->S_ACCTBAL = (x442->S_ACCTBAL);
            x7942->S_COMMENT = (x442->S_COMMENT);
            int x7958 = x63120;
            x63120 = (x7958+(1));
            void* x15410 = (void*){(x7942->S_SUPPKEY)};
            void* x15412 = g_hash_table_lookup(x63092, x15410);
            GList** x15413 = (GList**){x15412};
            GList** x15414 = NULL;
            /* VAR */ GList** ite48645 = 0;
            if((x15413==(x15414))) {
              GList** x48646 = malloc(8);
              GList* x48647 = NULL;
              pointer_assign(x48646, x48647);
              ite48645 = x48646;
            } else {
              
              ite48645 = x15413;
            };
            GList** x15419 = ite48645;
            GList* x15420 = *(x15419);
            GList* x15421 = g_list_prepend(x15420, ((void*){x7942}));
            pointer_assign(x15419, x15421);
            g_hash_table_insert(x63092, x15410, ((void*){x15419}));
          };
        };
      };
      int x3746 = x63230;
      x63230 = (x3746+(1));
    };
    while(1) {
      
      int x63584 = x63231;
      if (!((x63584<(x9683)))) break; 
      
      int x3756 = x63231;
      struct LINEITEMRecord* x483 = &(x12120[x3756]);
      int x485 = x483->L_SHIPDATE;
      /* VAR */ int ite52367 = 0;
      if((x485>=(19950101))) {
        ite52367 = (x485<=(19961231));
      } else {
        
        ite52367 = 0;
      };
      int x48668 = ite52367;
      if(x48668) {
        int x491 = x483->L_SUPPKEY;
        void* x15442 = g_hash_table_lookup(x63092, ((void*){x491}));
        GList** x15443 = (GList**){x15442};
        if((x15443!=(NULL))) {
          GList* x18343 = *(x15443);
          /* VAR */ GList* x18344 = x18343;
          while(1) {
            
            GList* x18345 = x18344;
            GList* x18346 = NULL;
            if (!((x18345!=(x18346)))) break; 
            
            GList* x18348 = x18344;
            void* x18349 = g_list_nth_data(x18348, 0);
            struct NATIONRecord_NATIONRecord_SUPPLIERRecord* x18350 = (struct NATIONRecord_NATIONRecord_SUPPLIERRecord*){x18349};
            GList* x18351 = x18344;
            GList* x18352 = g_list_next(x18351);
            x18344 = x18352;
            int x18354 = x18350->S_SUPPKEY;
            if((x18354==(x491))) {
              int x8018 = x63137;
              struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x8019 = &(x63138[x8018]);
              x8019->N1_N_NATIONKEY = (x18350->N1_N_NATIONKEY);
              x8019->N1_N_NAME = (x18350->N1_N_NAME);
              x8019->N1_N_REGIONKEY = (x18350->N1_N_REGIONKEY);
              x8019->N1_N_COMMENT = (x18350->N1_N_COMMENT);
              x8019->N2_N_NATIONKEY = (x18350->N2_N_NATIONKEY);
              x8019->N2_N_NAME = (x18350->N2_N_NAME);
              x8019->N2_N_REGIONKEY = (x18350->N2_N_REGIONKEY);
              x8019->N2_N_COMMENT = (x18350->N2_N_COMMENT);
              x8019->S_SUPPKEY = x18354;
              x8019->S_NAME = (x18350->S_NAME);
              x8019->S_ADDRESS = (x18350->S_ADDRESS);
              x8019->S_NATIONKEY = (x18350->S_NATIONKEY);
              x8019->S_PHONE = (x18350->S_PHONE);
              x8019->S_ACCTBAL = (x18350->S_ACCTBAL);
              x8019->S_COMMENT = (x18350->S_COMMENT);
              x8019->L_ORDERKEY = (x483->L_ORDERKEY);
              x8019->L_PARTKEY = (x483->L_PARTKEY);
              x8019->L_SUPPKEY = x491;
              x8019->L_LINENUMBER = (x483->L_LINENUMBER);
              x8019->L_QUANTITY = (x483->L_QUANTITY);
              x8019->L_EXTENDEDPRICE = (x483->L_EXTENDEDPRICE);
              x8019->L_DISCOUNT = (x483->L_DISCOUNT);
              x8019->L_TAX = (x483->L_TAX);
              x8019->L_RETURNFLAG = (x483->L_RETURNFLAG);
              x8019->L_LINESTATUS = (x483->L_LINESTATUS);
              x8019->L_SHIPDATE = x485;
              x8019->L_COMMITDATE = (x483->L_COMMITDATE);
              x8019->L_RECEIPTDATE = (x483->L_RECEIPTDATE);
              x8019->L_SHIPINSTRUCT = (x483->L_SHIPINSTRUCT);
              x8019->L_SHIPMODE = (x483->L_SHIPMODE);
              x8019->L_COMMENT = (x483->L_COMMENT);
              int x8051 = x63137;
              x63137 = (x8051+(1));
              void* x15518 = (void*){(x8019->L_ORDERKEY)};
              void* x15520 = g_hash_table_lookup(x63082, x15518);
              GList** x15521 = (GList**){x15520};
              GList** x15522 = NULL;
              /* VAR */ GList** ite48853 = 0;
              if((x15521==(x15522))) {
                GList** x48854 = malloc(8);
                GList* x48855 = NULL;
                pointer_assign(x48854, x48855);
                ite48853 = x48854;
              } else {
                
                ite48853 = x15521;
              };
              GList** x15527 = ite48853;
              GList* x15528 = *(x15527);
              GList* x15529 = g_list_prepend(x15528, ((void*){x8019}));
              pointer_assign(x15527, x15529);
              g_hash_table_insert(x63082, x15518, ((void*){x15527}));
            };
          };
        };
      };
      int x3847 = x63231;
      x63231 = (x3847+(1));
    };
    while(1) {
      
      int x63798 = x63232;
      if (!((x63798<(x9552)))) break; 
      
      int x3856 = x63232;
      struct ORDERSRecord* x530 = &(x11989[x3856]);
      int x532 = x530->O_ORDERKEY;
      void* x15545 = g_hash_table_lookup(x63082, ((void*){x532}));
      GList** x15546 = (GList**){x15545};
      if((x15546!=(NULL))) {
        GList* x18735 = *(x15546);
        /* VAR */ GList* x18736 = x18735;
        while(1) {
          
          GList* x18737 = x18736;
          GList* x18738 = NULL;
          if (!((x18737!=(x18738)))) break; 
          
          GList* x18740 = x18736;
          void* x18741 = g_list_nth_data(x18740, 0);
          struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x18742 = (struct NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord*){x18741};
          GList* x18743 = x18736;
          GList* x18744 = g_list_next(x18743);
          x18736 = x18744;
          int x18746 = x18742->L_ORDERKEY;
          if((x18746==(x532))) {
            int x1726 = x18742->N2_N_NATIONKEY;
            int x1752 = x530->O_CUSTKEY;
            void* x15595 = g_hash_table_lookup(x63072, ((void*){x1752}));
            GList** x15596 = (GList**){x15595};
            if((x15596!=(NULL))) {
              GList* x18621 = *(x15596);
              /* VAR */ GList* x18622 = x18621;
              while(1) {
                
                GList* x18623 = x18622;
                GList* x18624 = NULL;
                if (!((x18623!=(x18624)))) break; 
                
                GList* x18626 = x18622;
                void* x18627 = g_list_nth_data(x18626, 0);
                struct CUSTOMERRecord* x18628 = (struct CUSTOMERRecord*){x18627};
                GList* x18629 = x18622;
                GList* x18630 = g_list_next(x18629);
                x18622 = x18630;
                int x18632 = x18628->C_CUSTKEY;
                /* VAR */ int ite53062 = 0;
                if((x18632==(x1752))) {
                  ite53062 = ((x18628->C_NATIONKEY)==(x1726));
                } else {
                  
                  ite53062 = 0;
                };
                int x49334 = ite53062;
                if(x49334) {
                  int x8133 = x63154;
                  struct CUSTOMERRecord_NATIONRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord_ORDERSRecord* x8134 = &(x63155[x8133]);
                  x8134->C_CUSTKEY = x18632;
                  x8134->C_NAME = (x18628->C_NAME);
                  x8134->C_ADDRESS = (x18628->C_ADDRESS);
                  x8134->C_NATIONKEY = (x18628->C_NATIONKEY);
                  x8134->C_PHONE = (x18628->C_PHONE);
                  x8134->C_ACCTBAL = (x18628->C_ACCTBAL);
                  x8134->C_MKTSEGMENT = (x18628->C_MKTSEGMENT);
                  x8134->C_COMMENT = (x18628->C_COMMENT);
                  x8134->N1_N_NATIONKEY = (x18742->N1_N_NATIONKEY);
                  x8134->N1_N_NAME = (x18742->N1_N_NAME);
                  x8134->N1_N_REGIONKEY = (x18742->N1_N_REGIONKEY);
                  x8134->N1_N_COMMENT = (x18742->N1_N_COMMENT);
                  x8134->N2_N_NATIONKEY = x1726;
                  x8134->N2_N_NAME = (x18742->N2_N_NAME);
                  x8134->N2_N_REGIONKEY = (x18742->N2_N_REGIONKEY);
                  x8134->N2_N_COMMENT = (x18742->N2_N_COMMENT);
                  x8134->S_SUPPKEY = (x18742->S_SUPPKEY);
                  x8134->S_NAME = (x18742->S_NAME);
                  x8134->S_ADDRESS = (x18742->S_ADDRESS);
                  x8134->S_NATIONKEY = (x18742->S_NATIONKEY);
                  x8134->S_PHONE = (x18742->S_PHONE);
                  x8134->S_ACCTBAL = (x18742->S_ACCTBAL);
                  x8134->S_COMMENT = (x18742->S_COMMENT);
                  x8134->L_ORDERKEY = x18746;
                  x8134->L_PARTKEY = (x18742->L_PARTKEY);
                  x8134->L_SUPPKEY = (x18742->L_SUPPKEY);
                  x8134->L_LINENUMBER = (x18742->L_LINENUMBER);
                  x8134->L_QUANTITY = (x18742->L_QUANTITY);
                  x8134->L_EXTENDEDPRICE = (x18742->L_EXTENDEDPRICE);
                  x8134->L_DISCOUNT = (x18742->L_DISCOUNT);
                  x8134->L_TAX = (x18742->L_TAX);
                  x8134->L_RETURNFLAG = (x18742->L_RETURNFLAG);
                  x8134->L_LINESTATUS = (x18742->L_LINESTATUS);
                  x8134->L_SHIPDATE = (x18742->L_SHIPDATE);
                  x8134->L_COMMITDATE = (x18742->L_COMMITDATE);
                  x8134->L_RECEIPTDATE = (x18742->L_RECEIPTDATE);
                  x8134->L_SHIPINSTRUCT = (x18742->L_SHIPINSTRUCT);
                  x8134->L_SHIPMODE = (x18742->L_SHIPMODE);
                  x8134->L_COMMENT = (x18742->L_COMMENT);
                  x8134->O_ORDERKEY = x532;
                  x8134->O_CUSTKEY = x1752;
                  x8134->O_ORDERSTATUS = (x530->O_ORDERSTATUS);
                  x8134->O_TOTALPRICE = (x530->O_TOTALPRICE);
                  x8134->O_ORDERDATE = (x530->O_ORDERDATE);
                  x8134->O_ORDERPRIORITY = (x530->O_ORDERPRIORITY);
                  x8134->O_CLERK = (x530->O_CLERK);
                  x8134->O_SHIPPRIORITY = (x530->O_SHIPPRIORITY);
                  x8134->O_COMMENT = (x530->O_COMMENT);
                  int x8183 = x63154;
                  x63154 = (x8183+(1));
                  int x8190 = x63171;
                  struct Q7GRPRecord* x8191 = &(x63172[x8190]);
                  x8191->SUPP_NATION = (x8134->N1_N_NAME);
                  x8191->CUST_NATION = (x8134->N2_N_NAME);
                  x8191->L_YEAR = ((x8134->L_SHIPDATE)/(10000));
                  int x8195 = x63171;
                  x63171 = (x8195+(1));
                  void* x18710 = g_hash_table_lookup(x63062, x8191);
                  /* VAR */ struct AGGRecord_Q7GRPRecord* ite49411 = 0;
                  if((x18710==(NULL))) {
                    int x49412 = x63188;
                    double* x49413 = x63189[x49412];
                    int x49414 = x63188;
                    x63188 = (x49414+(1));
                    int x49417 = x63200;
                    struct AGGRecord_Q7GRPRecord* x49418 = &(x63201[x49417]);
                    x49418->key = x8191;
                    x49418->aggs = x49413;
                    int x49421 = x63200;
                    x63200 = (x49421+(1));
                    g_hash_table_insert(x63062, x8191, x49418);
                    ite49411 = x49418;
                  } else {
                    
                    ite49411 = x18710;
                  };
                  struct AGGRecord_Q7GRPRecord* x18612 = ite49411;
                  double* x717 = x18612->aggs;
                  double x731 = x717[0];
                  *x717 = (x731+(((x8134->L_EXTENDEDPRICE)*((1.0-((x8134->L_DISCOUNT)))))));
                };
              };
            };
          };
        };
      };
      int x4168 = x63232;
      x63232 = (x4168+(1));
    };
    GList* x64397 = g_hash_table_get_keys(x63062);
    /* VAR */ GList* x64398 = x64397;
    int x64399 = g_hash_table_size(x63062);
    int x42699 = 0;
    for(; x42699 < x64399 ; x42699 += 1) {
      
      GList* x42700 = x64398;
      void* x42701 = g_list_nth_data(x42700, 0);
      GList* x42702 = g_list_next(x42700);
      x64398 = x42702;
      void* x42704 = g_hash_table_lookup(x63062, x42701);
      struct AGGRecord_Q7GRPRecord* x42706 = (struct AGGRecord_Q7GRPRecord*){x42704};
      g_tree_insert(x63317, x42706, x42706);
    };
    while(1) {
      
      int x4177 = x63318;
      int x762 = !(x4177);
      /* VAR */ int ite53205 = 0;
      if(x762) {
        int x64424 = g_tree_nnodes(x63317);
        ite53205 = (x64424!=(0));
      } else {
        
        ite53205 = 0;
      };
      int x49470 = ite53205;
      if (!(x49470)) break; 
      
      void* x19043 = NULL;
      void** x19051 = &(x19043);
      g_tree_foreach(x63317, x19050, x19051);
      struct AGGRecord_Q7GRPRecord* x19053 = (struct AGGRecord_Q7GRPRecord*){x19043};
      int x19054 = g_tree_remove(x63317, x19053);
      if(0) {
        x63318 = 1;
      } else {
        
        struct Q7GRPRecord* x775 = x19053->key;
        double x782 = ((double*) { x19053->aggs })[0];
        printf("%s|%s|%d|%.4f\n", (x775->SUPP_NATION), (x775->CUST_NATION), (x775->L_YEAR), x782);
        int x4199 = x63319;
        x63319 = (x4199+(1));
      };
    };
    int x64454 = x63319;
    printf("(%d rows)\n", x64454);
    struct timeval* x64456 = &x63224;
    gettimeofday(x64456, NULL);
    struct timeval* x64458 = &x63220;
    struct timeval* x64459 = &x63224;
    struct timeval* x64460 = &x63222;
    long x64461 = timeval_subtract(x64458, x64459, x64460);
    printf("Generated code run in %ld milliseconds.\n", x64461);
  };
}
/* ----------- FUNCTIONS ----------- */
int x62997(struct Q7GRPRecord* x17781) {
  char* x31504 = x17781->SUPP_NATION;
  int x37451 = strlen(x31504);
  /* VAR */ int x33473 = 0;
  /* VAR */ int x33474 = 0;
  while(1) {
    
    int x33475 = x33473;
    if (!((x33475<(x37451)))) break; 
    
    int x33477 = x33474;
    int x33478 = x33473;
    char* x37459 = pointer_add(x31504, x33478);
    char x37460 = *(x37459);
    x33474 = (x33477+(x37460));
    int x33483 = x33473;
    x33473 = (x33483+(1));
  };
  int x33487 = x33474;
  char* x31506 = x17781->CUST_NATION;
  int x37469 = strlen(x31506);
  /* VAR */ int x33490 = 0;
  /* VAR */ int x33491 = 0;
  while(1) {
    
    int x33492 = x33490;
    if (!((x33492<(x37469)))) break; 
    
    int x33494 = x33491;
    int x33495 = x33490;
    char* x37477 = pointer_add(x31506, x33495);
    char x37478 = *(x37477);
    x33491 = (x33494+(x37478));
    int x33500 = x33490;
    x33490 = (x33500+(1));
  };
  int x33504 = x33491;
  return ((x33487+(x33504))+((x17781->L_YEAR))); 
}

int x63036(struct Q7GRPRecord* x17786, struct Q7GRPRecord* x17787) {
  int x33513 = strcmp((x17786->SUPP_NATION), (x17787->SUPP_NATION));
  int x33514 = !(x33513);
  int x33517 = strcmp((x17786->CUST_NATION), (x17787->CUST_NATION));
  int x33518 = !(x33517);
  /* VAR */ int ite51825 = 0;
  if(x33514) {
    ite51825 = x33518;
  } else {
    
    ite51825 = 0;
  };
  int x48163 = ite51825;
  /* VAR */ int ite51832 = 0;
  if(x48163) {
    ite51832 = ((x17786->L_YEAR)==((x17787->L_YEAR)));
  } else {
    
    ite51832 = 0;
  };
  int x48165 = ite51832;
  return x48165; 
}

int x63063(void* x15066) {
  int x15067 = g_direct_hash(x15066);
  return x15067; 
}

int x63066(void* x15069, void* x15070) {
  int x15071 = g_direct_equal(x15069, x15070);
  return x15071; 
}

int x63073(void* x15076) {
  int x15077 = g_direct_hash(x15076);
  return x15077; 
}

int x63076(void* x15079, void* x15080) {
  int x15081 = g_direct_equal(x15079, x15080);
  return x15081; 
}

int x63083(void* x15086) {
  int x15087 = g_direct_hash(x15086);
  return x15087; 
}

int x63086(void* x15089, void* x15090) {
  int x15091 = g_direct_equal(x15089, x15090);
  return x15091; 
}

int x63093(void* x15096) {
  int x15097 = g_direct_hash(x15096);
  return x15097; 
}

int x63096(void* x15099, void* x15100) {
  int x15101 = g_direct_equal(x15099, x15100);
  return x15101; 
}

int x63275(struct AGGRecord_Q7GRPRecord* x344, struct AGGRecord_Q7GRPRecord* x345) {
  struct Q7GRPRecord* x346 = x344->key;
  struct Q7GRPRecord* x347 = x345->key;
  int x37705 = strcmp((x346->SUPP_NATION), (x347->SUPP_NATION));
  /* VAR */ int ite48389 = 0;
  if((x37705!=(0))) {
    ite48389 = x37705;
  } else {
    
    int x48393 = strcmp((x346->CUST_NATION), (x347->CUST_NATION));
    /* VAR */ int ite48396 = 0;
    if((x48393!=(0))) {
      ite48396 = x48393;
    } else {
      
      int x48398 = x346->L_YEAR;
      int x48399 = x347->L_YEAR;
      /* VAR */ int ite48402 = 0;
      if((x48398<(x48399))) {
        ite48402 = -1;
      } else {
        
        /* VAR */ int ite48406 = 0;
        if((x48398>(x48399))) {
          ite48406 = 1;
        } else {
          
          ite48406 = 0;
        };
        int x48405 = ite48406;
        ite48402 = x48405;
      };
      int x48401 = ite48402;
      ite48396 = x48401;
    };
    int x48395 = ite48396;
    ite48389 = x48395;
  };
  int x363 = ite48389;
  return x363; 
}

int x19050(void* x19044, void* x19045, void* x19046) {
  pointer_assign(((struct AGGRecord_Q7GRPRecord**){x19046}), ((struct AGGRecord_Q7GRPRecord*){x19045}));
  return 1; 
}
