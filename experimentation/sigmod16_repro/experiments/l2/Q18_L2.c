#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_Int_ORDERSRecord;
  struct Q18GRPRecord;
  struct AGGRecord_Int;
  struct AGGRecord_Q18GRPRecord;
  
  struct AGGRecord_Int_ORDERSRecord {
  int key;
  double* aggs;
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
  
  struct Q18GRPRecord {
  char* C_NAME;
  int C_CUSTKEY;
  int O_ORDERKEY;
  int O_ORDERDATE;
  double O_TOTALPRICE;
  };
  
  struct AGGRecord_Int {
  int key;
  double* aggs;
  };
  
  struct AGGRecord_Q18GRPRecord {
  struct Q18GRPRecord* key;
  double* aggs;
  };
  
  


int x36908(struct Q18GRPRecord* x14359);

int x36936(struct Q18GRPRecord* x14364, struct Q18GRPRecord* x14365);

int x36980(void* x12634);

int x36983(void* x12637, void* x12638);

int x36990(void* x12644);

int x36993(void* x12647, void* x12648);

int x37000(int x14392);

int x37002(int x14397, int x14398);

int x37139(struct AGGRecord_Q18GRPRecord* x223, struct AGGRecord_Q18GRPRecord* x224);

int x14909(void* x14903, void* x14904, void* x14905);
/* GLOBAL VARS */

struct timeval x8227;
int main(int argc, char** argv) {
  FILE* x8900 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x8901 = 0;
  int x8902 = x8901;
  int* x8903 = &x8902;
  int x8904 = fscanf(x8900, "%d", x8903);
  pclose(x8900);
  int* x10510 = (int*)malloc(x8902 * sizeof(int));
  memset(x10510, 0, x8902 * sizeof(int));
  int* x10511 = (int*)malloc(x8902 * sizeof(int));
  memset(x10511, 0, x8902 * sizeof(int));
  int* x10512 = (int*)malloc(x8902 * sizeof(int));
  memset(x10512, 0, x8902 * sizeof(int));
  int* x10513 = (int*)malloc(x8902 * sizeof(int));
  memset(x10513, 0, x8902 * sizeof(int));
  double* x10514 = (double*)malloc(x8902 * sizeof(double));
  memset(x10514, 0, x8902 * sizeof(double));
  double* x10515 = (double*)malloc(x8902 * sizeof(double));
  memset(x10515, 0, x8902 * sizeof(double));
  double* x10516 = (double*)malloc(x8902 * sizeof(double));
  memset(x10516, 0, x8902 * sizeof(double));
  double* x10517 = (double*)malloc(x8902 * sizeof(double));
  memset(x10517, 0, x8902 * sizeof(double));
  char* x10518 = (char*)malloc(x8902 * sizeof(char));
  memset(x10518, 0, x8902 * sizeof(char));
  char* x10519 = (char*)malloc(x8902 * sizeof(char));
  memset(x10519, 0, x8902 * sizeof(char));
  int* x10520 = (int*)malloc(x8902 * sizeof(int));
  memset(x10520, 0, x8902 * sizeof(int));
  int* x10521 = (int*)malloc(x8902 * sizeof(int));
  memset(x10521, 0, x8902 * sizeof(int));
  int* x10522 = (int*)malloc(x8902 * sizeof(int));
  memset(x10522, 0, x8902 * sizeof(int));
  char** x10523 = (char**)malloc(x8902 * sizeof(char*));
  memset(x10523, 0, x8902 * sizeof(char*));
  char** x10524 = (char**)malloc(x8902 * sizeof(char*));
  memset(x10524, 0, x8902 * sizeof(char*));
  char** x10525 = (char**)malloc(x8902 * sizeof(char*));
  memset(x10525, 0, x8902 * sizeof(char*));
  int x8923 = O_RDONLY;
  int x8924 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x8923);
  struct stat x8925 = (struct stat){0};
  /* VAR */ struct stat x8926 = x8925;
  struct stat x8927 = x8926;
  struct stat* x8928 = &x8927;
  int x8929 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x8928);
  int x8931 = PROT_READ;
  int x8932 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x8928->st_size), x8931, x8932, x8924, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite31567 = 0;
    if((x5<(x8902))) {
      char x35654 = *x3;
      ite31567 = (x35654!=('\0'));
    } else {
      
      ite31567 = 0;
    };
    int x29688 = ite31567;
    if (!(x29688)) break; 
    
    /* VAR */ int x8940 = 0;
    int x8941 = x8940;
    int* x8942 = &x8941;
    char* x8943 = strntoi_unchecked(x3, x8942);
    x3 = x8943;
    /* VAR */ int x8945 = 0;
    int x8946 = x8945;
    int* x8947 = &x8946;
    char* x8948 = strntoi_unchecked(x3, x8947);
    x3 = x8948;
    /* VAR */ int x8950 = 0;
    int x8951 = x8950;
    int* x8952 = &x8951;
    char* x8953 = strntoi_unchecked(x3, x8952);
    x3 = x8953;
    /* VAR */ int x8955 = 0;
    int x8956 = x8955;
    int* x8957 = &x8956;
    char* x8958 = strntoi_unchecked(x3, x8957);
    x3 = x8958;
    /* VAR */ double x8960 = 0.0;
    double x8961 = x8960;
    double* x8962 = &x8961;
    char* x8963 = strntod_unchecked(x3, x8962);
    x3 = x8963;
    /* VAR */ double x8965 = 0.0;
    double x8966 = x8965;
    double* x8967 = &x8966;
    char* x8968 = strntod_unchecked(x3, x8967);
    x3 = x8968;
    /* VAR */ double x8970 = 0.0;
    double x8971 = x8970;
    double* x8972 = &x8971;
    char* x8973 = strntod_unchecked(x3, x8972);
    x3 = x8973;
    /* VAR */ double x8975 = 0.0;
    double x8976 = x8975;
    double* x8977 = &x8976;
    char* x8978 = strntod_unchecked(x3, x8977);
    x3 = x8978;
    char x8980 = *x3;
    /* VAR */ char x8981 = x8980;
    x3 += 1;
    x3 += 1;
    char x8984 = x8981;
    char x8985 = *x3;
    /* VAR */ char x8986 = x8985;
    x3 += 1;
    x3 += 1;
    char x8989 = x8986;
    /* VAR */ int x8990 = 0;
    int x8991 = x8990;
    int* x8992 = &x8991;
    char* x8993 = strntoi_unchecked(x3, x8992);
    x3 = x8993;
    /* VAR */ int x8995 = 0;
    int x8996 = x8995;
    int* x8997 = &x8996;
    char* x8998 = strntoi_unchecked(x3, x8997);
    x3 = x8998;
    /* VAR */ int x9000 = 0;
    int x9001 = x9000;
    int* x9002 = &x9001;
    char* x9003 = strntoi_unchecked(x3, x9002);
    x3 = x9003;
    /* VAR */ int x9009 = 0;
    int x9010 = x9009;
    int* x9011 = &x9010;
    char* x9012 = strntoi_unchecked(x3, x9011);
    x3 = x9012;
    /* VAR */ int x9014 = 0;
    int x9015 = x9014;
    int* x9016 = &x9015;
    char* x9017 = strntoi_unchecked(x3, x9016);
    x3 = x9017;
    /* VAR */ int x9019 = 0;
    int x9020 = x9019;
    int* x9021 = &x9020;
    char* x9022 = strntoi_unchecked(x3, x9021);
    x3 = x9022;
    /* VAR */ int x9028 = 0;
    int x9029 = x9028;
    int* x9030 = &x9029;
    char* x9031 = strntoi_unchecked(x3, x9030);
    x3 = x9031;
    /* VAR */ int x9033 = 0;
    int x9034 = x9033;
    int* x9035 = &x9034;
    char* x9036 = strntoi_unchecked(x3, x9035);
    x3 = x9036;
    /* VAR */ int x9038 = 0;
    int x9039 = x9038;
    int* x9040 = &x9039;
    char* x9041 = strntoi_unchecked(x3, x9040);
    x3 = x9041;
    char* x10651 = (char*)malloc(26 * sizeof(char));
    memset(x10651, 0, 26 * sizeof(char));
    /* VAR */ char* x9048 = x3;
    while(1) {
      
      char x9049 = *x3;
      /* VAR */ int ite31688 = 0;
      if((x9049!=('|'))) {
        char x35774 = *x3;
        ite31688 = (x35774!=('\n'));
      } else {
        
        ite31688 = 0;
      };
      int x29802 = ite31688;
      if (!(x29802)) break; 
      
      x3 += 1;
    };
    char* x9056 = x9048;
    int x9057 = x3 - x9056;
    char* x9058 = x9048;
    char* x9059 = strncpy(x10651, x9058, x9057);
    x3 += 1;
    char* x10669 = (char*)malloc(11 * sizeof(char));
    memset(x10669, 0, 11 * sizeof(char));
    /* VAR */ char* x9067 = x3;
    while(1) {
      
      char x9068 = *x3;
      /* VAR */ int ite31711 = 0;
      if((x9068!=('|'))) {
        char x35796 = *x3;
        ite31711 = (x35796!=('\n'));
      } else {
        
        ite31711 = 0;
      };
      int x29818 = ite31711;
      if (!(x29818)) break; 
      
      x3 += 1;
    };
    char* x9075 = x9067;
    int x9076 = x3 - x9075;
    char* x9077 = x9067;
    char* x9078 = strncpy(x10669, x9077, x9076);
    x3 += 1;
    char* x10687 = (char*)malloc(45 * sizeof(char));
    memset(x10687, 0, 45 * sizeof(char));
    /* VAR */ char* x9086 = x3;
    while(1) {
      
      char x9087 = *x3;
      /* VAR */ int ite31734 = 0;
      if((x9087!=('|'))) {
        char x35818 = *x3;
        ite31734 = (x35818!=('\n'));
      } else {
        
        ite31734 = 0;
      };
      int x29834 = ite31734;
      if (!(x29834)) break; 
      
      x3 += 1;
    };
    char* x9094 = x9086;
    int x9095 = x3 - x9094;
    char* x9096 = x9086;
    char* x9097 = strncpy(x10687, x9096, x9095);
    x3 += 1;
    int x47 = x4;
    *(x10510 + x47) = x8941;
    *(x10511 + x47) = x8946;
    *(x10512 + x47) = x8951;
    *(x10513 + x47) = x8956;
    *(x10514 + x47) = x8961;
    *(x10515 + x47) = x8966;
    *(x10516 + x47) = x8971;
    *(x10517 + x47) = x8976;
    *(x10518 + x47) = x8984;
    *(x10519 + x47) = x8989;
    *(x10520 + x47) = (((x8991*(10000))+((x8996*(100))))+(x9001));
    *(x10521 + x47) = (((x9010*(10000))+((x9015*(100))))+(x9020));
    *(x10522 + x47) = (((x9029*(10000))+((x9034*(100))))+(x9039));
    *(x10523 + x47) = x10651;
    *(x10524 + x47) = x10669;
    *(x10525 + x47) = x10687;
    int x49 = x4;
    x4 = (x49+(1));
  };
  FILE* x9124 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x9125 = 0;
  int x9126 = x9125;
  int* x9127 = &x9126;
  int x9128 = fscanf(x9124, "%d", x9127);
  pclose(x9124);
  int* x10731 = (int*)malloc(x9126 * sizeof(int));
  memset(x10731, 0, x9126 * sizeof(int));
  int* x10732 = (int*)malloc(x9126 * sizeof(int));
  memset(x10732, 0, x9126 * sizeof(int));
  char* x10733 = (char*)malloc(x9126 * sizeof(char));
  memset(x10733, 0, x9126 * sizeof(char));
  double* x10734 = (double*)malloc(x9126 * sizeof(double));
  memset(x10734, 0, x9126 * sizeof(double));
  int* x10735 = (int*)malloc(x9126 * sizeof(int));
  memset(x10735, 0, x9126 * sizeof(int));
  char** x10736 = (char**)malloc(x9126 * sizeof(char*));
  memset(x10736, 0, x9126 * sizeof(char*));
  char** x10737 = (char**)malloc(x9126 * sizeof(char*));
  memset(x10737, 0, x9126 * sizeof(char*));
  int* x10738 = (int*)malloc(x9126 * sizeof(int));
  memset(x10738, 0, x9126 * sizeof(int));
  char** x10739 = (char**)malloc(x9126 * sizeof(char*));
  memset(x10739, 0, x9126 * sizeof(char*));
  int x9140 = O_RDONLY;
  int x9141 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x9140);
  /* VAR */ struct stat x9142 = x8925;
  struct stat x9143 = x9142;
  struct stat* x9144 = &x9143;
  int x9145 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x9144);
  int x9147 = PROT_READ;
  int x9148 = MAP_PRIVATE;
  char* x55 = mmap(NULL, (x9144->st_size), x9147, x9148, x9141, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    /* VAR */ int ite31801 = 0;
    if((x57<(x9126))) {
      char x35884 = *x55;
      ite31801 = (x35884!=('\0'));
    } else {
      
      ite31801 = 0;
    };
    int x29894 = ite31801;
    if (!(x29894)) break; 
    
    /* VAR */ int x9156 = 0;
    int x9157 = x9156;
    int* x9158 = &x9157;
    char* x9159 = strntoi_unchecked(x55, x9158);
    x55 = x9159;
    /* VAR */ int x9161 = 0;
    int x9162 = x9161;
    int* x9163 = &x9162;
    char* x9164 = strntoi_unchecked(x55, x9163);
    x55 = x9164;
    char x9166 = *x55;
    /* VAR */ char x9167 = x9166;
    x55 += 1;
    x55 += 1;
    char x9170 = x9167;
    /* VAR */ double x9171 = 0.0;
    double x9172 = x9171;
    double* x9173 = &x9172;
    char* x9174 = strntod_unchecked(x55, x9173);
    x55 = x9174;
    /* VAR */ int x9176 = 0;
    int x9177 = x9176;
    int* x9178 = &x9177;
    char* x9179 = strntoi_unchecked(x55, x9178);
    x55 = x9179;
    /* VAR */ int x9181 = 0;
    int x9182 = x9181;
    int* x9183 = &x9182;
    char* x9184 = strntoi_unchecked(x55, x9183);
    x55 = x9184;
    /* VAR */ int x9186 = 0;
    int x9187 = x9186;
    int* x9188 = &x9187;
    char* x9189 = strntoi_unchecked(x55, x9188);
    x55 = x9189;
    char* x10796 = (char*)malloc(16 * sizeof(char));
    memset(x10796, 0, 16 * sizeof(char));
    /* VAR */ char* x9196 = x55;
    while(1) {
      
      char x9197 = *x55;
      /* VAR */ int ite31854 = 0;
      if((x9197!=('|'))) {
        char x35936 = *x55;
        ite31854 = (x35936!=('\n'));
      } else {
        
        ite31854 = 0;
      };
      int x29940 = ite31854;
      if (!(x29940)) break; 
      
      x55 += 1;
    };
    char* x9204 = x9196;
    int x9205 = x55 - x9204;
    char* x9206 = x9196;
    char* x9207 = strncpy(x10796, x9206, x9205);
    x55 += 1;
    char* x10814 = (char*)malloc(16 * sizeof(char));
    memset(x10814, 0, 16 * sizeof(char));
    /* VAR */ char* x9215 = x55;
    while(1) {
      
      char x9216 = *x55;
      /* VAR */ int ite31877 = 0;
      if((x9216!=('|'))) {
        char x35958 = *x55;
        ite31877 = (x35958!=('\n'));
      } else {
        
        ite31877 = 0;
      };
      int x29956 = ite31877;
      if (!(x29956)) break; 
      
      x55 += 1;
    };
    char* x9223 = x9215;
    int x9224 = x55 - x9223;
    char* x9225 = x9215;
    char* x9226 = strncpy(x10814, x9225, x9224);
    x55 += 1;
    /* VAR */ int x9233 = 0;
    int x9234 = x9233;
    int* x9235 = &x9234;
    char* x9236 = strntoi_unchecked(x55, x9235);
    x55 = x9236;
    char* x10837 = (char*)malloc(80 * sizeof(char));
    memset(x10837, 0, 80 * sizeof(char));
    /* VAR */ char* x9239 = x55;
    while(1) {
      
      char x9240 = *x55;
      /* VAR */ int ite31905 = 0;
      if((x9240!=('|'))) {
        char x35985 = *x55;
        ite31905 = (x35985!=('\n'));
      } else {
        
        ite31905 = 0;
      };
      int x29977 = ite31905;
      if (!(x29977)) break; 
      
      x55 += 1;
    };
    char* x9247 = x9239;
    int x9248 = x55 - x9247;
    char* x9249 = x9239;
    char* x9250 = strncpy(x10837, x9249, x9248);
    x55 += 1;
    int x91 = x56;
    *(x10731 + x91) = x9157;
    *(x10732 + x91) = x9162;
    *(x10733 + x91) = x9170;
    *(x10734 + x91) = x9172;
    *(x10735 + x91) = (((x9177*(10000))+((x9182*(100))))+(x9187));
    *(x10736 + x91) = x10796;
    *(x10737 + x91) = x10814;
    *(x10738 + x91) = x9234;
    *(x10739 + x91) = x10837;
    int x93 = x56;
    x56 = (x93+(1));
  };
  FILE* x9270 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x9271 = 0;
  int x9272 = x9271;
  int* x9273 = &x9272;
  int x9274 = fscanf(x9270, "%d", x9273);
  pclose(x9270);
  int* x10874 = (int*)malloc(x9272 * sizeof(int));
  memset(x10874, 0, x9272 * sizeof(int));
  char** x10875 = (char**)malloc(x9272 * sizeof(char*));
  memset(x10875, 0, x9272 * sizeof(char*));
  char** x10876 = (char**)malloc(x9272 * sizeof(char*));
  memset(x10876, 0, x9272 * sizeof(char*));
  int* x10877 = (int*)malloc(x9272 * sizeof(int));
  memset(x10877, 0, x9272 * sizeof(int));
  char** x10878 = (char**)malloc(x9272 * sizeof(char*));
  memset(x10878, 0, x9272 * sizeof(char*));
  double* x10879 = (double*)malloc(x9272 * sizeof(double));
  memset(x10879, 0, x9272 * sizeof(double));
  char** x10880 = (char**)malloc(x9272 * sizeof(char*));
  memset(x10880, 0, x9272 * sizeof(char*));
  char** x10881 = (char**)malloc(x9272 * sizeof(char*));
  memset(x10881, 0, x9272 * sizeof(char*));
  int x9285 = O_RDONLY;
  int x9286 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x9285);
  /* VAR */ struct stat x9287 = x8925;
  struct stat x9288 = x9287;
  struct stat* x9289 = &x9288;
  int x9290 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x9289);
  int x9292 = PROT_READ;
  int x9293 = MAP_PRIVATE;
  char* x99 = mmap(NULL, (x9289->st_size), x9292, x9293, x9286, 0);
  /* VAR */ int x100 = 0;
  while(1) {
    
    int x101 = x100;
    /* VAR */ int ite31964 = 0;
    if((x101<(x9272))) {
      char x36043 = *x99;
      ite31964 = (x36043!=('\0'));
    } else {
      
      ite31964 = 0;
    };
    int x30029 = ite31964;
    if (!(x30029)) break; 
    
    /* VAR */ int x9301 = 0;
    int x9302 = x9301;
    int* x9303 = &x9302;
    char* x9304 = strntoi_unchecked(x99, x9303);
    x99 = x9304;
    char* x10904 = (char*)malloc(26 * sizeof(char));
    memset(x10904, 0, 26 * sizeof(char));
    /* VAR */ char* x9307 = x99;
    while(1) {
      
      char x9308 = *x99;
      /* VAR */ int ite31983 = 0;
      if((x9308!=('|'))) {
        char x36061 = *x99;
        ite31983 = (x36061!=('\n'));
      } else {
        
        ite31983 = 0;
      };
      int x30041 = ite31983;
      if (!(x30041)) break; 
      
      x99 += 1;
    };
    char* x9315 = x9307;
    int x9316 = x99 - x9315;
    char* x9317 = x9307;
    char* x9318 = strncpy(x10904, x9317, x9316);
    x99 += 1;
    char* x10922 = (char*)malloc(41 * sizeof(char));
    memset(x10922, 0, 41 * sizeof(char));
    /* VAR */ char* x9326 = x99;
    while(1) {
      
      char x9327 = *x99;
      /* VAR */ int ite32006 = 0;
      if((x9327!=('|'))) {
        char x36083 = *x99;
        ite32006 = (x36083!=('\n'));
      } else {
        
        ite32006 = 0;
      };
      int x30057 = ite32006;
      if (!(x30057)) break; 
      
      x99 += 1;
    };
    char* x9334 = x9326;
    int x9335 = x99 - x9334;
    char* x9336 = x9326;
    char* x9337 = strncpy(x10922, x9336, x9335);
    x99 += 1;
    /* VAR */ int x9344 = 0;
    int x9345 = x9344;
    int* x9346 = &x9345;
    char* x9347 = strntoi_unchecked(x99, x9346);
    x99 = x9347;
    char* x10945 = (char*)malloc(16 * sizeof(char));
    memset(x10945, 0, 16 * sizeof(char));
    /* VAR */ char* x9350 = x99;
    while(1) {
      
      char x9351 = *x99;
      /* VAR */ int ite32034 = 0;
      if((x9351!=('|'))) {
        char x36110 = *x99;
        ite32034 = (x36110!=('\n'));
      } else {
        
        ite32034 = 0;
      };
      int x30078 = ite32034;
      if (!(x30078)) break; 
      
      x99 += 1;
    };
    char* x9358 = x9350;
    int x9359 = x99 - x9358;
    char* x9360 = x9350;
    char* x9361 = strncpy(x10945, x9360, x9359);
    x99 += 1;
    /* VAR */ double x9368 = 0.0;
    double x9369 = x9368;
    double* x9370 = &x9369;
    char* x9371 = strntod_unchecked(x99, x9370);
    x99 = x9371;
    char* x10968 = (char*)malloc(11 * sizeof(char));
    memset(x10968, 0, 11 * sizeof(char));
    /* VAR */ char* x9374 = x99;
    while(1) {
      
      char x9375 = *x99;
      /* VAR */ int ite32062 = 0;
      if((x9375!=('|'))) {
        char x36137 = *x99;
        ite32062 = (x36137!=('\n'));
      } else {
        
        ite32062 = 0;
      };
      int x30099 = ite32062;
      if (!(x30099)) break; 
      
      x99 += 1;
    };
    char* x9382 = x9374;
    int x9383 = x99 - x9382;
    char* x9384 = x9374;
    char* x9385 = strncpy(x10968, x9384, x9383);
    x99 += 1;
    char* x10986 = (char*)malloc(118 * sizeof(char));
    memset(x10986, 0, 118 * sizeof(char));
    /* VAR */ char* x9393 = x99;
    while(1) {
      
      char x9394 = *x99;
      /* VAR */ int ite32085 = 0;
      if((x9394!=('|'))) {
        char x36159 = *x99;
        ite32085 = (x36159!=('\n'));
      } else {
        
        ite32085 = 0;
      };
      int x30115 = ite32085;
      if (!(x30115)) break; 
      
      x99 += 1;
    };
    char* x9401 = x9393;
    int x9402 = x99 - x9401;
    char* x9403 = x9393;
    char* x9404 = strncpy(x10986, x9403, x9402);
    x99 += 1;
    int x149 = x100;
    *(x10874 + x149) = x9302;
    *(x10875 + x149) = x10904;
    *(x10876 + x149) = x10922;
    *(x10877 + x149) = x9345;
    *(x10878 + x149) = x10945;
    *(x10879 + x149) = x9369;
    *(x10880 + x149) = x10968;
    *(x10881 + x149) = x10986;
    int x151 = x100;
    x100 = (x151+(1));
  };
  int x156 = 0;
  for(; x156 < 1 ; x156 += 1) {
    
    GHashTable* x36979 = g_hash_table_new(x36908, x36936);
    GHashTable* x36989 = g_hash_table_new(((void***){x36980}), ((int*){x36983}));
    GHashTable* x36999 = g_hash_table_new(((void***){x36990}), ((int*){x36993}));
    GHashTable* x37006 = g_hash_table_new(x37000, x37002);
    /* VAR */ int x37007 = 0;
    struct Q18GRPRecord* x37008 = (struct Q18GRPRecord*)malloc(60000000 * sizeof(struct Q18GRPRecord));
    memset(x37008, 0, 60000000 * sizeof(struct Q18GRPRecord));
    /* VAR */ int x37009 = 0;
    while(1) {
      
      int x7973 = x37009;
      if (!((x7973<(60000000)))) break; 
      
      int x7975 = x37009;
      struct Q18GRPRecord* x11833 = (struct Q18GRPRecord*)malloc(1 * sizeof(struct Q18GRPRecord));
      memset(x11833, 0, 1 * sizeof(struct Q18GRPRecord));
      x11833->C_NAME = ""; x11833->C_CUSTKEY = 0; x11833->O_ORDERKEY = 0; x11833->O_ORDERDATE = 0; x11833->O_TOTALPRICE = 0.0;
      struct Q18GRPRecord x11031 = *x11833;
      *(x37008 + x7975) = x11031;
      struct Q18GRPRecord* x11033 = &(x37008[x7975]);
      x11833 = x11033;
      int x7978 = x37009;
      x37009 = (x7978+(1));
    };
    /* VAR */ int x37024 = 0;
    double** x37025 = (double**)malloc(120000000 * sizeof(double*));
    memset(x37025, 0, 120000000 * sizeof(double*));
    /* VAR */ int x37026 = 0;
    while(1) {
      
      int x7985 = x37026;
      if (!((x7985<(120000000)))) break; 
      
      int x7987 = x37026;
      double* x11045 = (double*)malloc(1 * sizeof(double));
      memset(x11045, 0, 1 * sizeof(double));
      *(x37025 + x7987) = x11045;
      int x7990 = x37026;
      x37026 = (x7990+(1));
    };
    /* VAR */ int x37036 = 0;
    struct AGGRecord_Int* x37037 = (struct AGGRecord_Int*)malloc(60000000 * sizeof(struct AGGRecord_Int));
    memset(x37037, 0, 60000000 * sizeof(struct AGGRecord_Int));
    /* VAR */ int x37038 = 0;
    while(1) {
      
      int x7997 = x37038;
      if (!((x7997<(60000000)))) break; 
      
      int x7999 = x37038;
      double* x8000 = x37025[x7999];
      struct AGGRecord_Int* x11863 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
      memset(x11863, 0, 1 * sizeof(struct AGGRecord_Int));
      x11863->key = 0; x11863->aggs = x8000;
      struct AGGRecord_Int x11059 = *x11863;
      *(x37037 + x7999) = x11059;
      struct AGGRecord_Int* x11061 = &(x37037[x7999]);
      x11863 = x11061;
      int x8003 = x37038;
      x37038 = (x8003+(1));
    };
    /* VAR */ int x37054 = 0;
    struct AGGRecord_Int_ORDERSRecord* x37055 = (struct AGGRecord_Int_ORDERSRecord*)malloc(48000000 * sizeof(struct AGGRecord_Int_ORDERSRecord));
    memset(x37055, 0, 48000000 * sizeof(struct AGGRecord_Int_ORDERSRecord));
    /* VAR */ int x37056 = 0;
    while(1) {
      
      int x8010 = x37056;
      if (!((x8010<(48000000)))) break; 
      
      int x8012 = x37056;
      double* x8013 = x37025[x8012];
      struct AGGRecord_Int_ORDERSRecord* x11881 = (struct AGGRecord_Int_ORDERSRecord*)malloc(1 * sizeof(struct AGGRecord_Int_ORDERSRecord));
      memset(x11881, 0, 1 * sizeof(struct AGGRecord_Int_ORDERSRecord));
      x11881->key = 0; x11881->aggs = x8013; x11881->O_ORDERKEY = 0; x11881->O_CUSTKEY = 0; x11881->O_ORDERSTATUS = '\0'; x11881->O_TOTALPRICE = 0.0; x11881->O_ORDERDATE = 0; x11881->O_ORDERPRIORITY = ""; x11881->O_CLERK = ""; x11881->O_SHIPPRIORITY = 0; x11881->O_COMMENT = "";
      struct AGGRecord_Int_ORDERSRecord x11075 = *x11881;
      *(x37055 + x8012) = x11075;
      struct AGGRecord_Int_ORDERSRecord* x11077 = &(x37055[x8012]);
      x11881 = x11077;
      int x8016 = x37056;
      x37056 = (x8016+(1));
    };
    /* VAR */ int x37072 = 0;
    struct AGGRecord_Q18GRPRecord* x37073 = (struct AGGRecord_Q18GRPRecord*)malloc(60000000 * sizeof(struct AGGRecord_Q18GRPRecord));
    memset(x37073, 0, 60000000 * sizeof(struct AGGRecord_Q18GRPRecord));
    /* VAR */ int x37074 = 0;
    while(1) {
      
      int x8023 = x37074;
      if (!((x8023<(60000000)))) break; 
      
      int x8025 = x37074;
      struct Q18GRPRecord* x8026 = &(x37008[x8025]);
      double* x8027 = x37025[x8025];
      struct AGGRecord_Q18GRPRecord* x11900 = (struct AGGRecord_Q18GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q18GRPRecord));
      memset(x11900, 0, 1 * sizeof(struct AGGRecord_Q18GRPRecord));
      x11900->key = x8026; x11900->aggs = x8027;
      struct AGGRecord_Q18GRPRecord x11092 = *x11900;
      *(x37073 + x8025) = x11092;
      struct AGGRecord_Q18GRPRecord* x11094 = &(x37073[x8025]);
      x11900 = x11094;
      int x8030 = x37074;
      x37074 = (x8030+(1));
    };
    /* VAR */ struct timeval x37091 = x8227;
    struct timeval x37092 = x37091;
    /* VAR */ struct timeval x37093 = x8227;
    struct timeval x37094 = x37093;
    /* VAR */ struct timeval x37095 = x8227;
    struct timeval x37096 = x37095;
    struct timeval* x37097 = &x37094;
    gettimeofday(x37097, NULL);
    /* VAR */ int x37099 = 0;
    /* VAR */ int x37100 = 0;
    /* VAR */ int x37101 = 0;
    int* x37176 = &(x37139);
    GTree* x37177 = g_tree_new(x37176);
    /* VAR */ int x37178 = 0;
    /* VAR */ int x37179 = 0;
    while(1) {
      
      int x37181 = x37101;
      if (!((x37181<(x8902)))) break; 
      
      int x1948 = x37101;
      int x3821 = x10510[x1948];
      void* x15632 = g_hash_table_lookup(x37006, x3821);
      /* VAR */ struct AGGRecord_Int* ite31098 = 0;
      if((x15632==(NULL))) {
        int x31099 = x37024;
        double* x31100 = x37025[x31099];
        int x31101 = x37024;
        x37024 = (x31101+(1));
        int x31104 = x37036;
        struct AGGRecord_Int* x31105 = &(x37037[x31104]);
        x31105->key = x3821;
        x31105->aggs = x31100;
        int x31108 = x37036;
        x37036 = (x31108+(1));
        g_hash_table_insert(x37006, x3821, x31105);
        ite31098 = x31105;
      } else {
        
        ite31098 = x15632;
      };
      struct AGGRecord_Int* x14569 = ite31098;
      double* x268 = x14569->aggs;
      double x282 = x268[0];
      double x3828 = x10514[x1948];
      *x268 = (x282+(x3828));
      int x1977 = x37101;
      x37101 = (x1977+(1));
    };
    GList* x37242 = g_hash_table_get_keys(x37006);
    /* VAR */ GList* x37243 = x37242;
    int x37244 = g_hash_table_size(x37006);
    int x27586 = 0;
    for(; x27586 < x37244 ; x27586 += 1) {
      
      GList* x27587 = x37243;
      void* x27588 = g_list_nth_data(x27587, 0);
      GList* x27589 = g_list_next(x27587);
      x37243 = x27589;
      void* x27591 = g_hash_table_lookup(x37006, x27588);
      struct AGGRecord_Int* x27593 = (struct AGGRecord_Int*){x27591};
      double x27595 = ((double*) { x27593->aggs })[0];
      if((x27595>(300.0))) {
        void* x12806 = (void*){(x27593->key)};
        void* x12808 = g_hash_table_lookup(x36999, x12806);
        GList** x12809 = (GList**){x12808};
        GList** x12810 = NULL;
        /* VAR */ GList** ite31209 = 0;
        if((x12809==(x12810))) {
          GList** x31210 = malloc(8);
          GList* x31211 = NULL;
          pointer_assign(x31210, x31211);
          ite31209 = x31210;
        } else {
          
          ite31209 = x12809;
        };
        GList** x12815 = ite31209;
        GList* x12816 = *(x12815);
        GList* x12817 = g_list_prepend(x12816, ((void*){x27593}));
        pointer_assign(x12815, x12817);
        g_hash_table_insert(x36999, x12806, ((void*){x12815}));
      };
    };
    while(1) {
      
      int x37313 = x37099;
      if (!((x37313<(x9126)))) break; 
      
      int x1997 = x37099;
      int x3853 = x10731[x1997];
      void* x12829 = g_hash_table_lookup(x36999, ((void*){x3853}));
      GList** x12830 = (GList**){x12829};
      if((x12830!=(NULL))) {
        GList* x14696 = *(x12830);
        /* VAR */ GList* x14697 = x14696;
        while(1) {
          
          GList* x14698 = x14697;
          GList* x14699 = NULL;
          if (!((x14698!=(x14699)))) break; 
          
          GList* x14701 = x14697;
          void* x14702 = g_list_nth_data(x14701, 0);
          struct AGGRecord_Int* x14703 = (struct AGGRecord_Int*){x14702};
          GList* x14704 = x14697;
          GList* x14705 = g_list_next(x14704);
          x14697 = x14705;
          int x14708 = x14703->key;
          if((x3853==(x14708))) {
            int x3865 = x10732[x1997];
            char x3867 = x10733[x1997];
            double x3869 = x10734[x1997];
            int x3871 = x10735[x1997];
            char* x3873 = x10736[x1997];
            char* x3875 = x10737[x1997];
            int x3877 = x10738[x1997];
            char* x3879 = x10739[x1997];
            int x8119 = x37054;
            struct AGGRecord_Int_ORDERSRecord* x8120 = &(x37055[x8119]);
            x8120->key = x14708;
            x8120->aggs = ((double*) { x14703->aggs });
            x8120->O_ORDERKEY = x3853;
            x8120->O_CUSTKEY = x3865;
            x8120->O_ORDERSTATUS = x3867;
            x8120->O_TOTALPRICE = x3869;
            x8120->O_ORDERDATE = x3871;
            x8120->O_ORDERPRIORITY = x3873;
            x8120->O_CLERK = x3875;
            x8120->O_SHIPPRIORITY = x3877;
            x8120->O_COMMENT = x3879;
            int x8132 = x37054;
            x37054 = (x8132+(1));
            void* x12866 = (void*){(x8120->O_CUSTKEY)};
            void* x12868 = g_hash_table_lookup(x36989, x12866);
            GList** x12869 = (GList**){x12868};
            GList** x12870 = NULL;
            /* VAR */ GList** ite31330 = 0;
            if((x12869==(x12870))) {
              GList** x31331 = malloc(8);
              GList* x31332 = NULL;
              pointer_assign(x31331, x31332);
              ite31330 = x31331;
            } else {
              
              ite31330 = x12869;
            };
            GList** x12875 = ite31330;
            GList* x12876 = *(x12875);
            GList* x12877 = g_list_prepend(x12876, ((void*){x8120}));
            pointer_assign(x12875, x12877);
            g_hash_table_insert(x36989, x12866, ((void*){x12875}));
          };
        };
      };
      int x2043 = x37099;
      x37099 = (x2043+(1));
    };
    while(1) {
      
      int x37438 = x37100;
      if (!((x37438<(x9272)))) break; 
      
      int x2053 = x37100;
      int x3896 = x10874[x2053];
      void* x12892 = g_hash_table_lookup(x36989, ((void*){x3896}));
      GList** x12893 = (GList**){x12892};
      if((x12893!=(NULL))) {
        GList* x14821 = *(x12893);
        /* VAR */ GList* x14822 = x14821;
        while(1) {
          
          GList* x14823 = x14822;
          GList* x14824 = NULL;
          if (!((x14823!=(x14824)))) break; 
          
          GList* x14826 = x14822;
          void* x14827 = g_list_nth_data(x14826, 0);
          struct AGGRecord_Int_ORDERSRecord* x14828 = (struct AGGRecord_Int_ORDERSRecord*){x14827};
          GList* x14829 = x14822;
          GList* x14830 = g_list_next(x14829);
          x14822 = x14830;
          if(((x14828->O_CUSTKEY)==(x3896))) {
            char* x3917 = x10875[x2053];
            int x8161 = x37007;
            struct Q18GRPRecord* x8162 = &(x37008[x8161]);
            x8162->C_NAME = x3917;
            x8162->C_CUSTKEY = x3896;
            x8162->O_ORDERKEY = (x14828->O_ORDERKEY);
            x8162->O_ORDERDATE = (x14828->O_ORDERDATE);
            x8162->O_TOTALPRICE = (x14828->O_TOTALPRICE);
            int x8168 = x37007;
            x37007 = (x8168+(1));
            void* x14850 = g_hash_table_lookup(x36979, x8162);
            /* VAR */ struct AGGRecord_Q18GRPRecord* ite31434 = 0;
            if((x14850==(NULL))) {
              int x31435 = x37024;
              double* x31436 = x37025[x31435];
              int x31437 = x37024;
              x37024 = (x31437+(1));
              int x31440 = x37072;
              struct AGGRecord_Q18GRPRecord* x31441 = &(x37073[x31440]);
              x31441->key = x8162;
              x31441->aggs = x31436;
              int x31444 = x37072;
              x37072 = (x31444+(1));
              g_hash_table_insert(x36979, x8162, x31441);
              ite31434 = x31441;
            } else {
              
              ite31434 = x14850;
            };
            struct AGGRecord_Q18GRPRecord* x14815 = ite31434;
            double* x423 = x14815->aggs;
            double x437 = x423[0];
            double x439 = ((double*) { x14828->aggs })[0];
            *x423 = (x437+(x439));
          };
        };
      };
      int x2179 = x37100;
      x37100 = (x2179+(1));
    };
    GList* x37556 = g_hash_table_get_keys(x36979);
    /* VAR */ GList* x37557 = x37556;
    int x37558 = g_hash_table_size(x36979);
    int x27854 = 0;
    for(; x27854 < x37558 ; x27854 += 1) {
      
      GList* x27855 = x37557;
      void* x27856 = g_list_nth_data(x27855, 0);
      GList* x27857 = g_list_next(x27855);
      x37557 = x27857;
      void* x27859 = g_hash_table_lookup(x36979, x27856);
      struct AGGRecord_Q18GRPRecord* x27861 = (struct AGGRecord_Q18GRPRecord*){x27859};
      g_tree_insert(x37177, x27861, x27861);
    };
    while(1) {
      
      int x2188 = x37178;
      int x462 = !(x2188);
      /* VAR */ int ite33526 = 0;
      if(x462) {
        int x37583 = g_tree_nnodes(x37177);
        ite33526 = (x37583!=(0));
      } else {
        
        ite33526 = 0;
      };
      int x31490 = ite33526;
      if (!(x31490)) break; 
      
      void* x14902 = NULL;
      void** x14910 = &(x14902);
      g_tree_foreach(x37177, x14909, x14910);
      struct AGGRecord_Q18GRPRecord* x14912 = (struct AGGRecord_Q18GRPRecord*){x14902};
      int x14913 = g_tree_remove(x37177, x14912);
      int x2196 = x37179;
      if((x2196>=(100))) {
        x37178 = 1;
      } else {
        
        struct Q18GRPRecord* x475 = x14912->key;
        char* x481 = ltoa((x475->O_ORDERDATE));
        double x483 = ((double*) { x14912->aggs })[0];
        printf("%s|%d|%d|%s|%.2f|%.2f\n", (x475->C_NAME), (x475->C_CUSTKEY), (x475->O_ORDERKEY), x481, (x475->O_TOTALPRICE), x483);
        int x2211 = x37179;
        x37179 = (x2211+(1));
      };
    };
    int x37618 = x37179;
    printf("(%d rows)\n", x37618);
    struct timeval* x37620 = &x37096;
    gettimeofday(x37620, NULL);
    struct timeval* x37622 = &x37092;
    struct timeval* x37623 = &x37096;
    struct timeval* x37624 = &x37094;
    long x37625 = timeval_subtract(x37622, x37623, x37624);
    printf("Generated code run in %ld milliseconds.\n", x37625);
  };
}
/* ----------- FUNCTIONS ----------- */
int x36908(struct Q18GRPRecord* x14359) {
  char* x21831 = x14359->C_NAME;
  int x25111 = strlen(x21831);
  /* VAR */ int x22921 = 0;
  /* VAR */ int x22922 = 0;
  while(1) {
    
    int x22923 = x22921;
    if (!((x22923<(x25111)))) break; 
    
    int x22925 = x22922;
    int x22926 = x22921;
    char* x25119 = pointer_add(x21831, x22926);
    char x25120 = *(x25119);
    x22922 = (x22925+(x25120));
    int x22931 = x22921;
    x22921 = (x22931+(1));
  };
  int x22935 = x22922;
  return ((((x22935+((x14359->C_CUSTKEY)))+((x14359->O_ORDERKEY)))+((x14359->O_ORDERDATE)))+(((int){(x14359->O_TOTALPRICE)}))); 
}

