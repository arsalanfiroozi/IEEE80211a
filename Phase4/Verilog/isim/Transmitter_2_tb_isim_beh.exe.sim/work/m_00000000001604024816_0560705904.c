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
static const char *ng0 = "D:/HW/FPGA/Project/Phase4/Verilog/Transmitter_2_tb.v";
static const char *ng1 = "In.txt";
static const char *ng2 = "Out_Scramble.txt";
static const char *ng3 = "Out_Encoder.txt";
static const char *ng4 = "Out_Interleaver.txt";
static int ng5[] = {0, 0};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {0U, 0U};
static int ng8[] = {540, 0};
static unsigned int ng9[] = {1U, 0U};
static int ng10[] = {12, 0};
static const char *ng11 = "1: %d \n";
static const char *ng12 = "2: %d \n";
static const char *ng13 = "3: %d \n";
static const char *ng14 = "Total Error in Scrambler: %d \n";
static const char *ng15 = "No Error was found in Scrambler. \n ------------------------------ \n";
static const char *ng16 = "Total Error in Encoder: %d \n";
static const char *ng17 = "No Error was found in Encoder. \n ------------------------------ \n";
static const char *ng18 = "Total Error in Interleaver: %d \n";
static const char *ng19 = "No Error was found in Interleaver. \n ------------------------------ \n";
static unsigned int ng20[] = {18U, 0U};



static void Cont_13_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 8924);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 6696);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 0);
    t18 = (t0 + 6536);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_14_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 8940);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 6760);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 0);
    t18 = (t0 + 6552);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_28_2(char *t0)
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

LAB0:    t1 = (t0 + 5720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 6568);
    *((int *)t2) = 1;
    t3 = (t0 + 5752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);
    t5 = (t0 + 2224);
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
    t25 = (t0 + 2224);
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

static void Initial_38_3(char *t0)
{
    char t6[8];
    char t16[8];
    char t27[8];
    char t44[8];
    char t50[8];
    char t58[8];
    char t100[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t28;
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
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t101;

LAB0:    t1 = (t0 + 5968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);

LAB4:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2864);
    xsi_vlogfile_readmemb(ng1, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3024);
    xsi_vlogfile_readmemb(ng2, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3184);
    xsi_vlogfile_readmemb(ng3, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3344);
    xsi_vlogfile_readmemb(ng4, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 6584);
    *((int *)t2) = 1;
    t3 = (t0 + 6000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(53, ng0);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)119, t4, 32);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB69;

LAB70:
LAB71:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng16, 2, t0, (char)119, t4, 32);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB72;

LAB73:
LAB74:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng18, 2, t0, (char)119, t4, 32);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB75;

LAB76:
LAB77:    xsi_set_current_line(87, ng0);
    xsi_vlog_stop(1);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB78:    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)119, t4, 32);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB141;

LAB142:
LAB143:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng16, 2, t0, (char)119, t4, 32);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB144;

LAB145:
LAB146:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng18, 2, t0, (char)119, t4, 32);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB147;

LAB148:
LAB149:    xsi_set_current_line(125, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

LAB7:    xsi_set_current_line(53, ng0);

LAB9:    xsi_set_current_line(54, ng0);
    t13 = (t0 + 2864);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 2864);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2864);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3504);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t16, 1, t15, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t0 + 2704);
    xsi_vlogvar_assign_value(t26, t16, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 6600);
    *((int *)t2) = 1;
    t3 = (t0 + 6000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 3024);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3024);
    t13 = (t7 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 3024);
    t17 = (t15 + 64U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng10)));
    t20 = (t0 + 3504);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t19, 32, t22, 32);
    xsi_vlog_generic_get_array_select_value(t6, 1, t5, t14, t18, 2, 1, t16, 32, 1);
    memset(t27, 0, 8);
    t23 = (t3 + 4);
    t24 = (t6 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t23);
    t12 = *((unsigned int *)t24);
    t28 = (t11 ^ t12);
    t29 = (t10 | t28);
    t30 = *((unsigned int *)t23);
    t31 = *((unsigned int *)t24);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB12;

