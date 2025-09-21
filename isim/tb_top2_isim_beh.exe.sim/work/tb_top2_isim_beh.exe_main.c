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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_05416705159345720983_0742867476_init();
    work_m_15086579897861367416_1488474115_init();
    work_m_01581487406877477261_1474961982_init();
    work_m_01607859294875132104_3823007873_init();
    work_m_07730331958948393044_1656860509_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_07730331958948393044_1656860509");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
