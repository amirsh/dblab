#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord_PARTRecord_ORDERSRecord;
  struct LINEITEMRecord;
  struct NATIONRecord_SUPPLIERRecord_REGIONRecord_NATIONRecord_LINEITEMRecord_PARTRecord_ORDERSRecord_CUSTOMERRecord;
  struct REGIONRecord;
  struct NATIONRecord;
  struct LINEITEMRecord_PARTRecord;
  struct ORDERSRecord;
  struct PARTRecord;
  struct AGGRecord_Int;
  struct SUPPLIERRecord;
  struct CUSTOMERRecord;
  
  struct LINEITEMRecord_PARTRecord_ORDERSRecord {
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
  
  struct NATIONRecord_SUPPLIERRecord_REGIONRecord_NATIONRecord_LINEITEMRecord_PARTRecord_ORDERSRecord_CUSTOMERRecord {
  int REC1_N_NATIONKEY;
  char* REC1_N_NAME;
  int REC1_N_REGIONKEY;
  char* REC1_N_COMMENT;
  int REC2_S_SUPPKEY;
  char* REC2_S_NAME;
  char* REC2_S_ADDRESS;
  int REC2_S_NATIONKEY;
  char* REC2_S_PHONE;
  double REC2_S_ACCTBAL;
  char* REC2_S_COMMENT;
  int REC2_R_REGIONKEY;
  char* REC2_R_NAME;
  char* REC2_R_COMMENT;
  int REC2_N_NATIONKEY;
  char* REC2_N_NAME;
  int REC2_N_REGIONKEY;
  char* REC2_N_COMMENT;
  int REC2_L_ORDERKEY;
  int REC2_L_PARTKEY;
  int REC2_L_SUPPKEY;
  int REC2_L_LINENUMBER;
  double REC2_L_QUANTITY;
  double REC2_L_EXTENDEDPRICE;
  double REC2_L_DISCOUNT;
  double REC2_L_TAX;
  char REC2_L_RETURNFLAG;
  char REC2_L_LINESTATUS;
  int REC2_L_SHIPDATE;
  int REC2_L_COMMITDATE;
  int REC2_L_RECEIPTDATE;
  char* REC2_L_SHIPINSTRUCT;
  char* REC2_L_SHIPMODE;
  char* REC2_L_COMMENT;
  int REC2_P_PARTKEY;
  char* REC2_P_NAME;
  char* REC2_P_MFGR;
  char* REC2_P_BRAND;
  char* REC2_P_TYPE;
  int REC2_P_SIZE;
  char* REC2_P_CONTAINER;
  double REC2_P_RETAILPRICE;
  char* REC2_P_COMMENT;
  int REC2_O_ORDERKEY;
  int REC2_O_CUSTKEY;
  char REC2_O_ORDERSTATUS;
  double REC2_O_TOTALPRICE;
  int REC2_O_ORDERDATE;
  char* REC2_O_ORDERPRIORITY;
  char* REC2_O_CLERK;
  int REC2_O_SHIPPRIORITY;
  char* REC2_O_COMMENT;
  int REC2_C_CUSTKEY;
  char* REC2_C_NAME;
  char* REC2_C_ADDRESS;
  int REC2_C_NATIONKEY;
  char* REC2_C_PHONE;
  double REC2_C_ACCTBAL;
  char* REC2_C_MKTSEGMENT;
  char* REC2_C_COMMENT;
  };
  
  struct REGIONRecord {
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
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
  
  


int x101648(int x30607);

int x101650(int x30612, int x30613);

int x101655(void* x27698);

int x101658(void* x27701, void* x27702);

int x101665(void* x27708);

int x101668(void* x27711, void* x27712);

int x101675(void* x27718);

int x101678(void* x27721, void* x27722);

int x101685(void* x27728);

int x101688(void* x27731, void* x27732);

int x101695(void* x27738);

int x101698(void* x27741, void* x27742);

int x101705(void* x27748);

int x101708(void* x27751, void* x27752);

int x101715(void* x27758);

int x101718(void* x27761, void* x27762);

int x101760(struct AGGRecord_Int* x491, struct AGGRecord_Int* x492);

int x33177(void* x33171, void* x33172, void* x33173);
/* GLOBAL VARS */

struct timeval x20689;
int main(int argc, char** argv) {
  FILE* x21732 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x21733 = 0;
  int x21734 = x21733;
  int* x21735 = &x21734;
  int x21736 = fscanf(x21732, "%d", x21735);
  pclose(x21732);
  struct PARTRecord** x24290 = (struct PARTRecord**)malloc(x21734 * sizeof(struct PARTRecord*));
  memset(x24290, 0, x21734 * sizeof(struct PARTRecord*));
  int x21740 = O_RDONLY;
  int x21741 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x21740);
  struct stat x21742 = (struct stat){0};
  /* VAR */ struct stat x21743 = x21742;
  struct stat x21744 = x21743;
  struct stat* x21745 = &x21744;
  int x21746 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x21745);
  size_t x21747 = x21745->st_size;
  int x21748 = PROT_READ;
  int x21749 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x21747, x21748, x21749, x21741, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x21734);
    /* VAR */ int ite83743 = 0;
    if(x6) {
      char x97698 = *x3;
      int x97699 = x97698!=('\0');
      ite83743 = x97699;
    } else {
      
      ite83743 = 0;
    };
    int x77048 = ite83743;
    if (!(x77048)) break; 
    
    /* VAR */ int x21757 = 0;
    int x21758 = x21757;
    int* x21759 = &x21758;
    char* x21760 = strntoi_unchecked(x3, x21759);
    x3 = x21760;
    char* x24314 = (char*)malloc(56 * sizeof(char));
    memset(x24314, 0, 56 * sizeof(char));
    /* VAR */ char* x21763 = x3;
    while(1) {
      
      char x21764 = *x3;
      int x21765 = x21764!=('|');
      /* VAR */ int ite83762 = 0;
      if(x21765) {
        char x97716 = *x3;
        int x97717 = x97716!=('\n');
        ite83762 = x97717;
      } else {
        
        ite83762 = 0;
      };
      int x77060 = ite83762;
      if (!(x77060)) break; 
      
      x3 += 1;
    };
    char* x21771 = x21763;
    int x21772 = x3 - x21771;
    char* x21773 = x21763;
    char* x21774 = strncpy(x24314, x21773, x21772);
    x3 += 1;
    char* x24332 = (char*)malloc(26 * sizeof(char));
    memset(x24332, 0, 26 * sizeof(char));
    /* VAR */ char* x21782 = x3;
    while(1) {
      
      char x21783 = *x3;
      int x21784 = x21783!=('|');
      /* VAR */ int ite83785 = 0;
      if(x21784) {
        char x97738 = *x3;
        int x97739 = x97738!=('\n');
        ite83785 = x97739;
      } else {
        
        ite83785 = 0;
      };
      int x77076 = ite83785;
      if (!(x77076)) break; 
      
      x3 += 1;
    };
    char* x21790 = x21782;
    int x21791 = x3 - x21790;
    char* x21792 = x21782;
    char* x21793 = strncpy(x24332, x21792, x21791);
    x3 += 1;
    char* x24350 = (char*)malloc(11 * sizeof(char));
    memset(x24350, 0, 11 * sizeof(char));
    /* VAR */ char* x21801 = x3;
    while(1) {
      
      char x21802 = *x3;
      int x21803 = x21802!=('|');
      /* VAR */ int ite83808 = 0;
      if(x21803) {
        char x97760 = *x3;
        int x97761 = x97760!=('\n');
        ite83808 = x97761;
      } else {
        
        ite83808 = 0;
      };
      int x77092 = ite83808;
      if (!(x77092)) break; 
      
      x3 += 1;
    };
    char* x21809 = x21801;
    int x21810 = x3 - x21809;
    char* x21811 = x21801;
    char* x21812 = strncpy(x24350, x21811, x21810);
    x3 += 1;
    char* x24368 = (char*)malloc(26 * sizeof(char));
    memset(x24368, 0, 26 * sizeof(char));
    /* VAR */ char* x21820 = x3;
    while(1) {
      
      char x21821 = *x3;
      int x21822 = x21821!=('|');
      /* VAR */ int ite83831 = 0;
      if(x21822) {
        char x97782 = *x3;
        int x97783 = x97782!=('\n');
        ite83831 = x97783;
      } else {
        
        ite83831 = 0;
      };
      int x77108 = ite83831;
      if (!(x77108)) break; 
      
      x3 += 1;
    };
    char* x21828 = x21820;
    int x21829 = x3 - x21828;
    char* x21830 = x21820;
    char* x21831 = strncpy(x24368, x21830, x21829);
    x3 += 1;
    /* VAR */ int x21838 = 0;
    int x21839 = x21838;
    int* x21840 = &x21839;
    char* x21841 = strntoi_unchecked(x3, x21840);
    x3 = x21841;
    char* x24391 = (char*)malloc(11 * sizeof(char));
    memset(x24391, 0, 11 * sizeof(char));
    /* VAR */ char* x21844 = x3;
    while(1) {
      
      char x21845 = *x3;
      int x21846 = x21845!=('|');
      /* VAR */ int ite83859 = 0;
      if(x21846) {
        char x97809 = *x3;
        int x97810 = x97809!=('\n');
        ite83859 = x97810;
      } else {
        
        ite83859 = 0;
      };
      int x77129 = ite83859;
      if (!(x77129)) break; 
      
      x3 += 1;
    };
    char* x21852 = x21844;
    int x21853 = x3 - x21852;
    char* x21854 = x21844;
    char* x21855 = strncpy(x24391, x21854, x21853);
    x3 += 1;
    /* VAR */ double x21862 = 0.0;
    double x21863 = x21862;
    double* x21864 = &x21863;
    char* x21865 = strntod_unchecked(x3, x21864);
    x3 = x21865;
    char* x24414 = (char*)malloc(24 * sizeof(char));
    memset(x24414, 0, 24 * sizeof(char));
    /* VAR */ char* x21868 = x3;
    while(1) {
      
      char x21869 = *x3;
      int x21870 = x21869!=('|');
      /* VAR */ int ite83887 = 0;
      if(x21870) {
        char x97836 = *x3;
        int x97837 = x97836!=('\n');
        ite83887 = x97837;
      } else {
        
        ite83887 = 0;
      };
      int x77150 = ite83887;
      if (!(x77150)) break; 
      
      x3 += 1;
    };
    char* x21876 = x21868;
    int x21877 = x3 - x21876;
    char* x21878 = x21868;
    char* x21879 = strncpy(x24414, x21878, x21877);
    x3 += 1;
    struct PARTRecord* x25683 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x25683, 0, 1 * sizeof(struct PARTRecord));
    x25683->P_PARTKEY = x21758; x25683->P_NAME = x24314; x25683->P_MFGR = x24332; x25683->P_BRAND = x24350; x25683->P_TYPE = x24368; x25683->P_SIZE = x21839; x25683->P_CONTAINER = x24391; x25683->P_RETAILPRICE = x21863; x25683->P_COMMENT = x24414;
    int x59 = x4;
    *(x24290 + x59) = x25683;
    int x61 = x4;
    int x62 = x61+(1);
    x4 = x62;
  };
  FILE* x21892 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x21893 = 0;
  int x21894 = x21893;
  int* x21895 = &x21894;
  int x21896 = fscanf(x21892, "%d", x21895);
  pclose(x21892);
  struct LINEITEMRecord** x24444 = (struct LINEITEMRecord**)malloc(x21894 * sizeof(struct LINEITEMRecord*));
  memset(x24444, 0, x21894 * sizeof(struct LINEITEMRecord*));
  int x21900 = O_RDONLY;
  int x21901 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x21900);
  /* VAR */ struct stat x21902 = x21742;
  struct stat x21903 = x21902;
  struct stat* x21904 = &x21903;
  int x21905 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x21904);
  size_t x21906 = x21904->st_size;
  int x21907 = PROT_READ;
  int x21908 = MAP_PRIVATE;
  char* x67 = mmap(NULL, x21906, x21907, x21908, x21901, 0);
  /* VAR */ int x68 = 0;
  while(1) {
    
    int x69 = x68;
    int x70 = x69<(x21894);
    /* VAR */ int ite83934 = 0;
    if(x70) {
      char x97882 = *x67;
      int x97883 = x97882!=('\0');
      ite83934 = x97883;
    } else {
      
      ite83934 = 0;
    };
    int x77190 = ite83934;
    if (!(x77190)) break; 
    
    /* VAR */ int x21916 = 0;
    int x21917 = x21916;
    int* x21918 = &x21917;
    char* x21919 = strntoi_unchecked(x67, x21918);
    x67 = x21919;
    /* VAR */ int x21921 = 0;
    int x21922 = x21921;
    int* x21923 = &x21922;
    char* x21924 = strntoi_unchecked(x67, x21923);
    x67 = x21924;
    /* VAR */ int x21926 = 0;
    int x21927 = x21926;
    int* x21928 = &x21927;
    char* x21929 = strntoi_unchecked(x67, x21928);
    x67 = x21929;
    /* VAR */ int x21931 = 0;
    int x21932 = x21931;
    int* x21933 = &x21932;
    char* x21934 = strntoi_unchecked(x67, x21933);
    x67 = x21934;
    /* VAR */ double x21936 = 0.0;
    double x21937 = x21936;
    double* x21938 = &x21937;
    char* x21939 = strntod_unchecked(x67, x21938);
    x67 = x21939;
    /* VAR */ double x21941 = 0.0;
    double x21942 = x21941;
    double* x21943 = &x21942;
    char* x21944 = strntod_unchecked(x67, x21943);
    x67 = x21944;
    /* VAR */ double x21946 = 0.0;
    double x21947 = x21946;
    double* x21948 = &x21947;
    char* x21949 = strntod_unchecked(x67, x21948);
    x67 = x21949;
    /* VAR */ double x21951 = 0.0;
    double x21952 = x21951;
    double* x21953 = &x21952;
    char* x21954 = strntod_unchecked(x67, x21953);
    x67 = x21954;
    char x21956 = *x67;
    /* VAR */ char x21957 = x21956;
    x67 += 1;
    x67 += 1;
    char x21960 = x21957;
    char x21961 = *x67;
    /* VAR */ char x21962 = x21961;
    x67 += 1;
    x67 += 1;
    char x21965 = x21962;
    /* VAR */ int x21966 = 0;
    int x21967 = x21966;
    int* x21968 = &x21967;
    char* x21969 = strntoi_unchecked(x67, x21968);
    x67 = x21969;
    /* VAR */ int x21971 = 0;
    int x21972 = x21971;
    int* x21973 = &x21972;
    char* x21974 = strntoi_unchecked(x67, x21973);
    x67 = x21974;
    /* VAR */ int x21976 = 0;
    int x21977 = x21976;
    int* x21978 = &x21977;
    char* x21979 = strntoi_unchecked(x67, x21978);
    x67 = x21979;
    int x21981 = x21967*(10000);
    int x21982 = x21972*(100);
    int x21983 = x21981+(x21982);
    int x21984 = x21983+(x21977);
    /* VAR */ int x21985 = 0;
    int x21986 = x21985;
    int* x21987 = &x21986;
    char* x21988 = strntoi_unchecked(x67, x21987);
    x67 = x21988;
    /* VAR */ int x21990 = 0;
    int x21991 = x21990;
    int* x21992 = &x21991;
    char* x21993 = strntoi_unchecked(x67, x21992);
    x67 = x21993;
    /* VAR */ int x21995 = 0;
    int x21996 = x21995;
    int* x21997 = &x21996;
    char* x21998 = strntoi_unchecked(x67, x21997);
    x67 = x21998;
    int x22000 = x21986*(10000);
    int x22001 = x21991*(100);
    int x22002 = x22000+(x22001);
    int x22003 = x22002+(x21996);
    /* VAR */ int x22004 = 0;
    int x22005 = x22004;
    int* x22006 = &x22005;
    char* x22007 = strntoi_unchecked(x67, x22006);
    x67 = x22007;
    /* VAR */ int x22009 = 0;
    int x22010 = x22009;
    int* x22011 = &x22010;
    char* x22012 = strntoi_unchecked(x67, x22011);
    x67 = x22012;
    /* VAR */ int x22014 = 0;
    int x22015 = x22014;
    int* x22016 = &x22015;
    char* x22017 = strntoi_unchecked(x67, x22016);
    x67 = x22017;
    int x22019 = x22005*(10000);
    int x22020 = x22010*(100);
    int x22021 = x22019+(x22020);
    int x22022 = x22021+(x22015);
    char* x24569 = (char*)malloc(26 * sizeof(char));
    memset(x24569, 0, 26 * sizeof(char));
    /* VAR */ char* x22024 = x67;
    while(1) {
      
      char x22025 = *x67;
      int x22026 = x22025!=('|');
      /* VAR */ int ite84055 = 0;
      if(x22026) {
        char x98002 = *x67;
        int x98003 = x98002!=('\n');
        ite84055 = x98003;
      } else {
        
        ite84055 = 0;
      };
      int x77304 = ite84055;
      if (!(x77304)) break; 
      
      x67 += 1;
    };
    char* x22032 = x22024;
    int x22033 = x67 - x22032;
    char* x22034 = x22024;
    char* x22035 = strncpy(x24569, x22034, x22033);
    x67 += 1;
    char* x24587 = (char*)malloc(11 * sizeof(char));
    memset(x24587, 0, 11 * sizeof(char));
    /* VAR */ char* x22043 = x67;
    while(1) {
      
      char x22044 = *x67;
      int x22045 = x22044!=('|');
      /* VAR */ int ite84078 = 0;
      if(x22045) {
        char x98024 = *x67;
        int x98025 = x98024!=('\n');
        ite84078 = x98025;
      } else {
        
        ite84078 = 0;
      };
      int x77320 = ite84078;
      if (!(x77320)) break; 
      
      x67 += 1;
    };
    char* x22051 = x22043;
    int x22052 = x67 - x22051;
    char* x22053 = x22043;
    char* x22054 = strncpy(x24587, x22053, x22052);
    x67 += 1;
    char* x24605 = (char*)malloc(45 * sizeof(char));
    memset(x24605, 0, 45 * sizeof(char));
    /* VAR */ char* x22062 = x67;
    while(1) {
      
      char x22063 = *x67;
      int x22064 = x22063!=('|');
      /* VAR */ int ite84101 = 0;
      if(x22064) {
        char x98046 = *x67;
        int x98047 = x98046!=('\n');
        ite84101 = x98047;
      } else {
        
        ite84101 = 0;
      };
      int x77336 = ite84101;
      if (!(x77336)) break; 
      
      x67 += 1;
    };
    char* x22070 = x22062;
    int x22071 = x67 - x22070;
    char* x22072 = x22062;
    char* x22073 = strncpy(x24605, x22072, x22071);
    x67 += 1;
    struct LINEITEMRecord* x25876 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x25876, 0, 1 * sizeof(struct LINEITEMRecord));
    x25876->L_ORDERKEY = x21917; x25876->L_PARTKEY = x21922; x25876->L_SUPPKEY = x21927; x25876->L_LINENUMBER = x21932; x25876->L_QUANTITY = x21937; x25876->L_EXTENDEDPRICE = x21942; x25876->L_DISCOUNT = x21947; x25876->L_TAX = x21952; x25876->L_RETURNFLAG = x21960; x25876->L_LINESTATUS = x21965; x25876->L_SHIPDATE = x21984; x25876->L_COMMITDATE = x22003; x25876->L_RECEIPTDATE = x22022; x25876->L_SHIPINSTRUCT = x24569; x25876->L_SHIPMODE = x24587; x25876->L_COMMENT = x24605;
    int x111 = x68;
    *(x24444 + x111) = x25876;
    int x113 = x68;
    int x114 = x113+(1);
    x68 = x114;
  };
  FILE* x22086 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x22087 = 0;
  int x22088 = x22087;
  int* x22089 = &x22088;
  int x22090 = fscanf(x22086, "%d", x22089);
  pclose(x22086);
  struct ORDERSRecord** x24635 = (struct ORDERSRecord**)malloc(x22088 * sizeof(struct ORDERSRecord*));
  memset(x24635, 0, x22088 * sizeof(struct ORDERSRecord*));
  int x22094 = O_RDONLY;
  int x22095 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x22094);
  /* VAR */ struct stat x22096 = x21742;
  struct stat x22097 = x22096;
  struct stat* x22098 = &x22097;
  int x22099 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x22098);
  size_t x22100 = x22098->st_size;
  int x22101 = PROT_READ;
  int x22102 = MAP_PRIVATE;
  char* x119 = mmap(NULL, x22100, x22101, x22102, x22095, 0);
  /* VAR */ int x120 = 0;
  while(1) {
    
    int x121 = x120;
    int x122 = x121<(x22088);
    /* VAR */ int ite84148 = 0;
    if(x122) {
      char x98092 = *x119;
      int x98093 = x98092!=('\0');
      ite84148 = x98093;
    } else {
      
      ite84148 = 0;
    };
    int x77376 = ite84148;
    if (!(x77376)) break; 
    
    /* VAR */ int x22110 = 0;
    int x22111 = x22110;
    int* x22112 = &x22111;
    char* x22113 = strntoi_unchecked(x119, x22112);
    x119 = x22113;
    /* VAR */ int x22115 = 0;
    int x22116 = x22115;
    int* x22117 = &x22116;
    char* x22118 = strntoi_unchecked(x119, x22117);
    x119 = x22118;
    char x22120 = *x119;
    /* VAR */ char x22121 = x22120;
    x119 += 1;
    x119 += 1;
    char x22124 = x22121;
    /* VAR */ double x22125 = 0.0;
    double x22126 = x22125;
    double* x22127 = &x22126;
    char* x22128 = strntod_unchecked(x119, x22127);
    x119 = x22128;
    /* VAR */ int x22130 = 0;
    int x22131 = x22130;
    int* x22132 = &x22131;
    char* x22133 = strntoi_unchecked(x119, x22132);
    x119 = x22133;
    /* VAR */ int x22135 = 0;
    int x22136 = x22135;
    int* x22137 = &x22136;
    char* x22138 = strntoi_unchecked(x119, x22137);
    x119 = x22138;
    /* VAR */ int x22140 = 0;
    int x22141 = x22140;
    int* x22142 = &x22141;
    char* x22143 = strntoi_unchecked(x119, x22142);
    x119 = x22143;
    int x22145 = x22131*(10000);
    int x22146 = x22136*(100);
    int x22147 = x22145+(x22146);
    int x22148 = x22147+(x22141);
    char* x24692 = (char*)malloc(16 * sizeof(char));
    memset(x24692, 0, 16 * sizeof(char));
    /* VAR */ char* x22150 = x119;
    while(1) {
      
      char x22151 = *x119;
      int x22152 = x22151!=('|');
      /* VAR */ int ite84201 = 0;
      if(x22152) {
        char x98144 = *x119;
        int x98145 = x98144!=('\n');
        ite84201 = x98145;
      } else {
        
        ite84201 = 0;
      };
      int x77422 = ite84201;
      if (!(x77422)) break; 
      
      x119 += 1;
    };
    char* x22158 = x22150;
    int x22159 = x119 - x22158;
    char* x22160 = x22150;
    char* x22161 = strncpy(x24692, x22160, x22159);
    x119 += 1;
    char* x24710 = (char*)malloc(16 * sizeof(char));
    memset(x24710, 0, 16 * sizeof(char));
    /* VAR */ char* x22169 = x119;
    while(1) {
      
      char x22170 = *x119;
      int x22171 = x22170!=('|');
      /* VAR */ int ite84224 = 0;
      if(x22171) {
        char x98166 = *x119;
        int x98167 = x98166!=('\n');
        ite84224 = x98167;
      } else {
        
        ite84224 = 0;
      };
      int x77438 = ite84224;
      if (!(x77438)) break; 
      
      x119 += 1;
    };
    char* x22177 = x22169;
    int x22178 = x119 - x22177;
    char* x22179 = x22169;
    char* x22180 = strncpy(x24710, x22179, x22178);
    x119 += 1;
    /* VAR */ int x22187 = 0;
    int x22188 = x22187;
    int* x22189 = &x22188;
    char* x22190 = strntoi_unchecked(x119, x22189);
    x119 = x22190;
    char* x24733 = (char*)malloc(80 * sizeof(char));
    memset(x24733, 0, 80 * sizeof(char));
    /* VAR */ char* x22193 = x119;
    while(1) {
      
      char x22194 = *x119;
      int x22195 = x22194!=('|');
      /* VAR */ int ite84252 = 0;
      if(x22195) {
        char x98193 = *x119;
        int x98194 = x98193!=('\n');
        ite84252 = x98194;
      } else {
        
        ite84252 = 0;
      };
      int x77459 = ite84252;
      if (!(x77459)) break; 
      
      x119 += 1;
    };
    char* x22201 = x22193;
    int x22202 = x119 - x22201;
    char* x22203 = x22193;
    char* x22204 = strncpy(x24733, x22203, x22202);
    x119 += 1;
    struct ORDERSRecord* x26006 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x26006, 0, 1 * sizeof(struct ORDERSRecord));
    x26006->O_ORDERKEY = x22111; x26006->O_CUSTKEY = x22116; x26006->O_ORDERSTATUS = x22124; x26006->O_TOTALPRICE = x22126; x26006->O_ORDERDATE = x22148; x26006->O_ORDERPRIORITY = x24692; x26006->O_CLERK = x24710; x26006->O_SHIPPRIORITY = x22188; x26006->O_COMMENT = x24733;
    int x155 = x120;
    *(x24635 + x155) = x26006;
    int x157 = x120;
    int x158 = x157+(1);
    x120 = x158;
  };
  FILE* x22217 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x22218 = 0;
  int x22219 = x22218;
  int* x22220 = &x22219;
  int x22221 = fscanf(x22217, "%d", x22220);
  pclose(x22217);
  struct CUSTOMERRecord** x24763 = (struct CUSTOMERRecord**)malloc(x22219 * sizeof(struct CUSTOMERRecord*));
  memset(x24763, 0, x22219 * sizeof(struct CUSTOMERRecord*));
  int x22225 = O_RDONLY;
  int x22226 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x22225);
  /* VAR */ struct stat x22227 = x21742;
  struct stat x22228 = x22227;
  struct stat* x22229 = &x22228;
  int x22230 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x22229);
  size_t x22231 = x22229->st_size;
  int x22232 = PROT_READ;
  int x22233 = MAP_PRIVATE;
  char* x163 = mmap(NULL, x22231, x22232, x22233, x22226, 0);
  /* VAR */ int x164 = 0;
  while(1) {
    
    int x165 = x164;
    int x166 = x165<(x22219);
    /* VAR */ int ite84299 = 0;
    if(x166) {
      char x98239 = *x163;
      int x98240 = x98239!=('\0');
      ite84299 = x98240;
    } else {
      
      ite84299 = 0;
    };
    int x77499 = ite84299;
    if (!(x77499)) break; 
    
    /* VAR */ int x22241 = 0;
    int x22242 = x22241;
    int* x22243 = &x22242;
    char* x22244 = strntoi_unchecked(x163, x22243);
    x163 = x22244;
    char* x24786 = (char*)malloc(26 * sizeof(char));
    memset(x24786, 0, 26 * sizeof(char));
    /* VAR */ char* x22247 = x163;
    while(1) {
      
      char x22248 = *x163;
      int x22249 = x22248!=('|');
      /* VAR */ int ite84318 = 0;
      if(x22249) {
        char x98257 = *x163;
        int x98258 = x98257!=('\n');
        ite84318 = x98258;
      } else {
        
        ite84318 = 0;
      };
      int x77511 = ite84318;
      if (!(x77511)) break; 
      
      x163 += 1;
    };
    char* x22255 = x22247;
    int x22256 = x163 - x22255;
    char* x22257 = x22247;
    char* x22258 = strncpy(x24786, x22257, x22256);
    x163 += 1;
    char* x24804 = (char*)malloc(41 * sizeof(char));
    memset(x24804, 0, 41 * sizeof(char));
    /* VAR */ char* x22266 = x163;
    while(1) {
      
      char x22267 = *x163;
      int x22268 = x22267!=('|');
      /* VAR */ int ite84341 = 0;
      if(x22268) {
        char x98279 = *x163;
        int x98280 = x98279!=('\n');
        ite84341 = x98280;
      } else {
        
        ite84341 = 0;
      };
      int x77527 = ite84341;
      if (!(x77527)) break; 
      
      x163 += 1;
    };
    char* x22274 = x22266;
    int x22275 = x163 - x22274;
    char* x22276 = x22266;
    char* x22277 = strncpy(x24804, x22276, x22275);
    x163 += 1;
    /* VAR */ int x22284 = 0;
    int x22285 = x22284;
    int* x22286 = &x22285;
    char* x22287 = strntoi_unchecked(x163, x22286);
    x163 = x22287;
    char* x24827 = (char*)malloc(16 * sizeof(char));
    memset(x24827, 0, 16 * sizeof(char));
    /* VAR */ char* x22290 = x163;
    while(1) {
      
      char x22291 = *x163;
      int x22292 = x22291!=('|');
      /* VAR */ int ite84369 = 0;
      if(x22292) {
        char x98306 = *x163;
        int x98307 = x98306!=('\n');
        ite84369 = x98307;
      } else {
        
        ite84369 = 0;
      };
      int x77548 = ite84369;
      if (!(x77548)) break; 
      
      x163 += 1;
    };
    char* x22298 = x22290;
    int x22299 = x163 - x22298;
    char* x22300 = x22290;
    char* x22301 = strncpy(x24827, x22300, x22299);
    x163 += 1;
    /* VAR */ double x22308 = 0.0;
    double x22309 = x22308;
    double* x22310 = &x22309;
    char* x22311 = strntod_unchecked(x163, x22310);
    x163 = x22311;
    char* x24850 = (char*)malloc(11 * sizeof(char));
    memset(x24850, 0, 11 * sizeof(char));
    /* VAR */ char* x22314 = x163;
    while(1) {
      
      char x22315 = *x163;
      int x22316 = x22315!=('|');
      /* VAR */ int ite84397 = 0;
      if(x22316) {
        char x98333 = *x163;
        int x98334 = x98333!=('\n');
        ite84397 = x98334;
      } else {
        
        ite84397 = 0;
      };
      int x77569 = ite84397;
      if (!(x77569)) break; 
      
      x163 += 1;
    };
    char* x22322 = x22314;
    int x22323 = x163 - x22322;
    char* x22324 = x22314;
    char* x22325 = strncpy(x24850, x22324, x22323);
    x163 += 1;
    char* x24868 = (char*)malloc(118 * sizeof(char));
    memset(x24868, 0, 118 * sizeof(char));
    /* VAR */ char* x22333 = x163;
    while(1) {
      
      char x22334 = *x163;
      int x22335 = x22334!=('|');
      /* VAR */ int ite84420 = 0;
      if(x22335) {
        char x98355 = *x163;
        int x98356 = x98355!=('\n');
        ite84420 = x98356;
      } else {
        
        ite84420 = 0;
      };
      int x77585 = ite84420;
      if (!(x77585)) break; 
      
      x163 += 1;
    };
    char* x22341 = x22333;
    int x22342 = x163 - x22341;
    char* x22343 = x22333;
    char* x22344 = strncpy(x24868, x22343, x22342);
    x163 += 1;
    struct CUSTOMERRecord* x26143 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x26143, 0, 1 * sizeof(struct CUSTOMERRecord));
    x26143->C_CUSTKEY = x22242; x26143->C_NAME = x24786; x26143->C_ADDRESS = x24804; x26143->C_NATIONKEY = x22285; x26143->C_PHONE = x24827; x26143->C_ACCTBAL = x22309; x26143->C_MKTSEGMENT = x24850; x26143->C_COMMENT = x24868;
    int x213 = x164;
    *(x24763 + x213) = x26143;
    int x215 = x164;
    int x216 = x215+(1);
    x164 = x216;
  };
  FILE* x22357 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x22358 = 0;
  int x22359 = x22358;
  int* x22360 = &x22359;
  int x22361 = fscanf(x22357, "%d", x22360);
  pclose(x22357);
  struct NATIONRecord** x24898 = (struct NATIONRecord**)malloc(x22359 * sizeof(struct NATIONRecord*));
  memset(x24898, 0, x22359 * sizeof(struct NATIONRecord*));
  int x22365 = O_RDONLY;
  int x22366 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x22365);
  /* VAR */ struct stat x22367 = x21742;
  struct stat x22368 = x22367;
  struct stat* x22369 = &x22368;
  int x22370 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x22369);
  size_t x22371 = x22369->st_size;
  int x22372 = PROT_READ;
  int x22373 = MAP_PRIVATE;
  char* x221 = mmap(NULL, x22371, x22372, x22373, x22366, 0);
  /* VAR */ int x222 = 0;
  while(1) {
    
    int x223 = x222;
    int x224 = x223<(x22359);
    /* VAR */ int ite84467 = 0;
    if(x224) {
      char x98401 = *x221;
      int x98402 = x98401!=('\0');
      ite84467 = x98402;
    } else {
      
      ite84467 = 0;
    };
    int x77625 = ite84467;
    if (!(x77625)) break; 
    
    /* VAR */ int x22381 = 0;
    int x22382 = x22381;
    int* x22383 = &x22382;
    char* x22384 = strntoi_unchecked(x221, x22383);
    x221 = x22384;
    char* x24921 = (char*)malloc(26 * sizeof(char));
    memset(x24921, 0, 26 * sizeof(char));
    /* VAR */ char* x22387 = x221;
    while(1) {
      
      char x22388 = *x221;
      int x22389 = x22388!=('|');
      /* VAR */ int ite84486 = 0;
      if(x22389) {
        char x98419 = *x221;
        int x98420 = x98419!=('\n');
        ite84486 = x98420;
      } else {
        
        ite84486 = 0;
      };
      int x77637 = ite84486;
      if (!(x77637)) break; 
      
      x221 += 1;
    };
    char* x22395 = x22387;
    int x22396 = x221 - x22395;
    char* x22397 = x22387;
    char* x22398 = strncpy(x24921, x22397, x22396);
    x221 += 1;
    /* VAR */ int x22405 = 0;
    int x22406 = x22405;
    int* x22407 = &x22406;
    char* x22408 = strntoi_unchecked(x221, x22407);
    x221 = x22408;
    char* x24944 = (char*)malloc(153 * sizeof(char));
    memset(x24944, 0, 153 * sizeof(char));
    /* VAR */ char* x22411 = x221;
    while(1) {
      
      char x22412 = *x221;
      int x22413 = x22412!=('|');
      /* VAR */ int ite84514 = 0;
      if(x22413) {
        char x98446 = *x221;
        int x98447 = x98446!=('\n');
        ite84514 = x98447;
      } else {
        
        ite84514 = 0;
      };
      int x77658 = ite84514;
      if (!(x77658)) break; 
      
      x221 += 1;
    };
    char* x22419 = x22411;
    int x22420 = x221 - x22419;
    char* x22421 = x22411;
    char* x22422 = strncpy(x24944, x22421, x22420);
    x221 += 1;
    struct NATIONRecord* x26221 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x26221, 0, 1 * sizeof(struct NATIONRecord));
    x26221->N_NATIONKEY = x22382; x26221->N_NAME = x24921; x26221->N_REGIONKEY = x22406; x26221->N_COMMENT = x24944;
    int x246 = x222;
    *(x24898 + x246) = x26221;
    int x248 = x222;
    int x249 = x248+(1);
    x222 = x249;
  };
  FILE* x22435 = popen("wc -l /mnt/ramdisk/tpch/sf8/region.tbl", "r");
  /* VAR */ int x22436 = 0;
  int x22437 = x22436;
  int* x22438 = &x22437;
  int x22439 = fscanf(x22435, "%d", x22438);
  pclose(x22435);
  struct REGIONRecord** x24974 = (struct REGIONRecord**)malloc(x22437 * sizeof(struct REGIONRecord*));
  memset(x24974, 0, x22437 * sizeof(struct REGIONRecord*));
  int x22443 = O_RDONLY;
  int x22444 = open("/mnt/ramdisk/tpch/sf8/region.tbl", x22443);
  /* VAR */ struct stat x22445 = x21742;
  struct stat x22446 = x22445;
  struct stat* x22447 = &x22446;
  int x22448 = stat("/mnt/ramdisk/tpch/sf8/region.tbl", x22447);
  size_t x22449 = x22447->st_size;
  int x22450 = PROT_READ;
  int x22451 = MAP_PRIVATE;
  char* x254 = mmap(NULL, x22449, x22450, x22451, x22444, 0);
  /* VAR */ int x255 = 0;
  while(1) {
    
    int x256 = x255;
    int x257 = x256<(x22437);
    /* VAR */ int ite84561 = 0;
    if(x257) {
      char x98492 = *x254;
      int x98493 = x98492!=('\0');
      ite84561 = x98493;
    } else {
      
      ite84561 = 0;
    };
    int x77698 = ite84561;
    if (!(x77698)) break; 
    
    /* VAR */ int x22459 = 0;
    int x22460 = x22459;
    int* x22461 = &x22460;
    char* x22462 = strntoi_unchecked(x254, x22461);
    x254 = x22462;
    char* x24997 = (char*)malloc(26 * sizeof(char));
    memset(x24997, 0, 26 * sizeof(char));
    /* VAR */ char* x22465 = x254;
    while(1) {
      
      char x22466 = *x254;
      int x22467 = x22466!=('|');
      /* VAR */ int ite84580 = 0;
      if(x22467) {
        char x98510 = *x254;
        int x98511 = x98510!=('\n');
        ite84580 = x98511;
      } else {
        
        ite84580 = 0;
      };
      int x77710 = ite84580;
      if (!(x77710)) break; 
      
      x254 += 1;
    };
    char* x22473 = x22465;
    int x22474 = x254 - x22473;
    char* x22475 = x22465;
    char* x22476 = strncpy(x24997, x22475, x22474);
    x254 += 1;
    char* x25015 = (char*)malloc(153 * sizeof(char));
    memset(x25015, 0, 153 * sizeof(char));
    /* VAR */ char* x22484 = x254;
    while(1) {
      
      char x22485 = *x254;
      int x22486 = x22485!=('|');
      /* VAR */ int ite84603 = 0;
      if(x22486) {
        char x98532 = *x254;
        int x98533 = x98532!=('\n');
        ite84603 = x98533;
      } else {
        
        ite84603 = 0;
      };
      int x77726 = ite84603;
      if (!(x77726)) break; 
      
      x254 += 1;
    };
    char* x22492 = x22484;
    int x22493 = x254 - x22492;
    char* x22494 = x22484;
    char* x22495 = strncpy(x25015, x22494, x22493);
    x254 += 1;
    struct REGIONRecord* x26294 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x26294, 0, 1 * sizeof(struct REGIONRecord));
    x26294->R_REGIONKEY = x22460; x26294->R_NAME = x24997; x26294->R_COMMENT = x25015;
    int x278 = x255;
    *(x24974 + x278) = x26294;
    int x280 = x255;
    int x281 = x280+(1);
    x255 = x281;
  };
  FILE* x22508 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x22509 = 0;
  int x22510 = x22509;
  int* x22511 = &x22510;
  int x22512 = fscanf(x22508, "%d", x22511);
  pclose(x22508);
  struct SUPPLIERRecord** x25045 = (struct SUPPLIERRecord**)malloc(x22510 * sizeof(struct SUPPLIERRecord*));
  memset(x25045, 0, x22510 * sizeof(struct SUPPLIERRecord*));
  int x22516 = O_RDONLY;
  int x22517 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x22516);
  /* VAR */ struct stat x22518 = x21742;
  struct stat x22519 = x22518;
  struct stat* x22520 = &x22519;
  int x22521 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x22520);
  size_t x22522 = x22520->st_size;
  int x22523 = PROT_READ;
  int x22524 = MAP_PRIVATE;
  char* x286 = mmap(NULL, x22522, x22523, x22524, x22517, 0);
  /* VAR */ int x287 = 0;
  while(1) {
    
    int x288 = x287;
    int x289 = x288<(x22510);
    /* VAR */ int ite84650 = 0;
    if(x289) {
      char x98578 = *x286;
      int x98579 = x98578!=('\0');
      ite84650 = x98579;
    } else {
      
      ite84650 = 0;
    };
    int x77766 = ite84650;
    if (!(x77766)) break; 
    
    /* VAR */ int x22532 = 0;
    int x22533 = x22532;
    int* x22534 = &x22533;
    char* x22535 = strntoi_unchecked(x286, x22534);
    x286 = x22535;
    char* x25068 = (char*)malloc(26 * sizeof(char));
    memset(x25068, 0, 26 * sizeof(char));
    /* VAR */ char* x22538 = x286;
    while(1) {
      
      char x22539 = *x286;
      int x22540 = x22539!=('|');
      /* VAR */ int ite84669 = 0;
      if(x22540) {
        char x98596 = *x286;
        int x98597 = x98596!=('\n');
        ite84669 = x98597;
      } else {
        
        ite84669 = 0;
      };
      int x77778 = ite84669;
      if (!(x77778)) break; 
      
      x286 += 1;
    };
    char* x22546 = x22538;
    int x22547 = x286 - x22546;
    char* x22548 = x22538;
    char* x22549 = strncpy(x25068, x22548, x22547);
    x286 += 1;
    char* x25086 = (char*)malloc(41 * sizeof(char));
    memset(x25086, 0, 41 * sizeof(char));
    /* VAR */ char* x22557 = x286;
    while(1) {
      
      char x22558 = *x286;
      int x22559 = x22558!=('|');
      /* VAR */ int ite84692 = 0;
      if(x22559) {
        char x98618 = *x286;
        int x98619 = x98618!=('\n');
        ite84692 = x98619;
      } else {
        
        ite84692 = 0;
      };
      int x77794 = ite84692;
      if (!(x77794)) break; 
      
      x286 += 1;
    };
    char* x22565 = x22557;
    int x22566 = x286 - x22565;
    char* x22567 = x22557;
    char* x22568 = strncpy(x25086, x22567, x22566);
    x286 += 1;
    /* VAR */ int x22575 = 0;
    int x22576 = x22575;
    int* x22577 = &x22576;
    char* x22578 = strntoi_unchecked(x286, x22577);
    x286 = x22578;
    char* x25109 = (char*)malloc(16 * sizeof(char));
    memset(x25109, 0, 16 * sizeof(char));
    /* VAR */ char* x22581 = x286;
    while(1) {
      
      char x22582 = *x286;
      int x22583 = x22582!=('|');
      /* VAR */ int ite84720 = 0;
      if(x22583) {
        char x98645 = *x286;
        int x98646 = x98645!=('\n');
        ite84720 = x98646;
      } else {
        
        ite84720 = 0;
      };
      int x77815 = ite84720;
      if (!(x77815)) break; 
      
      x286 += 1;
    };
    char* x22589 = x22581;
    int x22590 = x286 - x22589;
    char* x22591 = x22581;
    char* x22592 = strncpy(x25109, x22591, x22590);
    x286 += 1;
    /* VAR */ double x22599 = 0.0;
    double x22600 = x22599;
    double* x22601 = &x22600;
    char* x22602 = strntod_unchecked(x286, x22601);
    x286 = x22602;
    char* x25132 = (char*)malloc(102 * sizeof(char));
    memset(x25132, 0, 102 * sizeof(char));
    /* VAR */ char* x22605 = x286;
    while(1) {
      
      char x22606 = *x286;
      int x22607 = x22606!=('|');
      /* VAR */ int ite84748 = 0;
      if(x22607) {
        char x98672 = *x286;
        int x98673 = x98672!=('\n');
        ite84748 = x98673;
      } else {
        
        ite84748 = 0;
      };
      int x77836 = ite84748;
      if (!(x77836)) break; 
      
      x286 += 1;
    };
    char* x22613 = x22605;
    int x22614 = x286 - x22613;
    char* x22615 = x22605;
    char* x22616 = strncpy(x25132, x22615, x22614);
    x286 += 1;
    struct SUPPLIERRecord* x26413 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x26413, 0, 1 * sizeof(struct SUPPLIERRecord));
    x26413->S_SUPPKEY = x22533; x26413->S_NAME = x25068; x26413->S_ADDRESS = x25086; x26413->S_NATIONKEY = x22576; x26413->S_PHONE = x25109; x26413->S_ACCTBAL = x22600; x26413->S_COMMENT = x25132;
    int x328 = x287;
    *(x25045 + x328) = x26413;
    int x330 = x287;
    int x331 = x330+(1);
    x287 = x331;
  };
  int x335 = 0;
  for(; x335 < 1 ; x335 += 1) {
    
    GHashTable* x101654 = g_hash_table_new(x101648, x101650);
    void*** x101662 = (void***){x101655};
    int* x101663 = (int*){x101658};
    GHashTable* x101664 = g_hash_table_new(x101662, x101663);
    void*** x101672 = (void***){x101665};
    int* x101673 = (int*){x101668};
    GHashTable* x101674 = g_hash_table_new(x101672, x101673);
    void*** x101682 = (void***){x101675};
    int* x101683 = (int*){x101678};
    GHashTable* x101684 = g_hash_table_new(x101682, x101683);
    void*** x101692 = (void***){x101685};
    int* x101693 = (int*){x101688};
    GHashTable* x101694 = g_hash_table_new(x101692, x101693);
    void*** x101702 = (void***){x101695};
    int* x101703 = (int*){x101698};
    GHashTable* x101704 = g_hash_table_new(x101702, x101703);
    void*** x101712 = (void***){x101705};
    int* x101713 = (int*){x101708};
    GHashTable* x101714 = g_hash_table_new(x101712, x101713);
    void*** x101722 = (void***){x101715};
    int* x101723 = (int*){x101718};
    GHashTable* x101724 = g_hash_table_new(x101722, x101723);
    /* VAR */ struct timeval x101725 = x20689;
    struct timeval x101726 = x101725;
    /* VAR */ struct timeval x101727 = x20689;
    struct timeval x101728 = x101727;
    /* VAR */ struct timeval x101729 = x20689;
    struct timeval x101730 = x101729;
    struct timeval* x101731 = &x101728;
    gettimeofday(x101731, NULL);
    /* VAR */ int x101733 = 0;
    /* VAR */ int x101734 = 0;
    /* VAR */ int x101735 = 0;
    /* VAR */ int x101736 = 0;
    /* VAR */ int x101737 = 0;
    /* VAR */ int x101738 = 0;
    /* VAR */ int x101739 = 0;
    /* VAR */ int x101740 = 0;
    int* x101779 = &(x101760);
    GTree* x101780 = g_tree_new(x101779);
    /* VAR */ int x101781 = 0;
    /* VAR */ int x101782 = 0;
    while(1) {
      
      int x101784 = x101740;
      int x101785 = x101784<(x22359);
      if (!(x101785)) break; 
      
      int x16013 = x101740;
      struct NATIONRecord* x514 = x24898[x16013];
      int x516 = x514->N_NATIONKEY;
      void* x27804 = (void*){x516};
      void* x27805 = (void*){x514};
      void* x27806 = g_hash_table_lookup(x101664, x27804);
      GList** x27807 = (GList**){x27806};
      GList** x27808 = NULL;
      int x27809 = x27807==(x27808);
      /* VAR */ GList** ite80936 = 0;
      if(x27809) {
        GList** x80937 = malloc(8);
        GList* x80938 = NULL;
        pointer_assign(x80937, x80938);
        ite80936 = x80937;
      } else {
        
        ite80936 = x27807;
      };
      GList** x27813 = ite80936;
      GList* x27814 = *(x27813);
      GList* x27815 = g_list_prepend(x27814, x27805);
      pointer_assign(x27813, x27815);
      void* x27817 = (void*){x27813};
      g_hash_table_insert(x101664, x27804, x27817);
      int x16018 = x101740;
      int x520 = x16018+(1);
      x101740 = x520;
    };
    while(1) {
      
      int x101813 = x101739;
      int x101814 = x101813<(x22510);
      if (!(x101814)) break; 
      
      int x16027 = x101739;
      struct SUPPLIERRecord* x529 = x25045[x16027];
      int x531 = x529->S_SUPPKEY;
      void* x27829 = (void*){x531};
      void* x27830 = (void*){x529};
      void* x27831 = g_hash_table_lookup(x101674, x27829);
      GList** x27832 = (GList**){x27831};
      GList** x27833 = NULL;
      int x27834 = x27832==(x27833);
      /* VAR */ GList** ite80964 = 0;
      if(x27834) {
        GList** x80965 = malloc(8);
        GList* x80966 = NULL;
        pointer_assign(x80965, x80966);
        ite80964 = x80965;
      } else {
        
        ite80964 = x27832;
      };
      GList** x27838 = ite80964;
      GList* x27839 = *(x27838);
      GList* x27840 = g_list_prepend(x27839, x27830);
      pointer_assign(x27838, x27840);
      void* x27842 = (void*){x27838};
      g_hash_table_insert(x101674, x27829, x27842);
      int x16032 = x101739;
      int x535 = x16032+(1);
      x101739 = x535;
    };
    while(1) {
      
      int x101842 = x101738;
      int x101843 = x101842<(x22437);
      if (!(x101843)) break; 
      
      int x16041 = x101738;
      struct REGIONRecord* x544 = x24974[x16041];
      char* x546 = x544->R_NAME;
      int x61794 = strcmp(x546, "ASIA");
      int x61795 = x61794==(0);
      if(x61795) {
        int x548 = x544->R_REGIONKEY;
        void* x27857 = (void*){x548};
        void* x27858 = (void*){x544};
        void* x27859 = g_hash_table_lookup(x101684, x27857);
        GList** x27860 = (GList**){x27859};
        GList** x27861 = NULL;
        int x27862 = x27860==(x27861);
        /* VAR */ GList** ite80996 = 0;
        if(x27862) {
          GList** x80997 = malloc(8);
          GList* x80998 = NULL;
          pointer_assign(x80997, x80998);
          ite80996 = x80997;
        } else {
          
          ite80996 = x27860;
        };
        GList** x27866 = ite80996;
        GList* x27867 = *(x27866);
        GList* x27868 = g_list_prepend(x27867, x27858);
        pointer_assign(x27866, x27868);
        void* x27870 = (void*){x27866};
        g_hash_table_insert(x101684, x27857, x27870);
      };
      int x16049 = x101738;
      int x553 = x16049+(1);
      x101738 = x553;
    };
    while(1) {
      
      int x101875 = x101737;
      int x101876 = x101875<(x22359);
      if (!(x101876)) break; 
      
      int x16058 = x101737;
      struct NATIONRecord* x562 = x24898[x16058];
      int x564 = x562->N_NATIONKEY;
      void* x27882 = (void*){x564};
      void* x27883 = (void*){x562};
      void* x27884 = g_hash_table_lookup(x101694, x27882);
      GList** x27885 = (GList**){x27884};
      GList** x27886 = NULL;
      int x27887 = x27885==(x27886);
      /* VAR */ GList** ite81024 = 0;
      if(x27887) {
        GList** x81025 = malloc(8);
        GList* x81026 = NULL;
        pointer_assign(x81025, x81026);
        ite81024 = x81025;
      } else {
        
        ite81024 = x27885;
      };
      GList** x27891 = ite81024;
      GList* x27892 = *(x27891);
      GList* x27893 = g_list_prepend(x27892, x27883);
      pointer_assign(x27891, x27893);
      void* x27895 = (void*){x27891};
      g_hash_table_insert(x101694, x27882, x27895);
      int x16063 = x101737;
      int x568 = x16063+(1);
      x101737 = x568;
    };
    while(1) {
      
      int x101904 = x101734;
      int x101905 = x101904<(x21894);
      if (!(x101905)) break; 
      
      int x16072 = x101734;
      struct LINEITEMRecord* x577 = x24444[x16072];
      int x579 = x577->L_PARTKEY;
      void* x27907 = (void*){x579};
      void* x27908 = (void*){x577};
      void* x27909 = g_hash_table_lookup(x101724, x27907);
      GList** x27910 = (GList**){x27909};
      GList** x27911 = NULL;
      int x27912 = x27910==(x27911);
      /* VAR */ GList** ite81052 = 0;
      if(x27912) {
        GList** x81053 = malloc(8);
        GList* x81054 = NULL;
        pointer_assign(x81053, x81054);
        ite81052 = x81053;
      } else {
        
        ite81052 = x27910;
      };
      GList** x27916 = ite81052;
      GList* x27917 = *(x27916);
      GList* x27918 = g_list_prepend(x27917, x27908);
      pointer_assign(x27916, x27918);
      void* x27920 = (void*){x27916};
      g_hash_table_insert(x101724, x27907, x27920);
      int x16077 = x101734;
      int x583 = x16077+(1);
      x101734 = x583;
    };
    while(1) {
      
      int x101933 = x101733;
      int x101934 = x101933<(x21734);
      if (!(x101934)) break; 
      
      int x16086 = x101733;
      struct PARTRecord* x592 = x24290[x16086];
      char* x594 = x592->P_TYPE;
      int x61873 = strcmp(x594, "MEDIUM ANODIZED NICKEL");
      int x61874 = x61873==(0);
      if(x61874) {
        int x596 = x592->P_PARTKEY;
        void* x27935 = (void*){x596};
        void* x27936 = g_hash_table_lookup(x101724, x27935);
        GList** x27937 = (GList**){x27936};
        int x48262 = x27937!=(NULL);
        if(x48262) {
          GList* x30917 = *(x27937);
          /* VAR */ GList* x30918 = x30917;
          while(1) {
            
            GList* x30919 = x30918;
            GList* x30920 = NULL;
            int x30921 = x30919!=(x30920);
            if (!(x30921)) break; 
            
            GList* x30922 = x30918;
            void* x30923 = g_list_nth_data(x30922, 0);
            struct LINEITEMRecord* x30924 = (struct LINEITEMRecord*){x30923};
            GList* x30925 = x30918;
            GList* x30926 = g_list_next(x30925);
            x30918 = x30926;
            int x30928 = x30924->L_PARTKEY;
            int x30929 = x30928==(x596);
            if(x30929) {
              int x3507 = x30924->L_ORDERKEY;
              int x3508 = x30924->L_SUPPKEY;
              int x3509 = x30924->L_LINENUMBER;
              double x3510 = x30924->L_QUANTITY;
              double x3511 = x30924->L_EXTENDEDPRICE;
              double x3512 = x30924->L_DISCOUNT;
              double x3513 = x30924->L_TAX;
              char x3514 = x30924->L_RETURNFLAG;
              char x3515 = x30924->L_LINESTATUS;
              int x3516 = x30924->L_SHIPDATE;
              int x3517 = x30924->L_COMMITDATE;
              int x3518 = x30924->L_RECEIPTDATE;
              char* x3519 = x30924->L_SHIPINSTRUCT;
              char* x3520 = x30924->L_SHIPMODE;
              char* x3521 = x30924->L_COMMENT;
              char* x3522 = x592->P_NAME;
              char* x3523 = x592->P_MFGR;
              char* x3524 = x592->P_BRAND;
              int x3525 = x592->P_SIZE;
              char* x3526 = x592->P_CONTAINER;
              double x3527 = x592->P_RETAILPRICE;
              char* x3528 = x592->P_COMMENT;
              struct LINEITEMRecord_PARTRecord* x26560 = (struct LINEITEMRecord_PARTRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord));
              memset(x26560, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord));
              x26560->L_ORDERKEY = x3507; x26560->L_PARTKEY = x30928; x26560->L_SUPPKEY = x3508; x26560->L_LINENUMBER = x3509; x26560->L_QUANTITY = x3510; x26560->L_EXTENDEDPRICE = x3511; x26560->L_DISCOUNT = x3512; x26560->L_TAX = x3513; x26560->L_RETURNFLAG = x3514; x26560->L_LINESTATUS = x3515; x26560->L_SHIPDATE = x3516; x26560->L_COMMITDATE = x3517; x26560->L_RECEIPTDATE = x3518; x26560->L_SHIPINSTRUCT = x3519; x26560->L_SHIPMODE = x3520; x26560->L_COMMENT = x3521; x26560->P_PARTKEY = x596; x26560->P_NAME = x3522; x26560->P_MFGR = x3523; x26560->P_BRAND = x3524; x26560->P_TYPE = x594; x26560->P_SIZE = x3525; x26560->P_CONTAINER = x3526; x26560->P_RETAILPRICE = x3527; x26560->P_COMMENT = x3528;
              int x617 = x26560->L_ORDERKEY;
              void* x27973 = (void*){x617};
              void* x27974 = (void*){x26560};
              void* x27975 = g_hash_table_lookup(x101714, x27973);
              GList** x27976 = (GList**){x27975};
              GList** x27977 = NULL;
              int x27978 = x27976==(x27977);
              /* VAR */ GList** ite81181 = 0;
              if(x27978) {
                GList** x81182 = malloc(8);
                GList* x81183 = NULL;
                pointer_assign(x81182, x81183);
                ite81181 = x81182;
              } else {
                
                ite81181 = x27976;
              };
              GList** x27982 = ite81181;
              GList* x27983 = *(x27982);
              GList* x27984 = g_list_prepend(x27983, x27974);
              pointer_assign(x27982, x27984);
              void* x27986 = (void*){x27982};
              g_hash_table_insert(x101714, x27973, x27986);
            };
          };
        };
      };
      int x16161 = x101733;
      int x626 = x16161+(1);
      x101733 = x626;
    };
    while(1) {
      
      int x102063 = x101735;
      int x102064 = x102063<(x22088);
      if (!(x102064)) break; 
      
      int x16171 = x101735;
      struct ORDERSRecord* x636 = x24635[x16171];
      int x638 = x636->O_ORDERDATE;
      int x639 = x638>=(19950101);
      /* VAR */ int ite88166 = 0;
      if(x639) {
        int x102071 = x638<=(19961231);
        ite88166 = x102071;
      } else {
        
        ite88166 = 0;
      };
      int x81204 = ite88166;
      if(x81204) {
        int x642 = x636->O_ORDERKEY;
        void* x28004 = (void*){x642};
        void* x28005 = g_hash_table_lookup(x101714, x28004);
        GList** x28006 = (GList**){x28005};
        int x48384 = x28006!=(NULL);
        if(x48384) {
          GList* x31050 = *(x28006);
          /* VAR */ GList* x31051 = x31050;
          while(1) {
            
            GList* x31052 = x31051;
            GList* x31053 = NULL;
            int x31054 = x31052!=(x31053);
            if (!(x31054)) break; 
            
            GList* x31055 = x31051;
            void* x31056 = g_list_nth_data(x31055, 0);
            struct LINEITEMRecord_PARTRecord* x31057 = (struct LINEITEMRecord_PARTRecord*){x31056};
            GList* x31058 = x31051;
            GList* x31059 = g_list_next(x31058);
            x31051 = x31059;
            int x31061 = x31057->L_ORDERKEY;
            int x31062 = x31061==(x642);
            if(x31062) {
              int x3606 = x31057->L_PARTKEY;
              int x3607 = x31057->L_SUPPKEY;
              int x3608 = x31057->L_LINENUMBER;
              double x3609 = x31057->L_QUANTITY;
              double x3610 = x31057->L_EXTENDEDPRICE;
              double x3611 = x31057->L_DISCOUNT;
              double x3612 = x31057->L_TAX;
              char x3613 = x31057->L_RETURNFLAG;
              char x3614 = x31057->L_LINESTATUS;
              int x3615 = x31057->L_SHIPDATE;
              int x3616 = x31057->L_COMMITDATE;
              int x3617 = x31057->L_RECEIPTDATE;
              char* x3618 = x31057->L_SHIPINSTRUCT;
              char* x3619 = x31057->L_SHIPMODE;
              char* x3620 = x31057->L_COMMENT;
              int x3621 = x31057->P_PARTKEY;
              char* x3622 = x31057->P_NAME;
              char* x3623 = x31057->P_MFGR;
              char* x3624 = x31057->P_BRAND;
              char* x3625 = x31057->P_TYPE;
              int x3626 = x31057->P_SIZE;
              char* x3627 = x31057->P_CONTAINER;
              double x3628 = x31057->P_RETAILPRICE;
              char* x3629 = x31057->P_COMMENT;
              int x3630 = x636->O_CUSTKEY;
              char x3631 = x636->O_ORDERSTATUS;
              double x3632 = x636->O_TOTALPRICE;
              char* x3633 = x636->O_ORDERPRIORITY;
              char* x3634 = x636->O_CLERK;
              int x3635 = x636->O_SHIPPRIORITY;
              char* x3636 = x636->O_COMMENT;
              struct LINEITEMRecord_PARTRecord_ORDERSRecord* x26621 = (struct LINEITEMRecord_PARTRecord_ORDERSRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord_ORDERSRecord));
              memset(x26621, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord_ORDERSRecord));
              x26621->L_ORDERKEY = x31061; x26621->L_PARTKEY = x3606; x26621->L_SUPPKEY = x3607; x26621->L_LINENUMBER = x3608; x26621->L_QUANTITY = x3609; x26621->L_EXTENDEDPRICE = x3610; x26621->L_DISCOUNT = x3611; x26621->L_TAX = x3612; x26621->L_RETURNFLAG = x3613; x26621->L_LINESTATUS = x3614; x26621->L_SHIPDATE = x3615; x26621->L_COMMITDATE = x3616; x26621->L_RECEIPTDATE = x3617; x26621->L_SHIPINSTRUCT = x3618; x26621->L_SHIPMODE = x3619; x26621->L_COMMENT = x3620; x26621->P_PARTKEY = x3621; x26621->P_NAME = x3622; x26621->P_MFGR = x3623; x26621->P_BRAND = x3624; x26621->P_TYPE = x3625; x26621->P_SIZE = x3626; x26621->P_CONTAINER = x3627; x26621->P_RETAILPRICE = x3628; x26621->P_COMMENT = x3629; x26621->O_ORDERKEY = x642; x26621->O_CUSTKEY = x3630; x26621->O_ORDERSTATUS = x3631; x26621->O_TOTALPRICE = x3632; x26621->O_ORDERDATE = x638; x26621->O_ORDERPRIORITY = x3633; x26621->O_CLERK = x3634; x26621->O_SHIPPRIORITY = x3635; x26621->O_COMMENT = x3636;
              int x663 = x26621->O_CUSTKEY;
              void* x28051 = (void*){x663};
              void* x28052 = (void*){x26621};
              void* x28053 = g_hash_table_lookup(x101704, x28051);
              GList** x28054 = (GList**){x28053};
              GList** x28055 = NULL;
              int x28056 = x28054==(x28055);
              /* VAR */ GList** ite81329 = 0;
              if(x28056) {
                GList** x81330 = malloc(8);
                GList* x81331 = NULL;
                pointer_assign(x81330, x81331);
                ite81329 = x81330;
              } else {
                
                ite81329 = x28054;
              };
              GList** x28060 = ite81329;
              GList* x28061 = *(x28060);
              GList* x28062 = g_list_prepend(x28061, x28052);
              pointer_assign(x28060, x28062);
              void* x28064 = (void*){x28060};
              g_hash_table_insert(x101704, x28051, x28064);
            };
          };
        };
      };
      int x16266 = x101735;
      int x672 = x16266+(1);
      x101735 = x672;
    };
    while(1) {
      
      int x102217 = x101736;
      int x102218 = x102217<(x22219);
      if (!(x102218)) break; 
      
      int x16275 = x101736;
      struct CUSTOMERRecord* x681 = x24763[x16275];
      int x683 = x681->C_CUSTKEY;
      void* x28077 = (void*){x683};
      void* x28078 = g_hash_table_lookup(x101704, x28077);
      GList** x28079 = (GList**){x28078};
      int x48519 = x28079!=(NULL);
      if(x48519) {
        GList* x32128 = *(x28079);
        /* VAR */ GList* x32129 = x32128;
        while(1) {
          
          GList* x32130 = x32129;
          GList* x32131 = NULL;
          int x32132 = x32130!=(x32131);
          if (!(x32132)) break; 
          
          GList* x32133 = x32129;
          void* x32134 = g_list_nth_data(x32133, 0);
          struct LINEITEMRecord_PARTRecord_ORDERSRecord* x32135 = (struct LINEITEMRecord_PARTRecord_ORDERSRecord*){x32134};
          GList* x32136 = x32129;
          GList* x32137 = g_list_next(x32136);
          x32129 = x32137;
          int x32139 = x32135->O_CUSTKEY;
          int x32140 = x32139==(x683);
          if(x32140) {
            int x6368 = x32135->L_ORDERKEY;
            int x6369 = x32135->L_PARTKEY;
            int x6370 = x32135->L_SUPPKEY;
            int x6371 = x32135->L_LINENUMBER;
            double x6372 = x32135->L_QUANTITY;
            double x6373 = x32135->L_EXTENDEDPRICE;
            double x6374 = x32135->L_DISCOUNT;
            double x6375 = x32135->L_TAX;
            char x6376 = x32135->L_RETURNFLAG;
            char x6377 = x32135->L_LINESTATUS;
            int x6378 = x32135->L_SHIPDATE;
            int x6379 = x32135->L_COMMITDATE;
            int x6380 = x32135->L_RECEIPTDATE;
            char* x6381 = x32135->L_SHIPINSTRUCT;
            char* x6382 = x32135->L_SHIPMODE;
            char* x6383 = x32135->L_COMMENT;
            int x6384 = x32135->P_PARTKEY;
            char* x6385 = x32135->P_NAME;
            char* x6386 = x32135->P_MFGR;
            char* x6387 = x32135->P_BRAND;
            char* x6388 = x32135->P_TYPE;
            int x6389 = x32135->P_SIZE;
            char* x6390 = x32135->P_CONTAINER;
            double x6391 = x32135->P_RETAILPRICE;
            char* x6392 = x32135->P_COMMENT;
            int x6393 = x32135->O_ORDERKEY;
            char x6394 = x32135->O_ORDERSTATUS;
            double x6395 = x32135->O_TOTALPRICE;
            int x6396 = x32135->O_ORDERDATE;
            char* x6397 = x32135->O_ORDERPRIORITY;
            char* x6398 = x32135->O_CLERK;
            int x6399 = x32135->O_SHIPPRIORITY;
            char* x6400 = x32135->O_COMMENT;
            char* x6401 = x681->C_NAME;
            char* x6402 = x681->C_ADDRESS;
            int x6403 = x681->C_NATIONKEY;
            char* x6404 = x681->C_PHONE;
            double x6405 = x681->C_ACCTBAL;
            char* x6406 = x681->C_MKTSEGMENT;
            char* x6407 = x681->C_COMMENT;
            void* x28129 = (void*){x6403};
            void* x28130 = g_hash_table_lookup(x101694, x28129);
            GList** x28131 = (GList**){x28130};
            int x49541 = x28131!=(NULL);
            if(x49541) {
              GList* x31653 = *(x28131);
              /* VAR */ GList* x31654 = x31653;
              while(1) {
                
                GList* x31655 = x31654;
                GList* x31656 = NULL;
                int x31657 = x31655!=(x31656);
                if (!(x31657)) break; 
                
                GList* x31658 = x31654;
                void* x31659 = g_list_nth_data(x31658, 0);
                struct NATIONRecord* x31660 = (struct NATIONRecord*){x31659};
                GList* x31661 = x31654;
                GList* x31662 = g_list_next(x31661);
                x31654 = x31662;
                int x31664 = x31660->N_NATIONKEY;
                int x31665 = x31664==(x6403);
                if(x31665) {
                  char* x7745 = x31660->N_NAME;
                  int x7746 = x31660->N_REGIONKEY;
                  char* x7747 = x31660->N_COMMENT;
                  void* x28144 = (void*){x7746};
                  void* x28145 = g_hash_table_lookup(x101684, x28144);
                  GList** x28146 = (GList**){x28145};
                  int x50015 = x28146!=(NULL);
                  if(x50015) {
                    GList* x31423 = *(x28146);
                    /* VAR */ GList* x31424 = x31423;
                    while(1) {
                      
                      GList* x31425 = x31424;
                      GList* x31426 = NULL;
                      int x31427 = x31425!=(x31426);
                      if (!(x31427)) break; 
                      
                      GList* x31428 = x31424;
                      void* x31429 = g_list_nth_data(x31428, 0);
                      struct REGIONRecord* x31430 = (struct REGIONRecord*){x31429};
                      GList* x31431 = x31424;
                      GList* x31432 = g_list_next(x31431);
                      x31424 = x31432;
                      int x31434 = x31430->R_REGIONKEY;
                      int x31435 = x31434==(x7746);
                      if(x31435) {
                        char* x8435 = x31430->R_NAME;
                        char* x8436 = x31430->R_COMMENT;
                        void* x28158 = (void*){x6370};
                        void* x28159 = g_hash_table_lookup(x101674, x28158);
                        GList** x28160 = (GList**){x28159};
                        int x50251 = x28160!=(NULL);
                        if(x50251) {
                          GList* x31315 = *(x28160);
                          /* VAR */ GList* x31316 = x31315;
                          while(1) {
                            
                            GList* x31317 = x31316;
                            GList* x31318 = NULL;
                            int x31319 = x31317!=(x31318);
                            if (!(x31319)) break; 
                            
                            GList* x31320 = x31316;
                            void* x31321 = g_list_nth_data(x31320, 0);
                            struct SUPPLIERRecord* x31322 = (struct SUPPLIERRecord*){x31321};
                            GList* x31323 = x31316;
                            GList* x31324 = g_list_next(x31323);
                            x31316 = x31324;
                            int x31326 = x31322->S_SUPPKEY;
                            int x31327 = x31326==(x6370);
                            if(x31327) {
                              char* x8781 = x31322->S_NAME;
                              char* x8782 = x31322->S_ADDRESS;
                              int x8783 = x31322->S_NATIONKEY;
                              char* x8784 = x31322->S_PHONE;
                              double x8785 = x31322->S_ACCTBAL;
                              char* x8786 = x31322->S_COMMENT;
                              void* x28176 = (void*){x8783};
                              void* x28177 = g_hash_table_lookup(x101664, x28176);
                              GList** x28178 = (GList**){x28177};
                              int x50373 = x28178!=(NULL);
                              if(x50373) {
                                GList* x31270 = *(x28178);
                                /* VAR */ GList* x31271 = x31270;
                                while(1) {
                                  
                                  GList* x31272 = x31271;
                                  GList* x31273 = NULL;
                                  int x31274 = x31272!=(x31273);
                                  if (!(x31274)) break; 
                                  
                                  GList* x31275 = x31271;
                                  void* x31276 = g_list_nth_data(x31275, 0);
                                  struct NATIONRecord* x31277 = (struct NATIONRecord*){x31276};
                                  GList* x31278 = x31271;
                                  GList* x31279 = g_list_next(x31278);
                                  x31271 = x31279;
                                  int x31281 = x31277->N_NATIONKEY;
                                  int x31282 = x31281==(x8783);
                                  if(x31282) {
                                    char* x8957 = x31277->N_NAME;
                                    int x8958 = x31277->N_REGIONKEY;
                                    char* x8959 = x31277->N_COMMENT;
                                    struct NATIONRecord_SUPPLIERRecord_REGIONRecord_NATIONRecord_LINEITEMRecord_PARTRecord_ORDERSRecord_CUSTOMERRecord* x26736 = (struct NATIONRecord_SUPPLIERRecord_REGIONRecord_NATIONRecord_LINEITEMRecord_PARTRecord_ORDERSRecord_CUSTOMERRecord*)malloc(1 * sizeof(struct NATIONRecord_SUPPLIERRecord_REGIONRecord_NATIONRecord_LINEITEMRecord_PARTRecord_ORDERSRecord_CUSTOMERRecord));
                                    memset(x26736, 0, 1 * sizeof(struct NATIONRecord_SUPPLIERRecord_REGIONRecord_NATIONRecord_LINEITEMRecord_PARTRecord_ORDERSRecord_CUSTOMERRecord));
                                    x26736->REC1_N_NATIONKEY = x31281; x26736->REC1_N_NAME = x8957; x26736->REC1_N_REGIONKEY = x8958; x26736->REC1_N_COMMENT = x8959; x26736->REC2_S_SUPPKEY = x31326; x26736->REC2_S_NAME = x8781; x26736->REC2_S_ADDRESS = x8782; x26736->REC2_S_NATIONKEY = x8783; x26736->REC2_S_PHONE = x8784; x26736->REC2_S_ACCTBAL = x8785; x26736->REC2_S_COMMENT = x8786; x26736->REC2_R_REGIONKEY = x31434; x26736->REC2_R_NAME = x8435; x26736->REC2_R_COMMENT = x8436; x26736->REC2_N_NATIONKEY = x31664; x26736->REC2_N_NAME = x7745; x26736->REC2_N_REGIONKEY = x7746; x26736->REC2_N_COMMENT = x7747; x26736->REC2_L_ORDERKEY = x6368; x26736->REC2_L_PARTKEY = x6369; x26736->REC2_L_SUPPKEY = x6370; x26736->REC2_L_LINENUMBER = x6371; x26736->REC2_L_QUANTITY = x6372; x26736->REC2_L_EXTENDEDPRICE = x6373; x26736->REC2_L_DISCOUNT = x6374; x26736->REC2_L_TAX = x6375; x26736->REC2_L_RETURNFLAG = x6376; x26736->REC2_L_LINESTATUS = x6377; x26736->REC2_L_SHIPDATE = x6378; x26736->REC2_L_COMMITDATE = x6379; x26736->REC2_L_RECEIPTDATE = x6380; x26736->REC2_L_SHIPINSTRUCT = x6381; x26736->REC2_L_SHIPMODE = x6382; x26736->REC2_L_COMMENT = x6383; x26736->REC2_P_PARTKEY = x6384; x26736->REC2_P_NAME = x6385; x26736->REC2_P_MFGR = x6386; x26736->REC2_P_BRAND = x6387; x26736->REC2_P_TYPE = x6388; x26736->REC2_P_SIZE = x6389; x26736->REC2_P_CONTAINER = x6390; x26736->REC2_P_RETAILPRICE = x6391; x26736->REC2_P_COMMENT = x6392; x26736->REC2_O_ORDERKEY = x6393; x26736->REC2_O_CUSTKEY = x32139; x26736->REC2_O_ORDERSTATUS = x6394; x26736->REC2_O_TOTALPRICE = x6395; x26736->REC2_O_ORDERDATE = x6396; x26736->REC2_O_ORDERPRIORITY = x6397; x26736->REC2_O_CLERK = x6398; x26736->REC2_O_SHIPPRIORITY = x6399; x26736->REC2_O_COMMENT = x6400; x26736->REC2_C_CUSTKEY = x683; x26736->REC2_C_NAME = x6401; x26736->REC2_C_ADDRESS = x6402; x26736->REC2_C_NATIONKEY = x6403; x26736->REC2_C_PHONE = x6404; x26736->REC2_C_ACCTBAL = x6405; x26736->REC2_C_MKTSEGMENT = x6406; x26736->REC2_C_COMMENT = x6407;
                                    int x2678 = x26736->REC2_O_ORDERDATE;
                                    int x21314 = x2678/(10000);
                                    void* x31292 = g_hash_table_lookup(x101654, x21314);
                                    int x31245 = x31292==(NULL);
                                    /* VAR */ struct AGGRecord_Int* ite83611 = 0;
                                    if(x31245) {
                                      double* x83612 = (double*)malloc(3 * sizeof(double));
                                      memset(x83612, 0, 3 * sizeof(double));
                                      struct AGGRecord_Int* x83613 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
                                      memset(x83613, 0, 1 * sizeof(struct AGGRecord_Int));
                                      x83613->key = x21314; x83613->aggs = x83612;
                                      g_hash_table_insert(x101654, x21314, x83613);
                                      ite83611 = x83613;
                                    } else {
                                      
                                      ite83611 = x31292;
                                    };
                                    struct AGGRecord_Int* x31255 = ite83611;
                                    double* x2684 = x31255->aggs;
                                    double x2698 = x2684[0];
                                    double x2699 = x26736->REC2_L_EXTENDEDPRICE;
                                    double x2700 = x26736->REC2_L_DISCOUNT;
                                    double x2701 = 1.0-(x2700);
                                    double x2702 = x2699*(x2701);
                                    double x2703 = x2698+(x2702);
                                    *x2684 = x2703;
                                    double x2711 = x2684[1];
                                    char* x2712 = x26736->REC1_N_NAME;
                                    int x64100 = strcmp(x2712, "INDONESIA");
                                    int x64101 = x64100==(0);
                                    /* VAR */ double ite83634 = 0;
                                    if(x64101) {
                                      double x83635 = x2711+(x2702);
                                      ite83634 = x83635;
                                    } else {
                                      
                                      ite83634 = x2711;
                                    };
                                    double x2715 = ite83634;
                                    *(x2684 + 1) = x2715;
                                  };
                                };
                              };
                            };
                          };
                        };
                      };
                    };
                  };
                };
              };
            };
          };
        };
      };
      int x18543 = x101736;
      int x2742 = x18543+(1);
      x101736 = x2742;
    };
    GList* x104525 = g_hash_table_get_keys(x101654);
    /* VAR */ GList* x104526 = x104525;
    int x104527 = g_hash_table_size(x101654);
    int x70973 = 0;
    for(; x70973 < x104527 ; x70973 += 1) {
      
      GList* x70974 = x104526;
      void* x70975 = g_list_nth_data(x70974, 0);
      GList* x70976 = g_list_next(x70974);
      x104526 = x70976;
      void* x70978 = g_hash_table_lookup(x101654, x70975);
      struct AGGRecord_Int* x70980 = (struct AGGRecord_Int*){x70978};
      double* x70981 = x70980->aggs;
      double x70982 = x70981[1];
      double x70983 = x70981[0];
      double x70984 = x70982/(x70983);
      *(x70981 + 2) = x70984;
      g_tree_insert(x101780, x70980, x70980);
    };
    while(1) {
      
      int x18561 = x101781;
      int x2762 = !(x18561);
      /* VAR */ int ite90659 = 0;
      if(x2762) {
        int x104562 = g_tree_nnodes(x101780);
        int x104563 = x104562!=(0);
        ite90659 = x104563;
      } else {
        
        ite90659 = 0;
      };
      int x83689 = ite90659;
      if (!(x83689)) break; 
      
      void* x33170 = NULL;
      void** x33178 = &(x33170);
      g_tree_foreach(x101780, x33177, x33178);
      struct AGGRecord_Int* x33180 = (struct AGGRecord_Int*){x33170};
      int x33181 = g_tree_remove(x101780, x33180);
      if(0) {
        x101781 = 1;
      } else {
        
        int x2775 = x33180->key;
        double* x2776 = x33180->aggs;
        double x2777 = x2776[2];
        printf("%d|%.4f\n", x2775, x2777);
        int x18578 = x101782;
        int x2780 = x18578+(1);
        x101782 = x2780;
      };
    };
    int x104589 = x101782;
    printf("(%d rows)\n", x104589);
    struct timeval* x104591 = &x101730;
    gettimeofday(x104591, NULL);
    struct timeval* x104593 = &x101726;
    struct timeval* x104594 = &x101730;
    struct timeval* x104595 = &x101728;
    long x104596 = timeval_subtract(x104593, x104594, x104595);
    printf("Generated code run in %ld milliseconds.\n", x104596);
  };
}
/* ----------- FUNCTIONS ----------- */
int x101648(int x30607) {
  return x30607; 
}

