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
static const char *ng0 = "C:/Users/Arosha/Desktop/HDL/Traffic_Controller_Project/FSM.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {24U, 0U};
static unsigned int ng5[] = {40U, 0U};
static unsigned int ng6[] = {73U, 0U};
static unsigned int ng7[] = {66U, 0U};
static unsigned int ng8[] = {68U, 0U};
static const char *ng9 = "ok?";
static unsigned int ng10[] = {1U, 0U};
static const char *ng11 = "ok ok";
static unsigned int ng12[] = {2U, 0U};



static void Always_45_0(char *t0)
{
    char t6[8];
    char t18[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    int t61;

LAB0:    t1 = (t0 + 5304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5624);
    *((int *)t2) = 1;
    t3 = (t0 + 5336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3904);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3344U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t2) != 0)
        goto LAB8;

LAB9:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (!(t12));
    t14 = *((unsigned int *)t5);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB10;

LAB11:    memcpy(t25, t6, 8);

LAB12:    t53 = (t25 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t25);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3024U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB27;

LAB25:    if (*((unsigned int *)t2) == 0)
        goto LAB24;

LAB26:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB27:    t5 = (t6 + 4);
    t16 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    *((unsigned int *)t6) = t13;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB29;

LAB28:    t21 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t21 & 1U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 1U);
    t17 = (t6 + 4);
    t23 = *((unsigned int *)t17);
    t26 = (~(t23));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t32 = (t28 != 0);
    if (t32 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(84, ng0);

LAB52:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB53:    t5 = (t0 + 472);
    t16 = *((char **)t5);
    t44 = xsi_vlog_unsigned_case_compare(t4, 3, t16, 32);
    if (t44 == 1)
        goto LAB54;

LAB55:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t44 == 1)
        goto LAB56;

LAB57:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t44 == 1)
        goto LAB58;

LAB59:    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t48 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 32);
    if (t48 == 1)
        goto LAB60;

LAB61:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t44 == 1)
        goto LAB62;

LAB63:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t44 == 1)
        goto LAB64;

LAB65:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t44 == 1)
        goto LAB66;

LAB67:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t44 == 1)
        goto LAB68;

LAB69:
LAB70:
LAB32:
LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    t16 = (t0 + 2864U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t17 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (~(t19));
    t21 = *((unsigned int *)t17);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t16) != 0)
        goto LAB15;

LAB16:    t26 = *((unsigned int *)t6);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    *((unsigned int *)t25) = t28;
    t29 = (t6 + 4);
    t30 = (t18 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t18) = 1;
    goto LAB16;

LAB15:    t24 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB16;

LAB17:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    t39 = (t6 + 4);
    t40 = (t18 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (~(t41));
    t43 = *((unsigned int *)t6);
    t44 = (t43 & t42);
    t45 = *((unsigned int *)t40);
    t46 = (~(t45));
    t47 = *((unsigned int *)t18);
    t48 = (t47 & t46);
    t49 = (~(t44));
    t50 = (~(t48));
    t51 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t51 & t49);
    t52 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t52 & t50);
    goto LAB19;

LAB20:    xsi_set_current_line(52, ng0);

LAB23:    xsi_set_current_line(53, ng0);
    t59 = ((char*)((ng2)));
    t60 = (t0 + 3904);
    xsi_vlogvar_assign_value(t60, t59, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB22;

LAB24:    *((unsigned int *)t6) = 1;
    goto LAB27;

LAB29:    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t16);
    *((unsigned int *)t6) = (t14 | t15);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t5) = (t19 | t20);
    goto LAB28;

LAB30:    xsi_set_current_line(59, ng0);

LAB33:    xsi_set_current_line(60, ng0);
    t24 = (t0 + 4384);
    t29 = (t24 + 56U);
    t30 = *((char **)t29);

LAB34:    t31 = (t0 + 472);
    t39 = *((char **)t31);
    t44 = xsi_vlog_unsigned_case_compare(t30, 3, t39, 32);
    if (t44 == 1)
        goto LAB35;

LAB36:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t30, 3, t3, 32);
    if (t44 == 1)
        goto LAB37;

LAB38:    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t48 = xsi_vlog_unsigned_case_compare(t30, 3, t4, 32);
    if (t48 == 1)
        goto LAB39;

LAB40:    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t61 = xsi_vlog_unsigned_case_compare(t30, 3, t5, 32);
    if (t61 == 1)
        goto LAB41;

LAB42:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t30, 3, t3, 32);
    if (t44 == 1)
        goto LAB43;

LAB44:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t30, 3, t3, 32);
    if (t44 == 1)
        goto LAB45;

LAB46:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t44 = xsi_vlog_unsigned_case_compare(t30, 3, t3, 32);
    if (t44 == 1)
        goto LAB47;

LAB48:    t2 = (t0 + 1424);
    t4 = *((char **)t2);
    t48 = xsi_vlog_unsigned_case_compare(t30, 3, t4, 32);
    if (t48 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB32;

LAB35:    xsi_set_current_line(62, ng0);
    t31 = ((char*)((ng4)));
    t40 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t40, t31, 0, 0, 7, 0LL);
    goto LAB51;

LAB37:    goto LAB35;

LAB39:    goto LAB35;

LAB41:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng5)));
    t16 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t16, t2, 0, 0, 7, 0LL);
    goto LAB51;

LAB43:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 7, 0LL);
    goto LAB51;

LAB45:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 7, 0LL);
    goto LAB51;

LAB47:    goto LAB45;

LAB49:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng8)));
    t5 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 7, 0LL);
    goto LAB51;

LAB54:    xsi_set_current_line(90, ng0);

LAB71:    xsi_set_current_line(91, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2544U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(98, ng0);

LAB76:    xsi_set_current_line(99, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB74:    goto LAB70;

LAB56:    xsi_set_current_line(106, ng0);

LAB77:    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng12)));
    t5 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB70;

LAB58:    goto LAB56;

LAB60:    xsi_set_current_line(112, ng0);

LAB78:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2704U);
    t16 = *((char **)t2);
    t2 = (t16 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t16);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(119, ng0);

LAB83:    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB81:    goto LAB70;

LAB62:    xsi_set_current_line(126, ng0);

LAB84:    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB70;

LAB64:    xsi_set_current_line(133, ng0);

LAB85:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2544U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(140, ng0);

LAB90:    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB88:    goto LAB70;

LAB66:    xsi_set_current_line(148, ng0);

LAB91:    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng12)));
    t5 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB70;

LAB68:    xsi_set_current_line(154, ng0);

LAB92:    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB70;

LAB72:    xsi_set_current_line(93, ng0);

LAB75:    xsi_set_current_line(94, ng0);
    t5 = ((char*)((ng10)));
    t16 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t16, t5, 0, 0, 2, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB74;

LAB79:    xsi_set_current_line(114, ng0);

LAB82:    xsi_set_current_line(115, ng0);
    t17 = ((char*)((ng10)));
    t24 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t24, t17, 0, 0, 2, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB81;

LAB86:    xsi_set_current_line(135, ng0);

LAB89:    xsi_set_current_line(136, ng0);
    t16 = ((char*)((ng10)));
    t17 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 2, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB88;

}


extern void work_m_00000000004181733874_4020927633_init()
{
	static char *pe[] = {(void *)Always_45_0};
	xsi_register_didat("work_m_00000000004181733874_4020927633", "isim/TrafficControllerTest_isim_beh.exe.sim/work/m_00000000004181733874_4020927633.didat");
	xsi_register_executes(pe);
}