LAB11:    if (t32 != 0)
        goto LAB13;

LAB14:    t26 = (t27 + 4);
    t35 = *((unsigned int *)t26);
    t36 = (~(t35));
    t37 = *((unsigned int *)t27);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 8972);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t7) != 0)
        goto LAB21;

LAB22:    t14 = (t6 + 4);
    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t14);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB23;

LAB24:    memcpy(t58, t6, 8);

LAB25:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 9004);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB41;

LAB42:
LAB43:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t2) != 0)
        goto LAB46;

LAB47:    t5 = (t6 + 4);
    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t5);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB48;

LAB49:    memcpy(t50, t6, 8);

LAB50:    t63 = (t50 + 4);
    t91 = *((unsigned int *)t63);
    t92 = (~(t91));
    t93 = *((unsigned int *)t50);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB62;

LAB63:
LAB64:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB66;

LAB67:
LAB68:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3504);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB12:    *((unsigned int *)t27) = 1;
    goto LAB14;

LAB13:    t25 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(58, ng0);

LAB18:    xsi_set_current_line(59, ng0);
    t40 = (t0 + 3664);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng6)));
    memset(t44, 0, 8);
    xsi_vlog_signed_add(t44, 32, t42, 32, t43, 32);
    t45 = (t0 + 3664);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng11, 2, t0, (char)119, t4, 32);
    goto LAB17;

LAB19:    *((unsigned int *)t6) = 1;
    goto LAB22;

LAB21:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB22;

LAB23:    t15 = (t0 + 1504U);
    t17 = *((char **)t15);
    t15 = (t0 + 3184);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 3184);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 3184);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng10)));
    t40 = (t0 + 4144);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t27, 0, 8);
    xsi_vlog_signed_add(t27, 32, t26, 32, t42, 32);
    xsi_vlog_generic_get_array_select_value(t16, 1, t19, t22, t25, 2, 1, t27, 32, 1);
    memset(t44, 0, 8);
    t43 = (t17 + 4);
    t45 = (t16 + 4);
    t31 = *((unsigned int *)t17);
    t32 = *((unsigned int *)t16);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t43);
    t35 = *((unsigned int *)t45);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t43);
    t39 = *((unsigned int *)t45);
    t46 = (t38 | t39);
    t47 = (~(t46));
    t48 = (t37 & t47);
    if (t48 != 0)
        goto LAB27;

LAB26:    if (t46 != 0)
        goto LAB28;

LAB29:    memset(t50, 0, 8);
    t51 = (t44 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t44);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t51) != 0)
        goto LAB32;

LAB33:    t59 = *((unsigned int *)t6);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t6 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB25;

LAB27:    *((unsigned int *)t44) = 1;
    goto LAB29;

LAB28:    t49 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB29;

LAB30:    *((unsigned int *)t50) = 1;
    goto LAB33;

LAB32:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB33;

LAB34:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t6 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t6);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB36;

LAB37:    xsi_set_current_line(62, ng0);

LAB40:    xsi_set_current_line(63, ng0);
    t96 = (t0 + 3824);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    t99 = ((char*)((ng6)));
    memset(t100, 0, 8);
    xsi_vlog_signed_add(t100, 32, t98, 32, t99, 32);
    t101 = (t0 + 3824);
    xsi_vlogvar_assign_value(t101, t100, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t0, (char)119, t4, 32);
    goto LAB39;

LAB41:    xsi_set_current_line(67, ng0);
    t13 = (t0 + 4144);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t15, 32, t17, 32);
    t18 = (t0 + 4144);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 32);
    goto LAB43;

LAB44:    *((unsigned int *)t6) = 1;
    goto LAB47;

LAB46:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB47;

