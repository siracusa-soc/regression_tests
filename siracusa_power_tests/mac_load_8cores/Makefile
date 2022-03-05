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
PULP_APP = test
PULP_APP_SRCS = test2.c
PULP_CFLAGS=-O2 -fno-tree-loop-optimize -fno-tree-loop-distribute-patterns $(DEFINE_FREQ) $(DEFINE_NB_RUN) $(DEFINE_VCD_DUMP) $(DEFINE_GATE_SIM)

$(info Flags : $(PULP_CFLAGS))

fc=0
cluster=1
PULP_ARCH_CFLAGS  = -march=rv32imcXpulpnn -D__riscv__
PULP_ARCH_LDFLAGS =  -march=rv32imcXpulpnn -D__riscv__
PULP_ARCH_OBJDFLAGS = -Mmarch=rv32imcXpulpnn 

disopt = --disassembler-options="march=rv32imcXpulpnn" -d
bootmode=fast_debug
include $(PULP_SDK_HOME)/install/rules/pulp.mk

