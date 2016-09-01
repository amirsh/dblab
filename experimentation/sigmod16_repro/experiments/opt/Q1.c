#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct Tuple2_Q1GRPRecord_Array_Double;
  struct LINEITEMRecord;
  struct Q1GRPRecord;
  
  struct Tuple2_Q1GRPRecord_Array_Double {
  struct Q1GRPRecord* _1;
  double* _2;
  };
  
  struct LINEITEMRecord {
  double L_QUANTITY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  double L_TAX;
  char L_RETURNFLAG;
  char L_LINESTATUS;
  int L_SHIPDATE;
  };
  
  struct Q1GRPRecord {
  char L_RETURNFLAG;
  char L_LINESTATUS;
  };
  
  


int x20953(struct Q1GRPRecord* x9554);

int x20960(struct Q1GRPRecord* x9559, struct Q1GRPRecord* x9560);

int x21371(struct Tuple2_Q1GRPRecord_Array_Double* x5589, struct Tuple2_Q1GRPRecord_Array_Double* x5590);

int x15083(void* x9819, void* x9820, void* x9821);
/* GLOBAL VARS */

struct timeval x6622;
int main(int argc, char** argv) {
  FILE* x7077 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x7078 = 0;
  int x7079 = x7078;
  int* x7080 = &x7079;
  int x7081 = fscanf(x7077, "%d", x7080);
  pclose(x7077);
  struct LINEITEMRecord* x7971 = (struct LINEITEMRecord*)malloc(x7079 * sizeof(struct LINEITEMRecord));
  memset(x7971, 0, x7079 * sizeof(struct LINEITEMRecord));
  int x7085 = O_RDONLY;
  int x7086 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x7085);
  struct stat x7087 = (struct stat){0};
  /* VAR */ struct stat x7088 = x7087;
  struct stat x7089 = x7088;
  struct stat* x7090 = &x7089;
  int x7091 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x7090);
  size_t x7092 = x7090->st_size;
  int x7093 = PROT_READ;
  int x7094 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x7092, x7093, x7094, x7086, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x7079);
    /* VAR */ int ite17661 = 0;
    if(x6) {
      char x20230 = *x3;
      int x20231 = x20230!=('\0');
      ite17661 = x20231;
    } else {
      
      ite17661 = 0;
    };
    int x16415 = ite17661;
    if (!(x16415)) break; 
    
    /* VAR */ int x7102 = 0;
    int x7103 = x7102;
    int* x7104 = &x7103;
    char* x7105 = strntoi_unchecked(x3, x7104);
    x3 = x7105;
    /* VAR */ int x7107 = 0;
    int x7108 = x7107;
    int* x7109 = &x7108;
    char* x7110 = strntoi_unchecked(x3, x7109);
    x3 = x7110;
    /* VAR */ int x7112 = 0;
    int x7113 = x7112;
    int* x7114 = &x7113;
    char* x7115 = strntoi_unchecked(x3, x7114);
    x3 = x7115;
    /* VAR */ int x7117 = 0;
    int x7118 = x7117;
    int* x7119 = &x7118;
    char* x7120 = strntoi_unchecked(x3, x7119);
    x3 = x7120;
    /* VAR */ double x7122 = 0.0;
    double x7123 = x7122;
    double* x7124 = &x7123;
    char* x7125 = strntod_unchecked(x3, x7124);
    x3 = x7125;
    /* VAR */ double x7127 = 0.0;
    double x7128 = x7127;
    double* x7129 = &x7128;
    char* x7130 = strntod_unchecked(x3, x7129);
    x3 = x7130;
    /* VAR */ double x7132 = 0.0;
    double x7133 = x7132;
    double* x7134 = &x7133;
    char* x7135 = strntod_unchecked(x3, x7134);
    x3 = x7135;
    /* VAR */ double x7137 = 0.0;
    double x7138 = x7137;
    double* x7139 = &x7138;
    char* x7140 = strntod_unchecked(x3, x7139);
    x3 = x7140;
    char x7142 = *x3;
    /* VAR */ char x7143 = x7142;
    x3 += 1;
    x3 += 1;
    char x7146 = x7143;
    char x7147 = *x3;
    /* VAR */ char x7148 = x7147;
    x3 += 1;
    x3 += 1;
    char x7151 = x7148;
    /* VAR */ int x7152 = 0;
    int x7153 = x7152;
    int* x7154 = &x7153;
    char* x7155 = strntoi_unchecked(x3, x7154);
    x3 = x7155;
    /* VAR */ int x7157 = 0;
    int x7158 = x7157;
    int* x7159 = &x7158;
    char* x7160 = strntoi_unchecked(x3, x7159);
    x3 = x7160;
    /* VAR */ int x7162 = 0;
    int x7163 = x7162;
    int* x7164 = &x7163;
    char* x7165 = strntoi_unchecked(x3, x7164);
    x3 = x7165;
    int x7167 = x7153*(10000);
    int x7168 = x7158*(100);
    int x7169 = x7167+(x7168);
    int x7170 = x7169+(x7163);
    /* VAR */ int x7171 = 0;
    int x7172 = x7171;
    int* x7173 = &x7172;
    char* x7174 = strntoi_unchecked(x3, x7173);
    x3 = x7174;
    /* VAR */ int x7176 = 0;
    int x7177 = x7176;
    int* x7178 = &x7177;
    char* x7179 = strntoi_unchecked(x3, x7178);
    x3 = x7179;
    /* VAR */ int x7181 = 0;
    int x7182 = x7181;
    int* x7183 = &x7182;
    char* x7184 = strntoi_unchecked(x3, x7183);
    x3 = x7184;
    /* VAR */ int x7190 = 0;
    int x7191 = x7190;
    int* x7192 = &x7191;
    char* x7193 = strntoi_unchecked(x3, x7192);
    x3 = x7193;
    /* VAR */ int x7195 = 0;
    int x7196 = x7195;
    int* x7197 = &x7196;
    char* x7198 = strntoi_unchecked(x3, x7197);
    x3 = x7198;
    /* VAR */ int x7200 = 0;
    int x7201 = x7200;
    int* x7202 = &x7201;
    char* x7203 = strntoi_unchecked(x3, x7202);
    x3 = x7203;
    char* x8097 = (char*)malloc(26 * sizeof(char));
    memset(x8097, 0, 26 * sizeof(char));
    /* VAR */ char* x7210 = x3;
    while(1) {
      
      char x7211 = *x3;
      int x7212 = x7211!=('|');
      /* VAR */ int ite17782 = 0;
      if(x7212) {
        char x20350 = *x3;
        int x20351 = x20350!=('\n');
        ite17782 = x20351;
      } else {
        
        ite17782 = 0;
      };
      int x16529 = ite17782;
      if (!(x16529)) break; 
      
      x3 += 1;
    };
    char* x7218 = x7210;
    int x7219 = x3 - x7218;
    char* x7220 = x7210;
    char* x7221 = strncpy(x8097, x7220, x7219);
    x3 += 1;
    char* x8115 = (char*)malloc(11 * sizeof(char));
    memset(x8115, 0, 11 * sizeof(char));
    /* VAR */ char* x7229 = x3;
    while(1) {
      
      char x7230 = *x3;
      int x7231 = x7230!=('|');
      /* VAR */ int ite17805 = 0;
      if(x7231) {
        char x20372 = *x3;
        int x20373 = x20372!=('\n');
        ite17805 = x20373;
      } else {
        
        ite17805 = 0;
      };
      int x16545 = ite17805;
      if (!(x16545)) break; 
      
      x3 += 1;
    };
    char* x7237 = x7229;
    int x7238 = x3 - x7237;
    char* x7239 = x7229;
    char* x7240 = strncpy(x8115, x7239, x7238);
    x3 += 1;
    char* x8133 = (char*)malloc(45 * sizeof(char));
    memset(x8133, 0, 45 * sizeof(char));
    /* VAR */ char* x7248 = x3;
    while(1) {
      
      char x7249 = *x3;
      int x7250 = x7249!=('|');
      /* VAR */ int ite17828 = 0;
      if(x7250) {
        char x20394 = *x3;
        int x20395 = x20394!=('\n');
        ite17828 = x20395;
      } else {
        
        ite17828 = 0;
      };
      int x16561 = ite17828;
      if (!(x16561)) break; 
      
      x3 += 1;
    };
    char* x7256 = x7248;
    int x7257 = x3 - x7256;
    char* x7258 = x7248;
    char* x7259 = strncpy(x8133, x7258, x7257);
    x3 += 1;
    struct LINEITEMRecord* x8610 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x8610, 0, 1 * sizeof(struct LINEITEMRecord));
    x8610->L_QUANTITY = x7123; x8610->L_EXTENDEDPRICE = x7128; x8610->L_DISCOUNT = x7133; x8610->L_TAX = x7138; x8610->L_RETURNFLAG = x7146; x8610->L_LINESTATUS = x7151; x8610->L_SHIPDATE = x7170;
    int x47 = x4;
    struct LINEITEMRecord x8153 = *x8610;
    *(x7971 + x47) = x8153;
    struct LINEITEMRecord* x8155 = &(x7971[x47]);
    x8610 = x8155;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  int x55 = 0;
  for(; x55 < 1 ; x55 += 1) {
    
    GHashTable* x20975 = g_hash_table_new(x20953, x20960);
    struct Q1GRPRecord* x20976 = (struct Q1GRPRecord*)malloc(4 * sizeof(struct Q1GRPRecord));
    memset(x20976, 0, 4 * sizeof(struct Q1GRPRecord));
    /* VAR */ int x20977 = 0;
    struct LINEITEMRecord** x20978 = (struct LINEITEMRecord**)malloc(4 * sizeof(struct LINEITEMRecord*));
    memset(x20978, 0, 4 * sizeof(struct LINEITEMRecord*));
    int* x20979 = (int*)malloc(4 * sizeof(int));
    memset(x20979, 0, 4 * sizeof(int));
    int x14646 = 0;
    for(; x14646 < 4 ; x14646 += 1) {
      
      int x14647 = x7079/(4);
      int x14648 = x14647*(8);
      struct LINEITEMRecord* x14649 = (struct LINEITEMRecord*)malloc(x14648 * sizeof(struct LINEITEMRecord));
      memset(x14649, 0, x14648 * sizeof(struct LINEITEMRecord));
      *(x20978 + x14646) = x14649;
      *(x20979 + x14646) = 0;
    };
    int x14686 = 0;
    for(; x14686 < x7079 ; x14686 += 1) {
      
      struct LINEITEMRecord* x14687 = &(x7971[x14686]);
      char x14688 = x14687->L_RETURNFLAG;
      char x14689 = x14687->L_LINESTATUS;
      struct Q1GRPRecord* x14690 = (struct Q1GRPRecord*)malloc(1 * sizeof(struct Q1GRPRecord));
      memset(x14690, 0, 1 * sizeof(struct Q1GRPRecord));
      x14690->L_RETURNFLAG = x14688; x14690->L_LINESTATUS = x14689;
      void* x14693 = g_hash_table_lookup(x20975, x14690);
      int x14694 = x14693==(NULL);
      /* VAR */ int ite17196 = 0;
      if(x14694) {
        int x17197 = x20977;
        struct Q1GRPRecord x17198 = *x14690;
        *(x20976 + x17197) = x17198;
        struct Q1GRPRecord* x17200 = &(x20976[x17197]);
        x14690 = x17200;
        int x17202 = x20977;
        int x17203 = x17202+(1);
        x20977 = x17203;
        int x17205 = x20977;
        int x17206 = x17205-(1);
        int x17207 = x17206+(1);
        g_hash_table_insert(x20975, x14690, x17207);
        ite17196 = x17206;
      } else {
        
        int x17210 = x14693-(1);
        ite17196 = x17210;
      };
      int x14695 = ite17196;
      struct LINEITEMRecord* x14709 = x20978[x14695];
      int x14710 = x20979[x14695];
      struct LINEITEMRecord x14711 = *x14687;
      *(x14709 + x14710) = x14711;
      struct LINEITEMRecord* x14713 = &(x14709[x14710]);
      x14687 = x14713;
      int x14715 = x20979[x14695];
      int x14716 = x14715+(1);
      *(x20979 + x14695) = x14716;
    };
    int x21068 = x20977;
    /* VAR */ int x21069 = 0;
    double** x21070 = (double**)malloc(4 * sizeof(double*));
    memset(x21070, 0, 4 * sizeof(double*));
    /* VAR */ int x21071 = 0;
    while(1) {
      
      int x6431 = x21071;
      int x6432 = x6431<(4);
      if (!(x6432)) break; 
      
      int x6433 = x21071;
      double* x8213 = (double*)malloc(9 * sizeof(double));
      memset(x8213, 0, 9 * sizeof(double));
      *(x21070 + x6433) = x8213;
      int x6436 = x21071;
      int x6437 = x6436+(1);
      x21071 = x6437;
    };
    /* VAR */ int x21081 = 0;
    struct Tuple2_Q1GRPRecord_Array_Double* x21082 = (struct Tuple2_Q1GRPRecord_Array_Double*)malloc(48000000 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double));
    memset(x21082, 0, 48000000 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double));
    /* VAR */ int x21083 = 0;
    while(1) {
      
      int x6443 = x21083;
      int x6444 = x6443<(48000000);
      if (!(x6444)) break; 
      
      int x6445 = x21083;
      double* x6446 = x21070[x6445];
      struct Tuple2_Q1GRPRecord_Array_Double* x8689 = (struct Tuple2_Q1GRPRecord_Array_Double*)malloc(1 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double));
      memset(x8689, 0, 1 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double));
      x8689->_1 = NULL; x8689->_2 = x6446;
      struct Tuple2_Q1GRPRecord_Array_Double x8227 = *x8689;
      *(x21082 + x6445) = x8227;
      struct Tuple2_Q1GRPRecord_Array_Double* x8229 = &(x21082[x6445]);
      x8689 = x8229;
      int x6449 = x21083;
      int x6450 = x6449+(1);
      x21083 = x6450;
    };
    /* VAR */ int x21099 = 0;
    struct Tuple2_Q1GRPRecord_Array_Double** x21100 = (struct Tuple2_Q1GRPRecord_Array_Double**)malloc(48000000 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double*));
    memset(x21100, 0, 48000000 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double*));
    /* VAR */ int x21101 = 0;
    while(1) {
      
      int x6456 = x21101;
      int x6457 = x6456<(48000000);
      if (!(x6457)) break; 
      
      int x6458 = x21101;
      struct Tuple2_Q1GRPRecord_Array_Double* x8241 = (struct Tuple2_Q1GRPRecord_Array_Double*)malloc(x21068 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double));
      memset(x8241, 0, x21068 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double));
      *(x21100 + x6458) = x8241;
      int x6461 = x21101;
      int x6462 = x6461+(1);
      x21101 = x6462;
    };
    /* VAR */ struct timeval x21111 = x6622;
    struct timeval x21112 = x21111;
    /* VAR */ struct timeval x21113 = x6622;
    struct timeval x21114 = x21113;
    /* VAR */ struct timeval x21115 = x6622;
    struct timeval x21116 = x21115;
    struct timeval* x21117 = &x21114;
    gettimeofday(x21117, NULL);
    int x21119 = x21099;
    struct Tuple2_Q1GRPRecord_Array_Double* x21120 = x21100[x21119];
    int x21121 = x21099;
    int x21122 = x21121+(1);
    x21099 = x21122;
    int x14894 = 0;
    for(; x14894 < x21068 ; x14894 += 1) {
      
      struct LINEITEMRecord* x14895 = x20978[x14894];
      int x14896 = x20979[x14894];
      struct Q1GRPRecord* x14897 = &(x20976[x14894]);
      /* VAR */ int x14898 = 0;
      /* VAR */ double x14899 = 0.0;
      /* VAR */ double x14900 = 0.0;
      /* VAR */ double x14901 = 0.0;
      /* VAR */ double x14902 = 0.0;
      /* VAR */ double x14903 = 0.0;
      int x14818 = 0;
      for(; x14818 < x14896 ; x14818 += 1) {
        
        struct LINEITEMRecord* x14819 = &(x14895[x14818]);
        int x14820 = x14819->L_SHIPDATE;
        int x14821 = x14820<=(19980902);
        if(x14821) {
          int x3047 = x14898;
          int x3048 = x3047+(1);
          x14898 = x3048;
          double x3050 = x14899;
          double x3051 = x14819->L_EXTENDEDPRICE;
          double x3052 = x14819->L_DISCOUNT;
          double x3053 = 1.0-(x3052);
          double x3054 = x3051*(x3053);
          double x3055 = x3050+(x3054);
          x14899 = x3055;
          double x3057 = x14900;
          double x3058 = x3057+(x3052);
          x14900 = x3058;
          double x3060 = x14901;
          double x3061 = x3060+(x3051);
          x14901 = x3061;
          double x3063 = x14902;
          double x3064 = x14819->L_QUANTITY;
          double x3065 = x3063+(x3064);
          x14902 = x3065;
          double x3067 = x14903;
          double x3068 = x14819->L_TAX;
          double x3069 = 1.0+(x3068);
          double x3070 = x3054*(x3069);
          double x3071 = x3067+(x3070);
          x14903 = x3071;
        };
      };
      double x14967 = x14900;
      double x14968 = x14902;
      double x14969 = x14901;
      double x14970 = x14899;
      double x14971 = x14903;
      int x14972 = x14898;
      double x14974 = x14902;
      int x14975 = x14898;
      double x14977 = x14974/(x14975);
      double x14978 = x14901;
      int x14979 = x14898;
      double x14981 = x14978/(x14979);
      double x14982 = x14900;
      int x14983 = x14898;
      double x14985 = x14982/(x14983);
      int x14986 = x21069;
      double* x14987 = x21070[x14986];
      int x14988 = x21069;
      int x14989 = x14988+(1);
      x21069 = x14989;
      *x14987 = x14967;
      *(x14987 + 1) = x14968;
      *(x14987 + 2) = x14969;
      *(x14987 + 3) = x14970;
      *(x14987 + 4) = x14971;
      *(x14987 + 5) = x14972;
      *(x14987 + 6) = x14977;
      *(x14987 + 7) = x14981;
      *(x14987 + 8) = x14985;
      int x15000 = x21081;
      struct Tuple2_Q1GRPRecord_Array_Double* x15001 = &(x21082[x15000]);
      x15001->_1 = x14897;
      x15001->_2 = x14987;
      int x15004 = x21081;
      int x15005 = x15004+(1);
      x21081 = x15005;
      struct Tuple2_Q1GRPRecord_Array_Double x15007 = *x15001;
      *(x21120 + x14894) = x15007;
      struct Tuple2_Q1GRPRecord_Array_Double* x15009 = &(x21120[x14894]);
      x15001 = x15009;
    };
    int x21351 = x21099;
    struct Tuple2_Q1GRPRecord_Array_Double* x21352 = x21100[x21351];
    int x21353 = x21099;
    int x21354 = x21353+(1);
    x21099 = x21354;
    /* VAR */ int x21356 = 0;
    int* x21385 = &(x21371);
    GTree* x21386 = g_tree_new(x21385);
    int x15055 = 0;
    for(; x15055 < x21068 ; x15055 += 1) {
      
      struct Tuple2_Q1GRPRecord_Array_Double* x15056 = &(x21120[x15055]);
      g_tree_insert(x21386, x15056, x15056);
      int x15058 = x21356;
      int x15059 = x15058+(1);
      x21356 = x15059;
    };
    int x21400 = g_tree_nnodes(x21386);
    int x15081 = 0;
    for(; x15081 < x21400 ; x15081 += 1) {
      
      void* x15082 = NULL;
      void** x15090 = &(x15082);
      g_tree_foreach(x21386, x15083, x15090);
      struct Tuple2_Q1GRPRecord_Array_Double* x15092 = (struct Tuple2_Q1GRPRecord_Array_Double*){x15082};
      int x15093 = g_tree_remove(x21386, x15092);
      struct Tuple2_Q1GRPRecord_Array_Double x15094 = *x15092;
      *(x21352 + x15081) = x15094;
      struct Tuple2_Q1GRPRecord_Array_Double* x15096 = &(x21352[x15081]);
      x15092 = x15096;
    };
    /* VAR */ int x21436 = 0;
    int x15119 = 0;
    for(; x15119 < x21068 ; x15119 += 1) {
      
      struct Tuple2_Q1GRPRecord_Array_Double* x15120 = &(x21352[x15119]);
      struct Q1GRPRecord* x15121 = x15120->_1;
      char x15122 = x15121->L_RETURNFLAG;
      char x15123 = x15121->L_LINESTATUS;
      double* x15124 = x15120->_2;
      double x15125 = x15124[1];
      double x15126 = x15124[2];
      double x15127 = x15124[3];
      double x15128 = x15124[4];
      double x15129 = x15124[6];
      double x15130 = x15124[7];
      double x15131 = x15124[8];
      double x15132 = x15124[5];
      printf("%c|%c|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.0f\n", x15122, x15123, x15125, x15126, x15127, x15128, x15129, x15130, x15131, x15132);
      int x15134 = x21436;
      int x15135 = x15134+(1);
      x21436 = x15135;
    };
    int x21474 = x21436;
    printf("(%d rows)\n", x21474);
    struct timeval* x21476 = &x21116;
    gettimeofday(x21476, NULL);
    struct timeval* x21478 = &x21112;
    struct timeval* x21479 = &x21116;
    struct timeval* x21480 = &x21114;
    long x21481 = timeval_subtract(x21478, x21479, x21480);
    printf("Generated code run in %ld milliseconds.\n", x21481);
  };
}
/* ----------- FUNCTIONS ----------- */
int x20953(struct Q1GRPRecord* x9554) {
  char x12073 = x9554->L_RETURNFLAG;
  int x12585 = (int){x12073};
  char x12075 = x9554->L_LINESTATUS;
  int x12587 = (int){x12075};
  int x12077 = x12585+(x12587);
  return x12077; 
}

