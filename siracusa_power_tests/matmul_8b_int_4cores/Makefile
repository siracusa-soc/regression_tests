ifdef freq
DEFINE_FREQ = -DF$(freq)M
else
DEFINE_FREQ = 
endif
ifdef nb_run
DEFINE_NB_RUN = -DNB_RUN=$(nb_run)
else
DEFINE_NB_RUN = -DNB_RUN=1
endif
ifdef vcd_dump
DEFINE_VCD_DUMP = -DVCD_DUMP
else
DEFINE_VCD_DUMP = 
endif
ifdef gate
DEFINE_GATE_SIM = -DGATE_SIM
else
DEFINE_GATE_SIM = 
endif
PULP_APP = ne16_test
PULP_APP_FC_SRCS = ne16_test.c
PULP_APP_HOST_SRCS = ne16_test.c
PULP_CFLAGS = -O2 -g -Iinc -fno-tree-loop-optimize -fno-tree-loop-distribute-patterns $(DEFINE_FREQ) $(DEFINE_NB_RUN) $(DEFINE_VCD_DUMP) $(DEFINE_GATE_SIM)

$(info Flags : $(PULP_CFLAGS))

fc=0
cluster=1
bootmode=fast_debug

include $(PULP_SDK_HOME)/install/rules/pulp.mk





# include $(PULP_SDK_HOME)/install/rules/pulp_rt.mk

# PULP_APP = test
# PULP_APP_FC_SRCS = test.c
# PULP_APP_HOST_SRCS = test.c
# PULP_CFLAGS = -O3 -g -Iinc

# bootmode=fast_debug

# include $(PULP_SDK_HOME)/install/rules/pulp_rt.mk