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
static const char *ng0 = "/home/lengyu/linux_project_dir/vivado_dir/hans_solution/max_clock_recovery.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {7982, 0};
static int ng4[] = {63, 0};
static int ng5[] = {4, 0};



static void Always_38_0(char *t0)
{
    char t4[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
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
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 5432);
    *((int *)t2) = 1;
    t3 = (t0 + 4152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(41, ng0);

LAB14:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t12 = (t21 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 0);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t12) = t10;
    t11 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t11 & 3U);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t14 & 3U);
    xsi_vlogtype_concat(t4, 3, 3, 2U, t21, 2, t3, 1);
    t19 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t19, t4, 0, 0, 3, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(39, ng0);

LAB13:    xsi_set_current_line(40, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 3, 0LL);
    goto LAB12;

}

static void Cont_46_1(char *t0)
{
    char t3[8];
    char t6[8];
    char t35[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;

LAB0:    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 2);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    memset(t3, 0, 8);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t15) == 0)
        goto LAB4;

LAB6:    t21 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t21) = 1;

LAB7:    t22 = (t3 + 4);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t6);
    t25 = (~(t24));
    *((unsigned int *)t3) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB9;

LAB8:    t30 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    t32 = (t0 + 2568);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    t36 = (t35 + 4);
    t37 = (t34 + 4);
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 1);
    t40 = (t39 & 1);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 1);
    t43 = (t42 & 1);
    *((unsigned int *)t36) = t43;
    t45 = *((unsigned int *)t3);
    t46 = *((unsigned int *)t35);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t3 + 4);
    t49 = (t35 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB10;

LAB11:
LAB12:    t76 = (t0 + 5576);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memset(t80, 0, 8);
    t81 = 1U;
    t82 = t81;
    t83 = (t44 + 4);
    t84 = *((unsigned int *)t44);
    t81 = (t81 & t84);
    t85 = *((unsigned int *)t83);
    t82 = (t82 & t85);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t87 | t81);
    t88 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t88 | t82);
    xsi_driver_vfirst_trans(t76, 0, 0);
    t89 = (t0 + 5448);
    *((int *)t89) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t26 = *((unsigned int *)t3);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t3) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB8;

LAB10:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t3 + 4);
    t59 = (t35 + 4);
    t60 = *((unsigned int *)t3);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t35);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB12;

}

static void Cont_47_2(char *t0)
{
    char t5[8];
    char t14[8];
    char t18[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
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
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;

LAB0:    t1 = (t0 + 4616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t15 = (t0 + 2568);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 1);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 1);
    t26 = (t25 & 1);
    *((unsigned int *)t19) = t26;
    memset(t14, 0, 8);
    t27 = (t18 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t18);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t27) == 0)
        goto LAB4;

LAB6:    t33 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t33) = 1;

LAB7:    t34 = (t14 + 4);
    t35 = (t18 + 4);
    t36 = *((unsigned int *)t18);
    t37 = (~(t36));
    *((unsigned int *)t14) = t37;
    *((unsigned int *)t34) = 0;
    if (*((unsigned int *)t35) != 0)
        goto LAB9;

LAB8:    t42 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t42 & 1U);
    t43 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t43 & 1U);
    t45 = *((unsigned int *)t5);
    t46 = *((unsigned int *)t14);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t5 + 4);
    t49 = (t14 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB10;

LAB11:
LAB12:    t76 = (t0 + 5640);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memset(t80, 0, 8);
    t81 = 1U;
    t82 = t81;
    t83 = (t44 + 4);
    t84 = *((unsigned int *)t44);
    t81 = (t81 & t84);
    t85 = *((unsigned int *)t83);
    t82 = (t82 & t85);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t87 | t81);
    t88 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t88 | t82);
    xsi_driver_vfirst_trans(t76, 0, 0);
    t89 = (t0 + 5464);
    *((int *)t89) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB9:    t38 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t35);
    *((unsigned int *)t14) = (t38 | t39);
    t40 = *((unsigned int *)t34);
    t41 = *((unsigned int *)t35);
    *((unsigned int *)t34) = (t40 | t41);
    goto LAB8;

LAB10:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t5 + 4);
    t59 = (t14 + 4);
    t60 = *((unsigned int *)t5);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t14);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB12;

}

