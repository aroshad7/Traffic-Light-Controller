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
static const char *ng0 = "C:/Users/Arosha/Desktop/HDL/Traffic_Controller_Project/TimeParameters.v";
static unsigned int ng1[] = {6U, 0U};
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {15U, 0U};



static void Always_44_0(char *t0)
{
    char t14[8];
    char t15[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4784);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 2664U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(73, ng0);

LAB73:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);

LAB74:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB79;

LAB80:
LAB82:
LAB81:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);

LAB83:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3224);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB8;

LAB10:    xsi_set_current_line(54, ng0);

LAB13:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1864U);
    t5 = *((char **)t4);

LAB14:    t4 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t13 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(63, ng0);

LAB72:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB23:    goto LAB12;

LAB15:    xsi_set_current_line(58, ng0);
    t11 = (t0 + 2024U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng4)));
    memset(t16, 0, 8);
    if (*((unsigned int *)t12) != *((unsigned int *)t11))
        goto LAB25;

LAB24:    t17 = (t12 + 4);
    t18 = (t11 + 4);
    if (*((unsigned int *)t17) != *((unsigned int *)t18))
        goto LAB25;

LAB26:    memset(t15, 0, 8);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t16);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t19) != 0)
        goto LAB29;

LAB30:    t26 = (t15 + 4);
    t27 = *((unsigned int *)t15);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB31;

LAB32:    t32 = *((unsigned int *)t15);
    t33 = (~(t32));
    t34 = *((unsigned int *)t26);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t26) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t15) > 0)
        goto LAB37;

LAB38:    memcpy(t14, t30, 8);

LAB39:    t36 = (t0 + 3224);
    xsi_vlogvar_assign_value(t36, t14, 0, 0, 4);
    goto LAB23;

LAB17:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 2024U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t16, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB41;

LAB40:    t11 = (t4 + 4);
    t12 = (t3 + 4);
    if (*((unsigned int *)t11) != *((unsigned int *)t12))
        goto LAB41;

LAB42:    memset(t15, 0, 8);
    t17 = (t16 + 4);
    t6 = *((unsigned int *)t17);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t17) != 0)
        goto LAB45;

LAB46:    t19 = (t15 + 4);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB47;

LAB48:    t23 = *((unsigned int *)t15);
    t24 = (~(t23));
    t27 = *((unsigned int *)t19);
    t28 = (t24 || t27);
    if (t28 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t19) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t15) > 0)
        goto LAB53;

LAB54:    memcpy(t14, t25, 8);

LAB55:    t30 = (t0 + 3384);
    xsi_vlogvar_assign_value(t30, t14, 0, 0, 4);
    goto LAB23;

LAB19:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 2024U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t16, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB57;

LAB56:    t11 = (t4 + 4);
    t12 = (t3 + 4);
    if (*((unsigned int *)t11) != *((unsigned int *)t12))
        goto LAB57;

LAB58:    memset(t15, 0, 8);
    t17 = (t16 + 4);
    t6 = *((unsigned int *)t17);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t17) != 0)
        goto LAB61;

LAB62:    t19 = (t15 + 4);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB63;

LAB64:    t23 = *((unsigned int *)t15);
    t24 = (~(t23));
    t27 = *((unsigned int *)t19);
    t28 = (t24 || t27);
    if (t28 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t19) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t15) > 0)
        goto LAB69;

LAB70:    memcpy(t14, t25, 8);

LAB71:    t30 = (t0 + 3544);
    xsi_vlogvar_assign_value(t30, t14, 0, 0, 4);
    goto LAB23;

LAB25:    *((unsigned int *)t16) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t15) = 1;
    goto LAB30;

LAB29:    t25 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB30;

LAB31:    t30 = (t0 + 2024U);
    t31 = *((char **)t30);
    goto LAB32;

LAB33:    t30 = ((char*)((ng1)));
    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t14, 4, t31, 4, t30, 4);
    goto LAB39;

LAB37:    memcpy(t14, t31, 8);
    goto LAB39;

LAB41:    *((unsigned int *)t16) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t15) = 1;
    goto LAB46;

LAB45:    t18 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB46;

LAB47:    t25 = (t0 + 2024U);
    t26 = *((char **)t25);
    goto LAB48;

LAB49:    t25 = ((char*)((ng2)));
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t14, 4, t26, 4, t25, 4);
    goto LAB55;

LAB53:    memcpy(t14, t26, 8);
    goto LAB55;

LAB57:    *((unsigned int *)t16) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t15) = 1;
    goto LAB62;

LAB61:    t18 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB62;

LAB63:    t25 = (t0 + 2024U);
    t26 = *((char **)t25);
    goto LAB64;

LAB65:    t25 = ((char*)((ng3)));
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t14, 4, t26, 4, t25, 4);
    goto LAB71;

LAB69:    memcpy(t14, t26, 8);
    goto LAB71;

LAB75:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 3224);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t17 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t17, t12, 0, 0, 4, 0LL);
    goto LAB83;

LAB77:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 3384);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t17 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t17, t12, 0, 0, 4, 0LL);
    goto LAB83;

LAB79:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 3544);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t17 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t17, t12, 0, 0, 4, 0LL);
    goto LAB83;

}


extern void work_m_00000000000715871011_1096856948_init()
{
	static char *pe[] = {(void *)Always_44_0};
	xsi_register_didat("work_m_00000000000715871011_1096856948", "isim/TrafficControllerTest_isim_beh.exe.sim/work/m_00000000000715871011_1096856948.didat");
	xsi_register_executes(pe);
}
