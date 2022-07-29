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
    work_m_00000000001190022174_0377897103_init();
    work_m_00000000002586695785_3051490492_init();
    work_m_00000000004167334476_1413109123_init();
    work_m_00000000004114911987_3060579913_init();
    work_m_00000000001604024816_0560705904_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001604024816_0560705904");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
