/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Arosha/Desktop/HDL/Traffic_Controller_Project/WalkRegister.v";
static int ng1[] = {0, 0};



static void Always_28_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t8[8];
    char t22[8];
    char t29[8];
    char t73[8];
    char t74[8];
    char t92[8];
    char t99[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t6) != 0)
        goto LAB8;

LAB9:    t15 = (t8 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB10;

LAB11:    memcpy(t29, t8, 8);

LAB12:    memset(t5, 0, 8);
    t57 = (t29 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t29);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t57) != 0)
        goto LAB22;

LAB23:    t64 = (t5 + 4);
    t65 = *((unsigned int *)t5);
    t66 = *((unsigned int *)t64);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB24;

LAB25:    t69 = *((unsigned int *)t5);
    t70 = (~(t69));
    t71 = *((unsigned int *)t64);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t64) > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t5) > 0)
        goto LAB30;

LAB31:    memcpy(t4, t73, 8);

LAB32:    t97 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t97, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB8:    t14 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB9;

LAB10:    t20 = (t0 + 1528U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    t20 = (t21 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t20) != 0)
        goto LAB15;

LAB16:    t30 = *((unsigned int *)t8);
    t31 = *((unsigned int *)t22);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = (t8 + 4);
    t34 = (t22 + 4);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t33);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t22) = 1;
    goto LAB16;

LAB15:    t28 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB16;

LAB17:    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t29) = (t41 | t42);
    t43 = (t8 + 4);
    t44 = (t22 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (~(t45));
    t47 = *((unsigned int *)t8);
    t48 = (t47 & t46);
    t49 = *((unsigned int *)t44);
    t50 = (~(t49));
    t51 = *((unsigned int *)t22);
    t52 = (t51 & t50);
    t53 = (~(t48));
    t54 = (~(t52));
    t55 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t55 & t53);
    t56 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t56 & t54);
    goto LAB19;

LAB20:    *((unsigned int *)t5) = 1;
    goto LAB23;

LAB22:    t63 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB23;

LAB24:    t68 = ((char*)((ng1)));
    goto LAB25;

LAB26:    t75 = (t0 + 1928);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    memset(t74, 0, 8);
    t78 = (t77 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t78) != 0)
        goto LAB35;

LAB36:    t85 = (t74 + 4);
    t86 = *((unsigned int *)t74);
    t87 = *((unsigned int *)t85);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB37;

LAB38:    t93 = *((unsigned int *)t74);
    t94 = (~(t93));
    t95 = *((unsigned int *)t85);
    t96 = (t94 || t95);
    if (t96 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t85) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t74) > 0)
        goto LAB43;

LAB44:    memcpy(t73, t99, 8);

LAB45:    goto LAB27;

LAB28:    xsi_vlog_unsigned_bit_combine(t4, 32, t68, 32, t73, 32);
    goto LAB32;

LAB30:    memcpy(t4, t68, 8);
    goto LAB32;

LAB33:    *((unsigned int *)t74) = 1;
    goto LAB36;

LAB35:    t84 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB36;

LAB37:    t89 = (t0 + 1928);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    memcpy(t92, t91, 8);
    goto LAB38;

LAB39:    t97 = (t0 + 1368U);
    t98 = *((char **)t97);
    memcpy(t99, t98, 8);
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t73, 32, t92, 32, t99, 32);
    goto LAB45;

LAB43:    memcpy(t73, t92, 8);
    goto LAB45;

}


extern void work_m_00000000001779652683_0183742806_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000001779652683_0183742806", "isim/WalkRegister_isim_beh.exe.sim/work/m_00000000001779652683_0183742806.didat");
	xsi_register_executes(pe);
}
