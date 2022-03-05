Flags : -O2 -g -Istreamin_fs1_output_64x8x8_input_32x8x8/inc -Ipadding_1111_fs3_output_32x8x8_input_32x8x8/inc -Ino_normquant_stride2_output_64x8x8_input_64x16x16/inc -Iavgpool_fs3_dw_output_64x16x16_input_64x16x16/inc -Istride2_fs1_output_32x8x8_input_64x16x16/inc -fno-tree-loop-optimize -fno-tree-loop-distribute-patterns  -DNB_RUN=1  
make[1]: Entering directory `/scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/main_with_golden_output'
/usr/pack/pulpsdk-1.0-kgf/artifactory/pulp-sdk-release/pkg/pulp_riscv_gcc/1.0.16//bin/riscv32-unknown-elf-objdump -Mmarch=rv32imcxgap9 -d /scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/main_with_golden_output/build/ne16_test/ne16_test

/scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/main_with_golden_output/build/ne16_test/ne16_test:     file format elf32-littleriscv


Disassembly of section .vectors:

1c008000 <__irq_vector_base>:
1c008000:	7c40106f          	j	1c0097c4 <__rt_handle_illegal_instr>
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
1c008084:	7400106f          	j	1c0097c4 <__rt_handle_illegal_instr>

1c008088 <pos_no_irq_handler>:
1c008088:	30200073          	mret

1c00808c <pos_semihosting_call>:
1c00808c:	00100073          	ebreak
1c008090:	00008067          	ret

1c008094 <pe_start>:
1c008094:	f4032117          	auipc	sp,0xf4032
1c008098:	4bc10113          	addi	sp,sp,1212 # 1003a550 <cluster_stacks>
1c00809c:	00012103          	lw	sp,0(sp)
1c0080a0:	000011b7          	lui	gp,0x1
1c0080a4:	80018193          	addi	gp,gp,-2048 # 800 <__cluster_text_size+0x800>
1c0080a8:	00158593          	addi	a1,a1,1
1c0080ac:	02b180b3          	mul	ra,gp,a1
1c0080b0:	00110133          	add	sp,sp,ra
1c0080b4:	78e0106f          	j	1c009842 <cluster_entry_stub>

1c0080b8 <do_cl_boot>:
1c0080b8:	10200137          	lui	sp,0x10200
1c0080bc:	00100193          	li	gp,1
1c0080c0:	00000217          	auipc	tp,0x0
1c0080c4:	fc020213          	addi	tp,tp,-64 # 1c008080 <_start>
1c0080c8:	04412023          	sw	tp,64(sp) # 10200040 <__l2_shared_end+0x1c5aec>
1c0080cc:	00312423          	sw	gp,8(sp)

1c0080d0 <loop>:
1c0080d0:	1a10a137          	lui	sp,0x1a10a
1c0080d4:	80010113          	addi	sp,sp,-2048 # 1a109800 <__l2_shared_end+0xa0cf2ac>
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
1c0080fc:	98028293          	addi	t0,t0,-1664 # 1c000a78 <_bss_start>
1c008100:	ffff9317          	auipc	t1,0xffff9
1c008104:	99430313          	addi	t1,t1,-1644 # 1c000a94 <__l2_priv0_end>
1c008108:	0002a023          	sw	zero,0(t0)
1c00810c:	0291                	addi	t0,t0,4
1c00810e:	fe62ede3          	bltu	t0,t1,1c008108 <_stext+0x24>
1c008112:	ffff8117          	auipc	sp,0xffff8
1c008116:	77e10113          	addi	sp,sp,1918 # 1c000890 <stack>
1c00811a:	50c010ef          	jal	ra,1c009626 <pos_init_start>
1c00811e:	00000513          	li	a0,0
1c008122:	00000593          	li	a1,0
1c008126:	00000397          	auipc	t2,0x0
1c00812a:	48438393          	addi	t2,t2,1156 # 1c0085aa <main>
1c00812e:	000380e7          	jalr	t2
1c008132:	842a                	mv	s0,a0
1c008134:	548010ef          	jal	ra,1c00967c <pos_init_stop>
1c008138:	8522                	mv	a0,s0
1c00813a:	622000ef          	jal	ra,1c00875c <exit>

1c00813e <ne16_compare_int>:
1c00813e:	7179                	addi	sp,sp,-48
1c008140:	d606                	sw	ra,44(sp)
1c008142:	d422                	sw	s0,40(sp)
1c008144:	d226                	sw	s1,36(sp)
1c008146:	d04a                	sw	s2,32(sp)
1c008148:	ce4e                	sw	s3,28(sp)
1c00814a:	cc52                	sw	s4,24(sp)
1c00814c:	ca56                	sw	s5,20(sp)
1c00814e:	c85a                	sw	s6,16(sp)
1c008150:	06c05863          	blez	a2,1c0081c0 <ne16_compare_int+0x82>
1c008154:	8a2e                	mv	s4,a1
1c008156:	89aa                	mv	s3,a0
1c008158:	8932                	mv	s2,a2
1c00815a:	4401                	li	s0,0
1c00815c:	4481                	li	s1,0
1c00815e:	1c000ab7          	lui	s5,0x1c000
1c008162:	1c000b37          	lui	s6,0x1c000
1c008166:	00241713          	slli	a4,s0,0x2
1c00816a:	00e986b3          	add	a3,s3,a4
1c00816e:	4290                	lw	a2,0(a3)
1c008170:	20ea7583          	p.lw	a1,a4(s4)
1c008174:	0405                	addi	s0,s0,1
1c008176:	40b607b3          	sub	a5,a2,a1
1c00817a:	00f037b3          	snez	a5,a5
1c00817e:	94be                	add	s1,s1,a5
1c008180:	00b60763          	beq	a2,a1,1c00818e <ne16_compare_int+0x50>
1c008184:	0214a263          	p.beqimm	s1,1,1c0081a8 <ne16_compare_int+0x6a>
1c008188:	04ca8513          	addi	a0,s5,76 # 1c00004c <__DTOR_END__+0x30>
1c00818c:	23ed                	jal	1c008776 <printf>
1c00818e:	fd244ce3          	blt	s0,s2,1c008166 <ne16_compare_int+0x28>
1c008192:	50b2                	lw	ra,44(sp)
1c008194:	5422                	lw	s0,40(sp)
1c008196:	8526                	mv	a0,s1
1c008198:	5902                	lw	s2,32(sp)
1c00819a:	5492                	lw	s1,36(sp)
1c00819c:	49f2                	lw	s3,28(sp)
1c00819e:	4a62                	lw	s4,24(sp)
1c0081a0:	4ad2                	lw	s5,20(sp)
1c0081a2:	4b42                	lw	s6,16(sp)
1c0081a4:	6145                	addi	sp,sp,48
1c0081a6:	8082                	ret
1c0081a8:	01cb0513          	addi	a0,s6,28 # 1c00001c <__DTOR_END__>
1c0081ac:	c22e                	sw	a1,4(sp)
1c0081ae:	c432                	sw	a2,8(sp)
1c0081b0:	c636                	sw	a3,12(sp)
1c0081b2:	c03a                	sw	a4,0(sp)
1c0081b4:	2b95                	jal	1c008728 <puts>
1c0081b6:	4702                	lw	a4,0(sp)
1c0081b8:	46b2                	lw	a3,12(sp)
1c0081ba:	4622                	lw	a2,8(sp)
1c0081bc:	4592                	lw	a1,4(sp)
1c0081be:	b7e9                	j	1c008188 <ne16_compare_int+0x4a>
1c0081c0:	4481                	li	s1,0
1c0081c2:	bfc1                	j	1c008192 <ne16_compare_int+0x54>

1c0081c4 <run_test>:
1c0081c4:	1101                	addi	sp,sp,-32
1c0081c6:	1c0107b7          	lui	a5,0x1c010
1c0081ca:	ce06                	sw	ra,28(sp)
1c0081cc:	00078793          	mv	a5,a5
1c0081d0:	20800737          	lui	a4,0x20800
1c0081d4:	00c6d0fb          	lp.setupi	x1,12,1c0081ee <run_test+0x2a>
1c0081d8:	0007a803          	lw	a6,0(a5) # 1c010000 <ne16_weights_avgpool>
1c0081dc:	43c8                	lw	a0,4(a5)
1c0081de:	478c                	lw	a1,8(a5)
1c0081e0:	47d0                	lw	a2,12(a5)
1c0081e2:	01072023          	sw	a6,0(a4) # 20800000 <ne16_weights_streamin+0x47da740>
1c0081e6:	c348                	sw	a0,4(a4)
1c0081e8:	c70c                	sw	a1,8(a4)
1c0081ea:	c750                	sw	a2,12(a4)
1c0081ec:	07c1                	addi	a5,a5,16
1c0081ee:	0741                	addi	a4,a4,16
1c0081f0:	1c015737          	lui	a4,0x1c015
1c0081f4:	208007b7          	lui	a5,0x20800
1c0081f8:	8c070713          	addi	a4,a4,-1856 # 1c0148c0 <ne16_weights_no_normquant>
1c0081fc:	0c078793          	addi	a5,a5,192 # 208000c0 <ne16_weights_streamin+0x47da800>
1c008200:	1006d0fb          	lp.setupi	x1,256,1c00821a <run_test+0x56>
1c008204:	00072803          	lw	a6,0(a4)
1c008208:	4348                	lw	a0,4(a4)
1c00820a:	470c                	lw	a1,8(a4)
1c00820c:	4750                	lw	a2,12(a4)
1c00820e:	0107a023          	sw	a6,0(a5)
1c008212:	c3c8                	sw	a0,4(a5)
1c008214:	c78c                	sw	a1,8(a5)
1c008216:	c7d0                	sw	a2,12(a5)
1c008218:	0741                	addi	a4,a4,16
1c00821a:	07c1                	addi	a5,a5,16
1c00821c:	1c026737          	lui	a4,0x1c026
1c008220:	208017b7          	lui	a5,0x20801
1c008224:	8c070713          	addi	a4,a4,-1856 # 1c0258c0 <ne16_weights_streamin>
1c008228:	0c078793          	addi	a5,a5,192 # 208010c0 <ne16_weights_streamin+0x47db800>
1c00822c:	0806d0fb          	lp.setupi	x1,128,1c008246 <run_test+0x82>
1c008230:	00072803          	lw	a6,0(a4)
1c008234:	4348                	lw	a0,4(a4)
1c008236:	470c                	lw	a1,8(a4)
1c008238:	4750                	lw	a2,12(a4)
1c00823a:	0107a023          	sw	a6,0(a5)
1c00823e:	c3c8                	sw	a0,4(a5)
1c008240:	c78c                	sw	a1,8(a5)
1c008242:	c7d0                	sw	a2,12(a5)
1c008244:	0741                	addi	a4,a4,16
1c008246:	07c1                	addi	a5,a5,16
1c008248:	1c010737          	lui	a4,0x1c010
1c00824c:	208027b7          	lui	a5,0x20802
1c008250:	0c070713          	addi	a4,a4,192 # 1c0100c0 <ne16_weights_stride2>
1c008254:	8c078793          	addi	a5,a5,-1856 # 208018c0 <ne16_weights_streamin+0x47dc000>
1c008258:	0806d0fb          	lp.setupi	x1,128,1c008272 <run_test+0xae>
1c00825c:	00072803          	lw	a6,0(a4)
1c008260:	4348                	lw	a0,4(a4)
1c008262:	470c                	lw	a1,8(a4)
1c008264:	4750                	lw	a2,12(a4)
1c008266:	0107a023          	sw	a6,0(a5)
1c00826a:	c3c8                	sw	a0,4(a5)
1c00826c:	c78c                	sw	a1,8(a5)
1c00826e:	c7d0                	sw	a2,12(a5)
1c008270:	0741                	addi	a4,a4,16
1c008272:	07c1                	addi	a5,a5,16
1c008274:	1c011737          	lui	a4,0x1c011
1c008278:	208027b7          	lui	a5,0x20802
1c00827c:	8c070713          	addi	a4,a4,-1856 # 1c0108c0 <ne16_weights_padding>
1c008280:	0c078793          	addi	a5,a5,192 # 208020c0 <ne16_weights_streamin+0x47dc800>
1c008284:	4006d0fb          	lp.setupi	x1,1024,1c00829e <run_test+0xda>
1c008288:	00072803          	lw	a6,0(a4)
1c00828c:	4348                	lw	a0,4(a4)
1c00828e:	470c                	lw	a1,8(a4)
1c008290:	4750                	lw	a2,12(a4)
1c008292:	0107a023          	sw	a6,0(a5)
1c008296:	c3c8                	sw	a0,4(a5)
1c008298:	c78c                	sw	a1,8(a5)
1c00829a:	c7d0                	sw	a2,12(a5)
1c00829c:	0741                	addi	a4,a4,16
1c00829e:	07c1                	addi	a5,a5,16
1c0082a0:	102007b7          	lui	a5,0x10200
1c0082a4:	07e1                	addi	a5,a5,24
1c0082a6:	4398                	lw	a4,0(a5)
1c0082a8:	c0b74733          	p.bset	a4,a4,0,11
1c0082ac:	c398                	sw	a4,0(a5)
1c0082ae:	4398                	lw	a4,0(a5)
1c0082b0:	c0874733          	p.bset	a4,a4,0,8
1c0082b4:	c398                	sw	a4,0(a5)
1c0082b6:	4398                	lw	a4,0(a5)
1c0082b8:	ce073733          	p.bclr	a4,a4,7,0
1c0082bc:	c398                	sw	a4,0(a5)
1c0082be:	4398                	lw	a4,0(a5)
1c0082c0:	c0374733          	p.bset	a4,a4,0,3
1c0082c4:	c398                	sw	a4,0(a5)
1c0082c6:	102017b7          	lui	a5,0x10201
1c0082ca:	0007aa23          	sw	zero,20(a5) # 10201014 <__l2_shared_end+0x1c6ac0>
1c0082ce:	c402                	sw	zero,8(sp)
1c0082d0:	4722                	lw	a4,8(sp)
1c0082d2:	47a5                	li	a5,9
1c0082d4:	00e7c963          	blt	a5,a4,1c0082e6 <run_test+0x122>
1c0082d8:	4725                	li	a4,9
1c0082da:	47a2                	lw	a5,8(sp)
1c0082dc:	0785                	addi	a5,a5,1
1c0082de:	c43e                	sw	a5,8(sp)
1c0082e0:	47a2                	lw	a5,8(sp)
1c0082e2:	fef75ce3          	ble	a5,a4,1c0082da <run_test+0x116>
1c0082e6:	10201637          	lui	a2,0x10201
1c0082ea:	0611                	addi	a2,a2,4
1c0082ec:	421c                	lw	a5,0(a2)
1c0082ee:	0007dc63          	bgez	a5,1c008306 <run_test+0x142>
1c0082f2:	6705                	lui	a4,0x1
1c0082f4:	002047b7          	lui	a5,0x204
1c0082f8:	c798                	sw	a4,8(a5)
1c0082fa:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1fe590>
1c0082fe:	c3d8                	sw	a4,4(a5)
1c008300:	4214                	lw	a3,0(a2)
1c008302:	fe06cbe3          	bltz	a3,1c0082f8 <run_test+0x134>
1c008306:	102015b7          	lui	a1,0x10201
1c00830a:	004027b7          	lui	a5,0x402
1c00830e:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x1c6acc>
1c008312:	8c078793          	addi	a5,a5,-1856 # 4018c0 <__l1_heap_size+0x3fbe14>
1c008316:	00f5a023          	sw	a5,0(a1)
1c00831a:	1001a8b7          	lui	a7,0x1001a
1c00831e:	55088893          	addi	a7,a7,1360 # 1001a550 <ne16_infeat_avgpool>
1c008322:	0115a223          	sw	a7,4(a1)
1c008326:	100007b7          	lui	a5,0x10000
1c00832a:	55078793          	addi	a5,a5,1360 # 10000550 <ne16_streamin_stride2>
1c00832e:	00f5a423          	sw	a5,8(a1)
1c008332:	10000837          	lui	a6,0x10000
1c008336:	00480813          	addi	a6,a6,4 # 10000004 <ne16_scale_stride2>
1c00833a:	0105a623          	sw	a6,12(a1)
1c00833e:	02080793          	addi	a5,a6,32
1c008342:	00f5a823          	sw	a5,16(a1)
1c008346:	04080793          	addi	a5,a6,64
1c00834a:	00f5aa23          	sw	a5,20(a1)
1c00834e:	1c001537          	lui	a0,0x1c001
1c008352:	4719                	li	a4,6
1c008354:	a1050513          	addi	a0,a0,-1520 # 1c000a10 <ne16_cfg_stride2>
1c008358:	012450fb          	lp.setupi	x1,18,1c008368 <run_test+0x1a4>
1c00835c:	00271693          	slli	a3,a4,0x2
1c008360:	20d57603          	p.lw	a2,a3(a0)
1c008364:	00c5e6a3          	p.sw	a2,a3(a1)
1c008368:	0705                	addi	a4,a4,1
1c00836a:	102017b7          	lui	a5,0x10201
1c00836e:	0007a023          	sw	zero,0(a5) # 10201000 <__l2_shared_end+0x1c6aac>
1c008372:	10201637          	lui	a2,0x10201
1c008376:	0611                	addi	a2,a2,4
1c008378:	421c                	lw	a5,0(a2)
1c00837a:	0007dc63          	bgez	a5,1c008392 <run_test+0x1ce>
1c00837e:	6705                	lui	a4,0x1
1c008380:	002047b7          	lui	a5,0x204
1c008384:	c798                	sw	a4,8(a5)
1c008386:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1fe590>
1c00838a:	c3d8                	sw	a4,4(a5)
1c00838c:	4214                	lw	a3,0(a2)
1c00838e:	fe06cbe3          	bltz	a3,1c008384 <run_test+0x1c0>
1c008392:	102015b7          	lui	a1,0x10201
1c008396:	004027b7          	lui	a5,0x402
1c00839a:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x1c6acc>
1c00839e:	0c078793          	addi	a5,a5,192 # 4020c0 <__l1_heap_size+0x3fc614>
1c0083a2:	00f5a023          	sw	a5,0(a1)
1c0083a6:	100007b7          	lui	a5,0x10000
1c0083aa:	33078793          	addi	a5,a5,816 # 10000330 <ne16_scale_streamin+0x20>
1c0083ae:	00f5a223          	sw	a5,4(a1)
1c0083b2:	10008337          	lui	t1,0x10008
1c0083b6:	55030313          	addi	t1,t1,1360 # 10008550 <ne16_streamin_padding>
1c0083ba:	0065a423          	sw	t1,8(a1)
1c0083be:	0c080793          	addi	a5,a6,192
1c0083c2:	00f5a623          	sw	a5,12(a1)
1c0083c6:	0e080793          	addi	a5,a6,224
1c0083ca:	00f5a823          	sw	a5,16(a1)
1c0083ce:	10080793          	addi	a5,a6,256
1c0083d2:	00f5aa23          	sw	a5,20(a1)
1c0083d6:	1c001537          	lui	a0,0x1c001
1c0083da:	4719                	li	a4,6
1c0083dc:	95050513          	addi	a0,a0,-1712 # 1c000950 <ne16_cfg_padding>
1c0083e0:	012450fb          	lp.setupi	x1,18,1c0083f0 <run_test+0x22c>
1c0083e4:	00271693          	slli	a3,a4,0x2
1c0083e8:	20d57603          	p.lw	a2,a3(a0)
1c0083ec:	00c5e6a3          	p.sw	a2,a3(a1)
1c0083f0:	0705                	addi	a4,a4,1
1c0083f2:	102017b7          	lui	a5,0x10201
1c0083f6:	0007a023          	sw	zero,0(a5) # 10201000 <__l2_shared_end+0x1c6aac>
1c0083fa:	10201637          	lui	a2,0x10201
1c0083fe:	0611                	addi	a2,a2,4
1c008400:	421c                	lw	a5,0(a2)
1c008402:	0007dc63          	bgez	a5,1c00841a <run_test+0x256>
1c008406:	6705                	lui	a4,0x1
1c008408:	002047b7          	lui	a5,0x204
1c00840c:	c798                	sw	a4,8(a5)
1c00840e:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1fe590>
1c008412:	c3d8                	sw	a4,4(a5)
1c008414:	4214                	lw	a3,0(a2)
1c008416:	fe06cbe3          	bltz	a3,1c00840c <run_test+0x248>
1c00841a:	102015b7          	lui	a1,0x10201
1c00841e:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x1c6acc>
1c008422:	004007b7          	lui	a5,0x400
1c008426:	00f5a023          	sw	a5,0(a1)
1c00842a:	0115a223          	sw	a7,4(a1)
1c00842e:	1000a8b7          	lui	a7,0x1000a
1c008432:	55088893          	addi	a7,a7,1360 # 1000a550 <ne16_streamin_avgpool>
1c008436:	0115a423          	sw	a7,8(a1)
1c00843a:	18080793          	addi	a5,a6,384
1c00843e:	00f5a623          	sw	a5,12(a1)
1c008442:	1c080793          	addi	a5,a6,448
1c008446:	00f5a823          	sw	a5,16(a1)
1c00844a:	20080793          	addi	a5,a6,512
1c00844e:	00f5aa23          	sw	a5,20(a1)
1c008452:	1c001537          	lui	a0,0x1c001
1c008456:	4719                	li	a4,6
1c008458:	89050513          	addi	a0,a0,-1904 # 1c000890 <stack>
1c00845c:	012450fb          	lp.setupi	x1,18,1c00846c <run_test+0x2a8>
1c008460:	00271693          	slli	a3,a4,0x2
1c008464:	20d57603          	p.lw	a2,a3(a0)
1c008468:	00c5e6a3          	p.sw	a2,a3(a1)
1c00846c:	0705                	addi	a4,a4,1
1c00846e:	102017b7          	lui	a5,0x10201
1c008472:	0007a023          	sw	zero,0(a5) # 10201000 <__l2_shared_end+0x1c6aac>
1c008476:	10201637          	lui	a2,0x10201
1c00847a:	0611                	addi	a2,a2,4
1c00847c:	421c                	lw	a5,0(a2)
1c00847e:	0007dc63          	bgez	a5,1c008496 <run_test+0x2d2>
1c008482:	6705                	lui	a4,0x1
1c008484:	002047b7          	lui	a5,0x204
1c008488:	c798                	sw	a4,8(a5)
1c00848a:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1fe590>
1c00848e:	c3d8                	sw	a4,4(a5)
1c008490:	4214                	lw	a3,0(a2)
1c008492:	fe06cbe3          	bltz	a3,1c008488 <run_test+0x2c4>
1c008496:	102015b7          	lui	a1,0x10201
1c00849a:	004007b7          	lui	a5,0x400
1c00849e:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x1c6acc>
1c0084a2:	0c078793          	addi	a5,a5,192 # 4000c0 <__l1_heap_size+0x3fa614>
1c0084a6:	00f5a023          	sw	a5,0(a1)
1c0084aa:	0115a223          	sw	a7,4(a1)
1c0084ae:	1002a537          	lui	a0,0x1002a
1c0084b2:	55050e13          	addi	t3,a0,1360 # 1002a550 <ne16_streamin_no_normquant>
1c0084b6:	01c5a423          	sw	t3,8(a1)
1c0084ba:	20480793          	addi	a5,a6,516
1c0084be:	00f5a623          	sw	a5,12(a1)
1c0084c2:	30480793          	addi	a5,a6,772
1c0084c6:	00f5a823          	sw	a5,16(a1)
1c0084ca:	30880793          	addi	a5,a6,776
1c0084ce:	00f5aa23          	sw	a5,20(a1)
1c0084d2:	1c0018b7          	lui	a7,0x1c001
1c0084d6:	4719                	li	a4,6
1c0084d8:	8f088893          	addi	a7,a7,-1808 # 1c0008f0 <ne16_cfg_no_normquant>
1c0084dc:	012450fb          	lp.setupi	x1,18,1c0084ec <run_test+0x328>
1c0084e0:	00271693          	slli	a3,a4,0x2
1c0084e4:	20d8f603          	p.lw	a2,a3(a7)
1c0084e8:	00c5e6a3          	p.sw	a2,a3(a1)
1c0084ec:	0705                	addi	a4,a4,1
1c0084ee:	102017b7          	lui	a5,0x10201
1c0084f2:	0007a023          	sw	zero,0(a5) # 10201000 <__l2_shared_end+0x1c6aac>
1c0084f6:	10201637          	lui	a2,0x10201
1c0084fa:	0611                	addi	a2,a2,4
1c0084fc:	421c                	lw	a5,0(a2)
1c0084fe:	0007dc63          	bgez	a5,1c008516 <run_test+0x352>
1c008502:	6705                	lui	a4,0x1
1c008504:	002047b7          	lui	a5,0x204
1c008508:	c798                	sw	a4,8(a5)
1c00850a:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1fe590>
1c00850e:	c3d8                	sw	a4,4(a5)
1c008510:	4214                	lw	a3,0(a2)
1c008512:	fe06cbe3          	bltz	a3,1c008508 <run_test+0x344>
1c008516:	102015b7          	lui	a1,0x10201
1c00851a:	004017b7          	lui	a5,0x401
1c00851e:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x1c6acc>
1c008522:	0c078793          	addi	a5,a5,192 # 4010c0 <__l1_heap_size+0x3fb614>
1c008526:	00f5a023          	sw	a5,0(a1)
1c00852a:	0065a223          	sw	t1,4(a1)
1c00852e:	01c5a423          	sw	t3,8(a1)
1c008532:	30c80793          	addi	a5,a6,780
1c008536:	00f5a623          	sw	a5,12(a1)
1c00853a:	40c80793          	addi	a5,a6,1036
1c00853e:	00f5a823          	sw	a5,16(a1)
1c008542:	44c80813          	addi	a6,a6,1100
1c008546:	0105aa23          	sw	a6,20(a1)
1c00854a:	1c001837          	lui	a6,0x1c001
1c00854e:	4719                	li	a4,6
1c008550:	9b080813          	addi	a6,a6,-1616 # 1c0009b0 <ne16_cfg_streamin>
1c008554:	012450fb          	lp.setupi	x1,18,1c008564 <run_test+0x3a0>
1c008558:	00271693          	slli	a3,a4,0x2
1c00855c:	20d87603          	p.lw	a2,a3(a6)
1c008560:	00c5e6a3          	p.sw	a2,a3(a1)
1c008564:	0705                	addi	a4,a4,1
1c008566:	10201637          	lui	a2,0x10201
1c00856a:	00062023          	sw	zero,0(a2) # 10201000 <__l2_shared_end+0x1c6aac>
1c00856e:	6705                	lui	a4,0x1
1c008570:	002047b7          	lui	a5,0x204
1c008574:	0631                	addi	a2,a2,12
1c008576:	c798                	sw	a4,8(a5)
1c008578:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1fe590>
1c00857c:	c3d8                	sw	a4,4(a5)
1c00857e:	4214                	lw	a3,0(a2)
1c008580:	fafd                	bnez	a3,1c008576 <run_test+0x3b2>
1c008582:	102007b7          	lui	a5,0x10200
1c008586:	07e1                	addi	a5,a5,24
1c008588:	4398                	lw	a4,0(a5)
1c00858a:	1c0165b7          	lui	a1,0x1c016
1c00858e:	6611                	lui	a2,0x4
1c008590:	c0b73733          	p.bclr	a4,a4,0,11
1c008594:	c398                	sw	a4,0(a5)
1c008596:	8c058593          	addi	a1,a1,-1856 # 1c0158c0 <ne16_outfeat_streamin>
1c00859a:	55050513          	addi	a0,a0,1360
1c00859e:	3645                	jal	1c00813e <ne16_compare_int>
1c0085a0:	40f2                	lw	ra,28(sp)
1c0085a2:	c62a                	sw	a0,12(sp)
1c0085a4:	4532                	lw	a0,12(sp)
1c0085a6:	6105                	addi	sp,sp,32
1c0085a8:	8082                	ret

1c0085aa <main>:
1c0085aa:	b929                	j	1c0081c4 <run_test>

1c0085ac <pos_fll_init>:
1c0085ac:	08152063          	p.beqimm	a0,1,1c00862c <pos_fll_init+0x80>
1c0085b0:	04252a63          	p.beqimm	a0,2,1c008604 <pos_fll_init+0x58>
1c0085b4:	c505                	beqz	a0,1c0085dc <pos_fll_init+0x30>
1c0085b6:	4701                	li	a4,0
1c0085b8:	00470793          	addi	a5,a4,4 # 1004 <__cluster_text_size+0x1004>
1c0085bc:	05300613          	li	a2,83
1c0085c0:	00c70693          	addi	a3,a4,12
1c0085c4:	c390                	sw	a2,0(a5)
1c0085c6:	020c17b7          	lui	a5,0x20c1
1c0085ca:	0721                	addi	a4,a4,8
1c0085cc:	0006a023          	sw	zero,0(a3)
1c0085d0:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20bbd2e>
1c0085d4:	c31c                	sw	a5,0(a4)
1c0085d6:	05f68537          	lui	a0,0x5f68
1c0085da:	8082                	ret
1c0085dc:	1a1007b7          	lui	a5,0x1a100
1c0085e0:	00878713          	addi	a4,a5,8 # 1a100008 <__l2_shared_end+0xa0c5ab4>
1c0085e4:	00c78693          	addi	a3,a5,12
1c0085e8:	05300613          	li	a2,83
1c0085ec:	0791                	addi	a5,a5,4
1c0085ee:	c390                	sw	a2,0(a5)
1c0085f0:	020c17b7          	lui	a5,0x20c1
1c0085f4:	0006a023          	sw	zero,0(a3)
1c0085f8:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20bbd2e>
1c0085fc:	c31c                	sw	a5,0(a4)
1c0085fe:	05f68537          	lui	a0,0x5f68
1c008602:	8082                	ret
1c008604:	1a1007b7          	lui	a5,0x1a100
1c008608:	01878713          	addi	a4,a5,24 # 1a100018 <__l2_shared_end+0xa0c5ac4>
1c00860c:	01c78693          	addi	a3,a5,28
1c008610:	05300613          	li	a2,83
1c008614:	07d1                	addi	a5,a5,20
1c008616:	c390                	sw	a2,0(a5)
1c008618:	020c17b7          	lui	a5,0x20c1
1c00861c:	0006a023          	sw	zero,0(a3)
1c008620:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20bbd2e>
1c008624:	c31c                	sw	a5,0(a4)
1c008626:	05f68537          	lui	a0,0x5f68
1c00862a:	8082                	ret
1c00862c:	1a1007b7          	lui	a5,0x1a100
1c008630:	02878713          	addi	a4,a5,40 # 1a100028 <__l2_shared_end+0xa0c5ad4>
1c008634:	02c78693          	addi	a3,a5,44
1c008638:	05300613          	li	a2,83
1c00863c:	02478793          	addi	a5,a5,36
1c008640:	c390                	sw	a2,0(a5)
1c008642:	020c17b7          	lui	a5,0x20c1
1c008646:	0006a023          	sw	zero,0(a3)
1c00864a:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20bbd2e>
1c00864e:	c31c                	sw	a5,0(a4)
1c008650:	05f68537          	lui	a0,0x5f68
1c008654:	8082                	ret

1c008656 <pos_soc_init>:
1c008656:	8082                	ret

1c008658 <pos_wait_forever>:
1c008658:	f14027f3          	csrr	a5,mhartid
1c00865c:	477d                	li	a4,31
1c00865e:	ca5797b3          	p.extractu	a5,a5,5,5
1c008662:	00e78963          	beq	a5,a4,1c008674 <pos_wait_forever+0x1c>
1c008666:	002047b7          	lui	a5,0x204
1c00866a:	577d                	li	a4,-1
1c00866c:	c3d8                	sw	a4,4(a5)
1c00866e:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1fe58c>
1c008672:	a001                	j	1c008672 <pos_wait_forever+0x1a>
1c008674:	1a10a7b7          	lui	a5,0x1a10a
1c008678:	577d                	li	a4,-1
1c00867a:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa0cf2b4>
1c00867e:	10500073          	wfi
1c008682:	10500073          	wfi
1c008686:	bfe5                	j	1c00867e <pos_wait_forever+0x26>

1c008688 <memcpy>:
1c008688:	00a5e7b3          	or	a5,a1,a0
1c00868c:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008690:	cf81                	beqz	a5,1c0086a8 <memcpy+0x20>
1c008692:	87aa                	mv	a5,a0
1c008694:	ce0d                	beqz	a2,1c0086ce <memcpy+0x46>
1c008696:	006640fb          	lp.setup	x1,a2,1c0086a2 <memcpy+0x1a>
1c00869a:	0005c703          	lbu	a4,0(a1)
1c00869e:	0785                	addi	a5,a5,1
1c0086a0:	0585                	addi	a1,a1,1
1c0086a2:	fee78fa3          	sb	a4,-1(a5)
1c0086a6:	8082                	ret
1c0086a8:	fa2637b3          	p.bclr	a5,a2,29,2
1c0086ac:	ef99                	bnez	a5,1c0086ca <memcpy+0x42>
1c0086ae:	de65                	beqz	a2,1c0086a6 <memcpy+0x1e>
1c0086b0:	1671                	addi	a2,a2,-4
1c0086b2:	00265793          	srli	a5,a2,0x2
1c0086b6:	872a                	mv	a4,a0
1c0086b8:	0785                	addi	a5,a5,1
1c0086ba:	0057c0fb          	lp.setup	x1,a5,1c0086c4 <memcpy+0x3c>
1c0086be:	4194                	lw	a3,0(a1)
1c0086c0:	0711                	addi	a4,a4,4
1c0086c2:	0591                	addi	a1,a1,4
1c0086c4:	fed72e23          	sw	a3,-4(a4)
1c0086c8:	8082                	ret
1c0086ca:	87aa                	mv	a5,a0
1c0086cc:	b7e9                	j	1c008696 <memcpy+0xe>
1c0086ce:	8082                	ret

1c0086d0 <memmove>:
1c0086d0:	40b507b3          	sub	a5,a0,a1
1c0086d4:	00c7fd63          	bleu	a2,a5,1c0086ee <memmove+0x1e>
1c0086d8:	87b2                	mv	a5,a2
1c0086da:	0077c0fb          	lp.setup	x1,a5,1c0086e8 <memmove+0x18>
1c0086de:	167d                	addi	a2,a2,-1
1c0086e0:	00c58733          	add	a4,a1,a2
1c0086e4:	00074703          	lbu	a4,0(a4)
1c0086e8:	00e54623          	p.sb	a4,a2(a0)
1c0086ec:	8082                	ret
1c0086ee:	87aa                	mv	a5,a0
1c0086f0:	ca01                	beqz	a2,1c008700 <memmove+0x30>
1c0086f2:	004640fb          	lp.setup	x1,a2,1c0086fa <memmove+0x2a>
1c0086f6:	0015c70b          	p.lbu	a4,1(a1!)
1c0086fa:	00e780ab          	p.sb	a4,1(a5!)
1c0086fe:	8082                	ret
1c008700:	8082                	ret

1c008702 <strchr>:
1c008702:	00054783          	lbu	a5,0(a0) # 5f68000 <__l1_heap_size+0x5f62554>
1c008706:	0ff5f593          	andi	a1,a1,255
1c00870a:	00b78863          	beq	a5,a1,1c00871a <strchr+0x18>
1c00870e:	c799                	beqz	a5,1c00871c <strchr+0x1a>
1c008710:	0505                	addi	a0,a0,1
1c008712:	00054783          	lbu	a5,0(a0)
1c008716:	feb79ce3          	bne	a5,a1,1c00870e <strchr+0xc>
1c00871a:	8082                	ret
1c00871c:	0015b593          	seqz	a1,a1
1c008720:	40b005b3          	neg	a1,a1
1c008724:	8d6d                	and	a0,a0,a1
1c008726:	8082                	ret

1c008728 <puts>:
1c008728:	00054783          	lbu	a5,0(a0)
1c00872c:	1a104737          	lui	a4,0x1a104
1c008730:	02070713          	addi	a4,a4,32 # 1a104020 <__l2_shared_end+0xa0c9acc>
1c008734:	c791                	beqz	a5,1c008740 <puts+0x18>
1c008736:	c31c                	sw	a5,0(a4)
1c008738:	0505                	addi	a0,a0,1
1c00873a:	00054783          	lbu	a5,0(a0)
1c00873e:	ffe5                	bnez	a5,1c008736 <puts+0xe>
1c008740:	1a1047b7          	lui	a5,0x1a104
1c008744:	4729                	li	a4,10
1c008746:	d398                	sw	a4,32(a5)
1c008748:	4501                	li	a0,0
1c00874a:	8082                	ret

1c00874c <pos_libc_fputc_locked>:
1c00874c:	1a1047b7          	lui	a5,0x1a104
1c008750:	0ff57513          	andi	a0,a0,255
1c008754:	d388                	sw	a0,32(a5)
1c008756:	4501                	li	a0,0
1c008758:	8082                	ret

1c00875a <pos_libc_prf_locked>:
1c00875a:	a87d                	j	1c008818 <pos_libc_prf>

1c00875c <exit>:
1c00875c:	1141                	addi	sp,sp,-16
1c00875e:	c606                	sw	ra,12(sp)
1c008760:	1a1047b7          	lui	a5,0x1a104
1c008764:	c1f54533          	p.bset	a0,a0,0,31
1c008768:	0aa7a023          	sw	a0,160(a5) # 1a1040a0 <__l2_shared_end+0xa0c9b4c>
1c00876c:	35f5                	jal	1c008658 <pos_wait_forever>

1c00876e <pos_io_start>:
1c00876e:	4501                	li	a0,0
1c008770:	8082                	ret

1c008772 <pos_io_stop>:
1c008772:	4501                	li	a0,0
1c008774:	8082                	ret

1c008776 <printf>:
1c008776:	7139                	addi	sp,sp,-64
1c008778:	02410313          	addi	t1,sp,36
1c00877c:	d432                	sw	a2,40(sp)
1c00877e:	862a                	mv	a2,a0
1c008780:	1c008537          	lui	a0,0x1c008
1c008784:	d22e                	sw	a1,36(sp)
1c008786:	d636                	sw	a3,44(sp)
1c008788:	4589                	li	a1,2
1c00878a:	869a                	mv	a3,t1
1c00878c:	74c50513          	addi	a0,a0,1868 # 1c00874c <pos_libc_fputc_locked>
1c008790:	ce06                	sw	ra,28(sp)
1c008792:	d83a                	sw	a4,48(sp)
1c008794:	da3e                	sw	a5,52(sp)
1c008796:	dc42                	sw	a6,56(sp)
1c008798:	de46                	sw	a7,60(sp)
1c00879a:	c61a                	sw	t1,12(sp)
1c00879c:	3f7d                	jal	1c00875a <pos_libc_prf_locked>
1c00879e:	40f2                	lw	ra,28(sp)
1c0087a0:	6121                	addi	sp,sp,64
1c0087a2:	8082                	ret

1c0087a4 <pos_libc_to_x>:
1c0087a4:	872a                	mv	a4,a0
1c0087a6:	88aa                	mv	a7,a0
1c0087a8:	4e25                	li	t3,9
1c0087aa:	02c5f333          	remu	t1,a1,a2
1c0087ae:	4781                	li	a5,0
1c0087b0:	00188813          	addi	a6,a7,1
1c0087b4:	0ff37513          	andi	a0,t1,255
1c0087b8:	02c5d5b3          	divu	a1,a1,a2
1c0087bc:	03050513          	addi	a0,a0,48
1c0087c0:	006e7463          	bleu	t1,t3,1c0087c8 <pos_libc_to_x+0x24>
1c0087c4:	02700793          	li	a5,39
1c0087c8:	97aa                	add	a5,a5,a0
1c0087ca:	00f88023          	sb	a5,0(a7)
1c0087ce:	88c2                	mv	a7,a6
1c0087d0:	fde9                	bnez	a1,1c0087aa <pos_libc_to_x+0x6>
1c0087d2:	40e80533          	sub	a0,a6,a4
1c0087d6:	02d55f63          	ble	a3,a0,1c008814 <pos_libc_to_x+0x70>
1c0087da:	410707b3          	sub	a5,a4,a6
1c0087de:	03000613          	li	a2,48
1c0087e2:	96be                	add	a3,a3,a5
1c0087e4:	0086c0fb          	lp.setup	x1,a3,1c0087f4 <pos_libc_to_x+0x50>
1c0087e8:	00180793          	addi	a5,a6,1
1c0087ec:	00c80023          	sb	a2,0(a6)
1c0087f0:	40e78533          	sub	a0,a5,a4
1c0087f4:	883e                	mv	a6,a5
1c0087f6:	fe078fab          	p.sb	zero,-1(a5!)
1c0087fa:	00f77c63          	bleu	a5,a4,1c008812 <pos_libc_to_x+0x6e>
1c0087fe:	00074603          	lbu	a2,0(a4)
1c008802:	0007c683          	lbu	a3,0(a5)
1c008806:	fec78fab          	p.sb	a2,-1(a5!)
1c00880a:	00d700ab          	p.sb	a3,1(a4!)
1c00880e:	fef768e3          	bltu	a4,a5,1c0087fe <pos_libc_to_x+0x5a>
1c008812:	8082                	ret
1c008814:	87c2                	mv	a5,a6
1c008816:	b7c5                	j	1c0087f6 <pos_libc_to_x+0x52>

1c008818 <pos_libc_prf>:
1c008818:	7169                	addi	sp,sp,-304
1c00881a:	12912223          	sw	s1,292(sp)
1c00881e:	13212023          	sw	s2,288(sp)
1c008822:	11312e23          	sw	s3,284(sp)
1c008826:	11412c23          	sw	s4,280(sp)
1c00882a:	11512a23          	sw	s5,276(sp)
1c00882e:	dfee                	sw	s11,252(sp)
1c008830:	12112623          	sw	ra,300(sp)
1c008834:	12812423          	sw	s0,296(sp)
1c008838:	11612823          	sw	s6,272(sp)
1c00883c:	11712623          	sw	s7,268(sp)
1c008840:	11812423          	sw	s8,264(sp)
1c008844:	11912223          	sw	s9,260(sp)
1c008848:	11a12023          	sw	s10,256(sp)
1c00884c:	84aa                	mv	s1,a0
1c00884e:	8a2e                	mv	s4,a1
1c008850:	8db2                	mv	s11,a2
1c008852:	8936                	mv	s2,a3
1c008854:	4a81                	li	s5,0
1c008856:	1c0009b7          	lui	s3,0x1c000
1c00885a:	000dc503          	lbu	a0,0(s11)
1c00885e:	0d85                	addi	s11,s11,1
1c008860:	cd11                	beqz	a0,1c00887c <pos_libc_prf+0x64>
1c008862:	02500793          	li	a5,37
1c008866:	04f50763          	beq	a0,a5,1c0088b4 <pos_libc_prf+0x9c>
1c00886a:	85d2                	mv	a1,s4
1c00886c:	9482                	jalr	s1
1c00886e:	15f52c63          	p.beqimm	a0,-1,1c0089c6 <pos_libc_prf+0x1ae>
1c008872:	0a85                	addi	s5,s5,1
1c008874:	000dc503          	lbu	a0,0(s11)
1c008878:	0d85                	addi	s11,s11,1
1c00887a:	f565                	bnez	a0,1c008862 <pos_libc_prf+0x4a>
1c00887c:	12c12083          	lw	ra,300(sp)
1c008880:	12812403          	lw	s0,296(sp)
1c008884:	8556                	mv	a0,s5
1c008886:	12412483          	lw	s1,292(sp)
1c00888a:	12012903          	lw	s2,288(sp)
1c00888e:	11c12983          	lw	s3,284(sp)
1c008892:	11812a03          	lw	s4,280(sp)
1c008896:	11412a83          	lw	s5,276(sp)
1c00889a:	11012b03          	lw	s6,272(sp)
1c00889e:	10c12b83          	lw	s7,268(sp)
1c0088a2:	10812c03          	lw	s8,264(sp)
1c0088a6:	10412c83          	lw	s9,260(sp)
1c0088aa:	10012d03          	lw	s10,256(sp)
1c0088ae:	5dfe                	lw	s11,252(sp)
1c0088b0:	6155                	addi	sp,sp,304
1c0088b2:	8082                	ret
1c0088b4:	000dcc03          	lbu	s8,0(s11)
1c0088b8:	02000313          	li	t1,32
1c0088bc:	001d8d13          	addi	s10,s11,1
1c0088c0:	07498513          	addi	a0,s3,116 # 1c000074 <__DTOR_END__+0x58>
1c0088c4:	85e2                	mv	a1,s8
1c0088c6:	c21a                	sw	t1,4(sp)
1c0088c8:	c602                	sw	zero,12(sp)
1c0088ca:	c402                	sw	zero,8(sp)
1c0088cc:	c802                	sw	zero,16(sp)
1c0088ce:	c002                	sw	zero,0(sp)
1c0088d0:	02300413          	li	s0,35
1c0088d4:	02d00b93          	li	s7,45
1c0088d8:	03000c93          	li	s9,48
1c0088dc:	8b6a                	mv	s6,s10
1c0088de:	3515                	jal	1c008702 <strchr>
1c0088e0:	c905                	beqz	a0,1c008910 <pos_libc_prf+0xf8>
1c0088e2:	108c0b63          	beq	s8,s0,1c0089f8 <pos_libc_prf+0x1e0>
1c0088e6:	0f847263          	bleu	s8,s0,1c0089ca <pos_libc_prf+0x1b2>
1c0088ea:	117c0363          	beq	s8,s7,1c0089f0 <pos_libc_prf+0x1d8>
1c0088ee:	0f9c0c63          	beq	s8,s9,1c0089e6 <pos_libc_prf+0x1ce>
1c0088f2:	02b00593          	li	a1,43
1c0088f6:	0ebc0463          	beq	s8,a1,1c0089de <pos_libc_prf+0x1c6>
1c0088fa:	8dea                	mv	s11,s10
1c0088fc:	000dcc03          	lbu	s8,0(s11)
1c008900:	001d8d13          	addi	s10,s11,1
1c008904:	07498513          	addi	a0,s3,116
1c008908:	85e2                	mv	a1,s8
1c00890a:	8b6a                	mv	s6,s10
1c00890c:	3bdd                	jal	1c008702 <strchr>
1c00890e:	f971                	bnez	a0,1c0088e2 <pos_libc_prf+0xca>
1c008910:	02a00613          	li	a2,42
1c008914:	10cc0863          	beq	s8,a2,1c008a24 <pos_libc_prf+0x20c>
1c008918:	fd0c0613          	addi	a2,s8,-48
1c00891c:	45a5                	li	a1,9
1c00891e:	4401                	li	s0,0
1c008920:	0ec5f263          	bleu	a2,a1,1c008a04 <pos_libc_prf+0x1ec>
1c008924:	02e00713          	li	a4,46
1c008928:	5bfd                	li	s7,-1
1c00892a:	14ec0563          	beq	s8,a4,1c008a74 <pos_libc_prf+0x25c>
1c00892e:	1c000537          	lui	a0,0x1c000
1c008932:	85e2                	mv	a1,s8
1c008934:	07c50513          	addi	a0,a0,124 # 1c00007c <__DTOR_END__+0x60>
1c008938:	33e9                	jal	1c008702 <strchr>
1c00893a:	8dda                	mv	s11,s6
1c00893c:	c509                	beqz	a0,1c008946 <pos_libc_prf+0x12e>
1c00893e:	000b4c03          	lbu	s8,0(s6)
1c008942:	001b0d93          	addi	s11,s6,1
1c008946:	06700713          	li	a4,103
1c00894a:	0f875b63          	ble	s8,a4,1c008a40 <pos_libc_prf+0x228>
1c00894e:	07000713          	li	a4,112
1c008952:	60ec0863          	beq	s8,a4,1c008f62 <pos_libc_prf+0x74a>
1c008956:	15875363          	ble	s8,a4,1c008a9c <pos_libc_prf+0x284>
1c00895a:	07500713          	li	a4,117
1c00895e:	5cec0963          	beq	s8,a4,1c008f30 <pos_libc_prf+0x718>
1c008962:	07800713          	li	a4,120
1c008966:	4cec0b63          	beq	s8,a4,1c008e3c <pos_libc_prf+0x624>
1c00896a:	07300713          	li	a4,115
1c00896e:	62ec1463          	bne	s8,a4,1c008f96 <pos_libc_prf+0x77e>
1c008972:	00092583          	lw	a1,0(s2)
1c008976:	00490b13          	addi	s6,s2,4
1c00897a:	4d01                	li	s10,0
1c00897c:	0c8450fb          	lp.setupi	x1,200,1c00898c <pos_libc_prf+0x174>
1c008980:	01a58733          	add	a4,a1,s10
1c008984:	00074703          	lbu	a4,0(a4)
1c008988:	60070d63          	beqz	a4,1c008fa2 <pos_libc_prf+0x78a>
1c00898c:	0d05                	addi	s10,s10,1
1c00898e:	000bc763          	bltz	s7,1c00899c <pos_libc_prf+0x184>
1c008992:	057d4d33          	p.min	s10,s10,s7
1c008996:	895a                	mv	s2,s6
1c008998:	ec0d01e3          	beqz	s10,1c00885a <pos_libc_prf+0x42>
1c00899c:	866a                	mv	a2,s10
1c00899e:	1048                	addi	a0,sp,36
1c0089a0:	31e5                	jal	1c008688 <memcpy>
1c0089a2:	895a                	mv	s2,s6
1c0089a4:	4e8d4663          	blt	s10,s0,1c008e90 <pos_libc_prf+0x678>
1c0089a8:	846a                	mv	s0,s10
1c0089aa:	02410b13          	addi	s6,sp,36
1c0089ae:	a029                	j	1c0089b8 <pos_libc_prf+0x1a0>
1c0089b0:	0b05                	addi	s6,s6,1
1c0089b2:	0a85                	addi	s5,s5,1
1c0089b4:	ea0403e3          	beqz	s0,1c00885a <pos_libc_prf+0x42>
1c0089b8:	000b4503          	lbu	a0,0(s6)
1c0089bc:	85d2                	mv	a1,s4
1c0089be:	147d                	addi	s0,s0,-1
1c0089c0:	9482                	jalr	s1
1c0089c2:	fff537e3          	p.bneimm	a0,-1,1c0089b0 <pos_libc_prf+0x198>
1c0089c6:	5afd                	li	s5,-1
1c0089c8:	bd55                	j	1c00887c <pos_libc_prf+0x64>
1c0089ca:	ea0c09e3          	beqz	s8,1c00887c <pos_libc_prf+0x64>
1c0089ce:	02000313          	li	t1,32
1c0089d2:	f26c14e3          	bne	s8,t1,1c0088fa <pos_libc_prf+0xe2>
1c0089d6:	4685                	li	a3,1
1c0089d8:	c636                	sw	a3,12(sp)
1c0089da:	8dea                	mv	s11,s10
1c0089dc:	b705                	j	1c0088fc <pos_libc_prf+0xe4>
1c0089de:	4605                	li	a2,1
1c0089e0:	c432                	sw	a2,8(sp)
1c0089e2:	8dea                	mv	s11,s10
1c0089e4:	bf21                	j	1c0088fc <pos_libc_prf+0xe4>
1c0089e6:	03000793          	li	a5,48
1c0089ea:	c23e                	sw	a5,4(sp)
1c0089ec:	8dea                	mv	s11,s10
1c0089ee:	b739                	j	1c0088fc <pos_libc_prf+0xe4>
1c0089f0:	4805                	li	a6,1
1c0089f2:	c842                	sw	a6,16(sp)
1c0089f4:	8dea                	mv	s11,s10
1c0089f6:	b719                	j	1c0088fc <pos_libc_prf+0xe4>
1c0089f8:	4705                	li	a4,1
1c0089fa:	c03a                	sw	a4,0(sp)
1c0089fc:	8dea                	mv	s11,s10
1c0089fe:	bdfd                	j	1c0088fc <pos_libc_prf+0xe4>
1c008a00:	8dea                	mv	s11,s10
1c008a02:	0d05                	addi	s10,s10,1
1c008a04:	00241793          	slli	a5,s0,0x2
1c008a08:	97a2                	add	a5,a5,s0
1c008a0a:	0786                	slli	a5,a5,0x1
1c008a0c:	97e2                	add	a5,a5,s8
1c008a0e:	000d4c03          	lbu	s8,0(s10)
1c008a12:	fd078413          	addi	s0,a5,-48
1c008a16:	fd0c0793          	addi	a5,s8,-48
1c008a1a:	fef5f3e3          	bleu	a5,a1,1c008a00 <pos_libc_prf+0x1e8>
1c008a1e:	002d8b13          	addi	s6,s11,2
1c008a22:	a811                	j	1c008a36 <pos_libc_prf+0x21e>
1c008a24:	00092403          	lw	s0,0(s2)
1c008a28:	0911                	addi	s2,s2,4
1c008a2a:	0e044263          	bltz	s0,1c008b0e <pos_libc_prf+0x2f6>
1c008a2e:	000d4c03          	lbu	s8,0(s10)
1c008a32:	002d8b13          	addi	s6,s11,2
1c008a36:	0c800713          	li	a4,200
1c008a3a:	04e45433          	p.minu	s0,s0,a4
1c008a3e:	b5dd                	j	1c008924 <pos_libc_prf+0x10c>
1c008a40:	06500713          	li	a4,101
1c008a44:	0cec5a63          	ble	a4,s8,1c008b18 <pos_libc_prf+0x300>
1c008a48:	04700713          	li	a4,71
1c008a4c:	3d874e63          	blt	a4,s8,1c008e28 <pos_libc_prf+0x610>
1c008a50:	04500713          	li	a4,69
1c008a54:	0cec5263          	ble	a4,s8,1c008b18 <pos_libc_prf+0x300>
1c008a58:	e20c02e3          	beqz	s8,1c00887c <pos_libc_prf+0x64>
1c008a5c:	02500713          	li	a4,37
1c008a60:	52ec1b63          	bne	s8,a4,1c008f96 <pos_libc_prf+0x77e>
1c008a64:	85d2                	mv	a1,s4
1c008a66:	02500513          	li	a0,37
1c008a6a:	9482                	jalr	s1
1c008a6c:	f5f52de3          	p.beqimm	a0,-1,1c0089c6 <pos_libc_prf+0x1ae>
1c008a70:	0a85                	addi	s5,s5,1
1c008a72:	b509                	j	1c008874 <pos_libc_prf+0x5c>
1c008a74:	000b4783          	lbu	a5,0(s6)
1c008a78:	02a00713          	li	a4,42
1c008a7c:	001b0693          	addi	a3,s6,1
1c008a80:	04e79c63          	bne	a5,a4,1c008ad8 <pos_libc_prf+0x2c0>
1c008a84:	00092b83          	lw	s7,0(s2)
1c008a88:	001b4c03          	lbu	s8,1(s6)
1c008a8c:	0911                	addi	s2,s2,4
1c008a8e:	0b09                	addi	s6,s6,2
1c008a90:	0c800713          	li	a4,200
1c008a94:	e9775de3          	ble	s7,a4,1c00892e <pos_libc_prf+0x116>
1c008a98:	5bfd                	li	s7,-1
1c008a9a:	bd51                	j	1c00892e <pos_libc_prf+0x116>
1c008a9c:	06e00713          	li	a4,110
1c008aa0:	4aec0b63          	beq	s8,a4,1c008f56 <pos_libc_prf+0x73e>
1c008aa4:	43875263          	ble	s8,a4,1c008ec8 <pos_libc_prf+0x6b0>
1c008aa8:	4802                	lw	a6,0(sp)
1c008aaa:	00490b13          	addi	s6,s2,4
1c008aae:	00092583          	lw	a1,0(s2)
1c008ab2:	0e0802e3          	beqz	a6,1c009396 <pos_libc_prf+0xb7e>
1c008ab6:	03000793          	li	a5,48
1c008aba:	02f10223          	sb	a5,36(sp)
1c008abe:	0a0592e3          	bnez	a1,1c009362 <pos_libc_prf+0xb4a>
1c008ac2:	020102a3          	sb	zero,37(sp)
1c008ac6:	895a                	mv	s2,s6
1c008ac8:	8d42                	mv	s10,a6
1c008aca:	edfbade3          	p.beqimm	s7,-1,1c0089a4 <pos_libc_prf+0x18c>
1c008ace:	02000813          	li	a6,32
1c008ad2:	4d02                	lw	s10,0(sp)
1c008ad4:	c242                	sw	a6,4(sp)
1c008ad6:	b5f9                	j	1c0089a4 <pos_libc_prf+0x18c>
1c008ad8:	fd078593          	addi	a1,a5,-48
1c008adc:	4725                	li	a4,9
1c008ade:	8c3e                	mv	s8,a5
1c008ae0:	4b81                	li	s7,0
1c008ae2:	4625                	li	a2,9
1c008ae4:	00b77663          	bleu	a1,a4,1c008af0 <pos_libc_prf+0x2d8>
1c008ae8:	0230006f          	j	1c00930a <pos_libc_prf+0xaf2>
1c008aec:	8b36                	mv	s6,a3
1c008aee:	0685                	addi	a3,a3,1
1c008af0:	002b9793          	slli	a5,s7,0x2
1c008af4:	97de                	add	a5,a5,s7
1c008af6:	0786                	slli	a5,a5,0x1
1c008af8:	97e2                	add	a5,a5,s8
1c008afa:	0006cc03          	lbu	s8,0(a3)
1c008afe:	fd078b93          	addi	s7,a5,-48
1c008b02:	fd0c0793          	addi	a5,s8,-48
1c008b06:	fef673e3          	bleu	a5,a2,1c008aec <pos_libc_prf+0x2d4>
1c008b0a:	0b09                	addi	s6,s6,2
1c008b0c:	b751                	j	1c008a90 <pos_libc_prf+0x278>
1c008b0e:	4705                	li	a4,1
1c008b10:	40800433          	neg	s0,s0
1c008b14:	c83a                	sw	a4,16(sp)
1c008b16:	bf21                	j	1c008a2e <pos_libc_prf+0x216>
1c008b18:	091d                	addi	s2,s2,7
1c008b1a:	c4093933          	p.bclr	s2,s2,2,0
1c008b1e:	00092603          	lw	a2,0(s2)
1c008b22:	00492583          	lw	a1,4(s2)
1c008b26:	7ff00693          	li	a3,2047
1c008b2a:	01565513          	srli	a0,a2,0x15
1c008b2e:	0145d313          	srli	t1,a1,0x14
1c008b32:	00b59713          	slli	a4,a1,0xb
1c008b36:	8f49                	or	a4,a4,a0
1c008b38:	e8b33333          	p.bclr	t1,t1,20,11
1c008b3c:	0921                	addi	s2,s2,8
1c008b3e:	062e                	slli	a2,a2,0xb
1c008b40:	c1f73733          	p.bclr	a4,a4,0,31
1c008b44:	04d30be3          	beq	t1,a3,1c00939a <pos_libc_prf+0xb82>
1c008b48:	04600693          	li	a3,70
1c008b4c:	00dc1463          	bne	s8,a3,1c008b54 <pos_libc_prf+0x33c>
1c008b50:	06600c13          	li	s8,102
1c008b54:	00c366b3          	or	a3,t1,a2
1c008b58:	8ed9                	or	a3,a3,a4
1c008b5a:	7e068463          	beqz	a3,1c009342 <pos_libc_prf+0xb2a>
1c008b5e:	c0230313          	addi	t1,t1,-1022
1c008b62:	c1f74733          	p.bset	a4,a4,0,31
1c008b66:	2005cae3          	bltz	a1,1c00957a <pos_libc_prf+0xd62>
1c008b6a:	47a2                	lw	a5,8(sp)
1c008b6c:	1e0789e3          	beqz	a5,1c00955e <pos_libc_prf+0xd46>
1c008b70:	02b00693          	li	a3,43
1c008b74:	02d10223          	sb	a3,36(sp)
1c008b78:	02510b13          	addi	s6,sp,37
1c008b7c:	02410c93          	addi	s9,sp,36
1c008b80:	56f9                	li	a3,-2
1c008b82:	4381                	li	t2,0
1c008b84:	06d35763          	ble	a3,t1,1c008bf2 <pos_libc_prf+0x3da>
1c008b88:	33333537          	lui	a0,0x33333
1c008b8c:	80000837          	lui	a6,0x80000
1c008b90:	33250513          	addi	a0,a0,818 # 33333332 <ne16_weights_streamin+0x1730da72>
1c008b94:	fff84813          	not	a6,a6
1c008b98:	58f9                	li	a7,-2
1c008b9a:	a011                	j	1c008b9e <pos_libc_prf+0x386>
1c008b9c:	833e                	mv	t1,a5
1c008b9e:	01f71593          	slli	a1,a4,0x1f
1c008ba2:	00165693          	srli	a3,a2,0x1
1c008ba6:	fc1637b3          	p.bclr	a5,a2,30,1
1c008baa:	8ecd                	or	a3,a3,a1
1c008bac:	00d78633          	add	a2,a5,a3
1c008bb0:	00f637b3          	sltu	a5,a2,a5
1c008bb4:	8305                	srli	a4,a4,0x1
1c008bb6:	973e                	add	a4,a4,a5
1c008bb8:	00130793          	addi	a5,t1,1
1c008bbc:	fee560e3          	bltu	a0,a4,1c008b9c <pos_libc_prf+0x384>
1c008bc0:	00261593          	slli	a1,a2,0x2
1c008bc4:	01e65e13          	srli	t3,a2,0x1e
1c008bc8:	00271693          	slli	a3,a4,0x2
1c008bcc:	962e                	add	a2,a2,a1
1c008bce:	00de66b3          	or	a3,t3,a3
1c008bd2:	9736                	add	a4,a4,a3
1c008bd4:	00b635b3          	sltu	a1,a2,a1
1c008bd8:	972e                	add	a4,a4,a1
1c008bda:	01f65693          	srli	a3,a2,0x1f
1c008bde:	0309                	addi	t1,t1,2
1c008be0:	13fd                	addi	t2,t2,-1
1c008be2:	01071663          	bne	a4,a6,1c008bee <pos_libc_prf+0x3d6>
1c008be6:	0606                	slli	a2,a2,0x1
1c008be8:	fc16c733          	p.bset	a4,a3,30,1
1c008bec:	833e                	mv	t1,a5
1c008bee:	fb1348e3          	blt	t1,a7,1c008b9e <pos_libc_prf+0x386>
1c008bf2:	0e605763          	blez	t1,1c008ce0 <pos_libc_prf+0x4c8>
1c008bf6:	80000f37          	lui	t5,0x80000
1c008bfa:	4d15                	li	s10,5
1c008bfc:	ffff4f13          	not	t5,t5
1c008c00:	00260513          	addi	a0,a2,2 # 4002 <__cluster_text_size+0x4002>
1c008c04:	00c536b3          	sltu	a3,a0,a2
1c008c08:	00e688b3          	add	a7,a3,a4
1c008c0c:	02000793          	li	a5,32
1c008c10:	00189593          	slli	a1,a7,0x1
1c008c14:	fff7ce93          	not	t4,a5
1c008c18:	00f556b3          	srl	a3,a0,a5
1c008c1c:	01d595b3          	sll	a1,a1,t4
1c008c20:	0207fe13          	andi	t3,a5,32
1c008c24:	4601                	li	a2,0
1c008c26:	4701                	li	a4,0
1c008c28:	4801                	li	a6,0
1c008c2a:	8ecd                	or	a3,a3,a1
1c008c2c:	000e0463          	beqz	t3,1c008c34 <pos_libc_prf+0x41c>
1c008c30:	00f8d6b3          	srl	a3,a7,a5
1c008c34:	fff7ce93          	not	t4,a5
1c008c38:	03a6d6b3          	divu	a3,a3,s10
1c008c3c:	060e0d63          	beqz	t3,1c008cb6 <pos_libc_prf+0x49e>
1c008c40:	4581                	li	a1,0
1c008c42:	00f69eb3          	sll	t4,a3,a5
1c008c46:	00259693          	slli	a3,a1,0x2
1c008c4a:	01e5df93          	srli	t6,a1,0x1e
1c008c4e:	002e9793          	slli	a5,t4,0x2
1c008c52:	00b68e33          	add	t3,a3,a1
1c008c56:	00ffe7b3          	or	a5,t6,a5
1c008c5a:	95b2                	add	a1,a1,a2
1c008c5c:	97f6                	add	a5,a5,t4
1c008c5e:	00de36b3          	sltu	a3,t3,a3
1c008c62:	00c5bfb3          	sltu	t6,a1,a2
1c008c66:	1c001637          	lui	a2,0x1c001
1c008c6a:	96be                	add	a3,a3,a5
1c008c6c:	a7060613          	addi	a2,a2,-1424 # 1c000a70 <shifts.1764>
1c008c70:	01d707b3          	add	a5,a4,t4
1c008c74:	41c50e33          	sub	t3,a0,t3
1c008c78:	0805                	addi	a6,a6,1
1c008c7a:	010602b3          	add	t0,a2,a6
1c008c7e:	01c53eb3          	sltu	t4,a0,t3
1c008c82:	40d886b3          	sub	a3,a7,a3
1c008c86:	862e                	mv	a2,a1
1c008c88:	00ff8733          	add	a4,t6,a5
1c008c8c:	02382c63          	p.beqimm	a6,3,1c008cc4 <pos_libc_prf+0x4ac>
1c008c90:	0002c783          	lbu	a5,0(t0)
1c008c94:	41d688b3          	sub	a7,a3,t4
1c008c98:	8572                	mv	a0,t3
1c008c9a:	00189593          	slli	a1,a7,0x1
1c008c9e:	fff7ce93          	not	t4,a5
1c008ca2:	00f556b3          	srl	a3,a0,a5
1c008ca6:	01d595b3          	sll	a1,a1,t4
1c008caa:	0207fe13          	andi	t3,a5,32
1c008cae:	8ecd                	or	a3,a3,a1
1c008cb0:	f80e02e3          	beqz	t3,1c008c34 <pos_libc_prf+0x41c>
1c008cb4:	bfb5                	j	1c008c30 <pos_libc_prf+0x418>
1c008cb6:	0016de13          	srli	t3,a3,0x1
1c008cba:	00f695b3          	sll	a1,a3,a5
1c008cbe:	01de5eb3          	srl	t4,t3,t4
1c008cc2:	b751                	j	1c008c46 <pos_libc_prf+0x42e>
1c008cc4:	137d                	addi	t1,t1,-1
1c008cc6:	0385                	addi	t2,t2,1
1c008cc8:	00ef6a63          	bltu	t5,a4,1c008cdc <pos_libc_prf+0x4c4>
1c008ccc:	01f65793          	srli	a5,a2,0x1f
1c008cd0:	0706                	slli	a4,a4,0x1
1c008cd2:	8f5d                	or	a4,a4,a5
1c008cd4:	0606                	slli	a2,a2,0x1
1c008cd6:	137d                	addi	t1,t1,-1
1c008cd8:	feef7ae3          	bleu	a4,t5,1c008ccc <pos_libc_prf+0x4b4>
1c008cdc:	f26042e3          	bgtz	t1,1c008c00 <pos_libc_prf+0x3e8>
1c008ce0:	4691                	li	a3,4
1c008ce2:	40668333          	sub	t1,a3,t1
1c008ce6:	011340fb          	lp.setup	x1,t1,1c008d08 <pos_libc_prf+0x4f0>
1c008cea:	01f71693          	slli	a3,a4,0x1f
1c008cee:	00165793          	srli	a5,a2,0x1
1c008cf2:	8fd5                	or	a5,a5,a3
1c008cf4:	fc163633          	p.bclr	a2,a2,30,1
1c008cf8:	00f60d33          	add	s10,a2,a5
1c008cfc:	8305                	srli	a4,a4,0x1
1c008cfe:	00cd3633          	sltu	a2,s10,a2
1c008d02:	00e607b3          	add	a5,a2,a4
1c008d06:	873e                	mv	a4,a5
1c008d08:	866a                	mv	a2,s10
1c008d0a:	ce3e                	sw	a5,28(sp)
1c008d0c:	06700713          	li	a4,103
1c008d10:	6c0bc263          	bltz	s7,1c0093d4 <pos_libc_prf+0xbbc>
1c008d14:	5eec0e63          	beq	s8,a4,1c009310 <pos_libc_prf+0xaf8>
1c008d18:	04700713          	li	a4,71
1c008d1c:	5eec0a63          	beq	s8,a4,1c009310 <pos_libc_prf+0xaf8>
1c008d20:	06600713          	li	a4,102
1c008d24:	28ec0c63          	beq	s8,a4,1c008fbc <pos_libc_prf+0x7a4>
1c008d28:	001b8293          	addi	t0,s7,1
1c008d2c:	4341                	li	t1,16
1c008d2e:	0462c2b3          	p.min	t0,t0,t1
1c008d32:	12fd                	addi	t0,t0,-1
1c008d34:	cc02                	sw	zero,24(sp)
1c008d36:	001b0713          	addi	a4,s6,1
1c008d3a:	ca3a                	sw	a4,20(sp)
1c008d3c:	853a                	mv	a0,a4
1c008d3e:	4701                	li	a4,0
1c008d40:	080006b7          	lui	a3,0x8000
1c008d44:	4795                	li	a5,5
1c008d46:	00270e13          	addi	t3,a4,2
1c008d4a:	00ee3733          	sltu	a4,t3,a4
1c008d4e:	02000893          	li	a7,32
1c008d52:	9736                	add	a4,a4,a3
1c008d54:	00171593          	slli	a1,a4,0x1
1c008d58:	fff8cf13          	not	t5,a7
1c008d5c:	011e56b3          	srl	a3,t3,a7
1c008d60:	01e595b3          	sll	a1,a1,t5
1c008d64:	0208f813          	andi	a6,a7,32
1c008d68:	4301                	li	t1,0
1c008d6a:	4601                	li	a2,0
1c008d6c:	4e81                	li	t4,0
1c008d6e:	8ecd                	or	a3,a3,a1
1c008d70:	00080463          	beqz	a6,1c008d78 <pos_libc_prf+0x560>
1c008d74:	011756b3          	srl	a3,a4,a7
1c008d78:	fff8cf13          	not	t5,a7
1c008d7c:	02f6d6b3          	divu	a3,a3,a5
1c008d80:	06080a63          	beqz	a6,1c008df4 <pos_libc_prf+0x5dc>
1c008d84:	4581                	li	a1,0
1c008d86:	011698b3          	sll	a7,a3,a7
1c008d8a:	00259f13          	slli	t5,a1,0x2
1c008d8e:	01e5df93          	srli	t6,a1,0x1e
1c008d92:	00289693          	slli	a3,a7,0x2
1c008d96:	00bf0833          	add	a6,t5,a1
1c008d9a:	00dfe6b3          	or	a3,t6,a3
1c008d9e:	01e83f33          	sltu	t5,a6,t5
1c008da2:	959a                	add	a1,a1,t1
1c008da4:	96c6                	add	a3,a3,a7
1c008da6:	96fa                	add	a3,a3,t5
1c008da8:	0065bf33          	sltu	t5,a1,t1
1c008dac:	1c001337          	lui	t1,0x1c001
1c008db0:	9646                	add	a2,a2,a7
1c008db2:	a7030313          	addi	t1,t1,-1424 # 1c000a70 <shifts.1764>
1c008db6:	410e0833          	sub	a6,t3,a6
1c008dba:	0e85                	addi	t4,t4,1
1c008dbc:	01d30fb3          	add	t6,t1,t4
1c008dc0:	010e38b3          	sltu	a7,t3,a6
1c008dc4:	8f15                	sub	a4,a4,a3
1c008dc6:	832e                	mv	t1,a1
1c008dc8:	967a                	add	a2,a2,t5
1c008dca:	023eac63          	p.beqimm	t4,3,1c008e02 <pos_libc_prf+0x5ea>
1c008dce:	41170733          	sub	a4,a4,a7
1c008dd2:	000fc883          	lbu	a7,0(t6)
1c008dd6:	8e42                	mv	t3,a6
1c008dd8:	00171593          	slli	a1,a4,0x1
1c008ddc:	fff8cf13          	not	t5,a7
1c008de0:	011e56b3          	srl	a3,t3,a7
1c008de4:	01e595b3          	sll	a1,a1,t5
1c008de8:	0208f813          	andi	a6,a7,32
1c008dec:	8ecd                	or	a3,a3,a1
1c008dee:	f80805e3          	beqz	a6,1c008d78 <pos_libc_prf+0x560>
1c008df2:	b749                	j	1c008d74 <pos_libc_prf+0x55c>
1c008df4:	0016d813          	srli	a6,a3,0x1
1c008df8:	011695b3          	sll	a1,a3,a7
1c008dfc:	01e858b3          	srl	a7,a6,t5
1c008e00:	b769                	j	1c008d8a <pos_libc_prf+0x572>
1c008e02:	01f61693          	slli	a3,a2,0x1f
1c008e06:	0015d713          	srli	a4,a1,0x1
1c008e0a:	fc15b333          	p.bclr	t1,a1,30,1
1c008e0e:	8f55                	or	a4,a4,a3
1c008e10:	971a                	add	a4,a4,t1
1c008e12:	00165693          	srli	a3,a2,0x1
1c008e16:	00673333          	sltu	t1,a4,t1
1c008e1a:	969a                	add	a3,a3,t1
1c008e1c:	fff28613          	addi	a2,t0,-1
1c008e20:	1c028263          	beqz	t0,1c008fe4 <pos_libc_prf+0x7cc>
1c008e24:	82b2                	mv	t0,a2
1c008e26:	b705                	j	1c008d46 <pos_libc_prf+0x52e>
1c008e28:	06300713          	li	a4,99
1c008e2c:	0eec0963          	beq	s8,a4,1c008f1e <pos_libc_prf+0x706>
1c008e30:	0b874063          	blt	a4,s8,1c008ed0 <pos_libc_prf+0x6b8>
1c008e34:	05800713          	li	a4,88
1c008e38:	14ec1f63          	bne	s8,a4,1c008f96 <pos_libc_prf+0x77e>
1c008e3c:	4702                	lw	a4,0(sp)
1c008e3e:	00490b13          	addi	s6,s2,4
1c008e42:	00092583          	lw	a1,0(s2)
1c008e46:	44070063          	beqz	a4,1c009286 <pos_libc_prf+0xa6e>
1c008e4a:	7761                	lui	a4,0xffff8
1c008e4c:	83074713          	xori	a4,a4,-2000
1c008e50:	86de                	mv	a3,s7
1c008e52:	4641                	li	a2,16
1c008e54:	02610513          	addi	a0,sp,38
1c008e58:	02e11223          	sh	a4,36(sp)
1c008e5c:	32a1                	jal	1c0087a4 <pos_libc_to_x>
1c008e5e:	05800713          	li	a4,88
1c008e62:	8d2a                	mv	s10,a0
1c008e64:	78ec0e63          	beq	s8,a4,1c009600 <pos_libc_prf+0xde8>
1c008e68:	4309                	li	t1,2
1c008e6a:	00250d13          	addi	s10,a0,2
1c008e6e:	c01a                	sw	t1,0(sp)
1c008e70:	0c800793          	li	a5,200
1c008e74:	49fba763          	p.beqimm	s7,-1,1c009302 <pos_libc_prf+0xaea>
1c008e78:	b5a7c7e3          	blt	a5,s10,1c0089c6 <pos_libc_prf+0x1ae>
1c008e7c:	02000313          	li	t1,32
1c008e80:	895a                	mv	s2,s6
1c008e82:	c21a                	sw	t1,4(sp)
1c008e84:	008d4763          	blt	s10,s0,1c008e92 <pos_libc_prf+0x67a>
1c008e88:	846a                	mv	s0,s10
1c008e8a:	b20410e3          	bnez	s0,1c0089aa <pos_libc_prf+0x192>
1c008e8e:	b2f1                	j	1c00885a <pos_libc_prf+0x42>
1c008e90:	c002                	sw	zero,0(sp)
1c008e92:	4342                	lw	t1,16(sp)
1c008e94:	38030463          	beqz	t1,1c00921c <pos_libc_prf+0xa04>
1c008e98:	001d0713          	addi	a4,s10,1
1c008e9c:	02000693          	li	a3,32
1c008ea0:	41a407b3          	sub	a5,s0,s10
1c008ea4:	76e44563          	blt	s0,a4,1c00960e <pos_libc_prf+0xdf6>
1c008ea8:	80000737          	lui	a4,0x80000
1c008eac:	76e40163          	beq	s0,a4,1c00960e <pos_libc_prf+0xdf6>
1c008eb0:	0087c0fb          	lp.setup	x1,a5,1c008ec0 <pos_libc_prf+0x6a8>
1c008eb4:	0f010813          	addi	a6,sp,240
1c008eb8:	01a80733          	add	a4,a6,s10
1c008ebc:	f2d70a23          	sb	a3,-204(a4) # 7fffff34 <pulp__FC+0x7fffff35>
1c008ec0:	0d05                	addi	s10,s10,1
1c008ec2:	ae0414e3          	bnez	s0,1c0089aa <pos_libc_prf+0x192>
1c008ec6:	ba51                	j	1c00885a <pos_libc_prf+0x42>
1c008ec8:	06900713          	li	a4,105
1c008ecc:	0cec1563          	bne	s8,a4,1c008f96 <pos_libc_prf+0x77e>
1c008ed0:	00092583          	lw	a1,0(s2)
1c008ed4:	02410c93          	addi	s9,sp,36
1c008ed8:	0911                	addi	s2,s2,4
1c008eda:	3e05cc63          	bltz	a1,1c0092d2 <pos_libc_prf+0xaba>
1c008ede:	4322                	lw	t1,8(sp)
1c008ee0:	4a031663          	bnez	t1,1c00938c <pos_libc_prf+0xb74>
1c008ee4:	4632                	lw	a2,12(sp)
1c008ee6:	62060063          	beqz	a2,1c009506 <pos_libc_prf+0xcee>
1c008eea:	02000793          	li	a5,32
1c008eee:	02f10223          	sb	a5,36(sp)
1c008ef2:	86de                	mv	a3,s7
1c008ef4:	4629                	li	a2,10
1c008ef6:	02510513          	addi	a0,sp,37
1c008efa:	306d                	jal	1c0087a4 <pos_libc_to_x>
1c008efc:	02510313          	addi	t1,sp,37
1c008f00:	951a                	add	a0,a0,t1
1c008f02:	4705                	li	a4,1
1c008f04:	41950d33          	sub	s10,a0,s9
1c008f08:	c03a                	sw	a4,0(sp)
1c008f0a:	0bfba363          	p.beqimm	s7,-1,1c008fb0 <pos_libc_prf+0x798>
1c008f0e:	0c800793          	li	a5,200
1c008f12:	aba7cae3          	blt	a5,s10,1c0089c6 <pos_libc_prf+0x1ae>
1c008f16:	02000713          	li	a4,32
1c008f1a:	c23a                	sw	a4,4(sp)
1c008f1c:	b7a5                	j	1c008e84 <pos_libc_prf+0x66c>
1c008f1e:	00092783          	lw	a5,0(s2)
1c008f22:	020102a3          	sb	zero,37(sp)
1c008f26:	0911                	addi	s2,s2,4
1c008f28:	02f10223          	sb	a5,36(sp)
1c008f2c:	4d05                	li	s10,1
1c008f2e:	bc9d                	j	1c0089a4 <pos_libc_prf+0x18c>
1c008f30:	00092583          	lw	a1,0(s2)
1c008f34:	86de                	mv	a3,s7
1c008f36:	4629                	li	a2,10
1c008f38:	1048                	addi	a0,sp,36
1c008f3a:	30ad                	jal	1c0087a4 <pos_libc_to_x>
1c008f3c:	8d2a                	mv	s10,a0
1c008f3e:	0911                	addi	s2,s2,4
1c008f40:	0c800793          	li	a5,200
1c008f44:	07fba263          	p.beqimm	s7,-1,1c008fa8 <pos_libc_prf+0x790>
1c008f48:	a6a7cfe3          	blt	a5,a0,1c0089c6 <pos_libc_prf+0x1ae>
1c008f4c:	02000713          	li	a4,32
1c008f50:	c002                	sw	zero,0(sp)
1c008f52:	c23a                	sw	a4,4(sp)
1c008f54:	bf05                	j	1c008e84 <pos_libc_prf+0x66c>
1c008f56:	00092783          	lw	a5,0(s2)
1c008f5a:	0911                	addi	s2,s2,4
1c008f5c:	0157a023          	sw	s5,0(a5)
1c008f60:	b8ed                	j	1c00885a <pos_libc_prf+0x42>
1c008f62:	00092583          	lw	a1,0(s2)
1c008f66:	77e1                	lui	a5,0xffff8
1c008f68:	8307c793          	xori	a5,a5,-2000
1c008f6c:	46a1                	li	a3,8
1c008f6e:	4641                	li	a2,16
1c008f70:	02610513          	addi	a0,sp,38
1c008f74:	02f11223          	sh	a5,36(sp)
1c008f78:	3035                	jal	1c0087a4 <pos_libc_to_x>
1c008f7a:	0911                	addi	s2,s2,4
1c008f7c:	00250d13          	addi	s10,a0,2
1c008f80:	0c800793          	li	a5,200
1c008f84:	03fba263          	p.beqimm	s7,-1,1c008fa8 <pos_libc_prf+0x790>
1c008f88:	a3a7cfe3          	blt	a5,s10,1c0089c6 <pos_libc_prf+0x1ae>
1c008f8c:	02000793          	li	a5,32
1c008f90:	c002                	sw	zero,0(sp)
1c008f92:	c23e                	sw	a5,4(sp)
1c008f94:	bdc5                	j	1c008e84 <pos_libc_prf+0x66c>
1c008f96:	0c800713          	li	a4,200
1c008f9a:	8d8750e3          	ble	s8,a4,1c00885a <pos_libc_prf+0x42>
1c008f9e:	5afd                	li	s5,-1
1c008fa0:	b8f1                	j	1c00887c <pos_libc_prf+0x64>
1c008fa2:	9e0bd8e3          	bgez	s7,1c008992 <pos_libc_prf+0x17a>
1c008fa6:	bac5                	j	1c008996 <pos_libc_prf+0x17e>
1c008fa8:	a1a7cfe3          	blt	a5,s10,1c0089c6 <pos_libc_prf+0x1ae>
1c008fac:	c002                	sw	zero,0(sp)
1c008fae:	bdd9                	j	1c008e84 <pos_libc_prf+0x66c>
1c008fb0:	0c800793          	li	a5,200
1c008fb4:	eda7d8e3          	ble	s10,a5,1c008e84 <pos_libc_prf+0x66c>
1c008fb8:	5afd                	li	s5,-1
1c008fba:	b0c9                	j	1c00887c <pos_libc_prf+0x64>
1c008fbc:	cc02                	sw	zero,24(sp)
1c008fbe:	001b0593          	addi	a1,s6,1
1c008fc2:	ca2e                	sw	a1,20(sp)
1c008fc4:	017387b3          	add	a5,t2,s7
1c008fc8:	852e                	mv	a0,a1
1c008fca:	6007c263          	bltz	a5,1c0095ce <pos_libc_prf+0xdb6>
1c008fce:	4641                	li	a2,16
1c008fd0:	04c7c2b3          	p.min	t0,a5,a2
1c008fd4:	12fd                	addi	t0,t0,-1
1c008fd6:	06600c13          	li	s8,102
1c008fda:	d60792e3          	bnez	a5,1c008d3e <pos_libc_prf+0x526>
1c008fde:	4701                	li	a4,0
1c008fe0:	080006b7          	lui	a3,0x8000
1c008fe4:	45f2                	lw	a1,28(sp)
1c008fe6:	976a                	add	a4,a4,s10
1c008fe8:	01a73f33          	sltu	t5,a4,s10
1c008fec:	96ae                	add	a3,a3,a1
1c008fee:	96fa                	add	a3,a3,t5
1c008ff0:	f606b633          	p.bclr	a2,a3,27,0
1c008ff4:	8d3a                	mv	s10,a4
1c008ff6:	ca71                	beqz	a2,1c0090ca <pos_libc_prf+0x8b2>
1c008ff8:	002d0e93          	addi	t4,s10,2
1c008ffc:	01aebd33          	sltu	s10,t4,s10
1c009000:	00dd0f33          	add	t5,s10,a3
1c009004:	02000813          	li	a6,32
1c009008:	001f1793          	slli	a5,t5,0x1
1c00900c:	fff84693          	not	a3,a6
1c009010:	010ed733          	srl	a4,t4,a6
1c009014:	00d797b3          	sll	a5,a5,a3
1c009018:	02087613          	andi	a2,a6,32
1c00901c:	4e01                	li	t3,0
1c00901e:	4281                	li	t0,0
1c009020:	4f81                	li	t6,0
1c009022:	4d15                	li	s10,5
1c009024:	8f5d                	or	a4,a4,a5
1c009026:	c219                	beqz	a2,1c00902c <pos_libc_prf+0x814>
1c009028:	010f5733          	srl	a4,t5,a6
1c00902c:	fff84793          	not	a5,a6
1c009030:	03a75733          	divu	a4,a4,s10
1c009034:	24060263          	beqz	a2,1c009278 <pos_libc_prf+0xa60>
1c009038:	4681                	li	a3,0
1c00903a:	01071733          	sll	a4,a4,a6
1c00903e:	00269793          	slli	a5,a3,0x2
1c009042:	01e6d813          	srli	a6,a3,0x1e
1c009046:	00271593          	slli	a1,a4,0x2
1c00904a:	00d78633          	add	a2,a5,a3
1c00904e:	00b865b3          	or	a1,a6,a1
1c009052:	95ba                	add	a1,a1,a4
1c009054:	00f637b3          	sltu	a5,a2,a5
1c009058:	96f2                	add	a3,a3,t3
1c00905a:	1c001337          	lui	t1,0x1c001
1c00905e:	97ae                	add	a5,a5,a1
1c009060:	01c6b833          	sltu	a6,a3,t3
1c009064:	40ce8633          	sub	a2,t4,a2
1c009068:	9716                	add	a4,a4,t0
1c00906a:	0f85                	addi	t6,t6,1
1c00906c:	a7030313          	addi	t1,t1,-1424 # 1c000a70 <shifts.1764>
1c009070:	00ceb8b3          	sltu	a7,t4,a2
1c009074:	40ff07b3          	sub	a5,t5,a5
1c009078:	01f305b3          	add	a1,t1,t6
1c00907c:	8e36                	mv	t3,a3
1c00907e:	00e802b3          	add	t0,a6,a4
1c009082:	023fa463          	p.beqimm	t6,3,1c0090aa <pos_libc_prf+0x892>
1c009086:	0005c803          	lbu	a6,0(a1)
1c00908a:	41178f33          	sub	t5,a5,a7
1c00908e:	8eb2                	mv	t4,a2
1c009090:	001f1793          	slli	a5,t5,0x1
1c009094:	fff84693          	not	a3,a6
1c009098:	010ed733          	srl	a4,t4,a6
1c00909c:	00d797b3          	sll	a5,a5,a3
1c0090a0:	02087613          	andi	a2,a6,32
1c0090a4:	8f5d                	or	a4,a4,a5
1c0090a6:	d259                	beqz	a2,1c00902c <pos_libc_prf+0x814>
1c0090a8:	b741                	j	1c009028 <pos_libc_prf+0x810>
1c0090aa:	01f29693          	slli	a3,t0,0x1f
1c0090ae:	001e5713          	srli	a4,t3,0x1
1c0090b2:	8f55                	or	a4,a4,a3
1c0090b4:	fc1e3e33          	p.bclr	t3,t3,30,1
1c0090b8:	00ee0d33          	add	s10,t3,a4
1c0090bc:	01cd3e33          	sltu	t3,s10,t3
1c0090c0:	0012d713          	srli	a4,t0,0x1
1c0090c4:	00ee06b3          	add	a3,t3,a4
1c0090c8:	0385                	addi	t2,t2,1
1c0090ca:	06600713          	li	a4,102
1c0090ce:	34ec0563          	beq	s8,a4,1c009418 <pos_libc_prf+0xc00>
1c0090d2:	002d1713          	slli	a4,s10,0x2
1c0090d6:	01ed5613          	srli	a2,s10,0x1e
1c0090da:	00269813          	slli	a6,a3,0x2
1c0090de:	9d3a                	add	s10,s10,a4
1c0090e0:	01066833          	or	a6,a2,a6
1c0090e4:	00ed35b3          	sltu	a1,s10,a4
1c0090e8:	96c2                	add	a3,a3,a6
1c0090ea:	95b6                	add	a1,a1,a3
1c0090ec:	01fd5713          	srli	a4,s10,0x1f
1c0090f0:	0586                	slli	a1,a1,0x1
1c0090f2:	8dd9                	or	a1,a1,a4
1c0090f4:	01c5d713          	srli	a4,a1,0x1c
1c0090f8:	03070693          	addi	a3,a4,48
1c0090fc:	00e03733          	snez	a4,a4
1c009100:	40e383b3          	sub	t2,t2,a4
1c009104:	4702                	lw	a4,0(sp)
1c009106:	10000337          	lui	t1,0x10000
1c00910a:	137d                	addi	t1,t1,-1
1c00910c:	00db0023          	sb	a3,0(s6)
1c009110:	001d1613          	slli	a2,s10,0x1
1c009114:	0065f5b3          	and	a1,a1,t1
1c009118:	2e070563          	beqz	a4,1c009402 <pos_libc_prf+0xbea>
1c00911c:	02e00713          	li	a4,46
1c009120:	00eb00a3          	sb	a4,1(s6)
1c009124:	002b0813          	addi	a6,s6,2
1c009128:	fffb8893          	addi	a7,s7,-1
1c00912c:	4e0b8b63          	beqz	s7,1c009622 <pos_libc_prf+0xe0a>
1c009130:	4e3d                	li	t3,15
1c009132:	a011                	j	1c009136 <pos_libc_prf+0x91e>
1c009134:	88be                	mv	a7,a5
1c009136:	00261793          	slli	a5,a2,0x2
1c00913a:	01e65693          	srli	a3,a2,0x1e
1c00913e:	00259713          	slli	a4,a1,0x2
1c009142:	00c78333          	add	t1,a5,a2
1c009146:	8f55                	or	a4,a4,a3
1c009148:	972e                	add	a4,a4,a1
1c00914a:	00f337b3          	sltu	a5,t1,a5
1c00914e:	97ba                	add	a5,a5,a4
1c009150:	0786                	slli	a5,a5,0x1
1c009152:	01f35713          	srli	a4,t1,0x1f
1c009156:	8fd9                	or	a5,a5,a4
1c009158:	01c7d693          	srli	a3,a5,0x1c
1c00915c:	03000713          	li	a4,48
1c009160:	00180513          	addi	a0,a6,1 # 80000001 <pulp__FC+0x80000002>
1c009164:	01c05c63          	blez	t3,1c00917c <pos_libc_prf+0x964>
1c009168:	00131613          	slli	a2,t1,0x1
1c00916c:	10000337          	lui	t1,0x10000
1c009170:	137d                	addi	t1,t1,-1
1c009172:	03068713          	addi	a4,a3,48 # 8000030 <__l1_heap_size+0x7ffa584>
1c009176:	1e7d                	addi	t3,t3,-1
1c009178:	0067f5b3          	and	a1,a5,t1
1c00917c:	00e80023          	sb	a4,0(a6)
1c009180:	fff88793          	addi	a5,a7,-1
1c009184:	882a                	mv	a6,a0
1c009186:	fb1047e3          	bgtz	a7,1c009134 <pos_libc_prf+0x91c>
1c00918a:	45e2                	lw	a1,24(sp)
1c00918c:	e9a5                	bnez	a1,1c0091fc <pos_libc_prf+0x9e4>
1c00918e:	c05c3733          	p.bclr	a4,s8,0,5
1c009192:	04500693          	li	a3,69
1c009196:	02d71963          	bne	a4,a3,1c0091c8 <pos_libc_prf+0x9b0>
1c00919a:	87e2                	mv	a5,s8
1c00919c:	00f50023          	sb	a5,0(a0)
1c0091a0:	3403cc63          	bltz	t2,1c0094f8 <pos_libc_prf+0xce0>
1c0091a4:	02b00793          	li	a5,43
1c0091a8:	00f500a3          	sb	a5,1(a0)
1c0091ac:	47a9                	li	a5,10
1c0091ae:	02f3c733          	div	a4,t2,a5
1c0091b2:	0511                	addi	a0,a0,4
1c0091b4:	02f3e7b3          	rem	a5,t2,a5
1c0091b8:	03070713          	addi	a4,a4,48
1c0091bc:	fee50f23          	sb	a4,-2(a0)
1c0091c0:	03078793          	addi	a5,a5,48 # ffff8030 <pulp__FC+0xffff8031>
1c0091c4:	fef50fa3          	sb	a5,-1(a0)
1c0091c8:	00050023          	sb	zero,0(a0)
1c0091cc:	41950d33          	sub	s10,a0,s9
1c0091d0:	4722                	lw	a4,8(sp)
1c0091d2:	47b2                	lw	a5,12(sp)
1c0091d4:	8f5d                	or	a4,a4,a5
1c0091d6:	c03a                	sw	a4,0(sp)
1c0091d8:	e719                	bnez	a4,1c0091e6 <pos_libc_prf+0x9ce>
1c0091da:	02414703          	lbu	a4,36(sp)
1c0091de:	02d00793          	li	a5,45
1c0091e2:	dcf717e3          	bne	a4,a5,1c008fb0 <pos_libc_prf+0x798>
1c0091e6:	0c800793          	li	a5,200
1c0091ea:	fda7ce63          	blt	a5,s10,1c0089c6 <pos_libc_prf+0x1ae>
1c0091ee:	4305                	li	t1,1
1c0091f0:	c01a                	sw	t1,0(sp)
1c0091f2:	b949                	j	1c008e84 <pos_libc_prf+0x66c>
1c0091f4:	47e2                	lw	a5,24(sp)
1c0091f6:	dbe9                	beqz	a5,1c0091c8 <pos_libc_prf+0x9b0>
1c0091f8:	06600c13          	li	s8,102
1c0091fc:	03000613          	li	a2,48
1c009200:	a011                	j	1c009204 <pos_libc_prf+0x9ec>
1c009202:	853a                	mv	a0,a4
1c009204:	fff50713          	addi	a4,a0,-1
1c009208:	00074683          	lbu	a3,0(a4)
1c00920c:	fec68be3          	beq	a3,a2,1c009202 <pos_libc_prf+0x9ea>
1c009210:	02e00613          	li	a2,46
1c009214:	f6c69de3          	bne	a3,a2,1c00918e <pos_libc_prf+0x976>
1c009218:	853a                	mv	a0,a4
1c00921a:	bf95                	j	1c00918e <pos_libc_prf+0x976>
1c00921c:	02410c93          	addi	s9,sp,36
1c009220:	41a40b33          	sub	s6,s0,s10
1c009224:	001d0613          	addi	a2,s10,1
1c009228:	85e6                	mv	a1,s9
1c00922a:	016c8533          	add	a0,s9,s6
1c00922e:	ca2ff0ef          	jal	ra,1c0086d0 <memmove>
1c009232:	4312                	lw	t1,4(sp)
1c009234:	02000793          	li	a5,32
1c009238:	30f30c63          	beq	t1,a5,1c009550 <pos_libc_prf+0xd38>
1c00923c:	4702                	lw	a4,0(sp)
1c00923e:	9b3a                	add	s6,s6,a4
1c009240:	c56755e3          	ble	s6,a4,1c008e8a <pos_libc_prf+0x672>
1c009244:	4782                	lw	a5,0(sp)
1c009246:	00178713          	addi	a4,a5,1
1c00924a:	40fb07b3          	sub	a5,s6,a5
1c00924e:	3aeb4563          	blt	s6,a4,1c0095f8 <pos_libc_prf+0xde0>
1c009252:	80000737          	lui	a4,0x80000
1c009256:	3aeb0163          	beq	s6,a4,1c0095f8 <pos_libc_prf+0xde0>
1c00925a:	4612                	lw	a2,4(sp)
1c00925c:	4702                	lw	a4,0(sp)
1c00925e:	0087c0fb          	lp.setup	x1,a5,1c00926e <pos_libc_prf+0xa56>
1c009262:	0f010813          	addi	a6,sp,240
1c009266:	00e806b3          	add	a3,a6,a4
1c00926a:	f2c68a23          	sb	a2,-204(a3)
1c00926e:	0705                	addi	a4,a4,1
1c009270:	f2041d63          	bnez	s0,1c0089aa <pos_libc_prf+0x192>
1c009274:	de6ff06f          	j	1c00885a <pos_libc_prf+0x42>
1c009278:	00175613          	srli	a2,a4,0x1
1c00927c:	010716b3          	sll	a3,a4,a6
1c009280:	00f65733          	srl	a4,a2,a5
1c009284:	bb6d                	j	1c00903e <pos_libc_prf+0x826>
1c009286:	02410c93          	addi	s9,sp,36
1c00928a:	86de                	mv	a3,s7
1c00928c:	4641                	li	a2,16
1c00928e:	8566                	mv	a0,s9
1c009290:	d14ff0ef          	jal	ra,1c0087a4 <pos_libc_to_x>
1c009294:	05800713          	li	a4,88
1c009298:	8d2a                	mv	s10,a0
1c00929a:	bcec1be3          	bne	s8,a4,1c008e70 <pos_libc_prf+0x658>
1c00929e:	02414783          	lbu	a5,36(sp)
1c0092a2:	4681                	li	a3,0
1c0092a4:	bc0786e3          	beqz	a5,1c008e70 <pos_libc_prf+0x658>
1c0092a8:	4665                	li	a2,25
1c0092aa:	f9f78713          	addi	a4,a5,-97
1c0092ae:	0ff77713          	andi	a4,a4,255
1c0092b2:	1781                	addi	a5,a5,-32
1c0092b4:	00e66463          	bltu	a2,a4,1c0092bc <pos_libc_prf+0xaa4>
1c0092b8:	00fc8023          	sb	a5,0(s9)
1c0092bc:	0c85                	addi	s9,s9,1
1c0092be:	000cc783          	lbu	a5,0(s9)
1c0092c2:	f7e5                	bnez	a5,1c0092aa <pos_libc_prf+0xa92>
1c0092c4:	4782                	lw	a5,0(sp)
1c0092c6:	9d36                	add	s10,s10,a3
1c0092c8:	ba0784e3          	beqz	a5,1c008e70 <pos_libc_prf+0x658>
1c0092cc:	4809                	li	a6,2
1c0092ce:	c042                	sw	a6,0(sp)
1c0092d0:	b645                	j	1c008e70 <pos_libc_prf+0x658>
1c0092d2:	02d00793          	li	a5,45
1c0092d6:	02f10223          	sb	a5,36(sp)
1c0092da:	800007b7          	lui	a5,0x80000
1c0092de:	26f58b63          	beq	a1,a5,1c009554 <pos_libc_prf+0xd3c>
1c0092e2:	40b005b3          	neg	a1,a1
1c0092e6:	86de                	mv	a3,s7
1c0092e8:	4629                	li	a2,10
1c0092ea:	02510513          	addi	a0,sp,37
1c0092ee:	cb6ff0ef          	jal	ra,1c0087a4 <pos_libc_to_x>
1c0092f2:	02510793          	addi	a5,sp,37
1c0092f6:	953e                	add	a0,a0,a5
1c0092f8:	4805                	li	a6,1
1c0092fa:	41950d33          	sub	s10,a0,s9
1c0092fe:	c042                	sw	a6,0(sp)
1c009300:	b129                	j	1c008f0a <pos_libc_prf+0x6f2>
1c009302:	eda7c263          	blt	a5,s10,1c0089c6 <pos_libc_prf+0x1ae>
1c009306:	895a                	mv	s2,s6
1c009308:	beb5                	j	1c008e84 <pos_libc_prf+0x66c>
1c00930a:	8b36                	mv	s6,a3
1c00930c:	e22ff06f          	j	1c00892e <pos_libc_prf+0x116>
1c009310:	4702                	lw	a4,0(sp)
1c009312:	cc02                	sw	zero,24(sp)
1c009314:	e701                	bnez	a4,1c00931c <pos_libc_prf+0xb04>
1c009316:	017037b3          	snez	a5,s7
1c00931a:	cc3e                	sw	a5,24(sp)
1c00931c:	56f5                	li	a3,-3
1c00931e:	001b8713          	addi	a4,s7,1
1c009322:	00d3c463          	blt	t2,a3,1c00932a <pos_libc_prf+0xb12>
1c009326:	c8775ce3          	ble	t2,a4,1c008fbe <pos_libc_prf+0x7a6>
1c00932a:	4841                	li	a6,16
1c00932c:	05074733          	p.min	a4,a4,a6
1c009330:	06700693          	li	a3,103
1c009334:	fff70293          	addi	t0,a4,-1 # 7fffffff <pulp__FC+0x80000000>
1c009338:	28dc0763          	beq	s8,a3,1c0095c6 <pos_libc_prf+0xdae>
1c00933c:	04500c13          	li	s8,69
1c009340:	badd                	j	1c008d36 <pos_libc_prf+0x51e>
1c009342:	46a2                	lw	a3,8(sp)
1c009344:	1c068963          	beqz	a3,1c009516 <pos_libc_prf+0xcfe>
1c009348:	02b00713          	li	a4,43
1c00934c:	02e10223          	sb	a4,36(sp)
1c009350:	02510b13          	addi	s6,sp,37
1c009354:	4381                	li	t2,0
1c009356:	4301                	li	t1,0
1c009358:	4601                	li	a2,0
1c00935a:	4701                	li	a4,0
1c00935c:	02410c93          	addi	s9,sp,36
1c009360:	b241                	j	1c008ce0 <pos_libc_prf+0x4c8>
1c009362:	02510513          	addi	a0,sp,37
1c009366:	86de                	mv	a3,s7
1c009368:	4621                	li	a2,8
1c00936a:	c3aff0ef          	jal	ra,1c0087a4 <pos_libc_to_x>
1c00936e:	4302                	lw	t1,0(sp)
1c009370:	0c800793          	li	a5,200
1c009374:	00650d33          	add	s10,a0,t1
1c009378:	09fba063          	p.beqimm	s7,-1,1c0093f8 <pos_libc_prf+0xbe0>
1c00937c:	e5a7c563          	blt	a5,s10,1c0089c6 <pos_libc_prf+0x1ae>
1c009380:	02000813          	li	a6,32
1c009384:	895a                	mv	s2,s6
1c009386:	c002                	sw	zero,0(sp)
1c009388:	c242                	sw	a6,4(sp)
1c00938a:	bced                	j	1c008e84 <pos_libc_prf+0x66c>
1c00938c:	02b00793          	li	a5,43
1c009390:	02f10223          	sb	a5,36(sp)
1c009394:	beb9                	j	1c008ef2 <pos_libc_prf+0x6da>
1c009396:	1048                	addi	a0,sp,36
1c009398:	b7f9                	j	1c009366 <pos_libc_prf+0xb4e>
1c00939a:	02410c93          	addi	s9,sp,36
1c00939e:	86e6                	mv	a3,s9
1c0093a0:	2005c163          	bltz	a1,1c0095a2 <pos_libc_prf+0xd8a>
1c0093a4:	8e59                	or	a2,a2,a4
1c0093a6:	fbfc0793          	addi	a5,s8,-65
1c0093aa:	00368513          	addi	a0,a3,3
1c0093ae:	4765                	li	a4,25
1c0093b0:	18061463          	bnez	a2,1c009538 <pos_libc_prf+0xd20>
1c0093b4:	1cf76d63          	bltu	a4,a5,1c00958e <pos_libc_prf+0xd76>
1c0093b8:	6795                	lui	a5,0x5
1c0093ba:	e4978793          	addi	a5,a5,-439 # 4e49 <__cluster_text_size+0x4e49>
1c0093be:	00f69023          	sh	a5,0(a3)
1c0093c2:	04600793          	li	a5,70
1c0093c6:	00f68123          	sb	a5,2(a3)
1c0093ca:	000681a3          	sb	zero,3(a3)
1c0093ce:	41950d33          	sub	s10,a0,s9
1c0093d2:	bbfd                	j	1c0091d0 <pos_libc_prf+0x9b8>
1c0093d4:	4b99                	li	s7,6
1c0093d6:	94ec11e3          	bne	s8,a4,1c008d18 <pos_libc_prf+0x500>
1c0093da:	4682                	lw	a3,0(sp)
1c0093dc:	57f5                	li	a5,-3
1c0093de:	0016c693          	xori	a3,a3,1
1c0093e2:	cc36                	sw	a3,24(sp)
1c0093e4:	1cf3dd63          	ble	a5,t2,1c0095be <pos_libc_prf+0xda6>
1c0093e8:	001b0693          	addi	a3,s6,1
1c0093ec:	ca36                	sw	a3,20(sp)
1c0093ee:	8536                	mv	a0,a3
1c0093f0:	06500c13          	li	s8,101
1c0093f4:	4299                	li	t0,6
1c0093f6:	b2a1                	j	1c008d3e <pos_libc_prf+0x526>
1c0093f8:	dda7c763          	blt	a5,s10,1c0089c6 <pos_libc_prf+0x1ae>
1c0093fc:	895a                	mv	s2,s6
1c0093fe:	c002                	sw	zero,0(sp)
1c009400:	b451                	j	1c008e84 <pos_libc_prf+0x66c>
1c009402:	d80b84e3          	beqz	s7,1c00918a <pos_libc_prf+0x972>
1c009406:	02e00713          	li	a4,46
1c00940a:	002b0813          	addi	a6,s6,2
1c00940e:	00eb00a3          	sb	a4,1(s6)
1c009412:	fffb8893          	addi	a7,s7,-1
1c009416:	bb29                	j	1c009130 <pos_libc_prf+0x918>
1c009418:	18705c63          	blez	t2,1c0095b0 <pos_libc_prf+0xd98>
1c00941c:	4552                	lw	a0,20(sp)
1c00941e:	4641                	li	a2,16
1c009420:	859e                	mv	a1,t2
1c009422:	0295c0fb          	lp.setup	x1,a1,1c009474 <pos_libc_prf+0xc5c>
1c009426:	002d1793          	slli	a5,s10,0x2
1c00942a:	01ed5893          	srli	a7,s10,0x1e
1c00942e:	00269713          	slli	a4,a3,0x2
1c009432:	01a78833          	add	a6,a5,s10
1c009436:	00e8e733          	or	a4,a7,a4
1c00943a:	9736                	add	a4,a4,a3
1c00943c:	00f837b3          	sltu	a5,a6,a5
1c009440:	97ba                	add	a5,a5,a4
1c009442:	0786                	slli	a5,a5,0x1
1c009444:	01f85713          	srli	a4,a6,0x1f
1c009448:	8fd9                	or	a5,a5,a4
1c00944a:	01c7d313          	srli	t1,a5,0x1c
1c00944e:	03000893          	li	a7,48
1c009452:	872a                	mv	a4,a0
1c009454:	00c05c63          	blez	a2,1c00946c <pos_libc_prf+0xc54>
1c009458:	00181d13          	slli	s10,a6,0x1
1c00945c:	10000837          	lui	a6,0x10000
1c009460:	187d                	addi	a6,a6,-1
1c009462:	03030893          	addi	a7,t1,48 # 10000030 <ne16_scale_shift_stride2+0xc>
1c009466:	167d                	addi	a2,a2,-1
1c009468:	0107f6b3          	and	a3,a5,a6
1c00946c:	011b0023          	sb	a7,0(s6)
1c009470:	13fd                	addi	t2,t2,-1
1c009472:	8b2a                	mv	s6,a0
1c009474:	0505                	addi	a0,a0,1
1c009476:	4302                	lw	t1,0(sp)
1c009478:	00031563          	bnez	t1,1c009482 <pos_libc_prf+0xc6a>
1c00947c:	853a                	mv	a0,a4
1c00947e:	d60b8be3          	beqz	s7,1c0091f4 <pos_libc_prf+0x9dc>
1c009482:	02e00793          	li	a5,46
1c009486:	00170513          	addi	a0,a4,1
1c00948a:	00f70023          	sb	a5,0(a4)
1c00948e:	03000593          	li	a1,48
1c009492:	fffb8313          	addi	t1,s7,-1
1c009496:	d5705fe3          	blez	s7,1c0091f4 <pos_libc_prf+0x9dc>
1c00949a:	002d1793          	slli	a5,s10,0x2
1c00949e:	01ed5893          	srli	a7,s10,0x1e
1c0094a2:	00269713          	slli	a4,a3,0x2
1c0094a6:	01a78833          	add	a6,a5,s10
1c0094aa:	00e8e733          	or	a4,a7,a4
1c0094ae:	9736                	add	a4,a4,a3
1c0094b0:	00f837b3          	sltu	a5,a6,a5
1c0094b4:	97ba                	add	a5,a5,a4
1c0094b6:	0786                	slli	a5,a5,0x1
1c0094b8:	01f85713          	srli	a4,a6,0x1f
1c0094bc:	8fd9                	or	a5,a5,a4
1c0094be:	01c7de13          	srli	t3,a5,0x1c
1c0094c2:	00150893          	addi	a7,a0,1
1c0094c6:	02039563          	bnez	t2,1c0094f0 <pos_libc_prf+0xcd8>
1c0094ca:	03000713          	li	a4,48
1c0094ce:	00c05c63          	blez	a2,1c0094e6 <pos_libc_prf+0xcce>
1c0094d2:	00181d13          	slli	s10,a6,0x1
1c0094d6:	10000837          	lui	a6,0x10000
1c0094da:	187d                	addi	a6,a6,-1
1c0094dc:	030e0713          	addi	a4,t3,48
1c0094e0:	167d                	addi	a2,a2,-1
1c0094e2:	0107f6b3          	and	a3,a5,a6
1c0094e6:	00e50023          	sb	a4,0(a0)
1c0094ea:	8b9a                	mv	s7,t1
1c0094ec:	8546                	mv	a0,a7
1c0094ee:	b755                	j	1c009492 <pos_libc_prf+0xc7a>
1c0094f0:	00b50023          	sb	a1,0(a0)
1c0094f4:	0385                	addi	t2,t2,1
1c0094f6:	bfd5                	j	1c0094ea <pos_libc_prf+0xcd2>
1c0094f8:	02d00793          	li	a5,45
1c0094fc:	407003b3          	neg	t2,t2
1c009500:	00f500a3          	sb	a5,1(a0)
1c009504:	b165                	j	1c0091ac <pos_libc_prf+0x994>
1c009506:	86de                	mv	a3,s7
1c009508:	4629                	li	a2,10
1c00950a:	8566                	mv	a0,s9
1c00950c:	a98ff0ef          	jal	ra,1c0087a4 <pos_libc_to_x>
1c009510:	8d2a                	mv	s10,a0
1c009512:	c002                	sw	zero,0(sp)
1c009514:	badd                	j	1c008f0a <pos_libc_prf+0x6f2>
1c009516:	4632                	lw	a2,12(sp)
1c009518:	10060163          	beqz	a2,1c00961a <pos_libc_prf+0xe02>
1c00951c:	02000713          	li	a4,32
1c009520:	02e10223          	sb	a4,36(sp)
1c009524:	02510b13          	addi	s6,sp,37
1c009528:	02410c93          	addi	s9,sp,36
1c00952c:	4381                	li	t2,0
1c00952e:	4301                	li	t1,0
1c009530:	4601                	li	a2,0
1c009532:	4701                	li	a4,0
1c009534:	facff06f          	j	1c008ce0 <pos_libc_prf+0x4c8>
1c009538:	0af76663          	bltu	a4,a5,1c0095e4 <pos_libc_prf+0xdcc>
1c00953c:	6791                	lui	a5,0x4
1c00953e:	14e78793          	addi	a5,a5,334 # 414e <__cluster_text_size+0x414e>
1c009542:	00f69023          	sh	a5,0(a3)
1c009546:	04e00793          	li	a5,78
1c00954a:	00f68123          	sb	a5,2(a3)
1c00954e:	bdb5                	j	1c0093ca <pos_libc_prf+0xbb2>
1c009550:	c002                	sw	zero,0(sp)
1c009552:	b9cd                	j	1c009244 <pos_libc_prf+0xa2c>
1c009554:	86de                	mv	a3,s7
1c009556:	4629                	li	a2,10
1c009558:	800005b7          	lui	a1,0x80000
1c00955c:	b379                	j	1c0092ea <pos_libc_prf+0xad2>
1c00955e:	4832                	lw	a6,12(sp)
1c009560:	02410c93          	addi	s9,sp,36
1c009564:	8b66                	mv	s6,s9
1c009566:	e0080d63          	beqz	a6,1c008b80 <pos_libc_prf+0x368>
1c00956a:	02000693          	li	a3,32
1c00956e:	02d10223          	sb	a3,36(sp)
1c009572:	02510b13          	addi	s6,sp,37
1c009576:	e0aff06f          	j	1c008b80 <pos_libc_prf+0x368>
1c00957a:	02d00693          	li	a3,45
1c00957e:	02d10223          	sb	a3,36(sp)
1c009582:	02510b13          	addi	s6,sp,37
1c009586:	02410c93          	addi	s9,sp,36
1c00958a:	df6ff06f          	j	1c008b80 <pos_libc_prf+0x368>
1c00958e:	679d                	lui	a5,0x7
1c009590:	e6978793          	addi	a5,a5,-407 # 6e69 <__l1_heap_size+0x13bd>
1c009594:	00f69023          	sh	a5,0(a3)
1c009598:	06600793          	li	a5,102
1c00959c:	00f68123          	sb	a5,2(a3)
1c0095a0:	b52d                	j	1c0093ca <pos_libc_prf+0xbb2>
1c0095a2:	02d00693          	li	a3,45
1c0095a6:	02d10223          	sb	a3,36(sp)
1c0095aa:	02510693          	addi	a3,sp,37
1c0095ae:	bbdd                	j	1c0093a4 <pos_libc_prf+0xb8c>
1c0095b0:	03000793          	li	a5,48
1c0095b4:	00fb0023          	sb	a5,0(s6)
1c0095b8:	4752                	lw	a4,20(sp)
1c0095ba:	4641                	li	a2,16
1c0095bc:	bd6d                	j	1c009476 <pos_libc_prf+0xc5e>
1c0095be:	479d                	li	a5,7
1c0095c0:	9e77dfe3          	ble	t2,a5,1c008fbe <pos_libc_prf+0x7a6>
1c0095c4:	4299                	li	t0,6
1c0095c6:	06500c13          	li	s8,101
1c0095ca:	f6cff06f          	j	1c008d36 <pos_libc_prf+0x51e>
1c0095ce:	4772                	lw	a4,28(sp)
1c0095d0:	080006b7          	lui	a3,0x8000
1c0095d4:	96ba                	add	a3,a3,a4
1c0095d6:	f606b7b3          	p.bclr	a5,a3,27,0
1c0095da:	e2078fe3          	beqz	a5,1c009418 <pos_libc_prf+0xc00>
1c0095de:	06600c13          	li	s8,102
1c0095e2:	bc19                	j	1c008ff8 <pos_libc_prf+0x7e0>
1c0095e4:	6799                	lui	a5,0x6
1c0095e6:	16e78793          	addi	a5,a5,366 # 616e <__l1_heap_size+0x6c2>
1c0095ea:	00f69023          	sh	a5,0(a3) # 8000000 <__l1_heap_size+0x7ffa554>
1c0095ee:	06e00793          	li	a5,110
1c0095f2:	00f68123          	sb	a5,2(a3)
1c0095f6:	bbd1                	j	1c0093ca <pos_libc_prf+0xbb2>
1c0095f8:	4785                	li	a5,1
1c0095fa:	4612                	lw	a2,4(sp)
1c0095fc:	4702                	lw	a4,0(sp)
1c0095fe:	b185                	j	1c00925e <pos_libc_prf+0xa46>
1c009600:	02414783          	lbu	a5,36(sp)
1c009604:	c799                	beqz	a5,1c009612 <pos_libc_prf+0xdfa>
1c009606:	4689                	li	a3,2
1c009608:	02410c93          	addi	s9,sp,36
1c00960c:	b971                	j	1c0092a8 <pos_libc_prf+0xa90>
1c00960e:	4785                	li	a5,1
1c009610:	b045                	j	1c008eb0 <pos_libc_prf+0x698>
1c009612:	4709                	li	a4,2
1c009614:	0d09                	addi	s10,s10,2
1c009616:	c03a                	sw	a4,0(sp)
1c009618:	b8a1                	j	1c008e70 <pos_libc_prf+0x658>
1c00961a:	02410c93          	addi	s9,sp,36
1c00961e:	8b66                	mv	s6,s9
1c009620:	b731                	j	1c00952c <pos_libc_prf+0xd14>
1c009622:	8542                	mv	a0,a6
1c009624:	b69d                	j	1c00918a <pos_libc_prf+0x972>

1c009626 <pos_init_start>:
1c009626:	1141                	addi	sp,sp,-16
1c009628:	c422                	sw	s0,8(sp)
1c00962a:	1c000437          	lui	s0,0x1c000
1c00962e:	c606                	sw	ra,12(sp)
1c009630:	00840413          	addi	s0,s0,8 # 1c000008 <ctor_list>
1c009634:	822ff0ef          	jal	ra,1c008656 <pos_soc_init>
1c009638:	2279                	jal	1c0097c6 <pos_irq_init>
1c00963a:	2ac1                	jal	1c00980a <pos_soc_event_init>
1c00963c:	20e5                	jal	1c009724 <pos_allocs_init>
1c00963e:	405c                	lw	a5,4(s0)
1c009640:	c791                	beqz	a5,1c00964c <pos_init_start+0x26>
1c009642:	0411                	addi	s0,s0,4
1c009644:	0411                	addi	s0,s0,4
1c009646:	9782                	jalr	a5
1c009648:	401c                	lw	a5,0(s0)
1c00964a:	ffed                	bnez	a5,1c009644 <pos_init_start+0x1e>
1c00964c:	922ff0ef          	jal	ra,1c00876e <pos_io_start>
1c009650:	300467f3          	csrrsi	a5,mstatus,8
1c009654:	f1402573          	csrr	a0,mhartid
1c009658:	8515                	srai	a0,a0,0x5
1c00965a:	f2653533          	p.bclr	a0,a0,25,6
1c00965e:	47fd                	li	a5,31
1c009660:	00f50a63          	beq	a0,a5,1c009674 <pos_init_start+0x4e>
1c009664:	4422                	lw	s0,8(sp)
1c009666:	40b2                	lw	ra,12(sp)
1c009668:	1c0085b7          	lui	a1,0x1c008
1c00966c:	5aa58593          	addi	a1,a1,1450 # 1c0085aa <main>
1c009670:	0141                	addi	sp,sp,16
1c009672:	a405                	j	1c009892 <cluster_start>
1c009674:	40b2                	lw	ra,12(sp)
1c009676:	4422                	lw	s0,8(sp)
1c009678:	0141                	addi	sp,sp,16
1c00967a:	8082                	ret

1c00967c <pos_init_stop>:
1c00967c:	1141                	addi	sp,sp,-16
1c00967e:	c422                	sw	s0,8(sp)
1c009680:	1c000437          	lui	s0,0x1c000
1c009684:	c606                	sw	ra,12(sp)
1c009686:	01440413          	addi	s0,s0,20 # 1c000014 <dtor_list>
1c00968a:	8e8ff0ef          	jal	ra,1c008772 <pos_io_stop>
1c00968e:	405c                	lw	a5,4(s0)
1c009690:	c791                	beqz	a5,1c00969c <pos_init_stop+0x20>
1c009692:	0411                	addi	s0,s0,4
1c009694:	0411                	addi	s0,s0,4
1c009696:	9782                	jalr	a5
1c009698:	401c                	lw	a5,0(s0)
1c00969a:	ffed                	bnez	a5,1c009694 <pos_init_stop+0x18>
1c00969c:	40b2                	lw	ra,12(sp)
1c00969e:	4422                	lw	s0,8(sp)
1c0096a0:	0141                	addi	sp,sp,16
1c0096a2:	8082                	ret

1c0096a4 <pos_alloc_init>:
1c0096a4:	00758793          	addi	a5,a1,7
1c0096a8:	c407b7b3          	p.bclr	a5,a5,2,0
1c0096ac:	40b785b3          	sub	a1,a5,a1
1c0096b0:	c11c                	sw	a5,0(a0)
1c0096b2:	8e0d                	sub	a2,a2,a1
1c0096b4:	00c05763          	blez	a2,1c0096c2 <pos_alloc_init+0x1e>
1c0096b8:	c4063633          	p.bclr	a2,a2,2,0
1c0096bc:	c390                	sw	a2,0(a5)
1c0096be:	0007a223          	sw	zero,4(a5)
1c0096c2:	8082                	ret

1c0096c4 <pos_alloc>:
1c0096c4:	4110                	lw	a2,0(a0)
1c0096c6:	059d                	addi	a1,a1,7
1c0096c8:	c405b5b3          	p.bclr	a1,a1,2,0
1c0096cc:	ca31                	beqz	a2,1c009720 <pos_alloc+0x5c>
1c0096ce:	4218                	lw	a4,0(a2)
1c0096d0:	425c                	lw	a5,4(a2)
1c0096d2:	02b75963          	ble	a1,a4,1c009704 <pos_alloc+0x40>
1c0096d6:	cb81                	beqz	a5,1c0096e6 <pos_alloc+0x22>
1c0096d8:	4398                	lw	a4,0(a5)
1c0096da:	43d4                	lw	a3,4(a5)
1c0096dc:	00b75763          	ble	a1,a4,1c0096ea <pos_alloc+0x26>
1c0096e0:	863e                	mv	a2,a5
1c0096e2:	87b6                	mv	a5,a3
1c0096e4:	fbf5                	bnez	a5,1c0096d8 <pos_alloc+0x14>
1c0096e6:	853e                	mv	a0,a5
1c0096e8:	8082                	ret
1c0096ea:	00b70a63          	beq	a4,a1,1c0096fe <pos_alloc+0x3a>
1c0096ee:	00b78533          	add	a0,a5,a1
1c0096f2:	8f0d                	sub	a4,a4,a1
1c0096f4:	c118                	sw	a4,0(a0)
1c0096f6:	c154                	sw	a3,4(a0)
1c0096f8:	c248                	sw	a0,4(a2)
1c0096fa:	853e                	mv	a0,a5
1c0096fc:	8082                	ret
1c0096fe:	c254                	sw	a3,4(a2)
1c009700:	853e                	mv	a0,a5
1c009702:	8082                	ret
1c009704:	00e58b63          	beq	a1,a4,1c00971a <pos_alloc+0x56>
1c009708:	00b606b3          	add	a3,a2,a1
1c00970c:	8f0d                	sub	a4,a4,a1
1c00970e:	c2dc                	sw	a5,4(a3)
1c009710:	c298                	sw	a4,0(a3)
1c009712:	87b2                	mv	a5,a2
1c009714:	c114                	sw	a3,0(a0)
1c009716:	853e                	mv	a0,a5
1c009718:	8082                	ret
1c00971a:	c11c                	sw	a5,0(a0)
1c00971c:	87b2                	mv	a5,a2
1c00971e:	b7e1                	j	1c0096e6 <pos_alloc+0x22>
1c009720:	4781                	li	a5,0
1c009722:	b7d1                	j	1c0096e6 <pos_alloc+0x22>

1c009724 <pos_allocs_init>:
1c009724:	1141                	addi	sp,sp,-16
1c009726:	1c0015b7          	lui	a1,0x1c001
1c00972a:	c606                	sw	ra,12(sp)
1c00972c:	a9458793          	addi	a5,a1,-1388 # 1c000a94 <__l2_priv0_end>
1c009730:	1c008637          	lui	a2,0x1c008
1c009734:	04c7cc63          	blt	a5,a2,1c00978c <pos_allocs_init+0x68>
1c009738:	4581                	li	a1,0
1c00973a:	4601                	li	a2,0
1c00973c:	1c001537          	lui	a0,0x1c001
1c009740:	a8450513          	addi	a0,a0,-1404 # 1c000a84 <pos_alloc_l2>
1c009744:	3785                	jal	1c0096a4 <pos_alloc_init>
1c009746:	1c00a5b7          	lui	a1,0x1c00a
1c00974a:	94458793          	addi	a5,a1,-1724 # 1c009944 <__l2_priv1_end>
1c00974e:	1c010637          	lui	a2,0x1c010
1c009752:	02c7c963          	blt	a5,a2,1c009784 <pos_allocs_init+0x60>
1c009756:	4581                	li	a1,0
1c009758:	4601                	li	a2,0
1c00975a:	1c001537          	lui	a0,0x1c001
1c00975e:	a8850513          	addi	a0,a0,-1400 # 1c000a88 <pos_alloc_l2+0x4>
1c009762:	3789                	jal	1c0096a4 <pos_alloc_init>
1c009764:	1003a5b7          	lui	a1,0x1003a
1c009768:	40b2                	lw	ra,12(sp)
1c00976a:	55458793          	addi	a5,a1,1364 # 1003a554 <__l2_shared_end>
1c00976e:	1c080637          	lui	a2,0x1c080
1c009772:	1c001537          	lui	a0,0x1c001
1c009776:	8e1d                	sub	a2,a2,a5
1c009778:	55458593          	addi	a1,a1,1364
1c00977c:	a8c50513          	addi	a0,a0,-1396 # 1c000a8c <pos_alloc_l2+0x8>
1c009780:	0141                	addi	sp,sp,16
1c009782:	b70d                	j	1c0096a4 <pos_alloc_init>
1c009784:	8e1d                	sub	a2,a2,a5
1c009786:	94458593          	addi	a1,a1,-1724
1c00978a:	bfc1                	j	1c00975a <pos_allocs_init+0x36>
1c00978c:	8e1d                	sub	a2,a2,a5
1c00978e:	a9458593          	addi	a1,a1,-1388
1c009792:	b76d                	j	1c00973c <pos_allocs_init+0x18>

1c009794 <alloc_init_l1>:
1c009794:	1003a7b7          	lui	a5,0x1003a
1c009798:	01651593          	slli	a1,a0,0x16
1c00979c:	55478793          	addi	a5,a5,1364 # 1003a554 <__l2_shared_end>
1c0097a0:	95be                	add	a1,a1,a5
1c0097a2:	1c0017b7          	lui	a5,0x1c001
1c0097a6:	050a                	slli	a0,a0,0x2
1c0097a8:	6619                	lui	a2,0x6
1c0097aa:	a8078793          	addi	a5,a5,-1408 # 1c000a80 <pos_alloc_l1>
1c0097ae:	aac60613          	addi	a2,a2,-1364 # 5aac <__l1_heap_size>
1c0097b2:	953e                	add	a0,a0,a5
1c0097b4:	bdc5                	j	1c0096a4 <pos_alloc_init>

1c0097b6 <pi_l1_malloc>:
1c0097b6:	1c0017b7          	lui	a5,0x1c001
1c0097ba:	050a                	slli	a0,a0,0x2
1c0097bc:	a8078793          	addi	a5,a5,-1408 # 1c000a80 <pos_alloc_l1>
1c0097c0:	953e                	add	a0,a0,a5
1c0097c2:	b709                	j	1c0096c4 <pos_alloc>

1c0097c4 <__rt_handle_illegal_instr>:
1c0097c4:	8082                	ret

1c0097c6 <pos_irq_init>:
1c0097c6:	f14027f3          	csrr	a5,mhartid
1c0097ca:	477d                	li	a4,31
1c0097cc:	ca5797b3          	p.extractu	a5,a5,5,5
1c0097d0:	00e78f63          	beq	a5,a4,1c0097ee <pos_irq_init+0x28>
1c0097d4:	002047b7          	lui	a5,0x204
1c0097d8:	577d                	li	a4,-1
1c0097da:	cb98                	sw	a4,16(a5)
1c0097dc:	1c0087b7          	lui	a5,0x1c008
1c0097e0:	00078793          	mv	a5,a5
1c0097e4:	c007c7b3          	p.bset	a5,a5,0,0
1c0097e8:	30579073          	csrw	mtvec,a5
1c0097ec:	8082                	ret
1c0097ee:	1a10a7b7          	lui	a5,0x1a10a
1c0097f2:	577d                	li	a4,-1
1c0097f4:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa0cf2b4>
1c0097f8:	1c0087b7          	lui	a5,0x1c008
1c0097fc:	00078793          	mv	a5,a5
1c009800:	c007c7b3          	p.bset	a5,a5,0,0
1c009804:	30579073          	csrw	mtvec,a5
1c009808:	8082                	ret

1c00980a <pos_soc_event_init>:
1c00980a:	1a1067b7          	lui	a5,0x1a106
1c00980e:	577d                	li	a4,-1
1c009810:	00478693          	addi	a3,a5,4 # 1a106004 <__l2_shared_end+0xa0cbab0>
1c009814:	c298                	sw	a4,0(a3)
1c009816:	00878693          	addi	a3,a5,8
1c00981a:	c298                	sw	a4,0(a3)
1c00981c:	00c78693          	addi	a3,a5,12
1c009820:	c298                	sw	a4,0(a3)
1c009822:	01078693          	addi	a3,a5,16
1c009826:	c298                	sw	a4,0(a3)
1c009828:	01478693          	addi	a3,a5,20
1c00982c:	c298                	sw	a4,0(a3)
1c00982e:	01878693          	addi	a3,a5,24
1c009832:	c298                	sw	a4,0(a3)
1c009834:	01c78693          	addi	a3,a5,28
1c009838:	c298                	sw	a4,0(a3)
1c00983a:	02078793          	addi	a5,a5,32
1c00983e:	c398                	sw	a4,0(a5)
1c009840:	8082                	ret

1c009842 <cluster_entry_stub>:
1c009842:	1141                	addi	sp,sp,-16
1c009844:	c606                	sw	ra,12(sp)
1c009846:	002047b7          	lui	a5,0x204
1c00984a:	00070737          	lui	a4,0x70
1c00984e:	c798                	sw	a4,8(a5)
1c009850:	0ff00713          	li	a4,255
1c009854:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1fe754>
1c009858:	00e7a023          	sw	a4,0(a5)
1c00985c:	00e7a623          	sw	a4,12(a5)
1c009860:	1c0017b7          	lui	a5,0x1c001
1c009864:	a907a783          	lw	a5,-1392(a5) # 1c000a90 <cluster_entry>
1c009868:	9782                	jalr	a5
1c00986a:	f14027f3          	csrr	a5,mhartid
1c00986e:	f457b7b3          	p.bclr	a5,a5,26,5
1c009872:	eb89                	bnez	a5,1c009884 <cluster_entry_stub+0x42>
1c009874:	1c001737          	lui	a4,0x1c001
1c009878:	1c0017b7          	lui	a5,0x1c001
1c00987c:	a6a72c23          	sw	a0,-1416(a4) # 1c000a78 <_bss_start>
1c009880:	a607ae23          	sw	zero,-1412(a5) # 1c000a7c <cluster_running>
1c009884:	002047b7          	lui	a5,0x204
1c009888:	577d                	li	a4,-1
1c00988a:	c3d8                	sw	a4,4(a5)
1c00988c:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1fe58c>
1c009890:	a001                	j	1c009890 <cluster_entry_stub+0x4e>

1c009892 <cluster_start>:
1c009892:	1141                	addi	sp,sp,-16
1c009894:	1c0017b7          	lui	a5,0x1c001
1c009898:	c226                	sw	s1,4(sp)
1c00989a:	84aa                	mv	s1,a0
1c00989c:	4509                	li	a0,2
1c00989e:	a8b7a823          	sw	a1,-1392(a5) # 1c000a90 <cluster_entry>
1c0098a2:	c606                	sw	ra,12(sp)
1c0098a4:	c422                	sw	s0,8(sp)
1c0098a6:	d07fe0ef          	jal	ra,1c0085ac <pos_fll_init>
1c0098aa:	8526                	mv	a0,s1
1c0098ac:	35e5                	jal	1c009794 <alloc_init_l1>
1c0098ae:	04048413          	addi	s0,s1,64
1c0098b2:	00201737          	lui	a4,0x201
1c0098b6:	40070713          	addi	a4,a4,1024 # 201400 <__l1_heap_size+0x1fb954>
1c0098ba:	045a                	slli	s0,s0,0x16
1c0098bc:	56fd                	li	a3,-1
1c0098be:	f14027f3          	csrr	a5,mhartid
1c0098c2:	00d46723          	p.sw	a3,a4(s0)
1c0098c6:	ca5797b3          	p.extractu	a5,a5,5,5
1c0098ca:	477d                	li	a4,31
1c0098cc:	00e78f63          	beq	a5,a4,1c0098ea <cluster_start+0x58>
1c0098d0:	002047b7          	lui	a5,0x204
1c0098d4:	00070737          	lui	a4,0x70
1c0098d8:	c798                	sw	a4,8(a5)
1c0098da:	0ff00713          	li	a4,255
1c0098de:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1fe754>
1c0098e2:	00e7a023          	sw	a4,0(a5)
1c0098e6:	00e7a623          	sw	a4,12(a5)
1c0098ea:	8526                	mv	a0,s1
1c0098ec:	3565                	jal	1c009794 <alloc_init_l1>
1c0098ee:	6591                	lui	a1,0x4
1c0098f0:	8526                	mv	a0,s1
1c0098f2:	35d1                	jal	1c0097b6 <pi_l1_malloc>
1c0098f4:	1003a7b7          	lui	a5,0x1003a
1c0098f8:	54a7a823          	sw	a0,1360(a5) # 1003a550 <cluster_stacks>
1c0098fc:	cd15                	beqz	a0,1c009938 <cluster_start+0xa6>
1c0098fe:	00200637          	lui	a2,0x200
1c009902:	1c0017b7          	lui	a5,0x1c001
1c009906:	4705                	li	a4,1
1c009908:	1c0085b7          	lui	a1,0x1c008
1c00990c:	04060613          	addi	a2,a2,64 # 200040 <__l1_heap_size+0x1fa594>
1c009910:	a6e7ae23          	sw	a4,-1412(a5) # 1c000a7c <cluster_running>
1c009914:	08058593          	addi	a1,a1,128 # 1c008080 <_start>
1c009918:	9622                	add	a2,a2,s0
1c00991a:	4701                	li	a4,0
1c00991c:	008350fb          	lp.setupi	x1,8,1c009928 <cluster_start+0x96>
1c009920:	00271693          	slli	a3,a4,0x2
1c009924:	00b6e623          	p.sw	a1,a2(a3)
1c009928:	0705                	addi	a4,a4,1
1c00992a:	002007b7          	lui	a5,0x200
1c00992e:	07a1                	addi	a5,a5,8
1c009930:	0ff00713          	li	a4,255
1c009934:	00e467a3          	p.sw	a4,a5(s0)
1c009938:	40b2                	lw	ra,12(sp)
1c00993a:	4422                	lw	s0,8(sp)
1c00993c:	4492                	lw	s1,4(sp)
1c00993e:	0141                	addi	sp,sp,16
1c009940:	8082                	ret

1c009942 <_endtext>:
	...
make[1]: Leaving directory `/scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/main_with_golden_output'
