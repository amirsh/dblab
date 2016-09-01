#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord;
  struct AGGRecord_Int_ORDERSRecord;
  struct LINEITEMRecord;
  struct Q18GRPRecord;
  struct ORDERSRecord;
  struct AGGRecord_Int;
  struct AGGRecord_Q18GRPRecord;
  struct CUSTOMERRecord;
  
  struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord {
  int key;
  double* aggs;
  int O_ORDERKEY;
  int O_CUSTKEY;
  char O_ORDERSTATUS;
  double O_TOTALPRICE;
  int O_ORDERDATE;
  char* O_ORDERPRIORITY;
  char* O_CLERK;
  int O_SHIPPRIORITY;
  char* O_COMMENT;
  int C_CUSTKEY;
  char* C_NAME;
  char* C_ADDRESS;
  int C_NATIONKEY;
  char* C_PHONE;
  double C_ACCTBAL;
  char* C_MKTSEGMENT;
  char* C_COMMENT;
  };
  
  struct AGGRecord_Int_ORDERSRecord {
  int key;
  double* aggs;
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
  
  struct Q18GRPRecord {
  char* C_NAME;
  int C_CUSTKEY;
  int O_ORDERKEY;
  int O_ORDERDATE;
  double O_TOTALPRICE;
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
  
  struct AGGRecord_Int {
  int key;
  double* aggs;
  };
  
  struct AGGRecord_Q18GRPRecord {
  struct Q18GRPRecord* key;
  double* aggs;
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
  
  


int x27654(struct Q18GRPRecord* x8254);

int x27682(struct Q18GRPRecord* x8259, struct Q18GRPRecord* x8260);

int x27726(void* x6823);

int x27729(void* x6826, void* x6827);

int x27736(void* x6833);

int x27739(void* x6836, void* x6837);

int x27746(int x8287);

int x27748(int x8292, int x8293);

int x27801(struct AGGRecord_Q18GRPRecord* x223, struct AGGRecord_Q18GRPRecord* x224);

int x8685(void* x8679, void* x8680, void* x8681);
/* GLOBAL VARS */

struct timeval x3220;
int main(int argc, char** argv) {
  FILE* x3728 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x3729 = 0;
  int x3730 = x3729;
  int* x3731 = &x3730;
  int x3732 = fscanf(x3728, "%d", x3731);
  pclose(x3728);
  struct LINEITEMRecord** x5052 = (struct LINEITEMRecord**)malloc(x3730 * sizeof(struct LINEITEMRecord*));
  memset(x5052, 0, x3730 * sizeof(struct LINEITEMRecord*));
  int x3736 = O_RDONLY;
  int x3737 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x3736);
  struct stat x3738 = (struct stat){0};
  /* VAR */ struct stat x3739 = x3738;
  struct stat x3740 = x3739;
  struct stat* x3741 = &x3740;
  int x3742 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x3741);
  size_t x3743 = x3741->st_size;
  int x3744 = PROT_READ;
  int x3745 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x3743, x3744, x3745, x3737, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x3730);
    /* VAR */ int ite22966 = 0;
    if(x6) {
      char x26539 = *x3;
      int x26540 = x26539!=('\0');
      ite22966 = x26540;
    } else {
      
      ite22966 = 0;
    };
    int x21344 = ite22966;
    if (!(x21344)) break; 
    
    /* VAR */ int x3753 = 0;
    int x3754 = x3753;
    int* x3755 = &x3754;
    char* x3756 = strntoi_unchecked(x3, x3755);
    x3 = x3756;
    /* VAR */ int x3758 = 0;
    int x3759 = x3758;
    int* x3760 = &x3759;
    char* x3761 = strntoi_unchecked(x3, x3760);
    x3 = x3761;
    /* VAR */ int x3763 = 0;
    int x3764 = x3763;
    int* x3765 = &x3764;
    char* x3766 = strntoi_unchecked(x3, x3765);
    x3 = x3766;
    /* VAR */ int x3768 = 0;
    int x3769 = x3768;
    int* x3770 = &x3769;
    char* x3771 = strntoi_unchecked(x3, x3770);
    x3 = x3771;
    /* VAR */ double x3773 = 0.0;
    double x3774 = x3773;
    double* x3775 = &x3774;
    char* x3776 = strntod_unchecked(x3, x3775);
    x3 = x3776;
    /* VAR */ double x3778 = 0.0;
    double x3779 = x3778;
    double* x3780 = &x3779;
    char* x3781 = strntod_unchecked(x3, x3780);
    x3 = x3781;
    /* VAR */ double x3783 = 0.0;
    double x3784 = x3783;
    double* x3785 = &x3784;
    char* x3786 = strntod_unchecked(x3, x3785);
    x3 = x3786;
    /* VAR */ double x3788 = 0.0;
    double x3789 = x3788;
    double* x3790 = &x3789;
    char* x3791 = strntod_unchecked(x3, x3790);
    x3 = x3791;
    char x3793 = *x3;
    /* VAR */ char x3794 = x3793;
    x3 += 1;
    x3 += 1;
    char x3797 = x3794;
    char x3798 = *x3;
    /* VAR */ char x3799 = x3798;
    x3 += 1;
    x3 += 1;
    char x3802 = x3799;
    /* VAR */ int x3803 = 0;
    int x3804 = x3803;
    int* x3805 = &x3804;
    char* x3806 = strntoi_unchecked(x3, x3805);
    x3 = x3806;
    /* VAR */ int x3808 = 0;
    int x3809 = x3808;
    int* x3810 = &x3809;
    char* x3811 = strntoi_unchecked(x3, x3810);
    x3 = x3811;
    /* VAR */ int x3813 = 0;
    int x3814 = x3813;
    int* x3815 = &x3814;
    char* x3816 = strntoi_unchecked(x3, x3815);
    x3 = x3816;
    int x3818 = x3804*(10000);
    int x3819 = x3809*(100);
    int x3820 = x3818+(x3819);
    int x3821 = x3820+(x3814);
    /* VAR */ int x3822 = 0;
    int x3823 = x3822;
    int* x3824 = &x3823;
    char* x3825 = strntoi_unchecked(x3, x3824);
    x3 = x3825;
    /* VAR */ int x3827 = 0;
    int x3828 = x3827;
    int* x3829 = &x3828;
    char* x3830 = strntoi_unchecked(x3, x3829);
    x3 = x3830;
    /* VAR */ int x3832 = 0;
    int x3833 = x3832;
    int* x3834 = &x3833;
    char* x3835 = strntoi_unchecked(x3, x3834);
    x3 = x3835;
    int x3837 = x3823*(10000);
    int x3838 = x3828*(100);
    int x3839 = x3837+(x3838);
    int x3840 = x3839+(x3833);
    /* VAR */ int x3841 = 0;
    int x3842 = x3841;
    int* x3843 = &x3842;
    char* x3844 = strntoi_unchecked(x3, x3843);
    x3 = x3844;
    /* VAR */ int x3846 = 0;
    int x3847 = x3846;
    int* x3848 = &x3847;
    char* x3849 = strntoi_unchecked(x3, x3848);
    x3 = x3849;
    /* VAR */ int x3851 = 0;
    int x3852 = x3851;
    int* x3853 = &x3852;
    char* x3854 = strntoi_unchecked(x3, x3853);
    x3 = x3854;
    int x3856 = x3842*(10000);
    int x3857 = x3847*(100);
    int x3858 = x3856+(x3857);
    int x3859 = x3858+(x3852);
    char* x5178 = (char*)malloc(26 * sizeof(char));
    memset(x5178, 0, 26 * sizeof(char));
    /* VAR */ char* x3861 = x3;
    while(1) {
      
      char x3862 = *x3;
      int x3863 = x3862!=('|');
      /* VAR */ int ite23087 = 0;
      if(x3863) {
        char x26659 = *x3;
        int x26660 = x26659!=('\n');
        ite23087 = x26660;
      } else {
        
        ite23087 = 0;
      };
      int x21458 = ite23087;
      if (!(x21458)) break; 
      
      x3 += 1;
    };
    char* x3869 = x3861;
    int x3870 = x3 - x3869;
    char* x3871 = x3861;
    char* x3872 = strncpy(x5178, x3871, x3870);
    x3 += 1;
    char* x5196 = (char*)malloc(11 * sizeof(char));
    memset(x5196, 0, 11 * sizeof(char));
    /* VAR */ char* x3880 = x3;
    while(1) {
      
      char x3881 = *x3;
      int x3882 = x3881!=('|');
      /* VAR */ int ite23110 = 0;
      if(x3882) {
        char x26681 = *x3;
        int x26682 = x26681!=('\n');
        ite23110 = x26682;
      } else {
        
        ite23110 = 0;
      };
      int x21474 = ite23110;
      if (!(x21474)) break; 
      
      x3 += 1;
    };
    char* x3888 = x3880;
    int x3889 = x3 - x3888;
    char* x3890 = x3880;
    char* x3891 = strncpy(x5196, x3890, x3889);
    x3 += 1;
    char* x5214 = (char*)malloc(45 * sizeof(char));
    memset(x5214, 0, 45 * sizeof(char));
    /* VAR */ char* x3899 = x3;
    while(1) {
      
      char x3900 = *x3;
      int x3901 = x3900!=('|');
      /* VAR */ int ite23133 = 0;
      if(x3901) {
        char x26703 = *x3;
        int x26704 = x26703!=('\n');
        ite23133 = x26704;
      } else {
        
        ite23133 = 0;
      };
      int x21490 = ite23133;
      if (!(x21490)) break; 
      
      x3 += 1;
    };
    char* x3907 = x3899;
    int x3908 = x3 - x3907;
    char* x3909 = x3899;
    char* x3910 = strncpy(x5214, x3909, x3908);
    x3 += 1;
    struct LINEITEMRecord* x5880 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x5880, 0, 1 * sizeof(struct LINEITEMRecord));
    x5880->L_ORDERKEY = x3754; x5880->L_PARTKEY = x3759; x5880->L_SUPPKEY = x3764; x5880->L_LINENUMBER = x3769; x5880->L_QUANTITY = x3774; x5880->L_EXTENDEDPRICE = x3779; x5880->L_DISCOUNT = x3784; x5880->L_TAX = x3789; x5880->L_RETURNFLAG = x3797; x5880->L_LINESTATUS = x3802; x5880->L_SHIPDATE = x3821; x5880->L_COMMITDATE = x3840; x5880->L_RECEIPTDATE = x3859; x5880->L_SHIPINSTRUCT = x5178; x5880->L_SHIPMODE = x5196; x5880->L_COMMENT = x5214;
    int x47 = x4;
    *(x5052 + x47) = x5880;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  FILE* x3923 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x3924 = 0;
  int x3925 = x3924;
  int* x3926 = &x3925;
  int x3927 = fscanf(x3923, "%d", x3926);
  pclose(x3923);
  struct ORDERSRecord** x5244 = (struct ORDERSRecord**)malloc(x3925 * sizeof(struct ORDERSRecord*));
  memset(x5244, 0, x3925 * sizeof(struct ORDERSRecord*));
  int x3931 = O_RDONLY;
  int x3932 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x3931);
  /* VAR */ struct stat x3933 = x3738;
  struct stat x3934 = x3933;
  struct stat* x3935 = &x3934;
  int x3936 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x3935);
  size_t x3937 = x3935->st_size;
  int x3938 = PROT_READ;
  int x3939 = MAP_PRIVATE;
  char* x55 = mmap(NULL, x3937, x3938, x3939, x3932, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    int x58 = x57<(x3925);
    /* VAR */ int ite23180 = 0;
    if(x58) {
      char x26749 = *x55;
      int x26750 = x26749!=('\0');
      ite23180 = x26750;
    } else {
      
      ite23180 = 0;
    };
    int x21530 = ite23180;
    if (!(x21530)) break; 
    
    /* VAR */ int x3947 = 0;
    int x3948 = x3947;
    int* x3949 = &x3948;
    char* x3950 = strntoi_unchecked(x55, x3949);
    x55 = x3950;
    /* VAR */ int x3952 = 0;
    int x3953 = x3952;
    int* x3954 = &x3953;
    char* x3955 = strntoi_unchecked(x55, x3954);
    x55 = x3955;
    char x3957 = *x55;
    /* VAR */ char x3958 = x3957;
    x55 += 1;
    x55 += 1;
    char x3961 = x3958;
    /* VAR */ double x3962 = 0.0;
    double x3963 = x3962;
    double* x3964 = &x3963;
    char* x3965 = strntod_unchecked(x55, x3964);
    x55 = x3965;
    /* VAR */ int x3967 = 0;
    int x3968 = x3967;
    int* x3969 = &x3968;
    char* x3970 = strntoi_unchecked(x55, x3969);
    x55 = x3970;
    /* VAR */ int x3972 = 0;
    int x3973 = x3972;
    int* x3974 = &x3973;
    char* x3975 = strntoi_unchecked(x55, x3974);
    x55 = x3975;
    /* VAR */ int x3977 = 0;
    int x3978 = x3977;
    int* x3979 = &x3978;
    char* x3980 = strntoi_unchecked(x55, x3979);
    x55 = x3980;
    int x3982 = x3968*(10000);
    int x3983 = x3973*(100);
    int x3984 = x3982+(x3983);
    int x3985 = x3984+(x3978);
    char* x5301 = (char*)malloc(16 * sizeof(char));
    memset(x5301, 0, 16 * sizeof(char));
    /* VAR */ char* x3987 = x55;
    while(1) {
      
      char x3988 = *x55;
      int x3989 = x3988!=('|');
      /* VAR */ int ite23233 = 0;
      if(x3989) {
        char x26801 = *x55;
        int x26802 = x26801!=('\n');
        ite23233 = x26802;
      } else {
        
        ite23233 = 0;
      };
      int x21576 = ite23233;
      if (!(x21576)) break; 
      
      x55 += 1;
    };
    char* x3995 = x3987;
    int x3996 = x55 - x3995;
    char* x3997 = x3987;
    char* x3998 = strncpy(x5301, x3997, x3996);
    x55 += 1;
    char* x5319 = (char*)malloc(16 * sizeof(char));
    memset(x5319, 0, 16 * sizeof(char));
    /* VAR */ char* x4006 = x55;
    while(1) {
      
      char x4007 = *x55;
      int x4008 = x4007!=('|');
      /* VAR */ int ite23256 = 0;
      if(x4008) {
        char x26823 = *x55;
        int x26824 = x26823!=('\n');
        ite23256 = x26824;
      } else {
        
        ite23256 = 0;
      };
      int x21592 = ite23256;
      if (!(x21592)) break; 
      
      x55 += 1;
    };
    char* x4014 = x4006;
    int x4015 = x55 - x4014;
    char* x4016 = x4006;
    char* x4017 = strncpy(x5319, x4016, x4015);
    x55 += 1;
    /* VAR */ int x4024 = 0;
    int x4025 = x4024;
    int* x4026 = &x4025;
    char* x4027 = strntoi_unchecked(x55, x4026);
    x55 = x4027;
    char* x5342 = (char*)malloc(80 * sizeof(char));
    memset(x5342, 0, 80 * sizeof(char));
    /* VAR */ char* x4030 = x55;
    while(1) {
      
      char x4031 = *x55;
      int x4032 = x4031!=('|');
      /* VAR */ int ite23284 = 0;
      if(x4032) {
        char x26850 = *x55;
        int x26851 = x26850!=('\n');
        ite23284 = x26851;
      } else {
        
        ite23284 = 0;
      };
      int x21613 = ite23284;
      if (!(x21613)) break; 
      
      x55 += 1;
    };
    char* x4038 = x4030;
    int x4039 = x55 - x4038;
    char* x4040 = x4030;
    char* x4041 = strncpy(x5342, x4040, x4039);
    x55 += 1;
    struct ORDERSRecord* x6010 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x6010, 0, 1 * sizeof(struct ORDERSRecord));
    x6010->O_ORDERKEY = x3948; x6010->O_CUSTKEY = x3953; x6010->O_ORDERSTATUS = x3961; x6010->O_TOTALPRICE = x3963; x6010->O_ORDERDATE = x3985; x6010->O_ORDERPRIORITY = x5301; x6010->O_CLERK = x5319; x6010->O_SHIPPRIORITY = x4025; x6010->O_COMMENT = x5342;
    int x91 = x56;
    *(x5244 + x91) = x6010;
    int x93 = x56;
    int x94 = x93+(1);
    x56 = x94;
  };
  FILE* x4054 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x4055 = 0;
  int x4056 = x4055;
  int* x4057 = &x4056;
  int x4058 = fscanf(x4054, "%d", x4057);
  pclose(x4054);
  struct CUSTOMERRecord** x5372 = (struct CUSTOMERRecord**)malloc(x4056 * sizeof(struct CUSTOMERRecord*));
  memset(x5372, 0, x4056 * sizeof(struct CUSTOMERRecord*));
  int x4062 = O_RDONLY;
  int x4063 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x4062);
  /* VAR */ struct stat x4064 = x3738;
  struct stat x4065 = x4064;
  struct stat* x4066 = &x4065;
  int x4067 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x4066);
  size_t x4068 = x4066->st_size;
  int x4069 = PROT_READ;
  int x4070 = MAP_PRIVATE;
  char* x99 = mmap(NULL, x4068, x4069, x4070, x4063, 0);
  /* VAR */ int x100 = 0;
  while(1) {
    
    int x101 = x100;
    int x102 = x101<(x4056);
    /* VAR */ int ite23331 = 0;
    if(x102) {
      char x26896 = *x99;
      int x26897 = x26896!=('\0');
      ite23331 = x26897;
    } else {
      
      ite23331 = 0;
    };
    int x21653 = ite23331;
    if (!(x21653)) break; 
    
    /* VAR */ int x4078 = 0;
    int x4079 = x4078;
    int* x4080 = &x4079;
    char* x4081 = strntoi_unchecked(x99, x4080);
    x99 = x4081;
    char* x5395 = (char*)malloc(26 * sizeof(char));
    memset(x5395, 0, 26 * sizeof(char));
    /* VAR */ char* x4084 = x99;
    while(1) {
      
      char x4085 = *x99;
      int x4086 = x4085!=('|');
      /* VAR */ int ite23350 = 0;
      if(x4086) {
        char x26914 = *x99;
        int x26915 = x26914!=('\n');
        ite23350 = x26915;
      } else {
        
        ite23350 = 0;
      };
      int x21665 = ite23350;
      if (!(x21665)) break; 
      
      x99 += 1;
    };
    char* x4092 = x4084;
    int x4093 = x99 - x4092;
    char* x4094 = x4084;
    char* x4095 = strncpy(x5395, x4094, x4093);
    x99 += 1;
    char* x5413 = (char*)malloc(41 * sizeof(char));
    memset(x5413, 0, 41 * sizeof(char));
    /* VAR */ char* x4103 = x99;
    while(1) {
      
      char x4104 = *x99;
      int x4105 = x4104!=('|');
      /* VAR */ int ite23373 = 0;
      if(x4105) {
        char x26936 = *x99;
        int x26937 = x26936!=('\n');
        ite23373 = x26937;
      } else {
        
        ite23373 = 0;
      };
      int x21681 = ite23373;
      if (!(x21681)) break; 
      
      x99 += 1;
    };
    char* x4111 = x4103;
    int x4112 = x99 - x4111;
    char* x4113 = x4103;
    char* x4114 = strncpy(x5413, x4113, x4112);
    x99 += 1;
    /* VAR */ int x4121 = 0;
    int x4122 = x4121;
    int* x4123 = &x4122;
    char* x4124 = strntoi_unchecked(x99, x4123);
    x99 = x4124;
    char* x5436 = (char*)malloc(16 * sizeof(char));
    memset(x5436, 0, 16 * sizeof(char));
    /* VAR */ char* x4127 = x99;
    while(1) {
      
      char x4128 = *x99;
      int x4129 = x4128!=('|');
      /* VAR */ int ite23401 = 0;
      if(x4129) {
        char x26963 = *x99;
        int x26964 = x26963!=('\n');
        ite23401 = x26964;
      } else {
        
        ite23401 = 0;
      };
      int x21702 = ite23401;
      if (!(x21702)) break; 
      
      x99 += 1;
    };
    char* x4135 = x4127;
    int x4136 = x99 - x4135;
    char* x4137 = x4127;
    char* x4138 = strncpy(x5436, x4137, x4136);
    x99 += 1;
    /* VAR */ double x4145 = 0.0;
    double x4146 = x4145;
    double* x4147 = &x4146;
    char* x4148 = strntod_unchecked(x99, x4147);
    x99 = x4148;
    char* x5459 = (char*)malloc(11 * sizeof(char));
    memset(x5459, 0, 11 * sizeof(char));
    /* VAR */ char* x4151 = x99;
    while(1) {
      
      char x4152 = *x99;
      int x4153 = x4152!=('|');
      /* VAR */ int ite23429 = 0;
      if(x4153) {
        char x26990 = *x99;
        int x26991 = x26990!=('\n');
        ite23429 = x26991;
      } else {
        
        ite23429 = 0;
      };
      int x21723 = ite23429;
      if (!(x21723)) break; 
      
      x99 += 1;
    };
    char* x4159 = x4151;
    int x4160 = x99 - x4159;
    char* x4161 = x4151;
    char* x4162 = strncpy(x5459, x4161, x4160);
    x99 += 1;
    char* x5477 = (char*)malloc(118 * sizeof(char));
    memset(x5477, 0, 118 * sizeof(char));
    /* VAR */ char* x4170 = x99;
    while(1) {
      
      char x4171 = *x99;
      int x4172 = x4171!=('|');
      /* VAR */ int ite23452 = 0;
      if(x4172) {
        char x27012 = *x99;
        int x27013 = x27012!=('\n');
        ite23452 = x27013;
      } else {
        
        ite23452 = 0;
      };
      int x21739 = ite23452;
      if (!(x21739)) break; 
      
      x99 += 1;
    };
    char* x4178 = x4170;
    int x4179 = x99 - x4178;
    char* x4180 = x4170;
    char* x4181 = strncpy(x5477, x4180, x4179);
    x99 += 1;
    struct CUSTOMERRecord* x6147 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x6147, 0, 1 * sizeof(struct CUSTOMERRecord));
    x6147->C_CUSTKEY = x4079; x6147->C_NAME = x5395; x6147->C_ADDRESS = x5413; x6147->C_NATIONKEY = x4122; x6147->C_PHONE = x5436; x6147->C_ACCTBAL = x4146; x6147->C_MKTSEGMENT = x5459; x6147->C_COMMENT = x5477;
    int x149 = x100;
    *(x5372 + x149) = x6147;
    int x151 = x100;
    int x152 = x151+(1);
    x100 = x152;
  };
  int x156 = 0;
  for(; x156 < 1 ; x156 += 1) {
    
    GHashTable* x27725 = g_hash_table_new(x27654, x27682);
    void*** x27733 = (void***){x27726};
    int* x27734 = (int*){x27729};
    GHashTable* x27735 = g_hash_table_new(x27733, x27734);
    void*** x27743 = (void***){x27736};
    int* x27744 = (int*){x27739};
    GHashTable* x27745 = g_hash_table_new(x27743, x27744);
    GHashTable* x27752 = g_hash_table_new(x27746, x27748);
    /* VAR */ struct timeval x27753 = x3220;
    struct timeval x27754 = x27753;
    /* VAR */ struct timeval x27755 = x3220;
    struct timeval x27756 = x27755;
    /* VAR */ struct timeval x27757 = x3220;
    struct timeval x27758 = x27757;
    struct timeval* x27759 = &x27756;
    gettimeofday(x27759, NULL);
    /* VAR */ int x27761 = 0;
    /* VAR */ int x27762 = 0;
    /* VAR */ int x27763 = 0;
    int* x27838 = &(x27801);
    GTree* x27839 = g_tree_new(x27838);
    /* VAR */ int x27840 = 0;
    /* VAR */ int x27841 = 0;
    while(1) {
      
      int x27843 = x27763;
      int x27844 = x27843<(x3730);
      if (!(x27844)) break; 
      
      int x1948 = x27763;
      struct LINEITEMRecord* x261 = x5052[x1948];
      int x263 = x261->L_ORDERKEY;
      void* x9274 = g_hash_table_lookup(x27752, x263);
      int x8355 = x9274==(NULL);
      /* VAR */ struct AGGRecord_Int* ite22532 = 0;
      if(x8355) {
        double* x22533 = (double*)malloc(1 * sizeof(double));
        memset(x22533, 0, 1 * sizeof(double));
        struct AGGRecord_Int* x22534 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
        memset(x22534, 0, 1 * sizeof(struct AGGRecord_Int));
        x22534->key = x263; x22534->aggs = x22533;
        g_hash_table_insert(x27752, x263, x22534);
        ite22532 = x22534;
      } else {
        
        ite22532 = x9274;
      };
      struct AGGRecord_Int* x8365 = ite22532;
      double* x268 = x8365->aggs;
      double x282 = x268[0];
      double x283 = x261->L_QUANTITY;
      double x284 = x282+(x283);
      *x268 = x284;
      int x1977 = x27763;
      int x291 = x1977+(1);
      x27763 = x291;
    };
    GList* x27897 = g_hash_table_get_keys(x27752);
    /* VAR */ GList* x27898 = x27897;
    int x27899 = g_hash_table_size(x27752);
    int x19526 = 0;
    for(; x19526 < x27899 ; x19526 += 1) {
      
      GList* x19527 = x27898;
      void* x19528 = g_list_nth_data(x19527, 0);
      GList* x19529 = g_list_next(x19527);
      x27898 = x19529;
      void* x19531 = g_hash_table_lookup(x27752, x19528);
      struct AGGRecord_Int* x19533 = (struct AGGRecord_Int*){x19531};
      double* x19534 = x19533->aggs;
      double x19535 = x19534[0];
      int x19536 = x19535>(300.0);
      if(x19536) {
        int x301 = x19533->key;
        void* x6904 = (void*){x301};
        void* x6905 = (void*){x19533};
        void* x6906 = g_hash_table_lookup(x27745, x6904);
        GList** x6907 = (GList**){x6906};
        GList** x6908 = NULL;
        int x6909 = x6907==(x6908);
        /* VAR */ GList** ite22635 = 0;
        if(x6909) {
          GList** x22636 = malloc(8);
          GList* x22637 = NULL;
          pointer_assign(x22636, x22637);
          ite22635 = x22636;
        } else {
          
          ite22635 = x6907;
        };
        GList** x6913 = ite22635;
        GList* x6914 = *(x6913);
        GList* x6915 = g_list_prepend(x6914, x6905);
        pointer_assign(x6913, x6915);
        void* x6917 = (void*){x6913};
        g_hash_table_insert(x27745, x6904, x6917);
      };
    };
    while(1) {
      
      int x27968 = x27761;
      int x27969 = x27968<(x3925);
      if (!(x27969)) break; 
      
      int x1997 = x27761;
      struct ORDERSRecord* x313 = x5244[x1997];
      int x315 = x313->O_ORDERKEY;
      void* x6927 = (void*){x315};
      void* x6928 = g_hash_table_lookup(x27745, x6927);
      GList** x6929 = (GList**){x6928};
      int x12997 = x6929!=(NULL);
      if(x12997) {
        GList* x8480 = *(x6929);
        /* VAR */ GList* x8481 = x8480;
        while(1) {
          
          GList* x8482 = x8481;
          GList* x8483 = NULL;
          int x8484 = x8482!=(x8483);
          if (!(x8484)) break; 
          
          GList* x8485 = x8481;
          void* x8486 = g_list_nth_data(x8485, 0);
          struct AGGRecord_Int* x8487 = (struct AGGRecord_Int*){x8486};
          GList* x8488 = x8481;
          GList* x8489 = g_list_next(x8488);
          x8481 = x8489;
          double* x8491 = x8487->aggs;
          int x8492 = x8487->key;
          int x8493 = x315==(x8492);
          if(x8493) {
            int x881 = x313->O_CUSTKEY;
            char x882 = x313->O_ORDERSTATUS;
            double x883 = x313->O_TOTALPRICE;
            int x884 = x313->O_ORDERDATE;
            char* x885 = x313->O_ORDERPRIORITY;
            char* x886 = x313->O_CLERK;
            int x887 = x313->O_SHIPPRIORITY;
            char* x888 = x313->O_COMMENT;
            struct AGGRecord_Int_ORDERSRecord* x6249 = (struct AGGRecord_Int_ORDERSRecord*)malloc(1 * sizeof(struct AGGRecord_Int_ORDERSRecord));
            memset(x6249, 0, 1 * sizeof(struct AGGRecord_Int_ORDERSRecord));
            x6249->key = x8492; x6249->aggs = x8491; x6249->O_ORDERKEY = x315; x6249->O_CUSTKEY = x881; x6249->O_ORDERSTATUS = x882; x6249->O_TOTALPRICE = x883; x6249->O_ORDERDATE = x884; x6249->O_ORDERPRIORITY = x885; x6249->O_CLERK = x886; x6249->O_SHIPPRIORITY = x887; x6249->O_COMMENT = x888;
            int x338 = x6249->O_CUSTKEY;
            void* x6952 = (void*){x338};
            void* x6953 = (void*){x6249};
            void* x6954 = g_hash_table_lookup(x27735, x6952);
            GList** x6955 = (GList**){x6954};
            GList** x6956 = NULL;
            int x6957 = x6955==(x6956);
            /* VAR */ GList** ite22731 = 0;
            if(x6957) {
              GList** x22732 = malloc(8);
              GList* x22733 = NULL;
              pointer_assign(x22732, x22733);
              ite22731 = x22732;
            } else {
              
              ite22731 = x6955;
            };
            GList** x6961 = ite22731;
            GList* x6962 = *(x6961);
            GList* x6963 = g_list_prepend(x6962, x6953);
            pointer_assign(x6961, x6963);
            void* x6965 = (void*){x6961};
            g_hash_table_insert(x27735, x6952, x6965);
          };
        };
      };
      int x2043 = x27761;
      int x346 = x2043+(1);
      x27761 = x346;
    };
    while(1) {
      
      int x28068 = x27762;
      int x28069 = x28068<(x4056);
      if (!(x28069)) break; 
      
      int x2053 = x27762;
      struct CUSTOMERRecord* x356 = x5372[x2053];
      int x358 = x356->C_CUSTKEY;
      void* x6978 = (void*){x358};
      void* x6979 = g_hash_table_lookup(x27735, x6978);
      GList** x6980 = (GList**){x6979};
      int x13088 = x6980!=(NULL);
      if(x13088) {
        GList* x8591 = *(x6980);
        /* VAR */ GList* x8592 = x8591;
        while(1) {
          
          GList* x8593 = x8592;
          GList* x8594 = NULL;
          int x8595 = x8593!=(x8594);
          if (!(x8595)) break; 
          
          GList* x8596 = x8592;
          void* x8597 = g_list_nth_data(x8596, 0);
          struct AGGRecord_Int_ORDERSRecord* x8598 = (struct AGGRecord_Int_ORDERSRecord*){x8597};
          GList* x8599 = x8592;
          GList* x8600 = g_list_next(x8599);
          x8592 = x8600;
          int x8602 = x8598->O_CUSTKEY;
          int x8603 = x8602==(x358);
          if(x8603) {
            int x980 = x8598->key;
            double* x981 = x8598->aggs;
            int x982 = x8598->O_ORDERKEY;
            char x983 = x8598->O_ORDERSTATUS;
            double x984 = x8598->O_TOTALPRICE;
            int x985 = x8598->O_ORDERDATE;
            char* x986 = x8598->O_ORDERPRIORITY;
            char* x987 = x8598->O_CLERK;
            int x988 = x8598->O_SHIPPRIORITY;
            char* x989 = x8598->O_COMMENT;
            char* x990 = x356->C_NAME;
            char* x991 = x356->C_ADDRESS;
            int x992 = x356->C_NATIONKEY;
            char* x993 = x356->C_PHONE;
            double x994 = x356->C_ACCTBAL;
            char* x995 = x356->C_MKTSEGMENT;
            char* x996 = x356->C_COMMENT;
            struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord* x6291 = (struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord*)malloc(1 * sizeof(struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord));
            memset(x6291, 0, 1 * sizeof(struct AGGRecord_Int_ORDERSRecord_CUSTOMERRecord));
            x6291->key = x980; x6291->aggs = x981; x6291->O_ORDERKEY = x982; x6291->O_CUSTKEY = x8602; x6291->O_ORDERSTATUS = x983; x6291->O_TOTALPRICE = x984; x6291->O_ORDERDATE = x985; x6291->O_ORDERPRIORITY = x986; x6291->O_CLERK = x987; x6291->O_SHIPPRIORITY = x988; x6291->O_COMMENT = x989; x6291->C_CUSTKEY = x358; x6291->C_NAME = x990; x6291->C_ADDRESS = x991; x6291->C_NATIONKEY = x992; x6291->C_PHONE = x993; x6291->C_ACCTBAL = x994; x6291->C_MKTSEGMENT = x995; x6291->C_COMMENT = x996;
            char* x413 = x6291->C_NAME;
            int x414 = x6291->C_CUSTKEY;
            int x415 = x6291->O_ORDERKEY;
            int x416 = x6291->O_ORDERDATE;
            double x417 = x6291->O_TOTALPRICE;
            struct Q18GRPRecord* x6299 = (struct Q18GRPRecord*)malloc(1 * sizeof(struct Q18GRPRecord));
            memset(x6299, 0, 1 * sizeof(struct Q18GRPRecord));
            x6299->C_NAME = x413; x6299->C_CUSTKEY = x414; x6299->O_ORDERKEY = x415; x6299->O_ORDERDATE = x416; x6299->O_TOTALPRICE = x417;
            void* x8633 = g_hash_table_lookup(x27725, x6299);
            int x8574 = x8633==(NULL);
            /* VAR */ struct AGGRecord_Q18GRPRecord* ite22855 = 0;
            if(x8574) {
              double* x22856 = (double*)malloc(1 * sizeof(double));
              memset(x22856, 0, 1 * sizeof(double));
              struct AGGRecord_Q18GRPRecord* x22857 = (struct AGGRecord_Q18GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q18GRPRecord));
              memset(x22857, 0, 1 * sizeof(struct AGGRecord_Q18GRPRecord));
              x22857->key = x6299; x22857->aggs = x22856;
              g_hash_table_insert(x27725, x6299, x22857);
              ite22855 = x22857;
            } else {
              
              ite22855 = x8633;
            };
            struct AGGRecord_Q18GRPRecord* x8584 = ite22855;
            double* x423 = x8584->aggs;
            double x437 = x423[0];
            double* x438 = x6291->aggs;
            double x439 = x438[0];
            double x440 = x437+(x439);
            *x423 = x440;
          };
        };
      };
      int x2179 = x27762;
      int x451 = x2179+(1);
      x27762 = x451;
    };
    GList* x28199 = g_hash_table_get_keys(x27725);
    /* VAR */ GList* x28200 = x28199;
    int x28201 = g_hash_table_size(x27725);
    int x19782 = 0;
    for(; x19782 < x28201 ; x19782 += 1) {
      
      GList* x19783 = x28200;
      void* x19784 = g_list_nth_data(x19783, 0);
      GList* x19785 = g_list_next(x19783);
      x28200 = x19785;
      void* x19787 = g_hash_table_lookup(x27725, x19784);
      struct AGGRecord_Q18GRPRecord* x19789 = (struct AGGRecord_Q18GRPRecord*){x19787};
      g_tree_insert(x27839, x19789, x19789);
    };
    while(1) {
      
      int x2188 = x27840;
      int x462 = !(x2188);
      /* VAR */ int ite24683 = 0;
      if(x462) {
        int x28226 = g_tree_nnodes(x27839);
        int x28227 = x28226!=(0);
        ite24683 = x28227;
      } else {
        
        ite24683 = 0;
      };
      int x22904 = ite24683;
      if (!(x22904)) break; 
      
      void* x8678 = NULL;
      void** x8686 = &(x8678);
      g_tree_foreach(x27839, x8685, x8686);
      struct AGGRecord_Q18GRPRecord* x8688 = (struct AGGRecord_Q18GRPRecord*){x8678};
      int x8689 = g_tree_remove(x27839, x8688);
      int x2196 = x27841;
      int x472 = x2196>=(100);
      if(x472) {
        x27840 = 1;
      } else {
        
        double* x474 = x8688->aggs;
        struct Q18GRPRecord* x475 = x8688->key;
        char* x476 = x475->C_NAME;
        int x478 = x475->C_CUSTKEY;
        int x479 = x475->O_ORDERKEY;
        int x480 = x475->O_ORDERDATE;
        char* x481 = ltoa(x480);
        double x482 = x475->O_TOTALPRICE;
        double x483 = x474[0];
        printf("%s|%d|%d|%s|%.2f|%.2f\n", x476, x478, x479, x481, x482, x483);
        int x2211 = x27841;
        int x486 = x2211+(1);
        x27841 = x486;
      };
    };
    int x28261 = x27841;
    printf("(%d rows)\n", x28261);
    struct timeval* x28263 = &x27758;
    gettimeofday(x28263, NULL);
    struct timeval* x28265 = &x27754;
    struct timeval* x28266 = &x27758;
    struct timeval* x28267 = &x27756;
    long x28268 = timeval_subtract(x28265, x28266, x28267);
    printf("Generated code run in %ld milliseconds.\n", x28268);
  };
}
/* ----------- FUNCTIONS ----------- */
int x27654(struct Q18GRPRecord* x8254) {
  char* x14632 = x8254->C_NAME;
  int x17450 = strlen(x14632);
  /* VAR */ int x15568 = 0;
  /* VAR */ int x15569 = 0;
  while(1) {
    
    int x15570 = x15568;
    int x15571 = x15570<(x17450);
    if (!(x15571)) break; 
    
    int x15572 = x15569;
    int x15573 = x15568;
    char* x17458 = pointer_add(x14632, x15573);
    char x17459 = *(x17458);
    int x15576 = x15572+(x17459);
    x15569 = x15576;
    int x15578 = x15568;
    int x15579 = x15578+(1);
    x15568 = x15579;
  };
  int x15582 = x15569;
  int x14634 = x8254->C_CUSTKEY;
  int x14636 = x8254->O_ORDERKEY;
  int x14638 = x8254->O_ORDERDATE;
  double x14640 = x8254->O_TOTALPRICE;
  int x15587 = (int){x14640};
  int x14642 = x15582+(x14634);
  int x14643 = x14642+(x14636);
  int x14644 = x14643+(x14638);
  int x14645 = x14644+(x15587);
  return x14645; 
}

