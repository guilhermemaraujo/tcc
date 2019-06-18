/* --- Generated the 18/6/2019 at 4:46 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s greenhouse greenhouse.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "greenhouse.h"

void Greenhouse__heating_reset(Greenhouse__heating_mem* self) {
  self->pnr = false;
  self->v_272 = false;
  self->v_273 = true;
  self->v_274 = true;
}

void Greenhouse__heating_step(int t_in, int time, int d, int c,
                              Greenhouse__heating_out* _out,
                              Greenhouse__heating_mem* self) {
  
  int v_271;
  int v_270;
  int v_269;
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int v_264;
  int v_263;
  int v_262;
  int v_261;
  int v_260;
  int v_259;
  int v_258;
  int v_257;
  int v_256;
  int v_255;
  int v_254;
  int v_253;
  int v_252;
  int v_251;
  int v_250;
  int v_249;
  int v_248;
  int v_247;
  int v_246;
  int v_245;
  int v_244;
  int v_243;
  int v_242;
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
  int ns_St_Default_2_0;
  int ns_St_Default_3_0_0;
  int ns_St_Default_3_0_1;
  int ns_St_Default_2_1;
  int ns_St_Default_3_1_0;
  int ns_St_Default_3_1_1;
  int ns_St_Idle_2_0;
  int ns_St_Idle_3_0_0;
  int ns_St_Idle_3_0_1;
  int ns_St_Idle_2_1;
  int ns_St_Idle_3_1_0;
  int ns_St_Idle_3_1_1;
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
  int heating_on_St_Night;
  int nr_St_Afternoon;
  int ns_St_Afternoon_3;
  int ns_St_Afternoon_2;
  int ns_St_Afternoon_1;
  int heating_on_St_Afternoon;
  int nr_St_Morning;
  int ns_St_Morning_3;
  int ns_St_Morning_2;
  int ns_St_Morning_1;
  int heating_on_St_Morning;
  int nr_St_Dawn;
  int ns_St_Dawn_3;
  int ns_St_Dawn_2;
  int ns_St_Dawn_1;
  int heating_on_St_Dawn;
  int nr_St_Default;
  int ns_St_Default_3;
  int ns_St_Default_2;
  int ns_St_Default_1;
  int heating_on_St_Default;
  int nr_St_Idle;
  int ns_St_Idle_3;
  int ns_St_Idle_2;
  int ns_St_Idle_1;
  int heating_on_St_Idle;
  int ck_1_3;
  int ck_1_2;
  int ck_1_1;
  int v_58_2_0;
  int v_58_3_0_0;
  int v_58_3_0_1;
  int v_58_2_1;
  int v_58_3_1_0;
  int v_58_3_1_1;
  int v_56_2_0;
  int v_56_3_0_0;
  int v_56_3_0_1;
  int v_56_2_1;
  int v_56_3_1_0;
  int v_56_3_1_1;
  int v_54_2_0;
  int v_54_3_0_0;
  int v_54_3_0_1;
  int v_54_2_1;
  int v_54_3_1_0;
  int v_54_3_1_1;
  int v_52_2_0;
  int v_52_3_0_0;
  int v_52_3_0_1;
  int v_52_2_1;
  int v_52_3_1_0;
  int v_52_3_1_1;
  int v_59;
  int v_58_3;
  int v_58_2;
  int v_58_1;
  int v_57;
  int v_56_3;
  int v_56_2;
  int v_56_1;
  int v_55;
  int v_54_3;
  int v_54_2;
  int v_54_1;
  int v_53;
  int v_52_3;
  int v_52_2;
  int v_52_1;
  int v_51;
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
  int v_32;
  int v_31;
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
  int v_13;
  int v_12;
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
  int v_298;
  int v_297;
  int v_296;
  int v_295;
  int v_294;
  int v_293;
  int v_292;
  int v_291;
  int v_290;
  int v_289;
  int v_288;
  int v_287;
  int v_286;
  int v_285;
  int v_284;
  int v_283;
  int v_282;
  int v_281;
  int v_280;
  int v_279;
  int v_278;
  int v_277;
  int v_276;
  int v_275;
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
  int s_St_Default_2_0;
  int s_St_Default_3_0_0;
  int s_St_Default_3_0_1;
  int s_St_Default_2_1;
  int s_St_Default_3_1_0;
  int s_St_Default_3_1_1;
  int s_St_Idle_2_0;
  int s_St_Idle_3_0_0;
  int s_St_Idle_3_0_1;
  int s_St_Idle_2_1;
  int s_St_Idle_3_1_0;
  int s_St_Idle_3_1_1;
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
  int r_St_Default;
  int s_St_Default_3;
  int s_St_Default_2;
  int s_St_Default_1;
  int r_St_Idle;
  int s_St_Idle_3;
  int s_St_Idle_2;
  int s_St_Idle_1;
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
  ck_1_4 = self->v_272;
  ck_2 = self->v_273;
  ck_3 = self->v_274;
  if (ck_1_4) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        v_7 = (time>=17);
        v_5 = (time<12);
        v_4 = (t_in>=10);
        v_6 = (v_4||v_5);
        v_8 = (v_6||v_7);
        v_9 = (v_8&&c);
        if (v_9) {
          r_St_Afternoon = true;
        } else {
          r_St_Afternoon = self->pnr;
        };
        v_293 = r_St_Afternoon;
        if (v_9) {
          s_St_Afternoon_1 = false;
        } else {
          s_St_Afternoon_1 = true;
        };
        v_275 = s_St_Afternoon_1;
        if (v_9) {
          s_St_Afternoon_2 = true;
        } else {
          s_St_Afternoon_2 = true;
        };
        v_276 = s_St_Afternoon_2;
        if (v_9) {
          s_St_Afternoon_3 = true;
        } else {
          s_St_Afternoon_3 = true;
        };
        v_277 = s_St_Afternoon_3;
      } else {
        v_17 = (time>=8);
        v_16 = (t_in>=20);
        v_18 = (v_16||v_17);
        v_19 = (v_18&&c);
        if (v_19) {
          r_St_Dawn = true;
          s_St_Dawn_1 = false;
          s_St_Dawn_2 = true;
          s_St_Dawn_3 = true;
        } else {
          r_St_Dawn = self->pnr;
          s_St_Dawn_1 = true;
          s_St_Dawn_2 = true;
          s_St_Dawn_3 = false;
        };
        v_293 = r_St_Dawn;
        v_275 = s_St_Dawn_1;
        v_276 = s_St_Dawn_2;
        v_277 = s_St_Dawn_3;
      };
      v_287 = v_275;
      v_288 = v_276;
      v_289 = v_277;
      v_295 = v_293;
      if (ck_3_1_1) {
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
        v_294 = true;
        v_278 = true;
        v_279 = true;
        v_280 = true;
      } else {
        v_20 = (t_in>=15);
        if (v_20) {
          r_St_Default = true;
        } else {
          r_St_Default = self->pnr;
        };
        v_294 = r_St_Default;
        if (v_20) {
          s_St_Default_1 = false;
        } else {
          s_St_Default_1 = true;
        };
        v_278 = s_St_Default_1;
        if (v_20) {
          s_St_Default_2 = true;
        } else {
          s_St_Default_2 = false;
        };
        v_279 = s_St_Default_2;
        if (v_20) {
          s_St_Default_3 = true;
        } else {
          s_St_Default_3 = false;
        };
        v_280 = s_St_Default_3;
        if (s_St_Default_1) {
          s_St_Default_2_1 = s_St_Default_2;
          if (s_St_Default_2_1) {
            s_St_Default_3_1_1 = s_St_Default_3;
          } else {
            s_St_Default_3_1_0 = s_St_Default_3;
          };
        } else {
          s_St_Default_2_0 = s_St_Default_2;
          if (s_St_Default_2_0) {
            s_St_Default_3_0_1 = s_St_Default_3;
          } else {
            s_St_Default_3_0_0 = s_St_Default_3;
          };
        };
      };
      v_287 = v_278;
      v_288 = v_279;
      v_289 = v_280;
      v_295 = v_294;
    };
    s_1 = v_287;
    s_2 = v_288;
    s_3 = v_289;
    r = v_295;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        v_49 = !(d);
        v_47 = (t_in<25);
        v_46 = (time>=17);
        v_48 = (v_46&&v_47);
        v_50 = (v_48&&v_49);
        v_51 = (v_50&&c);
        if (v_51) {
          v_53 = true;
          v_52_1 = false;
          v_52_2 = false;
          v_52_3 = false;
        } else {
          v_53 = self->pnr;
          v_52_1 = false;
          v_52_2 = true;
          v_52_3 = true;
        };
        v_43 = !(d);
        v_41 = (t_in<10);
        v_39 = (time<17);
        v_38 = (time>=12);
        v_40 = (v_38&&v_39);
        v_42 = (v_40&&v_41);
        v_44 = (v_42&&v_43);
        v_45 = (v_44&&c);
        if (v_45) {
          v_55 = true;
          v_54_1 = true;
          v_54_2 = true;
          v_54_3 = true;
        } else {
          v_55 = v_53;
          v_54_1 = v_52_1;
          v_54_2 = v_52_2;
          v_54_3 = v_52_3;
        };
        v_35 = !(d);
        v_33 = (t_in<15);
        v_31 = (time<12);
        v_30 = (time>=8);
        v_32 = (v_30&&v_31);
        v_34 = (v_32&&v_33);
        v_36 = (v_34&&v_35);
        v_37 = (v_36&&c);
        if (v_37) {
          v_57 = true;
          v_56_1 = false;
          v_56_2 = true;
          v_56_3 = false;
        } else {
          v_57 = v_55;
          v_56_1 = v_54_1;
          v_56_2 = v_54_2;
          v_56_3 = v_54_3;
        };
        v_27 = !(d);
        v_25 = (t_in<20);
        v_24 = (time<8);
        v_26 = (v_24&&v_25);
        v_28 = (v_26&&v_27);
        v_29 = (v_28&&c);
        if (v_29) {
          v_59 = true;
          v_58_1 = true;
          v_58_2 = true;
          v_58_3 = false;
        } else {
          v_59 = v_57;
          v_58_1 = v_56_1;
          v_58_2 = v_56_2;
          v_58_3 = v_56_3;
        };
        v_21 = (t_in<15);
        v_22 = (v_21&&d);
        v_23 = (v_22&&c);
        if (v_23) {
          r_St_Idle = true;
          s_St_Idle_1 = true;
          s_St_Idle_2 = false;
          s_St_Idle_3 = false;
        } else {
          r_St_Idle = v_59;
          s_St_Idle_1 = v_58_1;
          s_St_Idle_2 = v_58_2;
          s_St_Idle_3 = v_58_3;
        };
        v_296 = r_St_Idle;
        v_281 = s_St_Idle_1;
        v_282 = s_St_Idle_2;
        v_283 = s_St_Idle_3;
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
        if (v_54_1) {
          v_54_2_1 = v_54_2;
          if (v_54_2_1) {
            v_54_3_1_1 = v_54_3;
          } else {
            v_54_3_1_0 = v_54_3;
          };
        } else {
          v_54_2_0 = v_54_2;
          if (v_54_2_0) {
            v_54_3_0_1 = v_54_3;
          } else {
            v_54_3_0_0 = v_54_3;
          };
        };
        if (v_56_1) {
          v_56_2_1 = v_56_2;
          if (v_56_2_1) {
            v_56_3_1_1 = v_56_3;
          } else {
            v_56_3_1_0 = v_56_3;
          };
        } else {
          v_56_2_0 = v_56_2;
          if (v_56_2_0) {
            v_56_3_0_1 = v_56_3;
          } else {
            v_56_3_0_0 = v_56_3;
          };
        };
        if (v_58_1) {
          v_58_2_1 = v_58_2;
          if (v_58_2_1) {
            v_58_3_1_1 = v_58_3;
          } else {
            v_58_3_1_0 = v_58_3;
          };
        } else {
          v_58_2_0 = v_58_2;
          if (v_58_2_0) {
            v_58_3_0_1 = v_58_3;
          } else {
            v_58_3_0_0 = v_58_3;
          };
        };
        if (s_St_Idle_1) {
          s_St_Idle_2_1 = s_St_Idle_2;
          if (s_St_Idle_2_1) {
            s_St_Idle_3_1_1 = s_St_Idle_3;
          } else {
            s_St_Idle_3_1_0 = s_St_Idle_3;
          };
        } else {
          s_St_Idle_2_0 = s_St_Idle_2;
          if (s_St_Idle_2_0) {
            s_St_Idle_3_0_1 = s_St_Idle_3;
          } else {
            s_St_Idle_3_0_0 = s_St_Idle_3;
          };
        };
      } else {
        v_13 = (time>=12);
        v_11 = (time<8);
        v_10 = (t_in>=15);
        v_12 = (v_10||v_11);
        v_14 = (v_12||v_13);
        v_15 = (v_14&&c);
        if (v_15) {
          r_St_Morning = true;
        } else {
          r_St_Morning = self->pnr;
        };
        v_296 = r_St_Morning;
        if (v_15) {
          s_St_Morning_1 = false;
        } else {
          s_St_Morning_1 = false;
        };
        v_281 = s_St_Morning_1;
        if (v_15) {
          s_St_Morning_2 = true;
        } else {
          s_St_Morning_2 = true;
        };
        v_282 = s_St_Morning_2;
        if (v_15) {
          s_St_Morning_3 = true;
        } else {
          s_St_Morning_3 = false;
        };
        v_283 = s_St_Morning_3;
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
      v_290 = v_281;
      v_291 = v_282;
      v_292 = v_283;
      v_298 = v_296;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_297 = true;
        v_284 = true;
        v_285 = true;
        v_286 = true;
      } else {
        v_1 = (time<17);
        v = (t_in>=25);
        v_2 = (v||v_1);
        v_3 = (v_2&&c);
        if (v_3) {
          r_St_Night = true;
        } else {
          r_St_Night = self->pnr;
        };
        v_297 = r_St_Night;
        if (v_3) {
          s_St_Night_1 = false;
        } else {
          s_St_Night_1 = false;
        };
        v_284 = s_St_Night_1;
        if (v_3) {
          s_St_Night_2 = true;
        } else {
          s_St_Night_2 = false;
        };
        v_285 = s_St_Night_2;
        if (v_3) {
          s_St_Night_3 = true;
        } else {
          s_St_Night_3 = false;
        };
        v_286 = s_St_Night_3;
      };
      v_290 = v_284;
      v_291 = v_285;
      v_292 = v_286;
      v_298 = v_297;
    };
    s_1 = v_290;
    s_2 = v_291;
    s_3 = v_292;
    r = v_298;
  };
  ck_1_1 = s_1;
  ck_1_2 = s_2;
  ck_1_3 = s_3;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      ck_1_3_1_1 = ck_1_3;
      if (ck_1_3_1_1) {
        heating_on_St_Afternoon = true;
        v_242 = heating_on_St_Afternoon;
        nr_St_Afternoon = false;
        v_266 = nr_St_Afternoon;
        ns_St_Afternoon_1 = true;
        v_248 = ns_St_Afternoon_1;
        ns_St_Afternoon_2 = true;
        v_249 = ns_St_Afternoon_2;
        ns_St_Afternoon_3 = true;
        v_250 = ns_St_Afternoon_3;
      } else {
        heating_on_St_Dawn = true;
        nr_St_Dawn = false;
        ns_St_Dawn_1 = true;
        ns_St_Dawn_2 = true;
        ns_St_Dawn_3 = false;
        v_242 = heating_on_St_Dawn;
        v_266 = nr_St_Dawn;
        v_248 = ns_St_Dawn_1;
        v_249 = ns_St_Dawn_2;
        v_250 = ns_St_Dawn_3;
      };
      v_244 = v_242;
      v_260 = v_248;
      v_261 = v_249;
      v_262 = v_250;
      v_268 = v_266;
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
        v_243 = true;
        v_267 = true;
        v_251 = true;
        v_252 = true;
        v_253 = true;
      } else {
        heating_on_St_Default = true;
        v_243 = heating_on_St_Default;
        nr_St_Default = false;
        v_267 = nr_St_Default;
        ns_St_Default_1 = true;
        v_251 = ns_St_Default_1;
        ns_St_Default_2 = false;
        v_252 = ns_St_Default_2;
        ns_St_Default_3 = false;
        v_253 = ns_St_Default_3;
        if (ns_St_Default_1) {
          ns_St_Default_2_1 = ns_St_Default_2;
          if (ns_St_Default_2_1) {
            ns_St_Default_3_1_1 = ns_St_Default_3;
          } else {
            ns_St_Default_3_1_0 = ns_St_Default_3;
          };
        } else {
          ns_St_Default_2_0 = ns_St_Default_2;
          if (ns_St_Default_2_0) {
            ns_St_Default_3_0_1 = ns_St_Default_3;
          } else {
            ns_St_Default_3_0_0 = ns_St_Default_3;
          };
        };
      };
      v_244 = v_243;
      v_260 = v_251;
      v_261 = v_252;
      v_262 = v_253;
      v_268 = v_267;
    };
    _out->heating_on = v_244;
    ns_1 = v_260;
    ns_2 = v_261;
    ns_3 = v_262;
    nr = v_268;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      ck_1_3_0_1 = ck_1_3;
      if (ck_1_3_0_1) {
        heating_on_St_Idle = false;
        nr_St_Idle = false;
        ns_St_Idle_1 = false;
        ns_St_Idle_2 = true;
        ns_St_Idle_3 = true;
        v_245 = heating_on_St_Idle;
        v_269 = nr_St_Idle;
        v_254 = ns_St_Idle_1;
        v_255 = ns_St_Idle_2;
        v_256 = ns_St_Idle_3;
        if (ns_St_Idle_1) {
          ns_St_Idle_2_1 = ns_St_Idle_2;
          if (ns_St_Idle_2_1) {
            ns_St_Idle_3_1_1 = ns_St_Idle_3;
          } else {
            ns_St_Idle_3_1_0 = ns_St_Idle_3;
          };
        } else {
          ns_St_Idle_2_0 = ns_St_Idle_2;
          if (ns_St_Idle_2_0) {
            ns_St_Idle_3_0_1 = ns_St_Idle_3;
          } else {
            ns_St_Idle_3_0_0 = ns_St_Idle_3;
          };
        };
      } else {
        heating_on_St_Morning = true;
        v_245 = heating_on_St_Morning;
        nr_St_Morning = false;
        v_269 = nr_St_Morning;
        ns_St_Morning_1 = false;
        v_254 = ns_St_Morning_1;
        ns_St_Morning_2 = true;
        v_255 = ns_St_Morning_2;
        ns_St_Morning_3 = false;
        v_256 = ns_St_Morning_3;
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
      v_247 = v_245;
      v_263 = v_254;
      v_264 = v_255;
      v_265 = v_256;
      v_271 = v_269;
    } else {
      ck_1_3_0_0 = ck_1_3;
      if (ck_1_3_0_0) {
        v_246 = true;
        v_270 = true;
        v_257 = true;
        v_258 = true;
        v_259 = true;
      } else {
        heating_on_St_Night = true;
        v_246 = heating_on_St_Night;
        nr_St_Night = false;
        v_270 = nr_St_Night;
        ns_St_Night_1 = false;
        v_257 = ns_St_Night_1;
        ns_St_Night_2 = false;
        v_258 = ns_St_Night_2;
        ns_St_Night_3 = false;
        v_259 = ns_St_Night_3;
      };
      v_247 = v_246;
      v_263 = v_257;
      v_264 = v_258;
      v_265 = v_259;
      v_271 = v_270;
    };
    _out->heating_on = v_247;
    ns_1 = v_263;
    ns_2 = v_264;
    ns_3 = v_265;
    nr = v_271;
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
      if (!(ck_1_3_0_0)) {
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
      if (!(ck_3_0_0)) {
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
      };
    };
  };
  self->pnr = nr;
  self->v_272 = ns_1;
  self->v_273 = ns_2;
  self->v_274 = ns_3;;
}

void Greenhouse__cooling_reset(Greenhouse__cooling_mem* self) {
  self->pnr = false;
  self->v_329 = false;
  self->v_330 = true;
  self->v_331 = true;
}

void Greenhouse__cooling_step(int t_in, int time, int d, int c,
                              Greenhouse__cooling_out* _out,
                              Greenhouse__cooling_mem* self) {
  
  int v_328;
  int v_327;
  int v_326;
  int v_325;
  int v_324;
  int v_323;
  int v_322;
  int v_321;
  int v_320;
  int v_319;
  int v_318;
  int v_317;
  int v_316;
  int v_315;
  int v_314;
  int v_313;
  int v_312;
  int v_311;
  int v_310;
  int v_309;
  int v_308;
  int v_307;
  int v_306;
  int v_305;
  int v_304;
  int v_303;
  int v_302;
  int v_301;
  int v_300;
  int v_299;
  int ns_St_1_Night_2_0;
  int ns_St_1_Night_3_0_0;
  int ns_St_1_Night_3_0_1;
  int ns_St_1_Night_2_1;
  int ns_St_1_Night_3_1_0;
  int ns_St_1_Night_3_1_1;
  int ns_St_1_Afternoon_2_0;
  int ns_St_1_Afternoon_3_0_0;
  int ns_St_1_Afternoon_3_0_1;
  int ns_St_1_Afternoon_2_1;
  int ns_St_1_Afternoon_3_1_0;
  int ns_St_1_Afternoon_3_1_1;
  int ns_St_1_Morning_2_0;
  int ns_St_1_Morning_3_0_0;
  int ns_St_1_Morning_3_0_1;
  int ns_St_1_Morning_2_1;
  int ns_St_1_Morning_3_1_0;
  int ns_St_1_Morning_3_1_1;
  int ns_St_1_Dawn_2_0;
  int ns_St_1_Dawn_3_0_0;
  int ns_St_1_Dawn_3_0_1;
  int ns_St_1_Dawn_2_1;
  int ns_St_1_Dawn_3_1_0;
  int ns_St_1_Dawn_3_1_1;
  int ns_St_1_Default_2_0;
  int ns_St_1_Default_3_0_0;
  int ns_St_1_Default_3_0_1;
  int ns_St_1_Default_2_1;
  int ns_St_1_Default_3_1_0;
  int ns_St_1_Default_3_1_1;
  int ns_St_1_Idle_2_0;
  int ns_St_1_Idle_3_0_0;
  int ns_St_1_Idle_3_0_1;
  int ns_St_1_Idle_2_1;
  int ns_St_1_Idle_3_1_0;
  int ns_St_1_Idle_3_1_1;
  int ck_2_2_0;
  int ck_2_3_0_0;
  int ck_2_3_0_1;
  int ck_2_2_1;
  int ck_2_3_1_0;
  int ck_2_3_1_1;
  int nr_St_1_Night;
  int ns_St_1_Night_3;
  int ns_St_1_Night_2;
  int ns_St_1_Night_1;
  int cooling_on_St_1_Night;
  int nr_St_1_Afternoon;
  int ns_St_1_Afternoon_3;
  int ns_St_1_Afternoon_2;
  int ns_St_1_Afternoon_1;
  int cooling_on_St_1_Afternoon;
  int nr_St_1_Morning;
  int ns_St_1_Morning_3;
  int ns_St_1_Morning_2;
  int ns_St_1_Morning_1;
  int cooling_on_St_1_Morning;
  int nr_St_1_Dawn;
  int ns_St_1_Dawn_3;
  int ns_St_1_Dawn_2;
  int ns_St_1_Dawn_1;
  int cooling_on_St_1_Dawn;
  int nr_St_1_Default;
  int ns_St_1_Default_3;
  int ns_St_1_Default_2;
  int ns_St_1_Default_1;
  int cooling_on_St_1_Default;
  int nr_St_1_Idle;
  int ns_St_1_Idle_3;
  int ns_St_1_Idle_2;
  int ns_St_1_Idle_1;
  int cooling_on_St_1_Idle;
  int ck_2_3;
  int ck_2_2;
  int ck_2_1;
  int v_118_2_0;
  int v_118_3_0_0;
  int v_118_3_0_1;
  int v_118_2_1;
  int v_118_3_1_0;
  int v_118_3_1_1;
  int v_116_2_0;
  int v_116_3_0_0;
  int v_116_3_0_1;
  int v_116_2_1;
  int v_116_3_1_0;
  int v_116_3_1_1;
  int v_114_2_0;
  int v_114_3_0_0;
  int v_114_3_0_1;
  int v_114_2_1;
  int v_114_3_1_0;
  int v_114_3_1_1;
  int v_112_2_0;
  int v_112_3_0_0;
  int v_112_3_0_1;
  int v_112_2_1;
  int v_112_3_1_0;
  int v_112_3_1_1;
  int v_119;
  int v_118_3;
  int v_118_2;
  int v_118_1;
  int v_117;
  int v_116_3;
  int v_116_2;
  int v_116_1;
  int v_115;
  int v_114_3;
  int v_114_2;
  int v_114_1;
  int v_113;
  int v_112_3;
  int v_112_2;
  int v_112_1;
  int v_111;
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
  int v_92;
  int v_91;
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
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v;
  int v_355;
  int v_354;
  int v_353;
  int v_352;
  int v_351;
  int v_350;
  int v_349;
  int v_348;
  int v_347;
  int v_346;
  int v_345;
  int v_344;
  int v_343;
  int v_342;
  int v_341;
  int v_340;
  int v_339;
  int v_338;
  int v_337;
  int v_336;
  int v_335;
  int v_334;
  int v_333;
  int v_332;
  int s_St_1_Night_2_0;
  int s_St_1_Night_3_0_0;
  int s_St_1_Night_3_0_1;
  int s_St_1_Night_2_1;
  int s_St_1_Night_3_1_0;
  int s_St_1_Night_3_1_1;
  int s_St_1_Afternoon_2_0;
  int s_St_1_Afternoon_3_0_0;
  int s_St_1_Afternoon_3_0_1;
  int s_St_1_Afternoon_2_1;
  int s_St_1_Afternoon_3_1_0;
  int s_St_1_Afternoon_3_1_1;
  int s_St_1_Morning_2_0;
  int s_St_1_Morning_3_0_0;
  int s_St_1_Morning_3_0_1;
  int s_St_1_Morning_2_1;
  int s_St_1_Morning_3_1_0;
  int s_St_1_Morning_3_1_1;
  int s_St_1_Dawn_2_0;
  int s_St_1_Dawn_3_0_0;
  int s_St_1_Dawn_3_0_1;
  int s_St_1_Dawn_2_1;
  int s_St_1_Dawn_3_1_0;
  int s_St_1_Dawn_3_1_1;
  int s_St_1_Default_2_0;
  int s_St_1_Default_3_0_0;
  int s_St_1_Default_3_0_1;
  int s_St_1_Default_2_1;
  int s_St_1_Default_3_1_0;
  int s_St_1_Default_3_1_1;
  int s_St_1_Idle_2_0;
  int s_St_1_Idle_3_0_0;
  int s_St_1_Idle_3_0_1;
  int s_St_1_Idle_2_1;
  int s_St_1_Idle_3_1_0;
  int s_St_1_Idle_3_1_1;
  int ck_2_4_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_4_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_1_Night;
  int s_St_1_Night_3;
  int s_St_1_Night_2;
  int s_St_1_Night_1;
  int r_St_1_Afternoon;
  int s_St_1_Afternoon_3;
  int s_St_1_Afternoon_2;
  int s_St_1_Afternoon_1;
  int r_St_1_Morning;
  int s_St_1_Morning_3;
  int s_St_1_Morning_2;
  int s_St_1_Morning_1;
  int r_St_1_Dawn;
  int s_St_1_Dawn_3;
  int s_St_1_Dawn_2;
  int s_St_1_Dawn_1;
  int r_St_1_Default;
  int s_St_1_Default_3;
  int s_St_1_Default_2;
  int s_St_1_Default_1;
  int r_St_1_Idle;
  int s_St_1_Idle_3;
  int s_St_1_Idle_2;
  int s_St_1_Idle_1;
  int ck_3;
  int ck_2_4;
  int ck_1;
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
  ck_1 = self->v_329;
  ck_2_4 = self->v_330;
  ck_3 = self->v_331;
  if (ck_1) {
    ck_2_4_1 = ck_2_4;
    if (ck_2_4_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        v_66 = (time>=17);
        v_64 = (time<12);
        v_63 = (t_in<=15);
        v_65 = (v_63||v_64);
        v_67 = (v_65||v_66);
        v_68 = (v_67&&c);
        if (v_68) {
          r_St_1_Afternoon = true;
        } else {
          r_St_1_Afternoon = self->pnr;
        };
        v_350 = r_St_1_Afternoon;
        if (v_68) {
          s_St_1_Afternoon_1 = false;
        } else {
          s_St_1_Afternoon_1 = true;
        };
        v_332 = s_St_1_Afternoon_1;
        if (v_68) {
          s_St_1_Afternoon_2 = true;
        } else {
          s_St_1_Afternoon_2 = true;
        };
        v_333 = s_St_1_Afternoon_2;
        if (v_68) {
          s_St_1_Afternoon_3 = true;
        } else {
          s_St_1_Afternoon_3 = true;
        };
        v_334 = s_St_1_Afternoon_3;
      } else {
        v_76 = (time>=8);
        v_75 = (t_in<=25);
        v_77 = (v_75||v_76);
        v_78 = (v_77&&c);
        if (v_78) {
          r_St_1_Dawn = true;
          s_St_1_Dawn_1 = false;
          s_St_1_Dawn_2 = true;
          s_St_1_Dawn_3 = true;
        } else {
          r_St_1_Dawn = self->pnr;
          s_St_1_Dawn_1 = true;
          s_St_1_Dawn_2 = true;
          s_St_1_Dawn_3 = false;
        };
        v_350 = r_St_1_Dawn;
        v_332 = s_St_1_Dawn_1;
        v_333 = s_St_1_Dawn_2;
        v_334 = s_St_1_Dawn_3;
      };
      v_344 = v_332;
      v_345 = v_333;
      v_346 = v_334;
      v_352 = v_350;
      if (ck_3_1_1) {
        if (s_St_1_Afternoon_1) {
          s_St_1_Afternoon_2_1 = s_St_1_Afternoon_2;
          if (s_St_1_Afternoon_2_1) {
            s_St_1_Afternoon_3_1_1 = s_St_1_Afternoon_3;
          } else {
            s_St_1_Afternoon_3_1_0 = s_St_1_Afternoon_3;
          };
        } else {
          s_St_1_Afternoon_2_0 = s_St_1_Afternoon_2;
          if (s_St_1_Afternoon_2_0) {
            s_St_1_Afternoon_3_0_1 = s_St_1_Afternoon_3;
          } else {
            s_St_1_Afternoon_3_0_0 = s_St_1_Afternoon_3;
          };
        };
      } else {
        if (s_St_1_Dawn_1) {
          s_St_1_Dawn_2_1 = s_St_1_Dawn_2;
          if (s_St_1_Dawn_2_1) {
            s_St_1_Dawn_3_1_1 = s_St_1_Dawn_3;
          } else {
            s_St_1_Dawn_3_1_0 = s_St_1_Dawn_3;
          };
        } else {
          s_St_1_Dawn_2_0 = s_St_1_Dawn_2;
          if (s_St_1_Dawn_2_0) {
            s_St_1_Dawn_3_0_1 = s_St_1_Dawn_3;
          } else {
            s_St_1_Dawn_3_0_0 = s_St_1_Dawn_3;
          };
        };
      };
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_351 = true;
        v_335 = true;
        v_336 = true;
        v_337 = true;
      } else {
        v_79 = (t_in<=25);
        v_80 = (v_79&&c);
        if (v_80) {
          r_St_1_Default = true;
        } else {
          r_St_1_Default = self->pnr;
        };
        v_351 = r_St_1_Default;
        if (v_80) {
          s_St_1_Default_1 = false;
        } else {
          s_St_1_Default_1 = true;
        };
        v_335 = s_St_1_Default_1;
        if (v_80) {
          s_St_1_Default_2 = true;
        } else {
          s_St_1_Default_2 = false;
        };
        v_336 = s_St_1_Default_2;
        if (v_80) {
          s_St_1_Default_3 = true;
        } else {
          s_St_1_Default_3 = false;
        };
        v_337 = s_St_1_Default_3;
        if (s_St_1_Default_1) {
          s_St_1_Default_2_1 = s_St_1_Default_2;
          if (s_St_1_Default_2_1) {
            s_St_1_Default_3_1_1 = s_St_1_Default_3;
          } else {
            s_St_1_Default_3_1_0 = s_St_1_Default_3;
          };
        } else {
          s_St_1_Default_2_0 = s_St_1_Default_2;
          if (s_St_1_Default_2_0) {
            s_St_1_Default_3_0_1 = s_St_1_Default_3;
          } else {
            s_St_1_Default_3_0_0 = s_St_1_Default_3;
          };
        };
      };
      v_344 = v_335;
      v_345 = v_336;
      v_346 = v_337;
      v_352 = v_351;
    };
    s_1 = v_344;
    s_2 = v_345;
    s_3 = v_346;
    r = v_352;
  } else {
    ck_2_4_0 = ck_2_4;
    if (ck_2_4_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        v_109 = !(d);
        v_107 = (t_in>30);
        v_106 = (time>=17);
        v_108 = (v_106&&v_107);
        v_110 = (v_108&&v_109);
        v_111 = (v_110&&c);
        if (v_111) {
          v_113 = true;
          v_112_1 = false;
          v_112_2 = false;
          v_112_3 = false;
        } else {
          v_113 = self->pnr;
          v_112_1 = false;
          v_112_2 = true;
          v_112_3 = true;
        };
        v_103 = !(d);
        v_101 = (t_in>15);
        v_99 = (time<17);
        v_98 = (time>=12);
        v_100 = (v_98&&v_99);
        v_102 = (v_100&&v_101);
        v_104 = (v_102&&v_103);
        v_105 = (v_104&&c);
        if (v_105) {
          v_115 = true;
          v_114_1 = true;
          v_114_2 = true;
          v_114_3 = true;
        } else {
          v_115 = v_113;
          v_114_1 = v_112_1;
          v_114_2 = v_112_2;
          v_114_3 = v_112_3;
        };
        v_95 = !(d);
        v_93 = (t_in>20);
        v_91 = (time<12);
        v_90 = (time>=8);
        v_92 = (v_90&&v_91);
        v_94 = (v_92&&v_93);
        v_96 = (v_94&&v_95);
        v_97 = (v_96&&c);
        if (v_97) {
          v_117 = true;
          v_116_1 = false;
          v_116_2 = true;
          v_116_3 = false;
        } else {
          v_117 = v_115;
          v_116_1 = v_114_1;
          v_116_2 = v_114_2;
          v_116_3 = v_114_3;
        };
        v_87 = !(d);
        v_85 = (t_in>25);
        v_84 = (time<8);
        v_86 = (v_84&&v_85);
        v_88 = (v_86&&v_87);
        v_89 = (v_88&&c);
        if (v_89) {
          v_119 = true;
          v_118_1 = true;
          v_118_2 = true;
          v_118_3 = false;
        } else {
          v_119 = v_117;
          v_118_1 = v_116_1;
          v_118_2 = v_116_2;
          v_118_3 = v_116_3;
        };
        v_81 = (t_in>25);
        v_82 = (v_81&&d);
        v_83 = (v_82&&c);
        if (v_83) {
          r_St_1_Idle = true;
          s_St_1_Idle_1 = true;
          s_St_1_Idle_2 = false;
          s_St_1_Idle_3 = false;
        } else {
          r_St_1_Idle = v_119;
          s_St_1_Idle_1 = v_118_1;
          s_St_1_Idle_2 = v_118_2;
          s_St_1_Idle_3 = v_118_3;
        };
        v_353 = r_St_1_Idle;
        v_338 = s_St_1_Idle_1;
        v_339 = s_St_1_Idle_2;
        v_340 = s_St_1_Idle_3;
        if (v_112_1) {
          v_112_2_1 = v_112_2;
          if (v_112_2_1) {
            v_112_3_1_1 = v_112_3;
          } else {
            v_112_3_1_0 = v_112_3;
          };
        } else {
          v_112_2_0 = v_112_2;
          if (v_112_2_0) {
            v_112_3_0_1 = v_112_3;
          } else {
            v_112_3_0_0 = v_112_3;
          };
        };
        if (v_114_1) {
          v_114_2_1 = v_114_2;
          if (v_114_2_1) {
            v_114_3_1_1 = v_114_3;
          } else {
            v_114_3_1_0 = v_114_3;
          };
        } else {
          v_114_2_0 = v_114_2;
          if (v_114_2_0) {
            v_114_3_0_1 = v_114_3;
          } else {
            v_114_3_0_0 = v_114_3;
          };
        };
        if (v_116_1) {
          v_116_2_1 = v_116_2;
          if (v_116_2_1) {
            v_116_3_1_1 = v_116_3;
          } else {
            v_116_3_1_0 = v_116_3;
          };
        } else {
          v_116_2_0 = v_116_2;
          if (v_116_2_0) {
            v_116_3_0_1 = v_116_3;
          } else {
            v_116_3_0_0 = v_116_3;
          };
        };
        if (v_118_1) {
          v_118_2_1 = v_118_2;
          if (v_118_2_1) {
            v_118_3_1_1 = v_118_3;
          } else {
            v_118_3_1_0 = v_118_3;
          };
        } else {
          v_118_2_0 = v_118_2;
          if (v_118_2_0) {
            v_118_3_0_1 = v_118_3;
          } else {
            v_118_3_0_0 = v_118_3;
          };
        };
        if (s_St_1_Idle_1) {
          s_St_1_Idle_2_1 = s_St_1_Idle_2;
          if (s_St_1_Idle_2_1) {
            s_St_1_Idle_3_1_1 = s_St_1_Idle_3;
          } else {
            s_St_1_Idle_3_1_0 = s_St_1_Idle_3;
          };
        } else {
          s_St_1_Idle_2_0 = s_St_1_Idle_2;
          if (s_St_1_Idle_2_0) {
            s_St_1_Idle_3_0_1 = s_St_1_Idle_3;
          } else {
            s_St_1_Idle_3_0_0 = s_St_1_Idle_3;
          };
        };
      } else {
        v_72 = (time>=12);
        v_70 = (time<8);
        v_69 = (t_in<=20);
        v_71 = (v_69||v_70);
        v_73 = (v_71||v_72);
        v_74 = (v_73&&c);
        if (v_74) {
          r_St_1_Morning = true;
        } else {
          r_St_1_Morning = self->pnr;
        };
        v_353 = r_St_1_Morning;
        if (v_74) {
          s_St_1_Morning_1 = false;
        } else {
          s_St_1_Morning_1 = false;
        };
        v_338 = s_St_1_Morning_1;
        if (v_74) {
          s_St_1_Morning_2 = true;
        } else {
          s_St_1_Morning_2 = true;
        };
        v_339 = s_St_1_Morning_2;
        if (v_74) {
          s_St_1_Morning_3 = true;
        } else {
          s_St_1_Morning_3 = false;
        };
        v_340 = s_St_1_Morning_3;
        if (s_St_1_Morning_1) {
          s_St_1_Morning_2_1 = s_St_1_Morning_2;
          if (s_St_1_Morning_2_1) {
            s_St_1_Morning_3_1_1 = s_St_1_Morning_3;
          } else {
            s_St_1_Morning_3_1_0 = s_St_1_Morning_3;
          };
        } else {
          s_St_1_Morning_2_0 = s_St_1_Morning_2;
          if (s_St_1_Morning_2_0) {
            s_St_1_Morning_3_0_1 = s_St_1_Morning_3;
          } else {
            s_St_1_Morning_3_0_0 = s_St_1_Morning_3;
          };
        };
      };
      v_347 = v_338;
      v_348 = v_339;
      v_349 = v_340;
      v_355 = v_353;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_354 = true;
        v_341 = true;
        v_342 = true;
        v_343 = true;
      } else {
        v_60 = (time<17);
        v = (t_in<=30);
        v_61 = (v||v_60);
        v_62 = (v_61&&c);
        if (v_62) {
          r_St_1_Night = true;
        } else {
          r_St_1_Night = self->pnr;
        };
        v_354 = r_St_1_Night;
        if (v_62) {
          s_St_1_Night_1 = false;
        } else {
          s_St_1_Night_1 = false;
        };
        v_341 = s_St_1_Night_1;
        if (v_62) {
          s_St_1_Night_2 = true;
        } else {
          s_St_1_Night_2 = false;
        };
        v_342 = s_St_1_Night_2;
        if (v_62) {
          s_St_1_Night_3 = true;
        } else {
          s_St_1_Night_3 = false;
        };
        v_343 = s_St_1_Night_3;
      };
      v_347 = v_341;
      v_348 = v_342;
      v_349 = v_343;
      v_355 = v_354;
    };
    s_1 = v_347;
    s_2 = v_348;
    s_3 = v_349;
    r = v_355;
  };
  ck_2_1 = s_1;
  ck_2_2 = s_2;
  ck_2_3 = s_3;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      ck_2_3_1_1 = ck_2_3;
      if (ck_2_3_1_1) {
        cooling_on_St_1_Afternoon = true;
        v_299 = cooling_on_St_1_Afternoon;
        nr_St_1_Afternoon = false;
        v_323 = nr_St_1_Afternoon;
        ns_St_1_Afternoon_1 = true;
        v_305 = ns_St_1_Afternoon_1;
        ns_St_1_Afternoon_2 = true;
        v_306 = ns_St_1_Afternoon_2;
        ns_St_1_Afternoon_3 = true;
        v_307 = ns_St_1_Afternoon_3;
      } else {
        cooling_on_St_1_Dawn = true;
        nr_St_1_Dawn = false;
        ns_St_1_Dawn_1 = true;
        ns_St_1_Dawn_2 = true;
        ns_St_1_Dawn_3 = false;
        v_299 = cooling_on_St_1_Dawn;
        v_323 = nr_St_1_Dawn;
        v_305 = ns_St_1_Dawn_1;
        v_306 = ns_St_1_Dawn_2;
        v_307 = ns_St_1_Dawn_3;
      };
      v_301 = v_299;
      v_317 = v_305;
      v_318 = v_306;
      v_319 = v_307;
      v_325 = v_323;
      if (ck_2_3_1_1) {
        if (ns_St_1_Afternoon_1) {
          ns_St_1_Afternoon_2_1 = ns_St_1_Afternoon_2;
          if (ns_St_1_Afternoon_2_1) {
            ns_St_1_Afternoon_3_1_1 = ns_St_1_Afternoon_3;
          } else {
            ns_St_1_Afternoon_3_1_0 = ns_St_1_Afternoon_3;
          };
        } else {
          ns_St_1_Afternoon_2_0 = ns_St_1_Afternoon_2;
          if (ns_St_1_Afternoon_2_0) {
            ns_St_1_Afternoon_3_0_1 = ns_St_1_Afternoon_3;
          } else {
            ns_St_1_Afternoon_3_0_0 = ns_St_1_Afternoon_3;
          };
        };
      } else {
        if (ns_St_1_Dawn_1) {
          ns_St_1_Dawn_2_1 = ns_St_1_Dawn_2;
          if (ns_St_1_Dawn_2_1) {
            ns_St_1_Dawn_3_1_1 = ns_St_1_Dawn_3;
          } else {
            ns_St_1_Dawn_3_1_0 = ns_St_1_Dawn_3;
          };
        } else {
          ns_St_1_Dawn_2_0 = ns_St_1_Dawn_2;
          if (ns_St_1_Dawn_2_0) {
            ns_St_1_Dawn_3_0_1 = ns_St_1_Dawn_3;
          } else {
            ns_St_1_Dawn_3_0_0 = ns_St_1_Dawn_3;
          };
        };
      };
    } else {
      ck_2_3_1_0 = ck_2_3;
      if (ck_2_3_1_0) {
        v_300 = true;
        v_324 = true;
        v_308 = true;
        v_309 = true;
        v_310 = true;
      } else {
        cooling_on_St_1_Default = true;
        v_300 = cooling_on_St_1_Default;
        nr_St_1_Default = false;
        v_324 = nr_St_1_Default;
        ns_St_1_Default_1 = true;
        v_308 = ns_St_1_Default_1;
        ns_St_1_Default_2 = false;
        v_309 = ns_St_1_Default_2;
        ns_St_1_Default_3 = false;
        v_310 = ns_St_1_Default_3;
        if (ns_St_1_Default_1) {
          ns_St_1_Default_2_1 = ns_St_1_Default_2;
          if (ns_St_1_Default_2_1) {
            ns_St_1_Default_3_1_1 = ns_St_1_Default_3;
          } else {
            ns_St_1_Default_3_1_0 = ns_St_1_Default_3;
          };
        } else {
          ns_St_1_Default_2_0 = ns_St_1_Default_2;
          if (ns_St_1_Default_2_0) {
            ns_St_1_Default_3_0_1 = ns_St_1_Default_3;
          } else {
            ns_St_1_Default_3_0_0 = ns_St_1_Default_3;
          };
        };
      };
      v_301 = v_300;
      v_317 = v_308;
      v_318 = v_309;
      v_319 = v_310;
      v_325 = v_324;
    };
    _out->cooling_on = v_301;
    ns_1 = v_317;
    ns_2 = v_318;
    ns_3 = v_319;
    nr = v_325;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      ck_2_3_0_1 = ck_2_3;
      if (ck_2_3_0_1) {
        cooling_on_St_1_Idle = false;
        nr_St_1_Idle = false;
        ns_St_1_Idle_1 = false;
        ns_St_1_Idle_2 = true;
        ns_St_1_Idle_3 = true;
        v_302 = cooling_on_St_1_Idle;
        v_326 = nr_St_1_Idle;
        v_311 = ns_St_1_Idle_1;
        v_312 = ns_St_1_Idle_2;
        v_313 = ns_St_1_Idle_3;
        if (ns_St_1_Idle_1) {
          ns_St_1_Idle_2_1 = ns_St_1_Idle_2;
          if (ns_St_1_Idle_2_1) {
            ns_St_1_Idle_3_1_1 = ns_St_1_Idle_3;
          } else {
            ns_St_1_Idle_3_1_0 = ns_St_1_Idle_3;
          };
        } else {
          ns_St_1_Idle_2_0 = ns_St_1_Idle_2;
          if (ns_St_1_Idle_2_0) {
            ns_St_1_Idle_3_0_1 = ns_St_1_Idle_3;
          } else {
            ns_St_1_Idle_3_0_0 = ns_St_1_Idle_3;
          };
        };
      } else {
        cooling_on_St_1_Morning = true;
        v_302 = cooling_on_St_1_Morning;
        nr_St_1_Morning = false;
        v_326 = nr_St_1_Morning;
        ns_St_1_Morning_1 = false;
        v_311 = ns_St_1_Morning_1;
        ns_St_1_Morning_2 = true;
        v_312 = ns_St_1_Morning_2;
        ns_St_1_Morning_3 = false;
        v_313 = ns_St_1_Morning_3;
        if (ns_St_1_Morning_1) {
          ns_St_1_Morning_2_1 = ns_St_1_Morning_2;
          if (ns_St_1_Morning_2_1) {
            ns_St_1_Morning_3_1_1 = ns_St_1_Morning_3;
          } else {
            ns_St_1_Morning_3_1_0 = ns_St_1_Morning_3;
          };
        } else {
          ns_St_1_Morning_2_0 = ns_St_1_Morning_2;
          if (ns_St_1_Morning_2_0) {
            ns_St_1_Morning_3_0_1 = ns_St_1_Morning_3;
          } else {
            ns_St_1_Morning_3_0_0 = ns_St_1_Morning_3;
          };
        };
      };
      v_304 = v_302;
      v_320 = v_311;
      v_321 = v_312;
      v_322 = v_313;
      v_328 = v_326;
    } else {
      ck_2_3_0_0 = ck_2_3;
      if (ck_2_3_0_0) {
        v_303 = true;
        v_327 = true;
        v_314 = true;
        v_315 = true;
        v_316 = true;
      } else {
        cooling_on_St_1_Night = true;
        v_303 = cooling_on_St_1_Night;
        nr_St_1_Night = false;
        v_327 = nr_St_1_Night;
        ns_St_1_Night_1 = false;
        v_314 = ns_St_1_Night_1;
        ns_St_1_Night_2 = false;
        v_315 = ns_St_1_Night_2;
        ns_St_1_Night_3 = false;
        v_316 = ns_St_1_Night_3;
      };
      v_304 = v_303;
      v_320 = v_314;
      v_321 = v_315;
      v_322 = v_316;
      v_328 = v_327;
    };
    _out->cooling_on = v_304;
    ns_1 = v_320;
    ns_2 = v_321;
    ns_3 = v_322;
    nr = v_328;
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
  if (!(ck_2_1)) {
    if (!(ck_2_2_0)) {
      if (!(ck_2_3_0_0)) {
        if (ns_St_1_Night_1) {
          ns_St_1_Night_2_1 = ns_St_1_Night_2;
          if (ns_St_1_Night_2_1) {
            ns_St_1_Night_3_1_1 = ns_St_1_Night_3;
          } else {
            ns_St_1_Night_3_1_0 = ns_St_1_Night_3;
          };
        } else {
          ns_St_1_Night_2_0 = ns_St_1_Night_2;
          if (ns_St_1_Night_2_0) {
            ns_St_1_Night_3_0_1 = ns_St_1_Night_3;
          } else {
            ns_St_1_Night_3_0_0 = ns_St_1_Night_3;
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
  if (!(ck_1)) {
    if (!(ck_2_4_0)) {
      if (!(ck_3_0_0)) {
        if (s_St_1_Night_1) {
          s_St_1_Night_2_1 = s_St_1_Night_2;
          if (s_St_1_Night_2_1) {
            s_St_1_Night_3_1_1 = s_St_1_Night_3;
          } else {
            s_St_1_Night_3_1_0 = s_St_1_Night_3;
          };
        } else {
          s_St_1_Night_2_0 = s_St_1_Night_2;
          if (s_St_1_Night_2_0) {
            s_St_1_Night_3_0_1 = s_St_1_Night_3;
          } else {
            s_St_1_Night_3_0_0 = s_St_1_Night_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_329 = ns_1;
  self->v_330 = ns_2;
  self->v_331 = ns_3;;
}

void Greenhouse__greenhouse_reset(Greenhouse__greenhouse_mem* self) {
  self->pnr = false;
  self->v_386 = false;
  self->v_387 = true;
  self->v_388 = true;
  self->pnr_1 = false;
  self->v_443 = false;
  self->v_444 = true;
  self->v_445 = true;
}

void Greenhouse__greenhouse_step(int t_in, int time, int d,
                                 Greenhouse__greenhouse_out* _out,
                                 Greenhouse__greenhouse_mem* self) {
  Greenhouse_controller__greenhouse_controller_out Greenhouse_controller__greenhouse_controller_out_st;
  
  int v_385;
  int v_384;
  int v_383;
  int v_382;
  int v_381;
  int v_380;
  int v_379;
  int v_378;
  int v_377;
  int v_376;
  int v_375;
  int v_374;
  int v_373;
  int v_372;
  int v_371;
  int v_370;
  int v_369;
  int v_368;
  int v_367;
  int v_366;
  int v_365;
  int v_364;
  int v_363;
  int v_362;
  int v_361;
  int v_360;
  int v_359;
  int v_358;
  int v_357;
  int v_356;
  int ns_St_2_Night_2_0;
  int ns_St_2_Night_3_0_0;
  int ns_St_2_Night_3_0_1;
  int ns_St_2_Night_2_1;
  int ns_St_2_Night_3_1_0;
  int ns_St_2_Night_3_1_1;
  int ns_St_2_Afternoon_2_0;
  int ns_St_2_Afternoon_3_0_0;
  int ns_St_2_Afternoon_3_0_1;
  int ns_St_2_Afternoon_2_1;
  int ns_St_2_Afternoon_3_1_0;
  int ns_St_2_Afternoon_3_1_1;
  int ns_St_2_Morning_2_0;
  int ns_St_2_Morning_3_0_0;
  int ns_St_2_Morning_3_0_1;
  int ns_St_2_Morning_2_1;
  int ns_St_2_Morning_3_1_0;
  int ns_St_2_Morning_3_1_1;
  int ns_St_2_Dawn_2_0;
  int ns_St_2_Dawn_3_0_0;
  int ns_St_2_Dawn_3_0_1;
  int ns_St_2_Dawn_2_1;
  int ns_St_2_Dawn_3_1_0;
  int ns_St_2_Dawn_3_1_1;
  int ns_St_2_Default_2_0;
  int ns_St_2_Default_3_0_0;
  int ns_St_2_Default_3_0_1;
  int ns_St_2_Default_2_1;
  int ns_St_2_Default_3_1_0;
  int ns_St_2_Default_3_1_1;
  int ns_St_2_Idle_2_0;
  int ns_St_2_Idle_3_0_0;
  int ns_St_2_Idle_3_0_1;
  int ns_St_2_Idle_2_1;
  int ns_St_2_Idle_3_1_0;
  int ns_St_2_Idle_3_1_1;
  int ck_5_2_0;
  int ck_5_3_0_0;
  int ck_5_3_0_1;
  int ck_5_2_1;
  int ck_5_3_1_0;
  int ck_5_3_1_1;
  int nr_St_2_Night;
  int ns_St_2_Night_3;
  int ns_St_2_Night_2;
  int ns_St_2_Night_1;
  int heating_on_1_St_2_Night;
  int nr_St_2_Afternoon;
  int ns_St_2_Afternoon_3;
  int ns_St_2_Afternoon_2;
  int ns_St_2_Afternoon_1;
  int heating_on_1_St_2_Afternoon;
  int nr_St_2_Morning;
  int ns_St_2_Morning_3;
  int ns_St_2_Morning_2;
  int ns_St_2_Morning_1;
  int heating_on_1_St_2_Morning;
  int nr_St_2_Dawn;
  int ns_St_2_Dawn_3;
  int ns_St_2_Dawn_2;
  int ns_St_2_Dawn_1;
  int heating_on_1_St_2_Dawn;
  int nr_St_2_Default;
  int ns_St_2_Default_3;
  int ns_St_2_Default_2;
  int ns_St_2_Default_1;
  int heating_on_1_St_2_Default;
  int nr_St_2_Idle;
  int ns_St_2_Idle_3;
  int ns_St_2_Idle_2;
  int ns_St_2_Idle_1;
  int heating_on_1_St_2_Idle;
  int ck_5_3;
  int ck_5_2;
  int ck_5_1;
  int v_240_2_0;
  int v_240_3_0_0;
  int v_240_3_0_1;
  int v_240_2_1;
  int v_240_3_1_0;
  int v_240_3_1_1;
  int v_238_2_0;
  int v_238_3_0_0;
  int v_238_3_0_1;
  int v_238_2_1;
  int v_238_3_1_0;
  int v_238_3_1_1;
  int v_236_2_0;
  int v_236_3_0_0;
  int v_236_3_0_1;
  int v_236_2_1;
  int v_236_3_1_0;
  int v_236_3_1_1;
  int v_234_2_0;
  int v_234_3_0_0;
  int v_234_3_0_1;
  int v_234_2_1;
  int v_234_3_1_0;
  int v_234_3_1_1;
  int v_241;
  int v_240_3;
  int v_240_2;
  int v_240_1;
  int v_239;
  int v_238_3;
  int v_238_2;
  int v_238_1;
  int v_237;
  int v_236_3;
  int v_236_2;
  int v_236_1;
  int v_235;
  int v_234_3;
  int v_234_2;
  int v_234_1;
  int v_233;
  int v_232;
  int v_231;
  int v_230;
  int v_229;
  int v_228;
  int v_227;
  int v_226;
  int v_225;
  int v_224;
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
  int v_183;
  int v_182;
  int v_412;
  int v_411;
  int v_410;
  int v_409;
  int v_408;
  int v_407;
  int v_406;
  int v_405;
  int v_404;
  int v_403;
  int v_402;
  int v_401;
  int v_400;
  int v_399;
  int v_398;
  int v_397;
  int v_396;
  int v_395;
  int v_394;
  int v_393;
  int v_392;
  int v_391;
  int v_390;
  int v_389;
  int s_St_2_Night_2_0;
  int s_St_2_Night_3_0_0;
  int s_St_2_Night_3_0_1;
  int s_St_2_Night_2_1;
  int s_St_2_Night_3_1_0;
  int s_St_2_Night_3_1_1;
  int s_St_2_Afternoon_2_0;
  int s_St_2_Afternoon_3_0_0;
  int s_St_2_Afternoon_3_0_1;
  int s_St_2_Afternoon_2_1;
  int s_St_2_Afternoon_3_1_0;
  int s_St_2_Afternoon_3_1_1;
  int s_St_2_Morning_2_0;
  int s_St_2_Morning_3_0_0;
  int s_St_2_Morning_3_0_1;
  int s_St_2_Morning_2_1;
  int s_St_2_Morning_3_1_0;
  int s_St_2_Morning_3_1_1;
  int s_St_2_Dawn_2_0;
  int s_St_2_Dawn_3_0_0;
  int s_St_2_Dawn_3_0_1;
  int s_St_2_Dawn_2_1;
  int s_St_2_Dawn_3_1_0;
  int s_St_2_Dawn_3_1_1;
  int s_St_2_Default_2_0;
  int s_St_2_Default_3_0_0;
  int s_St_2_Default_3_0_1;
  int s_St_2_Default_2_1;
  int s_St_2_Default_3_1_0;
  int s_St_2_Default_3_1_1;
  int s_St_2_Idle_2_0;
  int s_St_2_Idle_3_0_0;
  int s_St_2_Idle_3_0_1;
  int s_St_2_Idle_2_1;
  int s_St_2_Idle_3_1_0;
  int s_St_2_Idle_3_1_1;
  int ck_4_2_0;
  int ck_4_3_0_0;
  int ck_4_3_0_1;
  int ck_4_2_1;
  int ck_4_3_1_0;
  int ck_4_3_1_1;
  int r_St_2_Night;
  int s_St_2_Night_3;
  int s_St_2_Night_2;
  int s_St_2_Night_1;
  int r_St_2_Afternoon;
  int s_St_2_Afternoon_3;
  int s_St_2_Afternoon_2;
  int s_St_2_Afternoon_1;
  int r_St_2_Morning;
  int s_St_2_Morning_3;
  int s_St_2_Morning_2;
  int s_St_2_Morning_1;
  int r_St_2_Dawn;
  int s_St_2_Dawn_3;
  int s_St_2_Dawn_2;
  int s_St_2_Dawn_1;
  int r_St_2_Default;
  int s_St_2_Default_3;
  int s_St_2_Default_2;
  int s_St_2_Default_1;
  int r_St_2_Idle;
  int s_St_2_Idle_3;
  int s_St_2_Idle_2;
  int s_St_2_Idle_1;
  int ck_4_3;
  int ck_4_2;
  int ck_4_1;
  int v_442;
  int v_441;
  int v_440;
  int v_439;
  int v_438;
  int v_437;
  int v_436;
  int v_435;
  int v_434;
  int v_433;
  int v_432;
  int v_431;
  int v_430;
  int v_429;
  int v_428;
  int v_427;
  int v_426;
  int v_425;
  int v_424;
  int v_423;
  int v_422;
  int v_421;
  int v_420;
  int v_419;
  int v_418;
  int v_417;
  int v_416;
  int v_415;
  int v_414;
  int v_413;
  int ns_1_St_3_Night_2_0;
  int ns_1_St_3_Night_3_0_0;
  int ns_1_St_3_Night_3_0_1;
  int ns_1_St_3_Night_2_1;
  int ns_1_St_3_Night_3_1_0;
  int ns_1_St_3_Night_3_1_1;
  int ns_1_St_3_Afternoon_2_0;
  int ns_1_St_3_Afternoon_3_0_0;
  int ns_1_St_3_Afternoon_3_0_1;
  int ns_1_St_3_Afternoon_2_1;
  int ns_1_St_3_Afternoon_3_1_0;
  int ns_1_St_3_Afternoon_3_1_1;
  int ns_1_St_3_Morning_2_0;
  int ns_1_St_3_Morning_3_0_0;
  int ns_1_St_3_Morning_3_0_1;
  int ns_1_St_3_Morning_2_1;
  int ns_1_St_3_Morning_3_1_0;
  int ns_1_St_3_Morning_3_1_1;
  int ns_1_St_3_Dawn_2_0;
  int ns_1_St_3_Dawn_3_0_0;
  int ns_1_St_3_Dawn_3_0_1;
  int ns_1_St_3_Dawn_2_1;
  int ns_1_St_3_Dawn_3_1_0;
  int ns_1_St_3_Dawn_3_1_1;
  int ns_1_St_3_Default_2_0;
  int ns_1_St_3_Default_3_0_0;
  int ns_1_St_3_Default_3_0_1;
  int ns_1_St_3_Default_2_1;
  int ns_1_St_3_Default_3_1_0;
  int ns_1_St_3_Default_3_1_1;
  int ns_1_St_3_Idle_2_0;
  int ns_1_St_3_Idle_3_0_0;
  int ns_1_St_3_Idle_3_0_1;
  int ns_1_St_3_Idle_2_1;
  int ns_1_St_3_Idle_3_1_0;
  int ns_1_St_3_Idle_3_1_1;
  int ck_3_2_0;
  int ck_3_3_0_0;
  int ck_3_3_0_1;
  int ck_3_2_1;
  int ck_3_3_1_0;
  int ck_3_3_1_1;
  int nr_1_St_3_Night;
  int ns_1_St_3_Night_3;
  int ns_1_St_3_Night_2;
  int ns_1_St_3_Night_1;
  int cooling_on_1_St_3_Night;
  int nr_1_St_3_Afternoon;
  int ns_1_St_3_Afternoon_3;
  int ns_1_St_3_Afternoon_2;
  int ns_1_St_3_Afternoon_1;
  int cooling_on_1_St_3_Afternoon;
  int nr_1_St_3_Morning;
  int ns_1_St_3_Morning_3;
  int ns_1_St_3_Morning_2;
  int ns_1_St_3_Morning_1;
  int cooling_on_1_St_3_Morning;
  int nr_1_St_3_Dawn;
  int ns_1_St_3_Dawn_3;
  int ns_1_St_3_Dawn_2;
  int ns_1_St_3_Dawn_1;
  int cooling_on_1_St_3_Dawn;
  int nr_1_St_3_Default;
  int ns_1_St_3_Default_3;
  int ns_1_St_3_Default_2;
  int ns_1_St_3_Default_1;
  int cooling_on_1_St_3_Default;
  int nr_1_St_3_Idle;
  int ns_1_St_3_Idle_3;
  int ns_1_St_3_Idle_2;
  int ns_1_St_3_Idle_1;
  int cooling_on_1_St_3_Idle;
  int ck_3_3;
  int ck_3_2;
  int ck_3_1;
  int v_180_2_0;
  int v_180_3_0_0;
  int v_180_3_0_1;
  int v_180_2_1;
  int v_180_3_1_0;
  int v_180_3_1_1;
  int v_178_2_0;
  int v_178_3_0_0;
  int v_178_3_0_1;
  int v_178_2_1;
  int v_178_3_1_0;
  int v_178_3_1_1;
  int v_176_2_0;
  int v_176_3_0_0;
  int v_176_3_0_1;
  int v_176_2_1;
  int v_176_3_1_0;
  int v_176_3_1_1;
  int v_174_2_0;
  int v_174_3_0_0;
  int v_174_3_0_1;
  int v_174_2_1;
  int v_174_3_1_0;
  int v_174_3_1_1;
  int v_181;
  int v_180_3;
  int v_180_2;
  int v_180_1;
  int v_179;
  int v_178_3;
  int v_178_2;
  int v_178_1;
  int v_177;
  int v_176_3;
  int v_176_2;
  int v_176_1;
  int v_175;
  int v_174_3;
  int v_174_2;
  int v_174_1;
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
  int v_163;
  int v_162;
  int v_161;
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
  int v_469;
  int v_468;
  int v_467;
  int v_466;
  int v_465;
  int v_464;
  int v_463;
  int v_462;
  int v_461;
  int v_460;
  int v_459;
  int v_458;
  int v_457;
  int v_456;
  int v_455;
  int v_454;
  int v_453;
  int v_452;
  int v_451;
  int v_450;
  int v_449;
  int v_448;
  int v_447;
  int v_446;
  int s_1_St_3_Night_2_0;
  int s_1_St_3_Night_3_0_0;
  int s_1_St_3_Night_3_0_1;
  int s_1_St_3_Night_2_1;
  int s_1_St_3_Night_3_1_0;
  int s_1_St_3_Night_3_1_1;
  int s_1_St_3_Afternoon_2_0;
  int s_1_St_3_Afternoon_3_0_0;
  int s_1_St_3_Afternoon_3_0_1;
  int s_1_St_3_Afternoon_2_1;
  int s_1_St_3_Afternoon_3_1_0;
  int s_1_St_3_Afternoon_3_1_1;
  int s_1_St_3_Morning_2_0;
  int s_1_St_3_Morning_3_0_0;
  int s_1_St_3_Morning_3_0_1;
  int s_1_St_3_Morning_2_1;
  int s_1_St_3_Morning_3_1_0;
  int s_1_St_3_Morning_3_1_1;
  int s_1_St_3_Dawn_2_0;
  int s_1_St_3_Dawn_3_0_0;
  int s_1_St_3_Dawn_3_0_1;
  int s_1_St_3_Dawn_2_1;
  int s_1_St_3_Dawn_3_1_0;
  int s_1_St_3_Dawn_3_1_1;
  int s_1_St_3_Default_2_0;
  int s_1_St_3_Default_3_0_0;
  int s_1_St_3_Default_3_0_1;
  int s_1_St_3_Default_2_1;
  int s_1_St_3_Default_3_1_0;
  int s_1_St_3_Default_3_1_1;
  int s_1_St_3_Idle_2_0;
  int s_1_St_3_Idle_3_0_0;
  int s_1_St_3_Idle_3_0_1;
  int s_1_St_3_Idle_2_1;
  int s_1_St_3_Idle_3_1_0;
  int s_1_St_3_Idle_3_1_1;
  int ck_2_0;
  int ck_3_4_0_0;
  int ck_3_4_0_1;
  int ck_2_1;
  int ck_3_4_1_0;
  int ck_3_4_1_1;
  int r_1_St_3_Night;
  int s_1_St_3_Night_3;
  int s_1_St_3_Night_2;
  int s_1_St_3_Night_1;
  int r_1_St_3_Afternoon;
  int s_1_St_3_Afternoon_3;
  int s_1_St_3_Afternoon_2;
  int s_1_St_3_Afternoon_1;
  int r_1_St_3_Morning;
  int s_1_St_3_Morning_3;
  int s_1_St_3_Morning_2;
  int s_1_St_3_Morning_1;
  int r_1_St_3_Dawn;
  int s_1_St_3_Dawn_3;
  int s_1_St_3_Dawn_2;
  int s_1_St_3_Dawn_1;
  int r_1_St_3_Default;
  int s_1_St_3_Default_3;
  int s_1_St_3_Default_2;
  int s_1_St_3_Default_1;
  int r_1_St_3_Idle;
  int s_1_St_3_Idle_3;
  int s_1_St_3_Idle_2;
  int s_1_St_3_Idle_1;
  int ck_3_4;
  int ck_2;
  int ck_1;
  int s_1_2_0;
  int s_1_3_0_0;
  int s_1_3_0_1;
  int s_1_2_1;
  int s_1_3_1_0;
  int s_1_3_1_1;
  int ns_1_2_0;
  int ns_1_3_0_0;
  int ns_1_3_0_1;
  int ns_1_2_1;
  int ns_1_3_1_0;
  int ns_1_3_1_1;
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
  int s_1_3;
  int s_1_2;
  int s_1_1;
  int ns_1_3;
  int ns_1_2;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_3;
  int s_2;
  int s_1_4;
  int ns_3;
  int ns_2;
  int ns_1_4;
  int r;
  int nr;
  int t_in_2;
  int time_2;
  int d_2;
  int c_1;
  int heating_on_1;
  int t_in_1;
  int time_1;
  int d_1;
  int c;
  int cooling_on_1;
  int v;
  int v_120;
  int c2;
  int c1;
  t_in_2 = t_in;
  time_2 = time;
  d_2 = d;
  ck_4_1 = self->v_386;
  ck_4_2 = self->v_387;
  ck_4_3 = self->v_388;
  t_in_1 = t_in;
  time_1 = time;
  d_1 = d;
  ck_1 = self->v_443;
  ck_2 = self->v_444;
  ck_3_4 = self->v_445;
  if (ck_4_1) {
    ck_4_2_1 = ck_4_2;
    if (ck_4_2_1) {
      ck_4_3_1_1 = ck_4_3;
      if (ck_4_3_1_1) {
        v_189 = (time_2>=17);
        v_187 = (time_2<12);
        v_186 = (t_in_2>=10);
        v_188 = (v_186||v_187);
        v_190 = (v_188||v_189);
      } else {
        v_199 = (time_2>=8);
        v_198 = (t_in_2>=20);
        v_200 = (v_198||v_199);
      };
    } else {
      ck_4_3_1_0 = ck_4_3;
      if (ck_4_3_1_0) {
        v_408 = true;
        v_392 = true;
        v_393 = true;
        v_394 = true;
      } else {
        v_202 = (t_in_2>=15);
        if (v_202) {
          r_St_2_Default = true;
        } else {
          r_St_2_Default = self->pnr;
        };
        v_408 = r_St_2_Default;
        if (v_202) {
          s_St_2_Default_1 = false;
        } else {
          s_St_2_Default_1 = true;
        };
        v_392 = s_St_2_Default_1;
        if (v_202) {
          s_St_2_Default_2 = true;
        } else {
          s_St_2_Default_2 = false;
        };
        v_393 = s_St_2_Default_2;
        if (v_202) {
          s_St_2_Default_3 = true;
        } else {
          s_St_2_Default_3 = false;
        };
        v_394 = s_St_2_Default_3;
        if (s_St_2_Default_1) {
          s_St_2_Default_2_1 = s_St_2_Default_2;
          if (s_St_2_Default_2_1) {
            s_St_2_Default_3_1_1 = s_St_2_Default_3;
          } else {
            s_St_2_Default_3_1_0 = s_St_2_Default_3;
          };
        } else {
          s_St_2_Default_2_0 = s_St_2_Default_2;
          if (s_St_2_Default_2_0) {
            s_St_2_Default_3_0_1 = s_St_2_Default_3;
          } else {
            s_St_2_Default_3_0_0 = s_St_2_Default_3;
          };
        };
      };
    };
  } else {
    ck_4_2_0 = ck_4_2;
    if (ck_4_2_0) {
      ck_4_3_0_1 = ck_4_3;
      if (ck_4_3_0_1) {
        v_231 = !(d_2);
        v_229 = (t_in_2<25);
        v_228 = (time_2>=17);
        v_230 = (v_228&&v_229);
        v_232 = (v_230&&v_231);
        v_225 = !(d_2);
        v_223 = (t_in_2<10);
        v_221 = (time_2<17);
        v_220 = (time_2>=12);
        v_222 = (v_220&&v_221);
        v_224 = (v_222&&v_223);
        v_226 = (v_224&&v_225);
        v_217 = !(d_2);
        v_215 = (t_in_2<15);
        v_213 = (time_2<12);
        v_212 = (time_2>=8);
        v_214 = (v_212&&v_213);
        v_216 = (v_214&&v_215);
        v_218 = (v_216&&v_217);
        v_209 = !(d_2);
        v_207 = (t_in_2<20);
        v_206 = (time_2<8);
        v_208 = (v_206&&v_207);
        v_210 = (v_208&&v_209);
        v_203 = (t_in_2<15);
        v_204 = (v_203&&d_2);
      } else {
        v_195 = (time_2>=12);
        v_193 = (time_2<8);
        v_192 = (t_in_2>=15);
        v_194 = (v_192||v_193);
        v_196 = (v_194||v_195);
      };
    } else {
      ck_4_3_0_0 = ck_4_3;
      if (!(ck_4_3_0_0)) {
        v_183 = (time_2<17);
        v_182 = (t_in_2>=25);
        v_184 = (v_182||v_183);
      };
    };
  };
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_4_1_1 = ck_3_4;
      if (ck_3_4_1_1) {
        v_128 = (time_1>=17);
        v_126 = (time_1<12);
        v_125 = (t_in_1<=15);
        v_127 = (v_125||v_126);
        v_129 = (v_127||v_128);
      } else {
        v_138 = (time_1>=8);
        v_137 = (t_in_1<=25);
        v_139 = (v_137||v_138);
      };
    } else {
      ck_3_4_1_0 = ck_3_4;
      if (!(ck_3_4_1_0)) {
        v_141 = (t_in_1<=25);
      };
    };
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_4_0_1 = ck_3_4;
      if (ck_3_4_0_1) {
        v_171 = !(d_1);
        v_169 = (t_in_1>30);
        v_168 = (time_1>=17);
        v_170 = (v_168&&v_169);
        v_172 = (v_170&&v_171);
        v_165 = !(d_1);
        v_163 = (t_in_1>15);
        v_161 = (time_1<17);
        v_160 = (time_1>=12);
        v_162 = (v_160&&v_161);
        v_164 = (v_162&&v_163);
        v_166 = (v_164&&v_165);
        v_157 = !(d_1);
        v_155 = (t_in_1>20);
        v_153 = (time_1<12);
        v_152 = (time_1>=8);
        v_154 = (v_152&&v_153);
        v_156 = (v_154&&v_155);
        v_158 = (v_156&&v_157);
        v_149 = !(d_1);
        v_147 = (t_in_1>25);
        v_146 = (time_1<8);
        v_148 = (v_146&&v_147);
        v_150 = (v_148&&v_149);
        v_143 = (t_in_1>25);
        v_144 = (v_143&&d_1);
      } else {
        v_134 = (time_1>=12);
        v_132 = (time_1<8);
        v_131 = (t_in_1<=20);
        v_133 = (v_131||v_132);
        v_135 = (v_133||v_134);
      };
    } else {
      ck_3_4_0_0 = ck_3_4;
      if (!(ck_3_4_0_0)) {
        v_122 = (time_1<17);
        v_121 = (t_in_1<=30);
        v_123 = (v_121||v_122);
      };
    };
  };
  Greenhouse_controller__greenhouse_controller_step(d, v_121, v_122, v_125,
                                                    v_126, v_128, v_137,
                                                    v_138, v_131, v_132,
                                                    v_134, v_143, v_146,
                                                    v_147, v_152, v_153,
                                                    v_155, v_160, v_161,
                                                    v_163, v_168, v_169,
                                                    v_141, v_182, v_183,
                                                    v_186, v_187, v_189,
                                                    v_198, v_199, v_192,
                                                    v_193, v_195, v_203,
                                                    v_206, v_207, v_212,
                                                    v_213, v_215, v_220,
                                                    v_221, v_223, v_228,
                                                    v_229, v_202,
                                                    self->v_445, self->v_444,
                                                    self->v_443, self->pnr_1,
                                                    self->v_388, self->v_387,
                                                    self->v_386, self->pnr,
                                                    true, true,
                                                    &Greenhouse_controller__greenhouse_controller_out_st);
  c2 = Greenhouse_controller__greenhouse_controller_out_st.greenhouse_c2;
  c1 = Greenhouse_controller__greenhouse_controller_out_st.greenhouse_c1;
  c_1 = c1;
  c = c2;
  if (ck_4_1) {
    if (ck_4_2_1) {
      if (ck_4_3_1_1) {
        v_191 = (v_190&&c_1);
        if (v_191) {
          r_St_2_Afternoon = true;
        } else {
          r_St_2_Afternoon = self->pnr;
        };
        v_407 = r_St_2_Afternoon;
        if (v_191) {
          s_St_2_Afternoon_1 = false;
        } else {
          s_St_2_Afternoon_1 = true;
        };
        v_389 = s_St_2_Afternoon_1;
        if (v_191) {
          s_St_2_Afternoon_2 = true;
        } else {
          s_St_2_Afternoon_2 = true;
        };
        v_390 = s_St_2_Afternoon_2;
        if (v_191) {
          s_St_2_Afternoon_3 = true;
        } else {
          s_St_2_Afternoon_3 = true;
        };
        v_391 = s_St_2_Afternoon_3;
      } else {
        v_201 = (v_200&&c_1);
        if (v_201) {
          r_St_2_Dawn = true;
          s_St_2_Dawn_1 = false;
          s_St_2_Dawn_2 = true;
          s_St_2_Dawn_3 = true;
        } else {
          r_St_2_Dawn = self->pnr;
          s_St_2_Dawn_1 = true;
          s_St_2_Dawn_2 = true;
          s_St_2_Dawn_3 = false;
        };
        v_407 = r_St_2_Dawn;
        v_389 = s_St_2_Dawn_1;
        v_390 = s_St_2_Dawn_2;
        v_391 = s_St_2_Dawn_3;
      };
      v_401 = v_389;
      v_402 = v_390;
      v_403 = v_391;
      v_409 = v_407;
      if (ck_4_3_1_1) {
        if (s_St_2_Afternoon_1) {
          s_St_2_Afternoon_2_1 = s_St_2_Afternoon_2;
          if (s_St_2_Afternoon_2_1) {
            s_St_2_Afternoon_3_1_1 = s_St_2_Afternoon_3;
          } else {
            s_St_2_Afternoon_3_1_0 = s_St_2_Afternoon_3;
          };
        } else {
          s_St_2_Afternoon_2_0 = s_St_2_Afternoon_2;
          if (s_St_2_Afternoon_2_0) {
            s_St_2_Afternoon_3_0_1 = s_St_2_Afternoon_3;
          } else {
            s_St_2_Afternoon_3_0_0 = s_St_2_Afternoon_3;
          };
        };
      } else {
        if (s_St_2_Dawn_1) {
          s_St_2_Dawn_2_1 = s_St_2_Dawn_2;
          if (s_St_2_Dawn_2_1) {
            s_St_2_Dawn_3_1_1 = s_St_2_Dawn_3;
          } else {
            s_St_2_Dawn_3_1_0 = s_St_2_Dawn_3;
          };
        } else {
          s_St_2_Dawn_2_0 = s_St_2_Dawn_2;
          if (s_St_2_Dawn_2_0) {
            s_St_2_Dawn_3_0_1 = s_St_2_Dawn_3;
          } else {
            s_St_2_Dawn_3_0_0 = s_St_2_Dawn_3;
          };
        };
      };
    } else {
      v_401 = v_392;
      v_402 = v_393;
      v_403 = v_394;
      v_409 = v_408;
    };
    s_1_4 = v_401;
    s_2 = v_402;
    s_3 = v_403;
    r = v_409;
  } else {
    if (ck_4_2_0) {
      if (ck_4_3_0_1) {
        v_233 = (v_232&&c_1);
        if (v_233) {
          v_235 = true;
          v_234_1 = false;
          v_234_2 = false;
          v_234_3 = false;
        } else {
          v_235 = self->pnr;
          v_234_1 = false;
          v_234_2 = true;
          v_234_3 = true;
        };
        v_227 = (v_226&&c_1);
        if (v_227) {
          v_237 = true;
          v_236_1 = true;
          v_236_2 = true;
          v_236_3 = true;
        } else {
          v_237 = v_235;
          v_236_1 = v_234_1;
          v_236_2 = v_234_2;
          v_236_3 = v_234_3;
        };
        v_219 = (v_218&&c_1);
        if (v_219) {
          v_239 = true;
          v_238_1 = false;
          v_238_2 = true;
          v_238_3 = false;
        } else {
          v_239 = v_237;
          v_238_1 = v_236_1;
          v_238_2 = v_236_2;
          v_238_3 = v_236_3;
        };
        v_211 = (v_210&&c_1);
        if (v_211) {
          v_241 = true;
          v_240_1 = true;
          v_240_2 = true;
          v_240_3 = false;
        } else {
          v_241 = v_239;
          v_240_1 = v_238_1;
          v_240_2 = v_238_2;
          v_240_3 = v_238_3;
        };
        v_205 = (v_204&&c_1);
        if (v_205) {
          r_St_2_Idle = true;
          s_St_2_Idle_1 = true;
          s_St_2_Idle_2 = false;
          s_St_2_Idle_3 = false;
        } else {
          r_St_2_Idle = v_241;
          s_St_2_Idle_1 = v_240_1;
          s_St_2_Idle_2 = v_240_2;
          s_St_2_Idle_3 = v_240_3;
        };
        v_410 = r_St_2_Idle;
        v_395 = s_St_2_Idle_1;
        v_396 = s_St_2_Idle_2;
        v_397 = s_St_2_Idle_3;
        if (v_234_1) {
          v_234_2_1 = v_234_2;
          if (v_234_2_1) {
            v_234_3_1_1 = v_234_3;
          } else {
            v_234_3_1_0 = v_234_3;
          };
        } else {
          v_234_2_0 = v_234_2;
          if (v_234_2_0) {
            v_234_3_0_1 = v_234_3;
          } else {
            v_234_3_0_0 = v_234_3;
          };
        };
        if (v_236_1) {
          v_236_2_1 = v_236_2;
          if (v_236_2_1) {
            v_236_3_1_1 = v_236_3;
          } else {
            v_236_3_1_0 = v_236_3;
          };
        } else {
          v_236_2_0 = v_236_2;
          if (v_236_2_0) {
            v_236_3_0_1 = v_236_3;
          } else {
            v_236_3_0_0 = v_236_3;
          };
        };
        if (v_238_1) {
          v_238_2_1 = v_238_2;
          if (v_238_2_1) {
            v_238_3_1_1 = v_238_3;
          } else {
            v_238_3_1_0 = v_238_3;
          };
        } else {
          v_238_2_0 = v_238_2;
          if (v_238_2_0) {
            v_238_3_0_1 = v_238_3;
          } else {
            v_238_3_0_0 = v_238_3;
          };
        };
        if (v_240_1) {
          v_240_2_1 = v_240_2;
          if (v_240_2_1) {
            v_240_3_1_1 = v_240_3;
          } else {
            v_240_3_1_0 = v_240_3;
          };
        } else {
          v_240_2_0 = v_240_2;
          if (v_240_2_0) {
            v_240_3_0_1 = v_240_3;
          } else {
            v_240_3_0_0 = v_240_3;
          };
        };
        if (s_St_2_Idle_1) {
          s_St_2_Idle_2_1 = s_St_2_Idle_2;
          if (s_St_2_Idle_2_1) {
            s_St_2_Idle_3_1_1 = s_St_2_Idle_3;
          } else {
            s_St_2_Idle_3_1_0 = s_St_2_Idle_3;
          };
        } else {
          s_St_2_Idle_2_0 = s_St_2_Idle_2;
          if (s_St_2_Idle_2_0) {
            s_St_2_Idle_3_0_1 = s_St_2_Idle_3;
          } else {
            s_St_2_Idle_3_0_0 = s_St_2_Idle_3;
          };
        };
      } else {
        v_197 = (v_196&&c_1);
        if (v_197) {
          r_St_2_Morning = true;
        } else {
          r_St_2_Morning = self->pnr;
        };
        v_410 = r_St_2_Morning;
        if (v_197) {
          s_St_2_Morning_1 = false;
        } else {
          s_St_2_Morning_1 = false;
        };
        v_395 = s_St_2_Morning_1;
        if (v_197) {
          s_St_2_Morning_2 = true;
        } else {
          s_St_2_Morning_2 = true;
        };
        v_396 = s_St_2_Morning_2;
        if (v_197) {
          s_St_2_Morning_3 = true;
        } else {
          s_St_2_Morning_3 = false;
        };
        v_397 = s_St_2_Morning_3;
        if (s_St_2_Morning_1) {
          s_St_2_Morning_2_1 = s_St_2_Morning_2;
          if (s_St_2_Morning_2_1) {
            s_St_2_Morning_3_1_1 = s_St_2_Morning_3;
          } else {
            s_St_2_Morning_3_1_0 = s_St_2_Morning_3;
          };
        } else {
          s_St_2_Morning_2_0 = s_St_2_Morning_2;
          if (s_St_2_Morning_2_0) {
            s_St_2_Morning_3_0_1 = s_St_2_Morning_3;
          } else {
            s_St_2_Morning_3_0_0 = s_St_2_Morning_3;
          };
        };
      };
      v_404 = v_395;
      v_405 = v_396;
      v_406 = v_397;
      v_412 = v_410;
    } else {
      if (ck_4_3_0_0) {
        v_411 = true;
        v_398 = true;
        v_399 = true;
        v_400 = true;
      } else {
        v_185 = (v_184&&c_1);
        if (v_185) {
          r_St_2_Night = true;
        } else {
          r_St_2_Night = self->pnr;
        };
        v_411 = r_St_2_Night;
        if (v_185) {
          s_St_2_Night_1 = false;
        } else {
          s_St_2_Night_1 = false;
        };
        v_398 = s_St_2_Night_1;
        if (v_185) {
          s_St_2_Night_2 = true;
        } else {
          s_St_2_Night_2 = false;
        };
        v_399 = s_St_2_Night_2;
        if (v_185) {
          s_St_2_Night_3 = true;
        } else {
          s_St_2_Night_3 = false;
        };
        v_400 = s_St_2_Night_3;
      };
      v_404 = v_398;
      v_405 = v_399;
      v_406 = v_400;
      v_412 = v_411;
    };
    s_1_4 = v_404;
    s_2 = v_405;
    s_3 = v_406;
    r = v_412;
  };
  ck_5_1 = s_1_4;
  ck_5_2 = s_2;
  ck_5_3 = s_3;
  if (ck_5_1) {
    ck_5_2_1 = ck_5_2;
    if (ck_5_2_1) {
      ck_5_3_1_1 = ck_5_3;
      if (ck_5_3_1_1) {
        heating_on_1_St_2_Afternoon = true;
        v_356 = heating_on_1_St_2_Afternoon;
        nr_St_2_Afternoon = false;
        v_380 = nr_St_2_Afternoon;
        ns_St_2_Afternoon_1 = true;
        v_362 = ns_St_2_Afternoon_1;
        ns_St_2_Afternoon_2 = true;
        v_363 = ns_St_2_Afternoon_2;
        ns_St_2_Afternoon_3 = true;
        v_364 = ns_St_2_Afternoon_3;
      } else {
        heating_on_1_St_2_Dawn = true;
        nr_St_2_Dawn = false;
        ns_St_2_Dawn_1 = true;
        ns_St_2_Dawn_2 = true;
        ns_St_2_Dawn_3 = false;
        v_356 = heating_on_1_St_2_Dawn;
        v_380 = nr_St_2_Dawn;
        v_362 = ns_St_2_Dawn_1;
        v_363 = ns_St_2_Dawn_2;
        v_364 = ns_St_2_Dawn_3;
      };
      v_358 = v_356;
      v_374 = v_362;
      v_375 = v_363;
      v_376 = v_364;
      v_382 = v_380;
      if (ck_5_3_1_1) {
        if (ns_St_2_Afternoon_1) {
          ns_St_2_Afternoon_2_1 = ns_St_2_Afternoon_2;
          if (ns_St_2_Afternoon_2_1) {
            ns_St_2_Afternoon_3_1_1 = ns_St_2_Afternoon_3;
          } else {
            ns_St_2_Afternoon_3_1_0 = ns_St_2_Afternoon_3;
          };
        } else {
          ns_St_2_Afternoon_2_0 = ns_St_2_Afternoon_2;
          if (ns_St_2_Afternoon_2_0) {
            ns_St_2_Afternoon_3_0_1 = ns_St_2_Afternoon_3;
          } else {
            ns_St_2_Afternoon_3_0_0 = ns_St_2_Afternoon_3;
          };
        };
      } else {
        if (ns_St_2_Dawn_1) {
          ns_St_2_Dawn_2_1 = ns_St_2_Dawn_2;
          if (ns_St_2_Dawn_2_1) {
            ns_St_2_Dawn_3_1_1 = ns_St_2_Dawn_3;
          } else {
            ns_St_2_Dawn_3_1_0 = ns_St_2_Dawn_3;
          };
        } else {
          ns_St_2_Dawn_2_0 = ns_St_2_Dawn_2;
          if (ns_St_2_Dawn_2_0) {
            ns_St_2_Dawn_3_0_1 = ns_St_2_Dawn_3;
          } else {
            ns_St_2_Dawn_3_0_0 = ns_St_2_Dawn_3;
          };
        };
      };
    } else {
      ck_5_3_1_0 = ck_5_3;
      if (ck_5_3_1_0) {
        v_357 = true;
        v_381 = true;
        v_365 = true;
        v_366 = true;
        v_367 = true;
      } else {
        heating_on_1_St_2_Default = true;
        v_357 = heating_on_1_St_2_Default;
        nr_St_2_Default = false;
        v_381 = nr_St_2_Default;
        ns_St_2_Default_1 = true;
        v_365 = ns_St_2_Default_1;
        ns_St_2_Default_2 = false;
        v_366 = ns_St_2_Default_2;
        ns_St_2_Default_3 = false;
        v_367 = ns_St_2_Default_3;
        if (ns_St_2_Default_1) {
          ns_St_2_Default_2_1 = ns_St_2_Default_2;
          if (ns_St_2_Default_2_1) {
            ns_St_2_Default_3_1_1 = ns_St_2_Default_3;
          } else {
            ns_St_2_Default_3_1_0 = ns_St_2_Default_3;
          };
        } else {
          ns_St_2_Default_2_0 = ns_St_2_Default_2;
          if (ns_St_2_Default_2_0) {
            ns_St_2_Default_3_0_1 = ns_St_2_Default_3;
          } else {
            ns_St_2_Default_3_0_0 = ns_St_2_Default_3;
          };
        };
      };
      v_358 = v_357;
      v_374 = v_365;
      v_375 = v_366;
      v_376 = v_367;
      v_382 = v_381;
    };
    heating_on_1 = v_358;
    ns_1_4 = v_374;
    ns_2 = v_375;
    ns_3 = v_376;
    nr = v_382;
  } else {
    ck_5_2_0 = ck_5_2;
    if (ck_5_2_0) {
      ck_5_3_0_1 = ck_5_3;
      if (ck_5_3_0_1) {
        heating_on_1_St_2_Idle = false;
        nr_St_2_Idle = false;
        ns_St_2_Idle_1 = false;
        ns_St_2_Idle_2 = true;
        ns_St_2_Idle_3 = true;
        v_359 = heating_on_1_St_2_Idle;
        v_383 = nr_St_2_Idle;
        v_368 = ns_St_2_Idle_1;
        v_369 = ns_St_2_Idle_2;
        v_370 = ns_St_2_Idle_3;
        if (ns_St_2_Idle_1) {
          ns_St_2_Idle_2_1 = ns_St_2_Idle_2;
          if (ns_St_2_Idle_2_1) {
            ns_St_2_Idle_3_1_1 = ns_St_2_Idle_3;
          } else {
            ns_St_2_Idle_3_1_0 = ns_St_2_Idle_3;
          };
        } else {
          ns_St_2_Idle_2_0 = ns_St_2_Idle_2;
          if (ns_St_2_Idle_2_0) {
            ns_St_2_Idle_3_0_1 = ns_St_2_Idle_3;
          } else {
            ns_St_2_Idle_3_0_0 = ns_St_2_Idle_3;
          };
        };
      } else {
        heating_on_1_St_2_Morning = true;
        v_359 = heating_on_1_St_2_Morning;
        nr_St_2_Morning = false;
        v_383 = nr_St_2_Morning;
        ns_St_2_Morning_1 = false;
        v_368 = ns_St_2_Morning_1;
        ns_St_2_Morning_2 = true;
        v_369 = ns_St_2_Morning_2;
        ns_St_2_Morning_3 = false;
        v_370 = ns_St_2_Morning_3;
        if (ns_St_2_Morning_1) {
          ns_St_2_Morning_2_1 = ns_St_2_Morning_2;
          if (ns_St_2_Morning_2_1) {
            ns_St_2_Morning_3_1_1 = ns_St_2_Morning_3;
          } else {
            ns_St_2_Morning_3_1_0 = ns_St_2_Morning_3;
          };
        } else {
          ns_St_2_Morning_2_0 = ns_St_2_Morning_2;
          if (ns_St_2_Morning_2_0) {
            ns_St_2_Morning_3_0_1 = ns_St_2_Morning_3;
          } else {
            ns_St_2_Morning_3_0_0 = ns_St_2_Morning_3;
          };
        };
      };
      v_361 = v_359;
      v_377 = v_368;
      v_378 = v_369;
      v_379 = v_370;
      v_385 = v_383;
    } else {
      ck_5_3_0_0 = ck_5_3;
      if (ck_5_3_0_0) {
        v_360 = true;
        v_384 = true;
        v_371 = true;
        v_372 = true;
        v_373 = true;
      } else {
        heating_on_1_St_2_Night = true;
        v_360 = heating_on_1_St_2_Night;
        nr_St_2_Night = false;
        v_384 = nr_St_2_Night;
        ns_St_2_Night_1 = false;
        v_371 = ns_St_2_Night_1;
        ns_St_2_Night_2 = false;
        v_372 = ns_St_2_Night_2;
        ns_St_2_Night_3 = false;
        v_373 = ns_St_2_Night_3;
      };
      v_361 = v_360;
      v_377 = v_371;
      v_378 = v_372;
      v_379 = v_373;
      v_385 = v_384;
    };
    heating_on_1 = v_361;
    ns_1_4 = v_377;
    ns_2 = v_378;
    ns_3 = v_379;
    nr = v_385;
  };
  _out->heating_on = heating_on_1;
  if (ns_1_4) {
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
  if (!(ck_5_1)) {
    if (!(ck_5_2_0)) {
      if (!(ck_5_3_0_0)) {
        if (ns_St_2_Night_1) {
          ns_St_2_Night_2_1 = ns_St_2_Night_2;
          if (ns_St_2_Night_2_1) {
            ns_St_2_Night_3_1_1 = ns_St_2_Night_3;
          } else {
            ns_St_2_Night_3_1_0 = ns_St_2_Night_3;
          };
        } else {
          ns_St_2_Night_2_0 = ns_St_2_Night_2;
          if (ns_St_2_Night_2_0) {
            ns_St_2_Night_3_0_1 = ns_St_2_Night_3;
          } else {
            ns_St_2_Night_3_0_0 = ns_St_2_Night_3;
          };
        };
      };
    };
  };
  if (s_1_4) {
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
  if (!(ck_4_1)) {
    if (!(ck_4_2_0)) {
      if (!(ck_4_3_0_0)) {
        if (s_St_2_Night_1) {
          s_St_2_Night_2_1 = s_St_2_Night_2;
          if (s_St_2_Night_2_1) {
            s_St_2_Night_3_1_1 = s_St_2_Night_3;
          } else {
            s_St_2_Night_3_1_0 = s_St_2_Night_3;
          };
        } else {
          s_St_2_Night_2_0 = s_St_2_Night_2;
          if (s_St_2_Night_2_0) {
            s_St_2_Night_3_0_1 = s_St_2_Night_3;
          } else {
            s_St_2_Night_3_0_0 = s_St_2_Night_3;
          };
        };
      };
    };
  };
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_4_1_1) {
        v_130 = (v_129&&c);
        if (v_130) {
          r_1_St_3_Afternoon = true;
        } else {
          r_1_St_3_Afternoon = self->pnr_1;
        };
        v_464 = r_1_St_3_Afternoon;
        if (v_130) {
          s_1_St_3_Afternoon_1 = false;
        } else {
          s_1_St_3_Afternoon_1 = true;
        };
        v_446 = s_1_St_3_Afternoon_1;
        if (v_130) {
          s_1_St_3_Afternoon_2 = true;
        } else {
          s_1_St_3_Afternoon_2 = true;
        };
        v_447 = s_1_St_3_Afternoon_2;
        if (v_130) {
          s_1_St_3_Afternoon_3 = true;
        } else {
          s_1_St_3_Afternoon_3 = true;
        };
        v_448 = s_1_St_3_Afternoon_3;
      } else {
        v_140 = (v_139&&c);
        if (v_140) {
          r_1_St_3_Dawn = true;
          s_1_St_3_Dawn_1 = false;
          s_1_St_3_Dawn_2 = true;
          s_1_St_3_Dawn_3 = true;
        } else {
          r_1_St_3_Dawn = self->pnr_1;
          s_1_St_3_Dawn_1 = true;
          s_1_St_3_Dawn_2 = true;
          s_1_St_3_Dawn_3 = false;
        };
        v_464 = r_1_St_3_Dawn;
        v_446 = s_1_St_3_Dawn_1;
        v_447 = s_1_St_3_Dawn_2;
        v_448 = s_1_St_3_Dawn_3;
      };
      v_458 = v_446;
      v_459 = v_447;
      v_460 = v_448;
      v_466 = v_464;
      if (ck_3_4_1_1) {
        if (s_1_St_3_Afternoon_1) {
          s_1_St_3_Afternoon_2_1 = s_1_St_3_Afternoon_2;
          if (s_1_St_3_Afternoon_2_1) {
            s_1_St_3_Afternoon_3_1_1 = s_1_St_3_Afternoon_3;
          } else {
            s_1_St_3_Afternoon_3_1_0 = s_1_St_3_Afternoon_3;
          };
        } else {
          s_1_St_3_Afternoon_2_0 = s_1_St_3_Afternoon_2;
          if (s_1_St_3_Afternoon_2_0) {
            s_1_St_3_Afternoon_3_0_1 = s_1_St_3_Afternoon_3;
          } else {
            s_1_St_3_Afternoon_3_0_0 = s_1_St_3_Afternoon_3;
          };
        };
      } else {
        if (s_1_St_3_Dawn_1) {
          s_1_St_3_Dawn_2_1 = s_1_St_3_Dawn_2;
          if (s_1_St_3_Dawn_2_1) {
            s_1_St_3_Dawn_3_1_1 = s_1_St_3_Dawn_3;
          } else {
            s_1_St_3_Dawn_3_1_0 = s_1_St_3_Dawn_3;
          };
        } else {
          s_1_St_3_Dawn_2_0 = s_1_St_3_Dawn_2;
          if (s_1_St_3_Dawn_2_0) {
            s_1_St_3_Dawn_3_0_1 = s_1_St_3_Dawn_3;
          } else {
            s_1_St_3_Dawn_3_0_0 = s_1_St_3_Dawn_3;
          };
        };
      };
    } else {
      if (ck_3_4_1_0) {
        v_465 = true;
        v_449 = true;
        v_450 = true;
        v_451 = true;
      } else {
        v_142 = (v_141&&c);
        if (v_142) {
          r_1_St_3_Default = true;
        } else {
          r_1_St_3_Default = self->pnr_1;
        };
        v_465 = r_1_St_3_Default;
        if (v_142) {
          s_1_St_3_Default_1 = false;
        } else {
          s_1_St_3_Default_1 = true;
        };
        v_449 = s_1_St_3_Default_1;
        if (v_142) {
          s_1_St_3_Default_2 = true;
        } else {
          s_1_St_3_Default_2 = false;
        };
        v_450 = s_1_St_3_Default_2;
        if (v_142) {
          s_1_St_3_Default_3 = true;
        } else {
          s_1_St_3_Default_3 = false;
        };
        v_451 = s_1_St_3_Default_3;
        if (s_1_St_3_Default_1) {
          s_1_St_3_Default_2_1 = s_1_St_3_Default_2;
          if (s_1_St_3_Default_2_1) {
            s_1_St_3_Default_3_1_1 = s_1_St_3_Default_3;
          } else {
            s_1_St_3_Default_3_1_0 = s_1_St_3_Default_3;
          };
        } else {
          s_1_St_3_Default_2_0 = s_1_St_3_Default_2;
          if (s_1_St_3_Default_2_0) {
            s_1_St_3_Default_3_0_1 = s_1_St_3_Default_3;
          } else {
            s_1_St_3_Default_3_0_0 = s_1_St_3_Default_3;
          };
        };
      };
      v_458 = v_449;
      v_459 = v_450;
      v_460 = v_451;
      v_466 = v_465;
    };
    s_1_1 = v_458;
    s_1_2 = v_459;
    s_1_3 = v_460;
    r_1 = v_466;
  } else {
    if (ck_2_0) {
      if (ck_3_4_0_1) {
        v_173 = (v_172&&c);
        if (v_173) {
          v_175 = true;
          v_174_1 = false;
          v_174_2 = false;
          v_174_3 = false;
        } else {
          v_175 = self->pnr_1;
          v_174_1 = false;
          v_174_2 = true;
          v_174_3 = true;
        };
        v_167 = (v_166&&c);
        if (v_167) {
          v_177 = true;
          v_176_1 = true;
          v_176_2 = true;
          v_176_3 = true;
        } else {
          v_177 = v_175;
          v_176_1 = v_174_1;
          v_176_2 = v_174_2;
          v_176_3 = v_174_3;
        };
        v_159 = (v_158&&c);
        if (v_159) {
          v_179 = true;
          v_178_1 = false;
          v_178_2 = true;
          v_178_3 = false;
        } else {
          v_179 = v_177;
          v_178_1 = v_176_1;
          v_178_2 = v_176_2;
          v_178_3 = v_176_3;
        };
        v_151 = (v_150&&c);
        if (v_151) {
          v_181 = true;
          v_180_1 = true;
          v_180_2 = true;
          v_180_3 = false;
        } else {
          v_181 = v_179;
          v_180_1 = v_178_1;
          v_180_2 = v_178_2;
          v_180_3 = v_178_3;
        };
        v_145 = (v_144&&c);
        if (v_145) {
          r_1_St_3_Idle = true;
          s_1_St_3_Idle_1 = true;
          s_1_St_3_Idle_2 = false;
          s_1_St_3_Idle_3 = false;
        } else {
          r_1_St_3_Idle = v_181;
          s_1_St_3_Idle_1 = v_180_1;
          s_1_St_3_Idle_2 = v_180_2;
          s_1_St_3_Idle_3 = v_180_3;
        };
        v_467 = r_1_St_3_Idle;
        v_452 = s_1_St_3_Idle_1;
        v_453 = s_1_St_3_Idle_2;
        v_454 = s_1_St_3_Idle_3;
        if (v_174_1) {
          v_174_2_1 = v_174_2;
          if (v_174_2_1) {
            v_174_3_1_1 = v_174_3;
          } else {
            v_174_3_1_0 = v_174_3;
          };
        } else {
          v_174_2_0 = v_174_2;
          if (v_174_2_0) {
            v_174_3_0_1 = v_174_3;
          } else {
            v_174_3_0_0 = v_174_3;
          };
        };
        if (v_176_1) {
          v_176_2_1 = v_176_2;
          if (v_176_2_1) {
            v_176_3_1_1 = v_176_3;
          } else {
            v_176_3_1_0 = v_176_3;
          };
        } else {
          v_176_2_0 = v_176_2;
          if (v_176_2_0) {
            v_176_3_0_1 = v_176_3;
          } else {
            v_176_3_0_0 = v_176_3;
          };
        };
        if (v_178_1) {
          v_178_2_1 = v_178_2;
          if (v_178_2_1) {
            v_178_3_1_1 = v_178_3;
          } else {
            v_178_3_1_0 = v_178_3;
          };
        } else {
          v_178_2_0 = v_178_2;
          if (v_178_2_0) {
            v_178_3_0_1 = v_178_3;
          } else {
            v_178_3_0_0 = v_178_3;
          };
        };
        if (v_180_1) {
          v_180_2_1 = v_180_2;
          if (v_180_2_1) {
            v_180_3_1_1 = v_180_3;
          } else {
            v_180_3_1_0 = v_180_3;
          };
        } else {
          v_180_2_0 = v_180_2;
          if (v_180_2_0) {
            v_180_3_0_1 = v_180_3;
          } else {
            v_180_3_0_0 = v_180_3;
          };
        };
        if (s_1_St_3_Idle_1) {
          s_1_St_3_Idle_2_1 = s_1_St_3_Idle_2;
          if (s_1_St_3_Idle_2_1) {
            s_1_St_3_Idle_3_1_1 = s_1_St_3_Idle_3;
          } else {
            s_1_St_3_Idle_3_1_0 = s_1_St_3_Idle_3;
          };
        } else {
          s_1_St_3_Idle_2_0 = s_1_St_3_Idle_2;
          if (s_1_St_3_Idle_2_0) {
            s_1_St_3_Idle_3_0_1 = s_1_St_3_Idle_3;
          } else {
            s_1_St_3_Idle_3_0_0 = s_1_St_3_Idle_3;
          };
        };
      } else {
        v_136 = (v_135&&c);
        if (v_136) {
          r_1_St_3_Morning = true;
        } else {
          r_1_St_3_Morning = self->pnr_1;
        };
        v_467 = r_1_St_3_Morning;
        if (v_136) {
          s_1_St_3_Morning_1 = false;
        } else {
          s_1_St_3_Morning_1 = false;
        };
        v_452 = s_1_St_3_Morning_1;
        if (v_136) {
          s_1_St_3_Morning_2 = true;
        } else {
          s_1_St_3_Morning_2 = true;
        };
        v_453 = s_1_St_3_Morning_2;
        if (v_136) {
          s_1_St_3_Morning_3 = true;
        } else {
          s_1_St_3_Morning_3 = false;
        };
        v_454 = s_1_St_3_Morning_3;
        if (s_1_St_3_Morning_1) {
          s_1_St_3_Morning_2_1 = s_1_St_3_Morning_2;
          if (s_1_St_3_Morning_2_1) {
            s_1_St_3_Morning_3_1_1 = s_1_St_3_Morning_3;
          } else {
            s_1_St_3_Morning_3_1_0 = s_1_St_3_Morning_3;
          };
        } else {
          s_1_St_3_Morning_2_0 = s_1_St_3_Morning_2;
          if (s_1_St_3_Morning_2_0) {
            s_1_St_3_Morning_3_0_1 = s_1_St_3_Morning_3;
          } else {
            s_1_St_3_Morning_3_0_0 = s_1_St_3_Morning_3;
          };
        };
      };
      v_461 = v_452;
      v_462 = v_453;
      v_463 = v_454;
      v_469 = v_467;
    } else {
      if (ck_3_4_0_0) {
        v_468 = true;
        v_455 = true;
        v_456 = true;
        v_457 = true;
      } else {
        v_124 = (v_123&&c);
        if (v_124) {
          r_1_St_3_Night = true;
        } else {
          r_1_St_3_Night = self->pnr_1;
        };
        v_468 = r_1_St_3_Night;
        if (v_124) {
          s_1_St_3_Night_1 = false;
        } else {
          s_1_St_3_Night_1 = false;
        };
        v_455 = s_1_St_3_Night_1;
        if (v_124) {
          s_1_St_3_Night_2 = true;
        } else {
          s_1_St_3_Night_2 = false;
        };
        v_456 = s_1_St_3_Night_2;
        if (v_124) {
          s_1_St_3_Night_3 = true;
        } else {
          s_1_St_3_Night_3 = false;
        };
        v_457 = s_1_St_3_Night_3;
      };
      v_461 = v_455;
      v_462 = v_456;
      v_463 = v_457;
      v_469 = v_468;
    };
    s_1_1 = v_461;
    s_1_2 = v_462;
    s_1_3 = v_463;
    r_1 = v_469;
  };
  ck_3_1 = s_1_1;
  ck_3_2 = s_1_2;
  ck_3_3 = s_1_3;
  if (ck_3_1) {
    ck_3_2_1 = ck_3_2;
    if (ck_3_2_1) {
      ck_3_3_1_1 = ck_3_3;
      if (ck_3_3_1_1) {
        cooling_on_1_St_3_Afternoon = true;
        v_413 = cooling_on_1_St_3_Afternoon;
        nr_1_St_3_Afternoon = false;
        v_437 = nr_1_St_3_Afternoon;
        ns_1_St_3_Afternoon_1 = true;
        v_419 = ns_1_St_3_Afternoon_1;
        ns_1_St_3_Afternoon_2 = true;
        v_420 = ns_1_St_3_Afternoon_2;
        ns_1_St_3_Afternoon_3 = true;
        v_421 = ns_1_St_3_Afternoon_3;
      } else {
        cooling_on_1_St_3_Dawn = true;
        nr_1_St_3_Dawn = false;
        ns_1_St_3_Dawn_1 = true;
        ns_1_St_3_Dawn_2 = true;
        ns_1_St_3_Dawn_3 = false;
        v_413 = cooling_on_1_St_3_Dawn;
        v_437 = nr_1_St_3_Dawn;
        v_419 = ns_1_St_3_Dawn_1;
        v_420 = ns_1_St_3_Dawn_2;
        v_421 = ns_1_St_3_Dawn_3;
      };
      v_415 = v_413;
      v_431 = v_419;
      v_432 = v_420;
      v_433 = v_421;
      v_439 = v_437;
      if (ck_3_3_1_1) {
        if (ns_1_St_3_Afternoon_1) {
          ns_1_St_3_Afternoon_2_1 = ns_1_St_3_Afternoon_2;
          if (ns_1_St_3_Afternoon_2_1) {
            ns_1_St_3_Afternoon_3_1_1 = ns_1_St_3_Afternoon_3;
          } else {
            ns_1_St_3_Afternoon_3_1_0 = ns_1_St_3_Afternoon_3;
          };
        } else {
          ns_1_St_3_Afternoon_2_0 = ns_1_St_3_Afternoon_2;
          if (ns_1_St_3_Afternoon_2_0) {
            ns_1_St_3_Afternoon_3_0_1 = ns_1_St_3_Afternoon_3;
          } else {
            ns_1_St_3_Afternoon_3_0_0 = ns_1_St_3_Afternoon_3;
          };
        };
      } else {
        if (ns_1_St_3_Dawn_1) {
          ns_1_St_3_Dawn_2_1 = ns_1_St_3_Dawn_2;
          if (ns_1_St_3_Dawn_2_1) {
            ns_1_St_3_Dawn_3_1_1 = ns_1_St_3_Dawn_3;
          } else {
            ns_1_St_3_Dawn_3_1_0 = ns_1_St_3_Dawn_3;
          };
        } else {
          ns_1_St_3_Dawn_2_0 = ns_1_St_3_Dawn_2;
          if (ns_1_St_3_Dawn_2_0) {
            ns_1_St_3_Dawn_3_0_1 = ns_1_St_3_Dawn_3;
          } else {
            ns_1_St_3_Dawn_3_0_0 = ns_1_St_3_Dawn_3;
          };
        };
      };
    } else {
      ck_3_3_1_0 = ck_3_3;
      if (ck_3_3_1_0) {
        v_414 = true;
        v_438 = true;
        v_422 = true;
        v_423 = true;
        v_424 = true;
      } else {
        cooling_on_1_St_3_Default = true;
        v_414 = cooling_on_1_St_3_Default;
        nr_1_St_3_Default = false;
        v_438 = nr_1_St_3_Default;
        ns_1_St_3_Default_1 = true;
        v_422 = ns_1_St_3_Default_1;
        ns_1_St_3_Default_2 = false;
        v_423 = ns_1_St_3_Default_2;
        ns_1_St_3_Default_3 = false;
        v_424 = ns_1_St_3_Default_3;
        if (ns_1_St_3_Default_1) {
          ns_1_St_3_Default_2_1 = ns_1_St_3_Default_2;
          if (ns_1_St_3_Default_2_1) {
            ns_1_St_3_Default_3_1_1 = ns_1_St_3_Default_3;
          } else {
            ns_1_St_3_Default_3_1_0 = ns_1_St_3_Default_3;
          };
        } else {
          ns_1_St_3_Default_2_0 = ns_1_St_3_Default_2;
          if (ns_1_St_3_Default_2_0) {
            ns_1_St_3_Default_3_0_1 = ns_1_St_3_Default_3;
          } else {
            ns_1_St_3_Default_3_0_0 = ns_1_St_3_Default_3;
          };
        };
      };
      v_415 = v_414;
      v_431 = v_422;
      v_432 = v_423;
      v_433 = v_424;
      v_439 = v_438;
    };
    cooling_on_1 = v_415;
    ns_1_1 = v_431;
    ns_1_2 = v_432;
    ns_1_3 = v_433;
    nr_1 = v_439;
  } else {
    ck_3_2_0 = ck_3_2;
    if (ck_3_2_0) {
      ck_3_3_0_1 = ck_3_3;
      if (ck_3_3_0_1) {
        cooling_on_1_St_3_Idle = false;
        nr_1_St_3_Idle = false;
        ns_1_St_3_Idle_1 = false;
        ns_1_St_3_Idle_2 = true;
        ns_1_St_3_Idle_3 = true;
        v_416 = cooling_on_1_St_3_Idle;
        v_440 = nr_1_St_3_Idle;
        v_425 = ns_1_St_3_Idle_1;
        v_426 = ns_1_St_3_Idle_2;
        v_427 = ns_1_St_3_Idle_3;
        if (ns_1_St_3_Idle_1) {
          ns_1_St_3_Idle_2_1 = ns_1_St_3_Idle_2;
          if (ns_1_St_3_Idle_2_1) {
            ns_1_St_3_Idle_3_1_1 = ns_1_St_3_Idle_3;
          } else {
            ns_1_St_3_Idle_3_1_0 = ns_1_St_3_Idle_3;
          };
        } else {
          ns_1_St_3_Idle_2_0 = ns_1_St_3_Idle_2;
          if (ns_1_St_3_Idle_2_0) {
            ns_1_St_3_Idle_3_0_1 = ns_1_St_3_Idle_3;
          } else {
            ns_1_St_3_Idle_3_0_0 = ns_1_St_3_Idle_3;
          };
        };
      } else {
        cooling_on_1_St_3_Morning = true;
        v_416 = cooling_on_1_St_3_Morning;
        nr_1_St_3_Morning = false;
        v_440 = nr_1_St_3_Morning;
        ns_1_St_3_Morning_1 = false;
        v_425 = ns_1_St_3_Morning_1;
        ns_1_St_3_Morning_2 = true;
        v_426 = ns_1_St_3_Morning_2;
        ns_1_St_3_Morning_3 = false;
        v_427 = ns_1_St_3_Morning_3;
        if (ns_1_St_3_Morning_1) {
          ns_1_St_3_Morning_2_1 = ns_1_St_3_Morning_2;
          if (ns_1_St_3_Morning_2_1) {
            ns_1_St_3_Morning_3_1_1 = ns_1_St_3_Morning_3;
          } else {
            ns_1_St_3_Morning_3_1_0 = ns_1_St_3_Morning_3;
          };
        } else {
          ns_1_St_3_Morning_2_0 = ns_1_St_3_Morning_2;
          if (ns_1_St_3_Morning_2_0) {
            ns_1_St_3_Morning_3_0_1 = ns_1_St_3_Morning_3;
          } else {
            ns_1_St_3_Morning_3_0_0 = ns_1_St_3_Morning_3;
          };
        };
      };
      v_418 = v_416;
      v_434 = v_425;
      v_435 = v_426;
      v_436 = v_427;
      v_442 = v_440;
    } else {
      ck_3_3_0_0 = ck_3_3;
      if (ck_3_3_0_0) {
        v_417 = true;
        v_441 = true;
        v_428 = true;
        v_429 = true;
        v_430 = true;
      } else {
        cooling_on_1_St_3_Night = true;
        v_417 = cooling_on_1_St_3_Night;
        nr_1_St_3_Night = false;
        v_441 = nr_1_St_3_Night;
        ns_1_St_3_Night_1 = false;
        v_428 = ns_1_St_3_Night_1;
        ns_1_St_3_Night_2 = false;
        v_429 = ns_1_St_3_Night_2;
        ns_1_St_3_Night_3 = false;
        v_430 = ns_1_St_3_Night_3;
      };
      v_418 = v_417;
      v_434 = v_428;
      v_435 = v_429;
      v_436 = v_430;
      v_442 = v_441;
    };
    cooling_on_1 = v_418;
    ns_1_1 = v_434;
    ns_1_2 = v_435;
    ns_1_3 = v_436;
    nr_1 = v_442;
  };
  _out->cooling_on = cooling_on_1;
  v = (_out->cooling_on&&_out->heating_on);
  v_120 = !(v);
  if (ns_1_1) {
    ns_1_2_1 = ns_1_2;
    if (ns_1_2_1) {
      ns_1_3_1_1 = ns_1_3;
    } else {
      ns_1_3_1_0 = ns_1_3;
    };
  } else {
    ns_1_2_0 = ns_1_2;
    if (ns_1_2_0) {
      ns_1_3_0_1 = ns_1_3;
    } else {
      ns_1_3_0_0 = ns_1_3;
    };
  };
  if (!(ck_3_1)) {
    if (!(ck_3_2_0)) {
      if (!(ck_3_3_0_0)) {
        if (ns_1_St_3_Night_1) {
          ns_1_St_3_Night_2_1 = ns_1_St_3_Night_2;
          if (ns_1_St_3_Night_2_1) {
            ns_1_St_3_Night_3_1_1 = ns_1_St_3_Night_3;
          } else {
            ns_1_St_3_Night_3_1_0 = ns_1_St_3_Night_3;
          };
        } else {
          ns_1_St_3_Night_2_0 = ns_1_St_3_Night_2;
          if (ns_1_St_3_Night_2_0) {
            ns_1_St_3_Night_3_0_1 = ns_1_St_3_Night_3;
          } else {
            ns_1_St_3_Night_3_0_0 = ns_1_St_3_Night_3;
          };
        };
      };
    };
  };
  if (s_1_1) {
    s_1_2_1 = s_1_2;
    if (s_1_2_1) {
      s_1_3_1_1 = s_1_3;
    } else {
      s_1_3_1_0 = s_1_3;
    };
  } else {
    s_1_2_0 = s_1_2;
    if (s_1_2_0) {
      s_1_3_0_1 = s_1_3;
    } else {
      s_1_3_0_0 = s_1_3;
    };
  };
  if (!(ck_1)) {
    if (!(ck_2_0)) {
      if (!(ck_3_4_0_0)) {
        if (s_1_St_3_Night_1) {
          s_1_St_3_Night_2_1 = s_1_St_3_Night_2;
          if (s_1_St_3_Night_2_1) {
            s_1_St_3_Night_3_1_1 = s_1_St_3_Night_3;
          } else {
            s_1_St_3_Night_3_1_0 = s_1_St_3_Night_3;
          };
        } else {
          s_1_St_3_Night_2_0 = s_1_St_3_Night_2;
          if (s_1_St_3_Night_2_0) {
            s_1_St_3_Night_3_0_1 = s_1_St_3_Night_3;
          } else {
            s_1_St_3_Night_3_0_0 = s_1_St_3_Night_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_386 = ns_1_4;
  self->v_387 = ns_2;
  self->v_388 = ns_3;
  self->pnr_1 = nr_1;
  self->v_443 = ns_1_1;
  self->v_444 = ns_1_2;
  self->v_445 = ns_1_3;;
}

