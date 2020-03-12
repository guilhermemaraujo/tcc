/* --- Generated the 12/3/2020 at 16:5 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s greenhouse greenhouse.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "greenhouse.h"

void Greenhouse__shift_reset(Greenhouse__shift_mem* self) {
  self->pnr = false;
  self->v_157 = false;
  self->v_158 = false;
}

void Greenhouse__shift_step(int time, Greenhouse__shift_out* _out,
                            Greenhouse__shift_mem* self) {
  
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int v_151;
  int v_150;
  int v_149;
  int ns_St_Night_2_0;
  int ns_St_Night_2_1;
  int ns_St_Day_2_0;
  int ns_St_Day_2_1;
  int ns_St_Start_2_0;
  int ns_St_Start_2_1;
  int ck_1_2_0;
  int ck_1_2_1;
  int nr_St_Night;
  int ns_St_Night_2;
  int ns_St_Night_1;
  int s_St_Night;
  int nr_St_Day;
  int ns_St_Day_2;
  int ns_St_Day_1;
  int s_St_Day;
  int nr_St_Start;
  int ns_St_Start_2;
  int ns_St_Start_1;
  int s_St_Start;
  int ck_1_2;
  int ck_1_1;
  int v_12_2_0;
  int v_12_2_1;
  int v_13;
  int v_12_2;
  int v_12_1;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_160;
  int v_159;
  int s_3_St_Night_2_0;
  int s_3_St_Night_2_1;
  int s_3_St_Day_2_0;
  int s_3_St_Day_2_1;
  int s_3_St_Start_2_0;
  int s_3_St_Start_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_Night;
  int s_3_St_Night_2;
  int s_3_St_Night_1;
  int r_St_Day;
  int s_3_St_Day_2;
  int s_3_St_Day_1;
  int r_St_Start;
  int s_3_St_Start_2;
  int s_3_St_Start_1;
  int ck_2;
  int ck_1_3;
  int s_3_2_0;
  int s_3_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_3_2;
  int s_3_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1_3 = self->v_157;
  ck_2 = self->v_158;
  if (ck_1_3) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_4 = (time>=18);
      v_3 = (time<6);
      v_5 = (v_3||v_4);
      if (v_5) {
        r_St_Day = true;
        s_3_St_Day_1 = true;
        s_3_St_Day_2 = false;
      } else {
        r_St_Day = self->pnr;
        s_3_St_Day_1 = true;
        s_3_St_Day_2 = true;
      };
      v_163 = r_St_Day;
      v_159 = s_3_St_Day_1;
      v_160 = s_3_St_Day_2;
    } else {
      v_1 = (time<18);
      v = (time>=6);
      v_2 = (v||v_1);
      if (v_2) {
        r_St_Night = true;
      } else {
        r_St_Night = self->pnr;
      };
      v_163 = r_St_Night;
      if (v_2) {
        s_3_St_Night_1 = true;
      } else {
        s_3_St_Night_1 = true;
      };
      v_159 = s_3_St_Night_1;
      if (v_2) {
        s_3_St_Night_2 = true;
      } else {
        s_3_St_Night_2 = false;
      };
      v_160 = s_3_St_Night_2;
    };
    s_3_1 = v_159;
    s_3_2 = v_160;
    r = v_163;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_164 = true;
      v_161 = true;
      v_162 = true;
    } else {
      v_10 = (time<18);
      v_9 = (time>=6);
      v_11 = (v_9||v_10);
      if (v_11) {
        v_13 = true;
        v_12_1 = true;
        v_12_2 = true;
      } else {
        v_13 = self->pnr;
        v_12_1 = false;
        v_12_2 = false;
      };
      v_7 = (time>=18);
      v_6 = (time<6);
      v_8 = (v_6||v_7);
      if (v_8) {
        r_St_Start = true;
      } else {
        r_St_Start = v_13;
      };
      v_164 = r_St_Start;
      if (v_8) {
        s_3_St_Start_1 = true;
      } else {
        s_3_St_Start_1 = v_12_1;
      };
      v_161 = s_3_St_Start_1;
      if (v_8) {
        s_3_St_Start_2 = false;
      } else {
        s_3_St_Start_2 = v_12_2;
      };
      v_162 = s_3_St_Start_2;
      if (v_12_1) {
        v_12_2_1 = v_12_2;
      } else {
        v_12_2_0 = v_12_2;
      };
      if (s_3_St_Start_1) {
        s_3_St_Start_2_1 = s_3_St_Start_2;
      } else {
        s_3_St_Start_2_0 = s_3_St_Start_2;
      };
    };
    s_3_1 = v_161;
    s_3_2 = v_162;
    r = v_164;
  };
  ck_1_1 = s_3_1;
  ck_1_2 = s_3_2;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      s_St_Day = 1;
      nr_St_Day = false;
      ns_St_Day_1 = true;
      ns_St_Day_2 = true;
      v_149 = s_St_Day;
      v_155 = nr_St_Day;
      v_151 = ns_St_Day_1;
      v_152 = ns_St_Day_2;
    } else {
      s_St_Night = 2;
      v_149 = s_St_Night;
      nr_St_Night = false;
      v_155 = nr_St_Night;
      ns_St_Night_1 = true;
      v_151 = ns_St_Night_1;
      ns_St_Night_2 = false;
      v_152 = ns_St_Night_2;
    };
    _out->s = v_149;
    ns_1 = v_151;
    ns_2 = v_152;
    nr = v_155;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      v_150 = 0;
      v_156 = true;
      v_153 = true;
      v_154 = true;
    } else {
      s_St_Start = 0;
      v_150 = s_St_Start;
      nr_St_Start = false;
      v_156 = nr_St_Start;
      ns_St_Start_1 = false;
      v_153 = ns_St_Start_1;
      ns_St_Start_2 = false;
      v_154 = ns_St_Start_2;
      if (ns_St_Start_1) {
        ns_St_Start_2_1 = ns_St_Start_2;
      } else {
        ns_St_Start_2_0 = ns_St_Start_2;
      };
    };
    _out->s = v_150;
    ns_1 = v_153;
    ns_2 = v_154;
    nr = v_156;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_1_1) {
    if (ck_1_2_1) {
      if (ns_St_Day_1) {
        ns_St_Day_2_1 = ns_St_Day_2;
      } else {
        ns_St_Day_2_0 = ns_St_Day_2;
      };
    } else {
      if (ns_St_Night_1) {
        ns_St_Night_2_1 = ns_St_Night_2;
      } else {
        ns_St_Night_2_0 = ns_St_Night_2;
      };
    };
  };
  if (s_3_1) {
    s_3_2_1 = s_3_2;
  } else {
    s_3_2_0 = s_3_2;
  };
  if (ck_1_3) {
    if (ck_2_1) {
      if (s_3_St_Day_1) {
        s_3_St_Day_2_1 = s_3_St_Day_2;
      } else {
        s_3_St_Day_2_0 = s_3_St_Day_2;
      };
    } else {
      if (s_3_St_Night_1) {
        s_3_St_Night_2_1 = s_3_St_Night_2;
      } else {
        s_3_St_Night_2_0 = s_3_St_Night_2;
      };
    };
  };
  self->pnr = nr;
  self->v_157 = ns_1;
  self->v_158 = ns_2;;
}

void Greenhouse__heating_reset(Greenhouse__heating_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Greenhouse__heating_step(int c, Greenhouse__heating_out* _out,
                              Greenhouse__heating_mem* self) {
  
  int nr_St_1_On;
  int ns_St_1_On_1;
  int status_St_1_On;
  int nr_St_1_Off;
  int ns_St_1_Off_1;
  int status_St_1_Off;
  int ck_2_1;
  int v;
  int r_St_1_On;
  int s_St_1_On_1;
  int r_St_1_Off;
  int s_St_1_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v = !(c);
    if (v) {
      r_St_1_Off = true;
      s_St_1_Off_1 = false;
    } else {
      r_St_1_Off = self->pnr;
      s_St_1_Off_1 = true;
    };
    r = r_St_1_Off;
    s_1 = s_St_1_Off_1;
  } else {
    if (c) {
      r_St_1_On = true;
    } else {
      r_St_1_On = self->pnr;
    };
    r = r_St_1_On;
    if (c) {
      s_St_1_On_1 = true;
    } else {
      s_St_1_On_1 = false;
    };
    s_1 = s_St_1_On_1;
  };
  ck_2_1 = s_1;
  if (ck_2_1) {
    status_St_1_Off = false;
    nr_St_1_Off = false;
    ns_St_1_Off_1 = true;
    _out->status = status_St_1_Off;
    nr = nr_St_1_Off;
    ns_1 = ns_St_1_Off_1;
  } else {
    status_St_1_On = true;
    _out->status = status_St_1_On;
    nr_St_1_On = false;
    nr = nr_St_1_On;
    ns_St_1_On_1 = false;
    ns_1 = ns_St_1_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Greenhouse__cooling_reset(Greenhouse__cooling_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Greenhouse__cooling_step(int c, Greenhouse__cooling_out* _out,
                              Greenhouse__cooling_mem* self) {
  
  int nr_St_2_On;
  int ns_St_2_On_1;
  int status_St_2_On;
  int nr_St_2_Off;
  int ns_St_2_Off_1;
  int status_St_2_Off;
  int ck_3_1;
  int v;
  int r_St_2_On;
  int s_St_2_On_1;
  int r_St_2_Off;
  int s_St_2_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v = !(c);
    if (v) {
      r_St_2_Off = true;
      s_St_2_Off_1 = false;
    } else {
      r_St_2_Off = self->pnr;
      s_St_2_Off_1 = true;
    };
    r = r_St_2_Off;
    s_1 = s_St_2_Off_1;
  } else {
    if (c) {
      r_St_2_On = true;
    } else {
      r_St_2_On = self->pnr;
    };
    r = r_St_2_On;
    if (c) {
      s_St_2_On_1 = true;
    } else {
      s_St_2_On_1 = false;
    };
    s_1 = s_St_2_On_1;
  };
  ck_3_1 = s_1;
  if (ck_3_1) {
    status_St_2_Off = false;
    nr_St_2_Off = false;
    ns_St_2_Off_1 = true;
    _out->status = status_St_2_Off;
    nr = nr_St_2_Off;
    ns_1 = ns_St_2_Off_1;
  } else {
    status_St_2_On = true;
    _out->status = status_St_2_On;
    nr_St_2_On = false;
    nr = nr_St_2_On;
    ns_St_2_On_1 = false;
    ns_1 = ns_St_2_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Greenhouse__checkT_reset(Greenhouse__checkT_mem* self) {
  self->pnr = false;
  self->v_173 = false;
  self->v_174 = false;
}

void Greenhouse__checkT_step(int s, int t_in, Greenhouse__checkT_out* _out,
                             Greenhouse__checkT_mem* self) {
  
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v_167;
  int v_166;
  int v_165;
  int ns_St_3_Cool_2_0;
  int ns_St_3_Cool_2_1;
  int ns_St_3_Heat_2_0;
  int ns_St_3_Heat_2_1;
  int ns_St_3_Na_2_0;
  int ns_St_3_Na_2_1;
  int ck_4_2_0;
  int ck_4_2_1;
  int nr_St_3_Cool;
  int ns_St_3_Cool_2;
  int ns_St_3_Cool_1;
  int st_St_3_Cool;
  int nr_St_3_Heat;
  int ns_St_3_Heat_2;
  int ns_St_3_Heat_1;
  int st_St_3_Heat;
  int nr_St_3_Na;
  int ns_St_3_Na_2;
  int ns_St_3_Na_1;
  int st_St_3_Na;
  int ck_4_2;
  int ck_4_1;
  int v_67_2_0;
  int v_67_2_1;
  int v_68;
  int v_67_2;
  int v_67_1;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_51_2_0;
  int v_51_2_1;
  int v_52;
  int v_51_2;
  int v_51_1;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_31_2_0;
  int v_31_2_1;
  int v_32;
  int v_31_2;
  int v_31_1;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int v_176;
  int v_175;
  int s_4_St_3_Cool_2_0;
  int s_4_St_3_Cool_2_1;
  int s_4_St_3_Heat_2_0;
  int s_4_St_3_Heat_2_1;
  int s_4_St_3_Na_2_0;
  int s_4_St_3_Na_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_3_Cool;
  int s_4_St_3_Cool_2;
  int s_4_St_3_Cool_1;
  int r_St_3_Heat;
  int s_4_St_3_Heat_2;
  int s_4_St_3_Heat_1;
  int r_St_3_Na;
  int s_4_St_3_Na_2;
  int s_4_St_3_Na_1;
  int ck_2;
  int ck_1;
  int s_4_2_0;
  int s_4_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_4_2;
  int s_4_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_173;
  ck_2 = self->v_174;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_28 = (t_in<=18);
      v_26 = (t_in>=16);
      v_25 = (s==2);
      v_27 = (v_25&&v_26);
      v_29 = (v_27&&v_28);
      v_23 = (t_in<=27);
      v_21 = (t_in>=24);
      v_20 = (s==1);
      v_22 = (v_20&&v_21);
      v_24 = (v_22&&v_23);
      v_30 = (v_24||v_29);
      if (v_30) {
        v_32 = true;
        v_31_1 = false;
        v_31_2 = false;
      } else {
        v_32 = self->pnr;
        v_31_1 = true;
        v_31_2 = true;
      };
      v_17 = (t_in<16);
      v_16 = (s==2);
      v_18 = (v_16&&v_17);
      v_14 = (t_in<24);
      v = (s==1);
      v_15 = (v&&v_14);
      v_19 = (v_15||v_18);
      if (v_19) {
        r_St_3_Cool = true;
      } else {
        r_St_3_Cool = v_32;
      };
      v_179 = r_St_3_Cool;
      if (v_19) {
        s_4_St_3_Cool_1 = true;
      } else {
        s_4_St_3_Cool_1 = v_31_1;
      };
      v_175 = s_4_St_3_Cool_1;
      if (v_19) {
        s_4_St_3_Cool_2 = false;
      } else {
        s_4_St_3_Cool_2 = v_31_2;
      };
      v_176 = s_4_St_3_Cool_2;
    } else {
      v_48 = (t_in<=18);
      v_46 = (t_in>=16);
      v_45 = (s==2);
      v_47 = (v_45&&v_46);
      v_49 = (v_47&&v_48);
      v_43 = (t_in<=27);
      v_41 = (t_in>=24);
      v_40 = (s==1);
      v_42 = (v_40&&v_41);
      v_44 = (v_42&&v_43);
      v_50 = (v_44||v_49);
      if (v_50) {
        v_52 = true;
        v_51_1 = false;
        v_51_2 = false;
      } else {
        v_52 = self->pnr;
        v_51_1 = true;
        v_51_2 = false;
      };
      v_37 = (t_in>18);
      v_36 = (s==2);
      v_38 = (v_36&&v_37);
      v_34 = (t_in>27);
      v_33 = (s==1);
      v_35 = (v_33&&v_34);
      v_39 = (v_35||v_38);
      if (v_39) {
        r_St_3_Heat = true;
        s_4_St_3_Heat_1 = true;
        s_4_St_3_Heat_2 = true;
      } else {
        r_St_3_Heat = v_52;
        s_4_St_3_Heat_1 = v_51_1;
        s_4_St_3_Heat_2 = v_51_2;
      };
      v_179 = r_St_3_Heat;
      v_175 = s_4_St_3_Heat_1;
      v_176 = s_4_St_3_Heat_2;
    };
    s_4_1 = v_175;
    s_4_2 = v_176;
    r = v_179;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_180 = true;
      v_177 = true;
      v_178 = true;
    } else {
      v_64 = (t_in>18);
      v_63 = (s==2);
      v_65 = (v_63&&v_64);
      v_61 = (t_in>27);
      v_60 = (s==1);
      v_62 = (v_60&&v_61);
      v_66 = (v_62||v_65);
      if (v_66) {
        v_68 = true;
        v_67_1 = true;
        v_67_2 = true;
      } else {
        v_68 = self->pnr;
        v_67_1 = false;
        v_67_2 = false;
      };
      v_57 = (t_in<16);
      v_56 = (s==2);
      v_58 = (v_56&&v_57);
      v_54 = (t_in<24);
      v_53 = (s==1);
      v_55 = (v_53&&v_54);
      v_59 = (v_55||v_58);
      if (v_59) {
        r_St_3_Na = true;
      } else {
        r_St_3_Na = v_68;
      };
      v_180 = r_St_3_Na;
      if (v_59) {
        s_4_St_3_Na_1 = true;
      } else {
        s_4_St_3_Na_1 = v_67_1;
      };
      v_177 = s_4_St_3_Na_1;
      if (v_59) {
        s_4_St_3_Na_2 = false;
      } else {
        s_4_St_3_Na_2 = v_67_2;
      };
      v_178 = s_4_St_3_Na_2;
      if (v_67_1) {
        v_67_2_1 = v_67_2;
      } else {
        v_67_2_0 = v_67_2;
      };
      if (s_4_St_3_Na_1) {
        s_4_St_3_Na_2_1 = s_4_St_3_Na_2;
      } else {
        s_4_St_3_Na_2_0 = s_4_St_3_Na_2;
      };
    };
    s_4_1 = v_177;
    s_4_2 = v_178;
    r = v_180;
  };
  ck_4_1 = s_4_1;
  ck_4_2 = s_4_2;
  if (ck_4_1) {
    ck_4_2_1 = ck_4_2;
    if (ck_4_2_1) {
      st_St_3_Cool = 2;
      v_165 = st_St_3_Cool;
      nr_St_3_Cool = false;
      v_171 = nr_St_3_Cool;
      ns_St_3_Cool_1 = true;
      v_167 = ns_St_3_Cool_1;
      ns_St_3_Cool_2 = true;
      v_168 = ns_St_3_Cool_2;
    } else {
      st_St_3_Heat = 1;
      nr_St_3_Heat = false;
      ns_St_3_Heat_1 = true;
      ns_St_3_Heat_2 = false;
      v_165 = st_St_3_Heat;
      v_171 = nr_St_3_Heat;
      v_167 = ns_St_3_Heat_1;
      v_168 = ns_St_3_Heat_2;
    };
    _out->st = v_165;
    ns_1 = v_167;
    ns_2 = v_168;
    nr = v_171;
  } else {
    ck_4_2_0 = ck_4_2;
    if (ck_4_2_0) {
      v_166 = 0;
      v_172 = true;
      v_169 = true;
      v_170 = true;
    } else {
      st_St_3_Na = 0;
      v_166 = st_St_3_Na;
      nr_St_3_Na = false;
      v_172 = nr_St_3_Na;
      ns_St_3_Na_1 = false;
      v_169 = ns_St_3_Na_1;
      ns_St_3_Na_2 = false;
      v_170 = ns_St_3_Na_2;
      if (ns_St_3_Na_1) {
        ns_St_3_Na_2_1 = ns_St_3_Na_2;
      } else {
        ns_St_3_Na_2_0 = ns_St_3_Na_2;
      };
    };
    _out->st = v_166;
    ns_1 = v_169;
    ns_2 = v_170;
    nr = v_172;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_4_1) {
    if (ck_4_2_1) {
      if (ns_St_3_Cool_1) {
        ns_St_3_Cool_2_1 = ns_St_3_Cool_2;
      } else {
        ns_St_3_Cool_2_0 = ns_St_3_Cool_2;
      };
    } else {
      if (ns_St_3_Heat_1) {
        ns_St_3_Heat_2_1 = ns_St_3_Heat_2;
      } else {
        ns_St_3_Heat_2_0 = ns_St_3_Heat_2;
      };
    };
  };
  if (s_4_1) {
    s_4_2_1 = s_4_2;
  } else {
    s_4_2_0 = s_4_2;
  };
  if (ck_1) {
    if (ck_2_1) {
      if (v_31_1) {
        v_31_2_1 = v_31_2;
      } else {
        v_31_2_0 = v_31_2;
      };
      if (s_4_St_3_Cool_1) {
        s_4_St_3_Cool_2_1 = s_4_St_3_Cool_2;
      } else {
        s_4_St_3_Cool_2_0 = s_4_St_3_Cool_2;
      };
    } else {
      if (v_51_1) {
        v_51_2_1 = v_51_2;
      } else {
        v_51_2_0 = v_51_2;
      };
      if (s_4_St_3_Heat_1) {
        s_4_St_3_Heat_2_1 = s_4_St_3_Heat_2;
      } else {
        s_4_St_3_Heat_2_0 = s_4_St_3_Heat_2;
      };
    };
  };
  self->pnr = nr;
  self->v_173 = ns_1;
  self->v_174 = ns_2;;
}

void Greenhouse__greenhouse_reset(Greenhouse__greenhouse_mem* self) {
  self->pnr = false;
  self->v_189 = false;
  self->v_190 = false;
  self->pnr_1 = false;
  self->v_205 = false;
  self->v_206 = false;
  self->pnr_2 = false;
  self->ck_6_1 = true;
  self->pnr_3 = false;
  self->ck_1 = true;
}

void Greenhouse__greenhouse_step(int crop, int t_in, int time,
                                 Greenhouse__greenhouse_out* _out,
                                 Greenhouse__greenhouse_mem* self) {
  Greenhouse_controller__greenhouse_controller_out Greenhouse_controller__greenhouse_controller_out_st;
  
  int v_188;
  int v_187;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int ns_St_4_Cool_2_0;
  int ns_St_4_Cool_2_1;
  int ns_St_4_Heat_2_0;
  int ns_St_4_Heat_2_1;
  int ns_St_4_Na_2_0;
  int ns_St_4_Na_2_1;
  int ck_11_2_0;
  int ck_11_2_1;
  int nr_St_4_Cool;
  int ns_St_4_Cool_2;
  int ns_St_4_Cool_1;
  int st_1_St_4_Cool;
  int nr_St_4_Heat;
  int ns_St_4_Heat_2;
  int ns_St_4_Heat_1;
  int st_1_St_4_Heat;
  int nr_St_4_Na;
  int ns_St_4_Na_2;
  int ns_St_4_Na_1;
  int st_1_St_4_Na;
  int ck_11_2;
  int ck_11_1;
  int v_147_2_0;
  int v_147_2_1;
  int v_148;
  int v_147_2;
  int v_147_1;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
  int v_140;
  int v_139;
  int v_138;
  int v_137;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_131_2_0;
  int v_131_2_1;
  int v_132;
  int v_131_2;
  int v_131_1;
  int v_130;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_114;
  int v_113;
  int v_111_2_0;
  int v_111_2_1;
  int v_112;
  int v_111_2;
  int v_111_1;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int s_5_St_4_Cool_2_0;
  int s_5_St_4_Cool_2_1;
  int s_5_St_4_Heat_2_0;
  int s_5_St_4_Heat_2_1;
  int s_5_St_4_Na_2_0;
  int s_5_St_4_Na_2_1;
  int ck_10_2_0;
  int ck_10_2_1;
  int r_St_4_Cool;
  int s_5_St_4_Cool_2;
  int s_5_St_4_Cool_1;
  int r_St_4_Heat;
  int s_5_St_4_Heat_2;
  int s_5_St_4_Heat_1;
  int r_St_4_Na;
  int s_5_St_4_Na_2;
  int s_5_St_4_Na_1;
  int ck_10_2;
  int ck_10_1;
  int v_204;
  int v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int ns_1_St_5_Night_2_0;
  int ns_1_St_5_Night_2_1;
  int ns_1_St_5_Day_2_0;
  int ns_1_St_5_Day_2_1;
  int ns_1_St_5_Start_2_0;
  int ns_1_St_5_Start_2_1;
  int ck_9_2_0;
  int ck_9_2_1;
  int nr_1_St_5_Night;
  int ns_1_St_5_Night_2;
  int ns_1_St_5_Night_1;
  int s_1_St_5_Night;
  int nr_1_St_5_Day;
  int ns_1_St_5_Day_2;
  int ns_1_St_5_Day_1;
  int s_1_St_5_Day;
  int nr_1_St_5_Start;
  int ns_1_St_5_Start_2;
  int ns_1_St_5_Start_1;
  int s_1_St_5_Start;
  int ck_9_2;
  int ck_9_1;
  int v_91_2_0;
  int v_91_2_1;
  int v_92;
  int v_91_2;
  int v_91_1;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_212;
  int v_211;
  int v_210;
  int v_209;
  int v_208;
  int v_207;
  int s_6_St_5_Night_2_0;
  int s_6_St_5_Night_2_1;
  int s_6_St_5_Day_2_0;
  int s_6_St_5_Day_2_1;
  int s_6_St_5_Start_2_0;
  int s_6_St_5_Start_2_1;
  int ck_8_2_0;
  int ck_8_2_1;
  int r_1_St_5_Night;
  int s_6_St_5_Night_2;
  int s_6_St_5_Night_1;
  int r_1_St_5_Day;
  int s_6_St_5_Day_2;
  int s_6_St_5_Day_1;
  int r_1_St_5_Start;
  int s_6_St_5_Start_2;
  int s_6_St_5_Start_1;
  int ck_8_2;
  int ck_8_1;
  int nr_2_St_6_On;
  int ns_2_St_6_On_1;
  int status_1_St_6_On;
  int nr_2_St_6_Off;
  int ns_2_St_6_Off_1;
  int status_1_St_6_Off;
  int ck_7_1;
  int v_78;
  int r_2_St_6_On;
  int s_7_St_6_On_1;
  int r_2_St_6_Off;
  int s_7_St_6_Off_1;
  int nr_3_St_7_On;
  int ns_3_St_7_On_1;
  int status_St_7_On;
  int nr_3_St_7_Off;
  int ns_3_St_7_Off_1;
  int status_St_7_Off;
  int ck_5_1;
  int v_77;
  int r_3_St_7_On;
  int s_8_St_7_On_1;
  int r_3_St_7_Off;
  int s_8_St_7_Off_1;
  int s_6_2_0;
  int s_6_2_1;
  int ns_1_2_0;
  int ns_1_2_1;
  int s_5_2_0;
  int s_5_2_1;
  int ns_2_2_0;
  int ns_2_2_1;
  int s_8_1;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_7_1;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_6_2;
  int s_6_1;
  int ns_1_2;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_5_2;
  int s_5_1;
  int ns_2_2;
  int ns_1_3;
  int r;
  int nr;
  int s_2;
  int t_in_1;
  int st_1;
  int time_1;
  int s_1;
  int c_1;
  int status_1;
  int c;
  int status;
  int t4;
  int t3;
  int t2;
  int t1;
  int both_on;
  int v;
  int v_69;
  int v_70;
  int v_71;
  int v_72;
  int v_73;
  int v_74;
  int v_75;
  int v_76;
  int c2;
  int c1;
  t_in_1 = t_in;
  ck_10_1 = self->v_189;
  ck_10_2 = self->v_190;
  time_1 = time;
  ck_8_1 = self->v_205;
  ck_8_2 = self->v_206;
  if (ck_10_1) {
    ck_10_2_1 = ck_10_2;
    if (ck_10_2_1) {
      v_108 = (t_in_1<=18);
      v_106 = (t_in_1>=16);
      v_103 = (t_in_1<=27);
      v_101 = (t_in_1>=24);
      v_97 = (t_in_1<16);
      v_94 = (t_in_1<24);
    } else {
      v_128 = (t_in_1<=18);
      v_126 = (t_in_1>=16);
      v_123 = (t_in_1<=27);
      v_121 = (t_in_1>=24);
      v_117 = (t_in_1>18);
      v_114 = (t_in_1>27);
    };
  } else {
    ck_10_2_0 = ck_10_2;
    if (!(ck_10_2_0)) {
      v_144 = (t_in_1>18);
      v_141 = (t_in_1>27);
      v_137 = (t_in_1<16);
      v_134 = (t_in_1<24);
    };
  };
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      v_83 = (time_1>=18);
      v_82 = (time_1<6);
      v_84 = (v_82||v_83);
      if (v_84) {
        r_1_St_5_Day = true;
        s_6_St_5_Day_1 = true;
        s_6_St_5_Day_2 = false;
      } else {
        r_1_St_5_Day = self->pnr_1;
        s_6_St_5_Day_1 = true;
        s_6_St_5_Day_2 = true;
      };
      v_211 = r_1_St_5_Day;
      v_207 = s_6_St_5_Day_1;
      v_208 = s_6_St_5_Day_2;
    } else {
      v_80 = (time_1<18);
      v_79 = (time_1>=6);
      v_81 = (v_79||v_80);
      if (v_81) {
        r_1_St_5_Night = true;
      } else {
        r_1_St_5_Night = self->pnr_1;
      };
      v_211 = r_1_St_5_Night;
      if (v_81) {
        s_6_St_5_Night_1 = true;
      } else {
        s_6_St_5_Night_1 = true;
      };
      v_207 = s_6_St_5_Night_1;
      if (v_81) {
        s_6_St_5_Night_2 = true;
      } else {
        s_6_St_5_Night_2 = false;
      };
      v_208 = s_6_St_5_Night_2;
    };
    s_6_1 = v_207;
    s_6_2 = v_208;
    r_1 = v_211;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      v_212 = true;
      v_209 = true;
      v_210 = true;
    } else {
      v_89 = (time_1<18);
      v_88 = (time_1>=6);
      v_90 = (v_88||v_89);
      if (v_90) {
        v_92 = true;
        v_91_1 = true;
        v_91_2 = true;
      } else {
        v_92 = self->pnr_1;
        v_91_1 = false;
        v_91_2 = false;
      };
      v_86 = (time_1>=18);
      v_85 = (time_1<6);
      v_87 = (v_85||v_86);
      if (v_87) {
        r_1_St_5_Start = true;
      } else {
        r_1_St_5_Start = v_92;
      };
      v_212 = r_1_St_5_Start;
      if (v_87) {
        s_6_St_5_Start_1 = true;
      } else {
        s_6_St_5_Start_1 = v_91_1;
      };
      v_209 = s_6_St_5_Start_1;
      if (v_87) {
        s_6_St_5_Start_2 = false;
      } else {
        s_6_St_5_Start_2 = v_91_2;
      };
      v_210 = s_6_St_5_Start_2;
      if (v_91_1) {
        v_91_2_1 = v_91_2;
      } else {
        v_91_2_0 = v_91_2;
      };
      if (s_6_St_5_Start_1) {
        s_6_St_5_Start_2_1 = s_6_St_5_Start_2;
      } else {
        s_6_St_5_Start_2_0 = s_6_St_5_Start_2;
      };
    };
    s_6_1 = v_209;
    s_6_2 = v_210;
    r_1 = v_212;
  };
  ck_9_1 = s_6_1;
  ck_9_2 = s_6_2;
  Greenhouse_controller__greenhouse_controller_step(v_79, v_80, v_82, v_83,
                                                    v_85, v_86, v_88, v_89,
                                                    v_94, v_97, v_101, v_103,
                                                    v_106, v_108, v_114,
                                                    v_117, v_121, v_123,
                                                    v_126, v_128, v_134,
                                                    v_137, v_141, v_144,
                                                    self->ck_1, self->pnr_3,
                                                    self->ck_6_1,
                                                    self->pnr_2, self->v_206,
                                                    self->v_205, self->pnr_1,
                                                    self->v_190, self->v_189,
                                                    self->pnr, true, true,
                                                    &Greenhouse_controller__greenhouse_controller_out_st);
  c2 = Greenhouse_controller__greenhouse_controller_out_st.greenhouse_c2;
  c1 = Greenhouse_controller__greenhouse_controller_out_st.greenhouse_c1;
  c_1 = c2;
  c = c1;
  if (ck_9_1) {
    ck_9_2_1 = ck_9_2;
    if (ck_9_2_1) {
      s_1_St_5_Day = 1;
      nr_1_St_5_Day = false;
      ns_1_St_5_Day_1 = true;
      ns_1_St_5_Day_2 = true;
      v_197 = s_1_St_5_Day;
      v_203 = nr_1_St_5_Day;
      v_199 = ns_1_St_5_Day_1;
      v_200 = ns_1_St_5_Day_2;
    } else {
      s_1_St_5_Night = 2;
      v_197 = s_1_St_5_Night;
      nr_1_St_5_Night = false;
      v_203 = nr_1_St_5_Night;
      ns_1_St_5_Night_1 = true;
      v_199 = ns_1_St_5_Night_1;
      ns_1_St_5_Night_2 = false;
      v_200 = ns_1_St_5_Night_2;
    };
    s_1 = v_197;
    ns_1_1 = v_199;
    ns_1_2 = v_200;
    nr_1 = v_203;
  } else {
    ck_9_2_0 = ck_9_2;
    if (ck_9_2_0) {
      v_198 = 0;
      v_204 = true;
      v_201 = true;
      v_202 = true;
    } else {
      s_1_St_5_Start = 0;
      v_198 = s_1_St_5_Start;
      nr_1_St_5_Start = false;
      v_204 = nr_1_St_5_Start;
      ns_1_St_5_Start_1 = false;
      v_201 = ns_1_St_5_Start_1;
      ns_1_St_5_Start_2 = false;
      v_202 = ns_1_St_5_Start_2;
      if (ns_1_St_5_Start_1) {
        ns_1_St_5_Start_2_1 = ns_1_St_5_Start_2;
      } else {
        ns_1_St_5_Start_2_0 = ns_1_St_5_Start_2;
      };
    };
    s_1 = v_198;
    ns_1_1 = v_201;
    ns_1_2 = v_202;
    nr_1 = v_204;
  };
  _out->s = s_1;
  s_2 = _out->s;
  if (ck_10_1) {
    if (ck_10_2_1) {
      v_105 = (s_2==2);
      v_107 = (v_105&&v_106);
      v_109 = (v_107&&v_108);
      v_100 = (s_2==1);
      v_102 = (v_100&&v_101);
      v_104 = (v_102&&v_103);
      v_110 = (v_104||v_109);
      if (v_110) {
        v_112 = true;
        v_111_1 = false;
        v_111_2 = false;
      } else {
        v_112 = self->pnr;
        v_111_1 = true;
        v_111_2 = true;
      };
      v_96 = (s_2==2);
      v_98 = (v_96&&v_97);
      v_93 = (s_2==1);
      v_95 = (v_93&&v_94);
      v_99 = (v_95||v_98);
      if (v_99) {
        r_St_4_Cool = true;
      } else {
        r_St_4_Cool = v_112;
      };
      v_195 = r_St_4_Cool;
      if (v_99) {
        s_5_St_4_Cool_1 = true;
      } else {
        s_5_St_4_Cool_1 = v_111_1;
      };
      v_191 = s_5_St_4_Cool_1;
      if (v_99) {
        s_5_St_4_Cool_2 = false;
      } else {
        s_5_St_4_Cool_2 = v_111_2;
      };
      v_192 = s_5_St_4_Cool_2;
    } else {
      v_125 = (s_2==2);
      v_127 = (v_125&&v_126);
      v_129 = (v_127&&v_128);
      v_120 = (s_2==1);
      v_122 = (v_120&&v_121);
      v_124 = (v_122&&v_123);
      v_130 = (v_124||v_129);
      if (v_130) {
        v_132 = true;
        v_131_1 = false;
        v_131_2 = false;
      } else {
        v_132 = self->pnr;
        v_131_1 = true;
        v_131_2 = false;
      };
      v_116 = (s_2==2);
      v_118 = (v_116&&v_117);
      v_113 = (s_2==1);
      v_115 = (v_113&&v_114);
      v_119 = (v_115||v_118);
      if (v_119) {
        r_St_4_Heat = true;
        s_5_St_4_Heat_1 = true;
        s_5_St_4_Heat_2 = true;
      } else {
        r_St_4_Heat = v_132;
        s_5_St_4_Heat_1 = v_131_1;
        s_5_St_4_Heat_2 = v_131_2;
      };
      v_195 = r_St_4_Heat;
      v_191 = s_5_St_4_Heat_1;
      v_192 = s_5_St_4_Heat_2;
    };
    s_5_1 = v_191;
    s_5_2 = v_192;
    r = v_195;
  } else {
    if (ck_10_2_0) {
      v_196 = true;
      v_193 = true;
      v_194 = true;
    } else {
      v_143 = (s_2==2);
      v_145 = (v_143&&v_144);
      v_140 = (s_2==1);
      v_142 = (v_140&&v_141);
      v_146 = (v_142||v_145);
      if (v_146) {
        v_148 = true;
        v_147_1 = true;
        v_147_2 = true;
      } else {
        v_148 = self->pnr;
        v_147_1 = false;
        v_147_2 = false;
      };
      v_136 = (s_2==2);
      v_138 = (v_136&&v_137);
      v_133 = (s_2==1);
      v_135 = (v_133&&v_134);
      v_139 = (v_135||v_138);
      if (v_139) {
        r_St_4_Na = true;
      } else {
        r_St_4_Na = v_148;
      };
      v_196 = r_St_4_Na;
      if (v_139) {
        s_5_St_4_Na_1 = true;
      } else {
        s_5_St_4_Na_1 = v_147_1;
      };
      v_193 = s_5_St_4_Na_1;
      if (v_139) {
        s_5_St_4_Na_2 = false;
      } else {
        s_5_St_4_Na_2 = v_147_2;
      };
      v_194 = s_5_St_4_Na_2;
      if (v_147_1) {
        v_147_2_1 = v_147_2;
      } else {
        v_147_2_0 = v_147_2;
      };
      if (s_5_St_4_Na_1) {
        s_5_St_4_Na_2_1 = s_5_St_4_Na_2;
      } else {
        s_5_St_4_Na_2_0 = s_5_St_4_Na_2;
      };
    };
    s_5_1 = v_193;
    s_5_2 = v_194;
    r = v_196;
  };
  ck_11_1 = s_5_1;
  ck_11_2 = s_5_2;
  if (ck_11_1) {
    ck_11_2_1 = ck_11_2;
    if (ck_11_2_1) {
      st_1_St_4_Cool = 2;
      v_181 = st_1_St_4_Cool;
      nr_St_4_Cool = false;
      v_187 = nr_St_4_Cool;
      ns_St_4_Cool_1 = true;
      v_183 = ns_St_4_Cool_1;
      ns_St_4_Cool_2 = true;
      v_184 = ns_St_4_Cool_2;
    } else {
      st_1_St_4_Heat = 1;
      nr_St_4_Heat = false;
      ns_St_4_Heat_1 = true;
      ns_St_4_Heat_2 = false;
      v_181 = st_1_St_4_Heat;
      v_187 = nr_St_4_Heat;
      v_183 = ns_St_4_Heat_1;
      v_184 = ns_St_4_Heat_2;
    };
    st_1 = v_181;
    ns_1_3 = v_183;
    ns_2_2 = v_184;
    nr = v_187;
  } else {
    ck_11_2_0 = ck_11_2;
    if (ck_11_2_0) {
      v_182 = 0;
      v_188 = true;
      v_185 = true;
      v_186 = true;
    } else {
      st_1_St_4_Na = 0;
      v_182 = st_1_St_4_Na;
      nr_St_4_Na = false;
      v_188 = nr_St_4_Na;
      ns_St_4_Na_1 = false;
      v_185 = ns_St_4_Na_1;
      ns_St_4_Na_2 = false;
      v_186 = ns_St_4_Na_2;
      if (ns_St_4_Na_1) {
        ns_St_4_Na_2_1 = ns_St_4_Na_2;
      } else {
        ns_St_4_Na_2_0 = ns_St_4_Na_2;
      };
    };
    st_1 = v_182;
    ns_1_3 = v_185;
    ns_2_2 = v_186;
    nr = v_188;
  };
  _out->st = st_1;
  t2 = (_out->st==2);
  v = !(t2);
  t1 = (_out->st==1);
  v_71 = !(t1);
  if (ns_1_3) {
    ns_2_2_1 = ns_2_2;
  } else {
    ns_2_2_0 = ns_2_2;
  };
  if (ck_11_1) {
    if (ck_11_2_1) {
      if (ns_St_4_Cool_1) {
        ns_St_4_Cool_2_1 = ns_St_4_Cool_2;
      } else {
        ns_St_4_Cool_2_0 = ns_St_4_Cool_2;
      };
    } else {
      if (ns_St_4_Heat_1) {
        ns_St_4_Heat_2_1 = ns_St_4_Heat_2;
      } else {
        ns_St_4_Heat_2_0 = ns_St_4_Heat_2;
      };
    };
  };
  if (s_5_1) {
    s_5_2_1 = s_5_2;
  } else {
    s_5_2_0 = s_5_2;
  };
  if (ck_10_1) {
    if (ck_10_2_1) {
      if (v_111_1) {
        v_111_2_1 = v_111_2;
      } else {
        v_111_2_0 = v_111_2;
      };
      if (s_5_St_4_Cool_1) {
        s_5_St_4_Cool_2_1 = s_5_St_4_Cool_2;
      } else {
        s_5_St_4_Cool_2_0 = s_5_St_4_Cool_2;
      };
    } else {
      if (v_131_1) {
        v_131_2_1 = v_131_2;
      } else {
        v_131_2_0 = v_131_2;
      };
      if (s_5_St_4_Heat_1) {
        s_5_St_4_Heat_2_1 = s_5_St_4_Heat_2;
      } else {
        s_5_St_4_Heat_2_0 = s_5_St_4_Heat_2;
      };
    };
  };
  if (ns_1_1) {
    ns_1_2_1 = ns_1_2;
  } else {
    ns_1_2_0 = ns_1_2;
  };
  if (ck_9_1) {
    if (ck_9_2_1) {
      if (ns_1_St_5_Day_1) {
        ns_1_St_5_Day_2_1 = ns_1_St_5_Day_2;
      } else {
        ns_1_St_5_Day_2_0 = ns_1_St_5_Day_2;
      };
    } else {
      if (ns_1_St_5_Night_1) {
        ns_1_St_5_Night_2_1 = ns_1_St_5_Night_2;
      } else {
        ns_1_St_5_Night_2_0 = ns_1_St_5_Night_2;
      };
    };
  };
  if (s_6_1) {
    s_6_2_1 = s_6_2;
  } else {
    s_6_2_0 = s_6_2;
  };
  if (ck_8_1) {
    if (ck_8_2_1) {
      if (s_6_St_5_Day_1) {
        s_6_St_5_Day_2_1 = s_6_St_5_Day_2;
      } else {
        s_6_St_5_Day_2_0 = s_6_St_5_Day_2;
      };
    } else {
      if (s_6_St_5_Night_1) {
        s_6_St_5_Night_2_1 = s_6_St_5_Night_2;
      } else {
        s_6_St_5_Night_2_0 = s_6_St_5_Night_2;
      };
    };
  };
  if (self->ck_6_1) {
    v_78 = !(c_1);
    if (v_78) {
      r_2_St_6_Off = true;
      s_7_St_6_Off_1 = false;
    } else {
      r_2_St_6_Off = self->pnr_2;
      s_7_St_6_Off_1 = true;
    };
    r_2 = r_2_St_6_Off;
    s_7_1 = s_7_St_6_Off_1;
  } else {
    if (c_1) {
      r_2_St_6_On = true;
    } else {
      r_2_St_6_On = self->pnr_2;
    };
    r_2 = r_2_St_6_On;
    if (c_1) {
      s_7_St_6_On_1 = true;
    } else {
      s_7_St_6_On_1 = false;
    };
    s_7_1 = s_7_St_6_On_1;
  };
  ck_7_1 = s_7_1;
  if (ck_7_1) {
    status_1_St_6_Off = false;
    nr_2_St_6_Off = false;
    ns_2_St_6_Off_1 = true;
    status_1 = status_1_St_6_Off;
    nr_2 = nr_2_St_6_Off;
    ns_2_1 = ns_2_St_6_Off_1;
  } else {
    status_1_St_6_On = true;
    status_1 = status_1_St_6_On;
    nr_2_St_6_On = false;
    nr_2 = nr_2_St_6_On;
    ns_2_St_6_On_1 = false;
    ns_2_1 = ns_2_St_6_On_1;
  };
  _out->cooling_on = status_1;
  v_72 = !(_out->cooling_on);
  if (self->ck_1) {
    v_77 = !(c);
    if (v_77) {
      r_3_St_7_Off = true;
      s_8_St_7_Off_1 = false;
    } else {
      r_3_St_7_Off = self->pnr_3;
      s_8_St_7_Off_1 = true;
    };
    r_3 = r_3_St_7_Off;
    s_8_1 = s_8_St_7_Off_1;
  } else {
    if (c) {
      r_3_St_7_On = true;
    } else {
      r_3_St_7_On = self->pnr_3;
    };
    r_3 = r_3_St_7_On;
    if (c) {
      s_8_St_7_On_1 = true;
    } else {
      s_8_St_7_On_1 = false;
    };
    s_8_1 = s_8_St_7_On_1;
  };
  ck_5_1 = s_8_1;
  if (ck_5_1) {
    status_St_7_Off = false;
    nr_3_St_7_Off = false;
    ns_3_St_7_Off_1 = true;
    status = status_St_7_Off;
    nr_3 = nr_3_St_7_Off;
    ns_3_1 = ns_3_St_7_Off_1;
  } else {
    status_St_7_On = true;
    status = status_St_7_On;
    nr_3_St_7_On = false;
    nr_3 = nr_3_St_7_On;
    ns_3_St_7_On_1 = false;
    ns_3_1 = ns_3_St_7_On_1;
  };
  _out->heating_on = status;
  v_69 = !(_out->heating_on);
  v_70 = (_out->cooling_on&&v_69);
  t4 = (v||v_70);
  v_73 = (_out->heating_on&&v_72);
  t3 = (v_71||v_73);
  v_74 = (_out->heating_on&&_out->cooling_on);
  both_on = !(v_74);
  v_75 = (both_on&&t3);
  v_76 = (v_75&&t4);
  self->pnr = nr;
  self->v_189 = ns_1_3;
  self->v_190 = ns_2_2;
  self->pnr_1 = nr_1;
  self->v_205 = ns_1_1;
  self->v_206 = ns_1_2;
  self->pnr_2 = nr_2;
  self->ck_6_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->ck_1 = ns_3_1;;
}

