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
static const char *ng0 = "D:/HW/FPGA/Project/Phase2/Verilog/Decoder_Viterbi_tb.v";
static const char *ng1 = "Out_Encoder.txt";
static const char *ng2 = "Out_DeCoder2.txt";
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {276, 0};
static int ng6[] = {551, 0};
static unsigned int ng7[] = {1U, 0U};
static int ng8[] = {1, 0};
static const char *ng9 = "i: %d ind: %d ==> Out: %d Got %d \n";
static const char *ng10 = "Total Error in Encoder: %d \n";
static const char *ng11 = "No Error was found in Encoder. \n";
static unsigned int ng12[] = {276U, 0U};



static void Always_28_0(char *t0)
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

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 5104);
    *((int *)t2) = 1;
    t3 = (t0 + 4320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);
    t5 = (t0 + 1768);
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
    t25 = (t0 + 1768);
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
    char t6[8];
    char t17[8];
    char t37[8];
    char t38[8];
    char t45[8];
    char t77[8];
    char t93[8];
    char t103[8];
    char t119[8];
    char t127[8];
    char t169[8];
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
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
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
    char *t92;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    int t151;
    int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    char *t167;
    char *t168;
    char *t170;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);

LAB4:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2568);
    xsi_vlogfile_readmemb(ng1, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2728);
    xsi_vlogfile_readmemb(ng2, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5120);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(45, ng0);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
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

LAB8:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng10, 2, t0, (char)119, t4, 32);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
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
LAB77:    xsi_set_current_line(64, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

LAB7:    xsi_set_current_line(45, ng0);

LAB9:    xsi_set_current_line(46, ng0);
    t13 = (t0 + 2888);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng6)));
    memset(t17, 0, 8);
    xsi_vlog_signed_greatereq(t17, 32, t15, 32, t16, 32);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t17);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t7 = (t5 + 72U);
    t13 = *((char **)t7);
    t14 = (t0 + 2568);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t18 = (t0 + 2888);
    t24 = (t18 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t6, 1, t4, t13, t16, 2, 1, t25, 32, 1);
    t26 = (t0 + 2088);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);

LAB12:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 5136);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB10:    xsi_set_current_line(47, ng0);
    t24 = ((char*)((ng3)));
    t25 = (t0 + 2088);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 1);
    goto LAB12;

LAB13:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t7 = (t5 + 72U);
    t13 = *((char **)t7);
    t14 = (t0 + 2728);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t18 = (t0 + 3208);
    t24 = (t18 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t6, 1, t4, t13, t16, 2, 1, t25, 32, 1);
    t26 = (t0 + 2408);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t27 = (~(t23));
    t28 = (t20 & t27);
    if (t28 != 0)
        goto LAB17;

LAB14:    if (t23 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    memset(t17, 0, 8);
    t13 = (t6 + 4);
    t29 = *((unsigned int *)t13);
    t30 = (~(t29));
    t31 = *((unsigned int *)t6);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t13) != 0)
        goto LAB20;

LAB21:    t15 = (t17 + 4);
    t34 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t15);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB22;

LAB23:    memcpy(t45, t17, 8);

LAB24:    memset(t77, 0, 8);
    t78 = (t45 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t45);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t78) != 0)
        goto LAB34;

LAB35:    t85 = (t77 + 4);
    t86 = *((unsigned int *)t77);
    t87 = *((unsigned int *)t85);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB36;

LAB37:    memcpy(t127, t77, 8);

LAB38:    t159 = (t127 + 4);
    t160 = *((unsigned int *)t159);
    t161 = (~(t160));
    t162 = *((unsigned int *)t127);
    t163 = (t162 & t161);
    t164 = (t163 != 0);
    if (t164 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t27 = (~(t23));
    t28 = (t20 & t27);
    if (t28 != 0)
        goto LAB57;

LAB54:    if (t23 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t6) = 1;

LAB57:    memset(t17, 0, 8);
    t13 = (t6 + 4);
    t29 = *((unsigned int *)t13);
    t30 = (~(t29));
    t31 = *((unsigned int *)t6);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t13) != 0)
        goto LAB60;

