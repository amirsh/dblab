#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct AGGRecord_OptimalString;
  struct REGIONRecord;
  struct NATIONRecord;
  struct ORDERSRecord;
  struct SUPPLIERRecord;
  struct CUSTOMERRecord;
  
  struct LINEITEMRecord {
  int L_ORDERKEY;
  int L_SUPPKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  };
  
  struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
  };
  
  struct REGIONRecord {
  int R_REGIONKEY;
  char* R_NAME;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  int O_ORDERDATE;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  int S_NATIONKEY;
  };
  
  struct CUSTOMERRecord {
  int C_CUSTKEY;
  int C_NATIONKEY;
  };
  
  


int x46069(struct AGGRecord_OptimalString* x375, struct AGGRecord_OptimalString* x376);

int x19079(void* x19073, void* x19074, void* x19075);
/* GLOBAL VARS */

struct timeval x12078;
int main(int argc, char** argv) {
  FILE* x12788 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x12789 = 0;
  int x12790 = x12789;
  int* x12791 = &x12790;
  int x12792 = fscanf(x12788, "%d", x12791);
  pclose(x12788);
  struct NATIONRecord* x14852 = (struct NATIONRecord*)malloc(x12790 * sizeof(struct NATIONRecord));
  memset(x14852, 0, x12790 * sizeof(struct NATIONRecord));
  int x12796 = O_RDONLY;
  int x12797 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x12796);
  struct stat x12798 = (struct stat){0};
  /* VAR */ struct stat x12799 = x12798;
  struct stat x12800 = x12799;
  struct stat* x12801 = &x12800;
  int x12802 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x12801);
  int x12804 = PROT_READ;
  int x12805 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x12801->st_size), x12804, x12805, x12797, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite37032 = 0;
    if((x5<(x12790))) {
      char x43801 = *x3;
      ite37032 = (x43801!=('\0'));
    } else {
      
      ite37032 = 0;
    };
    int x34001 = ite37032;
    if (!(x34001)) break; 
    
    /* VAR */ int x12813 = 0;
    int x12814 = x12813;
    int* x12815 = &x12814;
    char* x12816 = strntoi_unchecked(x3, x12815);
    x3 = x12816;
    char* x14876 = (char*)malloc(26 * sizeof(char));
    memset(x14876, 0, 26 * sizeof(char));
    /* VAR */ char* x12819 = x3;
    while(1) {
      
      char x12820 = *x3;
      /* VAR */ int ite37051 = 0;
      if((x12820!=('|'))) {
        char x43819 = *x3;
        ite37051 = (x43819!=('\n'));
      } else {
        
        ite37051 = 0;
      };
      int x34013 = ite37051;
      if (!(x34013)) break; 
      
      x3 += 1;
    };
    char* x12827 = x12819;
    int x12828 = x3 - x12827;
    char* x12829 = x12819;
    char* x12830 = strncpy(x14876, x12829, x12828);
    x3 += 1;
    /* VAR */ int x12837 = 0;
    int x12838 = x12837;
    int* x12839 = &x12838;
    char* x12840 = strntoi_unchecked(x3, x12839);
    x3 = x12840;
    char* x14899 = (char*)malloc(153 * sizeof(char));
    memset(x14899, 0, 153 * sizeof(char));
    /* VAR */ char* x12843 = x3;
    while(1) {
      
      char x12844 = *x3;
      /* VAR */ int ite37079 = 0;
      if((x12844!=('|'))) {
        char x43846 = *x3;
        ite37079 = (x43846!=('\n'));
      } else {
        
        ite37079 = 0;
      };
      int x34034 = ite37079;
      if (!(x34034)) break; 
      
      x3 += 1;
    };
    char* x12851 = x12843;
    int x12852 = x3 - x12851;
    char* x12853 = x12843;
    char* x12854 = strncpy(x14899, x12853, x12852);
    x3 += 1;
    struct NATIONRecord* x15957 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x15957, 0, 1 * sizeof(struct NATIONRecord));
    x15957->N_NATIONKEY = x12814; x15957->N_NAME = x14876; x15957->N_REGIONKEY = x12838;
    int x28 = x4;
    struct NATIONRecord x14919 = *x15957;
    *(x14852 + x28) = x14919;
    struct NATIONRecord* x14921 = &(x14852[x28]);
    x15957 = x14921;
    int x30 = x4;
    x4 = (x30+(1));
  };
  FILE* x12867 = popen("wc -l /mnt/ramdisk/tpch/sf8/region.tbl", "r");
  /* VAR */ int x12868 = 0;
  int x12869 = x12868;
  int* x12870 = &x12869;
  int x12871 = fscanf(x12867, "%d", x12870);
  pclose(x12867);
  struct REGIONRecord* x14932 = (struct REGIONRecord*)malloc(x12869 * sizeof(struct REGIONRecord));
  memset(x14932, 0, x12869 * sizeof(struct REGIONRecord));
  int x12875 = O_RDONLY;
  int x12876 = open("/mnt/ramdisk/tpch/sf8/region.tbl", x12875);
  /* VAR */ struct stat x12877 = x12798;
  struct stat x12878 = x12877;
  struct stat* x12879 = &x12878;
  int x12880 = stat("/mnt/ramdisk/tpch/sf8/region.tbl", x12879);
  int x12882 = PROT_READ;
  int x12883 = MAP_PRIVATE;
  char* x36 = mmap(NULL, (x12879->st_size), x12882, x12883, x12876, 0);
  /* VAR */ int x37 = 0;
  while(1) {
    
    int x38 = x37;
    /* VAR */ int ite37129 = 0;
    if((x38<(x12869))) {
      char x43895 = *x36;
      ite37129 = (x43895!=('\0'));
    } else {
      
      ite37129 = 0;
    };
    int x34077 = ite37129;
    if (!(x34077)) break; 
    
    /* VAR */ int x12891 = 0;
    int x12892 = x12891;
    int* x12893 = &x12892;
    char* x12894 = strntoi_unchecked(x36, x12893);
    x36 = x12894;
    char* x14955 = (char*)malloc(26 * sizeof(char));
    memset(x14955, 0, 26 * sizeof(char));
    /* VAR */ char* x12897 = x36;
    while(1) {
      
      char x12898 = *x36;
      /* VAR */ int ite37148 = 0;
      if((x12898!=('|'))) {
        char x43913 = *x36;
        ite37148 = (x43913!=('\n'));
      } else {
        
        ite37148 = 0;
      };
      int x34089 = ite37148;
      if (!(x34089)) break; 
      
      x36 += 1;
    };
    char* x12905 = x12897;
    int x12906 = x36 - x12905;
    char* x12907 = x12897;
    char* x12908 = strncpy(x14955, x12907, x12906);
    x36 += 1;
    char* x14973 = (char*)malloc(153 * sizeof(char));
    memset(x14973, 0, 153 * sizeof(char));
    /* VAR */ char* x12916 = x36;
    while(1) {
      
      char x12917 = *x36;
      /* VAR */ int ite37171 = 0;
      if((x12917!=('|'))) {
        char x43935 = *x36;
        ite37171 = (x43935!=('\n'));
      } else {
        
        ite37171 = 0;
      };
      int x34105 = ite37171;
      if (!(x34105)) break; 
      
      x36 += 1;
    };
    char* x12924 = x12916;
    int x12925 = x36 - x12924;
    char* x12926 = x12916;
    char* x12927 = strncpy(x14973, x12926, x12925);
    x36 += 1;
    struct REGIONRecord* x16033 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x16033, 0, 1 * sizeof(struct REGIONRecord));
    x16033->R_REGIONKEY = x12892; x16033->R_NAME = x14955;
    int x60 = x37;
    struct REGIONRecord x14993 = *x16033;
    *(x14932 + x60) = x14993;
    struct REGIONRecord* x14995 = &(x14932[x60]);
    x16033 = x14995;
    int x62 = x37;
    x37 = (x62+(1));
  };
  FILE* x12940 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x12941 = 0;
  int x12942 = x12941;
  int* x12943 = &x12942;
  int x12944 = fscanf(x12940, "%d", x12943);
  pclose(x12940);
  struct SUPPLIERRecord* x15006 = (struct SUPPLIERRecord*)malloc(x12942 * sizeof(struct SUPPLIERRecord));
  memset(x15006, 0, x12942 * sizeof(struct SUPPLIERRecord));
  int x12948 = O_RDONLY;
  int x12949 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x12948);
  /* VAR */ struct stat x12950 = x12798;
  struct stat x12951 = x12950;
  struct stat* x12952 = &x12951;
  int x12953 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x12952);
  int x12955 = PROT_READ;
  int x12956 = MAP_PRIVATE;
  char* x68 = mmap(NULL, (x12952->st_size), x12955, x12956, x12949, 0);
  /* VAR */ int x69 = 0;
  while(1) {
    
    int x70 = x69;
    /* VAR */ int ite37221 = 0;
    if((x70<(x12942))) {
      char x43984 = *x68;
      ite37221 = (x43984!=('\0'));
    } else {
      
      ite37221 = 0;
    };
    int x34148 = ite37221;
    if (!(x34148)) break; 
    
    /* VAR */ int x12964 = 0;
    int x12965 = x12964;
    int* x12966 = &x12965;
    char* x12967 = strntoi_unchecked(x68, x12966);
    x68 = x12967;
    char* x15029 = (char*)malloc(26 * sizeof(char));
    memset(x15029, 0, 26 * sizeof(char));
    /* VAR */ char* x12970 = x68;
    while(1) {
      
      char x12971 = *x68;
      /* VAR */ int ite37240 = 0;
      if((x12971!=('|'))) {
        char x44002 = *x68;
        ite37240 = (x44002!=('\n'));
      } else {
        
        ite37240 = 0;
      };
      int x34160 = ite37240;
      if (!(x34160)) break; 
      
      x68 += 1;
    };
    char* x12978 = x12970;
    int x12979 = x68 - x12978;
    char* x12980 = x12970;
    char* x12981 = strncpy(x15029, x12980, x12979);
    x68 += 1;
    char* x15047 = (char*)malloc(41 * sizeof(char));
    memset(x15047, 0, 41 * sizeof(char));
    /* VAR */ char* x12989 = x68;
    while(1) {
      
      char x12990 = *x68;
      /* VAR */ int ite37263 = 0;
      if((x12990!=('|'))) {
        char x44024 = *x68;
        ite37263 = (x44024!=('\n'));
      } else {
        
        ite37263 = 0;
      };
      int x34176 = ite37263;
      if (!(x34176)) break; 
      
      x68 += 1;
    };
    char* x12997 = x12989;
    int x12998 = x68 - x12997;
    char* x12999 = x12989;
    char* x13000 = strncpy(x15047, x12999, x12998);
    x68 += 1;
    /* VAR */ int x13007 = 0;
    int x13008 = x13007;
    int* x13009 = &x13008;
    char* x13010 = strntoi_unchecked(x68, x13009);
    x68 = x13010;
    char* x15070 = (char*)malloc(16 * sizeof(char));
    memset(x15070, 0, 16 * sizeof(char));
    /* VAR */ char* x13013 = x68;
    while(1) {
      
      char x13014 = *x68;
      /* VAR */ int ite37291 = 0;
      if((x13014!=('|'))) {
        char x44051 = *x68;
        ite37291 = (x44051!=('\n'));
      } else {
        
        ite37291 = 0;
      };
      int x34197 = ite37291;
      if (!(x34197)) break; 
      
      x68 += 1;
    };
    char* x13021 = x13013;
    int x13022 = x68 - x13021;
    char* x13023 = x13013;
    char* x13024 = strncpy(x15070, x13023, x13022);
    x68 += 1;
    /* VAR */ double x13031 = 0.0;
    double x13032 = x13031;
    double* x13033 = &x13032;
    char* x13034 = strntod_unchecked(x68, x13033);
    x68 = x13034;
    char* x15093 = (char*)malloc(102 * sizeof(char));
    memset(x15093, 0, 102 * sizeof(char));
    /* VAR */ char* x13037 = x68;
    while(1) {
      
      char x13038 = *x68;
      /* VAR */ int ite37319 = 0;
      if((x13038!=('|'))) {
        char x44078 = *x68;
        ite37319 = (x44078!=('\n'));
      } else {
        
        ite37319 = 0;
      };
      int x34218 = ite37319;
      if (!(x34218)) break; 
      
      x68 += 1;
    };
    char* x13045 = x13037;
    int x13046 = x68 - x13045;
    char* x13047 = x13037;
    char* x13048 = strncpy(x15093, x13047, x13046);
    x68 += 1;
    struct SUPPLIERRecord* x16155 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x16155, 0, 1 * sizeof(struct SUPPLIERRecord));
    x16155->S_SUPPKEY = x12965; x16155->S_NATIONKEY = x13008;
    int x110 = x69;
    struct SUPPLIERRecord x15113 = *x16155;
    *(x15006 + x110) = x15113;
    struct SUPPLIERRecord* x15115 = &(x15006[x110]);
    x16155 = x15115;
    int x112 = x69;
    x69 = (x112+(1));
  };
  FILE* x13061 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x13062 = 0;
  int x13063 = x13062;
  int* x13064 = &x13063;
  int x13065 = fscanf(x13061, "%d", x13064);
  pclose(x13061);
  struct LINEITEMRecord* x15126 = (struct LINEITEMRecord*)malloc(x13063 * sizeof(struct LINEITEMRecord));
  memset(x15126, 0, x13063 * sizeof(struct LINEITEMRecord));
  int x13069 = O_RDONLY;
  int x13070 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x13069);
  /* VAR */ struct stat x13071 = x12798;
  struct stat x13072 = x13071;
  struct stat* x13073 = &x13072;
  int x13074 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x13073);
  int x13076 = PROT_READ;
  int x13077 = MAP_PRIVATE;
  char* x118 = mmap(NULL, (x13073->st_size), x13076, x13077, x13070, 0);
  /* VAR */ int x119 = 0;
  while(1) {
    
    int x120 = x119;
    /* VAR */ int ite37369 = 0;
    if((x120<(x13063))) {
      char x44127 = *x118;
      ite37369 = (x44127!=('\0'));
    } else {
      
      ite37369 = 0;
    };
    int x34261 = ite37369;
    if (!(x34261)) break; 
    
    /* VAR */ int x13085 = 0;
    int x13086 = x13085;
    int* x13087 = &x13086;
    char* x13088 = strntoi_unchecked(x118, x13087);
    x118 = x13088;
    /* VAR */ int x13090 = 0;
    int x13091 = x13090;
    int* x13092 = &x13091;
    char* x13093 = strntoi_unchecked(x118, x13092);
    x118 = x13093;
    /* VAR */ int x13095 = 0;
    int x13096 = x13095;
    int* x13097 = &x13096;
    char* x13098 = strntoi_unchecked(x118, x13097);
    x118 = x13098;
    /* VAR */ int x13100 = 0;
    int x13101 = x13100;
    int* x13102 = &x13101;
    char* x13103 = strntoi_unchecked(x118, x13102);
    x118 = x13103;
    /* VAR */ double x13105 = 0.0;
    double x13106 = x13105;
    double* x13107 = &x13106;
    char* x13108 = strntod_unchecked(x118, x13107);
    x118 = x13108;
    /* VAR */ double x13110 = 0.0;
    double x13111 = x13110;
    double* x13112 = &x13111;
    char* x13113 = strntod_unchecked(x118, x13112);
    x118 = x13113;
    /* VAR */ double x13115 = 0.0;
    double x13116 = x13115;
    double* x13117 = &x13116;
    char* x13118 = strntod_unchecked(x118, x13117);
    x118 = x13118;
    /* VAR */ double x13120 = 0.0;
    double x13121 = x13120;
    double* x13122 = &x13121;
    char* x13123 = strntod_unchecked(x118, x13122);
    x118 = x13123;
    char x13125 = *x118;
    /* VAR */ char x13126 = x13125;
    x118 += 1;
    x118 += 1;
    char x13130 = *x118;
    /* VAR */ char x13131 = x13130;
    x118 += 1;
    x118 += 1;
    /* VAR */ int x13135 = 0;
    int x13136 = x13135;
    int* x13137 = &x13136;
    char* x13138 = strntoi_unchecked(x118, x13137);
    x118 = x13138;
    /* VAR */ int x13140 = 0;
    int x13141 = x13140;
    int* x13142 = &x13141;
    char* x13143 = strntoi_unchecked(x118, x13142);
    x118 = x13143;
    /* VAR */ int x13145 = 0;
    int x13146 = x13145;
    int* x13147 = &x13146;
    char* x13148 = strntoi_unchecked(x118, x13147);
    x118 = x13148;
    /* VAR */ int x13154 = 0;
    int x13155 = x13154;
    int* x13156 = &x13155;
    char* x13157 = strntoi_unchecked(x118, x13156);
    x118 = x13157;
    /* VAR */ int x13159 = 0;
    int x13160 = x13159;
    int* x13161 = &x13160;
    char* x13162 = strntoi_unchecked(x118, x13161);
    x118 = x13162;
    /* VAR */ int x13164 = 0;
    int x13165 = x13164;
    int* x13166 = &x13165;
    char* x13167 = strntoi_unchecked(x118, x13166);
    x118 = x13167;
    /* VAR */ int x13173 = 0;
    int x13174 = x13173;
    int* x13175 = &x13174;
    char* x13176 = strntoi_unchecked(x118, x13175);
    x118 = x13176;
    /* VAR */ int x13178 = 0;
    int x13179 = x13178;
    int* x13180 = &x13179;
    char* x13181 = strntoi_unchecked(x118, x13180);
    x118 = x13181;
    /* VAR */ int x13183 = 0;
    int x13184 = x13183;
    int* x13185 = &x13184;
    char* x13186 = strntoi_unchecked(x118, x13185);
    x118 = x13186;
    char* x15251 = (char*)malloc(26 * sizeof(char));
    memset(x15251, 0, 26 * sizeof(char));
    /* VAR */ char* x13193 = x118;
    while(1) {
      
      char x13194 = *x118;
      /* VAR */ int ite37490 = 0;
      if((x13194!=('|'))) {
        char x44247 = *x118;
        ite37490 = (x44247!=('\n'));
      } else {
        
        ite37490 = 0;
      };
      int x34375 = ite37490;
      if (!(x34375)) break; 
      
      x118 += 1;
    };
    char* x13201 = x13193;
    int x13202 = x118 - x13201;
    char* x13203 = x13193;
    char* x13204 = strncpy(x15251, x13203, x13202);
    x118 += 1;
    char* x15269 = (char*)malloc(11 * sizeof(char));
    memset(x15269, 0, 11 * sizeof(char));
    /* VAR */ char* x13212 = x118;
    while(1) {
      
      char x13213 = *x118;
      /* VAR */ int ite37513 = 0;
      if((x13213!=('|'))) {
        char x44269 = *x118;
        ite37513 = (x44269!=('\n'));
      } else {
        
        ite37513 = 0;
      };
      int x34391 = ite37513;
      if (!(x34391)) break; 
      
      x118 += 1;
    };
    char* x13220 = x13212;
    int x13221 = x118 - x13220;
    char* x13222 = x13212;
    char* x13223 = strncpy(x15269, x13222, x13221);
    x118 += 1;
    char* x15287 = (char*)malloc(45 * sizeof(char));
    memset(x15287, 0, 45 * sizeof(char));
    /* VAR */ char* x13231 = x118;
    while(1) {
      
      char x13232 = *x118;
      /* VAR */ int ite37536 = 0;
      if((x13232!=('|'))) {
        char x44291 = *x118;
        ite37536 = (x44291!=('\n'));
      } else {
        
        ite37536 = 0;
      };
      int x34407 = ite37536;
      if (!(x34407)) break; 
      
      x118 += 1;
    };
    char* x13239 = x13231;
    int x13240 = x118 - x13239;
    char* x13241 = x13231;
    char* x13242 = strncpy(x15287, x13241, x13240);
    x118 += 1;
    struct LINEITEMRecord* x16351 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x16351, 0, 1 * sizeof(struct LINEITEMRecord));
    x16351->L_ORDERKEY = x13086; x16351->L_SUPPKEY = x13096; x16351->L_EXTENDEDPRICE = x13111; x16351->L_DISCOUNT = x13116;
    int x162 = x119;
    struct LINEITEMRecord x15307 = *x16351;
    *(x15126 + x162) = x15307;
    struct LINEITEMRecord* x15309 = &(x15126[x162]);
    x16351 = x15309;
    int x164 = x119;
    x119 = (x164+(1));
  };
  FILE* x13255 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x13256 = 0;
  int x13257 = x13256;
  int* x13258 = &x13257;
  int x13259 = fscanf(x13255, "%d", x13258);
  pclose(x13255);
  struct ORDERSRecord* x15320 = (struct ORDERSRecord*)malloc(x13257 * sizeof(struct ORDERSRecord));
  memset(x15320, 0, x13257 * sizeof(struct ORDERSRecord));
  int x13263 = O_RDONLY;
  int x13264 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x13263);
  /* VAR */ struct stat x13265 = x12798;
  struct stat x13266 = x13265;
  struct stat* x13267 = &x13266;
  int x13268 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x13267);
  int x13270 = PROT_READ;
  int x13271 = MAP_PRIVATE;
  char* x170 = mmap(NULL, (x13267->st_size), x13270, x13271, x13264, 0);
  /* VAR */ int x171 = 0;
  while(1) {
    
    int x172 = x171;
    /* VAR */ int ite37586 = 0;
    if((x172<(x13257))) {
      char x44340 = *x170;
      ite37586 = (x44340!=('\0'));
    } else {
      
      ite37586 = 0;
    };
    int x34450 = ite37586;
    if (!(x34450)) break; 
    
    /* VAR */ int x13279 = 0;
    int x13280 = x13279;
    int* x13281 = &x13280;
    char* x13282 = strntoi_unchecked(x170, x13281);
    x170 = x13282;
    /* VAR */ int x13284 = 0;
    int x13285 = x13284;
    int* x13286 = &x13285;
    char* x13287 = strntoi_unchecked(x170, x13286);
    x170 = x13287;
    char x13289 = *x170;
    /* VAR */ char x13290 = x13289;
    x170 += 1;
    x170 += 1;
    /* VAR */ double x13294 = 0.0;
    double x13295 = x13294;
    double* x13296 = &x13295;
    char* x13297 = strntod_unchecked(x170, x13296);
    x170 = x13297;
    /* VAR */ int x13299 = 0;
    int x13300 = x13299;
    int* x13301 = &x13300;
    char* x13302 = strntoi_unchecked(x170, x13301);
    x170 = x13302;
    /* VAR */ int x13304 = 0;
    int x13305 = x13304;
    int* x13306 = &x13305;
    char* x13307 = strntoi_unchecked(x170, x13306);
    x170 = x13307;
    /* VAR */ int x13309 = 0;
    int x13310 = x13309;
    int* x13311 = &x13310;
    char* x13312 = strntoi_unchecked(x170, x13311);
    x170 = x13312;
    char* x15377 = (char*)malloc(16 * sizeof(char));
    memset(x15377, 0, 16 * sizeof(char));
    /* VAR */ char* x13319 = x170;
    while(1) {
      
      char x13320 = *x170;
      /* VAR */ int ite37639 = 0;
      if((x13320!=('|'))) {
        char x44392 = *x170;
        ite37639 = (x44392!=('\n'));
      } else {
        
        ite37639 = 0;
      };
      int x34496 = ite37639;
      if (!(x34496)) break; 
      
      x170 += 1;
    };
    char* x13327 = x13319;
    int x13328 = x170 - x13327;
    char* x13329 = x13319;
    char* x13330 = strncpy(x15377, x13329, x13328);
    x170 += 1;
    char* x15395 = (char*)malloc(16 * sizeof(char));
    memset(x15395, 0, 16 * sizeof(char));
    /* VAR */ char* x13338 = x170;
    while(1) {
      
      char x13339 = *x170;
      /* VAR */ int ite37662 = 0;
      if((x13339!=('|'))) {
        char x44414 = *x170;
        ite37662 = (x44414!=('\n'));
      } else {
        
        ite37662 = 0;
      };
      int x34512 = ite37662;
      if (!(x34512)) break; 
      
      x170 += 1;
    };
    char* x13346 = x13338;
    int x13347 = x170 - x13346;
    char* x13348 = x13338;
    char* x13349 = strncpy(x15395, x13348, x13347);
    x170 += 1;
    /* VAR */ int x13356 = 0;
    int x13357 = x13356;
    int* x13358 = &x13357;
    char* x13359 = strntoi_unchecked(x170, x13358);
    x170 = x13359;
    char* x15418 = (char*)malloc(80 * sizeof(char));
    memset(x15418, 0, 80 * sizeof(char));
    /* VAR */ char* x13362 = x170;
    while(1) {
      
      char x13363 = *x170;
      /* VAR */ int ite37690 = 0;
      if((x13363!=('|'))) {
        char x44441 = *x170;
        ite37690 = (x44441!=('\n'));
      } else {
        
        ite37690 = 0;
      };
      int x34533 = ite37690;
      if (!(x34533)) break; 
      
      x170 += 1;
    };
    char* x13370 = x13362;
    int x13371 = x170 - x13370;
    char* x13372 = x13362;
    char* x13373 = strncpy(x15418, x13372, x13371);
    x170 += 1;
    struct ORDERSRecord* x16484 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x16484, 0, 1 * sizeof(struct ORDERSRecord));
    x16484->O_ORDERKEY = x13280; x16484->O_CUSTKEY = x13285; x16484->O_ORDERDATE = (((x13300*(10000))+((x13305*(100))))+(x13310));
    int x206 = x171;
    struct ORDERSRecord x15438 = *x16484;
    *(x15320 + x206) = x15438;
    struct ORDERSRecord* x15440 = &(x15320[x206]);
    x16484 = x15440;
    int x208 = x171;
    x171 = (x208+(1));
  };
  FILE* x13386 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x13387 = 0;
  int x13388 = x13387;
  int* x13389 = &x13388;
  int x13390 = fscanf(x13386, "%d", x13389);
  pclose(x13386);
  struct CUSTOMERRecord* x15451 = (struct CUSTOMERRecord*)malloc(x13388 * sizeof(struct CUSTOMERRecord));
  memset(x15451, 0, x13388 * sizeof(struct CUSTOMERRecord));
  int x13394 = O_RDONLY;
  int x13395 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x13394);
  /* VAR */ struct stat x13396 = x12798;
  struct stat x13397 = x13396;
  struct stat* x13398 = &x13397;
  int x13399 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x13398);
  int x13401 = PROT_READ;
  int x13402 = MAP_PRIVATE;
  char* x214 = mmap(NULL, (x13398->st_size), x13401, x13402, x13395, 0);
  /* VAR */ int x215 = 0;
  while(1) {
    
    int x216 = x215;
    /* VAR */ int ite37740 = 0;
    if((x216<(x13388))) {
      char x44490 = *x214;
      ite37740 = (x44490!=('\0'));
    } else {
      
      ite37740 = 0;
    };
    int x34576 = ite37740;
    if (!(x34576)) break; 
    
    /* VAR */ int x13410 = 0;
    int x13411 = x13410;
    int* x13412 = &x13411;
    char* x13413 = strntoi_unchecked(x214, x13412);
    x214 = x13413;
    char* x15474 = (char*)malloc(26 * sizeof(char));
    memset(x15474, 0, 26 * sizeof(char));
    /* VAR */ char* x13416 = x214;
    while(1) {
      
      char x13417 = *x214;
      /* VAR */ int ite37759 = 0;
      if((x13417!=('|'))) {
        char x44508 = *x214;
        ite37759 = (x44508!=('\n'));
      } else {
        
        ite37759 = 0;
      };
      int x34588 = ite37759;
      if (!(x34588)) break; 
      
      x214 += 1;
    };
    char* x13424 = x13416;
    int x13425 = x214 - x13424;
    char* x13426 = x13416;
    char* x13427 = strncpy(x15474, x13426, x13425);
    x214 += 1;
    char* x15492 = (char*)malloc(41 * sizeof(char));
    memset(x15492, 0, 41 * sizeof(char));
    /* VAR */ char* x13435 = x214;
    while(1) {
      
      char x13436 = *x214;
      /* VAR */ int ite37782 = 0;
      if((x13436!=('|'))) {
        char x44530 = *x214;
        ite37782 = (x44530!=('\n'));
      } else {
        
        ite37782 = 0;
      };
      int x34604 = ite37782;
      if (!(x34604)) break; 
      
      x214 += 1;
    };
    char* x13443 = x13435;
    int x13444 = x214 - x13443;
    char* x13445 = x13435;
    char* x13446 = strncpy(x15492, x13445, x13444);
    x214 += 1;
    /* VAR */ int x13453 = 0;
    int x13454 = x13453;
    int* x13455 = &x13454;
    char* x13456 = strntoi_unchecked(x214, x13455);
    x214 = x13456;
    char* x15515 = (char*)malloc(16 * sizeof(char));
    memset(x15515, 0, 16 * sizeof(char));
    /* VAR */ char* x13459 = x214;
    while(1) {
      
      char x13460 = *x214;
      /* VAR */ int ite37810 = 0;
      if((x13460!=('|'))) {
        char x44557 = *x214;
        ite37810 = (x44557!=('\n'));
      } else {
        
        ite37810 = 0;
      };
      int x34625 = ite37810;
      if (!(x34625)) break; 
      
      x214 += 1;
    };
    char* x13467 = x13459;
    int x13468 = x214 - x13467;
    char* x13469 = x13459;
    char* x13470 = strncpy(x15515, x13469, x13468);
    x214 += 1;
    /* VAR */ double x13477 = 0.0;
    double x13478 = x13477;
    double* x13479 = &x13478;
    char* x13480 = strntod_unchecked(x214, x13479);
    x214 = x13480;
    char* x15538 = (char*)malloc(11 * sizeof(char));
    memset(x15538, 0, 11 * sizeof(char));
    /* VAR */ char* x13483 = x214;
    while(1) {
      
      char x13484 = *x214;
      /* VAR */ int ite37838 = 0;
      if((x13484!=('|'))) {
        char x44584 = *x214;
        ite37838 = (x44584!=('\n'));
      } else {
        
        ite37838 = 0;
      };
      int x34646 = ite37838;
      if (!(x34646)) break; 
      
      x214 += 1;
    };
    char* x13491 = x13483;
    int x13492 = x214 - x13491;
    char* x13493 = x13483;
    char* x13494 = strncpy(x15538, x13493, x13492);
    x214 += 1;
    char* x15556 = (char*)malloc(118 * sizeof(char));
    memset(x15556, 0, 118 * sizeof(char));
    /* VAR */ char* x13502 = x214;
    while(1) {
      
      char x13503 = *x214;
      /* VAR */ int ite37861 = 0;
      if((x13503!=('|'))) {
        char x44606 = *x214;
        ite37861 = (x44606!=('\n'));
      } else {
        
        ite37861 = 0;
      };
      int x34662 = ite37861;
      if (!(x34662)) break; 
      
      x214 += 1;
    };
    char* x13510 = x13502;
    int x13511 = x214 - x13510;
    char* x13512 = x13502;
    char* x13513 = strncpy(x15556, x13512, x13511);
    x214 += 1;
    struct CUSTOMERRecord* x16624 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x16624, 0, 1 * sizeof(struct CUSTOMERRecord));
    x16624->C_CUSTKEY = x13411; x16624->C_NATIONKEY = x13454;
    int x264 = x215;
    struct CUSTOMERRecord x15576 = *x16624;
    *(x15451 + x264) = x15576;
    struct CUSTOMERRecord* x15578 = &(x15451[x264]);
    x16624 = x15578;
    int x266 = x215;
    x215 = (x266+(1));
  };
  int x271 = 0;
  for(; x271 < 1 ; x271 += 1) {
    
    /* VAR */ int x45871 = 0;
    GList*** x45872 = (GList***)malloc(50 * sizeof(GList**));
    memset(x45872, 0, 50 * sizeof(GList**));
    int x29871 = 0;
    for(; x29871 < 50 ; x29871 += 1) {
      
      GList** x29872 = malloc(8);
      GList* x29873 = NULL;
      pointer_assign(x29872, x29873);
      *(x45872 + x29871) = x29872;
    };
    struct LINEITEMRecord** x45884 = (struct LINEITEMRecord**)malloc(60000000 * sizeof(struct LINEITEMRecord*));
    memset(x45884, 0, 60000000 * sizeof(struct LINEITEMRecord*));
    int* x45885 = (int*)malloc(60000000 * sizeof(int));
    memset(x45885, 0, 60000000 * sizeof(int));
    int x29883 = 0;
    for(; x29883 < 60000000 ; x29883 += 1) {
      
      struct LINEITEMRecord* x29884 = (struct LINEITEMRecord*)malloc(16 * sizeof(struct LINEITEMRecord));
      memset(x29884, 0, 16 * sizeof(struct LINEITEMRecord));
      *(x45884 + x29883) = x29884;
    };
    /* VAR */ int x45893 = 0;
    int x29904 = 0;
    for(; x29904 < x13063 ; x29904 += 1) {
      
      struct LINEITEMRecord* x29905 = &(x15126[x29904]);
      int x29907 = (x29905->L_ORDERKEY)%(60000000);
      int x29908 = x45885[x29907];
      struct LINEITEMRecord* x29909 = x45884[x29907];
      struct LINEITEMRecord x29910 = *x29905;
      *(x29909 + x29908) = x29910;
      struct LINEITEMRecord* x29912 = &(x29909[x29908]);
      x29905 = x29912;
      *(x45885 + x29907) = (x29908+(1));
      int x29916 = x45893;
      x45893 = (x29916+(1));
    };
    struct ORDERSRecord** x45925 = (struct ORDERSRecord**)malloc(1200000 * sizeof(struct ORDERSRecord*));
    memset(x45925, 0, 1200000 * sizeof(struct ORDERSRecord*));
    int* x45926 = (int*)malloc(1200000 * sizeof(int));
    memset(x45926, 0, 1200000 * sizeof(int));
    int x29926 = 0;
    for(; x29926 < 1200000 ; x29926 += 1) {
      
      struct ORDERSRecord* x29927 = (struct ORDERSRecord*)malloc(1024 * sizeof(struct ORDERSRecord));
      memset(x29927, 0, 1024 * sizeof(struct ORDERSRecord));
      *(x45925 + x29926) = x29927;
    };
    /* VAR */ int x45934 = 0;
    int x29947 = 0;
    for(; x29947 < x13257 ; x29947 += 1) {
      
      struct ORDERSRecord* x29948 = &(x15320[x29947]);
      int x29950 = (x29948->O_CUSTKEY)%(1200000);
      int x29951 = x45926[x29950];
      struct ORDERSRecord* x29952 = x45925[x29950];
      struct ORDERSRecord x29953 = *x29948;
      *(x29952 + x29951) = x29953;
      struct ORDERSRecord* x29955 = &(x29952[x29951]);
      x29948 = x29955;
      *(x45926 + x29950) = (x29951+(1));
      int x29959 = x45934;
      x45934 = (x29959+(1));
    };
    struct CUSTOMERRecord** x45966 = (struct CUSTOMERRecord**)malloc(25 * sizeof(struct CUSTOMERRecord*));
    memset(x45966, 0, 25 * sizeof(struct CUSTOMERRecord*));
    int* x45967 = (int*)malloc(25 * sizeof(int));
    memset(x45967, 0, 25 * sizeof(int));
    int x29969 = 0;
    for(; x29969 < 25 ; x29969 += 1) {
      
      struct CUSTOMERRecord* x29970 = (struct CUSTOMERRecord*)malloc(60000 * sizeof(struct CUSTOMERRecord));
      memset(x29970, 0, 60000 * sizeof(struct CUSTOMERRecord));
      *(x45966 + x29969) = x29970;
    };
    /* VAR */ int x45975 = 0;
    int x29990 = 0;
    for(; x29990 < x13388 ; x29990 += 1) {
      
      struct CUSTOMERRecord* x29991 = &(x15451[x29990]);
      int x29993 = (x29991->C_NATIONKEY)%(25);
      int x29994 = x45967[x29993];
      struct CUSTOMERRecord* x29995 = x45966[x29993];
      struct CUSTOMERRecord x29996 = *x29991;
      *(x29995 + x29994) = x29996;
      struct CUSTOMERRecord* x29998 = &(x29995[x29994]);
      x29991 = x29998;
      *(x45967 + x29993) = (x29994+(1));
      int x30002 = x45975;
      x45975 = (x30002+(1));
    };
    /* VAR */ int x46007 = 0;
    double** x46008 = (double**)malloc(25 * sizeof(double*));
    memset(x46008, 0, 25 * sizeof(double*));
    /* VAR */ int x46009 = 0;
    while(1) {
      
      int x11885 = x46009;
      if (!((x11885<(25)))) break; 
      
      int x11887 = x46009;
      double* x15682 = (double*)malloc(1 * sizeof(double));
      memset(x15682, 0, 1 * sizeof(double));
      *(x46008 + x11887) = x15682;
      int x11890 = x46009;
      x46009 = (x11890+(1));
    };
    /* VAR */ int x46019 = 0;
    struct AGGRecord_OptimalString* x46020 = (struct AGGRecord_OptimalString*)malloc(25 * sizeof(struct AGGRecord_OptimalString));
    memset(x46020, 0, 25 * sizeof(struct AGGRecord_OptimalString));
    /* VAR */ int x46021 = 0;
    while(1) {
      
      int x11897 = x46021;
      if (!((x11897<(25)))) break; 
      
      int x11899 = x46021;
      double* x11900 = x46008[x11899];
      struct AGGRecord_OptimalString* x16747 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x16747, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      x16747->key = ""; x16747->aggs = x11900;
      struct AGGRecord_OptimalString x15696 = *x16747;
      *(x46020 + x11899) = x15696;
      struct AGGRecord_OptimalString* x15698 = &(x46020[x11899]);
      x16747 = x15698;
      int x11903 = x46021;
      x46021 = (x11903+(1));
    };
    /* VAR */ struct timeval x46037 = x12078;
    struct timeval x46038 = x46037;
    /* VAR */ struct timeval x46039 = x12078;
    struct timeval x46040 = x46039;
    /* VAR */ struct timeval x46041 = x12078;
    struct timeval x46042 = x46041;
    struct timeval* x46043 = &x46040;
    gettimeofday(x46043, NULL);
    /* VAR */ int x46045 = 0;
    int* x46092 = &(x46069);
    GTree* x46093 = g_tree_new(x46092);
    /* VAR */ int x46094 = 0;
    /* VAR */ int x46095 = 0;
    while(1) {
      
      int x46097 = x46045;
      if (!((x46097<(x12790)))) break; 
      
      int x3234 = x46045;
      struct NATIONRecord* x436 = &(x14852[x3234]);
      int x438 = x436->N_REGIONKEY;
      struct REGIONRecord* x9927 = &(x14932[(x438-(0))]);
      int x27817 = strcmp((x9927->R_NAME), "ASIA");
      if((x27817==(0))) {
        if(((x9927->R_REGIONKEY)==(x438))) {
          if(((x9927->R_REGIONKEY)==(x438))) {
            int x1329 = x436->N_NATIONKEY;
            char* x1330 = x436->N_NAME;
            int x6012 = x1329%(25);
            int x6013 = x45967[x6012];
            struct CUSTOMERRecord* x6014 = x45966[x6012];
            int x30506 = 0;
            for(; x30506 < x6013 ; x30506 += 1) {
              
              struct CUSTOMERRecord* x30507 = &(x6014[x30506]);
              if((x1329==((x30507->C_NATIONKEY)))) {
                int x1381 = x30507->C_CUSTKEY;
                int x6030 = x1381%(1200000);
                int x6031 = x45926[x6030];
                struct ORDERSRecord* x6032 = x45925[x6030];
                int x30308 = 0;
                for(; x30308 < x6031 ; x30308 += 1) {
                  
                  struct ORDERSRecord* x30309 = &(x6032[x30308]);
                  int x30310 = x30309->O_ORDERDATE;
                  /* VAR */ int ite40087 = 0;
                  if((x30310>=(19960101))) {
                    ite40087 = (x30310<(19970101));
                  } else {
                    
                    ite40087 = 0;
                  };
                  int x36730 = ite40087;
                  if(x36730) {
                    if((x1381==((x30309->O_CUSTKEY)))) {
                      int x1440 = x30309->O_ORDERKEY;
                      int x6055 = x1440%(60000000);
                      int x6056 = x45885[x6055];
                      struct LINEITEMRecord* x6057 = x45884[x6055];
                      int x30216 = 0;
                      for(; x30216 < x6056 ; x30216 += 1) {
                        
                        struct LINEITEMRecord* x30217 = &(x6057[x30216]);
                        if((x1440==((x30217->L_ORDERKEY)))) {
                          int x1617 = x30217->L_SUPPKEY;
                          struct SUPPLIERRecord* x9980 = &(x15006[(x1617-(1))]);
                          if(((x9980->S_SUPPKEY)==(x1617))) {
                            /* VAR */ int ite40220 = 0;
                            if(((x9980->S_SUPPKEY)==(x1617))) {
                              ite40220 = (x1329==((x9980->S_NATIONKEY)));
                            } else {
                              
                              ite40220 = 0;
                            };
                            int x36850 = ite40220;
                            if(x36850) {
                              int x27879 = strlen(x1330);
                              /* VAR */ int x25646 = 0;
                              /* VAR */ int x25647 = 0;
                              while(1) {
                                
                                int x25648 = x25646;
                                if (!((x25648<(x27879)))) break; 
                                
                                int x25650 = x25647;
                                int x25651 = x25646;
                                char* x27887 = pointer_add(x1330, x25651);
                                char x27888 = *(x27887);
                                x25647 = (x25650+(x27888));
                                int x25656 = x25646;
                                x25646 = (x25656+(1));
                              };
                              int x25660 = x25647;
                              int x8485 = x25660&((50-(1)));
                              GList** x8486 = x45872[x8485];
                              int x8487 = x45871;
                              if((x8485>(x8487))) {
                                x45871 = x8485;
                              };
                              /* VAR */ struct AGGRecord_OptimalString* x18987 = NULL;
                              GList* x18988 = *(x8486);
                              /* VAR */ GList* x18989 = x18988;
                              while(1) {
                                
                                GList* x18990 = x18989;
                                GList* x18991 = NULL;
                                if (!((x18990!=(x18991)))) break; 
                                
                                GList* x18993 = x18989;
                                void* x18994 = g_list_nth_data(x18993, 0);
                                struct AGGRecord_OptimalString* x18995 = (struct AGGRecord_OptimalString*){x18994};
                                GList* x18996 = x18989;
                                GList* x18997 = g_list_next(x18996);
                                x18989 = x18997;
                                int x25687 = strcmp((x18995->key), x1330);
                                int x25688 = !(x25687);
                                if(x25688) {
                                  x18987 = x18995;
                                  break;
                                };
                              };
                              struct AGGRecord_OptimalString* x19005 = x18987;
                              /* VAR */ struct AGGRecord_OptimalString* ite36902 = 0;
                              if((x19005!=(NULL))) {
                                ite36902 = x19005;
                              } else {
                                
                                int x36904 = x46007;
                                double* x36905 = x46008[x36904];
                                int x36906 = x46007;
                                x46007 = (x36906+(1));
                                int x36909 = x46019;
                                struct AGGRecord_OptimalString* x36910 = &(x46020[x36909]);
                                x36910->key = x1330;
                                x36910->aggs = x36905;
                                int x36913 = x46019;
                                x46019 = (x36913+(1));
                                GList* x36916 = *(x8486);
                                GList* x36917 = g_list_prepend(x36916, x36910);
                                pointer_assign(x8486, x36917);
                                ite36902 = x36910;
                              };
                              struct AGGRecord_OptimalString* x8500 = ite36902;
                              double* x733 = x8500->aggs;
                              double x747 = x733[0];
                              *x733 = (x747+(((x30217->L_EXTENDEDPRICE)*((1.0-((x30217->L_DISCOUNT)))))));
                            };
                          };
                        };
                      };
                    };
                  };
                };
              };
            };
          };
        };
      };
      int x3268 = x46045;
      x46045 = (x3268+(1));
    };
    int x47023 = x45871;
    int x30937 = 0;
    for(; x30937 < (x47023+(1)) ; x30937 += 1) {
      
      GList** x30938 = x45872[x30937];
      GList* x30943 = *(x30938);
      /* VAR */ GList* x30944 = x30943;
      while(1) {
        
        GList* x19051 = x30944;
        GList* x19052 = NULL;
        if (!((x19051!=(x19052)))) break; 
        
        GList* x19054 = x30944;
        void* x19055 = g_list_nth_data(x19054, 0);
        struct AGGRecord_OptimalString* x19056 = (struct AGGRecord_OptimalString*){x19055};
        GList* x19057 = x30944;
        GList* x19058 = g_list_next(x19057);
        x30944 = x19058;
        g_tree_insert(x46093, x19056, x19056);
      };
    };
    while(1) {
      
      int x3610 = x46094;
      int x778 = !(x3610);
      /* VAR */ int ite40355 = 0;
      if(x778) {
        int x47071 = g_tree_nnodes(x46093);
        ite40355 = (x47071!=(0));
      } else {
        
        ite40355 = 0;
      };
      int x36978 = ite40355;
      if (!(x36978)) break; 
      
      void* x19072 = NULL;
      void** x19080 = &(x19072);
      g_tree_foreach(x46093, x19079, x19080);
      struct AGGRecord_OptimalString* x19082 = (struct AGGRecord_OptimalString*){x19072};
      int x19083 = g_tree_remove(x46093, x19082);
      if(0) {
        x46094 = 1;
      } else {
        
        double x794 = ((double*) { x19082->aggs })[0];
        printf("%s|%.4f\n", (x19082->key), x794);
        int x3628 = x46095;
        x46095 = (x3628+(1));
      };
    };
    int x47098 = x46095;
    printf("(%d rows)\n", x47098);
    struct timeval* x47100 = &x46042;
    gettimeofday(x47100, NULL);
    struct timeval* x47102 = &x46038;
    struct timeval* x47103 = &x46042;
    struct timeval* x47104 = &x46040;
    long x47105 = timeval_subtract(x47102, x47103, x47104);
    printf("Generated code run in %ld milliseconds.\n", x47105);
  };
}
/* ----------- FUNCTIONS ----------- */
int x46069(struct AGGRecord_OptimalString* x375, struct AGGRecord_OptimalString* x376) {
  double* x377 = x375->aggs;
  double x378 = x377[0];
  double* x379 = x376->aggs;
  double x380 = x379[0];
  /* VAR */ int ite36055 = 0;
  if((x378<(x380))) {
    ite36055 = 1;
  } else {
    
    double x36057 = x377[0];
    double x36058 = x379[0];
    /* VAR */ int ite36061 = 0;
    if((x36057>(x36058))) {
      ite36061 = -1;
    } else {
      
      ite36061 = 0;
    };
    int x36060 = ite36061;
    ite36055 = x36060;
  };
  int x386 = ite36055;
  return x386; 
}

int x19079(void* x19073, void* x19074, void* x19075) {
  pointer_assign(((struct AGGRecord_OptimalString**){x19075}), ((struct AGGRecord_OptimalString*){x19074}));
  return 1; 
}
