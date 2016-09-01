#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct Q16GRPRecord2;
  struct AGGRecord_Q16GRPRecord2;
  struct Q16GRPRecord1;
  struct PARTRecord;
  struct PARTRecord_PARTSUPPRecord;
  struct SUPPLIERRecord;
  struct AGGRecord_Q16GRPRecord1;
  struct PARTSUPPRecord;
  
  struct Q16GRPRecord2 {
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  };
  
  struct AGGRecord_Q16GRPRecord2 {
  struct Q16GRPRecord2* key;
  double* aggs;
  };
  
  struct Q16GRPRecord1 {
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  int PS_SUPPKEY;
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
  
  struct PARTRecord_PARTSUPPRecord {
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
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
  
  struct AGGRecord_Q16GRPRecord1 {
  struct Q16GRPRecord1* key;
  double* aggs;
  };
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
  };
  
  


int x31970(struct Q16GRPRecord2* x7895);

int x32009(struct Q16GRPRecord2* x7900, struct Q16GRPRecord2* x7901);

int x32036(struct Q16GRPRecord1* x7908);

int x32077(struct Q16GRPRecord1* x7913, struct Q16GRPRecord1* x7914);

int x32113(void* x6559);

int x32116(void* x6562, void* x6563);

int x32123(void* x6569);

int x32126(void* x6572, void* x6573);

int x32188(struct AGGRecord_Q16GRPRecord2* x240, struct AGGRecord_Q16GRPRecord2* x241);

int x8448(void* x8442, void* x8443, void* x8444);
/* GLOBAL VARS */

struct timeval x3337;
int main(int argc, char** argv) {
  FILE* x3903 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x3904 = 0;
  int x3905 = x3904;
  int* x3906 = &x3905;
  int x3907 = fscanf(x3903, "%d", x3906);
  pclose(x3903);
  struct SUPPLIERRecord** x5065 = (struct SUPPLIERRecord**)malloc(x3905 * sizeof(struct SUPPLIERRecord*));
  memset(x5065, 0, x3905 * sizeof(struct SUPPLIERRecord*));
  int x3911 = O_RDONLY;
  int x3912 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x3911);
  struct stat x3913 = (struct stat){0};
  /* VAR */ struct stat x3914 = x3913;
  struct stat x3915 = x3914;
  struct stat* x3916 = &x3915;
  int x3917 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x3916);
  size_t x3918 = x3916->st_size;
  int x3919 = PROT_READ;
  int x3920 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x3918, x3919, x3920, x3912, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x3905);
    /* VAR */ int ite23850 = 0;
    if(x6) {
      char x30667 = *x3;
      int x30668 = x30667!=('\0');
      ite23850 = x30668;
    } else {
      
      ite23850 = 0;
    };
    int x21882 = ite23850;
    if (!(x21882)) break; 
    
    /* VAR */ int x3928 = 0;
    int x3929 = x3928;
    int* x3930 = &x3929;
    char* x3931 = strntoi_unchecked(x3, x3930);
    x3 = x3931;
    char* x5089 = (char*)malloc(26 * sizeof(char));
    memset(x5089, 0, 26 * sizeof(char));
    /* VAR */ char* x3934 = x3;
    while(1) {
      
      char x3935 = *x3;
      int x3936 = x3935!=('|');
      /* VAR */ int ite23869 = 0;
      if(x3936) {
        char x30685 = *x3;
        int x30686 = x30685!=('\n');
        ite23869 = x30686;
      } else {
        
        ite23869 = 0;
      };
      int x21894 = ite23869;
      if (!(x21894)) break; 
      
      x3 += 1;
    };
    char* x3942 = x3934;
    int x3943 = x3 - x3942;
    char* x3944 = x3934;
    char* x3945 = strncpy(x5089, x3944, x3943);
    x3 += 1;
    char* x5107 = (char*)malloc(41 * sizeof(char));
    memset(x5107, 0, 41 * sizeof(char));
    /* VAR */ char* x3953 = x3;
    while(1) {
      
      char x3954 = *x3;
      int x3955 = x3954!=('|');
      /* VAR */ int ite23892 = 0;
      if(x3955) {
        char x30707 = *x3;
        int x30708 = x30707!=('\n');
        ite23892 = x30708;
      } else {
        
        ite23892 = 0;
      };
      int x21910 = ite23892;
      if (!(x21910)) break; 
      
      x3 += 1;
    };
    char* x3961 = x3953;
    int x3962 = x3 - x3961;
    char* x3963 = x3953;
    char* x3964 = strncpy(x5107, x3963, x3962);
    x3 += 1;
    /* VAR */ int x3971 = 0;
    int x3972 = x3971;
    int* x3973 = &x3972;
    char* x3974 = strntoi_unchecked(x3, x3973);
    x3 = x3974;
    char* x5130 = (char*)malloc(16 * sizeof(char));
    memset(x5130, 0, 16 * sizeof(char));
    /* VAR */ char* x3977 = x3;
    while(1) {
      
      char x3978 = *x3;
      int x3979 = x3978!=('|');
      /* VAR */ int ite23920 = 0;
      if(x3979) {
        char x30734 = *x3;
        int x30735 = x30734!=('\n');
        ite23920 = x30735;
      } else {
        
        ite23920 = 0;
      };
      int x21931 = ite23920;
      if (!(x21931)) break; 
      
      x3 += 1;
    };
    char* x3985 = x3977;
    int x3986 = x3 - x3985;
    char* x3987 = x3977;
    char* x3988 = strncpy(x5130, x3987, x3986);
    x3 += 1;
    /* VAR */ double x3995 = 0.0;
    double x3996 = x3995;
    double* x3997 = &x3996;
    char* x3998 = strntod_unchecked(x3, x3997);
    x3 = x3998;
    char* x5153 = (char*)malloc(102 * sizeof(char));
    memset(x5153, 0, 102 * sizeof(char));
    /* VAR */ char* x4001 = x3;
    while(1) {
      
      char x4002 = *x3;
      int x4003 = x4002!=('|');
      /* VAR */ int ite23948 = 0;
      if(x4003) {
        char x30761 = *x3;
        int x30762 = x30761!=('\n');
        ite23948 = x30762;
      } else {
        
        ite23948 = 0;
      };
      int x21952 = ite23948;
      if (!(x21952)) break; 
      
      x3 += 1;
    };
    char* x4009 = x4001;
    int x4010 = x3 - x4009;
    char* x4011 = x4001;
    char* x4012 = strncpy(x5153, x4011, x4010);
    x3 += 1;
    struct SUPPLIERRecord* x5738 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x5738, 0, 1 * sizeof(struct SUPPLIERRecord));
    x5738->S_SUPPKEY = x3929; x5738->S_NAME = x5089; x5738->S_ADDRESS = x5107; x5738->S_NATIONKEY = x3972; x5738->S_PHONE = x5130; x5738->S_ACCTBAL = x3996; x5738->S_COMMENT = x5153;
    int x45 = x4;
    *(x5065 + x45) = x5738;
    int x47 = x4;
    int x48 = x47+(1);
    x4 = x48;
  };
  FILE* x4025 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x4026 = 0;
  int x4027 = x4026;
  int* x4028 = &x4027;
  int x4029 = fscanf(x4025, "%d", x4028);
  pclose(x4025);
  struct PARTRecord** x5183 = (struct PARTRecord**)malloc(x4027 * sizeof(struct PARTRecord*));
  memset(x5183, 0, x4027 * sizeof(struct PARTRecord*));
  int x4033 = O_RDONLY;
  int x4034 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x4033);
  /* VAR */ struct stat x4035 = x3913;
  struct stat x4036 = x4035;
  struct stat* x4037 = &x4036;
  int x4038 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x4037);
  size_t x4039 = x4037->st_size;
  int x4040 = PROT_READ;
  int x4041 = MAP_PRIVATE;
  char* x53 = mmap(NULL, x4039, x4040, x4041, x4034, 0);
  /* VAR */ int x54 = 0;
  while(1) {
    
    int x55 = x54;
    int x56 = x55<(x4027);
    /* VAR */ int ite23995 = 0;
    if(x56) {
      char x30807 = *x53;
      int x30808 = x30807!=('\0');
      ite23995 = x30808;
    } else {
      
      ite23995 = 0;
    };
    int x21992 = ite23995;
    if (!(x21992)) break; 
    
    /* VAR */ int x4049 = 0;
    int x4050 = x4049;
    int* x4051 = &x4050;
    char* x4052 = strntoi_unchecked(x53, x4051);
    x53 = x4052;
    char* x5206 = (char*)malloc(56 * sizeof(char));
    memset(x5206, 0, 56 * sizeof(char));
    /* VAR */ char* x4055 = x53;
    while(1) {
      
      char x4056 = *x53;
      int x4057 = x4056!=('|');
      /* VAR */ int ite24014 = 0;
      if(x4057) {
        char x30825 = *x53;
        int x30826 = x30825!=('\n');
        ite24014 = x30826;
      } else {
        
        ite24014 = 0;
      };
      int x22004 = ite24014;
      if (!(x22004)) break; 
      
      x53 += 1;
    };
    char* x4063 = x4055;
    int x4064 = x53 - x4063;
    char* x4065 = x4055;
    char* x4066 = strncpy(x5206, x4065, x4064);
    x53 += 1;
    char* x5224 = (char*)malloc(26 * sizeof(char));
    memset(x5224, 0, 26 * sizeof(char));
    /* VAR */ char* x4074 = x53;
    while(1) {
      
      char x4075 = *x53;
      int x4076 = x4075!=('|');
      /* VAR */ int ite24037 = 0;
      if(x4076) {
        char x30847 = *x53;
        int x30848 = x30847!=('\n');
        ite24037 = x30848;
      } else {
        
        ite24037 = 0;
      };
      int x22020 = ite24037;
      if (!(x22020)) break; 
      
      x53 += 1;
    };
    char* x4082 = x4074;
    int x4083 = x53 - x4082;
    char* x4084 = x4074;
    char* x4085 = strncpy(x5224, x4084, x4083);
    x53 += 1;
    char* x5242 = (char*)malloc(11 * sizeof(char));
    memset(x5242, 0, 11 * sizeof(char));
    /* VAR */ char* x4093 = x53;
    while(1) {
      
      char x4094 = *x53;
      int x4095 = x4094!=('|');
      /* VAR */ int ite24060 = 0;
      if(x4095) {
        char x30869 = *x53;
        int x30870 = x30869!=('\n');
        ite24060 = x30870;
      } else {
        
        ite24060 = 0;
      };
      int x22036 = ite24060;
      if (!(x22036)) break; 
      
      x53 += 1;
    };
    char* x4101 = x4093;
    int x4102 = x53 - x4101;
    char* x4103 = x4093;
    char* x4104 = strncpy(x5242, x4103, x4102);
    x53 += 1;
    char* x5260 = (char*)malloc(26 * sizeof(char));
    memset(x5260, 0, 26 * sizeof(char));
    /* VAR */ char* x4112 = x53;
    while(1) {
      
      char x4113 = *x53;
      int x4114 = x4113!=('|');
      /* VAR */ int ite24083 = 0;
      if(x4114) {
        char x30891 = *x53;
        int x30892 = x30891!=('\n');
        ite24083 = x30892;
      } else {
        
        ite24083 = 0;
      };
      int x22052 = ite24083;
      if (!(x22052)) break; 
      
      x53 += 1;
    };
    char* x4120 = x4112;
    int x4121 = x53 - x4120;
    char* x4122 = x4112;
    char* x4123 = strncpy(x5260, x4122, x4121);
    x53 += 1;
    /* VAR */ int x4130 = 0;
    int x4131 = x4130;
    int* x4132 = &x4131;
    char* x4133 = strntoi_unchecked(x53, x4132);
    x53 = x4133;
    char* x5283 = (char*)malloc(11 * sizeof(char));
    memset(x5283, 0, 11 * sizeof(char));
    /* VAR */ char* x4136 = x53;
    while(1) {
      
      char x4137 = *x53;
      int x4138 = x4137!=('|');
      /* VAR */ int ite24111 = 0;
      if(x4138) {
        char x30918 = *x53;
        int x30919 = x30918!=('\n');
        ite24111 = x30919;
      } else {
        
        ite24111 = 0;
      };
      int x22073 = ite24111;
      if (!(x22073)) break; 
      
      x53 += 1;
    };
    char* x4144 = x4136;
    int x4145 = x53 - x4144;
    char* x4146 = x4136;
    char* x4147 = strncpy(x5283, x4146, x4145);
    x53 += 1;
    /* VAR */ double x4154 = 0.0;
    double x4155 = x4154;
    double* x4156 = &x4155;
    char* x4157 = strntod_unchecked(x53, x4156);
    x53 = x4157;
    char* x5306 = (char*)malloc(24 * sizeof(char));
    memset(x5306, 0, 24 * sizeof(char));
    /* VAR */ char* x4160 = x53;
    while(1) {
      
      char x4161 = *x53;
      int x4162 = x4161!=('|');
      /* VAR */ int ite24139 = 0;
      if(x4162) {
        char x30945 = *x53;
        int x30946 = x30945!=('\n');
        ite24139 = x30946;
      } else {
        
        ite24139 = 0;
      };
      int x22094 = ite24139;
      if (!(x22094)) break; 
      
      x53 += 1;
    };
    char* x4168 = x4160;
    int x4169 = x53 - x4168;
    char* x4170 = x4160;
    char* x4171 = strncpy(x5306, x4170, x4169);
    x53 += 1;
    struct PARTRecord* x5893 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x5893, 0, 1 * sizeof(struct PARTRecord));
    x5893->P_PARTKEY = x4050; x5893->P_NAME = x5206; x5893->P_MFGR = x5224; x5893->P_BRAND = x5242; x5893->P_TYPE = x5260; x5893->P_SIZE = x4131; x5893->P_CONTAINER = x5283; x5893->P_RETAILPRICE = x4155; x5893->P_COMMENT = x5306;
    int x109 = x54;
    *(x5183 + x109) = x5893;
    int x111 = x54;
    int x112 = x111+(1);
    x54 = x112;
  };
  FILE* x4184 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x4185 = 0;
  int x4186 = x4185;
  int* x4187 = &x4186;
  int x4188 = fscanf(x4184, "%d", x4187);
  pclose(x4184);
  struct PARTSUPPRecord** x5336 = (struct PARTSUPPRecord**)malloc(x4186 * sizeof(struct PARTSUPPRecord*));
  memset(x5336, 0, x4186 * sizeof(struct PARTSUPPRecord*));
  int x4192 = O_RDONLY;
  int x4193 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x4192);
  /* VAR */ struct stat x4194 = x3913;
  struct stat x4195 = x4194;
  struct stat* x4196 = &x4195;
  int x4197 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x4196);
  size_t x4198 = x4196->st_size;
  int x4199 = PROT_READ;
  int x4200 = MAP_PRIVATE;
  char* x117 = mmap(NULL, x4198, x4199, x4200, x4193, 0);
  /* VAR */ int x118 = 0;
  while(1) {
    
    int x119 = x118;
    int x120 = x119<(x4186);
    /* VAR */ int ite24186 = 0;
    if(x120) {
      char x30991 = *x117;
      int x30992 = x30991!=('\0');
      ite24186 = x30992;
    } else {
      
      ite24186 = 0;
    };
    int x22134 = ite24186;
    if (!(x22134)) break; 
    
    /* VAR */ int x4208 = 0;
    int x4209 = x4208;
    int* x4210 = &x4209;
    char* x4211 = strntoi_unchecked(x117, x4210);
    x117 = x4211;
    /* VAR */ int x4213 = 0;
    int x4214 = x4213;
    int* x4215 = &x4214;
    char* x4216 = strntoi_unchecked(x117, x4215);
    x117 = x4216;
    /* VAR */ int x4218 = 0;
    int x4219 = x4218;
    int* x4220 = &x4219;
    char* x4221 = strntoi_unchecked(x117, x4220);
    x117 = x4221;
    /* VAR */ double x4223 = 0.0;
    double x4224 = x4223;
    double* x4225 = &x4224;
    char* x4226 = strntod_unchecked(x117, x4225);
    x117 = x4226;
    char* x5374 = (char*)malloc(200 * sizeof(char));
    memset(x5374, 0, 200 * sizeof(char));
    /* VAR */ char* x4229 = x117;
    while(1) {
      
      char x4230 = *x117;
      int x4231 = x4230!=('|');
      /* VAR */ int ite24220 = 0;
      if(x4231) {
        char x31024 = *x117;
        int x31025 = x31024!=('\n');
        ite24220 = x31025;
      } else {
        
        ite24220 = 0;
      };
      int x22161 = ite24220;
      if (!(x22161)) break; 
      
      x117 += 1;
    };
    char* x4237 = x4229;
    int x4238 = x117 - x4237;
    char* x4239 = x4229;
    char* x4240 = strncpy(x5374, x4239, x4238);
    x117 += 1;
    struct PARTSUPPRecord* x5963 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x5963, 0, 1 * sizeof(struct PARTSUPPRecord));
    x5963->PS_PARTKEY = x4209; x5963->PS_SUPPKEY = x4214; x5963->PS_AVAILQTY = x4219; x5963->PS_SUPPLYCOST = x4224; x5963->PS_COMMENT = x5374;
    int x136 = x118;
    *(x5336 + x136) = x5963;
    int x138 = x118;
    int x139 = x138+(1);
    x118 = x139;
  };
  int x143 = 0;
  for(; x143 < 1 ; x143 += 1) {
    
    GHashTable* x32035 = g_hash_table_new(x31970, x32009);
    GHashTable* x32112 = g_hash_table_new(x32036, x32077);
    void*** x32120 = (void***){x32113};
    int* x32121 = (int*){x32116};
    GHashTable* x32122 = g_hash_table_new(x32120, x32121);
    void*** x32130 = (void***){x32123};
    int* x32131 = (int*){x32126};
    GHashTable* x32132 = g_hash_table_new(x32130, x32131);
    /* VAR */ struct timeval x32133 = x3337;
    struct timeval x32134 = x32133;
    /* VAR */ struct timeval x32135 = x3337;
    struct timeval x32136 = x32135;
    /* VAR */ struct timeval x32137 = x3337;
    struct timeval x32138 = x32137;
    struct timeval* x32139 = &x32136;
    gettimeofday(x32139, NULL);
    /* VAR */ int x32141 = 0;
    /* VAR */ int x32142 = 0;
    /* VAR */ int x32143 = 0;
    int* x32232 = &(x32188);
    GTree* x32233 = g_tree_new(x32232);
    /* VAR */ int x32234 = 0;
    /* VAR */ int x32235 = 0;
    while(1) {
      
      int x32237 = x32141;
      int x32238 = x32237<(x4027);
      if (!(x32238)) break; 
      
      int x2015 = x32141;
      struct PARTRecord* x293 = x5183[x2015];
      char* x295 = x293->P_BRAND;
      int x17449 = strlen("Brand#21");
      int x17450 = strncmp(x295, "Brand#21", x17449);
      int x17451 = x17450==(0);
      int x297 = !(x17451);
      /* VAR */ int ite25429 = 0;
      if(x297) {
        char* x32248 = x293->P_TYPE;
        int x32249 = strlen("PROMO PLATED");
        int x32250 = strncmp(x32248, "PROMO PLATED", x32249);
        int x32251 = x32250==(0);
        int x32252 = !(x32251);
        ite25429 = x32252;
      } else {
        
        ite25429 = 0;
      };
      int x23261 = ite25429;
      /* VAR */ int ite25441 = 0;
      if(x23261) {
        int x32259 = x293->P_SIZE;
        int x32260 = x32259==(23);
        /* VAR */ int x32261 = 0;
        if(x32260) {
          x32261 = 1;
        } else {
          
          int x32264 = x32259==(3);
          x32261 = x32264;
        };
        int x32267 = x32261;
        /* VAR */ int x32268 = 0;
        if(x32267) {
          x32268 = 1;
        } else {
          
          int x32271 = x32259==(33);
          x32268 = x32271;
        };
        int x32274 = x32268;
        /* VAR */ int x32275 = 0;
        if(x32274) {
          x32275 = 1;
        } else {
          
          int x32278 = x32259==(29);
          x32275 = x32278;
        };
        int x32281 = x32275;
        /* VAR */ int x32282 = 0;
        if(x32281) {
          x32282 = 1;
        } else {
          
          int x32285 = x32259==(40);
          x32282 = x32285;
        };
        int x32288 = x32282;
        /* VAR */ int x32289 = 0;
        if(x32288) {
          x32289 = 1;
        } else {
          
          int x32292 = x32259==(27);
          x32289 = x32292;
        };
        int x32295 = x32289;
        /* VAR */ int x32296 = 0;
        if(x32295) {
          x32296 = 1;
        } else {
          
          int x32299 = x32259==(22);
          x32296 = x32299;
        };
        int x32302 = x32296;
        /* VAR */ int x32303 = 0;
        if(x32302) {
          x32303 = 1;
        } else {
          
          int x32306 = x32259==(4);
          x32303 = x32306;
        };
        int x32309 = x32303;
        ite25441 = x32309;
      } else {
        
        ite25441 = 0;
      };
      int x23263 = ite25441;
      if(x23263) {
        int x319 = x293->P_PARTKEY;
        void* x6660 = (void*){x319};
        void* x6661 = (void*){x293};
        void* x6662 = g_hash_table_lookup(x32132, x6660);
        GList** x6663 = (GList**){x6662};
        GList** x6664 = NULL;
        int x6665 = x6663==(x6664);
        /* VAR */ GList** ite23273 = 0;
        if(x6665) {
          GList** x23274 = malloc(8);
          GList* x23275 = NULL;
          pointer_assign(x23274, x23275);
          ite23273 = x23274;
        } else {
          
          ite23273 = x6663;
        };
        GList** x6669 = ite23273;
        GList* x6670 = *(x6669);
        GList* x6671 = g_list_prepend(x6670, x6661);
        pointer_assign(x6669, x6671);
        void* x6673 = (void*){x6669};
        g_hash_table_insert(x32132, x6660, x6673);
      };
      int x2045 = x32141;
      int x324 = x2045+(1);
      x32141 = x324;
    };
    while(1) {
      
      int x32340 = x32142;
      int x32341 = x32340<(x4186);
      if (!(x32341)) break; 
      
      int x2054 = x32142;
      struct PARTSUPPRecord* x333 = x5336[x2054];
      int x335 = x333->PS_PARTKEY;
      void* x6685 = (void*){x335};
      void* x6686 = g_hash_table_lookup(x32132, x6685);
      GList** x6687 = (GList**){x6686};
      int x12647 = x6687!=(NULL);
      if(x12647) {
        GList* x8122 = *(x6687);
        /* VAR */ GList* x8123 = x8122;
        while(1) {
          
          GList* x8124 = x8123;
          GList* x8125 = NULL;
          int x8126 = x8124!=(x8125);
          if (!(x8126)) break; 
          
          GList* x8127 = x8123;
          void* x8128 = g_list_nth_data(x8127, 0);
          struct PARTRecord* x8129 = (struct PARTRecord*){x8128};
          GList* x8130 = x8123;
          GList* x8131 = g_list_next(x8130);
          x8123 = x8131;
          int x8133 = x8129->P_PARTKEY;
          int x8134 = x8133==(x335);
          if(x8134) {
            char* x932 = x8129->P_NAME;
            char* x933 = x8129->P_MFGR;
            char* x934 = x8129->P_BRAND;
            char* x935 = x8129->P_TYPE;
            int x936 = x8129->P_SIZE;
            char* x937 = x8129->P_CONTAINER;
            double x938 = x8129->P_RETAILPRICE;
            char* x939 = x8129->P_COMMENT;
            int x940 = x333->PS_SUPPKEY;
            int x941 = x333->PS_AVAILQTY;
            double x942 = x333->PS_SUPPLYCOST;
            char* x943 = x333->PS_COMMENT;
            struct PARTRecord_PARTSUPPRecord* x6091 = (struct PARTRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct PARTRecord_PARTSUPPRecord));
            memset(x6091, 0, 1 * sizeof(struct PARTRecord_PARTSUPPRecord));
            x6091->P_PARTKEY = x8133; x6091->P_NAME = x932; x6091->P_MFGR = x933; x6091->P_BRAND = x934; x6091->P_TYPE = x935; x6091->P_SIZE = x936; x6091->P_CONTAINER = x937; x6091->P_RETAILPRICE = x938; x6091->P_COMMENT = x939; x6091->PS_PARTKEY = x335; x6091->PS_SUPPKEY = x940; x6091->PS_AVAILQTY = x941; x6091->PS_SUPPLYCOST = x942; x6091->PS_COMMENT = x943;
            int x356 = x6091->PS_SUPPKEY;
            void* x6713 = (void*){x356};
            void* x6714 = (void*){x6091};
            void* x6715 = g_hash_table_lookup(x32122, x6713);
            GList** x6716 = (GList**){x6715};
            GList** x6717 = NULL;
            int x6718 = x6716==(x6717);
            /* VAR */ GList** ite23378 = 0;
            if(x6718) {
              GList** x23379 = malloc(8);
              GList* x23380 = NULL;
              pointer_assign(x23379, x23380);
              ite23378 = x23379;
            } else {
              
              ite23378 = x6716;
            };
            GList** x6722 = ite23378;
            GList* x6723 = *(x6722);
            GList* x6724 = g_list_prepend(x6723, x6714);
            pointer_assign(x6722, x6724);
            void* x6726 = (void*){x6722};
            g_hash_table_insert(x32122, x6713, x6726);
          };
        };
      };
      int x2106 = x32142;
      int x364 = x2106+(1);
      x32142 = x364;
    };
    while(1) {
      
      int x32446 = x32143;
      int x32447 = x32446<(x3905);
      if (!(x32447)) break; 
      
      int x2116 = x32143;
      struct SUPPLIERRecord* x374 = x5065[x2116];
      char* x376 = x374->S_COMMENT;
      char* x17600 = pointer_add(x376, 0);
      char* x17601 = strstr(x17600, "Customer");
      char* x17602 = NULL;
      int x17603 = x17601==(x17602);
      /* VAR */ int ite23404 = 0;
      if(x17603) {
        ite23404 = -1;
      } else {
        
        int x23406 = str_subtract(x17601, x376);
        ite23404 = x23406;
      };
      int x17605 = ite23404;
      char* x17606 = pointer_add(x376, x17605);
      char* x17607 = strstr(x17606, "Complaints");
      char* x17608 = NULL;
      int x17609 = x17607==(x17608);
      /* VAR */ int ite23415 = 0;
      if(x17609) {
        ite23415 = -1;
      } else {
        
        int x23417 = str_subtract(x17607, x376);
        ite23415 = x23417;
      };
      int x17611 = ite23415;
      int x379 = x17605!=(-1);
      /* VAR */ int ite25626 = 0;
      if(x379) {
        int x32476 = x17611!=(-1);
        ite25626 = x32476;
      } else {
        
        ite25626 = 0;
      };
      int x23423 = ite25626;
      if(x23423) {
        int x382 = x374->S_SUPPKEY;
        void* x6746 = (void*){x382};
        void* x6747 = g_hash_table_lookup(x32122, x6746);
        GList** x6748 = (GList**){x6747};
        int x12751 = x6748!=(NULL);
        if(x12751) {
          GList* x8197 = *(x6748);
          /* VAR */ GList* x8198 = x8197;
          /* VAR */ GList** x8199 = x6748;
          while(1) {
            
            GList* x8200 = x8198;
            GList* x8201 = NULL;
            int x8202 = x8200!=(x8201);
            if (!(x8202)) break; 
            
            GList* x8203 = x8198;
            void* x8204 = g_list_nth_data(x8203, 0);
            struct PARTRecord_PARTSUPPRecord* x8205 = (struct PARTRecord_PARTSUPPRecord*){x8204};
            int x8206 = x8205->PS_SUPPKEY;
            int x8207 = x8206==(x382);
            int x8208 = !(x8207);
            if(x8208) {
              GList* x8209 = x8198;
              GList* x8210 = x8209->next;
              GList** x8211 = &(x8210);
              x8199 = x8211;
            } else {
              
              GList** x8213 = x8199;
              GList* x8214 = x8198;
              GList* x8215 = g_list_next(x8214);
              pointer_assign(x8213, x8215);
            };
            GList* x8218 = x8198;
            GList* x8219 = g_list_next(x8218);
            x8198 = x8219;
          };
        };
      };
      int x2145 = x32143;
      int x404 = x2145+(1);
      x32143 = x404;
    };
    GList* x32585 = g_hash_table_get_keys(x32122);
    /* VAR */ GList* x32586 = x32585;
    int x32587 = g_hash_table_size(x32122);
    int x19791 = 0;
    for(; x19791 < x32587 ; x19791 += 1) {
      
      GList* x19792 = x32586;
      void* x19793 = g_list_nth_data(x19792, 0);
      GList* x19794 = x32586;
      GList* x19795 = g_list_next(x19794);
      x32586 = x19795;
      void* x19797 = g_hash_table_lookup(x32122, x19793);
      GList** x19798 = (GList**){x19797};
      GList* x19819 = *(x19798);
      /* VAR */ GList* x19820 = x19819;
      while(1) {
        
        GList* x8324 = x19820;
        GList* x8325 = NULL;
        int x8326 = x8324!=(x8325);
        if (!(x8326)) break; 
        
        GList* x8327 = x19820;
        void* x8328 = g_list_nth_data(x8327, 0);
        struct PARTRecord_PARTSUPPRecord* x8329 = (struct PARTRecord_PARTSUPPRecord*){x8328};
        GList* x8330 = x19820;
        GList* x8331 = g_list_next(x8330);
        x19820 = x8331;
        int x8333 = x8329->PS_SUPPKEY;
        char* x8334 = x8329->P_BRAND;
        char* x8335 = x8329->P_TYPE;
        int x8336 = x8329->P_SIZE;
        struct Q16GRPRecord1* x8337 = (struct Q16GRPRecord1*)malloc(1 * sizeof(struct Q16GRPRecord1));
        memset(x8337, 0, 1 * sizeof(struct Q16GRPRecord1));
        x8337->P_BRAND = x8334; x8337->P_TYPE = x8335; x8337->P_SIZE = x8336; x8337->PS_SUPPKEY = x8333;
        void* x8340 = g_hash_table_lookup(x32112, x8337);
        int x8341 = x8340==(NULL);
        /* VAR */ struct AGGRecord_Q16GRPRecord1* ite23655 = 0;
        if(x8341) {
          double* x23656 = (double*)malloc(1 * sizeof(double));
          memset(x23656, 0, 1 * sizeof(double));
          struct AGGRecord_Q16GRPRecord1* x23657 = (struct AGGRecord_Q16GRPRecord1*)malloc(1 * sizeof(struct AGGRecord_Q16GRPRecord1));
          memset(x23657, 0, 1 * sizeof(struct AGGRecord_Q16GRPRecord1));
          x23657->key = x8337; x23657->aggs = x23656;
          g_hash_table_insert(x32112, x8337, x23657);
          ite23655 = x23657;
        } else {
          
          ite23655 = x8340;
        };
        struct AGGRecord_Q16GRPRecord1* x8342 = ite23655;
        double* x8348 = x8342->aggs;
        double x8349 = x8348[0];
        *x8348 = x8349;
      };
    };
    GList* x32752 = g_hash_table_get_keys(x32112);
    /* VAR */ GList* x32753 = x32752;
    int x32754 = g_hash_table_size(x32112);
    int x19903 = 0;
    for(; x19903 < x32754 ; x19903 += 1) {
      
      GList* x19904 = x32753;
      void* x19905 = g_list_nth_data(x19904, 0);
      GList* x19906 = g_list_next(x19904);
      x32753 = x19906;
      void* x19908 = g_hash_table_lookup(x32112, x19905);
      struct AGGRecord_Q16GRPRecord1* x19910 = (struct AGGRecord_Q16GRPRecord1*){x19908};
      struct Q16GRPRecord1* x19911 = x19910->key;
      char* x19912 = x19911->P_BRAND;
      char* x19913 = x19911->P_TYPE;
      int x19914 = x19911->P_SIZE;
      struct Q16GRPRecord2* x19915 = (struct Q16GRPRecord2*)malloc(1 * sizeof(struct Q16GRPRecord2));
      memset(x19915, 0, 1 * sizeof(struct Q16GRPRecord2));
      x19915->P_BRAND = x19912; x19915->P_TYPE = x19913; x19915->P_SIZE = x19914;
      void* x19918 = g_hash_table_lookup(x32035, x19915);
      int x19919 = x19918==(NULL);
      /* VAR */ struct AGGRecord_Q16GRPRecord2* ite23749 = 0;
      if(x19919) {
        double* x23750 = (double*)malloc(1 * sizeof(double));
        memset(x23750, 0, 1 * sizeof(double));
        struct AGGRecord_Q16GRPRecord2* x23751 = (struct AGGRecord_Q16GRPRecord2*)malloc(1 * sizeof(struct AGGRecord_Q16GRPRecord2));
        memset(x23751, 0, 1 * sizeof(struct AGGRecord_Q16GRPRecord2));
        x23751->key = x19915; x23751->aggs = x23750;
        g_hash_table_insert(x32035, x19915, x23751);
        ite23749 = x23751;
      } else {
        
        ite23749 = x19918;
      };
      struct AGGRecord_Q16GRPRecord2* x19920 = ite23749;
      double* x19926 = x19920->aggs;
      double x19927 = x19926[0];
      double x19928 = x19927+(1.0);
      *x19926 = x19928;
    };
    GList* x32824 = g_hash_table_get_keys(x32035);
    /* VAR */ GList* x32825 = x32824;
    int x32826 = g_hash_table_size(x32035);
    int x19948 = 0;
    for(; x19948 < x32826 ; x19948 += 1) {
      
      GList* x19949 = x32825;
      void* x19950 = g_list_nth_data(x19949, 0);
      GList* x19951 = g_list_next(x19949);
      x32825 = x19951;
      void* x19953 = g_hash_table_lookup(x32035, x19950);
      struct AGGRecord_Q16GRPRecord2* x19955 = (struct AGGRecord_Q16GRPRecord2*){x19953};
      g_tree_insert(x32233, x19955, x19955);
    };
    while(1) {
      
      int x2225 = x32234;
      int x490 = !(x2225);
      /* VAR */ int ite26002 = 0;
      if(x490) {
        int x32851 = g_tree_nnodes(x32233);
        int x32852 = x32851!=(0);
        ite26002 = x32852;
      } else {
        
        ite26002 = 0;
      };
      int x23793 = ite26002;
      if (!(x23793)) break; 
      
      void* x8441 = NULL;
      void** x8449 = &(x8441);
      g_tree_foreach(x32233, x8448, x8449);
      struct AGGRecord_Q16GRPRecord2* x8451 = (struct AGGRecord_Q16GRPRecord2*){x8441};
      int x8452 = g_tree_remove(x32233, x8451);
      if(0) {
        x32234 = 1;
      } else {
        
        struct Q16GRPRecord2* x503 = x8451->key;
        char* x504 = x503->P_BRAND;
        char* x506 = x503->P_TYPE;
        int x508 = x503->P_SIZE;
        double* x509 = x8451->aggs;
        double x510 = x509[0];
        printf("%s|%s|%d|%.0f\n", x504, x506, x508, x510);
        int x2247 = x32235;
        int x513 = x2247+(1);
        x32235 = x513;
      };
    };
    int x32881 = x32235;
    printf("(%d rows)\n", x32881);
    struct timeval* x32883 = &x32138;
    gettimeofday(x32883, NULL);
    struct timeval* x32885 = &x32134;
    struct timeval* x32886 = &x32138;
    struct timeval* x32887 = &x32136;
    long x32888 = timeval_subtract(x32885, x32886, x32887);
    printf("Generated code run in %ld milliseconds.\n", x32888);
  };
}
/* ----------- FUNCTIONS ----------- */
int x31970(struct Q16GRPRecord2* x7895) {
  char* x14276 = x7895->P_BRAND;
  int x17220 = strlen(x14276);
  /* VAR */ int x15222 = 0;
  /* VAR */ int x15223 = 0;
  while(1) {
    
    int x15224 = x15222;
    int x15225 = x15224<(x17220);
    if (!(x15225)) break; 
    
    int x15226 = x15223;
    int x15227 = x15222;
    char* x17228 = pointer_add(x14276, x15227);
    char x17229 = *(x17228);
    int x15230 = x15226+(x17229);
    x15223 = x15230;
    int x15232 = x15222;
    int x15233 = x15232+(1);
    x15222 = x15233;
  };
  int x15236 = x15223;
  char* x14278 = x7895->P_TYPE;
  int x17238 = strlen(x14278);
  /* VAR */ int x15239 = 0;
  /* VAR */ int x15240 = 0;
  while(1) {
    
    int x15241 = x15239;
    int x15242 = x15241<(x17238);
    if (!(x15242)) break; 
    
    int x15243 = x15240;
    int x15244 = x15239;
    char* x17246 = pointer_add(x14278, x15244);
    char x17247 = *(x17246);
    int x15247 = x15243+(x17247);
    x15240 = x15247;
    int x15249 = x15239;
    int x15250 = x15249+(1);
    x15239 = x15250;
  };
  int x15253 = x15240;
  int x14280 = x7895->P_SIZE;
  int x14282 = x15236+(x15253);
  int x14283 = x14282+(x14280);
  return x14283; 
}

