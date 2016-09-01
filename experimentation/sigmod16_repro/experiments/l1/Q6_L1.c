#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_String;
  struct LINEITEMRecord;
  
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
  
  


int x9507(char* x2753);

int x9509(char* x2758, char* x2759);
/* GLOBAL VARS */

struct timeval x1048;
int main(int argc, char** argv) {
  FILE* x1222 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x1223 = 0;
  int x1224 = x1223;
  int* x1225 = &x1224;
  int x1226 = fscanf(x1222, "%d", x1225);
  pclose(x1222);
  struct LINEITEMRecord** x1762 = (struct LINEITEMRecord**)malloc(x1224 * sizeof(struct LINEITEMRecord*));
  memset(x1762, 0, x1224 * sizeof(struct LINEITEMRecord*));
  int x1230 = O_RDONLY;
  int x1231 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x1230);
  struct stat x1232 = (struct stat){0};
  /* VAR */ struct stat x1233 = x1232;
  struct stat x1234 = x1233;
  struct stat* x1235 = &x1234;
  int x1236 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x1235);
  size_t x1237 = x1235->st_size;
  int x1238 = PROT_READ;
  int x1239 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x1237, x1238, x1239, x1231, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x1224);
    /* VAR */ int ite6767 = 0;
    if(x6) {
      char x9181 = *x3;
      int x9182 = x9181!=('\0');
      ite6767 = x9182;
    } else {
      
      ite6767 = 0;
    };
    int x6362 = ite6767;
    if (!(x6362)) break; 
    
    /* VAR */ int x1247 = 0;
    int x1248 = x1247;
    int* x1249 = &x1248;
    char* x1250 = strntoi_unchecked(x3, x1249);
    x3 = x1250;
    /* VAR */ int x1252 = 0;
    int x1253 = x1252;
    int* x1254 = &x1253;
    char* x1255 = strntoi_unchecked(x3, x1254);
    x3 = x1255;
    /* VAR */ int x1257 = 0;
    int x1258 = x1257;
    int* x1259 = &x1258;
    char* x1260 = strntoi_unchecked(x3, x1259);
    x3 = x1260;
    /* VAR */ int x1262 = 0;
    int x1263 = x1262;
    int* x1264 = &x1263;
    char* x1265 = strntoi_unchecked(x3, x1264);
    x3 = x1265;
    /* VAR */ double x1267 = 0.0;
    double x1268 = x1267;
    double* x1269 = &x1268;
    char* x1270 = strntod_unchecked(x3, x1269);
    x3 = x1270;
    /* VAR */ double x1272 = 0.0;
    double x1273 = x1272;
    double* x1274 = &x1273;
    char* x1275 = strntod_unchecked(x3, x1274);
    x3 = x1275;
    /* VAR */ double x1277 = 0.0;
    double x1278 = x1277;
    double* x1279 = &x1278;
    char* x1280 = strntod_unchecked(x3, x1279);
    x3 = x1280;
    /* VAR */ double x1282 = 0.0;
    double x1283 = x1282;
    double* x1284 = &x1283;
    char* x1285 = strntod_unchecked(x3, x1284);
    x3 = x1285;
    char x1287 = *x3;
    /* VAR */ char x1288 = x1287;
    x3 += 1;
    x3 += 1;
    char x1291 = x1288;
    char x1292 = *x3;
    /* VAR */ char x1293 = x1292;
    x3 += 1;
    x3 += 1;
    char x1296 = x1293;
    /* VAR */ int x1297 = 0;
    int x1298 = x1297;
    int* x1299 = &x1298;
    char* x1300 = strntoi_unchecked(x3, x1299);
    x3 = x1300;
    /* VAR */ int x1302 = 0;
    int x1303 = x1302;
    int* x1304 = &x1303;
    char* x1305 = strntoi_unchecked(x3, x1304);
    x3 = x1305;
    /* VAR */ int x1307 = 0;
    int x1308 = x1307;
    int* x1309 = &x1308;
    char* x1310 = strntoi_unchecked(x3, x1309);
    x3 = x1310;
    int x1312 = x1298*(10000);
    int x1313 = x1303*(100);
    int x1314 = x1312+(x1313);
    int x1315 = x1314+(x1308);
    /* VAR */ int x1316 = 0;
    int x1317 = x1316;
    int* x1318 = &x1317;
    char* x1319 = strntoi_unchecked(x3, x1318);
    x3 = x1319;
    /* VAR */ int x1321 = 0;
    int x1322 = x1321;
    int* x1323 = &x1322;
    char* x1324 = strntoi_unchecked(x3, x1323);
    x3 = x1324;
    /* VAR */ int x1326 = 0;
    int x1327 = x1326;
    int* x1328 = &x1327;
    char* x1329 = strntoi_unchecked(x3, x1328);
    x3 = x1329;
    int x1331 = x1317*(10000);
    int x1332 = x1322*(100);
    int x1333 = x1331+(x1332);
    int x1334 = x1333+(x1327);
    /* VAR */ int x1335 = 0;
    int x1336 = x1335;
    int* x1337 = &x1336;
    char* x1338 = strntoi_unchecked(x3, x1337);
    x3 = x1338;
    /* VAR */ int x1340 = 0;
    int x1341 = x1340;
    int* x1342 = &x1341;
    char* x1343 = strntoi_unchecked(x3, x1342);
    x3 = x1343;
    /* VAR */ int x1345 = 0;
    int x1346 = x1345;
    int* x1347 = &x1346;
    char* x1348 = strntoi_unchecked(x3, x1347);
    x3 = x1348;
    int x1350 = x1336*(10000);
    int x1351 = x1341*(100);
    int x1352 = x1350+(x1351);
    int x1353 = x1352+(x1346);
    char* x1888 = (char*)malloc(26 * sizeof(char));
    memset(x1888, 0, 26 * sizeof(char));
    /* VAR */ char* x1355 = x3;
    while(1) {
      
      char x1356 = *x3;
      int x1357 = x1356!=('|');
      /* VAR */ int ite6888 = 0;
      if(x1357) {
        char x9301 = *x3;
        int x9302 = x9301!=('\n');
        ite6888 = x9302;
      } else {
        
        ite6888 = 0;
      };
      int x6476 = ite6888;
      if (!(x6476)) break; 
      
      x3 += 1;
    };
    char* x1363 = x1355;
    int x1364 = x3 - x1363;
    char* x1365 = x1355;
    char* x1366 = strncpy(x1888, x1365, x1364);
    x3 += 1;
    char* x1906 = (char*)malloc(11 * sizeof(char));
    memset(x1906, 0, 11 * sizeof(char));
    /* VAR */ char* x1374 = x3;
    while(1) {
      
      char x1375 = *x3;
      int x1376 = x1375!=('|');
      /* VAR */ int ite6911 = 0;
      if(x1376) {
        char x9323 = *x3;
        int x9324 = x9323!=('\n');
        ite6911 = x9324;
      } else {
        
        ite6911 = 0;
      };
      int x6492 = ite6911;
      if (!(x6492)) break; 
      
      x3 += 1;
    };
    char* x1382 = x1374;
    int x1383 = x3 - x1382;
    char* x1384 = x1374;
    char* x1385 = strncpy(x1906, x1384, x1383);
    x3 += 1;
    char* x1924 = (char*)malloc(45 * sizeof(char));
    memset(x1924, 0, 45 * sizeof(char));
    /* VAR */ char* x1393 = x3;
    while(1) {
      
      char x1394 = *x3;
      int x1395 = x1394!=('|');
      /* VAR */ int ite6934 = 0;
      if(x1395) {
        char x9345 = *x3;
        int x9346 = x9345!=('\n');
        ite6934 = x9346;
      } else {
        
        ite6934 = 0;
      };
      int x6508 = ite6934;
      if (!(x6508)) break; 
      
      x3 += 1;
    };
    char* x1401 = x1393;
    int x1402 = x3 - x1401;
    char* x1403 = x1393;
    char* x1404 = strncpy(x1924, x1403, x1402);
    x3 += 1;
    struct LINEITEMRecord* x2206 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x2206, 0, 1 * sizeof(struct LINEITEMRecord));
    x2206->L_ORDERKEY = x1248; x2206->L_PARTKEY = x1253; x2206->L_SUPPKEY = x1258; x2206->L_LINENUMBER = x1263; x2206->L_QUANTITY = x1268; x2206->L_EXTENDEDPRICE = x1273; x2206->L_DISCOUNT = x1278; x2206->L_TAX = x1283; x2206->L_RETURNFLAG = x1291; x2206->L_LINESTATUS = x1296; x2206->L_SHIPDATE = x1315; x2206->L_COMMITDATE = x1334; x2206->L_RECEIPTDATE = x1353; x2206->L_SHIPINSTRUCT = x1888; x2206->L_SHIPMODE = x1906; x2206->L_COMMENT = x1924;
    int x47 = x4;
    *(x1762 + x47) = x2206;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  int x54 = 0;
  for(; x54 < 1 ; x54 += 1) {
    
    GHashTable* x9514 = g_hash_table_new(x9507, x9509);
    /* VAR */ struct timeval x9515 = x1048;
    struct timeval x9516 = x9515;
    /* VAR */ struct timeval x9517 = x1048;
    struct timeval x9518 = x9517;
    /* VAR */ struct timeval x9519 = x1048;
    struct timeval x9520 = x9519;
    struct timeval* x9521 = &x9518;
    gettimeofday(x9521, NULL);
    /* VAR */ int x9523 = 0;
    /* VAR */ int x9524 = 0;
    /* VAR */ int x9525 = 0;
    while(1) {
      
      int x9527 = x9523;
      int x9528 = x9527<(x1224);
      if (!(x9528)) break; 
      
      int x641 = x9523;
      struct LINEITEMRecord* x98 = x1762[x641];
      int x100 = x98->L_SHIPDATE;
      int x101 = x100>=(19960101);
      /* VAR */ int ite7108 = 0;
      if(x101) {
        int x9535 = x100<(19970101);
        /* VAR */ int x9536 = 0;
        if(x9535) {
          double x9538 = x98->L_DISCOUNT;
          int x9539 = x9538>=(0.08);
          /* VAR */ int x9540 = 0;
          if(x9539) {
            int x9542 = x9538<=(0.1);
            /* VAR */ int x9543 = 0;
            if(x9542) {
              double x9545 = x98->L_QUANTITY;
              int x9546 = x9545<(24.0);
              x9543 = x9546;
            } else {
              
              x9543 = 0;
            };
            int x9550 = x9543;
            x9540 = x9550;
          } else {
            
            x9540 = 0;
          };
          int x9554 = x9540;
          x9536 = x9554;
        } else {
          
          x9536 = 0;
        };
        int x9558 = x9536;
        ite7108 = x9558;
      } else {
        
        ite7108 = 0;
      };
      int x6663 = ite7108;
      if(x6663) {
        void* x3104 = g_hash_table_lookup(x9514, "Total");
        int x2797 = x3104==(NULL);
        /* VAR */ struct AGGRecord_String* ite6668 = 0;
        if(x2797) {
          double* x6669 = (double*)malloc(1 * sizeof(double));
          memset(x6669, 0, 1 * sizeof(double));
          struct AGGRecord_String* x6670 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
          memset(x6670, 0, 1 * sizeof(struct AGGRecord_String));
          x6670->key = "Total"; x6670->aggs = x6669;
          g_hash_table_insert(x9514, "Total", x6670);
          ite6668 = x6670;
        } else {
          
          ite6668 = x3104;
        };
        struct AGGRecord_String* x2807 = ite6668;
        double* x117 = x2807->aggs;
        double x131 = x117[0];
        double x132 = x98->L_EXTENDEDPRICE;
        double x133 = x98->L_DISCOUNT;
        double x134 = x132*(x133);
        double x135 = x134+(x131);
        *x117 = x135;
      };
      int x685 = x9523;
      int x143 = x685+(1);
      x9523 = x143;
    };
    GList* x9598 = g_hash_table_get_keys(x9514);
    /* VAR */ GList* x9599 = x9598;
    int x9600 = g_hash_table_size(x9514);
    int x5872 = 0;
    for(; x5872 < x9600 ; x5872 += 1) {
      
      GList* x5873 = x9599;
      void* x5874 = g_list_nth_data(x5873, 0);
      GList* x5875 = g_list_next(x5873);
      x9599 = x5875;
      void* x5877 = g_hash_table_lookup(x9514, x5874);
      struct AGGRecord_String* x5879 = (struct AGGRecord_String*){x5877};
      if(0) {
        x9524 = 1;
      } else {
        
        double* x154 = x5879->aggs;
        double x155 = x154[0];
        printf("%.4f\n", x155);
        int x700 = x9525;
        int x158 = x700+(1);
        x9525 = x158;
      };
    };
    int x9634 = x9525;
    printf("(%d rows)\n", x9634);
    struct timeval* x9636 = &x9520;
    gettimeofday(x9636, NULL);
    struct timeval* x9638 = &x9516;
    struct timeval* x9639 = &x9520;
    struct timeval* x9640 = &x9518;
    long x9641 = timeval_subtract(x9638, x9639, x9640);
    printf("Generated code run in %ld milliseconds.\n", x9641);
  };
}
/* ----------- FUNCTIONS ----------- */
int x9507(char* x2753) {
  return 0; 
}

int x9509(char* x2758, char* x2759) {
  int x4585 = strcmp(x2758, x2759);
  int x4586 = !(x4585);
  return x4586; 
}
