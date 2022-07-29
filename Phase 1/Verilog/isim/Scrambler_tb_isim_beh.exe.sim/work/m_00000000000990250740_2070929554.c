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
static const char *ng0 = "D:/HW/FPGA/Project/Phase 1/Verilog/Transmitter.v";
static unsigned int ng1[] = {5U, 0U};
static unsigned int ng2[] = {23U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {17U, 0U};
static unsigned int ng7[] = {4095U, 0U};
static unsigned int ng8[] = {28U, 0U};
static int ng9[] = {1, 0};
static unsigned int ng10[] = {111U, 0U};



static void Cont_22_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 3368);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 4095U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    memset(t3, 0, 8);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t14) == 0)
        goto LAB8;

LAB10:    t20 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t20) = 1;

LAB11:    t21 = (t0 + 6208);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 6080);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t3) = 1;
    goto LAB11;

}

static void Cont_23_1(char *t0)
{
    char t6[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 13, t4, 12, t5, 13);
    t7 = (t0 + 1688U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 13, t6, 13, t8, 3);
    t7 = (t0 + 6272);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t13, 0, 8);
    t14 = 8191U;
    t15 = t14;
    t16 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t14 = (t14 & t17);
    t18 = *((unsigned int *)t16);
    t15 = (t15 & t18);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 | t14);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t21 | t15);
    xsi_driver_vfirst_trans(t7, 0, 12);
    t22 = (t0 + 6096);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Always_37_2(char *t0)
{
    char t8[8];
    char t26[8];
    char t29[8];
    char t33[8];
    char t38[8];
    char t76[8];
    char t80[8];
    char t89[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
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
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t77;
    char *t78;
    char *t79;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;

LAB0:    t1 = (t0 + 5264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 6112);
    *((int *)t2) = 1;
    t3 = (t0 + 5296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) > *((unsigned int *)t7))
        goto LAB8;

LAB9:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t13 = *((unsigned int *)t2);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t13 = *((unsigned int *)t2);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(47, ng0);

LAB23:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB21:
LAB17:
LAB13:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB25;

LAB24:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB26;

LAB27:    memset(t26, 0, 8);
    t10 = (t8 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t10) != 0)
        goto LAB31;

LAB32:    t12 = (t26 + 4);
    t20 = *((unsigned int *)t26);
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB33;

LAB34:    memcpy(t38, t26, 8);

LAB35:    t70 = (t38 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t38);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 12);

LAB50:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(38, ng0);

LAB14:    xsi_set_current_line(39, ng0);
    t18 = (t0 + 1848U);
    t19 = *((char **)t18);
    t18 = (t0 + 2728);
    xsi_vlogvar_assign_value(t18, t19, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB13;

LAB15:    xsi_set_current_line(41, ng0);

LAB18:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t6 + 4);
    t20 = *((unsigned int *)t6);
    t21 = (t20 >> 11);
    t22 = (t21 & 1);
    *((unsigned int *)t8) = t22;
    t23 = *((unsigned int *)t9);
    t24 = (t23 >> 11);
    t25 = (t24 & 1);
    *((unsigned int *)t7) = t25;
    t10 = (t0 + 2728);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB17;

LAB19:    xsi_set_current_line(44, ng0);

LAB22:    xsi_set_current_line(45, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB25:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB27;

LAB26:    *((unsigned int *)t8) = 1;
    goto LAB27;

LAB29:    *((unsigned int *)t26) = 1;
    goto LAB32;

LAB31:    t11 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB32;

LAB33:    t18 = (t0 + 3208);
    t19 = (t18 + 56U);
    t27 = *((char **)t19);
    t28 = ((char*)((ng6)));
    memset(t29, 0, 8);
    t30 = (t27 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB37;

LAB36:    t31 = (t28 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t27) < *((unsigned int *)t28))
        goto LAB38;

LAB39:    memset(t33, 0, 8);
    t34 = (t29 + 4);
    t23 = *((unsigned int *)t34);
    t24 = (~(t23));
    t25 = *((unsigned int *)t29);
    t35 = (t25 & t24);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t34) != 0)
        goto LAB43;

LAB44:    t39 = *((unsigned int *)t26);
    t40 = *((unsigned int *)t33);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t26 + 4);
    t43 = (t33 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB35;

LAB37:    t32 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t29) = 1;
    goto LAB39;

LAB41:    *((unsigned int *)t33) = 1;
    goto LAB44;

LAB43:    t37 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB44;

LAB45:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t26 + 4);
    t53 = (t33 + 4);
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t33);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB47;