int x32009(struct Q16GRPRecord2* x7900, struct Q16GRPRecord2* x7901) {
  char* x14287 = x7900->P_BRAND;
  char* x14288 = x7901->P_BRAND;
  int x15262 = strcmp(x14287, x14288);
  int x15263 = !(x15262);
  char* x14290 = x7900->P_TYPE;
  char* x14291 = x7901->P_TYPE;
  int x15266 = strcmp(x14290, x14291);
  int x15267 = !(x15266);
  int x14293 = x7900->P_SIZE;
  int x14294 = x7901->P_SIZE;
  int x14295 = x14293==(x14294);
  /* VAR */ int ite25200 = 0;
  if(x15263) {
    ite25200 = x15267;
  } else {
    
    ite25200 = 0;
  };
  int x23059 = ite25200;
  /* VAR */ int ite25207 = 0;
  if(x23059) {
    ite25207 = x14295;
  } else {
    
    ite25207 = 0;
  };
  int x23061 = ite25207;
  return x23061; 
}

int x32036(struct Q16GRPRecord1* x7908) {
  char* x14301 = x7908->P_BRAND;
  int x17278 = strlen(x14301);
  /* VAR */ int x15278 = 0;
  /* VAR */ int x15279 = 0;
  while(1) {
    
    int x15280 = x15278;
    int x15281 = x15280<(x17278);
    if (!(x15281)) break; 
    
    int x15282 = x15279;
    int x15283 = x15278;
    char* x17286 = pointer_add(x14301, x15283);
    char x17287 = *(x17286);
    int x15286 = x15282+(x17287);
    x15279 = x15286;
    int x15288 = x15278;
    int x15289 = x15288+(1);
    x15278 = x15289;
  };
  int x15292 = x15279;
  char* x14303 = x7908->P_TYPE;
  int x17296 = strlen(x14303);
  /* VAR */ int x15295 = 0;
  /* VAR */ int x15296 = 0;
  while(1) {
    
    int x15297 = x15295;
    int x15298 = x15297<(x17296);
    if (!(x15298)) break; 
    
    int x15299 = x15296;
    int x15300 = x15295;
    char* x17304 = pointer_add(x14303, x15300);
    char x17305 = *(x17304);
    int x15303 = x15299+(x17305);
    x15296 = x15303;
    int x15305 = x15295;
    int x15306 = x15305+(1);
    x15295 = x15306;
  };
  int x15309 = x15296;
  int x14305 = x7908->P_SIZE;
  int x14307 = x7908->PS_SUPPKEY;
  int x14309 = x15292+(x15309);
  int x14310 = x14309+(x14305);
  int x14311 = x14310+(x14307);
  return x14311; 
}

