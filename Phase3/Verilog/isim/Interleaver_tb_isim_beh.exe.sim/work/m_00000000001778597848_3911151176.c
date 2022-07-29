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
static const char *ng0 = "D:/HW/FPGA/Project/Phase3/Verilog/Interleaver_tb.v";
static const char *ng1 = "Out_Encoder.txt";
static const char *ng2 = "Out_Interleaver.txt";
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {12, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {1, 0};
static const char *ng8 = "i: %d ==> Out: %d Got %d \n";
static const char *ng9 = "Total Error in Interleaver: %d \n";
static const char *ng10 = "No Error was found in Interleaver. \n";
static unsigned int ng11[] = {13U, 0U};



static void Always_26_0(char *t0)
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

LAB0:    t1 = (t0 + 4264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 5080);
    *((int *)t2) = 1;
    t3 = (t0 + 4296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);
    t5 = (t0 + 1904);
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
    t25 = (t0 + 1904);
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

static void Initial_34_1(char *t0)
{
    char t7[8];
    char t16[8];
    char t27[8];
    char t32[8];
    char t33[8];
    char t49[8];
    char t57[8];
    char t99[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
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
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t100;

LAB0:    t1 = (t0 + 4512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);

LAB4:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2704);
    xsi_vlogfile_readmemb(ng1, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2864);
    xsi_vlogfile_readmemb(ng2, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 5096);
    *((int *)t2) = 1;
    t3 = (t0 + 4544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(44, ng0);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)119, t4, 32);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t4, 32, t5, 32);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(60, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

LAB7:    xsi_set_current_line(44, ng0);

LAB9:    xsi_set_current_line(45, ng0);
    t13 = (t0 + 2704);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 2704);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2704);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3024);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng5)));
    memset(t27, 0, 8);
    xsi_vlog_signed_add(t27, 32, t25, 32, t26, 32);
    xsi_vlog_generic_get_array_select_value(t16, 1, t15, t19, t22, 2, 1, t27, 32, 1);
    t28 = (t0 + 2384);
    xsi_vlogvar_assign_value(t28, t16, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5112);
    *((int *)t2) = 1;
    t3 = (t0 + 4544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2864);
    t6 = (t5 + 72U);
    t13 = *((char **)t6);
    t14 = (t0 + 2864);
    t15 = (t14 + 64U);
    t17 = *((char **)t15);
    t18 = (t0 + 3184);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t20, 32, t21, 32);
    t22 = ((char*)((ng7)));
    memset(t27, 0, 8);
    xsi_vlog_signed_minus(t27, 32, t16, 32, t22, 32);
    xsi_vlog_generic_get_array_select_value(t7, 1, t4, t13, t17, 2, 1, t27, 32, 1);
    t23 = (t0 + 2544);
    xsi_vlogvar_assign_value(t23, t7, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t2) != 0)
        goto LAB16;

LAB17:    t5 = (t7 + 4);
    t29 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t5);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB18;

LAB19:    memcpy(t57, t7, 8);

LAB20:    t89 = (t57 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t57);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 3024);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB6;

LAB11:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 3184);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t13 = ((char*)((ng7)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t13, 32);
    t14 = (t0 + 3184);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 32);
    goto LAB13;

LAB14:    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB16:    t4 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    t6 = (t0 + 1184U);
    t13 = *((char **)t6);
    t6 = (t0 + 2864);
    t14 = (t6 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 2864);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2864);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng5)));
    t24 = (t0 + 3184);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    xsi_vlog_signed_add(t27, 32, t23, 32, t26, 32);
    t28 = ((char*)((ng7)));
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 32, t27, 32, t28, 32);
    xsi_vlog_generic_get_array_select_value(t16, 1, t15, t19, t22, 2, 1, t32, 32, 1);
    memset(t33, 0, 8);
    t34 = (t13 + 4);
    t35 = (t16 + 4);
    t36 = *((unsigned int *)t13);
    t37 = *((unsigned int *)t16);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t34);
    t40 = *((unsigned int *)t35);
    t41 = (t39 ^ t40);
    t42 = (t38 | t41);
    t43 = *((unsigned int *)t34);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB22;

