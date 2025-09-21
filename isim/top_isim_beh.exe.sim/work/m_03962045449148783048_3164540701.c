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
static const char *ng0 = "/home/lengyu/linux_project_dir/vivado_dir/hans_solution/dpll_clock_recovery.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {21474836U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {100U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {1048575U, 0U};
static unsigned int ng7[] = {32U, 0U};
static int ng8[] = {4, 0};
static unsigned int ng9[] = {5U, 0U};
static int ng10[] = {8, 0};
static unsigned int ng11[] = {10U, 0U};
static int ng12[] = {255, 0};
static int ng13[] = {1, 0};
static int ng14[] = {32, 0};



static void Always_39_0(char *t0)
{
    char t4[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 5184);
    *((int *)t2) = 1;
    t3 = (t0 + 4400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);
    t5 = (t0 + 1776U);
    t6 = *((char **)t5);
    t5 = (t0 + 2656);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t10 = (t7 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 3U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 3U);
    xsi_vlogtype_concat(t4, 3, 3, 2U, t7, 2, t6, 1);
    t18 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t18, t4, 0, 0, 3, 0LL);
    goto LAB2;

}

static void NetDecl_40_1(char *t0)
{
    char t5[8];
    char t17[8];
    char t26[8];
    char t43[8];
    char t55[8];
    char t64[8];
    char t78[8];
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
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
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
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
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
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;

LAB0:    t1 = (t0 + 4616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2656);
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
    t14 = (t0 + 2656);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 1);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 1);
    t25 = (t24 & 1);
    *((unsigned int *)t18) = t25;
    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t17);
    t29 = (t27 ^ t28);
    *((unsigned int *)t26) = t29;
    t30 = (t5 + 4);
    t31 = (t17 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB4;

LAB5:
LAB6:    t40 = (t0 + 2656);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t43, 0, 8);
    t44 = (t43 + 4);
    t45 = (t42 + 4);
    t46 = *((unsigned int *)t42);
    t47 = (t46 >> 1);
    t48 = (t47 & 1);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 >> 1);
    t51 = (t50 & 1);
    *((unsigned int *)t44) = t51;
    t52 = (t0 + 2656);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    t56 = (t55 + 4);
    t57 = (t54 + 4);
    t58 = *((unsigned int *)t54);
    t59 = (t58 >> 0);
    t60 = (t59 & 1);
    *((unsigned int *)t55) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 >> 0);
    t63 = (t62 & 1);
    *((unsigned int *)t56) = t63;
    t65 = *((unsigned int *)t43);
    t66 = *((unsigned int *)t55);
    t67 = (t65 ^ t66);
    *((unsigned int *)t64) = t67;
    t68 = (t43 + 4);
    t69 = (t55 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB7;

LAB8:
LAB9:    t79 = *((unsigned int *)t26);
    t80 = *((unsigned int *)t64);
    t81 = (t79 & t80);
    *((unsigned int *)t78) = t81;
    t82 = (t26 + 4);
    t83 = (t64 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB10;

LAB11:
LAB12:    t110 = (t0 + 5296);
    t111 = (t110 + 56U);
    t112 = *((char **)t111);
    t113 = (t112 + 56U);
    t114 = *((char **)t113);
    memset(t114, 0, 8);
    t115 = 1U;
    t116 = t115;
    t117 = (t78 + 4);
    t118 = *((unsigned int *)t78);
    t115 = (t115 & t118);
    t119 = *((unsigned int *)t117);
    t116 = (t116 & t119);
    t120 = (t114 + 4);
    t121 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t121 | t115);
    t122 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t122 | t116);
    xsi_driver_vfirst_trans(t110, 0, 0U);
    t123 = (t0 + 5200);
    *((int *)t123) = 1;

LAB1:    return;
LAB4:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    goto LAB6;

LAB7:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    goto LAB9;

LAB10:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t26 + 4);
    t93 = (t64 + 4);
    t94 = *((unsigned int *)t26);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t98 = *((unsigned int *)t64);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (~(t100));
    t102 = (t95 & t97);
    t103 = (t99 & t101);
    t104 = (~(t102));
    t105 = (~(t103));
    t106 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t106 & t104);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t107 & t105);
    t108 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t108 & t104);
    t109 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t109 & t105);
    goto LAB12;

}

static void Always_54_2(char *t0)
{
    char t4[8];
    char t21[8];
    char t25[8];
    char t33[8];
    char t34[8];
    char t35[8];
    char t77[8];
    char t78[8];
    char t83[8];
    char t119[8];
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
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
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
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t120;

LAB0:    t1 = (t0 + 4864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5216);
    *((int *)t2) = 1;
    t3 = (t0 + 4896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t5 = (t0 + 1616U);
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

LAB11:    xsi_set_current_line(63, ng0);

LAB14:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1936U);
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
LAB17:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3296);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 32, t13, 32);
    t19 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t19, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 31);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 31);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3456);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng14)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB112;