int x101650(int x30612, int x30613) {
  int x30614 = x30612==(x30613);
  return x30614; 
}

int x101655(void* x27698) {
  int x27699 = g_direct_hash(x27698);
  return x27699; 
}

int x101658(void* x27701, void* x27702) {
  int x27703 = g_direct_equal(x27701, x27702);
  return x27703; 
}

int x101665(void* x27708) {
  int x27709 = g_direct_hash(x27708);
  return x27709; 
}

int x101668(void* x27711, void* x27712) {
  int x27713 = g_direct_equal(x27711, x27712);
  return x27713; 
}

int x101675(void* x27718) {
  int x27719 = g_direct_hash(x27718);
  return x27719; 
}

int x101678(void* x27721, void* x27722) {
  int x27723 = g_direct_equal(x27721, x27722);
  return x27723; 
}

int x101685(void* x27728) {
  int x27729 = g_direct_hash(x27728);
  return x27729; 
}

int x101688(void* x27731, void* x27732) {
  int x27733 = g_direct_equal(x27731, x27732);
  return x27733; 
}

int x101695(void* x27738) {
  int x27739 = g_direct_hash(x27738);
  return x27739; 
}

int x101698(void* x27741, void* x27742) {
  int x27743 = g_direct_equal(x27741, x27742);
  return x27743; 
}

