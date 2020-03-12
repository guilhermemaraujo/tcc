/* --- Generated the 12/3/2020 at 16:5 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s greenhouse greenhouse.ept --- */

#ifndef GREENHOUSE_H
#define GREENHOUSE_H

#include "greenhouse_types.h"
#include "greenhouse_controller.h"
typedef struct Greenhouse__shift_mem {
  int v_158;
  int v_157;
  int pnr;
} Greenhouse__shift_mem;

typedef struct Greenhouse__shift_out {
  int s;
} Greenhouse__shift_out;

void Greenhouse__shift_reset(Greenhouse__shift_mem* self);

void Greenhouse__shift_step(int time, Greenhouse__shift_out* _out,
                            Greenhouse__shift_mem* self);

typedef struct Greenhouse__heating_mem {
  int ck_1;
  int pnr;
} Greenhouse__heating_mem;

typedef struct Greenhouse__heating_out {
  int status;
} Greenhouse__heating_out;

void Greenhouse__heating_reset(Greenhouse__heating_mem* self);

void Greenhouse__heating_step(int c, Greenhouse__heating_out* _out,
                              Greenhouse__heating_mem* self);

typedef struct Greenhouse__cooling_mem {
  int ck_1;
  int pnr;
} Greenhouse__cooling_mem;

typedef struct Greenhouse__cooling_out {
  int status;
} Greenhouse__cooling_out;

void Greenhouse__cooling_reset(Greenhouse__cooling_mem* self);

void Greenhouse__cooling_step(int c, Greenhouse__cooling_out* _out,
                              Greenhouse__cooling_mem* self);

typedef struct Greenhouse__checkT_mem {
  int v_174;
  int v_173;
  int pnr;
} Greenhouse__checkT_mem;

typedef struct Greenhouse__checkT_out {
  int st;
} Greenhouse__checkT_out;

void Greenhouse__checkT_reset(Greenhouse__checkT_mem* self);

void Greenhouse__checkT_step(int s, int t_in, Greenhouse__checkT_out* _out,
                             Greenhouse__checkT_mem* self);

typedef struct Greenhouse__greenhouse_mem {
  int v_190;
  int v_189;
  int v_206;
  int v_205;
  int ck_6_1;
  int ck_1;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} Greenhouse__greenhouse_mem;

typedef struct Greenhouse__greenhouse_out {
  int heating_on;
  int cooling_on;
  int s;
  int st;
} Greenhouse__greenhouse_out;

void Greenhouse__greenhouse_reset(Greenhouse__greenhouse_mem* self);

void Greenhouse__greenhouse_step(int crop, int t_in, int time,
                                 Greenhouse__greenhouse_out* _out,
                                 Greenhouse__greenhouse_mem* self);

#endif // GREENHOUSE_H
