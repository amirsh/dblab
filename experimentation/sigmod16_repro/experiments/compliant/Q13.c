#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_Int;
  struct Q13IntRecord;
  
  struct AGGRecord_Int {
  int key;
  double* aggs;
  struct AGGRecord_Int* next;
  };
  
  struct Q13IntRecord {
  int count;
  };
  
  


int x23101(struct AGGRecord_Int* x174, struct AGGRecord_Int* x175);

int x13644(void* x13638, void* x13639, void* x13640);
/* GLOBAL VARS */

struct timeval x10086;
int main(int argc, char** argv) {
  FILE* x10562 = popen("wc -l /mnt/ramdisk/tpch/sf8/customer.tbl", "r");
  /* VAR */ int x10563 = 0;
  int x10564 = x10563;
  int* x10565 = &x10564;
  int x10566 = fscanf(x10562, "%d", x10565);
  pclose(x10562);
  int* x11578 = (int*)malloc(x10564 * sizeof(int));
  memset(x11578, 0, x10564 * sizeof(int));
  char** x11579 = (char**)malloc(x10564 * sizeof(char*));
  memset(x11579, 0, x10564 * sizeof(char*));
  char** x11580 = (char**)malloc(x10564 * sizeof(char*));
  memset(x11580, 0, x10564 * sizeof(char*));
  int* x11581 = (int*)malloc(x10564 * sizeof(int));
  memset(x11581, 0, x10564 * sizeof(int));
  char** x11582 = (char**)malloc(x10564 * sizeof(char*));
  memset(x11582, 0, x10564 * sizeof(char*));
  double* x11583 = (double*)malloc(x10564 * sizeof(double));
  memset(x11583, 0, x10564 * sizeof(double));
  char** x11584 = (char**)malloc(x10564 * sizeof(char*));
  memset(x11584, 0, x10564 * sizeof(char*));
  char** x11585 = (char**)malloc(x10564 * sizeof(char*));
  memset(x11585, 0, x10564 * sizeof(char*));
  int x10577 = O_RDONLY;
  int x10578 = open("/mnt/ramdisk/tpch/sf8/customer.tbl", x10577);
  struct stat x10579 = (struct stat){0};
  /* VAR */ struct stat x10580 = x10579;
  struct stat x10581 = x10580;
  struct stat* x10582 = &x10581;
  int x10583 = stat("/mnt/ramdisk/tpch/sf8/customer.tbl", x10582);
  size_t x10584 = x10582->st_size;
  int x10585 = PROT_READ;
  int x10586 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x10584, x10585, x10586, x10578, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x10564);
    /* VAR */ int ite19973 = 0;
    if(x6) {
      char x22256 = *x3;
      int x22257 = x22256!=('\0');
      ite19973 = x22257;
    } else {
      
      ite19973 = 0;
    };
    int x19034 = ite19973;
    if (!(x19034)) break; 
    
    /* VAR */ int x10594 = 0;
    int x10595 = x10594;
    int* x10596 = &x10595;
    char* x10597 = strntoi_unchecked(x3, x10596);
    x3 = x10597;
    char* x11609 = (char*)malloc(26 * sizeof(char));
    memset(x11609, 0, 26 * sizeof(char));
    /* VAR */ char* x10600 = x3;
    while(1) {
      
      char x10601 = *x3;
      int x10602 = x10601!=('|');
      /* VAR */ int ite19992 = 0;
      if(x10602) {
        char x22274 = *x3;
        int x22275 = x22274!=('\n');
        ite19992 = x22275;
      } else {
        
        ite19992 = 0;
      };
      int x19046 = ite19992;
      if (!(x19046)) break; 
      
      x3 += 1;
    };
    char* x10608 = x10600;
    int x10609 = x3 - x10608;
    char* x10610 = x10600;
    char* x10611 = strncpy(x11609, x10610, x10609);
    x3 += 1;
    char* x11627 = (char*)malloc(41 * sizeof(char));
    memset(x11627, 0, 41 * sizeof(char));
    /* VAR */ char* x10619 = x3;
    while(1) {
      
      char x10620 = *x3;
      int x10621 = x10620!=('|');
      /* VAR */ int ite20015 = 0;
      if(x10621) {
        char x22296 = *x3;
        int x22297 = x22296!=('\n');
        ite20015 = x22297;
      } else {
        
        ite20015 = 0;
      };
      int x19062 = ite20015;
      if (!(x19062)) break; 
      
      x3 += 1;
    };
    char* x10627 = x10619;
    int x10628 = x3 - x10627;
    char* x10629 = x10619;
    char* x10630 = strncpy(x11627, x10629, x10628);
    x3 += 1;
    /* VAR */ int x10637 = 0;
    int x10638 = x10637;
    int* x10639 = &x10638;
    char* x10640 = strntoi_unchecked(x3, x10639);
    x3 = x10640;
    char* x11650 = (char*)malloc(16 * sizeof(char));
    memset(x11650, 0, 16 * sizeof(char));
    /* VAR */ char* x10643 = x3;
    while(1) {
      
      char x10644 = *x3;
      int x10645 = x10644!=('|');
      /* VAR */ int ite20043 = 0;
      if(x10645) {
        char x22323 = *x3;
        int x22324 = x22323!=('\n');
        ite20043 = x22324;
      } else {
        
        ite20043 = 0;
      };
      int x19083 = ite20043;
      if (!(x19083)) break; 
      
      x3 += 1;
    };
    char* x10651 = x10643;
    int x10652 = x3 - x10651;
    char* x10653 = x10643;
    char* x10654 = strncpy(x11650, x10653, x10652);
    x3 += 1;
    /* VAR */ double x10661 = 0.0;
    double x10662 = x10661;
    double* x10663 = &x10662;
    char* x10664 = strntod_unchecked(x3, x10663);
    x3 = x10664;
    char* x11673 = (char*)malloc(11 * sizeof(char));
    memset(x11673, 0, 11 * sizeof(char));
    /* VAR */ char* x10667 = x3;
    while(1) {
      
      char x10668 = *x3;
      int x10669 = x10668!=('|');
      /* VAR */ int ite20071 = 0;
      if(x10669) {
        char x22350 = *x3;
        int x22351 = x22350!=('\n');
        ite20071 = x22351;
      } else {
        
        ite20071 = 0;
      };
      int x19104 = ite20071;
      if (!(x19104)) break; 
      
      x3 += 1;
    };
    char* x10675 = x10667;
    int x10676 = x3 - x10675;
    char* x10677 = x10667;
    char* x10678 = strncpy(x11673, x10677, x10676);
    x3 += 1;
    char* x11691 = (char*)malloc(118 * sizeof(char));
    memset(x11691, 0, 118 * sizeof(char));
    /* VAR */ char* x10686 = x3;
    while(1) {
      
      char x10687 = *x3;
      int x10688 = x10687!=('|');
      /* VAR */ int ite20094 = 0;
      if(x10688) {
        char x22372 = *x3;
        int x22373 = x22372!=('\n');
        ite20094 = x22373;
      } else {
        
        ite20094 = 0;
      };
      int x19120 = ite20094;
      if (!(x19120)) break; 
      
      x3 += 1;
    };
    char* x10694 = x10686;
    int x10695 = x3 - x10694;
    char* x10696 = x10686;
    char* x10697 = strncpy(x11691, x10696, x10695);
    x3 += 1;
    int x53 = x4;
    *(x11578 + x53) = x10595;
    *(x11579 + x53) = x11609;
    *(x11580 + x53) = x11627;
    *(x11581 + x53) = x10638;
    *(x11582 + x53) = x11650;
    *(x11583 + x53) = x10662;
    *(x11584 + x53) = x11673;
    *(x11585 + x53) = x11691;
    int x55 = x4;
    int x56 = x55+(1);
    x4 = x56;
  };
  FILE* x10716 = popen("wc -l /mnt/ramdisk/tpch/sf8/orders.tbl", "r");
  /* VAR */ int x10717 = 0;
  int x10718 = x10717;
  int* x10719 = &x10718;
  int x10720 = fscanf(x10716, "%d", x10719);
  pclose(x10716);
  int* x11727 = (int*)malloc(x10718 * sizeof(int));
  memset(x11727, 0, x10718 * sizeof(int));
  int* x11728 = (int*)malloc(x10718 * sizeof(int));
  memset(x11728, 0, x10718 * sizeof(int));
  char* x11729 = (char*)malloc(x10718 * sizeof(char));
  memset(x11729, 0, x10718 * sizeof(char));
  double* x11730 = (double*)malloc(x10718 * sizeof(double));
  memset(x11730, 0, x10718 * sizeof(double));
  int* x11731 = (int*)malloc(x10718 * sizeof(int));
  memset(x11731, 0, x10718 * sizeof(int));
  char** x11732 = (char**)malloc(x10718 * sizeof(char*));
  memset(x11732, 0, x10718 * sizeof(char*));
  char** x11733 = (char**)malloc(x10718 * sizeof(char*));
  memset(x11733, 0, x10718 * sizeof(char*));
  int* x11734 = (int*)malloc(x10718 * sizeof(int));
  memset(x11734, 0, x10718 * sizeof(int));
  char** x11735 = (char**)malloc(x10718 * sizeof(char*));
  memset(x11735, 0, x10718 * sizeof(char*));
  int x10732 = O_RDONLY;
  int x10733 = open("/mnt/ramdisk/tpch/sf8/orders.tbl", x10732);
  /* VAR */ struct stat x10734 = x10579;
  struct stat x10735 = x10734;
  struct stat* x10736 = &x10735;
  int x10737 = stat("/mnt/ramdisk/tpch/sf8/orders.tbl", x10736);
  size_t x10738 = x10736->st_size;
  int x10739 = PROT_READ;
  int x10740 = MAP_PRIVATE;
  char* x61 = mmap(NULL, x10738, x10739, x10740, x10733, 0);
  /* VAR */ int x62 = 0;
  while(1) {
    
    int x63 = x62;
    int x64 = x63<(x10718);
    /* VAR */ int ite20153 = 0;
    if(x64) {
      char x22430 = *x61;
      int x22431 = x22430!=('\0');
      ite20153 = x22431;
    } else {
      
      ite20153 = 0;
    };
    int x19172 = ite20153;
    if (!(x19172)) break; 
    
    /* VAR */ int x10748 = 0;
    int x10749 = x10748;
    int* x10750 = &x10749;
    char* x10751 = strntoi_unchecked(x61, x10750);
    x61 = x10751;
    /* VAR */ int x10753 = 0;
    int x10754 = x10753;
    int* x10755 = &x10754;
    char* x10756 = strntoi_unchecked(x61, x10755);
    x61 = x10756;
    char x10758 = *x61;
    /* VAR */ char x10759 = x10758;
    x61 += 1;
    x61 += 1;
    char x10762 = x10759;
    /* VAR */ double x10763 = 0.0;
    double x10764 = x10763;
    double* x10765 = &x10764;
    char* x10766 = strntod_unchecked(x61, x10765);
    x61 = x10766;
    /* VAR */ int x10768 = 0;
    int x10769 = x10768;
    int* x10770 = &x10769;
    char* x10771 = strntoi_unchecked(x61, x10770);
    x61 = x10771;
    /* VAR */ int x10773 = 0;
    int x10774 = x10773;
    int* x10775 = &x10774;
    char* x10776 = strntoi_unchecked(x61, x10775);
    x61 = x10776;
    /* VAR */ int x10778 = 0;
    int x10779 = x10778;
    int* x10780 = &x10779;
    char* x10781 = strntoi_unchecked(x61, x10780);
    x61 = x10781;
    int x10783 = x10769*(10000);
    int x10784 = x10774*(100);
    int x10785 = x10783+(x10784);
    int x10786 = x10785+(x10779);
    char* x11792 = (char*)malloc(16 * sizeof(char));
    memset(x11792, 0, 16 * sizeof(char));
    /* VAR */ char* x10788 = x61;
    while(1) {
      
      char x10789 = *x61;
      int x10790 = x10789!=('|');
      /* VAR */ int ite20206 = 0;
      if(x10790) {
        char x22482 = *x61;
        int x22483 = x22482!=('\n');
        ite20206 = x22483;
      } else {
        
        ite20206 = 0;
      };
      int x19218 = ite20206;
      if (!(x19218)) break; 
      
      x61 += 1;
    };
    char* x10796 = x10788;
    int x10797 = x61 - x10796;
    char* x10798 = x10788;
    char* x10799 = strncpy(x11792, x10798, x10797);
    x61 += 1;
    char* x11810 = (char*)malloc(16 * sizeof(char));
    memset(x11810, 0, 16 * sizeof(char));
    /* VAR */ char* x10807 = x61;
    while(1) {
      
      char x10808 = *x61;
      int x10809 = x10808!=('|');
      /* VAR */ int ite20229 = 0;
      if(x10809) {
        char x22504 = *x61;
        int x22505 = x22504!=('\n');
        ite20229 = x22505;
      } else {
        
        ite20229 = 0;
      };
      int x19234 = ite20229;
      if (!(x19234)) break; 
      
      x61 += 1;
    };
    char* x10815 = x10807;
    int x10816 = x61 - x10815;
    char* x10817 = x10807;
    char* x10818 = strncpy(x11810, x10817, x10816);
    x61 += 1;
    /* VAR */ int x10825 = 0;
    int x10826 = x10825;
    int* x10827 = &x10826;
    char* x10828 = strntoi_unchecked(x61, x10827);
    x61 = x10828;
    char* x11833 = (char*)malloc(80 * sizeof(char));
    memset(x11833, 0, 80 * sizeof(char));
    /* VAR */ char* x10831 = x61;
    while(1) {
      
      char x10832 = *x61;
      int x10833 = x10832!=('|');
      /* VAR */ int ite20257 = 0;
      if(x10833) {
        char x22531 = *x61;
        int x22532 = x22531!=('\n');
        ite20257 = x22532;
      } else {
        
        ite20257 = 0;
      };
      int x19255 = ite20257;
      if (!(x19255)) break; 
      
      x61 += 1;
    };
    char* x10839 = x10831;
    int x10840 = x61 - x10839;
    char* x10841 = x10831;
    char* x10842 = strncpy(x11833, x10841, x10840);
    x61 += 1;
    int x97 = x62;
    *(x11727 + x97) = x10749;
    *(x11728 + x97) = x10754;
    *(x11729 + x97) = x10762;
    *(x11730 + x97) = x10764;
    *(x11731 + x97) = x10786;
    *(x11732 + x97) = x11792;
    *(x11733 + x97) = x11810;
    *(x11734 + x97) = x10826;
    *(x11735 + x97) = x11833;
    int x99 = x62;
    int x100 = x99+(1);
    x62 = x100;
  };
  struct Q13IntRecord* x11864 = (struct Q13IntRecord*)malloc(x10564 * sizeof(struct Q13IntRecord));
  memset(x11864, 0, x10564 * sizeof(struct Q13IntRecord));
  int x105 = 0;
  for(; x105 < x10564 ; x105 += 1) {
    
    struct Q13IntRecord* x22573 = (struct Q13IntRecord*)malloc(1 * sizeof(struct Q13IntRecord));
    memset(x22573, 0, 1 * sizeof(struct Q13IntRecord));
    x22573->count = 0;
    int x22576 = x22573==(NULL);
    if(x22576) {
      *(x11864 + x105) = (const struct Q13IntRecord){0};
    } else {
      
      struct Q13IntRecord x11871 = *x22573;
      *(x11864 + x105) = x11871;
      struct Q13IntRecord* x11873 = &(x11864[x105]);
      x22573 = x11873;
    };
  };
  int x111 = 0;
  for(; x111 < 1 ; x111 += 1) {
    
    /* VAR */ int x22959 = 0;
    struct AGGRecord_Int* x22960 = (struct AGGRecord_Int*)malloc(1048576 * sizeof(struct AGGRecord_Int));
    memset(x22960, 0, 1048576 * sizeof(struct AGGRecord_Int));
    int x17874 = 0;
    for(; x17874 < 1048576 ; x17874 += 1) {
      
      *(x22960 + x17874) = (const struct AGGRecord_Int){0};
    };
    /* VAR */ int x22966 = 0;
    double** x22967 = (double**)malloc(48000000 * sizeof(double*));
    memset(x22967, 0, 48000000 * sizeof(double*));
    /* VAR */ int x22968 = 0;
    while(1) {
      
      int x9914 = x22968;
      int x9915 = x9914<(48000000);
      if (!(x9915)) break; 
      
      int x9916 = x22968;
      double* x11894 = (double*)malloc(1 * sizeof(double));
      memset(x11894, 0, 1 * sizeof(double));
      *(x22967 + x9916) = x11894;
      int x9919 = x22968;
      int x9920 = x9919+(1);
      x22968 = x9920;
    };
    /* VAR */ int x22978 = 0;
    struct AGGRecord_Int* x22979 = (struct AGGRecord_Int*)malloc(48000000 * sizeof(struct AGGRecord_Int));
    memset(x22979, 0, 48000000 * sizeof(struct AGGRecord_Int));
    /* VAR */ int x22980 = 0;
    while(1) {
      
      int x9926 = x22980;
      int x9927 = x9926<(48000000);
      if (!(x9927)) break; 
      
      int x9928 = x22980;
      double* x9929 = x22967[x9928];
      struct AGGRecord_Int* x12424 = (struct AGGRecord_Int*)malloc(1 * sizeof(struct AGGRecord_Int));
      memset(x12424, 0, 1 * sizeof(struct AGGRecord_Int));
      x12424->key = 0; x12424->aggs = x9929; x12424->next = NULL;
      int x15655 = x12424==(NULL);
      /* VAR */ int ite20732 = 0;
      if(x15655) {
        ite20732 = 1;
      } else {
        
        double* x22993 = x12424->aggs;
        int x22994 = x22993==(NULL);
        ite20732 = x22994;
      };
      int x19657 = ite20732;
      if(x19657) {
        *(x22979 + x9928) = (const struct AGGRecord_Int){0};
      } else {
        
        struct AGGRecord_Int x11910 = *x12424;
        *(x22979 + x9928) = x11910;
        struct AGGRecord_Int* x11912 = &(x22979[x9928]);
        x12424 = x11912;
      };
      int x9932 = x22980;
      int x9933 = x9932+(1);
      x22980 = x9933;
    };
    /* VAR */ struct timeval x23007 = x10086;
    struct timeval x23008 = x23007;
    /* VAR */ struct timeval x23009 = x10086;
    struct timeval x23010 = x23009;
    /* VAR */ struct timeval x23011 = x10086;
    struct timeval x23012 = x23011;
    struct timeval* x23013 = &x23010;
    gettimeofday(x23013, NULL);
    /* VAR */ int x23015 = 0;
    while(1) {
      
      int x23017 = x23015;
      int x23018 = x23017<(x10718);
      if (!(x23018)) break; 
      
      int x1019 = x23015;
      char* x6796 = x11735[x1019];
      char* x16799 = pointer_add(x6796, 0);
      char* x16800 = strstr(x16799, "unusual");
      char* x16801 = NULL;
      int x16802 = x16800==(x16801);
      /* VAR */ int ite19685 = 0;
      if(x16802) {
        ite19685 = -1;
      } else {
        
        int x19687 = str_subtract(x16800, x6796);
        ite19685 = x19687;
      };
      int x16804 = ite19685;
      char* x16805 = pointer_add(x6796, x16804);
      char* x16806 = strstr(x16805, "packages");
      char* x16807 = NULL;
      int x16808 = x16806==(x16807);
      /* VAR */ int ite19696 = 0;
      if(x16808) {
        ite19696 = -1;
      } else {
        
        int x19698 = str_subtract(x16806, x6796);
        ite19696 = x19698;
      };
      int x16810 = ite19696;
      int x145 = x16804!=(-1);
      /* VAR */ int ite20788 = 0;
      if(x145) {
        int x23046 = x16810!=(-1);
        ite20788 = x23046;
      } else {
        
        ite20788 = 0;
      };
      int x19704 = ite20788;
      int x148 = !(x19704);
      if(x148) {
        int x6805 = x11728[x1019];
        struct Q13IntRecord* x153 = &(x11864[x6805]);
        int x154 = x153->count;
        int x155 = x154+(1);
        x153->count = x155;
      };
      int x1039 = x23015;
      int x160 = x1039+(1);
      x23015 = x160;
    };
    /* VAR */ int x23061 = 0;
    int* x23140 = &(x23101);
    GTree* x23141 = g_tree_new(x23140);
    /* VAR */ int x23142 = 0;
    /* VAR */ int x23143 = 0;
    while(1) {
      
      int x23145 = x23061;
      int x23146 = x23145<(x10564);
      if (!(x23146)) break; 
      
      int x1101 = x23061;
      struct Q13IntRecord* x207 = &(x11864[x1101]);
      int x209 = x207->count;
      int x2362 = x209&(1048575);
      struct AGGRecord_Int* x3073 = &(x22960[x2362]);
      int x2364 = x22959;
      int x2365 = x2362>(x2364);
      if(x2365) {
        x22959 = x2362;
      };
      /* VAR */ struct AGGRecord_Int* current3360 = x3073;
      /* VAR */ int found3083 = 0;
      while(1) {
        
        struct AGGRecord_Int* x3363 = current3360;
        int x15758 = x3363!=(NULL);
        /* VAR */ int ite20907 = 0;
        if(x15758) {
          double* x23163 = x3363->aggs;
          int x23164 = x23163!=(NULL);
          ite20907 = x23164;
        } else {
          
          ite20907 = 0;
        };
        int x19815 = ite20907;
        /* VAR */ int ite20916 = 0;
        if(x19815) {
          int x23171 = found3083;
          int x23172 = !(x23171);
          ite20916 = x23172;
        } else {
          
          ite20916 = 0;
        };
        int x19817 = ite20916;
        if (!(x19817)) break; 
        
        struct AGGRecord_Int* x3368 = current3360;
        int x3091 = x3368->key;
        int x3092 = x3091==(x209);
        if(x3092) {
          found3083 = 1;
        } else {
          
          struct AGGRecord_Int* x3374 = current3360;
          struct AGGRecord_Int* x3929 = x3374->next;
          current3360 = x3929;
        };
      };
      int x3099 = found3083;
      int x3100 = !(x3099);
      /* VAR */ struct AGGRecord_Int** ite19829 = 0;
      if(x3100) {
        ite19829 = NULL;
      } else {
        
        struct AGGRecord_Int* x19831 = current3360;
        ite19829 = x19831;
      };
      struct AGGRecord_Int** x3106 = ite19829;
      int x5552 = x3106!=(NULL);
      /* VAR */ struct AGGRecord_Int* ite19837 = 0;
      if(x5552) {
        ite19837 = x3106;
      } else {
        
        int x19839 = x22966;
        double* x19840 = x22967[x19839];
        int x19841 = x22966;
        int x19842 = x19841+(1);
        x22966 = x19842;
        int x19844 = x22978;
        struct AGGRecord_Int* x19845 = &(x22979[x19844]);
        x19845->key = x209;
        x19845->aggs = x19840;
        x19845->next = NULL;
        int x19849 = x22978;
        int x19850 = x19849+(1);
        x22978 = x19850;
        int x19852 = x3073==(NULL);
        /* VAR */ int ite20960 = 0;
        if(x19852) {
          ite20960 = 1;
        } else {
          
          double* x23215 = x3073->aggs;
          int x23216 = x23215==(NULL);
          ite20960 = x23216;
        };
        int x19854 = ite20960;
        if(x19854) {
          x19845->next = NULL;
          int x15798 = x19845==(NULL);
          /* VAR */ int ite20972 = 0;
          if(x15798) {
            ite20972 = 1;
          } else {
            
            double* x23226 = x19845->aggs;
            int x23227 = x23226==(NULL);
            ite20972 = x23227;
          };
          int x19859 = ite20972;
          if(x19859) {
            *(x22960 + x2362) = (const struct AGGRecord_Int){0};
          } else {
            
            struct AGGRecord_Int x12026 = *x19845;
            *(x22960 + x2362) = x12026;
            struct AGGRecord_Int* x12028 = &(x22960[x2362]);
            x19845 = x12028;
          };
        } else {
          
          struct AGGRecord_Int* x3949 = x3073->next;
          x19845->next = x3949;
          x3073->next = x19845;
        };
        ite19837 = x19845;
      };
      struct AGGRecord_Int* x2377 = ite19837;
      double* x214 = x2377->aggs;
      double x228 = x214[0];
      double x230 = x228+(1.0);
      *x214 = x230;
      int x1130 = x23061;
      int x237 = x1130+(1);
      x23061 = x237;
    };
    int x23250 = x22959;
    int x23251 = x23250+(1);
    int x18090 = 0;
    for(; x18090 < x23251 ; x18090 += 1) {
      
      struct AGGRecord_Int* x18091 = &(x22960[x18090]);
      /* VAR */ struct AGGRecord_Int* x18092 = x18091;
      while(1) {
        
        struct AGGRecord_Int* x3419 = x18092;
        int x15827 = x3419!=(NULL);
        /* VAR */ int ite21029 = 0;
        if(x15827) {
          double* x23280 = x3419->aggs;
          int x23281 = x23280!=(NULL);
          ite21029 = x23281;
        } else {
          
          ite21029 = 0;
        };
        int x19902 = ite21029;
        if (!(x19902)) break; 
        
        struct AGGRecord_Int* x3421 = x18092;
        struct AGGRecord_Int* x3976 = x3421->next;
        struct AGGRecord_Int* x3423 = x18092;
        g_tree_insert(x23141, x3423, x3423);
        x18092 = x3976;
      };
    };
    while(1) {
      
      int x1139 = x23142;
      int x248 = !(x1139);
      /* VAR */ int ite21046 = 0;
      if(x248) {
        int x23296 = g_tree_nnodes(x23141);
        int x23297 = x23296!=(0);
        ite21046 = x23297;
      } else {
        
        ite21046 = 0;
      };
      int x19912 = ite21046;
      if (!(x19912)) break; 
      
      void* x13637 = NULL;
      void** x13645 = &(x13637);
      g_tree_foreach(x23141, x13644, x13645);
      struct AGGRecord_Int* x13647 = (struct AGGRecord_Int*){x13637};
      int x13648 = g_tree_remove(x23141, x13647);
      if(0) {
        x23142 = 1;
      } else {
        
        int x261 = x13647->key;
        double* x262 = x13647->aggs;
        double x263 = x262[0];
        printf("%d|%.0f\n", x261, x263);
        int x1156 = x23143;
        int x266 = x1156+(1);
        x23143 = x266;
      };
    };
    int x23323 = x23143;
    printf("(%d rows)\n", x23323);
    struct timeval* x23325 = &x23012;
    gettimeofday(x23325, NULL);
    struct timeval* x23327 = &x23008;
    struct timeval* x23328 = &x23012;
    struct timeval* x23329 = &x23010;
    long x23330 = timeval_subtract(x23327, x23328, x23329);
    printf("Generated code run in %ld milliseconds.\n", x23330);
  };
}
/* ----------- FUNCTIONS ----------- */
int x23101(struct AGGRecord_Int* x174, struct AGGRecord_Int* x175) {
  double* x176 = x174->aggs;
  double x177 = x176[0];
  double* x178 = x175->aggs;
  double x179 = x178[0];
  int x180 = x177<(x179);
  /* VAR */ int ite19764 = 0;
  if(x180) {
    ite19764 = 1;
  } else {
    
    double x19766 = x176[0];
    double x19767 = x178[0];
    int x19768 = x19766>(x19767);
    /* VAR */ int ite19770 = 0;
    if(x19768) {
      ite19770 = -1;
    } else {
      
      int x19772 = x174->key;
      int x19773 = x175->key;
      int x19774 = x19772<(x19773);
      /* VAR */ int ite19776 = 0;
      if(x19774) {
        ite19776 = 1;
      } else {
        
        int x19778 = x19772>(x19773);
        /* VAR */ int ite19780 = 0;
        if(x19778) {
          ite19780 = -1;
        } else {
          
          ite19780 = 0;
        };
        int x19779 = ite19780;
        ite19776 = x19779;
      };
      int x19775 = ite19776;
      ite19770 = x19775;
    };
    int x19769 = ite19770;
    ite19764 = x19769;
  };
  int x191 = ite19764;
  return x191; 
}

int x13644(void* x13638, void* x13639, void* x13640) {
  struct AGGRecord_Int** x13641 = (struct AGGRecord_Int**){x13640};
  struct AGGRecord_Int* x13642 = (struct AGGRecord_Int*){x13639};
  pointer_assign(x13641, x13642);
  return 1; 
}
