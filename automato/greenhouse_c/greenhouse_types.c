/* --- Generated the 18/6/2019 at 4:46 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s greenhouse greenhouse.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "greenhouse_types.h"

Greenhouse__st_3 Greenhouse__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_Night")==0)) {
    return Greenhouse__St_3_Night;
  };
  if ((strcmp(s, "St_3_Morning")==0)) {
    return Greenhouse__St_3_Morning;
  };
  if ((strcmp(s, "St_3_Idle")==0)) {
    return Greenhouse__St_3_Idle;
  };
  if ((strcmp(s, "St_3_Default")==0)) {
    return Greenhouse__St_3_Default;
  };
  if ((strcmp(s, "St_3_Dawn")==0)) {
    return Greenhouse__St_3_Dawn;
  };
  if ((strcmp(s, "St_3_Afternoon")==0)) {
    return Greenhouse__St_3_Afternoon;
  };
}

char* string_of_Greenhouse__st_3(Greenhouse__st_3 x, char* buf) {
  switch (x) {
    case Greenhouse__St_3_Night:
      strcpy(buf, "St_3_Night");
      break;
    case Greenhouse__St_3_Morning:
      strcpy(buf, "St_3_Morning");
      break;
    case Greenhouse__St_3_Idle:
      strcpy(buf, "St_3_Idle");
      break;
    case Greenhouse__St_3_Default:
      strcpy(buf, "St_3_Default");
      break;
    case Greenhouse__St_3_Dawn:
      strcpy(buf, "St_3_Dawn");
      break;
    case Greenhouse__St_3_Afternoon:
      strcpy(buf, "St_3_Afternoon");
      break;
    default:
      break;
  };
  return buf;
}

Greenhouse__st_2 Greenhouse__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Night")==0)) {
    return Greenhouse__St_2_Night;
  };
  if ((strcmp(s, "St_2_Morning")==0)) {
    return Greenhouse__St_2_Morning;
  };
  if ((strcmp(s, "St_2_Idle")==0)) {
    return Greenhouse__St_2_Idle;
  };
  if ((strcmp(s, "St_2_Default")==0)) {
    return Greenhouse__St_2_Default;
  };
  if ((strcmp(s, "St_2_Dawn")==0)) {
    return Greenhouse__St_2_Dawn;
  };
  if ((strcmp(s, "St_2_Afternoon")==0)) {
    return Greenhouse__St_2_Afternoon;
  };
}

char* string_of_Greenhouse__st_2(Greenhouse__st_2 x, char* buf) {
  switch (x) {
    case Greenhouse__St_2_Night:
      strcpy(buf, "St_2_Night");
      break;
    case Greenhouse__St_2_Morning:
      strcpy(buf, "St_2_Morning");
      break;
    case Greenhouse__St_2_Idle:
      strcpy(buf, "St_2_Idle");
      break;
    case Greenhouse__St_2_Default:
      strcpy(buf, "St_2_Default");
      break;
    case Greenhouse__St_2_Dawn:
      strcpy(buf, "St_2_Dawn");
      break;
    case Greenhouse__St_2_Afternoon:
      strcpy(buf, "St_2_Afternoon");
      break;
    default:
      break;
  };
  return buf;
}

Greenhouse__st_1 Greenhouse__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Night")==0)) {
    return Greenhouse__St_1_Night;
  };
  if ((strcmp(s, "St_1_Morning")==0)) {
    return Greenhouse__St_1_Morning;
  };
  if ((strcmp(s, "St_1_Idle")==0)) {
    return Greenhouse__St_1_Idle;
  };
  if ((strcmp(s, "St_1_Default")==0)) {
    return Greenhouse__St_1_Default;
  };
  if ((strcmp(s, "St_1_Dawn")==0)) {
    return Greenhouse__St_1_Dawn;
  };
  if ((strcmp(s, "St_1_Afternoon")==0)) {
    return Greenhouse__St_1_Afternoon;
  };
}

char* string_of_Greenhouse__st_1(Greenhouse__st_1 x, char* buf) {
  switch (x) {
    case Greenhouse__St_1_Night:
      strcpy(buf, "St_1_Night");
      break;
    case Greenhouse__St_1_Morning:
      strcpy(buf, "St_1_Morning");
      break;
    case Greenhouse__St_1_Idle:
      strcpy(buf, "St_1_Idle");
      break;
    case Greenhouse__St_1_Default:
      strcpy(buf, "St_1_Default");
      break;
    case Greenhouse__St_1_Dawn:
      strcpy(buf, "St_1_Dawn");
      break;
    case Greenhouse__St_1_Afternoon:
      strcpy(buf, "St_1_Afternoon");
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
  if ((strcmp(s, "St_Idle")==0)) {
    return Greenhouse__St_Idle;
  };
  if ((strcmp(s, "St_Default")==0)) {
    return Greenhouse__St_Default;
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
    case Greenhouse__St_Idle:
      strcpy(buf, "St_Idle");
      break;
    case Greenhouse__St_Default:
      strcpy(buf, "St_Default");
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

