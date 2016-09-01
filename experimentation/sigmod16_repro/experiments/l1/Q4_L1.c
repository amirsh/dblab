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
  
  


int x14835(char* x5125);

int x14853(char* x5130, char* x5131);

int x14859(void* x4204);

int x14862(void* x4207, void* x4208);

int x14885(struct AGGRecord_OptimalString* x139, struct AGGRecord_OptimalString* x140);

int x5281(void* x5275, void* x5276, void* x5277);
/* GLOBAL VARS */

struct timeval x1853;
int main(int argc, char** argv) {
  FILE* x2142 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x2143 = 0;
  int x2144 = x2143;
  int* x2145 = &x2144;
  int x2146 = fscanf(x2142, "%d", x2145);
  pclose(x2142);
  struct LINEITEMRecord** x3018 = (struct LINEITEMRecord**)malloc(x2144 * sizeof(struct LINEITEMRecord*));
  memset(x3018, 0, x2144 * sizeof(struct LINEITEMRecord*));
  int x2150 = O_RDONLY;
  int x2151 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x2150);
  struct stat x2152 = (struct stat){0};
  /* VAR */ struct stat x2153 = x2152;
  struct stat x2154 = x2153;
  struct stat* x2155 = &x2154;
  int x2156 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x2155);
  size_t x2157 = x2155->st_size;
  int x2158 = PROT_READ;
  int x2159 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x2157, x2158, x2159, x2151, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x2144);
    /* VAR */ int ite12606 = 0;
    if(x6) {
      char x14271 = *x3;
      int x14272 = x14271!=('\0');
      ite12606 = x14272;
    } else {
      
      ite12606 = 0;
    };
    int x11864 = ite12606;
    if (!(x11864)) break; 
    
    /* VAR */ int x2167 = 0;
    int x2168 = x2167;
    int* x2169 = &x2168;
    char* x2170 = strntoi_unchecked(x3, x2169);
    x3 = x2170;
    /* VAR */ int x2172 = 0;
    int x2173 = x2172;
    int* x2174 = &x2173;
    char* x2175 = strntoi_unchecked(x3, x2174);
    x3 = x2175;
    /* VAR */ int x2177 = 0;
    int x2178 = x2177;
    int* x2179 = &x2178;
    char* x2180 = strntoi_unchecked(x3, x2179);
    x3 = x2180;
    /* VAR */ int x2182 = 0;
    int x2183 = x2182;
    int* x2184 = &x2183;
    char* x2185 = strntoi_unchecked(x3, x2184);
    x3 = x2185;
    /* VAR */ double x2187 = 0.0;
    double x2188 = x2187;
    double* x2189 = &x2188;
    char* x2190 = strntod_unchecked(x3, x2189);
    x3 = x2190;
    /* VAR */ double x2192 = 0.0;
    double x2193 = x2192;
    double* x2194 = &x2193;
    char* x2195 = strntod_unchecked(x3, x2194);
    x3 = x2195;
    /* VAR */ double x2197 = 0.0;
    double x2198 = x2197;
    double* x2199 = &x2198;
    char* x2200 = strntod_unchecked(x3, x2199);
    x3 = x2200;
    /* VAR */ double x2202 = 0.0;
    double x2203 = x2202;
    double* x2204 = &x2203;
    char* x2205 = strntod_unchecked(x3, x2204);
    x3 = x2205;
    char x2207 = *x3;
    /* VAR */ char x2208 = x2207;
    x3 += 1;
    x3 += 1;
    char x2211 = x2208;
    char x2212 = *x3;
    /* VAR */ char x2213 = x2212;
    x3 += 1;
    x3 += 1;
    char x2216 = x2213;
    /* VAR */ int x2217 = 0;
    int x2218 = x2217;
    int* x2219 = &x2218;
    char* x2220 = strntoi_unchecked(x3, x2219);
    x3 = x2220;
    /* VAR */ int x2222 = 0;
    int x2223 = x2222;
    int* x2224 = &x2223;
    char* x2225 = strntoi_unchecked(x3, x2224);
    x3 = x2225;
    /* VAR */ int x2227 = 0;
    int x2228 = x2227;
    int* x2229 = &x2228;
    char* x2230 = strntoi_unchecked(x3, x2229);
    x3 = x2230;
    int x2232 = x2218*(10000);
    int x2233 = x2223*(100);
    int x2234 = x2232+(x2233);
    int x2235 = x2234+(x2228);
    /* VAR */ int x2236 = 0;
    int x2237 = x2236;
    int* x2238 = &x2237;
    char* x2239 = strntoi_unchecked(x3, x2238);
    x3 = x2239;
    /* VAR */ int x2241 = 0;
    int x2242 = x2241;
    int* x2243 = &x2242;
    char* x2244 = strntoi_unchecked(x3, x2243);
    x3 = x2244;
    /* VAR */ int x2246 = 0;
    int x2247 = x2246;
    int* x2248 = &x2247;
    char* x2249 = strntoi_unchecked(x3, x2248);
    x3 = x2249;
    int x2251 = x2237*(10000);
    int x2252 = x2242*(100);
    int x2253 = x2251+(x2252);
    int x2254 = x2253+(x2247);
    /* VAR */ int x2255 = 0;
    int x2256 = x2255;
    int* x2257 = &x2256;
    char* x2258 = strntoi_unchecked(x3, x2257);
    x3 = x2258;
    /* VAR */ int x2260 = 0;
    int x2261 = x2260;
    int* x2262 = &x2261;
    char* x2263 = strntoi_unchecked(x3, x2262);
    x3 = x2263;
    /* VAR */ int x2265 = 0;
    int x2266 = x2265;
    int* x2267 = &x2266;
    char* x2268 = strntoi_unchecked(x3, x2267);
    x3 = x2268;
    int x2270 = x2256*(10000);
    int x2271 = x2261*(100);
    int x2272 = x2270+(x2271);
    int x2273 = x2272+(x2266);
    char* x3144 = (char*)malloc(26 * sizeof(char));
    memset(x3144, 0, 26 * sizeof(char));
    /* VAR */ char* x2275 = x3;
    while(1) {
      
      char x2276 = *x3;
      int x2277 = x2276!=('|');
      /* VAR */ int ite12727 = 0;
      if(x2277) {
        char x14391 = *x3;
        int x14392 = x14391!=('\n');
        ite12727 = x14392;
      } else {
        
        ite12727 = 0;
      };
      int x11978 = ite12727;
      if (!(x11978)) break; 
      
      x3 += 1;
    };
    char* x2283 = x2275;
    int x2284 = x3 - x2283;
    char* x2285 = x2275;
    char* x2286 = strncpy(x3144, x2285, x2284);
    x3 += 1;
    char* x3162 = (char*)malloc(11 * sizeof(char));
    memset(x3162, 0, 11 * sizeof(char));
    /* VAR */ char* x2294 = x3;
    while(1) {
      
      char x2295 = *x3;
      int x2296 = x2295!=('|');
      /* VAR */ int ite12750 = 0;
      if(x2296) {
        char x14413 = *x3;
        int x14414 = x14413!=('\n');
        ite12750 = x14414;
      } else {
        
        ite12750 = 0;
      };
      int x11994 = ite12750;
      if (!(x11994)) break; 
      
      x3 += 1;
    };
    char* x2302 = x2294;
    int x2303 = x3 - x2302;
    char* x2304 = x2294;
    char* x2305 = strncpy(x3162, x2304, x2303);
    x3 += 1;
    char* x3180 = (char*)malloc(45 * sizeof(char));
    memset(x3180, 0, 45 * sizeof(char));
    /* VAR */ char* x2313 = x3;
    while(1) {
      
      char x2314 = *x3;
      int x2315 = x2314!=('|');
      /* VAR */ int ite12773 = 0;
      if(x2315) {
        char x14435 = *x3;
        int x14436 = x14435!=('\n');
        ite12773 = x14436;
      } else {
        
        ite12773 = 0;
      };
      int x12010 = ite12773;
      if (!(x12010)) break; 
      
      x3 += 1;
    };
    char* x2321 = x2313;
    int x2322 = x3 - x2321;
    char* x2323 = x2313;
    char* x2324 = strncpy(x3180, x2323, x2322);
    x3 += 1;
    struct LINEITEMRecord* x3627 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x3627, 0, 1 * sizeof(struct LINEITEMRecord));
    x3627->L_ORDERKEY = x2168; x3627->L_PARTKEY = x2173; x3627->L_SUPPKEY = x2178; x3627->L_LINENUMBER = x2183; x3627->L_QUANTITY = x2188; x3627->L_EXTENDEDPRICE = x2193; x3627->L_DISCOUNT = x2198; x3627->L_TAX = x2203; x3627->L_RETURNFLAG = x2211; x3627->L_LINESTATUS = x2216; x3627->L_SHIPDATE = x2235; x3627->L_COMMITDATE = x2254; x3627->L_RECEIPTDATE = x2273; x3627->L_SHIPINSTRUCT = x3144; x3627->L_SHIPMODE = x3162; x3627->L_COMMENT = x3180;
    int x47 = x4;
    *(x3018 + x47) = x3627;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x2337 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x2338 = 0;
  int x2339 = x2338;
  int* x2340 = &x2339;
  int x2341 = fscanf(x2337, "%d", x2340);
  pclose(x2337);
  struct ORDERSRecord** x3210 = (struct ORDERSRecord**)malloc(x2339 * sizeof(struct ORDERSRecord*));
  memset(x3210, 0, x2339 * sizeof(struct ORDERSRecord*));
  int x2345 = O_RDONLY;
  int x2346 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x2345);
  /* VAR */ struct stat x2347 = x2152;
  struct stat x2348 = x2347;
  struct stat* x2349 = &x2348;
  int x2350 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x2349);
  size_t x2351 = x2349->st_size;
  int x2352 = PROT_READ;
  int x2353 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x2351, x2352, x2353, x2346, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x2339);
    /* VAR */ int ite12820 = 0;
    if(x58) {
      char x14481 = *x55;
      int x14482 = x14481!=('\0');
      ite12820 = x14482;
    } else {
      
      ite12820 = 0;
    };
    int x12050 = ite12820;
    if (!(x12050)) break; 
    
    /* VAR */ int x2361 = 0;
    int x2362 = x2361;
    int* x2363 = &x2362;
    char* x2364 = strntoi_unchecked(x55, x2363);
    x55 = x2364;
    /* VAR */ int x2366 = 0;
    int x2367 = x2366;
    int* x2368 = &x2367;
    char* x2369 = strntoi_unchecked(x55, x2368);
    x55 = x2369;
    char x2371 = *x55;
    /* VAR */ char x2372 = x2371;
    x55 += 1;
    x55 += 1;
    char x2375 = x2372;
    /* VAR */ double x2376 = 0.0;
    double x2377 = x2376;
    double* x2378 = &x2377;
    char* x2379 = strntod_unchecked(x55, x2378);
    x55 = x2379;
    /* VAR */ int x2381 = 0;
    int x2382 = x2381;
    int* x2383 = &x2382;
    char* x2384 = strntoi_unchecked(x55, x2383);
    x55 = x2384;
    /* VAR */ int x2386 = 0;
    int x2387 = x2386;
    int* x2388 = &x2387;
    char* x2389 = strntoi_unchecked(x55, x2388);
    x55 = x2389;
    /* VAR */ int x2391 = 0;
    int x2392 = x2391;
    int* x2393 = &x2392;
    char* x2394 = strntoi_unchecked(x55, x2393);
    x55 = x2394;
    int x2396 = x2382*(10000);
    int x2397 = x2387*(100);
    int x2398 = x2396+(x2397);
    int x2399 = x2398+(x2392);
    char* x3267 = (char*)malloc(16 * sizeof(char));
    memset(x3267, 0, 16 * sizeof(char));
    /* VAR */ char* x2401 = x55;
    while(1) {
      
      char x2402 = *x55;
      int x2403 = x2402!=('|');
      /* VAR */ int ite12873 = 0;
      if(x2403) {
        char x14533 = *x55;
        int x14534 = x14533!=('\n');
        ite12873 = x14534;
      } else {
        
        ite12873 = 0;
      };
      int x12096 = ite12873;
      if (!(x12096)) break; 
      
      x55 += 1;
    };
    char* x2409 = x2401;
    int x2410 = x55 - x2409;
    char* x2411 = x2401;
    char* x2412 = strncpy(x3267, x2411, x2410);
    x55 += 1;
    char* x3285 = (char*)malloc(16 * sizeof(char));
    memset(x3285, 0, 16 * sizeof(char));
    /* VAR */ char* x2420 = x55;
    while(1) {
      
      char x2421 = *x55;
      int x2422 = x2421!=('|');
      /* VAR */ int ite12896 = 0;
      if(x2422) {
        char x14555 = *x55;
        int x14556 = x14555!=('\n');
        ite12896 = x14556;
      } else {
        
        ite12896 = 0;
      };
      int x12112 = ite12896;
      if (!(x12112)) break; 
      
      x55 += 1;
    };
    char* x2428 = x2420;
    int x2429 = x55 - x2428;
    char* x2430 = x2420;
    char* x2431 = strncpy(x3285, x2430, x2429);
    x55 += 1;
    /* VAR */ int x2438 = 0;
    int x2439 = x2438;
    int* x2440 = &x2439;
    char* x2441 = strntoi_unchecked(x55, x2440);
    x55 = x2441;
    char* x3308 = (char*)malloc(80 * sizeof(char));
    memset(x3308, 0, 80 * sizeof(char));
    /* VAR */ char* x2444 = x55;
    while(1) {
      
      char x2445 = *x55;
      int x2446 = x2445!=('|');
      /* VAR */ int ite12924 = 0;
      if(x2446) {
        char x14582 = *x55;
        int x14583 = x14582!=('\n');
        ite12924 = x14583;
      } else {
        
        ite12924 = 0;
      };
      int x12133 = ite12924;
      if (!(x12133)) break; 
      
      x55 += 1;
    };
    char* x2452 = x2444;
    int x2453 = x55 - x2452;
    char* x2454 = x2444;
    char* x2455 = strncpy(x3308, x2454, x2453);
    x55 += 1;
    struct ORDERSRecord* x3757 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x3757, 0, 1 * sizeof(struct ORDERSRecord));
    x3757->O_ORDERKEY = x2362; x3757->O_CUSTKEY = x2367; x3757->O_ORDERSTATUS = x2375; x3757->O_TOTALPRICE = x2377; x3757->O_ORDERDATE = x2399; x3757->O_ORDERPRIORITY = x3267; x3757->O_CLERK = x3285; x3757->O_SHIPPRIORITY = x2439; x3757->O_COMMENT = x3308;
    int x91 = x56;
    *(x3210 + x91) = x3757;
    int x93 = x56;
    int x94 = x93+(1);
    x56 = x94;
  };
  int x98 = 0;
  for(; x98 < 1 ; x98 += 1) {
    
    GHashTable* x14858 = g_hash_table_new(x14835, x14853);
    void*** x14866 = (void***){x14859};
    int* x14867 = (int*){x14862};
    GHashTable* x14868 = g_hash_table_new(x14866, x14867);
    /* VAR */ struct timeval x14869 = x1853;
    struct timeval x14870 = x14869;
    /* VAR */ struct timeval x14871 = x1853;
    struct timeval x14872 = x14871;
    /* VAR */ struct timeval x14873 = x1853;
    struct timeval x14874 = x14873;
    struct timeval* x14875 = &x14872;
    gettimeofday(x14875, NULL);
    /* VAR */ int x14877 = 0;
    /* VAR */ int x14878 = 0;
    int* x14891 = &(x14885);
    GTree* x14892 = g_tree_new(x14891);
    /* VAR */ int x14893 = 0;
    /* VAR */ int x14894 = 0;
    while(1) {
      
      int x14896 = x14878;
      int x14897 = x14896<(x2144);
      if (!(x14897)) break; 
      
      int x1138 = x14878;
      struct LINEITEMRecord* x160 = x3018[x1138];
      int x162 = x160->L_COMMITDATE;
      int x163 = x160->L_RECEIPTDATE;
      int x164 = x162<(x163);
      if(x164) {
        int x165 = x160->L_ORDERKEY;
        void* x4245 = (void*){x165};
        void* x4246 = (void*){x160};
        void* x4247 = g_hash_table_lookup(x14868, x4245);
        GList** x4248 = (GList**){x4247};
        GList** x4249 = NULL;
        int x4250 = x4248==(x4249);
        /* VAR */ GList** ite12445 = 0;
        if(x4250) {
          GList** x12446 = malloc(8);
          GList* x12447 = NULL;
          pointer_assign(x12446, x12447);
          ite12445 = x12446;
        } else {
          
          ite12445 = x4248;
        };
        GList** x4254 = ite12445;
        GList* x4255 = *(x4254);
        GList* x4256 = g_list_prepend(x4255, x4246);
        pointer_assign(x4254, x4256);
        void* x4258 = (void*){x4254};
        g_hash_table_insert(x14868, x4245, x4258);
      };
      int x1147 = x14878;
      int x170 = x1147+(1);
      x14878 = x170;
    };
    while(1) {
      
      int x14929 = x14877;
      int x14930 = x14929<(x2339);
      if (!(x14930)) break; 
      
      int x1156 = x14877;
      struct ORDERSRecord* x179 = x3210[x1156];
      int x181 = x179->O_ORDERDATE;
      int x182 = x181<(19931101);
      /* VAR */ int ite13287 = 0;
      if(x182) {
        int x14937 = x181>=(19930801);
        ite13287 = x14937;
      } else {
        
        ite13287 = 0;
      };
      int x12468 = ite13287;
      if(x12468) {
        int x185 = x179->O_ORDERKEY;
        void* x4275 = (void*){x185};
        void* x4276 = g_hash_table_lookup(x14868, x4275);
        GList** x4277 = (GList**){x4276};
        int x7812 = x4277!=(NULL);
        if(x7812) {
          /* VAR */ struct LINEITEMRecord* x5732 = NULL;
          GList* x5733 = *(x4277);
          /* VAR */ GList* x5734 = x5733;
          while(1) {
            
            GList* x5735 = x5734;
            GList* x5736 = NULL;
            int x5737 = x5735!=(x5736);
            if (!(x5737)) break; 
            
            GList* x5738 = x5734;
            void* x5739 = g_list_nth_data(x5738, 0);
            struct LINEITEMRecord* x5740 = (struct LINEITEMRecord*){x5739};
            GList* x5741 = x5734;
            GList* x5742 = g_list_next(x5741);
            x5734 = x5742;
            int x5744 = x5740->L_ORDERKEY;
            int x5745 = x185==(x5744);
            if(x5745) {
              x5732 = x5740;
              break;
            };
          };
          struct LINEITEMRecord* x5750 = x5732;
          int x7837 = x5750!=(NULL);
          if(x7837) {
            char* x230 = x179->O_ORDERPRIORITY;
            void* x5755 = g_hash_table_lookup(x14858, x230);
            int x5229 = x5755==(NULL);
            /* VAR */ struct AGGRecord_OptimalString* ite12505 = 0;
            if(x5229) {
              double* x12506 = (double*)malloc(1 * sizeof(double));
              memset(x12506, 0, 1 * sizeof(double));
              struct AGGRecord_OptimalString* x12507 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
              memset(x12507, 0, 1 * sizeof(struct AGGRecord_OptimalString));
              x12507->key = x230; x12507->aggs = x12506;
              g_hash_table_insert(x14858, x230, x12507);
              ite12505 = x12507;
            } else {
              
              ite12505 = x5755;
            };
            struct AGGRecord_OptimalString* x5239 = ite12505;
            double* x235 = x5239->aggs;
            double x249 = x235[0];
            double x251 = x249+(1.0);
            *x235 = x251;
          };
        };
      };
      int x1235 = x14877;
      int x261 = x1235+(1);
      x14877 = x261;
    };
    GList* x14999 = g_hash_table_get_keys(x14858);
    /* VAR */ GList* x15000 = x14999;
    int x15001 = g_hash_table_size(x14858);
    int x11043 = 0;
    for(; x11043 < x15001 ; x11043 += 1) {
      
      GList* x11044 = x15000;
      void* x11045 = g_list_nth_data(x11044, 0);
      GList* x11046 = g_list_next(x11044);
      x15000 = x11046;
      void* x11048 = g_hash_table_lookup(x14858, x11045);
      struct AGGRecord_OptimalString* x11050 = (struct AGGRecord_OptimalString*){x11048};
      g_tree_insert(x14892, x11050, x11050);
    };
    while(1) {
      
      int x1244 = x14893;
      int x272 = !(x1244);
      /* VAR */ int ite13377 = 0;
      if(x272) {
        int x15026 = g_tree_nnodes(x14892);
        int x15027 = x15026!=(0);
        ite13377 = x15027;
      } else {
        
        ite13377 = 0;
      };
      int x12552 = ite13377;
      if (!(x12552)) break; 
      
      void* x5274 = NULL;
      void** x5282 = &(x5274);
      g_tree_foreach(x14892, x5281, x5282);
      struct AGGRecord_OptimalString* x5284 = (struct AGGRecord_OptimalString*){x5274};
      int x5285 = g_tree_remove(x14892, x5284);
      if(0) {
        x14893 = 1;
      } else {
        
        char* x285 = x5284->key;
        double* x287 = x5284->aggs;
        double x288 = x287[0];
        printf("%s|%.0f\n", x285, x288);
        int x1262 = x14894;
        int x291 = x1262+(1);
        x14894 = x291;
      };
    };
    int x15053 = x14894;
    printf("(%d rows)\n", x15053);
    struct timeval* x15055 = &x14874;
    gettimeofday(x15055, NULL);
    struct timeval* x15057 = &x14870;
    struct timeval* x15058 = &x14874;
    struct timeval* x15059 = &x14872;
    long x15060 = timeval_subtract(x15057, x15058, x15059);
    printf("Generated code run in %ld milliseconds.\n", x15060);
  };
}
/* ----------- FUNCTIONS ----------- */
int x14835(char* x5125) {
  int x9824 = strlen(x5125);
  /* VAR */ int x8763 = 0;
  /* VAR */ int x8764 = 0;
  while(1) {
    
    int x8765 = x8763;
    int x8766 = x8765<(x9824);
    if (!(x8766)) break; 
    
    int x8767 = x8764;
    int x8768 = x8763;
    char* x9832 = pointer_add(x5125, x8768);
    char x9833 = *(x9832);
    int x8771 = x8767+(x9833);
    x8764 = x8771;
    int x8773 = x8763;
    int x8774 = x8773+(1);
    x8763 = x8774;
  };
  int x8777 = x8764;
  return x8777; 
}

int x14853(char* x5130, char* x5131) {
  int x8781 = strcmp(x5130, x5131);
  int x8782 = !(x8781);
  return x8782; 
}

int x14859(void* x4204) {
  int x4205 = g_direct_hash(x4204);
  return x4205; 
}

int x14862(void* x4207, void* x4208) {
  int x4209 = g_direct_equal(x4207, x4208);
  return x4209; 
}

int x14885(struct AGGRecord_OptimalString* x139, struct AGGRecord_OptimalString* x140) {
  char* x141 = x139->key;
  char* x142 = x140->key;
  int x9878 = strcmp(x141, x142);
  return x9878; 
}

int x5281(void* x5275, void* x5276, void* x5277) {
  struct AGGRecord_OptimalString** x5278 = (struct AGGRecord_OptimalString**){x5277};
  struct AGGRecord_OptimalString* x5279 = (struct AGGRecord_OptimalString*){x5276};
  pointer_assign(x5278, x5279);
  return 1; 
}