LAB111:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB112;

LAB115:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB113;

LAB114:    t20 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(55, ng0);

LAB13:    xsi_set_current_line(56, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 16, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(64, ng0);

LAB18:    xsi_set_current_line(65, ng0);
    t5 = (t0 + 2336);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    memset(t21, 0, 8);
    t13 = (t12 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t13) != 0)
        goto LAB21;

LAB22:    t20 = (t21 + 4);
    t22 = *((unsigned int *)t21);
    t23 = *((unsigned int *)t20);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB23;

LAB24:    t27 = *((unsigned int *)t21);
    t28 = (~(t27));
    t29 = *((unsigned int *)t20);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t20) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t21) > 0)
        goto LAB29;

LAB30:    memcpy(t4, t31, 8);

LAB31:    t32 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t32, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2816);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t19 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_arith_rshift(t4, 32, t13, 16, t19, 32);
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t5, 32, t4, 32);
    t20 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t20, t21, 0, 0, 32, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB33;

LAB32:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB34;

LAB35:    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_unary_minus(t4, 32, t6, 32);
    memset(t21, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB41;

LAB40:    t13 = (t4 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB41;

LAB44:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB42;

LAB43:    t20 = (t21 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t21);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2816);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_multiply(t4, 32, t3, 8, t12, 16);
    t13 = ((char*)((ng8)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t21, 32, t4, 32, t13, 32);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t2, 32, t21, 32);
    t19 = ((char*)((ng9)));
    t20 = (t0 + 2976);
    t26 = (t20 + 56U);
    t31 = *((char **)t26);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_multiply(t33, 32, t19, 8, t31, 32);
    t32 = ((char*)((ng10)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t34, 32, t33, 32, t32, 32);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 32, t25, 32, t34, 32);
    t36 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 32, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2816);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng11)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB49;

LAB48:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB49;

LAB52:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB50;

LAB51:    memset(t21, 0, 8);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t20) != 0)
        goto LAB55;

LAB56:    t31 = (t21 + 4);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t31);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB57;

LAB58:    memcpy(t35, t21, 8);

LAB59:    t71 = (t35 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t35);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(80, ng0);

LAB93:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3456);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t25, 0, 8);
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
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB97;

LAB94:    if (t18 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t25) = 1;

LAB97:    memset(t21, 0, 8);
    t20 = (t25 + 4);
    t24 = *((unsigned int *)t20);
    t27 = (~(t24));
    t28 = *((unsigned int *)t25);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t20) != 0)
        goto LAB100;

LAB101:    t31 = (t21 + 4);
    t47 = *((unsigned int *)t21);
    t48 = *((unsigned int *)t31);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB102;

LAB103:    t50 = *((unsigned int *)t21);
    t51 = (~(t50));
    t52 = *((unsigned int *)t31);
    t55 = (t51 || t52);
    if (t55 > 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t31) > 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t21) > 0)
        goto LAB108;

LAB109:    memcpy(t4, t33, 8);

LAB110:    t40 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t40, t4, 0, 0, 8, 0LL);

LAB74:    goto LAB17;

LAB19:    *((unsigned int *)t21) = 1;
    goto LAB22;

LAB21:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB22;

LAB23:    t26 = ((char*)((ng4)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_unary_minus(t25, 16, t26, 16);
    goto LAB24;

LAB25:    t31 = ((char*)((ng4)));
    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t4, 16, t25, 16, t31, 16);
    goto LAB31;

LAB29:    memcpy(t4, t25, 8);
    goto LAB31;

LAB33:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB35;

LAB34:    *((unsigned int *)t4) = 1;
    goto LAB35;

LAB37:    xsi_set_current_line(69, ng0);
    t26 = ((char*)((ng6)));
    t31 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t31, t26, 0, 0, 32, 0LL);
    goto LAB39;

LAB41:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB43;

LAB42:    *((unsigned int *)t21) = 1;
    goto LAB43;

