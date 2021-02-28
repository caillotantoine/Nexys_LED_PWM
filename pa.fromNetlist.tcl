
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name LED_PWM -dir "/home/caillot/Documents/Autres/Projets/FPGA/LED_PWM/planAhead_run_2" -part xc6slx16csg324-2
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "/home/caillot/Documents/Autres/Projets/FPGA/LED_PWM/PWM_LED_top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {/home/caillot/Documents/Autres/Projets/FPGA/LED_PWM} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "PWM_LED_top.ucf" [current_fileset -constrset]
add_files [list {PWM_LED_top.ucf}] -fileset [get_property constrset [current_run]]
link_design