int x20960(struct Q1GRPRecord* x9559, struct Q1GRPRecord* x9560) {
  char x12081 = x9559->L_RETURNFLAG;
  char x12082 = x9560->L_RETURNFLAG;
  int x12083 = x12081==(x12082);
  char x12084 = x9559->L_LINESTATUS;
  char x12085 = x9560->L_LINESTATUS;
  int x12086 = x12084==(x12085);
  /* VAR */ int ite18408 = 0;
  if(x12083) {
    ite18408 = x12086;
  } else {
    
    ite18408 = 0;
  };
  int x17129 = ite18408;
  return x17129; 
}

int x21371(struct Tuple2_Q1GRPRecord_Array_Double* x5589, struct Tuple2_Q1GRPRecord_Array_Double* x5590) {
  struct Q1GRPRecord* x5591 = x5589->_1;
  char x4055 = x5591->L_RETURNFLAG;
  int x4056 = x4055*(128);
  char x4057 = x5591->L_LINESTATUS;
  int x4058 = x4056+(x4057);
  struct Q1GRPRecord* x5596 = x5590->_1;
  char x4060 = x5596->L_RETURNFLAG;
  int x4061 = x4060*(128);
  char x4062 = x5596->L_LINESTATUS;
  int x4063 = x4061+(x4062);
  int x4064 = x4058-(x4063);
  return x4064; 
}

int x15083(void* x9819, void* x9820, void* x9821) {
  struct Tuple2_Q1GRPRecord_Array_Double** x9822 = (struct Tuple2_Q1GRPRecord_Array_Double**){x9821};
  struct Tuple2_Q1GRPRecord_Array_Double* x9823 = (struct Tuple2_Q1GRPRecord_Array_Double*){x9820};
  pointer_assign(x9822, x9823);
  return 1; 
}
