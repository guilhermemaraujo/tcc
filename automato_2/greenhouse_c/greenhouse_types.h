/* --- Generated the 12/3/2020 at 16:5 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s greenhouse greenhouse.ept --- */

#ifndef GREENHOUSE_TYPES_H
#define GREENHOUSE_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "greenhouse_controller.h"
typedef enum {
  Greenhouse__St_7_On,
  Greenhouse__St_7_Off
} Greenhouse__st_7;

Greenhouse__st_7 Greenhouse__st_7_of_string(char* s);

char* string_of_Greenhouse__st_7(Greenhouse__st_7 x, char* buf);

typedef enum {
  Greenhouse__St_6_On,
  Greenhouse__St_6_Off
} Greenhouse__st_6;

Greenhouse__st_6 Greenhouse__st_6_of_string(char* s);

char* string_of_Greenhouse__st_6(Greenhouse__st_6 x, char* buf);

typedef enum {
  Greenhouse__St_5_Start,
  Greenhouse__St_5_Night,
  Greenhouse__St_5_Day
} Greenhouse__st_5;

Greenhouse__st_5 Greenhouse__st_5_of_string(char* s);

char* string_of_Greenhouse__st_5(Greenhouse__st_5 x, char* buf);

typedef enum {
  Greenhouse__St_4_Na,
  Greenhouse__St_4_Heat,
  Greenhouse__St_4_Cool
} Greenhouse__st_4;

Greenhouse__st_4 Greenhouse__st_4_of_string(char* s);

char* string_of_Greenhouse__st_4(Greenhouse__st_4 x, char* buf);

typedef enum {
  Greenhouse__St_3_Na,
  Greenhouse__St_3_Heat,
  Greenhouse__St_3_Cool
} Greenhouse__st_3;

Greenhouse__st_3 Greenhouse__st_3_of_string(char* s);

char* string_of_Greenhouse__st_3(Greenhouse__st_3 x, char* buf);

typedef enum {
  Greenhouse__St_2_On,
  Greenhouse__St_2_Off
} Greenhouse__st_2;

Greenhouse__st_2 Greenhouse__st_2_of_string(char* s);

char* string_of_Greenhouse__st_2(Greenhouse__st_2 x, char* buf);

typedef enum {
  Greenhouse__St_1_On,
  Greenhouse__St_1_Off
} Greenhouse__st_1;

Greenhouse__st_1 Greenhouse__st_1_of_string(char* s);

char* string_of_Greenhouse__st_1(Greenhouse__st_1 x, char* buf);

typedef enum {
  Greenhouse__St_Start,
  Greenhouse__St_Night,
  Greenhouse__St_Day
} Greenhouse__st;

Greenhouse__st Greenhouse__st_of_string(char* s);

char* string_of_Greenhouse__st(Greenhouse__st x, char* buf);

#endif // GREENHOUSE_TYPES_H
