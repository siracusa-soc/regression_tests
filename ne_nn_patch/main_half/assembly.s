Flags : -O2 -g -Istreamin_fs1_output_64x8x8_input_32x8x8/inc -Ino_normquant_stride2_output_64x8x8_input_64x16x16/inc -Iavgpool_fs3_dw_output_64x16x16_input_64x16x16/inc -fno-tree-loop-optimize -fno-tree-loop-distribute-patterns  -DNB_RUN=1  
make[1]: Entering directory `/scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/main_half'
/usr/pack/pulpsdk-1.0-kgf/artifactory/pulp-sdk-release/pkg/pulp_riscv_gcc/1.0.16//bin/riscv32-unknown-elf-objdump -Mmarch=rv32imcxgap9 -d /scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/main_half/build/ne16_test/ne16_test

/scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/main_half/build/ne16_test/ne16_test:     file format elf32-littleriscv


Disassembly of section .vectors:

1c008000 <__irq_vector_base>:
1c008000:	70c0106f          	j	1c00970c <__rt_handle_illegal_instr>
1c008004:	0840006f          	j	1c008088 <pos_no_irq_handler>
1c008008:	0800006f          	j	1c008088 <pos_no_irq_handler>
1c00800c:	07c0006f          	j	1c008088 <pos_no_irq_handler>
1c008010:	0780006f          	j	1c008088 <pos_no_irq_handler>
1c008014:	0740006f          	j	1c008088 <pos_no_irq_handler>
1c008018:	0700006f          	j	1c008088 <pos_no_irq_handler>
1c00801c:	06c0006f          	j	1c008088 <pos_no_irq_handler>
1c008020:	0680006f          	j	1c008088 <pos_no_irq_handler>
1c008024:	0640006f          	j	1c008088 <pos_no_irq_handler>
1c008028:	0600006f          	j	1c008088 <pos_no_irq_handler>
1c00802c:	05c0006f          	j	1c008088 <pos_no_irq_handler>
1c008030:	0580006f          	j	1c008088 <pos_no_irq_handler>
1c008034:	0540006f          	j	1c008088 <pos_no_irq_handler>
1c008038:	0500006f          	j	1c008088 <pos_no_irq_handler>
1c00803c:	04c0006f          	j	1c008088 <pos_no_irq_handler>
1c008040:	0480006f          	j	1c008088 <pos_no_irq_handler>
1c008044:	0440006f          	j	1c008088 <pos_no_irq_handler>
1c008048:	0400006f          	j	1c008088 <pos_no_irq_handler>
1c00804c:	03c0006f          	j	1c008088 <pos_no_irq_handler>
1c008050:	0380006f          	j	1c008088 <pos_no_irq_handler>
1c008054:	0340006f          	j	1c008088 <pos_no_irq_handler>
1c008058:	0300006f          	j	1c008088 <pos_no_irq_handler>
1c00805c:	02c0006f          	j	1c008088 <pos_no_irq_handler>
1c008060:	0280006f          	j	1c008088 <pos_no_irq_handler>
1c008064:	0240006f          	j	1c008088 <pos_no_irq_handler>
1c008068:	0200006f          	j	1c008088 <pos_no_irq_handler>
1c00806c:	01c0006f          	j	1c008088 <pos_no_irq_handler>
1c008070:	0180006f          	j	1c008088 <pos_no_irq_handler>
1c008074:	0140006f          	j	1c008088 <pos_no_irq_handler>
1c008078:	0100006f          	j	1c008088 <pos_no_irq_handler>
1c00807c:	00c0006f          	j	1c008088 <pos_no_irq_handler>

1c008080 <_start>:
1c008080:	0640006f          	j	1c0080e4 <_stext>

1c008084 <pos_illegal_instr>:
1c008084:	6880106f          	j	1c00970c <__rt_handle_illegal_instr>

1c008088 <pos_no_irq_handler>:
1c008088:	30200073          	mret

1c00808c <pos_semihosting_call>:
1c00808c:	00100073          	ebreak
1c008090:	00008067          	ret

1c008094 <pe_start>:
1c008094:	f400a117          	auipc	sp,0xf400a
1c008098:	0bc10113          	addi	sp,sp,188 # 10012150 <cluster_stacks>
1c00809c:	00012103          	lw	sp,0(sp)
1c0080a0:	000011b7          	lui	gp,0x1
1c0080a4:	80018193          	addi	gp,gp,-2048 # 800 <__cluster_text_size+0x800>
1c0080a8:	00158593          	addi	a1,a1,1
1c0080ac:	02b180b3          	mul	ra,gp,a1
1c0080b0:	00110133          	add	sp,sp,ra
1c0080b4:	6d60106f          	j	1c00978a <cluster_entry_stub>

1c0080b8 <do_cl_boot>:
1c0080b8:	10200137          	lui	sp,0x10200
1c0080bc:	00100193          	li	gp,1
1c0080c0:	00000217          	auipc	tp,0x0
1c0080c4:	fc020213          	addi	tp,tp,-64 # 1c008080 <_start>
1c0080c8:	04412023          	sw	tp,64(sp) # 10200040 <__l2_shared_end+0x1edeec>
1c0080cc:	00312423          	sw	gp,8(sp)

1c0080d0 <loop>:
1c0080d0:	1a10a137          	lui	sp,0x1a10a
1c0080d4:	80010113          	addi	sp,sp,-2048 # 1a109800 <__l2_shared_end+0xa0f76ac>
1c0080d8:	00012023          	sw	zero,0(sp)
1c0080dc:	10500073          	wfi
1c0080e0:	ff1ff06f          	j	1c0080d0 <loop>

Disassembly of section .text:

1c0080e4 <_stext>:
1c0080e4:	f1402573          	csrr	a0,mhartid
1c0080e8:	01f57593          	andi	a1,a0,31
1c0080ec:	8115                	srli	a0,a0,0x5
1c0080ee:	467d                	li	a2,31
1c0080f0:	00c50463          	beq	a0,a2,1c0080f8 <_stext+0x14>
1c0080f4:	fa1ff06f          	j	1c008094 <pe_start>
1c0080f8:	ffff9297          	auipc	t0,0xffff9
1c0080fc:	93028293          	addi	t0,t0,-1744 # 1c000a28 <_bss_start>
1c008100:	ffff9317          	auipc	t1,0xffff9
1c008104:	94430313          	addi	t1,t1,-1724 # 1c000a44 <__l2_priv0_end>
1c008108:	0002a023          	sw	zero,0(t0)
1c00810c:	0291                	addi	t0,t0,4
1c00810e:	fe62ede3          	bltu	t0,t1,1c008108 <_stext+0x24>
1c008112:	ffff8117          	auipc	sp,0xffff8
1c008116:	72e10113          	addi	sp,sp,1838 # 1c000840 <stack>
1c00811a:	452010ef          	jal	ra,1c00956c <pos_init_start>
1c00811e:	00000513          	li	a0,0
1c008122:	00000593          	li	a1,0
1c008126:	00000397          	auipc	t2,0x0
1c00812a:	3ee38393          	addi	t2,t2,1006 # 1c008514 <main>
1c00812e:	000380e7          	jalr	t2
1c008132:	842a                	mv	s0,a0
1c008134:	48e010ef          	jal	ra,1c0095c2 <pos_init_stop>
1c008138:	8522                	mv	a0,s0
1c00813a:	568000ef          	jal	ra,1c0086a2 <exit>

1c00813e <run_test>:
1c00813e:	1101                	addi	sp,sp,-32
1c008140:	1c0107b7          	lui	a5,0x1c010
1c008144:	ce06                	sw	ra,28(sp)
1c008146:	00078793          	mv	a5,a5
1c00814a:	20800737          	lui	a4,0x20800
1c00814e:	00c6d0fb          	lp.setupi	x1,12,1c008168 <run_test+0x2a>
1c008152:	0007a803          	lw	a6,0(a5) # 1c010000 <ne16_weights_avgpool>
1c008156:	43c8                	lw	a0,4(a5)
1c008158:	478c                	lw	a1,8(a5)
1c00815a:	47d0                	lw	a2,12(a5)
1c00815c:	01072023          	sw	a6,0(a4) # 20800000 <ne16_weights_streamin+0x47ea740>
1c008160:	c348                	sw	a0,4(a4)
1c008162:	c70c                	sw	a1,8(a4)
1c008164:	c750                	sw	a2,12(a4)
1c008166:	07c1                	addi	a5,a5,16
1c008168:	0741                	addi	a4,a4,16
1c00816a:	1c015737          	lui	a4,0x1c015
1c00816e:	208007b7          	lui	a5,0x20800
1c008172:	8c070713          	addi	a4,a4,-1856 # 1c0148c0 <ne16_weights_no_normquant>
1c008176:	0c078793          	addi	a5,a5,192 # 208000c0 <ne16_weights_streamin+0x47ea800>
1c00817a:	1006d0fb          	lp.setupi	x1,256,1c008194 <run_test+0x56>
1c00817e:	00072803          	lw	a6,0(a4)
1c008182:	4348                	lw	a0,4(a4)
1c008184:	470c                	lw	a1,8(a4)
1c008186:	4750                	lw	a2,12(a4)
1c008188:	0107a023          	sw	a6,0(a5)
1c00818c:	c3c8                	sw	a0,4(a5)
1c00818e:	c78c                	sw	a1,8(a5)
1c008190:	c7d0                	sw	a2,12(a5)
1c008192:	0741                	addi	a4,a4,16
1c008194:	07c1                	addi	a5,a5,16
1c008196:	1c016737          	lui	a4,0x1c016
1c00819a:	208017b7          	lui	a5,0x20801
1c00819e:	8c070713          	addi	a4,a4,-1856 # 1c0158c0 <ne16_weights_streamin>
1c0081a2:	0c078793          	addi	a5,a5,192 # 208010c0 <ne16_weights_streamin+0x47eb800>
1c0081a6:	0806d0fb          	lp.setupi	x1,128,1c0081c0 <run_test+0x82>
1c0081aa:	00072803          	lw	a6,0(a4)
1c0081ae:	4348                	lw	a0,4(a4)
1c0081b0:	470c                	lw	a1,8(a4)
1c0081b2:	4750                	lw	a2,12(a4)
1c0081b4:	0107a023          	sw	a6,0(a5)
1c0081b8:	c3c8                	sw	a0,4(a5)
1c0081ba:	c78c                	sw	a1,8(a5)
1c0081bc:	c7d0                	sw	a2,12(a5)
1c0081be:	0741                	addi	a4,a4,16
1c0081c0:	07c1                	addi	a5,a5,16
1c0081c2:	1c010737          	lui	a4,0x1c010
1c0081c6:	208027b7          	lui	a5,0x20802
1c0081ca:	0c070713          	addi	a4,a4,192 # 1c0100c0 <ne16_weights_stride2>
1c0081ce:	8c078793          	addi	a5,a5,-1856 # 208018c0 <ne16_weights_streamin+0x47ec000>
1c0081d2:	0806d0fb          	lp.setupi	x1,128,1c0081ec <run_test+0xae>
1c0081d6:	00072803          	lw	a6,0(a4)
1c0081da:	4348                	lw	a0,4(a4)
1c0081dc:	470c                	lw	a1,8(a4)
1c0081de:	4750                	lw	a2,12(a4)
1c0081e0:	0107a023          	sw	a6,0(a5)
1c0081e4:	c3c8                	sw	a0,4(a5)
1c0081e6:	c78c                	sw	a1,8(a5)
1c0081e8:	c7d0                	sw	a2,12(a5)
1c0081ea:	0741                	addi	a4,a4,16
1c0081ec:	07c1                	addi	a5,a5,16
1c0081ee:	1c011737          	lui	a4,0x1c011
1c0081f2:	208067b7          	lui	a5,0x20806
1c0081f6:	8c070713          	addi	a4,a4,-1856 # 1c0108c0 <ne16_weights_padding>
1c0081fa:	8c078793          	addi	a5,a5,-1856 # 208058c0 <ne16_weights_streamin+0x47f0000>
1c0081fe:	4006d0fb          	lp.setupi	x1,1024,1c008218 <run_test+0xda>
1c008202:	00072803          	lw	a6,0(a4)
1c008206:	4348                	lw	a0,4(a4)
1c008208:	470c                	lw	a1,8(a4)
1c00820a:	4750                	lw	a2,12(a4)
1c00820c:	0107a023          	sw	a6,0(a5)
1c008210:	c3c8                	sw	a0,4(a5)
1c008212:	c78c                	sw	a1,8(a5)
1c008214:	c7d0                	sw	a2,12(a5)
1c008216:	0741                	addi	a4,a4,16
1c008218:	07c1                	addi	a5,a5,16
1c00821a:	102007b7          	lui	a5,0x10200
1c00821e:	07e1                	addi	a5,a5,24
1c008220:	4398                	lw	a4,0(a5)
1c008222:	c0b74733          	p.bset	a4,a4,0,11
1c008226:	c398                	sw	a4,0(a5)
1c008228:	4398                	lw	a4,0(a5)
1c00822a:	c0874733          	p.bset	a4,a4,0,8
1c00822e:	c398                	sw	a4,0(a5)
1c008230:	4398                	lw	a4,0(a5)
1c008232:	ce073733          	p.bclr	a4,a4,7,0
1c008236:	c398                	sw	a4,0(a5)
1c008238:	4398                	lw	a4,0(a5)
1c00823a:	c0374733          	p.bset	a4,a4,0,3
1c00823e:	c398                	sw	a4,0(a5)
1c008240:	102017b7          	lui	a5,0x10201
1c008244:	0007aa23          	sw	zero,20(a5) # 10201014 <__l2_shared_end+0x1eeec0>
1c008248:	c602                	sw	zero,12(sp)
1c00824a:	4732                	lw	a4,12(sp)
1c00824c:	47a5                	li	a5,9
1c00824e:	00e7c963          	blt	a5,a4,1c008260 <run_test+0x122>
1c008252:	4725                	li	a4,9
1c008254:	47b2                	lw	a5,12(sp)
1c008256:	0785                	addi	a5,a5,1
1c008258:	c63e                	sw	a5,12(sp)
1c00825a:	47b2                	lw	a5,12(sp)
1c00825c:	fef75ce3          	ble	a5,a4,1c008254 <run_test+0x116>
1c008260:	10201637          	lui	a2,0x10201
1c008264:	0611                	addi	a2,a2,4
1c008266:	421c                	lw	a5,0(a2)
1c008268:	0007dc63          	bgez	a5,1c008280 <run_test+0x142>
1c00826c:	6705                	lui	a4,0x1
1c00826e:	002047b7          	lui	a5,0x204
1c008272:	c798                	sw	a4,8(a5)
1c008274:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1d6190>
1c008278:	c3d8                	sw	a4,4(a5)
1c00827a:	4214                	lw	a3,0(a2)
1c00827c:	fe06cbe3          	bltz	a3,1c008272 <run_test+0x134>
1c008280:	102015b7          	lui	a1,0x10201
1c008284:	004027b7          	lui	a5,0x402
1c008288:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x1eeecc>
1c00828c:	8c078793          	addi	a5,a5,-1856 # 4018c0 <__l1_heap_size+0x3d3a14>
1c008290:	00f5a023          	sw	a5,0(a1)
1c008294:	10009337          	lui	t1,0x10009
1c008298:	05030313          	addi	t1,t1,80 # 10009050 <ne16_infeat_avgpool>
1c00829c:	0065a223          	sw	t1,4(a1)
1c0082a0:	100008b7          	lui	a7,0x10000
1c0082a4:	3d088893          	addi	a7,a7,976 # 100003d0 <ne16_streamin_stride2>
1c0082a8:	0115a423          	sw	a7,8(a1)
1c0082ac:	10000537          	lui	a0,0x10000
1c0082b0:	00450513          	addi	a0,a0,4 # 10000004 <ne16_scale_stride2>
1c0082b4:	00a5a623          	sw	a0,12(a1)
1c0082b8:	02050793          	addi	a5,a0,32
1c0082bc:	00f5a823          	sw	a5,16(a1)
1c0082c0:	04050793          	addi	a5,a0,64
1c0082c4:	00f5aa23          	sw	a5,20(a1)
1c0082c8:	1c001837          	lui	a6,0x1c001
1c0082cc:	4719                	li	a4,6
1c0082ce:	9c080813          	addi	a6,a6,-1600 # 1c0009c0 <ne16_cfg_stride2>
1c0082d2:	012450fb          	lp.setupi	x1,18,1c0082e2 <run_test+0x1a4>
1c0082d6:	00271693          	slli	a3,a4,0x2
1c0082da:	20d87603          	p.lw	a2,a3(a6)
1c0082de:	00c5e6a3          	p.sw	a2,a3(a1)
1c0082e2:	0705                	addi	a4,a4,1
1c0082e4:	102017b7          	lui	a5,0x10201
1c0082e8:	0007a023          	sw	zero,0(a5) # 10201000 <__l2_shared_end+0x1eeeac>
1c0082ec:	10201637          	lui	a2,0x10201
1c0082f0:	0611                	addi	a2,a2,4
1c0082f2:	421c                	lw	a5,0(a2)
1c0082f4:	0007dc63          	bgez	a5,1c00830c <run_test+0x1ce>
1c0082f8:	6705                	lui	a4,0x1
1c0082fa:	002047b7          	lui	a5,0x204
1c0082fe:	c798                	sw	a4,8(a5)
1c008300:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1d6190>
1c008304:	c3d8                	sw	a4,4(a5)
1c008306:	4214                	lw	a3,0(a2)
1c008308:	fe06cbe3          	bltz	a3,1c0082fe <run_test+0x1c0>
1c00830c:	102015b7          	lui	a1,0x10201
1c008310:	004067b7          	lui	a5,0x406
1c008314:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x1eeecc>
1c008318:	8c078793          	addi	a5,a5,-1856 # 4058c0 <__l1_heap_size+0x3d7a14>
1c00831c:	00f5a023          	sw	a5,0(a1)
1c008320:	0115a223          	sw	a7,4(a1)
1c008324:	100028b7          	lui	a7,0x10002
1c008328:	3d088893          	addi	a7,a7,976 # 100023d0 <ne16_streamin_padding>
1c00832c:	0115a423          	sw	a7,8(a1)
1c008330:	0c050793          	addi	a5,a0,192
1c008334:	00f5a623          	sw	a5,12(a1)
1c008338:	0e050793          	addi	a5,a0,224
1c00833c:	00f5a823          	sw	a5,16(a1)
1c008340:	10050793          	addi	a5,a0,256
1c008344:	00f5aa23          	sw	a5,20(a1)
1c008348:	1c001837          	lui	a6,0x1c001
1c00834c:	4719                	li	a4,6
1c00834e:	90080813          	addi	a6,a6,-1792 # 1c000900 <ne16_cfg_padding>
1c008352:	012450fb          	lp.setupi	x1,18,1c008362 <run_test+0x224>
1c008356:	00271693          	slli	a3,a4,0x2
1c00835a:	20d87603          	p.lw	a2,a3(a6)
1c00835e:	00c5e6a3          	p.sw	a2,a3(a1)
1c008362:	0705                	addi	a4,a4,1
1c008364:	102017b7          	lui	a5,0x10201
1c008368:	0007a023          	sw	zero,0(a5) # 10201000 <__l2_shared_end+0x1eeeac>
1c00836c:	10201637          	lui	a2,0x10201
1c008370:	0611                	addi	a2,a2,4
1c008372:	421c                	lw	a5,0(a2)
1c008374:	0007dc63          	bgez	a5,1c00838c <run_test+0x24e>
1c008378:	6705                	lui	a4,0x1
1c00837a:	002047b7          	lui	a5,0x204
1c00837e:	c798                	sw	a4,8(a5)
1c008380:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1d6190>
1c008384:	c3d8                	sw	a4,4(a5)
1c008386:	4214                	lw	a3,0(a2)
1c008388:	fe06cbe3          	bltz	a3,1c00837e <run_test+0x240>
1c00838c:	102015b7          	lui	a1,0x10201
1c008390:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x1eeecc>
1c008394:	004007b7          	lui	a5,0x400
1c008398:	00f5a023          	sw	a5,0(a1)
1c00839c:	0065a223          	sw	t1,4(a1)
1c0083a0:	10005337          	lui	t1,0x10005
1c0083a4:	05030313          	addi	t1,t1,80 # 10005050 <ne16_streamin_avgpool>
1c0083a8:	0065a423          	sw	t1,8(a1)
1c0083ac:	18050793          	addi	a5,a0,384
1c0083b0:	00f5a623          	sw	a5,12(a1)
1c0083b4:	1c050793          	addi	a5,a0,448
1c0083b8:	00f5a823          	sw	a5,16(a1)
1c0083bc:	20050793          	addi	a5,a0,512
1c0083c0:	00f5aa23          	sw	a5,20(a1)
1c0083c4:	1c001837          	lui	a6,0x1c001
1c0083c8:	4719                	li	a4,6
1c0083ca:	84080813          	addi	a6,a6,-1984 # 1c000840 <stack>
1c0083ce:	012450fb          	lp.setupi	x1,18,1c0083de <run_test+0x2a0>
1c0083d2:	00271693          	slli	a3,a4,0x2
1c0083d6:	20d87603          	p.lw	a2,a3(a6)
1c0083da:	00c5e6a3          	p.sw	a2,a3(a1)
1c0083de:	0705                	addi	a4,a4,1
1c0083e0:	102017b7          	lui	a5,0x10201
1c0083e4:	0007a023          	sw	zero,0(a5) # 10201000 <__l2_shared_end+0x1eeeac>
1c0083e8:	10201637          	lui	a2,0x10201
1c0083ec:	0611                	addi	a2,a2,4
1c0083ee:	421c                	lw	a5,0(a2)
1c0083f0:	0007dc63          	bgez	a5,1c008408 <run_test+0x2ca>
1c0083f4:	6705                	lui	a4,0x1
1c0083f6:	002047b7          	lui	a5,0x204
1c0083fa:	c798                	sw	a4,8(a5)
1c0083fc:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1d6190>
1c008400:	c3d8                	sw	a4,4(a5)
1c008402:	4214                	lw	a3,0(a2)
1c008404:	fe06cbe3          	bltz	a3,1c0083fa <run_test+0x2bc>
1c008408:	102015b7          	lui	a1,0x10201
1c00840c:	004007b7          	lui	a5,0x400
1c008410:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x1eeecc>
1c008414:	0c078793          	addi	a5,a5,192 # 4000c0 <__l1_heap_size+0x3d2214>
1c008418:	00f5a023          	sw	a5,0(a1)
1c00841c:	0065a223          	sw	t1,4(a1)
1c008420:	1000e337          	lui	t1,0x1000e
1c008424:	15030313          	addi	t1,t1,336 # 1000e150 <ne16_streamin_no_normquant>
1c008428:	0065a423          	sw	t1,8(a1)
1c00842c:	20450793          	addi	a5,a0,516
1c008430:	00f5a623          	sw	a5,12(a1)
1c008434:	24450793          	addi	a5,a0,580
1c008438:	00f5a823          	sw	a5,16(a1)
1c00843c:	24850793          	addi	a5,a0,584
1c008440:	00f5aa23          	sw	a5,20(a1)
1c008444:	1c001837          	lui	a6,0x1c001
1c008448:	4719                	li	a4,6
1c00844a:	8a080813          	addi	a6,a6,-1888 # 1c0008a0 <ne16_cfg_no_normquant>
1c00844e:	012450fb          	lp.setupi	x1,18,1c00845e <run_test+0x320>
1c008452:	00271693          	slli	a3,a4,0x2
1c008456:	20d87603          	p.lw	a2,a3(a6)
1c00845a:	00c5e6a3          	p.sw	a2,a3(a1)
1c00845e:	0705                	addi	a4,a4,1
1c008460:	102017b7          	lui	a5,0x10201
1c008464:	0007a023          	sw	zero,0(a5) # 10201000 <__l2_shared_end+0x1eeeac>
1c008468:	10201637          	lui	a2,0x10201
1c00846c:	0611                	addi	a2,a2,4
1c00846e:	421c                	lw	a5,0(a2)
1c008470:	0007dc63          	bgez	a5,1c008488 <run_test+0x34a>
1c008474:	6705                	lui	a4,0x1
1c008476:	002047b7          	lui	a5,0x204
1c00847a:	c798                	sw	a4,8(a5)
1c00847c:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1d6190>
1c008480:	c3d8                	sw	a4,4(a5)
1c008482:	4214                	lw	a3,0(a2)
1c008484:	fe06cbe3          	bltz	a3,1c00847a <run_test+0x33c>
1c008488:	102015b7          	lui	a1,0x10201
1c00848c:	004017b7          	lui	a5,0x401
1c008490:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x1eeecc>
1c008494:	0c078793          	addi	a5,a5,192 # 4010c0 <__l1_heap_size+0x3d3214>
1c008498:	00f5a023          	sw	a5,0(a1)
1c00849c:	0115a223          	sw	a7,4(a1)
1c0084a0:	0065a423          	sw	t1,8(a1)
1c0084a4:	24c50793          	addi	a5,a0,588
1c0084a8:	00f5a623          	sw	a5,12(a1)
1c0084ac:	28c50793          	addi	a5,a0,652
1c0084b0:	00f5a823          	sw	a5,16(a1)
1c0084b4:	2cc50513          	addi	a0,a0,716
1c0084b8:	00a5aa23          	sw	a0,20(a1)
1c0084bc:	1c001537          	lui	a0,0x1c001
1c0084c0:	4719                	li	a4,6
1c0084c2:	96050513          	addi	a0,a0,-1696 # 1c000960 <ne16_cfg_streamin>
1c0084c6:	012450fb          	lp.setupi	x1,18,1c0084d6 <run_test+0x398>
1c0084ca:	00271693          	slli	a3,a4,0x2
1c0084ce:	20d57603          	p.lw	a2,a3(a0)
1c0084d2:	00c5e6a3          	p.sw	a2,a3(a1)
1c0084d6:	0705                	addi	a4,a4,1
1c0084d8:	10201637          	lui	a2,0x10201
1c0084dc:	00062023          	sw	zero,0(a2) # 10201000 <__l2_shared_end+0x1eeeac>
1c0084e0:	6705                	lui	a4,0x1
1c0084e2:	002047b7          	lui	a5,0x204
1c0084e6:	0631                	addi	a2,a2,12
1c0084e8:	c798                	sw	a4,8(a5)
1c0084ea:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1d6190>
1c0084ee:	c3d8                	sw	a4,4(a5)
1c0084f0:	4214                	lw	a3,0(a2)
1c0084f2:	fafd                	bnez	a3,1c0084e8 <run_test+0x3aa>
1c0084f4:	102007b7          	lui	a5,0x10200
1c0084f8:	07e1                	addi	a5,a5,24
1c0084fa:	4398                	lw	a4,0(a5)
1c0084fc:	1c000537          	lui	a0,0x1c000
1c008500:	01c50513          	addi	a0,a0,28 # 1c00001c <__DTOR_END__>
1c008504:	c0b73733          	p.bclr	a4,a4,0,11
1c008508:	c398                	sw	a4,0(a5)
1c00850a:	2a4d                	jal	1c0086bc <printf>
1c00850c:	40f2                	lw	ra,28(sp)
1c00850e:	4501                	li	a0,0
1c008510:	6105                	addi	sp,sp,32
1c008512:	8082                	ret

1c008514 <main>:
1c008514:	b12d                	j	1c00813e <run_test>

1c008516 <pos_fll_init>:
1c008516:	08152063          	p.beqimm	a0,1,1c008596 <pos_fll_init+0x80>
1c00851a:	04252a63          	p.beqimm	a0,2,1c00856e <pos_fll_init+0x58>
1c00851e:	c505                	beqz	a0,1c008546 <pos_fll_init+0x30>
1c008520:	4701                	li	a4,0
1c008522:	00470793          	addi	a5,a4,4 # 1004 <__cluster_text_size+0x1004>
1c008526:	05300613          	li	a2,83
1c00852a:	00c70693          	addi	a3,a4,12
1c00852e:	c390                	sw	a2,0(a5)
1c008530:	020c17b7          	lui	a5,0x20c1
1c008534:	0721                	addi	a4,a4,8
1c008536:	0006a023          	sw	zero,0(a3)
1c00853a:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x209392e>
1c00853e:	c31c                	sw	a5,0(a4)
1c008540:	05f68537          	lui	a0,0x5f68
1c008544:	8082                	ret
1c008546:	1a1007b7          	lui	a5,0x1a100
1c00854a:	00878713          	addi	a4,a5,8 # 1a100008 <__l2_shared_end+0xa0edeb4>
1c00854e:	00c78693          	addi	a3,a5,12
1c008552:	05300613          	li	a2,83
1c008556:	0791                	addi	a5,a5,4
1c008558:	c390                	sw	a2,0(a5)
1c00855a:	020c17b7          	lui	a5,0x20c1
1c00855e:	0006a023          	sw	zero,0(a3)
1c008562:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x209392e>
1c008566:	c31c                	sw	a5,0(a4)
1c008568:	05f68537          	lui	a0,0x5f68
1c00856c:	8082                	ret
1c00856e:	1a1007b7          	lui	a5,0x1a100
1c008572:	01878713          	addi	a4,a5,24 # 1a100018 <__l2_shared_end+0xa0edec4>
1c008576:	01c78693          	addi	a3,a5,28
1c00857a:	05300613          	li	a2,83
1c00857e:	07d1                	addi	a5,a5,20
1c008580:	c390                	sw	a2,0(a5)
1c008582:	020c17b7          	lui	a5,0x20c1
1c008586:	0006a023          	sw	zero,0(a3)
1c00858a:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x209392e>
1c00858e:	c31c                	sw	a5,0(a4)
1c008590:	05f68537          	lui	a0,0x5f68
1c008594:	8082                	ret
1c008596:	1a1007b7          	lui	a5,0x1a100
1c00859a:	02878713          	addi	a4,a5,40 # 1a100028 <__l2_shared_end+0xa0eded4>
1c00859e:	02c78693          	addi	a3,a5,44
1c0085a2:	05300613          	li	a2,83
1c0085a6:	02478793          	addi	a5,a5,36
1c0085aa:	c390                	sw	a2,0(a5)
1c0085ac:	020c17b7          	lui	a5,0x20c1
1c0085b0:	0006a023          	sw	zero,0(a3)
1c0085b4:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x209392e>
1c0085b8:	c31c                	sw	a5,0(a4)
1c0085ba:	05f68537          	lui	a0,0x5f68
1c0085be:	8082                	ret

1c0085c0 <pos_soc_init>:
1c0085c0:	8082                	ret

1c0085c2 <pos_wait_forever>:
1c0085c2:	f14027f3          	csrr	a5,mhartid
1c0085c6:	477d                	li	a4,31
1c0085c8:	ca5797b3          	p.extractu	a5,a5,5,5
1c0085cc:	00e78963          	beq	a5,a4,1c0085de <pos_wait_forever+0x1c>
1c0085d0:	002047b7          	lui	a5,0x204
1c0085d4:	577d                	li	a4,-1
1c0085d6:	c3d8                	sw	a4,4(a5)
1c0085d8:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1d618c>
1c0085dc:	a001                	j	1c0085dc <pos_wait_forever+0x1a>
1c0085de:	1a10a7b7          	lui	a5,0x1a10a
1c0085e2:	577d                	li	a4,-1
1c0085e4:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa0f76b4>
1c0085e8:	10500073          	wfi
1c0085ec:	10500073          	wfi
1c0085f0:	bfe5                	j	1c0085e8 <pos_wait_forever+0x26>

1c0085f2 <memcpy>:
1c0085f2:	00a5e7b3          	or	a5,a1,a0
1c0085f6:	fa27b7b3          	p.bclr	a5,a5,29,2
1c0085fa:	cf81                	beqz	a5,1c008612 <memcpy+0x20>
1c0085fc:	87aa                	mv	a5,a0
1c0085fe:	ce0d                	beqz	a2,1c008638 <memcpy+0x46>
1c008600:	006640fb          	lp.setup	x1,a2,1c00860c <memcpy+0x1a>
1c008604:	0005c703          	lbu	a4,0(a1)
1c008608:	0785                	addi	a5,a5,1
1c00860a:	0585                	addi	a1,a1,1
1c00860c:	fee78fa3          	sb	a4,-1(a5)
1c008610:	8082                	ret
1c008612:	fa2637b3          	p.bclr	a5,a2,29,2
1c008616:	ef99                	bnez	a5,1c008634 <memcpy+0x42>
1c008618:	de65                	beqz	a2,1c008610 <memcpy+0x1e>
1c00861a:	1671                	addi	a2,a2,-4
1c00861c:	00265793          	srli	a5,a2,0x2
1c008620:	872a                	mv	a4,a0
1c008622:	0785                	addi	a5,a5,1
1c008624:	0057c0fb          	lp.setup	x1,a5,1c00862e <memcpy+0x3c>
1c008628:	4194                	lw	a3,0(a1)
1c00862a:	0711                	addi	a4,a4,4
1c00862c:	0591                	addi	a1,a1,4
1c00862e:	fed72e23          	sw	a3,-4(a4)
1c008632:	8082                	ret
1c008634:	87aa                	mv	a5,a0
1c008636:	b7e9                	j	1c008600 <memcpy+0xe>
1c008638:	8082                	ret

1c00863a <memmove>:
1c00863a:	40b507b3          	sub	a5,a0,a1
1c00863e:	00c7fd63          	bleu	a2,a5,1c008658 <memmove+0x1e>
1c008642:	87b2                	mv	a5,a2
1c008644:	0077c0fb          	lp.setup	x1,a5,1c008652 <memmove+0x18>
1c008648:	167d                	addi	a2,a2,-1
1c00864a:	00c58733          	add	a4,a1,a2
1c00864e:	00074703          	lbu	a4,0(a4)
1c008652:	00e54623          	p.sb	a4,a2(a0)
1c008656:	8082                	ret
1c008658:	87aa                	mv	a5,a0
1c00865a:	ca01                	beqz	a2,1c00866a <memmove+0x30>
1c00865c:	004640fb          	lp.setup	x1,a2,1c008664 <memmove+0x2a>
1c008660:	0015c70b          	p.lbu	a4,1(a1!)
1c008664:	00e780ab          	p.sb	a4,1(a5!)
1c008668:	8082                	ret
1c00866a:	8082                	ret

1c00866c <strchr>:
1c00866c:	00054783          	lbu	a5,0(a0) # 5f68000 <__l1_heap_size+0x5f3a154>
1c008670:	0ff5f593          	andi	a1,a1,255
1c008674:	00b78863          	beq	a5,a1,1c008684 <strchr+0x18>
1c008678:	c799                	beqz	a5,1c008686 <strchr+0x1a>
1c00867a:	0505                	addi	a0,a0,1
1c00867c:	00054783          	lbu	a5,0(a0)
1c008680:	feb79ce3          	bne	a5,a1,1c008678 <strchr+0xc>
1c008684:	8082                	ret
1c008686:	0015b593          	seqz	a1,a1
1c00868a:	40b005b3          	neg	a1,a1
1c00868e:	8d6d                	and	a0,a0,a1
1c008690:	8082                	ret

1c008692 <pos_libc_fputc_locked>:
1c008692:	1a1047b7          	lui	a5,0x1a104
1c008696:	0ff57513          	andi	a0,a0,255
1c00869a:	d388                	sw	a0,32(a5)
1c00869c:	4501                	li	a0,0
1c00869e:	8082                	ret

1c0086a0 <pos_libc_prf_locked>:
1c0086a0:	a87d                	j	1c00875e <pos_libc_prf>

1c0086a2 <exit>:
1c0086a2:	1141                	addi	sp,sp,-16
1c0086a4:	c606                	sw	ra,12(sp)
1c0086a6:	1a1047b7          	lui	a5,0x1a104
1c0086aa:	c1f54533          	p.bset	a0,a0,0,31
1c0086ae:	0aa7a023          	sw	a0,160(a5) # 1a1040a0 <__l2_shared_end+0xa0f1f4c>
1c0086b2:	3f01                	jal	1c0085c2 <pos_wait_forever>

1c0086b4 <pos_io_start>:
1c0086b4:	4501                	li	a0,0
1c0086b6:	8082                	ret

1c0086b8 <pos_io_stop>:
1c0086b8:	4501                	li	a0,0
1c0086ba:	8082                	ret

1c0086bc <printf>:
1c0086bc:	7139                	addi	sp,sp,-64
1c0086be:	02410313          	addi	t1,sp,36
1c0086c2:	d432                	sw	a2,40(sp)
1c0086c4:	862a                	mv	a2,a0
1c0086c6:	1c008537          	lui	a0,0x1c008
1c0086ca:	d22e                	sw	a1,36(sp)
1c0086cc:	d636                	sw	a3,44(sp)
1c0086ce:	4589                	li	a1,2
1c0086d0:	869a                	mv	a3,t1
1c0086d2:	69250513          	addi	a0,a0,1682 # 1c008692 <pos_libc_fputc_locked>
1c0086d6:	ce06                	sw	ra,28(sp)
1c0086d8:	d83a                	sw	a4,48(sp)
1c0086da:	da3e                	sw	a5,52(sp)
1c0086dc:	dc42                	sw	a6,56(sp)
1c0086de:	de46                	sw	a7,60(sp)
1c0086e0:	c61a                	sw	t1,12(sp)
1c0086e2:	3f7d                	jal	1c0086a0 <pos_libc_prf_locked>
1c0086e4:	40f2                	lw	ra,28(sp)
1c0086e6:	6121                	addi	sp,sp,64
1c0086e8:	8082                	ret

1c0086ea <pos_libc_to_x>:
1c0086ea:	872a                	mv	a4,a0
1c0086ec:	88aa                	mv	a7,a0
1c0086ee:	4e25                	li	t3,9
1c0086f0:	02c5f333          	remu	t1,a1,a2
1c0086f4:	4781                	li	a5,0
1c0086f6:	00188813          	addi	a6,a7,1
1c0086fa:	0ff37513          	andi	a0,t1,255
1c0086fe:	02c5d5b3          	divu	a1,a1,a2
1c008702:	03050513          	addi	a0,a0,48
1c008706:	006e7463          	bleu	t1,t3,1c00870e <pos_libc_to_x+0x24>
1c00870a:	02700793          	li	a5,39
1c00870e:	97aa                	add	a5,a5,a0
1c008710:	00f88023          	sb	a5,0(a7)
1c008714:	88c2                	mv	a7,a6
1c008716:	fde9                	bnez	a1,1c0086f0 <pos_libc_to_x+0x6>
1c008718:	40e80533          	sub	a0,a6,a4
1c00871c:	02d55f63          	ble	a3,a0,1c00875a <pos_libc_to_x+0x70>
1c008720:	410707b3          	sub	a5,a4,a6
1c008724:	03000613          	li	a2,48
1c008728:	96be                	add	a3,a3,a5
1c00872a:	0086c0fb          	lp.setup	x1,a3,1c00873a <pos_libc_to_x+0x50>
1c00872e:	00180793          	addi	a5,a6,1
1c008732:	00c80023          	sb	a2,0(a6)
1c008736:	40e78533          	sub	a0,a5,a4
1c00873a:	883e                	mv	a6,a5
1c00873c:	fe078fab          	p.sb	zero,-1(a5!)
1c008740:	00f77c63          	bleu	a5,a4,1c008758 <pos_libc_to_x+0x6e>
1c008744:	00074603          	lbu	a2,0(a4)
1c008748:	0007c683          	lbu	a3,0(a5)
1c00874c:	fec78fab          	p.sb	a2,-1(a5!)
1c008750:	00d700ab          	p.sb	a3,1(a4!)
1c008754:	fef768e3          	bltu	a4,a5,1c008744 <pos_libc_to_x+0x5a>
1c008758:	8082                	ret
1c00875a:	87c2                	mv	a5,a6
1c00875c:	b7c5                	j	1c00873c <pos_libc_to_x+0x52>

1c00875e <pos_libc_prf>:
1c00875e:	7169                	addi	sp,sp,-304
1c008760:	12912223          	sw	s1,292(sp)
1c008764:	13212023          	sw	s2,288(sp)
1c008768:	11312e23          	sw	s3,284(sp)
1c00876c:	11412c23          	sw	s4,280(sp)
1c008770:	11512a23          	sw	s5,276(sp)
1c008774:	dfee                	sw	s11,252(sp)
1c008776:	12112623          	sw	ra,300(sp)
1c00877a:	12812423          	sw	s0,296(sp)
1c00877e:	11612823          	sw	s6,272(sp)
1c008782:	11712623          	sw	s7,268(sp)
1c008786:	11812423          	sw	s8,264(sp)
1c00878a:	11912223          	sw	s9,260(sp)
1c00878e:	11a12023          	sw	s10,256(sp)
1c008792:	84aa                	mv	s1,a0
1c008794:	8a2e                	mv	s4,a1
1c008796:	8db2                	mv	s11,a2
1c008798:	8936                	mv	s2,a3
1c00879a:	4a81                	li	s5,0
1c00879c:	1c0009b7          	lui	s3,0x1c000
1c0087a0:	000dc503          	lbu	a0,0(s11)
1c0087a4:	0d85                	addi	s11,s11,1
1c0087a6:	cd11                	beqz	a0,1c0087c2 <pos_libc_prf+0x64>
1c0087a8:	02500793          	li	a5,37
1c0087ac:	04f50763          	beq	a0,a5,1c0087fa <pos_libc_prf+0x9c>
1c0087b0:	85d2                	mv	a1,s4
1c0087b2:	9482                	jalr	s1
1c0087b4:	15f52c63          	p.beqimm	a0,-1,1c00890c <pos_libc_prf+0x1ae>
1c0087b8:	0a85                	addi	s5,s5,1
1c0087ba:	000dc503          	lbu	a0,0(s11)
1c0087be:	0d85                	addi	s11,s11,1
1c0087c0:	f565                	bnez	a0,1c0087a8 <pos_libc_prf+0x4a>
1c0087c2:	12c12083          	lw	ra,300(sp)
1c0087c6:	12812403          	lw	s0,296(sp)
1c0087ca:	8556                	mv	a0,s5
1c0087cc:	12412483          	lw	s1,292(sp)
1c0087d0:	12012903          	lw	s2,288(sp)
1c0087d4:	11c12983          	lw	s3,284(sp)
1c0087d8:	11812a03          	lw	s4,280(sp)
1c0087dc:	11412a83          	lw	s5,276(sp)
1c0087e0:	11012b03          	lw	s6,272(sp)
1c0087e4:	10c12b83          	lw	s7,268(sp)
1c0087e8:	10812c03          	lw	s8,264(sp)
1c0087ec:	10412c83          	lw	s9,260(sp)
1c0087f0:	10012d03          	lw	s10,256(sp)
1c0087f4:	5dfe                	lw	s11,252(sp)
1c0087f6:	6155                	addi	sp,sp,304
1c0087f8:	8082                	ret
1c0087fa:	000dcc03          	lbu	s8,0(s11)
1c0087fe:	02000313          	li	t1,32
1c008802:	001d8d13          	addi	s10,s11,1
1c008806:	03098513          	addi	a0,s3,48 # 1c000030 <__DTOR_END__+0x14>
1c00880a:	85e2                	mv	a1,s8
1c00880c:	c21a                	sw	t1,4(sp)
1c00880e:	c602                	sw	zero,12(sp)
1c008810:	c402                	sw	zero,8(sp)
1c008812:	c802                	sw	zero,16(sp)
1c008814:	c002                	sw	zero,0(sp)
1c008816:	02300413          	li	s0,35
1c00881a:	02d00b93          	li	s7,45
1c00881e:	03000c93          	li	s9,48
1c008822:	8b6a                	mv	s6,s10
1c008824:	35a1                	jal	1c00866c <strchr>
1c008826:	c905                	beqz	a0,1c008856 <pos_libc_prf+0xf8>
1c008828:	108c0b63          	beq	s8,s0,1c00893e <pos_libc_prf+0x1e0>
1c00882c:	0f847263          	bleu	s8,s0,1c008910 <pos_libc_prf+0x1b2>
1c008830:	117c0363          	beq	s8,s7,1c008936 <pos_libc_prf+0x1d8>
1c008834:	0f9c0c63          	beq	s8,s9,1c00892c <pos_libc_prf+0x1ce>
1c008838:	02b00593          	li	a1,43
1c00883c:	0ebc0463          	beq	s8,a1,1c008924 <pos_libc_prf+0x1c6>
1c008840:	8dea                	mv	s11,s10
1c008842:	000dcc03          	lbu	s8,0(s11)
1c008846:	001d8d13          	addi	s10,s11,1
1c00884a:	03098513          	addi	a0,s3,48
1c00884e:	85e2                	mv	a1,s8
1c008850:	8b6a                	mv	s6,s10
1c008852:	3d29                	jal	1c00866c <strchr>
1c008854:	f971                	bnez	a0,1c008828 <pos_libc_prf+0xca>
1c008856:	02a00613          	li	a2,42
1c00885a:	10cc0863          	beq	s8,a2,1c00896a <pos_libc_prf+0x20c>
1c00885e:	fd0c0613          	addi	a2,s8,-48
1c008862:	45a5                	li	a1,9
1c008864:	4401                	li	s0,0
1c008866:	0ec5f263          	bleu	a2,a1,1c00894a <pos_libc_prf+0x1ec>
1c00886a:	02e00713          	li	a4,46
1c00886e:	5bfd                	li	s7,-1
1c008870:	14ec0563          	beq	s8,a4,1c0089ba <pos_libc_prf+0x25c>
1c008874:	1c000537          	lui	a0,0x1c000
1c008878:	85e2                	mv	a1,s8
1c00887a:	03850513          	addi	a0,a0,56 # 1c000038 <__DTOR_END__+0x1c>
1c00887e:	33fd                	jal	1c00866c <strchr>
1c008880:	8dda                	mv	s11,s6
1c008882:	c509                	beqz	a0,1c00888c <pos_libc_prf+0x12e>
1c008884:	000b4c03          	lbu	s8,0(s6)
1c008888:	001b0d93          	addi	s11,s6,1
1c00888c:	06700713          	li	a4,103
1c008890:	0f875b63          	ble	s8,a4,1c008986 <pos_libc_prf+0x228>
1c008894:	07000713          	li	a4,112
1c008898:	60ec0863          	beq	s8,a4,1c008ea8 <pos_libc_prf+0x74a>
1c00889c:	15875363          	ble	s8,a4,1c0089e2 <pos_libc_prf+0x284>
1c0088a0:	07500713          	li	a4,117
1c0088a4:	5cec0963          	beq	s8,a4,1c008e76 <pos_libc_prf+0x718>
1c0088a8:	07800713          	li	a4,120
1c0088ac:	4cec0b63          	beq	s8,a4,1c008d82 <pos_libc_prf+0x624>
1c0088b0:	07300713          	li	a4,115
1c0088b4:	62ec1463          	bne	s8,a4,1c008edc <pos_libc_prf+0x77e>
1c0088b8:	00092583          	lw	a1,0(s2)
1c0088bc:	00490b13          	addi	s6,s2,4
1c0088c0:	4d01                	li	s10,0
1c0088c2:	0c8450fb          	lp.setupi	x1,200,1c0088d2 <pos_libc_prf+0x174>
1c0088c6:	01a58733          	add	a4,a1,s10
1c0088ca:	00074703          	lbu	a4,0(a4)
1c0088ce:	60070d63          	beqz	a4,1c008ee8 <pos_libc_prf+0x78a>
1c0088d2:	0d05                	addi	s10,s10,1
1c0088d4:	000bc763          	bltz	s7,1c0088e2 <pos_libc_prf+0x184>
1c0088d8:	057d4d33          	p.min	s10,s10,s7
1c0088dc:	895a                	mv	s2,s6
1c0088de:	ec0d01e3          	beqz	s10,1c0087a0 <pos_libc_prf+0x42>
1c0088e2:	866a                	mv	a2,s10
1c0088e4:	1048                	addi	a0,sp,36
1c0088e6:	3331                	jal	1c0085f2 <memcpy>
1c0088e8:	895a                	mv	s2,s6
1c0088ea:	4e8d4663          	blt	s10,s0,1c008dd6 <pos_libc_prf+0x678>
1c0088ee:	846a                	mv	s0,s10
1c0088f0:	02410b13          	addi	s6,sp,36
1c0088f4:	a029                	j	1c0088fe <pos_libc_prf+0x1a0>
1c0088f6:	0b05                	addi	s6,s6,1
1c0088f8:	0a85                	addi	s5,s5,1
1c0088fa:	ea0403e3          	beqz	s0,1c0087a0 <pos_libc_prf+0x42>
1c0088fe:	000b4503          	lbu	a0,0(s6)
1c008902:	85d2                	mv	a1,s4
1c008904:	147d                	addi	s0,s0,-1
1c008906:	9482                	jalr	s1
1c008908:	fff537e3          	p.bneimm	a0,-1,1c0088f6 <pos_libc_prf+0x198>
1c00890c:	5afd                	li	s5,-1
1c00890e:	bd55                	j	1c0087c2 <pos_libc_prf+0x64>
1c008910:	ea0c09e3          	beqz	s8,1c0087c2 <pos_libc_prf+0x64>
1c008914:	02000313          	li	t1,32
1c008918:	f26c14e3          	bne	s8,t1,1c008840 <pos_libc_prf+0xe2>
1c00891c:	4685                	li	a3,1
1c00891e:	c636                	sw	a3,12(sp)
1c008920:	8dea                	mv	s11,s10
1c008922:	b705                	j	1c008842 <pos_libc_prf+0xe4>
1c008924:	4605                	li	a2,1
1c008926:	c432                	sw	a2,8(sp)
1c008928:	8dea                	mv	s11,s10
1c00892a:	bf21                	j	1c008842 <pos_libc_prf+0xe4>
1c00892c:	03000793          	li	a5,48
1c008930:	c23e                	sw	a5,4(sp)
1c008932:	8dea                	mv	s11,s10
1c008934:	b739                	j	1c008842 <pos_libc_prf+0xe4>
1c008936:	4805                	li	a6,1
1c008938:	c842                	sw	a6,16(sp)
1c00893a:	8dea                	mv	s11,s10
1c00893c:	b719                	j	1c008842 <pos_libc_prf+0xe4>
1c00893e:	4705                	li	a4,1
1c008940:	c03a                	sw	a4,0(sp)
1c008942:	8dea                	mv	s11,s10
1c008944:	bdfd                	j	1c008842 <pos_libc_prf+0xe4>
1c008946:	8dea                	mv	s11,s10
1c008948:	0d05                	addi	s10,s10,1
1c00894a:	00241793          	slli	a5,s0,0x2
1c00894e:	97a2                	add	a5,a5,s0
1c008950:	0786                	slli	a5,a5,0x1
1c008952:	97e2                	add	a5,a5,s8
1c008954:	000d4c03          	lbu	s8,0(s10)
1c008958:	fd078413          	addi	s0,a5,-48
1c00895c:	fd0c0793          	addi	a5,s8,-48
1c008960:	fef5f3e3          	bleu	a5,a1,1c008946 <pos_libc_prf+0x1e8>
1c008964:	002d8b13          	addi	s6,s11,2
1c008968:	a811                	j	1c00897c <pos_libc_prf+0x21e>
1c00896a:	00092403          	lw	s0,0(s2)
1c00896e:	0911                	addi	s2,s2,4
1c008970:	0e044263          	bltz	s0,1c008a54 <pos_libc_prf+0x2f6>
1c008974:	000d4c03          	lbu	s8,0(s10)
1c008978:	002d8b13          	addi	s6,s11,2
1c00897c:	0c800713          	li	a4,200
1c008980:	04e45433          	p.minu	s0,s0,a4
1c008984:	b5dd                	j	1c00886a <pos_libc_prf+0x10c>
1c008986:	06500713          	li	a4,101
1c00898a:	0cec5a63          	ble	a4,s8,1c008a5e <pos_libc_prf+0x300>
1c00898e:	04700713          	li	a4,71
1c008992:	3d874e63          	blt	a4,s8,1c008d6e <pos_libc_prf+0x610>
1c008996:	04500713          	li	a4,69
1c00899a:	0cec5263          	ble	a4,s8,1c008a5e <pos_libc_prf+0x300>
1c00899e:	e20c02e3          	beqz	s8,1c0087c2 <pos_libc_prf+0x64>
1c0089a2:	02500713          	li	a4,37
1c0089a6:	52ec1b63          	bne	s8,a4,1c008edc <pos_libc_prf+0x77e>
1c0089aa:	85d2                	mv	a1,s4
1c0089ac:	02500513          	li	a0,37
1c0089b0:	9482                	jalr	s1
1c0089b2:	f5f52de3          	p.beqimm	a0,-1,1c00890c <pos_libc_prf+0x1ae>
1c0089b6:	0a85                	addi	s5,s5,1
1c0089b8:	b509                	j	1c0087ba <pos_libc_prf+0x5c>
1c0089ba:	000b4783          	lbu	a5,0(s6)
1c0089be:	02a00713          	li	a4,42
1c0089c2:	001b0693          	addi	a3,s6,1
1c0089c6:	04e79c63          	bne	a5,a4,1c008a1e <pos_libc_prf+0x2c0>
1c0089ca:	00092b83          	lw	s7,0(s2)
1c0089ce:	001b4c03          	lbu	s8,1(s6)
1c0089d2:	0911                	addi	s2,s2,4
1c0089d4:	0b09                	addi	s6,s6,2
1c0089d6:	0c800713          	li	a4,200
1c0089da:	e9775de3          	ble	s7,a4,1c008874 <pos_libc_prf+0x116>
1c0089de:	5bfd                	li	s7,-1
1c0089e0:	bd51                	j	1c008874 <pos_libc_prf+0x116>
1c0089e2:	06e00713          	li	a4,110
1c0089e6:	4aec0b63          	beq	s8,a4,1c008e9c <pos_libc_prf+0x73e>
1c0089ea:	43875263          	ble	s8,a4,1c008e0e <pos_libc_prf+0x6b0>
1c0089ee:	4802                	lw	a6,0(sp)
1c0089f0:	00490b13          	addi	s6,s2,4
1c0089f4:	00092583          	lw	a1,0(s2)
1c0089f8:	0e0802e3          	beqz	a6,1c0092dc <pos_libc_prf+0xb7e>
1c0089fc:	03000793          	li	a5,48
1c008a00:	02f10223          	sb	a5,36(sp)
1c008a04:	0a0592e3          	bnez	a1,1c0092a8 <pos_libc_prf+0xb4a>
1c008a08:	020102a3          	sb	zero,37(sp)
1c008a0c:	895a                	mv	s2,s6
1c008a0e:	8d42                	mv	s10,a6
1c008a10:	edfbade3          	p.beqimm	s7,-1,1c0088ea <pos_libc_prf+0x18c>
1c008a14:	02000813          	li	a6,32
1c008a18:	4d02                	lw	s10,0(sp)
1c008a1a:	c242                	sw	a6,4(sp)
1c008a1c:	b5f9                	j	1c0088ea <pos_libc_prf+0x18c>
1c008a1e:	fd078593          	addi	a1,a5,-48
1c008a22:	4725                	li	a4,9
1c008a24:	8c3e                	mv	s8,a5
1c008a26:	4b81                	li	s7,0
1c008a28:	4625                	li	a2,9
1c008a2a:	00b77663          	bleu	a1,a4,1c008a36 <pos_libc_prf+0x2d8>
1c008a2e:	0230006f          	j	1c009250 <pos_libc_prf+0xaf2>
1c008a32:	8b36                	mv	s6,a3
1c008a34:	0685                	addi	a3,a3,1
1c008a36:	002b9793          	slli	a5,s7,0x2
1c008a3a:	97de                	add	a5,a5,s7
1c008a3c:	0786                	slli	a5,a5,0x1
1c008a3e:	97e2                	add	a5,a5,s8
1c008a40:	0006cc03          	lbu	s8,0(a3)
1c008a44:	fd078b93          	addi	s7,a5,-48
1c008a48:	fd0c0793          	addi	a5,s8,-48
1c008a4c:	fef673e3          	bleu	a5,a2,1c008a32 <pos_libc_prf+0x2d4>
1c008a50:	0b09                	addi	s6,s6,2
1c008a52:	b751                	j	1c0089d6 <pos_libc_prf+0x278>
1c008a54:	4705                	li	a4,1
1c008a56:	40800433          	neg	s0,s0
1c008a5a:	c83a                	sw	a4,16(sp)
1c008a5c:	bf21                	j	1c008974 <pos_libc_prf+0x216>
1c008a5e:	091d                	addi	s2,s2,7
1c008a60:	c4093933          	p.bclr	s2,s2,2,0
1c008a64:	00092603          	lw	a2,0(s2)
1c008a68:	00492583          	lw	a1,4(s2)
1c008a6c:	7ff00693          	li	a3,2047
1c008a70:	01565513          	srli	a0,a2,0x15
1c008a74:	0145d313          	srli	t1,a1,0x14
1c008a78:	00b59713          	slli	a4,a1,0xb
1c008a7c:	8f49                	or	a4,a4,a0
1c008a7e:	e8b33333          	p.bclr	t1,t1,20,11
1c008a82:	0921                	addi	s2,s2,8
1c008a84:	062e                	slli	a2,a2,0xb
1c008a86:	c1f73733          	p.bclr	a4,a4,0,31
1c008a8a:	04d30be3          	beq	t1,a3,1c0092e0 <pos_libc_prf+0xb82>
1c008a8e:	04600693          	li	a3,70
1c008a92:	00dc1463          	bne	s8,a3,1c008a9a <pos_libc_prf+0x33c>
1c008a96:	06600c13          	li	s8,102
1c008a9a:	00c366b3          	or	a3,t1,a2
1c008a9e:	8ed9                	or	a3,a3,a4
1c008aa0:	7e068463          	beqz	a3,1c009288 <pos_libc_prf+0xb2a>
1c008aa4:	c0230313          	addi	t1,t1,-1022
1c008aa8:	c1f74733          	p.bset	a4,a4,0,31
1c008aac:	2005cae3          	bltz	a1,1c0094c0 <pos_libc_prf+0xd62>
1c008ab0:	47a2                	lw	a5,8(sp)
1c008ab2:	1e0789e3          	beqz	a5,1c0094a4 <pos_libc_prf+0xd46>
1c008ab6:	02b00693          	li	a3,43
1c008aba:	02d10223          	sb	a3,36(sp)
1c008abe:	02510b13          	addi	s6,sp,37
1c008ac2:	02410c93          	addi	s9,sp,36
1c008ac6:	56f9                	li	a3,-2
1c008ac8:	4381                	li	t2,0
1c008aca:	06d35763          	ble	a3,t1,1c008b38 <pos_libc_prf+0x3da>
1c008ace:	33333537          	lui	a0,0x33333
1c008ad2:	80000837          	lui	a6,0x80000
1c008ad6:	33250513          	addi	a0,a0,818 # 33333332 <ne16_weights_streamin+0x1731da72>
1c008ada:	fff84813          	not	a6,a6
1c008ade:	58f9                	li	a7,-2
1c008ae0:	a011                	j	1c008ae4 <pos_libc_prf+0x386>
1c008ae2:	833e                	mv	t1,a5
1c008ae4:	01f71593          	slli	a1,a4,0x1f
1c008ae8:	00165693          	srli	a3,a2,0x1
1c008aec:	fc1637b3          	p.bclr	a5,a2,30,1
1c008af0:	8ecd                	or	a3,a3,a1
1c008af2:	00d78633          	add	a2,a5,a3
1c008af6:	00f637b3          	sltu	a5,a2,a5
1c008afa:	8305                	srli	a4,a4,0x1
1c008afc:	973e                	add	a4,a4,a5
1c008afe:	00130793          	addi	a5,t1,1
1c008b02:	fee560e3          	bltu	a0,a4,1c008ae2 <pos_libc_prf+0x384>
1c008b06:	00261593          	slli	a1,a2,0x2
1c008b0a:	01e65e13          	srli	t3,a2,0x1e
1c008b0e:	00271693          	slli	a3,a4,0x2
1c008b12:	962e                	add	a2,a2,a1
1c008b14:	00de66b3          	or	a3,t3,a3
1c008b18:	9736                	add	a4,a4,a3
1c008b1a:	00b635b3          	sltu	a1,a2,a1
1c008b1e:	972e                	add	a4,a4,a1
1c008b20:	01f65693          	srli	a3,a2,0x1f
1c008b24:	0309                	addi	t1,t1,2
1c008b26:	13fd                	addi	t2,t2,-1
1c008b28:	01071663          	bne	a4,a6,1c008b34 <pos_libc_prf+0x3d6>
1c008b2c:	0606                	slli	a2,a2,0x1
1c008b2e:	fc16c733          	p.bset	a4,a3,30,1
1c008b32:	833e                	mv	t1,a5
1c008b34:	fb1348e3          	blt	t1,a7,1c008ae4 <pos_libc_prf+0x386>
1c008b38:	0e605763          	blez	t1,1c008c26 <pos_libc_prf+0x4c8>
1c008b3c:	80000f37          	lui	t5,0x80000
1c008b40:	4d15                	li	s10,5
1c008b42:	ffff4f13          	not	t5,t5
1c008b46:	00260513          	addi	a0,a2,2
1c008b4a:	00c536b3          	sltu	a3,a0,a2
1c008b4e:	00e688b3          	add	a7,a3,a4
1c008b52:	02000793          	li	a5,32
1c008b56:	00189593          	slli	a1,a7,0x1
1c008b5a:	fff7ce93          	not	t4,a5
1c008b5e:	00f556b3          	srl	a3,a0,a5
1c008b62:	01d595b3          	sll	a1,a1,t4
1c008b66:	0207fe13          	andi	t3,a5,32
1c008b6a:	4601                	li	a2,0
1c008b6c:	4701                	li	a4,0
1c008b6e:	4801                	li	a6,0
1c008b70:	8ecd                	or	a3,a3,a1
1c008b72:	000e0463          	beqz	t3,1c008b7a <pos_libc_prf+0x41c>
1c008b76:	00f8d6b3          	srl	a3,a7,a5
1c008b7a:	fff7ce93          	not	t4,a5
1c008b7e:	03a6d6b3          	divu	a3,a3,s10
1c008b82:	060e0d63          	beqz	t3,1c008bfc <pos_libc_prf+0x49e>
1c008b86:	4581                	li	a1,0
1c008b88:	00f69eb3          	sll	t4,a3,a5
1c008b8c:	00259693          	slli	a3,a1,0x2
1c008b90:	01e5df93          	srli	t6,a1,0x1e
1c008b94:	002e9793          	slli	a5,t4,0x2
1c008b98:	00b68e33          	add	t3,a3,a1
1c008b9c:	00ffe7b3          	or	a5,t6,a5
1c008ba0:	95b2                	add	a1,a1,a2
1c008ba2:	97f6                	add	a5,a5,t4
1c008ba4:	00de36b3          	sltu	a3,t3,a3
1c008ba8:	00c5bfb3          	sltu	t6,a1,a2
1c008bac:	1c001637          	lui	a2,0x1c001
1c008bb0:	96be                	add	a3,a3,a5
1c008bb2:	a2060613          	addi	a2,a2,-1504 # 1c000a20 <shifts.1764>
1c008bb6:	01d707b3          	add	a5,a4,t4
1c008bba:	41c50e33          	sub	t3,a0,t3
1c008bbe:	0805                	addi	a6,a6,1
1c008bc0:	010602b3          	add	t0,a2,a6
1c008bc4:	01c53eb3          	sltu	t4,a0,t3
1c008bc8:	40d886b3          	sub	a3,a7,a3
1c008bcc:	862e                	mv	a2,a1
1c008bce:	00ff8733          	add	a4,t6,a5
1c008bd2:	02382c63          	p.beqimm	a6,3,1c008c0a <pos_libc_prf+0x4ac>
1c008bd6:	0002c783          	lbu	a5,0(t0)
1c008bda:	41d688b3          	sub	a7,a3,t4
1c008bde:	8572                	mv	a0,t3
1c008be0:	00189593          	slli	a1,a7,0x1
1c008be4:	fff7ce93          	not	t4,a5
1c008be8:	00f556b3          	srl	a3,a0,a5
1c008bec:	01d595b3          	sll	a1,a1,t4
1c008bf0:	0207fe13          	andi	t3,a5,32
1c008bf4:	8ecd                	or	a3,a3,a1
1c008bf6:	f80e02e3          	beqz	t3,1c008b7a <pos_libc_prf+0x41c>
1c008bfa:	bfb5                	j	1c008b76 <pos_libc_prf+0x418>
1c008bfc:	0016de13          	srli	t3,a3,0x1
1c008c00:	00f695b3          	sll	a1,a3,a5
1c008c04:	01de5eb3          	srl	t4,t3,t4
1c008c08:	b751                	j	1c008b8c <pos_libc_prf+0x42e>
1c008c0a:	137d                	addi	t1,t1,-1
1c008c0c:	0385                	addi	t2,t2,1
1c008c0e:	00ef6a63          	bltu	t5,a4,1c008c22 <pos_libc_prf+0x4c4>
1c008c12:	01f65793          	srli	a5,a2,0x1f
1c008c16:	0706                	slli	a4,a4,0x1
1c008c18:	8f5d                	or	a4,a4,a5
1c008c1a:	0606                	slli	a2,a2,0x1
1c008c1c:	137d                	addi	t1,t1,-1
1c008c1e:	feef7ae3          	bleu	a4,t5,1c008c12 <pos_libc_prf+0x4b4>
1c008c22:	f26042e3          	bgtz	t1,1c008b46 <pos_libc_prf+0x3e8>
1c008c26:	4691                	li	a3,4
1c008c28:	40668333          	sub	t1,a3,t1
1c008c2c:	011340fb          	lp.setup	x1,t1,1c008c4e <pos_libc_prf+0x4f0>
1c008c30:	01f71693          	slli	a3,a4,0x1f
1c008c34:	00165793          	srli	a5,a2,0x1
1c008c38:	8fd5                	or	a5,a5,a3
1c008c3a:	fc163633          	p.bclr	a2,a2,30,1
1c008c3e:	00f60d33          	add	s10,a2,a5
1c008c42:	8305                	srli	a4,a4,0x1
1c008c44:	00cd3633          	sltu	a2,s10,a2
1c008c48:	00e607b3          	add	a5,a2,a4
1c008c4c:	873e                	mv	a4,a5
1c008c4e:	866a                	mv	a2,s10
1c008c50:	ce3e                	sw	a5,28(sp)
1c008c52:	06700713          	li	a4,103
1c008c56:	6c0bc263          	bltz	s7,1c00931a <pos_libc_prf+0xbbc>
1c008c5a:	5eec0e63          	beq	s8,a4,1c009256 <pos_libc_prf+0xaf8>
1c008c5e:	04700713          	li	a4,71
1c008c62:	5eec0a63          	beq	s8,a4,1c009256 <pos_libc_prf+0xaf8>
1c008c66:	06600713          	li	a4,102
1c008c6a:	28ec0c63          	beq	s8,a4,1c008f02 <pos_libc_prf+0x7a4>
1c008c6e:	001b8293          	addi	t0,s7,1
1c008c72:	4341                	li	t1,16
1c008c74:	0462c2b3          	p.min	t0,t0,t1
1c008c78:	12fd                	addi	t0,t0,-1
1c008c7a:	cc02                	sw	zero,24(sp)
1c008c7c:	001b0713          	addi	a4,s6,1
1c008c80:	ca3a                	sw	a4,20(sp)
1c008c82:	853a                	mv	a0,a4
1c008c84:	4701                	li	a4,0
1c008c86:	080006b7          	lui	a3,0x8000
1c008c8a:	4795                	li	a5,5
1c008c8c:	00270e13          	addi	t3,a4,2
1c008c90:	00ee3733          	sltu	a4,t3,a4
1c008c94:	02000893          	li	a7,32
1c008c98:	9736                	add	a4,a4,a3
1c008c9a:	00171593          	slli	a1,a4,0x1
1c008c9e:	fff8cf13          	not	t5,a7
1c008ca2:	011e56b3          	srl	a3,t3,a7
1c008ca6:	01e595b3          	sll	a1,a1,t5
1c008caa:	0208f813          	andi	a6,a7,32
1c008cae:	4301                	li	t1,0
1c008cb0:	4601                	li	a2,0
1c008cb2:	4e81                	li	t4,0
1c008cb4:	8ecd                	or	a3,a3,a1
1c008cb6:	00080463          	beqz	a6,1c008cbe <pos_libc_prf+0x560>
1c008cba:	011756b3          	srl	a3,a4,a7
1c008cbe:	fff8cf13          	not	t5,a7
1c008cc2:	02f6d6b3          	divu	a3,a3,a5
1c008cc6:	06080a63          	beqz	a6,1c008d3a <pos_libc_prf+0x5dc>
1c008cca:	4581                	li	a1,0
1c008ccc:	011698b3          	sll	a7,a3,a7
1c008cd0:	00259f13          	slli	t5,a1,0x2
1c008cd4:	01e5df93          	srli	t6,a1,0x1e
1c008cd8:	00289693          	slli	a3,a7,0x2
1c008cdc:	00bf0833          	add	a6,t5,a1
1c008ce0:	00dfe6b3          	or	a3,t6,a3
1c008ce4:	01e83f33          	sltu	t5,a6,t5
1c008ce8:	959a                	add	a1,a1,t1
1c008cea:	96c6                	add	a3,a3,a7
1c008cec:	96fa                	add	a3,a3,t5
1c008cee:	0065bf33          	sltu	t5,a1,t1
1c008cf2:	1c001337          	lui	t1,0x1c001
1c008cf6:	9646                	add	a2,a2,a7
1c008cf8:	a2030313          	addi	t1,t1,-1504 # 1c000a20 <shifts.1764>
1c008cfc:	410e0833          	sub	a6,t3,a6
1c008d00:	0e85                	addi	t4,t4,1
1c008d02:	01d30fb3          	add	t6,t1,t4
1c008d06:	010e38b3          	sltu	a7,t3,a6
1c008d0a:	8f15                	sub	a4,a4,a3
1c008d0c:	832e                	mv	t1,a1
1c008d0e:	967a                	add	a2,a2,t5
1c008d10:	023eac63          	p.beqimm	t4,3,1c008d48 <pos_libc_prf+0x5ea>
1c008d14:	41170733          	sub	a4,a4,a7
1c008d18:	000fc883          	lbu	a7,0(t6)
1c008d1c:	8e42                	mv	t3,a6
1c008d1e:	00171593          	slli	a1,a4,0x1
1c008d22:	fff8cf13          	not	t5,a7
1c008d26:	011e56b3          	srl	a3,t3,a7
1c008d2a:	01e595b3          	sll	a1,a1,t5
1c008d2e:	0208f813          	andi	a6,a7,32
1c008d32:	8ecd                	or	a3,a3,a1
1c008d34:	f80805e3          	beqz	a6,1c008cbe <pos_libc_prf+0x560>
1c008d38:	b749                	j	1c008cba <pos_libc_prf+0x55c>
1c008d3a:	0016d813          	srli	a6,a3,0x1
1c008d3e:	011695b3          	sll	a1,a3,a7
1c008d42:	01e858b3          	srl	a7,a6,t5
1c008d46:	b769                	j	1c008cd0 <pos_libc_prf+0x572>
1c008d48:	01f61693          	slli	a3,a2,0x1f
1c008d4c:	0015d713          	srli	a4,a1,0x1
1c008d50:	fc15b333          	p.bclr	t1,a1,30,1
1c008d54:	8f55                	or	a4,a4,a3
1c008d56:	971a                	add	a4,a4,t1
1c008d58:	00165693          	srli	a3,a2,0x1
1c008d5c:	00673333          	sltu	t1,a4,t1
1c008d60:	969a                	add	a3,a3,t1
1c008d62:	fff28613          	addi	a2,t0,-1
1c008d66:	1c028263          	beqz	t0,1c008f2a <pos_libc_prf+0x7cc>
1c008d6a:	82b2                	mv	t0,a2
1c008d6c:	b705                	j	1c008c8c <pos_libc_prf+0x52e>
1c008d6e:	06300713          	li	a4,99
1c008d72:	0eec0963          	beq	s8,a4,1c008e64 <pos_libc_prf+0x706>
1c008d76:	0b874063          	blt	a4,s8,1c008e16 <pos_libc_prf+0x6b8>
1c008d7a:	05800713          	li	a4,88
1c008d7e:	14ec1f63          	bne	s8,a4,1c008edc <pos_libc_prf+0x77e>
1c008d82:	4702                	lw	a4,0(sp)
1c008d84:	00490b13          	addi	s6,s2,4
1c008d88:	00092583          	lw	a1,0(s2)
1c008d8c:	44070063          	beqz	a4,1c0091cc <pos_libc_prf+0xa6e>
1c008d90:	7761                	lui	a4,0xffff8
1c008d92:	83074713          	xori	a4,a4,-2000
1c008d96:	86de                	mv	a3,s7
1c008d98:	4641                	li	a2,16
1c008d9a:	02610513          	addi	a0,sp,38
1c008d9e:	02e11223          	sh	a4,36(sp)
1c008da2:	32a1                	jal	1c0086ea <pos_libc_to_x>
1c008da4:	05800713          	li	a4,88
1c008da8:	8d2a                	mv	s10,a0
1c008daa:	78ec0e63          	beq	s8,a4,1c009546 <pos_libc_prf+0xde8>
1c008dae:	4309                	li	t1,2
1c008db0:	00250d13          	addi	s10,a0,2
1c008db4:	c01a                	sw	t1,0(sp)
1c008db6:	0c800793          	li	a5,200
1c008dba:	49fba763          	p.beqimm	s7,-1,1c009248 <pos_libc_prf+0xaea>
1c008dbe:	b5a7c7e3          	blt	a5,s10,1c00890c <pos_libc_prf+0x1ae>
1c008dc2:	02000313          	li	t1,32
1c008dc6:	895a                	mv	s2,s6
1c008dc8:	c21a                	sw	t1,4(sp)
1c008dca:	008d4763          	blt	s10,s0,1c008dd8 <pos_libc_prf+0x67a>
1c008dce:	846a                	mv	s0,s10
1c008dd0:	b20410e3          	bnez	s0,1c0088f0 <pos_libc_prf+0x192>
1c008dd4:	b2f1                	j	1c0087a0 <pos_libc_prf+0x42>
1c008dd6:	c002                	sw	zero,0(sp)
1c008dd8:	4342                	lw	t1,16(sp)
1c008dda:	38030463          	beqz	t1,1c009162 <pos_libc_prf+0xa04>
1c008dde:	001d0713          	addi	a4,s10,1
1c008de2:	02000693          	li	a3,32
1c008de6:	41a407b3          	sub	a5,s0,s10
1c008dea:	76e44563          	blt	s0,a4,1c009554 <pos_libc_prf+0xdf6>
1c008dee:	80000737          	lui	a4,0x80000
1c008df2:	76e40163          	beq	s0,a4,1c009554 <pos_libc_prf+0xdf6>
1c008df6:	0087c0fb          	lp.setup	x1,a5,1c008e06 <pos_libc_prf+0x6a8>
1c008dfa:	0f010813          	addi	a6,sp,240
1c008dfe:	01a80733          	add	a4,a6,s10
1c008e02:	f2d70a23          	sb	a3,-204(a4) # 7fffff34 <pulp__FC+0x7fffff35>
1c008e06:	0d05                	addi	s10,s10,1
1c008e08:	ae0414e3          	bnez	s0,1c0088f0 <pos_libc_prf+0x192>
1c008e0c:	ba51                	j	1c0087a0 <pos_libc_prf+0x42>
1c008e0e:	06900713          	li	a4,105
1c008e12:	0cec1563          	bne	s8,a4,1c008edc <pos_libc_prf+0x77e>
1c008e16:	00092583          	lw	a1,0(s2)
1c008e1a:	02410c93          	addi	s9,sp,36
1c008e1e:	0911                	addi	s2,s2,4
1c008e20:	3e05cc63          	bltz	a1,1c009218 <pos_libc_prf+0xaba>
1c008e24:	4322                	lw	t1,8(sp)
1c008e26:	4a031663          	bnez	t1,1c0092d2 <pos_libc_prf+0xb74>
1c008e2a:	4632                	lw	a2,12(sp)
1c008e2c:	62060063          	beqz	a2,1c00944c <pos_libc_prf+0xcee>
1c008e30:	02000793          	li	a5,32
1c008e34:	02f10223          	sb	a5,36(sp)
1c008e38:	86de                	mv	a3,s7
1c008e3a:	4629                	li	a2,10
1c008e3c:	02510513          	addi	a0,sp,37
1c008e40:	306d                	jal	1c0086ea <pos_libc_to_x>
1c008e42:	02510313          	addi	t1,sp,37
1c008e46:	951a                	add	a0,a0,t1
1c008e48:	4705                	li	a4,1
1c008e4a:	41950d33          	sub	s10,a0,s9
1c008e4e:	c03a                	sw	a4,0(sp)
1c008e50:	0bfba363          	p.beqimm	s7,-1,1c008ef6 <pos_libc_prf+0x798>
1c008e54:	0c800793          	li	a5,200
1c008e58:	aba7cae3          	blt	a5,s10,1c00890c <pos_libc_prf+0x1ae>
1c008e5c:	02000713          	li	a4,32
1c008e60:	c23a                	sw	a4,4(sp)
1c008e62:	b7a5                	j	1c008dca <pos_libc_prf+0x66c>
1c008e64:	00092783          	lw	a5,0(s2)
1c008e68:	020102a3          	sb	zero,37(sp)
1c008e6c:	0911                	addi	s2,s2,4
1c008e6e:	02f10223          	sb	a5,36(sp)
1c008e72:	4d05                	li	s10,1
1c008e74:	bc9d                	j	1c0088ea <pos_libc_prf+0x18c>
1c008e76:	00092583          	lw	a1,0(s2)
1c008e7a:	86de                	mv	a3,s7
1c008e7c:	4629                	li	a2,10
1c008e7e:	1048                	addi	a0,sp,36
1c008e80:	30ad                	jal	1c0086ea <pos_libc_to_x>
1c008e82:	8d2a                	mv	s10,a0
1c008e84:	0911                	addi	s2,s2,4
1c008e86:	0c800793          	li	a5,200
1c008e8a:	07fba263          	p.beqimm	s7,-1,1c008eee <pos_libc_prf+0x790>
1c008e8e:	a6a7cfe3          	blt	a5,a0,1c00890c <pos_libc_prf+0x1ae>
1c008e92:	02000713          	li	a4,32
1c008e96:	c002                	sw	zero,0(sp)
1c008e98:	c23a                	sw	a4,4(sp)
1c008e9a:	bf05                	j	1c008dca <pos_libc_prf+0x66c>
1c008e9c:	00092783          	lw	a5,0(s2)
1c008ea0:	0911                	addi	s2,s2,4
1c008ea2:	0157a023          	sw	s5,0(a5)
1c008ea6:	b8ed                	j	1c0087a0 <pos_libc_prf+0x42>
1c008ea8:	00092583          	lw	a1,0(s2)
1c008eac:	77e1                	lui	a5,0xffff8
1c008eae:	8307c793          	xori	a5,a5,-2000
1c008eb2:	46a1                	li	a3,8
1c008eb4:	4641                	li	a2,16
1c008eb6:	02610513          	addi	a0,sp,38
1c008eba:	02f11223          	sh	a5,36(sp)
1c008ebe:	3035                	jal	1c0086ea <pos_libc_to_x>
1c008ec0:	0911                	addi	s2,s2,4
1c008ec2:	00250d13          	addi	s10,a0,2
1c008ec6:	0c800793          	li	a5,200
1c008eca:	03fba263          	p.beqimm	s7,-1,1c008eee <pos_libc_prf+0x790>
1c008ece:	a3a7cfe3          	blt	a5,s10,1c00890c <pos_libc_prf+0x1ae>
1c008ed2:	02000793          	li	a5,32
1c008ed6:	c002                	sw	zero,0(sp)
1c008ed8:	c23e                	sw	a5,4(sp)
1c008eda:	bdc5                	j	1c008dca <pos_libc_prf+0x66c>
1c008edc:	0c800713          	li	a4,200
1c008ee0:	8d8750e3          	ble	s8,a4,1c0087a0 <pos_libc_prf+0x42>
1c008ee4:	5afd                	li	s5,-1
1c008ee6:	b8f1                	j	1c0087c2 <pos_libc_prf+0x64>
1c008ee8:	9e0bd8e3          	bgez	s7,1c0088d8 <pos_libc_prf+0x17a>
1c008eec:	bac5                	j	1c0088dc <pos_libc_prf+0x17e>
1c008eee:	a1a7cfe3          	blt	a5,s10,1c00890c <pos_libc_prf+0x1ae>
1c008ef2:	c002                	sw	zero,0(sp)
1c008ef4:	bdd9                	j	1c008dca <pos_libc_prf+0x66c>
1c008ef6:	0c800793          	li	a5,200
1c008efa:	eda7d8e3          	ble	s10,a5,1c008dca <pos_libc_prf+0x66c>
1c008efe:	5afd                	li	s5,-1
1c008f00:	b0c9                	j	1c0087c2 <pos_libc_prf+0x64>
1c008f02:	cc02                	sw	zero,24(sp)
1c008f04:	001b0593          	addi	a1,s6,1
1c008f08:	ca2e                	sw	a1,20(sp)
1c008f0a:	017387b3          	add	a5,t2,s7
1c008f0e:	852e                	mv	a0,a1
1c008f10:	6007c263          	bltz	a5,1c009514 <pos_libc_prf+0xdb6>
1c008f14:	4641                	li	a2,16
1c008f16:	04c7c2b3          	p.min	t0,a5,a2
1c008f1a:	12fd                	addi	t0,t0,-1
1c008f1c:	06600c13          	li	s8,102
1c008f20:	d60792e3          	bnez	a5,1c008c84 <pos_libc_prf+0x526>
1c008f24:	4701                	li	a4,0
1c008f26:	080006b7          	lui	a3,0x8000
1c008f2a:	45f2                	lw	a1,28(sp)
1c008f2c:	976a                	add	a4,a4,s10
1c008f2e:	01a73f33          	sltu	t5,a4,s10
1c008f32:	96ae                	add	a3,a3,a1
1c008f34:	96fa                	add	a3,a3,t5
1c008f36:	f606b633          	p.bclr	a2,a3,27,0
1c008f3a:	8d3a                	mv	s10,a4
1c008f3c:	ca71                	beqz	a2,1c009010 <pos_libc_prf+0x8b2>
1c008f3e:	002d0e93          	addi	t4,s10,2
1c008f42:	01aebd33          	sltu	s10,t4,s10
1c008f46:	00dd0f33          	add	t5,s10,a3
1c008f4a:	02000813          	li	a6,32
1c008f4e:	001f1793          	slli	a5,t5,0x1
1c008f52:	fff84693          	not	a3,a6
1c008f56:	010ed733          	srl	a4,t4,a6
1c008f5a:	00d797b3          	sll	a5,a5,a3
1c008f5e:	02087613          	andi	a2,a6,32
1c008f62:	4e01                	li	t3,0
1c008f64:	4281                	li	t0,0
1c008f66:	4f81                	li	t6,0
1c008f68:	4d15                	li	s10,5
1c008f6a:	8f5d                	or	a4,a4,a5
1c008f6c:	c219                	beqz	a2,1c008f72 <pos_libc_prf+0x814>
1c008f6e:	010f5733          	srl	a4,t5,a6
1c008f72:	fff84793          	not	a5,a6
1c008f76:	03a75733          	divu	a4,a4,s10
1c008f7a:	24060263          	beqz	a2,1c0091be <pos_libc_prf+0xa60>
1c008f7e:	4681                	li	a3,0
1c008f80:	01071733          	sll	a4,a4,a6
1c008f84:	00269793          	slli	a5,a3,0x2
1c008f88:	01e6d813          	srli	a6,a3,0x1e
1c008f8c:	00271593          	slli	a1,a4,0x2
1c008f90:	00d78633          	add	a2,a5,a3
1c008f94:	00b865b3          	or	a1,a6,a1
1c008f98:	95ba                	add	a1,a1,a4
1c008f9a:	00f637b3          	sltu	a5,a2,a5
1c008f9e:	96f2                	add	a3,a3,t3
1c008fa0:	1c001337          	lui	t1,0x1c001
1c008fa4:	97ae                	add	a5,a5,a1
1c008fa6:	01c6b833          	sltu	a6,a3,t3
1c008faa:	40ce8633          	sub	a2,t4,a2
1c008fae:	9716                	add	a4,a4,t0
1c008fb0:	0f85                	addi	t6,t6,1
1c008fb2:	a2030313          	addi	t1,t1,-1504 # 1c000a20 <shifts.1764>
1c008fb6:	00ceb8b3          	sltu	a7,t4,a2
1c008fba:	40ff07b3          	sub	a5,t5,a5
1c008fbe:	01f305b3          	add	a1,t1,t6
1c008fc2:	8e36                	mv	t3,a3
1c008fc4:	00e802b3          	add	t0,a6,a4
1c008fc8:	023fa463          	p.beqimm	t6,3,1c008ff0 <pos_libc_prf+0x892>
1c008fcc:	0005c803          	lbu	a6,0(a1)
1c008fd0:	41178f33          	sub	t5,a5,a7
1c008fd4:	8eb2                	mv	t4,a2
1c008fd6:	001f1793          	slli	a5,t5,0x1
1c008fda:	fff84693          	not	a3,a6
1c008fde:	010ed733          	srl	a4,t4,a6
1c008fe2:	00d797b3          	sll	a5,a5,a3
1c008fe6:	02087613          	andi	a2,a6,32
1c008fea:	8f5d                	or	a4,a4,a5
1c008fec:	d259                	beqz	a2,1c008f72 <pos_libc_prf+0x814>
1c008fee:	b741                	j	1c008f6e <pos_libc_prf+0x810>
1c008ff0:	01f29693          	slli	a3,t0,0x1f
1c008ff4:	001e5713          	srli	a4,t3,0x1
1c008ff8:	8f55                	or	a4,a4,a3
1c008ffa:	fc1e3e33          	p.bclr	t3,t3,30,1
1c008ffe:	00ee0d33          	add	s10,t3,a4
1c009002:	01cd3e33          	sltu	t3,s10,t3
1c009006:	0012d713          	srli	a4,t0,0x1
1c00900a:	00ee06b3          	add	a3,t3,a4
1c00900e:	0385                	addi	t2,t2,1
1c009010:	06600713          	li	a4,102
1c009014:	34ec0563          	beq	s8,a4,1c00935e <pos_libc_prf+0xc00>
1c009018:	002d1713          	slli	a4,s10,0x2
1c00901c:	01ed5613          	srli	a2,s10,0x1e
1c009020:	00269813          	slli	a6,a3,0x2
1c009024:	9d3a                	add	s10,s10,a4
1c009026:	01066833          	or	a6,a2,a6
1c00902a:	00ed35b3          	sltu	a1,s10,a4
1c00902e:	96c2                	add	a3,a3,a6
1c009030:	95b6                	add	a1,a1,a3
1c009032:	01fd5713          	srli	a4,s10,0x1f
1c009036:	0586                	slli	a1,a1,0x1
1c009038:	8dd9                	or	a1,a1,a4
1c00903a:	01c5d713          	srli	a4,a1,0x1c
1c00903e:	03070693          	addi	a3,a4,48
1c009042:	00e03733          	snez	a4,a4
1c009046:	40e383b3          	sub	t2,t2,a4
1c00904a:	4702                	lw	a4,0(sp)
1c00904c:	10000337          	lui	t1,0x10000
1c009050:	137d                	addi	t1,t1,-1
1c009052:	00db0023          	sb	a3,0(s6)
1c009056:	001d1613          	slli	a2,s10,0x1
1c00905a:	0065f5b3          	and	a1,a1,t1
1c00905e:	2e070563          	beqz	a4,1c009348 <pos_libc_prf+0xbea>
1c009062:	02e00713          	li	a4,46
1c009066:	00eb00a3          	sb	a4,1(s6)
1c00906a:	002b0813          	addi	a6,s6,2
1c00906e:	fffb8893          	addi	a7,s7,-1
1c009072:	4e0b8b63          	beqz	s7,1c009568 <pos_libc_prf+0xe0a>
1c009076:	4e3d                	li	t3,15
1c009078:	a011                	j	1c00907c <pos_libc_prf+0x91e>
1c00907a:	88be                	mv	a7,a5
1c00907c:	00261793          	slli	a5,a2,0x2
1c009080:	01e65693          	srli	a3,a2,0x1e
1c009084:	00259713          	slli	a4,a1,0x2
1c009088:	00c78333          	add	t1,a5,a2
1c00908c:	8f55                	or	a4,a4,a3
1c00908e:	972e                	add	a4,a4,a1
1c009090:	00f337b3          	sltu	a5,t1,a5
1c009094:	97ba                	add	a5,a5,a4
1c009096:	0786                	slli	a5,a5,0x1
1c009098:	01f35713          	srli	a4,t1,0x1f
1c00909c:	8fd9                	or	a5,a5,a4
1c00909e:	01c7d693          	srli	a3,a5,0x1c
1c0090a2:	03000713          	li	a4,48
1c0090a6:	00180513          	addi	a0,a6,1 # 80000001 <pulp__FC+0x80000002>
1c0090aa:	01c05c63          	blez	t3,1c0090c2 <pos_libc_prf+0x964>
1c0090ae:	00131613          	slli	a2,t1,0x1
1c0090b2:	10000337          	lui	t1,0x10000
1c0090b6:	137d                	addi	t1,t1,-1
1c0090b8:	03068713          	addi	a4,a3,48 # 8000030 <__l1_heap_size+0x7fd2184>
1c0090bc:	1e7d                	addi	t3,t3,-1
1c0090be:	0067f5b3          	and	a1,a5,t1
1c0090c2:	00e80023          	sb	a4,0(a6)
1c0090c6:	fff88793          	addi	a5,a7,-1
1c0090ca:	882a                	mv	a6,a0
1c0090cc:	fb1047e3          	bgtz	a7,1c00907a <pos_libc_prf+0x91c>
1c0090d0:	45e2                	lw	a1,24(sp)
1c0090d2:	e9a5                	bnez	a1,1c009142 <pos_libc_prf+0x9e4>
1c0090d4:	c05c3733          	p.bclr	a4,s8,0,5
1c0090d8:	04500693          	li	a3,69
1c0090dc:	02d71963          	bne	a4,a3,1c00910e <pos_libc_prf+0x9b0>
1c0090e0:	87e2                	mv	a5,s8
1c0090e2:	00f50023          	sb	a5,0(a0)
1c0090e6:	3403cc63          	bltz	t2,1c00943e <pos_libc_prf+0xce0>
1c0090ea:	02b00793          	li	a5,43
1c0090ee:	00f500a3          	sb	a5,1(a0)
1c0090f2:	47a9                	li	a5,10
1c0090f4:	02f3c733          	div	a4,t2,a5
1c0090f8:	0511                	addi	a0,a0,4
1c0090fa:	02f3e7b3          	rem	a5,t2,a5
1c0090fe:	03070713          	addi	a4,a4,48
1c009102:	fee50f23          	sb	a4,-2(a0)
1c009106:	03078793          	addi	a5,a5,48 # ffff8030 <pulp__FC+0xffff8031>
1c00910a:	fef50fa3          	sb	a5,-1(a0)
1c00910e:	00050023          	sb	zero,0(a0)
1c009112:	41950d33          	sub	s10,a0,s9
1c009116:	4722                	lw	a4,8(sp)
1c009118:	47b2                	lw	a5,12(sp)
1c00911a:	8f5d                	or	a4,a4,a5
1c00911c:	c03a                	sw	a4,0(sp)
1c00911e:	e719                	bnez	a4,1c00912c <pos_libc_prf+0x9ce>
1c009120:	02414703          	lbu	a4,36(sp)
1c009124:	02d00793          	li	a5,45
1c009128:	dcf717e3          	bne	a4,a5,1c008ef6 <pos_libc_prf+0x798>
1c00912c:	0c800793          	li	a5,200
1c009130:	fda7ce63          	blt	a5,s10,1c00890c <pos_libc_prf+0x1ae>
1c009134:	4305                	li	t1,1
1c009136:	c01a                	sw	t1,0(sp)
1c009138:	b949                	j	1c008dca <pos_libc_prf+0x66c>
1c00913a:	47e2                	lw	a5,24(sp)
1c00913c:	dbe9                	beqz	a5,1c00910e <pos_libc_prf+0x9b0>
1c00913e:	06600c13          	li	s8,102
1c009142:	03000613          	li	a2,48
1c009146:	a011                	j	1c00914a <pos_libc_prf+0x9ec>
1c009148:	853a                	mv	a0,a4
1c00914a:	fff50713          	addi	a4,a0,-1
1c00914e:	00074683          	lbu	a3,0(a4)
1c009152:	fec68be3          	beq	a3,a2,1c009148 <pos_libc_prf+0x9ea>
1c009156:	02e00613          	li	a2,46
1c00915a:	f6c69de3          	bne	a3,a2,1c0090d4 <pos_libc_prf+0x976>
1c00915e:	853a                	mv	a0,a4
1c009160:	bf95                	j	1c0090d4 <pos_libc_prf+0x976>
1c009162:	02410c93          	addi	s9,sp,36
1c009166:	41a40b33          	sub	s6,s0,s10
1c00916a:	001d0613          	addi	a2,s10,1
1c00916e:	85e6                	mv	a1,s9
1c009170:	016c8533          	add	a0,s9,s6
1c009174:	cc6ff0ef          	jal	ra,1c00863a <memmove>
1c009178:	4312                	lw	t1,4(sp)
1c00917a:	02000793          	li	a5,32
1c00917e:	30f30c63          	beq	t1,a5,1c009496 <pos_libc_prf+0xd38>
1c009182:	4702                	lw	a4,0(sp)
1c009184:	9b3a                	add	s6,s6,a4
1c009186:	c56755e3          	ble	s6,a4,1c008dd0 <pos_libc_prf+0x672>
1c00918a:	4782                	lw	a5,0(sp)
1c00918c:	00178713          	addi	a4,a5,1
1c009190:	40fb07b3          	sub	a5,s6,a5
1c009194:	3aeb4563          	blt	s6,a4,1c00953e <pos_libc_prf+0xde0>
1c009198:	80000737          	lui	a4,0x80000
1c00919c:	3aeb0163          	beq	s6,a4,1c00953e <pos_libc_prf+0xde0>
1c0091a0:	4612                	lw	a2,4(sp)
1c0091a2:	4702                	lw	a4,0(sp)
1c0091a4:	0087c0fb          	lp.setup	x1,a5,1c0091b4 <pos_libc_prf+0xa56>
1c0091a8:	0f010813          	addi	a6,sp,240
1c0091ac:	00e806b3          	add	a3,a6,a4
1c0091b0:	f2c68a23          	sb	a2,-204(a3)
1c0091b4:	0705                	addi	a4,a4,1
1c0091b6:	f2041d63          	bnez	s0,1c0088f0 <pos_libc_prf+0x192>
1c0091ba:	de6ff06f          	j	1c0087a0 <pos_libc_prf+0x42>
1c0091be:	00175613          	srli	a2,a4,0x1
1c0091c2:	010716b3          	sll	a3,a4,a6
1c0091c6:	00f65733          	srl	a4,a2,a5
1c0091ca:	bb6d                	j	1c008f84 <pos_libc_prf+0x826>
1c0091cc:	02410c93          	addi	s9,sp,36
1c0091d0:	86de                	mv	a3,s7
1c0091d2:	4641                	li	a2,16
1c0091d4:	8566                	mv	a0,s9
1c0091d6:	d14ff0ef          	jal	ra,1c0086ea <pos_libc_to_x>
1c0091da:	05800713          	li	a4,88
1c0091de:	8d2a                	mv	s10,a0
1c0091e0:	bcec1be3          	bne	s8,a4,1c008db6 <pos_libc_prf+0x658>
1c0091e4:	02414783          	lbu	a5,36(sp)
1c0091e8:	4681                	li	a3,0
1c0091ea:	bc0786e3          	beqz	a5,1c008db6 <pos_libc_prf+0x658>
1c0091ee:	4665                	li	a2,25
1c0091f0:	f9f78713          	addi	a4,a5,-97
1c0091f4:	0ff77713          	andi	a4,a4,255
1c0091f8:	1781                	addi	a5,a5,-32
1c0091fa:	00e66463          	bltu	a2,a4,1c009202 <pos_libc_prf+0xaa4>
1c0091fe:	00fc8023          	sb	a5,0(s9)
1c009202:	0c85                	addi	s9,s9,1
1c009204:	000cc783          	lbu	a5,0(s9)
1c009208:	f7e5                	bnez	a5,1c0091f0 <pos_libc_prf+0xa92>
1c00920a:	4782                	lw	a5,0(sp)
1c00920c:	9d36                	add	s10,s10,a3
1c00920e:	ba0784e3          	beqz	a5,1c008db6 <pos_libc_prf+0x658>
1c009212:	4809                	li	a6,2
1c009214:	c042                	sw	a6,0(sp)
1c009216:	b645                	j	1c008db6 <pos_libc_prf+0x658>
1c009218:	02d00793          	li	a5,45
1c00921c:	02f10223          	sb	a5,36(sp)
1c009220:	800007b7          	lui	a5,0x80000
1c009224:	26f58b63          	beq	a1,a5,1c00949a <pos_libc_prf+0xd3c>
1c009228:	40b005b3          	neg	a1,a1
1c00922c:	86de                	mv	a3,s7
1c00922e:	4629                	li	a2,10
1c009230:	02510513          	addi	a0,sp,37
1c009234:	cb6ff0ef          	jal	ra,1c0086ea <pos_libc_to_x>
1c009238:	02510793          	addi	a5,sp,37
1c00923c:	953e                	add	a0,a0,a5
1c00923e:	4805                	li	a6,1
1c009240:	41950d33          	sub	s10,a0,s9
1c009244:	c042                	sw	a6,0(sp)
1c009246:	b129                	j	1c008e50 <pos_libc_prf+0x6f2>
1c009248:	eda7c263          	blt	a5,s10,1c00890c <pos_libc_prf+0x1ae>
1c00924c:	895a                	mv	s2,s6
1c00924e:	beb5                	j	1c008dca <pos_libc_prf+0x66c>
1c009250:	8b36                	mv	s6,a3
1c009252:	e22ff06f          	j	1c008874 <pos_libc_prf+0x116>
1c009256:	4702                	lw	a4,0(sp)
1c009258:	cc02                	sw	zero,24(sp)
1c00925a:	e701                	bnez	a4,1c009262 <pos_libc_prf+0xb04>
1c00925c:	017037b3          	snez	a5,s7
1c009260:	cc3e                	sw	a5,24(sp)
1c009262:	56f5                	li	a3,-3
1c009264:	001b8713          	addi	a4,s7,1
1c009268:	00d3c463          	blt	t2,a3,1c009270 <pos_libc_prf+0xb12>
1c00926c:	c8775ce3          	ble	t2,a4,1c008f04 <pos_libc_prf+0x7a6>
1c009270:	4841                	li	a6,16
1c009272:	05074733          	p.min	a4,a4,a6
1c009276:	06700693          	li	a3,103
1c00927a:	fff70293          	addi	t0,a4,-1 # 7fffffff <pulp__FC+0x80000000>
1c00927e:	28dc0763          	beq	s8,a3,1c00950c <pos_libc_prf+0xdae>
1c009282:	04500c13          	li	s8,69
1c009286:	badd                	j	1c008c7c <pos_libc_prf+0x51e>
1c009288:	46a2                	lw	a3,8(sp)
1c00928a:	1c068963          	beqz	a3,1c00945c <pos_libc_prf+0xcfe>
1c00928e:	02b00713          	li	a4,43
1c009292:	02e10223          	sb	a4,36(sp)
1c009296:	02510b13          	addi	s6,sp,37
1c00929a:	4381                	li	t2,0
1c00929c:	4301                	li	t1,0
1c00929e:	4601                	li	a2,0
1c0092a0:	4701                	li	a4,0
1c0092a2:	02410c93          	addi	s9,sp,36
1c0092a6:	b241                	j	1c008c26 <pos_libc_prf+0x4c8>
1c0092a8:	02510513          	addi	a0,sp,37
1c0092ac:	86de                	mv	a3,s7
1c0092ae:	4621                	li	a2,8
1c0092b0:	c3aff0ef          	jal	ra,1c0086ea <pos_libc_to_x>
1c0092b4:	4302                	lw	t1,0(sp)
1c0092b6:	0c800793          	li	a5,200
1c0092ba:	00650d33          	add	s10,a0,t1
1c0092be:	09fba063          	p.beqimm	s7,-1,1c00933e <pos_libc_prf+0xbe0>
1c0092c2:	e5a7c563          	blt	a5,s10,1c00890c <pos_libc_prf+0x1ae>
1c0092c6:	02000813          	li	a6,32
1c0092ca:	895a                	mv	s2,s6
1c0092cc:	c002                	sw	zero,0(sp)
1c0092ce:	c242                	sw	a6,4(sp)
1c0092d0:	bced                	j	1c008dca <pos_libc_prf+0x66c>
1c0092d2:	02b00793          	li	a5,43
1c0092d6:	02f10223          	sb	a5,36(sp)
1c0092da:	beb9                	j	1c008e38 <pos_libc_prf+0x6da>
1c0092dc:	1048                	addi	a0,sp,36
1c0092de:	b7f9                	j	1c0092ac <pos_libc_prf+0xb4e>
1c0092e0:	02410c93          	addi	s9,sp,36
1c0092e4:	86e6                	mv	a3,s9
1c0092e6:	2005c163          	bltz	a1,1c0094e8 <pos_libc_prf+0xd8a>
1c0092ea:	8e59                	or	a2,a2,a4
1c0092ec:	fbfc0793          	addi	a5,s8,-65
1c0092f0:	00368513          	addi	a0,a3,3
1c0092f4:	4765                	li	a4,25
1c0092f6:	18061463          	bnez	a2,1c00947e <pos_libc_prf+0xd20>
1c0092fa:	1cf76d63          	bltu	a4,a5,1c0094d4 <pos_libc_prf+0xd76>
1c0092fe:	6795                	lui	a5,0x5
1c009300:	e4978793          	addi	a5,a5,-439 # 4e49 <__cluster_text_size+0x4e49>
1c009304:	00f69023          	sh	a5,0(a3)
1c009308:	04600793          	li	a5,70
1c00930c:	00f68123          	sb	a5,2(a3)
1c009310:	000681a3          	sb	zero,3(a3)
1c009314:	41950d33          	sub	s10,a0,s9
1c009318:	bbfd                	j	1c009116 <pos_libc_prf+0x9b8>
1c00931a:	4b99                	li	s7,6
1c00931c:	94ec11e3          	bne	s8,a4,1c008c5e <pos_libc_prf+0x500>
1c009320:	4682                	lw	a3,0(sp)
1c009322:	57f5                	li	a5,-3
1c009324:	0016c693          	xori	a3,a3,1
1c009328:	cc36                	sw	a3,24(sp)
1c00932a:	1cf3dd63          	ble	a5,t2,1c009504 <pos_libc_prf+0xda6>
1c00932e:	001b0693          	addi	a3,s6,1
1c009332:	ca36                	sw	a3,20(sp)
1c009334:	8536                	mv	a0,a3
1c009336:	06500c13          	li	s8,101
1c00933a:	4299                	li	t0,6
1c00933c:	b2a1                	j	1c008c84 <pos_libc_prf+0x526>
1c00933e:	dda7c763          	blt	a5,s10,1c00890c <pos_libc_prf+0x1ae>
1c009342:	895a                	mv	s2,s6
1c009344:	c002                	sw	zero,0(sp)
1c009346:	b451                	j	1c008dca <pos_libc_prf+0x66c>
1c009348:	d80b84e3          	beqz	s7,1c0090d0 <pos_libc_prf+0x972>
1c00934c:	02e00713          	li	a4,46
1c009350:	002b0813          	addi	a6,s6,2
1c009354:	00eb00a3          	sb	a4,1(s6)
1c009358:	fffb8893          	addi	a7,s7,-1
1c00935c:	bb29                	j	1c009076 <pos_libc_prf+0x918>
1c00935e:	18705c63          	blez	t2,1c0094f6 <pos_libc_prf+0xd98>
1c009362:	4552                	lw	a0,20(sp)
1c009364:	4641                	li	a2,16
1c009366:	859e                	mv	a1,t2
1c009368:	0295c0fb          	lp.setup	x1,a1,1c0093ba <pos_libc_prf+0xc5c>
1c00936c:	002d1793          	slli	a5,s10,0x2
1c009370:	01ed5893          	srli	a7,s10,0x1e
1c009374:	00269713          	slli	a4,a3,0x2
1c009378:	01a78833          	add	a6,a5,s10
1c00937c:	00e8e733          	or	a4,a7,a4
1c009380:	9736                	add	a4,a4,a3
1c009382:	00f837b3          	sltu	a5,a6,a5
1c009386:	97ba                	add	a5,a5,a4
1c009388:	0786                	slli	a5,a5,0x1
1c00938a:	01f85713          	srli	a4,a6,0x1f
1c00938e:	8fd9                	or	a5,a5,a4
1c009390:	01c7d313          	srli	t1,a5,0x1c
1c009394:	03000893          	li	a7,48
1c009398:	872a                	mv	a4,a0
1c00939a:	00c05c63          	blez	a2,1c0093b2 <pos_libc_prf+0xc54>
1c00939e:	00181d13          	slli	s10,a6,0x1
1c0093a2:	10000837          	lui	a6,0x10000
1c0093a6:	187d                	addi	a6,a6,-1
1c0093a8:	03030893          	addi	a7,t1,48 # 10000030 <ne16_scale_shift_stride2+0xc>
1c0093ac:	167d                	addi	a2,a2,-1
1c0093ae:	0107f6b3          	and	a3,a5,a6
1c0093b2:	011b0023          	sb	a7,0(s6)
1c0093b6:	13fd                	addi	t2,t2,-1
1c0093b8:	8b2a                	mv	s6,a0
1c0093ba:	0505                	addi	a0,a0,1
1c0093bc:	4302                	lw	t1,0(sp)
1c0093be:	00031563          	bnez	t1,1c0093c8 <pos_libc_prf+0xc6a>
1c0093c2:	853a                	mv	a0,a4
1c0093c4:	d60b8be3          	beqz	s7,1c00913a <pos_libc_prf+0x9dc>
1c0093c8:	02e00793          	li	a5,46
1c0093cc:	00170513          	addi	a0,a4,1
1c0093d0:	00f70023          	sb	a5,0(a4)
1c0093d4:	03000593          	li	a1,48
1c0093d8:	fffb8313          	addi	t1,s7,-1
1c0093dc:	d5705fe3          	blez	s7,1c00913a <pos_libc_prf+0x9dc>
1c0093e0:	002d1793          	slli	a5,s10,0x2
1c0093e4:	01ed5893          	srli	a7,s10,0x1e
1c0093e8:	00269713          	slli	a4,a3,0x2
1c0093ec:	01a78833          	add	a6,a5,s10
1c0093f0:	00e8e733          	or	a4,a7,a4
1c0093f4:	9736                	add	a4,a4,a3
1c0093f6:	00f837b3          	sltu	a5,a6,a5
1c0093fa:	97ba                	add	a5,a5,a4
1c0093fc:	0786                	slli	a5,a5,0x1
1c0093fe:	01f85713          	srli	a4,a6,0x1f
1c009402:	8fd9                	or	a5,a5,a4
1c009404:	01c7de13          	srli	t3,a5,0x1c
1c009408:	00150893          	addi	a7,a0,1
1c00940c:	02039563          	bnez	t2,1c009436 <pos_libc_prf+0xcd8>
1c009410:	03000713          	li	a4,48
1c009414:	00c05c63          	blez	a2,1c00942c <pos_libc_prf+0xcce>
1c009418:	00181d13          	slli	s10,a6,0x1
1c00941c:	10000837          	lui	a6,0x10000
1c009420:	187d                	addi	a6,a6,-1
1c009422:	030e0713          	addi	a4,t3,48
1c009426:	167d                	addi	a2,a2,-1
1c009428:	0107f6b3          	and	a3,a5,a6
1c00942c:	00e50023          	sb	a4,0(a0)
1c009430:	8b9a                	mv	s7,t1
1c009432:	8546                	mv	a0,a7
1c009434:	b755                	j	1c0093d8 <pos_libc_prf+0xc7a>
1c009436:	00b50023          	sb	a1,0(a0)
1c00943a:	0385                	addi	t2,t2,1
1c00943c:	bfd5                	j	1c009430 <pos_libc_prf+0xcd2>
1c00943e:	02d00793          	li	a5,45
1c009442:	407003b3          	neg	t2,t2
1c009446:	00f500a3          	sb	a5,1(a0)
1c00944a:	b165                	j	1c0090f2 <pos_libc_prf+0x994>
1c00944c:	86de                	mv	a3,s7
1c00944e:	4629                	li	a2,10
1c009450:	8566                	mv	a0,s9
1c009452:	a98ff0ef          	jal	ra,1c0086ea <pos_libc_to_x>
1c009456:	8d2a                	mv	s10,a0
1c009458:	c002                	sw	zero,0(sp)
1c00945a:	badd                	j	1c008e50 <pos_libc_prf+0x6f2>
1c00945c:	4632                	lw	a2,12(sp)
1c00945e:	10060163          	beqz	a2,1c009560 <pos_libc_prf+0xe02>
1c009462:	02000713          	li	a4,32
1c009466:	02e10223          	sb	a4,36(sp)
1c00946a:	02510b13          	addi	s6,sp,37
1c00946e:	02410c93          	addi	s9,sp,36
1c009472:	4381                	li	t2,0
1c009474:	4301                	li	t1,0
1c009476:	4601                	li	a2,0
1c009478:	4701                	li	a4,0
1c00947a:	facff06f          	j	1c008c26 <pos_libc_prf+0x4c8>
1c00947e:	0af76663          	bltu	a4,a5,1c00952a <pos_libc_prf+0xdcc>
1c009482:	6791                	lui	a5,0x4
1c009484:	14e78793          	addi	a5,a5,334 # 414e <__cluster_text_size+0x414e>
1c009488:	00f69023          	sh	a5,0(a3)
1c00948c:	04e00793          	li	a5,78
1c009490:	00f68123          	sb	a5,2(a3)
1c009494:	bdb5                	j	1c009310 <pos_libc_prf+0xbb2>
1c009496:	c002                	sw	zero,0(sp)
1c009498:	b9cd                	j	1c00918a <pos_libc_prf+0xa2c>
1c00949a:	86de                	mv	a3,s7
1c00949c:	4629                	li	a2,10
1c00949e:	800005b7          	lui	a1,0x80000
1c0094a2:	b379                	j	1c009230 <pos_libc_prf+0xad2>
1c0094a4:	4832                	lw	a6,12(sp)
1c0094a6:	02410c93          	addi	s9,sp,36
1c0094aa:	8b66                	mv	s6,s9
1c0094ac:	e0080d63          	beqz	a6,1c008ac6 <pos_libc_prf+0x368>
1c0094b0:	02000693          	li	a3,32
1c0094b4:	02d10223          	sb	a3,36(sp)
1c0094b8:	02510b13          	addi	s6,sp,37
1c0094bc:	e0aff06f          	j	1c008ac6 <pos_libc_prf+0x368>
1c0094c0:	02d00693          	li	a3,45
1c0094c4:	02d10223          	sb	a3,36(sp)
1c0094c8:	02510b13          	addi	s6,sp,37
1c0094cc:	02410c93          	addi	s9,sp,36
1c0094d0:	df6ff06f          	j	1c008ac6 <pos_libc_prf+0x368>
1c0094d4:	679d                	lui	a5,0x7
1c0094d6:	e6978793          	addi	a5,a5,-407 # 6e69 <__cluster_text_size+0x6e69>
1c0094da:	00f69023          	sh	a5,0(a3)
1c0094de:	06600793          	li	a5,102
1c0094e2:	00f68123          	sb	a5,2(a3)
1c0094e6:	b52d                	j	1c009310 <pos_libc_prf+0xbb2>
1c0094e8:	02d00693          	li	a3,45
1c0094ec:	02d10223          	sb	a3,36(sp)
1c0094f0:	02510693          	addi	a3,sp,37
1c0094f4:	bbdd                	j	1c0092ea <pos_libc_prf+0xb8c>
1c0094f6:	03000793          	li	a5,48
1c0094fa:	00fb0023          	sb	a5,0(s6)
1c0094fe:	4752                	lw	a4,20(sp)
1c009500:	4641                	li	a2,16
1c009502:	bd6d                	j	1c0093bc <pos_libc_prf+0xc5e>
1c009504:	479d                	li	a5,7
1c009506:	9e77dfe3          	ble	t2,a5,1c008f04 <pos_libc_prf+0x7a6>
1c00950a:	4299                	li	t0,6
1c00950c:	06500c13          	li	s8,101
1c009510:	f6cff06f          	j	1c008c7c <pos_libc_prf+0x51e>
1c009514:	4772                	lw	a4,28(sp)
1c009516:	080006b7          	lui	a3,0x8000
1c00951a:	96ba                	add	a3,a3,a4
1c00951c:	f606b7b3          	p.bclr	a5,a3,27,0
1c009520:	e2078fe3          	beqz	a5,1c00935e <pos_libc_prf+0xc00>
1c009524:	06600c13          	li	s8,102
1c009528:	bc19                	j	1c008f3e <pos_libc_prf+0x7e0>
1c00952a:	6799                	lui	a5,0x6
1c00952c:	16e78793          	addi	a5,a5,366 # 616e <__cluster_text_size+0x616e>
1c009530:	00f69023          	sh	a5,0(a3) # 8000000 <__l1_heap_size+0x7fd2154>
1c009534:	06e00793          	li	a5,110
1c009538:	00f68123          	sb	a5,2(a3)
1c00953c:	bbd1                	j	1c009310 <pos_libc_prf+0xbb2>
1c00953e:	4785                	li	a5,1
1c009540:	4612                	lw	a2,4(sp)
1c009542:	4702                	lw	a4,0(sp)
1c009544:	b185                	j	1c0091a4 <pos_libc_prf+0xa46>
1c009546:	02414783          	lbu	a5,36(sp)
1c00954a:	c799                	beqz	a5,1c009558 <pos_libc_prf+0xdfa>
1c00954c:	4689                	li	a3,2
1c00954e:	02410c93          	addi	s9,sp,36
1c009552:	b971                	j	1c0091ee <pos_libc_prf+0xa90>
1c009554:	4785                	li	a5,1
1c009556:	b045                	j	1c008df6 <pos_libc_prf+0x698>
1c009558:	4709                	li	a4,2
1c00955a:	0d09                	addi	s10,s10,2
1c00955c:	c03a                	sw	a4,0(sp)
1c00955e:	b8a1                	j	1c008db6 <pos_libc_prf+0x658>
1c009560:	02410c93          	addi	s9,sp,36
1c009564:	8b66                	mv	s6,s9
1c009566:	b731                	j	1c009472 <pos_libc_prf+0xd14>
1c009568:	8542                	mv	a0,a6
1c00956a:	b69d                	j	1c0090d0 <pos_libc_prf+0x972>

1c00956c <pos_init_start>:
1c00956c:	1141                	addi	sp,sp,-16
1c00956e:	c422                	sw	s0,8(sp)
1c009570:	1c000437          	lui	s0,0x1c000
1c009574:	c606                	sw	ra,12(sp)
1c009576:	00840413          	addi	s0,s0,8 # 1c000008 <ctor_list>
1c00957a:	846ff0ef          	jal	ra,1c0085c0 <pos_soc_init>
1c00957e:	2a41                	jal	1c00970e <pos_irq_init>
1c009580:	2ac9                	jal	1c009752 <pos_soc_event_init>
1c009582:	20e5                	jal	1c00966a <pos_allocs_init>
1c009584:	405c                	lw	a5,4(s0)
1c009586:	c791                	beqz	a5,1c009592 <pos_init_start+0x26>
1c009588:	0411                	addi	s0,s0,4
1c00958a:	0411                	addi	s0,s0,4
1c00958c:	9782                	jalr	a5
1c00958e:	401c                	lw	a5,0(s0)
1c009590:	ffed                	bnez	a5,1c00958a <pos_init_start+0x1e>
1c009592:	922ff0ef          	jal	ra,1c0086b4 <pos_io_start>
1c009596:	300467f3          	csrrsi	a5,mstatus,8
1c00959a:	f1402573          	csrr	a0,mhartid
1c00959e:	8515                	srai	a0,a0,0x5
1c0095a0:	f2653533          	p.bclr	a0,a0,25,6
1c0095a4:	47fd                	li	a5,31
1c0095a6:	00f50a63          	beq	a0,a5,1c0095ba <pos_init_start+0x4e>
1c0095aa:	4422                	lw	s0,8(sp)
1c0095ac:	40b2                	lw	ra,12(sp)
1c0095ae:	1c0085b7          	lui	a1,0x1c008
1c0095b2:	51458593          	addi	a1,a1,1300 # 1c008514 <main>
1c0095b6:	0141                	addi	sp,sp,16
1c0095b8:	a40d                	j	1c0097da <cluster_start>
1c0095ba:	40b2                	lw	ra,12(sp)
1c0095bc:	4422                	lw	s0,8(sp)
1c0095be:	0141                	addi	sp,sp,16
1c0095c0:	8082                	ret

1c0095c2 <pos_init_stop>:
1c0095c2:	1141                	addi	sp,sp,-16
1c0095c4:	c422                	sw	s0,8(sp)
1c0095c6:	1c000437          	lui	s0,0x1c000
1c0095ca:	c606                	sw	ra,12(sp)
1c0095cc:	01440413          	addi	s0,s0,20 # 1c000014 <dtor_list>
1c0095d0:	8e8ff0ef          	jal	ra,1c0086b8 <pos_io_stop>
1c0095d4:	405c                	lw	a5,4(s0)
1c0095d6:	c791                	beqz	a5,1c0095e2 <pos_init_stop+0x20>
1c0095d8:	0411                	addi	s0,s0,4
1c0095da:	0411                	addi	s0,s0,4
1c0095dc:	9782                	jalr	a5
1c0095de:	401c                	lw	a5,0(s0)
1c0095e0:	ffed                	bnez	a5,1c0095da <pos_init_stop+0x18>
1c0095e2:	40b2                	lw	ra,12(sp)
1c0095e4:	4422                	lw	s0,8(sp)
1c0095e6:	0141                	addi	sp,sp,16
1c0095e8:	8082                	ret

1c0095ea <pos_alloc_init>:
1c0095ea:	00758793          	addi	a5,a1,7
1c0095ee:	c407b7b3          	p.bclr	a5,a5,2,0
1c0095f2:	40b785b3          	sub	a1,a5,a1
1c0095f6:	c11c                	sw	a5,0(a0)
1c0095f8:	8e0d                	sub	a2,a2,a1
1c0095fa:	00c05763          	blez	a2,1c009608 <pos_alloc_init+0x1e>
1c0095fe:	c4063633          	p.bclr	a2,a2,2,0
1c009602:	c390                	sw	a2,0(a5)
1c009604:	0007a223          	sw	zero,4(a5)
1c009608:	8082                	ret

1c00960a <pos_alloc>:
1c00960a:	4110                	lw	a2,0(a0)
1c00960c:	059d                	addi	a1,a1,7
1c00960e:	c405b5b3          	p.bclr	a1,a1,2,0
1c009612:	ca31                	beqz	a2,1c009666 <pos_alloc+0x5c>
1c009614:	4218                	lw	a4,0(a2)
1c009616:	425c                	lw	a5,4(a2)
1c009618:	02b75963          	ble	a1,a4,1c00964a <pos_alloc+0x40>
1c00961c:	cb81                	beqz	a5,1c00962c <pos_alloc+0x22>
1c00961e:	4398                	lw	a4,0(a5)
1c009620:	43d4                	lw	a3,4(a5)
1c009622:	00b75763          	ble	a1,a4,1c009630 <pos_alloc+0x26>
1c009626:	863e                	mv	a2,a5
1c009628:	87b6                	mv	a5,a3
1c00962a:	fbf5                	bnez	a5,1c00961e <pos_alloc+0x14>
1c00962c:	853e                	mv	a0,a5
1c00962e:	8082                	ret
1c009630:	00b70a63          	beq	a4,a1,1c009644 <pos_alloc+0x3a>
1c009634:	00b78533          	add	a0,a5,a1
1c009638:	8f0d                	sub	a4,a4,a1
1c00963a:	c118                	sw	a4,0(a0)
1c00963c:	c154                	sw	a3,4(a0)
1c00963e:	c248                	sw	a0,4(a2)
1c009640:	853e                	mv	a0,a5
1c009642:	8082                	ret
1c009644:	c254                	sw	a3,4(a2)
1c009646:	853e                	mv	a0,a5
1c009648:	8082                	ret
1c00964a:	00e58b63          	beq	a1,a4,1c009660 <pos_alloc+0x56>
1c00964e:	00b606b3          	add	a3,a2,a1
1c009652:	8f0d                	sub	a4,a4,a1
1c009654:	c2dc                	sw	a5,4(a3)
1c009656:	c298                	sw	a4,0(a3)
1c009658:	87b2                	mv	a5,a2
1c00965a:	c114                	sw	a3,0(a0)
1c00965c:	853e                	mv	a0,a5
1c00965e:	8082                	ret
1c009660:	c11c                	sw	a5,0(a0)
1c009662:	87b2                	mv	a5,a2
1c009664:	b7e1                	j	1c00962c <pos_alloc+0x22>
1c009666:	4781                	li	a5,0
1c009668:	b7d1                	j	1c00962c <pos_alloc+0x22>

1c00966a <pos_allocs_init>:
1c00966a:	1141                	addi	sp,sp,-16
1c00966c:	1c0015b7          	lui	a1,0x1c001
1c009670:	c606                	sw	ra,12(sp)
1c009672:	a4458793          	addi	a5,a1,-1468 # 1c000a44 <__l2_priv0_end>
1c009676:	1c008637          	lui	a2,0x1c008
1c00967a:	04c7cc63          	blt	a5,a2,1c0096d2 <pos_allocs_init+0x68>
1c00967e:	4581                	li	a1,0
1c009680:	4601                	li	a2,0
1c009682:	1c001537          	lui	a0,0x1c001
1c009686:	a3450513          	addi	a0,a0,-1484 # 1c000a34 <pos_alloc_l2>
1c00968a:	3785                	jal	1c0095ea <pos_alloc_init>
1c00968c:	1c00a5b7          	lui	a1,0x1c00a
1c009690:	88c58793          	addi	a5,a1,-1908 # 1c00988c <__l2_priv1_end>
1c009694:	1c010637          	lui	a2,0x1c010
1c009698:	02c7c963          	blt	a5,a2,1c0096ca <pos_allocs_init+0x60>
1c00969c:	4581                	li	a1,0
1c00969e:	4601                	li	a2,0
1c0096a0:	1c001537          	lui	a0,0x1c001
1c0096a4:	a3850513          	addi	a0,a0,-1480 # 1c000a38 <pos_alloc_l2+0x4>
1c0096a8:	3789                	jal	1c0095ea <pos_alloc_init>
1c0096aa:	100125b7          	lui	a1,0x10012
1c0096ae:	40b2                	lw	ra,12(sp)
1c0096b0:	15458793          	addi	a5,a1,340 # 10012154 <__l2_shared_end>
1c0096b4:	1c080637          	lui	a2,0x1c080
1c0096b8:	1c001537          	lui	a0,0x1c001
1c0096bc:	8e1d                	sub	a2,a2,a5
1c0096be:	15458593          	addi	a1,a1,340
1c0096c2:	a3c50513          	addi	a0,a0,-1476 # 1c000a3c <pos_alloc_l2+0x8>
1c0096c6:	0141                	addi	sp,sp,16
1c0096c8:	b70d                	j	1c0095ea <pos_alloc_init>
1c0096ca:	8e1d                	sub	a2,a2,a5
1c0096cc:	88c58593          	addi	a1,a1,-1908
1c0096d0:	bfc1                	j	1c0096a0 <pos_allocs_init+0x36>
1c0096d2:	8e1d                	sub	a2,a2,a5
1c0096d4:	a4458593          	addi	a1,a1,-1468
1c0096d8:	b76d                	j	1c009682 <pos_allocs_init+0x18>

1c0096da <alloc_init_l1>:
1c0096da:	100127b7          	lui	a5,0x10012
1c0096de:	01651593          	slli	a1,a0,0x16
1c0096e2:	15478793          	addi	a5,a5,340 # 10012154 <__l2_shared_end>
1c0096e6:	95be                	add	a1,a1,a5
1c0096e8:	1c0017b7          	lui	a5,0x1c001
1c0096ec:	050a                	slli	a0,a0,0x2
1c0096ee:	0002e637          	lui	a2,0x2e
1c0096f2:	a3078793          	addi	a5,a5,-1488 # 1c000a30 <pos_alloc_l1>
1c0096f6:	eac60613          	addi	a2,a2,-340 # 2deac <__l1_heap_size>
1c0096fa:	953e                	add	a0,a0,a5
1c0096fc:	b5fd                	j	1c0095ea <pos_alloc_init>

1c0096fe <pi_l1_malloc>:
1c0096fe:	1c0017b7          	lui	a5,0x1c001
1c009702:	050a                	slli	a0,a0,0x2
1c009704:	a3078793          	addi	a5,a5,-1488 # 1c000a30 <pos_alloc_l1>
1c009708:	953e                	add	a0,a0,a5
1c00970a:	b701                	j	1c00960a <pos_alloc>

1c00970c <__rt_handle_illegal_instr>:
1c00970c:	8082                	ret

1c00970e <pos_irq_init>:
1c00970e:	f14027f3          	csrr	a5,mhartid
1c009712:	477d                	li	a4,31
1c009714:	ca5797b3          	p.extractu	a5,a5,5,5
1c009718:	00e78f63          	beq	a5,a4,1c009736 <pos_irq_init+0x28>
1c00971c:	002047b7          	lui	a5,0x204
1c009720:	577d                	li	a4,-1
1c009722:	cb98                	sw	a4,16(a5)
1c009724:	1c0087b7          	lui	a5,0x1c008
1c009728:	00078793          	mv	a5,a5
1c00972c:	c007c7b3          	p.bset	a5,a5,0,0
1c009730:	30579073          	csrw	mtvec,a5
1c009734:	8082                	ret
1c009736:	1a10a7b7          	lui	a5,0x1a10a
1c00973a:	577d                	li	a4,-1
1c00973c:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa0f76b4>
1c009740:	1c0087b7          	lui	a5,0x1c008
1c009744:	00078793          	mv	a5,a5
1c009748:	c007c7b3          	p.bset	a5,a5,0,0
1c00974c:	30579073          	csrw	mtvec,a5
1c009750:	8082                	ret

1c009752 <pos_soc_event_init>:
1c009752:	1a1067b7          	lui	a5,0x1a106
1c009756:	577d                	li	a4,-1
1c009758:	00478693          	addi	a3,a5,4 # 1a106004 <__l2_shared_end+0xa0f3eb0>
1c00975c:	c298                	sw	a4,0(a3)
1c00975e:	00878693          	addi	a3,a5,8
1c009762:	c298                	sw	a4,0(a3)
1c009764:	00c78693          	addi	a3,a5,12
1c009768:	c298                	sw	a4,0(a3)
1c00976a:	01078693          	addi	a3,a5,16
1c00976e:	c298                	sw	a4,0(a3)
1c009770:	01478693          	addi	a3,a5,20
1c009774:	c298                	sw	a4,0(a3)
1c009776:	01878693          	addi	a3,a5,24
1c00977a:	c298                	sw	a4,0(a3)
1c00977c:	01c78693          	addi	a3,a5,28
1c009780:	c298                	sw	a4,0(a3)
1c009782:	02078793          	addi	a5,a5,32
1c009786:	c398                	sw	a4,0(a5)
1c009788:	8082                	ret

1c00978a <cluster_entry_stub>:
1c00978a:	1141                	addi	sp,sp,-16
1c00978c:	c606                	sw	ra,12(sp)
1c00978e:	002047b7          	lui	a5,0x204
1c009792:	00070737          	lui	a4,0x70
1c009796:	c798                	sw	a4,8(a5)
1c009798:	0ff00713          	li	a4,255
1c00979c:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1d6354>
1c0097a0:	00e7a023          	sw	a4,0(a5)
1c0097a4:	00e7a623          	sw	a4,12(a5)
1c0097a8:	1c0017b7          	lui	a5,0x1c001
1c0097ac:	a407a783          	lw	a5,-1472(a5) # 1c000a40 <cluster_entry>
1c0097b0:	9782                	jalr	a5
1c0097b2:	f14027f3          	csrr	a5,mhartid
1c0097b6:	f457b7b3          	p.bclr	a5,a5,26,5
1c0097ba:	eb89                	bnez	a5,1c0097cc <cluster_entry_stub+0x42>
1c0097bc:	1c001737          	lui	a4,0x1c001
1c0097c0:	1c0017b7          	lui	a5,0x1c001
1c0097c4:	a2a72423          	sw	a0,-1496(a4) # 1c000a28 <_bss_start>
1c0097c8:	a207a623          	sw	zero,-1492(a5) # 1c000a2c <cluster_running>
1c0097cc:	002047b7          	lui	a5,0x204
1c0097d0:	577d                	li	a4,-1
1c0097d2:	c3d8                	sw	a4,4(a5)
1c0097d4:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1d618c>
1c0097d8:	a001                	j	1c0097d8 <cluster_entry_stub+0x4e>

1c0097da <cluster_start>:
1c0097da:	1141                	addi	sp,sp,-16
1c0097dc:	1c0017b7          	lui	a5,0x1c001
1c0097e0:	c226                	sw	s1,4(sp)
1c0097e2:	84aa                	mv	s1,a0
1c0097e4:	4509                	li	a0,2
1c0097e6:	a4b7a023          	sw	a1,-1472(a5) # 1c000a40 <cluster_entry>
1c0097ea:	c606                	sw	ra,12(sp)
1c0097ec:	c422                	sw	s0,8(sp)
1c0097ee:	d29fe0ef          	jal	ra,1c008516 <pos_fll_init>
1c0097f2:	8526                	mv	a0,s1
1c0097f4:	35dd                	jal	1c0096da <alloc_init_l1>
1c0097f6:	04048413          	addi	s0,s1,64
1c0097fa:	00201737          	lui	a4,0x201
1c0097fe:	40070713          	addi	a4,a4,1024 # 201400 <__l1_heap_size+0x1d3554>
1c009802:	045a                	slli	s0,s0,0x16
1c009804:	56fd                	li	a3,-1
1c009806:	f14027f3          	csrr	a5,mhartid
1c00980a:	00d46723          	p.sw	a3,a4(s0)
1c00980e:	ca5797b3          	p.extractu	a5,a5,5,5
1c009812:	477d                	li	a4,31
1c009814:	00e78f63          	beq	a5,a4,1c009832 <cluster_start+0x58>
1c009818:	002047b7          	lui	a5,0x204
1c00981c:	00070737          	lui	a4,0x70
1c009820:	c798                	sw	a4,8(a5)
1c009822:	0ff00713          	li	a4,255
1c009826:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1d6354>
1c00982a:	00e7a023          	sw	a4,0(a5)
1c00982e:	00e7a623          	sw	a4,12(a5)
1c009832:	8526                	mv	a0,s1
1c009834:	355d                	jal	1c0096da <alloc_init_l1>
1c009836:	6591                	lui	a1,0x4
1c009838:	8526                	mv	a0,s1
1c00983a:	35d1                	jal	1c0096fe <pi_l1_malloc>
1c00983c:	100127b7          	lui	a5,0x10012
1c009840:	14a7a823          	sw	a0,336(a5) # 10012150 <cluster_stacks>
1c009844:	cd15                	beqz	a0,1c009880 <cluster_start+0xa6>
1c009846:	00200637          	lui	a2,0x200
1c00984a:	1c0017b7          	lui	a5,0x1c001
1c00984e:	4705                	li	a4,1
1c009850:	1c0085b7          	lui	a1,0x1c008
1c009854:	04060613          	addi	a2,a2,64 # 200040 <__l1_heap_size+0x1d2194>
1c009858:	a2e7a623          	sw	a4,-1492(a5) # 1c000a2c <cluster_running>
1c00985c:	08058593          	addi	a1,a1,128 # 1c008080 <_start>
1c009860:	9622                	add	a2,a2,s0
1c009862:	4701                	li	a4,0
1c009864:	008350fb          	lp.setupi	x1,8,1c009870 <cluster_start+0x96>
1c009868:	00271693          	slli	a3,a4,0x2
1c00986c:	00b6e623          	p.sw	a1,a2(a3)
1c009870:	0705                	addi	a4,a4,1
1c009872:	002007b7          	lui	a5,0x200
1c009876:	07a1                	addi	a5,a5,8
1c009878:	0ff00713          	li	a4,255
1c00987c:	00e467a3          	p.sw	a4,a5(s0)
1c009880:	40b2                	lw	ra,12(sp)
1c009882:	4422                	lw	s0,8(sp)
1c009884:	4492                	lw	s1,4(sp)
1c009886:	0141                	addi	sp,sp,16
1c009888:	8082                	ret

1c00988a <_endtext>:
	...
make[1]: Leaving directory `/scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/main_half'
