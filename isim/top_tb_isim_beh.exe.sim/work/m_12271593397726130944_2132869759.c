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
static const char *ng0 = "/home/caillot/Documents/Autres/Projets/FPGA/LED_PWM/PWM_generator.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {255U, 0U};



static void Always_29_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;

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
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB8;

LAB9:    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(32, ng0);

LAB15:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB13:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 8, t5, 32);
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t9, 0, 0, 8);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t7);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB19;

LAB16:    if (t24 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t9) = 1;

LAB19:    t10 = (t9 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB7:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(30, ng0);

LAB14:    xsi_set_current_line(31, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 1, 0LL);
    goto LAB13;

LAB18:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(36, ng0);

LAB23:    xsi_set_current_line(37, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB22;

}


extern void work_m_12271593397726130944_2132869759_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_12271593397726130944_2132869759", "isim/top_tb_isim_beh.exe.sim/work/m_12271593397726130944_2132869759.didat");
	xsi_register_executes(pe);
}
