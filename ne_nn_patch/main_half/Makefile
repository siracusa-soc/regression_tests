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
# PULP_CFLAGS = -O2 -g -Iavg_pool_fs3_dw_input_64x32x32_output_64x32x32/inc -Ifs1_input_1x64x32x32_output_32x16x16_stride2/inc -Ifs1_wo_normquant_input_64x32x32_output_64x16x16_stride2_q32/inc -Ipadded_fs3_input_32x16x16_output_32x16x16/inc -Istreamin_fs1_input_32x32x16x16_output_64x16x16_q32/inc -fno-tree-loop-optimize -fno-tree-loop-distribute-patterns $(DEFINE_FREQ) $(DEFINE_NB_RUN) $(DEFINE_VCD_DUMP) $(DEFINE_GATE_SIM)
PULP_CFLAGS = -O2 -g -Istreamin_fs1_output_64x8x8_input_32x8x8/inc -Ino_normquant_stride2_output_64x8x8_input_64x16x16/inc -Iavgpool_fs3_dw_output_64x16x16_input_64x16x16/inc -fno-tree-loop-optimize -fno-tree-loop-distribute-patterns $(DEFINE_FREQ) $(DEFINE_NB_RUN) $(DEFINE_VCD_DUMP) $(DEFINE_GATE_SIM)

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