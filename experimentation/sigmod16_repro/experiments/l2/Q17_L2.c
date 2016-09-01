#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_String;
  struct LINEITEMRecord;
  struct WindowRecord_Int_Double;
  struct LINEITEMRecord_PARTRecord;
  struct PARTRecord;
  
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
  
  struct WindowRecord_Int_Double {
  int key;
  double wnd;
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
  
  


int x22795(void* x6512);

int x22798(void* x6515, void* x6516);

int x22805(void* x6522);

int x22808(void* x6525, void* x6526);
/* GLOBAL VARS */

struct timeval x3485;
int main(int argc, char** argv) {
  FILE* x3938 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x3939 = 0;
  int x3940 = x3939;
  int* x3941 = &x3940;
  int x3942 = fscanf(x3938, "%d", x3941);
  pclose(x3938);
  struct LINEITEMRecord* x5042 = (struct LINEITEMRecord*)malloc(x3940 * sizeof(struct LINEITEMRecord));
  memset(x5042, 0, x3940 * sizeof(struct LINEITEMRecord));
  int x3946 = O_RDONLY;
  int x3947 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x3946);
  struct stat x3948 = (struct stat){0};
  /* VAR */ struct stat x3949 = x3948;
  struct stat x3950 = x3949;
  struct stat* x3951 = &x3950;
  int x3952 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x3951);
  int x3954 = PROT_READ;
  int x3955 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x3951->st_size), x3954, x3955, x3947, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite18656 = 0;
    if((x5<(x3940))) {
      char x21829 = *x3;
      ite18656 = (x21829!=('\0'));
    } else {
      
      ite18656 = 0;
    };
    int x17171 = ite18656;
    if (!(x17171)) break; 
    
    /* VAR */ int x3963 = 0;
    int x3964 = x3963;
    int* x3965 = &x3964;
    char* x3966 = strntoi_unchecked(x3, x3965);
    x3 = x3966;
    /* VAR */ int x3968 = 0;
    int x3969 = x3968;
    int* x3970 = &x3969;
    char* x3971 = strntoi_unchecked(x3, x3970);
    x3 = x3971;
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
    /* VAR */ double x3983 = 0.0;
    double x3984 = x3983;
    double* x3985 = &x3984;
    char* x3986 = strntod_unchecked(x3, x3985);
    x3 = x3986;
    /* VAR */ double x3988 = 0.0;
    double x3989 = x3988;
    double* x3990 = &x3989;
    char* x3991 = strntod_unchecked(x3, x3990);
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
    char x4003 = *x3;
    /* VAR */ char x4004 = x4003;
    x3 += 1;
    x3 += 1;
    char x4007 = x4004;
    char x4008 = *x3;
    /* VAR */ char x4009 = x4008;
    x3 += 1;
    x3 += 1;
    char x4012 = x4009;
    /* VAR */ int x4013 = 0;
    int x4014 = x4013;
    int* x4015 = &x4014;
    char* x4016 = strntoi_unchecked(x3, x4015);
    x3 = x4016;
    /* VAR */ int x4018 = 0;
    int x4019 = x4018;
    int* x4020 = &x4019;
    char* x4021 = strntoi_unchecked(x3, x4020);
    x3 = x4021;
    /* VAR */ int x4023 = 0;
    int x4024 = x4023;
    int* x4025 = &x4024;
    char* x4026 = strntoi_unchecked(x3, x4025);
    x3 = x4026;
    /* VAR */ int x4032 = 0;
    int x4033 = x4032;
    int* x4034 = &x4033;
    char* x4035 = strntoi_unchecked(x3, x4034);
    x3 = x4035;
    /* VAR */ int x4037 = 0;
    int x4038 = x4037;
    int* x4039 = &x4038;
    char* x4040 = strntoi_unchecked(x3, x4039);
    x3 = x4040;
    /* VAR */ int x4042 = 0;
    int x4043 = x4042;
    int* x4044 = &x4043;
    char* x4045 = strntoi_unchecked(x3, x4044);
    x3 = x4045;
    /* VAR */ int x4051 = 0;
    int x4052 = x4051;
    int* x4053 = &x4052;
    char* x4054 = strntoi_unchecked(x3, x4053);
    x3 = x4054;
    /* VAR */ int x4056 = 0;
    int x4057 = x4056;
    int* x4058 = &x4057;
    char* x4059 = strntoi_unchecked(x3, x4058);
    x3 = x4059;
    /* VAR */ int x4061 = 0;
    int x4062 = x4061;
    int* x4063 = &x4062;
    char* x4064 = strntoi_unchecked(x3, x4063);
    x3 = x4064;
    char* x5168 = (char*)malloc(26 * sizeof(char));
    memset(x5168, 0, 26 * sizeof(char));
    /* VAR */ char* x4071 = x3;
    while(1) {
      
      char x4072 = *x3;
      /* VAR */ int ite18777 = 0;
      if((x4072!=('|'))) {
        char x21949 = *x3;
        ite18777 = (x21949!=('\n'));
      } else {
        
        ite18777 = 0;
      };
      int x17285 = ite18777;
      if (!(x17285)) break; 
      
      x3 += 1;
    };
    char* x4079 = x4071;
    int x4080 = x3 - x4079;
    char* x4081 = x4071;
    char* x4082 = strncpy(x5168, x4081, x4080);
    x3 += 1;
    char* x5186 = (char*)malloc(11 * sizeof(char));
    memset(x5186, 0, 11 * sizeof(char));
    /* VAR */ char* x4090 = x3;
    while(1) {
      
      char x4091 = *x3;
      /* VAR */ int ite18800 = 0;
      if((x4091!=('|'))) {
        char x21971 = *x3;
        ite18800 = (x21971!=('\n'));
      } else {
        
        ite18800 = 0;
      };
      int x17301 = ite18800;
      if (!(x17301)) break; 
      
      x3 += 1;
    };
    char* x4098 = x4090;
    int x4099 = x3 - x4098;
    char* x4100 = x4090;
    char* x4101 = strncpy(x5186, x4100, x4099);
    x3 += 1;
    char* x5204 = (char*)malloc(45 * sizeof(char));
    memset(x5204, 0, 45 * sizeof(char));
    /* VAR */ char* x4109 = x3;
    while(1) {
      
      char x4110 = *x3;
      /* VAR */ int ite18823 = 0;
      if((x4110!=('|'))) {
        char x21993 = *x3;
        ite18823 = (x21993!=('\n'));
      } else {
        
        ite18823 = 0;
      };
      int x17317 = ite18823;
      if (!(x17317)) break; 
      
      x3 += 1;
    };
    char* x4117 = x4109;
    int x4118 = x3 - x4117;
    char* x4119 = x4109;
    char* x4120 = strncpy(x5204, x4119, x4118);
    x3 += 1;
    struct LINEITEMRecord* x5774 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x5774, 0, 1 * sizeof(struct LINEITEMRecord));
    x5774->L_ORDERKEY = x3964; x5774->L_PARTKEY = x3969; x5774->L_SUPPKEY = x3974; x5774->L_LINENUMBER = x3979; x5774->L_QUANTITY = x3984; x5774->L_EXTENDEDPRICE = x3989; x5774->L_DISCOUNT = x3994; x5774->L_TAX = x3999; x5774->L_RETURNFLAG = x4007; x5774->L_LINESTATUS = x4012; x5774->L_SHIPDATE = (((x4014*(10000))+((x4019*(100))))+(x4024)); x5774->L_COMMITDATE = (((x4033*(10000))+((x4038*(100))))+(x4043)); x5774->L_RECEIPTDATE = (((x4052*(10000))+((x4057*(100))))+(x4062)); x5774->L_SHIPINSTRUCT = x5168; x5774->L_SHIPMODE = x5186; x5774->L_COMMENT = x5204;
    int x47 = x4;
    struct LINEITEMRecord x5224 = *x5774;
    *(x5042 + x47) = x5224;
    struct LINEITEMRecord* x5226 = &(x5042[x47]);
    x5774 = x5226;
    int x49 = x4;
    x4 = (x49+(1));
  };
  FILE* x4133 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x4134 = 0;
  int x4135 = x4134;
  int* x4136 = &x4135;
  int x4137 = fscanf(x4133, "%d", x4136);
  pclose(x4133);
  struct PARTRecord* x5237 = (struct PARTRecord*)malloc(x4135 * sizeof(struct PARTRecord));
  memset(x5237, 0, x4135 * sizeof(struct PARTRecord));
  int x4141 = O_RDONLY;
  int x4142 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x4141);
  /* VAR */ struct stat x4143 = x3948;
  struct stat x4144 = x4143;
  struct stat* x4145 = &x4144;
  int x4146 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x4145);
  int x4148 = PROT_READ;
  int x4149 = MAP_PRIVATE;
  char* x55 = mmap(NULL, (x4145->st_size), x4148, x4149, x4142, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    /* VAR */ int ite18873 = 0;
    if((x57<(x4135))) {
      char x22042 = *x55;
      ite18873 = (x22042!=('\0'));
    } else {
      
      ite18873 = 0;
    };
    int x17360 = ite18873;
    if (!(x17360)) break; 
    
    /* VAR */ int x4157 = 0;
    int x4158 = x4157;
    int* x4159 = &x4158;
    char* x4160 = strntoi_unchecked(x55, x4159);
    x55 = x4160;
    char* x5260 = (char*)malloc(56 * sizeof(char));
    memset(x5260, 0, 56 * sizeof(char));
    /* VAR */ char* x4163 = x55;
    while(1) {
      
      char x4164 = *x55;
      /* VAR */ int ite18892 = 0;
      if((x4164!=('|'))) {
        char x22060 = *x55;
        ite18892 = (x22060!=('\n'));
      } else {
        
        ite18892 = 0;
      };
      int x17372 = ite18892;
      if (!(x17372)) break; 
      
      x55 += 1;
    };
    char* x4171 = x4163;
    int x4172 = x55 - x4171;
    char* x4173 = x4163;
    char* x4174 = strncpy(x5260, x4173, x4172);
    x55 += 1;
    char* x5278 = (char*)malloc(26 * sizeof(char));
    memset(x5278, 0, 26 * sizeof(char));
    /* VAR */ char* x4182 = x55;
    while(1) {
      
      char x4183 = *x55;
      /* VAR */ int ite18915 = 0;
      if((x4183!=('|'))) {
        char x22082 = *x55;
        ite18915 = (x22082!=('\n'));
      } else {
        
        ite18915 = 0;
      };
      int x17388 = ite18915;
      if (!(x17388)) break; 
      
      x55 += 1;
    };
    char* x4190 = x4182;
    int x4191 = x55 - x4190;
    char* x4192 = x4182;
    char* x4193 = strncpy(x5278, x4192, x4191);
    x55 += 1;
    char* x5296 = (char*)malloc(11 * sizeof(char));
    memset(x5296, 0, 11 * sizeof(char));
    /* VAR */ char* x4201 = x55;
    while(1) {
      
      char x4202 = *x55;
      /* VAR */ int ite18938 = 0;
      if((x4202!=('|'))) {
        char x22104 = *x55;
        ite18938 = (x22104!=('\n'));
      } else {
        
        ite18938 = 0;
      };
      int x17404 = ite18938;
      if (!(x17404)) break; 
      
      x55 += 1;
    };
    char* x4209 = x4201;
    int x4210 = x55 - x4209;
    char* x4211 = x4201;
    char* x4212 = strncpy(x5296, x4211, x4210);
    x55 += 1;
    char* x5314 = (char*)malloc(26 * sizeof(char));
    memset(x5314, 0, 26 * sizeof(char));
    /* VAR */ char* x4220 = x55;
    while(1) {
      
      char x4221 = *x55;
      /* VAR */ int ite18961 = 0;
      if((x4221!=('|'))) {
        char x22126 = *x55;
        ite18961 = (x22126!=('\n'));
      } else {
        
        ite18961 = 0;
      };
      int x17420 = ite18961;
      if (!(x17420)) break; 
      
      x55 += 1;
    };
    char* x4228 = x4220;
    int x4229 = x55 - x4228;
    char* x4230 = x4220;
    char* x4231 = strncpy(x5314, x4230, x4229);
    x55 += 1;
    /* VAR */ int x4238 = 0;
    int x4239 = x4238;
    int* x4240 = &x4239;
    char* x4241 = strntoi_unchecked(x55, x4240);
    x55 = x4241;
    char* x5337 = (char*)malloc(11 * sizeof(char));
    memset(x5337, 0, 11 * sizeof(char));
    /* VAR */ char* x4244 = x55;
    while(1) {
      
      char x4245 = *x55;
      /* VAR */ int ite18989 = 0;
      if((x4245!=('|'))) {
        char x22153 = *x55;
        ite18989 = (x22153!=('\n'));
      } else {
        
        ite18989 = 0;
      };
      int x17441 = ite18989;
      if (!(x17441)) break; 
      
      x55 += 1;
    };
    char* x4252 = x4244;
    int x4253 = x55 - x4252;
    char* x4254 = x4244;
    char* x4255 = strncpy(x5337, x4254, x4253);
    x55 += 1;
    /* VAR */ double x4262 = 0.0;
    double x4263 = x4262;
    double* x4264 = &x4263;
    char* x4265 = strntod_unchecked(x55, x4264);
    x55 = x4265;
    char* x5360 = (char*)malloc(24 * sizeof(char));
    memset(x5360, 0, 24 * sizeof(char));
    /* VAR */ char* x4268 = x55;
    while(1) {
      
      char x4269 = *x55;
      /* VAR */ int ite19017 = 0;
      if((x4269!=('|'))) {
        char x22180 = *x55;
        ite19017 = (x22180!=('\n'));
      } else {
        
        ite19017 = 0;
      };
      int x17462 = ite19017;
      if (!(x17462)) break; 
      
      x55 += 1;
    };
    char* x4276 = x4268;
    int x4277 = x55 - x4276;
    char* x4278 = x4268;
    char* x4279 = strncpy(x5360, x4278, x4277);
    x55 += 1;
    struct PARTRecord* x5932 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x5932, 0, 1 * sizeof(struct PARTRecord));
    x5932->P_PARTKEY = x4158; x5932->P_NAME = x5260; x5932->P_MFGR = x5278; x5932->P_BRAND = x5296; x5932->P_TYPE = x5314; x5932->P_SIZE = x4239; x5932->P_CONTAINER = x5337; x5932->P_RETAILPRICE = x4263; x5932->P_COMMENT = x5360;
    int x111 = x56;
    struct PARTRecord x5380 = *x5932;
    *(x5237 + x111) = x5380;
    struct PARTRecord* x5382 = &(x5237[x111]);
    x5932 = x5382;
    int x113 = x56;
    x56 = (x113+(1));
  };
  int x118 = 0;
  for(; x118 < 1 ; x118 += 1) {
    
    double* x22791 = (double*)malloc(1 * sizeof(double));
    memset(x22791, 0, 1 * sizeof(double));
    struct AGGRecord_String* x22792 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x22792, 0, 1 * sizeof(struct AGGRecord_String));
    x22792->key = "Total"; x22792->aggs = x22791;
    GHashTable* x22804 = g_hash_table_new(((void***){x22795}), ((int*){x22798}));
    GHashTable* x22814 = g_hash_table_new(((void***){x22805}), ((int*){x22808}));
    /* VAR */ int x22815 = 0;
    struct LINEITEMRecord_PARTRecord* x22816 = (struct LINEITEMRecord_PARTRecord*)malloc(48000000 * sizeof(struct LINEITEMRecord_PARTRecord));
    memset(x22816, 0, 48000000 * sizeof(struct LINEITEMRecord_PARTRecord));
    /* VAR */ int x22817 = 0;
    while(1) {
      
      int x3313 = x22817;
      if (!((x3313<(48000000)))) break; 
      
      int x3315 = x22817;
      struct LINEITEMRecord_PARTRecord* x5959 = (struct LINEITEMRecord_PARTRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord));
      memset(x5959, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord));
      x5959->L_ORDERKEY = 0; x5959->L_PARTKEY = 0; x5959->L_SUPPKEY = 0; x5959->L_LINENUMBER = 0; x5959->L_QUANTITY = 0.0; x5959->L_EXTENDEDPRICE = 0.0; x5959->L_DISCOUNT = 0.0; x5959->L_TAX = 0.0; x5959->L_RETURNFLAG = '\0'; x5959->L_LINESTATUS = '\0'; x5959->L_SHIPDATE = 0; x5959->L_COMMITDATE = 0; x5959->L_RECEIPTDATE = 0; x5959->L_SHIPINSTRUCT = ""; x5959->L_SHIPMODE = ""; x5959->L_COMMENT = ""; x5959->P_PARTKEY = 0; x5959->P_NAME = ""; x5959->P_MFGR = ""; x5959->P_BRAND = ""; x5959->P_TYPE = ""; x5959->P_SIZE = 0; x5959->P_CONTAINER = ""; x5959->P_RETAILPRICE = 0.0; x5959->P_COMMENT = "";
      struct LINEITEMRecord_PARTRecord x5402 = *x5959;
      *(x22816 + x3315) = x5402;
      struct LINEITEMRecord_PARTRecord* x5404 = &(x22816[x3315]);
      x5959 = x5404;
      int x3318 = x22817;
      x22817 = (x3318+(1));
    };
    /* VAR */ int x22832 = 0;
    struct WindowRecord_Int_Double* x22833 = (struct WindowRecord_Int_Double*)malloc(1600000 * sizeof(struct WindowRecord_Int_Double));
    memset(x22833, 0, 1600000 * sizeof(struct WindowRecord_Int_Double));
    /* VAR */ int x22834 = 0;
    while(1) {
      
      int x3325 = x22834;
      if (!((x3325<(1600000)))) break; 
      
      int x3327 = x22834;
      struct WindowRecord_Int_Double* x5976 = (struct WindowRecord_Int_Double*)malloc(1 * sizeof(struct WindowRecord_Int_Double));
      memset(x5976, 0, 1 * sizeof(struct WindowRecord_Int_Double));
      x5976->key = 0; x5976->wnd = 0.0;
      struct WindowRecord_Int_Double x5417 = *x5976;
      *(x22833 + x3327) = x5417;
      struct WindowRecord_Int_Double* x5419 = &(x22833[x3327]);
      x5976 = x5419;
      int x3330 = x22834;
      x22834 = (x3330+(1));
    };
    /* VAR */ struct timeval x22849 = x3485;
    struct timeval x22850 = x22849;
    /* VAR */ struct timeval x22851 = x3485;
    struct timeval x22852 = x22851;
    /* VAR */ struct timeval x22853 = x3485;
    struct timeval x22854 = x22853;
    struct timeval* x22855 = &x22852;
    gettimeofday(x22855, NULL);
    /* VAR */ int x22857 = 0;
    /* VAR */ int x22858 = 0;
    /* VAR */ int x22859 = 0;
    /* VAR */ int x22860 = 0;
    while(1) {
      
      int x22862 = x22857;
      if (!((x22862<(x3940)))) break; 
      
      int x1321 = x22857;
      struct LINEITEMRecord* x192 = &(x5042[x1321]);
      void* x6585 = (void*){(x192->L_PARTKEY)};
      void* x6587 = g_hash_table_lookup(x22814, x6585);
      GList** x6588 = (GList**){x6587};
      GList** x6589 = NULL;
      /* VAR */ GList** ite18142 = 0;
      if((x6588==(x6589))) {
        GList** x18143 = malloc(8);
        GList* x18144 = NULL;
        pointer_assign(x18143, x18144);
        ite18142 = x18143;
      } else {
        
        ite18142 = x6588;
      };
      GList** x6594 = ite18142;
      GList* x6595 = *(x6594);
      GList* x6596 = g_list_prepend(x6595, ((void*){x192}));
      pointer_assign(x6594, x6596);
      g_hash_table_insert(x22814, x6585, ((void*){x6594}));
      int x1326 = x22857;
      x22857 = (x1326+(1));
    };
    while(1) {
      
      int x22891 = x22858;
      if (!((x22891<(x4135)))) break; 
      
      int x1335 = x22858;
      struct PARTRecord* x207 = &(x5237[x1335]);
      char* x209 = x207->P_CONTAINER;
      int x13658 = strcmp(x209, "MED BAG");
      /* VAR */ int ite19744 = 0;
      if((x13658==(0))) {
        int x22901 = strcmp((x207->P_BRAND), "Brand#15");
        ite19744 = (x22901==(0));
      } else {
        
        ite19744 = 0;
      };
      int x18166 = ite19744;
      if(x18166) {
        int x214 = x207->P_PARTKEY;
        void* x6617 = g_hash_table_lookup(x22814, ((void*){x214}));
        GList** x6618 = (GList**){x6617};
        if((x6618!=(NULL))) {
          GList* x8018 = *(x6618);
          /* VAR */ GList* x8019 = x8018;
          while(1) {
            
            GList* x8020 = x8019;
            GList* x8021 = NULL;
            if (!((x8020!=(x8021)))) break; 
            
            GList* x8023 = x8019;
            void* x8024 = g_list_nth_data(x8023, 0);
            struct LINEITEMRecord* x8025 = (struct LINEITEMRecord*){x8024};
            GList* x8026 = x8019;
            GList* x8027 = g_list_next(x8026);
            x8019 = x8027;
            int x8029 = x8025->L_PARTKEY;
            if((x8029==(x214))) {
              int x3395 = x22815;
              struct LINEITEMRecord_PARTRecord* x3396 = &(x22816[x3395]);
              x3396->L_ORDERKEY = (x8025->L_ORDERKEY);
              x3396->L_PARTKEY = x8029;
              x3396->L_SUPPKEY = (x8025->L_SUPPKEY);
              x3396->L_LINENUMBER = (x8025->L_LINENUMBER);
              x3396->L_QUANTITY = (x8025->L_QUANTITY);
              x3396->L_EXTENDEDPRICE = (x8025->L_EXTENDEDPRICE);
              x3396->L_DISCOUNT = (x8025->L_DISCOUNT);
              x3396->L_TAX = (x8025->L_TAX);
              x3396->L_RETURNFLAG = (x8025->L_RETURNFLAG);
              x3396->L_LINESTATUS = (x8025->L_LINESTATUS);
              x3396->L_SHIPDATE = (x8025->L_SHIPDATE);
              x3396->L_COMMITDATE = (x8025->L_COMMITDATE);
              x3396->L_RECEIPTDATE = (x8025->L_RECEIPTDATE);
              x3396->L_SHIPINSTRUCT = (x8025->L_SHIPINSTRUCT);
              x3396->L_SHIPMODE = (x8025->L_SHIPMODE);
              x3396->L_COMMENT = (x8025->L_COMMENT);
              x3396->P_PARTKEY = x214;
              x3396->P_NAME = (x207->P_NAME);
              x3396->P_MFGR = (x207->P_MFGR);
              x3396->P_BRAND = (x207->P_BRAND);
              x3396->P_TYPE = (x207->P_TYPE);
              x3396->P_SIZE = (x207->P_SIZE);
              x3396->P_CONTAINER = x209;
              x3396->P_RETAILPRICE = (x207->P_RETAILPRICE);
              x3396->P_COMMENT = (x207->P_COMMENT);
              int x3422 = x22815;
              x22815 = (x3422+(1));
              void* x6681 = (void*){(x3396->L_PARTKEY)};
              void* x6683 = g_hash_table_lookup(x22804, x6681);
              GList** x6684 = (GList**){x6683};
              GList** x6685 = NULL;
              /* VAR */ GList** ite18327 = 0;
              if((x6684==(x6685))) {
                GList** x18328 = malloc(8);
                GList* x18329 = NULL;
                pointer_assign(x18328, x18329);
                ite18327 = x18328;
              } else {
                
                ite18327 = x6684;
              };
              GList** x6690 = ite18327;
              GList* x6691 = *(x6690);
              GList* x6692 = g_list_prepend(x6691, ((void*){x3396}));
              pointer_assign(x6690, x6692);
              g_hash_table_insert(x22804, x6681, ((void*){x6690}));
            };
          };
        };
      };
      int x1413 = x22858;
      x22858 = (x1413+(1));
    };
    GList* x23170 = g_hash_table_get_keys(x22804);
    /* VAR */ GList* x23171 = x23170;
    int x23172 = g_hash_table_size(x22804);
    int x15614 = 0;
    for(; x15614 < x23172 ; x15614 += 1) {
      
      GList* x15615 = x23171;
      void* x15616 = g_list_nth_data(x15615, 0);
      GList* x15617 = x23171;
      GList* x15618 = g_list_next(x15617);
      x23171 = x15618;
      void* x15620 = g_hash_table_lookup(x22804, x15616);
      GList** x15621 = (GList**){x15620};
      /* VAR */ double x15627 = 0.0;
      GList* x15628 = *(x15621);
      /* VAR */ GList* x15629 = x15628;
      while(1) {
        
        GList* x8205 = x15629;
        GList* x8206 = NULL;
        if (!((x8205!=(x8206)))) break; 
        
        GList* x8208 = x15629;
        void* x8209 = g_list_nth_data(x8208, 0);
        double x8211 = x15627;
        x15627 = (x8211+((((struct LINEITEMRecord_PARTRecord*){x8209})->L_QUANTITY)));
        GList* x8215 = x15629;
        GList* x8216 = g_list_next(x8215);
        x15629 = x8216;
      };
      double x15644 = x15627;
      GList* x15645 = *(x15621);
      int x15646 = g_list_length(x15645);
      /* VAR */ double x15658 = 0.0;
      GList* x15659 = *(x15621);
      /* VAR */ GList* x15660 = x15659;
      while(1) {
        
        GList* x8236 = x15660;
        GList* x8237 = NULL;
        if (!((x8236!=(x8237)))) break; 
        
        GList* x8239 = x15660;
        void* x8240 = g_list_nth_data(x8239, 0);
        struct LINEITEMRecord_PARTRecord* x8241 = (struct LINEITEMRecord_PARTRecord*){x8240};
        double x8242 = x15658;
        /* VAR */ double ite18587 = 0;
        if(((x8241->L_QUANTITY)<((0.2*((x15644/(x15646))))))) {
          ite18587 = (x8242+((x8241->L_EXTENDEDPRICE)));
        } else {
          
          ite18587 = x8242;
        };
        double x8245 = ite18587;
        x15658 = x8245;
        GList* x8249 = x15660;
        GList* x8250 = g_list_next(x8249);
        x15660 = x8250;
      };
      double x15678 = x15658;
      GList* x15680 = *(x15621);
      void* x15681 = g_list_nth_data(x15680, 0);
      int x15684 = x22832;
      struct WindowRecord_Int_Double* x15685 = &(x22833[x15684]);
      x15685->key = (((struct LINEITEMRecord_PARTRecord*){x15681})->L_PARTKEY);
      x15685->wnd = (x15678/(7.0));
      int x15688 = x22832;
      x22832 = (x15688+(1));
      double* x15691 = x22792->aggs;
      double x15692 = x15691[0];
      *x15691 = (x15692+((x15685->wnd)));
    };
    if(0) {
      x22859 = 1;
    } else {
      
      double x311 = ((double*) { x22792->aggs })[0];
      printf("%.6f\n", x311);
      int x1481 = x22860;
      x22860 = (x1481+(1));
    };
    int x23364 = x22860;
    printf("(%d rows)\n", x23364);
    struct timeval* x23366 = &x22854;
    gettimeofday(x23366, NULL);
    struct timeval* x23368 = &x22850;
    struct timeval* x23369 = &x22854;
    struct timeval* x23370 = &x22852;
    long x23371 = timeval_subtract(x23368, x23369, x23370);
    printf("Generated code run in %ld milliseconds.\n", x23371);
  };
}
/* ----------- FUNCTIONS ----------- */
int x22795(void* x6512) {
  int x6513 = g_direct_hash(x6512);
  return x6513; 
}

int x22798(void* x6515, void* x6516) {
  int x6517 = g_direct_equal(x6515, x6516);
  return x6517; 
}

int x22805(void* x6522) {
  int x6523 = g_direct_hash(x6522);
  return x6523; 
}

int x22808(void* x6525, void* x6526) {
  int x6527 = g_direct_equal(x6525, x6526);
  return x6527; 
}
