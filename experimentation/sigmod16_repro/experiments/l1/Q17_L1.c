#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_String;
  struct LINEITEMRecord;
  struct WindowRecord_Int_Double;
  struct LINEITEMRecord_PARTRecord;
  struct PARTRecord;
  
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
  
  struct WindowRecord_Int_Double {
  int key;
  double wnd;
  };
  
  struct LINEITEMRecord_PARTRecord {
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
  
  


int x21881(char* x6097);

int x21883(char* x6102, char* x6103);

int x21889(void* x4908);

int x21892(void* x4911, void* x4912);

int x21899(void* x4918);

int x21902(void* x4921, void* x4922);
/* GLOBAL VARS */

struct timeval x2219;
int main(int argc, char** argv) {
  FILE* x2587 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x2588 = 0;
  int x2589 = x2588;
  int* x2590 = &x2589;
  int x2591 = fscanf(x2587, "%d", x2590);
  pclose(x2587);
  struct LINEITEMRecord** x3581 = (struct LINEITEMRecord**)malloc(x2589 * sizeof(struct LINEITEMRecord*));
  memset(x3581, 0, x2589 * sizeof(struct LINEITEMRecord*));
  int x2595 = O_RDONLY;
  int x2596 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x2595);
  struct stat x2597 = (struct stat){0};
  /* VAR */ struct stat x2598 = x2597;
  struct stat x2599 = x2598;
  struct stat* x2600 = &x2599;
  int x2601 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x2600);
  size_t x2602 = x2600->st_size;
  int x2603 = PROT_READ;
  int x2604 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x2602, x2603, x2604, x2596, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x2589);
    /* VAR */ int ite17854 = 0;
    if(x6) {
      char x20943 = *x3;
      int x20944 = x20943!=('\0');
      ite17854 = x20944;
    } else {
      
      ite17854 = 0;
    };
    int x16411 = ite17854;
    if (!(x16411)) break; 
    
    /* VAR */ int x2612 = 0;
    int x2613 = x2612;
    int* x2614 = &x2613;
    char* x2615 = strntoi_unchecked(x3, x2614);
    x3 = x2615;
    /* VAR */ int x2617 = 0;
    int x2618 = x2617;
    int* x2619 = &x2618;
    char* x2620 = strntoi_unchecked(x3, x2619);
    x3 = x2620;
    /* VAR */ int x2622 = 0;
    int x2623 = x2622;
    int* x2624 = &x2623;
    char* x2625 = strntoi_unchecked(x3, x2624);
    x3 = x2625;
    /* VAR */ int x2627 = 0;
    int x2628 = x2627;
    int* x2629 = &x2628;
    char* x2630 = strntoi_unchecked(x3, x2629);
    x3 = x2630;
    /* VAR */ double x2632 = 0.0;
    double x2633 = x2632;
    double* x2634 = &x2633;
    char* x2635 = strntod_unchecked(x3, x2634);
    x3 = x2635;
    /* VAR */ double x2637 = 0.0;
    double x2638 = x2637;
    double* x2639 = &x2638;
    char* x2640 = strntod_unchecked(x3, x2639);
    x3 = x2640;
    /* VAR */ double x2642 = 0.0;
    double x2643 = x2642;
    double* x2644 = &x2643;
    char* x2645 = strntod_unchecked(x3, x2644);
    x3 = x2645;
    /* VAR */ double x2647 = 0.0;
    double x2648 = x2647;
    double* x2649 = &x2648;
    char* x2650 = strntod_unchecked(x3, x2649);
    x3 = x2650;
    char x2652 = *x3;
    /* VAR */ char x2653 = x2652;
    x3 += 1;
    x3 += 1;
    char x2656 = x2653;
    char x2657 = *x3;
    /* VAR */ char x2658 = x2657;
    x3 += 1;
    x3 += 1;
    char x2661 = x2658;
    /* VAR */ int x2662 = 0;
    int x2663 = x2662;
    int* x2664 = &x2663;
    char* x2665 = strntoi_unchecked(x3, x2664);
    x3 = x2665;
    /* VAR */ int x2667 = 0;
    int x2668 = x2667;
    int* x2669 = &x2668;
    char* x2670 = strntoi_unchecked(x3, x2669);
    x3 = x2670;
    /* VAR */ int x2672 = 0;
    int x2673 = x2672;
    int* x2674 = &x2673;
    char* x2675 = strntoi_unchecked(x3, x2674);
    x3 = x2675;
    int x2677 = x2663*(10000);
    int x2678 = x2668*(100);
    int x2679 = x2677+(x2678);
    int x2680 = x2679+(x2673);
    /* VAR */ int x2681 = 0;
    int x2682 = x2681;
    int* x2683 = &x2682;
    char* x2684 = strntoi_unchecked(x3, x2683);
    x3 = x2684;
    /* VAR */ int x2686 = 0;
    int x2687 = x2686;
    int* x2688 = &x2687;
    char* x2689 = strntoi_unchecked(x3, x2688);
    x3 = x2689;
    /* VAR */ int x2691 = 0;
    int x2692 = x2691;
    int* x2693 = &x2692;
    char* x2694 = strntoi_unchecked(x3, x2693);
    x3 = x2694;
    int x2696 = x2682*(10000);
    int x2697 = x2687*(100);
    int x2698 = x2696+(x2697);
    int x2699 = x2698+(x2692);
    /* VAR */ int x2700 = 0;
    int x2701 = x2700;
    int* x2702 = &x2701;
    char* x2703 = strntoi_unchecked(x3, x2702);
    x3 = x2703;
    /* VAR */ int x2705 = 0;
    int x2706 = x2705;
    int* x2707 = &x2706;
    char* x2708 = strntoi_unchecked(x3, x2707);
    x3 = x2708;
    /* VAR */ int x2710 = 0;
    int x2711 = x2710;
    int* x2712 = &x2711;
    char* x2713 = strntoi_unchecked(x3, x2712);
    x3 = x2713;
    int x2715 = x2701*(10000);
    int x2716 = x2706*(100);
    int x2717 = x2715+(x2716);
    int x2718 = x2717+(x2711);
    char* x3707 = (char*)malloc(26 * sizeof(char));
    memset(x3707, 0, 26 * sizeof(char));
    /* VAR */ char* x2720 = x3;
    while(1) {
      
      char x2721 = *x3;
      int x2722 = x2721!=('|');
      /* VAR */ int ite17975 = 0;
      if(x2722) {
        char x21063 = *x3;
        int x21064 = x21063!=('\n');
        ite17975 = x21064;
      } else {
        
        ite17975 = 0;
      };
      int x16525 = ite17975;
      if (!(x16525)) break; 
      
      x3 += 1;
    };
    char* x2728 = x2720;
    int x2729 = x3 - x2728;
    char* x2730 = x2720;
    char* x2731 = strncpy(x3707, x2730, x2729);
    x3 += 1;
    char* x3725 = (char*)malloc(11 * sizeof(char));
    memset(x3725, 0, 11 * sizeof(char));
    /* VAR */ char* x2739 = x3;
    while(1) {
      
      char x2740 = *x3;
      int x2741 = x2740!=('|');
      /* VAR */ int ite17998 = 0;
      if(x2741) {
        char x21085 = *x3;
        int x21086 = x21085!=('\n');
        ite17998 = x21086;
      } else {
        
        ite17998 = 0;
      };
      int x16541 = ite17998;
      if (!(x16541)) break; 
      
      x3 += 1;
    };
    char* x2747 = x2739;
    int x2748 = x3 - x2747;
    char* x2749 = x2739;
    char* x2750 = strncpy(x3725, x2749, x2748);
    x3 += 1;
    char* x3743 = (char*)malloc(45 * sizeof(char));
    memset(x3743, 0, 45 * sizeof(char));
    /* VAR */ char* x2758 = x3;
    while(1) {
      
      char x2759 = *x3;
      int x2760 = x2759!=('|');
      /* VAR */ int ite18021 = 0;
      if(x2760) {
        char x21107 = *x3;
        int x21108 = x21107!=('\n');
        ite18021 = x21108;
      } else {
        
        ite18021 = 0;
      };
      int x16557 = ite18021;
      if (!(x16557)) break; 
      
      x3 += 1;
    };
    char* x2766 = x2758;
    int x2767 = x3 - x2766;
    char* x2768 = x2758;
    char* x2769 = strncpy(x3743, x2768, x2767);
    x3 += 1;
    struct LINEITEMRecord* x4246 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x4246, 0, 1 * sizeof(struct LINEITEMRecord));
    x4246->L_ORDERKEY = x2613; x4246->L_PARTKEY = x2618; x4246->L_SUPPKEY = x2623; x4246->L_LINENUMBER = x2628; x4246->L_QUANTITY = x2633; x4246->L_EXTENDEDPRICE = x2638; x4246->L_DISCOUNT = x2643; x4246->L_TAX = x2648; x4246->L_RETURNFLAG = x2656; x4246->L_LINESTATUS = x2661; x4246->L_SHIPDATE = x2680; x4246->L_COMMITDATE = x2699; x4246->L_RECEIPTDATE = x2718; x4246->L_SHIPINSTRUCT = x3707; x4246->L_SHIPMODE = x3725; x4246->L_COMMENT = x3743;
    int x47 = x4;
    *(x3581 + x47) = x4246;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x2782 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x2783 = 0;
  int x2784 = x2783;
  int* x2785 = &x2784;
  int x2786 = fscanf(x2782, "%d", x2785);
  pclose(x2782);
  struct PARTRecord** x3773 = (struct PARTRecord**)malloc(x2784 * sizeof(struct PARTRecord*));
  memset(x3773, 0, x2784 * sizeof(struct PARTRecord*));
  int x2790 = O_RDONLY;
  int x2791 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x2790);
  /* VAR */ struct stat x2792 = x2597;
  struct stat x2793 = x2792;
  struct stat* x2794 = &x2793;
  int x2795 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x2794);
  size_t x2796 = x2794->st_size;
  int x2797 = PROT_READ;
  int x2798 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x2796, x2797, x2798, x2791, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x2784);
    /* VAR */ int ite18068 = 0;
    if(x58) {
      char x21153 = *x55;
      int x21154 = x21153!=('\0');
      ite18068 = x21154;
    } else {
      
      ite18068 = 0;
    };
    int x16597 = ite18068;
    if (!(x16597)) break; 
    
    /* VAR */ int x2806 = 0;
    int x2807 = x2806;
    int* x2808 = &x2807;
    char* x2809 = strntoi_unchecked(x55, x2808);
    x55 = x2809;
    char* x3796 = (char*)malloc(56 * sizeof(char));
    memset(x3796, 0, 56 * sizeof(char));
    /* VAR */ char* x2812 = x55;
    while(1) {
      
      char x2813 = *x55;
      int x2814 = x2813!=('|');
      /* VAR */ int ite18087 = 0;
      if(x2814) {
        char x21171 = *x55;
        int x21172 = x21171!=('\n');
        ite18087 = x21172;
      } else {
        
        ite18087 = 0;
      };
      int x16609 = ite18087;
      if (!(x16609)) break; 
      
      x55 += 1;
    };
    char* x2820 = x2812;
    int x2821 = x55 - x2820;
    char* x2822 = x2812;
    char* x2823 = strncpy(x3796, x2822, x2821);
    x55 += 1;
    char* x3814 = (char*)malloc(26 * sizeof(char));
    memset(x3814, 0, 26 * sizeof(char));
    /* VAR */ char* x2831 = x55;
    while(1) {
      
      char x2832 = *x55;
      int x2833 = x2832!=('|');
      /* VAR */ int ite18110 = 0;
      if(x2833) {
        char x21193 = *x55;
        int x21194 = x21193!=('\n');
        ite18110 = x21194;
      } else {
        
        ite18110 = 0;
      };
      int x16625 = ite18110;
      if (!(x16625)) break; 
      
      x55 += 1;
    };
    char* x2839 = x2831;
    int x2840 = x55 - x2839;
    char* x2841 = x2831;
    char* x2842 = strncpy(x3814, x2841, x2840);
    x55 += 1;
    char* x3832 = (char*)malloc(11 * sizeof(char));
    memset(x3832, 0, 11 * sizeof(char));
    /* VAR */ char* x2850 = x55;
    while(1) {
      
      char x2851 = *x55;
      int x2852 = x2851!=('|');
      /* VAR */ int ite18133 = 0;
      if(x2852) {
        char x21215 = *x55;
        int x21216 = x21215!=('\n');
        ite18133 = x21216;
      } else {
        
        ite18133 = 0;
      };
      int x16641 = ite18133;
      if (!(x16641)) break; 
      
      x55 += 1;
    };
    char* x2858 = x2850;
    int x2859 = x55 - x2858;
    char* x2860 = x2850;
    char* x2861 = strncpy(x3832, x2860, x2859);
    x55 += 1;
    char* x3850 = (char*)malloc(26 * sizeof(char));
    memset(x3850, 0, 26 * sizeof(char));
    /* VAR */ char* x2869 = x55;
    while(1) {
      
      char x2870 = *x55;
      int x2871 = x2870!=('|');
      /* VAR */ int ite18156 = 0;
      if(x2871) {
        char x21237 = *x55;
        int x21238 = x21237!=('\n');
        ite18156 = x21238;
      } else {
        
        ite18156 = 0;
      };
      int x16657 = ite18156;
      if (!(x16657)) break; 
      
      x55 += 1;
    };
    char* x2877 = x2869;
    int x2878 = x55 - x2877;
    char* x2879 = x2869;
    char* x2880 = strncpy(x3850, x2879, x2878);
    x55 += 1;
    /* VAR */ int x2887 = 0;
    int x2888 = x2887;
    int* x2889 = &x2888;
    char* x2890 = strntoi_unchecked(x55, x2889);
    x55 = x2890;
    char* x3873 = (char*)malloc(11 * sizeof(char));
    memset(x3873, 0, 11 * sizeof(char));
    /* VAR */ char* x2893 = x55;
    while(1) {
      
      char x2894 = *x55;
      int x2895 = x2894!=('|');
      /* VAR */ int ite18184 = 0;
      if(x2895) {
        char x21264 = *x55;
        int x21265 = x21264!=('\n');
        ite18184 = x21265;
      } else {
        
        ite18184 = 0;
      };
      int x16678 = ite18184;
      if (!(x16678)) break; 
      
      x55 += 1;
    };
    char* x2901 = x2893;
    int x2902 = x55 - x2901;
    char* x2903 = x2893;
    char* x2904 = strncpy(x3873, x2903, x2902);
    x55 += 1;
    /* VAR */ double x2911 = 0.0;
    double x2912 = x2911;
    double* x2913 = &x2912;
    char* x2914 = strntod_unchecked(x55, x2913);
    x55 = x2914;
    char* x3896 = (char*)malloc(24 * sizeof(char));
    memset(x3896, 0, 24 * sizeof(char));
    /* VAR */ char* x2917 = x55;
    while(1) {
      
      char x2918 = *x55;
      int x2919 = x2918!=('|');
      /* VAR */ int ite18212 = 0;
      if(x2919) {
        char x21291 = *x55;
        int x21292 = x21291!=('\n');
        ite18212 = x21292;
      } else {
        
        ite18212 = 0;
      };
      int x16699 = ite18212;
      if (!(x16699)) break; 
      
      x55 += 1;
    };
    char* x2925 = x2917;
    int x2926 = x55 - x2925;
    char* x2927 = x2917;
    char* x2928 = strncpy(x3896, x2927, x2926);
    x55 += 1;
    struct PARTRecord* x4401 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x4401, 0, 1 * sizeof(struct PARTRecord));
    x4401->P_PARTKEY = x2807; x4401->P_NAME = x3796; x4401->P_MFGR = x3814; x4401->P_BRAND = x3832; x4401->P_TYPE = x3850; x4401->P_SIZE = x2888; x4401->P_CONTAINER = x3873; x4401->P_RETAILPRICE = x2912; x4401->P_COMMENT = x3896;
    int x111 = x56;
    *(x3773 + x111) = x4401;
    int x113 = x56;
    int x114 = x113+(1);
    x56 = x114;
  };
  int x118 = 0;
  for(; x118 < 1 ; x118 += 1) {
    
    GHashTable* x21888 = g_hash_table_new(x21881, x21883);
    void*** x21896 = (void***){x21889};
    int* x21897 = (int*){x21892};
    GHashTable* x21898 = g_hash_table_new(x21896, x21897);
    void*** x21906 = (void***){x21899};
    int* x21907 = (int*){x21902};
    GHashTable* x21908 = g_hash_table_new(x21906, x21907);
    /* VAR */ struct timeval x21909 = x2219;
    struct timeval x21910 = x21909;
    /* VAR */ struct timeval x21911 = x2219;
    struct timeval x21912 = x21911;
    /* VAR */ struct timeval x21913 = x2219;
    struct timeval x21914 = x21913;
    struct timeval* x21915 = &x21912;
    gettimeofday(x21915, NULL);
    /* VAR */ int x21917 = 0;
    /* VAR */ int x21918 = 0;
    /* VAR */ int x21919 = 0;
    /* VAR */ int x21920 = 0;
    while(1) {
      
      int x21922 = x21917;
      int x21923 = x21922<(x2589);
      if (!(x21923)) break; 
      
      int x1321 = x21917;
      struct LINEITEMRecord* x192 = x3581[x1321];
      int x194 = x192->L_PARTKEY;
      void* x4947 = (void*){x194};
      void* x4948 = (void*){x192};
      void* x4949 = g_hash_table_lookup(x21908, x4947);
      GList** x4950 = (GList**){x4949};
      GList** x4951 = NULL;
      int x4952 = x4950==(x4951);
      /* VAR */ GList** ite17328 = 0;
      if(x4952) {
        GList** x17329 = malloc(8);
        GList* x17330 = NULL;
        pointer_assign(x17329, x17330);
        ite17328 = x17329;
      } else {
        
        ite17328 = x4950;
      };
      GList** x4956 = ite17328;
      GList* x4957 = *(x4956);
      GList* x4958 = g_list_prepend(x4957, x4948);
      pointer_assign(x4956, x4958);
      void* x4960 = (void*){x4956};
      g_hash_table_insert(x21908, x4947, x4960);
      int x1326 = x21917;
      int x198 = x1326+(1);
      x21917 = x198;
    };
    while(1) {
      
      int x21951 = x21918;
      int x21952 = x21951<(x2784);
      if (!(x21952)) break; 
      
      int x1335 = x21918;
      struct PARTRecord* x207 = x3773[x1335];
      char* x209 = x207->P_CONTAINER;
      int x13062 = strcmp(x209, "MED BAG");
      int x13063 = x13062==(0);
      /* VAR */ int ite18888 = 0;
      if(x13063) {
        char* x21960 = x207->P_BRAND;
        int x21961 = strcmp(x21960, "Brand#15");
        int x21962 = x21961==(0);
        ite18888 = x21962;
      } else {
        
        ite18888 = 0;
      };
      int x17352 = ite18888;
      if(x17352) {
        int x214 = x207->P_PARTKEY;
        void* x4978 = (void*){x214};
        void* x4979 = g_hash_table_lookup(x21908, x4978);
        GList** x4980 = (GList**){x4979};
        int x10028 = x4980!=(NULL);
        if(x10028) {
          GList* x6233 = *(x4980);
          /* VAR */ GList* x6234 = x6233;
          while(1) {
            
            GList* x6235 = x6234;
            GList* x6236 = NULL;
            int x6237 = x6235!=(x6236);
            if (!(x6237)) break; 
            
            GList* x6238 = x6234;
            void* x6239 = g_list_nth_data(x6238, 0);
            struct LINEITEMRecord* x6240 = (struct LINEITEMRecord*){x6239};
            GList* x6241 = x6234;
            GList* x6242 = g_list_next(x6241);
            x6234 = x6242;
            int x6244 = x6240->L_PARTKEY;
            int x6245 = x6244==(x214);
            if(x6245) {
              int x611 = x6240->L_ORDERKEY;
              int x612 = x6240->L_SUPPKEY;
              int x613 = x6240->L_LINENUMBER;
              double x614 = x6240->L_QUANTITY;
              double x615 = x6240->L_EXTENDEDPRICE;
              double x616 = x6240->L_DISCOUNT;
              double x617 = x6240->L_TAX;
              char x618 = x6240->L_RETURNFLAG;
              char x619 = x6240->L_LINESTATUS;
              int x620 = x6240->L_SHIPDATE;
              int x621 = x6240->L_COMMITDATE;
              int x622 = x6240->L_RECEIPTDATE;
              char* x623 = x6240->L_SHIPINSTRUCT;
              char* x624 = x6240->L_SHIPMODE;
              char* x625 = x6240->L_COMMENT;
              char* x626 = x207->P_NAME;
              char* x627 = x207->P_MFGR;
              char* x628 = x207->P_BRAND;
              char* x629 = x207->P_TYPE;
              int x630 = x207->P_SIZE;
              double x631 = x207->P_RETAILPRICE;
              char* x632 = x207->P_COMMENT;
              struct LINEITEMRecord_PARTRecord* x4482 = (struct LINEITEMRecord_PARTRecord*)malloc(1 * sizeof(struct LINEITEMRecord_PARTRecord));
              memset(x4482, 0, 1 * sizeof(struct LINEITEMRecord_PARTRecord));
              x4482->L_ORDERKEY = x611; x4482->L_PARTKEY = x6244; x4482->L_SUPPKEY = x612; x4482->L_LINENUMBER = x613; x4482->L_QUANTITY = x614; x4482->L_EXTENDEDPRICE = x615; x4482->L_DISCOUNT = x616; x4482->L_TAX = x617; x4482->L_RETURNFLAG = x618; x4482->L_LINESTATUS = x619; x4482->L_SHIPDATE = x620; x4482->L_COMMITDATE = x621; x4482->L_RECEIPTDATE = x622; x4482->L_SHIPINSTRUCT = x623; x4482->L_SHIPMODE = x624; x4482->L_COMMENT = x625; x4482->P_PARTKEY = x214; x4482->P_NAME = x626; x4482->P_MFGR = x627; x4482->P_BRAND = x628; x4482->P_TYPE = x629; x4482->P_SIZE = x630; x4482->P_CONTAINER = x209; x4482->P_RETAILPRICE = x631; x4482->P_COMMENT = x632;
              int x235 = x4482->L_PARTKEY;
              void* x5016 = (void*){x235};
              void* x5017 = (void*){x4482};
              void* x5018 = g_hash_table_lookup(x21898, x5016);
              GList** x5019 = (GList**){x5018};
              GList** x5020 = NULL;
              int x5021 = x5019==(x5020);
              /* VAR */ GList** ite17459 = 0;
              if(x5021) {
                GList** x17460 = malloc(8);
                GList* x17461 = NULL;
                pointer_assign(x17460, x17461);
                ite17459 = x17460;
              } else {
                
                ite17459 = x5019;
              };
              GList** x5025 = ite17459;
              GList* x5026 = *(x5025);
              GList* x5027 = g_list_prepend(x5026, x5017);
              pointer_assign(x5025, x5027);
              void* x5029 = (void*){x5025};
              g_hash_table_insert(x21898, x5016, x5029);
            };
          };
        };
      };
      int x1413 = x21918;
      int x244 = x1413+(1);
      x21918 = x244;
    };
    GList* x22185 = g_hash_table_get_keys(x21898);
    /* VAR */ GList* x22186 = x22185;
    int x22187 = g_hash_table_size(x21898);
    int x14864 = 0;
    for(; x14864 < x22187 ; x14864 += 1) {
      
      GList* x14865 = x22186;
      void* x14866 = g_list_nth_data(x14865, 0);
      GList* x14867 = x22186;
      GList* x14868 = g_list_next(x14867);
      x22186 = x14868;
      void* x14870 = g_hash_table_lookup(x21898, x14866);
      GList** x14871 = (GList**){x14870};
      /* VAR */ double x14877 = 0.0;
      GList* x14878 = *(x14871);
      /* VAR */ GList* x14879 = x14878;
      while(1) {
        
        GList* x6401 = x14879;
        GList* x6402 = NULL;
        int x6403 = x6401!=(x6402);
        if (!(x6403)) break; 
        
        GList* x6404 = x14879;
        void* x6405 = g_list_nth_data(x6404, 0);
        struct LINEITEMRecord_PARTRecord* x6406 = (struct LINEITEMRecord_PARTRecord*){x6405};
        double x6407 = x14877;
        double x6408 = x6406->L_QUANTITY;
        double x6409 = x6407+(x6408);
        x14877 = x6409;
        GList* x6411 = x14879;
        GList* x6412 = g_list_next(x6411);
        x14879 = x6412;
      };
      double x14894 = x14877;
      GList* x14895 = *(x14871);
      int x14896 = g_list_length(x14895);
      double x14898 = x14894/(x14896);
      double x14899 = 0.2*(x14898);
      /* VAR */ double x14908 = 0.0;
      GList* x14909 = *(x14871);
      /* VAR */ GList* x14910 = x14909;
      while(1) {
        
        GList* x6432 = x14910;
        GList* x6433 = NULL;
        int x6434 = x6432!=(x6433);
        if (!(x6434)) break; 
        
        GList* x6435 = x14910;
        void* x6436 = g_list_nth_data(x6435, 0);
        struct LINEITEMRecord_PARTRecord* x6437 = (struct LINEITEMRecord_PARTRecord*){x6436};
        double x6438 = x14908;
        double x6439 = x6437->L_QUANTITY;
        int x6440 = x6439<(x14899);
        /* VAR */ double ite17737 = 0;
        if(x6440) {
          double x17738 = x6437->L_EXTENDEDPRICE;
          double x17739 = x6438+(x17738);
          ite17737 = x17739;
        } else {
          
          ite17737 = x6438;
        };
        double x6441 = ite17737;
        x14908 = x6441;
        GList* x6445 = x14910;
        GList* x6446 = g_list_next(x6445);
        x14910 = x6446;
      };
      double x14928 = x14908;
      double x14929 = x14928/(7.0);
      GList* x14930 = *(x14871);
      void* x14931 = g_list_nth_data(x14930, 0);
      struct LINEITEMRecord_PARTRecord* x14932 = (struct LINEITEMRecord_PARTRecord*){x14931};
      int x14933 = x14932->L_PARTKEY;
      struct WindowRecord_Int_Double* x14934 = (struct WindowRecord_Int_Double*)malloc(1 * sizeof(struct WindowRecord_Int_Double));
      memset(x14934, 0, 1 * sizeof(struct WindowRecord_Int_Double));
      x14934->key = x14933; x14934->wnd = x14929;
      void* x14937 = g_hash_table_lookup(x21888, "Total");
      int x14938 = x14937==(NULL);
      /* VAR */ struct AGGRecord_String* ite17760 = 0;
      if(x14938) {
        double* x17761 = (double*)malloc(1 * sizeof(double));
        memset(x17761, 0, 1 * sizeof(double));
        struct AGGRecord_String* x17762 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
        memset(x17762, 0, 1 * sizeof(struct AGGRecord_String));
        x17762->key = "Total"; x17762->aggs = x17761;
        g_hash_table_insert(x21888, "Total", x17762);
        ite17760 = x17762;
      } else {
        
        ite17760 = x14937;
      };
      struct AGGRecord_String* x14939 = ite17760;
      double* x14945 = x14939->aggs;
      double x14946 = x14945[0];
      double x14947 = x14934->wnd;
      double x14948 = x14946+(x14947);
      *x14945 = x14948;
    };
    GList* x22400 = g_hash_table_get_keys(x21888);
    /* VAR */ GList* x22401 = x22400;
    int x22402 = g_hash_table_size(x21888);
    int x14988 = 0;
    for(; x14988 < x22402 ; x14988 += 1) {
      
      GList* x14989 = x22401;
      void* x14990 = g_list_nth_data(x14989, 0);
      GList* x14991 = g_list_next(x14989);
      x22401 = x14991;
      void* x14993 = g_hash_table_lookup(x21888, x14990);
      struct AGGRecord_String* x14995 = (struct AGGRecord_String*){x14993};
      if(0) {
        x21919 = 1;
      } else {
        
        double* x310 = x14995->aggs;
        double x311 = x310[0];
        printf("%.6f\n", x311);
        int x1481 = x21920;
        int x314 = x1481+(1);
        x21920 = x314;
      };
    };
    int x22436 = x21920;
    printf("(%d rows)\n", x22436);
    struct timeval* x22438 = &x21914;
    gettimeofday(x22438, NULL);
    struct timeval* x22440 = &x21910;
    struct timeval* x22441 = &x21914;
    struct timeval* x22442 = &x21912;
    long x22443 = timeval_subtract(x22440, x22441, x22442);
    printf("Generated code run in %ld milliseconds.\n", x22443);
  };
}
/* ----------- FUNCTIONS ----------- */
int x21881(char* x6097) {
  return 0; 
}

int x21883(char* x6102, char* x6103) {
  int x11478 = strcmp(x6102, x6103);
  int x11479 = !(x11478);
  return x11479; 
}

int x21889(void* x4908) {
  int x4909 = g_direct_hash(x4908);
  return x4909; 
}

int x21892(void* x4911, void* x4912) {
  int x4913 = g_direct_equal(x4911, x4912);
  return x4913; 
}

int x21899(void* x4918) {
  int x4919 = g_direct_hash(x4918);
  return x4919; 
}

int x21902(void* x4921, void* x4922) {
  int x4923 = g_direct_equal(x4921, x4922);
  return x4923; 
}
