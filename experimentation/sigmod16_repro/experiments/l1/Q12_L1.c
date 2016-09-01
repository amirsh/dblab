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
  
  


int x19696(char* x6176);

int x19714(char* x6181, char* x6182);

int x19720(void* x5151);

int x19723(void* x5154, void* x5155);

int x19746(struct AGGRecord_OptimalString* x170, struct AGGRecord_OptimalString* x171);

int x6446(void* x6440, void* x6441, void* x6442);
/* GLOBAL VARS */

struct timeval x2498;
int main(int argc, char** argv) {
  FILE* x2887 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x2888 = 0;
  int x2889 = x2888;
  int* x2890 = &x2889;
  int x2891 = fscanf(x2887, "%d", x2890);
  pclose(x2887);
  struct LINEITEMRecord** x3863 = (struct LINEITEMRecord**)malloc(x2889 * sizeof(struct LINEITEMRecord*));
  memset(x3863, 0, x2889 * sizeof(struct LINEITEMRecord*));
  int x2895 = O_RDONLY;
  int x2896 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x2895);
  struct stat x2897 = (struct stat){0};
  /* VAR */ struct stat x2898 = x2897;
  struct stat x2899 = x2898;
  struct stat* x2900 = &x2899;
  int x2901 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x2900);
  size_t x2902 = x2900->st_size;
  int x2903 = PROT_READ;
  int x2904 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x2902, x2903, x2904, x2896, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x2889);
    /* VAR */ int ite15315 = 0;
    if(x6) {
      char x18950 = *x3;
      int x18951 = x18950!=('\0');
      ite15315 = x18951;
    } else {
      
      ite15315 = 0;
    };
    int x14337 = ite15315;
    if (!(x14337)) break; 
    
    /* VAR */ int x2912 = 0;
    int x2913 = x2912;
    int* x2914 = &x2913;
    char* x2915 = strntoi_unchecked(x3, x2914);
    x3 = x2915;
    /* VAR */ int x2917 = 0;
    int x2918 = x2917;
    int* x2919 = &x2918;
    char* x2920 = strntoi_unchecked(x3, x2919);
    x3 = x2920;
    /* VAR */ int x2922 = 0;
    int x2923 = x2922;
    int* x2924 = &x2923;
    char* x2925 = strntoi_unchecked(x3, x2924);
    x3 = x2925;
    /* VAR */ int x2927 = 0;
    int x2928 = x2927;
    int* x2929 = &x2928;
    char* x2930 = strntoi_unchecked(x3, x2929);
    x3 = x2930;
    /* VAR */ double x2932 = 0.0;
    double x2933 = x2932;
    double* x2934 = &x2933;
    char* x2935 = strntod_unchecked(x3, x2934);
    x3 = x2935;
    /* VAR */ double x2937 = 0.0;
    double x2938 = x2937;
    double* x2939 = &x2938;
    char* x2940 = strntod_unchecked(x3, x2939);
    x3 = x2940;
    /* VAR */ double x2942 = 0.0;
    double x2943 = x2942;
    double* x2944 = &x2943;
    char* x2945 = strntod_unchecked(x3, x2944);
    x3 = x2945;
    /* VAR */ double x2947 = 0.0;
    double x2948 = x2947;
    double* x2949 = &x2948;
    char* x2950 = strntod_unchecked(x3, x2949);
    x3 = x2950;
    char x2952 = *x3;
    /* VAR */ char x2953 = x2952;
    x3 += 1;
    x3 += 1;
    char x2956 = x2953;
    char x2957 = *x3;
    /* VAR */ char x2958 = x2957;
    x3 += 1;
    x3 += 1;
    char x2961 = x2958;
    /* VAR */ int x2962 = 0;
    int x2963 = x2962;
    int* x2964 = &x2963;
    char* x2965 = strntoi_unchecked(x3, x2964);
    x3 = x2965;
    /* VAR */ int x2967 = 0;
    int x2968 = x2967;
    int* x2969 = &x2968;
    char* x2970 = strntoi_unchecked(x3, x2969);
    x3 = x2970;
    /* VAR */ int x2972 = 0;
    int x2973 = x2972;
    int* x2974 = &x2973;
    char* x2975 = strntoi_unchecked(x3, x2974);
    x3 = x2975;
    int x2977 = x2963*(10000);
    int x2978 = x2968*(100);
    int x2979 = x2977+(x2978);
    int x2980 = x2979+(x2973);
    /* VAR */ int x2981 = 0;
    int x2982 = x2981;
    int* x2983 = &x2982;
    char* x2984 = strntoi_unchecked(x3, x2983);
    x3 = x2984;
    /* VAR */ int x2986 = 0;
    int x2987 = x2986;
    int* x2988 = &x2987;
    char* x2989 = strntoi_unchecked(x3, x2988);
    x3 = x2989;
    /* VAR */ int x2991 = 0;
    int x2992 = x2991;
    int* x2993 = &x2992;
    char* x2994 = strntoi_unchecked(x3, x2993);
    x3 = x2994;
    int x2996 = x2982*(10000);
    int x2997 = x2987*(100);
    int x2998 = x2996+(x2997);
    int x2999 = x2998+(x2992);
    /* VAR */ int x3000 = 0;
    int x3001 = x3000;
    int* x3002 = &x3001;
    char* x3003 = strntoi_unchecked(x3, x3002);
    x3 = x3003;
    /* VAR */ int x3005 = 0;
    int x3006 = x3005;
    int* x3007 = &x3006;
    char* x3008 = strntoi_unchecked(x3, x3007);
    x3 = x3008;
    /* VAR */ int x3010 = 0;
    int x3011 = x3010;
    int* x3012 = &x3011;
    char* x3013 = strntoi_unchecked(x3, x3012);
    x3 = x3013;
    int x3015 = x3001*(10000);
    int x3016 = x3006*(100);
    int x3017 = x3015+(x3016);
    int x3018 = x3017+(x3011);
    char* x3989 = (char*)malloc(26 * sizeof(char));
    memset(x3989, 0, 26 * sizeof(char));
    /* VAR */ char* x3020 = x3;
    while(1) {
      
      char x3021 = *x3;
      int x3022 = x3021!=('|');
      /* VAR */ int ite15436 = 0;
      if(x3022) {
        char x19070 = *x3;
        int x19071 = x19070!=('\n');
        ite15436 = x19071;
      } else {
        
        ite15436 = 0;
      };
      int x14451 = ite15436;
      if (!(x14451)) break; 
      
      x3 += 1;
    };
    char* x3028 = x3020;
    int x3029 = x3 - x3028;
    char* x3030 = x3020;
    char* x3031 = strncpy(x3989, x3030, x3029);
    x3 += 1;
    char* x4007 = (char*)malloc(11 * sizeof(char));
    memset(x4007, 0, 11 * sizeof(char));
    /* VAR */ char* x3039 = x3;
    while(1) {
      
      char x3040 = *x3;
      int x3041 = x3040!=('|');
      /* VAR */ int ite15459 = 0;
      if(x3041) {
        char x19092 = *x3;
        int x19093 = x19092!=('\n');
        ite15459 = x19093;
      } else {
        
        ite15459 = 0;
      };
      int x14467 = ite15459;
      if (!(x14467)) break; 
      
      x3 += 1;
    };
    char* x3047 = x3039;
    int x3048 = x3 - x3047;
    char* x3049 = x3039;
    char* x3050 = strncpy(x4007, x3049, x3048);
    x3 += 1;
    char* x4025 = (char*)malloc(45 * sizeof(char));
    memset(x4025, 0, 45 * sizeof(char));
    /* VAR */ char* x3058 = x3;
    while(1) {
      
      char x3059 = *x3;
      int x3060 = x3059!=('|');
      /* VAR */ int ite15482 = 0;
      if(x3060) {
        char x19114 = *x3;
        int x19115 = x19114!=('\n');
        ite15482 = x19115;
      } else {
        
        ite15482 = 0;
      };
      int x14483 = ite15482;
      if (!(x14483)) break; 
      
      x3 += 1;
    };
    char* x3066 = x3058;
    int x3067 = x3 - x3066;
    char* x3068 = x3058;
    char* x3069 = strncpy(x4025, x3068, x3067);
    x3 += 1;
    struct LINEITEMRecord* x4522 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x4522, 0, 1 * sizeof(struct LINEITEMRecord));
    x4522->L_ORDERKEY = x2913; x4522->L_PARTKEY = x2918; x4522->L_SUPPKEY = x2923; x4522->L_LINENUMBER = x2928; x4522->L_QUANTITY = x2933; x4522->L_EXTENDEDPRICE = x2938; x4522->L_DISCOUNT = x2943; x4522->L_TAX = x2948; x4522->L_RETURNFLAG = x2956; x4522->L_LINESTATUS = x2961; x4522->L_SHIPDATE = x2980; x4522->L_COMMITDATE = x2999; x4522->L_RECEIPTDATE = x3018; x4522->L_SHIPINSTRUCT = x3989; x4522->L_SHIPMODE = x4007; x4522->L_COMMENT = x4025;
    int x47 = x4;
    *(x3863 + x47) = x4522;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x3082 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x3083 = 0;
  int x3084 = x3083;
  int* x3085 = &x3084;
  int x3086 = fscanf(x3082, "%d", x3085);
  pclose(x3082);
  struct ORDERSRecord** x4055 = (struct ORDERSRecord**)malloc(x3084 * sizeof(struct ORDERSRecord*));
  memset(x4055, 0, x3084 * sizeof(struct ORDERSRecord*));
  int x3090 = O_RDONLY;
  int x3091 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x3090);
  /* VAR */ struct stat x3092 = x2897;
  struct stat x3093 = x3092;
  struct stat* x3094 = &x3093;
  int x3095 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x3094);
  size_t x3096 = x3094->st_size;
  int x3097 = PROT_READ;
  int x3098 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x3096, x3097, x3098, x3091, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x3084);
    /* VAR */ int ite15529 = 0;
    if(x58) {
      char x19160 = *x55;
      int x19161 = x19160!=('\0');
      ite15529 = x19161;
    } else {
      
      ite15529 = 0;
    };
    int x14523 = ite15529;
    if (!(x14523)) break; 
    
    /* VAR */ int x3106 = 0;
    int x3107 = x3106;
    int* x3108 = &x3107;
    char* x3109 = strntoi_unchecked(x55, x3108);
    x55 = x3109;
    /* VAR */ int x3111 = 0;
    int x3112 = x3111;
    int* x3113 = &x3112;
    char* x3114 = strntoi_unchecked(x55, x3113);
    x55 = x3114;
    char x3116 = *x55;
    /* VAR */ char x3117 = x3116;
    x55 += 1;
    x55 += 1;
    char x3120 = x3117;
    /* VAR */ double x3121 = 0.0;
    double x3122 = x3121;
    double* x3123 = &x3122;
    char* x3124 = strntod_unchecked(x55, x3123);
    x55 = x3124;
    /* VAR */ int x3126 = 0;
    int x3127 = x3126;
    int* x3128 = &x3127;
    char* x3129 = strntoi_unchecked(x55, x3128);
    x55 = x3129;
    /* VAR */ int x3131 = 0;
    int x3132 = x3131;
    int* x3133 = &x3132;
    char* x3134 = strntoi_unchecked(x55, x3133);
    x55 = x3134;
    /* VAR */ int x3136 = 0;
    int x3137 = x3136;
    int* x3138 = &x3137;
    char* x3139 = strntoi_unchecked(x55, x3138);
    x55 = x3139;
    int x3141 = x3127*(10000);
    int x3142 = x3132*(100);
    int x3143 = x3141+(x3142);
    int x3144 = x3143+(x3137);
    char* x4112 = (char*)malloc(16 * sizeof(char));
    memset(x4112, 0, 16 * sizeof(char));
    /* VAR */ char* x3146 = x55;
    while(1) {
      
      char x3147 = *x55;
      int x3148 = x3147!=('|');
      /* VAR */ int ite15582 = 0;
      if(x3148) {
        char x19212 = *x55;
        int x19213 = x19212!=('\n');
        ite15582 = x19213;
      } else {
        
        ite15582 = 0;
      };
      int x14569 = ite15582;
      if (!(x14569)) break; 
      
      x55 += 1;
    };
    char* x3154 = x3146;
    int x3155 = x55 - x3154;
    char* x3156 = x3146;
    char* x3157 = strncpy(x4112, x3156, x3155);
    x55 += 1;
    char* x4130 = (char*)malloc(16 * sizeof(char));
    memset(x4130, 0, 16 * sizeof(char));
    /* VAR */ char* x3165 = x55;
    while(1) {
      
      char x3166 = *x55;
      int x3167 = x3166!=('|');
      /* VAR */ int ite15605 = 0;
      if(x3167) {
        char x19234 = *x55;
        int x19235 = x19234!=('\n');
        ite15605 = x19235;
      } else {
        
        ite15605 = 0;
      };
      int x14585 = ite15605;
      if (!(x14585)) break; 
      
      x55 += 1;
    };
    char* x3173 = x3165;
    int x3174 = x55 - x3173;
    char* x3175 = x3165;
    char* x3176 = strncpy(x4130, x3175, x3174);
    x55 += 1;
    /* VAR */ int x3183 = 0;
    int x3184 = x3183;
    int* x3185 = &x3184;
    char* x3186 = strntoi_unchecked(x55, x3185);
    x55 = x3186;
    char* x4153 = (char*)malloc(80 * sizeof(char));
    memset(x4153, 0, 80 * sizeof(char));
    /* VAR */ char* x3189 = x55;
    while(1) {
      
      char x3190 = *x55;
      int x3191 = x3190!=('|');
      /* VAR */ int ite15633 = 0;
      if(x3191) {
        char x19261 = *x55;
        int x19262 = x19261!=('\n');
        ite15633 = x19262;
      } else {
        
        ite15633 = 0;
      };
      int x14606 = ite15633;
      if (!(x14606)) break; 
      
      x55 += 1;
    };
    char* x3197 = x3189;
    int x3198 = x55 - x3197;
    char* x3199 = x3189;
    char* x3200 = strncpy(x4153, x3199, x3198);
    x55 += 1;
    struct ORDERSRecord* x4652 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x4652, 0, 1 * sizeof(struct ORDERSRecord));
    x4652->O_ORDERKEY = x3107; x4652->O_CUSTKEY = x3112; x4652->O_ORDERSTATUS = x3120; x4652->O_TOTALPRICE = x3122; x4652->O_ORDERDATE = x3144; x4652->O_ORDERPRIORITY = x4112; x4652->O_CLERK = x4130; x4652->O_SHIPPRIORITY = x3184; x4652->O_COMMENT = x4153;
    int x91 = x56;
    *(x4055 + x91) = x4652;
    int x93 = x56;
    int x94 = x93+(1);
    x56 = x94;
  };
  int x98 = 0;
  for(; x98 < 1 ; x98 += 1) {
    
    GHashTable* x19719 = g_hash_table_new(x19696, x19714);
    void*** x19727 = (void***){x19720};
    int* x19728 = (int*){x19723};
    GHashTable* x19729 = g_hash_table_new(x19727, x19728);
    /* VAR */ struct timeval x19730 = x2498;
    struct timeval x19731 = x19730;
    /* VAR */ struct timeval x19732 = x2498;
    struct timeval x19733 = x19732;
    /* VAR */ struct timeval x19734 = x2498;
    struct timeval x19735 = x19734;
    struct timeval* x19736 = &x19733;
    gettimeofday(x19736, NULL);
    /* VAR */ int x19738 = 0;
    /* VAR */ int x19739 = 0;
    int* x19752 = &(x19746);
    GTree* x19753 = g_tree_new(x19752);
    /* VAR */ int x19754 = 0;
    /* VAR */ int x19755 = 0;
    while(1) {
      
      int x19757 = x19738;
      int x19758 = x19757<(x3084);
      if (!(x19758)) break; 
      
      int x1516 = x19738;
      struct ORDERSRecord* x192 = x4055[x1516];
      int x194 = x192->O_ORDERKEY;
      void* x5188 = (void*){x194};
      void* x5189 = (void*){x192};
      void* x5190 = g_hash_table_lookup(x19729, x5188);
      GList** x5191 = (GList**){x5190};
      GList** x5192 = NULL;
      int x5193 = x5191==(x5192);
      /* VAR */ GList** ite15032 = 0;
      if(x5193) {
        GList** x15033 = malloc(8);
        GList* x15034 = NULL;
        pointer_assign(x15033, x15034);
        ite15032 = x15033;
      } else {
        
        ite15032 = x5191;
      };
      GList** x5197 = ite15032;
      GList* x5198 = *(x5197);
      GList* x5199 = g_list_prepend(x5198, x5189);
      pointer_assign(x5197, x5199);
      void* x5201 = (void*){x5197};
      g_hash_table_insert(x19729, x5188, x5201);
      int x1521 = x19738;
      int x198 = x1521+(1);
      x19738 = x198;
    };
    while(1) {
      
      int x19786 = x19739;
      int x19787 = x19786<(x2889);
      if (!(x19787)) break; 
      
      int x1530 = x19739;
      struct LINEITEMRecord* x207 = x3863[x1530];
      int x209 = x207->L_RECEIPTDATE;
      int x210 = x209<(19950101);
      /* VAR */ int ite16177 = 0;
      if(x210) {
        int x19794 = x207->L_COMMITDATE;
        int x19795 = x19794<(19950101);
        ite16177 = x19795;
      } else {
        
        ite16177 = 0;
      };
      int x15055 = ite16177;
      /* VAR */ int ite16186 = 0;
      if(x15055) {
        int x19802 = x207->L_SHIPDATE;
        int x19803 = x19802<(19950101);
        ite16186 = x19803;
      } else {
        
        ite16186 = 0;
      };
      int x15057 = ite16186;
      /* VAR */ int ite16195 = 0;
      if(x15057) {
        int x19810 = x207->L_SHIPDATE;
        int x19811 = x207->L_COMMITDATE;
        int x19812 = x19810<(x19811);
        ite16195 = x19812;
      } else {
        
        ite16195 = 0;
      };
      int x15059 = ite16195;
      /* VAR */ int ite16205 = 0;
      if(x15059) {
        int x19819 = x207->L_COMMITDATE;
        int x19820 = x19819<(x209);
        ite16205 = x19820;
      } else {
        
        ite16205 = 0;
      };
      int x15061 = ite16205;
      /* VAR */ int ite16214 = 0;
      if(x15061) {
        int x19827 = x209>=(19940101);
        ite16214 = x19827;
      } else {
        
        ite16214 = 0;
      };
      int x15063 = ite16214;
      /* VAR */ int ite16222 = 0;
      if(x15063) {
        char* x19834 = x207->L_SHIPMODE;
        int x19835 = strcmp(x19834, "MAIL");
        int x19836 = x19835==(0);
        /* VAR */ int x19837 = 0;
        if(x19836) {
          x19837 = 1;
        } else {
          
          int x19840 = strcmp(x19834, "SHIP");
          int x19841 = x19840==(0);
          x19837 = x19841;
        };
        int x19844 = x19837;
        ite16222 = x19844;
      } else {
        
        ite16222 = 0;
      };
      int x15065 = ite16222;
      if(x15065) {
        int x231 = x207->L_ORDERKEY;
        void* x5236 = (void*){x231};
        void* x5237 = g_hash_table_lookup(x19729, x5236);
        GList** x5238 = (GList**){x5237};
        int x9376 = x5238!=(NULL);
        if(x9376) {
          GList* x6344 = *(x5238);
          /* VAR */ GList* x6345 = x6344;
          while(1) {
            
            GList* x6346 = x6345;
            GList* x6347 = NULL;
            int x6348 = x6346!=(x6347);
            if (!(x6348)) break; 
            
            GList* x6349 = x6345;
            void* x6350 = g_list_nth_data(x6349, 0);
            struct ORDERSRecord* x6351 = (struct ORDERSRecord*){x6350};
            GList* x6352 = x6345;
            GList* x6353 = g_list_next(x6352);
            x6345 = x6353;
            int x6355 = x6351->O_ORDERKEY;
            int x6356 = x6355==(x231);
            if(x6356) {
              int x736 = x6351->O_CUSTKEY;
              char x737 = x6351->O_ORDERSTATUS;
              double x738 = x6351->O_TOTALPRICE;
              int x739 = x6351->O_ORDERDATE;
              char* x740 = x6351->O_ORDERPRIORITY;
              char* x741 = x6351->O_CLERK;
              int x742 = x6351->O_SHIPPRIORITY;
              char* x743 = x6351->O_COMMENT;
              int x744 = x207->L_PARTKEY;
              int x745 = x207->L_SUPPKEY;
              int x746 = x207->L_LINENUMBER;
              double x747 = x207->L_QUANTITY;
              double x748 = x207->L_EXTENDEDPRICE;
              double x749 = x207->L_DISCOUNT;
              double x750 = x207->L_TAX;
              char x751 = x207->L_RETURNFLAG;
              char x752 = x207->L_LINESTATUS;
              int x753 = x207->L_SHIPDATE;
              int x754 = x207->L_COMMITDATE;
              char* x755 = x207->L_SHIPINSTRUCT;
              char* x756 = x207->L_SHIPMODE;
              char* x757 = x207->L_COMMENT;
              struct ORDERSRecord_LINEITEMRecord* x4757 = (struct ORDERSRecord_LINEITEMRecord*)malloc(1 * sizeof(struct ORDERSRecord_LINEITEMRecord));
              memset(x4757, 0, 1 * sizeof(struct ORDERSRecord_LINEITEMRecord));
              x4757->O_ORDERKEY = x6355; x4757->O_CUSTKEY = x736; x4757->O_ORDERSTATUS = x737; x4757->O_TOTALPRICE = x738; x4757->O_ORDERDATE = x739; x4757->O_ORDERPRIORITY = x740; x4757->O_CLERK = x741; x4757->O_SHIPPRIORITY = x742; x4757->O_COMMENT = x743; x4757->L_ORDERKEY = x231; x4757->L_PARTKEY = x744; x4757->L_SUPPKEY = x745; x4757->L_LINENUMBER = x746; x4757->L_QUANTITY = x747; x4757->L_EXTENDEDPRICE = x748; x4757->L_DISCOUNT = x749; x4757->L_TAX = x750; x4757->L_RETURNFLAG = x751; x4757->L_LINESTATUS = x752; x4757->L_SHIPDATE = x753; x4757->L_COMMITDATE = x754; x4757->L_RECEIPTDATE = x209; x4757->L_SHIPINSTRUCT = x755; x4757->L_SHIPMODE = x756; x4757->L_COMMENT = x757;
              char* x295 = x4757->L_SHIPMODE;
              void* x6384 = g_hash_table_lookup(x19719, x295);
              int x6317 = x6384==(NULL);
              /* VAR */ struct AGGRecord_OptimalString* ite15189 = 0;
              if(x6317) {
                double* x15190 = (double*)malloc(2 * sizeof(double));
                memset(x15190, 0, 2 * sizeof(double));
                struct AGGRecord_OptimalString* x15191 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
                memset(x15191, 0, 1 * sizeof(struct AGGRecord_OptimalString));
                x15191->key = x295; x15191->aggs = x15190;
                g_hash_table_insert(x19719, x295, x15191);
                ite15189 = x15191;
              } else {
                
                ite15189 = x6384;
              };
              struct AGGRecord_OptimalString* x6327 = ite15189;
              double* x300 = x6327->aggs;
              double x314 = x300[0];
              char* x315 = x4757->O_ORDERPRIORITY;
              int x11994 = strcmp(x315, "1-URGENT");
              int x11995 = x11994==(0);
              /* VAR */ int ite16386 = 0;
              if(x11995) {
                ite16386 = 1;
              } else {
                
                int x20002 = strcmp(x315, "2-HIGH");
                int x20003 = x20002==(0);
                ite16386 = x20003;
              };
              int x15205 = ite16386;
              /* VAR */ double ite15207 = 0;
              if(x15205) {
                double x15208 = x314+(1.0);
                ite15207 = x15208;
              } else {
                
                ite15207 = x314;
              };
              double x321 = ite15207;
              *x300 = x321;
              double x329 = x300[1];
              int x12003 = strcmp(x315, "1-URGENT");
              int x12004 = x12003!=(0);
              /* VAR */ int ite16406 = 0;
              if(x12004) {
                int x20020 = strcmp(x315, "2-HIGH");
                int x20021 = x20020!=(0);
                ite16406 = x20021;
              } else {
                
                ite16406 = 0;
              };
              int x15218 = ite16406;
              /* VAR */ double ite15220 = 0;
              if(x15218) {
                double x15221 = x329+(1.0);
                ite15220 = x15221;
              } else {
                
                ite15220 = x329;
              };
              double x335 = ite15220;
              *(x300 + 1) = x335;
            };
          };
        };
      };
      int x1711 = x19739;
      int x347 = x1711+(1);
      x19739 = x347;
    };
    GList* x20041 = g_hash_table_get_keys(x19719);
    /* VAR */ GList* x20042 = x20041;
    int x20043 = g_hash_table_size(x19719);
    int x13301 = 0;
    for(; x13301 < x20043 ; x13301 += 1) {
      
      GList* x13302 = x20042;
      void* x13303 = g_list_nth_data(x13302, 0);
      GList* x13304 = g_list_next(x13302);
      x20042 = x13304;
      void* x13306 = g_hash_table_lookup(x19719, x13303);
      struct AGGRecord_OptimalString* x13308 = (struct AGGRecord_OptimalString*){x13306};
      g_tree_insert(x19753, x13308, x13308);
    };
    while(1) {
      
      int x1721 = x19754;
      int x359 = !(x1721);
      /* VAR */ int ite16455 = 0;
      if(x359) {
        int x20068 = g_tree_nnodes(x19753);
        int x20069 = x20068!=(0);
        ite16455 = x20069;
      } else {
        
        ite16455 = 0;
      };
      int x15260 = ite16455;
      if (!(x15260)) break; 
      
      void* x6439 = NULL;
      void** x6447 = &(x6439);
      g_tree_foreach(x19753, x6446, x6447);
      struct AGGRecord_OptimalString* x6449 = (struct AGGRecord_OptimalString*){x6439};
      int x6450 = g_tree_remove(x19753, x6449);
      if(0) {
        x19754 = 1;
      } else {
        
        char* x372 = x6449->key;
        double* x374 = x6449->aggs;
        double x375 = x374[0];
        double x376 = x374[1];
        printf("%s|%.0f|%.0f\n", x372, x375, x376);
        int x1740 = x19755;
        int x379 = x1740+(1);
        x19755 = x379;
      };
    };
    int x20096 = x19755;
    printf("(%d rows)\n", x20096);
    struct timeval* x20098 = &x19735;
    gettimeofday(x20098, NULL);
    struct timeval* x20100 = &x19731;
    struct timeval* x20101 = &x19735;
    struct timeval* x20102 = &x19733;
    long x20103 = timeval_subtract(x20100, x20101, x20102);
    printf("Generated code run in %ld milliseconds.\n", x20103);
  };
}
/* ----------- FUNCTIONS ----------- */
int x19696(char* x6176) {
  int x11762 = strlen(x6176);
  /* VAR */ int x10507 = 0;
  /* VAR */ int x10508 = 0;
  while(1) {
    
    int x10509 = x10507;
    int x10510 = x10509<(x11762);
    if (!(x10510)) break; 
    
    int x10511 = x10508;
    int x10512 = x10507;
    char* x11770 = pointer_add(x6176, x10512);
    char x11771 = *(x11770);
    int x10515 = x10511+(x11771);
    x10508 = x10515;
    int x10517 = x10507;
    int x10518 = x10517+(1);
    x10507 = x10518;
  };
  int x10521 = x10508;
  return x10521; 
}

int x19714(char* x6181, char* x6182) {
  int x10525 = strcmp(x6181, x6182);
  int x10526 = !(x10525);
  return x10526; 
}

int x19720(void* x5151) {
  int x5152 = g_direct_hash(x5151);
  return x5152; 
}

int x19723(void* x5154, void* x5155) {
  int x5156 = g_direct_equal(x5154, x5155);
  return x5156; 
}

int x19746(struct AGGRecord_OptimalString* x170, struct AGGRecord_OptimalString* x171) {
  char* x172 = x170->key;
  char* x173 = x171->key;
  int x11816 = strcmp(x172, x173);
  return x11816; 
}

int x6446(void* x6440, void* x6441, void* x6442) {
  struct AGGRecord_OptimalString** x6443 = (struct AGGRecord_OptimalString**){x6442};
  struct AGGRecord_OptimalString* x6444 = (struct AGGRecord_OptimalString*){x6441};
  pointer_assign(x6443, x6444);
  return 1; 
}
