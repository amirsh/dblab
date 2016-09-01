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
  
  


int x12485(int x4315);

int x12487(int x4320, int x4321);

int x12587(struct AGGRecord_Int* x174, struct AGGRecord_Int* x175);

int x4460(void* x4454, void* x4455, void* x4456);
/* GLOBAL VARS */

struct timeval x1788;
int main(int argc, char** argv) {
  FILE* x2093 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x2094 = 0;
  int x2095 = x2094;
  int* x2096 = &x2095;
  int x2097 = fscanf(x2093, "%d", x2096);
  pclose(x2093);
  struct CUSTOMERRecord** x2879 = (struct CUSTOMERRecord**)malloc(x2095 * sizeof(struct CUSTOMERRecord*));
  memset(x2879, 0, x2095 * sizeof(struct CUSTOMERRecord*));
  int x2101 = O_RDONLY;
  int x2102 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x2101);
  struct stat x2103 = (struct stat){0};
  /* VAR */ struct stat x2104 = x2103;
  struct stat x2105 = x2104;
  struct stat* x2106 = &x2105;
  int x2107 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x2106);
  size_t x2108 = x2106->st_size;
  int x2109 = PROT_READ;
  int x2110 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x2108, x2109, x2110, x2102, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x2095);
    /* VAR */ int ite10303 = 0;
    if(x6) {
      char x11946 = *x3;
      int x11947 = x11946!=('\0');
      ite10303 = x11947;
    } else {
      
      ite10303 = 0;
    };
    int x9586 = ite10303;
    if (!(x9586)) break; 
    
    /* VAR */ int x2118 = 0;
    int x2119 = x2118;
    int* x2120 = &x2119;
    char* x2121 = strntoi_unchecked(x3, x2120);
    x3 = x2121;
    char* x2903 = (char*)malloc(26 * sizeof(char));
    memset(x2903, 0, 26 * sizeof(char));
    /* VAR */ char* x2124 = x3;
    while(1) {
      
      char x2125 = *x3;
      int x2126 = x2125!=('|');
      /* VAR */ int ite10322 = 0;
      if(x2126) {
        char x11964 = *x3;
        int x11965 = x11964!=('\n');
        ite10322 = x11965;
      } else {
        
        ite10322 = 0;
      };
      int x9598 = ite10322;
      if (!(x9598)) break; 
      
      x3 += 1;
    };
    char* x2132 = x2124;
    int x2133 = x3 - x2132;
    char* x2134 = x2124;
    char* x2135 = strncpy(x2903, x2134, x2133);
    x3 += 1;
    char* x2921 = (char*)malloc(41 * sizeof(char));
    memset(x2921, 0, 41 * sizeof(char));
    /* VAR */ char* x2143 = x3;
    while(1) {
      
      char x2144 = *x3;
      int x2145 = x2144!=('|');
      /* VAR */ int ite10345 = 0;
      if(x2145) {
        char x11986 = *x3;
        int x11987 = x11986!=('\n');
        ite10345 = x11987;
      } else {
        
        ite10345 = 0;
      };
      int x9614 = ite10345;
      if (!(x9614)) break; 
      
      x3 += 1;
    };
    char* x2151 = x2143;
    int x2152 = x3 - x2151;
    char* x2153 = x2143;
    char* x2154 = strncpy(x2921, x2153, x2152);
    x3 += 1;
    /* VAR */ int x2161 = 0;
    int x2162 = x2161;
    int* x2163 = &x2162;
    char* x2164 = strntoi_unchecked(x3, x2163);
    x3 = x2164;
    char* x2944 = (char*)malloc(16 * sizeof(char));
    memset(x2944, 0, 16 * sizeof(char));
    /* VAR */ char* x2167 = x3;
    while(1) {
      
      char x2168 = *x3;
      int x2169 = x2168!=('|');
      /* VAR */ int ite10373 = 0;
      if(x2169) {
        char x12013 = *x3;
        int x12014 = x12013!=('\n');
        ite10373 = x12014;
      } else {
        
        ite10373 = 0;
      };
      int x9635 = ite10373;
      if (!(x9635)) break; 
      
      x3 += 1;
    };
    char* x2175 = x2167;
    int x2176 = x3 - x2175;
    char* x2177 = x2167;
    char* x2178 = strncpy(x2944, x2177, x2176);
    x3 += 1;
    /* VAR */ double x2185 = 0.0;
    double x2186 = x2185;
    double* x2187 = &x2186;
    char* x2188 = strntod_unchecked(x3, x2187);
    x3 = x2188;
    char* x2967 = (char*)malloc(11 * sizeof(char));
    memset(x2967, 0, 11 * sizeof(char));
    /* VAR */ char* x2191 = x3;
    while(1) {
      
      char x2192 = *x3;
      int x2193 = x2192!=('|');
      /* VAR */ int ite10401 = 0;
      if(x2193) {
        char x12040 = *x3;
        int x12041 = x12040!=('\n');
        ite10401 = x12041;
      } else {
        
        ite10401 = 0;
      };
      int x9656 = ite10401;
      if (!(x9656)) break; 
      
      x3 += 1;
    };
    char* x2199 = x2191;
    int x2200 = x3 - x2199;
    char* x2201 = x2191;
    char* x2202 = strncpy(x2967, x2201, x2200);
    x3 += 1;
    char* x2985 = (char*)malloc(118 * sizeof(char));
    memset(x2985, 0, 118 * sizeof(char));
    /* VAR */ char* x2210 = x3;
    while(1) {
      
      char x2211 = *x3;
      int x2212 = x2211!=('|');
      /* VAR */ int ite10424 = 0;
      if(x2212) {
        char x12062 = *x3;
        int x12063 = x12062!=('\n');
        ite10424 = x12063;
      } else {
        
        ite10424 = 0;
      };
      int x9672 = ite10424;
      if (!(x9672)) break; 
      
      x3 += 1;
    };
    char* x2218 = x2210;
    int x2219 = x3 - x2218;
    char* x2220 = x2210;
    char* x2221 = strncpy(x2985, x2220, x2219);
    x3 += 1;
    struct CUSTOMERRecord* x3385 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x3385, 0, 1 * sizeof(struct CUSTOMERRecord));
    x3385->C_CUSTKEY = x2119; x3385->C_NAME = x2903; x3385->C_ADDRESS = x2921; x3385->C_NATIONKEY = x2162; x3385->C_PHONE = x2944; x3385->C_ACCTBAL = x2186; x3385->C_MKTSEGMENT = x2967; x3385->C_COMMENT = x2985;
    int x53 = x4;
    *(x2879 + x53) = x3385;
    int x55 = x4;
    int x56 = x55+(1);
    x4 = x56;
  };
  FILE* x2234 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x2235 = 0;
  int x2236 = x2235;
  int* x2237 = &x2236;
  int x2238 = fscanf(x2234, "%d", x2237);
  pclose(x2234);
  struct ORDERSRecord** x3015 = (struct ORDERSRecord**)malloc(x2236 * sizeof(struct ORDERSRecord*));
  memset(x3015, 0, x2236 * sizeof(struct ORDERSRecord*));
  int x2242 = O_RDONLY;
  int x2243 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x2242);
  /* VAR */ struct stat x2244 = x2103;
  struct stat x2245 = x2244;
  struct stat* x2246 = &x2245;
  int x2247 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x2246);
  size_t x2248 = x2246->st_size;
  int x2249 = PROT_READ;
  int x2250 = MAP_PRIVATE;
  char* x61 = mmap(NULL, x2248, x2249, x2250, x2243, 0);
  /* VAR */ int x62 = 0;
  while(1) {
    
    int x63 = x62;
    int x64 = x63<(x2236);
    /* VAR */ int ite10471 = 0;
    if(x64) {
      char x12108 = *x61;
      int x12109 = x12108!=('\0');
      ite10471 = x12109;
    } else {
      
      ite10471 = 0;
    };
    int x9712 = ite10471;
    if (!(x9712)) break; 
    
    /* VAR */ int x2258 = 0;
    int x2259 = x2258;
    int* x2260 = &x2259;
    char* x2261 = strntoi_unchecked(x61, x2260);
    x61 = x2261;
    /* VAR */ int x2263 = 0;
    int x2264 = x2263;
    int* x2265 = &x2264;
    char* x2266 = strntoi_unchecked(x61, x2265);
    x61 = x2266;
    char x2268 = *x61;
    /* VAR */ char x2269 = x2268;
    x61 += 1;
    x61 += 1;
    char x2272 = x2269;
    /* VAR */ double x2273 = 0.0;
    double x2274 = x2273;
    double* x2275 = &x2274;
    char* x2276 = strntod_unchecked(x61, x2275);
    x61 = x2276;
    /* VAR */ int x2278 = 0;
    int x2279 = x2278;
    int* x2280 = &x2279;
    char* x2281 = strntoi_unchecked(x61, x2280);
    x61 = x2281;
    /* VAR */ int x2283 = 0;
    int x2284 = x2283;
    int* x2285 = &x2284;
    char* x2286 = strntoi_unchecked(x61, x2285);
    x61 = x2286;
    /* VAR */ int x2288 = 0;
    int x2289 = x2288;
    int* x2290 = &x2289;
    char* x2291 = strntoi_unchecked(x61, x2290);
    x61 = x2291;
    int x2293 = x2279*(10000);
    int x2294 = x2284*(100);
    int x2295 = x2293+(x2294);
    int x2296 = x2295+(x2289);
    char* x3072 = (char*)malloc(16 * sizeof(char));
    memset(x3072, 0, 16 * sizeof(char));
    /* VAR */ char* x2298 = x61;
    while(1) {
      
      char x2299 = *x61;
      int x2300 = x2299!=('|');
      /* VAR */ int ite10524 = 0;
      if(x2300) {
        char x12160 = *x61;
        int x12161 = x12160!=('\n');
        ite10524 = x12161;
      } else {
        
        ite10524 = 0;
      };
      int x9758 = ite10524;
      if (!(x9758)) break; 
      
      x61 += 1;
    };
    char* x2306 = x2298;
    int x2307 = x61 - x2306;
    char* x2308 = x2298;
    char* x2309 = strncpy(x3072, x2308, x2307);
    x61 += 1;
    char* x3090 = (char*)malloc(16 * sizeof(char));
    memset(x3090, 0, 16 * sizeof(char));
    /* VAR */ char* x2317 = x61;
    while(1) {
      
      char x2318 = *x61;
      int x2319 = x2318!=('|');
      /* VAR */ int ite10547 = 0;
      if(x2319) {
        char x12182 = *x61;
        int x12183 = x12182!=('\n');
        ite10547 = x12183;
      } else {
        
        ite10547 = 0;
      };
      int x9774 = ite10547;
      if (!(x9774)) break; 
      
      x61 += 1;
    };
    char* x2325 = x2317;
    int x2326 = x61 - x2325;
    char* x2327 = x2317;
    char* x2328 = strncpy(x3090, x2327, x2326);
    x61 += 1;
    /* VAR */ int x2335 = 0;
    int x2336 = x2335;
    int* x2337 = &x2336;
    char* x2338 = strntoi_unchecked(x61, x2337);
    x61 = x2338;
    char* x3113 = (char*)malloc(80 * sizeof(char));
    memset(x3113, 0, 80 * sizeof(char));
    /* VAR */ char* x2341 = x61;
    while(1) {
      
      char x2342 = *x61;
      int x2343 = x2342!=('|');
      /* VAR */ int ite10575 = 0;
      if(x2343) {
        char x12209 = *x61;
        int x12210 = x12209!=('\n');
        ite10575 = x12210;
      } else {
        
        ite10575 = 0;
      };
      int x9795 = ite10575;
      if (!(x9795)) break; 
      
      x61 += 1;
    };
    char* x2349 = x2341;
    int x2350 = x61 - x2349;
    char* x2351 = x2341;
    char* x2352 = strncpy(x3113, x2351, x2350);
    x61 += 1;
    struct ORDERSRecord* x3515 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x3515, 0, 1 * sizeof(struct ORDERSRecord));
    x3515->O_ORDERKEY = x2259; x3515->O_CUSTKEY = x2264; x3515->O_ORDERSTATUS = x2272; x3515->O_TOTALPRICE = x2274; x3515->O_ORDERDATE = x2296; x3515->O_ORDERPRIORITY = x3072; x3515->O_CLERK = x3090; x3515->O_SHIPPRIORITY = x2336; x3515->O_COMMENT = x3113;
    int x97 = x62;
    *(x3015 + x97) = x3515;
    int x99 = x62;
    int x100 = x99+(1);
    x62 = x100;
  };
  struct Q13IntRecord** x3137 = (struct Q13IntRecord**)malloc(x2095 * sizeof(struct Q13IntRecord*));
  memset(x3137, 0, x2095 * sizeof(struct Q13IntRecord*));
  int x105 = 0;
  for(; x105 < x2095 ; x105 += 1) {
    
    struct Q13IntRecord* x12240 = (struct Q13IntRecord*)malloc(1 * sizeof(struct Q13IntRecord));
    memset(x12240, 0, 1 * sizeof(struct Q13IntRecord));
    x12240->count = 0;
    *(x3137 + x105) = x12240;
  };
  int x111 = 0;
  for(; x111 < 1 ; x111 += 1) {
    
    GHashTable* x12491 = g_hash_table_new(x12485, x12487);
    /* VAR */ struct timeval x12492 = x1788;
    struct timeval x12493 = x12492;
    /* VAR */ struct timeval x12494 = x1788;
    struct timeval x12495 = x12494;
    /* VAR */ struct timeval x12496 = x1788;
    struct timeval x12497 = x12496;
    struct timeval* x12498 = &x12495;
    gettimeofday(x12498, NULL);
    /* VAR */ int x12500 = 0;
    while(1) {
      
      int x12502 = x12500;
      int x12503 = x12502<(x2236);
      if (!(x12503)) break; 
      
      int x1019 = x12500;
      struct ORDERSRecord* x140 = x3015[x1019];
      char* x142 = x140->O_COMMENT;
      char* x7885 = pointer_add(x142, 0);
      char* x7886 = strstr(x7885, "unusual");
      char* x7887 = NULL;
      int x7888 = x7886==(x7887);
      /* VAR */ int ite10081 = 0;
      if(x7888) {
        ite10081 = -1;
      } else {
        
        int x10083 = str_subtract(x7886, x142);
        ite10081 = x10083;
      };
      int x7890 = ite10081;
      char* x7891 = pointer_add(x142, x7890);
      char* x7892 = strstr(x7891, "packages");
      char* x7893 = NULL;
      int x7894 = x7892==(x7893);
      /* VAR */ int ite10092 = 0;
      if(x7894) {
        ite10092 = -1;
      } else {
        
        int x10094 = str_subtract(x7892, x142);
        ite10092 = x10094;
      };
      int x7896 = ite10092;
      int x145 = x7890!=(-1);
      /* VAR */ int ite10906 = 0;
      if(x145) {
        int x12532 = x7896!=(-1);
        ite10906 = x12532;
      } else {
        
        ite10906 = 0;
      };
      int x10100 = ite10906;
      int x148 = !(x10100);
      if(x148) {
        int x152 = x140->O_CUSTKEY;
        struct Q13IntRecord* x153 = x3137[x152];
        int x154 = x153->count;
        int x155 = x154+(1);
        x153->count = x155;
      };
      int x1039 = x12500;
      int x160 = x1039+(1);
      x12500 = x160;
    };
    /* VAR */ int x12547 = 0;
    int* x12626 = &(x12587);
    GTree* x12627 = g_tree_new(x12626);
    /* VAR */ int x12628 = 0;
    /* VAR */ int x12629 = 0;
    while(1) {
      
      int x12631 = x12547;
      int x12632 = x12631<(x2095);
      if (!(x12632)) break; 
      
      int x1101 = x12547;
      struct Q13IntRecord* x207 = x3137[x1101];
      int x209 = x207->count;
      void* x4856 = g_hash_table_lookup(x12491, x209);
      int x4408 = x4856==(NULL);
      /* VAR */ struct AGGRecord_Int* ite10202 = 0;
      if(x4408) {
        double* x10203 = (double*)malloc(1 * sizeof(double));
        memset(x10203, 0, 1 * sizeof(double));
        struct AGGRecord_Int* x10204 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
        memset(x10204, 0, 1 * sizeof(struct AGGRecord_Int));
        x10204->key = x209; x10204->aggs = x10203;
        g_hash_table_insert(x12491, x209, x10204);
        ite10202 = x10204;
      } else {
        
        ite10202 = x4856;
      };
      struct AGGRecord_Int* x4418 = ite10202;
      double* x214 = x4418->aggs;
      double x228 = x214[0];
      double x230 = x228+(1.0);
      *x214 = x230;
      int x1130 = x12547;
      int x237 = x1130+(1);
      x12547 = x237;
    };
    GList* x12660 = g_hash_table_get_keys(x12491);
    /* VAR */ GList* x12661 = x12660;
    int x12662 = g_hash_table_size(x12491);
    int x8880 = 0;
    for(; x8880 < x12662 ; x8880 += 1) {
      
      GList* x8881 = x12661;
      void* x8882 = g_list_nth_data(x8881, 0);
      GList* x8883 = g_list_next(x8881);
      x12661 = x8883;
      void* x8885 = g_hash_table_lookup(x12491, x8882);
      struct AGGRecord_Int* x8887 = (struct AGGRecord_Int*){x8885};
      g_tree_insert(x12627, x8887, x8887);
    };
    while(1) {
      
      int x1139 = x12628;
      int x248 = !(x1139);
      /* VAR */ int ite11063 = 0;
      if(x248) {
        int x12687 = g_tree_nnodes(x12627);
        int x12688 = x12687!=(0);
        ite11063 = x12688;
      } else {
        
        ite11063 = 0;
      };
      int x10249 = ite11063;
      if (!(x10249)) break; 
      
      void* x4453 = NULL;
      void** x4461 = &(x4453);
      g_tree_foreach(x12627, x4460, x4461);
      struct AGGRecord_Int* x4463 = (struct AGGRecord_Int*){x4453};
      int x4464 = g_tree_remove(x12627, x4463);
      if(0) {
        x12628 = 1;
      } else {
        
        int x261 = x4463->key;
        double* x262 = x4463->aggs;
        double x263 = x262[0];
        printf("%d|%.0f\n", x261, x263);
        int x1156 = x12629;
        int x266 = x1156+(1);
        x12629 = x266;
      };
    };
    int x12714 = x12629;
    printf("(%d rows)\n", x12714);
    struct timeval* x12716 = &x12497;
    gettimeofday(x12716, NULL);
    struct timeval* x12718 = &x12493;
    struct timeval* x12719 = &x12497;
    struct timeval* x12720 = &x12495;
    long x12721 = timeval_subtract(x12718, x12719, x12720);
    printf("Generated code run in %ld milliseconds.\n", x12721);
  };
}
/* ----------- FUNCTIONS ----------- */
int x12485(int x4315) {
  return x4315; 
}

