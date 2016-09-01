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
  
  


int x17507(struct Q1GRPRecord* x7816);

int x17514(struct Q1GRPRecord* x7821, struct Q1GRPRecord* x7822);

int x17832(struct Tuple2_Q1GRPRecord_Array_Double* x4966, struct Tuple2_Q1GRPRecord_Array_Double* x4967);

int x12516(void* x8008, void* x8009, void* x8010);
/* GLOBAL VARS */

struct timeval x5253;
int main(int argc, char** argv) {
  FILE* x5668 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x5669 = 0;
  int x5670 = x5669;
  int* x5671 = &x5670;
  int x5672 = fscanf(x5668, "%d", x5671);
  pclose(x5668);
  struct LINEITEMRecord** x6452 = (struct LINEITEMRecord**)malloc(x5670 * sizeof(struct LINEITEMRecord*));
  memset(x6452, 0, x5670 * sizeof(struct LINEITEMRecord*));
  int x5676 = O_RDONLY;
  int x5677 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x5676);
  struct stat x5678 = (struct stat){0};
  /* VAR */ struct stat x5679 = x5678;
  struct stat x5680 = x5679;
  struct stat* x5681 = &x5680;
  int x5682 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x5681);
  size_t x5683 = x5681->st_size;
  int x5684 = PROT_READ;
  int x5685 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x5683, x5684, x5685, x5677, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x5670);
    /* VAR */ int ite14701 = 0;
    if(x6) {
      char x16880 = *x3;
      int x16881 = x16880!=('\0');
      ite14701 = x16881;
    } else {
      
      ite14701 = 0;
    };
    int x13650 = ite14701;
    if (!(x13650)) break; 
    
    /* VAR */ int x5693 = 0;
    int x5694 = x5693;
    int* x5695 = &x5694;
    char* x5696 = strntoi_unchecked(x3, x5695);
    x3 = x5696;
    /* VAR */ int x5698 = 0;
    int x5699 = x5698;
    int* x5700 = &x5699;
    char* x5701 = strntoi_unchecked(x3, x5700);
    x3 = x5701;
    /* VAR */ int x5703 = 0;
    int x5704 = x5703;
    int* x5705 = &x5704;
    char* x5706 = strntoi_unchecked(x3, x5705);
    x3 = x5706;
    /* VAR */ int x5708 = 0;
    int x5709 = x5708;
    int* x5710 = &x5709;
    char* x5711 = strntoi_unchecked(x3, x5710);
    x3 = x5711;
    /* VAR */ double x5713 = 0.0;
    double x5714 = x5713;
    double* x5715 = &x5714;
    char* x5716 = strntod_unchecked(x3, x5715);
    x3 = x5716;
    /* VAR */ double x5718 = 0.0;
    double x5719 = x5718;
    double* x5720 = &x5719;
    char* x5721 = strntod_unchecked(x3, x5720);
    x3 = x5721;
    /* VAR */ double x5723 = 0.0;
    double x5724 = x5723;
    double* x5725 = &x5724;
    char* x5726 = strntod_unchecked(x3, x5725);
    x3 = x5726;
    /* VAR */ double x5728 = 0.0;
    double x5729 = x5728;
    double* x5730 = &x5729;
    char* x5731 = strntod_unchecked(x3, x5730);
    x3 = x5731;
    char x5733 = *x3;
    /* VAR */ char x5734 = x5733;
    x3 += 1;
    x3 += 1;
    char x5737 = x5734;
    char x5738 = *x3;
    /* VAR */ char x5739 = x5738;
    x3 += 1;
    x3 += 1;
    char x5742 = x5739;
    /* VAR */ int x5743 = 0;
    int x5744 = x5743;
    int* x5745 = &x5744;
    char* x5746 = strntoi_unchecked(x3, x5745);
    x3 = x5746;
    /* VAR */ int x5748 = 0;
    int x5749 = x5748;
    int* x5750 = &x5749;
    char* x5751 = strntoi_unchecked(x3, x5750);
    x3 = x5751;
    /* VAR */ int x5753 = 0;
    int x5754 = x5753;
    int* x5755 = &x5754;
    char* x5756 = strntoi_unchecked(x3, x5755);
    x3 = x5756;
    int x5758 = x5744*(10000);
    int x5759 = x5749*(100);
    int x5760 = x5758+(x5759);
    int x5761 = x5760+(x5754);
    /* VAR */ int x5762 = 0;
    int x5763 = x5762;
    int* x5764 = &x5763;
    char* x5765 = strntoi_unchecked(x3, x5764);
    x3 = x5765;
    /* VAR */ int x5767 = 0;
    int x5768 = x5767;
    int* x5769 = &x5768;
    char* x5770 = strntoi_unchecked(x3, x5769);
    x3 = x5770;
    /* VAR */ int x5772 = 0;
    int x5773 = x5772;
    int* x5774 = &x5773;
    char* x5775 = strntoi_unchecked(x3, x5774);
    x3 = x5775;
    /* VAR */ int x5781 = 0;
    int x5782 = x5781;
    int* x5783 = &x5782;
    char* x5784 = strntoi_unchecked(x3, x5783);
    x3 = x5784;
    /* VAR */ int x5786 = 0;
    int x5787 = x5786;
    int* x5788 = &x5787;
    char* x5789 = strntoi_unchecked(x3, x5788);
    x3 = x5789;
    /* VAR */ int x5791 = 0;
    int x5792 = x5791;
    int* x5793 = &x5792;
    char* x5794 = strntoi_unchecked(x3, x5793);
    x3 = x5794;
    char* x6578 = (char*)malloc(26 * sizeof(char));
    memset(x6578, 0, 26 * sizeof(char));
    /* VAR */ char* x5801 = x3;
    while(1) {
      
      char x5802 = *x3;
      int x5803 = x5802!=('|');
      /* VAR */ int ite14822 = 0;
      if(x5803) {
        char x17000 = *x3;
        int x17001 = x17000!=('\n');
        ite14822 = x17001;
      } else {
        
        ite14822 = 0;
      };
      int x13764 = ite14822;
      if (!(x13764)) break; 
      
      x3 += 1;
    };
    char* x5809 = x5801;
    int x5810 = x3 - x5809;
    char* x5811 = x5801;
    char* x5812 = strncpy(x6578, x5811, x5810);
    x3 += 1;
    char* x6596 = (char*)malloc(11 * sizeof(char));
    memset(x6596, 0, 11 * sizeof(char));
    /* VAR */ char* x5820 = x3;
    while(1) {
      
      char x5821 = *x3;
      int x5822 = x5821!=('|');
      /* VAR */ int ite14845 = 0;
      if(x5822) {
        char x17022 = *x3;
        int x17023 = x17022!=('\n');
        ite14845 = x17023;
      } else {
        
        ite14845 = 0;
      };
      int x13780 = ite14845;
      if (!(x13780)) break; 
      
      x3 += 1;
    };
    char* x5828 = x5820;
    int x5829 = x3 - x5828;
    char* x5830 = x5820;
    char* x5831 = strncpy(x6596, x5830, x5829);
    x3 += 1;
    char* x6614 = (char*)malloc(45 * sizeof(char));
    memset(x6614, 0, 45 * sizeof(char));
    /* VAR */ char* x5839 = x3;
    while(1) {
      
      char x5840 = *x3;
      int x5841 = x5840!=('|');
      /* VAR */ int ite14868 = 0;
      if(x5841) {
        char x17044 = *x3;
        int x17045 = x17044!=('\n');
        ite14868 = x17045;
      } else {
        
        ite14868 = 0;
      };
      int x13796 = ite14868;
      if (!(x13796)) break; 
      
      x3 += 1;
    };
    char* x5847 = x5839;
    int x5848 = x3 - x5847;
    char* x5849 = x5839;
    char* x5850 = strncpy(x6614, x5849, x5848);
    x3 += 1;
    struct LINEITEMRecord* x7018 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x7018, 0, 1 * sizeof(struct LINEITEMRecord));
    x7018->L_QUANTITY = x5714; x7018->L_EXTENDEDPRICE = x5719; x7018->L_DISCOUNT = x5724; x7018->L_TAX = x5729; x7018->L_RETURNFLAG = x5737; x7018->L_LINESTATUS = x5742; x7018->L_SHIPDATE = x5761;
    int x47 = x4;
    *(x6452 + x47) = x7018;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  int x55 = 0;
  for(; x55 < 1 ; x55 += 1) {
    
    int* x17504 = (int*)malloc(4 * sizeof(int));
    memset(x17504, 0, 4 * sizeof(int));
    struct LINEITEMRecord** x17505 = (struct LINEITEMRecord**)malloc(4 * sizeof(struct LINEITEMRecord*));
    memset(x17505, 0, 4 * sizeof(struct LINEITEMRecord*));
    struct Q1GRPRecord** x17506 = (struct Q1GRPRecord**)malloc(4 * sizeof(struct Q1GRPRecord*));
    memset(x17506, 0, 4 * sizeof(struct Q1GRPRecord*));
    GHashTable* x17529 = g_hash_table_new(x17507, x17514);
    /* VAR */ struct timeval x17530 = x5253;
    struct timeval x17531 = x17530;
    /* VAR */ struct timeval x17532 = x5253;
    struct timeval x17533 = x17532;
    /* VAR */ struct timeval x17534 = x5253;
    struct timeval x17535 = x17534;
    struct timeval* x17536 = &x17533;
    gettimeofday(x17536, NULL);
    /* VAR */ int x17538 = 0;
    int x12180 = 0;
    for(; x12180 < 4 ; x12180 += 1) {
      
      int x12181 = x5670/(4);
      int x12182 = x12181*(8);
      struct LINEITEMRecord** x12183 = (struct LINEITEMRecord**)malloc(x12182 * sizeof(struct LINEITEMRecord*));
      memset(x12183, 0, x12182 * sizeof(struct LINEITEMRecord*));
      *(x17505 + x12180) = x12183;
      *(x17504 + x12180) = 0;
    };
    int x12217 = 0;
    for(; x12217 < x5670 ; x12217 += 1) {
      
      struct LINEITEMRecord* x12218 = x6452[x12217];
      int x12219 = x12218->L_SHIPDATE;
      int x12220 = x12219<=(19980902);
      if(x12220) {
        char x2978 = x12218->L_RETURNFLAG;
        char x2979 = x12218->L_LINESTATUS;
        struct Q1GRPRecord* x7060 = (struct Q1GRPRecord*)malloc(1 * sizeof(struct Q1GRPRecord));
        memset(x7060, 0, 1 * sizeof(struct Q1GRPRecord));
        x7060->L_RETURNFLAG = x2978; x7060->L_LINESTATUS = x2979;
        void* x8291 = g_hash_table_lookup(x17529, x7060);
        int x7860 = x8291==(NULL);
        /* VAR */ int ite14340 = 0;
        if(x7860) {
          int x14341 = x17538;
          *(x17506 + x14341) = x7060;
          int x14343 = x17538;
          int x14344 = x14343+(1);
          x17538 = x14344;
          int x14346 = x17538;
          int x14347 = x14346-(1);
          int x14348 = x14347+(1);
          g_hash_table_insert(x17529, x7060, x14348);
          ite14340 = x14347;
        } else {
          
          int x14351 = x8291-(1);
          ite14340 = x14351;
        };
        int x7877 = ite14340;
        struct LINEITEMRecord** x2989 = x17505[x7877];
        int x2990 = x17504[x7877];
        *(x2989 + x2990) = x12218;
        int x2992 = x17504[x7877];
        int x2993 = x2992+(1);
        *(x17504 + x7877) = x2993;
      };
    };
    int x17621 = x17538;
    struct Tuple2_Q1GRPRecord_Array_Double** x17622 = (struct Tuple2_Q1GRPRecord_Array_Double**)malloc(x17621 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double*));
    memset(x17622, 0, x17621 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double*));
    int x12351 = 0;
    for(; x12351 < x17621 ; x12351 += 1) {
      
      struct LINEITEMRecord** x12352 = x17505[x12351];
      int x12353 = x17504[x12351];
      struct Q1GRPRecord* x12354 = x17506[x12351];
      /* VAR */ double x12355 = 0.0;
      /* VAR */ double x12356 = 0.0;
      /* VAR */ double x12357 = 0.0;
      /* VAR */ int x12358 = 0;
      /* VAR */ double x12359 = 0.0;
      /* VAR */ double x12360 = 0.0;
      int x12289 = 0;
      for(; x12289 < x12353 ; x12289 += 1) {
        
        struct LINEITEMRecord* x12290 = x12352[x12289];
        double x12291 = x12355;
        double x12292 = x12290->L_EXTENDEDPRICE;
        double x12293 = x12290->L_DISCOUNT;
        double x12294 = 1.0-(x12293);
        double x12295 = x12292*(x12294);
        double x12296 = x12290->L_TAX;
        double x12297 = 1.0+(x12296);
        double x12298 = x12295*(x12297);
        double x12299 = x12291+(x12298);
        x12355 = x12299;
        double x12301 = x12356;
        double x12302 = x12301+(x12293);
        x12356 = x12302;
        double x12304 = x12357;
        double x12305 = x12290->L_QUANTITY;
        double x12306 = x12304+(x12305);
        x12357 = x12306;
        int x12308 = x12358;
        int x12309 = x12308+(1);
        x12358 = x12309;
        double x12311 = x12359;
        double x12312 = x12311+(x12292);
        x12359 = x12312;
        double x12314 = x12360;
        double x12315 = x12314+(x12295);
        x12360 = x12315;
      };
      double x12418 = x12356;
      double x12419 = x12357;
      double x12420 = x12359;
      double x12421 = x12360;
      double x12422 = x12355;
      int x12423 = x12358;
      double x12425 = x12357;
      int x12426 = x12358;
      double x12428 = x12425/(x12426);
      double x12429 = x12359;
      int x12430 = x12358;
      double x12432 = x12429/(x12430);
      double x12433 = x12356;
      int x12434 = x12358;
      double x12436 = x12433/(x12434);
      double* x12437 = (double*)malloc(9 * sizeof(double));
      memset(x12437, 0, 9 * sizeof(double));
      *x12437 = x12418;
      *(x12437 + 1) = x12419;
      *(x12437 + 2) = x12420;
      *(x12437 + 3) = x12421;
      *(x12437 + 4) = x12422;
      *(x12437 + 5) = x12423;
      *(x12437 + 6) = x12428;
      *(x12437 + 7) = x12432;
      *(x12437 + 8) = x12436;
      struct Tuple2_Q1GRPRecord_Array_Double* x12447 = (struct Tuple2_Q1GRPRecord_Array_Double*)malloc(1 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double));
      memset(x12447, 0, 1 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double));
      x12447->_1 = x12354; x12447->_2 = x12437;
      *(x17622 + x12351) = x12447;
    };
    struct Tuple2_Q1GRPRecord_Array_Double** x17816 = (struct Tuple2_Q1GRPRecord_Array_Double**)malloc(x17621 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double*));
    memset(x17816, 0, x17621 * sizeof(struct Tuple2_Q1GRPRecord_Array_Double*));
    /* VAR */ int x17817 = 0;
    int* x17846 = &(x17832);
    GTree* x17847 = g_tree_new(x17846);
    int x12491 = 0;
    for(; x12491 < x17621 ; x12491 += 1) {
      
      struct Tuple2_Q1GRPRecord_Array_Double* x12492 = x17622[x12491];
      g_tree_insert(x17847, x12492, x12492);
      int x12494 = x17817;
      int x12495 = x12494+(1);
      x17817 = x12495;
    };
    int x17861 = g_tree_nnodes(x17847);
    int x12514 = 0;
    for(; x12514 < x17861 ; x12514 += 1) {
      
      void* x12515 = NULL;
      void** x12523 = &(x12515);
      g_tree_foreach(x17847, x12516, x12523);
      struct Tuple2_Q1GRPRecord_Array_Double* x12525 = (struct Tuple2_Q1GRPRecord_Array_Double*){x12515};
      int x12526 = g_tree_remove(x17847, x12525);
      *(x17816 + x12514) = x12525;
    };
    /* VAR */ int x17891 = 0;
    int x12549 = 0;
    for(; x12549 < x17621 ; x12549 += 1) {
      
      struct Tuple2_Q1GRPRecord_Array_Double* x12550 = x17816[x12549];
      struct Q1GRPRecord* x12551 = x12550->_1;
      char x12552 = x12551->L_RETURNFLAG;
      char x12553 = x12551->L_LINESTATUS;
      double* x12554 = x12550->_2;
      double x12555 = x12554[1];
      double x12556 = x12554[2];
      double x12557 = x12554[3];
      double x12558 = x12554[4];
      double x12559 = x12554[6];
      double x12560 = x12554[7];
      double x12561 = x12554[8];
      double x12562 = x12554[5];
      printf("%c|%c|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|%.0f\n", x12552, x12553, x12555, x12556, x12557, x12558, x12559, x12560, x12561, x12562);
      int x12564 = x17891;
      int x12565 = x12564+(1);
      x17891 = x12565;
    };
    int x17929 = x17891;
    printf("(%d rows)\n", x17929);
    struct timeval* x17931 = &x17535;
    gettimeofday(x17931, NULL);
    struct timeval* x17933 = &x17531;
    struct timeval* x17934 = &x17535;
    struct timeval* x17935 = &x17533;
    long x17936 = timeval_subtract(x17933, x17934, x17935);
    printf("Generated code run in %ld milliseconds.\n", x17936);
  };
}
/* ----------- FUNCTIONS ----------- */
int x17507(struct Q1GRPRecord* x7816) {
  char x9967 = x7816->L_RETURNFLAG;
  int x10406 = (int){x9967};
  char x9969 = x7816->L_LINESTATUS;
  int x10408 = (int){x9969};
  int x9971 = x10406+(x10408);
  return x9971; 
}