static void Always_49_3(char *t0)
{
    char t4[8];
    char t27[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
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
    unsigned int t18;
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 4864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5480);
    *((int *)t2) = 1;
    t3 = (t0 + 4896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(55, ng0);

LAB14:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 1);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t4 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t29 = (t18 != 0);
    if (t29 > 0)
        goto LAB78;

LAB79:
LAB80:
LAB31:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(50, ng0);

LAB13:    xsi_set_current_line(51, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(56, ng0);

LAB18:    xsi_set_current_line(57, ng0);
    t5 = (t0 + 2728);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t19 = (t12 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB20;

LAB19:    t20 = (t13 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB20;

LAB23:    if (*((unsigned int *)t12) < *((unsigned int *)t13))
        goto LAB21;

LAB22:    t22 = (t4 + 4);
    t14 = *((unsigned int *)t22);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(59, ng0);

LAB28:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB26:    goto LAB17;

LAB20:    t21 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB22;

LAB21:    *((unsigned int *)t4) = 1;
    goto LAB22;

LAB24:    xsi_set_current_line(57, ng0);

LAB27:    xsi_set_current_line(58, ng0);
    t23 = (t0 + 2728);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng2)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 32, t25, 8, t26, 32);
    t28 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t28, t27, 0, 0, 8, 0LL);
    goto LAB26;

LAB29:    xsi_set_current_line(63, ng0);

LAB32:    xsi_set_current_line(64, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 24, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t29 = (~(t18));
    t30 = (t15 & t29);
    if (t30 != 0)
        goto LAB36;

LAB33:    if (t18 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t4) = 1;

LAB36:    t20 = (t4 + 4);
    t31 = *((unsigned int *)t20);
    t32 = (~(t31));
    t33 = *((unsigned int *)t4);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(68, ng0);

LAB59:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3048);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t36, 0, 8);
    t19 = (t5 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB61;

LAB60:    t20 = (t13 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB61;

LAB64:    if (*((unsigned int *)t5) > *((unsigned int *)t13))
        goto LAB62;

LAB63:    memset(t27, 0, 8);
    t22 = (t36 + 4);
    t7 = *((unsigned int *)t22);
    t8 = (~(t7));
    t9 = *((unsigned int *)t36);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t22) != 0)
        goto LAB67;

LAB68:    t24 = (t27 + 4);
    t14 = *((unsigned int *)t27);
    t15 = *((unsigned int *)t24);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB69;

LAB70:    t17 = *((unsigned int *)t27);
    t18 = (~(t17));
    t29 = *((unsigned int *)t24);
    t30 = (t18 || t29);
    if (t30 > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t24) > 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t27) > 0)
        goto LAB75;

LAB76:    memcpy(t4, t39, 8);

LAB77:    t40 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t40, t4, 0, 0, 24, 0LL);

LAB39:    goto LAB31;

LAB35:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(65, ng0);

LAB40:    xsi_set_current_line(66, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 24, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3048);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t36, 0, 8);
    t19 = (t5 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB42;

LAB41:    t20 = (t13 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB42;

LAB45:    if (*((unsigned int *)t5) > *((unsigned int *)t13))
        goto LAB43;

LAB44:    memset(t27, 0, 8);
    t22 = (t36 + 4);
    t7 = *((unsigned int *)t22);
    t8 = (~(t7));
    t9 = *((unsigned int *)t36);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t22) != 0)
        goto LAB48;

LAB49:    t24 = (t27 + 4);
    t14 = *((unsigned int *)t27);
    t15 = *((unsigned int *)t24);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB50;

LAB51:    t17 = *((unsigned int *)t27);
    t18 = (~(t17));
    t29 = *((unsigned int *)t24);
    t30 = (t18 || t29);
    if (t30 > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t24) > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t27) > 0)
        goto LAB56;

LAB57:    memcpy(t4, t39, 8);

LAB58:    t40 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t40, t4, 0, 0, 24, 0LL);
    goto LAB39;

LAB42:    t21 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB44;

LAB43:    *((unsigned int *)t36) = 1;
    goto LAB44;

LAB46:    *((unsigned int *)t27) = 1;
    goto LAB49;

LAB48:    t23 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB49;

LAB50:    t25 = (t0 + 2888);
    t26 = (t25 + 56U);
    t28 = *((char **)t26);
    goto LAB51;

