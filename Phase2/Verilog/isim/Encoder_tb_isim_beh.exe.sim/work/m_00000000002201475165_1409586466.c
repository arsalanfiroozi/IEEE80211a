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
static const char *ng0 = "D:/HW/FPGA/Project/Phase2/Verilog/Encoder_tb.v";
static const char *ng1 = "Out_Scramble.txt";
static const char *ng2 = "Out_Encoder.txt";
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {1, 0};
static const char *ng8 = "i: %d ==> Out: %d Got %d \n";
static const char *ng9 = "Total Error in Encoder: %d \n";
static const char *ng10 = "No Error was found in Encoder. \n";



static void Always_45_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4192);
    *((int *)t2) = 1;
    t3 = (t0 + 3656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);
    t5 = (t0 + 1584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t8) == 0)
        goto LAB5;

LAB7:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB8:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB10;

LAB9:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t25, t4, 0, 0, 1, 5000LL);
    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB10:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB9;

}

static void Initial_53_1(char *t0)
{
    char t8[8];
    char t9[8];
    char t18[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;

LAB0:    t1 = (t0 + 3872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);

LAB4:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2224);
    xsi_vlogfile_readmemb(ng1, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2384);
    xsi_vlogfile_readmemb(ng2, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4208);
    *((int *)t2) = 1;
    t3 = (t0 + 3904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(62, ng0);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 472);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t5, 32, t7, 32);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t4, 32, t8, 32);
    t6 = (t9 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)119, t4, 32);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(75, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

LAB7:    xsi_set_current_line(62, ng0);

LAB9:    xsi_set_current_line(63, ng0);
    t15 = (t0 + 2224);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t19 = (t0 + 2224);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2224);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 2544);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t18, 1, t17, t21, t24, 2, 1, t27, 32, 1);
    t28 = (t0 + 1904);
    xsi_vlogvar_assign_value(t28, t18, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4224);
    *((int *)t2) = 1;
    t3 = (t0 + 3904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 2384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2384);
    t7 = (t6 + 72U);
    t15 = *((char **)t7);
    t16 = (t0 + 2384);
    t17 = (t16 + 64U);
    t19 = *((char **)t17);
    t20 = (t0 + 2544);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng7)));
    memset(t9, 0, 8);
    xsi_vlog_signed_minus(t9, 32, t22, 32, t23, 32);
    xsi_vlog_generic_get_array_select_value(t8, 1, t5, t15, t19, 2, 1, t9, 32, 1);
    memset(t18, 0, 8);
    t24 = (t3 + 4);
    t25 = (t8 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t24);
    t14 = *((unsigned int *)t25);
    t29 = (t13 ^ t14);
    t30 = (t12 | t29);
    t31 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t25);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB12;

LAB11:    if (t33 != 0)
        goto LAB13;

LAB14:    t27 = (t18 + 4);
    t36 = *((unsigned int *)t27);
    t37 = (~(t36));
    t38 = *((unsigned int *)t18);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 2544);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB6;

LAB12:    *((unsigned int *)t18) = 1;
    goto LAB14;

LAB13:    t26 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(66, ng0);

LAB18:    xsi_set_current_line(67, ng0);
    t28 = (t0 + 2704);
    t41 = (t28 + 56U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng7)));
    memset(t44, 0, 8);
    xsi_vlog_signed_add(t44, 32, t42, 32, t43, 32);
    t45 = (t0 + 2704);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2384);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t15 = (t0 + 2384);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t19 = (t0 + 2384);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2544);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng7)));
    memset(t9, 0, 8);
    xsi_vlog_signed_minus(t9, 32, t24, 32, t25, 32);
    xsi_vlog_generic_get_array_select_value(t8, 1, t7, t17, t21, 2, 1, t9, 32, 1);
    t26 = (t0 + 1184U);
    t27 = *((char **)t26);
    xsi_vlogfile_write(1, 0, 0, ng8, 4, t0, (char)119, t4, 32, (char)118, t8, 1, (char)118, t27, 1);
    goto LAB17;

LAB19:    xsi_set_current_line(74, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    goto LAB21;

}


extern void work_m_00000000002201475165_1409586466_init()
{
	static char *pe[] = {(void *)Always_45_0,(void *)Initial_53_1};
	xsi_register_didat("work_m_00000000002201475165_1409586466", "isim/Encoder_tb_isim_beh.exe.sim/work/m_00000000002201475165_1409586466.didat");
	xsi_register_executes(pe);
}
