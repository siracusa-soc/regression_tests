PULP_APP = test
PULP_APP_SRCS = test.c
PULP_CFLAGS = -O2 -g -DSKIP_PLL_INIT
export uvm_tb = 1
vsim_additional_flags=+UVM_TESTNAME=siracusa_sw_cpi_test +UVM_VERBOSITY=UVM_LOW -optionset UVMDEBUG \
	                    -suppress 8323 \
	                    -do "waves/camera_if.tcl"


include $(PULP_SDK_HOME)/install/rules/pulp_rt.mk