LAB52:    t37 = (t0 + 3048);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    goto LAB53;

LAB54:    xsi_vlog_unsigned_bit_combine(t4, 24, t28, 24, t39, 24);
    goto LAB58;

LAB56:    memcpy(t4, t28, 8);
    goto LAB58;

LAB61:    t21 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB63;

LAB62:    *((unsigned int *)t36) = 1;
    goto LAB63;

LAB65:    *((unsigned int *)t27) = 1;
    goto LAB68;

LAB67:    t23 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB68;

LAB69:    t25 = (t0 + 2888);
    t26 = (t25 + 56U);
    t28 = *((char **)t26);
    goto LAB70;

LAB71:    t37 = (t0 + 3048);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    goto LAB72;

LAB73:    xsi_vlog_unsigned_bit_combine(t4, 24, t28, 24, t39, 24);
    goto LAB77;

LAB75:    memcpy(t4, t28, 8);
    goto LAB77;

LAB78:    xsi_set_current_line(72, ng0);

LAB81:    xsi_set_current_line(73, ng0);
    t19 = (t0 + 2888);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng2)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 32, t21, 24, t22, 32);
    t23 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t23, t27, 0, 0, 24, 0LL);
    goto LAB80;

}

static void Always_78_4(char *t0)
{
    char t4[8];
    char t40[8];
    char t41[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
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
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;

LAB0:    t1 = (t0 + 5112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 5496);
    *((int *)t2) = 1;
    t3 = (t0 + 5144);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);

LAB5:    xsi_set_current_line(79, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(82, ng0);

LAB14:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t12 = (t4 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t14 = (t10 | t11);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB15;

LAB16:
LAB17:    t20 = (t4 + 4);
    t33 = *((unsigned int *)t20);
    t34 = (~(t33));
    t35 = *((unsigned int *)t4);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(86, ng0);

LAB22:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2408);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t19 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_rshift(t4, 32, t13, 24, t19, 32);
    t20 = ((char*)((ng2)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_minus(t40, 32, t4, 32, t20, 32);
    memset(t41, 0, 8);
    t38 = (t5 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB24;

LAB23:    t39 = (t40 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB24;

LAB27:    if (*((unsigned int *)t5) < *((unsigned int *)t40))
        goto LAB25;

LAB26:    t43 = (t41 + 4);
    t7 = *((unsigned int *)t43);
    t8 = (~(t7));
    t9 = *((unsigned int *)t41);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(90, ng0);

LAB32:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB36;

LAB34:    if (*((unsigned int *)t6) == 0)
        goto LAB33;

LAB35:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB36:    t13 = (t4 + 4);
    t19 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB38;

LAB37:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 1U);
    t20 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);

LAB30:
LAB20:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(79, ng0);

LAB13:    xsi_set_current_line(80, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 24, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t13 = (t3 + 4);
    t19 = (t5 + 4);
    t21 = *((unsigned int *)t13);
    t22 = (~(t21));
    t23 = *((unsigned int *)t3);
    t24 = (t23 & t22);
    t25 = *((unsigned int *)t19);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = (~(t24));
    t30 = (~(t28));
    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & t29);
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    goto LAB17;

LAB18:    xsi_set_current_line(83, ng0);

LAB21:    xsi_set_current_line(84, ng0);
    t38 = ((char*)((ng1)));
    t39 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t39, t38, 0, 0, 24, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB20;

LAB24:    t42 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB26;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB26;

LAB28:    xsi_set_current_line(87, ng0);

LAB31:    xsi_set_current_line(88, ng0);
    t44 = (t0 + 3208);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng2)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_add(t48, 32, t46, 24, t47, 32);
    t49 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t49, t48, 0, 0, 24, 0LL);
    goto LAB30;

LAB33:    *((unsigned int *)t4) = 1;
    goto LAB36;

LAB38:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t18 | t21);
    goto LAB37;

}


extern void work_m_15086579897861367416_1488474115_init()
{
	static char *pe[] = {(void *)Always_38_0,(void *)Cont_46_1,(void *)Cont_47_2,(void *)Always_49_3,(void *)Always_78_4};
	xsi_register_didat("work_m_15086579897861367416_1488474115", "isim/tb_top2_isim_beh.exe.sim/work/m_15086579897861367416_1488474115.didat");
	xsi_register_executes(pe);
}
