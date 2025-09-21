
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name hans_solution -dir "/home/lengyu/linux_project_dir/vivado_dir/hans_solution/planAhead_run_5" -part xc3s50antqg144-5
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "/home/lengyu/linux_project_dir/vivado_dir/hans_solution/top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {/home/lengyu/linux_project_dir/vivado_dir/hans_solution} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "top.ucf" [current_fileset -constrset]
add_files [list {top.ucf}] -fileset [get_property constrset [current_run]]
link_design