int x32077(struct Q16GRPRecord1* x7913, struct Q16GRPRecord1* x7914) {
  char* x14315 = x7913->P_BRAND;
  char* x14316 = x7914->P_BRAND;
  int x15320 = strcmp(x14315, x14316);
  int x15321 = !(x15320);
  char* x14318 = x7913->P_TYPE;
  char* x14319 = x7914->P_TYPE;
  int x15324 = strcmp(x14318, x14319);
  int x15325 = !(x15324);
  int x14321 = x7913->P_SIZE;
  int x14322 = x7914->P_SIZE;
  int x14323 = x14321==(x14322);
  int x14324 = x7913->PS_SUPPKEY;
  int x14325 = x7914->PS_SUPPKEY;
  int x14326 = x14324==(x14325);
  /* VAR */ int ite25273 = 0;
  if(x15321) {
    ite25273 = x15325;
  } else {
    
    ite25273 = 0;
  };
  int x23122 = ite25273;
  /* VAR */ int ite25280 = 0;
  if(x23122) {
    ite25280 = x14323;
  } else {
    
    ite25280 = 0;
  };
  int x23124 = ite25280;
  /* VAR */ int ite25287 = 0;
  if(x23124) {
    ite25287 = x14326;
  } else {
    
    ite25287 = 0;
  };
  int x23126 = ite25287;
  return x23126; 
}

