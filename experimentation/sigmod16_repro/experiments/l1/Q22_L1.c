#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_String;
  struct AGGRecord_OptimalString;
  struct ORDERSRecord;
  struct CUSTOMERRecord;
  
  struct AGGRecord_String {
  char* key;
  double* aggs;
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
  
  


int x31875(char* x6528);

int x31893(char* x6533, char* x6534);

int x31899(void* x5475);

int x31902(void* x5478, void* x5479);

int x31909(char* x6551);

int x31911(char* x6556, char* x6557);

int x32089(struct AGGRecord_OptimalString* x293, struct AGGRecord_OptimalString* x294);

int x6944(void* x6938, void* x6939, void* x6940);
/* GLOBAL VARS */

struct timeval x2879;
int main(int argc, char** argv) {
  FILE* x3343 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x3344 = 0;
  int x3345 = x3344;
  int* x3346 = &x3345;
  int x3347 = fscanf(x3343, "%d", x3346);
  pclose(x3343);
  struct CUSTOMERRecord** x4283 = (struct CUSTOMERRecord**)malloc(x3345 * sizeof(struct CUSTOMERRecord*));
  memset(x4283, 0, x3345 * sizeof(struct CUSTOMERRecord*));
  int x3351 = O_RDONLY;
  int x3352 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x3351);
  struct stat x3353 = (struct stat){0};
  /* VAR */ struct stat x3354 = x3353;
  struct stat x3355 = x3354;
  struct stat* x3356 = &x3355;
  int x3357 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x3356);
  size_t x3358 = x3356->st_size;
  int x3359 = PROT_READ;
  int x3360 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x3358, x3359, x3360, x3352, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x3345);
    /* VAR */ int ite17702 = 0;
    if(x6) {
      char x30899 = *x3;
      int x30900 = x30899!=('\0');
      ite17702 = x30900;
    } else {
      
      ite17702 = 0;
    };
    int x16332 = ite17702;
    if (!(x16332)) break; 
    
    /* VAR */ int x3368 = 0;
    int x3369 = x3368;
    int* x3370 = &x3369;
    char* x3371 = strntoi_unchecked(x3, x3370);
    x3 = x3371;
    char* x4307 = (char*)malloc(26 * sizeof(char));
    memset(x4307, 0, 26 * sizeof(char));
    /* VAR */ char* x3374 = x3;
    while(1) {
      
      char x3375 = *x3;
      int x3376 = x3375!=('|');
      /* VAR */ int ite17721 = 0;
      if(x3376) {
        char x30917 = *x3;
        int x30918 = x30917!=('\n');
        ite17721 = x30918;
      } else {
        
        ite17721 = 0;
      };
      int x16344 = ite17721;
      if (!(x16344)) break; 
      
      x3 += 1;
    };
    char* x3382 = x3374;
    int x3383 = x3 - x3382;
    char* x3384 = x3374;
    char* x3385 = strncpy(x4307, x3384, x3383);
    x3 += 1;
    char* x4325 = (char*)malloc(41 * sizeof(char));
    memset(x4325, 0, 41 * sizeof(char));
    /* VAR */ char* x3393 = x3;
    while(1) {
      
      char x3394 = *x3;
      int x3395 = x3394!=('|');
      /* VAR */ int ite17744 = 0;
      if(x3395) {
        char x30939 = *x3;
        int x30940 = x30939!=('\n');
        ite17744 = x30940;
      } else {
        
        ite17744 = 0;
      };
      int x16360 = ite17744;
      if (!(x16360)) break; 
      
      x3 += 1;
    };
    char* x3401 = x3393;
    int x3402 = x3 - x3401;
    char* x3403 = x3393;
    char* x3404 = strncpy(x4325, x3403, x3402);
    x3 += 1;
    /* VAR */ int x3411 = 0;
    int x3412 = x3411;
    int* x3413 = &x3412;
    char* x3414 = strntoi_unchecked(x3, x3413);
    x3 = x3414;
    char* x4348 = (char*)malloc(16 * sizeof(char));
    memset(x4348, 0, 16 * sizeof(char));
    /* VAR */ char* x3417 = x3;
    while(1) {
      
      char x3418 = *x3;
      int x3419 = x3418!=('|');
      /* VAR */ int ite17772 = 0;
      if(x3419) {
        char x30966 = *x3;
        int x30967 = x30966!=('\n');
        ite17772 = x30967;
      } else {
        
        ite17772 = 0;
      };
      int x16381 = ite17772;
      if (!(x16381)) break; 
      
      x3 += 1;
    };
    char* x3425 = x3417;
    int x3426 = x3 - x3425;
    char* x3427 = x3417;
    char* x3428 = strncpy(x4348, x3427, x3426);
    x3 += 1;
    /* VAR */ double x3435 = 0.0;
    double x3436 = x3435;
    double* x3437 = &x3436;
    char* x3438 = strntod_unchecked(x3, x3437);
    x3 = x3438;
    char* x4371 = (char*)malloc(11 * sizeof(char));
    memset(x4371, 0, 11 * sizeof(char));
    /* VAR */ char* x3441 = x3;
    while(1) {
      
      char x3442 = *x3;
      int x3443 = x3442!=('|');
      /* VAR */ int ite17800 = 0;
      if(x3443) {
        char x30993 = *x3;
        int x30994 = x30993!=('\n');
        ite17800 = x30994;
      } else {
        
        ite17800 = 0;
      };
      int x16402 = ite17800;
      if (!(x16402)) break; 
      
      x3 += 1;
    };
    char* x3449 = x3441;
    int x3450 = x3 - x3449;
    char* x3451 = x3441;
    char* x3452 = strncpy(x4371, x3451, x3450);
    x3 += 1;
    char* x4389 = (char*)malloc(118 * sizeof(char));
    memset(x4389, 0, 118 * sizeof(char));
    /* VAR */ char* x3460 = x3;
    while(1) {
      
      char x3461 = *x3;
      int x3462 = x3461!=('|');
      /* VAR */ int ite17823 = 0;
      if(x3462) {
        char x31015 = *x3;
        int x31016 = x31015!=('\n');
        ite17823 = x31016;
      } else {
        
        ite17823 = 0;
      };
      int x16418 = ite17823;
      if (!(x16418)) break; 
      
      x3 += 1;
    };
    char* x3468 = x3460;
    int x3469 = x3 - x3468;
    char* x3470 = x3460;
    char* x3471 = strncpy(x4389, x3470, x3469);
    x3 += 1;
    struct CUSTOMERRecord* x4866 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x4866, 0, 1 * sizeof(struct CUSTOMERRecord));
    x4866->C_CUSTKEY = x3369; x4866->C_NAME = x4307; x4866->C_ADDRESS = x4325; x4866->C_NATIONKEY = x3412; x4866->C_PHONE = x4348; x4866->C_ACCTBAL = x3436; x4866->C_MKTSEGMENT = x4371; x4866->C_COMMENT = x4389;
    int x53 = x4;
    *(x4283 + x53) = x4866;
    int x55 = x4;
    int x56 = x55+(1);
    x4 = x56;
  };
  FILE* x3484 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x3485 = 0;
  int x3486 = x3485;
  int* x3487 = &x3486;
  int x3488 = fscanf(x3484, "%d", x3487);
  pclose(x3484);
  struct ORDERSRecord** x4419 = (struct ORDERSRecord**)malloc(x3486 * sizeof(struct ORDERSRecord*));
  memset(x4419, 0, x3486 * sizeof(struct ORDERSRecord*));
  int x3492 = O_RDONLY;
  int x3493 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x3492);
  /* VAR */ struct stat x3494 = x3353;
  struct stat x3495 = x3494;
  struct stat* x3496 = &x3495;
  int x3497 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x3496);
  size_t x3498 = x3496->st_size;
  int x3499 = PROT_READ;
  int x3500 = MAP_PRIVATE;
  char* x61 = mmap(NULL, x3498, x3499, x3500, x3493, 0);
  /* VAR */ int x62 = 0;
  while(1) {
    
    int x63 = x62;
    int x64 = x63<(x3486);
    /* VAR */ int ite17870 = 0;
    if(x64) {
      char x31061 = *x61;
      int x31062 = x31061!=('\0');
      ite17870 = x31062;
    } else {
      
      ite17870 = 0;
    };
    int x16458 = ite17870;
    if (!(x16458)) break; 
    
    /* VAR */ int x3508 = 0;
    int x3509 = x3508;
    int* x3510 = &x3509;
    char* x3511 = strntoi_unchecked(x61, x3510);
    x61 = x3511;
    /* VAR */ int x3513 = 0;
    int x3514 = x3513;
    int* x3515 = &x3514;
    char* x3516 = strntoi_unchecked(x61, x3515);
    x61 = x3516;
    char x3518 = *x61;
    /* VAR */ char x3519 = x3518;
    x61 += 1;
    x61 += 1;
    char x3522 = x3519;
    /* VAR */ double x3523 = 0.0;
    double x3524 = x3523;
    double* x3525 = &x3524;
    char* x3526 = strntod_unchecked(x61, x3525);
    x61 = x3526;
    /* VAR */ int x3528 = 0;
    int x3529 = x3528;
    int* x3530 = &x3529;
    char* x3531 = strntoi_unchecked(x61, x3530);
    x61 = x3531;
    /* VAR */ int x3533 = 0;
    int x3534 = x3533;
    int* x3535 = &x3534;
    char* x3536 = strntoi_unchecked(x61, x3535);
    x61 = x3536;
    /* VAR */ int x3538 = 0;
    int x3539 = x3538;
    int* x3540 = &x3539;
    char* x3541 = strntoi_unchecked(x61, x3540);
    x61 = x3541;
    int x3543 = x3529*(10000);
    int x3544 = x3534*(100);
    int x3545 = x3543+(x3544);
    int x3546 = x3545+(x3539);
    char* x4476 = (char*)malloc(16 * sizeof(char));
    memset(x4476, 0, 16 * sizeof(char));
    /* VAR */ char* x3548 = x61;
    while(1) {
      
      char x3549 = *x61;
      int x3550 = x3549!=('|');
      /* VAR */ int ite17923 = 0;
      if(x3550) {
        char x31113 = *x61;
        int x31114 = x31113!=('\n');
        ite17923 = x31114;
      } else {
        
        ite17923 = 0;
      };
      int x16504 = ite17923;
      if (!(x16504)) break; 
      
      x61 += 1;
    };
    char* x3556 = x3548;
    int x3557 = x61 - x3556;
    char* x3558 = x3548;
    char* x3559 = strncpy(x4476, x3558, x3557);
    x61 += 1;
    char* x4494 = (char*)malloc(16 * sizeof(char));
    memset(x4494, 0, 16 * sizeof(char));
    /* VAR */ char* x3567 = x61;
    while(1) {
      
      char x3568 = *x61;
      int x3569 = x3568!=('|');
      /* VAR */ int ite17946 = 0;
      if(x3569) {
        char x31135 = *x61;
        int x31136 = x31135!=('\n');
        ite17946 = x31136;
      } else {
        
        ite17946 = 0;
      };
      int x16520 = ite17946;
      if (!(x16520)) break; 
      
      x61 += 1;
    };
    char* x3575 = x3567;
    int x3576 = x61 - x3575;
    char* x3577 = x3567;
    char* x3578 = strncpy(x4494, x3577, x3576);
    x61 += 1;
    /* VAR */ int x3585 = 0;
    int x3586 = x3585;
    int* x3587 = &x3586;
    char* x3588 = strntoi_unchecked(x61, x3587);
    x61 = x3588;
    char* x4517 = (char*)malloc(80 * sizeof(char));
    memset(x4517, 0, 80 * sizeof(char));
    /* VAR */ char* x3591 = x61;
    while(1) {
      
      char x3592 = *x61;
      int x3593 = x3592!=('|');
      /* VAR */ int ite17974 = 0;
      if(x3593) {
        char x31162 = *x61;
        int x31163 = x31162!=('\n');
        ite17974 = x31163;
      } else {
        
        ite17974 = 0;
      };
      int x16541 = ite17974;
      if (!(x16541)) break; 
      
      x61 += 1;
    };
    char* x3599 = x3591;
    int x3600 = x61 - x3599;
    char* x3601 = x3591;
    char* x3602 = strncpy(x4517, x3601, x3600);
    x61 += 1;
    struct ORDERSRecord* x4996 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x4996, 0, 1 * sizeof(struct ORDERSRecord));
    x4996->O_ORDERKEY = x3509; x4996->O_CUSTKEY = x3514; x4996->O_ORDERSTATUS = x3522; x4996->O_TOTALPRICE = x3524; x4996->O_ORDERDATE = x3546; x4996->O_ORDERPRIORITY = x4476; x4996->O_CLERK = x4494; x4996->O_SHIPPRIORITY = x3586; x4996->O_COMMENT = x4517;
    int x97 = x62;
    *(x4419 + x97) = x4996;
    int x99 = x62;
    int x100 = x99+(1);
    x62 = x100;
  };
  int x104 = 0;
  for(; x104 < 1 ; x104 += 1) {
    
    GHashTable* x31898 = g_hash_table_new(x31875, x31893);
    void*** x31906 = (void***){x31899};
    int* x31907 = (int*){x31902};
    GHashTable* x31908 = g_hash_table_new(x31906, x31907);
    GHashTable* x31916 = g_hash_table_new(x31909, x31911);
    /* VAR */ struct timeval x31917 = x2879;
    struct timeval x31918 = x31917;
    /* VAR */ struct timeval x31919 = x2879;
    struct timeval x31920 = x31919;
    /* VAR */ struct timeval x31921 = x2879;
    struct timeval x31922 = x31921;
    struct timeval* x31923 = &x31920;
    gettimeofday(x31923, NULL);
    /* VAR */ int x31925 = 0;
    /* VAR */ struct AGGRecord_String* x31926 = NULL;
    while(1) {
      
      int x31928 = x31925;
      int x31929 = x31928<(x3345);
      if (!(x31929)) break; 
      
      int x1667 = x31925;
      struct CUSTOMERRecord* x164 = x4283[x1667];
      double x166 = x164->C_ACCTBAL;
      int x167 = x166>(0.0);
      /* VAR */ int ite18663 = 0;
      if(x167) {
        char* x31936 = x164->C_PHONE;
        int x31937 = strlen("23");
        int x31938 = strncmp(x31936, "23", x31937);
        int x31939 = x31938==(0);
        /* VAR */ int x31940 = 0;
        if(x31939) {
          x31940 = 1;
        } else {
          
          int x31943 = strlen("29");
          int x31944 = strncmp(x31936, "29", x31943);
          int x31945 = x31944==(0);
          /* VAR */ int x31946 = 0;
          if(x31945) {
            x31946 = 1;
          } else {
            
            int x31949 = strlen("22");
            int x31950 = strncmp(x31936, "22", x31949);
            int x31951 = x31950==(0);
            /* VAR */ int x31952 = 0;
            if(x31951) {
              x31952 = 1;
            } else {
              
              int x31955 = strlen("20");
              int x31956 = strncmp(x31936, "20", x31955);
              int x31957 = x31956==(0);
              /* VAR */ int x31958 = 0;
              if(x31957) {
                x31958 = 1;
              } else {
                
                int x31961 = strlen("24");
                int x31962 = strncmp(x31936, "24", x31961);
                int x31963 = x31962==(0);
                /* VAR */ int x31964 = 0;
                if(x31963) {
                  x31964 = 1;
                } else {
                  
                  int x31967 = strlen("26");
                  int x31968 = strncmp(x31936, "26", x31967);
                  int x31969 = x31968==(0);
                  /* VAR */ int x31970 = 0;
                  if(x31969) {
                    x31970 = 1;
                  } else {
                    
                    int x31973 = strlen("25");
                    int x31974 = strncmp(x31936, "25", x31973);
                    int x31975 = x31974==(0);
                    x31970 = x31975;
                  };
                  int x31978 = x31970;
                  x31964 = x31978;
                };
                int x31981 = x31964;
                x31958 = x31981;
              };
              int x31984 = x31958;
              x31952 = x31984;
            };
            int x31987 = x31952;
            x31946 = x31987;
          };
          int x31990 = x31946;
          x31940 = x31990;
        };
        int x31993 = x31940;
        ite18663 = x31993;
      } else {
        
        ite18663 = 0;
      };
      int x17180 = ite18663;
      if(x17180) {
        void* x7304 = g_hash_table_lookup(x31916, "AVG_C_ACCTBAL");
        int x6599 = x7304==(NULL);
        /* VAR */ struct AGGRecord_String* ite17185 = 0;
        if(x6599) {
          double* x17186 = (double*)malloc(3 * sizeof(double));
          memset(x17186, 0, 3 * sizeof(double));
          struct AGGRecord_String* x17187 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
          memset(x17187, 0, 1 * sizeof(struct AGGRecord_String));
          x17187->key = "AVG_C_ACCTBAL"; x17187->aggs = x17186;
          g_hash_table_insert(x31916, "AVG_C_ACCTBAL", x17187);
          ite17185 = x17187;
        } else {
          
          ite17185 = x7304;
        };
        struct AGGRecord_String* x6609 = ite17185;
        double* x187 = x6609->aggs;
        double x201 = x187[0];
        double x202 = x166+(x201);
        *x187 = x202;
        double x210 = x187[1];
        double x212 = x210+(1.0);
        *(x187 + 1) = x212;
      };
      int x1722 = x31925;
      int x220 = x1722+(1);
      x31925 = x220;
    };
    GList* x32031 = g_hash_table_get_keys(x31916);
    /* VAR */ GList* x32032 = x32031;
    int x32033 = g_hash_table_size(x31916);
    int x14440 = 0;
    for(; x14440 < x32033 ; x14440 += 1) {
      
      GList* x14441 = x32032;
      void* x14442 = g_list_nth_data(x14441, 0);
      GList* x14443 = g_list_next(x14441);
      x32032 = x14443;
      void* x14445 = g_hash_table_lookup(x31916, x14442);
      struct AGGRecord_String* x14447 = (struct AGGRecord_String*){x14445};
      double* x14448 = x14447->aggs;
      double x14449 = x14448[0];
      double x14450 = x14448[1];
      double x14451 = x14449/(x14450);
      *(x14448 + 2) = x14451;
      x31926 = x14447;
    };
    struct AGGRecord_String* x32063 = x31926;
    double* x32064 = x32063->aggs;
    double x32065 = x32064[2];
    /* VAR */ int x32066 = 0;
    /* VAR */ int x32067 = 0;
    int* x32110 = &(x32089);
    GTree* x32111 = g_tree_new(x32110);
    /* VAR */ int x32112 = 0;
    /* VAR */ int x32113 = 0;
    while(1) {
      
      int x32115 = x32066;
      int x32116 = x32115<(x3345);
      if (!(x32116)) break; 
      
      int x1851 = x32066;
      struct CUSTOMERRecord* x326 = x4283[x1851];
      char* x328 = x326->C_PHONE;
      int x12988 = strlen("23");
      int x12989 = strncmp(x328, "23", x12988);
      int x12990 = x12989==(0);
      /* VAR */ int ite18802 = 0;
      if(x12990) {
        ite18802 = 1;
      } else {
        
        int x32126 = strlen("29");
        int x32127 = strncmp(x328, "29", x32126);
        int x32128 = x32127==(0);
        /* VAR */ int x32129 = 0;
        if(x32128) {
          x32129 = 1;
        } else {
          
          int x32132 = strlen("22");
          int x32133 = strncmp(x328, "22", x32132);
          int x32134 = x32133==(0);
          /* VAR */ int x32135 = 0;
          if(x32134) {
            x32135 = 1;
          } else {
            
            int x32138 = strlen("20");
            int x32139 = strncmp(x328, "20", x32138);
            int x32140 = x32139==(0);
            /* VAR */ int x32141 = 0;
            if(x32140) {
              x32141 = 1;
            } else {
              
              int x32144 = strlen("24");
              int x32145 = strncmp(x328, "24", x32144);
              int x32146 = x32145==(0);
              /* VAR */ int x32147 = 0;
              if(x32146) {
                x32147 = 1;
              } else {
                
                int x32150 = strlen("26");
                int x32151 = strncmp(x328, "26", x32150);
                int x32152 = x32151==(0);
                /* VAR */ int x32153 = 0;
                if(x32152) {
                  x32153 = 1;
                } else {
                  
                  int x32156 = strlen("25");
                  int x32157 = strncmp(x328, "25", x32156);
                  int x32158 = x32157==(0);
                  x32153 = x32158;
                };
                int x32161 = x32153;
                x32147 = x32161;
              };
              int x32164 = x32147;
              x32141 = x32164;
            };
            int x32167 = x32141;
            x32135 = x32167;
          };
          int x32170 = x32135;
          x32129 = x32170;
        };
        int x32173 = x32129;
        ite18802 = x32173;
      };
      int x17306 = ite18802;
      /* VAR */ int ite18814 = 0;
      if(x17306) {
        double x32179 = x326->C_ACCTBAL;
        int x32180 = x32179>(x32065);
        ite18814 = x32180;
      } else {
        
        ite18814 = 0;
      };
      int x17308 = ite18814;
      if(x17308) {
        int x345 = x326->C_CUSTKEY;
        void* x5596 = (void*){x345};
        void* x5597 = (void*){x326};
        void* x5598 = g_hash_table_lookup(x31908, x5596);
        GList** x5599 = (GList**){x5598};
        GList** x5600 = NULL;
        int x5601 = x5599==(x5600);
        /* VAR */ GList** ite17318 = 0;
        if(x5601) {
          GList** x17319 = malloc(8);
          GList* x17320 = NULL;
          pointer_assign(x17319, x17320);
          ite17318 = x17319;
        } else {
          
          ite17318 = x5599;
        };
        GList** x5605 = ite17318;
        GList* x5606 = *(x5605);
        GList* x5607 = g_list_prepend(x5606, x5597);
        pointer_assign(x5605, x5607);
        void* x5609 = (void*){x5605};
        g_hash_table_insert(x31908, x5596, x5609);
      };
      int x1874 = x32066;
      int x350 = x1874+(1);
      x32066 = x350;
    };
    while(1) {
      
      int x32211 = x32067;
      int x32212 = x32211<(x3486);
      if (!(x32212)) break; 
      
      int x1883 = x32067;
      struct ORDERSRecord* x359 = x4419[x1883];
      int x361 = x359->O_CUSTKEY;
      void* x5621 = (void*){x361};
      void* x5622 = g_hash_table_lookup(x31908, x5621);
      GList** x5623 = (GList**){x5622};
      int x10219 = x5623!=(NULL);
      if(x10219) {
        GList* x6754 = *(x5623);
        /* VAR */ GList* x6755 = x6754;
        /* VAR */ GList** x6756 = x5623;
        while(1) {
          
          GList* x6757 = x6755;
          GList* x6758 = NULL;
          int x6759 = x6757!=(x6758);
          if (!(x6759)) break; 
          
          GList* x6760 = x6755;
          void* x6761 = g_list_nth_data(x6760, 0);
          struct CUSTOMERRecord* x6762 = (struct CUSTOMERRecord*){x6761};
          int x6763 = x6762->C_CUSTKEY;
          int x6764 = x6763==(x361);
          int x6765 = !(x6764);
          if(x6765) {
            GList* x6766 = x6755;
            GList* x6767 = x6766->next;
            GList** x6768 = &(x6767);
            x6756 = x6768;
          } else {
            
            GList** x6770 = x6756;
            GList* x6771 = x6755;
            GList* x6772 = g_list_next(x6771);
            pointer_assign(x6770, x6772);
          };
          GList* x6775 = x6755;
          GList* x6776 = g_list_next(x6775);
          x6755 = x6776;
        };
      };
      int x1905 = x32067;
      int x382 = x1905+(1);
      x32067 = x382;
    };
    GList* x32330 = g_hash_table_get_keys(x31908);
    /* VAR */ GList* x32331 = x32330;
    int x32332 = g_hash_table_size(x31908);
    int x14748 = 0;
    for(; x14748 < x32332 ; x14748 += 1) {
      
      GList* x14749 = x32331;
      void* x14750 = g_list_nth_data(x14749, 0);
      GList* x14751 = x32331;
      GList* x14752 = g_list_next(x14751);
      x32331 = x14752;
      void* x14754 = g_hash_table_lookup(x31908, x14750);
      GList** x14755 = (GList**){x14754};
      GList* x14782 = *(x14755);
      /* VAR */ GList* x14783 = x14782;
      while(1) {
        
        GList* x6881 = x14783;
        GList* x6882 = NULL;
        int x6883 = x6881!=(x6882);
        if (!(x6883)) break; 
        
        GList* x6884 = x14783;
        void* x6885 = g_list_nth_data(x6884, 0);
        struct CUSTOMERRecord* x6886 = (struct CUSTOMERRecord*){x6885};
        GList* x6887 = x14783;
        GList* x6888 = g_list_next(x6887);
        x14783 = x6888;
        char* x6890 = x6886->C_PHONE;
        int x13201 = 2-(0);
        int x13202 = x13201+(1);
        char* x13203 = malloc(x13202);
        char* x13204 = pointer_add(x6890, 0);
        int x13205 = x13202-(1);
        char* x13206 = strncpy(x13203, x13204, x13205);
        *(x13203 + x13205) = '\0';
        void* x6892 = g_hash_table_lookup(x31898, x13203);
        int x6893 = x6892==(NULL);
        /* VAR */ struct AGGRecord_OptimalString* ite17599 = 0;
        if(x6893) {
          double* x17600 = (double*)malloc(2 * sizeof(double));
          memset(x17600, 0, 2 * sizeof(double));
          struct AGGRecord_OptimalString* x17601 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
          memset(x17601, 0, 1 * sizeof(struct AGGRecord_OptimalString));
          x17601->key = x13203; x17601->aggs = x17600;
          g_hash_table_insert(x31898, x13203, x17601);
          ite17599 = x17601;
        } else {
          
          ite17599 = x6892;
        };
        struct AGGRecord_OptimalString* x6894 = ite17599;
        double* x6900 = x6894->aggs;
        double x6901 = x6900[0];
        double x6902 = x6886->C_ACCTBAL;
        double x6903 = x6902+(x6901);
        *x6900 = x6903;
        double x6905 = x6900[1];
        double x6906 = x6905+(1.0);
        *(x6900 + 1) = x6906;
      };
    };
    GList* x32498 = g_hash_table_get_keys(x31898);
    /* VAR */ GList* x32499 = x32498;
    int x32500 = g_hash_table_size(x31898);
    int x14836 = 0;
    for(; x14836 < x32500 ; x14836 += 1) {
      
      GList* x14837 = x32499;
      void* x14838 = g_list_nth_data(x14837, 0);
      GList* x14839 = g_list_next(x14837);
      x32499 = x14839;
      void* x14841 = g_hash_table_lookup(x31898, x14838);
      struct AGGRecord_OptimalString* x14843 = (struct AGGRecord_OptimalString*){x14841};
      g_tree_insert(x32111, x14843, x14843);
    };
    while(1) {
      
      int x1959 = x32112;
      int x440 = !(x1959);
      /* VAR */ int ite19162 = 0;
      if(x440) {
        int x32525 = g_tree_nnodes(x32111);
        int x32526 = x32525!=(0);
        ite19162 = x32526;
      } else {
        
        ite19162 = 0;
      };
      int x17647 = ite19162;
      if (!(x17647)) break; 
      
      void* x6937 = NULL;
      void** x6945 = &(x6937);
      g_tree_foreach(x32111, x6944, x6945);
      struct AGGRecord_OptimalString* x6947 = (struct AGGRecord_OptimalString*){x6937};
      int x6948 = g_tree_remove(x32111, x6947);
      if(0) {
        x32112 = 1;
      } else {
        
        char* x453 = x6947->key;
        double* x455 = x6947->aggs;
        double x456 = x455[1];
        double x457 = x455[0];
        printf("%s|%.0f|%.2f\n", x453, x456, x457);
        int x1978 = x32113;
        int x460 = x1978+(1);
        x32113 = x460;
      };
    };
    int x32553 = x32113;
    printf("(%d rows)\n", x32553);
    struct timeval* x32555 = &x31922;
    gettimeofday(x32555, NULL);
    struct timeval* x32557 = &x31918;
    struct timeval* x32558 = &x31922;
    struct timeval* x32559 = &x31920;
    long x32560 = timeval_subtract(x32557, x32558, x32559);
    printf("Generated code run in %ld milliseconds.\n", x32560);
  };
}
/* ----------- FUNCTIONS ----------- */
int x31875(char* x6528) {
  int x12794 = strlen(x6528);
  /* VAR */ int x11395 = 0;
  /* VAR */ int x11396 = 0;
  while(1) {
    
    int x11397 = x11395;
    int x11398 = x11397<(x12794);
    if (!(x11398)) break; 
    
    int x11399 = x11396;
    int x11400 = x11395;
    char* x12802 = pointer_add(x6528, x11400);
    char x12803 = *(x12802);
    int x11403 = x11399+(x12803);
    x11396 = x11403;
    int x11405 = x11395;
    int x11406 = x11405+(1);
    x11395 = x11406;
  };
  int x11409 = x11396;
  return x11409; 
}

