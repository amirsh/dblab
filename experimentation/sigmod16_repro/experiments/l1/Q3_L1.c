#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct Q3GRPRecord;
  struct LINEITEMRecord;
  struct AGGRecord_Q3GRPRecord;
  struct CUSTOMERRecord_ORDERSRecord;
  struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord;
  struct ORDERSRecord;
  struct CUSTOMERRecord;
  
  struct Q3GRPRecord {
  int L_ORDERKEY;
  int O_ORDERDATE;
  int O_SHIPPRIORITY;
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
  
  struct AGGRecord_Q3GRPRecord {
  struct Q3GRPRecord* key;
  double* aggs;
  };
  
  struct CUSTOMERRecord_ORDERSRecord {
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
  };
  
  struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord {
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
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
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
  };
  
  struct CUSTOMERRecord {
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
  };
  
  


int x26472(struct Q3GRPRecord* x8289);

int x26479(struct Q3GRPRecord* x8294, struct Q3GRPRecord* x8295);

int x26504(void* x6846);

int x26507(void* x6849, void* x6850);

int x26514(void* x6856);

int x26517(void* x6859, void* x6860);

int x26574(struct AGGRecord_Q3GRPRecord* x219, struct AGGRecord_Q3GRPRecord* x220);

int x8695(void* x8689, void* x8690, void* x8691);
/* GLOBAL VARS */

struct timeval x3196;
int main(int argc, char** argv) {
  FILE* x3721 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x3722 = 0;
  int x3723 = x3722;
  int* x3724 = &x3723;
  int x3725 = fscanf(x3721, "%d", x3724);
  pclose(x3721);
  struct LINEITEMRecord** x5061 = (struct LINEITEMRecord**)malloc(x3723 * sizeof(struct LINEITEMRecord*));
  memset(x5061, 0, x3723 * sizeof(struct LINEITEMRecord*));
  int x3729 = O_RDONLY;
  int x3730 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x3729);
  struct stat x3731 = (struct stat){0};
  /* VAR */ struct stat x3732 = x3731;
  struct stat x3733 = x3732;
  struct stat* x3734 = &x3733;
  int x3735 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x3734);
  size_t x3736 = x3734->st_size;
  int x3737 = PROT_READ;
  int x3738 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x3736, x3737, x3738, x3730, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x3723);
    /* VAR */ int ite22267 = 0;
    if(x6) {
      char x25452 = *x3;
      int x25453 = x25452!=('\0');
      ite22267 = x25453;
    } else {
      
      ite22267 = 0;
    };
    int x20819 = ite22267;
    if (!(x20819)) break; 
    
    /* VAR */ int x3746 = 0;
    int x3747 = x3746;
    int* x3748 = &x3747;
    char* x3749 = strntoi_unchecked(x3, x3748);
    x3 = x3749;
    /* VAR */ int x3751 = 0;
    int x3752 = x3751;
    int* x3753 = &x3752;
    char* x3754 = strntoi_unchecked(x3, x3753);
    x3 = x3754;
    /* VAR */ int x3756 = 0;
    int x3757 = x3756;
    int* x3758 = &x3757;
    char* x3759 = strntoi_unchecked(x3, x3758);
    x3 = x3759;
    /* VAR */ int x3761 = 0;
    int x3762 = x3761;
    int* x3763 = &x3762;
    char* x3764 = strntoi_unchecked(x3, x3763);
    x3 = x3764;
    /* VAR */ double x3766 = 0.0;
    double x3767 = x3766;
    double* x3768 = &x3767;
    char* x3769 = strntod_unchecked(x3, x3768);
    x3 = x3769;
    /* VAR */ double x3771 = 0.0;
    double x3772 = x3771;
    double* x3773 = &x3772;
    char* x3774 = strntod_unchecked(x3, x3773);
    x3 = x3774;
    /* VAR */ double x3776 = 0.0;
    double x3777 = x3776;
    double* x3778 = &x3777;
    char* x3779 = strntod_unchecked(x3, x3778);
    x3 = x3779;
    /* VAR */ double x3781 = 0.0;
    double x3782 = x3781;
    double* x3783 = &x3782;
    char* x3784 = strntod_unchecked(x3, x3783);
    x3 = x3784;
    char x3786 = *x3;
    /* VAR */ char x3787 = x3786;
    x3 += 1;
    x3 += 1;
    char x3790 = x3787;
    char x3791 = *x3;
    /* VAR */ char x3792 = x3791;
    x3 += 1;
    x3 += 1;
    char x3795 = x3792;
    /* VAR */ int x3796 = 0;
    int x3797 = x3796;
    int* x3798 = &x3797;
    char* x3799 = strntoi_unchecked(x3, x3798);
    x3 = x3799;
    /* VAR */ int x3801 = 0;
    int x3802 = x3801;
    int* x3803 = &x3802;
    char* x3804 = strntoi_unchecked(x3, x3803);
    x3 = x3804;
    /* VAR */ int x3806 = 0;
    int x3807 = x3806;
    int* x3808 = &x3807;
    char* x3809 = strntoi_unchecked(x3, x3808);
    x3 = x3809;
    int x3811 = x3797*(10000);
    int x3812 = x3802*(100);
    int x3813 = x3811+(x3812);
    int x3814 = x3813+(x3807);
    /* VAR */ int x3815 = 0;
    int x3816 = x3815;
    int* x3817 = &x3816;
    char* x3818 = strntoi_unchecked(x3, x3817);
    x3 = x3818;
    /* VAR */ int x3820 = 0;
    int x3821 = x3820;
    int* x3822 = &x3821;
    char* x3823 = strntoi_unchecked(x3, x3822);
    x3 = x3823;
    /* VAR */ int x3825 = 0;
    int x3826 = x3825;
    int* x3827 = &x3826;
    char* x3828 = strntoi_unchecked(x3, x3827);
    x3 = x3828;
    int x3830 = x3816*(10000);
    int x3831 = x3821*(100);
    int x3832 = x3830+(x3831);
    int x3833 = x3832+(x3826);
    /* VAR */ int x3834 = 0;
    int x3835 = x3834;
    int* x3836 = &x3835;
    char* x3837 = strntoi_unchecked(x3, x3836);
    x3 = x3837;
    /* VAR */ int x3839 = 0;
    int x3840 = x3839;
    int* x3841 = &x3840;
    char* x3842 = strntoi_unchecked(x3, x3841);
    x3 = x3842;
    /* VAR */ int x3844 = 0;
    int x3845 = x3844;
    int* x3846 = &x3845;
    char* x3847 = strntoi_unchecked(x3, x3846);
    x3 = x3847;
    int x3849 = x3835*(10000);
    int x3850 = x3840*(100);
    int x3851 = x3849+(x3850);
    int x3852 = x3851+(x3845);
    char* x5187 = (char*)malloc(26 * sizeof(char));
    memset(x5187, 0, 26 * sizeof(char));
    /* VAR */ char* x3854 = x3;
    while(1) {
      
      char x3855 = *x3;
      int x3856 = x3855!=('|');
      /* VAR */ int ite22388 = 0;
      if(x3856) {
        char x25572 = *x3;
        int x25573 = x25572!=('\n');
        ite22388 = x25573;
      } else {
        
        ite22388 = 0;
      };
      int x20933 = ite22388;
      if (!(x20933)) break; 
      
      x3 += 1;
    };
    char* x3862 = x3854;
    int x3863 = x3 - x3862;
    char* x3864 = x3854;
    char* x3865 = strncpy(x5187, x3864, x3863);
    x3 += 1;
    char* x5205 = (char*)malloc(11 * sizeof(char));
    memset(x5205, 0, 11 * sizeof(char));
    /* VAR */ char* x3873 = x3;
    while(1) {
      
      char x3874 = *x3;
      int x3875 = x3874!=('|');
      /* VAR */ int ite22411 = 0;
      if(x3875) {
        char x25594 = *x3;
        int x25595 = x25594!=('\n');
        ite22411 = x25595;
      } else {
        
        ite22411 = 0;
      };
      int x20949 = ite22411;
      if (!(x20949)) break; 
      
      x3 += 1;
    };
    char* x3881 = x3873;
    int x3882 = x3 - x3881;
    char* x3883 = x3873;
    char* x3884 = strncpy(x5205, x3883, x3882);
    x3 += 1;
    char* x5223 = (char*)malloc(45 * sizeof(char));
    memset(x5223, 0, 45 * sizeof(char));
    /* VAR */ char* x3892 = x3;
    while(1) {
      
      char x3893 = *x3;
      int x3894 = x3893!=('|');
      /* VAR */ int ite22434 = 0;
      if(x3894) {
        char x25616 = *x3;
        int x25617 = x25616!=('\n');
        ite22434 = x25617;
      } else {
        
        ite22434 = 0;
      };
      int x20965 = ite22434;
      if (!(x20965)) break; 
      
      x3 += 1;
    };
    char* x3900 = x3892;
    int x3901 = x3 - x3900;
    char* x3902 = x3892;
    char* x3903 = strncpy(x5223, x3902, x3901);
    x3 += 1;
    struct LINEITEMRecord* x5897 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x5897, 0, 1 * sizeof(struct LINEITEMRecord));
    x5897->L_ORDERKEY = x3747; x5897->L_PARTKEY = x3752; x5897->L_SUPPKEY = x3757; x5897->L_LINENUMBER = x3762; x5897->L_QUANTITY = x3767; x5897->L_EXTENDEDPRICE = x3772; x5897->L_DISCOUNT = x3777; x5897->L_TAX = x3782; x5897->L_RETURNFLAG = x3790; x5897->L_LINESTATUS = x3795; x5897->L_SHIPDATE = x3814; x5897->L_COMMITDATE = x3833; x5897->L_RECEIPTDATE = x3852; x5897->L_SHIPINSTRUCT = x5187; x5897->L_SHIPMODE = x5205; x5897->L_COMMENT = x5223;
    int x47 = x4;
    *(x5061 + x47) = x5897;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x3916 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x3917 = 0;
  int x3918 = x3917;
  int* x3919 = &x3918;
  int x3920 = fscanf(x3916, "%d", x3919);
  pclose(x3916);
  struct ORDERSRecord** x5253 = (struct ORDERSRecord**)malloc(x3918 * sizeof(struct ORDERSRecord*));
  memset(x5253, 0, x3918 * sizeof(struct ORDERSRecord*));
  int x3924 = O_RDONLY;
  int x3925 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x3924);
  /* VAR */ struct stat x3926 = x3731;
  struct stat x3927 = x3926;
  struct stat* x3928 = &x3927;
  int x3929 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x3928);
  size_t x3930 = x3928->st_size;
  int x3931 = PROT_READ;
  int x3932 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x3930, x3931, x3932, x3925, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x3918);
    /* VAR */ int ite22481 = 0;
    if(x58) {
      char x25662 = *x55;
      int x25663 = x25662!=('\0');
      ite22481 = x25663;
    } else {
      
      ite22481 = 0;
    };
    int x21005 = ite22481;
    if (!(x21005)) break; 
    
    /* VAR */ int x3940 = 0;
    int x3941 = x3940;
    int* x3942 = &x3941;
    char* x3943 = strntoi_unchecked(x55, x3942);
    x55 = x3943;
    /* VAR */ int x3945 = 0;
    int x3946 = x3945;
    int* x3947 = &x3946;
    char* x3948 = strntoi_unchecked(x55, x3947);
    x55 = x3948;
    char x3950 = *x55;
    /* VAR */ char x3951 = x3950;
    x55 += 1;
    x55 += 1;
    char x3954 = x3951;
    /* VAR */ double x3955 = 0.0;
    double x3956 = x3955;
    double* x3957 = &x3956;
    char* x3958 = strntod_unchecked(x55, x3957);
    x55 = x3958;
    /* VAR */ int x3960 = 0;
    int x3961 = x3960;
    int* x3962 = &x3961;
    char* x3963 = strntoi_unchecked(x55, x3962);
    x55 = x3963;
    /* VAR */ int x3965 = 0;
    int x3966 = x3965;
    int* x3967 = &x3966;
    char* x3968 = strntoi_unchecked(x55, x3967);
    x55 = x3968;
    /* VAR */ int x3970 = 0;
    int x3971 = x3970;
    int* x3972 = &x3971;
    char* x3973 = strntoi_unchecked(x55, x3972);
    x55 = x3973;
    int x3975 = x3961*(10000);
    int x3976 = x3966*(100);
    int x3977 = x3975+(x3976);
    int x3978 = x3977+(x3971);
    char* x5310 = (char*)malloc(16 * sizeof(char));
    memset(x5310, 0, 16 * sizeof(char));
    /* VAR */ char* x3980 = x55;
    while(1) {
      
      char x3981 = *x55;
      int x3982 = x3981!=('|');
      /* VAR */ int ite22534 = 0;
      if(x3982) {
        char x25714 = *x55;
        int x25715 = x25714!=('\n');
        ite22534 = x25715;
      } else {
        
        ite22534 = 0;
      };
      int x21051 = ite22534;
      if (!(x21051)) break; 
      
      x55 += 1;
    };
    char* x3988 = x3980;
    int x3989 = x55 - x3988;
    char* x3990 = x3980;
    char* x3991 = strncpy(x5310, x3990, x3989);
    x55 += 1;
    char* x5328 = (char*)malloc(16 * sizeof(char));
    memset(x5328, 0, 16 * sizeof(char));
    /* VAR */ char* x3999 = x55;
    while(1) {
      
      char x4000 = *x55;
      int x4001 = x4000!=('|');
      /* VAR */ int ite22557 = 0;
      if(x4001) {
        char x25736 = *x55;
        int x25737 = x25736!=('\n');
        ite22557 = x25737;
      } else {
        
        ite22557 = 0;
      };
      int x21067 = ite22557;
      if (!(x21067)) break; 
      
      x55 += 1;
    };
    char* x4007 = x3999;
    int x4008 = x55 - x4007;
    char* x4009 = x3999;
    char* x4010 = strncpy(x5328, x4009, x4008);
    x55 += 1;
    /* VAR */ int x4017 = 0;
    int x4018 = x4017;
    int* x4019 = &x4018;
    char* x4020 = strntoi_unchecked(x55, x4019);
    x55 = x4020;
    char* x5351 = (char*)malloc(80 * sizeof(char));
    memset(x5351, 0, 80 * sizeof(char));
    /* VAR */ char* x4023 = x55;
    while(1) {
      
      char x4024 = *x55;
      int x4025 = x4024!=('|');
      /* VAR */ int ite22585 = 0;
      if(x4025) {
        char x25763 = *x55;
        int x25764 = x25763!=('\n');
        ite22585 = x25764;
      } else {
        
        ite22585 = 0;
      };
      int x21088 = ite22585;
      if (!(x21088)) break; 
      
      x55 += 1;
    };
    char* x4031 = x4023;
    int x4032 = x55 - x4031;
    char* x4033 = x4023;
    char* x4034 = strncpy(x5351, x4033, x4032);
    x55 += 1;
    struct ORDERSRecord* x6027 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x6027, 0, 1 * sizeof(struct ORDERSRecord));
    x6027->O_ORDERKEY = x3941; x6027->O_CUSTKEY = x3946; x6027->O_ORDERSTATUS = x3954; x6027->O_TOTALPRICE = x3956; x6027->O_ORDERDATE = x3978; x6027->O_ORDERPRIORITY = x5310; x6027->O_CLERK = x5328; x6027->O_SHIPPRIORITY = x4018; x6027->O_COMMENT = x5351;
    int x91 = x56;
    *(x5253 + x91) = x6027;
    int x93 = x56;
    int x94 = x93+(1);
    x56 = x94;
  };
  FILE* x4047 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x4048 = 0;
  int x4049 = x4048;
  int* x4050 = &x4049;
  int x4051 = fscanf(x4047, "%d", x4050);
  pclose(x4047);
  struct CUSTOMERRecord** x5381 = (struct CUSTOMERRecord**)malloc(x4049 * sizeof(struct CUSTOMERRecord*));
  memset(x5381, 0, x4049 * sizeof(struct CUSTOMERRecord*));
  int x4055 = O_RDONLY;
  int x4056 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x4055);
  /* VAR */ struct stat x4057 = x3731;
  struct stat x4058 = x4057;
  struct stat* x4059 = &x4058;
  int x4060 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x4059);
  size_t x4061 = x4059->st_size;
  int x4062 = PROT_READ;
  int x4063 = MAP_PRIVATE;
  char* x99 = mmap(NULL, x4061, x4062, x4063, x4056, 0);
  /* VAR */ int x100 = 0;
  while(1) {
    
    int x101 = x100;
    int x102 = x101<(x4049);
    /* VAR */ int ite22632 = 0;
    if(x102) {
      char x25809 = *x99;
      int x25810 = x25809!=('\0');
      ite22632 = x25810;
    } else {
      
      ite22632 = 0;
    };
    int x21128 = ite22632;
    if (!(x21128)) break; 
    
    /* VAR */ int x4071 = 0;
    int x4072 = x4071;
    int* x4073 = &x4072;
    char* x4074 = strntoi_unchecked(x99, x4073);
    x99 = x4074;
    char* x5404 = (char*)malloc(26 * sizeof(char));
    memset(x5404, 0, 26 * sizeof(char));
    /* VAR */ char* x4077 = x99;
    while(1) {
      
      char x4078 = *x99;
      int x4079 = x4078!=('|');
      /* VAR */ int ite22651 = 0;
      if(x4079) {
        char x25827 = *x99;
        int x25828 = x25827!=('\n');
        ite22651 = x25828;
      } else {
        
        ite22651 = 0;
      };
      int x21140 = ite22651;
      if (!(x21140)) break; 
      
      x99 += 1;
    };
    char* x4085 = x4077;
    int x4086 = x99 - x4085;
    char* x4087 = x4077;
    char* x4088 = strncpy(x5404, x4087, x4086);
    x99 += 1;
    char* x5422 = (char*)malloc(41 * sizeof(char));
    memset(x5422, 0, 41 * sizeof(char));
    /* VAR */ char* x4096 = x99;
    while(1) {
      
      char x4097 = *x99;
      int x4098 = x4097!=('|');
      /* VAR */ int ite22674 = 0;
      if(x4098) {
        char x25849 = *x99;
        int x25850 = x25849!=('\n');
        ite22674 = x25850;
      } else {
        
        ite22674 = 0;
      };
      int x21156 = ite22674;
      if (!(x21156)) break; 
      
      x99 += 1;
    };
    char* x4104 = x4096;
    int x4105 = x99 - x4104;
    char* x4106 = x4096;
    char* x4107 = strncpy(x5422, x4106, x4105);
    x99 += 1;
    /* VAR */ int x4114 = 0;
    int x4115 = x4114;
    int* x4116 = &x4115;
    char* x4117 = strntoi_unchecked(x99, x4116);
    x99 = x4117;
    char* x5445 = (char*)malloc(16 * sizeof(char));
    memset(x5445, 0, 16 * sizeof(char));
    /* VAR */ char* x4120 = x99;
    while(1) {
      
      char x4121 = *x99;
      int x4122 = x4121!=('|');
      /* VAR */ int ite22702 = 0;
      if(x4122) {
        char x25876 = *x99;
        int x25877 = x25876!=('\n');
        ite22702 = x25877;
      } else {
        
        ite22702 = 0;
      };
      int x21177 = ite22702;
      if (!(x21177)) break; 
      
      x99 += 1;
    };
    char* x4128 = x4120;
    int x4129 = x99 - x4128;
    char* x4130 = x4120;
    char* x4131 = strncpy(x5445, x4130, x4129);
    x99 += 1;
    /* VAR */ double x4138 = 0.0;
    double x4139 = x4138;
    double* x4140 = &x4139;
    char* x4141 = strntod_unchecked(x99, x4140);
    x99 = x4141;
    char* x5468 = (char*)malloc(11 * sizeof(char));
    memset(x5468, 0, 11 * sizeof(char));
    /* VAR */ char* x4144 = x99;
    while(1) {
      
      char x4145 = *x99;
      int x4146 = x4145!=('|');
      /* VAR */ int ite22730 = 0;
      if(x4146) {
        char x25903 = *x99;
        int x25904 = x25903!=('\n');
        ite22730 = x25904;
      } else {
        
        ite22730 = 0;
      };
      int x21198 = ite22730;
      if (!(x21198)) break; 
      
      x99 += 1;
    };
    char* x4152 = x4144;
    int x4153 = x99 - x4152;
    char* x4154 = x4144;
    char* x4155 = strncpy(x5468, x4154, x4153);
    x99 += 1;
    char* x5486 = (char*)malloc(118 * sizeof(char));
    memset(x5486, 0, 118 * sizeof(char));
    /* VAR */ char* x4163 = x99;
    while(1) {
      
      char x4164 = *x99;
      int x4165 = x4164!=('|');
      /* VAR */ int ite22753 = 0;
      if(x4165) {
        char x25925 = *x99;
        int x25926 = x25925!=('\n');
        ite22753 = x25926;
      } else {
        
        ite22753 = 0;
      };
      int x21214 = ite22753;
      if (!(x21214)) break; 
      
      x99 += 1;
    };
    char* x4171 = x4163;
    int x4172 = x99 - x4171;
    char* x4173 = x4163;
    char* x4174 = strncpy(x5486, x4173, x4172);
    x99 += 1;
    struct CUSTOMERRecord* x6164 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x6164, 0, 1 * sizeof(struct CUSTOMERRecord));
    x6164->C_CUSTKEY = x4072; x6164->C_NAME = x5404; x6164->C_ADDRESS = x5422; x6164->C_NATIONKEY = x4115; x6164->C_PHONE = x5445; x6164->C_ACCTBAL = x4139; x6164->C_MKTSEGMENT = x5468; x6164->C_COMMENT = x5486;
    int x149 = x100;
    *(x5381 + x149) = x6164;
    int x151 = x100;
    int x152 = x151+(1);
    x100 = x152;
  };
  int x156 = 0;
  for(; x156 < 1 ; x156 += 1) {
    
    GHashTable* x26503 = g_hash_table_new(x26472, x26479);
    void*** x26511 = (void***){x26504};
    int* x26512 = (int*){x26507};
    GHashTable* x26513 = g_hash_table_new(x26511, x26512);
    void*** x26521 = (void***){x26514};
    int* x26522 = (int*){x26517};
    GHashTable* x26523 = g_hash_table_new(x26521, x26522);
    /* VAR */ struct timeval x26524 = x3196;
    struct timeval x26525 = x26524;
    /* VAR */ struct timeval x26526 = x3196;
    struct timeval x26527 = x26526;
    /* VAR */ struct timeval x26528 = x3196;
    struct timeval x26529 = x26528;
    struct timeval* x26530 = &x26527;
    gettimeofday(x26530, NULL);
    /* VAR */ int x26532 = 0;
    /* VAR */ int x26533 = 0;
    /* VAR */ int x26534 = 0;
    int* x26613 = &(x26574);
    GTree* x26614 = g_tree_new(x26613);
    /* VAR */ int x26615 = 0;
    /* VAR */ int x26616 = 0;
    while(1) {
      
      int x26618 = x26532;
      int x26619 = x26618<(x4049);
      if (!(x26619)) break; 
      
      int x1896 = x26532;
      struct CUSTOMERRecord* x256 = x5381[x1896];
      char* x258 = x256->C_MKTSEGMENT;
      int x17328 = strcmp(x258, "HOUSEHOLD");
      int x17329 = x17328==(0);
      if(x17329) {
        int x260 = x256->C_CUSTKEY;
        void* x6910 = (void*){x260};
        void* x6911 = (void*){x256};
        void* x6912 = g_hash_table_lookup(x26523, x6910);
        GList** x6913 = (GList**){x6912};
        GList** x6914 = NULL;
        int x6915 = x6913==(x6914);
        /* VAR */ GList** ite21893 = 0;
        if(x6915) {
          GList** x21894 = malloc(8);
          GList* x21895 = NULL;
          pointer_assign(x21894, x21895);
          ite21893 = x21894;
        } else {
          
          ite21893 = x6913;
        };
        GList** x6919 = ite21893;
        GList* x6920 = *(x6919);
        GList* x6921 = g_list_prepend(x6920, x6911);
        pointer_assign(x6919, x6921);
        void* x6923 = (void*){x6919};
        g_hash_table_insert(x26523, x6910, x6923);
      };
      int x1904 = x26532;
      int x265 = x1904+(1);
      x26532 = x265;
    };
    while(1) {
      
      int x26651 = x26533;
      int x26652 = x26651<(x3918);
      if (!(x26652)) break; 
      
      int x1913 = x26533;
      struct ORDERSRecord* x274 = x5253[x1913];
      int x276 = x274->O_ORDERDATE;
      int x277 = x276<(19950304);
      if(x277) {
        int x278 = x274->O_CUSTKEY;
        void* x6938 = (void*){x278};
        void* x6939 = g_hash_table_lookup(x26523, x6938);
        GList** x6940 = (GList**){x6939};
        int x12879 = x6940!=(NULL);
        if(x12879) {
          GList* x8456 = *(x6940);
          /* VAR */ GList* x8457 = x8456;
          while(1) {
            
            GList* x8458 = x8457;
            GList* x8459 = NULL;
            int x8460 = x8458!=(x8459);
            if (!(x8460)) break; 
            
            GList* x8461 = x8457;
            void* x8462 = g_list_nth_data(x8461, 0);
            struct CUSTOMERRecord* x8463 = (struct CUSTOMERRecord*){x8462};
            GList* x8464 = x8457;
            GList* x8465 = g_list_next(x8464);
            x8457 = x8465;
            int x8467 = x8463->C_CUSTKEY;
            int x8468 = x8467==(x278);
            if(x8468) {
              char* x808 = x8463->C_NAME;
              char* x809 = x8463->C_ADDRESS;
              int x810 = x8463->C_NATIONKEY;
              char* x811 = x8463->C_PHONE;
              double x812 = x8463->C_ACCTBAL;
              char* x813 = x8463->C_MKTSEGMENT;
              char* x814 = x8463->C_COMMENT;
              int x815 = x274->O_ORDERKEY;
              char x816 = x274->O_ORDERSTATUS;
              double x817 = x274->O_TOTALPRICE;
              char* x818 = x274->O_ORDERPRIORITY;
              char* x819 = x274->O_CLERK;
              int x820 = x274->O_SHIPPRIORITY;
              char* x821 = x274->O_COMMENT;
              struct CUSTOMERRecord_ORDERSRecord* x6259 = (struct CUSTOMERRecord_ORDERSRecord*)malloc(1 * sizeof(struct CUSTOMERRecord_ORDERSRecord));
              memset(x6259, 0, 1 * sizeof(struct CUSTOMERRecord_ORDERSRecord));
              x6259->C_CUSTKEY = x8467; x6259->C_NAME = x808; x6259->C_ADDRESS = x809; x6259->C_NATIONKEY = x810; x6259->C_PHONE = x811; x6259->C_ACCTBAL = x812; x6259->C_MKTSEGMENT = x813; x6259->C_COMMENT = x814; x6259->O_ORDERKEY = x815; x6259->O_CUSTKEY = x278; x6259->O_ORDERSTATUS = x816; x6259->O_TOTALPRICE = x817; x6259->O_ORDERDATE = x276; x6259->O_ORDERPRIORITY = x818; x6259->O_CLERK = x819; x6259->O_SHIPPRIORITY = x820; x6259->O_COMMENT = x821;
              int x299 = x6259->O_ORDERKEY;
              void* x6968 = (void*){x299};
              void* x6969 = (void*){x6259};
              void* x6970 = g_hash_table_lookup(x26513, x6968);
              GList** x6971 = (GList**){x6970};
              GList** x6972 = NULL;
              int x6973 = x6971==(x6972);
              /* VAR */ GList** ite22005 = 0;
              if(x6973) {
                GList** x22006 = malloc(8);
                GList* x22007 = NULL;
                pointer_assign(x22006, x22007);
                ite22005 = x22006;
              } else {
                
                ite22005 = x6971;
              };
              GList** x6977 = ite22005;
              GList* x6978 = *(x6977);
              GList* x6979 = g_list_prepend(x6978, x6969);
              pointer_assign(x6977, x6979);
              void* x6981 = (void*){x6977};
              g_hash_table_insert(x26513, x6968, x6981);
            };
          };
        };
      };
      int x1972 = x26533;
      int x308 = x1972+(1);
      x26533 = x308;
    };
    while(1) {
      
      int x26764 = x26534;
      int x26765 = x26764<(x3723);
      if (!(x26765)) break; 
      
      int x1982 = x26534;
      struct LINEITEMRecord* x318 = x5061[x1982];
      int x320 = x318->L_SHIPDATE;
      int x321 = x320>(19950304);
      if(x321) {
        int x322 = x318->L_ORDERKEY;
        void* x6997 = (void*){x322};
        void* x6998 = g_hash_table_lookup(x26513, x6997);
        GList** x6999 = (GList**){x6998};
        int x12983 = x6999!=(NULL);
        if(x12983) {
          GList* x8588 = *(x6999);
          /* VAR */ GList* x8589 = x8588;
          while(1) {
            
            GList* x8590 = x8589;
            GList* x8591 = NULL;
            int x8592 = x8590!=(x8591);
            if (!(x8592)) break; 
            
            GList* x8593 = x8589;
            void* x8594 = g_list_nth_data(x8593, 0);
            struct CUSTOMERRecord_ORDERSRecord* x8595 = (struct CUSTOMERRecord_ORDERSRecord*){x8594};
            GList* x8596 = x8589;
            GList* x8597 = g_list_next(x8596);
            x8589 = x8597;
            int x8599 = x8595->O_ORDERKEY;
            int x8600 = x8599==(x322);
            if(x8600) {
              int x926 = x8595->C_CUSTKEY;
              char* x927 = x8595->C_NAME;
              char* x928 = x8595->C_ADDRESS;
              int x929 = x8595->C_NATIONKEY;
              char* x930 = x8595->C_PHONE;
              double x931 = x8595->C_ACCTBAL;
              char* x932 = x8595->C_MKTSEGMENT;
              char* x933 = x8595->C_COMMENT;
              int x934 = x8595->O_CUSTKEY;
              char x935 = x8595->O_ORDERSTATUS;
              double x936 = x8595->O_TOTALPRICE;
              int x937 = x8595->O_ORDERDATE;
              char* x938 = x8595->O_ORDERPRIORITY;
              char* x939 = x8595->O_CLERK;
              int x940 = x8595->O_SHIPPRIORITY;
              char* x941 = x8595->O_COMMENT;
              int x942 = x318->L_PARTKEY;
              int x943 = x318->L_SUPPKEY;
              int x944 = x318->L_LINENUMBER;
              double x945 = x318->L_QUANTITY;
              double x946 = x318->L_EXTENDEDPRICE;
              double x947 = x318->L_DISCOUNT;
              double x948 = x318->L_TAX;
              char x949 = x318->L_RETURNFLAG;
              char x950 = x318->L_LINESTATUS;
              int x951 = x318->L_COMMITDATE;
              int x952 = x318->L_RECEIPTDATE;
              char* x953 = x318->L_SHIPINSTRUCT;
              char* x954 = x318->L_SHIPMODE;
              char* x955 = x318->L_COMMENT;
              struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord* x6317 = (struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord*)malloc(1 * sizeof(struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
              memset(x6317, 0, 1 * sizeof(struct CUSTOMERRecord_ORDERSRecord_LINEITEMRecord));
              x6317->C_CUSTKEY = x926; x6317->C_NAME = x927; x6317->C_ADDRESS = x928; x6317->C_NATIONKEY = x929; x6317->C_PHONE = x930; x6317->C_ACCTBAL = x931; x6317->C_MKTSEGMENT = x932; x6317->C_COMMENT = x933; x6317->O_ORDERKEY = x8599; x6317->O_CUSTKEY = x934; x6317->O_ORDERSTATUS = x935; x6317->O_TOTALPRICE = x936; x6317->O_ORDERDATE = x937; x6317->O_ORDERPRIORITY = x938; x6317->O_CLERK = x939; x6317->O_SHIPPRIORITY = x940; x6317->O_COMMENT = x941; x6317->L_ORDERKEY = x322; x6317->L_PARTKEY = x942; x6317->L_SUPPKEY = x943; x6317->L_LINENUMBER = x944; x6317->L_QUANTITY = x945; x6317->L_EXTENDEDPRICE = x946; x6317->L_DISCOUNT = x947; x6317->L_TAX = x948; x6317->L_RETURNFLAG = x949; x6317->L_LINESTATUS = x950; x6317->L_SHIPDATE = x320; x6317->L_COMMITDATE = x951; x6317->L_RECEIPTDATE = x952; x6317->L_SHIPINSTRUCT = x953; x6317->L_SHIPMODE = x954; x6317->L_COMMENT = x955;
              int x373 = x6317->L_ORDERKEY;
              int x374 = x6317->O_ORDERDATE;
              int x375 = x6317->O_SHIPPRIORITY;
              struct Q3GRPRecord* x6323 = (struct Q3GRPRecord*)malloc(1 * sizeof(struct Q3GRPRecord));
              memset(x6323, 0, 1 * sizeof(struct Q3GRPRecord));
              x6323->L_ORDERKEY = x373; x6323->O_ORDERDATE = x374; x6323->O_SHIPPRIORITY = x375;
              void* x8641 = g_hash_table_lookup(x26503, x6323);
              int x8569 = x8641==(NULL);
              /* VAR */ struct AGGRecord_Q3GRPRecord* ite22156 = 0;
              if(x8569) {
                double* x22157 = (double*)malloc(1 * sizeof(double));
                memset(x22157, 0, 1 * sizeof(double));
                struct AGGRecord_Q3GRPRecord* x22158 = (struct AGGRecord_Q3GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q3GRPRecord));
                memset(x22158, 0, 1 * sizeof(struct AGGRecord_Q3GRPRecord));
                x22158->key = x6323; x22158->aggs = x22157;
                g_hash_table_insert(x26503, x6323, x22158);
                ite22156 = x22158;
              } else {
                
                ite22156 = x8641;
              };
              struct AGGRecord_Q3GRPRecord* x8579 = ite22156;
              double* x381 = x8579->aggs;
              double x395 = x381[0];
              double x396 = x6317->L_EXTENDEDPRICE;
              double x397 = x6317->L_DISCOUNT;
              double x398 = 1.0-(x397);
              double x399 = x396*(x398);
              double x400 = x395+(x399);
              *x381 = x400;
            };
          };
        };
      };
      int x2133 = x26534;
      int x412 = x2133+(1);
      x26534 = x412;
    };
    GList* x26924 = g_hash_table_get_keys(x26503);
    /* VAR */ GList* x26925 = x26924;
    int x26926 = g_hash_table_size(x26503);
    int x19401 = 0;
    for(; x19401 < x26926 ; x19401 += 1) {
      
      GList* x19402 = x26925;
      void* x19403 = g_list_nth_data(x19402, 0);
      GList* x19404 = g_list_next(x19402);
      x26925 = x19404;
      void* x19406 = g_hash_table_lookup(x26503, x19403);
      struct AGGRecord_Q3GRPRecord* x19408 = (struct AGGRecord_Q3GRPRecord*){x19406};
      g_tree_insert(x26614, x19408, x19408);
    };
    while(1) {
      
      int x2142 = x26615;
      int x423 = !(x2142);
      /* VAR */ int ite23792 = 0;
      if(x423) {
        int x26951 = g_tree_nnodes(x26614);
        int x26952 = x26951!=(0);
        ite23792 = x26952;
      } else {
        
        ite23792 = 0;
      };
      int x22207 = ite23792;
      if (!(x22207)) break; 
      
      void* x8688 = NULL;
      void** x8696 = &(x8688);
      g_tree_foreach(x26614, x8695, x8696);
      struct AGGRecord_Q3GRPRecord* x8698 = (struct AGGRecord_Q3GRPRecord*){x8688};
      int x8699 = g_tree_remove(x26614, x8698);
      int x2150 = x26616;
      int x433 = x2150>=(10);
      if(x433) {
        x26615 = 1;
      } else {
        
        struct Q3GRPRecord* x435 = x8698->key;
        int x436 = x435->L_ORDERKEY;
        double* x437 = x8698->aggs;
        double x438 = x437[0];
        int x439 = x435->O_ORDERDATE;
        char* x440 = ltoa(x439);
        int x441 = x435->O_SHIPPRIORITY;
        printf("%d|%.4f|%s|%d\n", x436, x438, x440, x441);
        int x2162 = x26616;
        int x444 = x2162+(1);
        x26616 = x444;
      };
    };
    int x26984 = x26616;
    printf("(%d rows)\n", x26984);
    struct timeval* x26986 = &x26529;
    gettimeofday(x26986, NULL);
    struct timeval* x26988 = &x26525;
    struct timeval* x26989 = &x26529;
    struct timeval* x26990 = &x26527;
    long x26991 = timeval_subtract(x26988, x26989, x26990);
    printf("Generated code run in %ld milliseconds.\n", x26991);
  };
}
/* ----------- FUNCTIONS ----------- */
int x26472(struct Q3GRPRecord* x8289) {
  int x14533 = x8289->L_ORDERKEY;
  int x14535 = x8289->O_ORDERDATE;
  int x14537 = x8289->O_SHIPPRIORITY;
  int x14539 = x14533+(x14535);
  int x14540 = x14539+(x14537);
  return x14540; 
}

