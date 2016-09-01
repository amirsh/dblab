#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  struct AGGRecord_String;
  
  struct AGGRecord_String {
  char* key;
  double* aggs;
  };
  
  

/* GLOBAL VARS */

struct timeval x2949;
int main(int argc, char** argv) {
  FILE* x3121 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x3122 = 0;
  int x3123 = x3122;
  int* x3124 = &x3123;
  int x3125 = fscanf(x3121, "%d", x3124);
  pclose(x3121);
  int* x3689 = (int*)malloc(x3123 * sizeof(int));
  memset(x3689, 0, x3123 * sizeof(int));
  int* x3690 = (int*)malloc(x3123 * sizeof(int));
  memset(x3690, 0, x3123 * sizeof(int));
  int* x3691 = (int*)malloc(x3123 * sizeof(int));
  memset(x3691, 0, x3123 * sizeof(int));
  int* x3692 = (int*)malloc(x3123 * sizeof(int));
  memset(x3692, 0, x3123 * sizeof(int));
  double* x3693 = (double*)malloc(x3123 * sizeof(double));
  memset(x3693, 0, x3123 * sizeof(double));
  double* x3694 = (double*)malloc(x3123 * sizeof(double));
  memset(x3694, 0, x3123 * sizeof(double));
  double* x3695 = (double*)malloc(x3123 * sizeof(double));
  memset(x3695, 0, x3123 * sizeof(double));
  double* x3696 = (double*)malloc(x3123 * sizeof(double));
  memset(x3696, 0, x3123 * sizeof(double));
  char* x3697 = (char*)malloc(x3123 * sizeof(char));
  memset(x3697, 0, x3123 * sizeof(char));
  char* x3698 = (char*)malloc(x3123 * sizeof(char));
  memset(x3698, 0, x3123 * sizeof(char));
  int* x3699 = (int*)malloc(x3123 * sizeof(int));
  memset(x3699, 0, x3123 * sizeof(int));
  int* x3700 = (int*)malloc(x3123 * sizeof(int));
  memset(x3700, 0, x3123 * sizeof(int));
  int* x3701 = (int*)malloc(x3123 * sizeof(int));
  memset(x3701, 0, x3123 * sizeof(int));
  char** x3702 = (char**)malloc(x3123 * sizeof(char*));
  memset(x3702, 0, x3123 * sizeof(char*));
  char** x3703 = (char**)malloc(x3123 * sizeof(char*));
  memset(x3703, 0, x3123 * sizeof(char*));
  char** x3704 = (char**)malloc(x3123 * sizeof(char*));
  memset(x3704, 0, x3123 * sizeof(char*));
  int x3144 = O_RDONLY;
  int x3145 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x3144);
  /* VAR */ struct stat x3147 = ((struct stat){0});
  struct stat x3148 = x3147;
  struct stat* x3149 = &x3148;
  int x3150 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x3149);
  int x3152 = PROT_READ;
  int x3153 = MAP_PRIVATE;
  char* x3 = mmap(NULL, (x3149->st_size), x3152, x3153, x3145, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    /* VAR */ int ite7408 = 0;
    if((x5<(x3123))) {
      char x9317 = *x3;
      ite7408 = (x9317!=('\0'));
    } else {
      
      ite7408 = 0;
    };
    int x7104 = ite7408;
    if (!(x7104)) break; 
    
    /* VAR */ int x3161 = 0;
    int x3162 = x3161;
    int* x3163 = &x3162;
    char* x3164 = strntoi_unchecked(x3, x3163);
    x3 = x3164;
    /* VAR */ int x3166 = 0;
    int x3167 = x3166;
    int* x3168 = &x3167;
    char* x3169 = strntoi_unchecked(x3, x3168);
    x3 = x3169;
    /* VAR */ int x3171 = 0;
    int x3172 = x3171;
    int* x3173 = &x3172;
    char* x3174 = strntoi_unchecked(x3, x3173);
    x3 = x3174;
    /* VAR */ int x3176 = 0;
    int x3177 = x3176;
    int* x3178 = &x3177;
    char* x3179 = strntoi_unchecked(x3, x3178);
    x3 = x3179;
    /* VAR */ double x3181 = 0.0;
    double x3182 = x3181;
    double* x3183 = &x3182;
    char* x3184 = strntod_unchecked(x3, x3183);
    x3 = x3184;
    /* VAR */ double x3186 = 0.0;
    double x3187 = x3186;
    double* x3188 = &x3187;
    char* x3189 = strntod_unchecked(x3, x3188);
    x3 = x3189;
    /* VAR */ double x3191 = 0.0;
    double x3192 = x3191;
    double* x3193 = &x3192;
    char* x3194 = strntod_unchecked(x3, x3193);
    x3 = x3194;
    /* VAR */ double x3196 = 0.0;
    double x3197 = x3196;
    double* x3198 = &x3197;
    char* x3199 = strntod_unchecked(x3, x3198);
    x3 = x3199;
    char x3201 = *x3;
    /* VAR */ char x3202 = x3201;
    x3 += 1;
    x3 += 1;
    char x3205 = x3202;
    char x3206 = *x3;
    /* VAR */ char x3207 = x3206;
    x3 += 1;
    x3 += 1;
    char x3210 = x3207;
    /* VAR */ int x3211 = 0;
    int x3212 = x3211;
    int* x3213 = &x3212;
    char* x3214 = strntoi_unchecked(x3, x3213);
    x3 = x3214;
    /* VAR */ int x3216 = 0;
    int x3217 = x3216;
    int* x3218 = &x3217;
    char* x3219 = strntoi_unchecked(x3, x3218);
    x3 = x3219;
    /* VAR */ int x3221 = 0;
    int x3222 = x3221;
    int* x3223 = &x3222;
    char* x3224 = strntoi_unchecked(x3, x3223);
    x3 = x3224;
    /* VAR */ int x3230 = 0;
    int x3231 = x3230;
    int* x3232 = &x3231;
    char* x3233 = strntoi_unchecked(x3, x3232);
    x3 = x3233;
    /* VAR */ int x3235 = 0;
    int x3236 = x3235;
    int* x3237 = &x3236;
    char* x3238 = strntoi_unchecked(x3, x3237);
    x3 = x3238;
    /* VAR */ int x3240 = 0;
    int x3241 = x3240;
    int* x3242 = &x3241;
    char* x3243 = strntoi_unchecked(x3, x3242);
    x3 = x3243;
    /* VAR */ int x3249 = 0;
    int x3250 = x3249;
    int* x3251 = &x3250;
    char* x3252 = strntoi_unchecked(x3, x3251);
    x3 = x3252;
    /* VAR */ int x3254 = 0;
    int x3255 = x3254;
    int* x3256 = &x3255;
    char* x3257 = strntoi_unchecked(x3, x3256);
    x3 = x3257;
    /* VAR */ int x3259 = 0;
    int x3260 = x3259;
    int* x3261 = &x3260;
    char* x3262 = strntoi_unchecked(x3, x3261);
    x3 = x3262;
    char* x3830 = (char*)malloc(26 * sizeof(char));
    memset(x3830, 0, 26 * sizeof(char));
    /* VAR */ char* x3269 = x3;
    while(1) {
      
      char x3270 = *x3;
      /* VAR */ int ite7529 = 0;
      if((x3270!=('|'))) {
        char x9437 = *x3;
        ite7529 = (x9437!=('\n'));
      } else {
        
        ite7529 = 0;
      };
      int x7218 = ite7529;
      if (!(x7218)) break; 
      
      x3 += 1;
    };
    char* x3277 = x3269;
    int x3278 = x3 - x3277;
    char* x3279 = x3269;
    char* x3280 = strncpy(x3830, x3279, x3278);
    x3 += 1;
    char* x3848 = (char*)malloc(11 * sizeof(char));
    memset(x3848, 0, 11 * sizeof(char));
    /* VAR */ char* x3288 = x3;
    while(1) {
      
      char x3289 = *x3;
      /* VAR */ int ite7552 = 0;
      if((x3289!=('|'))) {
        char x9459 = *x3;
        ite7552 = (x9459!=('\n'));
      } else {
        
        ite7552 = 0;
      };
      int x7234 = ite7552;
      if (!(x7234)) break; 
      
      x3 += 1;
    };
    char* x3296 = x3288;
    int x3297 = x3 - x3296;
    char* x3298 = x3288;
    char* x3299 = strncpy(x3848, x3298, x3297);
    x3 += 1;
    char* x3866 = (char*)malloc(45 * sizeof(char));
    memset(x3866, 0, 45 * sizeof(char));
    /* VAR */ char* x3307 = x3;
    while(1) {
      
      char x3308 = *x3;
      /* VAR */ int ite7575 = 0;
      if((x3308!=('|'))) {
        char x9481 = *x3;
        ite7575 = (x9481!=('\n'));
      } else {
        
        ite7575 = 0;
      };
      int x7250 = ite7575;
      if (!(x7250)) break; 
      
      x3 += 1;
    };
    char* x3315 = x3307;
    int x3316 = x3 - x3315;
    char* x3317 = x3307;
    char* x3318 = strncpy(x3866, x3317, x3316);
    x3 += 1;
    int x47 = x4;
    *(x3689 + x47) = x3162;
    *(x3690 + x47) = x3167;
    *(x3691 + x47) = x3172;
    *(x3692 + x47) = x3177;
    *(x3693 + x47) = x3182;
    *(x3694 + x47) = x3187;
    *(x3695 + x47) = x3192;
    *(x3696 + x47) = x3197;
    *(x3697 + x47) = x3205;
    *(x3698 + x47) = x3210;
    *(x3699 + x47) = (((x3212*(10000))+((x3217*(100))))+(x3222));
    *(x3700 + x47) = (((x3231*(10000))+((x3236*(100))))+(x3241));
    *(x3701 + x47) = (((x3250*(10000))+((x3255*(100))))+(x3260));
    *(x3702 + x47) = x3830;
    *(x3703 + x47) = x3848;
    *(x3704 + x47) = x3866;
    int x49 = x4;
    x4 = (x49+(1));
  };
  int x54 = 0;
  for(; x54 < 1 ; x54 += 1) {
    
    double* x9590 = (double*)malloc(1 * sizeof(double));
    memset(x9590, 0, 1 * sizeof(double));
    struct AGGRecord_String* x9591 = (struct AGGRecord_String*)malloc(1 * sizeof(struct AGGRecord_String));
    memset(x9591, 0, 1 * sizeof(struct AGGRecord_String));
    x9591->key = "Total"; x9591->aggs = x9590;
    /* VAR */ struct timeval x9594 = x2949;
    struct timeval x9595 = x9594;
    /* VAR */ struct timeval x9596 = x2949;
    struct timeval x9597 = x9596;
    /* VAR */ struct timeval x9598 = x2949;
    struct timeval x9599 = x9598;
    struct timeval* x9600 = &x9597;
    gettimeofday(x9600, NULL);
    /* VAR */ int x9602 = 0;
    while(1) {
      
      int x9604 = x9602;
      if (!((x9604<(x3123)))) break; 
      
      int x641 = x9602;
      int x1401 = x3699[x641];
      /* VAR */ int ite7690 = 0;
      if((x1401>=(19960101))) {
        /* VAR */ int x9612 = 0;
        if((x1401<(19970101))) {
          double x9614 = x3695[x641];
          /* VAR */ int x9616 = 0;
          if((x9614>=(0.08))) {
            /* VAR */ int x9619 = 0;
            if((x9614<=(0.1))) {
              double x9621 = x3693[x641];
              x9619 = (x9621<(24.0));
            } else {
              
              x9619 = 0;
            };
            int x9626 = x9619;
            x9616 = x9626;
          } else {
            
            x9616 = 0;
          };
          int x9630 = x9616;
          x9612 = x9630;
        } else {
          
          x9612 = 0;
        };
        int x9634 = x9612;
        ite7690 = x9634;
      } else {
        
        ite7690 = 0;
      };
      int x7346 = ite7690;
      if(x7346) {
        double* x117 = x9591->aggs;
        double x131 = x117[0];
        double x1419 = x3694[x641];
        double x1421 = x3695[x641];
        *x117 = ((x1419*(x1421))+(x131));
      };
      int x685 = x9602;
      x9602 = (x685+(1));
    };
    double x9651 = ((double*) { x9591->aggs })[0];
    printf("%.4f\n", x9651);
    printf("(%d rows)\n", 1);
    struct timeval* x9654 = &x9599;
    gettimeofday(x9654, NULL);
    struct timeval* x9656 = &x9595;
    struct timeval* x9657 = &x9599;
    struct timeval* x9658 = &x9597;
    long x9659 = timeval_subtract(x9656, x9657, x9658);
    printf("Generated code run in %ld milliseconds.\n", x9659);
  };
}
/* ----------- FUNCTIONS ----------- */