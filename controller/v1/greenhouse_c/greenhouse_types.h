/* --- Generated the 22/3/2020 at 20:56 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s greenhouse greenhouse.ept --- */

#ifndef GREENHOUSE_TYPES_H
#define GREENHOUSE_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "greenhouse_controller.h"
typedef enum {
  Greenhouse__St_9_On,
  Greenhouse__St_9_Off
} Greenhouse__st_9;

Greenhouse__st_9 Greenhouse__st_9_of_string(char* s);

char* string_of_Greenhouse__st_9(Greenhouse__st_9 x, char* buf);

typedef enum {
  Greenhouse__St_8_On,
  Greenhouse__St_8_Off
} Greenhouse__st_8;

Greenhouse__st_8 Greenhouse__st_8_of_string(char* s);

char* string_of_Greenhouse__st_8(Greenhouse__st_8 x, char* buf);

typedef enum {
  Greenhouse__St_7_Warm,
  Greenhouse__St_7_Start,
  Greenhouse__St_7_Moderate,
  Greenhouse__St_7_Cool
} Greenhouse__st_7;

Greenhouse__st_7 Greenhouse__st_7_of_string(char* s);

char* string_of_Greenhouse__st_7(Greenhouse__st_7 x, char* buf);

typedef enum {
  Greenhouse__St_6_Start,
  Greenhouse__St_6_Night,
  Greenhouse__St_6_Day
} Greenhouse__st_6;

Greenhouse__st_6 Greenhouse__st_6_of_string(char* s);

char* string_of_Greenhouse__st_6(Greenhouse__st_6 x, char* buf);

typedef enum {
  Greenhouse__St_5_Na,
  Greenhouse__St_5_Heat,
  Greenhouse__St_5_Cool
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
  Greenhouse__St_3_On,
  Greenhouse__St_3_Off
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
  Greenhouse__St_1_Warm,
  Greenhouse__St_1_Start,
  Greenhouse__St_1_Moderate,
  Greenhouse__St_1_Cool
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