int x12487(int x4320, int x4321) {
  int x4322 = x4320==(x4321);
  return x4322; 
}

int x12587(struct AGGRecord_Int* x174, struct AGGRecord_Int* x175) {
  double* x176 = x174->aggs;
  double x177 = x176[0];
  double* x178 = x175->aggs;
  double x179 = x178[0];
  int x180 = x177<(x179);
  /* VAR */ int ite10160 = 0;
  if(x180) {
    ite10160 = 1;
  } else {
    
    double x10162 = x176[0];
    double x10163 = x178[0];
    int x10164 = x10162>(x10163);
    /* VAR */ int ite10166 = 0;
    if(x10164) {
      ite10166 = -1;
    } else {
      
      int x10168 = x174->key;
      int x10169 = x175->key;
      int x10170 = x10168<(x10169);
      /* VAR */ int ite10172 = 0;
      if(x10170) {
        ite10172 = 1;
      } else {
        
        int x10174 = x10168>(x10169);
        /* VAR */ int ite10176 = 0;
        if(x10174) {
          ite10176 = -1;
        } else {
          
          ite10176 = 0;
        };
        int x10175 = ite10176;
        ite10172 = x10175;
      };
      int x10171 = ite10172;
      ite10166 = x10171;
    };
    int x10165 = ite10166;
    ite10160 = x10165;
  };
  int x191 = ite10160;
  return x191; 
}

int x4460(void* x4454, void* x4455, void* x4456) {
  struct AGGRecord_Int** x4457 = (struct AGGRecord_Int**){x4456};
  struct AGGRecord_Int* x4458 = (struct AGGRecord_Int*){x4455};
  pointer_assign(x4457, x4458);
  return 1; 
}