LAB48:    t7 = (t0 + 1184U);
    t13 = *((char **)t7);
    t7 = (t0 + 3344);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 3344);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3344);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 4304);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t16, 1, t15, t19, t22, 2, 1, t25, 32, 1);
    memset(t27, 0, 8);
    t26 = (t13 + 4);
    t40 = (t16 + 4);
    t31 = *((unsigned int *)t13);
    t32 = *((unsigned int *)t16);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t26);
    t35 = *((unsigned int *)t40);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t40);
    t46 = (t38 | t39);
    t47 = (~(t46));
    t48 = (t37 & t47);
    if (t48 != 0)
        goto LAB52;

LAB51:    if (t46 != 0)
        goto LAB53;

LAB54:    memset(t44, 0, 8);
    t42 = (t27 + 4);
    t52 = *((unsigned int *)t42);
    t53 = (~(t52));
    t54 = *((unsigned int *)t27);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t42) != 0)
        goto LAB57;

LAB58:    t59 = *((unsigned int *)t6);
    t60 = *((unsigned int *)t44);
    t61 = (t59 & t60);
    *((unsigned int *)t50) = t61;
    t45 = (t6 + 4);
    t49 = (t44 + 4);
    t51 = (t50 + 4);
    t65 = *((unsigned int *)t45);
    t66 = *((unsigned int *)t49);
    t67 = (t65 | t66);
    *((unsigned int *)t51) = t67;
    t68 = *((unsigned int *)t51);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB50;

LAB52:    *((unsigned int *)t27) = 1;
    goto LAB54;

LAB53:    t41 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t44) = 1;
    goto LAB58;

LAB57:    t43 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB58;

LAB59:    t70 = *((unsigned int *)t50);
    t71 = *((unsigned int *)t51);
    *((unsigned int *)t50) = (t70 | t71);
    t57 = (t6 + 4);
    t62 = (t44 + 4);
    t74 = *((unsigned int *)t6);
    t75 = (~(t74));
    t76 = *((unsigned int *)t57);
    t77 = (~(t76));
    t78 = *((unsigned int *)t44);
    t79 = (~(t78));
    t80 = *((unsigned int *)t62);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t86 & t84);
    t87 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t87 & t85);
    t88 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t88 & t84);
    t89 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t89 & t85);
    goto LAB61;

LAB62:    xsi_set_current_line(68, ng0);

LAB65:    xsi_set_current_line(69, ng0);
    t64 = (t0 + 3984);
    t72 = (t64 + 56U);
    t73 = *((char **)t72);
    t90 = ((char*)((ng6)));
    memset(t58, 0, 8);
    xsi_vlog_signed_add(t58, 32, t73, 32, t90, 32);
    t96 = (t0 + 3984);
    xsi_vlogvar_assign_value(t96, t58, 0, 0, 32);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)119, t4, 32);
    goto LAB64;

LAB66:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 4304);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t13 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t7, 32, t13, 32);
    t14 = (t0 + 4304);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 32);
    goto LAB68;

LAB69:    xsi_set_current_line(78, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);
    goto LAB71;

LAB72:    xsi_set_current_line(82, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    goto LAB74;

LAB75:    xsi_set_current_line(86, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    goto LAB77;

LAB79:    xsi_set_current_line(91, ng0);

LAB81:    xsi_set_current_line(92, ng0);
    t13 = (t0 + 2864);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 2864);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2864);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3504);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t16, 1, t15, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t0 + 2704);
    xsi_vlogvar_assign_value(t26, t16, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 6616);
    *((int *)t2) = 1;
    t3 = (t0 + 6000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB82:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 3024);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3024);
    t13 = (t7 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 3024);
    t17 = (t15 + 64U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng10)));
    t20 = (t0 + 3504);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t19, 32, t22, 32);
    xsi_vlog_generic_get_array_select_value(t6, 1, t5, t14, t18, 2, 1, t16, 32, 1);
    memset(t27, 0, 8);
    t23 = (t3 + 4);
    t24 = (t6 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t23);
    t12 = *((unsigned int *)t24);
    t28 = (t11 ^ t12);
    t29 = (t10 | t28);
    t30 = *((unsigned int *)t23);
    t31 = *((unsigned int *)t24);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB84;

