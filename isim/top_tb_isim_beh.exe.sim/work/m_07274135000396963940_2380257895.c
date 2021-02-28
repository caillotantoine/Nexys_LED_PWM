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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/caillot/Documents/Autres/Projets/FPGA/LED_PWM/clk_devider.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};



static void Always_29_0(char *t0)
{
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3000);
    *((int *)t2) = 1;
    t3 = (t0 + 2712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t8, 16, t7, 32);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB7;

LAB6:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t9))
        goto LAB9;

LAB8:    *((unsigned int *)t10) = 1;

LAB9:    t14 = (t10 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t10);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(33, ng0);

LAB21:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 16, t5, 32);
    t6 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t6, t9, 0, 0, 16, 0LL);

LAB13:    goto LAB2;

LAB7:    t13 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(30, ng0);

LAB14:    xsi_set_current_line(31, ng0);
    t20 = ((char*)((ng2)));
    t21 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 16, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t5) == 0)
        goto LAB15;

LAB17:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;

LAB18:    t7 = (t9 + 4);
    t8 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    *((unsigned int *)t9) = t23;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB20;

LAB19:    t28 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t28 & 1U);
    t29 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t29 & 1U);
    t11 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t11, t9, 0, 0, 1, 0LL);
    goto LAB13;

LAB15:    *((unsigned int *)t9) = 1;
    goto LAB18;

LAB20:    t24 = *((unsigned int *)t9);
    t25 = *((unsigned int *)t8);
    *((unsigned int *)t9) = (t24 | t25);
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t26 | t27);
    goto LAB19;

}


extern void work_m_07274135000396963940_2380257895_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_07274135000396963940_2380257895", "isim/top_tb_isim_beh.exe.sim/work/m_07274135000396963940_2380257895.didat");
	xsi_register_executes(pe);
}