LAB61:    t15 = (t17 + 4);
    t34 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t15);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB62;

LAB63:    memcpy(t45, t17, 8);

LAB64:    t78 = (t45 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t45);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB72;

LAB73:
LAB74:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t17) = 1;
    goto LAB21;

LAB20:    t14 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB21;

LAB22:    t16 = (t0 + 2888);
    t18 = (t16 + 56U);
    t24 = *((char **)t18);
    t25 = ((char*)((ng8)));
    memset(t37, 0, 8);
    xsi_vlog_signed_greater(t37, 32, t24, 32, t25, 32);
    memset(t38, 0, 8);
    t26 = (t37 + 4);
    t39 = *((unsigned int *)t26);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t26) != 0)
        goto LAB27;

LAB28:    t46 = *((unsigned int *)t17);
    t47 = *((unsigned int *)t38);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t17 + 4);
    t50 = (t38 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB25:    *((unsigned int *)t38) = 1;
    goto LAB28;

LAB27:    t44 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB28;

LAB29:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t17 + 4);
    t60 = (t38 + 4);
    t61 = *((unsigned int *)t17);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t38);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB31;

LAB32:    *((unsigned int *)t77) = 1;
    goto LAB35;

LAB34:    t84 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB35;

LAB36:    t89 = (t0 + 1048U);
    t90 = *((char **)t89);
    t89 = (t0 + 2728);
    t91 = (t89 + 56U);
    t92 = *((char **)t91);
    t94 = (t0 + 2728);
    t95 = (t94 + 72U);
    t96 = *((char **)t95);
    t97 = (t0 + 2728);
    t98 = (t97 + 64U);
    t99 = *((char **)t98);
    t100 = (t0 + 3208);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    xsi_vlog_generic_get_array_select_value(t93, 1, t92, t96, t99, 2, 1, t102, 32, 1);
    memset(t103, 0, 8);
    t104 = (t90 + 4);
    t105 = (t93 + 4);
    t106 = *((unsigned int *)t90);
    t107 = *((unsigned int *)t93);
    t108 = (t106 ^ t107);
    t109 = *((unsigned int *)t104);
    t110 = *((unsigned int *)t105);
    t111 = (t109 ^ t110);
    t112 = (t108 | t111);
    t113 = *((unsigned int *)t104);
    t114 = *((unsigned int *)t105);
    t115 = (t113 | t114);
    t116 = (~(t115));
    t117 = (t112 & t116);
    if (t117 != 0)
        goto LAB40;

LAB39:    if (t115 != 0)
        goto LAB41;

LAB42:    memset(t119, 0, 8);
    t120 = (t103 + 4);
    t121 = *((unsigned int *)t120);
    t122 = (~(t121));
    t123 = *((unsigned int *)t103);
    t124 = (t123 & t122);
    t125 = (t124 & 1U);
    if (t125 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t120) != 0)
        goto LAB45;

LAB46:    t128 = *((unsigned int *)t77);
    t129 = *((unsigned int *)t119);
    t130 = (t128 & t129);
    *((unsigned int *)t127) = t130;
    t131 = (t77 + 4);
    t132 = (t119 + 4);
    t133 = (t127 + 4);
    t134 = *((unsigned int *)t131);
    t135 = *((unsigned int *)t132);
    t136 = (t134 | t135);
    *((unsigned int *)t133) = t136;
    t137 = *((unsigned int *)t133);
    t138 = (t137 != 0);
    if (t138 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB38;

LAB40:    *((unsigned int *)t103) = 1;
    goto LAB42;

LAB41:    t118 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t119) = 1;
    goto LAB46;

LAB45:    t126 = (t119 + 4);
    *((unsigned int *)t119) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB46;

