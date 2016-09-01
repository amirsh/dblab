#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct AGGRecord_OptimalString;
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
  
  


int x16792(char* x6209);

int x16810(char* x6214, char* x6215);

int x16816(void* x5200);

int x16819(void* x5203, void* x5204);

int x16872(struct AGGRecord_OptimalString* x139, struct AGGRecord_OptimalString* x140);

int x6411(void* x6405, void* x6406, void* x6407);
/* GLOBAL VARS */

struct timeval x2640;
int main(int argc, char** argv) {
  FILE* x2974 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x2975 = 0;
  int x2976 = x2975;
  int* x2977 = &x2976;
  int x2978 = fscanf(x2974, "%d", x2977);
  pclose(x2974);
  struct LINEITEMRecord* x3920 = (struct LINEITEMRecord*)malloc(x2976 * sizeof(struct LINEITEMRecord));
  memset(x3920, 0, x2976 * sizeof(struct LINEITEMRecord));
  int x2982 = O_RDONLY;
  int x2983 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x2982);
  struct stat x2984 = (struct stat){0};
  /* VAR */ struct stat x2985 = x2984;
  struct stat x2986 = x2985;
  struct stat* x2987 = &x2986;
  int x2988 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x2987);
  int x2990 = PROT_READ;
  int x2991 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x2987->st_size), x2990, x2991, x2983, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite14384 = 0;
    if((x5<(x2976))) {
      char x16189 = *x3;
      ite14384 = (x16189!=('\0'));
    } else {
      
      ite14384 = 0;
    };
    int x13560 = ite14384;
    if (!(x13560)) break; 
    
    /* VAR */ int x2999 = 0;
    int x3000 = x2999;
    int* x3001 = &x3000;
    char* x3002 = strntoi_unchecked(x3, x3001);
    x3 = x3002;
    /* VAR */ int x3004 = 0;
    int x3005 = x3004;
    int* x3006 = &x3005;
    char* x3007 = strntoi_unchecked(x3, x3006);
    x3 = x3007;
    /* VAR */ int x3009 = 0;
    int x3010 = x3009;
    int* x3011 = &x3010;
    char* x3012 = strntoi_unchecked(x3, x3011);
    x3 = x3012;
    /* VAR */ int x3014 = 0;
    int x3015 = x3014;
    int* x3016 = &x3015;
    char* x3017 = strntoi_unchecked(x3, x3016);
    x3 = x3017;
    /* VAR */ double x3019 = 0.0;
    double x3020 = x3019;
    double* x3021 = &x3020;
    char* x3022 = strntod_unchecked(x3, x3021);
    x3 = x3022;
    /* VAR */ double x3024 = 0.0;
    double x3025 = x3024;
    double* x3026 = &x3025;
    char* x3027 = strntod_unchecked(x3, x3026);
    x3 = x3027;
    /* VAR */ double x3029 = 0.0;
    double x3030 = x3029;
    double* x3031 = &x3030;
    char* x3032 = strntod_unchecked(x3, x3031);
    x3 = x3032;
    /* VAR */ double x3034 = 0.0;
    double x3035 = x3034;
    double* x3036 = &x3035;
    char* x3037 = strntod_unchecked(x3, x3036);
    x3 = x3037;
    char x3039 = *x3;
    /* VAR */ char x3040 = x3039;
    x3 += 1;
    x3 += 1;
    char x3043 = x3040;
    char x3044 = *x3;
    /* VAR */ char x3045 = x3044;
    x3 += 1;
    x3 += 1;
    char x3048 = x3045;
    /* VAR */ int x3049 = 0;
    int x3050 = x3049;
    int* x3051 = &x3050;
    char* x3052 = strntoi_unchecked(x3, x3051);
    x3 = x3052;
    /* VAR */ int x3054 = 0;
    int x3055 = x3054;
    int* x3056 = &x3055;
    char* x3057 = strntoi_unchecked(x3, x3056);
    x3 = x3057;
    /* VAR */ int x3059 = 0;
    int x3060 = x3059;
    int* x3061 = &x3060;
    char* x3062 = strntoi_unchecked(x3, x3061);
    x3 = x3062;
    /* VAR */ int x3068 = 0;
    int x3069 = x3068;
    int* x3070 = &x3069;
    char* x3071 = strntoi_unchecked(x3, x3070);
    x3 = x3071;
    /* VAR */ int x3073 = 0;
    int x3074 = x3073;
    int* x3075 = &x3074;
    char* x3076 = strntoi_unchecked(x3, x3075);
    x3 = x3076;
    /* VAR */ int x3078 = 0;
    int x3079 = x3078;
    int* x3080 = &x3079;
    char* x3081 = strntoi_unchecked(x3, x3080);
    x3 = x3081;
    /* VAR */ int x3087 = 0;
    int x3088 = x3087;
    int* x3089 = &x3088;
    char* x3090 = strntoi_unchecked(x3, x3089);
    x3 = x3090;
    /* VAR */ int x3092 = 0;
    int x3093 = x3092;
    int* x3094 = &x3093;
    char* x3095 = strntoi_unchecked(x3, x3094);
    x3 = x3095;
    /* VAR */ int x3097 = 0;
    int x3098 = x3097;
    int* x3099 = &x3098;
    char* x3100 = strntoi_unchecked(x3, x3099);
    x3 = x3100;
    char* x4046 = (char*)malloc(26 * sizeof(char));
    memset(x4046, 0, 26 * sizeof(char));
    /* VAR */ char* x3107 = x3;
    while(1) {
      
      char x3108 = *x3;
      /* VAR */ int ite14505 = 0;
      if((x3108!=('|'))) {
        char x16309 = *x3;
        ite14505 = (x16309!=('\n'));
      } else {
        
        ite14505 = 0;
      };
      int x13674 = ite14505;
      if (!(x13674)) break; 
      
      x3 += 1;
    };
    char* x3115 = x3107;
    int x3116 = x3 - x3115;
    char* x3117 = x3107;
    char* x3118 = strncpy(x4046, x3117, x3116);
    x3 += 1;
    char* x4064 = (char*)malloc(11 * sizeof(char));
    memset(x4064, 0, 11 * sizeof(char));
    /* VAR */ char* x3126 = x3;
    while(1) {
      
      char x3127 = *x3;
      /* VAR */ int ite14528 = 0;
      if((x3127!=('|'))) {
        char x16331 = *x3;
        ite14528 = (x16331!=('\n'));
      } else {
        
        ite14528 = 0;
      };
      int x13690 = ite14528;
      if (!(x13690)) break; 
      
      x3 += 1;
    };
    char* x3134 = x3126;
    int x3135 = x3 - x3134;
    char* x3136 = x3126;
    char* x3137 = strncpy(x4064, x3136, x3135);
    x3 += 1;
    char* x4082 = (char*)malloc(45 * sizeof(char));
    memset(x4082, 0, 45 * sizeof(char));
    /* VAR */ char* x3145 = x3;
    while(1) {
      
      char x3146 = *x3;
      /* VAR */ int ite14551 = 0;
      if((x3146!=('|'))) {
        char x16353 = *x3;
        ite14551 = (x16353!=('\n'));
      } else {
        
        ite14551 = 0;
      };
      int x13706 = ite14551;
      if (!(x13706)) break; 
      
      x3 += 1;
    };
    char* x3153 = x3145;
    int x3154 = x3 - x3153;
    char* x3155 = x3145;
    char* x3156 = strncpy(x4082, x3155, x3154);
    x3 += 1;
    struct LINEITEMRecord* x4573 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x4573, 0, 1 * sizeof(struct LINEITEMRecord));
    x4573->L_ORDERKEY = x3000; x4573->L_PARTKEY = x3005; x4573->L_SUPPKEY = x3010; x4573->L_LINENUMBER = x3015; x4573->L_QUANTITY = x3020; x4573->L_EXTENDEDPRICE = x3025; x4573->L_DISCOUNT = x3030; x4573->L_TAX = x3035; x4573->L_RETURNFLAG = x3043; x4573->L_LINESTATUS = x3048; x4573->L_SHIPDATE = (((x3050*(10000))+((x3055*(100))))+(x3060)); x4573->L_COMMITDATE = (((x3069*(10000))+((x3074*(100))))+(x3079)); x4573->L_RECEIPTDATE = (((x3088*(10000))+((x3093*(100))))+(x3098)); x4573->L_SHIPINSTRUCT = x4046; x4573->L_SHIPMODE = x4064; x4573->L_COMMENT = x4082;
    int x47 = x4;
    struct LINEITEMRecord x4102 = *x4573;
    *(x3920 + x47) = x4102;
    struct LINEITEMRecord* x4104 = &(x3920[x47]);
    x4573 = x4104;
    int x49 = x4;
    x4 = (x49+(1));
  };
  FILE* x3169 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x3170 = 0;
  int x3171 = x3170;
  int* x3172 = &x3171;
  int x3173 = fscanf(x3169, "%d", x3172);
  pclose(x3169);
  struct ORDERSRecord* x4115 = (struct ORDERSRecord*)malloc(x3171 * sizeof(struct ORDERSRecord));
  memset(x4115, 0, x3171 * sizeof(struct ORDERSRecord));
  int x3177 = O_RDONLY;
  int x3178 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x3177);
  /* VAR */ struct stat x3179 = x2984;
  struct stat x3180 = x3179;
  struct stat* x3181 = &x3180;
  int x3182 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x3181);
  int x3184 = PROT_READ;
  int x3185 = MAP_PRIVATE;
  char* x55 = mmap(NULL, (x3181->st_size), x3184, x3185, x3178, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    /* VAR */ int ite14601 = 0;
    if((x57<(x3171))) {
      char x16402 = *x55;
      ite14601 = (x16402!=('\0'));
    } else {
      
      ite14601 = 0;
    };
    int x13749 = ite14601;
    if (!(x13749)) break; 
    
    /* VAR */ int x3193 = 0;
    int x3194 = x3193;
    int* x3195 = &x3194;
    char* x3196 = strntoi_unchecked(x55, x3195);
    x55 = x3196;
    /* VAR */ int x3198 = 0;
    int x3199 = x3198;
    int* x3200 = &x3199;
    char* x3201 = strntoi_unchecked(x55, x3200);
    x55 = x3201;
    char x3203 = *x55;
    /* VAR */ char x3204 = x3203;
    x55 += 1;
    x55 += 1;
    char x3207 = x3204;
    /* VAR */ double x3208 = 0.0;
    double x3209 = x3208;
    double* x3210 = &x3209;
    char* x3211 = strntod_unchecked(x55, x3210);
    x55 = x3211;
    /* VAR */ int x3213 = 0;
    int x3214 = x3213;
    int* x3215 = &x3214;
    char* x3216 = strntoi_unchecked(x55, x3215);
    x55 = x3216;
    /* VAR */ int x3218 = 0;
    int x3219 = x3218;
    int* x3220 = &x3219;
    char* x3221 = strntoi_unchecked(x55, x3220);
    x55 = x3221;
    /* VAR */ int x3223 = 0;
    int x3224 = x3223;
    int* x3225 = &x3224;
    char* x3226 = strntoi_unchecked(x55, x3225);
    x55 = x3226;
    char* x4172 = (char*)malloc(16 * sizeof(char));
    memset(x4172, 0, 16 * sizeof(char));
    /* VAR */ char* x3233 = x55;
    while(1) {
      
      char x3234 = *x55;
      /* VAR */ int ite14654 = 0;
      if((x3234!=('|'))) {
        char x16454 = *x55;
        ite14654 = (x16454!=('\n'));
      } else {
        
        ite14654 = 0;
      };
      int x13795 = ite14654;
      if (!(x13795)) break; 
      
      x55 += 1;
    };
    char* x3241 = x3233;
    int x3242 = x55 - x3241;
    char* x3243 = x3233;
    char* x3244 = strncpy(x4172, x3243, x3242);
    x55 += 1;
    char* x4190 = (char*)malloc(16 * sizeof(char));
    memset(x4190, 0, 16 * sizeof(char));
    /* VAR */ char* x3252 = x55;
    while(1) {
      
      char x3253 = *x55;
      /* VAR */ int ite14677 = 0;
      if((x3253!=('|'))) {
        char x16476 = *x55;
        ite14677 = (x16476!=('\n'));
      } else {
        
        ite14677 = 0;
      };
      int x13811 = ite14677;
      if (!(x13811)) break; 
      
      x55 += 1;
    };
    char* x3260 = x3252;
    int x3261 = x55 - x3260;
    char* x3262 = x3252;
    char* x3263 = strncpy(x4190, x3262, x3261);
    x55 += 1;
    /* VAR */ int x3270 = 0;
    int x3271 = x3270;
    int* x3272 = &x3271;
    char* x3273 = strntoi_unchecked(x55, x3272);
    x55 = x3273;
    char* x4213 = (char*)malloc(80 * sizeof(char));
    memset(x4213, 0, 80 * sizeof(char));
    /* VAR */ char* x3276 = x55;
    while(1) {
      
      char x3277 = *x55;
      /* VAR */ int ite14705 = 0;
      if((x3277!=('|'))) {
        char x16503 = *x55;
        ite14705 = (x16503!=('\n'));
      } else {
        
        ite14705 = 0;
      };
      int x13832 = ite14705;
      if (!(x13832)) break; 
      
      x55 += 1;
    };
    char* x3284 = x3276;
    int x3285 = x55 - x3284;
    char* x3286 = x3276;
    char* x3287 = strncpy(x4213, x3286, x3285);
    x55 += 1;
    struct ORDERSRecord* x4706 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x4706, 0, 1 * sizeof(struct ORDERSRecord));
    x4706->O_ORDERKEY = x3194; x4706->O_CUSTKEY = x3199; x4706->O_ORDERSTATUS = x3207; x4706->O_TOTALPRICE = x3209; x4706->O_ORDERDATE = (((x3214*(10000))+((x3219*(100))))+(x3224)); x4706->O_ORDERPRIORITY = x4172; x4706->O_CLERK = x4190; x4706->O_SHIPPRIORITY = x3271; x4706->O_COMMENT = x4213;
    int x91 = x56;
    struct ORDERSRecord x4233 = *x4706;
    *(x4115 + x91) = x4233;
    struct ORDERSRecord* x4235 = &(x4115[x91]);
    x4706 = x4235;
    int x93 = x56;
    x56 = (x93+(1));
  };
  int x98 = 0;
  for(; x98 < 1 ; x98 += 1) {
    
    GHashTable* x16815 = g_hash_table_new(x16792, x16810);
    GHashTable* x16825 = g_hash_table_new(((void***){x16816}), ((int*){x16819}));
    /* VAR */ int x16826 = 0;
    double** x16827 = (double**)malloc(5 * sizeof(double*));
    memset(x16827, 0, 5 * sizeof(double*));
    /* VAR */ int x16828 = 0;
    while(1) {
      
      int x2517 = x16828;
      if (!((x2517<(5)))) break; 
      
      int x2519 = x16828;
      double* x4252 = (double*)malloc(1 * sizeof(double));
      memset(x4252, 0, 1 * sizeof(double));
      *(x16827 + x2519) = x4252;
      int x2522 = x16828;
      x16828 = (x2522+(1));
    };
    /* VAR */ int x16838 = 0;
    struct AGGRecord_OptimalString* x16839 = (struct AGGRecord_OptimalString*)malloc(5 * sizeof(struct AGGRecord_OptimalString));
    memset(x16839, 0, 5 * sizeof(struct AGGRecord_OptimalString));
    /* VAR */ int x16840 = 0;
    while(1) {
      
      int x2529 = x16840;
      if (!((x2529<(5)))) break; 
      
      int x2531 = x16840;
      double* x2532 = x16827[x2531];
      struct AGGRecord_OptimalString* x4742 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x4742, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      x4742->key = ""; x4742->aggs = x2532;
      struct AGGRecord_OptimalString x4266 = *x4742;
      *(x16839 + x2531) = x4266;
      struct AGGRecord_OptimalString* x4268 = &(x16839[x2531]);
      x4742 = x4268;
      int x2535 = x16840;
      x16840 = (x2535+(1));
    };
    /* VAR */ struct timeval x16856 = x2640;
    struct timeval x16857 = x16856;
    /* VAR */ struct timeval x16858 = x2640;
    struct timeval x16859 = x16858;
    /* VAR */ struct timeval x16860 = x2640;
    struct timeval x16861 = x16860;
    struct timeval* x16862 = &x16859;
    gettimeofday(x16862, NULL);
    /* VAR */ int x16864 = 0;
    /* VAR */ int x16865 = 0;
    int* x16878 = &(x16872);
    GTree* x16879 = g_tree_new(x16878);
    /* VAR */ int x16880 = 0;
    /* VAR */ int x16881 = 0;
    while(1) {
      
      int x16883 = x16865;
      if (!((x16883<(x2976)))) break; 
      
      int x1138 = x16865;
      struct LINEITEMRecord* x160 = &(x3920[x1138]);
      if(((x160->L_COMMITDATE)<((x160->L_RECEIPTDATE)))) {
        void* x5271 = (void*){(x160->L_ORDERKEY)};
        void* x5273 = g_hash_table_lookup(x16825, x5271);
        GList** x5274 = (GList**){x5273};
        GList** x5275 = NULL;
        /* VAR */ GList** ite14215 = 0;
        if((x5274==(x5275))) {
          GList** x14216 = malloc(8);
          GList* x14217 = NULL;
          pointer_assign(x14216, x14217);
          ite14215 = x14216;
        } else {
          
          ite14215 = x5274;
        };
        GList** x5280 = ite14215;
        GList* x5281 = *(x5280);
        GList* x5282 = g_list_prepend(x5281, ((void*){x160}));
        pointer_assign(x5280, x5282);
        g_hash_table_insert(x16825, x5271, ((void*){x5280}));
      };
      int x1147 = x16865;
      x16865 = (x1147+(1));
    };
    while(1) {
      
      int x16916 = x16864;
      if (!((x16916<(x3171)))) break; 
      
      int x1156 = x16864;
      struct ORDERSRecord* x179 = &(x4115[x1156]);
      int x181 = x179->O_ORDERDATE;
      if(((x181<(19931101))&((x181>=(19930801))))) {
        int x185 = x179->O_ORDERKEY;
        void* x5302 = g_hash_table_lookup(x16825, ((void*){x185}));
        GList** x5303 = (GList**){x5302};
        if((x5303!=(NULL))) {
          /* VAR */ struct LINEITEMRecord* x6898 = NULL;
          GList* x6899 = *(x5303);
          /* VAR */ GList* x6900 = x6899;
          while(1) {
            
            GList* x6901 = x6900;
            GList* x6902 = NULL;
            if (!((x6901!=(x6902)))) break; 
            
            GList* x6904 = x6900;
            void* x6905 = g_list_nth_data(x6904, 0);
            struct LINEITEMRecord* x6906 = (struct LINEITEMRecord*){x6905};
            GList* x6907 = x6900;
            GList* x6908 = g_list_next(x6907);
            x6900 = x6908;
            if((x185==((x6906->L_ORDERKEY)))) {
              x6898 = x6906;
              break;
            };
          };
          struct LINEITEMRecord* x6916 = x6898;
          if((x6916!=(NULL))) {
            char* x230 = x179->O_ORDERPRIORITY;
            void* x6921 = g_hash_table_lookup(x16815, x230);
            /* VAR */ struct AGGRecord_OptimalString* ite14275 = 0;
            if((x6921==(NULL))) {
              int x14276 = x16826;
              double* x14277 = x16827[x14276];
              int x14278 = x16826;
              x16826 = (x14278+(1));
              int x14281 = x16838;
              struct AGGRecord_OptimalString* x14282 = &(x16839[x14281]);
              x14282->key = x230;
              x14282->aggs = x14277;
              int x14285 = x16838;
              x16838 = (x14285+(1));
              g_hash_table_insert(x16815, x230, x14282);
              ite14275 = x14282;
            } else {
              
              ite14275 = x6921;
            };
            struct AGGRecord_OptimalString* x6369 = ite14275;
            double* x235 = x6369->aggs;
            double x249 = x235[0];
            *x235 = (x249+(1.0));
          };
        };
      };
      int x1235 = x16864;
      x16864 = (x1235+(1));
    };
    GList* x16989 = g_hash_table_get_keys(x16815);
    /* VAR */ GList* x16990 = x16989;
    int x16991 = g_hash_table_size(x16815);
    int x12657 = 0;
    for(; x12657 < x16991 ; x12657 += 1) {
      
      GList* x12658 = x16990;
      void* x12659 = g_list_nth_data(x12658, 0);
      GList* x12660 = g_list_next(x12658);
      x16990 = x12660;
      void* x12662 = g_hash_table_lookup(x16815, x12659);
      struct AGGRecord_OptimalString* x12664 = (struct AGGRecord_OptimalString*){x12662};
      g_tree_insert(x16879, x12664, x12664);
    };
    while(1) {
      
      int x1244 = x16880;
      int x272 = !(x1244);
      /* VAR */ int ite15225 = 0;
      if(x272) {
        int x17016 = g_tree_nnodes(x16879);
        ite15225 = (x17016!=(0));
      } else {
        
        ite15225 = 0;
      };
      int x14330 = ite15225;
      if (!(x14330)) break; 
      
      void* x6404 = NULL;
      void** x6412 = &(x6404);
      g_tree_foreach(x16879, x6411, x6412);
      struct AGGRecord_OptimalString* x6414 = (struct AGGRecord_OptimalString*){x6404};
      int x6415 = g_tree_remove(x16879, x6414);
      if(0) {
        x16880 = 1;
      } else {
        
        double x288 = ((double*) { x6414->aggs })[0];
        printf("%s|%.0f\n", (x6414->key), x288);
        int x1262 = x16881;
        x16881 = (x1262+(1));
      };
    };
    int x17043 = x16881;
    printf("(%d rows)\n", x17043);
    struct timeval* x17045 = &x16861;
    gettimeofday(x17045, NULL);
    struct timeval* x17047 = &x16857;
    struct timeval* x17048 = &x16861;
    struct timeval* x17049 = &x16859;
    long x17050 = timeval_subtract(x17047, x17048, x17049);
    printf("Generated code run in %ld milliseconds.\n", x17050);
  };
}
/* ----------- FUNCTIONS ----------- */
int x16792(char* x6209) {
  int x11312 = strlen(x6209);
  /* VAR */ int x10163 = 0;
  /* VAR */ int x10164 = 0;
  while(1) {
    
    int x10165 = x10163;
    if (!((x10165<(x11312)))) break; 
    
    int x10167 = x10164;
    int x10168 = x10163;
    char* x11320 = pointer_add(x6209, x10168);
    char x11321 = *(x11320);
    x10164 = (x10167+(x11321));
    int x10173 = x10163;
    x10163 = (x10173+(1));
  };
  int x10177 = x10164;
  return x10177; 
}

int x16810(char* x6214, char* x6215) {
  int x10181 = strcmp(x6214, x6215);
  int x10182 = !(x10181);
  return x10182; 
}

int x16816(void* x5200) {
  int x5201 = g_direct_hash(x5200);
  return x5201; 
}

int x16819(void* x5203, void* x5204) {
  int x5205 = g_direct_equal(x5203, x5204);
  return x5205; 
}

int x16872(struct AGGRecord_OptimalString* x139, struct AGGRecord_OptimalString* x140) {
  int x11396 = strcmp((x139->key), (x140->key));
  return x11396; 
}

int x6411(void* x6405, void* x6406, void* x6407) {
  pointer_assign(((struct AGGRecord_OptimalString**){x6407}), ((struct AGGRecord_OptimalString*){x6406}));
  return 1; 
}