int x26479(struct Q3GRPRecord* x8294, struct Q3GRPRecord* x8295) {
  int x14544 = x8294->L_ORDERKEY;
  int x14545 = x8295->L_ORDERKEY;
  int x14546 = x14544==(x14545);
  int x14547 = x8294->O_ORDERDATE;
  int x14548 = x8295->O_ORDERDATE;
  int x14549 = x14547==(x14548);
  int x14550 = x8294->O_SHIPPRIORITY;
  int x14551 = x8295->O_SHIPPRIORITY;
  int x14552 = x14550==(x14551);
  /* VAR */ int ite23329 = 0;
  if(x14546) {
    ite23329 = x14549;
  } else {
    
    ite23329 = 0;
  };
  int x21760 = ite23329;
  /* VAR */ int ite23336 = 0;
  if(x21760) {
    ite23336 = x14552;
  } else {
    
    ite23336 = 0;
  };
  int x21762 = ite23336;
  return x21762; 
}

int x26504(void* x6846) {
  int x6847 = g_direct_hash(x6846);
  return x6847; 
}

int x26507(void* x6849, void* x6850) {
  int x6851 = g_direct_equal(x6849, x6850);
  return x6851; 
}

int x26514(void* x6856) {
  int x6857 = g_direct_hash(x6856);
  return x6857; 
}

