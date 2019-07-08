/* --- Generated the 8/7/2019 at 0:30 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s greenhouse greenhouse.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "greenhouse_types.h"

Greenhouse__st_4 Greenhouse__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_On")==0)) {
    return Greenhouse__St_4_On;
  };
  if ((strcmp(s, "St_4_Off")==0)) {
    return Greenhouse__St_4_Off;
  };
}

char* string_of_Greenhouse__st_4(Greenhouse__st_4 x, char* buf) {
  switch (x) {
    case Greenhouse__St_4_On:
      strcpy(buf, "St_4_On");
      break;
    case Greenhouse__St_4_Off:
      strcpy(buf, "St_4_Off");
      break;
    default:
      break;
  };
  return buf;
}

Greenhouse__st_3 Greenhouse__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_On")==0)) {
    return Greenhouse__St_3_On;
  };
  if ((strcmp(s, "St_3_Off")==0)) {
    return Greenhouse__St_3_Off;
  };
}

char* string_of_Greenhouse__st_3(Greenhouse__st_3 x, char* buf) {
  switch (x) {
    case Greenhouse__St_3_On:
      strcpy(buf, "St_3_On");
      break;
    case Greenhouse__St_3_Off:
      strcpy(buf, "St_3_Off");
      break;
    default:
      break;
  };
  return buf;
}

Greenhouse__st_2 Greenhouse__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_On")==0)) {
    return Greenhouse__St_2_On;
  };
  if ((strcmp(s, "St_2_Off")==0)) {
    return Greenhouse__St_2_Off;
  };
}

char* string_of_Greenhouse__st_2(Greenhouse__st_2 x, char* buf) {
  switch (x) {
    case Greenhouse__St_2_On:
      strcpy(buf, "St_2_On");
      break;
    case Greenhouse__St_2_Off:
      strcpy(buf, "St_2_Off");
      break;
    default:
      break;
  };
  return buf;
}

Greenhouse__st_1 Greenhouse__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_On")==0)) {
    return Greenhouse__St_1_On;
  };
  if ((strcmp(s, "St_1_Off")==0)) {
    return Greenhouse__St_1_Off;
  };
}

char* string_of_Greenhouse__st_1(Greenhouse__st_1 x, char* buf) {
  switch (x) {
    case Greenhouse__St_1_On:
      strcpy(buf, "St_1_On");
      break;
    case Greenhouse__St_1_Off:
      strcpy(buf, "St_1_Off");
      break;
    default:
      break;
  };
  return buf;
}

Greenhouse__st Greenhouse__st_of_string(char* s) {
  if ((strcmp(s, "St_Night")==0)) {
    return Greenhouse__St_Night;
  };
  if ((strcmp(s, "St_Morning")==0)) {
    return Greenhouse__St_Morning;
  };
  if ((strcmp(s, "St_Dawn")==0)) {
    return Greenhouse__St_Dawn;
  };
  if ((strcmp(s, "St_Afternoon")==0)) {
    return Greenhouse__St_Afternoon;
  };
}

char* string_of_Greenhouse__st(Greenhouse__st x, char* buf) {
  switch (x) {
    case Greenhouse__St_Night:
      strcpy(buf, "St_Night");
      break;
    case Greenhouse__St_Morning:
      strcpy(buf, "St_Morning");
      break;
    case Greenhouse__St_Dawn:
      strcpy(buf, "St_Dawn");
      break;
    case Greenhouse__St_Afternoon:
      strcpy(buf, "St_Afternoon");
      break;
    default:
      break;
  };
  return buf;
}