int x36936(struct Q18GRPRecord* x14364, struct Q18GRPRecord* x14365) {
  int x22950 = strcmp((x14364->C_NAME), (x14365->C_NAME));
  int x22951 = !(x22950);
  /* VAR */ int ite32893 = 0;
  if(x22951) {
    ite32893 = ((x14364->C_CUSTKEY)==((x14365->C_CUSTKEY)));
  } else {
    
    ite32893 = 0;
  };
  int x30883 = ite32893;
  /* VAR */ int ite32900 = 0;
  if(x30883) {
    ite32900 = ((x14364->O_ORDERKEY)==((x14365->O_ORDERKEY)));
  } else {
    
    ite32900 = 0;
  };
  int x30885 = ite32900;
  /* VAR */ int ite32907 = 0;
  if(x30885) {
    ite32907 = ((x14364->O_ORDERDATE)==((x14365->O_ORDERDATE)));
  } else {
    
    ite32907 = 0;
  };
  int x30887 = ite32907;
  /* VAR */ int ite32914 = 0;
  if(x30887) {
    ite32914 = ((x14364->O_TOTALPRICE)==((x14365->O_TOTALPRICE)));
  } else {
    
    ite32914 = 0;
  };
  int x30889 = ite32914;
  return x30889; 
}

int x36980(void* x12634) {
  int x12635 = g_direct_hash(x12634);
  return x12635; 
}