int x26517(void* x6859, void* x6860) {
  int x6861 = g_direct_equal(x6859, x6860);
  return x6861; 
}

int x26574(struct AGGRecord_Q3GRPRecord* x219, struct AGGRecord_Q3GRPRecord* x220) {
  double* x221 = x219->aggs;
  double x222 = x221[0];
  double* x223 = x220->aggs;
  double x224 = x223[0];
  int x225 = x222<(x224);
  /* VAR */ int ite21843 = 0;
  if(x225) {
    ite21843 = 1;
  } else {
    
    int x21845 = x222>(x224);
    /* VAR */ int ite21847 = 0;
    if(x21845) {
      ite21847 = -1;
    } else {
      
      struct Q3GRPRecord* x21849 = x219->key;
      int x21850 = x21849->O_ORDERDATE;
      struct Q3GRPRecord* x21851 = x220->key;
      int x21852 = x21851->O_ORDERDATE;
      int x21853 = x21850<(x21852);
      /* VAR */ int ite21855 = 0;
      if(x21853) {
        ite21855 = -1;
      } else {
        
        int x21857 = x21850>(x21852);
        /* VAR */ int ite21859 = 0;
        if(x21857) {
          ite21859 = 1;
        } else {
          
          ite21859 = 0;
        };
        int x21858 = ite21859;
        ite21855 = x21858;
      };
      int x21854 = ite21855;
      ite21847 = x21854;
    };
    int x21846 = ite21847;
    ite21843 = x21846;
  };
  int x236 = ite21843;
  return x236; 
}

int x8695(void* x8689, void* x8690, void* x8691) {
  struct AGGRecord_Q3GRPRecord** x8692 = (struct AGGRecord_Q3GRPRecord**){x8691};
  struct AGGRecord_Q3GRPRecord* x8693 = (struct AGGRecord_Q3GRPRecord*){x8690};
  pointer_assign(x8692, x8693);
  return 1; 
}
