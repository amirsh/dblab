#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_Q20GRPRecord;
  struct LINEITEMRecord;
  struct NATIONRecord;
  struct PARTRecord;
  struct Q20GRPRecord;
  struct SUPPLIERRecord;
  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord;
  struct PARTSUPPRecord;
  
  struct AGGRecord_Q20GRPRecord {
  struct Q20GRPRecord* key;
  double* aggs;
  };
  
  struct LINEITEMRecord {
  int L_PARTKEY;
  int L_SUPPKEY;
  double L_QUANTITY;
  int L_SHIPDATE;
  };
  
  struct NATIONRecord {
  int N_NATIONKEY;
  char* N_NAME;
  };
  
  struct PARTRecord {
  int P_PARTKEY;
  char* P_NAME;
  };
  
  struct Q20GRPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  };
  
  struct SUPPLIERRecord {
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  };
  
  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord {
  int N_NATIONKEY;
  char* N_NAME;
  struct Q20GRPRecord* key;
  double* aggs;
  int S_SUPPKEY;
  char* S_NAME;
  char* S_ADDRESS;
  int S_NATIONKEY;
  };
  
  struct PARTSUPPRecord {
  int PS_PARTKEY;
  int PS_SUPPKEY;
  int PS_AVAILQTY;
  };
  
  


int x37345(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x338, struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x339);

int x16189(void* x16183, void* x16184, void* x16185);
/* GLOBAL VARS */

