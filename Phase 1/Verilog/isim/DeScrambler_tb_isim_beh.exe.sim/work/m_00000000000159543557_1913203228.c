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
static const char *ng0 = "D:/HW/FPGA/Project/Phase 1/Verilog/Receiver.v";
static unsigned int ng1[] = {5U, 0U};
static unsigned int ng2[] = {23U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {17U, 0U};
static unsigned int ng7[] = {28U, 0U};



static void Cont_23_0(char *t0)
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

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 13, t4, 12, t5, 13);
    t7 = (t0 + 1528U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 13, t6, 13, t8, 3);
    t7 = (t0 + 5640);
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
    t22 = (t0 + 5512);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Cont_24_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 3208);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 4095U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 4095U);
    memset(t3, 0, 8);
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t15);
    t18 = (t16 | t17);
    if (t18 != 4095U)
        goto LAB5;

LAB4:    if (*((unsigned int *)t15) == 0)
        goto LAB6;

LAB7:    t19 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t19) = 1;

LAB5:    t20 = (t0 + 5704);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t3 + 4);
    t28 = *((unsigned int *)t3);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0);
    t33 = (t0 + 5528);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t3) = 1;
    goto LAB5;

}

static void Always_35_2(char *t0)
{
    char t8[8];
    char t12[8];
    char t26[8];
    char t33[8];
    char t73[8];
    char t76[8];
    char t79[8];
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
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t74;
    char *t75;
    char *t77;
    char *t78;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 5544);
    *((int *)t2) = 1;
    t3 = (t0 + 4976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 3048);
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

LAB9:    memset(t12, 0, 8);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t13) != 0)
        goto LAB13;

LAB14:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB15;

LAB16:    memcpy(t33, t12, 8);

LAB17:    t65 = (t33 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t33);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(42, ng0);

LAB33:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB31:
LAB27:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB35;

LAB34:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB36;

LAB37:    memset(t12, 0, 8);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t10) != 0)
        goto LAB41;

LAB42:    t13 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB43;

LAB44:    memcpy(t73, t12, 8);

LAB45:    t75 = (t73 + 4);
    t66 = *((unsigned int *)t75);
    t67 = (~(t66));
    t68 = *((unsigned int *)t73);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 12);

LAB60:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t12) = 1;
    goto LAB14;

LAB13:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB15:    t24 = (t0 + 1688U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    t24 = (t25 + 4);
    t27 = *((unsigned int *)t24);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t24) != 0)
        goto LAB20;

LAB21:    t34 = *((unsigned int *)t12);
    t35 = *((unsigned int *)t26);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t37 = (t12 + 4);
    t38 = (t26 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB17;

LAB18:    *((unsigned int *)t26) = 1;
    goto LAB21;

LAB20:    t32 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB21;

LAB22:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t12 + 4);
    t48 = (t26 + 4);
    t49 = *((unsigned int *)t12);
    t50 = (~(t49));
    t51 = *((unsigned int *)t47);
    t52 = (~(t51));
    t53 = *((unsigned int *)t26);
    t54 = (~(t53));
    t55 = *((unsigned int *)t48);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t59);
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t62 & t60);
    t63 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t63 & t59);
    t64 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t64 & t60);
    goto LAB24;

LAB25:    xsi_set_current_line(36, ng0);

LAB28:    xsi_set_current_line(37, ng0);
    t71 = (t0 + 1848U);
    t72 = *((char **)t71);
    t71 = (t0 + 2568);
    xsi_vlogvar_assign_value(t71, t72, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB27;

LAB29:    xsi_set_current_line(39, ng0);

LAB32:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB35:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t8) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t12) = 1;
    goto LAB42;

LAB41:    t11 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB42;

LAB43:    t19 = (t0 + 3048);
    t20 = (t19 + 56U);
    t24 = *((char **)t20);
    t25 = ((char*)((ng6)));
    memset(t26, 0, 8);
    t32 = (t24 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB47;

LAB46:    t37 = (t25 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB47;

LAB50:    if (*((unsigned int *)t24) < *((unsigned int *)t25))
        goto LAB48;

LAB49:    memset(t33, 0, 8);
    t39 = (t26 + 4);
    t27 = *((unsigned int *)t39);
    t28 = (~(t27));
    t29 = *((unsigned int *)t26);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t39) != 0)
        goto LAB53;

LAB54:    t34 = *((unsigned int *)t12);
    t35 = *((unsigned int *)t33);
    t36 = (t34 & t35);
    *((unsigned int *)t73) = t36;
    t48 = (t12 + 4);
    t65 = (t33 + 4);
    t71 = (t73 + 4);
    t40 = *((unsigned int *)t48);
    t41 = *((unsigned int *)t65);
    t42 = (t40 | t41);
    *((unsigned int *)t71) = t42;
    t43 = *((unsigned int *)t71);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB45;

LAB47:    t38 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB49;

LAB48:    *((unsigned int *)t26) = 1;
    goto LAB49;

LAB51:    *((unsigned int *)t33) = 1;
    goto LAB54;

LAB53:    t47 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB54;

LAB55:    t45 = *((unsigned int *)t73);
    t46 = *((unsigned int *)t71);
    *((unsigned int *)t73) = (t45 | t46);
    t72 = (t12 + 4);
    t74 = (t33 + 4);
    t49 = *((unsigned int *)t12);
    t50 = (~(t49));
    t51 = *((unsigned int *)t72);
    t52 = (~(t51));
    t53 = *((unsigned int *)t33);
    t54 = (~(t53));
    t55 = *((unsigned int *)t74);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t61 & t59);
    t62 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t62 & t60);
    t63 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t63 & t59);
    t64 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t64 & t60);
    goto LAB57;

