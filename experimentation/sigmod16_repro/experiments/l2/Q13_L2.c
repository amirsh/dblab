#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct ORDERSRecord;
  struct AGGRecord_Int;
  struct Q13IntRecord;
  struct CUSTOMERRecord;
  
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
  
  struct AGGRecord_Int {
  int key;
  double* aggs;
  };
  
  struct Q13IntRecord {
  int count;
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
  
  


int x14507(int x5419);

int x14509(int x5424, int x5425);

int x14639(struct AGGRecord_Int* x174, struct AGGRecord_Int* x175);

int x5610(void* x5604, void* x5605, void* x5606);
/* GLOBAL VARS */

struct timeval x2627;
int main(int argc, char** argv) {
  FILE* x2977 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x2978 = 0;
  int x2979 = x2978;
  int* x2980 = &x2979;
  int x2981 = fscanf(x2977, "%d", x2980);
  pclose(x2977);
  struct CUSTOMERRecord* x3833 = (struct CUSTOMERRecord*)malloc(x2979 * sizeof(struct CUSTOMERRecord));
  memset(x3833, 0, x2979 * sizeof(struct CUSTOMERRecord));
  int x2985 = O_RDONLY;
  int x2986 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x2985);
  struct stat x2987 = (struct stat){0};
  /* VAR */ struct stat x2988 = x2987;
  struct stat x2989 = x2988;
  struct stat* x2990 = &x2989;
  int x2991 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x2990);
  int x2993 = PROT_READ;
  int x2994 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x2990->st_size), x2993, x2994, x2986, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite12099 = 0;
    if((x5<(x2979))) {
      char x13918 = *x3;
      ite12099 = (x13918!=('\0'));
    } else {
      
      ite12099 = 0;
    };
    int x11294 = ite12099;
    if (!(x11294)) break; 
    
    /* VAR */ int x3002 = 0;
    int x3003 = x3002;
    int* x3004 = &x3003;
    char* x3005 = strntoi_unchecked(x3, x3004);
    x3 = x3005;
    char* x3857 = (char*)malloc(26 * sizeof(char));
    memset(x3857, 0, 26 * sizeof(char));
    /* VAR */ char* x3008 = x3;
    while(1) {
      
      char x3009 = *x3;
      /* VAR */ int ite12118 = 0;
      if((x3009!=('|'))) {
        char x13936 = *x3;
        ite12118 = (x13936!=('\n'));
      } else {
        
        ite12118 = 0;
      };
      int x11306 = ite12118;
      if (!(x11306)) break; 
      
      x3 += 1;
    };
    char* x3016 = x3008;
    int x3017 = x3 - x3016;
    char* x3018 = x3008;
    char* x3019 = strncpy(x3857, x3018, x3017);
    x3 += 1;
    char* x3875 = (char*)malloc(41 * sizeof(char));
    memset(x3875, 0, 41 * sizeof(char));
    /* VAR */ char* x3027 = x3;
    while(1) {
      
      char x3028 = *x3;
      /* VAR */ int ite12141 = 0;
      if((x3028!=('|'))) {
        char x13958 = *x3;
        ite12141 = (x13958!=('\n'));
      } else {
        
        ite12141 = 0;
      };
      int x11322 = ite12141;
      if (!(x11322)) break; 
      
      x3 += 1;
    };
    char* x3035 = x3027;
    int x3036 = x3 - x3035;
    char* x3037 = x3027;
    char* x3038 = strncpy(x3875, x3037, x3036);
    x3 += 1;
    /* VAR */ int x3045 = 0;
    int x3046 = x3045;
    int* x3047 = &x3046;
    char* x3048 = strntoi_unchecked(x3, x3047);
    x3 = x3048;
    char* x3898 = (char*)malloc(16 * sizeof(char));
    memset(x3898, 0, 16 * sizeof(char));
    /* VAR */ char* x3051 = x3;
    while(1) {
      
      char x3052 = *x3;
      /* VAR */ int ite12169 = 0;
      if((x3052!=('|'))) {
        char x13985 = *x3;
        ite12169 = (x13985!=('\n'));
      } else {
        
        ite12169 = 0;
      };
      int x11343 = ite12169;
      if (!(x11343)) break; 
      
      x3 += 1;
    };
    char* x3059 = x3051;
    int x3060 = x3 - x3059;
    char* x3061 = x3051;
    char* x3062 = strncpy(x3898, x3061, x3060);
    x3 += 1;
    /* VAR */ double x3069 = 0.0;
    double x3070 = x3069;
    double* x3071 = &x3070;
    char* x3072 = strntod_unchecked(x3, x3071);
    x3 = x3072;
    char* x3921 = (char*)malloc(11 * sizeof(char));
    memset(x3921, 0, 11 * sizeof(char));
    /* VAR */ char* x3075 = x3;
    while(1) {
      
      char x3076 = *x3;
      /* VAR */ int ite12197 = 0;
      if((x3076!=('|'))) {
        char x14012 = *x3;
        ite12197 = (x14012!=('\n'));
      } else {
        
        ite12197 = 0;
      };
      int x11364 = ite12197;
      if (!(x11364)) break; 
      
      x3 += 1;
    };
    char* x3083 = x3075;
    int x3084 = x3 - x3083;
    char* x3085 = x3075;
    char* x3086 = strncpy(x3921, x3085, x3084);
    x3 += 1;
    char* x3939 = (char*)malloc(118 * sizeof(char));
    memset(x3939, 0, 118 * sizeof(char));
    /* VAR */ char* x3094 = x3;
    while(1) {
      
      char x3095 = *x3;
      /* VAR */ int ite12220 = 0;
      if((x3095!=('|'))) {
        char x14034 = *x3;
        ite12220 = (x14034!=('\n'));
      } else {
        
        ite12220 = 0;
      };
      int x11380 = ite12220;
      if (!(x11380)) break; 
      
      x3 += 1;
    };
    char* x3102 = x3094;
    int x3103 = x3 - x3102;
    char* x3104 = x3094;
    char* x3105 = strncpy(x3939, x3104, x3103);
    x3 += 1;
    struct CUSTOMERRecord* x4386 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x4386, 0, 1 * sizeof(struct CUSTOMERRecord));
    x4386->C_CUSTKEY = x3003; x4386->C_NAME = x3857; x4386->C_ADDRESS = x3875; x4386->C_NATIONKEY = x3046; x4386->C_PHONE = x3898; x4386->C_ACCTBAL = x3070; x4386->C_MKTSEGMENT = x3921; x4386->C_COMMENT = x3939;
    int x53 = x4;
    struct CUSTOMERRecord x3959 = *x4386;
    *(x3833 + x53) = x3959;
    struct CUSTOMERRecord* x3961 = &(x3833[x53]);
    x4386 = x3961;
    int x55 = x4;
    x4 = (x55+(1));
  };
  FILE* x3118 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x3119 = 0;
  int x3120 = x3119;
  int* x3121 = &x3120;
  int x3122 = fscanf(x3118, "%d", x3121);
  pclose(x3118);
  struct ORDERSRecord* x3972 = (struct ORDERSRecord*)malloc(x3120 * sizeof(struct ORDERSRecord));
  memset(x3972, 0, x3120 * sizeof(struct ORDERSRecord));
  int x3126 = O_RDONLY;
  int x3127 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x3126);
  /* VAR */ struct stat x3128 = x2987;
  struct stat x3129 = x3128;
  struct stat* x3130 = &x3129;
  int x3131 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x3130);
  int x3133 = PROT_READ;
  int x3134 = MAP_PRIVATE;
  char* x61 = mmap(NULL, (x3130->st_size), x3133, x3134, x3127, 0);
  /* VAR */ int x62 = 0;
  while(1) {
    
    int x63 = x62;
    /* VAR */ int ite12270 = 0;
    if((x63<(x3120))) {
      char x14083 = *x61;
      ite12270 = (x14083!=('\0'));
    } else {
      
      ite12270 = 0;
    };
    int x11423 = ite12270;
    if (!(x11423)) break; 
    
    /* VAR */ int x3142 = 0;
    int x3143 = x3142;
    int* x3144 = &x3143;
    char* x3145 = strntoi_unchecked(x61, x3144);
    x61 = x3145;
    /* VAR */ int x3147 = 0;
    int x3148 = x3147;
    int* x3149 = &x3148;
    char* x3150 = strntoi_unchecked(x61, x3149);
    x61 = x3150;
    char x3152 = *x61;
    /* VAR */ char x3153 = x3152;
    x61 += 1;
    x61 += 1;
    char x3156 = x3153;
    /* VAR */ double x3157 = 0.0;
    double x3158 = x3157;
    double* x3159 = &x3158;
    char* x3160 = strntod_unchecked(x61, x3159);
    x61 = x3160;
    /* VAR */ int x3162 = 0;
    int x3163 = x3162;
    int* x3164 = &x3163;
    char* x3165 = strntoi_unchecked(x61, x3164);
    x61 = x3165;
    /* VAR */ int x3167 = 0;
    int x3168 = x3167;
    int* x3169 = &x3168;
    char* x3170 = strntoi_unchecked(x61, x3169);
    x61 = x3170;
    /* VAR */ int x3172 = 0;
    int x3173 = x3172;
    int* x3174 = &x3173;
    char* x3175 = strntoi_unchecked(x61, x3174);
    x61 = x3175;
    char* x4029 = (char*)malloc(16 * sizeof(char));
    memset(x4029, 0, 16 * sizeof(char));
    /* VAR */ char* x3182 = x61;
    while(1) {
      
      char x3183 = *x61;
      /* VAR */ int ite12323 = 0;
      if((x3183!=('|'))) {
        char x14135 = *x61;
        ite12323 = (x14135!=('\n'));
      } else {
        
        ite12323 = 0;
      };
      int x11469 = ite12323;
      if (!(x11469)) break; 
      
      x61 += 1;
    };
    char* x3190 = x3182;
    int x3191 = x61 - x3190;
    char* x3192 = x3182;
    char* x3193 = strncpy(x4029, x3192, x3191);
    x61 += 1;
    char* x4047 = (char*)malloc(16 * sizeof(char));
    memset(x4047, 0, 16 * sizeof(char));
    /* VAR */ char* x3201 = x61;
    while(1) {
      
      char x3202 = *x61;
      /* VAR */ int ite12346 = 0;
      if((x3202!=('|'))) {
        char x14157 = *x61;
        ite12346 = (x14157!=('\n'));
      } else {
        
        ite12346 = 0;
      };
      int x11485 = ite12346;
      if (!(x11485)) break; 
      
      x61 += 1;
    };
    char* x3209 = x3201;
    int x3210 = x61 - x3209;
    char* x3211 = x3201;
    char* x3212 = strncpy(x4047, x3211, x3210);
    x61 += 1;
    /* VAR */ int x3219 = 0;
    int x3220 = x3219;
    int* x3221 = &x3220;
    char* x3222 = strntoi_unchecked(x61, x3221);
    x61 = x3222;
    char* x4070 = (char*)malloc(80 * sizeof(char));
    memset(x4070, 0, 80 * sizeof(char));
    /* VAR */ char* x3225 = x61;
    while(1) {
      
      char x3226 = *x61;
      /* VAR */ int ite12374 = 0;
      if((x3226!=('|'))) {
        char x14184 = *x61;
        ite12374 = (x14184!=('\n'));
      } else {
        
        ite12374 = 0;
      };
      int x11506 = ite12374;
      if (!(x11506)) break; 
      
      x61 += 1;
    };
    char* x3233 = x3225;
    int x3234 = x61 - x3233;
    char* x3235 = x3225;
    char* x3236 = strncpy(x4070, x3235, x3234);
    x61 += 1;
    struct ORDERSRecord* x4519 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x4519, 0, 1 * sizeof(struct ORDERSRecord));
    x4519->O_ORDERKEY = x3143; x4519->O_CUSTKEY = x3148; x4519->O_ORDERSTATUS = x3156; x4519->O_TOTALPRICE = x3158; x4519->O_ORDERDATE = (((x3163*(10000))+((x3168*(100))))+(x3173)); x4519->O_ORDERPRIORITY = x4029; x4519->O_CLERK = x4047; x4519->O_SHIPPRIORITY = x3220; x4519->O_COMMENT = x4070;
    int x97 = x62;
    struct ORDERSRecord x4090 = *x4519;
    *(x3972 + x97) = x4090;
    struct ORDERSRecord* x4092 = &(x3972[x97]);
    x4519 = x4092;
    int x99 = x62;
    x62 = (x99+(1));
  };
  struct Q13IntRecord* x4097 = (struct Q13IntRecord*)malloc(x2979 * sizeof(struct Q13IntRecord));
  memset(x4097, 0, x2979 * sizeof(struct Q13IntRecord));
  int x105 = 0;
  for(; x105 < x2979 ; x105 += 1) {
    
    struct Q13IntRecord* x14221 = (struct Q13IntRecord*)malloc(1 * sizeof(struct Q13IntRecord));
    memset(x14221, 0, 1 * sizeof(struct Q13IntRecord));
    x14221->count = 0;
    struct Q13IntRecord x14224 = *x14221;
    *(x4097 + x105) = x14224;
    struct Q13IntRecord* x14226 = &(x4097[x105]);
    x14221 = x14226;
  };
  int x111 = 0;
  for(; x111 < 1 ; x111 += 1) {
    
    GHashTable* x14513 = g_hash_table_new(x14507, x14509);
    /* VAR */ int x14514 = 0;
    double** x14515 = (double**)malloc(48000000 * sizeof(double*));
    memset(x14515, 0, 48000000 * sizeof(double*));
    /* VAR */ int x14516 = 0;
    while(1) {
      
      int x2501 = x14516;
      if (!((x2501<(48000000)))) break; 
      
      int x2503 = x14516;
      double* x4118 = (double*)malloc(1 * sizeof(double));
      memset(x4118, 0, 1 * sizeof(double));
      *(x14515 + x2503) = x4118;
      int x2506 = x14516;
      x14516 = (x2506+(1));
    };
    /* VAR */ int x14526 = 0;
    struct AGGRecord_Int* x14527 = (struct AGGRecord_Int*)malloc(48000000 * sizeof(struct AGGRecord_Int));
    memset(x14527, 0, 48000000 * sizeof(struct AGGRecord_Int));
    /* VAR */ int x14528 = 0;
    while(1) {
      
      int x2513 = x14528;
      if (!((x2513<(48000000)))) break; 
      
      int x2515 = x14528;
      double* x2516 = x14515[x2515];
      struct AGGRecord_Int* x4566 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
      memset(x4566, 0, 1 * sizeof(struct AGGRecord_Int));
      x4566->key = 0; x4566->aggs = x2516;
      struct AGGRecord_Int x4132 = *x4566;
      *(x14527 + x2515) = x4132;
      struct AGGRecord_Int* x4134 = &(x14527[x2515]);
      x4566 = x4134;
      int x2519 = x14528;
      x14528 = (x2519+(1));
    };
    /* VAR */ struct timeval x14544 = x2627;
    struct timeval x14545 = x14544;
    /* VAR */ struct timeval x14546 = x2627;
    struct timeval x14547 = x14546;
    /* VAR */ struct timeval x14548 = x2627;
    struct timeval x14549 = x14548;
    struct timeval* x14550 = &x14547;
    gettimeofday(x14550, NULL);
    /* VAR */ int x14552 = 0;
    while(1) {
      
      int x14554 = x14552;
      if (!((x14554<(x3120)))) break; 
      
      int x1019 = x14552;
      struct ORDERSRecord* x140 = &(x3972[x1019]);
      char* x142 = x140->O_COMMENT;
      char* x9403 = pointer_add(x142, 0);
      char* x9404 = strstr(x9403, "unusual");
      char* x9405 = NULL;
      /* VAR */ int ite11869 = 0;
      if((x9404==(x9405))) {
        ite11869 = -1;
      } else {
        
        int x11871 = str_subtract(x9404, x142);
        ite11869 = x11871;
      };
      int x9408 = ite11869;
      char* x9409 = pointer_add(x142, x9408);
      char* x9410 = strstr(x9409, "packages");
      char* x9411 = NULL;
      /* VAR */ int ite11880 = 0;
      if((x9410==(x9411))) {
        ite11880 = -1;
      } else {
        
        int x11882 = str_subtract(x9410, x142);
        ite11880 = x11882;
      };
      int x9414 = ite11880;
      /* VAR */ int ite12782 = 0;
      if((x9408!=(-1))) {
        ite12782 = (x9414!=(-1));
      } else {
        
        ite12782 = 0;
      };
      int x11888 = ite12782;
      int x148 = !(x11888);
      if(x148) {
        struct Q13IntRecord* x153 = &(x4097[(x140->O_CUSTKEY)]);
        int x154 = x153->count;
        x153->count = (x154+(1));
      };
      int x1039 = x14552;
      x14552 = (x1039+(1));
    };
    /* VAR */ int x14599 = 0;
    int* x14678 = &(x14639);
    GTree* x14679 = g_tree_new(x14678);
    /* VAR */ int x14680 = 0;
    /* VAR */ int x14681 = 0;
    while(1) {
      
      int x14683 = x14599;
      if (!((x14683<(x2979)))) break; 
      
      int x1101 = x14599;
      struct Q13IntRecord* x207 = &(x4097[x1101]);
      int x209 = x207->count;
      void* x6045 = g_hash_table_lookup(x14513, x209);
      /* VAR */ struct AGGRecord_Int* ite11990 = 0;
      if((x6045==(NULL))) {
        int x11991 = x14514;
        double* x11992 = x14515[x11991];
        int x11993 = x14514;
        x14514 = (x11993+(1));
        int x11996 = x14526;
        struct AGGRecord_Int* x11997 = &(x14527[x11996]);
        x11997->key = x209;
        x11997->aggs = x11992;
        int x12000 = x14526;
        x14526 = (x12000+(1));
        g_hash_table_insert(x14513, x209, x11997);
        ite11990 = x11997;
      } else {
        
        ite11990 = x6045;
      };
      struct AGGRecord_Int* x5568 = ite11990;
      double* x214 = x5568->aggs;
      double x228 = x214[0];
      *x214 = (x228+(1.0));
      int x1130 = x14599;
      x14599 = (x1130+(1));
    };
    GList* x14720 = g_hash_table_get_keys(x14513);
    /* VAR */ GList* x14721 = x14720;
    int x14722 = g_hash_table_size(x14513);
    int x10500 = 0;
    for(; x10500 < x14722 ; x10500 += 1) {
      
      GList* x10501 = x14721;
      void* x10502 = g_list_nth_data(x10501, 0);
      GList* x10503 = g_list_next(x10501);
      x14721 = x10503;
      void* x10505 = g_hash_table_lookup(x14513, x10502);
      struct AGGRecord_Int* x10507 = (struct AGGRecord_Int*){x10505};
      g_tree_insert(x14679, x10507, x10507);
    };
    while(1) {
      
      int x1139 = x14680;
      int x248 = !(x1139);
      /* VAR */ int ite12947 = 0;
      if(x248) {
        int x14747 = g_tree_nnodes(x14679);
        ite12947 = (x14747!=(0));
      } else {
        
        ite12947 = 0;
      };
      int x12045 = ite12947;
      if (!(x12045)) break; 
      
      void* x5603 = NULL;
      void** x5611 = &(x5603);
      g_tree_foreach(x14679, x5610, x5611);
      struct AGGRecord_Int* x5613 = (struct AGGRecord_Int*){x5603};
      int x5614 = g_tree_remove(x14679, x5613);
      if(0) {
        x14680 = 1;
      } else {
        
        double x263 = ((double*) { x5613->aggs })[0];
        printf("%d|%.0f\n", (x5613->key), x263);
        int x1156 = x14681;
        x14681 = (x1156+(1));
      };
    };
    int x14774 = x14681;
    printf("(%d rows)\n", x14774);
    struct timeval* x14776 = &x14549;
    gettimeofday(x14776, NULL);
    struct timeval* x14778 = &x14545;
    struct timeval* x14779 = &x14549;
    struct timeval* x14780 = &x14547;
    long x14781 = timeval_subtract(x14778, x14779, x14780);
    printf("Generated code run in %ld milliseconds.\n", x14781);
  };
}
/* ----------- FUNCTIONS ----------- */
int x14507(int x5419) {
  return x5419; 
}

