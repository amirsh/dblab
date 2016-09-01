#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pardis_clib.h" 

  
  

/* GLOBAL VARS */

struct timeval x4208;
int main(int argc, char** argv) {
  FILE* x4369 = popen("wc -l /mnt/ramdisk/tpch/sf8/lineitem.tbl", "r");
  /* VAR */ int x4370 = 0;
  int x4371 = x4370;
  int* x4372 = &x4371;
  int x4373 = fscanf(x4369, "%d", x4372);
  pclose(x4369);
  int* x4925 = (int*)malloc(x4371 * sizeof(int));
  memset(x4925, 0, x4371 * sizeof(int));
  int* x4926 = (int*)malloc(x4371 * sizeof(int));
  memset(x4926, 0, x4371 * sizeof(int));
  int* x4927 = (int*)malloc(x4371 * sizeof(int));
  memset(x4927, 0, x4371 * sizeof(int));
  int* x4928 = (int*)malloc(x4371 * sizeof(int));
  memset(x4928, 0, x4371 * sizeof(int));
  double* x4929 = (double*)malloc(x4371 * sizeof(double));
  memset(x4929, 0, x4371 * sizeof(double));
  double* x4930 = (double*)malloc(x4371 * sizeof(double));
  memset(x4930, 0, x4371 * sizeof(double));
  double* x4931 = (double*)malloc(x4371 * sizeof(double));
  memset(x4931, 0, x4371 * sizeof(double));
  double* x4932 = (double*)malloc(x4371 * sizeof(double));
  memset(x4932, 0, x4371 * sizeof(double));
  char* x4933 = (char*)malloc(x4371 * sizeof(char));
  memset(x4933, 0, x4371 * sizeof(char));
  char* x4934 = (char*)malloc(x4371 * sizeof(char));
  memset(x4934, 0, x4371 * sizeof(char));
  int* x4935 = (int*)malloc(x4371 * sizeof(int));
  memset(x4935, 0, x4371 * sizeof(int));
  int* x4936 = (int*)malloc(x4371 * sizeof(int));
  memset(x4936, 0, x4371 * sizeof(int));
  int* x4937 = (int*)malloc(x4371 * sizeof(int));
  memset(x4937, 0, x4371 * sizeof(int));
  char** x4938 = (char**)malloc(x4371 * sizeof(char*));
  memset(x4938, 0, x4371 * sizeof(char*));
  char** x4939 = (char**)malloc(x4371 * sizeof(char*));
  memset(x4939, 0, x4371 * sizeof(char*));
  char** x4940 = (char**)malloc(x4371 * sizeof(char*));
  memset(x4940, 0, x4371 * sizeof(char*));
  int x4392 = O_RDONLY;
  int x4393 = open("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x4392);
  struct stat x4394 = (struct stat){0};
  /* VAR */ struct stat x4395 = x4394;
  struct stat x4396 = x4395;
  struct stat* x4397 = &x4396;
  int x4398 = stat("/mnt/ramdisk/tpch/sf8/lineitem.tbl", x4397);
  size_t x4399 = x4397->st_size;
  int x4400 = PROT_READ;
  int x4401 = MAP_PRIVATE;
  char* x3 = mmap(NULL, x4399, x4400, x4401, x4393, 0);
  /* VAR */ int x4 = 0;
  while(1) {
    
    int x5 = x4;
    int x6 = x5<(x4371);
    /* VAR */ int ite8276 = 0;
    if(x6) {
      char x10125 = *x3;
      int x10126 = x10125!=('\0');
      ite8276 = x10126;
    } else {
      
      ite8276 = 0;
    };
    int x7984 = ite8276;
    if (!(x7984)) break; 
    
    /* VAR */ int x4409 = 0;
    int x4410 = x4409;
    int* x4411 = &x4410;
    char* x4412 = strntoi_unchecked(x3, x4411);
    x3 = x4412;
    /* VAR */ int x4414 = 0;
    int x4415 = x4414;
    int* x4416 = &x4415;
    char* x4417 = strntoi_unchecked(x3, x4416);
    x3 = x4417;
    /* VAR */ int x4419 = 0;
    int x4420 = x4419;
    int* x4421 = &x4420;
    char* x4422 = strntoi_unchecked(x3, x4421);
    x3 = x4422;
    /* VAR */ int x4424 = 0;
    int x4425 = x4424;
    int* x4426 = &x4425;
    char* x4427 = strntoi_unchecked(x3, x4426);
    x3 = x4427;
    /* VAR */ double x4429 = 0.0;
    double x4430 = x4429;
    double* x4431 = &x4430;
    char* x4432 = strntod_unchecked(x3, x4431);
    x3 = x4432;
    /* VAR */ double x4434 = 0.0;
    double x4435 = x4434;
    double* x4436 = &x4435;
    char* x4437 = strntod_unchecked(x3, x4436);
    x3 = x4437;
    /* VAR */ double x4439 = 0.0;
    double x4440 = x4439;
    double* x4441 = &x4440;
    char* x4442 = strntod_unchecked(x3, x4441);
    x3 = x4442;
    /* VAR */ double x4444 = 0.0;
    double x4445 = x4444;
    double* x4446 = &x4445;
    char* x4447 = strntod_unchecked(x3, x4446);
    x3 = x4447;
    char x4449 = *x3;
    /* VAR */ char x4450 = x4449;
    x3 += 1;
    x3 += 1;
    char x4453 = x4450;
    char x4454 = *x3;
    /* VAR */ char x4455 = x4454;
    x3 += 1;
    x3 += 1;
    char x4458 = x4455;
    /* VAR */ int x4459 = 0;
    int x4460 = x4459;
    int* x4461 = &x4460;
    char* x4462 = strntoi_unchecked(x3, x4461);
    x3 = x4462;
    /* VAR */ int x4464 = 0;
    int x4465 = x4464;
    int* x4466 = &x4465;
    char* x4467 = strntoi_unchecked(x3, x4466);
    x3 = x4467;
    /* VAR */ int x4469 = 0;
    int x4470 = x4469;
    int* x4471 = &x4470;
    char* x4472 = strntoi_unchecked(x3, x4471);
    x3 = x4472;
    int x4474 = x4460*(10000);
    int x4475 = x4465*(100);
    int x4476 = x4474+(x4475);
    int x4477 = x4476+(x4470);
    /* VAR */ int x4478 = 0;
    int x4479 = x4478;
    int* x4480 = &x4479;
    char* x4481 = strntoi_unchecked(x3, x4480);
    x3 = x4481;
    /* VAR */ int x4483 = 0;
    int x4484 = x4483;
    int* x4485 = &x4484;
    char* x4486 = strntoi_unchecked(x3, x4485);
    x3 = x4486;
    /* VAR */ int x4488 = 0;
    int x4489 = x4488;
    int* x4490 = &x4489;
    char* x4491 = strntoi_unchecked(x3, x4490);
    x3 = x4491;
    int x4493 = x4479*(10000);
    int x4494 = x4484*(100);
    int x4495 = x4493+(x4494);
    int x4496 = x4495+(x4489);
    /* VAR */ int x4497 = 0;
    int x4498 = x4497;
    int* x4499 = &x4498;
    char* x4500 = strntoi_unchecked(x3, x4499);
    x3 = x4500;
    /* VAR */ int x4502 = 0;
    int x4503 = x4502;
    int* x4504 = &x4503;
    char* x4505 = strntoi_unchecked(x3, x4504);
    x3 = x4505;
    /* VAR */ int x4507 = 0;
    int x4508 = x4507;
    int* x4509 = &x4508;
    char* x4510 = strntoi_unchecked(x3, x4509);
    x3 = x4510;
    int x4512 = x4498*(10000);
    int x4513 = x4503*(100);
    int x4514 = x4512+(x4513);
    int x4515 = x4514+(x4508);
    char* x5066 = (char*)malloc(26 * sizeof(char));
    memset(x5066, 0, 26 * sizeof(char));
    /* VAR */ char* x4517 = x3;
    while(1) {
      
      char x4518 = *x3;
      int x4519 = x4518!=('|');
      /* VAR */ int ite8397 = 0;
      if(x4519) {
        char x10245 = *x3;
        int x10246 = x10245!=('\n');
        ite8397 = x10246;
      } else {
        
        ite8397 = 0;
      };
      int x8098 = ite8397;
      if (!(x8098)) break; 
      
      x3 += 1;
    };
    char* x4525 = x4517;
    int x4526 = x3 - x4525;
    char* x4527 = x4517;
    char* x4528 = strncpy(x5066, x4527, x4526);
    x3 += 1;
    char* x5084 = (char*)malloc(11 * sizeof(char));
    memset(x5084, 0, 11 * sizeof(char));
    /* VAR */ char* x4536 = x3;
    while(1) {
      
      char x4537 = *x3;
      int x4538 = x4537!=('|');
      /* VAR */ int ite8420 = 0;
      if(x4538) {
        char x10267 = *x3;
        int x10268 = x10267!=('\n');
        ite8420 = x10268;
      } else {
        
        ite8420 = 0;
      };
      int x8114 = ite8420;
      if (!(x8114)) break; 
      
      x3 += 1;
    };
    char* x4544 = x4536;
    int x4545 = x3 - x4544;
    char* x4546 = x4536;
    char* x4547 = strncpy(x5084, x4546, x4545);
    x3 += 1;
    char* x5102 = (char*)malloc(45 * sizeof(char));
    memset(x5102, 0, 45 * sizeof(char));
    /* VAR */ char* x4555 = x3;
    while(1) {
      
      char x4556 = *x3;
      int x4557 = x4556!=('|');
      /* VAR */ int ite8443 = 0;
      if(x4557) {
        char x10289 = *x3;
        int x10290 = x10289!=('\n');
        ite8443 = x10290;
      } else {
        
        ite8443 = 0;
      };
      int x8130 = ite8443;
      if (!(x8130)) break; 
      
      x3 += 1;
    };
    char* x4563 = x4555;
    int x4564 = x3 - x4563;
    char* x4565 = x4555;
    char* x4566 = strncpy(x5102, x4565, x4564);
    x3 += 1;
    int x47 = x4;
    *(x4925 + x47) = x4410;
    *(x4926 + x47) = x4415;
    *(x4927 + x47) = x4420;
    *(x4928 + x47) = x4425;
    *(x4929 + x47) = x4430;
    *(x4930 + x47) = x4435;
    *(x4931 + x47) = x4440;
    *(x4932 + x47) = x4445;
    *(x4933 + x47) = x4453;
    *(x4934 + x47) = x4458;
    *(x4935 + x47) = x4477;
    *(x4936 + x47) = x4496;
    *(x4937 + x47) = x4515;
    *(x4938 + x47) = x5066;
    *(x4939 + x47) = x5084;
    *(x4940 + x47) = x5102;
    int x49 = x4;
    int x50 = x49+(1);
    x4 = x50;
  };
  int x54 = 0;
  for(; x54 < 1 ; x54 += 1) {
    
    double* x10393 = (double*)malloc(1 * sizeof(double));
    memset(x10393, 0, 1 * sizeof(double));
    /* VAR */ struct timeval x10394 = x4208;
    struct timeval x10395 = x10394;
    /* VAR */ struct timeval x10396 = x4208;
    struct timeval x10397 = x10396;
    /* VAR */ struct timeval x10398 = x4208;
    struct timeval x10399 = x10398;
    struct timeval* x10400 = &x10397;
    gettimeofday(x10400, NULL);
    /* VAR */ int x10402 = 0;
    while(1) {
      
      int x10404 = x10402;
      int x10405 = x10404<(x4371);
      if (!(x10405)) break; 
      
      int x641 = x10402;
      int x2819 = x4935[x641];
      int x101 = x2819>=(19960101);
      /* VAR */ int ite8549 = 0;
      if(x101) {
        int x10411 = x2819<(19970101);
        /* VAR */ int x10412 = 0;
        if(x10411) {
          double x10414 = x4931[x641];
          int x10415 = x10414>=(0.08);
          /* VAR */ int x10416 = 0;
          if(x10415) {
            int x10418 = x10414<=(0.1);
            /* VAR */ int x10419 = 0;
            if(x10418) {
              double x10421 = x4929[x641];
              int x10422 = x10421<(24.0);
              x10419 = x10422;
            } else {
              
              x10419 = 0;
            };
            int x10426 = x10419;
            x10416 = x10426;
          } else {
            
            x10416 = 0;
          };
          int x10430 = x10416;
          x10412 = x10430;
        } else {
          
          x10412 = 0;
        };
        int x10434 = x10412;
        ite8549 = x10434;
      } else {
        
        ite8549 = 0;
      };
      int x8217 = ite8549;
      if(x8217) {
        double x131 = x10393[0];
        double x2836 = x4930[x641];
        double x2838 = x4931[x641];
        double x134 = x2836*(x2838);
        double x135 = x134+(x131);
        *x10393 = x135;
      };
      int x685 = x10402;
      int x143 = x685+(1);
      x10402 = x143;
    };
    double x10449 = x10393[0];
    printf("%.4f\n", x10449);
    printf("(%d rows)\n", 1);
    struct timeval* x10452 = &x10399;
    gettimeofday(x10452, NULL);
    struct timeval* x10454 = &x10395;
    struct timeval* x10455 = &x10399;
    struct timeval* x10456 = &x10397;
    long x10457 = timeval_subtract(x10454, x10455, x10456);
    printf("Generated code run in %ld milliseconds.\n", x10457);
  };
}
/* ----------- FUNCTIONS ----------- */