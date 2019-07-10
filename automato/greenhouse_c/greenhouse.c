/* --- Generated the 10/7/2019 at 11:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s greenhouse greenhouse.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "greenhouse.h"

void Greenhouse__shift_reset(Greenhouse__shift_mem* self) {
  self->pnr = false;
  self->v_161 = false;
  self->v_162 = false;
  self->v_163 = false;
}

void Greenhouse__shift_step(int time, Greenhouse__shift_out* _out,
                            Greenhouse__shift_mem* self) {
  
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int v_151;
  int v_150;
  int v_149;
  int v_148;
  int v_147;
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
  int v_132;
  int v_131;
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
  int ns_St_Night_2_0;
  int ns_St_Night_3_0_0;
  int ns_St_Night_3_0_1;
  int ns_St_Night_2_1;
  int ns_St_Night_3_1_0;
  int ns_St_Night_3_1_1;
  int ns_St_Afternoon_2_0;
  int ns_St_Afternoon_3_0_0;
  int ns_St_Afternoon_3_0_1;
  int ns_St_Afternoon_2_1;
  int ns_St_Afternoon_3_1_0;
  int ns_St_Afternoon_3_1_1;
  int ns_St_Morning_2_0;
  int ns_St_Morning_3_0_0;
  int ns_St_Morning_3_0_1;
  int ns_St_Morning_2_1;
  int ns_St_Morning_3_1_0;
  int ns_St_Morning_3_1_1;
  int ns_St_Dawn_2_0;
  int ns_St_Dawn_3_0_0;
  int ns_St_Dawn_3_0_1;
  int ns_St_Dawn_2_1;
  int ns_St_Dawn_3_1_0;
  int ns_St_Dawn_3_1_1;
  int ns_St_Start_2_0;
  int ns_St_Start_3_0_0;
  int ns_St_Start_3_0_1;
  int ns_St_Start_2_1;
  int ns_St_Start_3_1_0;
  int ns_St_Start_3_1_1;
  int ck_1_2_0;
  int ck_1_3_0_0;
  int ck_1_3_0_1;
  int ck_1_2_1;
  int ck_1_3_1_0;
  int ck_1_3_1_1;
  int nr_St_Night;
  int ns_St_Night_3;
  int ns_St_Night_2;
  int ns_St_Night_1;
  int n_St_Night;
  int a_St_Night;
  int m_St_Night;
  int d_St_Night;
  int nr_St_Afternoon;
  int ns_St_Afternoon_3;
  int ns_St_Afternoon_2;
  int ns_St_Afternoon_1;
  int n_St_Afternoon;
  int a_St_Afternoon;
  int m_St_Afternoon;
  int d_St_Afternoon;
  int nr_St_Morning;
  int ns_St_Morning_3;
  int ns_St_Morning_2;
  int ns_St_Morning_1;
  int n_St_Morning;
  int a_St_Morning;
  int m_St_Morning;
  int d_St_Morning;
  int nr_St_Dawn;
  int ns_St_Dawn_3;
  int ns_St_Dawn_2;
  int ns_St_Dawn_1;
  int n_St_Dawn;
  int a_St_Dawn;
  int m_St_Dawn;
  int d_St_Dawn;
  int nr_St_Start;
  int ns_St_Start_3;
  int ns_St_Start_2;
  int ns_St_Start_1;
  int n_St_Start;
  int a_St_Start;
  int m_St_Start;
  int d_St_Start;
  int ck_1_3;
  int ck_1_2;
  int ck_1_1;
  int v_52_2_0;
  int v_52_3_0_0;
  int v_52_3_0_1;
  int v_52_2_1;
  int v_52_3_1_0;
  int v_52_3_1_1;
  int v_50_2_0;
  int v_50_3_0_0;
  int v_50_3_0_1;
  int v_50_2_1;
  int v_50_3_1_0;
  int v_50_3_1_1;
  int v_48_2_0;
  int v_48_3_0_0;
  int v_48_3_0_1;
  int v_48_2_1;
  int v_48_3_1_0;
  int v_48_3_1_1;
  int v_53;
  int v_52_3;
  int v_52_2;
  int v_52_1;
  int v_51;
  int v_50_3;
  int v_50_2;
  int v_50_1;
  int v_49;
  int v_48_3;
  int v_48_2;
  int v_48_1;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_38_2_0;
  int v_38_3_0_0;
  int v_38_3_0_1;
  int v_38_2_1;
  int v_38_3_1_0;
  int v_38_3_1_1;
  int v_36_2_0;
  int v_36_3_0_0;
  int v_36_3_0_1;
  int v_36_2_1;
  int v_36_3_1_0;
  int v_36_3_1_1;
  int v_39;
  int v_38_3;
  int v_38_2;
  int v_38_1;
  int v_37;
  int v_36_3;
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
  int v_27_3_0_0;
  int v_27_3_0_1;
  int v_27_2_1;
  int v_27_3_1_0;
  int v_27_3_1_1;
  int v_25_2_0;
  int v_25_3_0_0;
  int v_25_3_0_1;
  int v_25_2_1;
  int v_25_3_1_0;
  int v_25_3_1_1;
  int v_28;
  int v_27_3;
  int v_27_2;
  int v_27_1;
  int v_26;
  int v_25_3;
  int v_25_2;
  int v_25_1;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_18_2_0;
  int v_18_3_0_0;
  int v_18_3_0_1;
  int v_18_2_1;
  int v_18_3_1_0;
  int v_18_3_1_1;
  int v_16_2_0;
  int v_16_3_0_0;
  int v_16_3_0_1;
  int v_16_2_1;
  int v_16_3_1_0;
  int v_16_3_1_1;
  int v_19;
  int v_18_3;
  int v_18_2;
  int v_18_1;
  int v_17;
  int v_16_3;
  int v_16_2;
  int v_16_1;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_9_2_0;
  int v_9_3_0_0;
  int v_9_3_0_1;
  int v_9_2_1;
  int v_9_3_1_0;
  int v_9_3_1_1;
  int v_7_2_0;
  int v_7_3_0_0;
  int v_7_3_0_1;
  int v_7_2_1;
  int v_7_3_1_0;
  int v_7_3_1_1;
  int v_10;
  int v_9_3;
  int v_9_2;
  int v_9_1;
  int v_8;
  int v_7_3;
  int v_7_2;
  int v_7_1;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int v_176;
  int v_175;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v_167;
  int v_166;
  int v_165;
  int v_164;
  int s_St_Night_2_0;
  int s_St_Night_3_0_0;
  int s_St_Night_3_0_1;
  int s_St_Night_2_1;
  int s_St_Night_3_1_0;
  int s_St_Night_3_1_1;
  int s_St_Afternoon_2_0;
  int s_St_Afternoon_3_0_0;
  int s_St_Afternoon_3_0_1;
  int s_St_Afternoon_2_1;
  int s_St_Afternoon_3_1_0;
  int s_St_Afternoon_3_1_1;
  int s_St_Morning_2_0;
  int s_St_Morning_3_0_0;
  int s_St_Morning_3_0_1;
  int s_St_Morning_2_1;
  int s_St_Morning_3_1_0;
  int s_St_Morning_3_1_1;
  int s_St_Dawn_2_0;
  int s_St_Dawn_3_0_0;
  int s_St_Dawn_3_0_1;
  int s_St_Dawn_2_1;
  int s_St_Dawn_3_1_0;
  int s_St_Dawn_3_1_1;
  int s_St_Start_2_0;
  int s_St_Start_3_0_0;
  int s_St_Start_3_0_1;
  int s_St_Start_2_1;
  int s_St_Start_3_1_0;
  int s_St_Start_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_Night;
  int s_St_Night_3;
  int s_St_Night_2;
  int s_St_Night_1;
  int r_St_Afternoon;
  int s_St_Afternoon_3;
  int s_St_Afternoon_2;
  int s_St_Afternoon_1;
  int r_St_Morning;
  int s_St_Morning_3;
  int s_St_Morning_2;
  int s_St_Morning_1;
  int r_St_Dawn;
  int s_St_Dawn_3;
  int s_St_Dawn_2;
  int s_St_Dawn_1;
  int r_St_Start;
  int s_St_Start_3;
  int s_St_Start_2;
  int s_St_Start_1;
  int ck_3;
  int ck_2;
  int ck_1_4;
  int s_2_0;
  int s_3_0_0;
  int s_3_0_1;
  int s_2_1;
  int s_3_1_0;
  int s_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_3;
  int s_2;
  int s_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1_4 = self->v_161;
  ck_2 = self->v_162;
  ck_3 = self->v_163;
  if (ck_1_4) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        v_15 = (time>=17);
        if (v_15) {
          v_17 = true;
          v_16_1 = false;
          v_16_2 = false;
          v_16_3 = true;
        } else {
          v_17 = self->pnr;
          v_16_1 = true;
          v_16_2 = true;
          v_16_3 = true;
        };
        v_13 = (time<12);
        v_12 = (time>=8);
        v_14 = (v_12&&v_13);
        if (v_14) {
          v_19 = true;
          v_18_1 = true;
          v_18_2 = false;
          v_18_3 = false;
        } else {
          v_19 = v_17;
          v_18_1 = v_16_1;
          v_18_2 = v_16_2;
          v_18_3 = v_16_3;
        };
        v_11 = (time<8);
        if (v_11) {
          r_St_Afternoon = true;
        } else {
          r_St_Afternoon = v_19;
        };
        v_179 = r_St_Afternoon;
        if (v_11) {
          s_St_Afternoon_1 = true;
        } else {
          s_St_Afternoon_1 = v_18_1;
        };
        v_164 = s_St_Afternoon_1;
        if (v_11) {
          s_St_Afternoon_2 = true;
        } else {
          s_St_Afternoon_2 = v_18_2;
        };
        v_165 = s_St_Afternoon_2;
        if (v_11) {
          s_St_Afternoon_3 = false;
        } else {
          s_St_Afternoon_3 = v_18_3;
        };
        v_166 = s_St_Afternoon_3;
      } else {
        v_35 = (time>=17);
        if (v_35) {
          v_37 = true;
          v_36_1 = false;
          v_36_2 = false;
          v_36_3 = true;
        } else {
          v_37 = self->pnr;
          v_36_1 = true;
          v_36_2 = true;
          v_36_3 = false;
        };
        v_33 = (time<17);
        v_32 = (time>=12);
        v_34 = (v_32&&v_33);
        if (v_34) {
          v_39 = true;
          v_38_1 = true;
          v_38_2 = true;
          v_38_3 = true;
        } else {
          v_39 = v_37;
          v_38_1 = v_36_1;
          v_38_2 = v_36_2;
          v_38_3 = v_36_3;
        };
        v_30 = (time<12);
        v_29 = (time>=8);
        v_31 = (v_29&&v_30);
        if (v_31) {
          r_St_Dawn = true;
          s_St_Dawn_1 = true;
          s_St_Dawn_2 = false;
          s_St_Dawn_3 = false;
        } else {
          r_St_Dawn = v_39;
          s_St_Dawn_1 = v_38_1;
          s_St_Dawn_2 = v_38_2;
          s_St_Dawn_3 = v_38_3;
        };
        v_179 = r_St_Dawn;
        v_164 = s_St_Dawn_1;
        v_165 = s_St_Dawn_2;
        v_166 = s_St_Dawn_3;
        if (v_36_1) {
          v_36_2_1 = v_36_2;
          if (v_36_2_1) {
            v_36_3_1_1 = v_36_3;
          } else {
            v_36_3_1_0 = v_36_3;
          };
        } else {
          v_36_2_0 = v_36_2;
          if (v_36_2_0) {
            v_36_3_0_1 = v_36_3;
          } else {
            v_36_3_0_0 = v_36_3;
          };
        };
        if (v_38_1) {
          v_38_2_1 = v_38_2;
          if (v_38_2_1) {
            v_38_3_1_1 = v_38_3;
          } else {
            v_38_3_1_0 = v_38_3;
          };
        } else {
          v_38_2_0 = v_38_2;
          if (v_38_2_0) {
            v_38_3_0_1 = v_38_3;
          } else {
            v_38_3_0_0 = v_38_3;
          };
        };
      };
      v_173 = v_164;
      v_174 = v_165;
      v_175 = v_166;
      v_181 = v_179;
      if (ck_3_1_1) {
        if (v_16_1) {
          v_16_2_1 = v_16_2;
          if (v_16_2_1) {
            v_16_3_1_1 = v_16_3;
          } else {
            v_16_3_1_0 = v_16_3;
          };
        } else {
          v_16_2_0 = v_16_2;
          if (v_16_2_0) {
            v_16_3_0_1 = v_16_3;
          } else {
            v_16_3_0_0 = v_16_3;
          };
        };
        if (v_18_1) {
          v_18_2_1 = v_18_2;
          if (v_18_2_1) {
            v_18_3_1_1 = v_18_3;
          } else {
            v_18_3_1_0 = v_18_3;
          };
        } else {
          v_18_2_0 = v_18_2;
          if (v_18_2_0) {
            v_18_3_0_1 = v_18_3;
          } else {
            v_18_3_0_0 = v_18_3;
          };
        };
        if (s_St_Afternoon_1) {
          s_St_Afternoon_2_1 = s_St_Afternoon_2;
          if (s_St_Afternoon_2_1) {
            s_St_Afternoon_3_1_1 = s_St_Afternoon_3;
          } else {
            s_St_Afternoon_3_1_0 = s_St_Afternoon_3;
          };
        } else {
          s_St_Afternoon_2_0 = s_St_Afternoon_2;
          if (s_St_Afternoon_2_0) {
            s_St_Afternoon_3_0_1 = s_St_Afternoon_3;
          } else {
            s_St_Afternoon_3_0_0 = s_St_Afternoon_3;
          };
        };
      } else {
        if (s_St_Dawn_1) {
          s_St_Dawn_2_1 = s_St_Dawn_2;
          if (s_St_Dawn_2_1) {
            s_St_Dawn_3_1_1 = s_St_Dawn_3;
          } else {
            s_St_Dawn_3_1_0 = s_St_Dawn_3;
          };
        } else {
          s_St_Dawn_2_0 = s_St_Dawn_2;
          if (s_St_Dawn_2_0) {
            s_St_Dawn_3_0_1 = s_St_Dawn_3;
          } else {
            s_St_Dawn_3_0_0 = s_St_Dawn_3;
          };
        };
      };
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_180 = true;
        v_167 = true;
        v_168 = true;
        v_169 = true;
      } else {
        v_24 = (time>=17);
        if (v_24) {
          v_26 = true;
          v_25_1 = false;
          v_25_2 = false;
          v_25_3 = true;
        } else {
          v_26 = self->pnr;
          v_25_1 = true;
          v_25_2 = false;
          v_25_3 = false;
        };
        v_22 = (time<17);
        v_21 = (time>=12);
        v_23 = (v_21&&v_22);
        if (v_23) {
          v_28 = true;
          v_27_1 = true;
          v_27_2 = true;
          v_27_3 = true;
        } else {
          v_28 = v_26;
          v_27_1 = v_25_1;
          v_27_2 = v_25_2;
          v_27_3 = v_25_3;
        };
        v_20 = (time<8);
        if (v_20) {
          r_St_Morning = true;
        } else {
          r_St_Morning = v_28;
        };
        v_180 = r_St_Morning;
        if (v_20) {
          s_St_Morning_1 = true;
        } else {
          s_St_Morning_1 = v_27_1;
        };
        v_167 = s_St_Morning_1;
        if (v_20) {
          s_St_Morning_2 = true;
        } else {
          s_St_Morning_2 = v_27_2;
        };
        v_168 = s_St_Morning_2;
        if (v_20) {
          s_St_Morning_3 = false;
        } else {
          s_St_Morning_3 = v_27_3;
        };
        v_169 = s_St_Morning_3;
        if (v_25_1) {
          v_25_2_1 = v_25_2;
          if (v_25_2_1) {
            v_25_3_1_1 = v_25_3;
          } else {
            v_25_3_1_0 = v_25_3;
          };
        } else {
          v_25_2_0 = v_25_2;
          if (v_25_2_0) {
            v_25_3_0_1 = v_25_3;
          } else {
            v_25_3_0_0 = v_25_3;
          };
        };
        if (v_27_1) {
          v_27_2_1 = v_27_2;
          if (v_27_2_1) {
            v_27_3_1_1 = v_27_3;
          } else {
            v_27_3_1_0 = v_27_3;
          };
        } else {
          v_27_2_0 = v_27_2;
          if (v_27_2_0) {
            v_27_3_0_1 = v_27_3;
          } else {
            v_27_3_0_0 = v_27_3;
          };
        };
        if (s_St_Morning_1) {
          s_St_Morning_2_1 = s_St_Morning_2;
          if (s_St_Morning_2_1) {
            s_St_Morning_3_1_1 = s_St_Morning_3;
          } else {
            s_St_Morning_3_1_0 = s_St_Morning_3;
          };
        } else {
          s_St_Morning_2_0 = s_St_Morning_2;
          if (s_St_Morning_2_0) {
            s_St_Morning_3_0_1 = s_St_Morning_3;
          } else {
            s_St_Morning_3_0_0 = s_St_Morning_3;
          };
        };
      };
      v_173 = v_167;
      v_174 = v_168;
      v_175 = v_169;
      v_181 = v_180;
    };
    s_1 = v_173;
    s_2 = v_174;
    s_3 = v_175;
    r = v_181;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_176 = true;
      v_177 = true;
      v_178 = true;
      v_183 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_5 = (time<17);
        v_4 = (time>=12);
        v_6 = (v_4&&v_5);
        if (v_6) {
          v_8 = true;
          v_7_1 = true;
          v_7_2 = true;
          v_7_3 = true;
        } else {
          v_8 = self->pnr;
          v_7_1 = false;
          v_7_2 = false;
          v_7_3 = true;
        };
        v_2 = (time<12);
        v_1 = (time>=8);
        v_3 = (v_1&&v_2);
        if (v_3) {
          v_10 = true;
          v_9_1 = true;
          v_9_2 = false;
          v_9_3 = false;
        } else {
          v_10 = v_8;
          v_9_1 = v_7_1;
          v_9_2 = v_7_2;
          v_9_3 = v_7_3;
        };
        v = (time<8);
        if (v) {
          r_St_Night = true;
        } else {
          r_St_Night = v_10;
        };
        v_182 = r_St_Night;
        if (v) {
          s_St_Night_1 = true;
        } else {
          s_St_Night_1 = v_9_1;
        };
        v_170 = s_St_Night_1;
        if (v) {
          s_St_Night_2 = true;
        } else {
          s_St_Night_2 = v_9_2;
        };
        v_171 = s_St_Night_2;
        if (v) {
          s_St_Night_3 = false;
        } else {
          s_St_Night_3 = v_9_3;
        };
        v_172 = s_St_Night_3;
        if (v_7_1) {
          v_7_2_1 = v_7_2;
          if (v_7_2_1) {
            v_7_3_1_1 = v_7_3;
          } else {
            v_7_3_1_0 = v_7_3;
          };
        } else {
          v_7_2_0 = v_7_2;
          if (v_7_2_0) {
            v_7_3_0_1 = v_7_3;
          } else {
            v_7_3_0_0 = v_7_3;
          };
        };
        if (v_9_1) {
          v_9_2_1 = v_9_2;
          if (v_9_2_1) {
            v_9_3_1_1 = v_9_3;
          } else {
            v_9_3_1_0 = v_9_3;
          };
        } else {
          v_9_2_0 = v_9_2;
          if (v_9_2_0) {
            v_9_3_0_1 = v_9_3;
          } else {
            v_9_3_0_0 = v_9_3;
          };
        };
      } else {
        v_47 = (time>=17);
        if (v_47) {
          v_49 = true;
          v_48_1 = false;
          v_48_2 = false;
          v_48_3 = true;
        } else {
          v_49 = self->pnr;
          v_48_1 = false;
          v_48_2 = false;
          v_48_3 = false;
        };
        v_45 = (time<17);
        v_44 = (time>=12);
        v_46 = (v_44&&v_45);
        if (v_46) {
          v_51 = true;
          v_50_1 = true;
          v_50_2 = true;
          v_50_3 = true;
        } else {
          v_51 = v_49;
          v_50_1 = v_48_1;
          v_50_2 = v_48_2;
          v_50_3 = v_48_3;
        };
        v_42 = (time<12);
        v_41 = (time>=8);
        v_43 = (v_41&&v_42);
        if (v_43) {
          v_53 = true;
          v_52_1 = true;
          v_52_2 = false;
          v_52_3 = false;
        } else {
          v_53 = v_51;
          v_52_1 = v_50_1;
          v_52_2 = v_50_2;
          v_52_3 = v_50_3;
        };
        v_40 = (time<8);
        if (v_40) {
          r_St_Start = true;
          s_St_Start_1 = true;
          s_St_Start_2 = true;
          s_St_Start_3 = false;
        } else {
          r_St_Start = v_53;
          s_St_Start_1 = v_52_1;
          s_St_Start_2 = v_52_2;
          s_St_Start_3 = v_52_3;
        };
        v_182 = r_St_Start;
        v_170 = s_St_Start_1;
        v_171 = s_St_Start_2;
        v_172 = s_St_Start_3;
        if (v_48_1) {
          v_48_2_1 = v_48_2;
          if (v_48_2_1) {
            v_48_3_1_1 = v_48_3;
          } else {
            v_48_3_1_0 = v_48_3;
          };
        } else {
          v_48_2_0 = v_48_2;
          if (v_48_2_0) {
            v_48_3_0_1 = v_48_3;
          } else {
            v_48_3_0_0 = v_48_3;
          };
        };
        if (v_50_1) {
          v_50_2_1 = v_50_2;
          if (v_50_2_1) {
            v_50_3_1_1 = v_50_3;
          } else {
            v_50_3_1_0 = v_50_3;
          };
        } else {
          v_50_2_0 = v_50_2;
          if (v_50_2_0) {
            v_50_3_0_1 = v_50_3;
          } else {
            v_50_3_0_0 = v_50_3;
          };
        };
        if (v_52_1) {
          v_52_2_1 = v_52_2;
          if (v_52_2_1) {
            v_52_3_1_1 = v_52_3;
          } else {
            v_52_3_1_0 = v_52_3;
          };
        } else {
          v_52_2_0 = v_52_2;
          if (v_52_2_0) {
            v_52_3_0_1 = v_52_3;
          } else {
            v_52_3_0_0 = v_52_3;
          };
        };
      };
      v_176 = v_170;
      v_177 = v_171;
      v_178 = v_172;
      v_183 = v_182;
    };
    s_1 = v_176;
    s_2 = v_177;
    s_3 = v_178;
    r = v_183;
  };
  ck_1_1 = s_1;
  ck_1_2 = s_2;
  ck_1_3 = s_3;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      ck_1_3_1_1 = ck_1_3;
      if (ck_1_3_1_1) {
        d_St_Afternoon = false;
        v_121 = d_St_Afternoon;
        m_St_Afternoon = false;
        v_126 = m_St_Afternoon;
        a_St_Afternoon = true;
        v_131 = a_St_Afternoon;
        n_St_Afternoon = false;
        v_136 = n_St_Afternoon;
        nr_St_Afternoon = false;
        v_156 = nr_St_Afternoon;
        ns_St_Afternoon_1 = true;
        v_141 = ns_St_Afternoon_1;
        ns_St_Afternoon_2 = true;
        v_142 = ns_St_Afternoon_2;
        ns_St_Afternoon_3 = true;
        v_143 = ns_St_Afternoon_3;
      } else {
        d_St_Dawn = true;
        m_St_Dawn = false;
        a_St_Dawn = false;
        n_St_Dawn = false;
        nr_St_Dawn = false;
        ns_St_Dawn_1 = true;
        ns_St_Dawn_2 = true;
        ns_St_Dawn_3 = false;
        v_121 = d_St_Dawn;
        v_126 = m_St_Dawn;
        v_131 = a_St_Dawn;
        v_136 = n_St_Dawn;
        v_156 = nr_St_Dawn;
        v_141 = ns_St_Dawn_1;
        v_142 = ns_St_Dawn_2;
        v_143 = ns_St_Dawn_3;
      };
      v_123 = v_121;
      v_128 = v_126;
      v_133 = v_131;
      v_138 = v_136;
      v_150 = v_141;
      v_151 = v_142;
      v_152 = v_143;
      v_158 = v_156;
      if (ck_1_3_1_1) {
        if (ns_St_Afternoon_1) {
          ns_St_Afternoon_2_1 = ns_St_Afternoon_2;
          if (ns_St_Afternoon_2_1) {
            ns_St_Afternoon_3_1_1 = ns_St_Afternoon_3;
          } else {
            ns_St_Afternoon_3_1_0 = ns_St_Afternoon_3;
          };
        } else {
          ns_St_Afternoon_2_0 = ns_St_Afternoon_2;
          if (ns_St_Afternoon_2_0) {
            ns_St_Afternoon_3_0_1 = ns_St_Afternoon_3;
          } else {
            ns_St_Afternoon_3_0_0 = ns_St_Afternoon_3;
          };
        };
      } else {
        if (ns_St_Dawn_1) {
          ns_St_Dawn_2_1 = ns_St_Dawn_2;
          if (ns_St_Dawn_2_1) {
            ns_St_Dawn_3_1_1 = ns_St_Dawn_3;
          } else {
            ns_St_Dawn_3_1_0 = ns_St_Dawn_3;
          };
        } else {
          ns_St_Dawn_2_0 = ns_St_Dawn_2;
          if (ns_St_Dawn_2_0) {
            ns_St_Dawn_3_0_1 = ns_St_Dawn_3;
          } else {
            ns_St_Dawn_3_0_0 = ns_St_Dawn_3;
          };
        };
      };
    } else {
      ck_1_3_1_0 = ck_1_3;
      if (ck_1_3_1_0) {
        v_122 = true;
        v_127 = true;
        v_132 = true;
        v_137 = true;
        v_157 = true;
        v_144 = true;
        v_145 = true;
        v_146 = true;
      } else {
        d_St_Morning = false;
        v_122 = d_St_Morning;
        m_St_Morning = true;
        v_127 = m_St_Morning;
        a_St_Morning = false;
        v_132 = a_St_Morning;
        n_St_Morning = false;
        v_137 = n_St_Morning;
        nr_St_Morning = false;
        v_157 = nr_St_Morning;
        ns_St_Morning_1 = true;
        v_144 = ns_St_Morning_1;
        ns_St_Morning_2 = false;
        v_145 = ns_St_Morning_2;
        ns_St_Morning_3 = false;
        v_146 = ns_St_Morning_3;
        if (ns_St_Morning_1) {
          ns_St_Morning_2_1 = ns_St_Morning_2;
          if (ns_St_Morning_2_1) {
            ns_St_Morning_3_1_1 = ns_St_Morning_3;
          } else {
            ns_St_Morning_3_1_0 = ns_St_Morning_3;
          };
        } else {
          ns_St_Morning_2_0 = ns_St_Morning_2;
          if (ns_St_Morning_2_0) {
            ns_St_Morning_3_0_1 = ns_St_Morning_3;
          } else {
            ns_St_Morning_3_0_0 = ns_St_Morning_3;
          };
        };
      };
      v_123 = v_122;
      v_128 = v_127;
      v_133 = v_132;
      v_138 = v_137;
      v_150 = v_144;
      v_151 = v_145;
      v_152 = v_146;
      v_158 = v_157;
    };
    _out->d = v_123;
    _out->m = v_128;
    _out->a = v_133;
    _out->n = v_138;
    ns_1 = v_150;
    ns_2 = v_151;
    ns_3 = v_152;
    nr = v_158;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      ck_1_3_0_1 = ck_1_3;
      v_125 = true;
      v_130 = true;
      v_135 = true;
      v_140 = true;
      v_153 = true;
      v_154 = true;
      v_155 = true;
      v_160 = true;
    } else {
      ck_1_3_0_0 = ck_1_3;
      if (ck_1_3_0_0) {
        d_St_Night = false;
        v_124 = d_St_Night;
        m_St_Night = false;
        v_129 = m_St_Night;
        a_St_Night = false;
        v_134 = a_St_Night;
        n_St_Night = true;
        v_139 = n_St_Night;
        nr_St_Night = false;
        v_159 = nr_St_Night;
        ns_St_Night_1 = false;
        v_147 = ns_St_Night_1;
        ns_St_Night_2 = false;
        v_148 = ns_St_Night_2;
        ns_St_Night_3 = true;
        v_149 = ns_St_Night_3;
      } else {
        d_St_Start = false;
        m_St_Start = false;
        a_St_Start = false;
        n_St_Start = false;
        nr_St_Start = false;
        ns_St_Start_1 = false;
        ns_St_Start_2 = false;
        ns_St_Start_3 = false;
        v_124 = d_St_Start;
        v_129 = m_St_Start;
        v_134 = a_St_Start;
        v_139 = n_St_Start;
        v_159 = nr_St_Start;
        v_147 = ns_St_Start_1;
        v_148 = ns_St_Start_2;
        v_149 = ns_St_Start_3;
      };
      v_125 = v_124;
      v_130 = v_129;
      v_135 = v_134;
      v_140 = v_139;
      v_153 = v_147;
      v_154 = v_148;
      v_155 = v_149;
      v_160 = v_159;
    };
    _out->d = v_125;
    _out->m = v_130;
    _out->a = v_135;
    _out->n = v_140;
    ns_1 = v_153;
    ns_2 = v_154;
    ns_3 = v_155;
    nr = v_160;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
    if (ns_2_1) {
      ns_3_1_1 = ns_3;
    } else {
      ns_3_1_0 = ns_3;
    };
  } else {
    ns_2_0 = ns_2;
    if (ns_2_0) {
      ns_3_0_1 = ns_3;
    } else {
      ns_3_0_0 = ns_3;
    };
  };
  if (!(ck_1_1)) {
    if (!(ck_1_2_0)) {
      if (ck_1_3_0_0) {
        if (ns_St_Night_1) {
          ns_St_Night_2_1 = ns_St_Night_2;
          if (ns_St_Night_2_1) {
            ns_St_Night_3_1_1 = ns_St_Night_3;
          } else {
            ns_St_Night_3_1_0 = ns_St_Night_3;
          };
        } else {
          ns_St_Night_2_0 = ns_St_Night_2;
          if (ns_St_Night_2_0) {
            ns_St_Night_3_0_1 = ns_St_Night_3;
          } else {
            ns_St_Night_3_0_0 = ns_St_Night_3;
          };
        };
      } else {
        if (ns_St_Start_1) {
          ns_St_Start_2_1 = ns_St_Start_2;
          if (ns_St_Start_2_1) {
            ns_St_Start_3_1_1 = ns_St_Start_3;
          } else {
            ns_St_Start_3_1_0 = ns_St_Start_3;
          };
        } else {
          ns_St_Start_2_0 = ns_St_Start_2;
          if (ns_St_Start_2_0) {
            ns_St_Start_3_0_1 = ns_St_Start_3;
          } else {
            ns_St_Start_3_0_0 = ns_St_Start_3;
          };
        };
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
    if (s_2_1) {
      s_3_1_1 = s_3;
    } else {
      s_3_1_0 = s_3;
    };
  } else {
    s_2_0 = s_2;
    if (s_2_0) {
      s_3_0_1 = s_3;
    } else {
      s_3_0_0 = s_3;
    };
  };
  if (!(ck_1_4)) {
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        if (s_St_Night_1) {
          s_St_Night_2_1 = s_St_Night_2;
          if (s_St_Night_2_1) {
            s_St_Night_3_1_1 = s_St_Night_3;
          } else {
            s_St_Night_3_1_0 = s_St_Night_3;
          };
        } else {
          s_St_Night_2_0 = s_St_Night_2;
          if (s_St_Night_2_0) {
            s_St_Night_3_0_1 = s_St_Night_3;
          } else {
            s_St_Night_3_0_0 = s_St_Night_3;
          };
        };
      } else {
        if (s_St_Start_1) {
          s_St_Start_2_1 = s_St_Start_2;
          if (s_St_Start_2_1) {
            s_St_Start_3_1_1 = s_St_Start_3;
          } else {
            s_St_Start_3_1_0 = s_St_Start_3;
          };
        } else {
          s_St_Start_2_0 = s_St_Start_2;
          if (s_St_Start_2_0) {
            s_St_Start_3_0_1 = s_St_Start_3;
          } else {
            s_St_Start_3_0_0 = s_St_Start_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_161 = ns_1;
  self->v_162 = ns_2;
  self->v_163 = ns_3;;
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

void Greenhouse__greenhouse_reset(Greenhouse__greenhouse_mem* self) {
  self->pnr = false;
  self->v_224 = false;
  self->v_225 = false;
  self->v_226 = false;
  self->pnr_1 = false;
  self->ck_5_1 = true;
  self->pnr_2 = false;
  self->ck_1 = true;
}

void Greenhouse__greenhouse_step(int t_in, int time,
                                 Greenhouse__greenhouse_out* _out,
                                 Greenhouse__greenhouse_mem* self) {
  Greenhouse_controller__greenhouse_controller_out Greenhouse_controller__greenhouse_controller_out_st;
  
  int v_223;
  int v_222;
  int v_221;
  int v_220;
  int v_219;
  int v_218;
  int v_217;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int v_211;
  int v_210;
  int v_209;
  int v_208;
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int v_188;
  int v_187;
  int v_186;
  int v_185;
  int v_184;
  int ns_St_3_Night_2_0;
  int ns_St_3_Night_3_0_0;
  int ns_St_3_Night_3_0_1;
  int ns_St_3_Night_2_1;
  int ns_St_3_Night_3_1_0;
  int ns_St_3_Night_3_1_1;
  int ns_St_3_Afternoon_2_0;
  int ns_St_3_Afternoon_3_0_0;
  int ns_St_3_Afternoon_3_0_1;
  int ns_St_3_Afternoon_2_1;
  int ns_St_3_Afternoon_3_1_0;
  int ns_St_3_Afternoon_3_1_1;
  int ns_St_3_Morning_2_0;
  int ns_St_3_Morning_3_0_0;
  int ns_St_3_Morning_3_0_1;
  int ns_St_3_Morning_2_1;
  int ns_St_3_Morning_3_1_0;
  int ns_St_3_Morning_3_1_1;
  int ns_St_3_Dawn_2_0;
  int ns_St_3_Dawn_3_0_0;
  int ns_St_3_Dawn_3_0_1;
  int ns_St_3_Dawn_2_1;
  int ns_St_3_Dawn_3_1_0;
  int ns_St_3_Dawn_3_1_1;
  int ns_St_3_Start_2_0;
  int ns_St_3_Start_3_0_0;
  int ns_St_3_Start_3_0_1;
  int ns_St_3_Start_2_1;
  int ns_St_3_Start_3_1_0;
  int ns_St_3_Start_3_1_1;
  int ck_8_2_0;
  int ck_8_3_0_0;
  int ck_8_3_0_1;
  int ck_8_2_1;
  int ck_8_3_1_0;
  int ck_8_3_1_1;
  int nr_St_3_Night;
  int ns_St_3_Night_3;
  int ns_St_3_Night_2;
  int ns_St_3_Night_1;
  int n_1_St_3_Night;
  int a_1_St_3_Night;
  int m_1_St_3_Night;
  int d_1_St_3_Night;
  int nr_St_3_Afternoon;
  int ns_St_3_Afternoon_3;
  int ns_St_3_Afternoon_2;
  int ns_St_3_Afternoon_1;
  int n_1_St_3_Afternoon;
  int a_1_St_3_Afternoon;
  int m_1_St_3_Afternoon;
  int d_1_St_3_Afternoon;
  int nr_St_3_Morning;
  int ns_St_3_Morning_3;
  int ns_St_3_Morning_2;
  int ns_St_3_Morning_1;
  int n_1_St_3_Morning;
  int a_1_St_3_Morning;
  int m_1_St_3_Morning;
  int d_1_St_3_Morning;
  int nr_St_3_Dawn;
  int ns_St_3_Dawn_3;
  int ns_St_3_Dawn_2;
  int ns_St_3_Dawn_1;
  int n_1_St_3_Dawn;
  int a_1_St_3_Dawn;
  int m_1_St_3_Dawn;
  int d_1_St_3_Dawn;
  int nr_St_3_Start;
  int ns_St_3_Start_3;
  int ns_St_3_Start_2;
  int ns_St_3_Start_1;
  int n_1_St_3_Start;
  int a_1_St_3_Start;
  int m_1_St_3_Start;
  int d_1_St_3_Start;
  int ck_8_3;
  int ck_8_2;
  int ck_8_1;
  int v_119_2_0;
  int v_119_3_0_0;
  int v_119_3_0_1;
  int v_119_2_1;
  int v_119_3_1_0;
  int v_119_3_1_1;
  int v_117_2_0;
  int v_117_3_0_0;
  int v_117_3_0_1;
  int v_117_2_1;
  int v_117_3_1_0;
  int v_117_3_1_1;
  int v_115_2_0;
  int v_115_3_0_0;
  int v_115_3_0_1;
  int v_115_2_1;
  int v_115_3_1_0;
  int v_115_3_1_1;
  int v_120;
  int v_119_3;
  int v_119_2;
  int v_119_1;
  int v_118;
  int v_117_3;
  int v_117_2;
  int v_117_1;
  int v_116;
  int v_115_3;
  int v_115_2;
  int v_115_1;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int v_105_2_0;
  int v_105_3_0_0;
  int v_105_3_0_1;
  int v_105_2_1;
  int v_105_3_1_0;
  int v_105_3_1_1;
  int v_103_2_0;
  int v_103_3_0_0;
  int v_103_3_0_1;
  int v_103_2_1;
  int v_103_3_1_0;
  int v_103_3_1_1;
  int v_106;
  int v_105_3;
  int v_105_2;
  int v_105_1;
  int v_104;
  int v_103_3;
  int v_103_2;
  int v_103_1;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int v_96;
  int v_94_2_0;
  int v_94_3_0_0;
  int v_94_3_0_1;
  int v_94_2_1;
  int v_94_3_1_0;
  int v_94_3_1_1;
  int v_92_2_0;
  int v_92_3_0_0;
  int v_92_3_0_1;
  int v_92_2_1;
  int v_92_3_1_0;
  int v_92_3_1_1;
  int v_95;
  int v_94_3;
  int v_94_2;
  int v_94_1;
  int v_93;
  int v_92_3;
  int v_92_2;
  int v_92_1;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_85_2_0;
  int v_85_3_0_0;
  int v_85_3_0_1;
  int v_85_2_1;
  int v_85_3_1_0;
  int v_85_3_1_1;
  int v_83_2_0;
  int v_83_3_0_0;
  int v_83_3_0_1;
  int v_83_2_1;
  int v_83_3_1_0;
  int v_83_3_1_1;
  int v_86;
  int v_85_3;
  int v_85_2;
  int v_85_1;
  int v_84;
  int v_83_3;
  int v_83_2;
  int v_83_1;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_76_2_0;
  int v_76_3_0_0;
  int v_76_3_0_1;
  int v_76_2_1;
  int v_76_3_1_0;
  int v_76_3_1_1;
  int v_74_2_0;
  int v_74_3_0_0;
  int v_74_3_0_1;
  int v_74_2_1;
  int v_74_3_1_0;
  int v_74_3_1_1;
  int v_77;
  int v_76_3;
  int v_76_2;
  int v_76_1;
  int v_75;
  int v_74_3;
  int v_74_2;
  int v_74_1;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_246;
  int v_245;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
  int v_239;
  int v_238;
  int v_237;
  int v_236;
  int v_235;
  int v_234;
  int v_233;
  int v_232;
  int v_231;
  int v_230;
  int v_229;
  int v_228;
  int v_227;
  int s_St_3_Night_2_0;
  int s_St_3_Night_3_0_0;
  int s_St_3_Night_3_0_1;
  int s_St_3_Night_2_1;
  int s_St_3_Night_3_1_0;
  int s_St_3_Night_3_1_1;
  int s_St_3_Afternoon_2_0;
  int s_St_3_Afternoon_3_0_0;
  int s_St_3_Afternoon_3_0_1;
  int s_St_3_Afternoon_2_1;
  int s_St_3_Afternoon_3_1_0;
  int s_St_3_Afternoon_3_1_1;
  int s_St_3_Morning_2_0;
  int s_St_3_Morning_3_0_0;
  int s_St_3_Morning_3_0_1;
  int s_St_3_Morning_2_1;
  int s_St_3_Morning_3_1_0;
  int s_St_3_Morning_3_1_1;
  int s_St_3_Dawn_2_0;
  int s_St_3_Dawn_3_0_0;
  int s_St_3_Dawn_3_0_1;
  int s_St_3_Dawn_2_1;
  int s_St_3_Dawn_3_1_0;
  int s_St_3_Dawn_3_1_1;
  int s_St_3_Start_2_0;
  int s_St_3_Start_3_0_0;
  int s_St_3_Start_3_0_1;
  int s_St_3_Start_2_1;
  int s_St_3_Start_3_1_0;
  int s_St_3_Start_3_1_1;
  int ck_7_2_0;
  int ck_7_3_0_0;
  int ck_7_3_0_1;
  int ck_7_2_1;
  int ck_7_3_1_0;
  int ck_7_3_1_1;
  int r_St_3_Night;
  int s_St_3_Night_3;
  int s_St_3_Night_2;
  int s_St_3_Night_1;
  int r_St_3_Afternoon;
  int s_St_3_Afternoon_3;
  int s_St_3_Afternoon_2;
  int s_St_3_Afternoon_1;
  int r_St_3_Morning;
  int s_St_3_Morning_3;
  int s_St_3_Morning_2;
  int s_St_3_Morning_1;
  int r_St_3_Dawn;
  int s_St_3_Dawn_3;
  int s_St_3_Dawn_2;
  int s_St_3_Dawn_1;
  int r_St_3_Start;
  int s_St_3_Start_3;
  int s_St_3_Start_2;
  int s_St_3_Start_1;
  int ck_7_3;
  int ck_7_2;
  int ck_7_1;
  int nr_1_St_4_On;
  int ns_1_St_4_On_1;
  int status_1_St_4_On;
  int nr_1_St_4_Off;
  int ns_1_St_4_Off_1;
  int status_1_St_4_Off;
  int ck_6_1;
  int v_66;
  int r_1_St_4_On;
  int s_1_St_4_On_1;
  int r_1_St_4_Off;
  int s_1_St_4_Off_1;
  int nr_2_St_5_On;
  int ns_2_St_5_On_1;
  int status_St_5_On;
  int nr_2_St_5_Off;
  int ns_2_St_5_Off_1;
  int status_St_5_Off;
  int ck_4_1;
  int v_65;
  int r_2_St_5_On;
  int s_2_St_5_On_1;
  int r_2_St_5_Off;
  int s_2_St_5_Off_1;
  int s_2_2_0;
  int s_3_0_0;
  int s_3_0_1;
  int s_2_2_1;
  int s_3_1_0;
  int s_3_1_1;
  int ns_2_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_2_1;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_1_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_3;
  int s_2_2;
  int s_1_2;
  int ns_3;
  int ns_2_2;
  int ns_1_2;
  int r;
  int nr;
  int time_1;
  int d_1;
  int m_1;
  int a_1;
  int n_1;
  int c_1;
  int status_1;
  int c;
  int status;
  int t4;
  int t3;
  int t2;
  int t1;
  int both_on;
  int too_cold;
  int too_hot;
  int v;
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
  int c2;
  int c1;
  v_59 = (t_in>25);
  v_60 = (t_in<20);
  both_on = true;
  too_cold = true;
  too_hot = true;
  v_61 = (too_hot&&too_cold);
  v_62 = (v_61&&both_on);
  time_1 = time;
  ck_7_1 = self->v_224;
  ck_7_2 = self->v_225;
  ck_7_3 = self->v_226;
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      ck_7_3_1_1 = ck_7_3;
      if (ck_7_3_1_1) {
        v_82 = (time_1>=17);
        if (v_82) {
          v_84 = true;
          v_83_1 = false;
          v_83_2 = false;
          v_83_3 = true;
        } else {
          v_84 = self->pnr;
          v_83_1 = true;
          v_83_2 = true;
          v_83_3 = true;
        };
        v_80 = (time_1<12);
        v_79 = (time_1>=8);
        v_81 = (v_79&&v_80);
        if (v_81) {
          v_86 = true;
          v_85_1 = true;
          v_85_2 = false;
          v_85_3 = false;
        } else {
          v_86 = v_84;
          v_85_1 = v_83_1;
          v_85_2 = v_83_2;
          v_85_3 = v_83_3;
        };
        v_78 = (time_1<8);
        if (v_78) {
          r_St_3_Afternoon = true;
        } else {
          r_St_3_Afternoon = v_86;
        };
        v_242 = r_St_3_Afternoon;
        if (v_78) {
          s_St_3_Afternoon_1 = true;
        } else {
          s_St_3_Afternoon_1 = v_85_1;
        };
        v_227 = s_St_3_Afternoon_1;
        if (v_78) {
          s_St_3_Afternoon_2 = true;
        } else {
          s_St_3_Afternoon_2 = v_85_2;
        };
        v_228 = s_St_3_Afternoon_2;
        if (v_78) {
          s_St_3_Afternoon_3 = false;
        } else {
          s_St_3_Afternoon_3 = v_85_3;
        };
        v_229 = s_St_3_Afternoon_3;
      } else {
        v_102 = (time_1>=17);
        if (v_102) {
          v_104 = true;
          v_103_1 = false;
          v_103_2 = false;
          v_103_3 = true;
        } else {
          v_104 = self->pnr;
          v_103_1 = true;
          v_103_2 = true;
          v_103_3 = false;
        };
        v_100 = (time_1<17);
        v_99 = (time_1>=12);
        v_101 = (v_99&&v_100);
        if (v_101) {
          v_106 = true;
          v_105_1 = true;
          v_105_2 = true;
          v_105_3 = true;
        } else {
          v_106 = v_104;
          v_105_1 = v_103_1;
          v_105_2 = v_103_2;
          v_105_3 = v_103_3;
        };
        v_97 = (time_1<12);
        v_96 = (time_1>=8);
        v_98 = (v_96&&v_97);
        if (v_98) {
          r_St_3_Dawn = true;
          s_St_3_Dawn_1 = true;
          s_St_3_Dawn_2 = false;
          s_St_3_Dawn_3 = false;
        } else {
          r_St_3_Dawn = v_106;
          s_St_3_Dawn_1 = v_105_1;
          s_St_3_Dawn_2 = v_105_2;
          s_St_3_Dawn_3 = v_105_3;
        };
        v_242 = r_St_3_Dawn;
        v_227 = s_St_3_Dawn_1;
        v_228 = s_St_3_Dawn_2;
        v_229 = s_St_3_Dawn_3;
        if (v_103_1) {
          v_103_2_1 = v_103_2;
          if (v_103_2_1) {
            v_103_3_1_1 = v_103_3;
          } else {
            v_103_3_1_0 = v_103_3;
          };
        } else {
          v_103_2_0 = v_103_2;
          if (v_103_2_0) {
            v_103_3_0_1 = v_103_3;
          } else {
            v_103_3_0_0 = v_103_3;
          };
        };
        if (v_105_1) {
          v_105_2_1 = v_105_2;
          if (v_105_2_1) {
            v_105_3_1_1 = v_105_3;
          } else {
            v_105_3_1_0 = v_105_3;
          };
        } else {
          v_105_2_0 = v_105_2;
          if (v_105_2_0) {
            v_105_3_0_1 = v_105_3;
          } else {
            v_105_3_0_0 = v_105_3;
          };
        };
      };
      v_236 = v_227;
      v_237 = v_228;
      v_238 = v_229;
      v_244 = v_242;
      if (ck_7_3_1_1) {
        if (v_83_1) {
          v_83_2_1 = v_83_2;
          if (v_83_2_1) {
            v_83_3_1_1 = v_83_3;
          } else {
            v_83_3_1_0 = v_83_3;
          };
        } else {
          v_83_2_0 = v_83_2;
          if (v_83_2_0) {
            v_83_3_0_1 = v_83_3;
          } else {
            v_83_3_0_0 = v_83_3;
          };
        };
        if (v_85_1) {
          v_85_2_1 = v_85_2;
          if (v_85_2_1) {
            v_85_3_1_1 = v_85_3;
          } else {
            v_85_3_1_0 = v_85_3;
          };
        } else {
          v_85_2_0 = v_85_2;
          if (v_85_2_0) {
            v_85_3_0_1 = v_85_3;
          } else {
            v_85_3_0_0 = v_85_3;
          };
        };
        if (s_St_3_Afternoon_1) {
          s_St_3_Afternoon_2_1 = s_St_3_Afternoon_2;
          if (s_St_3_Afternoon_2_1) {
            s_St_3_Afternoon_3_1_1 = s_St_3_Afternoon_3;
          } else {
            s_St_3_Afternoon_3_1_0 = s_St_3_Afternoon_3;
          };
        } else {
          s_St_3_Afternoon_2_0 = s_St_3_Afternoon_2;
          if (s_St_3_Afternoon_2_0) {
            s_St_3_Afternoon_3_0_1 = s_St_3_Afternoon_3;
          } else {
            s_St_3_Afternoon_3_0_0 = s_St_3_Afternoon_3;
          };
        };
      } else {
        if (s_St_3_Dawn_1) {
          s_St_3_Dawn_2_1 = s_St_3_Dawn_2;
          if (s_St_3_Dawn_2_1) {
            s_St_3_Dawn_3_1_1 = s_St_3_Dawn_3;
          } else {
            s_St_3_Dawn_3_1_0 = s_St_3_Dawn_3;
          };
        } else {
          s_St_3_Dawn_2_0 = s_St_3_Dawn_2;
          if (s_St_3_Dawn_2_0) {
            s_St_3_Dawn_3_0_1 = s_St_3_Dawn_3;
          } else {
            s_St_3_Dawn_3_0_0 = s_St_3_Dawn_3;
          };
        };
      };
    } else {
      ck_7_3_1_0 = ck_7_3;
      if (ck_7_3_1_0) {
        v_243 = true;
        v_230 = true;
        v_231 = true;
        v_232 = true;
      } else {
        v_91 = (time_1>=17);
        if (v_91) {
          v_93 = true;
          v_92_1 = false;
          v_92_2 = false;
          v_92_3 = true;
        } else {
          v_93 = self->pnr;
          v_92_1 = true;
          v_92_2 = false;
          v_92_3 = false;
        };
        v_89 = (time_1<17);
        v_88 = (time_1>=12);
        v_90 = (v_88&&v_89);
        if (v_90) {
          v_95 = true;
          v_94_1 = true;
          v_94_2 = true;
          v_94_3 = true;
        } else {
          v_95 = v_93;
          v_94_1 = v_92_1;
          v_94_2 = v_92_2;
          v_94_3 = v_92_3;
        };
        v_87 = (time_1<8);
        if (v_87) {
          r_St_3_Morning = true;
        } else {
          r_St_3_Morning = v_95;
        };
        v_243 = r_St_3_Morning;
        if (v_87) {
          s_St_3_Morning_1 = true;
        } else {
          s_St_3_Morning_1 = v_94_1;
        };
        v_230 = s_St_3_Morning_1;
        if (v_87) {
          s_St_3_Morning_2 = true;
        } else {
          s_St_3_Morning_2 = v_94_2;
        };
        v_231 = s_St_3_Morning_2;
        if (v_87) {
          s_St_3_Morning_3 = false;
        } else {
          s_St_3_Morning_3 = v_94_3;
        };
        v_232 = s_St_3_Morning_3;
        if (v_92_1) {
          v_92_2_1 = v_92_2;
          if (v_92_2_1) {
            v_92_3_1_1 = v_92_3;
          } else {
            v_92_3_1_0 = v_92_3;
          };
        } else {
          v_92_2_0 = v_92_2;
          if (v_92_2_0) {
            v_92_3_0_1 = v_92_3;
          } else {
            v_92_3_0_0 = v_92_3;
          };
        };
        if (v_94_1) {
          v_94_2_1 = v_94_2;
          if (v_94_2_1) {
            v_94_3_1_1 = v_94_3;
          } else {
            v_94_3_1_0 = v_94_3;
          };
        } else {
          v_94_2_0 = v_94_2;
          if (v_94_2_0) {
            v_94_3_0_1 = v_94_3;
          } else {
            v_94_3_0_0 = v_94_3;
          };
        };
        if (s_St_3_Morning_1) {
          s_St_3_Morning_2_1 = s_St_3_Morning_2;
          if (s_St_3_Morning_2_1) {
            s_St_3_Morning_3_1_1 = s_St_3_Morning_3;
          } else {
            s_St_3_Morning_3_1_0 = s_St_3_Morning_3;
          };
        } else {
          s_St_3_Morning_2_0 = s_St_3_Morning_2;
          if (s_St_3_Morning_2_0) {
            s_St_3_Morning_3_0_1 = s_St_3_Morning_3;
          } else {
            s_St_3_Morning_3_0_0 = s_St_3_Morning_3;
          };
        };
      };
      v_236 = v_230;
      v_237 = v_231;
      v_238 = v_232;
      v_244 = v_243;
    };
    s_1_2 = v_236;
    s_2_2 = v_237;
    s_3 = v_238;
    r = v_244;
  } else {
    ck_7_2_0 = ck_7_2;
    if (ck_7_2_0) {
      ck_7_3_0_1 = ck_7_3;
      v_239 = true;
      v_240 = true;
      v_241 = true;
      v_246 = true;
    } else {
      ck_7_3_0_0 = ck_7_3;
      if (ck_7_3_0_0) {
        v_72 = (time_1<17);
        v_71 = (time_1>=12);
        v_73 = (v_71&&v_72);
        if (v_73) {
          v_75 = true;
          v_74_1 = true;
          v_74_2 = true;
          v_74_3 = true;
        } else {
          v_75 = self->pnr;
          v_74_1 = false;
          v_74_2 = false;
          v_74_3 = true;
        };
        v_69 = (time_1<12);
        v_68 = (time_1>=8);
        v_70 = (v_68&&v_69);
        if (v_70) {
          v_77 = true;
          v_76_1 = true;
          v_76_2 = false;
          v_76_3 = false;
        } else {
          v_77 = v_75;
          v_76_1 = v_74_1;
          v_76_2 = v_74_2;
          v_76_3 = v_74_3;
        };
        v_67 = (time_1<8);
        if (v_67) {
          r_St_3_Night = true;
        } else {
          r_St_3_Night = v_77;
        };
        v_245 = r_St_3_Night;
        if (v_67) {
          s_St_3_Night_1 = true;
        } else {
          s_St_3_Night_1 = v_76_1;
        };
        v_233 = s_St_3_Night_1;
        if (v_67) {
          s_St_3_Night_2 = true;
        } else {
          s_St_3_Night_2 = v_76_2;
        };
        v_234 = s_St_3_Night_2;
        if (v_67) {
          s_St_3_Night_3 = false;
        } else {
          s_St_3_Night_3 = v_76_3;
        };
        v_235 = s_St_3_Night_3;
        if (v_74_1) {
          v_74_2_1 = v_74_2;
          if (v_74_2_1) {
            v_74_3_1_1 = v_74_3;
          } else {
            v_74_3_1_0 = v_74_3;
          };
        } else {
          v_74_2_0 = v_74_2;
          if (v_74_2_0) {
            v_74_3_0_1 = v_74_3;
          } else {
            v_74_3_0_0 = v_74_3;
          };
        };
        if (v_76_1) {
          v_76_2_1 = v_76_2;
          if (v_76_2_1) {
            v_76_3_1_1 = v_76_3;
          } else {
            v_76_3_1_0 = v_76_3;
          };
        } else {
          v_76_2_0 = v_76_2;
          if (v_76_2_0) {
            v_76_3_0_1 = v_76_3;
          } else {
            v_76_3_0_0 = v_76_3;
          };
        };
      } else {
        v_114 = (time_1>=17);
        if (v_114) {
          v_116 = true;
          v_115_1 = false;
          v_115_2 = false;
          v_115_3 = true;
        } else {
          v_116 = self->pnr;
          v_115_1 = false;
          v_115_2 = false;
          v_115_3 = false;
        };
        v_112 = (time_1<17);
        v_111 = (time_1>=12);
        v_113 = (v_111&&v_112);
        if (v_113) {
          v_118 = true;
          v_117_1 = true;
          v_117_2 = true;
          v_117_3 = true;
        } else {
          v_118 = v_116;
          v_117_1 = v_115_1;
          v_117_2 = v_115_2;
          v_117_3 = v_115_3;
        };
        v_109 = (time_1<12);
        v_108 = (time_1>=8);
        v_110 = (v_108&&v_109);
        if (v_110) {
          v_120 = true;
          v_119_1 = true;
          v_119_2 = false;
          v_119_3 = false;
        } else {
          v_120 = v_118;
          v_119_1 = v_117_1;
          v_119_2 = v_117_2;
          v_119_3 = v_117_3;
        };
        v_107 = (time_1<8);
        if (v_107) {
          r_St_3_Start = true;
          s_St_3_Start_1 = true;
          s_St_3_Start_2 = true;
          s_St_3_Start_3 = false;
        } else {
          r_St_3_Start = v_120;
          s_St_3_Start_1 = v_119_1;
          s_St_3_Start_2 = v_119_2;
          s_St_3_Start_3 = v_119_3;
        };
        v_245 = r_St_3_Start;
        v_233 = s_St_3_Start_1;
        v_234 = s_St_3_Start_2;
        v_235 = s_St_3_Start_3;
        if (v_115_1) {
          v_115_2_1 = v_115_2;
          if (v_115_2_1) {
            v_115_3_1_1 = v_115_3;
          } else {
            v_115_3_1_0 = v_115_3;
          };
        } else {
          v_115_2_0 = v_115_2;
          if (v_115_2_0) {
            v_115_3_0_1 = v_115_3;
          } else {
            v_115_3_0_0 = v_115_3;
          };
        };
        if (v_117_1) {
          v_117_2_1 = v_117_2;
          if (v_117_2_1) {
            v_117_3_1_1 = v_117_3;
          } else {
            v_117_3_1_0 = v_117_3;
          };
        } else {
          v_117_2_0 = v_117_2;
          if (v_117_2_0) {
            v_117_3_0_1 = v_117_3;
          } else {
            v_117_3_0_0 = v_117_3;
          };
        };
        if (v_119_1) {
          v_119_2_1 = v_119_2;
          if (v_119_2_1) {
            v_119_3_1_1 = v_119_3;
          } else {
            v_119_3_1_0 = v_119_3;
          };
        } else {
          v_119_2_0 = v_119_2;
          if (v_119_2_0) {
            v_119_3_0_1 = v_119_3;
          } else {
            v_119_3_0_0 = v_119_3;
          };
        };
      };
      v_239 = v_233;
      v_240 = v_234;
      v_241 = v_235;
      v_246 = v_245;
    };
    s_1_2 = v_239;
    s_2_2 = v_240;
    s_3 = v_241;
    r = v_246;
  };
  ck_8_1 = s_1_2;
  ck_8_2 = s_2_2;
  ck_8_3 = s_3;
  Greenhouse_controller__greenhouse_controller_step(v_67, v_68, v_69, v_71,
                                                    v_72, v_107, v_108,
                                                    v_109, v_111, v_112,
                                                    v_114, v_78, v_79, v_80,
                                                    v_82, v_96, v_97, v_99,
                                                    v_100, v_102, v_87, v_88,
                                                    v_89, v_91, v_60, v_59,
                                                    self->ck_1, self->pnr_2,
                                                    self->ck_5_1,
                                                    self->pnr_1, self->v_226,
                                                    self->v_225, self->v_224,
                                                    self->pnr, true, true,
                                                    &Greenhouse_controller__greenhouse_controller_out_st);
  c2 = Greenhouse_controller__greenhouse_controller_out_st.greenhouse_c2;
  c1 = Greenhouse_controller__greenhouse_controller_out_st.greenhouse_c1;
  c_1 = c2;
  c = c1;
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      ck_8_3_1_1 = ck_8_3;
      if (ck_8_3_1_1) {
        d_1_St_3_Afternoon = false;
        v_184 = d_1_St_3_Afternoon;
        m_1_St_3_Afternoon = false;
        v_189 = m_1_St_3_Afternoon;
        a_1_St_3_Afternoon = true;
        v_194 = a_1_St_3_Afternoon;
        n_1_St_3_Afternoon = false;
        v_199 = n_1_St_3_Afternoon;
        nr_St_3_Afternoon = false;
        v_219 = nr_St_3_Afternoon;
        ns_St_3_Afternoon_1 = true;
        v_204 = ns_St_3_Afternoon_1;
        ns_St_3_Afternoon_2 = true;
        v_205 = ns_St_3_Afternoon_2;
        ns_St_3_Afternoon_3 = true;
        v_206 = ns_St_3_Afternoon_3;
      } else {
        d_1_St_3_Dawn = true;
        m_1_St_3_Dawn = false;
        a_1_St_3_Dawn = false;
        n_1_St_3_Dawn = false;
        nr_St_3_Dawn = false;
        ns_St_3_Dawn_1 = true;
        ns_St_3_Dawn_2 = true;
        ns_St_3_Dawn_3 = false;
        v_184 = d_1_St_3_Dawn;
        v_189 = m_1_St_3_Dawn;
        v_194 = a_1_St_3_Dawn;
        v_199 = n_1_St_3_Dawn;
        v_219 = nr_St_3_Dawn;
        v_204 = ns_St_3_Dawn_1;
        v_205 = ns_St_3_Dawn_2;
        v_206 = ns_St_3_Dawn_3;
      };
      v_186 = v_184;
      v_191 = v_189;
      v_196 = v_194;
      v_201 = v_199;
      v_213 = v_204;
      v_214 = v_205;
      v_215 = v_206;
      v_221 = v_219;
      if (ck_8_3_1_1) {
        if (ns_St_3_Afternoon_1) {
          ns_St_3_Afternoon_2_1 = ns_St_3_Afternoon_2;
          if (ns_St_3_Afternoon_2_1) {
            ns_St_3_Afternoon_3_1_1 = ns_St_3_Afternoon_3;
          } else {
            ns_St_3_Afternoon_3_1_0 = ns_St_3_Afternoon_3;
          };
        } else {
          ns_St_3_Afternoon_2_0 = ns_St_3_Afternoon_2;
          if (ns_St_3_Afternoon_2_0) {
            ns_St_3_Afternoon_3_0_1 = ns_St_3_Afternoon_3;
          } else {
            ns_St_3_Afternoon_3_0_0 = ns_St_3_Afternoon_3;
          };
        };
      } else {
        if (ns_St_3_Dawn_1) {
          ns_St_3_Dawn_2_1 = ns_St_3_Dawn_2;
          if (ns_St_3_Dawn_2_1) {
            ns_St_3_Dawn_3_1_1 = ns_St_3_Dawn_3;
          } else {
            ns_St_3_Dawn_3_1_0 = ns_St_3_Dawn_3;
          };
        } else {
          ns_St_3_Dawn_2_0 = ns_St_3_Dawn_2;
          if (ns_St_3_Dawn_2_0) {
            ns_St_3_Dawn_3_0_1 = ns_St_3_Dawn_3;
          } else {
            ns_St_3_Dawn_3_0_0 = ns_St_3_Dawn_3;
          };
        };
      };
    } else {
      ck_8_3_1_0 = ck_8_3;
      if (ck_8_3_1_0) {
        v_185 = true;
        v_190 = true;
        v_195 = true;
        v_200 = true;
        v_220 = true;
        v_207 = true;
        v_208 = true;
        v_209 = true;
      } else {
        d_1_St_3_Morning = false;
        v_185 = d_1_St_3_Morning;
        m_1_St_3_Morning = true;
        v_190 = m_1_St_3_Morning;
        a_1_St_3_Morning = false;
        v_195 = a_1_St_3_Morning;
        n_1_St_3_Morning = false;
        v_200 = n_1_St_3_Morning;
        nr_St_3_Morning = false;
        v_220 = nr_St_3_Morning;
        ns_St_3_Morning_1 = true;
        v_207 = ns_St_3_Morning_1;
        ns_St_3_Morning_2 = false;
        v_208 = ns_St_3_Morning_2;
        ns_St_3_Morning_3 = false;
        v_209 = ns_St_3_Morning_3;
        if (ns_St_3_Morning_1) {
          ns_St_3_Morning_2_1 = ns_St_3_Morning_2;
          if (ns_St_3_Morning_2_1) {
            ns_St_3_Morning_3_1_1 = ns_St_3_Morning_3;
          } else {
            ns_St_3_Morning_3_1_0 = ns_St_3_Morning_3;
          };
        } else {
          ns_St_3_Morning_2_0 = ns_St_3_Morning_2;
          if (ns_St_3_Morning_2_0) {
            ns_St_3_Morning_3_0_1 = ns_St_3_Morning_3;
          } else {
            ns_St_3_Morning_3_0_0 = ns_St_3_Morning_3;
          };
        };
      };
      v_186 = v_185;
      v_191 = v_190;
      v_196 = v_195;
      v_201 = v_200;
      v_213 = v_207;
      v_214 = v_208;
      v_215 = v_209;
      v_221 = v_220;
    };
    d_1 = v_186;
    m_1 = v_191;
    a_1 = v_196;
    n_1 = v_201;
    ns_1_2 = v_213;
    ns_2_2 = v_214;
    ns_3 = v_215;
    nr = v_221;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      ck_8_3_0_1 = ck_8_3;
      v_188 = true;
      v_193 = true;
      v_198 = true;
      v_203 = true;
      v_216 = true;
      v_217 = true;
      v_218 = true;
      v_223 = true;
    } else {
      ck_8_3_0_0 = ck_8_3;
      if (ck_8_3_0_0) {
        d_1_St_3_Night = false;
        v_187 = d_1_St_3_Night;
        m_1_St_3_Night = false;
        v_192 = m_1_St_3_Night;
        a_1_St_3_Night = false;
        v_197 = a_1_St_3_Night;
        n_1_St_3_Night = true;
        v_202 = n_1_St_3_Night;
        nr_St_3_Night = false;
        v_222 = nr_St_3_Night;
        ns_St_3_Night_1 = false;
        v_210 = ns_St_3_Night_1;
        ns_St_3_Night_2 = false;
        v_211 = ns_St_3_Night_2;
        ns_St_3_Night_3 = true;
        v_212 = ns_St_3_Night_3;
      } else {
        d_1_St_3_Start = false;
        m_1_St_3_Start = false;
        a_1_St_3_Start = false;
        n_1_St_3_Start = false;
        nr_St_3_Start = false;
        ns_St_3_Start_1 = false;
        ns_St_3_Start_2 = false;
        ns_St_3_Start_3 = false;
        v_187 = d_1_St_3_Start;
        v_192 = m_1_St_3_Start;
        v_197 = a_1_St_3_Start;
        v_202 = n_1_St_3_Start;
        v_222 = nr_St_3_Start;
        v_210 = ns_St_3_Start_1;
        v_211 = ns_St_3_Start_2;
        v_212 = ns_St_3_Start_3;
      };
      v_188 = v_187;
      v_193 = v_192;
      v_198 = v_197;
      v_203 = v_202;
      v_216 = v_210;
      v_217 = v_211;
      v_218 = v_212;
      v_223 = v_222;
    };
    d_1 = v_188;
    m_1 = v_193;
    a_1 = v_198;
    n_1 = v_203;
    ns_1_2 = v_216;
    ns_2_2 = v_217;
    ns_3 = v_218;
    nr = v_223;
  };
  _out->n = n_1;
  _out->a = a_1;
  _out->m = m_1;
  _out->d = d_1;
  t2 = (_out->d&&v_59);
  v = !(t2);
  t1 = (_out->d&&v_60);
  v_56 = !(t1);
  if (ns_1_2) {
    ns_2_2_1 = ns_2_2;
    if (ns_2_2_1) {
      ns_3_1_1 = ns_3;
    } else {
      ns_3_1_0 = ns_3;
    };
  } else {
    ns_2_2_0 = ns_2_2;
    if (ns_2_2_0) {
      ns_3_0_1 = ns_3;
    } else {
      ns_3_0_0 = ns_3;
    };
  };
  if (!(ck_8_1)) {
    if (!(ck_8_2_0)) {
      if (ck_8_3_0_0) {
        if (ns_St_3_Night_1) {
          ns_St_3_Night_2_1 = ns_St_3_Night_2;
          if (ns_St_3_Night_2_1) {
            ns_St_3_Night_3_1_1 = ns_St_3_Night_3;
          } else {
            ns_St_3_Night_3_1_0 = ns_St_3_Night_3;
          };
        } else {
          ns_St_3_Night_2_0 = ns_St_3_Night_2;
          if (ns_St_3_Night_2_0) {
            ns_St_3_Night_3_0_1 = ns_St_3_Night_3;
          } else {
            ns_St_3_Night_3_0_0 = ns_St_3_Night_3;
          };
        };
      } else {
        if (ns_St_3_Start_1) {
          ns_St_3_Start_2_1 = ns_St_3_Start_2;
          if (ns_St_3_Start_2_1) {
            ns_St_3_Start_3_1_1 = ns_St_3_Start_3;
          } else {
            ns_St_3_Start_3_1_0 = ns_St_3_Start_3;
          };
        } else {
          ns_St_3_Start_2_0 = ns_St_3_Start_2;
          if (ns_St_3_Start_2_0) {
            ns_St_3_Start_3_0_1 = ns_St_3_Start_3;
          } else {
            ns_St_3_Start_3_0_0 = ns_St_3_Start_3;
          };
        };
      };
    };
  };
  if (s_1_2) {
    s_2_2_1 = s_2_2;
    if (s_2_2_1) {
      s_3_1_1 = s_3;
    } else {
      s_3_1_0 = s_3;
    };
  } else {
    s_2_2_0 = s_2_2;
    if (s_2_2_0) {
      s_3_0_1 = s_3;
    } else {
      s_3_0_0 = s_3;
    };
  };
  if (!(ck_7_1)) {
    if (!(ck_7_2_0)) {
      if (ck_7_3_0_0) {
        if (s_St_3_Night_1) {
          s_St_3_Night_2_1 = s_St_3_Night_2;
          if (s_St_3_Night_2_1) {
            s_St_3_Night_3_1_1 = s_St_3_Night_3;
          } else {
            s_St_3_Night_3_1_0 = s_St_3_Night_3;
          };
        } else {
          s_St_3_Night_2_0 = s_St_3_Night_2;
          if (s_St_3_Night_2_0) {
            s_St_3_Night_3_0_1 = s_St_3_Night_3;
          } else {
            s_St_3_Night_3_0_0 = s_St_3_Night_3;
          };
        };
      } else {
        if (s_St_3_Start_1) {
          s_St_3_Start_2_1 = s_St_3_Start_2;
          if (s_St_3_Start_2_1) {
            s_St_3_Start_3_1_1 = s_St_3_Start_3;
          } else {
            s_St_3_Start_3_1_0 = s_St_3_Start_3;
          };
        } else {
          s_St_3_Start_2_0 = s_St_3_Start_2;
          if (s_St_3_Start_2_0) {
            s_St_3_Start_3_0_1 = s_St_3_Start_3;
          } else {
            s_St_3_Start_3_0_0 = s_St_3_Start_3;
          };
        };
      };
    };
  };
  if (self->ck_5_1) {
    v_66 = !(c_1);
    if (v_66) {
      r_1_St_4_Off = true;
      s_1_St_4_Off_1 = false;
    } else {
      r_1_St_4_Off = self->pnr_1;
      s_1_St_4_Off_1 = true;
    };
    r_1 = r_1_St_4_Off;
    s_1_1 = s_1_St_4_Off_1;
  } else {
    if (c_1) {
      r_1_St_4_On = true;
    } else {
      r_1_St_4_On = self->pnr_1;
    };
    r_1 = r_1_St_4_On;
    if (c_1) {
      s_1_St_4_On_1 = true;
    } else {
      s_1_St_4_On_1 = false;
    };
    s_1_1 = s_1_St_4_On_1;
  };
  ck_6_1 = s_1_1;
  if (ck_6_1) {
    status_1_St_4_Off = false;
    nr_1_St_4_Off = false;
    ns_1_St_4_Off_1 = true;
    status_1 = status_1_St_4_Off;
    nr_1 = nr_1_St_4_Off;
    ns_1_1 = ns_1_St_4_Off_1;
  } else {
    status_1_St_4_On = true;
    status_1 = status_1_St_4_On;
    nr_1_St_4_On = false;
    nr_1 = nr_1_St_4_On;
    ns_1_St_4_On_1 = false;
    ns_1_1 = ns_1_St_4_On_1;
  };
  _out->cooling_on = status_1;
  v_57 = !(_out->cooling_on);
  if (self->ck_1) {
    v_65 = !(c);
    if (v_65) {
      r_2_St_5_Off = true;
      s_2_St_5_Off_1 = false;
    } else {
      r_2_St_5_Off = self->pnr_2;
      s_2_St_5_Off_1 = true;
    };
    r_2 = r_2_St_5_Off;
    s_2_1 = s_2_St_5_Off_1;
  } else {
    if (c) {
      r_2_St_5_On = true;
    } else {
      r_2_St_5_On = self->pnr_2;
    };
    r_2 = r_2_St_5_On;
    if (c) {
      s_2_St_5_On_1 = true;
    } else {
      s_2_St_5_On_1 = false;
    };
    s_2_1 = s_2_St_5_On_1;
  };
  ck_4_1 = s_2_1;
  if (ck_4_1) {
    status_St_5_Off = false;
    nr_2_St_5_Off = false;
    ns_2_St_5_Off_1 = true;
    status = status_St_5_Off;
    nr_2 = nr_2_St_5_Off;
    ns_2_1 = ns_2_St_5_Off_1;
  } else {
    status_St_5_On = true;
    status = status_St_5_On;
    nr_2_St_5_On = false;
    nr_2 = nr_2_St_5_On;
    ns_2_St_5_On_1 = false;
    ns_2_1 = ns_2_St_5_On_1;
  };
  _out->heating_on = status;
  v_54 = !(_out->heating_on);
  v_55 = (_out->cooling_on&&v_54);
  t4 = (v||v_55);
  v_58 = (_out->heating_on&&v_57);
  t3 = (v_56||v_58);
  v_63 = (v_62&&t3);
  v_64 = (v_63&&t4);
  self->pnr = nr;
  self->v_224 = ns_1_2;
  self->v_225 = ns_2_2;
  self->v_226 = ns_3;
  self->pnr_1 = nr_1;
  self->ck_5_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_1 = ns_2_1;;
}