LAB83:    if (t32 != 0)
        goto LAB85;

LAB86:    t26 = (t27 + 4);
    t35 = *((unsigned int *)t26);
    t36 = (~(t35));
    t37 = *((unsigned int *)t27);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB87;

LAB88:
LAB89:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 9036);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t7) != 0)
        goto LAB93;

LAB94:    t14 = (t6 + 4);
    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t14);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB95;

LAB96:    memcpy(t58, t6, 8);

LAB97:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB109;

LAB110:
LAB111:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 9068);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB113;

LAB114:
LAB115:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t2) != 0)
        goto LAB118;

LAB119:    t5 = (t6 + 4);
    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t5);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB120;

LAB121:    memcpy(t50, t6, 8);

LAB122:    t63 = (t50 + 4);
    t91 = *((unsigned int *)t63);
    t92 = (~(t91));
    t93 = *((unsigned int *)t50);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB134;

LAB135:
LAB136:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB138;

LAB139:
LAB140:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3504);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB78;

LAB84:    *((unsigned int *)t27) = 1;
    goto LAB86;

LAB85:    t25 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB86;

LAB87:    xsi_set_current_line(96, ng0);

LAB90:    xsi_set_current_line(97, ng0);
    t40 = (t0 + 3664);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng6)));
    memset(t44, 0, 8);
    xsi_vlog_signed_add(t44, 32, t42, 32, t43, 32);
    t45 = (t0 + 3664);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 32);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng11, 2, t0, (char)119, t4, 32);
    goto LAB89;

LAB91:    *((unsigned int *)t6) = 1;
    goto LAB94;

LAB93:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB94;

LAB95:    t15 = (t0 + 1504U);
    t17 = *((char **)t15);
    t15 = (t0 + 3184);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 3184);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 3184);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng10)));
    t40 = (t0 + 4144);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t27, 0, 8);
    xsi_vlog_signed_add(t27, 32, t26, 32, t42, 32);
    xsi_vlog_generic_get_array_select_value(t16, 1, t19, t22, t25, 2, 1, t27, 32, 1);
    memset(t44, 0, 8);
    t43 = (t17 + 4);
    t45 = (t16 + 4);
    t31 = *((unsigned int *)t17);
    t32 = *((unsigned int *)t16);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t43);
    t35 = *((unsigned int *)t45);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t43);
    t39 = *((unsigned int *)t45);
    t46 = (t38 | t39);
    t47 = (~(t46));
    t48 = (t37 & t47);
    if (t48 != 0)
        goto LAB99;

LAB98:    if (t46 != 0)
        goto LAB100;

LAB101:    memset(t50, 0, 8);
    t51 = (t44 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t44);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t51) != 0)
        goto LAB104;

LAB105:    t59 = *((unsigned int *)t6);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t6 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB106;

LAB107:
LAB108:    goto LAB97;

LAB99:    *((unsigned int *)t44) = 1;
    goto LAB101;

LAB100:    t49 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB101;

LAB102:    *((unsigned int *)t50) = 1;
    goto LAB105;

LAB104:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB105;

LAB106:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t6 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t6);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB108;

LAB109:    xsi_set_current_line(100, ng0);

LAB112:    xsi_set_current_line(101, ng0);
    t96 = (t0 + 3824);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    t99 = ((char*)((ng6)));
    memset(t100, 0, 8);
    xsi_vlog_signed_add(t100, 32, t98, 32, t99, 32);
    t101 = (t0 + 3824);
    xsi_vlogvar_assign_value(t101, t100, 0, 0, 32);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t0, (char)119, t4, 32);
    goto LAB111;

LAB113:    xsi_set_current_line(105, ng0);
    t13 = (t0 + 4144);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t15, 32, t17, 32);
    t18 = (t0 + 4144);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 32);
    goto LAB115;

