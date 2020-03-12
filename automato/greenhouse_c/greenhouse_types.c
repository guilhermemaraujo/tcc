/* --- Generated the 12/3/2020 at 16:9 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s greenhouse greenhouse.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "greenhouse_types.h"

Greenhouse__st_9 Greenhouse__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_On")==0)) {
    return Greenhouse__St_9_On;
  };
  if ((strcmp(s, "St_9_Off")==0)) {
    return Greenhouse__St_9_Off;
  };
}

char* string_of_Greenhouse__st_9(Greenhouse__st_9 x, char* buf) {
  switch (x) {
    case Greenhouse__St_9_On:
      strcpy(buf, "St_9_On");
      break;
    case Greenhouse__St_9_Off:
      strcpy(buf, "St_9_Off");
      break;
    default:
      break;
  };
  return buf;
}

Greenhouse__st_8 Greenhouse__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_On")==0)) {
    return Greenhouse__St_8_On;
  };
  if ((strcmp(s, "St_8_Off")==0)) {
    return Greenhouse__St_8_Off;
  };
}

char* string_of_Greenhouse__st_8(Greenhouse__st_8 x, char* buf) {
  switch (x) {
    case Greenhouse__St_8_On:
      strcpy(buf, "St_8_On");
      break;
    case Greenhouse__St_8_Off:
      strcpy(buf, "St_8_Off");
      break;
    default:
      break;
  };
  return buf;
}

Greenhouse__st_7 Greenhouse__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_Warm")==0)) {
    return Greenhouse__St_7_Warm;
  };
  if ((strcmp(s, "St_7_Start")==0)) {
    return Greenhouse__St_7_Start;
  };
  if ((strcmp(s, "St_7_Moderate")==0)) {
    return Greenhouse__St_7_Moderate;
  };
  if ((strcmp(s, "St_7_Cool")==0)) {
    return Greenhouse__St_7_Cool;
  };
}

char* string_of_Greenhouse__st_7(Greenhouse__st_7 x, char* buf) {
  switch (x) {
    case Greenhouse__St_7_Warm:
      strcpy(buf, "St_7_Warm");
      break;
    case Greenhouse__St_7_Start:
      strcpy(buf, "St_7_Start");
      break;
    case Greenhouse__St_7_Moderate:
      strcpy(buf, "St_7_Moderate");
      break;
    case Greenhouse__St_7_Cool:
      strcpy(buf, "St_7_Cool");
      break;
    default:
      break;
  };
  return buf;
}

Greenhouse__st_6 Greenhouse__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_Start")==0)) {
    return Greenhouse__St_6_Start;
  };
  if ((strcmp(s, "St_6_Night")==0)) {
    return Greenhouse__St_6_Night;
  };
  if ((strcmp(s, "St_6_Day")==0)) {
    return Greenhouse__St_6_Day;
  };
}

char* string_of_Greenhouse__st_6(Greenhouse__st_6 x, char* buf) {
  switch (x) {
    case Greenhouse__St_6_Start:
      strcpy(buf, "St_6_Start");
      break;
    case Greenhouse__St_6_Night:
      strcpy(buf, "St_6_Night");
      break;
    case Greenhouse__St_6_Day:
      strcpy(buf, "St_6_Day");
      break;
    default:
      break;
  };
  return buf;
}

Greenhouse__st_5 Greenhouse__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Na")==0)) {
    return Greenhouse__St_5_Na;
  };
  if ((strcmp(s, "St_5_Heat")==0)) {
    return Greenhouse__St_5_Heat;
  };
  if ((strcmp(s, "St_5_Cool")==0)) {
    return Greenhouse__St_5_Cool;
  };
}

char* string_of_Greenhouse__st_5(Greenhouse__st_5 x, char* buf) {
  switch (x) {
    case Greenhouse__St_5_Na:
      strcpy(buf, "St_5_Na");
      break;
    case Greenhouse__St_5_Heat:
      strcpy(buf, "St_5_Heat");
      break;
    case Greenhouse__St_5_Cool:
      strcpy(buf, "St_5_Cool");
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
  if ((strcmp(s, "St_1_Warm")==0)) {
    return Greenhouse__St_1_Warm;
  };
  if ((strcmp(s, "St_1_Start")==0)) {
    return Greenhouse__St_1_Start;
  };
  if ((strcmp(s, "St_1_Moderate")==0)) {
    return Greenhouse__St_1_Moderate;
  };
  if ((strcmp(s, "St_1_Cool")==0)) {
    return Greenhouse__St_1_Cool;
  };
}

char* string_of_Greenhouse__st_1(Greenhouse__st_1 x, char* buf) {
  switch (x) {
    case Greenhouse__St_1_Warm:
      strcpy(buf, "St_1_Warm");
      break;
    case Greenhouse__St_1_Start:
      strcpy(buf, "St_1_Start");
      break;
    case Greenhouse__St_1_Moderate:
      strcpy(buf, "St_1_Moderate");
      break;
    case Greenhouse__St_1_Cool:
      strcpy(buf, "St_1_Cool");
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