int x32113(void* x6559) {
  int x6560 = g_direct_hash(x6559);
  return x6560; 
}

int x32116(void* x6562, void* x6563) {
  int x6564 = g_direct_equal(x6562, x6563);
  return x6564; 
}

int x32123(void* x6569) {
  int x6570 = g_direct_hash(x6569);
  return x6570; 
}

int x32126(void* x6572, void* x6573) {
  int x6574 = g_direct_equal(x6572, x6573);
  return x6574; 
}

int x32188(struct AGGRecord_Q16GRPRecord2* x240, struct AGGRecord_Q16GRPRecord2* x241) {
  double* x242 = x240->aggs;
  double x243 = x242[0];
  double* x244 = x241->aggs;
  double x245 = x244[0];
  int x246 = x243<(x245);
  /* VAR */ int ite23212 = 0;
  if(x246) {
    ite23212 = 1;
  } else {
    
    double x23214 = x242[0];
    double x23215 = x244[0];
    int x23216 = x23214>(x23215);
    /* VAR */ int ite23218 = 0;
    if(x23216) {
      ite23218 = -1;
    } else {
      
      struct Q16GRPRecord2* x23220 = x240->key;
      char* x23221 = x23220->P_BRAND;
      struct Q16GRPRecord2* x23222 = x241->key;
      char* x23223 = x23222->P_BRAND;
      int x23224 = strcmp(x23221, x23223);
      /* VAR */ int x23225 = x23224;
      int x23226 = x23225;
      int x23227 = x23226==(0);
      if(x23227) {
        char* x258 = x23220->P_TYPE;
        char* x259 = x23222->P_TYPE;
        int x17428 = strcmp(x258, x259);
        x23225 = x17428;
        int x262 = x23225;
        int x263 = x262==(0);
        if(x263) {
          int x264 = x23220->P_SIZE;
          int x265 = x23222->P_SIZE;
          int x266 = x264-(x265);
          x23225 = x266;
        };
      };
      int x23240 = x23225;
      ite23218 = x23240;
    };
    int x23217 = ite23218;
    ite23212 = x23217;
  };
  int x272 = ite23212;
  return x272; 
}

int x8448(void* x8442, void* x8443, void* x8444) {
  struct AGGRecord_Q16GRPRecord2** x8445 = (struct AGGRecord_Q16GRPRecord2**){x8444};
  struct AGGRecord_Q16GRPRecord2* x8446 = (struct AGGRecord_Q16GRPRecord2*){x8443};
  pointer_assign(x8445, x8446);
  return 1; 
}