LAB21:    if (t45 != 0)
        goto LAB23;

LAB24:    memset(t49, 0, 8);
    t50 = (t33 + 4);
    t51 = *((unsigned int *)t50);
    t52 = (~(t51));
    t53 = *((unsigned int *)t33);
    t54 = (t53 & t52);
    t55 = (t54 & 1U);
    if (t55 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t50) != 0)
        goto LAB27;

LAB28:    t58 = *((unsigned int *)t7);
    t59 = *((unsigned int *)t49);
    t60 = (t58 & t59);
    *((unsigned int *)t57) = t60;
    t61 = (t7 + 4);
    t62 = (t49 + 4);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t61);
    t65 = *((unsigned int *)t62);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 != 0);
    if (t68 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB20;

LAB22:    *((unsigned int *)t33) = 1;
    goto LAB24;

LAB23:    t48 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t49) = 1;
    goto LAB28;

LAB27:    t56 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB28;

LAB29:    t69 = *((unsigned int *)t57);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t57) = (t69 | t70);
    t71 = (t7 + 4);
    t72 = (t49 + 4);
    t73 = *((unsigned int *)t7);
    t74 = (~(t73));
    t75 = *((unsigned int *)t71);
    t76 = (~(t75));
    t77 = *((unsigned int *)t49);
    t78 = (~(t77));
    t79 = *((unsigned int *)t72);
    t80 = (~(t79));
    t81 = (t74 & t76);
    t82 = (t78 & t80);
    t83 = (~(t81));
    t84 = (~(t82));
    t85 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t85 & t83);
    t86 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t86 & t84);
    t87 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t87 & t83);
    t88 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t88 & t84);
    goto LAB31;

LAB32:    xsi_set_current_line(51, ng0);

LAB35:    xsi_set_current_line(52, ng0);
    t95 = (t0 + 3344);
    t96 = (t95 + 56U);
    t97 = *((char **)t96);
    t98 = ((char*)((ng7)));
    memset(t99, 0, 8);
    xsi_vlog_signed_add(t99, 32, t97, 32, t98, 32);
    t100 = (t0 + 3344);
    xsi_vlogvar_assign_value(t100, t99, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2864);
    t6 = (t5 + 56U);
    t13 = *((char **)t6);
    t14 = (t0 + 2864);
    t15 = (t14 + 72U);
    t17 = *((char **)t15);
    t18 = (t0 + 2864);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng5)));
    t22 = (t0 + 3184);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t21, 32, t24, 32);
    t25 = ((char*)((ng7)));
    memset(t27, 0, 8);
    xsi_vlog_signed_minus(t27, 32, t16, 32, t25, 32);
    xsi_vlog_generic_get_array_select_value(t7, 1, t13, t17, t20, 2, 1, t27, 32, 1);
    t26 = (t0 + 1184U);
    t28 = *((char **)t26);
    xsi_vlogfile_write(1, 0, 0, ng8, 4, t0, (char)119, t4, 32, (char)118, t7, 1, (char)118, t28, 1);
    goto LAB34;

LAB36:    xsi_set_current_line(59, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    goto LAB38;

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

LAB0:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng11)));
    t3 = (t0 + 5192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
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
    xsi_driver_vfirst_trans(t3, 0, 3);

LAB1:    return;
}


extern void work_m_00000000001778597848_3911151176_init()
{
	static char *pe[] = {(void *)Always_26_0,(void *)Initial_34_1,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000001778597848_3911151176", "isim/Interleaver_tb_isim_beh.exe.sim/work/m_00000000001778597848_3911151176.didat");
	xsi_register_executes(pe);
}
