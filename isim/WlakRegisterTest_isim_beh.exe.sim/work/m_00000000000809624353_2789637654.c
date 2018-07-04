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
static const char *ng0 = "C:/Users/Arosha/Desktop/HDL/Traffic_Controller_Project/WlakRegisterTest.v";
static int ng1[] = {0, 0};
static const char *ng2 = "Starting test of WalkRegister ...";
static int ng3[] = {1, 0};
static const char *ng4 = "reset should trigger pendingWalk == 0";
static const char *ng5 = "reset == 1 overrides pendingWalk == 1";
static const char *ng6 = "walkPush but no pendingWalk!";
static const char *ng7 = "walkPush shouldn't need to stay 1 for pendingWalk == 1";
static const char *ng8 = "reset but pendingWalk == 1";
static const char *ng9 = " Passed test of WalkRegister ... ";



static void Initial_45_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);

LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB11:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1608);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB5;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB12:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB11;

LAB13:    goto LAB1;

}

static void Initial_49_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);

LAB4:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(60, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB8;

LAB7:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB8;

LAB9:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB8:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(65, ng0);

LAB13:    xsi_set_current_line(66, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    goto LAB12;

LAB14:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB16;

LAB15:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB16;

LAB17:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB16:    *((unsigned int *)t5) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(73, ng0);

LAB21:    xsi_set_current_line(74, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB20;

LAB22:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB24;

LAB23:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB24;

LAB25:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB24:    *((unsigned int *)t5) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(82, ng0);

LAB29:    xsi_set_current_line(83, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    goto LAB28;

LAB30:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB32;

LAB31:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB32;

LAB33:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB34;

LAB35:
LAB36:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB32:    *((unsigned int *)t5) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(90, ng0);

LAB37:    xsi_set_current_line(91, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    goto LAB36;

LAB38:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t5, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB40;

LAB39:    t6 = (t4 + 4);
    t7 = (t3 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB40;

LAB41:    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB42;

LAB43:
LAB44:    xsi_set_current_line(103, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    goto LAB1;

LAB40:    *((unsigned int *)t5) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(98, ng0);

LAB45:    xsi_set_current_line(99, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB44;

}


extern void work_m_00000000000809624353_2789637654_init()
{
	static char *pe[] = {(void *)Initial_45_0,(void *)Initial_49_1};
	xsi_register_didat("work_m_00000000000809624353_2789637654", "isim/WlakRegisterTest_isim_beh.exe.sim/work/m_00000000000809624353_2789637654.didat");
	xsi_register_executes(pe);
}
