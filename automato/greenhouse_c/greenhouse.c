/* --- Generated the 12/3/2020 at 16:9 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s greenhouse greenhouse.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "greenhouse.h"

void Greenhouse__shift_reset(Greenhouse__shift_mem* self) {
  self->pnr = false;
  self->v_562 = false;
  self->v_563 = false;
}

void Greenhouse__shift_step(int time, Greenhouse__shift_out* _out,
                            Greenhouse__shift_mem* self) {
  
  int v_561;
  int v_560;
  int v_559;
  int v_558;
  int v_557;
  int v_556;
  int v_555;
  int v_554;
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
  int v_569;
  int v_568;
  int v_567;
  int v_566;
  int v_565;
  int v_564;
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
  ck_1_3 = self->v_562;
  ck_2 = self->v_563;
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
      v_568 = r_St_Day;
      v_564 = s_3_St_Day_1;
      v_565 = s_3_St_Day_2;
    } else {
      v_1 = (time<18);
      v = (time>=6);
      v_2 = (v||v_1);
      if (v_2) {
        r_St_Night = true;
      } else {
        r_St_Night = self->pnr;
      };
      v_568 = r_St_Night;
      if (v_2) {
        s_3_St_Night_1 = true;
      } else {
        s_3_St_Night_1 = true;
      };
      v_564 = s_3_St_Night_1;
      if (v_2) {
        s_3_St_Night_2 = true;
      } else {
        s_3_St_Night_2 = false;
      };
      v_565 = s_3_St_Night_2;
    };
    s_3_1 = v_564;
    s_3_2 = v_565;
    r = v_568;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_569 = true;
      v_566 = true;
      v_567 = true;
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
      v_569 = r_St_Start;
      if (v_8) {
        s_3_St_Start_1 = true;
      } else {
        s_3_St_Start_1 = v_12_1;
      };
      v_566 = s_3_St_Start_1;
      if (v_8) {
        s_3_St_Start_2 = false;
      } else {
        s_3_St_Start_2 = v_12_2;
      };
      v_567 = s_3_St_Start_2;
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
    s_3_1 = v_566;
    s_3_2 = v_567;
    r = v_569;
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
      v_554 = s_St_Day;
      v_560 = nr_St_Day;
      v_556 = ns_St_Day_1;
      v_557 = ns_St_Day_2;
    } else {
      s_St_Night = 2;
      v_554 = s_St_Night;
      nr_St_Night = false;
      v_560 = nr_St_Night;
      ns_St_Night_1 = true;
      v_556 = ns_St_Night_1;
      ns_St_Night_2 = false;
      v_557 = ns_St_Night_2;
    };
    _out->s = v_554;
    ns_1 = v_556;
    ns_2 = v_557;
    nr = v_560;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      v_555 = 0;
      v_561 = true;
      v_558 = true;
      v_559 = true;
    } else {
      s_St_Start = 0;
      v_555 = s_St_Start;
      nr_St_Start = false;
      v_561 = nr_St_Start;
      ns_St_Start_1 = false;
      v_558 = ns_St_Start_1;
      ns_St_Start_2 = false;
      v_559 = ns_St_Start_2;
      if (ns_St_Start_1) {
        ns_St_Start_2_1 = ns_St_Start_2;
      } else {
        ns_St_Start_2_0 = ns_St_Start_2;
      };
    };
    _out->s = v_555;
    ns_1 = v_558;
    ns_2 = v_559;
    nr = v_561;
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
  self->v_562 = ns_1;
  self->v_563 = ns_2;;
}

void Greenhouse__category_reset(Greenhouse__category_mem* self) {
  self->pnr = false;
  self->v_578 = false;
  self->v_579 = true;
}

void Greenhouse__category_step(int crop, Greenhouse__category_out* _out,
                               Greenhouse__category_mem* self) {
  
  int v_577;
  int v_576;
  int v_575;
  int v_574;
  int v_573;
  int v_572;
  int v_571;
  int v_570;
  int ns_St_1_Cool_2_0;
  int ns_St_1_Cool_2_1;
  int ns_St_1_Moderate_2_0;
  int ns_St_1_Moderate_2_1;
  int ns_St_1_Warm_2_0;
  int ns_St_1_Warm_2_1;
  int ns_St_1_Start_2_0;
  int ns_St_1_Start_2_1;
  int ck_2_2_0;
  int ck_2_2_1;
  int nr_St_1_Cool;
  int ns_St_1_Cool_2;
  int ns_St_1_Cool_1;
  int cat_St_1_Cool;
  int nr_St_1_Moderate;
  int ns_St_1_Moderate_2;
  int ns_St_1_Moderate_1;
  int cat_St_1_Moderate;
  int nr_St_1_Warm;
  int ns_St_1_Warm_2;
  int ns_St_1_Warm_1;
  int cat_St_1_Warm;
  int nr_St_1_Start;
  int ns_St_1_Start_2;
  int ns_St_1_Start_1;
  int cat_St_1_Start;
  int ck_2_2;
  int ck_2_1;
  int v_30_2_0;
  int v_30_2_1;
  int v_28_2_0;
  int v_28_2_1;
  int v_31;
  int v_30_2;
  int v_30_1;
  int v_29;
  int v_28_2;
  int v_28_1;
  int v_27;
  int v_26;
  int v_25;
  int v_23_2_0;
  int v_23_2_1;
  int v_24;
  int v_23_2;
  int v_23_1;
  int v_22;
  int v_21;
  int v_19_2_0;
  int v_19_2_1;
  int v_20;
  int v_19_2;
  int v_19_1;
  int v_18;
  int v_17;
  int v_15_2_0;
  int v_15_2_1;
  int v_16;
  int v_15_2;
  int v_15_1;
  int v_14;
  int v;
  int v_585;
  int v_584;
  int v_583;
  int v_582;
  int v_581;
  int v_580;
  int s_St_1_Cool_2_0;
  int s_St_1_Cool_2_1;
  int s_St_1_Moderate_2_0;
  int s_St_1_Moderate_2_1;
  int s_St_1_Warm_2_0;
  int s_St_1_Warm_2_1;
  int s_St_1_Start_2_0;
  int s_St_1_Start_2_1;
  int ck_2_3_0;
  int ck_2_3_1;
  int r_St_1_Cool;
  int s_St_1_Cool_2;
  int s_St_1_Cool_1;
  int r_St_1_Moderate;
  int s_St_1_Moderate_2;
  int s_St_1_Moderate_1;
  int r_St_1_Warm;
  int s_St_1_Warm_2;
  int s_St_1_Warm_1;
  int r_St_1_Start;
  int s_St_1_Start_2;
  int s_St_1_Start_1;
  int ck_2_3;
  int ck_1;
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
  ck_1 = self->v_578;
  ck_2_3 = self->v_579;
  if (ck_1) {
    ck_2_3_1 = ck_2_3;
    if (ck_2_3_1) {
      v_14 = (crop==2);
      if (v_14) {
        v_16 = true;
        v_15_1 = true;
        v_15_2 = false;
      } else {
        v_16 = self->pnr;
        v_15_1 = true;
        v_15_2 = true;
      };
      v = (crop==1);
      if (v) {
        r_St_1_Cool = true;
      } else {
        r_St_1_Cool = v_16;
      };
      v_584 = r_St_1_Cool;
      if (v) {
        s_St_1_Cool_1 = false;
      } else {
        s_St_1_Cool_1 = v_15_1;
      };
      v_580 = s_St_1_Cool_1;
      if (v) {
        s_St_1_Cool_2 = false;
      } else {
        s_St_1_Cool_2 = v_15_2;
      };
      v_581 = s_St_1_Cool_2;
    } else {
      v_18 = (crop==3);
      if (v_18) {
        v_20 = true;
        v_19_1 = true;
        v_19_2 = true;
      } else {
        v_20 = self->pnr;
        v_19_1 = true;
        v_19_2 = false;
      };
      v_17 = (crop==1);
      if (v_17) {
        r_St_1_Moderate = true;
        s_St_1_Moderate_1 = false;
        s_St_1_Moderate_2 = false;
      } else {
        r_St_1_Moderate = v_20;
        s_St_1_Moderate_1 = v_19_1;
        s_St_1_Moderate_2 = v_19_2;
      };
      v_584 = r_St_1_Moderate;
      v_580 = s_St_1_Moderate_1;
      v_581 = s_St_1_Moderate_2;
    };
    s_1 = v_580;
    s_2 = v_581;
    r = v_584;
  } else {
    ck_2_3_0 = ck_2_3;
    if (ck_2_3_0) {
      v_27 = (crop==3);
      if (v_27) {
        v_29 = true;
        v_28_1 = true;
        v_28_2 = true;
      } else {
        v_29 = self->pnr;
        v_28_1 = false;
        v_28_2 = true;
      };
      v_26 = (crop==2);
      if (v_26) {
        v_31 = true;
        v_30_1 = true;
        v_30_2 = false;
      } else {
        v_31 = v_29;
        v_30_1 = v_28_1;
        v_30_2 = v_28_2;
      };
      v_25 = (crop==1);
      if (v_25) {
        r_St_1_Start = true;
        s_St_1_Start_1 = false;
        s_St_1_Start_2 = false;
      } else {
        r_St_1_Start = v_31;
        s_St_1_Start_1 = v_30_1;
        s_St_1_Start_2 = v_30_2;
      };
      v_585 = r_St_1_Start;
      v_582 = s_St_1_Start_1;
      v_583 = s_St_1_Start_2;
      if (v_28_1) {
        v_28_2_1 = v_28_2;
      } else {
        v_28_2_0 = v_28_2;
      };
      if (v_30_1) {
        v_30_2_1 = v_30_2;
      } else {
        v_30_2_0 = v_30_2;
      };
      if (s_St_1_Start_1) {
        s_St_1_Start_2_1 = s_St_1_Start_2;
      } else {
        s_St_1_Start_2_0 = s_St_1_Start_2;
      };
    } else {
      v_22 = (crop==3);
      if (v_22) {
        v_24 = true;
        v_23_1 = true;
        v_23_2 = true;
      } else {
        v_24 = self->pnr;
        v_23_1 = false;
        v_23_2 = false;
      };
      v_21 = (crop==2);
      if (v_21) {
        r_St_1_Warm = true;
      } else {
        r_St_1_Warm = v_24;
      };
      v_585 = r_St_1_Warm;
      if (v_21) {
        s_St_1_Warm_1 = true;
      } else {
        s_St_1_Warm_1 = v_23_1;
      };
      v_582 = s_St_1_Warm_1;
      if (v_21) {
        s_St_1_Warm_2 = false;
      } else {
        s_St_1_Warm_2 = v_23_2;
      };
      v_583 = s_St_1_Warm_2;
      if (v_23_1) {
        v_23_2_1 = v_23_2;
      } else {
        v_23_2_0 = v_23_2;
      };
      if (s_St_1_Warm_1) {
        s_St_1_Warm_2_1 = s_St_1_Warm_2;
      } else {
        s_St_1_Warm_2_0 = s_St_1_Warm_2;
      };
    };
    s_1 = v_582;
    s_2 = v_583;
    r = v_585;
  };
  ck_2_1 = s_1;
  ck_2_2 = s_2;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      cat_St_1_Cool = 3;
      v_570 = cat_St_1_Cool;
      nr_St_1_Cool = false;
      v_576 = nr_St_1_Cool;
      ns_St_1_Cool_1 = true;
      v_572 = ns_St_1_Cool_1;
      ns_St_1_Cool_2 = true;
      v_573 = ns_St_1_Cool_2;
    } else {
      cat_St_1_Moderate = 2;
      nr_St_1_Moderate = false;
      ns_St_1_Moderate_1 = true;
      ns_St_1_Moderate_2 = false;
      v_570 = cat_St_1_Moderate;
      v_576 = nr_St_1_Moderate;
      v_572 = ns_St_1_Moderate_1;
      v_573 = ns_St_1_Moderate_2;
    };
    _out->cat = v_570;
    ns_1 = v_572;
    ns_2 = v_573;
    nr = v_576;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      cat_St_1_Start = 0;
      nr_St_1_Start = false;
      ns_St_1_Start_1 = false;
      ns_St_1_Start_2 = true;
      v_571 = cat_St_1_Start;
      v_577 = nr_St_1_Start;
      v_574 = ns_St_1_Start_1;
      v_575 = ns_St_1_Start_2;
      if (ns_St_1_Start_1) {
        ns_St_1_Start_2_1 = ns_St_1_Start_2;
      } else {
        ns_St_1_Start_2_0 = ns_St_1_Start_2;
      };
    } else {
      cat_St_1_Warm = 1;
      v_571 = cat_St_1_Warm;
      nr_St_1_Warm = false;
      v_577 = nr_St_1_Warm;
      ns_St_1_Warm_1 = false;
      v_574 = ns_St_1_Warm_1;
      ns_St_1_Warm_2 = false;
      v_575 = ns_St_1_Warm_2;
      if (ns_St_1_Warm_1) {
        ns_St_1_Warm_2_1 = ns_St_1_Warm_2;
      } else {
        ns_St_1_Warm_2_0 = ns_St_1_Warm_2;
      };
    };
    _out->cat = v_571;
    ns_1 = v_574;
    ns_2 = v_575;
    nr = v_577;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_2_1) {
    if (ck_2_2_1) {
      if (ns_St_1_Cool_1) {
        ns_St_1_Cool_2_1 = ns_St_1_Cool_2;
      } else {
        ns_St_1_Cool_2_0 = ns_St_1_Cool_2;
      };
    } else {
      if (ns_St_1_Moderate_1) {
        ns_St_1_Moderate_2_1 = ns_St_1_Moderate_2;
      } else {
        ns_St_1_Moderate_2_0 = ns_St_1_Moderate_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (ck_1) {
    if (ck_2_3_1) {
      if (v_15_1) {
        v_15_2_1 = v_15_2;
      } else {
        v_15_2_0 = v_15_2;
      };
      if (s_St_1_Cool_1) {
        s_St_1_Cool_2_1 = s_St_1_Cool_2;
      } else {
        s_St_1_Cool_2_0 = s_St_1_Cool_2;
      };
    } else {
      if (v_19_1) {
        v_19_2_1 = v_19_2;
      } else {
        v_19_2_0 = v_19_2;
      };
      if (s_St_1_Moderate_1) {
        s_St_1_Moderate_2_1 = s_St_1_Moderate_2;
      } else {
        s_St_1_Moderate_2_0 = s_St_1_Moderate_2;
      };
    };
  };
  self->pnr = nr;
  self->v_578 = ns_1;
  self->v_579 = ns_2;;
}

void Greenhouse__heating_reset(Greenhouse__heating_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Greenhouse__heating_step(int c, Greenhouse__heating_out* _out,
                              Greenhouse__heating_mem* self) {
  
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

void Greenhouse__cooling_reset(Greenhouse__cooling_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Greenhouse__cooling_step(int c, Greenhouse__cooling_out* _out,
                              Greenhouse__cooling_mem* self) {
  
  int nr_St_3_On;
  int ns_St_3_On_1;
  int status_St_3_On;
  int nr_St_3_Off;
  int ns_St_3_Off_1;
  int status_St_3_Off;
  int ck_4_1;
  int v;
  int r_St_3_On;
  int s_St_3_On_1;
  int r_St_3_Off;
  int s_St_3_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v = !(c);
    if (v) {
      r_St_3_Off = true;
      s_St_3_Off_1 = false;
    } else {
      r_St_3_Off = self->pnr;
      s_St_3_Off_1 = true;
    };
    r = r_St_3_Off;
    s_1 = s_St_3_Off_1;
  } else {
    if (c) {
      r_St_3_On = true;
    } else {
      r_St_3_On = self->pnr;
    };
    r = r_St_3_On;
    if (c) {
      s_St_3_On_1 = true;
    } else {
      s_St_3_On_1 = false;
    };
    s_1 = s_St_3_On_1;
  };
  ck_4_1 = s_1;
  if (ck_4_1) {
    status_St_3_Off = false;
    nr_St_3_Off = false;
    ns_St_3_Off_1 = true;
    _out->status = status_St_3_Off;
    nr = nr_St_3_Off;
    ns_1 = ns_St_3_Off_1;
  } else {
    status_St_3_On = true;
    _out->status = status_St_3_On;
    nr_St_3_On = false;
    nr = nr_St_3_On;
    ns_St_3_On_1 = false;
    ns_1 = ns_St_3_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Greenhouse__checkT_reset(Greenhouse__checkT_mem* self) {
  self->pnr = false;
  self->v_594 = false;
  self->v_595 = false;
}

void Greenhouse__checkT_step(int cat, int s, int t_in,
                             Greenhouse__checkT_out* _out,
                             Greenhouse__checkT_mem* self) {
  
  int v_593;
  int v_592;
  int v_591;
  int v_590;
  int v_589;
  int v_588;
  int v_587;
  int v_586;
  int ns_St_4_Cool_2_0;
  int ns_St_4_Cool_2_1;
  int ns_St_4_Heat_2_0;
  int ns_St_4_Heat_2_1;
  int ns_St_4_Na_2_0;
  int ns_St_4_Na_2_1;
  int ck_5_2_0;
  int ck_5_2_1;
  int nr_St_4_Cool;
  int ns_St_4_Cool_2;
  int ns_St_4_Cool_1;
  int st_St_4_Cool;
  int nr_St_4_Heat;
  int ns_St_4_Heat_2;
  int ns_St_4_Heat_1;
  int st_St_4_Heat;
  int nr_St_4_Na;
  int ns_St_4_Na_2;
  int ns_St_4_Na_1;
  int st_St_4_Na;
  int ck_5_2;
  int ck_5_1;
  int v_269_2_0;
  int v_269_2_1;
  int v_270;
  int v_269_2;
  int v_269_1;
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
  int v_197_2_0;
  int v_197_2_1;
  int v_198;
  int v_197_2;
  int v_197_1;
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
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_113_2_0;
  int v_113_2_1;
  int v_114;
  int v_113_2;
  int v_113_1;
  int v_112;
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
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
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
  int v;
  int v_601;
  int v_600;
  int v_599;
  int v_598;
  int v_597;
  int v_596;
  int s_4_St_4_Cool_2_0;
  int s_4_St_4_Cool_2_1;
  int s_4_St_4_Heat_2_0;
  int s_4_St_4_Heat_2_1;
  int s_4_St_4_Na_2_0;
  int s_4_St_4_Na_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_4_Cool;
  int s_4_St_4_Cool_2;
  int s_4_St_4_Cool_1;
  int r_St_4_Heat;
  int s_4_St_4_Heat_2;
  int s_4_St_4_Heat_1;
  int r_St_4_Na;
  int s_4_St_4_Na_2;
  int s_4_St_4_Na_1;
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
  ck_1 = self->v_594;
  ck_2 = self->v_595;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_110 = (t_in<=16);
      v_108 = (t_in>=10);
      v_106 = (s==2);
      v_105 = (cat==3);
      v_107 = (v_105&&v_106);
      v_109 = (v_107&&v_108);
      v_111 = (v_109&&v_110);
      v_102 = (t_in<=27);
      v_100 = (t_in>=21);
      v_98 = (s==1);
      v_97 = (cat==3);
      v_99 = (v_97&&v_98);
      v_101 = (v_99&&v_100);
      v_103 = (v_101&&v_102);
      v_94 = (t_in<=18);
      v_92 = (t_in>=16);
      v_90 = (s==2);
      v_89 = (cat==2);
      v_91 = (v_89&&v_90);
      v_93 = (v_91&&v_92);
      v_95 = (v_93&&v_94);
      v_86 = (t_in<=27);
      v_84 = (t_in>=24);
      v_82 = (s==1);
      v_81 = (cat==2);
      v_83 = (v_81&&v_82);
      v_85 = (v_83&&v_84);
      v_87 = (v_85&&v_86);
      v_78 = (t_in<=27);
      v_76 = (t_in>=24);
      v_74 = (s==2);
      v_73 = (cat==1);
      v_75 = (v_73&&v_74);
      v_77 = (v_75&&v_76);
      v_79 = (v_77&&v_78);
      v_71 = (t_in<=38);
      v_69 = (t_in>=27);
      v_67 = (s==1);
      v_66 = (cat==1);
      v_68 = (v_66&&v_67);
      v_70 = (v_68&&v_69);
      v_72 = (v_70&&v_71);
      v_80 = (v_72||v_79);
      v_88 = (v_80||v_87);
      v_96 = (v_88||v_95);
      v_104 = (v_96||v_103);
      v_112 = (v_104||v_111);
      if (v_112) {
        v_114 = true;
        v_113_1 = false;
        v_113_2 = false;
      } else {
        v_114 = self->pnr;
        v_113_1 = true;
        v_113_2 = true;
      };
      v_63 = (t_in<10);
      v_61 = (s==2);
      v_60 = (cat==3);
      v_62 = (v_60&&v_61);
      v_64 = (v_62&&v_63);
      v_57 = (t_in<21);
      v_55 = (s==1);
      v_54 = (cat==3);
      v_56 = (v_54&&v_55);
      v_58 = (v_56&&v_57);
      v_51 = (t_in<16);
      v_49 = (s==2);
      v_48 = (cat==2);
      v_50 = (v_48&&v_49);
      v_52 = (v_50&&v_51);
      v_45 = (t_in<24);
      v_43 = (s==1);
      v_42 = (cat==2);
      v_44 = (v_42&&v_43);
      v_46 = (v_44&&v_45);
      v_39 = (t_in<24);
      v_37 = (s==2);
      v_36 = (cat==1);
      v_38 = (v_36&&v_37);
      v_40 = (v_38&&v_39);
      v_34 = (t_in<27);
      v_32 = (s==1);
      v = (cat==1);
      v_33 = (v&&v_32);
      v_35 = (v_33&&v_34);
      v_41 = (v_35||v_40);
      v_47 = (v_41||v_46);
      v_53 = (v_47||v_52);
      v_59 = (v_53||v_58);
      v_65 = (v_59||v_64);
      if (v_65) {
        r_St_4_Cool = true;
      } else {
        r_St_4_Cool = v_114;
      };
      v_600 = r_St_4_Cool;
      if (v_65) {
        s_4_St_4_Cool_1 = true;
      } else {
        s_4_St_4_Cool_1 = v_113_1;
      };
      v_596 = s_4_St_4_Cool_1;
      if (v_65) {
        s_4_St_4_Cool_2 = false;
      } else {
        s_4_St_4_Cool_2 = v_113_2;
      };
      v_597 = s_4_St_4_Cool_2;
    } else {
      v_194 = (t_in<=16);
      v_192 = (t_in>=10);
      v_190 = (s==2);
      v_189 = (cat==3);
      v_191 = (v_189&&v_190);
      v_193 = (v_191&&v_192);
      v_195 = (v_193&&v_194);
      v_186 = (t_in<=27);
      v_184 = (t_in>=21);
      v_182 = (s==1);
      v_181 = (cat==3);
      v_183 = (v_181&&v_182);
      v_185 = (v_183&&v_184);
      v_187 = (v_185&&v_186);
      v_178 = (t_in<=18);
      v_176 = (t_in>=16);
      v_174 = (s==2);
      v_173 = (cat==2);
      v_175 = (v_173&&v_174);
      v_177 = (v_175&&v_176);
      v_179 = (v_177&&v_178);
      v_170 = (t_in<=27);
      v_168 = (t_in>=24);
      v_166 = (s==1);
      v_165 = (cat==2);
      v_167 = (v_165&&v_166);
      v_169 = (v_167&&v_168);
      v_171 = (v_169&&v_170);
      v_162 = (t_in<=27);
      v_160 = (t_in>=24);
      v_158 = (s==2);
      v_157 = (cat==1);
      v_159 = (v_157&&v_158);
      v_161 = (v_159&&v_160);
      v_163 = (v_161&&v_162);
      v_155 = (t_in<=38);
      v_153 = (t_in>=27);
      v_151 = (s==1);
      v_150 = (cat==1);
      v_152 = (v_150&&v_151);
      v_154 = (v_152&&v_153);
      v_156 = (v_154&&v_155);
      v_164 = (v_156||v_163);
      v_172 = (v_164||v_171);
      v_180 = (v_172||v_179);
      v_188 = (v_180||v_187);
      v_196 = (v_188||v_195);
      if (v_196) {
        v_198 = true;
        v_197_1 = false;
        v_197_2 = false;
      } else {
        v_198 = self->pnr;
        v_197_1 = true;
        v_197_2 = false;
      };
      v_147 = (t_in>16);
      v_145 = (s==2);
      v_144 = (cat==3);
      v_146 = (v_144&&v_145);
      v_148 = (v_146&&v_147);
      v_141 = (t_in>27);
      v_139 = (s==1);
      v_138 = (cat==3);
      v_140 = (v_138&&v_139);
      v_142 = (v_140&&v_141);
      v_135 = (t_in>18);
      v_133 = (s==2);
      v_132 = (cat==2);
      v_134 = (v_132&&v_133);
      v_136 = (v_134&&v_135);
      v_129 = (t_in>27);
      v_127 = (s==1);
      v_126 = (cat==2);
      v_128 = (v_126&&v_127);
      v_130 = (v_128&&v_129);
      v_123 = (t_in>27);
      v_121 = (s==2);
      v_120 = (cat==1);
      v_122 = (v_120&&v_121);
      v_124 = (v_122&&v_123);
      v_118 = (t_in>38);
      v_116 = (s==1);
      v_115 = (cat==1);
      v_117 = (v_115&&v_116);
      v_119 = (v_117&&v_118);
      v_125 = (v_119||v_124);
      v_131 = (v_125||v_130);
      v_137 = (v_131||v_136);
      v_143 = (v_137||v_142);
      v_149 = (v_143||v_148);
      if (v_149) {
        r_St_4_Heat = true;
        s_4_St_4_Heat_1 = true;
        s_4_St_4_Heat_2 = true;
      } else {
        r_St_4_Heat = v_198;
        s_4_St_4_Heat_1 = v_197_1;
        s_4_St_4_Heat_2 = v_197_2;
      };
      v_600 = r_St_4_Heat;
      v_596 = s_4_St_4_Heat_1;
      v_597 = s_4_St_4_Heat_2;
    };
    s_4_1 = v_596;
    s_4_2 = v_597;
    r = v_600;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_601 = true;
      v_598 = true;
      v_599 = true;
    } else {
      v_266 = (t_in>16);
      v_264 = (s==2);
      v_263 = (cat==3);
      v_265 = (v_263&&v_264);
      v_267 = (v_265&&v_266);
      v_260 = (t_in>27);
      v_258 = (s==1);
      v_257 = (cat==3);
      v_259 = (v_257&&v_258);
      v_261 = (v_259&&v_260);
      v_254 = (t_in>18);
      v_252 = (s==2);
      v_251 = (cat==2);
      v_253 = (v_251&&v_252);
      v_255 = (v_253&&v_254);
      v_248 = (t_in>27);
      v_246 = (s==1);
      v_245 = (cat==2);
      v_247 = (v_245&&v_246);
      v_249 = (v_247&&v_248);
      v_242 = (t_in>27);
      v_240 = (s==2);
      v_239 = (cat==1);
      v_241 = (v_239&&v_240);
      v_243 = (v_241&&v_242);
      v_237 = (t_in>38);
      v_235 = (s==1);
      v_234 = (cat==1);
      v_236 = (v_234&&v_235);
      v_238 = (v_236&&v_237);
      v_244 = (v_238||v_243);
      v_250 = (v_244||v_249);
      v_256 = (v_250||v_255);
      v_262 = (v_256||v_261);
      v_268 = (v_262||v_267);
      if (v_268) {
        v_270 = true;
        v_269_1 = true;
        v_269_2 = true;
      } else {
        v_270 = self->pnr;
        v_269_1 = false;
        v_269_2 = false;
      };
      v_231 = (t_in<10);
      v_229 = (s==2);
      v_228 = (cat==3);
      v_230 = (v_228&&v_229);
      v_232 = (v_230&&v_231);
      v_225 = (t_in<21);
      v_223 = (s==1);
      v_222 = (cat==3);
      v_224 = (v_222&&v_223);
      v_226 = (v_224&&v_225);
      v_219 = (t_in<16);
      v_217 = (s==2);
      v_216 = (cat==2);
      v_218 = (v_216&&v_217);
      v_220 = (v_218&&v_219);
      v_213 = (t_in<24);
      v_211 = (s==1);
      v_210 = (cat==2);
      v_212 = (v_210&&v_211);
      v_214 = (v_212&&v_213);
      v_207 = (t_in<24);
      v_205 = (s==2);
      v_204 = (cat==1);
      v_206 = (v_204&&v_205);
      v_208 = (v_206&&v_207);
      v_202 = (t_in<27);
      v_200 = (s==1);
      v_199 = (cat==1);
      v_201 = (v_199&&v_200);
      v_203 = (v_201&&v_202);
      v_209 = (v_203||v_208);
      v_215 = (v_209||v_214);
      v_221 = (v_215||v_220);
      v_227 = (v_221||v_226);
      v_233 = (v_227||v_232);
      if (v_233) {
        r_St_4_Na = true;
      } else {
        r_St_4_Na = v_270;
      };
      v_601 = r_St_4_Na;
      if (v_233) {
        s_4_St_4_Na_1 = true;
      } else {
        s_4_St_4_Na_1 = v_269_1;
      };
      v_598 = s_4_St_4_Na_1;
      if (v_233) {
        s_4_St_4_Na_2 = false;
      } else {
        s_4_St_4_Na_2 = v_269_2;
      };
      v_599 = s_4_St_4_Na_2;
      if (v_269_1) {
        v_269_2_1 = v_269_2;
      } else {
        v_269_2_0 = v_269_2;
      };
      if (s_4_St_4_Na_1) {
        s_4_St_4_Na_2_1 = s_4_St_4_Na_2;
      } else {
        s_4_St_4_Na_2_0 = s_4_St_4_Na_2;
      };
    };
    s_4_1 = v_598;
    s_4_2 = v_599;
    r = v_601;
  };
  ck_5_1 = s_4_1;
  ck_5_2 = s_4_2;
  if (ck_5_1) {
    ck_5_2_1 = ck_5_2;
    if (ck_5_2_1) {
      st_St_4_Cool = 2;
      v_586 = st_St_4_Cool;
      nr_St_4_Cool = false;
      v_592 = nr_St_4_Cool;
      ns_St_4_Cool_1 = true;
      v_588 = ns_St_4_Cool_1;
      ns_St_4_Cool_2 = true;
      v_589 = ns_St_4_Cool_2;
    } else {
      st_St_4_Heat = 1;
      nr_St_4_Heat = false;
      ns_St_4_Heat_1 = true;
      ns_St_4_Heat_2 = false;
      v_586 = st_St_4_Heat;
      v_592 = nr_St_4_Heat;
      v_588 = ns_St_4_Heat_1;
      v_589 = ns_St_4_Heat_2;
    };
    _out->st = v_586;
    ns_1 = v_588;
    ns_2 = v_589;
    nr = v_592;
  } else {
    ck_5_2_0 = ck_5_2;
    if (ck_5_2_0) {
      v_587 = 0;
      v_593 = true;
      v_590 = true;
      v_591 = true;
    } else {
      st_St_4_Na = 0;
      v_587 = st_St_4_Na;
      nr_St_4_Na = false;
      v_593 = nr_St_4_Na;
      ns_St_4_Na_1 = false;
      v_590 = ns_St_4_Na_1;
      ns_St_4_Na_2 = false;
      v_591 = ns_St_4_Na_2;
      if (ns_St_4_Na_1) {
        ns_St_4_Na_2_1 = ns_St_4_Na_2;
      } else {
        ns_St_4_Na_2_0 = ns_St_4_Na_2;
      };
    };
    _out->st = v_587;
    ns_1 = v_590;
    ns_2 = v_591;
    nr = v_593;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_5_1) {
    if (ck_5_2_1) {
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
  if (s_4_1) {
    s_4_2_1 = s_4_2;
  } else {
    s_4_2_0 = s_4_2;
  };
  if (ck_1) {
    if (ck_2_1) {
      if (v_113_1) {
        v_113_2_1 = v_113_2;
      } else {
        v_113_2_0 = v_113_2;
      };
      if (s_4_St_4_Cool_1) {
        s_4_St_4_Cool_2_1 = s_4_St_4_Cool_2;
      } else {
        s_4_St_4_Cool_2_0 = s_4_St_4_Cool_2;
      };
    } else {
      if (v_197_1) {
        v_197_2_1 = v_197_2;
      } else {
        v_197_2_0 = v_197_2;
      };
      if (s_4_St_4_Heat_1) {
        s_4_St_4_Heat_2_1 = s_4_St_4_Heat_2;
      } else {
        s_4_St_4_Heat_2_0 = s_4_St_4_Heat_2;
      };
    };
  };
  self->pnr = nr;
  self->v_594 = ns_1;
  self->v_595 = ns_2;;
}

void Greenhouse__greenhouse_reset(Greenhouse__greenhouse_mem* self) {
  self->pnr = false;
  self->v_610 = false;
  self->v_611 = false;
  self->pnr_1 = false;
  self->v_626 = false;
  self->v_627 = false;
  self->pnr_2 = false;
  self->v_642 = false;
  self->v_643 = true;
  self->pnr_3 = false;
  self->ck_7_1 = true;
  self->pnr_4 = false;
  self->ck_1 = true;
}

void Greenhouse__greenhouse_step(int crop, int t_in, int time,
                                 Greenhouse__greenhouse_out* _out,
                                 Greenhouse__greenhouse_mem* self) {
  Greenhouse_controller__greenhouse_controller_out Greenhouse_controller__greenhouse_controller_out_st;
  
  int v_609;
  int v_608;
  int v_607;
  int v_606;
  int v_605;
  int v_604;
  int v_603;
  int v_602;
  int ns_St_5_Cool_2_0;
  int ns_St_5_Cool_2_1;
  int ns_St_5_Heat_2_0;
  int ns_St_5_Heat_2_1;
  int ns_St_5_Na_2_0;
  int ns_St_5_Na_2_1;
  int ck_14_2_0;
  int ck_14_2_1;
  int nr_St_5_Cool;
  int ns_St_5_Cool_2;
  int ns_St_5_Cool_1;
  int st_1_St_5_Cool;
  int nr_St_5_Heat;
  int ns_St_5_Heat_2;
  int ns_St_5_Heat_1;
  int st_1_St_5_Heat;
  int nr_St_5_Na;
  int ns_St_5_Na_2;
  int ns_St_5_Na_1;
  int st_1_St_5_Na;
  int ck_14_2;
  int ck_14_1;
  int v_552_2_0;
  int v_552_2_1;
  int v_553;
  int v_552_2;
  int v_552_1;
  int v_551;
  int v_550;
  int v_549;
  int v_548;
  int v_547;
  int v_546;
  int v_545;
  int v_544;
  int v_543;
  int v_542;
  int v_541;
  int v_540;
  int v_539;
  int v_538;
  int v_537;
  int v_536;
  int v_535;
  int v_534;
  int v_533;
  int v_532;
  int v_531;
  int v_530;
  int v_529;
  int v_528;
  int v_527;
  int v_526;
  int v_525;
  int v_524;
  int v_523;
  int v_522;
  int v_521;
  int v_520;
  int v_519;
  int v_518;
  int v_517;
  int v_516;
  int v_515;
  int v_514;
  int v_513;
  int v_512;
  int v_511;
  int v_510;
  int v_509;
  int v_508;
  int v_507;
  int v_506;
  int v_505;
  int v_504;
  int v_503;
  int v_502;
  int v_501;
  int v_500;
  int v_499;
  int v_498;
  int v_497;
  int v_496;
  int v_495;
  int v_494;
  int v_493;
  int v_492;
  int v_491;
  int v_490;
  int v_489;
  int v_488;
  int v_487;
  int v_486;
  int v_485;
  int v_484;
  int v_483;
  int v_482;
  int v_480_2_0;
  int v_480_2_1;
  int v_481;
  int v_480_2;
  int v_480_1;
  int v_479;
  int v_478;
  int v_477;
  int v_476;
  int v_475;
  int v_474;
  int v_473;
  int v_472;
  int v_471;
  int v_470;
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
  int v_445;
  int v_444;
  int v_443;
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
  int v_396_2_0;
  int v_396_2_1;
  int v_397;
  int v_396_2;
  int v_396_1;
  int v_395;
  int v_394;
  int v_393;
  int v_392;
  int v_391;
  int v_390;
  int v_389;
  int v_388;
  int v_387;
  int v_386;
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
  int v_331;
  int v_330;
  int v_329;
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
  int v_617;
  int v_616;
  int v_615;
  int v_614;
  int v_613;
  int v_612;
  int s_5_St_5_Cool_2_0;
  int s_5_St_5_Cool_2_1;
  int s_5_St_5_Heat_2_0;
  int s_5_St_5_Heat_2_1;
  int s_5_St_5_Na_2_0;
  int s_5_St_5_Na_2_1;
  int ck_13_2_0;
  int ck_13_2_1;
  int r_St_5_Cool;
  int s_5_St_5_Cool_2;
  int s_5_St_5_Cool_1;
  int r_St_5_Heat;
  int s_5_St_5_Heat_2;
  int s_5_St_5_Heat_1;
  int r_St_5_Na;
  int s_5_St_5_Na_2;
  int s_5_St_5_Na_1;
  int ck_13_2;
  int ck_13_1;
  int v_625;
  int v_624;
  int v_623;
  int v_622;
  int v_621;
  int v_620;
  int v_619;
  int v_618;
  int ns_1_St_6_Night_2_0;
  int ns_1_St_6_Night_2_1;
  int ns_1_St_6_Day_2_0;
  int ns_1_St_6_Day_2_1;
  int ns_1_St_6_Start_2_0;
  int ns_1_St_6_Start_2_1;
  int ck_12_2_0;
  int ck_12_2_1;
  int nr_1_St_6_Night;
  int ns_1_St_6_Night_2;
  int ns_1_St_6_Night_1;
  int s_1_St_6_Night;
  int nr_1_St_6_Day;
  int ns_1_St_6_Day_2;
  int ns_1_St_6_Day_1;
  int s_1_St_6_Day;
  int nr_1_St_6_Start;
  int ns_1_St_6_Start_2;
  int ns_1_St_6_Start_1;
  int s_1_St_6_Start;
  int ck_12_2;
  int ck_12_1;
  int v_312_2_0;
  int v_312_2_1;
  int v_313;
  int v_312_2;
  int v_312_1;
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
  int v_633;
  int v_632;
  int v_631;
  int v_630;
  int v_629;
  int v_628;
  int s_6_St_6_Night_2_0;
  int s_6_St_6_Night_2_1;
  int s_6_St_6_Day_2_0;
  int s_6_St_6_Day_2_1;
  int s_6_St_6_Start_2_0;
  int s_6_St_6_Start_2_1;
  int ck_11_2_0;
  int ck_11_2_1;
  int r_1_St_6_Night;
  int s_6_St_6_Night_2;
  int s_6_St_6_Night_1;
  int r_1_St_6_Day;
  int s_6_St_6_Day_2;
  int s_6_St_6_Day_1;
  int r_1_St_6_Start;
  int s_6_St_6_Start_2;
  int s_6_St_6_Start_1;
  int ck_11_2;
  int ck_11_1;
  int v_641;
  int v_640;
  int v_639;
  int v_638;
  int v_637;
  int v_636;
  int v_635;
  int v_634;
  int ns_2_St_7_Cool_2_0;
  int ns_2_St_7_Cool_2_1;
  int ns_2_St_7_Moderate_2_0;
  int ns_2_St_7_Moderate_2_1;
  int ns_2_St_7_Warm_2_0;
  int ns_2_St_7_Warm_2_1;
  int ns_2_St_7_Start_2_0;
  int ns_2_St_7_Start_2_1;
  int ck_10_2_0;
  int ck_10_2_1;
  int nr_2_St_7_Cool;
  int ns_2_St_7_Cool_2;
  int ns_2_St_7_Cool_1;
  int cat_1_St_7_Cool;
  int nr_2_St_7_Moderate;
  int ns_2_St_7_Moderate_2;
  int ns_2_St_7_Moderate_1;
  int cat_1_St_7_Moderate;
  int nr_2_St_7_Warm;
  int ns_2_St_7_Warm_2;
  int ns_2_St_7_Warm_1;
  int cat_1_St_7_Warm;
  int nr_2_St_7_Start;
  int ns_2_St_7_Start_2;
  int ns_2_St_7_Start_1;
  int cat_1_St_7_Start;
  int ck_10_2;
  int ck_10_1;
  int v_298_2_0;
  int v_298_2_1;
  int v_296_2_0;
  int v_296_2_1;
  int v_299;
  int v_298_2;
  int v_298_1;
  int v_297;
  int v_296_2;
  int v_296_1;
  int v_295;
  int v_294;
  int v_293;
  int v_291_2_0;
  int v_291_2_1;
  int v_292;
  int v_291_2;
  int v_291_1;
  int v_290;
  int v_289;
  int v_287_2_0;
  int v_287_2_1;
  int v_288;
  int v_287_2;
  int v_287_1;
  int v_286;
  int v_285;
  int v_283_2_0;
  int v_283_2_1;
  int v_284;
  int v_283_2;
  int v_283_1;
  int v_282;
  int v_281;
  int v_649;
  int v_648;
  int v_647;
  int v_646;
  int v_645;
  int v_644;
  int s_7_St_7_Cool_2_0;
  int s_7_St_7_Cool_2_1;
  int s_7_St_7_Moderate_2_0;
  int s_7_St_7_Moderate_2_1;
  int s_7_St_7_Warm_2_0;
  int s_7_St_7_Warm_2_1;
  int s_7_St_7_Start_2_0;
  int s_7_St_7_Start_2_1;
  int ck_9_2_0;
  int ck_9_2_1;
  int r_2_St_7_Cool;
  int s_7_St_7_Cool_2;
  int s_7_St_7_Cool_1;
  int r_2_St_7_Moderate;
  int s_7_St_7_Moderate_2;
  int s_7_St_7_Moderate_1;
  int r_2_St_7_Warm;
  int s_7_St_7_Warm_2;
  int s_7_St_7_Warm_1;
  int r_2_St_7_Start;
  int s_7_St_7_Start_2;
  int s_7_St_7_Start_1;
  int ck_9_2;
  int ck_9_1;
  int nr_3_St_8_On;
  int ns_3_St_8_On_1;
  int status_1_St_8_On;
  int nr_3_St_8_Off;
  int ns_3_St_8_Off_1;
  int status_1_St_8_Off;
  int ck_8_1;
  int v_280;
  int r_3_St_8_On;
  int s_8_St_8_On_1;
  int r_3_St_8_Off;
  int s_8_St_8_Off_1;
  int nr_4_St_9_On;
  int ns_4_St_9_On_1;
  int status_St_9_On;
  int nr_4_St_9_Off;
  int ns_4_St_9_Off_1;
  int status_St_9_Off;
  int ck_6_1;
  int v_279;
  int r_4_St_9_On;
  int s_9_St_9_On_1;
  int r_4_St_9_Off;
  int s_9_St_9_Off_1;
  int s_7_2_0;
  int s_7_2_1;
  int ns_2_2_0;
  int ns_2_2_1;
  int s_6_2_0;
  int s_6_2_1;
  int ns_1_2_0;
  int ns_1_2_1;
  int s_5_2_0;
  int s_5_2_1;
  int ns_2_3_0;
  int ns_2_3_1;
  int s_9_1;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_8_1;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_7_2;
  int s_7_1;
  int ns_2_2;
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
  int ns_2_3;
  int ns_1_3;
  int r;
  int nr;
  int cat_2;
  int s_2;
  int t_in_1;
  int st_1;
  int time_1;
  int s_1;
  int crop_1;
  int cat_1;
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
  int v_271;
  int v_272;
  int v_273;
  int v_274;
  int v_275;
  int v_276;
  int v_277;
  int v_278;
  int c2;
  int c1;
  t_in_1 = t_in;
  ck_13_1 = self->v_610;
  ck_13_2 = self->v_611;
  time_1 = time;
  ck_11_1 = self->v_626;
  ck_11_2 = self->v_627;
  crop_1 = crop;
  ck_9_1 = self->v_642;
  ck_9_2 = self->v_643;
  if (ck_13_1) {
    ck_13_2_1 = ck_13_2;
    if (ck_13_2_1) {
      v_393 = (t_in_1<=16);
      v_391 = (t_in_1>=10);
      v_385 = (t_in_1<=27);
      v_383 = (t_in_1>=21);
      v_377 = (t_in_1<=18);
      v_375 = (t_in_1>=16);
      v_369 = (t_in_1<=27);
      v_367 = (t_in_1>=24);
      v_361 = (t_in_1<=27);
      v_359 = (t_in_1>=24);
      v_354 = (t_in_1<=38);
      v_352 = (t_in_1>=27);
      v_346 = (t_in_1<10);
      v_340 = (t_in_1<21);
      v_334 = (t_in_1<16);
      v_328 = (t_in_1<24);
      v_322 = (t_in_1<24);
      v_317 = (t_in_1<27);
    } else {
      v_477 = (t_in_1<=16);
      v_475 = (t_in_1>=10);
      v_469 = (t_in_1<=27);
      v_467 = (t_in_1>=21);
      v_461 = (t_in_1<=18);
      v_459 = (t_in_1>=16);
      v_453 = (t_in_1<=27);
      v_451 = (t_in_1>=24);
      v_445 = (t_in_1<=27);
      v_443 = (t_in_1>=24);
      v_438 = (t_in_1<=38);
      v_436 = (t_in_1>=27);
      v_430 = (t_in_1>16);
      v_424 = (t_in_1>27);
      v_418 = (t_in_1>18);
      v_412 = (t_in_1>27);
      v_406 = (t_in_1>27);
      v_401 = (t_in_1>38);
    };
  } else {
    ck_13_2_0 = ck_13_2;
    if (!(ck_13_2_0)) {
      v_549 = (t_in_1>16);
      v_543 = (t_in_1>27);
      v_537 = (t_in_1>18);
      v_531 = (t_in_1>27);
      v_525 = (t_in_1>27);
      v_520 = (t_in_1>38);
      v_514 = (t_in_1<10);
      v_508 = (t_in_1<21);
      v_502 = (t_in_1<16);
      v_496 = (t_in_1<24);
      v_490 = (t_in_1<24);
      v_485 = (t_in_1<27);
    };
  };
  if (ck_11_1) {
    ck_11_2_1 = ck_11_2;
    if (ck_11_2_1) {
      v_304 = (time_1>=18);
      v_303 = (time_1<6);
      v_305 = (v_303||v_304);
      if (v_305) {
        r_1_St_6_Day = true;
        s_6_St_6_Day_1 = true;
        s_6_St_6_Day_2 = false;
      } else {
        r_1_St_6_Day = self->pnr_1;
        s_6_St_6_Day_1 = true;
        s_6_St_6_Day_2 = true;
      };
      v_632 = r_1_St_6_Day;
      v_628 = s_6_St_6_Day_1;
      v_629 = s_6_St_6_Day_2;
    } else {
      v_301 = (time_1<18);
      v_300 = (time_1>=6);
      v_302 = (v_300||v_301);
      if (v_302) {
        r_1_St_6_Night = true;
      } else {
        r_1_St_6_Night = self->pnr_1;
      };
      v_632 = r_1_St_6_Night;
      if (v_302) {
        s_6_St_6_Night_1 = true;
      } else {
        s_6_St_6_Night_1 = true;
      };
      v_628 = s_6_St_6_Night_1;
      if (v_302) {
        s_6_St_6_Night_2 = true;
      } else {
        s_6_St_6_Night_2 = false;
      };
      v_629 = s_6_St_6_Night_2;
    };
    s_6_1 = v_628;
    s_6_2 = v_629;
    r_1 = v_632;
  } else {
    ck_11_2_0 = ck_11_2;
    if (ck_11_2_0) {
      v_633 = true;
      v_630 = true;
      v_631 = true;
    } else {
      v_310 = (time_1<18);
      v_309 = (time_1>=6);
      v_311 = (v_309||v_310);
      if (v_311) {
        v_313 = true;
        v_312_1 = true;
        v_312_2 = true;
      } else {
        v_313 = self->pnr_1;
        v_312_1 = false;
        v_312_2 = false;
      };
      v_307 = (time_1>=18);
      v_306 = (time_1<6);
      v_308 = (v_306||v_307);
      if (v_308) {
        r_1_St_6_Start = true;
      } else {
        r_1_St_6_Start = v_313;
      };
      v_633 = r_1_St_6_Start;
      if (v_308) {
        s_6_St_6_Start_1 = true;
      } else {
        s_6_St_6_Start_1 = v_312_1;
      };
      v_630 = s_6_St_6_Start_1;
      if (v_308) {
        s_6_St_6_Start_2 = false;
      } else {
        s_6_St_6_Start_2 = v_312_2;
      };
      v_631 = s_6_St_6_Start_2;
      if (v_312_1) {
        v_312_2_1 = v_312_2;
      } else {
        v_312_2_0 = v_312_2;
      };
      if (s_6_St_6_Start_1) {
        s_6_St_6_Start_2_1 = s_6_St_6_Start_2;
      } else {
        s_6_St_6_Start_2_0 = s_6_St_6_Start_2;
      };
    };
    s_6_1 = v_630;
    s_6_2 = v_631;
    r_1 = v_633;
  };
  ck_12_1 = s_6_1;
  ck_12_2 = s_6_2;
  if (ck_12_1) {
    ck_12_2_1 = ck_12_2;
    if (ck_12_2_1) {
      s_1_St_6_Day = 1;
      nr_1_St_6_Day = false;
      ns_1_St_6_Day_1 = true;
      ns_1_St_6_Day_2 = true;
      v_618 = s_1_St_6_Day;
      v_624 = nr_1_St_6_Day;
      v_620 = ns_1_St_6_Day_1;
      v_621 = ns_1_St_6_Day_2;
    } else {
      s_1_St_6_Night = 2;
      v_618 = s_1_St_6_Night;
      nr_1_St_6_Night = false;
      v_624 = nr_1_St_6_Night;
      ns_1_St_6_Night_1 = true;
      v_620 = ns_1_St_6_Night_1;
      ns_1_St_6_Night_2 = false;
      v_621 = ns_1_St_6_Night_2;
    };
    s_1 = v_618;
    ns_1_1 = v_620;
    ns_1_2 = v_621;
    nr_1 = v_624;
  } else {
    ck_12_2_0 = ck_12_2;
    if (ck_12_2_0) {
      v_619 = 0;
      v_625 = true;
      v_622 = true;
      v_623 = true;
    } else {
      s_1_St_6_Start = 0;
      v_619 = s_1_St_6_Start;
      nr_1_St_6_Start = false;
      v_625 = nr_1_St_6_Start;
      ns_1_St_6_Start_1 = false;
      v_622 = ns_1_St_6_Start_1;
      ns_1_St_6_Start_2 = false;
      v_623 = ns_1_St_6_Start_2;
      if (ns_1_St_6_Start_1) {
        ns_1_St_6_Start_2_1 = ns_1_St_6_Start_2;
      } else {
        ns_1_St_6_Start_2_0 = ns_1_St_6_Start_2;
      };
    };
    s_1 = v_619;
    ns_1_1 = v_622;
    ns_1_2 = v_623;
    nr_1 = v_625;
  };
  _out->s = s_1;
  s_2 = _out->s;
  if (ck_13_1) {
    if (ck_13_2_1) {
      v_389 = (s_2==2);
      v_381 = (s_2==1);
      v_373 = (s_2==2);
      v_365 = (s_2==1);
      v_357 = (s_2==2);
      v_350 = (s_2==1);
      v_344 = (s_2==2);
      v_338 = (s_2==1);
      v_332 = (s_2==2);
      v_326 = (s_2==1);
      v_320 = (s_2==2);
      v_315 = (s_2==1);
    } else {
      v_473 = (s_2==2);
      v_465 = (s_2==1);
      v_457 = (s_2==2);
      v_449 = (s_2==1);
      v_441 = (s_2==2);
      v_434 = (s_2==1);
      v_428 = (s_2==2);
      v_422 = (s_2==1);
      v_416 = (s_2==2);
      v_410 = (s_2==1);
      v_404 = (s_2==2);
      v_399 = (s_2==1);
    };
  } else {
    if (!(ck_13_2_0)) {
      v_547 = (s_2==2);
      v_541 = (s_2==1);
      v_535 = (s_2==2);
      v_529 = (s_2==1);
      v_523 = (s_2==2);
      v_518 = (s_2==1);
      v_512 = (s_2==2);
      v_506 = (s_2==1);
      v_500 = (s_2==2);
      v_494 = (s_2==1);
      v_488 = (s_2==2);
      v_483 = (s_2==1);
    };
  };
  if (ns_1_1) {
    ns_1_2_1 = ns_1_2;
  } else {
    ns_1_2_0 = ns_1_2;
  };
  if (ck_12_1) {
    if (ck_12_2_1) {
      if (ns_1_St_6_Day_1) {
        ns_1_St_6_Day_2_1 = ns_1_St_6_Day_2;
      } else {
        ns_1_St_6_Day_2_0 = ns_1_St_6_Day_2;
      };
    } else {
      if (ns_1_St_6_Night_1) {
        ns_1_St_6_Night_2_1 = ns_1_St_6_Night_2;
      } else {
        ns_1_St_6_Night_2_0 = ns_1_St_6_Night_2;
      };
    };
  };
  if (s_6_1) {
    s_6_2_1 = s_6_2;
  } else {
    s_6_2_0 = s_6_2;
  };
  if (ck_11_1) {
    if (ck_11_2_1) {
      if (s_6_St_6_Day_1) {
        s_6_St_6_Day_2_1 = s_6_St_6_Day_2;
      } else {
        s_6_St_6_Day_2_0 = s_6_St_6_Day_2;
      };
    } else {
      if (s_6_St_6_Night_1) {
        s_6_St_6_Night_2_1 = s_6_St_6_Night_2;
      } else {
        s_6_St_6_Night_2_0 = s_6_St_6_Night_2;
      };
    };
  };
  if (ck_9_1) {
    ck_9_2_1 = ck_9_2;
    if (ck_9_2_1) {
      v_282 = (crop_1==2);
      if (v_282) {
        v_284 = true;
        v_283_1 = true;
        v_283_2 = false;
      } else {
        v_284 = self->pnr_2;
        v_283_1 = true;
        v_283_2 = true;
      };
      v_281 = (crop_1==1);
      if (v_281) {
        r_2_St_7_Cool = true;
      } else {
        r_2_St_7_Cool = v_284;
      };
      v_648 = r_2_St_7_Cool;
      if (v_281) {
        s_7_St_7_Cool_1 = false;
      } else {
        s_7_St_7_Cool_1 = v_283_1;
      };
      v_644 = s_7_St_7_Cool_1;
      if (v_281) {
        s_7_St_7_Cool_2 = false;
      } else {
        s_7_St_7_Cool_2 = v_283_2;
      };
      v_645 = s_7_St_7_Cool_2;
    } else {
      v_286 = (crop_1==3);
      if (v_286) {
        v_288 = true;
        v_287_1 = true;
        v_287_2 = true;
      } else {
        v_288 = self->pnr_2;
        v_287_1 = true;
        v_287_2 = false;
      };
      v_285 = (crop_1==1);
      if (v_285) {
        r_2_St_7_Moderate = true;
        s_7_St_7_Moderate_1 = false;
        s_7_St_7_Moderate_2 = false;
      } else {
        r_2_St_7_Moderate = v_288;
        s_7_St_7_Moderate_1 = v_287_1;
        s_7_St_7_Moderate_2 = v_287_2;
      };
      v_648 = r_2_St_7_Moderate;
      v_644 = s_7_St_7_Moderate_1;
      v_645 = s_7_St_7_Moderate_2;
    };
    s_7_1 = v_644;
    s_7_2 = v_645;
    r_2 = v_648;
  } else {
    ck_9_2_0 = ck_9_2;
    if (ck_9_2_0) {
      v_295 = (crop_1==3);
      if (v_295) {
        v_297 = true;
        v_296_1 = true;
        v_296_2 = true;
      } else {
        v_297 = self->pnr_2;
        v_296_1 = false;
        v_296_2 = true;
      };
      v_294 = (crop_1==2);
      if (v_294) {
        v_299 = true;
        v_298_1 = true;
        v_298_2 = false;
      } else {
        v_299 = v_297;
        v_298_1 = v_296_1;
        v_298_2 = v_296_2;
      };
      v_293 = (crop_1==1);
      if (v_293) {
        r_2_St_7_Start = true;
        s_7_St_7_Start_1 = false;
        s_7_St_7_Start_2 = false;
      } else {
        r_2_St_7_Start = v_299;
        s_7_St_7_Start_1 = v_298_1;
        s_7_St_7_Start_2 = v_298_2;
      };
      v_649 = r_2_St_7_Start;
      v_646 = s_7_St_7_Start_1;
      v_647 = s_7_St_7_Start_2;
      if (v_296_1) {
        v_296_2_1 = v_296_2;
      } else {
        v_296_2_0 = v_296_2;
      };
      if (v_298_1) {
        v_298_2_1 = v_298_2;
      } else {
        v_298_2_0 = v_298_2;
      };
      if (s_7_St_7_Start_1) {
        s_7_St_7_Start_2_1 = s_7_St_7_Start_2;
      } else {
        s_7_St_7_Start_2_0 = s_7_St_7_Start_2;
      };
    } else {
      v_290 = (crop_1==3);
      if (v_290) {
        v_292 = true;
        v_291_1 = true;
        v_291_2 = true;
      } else {
        v_292 = self->pnr_2;
        v_291_1 = false;
        v_291_2 = false;
      };
      v_289 = (crop_1==2);
      if (v_289) {
        r_2_St_7_Warm = true;
      } else {
        r_2_St_7_Warm = v_292;
      };
      v_649 = r_2_St_7_Warm;
      if (v_289) {
        s_7_St_7_Warm_1 = true;
      } else {
        s_7_St_7_Warm_1 = v_291_1;
      };
      v_646 = s_7_St_7_Warm_1;
      if (v_289) {
        s_7_St_7_Warm_2 = false;
      } else {
        s_7_St_7_Warm_2 = v_291_2;
      };
      v_647 = s_7_St_7_Warm_2;
      if (v_291_1) {
        v_291_2_1 = v_291_2;
      } else {
        v_291_2_0 = v_291_2;
      };
      if (s_7_St_7_Warm_1) {
        s_7_St_7_Warm_2_1 = s_7_St_7_Warm_2;
      } else {
        s_7_St_7_Warm_2_0 = s_7_St_7_Warm_2;
      };
    };
    s_7_1 = v_646;
    s_7_2 = v_647;
    r_2 = v_649;
  };
  ck_10_1 = s_7_1;
  ck_10_2 = s_7_2;
  Greenhouse_controller__greenhouse_controller_step(v_281, v_282, v_285,
                                                    v_286, v_289, v_290,
                                                    v_293, v_294, v_295,
                                                    v_300, v_301, v_303,
                                                    v_304, v_306, v_307,
                                                    v_309, v_310, v_317,
                                                    v_322, v_328, v_334,
                                                    v_340, v_346, v_352,
                                                    v_354, v_359, v_361,
                                                    v_367, v_369, v_375,
                                                    v_377, v_383, v_385,
                                                    v_391, v_393, v_401,
                                                    v_406, v_412, v_418,
                                                    v_424, v_430, v_436,
                                                    v_438, v_443, v_445,
                                                    v_451, v_453, v_459,
                                                    v_461, v_467, v_469,
                                                    v_475, v_477, v_485,
                                                    v_490, v_496, v_502,
                                                    v_508, v_514, v_520,
                                                    v_525, v_531, v_537,
                                                    v_543, v_549, self->ck_1,
                                                    self->pnr_4,
                                                    self->ck_7_1,
                                                    self->pnr_3, self->v_643,
                                                    self->v_642, self->pnr_2,
                                                    self->v_627, self->v_626,
                                                    self->pnr_1, self->v_611,
                                                    self->v_610, self->pnr,
                                                    true, true,
                                                    &Greenhouse_controller__greenhouse_controller_out_st);
  c2 = Greenhouse_controller__greenhouse_controller_out_st.greenhouse_c2;
  c1 = Greenhouse_controller__greenhouse_controller_out_st.greenhouse_c1;
  c_1 = c2;
  c = c1;
  if (ck_10_1) {
    ck_10_2_1 = ck_10_2;
    if (ck_10_2_1) {
      cat_1_St_7_Cool = 3;
      v_634 = cat_1_St_7_Cool;
      nr_2_St_7_Cool = false;
      v_640 = nr_2_St_7_Cool;
      ns_2_St_7_Cool_1 = true;
      v_636 = ns_2_St_7_Cool_1;
      ns_2_St_7_Cool_2 = true;
      v_637 = ns_2_St_7_Cool_2;
    } else {
      cat_1_St_7_Moderate = 2;
      nr_2_St_7_Moderate = false;
      ns_2_St_7_Moderate_1 = true;
      ns_2_St_7_Moderate_2 = false;
      v_634 = cat_1_St_7_Moderate;
      v_640 = nr_2_St_7_Moderate;
      v_636 = ns_2_St_7_Moderate_1;
      v_637 = ns_2_St_7_Moderate_2;
    };
    cat_1 = v_634;
    ns_2_1 = v_636;
    ns_2_2 = v_637;
    nr_2 = v_640;
  } else {
    ck_10_2_0 = ck_10_2;
    if (ck_10_2_0) {
      cat_1_St_7_Start = 0;
      nr_2_St_7_Start = false;
      ns_2_St_7_Start_1 = false;
      ns_2_St_7_Start_2 = true;
      v_635 = cat_1_St_7_Start;
      v_641 = nr_2_St_7_Start;
      v_638 = ns_2_St_7_Start_1;
      v_639 = ns_2_St_7_Start_2;
      if (ns_2_St_7_Start_1) {
        ns_2_St_7_Start_2_1 = ns_2_St_7_Start_2;
      } else {
        ns_2_St_7_Start_2_0 = ns_2_St_7_Start_2;
      };
    } else {
      cat_1_St_7_Warm = 1;
      v_635 = cat_1_St_7_Warm;
      nr_2_St_7_Warm = false;
      v_641 = nr_2_St_7_Warm;
      ns_2_St_7_Warm_1 = false;
      v_638 = ns_2_St_7_Warm_1;
      ns_2_St_7_Warm_2 = false;
      v_639 = ns_2_St_7_Warm_2;
      if (ns_2_St_7_Warm_1) {
        ns_2_St_7_Warm_2_1 = ns_2_St_7_Warm_2;
      } else {
        ns_2_St_7_Warm_2_0 = ns_2_St_7_Warm_2;
      };
    };
    cat_1 = v_635;
    ns_2_1 = v_638;
    ns_2_2 = v_639;
    nr_2 = v_641;
  };
  _out->cat = cat_1;
  cat_2 = _out->cat;
  if (ck_13_1) {
    if (ck_13_2_1) {
      v_388 = (cat_2==3);
      v_390 = (v_388&&v_389);
      v_392 = (v_390&&v_391);
      v_394 = (v_392&&v_393);
      v_380 = (cat_2==3);
      v_382 = (v_380&&v_381);
      v_384 = (v_382&&v_383);
      v_386 = (v_384&&v_385);
      v_372 = (cat_2==2);
      v_374 = (v_372&&v_373);
      v_376 = (v_374&&v_375);
      v_378 = (v_376&&v_377);
      v_364 = (cat_2==2);
      v_366 = (v_364&&v_365);
      v_368 = (v_366&&v_367);
      v_370 = (v_368&&v_369);
      v_356 = (cat_2==1);
      v_358 = (v_356&&v_357);
      v_360 = (v_358&&v_359);
      v_362 = (v_360&&v_361);
      v_349 = (cat_2==1);
      v_351 = (v_349&&v_350);
      v_353 = (v_351&&v_352);
      v_355 = (v_353&&v_354);
      v_363 = (v_355||v_362);
      v_371 = (v_363||v_370);
      v_379 = (v_371||v_378);
      v_387 = (v_379||v_386);
      v_395 = (v_387||v_394);
      if (v_395) {
        v_397 = true;
        v_396_1 = false;
        v_396_2 = false;
      } else {
        v_397 = self->pnr;
        v_396_1 = true;
        v_396_2 = true;
      };
      v_343 = (cat_2==3);
      v_345 = (v_343&&v_344);
      v_347 = (v_345&&v_346);
      v_337 = (cat_2==3);
      v_339 = (v_337&&v_338);
      v_341 = (v_339&&v_340);
      v_331 = (cat_2==2);
      v_333 = (v_331&&v_332);
      v_335 = (v_333&&v_334);
      v_325 = (cat_2==2);
      v_327 = (v_325&&v_326);
      v_329 = (v_327&&v_328);
      v_319 = (cat_2==1);
      v_321 = (v_319&&v_320);
      v_323 = (v_321&&v_322);
      v_314 = (cat_2==1);
      v_316 = (v_314&&v_315);
      v_318 = (v_316&&v_317);
      v_324 = (v_318||v_323);
      v_330 = (v_324||v_329);
      v_336 = (v_330||v_335);
      v_342 = (v_336||v_341);
      v_348 = (v_342||v_347);
      if (v_348) {
        r_St_5_Cool = true;
      } else {
        r_St_5_Cool = v_397;
      };
      v_616 = r_St_5_Cool;
      if (v_348) {
        s_5_St_5_Cool_1 = true;
      } else {
        s_5_St_5_Cool_1 = v_396_1;
      };
      v_612 = s_5_St_5_Cool_1;
      if (v_348) {
        s_5_St_5_Cool_2 = false;
      } else {
        s_5_St_5_Cool_2 = v_396_2;
      };
      v_613 = s_5_St_5_Cool_2;
    } else {
      v_472 = (cat_2==3);
      v_474 = (v_472&&v_473);
      v_476 = (v_474&&v_475);
      v_478 = (v_476&&v_477);
      v_464 = (cat_2==3);
      v_466 = (v_464&&v_465);
      v_468 = (v_466&&v_467);
      v_470 = (v_468&&v_469);
      v_456 = (cat_2==2);
      v_458 = (v_456&&v_457);
      v_460 = (v_458&&v_459);
      v_462 = (v_460&&v_461);
      v_448 = (cat_2==2);
      v_450 = (v_448&&v_449);
      v_452 = (v_450&&v_451);
      v_454 = (v_452&&v_453);
      v_440 = (cat_2==1);
      v_442 = (v_440&&v_441);
      v_444 = (v_442&&v_443);
      v_446 = (v_444&&v_445);
      v_433 = (cat_2==1);
      v_435 = (v_433&&v_434);
      v_437 = (v_435&&v_436);
      v_439 = (v_437&&v_438);
      v_447 = (v_439||v_446);
      v_455 = (v_447||v_454);
      v_463 = (v_455||v_462);
      v_471 = (v_463||v_470);
      v_479 = (v_471||v_478);
      if (v_479) {
        v_481 = true;
        v_480_1 = false;
        v_480_2 = false;
      } else {
        v_481 = self->pnr;
        v_480_1 = true;
        v_480_2 = false;
      };
      v_427 = (cat_2==3);
      v_429 = (v_427&&v_428);
      v_431 = (v_429&&v_430);
      v_421 = (cat_2==3);
      v_423 = (v_421&&v_422);
      v_425 = (v_423&&v_424);
      v_415 = (cat_2==2);
      v_417 = (v_415&&v_416);
      v_419 = (v_417&&v_418);
      v_409 = (cat_2==2);
      v_411 = (v_409&&v_410);
      v_413 = (v_411&&v_412);
      v_403 = (cat_2==1);
      v_405 = (v_403&&v_404);
      v_407 = (v_405&&v_406);
      v_398 = (cat_2==1);
      v_400 = (v_398&&v_399);
      v_402 = (v_400&&v_401);
      v_408 = (v_402||v_407);
      v_414 = (v_408||v_413);
      v_420 = (v_414||v_419);
      v_426 = (v_420||v_425);
      v_432 = (v_426||v_431);
      if (v_432) {
        r_St_5_Heat = true;
        s_5_St_5_Heat_1 = true;
        s_5_St_5_Heat_2 = true;
      } else {
        r_St_5_Heat = v_481;
        s_5_St_5_Heat_1 = v_480_1;
        s_5_St_5_Heat_2 = v_480_2;
      };
      v_616 = r_St_5_Heat;
      v_612 = s_5_St_5_Heat_1;
      v_613 = s_5_St_5_Heat_2;
    };
    s_5_1 = v_612;
    s_5_2 = v_613;
    r = v_616;
  } else {
    if (ck_13_2_0) {
      v_617 = true;
      v_614 = true;
      v_615 = true;
    } else {
      v_546 = (cat_2==3);
      v_548 = (v_546&&v_547);
      v_550 = (v_548&&v_549);
      v_540 = (cat_2==3);
      v_542 = (v_540&&v_541);
      v_544 = (v_542&&v_543);
      v_534 = (cat_2==2);
      v_536 = (v_534&&v_535);
      v_538 = (v_536&&v_537);
      v_528 = (cat_2==2);
      v_530 = (v_528&&v_529);
      v_532 = (v_530&&v_531);
      v_522 = (cat_2==1);
      v_524 = (v_522&&v_523);
      v_526 = (v_524&&v_525);
      v_517 = (cat_2==1);
      v_519 = (v_517&&v_518);
      v_521 = (v_519&&v_520);
      v_527 = (v_521||v_526);
      v_533 = (v_527||v_532);
      v_539 = (v_533||v_538);
      v_545 = (v_539||v_544);
      v_551 = (v_545||v_550);
      if (v_551) {
        v_553 = true;
        v_552_1 = true;
        v_552_2 = true;
      } else {
        v_553 = self->pnr;
        v_552_1 = false;
        v_552_2 = false;
      };
      v_511 = (cat_2==3);
      v_513 = (v_511&&v_512);
      v_515 = (v_513&&v_514);
      v_505 = (cat_2==3);
      v_507 = (v_505&&v_506);
      v_509 = (v_507&&v_508);
      v_499 = (cat_2==2);
      v_501 = (v_499&&v_500);
      v_503 = (v_501&&v_502);
      v_493 = (cat_2==2);
      v_495 = (v_493&&v_494);
      v_497 = (v_495&&v_496);
      v_487 = (cat_2==1);
      v_489 = (v_487&&v_488);
      v_491 = (v_489&&v_490);
      v_482 = (cat_2==1);
      v_484 = (v_482&&v_483);
      v_486 = (v_484&&v_485);
      v_492 = (v_486||v_491);
      v_498 = (v_492||v_497);
      v_504 = (v_498||v_503);
      v_510 = (v_504||v_509);
      v_516 = (v_510||v_515);
      if (v_516) {
        r_St_5_Na = true;
      } else {
        r_St_5_Na = v_553;
      };
      v_617 = r_St_5_Na;
      if (v_516) {
        s_5_St_5_Na_1 = true;
      } else {
        s_5_St_5_Na_1 = v_552_1;
      };
      v_614 = s_5_St_5_Na_1;
      if (v_516) {
        s_5_St_5_Na_2 = false;
      } else {
        s_5_St_5_Na_2 = v_552_2;
      };
      v_615 = s_5_St_5_Na_2;
      if (v_552_1) {
        v_552_2_1 = v_552_2;
      } else {
        v_552_2_0 = v_552_2;
      };
      if (s_5_St_5_Na_1) {
        s_5_St_5_Na_2_1 = s_5_St_5_Na_2;
      } else {
        s_5_St_5_Na_2_0 = s_5_St_5_Na_2;
      };
    };
    s_5_1 = v_614;
    s_5_2 = v_615;
    r = v_617;
  };
  ck_14_1 = s_5_1;
  ck_14_2 = s_5_2;
  if (ck_14_1) {
    ck_14_2_1 = ck_14_2;
    if (ck_14_2_1) {
      st_1_St_5_Cool = 2;
      v_602 = st_1_St_5_Cool;
      nr_St_5_Cool = false;
      v_608 = nr_St_5_Cool;
      ns_St_5_Cool_1 = true;
      v_604 = ns_St_5_Cool_1;
      ns_St_5_Cool_2 = true;
      v_605 = ns_St_5_Cool_2;
    } else {
      st_1_St_5_Heat = 1;
      nr_St_5_Heat = false;
      ns_St_5_Heat_1 = true;
      ns_St_5_Heat_2 = false;
      v_602 = st_1_St_5_Heat;
      v_608 = nr_St_5_Heat;
      v_604 = ns_St_5_Heat_1;
      v_605 = ns_St_5_Heat_2;
    };
    st_1 = v_602;
    ns_1_3 = v_604;
    ns_2_3 = v_605;
    nr = v_608;
  } else {
    ck_14_2_0 = ck_14_2;
    if (ck_14_2_0) {
      v_603 = 0;
      v_609 = true;
      v_606 = true;
      v_607 = true;
    } else {
      st_1_St_5_Na = 0;
      v_603 = st_1_St_5_Na;
      nr_St_5_Na = false;
      v_609 = nr_St_5_Na;
      ns_St_5_Na_1 = false;
      v_606 = ns_St_5_Na_1;
      ns_St_5_Na_2 = false;
      v_607 = ns_St_5_Na_2;
      if (ns_St_5_Na_1) {
        ns_St_5_Na_2_1 = ns_St_5_Na_2;
      } else {
        ns_St_5_Na_2_0 = ns_St_5_Na_2;
      };
    };
    st_1 = v_603;
    ns_1_3 = v_606;
    ns_2_3 = v_607;
    nr = v_609;
  };
  _out->st = st_1;
  t2 = (_out->st==2);
  v = !(t2);
  t1 = (_out->st==1);
  v_273 = !(t1);
  if (ns_1_3) {
    ns_2_3_1 = ns_2_3;
  } else {
    ns_2_3_0 = ns_2_3;
  };
  if (ck_14_1) {
    if (ck_14_2_1) {
      if (ns_St_5_Cool_1) {
        ns_St_5_Cool_2_1 = ns_St_5_Cool_2;
      } else {
        ns_St_5_Cool_2_0 = ns_St_5_Cool_2;
      };
    } else {
      if (ns_St_5_Heat_1) {
        ns_St_5_Heat_2_1 = ns_St_5_Heat_2;
      } else {
        ns_St_5_Heat_2_0 = ns_St_5_Heat_2;
      };
    };
  };
  if (s_5_1) {
    s_5_2_1 = s_5_2;
  } else {
    s_5_2_0 = s_5_2;
  };
  if (ck_13_1) {
    if (ck_13_2_1) {
      if (v_396_1) {
        v_396_2_1 = v_396_2;
      } else {
        v_396_2_0 = v_396_2;
      };
      if (s_5_St_5_Cool_1) {
        s_5_St_5_Cool_2_1 = s_5_St_5_Cool_2;
      } else {
        s_5_St_5_Cool_2_0 = s_5_St_5_Cool_2;
      };
    } else {
      if (v_480_1) {
        v_480_2_1 = v_480_2;
      } else {
        v_480_2_0 = v_480_2;
      };
      if (s_5_St_5_Heat_1) {
        s_5_St_5_Heat_2_1 = s_5_St_5_Heat_2;
      } else {
        s_5_St_5_Heat_2_0 = s_5_St_5_Heat_2;
      };
    };
  };
  if (ns_2_1) {
    ns_2_2_1 = ns_2_2;
  } else {
    ns_2_2_0 = ns_2_2;
  };
  if (ck_10_1) {
    if (ck_10_2_1) {
      if (ns_2_St_7_Cool_1) {
        ns_2_St_7_Cool_2_1 = ns_2_St_7_Cool_2;
      } else {
        ns_2_St_7_Cool_2_0 = ns_2_St_7_Cool_2;
      };
    } else {
      if (ns_2_St_7_Moderate_1) {
        ns_2_St_7_Moderate_2_1 = ns_2_St_7_Moderate_2;
      } else {
        ns_2_St_7_Moderate_2_0 = ns_2_St_7_Moderate_2;
      };
    };
  };
  if (s_7_1) {
    s_7_2_1 = s_7_2;
  } else {
    s_7_2_0 = s_7_2;
  };
  if (ck_9_1) {
    if (ck_9_2_1) {
      if (v_283_1) {
        v_283_2_1 = v_283_2;
      } else {
        v_283_2_0 = v_283_2;
      };
      if (s_7_St_7_Cool_1) {
        s_7_St_7_Cool_2_1 = s_7_St_7_Cool_2;
      } else {
        s_7_St_7_Cool_2_0 = s_7_St_7_Cool_2;
      };
    } else {
      if (v_287_1) {
        v_287_2_1 = v_287_2;
      } else {
        v_287_2_0 = v_287_2;
      };
      if (s_7_St_7_Moderate_1) {
        s_7_St_7_Moderate_2_1 = s_7_St_7_Moderate_2;
      } else {
        s_7_St_7_Moderate_2_0 = s_7_St_7_Moderate_2;
      };
    };
  };
  if (self->ck_7_1) {
    v_280 = !(c_1);
    if (v_280) {
      r_3_St_8_Off = true;
      s_8_St_8_Off_1 = false;
    } else {
      r_3_St_8_Off = self->pnr_3;
      s_8_St_8_Off_1 = true;
    };
    r_3 = r_3_St_8_Off;
    s_8_1 = s_8_St_8_Off_1;
  } else {
    if (c_1) {
      r_3_St_8_On = true;
    } else {
      r_3_St_8_On = self->pnr_3;
    };
    r_3 = r_3_St_8_On;
    if (c_1) {
      s_8_St_8_On_1 = true;
    } else {
      s_8_St_8_On_1 = false;
    };
    s_8_1 = s_8_St_8_On_1;
  };
  ck_8_1 = s_8_1;
  if (ck_8_1) {
    status_1_St_8_Off = false;
    nr_3_St_8_Off = false;
    ns_3_St_8_Off_1 = true;
    status_1 = status_1_St_8_Off;
    nr_3 = nr_3_St_8_Off;
    ns_3_1 = ns_3_St_8_Off_1;
  } else {
    status_1_St_8_On = true;
    status_1 = status_1_St_8_On;
    nr_3_St_8_On = false;
    nr_3 = nr_3_St_8_On;
    ns_3_St_8_On_1 = false;
    ns_3_1 = ns_3_St_8_On_1;
  };
  _out->cooling_on = status_1;
  v_274 = !(_out->cooling_on);
  if (self->ck_1) {
    v_279 = !(c);
    if (v_279) {
      r_4_St_9_Off = true;
      s_9_St_9_Off_1 = false;
    } else {
      r_4_St_9_Off = self->pnr_4;
      s_9_St_9_Off_1 = true;
    };
    r_4 = r_4_St_9_Off;
    s_9_1 = s_9_St_9_Off_1;
  } else {
    if (c) {
      r_4_St_9_On = true;
    } else {
      r_4_St_9_On = self->pnr_4;
    };
    r_4 = r_4_St_9_On;
    if (c) {
      s_9_St_9_On_1 = true;
    } else {
      s_9_St_9_On_1 = false;
    };
    s_9_1 = s_9_St_9_On_1;
  };
  ck_6_1 = s_9_1;
  if (ck_6_1) {
    status_St_9_Off = false;
    nr_4_St_9_Off = false;
    ns_4_St_9_Off_1 = true;
    status = status_St_9_Off;
    nr_4 = nr_4_St_9_Off;
    ns_4_1 = ns_4_St_9_Off_1;
  } else {
    status_St_9_On = true;
    status = status_St_9_On;
    nr_4_St_9_On = false;
    nr_4 = nr_4_St_9_On;
    ns_4_St_9_On_1 = false;
    ns_4_1 = ns_4_St_9_On_1;
  };
  _out->heating_on = status;
  v_271 = !(_out->heating_on);
  v_272 = (_out->cooling_on&&v_271);
  t4 = (v||v_272);
  v_275 = (_out->heating_on&&v_274);
  t3 = (v_273||v_275);
  v_276 = (_out->heating_on&&_out->cooling_on);
  both_on = !(v_276);
  v_277 = (both_on&&t3);
  v_278 = (v_277&&t4);
  self->pnr = nr;
  self->v_610 = ns_1_3;
  self->v_611 = ns_2_3;
  self->pnr_1 = nr_1;
  self->v_626 = ns_1_1;
  self->v_627 = ns_1_2;
  self->pnr_2 = nr_2;
  self->v_642 = ns_2_1;
  self->v_643 = ns_2_2;
  self->pnr_3 = nr_3;
  self->ck_7_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_1 = ns_4_1;;
}

