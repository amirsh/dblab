#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct REGIONRecord;
  struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord;
  struct NATIONRecord;
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord;
  struct PARTRecord;
  struct SUPPLIERRecord;
  struct PARTSUPPRecord;
  
  struct REGIONRecord {
  int R_REGIONKEY;
  char* R_NAME;
  };
  
  struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord {
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* wnd;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  };
  
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord {
  int R_REGIONKEY;
  char* R_NAME;
  int P_PARTKEY;
  char* P_MFGR;
  char* P_TYPE;
  int P_SIZE;
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  int PS_PARTKEY;
  int PS_SUPPKEY;
  double PS_SUPPLYCOST;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  char* P_MFGR;
  char* P_TYPE;
  int P_SIZE;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  };
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  double PS_SUPPLYCOST;
  };
  
  


int x29779(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x291, struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x292);

int x16081(void* x16075, void* x16076, void* x16077);
/* GLOBAL VARS */

struct timeval x10934;
int main(int argc, char** argv) {
  FILE* x11557 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x11558 = 0;
  int x11559 = x11558;
  int* x11560 = &x11559;
  int x11561 = fscanf(x11557, "%d", x11560);
  pclose(x11557);
  struct PARTRecord* x13039 = (struct PARTRecord*)malloc(x11559 * sizeof(struct PARTRecord));
  memset(x13039, 0, x11559 * sizeof(struct PARTRecord));
  int x11565 = O_RDONLY;
  int x11566 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x11565);
  struct stat x11567 = (struct stat){0};
  /* VAR */ struct stat x11568 = x11567;
  struct stat x11569 = x11568;
  struct stat* x11570 = &x11569;
  int x11571 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x11570);
  int x11573 = PROT_READ;
  int x11574 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x11570->st_size), x11573, x11574, x11566, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite25971 = 0;
    if((x5<(x11559))) {
      char x28740 = *x3;
      ite25971 = (x28740!=('\0'));
    } else {
      
      ite25971 = 0;
    };
    int x24769 = ite25971;
    if (!(x24769)) break; 
    
    /* VAR */ int x11582 = 0;
    int x11583 = x11582;
    int* x11584 = &x11583;
    char* x11585 = strntoi_unchecked(x3, x11584);
    x3 = x11585;
    char* x13063 = (char*)malloc(56 * sizeof(char));
    memset(x13063, 0, 56 * sizeof(char));
    /* VAR */ char* x11588 = x3;
    while(1) {
      
      char x11589 = *x3;
      /* VAR */ int ite25990 = 0;
      if((x11589!=('|'))) {
        char x28758 = *x3;
        ite25990 = (x28758!=('\n'));
      } else {
        
        ite25990 = 0;
      };
      int x24781 = ite25990;
      if (!(x24781)) break; 
      
      x3 += 1;
    };
    char* x11596 = x11588;
    int x11597 = x3 - x11596;
    char* x11598 = x11588;
    char* x11599 = strncpy(x13063, x11598, x11597);
    x3 += 1;
    char* x13081 = (char*)malloc(26 * sizeof(char));
    memset(x13081, 0, 26 * sizeof(char));
    /* VAR */ char* x11607 = x3;
    while(1) {
      
      char x11608 = *x3;
      /* VAR */ int ite26013 = 0;
      if((x11608!=('|'))) {
        char x28780 = *x3;
        ite26013 = (x28780!=('\n'));
      } else {
        
        ite26013 = 0;
      };
      int x24797 = ite26013;
      if (!(x24797)) break; 
      
      x3 += 1;
    };
    char* x11615 = x11607;
    int x11616 = x3 - x11615;
    char* x11617 = x11607;
    char* x11618 = strncpy(x13081, x11617, x11616);
    x3 += 1;
    char* x13099 = (char*)malloc(11 * sizeof(char));
    memset(x13099, 0, 11 * sizeof(char));
    /* VAR */ char* x11626 = x3;
    while(1) {
      
      char x11627 = *x3;
      /* VAR */ int ite26036 = 0;
      if((x11627!=('|'))) {
        char x28802 = *x3;
        ite26036 = (x28802!=('\n'));
      } else {
        
        ite26036 = 0;
      };
      int x24813 = ite26036;
      if (!(x24813)) break; 
      
      x3 += 1;
    };
    char* x11634 = x11626;
    int x11635 = x3 - x11634;
    char* x11636 = x11626;
    char* x11637 = strncpy(x13099, x11636, x11635);
    x3 += 1;
    char* x13117 = (char*)malloc(26 * sizeof(char));
    memset(x13117, 0, 26 * sizeof(char));
    /* VAR */ char* x11645 = x3;
    while(1) {
      
      char x11646 = *x3;
      /* VAR */ int ite26059 = 0;
      if((x11646!=('|'))) {
        char x28824 = *x3;
        ite26059 = (x28824!=('\n'));
      } else {
        
        ite26059 = 0;
      };
      int x24829 = ite26059;
      if (!(x24829)) break; 
      
      x3 += 1;
    };
    char* x11653 = x11645;
    int x11654 = x3 - x11653;
    char* x11655 = x11645;
    char* x11656 = strncpy(x13117, x11655, x11654);
    x3 += 1;
    /* VAR */ int x11663 = 0;
    int x11664 = x11663;
    int* x11665 = &x11664;
    char* x11666 = strntoi_unchecked(x3, x11665);
    x3 = x11666;
    char* x13140 = (char*)malloc(11 * sizeof(char));
    memset(x13140, 0, 11 * sizeof(char));
    /* VAR */ char* x11669 = x3;
    while(1) {
      
      char x11670 = *x3;
      /* VAR */ int ite26087 = 0;
      if((x11670!=('|'))) {
        char x28851 = *x3;
        ite26087 = (x28851!=('\n'));
      } else {
        
        ite26087 = 0;
      };
      int x24850 = ite26087;
      if (!(x24850)) break; 
      
      x3 += 1;
    };
    char* x11677 = x11669;
    int x11678 = x3 - x11677;
    char* x11679 = x11669;
    char* x11680 = strncpy(x13140, x11679, x11678);
    x3 += 1;
    /* VAR */ double x11687 = 0.0;
    double x11688 = x11687;
    double* x11689 = &x11688;
    char* x11690 = strntod_unchecked(x3, x11689);
    x3 = x11690;
    char* x13163 = (char*)malloc(24 * sizeof(char));
    memset(x13163, 0, 24 * sizeof(char));
    /* VAR */ char* x11693 = x3;
    while(1) {
      
      char x11694 = *x3;
      /* VAR */ int ite26115 = 0;
      if((x11694!=('|'))) {
        char x28878 = *x3;
        ite26115 = (x28878!=('\n'));
      } else {
        
        ite26115 = 0;
      };
      int x24871 = ite26115;
      if (!(x24871)) break; 
      
      x3 += 1;
    };
    char* x11701 = x11693;
    int x11702 = x3 - x11701;
    char* x11703 = x11693;
    char* x11704 = strncpy(x13163, x11703, x11702);
    x3 += 1;
    struct PARTRecord* x13925 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x13925, 0, 1 * sizeof(struct PARTRecord));
    x13925->P_PARTKEY = x11583; x13925->P_MFGR = x13081; x13925->P_TYPE = x13117; x13925->P_SIZE = x11664;
    int x59 = x4;
    struct PARTRecord x13183 = *x13925;
    *(x13039 + x59) = x13183;
    struct PARTRecord* x13185 = &(x13039[x59]);
    x13925 = x13185;
    int x61 = x4;
    x4 = (x61+(1));
  };
  FILE* x11717 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x11718 = 0;
  int x11719 = x11718;
  int* x11720 = &x11719;
  int x11721 = fscanf(x11717, "%d", x11720);
  pclose(x11717);
  struct PARTSUPPRecord* x13196 = (struct PARTSUPPRecord*)malloc(x11719 * sizeof(struct PARTSUPPRecord));
  memset(x13196, 0, x11719 * sizeof(struct PARTSUPPRecord));
  int x11725 = O_RDONLY;
  int x11726 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x11725);
  /* VAR */ struct stat x11727 = x11567;
  struct stat x11728 = x11727;
  struct stat* x11729 = &x11728;
  int x11730 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x11729);
  int x11732 = PROT_READ;
  int x11733 = MAP_PRIVATE;
  char* x67 = mmap(NULL, (x11729->st_size), x11732, x11733, x11726, 0);
  /* VAR */ int x68 = 0;
  while(1) {
    
    int x69 = x68;
    /* VAR */ int ite26165 = 0;
    if((x69<(x11719))) {
      char x28927 = *x67;
      ite26165 = (x28927!=('\0'));
    } else {
      
      ite26165 = 0;
    };
    int x24914 = ite26165;
    if (!(x24914)) break; 
    
    /* VAR */ int x11741 = 0;
    int x11742 = x11741;
    int* x11743 = &x11742;
    char* x11744 = strntoi_unchecked(x67, x11743);
    x67 = x11744;
    /* VAR */ int x11746 = 0;
    int x11747 = x11746;
    int* x11748 = &x11747;
    char* x11749 = strntoi_unchecked(x67, x11748);
    x67 = x11749;
    /* VAR */ int x11751 = 0;
    int x11752 = x11751;
    int* x11753 = &x11752;
    char* x11754 = strntoi_unchecked(x67, x11753);
    x67 = x11754;
    /* VAR */ double x11756 = 0.0;
    double x11757 = x11756;
    double* x11758 = &x11757;
    char* x11759 = strntod_unchecked(x67, x11758);
    x67 = x11759;
    char* x13234 = (char*)malloc(200 * sizeof(char));
    memset(x13234, 0, 200 * sizeof(char));
    /* VAR */ char* x11762 = x67;
    while(1) {
      
      char x11763 = *x67;
      /* VAR */ int ite26199 = 0;
      if((x11763!=('|'))) {
        char x28960 = *x67;
        ite26199 = (x28960!=('\n'));
      } else {
        
        ite26199 = 0;
      };
      int x24941 = ite26199;
      if (!(x24941)) break; 
      
      x67 += 1;
    };
    char* x11770 = x11762;
    int x11771 = x67 - x11770;
    char* x11772 = x11762;
    char* x11773 = strncpy(x13234, x11772, x11771);
    x67 += 1;
    struct PARTSUPPRecord* x13998 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x13998, 0, 1 * sizeof(struct PARTSUPPRecord));
    x13998->PS_PARTKEY = x11742; x13998->PS_SUPPKEY = x11747; x13998->PS_SUPPLYCOST = x11757;
    int x86 = x68;
    struct PARTSUPPRecord x13254 = *x13998;
    *(x13196 + x86) = x13254;
    struct PARTSUPPRecord* x13256 = &(x13196[x86]);
    x13998 = x13256;
    int x88 = x68;
    x68 = (x88+(1));
  };
  FILE* x11786 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x11787 = 0;
  int x11788 = x11787;
  int* x11789 = &x11788;
  int x11790 = fscanf(x11786, "%d", x11789);
  pclose(x11786);
  struct NATIONRecord* x13267 = (struct NATIONRecord*)malloc(x11788 * sizeof(struct NATIONRecord));
  memset(x13267, 0, x11788 * sizeof(struct NATIONRecord));
  int x11794 = O_RDONLY;
  int x11795 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x11794);
  /* VAR */ struct stat x11796 = x11567;
  struct stat x11797 = x11796;
  struct stat* x11798 = &x11797;
  int x11799 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x11798);
  int x11801 = PROT_READ;
  int x11802 = MAP_PRIVATE;
  char* x94 = mmap(NULL, (x11798->st_size), x11801, x11802, x11795, 0);
  /* VAR */ int x95 = 0;
  while(1) {
    
    int x96 = x95;
    /* VAR */ int ite26249 = 0;
    if((x96<(x11788))) {
      char x29009 = *x94;
      ite26249 = (x29009!=('\0'));
    } else {
      
      ite26249 = 0;
    };
    int x24984 = ite26249;
    if (!(x24984)) break; 
    
    /* VAR */ int x11810 = 0;
    int x11811 = x11810;
    int* x11812 = &x11811;
    char* x11813 = strntoi_unchecked(x94, x11812);
    x94 = x11813;
    char* x13290 = (char*)malloc(26 * sizeof(char));
    memset(x13290, 0, 26 * sizeof(char));
    /* VAR */ char* x11816 = x94;
    while(1) {
      
      char x11817 = *x94;
      /* VAR */ int ite26268 = 0;
      if((x11817!=('|'))) {
        char x29027 = *x94;
        ite26268 = (x29027!=('\n'));
      } else {
        
        ite26268 = 0;
      };
      int x24996 = ite26268;
      if (!(x24996)) break; 
      
      x94 += 1;
    };
    char* x11824 = x11816;
    int x11825 = x94 - x11824;
    char* x11826 = x11816;
    char* x11827 = strncpy(x13290, x11826, x11825);
    x94 += 1;
    /* VAR */ int x11834 = 0;
    int x11835 = x11834;
    int* x11836 = &x11835;
    char* x11837 = strntoi_unchecked(x94, x11836);
    x94 = x11837;
    char* x13313 = (char*)malloc(153 * sizeof(char));
    memset(x13313, 0, 153 * sizeof(char));
    /* VAR */ char* x11840 = x94;
    while(1) {
      
      char x11841 = *x94;
      /* VAR */ int ite26296 = 0;
      if((x11841!=('|'))) {
        char x29054 = *x94;
        ite26296 = (x29054!=('\n'));
      } else {
        
        ite26296 = 0;
      };
      int x25017 = ite26296;
      if (!(x25017)) break; 
      
      x94 += 1;
    };
    char* x11848 = x11840;
    int x11849 = x94 - x11848;
    char* x11850 = x11840;
    char* x11851 = strncpy(x13313, x11850, x11849);
    x94 += 1;
    struct NATIONRecord* x14079 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x14079, 0, 1 * sizeof(struct NATIONRecord));
    x14079->N_NATIONKEY = x11811; x14079->N_NAME = x13290; x14079->N_REGIONKEY = x11835;
    int x119 = x95;
    struct NATIONRecord x13333 = *x14079;
    *(x13267 + x119) = x13333;
    struct NATIONRecord* x13335 = &(x13267[x119]);
    x14079 = x13335;
    int x121 = x95;
    x95 = (x121+(1));
  };
  FILE* x11864 = popen("wc -l /mnt/ramdisk/tpch/sf8/region.tbl", "r");
  /* VAR */ int x11865 = 0;
  int x11866 = x11865;
  int* x11867 = &x11866;
  int x11868 = fscanf(x11864, "%d", x11867);
  pclose(x11864);
  struct REGIONRecord* x13346 = (struct REGIONRecord*)malloc(x11866 * sizeof(struct REGIONRecord));
  memset(x13346, 0, x11866 * sizeof(struct REGIONRecord));
  int x11872 = O_RDONLY;
  int x11873 = open("/mnt/ramdisk/tpch/sf8/region.tbl", x11872);
  /* VAR */ struct stat x11874 = x11567;
  struct stat x11875 = x11874;
  struct stat* x11876 = &x11875;
  int x11877 = stat("/mnt/ramdisk/tpch/sf8/region.tbl", x11876);
  int x11879 = PROT_READ;
  int x11880 = MAP_PRIVATE;
  char* x127 = mmap(NULL, (x11876->st_size), x11879, x11880, x11873, 0);
  /* VAR */ int x128 = 0;
  while(1) {
    
    int x129 = x128;
    /* VAR */ int ite26346 = 0;
    if((x129<(x11866))) {
      char x29103 = *x127;
      ite26346 = (x29103!=('\0'));
    } else {
      
      ite26346 = 0;
    };
    int x25060 = ite26346;
    if (!(x25060)) break; 
    
    /* VAR */ int x11888 = 0;
    int x11889 = x11888;
    int* x11890 = &x11889;
    char* x11891 = strntoi_unchecked(x127, x11890);
    x127 = x11891;
    char* x13369 = (char*)malloc(26 * sizeof(char));
    memset(x13369, 0, 26 * sizeof(char));
    /* VAR */ char* x11894 = x127;
    while(1) {
      
      char x11895 = *x127;
      /* VAR */ int ite26365 = 0;
      if((x11895!=('|'))) {
        char x29121 = *x127;
        ite26365 = (x29121!=('\n'));
      } else {
        
        ite26365 = 0;
      };
      int x25072 = ite26365;
      if (!(x25072)) break; 
      
      x127 += 1;
    };
    char* x11902 = x11894;
    int x11903 = x127 - x11902;
    char* x11904 = x11894;
    char* x11905 = strncpy(x13369, x11904, x11903);
    x127 += 1;
    char* x13387 = (char*)malloc(153 * sizeof(char));
    memset(x13387, 0, 153 * sizeof(char));
    /* VAR */ char* x11913 = x127;
    while(1) {
      
      char x11914 = *x127;
      /* VAR */ int ite26388 = 0;
      if((x11914!=('|'))) {
        char x29143 = *x127;
        ite26388 = (x29143!=('\n'));
      } else {
        
        ite26388 = 0;
      };
      int x25088 = ite26388;
      if (!(x25088)) break; 
      
      x127 += 1;
    };
    char* x11921 = x11913;
    int x11922 = x127 - x11921;
    char* x11923 = x11913;
    char* x11924 = strncpy(x13387, x11923, x11922);
    x127 += 1;
    struct REGIONRecord* x14155 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x14155, 0, 1 * sizeof(struct REGIONRecord));
    x14155->R_REGIONKEY = x11889; x14155->R_NAME = x13369;
    int x151 = x128;
    struct REGIONRecord x13407 = *x14155;
    *(x13346 + x151) = x13407;
    struct REGIONRecord* x13409 = &(x13346[x151]);
    x14155 = x13409;
    int x153 = x128;
    x128 = (x153+(1));
  };
  FILE* x11937 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x11938 = 0;
  int x11939 = x11938;
  int* x11940 = &x11939;
  int x11941 = fscanf(x11937, "%d", x11940);
  pclose(x11937);
  struct SUPPLIERRecord* x13420 = (struct SUPPLIERRecord*)malloc(x11939 * sizeof(struct SUPPLIERRecord));
  memset(x13420, 0, x11939 * sizeof(struct SUPPLIERRecord));
  int x11945 = O_RDONLY;
  int x11946 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x11945);
  /* VAR */ struct stat x11947 = x11567;
  struct stat x11948 = x11947;
  struct stat* x11949 = &x11948;
  int x11950 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x11949);
  int x11952 = PROT_READ;
  int x11953 = MAP_PRIVATE;
  char* x159 = mmap(NULL, (x11949->st_size), x11952, x11953, x11946, 0);
  /* VAR */ int x160 = 0;
  while(1) {
    
    int x161 = x160;
    /* VAR */ int ite26438 = 0;
    if((x161<(x11939))) {
      char x29192 = *x159;
      ite26438 = (x29192!=('\0'));
    } else {
      
      ite26438 = 0;
    };
    int x25131 = ite26438;
    if (!(x25131)) break; 
    
    /* VAR */ int x11961 = 0;
    int x11962 = x11961;
    int* x11963 = &x11962;
    char* x11964 = strntoi_unchecked(x159, x11963);
    x159 = x11964;
    char* x13443 = (char*)malloc(26 * sizeof(char));
    memset(x13443, 0, 26 * sizeof(char));
    /* VAR */ char* x11967 = x159;
    while(1) {
      
      char x11968 = *x159;
      /* VAR */ int ite26457 = 0;
      if((x11968!=('|'))) {
        char x29210 = *x159;
        ite26457 = (x29210!=('\n'));
      } else {
        
        ite26457 = 0;
      };
      int x25143 = ite26457;
      if (!(x25143)) break; 
      
      x159 += 1;
    };
    char* x11975 = x11967;
    int x11976 = x159 - x11975;
    char* x11977 = x11967;
    char* x11978 = strncpy(x13443, x11977, x11976);
    x159 += 1;
    char* x13461 = (char*)malloc(41 * sizeof(char));
    memset(x13461, 0, 41 * sizeof(char));
    /* VAR */ char* x11986 = x159;
    while(1) {
      
      char x11987 = *x159;
      /* VAR */ int ite26480 = 0;
      if((x11987!=('|'))) {
        char x29232 = *x159;
        ite26480 = (x29232!=('\n'));
      } else {
        
        ite26480 = 0;
      };
      int x25159 = ite26480;
      if (!(x25159)) break; 
      
      x159 += 1;
    };
    char* x11994 = x11986;
    int x11995 = x159 - x11994;
    char* x11996 = x11986;
    char* x11997 = strncpy(x13461, x11996, x11995);
    x159 += 1;
    /* VAR */ int x12004 = 0;
    int x12005 = x12004;
    int* x12006 = &x12005;
    char* x12007 = strntoi_unchecked(x159, x12006);
    x159 = x12007;
    char* x13484 = (char*)malloc(16 * sizeof(char));
    memset(x13484, 0, 16 * sizeof(char));
    /* VAR */ char* x12010 = x159;
    while(1) {
      
      char x12011 = *x159;
      /* VAR */ int ite26508 = 0;
      if((x12011!=('|'))) {
        char x29259 = *x159;
        ite26508 = (x29259!=('\n'));
      } else {
        
        ite26508 = 0;
      };
      int x25180 = ite26508;
      if (!(x25180)) break; 
      
      x159 += 1;
    };
    char* x12018 = x12010;
    int x12019 = x159 - x12018;
    char* x12020 = x12010;
    char* x12021 = strncpy(x13484, x12020, x12019);
    x159 += 1;
    /* VAR */ double x12028 = 0.0;
    double x12029 = x12028;
    double* x12030 = &x12029;
    char* x12031 = strntod_unchecked(x159, x12030);
    x159 = x12031;
    char* x13507 = (char*)malloc(102 * sizeof(char));
    memset(x13507, 0, 102 * sizeof(char));
    /* VAR */ char* x12034 = x159;
    while(1) {
      
      char x12035 = *x159;
      /* VAR */ int ite26536 = 0;
      if((x12035!=('|'))) {
        char x29286 = *x159;
        ite26536 = (x29286!=('\n'));
      } else {
        
        ite26536 = 0;
      };
      int x25201 = ite26536;
      if (!(x25201)) break; 
      
      x159 += 1;
    };
    char* x12042 = x12034;
    int x12043 = x159 - x12042;
    char* x12044 = x12034;
    char* x12045 = strncpy(x13507, x12044, x12043);
    x159 += 1;
    struct SUPPLIERRecord* x14277 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x14277, 0, 1 * sizeof(struct SUPPLIERRecord));
    x14277->S_SUPPKEY = x11962; x14277->S_NAME = x13443; x14277->S_ADDRESS = x13461; x14277->S_NATIONKEY = x12005; x14277->S_PHONE = x13484; x14277->S_ACCTBAL = x12029; x14277->S_COMMENT = x13507;
    int x201 = x160;
    struct SUPPLIERRecord x13527 = *x14277;
    *(x13420 + x201) = x13527;
    struct SUPPLIERRecord* x13529 = &(x13420[x201]);
    x14277 = x13529;
    int x203 = x160;
    x160 = (x203+(1));
  };
  int x208 = 0;
  for(; x208 < 1 ; x208 += 1) {
    
    GList*** x29694 = (GList***)malloc(1048576 * sizeof(GList**));
    memset(x29694, 0, 1048576 * sizeof(GList**));
    /* VAR */ int x29695 = 0;
    struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x29696 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(6400000 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x29696, 0, 6400000 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    /* VAR */ int x29697 = 0;
    while(1) {
      
      int x10717 = x29697;
      if (!((x10717<(6400000)))) break; 
      
      int x10719 = x29697;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x14299 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x14299, 0, 1 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
      x14299->R_REGIONKEY = 0; x14299->R_NAME = ""; x14299->P_PARTKEY = 0; x14299->P_MFGR = ""; x14299->P_TYPE = ""; x14299->P_SIZE = 0; x14299->N_NATIONKEY = 0; x14299->N_NAME = ""; x14299->N_REGIONKEY = 0; x14299->S_SUPPKEY = 0; x14299->S_NAME = ""; x14299->S_ADDRESS = ""; x14299->S_NATIONKEY = 0; x14299->S_PHONE = ""; x14299->S_ACCTBAL = 0.0; x14299->S_COMMENT = ""; x14299->PS_PARTKEY = 0; x14299->PS_SUPPKEY = 0; x14299->PS_SUPPLYCOST = 0.0;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x13546 = *x14299;
      *(x29696 + x10719) = x13546;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x13548 = &(x29696[x10719]);
      x14299 = x13548;
      int x10722 = x29697;
      x29697 = (x10722+(1));
    };
    /* VAR */ int x29712 = 0;
    struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x29713 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(48000000 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x29713, 0, 48000000 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
    /* VAR */ int x29714 = 0;
    while(1) {
      
      int x10729 = x29714;
      if (!((x10729<(48000000)))) break; 
      
      int x10731 = x29714;
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x10732 = &(x29696[x10731]);
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x14317 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
      memset(x14317, 0, 1 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
      x14317->wnd = x10732;
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord x13562 = *x14317;
      *(x29713 + x10731) = x13562;
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x13564 = &(x29713[x10731]);
      x14317 = x13564;
      int x10735 = x29714;
      x29714 = (x10735+(1));
    };
    /* VAR */ struct timeval x29730 = x10934;
    struct timeval x29731 = x29730;
    /* VAR */ struct timeval x29732 = x10934;
    struct timeval x29733 = x29732;
    /* VAR */ struct timeval x29734 = x10934;
    struct timeval x29735 = x29734;
    struct timeval* x29736 = &x29733;
    gettimeofday(x29736, NULL);
    /* VAR */ int x29738 = 0;
    int* x29819 = &(x29779);
    GTree* x29820 = g_tree_new(x29819);
    /* VAR */ int x29821 = 0;
    /* VAR */ int x29822 = 0;
    while(1) {
      
      int x29824 = x29738;
      if (!((x29824<(x11719)))) break; 
      
      int x4019 = x29738;
      struct PARTSUPPRecord* x416 = &(x13196[x4019]);
      int x418 = x416->PS_SUPPKEY;
      struct SUPPLIERRecord* x9299 = &(x13420[(x418-(1))]);
      if(((x9299->S_SUPPKEY)==(x418))) {
        int x6380 = x9299->S_SUPPKEY;
        if((x6380==(x418))) {
          int x1749 = x9299->S_NATIONKEY;
          int x1753 = x416->PS_PARTKEY;
          struct NATIONRecord* x9315 = &(x13267[(x1749-(0))]);
          if(((x9315->N_NATIONKEY)==(x1749))) {
            int x6396 = x9315->N_NATIONKEY;
            if((x6396==(x1749))) {
              int x1964 = x9315->N_REGIONKEY;
              struct PARTRecord* x9325 = &(x13039[(x1753-(1))]);
              /* VAR */ int ite27117 = 0;
              if(((x9325->P_SIZE)==(43))) {
                char* x29861 = x9325->P_TYPE;
                int x29862 = strlen(x29861);
                int x29863 = strlen("TIN");
                int x29864 = x29862-(x29863);
                char* x29865 = pointer_add(x29861, x29864);
                int x29866 = strncmp(x29865, "TIN", x29864);
                ite27117 = (x29866==(0));
              } else {
                
                ite27117 = 0;
              };
              int x25752 = ite27117;
              if(x25752) {
                if(((x9325->P_PARTKEY)==(x1753))) {
                  int x6412 = x9325->P_PARTKEY;
                  if((x6412==(x1753))) {
                    struct REGIONRecord* x9342 = &(x13346[(x1964-(0))]);
                    int x21741 = strcmp((x9342->R_NAME), "AFRICA");
                    if((x21741==(0))) {
                      if(((x9342->R_REGIONKEY)==(x1964))) {
                        int x6426 = x9342->R_REGIONKEY;
                        if((x6426==(x1964))) {
                          int x10838 = x29695;
                          struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x10839 = &(x29696[x10838]);
                          x10839->R_REGIONKEY = x6426;
                          x10839->R_NAME = (x9342->R_NAME);
                          x10839->P_PARTKEY = x6412;
                          x10839->P_MFGR = (x9325->P_MFGR);
                          x10839->P_TYPE = (x9325->P_TYPE);
                          x10839->P_SIZE = (x9325->P_SIZE);
                          x10839->N_NATIONKEY = x6396;
                          x10839->N_NAME = (x9315->N_NAME);
                          x10839->N_REGIONKEY = x1964;
                          x10839->S_SUPPKEY = x6380;
                          x10839->S_NAME = (x9299->S_NAME);
                          x10839->S_ADDRESS = (x9299->S_ADDRESS);
                          x10839->S_NATIONKEY = x1749;
                          x10839->S_PHONE = (x9299->S_PHONE);
                          x10839->S_ACCTBAL = (x9299->S_ACCTBAL);
                          x10839->S_COMMENT = (x9299->S_COMMENT);
                          x10839->PS_PARTKEY = x1753;
                          x10839->PS_SUPPKEY = x418;
                          x10839->PS_SUPPLYCOST = (x416->PS_SUPPLYCOST);
                          int x10859 = x29695;
                          x29695 = (x10859+(1));
                          int x7857 = (x10839->P_PARTKEY)%(1048576);
                          GList** x7858 = x29694[x7857];
                          /* VAR */ GList** list7859 = x7858;
                          GList** x7860 = list7859;
                          if((x7860==(NULL))) {
                            GList** x16008 = malloc(8);
                            GList* x16009 = NULL;
                            pointer_assign(x16008, x16009);
                            list7859 = x16008;
                            GList** x7864 = list7859;
                            *(x29694 + x7857) = x7864;
                          };
                          GList** x7867 = list7859;
                          GList* x16015 = *(x7867);
                          GList* x16016 = g_list_prepend(x16015, x10839);
                          pointer_assign(x7867, x16016);
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
      int x4419 = x29738;
      x29738 = (x4419+(1));
    };
    int x23458 = 0;
    for(; x23458 < 1048576 ; x23458 += 1) {
      
      GList** x23459 = x29694[x23458];
      if((x23459!=(NULL))) {
        GList* x16033 = *(x23459);
        /* VAR */ GList* x16034 = x16033;
        GList* x16035 = x16034;
        void* x16036 = g_list_nth_data(x16035, 0);
        /* VAR */ struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x16038 = ((struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x16036});
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x16039 = x16038;
        /* VAR */ double x16041 = (x16039->PS_SUPPLYCOST);
        while(1) {
          
          GList* x16043 = x16034;
          GList* x16044 = NULL;
          if (!((x16043!=(x16044)))) break; 
          
          GList* x16046 = x16034;
          void* x16047 = g_list_nth_data(x16046, 0);
          struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x16048 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*){x16047};
          GList* x16049 = x16034;
          GList* x16050 = g_list_next(x16049);
          x16034 = x16050;
          double x16052 = x16048->PS_SUPPLYCOST;
          double x16053 = x16041;
          int x16054 = x16052<(x16053);
          if(x16054) {
            x16041 = x16052;
            x16038 = x16048;
          };
        };
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x16059 = x16038;
        int x10892 = x29712;
        struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x10893 = &(x29713[x10892]);
        x10893->wnd = x16059;
        int x10895 = x29712;
        x29712 = (x10895+(1));
        g_tree_insert(x29820, x10893, x10893);
      };
    };
    while(1) {
      
      int x4436 = x29821;
      int x816 = !(x4436);
      /* VAR */ int ite27286 = 0;
      if(x816) {
        int x30029 = g_tree_nnodes(x29820);
        ite27286 = (x30029!=(0));
      } else {
        
        ite27286 = 0;
      };
      int x25909 = ite27286;
      if (!(x25909)) break; 
      
      void* x16074 = NULL;
      void** x16082 = &(x16074);
      g_tree_foreach(x29820, x16081, x16082);
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x16084 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*){x16074};
      int x16085 = g_tree_remove(x29820, x16084);
      int x4444 = x29822;
      if((x4444>=(100))) {
        x29821 = 1;
      } else {
        
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x828 = x16084->wnd;
        printf("%.2f|%s|%s|%d|%s|%s|%s|%s\n", (x828->S_ACCTBAL), (x828->S_NAME), (x828->N_NAME), (x828->P_PARTKEY), (x828->P_MFGR), (x828->S_ADDRESS), (x828->S_PHONE), (x828->S_COMMENT));
        int x4464 = x29822;
        x29822 = (x4464+(1));
      };
    };
    int x30064 = x29822;
    printf("(%d rows)\n", x30064);
    struct timeval* x30066 = &x29735;
    gettimeofday(x30066, NULL);
    struct timeval* x30068 = &x29731;
    struct timeval* x30069 = &x29735;
    struct timeval* x30070 = &x29733;
    long x30071 = timeval_subtract(x30068, x30069, x30070);
    printf("Generated code run in %ld milliseconds.\n", x30071);
  };
}
/* ----------- FUNCTIONS ----------- */
int x29779(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x291, struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x292) {
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x293 = x291->wnd;
  double x294 = x293->S_ACCTBAL;
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x295 = x292->wnd;
  double x296 = x295->S_ACCTBAL;
  /* VAR */ int ite25681 = 0;
  if((x294<(x296))) {
    ite25681 = 1;
  } else {
    
    /* VAR */ int ite25685 = 0;
    if((x294>(x296))) {
      ite25685 = -1;
    } else {
      
      int x25689 = strcmp((x293->N_NAME), (x295->N_NAME));
      /* VAR */ int x25690 = x25689;
      int x25691 = x25690;
      if((x25691==(0))) {
        int x21669 = strcmp((x293->S_NAME), (x295->S_NAME));
        x25690 = x21669;
        int x309 = x25690;
        if((x309==(0))) {
          x25690 = ((x293->P_PARTKEY)-((x295->P_PARTKEY)));
        };
      };
      int x25705 = x25690;
      ite25685 = x25705;
    };
    int x25684 = ite25685;
    ite25681 = x25684;
  };
  int x319 = ite25681;
  return x319; 
}

int x16081(void* x16075, void* x16076, void* x16077) {
  pointer_assign(((struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord**){x16077}), ((struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*){x16076}));
  return 1; 
}