LAB116:    *((unsigned int *)t6) = 1;
    goto LAB119;

LAB118:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB119;

LAB120:    t7 = (t0 + 1184U);
    t13 = *((char **)t7);
    t7 = (t0 + 3344);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 3344);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3344);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 4304);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t16, 1, t15, t19, t22, 2, 1, t25, 32, 1);
    memset(t27, 0, 8);
    t26 = (t13 + 4);
    t40 = (t16 + 4);
    t31 = *((unsigned int *)t13);
    t32 = *((unsigned int *)t16);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t26);
    t35 = *((unsigned int *)t40);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t40);
    t46 = (t38 | t39);
    t47 = (~(t46));
    t48 = (t37 & t47);
    if (t48 != 0)
        goto LAB124;

LAB123:    if (t46 != 0)
        goto LAB125;

LAB126:    memset(t44, 0, 8);
    t42 = (t27 + 4);
    t52 = *((unsigned int *)t42);
    t53 = (~(t52));
    t54 = *((unsigned int *)t27);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t42) != 0)
        goto LAB129;

LAB130:    t59 = *((unsigned int *)t6);
    t60 = *((unsigned int *)t44);
    t61 = (t59 & t60);
    *((unsigned int *)t50) = t61;
    t45 = (t6 + 4);
    t49 = (t44 + 4);
    t51 = (t50 + 4);
    t65 = *((unsigned int *)t45);
    t66 = *((unsigned int *)t49);
    t67 = (t65 | t66);
    *((unsigned int *)t51) = t67;
    t68 = *((unsigned int *)t51);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB131;

LAB132:
LAB133:    goto LAB122;

LAB124:    *((unsigned int *)t27) = 1;
    goto LAB126;

LAB125:    t41 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB126;

LAB127:    *((unsigned int *)t44) = 1;
    goto LAB130;

LAB129:    t43 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB130;

LAB131:    t70 = *((unsigned int *)t50);
    t71 = *((unsigned int *)t51);
    *((unsigned int *)t50) = (t70 | t71);
    t57 = (t6 + 4);
    t62 = (t44 + 4);
    t74 = *((unsigned int *)t6);
    t75 = (~(t74));
    t76 = *((unsigned int *)t57);
    t77 = (~(t76));
    t78 = *((unsigned int *)t44);
    t79 = (~(t78));
    t80 = *((unsigned int *)t62);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t86 & t84);
    t87 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t87 & t85);
    t88 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t88 & t84);
    t89 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t89 & t85);
    goto LAB133;

LAB134:    xsi_set_current_line(106, ng0);

LAB137:    xsi_set_current_line(107, ng0);
    t64 = (t0 + 3984);
    t72 = (t64 + 56U);
    t73 = *((char **)t72);
    t90 = ((char*)((ng6)));
    memset(t58, 0, 8);
    xsi_vlog_signed_add(t58, 32, t73, 32, t90, 32);
    t96 = (t0 + 3984);
    xsi_vlogvar_assign_value(t96, t58, 0, 0, 32);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)119, t4, 32);
    goto LAB136;

LAB138:    xsi_set_current_line(111, ng0);
    t4 = (t0 + 4304);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t13 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t7, 32, t13, 32);
    t14 = (t0 + 4304);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 32);
    goto LAB140;

LAB141:    xsi_set_current_line(116, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);
    goto LAB143;

LAB144:    xsi_set_current_line(120, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    goto LAB146;

LAB147:    xsi_set_current_line(124, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    goto LAB149;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 6216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng20)));
    t3 = (t0 + 6824);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 31U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 4);

LAB1:    return;
}


extern void work_m_00000000001604024816_0560705904_init()
{
	static char *pe[] = {(void *)Cont_13_0,(void *)Cont_14_1,(void *)Always_28_2,(void *)Initial_38_3,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000001604024816_0560705904", "isim/Transmitter_2_tb_isim_beh.exe.sim/work/m_00000000001604024816_0560705904.didat");
	xsi_register_executes(pe);
}
