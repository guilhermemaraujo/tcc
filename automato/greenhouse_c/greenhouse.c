/* --- Generated the 8/7/2019 at 0:30 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s greenhouse greenhouse.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "greenhouse.h"

void Greenhouse__shift_reset(Greenhouse__shift_mem* self) {
  self->pnr = false;
  self->v_88 = true;
  self->v_89 = false;
}

void Greenhouse__shift_step(int time, Greenhouse__shift_out* _out,
                            Greenhouse__shift_mem* self) {
  
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int ns_St_Night_2_0;
  int ns_St_Night_2_1;
  int ns_St_Afternoon_2_0;
  int ns_St_Afternoon_2_1;
  int ns_St_Morning_2_0;
  int ns_St_Morning_2_1;
  int ns_St_Dawn_2_0;
  int ns_St_Dawn_2_1;
  int ck_1_2_0;
  int ck_1_2_1;
  int nr_St_Night;
  int ns_St_Night_2;
  int ns_St_Night_1;
  int n_St_Night;
  int a_St_Night;
  int m_St_Night;
  int d_St_Night;
  int nr_St_Afternoon;
  int ns_St_Afternoon_2;
  int ns_St_Afternoon_1;
  int n_St_Afternoon;
  int a_St_Afternoon;
  int m_St_Afternoon;
  int d_St_Afternoon;
  int nr_St_Morning;
  int ns_St_Morning_2;
  int ns_St_Morning_1;
  int n_St_Morning;
  int a_St_Morning;
  int m_St_Morning;
  int d_St_Morning;
  int nr_St_Dawn;
  int ns_St_Dawn_2;
  int ns_St_Dawn_1;
  int n_St_Dawn;
  int a_St_Dawn;
  int m_St_Dawn;
  int d_St_Dawn;
  int ck_1_2;
  int ck_1_1;
  int v_38_2_0;
  int v_38_2_1;
  int v_36_2_0;
  int v_36_2_1;
  int v_39;
  int v_38_2;
  int v_38_1;
  int v_37;
  int v_36_2;
  int v_36_1;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_27_2_0;
  int v_27_2_1;
  int v_25_2_0;
  int v_25_2_1;
  int v_28;
  int v_27_2;
  int v_27_1;
  int v_26;
  int v_25_2;
  int v_25_1;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_18_2_0;
  int v_18_2_1;
  int v_16_2_0;
  int v_16_2_1;
  int v_19;
  int v_18_2;
  int v_18_1;
  int v_17;
  int v_16_2;
  int v_16_1;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_9_2_0;
  int v_9_2_1;
  int v_7_2_0;
  int v_7_2_1;
  int v_10;
  int v_9_2;
  int v_9_1;
  int v_8;
  int v_7_2;
  int v_7_1;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int s_St_Night_2_0;
  int s_St_Night_2_1;
  int s_St_Afternoon_2_0;
  int s_St_Afternoon_2_1;
  int s_St_Morning_2_0;
  int s_St_Morning_2_1;
  int s_St_Dawn_2_0;
  int s_St_Dawn_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_Night;
  int s_St_Night_2;
  int s_St_Night_1;
  int r_St_Afternoon;
  int s_St_Afternoon_2;
  int s_St_Afternoon_1;
  int r_St_Morning;
  int s_St_Morning_2;
  int s_St_Morning_1;
  int r_St_Dawn;
  int s_St_Dawn_2;
  int s_St_Dawn_1;
  int ck_2;
  int ck_1_3;
  int s_2_0;
  int s_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_2;
  int s_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1_3 = self->v_88;
  ck_2 = self->v_89;
  if (ck_1_3) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_15 = (time>=17);
      if (v_15) {
        v_17 = true;
        v_16_1 = false;
        v_16_2 = false;
      } else {
        v_17 = self->pnr;
        v_16_1 = true;
        v_16_2 = true;
      };
      v_13 = (time<12);
      v_12 = (time>=8);
      v_14 = (v_12&&v_13);
      if (v_14) {
        v_19 = true;
        v_18_1 = false;
        v_18_2 = true;
      } else {
        v_19 = v_17;
        v_18_1 = v_16_1;
        v_18_2 = v_16_2;
      };
      v_11 = (time<8);
      if (v_11) {
        r_St_Afternoon = true;
      } else {
        r_St_Afternoon = v_19;
      };
      v_94 = r_St_Afternoon;
      if (v_11) {
        s_St_Afternoon_1 = true;
      } else {
        s_St_Afternoon_1 = v_18_1;
      };
      v_90 = s_St_Afternoon_1;
      if (v_11) {
        s_St_Afternoon_2 = false;
      } else {
        s_St_Afternoon_2 = v_18_2;
      };
      v_91 = s_St_Afternoon_2;
      if (v_16_1) {
        v_16_2_1 = v_16_2;
      } else {
        v_16_2_0 = v_16_2;
      };
      if (v_18_1) {
        v_18_2_1 = v_18_2;
      } else {
        v_18_2_0 = v_18_2;
      };
      if (s_St_Afternoon_1) {
        s_St_Afternoon_2_1 = s_St_Afternoon_2;
      } else {
        s_St_Afternoon_2_0 = s_St_Afternoon_2;
      };
    } else {
      v_35 = (time>=17);
      if (v_35) {
        v_37 = true;
        v_36_1 = false;
        v_36_2 = false;
      } else {
        v_37 = self->pnr;
        v_36_1 = true;
        v_36_2 = false;
      };
      v_33 = (time<17);
      v_32 = (time>=12);
      v_34 = (v_32&&v_33);
      if (v_34) {
        v_39 = true;
        v_38_1 = true;
        v_38_2 = true;
      } else {
        v_39 = v_37;
        v_38_1 = v_36_1;
        v_38_2 = v_36_2;
      };
      v_30 = (time<12);
      v_29 = (time>=8);
      v_31 = (v_29&&v_30);
      if (v_31) {
        r_St_Dawn = true;
        s_St_Dawn_1 = false;
        s_St_Dawn_2 = true;
      } else {
        r_St_Dawn = v_39;
        s_St_Dawn_1 = v_38_1;
        s_St_Dawn_2 = v_38_2;
      };
      v_94 = r_St_Dawn;
      v_90 = s_St_Dawn_1;
      v_91 = s_St_Dawn_2;
      if (v_36_1) {
        v_36_2_1 = v_36_2;
      } else {
        v_36_2_0 = v_36_2;
      };
      if (v_38_1) {
        v_38_2_1 = v_38_2;
      } else {
        v_38_2_0 = v_38_2;
      };
      if (s_St_Dawn_1) {
        s_St_Dawn_2_1 = s_St_Dawn_2;
      } else {
        s_St_Dawn_2_0 = s_St_Dawn_2;
      };
    };
    s_1 = v_90;
    s_2 = v_91;
    r = v_94;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_24 = (time>=17);
      if (v_24) {
        v_26 = true;
        v_25_1 = false;
        v_25_2 = false;
      } else {
        v_26 = self->pnr;
        v_25_1 = false;
        v_25_2 = true;
      };
      v_22 = (time<17);
      v_21 = (time>=12);
      v_23 = (v_21&&v_22);
      if (v_23) {
        v_28 = true;
        v_27_1 = true;
        v_27_2 = true;
      } else {
        v_28 = v_26;
        v_27_1 = v_25_1;
        v_27_2 = v_25_2;
      };
      v_20 = (time<8);
      if (v_20) {
        r_St_Morning = true;
        s_St_Morning_1 = true;
        s_St_Morning_2 = false;
      } else {
        r_St_Morning = v_28;
        s_St_Morning_1 = v_27_1;
        s_St_Morning_2 = v_27_2;
      };
      v_95 = r_St_Morning;
      v_92 = s_St_Morning_1;
      v_93 = s_St_Morning_2;
      if (v_25_1) {
        v_25_2_1 = v_25_2;
      } else {
        v_25_2_0 = v_25_2;
      };
      if (v_27_1) {
        v_27_2_1 = v_27_2;
      } else {
        v_27_2_0 = v_27_2;
      };
    } else {
      v_5 = (time<17);
      v_4 = (time>=12);
      v_6 = (v_4&&v_5);
      if (v_6) {
        v_8 = true;
        v_7_1 = true;
        v_7_2 = true;
      } else {
        v_8 = self->pnr;
        v_7_1 = false;
        v_7_2 = false;
      };
      v_2 = (time<12);
      v_1 = (time>=8);
      v_3 = (v_1&&v_2);
      if (v_3) {
        v_10 = true;
        v_9_1 = false;
        v_9_2 = true;
      } else {
        v_10 = v_8;
        v_9_1 = v_7_1;
        v_9_2 = v_7_2;
      };
      v = (time<8);
      if (v) {
        r_St_Night = true;
      } else {
        r_St_Night = v_10;
      };
      v_95 = r_St_Night;
      if (v) {
        s_St_Night_1 = true;
      } else {
        s_St_Night_1 = v_9_1;
      };
      v_92 = s_St_Night_1;
      if (v) {
        s_St_Night_2 = false;
      } else {
        s_St_Night_2 = v_9_2;
      };
      v_93 = s_St_Night_2;
    };
    s_1 = v_92;
    s_2 = v_93;
    r = v_95;
  };
  ck_1_1 = s_1;
  ck_1_2 = s_2;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      d_St_Afternoon = false;
      v_74 = d_St_Afternoon;
      m_St_Afternoon = false;
      v_76 = m_St_Afternoon;
      a_St_Afternoon = true;
      v_78 = a_St_Afternoon;
      n_St_Afternoon = false;
      v_80 = n_St_Afternoon;
      nr_St_Afternoon = false;
      v_86 = nr_St_Afternoon;
      ns_St_Afternoon_1 = true;
      v_82 = ns_St_Afternoon_1;
      ns_St_Afternoon_2 = true;
      v_83 = ns_St_Afternoon_2;
      if (ns_St_Afternoon_1) {
        ns_St_Afternoon_2_1 = ns_St_Afternoon_2;
      } else {
        ns_St_Afternoon_2_0 = ns_St_Afternoon_2;
      };
    } else {
      d_St_Dawn = true;
      m_St_Dawn = false;
      a_St_Dawn = false;
      n_St_Dawn = false;
      nr_St_Dawn = false;
      ns_St_Dawn_1 = true;
      ns_St_Dawn_2 = false;
      v_74 = d_St_Dawn;
      v_76 = m_St_Dawn;
      v_78 = a_St_Dawn;
      v_80 = n_St_Dawn;
      v_86 = nr_St_Dawn;
      v_82 = ns_St_Dawn_1;
      v_83 = ns_St_Dawn_2;
      if (ns_St_Dawn_1) {
        ns_St_Dawn_2_1 = ns_St_Dawn_2;
      } else {
        ns_St_Dawn_2_0 = ns_St_Dawn_2;
      };
    };
    _out->d = v_74;
    _out->m = v_76;
    _out->a = v_78;
    _out->n = v_80;
    ns_1 = v_82;
    ns_2 = v_83;
    nr = v_86;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      d_St_Morning = false;
      m_St_Morning = true;
      a_St_Morning = false;
      n_St_Morning = false;
      nr_St_Morning = false;
      ns_St_Morning_1 = false;
      ns_St_Morning_2 = true;
      v_75 = d_St_Morning;
      v_77 = m_St_Morning;
      v_79 = a_St_Morning;
      v_81 = n_St_Morning;
      v_87 = nr_St_Morning;
      v_84 = ns_St_Morning_1;
      v_85 = ns_St_Morning_2;
    } else {
      d_St_Night = false;
      v_75 = d_St_Night;
      m_St_Night = false;
      v_77 = m_St_Night;
      a_St_Night = false;
      v_79 = a_St_Night;
      n_St_Night = true;
      v_81 = n_St_Night;
      nr_St_Night = false;
      v_87 = nr_St_Night;
      ns_St_Night_1 = false;
      v_84 = ns_St_Night_1;
      ns_St_Night_2 = false;
      v_85 = ns_St_Night_2;
    };
    _out->d = v_75;
    _out->m = v_77;
    _out->a = v_79;
    _out->n = v_81;
    ns_1 = v_84;
    ns_2 = v_85;
    nr = v_87;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_1_1)) {
    if (ck_1_2_0) {
      if (ns_St_Morning_1) {
        ns_St_Morning_2_1 = ns_St_Morning_2;
      } else {
        ns_St_Morning_2_0 = ns_St_Morning_2;
      };
    } else {
      if (ns_St_Night_1) {
        ns_St_Night_2_1 = ns_St_Night_2;
      } else {
        ns_St_Night_2_0 = ns_St_Night_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (!(ck_1_3)) {
    if (ck_2_0) {
      if (s_St_Morning_1) {
        s_St_Morning_2_1 = s_St_Morning_2;
      } else {
        s_St_Morning_2_0 = s_St_Morning_2;
      };
    } else {
      if (v_7_1) {
        v_7_2_1 = v_7_2;
      } else {
        v_7_2_0 = v_7_2;
      };
      if (v_9_1) {
        v_9_2_1 = v_9_2;
      } else {
        v_9_2_0 = v_9_2;
      };
      if (s_St_Night_1) {
        s_St_Night_2_1 = s_St_Night_2;
      } else {
        s_St_Night_2_0 = s_St_Night_2;
      };
    };
  };
  self->pnr = nr;
  self->v_88 = ns_1;
  self->v_89 = ns_2;;
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
    if (c) {
      r_St_1_Off = true;
      s_St_1_Off_1 = false;
    } else {
      r_St_1_Off = self->pnr;
      s_St_1_Off_1 = true;
    };
    r = r_St_1_Off;
    s_1 = s_St_1_Off_1;
  } else {
    v = !(c);
    if (v) {
      r_St_1_On = true;
    } else {
      r_St_1_On = self->pnr;
    };
    r = r_St_1_On;
    if (v) {
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
    if (c) {
      r_St_2_Off = true;
      s_St_2_Off_1 = false;
    } else {
      r_St_2_Off = self->pnr;
      s_St_2_Off_1 = true;
    };
    r = r_St_2_Off;
    s_1 = s_St_2_Off_1;
  } else {
    v = !(c);
    if (v) {
      r_St_2_On = true;
    } else {
      r_St_2_On = self->pnr;
    };
    r = r_St_2_On;
    if (v) {
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

void Greenhouse__greenhouse_reset(Greenhouse__greenhouse_mem* self) {
  Greenhouse__shift_reset(&self->shift);
  self->pnr = false;
  self->ck_5_1 = true;
  self->pnr_1 = false;
  self->ck_1 = true;
}

void Greenhouse__greenhouse_step(int t_in, int time,
                                 Greenhouse__greenhouse_out* _out,
                                 Greenhouse__greenhouse_mem* self) {
  Greenhouse__shift_out Greenhouse__shift_out_st;
  Greenhouse_controller__greenhouse_controller_out Greenhouse_controller__greenhouse_controller_out_st;
  
  int nr_St_3_On;
  int ns_St_3_On_1;
  int status_1_St_3_On;
  int nr_St_3_Off;
  int ns_St_3_Off_1;
  int status_1_St_3_Off;
  int ck_6_1;
  int v_73;
  int r_St_3_On;
  int s_St_3_On_1;
  int r_St_3_Off;
  int s_St_3_Off_1;
  int nr_1_St_4_On;
  int ns_1_St_4_On_1;
  int status_St_4_On;
  int nr_1_St_4_Off;
  int ns_1_St_4_Off_1;
  int status_St_4_Off;
  int ck_4_1;
  int v_72;
  int r_1_St_4_On;
  int s_1_St_4_On_1;
  int r_1_St_4_Off;
  int s_1_St_4_Off_1;
  int s_1_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_1_2;
  int ns_1_2;
  int r;
  int nr;
  int c_1;
  int status_1;
  int c;
  int status;
  int t2;
  int t1;
  int n;
  int a;
  int m;
  int d;
  int both_on;
  int too_cold;
  int too_hot;
  int v;
  int v_40;
  int v_41;
  int v_42;
  int v_43;
  int v_44;
  int v_45;
  int v_46;
  int v_47;
  int v_48;
  int v_49;
  int v_50;
  int v_51;
  int v_52;
  int v_53;
  int v_54;
  int v_55;
  int v_56;
  int v_57;
  int v_58;
  int v_59;
  int v_60;
  int v_61;
  int v_62;
  int v_63;
  int v_64;
  int v_65;
  int v_66;
  int v_67;
  int v_68;
  int v_69;
  int v_70;
  int v_71;
  int c2;
  int c1;
  v = (t_in>25);
  v_41 = (t_in>20);
  v_44 = (t_in>15);
  v_47 = (t_in>30);
  v_49 = (t_in<20);
  v_51 = (t_in<15);
  v_54 = (t_in<10);
  v_57 = (t_in<25);
  Greenhouse__shift_step(time, &Greenhouse__shift_out_st, &self->shift);
  d = Greenhouse__shift_out_st.d;
  m = Greenhouse__shift_out_st.m;
  a = Greenhouse__shift_out_st.a;
  n = Greenhouse__shift_out_st.n;
  v_40 = (d&&v);
  v_42 = (m&&v_41);
  v_43 = (v_40||v_42);
  v_45 = (a&&v_44);
  v_46 = (v_43||v_45);
  v_48 = (n&&v_47);
  t2 = (v_46||v_48);
  v_69 = !(t2);
  v_50 = (d&&v_49);
  v_52 = (m&&v_51);
  v_53 = (v_50||v_52);
  v_55 = (a&&v_54);
  v_56 = (v_53||v_55);
  v_58 = (n&&v_57);
  t1 = (v_56||v_58);
  v_66 = !(t1);
  v_59 = (t_in<5);
  v_60 = (t_in>35);
  Greenhouse_controller__greenhouse_controller_step(v_60, v_59, d, m, a, n,
                                                    v_57, v_54, v_51, v_49,
                                                    v_47, v_44, v_41, v,
                                                    self->ck_1, self->pnr_1,
                                                    self->ck_5_1, self->pnr,
                                                    true, true,
                                                    &Greenhouse_controller__greenhouse_controller_out_st);
  c2 = Greenhouse_controller__greenhouse_controller_out_st.greenhouse_c2;
  c1 = Greenhouse_controller__greenhouse_controller_out_st.greenhouse_c1;
  c_1 = c2;
  c = c1;
  if (self->ck_5_1) {
    if (c_1) {
      r_St_3_Off = true;
      s_St_3_Off_1 = false;
    } else {
      r_St_3_Off = self->pnr;
      s_St_3_Off_1 = true;
    };
    r = r_St_3_Off;
    s_1_2 = s_St_3_Off_1;
  } else {
    v_73 = !(c_1);
    if (v_73) {
      r_St_3_On = true;
    } else {
      r_St_3_On = self->pnr;
    };
    r = r_St_3_On;
    if (v_73) {
      s_St_3_On_1 = true;
    } else {
      s_St_3_On_1 = false;
    };
    s_1_2 = s_St_3_On_1;
  };
  ck_6_1 = s_1_2;
  if (ck_6_1) {
    status_1_St_3_Off = false;
    nr_St_3_Off = false;
    ns_St_3_Off_1 = true;
    status_1 = status_1_St_3_Off;
    nr = nr_St_3_Off;
    ns_1_2 = ns_St_3_Off_1;
  } else {
    status_1_St_3_On = true;
    status_1 = status_1_St_3_On;
    nr_St_3_On = false;
    nr = nr_St_3_On;
    ns_St_3_On_1 = false;
    ns_1_2 = ns_St_3_On_1;
  };
  _out->cooling_on = status_1;
  v_70 = (v_69||_out->cooling_on);
  too_cold = (_out->cooling_on&&v_59);
  v_62 = !(too_cold);
  if (self->ck_1) {
    if (c) {
      r_1_St_4_Off = true;
      s_1_St_4_Off_1 = false;
    } else {
      r_1_St_4_Off = self->pnr_1;
      s_1_St_4_Off_1 = true;
    };
    r_1 = r_1_St_4_Off;
    s_1_1 = s_1_St_4_Off_1;
  } else {
    v_72 = !(c);
    if (v_72) {
      r_1_St_4_On = true;
    } else {
      r_1_St_4_On = self->pnr_1;
    };
    r_1 = r_1_St_4_On;
    if (v_72) {
      s_1_St_4_On_1 = true;
    } else {
      s_1_St_4_On_1 = false;
    };
    s_1_1 = s_1_St_4_On_1;
  };
  ck_4_1 = s_1_1;
  if (ck_4_1) {
    status_St_4_Off = false;
    nr_1_St_4_Off = false;
    ns_1_St_4_Off_1 = true;
    status = status_St_4_Off;
    nr_1 = nr_1_St_4_Off;
    ns_1_1 = ns_1_St_4_Off_1;
  } else {
    status_St_4_On = true;
    status = status_St_4_On;
    nr_1_St_4_On = false;
    nr_1 = nr_1_St_4_On;
    ns_1_St_4_On_1 = false;
    ns_1_1 = ns_1_St_4_On_1;
  };
  _out->heating_on = status;
  v_67 = (v_66||_out->heating_on);
  both_on = (_out->heating_on&&_out->cooling_on);
  v_64 = !(both_on);
  too_hot = (_out->heating_on&&v_60);
  v_61 = !(too_hot);
  v_63 = (v_61&&v_62);
  v_65 = (v_63&&v_64);
  v_68 = (v_65&&v_67);
  v_71 = (v_68&&v_70);
  self->pnr = nr;
  self->ck_5_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_1 = ns_1_1;;
}

