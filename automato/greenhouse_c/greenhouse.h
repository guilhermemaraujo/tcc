/* --- Generated the 18/6/2019 at 4:46 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s greenhouse greenhouse.ept --- */

#ifndef GREENHOUSE_H
#define GREENHOUSE_H

#include "greenhouse_types.h"
#include "greenhouse_controller.h"
typedef struct Greenhouse__heating_mem {
  int v_274;
  int v_273;
  int v_272;
  int pnr;
} Greenhouse__heating_mem;

typedef struct Greenhouse__heating_out {
  int heating_on;
} Greenhouse__heating_out;

void Greenhouse__heating_reset(Greenhouse__heating_mem* self);

void Greenhouse__heating_step(int t_in, int time, int d, int c,
                              Greenhouse__heating_out* _out,
                              Greenhouse__heating_mem* self);

typedef struct Greenhouse__cooling_mem {
  int v_331;
  int v_330;
  int v_329;
  int pnr;
} Greenhouse__cooling_mem;

typedef struct Greenhouse__cooling_out {
  int cooling_on;
} Greenhouse__cooling_out;

void Greenhouse__cooling_reset(Greenhouse__cooling_mem* self);

void Greenhouse__cooling_step(int t_in, int time, int d, int c,
                              Greenhouse__cooling_out* _out,
                              Greenhouse__cooling_mem* self);

typedef struct Greenhouse__greenhouse_mem {
  int v_388;
  int v_387;
  int v_386;
  int v_445;
  int v_444;
  int v_443;
  int pnr_1;
  int pnr;
} Greenhouse__greenhouse_mem;

typedef struct Greenhouse__greenhouse_out {
  int cooling_on;
  int heating_on;
} Greenhouse__greenhouse_out;

void Greenhouse__greenhouse_reset(Greenhouse__greenhouse_mem* self);

void Greenhouse__greenhouse_step(int t_in, int time, int d,
                                 Greenhouse__greenhouse_out* _out,
                                 Greenhouse__greenhouse_mem* self);

#endif // GREENHOUSE_H