LAB47:    t139 = *((unsigned int *)t127);
    t140 = *((unsigned int *)t133);
    *((unsigned int *)t127) = (t139 | t140);
    t141 = (t77 + 4);
    t142 = (t119 + 4);
    t143 = *((unsigned int *)t77);
    t144 = (~(t143));
    t145 = *((unsigned int *)t141);
    t146 = (~(t145));
    t147 = *((unsigned int *)t119);
    t148 = (~(t147));
    t149 = *((unsigned int *)t142);
    t150 = (~(t149));
    t151 = (t144 & t146);
    t152 = (t148 & t150);
    t153 = (~(t151));
    t154 = (~(t152));
    t155 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t155 & t153);
    t156 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t156 & t154);
    t157 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t157 & t153);
    t158 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t158 & t154);
    goto LAB49;

LAB50:    xsi_set_current_line(53, ng0);

LAB53:    xsi_set_current_line(54, ng0);
    t165 = (t0 + 3048);
    t166 = (t165 + 56U);
    t167 = *((char **)t166);
    t168 = ((char*)((ng8)));
    memset(t169, 0, 8);
    xsi_vlog_signed_add(t169, 32, t167, 32, t168, 32);
    t170 = (t0 + 3048);
    xsi_vlogvar_assign_value(t170, t169, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    t7 = (t5 + 56U);
    t13 = *((char **)t7);
    t14 = (t0 + 2728);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t18 = (t0 + 2728);
    t24 = (t18 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 2728);
    t44 = (t26 + 64U);
    t49 = *((char **)t44);
    t50 = (t0 + 3208);
    t51 = (t50 + 56U);
    t59 = *((char **)t51);
    xsi_vlog_generic_get_array_select_value(t6, 1, t16, t25, t49, 2, 1, t59, 32, 1);
    t60 = (t0 + 1048U);
    t78 = *((char **)t60);
    xsi_vlogfile_write(1, 0, 0, ng9, 5, t0, (char)119, t4, 32, (char)119, t13, 32, (char)118, t6, 1, (char)118, t78, 1);
    goto LAB52;

LAB56:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t17) = 1;
    goto LAB61;

LAB60:    t14 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB61;

LAB62:    t16 = (t0 + 2888);
    t18 = (t16 + 56U);
    t24 = *((char **)t18);
    t25 = ((char*)((ng8)));
    memset(t37, 0, 8);
    xsi_vlog_signed_greater(t37, 32, t24, 32, t25, 32);
    memset(t38, 0, 8);
    t26 = (t37 + 4);
    t39 = *((unsigned int *)t26);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t26) != 0)
        goto LAB67;

LAB68:    t46 = *((unsigned int *)t17);
    t47 = *((unsigned int *)t38);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t17 + 4);
    t50 = (t38 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB64;

LAB65:    *((unsigned int *)t38) = 1;
    goto LAB68;

LAB67:    t44 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB68;

LAB69:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t17 + 4);
    t60 = (t38 + 4);
    t61 = *((unsigned int *)t17);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t38);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB71;

LAB72:    xsi_set_current_line(58, ng0);
    t84 = (t0 + 3208);
    t85 = (t84 + 56U);
    t89 = *((char **)t85);
    t90 = ((char*)((ng8)));
    memset(t77, 0, 8);
    xsi_vlog_signed_add(t77, 32, t89, 32, t90, 32);
    t91 = (t0 + 3208);
    xsi_vlogvar_assign_value(t91, t77, 0, 0, 32);
    goto LAB74;

LAB75:    xsi_set_current_line(63, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    goto LAB77;

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

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng12)));
    t3 = (t0 + 5216);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 511U;
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
    xsi_driver_vfirst_trans(t3, 0, 8);

LAB1:    return;
}


extern void work_m_00000000001303098569_1742410559_init()
{
	static char *pe[] = {(void *)Always_28_0,(void *)Initial_34_1,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000001303098569_1742410559", "isim/Decoder_Viterbi_tb_isim_beh.exe.sim/work/m_00000000001303098569_1742410559.didat");
	xsi_register_executes(pe);
}