struct timeval x9946;
int main(int argc, char** argv) {
  FILE* x10616 = popen("wc -l /mnt/ramdisk/tpch/sf8/nation.tbl", "r");
  /* VAR */ int x10617 = 0;
  int x10618 = x10617;
  int* x10619 = &x10618;
  int x10620 = fscanf(x10616, "%d", x10619);
  pclose(x10616);
  struct NATIONRecord* x12426 = (struct NATIONRecord*)malloc(x10618 * sizeof(struct NATIONRecord));
  memset(x12426, 0, x10618 * sizeof(struct NATIONRecord));
  int x10624 = O_RDONLY;
  int x10625 = open("/mnt/ramdisk/tpch/sf8/nation.tbl", x10624);
  struct stat x10626 = (struct stat){0};
  /* VAR */ struct stat x10627 = x10626;
  struct stat x10628 = x10627;
  struct stat* x10629 = &x10628;
  int x10630 = stat("/mnt/ramdisk/tpch/sf8/nation.tbl", x10629);
  int x10632 = PROT_READ;
  int x10633 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x10629->st_size), x10632, x10633, x10625, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite31508 = 0;
    if((x5<(x10618))) {
      char x35819 = *x3;
      ite31508 = (x35819!=('\0'));
    } else {
      
      ite31508 = 0;
    };
    int x29650 = ite31508;
    if (!(x29650)) break; 
    
    /* VAR */ int x10641 = 0;
    int x10642 = x10641;
    int* x10643 = &x10642;
    char* x10644 = strntoi_unchecked(x3, x10643);
    x3 = x10644;
    char* x12450 = (char*)malloc(26 * sizeof(char));
    memset(x12450, 0, 26 * sizeof(char));
    /* VAR */ char* x10647 = x3;
    while(1) {
      
      char x10648 = *x3;
      /* VAR */ int ite31527 = 0;
      if((x10648!=('|'))) {
        char x35837 = *x3;
        ite31527 = (x35837!=('\n'));
      } else {
        
        ite31527 = 0;
      };
      int x29662 = ite31527;
      if (!(x29662)) break; 
      
      x3 += 1;
    };
    char* x10655 = x10647;
    int x10656 = x3 - x10655;
    char* x10657 = x10647;
    char* x10658 = strncpy(x12450, x10657, x10656);
    x3 += 1;
    /* VAR */ int x10665 = 0;
    int x10666 = x10665;
    int* x10667 = &x10666;
    char* x10668 = strntoi_unchecked(x3, x10667);
    x3 = x10668;
    char* x12473 = (char*)malloc(153 * sizeof(char));
    memset(x12473, 0, 153 * sizeof(char));
    /* VAR */ char* x10671 = x3;
    while(1) {
      
      char x10672 = *x3;
      /* VAR */ int ite31555 = 0;
      if((x10672!=('|'))) {
        char x35864 = *x3;
        ite31555 = (x35864!=('\n'));
      } else {
        
        ite31555 = 0;
      };
      int x29683 = ite31555;
      if (!(x29683)) break; 
      
      x3 += 1;
    };
    char* x10679 = x10671;
    int x10680 = x3 - x10679;
    char* x10681 = x10671;
    char* x10682 = strncpy(x12473, x10681, x10680);
    x3 += 1;
    struct NATIONRecord* x13404 = (struct NATIONRecord*)malloc(1 * sizeof(struct NATIONRecord));
    memset(x13404, 0, 1 * sizeof(struct NATIONRecord));
    x13404->N_NATIONKEY = x10642; x13404->N_NAME = x12450;
    int x28 = x4;
    struct NATIONRecord x12493 = *x13404;
    *(x12426 + x28) = x12493;
    struct NATIONRecord* x12495 = &(x12426[x28]);
    x13404 = x12495;
    int x30 = x4;
    x4 = (x30+(1));
  };
  FILE* x10695 = popen("wc -l /mnt/ramdisk/tpch/sf8/supplier.tbl", "r");
  /* VAR */ int x10696 = 0;
  int x10697 = x10696;
  int* x10698 = &x10697;
  int x10699 = fscanf(x10695, "%d", x10698);
  pclose(x10695);
  struct SUPPLIERRecord* x12506 = (struct SUPPLIERRecord*)malloc(x10697 * sizeof(struct SUPPLIERRecord));
  memset(x12506, 0, x10697 * sizeof(struct SUPPLIERRecord));
  int x10703 = O_RDONLY;
  int x10704 = open("/mnt/ramdisk/tpch/sf8/supplier.tbl", x10703);
  /* VAR */ struct stat x10705 = x10626;
  struct stat x10706 = x10705;
  struct stat* x10707 = &x10706;
  int x10708 = stat("/mnt/ramdisk/tpch/sf8/supplier.tbl", x10707);
  int x10710 = PROT_READ;
  int x10711 = MAP_PRIVATE;
  char* x36 = mmap(NULL, (x10707->st_size), x10710, x10711, x10704, 0);
  /* VAR */ int x37 = 0;
  while(1) {
    
    int x38 = x37;
    /* VAR */ int ite31605 = 0;
    if((x38<(x10697))) {
      char x35913 = *x36;
      ite31605 = (x35913!=('\0'));
    } else {
      
      ite31605 = 0;
    };
    int x29726 = ite31605;
    if (!(x29726)) break; 
    
    /* VAR */ int x10719 = 0;
    int x10720 = x10719;
    int* x10721 = &x10720;
    char* x10722 = strntoi_unchecked(x36, x10721);
    x36 = x10722;
    char* x12529 = (char*)malloc(26 * sizeof(char));
    memset(x12529, 0, 26 * sizeof(char));
    /* VAR */ char* x10725 = x36;
    while(1) {
      
      char x10726 = *x36;
      /* VAR */ int ite31624 = 0;
      if((x10726!=('|'))) {
        char x35931 = *x36;
        ite31624 = (x35931!=('\n'));
      } else {
        
        ite31624 = 0;
      };
      int x29738 = ite31624;
      if (!(x29738)) break; 
      
      x36 += 1;
    };
    char* x10733 = x10725;
    int x10734 = x36 - x10733;
    char* x10735 = x10725;
    char* x10736 = strncpy(x12529, x10735, x10734);
    x36 += 1;
    char* x12547 = (char*)malloc(41 * sizeof(char));
    memset(x12547, 0, 41 * sizeof(char));
    /* VAR */ char* x10744 = x36;
    while(1) {
      
      char x10745 = *x36;
      /* VAR */ int ite31647 = 0;
      if((x10745!=('|'))) {
        char x35953 = *x36;
        ite31647 = (x35953!=('\n'));
      } else {
        
        ite31647 = 0;
      };
      int x29754 = ite31647;
      if (!(x29754)) break; 
      
      x36 += 1;
    };
    char* x10752 = x10744;
    int x10753 = x36 - x10752;
    char* x10754 = x10744;
    char* x10755 = strncpy(x12547, x10754, x10753);
    x36 += 1;
    /* VAR */ int x10762 = 0;
    int x10763 = x10762;
    int* x10764 = &x10763;
    char* x10765 = strntoi_unchecked(x36, x10764);
    x36 = x10765;
    char* x12570 = (char*)malloc(16 * sizeof(char));
    memset(x12570, 0, 16 * sizeof(char));
    /* VAR */ char* x10768 = x36;
    while(1) {
      
      char x10769 = *x36;
      /* VAR */ int ite31675 = 0;
      if((x10769!=('|'))) {
        char x35980 = *x36;
        ite31675 = (x35980!=('\n'));
      } else {
        
        ite31675 = 0;
      };
      int x29775 = ite31675;
      if (!(x29775)) break; 
      
      x36 += 1;
    };
    char* x10776 = x10768;
    int x10777 = x36 - x10776;
    char* x10778 = x10768;
    char* x10779 = strncpy(x12570, x10778, x10777);
    x36 += 1;
    /* VAR */ double x10786 = 0.0;
    double x10787 = x10786;
    double* x10788 = &x10787;
    char* x10789 = strntod_unchecked(x36, x10788);
    x36 = x10789;
    char* x12593 = (char*)malloc(102 * sizeof(char));
    memset(x12593, 0, 102 * sizeof(char));
    /* VAR */ char* x10792 = x36;
    while(1) {
      
      char x10793 = *x36;
      /* VAR */ int ite31703 = 0;
      if((x10793!=('|'))) {
        char x36007 = *x36;
        ite31703 = (x36007!=('\n'));
      } else {
        
        ite31703 = 0;
      };
      int x29796 = ite31703;
      if (!(x29796)) break; 
      
      x36 += 1;
    };
    char* x10800 = x10792;
    int x10801 = x36 - x10800;
    char* x10802 = x10792;
    char* x10803 = strncpy(x12593, x10802, x10801);
    x36 += 1;
    struct SUPPLIERRecord* x13526 = (struct SUPPLIERRecord*)malloc(1 * sizeof(struct SUPPLIERRecord));
    memset(x13526, 0, 1 * sizeof(struct SUPPLIERRecord));
    x13526->S_SUPPKEY = x10720; x13526->S_NAME = x12529; x13526->S_ADDRESS = x12547; x13526->S_NATIONKEY = x10763;
    int x78 = x37;
    struct SUPPLIERRecord x12613 = *x13526;
    *(x12506 + x78) = x12613;
    struct SUPPLIERRecord* x12615 = &(x12506[x78]);
    x13526 = x12615;
    int x80 = x37;
    x37 = (x80+(1));
  };
  FILE* x10816 = popen("wc -l /mnt/ramdisk/tpch/sf8/part.tbl", "r");
  /* VAR */ int x10817 = 0;
  int x10818 = x10817;
  int* x10819 = &x10818;
  int x10820 = fscanf(x10816, "%d", x10819);
  pclose(x10816);
  struct PARTRecord* x12626 = (struct PARTRecord*)malloc(x10818 * sizeof(struct PARTRecord));
  memset(x12626, 0, x10818 * sizeof(struct PARTRecord));
  int x10824 = O_RDONLY;
  int x10825 = open("/mnt/ramdisk/tpch/sf8/part.tbl", x10824);
  /* VAR */ struct stat x10826 = x10626;
  struct stat x10827 = x10826;
  struct stat* x10828 = &x10827;
  int x10829 = stat("/mnt/ramdisk/tpch/sf8/part.tbl", x10828);
  int x10831 = PROT_READ;
  int x10832 = MAP_PRIVATE;
  char* x86 = mmap(NULL, (x10828->st_size), x10831, x10832, x10825, 0);
  /* VAR */ int x87 = 0;
  while(1) {
    
    int x88 = x87;
    /* VAR */ int ite31753 = 0;
    if((x88<(x10818))) {
      char x36056 = *x86;
      ite31753 = (x36056!=('\0'));
    } else {
      
      ite31753 = 0;
    };
    int x29839 = ite31753;
    if (!(x29839)) break; 
    
    /* VAR */ int x10840 = 0;
    int x10841 = x10840;
    int* x10842 = &x10841;
    char* x10843 = strntoi_unchecked(x86, x10842);
    x86 = x10843;
    char* x12649 = (char*)malloc(56 * sizeof(char));
    memset(x12649, 0, 56 * sizeof(char));
    /* VAR */ char* x10846 = x86;
    while(1) {
      
      char x10847 = *x86;
      /* VAR */ int ite31772 = 0;
      if((x10847!=('|'))) {
        char x36074 = *x86;
        ite31772 = (x36074!=('\n'));
      } else {
        
        ite31772 = 0;
      };
      int x29851 = ite31772;
      if (!(x29851)) break; 
      
      x86 += 1;
    };
    char* x10854 = x10846;
    int x10855 = x86 - x10854;
    char* x10856 = x10846;
    char* x10857 = strncpy(x12649, x10856, x10855);
    x86 += 1;
    char* x12667 = (char*)malloc(26 * sizeof(char));
    memset(x12667, 0, 26 * sizeof(char));
    /* VAR */ char* x10865 = x86;
    while(1) {
      
      char x10866 = *x86;
      /* VAR */ int ite31795 = 0;
      if((x10866!=('|'))) {
        char x36096 = *x86;
        ite31795 = (x36096!=('\n'));
      } else {
        
        ite31795 = 0;
      };
      int x29867 = ite31795;
      if (!(x29867)) break; 
      
      x86 += 1;
    };
    char* x10873 = x10865;
    int x10874 = x86 - x10873;
    char* x10875 = x10865;
    char* x10876 = strncpy(x12667, x10875, x10874);
    x86 += 1;
    char* x12685 = (char*)malloc(11 * sizeof(char));
    memset(x12685, 0, 11 * sizeof(char));
    /* VAR */ char* x10884 = x86;
    while(1) {
      
      char x10885 = *x86;
      /* VAR */ int ite31818 = 0;
      if((x10885!=('|'))) {
        char x36118 = *x86;
        ite31818 = (x36118!=('\n'));
      } else {
        
        ite31818 = 0;
      };
      int x29883 = ite31818;
      if (!(x29883)) break; 
      
      x86 += 1;
    };
    char* x10892 = x10884;
    int x10893 = x86 - x10892;
    char* x10894 = x10884;
    char* x10895 = strncpy(x12685, x10894, x10893);
    x86 += 1;
    char* x12703 = (char*)malloc(26 * sizeof(char));
    memset(x12703, 0, 26 * sizeof(char));
    /* VAR */ char* x10903 = x86;
    while(1) {
      
      char x10904 = *x86;
      /* VAR */ int ite31841 = 0;
      if((x10904!=('|'))) {
        char x36140 = *x86;
        ite31841 = (x36140!=('\n'));
      } else {
        
        ite31841 = 0;
      };
      int x29899 = ite31841;
      if (!(x29899)) break; 
      
      x86 += 1;
    };
    char* x10911 = x10903;
    int x10912 = x86 - x10911;
    char* x10913 = x10903;
    char* x10914 = strncpy(x12703, x10913, x10912);
    x86 += 1;
    /* VAR */ int x10921 = 0;
    int x10922 = x10921;
    int* x10923 = &x10922;
    char* x10924 = strntoi_unchecked(x86, x10923);
    x86 = x10924;
    char* x12726 = (char*)malloc(11 * sizeof(char));
    memset(x12726, 0, 11 * sizeof(char));
    /* VAR */ char* x10927 = x86;
    while(1) {
      
      char x10928 = *x86;
      /* VAR */ int ite31869 = 0;
      if((x10928!=('|'))) {
        char x36167 = *x86;
        ite31869 = (x36167!=('\n'));
      } else {
        
        ite31869 = 0;
      };
      int x29920 = ite31869;
      if (!(x29920)) break; 
      
      x86 += 1;
    };
    char* x10935 = x10927;
    int x10936 = x86 - x10935;
    char* x10937 = x10927;
    char* x10938 = strncpy(x12726, x10937, x10936);
    x86 += 1;
    /* VAR */ double x10945 = 0.0;
    double x10946 = x10945;
    double* x10947 = &x10946;
    char* x10948 = strntod_unchecked(x86, x10947);
    x86 = x10948;
    char* x12749 = (char*)malloc(24 * sizeof(char));
    memset(x12749, 0, 24 * sizeof(char));
    /* VAR */ char* x10951 = x86;
    while(1) {
      
      char x10952 = *x86;
      /* VAR */ int ite31897 = 0;
      if((x10952!=('|'))) {
        char x36194 = *x86;
        ite31897 = (x36194!=('\n'));
      } else {
        
        ite31897 = 0;
      };
      int x29941 = ite31897;
      if (!(x29941)) break; 
      
      x86 += 1;
    };
    char* x10959 = x10951;
    int x10960 = x86 - x10959;
    char* x10961 = x10951;
    char* x10962 = strncpy(x12749, x10961, x10960);
    x86 += 1;
    struct PARTRecord* x13684 = (struct PARTRecord*)malloc(1 * sizeof(struct PARTRecord));
    memset(x13684, 0, 1 * sizeof(struct PARTRecord));
    x13684->P_PARTKEY = x10841; x13684->P_NAME = x12649;
    int x142 = x87;
    struct PARTRecord x12769 = *x13684;
    *(x12626 + x142) = x12769;
    struct PARTRecord* x12771 = &(x12626[x142]);
    x13684 = x12771;
    int x144 = x87;
    x87 = (x144+(1));
  };
  FILE* x10975 = popen("wc -l /mnt/ramdisk/tpch/sf8/partsupp.tbl", "r");
  /* VAR */ int x10976 = 0;
  int x10977 = x10976;
  int* x10978 = &x10977;
  int x10979 = fscanf(x10975, "%d", x10978);
  pclose(x10975);
  struct PARTSUPPRecord* x12782 = (struct PARTSUPPRecord*)malloc(x10977 * sizeof(struct PARTSUPPRecord));
  memset(x12782, 0, x10977 * sizeof(struct PARTSUPPRecord));
  int x10983 = O_RDONLY;
  int x10984 = open("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x10983);
  /* VAR */ struct stat x10985 = x10626;
  struct stat x10986 = x10985;
  struct stat* x10987 = &x10986;
  int x10988 = stat("/mnt/ramdisk/tpch/sf8/partsupp.tbl", x10987);
  int x10990 = PROT_READ;
  int x10991 = MAP_PRIVATE;
  char* x150 = mmap(NULL, (x10987->st_size), x10990, x10991, x10984, 0);
  /* VAR */ int x151 = 0;
  while(1) {
    
    int x152 = x151;
    /* VAR */ int ite31947 = 0;
    if((x152<(x10977))) {
      char x36243 = *x150;
      ite31947 = (x36243!=('\0'));
    } else {
      
      ite31947 = 0;
    };
    int x29984 = ite31947;
    if (!(x29984)) break; 
    
    /* VAR */ int x10999 = 0;
    int x11000 = x10999;
    int* x11001 = &x11000;
    char* x11002 = strntoi_unchecked(x150, x11001);
    x150 = x11002;
    /* VAR */ int x11004 = 0;
    int x11005 = x11004;
    int* x11006 = &x11005;
    char* x11007 = strntoi_unchecked(x150, x11006);
    x150 = x11007;
    /* VAR */ int x11009 = 0;
    int x11010 = x11009;
    int* x11011 = &x11010;
    char* x11012 = strntoi_unchecked(x150, x11011);
    x150 = x11012;
    /* VAR */ double x11014 = 0.0;
    double x11015 = x11014;
    double* x11016 = &x11015;
    char* x11017 = strntod_unchecked(x150, x11016);
    x150 = x11017;
    char* x12820 = (char*)malloc(200 * sizeof(char));
    memset(x12820, 0, 200 * sizeof(char));
    /* VAR */ char* x11020 = x150;
    while(1) {
      
      char x11021 = *x150;
      /* VAR */ int ite31981 = 0;
      if((x11021!=('|'))) {
        char x36276 = *x150;
        ite31981 = (x36276!=('\n'));
      } else {
        
        ite31981 = 0;
      };
      int x30011 = ite31981;
      if (!(x30011)) break; 
      
      x150 += 1;
    };
    char* x11028 = x11020;
    int x11029 = x150 - x11028;
    char* x11030 = x11020;
    char* x11031 = strncpy(x12820, x11030, x11029);
    x150 += 1;
    struct PARTSUPPRecord* x13757 = (struct PARTSUPPRecord*)malloc(1 * sizeof(struct PARTSUPPRecord));
    memset(x13757, 0, 1 * sizeof(struct PARTSUPPRecord));
    x13757->PS_PARTKEY = x11000; x13757->PS_SUPPKEY = x11005; x13757->PS_AVAILQTY = x11010;
    int x169 = x151;
    struct PARTSUPPRecord x12840 = *x13757;
    *(x12782 + x169) = x12840;
    struct PARTSUPPRecord* x12842 = &(x12782[x169]);
    x13757 = x12842;
    int x171 = x151;
    x151 = (x171+(1));
  };
  FILE* x11044 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x11045 = 0;
  int x11046 = x11045;
  int* x11047 = &x11046;
  int x11048 = fscanf(x11044, "%d", x11047);
  pclose(x11044);
  struct LINEITEMRecord* x12853 = (struct LINEITEMRecord*)malloc(x11046 * sizeof(struct LINEITEMRecord));
  memset(x12853, 0, x11046 * sizeof(struct LINEITEMRecord));
  int x11052 = O_RDONLY;
  int x11053 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x11052);
  /* VAR */ struct stat x11054 = x10626;
  struct stat x11055 = x11054;
  struct stat* x11056 = &x11055;
  int x11057 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x11056);
  int x11059 = PROT_READ;
  int x11060 = MAP_PRIVATE;
  char* x177 = mmap(NULL, (x11056->st_size), x11059, x11060, x11053, 0);
  /* VAR */ int x178 = 0;
  while(1) {
    
    int x179 = x178;
    /* VAR */ int ite32031 = 0;
    if((x179<(x11046))) {
      char x36325 = *x177;
      ite32031 = (x36325!=('\0'));
    } else {
      
      ite32031 = 0;
    };
    int x30054 = ite32031;
    if (!(x30054)) break; 
    
    /* VAR */ int x11068 = 0;
    int x11069 = x11068;
    int* x11070 = &x11069;
    char* x11071 = strntoi_unchecked(x177, x11070);
    x177 = x11071;
    /* VAR */ int x11073 = 0;
    int x11074 = x11073;
    int* x11075 = &x11074;
    char* x11076 = strntoi_unchecked(x177, x11075);
    x177 = x11076;
    /* VAR */ int x11078 = 0;
    int x11079 = x11078;
    int* x11080 = &x11079;
    char* x11081 = strntoi_unchecked(x177, x11080);
    x177 = x11081;
    /* VAR */ int x11083 = 0;
    int x11084 = x11083;
    int* x11085 = &x11084;
    char* x11086 = strntoi_unchecked(x177, x11085);
    x177 = x11086;
    /* VAR */ double x11088 = 0.0;
    double x11089 = x11088;
    double* x11090 = &x11089;
    char* x11091 = strntod_unchecked(x177, x11090);
    x177 = x11091;
    /* VAR */ double x11093 = 0.0;
    double x11094 = x11093;
    double* x11095 = &x11094;
    char* x11096 = strntod_unchecked(x177, x11095);
    x177 = x11096;
    /* VAR */ double x11098 = 0.0;
    double x11099 = x11098;
    double* x11100 = &x11099;
    char* x11101 = strntod_unchecked(x177, x11100);
    x177 = x11101;
    /* VAR */ double x11103 = 0.0;
    double x11104 = x11103;
    double* x11105 = &x11104;
    char* x11106 = strntod_unchecked(x177, x11105);
    x177 = x11106;
    char x11108 = *x177;
    /* VAR */ char x11109 = x11108;
    x177 += 1;
    x177 += 1;
    char x11113 = *x177;
    /* VAR */ char x11114 = x11113;
    x177 += 1;
    x177 += 1;
    /* VAR */ int x11118 = 0;
    int x11119 = x11118;
    int* x11120 = &x11119;
    char* x11121 = strntoi_unchecked(x177, x11120);
    x177 = x11121;
    /* VAR */ int x11123 = 0;
    int x11124 = x11123;
    int* x11125 = &x11124;
    char* x11126 = strntoi_unchecked(x177, x11125);
    x177 = x11126;
    /* VAR */ int x11128 = 0;
    int x11129 = x11128;
    int* x11130 = &x11129;
    char* x11131 = strntoi_unchecked(x177, x11130);
    x177 = x11131;
    /* VAR */ int x11137 = 0;
    int x11138 = x11137;
    int* x11139 = &x11138;
    char* x11140 = strntoi_unchecked(x177, x11139);
    x177 = x11140;
    /* VAR */ int x11142 = 0;
    int x11143 = x11142;
    int* x11144 = &x11143;
    char* x11145 = strntoi_unchecked(x177, x11144);
    x177 = x11145;
    /* VAR */ int x11147 = 0;
    int x11148 = x11147;
    int* x11149 = &x11148;
    char* x11150 = strntoi_unchecked(x177, x11149);
    x177 = x11150;
    /* VAR */ int x11156 = 0;
    int x11157 = x11156;
    int* x11158 = &x11157;
    char* x11159 = strntoi_unchecked(x177, x11158);
    x177 = x11159;
    /* VAR */ int x11161 = 0;
    int x11162 = x11161;
    int* x11163 = &x11162;
    char* x11164 = strntoi_unchecked(x177, x11163);
    x177 = x11164;
    /* VAR */ int x11166 = 0;
    int x11167 = x11166;
    int* x11168 = &x11167;
    char* x11169 = strntoi_unchecked(x177, x11168);
    x177 = x11169;
    char* x12978 = (char*)malloc(26 * sizeof(char));
    memset(x12978, 0, 26 * sizeof(char));
    /* VAR */ char* x11176 = x177;
    while(1) {
      
      char x11177 = *x177;
      /* VAR */ int ite32152 = 0;
      if((x11177!=('|'))) {
        char x36445 = *x177;
        ite32152 = (x36445!=('\n'));
      } else {
        
        ite32152 = 0;
      };
      int x30168 = ite32152;
      if (!(x30168)) break; 
      
      x177 += 1;
    };
    char* x11184 = x11176;
    int x11185 = x177 - x11184;
    char* x11186 = x11176;
    char* x11187 = strncpy(x12978, x11186, x11185);
    x177 += 1;
    char* x12996 = (char*)malloc(11 * sizeof(char));
    memset(x12996, 0, 11 * sizeof(char));
    /* VAR */ char* x11195 = x177;
    while(1) {
      
      char x11196 = *x177;
      /* VAR */ int ite32175 = 0;
      if((x11196!=('|'))) {
        char x36467 = *x177;
        ite32175 = (x36467!=('\n'));
      } else {
        
        ite32175 = 0;
      };
      int x30184 = ite32175;
      if (!(x30184)) break; 
      
      x177 += 1;
    };
    char* x11203 = x11195;
    int x11204 = x177 - x11203;
    char* x11205 = x11195;
    char* x11206 = strncpy(x12996, x11205, x11204);
    x177 += 1;
    char* x13014 = (char*)malloc(45 * sizeof(char));
    memset(x13014, 0, 45 * sizeof(char));
    /* VAR */ char* x11214 = x177;
    while(1) {
      
      char x11215 = *x177;
      /* VAR */ int ite32198 = 0;
      if((x11215!=('|'))) {
        char x36489 = *x177;
        ite32198 = (x36489!=('\n'));
      } else {
        
        ite32198 = 0;
      };
      int x30200 = ite32198;
      if (!(x30200)) break; 
      
      x177 += 1;
    };
    char* x11222 = x11214;
    int x11223 = x177 - x11222;
    char* x11224 = x11214;
    char* x11225 = strncpy(x13014, x11224, x11223);
    x177 += 1;
    struct LINEITEMRecord* x13953 = (struct LINEITEMRecord*)malloc(1 * sizeof(struct LINEITEMRecord));
    memset(x13953, 0, 1 * sizeof(struct LINEITEMRecord));
    x13953->L_PARTKEY = x11074; x13953->L_SUPPKEY = x11079; x13953->L_QUANTITY = x11089; x13953->L_SHIPDATE = (((x11119*(10000))+((x11124*(100))))+(x11129));
    int x221 = x178;
    struct LINEITEMRecord x13034 = *x13953;
    *(x12853 + x221) = x13034;
    struct LINEITEMRecord* x13036 = &(x12853[x221]);
    x13953 = x13036;
    int x223 = x178;
    x178 = (x223+(1));
  };
  int x228 = 0;
  for(; x228 < 1 ; x228 += 1) {
    
    /* VAR */ int x37209 = 0;
    GList*** x37210 = (GList***)malloc(1048576 * sizeof(GList**));
    memset(x37210, 0, 1048576 * sizeof(GList**));
    int x27138 = 0;
    for(; x27138 < 1048576 ; x27138 += 1) {
      
      GList** x27139 = malloc(8);
      GList* x27140 = NULL;
      pointer_assign(x27139, x27140);
      *(x37210 + x27138) = x27139;
    };
    struct LINEITEMRecord** x37222 = (struct LINEITEMRecord**)malloc(1600000 * sizeof(struct LINEITEMRecord*));
    memset(x37222, 0, 1600000 * sizeof(struct LINEITEMRecord*));
    int* x37223 = (int*)malloc(1600000 * sizeof(int));
    memset(x37223, 0, 1600000 * sizeof(int));
    int x27150 = 0;
    for(; x27150 < 1600000 ; x27150 += 1) {
      
      struct LINEITEMRecord* x27151 = (struct LINEITEMRecord*)malloc(1024 * sizeof(struct LINEITEMRecord));
      memset(x27151, 0, 1024 * sizeof(struct LINEITEMRecord));
      *(x37222 + x27150) = x27151;
    };
    /* VAR */ int x37231 = 0;
    int x27171 = 0;
    for(; x27171 < x11046 ; x27171 += 1) {
      
      struct LINEITEMRecord* x27172 = &(x12853[x27171]);
      int x27174 = (x27172->L_PARTKEY)%(1600000);
      int x27175 = x37223[x27174];
      struct LINEITEMRecord* x27176 = x37222[x27174];
      struct LINEITEMRecord x27177 = *x27172;
      *(x27176 + x27175) = x27177;
      struct LINEITEMRecord* x27179 = &(x27176[x27175]);
      x27172 = x27179;
      *(x37223 + x27174) = (x27175+(1));
      int x27183 = x37231;
      x37231 = (x27183+(1));
    };
    /* VAR */ int x37263 = 0;
    struct Q20GRPRecord* x37264 = (struct Q20GRPRecord*)malloc(48000000 * sizeof(struct Q20GRPRecord));
    memset(x37264, 0, 48000000 * sizeof(struct Q20GRPRecord));
    /* VAR */ int x37265 = 0;
    while(1) {
      
      int x9715 = x37265;
      if (!((x9715<(48000000)))) break; 
      
      int x9717 = x37265;
      struct Q20GRPRecord* x14009 = (struct Q20GRPRecord*)malloc(1 * sizeof(struct Q20GRPRecord));
      memset(x14009, 0, 1 * sizeof(struct Q20GRPRecord));
      x14009->PS_PARTKEY = 0; x14009->PS_SUPPKEY = 0; x14009->PS_AVAILQTY = 0;
      struct Q20GRPRecord x13087 = *x14009;
      *(x37264 + x9717) = x13087;
      struct Q20GRPRecord* x13089 = &(x37264[x9717]);
      x14009 = x13089;
      int x9720 = x37265;
      x37265 = (x9720+(1));
    };
    /* VAR */ int x37280 = 0;
    double** x37281 = (double**)malloc(48000000 * sizeof(double*));
    memset(x37281, 0, 48000000 * sizeof(double*));
    /* VAR */ int x37282 = 0;
    while(1) {
      
      int x9727 = x37282;
      if (!((x9727<(48000000)))) break; 
      
      int x9729 = x37282;
      double* x13101 = (double*)malloc(1 * sizeof(double));
      memset(x13101, 0, 1 * sizeof(double));
      *(x37281 + x9729) = x13101;
      int x9732 = x37282;
      x37282 = (x9732+(1));
    };
    /* VAR */ int x37292 = 0;
    struct AGGRecord_Q20GRPRecord* x37293 = (struct AGGRecord_Q20GRPRecord*)malloc(48000000 * sizeof(struct AGGRecord_Q20GRPRecord));
    memset(x37293, 0, 48000000 * sizeof(struct AGGRecord_Q20GRPRecord));
    /* VAR */ int x37294 = 0;
    while(1) {
      
      int x9739 = x37294;
      if (!((x9739<(48000000)))) break; 
      
      int x9741 = x37294;
      struct Q20GRPRecord* x9742 = &(x37264[x9741]);
      double* x9743 = x37281[x9741];
      struct AGGRecord_Q20GRPRecord* x14040 = (struct AGGRecord_Q20GRPRecord*)malloc(1 * sizeof(struct AGGRecord_Q20GRPRecord));
      memset(x14040, 0, 1 * sizeof(struct AGGRecord_Q20GRPRecord));
      x14040->key = x9742; x14040->aggs = x9743;
      struct AGGRecord_Q20GRPRecord x13116 = *x14040;
      *(x37293 + x9741) = x13116;
      struct AGGRecord_Q20GRPRecord* x13118 = &(x37293[x9741]);
      x14040 = x13118;
      int x9746 = x37294;
      x37294 = (x9746+(1));
    };
    /* VAR */ int x37311 = 0;
    struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x37312 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*)malloc(48000000 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
    memset(x37312, 0, 48000000 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
    /* VAR */ int x37313 = 0;
    while(1) {
      
      int x9753 = x37313;
      if (!((x9753<(48000000)))) break; 
      
      int x9755 = x37313;
      struct Q20GRPRecord* x9756 = &(x37264[x9755]);
      double* x9757 = x37281[x9755];
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x14059 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*)malloc(1 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
      memset(x14059, 0, 1 * sizeof(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord));
      x14059->N_NATIONKEY = 0; x14059->N_NAME = ""; x14059->key = x9756; x14059->aggs = x9757; x14059->S_SUPPKEY = 0; x14059->S_NAME = ""; x14059->S_ADDRESS = ""; x14059->S_NATIONKEY = 0;
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord x13133 = *x14059;
      *(x37312 + x9755) = x13133;
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x13135 = &(x37312[x9755]);
      x14059 = x13135;
      int x9760 = x37313;
      x37313 = (x9760+(1));
    };
    /* VAR */ struct timeval x37330 = x9946;
    struct timeval x37331 = x37330;
    /* VAR */ struct timeval x37332 = x9946;
    struct timeval x37333 = x37332;
    /* VAR */ struct timeval x37334 = x9946;
    struct timeval x37335 = x37334;
    struct timeval* x37336 = &x37333;
    gettimeofday(x37336, NULL);
    /* VAR */ int x37338 = 0;
    int* x37351 = &(x37345);
    GTree* x37352 = g_tree_new(x37351);
    /* VAR */ int x37353 = 0;
    /* VAR */ int x37354 = 0;
    while(1) {
      
      int x37356 = x37338;
      if (!((x37356<(x10977)))) break; 
      
      int x2661 = x37338;
      struct PARTSUPPRecord* x395 = &(x12782[x2661]);
      int x397 = x395->PS_PARTKEY;
      struct PARTRecord* x8131 = &(x12626[(x397-(1))]);
      int x25217 = strlen("azure");
      int x25218 = strncmp((x8131->P_NAME), "azure", x25217);
      if((x25218==(0))) {
        if(((x8131->P_PARTKEY)==(x397))) {
          if(((x8131->P_PARTKEY)==(x397))) {
            int x1150 = x395->PS_SUPPKEY;
            int x4941 = x397%(1600000);
            int x4942 = x37223[x4941];
            struct LINEITEMRecord* x4943 = x37222[x4941];
            int x27397 = 0;
            for(; x27397 < x4942 ; x27397 += 1) {
              
              struct LINEITEMRecord* x27398 = &(x4943[x27397]);
              int x27399 = x27398->L_SHIPDATE;
              /* VAR */ int ite33245 = 0;
              if((x27399>=(19960101))) {
                ite33245 = (x27399<(19970101));
              } else {
                
                ite33245 = 0;
              };
              int x31130 = ite33245;
              if(x31130) {
                /* VAR */ int ite33256 = 0;
                if((x397==((x27398->L_PARTKEY)))) {
                  ite33256 = (x1150==((x27398->L_SUPPKEY)));
                } else {
                  
                  ite33256 = 0;
                };
                int x31135 = ite33256;
                if(x31135) {
                  int x9818 = x37263;
                  struct Q20GRPRecord* x9819 = &(x37264[x9818]);
                  x9819->PS_PARTKEY = x397;
                  x9819->PS_SUPPKEY = x1150;
                  x9819->PS_AVAILQTY = (x395->PS_AVAILQTY);
                  int x9823 = x37263;
                  x37263 = (x9823+(1));
                  int x22147 = x9819->PS_PARTKEY;
                  int x22149 = x9819->PS_SUPPKEY;
                  int x22151 = x9819->PS_AVAILQTY;
                  int x6873 = ((x22147+(x22149))+(x22151))&((1048576-(1)));
                  GList** x6874 = x37210[x6873];
                  int x6875 = x37209;
                  if((x6873>(x6875))) {
                    x37209 = x6873;
                  };
                  /* VAR */ struct AGGRecord_Q20GRPRecord* x16011 = NULL;
                  GList* x16012 = *(x6874);
                  /* VAR */ GList* x16013 = x16012;
                  while(1) {
                    
                    GList* x16014 = x16013;
                    GList* x16015 = NULL;
                    if (!((x16014!=(x16015)))) break; 
                    
                    GList* x16017 = x16013;
                    void* x16018 = g_list_nth_data(x16017, 0);
                    struct AGGRecord_Q20GRPRecord* x16019 = (struct AGGRecord_Q20GRPRecord*){x16018};
                    GList* x16020 = x16013;
                    GList* x16021 = g_list_next(x16020);
                    x16013 = x16021;
                    struct Q20GRPRecord* x16023 = x16019->key;
                    /* VAR */ int ite33330 = 0;
                    if(((x16023->PS_PARTKEY)==(x22147))) {
                      ite33330 = ((x16023->PS_SUPPKEY)==(x22149));
                    } else {
                      
                      ite33330 = 0;
                    };
                    int x31192 = ite33330;
                    /* VAR */ int ite33337 = 0;
                    if(x31192) {
                      ite33337 = ((x16023->PS_AVAILQTY)==(x22151));
                    } else {
                      
                      ite33337 = 0;
                    };
                    int x31194 = ite33337;
                    if(x31194) {
                      x16011 = x16019;
                      break;
                    };
                  };
                  struct AGGRecord_Q20GRPRecord* x16029 = x16011;
                  /* VAR */ struct AGGRecord_Q20GRPRecord* ite31201 = 0;
                  if((x16029!=(NULL))) {
                    ite31201 = x16029;
                  } else {
                    
                    int x31203 = x37280;
                    double* x31204 = x37281[x31203];
                    int x31205 = x37280;
                    x37280 = (x31205+(1));
                    int x31208 = x37292;
                    struct AGGRecord_Q20GRPRecord* x31209 = &(x37293[x31208]);
                    x31209->key = x9819;
                    x31209->aggs = x31204;
                    int x31212 = x37292;
                    x37292 = (x31212+(1));
                    GList* x31215 = *(x6874);
                    GList* x31216 = g_list_prepend(x31215, x31209);
                    pointer_assign(x6874, x31216);
                    ite31201 = x31209;
                  };
                  struct AGGRecord_Q20GRPRecord* x6888 = ite31201;
                  double* x506 = x6888->aggs;
                  double x520 = x506[0];
                  *x506 = (x520+((x27398->L_QUANTITY)));
                };
              };
            };
          };
        };
      };
      int x2695 = x37338;
      x37338 = (x2695+(1));
    };
    int x37637 = x37209;
    int x27608 = 0;
    for(; x27608 < (x37637+(1)) ; x27608 += 1) {
      
      GList** x27609 = x37210[x27608];
      GList* x27660 = *(x27609);
      /* VAR */ GList* x27661 = x27660;
      while(1) {
        
        GList* x16116 = x27661;
        GList* x16117 = NULL;
        if (!((x16116!=(x16117)))) break; 
        
        GList* x16119 = x27661;
        void* x16120 = g_list_nth_data(x16119, 0);
        struct AGGRecord_Q20GRPRecord* x16121 = (struct AGGRecord_Q20GRPRecord*){x16120};
        GList* x16122 = x27661;
        GList* x16123 = g_list_next(x16122);
        x27661 = x16123;
        struct Q20GRPRecord* x16128 = x16121->key;
        double x16132 = ((double*) { x16121->aggs })[0];
        if(((x16128->PS_AVAILQTY)>((0.5*(x16132))))) {
          struct SUPPLIERRecord* x5001 = &(x12506[((x16128->PS_SUPPKEY)-(1))]);
          int x562 = x5001->S_SUPPKEY;
          struct Q20GRPRecord* x8213 = x16121->key;
          if(((x8213->PS_SUPPKEY)==(x562))) {
            int x1375 = x5001->S_NATIONKEY;
            struct NATIONRecord* x8222 = &(x12426[(x1375-(0))]);
            int x25422 = strcmp((x8222->N_NAME), "JORDAN");
            if((x25422==(0))) {
              if(((x8222->N_NATIONKEY)==(x1375))) {
                int x5020 = x8222->N_NATIONKEY;
                if((x5020==(x1375))) {
                  int x9906 = x37311;
                  struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x9907 = &(x37312[x9906]);
                  x9907->N_NATIONKEY = x5020;
                  x9907->N_NAME = (x8222->N_NAME);
                  x9907->key = x8213;
                  x9907->aggs = ((double*) { x16121->aggs });
                  x9907->S_SUPPKEY = x562;
                  x9907->S_NAME = (x5001->S_NAME);
                  x9907->S_ADDRESS = (x5001->S_ADDRESS);
                  x9907->S_NATIONKEY = x1375;
                  int x9916 = x37311;
                  x37311 = (x9916+(1));
                  g_tree_insert(x37352, x9907, x9907);
                };
              };
            };
          };
        };
      };
    };
    while(1) {
      
      int x2922 = x37353;
      int x643 = !(x2922);
      /* VAR */ int ite33603 = 0;
      if(x643) {
        int x37865 = g_tree_nnodes(x37352);
        ite33603 = (x37865!=(0));
      } else {
        
        ite33603 = 0;
      };
      int x31455 = ite33603;
      if (!(x31455)) break; 
      
      void* x16182 = NULL;
      void** x16190 = &(x16182);
      g_tree_foreach(x37352, x16189, x16190);
      struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x16192 = (struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*){x16182};
      int x16193 = g_tree_remove(x37352, x16192);
      if(0) {
        x37353 = 1;
      } else {
        
        printf("%s|%s\n", (x16192->S_NAME), (x16192->S_ADDRESS));
        int x2940 = x37354;
        x37354 = (x2940+(1));
      };
    };
    int x37891 = x37354;
    printf("(%d rows)\n", x37891);
    struct timeval* x37893 = &x37335;
    gettimeofday(x37893, NULL);
    struct timeval* x37895 = &x37331;
    struct timeval* x37896 = &x37335;
    struct timeval* x37897 = &x37333;
    long x37898 = timeval_subtract(x37895, x37896, x37897);
    printf("Generated code run in %ld milliseconds.\n", x37898);
  };
}
/* ----------- FUNCTIONS ----------- */
int x37345(struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x338, struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord* x339) {
  int x25202 = strcmp((x338->S_NAME), (x339->S_NAME));
  return x25202; 
}

int x16189(void* x16183, void* x16184, void* x16185) {
  pointer_assign(((struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord**){x16185}), ((struct NATIONRecord_AGGRecord_Q20GRPRecord_SUPPLIERRecord*){x16184}));
  return 1; 
}
