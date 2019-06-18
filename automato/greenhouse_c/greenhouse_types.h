/* --- Generated the 18/6/2019 at 4:46 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s greenhouse greenhouse.ept --- */

#ifndef GREENHOUSE_TYPES_H
#define GREENHOUSE_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "greenhouse_controller.h"
typedef enum {
  Greenhouse__St_3_Night,
  Greenhouse__St_3_Morning,
  Greenhouse__St_3_Idle,
  Greenhouse__St_3_Default,
  Greenhouse__St_3_Dawn,
  Greenhouse__St_3_Afternoon
} Greenhouse__st_3;

Greenhouse__st_3 Greenhouse__st_3_of_string(char* s);

char* string_of_Greenhouse__st_3(Greenhouse__st_3 x, char* buf);

typedef enum {
  Greenhouse__St_2_Night,
  Greenhouse__St_2_Morning,
  Greenhouse__St_2_Idle,
  Greenhouse__St_2_Default,
  Greenhouse__St_2_Dawn,
  Greenhouse__St_2_Afternoon
} Greenhouse__st_2;

Greenhouse__st_2 Greenhouse__st_2_of_string(char* s);

char* string_of_Greenhouse__st_2(Greenhouse__st_2 x, char* buf);

typedef enum {
  Greenhouse__St_1_Night,
  Greenhouse__St_1_Morning,
  Greenhouse__St_1_Idle,
  Greenhouse__St_1_Default,
  Greenhouse__St_1_Dawn,
  Greenhouse__St_1_Afternoon
} Greenhouse__st_1;

Greenhouse__st_1 Greenhouse__st_1_of_string(char* s);

char* string_of_Greenhouse__st_1(Greenhouse__st_1 x, char* buf);

typedef enum {
  Greenhouse__St_Night,
  Greenhouse__St_Morning,
  Greenhouse__St_Idle,
  Greenhouse__St_Default,
  Greenhouse__St_Dawn,
  Greenhouse__St_Afternoon
} Greenhouse__st;

Greenhouse__st Greenhouse__st_of_string(char* s);

char* string_of_Greenhouse__st(Greenhouse__st x, char* buf);

#endif // GREENHOUSE_TYPES_H