int x14509(int x5424, int x5425) {
  return (x5424==(x5425)); 
}

int x14639(struct AGGRecord_Int* x174, struct AGGRecord_Int* x175) {
  double* x176 = x174->aggs;
  double x177 = x176[0];
  double* x178 = x175->aggs;
  double x179 = x178[0];
  /* VAR */ int ite11948 = 0;
  if((x177<(x179))) {
    ite11948 = 1;
  } else {
    
    double x11950 = x176[0];
    double x11951 = x178[0];
    /* VAR */ int ite11954 = 0;
    if((x11950>(x11951))) {
      ite11954 = -1;
    } else {
      
      int x11956 = x174->key;
      int x11957 = x175->key;
      /* VAR */ int ite11960 = 0;
      if((x11956<(x11957))) {
        ite11960 = 1;
      } else {
        
        /* VAR */ int ite11964 = 0;
        if((x11956>(x11957))) {
          ite11964 = -1;
        } else {
          
          ite11964 = 0;
        };
        int x11963 = ite11964;
        ite11960 = x11963;
      };
      int x11959 = ite11960;
      ite11954 = x11959;
    };
    int x11953 = ite11954;
    ite11948 = x11953;
  };
  int x191 = ite11948;
  return x191; 
}

int x5610(void* x5604, void* x5605, void* x5606) {
  pointer_assign(((struct AGGRecord_Int**){x5606}), ((struct AGGRecord_Int*){x5605}));
  return 1; 
}
