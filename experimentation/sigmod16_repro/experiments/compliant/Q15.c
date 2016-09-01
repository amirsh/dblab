#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_String;
  struct LINEITEMRecord;
  struct AGGRecord_Int;
  struct SUPPLIERRecord;
  
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
  
  struct AGGRecord_Int {
  int key;
  double* aggs;
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
  
  


int x17382(void* x5779);

int x17385(void* x5782, void* x5783);

int x17397(int x6802);

int x17399(int x6807, int x6808);
/* GLOBAL VARS */

struct timeval x3197;
int main(int argc, char** argv) {
  FILE* x3573 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x3574 = 0;
  int x3575 = x3574;
  int* x3576 = &x3575;
  int x3577 = fscanf(x3573, "%d", x3576);
  pclose(x3573);
  struct LINEITEMRecord* x4515 = (struct LINEITEMRecord*)malloc(x3575 * sizeof(struct LINEITEMRecord));
  memset(x4515, 0, x3575 * sizeof(struct LINEITEMRecord));
  int x3581 = O_RDONLY;
  int x3582 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x3581);
  struct stat x3583 = (struct stat){0};
  /* VAR */ struct stat x3584 = x3583;
  struct stat x3585 = x3584;
  struct stat* x3586 = &x3585;
  int x3587 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x3586);
  size_t x3588 = x3586->st_size;
  int x3589 = PROT_READ;
  int x3590 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x3588, x3589, x3590, x3582, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x3575);
    /* VAR */ int ite14919 = 0;
    if(x6) {
      char x16776 = *x3;
      int x16777 = x16776!=('\0');
      ite14919 = x16777;
    } else {
      
      ite14919 = 0;
    };
    int x14126 = ite14919;
    if (!(x14126)) break; 
    
    /* VAR */ int x3598 = 0;
    int x3599 = x3598;
    int* x3600 = &x3599;
    char* x3601 = strntoi_unchecked(x3, x3600);
    x3 = x3601;
    /* VAR */ int x3603 = 0;
    int x3604 = x3603;
    int* x3605 = &x3604;
    char* x3606 = strntoi_unchecked(x3, x3605);
    x3 = x3606;
    /* VAR */ int x3608 = 0;
    int x3609 = x3608;
    int* x3610 = &x3609;
    char* x3611 = strntoi_unchecked(x3, x3610);
    x3 = x3611;
    /* VAR */ int x3613 = 0;
    int x3614 = x3613;
    int* x3615 = &x3614;
    char* x3616 = strntoi_unchecked(x3, x3615);
    x3 = x3616;
    /* VAR */ double x3618 = 0.0;
    double x3619 = x3618;
    double* x3620 = &x3619;
    char* x3621 = strntod_unchecked(x3, x3620);
    x3 = x3621;
    /* VAR */ double x3623 = 0.0;
    double x3624 = x3623;
    double* x3625 = &x3624;
    char* x3626 = strntod_unchecked(x3, x3625);
    x3 = x3626;
    /* VAR */ double x3628 = 0.0;
    double x3629 = x3628;
    double* x3630 = &x3629;
    char* x3631 = strntod_unchecked(x3, x3630);
    x3 = x3631;
    /* VAR */ double x3633 = 0.0;
    double x3634 = x3633;
    double* x3635 = &x3634;
    char* x3636 = strntod_unchecked(x3, x3635);
    x3 = x3636;
    char x3638 = *x3;
    /* VAR */ char x3639 = x3638;
    x3 += 1;
    x3 += 1;
    char x3642 = x3639;
    char x3643 = *x3;
    /* VAR */ char x3644 = x3643;
    x3 += 1;
    x3 += 1;
    char x3647 = x3644;
    /* VAR */ int x3648 = 0;
    int x3649 = x3648;
    int* x3650 = &x3649;
    char* x3651 = strntoi_unchecked(x3, x3650);
    x3 = x3651;
    /* VAR */ int x3653 = 0;
    int x3654 = x3653;
    int* x3655 = &x3654;
    char* x3656 = strntoi_unchecked(x3, x3655);
    x3 = x3656;
    /* VAR */ int x3658 = 0;
    int x3659 = x3658;
    int* x3660 = &x3659;
    char* x3661 = strntoi_unchecked(x3, x3660);
    x3 = x3661;
    int x3663 = x3649*(10000);
    int x3664 = x3654*(100);
    int x3665 = x3663+(x3664);
    int x3666 = x3665+(x3659);
    /* VAR */ int x3667 = 0;
    int x3668 = x3667;
    int* x3669 = &x3668;
    char* x3670 = strntoi_unchecked(x3, x3669);
    x3 = x3670;
    /* VAR */ int x3672 = 0;
    int x3673 = x3672;
    int* x3674 = &x3673;
    char* x3675 = strntoi_unchecked(x3, x3674);
    x3 = x3675;
    /* VAR */ int x3677 = 0;
    int x3678 = x3677;
    int* x3679 = &x3678;
    char* x3680 = strntoi_unchecked(x3, x3679);
    x3 = x3680;
    int x3682 = x3668*(10000);
    int x3683 = x3673*(100);
    int x3684 = x3682+(x3683);
    int x3685 = x3684+(x3678);
    /* VAR */ int x3686 = 0;
    int x3687 = x3686;
    int* x3688 = &x3687;
    char* x3689 = strntoi_unchecked(x3, x3688);
    x3 = x3689;
    /* VAR */ int x3691 = 0;
    int x3692 = x3691;
    int* x3693 = &x3692;
    char* x3694 = strntoi_unchecked(x3, x3693);
    x3 = x3694;
    /* VAR */ int x3696 = 0;
    int x3697 = x3696;
    int* x3698 = &x3697;
    char* x3699 = strntoi_unchecked(x3, x3698);
    x3 = x3699;
    int x3701 = x3687*(10000);
    int x3702 = x3692*(100);
    int x3703 = x3701+(x3702);
    int x3704 = x3703+(x3697);
    char* x4641 = (char*)malloc(26 * sizeof(char));
    memset(x4641, 0, 26 * sizeof(char));
    /* VAR */ char* x3706 = x3;
    while(1) {
      
      char x3707 = *x3;
      int x3708 = x3707!=('|');
      /* VAR */ int ite15040 = 0;
      if(x3708) {
        char x16896 = *x3;
        int x16897 = x16896!=('\n');
        ite15040 = x16897;
      } else {
        
        ite15040 = 0;
      };
      int x14240 = ite15040;
      if (!(x14240)) break; 
      
      x3 += 1;
    };
    char* x3714 = x3706;
    int x3715 = x3 - x3714;
    char* x3716 = x3706;
    char* x3717 = strncpy(x4641, x3716, x3715);
    x3 += 1;
    char* x4659 = (char*)malloc(11 * sizeof(char));
    memset(x4659, 0, 11 * sizeof(char));
    /* VAR */ char* x3725 = x3;
    while(1) {
      
      char x3726 = *x3;
      int x3727 = x3726!=('|');
      /* VAR */ int ite15063 = 0;
      if(x3727) {
        char x16918 = *x3;
        int x16919 = x16918!=('\n');
        ite15063 = x16919;
      } else {
        
        ite15063 = 0;
      };
      int x14256 = ite15063;
      if (!(x14256)) break; 
      
      x3 += 1;
    };
    char* x3733 = x3725;
    int x3734 = x3 - x3733;
    char* x3735 = x3725;
    char* x3736 = strncpy(x4659, x3735, x3734);
    x3 += 1;
    char* x4677 = (char*)malloc(45 * sizeof(char));
    memset(x4677, 0, 45 * sizeof(char));
    /* VAR */ char* x3744 = x3;
    while(1) {
      
      char x3745 = *x3;
      int x3746 = x3745!=('|');
      /* VAR */ int ite15086 = 0;
      if(x3746) {
        char x16940 = *x3;
        int x16941 = x16940!=('\n');
        ite15086 = x16941;
      } else {
        
        ite15086 = 0;
      };
      int x14272 = ite15086;
      if (!(x14272)) break; 
      
      x3 += 1;
    };
    char* x3752 = x3744;
    int x3753 = x3 - x3752;
    char* x3754 = x3744;
    char* x3755 = strncpy(x4677, x3754, x3753);
    x3 += 1;
    struct LINEITEMRecord* x5165 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x5165, 0, 1 * sizeof(struct LINEITEMRecord));
    x5165->L_ORDERKEY = x3599; x5165->L_PARTKEY = x3604; x5165->L_SUPPKEY = x3609; x5165->L_LINENUMBER = x3614; x5165->L_QUANTITY = x3619; x5165->L_EXTENDEDPRICE = x3624; x5165->L_DISCOUNT = x3629; x5165->L_TAX = x3634; x5165->L_RETURNFLAG = x3642; x5165->L_LINESTATUS = x3647; x5165->L_SHIPDATE = x3666; x5165->L_COMMITDATE = x3685; x5165->L_RECEIPTDATE = x3704; x5165->L_SHIPINSTRUCT = x4641; x5165->L_SHIPMODE = x4659; x5165->L_COMMENT = x4677;
    int x47 = x4;
    struct LINEITEMRecord x4697 = *x5165;
    *(x4515 + x47) = x4697;
    struct LINEITEMRecord* x4699 = &(x4515[x47]);
    x5165 = x4699;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x3768 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x3769 = 0;
  int x3770 = x3769;
  int* x3771 = &x3770;
  int x3772 = fscanf(x3768, "%d", x3771);
  pclose(x3768);
  struct SUPPLIERRecord* x4710 = (struct SUPPLIERRecord*)malloc(x3770 * sizeof(struct SUPPLIERRecord));
  memset(x4710, 0, x3770 * sizeof(struct SUPPLIERRecord));
  int x3776 = O_RDONLY;
  int x3777 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x3776);
  /* VAR */ struct stat x3778 = x3583;
  struct stat x3779 = x3778;
  struct stat* x3780 = &x3779;
  int x3781 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x3780);
  size_t x3782 = x3780->st_size;
  int x3783 = PROT_READ;
  int x3784 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x3782, x3783, x3784, x3777, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x3770);
    /* VAR */ int ite15136 = 0;
    if(x58) {
      char x16989 = *x55;
      int x16990 = x16989!=('\0');
      ite15136 = x16990;
    } else {
      
      ite15136 = 0;
    };
    int x14315 = ite15136;
    if (!(x14315)) break; 
    
    /* VAR */ int x3792 = 0;
    int x3793 = x3792;
    int* x3794 = &x3793;
    char* x3795 = strntoi_unchecked(x55, x3794);
    x55 = x3795;
    char* x4733 = (char*)malloc(26 * sizeof(char));
    memset(x4733, 0, 26 * sizeof(char));
    /* VAR */ char* x3798 = x55;
    while(1) {
      
      char x3799 = *x55;
      int x3800 = x3799!=('|');
      /* VAR */ int ite15155 = 0;
      if(x3800) {
        char x17007 = *x55;
        int x17008 = x17007!=('\n');
        ite15155 = x17008;
      } else {
        
        ite15155 = 0;
      };
      int x14327 = ite15155;
      if (!(x14327)) break; 
      
      x55 += 1;
    };
    char* x3806 = x3798;
    int x3807 = x55 - x3806;
    char* x3808 = x3798;
    char* x3809 = strncpy(x4733, x3808, x3807);
    x55 += 1;
    char* x4751 = (char*)malloc(41 * sizeof(char));
    memset(x4751, 0, 41 * sizeof(char));
    /* VAR */ char* x3817 = x55;
    while(1) {
      
      char x3818 = *x55;
      int x3819 = x3818!=('|');
      /* VAR */ int ite15178 = 0;
      if(x3819) {
        char x17029 = *x55;
        int x17030 = x17029!=('\n');
        ite15178 = x17030;
      } else {
        
        ite15178 = 0;
      };
      int x14343 = ite15178;
      if (!(x14343)) break; 
      
      x55 += 1;
    };
    char* x3825 = x3817;
    int x3826 = x55 - x3825;
    char* x3827 = x3817;
    char* x3828 = strncpy(x4751, x3827, x3826);
    x55 += 1;
    /* VAR */ int x3835 = 0;
    int x3836 = x3835;
    int* x3837 = &x3836;
    char* x3838 = strntoi_unchecked(x55, x3837);
    x55 = x3838;
    char* x4774 = (char*)malloc(16 * sizeof(char));
    memset(x4774, 0, 16 * sizeof(char));
    /* VAR */ char* x3841 = x55;
    while(1) {
      
      char x3842 = *x55;
      int x3843 = x3842!=('|');
      /* VAR */ int ite15206 = 0;
      if(x3843) {
        char x17056 = *x55;
        int x17057 = x17056!=('\n');
        ite15206 = x17057;
      } else {
        
        ite15206 = 0;
      };
      int x14364 = ite15206;
      if (!(x14364)) break; 
      
      x55 += 1;
    };
    char* x3849 = x3841;
    int x3850 = x55 - x3849;
    char* x3851 = x3841;
    char* x3852 = strncpy(x4774, x3851, x3850);
    x55 += 1;
    /* VAR */ double x3859 = 0.0;
    double x3860 = x3859;
    double* x3861 = &x3860;
    char* x3862 = strntod_unchecked(x55, x3861);
    x55 = x3862;
    char* x4797 = (char*)malloc(102 * sizeof(char));
    memset(x4797, 0, 102 * sizeof(char));
    /* VAR */ char* x3865 = x55;
    while(1) {
      
      char x3866 = *x55;
      int x3867 = x3866!=('|');
      /* VAR */ int ite15234 = 0;
      if(x3867) {
        char x17083 = *x55;
        int x17084 = x17083!=('\n');
        ite15234 = x17084;
      } else {
        
        ite15234 = 0;
      };
      int x14385 = ite15234;
      if (!(x14385)) break; 
      
      x55 += 1;
    };
    char* x3873 = x3865;
    int x3874 = x55 - x3873;
    char* x3875 = x3865;
    char* x3876 = strncpy(x4797, x3875, x3874);
    x55 += 1;
    struct SUPPLIERRecord* x5287 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x5287, 0, 1 * sizeof(struct SUPPLIERRecord));
    x5287->S_SUPPKEY = x3793; x5287->S_NAME = x4733; x5287->S_ADDRESS = x4751; x5287->S_NATIONKEY = x3836; x5287->S_PHONE = x4774; x5287->S_ACCTBAL = x3860; x5287->S_COMMENT = x4797;
    int x97 = x56;
    struct SUPPLIERRecord x4817 = *x5287;
    *(x4710 + x97) = x4817;
    struct SUPPLIERRecord* x4819 = &(x4710[x97]);
    x5287 = x4819;
    int x99 = x56;
    int x100 = x99+(1);
    x56 = x100;
  };
  int x104 = 0;
  for(; x104 < 1 ; x104 += 1) {
    
    void*** x17389 = (void***){x17382};
    int* x17390 = (int*){x17385};
    GHashTable* x17391 = g_hash_table_new(x17389, x17390);
    double* x17392 = (double*)malloc(1 * sizeof(double));
    memset(x17392, 0, 1 * sizeof(double));
    struct AGGRecord_String* x17393 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x17393, 0, 1 * sizeof(struct AGGRecord_String));
    x17393->key = "MAXREVENUE"; x17393->aggs = x17392;
    struct AGGRecord_Int* x17396 = (struct AGGRecord_Int*)malloc(48000000 * sizeof(struct AGGRecord_Int));
    memset(x17396, 0, 48000000 * sizeof(struct AGGRecord_Int));
    GHashTable* x17403 = g_hash_table_new(x17397, x17399);
    /* VAR */ struct timeval x17404 = x3197;
    struct timeval x17405 = x17404;
    /* VAR */ struct timeval x17406 = x3197;
    struct timeval x17407 = x17406;
    /* VAR */ struct timeval x17408 = x3197;
    struct timeval x17409 = x17408;
    struct timeval* x17410 = &x17407;
    gettimeofday(x17410, NULL);
    /* VAR */ int x17412 = 0;
    /* VAR */ int x17413 = 0;
    /* VAR */ struct AGGRecord_String* x17414 = NULL;
    while(1) {
      
      int x17416 = x17412;
      int x17417 = x17416<(x3575);
      if (!(x17417)) break; 
      
      int x1638 = x17412;
      struct LINEITEMRecord* x150 = &(x4515[x1638]);
      int x152 = x150->L_SHIPDATE;
      int x153 = x152>=(19930901);
      /* VAR */ int ite15588 = 0;
      if(x153) {
        int x17424 = x152<(19931201);
        ite15588 = x17424;
      } else {
        
        ite15588 = 0;
      };
      int x14694 = ite15588;
      if(x14694) {
        int x156 = x150->L_SUPPKEY;
        void* x7417 = g_hash_table_lookup(x17403, x156);
        int x6840 = x7417==(NULL);
        /* VAR */ struct AGGRecord_Int* ite14700 = 0;
        if(x6840) {
          double* x14701 = (double*)malloc(1 * sizeof(double));
          memset(x14701, 0, 1 * sizeof(double));
          struct AGGRecord_Int* x14702 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
          memset(x14702, 0, 1 * sizeof(struct AGGRecord_Int));
          x14702->key = x156; x14702->aggs = x14701;
          g_hash_table_insert(x17403, x156, x14702);
          ite14700 = x14702;
        } else {
          
          ite14700 = x7417;
        };
        struct AGGRecord_Int* x6850 = ite14700;
        double* x161 = x6850->aggs;
        double x175 = x161[0];
        double x176 = x150->L_EXTENDEDPRICE;
        double x177 = x150->L_DISCOUNT;
        double x178 = 1.0-(x177);
        double x179 = x176*(x178);
        double x180 = x175+(x179);
        *x161 = x180;
      };
      int x1675 = x17412;
      int x188 = x1675+(1);
      x17412 = x188;
    };
    GList* x17466 = g_hash_table_get_keys(x17403);
    /* VAR */ GList* x17467 = x17466;
    int x17468 = g_hash_table_size(x17403);
    int x13125 = 0;
    for(; x13125 < x17468 ; x13125 += 1) {
      
      GList* x13126 = x17467;
      void* x13127 = g_list_nth_data(x13126, 0);
      GList* x13128 = g_list_next(x13126);
      x17467 = x13128;
      void* x13130 = g_hash_table_lookup(x17403, x13127);
      struct AGGRecord_Int* x13132 = (struct AGGRecord_Int*){x13130};
      int x13133 = x17413;
      struct AGGRecord_Int x13134 = *x13132;
      *(x17396 + x13133) = x13134;
      struct AGGRecord_Int* x13136 = &(x17396[x13133]);
      x13132 = x13136;
      int x13138 = x17413;
      int x13139 = x13138+(1);
      x17413 = x13139;
    };
    /* VAR */ int x17502 = 0;
    while(1) {
      
      int x17504 = x17502;
      int x17505 = x17413;
      int x17506 = x17504<(x17505);
      if (!(x17506)) break; 
      
      int x211 = x17502;
      struct AGGRecord_Int* x212 = &(x17396[x211]);
      int x213 = x17502;
      int x214 = x213+(1);
      x17502 = x214;
      double* x221 = x17393->aggs;
      double x235 = x221[0];
      double* x237 = x212->aggs;
      double x238 = x237[0];
      int x239 = x235<(x238);
      /* VAR */ double ite14782 = 0;
      if(x239) {
        double x14783 = x237[0];
        ite14782 = x14783;
      } else {
        
        ite14782 = x235;
      };
      double x241 = ite14782;
      *x221 = x241;
    };
    x17414 = x17393;
    struct AGGRecord_String* x17530 = x17414;
    /* VAR */ int x17531 = 0;
    /* VAR */ int x17532 = 0;
    /* VAR */ int x17533 = 0;
    while(1) {
      
      int x17535 = x17531;
      int x17536 = x17535<(x3770);
      if (!(x17536)) break; 
      
      int x1787 = x17531;
      struct SUPPLIERRecord* x295 = &(x4710[x1787]);
      int x297 = x295->S_SUPPKEY;
      void* x5884 = (void*){x297};
      void* x5885 = (void*){x295};
      void* x5886 = g_hash_table_lookup(x17391, x5884);
      GList** x5887 = (GList**){x5886};
      GList** x5888 = NULL;
      int x5889 = x5887==(x5888);
      /* VAR */ GList** ite14810 = 0;
      if(x5889) {
        GList** x14811 = malloc(8);
        GList* x14812 = NULL;
        pointer_assign(x14811, x14812);
        ite14810 = x14811;
      } else {
        
        ite14810 = x5887;
      };
      GList** x5893 = ite14810;
      GList* x5894 = *(x5893);
      GList* x5895 = g_list_prepend(x5894, x5885);
      pointer_assign(x5893, x5895);
      void* x5897 = (void*){x5893};
      g_hash_table_insert(x17391, x5884, x5897);
      int x1792 = x17531;
      int x301 = x1792+(1);
      x17531 = x301;
    };
    /* VAR */ int x17563 = 0;
    while(1) {
      
      int x17565 = x17563;
      int x17566 = x17413;
      int x17567 = x17565<(x17566);
      if (!(x17567)) break; 
      
      int x372 = x17563;
      struct AGGRecord_Int* x373 = &(x17396[x372]);
      int x374 = x17563;
      int x375 = x374+(1);
      x17563 = x375;
      int x378 = x373->key;
      void* x5915 = (void*){x378};
      void* x5916 = g_hash_table_lookup(x17391, x5915);
      GList** x5917 = (GList**){x5916};
      int x9826 = x5917!=(NULL);
      if(x9826) {
        GList* x7000 = *(x5917);
        /* VAR */ GList* x7001 = x7000;
        while(1) {
          
          GList* x7002 = x7001;
          GList* x7003 = NULL;
          int x7004 = x7002!=(x7003);
          if (!(x7004)) break; 
          
          GList* x7005 = x7001;
          void* x7006 = g_list_nth_data(x7005, 0);
          struct SUPPLIERRecord* x7007 = (struct SUPPLIERRecord*){x7006};
          GList* x7008 = x7001;
          GList* x7009 = g_list_next(x7008);
          x7001 = x7009;
          int x7011 = x7007->S_SUPPKEY;
          int x7012 = x7011==(x378);
          /* VAR */ int ite15792 = 0;
          if(x7012) {
            double* x17622 = x373->aggs;
            double x17623 = x17622[0];
            double* x17624 = x17530->aggs;
            double x17625 = x17624[0];
            int x17626 = x17623==(x17625);
            ite15792 = x17626;
          } else {
            
            ite15792 = 0;
          };
          int x14874 = ite15792;
          if(x14874) {
            char* x931 = x7007->S_NAME;
            char* x932 = x7007->S_ADDRESS;
            char* x934 = x7007->S_PHONE;
            double* x937 = x373->aggs;
            if(0) {
              x17532 = 1;
            } else {
              
              double x440 = x937[0];
              printf("%d|%s|%s|%s|%.4f\n", x7011, x931, x932, x934, x440);
              int x1937 = x17533;
              int x443 = x1937+(1);
              x17533 = x443;
            };
          };
        };
      };
    };
    int x17643 = x17533;
    printf("(%d rows)\n", x17643);
    struct timeval* x17645 = &x17409;
    gettimeofday(x17645, NULL);
    struct timeval* x17647 = &x17405;
    struct timeval* x17648 = &x17409;
    struct timeval* x17649 = &x17407;
    long x17650 = timeval_subtract(x17647, x17648, x17649);
    printf("Generated code run in %ld milliseconds.\n", x17650);
  };
}
/* ----------- FUNCTIONS ----------- */
int x17382(void* x5779) {
  int x5780 = g_direct_hash(x5779);
  return x5780; 
}

int x17385(void* x5782, void* x5783) {
  int x5784 = g_direct_equal(x5782, x5783);
  return x5784; 
}

int x17397(int x6802) {
  return x6802; 
}

int x17399(int x6807, int x6808) {
  int x6809 = x6807==(x6808);
  return x6809; 
}
