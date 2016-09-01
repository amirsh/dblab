#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct NATIONRecord_SUPPLIERRecord;
  struct LINEITEMRecord;
  struct AGGRecord_OptimalString;
  struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord;
  struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord;
  struct NATIONRecord;
  struct ORDERSRecord;
  struct SUPPLIERRecord;
  
  struct NATIONRecord_SUPPLIERRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
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
  
  struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
  };
  
  struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
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
  
  struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
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
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  };
  
  


int x48542(char* x11819);

int x48560(char* x11824, char* x11825);

int x48566(void* x9720);

int x48569(void* x9723, void* x9724);

int x48576(void* x9730);

int x48579(void* x9733, void* x9734);

int x48586(void* x9740);

int x48589(void* x9743, void* x9744);

int x48596(void* x9750);

int x48599(void* x9753, void* x9754);

int x48606(void* x9760);

int x48609(void* x9763, void* x9764);

int x48654(struct AGGRecord_OptimalString* x294, struct AGGRecord_OptimalString* x295);

int x12943(void* x12937, void* x12938, void* x12939);
/* GLOBAL VARS */

struct timeval x5123;
int main(int argc, char** argv) {
  FILE* x5867 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x5868 = 0;
  int x5869 = x5868;
  int* x5870 = &x5869;
  int x5871 = fscanf(x5867, "%d", x5870);
  pclose(x5867);
  struct LINEITEMRecord* x7523 = (struct LINEITEMRecord*)malloc(x5869 * sizeof(struct LINEITEMRecord));
  memset(x7523, 0, x5869 * sizeof(struct LINEITEMRecord));
  int x5875 = O_RDONLY;
  int x5876 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x5875);
  struct stat x5877 = (struct stat){0};
  /* VAR */ struct stat x5878 = x5877;
  struct stat x5879 = x5878;
  struct stat* x5880 = &x5879;
  int x5881 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x5880);
  size_t x5882 = x5880->st_size;
  int x5883 = PROT_READ;
  int x5884 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x5882, x5883, x5884, x5876, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x5869);
    /* VAR */ int ite38782 = 0;
    if(x6) {
      char x46385 = *x3;
      int x46386 = x46385!=('\0');
      ite38782 = x46386;
    } else {
      
      ite38782 = 0;
    };
    int x35227 = ite38782;
    if (!(x35227)) break; 
    
    /* VAR */ int x5892 = 0;
    int x5893 = x5892;
    int* x5894 = &x5893;
    char* x5895 = strntoi_unchecked(x3, x5894);
    x3 = x5895;
    /* VAR */ int x5897 = 0;
    int x5898 = x5897;
    int* x5899 = &x5898;
    char* x5900 = strntoi_unchecked(x3, x5899);
    x3 = x5900;
    /* VAR */ int x5902 = 0;
    int x5903 = x5902;
    int* x5904 = &x5903;
    char* x5905 = strntoi_unchecked(x3, x5904);
    x3 = x5905;
    /* VAR */ int x5907 = 0;
    int x5908 = x5907;
    int* x5909 = &x5908;
    char* x5910 = strntoi_unchecked(x3, x5909);
    x3 = x5910;
    /* VAR */ double x5912 = 0.0;
    double x5913 = x5912;
    double* x5914 = &x5913;
    char* x5915 = strntod_unchecked(x3, x5914);
    x3 = x5915;
    /* VAR */ double x5917 = 0.0;
    double x5918 = x5917;
    double* x5919 = &x5918;
    char* x5920 = strntod_unchecked(x3, x5919);
    x3 = x5920;
    /* VAR */ double x5922 = 0.0;
    double x5923 = x5922;
    double* x5924 = &x5923;
    char* x5925 = strntod_unchecked(x3, x5924);
    x3 = x5925;
    /* VAR */ double x5927 = 0.0;
    double x5928 = x5927;
    double* x5929 = &x5928;
    char* x5930 = strntod_unchecked(x3, x5929);
    x3 = x5930;
    char x5932 = *x3;
    /* VAR */ char x5933 = x5932;
    x3 += 1;
    x3 += 1;
    char x5936 = x5933;
    char x5937 = *x3;
    /* VAR */ char x5938 = x5937;
    x3 += 1;
    x3 += 1;
    char x5941 = x5938;
    /* VAR */ int x5942 = 0;
    int x5943 = x5942;
    int* x5944 = &x5943;
    char* x5945 = strntoi_unchecked(x3, x5944);
    x3 = x5945;
    /* VAR */ int x5947 = 0;
    int x5948 = x5947;
    int* x5949 = &x5948;
    char* x5950 = strntoi_unchecked(x3, x5949);
    x3 = x5950;
    /* VAR */ int x5952 = 0;
    int x5953 = x5952;
    int* x5954 = &x5953;
    char* x5955 = strntoi_unchecked(x3, x5954);
    x3 = x5955;
    int x5957 = x5943*(10000);
    int x5958 = x5948*(100);
    int x5959 = x5957+(x5958);
    int x5960 = x5959+(x5953);
    /* VAR */ int x5961 = 0;
    int x5962 = x5961;
    int* x5963 = &x5962;
    char* x5964 = strntoi_unchecked(x3, x5963);
    x3 = x5964;
    /* VAR */ int x5966 = 0;
    int x5967 = x5966;
    int* x5968 = &x5967;
    char* x5969 = strntoi_unchecked(x3, x5968);
    x3 = x5969;
    /* VAR */ int x5971 = 0;
    int x5972 = x5971;
    int* x5973 = &x5972;
    char* x5974 = strntoi_unchecked(x3, x5973);
    x3 = x5974;
    int x5976 = x5962*(10000);
    int x5977 = x5967*(100);
    int x5978 = x5976+(x5977);
    int x5979 = x5978+(x5972);
    /* VAR */ int x5980 = 0;
    int x5981 = x5980;
    int* x5982 = &x5981;
    char* x5983 = strntoi_unchecked(x3, x5982);
    x3 = x5983;
    /* VAR */ int x5985 = 0;
    int x5986 = x5985;
    int* x5987 = &x5986;
    char* x5988 = strntoi_unchecked(x3, x5987);
    x3 = x5988;
    /* VAR */ int x5990 = 0;
    int x5991 = x5990;
    int* x5992 = &x5991;
    char* x5993 = strntoi_unchecked(x3, x5992);
    x3 = x5993;
    int x5995 = x5981*(10000);
    int x5996 = x5986*(100);
    int x5997 = x5995+(x5996);
    int x5998 = x5997+(x5991);
    char* x7649 = (char*)malloc(26 * sizeof(char));
    memset(x7649, 0, 26 * sizeof(char));
    /* VAR */ char* x6000 = x3;
    while(1) {
      
      char x6001 = *x3;
      int x6002 = x6001!=('|');
      /* VAR */ int ite38903 = 0;
      if(x6002) {
        char x46505 = *x3;
        int x46506 = x46505!=('\n');
        ite38903 = x46506;
      } else {
        
        ite38903 = 0;
      };
      int x35341 = ite38903;
      if (!(x35341)) break; 
      
      x3 += 1;
    };
    char* x6008 = x6000;
    int x6009 = x3 - x6008;
    char* x6010 = x6000;
    char* x6011 = strncpy(x7649, x6010, x6009);
    x3 += 1;
    char* x7667 = (char*)malloc(11 * sizeof(char));
    memset(x7667, 0, 11 * sizeof(char));
    /* VAR */ char* x6019 = x3;
    while(1) {
      
      char x6020 = *x3;
      int x6021 = x6020!=('|');
      /* VAR */ int ite38926 = 0;
      if(x6021) {
        char x46527 = *x3;
        int x46528 = x46527!=('\n');
        ite38926 = x46528;
      } else {
        
        ite38926 = 0;
      };
      int x35357 = ite38926;
      if (!(x35357)) break; 
      
      x3 += 1;
    };
    char* x6027 = x6019;
    int x6028 = x3 - x6027;
    char* x6029 = x6019;
    char* x6030 = strncpy(x7667, x6029, x6028);
    x3 += 1;
    char* x7685 = (char*)malloc(45 * sizeof(char));
    memset(x7685, 0, 45 * sizeof(char));
    /* VAR */ char* x6038 = x3;
    while(1) {
      
      char x6039 = *x3;
      int x6040 = x6039!=('|');
      /* VAR */ int ite38949 = 0;
      if(x6040) {
        char x46549 = *x3;
        int x46550 = x46549!=('\n');
        ite38949 = x46550;
      } else {
        
        ite38949 = 0;
      };
      int x35373 = ite38949;
      if (!(x35373)) break; 
      
      x3 += 1;
    };
    char* x6046 = x6038;
    int x6047 = x3 - x6046;
    char* x6048 = x6038;
    char* x6049 = strncpy(x7685, x6048, x6047);
    x3 += 1;
    struct LINEITEMRecord* x8528 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x8528, 0, 1 * sizeof(struct LINEITEMRecord));
    x8528->L_ORDERKEY = x5893; x8528->L_PARTKEY = x5898; x8528->L_SUPPKEY = x5903; x8528->L_LINENUMBER = x5908; x8528->L_QUANTITY = x5913; x8528->L_EXTENDEDPRICE = x5918; x8528->L_DISCOUNT = x5923; x8528->L_TAX = x5928; x8528->L_RETURNFLAG = x5936; x8528->L_LINESTATUS = x5941; x8528->L_SHIPDATE = x5960; x8528->L_COMMITDATE = x5979; x8528->L_RECEIPTDATE = x5998; x8528->L_SHIPINSTRUCT = x7649; x8528->L_SHIPMODE = x7667; x8528->L_COMMENT = x7685;
    int x47 = x4;
    struct LINEITEMRecord x7705 = *x8528;
    *(x7523 + x47) = x7705;
    struct LINEITEMRecord* x7707 = &(x7523[x47]);
    x8528 = x7707;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x6062 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x6063 = 0;
  int x6064 = x6063;
  int* x6065 = &x6064;
  int x6066 = fscanf(x6062, "%d", x6065);
  pclose(x6062);
  struct SUPPLIERRecord* x7718 = (struct SUPPLIERRecord*)malloc(x6064 * sizeof(struct SUPPLIERRecord));
  memset(x7718, 0, x6064 * sizeof(struct SUPPLIERRecord));
  int x6070 = O_RDONLY;
  int x6071 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x6070);
  /* VAR */ struct stat x6072 = x5877;
  struct stat x6073 = x6072;
  struct stat* x6074 = &x6073;
  int x6075 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x6074);
  size_t x6076 = x6074->st_size;
  int x6077 = PROT_READ;
  int x6078 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x6076, x6077, x6078, x6071, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x6064);
    /* VAR */ int ite38999 = 0;
    if(x58) {
      char x46598 = *x55;
      int x46599 = x46598!=('\0');
      ite38999 = x46599;
    } else {
      
      ite38999 = 0;
    };
    int x35416 = ite38999;
    if (!(x35416)) break; 
    
    /* VAR */ int x6086 = 0;
    int x6087 = x6086;
    int* x6088 = &x6087;
    char* x6089 = strntoi_unchecked(x55, x6088);
    x55 = x6089;
    char* x7741 = (char*)malloc(26 * sizeof(char));
    memset(x7741, 0, 26 * sizeof(char));
    /* VAR */ char* x6092 = x55;
    while(1) {
      
      char x6093 = *x55;
      int x6094 = x6093!=('|');
      /* VAR */ int ite39018 = 0;
      if(x6094) {
        char x46616 = *x55;
        int x46617 = x46616!=('\n');
        ite39018 = x46617;
      } else {
        
        ite39018 = 0;
      };
      int x35428 = ite39018;
      if (!(x35428)) break; 
      
      x55 += 1;
    };
    char* x6100 = x6092;
    int x6101 = x55 - x6100;
    char* x6102 = x6092;
    char* x6103 = strncpy(x7741, x6102, x6101);
    x55 += 1;
    char* x7759 = (char*)malloc(41 * sizeof(char));
    memset(x7759, 0, 41 * sizeof(char));
    /* VAR */ char* x6111 = x55;
    while(1) {
      
      char x6112 = *x55;
      int x6113 = x6112!=('|');
      /* VAR */ int ite39041 = 0;
      if(x6113) {
        char x46638 = *x55;
        int x46639 = x46638!=('\n');
        ite39041 = x46639;
      } else {
        
        ite39041 = 0;
      };
      int x35444 = ite39041;
      if (!(x35444)) break; 
      
      x55 += 1;
    };
    char* x6119 = x6111;
    int x6120 = x55 - x6119;
    char* x6121 = x6111;
    char* x6122 = strncpy(x7759, x6121, x6120);
    x55 += 1;
    /* VAR */ int x6129 = 0;
    int x6130 = x6129;
    int* x6131 = &x6130;
    char* x6132 = strntoi_unchecked(x55, x6131);
    x55 = x6132;
    char* x7782 = (char*)malloc(16 * sizeof(char));
    memset(x7782, 0, 16 * sizeof(char));
    /* VAR */ char* x6135 = x55;
    while(1) {
      
      char x6136 = *x55;
      int x6137 = x6136!=('|');
      /* VAR */ int ite39069 = 0;
      if(x6137) {
        char x46665 = *x55;
        int x46666 = x46665!=('\n');
        ite39069 = x46666;
      } else {
        
        ite39069 = 0;
      };
      int x35465 = ite39069;
      if (!(x35465)) break; 
      
      x55 += 1;
    };
    char* x6143 = x6135;
    int x6144 = x55 - x6143;
    char* x6145 = x6135;
    char* x6146 = strncpy(x7782, x6145, x6144);
    x55 += 1;
    /* VAR */ double x6153 = 0.0;
    double x6154 = x6153;
    double* x6155 = &x6154;
    char* x6156 = strntod_unchecked(x55, x6155);
    x55 = x6156;
    char* x7805 = (char*)malloc(102 * sizeof(char));
    memset(x7805, 0, 102 * sizeof(char));
    /* VAR */ char* x6159 = x55;
    while(1) {
      
      char x6160 = *x55;
      int x6161 = x6160!=('|');
      /* VAR */ int ite39097 = 0;
      if(x6161) {
        char x46692 = *x55;
        int x46693 = x46692!=('\n');
        ite39097 = x46693;
      } else {
        
        ite39097 = 0;
      };
      int x35486 = ite39097;
      if (!(x35486)) break; 
      
      x55 += 1;
    };
    char* x6167 = x6159;
    int x6168 = x55 - x6167;
    char* x6169 = x6159;
    char* x6170 = strncpy(x7805, x6169, x6168);
    x55 += 1;
    struct SUPPLIERRecord* x8650 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x8650, 0, 1 * sizeof(struct SUPPLIERRecord));
    x8650->S_SUPPKEY = x6087; x8650->S_NAME = x7741; x8650->S_ADDRESS = x7759; x8650->S_NATIONKEY = x6130; x8650->S_PHONE = x7782; x8650->S_ACCTBAL = x6154; x8650->S_COMMENT = x7805;
    int x97 = x56;
    struct SUPPLIERRecord x7825 = *x8650;
    *(x7718 + x97) = x7825;
    struct SUPPLIERRecord* x7827 = &(x7718[x97]);
    x8650 = x7827;
    int x99 = x56;
    int x100 = x99+(1);
    x56 = x100;
  };
  FILE* x6183 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x6184 = 0;
  int x6185 = x6184;
  int* x6186 = &x6185;
  int x6187 = fscanf(x6183, "%d", x6186);
  pclose(x6183);
  struct ORDERSRecord* x7838 = (struct ORDERSRecord*)malloc(x6185 * sizeof(struct ORDERSRecord));
  memset(x7838, 0, x6185 * sizeof(struct ORDERSRecord));
  int x6191 = O_RDONLY;
  int x6192 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x6191);
  /* VAR */ struct stat x6193 = x5877;
  struct stat x6194 = x6193;
  struct stat* x6195 = &x6194;
  int x6196 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x6195);
  size_t x6197 = x6195->st_size;
  int x6198 = PROT_READ;
  int x6199 = MAP_PRIVATE;
  char* x105 = mmap(NULL, x6197, x6198, x6199, x6192, 0);
  /* VAR */ int x106 = 0;
  while(1) {
    
    int x107 = x106;
    int x108 = x107<(x6185);
    /* VAR */ int ite39147 = 0;
    if(x108) {
      char x46741 = *x105;
      int x46742 = x46741!=('\0');
      ite39147 = x46742;
    } else {
      
      ite39147 = 0;
    };
    int x35529 = ite39147;
    if (!(x35529)) break; 
    
    /* VAR */ int x6207 = 0;
    int x6208 = x6207;
    int* x6209 = &x6208;
    char* x6210 = strntoi_unchecked(x105, x6209);
    x105 = x6210;
    /* VAR */ int x6212 = 0;
    int x6213 = x6212;
    int* x6214 = &x6213;
    char* x6215 = strntoi_unchecked(x105, x6214);
    x105 = x6215;
    char x6217 = *x105;
    /* VAR */ char x6218 = x6217;
    x105 += 1;
    x105 += 1;
    char x6221 = x6218;
    /* VAR */ double x6222 = 0.0;
    double x6223 = x6222;
    double* x6224 = &x6223;
    char* x6225 = strntod_unchecked(x105, x6224);
    x105 = x6225;
    /* VAR */ int x6227 = 0;
    int x6228 = x6227;
    int* x6229 = &x6228;
    char* x6230 = strntoi_unchecked(x105, x6229);
    x105 = x6230;
    /* VAR */ int x6232 = 0;
    int x6233 = x6232;
    int* x6234 = &x6233;
    char* x6235 = strntoi_unchecked(x105, x6234);
    x105 = x6235;
    /* VAR */ int x6237 = 0;
    int x6238 = x6237;
    int* x6239 = &x6238;
    char* x6240 = strntoi_unchecked(x105, x6239);
    x105 = x6240;
    int x6242 = x6228*(10000);
    int x6243 = x6233*(100);
    int x6244 = x6242+(x6243);
    int x6245 = x6244+(x6238);
    char* x7895 = (char*)malloc(16 * sizeof(char));
    memset(x7895, 0, 16 * sizeof(char));
    /* VAR */ char* x6247 = x105;
    while(1) {
      
      char x6248 = *x105;
      int x6249 = x6248!=('|');
      /* VAR */ int ite39200 = 0;
      if(x6249) {
        char x46793 = *x105;
        int x46794 = x46793!=('\n');
        ite39200 = x46794;
      } else {
        
        ite39200 = 0;
      };
      int x35575 = ite39200;
      if (!(x35575)) break; 
      
      x105 += 1;
    };
    char* x6255 = x6247;
    int x6256 = x105 - x6255;
    char* x6257 = x6247;
    char* x6258 = strncpy(x7895, x6257, x6256);
    x105 += 1;
    char* x7913 = (char*)malloc(16 * sizeof(char));
    memset(x7913, 0, 16 * sizeof(char));
    /* VAR */ char* x6266 = x105;
    while(1) {
      
      char x6267 = *x105;
      int x6268 = x6267!=('|');
      /* VAR */ int ite39223 = 0;
      if(x6268) {
        char x46815 = *x105;
        int x46816 = x46815!=('\n');
        ite39223 = x46816;
      } else {
        
        ite39223 = 0;
      };
      int x35591 = ite39223;
      if (!(x35591)) break; 
      
      x105 += 1;
    };
    char* x6274 = x6266;
    int x6275 = x105 - x6274;
    char* x6276 = x6266;
    char* x6277 = strncpy(x7913, x6276, x6275);
    x105 += 1;
    /* VAR */ int x6284 = 0;
    int x6285 = x6284;
    int* x6286 = &x6285;
    char* x6287 = strntoi_unchecked(x105, x6286);
    x105 = x6287;
    char* x7936 = (char*)malloc(80 * sizeof(char));
    memset(x7936, 0, 80 * sizeof(char));
    /* VAR */ char* x6290 = x105;
    while(1) {
      
      char x6291 = *x105;
      int x6292 = x6291!=('|');
      /* VAR */ int ite39251 = 0;
      if(x6292) {
        char x46842 = *x105;
        int x46843 = x46842!=('\n');
        ite39251 = x46843;
      } else {
        
        ite39251 = 0;
      };
      int x35612 = ite39251;
      if (!(x35612)) break; 
      
      x105 += 1;
    };
    char* x6298 = x6290;
    int x6299 = x105 - x6298;
    char* x6300 = x6290;
    char* x6301 = strncpy(x7936, x6300, x6299);
    x105 += 1;
    struct ORDERSRecord* x8783 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x8783, 0, 1 * sizeof(struct ORDERSRecord));
    x8783->O_ORDERKEY = x6208; x8783->O_CUSTKEY = x6213; x8783->O_ORDERSTATUS = x6221; x8783->O_TOTALPRICE = x6223; x8783->O_ORDERDATE = x6245; x8783->O_ORDERPRIORITY = x7895; x8783->O_CLERK = x7913; x8783->O_SHIPPRIORITY = x6285; x8783->O_COMMENT = x7936;
    int x141 = x106;
    struct ORDERSRecord x7956 = *x8783;
    *(x7838 + x141) = x7956;
    struct ORDERSRecord* x7958 = &(x7838[x141]);
    x8783 = x7958;
    int x143 = x106;
    int x144 = x143+(1);
    x106 = x144;
  };
  FILE* x6314 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x6315 = 0;
  int x6316 = x6315;
  int* x6317 = &x6316;
  int x6318 = fscanf(x6314, "%d", x6317);
  pclose(x6314);
  struct NATIONRecord* x7969 = (struct NATIONRecord*)malloc(x6316 * sizeof(struct NATIONRecord));
  memset(x7969, 0, x6316 * sizeof(struct NATIONRecord));
  int x6322 = O_RDONLY;
  int x6323 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x6322);
  /* VAR */ struct stat x6324 = x5877;
  struct stat x6325 = x6324;
  struct stat* x6326 = &x6325;
  int x6327 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x6326);
  size_t x6328 = x6326->st_size;
  int x6329 = PROT_READ;
  int x6330 = MAP_PRIVATE;
  char* x149 = mmap(NULL, x6328, x6329, x6330, x6323, 0);
  /* VAR */ int x150 = 0;
  while(1) {
    
    int x151 = x150;
    int x152 = x151<(x6316);
    /* VAR */ int ite39301 = 0;
    if(x152) {
      char x46891 = *x149;
      int x46892 = x46891!=('\0');
      ite39301 = x46892;
    } else {
      
      ite39301 = 0;
    };
    int x35655 = ite39301;
    if (!(x35655)) break; 
    
    /* VAR */ int x6338 = 0;
    int x6339 = x6338;
    int* x6340 = &x6339;
    char* x6341 = strntoi_unchecked(x149, x6340);
    x149 = x6341;
    char* x7992 = (char*)malloc(26 * sizeof(char));
    memset(x7992, 0, 26 * sizeof(char));
    /* VAR */ char* x6344 = x149;
    while(1) {
      
      char x6345 = *x149;
      int x6346 = x6345!=('|');
      /* VAR */ int ite39320 = 0;
      if(x6346) {
        char x46909 = *x149;
        int x46910 = x46909!=('\n');
        ite39320 = x46910;
      } else {
        
        ite39320 = 0;
      };
      int x35667 = ite39320;
      if (!(x35667)) break; 
      
      x149 += 1;
    };
    char* x6352 = x6344;
    int x6353 = x149 - x6352;
    char* x6354 = x6344;
    char* x6355 = strncpy(x7992, x6354, x6353);
    x149 += 1;
    /* VAR */ int x6362 = 0;
    int x6363 = x6362;
    int* x6364 = &x6363;
    char* x6365 = strntoi_unchecked(x149, x6364);
    x149 = x6365;
    char* x8015 = (char*)malloc(153 * sizeof(char));
    memset(x8015, 0, 153 * sizeof(char));
    /* VAR */ char* x6368 = x149;
    while(1) {
      
      char x6369 = *x149;
      int x6370 = x6369!=('|');
      /* VAR */ int ite39348 = 0;
      if(x6370) {
        char x46936 = *x149;
        int x46937 = x46936!=('\n');
        ite39348 = x46937;
      } else {
        
        ite39348 = 0;
      };
      int x35688 = ite39348;
      if (!(x35688)) break; 
      
      x149 += 1;
    };
    char* x6376 = x6368;
    int x6377 = x149 - x6376;
    char* x6378 = x6368;
    char* x6379 = strncpy(x8015, x6378, x6377);
    x149 += 1;
    struct NATIONRecord* x8864 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x8864, 0, 1 * sizeof(struct NATIONRecord));
    x8864->N_NATIONKEY = x6339; x8864->N_NAME = x7992; x8864->N_REGIONKEY = x6363; x8864->N_COMMENT = x8015;
    int x174 = x150;
    struct NATIONRecord x8035 = *x8864;
    *(x7969 + x174) = x8035;
    struct NATIONRecord* x8037 = &(x7969[x174]);
    x8864 = x8037;
    int x176 = x150;
    int x177 = x176+(1);
    x150 = x177;
  };
  int x181 = 0;
  for(; x181 < 1 ; x181 += 1) {
    
    GHashTable* x48565 = g_hash_table_new(x48542, x48560);
    void*** x48573 = (void***){x48566};
    int* x48574 = (int*){x48569};
    GHashTable* x48575 = g_hash_table_new(x48573, x48574);
    void*** x48583 = (void***){x48576};
    int* x48584 = (int*){x48579};
    GHashTable* x48585 = g_hash_table_new(x48583, x48584);
    void*** x48593 = (void***){x48586};
    int* x48594 = (int*){x48589};
    GHashTable* x48595 = g_hash_table_new(x48593, x48594);
    void*** x48603 = (void***){x48596};
    int* x48604 = (int*){x48599};
    GHashTable* x48605 = g_hash_table_new(x48603, x48604);
    void*** x48613 = (void***){x48606};
    int* x48614 = (int*){x48609};
    GHashTable* x48615 = g_hash_table_new(x48613, x48614);
    /* VAR */ struct timeval x48616 = x5123;
    struct timeval x48617 = x48616;
    /* VAR */ struct timeval x48618 = x5123;
    struct timeval x48619 = x48618;
    /* VAR */ struct timeval x48620 = x5123;
    struct timeval x48621 = x48620;
    struct timeval* x48622 = &x48619;
    gettimeofday(x48622, NULL);
    /* VAR */ int x48624 = 0;
    /* VAR */ int x48625 = 0;
    /* VAR */ int x48626 = 0;
    /* VAR */ int x48627 = 0;
    /* VAR */ int x48628 = 0;
    /* VAR */ int x48629 = 0;
    int* x48678 = &(x48654);
    GTree* x48679 = g_tree_new(x48678);
    /* VAR */ int x48680 = 0;
    /* VAR */ int x48681 = 0;
    while(1) {
      
      int x48683 = x48629;
      int x48684 = x48683<(x6185);
      if (!(x48684)) break; 
      
      int x2798 = x48629;
      struct ORDERSRecord* x323 = &(x7838[x2798]);
      char x325 = x323->O_ORDERSTATUS;
      int x326 = x325==('F');
      if(x326) {
        int x327 = x323->O_ORDERKEY;
        void* x9812 = (void*){x327};
        void* x9813 = (void*){x323};
        void* x9814 = g_hash_table_lookup(x48575, x9812);
        GList** x9815 = (GList**){x9814};
        GList** x9816 = NULL;
        int x9817 = x9815==(x9816);
        /* VAR */ GList** ite37391 = 0;
        if(x9817) {
          GList** x37392 = malloc(8);
          GList* x37393 = NULL;
          pointer_assign(x37392, x37393);
          ite37391 = x37392;
        } else {
          
          ite37391 = x9815;
        };
        GList** x9821 = ite37391;
        GList* x9822 = *(x9821);
        GList* x9823 = g_list_prepend(x9822, x9813);
        pointer_assign(x9821, x9823);
        void* x9825 = (void*){x9821};
        g_hash_table_insert(x48575, x9812, x9825);
      };
      int x2806 = x48629;
      int x332 = x2806+(1);
      x48629 = x332;
    };
    while(1) {
      
      int x48715 = x48625;
      int x48716 = x48715<(x5869);
      if (!(x48716)) break; 
      
      int x2815 = x48625;
      struct LINEITEMRecord* x341 = &(x7523[x2815]);
      int x343 = x341->L_ORDERKEY;
      void* x9837 = (void*){x343};
      void* x9838 = (void*){x341};
      void* x9839 = g_hash_table_lookup(x48595, x9837);
      GList** x9840 = (GList**){x9839};
      GList** x9841 = NULL;
      int x9842 = x9840==(x9841);
      /* VAR */ GList** ite37419 = 0;
      if(x9842) {
        GList** x37420 = malloc(8);
        GList* x37421 = NULL;
        pointer_assign(x37420, x37421);
        ite37419 = x37420;
      } else {
        
        ite37419 = x9840;
      };
      GList** x9846 = ite37419;
      GList* x9847 = *(x9846);
      GList* x9848 = g_list_prepend(x9847, x9838);
      pointer_assign(x9846, x9848);
      void* x9850 = (void*){x9846};
      g_hash_table_insert(x48595, x9837, x9850);
      int x2820 = x48625;
      int x347 = x2820+(1);
      x48625 = x347;
    };
    while(1) {
      
      int x48744 = x48628;
      int x48745 = x48744<(x6316);
      if (!(x48745)) break; 
      
      int x2829 = x48628;
      struct NATIONRecord* x356 = &(x7969[x2829]);
      char* x358 = x356->N_NAME;
      int x27195 = strcmp(x358, "MOROCCO");
      int x27196 = x27195==(0);
      if(x27196) {
        int x360 = x356->N_NATIONKEY;
        void* x9865 = (void*){x360};
        void* x9866 = (void*){x356};
        void* x9867 = g_hash_table_lookup(x48615, x9865);
        GList** x9868 = (GList**){x9867};
        GList** x9869 = NULL;
        int x9870 = x9868==(x9869);
        /* VAR */ GList** ite37451 = 0;
        if(x9870) {
          GList** x37452 = malloc(8);
          GList* x37453 = NULL;
          pointer_assign(x37452, x37453);
          ite37451 = x37452;
        } else {
          
          ite37451 = x9868;
        };
        GList** x9874 = ite37451;
        GList* x9875 = *(x9874);
        GList* x9876 = g_list_prepend(x9875, x9866);
        pointer_assign(x9874, x9876);
        void* x9878 = (void*){x9874};
        g_hash_table_insert(x48615, x9865, x9878);
      };
      int x2837 = x48628;
      int x365 = x2837+(1);
      x48628 = x365;
    };
    while(1) {
      
      int x48777 = x48627;
      int x48778 = x48777<(x6064);
      if (!(x48778)) break; 
      
      int x2846 = x48627;
      struct SUPPLIERRecord* x374 = &(x7718[x2846]);
      int x376 = x374->S_NATIONKEY;
      void* x9890 = (void*){x376};
      void* x9891 = g_hash_table_lookup(x48615, x9890);
      GList** x9892 = (GList**){x9891};
      int x20489 = x9892!=(NULL);
      if(x20489) {
        GList* x12054 = *(x9892);
        /* VAR */ GList* x12055 = x12054;
        while(1) {
          
          GList* x12056 = x12055;
          GList* x12057 = NULL;
          int x12058 = x12056!=(x12057);
          if (!(x12058)) break; 
          
          GList* x12059 = x12055;
          void* x12060 = g_list_nth_data(x12059, 0);
          struct NATIONRecord* x12061 = (struct NATIONRecord*){x12060};
          GList* x12062 = x12055;
          GList* x12063 = g_list_next(x12062);
          x12055 = x12063;
          int x12065 = x12061->N_NATIONKEY;
          int x12066 = x12065==(x376);
          if(x12066) {
            char* x1149 = x12061->N_NAME;
            int x1150 = x12061->N_REGIONKEY;
            char* x1151 = x12061->N_COMMENT;
            int x1152 = x374->S_SUPPKEY;
            char* x1153 = x374->S_NAME;
            char* x1154 = x374->S_ADDRESS;
            char* x1155 = x374->S_PHONE;
            double x1156 = x374->S_ACCTBAL;
            char* x1157 = x374->S_COMMENT;
            struct NATIONRecord_SUPPLIERRecord* x8980 = (struct NATIONRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord));
            memset(x8980, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord));
            x8980->N_NATIONKEY = x12065; x8980->N_NAME = x1149; x8980->N_REGIONKEY = x1150; x8980->N_COMMENT = x1151; x8980->S_SUPPKEY = x1152; x8980->S_NAME = x1153; x8980->S_ADDRESS = x1154; x8980->S_NATIONKEY = x376; x8980->S_PHONE = x1155; x8980->S_ACCTBAL = x1156; x8980->S_COMMENT = x1157;
            int x397 = x8980->S_SUPPKEY;
            void* x9915 = (void*){x397};
            void* x9916 = (void*){x8980};
            void* x9917 = g_hash_table_lookup(x48605, x9915);
            GList** x9918 = (GList**){x9917};
            GList** x9919 = NULL;
            int x9920 = x9918==(x9919);
            /* VAR */ GList** ite37550 = 0;
            if(x9920) {
              GList** x37551 = malloc(8);
              GList* x37552 = NULL;
              pointer_assign(x37551, x37552);
              ite37550 = x37551;
            } else {
              
              ite37550 = x9918;
            };
            GList** x9924 = ite37550;
            GList* x9925 = *(x9924);
            GList* x9926 = g_list_prepend(x9925, x9916);
            pointer_assign(x9924, x9926);
            void* x9928 = (void*){x9924};
            g_hash_table_insert(x48605, x9915, x9928);
          };
        };
      };
      int x2892 = x48627;
      int x405 = x2892+(1);
      x48627 = x405;
    };
    while(1) {
      
      int x48877 = x48624;
      int x48878 = x48877<(x5869);
      if (!(x48878)) break; 
      
      int x2902 = x48624;
      struct LINEITEMRecord* x415 = &(x7523[x2902]);
      int x417 = x415->L_RECEIPTDATE;
      int x418 = x415->L_COMMITDATE;
      int x419 = x417>(x418);
      if(x419) {
        int x420 = x415->L_SUPPKEY;
        void* x9945 = (void*){x420};
        void* x9946 = g_hash_table_lookup(x48605, x9945);
        GList** x9947 = (GList**){x9946};
        int x20584 = x9947!=(NULL);
        if(x20584) {
          GList* x12182 = *(x9947);
          /* VAR */ GList* x12183 = x12182;
          while(1) {
            
            GList* x12184 = x12183;
            GList* x12185 = NULL;
            int x12186 = x12184!=(x12185);
            if (!(x12186)) break; 
            
            GList* x12187 = x12183;
            void* x12188 = g_list_nth_data(x12187, 0);
            struct NATIONRecord_SUPPLIERRecord* x12189 = (struct NATIONRecord_SUPPLIERRecord*){x12188};
            GList* x12190 = x12183;
            GList* x12191 = g_list_next(x12190);
            x12183 = x12191;
            int x12193 = x12189->S_SUPPKEY;
            int x12194 = x12193==(x420);
            if(x12194) {
              int x1257 = x12189->N_NATIONKEY;
              char* x1258 = x12189->N_NAME;
              int x1259 = x12189->N_REGIONKEY;
              char* x1260 = x12189->N_COMMENT;
              char* x1261 = x12189->S_NAME;
              char* x1262 = x12189->S_ADDRESS;
              int x1263 = x12189->S_NATIONKEY;
              char* x1264 = x12189->S_PHONE;
              double x1265 = x12189->S_ACCTBAL;
              char* x1266 = x12189->S_COMMENT;
              int x1267 = x415->L_ORDERKEY;
              int x1268 = x415->L_PARTKEY;
              int x1269 = x415->L_LINENUMBER;
              double x1270 = x415->L_QUANTITY;
              double x1271 = x415->L_EXTENDEDPRICE;
              double x1272 = x415->L_DISCOUNT;
              double x1273 = x415->L_TAX;
              char x1274 = x415->L_RETURNFLAG;
              char x1275 = x415->L_LINESTATUS;
              int x1276 = x415->L_SHIPDATE;
              char* x1277 = x415->L_SHIPINSTRUCT;
              char* x1278 = x415->L_SHIPMODE;
              char* x1279 = x415->L_COMMENT;
              struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x9032 = (struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
              memset(x9032, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
              x9032->N_NATIONKEY = x1257; x9032->N_NAME = x1258; x9032->N_REGIONKEY = x1259; x9032->N_COMMENT = x1260; x9032->S_SUPPKEY = x12193; x9032->S_NAME = x1261; x9032->S_ADDRESS = x1262; x9032->S_NATIONKEY = x1263; x9032->S_PHONE = x1264; x9032->S_ACCTBAL = x1265; x9032->S_COMMENT = x1266; x9032->L_ORDERKEY = x1267; x9032->L_PARTKEY = x1268; x9032->L_SUPPKEY = x420; x9032->L_LINENUMBER = x1269; x9032->L_QUANTITY = x1270; x9032->L_EXTENDEDPRICE = x1271; x9032->L_DISCOUNT = x1272; x9032->L_TAX = x1273; x9032->L_RETURNFLAG = x1274; x9032->L_LINESTATUS = x1275; x9032->L_SHIPDATE = x1276; x9032->L_COMMITDATE = x418; x9032->L_RECEIPTDATE = x417; x9032->L_SHIPINSTRUCT = x1277; x9032->L_SHIPMODE = x1278; x9032->L_COMMENT = x1279;
              int x472 = x9032->L_ORDERKEY;
              void* x9984 = (void*){x472};
              void* x9985 = g_hash_table_lookup(x48595, x9984);
              GList** x9986 = (GList**){x9985};
              int x20715 = x9986!=(NULL);
              if(x20715) {
                /* VAR */ struct LINEITEMRecord* x12238 = NULL;
                GList* x12239 = *(x9986);
                /* VAR */ GList* x12240 = x12239;
                while(1) {
                  
                  GList* x12241 = x12240;
                  GList* x12242 = NULL;
                  int x12243 = x12241!=(x12242);
                  if (!(x12243)) break; 
                  
                  GList* x12244 = x12240;
                  void* x12245 = g_list_nth_data(x12244, 0);
                  struct LINEITEMRecord* x12246 = (struct LINEITEMRecord*){x12245};
                  GList* x12247 = x12240;
                  GList* x12248 = g_list_next(x12247);
                  x12240 = x12248;
                  int x12250 = x12246->L_ORDERKEY;
                  int x12251 = x472==(x12250);
                  /* VAR */ int ite41502 = 0;
                  if(x12251) {
                    int x49067 = x9032->L_SUPPKEY;
                    int x49068 = x12246->L_SUPPKEY;
                    int x49069 = x49067!=(x49068);
                    ite41502 = x49069;
                  } else {
                    
                    ite41502 = 0;
                  };
                  int x37734 = ite41502;
                  if(x37734) {
                    x12238 = x12246;
                    break;
                  };
                };
                struct LINEITEMRecord* x12260 = x12238;
                int x20748 = x12260!=(NULL);
                if(x20748) {
                  void* x10001 = (void*){x9032};
                  void* x10002 = g_hash_table_lookup(x48585, x9984);
                  GList** x10003 = (GList**){x10002};
                  GList** x10004 = NULL;
                  int x10005 = x10003==(x10004);
                  /* VAR */ GList** ite37747 = 0;
                  if(x10005) {
                    GList** x37748 = malloc(8);
                    GList* x37749 = NULL;
                    pointer_assign(x37748, x37749);
                    ite37747 = x37748;
                  } else {
                    
                    ite37747 = x10003;
                  };
                  GList** x10009 = ite37747;
                  GList* x10010 = *(x10009);
                  GList* x10011 = g_list_prepend(x10010, x10001);
                  pointer_assign(x10009, x10011);
                  void* x10013 = (void*){x10009};
                  g_hash_table_insert(x48585, x9984, x10013);
                };
              };
            };
          };
        };
      };
      int x3038 = x48624;
      int x512 = x3038+(1);
      x48624 = x512;
    };
    while(1) {
      
      int x49103 = x48626;
      int x49104 = x49103<(x5869);
      if (!(x49104)) break; 
      
      int x3047 = x48626;
      struct LINEITEMRecord* x521 = &(x7523[x3047]);
      int x523 = x521->L_RECEIPTDATE;
      int x524 = x521->L_COMMITDATE;
      int x525 = x523>(x524);
      if(x525) {
        int x526 = x521->L_ORDERKEY;
        void* x10030 = (void*){x526};
        void* x10031 = g_hash_table_lookup(x48585, x10030);
        GList** x10032 = (GList**){x10031};
        int x20781 = x10032!=(NULL);
        if(x20781) {
          GList* x12309 = *(x10032);
          /* VAR */ GList* x12310 = x12309;
          /* VAR */ GList** x12311 = x10032;
          while(1) {
            
            GList* x12312 = x12310;
            GList* x12313 = NULL;
            int x12314 = x12312!=(x12313);
            if (!(x12314)) break; 
            
            GList* x12315 = x12310;
            void* x12316 = g_list_nth_data(x12315, 0);
            struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x12317 = (struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord*){x12316};
            int x12318 = x12317->L_ORDERKEY;
            int x12319 = x12318==(x526);
            /* VAR */ int ite41583 = 0;
            if(x12319) {
              int x49145 = x12317->L_SUPPKEY;
              int x49146 = x521->L_SUPPKEY;
              int x49147 = x49145!=(x49146);
              ite41583 = x49147;
            } else {
              
              ite41583 = 0;
            };
            int x37797 = ite41583;
            int x12324 = !(x37797);
            if(x12324) {
              GList* x12325 = x12310;
              GList* x12326 = x12325->next;
              GList** x12327 = &(x12326);
              x12311 = x12327;
            } else {
              
              GList** x12329 = x12311;
              GList* x12330 = x12310;
              GList* x12331 = g_list_next(x12330);
              pointer_assign(x12329, x12331);
            };
            GList* x12334 = x12310;
            GList* x12335 = g_list_next(x12334);
            x12310 = x12335;
          };
        };
      };
      int x3081 = x48626;
      int x556 = x3081+(1);
      x48626 = x556;
    };
    GList* x49458 = g_hash_table_get_keys(x48585);
    /* VAR */ GList* x49459 = x49458;
    int x49460 = g_hash_table_size(x48585);
    int x31470 = 0;
    for(; x31470 < x49460 ; x31470 += 1) {
      
      GList* x31471 = x49459;
      void* x31472 = g_list_nth_data(x31471, 0);
      GList* x31473 = x49459;
      GList* x31474 = g_list_next(x31473);
      x49459 = x31474;
      void* x31476 = g_hash_table_lookup(x48585, x31472);
      GList** x31477 = (GList**){x31476};
      GList* x31606 = *(x31477);
      /* VAR */ GList* x31607 = x31606;
      while(1) {
        
        GList* x12770 = x31607;
        GList* x12771 = NULL;
        int x12772 = x12770!=(x12771);
        if (!(x12772)) break; 
        
        GList* x12773 = x31607;
        void* x12774 = g_list_nth_data(x12773, 0);
        struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x12775 = (struct NATIONRecord_SUPPLIERRecord_LINEITEMRecord*){x12774};
        GList* x12776 = x31607;
        GList* x12777 = g_list_next(x12776);
        x31607 = x12777;
        int x12779 = x12775->L_ORDERKEY;
        void* x12780 = (void*){x12779};
        void* x12781 = g_hash_table_lookup(x48575, x12780);
        GList** x12782 = (GList**){x12781};
        int x21251 = x12782!=(NULL);
        if(x21251) {
          GList* x12703 = *(x12782);
          /* VAR */ GList* x12704 = x12703;
          while(1) {
            
            GList* x12705 = x12704;
            GList* x12706 = NULL;
            int x12707 = x12705!=(x12706);
            if (!(x12707)) break; 
            
            GList* x12708 = x12704;
            void* x12709 = g_list_nth_data(x12708, 0);
            struct ORDERSRecord* x12710 = (struct ORDERSRecord*){x12709};
            GList* x12711 = x12704;
            GList* x12712 = g_list_next(x12711);
            x12704 = x12712;
            int x12714 = x12710->O_ORDERKEY;
            int x12715 = x12714==(x12779);
            if(x12715) {
              int x1451 = x12710->O_CUSTKEY;
              char x1452 = x12710->O_ORDERSTATUS;
              double x1453 = x12710->O_TOTALPRICE;
              int x1454 = x12710->O_ORDERDATE;
              char* x1455 = x12710->O_ORDERPRIORITY;
              char* x1456 = x12710->O_CLERK;
              int x1457 = x12710->O_SHIPPRIORITY;
              char* x1458 = x12710->O_COMMENT;
              int x1459 = x12775->N_NATIONKEY;
              char* x1460 = x12775->N_NAME;
              int x1461 = x12775->N_REGIONKEY;
              char* x1462 = x12775->N_COMMENT;
              int x1463 = x12775->S_SUPPKEY;
              char* x1464 = x12775->S_NAME;
              char* x1465 = x12775->S_ADDRESS;
              int x1466 = x12775->S_NATIONKEY;
              char* x1467 = x12775->S_PHONE;
              double x1468 = x12775->S_ACCTBAL;
              char* x1469 = x12775->S_COMMENT;
              int x1470 = x12775->L_PARTKEY;
              int x1471 = x12775->L_SUPPKEY;
              int x1472 = x12775->L_LINENUMBER;
              double x1473 = x12775->L_QUANTITY;
              double x1474 = x12775->L_EXTENDEDPRICE;
              double x1475 = x12775->L_DISCOUNT;
              double x1476 = x12775->L_TAX;
              char x1477 = x12775->L_RETURNFLAG;
              char x1478 = x12775->L_LINESTATUS;
              int x1479 = x12775->L_SHIPDATE;
              int x1480 = x12775->L_COMMITDATE;
              int x1481 = x12775->L_RECEIPTDATE;
              char* x1482 = x12775->L_SHIPINSTRUCT;
              char* x1483 = x12775->L_SHIPMODE;
              char* x1484 = x12775->L_COMMENT;
              struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord* x9132 = (struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord*)malloc(1 * sizeof(struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
              memset(x9132, 0, 1 * sizeof(struct ORDERSRecord_NATIONRecord_SUPPLIERRecord_LINEITEMRecord));
              x9132->O_ORDERKEY = x12714; x9132->O_CUSTKEY = x1451; x9132->O_ORDERSTATUS = x1452; x9132->O_TOTALPRICE = x1453; x9132->O_ORDERDATE = x1454; x9132->O_ORDERPRIORITY = x1455; x9132->O_CLERK = x1456; x9132->O_SHIPPRIORITY = x1457; x9132->O_COMMENT = x1458; x9132->N_NATIONKEY = x1459; x9132->N_NAME = x1460; x9132->N_REGIONKEY = x1461; x9132->N_COMMENT = x1462; x9132->S_SUPPKEY = x1463; x9132->S_NAME = x1464; x9132->S_ADDRESS = x1465; x9132->S_NATIONKEY = x1466; x9132->S_PHONE = x1467; x9132->S_ACCTBAL = x1468; x9132->S_COMMENT = x1469; x9132->L_ORDERKEY = x12779; x9132->L_PARTKEY = x1470; x9132->L_SUPPKEY = x1471; x9132->L_LINENUMBER = x1472; x9132->L_QUANTITY = x1473; x9132->L_EXTENDEDPRICE = x1474; x9132->L_DISCOUNT = x1475; x9132->L_TAX = x1476; x9132->L_RETURNFLAG = x1477; x9132->L_LINESTATUS = x1478; x9132->L_SHIPDATE = x1479; x9132->L_COMMITDATE = x1480; x9132->L_RECEIPTDATE = x1481; x9132->L_SHIPINSTRUCT = x1482; x9132->L_SHIPMODE = x1483; x9132->L_COMMENT = x1484;
              char* x609 = x9132->S_NAME;
              void* x12755 = g_hash_table_lookup(x48565, x609);
              int x12688 = x12755==(NULL);
              /* VAR */ struct AGGRecord_OptimalString* ite38682 = 0;
              if(x12688) {
                double* x38683 = (double*)malloc(1 * sizeof(double));
                memset(x38683, 0, 1 * sizeof(double));
                struct AGGRecord_OptimalString* x38684 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
                memset(x38684, 0, 1 * sizeof(struct AGGRecord_OptimalString));
                x38684->key = x609; x38684->aggs = x38683;
                g_hash_table_insert(x48565, x609, x38684);
                ite38682 = x38684;
              } else {
                
                ite38682 = x12755;
              };
              struct AGGRecord_OptimalString* x12698 = ite38682;
              double* x614 = x12698->aggs;
              double x628 = x614[0];
              double x630 = x628+(1.0);
              *x614 = x630;
            };
          };
        };
      };
    };
    GList* x50054 = g_hash_table_get_keys(x48565);
    /* VAR */ GList* x50055 = x50054;
    int x50056 = g_hash_table_size(x48565);
    int x31762 = 0;
    for(; x31762 < x50056 ; x31762 += 1) {
      
      GList* x31763 = x50055;
      void* x31764 = g_list_nth_data(x31763, 0);
      GList* x31765 = g_list_next(x31763);
      x50055 = x31765;
      void* x31767 = g_hash_table_lookup(x48565, x31764);
      struct AGGRecord_OptimalString* x31769 = (struct AGGRecord_OptimalString*){x31767};
      g_tree_insert(x48679, x31769, x31769);
    };
    while(1) {
      
      int x3239 = x48680;
      int x652 = !(x3239);
      /* VAR */ int ite42520 = 0;
      if(x652) {
        int x50081 = g_tree_nnodes(x48679);
        int x50082 = x50081!=(0);
        ite42520 = x50082;
      } else {
        
        ite42520 = 0;
      };
      int x38726 = ite42520;
      if (!(x38726)) break; 
      
      void* x12936 = NULL;
      void** x12944 = &(x12936);
      g_tree_foreach(x48679, x12943, x12944);
      struct AGGRecord_OptimalString* x12946 = (struct AGGRecord_OptimalString*){x12936};
      int x12947 = g_tree_remove(x48679, x12946);
      int x3247 = x48681;
      int x662 = x3247>=(100);
      if(x662) {
        x48680 = 1;
      } else {
        
        char* x664 = x12946->key;
        double* x666 = x12946->aggs;
        double x667 = x666[0];
        printf("%s|%.0f\n", x664, x667);
        int x3256 = x48681;
        int x670 = x3256+(1);
        x48681 = x670;
      };
    };
    int x50110 = x48681;
    printf("(%d rows)\n", x50110);
    struct timeval* x50112 = &x48621;
    gettimeofday(x50112, NULL);
    struct timeval* x50114 = &x48617;
    struct timeval* x50115 = &x48621;
    struct timeval* x50116 = &x48619;
    long x50117 = timeval_subtract(x50114, x50115, x50116);
    printf("Generated code run in %ld milliseconds.\n", x50117);
  };
}
/* ----------- FUNCTIONS ----------- */
int x48542(char* x11819) {
  int x27016 = strlen(x11819);
  /* VAR */ int x23647 = 0;
  /* VAR */ int x23648 = 0;
  while(1) {
    
    int x23649 = x23647;
    int x23650 = x23649<(x27016);
    if (!(x23650)) break; 
    
    int x23651 = x23648;
    int x23652 = x23647;
    char* x27024 = pointer_add(x11819, x23652);
    char x27025 = *(x27024);
    int x23655 = x23651+(x27025);
    x23648 = x23655;
    int x23657 = x23647;
    int x23658 = x23657+(1);
    x23647 = x23658;
  };
  int x23661 = x23648;
  return x23661; 
}

int x48560(char* x11824, char* x11825) {
  int x23665 = strcmp(x11824, x11825);
  int x23666 = !(x23665);
  return x23666; 
}

int x48566(void* x9720) {
  int x9721 = g_direct_hash(x9720);
  return x9721; 
}

int x48569(void* x9723, void* x9724) {
  int x9725 = g_direct_equal(x9723, x9724);
  return x9725; 
}

int x48576(void* x9730) {
  int x9731 = g_direct_hash(x9730);
  return x9731; 
}

int x48579(void* x9733, void* x9734) {
  int x9735 = g_direct_equal(x9733, x9734);
  return x9735; 
}

int x48586(void* x9740) {
  int x9741 = g_direct_hash(x9740);
  return x9741; 
}

int x48589(void* x9743, void* x9744) {
  int x9745 = g_direct_equal(x9743, x9744);
  return x9745; 
}

int x48596(void* x9750) {
  int x9751 = g_direct_hash(x9750);
  return x9751; 
}

int x48599(void* x9753, void* x9754) {
  int x9755 = g_direct_equal(x9753, x9754);
  return x9755; 
}

int x48606(void* x9760) {
  int x9761 = g_direct_hash(x9760);
  return x9761; 
}

int x48609(void* x9763, void* x9764) {
  int x9765 = g_direct_equal(x9763, x9764);
  return x9765; 
}

int x48654(struct AGGRecord_OptimalString* x294, struct AGGRecord_OptimalString* x295) {
  double* x296 = x294->aggs;
  double x297 = x296[0];
  double* x298 = x295->aggs;
  double x299 = x298[0];
  int x300 = x297<(x299);
  /* VAR */ int ite37357 = 0;
  if(x300) {
    ite37357 = 1;
  } else {
    
    int x37359 = x297>(x299);
    /* VAR */ int ite37361 = 0;
    if(x37359) {
      ite37361 = -1;
    } else {
      
      char* x37363 = x294->key;
      char* x37364 = x295->key;
      int x37365 = strcmp(x37363, x37364);
      ite37361 = x37365;
    };
    int x37360 = ite37361;
    ite37357 = x37360;
  };
  int x306 = ite37357;
  return x306; 
}

int x12943(void* x12937, void* x12938, void* x12939) {
  struct AGGRecord_OptimalString** x12940 = (struct AGGRecord_OptimalString**){x12939};
  struct AGGRecord_OptimalString* x12941 = (struct AGGRecord_OptimalString*){x12938};
  pointer_assign(x12940, x12941);
  return 1; 
}
