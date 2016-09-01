#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct PARTRecord_LINEITEMRecord;
  struct AGGRecord_String;
  struct LINEITEMRecord;
  struct PARTRecord;
  
  struct PARTRecord_LINEITEMRecord {
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
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
  
  


int x17974(void* x6390);

int x17977(void* x6393, void* x6394);
/* GLOBAL VARS */

struct timeval x3544;
int main(int argc, char** argv) {
  FILE* x3948 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x3949 = 0;
  int x3950 = x3949;
  int* x3951 = &x3950;
  int x3952 = fscanf(x3948, "%d", x3951);
  pclose(x3948);
  struct LINEITEMRecord* x4990 = (struct LINEITEMRecord*)malloc(x3950 * sizeof(struct LINEITEMRecord));
  memset(x4990, 0, x3950 * sizeof(struct LINEITEMRecord));
  int x3956 = O_RDONLY;
  int x3957 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x3956);
  struct stat x3958 = (struct stat){0};
  /* VAR */ struct stat x3959 = x3958;
  struct stat x3960 = x3959;
  struct stat* x3961 = &x3960;
  int x3962 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x3961);
  int x3964 = PROT_READ;
  int x3965 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x3961->st_size), x3964, x3965, x3957, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite15285 = 0;
    if((x5<(x3950))) {
      char x17298 = *x3;
      ite15285 = (x17298!=('\0'));
    } else {
      
      ite15285 = 0;
    };
    int x14376 = ite15285;
    if (!(x14376)) break; 
    
    /* VAR */ int x3973 = 0;
    int x3974 = x3973;
    int* x3975 = &x3974;
    char* x3976 = strntoi_unchecked(x3, x3975);
    x3 = x3976;
    /* VAR */ int x3978 = 0;
    int x3979 = x3978;
    int* x3980 = &x3979;
    char* x3981 = strntoi_unchecked(x3, x3980);
    x3 = x3981;
    /* VAR */ int x3983 = 0;
    int x3984 = x3983;
    int* x3985 = &x3984;
    char* x3986 = strntoi_unchecked(x3, x3985);
    x3 = x3986;
    /* VAR */ int x3988 = 0;
    int x3989 = x3988;
    int* x3990 = &x3989;
    char* x3991 = strntoi_unchecked(x3, x3990);
    x3 = x3991;
    /* VAR */ double x3993 = 0.0;
    double x3994 = x3993;
    double* x3995 = &x3994;
    char* x3996 = strntod_unchecked(x3, x3995);
    x3 = x3996;
    /* VAR */ double x3998 = 0.0;
    double x3999 = x3998;
    double* x4000 = &x3999;
    char* x4001 = strntod_unchecked(x3, x4000);
    x3 = x4001;
    /* VAR */ double x4003 = 0.0;
    double x4004 = x4003;
    double* x4005 = &x4004;
    char* x4006 = strntod_unchecked(x3, x4005);
    x3 = x4006;
    /* VAR */ double x4008 = 0.0;
    double x4009 = x4008;
    double* x4010 = &x4009;
    char* x4011 = strntod_unchecked(x3, x4010);
    x3 = x4011;
    char x4013 = *x3;
    /* VAR */ char x4014 = x4013;
    x3 += 1;
    x3 += 1;
    char x4017 = x4014;
    char x4018 = *x3;
    /* VAR */ char x4019 = x4018;
    x3 += 1;
    x3 += 1;
    char x4022 = x4019;
    /* VAR */ int x4023 = 0;
    int x4024 = x4023;
    int* x4025 = &x4024;
    char* x4026 = strntoi_unchecked(x3, x4025);
    x3 = x4026;
    /* VAR */ int x4028 = 0;
    int x4029 = x4028;
    int* x4030 = &x4029;
    char* x4031 = strntoi_unchecked(x3, x4030);
    x3 = x4031;
    /* VAR */ int x4033 = 0;
    int x4034 = x4033;
    int* x4035 = &x4034;
    char* x4036 = strntoi_unchecked(x3, x4035);
    x3 = x4036;
    /* VAR */ int x4042 = 0;
    int x4043 = x4042;
    int* x4044 = &x4043;
    char* x4045 = strntoi_unchecked(x3, x4044);
    x3 = x4045;
    /* VAR */ int x4047 = 0;
    int x4048 = x4047;
    int* x4049 = &x4048;
    char* x4050 = strntoi_unchecked(x3, x4049);
    x3 = x4050;
    /* VAR */ int x4052 = 0;
    int x4053 = x4052;
    int* x4054 = &x4053;
    char* x4055 = strntoi_unchecked(x3, x4054);
    x3 = x4055;
    /* VAR */ int x4061 = 0;
    int x4062 = x4061;
    int* x4063 = &x4062;
    char* x4064 = strntoi_unchecked(x3, x4063);
    x3 = x4064;
    /* VAR */ int x4066 = 0;
    int x4067 = x4066;
    int* x4068 = &x4067;
    char* x4069 = strntoi_unchecked(x3, x4068);
    x3 = x4069;
    /* VAR */ int x4071 = 0;
    int x4072 = x4071;
    int* x4073 = &x4072;
    char* x4074 = strntoi_unchecked(x3, x4073);
    x3 = x4074;
    char* x5116 = (char*)malloc(26 * sizeof(char));
    memset(x5116, 0, 26 * sizeof(char));
    /* VAR */ char* x4081 = x3;
    while(1) {
      
      char x4082 = *x3;
      /* VAR */ int ite15406 = 0;
      if((x4082!=('|'))) {
        char x17418 = *x3;
        ite15406 = (x17418!=('\n'));
      } else {
        
        ite15406 = 0;
      };
      int x14490 = ite15406;
      if (!(x14490)) break; 
      
      x3 += 1;
    };
    char* x4089 = x4081;
    int x4090 = x3 - x4089;
    char* x4091 = x4081;
    char* x4092 = strncpy(x5116, x4091, x4090);
    x3 += 1;
    char* x5134 = (char*)malloc(11 * sizeof(char));
    memset(x5134, 0, 11 * sizeof(char));
    /* VAR */ char* x4100 = x3;
    while(1) {
      
      char x4101 = *x3;
      /* VAR */ int ite15429 = 0;
      if((x4101!=('|'))) {
        char x17440 = *x3;
        ite15429 = (x17440!=('\n'));
      } else {
        
        ite15429 = 0;
      };
      int x14506 = ite15429;
      if (!(x14506)) break; 
      
      x3 += 1;
    };
    char* x4108 = x4100;
    int x4109 = x3 - x4108;
    char* x4110 = x4100;
    char* x4111 = strncpy(x5134, x4110, x4109);
    x3 += 1;
    char* x5152 = (char*)malloc(45 * sizeof(char));
    memset(x5152, 0, 45 * sizeof(char));
    /* VAR */ char* x4119 = x3;
    while(1) {
      
      char x4120 = *x3;
      /* VAR */ int ite15452 = 0;
      if((x4120!=('|'))) {
        char x17462 = *x3;
        ite15452 = (x17462!=('\n'));
      } else {
        
        ite15452 = 0;
      };
      int x14522 = ite15452;
      if (!(x14522)) break; 
      
      x3 += 1;
    };
    char* x4127 = x4119;
    int x4128 = x3 - x4127;
    char* x4129 = x4119;
    char* x4130 = strncpy(x5152, x4129, x4128);
    x3 += 1;
    struct LINEITEMRecord* x5688 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x5688, 0, 1 * sizeof(struct LINEITEMRecord));
    x5688->L_ORDERKEY = x3974; x5688->L_PARTKEY = x3979; x5688->L_SUPPKEY = x3984; x5688->L_LINENUMBER = x3989; x5688->L_QUANTITY = x3994; x5688->L_EXTENDEDPRICE = x3999; x5688->L_DISCOUNT = x4004; x5688->L_TAX = x4009; x5688->L_RETURNFLAG = x4017; x5688->L_LINESTATUS = x4022; x5688->L_SHIPDATE = (((x4024*(10000))+((x4029*(100))))+(x4034)); x5688->L_COMMITDATE = (((x4043*(10000))+((x4048*(100))))+(x4053)); x5688->L_RECEIPTDATE = (((x4062*(10000))+((x4067*(100))))+(x4072)); x5688->L_SHIPINSTRUCT = x5116; x5688->L_SHIPMODE = x5134; x5688->L_COMMENT = x5152;
    int x47 = x4;
    struct LINEITEMRecord x5172 = *x5688;
    *(x4990 + x47) = x5172;
    struct LINEITEMRecord* x5174 = &(x4990[x47]);
    x5688 = x5174;
    int x49 = x4;
    x4 = (x49+(1));
  };
  FILE* x4143 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x4144 = 0;
  int x4145 = x4144;
  int* x4146 = &x4145;
  int x4147 = fscanf(x4143, "%d", x4146);
  pclose(x4143);
  struct PARTRecord* x5185 = (struct PARTRecord*)malloc(x4145 * sizeof(struct PARTRecord));
  memset(x5185, 0, x4145 * sizeof(struct PARTRecord));
  int x4151 = O_RDONLY;
  int x4152 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x4151);
  /* VAR */ struct stat x4153 = x3958;
  struct stat x4154 = x4153;
  struct stat* x4155 = &x4154;
  int x4156 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x4155);
  int x4158 = PROT_READ;
  int x4159 = MAP_PRIVATE;
  char* x55 = mmap(NULL, (x4155->st_size), x4158, x4159, x4152, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    /* VAR */ int ite15502 = 0;
    if((x57<(x4145))) {
      char x17511 = *x55;
      ite15502 = (x17511!=('\0'));
    } else {
      
      ite15502 = 0;
    };
    int x14565 = ite15502;
    if (!(x14565)) break; 
    
    /* VAR */ int x4167 = 0;
    int x4168 = x4167;
    int* x4169 = &x4168;
    char* x4170 = strntoi_unchecked(x55, x4169);
    x55 = x4170;
    char* x5208 = (char*)malloc(56 * sizeof(char));
    memset(x5208, 0, 56 * sizeof(char));
    /* VAR */ char* x4173 = x55;
    while(1) {
      
      char x4174 = *x55;
      /* VAR */ int ite15521 = 0;
      if((x4174!=('|'))) {
        char x17529 = *x55;
        ite15521 = (x17529!=('\n'));
      } else {
        
        ite15521 = 0;
      };
      int x14577 = ite15521;
      if (!(x14577)) break; 
      
      x55 += 1;
    };
    char* x4181 = x4173;
    int x4182 = x55 - x4181;
    char* x4183 = x4173;
    char* x4184 = strncpy(x5208, x4183, x4182);
    x55 += 1;
    char* x5226 = (char*)malloc(26 * sizeof(char));
    memset(x5226, 0, 26 * sizeof(char));
    /* VAR */ char* x4192 = x55;
    while(1) {
      
      char x4193 = *x55;
      /* VAR */ int ite15544 = 0;
      if((x4193!=('|'))) {
        char x17551 = *x55;
        ite15544 = (x17551!=('\n'));
      } else {
        
        ite15544 = 0;
      };
      int x14593 = ite15544;
      if (!(x14593)) break; 
      
      x55 += 1;
    };
    char* x4200 = x4192;
    int x4201 = x55 - x4200;
    char* x4202 = x4192;
    char* x4203 = strncpy(x5226, x4202, x4201);
    x55 += 1;
    char* x5244 = (char*)malloc(11 * sizeof(char));
    memset(x5244, 0, 11 * sizeof(char));
    /* VAR */ char* x4211 = x55;
    while(1) {
      
      char x4212 = *x55;
      /* VAR */ int ite15567 = 0;
      if((x4212!=('|'))) {
        char x17573 = *x55;
        ite15567 = (x17573!=('\n'));
      } else {
        
        ite15567 = 0;
      };
      int x14609 = ite15567;
      if (!(x14609)) break; 
      
      x55 += 1;
    };
    char* x4219 = x4211;
    int x4220 = x55 - x4219;
    char* x4221 = x4211;
    char* x4222 = strncpy(x5244, x4221, x4220);
    x55 += 1;
    char* x5262 = (char*)malloc(26 * sizeof(char));
    memset(x5262, 0, 26 * sizeof(char));
    /* VAR */ char* x4230 = x55;
    while(1) {
      
      char x4231 = *x55;
      /* VAR */ int ite15590 = 0;
      if((x4231!=('|'))) {
        char x17595 = *x55;
        ite15590 = (x17595!=('\n'));
      } else {
        
        ite15590 = 0;
      };
      int x14625 = ite15590;
      if (!(x14625)) break; 
      
      x55 += 1;
    };
    char* x4238 = x4230;
    int x4239 = x55 - x4238;
    char* x4240 = x4230;
    char* x4241 = strncpy(x5262, x4240, x4239);
    x55 += 1;
    /* VAR */ int x4248 = 0;
    int x4249 = x4248;
    int* x4250 = &x4249;
    char* x4251 = strntoi_unchecked(x55, x4250);
    x55 = x4251;
    char* x5285 = (char*)malloc(11 * sizeof(char));
    memset(x5285, 0, 11 * sizeof(char));
    /* VAR */ char* x4254 = x55;
    while(1) {
      
      char x4255 = *x55;
      /* VAR */ int ite15618 = 0;
      if((x4255!=('|'))) {
        char x17622 = *x55;
        ite15618 = (x17622!=('\n'));
      } else {
        
        ite15618 = 0;
      };
      int x14646 = ite15618;
      if (!(x14646)) break; 
      
      x55 += 1;
    };
    char* x4262 = x4254;
    int x4263 = x55 - x4262;
    char* x4264 = x4254;
    char* x4265 = strncpy(x5285, x4264, x4263);
    x55 += 1;
    /* VAR */ double x4272 = 0.0;
    double x4273 = x4272;
    double* x4274 = &x4273;
    char* x4275 = strntod_unchecked(x55, x4274);
    x55 = x4275;
    char* x5308 = (char*)malloc(24 * sizeof(char));
    memset(x5308, 0, 24 * sizeof(char));
    /* VAR */ char* x4278 = x55;
    while(1) {
      
      char x4279 = *x55;
      /* VAR */ int ite15646 = 0;
      if((x4279!=('|'))) {
        char x17649 = *x55;
        ite15646 = (x17649!=('\n'));
      } else {
        
        ite15646 = 0;
      };
      int x14667 = ite15646;
      if (!(x14667)) break; 
      
      x55 += 1;
    };
    char* x4286 = x4278;
    int x4287 = x55 - x4286;
    char* x4288 = x4278;
    char* x4289 = strncpy(x5308, x4288, x4287);
    x55 += 1;
    struct PARTRecord* x5846 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x5846, 0, 1 * sizeof(struct PARTRecord));
    x5846->P_PARTKEY = x4168; x5846->P_NAME = x5208; x5846->P_MFGR = x5226; x5846->P_BRAND = x5244; x5846->P_TYPE = x5262; x5846->P_SIZE = x4249; x5846->P_CONTAINER = x5285; x5846->P_RETAILPRICE = x4273; x5846->P_COMMENT = x5308;
    int x111 = x56;
    struct PARTRecord x5328 = *x5846;
    *(x5185 + x111) = x5328;
    struct PARTRecord* x5330 = &(x5185[x111]);
    x5846 = x5330;
    int x113 = x56;
    x56 = (x113+(1));
  };
  int x118 = 0;
  for(; x118 < 1 ; x118 += 1) {
    
    double* x17970 = (double*)malloc(3 * sizeof(double));
    memset(x17970, 0, 3 * sizeof(double));
    struct AGGRecord_String* x17971 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x17971, 0, 1 * sizeof(struct AGGRecord_String));
    x17971->key = "Total"; x17971->aggs = x17970;
    GHashTable* x17983 = g_hash_table_new(((void***){x17974}), ((int*){x17977}));
    /* VAR */ int x17984 = 0;
    struct PARTRecord_LINEITEMRecord* x17985 = (struct PARTRecord_LINEITEMRecord*)malloc(48000000 * sizeof(struct PARTRecord_LINEITEMRecord));
    memset(x17985, 0, 48000000 * sizeof(struct PARTRecord_LINEITEMRecord));
    /* VAR */ int x17986 = 0;
    while(1) {
      
      int x3401 = x17986;
      if (!((x3401<(48000000)))) break; 
      
      int x3403 = x17986;
      struct PARTRecord_LINEITEMRecord* x5872 = (struct PARTRecord_LINEITEMRecord*)malloc(1 * sizeof(struct PARTRecord_LINEITEMRecord));
      memset(x5872, 0, 1 * sizeof(struct PARTRecord_LINEITEMRecord));
      x5872->P_PARTKEY = 0; x5872->P_NAME = ""; x5872->P_MFGR = ""; x5872->P_BRAND = ""; x5872->P_TYPE = ""; x5872->P_SIZE = 0; x5872->P_CONTAINER = ""; x5872->P_RETAILPRICE = 0.0; x5872->P_COMMENT = ""; x5872->L_ORDERKEY = 0; x5872->L_PARTKEY = 0; x5872->L_SUPPKEY = 0; x5872->L_LINENUMBER = 0; x5872->L_QUANTITY = 0.0; x5872->L_EXTENDEDPRICE = 0.0; x5872->L_DISCOUNT = 0.0; x5872->L_TAX = 0.0; x5872->L_RETURNFLAG = '\0'; x5872->L_LINESTATUS = '\0'; x5872->L_SHIPDATE = 0; x5872->L_COMMITDATE = 0; x5872->L_RECEIPTDATE = 0; x5872->L_SHIPINSTRUCT = ""; x5872->L_SHIPMODE = ""; x5872->L_COMMENT = "";
      struct PARTRecord_LINEITEMRecord x5349 = *x5872;
      *(x17985 + x3403) = x5349;
      struct PARTRecord_LINEITEMRecord* x5351 = &(x17985[x3403]);
      x5872 = x5351;
      int x3406 = x17986;
      x17986 = (x3406+(1));
    };
    /* VAR */ struct timeval x18001 = x3544;
    struct timeval x18002 = x18001;
    /* VAR */ struct timeval x18003 = x3544;
    struct timeval x18004 = x18003;
    /* VAR */ struct timeval x18005 = x3544;
    struct timeval x18006 = x18005;
    struct timeval* x18007 = &x18004;
    gettimeofday(x18007, NULL);
    /* VAR */ int x18009 = 0;
    /* VAR */ int x18010 = 0;
    /* VAR */ int x18011 = 0;
    /* VAR */ int x18012 = 0;
    while(1) {
      
      int x18014 = x18009;
      if (!((x18014<(x4145)))) break; 
      
      int x1431 = x18009;
      struct PARTRecord* x191 = &(x5185[x1431]);
      void* x6436 = (void*){(x191->P_PARTKEY)};
      void* x6438 = g_hash_table_lookup(x17983, x6436);
      GList** x6439 = (GList**){x6438};
      GList** x6440 = NULL;
      /* VAR */ GList** ite15032 = 0;
      if((x6439==(x6440))) {
        GList** x15033 = malloc(8);
        GList* x15034 = NULL;
        pointer_assign(x15033, x15034);
        ite15032 = x15033;
      } else {
        
        ite15032 = x6439;
      };
      GList** x6445 = ite15032;
      GList* x6446 = *(x6445);
      GList* x6447 = g_list_prepend(x6446, ((void*){x191}));
      pointer_assign(x6445, x6447);
      g_hash_table_insert(x17983, x6436, ((void*){x6445}));
      int x1436 = x18009;
      x18009 = (x1436+(1));
    };
    while(1) {
      
      int x18043 = x18010;
      if (!((x18043<(x3950)))) break; 
      
      int x1445 = x18010;
      struct LINEITEMRecord* x206 = &(x4990[x1445]);
      int x208 = x206->L_SHIPDATE;
      /* VAR */ int ite16055 = 0;
      if((x208>=(19940301))) {
        ite16055 = (x208<(19940401));
      } else {
        
        ite16055 = 0;
      };
      int x15055 = ite16055;
      if(x15055) {
        int x212 = x206->L_PARTKEY;
        void* x6467 = g_hash_table_lookup(x17983, ((void*){x212}));
        GList** x6468 = (GList**){x6467};
        if((x6468!=(NULL))) {
          GList* x7652 = *(x6468);
          /* VAR */ GList* x7653 = x7652;
          while(1) {
            
            GList* x7654 = x7653;
            GList* x7655 = NULL;
            if (!((x7654!=(x7655)))) break; 
            
            GList* x7657 = x7653;
            void* x7658 = g_list_nth_data(x7657, 0);
            struct PARTRecord* x7659 = (struct PARTRecord*){x7658};
            GList* x7660 = x7653;
            GList* x7661 = g_list_next(x7660);
            x7653 = x7661;
            int x7663 = x7659->P_PARTKEY;
            if((x7663==(x212))) {
              int x3471 = x17984;
              struct PARTRecord_LINEITEMRecord* x3472 = &(x17985[x3471]);
              x3472->P_PARTKEY = x7663;
              x3472->P_NAME = (x7659->P_NAME);
              x3472->P_MFGR = (x7659->P_MFGR);
              x3472->P_BRAND = (x7659->P_BRAND);
              x3472->P_TYPE = (x7659->P_TYPE);
              x3472->P_SIZE = (x7659->P_SIZE);
              x3472->P_CONTAINER = (x7659->P_CONTAINER);
              x3472->P_RETAILPRICE = (x7659->P_RETAILPRICE);
              x3472->P_COMMENT = (x7659->P_COMMENT);
              x3472->L_ORDERKEY = (x206->L_ORDERKEY);
              x3472->L_PARTKEY = x212;
              x3472->L_SUPPKEY = (x206->L_SUPPKEY);
              x3472->L_LINENUMBER = (x206->L_LINENUMBER);
              x3472->L_QUANTITY = (x206->L_QUANTITY);
              x3472->L_EXTENDEDPRICE = (x206->L_EXTENDEDPRICE);
              x3472->L_DISCOUNT = (x206->L_DISCOUNT);
              x3472->L_TAX = (x206->L_TAX);
              x3472->L_RETURNFLAG = (x206->L_RETURNFLAG);
              x3472->L_LINESTATUS = (x206->L_LINESTATUS);
              x3472->L_SHIPDATE = x208;
              x3472->L_COMMITDATE = (x206->L_COMMITDATE);
              x3472->L_RECEIPTDATE = (x206->L_RECEIPTDATE);
              x3472->L_SHIPINSTRUCT = (x206->L_SHIPINSTRUCT);
              x3472->L_SHIPMODE = (x206->L_SHIPMODE);
              x3472->L_COMMENT = (x206->L_COMMENT);
              int x3498 = x17984;
              x17984 = (x3498+(1));
              double* x279 = x17971->aggs;
              double x293 = x279[0];
              int x12149 = strlen("PROMO");
              int x12150 = strncmp((x3472->P_TYPE), "PROMO", x12149);
              /* VAR */ double ite15219 = 0;
              if((x12150==(0))) {
                ite15219 = (x293+(((x3472->L_EXTENDEDPRICE)*((1.0-((x3472->L_DISCOUNT)))))));
              } else {
                
                ite15219 = x293;
              };
              double x301 = ite15219;
              *x279 = x301;
              double x309 = x279[1];
              *(x279 + 1) = (x309+(((x3472->L_EXTENDEDPRICE)*((1.0-((x3472->L_DISCOUNT)))))));
            };
          };
        };
      };
      int x1606 = x18010;
      x18010 = (x1606+(1));
    };
    double* x18240 = x17971->aggs;
    double x18241 = x18240[0];
    double x18243 = x18240[1];
    *(x18240 + 2) = ((x18241*(100.0))/(x18243));
    if(0) {
      x18011 = 1;
    } else {
      
      double x349 = x18240[2];
      printf("%.4f\n", x349);
      int x1632 = x18012;
      x18012 = (x1632+(1));
    };
    int x18253 = x18012;
    printf("(%d rows)\n", x18253);
    struct timeval* x18255 = &x18006;
    gettimeofday(x18255, NULL);
    struct timeval* x18257 = &x18002;
    struct timeval* x18258 = &x18006;
    struct timeval* x18259 = &x18004;
    long x18260 = timeval_subtract(x18257, x18258, x18259);
    printf("Generated code run in %ld milliseconds.\n", x18260);
  };
}
/* ----------- FUNCTIONS ----------- */
int x17974(void* x6390) {
  int x6391 = g_direct_hash(x6390);
  return x6391; 
}

int x17977(void* x6393, void* x6394) {
  int x6395 = g_direct_equal(x6393, x6394);
  return x6395; 
}