int x27682(struct Q18GRPRecord* x8259, struct Q18GRPRecord* x8260) {
  char* x14649 = x8259->C_NAME;
  char* x14650 = x8260->C_NAME;
  int x15597 = strcmp(x14649, x14650);
  int x15598 = !(x15597);
  int x14652 = x8259->C_CUSTKEY;
  int x14653 = x8260->C_CUSTKEY;
  int x14654 = x14652==(x14653);
  int x14655 = x8259->O_ORDERKEY;
  int x14656 = x8260->O_ORDERKEY;
  int x14657 = x14655==(x14656);
  int x14658 = x8259->O_ORDERDATE;
  int x14659 = x8260->O_ORDERDATE;
  int x14660 = x14658==(x14659);
  double x14661 = x8259->O_TOTALPRICE;
  double x14662 = x8260->O_TOTALPRICE;
  int x14663 = x14661==(x14662);
  /* VAR */ int ite24153 = 0;
  if(x15598) {
    ite24153 = x14654;
  } else {
    
    ite24153 = 0;
  };
  int x22400 = ite24153;
  /* VAR */ int ite24160 = 0;
  if(x22400) {
    ite24160 = x14657;
  } else {
    
    ite24160 = 0;
  };
  int x22402 = ite24160;
  /* VAR */ int ite24167 = 0;
  if(x22402) {
    ite24167 = x14660;
  } else {
    
    ite24167 = 0;
  };
  int x22404 = ite24167;
  /* VAR */ int ite24174 = 0;
  if(x22404) {
    ite24174 = x14663;
  } else {
    
    ite24174 = 0;
  };
  int x22406 = ite24174;
  return x22406; 
}

