#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct REGIONRecord;
  struct NATIONRecord;
  struct ORDERSRecord;
  struct PARTRecord;
  struct AGGRecord_Int;
  struct SUPPLIERRecord;
  struct CUSTOMERRecord;
  
  struct LINEITEMRecord {
  int L_ORDERKEY;
  int L_PARTKEY;
  int L_SUPPKEY;
  double L_EXTENDEDPRICE;
  double L_DISCOUNT;
  };
  
  struct REGIONRecord {
  int R_REGIONKEY;
  int R_NAME;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  int N_NAME;
  int N_REGIONKEY;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  int O_ORDERDATE;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  int P_TYPE;
  };
  
  struct AGGRecord_Int {
  int key;
  double* aggs;
  struct AGGRecord_Int* next;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  int S_NATIONKEY;
  };
  
  struct CUSTOMERRecord {
  int C_CUSTKEY;
  int C_NATIONKEY;
  };
  
  


int x65237(struct AGGRecord_Int* x491, struct AGGRecord_Int* x492);

int x40249(void* x40243, void* x40244, void* x40245);
/* GLOBAL VARS */

struct timeval x31694;
int main(int argc, char** argv) {
  /* VAR */ int x18226 = 0;
  int x38863 = sizeof(char**);
  GArray* x38864 = g_array_new(0, 1, x38863);
  /* VAR */ int x18228 = 0;
  int x38866 = sizeof(char**);
  GArray* x38867 = g_array_new(0, 1, x38866);
  /* VAR */ int x18230 = 0;
  int x38869 = sizeof(char**);
  GArray* x38870 = g_array_new(0, 1, x38869);
  FILE* x32553 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x32554 = 0;
  int x32555 = x32554;
  int* x32556 = &x32555;
  int x32557 = fscanf(x32553, "%d", x32556);
  pclose(x32553);
  struct PARTRecord* x35023 = (struct PARTRecord*)malloc(x32555 * sizeof(struct PARTRecord));
  memset(x35023, 0, x32555 * sizeof(struct PARTRecord));
  int x32561 = O_RDONLY;
  int x32562 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x32561);
  struct stat x32563 = (struct stat){0};
  /* VAR */ struct stat x32564 = x32563;
  struct stat x32565 = x32564;
  struct stat* x32566 = &x32565;
  int x32567 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x32566);
  int x32569 = PROT_READ;
  int x32570 = MAP_PRIVATE;
  char* x28661 = mmap(NULL, (x32566->st_size), x32569, x32570, x32562, 0);
  /* VAR */ int x28662 = 0;
  while(1) {
    
    int x5 = x28662;
    /* VAR */ int ite57806 = 0;
    if((x5<(x32555))) {
      char x63153 = *x28661;
      ite57806 = (x63153!=('\0'));
    } else {
      
      ite57806 = 0;
    };
    int x55553 = ite57806;
    if (!(x55553)) break; 
    
    /* VAR */ int x32578 = 0;
    int x32579 = x32578;
    int* x32580 = &x32579;
    char* x32581 = strntoi_unchecked(x28661, x32580);
    x28661 = x32581;
    char* x35047 = (char*)malloc(56 * sizeof(char));
    memset(x35047, 0, 56 * sizeof(char));
    /* VAR */ char* x32584 = x28661;
    while(1) {
      
      char x32585 = *x28661;
      /* VAR */ int ite57825 = 0;
      if((x32585!=('|'))) {
        char x63171 = *x28661;
        ite57825 = (x63171!=('\n'));
      } else {
        
        ite57825 = 0;
      };
      int x55565 = ite57825;
      if (!(x55565)) break; 
      
      x28661 += 1;
    };
    char* x32592 = x32584;
    int x32593 = x28661 - x32592;
    char* x32594 = x32584;
    char* x32595 = strncpy(x35047, x32594, x32593);
    x28661 += 1;
    char* x35065 = (char*)malloc(26 * sizeof(char));
    memset(x35065, 0, 26 * sizeof(char));
    /* VAR */ char* x32603 = x28661;
    while(1) {
      
      char x32604 = *x28661;
      /* VAR */ int ite57848 = 0;
      if((x32604!=('|'))) {
        char x63193 = *x28661;
        ite57848 = (x63193!=('\n'));
      } else {
        
        ite57848 = 0;
      };
      int x55581 = ite57848;
      if (!(x55581)) break; 
      
      x28661 += 1;
    };
    char* x32611 = x32603;
    int x32612 = x28661 - x32611;
    char* x32613 = x32603;
    char* x32614 = strncpy(x35065, x32613, x32612);
    x28661 += 1;
    char* x35083 = (char*)malloc(11 * sizeof(char));
    memset(x35083, 0, 11 * sizeof(char));
    /* VAR */ char* x32622 = x28661;
    while(1) {
      
      char x32623 = *x28661;
      /* VAR */ int ite57871 = 0;
      if((x32623!=('|'))) {
        char x63215 = *x28661;
        ite57871 = (x63215!=('\n'));
      } else {
        
        ite57871 = 0;
      };
      int x55597 = ite57871;
      if (!(x55597)) break; 
      
      x28661 += 1;
    };
    char* x32630 = x32622;
    int x32631 = x28661 - x32630;
    char* x32632 = x32622;
    char* x32633 = strncpy(x35083, x32632, x32631);
    x28661 += 1;
    char* x35101 = (char*)malloc(26 * sizeof(char));
    memset(x35101, 0, 26 * sizeof(char));
    /* VAR */ char* x32641 = x28661;
    while(1) {
      
      char x32642 = *x28661;
      /* VAR */ int ite57894 = 0;
      if((x32642!=('|'))) {
        char x63237 = *x28661;
        ite57894 = (x63237!=('\n'));
      } else {
        
        ite57894 = 0;
      };
      int x55613 = ite57894;
      if (!(x55613)) break; 
      
      x28661 += 1;
    };
    char* x32649 = x32641;
    int x32650 = x28661 - x32649;
    char* x32651 = x32641;
    char* x32652 = strncpy(x35101, x32651, x32650);
    x28661 += 1;
    /* VAR */ int x32659 = 0;
    int x32660 = x32659;
    int* x32661 = &x32660;
    char* x32662 = strntoi_unchecked(x28661, x32661);
    x28661 = x32662;
    char* x35124 = (char*)malloc(11 * sizeof(char));
    memset(x35124, 0, 11 * sizeof(char));
    /* VAR */ char* x32665 = x28661;
    while(1) {
      
      char x32666 = *x28661;
      /* VAR */ int ite57922 = 0;
      if((x32666!=('|'))) {
        char x63264 = *x28661;
        ite57922 = (x63264!=('\n'));
      } else {
        
        ite57922 = 0;
      };
      int x55634 = ite57922;
      if (!(x55634)) break; 
      
      x28661 += 1;
    };
    char* x32673 = x32665;
    int x32674 = x28661 - x32673;
    char* x32675 = x32665;
    char* x32676 = strncpy(x35124, x32675, x32674);
    x28661 += 1;
    /* VAR */ double x32683 = 0.0;
    double x32684 = x32683;
    double* x32685 = &x32684;
    char* x32686 = strntod_unchecked(x28661, x32685);
    x28661 = x32686;
    char* x35147 = (char*)malloc(24 * sizeof(char));
    memset(x35147, 0, 24 * sizeof(char));
    /* VAR */ char* x32689 = x28661;
    while(1) {
      
      char x32690 = *x28661;
      /* VAR */ int ite57950 = 0;
      if((x32690!=('|'))) {
        char x63291 = *x28661;
        ite57950 = (x63291!=('\n'));
      } else {
        
        ite57950 = 0;
      };
      int x55655 = ite57950;
      if (!(x55655)) break; 
      
      x28661 += 1;
    };
    char* x32697 = x32689;
    int x32698 = x28661 - x32697;
    char* x32699 = x32689;
    char* x32700 = strncpy(x35147, x32699, x32698);
    x28661 += 1;
    int x18287 = x18228;
    if((x18287>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "P_TYPE", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "P_TYPE");
    };
    /* VAR */ int x39024 = -1;
    int x39025 = x38867->len;
    int x51813 = 0;
    for(; x51813 < x39025 ; x51813 += 1) {
      
      char* x51814 = g_array_index(x38867, char*, x51813);
      int x51815 = strcmp(x51814, x35101);
      int x51816 = !(x51815);
      if(x51816) {
        x39024 = x51813;
        break;
      };
    };
    int x39035 = x39024;
    int x18293 = !((x39035!=(-1)));
    if(x18293) {
      int x18294 = x18228;
      x18228 = (x18294+(1));
      void* x39042 = &(x35101);
      GArray* x39043 = g_array_append_vals(x38867, x39042, 1);
    };
    /* VAR */ int x39044 = -1;
    int x39045 = x38867->len;
    int x51840 = 0;
    for(; x51840 < x39045 ; x51840 += 1) {
      
      char* x51841 = g_array_index(x38867, char*, x51840);
      int x51842 = strcmp(x51841, x35101);
      int x51843 = !(x51842);
      if(x51843) {
        x39044 = x51840;
        break;
      };
    };
    int x39055 = x39044;
    struct PARTRecord* x36451 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x36451, 0, 1 * sizeof(struct PARTRecord));
    x36451->P_PARTKEY = x32579; x36451->P_TYPE = x39055;
    int x59 = x28662;
    if((x36451==(NULL))) {
      *(x35023 + x59) = (const struct PARTRecord){0};
    } else {
      
      struct PARTRecord x35182 = *x36451;
      *(x35023 + x59) = x35182;
      struct PARTRecord* x35184 = &(x35023[x59]);
      x36451 = x35184;
    };
    int x61 = x28662;
    x28662 = (x61+(1));
  };
  FILE* x32726 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x32727 = 0;
  int x32728 = x32727;
  int* x32729 = &x32728;
  int x32730 = fscanf(x32726, "%d", x32729);
  pclose(x32726);
  struct LINEITEMRecord* x35196 = (struct LINEITEMRecord*)malloc(x32728 * sizeof(struct LINEITEMRecord));
  memset(x35196, 0, x32728 * sizeof(struct LINEITEMRecord));
  int x32734 = O_RDONLY;
  int x32735 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x32734);
  /* VAR */ struct stat x32736 = x32563;
  struct stat x32737 = x32736;
  struct stat* x32738 = &x32737;
  int x32739 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x32738);
  int x32741 = PROT_READ;
  int x32742 = MAP_PRIVATE;
  char* x28734 = mmap(NULL, (x32738->st_size), x32741, x32742, x32735, 0);
  /* VAR */ int x28735 = 0;
  while(1) {
    
    int x69 = x28735;
    /* VAR */ int ite58052 = 0;
    if((x69<(x32728))) {
      char x63392 = *x28734;
      ite58052 = (x63392!=('\0'));
    } else {
      
      ite58052 = 0;
    };
    int x55750 = ite58052;
    if (!(x55750)) break; 
    
    /* VAR */ int x32750 = 0;
    int x32751 = x32750;
    int* x32752 = &x32751;
    char* x32753 = strntoi_unchecked(x28734, x32752);
    x28734 = x32753;
    /* VAR */ int x32755 = 0;
    int x32756 = x32755;
    int* x32757 = &x32756;
    char* x32758 = strntoi_unchecked(x28734, x32757);
    x28734 = x32758;
    /* VAR */ int x32760 = 0;
    int x32761 = x32760;
    int* x32762 = &x32761;
    char* x32763 = strntoi_unchecked(x28734, x32762);
    x28734 = x32763;
    /* VAR */ int x32765 = 0;
    int x32766 = x32765;
    int* x32767 = &x32766;
    char* x32768 = strntoi_unchecked(x28734, x32767);
    x28734 = x32768;
    /* VAR */ double x32770 = 0.0;
    double x32771 = x32770;
    double* x32772 = &x32771;
    char* x32773 = strntod_unchecked(x28734, x32772);
    x28734 = x32773;
    /* VAR */ double x32775 = 0.0;
    double x32776 = x32775;
    double* x32777 = &x32776;
    char* x32778 = strntod_unchecked(x28734, x32777);
    x28734 = x32778;
    /* VAR */ double x32780 = 0.0;
    double x32781 = x32780;
    double* x32782 = &x32781;
    char* x32783 = strntod_unchecked(x28734, x32782);
    x28734 = x32783;
    /* VAR */ double x32785 = 0.0;
    double x32786 = x32785;
    double* x32787 = &x32786;
    char* x32788 = strntod_unchecked(x28734, x32787);
    x28734 = x32788;
    char x32790 = *x28734;
    /* VAR */ char x32791 = x32790;
    x28734 += 1;
    x28734 += 1;
    char x32795 = *x28734;
    /* VAR */ char x32796 = x32795;
    x28734 += 1;
    x28734 += 1;
    /* VAR */ int x32800 = 0;
    int x32801 = x32800;
    int* x32802 = &x32801;
    char* x32803 = strntoi_unchecked(x28734, x32802);
    x28734 = x32803;
    /* VAR */ int x32805 = 0;
    int x32806 = x32805;
    int* x32807 = &x32806;
    char* x32808 = strntoi_unchecked(x28734, x32807);
    x28734 = x32808;
    /* VAR */ int x32810 = 0;
    int x32811 = x32810;
    int* x32812 = &x32811;
    char* x32813 = strntoi_unchecked(x28734, x32812);
    x28734 = x32813;
    /* VAR */ int x32819 = 0;
    int x32820 = x32819;
    int* x32821 = &x32820;
    char* x32822 = strntoi_unchecked(x28734, x32821);
    x28734 = x32822;
    /* VAR */ int x32824 = 0;
    int x32825 = x32824;
    int* x32826 = &x32825;
    char* x32827 = strntoi_unchecked(x28734, x32826);
    x28734 = x32827;
    /* VAR */ int x32829 = 0;
    int x32830 = x32829;
    int* x32831 = &x32830;
    char* x32832 = strntoi_unchecked(x28734, x32831);
    x28734 = x32832;
    /* VAR */ int x32838 = 0;
    int x32839 = x32838;
    int* x32840 = &x32839;
    char* x32841 = strntoi_unchecked(x28734, x32840);
    x28734 = x32841;
    /* VAR */ int x32843 = 0;
    int x32844 = x32843;
    int* x32845 = &x32844;
    char* x32846 = strntoi_unchecked(x28734, x32845);
    x28734 = x32846;
    /* VAR */ int x32848 = 0;
    int x32849 = x32848;
    int* x32850 = &x32849;
    char* x32851 = strntoi_unchecked(x28734, x32850);
    x28734 = x32851;
    char* x35321 = (char*)malloc(26 * sizeof(char));
    memset(x35321, 0, 26 * sizeof(char));
    /* VAR */ char* x32858 = x28734;
    while(1) {
      
      char x32859 = *x28734;
      /* VAR */ int ite58173 = 0;
      if((x32859!=('|'))) {
        char x63512 = *x28734;
        ite58173 = (x63512!=('\n'));
      } else {
        
        ite58173 = 0;
      };
      int x55864 = ite58173;
      if (!(x55864)) break; 
      
      x28734 += 1;
    };
    char* x32866 = x32858;
    int x32867 = x28734 - x32866;
    char* x32868 = x32858;
    char* x32869 = strncpy(x35321, x32868, x32867);
    x28734 += 1;
    char* x35339 = (char*)malloc(11 * sizeof(char));
    memset(x35339, 0, 11 * sizeof(char));
    /* VAR */ char* x32877 = x28734;
    while(1) {
      
      char x32878 = *x28734;
      /* VAR */ int ite58196 = 0;
      if((x32878!=('|'))) {
        char x63534 = *x28734;
        ite58196 = (x63534!=('\n'));
      } else {
        
        ite58196 = 0;
      };
      int x55880 = ite58196;
      if (!(x55880)) break; 
      
      x28734 += 1;
    };
    char* x32885 = x32877;
    int x32886 = x28734 - x32885;
    char* x32887 = x32877;
    char* x32888 = strncpy(x35339, x32887, x32886);
    x28734 += 1;
    char* x35357 = (char*)malloc(45 * sizeof(char));
    memset(x35357, 0, 45 * sizeof(char));
    /* VAR */ char* x32896 = x28734;
    while(1) {
      
      char x32897 = *x28734;
      /* VAR */ int ite58219 = 0;
      if((x32897!=('|'))) {
        char x63556 = *x28734;
        ite58219 = (x63556!=('\n'));
      } else {
        
        ite58219 = 0;
      };
      int x55896 = ite58219;
      if (!(x55896)) break; 
      
      x28734 += 1;
    };
    char* x32904 = x32896;
    int x32905 = x28734 - x32904;
    char* x32906 = x32896;
    char* x32907 = strncpy(x35357, x32906, x32905);
    x28734 += 1;
    struct LINEITEMRecord* x36650 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x36650, 0, 1 * sizeof(struct LINEITEMRecord));
    x36650->L_ORDERKEY = x32751; x36650->L_PARTKEY = x32756; x36650->L_SUPPKEY = x32761; x36650->L_EXTENDEDPRICE = x32776; x36650->L_DISCOUNT = x32781;
    int x111 = x28735;
    if((x36650==(NULL))) {
      *(x35196 + x111) = (const struct LINEITEMRecord){0};
    } else {
      
      struct LINEITEMRecord x35379 = *x36650;
      *(x35196 + x111) = x35379;
      struct LINEITEMRecord* x35381 = &(x35196[x111]);
      x36650 = x35381;
    };
    int x113 = x28735;
    x28735 = (x113+(1));
  };
  FILE* x32920 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x32921 = 0;
  int x32922 = x32921;
  int* x32923 = &x32922;
  int x32924 = fscanf(x32920, "%d", x32923);
  pclose(x32920);
  struct ORDERSRecord* x35393 = (struct ORDERSRecord*)malloc(x32922 * sizeof(struct ORDERSRecord));
  memset(x35393, 0, x32922 * sizeof(struct ORDERSRecord));
  int x32928 = O_RDONLY;
  int x32929 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x32928);
  /* VAR */ struct stat x32930 = x32563;
  struct stat x32931 = x32930;
  struct stat* x32932 = &x32931;
  int x32933 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x32932);
  int x32935 = PROT_READ;
  int x32936 = MAP_PRIVATE;
  char* x28783 = mmap(NULL, (x32932->st_size), x32935, x32936, x32929, 0);
  /* VAR */ int x28784 = 0;
  while(1) {
    
    int x121 = x28784;
    /* VAR */ int ite58272 = 0;
    if((x121<(x32922))) {
      char x63608 = *x28783;
      ite58272 = (x63608!=('\0'));
    } else {
      
      ite58272 = 0;
    };
    int x55942 = ite58272;
    if (!(x55942)) break; 
    
    /* VAR */ int x32944 = 0;
    int x32945 = x32944;
    int* x32946 = &x32945;
    char* x32947 = strntoi_unchecked(x28783, x32946);
    x28783 = x32947;
    /* VAR */ int x32949 = 0;
    int x32950 = x32949;
    int* x32951 = &x32950;
    char* x32952 = strntoi_unchecked(x28783, x32951);
    x28783 = x32952;
    char x32954 = *x28783;
    /* VAR */ char x32955 = x32954;
    x28783 += 1;
    x28783 += 1;
    /* VAR */ double x32959 = 0.0;
    double x32960 = x32959;
    double* x32961 = &x32960;
    char* x32962 = strntod_unchecked(x28783, x32961);
    x28783 = x32962;
    /* VAR */ int x32964 = 0;
    int x32965 = x32964;
    int* x32966 = &x32965;
    char* x32967 = strntoi_unchecked(x28783, x32966);
    x28783 = x32967;
    /* VAR */ int x32969 = 0;
    int x32970 = x32969;
    int* x32971 = &x32970;
    char* x32972 = strntoi_unchecked(x28783, x32971);
    x28783 = x32972;
    /* VAR */ int x32974 = 0;
    int x32975 = x32974;
    int* x32976 = &x32975;
    char* x32977 = strntoi_unchecked(x28783, x32976);
    x28783 = x32977;
    char* x35450 = (char*)malloc(16 * sizeof(char));
    memset(x35450, 0, 16 * sizeof(char));
    /* VAR */ char* x32984 = x28783;
    while(1) {
      
      char x32985 = *x28783;
      /* VAR */ int ite58325 = 0;
      if((x32985!=('|'))) {
        char x63660 = *x28783;
        ite58325 = (x63660!=('\n'));
      } else {
        
        ite58325 = 0;
      };
      int x55988 = ite58325;
      if (!(x55988)) break; 
      
      x28783 += 1;
    };
    char* x32992 = x32984;
    int x32993 = x28783 - x32992;
    char* x32994 = x32984;
    char* x32995 = strncpy(x35450, x32994, x32993);
    x28783 += 1;
    char* x35468 = (char*)malloc(16 * sizeof(char));
    memset(x35468, 0, 16 * sizeof(char));
    /* VAR */ char* x33003 = x28783;
    while(1) {
      
      char x33004 = *x28783;
      /* VAR */ int ite58348 = 0;
      if((x33004!=('|'))) {
        char x63682 = *x28783;
        ite58348 = (x63682!=('\n'));
      } else {
        
        ite58348 = 0;
      };
      int x56004 = ite58348;
      if (!(x56004)) break; 
      
      x28783 += 1;
    };
    char* x33011 = x33003;
    int x33012 = x28783 - x33011;
    char* x33013 = x33003;
    char* x33014 = strncpy(x35468, x33013, x33012);
    x28783 += 1;
    /* VAR */ int x33021 = 0;
    int x33022 = x33021;
    int* x33023 = &x33022;
    char* x33024 = strntoi_unchecked(x28783, x33023);
    x28783 = x33024;
    char* x35491 = (char*)malloc(80 * sizeof(char));
    memset(x35491, 0, 80 * sizeof(char));
    /* VAR */ char* x33027 = x28783;
    while(1) {
      
      char x33028 = *x28783;
      /* VAR */ int ite58376 = 0;
      if((x33028!=('|'))) {
        char x63709 = *x28783;
        ite58376 = (x63709!=('\n'));
      } else {
        
        ite58376 = 0;
      };
      int x56025 = ite58376;
      if (!(x56025)) break; 
      
      x28783 += 1;
    };
    char* x33035 = x33027;
    int x33036 = x28783 - x33035;
    char* x33037 = x33027;
    char* x33038 = strncpy(x35491, x33037, x33036);
    x28783 += 1;
    struct ORDERSRecord* x36786 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x36786, 0, 1 * sizeof(struct ORDERSRecord));
    x36786->O_ORDERKEY = x32945; x36786->O_CUSTKEY = x32950; x36786->O_ORDERDATE = (((x32965*(10000))+((x32970*(100))))+(x32975));
    int x155 = x28784;
    if((x36786==(NULL))) {
      *(x35393 + x155) = (const struct ORDERSRecord){0};
    } else {
      
      struct ORDERSRecord x35513 = *x36786;
      *(x35393 + x155) = x35513;
      struct ORDERSRecord* x35515 = &(x35393[x155]);
      x36786 = x35515;
    };
    int x157 = x28784;
    x28784 = (x157+(1));
  };
  FILE* x33051 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x33052 = 0;
  int x33053 = x33052;
  int* x33054 = &x33053;
  int x33055 = fscanf(x33051, "%d", x33054);
  pclose(x33051);
  struct CUSTOMERRecord* x35527 = (struct CUSTOMERRecord*)malloc(x33053 * sizeof(struct CUSTOMERRecord));
  memset(x35527, 0, x33053 * sizeof(struct CUSTOMERRecord));
  int x33059 = O_RDONLY;
  int x33060 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x33059);
  /* VAR */ struct stat x33061 = x32563;
  struct stat x33062 = x33061;
  struct stat* x33063 = &x33062;
  int x33064 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x33063);
  int x33066 = PROT_READ;
  int x33067 = MAP_PRIVATE;
  char* x28825 = mmap(NULL, (x33063->st_size), x33066, x33067, x33060, 0);
  /* VAR */ int x28826 = 0;
  while(1) {
    
    int x165 = x28826;
    /* VAR */ int ite58429 = 0;
    if((x165<(x33053))) {
      char x63761 = *x28825;
      ite58429 = (x63761!=('\0'));
    } else {
      
      ite58429 = 0;
    };
    int x56071 = ite58429;
    if (!(x56071)) break; 
    
    /* VAR */ int x33075 = 0;
    int x33076 = x33075;
    int* x33077 = &x33076;
    char* x33078 = strntoi_unchecked(x28825, x33077);
    x28825 = x33078;
    char* x35550 = (char*)malloc(26 * sizeof(char));
    memset(x35550, 0, 26 * sizeof(char));
    /* VAR */ char* x33081 = x28825;
    while(1) {
      
      char x33082 = *x28825;
      /* VAR */ int ite58448 = 0;
      if((x33082!=('|'))) {
        char x63779 = *x28825;
        ite58448 = (x63779!=('\n'));
      } else {
        
        ite58448 = 0;
      };
      int x56083 = ite58448;
      if (!(x56083)) break; 
      
      x28825 += 1;
    };
    char* x33089 = x33081;
    int x33090 = x28825 - x33089;
    char* x33091 = x33081;
    char* x33092 = strncpy(x35550, x33091, x33090);
    x28825 += 1;
    char* x35568 = (char*)malloc(41 * sizeof(char));
    memset(x35568, 0, 41 * sizeof(char));
    /* VAR */ char* x33100 = x28825;
    while(1) {
      
      char x33101 = *x28825;
      /* VAR */ int ite58471 = 0;
      if((x33101!=('|'))) {
        char x63801 = *x28825;
        ite58471 = (x63801!=('\n'));
      } else {
        
        ite58471 = 0;
      };
      int x56099 = ite58471;
      if (!(x56099)) break; 
      
      x28825 += 1;
    };
    char* x33108 = x33100;
    int x33109 = x28825 - x33108;
    char* x33110 = x33100;
    char* x33111 = strncpy(x35568, x33110, x33109);
    x28825 += 1;
    /* VAR */ int x33118 = 0;
    int x33119 = x33118;
    int* x33120 = &x33119;
    char* x33121 = strntoi_unchecked(x28825, x33120);
    x28825 = x33121;
    char* x35591 = (char*)malloc(16 * sizeof(char));
    memset(x35591, 0, 16 * sizeof(char));
    /* VAR */ char* x33124 = x28825;
    while(1) {
      
      char x33125 = *x28825;
      /* VAR */ int ite58499 = 0;
      if((x33125!=('|'))) {
        char x63828 = *x28825;
        ite58499 = (x63828!=('\n'));
      } else {
        
        ite58499 = 0;
      };
      int x56120 = ite58499;
      if (!(x56120)) break; 
      
      x28825 += 1;
    };
    char* x33132 = x33124;
    int x33133 = x28825 - x33132;
    char* x33134 = x33124;
    char* x33135 = strncpy(x35591, x33134, x33133);
    x28825 += 1;
    /* VAR */ double x33142 = 0.0;
    double x33143 = x33142;
    double* x33144 = &x33143;
    char* x33145 = strntod_unchecked(x28825, x33144);
    x28825 = x33145;
    char* x35614 = (char*)malloc(11 * sizeof(char));
    memset(x35614, 0, 11 * sizeof(char));
    /* VAR */ char* x33148 = x28825;
    while(1) {
      
      char x33149 = *x28825;
      /* VAR */ int ite58527 = 0;
      if((x33149!=('|'))) {
        char x63855 = *x28825;
        ite58527 = (x63855!=('\n'));
      } else {
        
        ite58527 = 0;
      };
      int x56141 = ite58527;
      if (!(x56141)) break; 
      
      x28825 += 1;
    };
    char* x33156 = x33148;
    int x33157 = x28825 - x33156;
    char* x33158 = x33148;
    char* x33159 = strncpy(x35614, x33158, x33157);
    x28825 += 1;
    char* x35632 = (char*)malloc(118 * sizeof(char));
    memset(x35632, 0, 118 * sizeof(char));
    /* VAR */ char* x33167 = x28825;
    while(1) {
      
      char x33168 = *x28825;
      /* VAR */ int ite58550 = 0;
      if((x33168!=('|'))) {
        char x63877 = *x28825;
        ite58550 = (x63877!=('\n'));
      } else {
        
        ite58550 = 0;
      };
      int x56157 = ite58550;
      if (!(x56157)) break; 
      
      x28825 += 1;
    };
    char* x33175 = x33167;
    int x33176 = x28825 - x33175;
    char* x33177 = x33167;
    char* x33178 = strncpy(x35632, x33177, x33176);
    x28825 += 1;
    struct CUSTOMERRecord* x36929 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x36929, 0, 1 * sizeof(struct CUSTOMERRecord));
    x36929->C_CUSTKEY = x33076; x36929->C_NATIONKEY = x33119;
    int x213 = x28826;
    if((x36929==(NULL))) {
      *(x35527 + x213) = (const struct CUSTOMERRecord){0};
    } else {
      
      struct CUSTOMERRecord x35654 = *x36929;
      *(x35527 + x213) = x35654;
      struct CUSTOMERRecord* x35656 = &(x35527[x213]);
      x36929 = x35656;
    };
    int x215 = x28826;
    x28826 = (x215+(1));
  };
  FILE* x33191 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x33192 = 0;
  int x33193 = x33192;
  int* x33194 = &x33193;
  int x33195 = fscanf(x33191, "%d", x33194);
  pclose(x33191);
  struct NATIONRecord* x35668 = (struct NATIONRecord*)malloc(x33193 * sizeof(struct NATIONRecord));
  memset(x35668, 0, x33193 * sizeof(struct NATIONRecord));
  int x33199 = O_RDONLY;
  int x33200 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x33199);
  /* VAR */ struct stat x33201 = x32563;
  struct stat x33202 = x33201;
  struct stat* x33203 = &x33202;
  int x33204 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x33203);
  int x33206 = PROT_READ;
  int x33207 = MAP_PRIVATE;
  char* x28878 = mmap(NULL, (x33203->st_size), x33206, x33207, x33200, 0);
  /* VAR */ int x28879 = 0;
  while(1) {
    
    int x223 = x28879;
    /* VAR */ int ite58603 = 0;
    if((x223<(x33193))) {
      char x63929 = *x28878;
      ite58603 = (x63929!=('\0'));
    } else {
      
      ite58603 = 0;
    };
    int x56203 = ite58603;
    if (!(x56203)) break; 
    
    /* VAR */ int x33215 = 0;
    int x33216 = x33215;
    int* x33217 = &x33216;
    char* x33218 = strntoi_unchecked(x28878, x33217);
    x28878 = x33218;
    char* x35691 = (char*)malloc(26 * sizeof(char));
    memset(x35691, 0, 26 * sizeof(char));
    /* VAR */ char* x33221 = x28878;
    while(1) {
      
      char x33222 = *x28878;
      /* VAR */ int ite58622 = 0;
      if((x33222!=('|'))) {
        char x63947 = *x28878;
        ite58622 = (x63947!=('\n'));
      } else {
        
        ite58622 = 0;
      };
      int x56215 = ite58622;
      if (!(x56215)) break; 
      
      x28878 += 1;
    };
    char* x33229 = x33221;
    int x33230 = x28878 - x33229;
    char* x33231 = x33221;
    char* x33232 = strncpy(x35691, x33231, x33230);
    x28878 += 1;
    /* VAR */ int x33239 = 0;
    int x33240 = x33239;
    int* x33241 = &x33240;
    char* x33242 = strntoi_unchecked(x28878, x33241);
    x28878 = x33242;
    char* x35714 = (char*)malloc(153 * sizeof(char));
    memset(x35714, 0, 153 * sizeof(char));
    /* VAR */ char* x33245 = x28878;
    while(1) {
      
      char x33246 = *x28878;
      /* VAR */ int ite58650 = 0;
      if((x33246!=('|'))) {
        char x63974 = *x28878;
        ite58650 = (x63974!=('\n'));
      } else {
        
        ite58650 = 0;
      };
      int x56236 = ite58650;
      if (!(x56236)) break; 
      
      x28878 += 1;
    };
    char* x33253 = x33245;
    int x33254 = x28878 - x33253;
    char* x33255 = x33245;
    char* x33256 = strncpy(x35714, x33255, x33254);
    x28878 += 1;
    int x18475 = x18230;
    if((x18475>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "N_NAME", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "N_NAME");
    };
    /* VAR */ int x39623 = -1;
    int x39624 = x38870->len;
    int x52413 = 0;
    for(; x52413 < x39624 ; x52413 += 1) {
      
      char* x52414 = g_array_index(x38870, char*, x52413);
      int x52415 = strcmp(x52414, x35691);
      int x52416 = !(x52415);
      if(x52416) {
        x39623 = x52413;
        break;
      };
    };
    int x39634 = x39623;
    int x18481 = !((x39634!=(-1)));
    if(x18481) {
      int x18482 = x18230;
      x18230 = (x18482+(1));
      void* x39641 = &(x35691);
      GArray* x39642 = g_array_append_vals(x38870, x39641, 1);
    };
    /* VAR */ int x39643 = -1;
    int x39644 = x38870->len;
    int x52440 = 0;
    for(; x52440 < x39644 ; x52440 += 1) {
      
      char* x52441 = g_array_index(x38870, char*, x52440);
      int x52442 = strcmp(x52441, x35691);
      int x52443 = !(x52442);
      if(x52443) {
        x39643 = x52440;
        break;
      };
    };
    int x39654 = x39643;
    struct NATIONRecord* x37026 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x37026, 0, 1 * sizeof(struct NATIONRecord));
    x37026->N_NATIONKEY = x33216; x37026->N_NAME = x39654; x37026->N_REGIONKEY = x33240;
    int x246 = x28879;
    if((x37026==(NULL))) {
      *(x35668 + x246) = (const struct NATIONRecord){0};
    } else {
      
      struct NATIONRecord x35749 = *x37026;
      *(x35668 + x246) = x35749;
      struct NATIONRecord* x35751 = &(x35668[x246]);
      x37026 = x35751;
    };
    int x248 = x28879;
    x28879 = (x248+(1));
  };
  FILE* x33282 = popen("wc -l /mnt/ramdisk/tpch/sf8/region.tbl", "r");
  /* VAR */ int x33283 = 0;
  int x33284 = x33283;
  int* x33285 = &x33284;
  int x33286 = fscanf(x33282, "%d", x33285);
  pclose(x33282);
  struct REGIONRecord* x35763 = (struct REGIONRecord*)malloc(x33284 * sizeof(struct REGIONRecord));
  memset(x35763, 0, x33284 * sizeof(struct REGIONRecord));
  int x33290 = O_RDONLY;
  int x33291 = open("/mnt/ramdisk/tpch/sf8/region.tbl", x33290);
  /* VAR */ struct stat x33292 = x32563;
  struct stat x33293 = x33292;
  struct stat* x33294 = &x33293;
  int x33295 = stat("/mnt/ramdisk/tpch/sf8/region.tbl", x33294);
  int x33297 = PROT_READ;
  int x33298 = MAP_PRIVATE;
  char* x28922 = mmap(NULL, (x33294->st_size), x33297, x33298, x33291, 0);
  /* VAR */ int x28923 = 0;
  while(1) {
    
    int x256 = x28923;
    /* VAR */ int ite58752 = 0;
    if((x256<(x33284))) {
      char x64075 = *x28922;
      ite58752 = (x64075!=('\0'));
    } else {
      
      ite58752 = 0;
    };
    int x56331 = ite58752;
    if (!(x56331)) break; 
    
    /* VAR */ int x33306 = 0;
    int x33307 = x33306;
    int* x33308 = &x33307;
    char* x33309 = strntoi_unchecked(x28922, x33308);
    x28922 = x33309;
    char* x35786 = (char*)malloc(26 * sizeof(char));
    memset(x35786, 0, 26 * sizeof(char));
    /* VAR */ char* x33312 = x28922;
    while(1) {
      
      char x33313 = *x28922;
      /* VAR */ int ite58771 = 0;
      if((x33313!=('|'))) {
        char x64093 = *x28922;
        ite58771 = (x64093!=('\n'));
      } else {
        
        ite58771 = 0;
      };
      int x56343 = ite58771;
      if (!(x56343)) break; 
      
      x28922 += 1;
    };
    char* x33320 = x33312;
    int x33321 = x28922 - x33320;
    char* x33322 = x33312;
    char* x33323 = strncpy(x35786, x33322, x33321);
    x28922 += 1;
    char* x35804 = (char*)malloc(153 * sizeof(char));
    memset(x35804, 0, 153 * sizeof(char));
    /* VAR */ char* x33331 = x28922;
    while(1) {
      
      char x33332 = *x28922;
      /* VAR */ int ite58794 = 0;
      if((x33332!=('|'))) {
        char x64115 = *x28922;
        ite58794 = (x64115!=('\n'));
      } else {
        
        ite58794 = 0;
      };
      int x56359 = ite58794;
      if (!(x56359)) break; 
      
      x28922 += 1;
    };
    char* x33339 = x33331;
    int x33340 = x28922 - x33339;
    char* x33341 = x33331;
    char* x33342 = strncpy(x35804, x33341, x33340);
    x28922 += 1;
    int x18518 = x18226;
    if((x18518>(4096))) {
      printf("StringDictionaryTransformer ERROR: Number of unique strings in list of field %s exceeded the maximum allowed value of %d\n", "R_NAME", 4096);
      printf("		Either disable StringDictionaryTransformer for your query, or disable %s in the transformer.\n", "R_NAME");
    };
    /* VAR */ int x39739 = -1;
    int x39740 = x38864->len;
    int x52541 = 0;
    for(; x52541 < x39740 ; x52541 += 1) {
      
      char* x52542 = g_array_index(x38864, char*, x52541);
      int x52543 = strcmp(x52542, x35786);
      int x52544 = !(x52543);
      if(x52544) {
        x39739 = x52541;
        break;
      };
    };
    int x39750 = x39739;
    int x18524 = !((x39750!=(-1)));
    if(x18524) {
      int x18525 = x18226;
      x18226 = (x18525+(1));
      void* x39757 = &(x35786);
      GArray* x39758 = g_array_append_vals(x38864, x39757, 1);
    };
    /* VAR */ int x39759 = -1;
    int x39760 = x38864->len;
    int x52568 = 0;
    for(; x52568 < x39760 ; x52568 += 1) {
      
      char* x52569 = g_array_index(x38864, char*, x52568);
      int x52570 = strcmp(x52569, x35786);
      int x52571 = !(x52570);
      if(x52571) {
        x39759 = x52568;
        break;
      };
    };
    int x39770 = x39759;
    struct REGIONRecord* x37118 = (struct REGIONRecord*)malloc(1 * sizeof(struct REGIONRecord));
    memset(x37118, 0, 1 * sizeof(struct REGIONRecord));
    x37118->R_REGIONKEY = x33307; x37118->R_NAME = x39770;
    int x278 = x28923;
    if((x37118==(NULL))) {
      *(x35763 + x278) = (const struct REGIONRecord){0};
    } else {
      
      struct REGIONRecord x35839 = *x37118;
      *(x35763 + x278) = x35839;
      struct REGIONRecord* x35841 = &(x35763[x278]);
      x37118 = x35841;
    };
    int x280 = x28923;
    x28923 = (x280+(1));
  };
  FILE* x33368 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x33369 = 0;
  int x33370 = x33369;
  int* x33371 = &x33370;
  int x33372 = fscanf(x33368, "%d", x33371);
  pclose(x33368);
  struct SUPPLIERRecord* x35853 = (struct SUPPLIERRecord*)malloc(x33370 * sizeof(struct SUPPLIERRecord));
  memset(x35853, 0, x33370 * sizeof(struct SUPPLIERRecord));
  int x33376 = O_RDONLY;
  int x33377 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x33376);
  /* VAR */ struct stat x33378 = x32563;
  struct stat x33379 = x33378;
  struct stat* x33380 = &x33379;
  int x33381 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x33380);
  int x33383 = PROT_READ;
  int x33384 = MAP_PRIVATE;
  char* x28965 = mmap(NULL, (x33380->st_size), x33383, x33384, x33377, 0);
  /* VAR */ int x28966 = 0;
  while(1) {
    
    int x288 = x28966;
    /* VAR */ int ite58896 = 0;
    if((x288<(x33370))) {
      char x64216 = *x28965;
      ite58896 = (x64216!=('\0'));
    } else {
      
      ite58896 = 0;
    };
    int x56454 = ite58896;
    if (!(x56454)) break; 
    
    /* VAR */ int x33392 = 0;
    int x33393 = x33392;
    int* x33394 = &x33393;
    char* x33395 = strntoi_unchecked(x28965, x33394);
    x28965 = x33395;
    char* x35876 = (char*)malloc(26 * sizeof(char));
    memset(x35876, 0, 26 * sizeof(char));
    /* VAR */ char* x33398 = x28965;
    while(1) {
      
      char x33399 = *x28965;
      /* VAR */ int ite58915 = 0;
      if((x33399!=('|'))) {
        char x64234 = *x28965;
        ite58915 = (x64234!=('\n'));
      } else {
        
        ite58915 = 0;
      };
      int x56466 = ite58915;
      if (!(x56466)) break; 
      
      x28965 += 1;
    };
    char* x33406 = x33398;
    int x33407 = x28965 - x33406;
    char* x33408 = x33398;
    char* x33409 = strncpy(x35876, x33408, x33407);
    x28965 += 1;
    char* x35894 = (char*)malloc(41 * sizeof(char));
    memset(x35894, 0, 41 * sizeof(char));
    /* VAR */ char* x33417 = x28965;
    while(1) {
      
      char x33418 = *x28965;
      /* VAR */ int ite58938 = 0;
      if((x33418!=('|'))) {
        char x64256 = *x28965;
        ite58938 = (x64256!=('\n'));
      } else {
        
        ite58938 = 0;
      };
      int x56482 = ite58938;
      if (!(x56482)) break; 
      
      x28965 += 1;
    };
    char* x33425 = x33417;
    int x33426 = x28965 - x33425;
    char* x33427 = x33417;
    char* x33428 = strncpy(x35894, x33427, x33426);
    x28965 += 1;
    /* VAR */ int x33435 = 0;
    int x33436 = x33435;
    int* x33437 = &x33436;
    char* x33438 = strntoi_unchecked(x28965, x33437);
    x28965 = x33438;
    char* x35917 = (char*)malloc(16 * sizeof(char));
    memset(x35917, 0, 16 * sizeof(char));
    /* VAR */ char* x33441 = x28965;
    while(1) {
      
      char x33442 = *x28965;
      /* VAR */ int ite58966 = 0;
      if((x33442!=('|'))) {
        char x64283 = *x28965;
        ite58966 = (x64283!=('\n'));
      } else {
        
        ite58966 = 0;
      };
      int x56503 = ite58966;
      if (!(x56503)) break; 
      
      x28965 += 1;
    };
    char* x33449 = x33441;
    int x33450 = x28965 - x33449;
    char* x33451 = x33441;
    char* x33452 = strncpy(x35917, x33451, x33450);
    x28965 += 1;
    /* VAR */ double x33459 = 0.0;
    double x33460 = x33459;
    double* x33461 = &x33460;
    char* x33462 = strntod_unchecked(x28965, x33461);
    x28965 = x33462;
    char* x35940 = (char*)malloc(102 * sizeof(char));
    memset(x35940, 0, 102 * sizeof(char));
    /* VAR */ char* x33465 = x28965;
    while(1) {
      
      char x33466 = *x28965;
      /* VAR */ int ite58994 = 0;
      if((x33466!=('|'))) {
        char x64310 = *x28965;
        ite58994 = (x64310!=('\n'));
      } else {
        
        ite58994 = 0;
      };
      int x56524 = ite58994;
      if (!(x56524)) break; 
      
      x28965 += 1;
    };
    char* x33473 = x33465;
    int x33474 = x28965 - x33473;
    char* x33475 = x33465;
    char* x33476 = strncpy(x35940, x33475, x33474);
    x28965 += 1;
    struct SUPPLIERRecord* x37243 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x37243, 0, 1 * sizeof(struct SUPPLIERRecord));
    x37243->S_SUPPKEY = x33393; x37243->S_NATIONKEY = x33436;
    int x328 = x28966;
    if((x37243==(NULL))) {
      *(x35853 + x328) = (const struct SUPPLIERRecord){0};
    } else {
      
      struct SUPPLIERRecord x35962 = *x37243;
      *(x35853 + x328) = x35962;
      struct SUPPLIERRecord* x35964 = &(x35853[x328]);
      x37243 = x35964;
    };
    int x330 = x28966;
    x28966 = (x330+(1));
  };
  int x335 = 0;
  for(; x335 < 1 ; x335 += 1) {
    
    /* VAR */ int x65036 = 0;
    struct AGGRecord_Int* x65037 = (struct AGGRecord_Int*)malloc(1048576 * sizeof(struct AGGRecord_Int));
    memset(x65037, 0, 1048576 * sizeof(struct AGGRecord_Int));
    int x52719 = 0;
    for(; x52719 < 1048576 ; x52719 += 1) {
      
      *(x65037 + x52719) = (const struct AGGRecord_Int){0};
    };
    struct ORDERSRecord* x65043 = (struct ORDERSRecord*)malloc(60000000 * sizeof(struct ORDERSRecord));
    memset(x65043, 0, 60000000 * sizeof(struct ORDERSRecord));
    int x52735 = 0;
    for(; x52735 < x32922 ; x52735 += 1) {
      
      struct ORDERSRecord* x52736 = &(x35393[x52735]);
      int x52738 = (x52736->O_ORDERKEY)%(60000000);
      if((x52736==(NULL))) {
        *(x65043 + x52738) = (const struct ORDERSRecord){0};
      } else {
        
        struct ORDERSRecord x35989 = *x52736;
        *(x65043 + x52738) = x35989;
        struct ORDERSRecord* x35991 = &(x65043[x52738]);
        x52736 = x35991;
      };
    };
    struct LINEITEMRecord** x65067 = (struct LINEITEMRecord**)malloc(1600000 * sizeof(struct LINEITEMRecord*));
    memset(x65067, 0, 1600000 * sizeof(struct LINEITEMRecord*));
    int* x65068 = (int*)malloc(1600000 * sizeof(int));
    memset(x65068, 0, 1600000 * sizeof(int));
    int x52753 = 0;
    for(; x52753 < 1600000 ; x52753 += 1) {
      
      struct LINEITEMRecord* x52754 = (struct LINEITEMRecord*)malloc(1024 * sizeof(struct LINEITEMRecord));
      memset(x52754, 0, 1024 * sizeof(struct LINEITEMRecord));
      *(x65067 + x52753) = x52754;
    };
    /* VAR */ int x65076 = 0;
    int x52777 = 0;
    for(; x52777 < x32728 ; x52777 += 1) {
      
      struct LINEITEMRecord* x52778 = &(x35196[x52777]);
      int x52780 = (x52778->L_PARTKEY)%(1600000);
      int x52781 = x65068[x52780];
      struct LINEITEMRecord* x52782 = x65067[x52780];
      if((x52778==(NULL))) {
        *(x52782 + x52781) = (const struct LINEITEMRecord){0};
      } else {
        
        struct LINEITEMRecord x36014 = *x52778;
        *(x52782 + x52781) = x36014;
        struct LINEITEMRecord* x36016 = &(x52782[x52781]);
        x52778 = x36016;
      };
      *(x65068 + x52780) = (x52781+(1));
      int x52792 = x65076;
      x65076 = (x52792+(1));
    };
    /* VAR */ int x65114 = 0;
    double** x65115 = (double**)malloc(7 * sizeof(double*));
    memset(x65115, 0, 7 * sizeof(double*));
    /* VAR */ int x65116 = 0;
    while(1) {
      
      int x31460 = x65116;
      if (!((x31460<(7)))) break; 
      
      int x31462 = x65116;
      double* x36032 = (double*)malloc(3 * sizeof(double));
      memset(x36032, 0, 3 * sizeof(double));
      *(x65115 + x31462) = x36032;
      int x31465 = x65116;
      x65116 = (x31465+(1));
    };
    /* VAR */ int x65126 = 0;
    struct AGGRecord_Int* x65127 = (struct AGGRecord_Int*)malloc(7 * sizeof(struct AGGRecord_Int));
    memset(x65127, 0, 7 * sizeof(struct AGGRecord_Int));
    /* VAR */ int x65128 = 0;
    while(1) {
      
      int x31472 = x65128;
      if (!((x31472<(7)))) break; 
      
      int x31474 = x65128;
      double* x31475 = x65115[x31474];
      struct AGGRecord_Int* x37332 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
      memset(x37332, 0, 1 * sizeof(struct AGGRecord_Int));
      x37332->key = 0; x37332->aggs = x31475; x37332->next = NULL;
      /* VAR */ int ite59841 = 0;
      if((x37332==(NULL))) {
        ite59841 = 1;
      } else {
        
        ite59841 = ((x37332->aggs)==(NULL));
      };
      int x57266 = ite59841;
      if(x57266) {
        *(x65127 + x31474) = (const struct AGGRecord_Int){0};
      } else {
        
        struct AGGRecord_Int x36048 = *x37332;
        *(x65127 + x31474) = x36048;
        struct AGGRecord_Int* x36050 = &(x65127[x31474]);
        x37332 = x36050;
      };
      int x31478 = x65128;
      x65128 = (x31478+(1));
    };
    /* VAR */ struct timeval x65155 = x31694;
    struct timeval x65156 = x65155;
    /* VAR */ struct timeval x65157 = x31694;
    struct timeval x65158 = x65157;
    /* VAR */ struct timeval x65159 = x31694;
    struct timeval x65160 = x65159;
    struct timeval* x65161 = &x65158;
    gettimeofday(x65161, NULL);
    /* VAR */ int x65163 = -1;
    int x65164 = x38864->len;
    int x52850 = 0;
    for(; x52850 < x65164 ; x52850 += 1) {
      
      char* x52851 = g_array_index(x38864, char*, x52850);
      int x52852 = strcmp(x52851, "ASIA");
      int x52853 = !(x52852);
      if(x52853) {
        x65163 = x52850;
        break;
      };
    };
    int x65180 = x65163;
    /* VAR */ int x65181 = -1;
    int x65182 = x38870->len;
    int x52869 = 0;
    for(; x52869 < x65182 ; x52869 += 1) {
      
      char* x52870 = g_array_index(x38870, char*, x52869);
      int x52871 = strcmp(x52870, "INDONESIA");
      int x52872 = !(x52871);
      if(x52872) {
        x65181 = x52869;
        break;
      };
    };
    int x65198 = x65181;
    /* VAR */ int x65199 = -1;
    int x65200 = x38867->len;
    int x52888 = 0;
    for(; x52888 < x65200 ; x52888 += 1) {
      
      char* x52889 = g_array_index(x38867, char*, x52888);
      int x52890 = strcmp(x52889, "MEDIUM ANODIZED NICKEL");
      int x52891 = !(x52890);
      if(x52891) {
        x65199 = x52888;
        break;
      };
    };
    int x65216 = x65199;
    /* VAR */ int x65217 = 0;
    int* x65256 = &(x65237);
    GTree* x65257 = g_tree_new(x65256);
    /* VAR */ int x65258 = 0;
    /* VAR */ int x65259 = 0;
    while(1) {
      
      int x65261 = x65217;
      if (!((x65261<(x32555)))) break; 
      
      int x11422 = x65217;
      struct PARTRecord* x592 = &(x35023[x11422]);
      if(((x592->P_TYPE)==(x65216))) {
        int x596 = x592->P_PARTKEY;
        int x29085 = x596%(1600000);
        int x29086 = x65068[x29085];
        struct LINEITEMRecord* x29087 = x65067[x29085];
        int x53075 = 0;
        for(; x53075 < x29086 ; x53075 += 1) {
          
          struct LINEITEMRecord* x53076 = &(x29087[x53075]);
          if(((x53076->L_PARTKEY)==(x596))) {
            if(((x53076->L_PARTKEY)==(x596))) {
              int x3489 = x53076->L_ORDERKEY;
              int x3490 = x53076->L_SUPPKEY;
              struct ORDERSRecord* x16521 = &(x65043[x3489]);
              int x638 = x16521->O_ORDERDATE;
              /* VAR */ int ite60179 = 0;
              if((x638>=(19950101))) {
                ite60179 = (x638<=(19961231));
              } else {
                
                ite60179 = 0;
              };
              int x57561 = ite60179;
              if(x57561) {
                if((x3489==((x16521->O_ORDERKEY)))) {
                  int x3552 = x16521->O_CUSTKEY;
                  struct CUSTOMERRecord* x16542 = &(x35527[(x3552-(1))]);
                  if((x3552==((x16542->C_CUSTKEY)))) {
                    int x5169 = x16542->C_NATIONKEY;
                    struct NATIONRecord* x29119 = &(x35668[(x5169-(0))]);
                    if(((x29119->N_NATIONKEY)==(x5169))) {
                      if(((x29119->N_NATIONKEY)==(x5169))) {
                        int x5961 = x29119->N_REGIONKEY;
                        struct REGIONRecord* x29128 = &(x35763[(x5961-(0))]);
                        if(((x29128->R_NAME)==(x65180))) {
                          if(((x29128->R_REGIONKEY)==(x5961))) {
                            if(((x29128->R_REGIONKEY)==(x5961))) {
                              struct SUPPLIERRecord* x29139 = &(x35853[(x3490-(1))]);
                              if(((x29139->S_SUPPKEY)==(x3490))) {
                                if(((x29139->S_SUPPKEY)==(x3490))) {
                                  int x6562 = x29139->S_NATIONKEY;
                                  struct NATIONRecord* x29148 = &(x35668[(x6562-(0))]);
                                  if(((x29148->N_NATIONKEY)==(x6562))) {
                                    if(((x29148->N_NATIONKEY)==(x6562))) {
                                      int x32225 = x638/(10000);
                                      int x19855 = x32225&(1048575);
                                      struct AGGRecord_Int* x21644 = &(x65037[x19855]);
                                      int x19857 = x65036;
                                      if((x19855>(x19857))) {
                                        x65036 = x19855;
                                      };
                                      /* VAR */ struct AGGRecord_Int* current22292 = x21644;
                                      /* VAR */ int found21654 = 0;
                                      while(1) {
                                        
                                        struct AGGRecord_Int* x22295 = current22292;
                                        /* VAR */ int ite60248 = 0;
                                        if((x22295!=(NULL))) {
                                          ite60248 = ((x22295->aggs)!=(NULL));
                                        } else {
                                          
                                          ite60248 = 0;
                                        };
                                        int x57624 = ite60248;
                                        /* VAR */ int ite60257 = 0;
                                        if(x57624) {
                                          int x65547 = found21654;
                                          int x65548 = !(x65547);
                                          ite60257 = x65548;
                                        } else {
                                          
                                          ite60257 = 0;
                                        };
                                        int x57626 = ite60257;
                                        if (!(x57626)) break; 
                                        
                                        struct AGGRecord_Int* x22300 = current22292;
                                        if(((x22300->key)==(x32225))) {
                                          found21654 = 1;
                                        } else {
                                          
                                          struct AGGRecord_Int* x22306 = current22292;
                                          struct AGGRecord_Int* x23583 = x22306->next;
                                          current22292 = x23583;
                                        };
                                      };
                                      int x21670 = found21654;
                                      int x21671 = !(x21670);
                                      /* VAR */ struct AGGRecord_Int** ite57638 = 0;
                                      if(x21671) {
                                        ite57638 = NULL;
                                      } else {
                                        
                                        struct AGGRecord_Int* x57640 = current22292;
                                        ite57638 = x57640;
                                      };
                                      struct AGGRecord_Int** x21677 = ite57638;
                                      /* VAR */ struct AGGRecord_Int* ite57646 = 0;
                                      if((x21677!=(NULL))) {
                                        ite57646 = x21677;
                                      } else {
                                        
                                        int x57648 = x65114;
                                        double* x57649 = x65115[x57648];
                                        int x57650 = x65114;
                                        x65114 = (x57650+(1));
                                        int x57653 = x65126;
                                        struct AGGRecord_Int* x57654 = &(x65127[x57653]);
                                        x57654->key = x32225;
                                        x57654->aggs = x57649;
                                        x57654->next = NULL;
                                        int x57658 = x65126;
                                        x65126 = (x57658+(1));
                                        /* VAR */ int ite60301 = 0;
                                        if((x21644==(NULL))) {
                                          ite60301 = 1;
                                        } else {
                                          
                                          ite60301 = ((x21644->aggs)==(NULL));
                                        };
                                        int x57663 = ite60301;
                                        if(x57663) {
                                          x57654->next = NULL;
                                          /* VAR */ int ite60313 = 0;
                                          if((x57654==(NULL))) {
                                            ite60313 = 1;
                                          } else {
                                            
                                            ite60313 = ((x57654->aggs)==(NULL));
                                          };
                                          int x57668 = ite60313;
                                          if(x57668) {
                                            *(x65037 + x19855) = (const struct AGGRecord_Int){0};
                                          } else {
                                            
                                            struct AGGRecord_Int x36210 = *x57654;
                                            *(x65037 + x19855) = x36210;
                                            struct AGGRecord_Int* x36212 = &(x65037[x19855]);
                                            x57654 = x36212;
                                          };
                                        } else {
                                          
                                          struct AGGRecord_Int* x23603 = x21644->next;
                                          x57654->next = x23603;
                                          x21644->next = x57654;
                                        };
                                        ite57646 = x57654;
                                      };
                                      struct AGGRecord_Int* x19870 = ite57646;
                                      double* x2684 = x19870->aggs;
                                      double x2698 = x2684[0];
                                      double x2702 = (x53076->L_EXTENDEDPRICE)*((1.0-((x53076->L_DISCOUNT))));
                                      *x2684 = (x2698+(x2702));
                                      double x2711 = x2684[1];
                                      /* VAR */ double ite57690 = 0;
                                      if(((x29148->N_NAME)==(x65198))) {
                                        ite57690 = (x2711+(x2702));
                                      } else {
                                        
                                        ite57690 = x2711;
                                      };
                                      double x2715 = ite57690;
                                      *(x2684 + 1) = x2715;
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
            };
          };
        };
      };
      int x11461 = x65217;
      x65217 = (x11461+(1));
    };
    int x65638 = x65036;
    int x53242 = 0;
    for(; x53242 < (x65638+(1)) ; x53242 += 1) {
      
      struct AGGRecord_Int* x53243 = &(x65037[x53242]);
      /* VAR */ struct AGGRecord_Int* x53244 = x53243;
      while(1) {
        
        struct AGGRecord_Int* x22364 = x53244;
        /* VAR */ int ite60387 = 0;
        if((x22364!=(NULL))) {
          ite60387 = ((x22364->aggs)!=(NULL));
        } else {
          
          ite60387 = 0;
        };
        int x57728 = ite60387;
        if (!(x57728)) break; 
        
        struct AGGRecord_Int* x22366 = x53244;
        struct AGGRecord_Int* x23643 = x22366->next;
        struct AGGRecord_Int* x22368 = x53244;
        double* x21733 = x22368->aggs;
        double x21734 = x21733[1];
        double x21735 = x21733[0];
        *(x21733 + 2) = (x21734/(x21735));
        g_tree_insert(x65257, x22368, x22368);
        x53244 = x23643;
      };
    };
    while(1) {
      
      int x13629 = x65258;
      int x2762 = !(x13629);
      /* VAR */ int ite60409 = 0;
      if(x2762) {
        int x65694 = g_tree_nnodes(x65257);
        ite60409 = (x65694!=(0));
      } else {
        
        ite60409 = 0;
      };
      int x57743 = ite60409;
      if (!(x57743)) break; 
      
      void* x40242 = NULL;
      void** x40250 = &(x40242);
      g_tree_foreach(x65257, x40249, x40250);
      struct AGGRecord_Int* x40252 = (struct AGGRecord_Int*){x40242};
      int x40253 = g_tree_remove(x65257, x40252);
      if(0) {
        x65258 = 1;
      } else {
        
        double x2777 = ((double*) { x40252->aggs })[2];
        printf("%d|%.4f\n", (x40252->key), x2777);
        int x13646 = x65259;
        x65259 = (x13646+(1));
      };
    };
    int x65721 = x65259;
    printf("(%d rows)\n", x65721);
    struct timeval* x65723 = &x65160;
    gettimeofday(x65723, NULL);
    struct timeval* x65725 = &x65156;
    struct timeval* x65726 = &x65160;
    struct timeval* x65727 = &x65158;
    long x65728 = timeval_subtract(x65725, x65726, x65727);
    printf("Generated code run in %ld milliseconds.\n", x65728);
  };
}
/* ----------- FUNCTIONS ----------- */
int x65237(struct AGGRecord_Int* x491, struct AGGRecord_Int* x492) {
  int x493 = x491->key;
  int x494 = x492->key;
  /* VAR */ int ite57365 = 0;
  if((x493<(x494))) {
    ite57365 = -1;
  } else {
    
    /* VAR */ int ite57369 = 0;
    if((x493>(x494))) {
      ite57369 = 1;
    } else {
      
      ite57369 = 0;
    };
    int x57368 = ite57369;
    ite57365 = x57368;
  };
  int x498 = ite57365;
  return x498; 
}

int x40249(void* x40243, void* x40244, void* x40245) {
  pointer_assign(((struct AGGRecord_Int**){x40245}), ((struct AGGRecord_Int*){x40244}));
  return 1; 
}
