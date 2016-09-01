#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_String;
  struct AGGRecord_OptimalString;
  struct ORDERSRecord;
  struct CUSTOMERRecord;
  
  struct AGGRecord_String {
  char* key;
  double* aggs;
  };
  
  struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
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
  
  


int x36721(char* x8309);

int x36739(char* x8314, char* x8315);

int x36745(void* x7122);

int x36748(void* x7125, void* x7126);

int x36955(struct AGGRecord_OptimalString* x293, struct AGGRecord_OptimalString* x294);

int x8746(void* x8740, void* x8741, void* x8742);
/* GLOBAL VARS */

struct timeval x4143;
int main(int argc, char** argv) {
  FILE* x4728 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x4729 = 0;
  int x4730 = x4729;
  int* x4731 = &x4730;
  int x4732 = fscanf(x4728, "%d", x4731);
  pclose(x4728);
  struct CUSTOMERRecord* x5790 = (struct CUSTOMERRecord*)malloc(x4730 * sizeof(struct CUSTOMERRecord));
  memset(x5790, 0, x4730 * sizeof(struct CUSTOMERRecord));
  int x4736 = O_RDONLY;
  int x4737 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x4736);
  struct stat x4738 = (struct stat){0};
  /* VAR */ struct stat x4739 = x4738;
  struct stat x4740 = x4739;
  struct stat* x4741 = &x4740;
  int x4742 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x4741);
  int x4744 = PROT_READ;
  int x4745 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x4741->st_size), x4744, x4745, x4737, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite19853 = 0;
    if((x5<(x4730))) {
      char x35656 = *x3;
      ite19853 = (x35656!=('\0'));
    } else {
      
      ite19853 = 0;
    };
    int x18559 = ite19853;
    if (!(x18559)) break; 
    
    /* VAR */ int x4753 = 0;
    int x4754 = x4753;
    int* x4755 = &x4754;
    char* x4756 = strntoi_unchecked(x3, x4755);
    x3 = x4756;
    char* x5814 = (char*)malloc(26 * sizeof(char));
    memset(x5814, 0, 26 * sizeof(char));
    /* VAR */ char* x4759 = x3;
    while(1) {
      
      char x4760 = *x3;
      /* VAR */ int ite19872 = 0;
      if((x4760!=('|'))) {
        char x35674 = *x3;
        ite19872 = (x35674!=('\n'));
      } else {
        
        ite19872 = 0;
      };
      int x18571 = ite19872;
      if (!(x18571)) break; 
      
      x3 += 1;
    };
    char* x4767 = x4759;
    int x4768 = x3 - x4767;
    char* x4769 = x4759;
    char* x4770 = strncpy(x5814, x4769, x4768);
    x3 += 1;
    char* x5832 = (char*)malloc(41 * sizeof(char));
    memset(x5832, 0, 41 * sizeof(char));
    /* VAR */ char* x4778 = x3;
    while(1) {
      
      char x4779 = *x3;
      /* VAR */ int ite19895 = 0;
      if((x4779!=('|'))) {
        char x35696 = *x3;
        ite19895 = (x35696!=('\n'));
      } else {
        
        ite19895 = 0;
      };
      int x18587 = ite19895;
      if (!(x18587)) break; 
      
      x3 += 1;
    };
    char* x4786 = x4778;
    int x4787 = x3 - x4786;
    char* x4788 = x4778;
    char* x4789 = strncpy(x5832, x4788, x4787);
    x3 += 1;
    /* VAR */ int x4796 = 0;
    int x4797 = x4796;
    int* x4798 = &x4797;
    char* x4799 = strntoi_unchecked(x3, x4798);
    x3 = x4799;
    char* x5855 = (char*)malloc(16 * sizeof(char));
    memset(x5855, 0, 16 * sizeof(char));
    /* VAR */ char* x4802 = x3;
    while(1) {
      
      char x4803 = *x3;
      /* VAR */ int ite19923 = 0;
      if((x4803!=('|'))) {
        char x35723 = *x3;
        ite19923 = (x35723!=('\n'));
      } else {
        
        ite19923 = 0;
      };
      int x18608 = ite19923;
      if (!(x18608)) break; 
      
      x3 += 1;
    };
    char* x4810 = x4802;
    int x4811 = x3 - x4810;
    char* x4812 = x4802;
    char* x4813 = strncpy(x5855, x4812, x4811);
    x3 += 1;
    /* VAR */ double x4820 = 0.0;
    double x4821 = x4820;
    double* x4822 = &x4821;
    char* x4823 = strntod_unchecked(x3, x4822);
    x3 = x4823;
    char* x5878 = (char*)malloc(11 * sizeof(char));
    memset(x5878, 0, 11 * sizeof(char));
    /* VAR */ char* x4826 = x3;
    while(1) {
      
      char x4827 = *x3;
      /* VAR */ int ite19951 = 0;
      if((x4827!=('|'))) {
        char x35750 = *x3;
        ite19951 = (x35750!=('\n'));
      } else {
        
        ite19951 = 0;
      };
      int x18629 = ite19951;
      if (!(x18629)) break; 
      
      x3 += 1;
    };
    char* x4834 = x4826;
    int x4835 = x3 - x4834;
    char* x4836 = x4826;
    char* x4837 = strncpy(x5878, x4836, x4835);
    x3 += 1;
    char* x5896 = (char*)malloc(118 * sizeof(char));
    memset(x5896, 0, 118 * sizeof(char));
    /* VAR */ char* x4845 = x3;
    while(1) {
      
      char x4846 = *x3;
      /* VAR */ int ite19974 = 0;
      if((x4846!=('|'))) {
        char x35772 = *x3;
        ite19974 = (x35772!=('\n'));
      } else {
        
        ite19974 = 0;
      };
      int x18645 = ite19974;
      if (!(x18645)) break; 
      
      x3 += 1;
    };
    char* x4853 = x4845;
    int x4854 = x3 - x4853;
    char* x4855 = x4845;
    char* x4856 = strncpy(x5896, x4855, x4854);
    x3 += 1;
    struct CUSTOMERRecord* x6440 = (struct CUSTOMERRecord*)malloc(1 * sizeof(struct CUSTOMERRecord));
    memset(x6440, 0, 1 * sizeof(struct CUSTOMERRecord));
    x6440->C_CUSTKEY = x4754; x6440->C_NAME = x5814; x6440->C_ADDRESS = x5832; x6440->C_NATIONKEY = x4797; x6440->C_PHONE = x5855; x6440->C_ACCTBAL = x4821; x6440->C_MKTSEGMENT = x5878; x6440->C_COMMENT = x5896;
    int x53 = x4;
    struct CUSTOMERRecord x5916 = *x6440;
    *(x5790 + x53) = x5916;
    struct CUSTOMERRecord* x5918 = &(x5790[x53]);
    x6440 = x5918;
    int x55 = x4;
    x4 = (x55+(1));
  };
  FILE* x4869 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x4870 = 0;
  int x4871 = x4870;
  int* x4872 = &x4871;
  int x4873 = fscanf(x4869, "%d", x4872);
  pclose(x4869);
  struct ORDERSRecord* x5929 = (struct ORDERSRecord*)malloc(x4871 * sizeof(struct ORDERSRecord));
  memset(x5929, 0, x4871 * sizeof(struct ORDERSRecord));
  int x4877 = O_RDONLY;
  int x4878 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x4877);
  /* VAR */ struct stat x4879 = x4738;
  struct stat x4880 = x4879;
  struct stat* x4881 = &x4880;
  int x4882 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x4881);
  int x4884 = PROT_READ;
  int x4885 = MAP_PRIVATE;
  char* x61 = mmap(NULL, (x4881->st_size), x4884, x4885, x4878, 0);
  /* VAR */ int x62 = 0;
  while(1) {
    
    int x63 = x62;
    /* VAR */ int ite20024 = 0;
    if((x63<(x4871))) {
      char x35821 = *x61;
      ite20024 = (x35821!=('\0'));
    } else {
      
      ite20024 = 0;
    };
    int x18688 = ite20024;
    if (!(x18688)) break; 
    
    /* VAR */ int x4893 = 0;
    int x4894 = x4893;
    int* x4895 = &x4894;
    char* x4896 = strntoi_unchecked(x61, x4895);
    x61 = x4896;
    /* VAR */ int x4898 = 0;
    int x4899 = x4898;
    int* x4900 = &x4899;
    char* x4901 = strntoi_unchecked(x61, x4900);
    x61 = x4901;
    char x4903 = *x61;
    /* VAR */ char x4904 = x4903;
    x61 += 1;
    x61 += 1;
    char x4907 = x4904;
    /* VAR */ double x4908 = 0.0;
    double x4909 = x4908;
    double* x4910 = &x4909;
    char* x4911 = strntod_unchecked(x61, x4910);
    x61 = x4911;
    /* VAR */ int x4913 = 0;
    int x4914 = x4913;
    int* x4915 = &x4914;
    char* x4916 = strntoi_unchecked(x61, x4915);
    x61 = x4916;
    /* VAR */ int x4918 = 0;
    int x4919 = x4918;
    int* x4920 = &x4919;
    char* x4921 = strntoi_unchecked(x61, x4920);
    x61 = x4921;
    /* VAR */ int x4923 = 0;
    int x4924 = x4923;
    int* x4925 = &x4924;
    char* x4926 = strntoi_unchecked(x61, x4925);
    x61 = x4926;
    char* x5986 = (char*)malloc(16 * sizeof(char));
    memset(x5986, 0, 16 * sizeof(char));
    /* VAR */ char* x4933 = x61;
    while(1) {
      
      char x4934 = *x61;
      /* VAR */ int ite20077 = 0;
      if((x4934!=('|'))) {
        char x35873 = *x61;
        ite20077 = (x35873!=('\n'));
      } else {
        
        ite20077 = 0;
      };
      int x18734 = ite20077;
      if (!(x18734)) break; 
      
      x61 += 1;
    };
    char* x4941 = x4933;
    int x4942 = x61 - x4941;
    char* x4943 = x4933;
    char* x4944 = strncpy(x5986, x4943, x4942);
    x61 += 1;
    char* x6004 = (char*)malloc(16 * sizeof(char));
    memset(x6004, 0, 16 * sizeof(char));
    /* VAR */ char* x4952 = x61;
    while(1) {
      
      char x4953 = *x61;
      /* VAR */ int ite20100 = 0;
      if((x4953!=('|'))) {
        char x35895 = *x61;
        ite20100 = (x35895!=('\n'));
      } else {
        
        ite20100 = 0;
      };
      int x18750 = ite20100;
      if (!(x18750)) break; 
      
      x61 += 1;
    };
    char* x4960 = x4952;
    int x4961 = x61 - x4960;
    char* x4962 = x4952;
    char* x4963 = strncpy(x6004, x4962, x4961);
    x61 += 1;
    /* VAR */ int x4970 = 0;
    int x4971 = x4970;
    int* x4972 = &x4971;
    char* x4973 = strntoi_unchecked(x61, x4972);
    x61 = x4973;
    char* x6027 = (char*)malloc(80 * sizeof(char));
    memset(x6027, 0, 80 * sizeof(char));
    /* VAR */ char* x4976 = x61;
    while(1) {
      
      char x4977 = *x61;
      /* VAR */ int ite20128 = 0;
      if((x4977!=('|'))) {
        char x35922 = *x61;
        ite20128 = (x35922!=('\n'));
      } else {
        
        ite20128 = 0;
      };
      int x18771 = ite20128;
      if (!(x18771)) break; 
      
      x61 += 1;
    };
    char* x4984 = x4976;
    int x4985 = x61 - x4984;
    char* x4986 = x4976;
    char* x4987 = strncpy(x6027, x4986, x4985);
    x61 += 1;
    struct ORDERSRecord* x6573 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x6573, 0, 1 * sizeof(struct ORDERSRecord));
    x6573->O_ORDERKEY = x4894; x6573->O_CUSTKEY = x4899; x6573->O_ORDERSTATUS = x4907; x6573->O_TOTALPRICE = x4909; x6573->O_ORDERDATE = (((x4914*(10000))+((x4919*(100))))+(x4924)); x6573->O_ORDERPRIORITY = x5986; x6573->O_CLERK = x6004; x6573->O_SHIPPRIORITY = x4971; x6573->O_COMMENT = x6027;
    int x97 = x62;
    struct ORDERSRecord x6047 = *x6573;
    *(x5929 + x97) = x6047;
    struct ORDERSRecord* x6049 = &(x5929[x97]);
    x6573 = x6049;
    int x99 = x62;
    x62 = (x99+(1));
  };
  int x104 = 0;
  for(; x104 < 1 ; x104 += 1) {
    
    GHashTable* x36744 = g_hash_table_new(x36721, x36739);
    GHashTable* x36754 = g_hash_table_new(((void***){x36745}), ((int*){x36748}));
    double* x36755 = (double*)malloc(3 * sizeof(double));
    memset(x36755, 0, 3 * sizeof(double));
    struct AGGRecord_String* x36756 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x36756, 0, 1 * sizeof(struct AGGRecord_String));
    x36756->key = "AVG_C_ACCTBAL"; x36756->aggs = x36755;
    /* VAR */ struct timeval x36759 = x4143;
    struct timeval x36760 = x36759;
    /* VAR */ struct timeval x36761 = x4143;
    struct timeval x36762 = x36761;
    /* VAR */ struct timeval x36763 = x4143;
    struct timeval x36764 = x36763;
    struct timeval* x36765 = &x36762;
    gettimeofday(x36765, NULL);
    /* VAR */ int x36767 = 0;
    /* VAR */ struct AGGRecord_String* x36768 = NULL;
    while(1) {
      
      int x36770 = x36767;
      if (!((x36770<(x4730)))) break; 
      
      int x1667 = x36767;
      struct CUSTOMERRecord* x164 = &(x5790[x1667]);
      double x166 = x164->C_ACCTBAL;
      /* VAR */ int ite20787 = 0;
      if((x166>(0.0))) {
        char* x36778 = x164->C_PHONE;
        char* x36779 = pointer_add(x36778, 0);
        char x36780 = *(x36779);
        /* VAR */ int x36782 = 0;
        if((x36780==('2'))) {
          char* x36784 = pointer_add(x36778, 1);
          char x36785 = *(x36784);
          x36782 = (x36785==('3'));
        } else {
          
          x36782 = 0;
        };
        int x36790 = x36782;
        /* VAR */ int x36791 = 0;
        if(x36790) {
          x36791 = 1;
        } else {
          
          char* x36794 = pointer_add(x36778, 0);
          char x36795 = *(x36794);
          /* VAR */ int x36797 = 0;
          if((x36795==('2'))) {
            char* x36799 = pointer_add(x36778, 1);
            char x36800 = *(x36799);
            x36797 = (x36800==('9'));
          } else {
            
            x36797 = 0;
          };
          int x36805 = x36797;
          /* VAR */ int x36806 = 0;
          if(x36805) {
            x36806 = 1;
          } else {
            
            char* x36809 = pointer_add(x36778, 0);
            char x36810 = *(x36809);
            /* VAR */ int x36812 = 0;
            if((x36810==('2'))) {
              char* x36814 = pointer_add(x36778, 1);
              char x36815 = *(x36814);
              x36812 = (x36815==('2'));
            } else {
              
              x36812 = 0;
            };
            int x36820 = x36812;
            /* VAR */ int x36821 = 0;
            if(x36820) {
              x36821 = 1;
            } else {
              
              char* x36824 = pointer_add(x36778, 0);
              char x36825 = *(x36824);
              /* VAR */ int x36827 = 0;
              if((x36825==('2'))) {
                char* x36829 = pointer_add(x36778, 1);
                char x36830 = *(x36829);
                x36827 = (x36830==('0'));
              } else {
                
                x36827 = 0;
              };
              int x36835 = x36827;
              /* VAR */ int x36836 = 0;
              if(x36835) {
                x36836 = 1;
              } else {
                
                char* x36839 = pointer_add(x36778, 0);
                char x36840 = *(x36839);
                /* VAR */ int x36842 = 0;
                if((x36840==('2'))) {
                  char* x36844 = pointer_add(x36778, 1);
                  char x36845 = *(x36844);
                  x36842 = (x36845==('4'));
                } else {
                  
                  x36842 = 0;
                };
                int x36850 = x36842;
                /* VAR */ int x36851 = 0;
                if(x36850) {
                  x36851 = 1;
                } else {
                  
                  char* x36854 = pointer_add(x36778, 0);
                  char x36855 = *(x36854);
                  /* VAR */ int x36857 = 0;
                  if((x36855==('2'))) {
                    char* x36859 = pointer_add(x36778, 1);
                    char x36860 = *(x36859);
                    x36857 = (x36860==('6'));
                  } else {
                    
                    x36857 = 0;
                  };
                  int x36865 = x36857;
                  /* VAR */ int x36866 = 0;
                  if(x36865) {
                    x36866 = 1;
                  } else {
                    
                    char* x36869 = pointer_add(x36778, 0);
                    char x36870 = *(x36869);
                    /* VAR */ int x36872 = 0;
                    if((x36870==('2'))) {
                      char* x36874 = pointer_add(x36778, 1);
                      char x36875 = *(x36874);
                      x36872 = (x36875==('5'));
                    } else {
                      
                      x36872 = 0;
                    };
                    int x36880 = x36872;
                    x36866 = x36880;
                  };
                  int x36883 = x36866;
                  x36851 = x36883;
                };
                int x36886 = x36851;
                x36836 = x36886;
              };
              int x36889 = x36836;
              x36821 = x36889;
            };
            int x36892 = x36821;
            x36806 = x36892;
          };
          int x36895 = x36806;
          x36791 = x36895;
        };
        int x36898 = x36791;
        ite20787 = x36898;
      } else {
        
        ite20787 = 0;
      };
      int x19368 = ite20787;
      if(x19368) {
        double* x187 = x36756->aggs;
        double x201 = x187[0];
        *x187 = (x166+(x201));
        double x210 = x187[1];
        *(x187 + 1) = (x210+(1.0));
      };
      int x1722 = x36767;
      x36767 = (x1722+(1));
    };
    double* x36923 = x36756->aggs;
    double x36924 = x36923[0];
    double x36925 = x36923[1];
    *(x36923 + 2) = (x36924/(x36925));
    x36768 = x36756;
    struct AGGRecord_String* x36929 = x36768;
    double x36931 = ((double*) { x36929->aggs })[2];
    /* VAR */ int x36932 = 0;
    /* VAR */ int x36933 = 0;
    int* x36976 = &(x36955);
    GTree* x36977 = g_tree_new(x36976);
    /* VAR */ int x36978 = 0;
    /* VAR */ int x36979 = 0;
    while(1) {
      
      int x36981 = x36932;
      if (!((x36981<(x4730)))) break; 
      
      int x1851 = x36932;
      struct CUSTOMERRecord* x326 = &(x5790[x1851]);
      char* x328 = x326->C_PHONE;
      char* x15086 = pointer_add(x328, 0);
      char x15087 = *(x15086);
      /* VAR */ int ite20889 = 0;
      if((x15087==('2'))) {
        char* x36991 = pointer_add(x328, 1);
        char x36992 = *(x36991);
        ite20889 = (x36992==('3'));
      } else {
        
        ite20889 = 0;
      };
      int x19455 = ite20889;
      /* VAR */ int ite20899 = 0;
      if(x19455) {
        ite20899 = 1;
      } else {
        
        char* x37001 = pointer_add(x328, 0);
        char x37002 = *(x37001);
        /* VAR */ int x37004 = 0;
        if((x37002==('2'))) {
          char* x37006 = pointer_add(x328, 1);
          char x37007 = *(x37006);
          x37004 = (x37007==('9'));
        } else {
          
          x37004 = 0;
        };
        int x37012 = x37004;
        /* VAR */ int x37013 = 0;
        if(x37012) {
          x37013 = 1;
        } else {
          
          char* x37016 = pointer_add(x328, 0);
          char x37017 = *(x37016);
          /* VAR */ int x37019 = 0;
          if((x37017==('2'))) {
            char* x37021 = pointer_add(x328, 1);
            char x37022 = *(x37021);
            x37019 = (x37022==('2'));
          } else {
            
            x37019 = 0;
          };
          int x37027 = x37019;
          /* VAR */ int x37028 = 0;
          if(x37027) {
            x37028 = 1;
          } else {
            
            char* x37031 = pointer_add(x328, 0);
            char x37032 = *(x37031);
            /* VAR */ int x37034 = 0;
            if((x37032==('2'))) {
              char* x37036 = pointer_add(x328, 1);
              char x37037 = *(x37036);
              x37034 = (x37037==('0'));
            } else {
              
              x37034 = 0;
            };
            int x37042 = x37034;
            /* VAR */ int x37043 = 0;
            if(x37042) {
              x37043 = 1;
            } else {
              
              char* x37046 = pointer_add(x328, 0);
              char x37047 = *(x37046);
              /* VAR */ int x37049 = 0;
              if((x37047==('2'))) {
                char* x37051 = pointer_add(x328, 1);
                char x37052 = *(x37051);
                x37049 = (x37052==('4'));
              } else {
                
                x37049 = 0;
              };
              int x37057 = x37049;
              /* VAR */ int x37058 = 0;
              if(x37057) {
                x37058 = 1;
              } else {
                
                char* x37061 = pointer_add(x328, 0);
                char x37062 = *(x37061);
                /* VAR */ int x37064 = 0;
                if((x37062==('2'))) {
                  char* x37066 = pointer_add(x328, 1);
                  char x37067 = *(x37066);
                  x37064 = (x37067==('6'));
                } else {
                  
                  x37064 = 0;
                };
                int x37072 = x37064;
                /* VAR */ int x37073 = 0;
                if(x37072) {
                  x37073 = 1;
                } else {
                  
                  char* x37076 = pointer_add(x328, 0);
                  char x37077 = *(x37076);
                  /* VAR */ int x37079 = 0;
                  if((x37077==('2'))) {
                    char* x37081 = pointer_add(x328, 1);
                    char x37082 = *(x37081);
                    x37079 = (x37082==('5'));
                  } else {
                    
                    x37079 = 0;
                  };
                  int x37087 = x37079;
                  x37073 = x37087;
                };
                int x37090 = x37073;
                x37058 = x37090;
              };
              int x37093 = x37058;
              x37043 = x37093;
            };
            int x37096 = x37043;
            x37028 = x37096;
          };
          int x37099 = x37028;
          x37013 = x37099;
        };
        int x37102 = x37013;
        ite20899 = x37102;
      };
      int x19457 = ite20899;
      /* VAR */ int ite20913 = 0;
      if(x19457) {
        ite20913 = ((x326->C_ACCTBAL)>(x36931));
      } else {
        
        ite20913 = 0;
      };
      int x19459 = ite20913;
      if(x19459) {
        void* x7304 = (void*){(x326->C_CUSTKEY)};
        void* x7306 = g_hash_table_lookup(x36754, x7304);
        GList** x7307 = (GList**){x7306};
        GList** x7308 = NULL;
        /* VAR */ GList** ite19469 = 0;
        if((x7307==(x7308))) {
          GList** x19470 = malloc(8);
          GList* x19471 = NULL;
          pointer_assign(x19470, x19471);
          ite19469 = x19470;
        } else {
          
          ite19469 = x7307;
        };
        GList** x7313 = ite19469;
        GList* x7314 = *(x7313);
        GList* x7315 = g_list_prepend(x7314, ((void*){x326}));
        pointer_assign(x7313, x7315);
        g_hash_table_insert(x36754, x7304, ((void*){x7313}));
      };
      int x1874 = x36932;
      x36932 = (x1874+(1));
    };
    while(1) {
      
      int x37140 = x36933;
      if (!((x37140<(x4871)))) break; 
      
      int x1883 = x36933;
      struct ORDERSRecord* x359 = &(x5929[x1883]);
      int x361 = x359->O_CUSTKEY;
      void* x7330 = g_hash_table_lookup(x36754, ((void*){x361}));
      GList** x7331 = (GList**){x7330};
      if((x7331!=(NULL))) {
        GList* x8556 = *(x7331);
        /* VAR */ GList* x8557 = x8556;
        /* VAR */ GList** x8558 = x7331;
        while(1) {
          
          GList* x8559 = x8557;
          GList* x8560 = NULL;
          if (!((x8559!=(x8560)))) break; 
          
          GList* x8562 = x8557;
          void* x8563 = g_list_nth_data(x8562, 0);
          int x8567 = !(((((struct CUSTOMERRecord*){x8563})->C_CUSTKEY)==(x361)));
          if(x8567) {
            GList* x8568 = x8557;
            GList** x8570 = &((x8568->next));
            x8558 = x8570;
          } else {
            
            GList** x8572 = x8558;
            GList* x8573 = x8557;
            GList* x8574 = g_list_next(x8573);
            pointer_assign(x8572, x8574);
          };
          GList* x8577 = x8557;
          GList* x8578 = g_list_next(x8577);
          x8557 = x8578;
        };
      };
      int x1905 = x36933;
      x36933 = (x1905+(1));
    };
    GList* x37259 = g_hash_table_get_keys(x36754);
    /* VAR */ GList* x37260 = x37259;
    int x37261 = g_hash_table_size(x36754);
    int x16933 = 0;
    for(; x16933 < x37261 ; x16933 += 1) {
      
      GList* x16934 = x37260;
      void* x16935 = g_list_nth_data(x16934, 0);
      GList* x16936 = x37260;
      GList* x16937 = g_list_next(x16936);
      x37260 = x16937;
      void* x16939 = g_hash_table_lookup(x36754, x16935);
      GList* x16967 = *(((GList**){x16939}));
      /* VAR */ GList* x16968 = x16967;
      while(1) {
        
        GList* x8683 = x16968;
        GList* x8684 = NULL;
        if (!((x8683!=(x8684)))) break; 
        
        GList* x8686 = x16968;
        void* x8687 = g_list_nth_data(x8686, 0);
        struct CUSTOMERRecord* x8688 = (struct CUSTOMERRecord*){x8687};
        GList* x8689 = x16968;
        GList* x8690 = g_list_next(x8689);
        x16968 = x8690;
        int x15328 = (2-(0))+(1);
        char* x15329 = malloc(x15328);
        char* x15330 = pointer_add((x8688->C_PHONE), 0);
        int x15331 = x15328-(1);
        char* x15332 = strncpy(x15329, x15330, x15331);
        *(x15329 + x15331) = '\0';
        void* x8694 = g_hash_table_lookup(x36744, x15329);
        /* VAR */ struct AGGRecord_OptimalString* ite19750 = 0;
        if((x8694==(NULL))) {
          double* x19751 = (double*)malloc(2 * sizeof(double));
          memset(x19751, 0, 2 * sizeof(double));
          struct AGGRecord_OptimalString* x19752 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
          memset(x19752, 0, 1 * sizeof(struct AGGRecord_OptimalString));
          x19752->key = x15329; x19752->aggs = x19751;
          g_hash_table_insert(x36744, x15329, x19752);
          ite19750 = x19752;
        } else {
          
          ite19750 = x8694;
        };
        struct AGGRecord_OptimalString* x8696 = ite19750;
        double* x8702 = x8696->aggs;
        double x8703 = x8702[0];
        *x8702 = ((x8688->C_ACCTBAL)+(x8703));
        double x8707 = x8702[1];
        *(x8702 + 1) = (x8707+(1.0));
      };
    };
    GList* x37427 = g_hash_table_get_keys(x36744);
    /* VAR */ GList* x37428 = x37427;
    int x37429 = g_hash_table_size(x36744);
    int x17021 = 0;
    for(; x17021 < x37429 ; x17021 += 1) {
      
      GList* x17022 = x37428;
      void* x17023 = g_list_nth_data(x17022, 0);
      GList* x17024 = g_list_next(x17022);
      x37428 = x17024;
      void* x17026 = g_hash_table_lookup(x36744, x17023);
      struct AGGRecord_OptimalString* x17028 = (struct AGGRecord_OptimalString*){x17026};
      g_tree_insert(x36977, x17028, x17028);
    };
    while(1) {
      
      int x1959 = x36978;
      int x440 = !(x1959);
      /* VAR */ int ite21261 = 0;
      if(x440) {
        int x37454 = g_tree_nnodes(x36977);
        ite21261 = (x37454!=(0));
      } else {
        
        ite21261 = 0;
      };
      int x19798 = ite21261;
      if (!(x19798)) break; 
      
      void* x8739 = NULL;
      void** x8747 = &(x8739);
      g_tree_foreach(x36977, x8746, x8747);
      struct AGGRecord_OptimalString* x8749 = (struct AGGRecord_OptimalString*){x8739};
      int x8750 = g_tree_remove(x36977, x8749);
      if(0) {
        x36978 = 1;
      } else {
        
        double* x455 = x8749->aggs;
        double x456 = x455[1];
        double x457 = x455[0];
        printf("%s|%.0f|%.2f\n", (x8749->key), x456, x457);
        int x1978 = x36979;
        x36979 = (x1978+(1));
      };
    };
    int x37482 = x36979;
    printf("(%d rows)\n", x37482);
    struct timeval* x37484 = &x36764;
    gettimeofday(x37484, NULL);
    struct timeval* x37486 = &x36760;
    struct timeval* x37487 = &x36764;
    struct timeval* x37488 = &x36762;
    long x37489 = timeval_subtract(x37486, x37487, x37488);
    printf("Generated code run in %ld milliseconds.\n", x37489);
  };
}
/* ----------- FUNCTIONS ----------- */
int x36721(char* x8309) {
  int x14890 = strlen(x8309);
  /* VAR */ int x13419 = 0;
  /* VAR */ int x13420 = 0;
  while(1) {
    
    int x13421 = x13419;
    if (!((x13421<(x14890)))) break; 
    
    int x13423 = x13420;
    int x13424 = x13419;
    char* x14898 = pointer_add(x8309, x13424);
    char x14899 = *(x14898);
    x13420 = (x13423+(x14899));
    int x13429 = x13419;
    x13419 = (x13429+(1));
  };
  int x13433 = x13420;
  return x13433; 
}

