/* --- Generated the 8/7/2019 at 0:26 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s greenhouse greenhouse.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Greenhouse__greenhouse_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int t_in;
  int time;
  Greenhouse__greenhouse_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Greenhouse__greenhouse_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("t_in ? ");
    scanf("%d", &t_in);;
    
    printf("time ? ");
    scanf("%d", &time);;
    Greenhouse__greenhouse_step(t_in, time, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.heating_on);
    printf("=> ");
    printf("%d ", _res.cooling_on);
    puts("");
    fflush(stdout);
  };
  return 0;
}

