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
  char* R_COMMENT;
  struct REGIONRecord* next;
  };
  
  struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord {
  int key;
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* wnd;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  struct NATIONRecord* next;
  };
  
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord {
  int R_REGIONKEY;
  char* R_NAME;
  char* R_COMMENT;
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  int N_NATIONKEY;
  char* N_NAME;
  int N_REGIONKEY;
  char* N_COMMENT;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* next;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
  struct PARTRecord* next;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  char* S_PHONE;
  double S_ACCTBAL;
  char* S_COMMENT;
  struct SUPPLIERRecord* next;
  };
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  double PS_SUPPLYCOST;
  char* PS_COMMENT;
  };
  
  


int x52465(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x291, struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x292);

int x29069(void* x29063, void* x29064, void* x29065);
/* GLOBAL VARS */

struct timeval x22647;
int main(int argc, char** argv) {
  FILE* x23543 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x23544 = 0;
  int x23545 = x23544;
  int* x23546 = &x23545;
  int x23547 = fscanf(x23543, "%d", x23546);
  pclose(x23543);
  struct PARTRecord* x25277 = (struct PARTRecord*)malloc(x23545 * sizeof(struct PARTRecord));
  memset(x25277, 0, x23545 * sizeof(struct PARTRecord));
  int x23551 = O_RDONLY;
  int x23552 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x23551);
  struct stat x23553 = (struct stat){0};
  /* VAR */ struct stat x23554 = x23553;
  struct stat x23555 = x23554;
  struct stat* x23556 = &x23555;
  int x23557 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x23556);
  size_t x23558 = x23556->st_size;
  int x23559 = PROT_READ;
  int x23560 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x23558, x23559, x23560, x23552, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x23545);
    /* VAR */ int ite42566 = 0;
    if(x6) {
      char x50733 = *x3;
      int x50734 = x50733!=('\0');
      ite42566 = x50734;
    } else {
      
      ite42566 = 0;
    };
    int x40967 = ite42566;
    if (!(x40967)) break; 
    
    /* VAR */ int x23568 = 0;
    int x23569 = x23568;
    int* x23570 = &x23569;
    char* x23571 = strntoi_unchecked(x3, x23570);
    x3 = x23571;
    char* x25301 = (char*)malloc(56 * sizeof(char));
    memset(x25301, 0, 56 * sizeof(char));
    /* VAR */ char* x23574 = x3;
    while(1) {
      
      char x23575 = *x3;
      int x23576 = x23575!=('|');
      /* VAR */ int ite42585 = 0;
      if(x23576) {
        char x50751 = *x3;
        int x50752 = x50751!=('\n');
        ite42585 = x50752;
      } else {
        
        ite42585 = 0;
      };
      int x40979 = ite42585;
      if (!(x40979)) break; 
      
      x3 += 1;
    };
    char* x23582 = x23574;
    int x23583 = x3 - x23582;
    char* x23584 = x23574;
    char* x23585 = strncpy(x25301, x23584, x23583);
    x3 += 1;
    char* x25319 = (char*)malloc(26 * sizeof(char));
    memset(x25319, 0, 26 * sizeof(char));
    /* VAR */ char* x23593 = x3;
    while(1) {
      
      char x23594 = *x3;
      int x23595 = x23594!=('|');
      /* VAR */ int ite42608 = 0;
      if(x23595) {
        char x50773 = *x3;
        int x50774 = x50773!=('\n');
        ite42608 = x50774;
      } else {
        
        ite42608 = 0;
      };
      int x40995 = ite42608;
      if (!(x40995)) break; 
      
      x3 += 1;
    };
    char* x23601 = x23593;
    int x23602 = x3 - x23601;
    char* x23603 = x23593;
    char* x23604 = strncpy(x25319, x23603, x23602);
    x3 += 1;
    char* x25337 = (char*)malloc(11 * sizeof(char));
    memset(x25337, 0, 11 * sizeof(char));
    /* VAR */ char* x23612 = x3;
    while(1) {
      
      char x23613 = *x3;
      int x23614 = x23613!=('|');
      /* VAR */ int ite42631 = 0;
      if(x23614) {
        char x50795 = *x3;
        int x50796 = x50795!=('\n');
        ite42631 = x50796;
      } else {
        
        ite42631 = 0;
      };
      int x41011 = ite42631;
      if (!(x41011)) break; 
      
      x3 += 1;
    };
    char* x23620 = x23612;
    int x23621 = x3 - x23620;
    char* x23622 = x23612;
    char* x23623 = strncpy(x25337, x23622, x23621);
    x3 += 1;
    char* x25355 = (char*)malloc(26 * sizeof(char));
    memset(x25355, 0, 26 * sizeof(char));
    /* VAR */ char* x23631 = x3;
    while(1) {
      
      char x23632 = *x3;
      int x23633 = x23632!=('|');
      /* VAR */ int ite42654 = 0;
      if(x23633) {
        char x50817 = *x3;
        int x50818 = x50817!=('\n');
        ite42654 = x50818;
      } else {
        
        ite42654 = 0;
      };
      int x41027 = ite42654;
      if (!(x41027)) break; 
      
      x3 += 1;
    };
    char* x23639 = x23631;
    int x23640 = x3 - x23639;
    char* x23641 = x23631;
    char* x23642 = strncpy(x25355, x23641, x23640);
    x3 += 1;
    /* VAR */ int x23649 = 0;
    int x23650 = x23649;
    int* x23651 = &x23650;
    char* x23652 = strntoi_unchecked(x3, x23651);
    x3 = x23652;
    char* x25378 = (char*)malloc(11 * sizeof(char));
    memset(x25378, 0, 11 * sizeof(char));
    /* VAR */ char* x23655 = x3;
    while(1) {
      
      char x23656 = *x3;
      int x23657 = x23656!=('|');
      /* VAR */ int ite42682 = 0;
      if(x23657) {
        char x50844 = *x3;
        int x50845 = x50844!=('\n');
        ite42682 = x50845;
      } else {
        
        ite42682 = 0;
      };
      int x41048 = ite42682;
      if (!(x41048)) break; 
      
      x3 += 1;
    };
    char* x23663 = x23655;
    int x23664 = x3 - x23663;
    char* x23665 = x23655;
    char* x23666 = strncpy(x25378, x23665, x23664);
    x3 += 1;
    /* VAR */ double x23673 = 0.0;
    double x23674 = x23673;
    double* x23675 = &x23674;
    char* x23676 = strntod_unchecked(x3, x23675);
    x3 = x23676;
    char* x25401 = (char*)malloc(24 * sizeof(char));
    memset(x25401, 0, 24 * sizeof(char));
    /* VAR */ char* x23679 = x3;
    while(1) {
      
      char x23680 = *x3;
      int x23681 = x23680!=('|');
      /* VAR */ int ite42710 = 0;
      if(x23681) {
        char x50871 = *x3;
        int x50872 = x50871!=('\n');
        ite42710 = x50872;
      } else {
        
        ite42710 = 0;
      };
      int x41069 = ite42710;
      if (!(x41069)) break; 
      
      x3 += 1;
    };
    char* x23687 = x23679;
    int x23688 = x3 - x23687;
    char* x23689 = x23679;
    char* x23690 = strncpy(x25401, x23689, x23688);
    x3 += 1;
    struct PARTRecord* x26358 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x26358, 0, 1 * sizeof(struct PARTRecord));
    x26358->P_PARTKEY = x23569; x26358->P_NAME = x25301; x26358->P_MFGR = x25319; x26358->P_BRAND = x25337; x26358->P_TYPE = x25355; x26358->P_SIZE = x23650; x26358->P_CONTAINER = x25378; x26358->P_RETAILPRICE = x23674; x26358->P_COMMENT = x25401; x26358->next = NULL;
    int x59 = x4;
    int x32238 = x26358==(NULL);
    /* VAR */ int ite42733 = 0;
    if(x32238) {
      ite42733 = 1;
    } else {
      
      char* x50894 = x26358->P_NAME;
      int x50895 = x50894==(NULL);
      /* VAR */ int x50896 = 0;
      if(x50895) {
        x50896 = 1;
      } else {
        
        int x50899 = strcmp(x50894, "");
        int x50900 = !(x50899);
        x50896 = x50900;
      };
      int x50903 = x50896;
      ite42733 = x50903;
    };
    int x41085 = ite42733;
    if(x41085) {
      *(x25277 + x59) = (const struct PARTRecord){0};
    } else {
      
      struct PARTRecord x25423 = *x26358;
      *(x25277 + x59) = x25423;
      struct PARTRecord* x25425 = &(x25277[x59]);
      x26358 = x25425;
    };
    int x61 = x4;
    int x62 = x61+(1);
    x4 = x62;
  };
  FILE* x23703 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x23704 = 0;
  int x23705 = x23704;
  int* x23706 = &x23705;
  int x23707 = fscanf(x23703, "%d", x23706);
  pclose(x23703);
  struct PARTSUPPRecord* x25437 = (struct PARTSUPPRecord*)malloc(x23705 * sizeof(struct PARTSUPPRecord));
  memset(x25437, 0, x23705 * sizeof(struct PARTSUPPRecord));
  int x23711 = O_RDONLY;
  int x23712 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x23711);
  /* VAR */ struct stat x23713 = x23553;
  struct stat x23714 = x23713;
  struct stat* x23715 = &x23714;
  int x23716 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x23715);
  size_t x23717 = x23715->st_size;
  int x23718 = PROT_READ;
  int x23719 = MAP_PRIVATE;
  char* x67 = mmap(NULL, x23717, x23718, x23719, x23712, 0);
  /* VAR */ int x68 = 0;
  while(1) {
    
    int x69 = x68;
    int x70 = x69<(x23705);
    /* VAR */ int ite42774 = 0;
    if(x70) {
      char x50939 = *x67;
      int x50940 = x50939!=('\0');
      ite42774 = x50940;
    } else {
      
      ite42774 = 0;
    };
    int x41117 = ite42774;
    if (!(x41117)) break; 
    
    /* VAR */ int x23727 = 0;
    int x23728 = x23727;
    int* x23729 = &x23728;
    char* x23730 = strntoi_unchecked(x67, x23729);
    x67 = x23730;
    /* VAR */ int x23732 = 0;
    int x23733 = x23732;
    int* x23734 = &x23733;
    char* x23735 = strntoi_unchecked(x67, x23734);
    x67 = x23735;
    /* VAR */ int x23737 = 0;
    int x23738 = x23737;
    int* x23739 = &x23738;
    char* x23740 = strntoi_unchecked(x67, x23739);
    x67 = x23740;
    /* VAR */ double x23742 = 0.0;
    double x23743 = x23742;
    double* x23744 = &x23743;
    char* x23745 = strntod_unchecked(x67, x23744);
    x67 = x23745;
    char* x25475 = (char*)malloc(200 * sizeof(char));
    memset(x25475, 0, 200 * sizeof(char));
    /* VAR */ char* x23748 = x67;
    while(1) {
      
      char x23749 = *x67;
      int x23750 = x23749!=('|');
      /* VAR */ int ite42808 = 0;
      if(x23750) {
        char x50972 = *x67;
        int x50973 = x50972!=('\n');
        ite42808 = x50973;
      } else {
        
        ite42808 = 0;
      };
      int x41144 = ite42808;
      if (!(x41144)) break; 
      
      x67 += 1;
    };
    char* x23756 = x23748;
    int x23757 = x67 - x23756;
    char* x23758 = x23748;
    char* x23759 = strncpy(x25475, x23758, x23757);
    x67 += 1;
    struct PARTSUPPRecord* x26434 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x26434, 0, 1 * sizeof(struct PARTSUPPRecord));
    x26434->PS_PARTKEY = x23728; x26434->PS_SUPPKEY = x23733; x26434->PS_AVAILQTY = x23738; x26434->PS_SUPPLYCOST = x23743; x26434->PS_COMMENT = x25475;
    int x86 = x68;
    int x32317 = x26434==(NULL);
    /* VAR */ int ite42831 = 0;
    if(x32317) {
      ite42831 = 1;
    } else {
      
      char* x50995 = x26434->PS_COMMENT;
      int x50996 = x50995==(NULL);
      /* VAR */ int x50997 = 0;
      if(x50996) {
        x50997 = 1;
      } else {
        
        int x51000 = strcmp(x50995, "");
        int x51001 = !(x51000);
        x50997 = x51001;
      };
      int x51004 = x50997;
      ite42831 = x51004;
    };
    int x41160 = ite42831;
    if(x41160) {
      *(x25437 + x86) = (const struct PARTSUPPRecord){0};
    } else {
      
      struct PARTSUPPRecord x25497 = *x26434;
      *(x25437 + x86) = x25497;
      struct PARTSUPPRecord* x25499 = &(x25437[x86]);
      x26434 = x25499;
    };
    int x88 = x68;
    int x89 = x88+(1);
    x68 = x89;
  };
  FILE* x23772 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x23773 = 0;
  int x23774 = x23773;
  int* x23775 = &x23774;
  int x23776 = fscanf(x23772, "%d", x23775);
  pclose(x23772);
  struct NATIONRecord* x25511 = (struct NATIONRecord*)malloc(x23774 * sizeof(struct NATIONRecord));
  memset(x25511, 0, x23774 * sizeof(struct NATIONRecord));
  int x23780 = O_RDONLY;
  int x23781 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x23780);
  /* VAR */ struct stat x23782 = x23553;
  struct stat x23783 = x23782;
  struct stat* x23784 = &x23783;
  int x23785 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x23784);
  size_t x23786 = x23784->st_size;
  int x23787 = PROT_READ;
  int x23788 = MAP_PRIVATE;
  char* x94 = mmap(NULL, x23786, x23787, x23788, x23781, 0);
  /* VAR */ int x95 = 0;
  while(1) {
    
    int x96 = x95;
    int x97 = x96<(x23774);
    /* VAR */ int ite42872 = 0;
    if(x97) {
      char x51040 = *x94;
      int x51041 = x51040!=('\0');
      ite42872 = x51041;
    } else {
      
      ite42872 = 0;
    };
    int x41192 = ite42872;
    if (!(x41192)) break; 
    
    /* VAR */ int x23796 = 0;
    int x23797 = x23796;
    int* x23798 = &x23797;
    char* x23799 = strntoi_unchecked(x94, x23798);
    x94 = x23799;
    char* x25534 = (char*)malloc(26 * sizeof(char));
    memset(x25534, 0, 26 * sizeof(char));
    /* VAR */ char* x23802 = x94;
    while(1) {
      
      char x23803 = *x94;
      int x23804 = x23803!=('|');
      /* VAR */ int ite42891 = 0;
      if(x23804) {
        char x51058 = *x94;
        int x51059 = x51058!=('\n');
        ite42891 = x51059;
      } else {
        
        ite42891 = 0;
      };
      int x41204 = ite42891;
      if (!(x41204)) break; 
      
      x94 += 1;
    };
    char* x23810 = x23802;
    int x23811 = x94 - x23810;
    char* x23812 = x23802;
    char* x23813 = strncpy(x25534, x23812, x23811);
    x94 += 1;
    /* VAR */ int x23820 = 0;
    int x23821 = x23820;
    int* x23822 = &x23821;
    char* x23823 = strntoi_unchecked(x94, x23822);
    x94 = x23823;
    char* x25557 = (char*)malloc(153 * sizeof(char));
    memset(x25557, 0, 153 * sizeof(char));
    /* VAR */ char* x23826 = x94;
    while(1) {
      
      char x23827 = *x94;
      int x23828 = x23827!=('|');
      /* VAR */ int ite42919 = 0;
      if(x23828) {
        char x51085 = *x94;
        int x51086 = x51085!=('\n');
        ite42919 = x51086;
      } else {
        
        ite42919 = 0;
      };
      int x41225 = ite42919;
      if (!(x41225)) break; 
      
      x94 += 1;
    };
    char* x23834 = x23826;
    int x23835 = x94 - x23834;
    char* x23836 = x23826;
    char* x23837 = strncpy(x25557, x23836, x23835);
    x94 += 1;
    struct NATIONRecord* x26518 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x26518, 0, 1 * sizeof(struct NATIONRecord));
    x26518->N_NATIONKEY = x23797; x26518->N_NAME = x25534; x26518->N_REGIONKEY = x23821; x26518->N_COMMENT = x25557; x26518->next = NULL;
    int x119 = x95;
    int x32404 = x26518==(NULL);
    /* VAR */ int ite42942 = 0;
    if(x32404) {
      ite42942 = 1;
    } else {
      
      char* x51108 = x26518->N_NAME;
      int x51109 = x51108==(NULL);
      /* VAR */ int x51110 = 0;
      if(x51109) {
        x51110 = 1;
      } else {
        
        int x51113 = strcmp(x51108, "");
        int x51114 = !(x51113);
        x51110 = x51114;
      };
      int x51117 = x51110;
      ite42942 = x51117;
    };
    int x41241 = ite42942;
    if(x41241) {
      *(x25511 + x119) = (const struct NATIONRecord){0};
    } else {
      
      struct NATIONRecord x25579 = *x26518;
      *(x25511 + x119) = x25579;
      struct NATIONRecord* x25581 = &(x25511[x119]);
      x26518 = x25581;
    };
    int x121 = x95;
    int x122 = x121+(1);
    x95 = x122;
  };
  FILE* x23850 = popen("wc -l /mnt/ramdisk/tpch/sf8/region.tbl", "r");
  /* VAR */ int x23851 = 0;
  int x23852 = x23851;
  int* x23853 = &x23852;
  int x23854 = fscanf(x23850, "%d", x23853);
  pclose(x23850);
  struct REGIONRecord* x25593 = (struct REGIONRecord*)malloc(x23852 * sizeof(struct REGIONRecord));
  memset(x25593, 0, x23852 * sizeof(struct REGIONRecord));
  int x23858 = O_RDONLY;
  int x23859 = open("/mnt/ramdisk/tpch/sf8/region.tbl", x23858);
  /* VAR */ struct stat x23860 = x23553;
  struct stat x23861 = x23860;
  struct stat* x23862 = &x23861;
  int x23863 = stat("/mnt/ramdisk/tpch/sf8/region.tbl", x23862);
  size_t x23864 = x23862->st_size;
  int x23865 = PROT_READ;
  int x23866 = MAP_PRIVATE;
  char* x127 = mmap(NULL, x23864, x23865, x23866, x23859, 0);
  /* VAR */ int x128 = 0;
  while(1) {
    
    int x129 = x128;
    int x130 = x129<(x23852);
    /* VAR */ int ite42983 = 0;
    if(x130) {
      char x51153 = *x127;
      int x51154 = x51153!=('\0');
      ite42983 = x51154;
    } else {
      
      ite42983 = 0;
    };
    int x41273 = ite42983;
    if (!(x41273)) break; 
    
    /* VAR */ int x23874 = 0;
    int x23875 = x23874;
    int* x23876 = &x23875;
    char* x23877 = strntoi_unchecked(x127, x23876);
    x127 = x23877;
    char* x25616 = (char*)malloc(26 * sizeof(char));
    memset(x25616, 0, 26 * sizeof(char));
    /* VAR */ char* x23880 = x127;
    while(1) {
      
      char x23881 = *x127;
      int x23882 = x23881!=('|');
      /* VAR */ int ite43002 = 0;
      if(x23882) {
        char x51171 = *x127;
        int x51172 = x51171!=('\n');
        ite43002 = x51172;
      } else {
        
        ite43002 = 0;
      };
      int x41285 = ite43002;
      if (!(x41285)) break; 
      
      x127 += 1;
    };
    char* x23888 = x23880;
    int x23889 = x127 - x23888;
    char* x23890 = x23880;
    char* x23891 = strncpy(x25616, x23890, x23889);
    x127 += 1;
    char* x25634 = (char*)malloc(153 * sizeof(char));
    memset(x25634, 0, 153 * sizeof(char));
    /* VAR */ char* x23899 = x127;
    while(1) {
      
      char x23900 = *x127;
      int x23901 = x23900!=('|');
      /* VAR */ int ite43025 = 0;
      if(x23901) {
        char x51193 = *x127;
        int x51194 = x51193!=('\n');
        ite43025 = x51194;
      } else {
        
        ite43025 = 0;
      };
      int x41301 = ite43025;
      if (!(x41301)) break; 
      
      x127 += 1;
    };
    char* x23907 = x23899;
    int x23908 = x127 - x23907;
    char* x23909 = x23899;
    char* x23910 = strncpy(x25634, x23909, x23908);
    x127 += 1;
    struct REGIONRecord* x26597 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x26597, 0, 1 * sizeof(struct REGIONRecord));
    x26597->R_REGIONKEY = x23875; x26597->R_NAME = x25616; x26597->R_COMMENT = x25634; x26597->next = NULL;
    int x151 = x128;
    int x32486 = x26597==(NULL);
    /* VAR */ int ite43048 = 0;
    if(x32486) {
      ite43048 = 1;
    } else {
      
      char* x51216 = x26597->R_NAME;
      int x51217 = x51216==(NULL);
      /* VAR */ int x51218 = 0;
      if(x51217) {
        x51218 = 1;
      } else {
        
        int x51221 = strcmp(x51216, "");
        int x51222 = !(x51221);
        x51218 = x51222;
      };
      int x51225 = x51218;
      ite43048 = x51225;
    };
    int x41317 = ite43048;
    if(x41317) {
      *(x25593 + x151) = (const struct REGIONRecord){0};
    } else {
      
      struct REGIONRecord x25656 = *x26597;
      *(x25593 + x151) = x25656;
      struct REGIONRecord* x25658 = &(x25593[x151]);
      x26597 = x25658;
    };
    int x153 = x128;
    int x154 = x153+(1);
    x128 = x154;
  };
  FILE* x23923 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x23924 = 0;
  int x23925 = x23924;
  int* x23926 = &x23925;
  int x23927 = fscanf(x23923, "%d", x23926);
  pclose(x23923);
  struct SUPPLIERRecord* x25670 = (struct SUPPLIERRecord*)malloc(x23925 * sizeof(struct SUPPLIERRecord));
  memset(x25670, 0, x23925 * sizeof(struct SUPPLIERRecord));
  int x23931 = O_RDONLY;
  int x23932 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x23931);
  /* VAR */ struct stat x23933 = x23553;
  struct stat x23934 = x23933;
  struct stat* x23935 = &x23934;
  int x23936 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x23935);
  size_t x23937 = x23935->st_size;
  int x23938 = PROT_READ;
  int x23939 = MAP_PRIVATE;
  char* x159 = mmap(NULL, x23937, x23938, x23939, x23932, 0);
  /* VAR */ int x160 = 0;
  while(1) {
    
    int x161 = x160;
    int x162 = x161<(x23925);
    /* VAR */ int ite43089 = 0;
    if(x162) {
      char x51261 = *x159;
      int x51262 = x51261!=('\0');
      ite43089 = x51262;
    } else {
      
      ite43089 = 0;
    };
    int x41349 = ite43089;
    if (!(x41349)) break; 
    
    /* VAR */ int x23947 = 0;
    int x23948 = x23947;
    int* x23949 = &x23948;
    char* x23950 = strntoi_unchecked(x159, x23949);
    x159 = x23950;
    char* x25693 = (char*)malloc(26 * sizeof(char));
    memset(x25693, 0, 26 * sizeof(char));
    /* VAR */ char* x23953 = x159;
    while(1) {
      
      char x23954 = *x159;
      int x23955 = x23954!=('|');
      /* VAR */ int ite43108 = 0;
      if(x23955) {
        char x51279 = *x159;
        int x51280 = x51279!=('\n');
        ite43108 = x51280;
      } else {
        
        ite43108 = 0;
      };
      int x41361 = ite43108;
      if (!(x41361)) break; 
      
      x159 += 1;
    };
    char* x23961 = x23953;
    int x23962 = x159 - x23961;
    char* x23963 = x23953;
    char* x23964 = strncpy(x25693, x23963, x23962);
    x159 += 1;
    char* x25711 = (char*)malloc(41 * sizeof(char));
    memset(x25711, 0, 41 * sizeof(char));
    /* VAR */ char* x23972 = x159;
    while(1) {
      
      char x23973 = *x159;
      int x23974 = x23973!=('|');
      /* VAR */ int ite43131 = 0;
      if(x23974) {
        char x51301 = *x159;
        int x51302 = x51301!=('\n');
        ite43131 = x51302;
      } else {
        
        ite43131 = 0;
      };
      int x41377 = ite43131;
      if (!(x41377)) break; 
      
      x159 += 1;
    };
    char* x23980 = x23972;
    int x23981 = x159 - x23980;
    char* x23982 = x23972;
    char* x23983 = strncpy(x25711, x23982, x23981);
    x159 += 1;
    /* VAR */ int x23990 = 0;
    int x23991 = x23990;
    int* x23992 = &x23991;
    char* x23993 = strntoi_unchecked(x159, x23992);
    x159 = x23993;
    char* x25734 = (char*)malloc(16 * sizeof(char));
    memset(x25734, 0, 16 * sizeof(char));
    /* VAR */ char* x23996 = x159;
    while(1) {
      
      char x23997 = *x159;
      int x23998 = x23997!=('|');
      /* VAR */ int ite43159 = 0;
      if(x23998) {
        char x51328 = *x159;
        int x51329 = x51328!=('\n');
        ite43159 = x51329;
      } else {
        
        ite43159 = 0;
      };
      int x41398 = ite43159;
      if (!(x41398)) break; 
      
      x159 += 1;
    };
    char* x24004 = x23996;
    int x24005 = x159 - x24004;
    char* x24006 = x23996;
    char* x24007 = strncpy(x25734, x24006, x24005);
    x159 += 1;
    /* VAR */ double x24014 = 0.0;
    double x24015 = x24014;
    double* x24016 = &x24015;
    char* x24017 = strntod_unchecked(x159, x24016);
    x159 = x24017;
    char* x25757 = (char*)malloc(102 * sizeof(char));
    memset(x25757, 0, 102 * sizeof(char));
    /* VAR */ char* x24020 = x159;
    while(1) {
      
      char x24021 = *x159;
      int x24022 = x24021!=('|');
      /* VAR */ int ite43187 = 0;
      if(x24022) {
        char x51355 = *x159;
        int x51356 = x51355!=('\n');
        ite43187 = x51356;
      } else {
        
        ite43187 = 0;
      };
      int x41419 = ite43187;
      if (!(x41419)) break; 
      
      x159 += 1;
    };
    char* x24028 = x24020;
    int x24029 = x159 - x24028;
    char* x24030 = x24020;
    char* x24031 = strncpy(x25757, x24030, x24029);
    x159 += 1;
    struct SUPPLIERRecord* x26722 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x26722, 0, 1 * sizeof(struct SUPPLIERRecord));
    x26722->S_SUPPKEY = x23948; x26722->S_NAME = x25693; x26722->S_ADDRESS = x25711; x26722->S_NATIONKEY = x23991; x26722->S_PHONE = x25734; x26722->S_ACCTBAL = x24015; x26722->S_COMMENT = x25757; x26722->next = NULL;
    int x201 = x160;
    int x32614 = x26722==(NULL);
    /* VAR */ int ite43210 = 0;
    if(x32614) {
      ite43210 = 1;
    } else {
      
      char* x51378 = x26722->S_NAME;
      int x51379 = x51378==(NULL);
      /* VAR */ int x51380 = 0;
      if(x51379) {
        x51380 = 1;
      } else {
        
        int x51383 = strcmp(x51378, "");
        int x51384 = !(x51383);
        x51380 = x51384;
      };
      int x51387 = x51380;
      ite43210 = x51387;
    };
    int x41435 = ite43210;
    if(x41435) {
      *(x25670 + x201) = (const struct SUPPLIERRecord){0};
    } else {
      
      struct SUPPLIERRecord x25779 = *x26722;
      *(x25670 + x201) = x25779;
      struct SUPPLIERRecord* x25781 = &(x25670[x201]);
      x26722 = x25781;
    };
    int x203 = x160;
    int x204 = x203+(1);
    x160 = x204;
  };
  int x208 = 0;
  for(; x208 < 1 ; x208 += 1) {
    
    struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x52407 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1048576 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    memset(x52407, 0, 1048576 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
    struct REGIONRecord* x52408 = (struct REGIONRecord*)malloc(1048576 * sizeof(struct REGIONRecord));
    memset(x52408, 0, 1048576 * sizeof(struct REGIONRecord));
    struct PARTRecord* x52409 = (struct PARTRecord*)malloc(1048576 * sizeof(struct PARTRecord));
    memset(x52409, 0, 1048576 * sizeof(struct PARTRecord));
    struct NATIONRecord* x52410 = (struct NATIONRecord*)malloc(1048576 * sizeof(struct NATIONRecord));
    memset(x52410, 0, 1048576 * sizeof(struct NATIONRecord));
    struct SUPPLIERRecord* x52411 = (struct SUPPLIERRecord*)malloc(1048576 * sizeof(struct SUPPLIERRecord));
    memset(x52411, 0, 1048576 * sizeof(struct SUPPLIERRecord));
    /* VAR */ struct timeval x52412 = x22647;
    struct timeval x52413 = x52412;
    /* VAR */ struct timeval x52414 = x22647;
    struct timeval x52415 = x52414;
    /* VAR */ struct timeval x52416 = x22647;
    struct timeval x52417 = x52416;
    struct timeval* x52418 = &x52415;
    gettimeofday(x52418, NULL);
    /* VAR */ int x52420 = 0;
    /* VAR */ int x52421 = 0;
    /* VAR */ int x52422 = 0;
    /* VAR */ int x52423 = 0;
    /* VAR */ int x52424 = 0;
    int* x52505 = &(x52465);
    GTree* x52506 = g_tree_new(x52505);
    /* VAR */ int x52507 = 0;
    /* VAR */ int x52508 = 0;
    while(1) {
      
      int x52510 = x52424;
      int x52511 = x52510<(x23852);
      if (!(x52511)) break; 
      
      int x4402 = x52424;
      struct REGIONRecord* x347 = &(x25593[x4402]);
      char* x349 = x347->R_NAME;
      int x36173 = strcmp(x349, "AFRICA");
      int x36174 = x36173==(0);
      if(x36174) {
        int x351 = x347->R_REGIONKEY;
        int x6939 = x351%(1048576);
        struct REGIONRecord* x8957 = &(x52408[x6939]);
        /* VAR */ struct REGIONRecord* list8958 = x8957;
        struct REGIONRecord* x8959 = list8958;
        int x32726 = x8959==(NULL);
        /* VAR */ int ite44215 = 0;
        if(x32726) {
          ite44215 = 1;
        } else {
          
          char* x52527 = x8959->R_NAME;
          int x52528 = x52527==(NULL);
          /* VAR */ int x52529 = 0;
          if(x52528) {
            x52529 = 1;
          } else {
            
            int x52532 = strcmp(x52527, "");
            int x52533 = !(x52532);
            x52529 = x52533;
          };
          int x52536 = x52529;
          ite44215 = x52536;
        };
        int x42113 = ite44215;
        if(x42113) {
          list8958 = NULL;
          struct REGIONRecord* x8966 = list8958;
          int x32733 = x8966==(NULL);
          /* VAR */ int ite44230 = 0;
          if(x32733) {
            ite44230 = 1;
          } else {
            
            char* x52547 = x8966->R_NAME;
            int x52548 = x52547==(NULL);
            /* VAR */ int x52549 = 0;
            if(x52548) {
              x52549 = 1;
            } else {
              
              int x52552 = strcmp(x52547, "");
              int x52553 = !(x52552);
              x52549 = x52553;
            };
            int x52556 = x52549;
            ite44230 = x52556;
          };
          int x42119 = ite44230;
          if(x42119) {
            *(x52408 + x6939) = (const struct REGIONRecord){0};
          } else {
            
            struct REGIONRecord x25863 = *x8966;
            *(x52408 + x6939) = x25863;
            struct REGIONRecord* x25865 = &(x52408[x6939]);
            list8958 = x25865;
          };
        };
        int x32743 = x8957==(NULL);
        /* VAR */ int ite44248 = 0;
        if(x32743) {
          ite44248 = 1;
        } else {
          
          char* x52570 = x8957->R_NAME;
          int x52571 = x52570==(NULL);
          /* VAR */ int x52572 = 0;
          if(x52571) {
            x52572 = 1;
          } else {
            
            int x52575 = strcmp(x52570, "");
            int x52576 = !(x52575);
            x52572 = x52576;
          };
          int x52579 = x52572;
          ite44248 = x52579;
        };
        int x42128 = ite44248;
        if(x42128) {
          x347->next = NULL;
          int x32749 = x347==(NULL);
          /* VAR */ int ite44262 = 0;
          if(x32749) {
            ite44262 = 1;
          } else {
            
            int x52589 = x349==(NULL);
            /* VAR */ int x52590 = 0;
            if(x52589) {
              x52590 = 1;
            } else {
              
              int x52593 = strcmp(x349, "");
              int x52594 = !(x52593);
              x52590 = x52594;
            };
            int x52597 = x52590;
            ite44262 = x52597;
          };
          int x42133 = ite44262;
          if(x42133) {
            *(x52408 + x6939) = (const struct REGIONRecord){0};
          } else {
            
            struct REGIONRecord x25873 = *x347;
            *(x52408 + x6939) = x25873;
            struct REGIONRecord* x25875 = &(x52408[x6939]);
            x347 = x25875;
          };
          list8958 = x347;
        } else {
          
          struct REGIONRecord* x14331 = x8957->next;
          x347->next = x14331;
          x8957->next = x347;
        };
      };
      int x4410 = x52424;
      int x356 = x4410+(1);
      x52424 = x356;
    };
    while(1) {
      
      int x52615 = x52423;
      int x52616 = x52615<(x23545);
      if (!(x52616)) break; 
      
      int x4419 = x52423;
      struct PARTRecord* x365 = &(x25277[x4419]);
      int x367 = x365->P_SIZE;
      int x368 = x367==(43);
      /* VAR */ int ite44293 = 0;
      if(x368) {
        char* x52623 = x365->P_TYPE;
        int x52624 = strlen(x52623);
        int x52625 = strlen("TIN");
        int x52626 = x52624-(x52625);
        char* x52627 = pointer_add(x52623, x52626);
        int x52628 = strncmp(x52627, "TIN", x52626);
        int x52629 = x52628==(0);
        ite44293 = x52629;
      } else {
        
        ite44293 = 0;
      };
      int x42154 = ite44293;
      if(x42154) {
        int x372 = x365->P_PARTKEY;
        int x6968 = x372%(1048576);
        struct PARTRecord* x8995 = &(x52409[x6968]);
        /* VAR */ struct PARTRecord* list8996 = x8995;
        struct PARTRecord* x8997 = list8996;
        int x32782 = x8997==(NULL);
        /* VAR */ int ite44314 = 0;
        if(x32782) {
          ite44314 = 1;
        } else {
          
          char* x52644 = x8997->P_NAME;
          int x52645 = x52644==(NULL);
          /* VAR */ int x52646 = 0;
          if(x52645) {
            x52646 = 1;
          } else {
            
            int x52649 = strcmp(x52644, "");
            int x52650 = !(x52649);
            x52646 = x52650;
          };
          int x52653 = x52646;
          ite44314 = x52653;
        };
        int x42163 = ite44314;
        if(x42163) {
          list8996 = NULL;
          struct PARTRecord* x9004 = list8996;
          int x32789 = x9004==(NULL);
          /* VAR */ int ite44329 = 0;
          if(x32789) {
            ite44329 = 1;
          } else {
            
            char* x52664 = x9004->P_NAME;
            int x52665 = x52664==(NULL);
            /* VAR */ int x52666 = 0;
            if(x52665) {
              x52666 = 1;
            } else {
              
              int x52669 = strcmp(x52664, "");
              int x52670 = !(x52669);
              x52666 = x52670;
            };
            int x52673 = x52666;
            ite44329 = x52673;
          };
          int x42169 = ite44329;
          if(x42169) {
            *(x52409 + x6968) = (const struct PARTRecord){0};
          } else {
            
            struct PARTRecord x25909 = *x9004;
            *(x52409 + x6968) = x25909;
            struct PARTRecord* x25911 = &(x52409[x6968]);
            list8996 = x25911;
          };
        };
        int x32799 = x8995==(NULL);
        /* VAR */ int ite44347 = 0;
        if(x32799) {
          ite44347 = 1;
        } else {
          
          char* x52687 = x8995->P_NAME;
          int x52688 = x52687==(NULL);
          /* VAR */ int x52689 = 0;
          if(x52688) {
            x52689 = 1;
          } else {
            
            int x52692 = strcmp(x52687, "");
            int x52693 = !(x52692);
            x52689 = x52693;
          };
          int x52696 = x52689;
          ite44347 = x52696;
        };
        int x42178 = ite44347;
        if(x42178) {
          x365->next = NULL;
          int x32805 = x365==(NULL);
          /* VAR */ int ite44361 = 0;
          if(x32805) {
            ite44361 = 1;
          } else {
            
            char* x52706 = x365->P_NAME;
            int x52707 = x52706==(NULL);
            /* VAR */ int x52708 = 0;
            if(x52707) {
              x52708 = 1;
            } else {
              
              int x52711 = strcmp(x52706, "");
              int x52712 = !(x52711);
              x52708 = x52712;
            };
            int x52715 = x52708;
            ite44361 = x52715;
          };
          int x42183 = ite44361;
          if(x42183) {
            *(x52409 + x6968) = (const struct PARTRecord){0};
          } else {
            
            struct PARTRecord x25919 = *x365;
            *(x52409 + x6968) = x25919;
            struct PARTRecord* x25921 = &(x52409[x6968]);
            x365 = x25921;
          };
          list8996 = x365;
        } else {
          
          struct PARTRecord* x14368 = x8995->next;
          x365->next = x14368;
          x8995->next = x365;
        };
      };
      int x4430 = x52423;
      int x377 = x4430+(1);
      x52423 = x377;
    };
    while(1) {
      
      int x52733 = x52422;
      int x52734 = x52733<(x23774);
      if (!(x52734)) break; 
      
      int x4439 = x52422;
      struct NATIONRecord* x386 = &(x25511[x4439]);
      int x388 = x386->N_NATIONKEY;
      int x6991 = x388%(1048576);
      struct NATIONRecord* x9027 = &(x52410[x6991]);
      /* VAR */ struct NATIONRecord* list9028 = x9027;
      struct NATIONRecord* x9029 = list9028;
      int x32833 = x9029==(NULL);
      /* VAR */ int ite44397 = 0;
      if(x32833) {
        ite44397 = 1;
      } else {
        
        char* x52746 = x9029->N_NAME;
        int x52747 = x52746==(NULL);
        /* VAR */ int x52748 = 0;
        if(x52747) {
          x52748 = 1;
        } else {
          
          int x52751 = strcmp(x52746, "");
          int x52752 = !(x52751);
          x52748 = x52752;
        };
        int x52755 = x52748;
        ite44397 = x52755;
      };
      int x42208 = ite44397;
      if(x42208) {
        list9028 = NULL;
        struct NATIONRecord* x9036 = list9028;
        int x32840 = x9036==(NULL);
        /* VAR */ int ite44412 = 0;
        if(x32840) {
          ite44412 = 1;
        } else {
          
          char* x52766 = x9036->N_NAME;
          int x52767 = x52766==(NULL);
          /* VAR */ int x52768 = 0;
          if(x52767) {
            x52768 = 1;
          } else {
            
            int x52771 = strcmp(x52766, "");
            int x52772 = !(x52771);
            x52768 = x52772;
          };
          int x52775 = x52768;
          ite44412 = x52775;
        };
        int x42214 = ite44412;
        if(x42214) {
          *(x52410 + x6991) = (const struct NATIONRecord){0};
        } else {
          
          struct NATIONRecord x25949 = *x9036;
          *(x52410 + x6991) = x25949;
          struct NATIONRecord* x25951 = &(x52410[x6991]);
          list9028 = x25951;
        };
      };
      int x32850 = x9027==(NULL);
      /* VAR */ int ite44430 = 0;
      if(x32850) {
        ite44430 = 1;
      } else {
        
        char* x52789 = x9027->N_NAME;
        int x52790 = x52789==(NULL);
        /* VAR */ int x52791 = 0;
        if(x52790) {
          x52791 = 1;
        } else {
          
          int x52794 = strcmp(x52789, "");
          int x52795 = !(x52794);
          x52791 = x52795;
        };
        int x52798 = x52791;
        ite44430 = x52798;
      };
      int x42223 = ite44430;
      if(x42223) {
        x386->next = NULL;
        int x32856 = x386==(NULL);
        /* VAR */ int ite44444 = 0;
        if(x32856) {
          ite44444 = 1;
        } else {
          
          char* x52808 = x386->N_NAME;
          int x52809 = x52808==(NULL);
          /* VAR */ int x52810 = 0;
          if(x52809) {
            x52810 = 1;
          } else {
            
            int x52813 = strcmp(x52808, "");
            int x52814 = !(x52813);
            x52810 = x52814;
          };
          int x52817 = x52810;
          ite44444 = x52817;
        };
        int x42228 = ite44444;
        if(x42228) {
          *(x52410 + x6991) = (const struct NATIONRecord){0};
        } else {
          
          struct NATIONRecord x25959 = *x386;
          *(x52410 + x6991) = x25959;
          struct NATIONRecord* x25961 = &(x52410[x6991]);
          x386 = x25961;
        };
        list9028 = x386;
      } else {
        
        struct NATIONRecord* x14399 = x9027->next;
        x386->next = x14399;
        x9027->next = x386;
      };
      int x4444 = x52422;
      int x392 = x4444+(1);
      x52422 = x392;
    };
    while(1) {
      
      int x52835 = x52421;
      int x52836 = x52835<(x23925);
      if (!(x52836)) break; 
      
      int x4453 = x52421;
      struct SUPPLIERRecord* x401 = &(x25670[x4453]);
      int x403 = x401->S_SUPPKEY;
      int x7014 = x403%(1048576);
      struct SUPPLIERRecord* x9059 = &(x52411[x7014]);
      /* VAR */ struct SUPPLIERRecord* list9060 = x9059;
      struct SUPPLIERRecord* x9061 = list9060;
      int x32884 = x9061==(NULL);
      /* VAR */ int ite44480 = 0;
      if(x32884) {
        ite44480 = 1;
      } else {
        
        char* x52848 = x9061->S_NAME;
        int x52849 = x52848==(NULL);
        /* VAR */ int x52850 = 0;
        if(x52849) {
          x52850 = 1;
        } else {
          
          int x52853 = strcmp(x52848, "");
          int x52854 = !(x52853);
          x52850 = x52854;
        };
        int x52857 = x52850;
        ite44480 = x52857;
      };
      int x42253 = ite44480;
      if(x42253) {
        list9060 = NULL;
        struct SUPPLIERRecord* x9068 = list9060;
        int x32891 = x9068==(NULL);
        /* VAR */ int ite44495 = 0;
        if(x32891) {
          ite44495 = 1;
        } else {
          
          char* x52868 = x9068->S_NAME;
          int x52869 = x52868==(NULL);
          /* VAR */ int x52870 = 0;
          if(x52869) {
            x52870 = 1;
          } else {
            
            int x52873 = strcmp(x52868, "");
            int x52874 = !(x52873);
            x52870 = x52874;
          };
          int x52877 = x52870;
          ite44495 = x52877;
        };
        int x42259 = ite44495;
        if(x42259) {
          *(x52411 + x7014) = (const struct SUPPLIERRecord){0};
        } else {
          
          struct SUPPLIERRecord x25989 = *x9068;
          *(x52411 + x7014) = x25989;
          struct SUPPLIERRecord* x25991 = &(x52411[x7014]);
          list9060 = x25991;
        };
      };
      int x32901 = x9059==(NULL);
      /* VAR */ int ite44513 = 0;
      if(x32901) {
        ite44513 = 1;
      } else {
        
        char* x52891 = x9059->S_NAME;
        int x52892 = x52891==(NULL);
        /* VAR */ int x52893 = 0;
        if(x52892) {
          x52893 = 1;
        } else {
          
          int x52896 = strcmp(x52891, "");
          int x52897 = !(x52896);
          x52893 = x52897;
        };
        int x52900 = x52893;
        ite44513 = x52900;
      };
      int x42268 = ite44513;
      if(x42268) {
        x401->next = NULL;
        int x32907 = x401==(NULL);
        /* VAR */ int ite44527 = 0;
        if(x32907) {
          ite44527 = 1;
        } else {
          
          char* x52910 = x401->S_NAME;
          int x52911 = x52910==(NULL);
          /* VAR */ int x52912 = 0;
          if(x52911) {
            x52912 = 1;
          } else {
            
            int x52915 = strcmp(x52910, "");
            int x52916 = !(x52915);
            x52912 = x52916;
          };
          int x52919 = x52912;
          ite44527 = x52919;
        };
        int x42273 = ite44527;
        if(x42273) {
          *(x52411 + x7014) = (const struct SUPPLIERRecord){0};
        } else {
          
          struct SUPPLIERRecord x25999 = *x401;
          *(x52411 + x7014) = x25999;
          struct SUPPLIERRecord* x26001 = &(x52411[x7014]);
          x401 = x26001;
        };
        list9060 = x401;
      } else {
        
        struct SUPPLIERRecord* x14430 = x9059->next;
        x401->next = x14430;
        x9059->next = x401;
      };
      int x4458 = x52421;
      int x407 = x4458+(1);
      x52421 = x407;
    };
    while(1) {
      
      int x52937 = x52420;
      int x52938 = x52937<(x23705);
      if (!(x52938)) break; 
      
      int x4467 = x52420;
      struct PARTSUPPRecord* x416 = &(x25437[x4467]);
      int x418 = x416->PS_SUPPKEY;
      int x7037 = x418%(1048576);
      struct SUPPLIERRecord* x9091 = &(x52411[x7037]);
      int x32933 = x9091!=(NULL);
      /* VAR */ int ite44561 = 0;
      if(x32933) {
        char* x52947 = x9091->S_NAME;
        int x52948 = x52947!=(NULL);
        /* VAR */ int x52949 = 0;
        if(x52948) {
          int x52951 = strcmp(x52947, "");
          x52949 = x52951;
        } else {
          
          x52949 = 0;
        };
        int x52955 = x52949;
        ite44561 = x52955;
      } else {
        
        ite44561 = 0;
      };
      int x42296 = ite44561;
      if(x42296) {
        /* VAR */ struct SUPPLIERRecord* current10853 = x9091;
        while(1) {
          
          struct SUPPLIERRecord* x10855 = current10853;
          int x32941 = x10855!=(NULL);
          /* VAR */ int ite44577 = 0;
          if(x32941) {
            char* x52967 = x10855->S_NAME;
            int x52968 = x52967!=(NULL);
            /* VAR */ int x52969 = 0;
            if(x52968) {
              int x52971 = strcmp(x52967, "");
              x52969 = x52971;
            } else {
              
              x52969 = 0;
            };
            int x52975 = x52969;
            ite44577 = x52975;
          } else {
            
            ite44577 = 0;
          };
          int x42303 = ite44577;
          if (!(x42303)) break; 
          
          struct SUPPLIERRecord* x10857 = current10853;
          struct SUPPLIERRecord* x14877 = x10857->next;
          struct SUPPLIERRecord* x10859 = current10853;
          int x9532 = x10859->S_SUPPKEY;
          int x9533 = x9532==(x418);
          if(x9533) {
            char* x1859 = x10859->S_NAME;
            char* x1860 = x10859->S_ADDRESS;
            int x1861 = x10859->S_NATIONKEY;
            char* x1862 = x10859->S_PHONE;
            double x1863 = x10859->S_ACCTBAL;
            char* x1864 = x10859->S_COMMENT;
            int x1865 = x416->PS_PARTKEY;
            int x1866 = x416->PS_AVAILQTY;
            double x1867 = x416->PS_SUPPLYCOST;
            char* x1868 = x416->PS_COMMENT;
            int x7059 = x1861%(1048576);
            struct NATIONRecord* x9113 = &(x52410[x7059]);
            int x32963 = x9113!=(NULL);
            /* VAR */ int ite44607 = 0;
            if(x32963) {
              char* x53001 = x9113->N_NAME;
              int x53002 = x53001!=(NULL);
              /* VAR */ int x53003 = 0;
              if(x53002) {
                int x53005 = strcmp(x53001, "");
                x53003 = x53005;
              } else {
                
                x53003 = 0;
              };
              int x53009 = x53003;
              ite44607 = x53009;
            } else {
              
              ite44607 = 0;
            };
            int x42324 = ite44607;
            if(x42324) {
              /* VAR */ struct NATIONRecord* current11081 = x9113;
              while(1) {
                
                struct NATIONRecord* x11083 = current11081;
                int x32971 = x11083!=(NULL);
                /* VAR */ int ite44623 = 0;
                if(x32971) {
                  char* x53021 = x11083->N_NAME;
                  int x53022 = x53021!=(NULL);
                  /* VAR */ int x53023 = 0;
                  if(x53022) {
                    int x53025 = strcmp(x53021, "");
                    x53023 = x53025;
                  } else {
                    
                    x53023 = 0;
                  };
                  int x53029 = x53023;
                  ite44623 = x53029;
                } else {
                  
                  ite44623 = 0;
                };
                int x42331 = ite44623;
                if (!(x42331)) break; 
                
                struct NATIONRecord* x11085 = current11081;
                struct NATIONRecord* x15101 = x11085->next;
                struct NATIONRecord* x11087 = current11081;
                int x9325 = x11087->N_NATIONKEY;
                int x9326 = x9325==(x1861);
                if(x9326) {
                  char* x2132 = x11087->N_NAME;
                  int x2133 = x11087->N_REGIONKEY;
                  char* x2134 = x11087->N_COMMENT;
                  int x7074 = x1865%(1048576);
                  struct PARTRecord* x9128 = &(x52409[x7074]);
                  int x32986 = x9128!=(NULL);
                  /* VAR */ int ite44646 = 0;
                  if(x32986) {
                    char* x53048 = x9128->P_NAME;
                    int x53049 = x53048!=(NULL);
                    /* VAR */ int x53050 = 0;
                    if(x53049) {
                      int x53052 = strcmp(x53048, "");
                      x53050 = x53052;
                    } else {
                      
                      x53050 = 0;
                    };
                    int x53056 = x53050;
                    ite44646 = x53056;
                  } else {
                    
                    ite44646 = 0;
                  };
                  int x42345 = ite44646;
                  if(x42345) {
                    /* VAR */ struct PARTRecord* current11191 = x9128;
                    while(1) {
                      
                      struct PARTRecord* x11193 = current11191;
                      int x32994 = x11193!=(NULL);
                      /* VAR */ int ite44662 = 0;
                      if(x32994) {
                        char* x53068 = x11193->P_NAME;
                        int x53069 = x53068!=(NULL);
                        /* VAR */ int x53070 = 0;
                        if(x53069) {
                          int x53072 = strcmp(x53068, "");
                          x53070 = x53072;
                        } else {
                          
                          x53070 = 0;
                        };
                        int x53076 = x53070;
                        ite44662 = x53076;
                      } else {
                        
                        ite44662 = 0;
                      };
                      int x42352 = ite44662;
                      if (!(x42352)) break; 
                      
                      struct PARTRecord* x11195 = current11191;
                      struct PARTRecord* x15209 = x11195->next;
                      struct PARTRecord* x11197 = current11191;
                      int x9229 = x11197->P_PARTKEY;
                      int x9230 = x9229==(x1865);
                      if(x9230) {
                        char* x2270 = x11197->P_NAME;
                        char* x2271 = x11197->P_MFGR;
                        char* x2272 = x11197->P_BRAND;
                        char* x2273 = x11197->P_TYPE;
                        int x2274 = x11197->P_SIZE;
                        char* x2275 = x11197->P_CONTAINER;
                        double x2276 = x11197->P_RETAILPRICE;
                        char* x2277 = x11197->P_COMMENT;
                        int x7094 = x2133%(1048576);
                        struct REGIONRecord* x9148 = &(x52408[x7094]);
                        int x33014 = x9148!=(NULL);
                        /* VAR */ int ite44690 = 0;
                        if(x33014) {
                          char* x53100 = x9148->R_NAME;
                          int x53101 = x53100!=(NULL);
                          /* VAR */ int x53102 = 0;
                          if(x53101) {
                            int x53104 = strcmp(x53100, "");
                            x53102 = x53104;
                          } else {
                            
                            x53102 = 0;
                          };
                          int x53108 = x53102;
                          ite44690 = x53108;
                        } else {
                          
                          ite44690 = 0;
                        };
                        int x42371 = ite44690;
                        if(x42371) {
                          /* VAR */ struct REGIONRecord* current11248 = x9148;
                          while(1) {
                            
                            struct REGIONRecord* x11250 = current11248;
                            int x33022 = x11250!=(NULL);
                            /* VAR */ int ite44706 = 0;
                            if(x33022) {
                              char* x53120 = x11250->R_NAME;
                              int x53121 = x53120!=(NULL);
                              /* VAR */ int x53122 = 0;
                              if(x53121) {
                                int x53124 = strcmp(x53120, "");
                                x53122 = x53124;
                              } else {
                                
                                x53122 = 0;
                              };
                              int x53128 = x53122;
                              ite44706 = x53128;
                            } else {
                              
                              ite44706 = 0;
                            };
                            int x42378 = ite44706;
                            if (!(x42378)) break; 
                            
                            struct REGIONRecord* x11252 = current11248;
                            struct REGIONRecord* x15265 = x11252->next;
                            struct REGIONRecord* x11254 = current11248;
                            int x9191 = x11254->R_REGIONKEY;
                            int x9192 = x9191==(x2133);
                            if(x9192) {
                              char* x2343 = x11254->R_NAME;
                              char* x2344 = x11254->R_COMMENT;
                              struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x27050 = (struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
                              memset(x27050, 0, 1 * sizeof(struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord));
                              x27050->R_REGIONKEY = x9191; x27050->R_NAME = x2343; x27050->R_COMMENT = x2344; x27050->P_PARTKEY = x9229; x27050->P_NAME = x2270; x27050->P_MFGR = x2271; x27050->P_BRAND = x2272; x27050->P_TYPE = x2273; x27050->P_SIZE = x2274; x27050->P_CONTAINER = x2275; x27050->P_RETAILPRICE = x2276; x27050->P_COMMENT = x2277; x27050->N_NATIONKEY = x9325; x27050->N_NAME = x2132; x27050->N_REGIONKEY = x2133; x27050->N_COMMENT = x2134; x27050->S_SUPPKEY = x9532; x27050->S_NAME = x1859; x27050->S_ADDRESS = x1860; x27050->S_NATIONKEY = x1861; x27050->S_PHONE = x1862; x27050->S_ACCTBAL = x1863; x27050->S_COMMENT = x1864; x27050->PS_PARTKEY = x1865; x27050->PS_SUPPKEY = x418; x27050->PS_AVAILQTY = x1866; x27050->PS_SUPPLYCOST = x1867; x27050->PS_COMMENT = x1868; x27050->next = NULL;
                              int x777 = x27050->P_PARTKEY;
                              int x7110 = x777%(1048576);
                              struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9164 = &(x52407[x7110]);
                              /* VAR */ struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* list9165 = x9164;
                              struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9166 = list9165;
                              int x33042 = x9166==(NULL);
                              /* VAR */ int ite44734 = 0;
                              if(x33042) {
                                ite44734 = 1;
                              } else {
                                
                                char* x53153 = x9166->R_NAME;
                                int x53154 = x53153==(NULL);
                                /* VAR */ int x53155 = 0;
                                if(x53154) {
                                  x53155 = 1;
                                } else {
                                  
                                  int x53158 = strcmp(x53153, "");
                                  int x53159 = !(x53158);
                                  x53155 = x53159;
                                };
                                int x53162 = x53155;
                                ite44734 = x53162;
                              };
                              int x42397 = ite44734;
                              if(x42397) {
                                list9165 = NULL;
                                struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9173 = list9165;
                                int x33049 = x9173==(NULL);
                                /* VAR */ int ite44749 = 0;
                                if(x33049) {
                                  ite44749 = 1;
                                } else {
                                  
                                  char* x53173 = x9173->R_NAME;
                                  int x53174 = x53173==(NULL);
                                  /* VAR */ int x53175 = 0;
                                  if(x53174) {
                                    x53175 = 1;
                                  } else {
                                    
                                    int x53178 = strcmp(x53173, "");
                                    int x53179 = !(x53178);
                                    x53175 = x53179;
                                  };
                                  int x53182 = x53175;
                                  ite44749 = x53182;
                                };
                                int x42403 = ite44749;
                                if(x42403) {
                                  *(x52407 + x7110) = (const struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord){0};
                                } else {
                                  
                                  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x26114 = *x9173;
                                  *(x52407 + x7110) = x26114;
                                  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x26116 = &(x52407[x7110]);
                                  list9165 = x26116;
                                };
                              };
                              int x33059 = x9164==(NULL);
                              /* VAR */ int ite44767 = 0;
                              if(x33059) {
                                ite44767 = 1;
                              } else {
                                
                                char* x53196 = x9164->R_NAME;
                                int x53197 = x53196==(NULL);
                                /* VAR */ int x53198 = 0;
                                if(x53197) {
                                  x53198 = 1;
                                } else {
                                  
                                  int x53201 = strcmp(x53196, "");
                                  int x53202 = !(x53201);
                                  x53198 = x53202;
                                };
                                int x53205 = x53198;
                                ite44767 = x53205;
                              };
                              int x42412 = ite44767;
                              if(x42412) {
                                x27050->next = NULL;
                                int x33065 = x27050==(NULL);
                                /* VAR */ int ite44781 = 0;
                                if(x33065) {
                                  ite44781 = 1;
                                } else {
                                  
                                  char* x53215 = x27050->R_NAME;
                                  int x53216 = x53215==(NULL);
                                  /* VAR */ int x53217 = 0;
                                  if(x53216) {
                                    x53217 = 1;
                                  } else {
                                    
                                    int x53220 = strcmp(x53215, "");
                                    int x53221 = !(x53220);
                                    x53217 = x53221;
                                  };
                                  int x53224 = x53217;
                                  ite44781 = x53224;
                                };
                                int x42417 = ite44781;
                                if(x42417) {
                                  *(x52407 + x7110) = (const struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord){0};
                                } else {
                                  
                                  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord x26124 = *x27050;
                                  *(x52407 + x7110) = x26124;
                                  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x26126 = &(x52407[x7110]);
                                  x27050 = x26126;
                                };
                                list9165 = x27050;
                              } else {
                                
                                struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x15293 = x9164->next;
                                x27050->next = x15293;
                                x9164->next = x27050;
                              };
                            };
                            current11248 = x15265;
                          };
                        };
                      };
                      current11191 = x15209;
                    };
                  };
                };
                current11081 = x15101;
              };
            };
          };
          current10853 = x14877;
        };
      };
      int x4931 = x52420;
      int x797 = x4931+(1);
      x52420 = x797;
    };
    int x38997 = 0;
    for(; x38997 < 1048576 ; x38997 += 1) {
      
      struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x38998 = &(x52407[x38997]);
      int x38999 = x38998!=(NULL);
      /* VAR */ int ite44863 = 0;
      if(x38999) {
        char* x53309 = x38998->R_NAME;
        int x53310 = x53309!=(NULL);
        /* VAR */ int x53311 = 0;
        if(x53310) {
          int x53313 = strcmp(x53309, "");
          x53311 = x53313;
        } else {
          
          x53311 = 0;
        };
        int x53317 = x53311;
        ite44863 = x53317;
      } else {
        
        ite44863 = 0;
      };
      int x42472 = ite44863;
      if(x42472) {
        /* VAR */ struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* min9977 = x38998;
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9978 = min9977;
        double x9979 = x9978->PS_SUPPLYCOST;
        /* VAR */ double minValue9980 = x9979;
        /* VAR */ struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* current12659 = x38998;
        while(1) {
          
          struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x12661 = current12659;
          int x33102 = x12661!=(NULL);
          /* VAR */ int ite44883 = 0;
          if(x33102) {
            char* x53333 = x12661->R_NAME;
            int x53334 = x53333!=(NULL);
            /* VAR */ int x53335 = 0;
            if(x53334) {
              int x53337 = strcmp(x53333, "");
              x53335 = x53337;
            } else {
              
              x53335 = 0;
            };
            int x53341 = x53335;
            ite44883 = x53341;
          } else {
            
            ite44883 = 0;
          };
          int x42483 = ite44883;
          if (!(x42483)) break; 
          
          struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x12663 = current12659;
          struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x15332 = x12663->next;
          struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x12665 = current12659;
          double x11324 = x12665->PS_SUPPLYCOST;
          double x11325 = minValue9980;
          int x11326 = x11324<(x11325);
          if(x11326) {
            min9977 = x12665;
            minValue9980 = x11324;
          };
          current12659 = x15332;
        };
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x9990 = min9977;
        int x7152 = x38998->P_PARTKEY;
        struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x27117 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*)malloc(1 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
        memset(x27117, 0, 1 * sizeof(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord));
        x27117->key = x7152; x27117->wnd = x9990;
        g_tree_insert(x52506, x27117, x27117);
      };
    };
    while(1) {
      
      int x4948 = x52507;
      int x816 = !(x4948);
      /* VAR */ int ite44913 = 0;
      if(x816) {
        int x53367 = g_tree_nnodes(x52506);
        int x53368 = x53367!=(0);
        ite44913 = x53368;
      } else {
        
        ite44913 = 0;
      };
      int x42504 = ite44913;
      if (!(x42504)) break; 
      
      void* x29062 = NULL;
      void** x29070 = &(x29062);
      g_tree_foreach(x52506, x29069, x29070);
      struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x29072 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*){x29062};
      int x29073 = g_tree_remove(x52506, x29072);
      int x4956 = x52508;
      int x826 = x4956>=(100);
      if(x826) {
        x52507 = 1;
      } else {
        
        struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x828 = x29072->wnd;
        double x829 = x828->S_ACCTBAL;
        char* x830 = x828->S_NAME;
        char* x832 = x828->N_NAME;
        int x834 = x828->P_PARTKEY;
        char* x835 = x828->P_MFGR;
        char* x837 = x828->S_ADDRESS;
        char* x839 = x828->S_PHONE;
        char* x841 = x828->S_COMMENT;
        printf("%.2f|%s|%s|%d|%s|%s|%s|%s\n", x829, x830, x832, x834, x835, x837, x839, x841);
        int x4976 = x52508;
        int x845 = x4976+(1);
        x52508 = x845;
      };
    };
    int x53402 = x52508;
    printf("(%d rows)\n", x53402);
    struct timeval* x53404 = &x52417;
    gettimeofday(x53404, NULL);
    struct timeval* x53406 = &x52413;
    struct timeval* x53407 = &x52417;
    struct timeval* x53408 = &x52415;
    long x53409 = timeval_subtract(x53406, x53407, x53408);
    printf("Generated code run in %ld milliseconds.\n", x53409);
  };
}
/* ----------- FUNCTIONS ----------- */
int x52465(struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x291, struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x292) {
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x293 = x291->wnd;
  double x294 = x293->S_ACCTBAL;
  struct REGIONRecord_PARTRecord_NATIONRecord_SUPPLIERRecord_PARTSUPPRecord* x295 = x292->wnd;
  double x296 = x295->S_ACCTBAL;
  int x297 = x294<(x296);
  /* VAR */ int ite42063 = 0;
  if(x297) {
    ite42063 = 1;
  } else {
    
    int x42065 = x294>(x296);
    /* VAR */ int ite42067 = 0;
    if(x42065) {
      ite42067 = -1;
    } else {
      
      char* x42069 = x293->N_NAME;
      char* x42070 = x295->N_NAME;
      int x42071 = strcmp(x42069, x42070);
      /* VAR */ int x42072 = x42071;
      int x42073 = x42072;
      int x42074 = x42073==(0);
      if(x42074) {
        char* x305 = x293->S_NAME;
        char* x306 = x295->S_NAME;
        int x36152 = strcmp(x305, x306);
        x42072 = x36152;
        int x309 = x42072;
        int x310 = x309==(0);
        if(x310) {
          int x311 = x293->P_PARTKEY;
          int x312 = x295->P_PARTKEY;
          int x313 = x311-(x312);
          x42072 = x313;
        };
      };
      int x42087 = x42072;
      ite42067 = x42087;
    };
    int x42066 = ite42067;
    ite42063 = x42066;
  };
  int x319 = ite42063;
  return x319; 
}

int x29069(void* x29063, void* x29064, void* x29065) {
  struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord** x29066 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord**){x29065};
  struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord* x29067 = (struct WindowRecord_Int_DynamicCompositeRecord_REGIONRecord_DynamicCompositeRecord_PARTRecord_DynamicCompositeRecord_NATIONRecord_DynamicCompositeRecord_SUPPLIERRecord_PARTSUPPRecord*){x29064};
  pointer_assign(x29066, x29067);
  return 1; 
}