int x36739(char* x8314, char* x8315) {
  int x13437 = strcmp(x8314, x8315);
  int x13438 = !(x13437);
  return x13438; 
}

int x36745(void* x7122) {
  int x7123 = g_direct_hash(x7122);
  return x7123; 
}

int x36748(void* x7125, void* x7126) {
  int x7127 = g_direct_equal(x7125, x7126);
  return x7127; 
}

int x36955(struct AGGRecord_OptimalString* x293, struct AGGRecord_OptimalString* x294) {
  char* x295 = x293->key;
  char* x15058 = pointer_add(x295, 0);
  char x15059 = *(x15058);
  char* x297 = x294->key;
  char* x15061 = pointer_add(x297, 0);
  char x15062 = *(x15061);
  /* VAR */ int res300 = (x15059-(x15062));
  int x301 = res300;
  if((x301==(0))) {
    char* x15068 = pointer_add(x295, 1);
    char x15069 = *(x15068);
    char* x15070 = pointer_add(x297, 1);
    char x15071 = *(x15070);
    res300 = (x15069-(x15071));
  };
  int x308 = res300;
  return x308; 
}

int x8746(void* x8740, void* x8741, void* x8742) {
  pointer_assign(((struct AGGRecord_OptimalString**){x8742}), ((struct AGGRecord_OptimalString*){x8741}));
  return 1; 
}