int x31893(char* x6533, char* x6534) {
  int x11413 = strcmp(x6533, x6534);
  int x11414 = !(x11413);
  return x11414; 
}

int x31899(void* x5475) {
  int x5476 = g_direct_hash(x5475);
  return x5476; 
}

int x31902(void* x5478, void* x5479) {
  int x5480 = g_direct_equal(x5478, x5479);
  return x5480; 
}

int x31909(char* x6551) {
  return 0; 
}

int x31911(char* x6556, char* x6557) {
  int x11431 = strcmp(x6556, x6557);
  int x11432 = !(x11431);
  return x11432; 
}

int x32089(struct AGGRecord_OptimalString* x293, struct AGGRecord_OptimalString* x294) {
  char* x295 = x293->key;
  char* x12960 = pointer_add(x295, 0);
  char x12961 = *(x12960);
  char* x297 = x294->key;
  char* x12963 = pointer_add(x297, 0);
  char x12964 = *(x12963);
  int x299 = x12961-(x12964);
  /* VAR */ int res300 = x299;
  int x301 = res300;
  int x302 = x301==(0);
  if(x302) {
    char* x12970 = pointer_add(x295, 1);
    char x12971 = *(x12970);
    char* x12972 = pointer_add(x297, 1);
    char x12973 = *(x12972);
    int x305 = x12971-(x12973);
    res300 = x305;
  };
  int x308 = res300;
  return x308; 
}

int x6944(void* x6938, void* x6939, void* x6940) {
  struct AGGRecord_OptimalString** x6941 = (struct AGGRecord_OptimalString**){x6940};
  struct AGGRecord_OptimalString* x6942 = (struct AGGRecord_OptimalString*){x6939};
  pointer_assign(x6941, x6942);
  return 1; 
}