int x101705(void* x27748) {
  int x27749 = g_direct_hash(x27748);
  return x27749; 
}

int x101708(void* x27751, void* x27752) {
  int x27753 = g_direct_equal(x27751, x27752);
  return x27753; 
}

int x101715(void* x27758) {
  int x27759 = g_direct_hash(x27758);
  return x27759; 
}

int x101718(void* x27761, void* x27762) {
  int x27763 = g_direct_equal(x27761, x27762);
  return x27763; 
}

int x101760(struct AGGRecord_Int* x491, struct AGGRecord_Int* x492) {
  int x493 = x491->key;
  int x494 = x492->key;
  int x495 = x493<(x494);
  /* VAR */ int ite80908 = 0;
  if(x495) {
    ite80908 = -1;
  } else {
    
    int x80910 = x493>(x494);
    /* VAR */ int ite80912 = 0;
    if(x80910) {
      ite80912 = 1;
    } else {
      
      ite80912 = 0;
    };
    int x80911 = ite80912;
    ite80908 = x80911;
  };
  int x498 = ite80908;
  return x498; 
}

int x33177(void* x33171, void* x33172, void* x33173) {
  struct AGGRecord_Int** x33174 = (struct AGGRecord_Int**){x33173};
  struct AGGRecord_Int* x33175 = (struct AGGRecord_Int*){x33172};
  pointer_assign(x33174, x33175);
  return 1; 
}
