#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct LINEITEMRecord;
  struct AGGRecord_OptimalString;
  struct NATIONRecord;
  struct ORDERSRecord;
  struct SUPPLIERRecord;
  struct Set_AGGRecord_OptimalString;
  
  struct LINEITEMRecord {
  int L_ORDERKEY;
  int L_SUPPKEY;
  int L_COMMITDATE;
  int L_RECEIPTDATE;
  };
  
  struct AGGRecord_OptimalString {
  char* key;
  double* aggs;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  };
  
  struct ORDERSRecord {
  int O_ORDERKEY;
  char O_ORDERSTATUS;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  char* S_NAME;
  int S_NATIONKEY;
  };
  
  struct Set_AGGRecord_OptimalString {
  int maxSize;
  struct AGGRecord_OptimalString* array;
  };
  
  


int x38412(struct AGGRecord_OptimalString* x294, struct AGGRecord_OptimalString* x295);

int x19651(void* x19645, void* x19646, void* x19647);
/* GLOBAL VARS */

struct timeval x13811;
int main(int argc, char** argv) {
  FILE* x14502 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x14503 = 0;
  int x14504 = x14503;
  int* x14505 = &x14504;
  int x14506 = fscanf(x14502, "%d", x14505);
  pclose(x14502);
  struct LINEITEMRecord* x16190 = (struct LINEITEMRecord*)malloc(x14504 * sizeof(struct LINEITEMRecord));
  memset(x16190, 0, x14504 * sizeof(struct LINEITEMRecord));
  int x14510 = O_RDONLY;
  int x14511 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x14510);
  struct stat x14512 = (struct stat){0};
  /* VAR */ struct stat x14513 = x14512;
  struct stat x14514 = x14513;
  struct stat* x14515 = &x14514;
  int x14516 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x14515);
  int x14518 = PROT_READ;
  int x14519 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x14515->st_size), x14518, x14519, x14511, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite30669 = 0;
    if((x5<(x14504))) {
      char x36923 = *x3;
      ite30669 = (x36923!=('\0'));
    } else {
      
      ite30669 = 0;
    };
    int x28908 = ite30669;
    if (!(x28908)) break; 
    
    /* VAR */ int x14527 = 0;
    int x14528 = x14527;
    int* x14529 = &x14528;
    char* x14530 = strntoi_unchecked(x3, x14529);
    x3 = x14530;
    /* VAR */ int x14532 = 0;
    int x14533 = x14532;
    int* x14534 = &x14533;
    char* x14535 = strntoi_unchecked(x3, x14534);
    x3 = x14535;
    /* VAR */ int x14537 = 0;
    int x14538 = x14537;
    int* x14539 = &x14538;
    char* x14540 = strntoi_unchecked(x3, x14539);
    x3 = x14540;
    /* VAR */ int x14542 = 0;
    int x14543 = x14542;
    int* x14544 = &x14543;
    char* x14545 = strntoi_unchecked(x3, x14544);
    x3 = x14545;
    /* VAR */ double x14547 = 0.0;
    double x14548 = x14547;
    double* x14549 = &x14548;
    char* x14550 = strntod_unchecked(x3, x14549);
    x3 = x14550;
    /* VAR */ double x14552 = 0.0;
    double x14553 = x14552;
    double* x14554 = &x14553;
    char* x14555 = strntod_unchecked(x3, x14554);
    x3 = x14555;
    /* VAR */ double x14557 = 0.0;
    double x14558 = x14557;
    double* x14559 = &x14558;
    char* x14560 = strntod_unchecked(x3, x14559);
    x3 = x14560;
    /* VAR */ double x14562 = 0.0;
    double x14563 = x14562;
    double* x14564 = &x14563;
    char* x14565 = strntod_unchecked(x3, x14564);
    x3 = x14565;
    char x14567 = *x3;
    /* VAR */ char x14568 = x14567;
    x3 += 1;
    x3 += 1;
    char x14572 = *x3;
    /* VAR */ char x14573 = x14572;
    x3 += 1;
    x3 += 1;
    /* VAR */ int x14577 = 0;
    int x14578 = x14577;
    int* x14579 = &x14578;
    char* x14580 = strntoi_unchecked(x3, x14579);
    x3 = x14580;
    /* VAR */ int x14582 = 0;
    int x14583 = x14582;
    int* x14584 = &x14583;
    char* x14585 = strntoi_unchecked(x3, x14584);
    x3 = x14585;
    /* VAR */ int x14587 = 0;
    int x14588 = x14587;
    int* x14589 = &x14588;
    char* x14590 = strntoi_unchecked(x3, x14589);
    x3 = x14590;
    /* VAR */ int x14596 = 0;
    int x14597 = x14596;
    int* x14598 = &x14597;
    char* x14599 = strntoi_unchecked(x3, x14598);
    x3 = x14599;
    /* VAR */ int x14601 = 0;
    int x14602 = x14601;
    int* x14603 = &x14602;
    char* x14604 = strntoi_unchecked(x3, x14603);
    x3 = x14604;
    /* VAR */ int x14606 = 0;
    int x14607 = x14606;
    int* x14608 = &x14607;
    char* x14609 = strntoi_unchecked(x3, x14608);
    x3 = x14609;
    /* VAR */ int x14615 = 0;
    int x14616 = x14615;
    int* x14617 = &x14616;
    char* x14618 = strntoi_unchecked(x3, x14617);
    x3 = x14618;
    /* VAR */ int x14620 = 0;
    int x14621 = x14620;
    int* x14622 = &x14621;
    char* x14623 = strntoi_unchecked(x3, x14622);
    x3 = x14623;
    /* VAR */ int x14625 = 0;
    int x14626 = x14625;
    int* x14627 = &x14626;
    char* x14628 = strntoi_unchecked(x3, x14627);
    x3 = x14628;
    char* x16316 = (char*)malloc(26 * sizeof(char));
    memset(x16316, 0, 26 * sizeof(char));
    /* VAR */ char* x14635 = x3;
    while(1) {
      
      char x14636 = *x3;
      /* VAR */ int ite30790 = 0;
      if((x14636!=('|'))) {
        char x37043 = *x3;
        ite30790 = (x37043!=('\n'));
      } else {
        
        ite30790 = 0;
      };
      int x29022 = ite30790;
      if (!(x29022)) break; 
      
      x3 += 1;
    };
    char* x14643 = x14635;
    int x14644 = x3 - x14643;
    char* x14645 = x14635;
    char* x14646 = strncpy(x16316, x14645, x14644);
    x3 += 1;
    char* x16334 = (char*)malloc(11 * sizeof(char));
    memset(x16334, 0, 11 * sizeof(char));
    /* VAR */ char* x14654 = x3;
    while(1) {
      
      char x14655 = *x3;
      /* VAR */ int ite30813 = 0;
      if((x14655!=('|'))) {
        char x37065 = *x3;
        ite30813 = (x37065!=('\n'));
      } else {
        
        ite30813 = 0;
      };
      int x29038 = ite30813;
      if (!(x29038)) break; 
      
      x3 += 1;
    };
    char* x14662 = x14654;
    int x14663 = x3 - x14662;
    char* x14664 = x14654;
    char* x14665 = strncpy(x16334, x14664, x14663);
    x3 += 1;
    char* x16352 = (char*)malloc(45 * sizeof(char));
    memset(x16352, 0, 45 * sizeof(char));
    /* VAR */ char* x14673 = x3;
    while(1) {
      
      char x14674 = *x3;
      /* VAR */ int ite30836 = 0;
      if((x14674!=('|'))) {
        char x37087 = *x3;
        ite30836 = (x37087!=('\n'));
      } else {
        
        ite30836 = 0;
      };
      int x29054 = ite30836;
      if (!(x29054)) break; 
      
      x3 += 1;
    };
    char* x14681 = x14673;
    int x14682 = x3 - x14681;
    char* x14683 = x14673;
    char* x14684 = strncpy(x16352, x14683, x14682);
    x3 += 1;
    struct LINEITEMRecord* x17229 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x17229, 0, 1 * sizeof(struct LINEITEMRecord));
    x17229->L_ORDERKEY = x14528; x17229->L_SUPPKEY = x14538; x17229->L_COMMITDATE = (((x14597*(10000))+((x14602*(100))))+(x14607)); x17229->L_RECEIPTDATE = (((x14616*(10000))+((x14621*(100))))+(x14626));
    int x47 = x4;
    struct LINEITEMRecord x16372 = *x17229;
    *(x16190 + x47) = x16372;
    struct LINEITEMRecord* x16374 = &(x16190[x47]);
    x17229 = x16374;
    int x49 = x4;
    x4 = (x49+(1));
  };
  FILE* x14697 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x14698 = 0;
  int x14699 = x14698;
  int* x14700 = &x14699;
  int x14701 = fscanf(x14697, "%d", x14700);
  pclose(x14697);
  struct SUPPLIERRecord* x16385 = (struct SUPPLIERRecord*)malloc(x14699 * sizeof(struct SUPPLIERRecord));
  memset(x16385, 0, x14699 * sizeof(struct SUPPLIERRecord));
  int x14705 = O_RDONLY;
  int x14706 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x14705);
  /* VAR */ struct stat x14707 = x14512;
  struct stat x14708 = x14707;
  struct stat* x14709 = &x14708;
  int x14710 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x14709);
  int x14712 = PROT_READ;
  int x14713 = MAP_PRIVATE;
  char* x55 = mmap(NULL, (x14709->st_size), x14712, x14713, x14706, 0);
  /* VAR */ int x56 = 0;
  while(1) {
    
    int x57 = x56;
    /* VAR */ int ite30886 = 0;
    if((x57<(x14699))) {
      char x37136 = *x55;
      ite30886 = (x37136!=('\0'));
    } else {
      
      ite30886 = 0;
    };
    int x29097 = ite30886;
    if (!(x29097)) break; 
    
    /* VAR */ int x14721 = 0;
    int x14722 = x14721;
    int* x14723 = &x14722;
    char* x14724 = strntoi_unchecked(x55, x14723);
    x55 = x14724;
    char* x16408 = (char*)malloc(26 * sizeof(char));
    memset(x16408, 0, 26 * sizeof(char));
    /* VAR */ char* x14727 = x55;
    while(1) {
      
      char x14728 = *x55;
      /* VAR */ int ite30905 = 0;
      if((x14728!=('|'))) {
        char x37154 = *x55;
        ite30905 = (x37154!=('\n'));
      } else {
        
        ite30905 = 0;
      };
      int x29109 = ite30905;
      if (!(x29109)) break; 
      
      x55 += 1;
    };
    char* x14735 = x14727;
    int x14736 = x55 - x14735;
    char* x14737 = x14727;
    char* x14738 = strncpy(x16408, x14737, x14736);
    x55 += 1;
    char* x16426 = (char*)malloc(41 * sizeof(char));
    memset(x16426, 0, 41 * sizeof(char));
    /* VAR */ char* x14746 = x55;
    while(1) {
      
      char x14747 = *x55;
      /* VAR */ int ite30928 = 0;
      if((x14747!=('|'))) {
        char x37176 = *x55;
        ite30928 = (x37176!=('\n'));
      } else {
        
        ite30928 = 0;
      };
      int x29125 = ite30928;
      if (!(x29125)) break; 
      
      x55 += 1;
    };
    char* x14754 = x14746;
    int x14755 = x55 - x14754;
    char* x14756 = x14746;
    char* x14757 = strncpy(x16426, x14756, x14755);
    x55 += 1;
    /* VAR */ int x14764 = 0;
    int x14765 = x14764;
    int* x14766 = &x14765;
    char* x14767 = strntoi_unchecked(x55, x14766);
    x55 = x14767;
    char* x16449 = (char*)malloc(16 * sizeof(char));
    memset(x16449, 0, 16 * sizeof(char));
    /* VAR */ char* x14770 = x55;
    while(1) {
      
      char x14771 = *x55;
      /* VAR */ int ite30956 = 0;
      if((x14771!=('|'))) {
        char x37203 = *x55;
        ite30956 = (x37203!=('\n'));
      } else {
        
        ite30956 = 0;
      };
      int x29146 = ite30956;
      if (!(x29146)) break; 
      
      x55 += 1;
    };
    char* x14778 = x14770;
    int x14779 = x55 - x14778;
    char* x14780 = x14770;
    char* x14781 = strncpy(x16449, x14780, x14779);
    x55 += 1;
    /* VAR */ double x14788 = 0.0;
    double x14789 = x14788;
    double* x14790 = &x14789;
    char* x14791 = strntod_unchecked(x55, x14790);
    x55 = x14791;
    char* x16472 = (char*)malloc(102 * sizeof(char));
    memset(x16472, 0, 102 * sizeof(char));
    /* VAR */ char* x14794 = x55;
    while(1) {
      
      char x14795 = *x55;
      /* VAR */ int ite30984 = 0;
      if((x14795!=('|'))) {
        char x37230 = *x55;
        ite30984 = (x37230!=('\n'));
      } else {
        
        ite30984 = 0;
      };
      int x29167 = ite30984;
      if (!(x29167)) break; 
      
      x55 += 1;
    };
    char* x14802 = x14794;
    int x14803 = x55 - x14802;
    char* x14804 = x14794;
    char* x14805 = strncpy(x16472, x14804, x14803);
    x55 += 1;
    struct SUPPLIERRecord* x17351 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x17351, 0, 1 * sizeof(struct SUPPLIERRecord));
    x17351->S_SUPPKEY = x14722; x17351->S_NAME = x16408; x17351->S_NATIONKEY = x14765;
    int x97 = x56;
    struct SUPPLIERRecord x16492 = *x17351;
    *(x16385 + x97) = x16492;
    struct SUPPLIERRecord* x16494 = &(x16385[x97]);
    x17351 = x16494;
    int x99 = x56;
    x56 = (x99+(1));
  };
  FILE* x14818 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x14819 = 0;
  int x14820 = x14819;
  int* x14821 = &x14820;
  int x14822 = fscanf(x14818, "%d", x14821);
  pclose(x14818);
  struct ORDERSRecord* x16505 = (struct ORDERSRecord*)malloc(x14820 * sizeof(struct ORDERSRecord));
  memset(x16505, 0, x14820 * sizeof(struct ORDERSRecord));
  int x14826 = O_RDONLY;
  int x14827 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x14826);
  /* VAR */ struct stat x14828 = x14512;
  struct stat x14829 = x14828;
  struct stat* x14830 = &x14829;
  int x14831 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x14830);
  int x14833 = PROT_READ;
  int x14834 = MAP_PRIVATE;
  char* x105 = mmap(NULL, (x14830->st_size), x14833, x14834, x14827, 0);
  /* VAR */ int x106 = 0;
  while(1) {
    
    int x107 = x106;
    /* VAR */ int ite31034 = 0;
    if((x107<(x14820))) {
      char x37279 = *x105;
      ite31034 = (x37279!=('\0'));
    } else {
      
      ite31034 = 0;
    };
    int x29210 = ite31034;
    if (!(x29210)) break; 
    
    /* VAR */ int x14842 = 0;
    int x14843 = x14842;
    int* x14844 = &x14843;
    char* x14845 = strntoi_unchecked(x105, x14844);
    x105 = x14845;
    /* VAR */ int x14847 = 0;
    int x14848 = x14847;
    int* x14849 = &x14848;
    char* x14850 = strntoi_unchecked(x105, x14849);
    x105 = x14850;
    char x14852 = *x105;
    /* VAR */ char x14853 = x14852;
    x105 += 1;
    x105 += 1;
    char x14856 = x14853;
    /* VAR */ double x14857 = 0.0;
    double x14858 = x14857;
    double* x14859 = &x14858;
    char* x14860 = strntod_unchecked(x105, x14859);
    x105 = x14860;
    /* VAR */ int x14862 = 0;
    int x14863 = x14862;
    int* x14864 = &x14863;
    char* x14865 = strntoi_unchecked(x105, x14864);
    x105 = x14865;
    /* VAR */ int x14867 = 0;
    int x14868 = x14867;
    int* x14869 = &x14868;
    char* x14870 = strntoi_unchecked(x105, x14869);
    x105 = x14870;
    /* VAR */ int x14872 = 0;
    int x14873 = x14872;
    int* x14874 = &x14873;
    char* x14875 = strntoi_unchecked(x105, x14874);
    x105 = x14875;
    char* x16562 = (char*)malloc(16 * sizeof(char));
    memset(x16562, 0, 16 * sizeof(char));
    /* VAR */ char* x14882 = x105;
    while(1) {
      
      char x14883 = *x105;
      /* VAR */ int ite31087 = 0;
      if((x14883!=('|'))) {
        char x37331 = *x105;
        ite31087 = (x37331!=('\n'));
      } else {
        
        ite31087 = 0;
      };
      int x29256 = ite31087;
      if (!(x29256)) break; 
      
      x105 += 1;
    };
    char* x14890 = x14882;
    int x14891 = x105 - x14890;
    char* x14892 = x14882;
    char* x14893 = strncpy(x16562, x14892, x14891);
    x105 += 1;
    char* x16580 = (char*)malloc(16 * sizeof(char));
    memset(x16580, 0, 16 * sizeof(char));
    /* VAR */ char* x14901 = x105;
    while(1) {
      
      char x14902 = *x105;
      /* VAR */ int ite31110 = 0;
      if((x14902!=('|'))) {
        char x37353 = *x105;
        ite31110 = (x37353!=('\n'));
      } else {
        
        ite31110 = 0;
      };
      int x29272 = ite31110;
      if (!(x29272)) break; 
      
      x105 += 1;
    };
    char* x14909 = x14901;
    int x14910 = x105 - x14909;
    char* x14911 = x14901;
    char* x14912 = strncpy(x16580, x14911, x14910);
    x105 += 1;
    /* VAR */ int x14919 = 0;
    int x14920 = x14919;
    int* x14921 = &x14920;
    char* x14922 = strntoi_unchecked(x105, x14921);
    x105 = x14922;
    char* x16603 = (char*)malloc(80 * sizeof(char));
    memset(x16603, 0, 80 * sizeof(char));
    /* VAR */ char* x14925 = x105;
    while(1) {
      
      char x14926 = *x105;
      /* VAR */ int ite31138 = 0;
      if((x14926!=('|'))) {
        char x37380 = *x105;
        ite31138 = (x37380!=('\n'));
      } else {
        
        ite31138 = 0;
      };
      int x29293 = ite31138;
      if (!(x29293)) break; 
      
      x105 += 1;
    };
    char* x14933 = x14925;
    int x14934 = x105 - x14933;
    char* x14935 = x14925;
    char* x14936 = strncpy(x16603, x14935, x14934);
    x105 += 1;
    struct ORDERSRecord* x17484 = (struct ORDERSRecord*)malloc(1 * sizeof(struct ORDERSRecord));
    memset(x17484, 0, 1 * sizeof(struct ORDERSRecord));
    x17484->O_ORDERKEY = x14843; x17484->O_ORDERSTATUS = x14856;
    int x141 = x106;
    struct ORDERSRecord x16623 = *x17484;
    *(x16505 + x141) = x16623;
    struct ORDERSRecord* x16625 = &(x16505[x141]);
    x17484 = x16625;
    int x143 = x106;
    x106 = (x143+(1));
  };
  FILE* x14949 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x14950 = 0;
  int x14951 = x14950;
  int* x14952 = &x14951;
  int x14953 = fscanf(x14949, "%d", x14952);
  pclose(x14949);
  struct NATIONRecord* x16636 = (struct NATIONRecord*)malloc(x14951 * sizeof(struct NATIONRecord));
  memset(x16636, 0, x14951 * sizeof(struct NATIONRecord));
  int x14957 = O_RDONLY;
  int x14958 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x14957);
  /* VAR */ struct stat x14959 = x14512;
  struct stat x14960 = x14959;
  struct stat* x14961 = &x14960;
  int x14962 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x14961);
  int x14964 = PROT_READ;
  int x14965 = MAP_PRIVATE;
  char* x149 = mmap(NULL, (x14961->st_size), x14964, x14965, x14958, 0);
  /* VAR */ int x150 = 0;
  while(1) {
    
    int x151 = x150;
    /* VAR */ int ite31188 = 0;
    if((x151<(x14951))) {
      char x37429 = *x149;
      ite31188 = (x37429!=('\0'));
    } else {
      
      ite31188 = 0;
    };
    int x29336 = ite31188;
    if (!(x29336)) break; 
    
    /* VAR */ int x14973 = 0;
    int x14974 = x14973;
    int* x14975 = &x14974;
    char* x14976 = strntoi_unchecked(x149, x14975);
    x149 = x14976;
    char* x16659 = (char*)malloc(26 * sizeof(char));
    memset(x16659, 0, 26 * sizeof(char));
    /* VAR */ char* x14979 = x149;
    while(1) {
      
      char x14980 = *x149;
      /* VAR */ int ite31207 = 0;
      if((x14980!=('|'))) {
        char x37447 = *x149;
        ite31207 = (x37447!=('\n'));
      } else {
        
        ite31207 = 0;
      };
      int x29348 = ite31207;
      if (!(x29348)) break; 
      
      x149 += 1;
    };
    char* x14987 = x14979;
    int x14988 = x149 - x14987;
    char* x14989 = x14979;
    char* x14990 = strncpy(x16659, x14989, x14988);
    x149 += 1;
    /* VAR */ int x14997 = 0;
    int x14998 = x14997;
    int* x14999 = &x14998;
    char* x15000 = strntoi_unchecked(x149, x14999);
    x149 = x15000;
    char* x16682 = (char*)malloc(153 * sizeof(char));
    memset(x16682, 0, 153 * sizeof(char));
    /* VAR */ char* x15003 = x149;
    while(1) {
      
      char x15004 = *x149;
      /* VAR */ int ite31235 = 0;
      if((x15004!=('|'))) {
        char x37474 = *x149;
        ite31235 = (x37474!=('\n'));
      } else {
        
        ite31235 = 0;
      };
      int x29369 = ite31235;
      if (!(x29369)) break; 
      
      x149 += 1;
    };
    char* x15011 = x15003;
    int x15012 = x149 - x15011;
    char* x15013 = x15003;
    char* x15014 = strncpy(x16682, x15013, x15012);
    x149 += 1;
    struct NATIONRecord* x17565 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x17565, 0, 1 * sizeof(struct NATIONRecord));
    x17565->N_NATIONKEY = x14974; x17565->N_NAME = x16659;
    int x174 = x150;
    struct NATIONRecord x16702 = *x17565;
    *(x16636 + x174) = x16702;
    struct NATIONRecord* x16704 = &(x16636[x174]);
    x17565 = x16704;
    int x176 = x150;
    x150 = (x176+(1));
  };
  int x181 = 0;
  for(; x181 < 1 ; x181 += 1) {
    
    /* VAR */ int x38228 = 0;
    struct Set_AGGRecord_OptimalString* x38229 = (struct Set_AGGRecord_OptimalString*)malloc(160000 * sizeof(struct Set_AGGRecord_OptimalString));
    memset(x38229, 0, 160000 * sizeof(struct Set_AGGRecord_OptimalString));
    int x26521 = 0;
    for(; x26521 < 160000 ; x26521 += 1) {
      
      struct AGGRecord_OptimalString* x26522 = (struct AGGRecord_OptimalString*)malloc(256 * sizeof(struct AGGRecord_OptimalString));
      memset(x26522, 0, 256 * sizeof(struct AGGRecord_OptimalString));
      struct Set_AGGRecord_OptimalString* x26523 = (struct Set_AGGRecord_OptimalString*)malloc(1 * sizeof(struct Set_AGGRecord_OptimalString));
      memset(x26523, 0, 1 * sizeof(struct Set_AGGRecord_OptimalString));
      x26523->maxSize = 0; x26523->array = x26522;
      struct Set_AGGRecord_OptimalString x26526 = *x26523;
      *(x38229 + x26521) = x26526;
      struct Set_AGGRecord_OptimalString* x26528 = &(x38229[x26521]);
      x26523 = x26528;
    };
    struct ORDERSRecord* x38249 = (struct ORDERSRecord*)malloc(60000000 * sizeof(struct ORDERSRecord));
    memset(x38249, 0, 60000000 * sizeof(struct ORDERSRecord));
    int x26541 = 0;
    for(; x26541 < x14820 ; x26541 += 1) {
      
      struct ORDERSRecord* x26542 = &(x16505[x26541]);
      int x26544 = (x26542->O_ORDERKEY)%(60000000);
      struct ORDERSRecord x26545 = *x26542;
      *(x38249 + x26544) = x26545;
      struct ORDERSRecord* x26547 = &(x38249[x26544]);
      x26542 = x26547;
    };
    struct LINEITEMRecord** x38267 = (struct LINEITEMRecord**)malloc(60000000 * sizeof(struct LINEITEMRecord*));
    memset(x38267, 0, 60000000 * sizeof(struct LINEITEMRecord*));
    int* x38268 = (int*)malloc(60000000 * sizeof(int));
    memset(x38268, 0, 60000000 * sizeof(int));
    int x26556 = 0;
    for(; x26556 < 60000000 ; x26556 += 1) {
      
      struct LINEITEMRecord* x26557 = (struct LINEITEMRecord*)malloc(16 * sizeof(struct LINEITEMRecord));
      memset(x26557, 0, 16 * sizeof(struct LINEITEMRecord));
      *(x38267 + x26556) = x26557;
    };
    /* VAR */ int x38276 = 0;
    int x26577 = 0;
    for(; x26577 < x14504 ; x26577 += 1) {
      
      struct LINEITEMRecord* x26578 = &(x16190[x26577]);
      int x26580 = (x26578->L_ORDERKEY)%(60000000);
      int x26581 = x38268[x26580];
      struct LINEITEMRecord* x26582 = x38267[x26580];
      struct LINEITEMRecord x26583 = *x26578;
      *(x26582 + x26581) = x26583;
      struct LINEITEMRecord* x26585 = &(x26582[x26581]);
      x26578 = x26585;
      *(x38268 + x26580) = (x26581+(1));
      int x26589 = x38276;
      x38276 = (x26589+(1));
    };
    struct LINEITEMRecord** x38308 = (struct LINEITEMRecord**)malloc(80000 * sizeof(struct LINEITEMRecord*));
    memset(x38308, 0, 80000 * sizeof(struct LINEITEMRecord*));
    int* x38309 = (int*)malloc(80000 * sizeof(int));
    memset(x38309, 0, 80000 * sizeof(int));
    int x26599 = 0;
    for(; x26599 < 80000 ; x26599 += 1) {
      
      struct LINEITEMRecord* x26600 = (struct LINEITEMRecord*)malloc(1024 * sizeof(struct LINEITEMRecord));
      memset(x26600, 0, 1024 * sizeof(struct LINEITEMRecord));
      *(x38308 + x26599) = x26600;
    };
    /* VAR */ int x38317 = 0;
    int x26620 = 0;
    for(; x26620 < x14504 ; x26620 += 1) {
      
      struct LINEITEMRecord* x26621 = &(x16190[x26620]);
      int x26623 = (x26621->L_SUPPKEY)%(80000);
      int x26624 = x38309[x26623];
      struct LINEITEMRecord* x26625 = x38308[x26623];
      struct LINEITEMRecord x26626 = *x26621;
      *(x26625 + x26624) = x26626;
      struct LINEITEMRecord* x26628 = &(x26625[x26624]);
      x26621 = x26628;
      *(x38309 + x26623) = (x26624+(1));
      int x26632 = x38317;
      x38317 = (x26632+(1));
    };
    /* VAR */ int x38349 = 0;
    double** x38350 = (double**)malloc(80000 * sizeof(double*));
    memset(x38350, 0, 80000 * sizeof(double*));
    /* VAR */ int x38351 = 0;
    while(1) {
      
      int x13581 = x38351;
      if (!((x13581<(80000)))) break; 
      
      int x13583 = x38351;
      double* x16797 = (double*)malloc(1 * sizeof(double));
      memset(x16797, 0, 1 * sizeof(double));
      *(x38350 + x13583) = x16797;
      int x13586 = x38351;
      x38351 = (x13586+(1));
    };
    /* VAR */ int x38361 = 0;
    struct AGGRecord_OptimalString* x38362 = (struct AGGRecord_OptimalString*)malloc(80000 * sizeof(struct AGGRecord_OptimalString));
    memset(x38362, 0, 80000 * sizeof(struct AGGRecord_OptimalString));
    /* VAR */ int x38363 = 0;
    while(1) {
      
      int x13593 = x38363;
      if (!((x13593<(80000)))) break; 
      
      int x13595 = x38363;
      double* x13596 = x38350[x13595];
      struct AGGRecord_OptimalString* x17679 = (struct AGGRecord_OptimalString*)malloc(1 * sizeof(struct AGGRecord_OptimalString));
      memset(x17679, 0, 1 * sizeof(struct AGGRecord_OptimalString));
      x17679->key = ""; x17679->aggs = x13596;
      struct AGGRecord_OptimalString x16811 = *x17679;
      *(x38362 + x13595) = x16811;
      struct AGGRecord_OptimalString* x16813 = &(x38362[x13595]);
      x17679 = x16813;
      int x13599 = x38363;
      x38363 = (x13599+(1));
    };
    /* VAR */ struct timeval x38379 = x13811;
    struct timeval x38380 = x38379;
    /* VAR */ struct timeval x38381 = x13811;
    struct timeval x38382 = x38381;
    /* VAR */ struct timeval x38383 = x13811;
    struct timeval x38384 = x38383;
    struct timeval* x38385 = &x38382;
    gettimeofday(x38385, NULL);
    /* VAR */ int x38387 = 0;
    int* x38436 = &(x38412);
    GTree* x38437 = g_tree_new(x38436);
    /* VAR */ int x38438 = 0;
    /* VAR */ int x38439 = 0;
    while(1) {
      
      int x38441 = x38387;
      if (!((x38441<(x14699)))) break; 
      
      int x2650 = x38387;
      struct SUPPLIERRecord* x374 = &(x16385[x2650]);
      int x376 = x374->S_NATIONKEY;
      struct NATIONRecord* x11862 = &(x16636[(x376-(0))]);
      int x24870 = strcmp((x11862->N_NAME), "MOROCCO");
      if((x24870==(0))) {
        if(((x11862->N_NATIONKEY)==(x376))) {
          if(((x11862->N_NATIONKEY)==(x376))) {
            int x1144 = x374->S_SUPPKEY;
            char* x1145 = x374->S_NAME;
            int x4911 = x1144%(80000);
            int x4912 = x38309[x4911];
            struct LINEITEMRecord* x4913 = x38308[x4911];
            int x26898 = 0;
            for(; x26898 < x4912 ; x26898 += 1) {
              
              struct LINEITEMRecord* x26899 = &(x4913[x26898]);
              if(((x26899->L_RECEIPTDATE)>((x26899->L_COMMITDATE)))) {
                int x420 = x26899->L_SUPPKEY;
                if((x1144==(x420))) {
                  int x1231 = x26899->L_ORDERKEY;
                  /* VAR */ int x11889 = 0;
                  int x11890 = x1231%(60000000);
                  int x11891 = x38268[x11890];
                  struct LINEITEMRecord* x11892 = x38267[x11890];
                  int x26759 = 0;
                  for(; x26759 < x11891 ; x26759 += 1) {
                    
                    struct LINEITEMRecord* x26760 = &(x11892[x26759]);
                    /* VAR */ int ite32455 = 0;
                    if(((x26760->L_ORDERKEY)==(x1231))) {
                      /* VAR */ int x38717 = 0;
                      if((x1231==((x26760->L_ORDERKEY)))) {
                        x38717 = (x420!=((x26760->L_SUPPKEY)));
                      } else {
                        
                        x38717 = 0;
                      };
                      int x38724 = x38717;
                      ite32455 = x38724;
                    } else {
                      
                      ite32455 = 0;
                    };
                    int x30445 = ite32455;
                    if(x30445) {
                      x11889 = 1;
                    };
                  };
                  int x11908 = x11889;
                  if(x11908) {
                    /* VAR */ int resultRetain4965 = 0;
                    int x4966 = x38268[x11890];
                    struct LINEITEMRecord* x4967 = x38267[x11890];
                    int x26793 = 0;
                    for(; x26793 < x4966 ; x26793 += 1) {
                      
                      struct LINEITEMRecord* x26794 = &(x4967[x26793]);
                      if(((x26794->L_RECEIPTDATE)>((x26794->L_COMMITDATE)))) {
                        /* VAR */ int ite32503 = 0;
                        if((x1231==((x26794->L_ORDERKEY)))) {
                          ite32503 = (x420!=((x26794->L_SUPPKEY)));
                        } else {
                          
                          ite32503 = 0;
                        };
                        int x30477 = ite32503;
                        int x4982 = !(x30477);
                        int x4983 = !(x4982);
                        if(x4983) {
                          resultRetain4965 = 1;
                        };
                      };
                    };
                    int x4989 = resultRetain4965;
                    int x4990 = !(x4989);
                    if(x4990) {
                      struct ORDERSRecord* x11934 = &(x38249[x1231]);
                      if(((x11934->O_ORDERSTATUS)==('F'))) {
                        if(((x11934->O_ORDERKEY)==(x1231))) {
                          if(((x11934->O_ORDERKEY)==(x1231))) {
                            int x24951 = strlen(x1145);
                            /* VAR */ int x23141 = 0;
                            /* VAR */ int x23142 = 0;
                            while(1) {
                              
                              int x23143 = x23141;
                              if (!((x23143<(x24951)))) break; 
                              
                              int x23145 = x23142;
                              int x23146 = x23141;
                              char* x24959 = pointer_add(x1145, x23146);
                              char x24960 = *(x24959);
                              x23142 = (x23145+(x24960));
                              int x23151 = x23141;
                              x23141 = (x23151+(1));
                            };
                            int x23155 = x23142;
                            int x7092 = x23155&(159999);
                            struct Set_AGGRecord_OptimalString* x8350 = &(x38229[x7092]);
                            int x7094 = x38228;
                            if((x7092>(x7094))) {
                              x38228 = x7092;
                            };
                            /* VAR */ int i8359 = 0;
                            /* VAR */ int found8360 = 0;
                            while(1) {
                              
                              int x8361 = i8359;
                              int x8362 = x8350->maxSize;
                              /* VAR */ int ite32557 = 0;
                              if((x8361<(x8362))) {
                                int x38820 = found8360;
                                int x38821 = !(x38820);
                                ite32557 = x38821;
                              } else {
                                
                                ite32557 = 0;
                              };
                              int x30524 = ite32557;
                              if (!(x30524)) break; 
                              
                              int x8368 = i8359;
                              struct AGGRecord_OptimalString* x8369 = &(((struct AGGRecord_OptimalString*) { x8350->array })[x8368]);
                              int x23175 = strcmp((x8369->key), x1145);
                              int x23176 = !(x23175);
                              if(x23176) {
                                found8360 = 1;
                              } else {
                                
                                int x8373 = i8359;
                                i8359 = (x8373+(1));
                              };
                            };
                            int x8378 = found8360;
                            int x8379 = !(x8378);
                            /* VAR */ struct AGGRecord_OptimalString** ite30539 = 0;
                            if(x8379) {
                              ite30539 = NULL;
                            } else {
                              
                              int x30542 = i8359;
                              struct AGGRecord_OptimalString* x30543 = &(((struct AGGRecord_OptimalString*) { x8350->array })[x30542]);
                              ite30539 = x30543;
                            };
                            struct AGGRecord_OptimalString** x8386 = ite30539;
                            /* VAR */ struct AGGRecord_OptimalString* ite30549 = 0;
                            if((x8386!=(NULL))) {
                              ite30549 = x8386;
                            } else {
                              
                              int x30551 = x38349;
                              double* x30552 = x38350[x30551];
                              int x30553 = x38349;
                              x38349 = (x30553+(1));
                              int x30556 = x38361;
                              struct AGGRecord_OptimalString* x30557 = &(x38362[x30556]);
                              x30557->key = x1145;
                              x30557->aggs = x30552;
                              int x30560 = x38361;
                              x38361 = (x30560+(1));
                              struct AGGRecord_OptimalString* x30563 = x8350->array;
                              int x30564 = x8350->maxSize;
                              struct AGGRecord_OptimalString x30565 = *x30557;
                              *(x30563 + x30564) = x30565;
                              struct AGGRecord_OptimalString* x30567 = &(x30563[x30564]);
                              x30557 = x30567;
                              int x30569 = x8350->maxSize;
                              x8350->maxSize = (x30569+(1));
                              ite30549 = x30557;
                            };
                            struct AGGRecord_OptimalString* x7107 = ite30549;
                            double* x614 = x7107->aggs;
                            double x628 = x614[0];
                            *x614 = (x628+(1.0));
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
      int x2684 = x38387;
      x38387 = (x2684+(1));
    };
    int x38883 = x38228;
    int x27082 = 0;
    for(; x27082 < (x38883+(1)) ; x27082 += 1) {
      
      struct Set_AGGRecord_OptimalString* x27083 = &(x38229[x27082]);
      int x27084 = x27083->maxSize;
      int x27077 = 0;
      for(; x27077 < x27084 ; x27077 += 1) {
        
        struct AGGRecord_OptimalString* x27079 = &(((struct AGGRecord_OptimalString*) { x27083->array })[x27077]);
        g_tree_insert(x38437, x27079, x27079);
      };
    };
    while(1) {
      
      int x2945 = x38438;
      int x652 = !(x2945);
      /* VAR */ int ite32653 = 0;
      if(x652) {
        int x38915 = g_tree_nnodes(x38437);
        ite32653 = (x38915!=(0));
      } else {
        
        ite32653 = 0;
      };
      int x30613 = ite32653;
      if (!(x30613)) break; 
      
      void* x19644 = NULL;
      void** x19652 = &(x19644);
      g_tree_foreach(x38437, x19651, x19652);
      struct AGGRecord_OptimalString* x19654 = (struct AGGRecord_OptimalString*){x19644};
      int x19655 = g_tree_remove(x38437, x19654);
      int x2953 = x38439;
      if((x2953>=(100))) {
        x38438 = 1;
      } else {
        
        double x667 = ((double*) { x19654->aggs })[0];
        printf("%s|%.0f\n", (x19654->key), x667);
        int x2962 = x38439;
        x38439 = (x2962+(1));
      };
    };
    int x38944 = x38439;
    printf("(%d rows)\n", x38944);
    struct timeval* x38946 = &x38384;
    gettimeofday(x38946, NULL);
    struct timeval* x38948 = &x38380;
    struct timeval* x38949 = &x38384;
    struct timeval* x38950 = &x38382;
    long x38951 = timeval_subtract(x38948, x38949, x38950);
    printf("Generated code run in %ld milliseconds.\n", x38951);
  };
}
/* ----------- FUNCTIONS ----------- */
int x38412(struct AGGRecord_OptimalString* x294, struct AGGRecord_OptimalString* x295) {
  double x297 = ((double*) { x294->aggs })[0];
  double x299 = ((double*) { x295->aggs })[0];
  /* VAR */ int ite30213 = 0;
  if((x297<(x299))) {
    ite30213 = 1;
  } else {
    
    /* VAR */ int ite30217 = 0;
    if((x297>(x299))) {
      ite30217 = -1;
    } else {
      
      int x30221 = strcmp((x294->key), (x295->key));
      ite30217 = x30221;
    };
    int x30216 = ite30217;
    ite30213 = x30216;
  };
  int x306 = ite30213;
  return x306; 
}

int x19651(void* x19645, void* x19646, void* x19647) {
  pointer_assign(((struct AGGRecord_OptimalString**){x19647}), ((struct AGGRecord_OptimalString*){x19646}));
  return 1; 
}