LAB58:    xsi_set_current_line(47, ng0);
    t77 = (t0 + 1368U);
    t78 = *((char **)t77);
    t77 = (t0 + 2728);
    t80 = (t77 + 56U);
    t81 = *((char **)t80);
    memset(t79, 0, 8);
    t82 = (t79 + 4);
    t83 = (t81 + 4);
    t84 = *((unsigned int *)t81);
    t85 = (t84 >> 0);
    *((unsigned int *)t79) = t85;
    t86 = *((unsigned int *)t83);
    t87 = (t86 >> 0);
    *((unsigned int *)t82) = t87;
    t88 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t88 & 2047U);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t89 & 2047U);
    xsi_vlogtype_concat(t76, 12, 12, 2U, t79, 11, t78, 1);
    t90 = (t0 + 2888);
    xsi_vlogvar_assign_value(t90, t76, 0, 0, 12);
    goto LAB60;

}

static void Always_53_3(char *t0)
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

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5560);
    *((int *)t2) = 1;
    t3 = (t0 + 5224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
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

LAB25:    xsi_set_current_line(62, ng0);

LAB31:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 11, t4, 11, t5, 11);
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 11, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 13, t4, 13, t5, 13);
    t12 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 13, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    t12 = (t0 + 2008U);
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
        goto LAB32;

LAB33:
LAB34:    memset(t18, 0, 8);
    t26 = (t35 + 4);
    t22 = *((unsigned int *)t26);
    t23 = (~(t22));
    t24 = *((unsigned int *)t35);
    t25 = (t24 & t23);
    t29 = (t25 & 65535U);
    if (t29 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t26) != 0)
        goto LAB37;

LAB38:    memset(t6, 0, 8);
    t34 = (t18 + 4);
    t30 = *((unsigned int *)t34);
    t31 = (~(t30));
    t32 = *((unsigned int *)t18);
    t33 = (t32 & t31);
    t36 = (t33 & 1U);
    if (t36 != 0)
        goto LAB42;

LAB40:    if (*((unsigned int *)t34) == 0)
        goto LAB39;

LAB41:    t39 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t39) = 1;

LAB42:    memset(t71, 0, 8);
    t40 = (t6 + 4);
    t37 = *((unsigned int *)t40);
    t38 = (~(t37));
    t42 = *((unsigned int *)t6);
    t43 = (t42 & t38);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t40) != 0)
        goto LAB45;

LAB46:    t49 = (t71 + 4);
    t45 = *((unsigned int *)t71);
    t46 = *((unsigned int *)t49);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB47;

LAB48:    memcpy(t79, t71, 8);

LAB49:    t98 = (t79 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t79);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB62;

LAB63:
LAB64:
LAB26:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t19 = (t0 + 1688U);
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

LAB24:    xsi_set_current_line(54, ng0);

LAB27:    xsi_set_current_line(55, ng0);
    t69 = ((char*)((ng4)));
    t70 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t70, t69, 0, 0, 11, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 13, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
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
    t19 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t19, t6, 0, 0, 12, 0LL);

LAB30:    goto LAB26;

LAB28:    xsi_set_current_line(59, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB30;

LAB32:    t17 = *((unsigned int *)t35);
    t21 = *((unsigned int *)t20);
    *((unsigned int *)t35) = (t17 | t21);
    goto LAB34;

LAB35:    *((unsigned int *)t18) = 1;
    goto LAB38;

LAB37:    t28 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t6) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t71) = 1;
    goto LAB46;

LAB45:    t41 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB46;

LAB47:    t50 = (t0 + 3048);
    t63 = (t50 + 56U);
    t69 = *((char **)t63);
    t70 = ((char*)((ng7)));
    memset(t72, 0, 8);
    t73 = (t69 + 4);
    if (*((unsigned int *)t73) != 0)
        goto LAB51;

LAB50:    t74 = (t70 + 4);
    if (*((unsigned int *)t74) != 0)
        goto LAB51;

LAB54:    if (*((unsigned int *)t69) > *((unsigned int *)t70))
        goto LAB52;

LAB53:    memset(t76, 0, 8);
    t77 = (t72 + 4);
    t48 = *((unsigned int *)t77);
    t51 = (~(t48));
    t52 = *((unsigned int *)t72);
    t53 = (t52 & t51);
    t55 = (t53 & 1U);
    if (t55 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t77) != 0)
        goto LAB57;

LAB58:    t56 = *((unsigned int *)t71);
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
        goto LAB59;

LAB60:
LAB61:    goto LAB49;

LAB51:    t75 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB53;

LAB52:    *((unsigned int *)t72) = 1;
    goto LAB53;

LAB55:    *((unsigned int *)t76) = 1;
    goto LAB58;

LAB57:    t78 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB58;

LAB59:    t66 = *((unsigned int *)t79);
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
    goto LAB61;

LAB62:    xsi_set_current_line(66, ng0);

LAB65:    xsi_set_current_line(67, ng0);
    t104 = ((char*)((ng4)));
    t105 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t105, t104, 0, 0, 12, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 13, 0LL);
    goto LAB64;

}


extern void work_m_00000000000159543557_1913203228_init()
{
	static char *pe[] = {(void *)Cont_23_0,(void *)Cont_24_1,(void *)Always_35_2,(void *)Always_53_3};
	xsi_register_didat("work_m_00000000000159543557_1913203228", "isim/DeScrambler_tb_isim_beh.exe.sim/work/m_00000000000159543557_1913203228.didat");
	xsi_register_executes(pe);
}
