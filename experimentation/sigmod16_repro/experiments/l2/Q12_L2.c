#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct AGGRecord_OptimalString;
  struct ORDERSRecord_LINEITEMRecord;
  struct ORDERSRecord;
  
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
  
  struct ORDERSRecord_LINEITEMRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
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
  
  


int x24166(char* x7845);

int x24184(char* x7850, char* x7851);

int x24190(void* x6644);

int x24193(void* x6647, void* x6648);

int x24263(struct AGGRecord_OptimalString* x170, struct AGGRecord_OptimalString* x171);

int x8240(void* x8234, void* x8235, void* x8236);
/* GLOBAL VARS */

struct timeval x3542;
int main(int argc, char** argv) {
  FILE* x4046 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x4047 = 0;
  int x4048 = x4047;
  int* x4049 = &x4048;
  int x4050 = fscanf(x4046, "%d", x4049);
  pclose(x4046);
  struct LINEITEMRecord* x5174 = (struct LINEITEMRecord*)malloc(x4048 * sizeof(struct LINEITEMRecord));
  memset(x5174, 0, x4048 * sizeof(struct LINEITEMRecord));
  int x4054 = O_RDONLY;
  int x4055 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x4054);
  struct stat x4056 = (struct stat){0};
  /* VAR */ struct stat x4057 = x4056;
  struct stat x4058 = x4057;
  struct stat* x4059 = &x4058;
  int x4060 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x4059);
  int x4062 = PROT_READ;
  int x4063 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x4059->st_size), x4062, x4063, x4055, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite18942 = 0;
    if((x5<(x4048))) {
      char x23297 = *x3;
      ite18942 = (x23297!=('\0'));
    } else {
      
      ite18942 = 0;
    };
    int x17724 = ite18942;
    if (!(x17724)) break; 
    
    /* VAR */ int x4071 = 0;
    int x4072 = x4071;
    int* x4073 = &x4072;
    char* x4074 = strntoi_unchecked(x3, x4073);
    x3 = x4074;
    /* VAR */ int x4076 = 0;
    int x4077 = x4076;
    int* x4078 = &x4077;
    char* x4079 = strntoi_unchecked(x3, x4078);
    x3 = x4079;
    /* VAR */ int x4081 = 0;
    int x4082 = x4081;
    int* x4083 = &x4082;
    char* x4084 = strntoi_unchecked(x3, x4083);
    x3 = x4084;
    /* VAR */ int x4086 = 0;
    int x4087 = x4086;
    int* x4088 = &x4087;
    char* x4089 = strntoi_unchecked(x3, x4088);
    x3 = x4089;
    /* VAR */ double x4091 = 0.0;
    double x4092 = x4091;
    double* x4093 = &x4092;
    char* x4094 = strntod_unchecked(x3, x4093);
    x3 = x4094;
    /* VAR */ double x4096 = 0.0;
    double x4097 = x4096;
    double* x4098 = &x4097;
    char* x4099 = strntod_unchecked(x3, x4098);
    x3 = x4099;
    /* VAR */ double x4101 = 0.0;
    double x4102 = x4101;
    double* x4103 = &x4102;
    char* x4104 = strntod_unchecked(x3, x4103);
    x3 = x4104;
    /* VAR */ double x4106 = 0.0;
    double x4107 = x4106;
    double* x4108 = &x4107;
    char* x4109 = strntod_unchecked(x3, x4108);
    x3 = x4109;
    char x4111 = *x3;
    /* VAR */ char x4112 = x4111;
    x3 += 1;
    x3 += 1;
    char x4115 = x4112;
    char x4116 = *x3;
    /* VAR */ char x4117 = x4116;
    x3 += 1;
    x3 += 1;
    char x4120 = x4117;
    /* VAR */ int x4121 = 0;
    int x4122 = x4121;
    int* x4123 = &x4122;
    char* x4124 = strntoi_unchecked(x3, x4123);
    x3 = x4124;
    /* VAR */ int x4126 = 0;
    int x4127 = x4126;
    int* x4128 = &x4127;
    char* x4129 = strntoi_unchecked(x3, x4128);
    x3 = x4129;
    /* VAR */ int x4131 = 0;
    int x4132 = x4131;
    int* x4133 = &x4132;
    char* x4134 = strntoi_unchecked(x3, x4133);
    x3 = x4134;
    /* VAR */ int x4140 = 0;
    int x4141 = x4140;
    int* x4142 = &x4141;
    char* x4143 = strntoi_unchecked(x3, x4142);
    x3 = x4143;
    /* VAR */ int x4145 = 0;
    int x4146 = x4145;
    int* x4147 = &x4146;
    char* x4148 = strntoi_unchecked(x3, x4147);
    x3 = x4148;
    /* VAR */ int x4150 = 0;
    int x4151 = x4150;
    int* x4152 = &x4151;
    char* x4153 = strntoi_unchecked(x3, x4152);
    x3 = x4153;
    /* VAR */ int x4159 = 0;
    int x4160 = x4159;
    int* x4161 = &x4160;
    char* x4162 = strntoi_unchecked(x3, x4161);
    x3 = x4162;
    /* VAR */ int x4164 = 0;
    int x4165 = x4164;
    int* x4166 = &x4165;
    char* x4167 = strntoi_unchecked(x3, x4166);
    x3 = x4167;
    /* VAR */ int x4169 = 0;
    int x4170 = x4169;
    int* x4171 = &x4170;
    char* x4172 = strntoi_unchecked(x3, x4171);
    x3 = x4172;
    char* x5300 = (char*)malloc(26 * sizeof(char));
    memset(x5300, 0, 26 * sizeof(char));
    /* VAR */ char* x4179 = x3;
    while(1) {
      
      char x4180 = *x3;
      /* VAR */ int ite19063 = 0;
      if((x4180!=('|'))) {
        char x23417 = *x3;
        ite19063 = (x23417!=('\n'));
      } else {
        
        ite19063 = 0;
      };
      int x17838 = ite19063;
      if (!(x17838)) break; 
      
      x3 += 1;
    };
    char* x4187 = x4179;
    int x4188 = x3 - x4187;
    char* x4189 = x4179;
    char* x4190 = strncpy(x5300, x4189, x4188);
    x3 += 1;
    char* x5318 = (char*)malloc(11 * sizeof(char));
    memset(x5318, 0, 11 * sizeof(char));
    /* VAR */ char* x4198 = x3;
    while(1) {
      
      char x4199 = *x3;
      /* VAR */ int ite19086 = 0;
      if((x4199!=('|'))) {
        char x23439 = *x3;
        ite19086 = (x23439!=('\n'));
      } else {
        
        ite19086 = 0;
      };
      int x17854 = ite19086;
      if (!(x17854)) break; 
      
      x3 += 1;
    };
    char* x4206 = x4198;
    int x4207 = x3 - x4206;
    char* x4208 = x4198;
    char* x4209 = strncpy(x5318, x4208, x4207);
    x3 += 1;
    char* x5336 = (char*)malloc(45 * sizeof(char));
    memset(x5336, 0, 45 * sizeof(char));
    /* VAR */ char* x4217 = x3;
    while(1) {
      
      char x4218 = *x3;
      /* VAR */ int ite19109 = 0;
      if((x4218!=('|'))) {
        char x23461 = *x3;
        ite19109 = (x23461!=('\n'));
      } else {
        
        ite19109 = 0;
      };
      int x17870 = ite19109;
      if (!(x17870)) break; 
      
      x3 += 1;
    };
    char* x4225 = x4217;
    int x4226 = x3 - x4225;
    char* x4227 = x4217;
    char* x4228 = strncpy(x5336, x4227, x4226);
    x3 += 1;
    struct LINEITEMRecord* x5921 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x5921, 0, 1 * sizeof(struct LINEITEMRecord));
    x5921->L_ORDERKEY = x4072; x5921->L_PARTKEY = x4077; x5921->L_SUPPKEY = x4082; x5921->L_LINENUMBER = x4087; x5921->L_QUANTITY = x4092; x5921->L_EXTENDEDPRICE = x4097; x5921->L_DISCOUNT = x4102; x5921->L_TAX = x4107; x5921->L_RETURNFLAG = x4115; x5921->L_LINESTATUS = x4120; x5921->L_SHIPDATE = (((x4122*(10000))+((x4127*(100))))+(x4132)); x5921->L_COMMITDATE = (((x4141*(10000))+((x4146*(100))))+(x4151)); x5921->L_RECEIPTDATE = (((x4160*(10000))+((x4165*(100))))+(x4170)); x5921->L_SHIPINSTRUCT = x5300; x5921->L_SHIPMODE = x5318; x5921->L_COMMENT = x5336;
    int x47 = x4;
    struct LINEITEMRecord x5356 = *x5921;
    *(x5174 + x47) = x5356;
    struct LINEITEMRecord* x5358 = &(x5174[x47]);
    x5921 = x5358;
    int x49 = x4;
    x4 = (x49+(1));
  };
  FILE* x4241 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x4242 = 0;
  int x4243 = x4242;
  int* x4244 = &x4243;
  int x4245 = fscanf(x4241, "%d", x4244);
  pclose(x4241);
  struct ORDERSRecord* x5369 = (struct ORDERSRecord*)malloc(x4243 * sizeof(struct ORDERSRecord));
  memset(x5369, 0, x4243 * sizeof(struct ORDERSRecord));
  int x4249 = O_RDONLY;
  int x4250 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x4249);
  /* VAR */ struct stat x4251 = x4056;
  struct stat x4252 = x4251;
  struct stat* x4253 = &x4252;
  int x4254 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x4253);
  int x4256 = PROT_READ;
  int x4257 = MAP_PRIVATE;
  char* x55 = mmap(NULL, (x4253->st_size), x4256, x4257, x4250, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    /* VAR */ int ite19159 = 0;
    if((x57<(x4243))) {
      char x23510 = *x55;
      ite19159 = (x23510!=('\0'));
    } else {
      
      ite19159 = 0;
    };
    int x17913 = ite19159;
    if (!(x17913)) break; 
    
    /* VAR */ int x4265 = 0;
    int x4266 = x4265;
    int* x4267 = &x4266;
    char* x4268 = strntoi_unchecked(x55, x4267);
    x55 = x4268;
    /* VAR */ int x4270 = 0;
    int x4271 = x4270;
    int* x4272 = &x4271;
    char* x4273 = strntoi_unchecked(x55, x4272);
    x55 = x4273;
    char x4275 = *x55;
    /* VAR */ char x4276 = x4275;
    x55 += 1;
    x55 += 1;
    char x4279 = x4276;
    /* VAR */ double x4280 = 0.0;
    double x4281 = x4280;
    double* x4282 = &x4281;
    char* x4283 = strntod_unchecked(x55, x4282);
    x55 = x4283;
    /* VAR */ int x4285 = 0;
    int x4286 = x4285;
    int* x4287 = &x4286;
    char* x4288 = strntoi_unchecked(x55, x4287);
    x55 = x4288;
    /* VAR */ int x4290 = 0;
    int x4291 = x4290;
    int* x4292 = &x4291;
    char* x4293 = strntoi_unchecked(x55, x4292);
    x55 = x4293;
    /* VAR */ int x4295 = 0;
    int x4296 = x4295;
    int* x4297 = &x4296;
    char* x4298 = strntoi_unchecked(x55, x4297);
    x55 = x4298;
    char* x5426 = (char*)malloc(16 * sizeof(char));
    memset(x5426, 0, 16 * sizeof(char));
    /* VAR */ char* x4305 = x55;
    while(1) {
      
      char x4306 = *x55;
      /* VAR */ int ite19212 = 0;
      if((x4306!=('|'))) {
        char x23562 = *x55;
        ite19212 = (x23562!=('\n'));
      } else {
        
        ite19212 = 0;
      };
      int x17959 = ite19212;
      if (!(x17959)) break; 
      
      x55 += 1;
    };
    char* x4313 = x4305;
    int x4314 = x55 - x4313;
    char* x4315 = x4305;
    char* x4316 = strncpy(x5426, x4315, x4314);
    x55 += 1;
    char* x5444 = (char*)malloc(16 * sizeof(char));
    memset(x5444, 0, 16 * sizeof(char));
    /* VAR */ char* x4324 = x55;
    while(1) {
      
      char x4325 = *x55;
      /* VAR */ int ite19235 = 0;
      if((x4325!=('|'))) {
        char x23584 = *x55;
        ite19235 = (x23584!=('\n'));
      } else {
        
        ite19235 = 0;
      };
      int x17975 = ite19235;
      if (!(x17975)) break; 
      
      x55 += 1;
    };
    char* x4332 = x4324;
    int x4333 = x55 - x4332;
    char* x4334 = x4324;
    char* x4335 = strncpy(x5444, x4334, x4333);
    x55 += 1;
    /* VAR */ int x4342 = 0;
    int x4343 = x4342;
    int* x4344 = &x4343;
    char* x4345 = strntoi_unchecked(x55, x4344);
    x55 = x4345;
    char* x5467 = (char*)malloc(80 * sizeof(char));
    memset(x5467, 0, 80 * sizeof(char));
    /* VAR */ char* x4348 = x55;
    while(1) {
      
      char x4349 = *x55;
      /* VAR */ int ite19263 = 0;
      if((x4349!=('|'))) {
        char x23611 = *x55;
        ite19263 = (x23611!=('\n'));
      } else {
        
        ite19263 = 0;
      };
      int x17996 = ite19263;
      if (!(x17996)) break; 
      
      x55 += 1;
    };
    char* x4356 = x4348;
    int x4357 = x55 - x4356;
    char* x4358 = x4348;
    char* x4359 = strncpy(x5467, x4358, x4357);
    x55 += 1;
    struct ORDERSRecord* x6054 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x6054, 0, 1 * sizeof(struct ORDERSRecord));
    x6054->O_ORDERKEY = x4266; x6054->O_CUSTKEY = x4271; x6054->O_ORDERSTATUS = x4279; x6054->O_TOTALPRICE = x4281; x6054->O_ORDERDATE = (((x4286*(10000))+((x4291*(100))))+(x4296)); x6054->O_ORDERPRIORITY = x5426; x6054->O_CLERK = x5444; x6054->O_SHIPPRIORITY = x4343; x6054->O_COMMENT = x5467;
    int x91 = x56;
    struct ORDERSRecord x5487 = *x6054;
    *(x5369 + x91) = x5487;
    struct ORDERSRecord* x5489 = &(x5369[x91]);
    x6054 = x5489;
    int x93 = x56;
    x56 = (x93+(1));
  };
  int x98 = 0;
  for(; x98 < 1 ; x98 += 1) {
    
    GHashTable* x24189 = g_hash_table_new(x24166, x24184);
    GHashTable* x24199 = g_hash_table_new(((void***){x24190}), ((int*){x24193}));
    /* VAR */ int x24200 = 0;
    struct ORDERSRecord_LINEITEMRecord* x24201 = (struct ORDERSRecord_LINEITEMRecord*)malloc(48000000 * sizeof(struct ORDERSRecord_LINEITEMRecord));
    memset(x24201, 0, 48000000 * sizeof(struct ORDERSRecord_LINEITEMRecord));
    /* VAR */ int x24202 = 0;
    while(1) {
      
      int x3324 = x24202;
      if (!((x3324<(48000000)))) break; 
      
      int x3326 = x24202;
      struct ORDERSRecord_LINEITEMRecord* x6077 = (struct ORDERSRecord_LINEITEMRecord*)malloc(1 * sizeof(struct ORDERSRecord_LINEITEMRecord));
      memset(x6077, 0, 1 * sizeof(struct ORDERSRecord_LINEITEMRecord));
      x6077->O_ORDERKEY = 0; x6077->O_CUSTKEY = 0; x6077->O_ORDERSTATUS = '\0'; x6077->O_TOTALPRICE = 0.0; x6077->O_ORDERDATE = 0; x6077->O_ORDERPRIORITY = ""; x6077->O_CLERK = ""; x6077->O_SHIPPRIORITY = 0; x6077->O_COMMENT = ""; x6077->L_ORDERKEY = 0; x6077->L_PARTKEY = 0; x6077->L_SUPPKEY = 0; x6077->L_LINENUMBER = 0; x6077->L_QUANTITY = 0.0; x6077->L_EXTENDEDPRICE = 0.0; x6077->L_DISCOUNT = 0.0; x6077->L_TAX = 0.0; x6077->L_RETURNFLAG = '\0'; x6077->L_LINESTATUS = '\0'; x6077->L_SHIPDATE = 0; x6077->L_COMMITDATE = 0; x6077->L_RECEIPTDATE = 0; x6077->L_SHIPINSTRUCT = ""; x6077->L_SHIPMODE = ""; x6077->L_COMMENT = "";
      struct ORDERSRecord_LINEITEMRecord x5507 = *x6077;
      *(x24201 + x3326) = x5507;
      struct ORDERSRecord_LINEITEMRecord* x5509 = &(x24201[x3326]);
      x6077 = x5509;
      int x3329 = x24202;
      x24202 = (x3329+(1));
    };
    /* VAR */ int x24217 = 0;
    double** x24218 = (double**)malloc(7 * sizeof(double*));
    memset(x24218, 0, 7 * sizeof(double*));
    /* VAR */ int x24219 = 0;
    while(1) {
      
      int x3336 = x24219;
      if (!((x3336<(7)))) break; 
      
      int x3338 = x24219;
      double* x5521 = (double*)malloc(2 * sizeof(double));
      memset(x5521, 0, 2 * sizeof(double));
      *(x24218 + x3338) = x5521;
      int x3341 = x24219;
      x24219 = (x3341+(1));
    };
    /* VAR */ int x24229 = 0;
    struct AGGRecord_OptimalString* x24230 = (struct AGGRecord_OptimalString*)malloc(7 * sizeof(struct AGGRecord_OptimalString));
    memset(x24230, 0, 7 * sizeof(struct AGGRecord_OptimalString));
    /* VAR */ int x24231 = 0;
    while(1) {
      
      int x3348 = x24231;
      if (!((x3348<(7)))) break; 
      
      int x3350 = x24231;
      double* x3351 = x24218[x3350];
      struct AGGRecord_OptimalString* x6107 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x6107, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      x6107->key = ""; x6107->aggs = x3351;
      struct AGGRecord_OptimalString x5535 = *x6107;
      *(x24230 + x3350) = x5535;
      struct AGGRecord_OptimalString* x5537 = &(x24230[x3350]);
      x6107 = x5537;
      int x3354 = x24231;
      x24231 = (x3354+(1));
    };
    /* VAR */ struct timeval x24247 = x3542;
    struct timeval x24248 = x24247;
    /* VAR */ struct timeval x24249 = x3542;
    struct timeval x24250 = x24249;
    /* VAR */ struct timeval x24251 = x3542;
    struct timeval x24252 = x24251;
    struct timeval* x24253 = &x24250;
    gettimeofday(x24253, NULL);
    /* VAR */ int x24255 = 0;
    /* VAR */ int x24256 = 0;
    int* x24269 = &(x24263);
    GTree* x24270 = g_tree_new(x24269);
    /* VAR */ int x24271 = 0;
    /* VAR */ int x24272 = 0;
    while(1) {
      
      int x24274 = x24255;
      if (!((x24274<(x4243)))) break; 
      
      int x1516 = x24255;
      struct ORDERSRecord* x192 = &(x5369[x1516]);
      void* x6728 = (void*){(x192->O_ORDERKEY)};
      void* x6730 = g_hash_table_lookup(x24199, x6728);
      GList** x6731 = (GList**){x6730};
      GList** x6732 = NULL;
      /* VAR */ GList** ite18589 = 0;
      if((x6731==(x6732))) {
        GList** x18590 = malloc(8);
        GList* x18591 = NULL;
        pointer_assign(x18590, x18591);
        ite18589 = x18590;
      } else {
        
        ite18589 = x6731;
      };
      GList** x6737 = ite18589;
      GList* x6738 = *(x6737);
      GList* x6739 = g_list_prepend(x6738, ((void*){x192}));
      pointer_assign(x6737, x6739);
      g_hash_table_insert(x24199, x6728, ((void*){x6737}));
      int x1521 = x24255;
      x24255 = (x1521+(1));
    };
    while(1) {
      
      int x24303 = x24256;
      if (!((x24303<(x4048)))) break; 
      
      int x1530 = x24256;
      struct LINEITEMRecord* x207 = &(x5174[x1530]);
      int x209 = x207->L_RECEIPTDATE;
      /* VAR */ int ite19974 = 0;
      if((x209<(19950101))) {
        ite19974 = ((x207->L_COMMITDATE)<(19950101));
      } else {
        
        ite19974 = 0;
      };
      int x18612 = ite19974;
      /* VAR */ int ite19983 = 0;
      if(x18612) {
        ite19983 = ((x207->L_SHIPDATE)<(19950101));
      } else {
        
        ite19983 = 0;
      };
      int x18614 = ite19983;
      /* VAR */ int ite19992 = 0;
      if(x18614) {
        ite19992 = ((x207->L_SHIPDATE)<((x207->L_COMMITDATE)));
      } else {
        
        ite19992 = 0;
      };
      int x18616 = ite19992;
      /* VAR */ int ite20002 = 0;
      if(x18616) {
        ite20002 = ((x207->L_COMMITDATE)<(x209));
      } else {
        
        ite20002 = 0;
      };
      int x18618 = ite20002;
      /* VAR */ int ite20011 = 0;
      if(x18618) {
        ite20011 = (x209>=(19940101));
      } else {
        
        ite20011 = 0;
      };
      int x18620 = ite20011;
      /* VAR */ int ite20019 = 0;
      if(x18620) {
        char* x24351 = x207->L_SHIPMODE;
        int x24352 = strcmp(x24351, "MAIL");
        /* VAR */ int x24354 = 0;
        if((x24352==(0))) {
          x24354 = 1;
        } else {
          
          int x24357 = strcmp(x24351, "SHIP");
          x24354 = (x24357==(0));
        };
        int x24361 = x24354;
        ite20019 = x24361;
      } else {
        
        ite20019 = 0;
      };
      int x18622 = ite20019;
      if(x18622) {
        int x231 = x207->L_ORDERKEY;
        void* x6777 = g_hash_table_lookup(x24199, ((void*){x231}));
        GList** x6778 = (GList**){x6777};
        if((x6778!=(NULL))) {
          GList* x8103 = *(x6778);
          /* VAR */ GList* x8104 = x8103;
          while(1) {
            
            GList* x8105 = x8104;
            GList* x8106 = NULL;
            if (!((x8105!=(x8106)))) break; 
            
            GList* x8108 = x8104;
            void* x8109 = g_list_nth_data(x8108, 0);
            struct ORDERSRecord* x8110 = (struct ORDERSRecord*){x8109};
            GList* x8111 = x8104;
            GList* x8112 = g_list_next(x8111);
            x8104 = x8112;
            int x8114 = x8110->O_ORDERKEY;
            if((x8114==(x231))) {
              int x3448 = x24200;
              struct ORDERSRecord_LINEITEMRecord* x3449 = &(x24201[x3448]);
              x3449->O_ORDERKEY = x8114;
              x3449->O_CUSTKEY = (x8110->O_CUSTKEY);
              x3449->O_ORDERSTATUS = (x8110->O_ORDERSTATUS);
              x3449->O_TOTALPRICE = (x8110->O_TOTALPRICE);
              x3449->O_ORDERDATE = (x8110->O_ORDERDATE);
              x3449->O_ORDERPRIORITY = (x8110->O_ORDERPRIORITY);
              x3449->O_CLERK = (x8110->O_CLERK);
              x3449->O_SHIPPRIORITY = (x8110->O_SHIPPRIORITY);
              x3449->O_COMMENT = (x8110->O_COMMENT);
              x3449->L_ORDERKEY = x231;
              x3449->L_PARTKEY = (x207->L_PARTKEY);
              x3449->L_SUPPKEY = (x207->L_SUPPKEY);
              x3449->L_LINENUMBER = (x207->L_LINENUMBER);
              x3449->L_QUANTITY = (x207->L_QUANTITY);
              x3449->L_EXTENDEDPRICE = (x207->L_EXTENDEDPRICE);
              x3449->L_DISCOUNT = (x207->L_DISCOUNT);
              x3449->L_TAX = (x207->L_TAX);
              x3449->L_RETURNFLAG = (x207->L_RETURNFLAG);
              x3449->L_LINESTATUS = (x207->L_LINESTATUS);
              x3449->L_SHIPDATE = (x207->L_SHIPDATE);
              x3449->L_COMMITDATE = (x207->L_COMMITDATE);
              x3449->L_RECEIPTDATE = x209;
              x3449->L_SHIPINSTRUCT = (x207->L_SHIPINSTRUCT);
              x3449->L_SHIPMODE = (x207->L_SHIPMODE);
              x3449->L_COMMENT = (x207->L_COMMENT);
              int x3475 = x24200;
              x24200 = (x3475+(1));
              char* x295 = x3449->L_SHIPMODE;
              void* x8170 = g_hash_table_lookup(x24189, x295);
              /* VAR */ struct AGGRecord_OptimalString* ite18808 = 0;
              if((x8170==(NULL))) {
                int x18809 = x24217;
                double* x18810 = x24218[x18809];
                int x18811 = x24217;
                x24217 = (x18811+(1));
                int x18814 = x24229;
                struct AGGRecord_OptimalString* x18815 = &(x24230[x18814]);
                x18815->key = x295;
                x18815->aggs = x18810;
                int x18818 = x24229;
                x24229 = (x18818+(1));
                g_hash_table_insert(x24189, x295, x18815);
                ite18808 = x18815;
              } else {
                
                ite18808 = x8170;
              };
              struct AGGRecord_OptimalString* x8086 = ite18808;
              double* x300 = x8086->aggs;
              double x314 = x300[0];
              char* x315 = x3449->O_ORDERPRIORITY;
              int x14895 = strcmp(x315, "1-URGENT");
              /* VAR */ int ite20253 = 0;
              if((x14895==(0))) {
                ite20253 = 1;
              } else {
                
                int x24589 = strcmp(x315, "2-HIGH");
                ite20253 = (x24589==(0));
              };
              int x18832 = ite20253;
              /* VAR */ double ite18834 = 0;
              if(x18832) {
                ite18834 = (x314+(1.0));
              } else {
                
                ite18834 = x314;
              };
              double x321 = ite18834;
              *x300 = x321;
              double x329 = x300[1];
              int x14904 = strcmp(x315, "1-URGENT");
              /* VAR */ int ite20273 = 0;
              if((x14904!=(0))) {
                int x24607 = strcmp(x315, "2-HIGH");
                ite20273 = (x24607!=(0));
              } else {
                
                ite20273 = 0;
              };
              int x18845 = ite20273;
              /* VAR */ double ite18847 = 0;
              if(x18845) {
                ite18847 = (x329+(1.0));
              } else {
                
                ite18847 = x329;
              };
              double x335 = ite18847;
              *(x300 + 1) = x335;
            };
          };
        };
      };
      int x1711 = x24256;
      x24256 = (x1711+(1));
    };
    GList* x24628 = g_hash_table_get_keys(x24189);
    /* VAR */ GList* x24629 = x24628;
    int x24630 = g_hash_table_size(x24189);
    int x16448 = 0;
    for(; x16448 < x24630 ; x16448 += 1) {
      
      GList* x16449 = x24629;
      void* x16450 = g_list_nth_data(x16449, 0);
      GList* x16451 = g_list_next(x16449);
      x24629 = x16451;
      void* x16453 = g_hash_table_lookup(x24189, x16450);
      struct AGGRecord_OptimalString* x16455 = (struct AGGRecord_OptimalString*){x16453};
      g_tree_insert(x24270, x16455, x16455);
    };
    while(1) {
      
      int x1721 = x24271;
      int x359 = !(x1721);
      /* VAR */ int ite20322 = 0;
      if(x359) {
        int x24655 = g_tree_nnodes(x24270);
        ite20322 = (x24655!=(0));
      } else {
        
        ite20322 = 0;
      };
      int x18887 = ite20322;
      if (!(x18887)) break; 
      
      void* x8233 = NULL;
      void** x8241 = &(x8233);
      g_tree_foreach(x24270, x8240, x8241);
      struct AGGRecord_OptimalString* x8243 = (struct AGGRecord_OptimalString*){x8233};
      int x8244 = g_tree_remove(x24270, x8243);
      if(0) {
        x24271 = 1;
      } else {
        
        double* x374 = x8243->aggs;
        double x375 = x374[0];
        double x376 = x374[1];
        printf("%s|%.0f|%.0f\n", (x8243->key), x375, x376);
        int x1740 = x24272;
        x24272 = (x1740+(1));
      };
    };
    int x24683 = x24272;
    printf("(%d rows)\n", x24683);
    struct timeval* x24685 = &x24252;
    gettimeofday(x24685, NULL);
    struct timeval* x24687 = &x24248;
    struct timeval* x24688 = &x24252;
    struct timeval* x24689 = &x24250;
    long x24690 = timeval_subtract(x24687, x24688, x24689);
    printf("Generated code run in %ld milliseconds.\n", x24690);
  };
}
/* ----------- FUNCTIONS ----------- */
int x24166(char* x7845) {
  int x14546 = strlen(x7845);
  /* VAR */ int x13045 = 0;
  /* VAR */ int x13046 = 0;
  while(1) {
    
    int x13047 = x13045;
    if (!((x13047<(x14546)))) break; 
    
    int x13049 = x13046;
    int x13050 = x13045;
    char* x14554 = pointer_add(x7845, x13050);
    char x14555 = *(x14554);
    x13046 = (x13049+(x14555));
    int x13055 = x13045;
    x13045 = (x13055+(1));
  };
  int x13059 = x13046;
  return x13059; 
}

int x24184(char* x7850, char* x7851) {
  int x13063 = strcmp(x7850, x7851);
  int x13064 = !(x13063);
  return x13064; 
}

int x24190(void* x6644) {
  int x6645 = g_direct_hash(x6644);
  return x6645; 
}

int x24193(void* x6647, void* x6648) {
  int x6649 = g_direct_equal(x6647, x6648);
  return x6649; 
}

int x24263(struct AGGRecord_OptimalString* x170, struct AGGRecord_OptimalString* x171) {
  int x14647 = strcmp((x170->key), (x171->key));
  return x14647; 
}

int x8240(void* x8234, void* x8235, void* x8236) {
  pointer_assign(((struct AGGRecord_OptimalString**){x8236}), ((struct AGGRecord_OptimalString*){x8235}));
  return 1; 
}