LAB45:    xsi_set_current_line(70, ng0);
    t26 = ((char*)((ng6)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_unary_minus(t25, 32, t26, 32);
    t31 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t31, t25, 0, 0, 32, 0LL);
    goto LAB47;

LAB49:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB51;

LAB50:    *((unsigned int *)t4) = 1;
    goto LAB51;

LAB53:    *((unsigned int *)t21) = 1;
    goto LAB56;

LAB55:    t26 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB56;

LAB57:    t32 = (t0 + 2816);
    t36 = (t32 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng11)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_unary_minus(t25, 16, t38, 16);
    memset(t33, 0, 8);
    t39 = (t37 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB61;

LAB60:    t40 = (t25 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB61;

LAB64:    if (*((unsigned int *)t37) > *((unsigned int *)t25))
        goto LAB62;

LAB63:    memset(t34, 0, 8);
    t42 = (t33 + 4);
    t17 = *((unsigned int *)t42);
    t18 = (~(t17));
    t22 = *((unsigned int *)t33);
    t23 = (t22 & t18);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t42) != 0)
        goto LAB67;

LAB68:    t27 = *((unsigned int *)t21);
    t28 = *((unsigned int *)t34);
    t29 = (t27 & t28);
    *((unsigned int *)t35) = t29;
    t44 = (t21 + 4);
    t45 = (t34 + 4);
    t46 = (t35 + 4);
    t30 = *((unsigned int *)t44);
    t47 = *((unsigned int *)t45);
    t48 = (t30 | t47);
    *((unsigned int *)t46) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB59;

LAB61:    t41 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB63;

LAB62:    *((unsigned int *)t33) = 1;
    goto LAB63;

LAB65:    *((unsigned int *)t34) = 1;
    goto LAB68;

LAB67:    t43 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB68;

LAB69:    t51 = *((unsigned int *)t35);
    t52 = *((unsigned int *)t46);
    *((unsigned int *)t35) = (t51 | t52);
    t53 = (t21 + 4);
    t54 = (t34 + 4);
    t55 = *((unsigned int *)t21);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t34);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t69 & t65);
    t70 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t70 & t66);
    goto LAB71;

LAB72:    xsi_set_current_line(78, ng0);

LAB75:    xsi_set_current_line(79, ng0);
    t79 = (t0 + 3456);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng12)));
    memset(t83, 0, 8);
    t84 = (t81 + 4);
    t85 = (t82 + 4);
    t86 = *((unsigned int *)t81);
    t87 = *((unsigned int *)t82);
    t88 = (t86 ^ t87);
    t89 = *((unsigned int *)t84);
    t90 = *((unsigned int *)t85);
    t91 = (t89 ^ t90);
    t92 = (t88 | t91);
    t93 = *((unsigned int *)t84);
    t94 = *((unsigned int *)t85);
    t95 = (t93 | t94);
    t96 = (~(t95));
    t97 = (t92 & t96);
    if (t97 != 0)
        goto LAB79;

LAB76:    if (t95 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t83) = 1;

LAB79:    memset(t78, 0, 8);
    t99 = (t83 + 4);
    t100 = *((unsigned int *)t99);
    t101 = (~(t100));
    t102 = *((unsigned int *)t83);
    t103 = (t102 & t101);
    t104 = (t103 & 1U);
    if (t104 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t99) != 0)
        goto LAB82;

LAB83:    t106 = (t78 + 4);
    t107 = *((unsigned int *)t78);
    t108 = *((unsigned int *)t106);
    t109 = (t107 || t108);
    if (t109 > 0)
        goto LAB84;

LAB85:    t111 = *((unsigned int *)t78);
    t112 = (~(t111));
    t113 = *((unsigned int *)t106);
    t114 = (t112 || t113);
    if (t114 > 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t106) > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t78) > 0)
        goto LAB90;

LAB91:    memcpy(t77, t119, 8);

LAB92:    t120 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t120, t77, 0, 0, 8, 0LL);
    goto LAB74;

LAB78:    t98 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB79;

LAB80:    *((unsigned int *)t78) = 1;
    goto LAB83;

LAB82:    t105 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t105) = 1;
    goto LAB83;

LAB84:    t110 = ((char*)((ng12)));
    goto LAB85;

LAB86:    t115 = (t0 + 3456);
    t116 = (t115 + 56U);
    t117 = *((char **)t116);
    t118 = ((char*)((ng13)));
    memset(t119, 0, 8);
    xsi_vlog_unsigned_add(t119, 32, t117, 8, t118, 32);
    goto LAB87;

LAB88:    xsi_vlog_unsigned_bit_combine(t77, 32, t110, 32, t119, 32);
    goto LAB92;

LAB90:    memcpy(t77, t110, 8);
    goto LAB92;

LAB96:    t19 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB97;

LAB98:    *((unsigned int *)t21) = 1;
    goto LAB101;

LAB100:    t26 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB101;

LAB102:    t32 = ((char*)((ng1)));
    goto LAB103;

LAB104:    t36 = (t0 + 3456);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng13)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_minus(t33, 32, t38, 8, t39, 32);
    goto LAB105;

LAB106:    xsi_vlog_unsigned_bit_combine(t4, 32, t32, 32, t33, 32);
    goto LAB110;

LAB108:    memcpy(t4, t32, 8);
    goto LAB110;

LAB112:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB114;

LAB113:    *((unsigned int *)t4) = 1;
    goto LAB114;

}


extern void work_m_03962045449148783048_3164540701_init()
{
	static char *pe[] = {(void *)Always_39_0,(void *)NetDecl_40_1,(void *)Always_54_2};
	xsi_register_didat("work_m_03962045449148783048_3164540701", "isim/top_isim_beh.exe.sim/work/m_03962045449148783048_3164540701.didat");
	xsi_register_executes(pe);
}
