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
    work_m_07274135000396963940_2380257895_init();
    work_m_05499150823771836151_0730825886_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_05499150823771836151_0730825886");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