int x17514(struct Q1GRPRecord* x7821, struct Q1GRPRecord* x7822) {
  char x9975 = x7821->L_RETURNFLAG;
  char x9976 = x7822->L_RETURNFLAG;
  int x9977 = x9975==(x9976);
  char x9978 = x7821->L_LINESTATUS;
  char x9979 = x7822->L_LINESTATUS;
  int x9980 = x9978==(x9979);
  /* VAR */ int ite15352 = 0;
  if(x9977) {
    ite15352 = x9980;
  } else {
    
    ite15352 = 0;
  };
  int x14268 = ite15352;
  return x14268; 
}

int x17832(struct Tuple2_Q1GRPRecord_Array_Double* x4966, struct Tuple2_Q1GRPRecord_Array_Double* x4967) {
  struct Q1GRPRecord* x4968 = x4966->_1;
  char x3201 = x4968->L_RETURNFLAG;
  int x3202 = x3201*(128);
  char x3203 = x4968->L_LINESTATUS;
  int x3204 = x3202+(x3203);
  struct Q1GRPRecord* x4973 = x4967->_1;
  char x3206 = x4973->L_RETURNFLAG;
  int x3207 = x3206*(128);
  char x3208 = x4973->L_LINESTATUS;
  int x3209 = x3207+(x3208);
  int x3210 = x3204-(x3209);
  return x3210; 
}

int x12516(void* x8008, void* x8009, void* x8010) {
  struct Tuple2_Q1GRPRecord_Array_Double** x8011 = (struct Tuple2_Q1GRPRecord_Array_Double**){x8010};
  struct Tuple2_Q1GRPRecord_Array_Double* x8012 = (struct Tuple2_Q1GRPRecord_Array_Double*){x8009};
  pointer_assign(x8011, x8012);
  return 1; 
}
