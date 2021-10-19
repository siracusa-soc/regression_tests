PULP_APP = test
PULP_APP_SRCS = test.c
PULP_CFLAGS=-O3
uvm_tb = 1
vsim_additional_flags=+UVM_TESTNAME=siracusa_uart_test +UVM_VERBOSITY=UVM_MEDIUM -optionset UVMDEBUG \
											+uvm_set_verbosity=uvm_test_top.env.jtag_chain_agent.jtag_agent.monitor*,_ALL_,UVM_LOW,time,0 \
	                    +uvm_set_verbosity=uvm_test_top.env.jtag_chain_agent.*,_ALL_,UVM_LOW,time,0 \
											+uvm_set_verbosity=uvm_test_top.env.fc_data_port_a.monitor*,_ALL_,UVM_LOW,time,0 \
											+uvm_set_verbosity=uvm_test_top.env.vstdout_mon*,_ALL_,UVM_MEDIUM,time,0 \
	                    +uvm_set_verbosity=uvm_test_top.env.io_mux_a*,_ALL_,UVM_MEDIUM,time,0 \

include $(PULP_SDK_HOME)/install/rules/pulp.mk