LAB48:    xsi_set_current_line(52, ng0);
    t77 = (t0 + 3528);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    memset(t80, 0, 8);
    t81 = (t80 + 4);
    t82 = (t79 + 4);
    t83 = *((unsigned int *)t79);
    t84 = (t83 >> 11);
    t85 = (t84 & 1);
    *((unsigned int *)t80) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 >> 11);
    t88 = (t87 & 1);
    *((unsigned int *)t81) = t88;
    t90 = (t0 + 2888);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    memset(t89, 0, 8);
    t93 = (t89 + 4);
    t94 = (t92 + 4);
    t95 = *((unsigned int *)t92);
    t96 = (t95 >> 0);
    *((unsigned int *)t89) = t96;
    t97 = *((unsigned int *)t94);
    t98 = (t97 >> 0);
    *((unsigned int *)t93) = t98;
    t99 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t99 & 2047U);
    t100 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t100 & 2047U);
    xsi_vlogtype_concat(t76, 12, 12, 2U, t89, 11, t80, 1);
    t101 = (t0 + 3048);
    xsi_vlogvar_assign_value(t101, t76, 0, 0, 12);
    goto LAB50;

}

static void Always_58_3(char *t0)
{
    char t6[8];
    char t18[8];
    char t27[8];
    char t35[8];
    char t71[8];
    char t72[8];
    char t76[8];
    char t79[8];
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t73;
    char *t74;
    char *t75;
    char *t77;
    char *t78;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;

LAB0:    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 6128);
    *((int *)t2) = 1;
    t3 = (t0 + 5544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t35, t6, 8);

LAB12:    t63 = (t35 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t35);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB28;

LAB29:
LAB30:
LAB26:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t18, 0, 8);
    t12 = (t18 + 4);
    t13 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t18) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t12) = t10;
    t11 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t11 & 2047U);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t14 & 2047U);
    xsi_vlogtype_concat(t6, 12, 12, 2U, t18, 11, t3, 1);
    t19 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t19, t6, 0, 0, 12, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t19 = (t0 + 1528U);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    t19 = (t20 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t19) == 0)
        goto LAB13;

LAB15:    t26 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t26) = 1;

LAB16:    memset(t27, 0, 8);
    t28 = (t18 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t18);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t28) != 0)
        goto LAB19;

LAB20:    t36 = *((unsigned int *)t6);
    t37 = *((unsigned int *)t27);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = (t6 + 4);
    t40 = (t27 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB13:    *((unsigned int *)t18) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t27) = 1;
    goto LAB20;

LAB19:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB20;

LAB21:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t6 + 4);
    t50 = (t27 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (~(t51));
    t53 = *((unsigned int *)t6);
    t54 = (t53 & t52);
    t55 = *((unsigned int *)t50);
    t56 = (~(t55));
    t57 = *((unsigned int *)t27);
    t58 = (t57 & t56);
    t59 = (~(t54));
    t60 = (~(t58));
    t61 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t61 & t59);
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    goto LAB23;

LAB24:    xsi_set_current_line(59, ng0);

LAB27:    xsi_set_current_line(60, ng0);
    t69 = ((char*)((ng4)));
    t70 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t70, t69, 0, 0, 11, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 13, 0LL);
    goto LAB26;

LAB28:    xsi_set_current_line(64, ng0);

LAB31:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t21 = (t17 != 0);
    if (t21 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(75, ng0);

LAB70:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 12, t4, 12, t5, 32);
    t12 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 12, 0LL);

LAB34:    goto LAB30;

LAB32:    xsi_set_current_line(65, ng0);

LAB35:    xsi_set_current_line(66, ng0);
    t12 = (t0 + 3208);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 11, t19, 11, t20, 11);
    t26 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t26, t6, 0, 0, 11, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 13, t4, 13, t5, 13);
    t12 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 13, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    t12 = (t0 + 2168U);
    t13 = *((char **)t12);
    xsi_vlogtype_concat(t27, 16, 16, 2U, t13, 13, t5, 3);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t27);
    t9 = (t7 ^ t8);
    *((unsigned int *)t35) = t9;
    t12 = (t4 + 4);
    t19 = (t27 + 4);
    t20 = (t35 + 4);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t19);
    t14 = (t10 | t11);
    *((unsigned int *)t20) = t14;
    t15 = *((unsigned int *)t20);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB36;

LAB37:
LAB38:    memset(t18, 0, 8);
    t26 = (t35 + 4);
    t22 = *((unsigned int *)t26);
    t23 = (~(t22));
    t24 = *((unsigned int *)t35);
    t25 = (t24 & t23);
    t29 = (t25 & 65535U);
    if (t29 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t26) != 0)
        goto LAB41;

