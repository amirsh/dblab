#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct Q3GRPRecord;
  struct LINEITEMRecord;
  struct AGGRecord_Q3GRPRecord;
  struct ORDERSRecord;
  struct CUSTOMERRecord;
  
  struct Q3GRPRecord {
  int L_ORDERKEY;
  int O_ORDERDATE;
  int O_SHIPPRIORITY;
  };
  
  struct LINEITEMRecord {
  int L_ORDERKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  int L_SHIPDATE;
  };
  
  struct AGGRecord_Q3GRPRecord {
  struct Q3GRPRecord* key;
  double* aggs;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  int O_ORDERDATE;
  int O_SHIPPRIORITY;
  };
  
  struct CUSTOMERRecord {
  int C_CUSTKEY;
  char* C_MKTSEGMENT;
  };
  
  


int x37800(struct AGGRecord_Q3GRPRecord* x219, struct AGGRecord_Q3GRPRecord* x220);

int x13501(void* x13495, void* x13496, void* x13497);
/* GLOBAL VARS */

struct timeval x8400;
int main(int argc, char** argv) {
  FILE* x8968 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x8969 = 0;
  int x8970 = x8969;
  int* x8971 = &x8970;
  int x8972 = fscanf(x8968, "%d", x8971);
  pclose(x8968);
  struct LINEITEMRecord* x10450 = (struct LINEITEMRecord*)malloc(x8970 * sizeof(struct LINEITEMRecord));
  memset(x10450, 0, x8970 * sizeof(struct LINEITEMRecord));
  int x8976 = O_RDONLY;
  int x8977 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x8976);
  struct stat x8978 = (struct stat){0};
  /* VAR */ struct stat x8979 = x8978;
  struct stat x8980 = x8979;
  struct stat* x8981 = &x8980;
  int x8982 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x8981);
  size_t x8983 = x8981->st_size;
  int x8984 = PROT_READ;
  int x8985 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x8983, x8984, x8985, x8977, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x8970);
    /* VAR */ int ite29033 = 0;
    if(x6) {
      char x35720 = *x3;
      int x35721 = x35720!=('\0');
      ite29033 = x35721;
    } else {
      
      ite29033 = 0;
    };
    int x26122 = ite29033;
    if (!(x26122)) break; 
    
    /* VAR */ int x8993 = 0;
    int x8994 = x8993;
    int* x8995 = &x8994;
    char* x8996 = strntoi_unchecked(x3, x8995);
    x3 = x8996;
    /* VAR */ int x8998 = 0;
    int x8999 = x8998;
    int* x9000 = &x8999;
    char* x9001 = strntoi_unchecked(x3, x9000);
    x3 = x9001;
    /* VAR */ int x9003 = 0;
    int x9004 = x9003;
    int* x9005 = &x9004;
    char* x9006 = strntoi_unchecked(x3, x9005);
    x3 = x9006;
    /* VAR */ int x9008 = 0;
    int x9009 = x9008;
    int* x9010 = &x9009;
    char* x9011 = strntoi_unchecked(x3, x9010);
    x3 = x9011;
    /* VAR */ double x9013 = 0.0;
    double x9014 = x9013;
    double* x9015 = &x9014;
    char* x9016 = strntod_unchecked(x3, x9015);
    x3 = x9016;
    /* VAR */ double x9018 = 0.0;
    double x9019 = x9018;
    double* x9020 = &x9019;
    char* x9021 = strntod_unchecked(x3, x9020);
    x3 = x9021;
    /* VAR */ double x9023 = 0.0;
    double x9024 = x9023;
    double* x9025 = &x9024;
    char* x9026 = strntod_unchecked(x3, x9025);
    x3 = x9026;
    /* VAR */ double x9028 = 0.0;
    double x9029 = x9028;
    double* x9030 = &x9029;
    char* x9031 = strntod_unchecked(x3, x9030);
    x3 = x9031;
    char x9033 = *x3;
    /* VAR */ char x9034 = x9033;
    x3 += 1;
    x3 += 1;
    char x9038 = *x3;
    /* VAR */ char x9039 = x9038;
    x3 += 1;
    x3 += 1;
    /* VAR */ int x9043 = 0;
    int x9044 = x9043;
    int* x9045 = &x9044;
    char* x9046 = strntoi_unchecked(x3, x9045);
    x3 = x9046;
    /* VAR */ int x9048 = 0;
    int x9049 = x9048;
    int* x9050 = &x9049;
    char* x9051 = strntoi_unchecked(x3, x9050);
    x3 = x9051;
    /* VAR */ int x9053 = 0;
    int x9054 = x9053;
    int* x9055 = &x9054;
    char* x9056 = strntoi_unchecked(x3, x9055);
    x3 = x9056;
    int x9058 = x9044*(10000);
    int x9059 = x9049*(100);
    int x9060 = x9058+(x9059);
    int x9061 = x9060+(x9054);
    /* VAR */ int x9062 = 0;
    int x9063 = x9062;
    int* x9064 = &x9063;
    char* x9065 = strntoi_unchecked(x3, x9064);
    x3 = x9065;
    /* VAR */ int x9067 = 0;
    int x9068 = x9067;
    int* x9069 = &x9068;
    char* x9070 = strntoi_unchecked(x3, x9069);
    x3 = x9070;
    /* VAR */ int x9072 = 0;
    int x9073 = x9072;
    int* x9074 = &x9073;
    char* x9075 = strntoi_unchecked(x3, x9074);
    x3 = x9075;
    /* VAR */ int x9081 = 0;
    int x9082 = x9081;
    int* x9083 = &x9082;
    char* x9084 = strntoi_unchecked(x3, x9083);
    x3 = x9084;
    /* VAR */ int x9086 = 0;
    int x9087 = x9086;
    int* x9088 = &x9087;
    char* x9089 = strntoi_unchecked(x3, x9088);
    x3 = x9089;
    /* VAR */ int x9091 = 0;
    int x9092 = x9091;
    int* x9093 = &x9092;
    char* x9094 = strntoi_unchecked(x3, x9093);
    x3 = x9094;
    char* x10576 = (char*)malloc(26 * sizeof(char));
    memset(x10576, 0, 26 * sizeof(char));
    /* VAR */ char* x9101 = x3;
    while(1) {
      
      char x9102 = *x3;
      int x9103 = x9102!=('|');
      /* VAR */ int ite29154 = 0;
      if(x9103) {
        char x35840 = *x3;
        int x35841 = x35840!=('\n');
        ite29154 = x35841;
      } else {
        
        ite29154 = 0;
      };
      int x26236 = ite29154;
      if (!(x26236)) break; 
      
      x3 += 1;
    };
    char* x9109 = x9101;
    int x9110 = x3 - x9109;
    char* x9111 = x9101;
    char* x9112 = strncpy(x10576, x9111, x9110);
    x3 += 1;
    char* x10594 = (char*)malloc(11 * sizeof(char));
    memset(x10594, 0, 11 * sizeof(char));
    /* VAR */ char* x9120 = x3;
    while(1) {
      
      char x9121 = *x3;
      int x9122 = x9121!=('|');
      /* VAR */ int ite29177 = 0;
      if(x9122) {
        char x35862 = *x3;
        int x35863 = x35862!=('\n');
        ite29177 = x35863;
      } else {
        
        ite29177 = 0;
      };
      int x26252 = ite29177;
      if (!(x26252)) break; 
      
      x3 += 1;
    };
    char* x9128 = x9120;
    int x9129 = x3 - x9128;
    char* x9130 = x9120;
    char* x9131 = strncpy(x10594, x9130, x9129);
    x3 += 1;
    char* x10612 = (char*)malloc(45 * sizeof(char));
    memset(x10612, 0, 45 * sizeof(char));
    /* VAR */ char* x9139 = x3;
    while(1) {
      
      char x9140 = *x3;
      int x9141 = x9140!=('|');
      /* VAR */ int ite29200 = 0;
      if(x9141) {
        char x35884 = *x3;
        int x35885 = x35884!=('\n');
        ite29200 = x35885;
      } else {
        
        ite29200 = 0;
      };
      int x26268 = ite29200;
      if (!(x26268)) break; 
      
      x3 += 1;
    };
    char* x9147 = x9139;
    int x9148 = x3 - x9147;
    char* x9149 = x9139;
    char* x9150 = strncpy(x10612, x9149, x9148);
    x3 += 1;
    struct LINEITEMRecord* x11378 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x11378, 0, 1 * sizeof(struct LINEITEMRecord));
    x11378->L_ORDERKEY = x8994; x11378->L_EXTENDEDPRICE = x9019; x11378->L_DISCOUNT = x9024; x11378->L_SHIPDATE = x9061;
    int x47 = x4;
    struct LINEITEMRecord x10632 = *x11378;
    *(x10450 + x47) = x10632;
    struct LINEITEMRecord* x10634 = &(x10450[x47]);
    x11378 = x10634;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x9163 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x9164 = 0;
  int x9165 = x9164;
  int* x9166 = &x9165;
  int x9167 = fscanf(x9163, "%d", x9166);
  pclose(x9163);
  struct ORDERSRecord* x10645 = (struct ORDERSRecord*)malloc(x9165 * sizeof(struct ORDERSRecord));
  memset(x10645, 0, x9165 * sizeof(struct ORDERSRecord));
  int x9171 = O_RDONLY;
  int x9172 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x9171);
  /* VAR */ struct stat x9173 = x8978;
  struct stat x9174 = x9173;
  struct stat* x9175 = &x9174;
  int x9176 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x9175);
  size_t x9177 = x9175->st_size;
  int x9178 = PROT_READ;
  int x9179 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x9177, x9178, x9179, x9172, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x9165);
    /* VAR */ int ite29250 = 0;
    if(x58) {
      char x35933 = *x55;
      int x35934 = x35933!=('\0');
      ite29250 = x35934;
    } else {
      
      ite29250 = 0;
    };
    int x26311 = ite29250;
    if (!(x26311)) break; 
    
    /* VAR */ int x9187 = 0;
    int x9188 = x9187;
    int* x9189 = &x9188;
    char* x9190 = strntoi_unchecked(x55, x9189);
    x55 = x9190;
    /* VAR */ int x9192 = 0;
    int x9193 = x9192;
    int* x9194 = &x9193;
    char* x9195 = strntoi_unchecked(x55, x9194);
    x55 = x9195;
    char x9197 = *x55;
    /* VAR */ char x9198 = x9197;
    x55 += 1;
    x55 += 1;
    /* VAR */ double x9202 = 0.0;
    double x9203 = x9202;
    double* x9204 = &x9203;
    char* x9205 = strntod_unchecked(x55, x9204);
    x55 = x9205;
    /* VAR */ int x9207 = 0;
    int x9208 = x9207;
    int* x9209 = &x9208;
    char* x9210 = strntoi_unchecked(x55, x9209);
    x55 = x9210;
    /* VAR */ int x9212 = 0;
    int x9213 = x9212;
    int* x9214 = &x9213;
    char* x9215 = strntoi_unchecked(x55, x9214);
    x55 = x9215;
    /* VAR */ int x9217 = 0;
    int x9218 = x9217;
    int* x9219 = &x9218;
    char* x9220 = strntoi_unchecked(x55, x9219);
    x55 = x9220;
    int x9222 = x9208*(10000);
    int x9223 = x9213*(100);
    int x9224 = x9222+(x9223);
    int x9225 = x9224+(x9218);
    char* x10702 = (char*)malloc(16 * sizeof(char));
    memset(x10702, 0, 16 * sizeof(char));
    /* VAR */ char* x9227 = x55;
    while(1) {
      
      char x9228 = *x55;
      int x9229 = x9228!=('|');
      /* VAR */ int ite29303 = 0;
      if(x9229) {
        char x35985 = *x55;
        int x35986 = x35985!=('\n');
        ite29303 = x35986;
      } else {
        
        ite29303 = 0;
      };
      int x26357 = ite29303;
      if (!(x26357)) break; 
      
      x55 += 1;
    };
    char* x9235 = x9227;
    int x9236 = x55 - x9235;
    char* x9237 = x9227;
    char* x9238 = strncpy(x10702, x9237, x9236);
    x55 += 1;
    char* x10720 = (char*)malloc(16 * sizeof(char));
    memset(x10720, 0, 16 * sizeof(char));
    /* VAR */ char* x9246 = x55;
    while(1) {
      
      char x9247 = *x55;
      int x9248 = x9247!=('|');
      /* VAR */ int ite29326 = 0;
      if(x9248) {
        char x36007 = *x55;
        int x36008 = x36007!=('\n');
        ite29326 = x36008;
      } else {
        
        ite29326 = 0;
      };
      int x26373 = ite29326;
      if (!(x26373)) break; 
      
      x55 += 1;
    };
    char* x9254 = x9246;
    int x9255 = x55 - x9254;
    char* x9256 = x9246;
    char* x9257 = strncpy(x10720, x9256, x9255);
    x55 += 1;
    /* VAR */ int x9264 = 0;
    int x9265 = x9264;
    int* x9266 = &x9265;
    char* x9267 = strntoi_unchecked(x55, x9266);
    x55 = x9267;
    char* x10743 = (char*)malloc(80 * sizeof(char));
    memset(x10743, 0, 80 * sizeof(char));
    /* VAR */ char* x9270 = x55;
    while(1) {
      
      char x9271 = *x55;
      int x9272 = x9271!=('|');
      /* VAR */ int ite29354 = 0;
      if(x9272) {
        char x36034 = *x55;
        int x36035 = x36034!=('\n');
        ite29354 = x36035;
      } else {
        
        ite29354 = 0;
      };
      int x26394 = ite29354;
      if (!(x26394)) break; 
      
      x55 += 1;
    };
    char* x9278 = x9270;
    int x9279 = x55 - x9278;
    char* x9280 = x9270;
    char* x9281 = strncpy(x10743, x9280, x9279);
    x55 += 1;
    struct ORDERSRecord* x11511 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x11511, 0, 1 * sizeof(struct ORDERSRecord));
    x11511->O_ORDERKEY = x9188; x11511->O_CUSTKEY = x9193; x11511->O_ORDERDATE = x9225; x11511->O_SHIPPRIORITY = x9265;
    int x91 = x56;
    struct ORDERSRecord x10763 = *x11511;
    *(x10645 + x91) = x10763;
    struct ORDERSRecord* x10765 = &(x10645[x91]);
    x11511 = x10765;
    int x93 = x56;
    int x94 = x93+(1);
    x56 = x94;
  };
  FILE* x9294 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x9295 = 0;
  int x9296 = x9295;
  int* x9297 = &x9296;
  int x9298 = fscanf(x9294, "%d", x9297);
  pclose(x9294);
  struct CUSTOMERRecord* x10776 = (struct CUSTOMERRecord*)malloc(x9296 * sizeof(struct CUSTOMERRecord));
  memset(x10776, 0, x9296 * sizeof(struct CUSTOMERRecord));
  int x9302 = O_RDONLY;
  int x9303 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x9302);
  /* VAR */ struct stat x9304 = x8978;
  struct stat x9305 = x9304;
  struct stat* x9306 = &x9305;
  int x9307 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x9306);
  size_t x9308 = x9306->st_size;
  int x9309 = PROT_READ;
  int x9310 = MAP_PRIVATE;
  char* x99 = mmap(NULL, x9308, x9309, x9310, x9303, 0);
  /* VAR */ int x100 = 0;
  while(1) {
    
    int x101 = x100;
    int x102 = x101<(x9296);
    /* VAR */ int ite29404 = 0;
    if(x102) {
      char x36083 = *x99;
      int x36084 = x36083!=('\0');
      ite29404 = x36084;
    } else {
      
      ite29404 = 0;
    };
    int x26437 = ite29404;
    if (!(x26437)) break; 
    
    /* VAR */ int x9318 = 0;
    int x9319 = x9318;
    int* x9320 = &x9319;
    char* x9321 = strntoi_unchecked(x99, x9320);
    x99 = x9321;
    char* x10799 = (char*)malloc(26 * sizeof(char));
    memset(x10799, 0, 26 * sizeof(char));
    /* VAR */ char* x9324 = x99;
    while(1) {
      
      char x9325 = *x99;
      int x9326 = x9325!=('|');
      /* VAR */ int ite29423 = 0;
      if(x9326) {
        char x36101 = *x99;
        int x36102 = x36101!=('\n');
        ite29423 = x36102;
      } else {
        
        ite29423 = 0;
      };
      int x26449 = ite29423;
      if (!(x26449)) break; 
      
      x99 += 1;
    };
    char* x9332 = x9324;
    int x9333 = x99 - x9332;
    char* x9334 = x9324;
    char* x9335 = strncpy(x10799, x9334, x9333);
    x99 += 1;
    char* x10817 = (char*)malloc(41 * sizeof(char));
    memset(x10817, 0, 41 * sizeof(char));
    /* VAR */ char* x9343 = x99;
    while(1) {
      
      char x9344 = *x99;
      int x9345 = x9344!=('|');
      /* VAR */ int ite29446 = 0;
      if(x9345) {
        char x36123 = *x99;
        int x36124 = x36123!=('\n');
        ite29446 = x36124;
      } else {
        
        ite29446 = 0;
      };
      int x26465 = ite29446;
      if (!(x26465)) break; 
      
      x99 += 1;
    };
    char* x9351 = x9343;
    int x9352 = x99 - x9351;
    char* x9353 = x9343;
    char* x9354 = strncpy(x10817, x9353, x9352);
    x99 += 1;
    /* VAR */ int x9361 = 0;
    int x9362 = x9361;
    int* x9363 = &x9362;
    char* x9364 = strntoi_unchecked(x99, x9363);
    x99 = x9364;
    char* x10840 = (char*)malloc(16 * sizeof(char));
    memset(x10840, 0, 16 * sizeof(char));
    /* VAR */ char* x9367 = x99;
    while(1) {
      
      char x9368 = *x99;
      int x9369 = x9368!=('|');
      /* VAR */ int ite29474 = 0;
      if(x9369) {
        char x36150 = *x99;
        int x36151 = x36150!=('\n');
        ite29474 = x36151;
      } else {
        
        ite29474 = 0;
      };
      int x26486 = ite29474;
      if (!(x26486)) break; 
      
      x99 += 1;
    };
    char* x9375 = x9367;
    int x9376 = x99 - x9375;
    char* x9377 = x9367;
    char* x9378 = strncpy(x10840, x9377, x9376);
    x99 += 1;
    /* VAR */ double x9385 = 0.0;
    double x9386 = x9385;
    double* x9387 = &x9386;
    char* x9388 = strntod_unchecked(x99, x9387);
    x99 = x9388;
    char* x10863 = (char*)malloc(11 * sizeof(char));
    memset(x10863, 0, 11 * sizeof(char));
    /* VAR */ char* x9391 = x99;
    while(1) {
      
      char x9392 = *x99;
      int x9393 = x9392!=('|');
      /* VAR */ int ite29502 = 0;
      if(x9393) {
        char x36177 = *x99;
        int x36178 = x36177!=('\n');
        ite29502 = x36178;
      } else {
        
        ite29502 = 0;
      };
      int x26507 = ite29502;
      if (!(x26507)) break; 
      
      x99 += 1;
    };
    char* x9399 = x9391;
    int x9400 = x99 - x9399;
    char* x9401 = x9391;
    char* x9402 = strncpy(x10863, x9401, x9400);
    x99 += 1;
    char* x10881 = (char*)malloc(118 * sizeof(char));
    memset(x10881, 0, 118 * sizeof(char));
    /* VAR */ char* x9410 = x99;
    while(1) {
      
      char x9411 = *x99;
      int x9412 = x9411!=('|');
      /* VAR */ int ite29525 = 0;
      if(x9412) {
        char x36199 = *x99;
        int x36200 = x36199!=('\n');
        ite29525 = x36200;
      } else {
        
        ite29525 = 0;
      };
      int x26523 = ite29525;
      if (!(x26523)) break; 
      
      x99 += 1;
    };
    char* x9418 = x9410;
    int x9419 = x99 - x9418;
    char* x9420 = x9410;
    char* x9421 = strncpy(x10881, x9420, x9419);
    x99 += 1;
    struct CUSTOMERRecord* x11651 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x11651, 0, 1 * sizeof(struct CUSTOMERRecord));
    x11651->C_CUSTKEY = x9319; x11651->C_MKTSEGMENT = x10863;
    int x149 = x100;
    struct CUSTOMERRecord x10901 = *x11651;
    *(x10776 + x149) = x10901;
    struct CUSTOMERRecord* x10903 = &(x10776[x149]);
    x11651 = x10903;
    int x151 = x100;
    int x152 = x151+(1);
    x100 = x152;
  };
  int x156 = 0;
  for(; x156 < 1 ; x156 += 1) {
    
    /* VAR */ int x37593 = 0;
    GList*** x37594 = (GList***)malloc(1048576 * sizeof(GList**));
    memset(x37594, 0, 1048576 * sizeof(GList**));
    int x22274 = 0;
    for(; x22274 < 1048576 ; x22274 += 1) {
      
      GList** x22275 = malloc(8);
      GList* x22276 = NULL;
      pointer_assign(x22275, x22276);
      *(x37594 + x22274) = x22275;
    };
    struct LINEITEMRecord** x37606 = (struct LINEITEMRecord**)malloc(60000000 * sizeof(struct LINEITEMRecord*));
    memset(x37606, 0, 60000000 * sizeof(struct LINEITEMRecord*));
    int* x37607 = (int*)malloc(60000000 * sizeof(int));
    memset(x37607, 0, 60000000 * sizeof(int));
    int x22286 = 0;
    for(; x22286 < 60000000 ; x22286 += 1) {
      
      struct LINEITEMRecord* x22287 = (struct LINEITEMRecord*)malloc(16 * sizeof(struct LINEITEMRecord));
      memset(x22287, 0, 16 * sizeof(struct LINEITEMRecord));
      *(x37606 + x22286) = x22287;
    };
    /* VAR */ int x37615 = 0;
    int x22307 = 0;
    for(; x22307 < x8970 ; x22307 += 1) {
      
      struct LINEITEMRecord* x22308 = &(x10450[x22307]);
      int x22309 = x22308->L_ORDERKEY;
      int x22310 = x22309%(60000000);
      int x22311 = x37607[x22310];
      struct LINEITEMRecord* x22312 = x37606[x22310];
      struct LINEITEMRecord x22313 = *x22308;
      *(x22312 + x22311) = x22313;
      struct LINEITEMRecord* x22315 = &(x22312[x22311]);
      x22308 = x22315;
      int x22317 = x22311+(1);
      *(x37607 + x22310) = x22317;
      int x22319 = x37615;
      int x22320 = x22319+(1);
      x37615 = x22320;
    };
    struct ORDERSRecord** x37647 = (struct ORDERSRecord**)malloc(96 * sizeof(struct ORDERSRecord*));
    memset(x37647, 0, 96 * sizeof(struct ORDERSRecord*));
    int* x37648 = (int*)malloc(96 * sizeof(int));
    memset(x37648, 0, 96 * sizeof(int));
    int x22331 = 0;
    for(; x22331 < 96 ; x22331 += 1) {
      
      int x22332 = x9165/(96);
      int x22333 = x22332*(4);
      struct ORDERSRecord* x22334 = (struct ORDERSRecord*)malloc(x22333 * sizeof(struct ORDERSRecord));
      memset(x22334, 0, x22333 * sizeof(struct ORDERSRecord));
      *(x37647 + x22331) = x22334;
    };
    /* VAR */ int x37660 = 0;
    int x22360 = 0;
    for(; x22360 < x9165 ; x22360 += 1) {
      
      struct ORDERSRecord* x22361 = &(x10645[x22360]);
      int x22362 = x22361->O_ORDERDATE;
      int x22363 = x22362/(100);
      int x22364 = x22363%(100);
      int x22365 = x22363/(100);
      int x22366 = x22365-(1992);
      int x22367 = x22366*(12);
      int x22368 = x22364-(1);
      int x22369 = x22367+(x22368);
      int x22370 = x37648[x22369];
      struct ORDERSRecord* x22371 = x37647[x22369];
      struct ORDERSRecord x22372 = *x22361;
      *(x22371 + x22370) = x22372;
      struct ORDERSRecord* x22374 = &(x22371[x22370]);
      x22361 = x22374;
      int x22376 = x22370+(1);
      *(x37648 + x22369) = x22376;
      int x22378 = x37660;
      int x22379 = x22378+(1);
      x37660 = x22379;
    };
    /* VAR */ int x37704 = 0;
    struct Q3GRPRecord* x37705 = (struct Q3GRPRecord*)malloc(48000000 * sizeof(struct Q3GRPRecord));
    memset(x37705, 0, 48000000 * sizeof(struct Q3GRPRecord));
    /* VAR */ int x37706 = 0;
    while(1) {
      
      int x8211 = x37706;
      int x8212 = x8211<(48000000);
      if (!(x8212)) break; 
      
      int x8213 = x37706;
      struct Q3GRPRecord* x11742 = (struct Q3GRPRecord*)malloc(1 * sizeof(struct Q3GRPRecord));
      memset(x11742, 0, 1 * sizeof(struct Q3GRPRecord));
      x11742->L_ORDERKEY = 0; x11742->O_ORDERDATE = 0; x11742->O_SHIPPRIORITY = 0;
      struct Q3GRPRecord x10989 = *x11742;
      *(x37705 + x8213) = x10989;
      struct Q3GRPRecord* x10991 = &(x37705[x8213]);
      x11742 = x10991;
      int x8216 = x37706;
      int x8217 = x8216+(1);
      x37706 = x8217;
    };
    /* VAR */ int x37721 = 0;
    double** x37722 = (double**)malloc(48000000 * sizeof(double*));
    memset(x37722, 0, 48000000 * sizeof(double*));
    /* VAR */ int x37723 = 0;
    while(1) {
      
      int x8223 = x37723;
      int x8224 = x8223<(48000000);
      if (!(x8224)) break; 
      
      int x8225 = x37723;
      double* x11003 = (double*)malloc(1 * sizeof(double));
      memset(x11003, 0, 1 * sizeof(double));
      *(x37722 + x8225) = x11003;
      int x8228 = x37723;
      int x8229 = x8228+(1);
      x37723 = x8229;
    };
    /* VAR */ int x37733 = 0;
    struct AGGRecord_Q3GRPRecord* x37734 = (struct AGGRecord_Q3GRPRecord*)malloc(48000000 * sizeof(struct AGGRecord_Q3GRPRecord));
    memset(x37734, 0, 48000000 * sizeof(struct AGGRecord_Q3GRPRecord));
    /* VAR */ int x37735 = 0;
    while(1) {
      
      int x8235 = x37735;
      int x8236 = x8235<(48000000);
      if (!(x8236)) break; 
      
      int x8237 = x37735;
      struct Q3GRPRecord* x8238 = &(x37705[x8237]);
      double* x8239 = x37722[x8237];
      struct AGGRecord_Q3GRPRecord* x11773 = (struct AGGRecord_Q3GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q3GRPRecord));
      memset(x11773, 0, 1 * sizeof(struct AGGRecord_Q3GRPRecord));
      x11773->key = x8238; x11773->aggs = x8239;
      struct AGGRecord_Q3GRPRecord x11018 = *x11773;
      *(x37734 + x8237) = x11018;
      struct AGGRecord_Q3GRPRecord* x11020 = &(x37734[x8237]);
      x11773 = x11020;
      int x8242 = x37735;
      int x8243 = x8242+(1);
      x37735 = x8243;
    };
    /* VAR */ struct timeval x37752 = x8400;
    struct timeval x37753 = x37752;
    /* VAR */ struct timeval x37754 = x8400;
    struct timeval x37755 = x37754;
    /* VAR */ struct timeval x37756 = x8400;
    struct timeval x37757 = x37756;
    struct timeval* x37758 = &x37755;
    gettimeofday(x37758, NULL);
    /* VAR */ int x37760 = 0;
    int* x37839 = &(x37800);
    GTree* x37840 = g_tree_new(x37839);
    /* VAR */ int x37841 = 0;
    /* VAR */ int x37842 = 0;
    int x22896 = 33;
    for(; x22896 < 39 ; x22896 += 1) {
      
      int x22897 = x37648[x22896];
      struct ORDERSRecord* x22898 = x37647[x22896];
      int x22691 = 0;
      for(; x22691 < x22897 ; x22691 += 1) {
        
        struct ORDERSRecord* x22692 = &(x22898[x22691]);
        int x22693 = x22692->O_ORDERDATE;
        int x22694 = x22693<(19950304);
        if(x22694) {
          int x278 = x22692->O_CUSTKEY;
          int x5813 = x278-(1);
          struct CUSTOMERRecord* x5814 = &(x10776[x5813]);
          char* x5815 = x5814->C_MKTSEGMENT;
          int x20800 = strcmp(x5815, "HOUSEHOLD");
          int x20801 = x20800==(0);
          if(x20801) {
            int x260 = x5814->C_CUSTKEY;
            int x3407 = x260==(x278);
            if(x3407) {
              int x3408 = x5814->C_CUSTKEY;
              int x3409 = x3408==(x278);
              if(x3409) {
                int x798 = x22692->O_ORDERKEY;
                int x799 = x22692->O_SHIPPRIORITY;
                int x3416 = x798%(60000000);
                int x3417 = x37607[x3416];
                struct LINEITEMRecord* x3418 = x37606[x3416];
                int x22600 = 0;
                for(; x22600 < x3417 ; x22600 += 1) {
                  
                  struct LINEITEMRecord* x22601 = &(x3418[x22600]);
                  int x22602 = x22601->L_SHIPDATE;
                  int x22603 = x22602>(19950304);
                  if(x22603) {
                    int x322 = x22601->L_ORDERKEY;
                    int x5837 = x798==(x322);
                    if(x5837) {
                      double x886 = x22601->L_EXTENDEDPRICE;
                      double x887 = x22601->L_DISCOUNT;
                      int x8314 = x37704;
                      struct Q3GRPRecord* x8315 = &(x37705[x8314]);
                      x8315->L_ORDERKEY = x322;
                      x8315->O_ORDERDATE = x22693;
                      x8315->O_SHIPPRIORITY = x799;
                      int x8319 = x37704;
                      int x8320 = x8319+(1);
                      x37704 = x8320;
                      int x18330 = x8315->L_ORDERKEY;
                      int x18332 = x8315->O_ORDERDATE;
                      int x18334 = x8315->O_SHIPPRIORITY;
                      int x18336 = x18330+(x18332);
                      int x18337 = x18336+(x18334);
                      int x4888 = 1048576-(1);
                      int x4889 = x18337&(x4888);
                      GList** x4890 = x37594[x4889];
                      int x4891 = x37593;
                      int x4892 = x4889>(x4891);
                      if(x4892) {
                        x37593 = x4889;
                      };
                      /* VAR */ struct AGGRecord_Q3GRPRecord* x13412 = NULL;
                      GList* x13413 = *(x4890);
                      /* VAR */ GList* x13414 = x13413;
                      while(1) {
                        
                        GList* x13415 = x13414;
                        GList* x13416 = NULL;
                        int x13417 = x13415!=(x13416);
                        if (!(x13417)) break; 
                        
                        GList* x13418 = x13414;
                        void* x13419 = g_list_nth_data(x13418, 0);
                        struct AGGRecord_Q3GRPRecord* x13420 = (struct AGGRecord_Q3GRPRecord*){x13419};
                        GList* x13421 = x13414;
                        GList* x13422 = g_list_next(x13421);
                        x13414 = x13422;
                        struct Q3GRPRecord* x13424 = x13420->key;
                        int x18370 = x13424->L_ORDERKEY;
                        int x18371 = x18370==(x18330);
                        int x18372 = x13424->O_ORDERDATE;
                        int x18373 = x18372==(x18332);
                        int x18374 = x13424->O_SHIPPRIORITY;
                        int x18375 = x18374==(x18334);
                        /* VAR */ int ite32217 = 0;
                        if(x18371) {
                          ite32217 = x18373;
                        } else {
                          
                          ite32217 = 0;
                        };
                        int x28891 = ite32217;
                        /* VAR */ int ite32224 = 0;
                        if(x28891) {
                          ite32224 = x18375;
                        } else {
                          
                          ite32224 = 0;
                        };
                        int x28893 = ite32224;
                        if(x28893) {
                          x13412 = x13420;
                          break;
                        };
                      };
                      struct AGGRecord_Q3GRPRecord* x13430 = x13412;
                      int x16723 = x13430!=(NULL);
                      /* VAR */ struct AGGRecord_Q3GRPRecord* ite28900 = 0;
                      if(x16723) {
                        ite28900 = x13430;
                      } else {
                        
                        int x28902 = x37721;
                        double* x28903 = x37722[x28902];
                        int x28904 = x37721;
                        int x28905 = x28904+(1);
                        x37721 = x28905;
                        int x28907 = x37733;
                        struct AGGRecord_Q3GRPRecord* x28908 = &(x37734[x28907]);
                        x28908->key = x8315;
                        x28908->aggs = x28903;
                        int x28911 = x37733;
                        int x28912 = x28911+(1);
                        x37733 = x28912;
                        GList* x28914 = *(x4890);
                        GList* x28915 = g_list_prepend(x28914, x28908);
                        pointer_assign(x4890, x28915);
                        ite28900 = x28908;
                      };
                      struct AGGRecord_Q3GRPRecord* x4904 = ite28900;
                      double* x381 = x4904->aggs;
                      double x395 = x381[0];
                      double x398 = 1.0-(x887);
                      double x399 = x886*(x398);
                      double x400 = x395+(x399);
                      *x381 = x400;
                    };
                  };
                };
              };
            };
          };
        };
      };
    };
    int x38868 = x37593;
    int x38869 = x38868+(1);
    int x23332 = 0;
    for(; x23332 < x38869 ; x23332 += 1) {
      
      GList** x23333 = x37594[x23332];
      GList* x23338 = *(x23333);
      /* VAR */ GList* x23339 = x23338;
      while(1) {
        
        GList* x13473 = x23339;
        GList* x13474 = NULL;
        int x13475 = x13473!=(x13474);
        if (!(x13475)) break; 
        
        GList* x13476 = x23339;
        void* x13477 = g_list_nth_data(x13476, 0);
        struct AGGRecord_Q3GRPRecord* x13478 = (struct AGGRecord_Q3GRPRecord*){x13477};
        GList* x13479 = x23339;
        GList* x13480 = g_list_next(x13479);
        x23339 = x13480;
        g_tree_insert(x37840, x13478, x13478);
      };
    };
    while(1) {
      
      int x1938 = x37841;
      int x423 = !(x1938);
      /* VAR */ int ite32309 = 0;
      if(x423) {
        int x38916 = g_tree_nnodes(x37840);
        int x38917 = x38916!=(0);
        ite32309 = x38917;
      } else {
        
        ite32309 = 0;
      };
      int x28973 = ite32309;
      if (!(x28973)) break; 
      
      void* x13494 = NULL;
      void** x13502 = &(x13494);
      g_tree_foreach(x37840, x13501, x13502);
      struct AGGRecord_Q3GRPRecord* x13504 = (struct AGGRecord_Q3GRPRecord*){x13494};
      int x13505 = g_tree_remove(x37840, x13504);
      int x1946 = x37842;
      int x433 = x1946>=(10);
      if(x433) {
        x37841 = 1;
      } else {
        
        struct Q3GRPRecord* x435 = x13504->key;
        int x436 = x435->L_ORDERKEY;
        double* x437 = x13504->aggs;
        double x438 = x437[0];
        int x439 = x435->O_ORDERDATE;
        char* x440 = ltoa(x439);
        int x441 = x435->O_SHIPPRIORITY;
        printf("%d|%.4f|%s|%d\n", x436, x438, x440, x441);
        int x1958 = x37842;
        int x444 = x1958+(1);
        x37842 = x444;
      };
    };
    int x38949 = x37842;
    printf("(%d rows)\n", x38949);
    struct timeval* x38951 = &x37757;
    gettimeofday(x38951, NULL);
    struct timeval* x38953 = &x37753;
    struct timeval* x38954 = &x37757;
    struct timeval* x38955 = &x37755;
    long x38956 = timeval_subtract(x38953, x38954, x38955);
    printf("Generated code run in %ld milliseconds.\n", x38956);
  };
}
/* ----------- FUNCTIONS ----------- */
int x37800(struct AGGRecord_Q3GRPRecord* x219, struct AGGRecord_Q3GRPRecord* x220) {
  double* x221 = x219->aggs;
  double x222 = x221[0];
  double* x223 = x220->aggs;
  double x224 = x223[0];
  int x225 = x222<(x224);
  /* VAR */ int ite27995 = 0;
  if(x225) {
    ite27995 = 1;
  } else {
    
    int x27997 = x222>(x224);
    /* VAR */ int ite27999 = 0;
    if(x27997) {
      ite27999 = -1;
    } else {
      
      struct Q3GRPRecord* x28001 = x219->key;
      int x28002 = x28001->O_ORDERDATE;
      struct Q3GRPRecord* x28003 = x220->key;
      int x28004 = x28003->O_ORDERDATE;
      int x28005 = x28002<(x28004);
      /* VAR */ int ite28007 = 0;
      if(x28005) {
        ite28007 = -1;
      } else {
        
        int x28009 = x28002>(x28004);
        /* VAR */ int ite28011 = 0;
        if(x28009) {
          ite28011 = 1;
        } else {
          
          ite28011 = 0;
        };
        int x28010 = ite28011;
        ite28007 = x28010;
      };
      int x28006 = ite28007;
      ite27999 = x28006;
    };
    int x27998 = ite27999;
    ite27995 = x27998;
  };
  int x236 = ite27995;
  return x236; 
}

int x13501(void* x13495, void* x13496, void* x13497) {
  struct AGGRecord_Q3GRPRecord** x13498 = (struct AGGRecord_Q3GRPRecord**){x13497};
  struct AGGRecord_Q3GRPRecord* x13499 = (struct AGGRecord_Q3GRPRecord*){x13496};
  pointer_assign(x13498, x13499);
  return 1; 
}