int x36983(void* x12637, void* x12638) {
  int x12639 = g_direct_equal(x12637, x12638);
  return x12639; 
}

int x36990(void* x12644) {
  int x12645 = g_direct_hash(x12644);
  return x12645; 
}

int x36993(void* x12647, void* x12648) {
  int x12649 = g_direct_equal(x12647, x12648);
  return x12649; 
}

int x37000(int x14392) {
  return x14392; 
}

int x37002(int x14397, int x14398) {
  return (x14397==(x14398)); 
}

int x37139(struct AGGRecord_Q18GRPRecord* x223, struct AGGRecord_Q18GRPRecord* x224) {
  struct Q18GRPRecord* x225 = x223->key;
  double x226 = x225->O_TOTALPRICE;
  struct Q18GRPRecord* x227 = x224->key;
  double x228 = x227->O_TOTALPRICE;
  /* VAR */ int ite31059 = 0;
  if((x226<(x228))) {
    ite31059 = 1;
  } else {
    
    /* VAR */ int ite31063 = 0;
    if((x226>(x228))) {
      ite31063 = -1;
    } else {
      
      int x31065 = x225->O_ORDERDATE;
      int x31066 = x227->O_ORDERDATE;
      /* VAR */ int ite31069 = 0;
      if((x31065<(x31066))) {
        ite31069 = -1;
      } else {
        
        /* VAR */ int ite31073 = 0;
        if((x31065>(x31066))) {
          ite31073 = 1;
        } else {
          
          ite31073 = 0;
        };
        int x31072 = ite31073;
        ite31069 = x31072;
      };
      int x31068 = ite31069;
      ite31063 = x31068;
    };
    int x31062 = ite31063;
    ite31059 = x31062;
  };
  int x238 = ite31059;
  return x238; 
}

int x14909(void* x14903, void* x14904, void* x14905) {
  pointer_assign(((struct AGGRecord_Q18GRPRecord**){x14905}), ((struct AGGRecord_Q18GRPRecord*){x14904}));
  return 1; 
}
