PULP_APP = test
PULP_APP_SRCS = test.c
PULP_CFLAGS = -O2 -g -DSKIP_PLL_INIT
export uvm_tb = 1
vsim_additional_flags=+UVM_TESTNAME=pulp_sw_backdoor_boot_test +UVM_VERBOSITY=UVM_HIGH -optionset UVMDEBUG \
											+uvm_set_verbosity=uvm_test_top.env.jtag_chain_agent.jtag_agent.monitor*,_ALL_,UVM_LOW,time,0 \
	                    +uvm_set_verbosity=uvm_test_top.env.jtag_chain_agent.*,_ALL_,UVM_LOW,time,0 \
											+uvm_set_verbosity=uvm_test_top.env.fc_data_port_a.monitor*,_ALL_,UVM_LOW,time,0 \
											+uvm_set_verbosity=uvm_test_top.env.vstdout_mon*,_ALL_,UVM_MEDIUM,time,0

CONFIG_OPT += rt/mode=rtbare

include $(PULP_SDK_HOME)/install/rules/pulp.mk