int x27726(void* x6823) {
  int x6824 = g_direct_hash(x6823);
  return x6824; 
}

int x27729(void* x6826, void* x6827) {
  int x6828 = g_direct_equal(x6826, x6827);
  return x6828; 
}

int x27736(void* x6833) {
  int x6834 = g_direct_hash(x6833);
  return x6834; 
}

int x27739(void* x6836, void* x6837) {
  int x6838 = g_direct_equal(x6836, x6837);
  return x6838; 
}

int x27746(int x8287) {
  return x8287; 
}

int x27748(int x8292, int x8293) {
  int x8294 = x8292==(x8293);
  return x8294; 
}

int x27801(struct AGGRecord_Q18GRPRecord* x223, struct AGGRecord_Q18GRPRecord* x224) {
  struct Q18GRPRecord* x225 = x223->key;
  double x226 = x225->O_TOTALPRICE;
  struct Q18GRPRecord* x227 = x224->key;
  double x228 = x227->O_TOTALPRICE;
  int x229 = x226<(x228);
  /* VAR */ int ite22492 = 0;
  if(x229) {
    ite22492 = 1;
  } else {
    
    int x22494 = x226>(x228);
    /* VAR */ int ite22496 = 0;
    if(x22494) {
      ite22496 = -1;
    } else {
      
      int x22498 = x225->O_ORDERDATE;
      int x22499 = x227->O_ORDERDATE;
      int x22500 = x22498<(x22499);
      /* VAR */ int ite22502 = 0;
      if(x22500) {
        ite22502 = -1;
      } else {
        
        int x22504 = x22498>(x22499);
        /* VAR */ int ite22506 = 0;
        if(x22504) {
          ite22506 = 1;
        } else {
          
          ite22506 = 0;
        };
        int x22505 = ite22506;
        ite22502 = x22505;
      };
      int x22501 = ite22502;
      ite22496 = x22501;
    };
    int x22495 = ite22496;
    ite22492 = x22495;
  };
  int x238 = ite22492;
  return x238; 
}

int x8685(void* x8679, void* x8680, void* x8681) {
  struct AGGRecord_Q18GRPRecord** x8682 = (struct AGGRecord_Q18GRPRecord**){x8681};
  struct AGGRecord_Q18GRPRecord* x8683 = (struct AGGRecord_Q18GRPRecord*){x8680};
  pointer_assign(x8682, x8683);
  return 1; 
}
