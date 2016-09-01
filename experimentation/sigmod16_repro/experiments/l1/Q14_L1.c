#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct PARTRecord_LINEITEMRecord;
  struct AGGRecord_String;
  struct LINEITEMRecord;
  struct PARTRecord;
  
  struct PARTRecord_LINEITEMRecord {
  int P_PARTKEY;
  char* P_NAME;
  char* P_MFGR;
  char* P_BRAND;
  char* P_TYPE;
  int P_SIZE;
  char* P_CONTAINER;
  double P_RETAILPRICE;
  char* P_COMMENT;
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
  };
  
  


int x17494(char* x5962);

int x17496(char* x5967, char* x5968);

int x17502(void* x4951);

int x17505(void* x4954, void* x4955);
/* GLOBAL VARS */

struct timeval x2341;
int main(int argc, char** argv) {
  FILE* x2684 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x2685 = 0;
  int x2686 = x2685;
  int* x2687 = &x2686;
  int x2688 = fscanf(x2684, "%d", x2687);
  pclose(x2684);
  struct LINEITEMRecord** x3652 = (struct LINEITEMRecord**)malloc(x2686 * sizeof(struct LINEITEMRecord*));
  memset(x3652, 0, x2686 * sizeof(struct LINEITEMRecord*));
  int x2692 = O_RDONLY;
  int x2693 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x2692);
  struct stat x2694 = (struct stat){0};
  /* VAR */ struct stat x2695 = x2694;
  struct stat x2696 = x2695;
  struct stat* x2697 = &x2696;
  int x2698 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x2697);
  size_t x2699 = x2697->st_size;
  int x2700 = PROT_READ;
  int x2701 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x2699, x2700, x2701, x2693, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x2686);
    /* VAR */ int ite14787 = 0;
    if(x6) {
      char x16820 = *x3;
      int x16821 = x16820!=('\0');
      ite14787 = x16821;
    } else {
      
      ite14787 = 0;
    };
    int x13868 = ite14787;
    if (!(x13868)) break; 
    
    /* VAR */ int x2709 = 0;
    int x2710 = x2709;
    int* x2711 = &x2710;
    char* x2712 = strntoi_unchecked(x3, x2711);
    x3 = x2712;
    /* VAR */ int x2714 = 0;
    int x2715 = x2714;
    int* x2716 = &x2715;
    char* x2717 = strntoi_unchecked(x3, x2716);
    x3 = x2717;
    /* VAR */ int x2719 = 0;
    int x2720 = x2719;
    int* x2721 = &x2720;
    char* x2722 = strntoi_unchecked(x3, x2721);
    x3 = x2722;
    /* VAR */ int x2724 = 0;
    int x2725 = x2724;
    int* x2726 = &x2725;
    char* x2727 = strntoi_unchecked(x3, x2726);
    x3 = x2727;
    /* VAR */ double x2729 = 0.0;
    double x2730 = x2729;
    double* x2731 = &x2730;
    char* x2732 = strntod_unchecked(x3, x2731);
    x3 = x2732;
    /* VAR */ double x2734 = 0.0;
    double x2735 = x2734;
    double* x2736 = &x2735;
    char* x2737 = strntod_unchecked(x3, x2736);
    x3 = x2737;
    /* VAR */ double x2739 = 0.0;
    double x2740 = x2739;
    double* x2741 = &x2740;
    char* x2742 = strntod_unchecked(x3, x2741);
    x3 = x2742;
    /* VAR */ double x2744 = 0.0;
    double x2745 = x2744;
    double* x2746 = &x2745;
    char* x2747 = strntod_unchecked(x3, x2746);
    x3 = x2747;
    char x2749 = *x3;
    /* VAR */ char x2750 = x2749;
    x3 += 1;
    x3 += 1;
    char x2753 = x2750;
    char x2754 = *x3;
    /* VAR */ char x2755 = x2754;
    x3 += 1;
    x3 += 1;
    char x2758 = x2755;
    /* VAR */ int x2759 = 0;
    int x2760 = x2759;
    int* x2761 = &x2760;
    char* x2762 = strntoi_unchecked(x3, x2761);
    x3 = x2762;
    /* VAR */ int x2764 = 0;
    int x2765 = x2764;
    int* x2766 = &x2765;
    char* x2767 = strntoi_unchecked(x3, x2766);
    x3 = x2767;
    /* VAR */ int x2769 = 0;
    int x2770 = x2769;
    int* x2771 = &x2770;
    char* x2772 = strntoi_unchecked(x3, x2771);
    x3 = x2772;
    int x2774 = x2760*(10000);
    int x2775 = x2765*(100);
    int x2776 = x2774+(x2775);
    int x2777 = x2776+(x2770);
    /* VAR */ int x2778 = 0;
    int x2779 = x2778;
    int* x2780 = &x2779;
    char* x2781 = strntoi_unchecked(x3, x2780);
    x3 = x2781;
    /* VAR */ int x2783 = 0;
    int x2784 = x2783;
    int* x2785 = &x2784;
    char* x2786 = strntoi_unchecked(x3, x2785);
    x3 = x2786;
    /* VAR */ int x2788 = 0;
    int x2789 = x2788;
    int* x2790 = &x2789;
    char* x2791 = strntoi_unchecked(x3, x2790);
    x3 = x2791;
    int x2793 = x2779*(10000);
    int x2794 = x2784*(100);
    int x2795 = x2793+(x2794);
    int x2796 = x2795+(x2789);
    /* VAR */ int x2797 = 0;
    int x2798 = x2797;
    int* x2799 = &x2798;
    char* x2800 = strntoi_unchecked(x3, x2799);
    x3 = x2800;
    /* VAR */ int x2802 = 0;
    int x2803 = x2802;
    int* x2804 = &x2803;
    char* x2805 = strntoi_unchecked(x3, x2804);
    x3 = x2805;
    /* VAR */ int x2807 = 0;
    int x2808 = x2807;
    int* x2809 = &x2808;
    char* x2810 = strntoi_unchecked(x3, x2809);
    x3 = x2810;
    int x2812 = x2798*(10000);
    int x2813 = x2803*(100);
    int x2814 = x2812+(x2813);
    int x2815 = x2814+(x2808);
    char* x3778 = (char*)malloc(26 * sizeof(char));
    memset(x3778, 0, 26 * sizeof(char));
    /* VAR */ char* x2817 = x3;
    while(1) {
      
      char x2818 = *x3;
      int x2819 = x2818!=('|');
      /* VAR */ int ite14908 = 0;
      if(x2819) {
        char x16940 = *x3;
        int x16941 = x16940!=('\n');
        ite14908 = x16941;
      } else {
        
        ite14908 = 0;
      };
      int x13982 = ite14908;
      if (!(x13982)) break; 
      
      x3 += 1;
    };
    char* x2825 = x2817;
    int x2826 = x3 - x2825;
    char* x2827 = x2817;
    char* x2828 = strncpy(x3778, x2827, x2826);
    x3 += 1;
    char* x3796 = (char*)malloc(11 * sizeof(char));
    memset(x3796, 0, 11 * sizeof(char));
    /* VAR */ char* x2836 = x3;
    while(1) {
      
      char x2837 = *x3;
      int x2838 = x2837!=('|');
      /* VAR */ int ite14931 = 0;
      if(x2838) {
        char x16962 = *x3;
        int x16963 = x16962!=('\n');
        ite14931 = x16963;
      } else {
        
        ite14931 = 0;
      };
      int x13998 = ite14931;
      if (!(x13998)) break; 
      
      x3 += 1;
    };
    char* x2844 = x2836;
    int x2845 = x3 - x2844;
    char* x2846 = x2836;
    char* x2847 = strncpy(x3796, x2846, x2845);
    x3 += 1;
    char* x3814 = (char*)malloc(45 * sizeof(char));
    memset(x3814, 0, 45 * sizeof(char));
    /* VAR */ char* x2855 = x3;
    while(1) {
      
      char x2856 = *x3;
      int x2857 = x2856!=('|');
      /* VAR */ int ite14954 = 0;
      if(x2857) {
        char x16984 = *x3;
        int x16985 = x16984!=('\n');
        ite14954 = x16985;
      } else {
        
        ite14954 = 0;
      };
      int x14014 = ite14954;
      if (!(x14014)) break; 
      
      x3 += 1;
    };
    char* x2863 = x2855;
    int x2864 = x3 - x2863;
    char* x2865 = x2855;
    char* x2866 = strncpy(x3814, x2865, x2864);
    x3 += 1;
    struct LINEITEMRecord* x4304 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x4304, 0, 1 * sizeof(struct LINEITEMRecord));
    x4304->L_ORDERKEY = x2710; x4304->L_PARTKEY = x2715; x4304->L_SUPPKEY = x2720; x4304->L_LINENUMBER = x2725; x4304->L_QUANTITY = x2730; x4304->L_EXTENDEDPRICE = x2735; x4304->L_DISCOUNT = x2740; x4304->L_TAX = x2745; x4304->L_RETURNFLAG = x2753; x4304->L_LINESTATUS = x2758; x4304->L_SHIPDATE = x2777; x4304->L_COMMITDATE = x2796; x4304->L_RECEIPTDATE = x2815; x4304->L_SHIPINSTRUCT = x3778; x4304->L_SHIPMODE = x3796; x4304->L_COMMENT = x3814;
    int x47 = x4;
    *(x3652 + x47) = x4304;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x2879 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x2880 = 0;
  int x2881 = x2880;
  int* x2882 = &x2881;
  int x2883 = fscanf(x2879, "%d", x2882);
  pclose(x2879);
  struct PARTRecord** x3844 = (struct PARTRecord**)malloc(x2881 * sizeof(struct PARTRecord*));
  memset(x3844, 0, x2881 * sizeof(struct PARTRecord*));
  int x2887 = O_RDONLY;
  int x2888 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x2887);
  /* VAR */ struct stat x2889 = x2694;
  struct stat x2890 = x2889;
  struct stat* x2891 = &x2890;
  int x2892 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x2891);
  size_t x2893 = x2891->st_size;
  int x2894 = PROT_READ;
  int x2895 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x2893, x2894, x2895, x2888, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x2881);
    /* VAR */ int ite15001 = 0;
    if(x58) {
      char x17030 = *x55;
      int x17031 = x17030!=('\0');
      ite15001 = x17031;
    } else {
      
      ite15001 = 0;
    };
    int x14054 = ite15001;
    if (!(x14054)) break; 
    
    /* VAR */ int x2903 = 0;
    int x2904 = x2903;
    int* x2905 = &x2904;
    char* x2906 = strntoi_unchecked(x55, x2905);
    x55 = x2906;
    char* x3867 = (char*)malloc(56 * sizeof(char));
    memset(x3867, 0, 56 * sizeof(char));
    /* VAR */ char* x2909 = x55;
    while(1) {
      
      char x2910 = *x55;
      int x2911 = x2910!=('|');
      /* VAR */ int ite15020 = 0;
      if(x2911) {
        char x17048 = *x55;
        int x17049 = x17048!=('\n');
        ite15020 = x17049;
      } else {
        
        ite15020 = 0;
      };
      int x14066 = ite15020;
      if (!(x14066)) break; 
      
      x55 += 1;
    };
    char* x2917 = x2909;
    int x2918 = x55 - x2917;
    char* x2919 = x2909;
    char* x2920 = strncpy(x3867, x2919, x2918);
    x55 += 1;
    char* x3885 = (char*)malloc(26 * sizeof(char));
    memset(x3885, 0, 26 * sizeof(char));
    /* VAR */ char* x2928 = x55;
    while(1) {
      
      char x2929 = *x55;
      int x2930 = x2929!=('|');
      /* VAR */ int ite15043 = 0;
      if(x2930) {
        char x17070 = *x55;
        int x17071 = x17070!=('\n');
        ite15043 = x17071;
      } else {
        
        ite15043 = 0;
      };
      int x14082 = ite15043;
      if (!(x14082)) break; 
      
      x55 += 1;
    };
    char* x2936 = x2928;
    int x2937 = x55 - x2936;
    char* x2938 = x2928;
    char* x2939 = strncpy(x3885, x2938, x2937);
    x55 += 1;
    char* x3903 = (char*)malloc(11 * sizeof(char));
    memset(x3903, 0, 11 * sizeof(char));
    /* VAR */ char* x2947 = x55;
    while(1) {
      
      char x2948 = *x55;
      int x2949 = x2948!=('|');
      /* VAR */ int ite15066 = 0;
      if(x2949) {
        char x17092 = *x55;
        int x17093 = x17092!=('\n');
        ite15066 = x17093;
      } else {
        
        ite15066 = 0;
      };
      int x14098 = ite15066;
      if (!(x14098)) break; 
      
      x55 += 1;
    };
    char* x2955 = x2947;
    int x2956 = x55 - x2955;
    char* x2957 = x2947;
    char* x2958 = strncpy(x3903, x2957, x2956);
    x55 += 1;
    char* x3921 = (char*)malloc(26 * sizeof(char));
    memset(x3921, 0, 26 * sizeof(char));
    /* VAR */ char* x2966 = x55;
    while(1) {
      
      char x2967 = *x55;
      int x2968 = x2967!=('|');
      /* VAR */ int ite15089 = 0;
      if(x2968) {
        char x17114 = *x55;
        int x17115 = x17114!=('\n');
        ite15089 = x17115;
      } else {
        
        ite15089 = 0;
      };
      int x14114 = ite15089;
      if (!(x14114)) break; 
      
      x55 += 1;
    };
    char* x2974 = x2966;
    int x2975 = x55 - x2974;
    char* x2976 = x2966;
    char* x2977 = strncpy(x3921, x2976, x2975);
    x55 += 1;
    /* VAR */ int x2984 = 0;
    int x2985 = x2984;
    int* x2986 = &x2985;
    char* x2987 = strntoi_unchecked(x55, x2986);
    x55 = x2987;
    char* x3944 = (char*)malloc(11 * sizeof(char));
    memset(x3944, 0, 11 * sizeof(char));
    /* VAR */ char* x2990 = x55;
    while(1) {
      
      char x2991 = *x55;
      int x2992 = x2991!=('|');
      /* VAR */ int ite15117 = 0;
      if(x2992) {
        char x17141 = *x55;
        int x17142 = x17141!=('\n');
        ite15117 = x17142;
      } else {
        
        ite15117 = 0;
      };
      int x14135 = ite15117;
      if (!(x14135)) break; 
      
      x55 += 1;
    };
    char* x2998 = x2990;
    int x2999 = x55 - x2998;
    char* x3000 = x2990;
    char* x3001 = strncpy(x3944, x3000, x2999);
    x55 += 1;
    /* VAR */ double x3008 = 0.0;
    double x3009 = x3008;
    double* x3010 = &x3009;
    char* x3011 = strntod_unchecked(x55, x3010);
    x55 = x3011;
    char* x3967 = (char*)malloc(24 * sizeof(char));
    memset(x3967, 0, 24 * sizeof(char));
    /* VAR */ char* x3014 = x55;
    while(1) {
      
      char x3015 = *x55;
      int x3016 = x3015!=('|');
      /* VAR */ int ite15145 = 0;
      if(x3016) {
        char x17168 = *x55;
        int x17169 = x17168!=('\n');
        ite15145 = x17169;
      } else {
        
        ite15145 = 0;
      };
      int x14156 = ite15145;
      if (!(x14156)) break; 
      
      x55 += 1;
    };
    char* x3022 = x3014;
    int x3023 = x55 - x3022;
    char* x3024 = x3014;
    char* x3025 = strncpy(x3967, x3024, x3023);
    x55 += 1;
    struct PARTRecord* x4459 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x4459, 0, 1 * sizeof(struct PARTRecord));
    x4459->P_PARTKEY = x2904; x4459->P_NAME = x3867; x4459->P_MFGR = x3885; x4459->P_BRAND = x3903; x4459->P_TYPE = x3921; x4459->P_SIZE = x2985; x4459->P_CONTAINER = x3944; x4459->P_RETAILPRICE = x3009; x4459->P_COMMENT = x3967;
    int x111 = x56;
    *(x3844 + x111) = x4459;
    int x113 = x56;
    int x114 = x113+(1);
    x56 = x114;
  };
  int x118 = 0;
  for(; x118 < 1 ; x118 += 1) {
    
    GHashTable* x17501 = g_hash_table_new(x17494, x17496);
    void*** x17509 = (void***){x17502};
    int* x17510 = (int*){x17505};
    GHashTable* x17511 = g_hash_table_new(x17509, x17510);
    /* VAR */ struct timeval x17512 = x2341;
    struct timeval x17513 = x17512;
    /* VAR */ struct timeval x17514 = x2341;
    struct timeval x17515 = x17514;
    /* VAR */ struct timeval x17516 = x2341;
    struct timeval x17517 = x17516;
    struct timeval* x17518 = &x17515;
    gettimeofday(x17518, NULL);
    /* VAR */ int x17520 = 0;
    /* VAR */ int x17521 = 0;
    /* VAR */ int x17522 = 0;
    /* VAR */ int x17523 = 0;
    while(1) {
      
      int x17525 = x17520;
      int x17526 = x17525<(x2881);
      if (!(x17526)) break; 
      
      int x1431 = x17520;
      struct PARTRecord* x191 = x3844[x1431];
      int x193 = x191->P_PARTKEY;
      void* x4980 = (void*){x193};
      void* x4981 = (void*){x191};
      void* x4982 = g_hash_table_lookup(x17511, x4980);
      GList** x4983 = (GList**){x4982};
      GList** x4984 = NULL;
      int x4985 = x4983==(x4984);
      /* VAR */ GList** ite14513 = 0;
      if(x4985) {
        GList** x14514 = malloc(8);
        GList* x14515 = NULL;
        pointer_assign(x14514, x14515);
        ite14513 = x14514;
      } else {
        
        ite14513 = x4983;
      };
      GList** x4989 = ite14513;
      GList* x4990 = *(x4989);
      GList* x4991 = g_list_prepend(x4990, x4981);
      pointer_assign(x4989, x4991);
      void* x4993 = (void*){x4989};
      g_hash_table_insert(x17511, x4980, x4993);
      int x1436 = x17520;
      int x197 = x1436+(1);
      x17520 = x197;
    };
    while(1) {
      
      int x17554 = x17521;
      int x17555 = x17554<(x2686);
      if (!(x17555)) break; 
      
      int x1445 = x17521;
      struct LINEITEMRecord* x206 = x3652[x1445];
      int x208 = x206->L_SHIPDATE;
      int x209 = x208>=(19940301);
      /* VAR */ int ite15546 = 0;
      if(x209) {
        int x17562 = x208<(19940401);
        ite15546 = x17562;
      } else {
        
        ite15546 = 0;
      };
      int x14536 = ite15546;
      if(x14536) {
        int x212 = x206->L_PARTKEY;
        void* x5010 = (void*){x212};
        void* x5011 = g_hash_table_lookup(x17511, x5010);
        GList** x5012 = (GList**){x5011};
        int x9097 = x5012!=(NULL);
        if(x9097) {
          GList* x6101 = *(x5012);
          /* VAR */ GList* x6102 = x6101;
          while(1) {
            
            GList* x6103 = x6102;
            GList* x6104 = NULL;
            int x6105 = x6103!=(x6104);
            if (!(x6105)) break; 
            
            GList* x6106 = x6102;
            void* x6107 = g_list_nth_data(x6106, 0);
            struct PARTRecord* x6108 = (struct PARTRecord*){x6107};
            GList* x6109 = x6102;
            GList* x6110 = g_list_next(x6109);
            x6102 = x6110;
            int x6112 = x6108->P_PARTKEY;
            int x6113 = x6112==(x212);
            if(x6113) {
              char* x688 = x6108->P_NAME;
              char* x689 = x6108->P_MFGR;
              char* x690 = x6108->P_BRAND;
              char* x691 = x6108->P_TYPE;
              int x692 = x6108->P_SIZE;
              char* x693 = x6108->P_CONTAINER;
              double x694 = x6108->P_RETAILPRICE;
              char* x695 = x6108->P_COMMENT;
              int x696 = x206->L_ORDERKEY;
              int x697 = x206->L_SUPPKEY;
              int x698 = x206->L_LINENUMBER;
              double x699 = x206->L_QUANTITY;
              double x700 = x206->L_EXTENDEDPRICE;
              double x701 = x206->L_DISCOUNT;
              double x702 = x206->L_TAX;
              char x703 = x206->L_RETURNFLAG;
              char x704 = x206->L_LINESTATUS;
              int x705 = x206->L_COMMITDATE;
              int x706 = x206->L_RECEIPTDATE;
              char* x707 = x206->L_SHIPINSTRUCT;
              char* x708 = x206->L_SHIPMODE;
              char* x709 = x206->L_COMMENT;
              struct PARTRecord_LINEITEMRecord* x4538 = (struct PARTRecord_LINEITEMRecord*)malloc(1 * sizeof(struct PARTRecord_LINEITEMRecord));
              memset(x4538, 0, 1 * sizeof(struct PARTRecord_LINEITEMRecord));
              x4538->P_PARTKEY = x6112; x4538->P_NAME = x688; x4538->P_MFGR = x689; x4538->P_BRAND = x690; x4538->P_TYPE = x691; x4538->P_SIZE = x692; x4538->P_CONTAINER = x693; x4538->P_RETAILPRICE = x694; x4538->P_COMMENT = x695; x4538->L_ORDERKEY = x696; x4538->L_PARTKEY = x212; x4538->L_SUPPKEY = x697; x4538->L_LINENUMBER = x698; x4538->L_QUANTITY = x699; x4538->L_EXTENDEDPRICE = x700; x4538->L_DISCOUNT = x701; x4538->L_TAX = x702; x4538->L_RETURNFLAG = x703; x4538->L_LINESTATUS = x704; x4538->L_SHIPDATE = x208; x4538->L_COMMITDATE = x705; x4538->L_RECEIPTDATE = x706; x4538->L_SHIPINSTRUCT = x707; x4538->L_SHIPMODE = x708; x4538->L_COMMENT = x709;
              void* x6140 = g_hash_table_lookup(x17501, "Total");
              int x6072 = x6140==(NULL);
              /* VAR */ struct AGGRecord_String* ite14655 = 0;
              if(x6072) {
                double* x14656 = (double*)malloc(3 * sizeof(double));
                memset(x14656, 0, 3 * sizeof(double));
                struct AGGRecord_String* x14657 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
                memset(x14657, 0, 1 * sizeof(struct AGGRecord_String));
                x14657->key = "Total"; x14657->aggs = x14656;
                g_hash_table_insert(x17501, "Total", x14657);
                ite14655 = x14657;
              } else {
                
                ite14655 = x6140;
              };
              struct AGGRecord_String* x6082 = ite14655;
              double* x279 = x6082->aggs;
              double x293 = x279[0];
              char* x294 = x4538->P_TYPE;
              int x11631 = strlen("PROMO");
              int x11632 = strncmp(x294, "PROMO", x11631);
              int x11633 = x11632==(0);
              /* VAR */ double ite14672 = 0;
              if(x11633) {
                double x14673 = x4538->L_EXTENDEDPRICE;
                double x14674 = x4538->L_DISCOUNT;
                double x14675 = 1.0-(x14674);
                double x14676 = x14673*(x14675);
                double x14677 = x293+(x14676);
                ite14672 = x14677;
              } else {
                
                ite14672 = x293;
              };
              double x301 = ite14672;
              *x279 = x301;
              double x309 = x279[1];
              double x310 = x4538->L_EXTENDEDPRICE;
              double x311 = x4538->L_DISCOUNT;
              double x312 = 1.0-(x311);
              double x313 = x310*(x312);
              double x314 = x309+(x313);
              *(x279 + 1) = x314;
            };
          };
        };
      };
      int x1606 = x17521;
      int x326 = x1606+(1);
      x17521 = x326;
    };
    GList* x17739 = g_hash_table_get_keys(x17501);
    /* VAR */ GList* x17740 = x17739;
    int x17741 = g_hash_table_size(x17501);
    int x12904 = 0;
    for(; x12904 < x17741 ; x12904 += 1) {
      
      GList* x12905 = x17740;
      void* x12906 = g_list_nth_data(x12905, 0);
      GList* x12907 = g_list_next(x12905);
      x17740 = x12907;
      void* x12909 = g_hash_table_lookup(x17501, x12906);
      struct AGGRecord_String* x12911 = (struct AGGRecord_String*){x12909};
      double* x12912 = x12911->aggs;
      double x12913 = x12912[0];
      double x12914 = x12913*(100.0);
      double x12915 = x12912[1];
      double x12916 = x12914/(x12915);
      *(x12912 + 2) = x12916;
      if(0) {
        x17522 = 1;
      } else {
        
        double x349 = x12912[2];
        printf("%.4f\n", x349);
        int x1632 = x17523;
        int x352 = x1632+(1);
        x17523 = x352;
      };
    };
    int x17785 = x17523;
    printf("(%d rows)\n", x17785);
    struct timeval* x17787 = &x17517;
    gettimeofday(x17787, NULL);
    struct timeval* x17789 = &x17513;
    struct timeval* x17790 = &x17517;
    struct timeval* x17791 = &x17515;
    long x17792 = timeval_subtract(x17789, x17790, x17791);
    printf("Generated code run in %ld milliseconds.\n", x17792);
  };
}
/* ----------- FUNCTIONS ----------- */
int x17494(char* x5962) {
  return 0; 
}

int x17496(char* x5967, char* x5968) {
  int x10248 = strcmp(x5967, x5968);
  int x10249 = !(x10248);
  return x10249; 
}

int x17502(void* x4951) {
  int x4952 = g_direct_hash(x4951);
  return x4952; 
}

int x17505(void* x4954, void* x4955) {
  int x4956 = g_direct_equal(x4954, x4955);
  return x4956; 
}