LAB42:    memset(t6, 0, 8);
    t34 = (t18 + 4);
    t30 = *((unsigned int *)t34);
    t31 = (~(t30));
    t32 = *((unsigned int *)t18);
    t33 = (t32 & t31);
    t36 = (t33 & 1U);
    if (t36 != 0)
        goto LAB46;

LAB44:    if (*((unsigned int *)t34) == 0)
        goto LAB43;

LAB45:    t39 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t39) = 1;

LAB46:    memset(t71, 0, 8);
    t40 = (t6 + 4);
    t37 = *((unsigned int *)t40);
    t38 = (~(t37));
    t42 = *((unsigned int *)t6);
    t43 = (t42 & t38);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t40) != 0)
        goto LAB49;

LAB50:    t49 = (t71 + 4);
    t45 = *((unsigned int *)t71);
    t46 = *((unsigned int *)t49);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB51;

LAB52:    memcpy(t79, t71, 8);

LAB53:    t98 = (t79 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t79);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB66;

LAB67:
LAB68:    goto LAB34;

LAB36:    t17 = *((unsigned int *)t35);
    t21 = *((unsigned int *)t20);
    *((unsigned int *)t35) = (t17 | t21);
    goto LAB38;

LAB39:    *((unsigned int *)t18) = 1;
    goto LAB42;

LAB41:    t28 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t6) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t71) = 1;
    goto LAB50;

LAB49:    t41 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB50;

LAB51:    t50 = (t0 + 3208);
    t63 = (t50 + 56U);
    t69 = *((char **)t63);
    t70 = ((char*)((ng8)));
    memset(t72, 0, 8);
    t73 = (t69 + 4);
    if (*((unsigned int *)t73) != 0)
        goto LAB55;

LAB54:    t74 = (t70 + 4);
    if (*((unsigned int *)t74) != 0)
        goto LAB55;

LAB58:    if (*((unsigned int *)t69) > *((unsigned int *)t70))
        goto LAB56;

LAB57:    memset(t76, 0, 8);
    t77 = (t72 + 4);
    t48 = *((unsigned int *)t77);
    t51 = (~(t48));
    t52 = *((unsigned int *)t72);
    t53 = (t52 & t51);
    t55 = (t53 & 1U);
    if (t55 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t77) != 0)
        goto LAB61;

LAB62:    t56 = *((unsigned int *)t71);
    t57 = *((unsigned int *)t76);
    t59 = (t56 & t57);
    *((unsigned int *)t79) = t59;
    t80 = (t71 + 4);
    t81 = (t76 + 4);
    t82 = (t79 + 4);
    t60 = *((unsigned int *)t80);
    t61 = *((unsigned int *)t81);
    t62 = (t60 | t61);
    *((unsigned int *)t82) = t62;
    t64 = *((unsigned int *)t82);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB53;

LAB55:    t75 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB57;

LAB56:    *((unsigned int *)t72) = 1;
    goto LAB57;

LAB59:    *((unsigned int *)t76) = 1;
    goto LAB62;

LAB61:    t78 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB62;

LAB63:    t66 = *((unsigned int *)t79);
    t67 = *((unsigned int *)t82);
    *((unsigned int *)t79) = (t66 | t67);
    t83 = (t71 + 4);
    t84 = (t76 + 4);
    t68 = *((unsigned int *)t71);
    t85 = (~(t68));
    t86 = *((unsigned int *)t83);
    t87 = (~(t86));
    t88 = *((unsigned int *)t76);
    t89 = (~(t88));
    t90 = *((unsigned int *)t84);
    t91 = (~(t90));
    t54 = (t85 & t87);
    t58 = (t89 & t91);
    t92 = (~(t54));
    t93 = (~(t58));
    t94 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t94 & t92);
    t95 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t95 & t93);
    t96 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t96 & t92);
    t97 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t97 & t93);
    goto LAB65;

LAB66:    xsi_set_current_line(69, ng0);

LAB69:    xsi_set_current_line(70, ng0);
    t104 = ((char*)((ng7)));
    t105 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t105, t104, 0, 0, 12, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 11, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 13, 0LL);
    goto LAB68;

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

LAB0:    t1 = (t0 + 5760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng10)));
    t3 = (t0 + 6336);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 127U;
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
    xsi_driver_vfirst_trans(t3, 0, 6);

LAB1:    return;
}


extern void work_m_00000000000990250740_2070929554_init()
{
	static char *pe[] = {(void *)Cont_22_0,(void *)Cont_23_1,(void *)Always_37_2,(void *)Always_58_3,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000000990250740_2070929554", "isim/Scrambler_tb_isim_beh.exe.sim/work/m_00000000000990250740_2070929554.didat");
	xsi_register_executes(pe);
}
