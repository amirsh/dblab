#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_String;
  struct LINEITEMRecord;
  
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
  
  

/* GLOBAL VARS */

struct timeval x3711;
int main(int argc, char** argv) {
  FILE* x3892 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x3893 = 0;
  int x3894 = x3893;
  int* x3895 = &x3894;
  int x3896 = fscanf(x3892, "%d", x3895);
  pclose(x3892);
  struct LINEITEMRecord* x4472 = (struct LINEITEMRecord*)malloc(x3894 * sizeof(struct LINEITEMRecord));
  memset(x4472, 0, x3894 * sizeof(struct LINEITEMRecord));
  int x3900 = O_RDONLY;
  int x3901 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x3900);
  /* VAR */ struct stat x3903 = ((struct stat){0});
  struct stat x3904 = x3903;
  struct stat* x3905 = &x3904;
  int x3906 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x3905);
  int x3908 = PROT_READ;
  int x3909 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x3905->st_size), x3908, x3909, x3901, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite8827 = 0;
    if((x5<(x3894))) {
      char x12310 = *x3;
      ite8827 = (x12310!=('\0'));
    } else {
      
      ite8827 = 0;
    };
    int x8341 = ite8827;
    if (!(x8341)) break; 
    
    /* VAR */ int x3917 = 0;
    int x3918 = x3917;
    int* x3919 = &x3918;
    char* x3920 = strntoi_unchecked(x3, x3919);
    x3 = x3920;
    /* VAR */ int x3922 = 0;
    int x3923 = x3922;
    int* x3924 = &x3923;
    char* x3925 = strntoi_unchecked(x3, x3924);
    x3 = x3925;
    /* VAR */ int x3927 = 0;
    int x3928 = x3927;
    int* x3929 = &x3928;
    char* x3930 = strntoi_unchecked(x3, x3929);
    x3 = x3930;
    /* VAR */ int x3932 = 0;
    int x3933 = x3932;
    int* x3934 = &x3933;
    char* x3935 = strntoi_unchecked(x3, x3934);
    x3 = x3935;
    /* VAR */ double x3937 = 0.0;
    double x3938 = x3937;
    double* x3939 = &x3938;
    char* x3940 = strntod_unchecked(x3, x3939);
    x3 = x3940;
    /* VAR */ double x3942 = 0.0;
    double x3943 = x3942;
    double* x3944 = &x3943;
    char* x3945 = strntod_unchecked(x3, x3944);
    x3 = x3945;
    /* VAR */ double x3947 = 0.0;
    double x3948 = x3947;
    double* x3949 = &x3948;
    char* x3950 = strntod_unchecked(x3, x3949);
    x3 = x3950;
    /* VAR */ double x3952 = 0.0;
    double x3953 = x3952;
    double* x3954 = &x3953;
    char* x3955 = strntod_unchecked(x3, x3954);
    x3 = x3955;
    char x3957 = *x3;
    /* VAR */ char x3958 = x3957;
    x3 += 1;
    x3 += 1;
    char x3961 = x3958;
    char x3962 = *x3;
    /* VAR */ char x3963 = x3962;
    x3 += 1;
    x3 += 1;
    char x3966 = x3963;
    /* VAR */ int x3967 = 0;
    int x3968 = x3967;
    int* x3969 = &x3968;
    char* x3970 = strntoi_unchecked(x3, x3969);
    x3 = x3970;
    /* VAR */ int x3972 = 0;
    int x3973 = x3972;
    int* x3974 = &x3973;
    char* x3975 = strntoi_unchecked(x3, x3974);
    x3 = x3975;
    /* VAR */ int x3977 = 0;
    int x3978 = x3977;
    int* x3979 = &x3978;
    char* x3980 = strntoi_unchecked(x3, x3979);
    x3 = x3980;
    /* VAR */ int x3986 = 0;
    int x3987 = x3986;
    int* x3988 = &x3987;
    char* x3989 = strntoi_unchecked(x3, x3988);
    x3 = x3989;
    /* VAR */ int x3991 = 0;
    int x3992 = x3991;
    int* x3993 = &x3992;
    char* x3994 = strntoi_unchecked(x3, x3993);
    x3 = x3994;
    /* VAR */ int x3996 = 0;
    int x3997 = x3996;
    int* x3998 = &x3997;
    char* x3999 = strntoi_unchecked(x3, x3998);
    x3 = x3999;
    /* VAR */ int x4005 = 0;
    int x4006 = x4005;
    int* x4007 = &x4006;
    char* x4008 = strntoi_unchecked(x3, x4007);
    x3 = x4008;
    /* VAR */ int x4010 = 0;
    int x4011 = x4010;
    int* x4012 = &x4011;
    char* x4013 = strntoi_unchecked(x3, x4012);
    x3 = x4013;
    /* VAR */ int x4015 = 0;
    int x4016 = x4015;
    int* x4017 = &x4016;
    char* x4018 = strntoi_unchecked(x3, x4017);
    x3 = x4018;
    char* x4598 = (char*)malloc(26 * sizeof(char));
    memset(x4598, 0, 26 * sizeof(char));
    /* VAR */ char* x4025 = x3;
    while(1) {
      
      char x4026 = *x3;
      /* VAR */ int ite8948 = 0;
      if((x4026!=('|'))) {
        char x12430 = *x3;
        ite8948 = (x12430!=('\n'));
      } else {
        
        ite8948 = 0;
      };
      int x8455 = ite8948;
      if (!(x8455)) break; 
      
      x3 += 1;
    };
    char* x4033 = x4025;
    int x4034 = x3 - x4033;
    char* x4035 = x4025;
    char* x4036 = strncpy(x4598, x4035, x4034);
    x3 += 1;
    char* x4616 = (char*)malloc(11 * sizeof(char));
    memset(x4616, 0, 11 * sizeof(char));
    /* VAR */ char* x4044 = x3;
    while(1) {
      
      char x4045 = *x3;
      /* VAR */ int ite8971 = 0;
      if((x4045!=('|'))) {
        char x12452 = *x3;
        ite8971 = (x12452!=('\n'));
      } else {
        
        ite8971 = 0;
      };
      int x8471 = ite8971;
      if (!(x8471)) break; 
      
      x3 += 1;
    };
    char* x4052 = x4044;
    int x4053 = x3 - x4052;
    char* x4054 = x4044;
    char* x4055 = strncpy(x4616, x4054, x4053);
    x3 += 1;
    char* x4634 = (char*)malloc(45 * sizeof(char));
    memset(x4634, 0, 45 * sizeof(char));
    /* VAR */ char* x4063 = x3;
    while(1) {
      
      char x4064 = *x3;
      /* VAR */ int ite8994 = 0;
      if((x4064!=('|'))) {
        char x12474 = *x3;
        ite8994 = (x12474!=('\n'));
      } else {
        
        ite8994 = 0;
      };
      int x8487 = ite8994;
      if (!(x8487)) break; 
      
      x3 += 1;
    };
    char* x4071 = x4063;
    int x4072 = x3 - x4071;
    char* x4073 = x4063;
    char* x4074 = strncpy(x4634, x4073, x4072);
    x3 += 1;
    struct LINEITEMRecord* x4942 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x4942, 0, 1 * sizeof(struct LINEITEMRecord));
    x4942->L_ORDERKEY = x3918; x4942->L_PARTKEY = x3923; x4942->L_SUPPKEY = x3928; x4942->L_LINENUMBER = x3933; x4942->L_QUANTITY = x3938; x4942->L_EXTENDEDPRICE = x3943; x4942->L_DISCOUNT = x3948; x4942->L_TAX = x3953; x4942->L_RETURNFLAG = x3961; x4942->L_LINESTATUS = x3966; x4942->L_SHIPDATE = (((x3968*(10000))+((x3973*(100))))+(x3978)); x4942->L_COMMITDATE = (((x3987*(10000))+((x3992*(100))))+(x3997)); x4942->L_RECEIPTDATE = (((x4006*(10000))+((x4011*(100))))+(x4016)); x4942->L_SHIPINSTRUCT = x4598; x4942->L_SHIPMODE = x4616; x4942->L_COMMENT = x4634;
    int x47 = x4;
    struct LINEITEMRecord x4654 = *x4942;
    *(x4472 + x47) = x4654;
    struct LINEITEMRecord* x4656 = &(x4472[x47]);
    x4942 = x4656;
    int x49 = x4;
    x4 = (x49+(1));
  };
  int x54 = 0;
  for(; x54 < 1 ; x54 += 1) {
    
    double* x12760 = (double*)malloc(1 * sizeof(double));
    memset(x12760, 0, 1 * sizeof(double));
    struct AGGRecord_String* x12761 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x12761, 0, 1 * sizeof(struct AGGRecord_String));
    x12761->key = "Total"; x12761->aggs = x12760;
    struct LINEITEMRecord** x12764 = (struct LINEITEMRecord**)malloc(96 * sizeof(struct LINEITEMRecord*));
    memset(x12764, 0, 96 * sizeof(struct LINEITEMRecord*));
    int* x12765 = (int*)malloc(96 * sizeof(int));
    memset(x12765, 0, 96 * sizeof(int));
    int x7593 = 0;
    for(; x7593 < 96 ; x7593 += 1) {
      
      struct LINEITEMRecord* x7596 = (struct LINEITEMRecord*)malloc(((x3894/(96))*(4)) * sizeof(struct LINEITEMRecord));
      memset(x7596, 0, ((x3894/(96))*(4)) * sizeof(struct LINEITEMRecord));
      *(x12764 + x7593) = x7596;
    };
    /* VAR */ int x12777 = 0;
    int x7622 = 0;
    for(; x7622 < x3894 ; x7622 += 1) {
      
      struct LINEITEMRecord* x7623 = &(x4472[x7622]);
      int x7625 = (x7623->L_SHIPDATE)/(100);
      int x7631 = (((x7625/(100))-(1992))*(12))+(((x7625%(100))-(1)));
      int x7632 = x12765[x7631];
      struct LINEITEMRecord* x7633 = x12764[x7631];
      struct LINEITEMRecord x7634 = *x7623;
      *(x7633 + x7632) = x7634;
      struct LINEITEMRecord* x7636 = &(x7633[x7632]);
      x7623 = x7636;
      *(x12765 + x7631) = (x7632+(1));
      int x7640 = x12777;
      x12777 = (x7640+(1));
    };
    /* VAR */ struct timeval x12821 = x3711;
    struct timeval x12822 = x12821;
    /* VAR */ struct timeval x12823 = x3711;
    struct timeval x12824 = x12823;
    /* VAR */ struct timeval x12825 = x3711;
    struct timeval x12826 = x12825;
    struct timeval* x12827 = &x12824;
    gettimeofday(x12827, NULL);
    int x7702 = 48;
    for(; x7702 < 61 ; x7702 += 1) {
      
      int x7703 = x12765[x7702];
      struct LINEITEMRecord* x7704 = x12764[x7702];
      int x7679 = 0;
      for(; x7679 < x7703 ; x7679 += 1) {
        
        struct LINEITEMRecord* x7680 = &(x7704[x7679]);
        int x7681 = x7680->L_SHIPDATE;
        /* VAR */ int ite9353 = 0;
        if((x7681>=(19960101))) {
          /* VAR */ int x12971 = 0;
          if((x7681<(19970101))) {
            double x12973 = x7680->L_DISCOUNT;
            /* VAR */ int x12975 = 0;
            if((x12973>=(0.08))) {
              /* VAR */ int x12978 = 0;
              if((x12973<=(0.1))) {
                x12978 = ((x7680->L_QUANTITY)<(24.0));
              } else {
                
                x12978 = 0;
              };
              int x12985 = x12978;
              x12975 = x12985;
            } else {
              
              x12975 = 0;
            };
            int x12989 = x12975;
            x12971 = x12989;
          } else {
            
            x12971 = 0;
          };
          int x12993 = x12971;
          ite9353 = x12993;
        } else {
          
          ite9353 = 0;
        };
        int x8783 = ite9353;
        if(x8783) {
          double* x117 = x12761->aggs;
          double x131 = x117[0];
          *x117 = (((x7680->L_EXTENDEDPRICE)*((x7680->L_DISCOUNT)))+(x131));
        };
      };
    };
    double x13007 = ((double*) { x12761->aggs })[0];
    printf("%.4f\n", x13007);
    printf("(%d rows)\n", 1);
    struct timeval* x13010 = &x12826;
    gettimeofday(x13010, NULL);
    struct timeval* x13012 = &x12822;
    struct timeval* x13013 = &x12826;
    struct timeval* x13014 = &x12824;
    long x13015 = timeval_subtract(x13012, x13013, x13014);
    printf("Generated code run in %ld milliseconds.\n", x13015);
  };
}
/* ----------- FUNCTIONS ----------- */