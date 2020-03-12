/* --- Generated the 12/3/2020 at 16:5 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s greenhouse greenhouse.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "greenhouse_types.h"

Greenhouse__st_7 Greenhouse__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_On")==0)) {
    return Greenhouse__St_7_On;
  };
  if ((strcmp(s, "St_7_Off")==0)) {
    return Greenhouse__St_7_Off;
  };
}

char* string_of_Greenhouse__st_7(Greenhouse__st_7 x, char* buf) {
  switch (x) {
    case Greenhouse__St_7_On:
      strcpy(buf, "St_7_On");
      break;
    case Greenhouse__St_7_Off:
      strcpy(buf, "St_7_Off");
      break;
    default:
      break;
  };
  return buf;
}

Greenhouse__st_6 Greenhouse__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_On")==0)) {
    return Greenhouse__St_6_On;
  };
  if ((strcmp(s, "St_6_Off")==0)) {
    return Greenhouse__St_6_Off;
  };
}

char* string_of_Greenhouse__st_6(Greenhouse__st_6 x, char* buf) {
  switch (x) {
    case Greenhouse__St_6_On:
      strcpy(buf, "St_6_On");
      break;
    case Greenhouse__St_6_Off:
      strcpy(buf, "St_6_Off");
      break;
    default:
      break;
  };
  return buf;
}

Greenhouse__st_5 Greenhouse__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Start")==0)) {
    return Greenhouse__St_5_Start;
  };
  if ((strcmp(s, "St_5_Night")==0)) {
    return Greenhouse__St_5_Night;
  };
  if ((strcmp(s, "St_5_Day")==0)) {
    return Greenhouse__St_5_Day;
  };
}

char* string_of_Greenhouse__st_5(Greenhouse__st_5 x, char* buf) {
  switch (x) {
    case Greenhouse__St_5_Start:
      strcpy(buf, "St_5_Start");
      break;
    case Greenhouse__St_5_Night:
      strcpy(buf, "St_5_Night");
      break;
    case Greenhouse__St_5_Day:
      strcpy(buf, "St_5_Day");
      break;
    default:
      break;
  };
  return buf;
}

Greenhouse__st_4 Greenhouse__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_Na")==0)) {
    return Greenhouse__St_4_Na;
  };
  if ((strcmp(s, "St_4_Heat")==0)) {
    return Greenhouse__St_4_Heat;
  };
  if ((strcmp(s, "St_4_Cool")==0)) {
    return Greenhouse__St_4_Cool;
  };
}

char* string_of_Greenhouse__st_4(Greenhouse__st_4 x, char* buf) {
  switch (x) {
    case Greenhouse__St_4_Na:
      strcpy(buf, "St_4_Na");
      break;
    case Greenhouse__St_4_Heat:
      strcpy(buf, "St_4_Heat");
      break;
    case Greenhouse__St_4_Cool:
      strcpy(buf, "St_4_Cool");
      break;
    default:
      break;
  };
  return buf;
}

Greenhouse__st_3 Greenhouse__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_Na")==0)) {
    return Greenhouse__St_3_Na;
  };
  if ((strcmp(s, "St_3_Heat")==0)) {
    return Greenhouse__St_3_Heat;
  };
  if ((strcmp(s, "St_3_Cool")==0)) {
    return Greenhouse__St_3_Cool;
  };
}

char* string_of_Greenhouse__st_3(Greenhouse__st_3 x, char* buf) {
  switch (x) {
    case Greenhouse__St_3_Na:
      strcpy(buf, "St_3_Na");
      break;
    case Greenhouse__St_3_Heat:
      strcpy(buf, "St_3_Heat");
      break;
    case Greenhouse__St_3_Cool:
      strcpy(buf, "St_3_Cool");
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
  if ((strcmp(s, "St_Start")==0)) {
    return Greenhouse__St_Start;
  };
  if ((strcmp(s, "St_Night")==0)) {
    return Greenhouse__St_Night;
  };
  if ((strcmp(s, "St_Day")==0)) {
    return Greenhouse__St_Day;
  };
}

char* string_of_Greenhouse__st(Greenhouse__st x, char* buf) {
  switch (x) {
    case Greenhouse__St_Start:
      strcpy(buf, "St_Start");
      break;
    case Greenhouse__St_Night:
      strcpy(buf, "St_Night");
      break;
    case Greenhouse__St_Day:
      strcpy(buf, "St_Day");
      break;
    default:
      break;
  };
  return buf;
}

