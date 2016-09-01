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
  int O_CUSTKEY;
  };
  
  struct CUSTOMERRecord {
  int C_CUSTKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  };
  
  


int x33997(struct AGGRecord_OptimalString* x293, struct AGGRecord_OptimalString* x294);

int x11466(void* x11460, void* x11461, void* x11462);
/* GLOBAL VARS */

struct timeval x7393;
int main(int argc, char** argv) {
  FILE* x8020 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x8021 = 0;
  int x8022 = x8021;
  int* x8023 = &x8022;
  int x8024 = fscanf(x8020, "%d", x8023);
  pclose(x8020);
  struct CUSTOMERRecord* x9154 = (struct CUSTOMERRecord*)malloc(x8022 * sizeof(struct CUSTOMERRecord));
  memset(x9154, 0, x8022 * sizeof(struct CUSTOMERRecord));
  int x8028 = O_RDONLY;
  int x8029 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x8028);
  struct stat x8030 = (struct stat){0};
  /* VAR */ struct stat x8031 = x8030;
  struct stat x8032 = x8031;
  struct stat* x8033 = &x8032;
  int x8034 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x8033);
  int x8036 = PROT_READ;
  int x8037 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x8033->st_size), x8036, x8037, x8029, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite20190 = 0;
    if((x5<(x8022))) {
      char x32861 = *x3;
      ite20190 = (x32861!=('\0'));
    } else {
      
      ite20190 = 0;
    };
    int x19240 = ite20190;
    if (!(x19240)) break; 
    
    /* VAR */ int x8045 = 0;
    int x8046 = x8045;
    int* x8047 = &x8046;
    char* x8048 = strntoi_unchecked(x3, x8047);
    x3 = x8048;
    char* x9178 = (char*)malloc(26 * sizeof(char));
    memset(x9178, 0, 26 * sizeof(char));
    /* VAR */ char* x8051 = x3;
    while(1) {
      
      char x8052 = *x3;
      /* VAR */ int ite20209 = 0;
      if((x8052!=('|'))) {
        char x32879 = *x3;
        ite20209 = (x32879!=('\n'));
      } else {
        
        ite20209 = 0;
      };
      int x19252 = ite20209;
      if (!(x19252)) break; 
      
      x3 += 1;
    };
    char* x8059 = x8051;
    int x8060 = x3 - x8059;
    char* x8061 = x8051;
    char* x8062 = strncpy(x9178, x8061, x8060);
    x3 += 1;
    char* x9196 = (char*)malloc(41 * sizeof(char));
    memset(x9196, 0, 41 * sizeof(char));
    /* VAR */ char* x8070 = x3;
    while(1) {
      
      char x8071 = *x3;
      /* VAR */ int ite20232 = 0;
      if((x8071!=('|'))) {
        char x32901 = *x3;
        ite20232 = (x32901!=('\n'));
      } else {
        
        ite20232 = 0;
      };
      int x19268 = ite20232;
      if (!(x19268)) break; 
      
      x3 += 1;
    };
    char* x8078 = x8070;
    int x8079 = x3 - x8078;
    char* x8080 = x8070;
    char* x8081 = strncpy(x9196, x8080, x8079);
    x3 += 1;
    /* VAR */ int x8088 = 0;
    int x8089 = x8088;
    int* x8090 = &x8089;
    char* x8091 = strntoi_unchecked(x3, x8090);
    x3 = x8091;
    char* x9219 = (char*)malloc(16 * sizeof(char));
    memset(x9219, 0, 16 * sizeof(char));
    /* VAR */ char* x8094 = x3;
    while(1) {
      
      char x8095 = *x3;
      /* VAR */ int ite20260 = 0;
      if((x8095!=('|'))) {
        char x32928 = *x3;
        ite20260 = (x32928!=('\n'));
      } else {
        
        ite20260 = 0;
      };
      int x19289 = ite20260;
      if (!(x19289)) break; 
      
      x3 += 1;
    };
    char* x8102 = x8094;
    int x8103 = x3 - x8102;
    char* x8104 = x8094;
    char* x8105 = strncpy(x9219, x8104, x8103);
    x3 += 1;
    /* VAR */ double x8112 = 0.0;
    double x8113 = x8112;
    double* x8114 = &x8113;
    char* x8115 = strntod_unchecked(x3, x8114);
    x3 = x8115;
    char* x9242 = (char*)malloc(11 * sizeof(char));
    memset(x9242, 0, 11 * sizeof(char));
    /* VAR */ char* x8118 = x3;
    while(1) {
      
      char x8119 = *x3;
      /* VAR */ int ite20288 = 0;
      if((x8119!=('|'))) {
        char x32955 = *x3;
        ite20288 = (x32955!=('\n'));
      } else {
        
        ite20288 = 0;
      };
      int x19310 = ite20288;
      if (!(x19310)) break; 
      
      x3 += 1;
    };
    char* x8126 = x8118;
    int x8127 = x3 - x8126;
    char* x8128 = x8118;
    char* x8129 = strncpy(x9242, x8128, x8127);
    x3 += 1;
    char* x9260 = (char*)malloc(118 * sizeof(char));
    memset(x9260, 0, 118 * sizeof(char));
    /* VAR */ char* x8137 = x3;
    while(1) {
      
      char x8138 = *x3;
      /* VAR */ int ite20311 = 0;
      if((x8138!=('|'))) {
        char x32977 = *x3;
        ite20311 = (x32977!=('\n'));
      } else {
        
        ite20311 = 0;
      };
      int x19326 = ite20311;
      if (!(x19326)) break; 
      
      x3 += 1;
    };
    char* x8145 = x8137;
    int x8146 = x3 - x8145;
    char* x8147 = x8137;
    char* x8148 = strncpy(x9260, x8147, x8146);
    x3 += 1;
    struct CUSTOMERRecord* x9843 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x9843, 0, 1 * sizeof(struct CUSTOMERRecord));
    x9843->C_CUSTKEY = x8046; x9843->C_PHONE = x9219; x9843->C_ACCTBAL = x8113;
    int x53 = x4;
    struct CUSTOMERRecord x9280 = *x9843;
    *(x9154 + x53) = x9280;
    struct CUSTOMERRecord* x9282 = &(x9154[x53]);
    x9843 = x9282;
    int x55 = x4;
    x4 = (x55+(1));
  };
  FILE* x8161 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x8162 = 0;
  int x8163 = x8162;
  int* x8164 = &x8163;
  int x8165 = fscanf(x8161, "%d", x8164);
  pclose(x8161);
  struct ORDERSRecord* x9293 = (struct ORDERSRecord*)malloc(x8163 * sizeof(struct ORDERSRecord));
  memset(x9293, 0, x8163 * sizeof(struct ORDERSRecord));
  int x8169 = O_RDONLY;
  int x8170 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x8169);
  /* VAR */ struct stat x8171 = x8030;
  struct stat x8172 = x8171;
  struct stat* x8173 = &x8172;
  int x8174 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x8173);
  int x8176 = PROT_READ;
  int x8177 = MAP_PRIVATE;
  char* x61 = mmap(NULL, (x8173->st_size), x8176, x8177, x8170, 0);
  /* VAR */ int x62 = 0;
  while(1) {
    
    int x63 = x62;
    /* VAR */ int ite20361 = 0;
    if((x63<(x8163))) {
      char x33026 = *x61;
      ite20361 = (x33026!=('\0'));
    } else {
      
      ite20361 = 0;
    };
    int x19369 = ite20361;
    if (!(x19369)) break; 
    
    /* VAR */ int x8185 = 0;
    int x8186 = x8185;
    int* x8187 = &x8186;
    char* x8188 = strntoi_unchecked(x61, x8187);
    x61 = x8188;
    /* VAR */ int x8190 = 0;
    int x8191 = x8190;
    int* x8192 = &x8191;
    char* x8193 = strntoi_unchecked(x61, x8192);
    x61 = x8193;
    char x8195 = *x61;
    /* VAR */ char x8196 = x8195;
    x61 += 1;
    x61 += 1;
    /* VAR */ double x8200 = 0.0;
    double x8201 = x8200;
    double* x8202 = &x8201;
    char* x8203 = strntod_unchecked(x61, x8202);
    x61 = x8203;
    /* VAR */ int x8205 = 0;
    int x8206 = x8205;
    int* x8207 = &x8206;
    char* x8208 = strntoi_unchecked(x61, x8207);
    x61 = x8208;
    /* VAR */ int x8210 = 0;
    int x8211 = x8210;
    int* x8212 = &x8211;
    char* x8213 = strntoi_unchecked(x61, x8212);
    x61 = x8213;
    /* VAR */ int x8215 = 0;
    int x8216 = x8215;
    int* x8217 = &x8216;
    char* x8218 = strntoi_unchecked(x61, x8217);
    x61 = x8218;
    char* x9350 = (char*)malloc(16 * sizeof(char));
    memset(x9350, 0, 16 * sizeof(char));
    /* VAR */ char* x8225 = x61;
    while(1) {
      
      char x8226 = *x61;
      /* VAR */ int ite20414 = 0;
      if((x8226!=('|'))) {
        char x33078 = *x61;
        ite20414 = (x33078!=('\n'));
      } else {
        
        ite20414 = 0;
      };
      int x19415 = ite20414;
      if (!(x19415)) break; 
      
      x61 += 1;
    };
    char* x8233 = x8225;
    int x8234 = x61 - x8233;
    char* x8235 = x8225;
    char* x8236 = strncpy(x9350, x8235, x8234);
    x61 += 1;
    char* x9368 = (char*)malloc(16 * sizeof(char));
    memset(x9368, 0, 16 * sizeof(char));
    /* VAR */ char* x8244 = x61;
    while(1) {
      
      char x8245 = *x61;
      /* VAR */ int ite20437 = 0;
      if((x8245!=('|'))) {
        char x33100 = *x61;
        ite20437 = (x33100!=('\n'));
      } else {
        
        ite20437 = 0;
      };
      int x19431 = ite20437;
      if (!(x19431)) break; 
      
      x61 += 1;
    };
    char* x8252 = x8244;
    int x8253 = x61 - x8252;
    char* x8254 = x8244;
    char* x8255 = strncpy(x9368, x8254, x8253);
    x61 += 1;
    /* VAR */ int x8262 = 0;
    int x8263 = x8262;
    int* x8264 = &x8263;
    char* x8265 = strntoi_unchecked(x61, x8264);
    x61 = x8265;
    char* x9391 = (char*)malloc(80 * sizeof(char));
    memset(x9391, 0, 80 * sizeof(char));
    /* VAR */ char* x8268 = x61;
    while(1) {
      
      char x8269 = *x61;
      /* VAR */ int ite20465 = 0;
      if((x8269!=('|'))) {
        char x33127 = *x61;
        ite20465 = (x33127!=('\n'));
      } else {
        
        ite20465 = 0;
      };
      int x19452 = ite20465;
      if (!(x19452)) break; 
      
      x61 += 1;
    };
    char* x8276 = x8268;
    int x8277 = x61 - x8276;
    char* x8278 = x8268;
    char* x8279 = strncpy(x9391, x8278, x8277);
    x61 += 1;
    struct ORDERSRecord* x9976 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x9976, 0, 1 * sizeof(struct ORDERSRecord));
    x9976->O_CUSTKEY = x8191;
    int x97 = x62;
    struct ORDERSRecord x9411 = *x9976;
    *(x9293 + x97) = x9411;
    struct ORDERSRecord* x9413 = &(x9293[x97]);
    x9976 = x9413;
    int x99 = x62;
    x62 = (x99+(1));
  };
  int x104 = 0;
  for(; x104 < 1 ; x104 += 1) {
    
    /* VAR */ int x33753 = 0;
    GList*** x33754 = (GList***)malloc(1048576 * sizeof(GList**));
    memset(x33754, 0, 1048576 * sizeof(GList**));
    int x17590 = 0;
    for(; x17590 < 1048576 ; x17590 += 1) {
      
      GList** x17591 = malloc(8);
      GList* x17592 = NULL;
      pointer_assign(x17591, x17592);
      *(x33754 + x17590) = x17591;
    };
    struct ORDERSRecord** x33766 = (struct ORDERSRecord**)malloc(1200000 * sizeof(struct ORDERSRecord*));
    memset(x33766, 0, 1200000 * sizeof(struct ORDERSRecord*));
    int* x33767 = (int*)malloc(1200000 * sizeof(int));
    memset(x33767, 0, 1200000 * sizeof(int));
    int x17602 = 0;
    for(; x17602 < 1200000 ; x17602 += 1) {
      
      struct ORDERSRecord* x17603 = (struct ORDERSRecord*)malloc(1024 * sizeof(struct ORDERSRecord));
      memset(x17603, 0, 1024 * sizeof(struct ORDERSRecord));
      *(x33766 + x17602) = x17603;
    };
    /* VAR */ int x33775 = 0;
    int x17623 = 0;
    for(; x17623 < x8163 ; x17623 += 1) {
      
      struct ORDERSRecord* x17624 = &(x9293[x17623]);
      int x17626 = (x17624->O_CUSTKEY)%(1200000);
      int x17627 = x33767[x17626];
      struct ORDERSRecord* x17628 = x33766[x17626];
      struct ORDERSRecord x17629 = *x17624;
      *(x17628 + x17627) = x17629;
      struct ORDERSRecord* x17631 = &(x17628[x17627]);
      x17624 = x17631;
      *(x33767 + x17626) = (x17627+(1));
      int x17635 = x33775;
      x33775 = (x17635+(1));
    };
    double* x33807 = (double*)malloc(3 * sizeof(double));
    memset(x33807, 0, 3 * sizeof(double));
    struct AGGRecord_String* x33808 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x33808, 0, 1 * sizeof(struct AGGRecord_String));
    x33808->key = "AVG_C_ACCTBAL"; x33808->aggs = x33807;
    /* VAR */ struct timeval x33811 = x7393;
    struct timeval x33812 = x33811;
    /* VAR */ struct timeval x33813 = x7393;
    struct timeval x33814 = x33813;
    /* VAR */ struct timeval x33815 = x7393;
    struct timeval x33816 = x33815;
    struct timeval* x33817 = &x33814;
    gettimeofday(x33817, NULL);
    /* VAR */ int x33819 = 0;
    /* VAR */ struct AGGRecord_String* x33820 = NULL;
    while(1) {
      
      int x33822 = x33819;
      if (!((x33822<(x8022)))) break; 
      
      int x1667 = x33819;
      struct CUSTOMERRecord* x164 = &(x9154[x1667]);
      double x166 = x164->C_ACCTBAL;
      /* VAR */ int ite20970 = 0;
      if((x166>(0.0))) {
        char* x33830 = x164->C_PHONE;
        char* x33831 = pointer_add(x33830, 0);
        char x33832 = *(x33831);
        /* VAR */ int x33834 = 0;
        if((x33832==('2'))) {
          char* x33836 = pointer_add(x33830, 1);
          char x33837 = *(x33836);
          x33834 = (x33837==('3'));
        } else {
          
          x33834 = 0;
        };
        int x33842 = x33834;
        /* VAR */ int x33843 = 0;
        if(x33842) {
          x33843 = 1;
        } else {
          
          char* x33846 = pointer_add(x33830, 0);
          char x33847 = *(x33846);
          /* VAR */ int x33849 = 0;
          if((x33847==('2'))) {
            char* x33851 = pointer_add(x33830, 1);
            char x33852 = *(x33851);
            x33849 = (x33852==('9'));
          } else {
            
            x33849 = 0;
          };
          int x33857 = x33849;
          /* VAR */ int x33858 = 0;
          if(x33857) {
            x33858 = 1;
          } else {
            
            char* x33861 = pointer_add(x33830, 0);
            char x33862 = *(x33861);
            /* VAR */ int x33864 = 0;
            if((x33862==('2'))) {
              char* x33866 = pointer_add(x33830, 1);
              char x33867 = *(x33866);
              x33864 = (x33867==('2'));
            } else {
              
              x33864 = 0;
            };
            int x33872 = x33864;
            /* VAR */ int x33873 = 0;
            if(x33872) {
              x33873 = 1;
            } else {
              
              char* x33876 = pointer_add(x33830, 0);
              char x33877 = *(x33876);
              /* VAR */ int x33879 = 0;
              if((x33877==('2'))) {
                char* x33881 = pointer_add(x33830, 1);
                char x33882 = *(x33881);
                x33879 = (x33882==('0'));
              } else {
                
                x33879 = 0;
              };
              int x33887 = x33879;
              /* VAR */ int x33888 = 0;
              if(x33887) {
                x33888 = 1;
              } else {
                
                char* x33891 = pointer_add(x33830, 0);
                char x33892 = *(x33891);
                /* VAR */ int x33894 = 0;
                if((x33892==('2'))) {
                  char* x33896 = pointer_add(x33830, 1);
                  char x33897 = *(x33896);
                  x33894 = (x33897==('4'));
                } else {
                  
                  x33894 = 0;
                };
                int x33902 = x33894;
                /* VAR */ int x33903 = 0;
                if(x33902) {
                  x33903 = 1;
                } else {
                  
                  char* x33906 = pointer_add(x33830, 0);
                  char x33907 = *(x33906);
                  /* VAR */ int x33909 = 0;
                  if((x33907==('2'))) {
                    char* x33911 = pointer_add(x33830, 1);
                    char x33912 = *(x33911);
                    x33909 = (x33912==('6'));
                  } else {
                    
                    x33909 = 0;
                  };
                  int x33917 = x33909;
                  /* VAR */ int x33918 = 0;
                  if(x33917) {
                    x33918 = 1;
                  } else {
                    
                    char* x33921 = pointer_add(x33830, 0);
                    char x33922 = *(x33921);
                    /* VAR */ int x33924 = 0;
                    if((x33922==('2'))) {
                      char* x33926 = pointer_add(x33830, 1);
                      char x33927 = *(x33926);
                      x33924 = (x33927==('5'));
                    } else {
                      
                      x33924 = 0;
                    };
                    int x33932 = x33924;
                    x33918 = x33932;
                  };
                  int x33935 = x33918;
                  x33903 = x33935;
                };
                int x33938 = x33903;
                x33888 = x33938;
              };
              int x33941 = x33888;
              x33873 = x33941;
            };
            int x33944 = x33873;
            x33858 = x33944;
          };
          int x33947 = x33858;
          x33843 = x33947;
        };
        int x33950 = x33843;
        ite20970 = x33950;
      } else {
        
        ite20970 = 0;
      };
      int x19897 = ite20970;
      if(x19897) {
        double* x187 = x33808->aggs;
        double x201 = x187[0];
        *x187 = (x166+(x201));
        double x210 = x187[1];
        *(x187 + 1) = (x210+(1.0));
      };
      int x1722 = x33819;
      x33819 = (x1722+(1));
    };
    double* x33966 = x33808->aggs;
    double x33967 = x33966[0];
    double x33968 = x33966[1];
    *(x33966 + 2) = (x33967/(x33968));
    x33820 = x33808;
    struct AGGRecord_String* x33972 = x33820;
    double x33974 = ((double*) { x33972->aggs })[2];
    /* VAR */ int x33975 = 0;
    int* x34018 = &(x33997);
    GTree* x34019 = g_tree_new(x34018);
    /* VAR */ int x34020 = 0;
    /* VAR */ int x34021 = 0;
    while(1) {
      
      int x34023 = x33975;
      if (!((x34023<(x8022)))) break; 
      
      int x1851 = x33975;
      struct CUSTOMERRecord* x326 = &(x9154[x1851]);
      char* x328 = x326->C_PHONE;
      char* x16410 = pointer_add(x328, 0);
      char x16411 = *(x16410);
      /* VAR */ int ite21062 = 0;
      if((x16411==('2'))) {
        char* x34033 = pointer_add(x328, 1);
        char x34034 = *(x34033);
        ite21062 = (x34034==('3'));
      } else {
        
        ite21062 = 0;
      };
      int x19974 = ite21062;
      /* VAR */ int ite21072 = 0;
      if(x19974) {
        ite21072 = 1;
      } else {
        
        char* x34043 = pointer_add(x328, 0);
        char x34044 = *(x34043);
        /* VAR */ int x34046 = 0;
        if((x34044==('2'))) {
          char* x34048 = pointer_add(x328, 1);
          char x34049 = *(x34048);
          x34046 = (x34049==('9'));
        } else {
          
          x34046 = 0;
        };
        int x34054 = x34046;
        /* VAR */ int x34055 = 0;
        if(x34054) {
          x34055 = 1;
        } else {
          
          char* x34058 = pointer_add(x328, 0);
          char x34059 = *(x34058);
          /* VAR */ int x34061 = 0;
          if((x34059==('2'))) {
            char* x34063 = pointer_add(x328, 1);
            char x34064 = *(x34063);
            x34061 = (x34064==('2'));
          } else {
            
            x34061 = 0;
          };
          int x34069 = x34061;
          /* VAR */ int x34070 = 0;
          if(x34069) {
            x34070 = 1;
          } else {
            
            char* x34073 = pointer_add(x328, 0);
            char x34074 = *(x34073);
            /* VAR */ int x34076 = 0;
            if((x34074==('2'))) {
              char* x34078 = pointer_add(x328, 1);
              char x34079 = *(x34078);
              x34076 = (x34079==('0'));
            } else {
              
              x34076 = 0;
            };
            int x34084 = x34076;
            /* VAR */ int x34085 = 0;
            if(x34084) {
              x34085 = 1;
            } else {
              
              char* x34088 = pointer_add(x328, 0);
              char x34089 = *(x34088);
              /* VAR */ int x34091 = 0;
              if((x34089==('2'))) {
                char* x34093 = pointer_add(x328, 1);
                char x34094 = *(x34093);
                x34091 = (x34094==('4'));
              } else {
                
                x34091 = 0;
              };
              int x34099 = x34091;
              /* VAR */ int x34100 = 0;
              if(x34099) {
                x34100 = 1;
              } else {
                
                char* x34103 = pointer_add(x328, 0);
                char x34104 = *(x34103);
                /* VAR */ int x34106 = 0;
                if((x34104==('2'))) {
                  char* x34108 = pointer_add(x328, 1);
                  char x34109 = *(x34108);
                  x34106 = (x34109==('6'));
                } else {
                  
                  x34106 = 0;
                };
                int x34114 = x34106;
                /* VAR */ int x34115 = 0;
                if(x34114) {
                  x34115 = 1;
                } else {
                  
                  char* x34118 = pointer_add(x328, 0);
                  char x34119 = *(x34118);
                  /* VAR */ int x34121 = 0;
                  if((x34119==('2'))) {
                    char* x34123 = pointer_add(x328, 1);
                    char x34124 = *(x34123);
                    x34121 = (x34124==('5'));
                  } else {
                    
                    x34121 = 0;
                  };
                  int x34129 = x34121;
                  x34115 = x34129;
                };
                int x34132 = x34115;
                x34100 = x34132;
              };
              int x34135 = x34100;
              x34085 = x34135;
            };
            int x34138 = x34085;
            x34070 = x34138;
          };
          int x34141 = x34070;
          x34055 = x34141;
        };
        int x34144 = x34055;
        ite21072 = x34144;
      };
      int x19976 = ite21072;
      /* VAR */ int ite21086 = 0;
      if(x19976) {
        ite21086 = ((x326->C_ACCTBAL)>(x33974));
      } else {
        
        ite21086 = 0;
      };
      int x19978 = ite21086;
      if(x19978) {
        /* VAR */ int resultRetain3692 = 0;
        int x3693 = (x326->C_CUSTKEY)%(1200000);
        int x3694 = x33767[x3693];
        struct ORDERSRecord* x3695 = x33766[x3693];
        int x17866 = 0;
        for(; x17866 < x3694 ; x17866 += 1) {
          
          struct ORDERSRecord* x17867 = &(x3695[x17866]);
          int x17871 = !(((x326->C_CUSTKEY)==((x17867->O_CUSTKEY))));
          int x17872 = !(x17871);
          if(x17872) {
            resultRetain3692 = 1;
          };
        };
        int x3709 = resultRetain3692;
        int x3710 = !(x3709);
        if(x3710) {
          int x16491 = (2-(0))+(1);
          char* x16492 = malloc(x16491);
          char* x16493 = pointer_add((x326->C_PHONE), 0);
          int x16494 = x16491-(1);
          char* x16495 = strncpy(x16492, x16493, x16494);
          *(x16492 + x16494) = '\0';
          int x16497 = strlen(x16492);
          /* VAR */ int x15170 = 0;
          /* VAR */ int x15171 = 0;
          while(1) {
            
            int x15172 = x15170;
            if (!((x15172<(x16497)))) break; 
            
            int x15174 = x15171;
            int x15175 = x15170;
            char* x16505 = pointer_add(x16492, x15175);
            char x16506 = *(x16505);
            x15171 = (x15174+(x16506));
            int x15180 = x15170;
            x15170 = (x15180+(1));
          };
          int x15184 = x15171;
          int x5261 = x15184&((1048576-(1)));
          GList** x5262 = x33754[x5261];
          int x5263 = x33753;
          if((x5261>(x5263))) {
            x33753 = x5261;
          };
          /* VAR */ struct AGGRecord_OptimalString* x11383 = NULL;
          GList* x11384 = *(x5262);
          /* VAR */ GList* x11385 = x11384;
          while(1) {
            
            GList* x11386 = x11385;
            GList* x11387 = NULL;
            if (!((x11386!=(x11387)))) break; 
            
            GList* x11389 = x11385;
            void* x11390 = g_list_nth_data(x11389, 0);
            struct AGGRecord_OptimalString* x11391 = (struct AGGRecord_OptimalString*){x11390};
            GList* x11392 = x11385;
            GList* x11393 = g_list_next(x11392);
            x11385 = x11393;
            int x15211 = strcmp((x11391->key), x16492);
            int x15212 = !(x15211);
            if(x15212) {
              x11383 = x11391;
              break;
            };
          };
          struct AGGRecord_OptimalString* x11401 = x11383;
          /* VAR */ struct AGGRecord_OptimalString* ite20065 = 0;
          if((x11401!=(NULL))) {
            ite20065 = x11401;
          } else {
            
            double* x20067 = (double*)malloc(2 * sizeof(double));
            memset(x20067, 0, 2 * sizeof(double));
            struct AGGRecord_OptimalString* x20068 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
            memset(x20068, 0, 1 * sizeof(struct AGGRecord_OptimalString));
            x20068->key = x16492; x20068->aggs = x20067;
            GList* x20071 = *(x5262);
            GList* x20072 = g_list_prepend(x20071, x20068);
            pointer_assign(x5262, x20072);
            ite20065 = x20068;
          };
          struct AGGRecord_OptimalString* x5276 = ite20065;
          double* x3716 = x5276->aggs;
          double x3717 = x3716[0];
          *x3716 = ((x326->C_ACCTBAL)+(x3717));
          double x3721 = x3716[1];
          *(x3716 + 1) = (x3721+(1.0));
        };
      };
      int x1874 = x33975;
      x33975 = (x1874+(1));
    };
    int x34265 = x33753;
    int x17979 = 0;
    for(; x17979 < (x34265+(1)) ; x17979 += 1) {
      
      GList** x17980 = x33754[x17979];
      GList* x17985 = *(x17980);
      /* VAR */ GList* x17986 = x17985;
      while(1) {
        
        GList* x11438 = x17986;
        GList* x11439 = NULL;
        if (!((x11438!=(x11439)))) break; 
        
        GList* x11441 = x17986;
        void* x11442 = g_list_nth_data(x11441, 0);
        struct AGGRecord_OptimalString* x11443 = (struct AGGRecord_OptimalString*){x11442};
        GList* x11444 = x17986;
        GList* x11445 = g_list_next(x11444);
        x17986 = x11445;
        g_tree_insert(x34019, x11443, x11443);
      };
    };
    while(1) {
      
      int x1959 = x34020;
      int x440 = !(x1959);
      /* VAR */ int ite21250 = 0;
      if(x440) {
        int x34313 = g_tree_nnodes(x34019);
        ite21250 = (x34313!=(0));
      } else {
        
        ite21250 = 0;
      };
      int x20135 = ite21250;
      if (!(x20135)) break; 
      
      void* x11459 = NULL;
      void** x11467 = &(x11459);
      g_tree_foreach(x34019, x11466, x11467);
      struct AGGRecord_OptimalString* x11469 = (struct AGGRecord_OptimalString*){x11459};
      int x11470 = g_tree_remove(x34019, x11469);
      if(0) {
        x34020 = 1;
      } else {
        
        double* x455 = x11469->aggs;
        double x456 = x455[1];
        double x457 = x455[0];
        printf("%s|%.0f|%.2f\n", (x11469->key), x456, x457);
        int x1978 = x34021;
        x34021 = (x1978+(1));
      };
    };
    int x34341 = x34021;
    printf("(%d rows)\n", x34341);
    struct timeval* x34343 = &x33816;
    gettimeofday(x34343, NULL);
    struct timeval* x34345 = &x33812;
    struct timeval* x34346 = &x33816;
    struct timeval* x34347 = &x33814;
    long x34348 = timeval_subtract(x34345, x34346, x34347);
    printf("Generated code run in %ld milliseconds.\n", x34348);
  };
}
/* ----------- FUNCTIONS ----------- */
int x33997(struct AGGRecord_OptimalString* x293, struct AGGRecord_OptimalString* x294) {
  char* x295 = x293->key;
  char* x16382 = pointer_add(x295, 0);
  char x16383 = *(x16382);
  char* x297 = x294->key;
  char* x16385 = pointer_add(x297, 0);
  char x16386 = *(x16385);
  /* VAR */ int res300 = (x16383-(x16386));
  int x301 = res300;
  if((x301==(0))) {
    char* x16392 = pointer_add(x295, 1);
    char x16393 = *(x16392);
    char* x16394 = pointer_add(x297, 1);
    char x16395 = *(x16394);
    res300 = (x16393-(x16395));
  };
  int x308 = res300;
  return x308; 
}

int x11466(void* x11460, void* x11461, void* x11462) {
  pointer_assign(((struct AGGRecord_OptimalString**){x11462}), ((struct AGGRecord_OptimalString*){x11461}));
  return 1; 
}
