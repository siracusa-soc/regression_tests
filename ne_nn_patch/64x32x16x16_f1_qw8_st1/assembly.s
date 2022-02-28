Flags : -O2 -g -Iinc -fno-tree-loop-optimize -fno-tree-loop-distribute-patterns  -DNB_RUN=1  
make[1]: Entering directory `/scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/64x32x16x16_f1_qw8_st1'
/usr/pack/pulpsdk-1.0-kgf/artifactory/pulp-sdk-release/pkg/pulp_riscv_gcc/1.0.16//bin/riscv32-unknown-elf-objdump -Mmarch=rv32imcxgap9 -d /scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/64x32x16x16_f1_qw8_st1/build/ne16_test/ne16_test

/scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/64x32x16x16_f1_qw8_st1/build/ne16_test/ne16_test:     file format elf32-littleriscv


Disassembly of section .vectors:

1c008000 <__irq_vector_base>:
1c008000:	5080106f          	j	1c009508 <__rt_handle_illegal_instr>
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
1c008084:	4840106f          	j	1c009508 <__rt_handle_illegal_instr>

1c008088 <pos_no_irq_handler>:
1c008088:	30200073          	mret

1c00808c <pos_semihosting_call>:
1c00808c:	00100073          	ebreak
1c008090:	00008067          	ret

1c008094 <pe_start>:
1c008094:	f400a117          	auipc	sp,0xf400a
1c008098:	07810113          	addi	sp,sp,120 # 1001210c <cluster_stacks>
1c00809c:	00012103          	lw	sp,0(sp)
1c0080a0:	000011b7          	lui	gp,0x1
1c0080a4:	80018193          	addi	gp,gp,-2048 # 800 <__cluster_text_size+0x800>
1c0080a8:	00158593          	addi	a1,a1,1
1c0080ac:	02b180b3          	mul	ra,gp,a1
1c0080b0:	00110133          	add	sp,sp,ra
1c0080b4:	4d20106f          	j	1c009586 <cluster_entry_stub>

1c0080b8 <do_cl_boot>:
1c0080b8:	10200137          	lui	sp,0x10200
1c0080bc:	00100193          	li	gp,1
1c0080c0:	00000217          	auipc	tp,0x0
1c0080c4:	fc020213          	addi	tp,tp,-64 # 1c008080 <_start>
1c0080c8:	04412023          	sw	tp,64(sp) # 10200040 <__l2_shared_end+0x1edf30>
1c0080cc:	00312423          	sw	gp,8(sp)

1c0080d0 <loop>:
1c0080d0:	1a10a137          	lui	sp,0x1a10a
1c0080d4:	80010113          	addi	sp,sp,-2048 # 1a109800 <__l2_shared_end+0xa0f76f0>
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
1c0080fc:	80028293          	addi	t0,t0,-2048 # 1c0008f8 <_bss_start>
1c008100:	ffff9317          	auipc	t1,0xffff9
1c008104:	81430313          	addi	t1,t1,-2028 # 1c000914 <__l2_priv0_end>
1c008108:	0002a023          	sw	zero,0(t0)
1c00810c:	0291                	addi	t0,t0,4
1c00810e:	fe62ede3          	bltu	t0,t1,1c008108 <_stext+0x24>
1c008112:	ffff8117          	auipc	sp,0xffff8
1c008116:	77e10113          	addi	sp,sp,1918 # 1c000890 <stack>
1c00811a:	24e010ef          	jal	ra,1c009368 <pos_init_start>
1c00811e:	00000513          	li	a0,0
1c008122:	00000593          	li	a1,0
1c008126:	00000397          	auipc	t2,0x0
1c00812a:	1c638393          	addi	t2,t2,454 # 1c0082ec <main>
1c00812e:	000380e7          	jalr	t2
1c008132:	842a                	mv	s0,a0
1c008134:	28a010ef          	jal	ra,1c0093be <pos_init_stop>
1c008138:	8522                	mv	a0,s0
1c00813a:	364000ef          	jal	ra,1c00849e <exit>

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
1c00818c:	2635                	jal	1c0084b8 <printf>
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
1c0081b4:	2c5d                	jal	1c00846a <puts>
1c0081b6:	4702                	lw	a4,0(sp)
1c0081b8:	46b2                	lw	a3,12(sp)
1c0081ba:	4622                	lw	a2,8(sp)
1c0081bc:	4592                	lw	a1,4(sp)
1c0081be:	b7e9                	j	1c008188 <ne16_compare_int+0x4a>
1c0081c0:	4481                	li	s1,0
1c0081c2:	bfc1                	j	1c008192 <ne16_compare_int+0x54>

1c0081c4 <run_test>:
1c0081c4:	1c0207b7          	lui	a5,0x1c020
1c0081c8:	1141                	addi	sp,sp,-16
1c0081ca:	00078793          	mv	a5,a5
1c0081ce:	10400737          	lui	a4,0x10400
1c0081d2:	0806d0fb          	lp.setupi	x1,128,1c0081ec <run_test+0x28>
1c0081d6:	0007a803          	lw	a6,0(a5) # 1c020000 <ne16_weights>
1c0081da:	43c8                	lw	a0,4(a5)
1c0081dc:	478c                	lw	a1,8(a5)
1c0081de:	47d0                	lw	a2,12(a5)
1c0081e0:	01072023          	sw	a6,0(a4) # 10400000 <__l2_shared_end+0x3edef0>
1c0081e4:	c348                	sw	a0,4(a4)
1c0081e6:	c70c                	sw	a1,8(a4)
1c0081e8:	c750                	sw	a2,12(a4)
1c0081ea:	07c1                	addi	a5,a5,16
1c0081ec:	0741                	addi	a4,a4,16
1c0081ee:	102007b7          	lui	a5,0x10200
1c0081f2:	07e1                	addi	a5,a5,24
1c0081f4:	4398                	lw	a4,0(a5)
1c0081f6:	c0b74733          	p.bset	a4,a4,0,11
1c0081fa:	c398                	sw	a4,0(a5)
1c0081fc:	4398                	lw	a4,0(a5)
1c0081fe:	c0874733          	p.bset	a4,a4,0,8
1c008202:	c398                	sw	a4,0(a5)
1c008204:	4398                	lw	a4,0(a5)
1c008206:	ce073733          	p.bclr	a4,a4,7,0
1c00820a:	c398                	sw	a4,0(a5)
1c00820c:	4398                	lw	a4,0(a5)
1c00820e:	c0374733          	p.bset	a4,a4,0,3
1c008212:	c398                	sw	a4,0(a5)
1c008214:	102017b7          	lui	a5,0x10201
1c008218:	0007aa23          	sw	zero,20(a5) # 10201014 <__l2_shared_end+0x1eef04>
1c00821c:	c602                	sw	zero,12(sp)
1c00821e:	4732                	lw	a4,12(sp)
1c008220:	47a5                	li	a5,9
1c008222:	00e7c963          	blt	a5,a4,1c008234 <run_test+0x70>
1c008226:	4725                	li	a4,9
1c008228:	47b2                	lw	a5,12(sp)
1c00822a:	0785                	addi	a5,a5,1
1c00822c:	c63e                	sw	a5,12(sp)
1c00822e:	47b2                	lw	a5,12(sp)
1c008230:	fef75ce3          	ble	a5,a4,1c008228 <run_test+0x64>
1c008234:	10201637          	lui	a2,0x10201
1c008238:	0611                	addi	a2,a2,4
1c00823a:	421c                	lw	a5,0(a2)
1c00823c:	0007dc63          	bgez	a5,1c008254 <run_test+0x90>
1c008240:	6705                	lui	a4,0x1
1c008242:	002047b7          	lui	a5,0x204
1c008246:	c798                	sw	a4,8(a5)
1c008248:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1d614c>
1c00824c:	c3d8                	sw	a4,4(a5)
1c00824e:	4214                	lw	a3,0(a2)
1c008250:	fe06cbe3          	bltz	a3,1c008246 <run_test+0x82>
1c008254:	102015b7          	lui	a1,0x10201
1c008258:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x1eef10>
1c00825c:	0005a023          	sw	zero,0(a1)
1c008260:	100107b7          	lui	a5,0x10010
1c008264:	10c78793          	addi	a5,a5,268 # 1001010c <ne16_infeat>
1c008268:	00f5a223          	sw	a5,4(a1)
1c00826c:	10000537          	lui	a0,0x10000
1c008270:	10c50793          	addi	a5,a0,268 # 1000010c <ne16_streamin>
1c008274:	00f5a423          	sw	a5,8(a1)
1c008278:	100007b7          	lui	a5,0x10000
1c00827c:	00478793          	addi	a5,a5,4 # 10000004 <ne16_scale>
1c008280:	00f5a623          	sw	a5,12(a1)
1c008284:	10078713          	addi	a4,a5,256
1c008288:	00e5a823          	sw	a4,16(a1)
1c00828c:	10478793          	addi	a5,a5,260
1c008290:	00f5aa23          	sw	a5,20(a1)
1c008294:	1c001837          	lui	a6,0x1c001
1c008298:	4719                	li	a4,6
1c00829a:	89080813          	addi	a6,a6,-1904 # 1c000890 <stack>
1c00829e:	012450fb          	lp.setupi	x1,18,1c0082ae <run_test+0xea>
1c0082a2:	00271693          	slli	a3,a4,0x2
1c0082a6:	20d87603          	p.lw	a2,a3(a6)
1c0082aa:	00c5e6a3          	p.sw	a2,a3(a1)
1c0082ae:	0705                	addi	a4,a4,1
1c0082b0:	10201637          	lui	a2,0x10201
1c0082b4:	00062023          	sw	zero,0(a2) # 10201000 <__l2_shared_end+0x1eeef0>
1c0082b8:	6705                	lui	a4,0x1
1c0082ba:	002047b7          	lui	a5,0x204
1c0082be:	0631                	addi	a2,a2,12
1c0082c0:	c798                	sw	a4,8(a5)
1c0082c2:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1d614c>
1c0082c6:	c3d8                	sw	a4,4(a5)
1c0082c8:	4214                	lw	a3,0(a2)
1c0082ca:	fafd                	bnez	a3,1c0082c0 <run_test+0xfc>
1c0082cc:	102007b7          	lui	a5,0x10200
1c0082d0:	07e1                	addi	a5,a5,24
1c0082d2:	4398                	lw	a4,0(a5)
1c0082d4:	1c0105b7          	lui	a1,0x1c010
1c0082d8:	6611                	lui	a2,0x4
1c0082da:	c0b73733          	p.bclr	a4,a4,0,11
1c0082de:	c398                	sw	a4,0(a5)
1c0082e0:	00058593          	mv	a1,a1
1c0082e4:	10c50513          	addi	a0,a0,268
1c0082e8:	0141                	addi	sp,sp,16
1c0082ea:	bd91                	j	1c00813e <ne16_compare_int>

1c0082ec <main>:
1c0082ec:	bde1                	j	1c0081c4 <run_test>

1c0082ee <pos_fll_init>:
1c0082ee:	08152063          	p.beqimm	a0,1,1c00836e <pos_fll_init+0x80>
1c0082f2:	04252a63          	p.beqimm	a0,2,1c008346 <pos_fll_init+0x58>
1c0082f6:	c505                	beqz	a0,1c00831e <pos_fll_init+0x30>
1c0082f8:	4701                	li	a4,0
1c0082fa:	00470793          	addi	a5,a4,4 # 1004 <__cluster_text_size+0x1004>
1c0082fe:	05300613          	li	a2,83
1c008302:	00c70693          	addi	a3,a4,12
1c008306:	c390                	sw	a2,0(a5)
1c008308:	020c17b7          	lui	a5,0x20c1
1c00830c:	0721                	addi	a4,a4,8
1c00830e:	0006a023          	sw	zero,0(a3)
1c008312:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20938ea>
1c008316:	c31c                	sw	a5,0(a4)
1c008318:	05f68537          	lui	a0,0x5f68
1c00831c:	8082                	ret
1c00831e:	1a1007b7          	lui	a5,0x1a100
1c008322:	00878713          	addi	a4,a5,8 # 1a100008 <__l2_shared_end+0xa0edef8>
1c008326:	00c78693          	addi	a3,a5,12
1c00832a:	05300613          	li	a2,83
1c00832e:	0791                	addi	a5,a5,4
1c008330:	c390                	sw	a2,0(a5)
1c008332:	020c17b7          	lui	a5,0x20c1
1c008336:	0006a023          	sw	zero,0(a3)
1c00833a:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20938ea>
1c00833e:	c31c                	sw	a5,0(a4)
1c008340:	05f68537          	lui	a0,0x5f68
1c008344:	8082                	ret
1c008346:	1a1007b7          	lui	a5,0x1a100
1c00834a:	01878713          	addi	a4,a5,24 # 1a100018 <__l2_shared_end+0xa0edf08>
1c00834e:	01c78693          	addi	a3,a5,28
1c008352:	05300613          	li	a2,83
1c008356:	07d1                	addi	a5,a5,20
1c008358:	c390                	sw	a2,0(a5)
1c00835a:	020c17b7          	lui	a5,0x20c1
1c00835e:	0006a023          	sw	zero,0(a3)
1c008362:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20938ea>
1c008366:	c31c                	sw	a5,0(a4)
1c008368:	05f68537          	lui	a0,0x5f68
1c00836c:	8082                	ret
1c00836e:	1a1007b7          	lui	a5,0x1a100
1c008372:	02878713          	addi	a4,a5,40 # 1a100028 <__l2_shared_end+0xa0edf18>
1c008376:	02c78693          	addi	a3,a5,44
1c00837a:	05300613          	li	a2,83
1c00837e:	02478793          	addi	a5,a5,36
1c008382:	c390                	sw	a2,0(a5)
1c008384:	020c17b7          	lui	a5,0x20c1
1c008388:	0006a023          	sw	zero,0(a3)
1c00838c:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20938ea>
1c008390:	c31c                	sw	a5,0(a4)
1c008392:	05f68537          	lui	a0,0x5f68
1c008396:	8082                	ret

1c008398 <pos_soc_init>:
1c008398:	8082                	ret

1c00839a <pos_wait_forever>:
1c00839a:	f14027f3          	csrr	a5,mhartid
1c00839e:	477d                	li	a4,31
1c0083a0:	ca5797b3          	p.extractu	a5,a5,5,5
1c0083a4:	00e78963          	beq	a5,a4,1c0083b6 <pos_wait_forever+0x1c>
1c0083a8:	002047b7          	lui	a5,0x204
1c0083ac:	577d                	li	a4,-1
1c0083ae:	c3d8                	sw	a4,4(a5)
1c0083b0:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1d6148>
1c0083b4:	a001                	j	1c0083b4 <pos_wait_forever+0x1a>
1c0083b6:	1a10a7b7          	lui	a5,0x1a10a
1c0083ba:	577d                	li	a4,-1
1c0083bc:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa0f76f8>
1c0083c0:	10500073          	wfi
1c0083c4:	10500073          	wfi
1c0083c8:	bfe5                	j	1c0083c0 <pos_wait_forever+0x26>

1c0083ca <memcpy>:
1c0083ca:	00a5e7b3          	or	a5,a1,a0
1c0083ce:	fa27b7b3          	p.bclr	a5,a5,29,2
1c0083d2:	cf81                	beqz	a5,1c0083ea <memcpy+0x20>
1c0083d4:	87aa                	mv	a5,a0
1c0083d6:	ce0d                	beqz	a2,1c008410 <memcpy+0x46>
1c0083d8:	006640fb          	lp.setup	x1,a2,1c0083e4 <memcpy+0x1a>
1c0083dc:	0005c703          	lbu	a4,0(a1) # 1c010000 <ne16_outfeat>
1c0083e0:	0785                	addi	a5,a5,1
1c0083e2:	0585                	addi	a1,a1,1
1c0083e4:	fee78fa3          	sb	a4,-1(a5)
1c0083e8:	8082                	ret
1c0083ea:	fa2637b3          	p.bclr	a5,a2,29,2
1c0083ee:	ef99                	bnez	a5,1c00840c <memcpy+0x42>
1c0083f0:	de65                	beqz	a2,1c0083e8 <memcpy+0x1e>
1c0083f2:	1671                	addi	a2,a2,-4
1c0083f4:	00265793          	srli	a5,a2,0x2
1c0083f8:	872a                	mv	a4,a0
1c0083fa:	0785                	addi	a5,a5,1
1c0083fc:	0057c0fb          	lp.setup	x1,a5,1c008406 <memcpy+0x3c>
1c008400:	4194                	lw	a3,0(a1)
1c008402:	0711                	addi	a4,a4,4
1c008404:	0591                	addi	a1,a1,4
1c008406:	fed72e23          	sw	a3,-4(a4)
1c00840a:	8082                	ret
1c00840c:	87aa                	mv	a5,a0
1c00840e:	b7e9                	j	1c0083d8 <memcpy+0xe>
1c008410:	8082                	ret

1c008412 <memmove>:
1c008412:	40b507b3          	sub	a5,a0,a1
1c008416:	00c7fd63          	bleu	a2,a5,1c008430 <memmove+0x1e>
1c00841a:	87b2                	mv	a5,a2
1c00841c:	0077c0fb          	lp.setup	x1,a5,1c00842a <memmove+0x18>
1c008420:	167d                	addi	a2,a2,-1
1c008422:	00c58733          	add	a4,a1,a2
1c008426:	00074703          	lbu	a4,0(a4)
1c00842a:	00e54623          	p.sb	a4,a2(a0)
1c00842e:	8082                	ret
1c008430:	87aa                	mv	a5,a0
1c008432:	ca01                	beqz	a2,1c008442 <memmove+0x30>
1c008434:	004640fb          	lp.setup	x1,a2,1c00843c <memmove+0x2a>
1c008438:	0015c70b          	p.lbu	a4,1(a1!)
1c00843c:	00e780ab          	p.sb	a4,1(a5!)
1c008440:	8082                	ret
1c008442:	8082                	ret

1c008444 <strchr>:
1c008444:	00054783          	lbu	a5,0(a0) # 5f68000 <__l1_heap_size+0x5f3a110>
1c008448:	0ff5f593          	andi	a1,a1,255
1c00844c:	00b78863          	beq	a5,a1,1c00845c <strchr+0x18>
1c008450:	c799                	beqz	a5,1c00845e <strchr+0x1a>
1c008452:	0505                	addi	a0,a0,1
1c008454:	00054783          	lbu	a5,0(a0)
1c008458:	feb79ce3          	bne	a5,a1,1c008450 <strchr+0xc>
1c00845c:	8082                	ret
1c00845e:	0015b593          	seqz	a1,a1
1c008462:	40b005b3          	neg	a1,a1
1c008466:	8d6d                	and	a0,a0,a1
1c008468:	8082                	ret

1c00846a <puts>:
1c00846a:	00054783          	lbu	a5,0(a0)
1c00846e:	1a104737          	lui	a4,0x1a104
1c008472:	02070713          	addi	a4,a4,32 # 1a104020 <__l2_shared_end+0xa0f1f10>
1c008476:	c791                	beqz	a5,1c008482 <puts+0x18>
1c008478:	c31c                	sw	a5,0(a4)
1c00847a:	0505                	addi	a0,a0,1
1c00847c:	00054783          	lbu	a5,0(a0)
1c008480:	ffe5                	bnez	a5,1c008478 <puts+0xe>
1c008482:	1a1047b7          	lui	a5,0x1a104
1c008486:	4729                	li	a4,10
1c008488:	d398                	sw	a4,32(a5)
1c00848a:	4501                	li	a0,0
1c00848c:	8082                	ret

1c00848e <pos_libc_fputc_locked>:
1c00848e:	1a1047b7          	lui	a5,0x1a104
1c008492:	0ff57513          	andi	a0,a0,255
1c008496:	d388                	sw	a0,32(a5)
1c008498:	4501                	li	a0,0
1c00849a:	8082                	ret

1c00849c <pos_libc_prf_locked>:
1c00849c:	a87d                	j	1c00855a <pos_libc_prf>

1c00849e <exit>:
1c00849e:	1141                	addi	sp,sp,-16
1c0084a0:	c606                	sw	ra,12(sp)
1c0084a2:	1a1047b7          	lui	a5,0x1a104
1c0084a6:	c1f54533          	p.bset	a0,a0,0,31
1c0084aa:	0aa7a023          	sw	a0,160(a5) # 1a1040a0 <__l2_shared_end+0xa0f1f90>
1c0084ae:	35f5                	jal	1c00839a <pos_wait_forever>

1c0084b0 <pos_io_start>:
1c0084b0:	4501                	li	a0,0
1c0084b2:	8082                	ret

1c0084b4 <pos_io_stop>:
1c0084b4:	4501                	li	a0,0
1c0084b6:	8082                	ret

1c0084b8 <printf>:
1c0084b8:	7139                	addi	sp,sp,-64
1c0084ba:	02410313          	addi	t1,sp,36
1c0084be:	d432                	sw	a2,40(sp)
1c0084c0:	862a                	mv	a2,a0
1c0084c2:	1c008537          	lui	a0,0x1c008
1c0084c6:	d22e                	sw	a1,36(sp)
1c0084c8:	d636                	sw	a3,44(sp)
1c0084ca:	4589                	li	a1,2
1c0084cc:	869a                	mv	a3,t1
1c0084ce:	48e50513          	addi	a0,a0,1166 # 1c00848e <pos_libc_fputc_locked>
1c0084d2:	ce06                	sw	ra,28(sp)
1c0084d4:	d83a                	sw	a4,48(sp)
1c0084d6:	da3e                	sw	a5,52(sp)
1c0084d8:	dc42                	sw	a6,56(sp)
1c0084da:	de46                	sw	a7,60(sp)
1c0084dc:	c61a                	sw	t1,12(sp)
1c0084de:	3f7d                	jal	1c00849c <pos_libc_prf_locked>
1c0084e0:	40f2                	lw	ra,28(sp)
1c0084e2:	6121                	addi	sp,sp,64
1c0084e4:	8082                	ret

1c0084e6 <pos_libc_to_x>:
1c0084e6:	872a                	mv	a4,a0
1c0084e8:	88aa                	mv	a7,a0
1c0084ea:	4e25                	li	t3,9
1c0084ec:	02c5f333          	remu	t1,a1,a2
1c0084f0:	4781                	li	a5,0
1c0084f2:	00188813          	addi	a6,a7,1
1c0084f6:	0ff37513          	andi	a0,t1,255
1c0084fa:	02c5d5b3          	divu	a1,a1,a2
1c0084fe:	03050513          	addi	a0,a0,48
1c008502:	006e7463          	bleu	t1,t3,1c00850a <pos_libc_to_x+0x24>
1c008506:	02700793          	li	a5,39
1c00850a:	97aa                	add	a5,a5,a0
1c00850c:	00f88023          	sb	a5,0(a7)
1c008510:	88c2                	mv	a7,a6
1c008512:	fde9                	bnez	a1,1c0084ec <pos_libc_to_x+0x6>
1c008514:	40e80533          	sub	a0,a6,a4
1c008518:	02d55f63          	ble	a3,a0,1c008556 <pos_libc_to_x+0x70>
1c00851c:	410707b3          	sub	a5,a4,a6
1c008520:	03000613          	li	a2,48
1c008524:	96be                	add	a3,a3,a5
1c008526:	0086c0fb          	lp.setup	x1,a3,1c008536 <pos_libc_to_x+0x50>
1c00852a:	00180793          	addi	a5,a6,1
1c00852e:	00c80023          	sb	a2,0(a6)
1c008532:	40e78533          	sub	a0,a5,a4
1c008536:	883e                	mv	a6,a5
1c008538:	fe078fab          	p.sb	zero,-1(a5!)
1c00853c:	00f77c63          	bleu	a5,a4,1c008554 <pos_libc_to_x+0x6e>
1c008540:	00074603          	lbu	a2,0(a4)
1c008544:	0007c683          	lbu	a3,0(a5)
1c008548:	fec78fab          	p.sb	a2,-1(a5!)
1c00854c:	00d700ab          	p.sb	a3,1(a4!)
1c008550:	fef768e3          	bltu	a4,a5,1c008540 <pos_libc_to_x+0x5a>
1c008554:	8082                	ret
1c008556:	87c2                	mv	a5,a6
1c008558:	b7c5                	j	1c008538 <pos_libc_to_x+0x52>

1c00855a <pos_libc_prf>:
1c00855a:	7169                	addi	sp,sp,-304
1c00855c:	12912223          	sw	s1,292(sp)
1c008560:	13212023          	sw	s2,288(sp)
1c008564:	11312e23          	sw	s3,284(sp)
1c008568:	11412c23          	sw	s4,280(sp)
1c00856c:	11512a23          	sw	s5,276(sp)
1c008570:	dfee                	sw	s11,252(sp)
1c008572:	12112623          	sw	ra,300(sp)
1c008576:	12812423          	sw	s0,296(sp)
1c00857a:	11612823          	sw	s6,272(sp)
1c00857e:	11712623          	sw	s7,268(sp)
1c008582:	11812423          	sw	s8,264(sp)
1c008586:	11912223          	sw	s9,260(sp)
1c00858a:	11a12023          	sw	s10,256(sp)
1c00858e:	84aa                	mv	s1,a0
1c008590:	8a2e                	mv	s4,a1
1c008592:	8db2                	mv	s11,a2
1c008594:	8936                	mv	s2,a3
1c008596:	4a81                	li	s5,0
1c008598:	1c0009b7          	lui	s3,0x1c000
1c00859c:	000dc503          	lbu	a0,0(s11)
1c0085a0:	0d85                	addi	s11,s11,1
1c0085a2:	cd11                	beqz	a0,1c0085be <pos_libc_prf+0x64>
1c0085a4:	02500793          	li	a5,37
1c0085a8:	04f50763          	beq	a0,a5,1c0085f6 <pos_libc_prf+0x9c>
1c0085ac:	85d2                	mv	a1,s4
1c0085ae:	9482                	jalr	s1
1c0085b0:	15f52c63          	p.beqimm	a0,-1,1c008708 <pos_libc_prf+0x1ae>
1c0085b4:	0a85                	addi	s5,s5,1
1c0085b6:	000dc503          	lbu	a0,0(s11)
1c0085ba:	0d85                	addi	s11,s11,1
1c0085bc:	f565                	bnez	a0,1c0085a4 <pos_libc_prf+0x4a>
1c0085be:	12c12083          	lw	ra,300(sp)
1c0085c2:	12812403          	lw	s0,296(sp)
1c0085c6:	8556                	mv	a0,s5
1c0085c8:	12412483          	lw	s1,292(sp)
1c0085cc:	12012903          	lw	s2,288(sp)
1c0085d0:	11c12983          	lw	s3,284(sp)
1c0085d4:	11812a03          	lw	s4,280(sp)
1c0085d8:	11412a83          	lw	s5,276(sp)
1c0085dc:	11012b03          	lw	s6,272(sp)
1c0085e0:	10c12b83          	lw	s7,268(sp)
1c0085e4:	10812c03          	lw	s8,264(sp)
1c0085e8:	10412c83          	lw	s9,260(sp)
1c0085ec:	10012d03          	lw	s10,256(sp)
1c0085f0:	5dfe                	lw	s11,252(sp)
1c0085f2:	6155                	addi	sp,sp,304
1c0085f4:	8082                	ret
1c0085f6:	000dcc03          	lbu	s8,0(s11)
1c0085fa:	02000313          	li	t1,32
1c0085fe:	001d8d13          	addi	s10,s11,1
1c008602:	07498513          	addi	a0,s3,116 # 1c000074 <__DTOR_END__+0x58>
1c008606:	85e2                	mv	a1,s8
1c008608:	c21a                	sw	t1,4(sp)
1c00860a:	c602                	sw	zero,12(sp)
1c00860c:	c402                	sw	zero,8(sp)
1c00860e:	c802                	sw	zero,16(sp)
1c008610:	c002                	sw	zero,0(sp)
1c008612:	02300413          	li	s0,35
1c008616:	02d00b93          	li	s7,45
1c00861a:	03000c93          	li	s9,48
1c00861e:	8b6a                	mv	s6,s10
1c008620:	3515                	jal	1c008444 <strchr>
1c008622:	c905                	beqz	a0,1c008652 <pos_libc_prf+0xf8>
1c008624:	108c0b63          	beq	s8,s0,1c00873a <pos_libc_prf+0x1e0>
1c008628:	0f847263          	bleu	s8,s0,1c00870c <pos_libc_prf+0x1b2>
1c00862c:	117c0363          	beq	s8,s7,1c008732 <pos_libc_prf+0x1d8>
1c008630:	0f9c0c63          	beq	s8,s9,1c008728 <pos_libc_prf+0x1ce>
1c008634:	02b00593          	li	a1,43
1c008638:	0ebc0463          	beq	s8,a1,1c008720 <pos_libc_prf+0x1c6>
1c00863c:	8dea                	mv	s11,s10
1c00863e:	000dcc03          	lbu	s8,0(s11)
1c008642:	001d8d13          	addi	s10,s11,1
1c008646:	07498513          	addi	a0,s3,116
1c00864a:	85e2                	mv	a1,s8
1c00864c:	8b6a                	mv	s6,s10
1c00864e:	3bdd                	jal	1c008444 <strchr>
1c008650:	f971                	bnez	a0,1c008624 <pos_libc_prf+0xca>
1c008652:	02a00613          	li	a2,42
1c008656:	10cc0863          	beq	s8,a2,1c008766 <pos_libc_prf+0x20c>
1c00865a:	fd0c0613          	addi	a2,s8,-48
1c00865e:	45a5                	li	a1,9
1c008660:	4401                	li	s0,0
1c008662:	0ec5f263          	bleu	a2,a1,1c008746 <pos_libc_prf+0x1ec>
1c008666:	02e00713          	li	a4,46
1c00866a:	5bfd                	li	s7,-1
1c00866c:	14ec0563          	beq	s8,a4,1c0087b6 <pos_libc_prf+0x25c>
1c008670:	1c000537          	lui	a0,0x1c000
1c008674:	85e2                	mv	a1,s8
1c008676:	07c50513          	addi	a0,a0,124 # 1c00007c <__DTOR_END__+0x60>
1c00867a:	33e9                	jal	1c008444 <strchr>
1c00867c:	8dda                	mv	s11,s6
1c00867e:	c509                	beqz	a0,1c008688 <pos_libc_prf+0x12e>
1c008680:	000b4c03          	lbu	s8,0(s6)
1c008684:	001b0d93          	addi	s11,s6,1
1c008688:	06700713          	li	a4,103
1c00868c:	0f875b63          	ble	s8,a4,1c008782 <pos_libc_prf+0x228>
1c008690:	07000713          	li	a4,112
1c008694:	60ec0863          	beq	s8,a4,1c008ca4 <pos_libc_prf+0x74a>
1c008698:	15875363          	ble	s8,a4,1c0087de <pos_libc_prf+0x284>
1c00869c:	07500713          	li	a4,117
1c0086a0:	5cec0963          	beq	s8,a4,1c008c72 <pos_libc_prf+0x718>
1c0086a4:	07800713          	li	a4,120
1c0086a8:	4cec0b63          	beq	s8,a4,1c008b7e <pos_libc_prf+0x624>
1c0086ac:	07300713          	li	a4,115
1c0086b0:	62ec1463          	bne	s8,a4,1c008cd8 <pos_libc_prf+0x77e>
1c0086b4:	00092583          	lw	a1,0(s2)
1c0086b8:	00490b13          	addi	s6,s2,4
1c0086bc:	4d01                	li	s10,0
1c0086be:	0c8450fb          	lp.setupi	x1,200,1c0086ce <pos_libc_prf+0x174>
1c0086c2:	01a58733          	add	a4,a1,s10
1c0086c6:	00074703          	lbu	a4,0(a4)
1c0086ca:	60070d63          	beqz	a4,1c008ce4 <pos_libc_prf+0x78a>
1c0086ce:	0d05                	addi	s10,s10,1
1c0086d0:	000bc763          	bltz	s7,1c0086de <pos_libc_prf+0x184>
1c0086d4:	057d4d33          	p.min	s10,s10,s7
1c0086d8:	895a                	mv	s2,s6
1c0086da:	ec0d01e3          	beqz	s10,1c00859c <pos_libc_prf+0x42>
1c0086de:	866a                	mv	a2,s10
1c0086e0:	1048                	addi	a0,sp,36
1c0086e2:	31e5                	jal	1c0083ca <memcpy>
1c0086e4:	895a                	mv	s2,s6
1c0086e6:	4e8d4663          	blt	s10,s0,1c008bd2 <pos_libc_prf+0x678>
1c0086ea:	846a                	mv	s0,s10
1c0086ec:	02410b13          	addi	s6,sp,36
1c0086f0:	a029                	j	1c0086fa <pos_libc_prf+0x1a0>
1c0086f2:	0b05                	addi	s6,s6,1
1c0086f4:	0a85                	addi	s5,s5,1
1c0086f6:	ea0403e3          	beqz	s0,1c00859c <pos_libc_prf+0x42>
1c0086fa:	000b4503          	lbu	a0,0(s6)
1c0086fe:	85d2                	mv	a1,s4
1c008700:	147d                	addi	s0,s0,-1
1c008702:	9482                	jalr	s1
1c008704:	fff537e3          	p.bneimm	a0,-1,1c0086f2 <pos_libc_prf+0x198>
1c008708:	5afd                	li	s5,-1
1c00870a:	bd55                	j	1c0085be <pos_libc_prf+0x64>
1c00870c:	ea0c09e3          	beqz	s8,1c0085be <pos_libc_prf+0x64>
1c008710:	02000313          	li	t1,32
1c008714:	f26c14e3          	bne	s8,t1,1c00863c <pos_libc_prf+0xe2>
1c008718:	4685                	li	a3,1
1c00871a:	c636                	sw	a3,12(sp)
1c00871c:	8dea                	mv	s11,s10
1c00871e:	b705                	j	1c00863e <pos_libc_prf+0xe4>
1c008720:	4605                	li	a2,1
1c008722:	c432                	sw	a2,8(sp)
1c008724:	8dea                	mv	s11,s10
1c008726:	bf21                	j	1c00863e <pos_libc_prf+0xe4>
1c008728:	03000793          	li	a5,48
1c00872c:	c23e                	sw	a5,4(sp)
1c00872e:	8dea                	mv	s11,s10
1c008730:	b739                	j	1c00863e <pos_libc_prf+0xe4>
1c008732:	4805                	li	a6,1
1c008734:	c842                	sw	a6,16(sp)
1c008736:	8dea                	mv	s11,s10
1c008738:	b719                	j	1c00863e <pos_libc_prf+0xe4>
1c00873a:	4705                	li	a4,1
1c00873c:	c03a                	sw	a4,0(sp)
1c00873e:	8dea                	mv	s11,s10
1c008740:	bdfd                	j	1c00863e <pos_libc_prf+0xe4>
1c008742:	8dea                	mv	s11,s10
1c008744:	0d05                	addi	s10,s10,1
1c008746:	00241793          	slli	a5,s0,0x2
1c00874a:	97a2                	add	a5,a5,s0
1c00874c:	0786                	slli	a5,a5,0x1
1c00874e:	97e2                	add	a5,a5,s8
1c008750:	000d4c03          	lbu	s8,0(s10)
1c008754:	fd078413          	addi	s0,a5,-48
1c008758:	fd0c0793          	addi	a5,s8,-48
1c00875c:	fef5f3e3          	bleu	a5,a1,1c008742 <pos_libc_prf+0x1e8>
1c008760:	002d8b13          	addi	s6,s11,2
1c008764:	a811                	j	1c008778 <pos_libc_prf+0x21e>
1c008766:	00092403          	lw	s0,0(s2)
1c00876a:	0911                	addi	s2,s2,4
1c00876c:	0e044263          	bltz	s0,1c008850 <pos_libc_prf+0x2f6>
1c008770:	000d4c03          	lbu	s8,0(s10)
1c008774:	002d8b13          	addi	s6,s11,2
1c008778:	0c800713          	li	a4,200
1c00877c:	04e45433          	p.minu	s0,s0,a4
1c008780:	b5dd                	j	1c008666 <pos_libc_prf+0x10c>
1c008782:	06500713          	li	a4,101
1c008786:	0cec5a63          	ble	a4,s8,1c00885a <pos_libc_prf+0x300>
1c00878a:	04700713          	li	a4,71
1c00878e:	3d874e63          	blt	a4,s8,1c008b6a <pos_libc_prf+0x610>
1c008792:	04500713          	li	a4,69
1c008796:	0cec5263          	ble	a4,s8,1c00885a <pos_libc_prf+0x300>
1c00879a:	e20c02e3          	beqz	s8,1c0085be <pos_libc_prf+0x64>
1c00879e:	02500713          	li	a4,37
1c0087a2:	52ec1b63          	bne	s8,a4,1c008cd8 <pos_libc_prf+0x77e>
1c0087a6:	85d2                	mv	a1,s4
1c0087a8:	02500513          	li	a0,37
1c0087ac:	9482                	jalr	s1
1c0087ae:	f5f52de3          	p.beqimm	a0,-1,1c008708 <pos_libc_prf+0x1ae>
1c0087b2:	0a85                	addi	s5,s5,1
1c0087b4:	b509                	j	1c0085b6 <pos_libc_prf+0x5c>
1c0087b6:	000b4783          	lbu	a5,0(s6)
1c0087ba:	02a00713          	li	a4,42
1c0087be:	001b0693          	addi	a3,s6,1
1c0087c2:	04e79c63          	bne	a5,a4,1c00881a <pos_libc_prf+0x2c0>
1c0087c6:	00092b83          	lw	s7,0(s2)
1c0087ca:	001b4c03          	lbu	s8,1(s6)
1c0087ce:	0911                	addi	s2,s2,4
1c0087d0:	0b09                	addi	s6,s6,2
1c0087d2:	0c800713          	li	a4,200
1c0087d6:	e9775de3          	ble	s7,a4,1c008670 <pos_libc_prf+0x116>
1c0087da:	5bfd                	li	s7,-1
1c0087dc:	bd51                	j	1c008670 <pos_libc_prf+0x116>
1c0087de:	06e00713          	li	a4,110
1c0087e2:	4aec0b63          	beq	s8,a4,1c008c98 <pos_libc_prf+0x73e>
1c0087e6:	43875263          	ble	s8,a4,1c008c0a <pos_libc_prf+0x6b0>
1c0087ea:	4802                	lw	a6,0(sp)
1c0087ec:	00490b13          	addi	s6,s2,4
1c0087f0:	00092583          	lw	a1,0(s2)
1c0087f4:	0e0802e3          	beqz	a6,1c0090d8 <pos_libc_prf+0xb7e>
1c0087f8:	03000793          	li	a5,48
1c0087fc:	02f10223          	sb	a5,36(sp)
1c008800:	0a0592e3          	bnez	a1,1c0090a4 <pos_libc_prf+0xb4a>
1c008804:	020102a3          	sb	zero,37(sp)
1c008808:	895a                	mv	s2,s6
1c00880a:	8d42                	mv	s10,a6
1c00880c:	edfbade3          	p.beqimm	s7,-1,1c0086e6 <pos_libc_prf+0x18c>
1c008810:	02000813          	li	a6,32
1c008814:	4d02                	lw	s10,0(sp)
1c008816:	c242                	sw	a6,4(sp)
1c008818:	b5f9                	j	1c0086e6 <pos_libc_prf+0x18c>
1c00881a:	fd078593          	addi	a1,a5,-48
1c00881e:	4725                	li	a4,9
1c008820:	8c3e                	mv	s8,a5
1c008822:	4b81                	li	s7,0
1c008824:	4625                	li	a2,9
1c008826:	00b77663          	bleu	a1,a4,1c008832 <pos_libc_prf+0x2d8>
1c00882a:	0230006f          	j	1c00904c <pos_libc_prf+0xaf2>
1c00882e:	8b36                	mv	s6,a3
1c008830:	0685                	addi	a3,a3,1
1c008832:	002b9793          	slli	a5,s7,0x2
1c008836:	97de                	add	a5,a5,s7
1c008838:	0786                	slli	a5,a5,0x1
1c00883a:	97e2                	add	a5,a5,s8
1c00883c:	0006cc03          	lbu	s8,0(a3)
1c008840:	fd078b93          	addi	s7,a5,-48
1c008844:	fd0c0793          	addi	a5,s8,-48
1c008848:	fef673e3          	bleu	a5,a2,1c00882e <pos_libc_prf+0x2d4>
1c00884c:	0b09                	addi	s6,s6,2
1c00884e:	b751                	j	1c0087d2 <pos_libc_prf+0x278>
1c008850:	4705                	li	a4,1
1c008852:	40800433          	neg	s0,s0
1c008856:	c83a                	sw	a4,16(sp)
1c008858:	bf21                	j	1c008770 <pos_libc_prf+0x216>
1c00885a:	091d                	addi	s2,s2,7
1c00885c:	c4093933          	p.bclr	s2,s2,2,0
1c008860:	00092603          	lw	a2,0(s2)
1c008864:	00492583          	lw	a1,4(s2)
1c008868:	7ff00693          	li	a3,2047
1c00886c:	01565513          	srli	a0,a2,0x15
1c008870:	0145d313          	srli	t1,a1,0x14
1c008874:	00b59713          	slli	a4,a1,0xb
1c008878:	8f49                	or	a4,a4,a0
1c00887a:	e8b33333          	p.bclr	t1,t1,20,11
1c00887e:	0921                	addi	s2,s2,8
1c008880:	062e                	slli	a2,a2,0xb
1c008882:	c1f73733          	p.bclr	a4,a4,0,31
1c008886:	04d30be3          	beq	t1,a3,1c0090dc <pos_libc_prf+0xb82>
1c00888a:	04600693          	li	a3,70
1c00888e:	00dc1463          	bne	s8,a3,1c008896 <pos_libc_prf+0x33c>
1c008892:	06600c13          	li	s8,102
1c008896:	00c366b3          	or	a3,t1,a2
1c00889a:	8ed9                	or	a3,a3,a4
1c00889c:	7e068463          	beqz	a3,1c009084 <pos_libc_prf+0xb2a>
1c0088a0:	c0230313          	addi	t1,t1,-1022
1c0088a4:	c1f74733          	p.bset	a4,a4,0,31
1c0088a8:	2005cae3          	bltz	a1,1c0092bc <pos_libc_prf+0xd62>
1c0088ac:	47a2                	lw	a5,8(sp)
1c0088ae:	1e0789e3          	beqz	a5,1c0092a0 <pos_libc_prf+0xd46>
1c0088b2:	02b00693          	li	a3,43
1c0088b6:	02d10223          	sb	a3,36(sp)
1c0088ba:	02510b13          	addi	s6,sp,37
1c0088be:	02410c93          	addi	s9,sp,36
1c0088c2:	56f9                	li	a3,-2
1c0088c4:	4381                	li	t2,0
1c0088c6:	06d35763          	ble	a3,t1,1c008934 <pos_libc_prf+0x3da>
1c0088ca:	33333537          	lui	a0,0x33333
1c0088ce:	80000837          	lui	a6,0x80000
1c0088d2:	33250513          	addi	a0,a0,818 # 33333332 <ne16_weights+0x17313332>
1c0088d6:	fff84813          	not	a6,a6
1c0088da:	58f9                	li	a7,-2
1c0088dc:	a011                	j	1c0088e0 <pos_libc_prf+0x386>
1c0088de:	833e                	mv	t1,a5
1c0088e0:	01f71593          	slli	a1,a4,0x1f
1c0088e4:	00165693          	srli	a3,a2,0x1
1c0088e8:	fc1637b3          	p.bclr	a5,a2,30,1
1c0088ec:	8ecd                	or	a3,a3,a1
1c0088ee:	00d78633          	add	a2,a5,a3
1c0088f2:	00f637b3          	sltu	a5,a2,a5
1c0088f6:	8305                	srli	a4,a4,0x1
1c0088f8:	973e                	add	a4,a4,a5
1c0088fa:	00130793          	addi	a5,t1,1
1c0088fe:	fee560e3          	bltu	a0,a4,1c0088de <pos_libc_prf+0x384>
1c008902:	00261593          	slli	a1,a2,0x2
1c008906:	01e65e13          	srli	t3,a2,0x1e
1c00890a:	00271693          	slli	a3,a4,0x2
1c00890e:	962e                	add	a2,a2,a1
1c008910:	00de66b3          	or	a3,t3,a3
1c008914:	9736                	add	a4,a4,a3
1c008916:	00b635b3          	sltu	a1,a2,a1
1c00891a:	972e                	add	a4,a4,a1
1c00891c:	01f65693          	srli	a3,a2,0x1f
1c008920:	0309                	addi	t1,t1,2
1c008922:	13fd                	addi	t2,t2,-1
1c008924:	01071663          	bne	a4,a6,1c008930 <pos_libc_prf+0x3d6>
1c008928:	0606                	slli	a2,a2,0x1
1c00892a:	fc16c733          	p.bset	a4,a3,30,1
1c00892e:	833e                	mv	t1,a5
1c008930:	fb1348e3          	blt	t1,a7,1c0088e0 <pos_libc_prf+0x386>
1c008934:	0e605763          	blez	t1,1c008a22 <pos_libc_prf+0x4c8>
1c008938:	80000f37          	lui	t5,0x80000
1c00893c:	4d15                	li	s10,5
1c00893e:	ffff4f13          	not	t5,t5
1c008942:	00260513          	addi	a0,a2,2 # 4002 <__cluster_text_size+0x4002>
1c008946:	00c536b3          	sltu	a3,a0,a2
1c00894a:	00e688b3          	add	a7,a3,a4
1c00894e:	02000793          	li	a5,32
1c008952:	00189593          	slli	a1,a7,0x1
1c008956:	fff7ce93          	not	t4,a5
1c00895a:	00f556b3          	srl	a3,a0,a5
1c00895e:	01d595b3          	sll	a1,a1,t4
1c008962:	0207fe13          	andi	t3,a5,32
1c008966:	4601                	li	a2,0
1c008968:	4701                	li	a4,0
1c00896a:	4801                	li	a6,0
1c00896c:	8ecd                	or	a3,a3,a1
1c00896e:	000e0463          	beqz	t3,1c008976 <pos_libc_prf+0x41c>
1c008972:	00f8d6b3          	srl	a3,a7,a5
1c008976:	fff7ce93          	not	t4,a5
1c00897a:	03a6d6b3          	divu	a3,a3,s10
1c00897e:	060e0d63          	beqz	t3,1c0089f8 <pos_libc_prf+0x49e>
1c008982:	4581                	li	a1,0
1c008984:	00f69eb3          	sll	t4,a3,a5
1c008988:	00259693          	slli	a3,a1,0x2
1c00898c:	01e5df93          	srli	t6,a1,0x1e
1c008990:	002e9793          	slli	a5,t4,0x2
1c008994:	00b68e33          	add	t3,a3,a1
1c008998:	00ffe7b3          	or	a5,t6,a5
1c00899c:	95b2                	add	a1,a1,a2
1c00899e:	97f6                	add	a5,a5,t4
1c0089a0:	00de36b3          	sltu	a3,t3,a3
1c0089a4:	00c5bfb3          	sltu	t6,a1,a2
1c0089a8:	1c001637          	lui	a2,0x1c001
1c0089ac:	96be                	add	a3,a3,a5
1c0089ae:	8f060613          	addi	a2,a2,-1808 # 1c0008f0 <shifts.1764>
1c0089b2:	01d707b3          	add	a5,a4,t4
1c0089b6:	41c50e33          	sub	t3,a0,t3
1c0089ba:	0805                	addi	a6,a6,1
1c0089bc:	010602b3          	add	t0,a2,a6
1c0089c0:	01c53eb3          	sltu	t4,a0,t3
1c0089c4:	40d886b3          	sub	a3,a7,a3
1c0089c8:	862e                	mv	a2,a1
1c0089ca:	00ff8733          	add	a4,t6,a5
1c0089ce:	02382c63          	p.beqimm	a6,3,1c008a06 <pos_libc_prf+0x4ac>
1c0089d2:	0002c783          	lbu	a5,0(t0)
1c0089d6:	41d688b3          	sub	a7,a3,t4
1c0089da:	8572                	mv	a0,t3
1c0089dc:	00189593          	slli	a1,a7,0x1
1c0089e0:	fff7ce93          	not	t4,a5
1c0089e4:	00f556b3          	srl	a3,a0,a5
1c0089e8:	01d595b3          	sll	a1,a1,t4
1c0089ec:	0207fe13          	andi	t3,a5,32
1c0089f0:	8ecd                	or	a3,a3,a1
1c0089f2:	f80e02e3          	beqz	t3,1c008976 <pos_libc_prf+0x41c>
1c0089f6:	bfb5                	j	1c008972 <pos_libc_prf+0x418>
1c0089f8:	0016de13          	srli	t3,a3,0x1
1c0089fc:	00f695b3          	sll	a1,a3,a5
1c008a00:	01de5eb3          	srl	t4,t3,t4
1c008a04:	b751                	j	1c008988 <pos_libc_prf+0x42e>
1c008a06:	137d                	addi	t1,t1,-1
1c008a08:	0385                	addi	t2,t2,1
1c008a0a:	00ef6a63          	bltu	t5,a4,1c008a1e <pos_libc_prf+0x4c4>
1c008a0e:	01f65793          	srli	a5,a2,0x1f
1c008a12:	0706                	slli	a4,a4,0x1
1c008a14:	8f5d                	or	a4,a4,a5
1c008a16:	0606                	slli	a2,a2,0x1
1c008a18:	137d                	addi	t1,t1,-1
1c008a1a:	feef7ae3          	bleu	a4,t5,1c008a0e <pos_libc_prf+0x4b4>
1c008a1e:	f26042e3          	bgtz	t1,1c008942 <pos_libc_prf+0x3e8>
1c008a22:	4691                	li	a3,4
1c008a24:	40668333          	sub	t1,a3,t1
1c008a28:	011340fb          	lp.setup	x1,t1,1c008a4a <pos_libc_prf+0x4f0>
1c008a2c:	01f71693          	slli	a3,a4,0x1f
1c008a30:	00165793          	srli	a5,a2,0x1
1c008a34:	8fd5                	or	a5,a5,a3
1c008a36:	fc163633          	p.bclr	a2,a2,30,1
1c008a3a:	00f60d33          	add	s10,a2,a5
1c008a3e:	8305                	srli	a4,a4,0x1
1c008a40:	00cd3633          	sltu	a2,s10,a2
1c008a44:	00e607b3          	add	a5,a2,a4
1c008a48:	873e                	mv	a4,a5
1c008a4a:	866a                	mv	a2,s10
1c008a4c:	ce3e                	sw	a5,28(sp)
1c008a4e:	06700713          	li	a4,103
1c008a52:	6c0bc263          	bltz	s7,1c009116 <pos_libc_prf+0xbbc>
1c008a56:	5eec0e63          	beq	s8,a4,1c009052 <pos_libc_prf+0xaf8>
1c008a5a:	04700713          	li	a4,71
1c008a5e:	5eec0a63          	beq	s8,a4,1c009052 <pos_libc_prf+0xaf8>
1c008a62:	06600713          	li	a4,102
1c008a66:	28ec0c63          	beq	s8,a4,1c008cfe <pos_libc_prf+0x7a4>
1c008a6a:	001b8293          	addi	t0,s7,1
1c008a6e:	4341                	li	t1,16
1c008a70:	0462c2b3          	p.min	t0,t0,t1
1c008a74:	12fd                	addi	t0,t0,-1
1c008a76:	cc02                	sw	zero,24(sp)
1c008a78:	001b0713          	addi	a4,s6,1
1c008a7c:	ca3a                	sw	a4,20(sp)
1c008a7e:	853a                	mv	a0,a4
1c008a80:	4701                	li	a4,0
1c008a82:	080006b7          	lui	a3,0x8000
1c008a86:	4795                	li	a5,5
1c008a88:	00270e13          	addi	t3,a4,2
1c008a8c:	00ee3733          	sltu	a4,t3,a4
1c008a90:	02000893          	li	a7,32
1c008a94:	9736                	add	a4,a4,a3
1c008a96:	00171593          	slli	a1,a4,0x1
1c008a9a:	fff8cf13          	not	t5,a7
1c008a9e:	011e56b3          	srl	a3,t3,a7
1c008aa2:	01e595b3          	sll	a1,a1,t5
1c008aa6:	0208f813          	andi	a6,a7,32
1c008aaa:	4301                	li	t1,0
1c008aac:	4601                	li	a2,0
1c008aae:	4e81                	li	t4,0
1c008ab0:	8ecd                	or	a3,a3,a1
1c008ab2:	00080463          	beqz	a6,1c008aba <pos_libc_prf+0x560>
1c008ab6:	011756b3          	srl	a3,a4,a7
1c008aba:	fff8cf13          	not	t5,a7
1c008abe:	02f6d6b3          	divu	a3,a3,a5
1c008ac2:	06080a63          	beqz	a6,1c008b36 <pos_libc_prf+0x5dc>
1c008ac6:	4581                	li	a1,0
1c008ac8:	011698b3          	sll	a7,a3,a7
1c008acc:	00259f13          	slli	t5,a1,0x2
1c008ad0:	01e5df93          	srli	t6,a1,0x1e
1c008ad4:	00289693          	slli	a3,a7,0x2
1c008ad8:	00bf0833          	add	a6,t5,a1
1c008adc:	00dfe6b3          	or	a3,t6,a3
1c008ae0:	01e83f33          	sltu	t5,a6,t5
1c008ae4:	959a                	add	a1,a1,t1
1c008ae6:	96c6                	add	a3,a3,a7
1c008ae8:	96fa                	add	a3,a3,t5
1c008aea:	0065bf33          	sltu	t5,a1,t1
1c008aee:	1c001337          	lui	t1,0x1c001
1c008af2:	9646                	add	a2,a2,a7
1c008af4:	8f030313          	addi	t1,t1,-1808 # 1c0008f0 <shifts.1764>
1c008af8:	410e0833          	sub	a6,t3,a6
1c008afc:	0e85                	addi	t4,t4,1
1c008afe:	01d30fb3          	add	t6,t1,t4
1c008b02:	010e38b3          	sltu	a7,t3,a6
1c008b06:	8f15                	sub	a4,a4,a3
1c008b08:	832e                	mv	t1,a1
1c008b0a:	967a                	add	a2,a2,t5
1c008b0c:	023eac63          	p.beqimm	t4,3,1c008b44 <pos_libc_prf+0x5ea>
1c008b10:	41170733          	sub	a4,a4,a7
1c008b14:	000fc883          	lbu	a7,0(t6)
1c008b18:	8e42                	mv	t3,a6
1c008b1a:	00171593          	slli	a1,a4,0x1
1c008b1e:	fff8cf13          	not	t5,a7
1c008b22:	011e56b3          	srl	a3,t3,a7
1c008b26:	01e595b3          	sll	a1,a1,t5
1c008b2a:	0208f813          	andi	a6,a7,32
1c008b2e:	8ecd                	or	a3,a3,a1
1c008b30:	f80805e3          	beqz	a6,1c008aba <pos_libc_prf+0x560>
1c008b34:	b749                	j	1c008ab6 <pos_libc_prf+0x55c>
1c008b36:	0016d813          	srli	a6,a3,0x1
1c008b3a:	011695b3          	sll	a1,a3,a7
1c008b3e:	01e858b3          	srl	a7,a6,t5
1c008b42:	b769                	j	1c008acc <pos_libc_prf+0x572>
1c008b44:	01f61693          	slli	a3,a2,0x1f
1c008b48:	0015d713          	srli	a4,a1,0x1
1c008b4c:	fc15b333          	p.bclr	t1,a1,30,1
1c008b50:	8f55                	or	a4,a4,a3
1c008b52:	971a                	add	a4,a4,t1
1c008b54:	00165693          	srli	a3,a2,0x1
1c008b58:	00673333          	sltu	t1,a4,t1
1c008b5c:	969a                	add	a3,a3,t1
1c008b5e:	fff28613          	addi	a2,t0,-1
1c008b62:	1c028263          	beqz	t0,1c008d26 <pos_libc_prf+0x7cc>
1c008b66:	82b2                	mv	t0,a2
1c008b68:	b705                	j	1c008a88 <pos_libc_prf+0x52e>
1c008b6a:	06300713          	li	a4,99
1c008b6e:	0eec0963          	beq	s8,a4,1c008c60 <pos_libc_prf+0x706>
1c008b72:	0b874063          	blt	a4,s8,1c008c12 <pos_libc_prf+0x6b8>
1c008b76:	05800713          	li	a4,88
1c008b7a:	14ec1f63          	bne	s8,a4,1c008cd8 <pos_libc_prf+0x77e>
1c008b7e:	4702                	lw	a4,0(sp)
1c008b80:	00490b13          	addi	s6,s2,4
1c008b84:	00092583          	lw	a1,0(s2)
1c008b88:	44070063          	beqz	a4,1c008fc8 <pos_libc_prf+0xa6e>
1c008b8c:	7761                	lui	a4,0xffff8
1c008b8e:	83074713          	xori	a4,a4,-2000
1c008b92:	86de                	mv	a3,s7
1c008b94:	4641                	li	a2,16
1c008b96:	02610513          	addi	a0,sp,38
1c008b9a:	02e11223          	sh	a4,36(sp)
1c008b9e:	32a1                	jal	1c0084e6 <pos_libc_to_x>
1c008ba0:	05800713          	li	a4,88
1c008ba4:	8d2a                	mv	s10,a0
1c008ba6:	78ec0e63          	beq	s8,a4,1c009342 <pos_libc_prf+0xde8>
1c008baa:	4309                	li	t1,2
1c008bac:	00250d13          	addi	s10,a0,2
1c008bb0:	c01a                	sw	t1,0(sp)
1c008bb2:	0c800793          	li	a5,200
1c008bb6:	49fba763          	p.beqimm	s7,-1,1c009044 <pos_libc_prf+0xaea>
1c008bba:	b5a7c7e3          	blt	a5,s10,1c008708 <pos_libc_prf+0x1ae>
1c008bbe:	02000313          	li	t1,32
1c008bc2:	895a                	mv	s2,s6
1c008bc4:	c21a                	sw	t1,4(sp)
1c008bc6:	008d4763          	blt	s10,s0,1c008bd4 <pos_libc_prf+0x67a>
1c008bca:	846a                	mv	s0,s10
1c008bcc:	b20410e3          	bnez	s0,1c0086ec <pos_libc_prf+0x192>
1c008bd0:	b2f1                	j	1c00859c <pos_libc_prf+0x42>
1c008bd2:	c002                	sw	zero,0(sp)
1c008bd4:	4342                	lw	t1,16(sp)
1c008bd6:	38030463          	beqz	t1,1c008f5e <pos_libc_prf+0xa04>
1c008bda:	001d0713          	addi	a4,s10,1
1c008bde:	02000693          	li	a3,32
1c008be2:	41a407b3          	sub	a5,s0,s10
1c008be6:	76e44563          	blt	s0,a4,1c009350 <pos_libc_prf+0xdf6>
1c008bea:	80000737          	lui	a4,0x80000
1c008bee:	76e40163          	beq	s0,a4,1c009350 <pos_libc_prf+0xdf6>
1c008bf2:	0087c0fb          	lp.setup	x1,a5,1c008c02 <pos_libc_prf+0x6a8>
1c008bf6:	0f010813          	addi	a6,sp,240
1c008bfa:	01a80733          	add	a4,a6,s10
1c008bfe:	f2d70a23          	sb	a3,-204(a4) # 7fffff34 <pulp__FC+0x7fffff35>
1c008c02:	0d05                	addi	s10,s10,1
1c008c04:	ae0414e3          	bnez	s0,1c0086ec <pos_libc_prf+0x192>
1c008c08:	ba51                	j	1c00859c <pos_libc_prf+0x42>
1c008c0a:	06900713          	li	a4,105
1c008c0e:	0cec1563          	bne	s8,a4,1c008cd8 <pos_libc_prf+0x77e>
1c008c12:	00092583          	lw	a1,0(s2)
1c008c16:	02410c93          	addi	s9,sp,36
1c008c1a:	0911                	addi	s2,s2,4
1c008c1c:	3e05cc63          	bltz	a1,1c009014 <pos_libc_prf+0xaba>
1c008c20:	4322                	lw	t1,8(sp)
1c008c22:	4a031663          	bnez	t1,1c0090ce <pos_libc_prf+0xb74>
1c008c26:	4632                	lw	a2,12(sp)
1c008c28:	62060063          	beqz	a2,1c009248 <pos_libc_prf+0xcee>
1c008c2c:	02000793          	li	a5,32
1c008c30:	02f10223          	sb	a5,36(sp)
1c008c34:	86de                	mv	a3,s7
1c008c36:	4629                	li	a2,10
1c008c38:	02510513          	addi	a0,sp,37
1c008c3c:	306d                	jal	1c0084e6 <pos_libc_to_x>
1c008c3e:	02510313          	addi	t1,sp,37
1c008c42:	951a                	add	a0,a0,t1
1c008c44:	4705                	li	a4,1
1c008c46:	41950d33          	sub	s10,a0,s9
1c008c4a:	c03a                	sw	a4,0(sp)
1c008c4c:	0bfba363          	p.beqimm	s7,-1,1c008cf2 <pos_libc_prf+0x798>
1c008c50:	0c800793          	li	a5,200
1c008c54:	aba7cae3          	blt	a5,s10,1c008708 <pos_libc_prf+0x1ae>
1c008c58:	02000713          	li	a4,32
1c008c5c:	c23a                	sw	a4,4(sp)
1c008c5e:	b7a5                	j	1c008bc6 <pos_libc_prf+0x66c>
1c008c60:	00092783          	lw	a5,0(s2)
1c008c64:	020102a3          	sb	zero,37(sp)
1c008c68:	0911                	addi	s2,s2,4
1c008c6a:	02f10223          	sb	a5,36(sp)
1c008c6e:	4d05                	li	s10,1
1c008c70:	bc9d                	j	1c0086e6 <pos_libc_prf+0x18c>
1c008c72:	00092583          	lw	a1,0(s2)
1c008c76:	86de                	mv	a3,s7
1c008c78:	4629                	li	a2,10
1c008c7a:	1048                	addi	a0,sp,36
1c008c7c:	30ad                	jal	1c0084e6 <pos_libc_to_x>
1c008c7e:	8d2a                	mv	s10,a0
1c008c80:	0911                	addi	s2,s2,4
1c008c82:	0c800793          	li	a5,200
1c008c86:	07fba263          	p.beqimm	s7,-1,1c008cea <pos_libc_prf+0x790>
1c008c8a:	a6a7cfe3          	blt	a5,a0,1c008708 <pos_libc_prf+0x1ae>
1c008c8e:	02000713          	li	a4,32
1c008c92:	c002                	sw	zero,0(sp)
1c008c94:	c23a                	sw	a4,4(sp)
1c008c96:	bf05                	j	1c008bc6 <pos_libc_prf+0x66c>
1c008c98:	00092783          	lw	a5,0(s2)
1c008c9c:	0911                	addi	s2,s2,4
1c008c9e:	0157a023          	sw	s5,0(a5)
1c008ca2:	b8ed                	j	1c00859c <pos_libc_prf+0x42>
1c008ca4:	00092583          	lw	a1,0(s2)
1c008ca8:	77e1                	lui	a5,0xffff8
1c008caa:	8307c793          	xori	a5,a5,-2000
1c008cae:	46a1                	li	a3,8
1c008cb0:	4641                	li	a2,16
1c008cb2:	02610513          	addi	a0,sp,38
1c008cb6:	02f11223          	sh	a5,36(sp)
1c008cba:	3035                	jal	1c0084e6 <pos_libc_to_x>
1c008cbc:	0911                	addi	s2,s2,4
1c008cbe:	00250d13          	addi	s10,a0,2
1c008cc2:	0c800793          	li	a5,200
1c008cc6:	03fba263          	p.beqimm	s7,-1,1c008cea <pos_libc_prf+0x790>
1c008cca:	a3a7cfe3          	blt	a5,s10,1c008708 <pos_libc_prf+0x1ae>
1c008cce:	02000793          	li	a5,32
1c008cd2:	c002                	sw	zero,0(sp)
1c008cd4:	c23e                	sw	a5,4(sp)
1c008cd6:	bdc5                	j	1c008bc6 <pos_libc_prf+0x66c>
1c008cd8:	0c800713          	li	a4,200
1c008cdc:	8d8750e3          	ble	s8,a4,1c00859c <pos_libc_prf+0x42>
1c008ce0:	5afd                	li	s5,-1
1c008ce2:	b8f1                	j	1c0085be <pos_libc_prf+0x64>
1c008ce4:	9e0bd8e3          	bgez	s7,1c0086d4 <pos_libc_prf+0x17a>
1c008ce8:	bac5                	j	1c0086d8 <pos_libc_prf+0x17e>
1c008cea:	a1a7cfe3          	blt	a5,s10,1c008708 <pos_libc_prf+0x1ae>
1c008cee:	c002                	sw	zero,0(sp)
1c008cf0:	bdd9                	j	1c008bc6 <pos_libc_prf+0x66c>
1c008cf2:	0c800793          	li	a5,200
1c008cf6:	eda7d8e3          	ble	s10,a5,1c008bc6 <pos_libc_prf+0x66c>
1c008cfa:	5afd                	li	s5,-1
1c008cfc:	b0c9                	j	1c0085be <pos_libc_prf+0x64>
1c008cfe:	cc02                	sw	zero,24(sp)
1c008d00:	001b0593          	addi	a1,s6,1
1c008d04:	ca2e                	sw	a1,20(sp)
1c008d06:	017387b3          	add	a5,t2,s7
1c008d0a:	852e                	mv	a0,a1
1c008d0c:	6007c263          	bltz	a5,1c009310 <pos_libc_prf+0xdb6>
1c008d10:	4641                	li	a2,16
1c008d12:	04c7c2b3          	p.min	t0,a5,a2
1c008d16:	12fd                	addi	t0,t0,-1
1c008d18:	06600c13          	li	s8,102
1c008d1c:	d60792e3          	bnez	a5,1c008a80 <pos_libc_prf+0x526>
1c008d20:	4701                	li	a4,0
1c008d22:	080006b7          	lui	a3,0x8000
1c008d26:	45f2                	lw	a1,28(sp)
1c008d28:	976a                	add	a4,a4,s10
1c008d2a:	01a73f33          	sltu	t5,a4,s10
1c008d2e:	96ae                	add	a3,a3,a1
1c008d30:	96fa                	add	a3,a3,t5
1c008d32:	f606b633          	p.bclr	a2,a3,27,0
1c008d36:	8d3a                	mv	s10,a4
1c008d38:	ca71                	beqz	a2,1c008e0c <pos_libc_prf+0x8b2>
1c008d3a:	002d0e93          	addi	t4,s10,2
1c008d3e:	01aebd33          	sltu	s10,t4,s10
1c008d42:	00dd0f33          	add	t5,s10,a3
1c008d46:	02000813          	li	a6,32
1c008d4a:	001f1793          	slli	a5,t5,0x1
1c008d4e:	fff84693          	not	a3,a6
1c008d52:	010ed733          	srl	a4,t4,a6
1c008d56:	00d797b3          	sll	a5,a5,a3
1c008d5a:	02087613          	andi	a2,a6,32
1c008d5e:	4e01                	li	t3,0
1c008d60:	4281                	li	t0,0
1c008d62:	4f81                	li	t6,0
1c008d64:	4d15                	li	s10,5
1c008d66:	8f5d                	or	a4,a4,a5
1c008d68:	c219                	beqz	a2,1c008d6e <pos_libc_prf+0x814>
1c008d6a:	010f5733          	srl	a4,t5,a6
1c008d6e:	fff84793          	not	a5,a6
1c008d72:	03a75733          	divu	a4,a4,s10
1c008d76:	24060263          	beqz	a2,1c008fba <pos_libc_prf+0xa60>
1c008d7a:	4681                	li	a3,0
1c008d7c:	01071733          	sll	a4,a4,a6
1c008d80:	00269793          	slli	a5,a3,0x2
1c008d84:	01e6d813          	srli	a6,a3,0x1e
1c008d88:	00271593          	slli	a1,a4,0x2
1c008d8c:	00d78633          	add	a2,a5,a3
1c008d90:	00b865b3          	or	a1,a6,a1
1c008d94:	95ba                	add	a1,a1,a4
1c008d96:	00f637b3          	sltu	a5,a2,a5
1c008d9a:	96f2                	add	a3,a3,t3
1c008d9c:	1c001337          	lui	t1,0x1c001
1c008da0:	97ae                	add	a5,a5,a1
1c008da2:	01c6b833          	sltu	a6,a3,t3
1c008da6:	40ce8633          	sub	a2,t4,a2
1c008daa:	9716                	add	a4,a4,t0
1c008dac:	0f85                	addi	t6,t6,1
1c008dae:	8f030313          	addi	t1,t1,-1808 # 1c0008f0 <shifts.1764>
1c008db2:	00ceb8b3          	sltu	a7,t4,a2
1c008db6:	40ff07b3          	sub	a5,t5,a5
1c008dba:	01f305b3          	add	a1,t1,t6
1c008dbe:	8e36                	mv	t3,a3
1c008dc0:	00e802b3          	add	t0,a6,a4
1c008dc4:	023fa463          	p.beqimm	t6,3,1c008dec <pos_libc_prf+0x892>
1c008dc8:	0005c803          	lbu	a6,0(a1)
1c008dcc:	41178f33          	sub	t5,a5,a7
1c008dd0:	8eb2                	mv	t4,a2
1c008dd2:	001f1793          	slli	a5,t5,0x1
1c008dd6:	fff84693          	not	a3,a6
1c008dda:	010ed733          	srl	a4,t4,a6
1c008dde:	00d797b3          	sll	a5,a5,a3
1c008de2:	02087613          	andi	a2,a6,32
1c008de6:	8f5d                	or	a4,a4,a5
1c008de8:	d259                	beqz	a2,1c008d6e <pos_libc_prf+0x814>
1c008dea:	b741                	j	1c008d6a <pos_libc_prf+0x810>
1c008dec:	01f29693          	slli	a3,t0,0x1f
1c008df0:	001e5713          	srli	a4,t3,0x1
1c008df4:	8f55                	or	a4,a4,a3
1c008df6:	fc1e3e33          	p.bclr	t3,t3,30,1
1c008dfa:	00ee0d33          	add	s10,t3,a4
1c008dfe:	01cd3e33          	sltu	t3,s10,t3
1c008e02:	0012d713          	srli	a4,t0,0x1
1c008e06:	00ee06b3          	add	a3,t3,a4
1c008e0a:	0385                	addi	t2,t2,1
1c008e0c:	06600713          	li	a4,102
1c008e10:	34ec0563          	beq	s8,a4,1c00915a <pos_libc_prf+0xc00>
1c008e14:	002d1713          	slli	a4,s10,0x2
1c008e18:	01ed5613          	srli	a2,s10,0x1e
1c008e1c:	00269813          	slli	a6,a3,0x2
1c008e20:	9d3a                	add	s10,s10,a4
1c008e22:	01066833          	or	a6,a2,a6
1c008e26:	00ed35b3          	sltu	a1,s10,a4
1c008e2a:	96c2                	add	a3,a3,a6
1c008e2c:	95b6                	add	a1,a1,a3
1c008e2e:	01fd5713          	srli	a4,s10,0x1f
1c008e32:	0586                	slli	a1,a1,0x1
1c008e34:	8dd9                	or	a1,a1,a4
1c008e36:	01c5d713          	srli	a4,a1,0x1c
1c008e3a:	03070693          	addi	a3,a4,48
1c008e3e:	00e03733          	snez	a4,a4
1c008e42:	40e383b3          	sub	t2,t2,a4
1c008e46:	4702                	lw	a4,0(sp)
1c008e48:	10000337          	lui	t1,0x10000
1c008e4c:	137d                	addi	t1,t1,-1
1c008e4e:	00db0023          	sb	a3,0(s6)
1c008e52:	001d1613          	slli	a2,s10,0x1
1c008e56:	0065f5b3          	and	a1,a1,t1
1c008e5a:	2e070563          	beqz	a4,1c009144 <pos_libc_prf+0xbea>
1c008e5e:	02e00713          	li	a4,46
1c008e62:	00eb00a3          	sb	a4,1(s6)
1c008e66:	002b0813          	addi	a6,s6,2
1c008e6a:	fffb8893          	addi	a7,s7,-1
1c008e6e:	4e0b8b63          	beqz	s7,1c009364 <pos_libc_prf+0xe0a>
1c008e72:	4e3d                	li	t3,15
1c008e74:	a011                	j	1c008e78 <pos_libc_prf+0x91e>
1c008e76:	88be                	mv	a7,a5
1c008e78:	00261793          	slli	a5,a2,0x2
1c008e7c:	01e65693          	srli	a3,a2,0x1e
1c008e80:	00259713          	slli	a4,a1,0x2
1c008e84:	00c78333          	add	t1,a5,a2
1c008e88:	8f55                	or	a4,a4,a3
1c008e8a:	972e                	add	a4,a4,a1
1c008e8c:	00f337b3          	sltu	a5,t1,a5
1c008e90:	97ba                	add	a5,a5,a4
1c008e92:	0786                	slli	a5,a5,0x1
1c008e94:	01f35713          	srli	a4,t1,0x1f
1c008e98:	8fd9                	or	a5,a5,a4
1c008e9a:	01c7d693          	srli	a3,a5,0x1c
1c008e9e:	03000713          	li	a4,48
1c008ea2:	00180513          	addi	a0,a6,1 # 80000001 <pulp__FC+0x80000002>
1c008ea6:	01c05c63          	blez	t3,1c008ebe <pos_libc_prf+0x964>
1c008eaa:	00131613          	slli	a2,t1,0x1
1c008eae:	10000337          	lui	t1,0x10000
1c008eb2:	137d                	addi	t1,t1,-1
1c008eb4:	03068713          	addi	a4,a3,48 # 8000030 <__l1_heap_size+0x7fd2140>
1c008eb8:	1e7d                	addi	t3,t3,-1
1c008eba:	0067f5b3          	and	a1,a5,t1
1c008ebe:	00e80023          	sb	a4,0(a6)
1c008ec2:	fff88793          	addi	a5,a7,-1
1c008ec6:	882a                	mv	a6,a0
1c008ec8:	fb1047e3          	bgtz	a7,1c008e76 <pos_libc_prf+0x91c>
1c008ecc:	45e2                	lw	a1,24(sp)
1c008ece:	e9a5                	bnez	a1,1c008f3e <pos_libc_prf+0x9e4>
1c008ed0:	c05c3733          	p.bclr	a4,s8,0,5
1c008ed4:	04500693          	li	a3,69
1c008ed8:	02d71963          	bne	a4,a3,1c008f0a <pos_libc_prf+0x9b0>
1c008edc:	87e2                	mv	a5,s8
1c008ede:	00f50023          	sb	a5,0(a0)
1c008ee2:	3403cc63          	bltz	t2,1c00923a <pos_libc_prf+0xce0>
1c008ee6:	02b00793          	li	a5,43
1c008eea:	00f500a3          	sb	a5,1(a0)
1c008eee:	47a9                	li	a5,10
1c008ef0:	02f3c733          	div	a4,t2,a5
1c008ef4:	0511                	addi	a0,a0,4
1c008ef6:	02f3e7b3          	rem	a5,t2,a5
1c008efa:	03070713          	addi	a4,a4,48
1c008efe:	fee50f23          	sb	a4,-2(a0)
1c008f02:	03078793          	addi	a5,a5,48 # ffff8030 <pulp__FC+0xffff8031>
1c008f06:	fef50fa3          	sb	a5,-1(a0)
1c008f0a:	00050023          	sb	zero,0(a0)
1c008f0e:	41950d33          	sub	s10,a0,s9
1c008f12:	4722                	lw	a4,8(sp)
1c008f14:	47b2                	lw	a5,12(sp)
1c008f16:	8f5d                	or	a4,a4,a5
1c008f18:	c03a                	sw	a4,0(sp)
1c008f1a:	e719                	bnez	a4,1c008f28 <pos_libc_prf+0x9ce>
1c008f1c:	02414703          	lbu	a4,36(sp)
1c008f20:	02d00793          	li	a5,45
1c008f24:	dcf717e3          	bne	a4,a5,1c008cf2 <pos_libc_prf+0x798>
1c008f28:	0c800793          	li	a5,200
1c008f2c:	fda7ce63          	blt	a5,s10,1c008708 <pos_libc_prf+0x1ae>
1c008f30:	4305                	li	t1,1
1c008f32:	c01a                	sw	t1,0(sp)
1c008f34:	b949                	j	1c008bc6 <pos_libc_prf+0x66c>
1c008f36:	47e2                	lw	a5,24(sp)
1c008f38:	dbe9                	beqz	a5,1c008f0a <pos_libc_prf+0x9b0>
1c008f3a:	06600c13          	li	s8,102
1c008f3e:	03000613          	li	a2,48
1c008f42:	a011                	j	1c008f46 <pos_libc_prf+0x9ec>
1c008f44:	853a                	mv	a0,a4
1c008f46:	fff50713          	addi	a4,a0,-1
1c008f4a:	00074683          	lbu	a3,0(a4)
1c008f4e:	fec68be3          	beq	a3,a2,1c008f44 <pos_libc_prf+0x9ea>
1c008f52:	02e00613          	li	a2,46
1c008f56:	f6c69de3          	bne	a3,a2,1c008ed0 <pos_libc_prf+0x976>
1c008f5a:	853a                	mv	a0,a4
1c008f5c:	bf95                	j	1c008ed0 <pos_libc_prf+0x976>
1c008f5e:	02410c93          	addi	s9,sp,36
1c008f62:	41a40b33          	sub	s6,s0,s10
1c008f66:	001d0613          	addi	a2,s10,1
1c008f6a:	85e6                	mv	a1,s9
1c008f6c:	016c8533          	add	a0,s9,s6
1c008f70:	ca2ff0ef          	jal	ra,1c008412 <memmove>
1c008f74:	4312                	lw	t1,4(sp)
1c008f76:	02000793          	li	a5,32
1c008f7a:	30f30c63          	beq	t1,a5,1c009292 <pos_libc_prf+0xd38>
1c008f7e:	4702                	lw	a4,0(sp)
1c008f80:	9b3a                	add	s6,s6,a4
1c008f82:	c56755e3          	ble	s6,a4,1c008bcc <pos_libc_prf+0x672>
1c008f86:	4782                	lw	a5,0(sp)
1c008f88:	00178713          	addi	a4,a5,1
1c008f8c:	40fb07b3          	sub	a5,s6,a5
1c008f90:	3aeb4563          	blt	s6,a4,1c00933a <pos_libc_prf+0xde0>
1c008f94:	80000737          	lui	a4,0x80000
1c008f98:	3aeb0163          	beq	s6,a4,1c00933a <pos_libc_prf+0xde0>
1c008f9c:	4612                	lw	a2,4(sp)
1c008f9e:	4702                	lw	a4,0(sp)
1c008fa0:	0087c0fb          	lp.setup	x1,a5,1c008fb0 <pos_libc_prf+0xa56>
1c008fa4:	0f010813          	addi	a6,sp,240
1c008fa8:	00e806b3          	add	a3,a6,a4
1c008fac:	f2c68a23          	sb	a2,-204(a3)
1c008fb0:	0705                	addi	a4,a4,1
1c008fb2:	f2041d63          	bnez	s0,1c0086ec <pos_libc_prf+0x192>
1c008fb6:	de6ff06f          	j	1c00859c <pos_libc_prf+0x42>
1c008fba:	00175613          	srli	a2,a4,0x1
1c008fbe:	010716b3          	sll	a3,a4,a6
1c008fc2:	00f65733          	srl	a4,a2,a5
1c008fc6:	bb6d                	j	1c008d80 <pos_libc_prf+0x826>
1c008fc8:	02410c93          	addi	s9,sp,36
1c008fcc:	86de                	mv	a3,s7
1c008fce:	4641                	li	a2,16
1c008fd0:	8566                	mv	a0,s9
1c008fd2:	d14ff0ef          	jal	ra,1c0084e6 <pos_libc_to_x>
1c008fd6:	05800713          	li	a4,88
1c008fda:	8d2a                	mv	s10,a0
1c008fdc:	bcec1be3          	bne	s8,a4,1c008bb2 <pos_libc_prf+0x658>
1c008fe0:	02414783          	lbu	a5,36(sp)
1c008fe4:	4681                	li	a3,0
1c008fe6:	bc0786e3          	beqz	a5,1c008bb2 <pos_libc_prf+0x658>
1c008fea:	4665                	li	a2,25
1c008fec:	f9f78713          	addi	a4,a5,-97
1c008ff0:	0ff77713          	andi	a4,a4,255
1c008ff4:	1781                	addi	a5,a5,-32
1c008ff6:	00e66463          	bltu	a2,a4,1c008ffe <pos_libc_prf+0xaa4>
1c008ffa:	00fc8023          	sb	a5,0(s9)
1c008ffe:	0c85                	addi	s9,s9,1
1c009000:	000cc783          	lbu	a5,0(s9)
1c009004:	f7e5                	bnez	a5,1c008fec <pos_libc_prf+0xa92>
1c009006:	4782                	lw	a5,0(sp)
1c009008:	9d36                	add	s10,s10,a3
1c00900a:	ba0784e3          	beqz	a5,1c008bb2 <pos_libc_prf+0x658>
1c00900e:	4809                	li	a6,2
1c009010:	c042                	sw	a6,0(sp)
1c009012:	b645                	j	1c008bb2 <pos_libc_prf+0x658>
1c009014:	02d00793          	li	a5,45
1c009018:	02f10223          	sb	a5,36(sp)
1c00901c:	800007b7          	lui	a5,0x80000
1c009020:	26f58b63          	beq	a1,a5,1c009296 <pos_libc_prf+0xd3c>
1c009024:	40b005b3          	neg	a1,a1
1c009028:	86de                	mv	a3,s7
1c00902a:	4629                	li	a2,10
1c00902c:	02510513          	addi	a0,sp,37
1c009030:	cb6ff0ef          	jal	ra,1c0084e6 <pos_libc_to_x>
1c009034:	02510793          	addi	a5,sp,37
1c009038:	953e                	add	a0,a0,a5
1c00903a:	4805                	li	a6,1
1c00903c:	41950d33          	sub	s10,a0,s9
1c009040:	c042                	sw	a6,0(sp)
1c009042:	b129                	j	1c008c4c <pos_libc_prf+0x6f2>
1c009044:	eda7c263          	blt	a5,s10,1c008708 <pos_libc_prf+0x1ae>
1c009048:	895a                	mv	s2,s6
1c00904a:	beb5                	j	1c008bc6 <pos_libc_prf+0x66c>
1c00904c:	8b36                	mv	s6,a3
1c00904e:	e22ff06f          	j	1c008670 <pos_libc_prf+0x116>
1c009052:	4702                	lw	a4,0(sp)
1c009054:	cc02                	sw	zero,24(sp)
1c009056:	e701                	bnez	a4,1c00905e <pos_libc_prf+0xb04>
1c009058:	017037b3          	snez	a5,s7
1c00905c:	cc3e                	sw	a5,24(sp)
1c00905e:	56f5                	li	a3,-3
1c009060:	001b8713          	addi	a4,s7,1
1c009064:	00d3c463          	blt	t2,a3,1c00906c <pos_libc_prf+0xb12>
1c009068:	c8775ce3          	ble	t2,a4,1c008d00 <pos_libc_prf+0x7a6>
1c00906c:	4841                	li	a6,16
1c00906e:	05074733          	p.min	a4,a4,a6
1c009072:	06700693          	li	a3,103
1c009076:	fff70293          	addi	t0,a4,-1 # 7fffffff <pulp__FC+0x80000000>
1c00907a:	28dc0763          	beq	s8,a3,1c009308 <pos_libc_prf+0xdae>
1c00907e:	04500c13          	li	s8,69
1c009082:	badd                	j	1c008a78 <pos_libc_prf+0x51e>
1c009084:	46a2                	lw	a3,8(sp)
1c009086:	1c068963          	beqz	a3,1c009258 <pos_libc_prf+0xcfe>
1c00908a:	02b00713          	li	a4,43
1c00908e:	02e10223          	sb	a4,36(sp)
1c009092:	02510b13          	addi	s6,sp,37
1c009096:	4381                	li	t2,0
1c009098:	4301                	li	t1,0
1c00909a:	4601                	li	a2,0
1c00909c:	4701                	li	a4,0
1c00909e:	02410c93          	addi	s9,sp,36
1c0090a2:	b241                	j	1c008a22 <pos_libc_prf+0x4c8>
1c0090a4:	02510513          	addi	a0,sp,37
1c0090a8:	86de                	mv	a3,s7
1c0090aa:	4621                	li	a2,8
1c0090ac:	c3aff0ef          	jal	ra,1c0084e6 <pos_libc_to_x>
1c0090b0:	4302                	lw	t1,0(sp)
1c0090b2:	0c800793          	li	a5,200
1c0090b6:	00650d33          	add	s10,a0,t1
1c0090ba:	09fba063          	p.beqimm	s7,-1,1c00913a <pos_libc_prf+0xbe0>
1c0090be:	e5a7c563          	blt	a5,s10,1c008708 <pos_libc_prf+0x1ae>
1c0090c2:	02000813          	li	a6,32
1c0090c6:	895a                	mv	s2,s6
1c0090c8:	c002                	sw	zero,0(sp)
1c0090ca:	c242                	sw	a6,4(sp)
1c0090cc:	bced                	j	1c008bc6 <pos_libc_prf+0x66c>
1c0090ce:	02b00793          	li	a5,43
1c0090d2:	02f10223          	sb	a5,36(sp)
1c0090d6:	beb9                	j	1c008c34 <pos_libc_prf+0x6da>
1c0090d8:	1048                	addi	a0,sp,36
1c0090da:	b7f9                	j	1c0090a8 <pos_libc_prf+0xb4e>
1c0090dc:	02410c93          	addi	s9,sp,36
1c0090e0:	86e6                	mv	a3,s9
1c0090e2:	2005c163          	bltz	a1,1c0092e4 <pos_libc_prf+0xd8a>
1c0090e6:	8e59                	or	a2,a2,a4
1c0090e8:	fbfc0793          	addi	a5,s8,-65
1c0090ec:	00368513          	addi	a0,a3,3
1c0090f0:	4765                	li	a4,25
1c0090f2:	18061463          	bnez	a2,1c00927a <pos_libc_prf+0xd20>
1c0090f6:	1cf76d63          	bltu	a4,a5,1c0092d0 <pos_libc_prf+0xd76>
1c0090fa:	6795                	lui	a5,0x5
1c0090fc:	e4978793          	addi	a5,a5,-439 # 4e49 <__cluster_text_size+0x4e49>
1c009100:	00f69023          	sh	a5,0(a3)
1c009104:	04600793          	li	a5,70
1c009108:	00f68123          	sb	a5,2(a3)
1c00910c:	000681a3          	sb	zero,3(a3)
1c009110:	41950d33          	sub	s10,a0,s9
1c009114:	bbfd                	j	1c008f12 <pos_libc_prf+0x9b8>
1c009116:	4b99                	li	s7,6
1c009118:	94ec11e3          	bne	s8,a4,1c008a5a <pos_libc_prf+0x500>
1c00911c:	4682                	lw	a3,0(sp)
1c00911e:	57f5                	li	a5,-3
1c009120:	0016c693          	xori	a3,a3,1
1c009124:	cc36                	sw	a3,24(sp)
1c009126:	1cf3dd63          	ble	a5,t2,1c009300 <pos_libc_prf+0xda6>
1c00912a:	001b0693          	addi	a3,s6,1
1c00912e:	ca36                	sw	a3,20(sp)
1c009130:	8536                	mv	a0,a3
1c009132:	06500c13          	li	s8,101
1c009136:	4299                	li	t0,6
1c009138:	b2a1                	j	1c008a80 <pos_libc_prf+0x526>
1c00913a:	dda7c763          	blt	a5,s10,1c008708 <pos_libc_prf+0x1ae>
1c00913e:	895a                	mv	s2,s6
1c009140:	c002                	sw	zero,0(sp)
1c009142:	b451                	j	1c008bc6 <pos_libc_prf+0x66c>
1c009144:	d80b84e3          	beqz	s7,1c008ecc <pos_libc_prf+0x972>
1c009148:	02e00713          	li	a4,46
1c00914c:	002b0813          	addi	a6,s6,2
1c009150:	00eb00a3          	sb	a4,1(s6)
1c009154:	fffb8893          	addi	a7,s7,-1
1c009158:	bb29                	j	1c008e72 <pos_libc_prf+0x918>
1c00915a:	18705c63          	blez	t2,1c0092f2 <pos_libc_prf+0xd98>
1c00915e:	4552                	lw	a0,20(sp)
1c009160:	4641                	li	a2,16
1c009162:	859e                	mv	a1,t2
1c009164:	0295c0fb          	lp.setup	x1,a1,1c0091b6 <pos_libc_prf+0xc5c>
1c009168:	002d1793          	slli	a5,s10,0x2
1c00916c:	01ed5893          	srli	a7,s10,0x1e
1c009170:	00269713          	slli	a4,a3,0x2
1c009174:	01a78833          	add	a6,a5,s10
1c009178:	00e8e733          	or	a4,a7,a4
1c00917c:	9736                	add	a4,a4,a3
1c00917e:	00f837b3          	sltu	a5,a6,a5
1c009182:	97ba                	add	a5,a5,a4
1c009184:	0786                	slli	a5,a5,0x1
1c009186:	01f85713          	srli	a4,a6,0x1f
1c00918a:	8fd9                	or	a5,a5,a4
1c00918c:	01c7d313          	srli	t1,a5,0x1c
1c009190:	03000893          	li	a7,48
1c009194:	872a                	mv	a4,a0
1c009196:	00c05c63          	blez	a2,1c0091ae <pos_libc_prf+0xc54>
1c00919a:	00181d13          	slli	s10,a6,0x1
1c00919e:	10000837          	lui	a6,0x10000
1c0091a2:	187d                	addi	a6,a6,-1
1c0091a4:	03030893          	addi	a7,t1,48 # 10000030 <ne16_scale+0x2c>
1c0091a8:	167d                	addi	a2,a2,-1
1c0091aa:	0107f6b3          	and	a3,a5,a6
1c0091ae:	011b0023          	sb	a7,0(s6)
1c0091b2:	13fd                	addi	t2,t2,-1
1c0091b4:	8b2a                	mv	s6,a0
1c0091b6:	0505                	addi	a0,a0,1
1c0091b8:	4302                	lw	t1,0(sp)
1c0091ba:	00031563          	bnez	t1,1c0091c4 <pos_libc_prf+0xc6a>
1c0091be:	853a                	mv	a0,a4
1c0091c0:	d60b8be3          	beqz	s7,1c008f36 <pos_libc_prf+0x9dc>
1c0091c4:	02e00793          	li	a5,46
1c0091c8:	00170513          	addi	a0,a4,1
1c0091cc:	00f70023          	sb	a5,0(a4)
1c0091d0:	03000593          	li	a1,48
1c0091d4:	fffb8313          	addi	t1,s7,-1
1c0091d8:	d5705fe3          	blez	s7,1c008f36 <pos_libc_prf+0x9dc>
1c0091dc:	002d1793          	slli	a5,s10,0x2
1c0091e0:	01ed5893          	srli	a7,s10,0x1e
1c0091e4:	00269713          	slli	a4,a3,0x2
1c0091e8:	01a78833          	add	a6,a5,s10
1c0091ec:	00e8e733          	or	a4,a7,a4
1c0091f0:	9736                	add	a4,a4,a3
1c0091f2:	00f837b3          	sltu	a5,a6,a5
1c0091f6:	97ba                	add	a5,a5,a4
1c0091f8:	0786                	slli	a5,a5,0x1
1c0091fa:	01f85713          	srli	a4,a6,0x1f
1c0091fe:	8fd9                	or	a5,a5,a4
1c009200:	01c7de13          	srli	t3,a5,0x1c
1c009204:	00150893          	addi	a7,a0,1
1c009208:	02039563          	bnez	t2,1c009232 <pos_libc_prf+0xcd8>
1c00920c:	03000713          	li	a4,48
1c009210:	00c05c63          	blez	a2,1c009228 <pos_libc_prf+0xcce>
1c009214:	00181d13          	slli	s10,a6,0x1
1c009218:	10000837          	lui	a6,0x10000
1c00921c:	187d                	addi	a6,a6,-1
1c00921e:	030e0713          	addi	a4,t3,48
1c009222:	167d                	addi	a2,a2,-1
1c009224:	0107f6b3          	and	a3,a5,a6
1c009228:	00e50023          	sb	a4,0(a0)
1c00922c:	8b9a                	mv	s7,t1
1c00922e:	8546                	mv	a0,a7
1c009230:	b755                	j	1c0091d4 <pos_libc_prf+0xc7a>
1c009232:	00b50023          	sb	a1,0(a0)
1c009236:	0385                	addi	t2,t2,1
1c009238:	bfd5                	j	1c00922c <pos_libc_prf+0xcd2>
1c00923a:	02d00793          	li	a5,45
1c00923e:	407003b3          	neg	t2,t2
1c009242:	00f500a3          	sb	a5,1(a0)
1c009246:	b165                	j	1c008eee <pos_libc_prf+0x994>
1c009248:	86de                	mv	a3,s7
1c00924a:	4629                	li	a2,10
1c00924c:	8566                	mv	a0,s9
1c00924e:	a98ff0ef          	jal	ra,1c0084e6 <pos_libc_to_x>
1c009252:	8d2a                	mv	s10,a0
1c009254:	c002                	sw	zero,0(sp)
1c009256:	badd                	j	1c008c4c <pos_libc_prf+0x6f2>
1c009258:	4632                	lw	a2,12(sp)
1c00925a:	10060163          	beqz	a2,1c00935c <pos_libc_prf+0xe02>
1c00925e:	02000713          	li	a4,32
1c009262:	02e10223          	sb	a4,36(sp)
1c009266:	02510b13          	addi	s6,sp,37
1c00926a:	02410c93          	addi	s9,sp,36
1c00926e:	4381                	li	t2,0
1c009270:	4301                	li	t1,0
1c009272:	4601                	li	a2,0
1c009274:	4701                	li	a4,0
1c009276:	facff06f          	j	1c008a22 <pos_libc_prf+0x4c8>
1c00927a:	0af76663          	bltu	a4,a5,1c009326 <pos_libc_prf+0xdcc>
1c00927e:	6791                	lui	a5,0x4
1c009280:	14e78793          	addi	a5,a5,334 # 414e <__cluster_text_size+0x414e>
1c009284:	00f69023          	sh	a5,0(a3)
1c009288:	04e00793          	li	a5,78
1c00928c:	00f68123          	sb	a5,2(a3)
1c009290:	bdb5                	j	1c00910c <pos_libc_prf+0xbb2>
1c009292:	c002                	sw	zero,0(sp)
1c009294:	b9cd                	j	1c008f86 <pos_libc_prf+0xa2c>
1c009296:	86de                	mv	a3,s7
1c009298:	4629                	li	a2,10
1c00929a:	800005b7          	lui	a1,0x80000
1c00929e:	b379                	j	1c00902c <pos_libc_prf+0xad2>
1c0092a0:	4832                	lw	a6,12(sp)
1c0092a2:	02410c93          	addi	s9,sp,36
1c0092a6:	8b66                	mv	s6,s9
1c0092a8:	e0080d63          	beqz	a6,1c0088c2 <pos_libc_prf+0x368>
1c0092ac:	02000693          	li	a3,32
1c0092b0:	02d10223          	sb	a3,36(sp)
1c0092b4:	02510b13          	addi	s6,sp,37
1c0092b8:	e0aff06f          	j	1c0088c2 <pos_libc_prf+0x368>
1c0092bc:	02d00693          	li	a3,45
1c0092c0:	02d10223          	sb	a3,36(sp)
1c0092c4:	02510b13          	addi	s6,sp,37
1c0092c8:	02410c93          	addi	s9,sp,36
1c0092cc:	df6ff06f          	j	1c0088c2 <pos_libc_prf+0x368>
1c0092d0:	679d                	lui	a5,0x7
1c0092d2:	e6978793          	addi	a5,a5,-407 # 6e69 <__cluster_text_size+0x6e69>
1c0092d6:	00f69023          	sh	a5,0(a3)
1c0092da:	06600793          	li	a5,102
1c0092de:	00f68123          	sb	a5,2(a3)
1c0092e2:	b52d                	j	1c00910c <pos_libc_prf+0xbb2>
1c0092e4:	02d00693          	li	a3,45
1c0092e8:	02d10223          	sb	a3,36(sp)
1c0092ec:	02510693          	addi	a3,sp,37
1c0092f0:	bbdd                	j	1c0090e6 <pos_libc_prf+0xb8c>
1c0092f2:	03000793          	li	a5,48
1c0092f6:	00fb0023          	sb	a5,0(s6)
1c0092fa:	4752                	lw	a4,20(sp)
1c0092fc:	4641                	li	a2,16
1c0092fe:	bd6d                	j	1c0091b8 <pos_libc_prf+0xc5e>
1c009300:	479d                	li	a5,7
1c009302:	9e77dfe3          	ble	t2,a5,1c008d00 <pos_libc_prf+0x7a6>
1c009306:	4299                	li	t0,6
1c009308:	06500c13          	li	s8,101
1c00930c:	f6cff06f          	j	1c008a78 <pos_libc_prf+0x51e>
1c009310:	4772                	lw	a4,28(sp)
1c009312:	080006b7          	lui	a3,0x8000
1c009316:	96ba                	add	a3,a3,a4
1c009318:	f606b7b3          	p.bclr	a5,a3,27,0
1c00931c:	e2078fe3          	beqz	a5,1c00915a <pos_libc_prf+0xc00>
1c009320:	06600c13          	li	s8,102
1c009324:	bc19                	j	1c008d3a <pos_libc_prf+0x7e0>
1c009326:	6799                	lui	a5,0x6
1c009328:	16e78793          	addi	a5,a5,366 # 616e <__cluster_text_size+0x616e>
1c00932c:	00f69023          	sh	a5,0(a3) # 8000000 <__l1_heap_size+0x7fd2110>
1c009330:	06e00793          	li	a5,110
1c009334:	00f68123          	sb	a5,2(a3)
1c009338:	bbd1                	j	1c00910c <pos_libc_prf+0xbb2>
1c00933a:	4785                	li	a5,1
1c00933c:	4612                	lw	a2,4(sp)
1c00933e:	4702                	lw	a4,0(sp)
1c009340:	b185                	j	1c008fa0 <pos_libc_prf+0xa46>
1c009342:	02414783          	lbu	a5,36(sp)
1c009346:	c799                	beqz	a5,1c009354 <pos_libc_prf+0xdfa>
1c009348:	4689                	li	a3,2
1c00934a:	02410c93          	addi	s9,sp,36
1c00934e:	b971                	j	1c008fea <pos_libc_prf+0xa90>
1c009350:	4785                	li	a5,1
1c009352:	b045                	j	1c008bf2 <pos_libc_prf+0x698>
1c009354:	4709                	li	a4,2
1c009356:	0d09                	addi	s10,s10,2
1c009358:	c03a                	sw	a4,0(sp)
1c00935a:	b8a1                	j	1c008bb2 <pos_libc_prf+0x658>
1c00935c:	02410c93          	addi	s9,sp,36
1c009360:	8b66                	mv	s6,s9
1c009362:	b731                	j	1c00926e <pos_libc_prf+0xd14>
1c009364:	8542                	mv	a0,a6
1c009366:	b69d                	j	1c008ecc <pos_libc_prf+0x972>

1c009368 <pos_init_start>:
1c009368:	1141                	addi	sp,sp,-16
1c00936a:	c422                	sw	s0,8(sp)
1c00936c:	1c000437          	lui	s0,0x1c000
1c009370:	c606                	sw	ra,12(sp)
1c009372:	00840413          	addi	s0,s0,8 # 1c000008 <ctor_list>
1c009376:	822ff0ef          	jal	ra,1c008398 <pos_soc_init>
1c00937a:	2a41                	jal	1c00950a <pos_irq_init>
1c00937c:	2ac9                	jal	1c00954e <pos_soc_event_init>
1c00937e:	20e5                	jal	1c009466 <pos_allocs_init>
1c009380:	405c                	lw	a5,4(s0)
1c009382:	c791                	beqz	a5,1c00938e <pos_init_start+0x26>
1c009384:	0411                	addi	s0,s0,4
1c009386:	0411                	addi	s0,s0,4
1c009388:	9782                	jalr	a5
1c00938a:	401c                	lw	a5,0(s0)
1c00938c:	ffed                	bnez	a5,1c009386 <pos_init_start+0x1e>
1c00938e:	922ff0ef          	jal	ra,1c0084b0 <pos_io_start>
1c009392:	300467f3          	csrrsi	a5,mstatus,8
1c009396:	f1402573          	csrr	a0,mhartid
1c00939a:	8515                	srai	a0,a0,0x5
1c00939c:	f2653533          	p.bclr	a0,a0,25,6
1c0093a0:	47fd                	li	a5,31
1c0093a2:	00f50a63          	beq	a0,a5,1c0093b6 <pos_init_start+0x4e>
1c0093a6:	4422                	lw	s0,8(sp)
1c0093a8:	40b2                	lw	ra,12(sp)
1c0093aa:	1c0085b7          	lui	a1,0x1c008
1c0093ae:	2ec58593          	addi	a1,a1,748 # 1c0082ec <main>
1c0093b2:	0141                	addi	sp,sp,16
1c0093b4:	a40d                	j	1c0095d6 <cluster_start>
1c0093b6:	40b2                	lw	ra,12(sp)
1c0093b8:	4422                	lw	s0,8(sp)
1c0093ba:	0141                	addi	sp,sp,16
1c0093bc:	8082                	ret

1c0093be <pos_init_stop>:
1c0093be:	1141                	addi	sp,sp,-16
1c0093c0:	c422                	sw	s0,8(sp)
1c0093c2:	1c000437          	lui	s0,0x1c000
1c0093c6:	c606                	sw	ra,12(sp)
1c0093c8:	01440413          	addi	s0,s0,20 # 1c000014 <dtor_list>
1c0093cc:	8e8ff0ef          	jal	ra,1c0084b4 <pos_io_stop>
1c0093d0:	405c                	lw	a5,4(s0)
1c0093d2:	c791                	beqz	a5,1c0093de <pos_init_stop+0x20>
1c0093d4:	0411                	addi	s0,s0,4
1c0093d6:	0411                	addi	s0,s0,4
1c0093d8:	9782                	jalr	a5
1c0093da:	401c                	lw	a5,0(s0)
1c0093dc:	ffed                	bnez	a5,1c0093d6 <pos_init_stop+0x18>
1c0093de:	40b2                	lw	ra,12(sp)
1c0093e0:	4422                	lw	s0,8(sp)
1c0093e2:	0141                	addi	sp,sp,16
1c0093e4:	8082                	ret

1c0093e6 <pos_alloc_init>:
1c0093e6:	00758793          	addi	a5,a1,7
1c0093ea:	c407b7b3          	p.bclr	a5,a5,2,0
1c0093ee:	40b785b3          	sub	a1,a5,a1
1c0093f2:	c11c                	sw	a5,0(a0)
1c0093f4:	8e0d                	sub	a2,a2,a1
1c0093f6:	00c05763          	blez	a2,1c009404 <pos_alloc_init+0x1e>
1c0093fa:	c4063633          	p.bclr	a2,a2,2,0
1c0093fe:	c390                	sw	a2,0(a5)
1c009400:	0007a223          	sw	zero,4(a5)
1c009404:	8082                	ret

1c009406 <pos_alloc>:
1c009406:	4110                	lw	a2,0(a0)
1c009408:	059d                	addi	a1,a1,7
1c00940a:	c405b5b3          	p.bclr	a1,a1,2,0
1c00940e:	ca31                	beqz	a2,1c009462 <pos_alloc+0x5c>
1c009410:	4218                	lw	a4,0(a2)
1c009412:	425c                	lw	a5,4(a2)
1c009414:	02b75963          	ble	a1,a4,1c009446 <pos_alloc+0x40>
1c009418:	cb81                	beqz	a5,1c009428 <pos_alloc+0x22>
1c00941a:	4398                	lw	a4,0(a5)
1c00941c:	43d4                	lw	a3,4(a5)
1c00941e:	00b75763          	ble	a1,a4,1c00942c <pos_alloc+0x26>
1c009422:	863e                	mv	a2,a5
1c009424:	87b6                	mv	a5,a3
1c009426:	fbf5                	bnez	a5,1c00941a <pos_alloc+0x14>
1c009428:	853e                	mv	a0,a5
1c00942a:	8082                	ret
1c00942c:	00b70a63          	beq	a4,a1,1c009440 <pos_alloc+0x3a>
1c009430:	00b78533          	add	a0,a5,a1
1c009434:	8f0d                	sub	a4,a4,a1
1c009436:	c118                	sw	a4,0(a0)
1c009438:	c154                	sw	a3,4(a0)
1c00943a:	c248                	sw	a0,4(a2)
1c00943c:	853e                	mv	a0,a5
1c00943e:	8082                	ret
1c009440:	c254                	sw	a3,4(a2)
1c009442:	853e                	mv	a0,a5
1c009444:	8082                	ret
1c009446:	00e58b63          	beq	a1,a4,1c00945c <pos_alloc+0x56>
1c00944a:	00b606b3          	add	a3,a2,a1
1c00944e:	8f0d                	sub	a4,a4,a1
1c009450:	c2dc                	sw	a5,4(a3)
1c009452:	c298                	sw	a4,0(a3)
1c009454:	87b2                	mv	a5,a2
1c009456:	c114                	sw	a3,0(a0)
1c009458:	853e                	mv	a0,a5
1c00945a:	8082                	ret
1c00945c:	c11c                	sw	a5,0(a0)
1c00945e:	87b2                	mv	a5,a2
1c009460:	b7e1                	j	1c009428 <pos_alloc+0x22>
1c009462:	4781                	li	a5,0
1c009464:	b7d1                	j	1c009428 <pos_alloc+0x22>

1c009466 <pos_allocs_init>:
1c009466:	1141                	addi	sp,sp,-16
1c009468:	1c0015b7          	lui	a1,0x1c001
1c00946c:	c606                	sw	ra,12(sp)
1c00946e:	91458793          	addi	a5,a1,-1772 # 1c000914 <__l2_priv0_end>
1c009472:	1c008637          	lui	a2,0x1c008
1c009476:	04c7cc63          	blt	a5,a2,1c0094ce <pos_allocs_init+0x68>
1c00947a:	4581                	li	a1,0
1c00947c:	4601                	li	a2,0
1c00947e:	1c001537          	lui	a0,0x1c001
1c009482:	90450513          	addi	a0,a0,-1788 # 1c000904 <pos_alloc_l2>
1c009486:	3785                	jal	1c0093e6 <pos_alloc_init>
1c009488:	1c0095b7          	lui	a1,0x1c009
1c00948c:	68858793          	addi	a5,a1,1672 # 1c009688 <__l2_priv1_end>
1c009490:	1c010637          	lui	a2,0x1c010
1c009494:	02c7c963          	blt	a5,a2,1c0094c6 <pos_allocs_init+0x60>
1c009498:	4581                	li	a1,0
1c00949a:	4601                	li	a2,0
1c00949c:	1c001537          	lui	a0,0x1c001
1c0094a0:	90850513          	addi	a0,a0,-1784 # 1c000908 <pos_alloc_l2+0x4>
1c0094a4:	3789                	jal	1c0093e6 <pos_alloc_init>
1c0094a6:	100125b7          	lui	a1,0x10012
1c0094aa:	40b2                	lw	ra,12(sp)
1c0094ac:	11058793          	addi	a5,a1,272 # 10012110 <__l2_shared_end>
1c0094b0:	1c080637          	lui	a2,0x1c080
1c0094b4:	1c001537          	lui	a0,0x1c001
1c0094b8:	8e1d                	sub	a2,a2,a5
1c0094ba:	11058593          	addi	a1,a1,272
1c0094be:	90c50513          	addi	a0,a0,-1780 # 1c00090c <pos_alloc_l2+0x8>
1c0094c2:	0141                	addi	sp,sp,16
1c0094c4:	b70d                	j	1c0093e6 <pos_alloc_init>
1c0094c6:	8e1d                	sub	a2,a2,a5
1c0094c8:	68858593          	addi	a1,a1,1672
1c0094cc:	bfc1                	j	1c00949c <pos_allocs_init+0x36>
1c0094ce:	8e1d                	sub	a2,a2,a5
1c0094d0:	91458593          	addi	a1,a1,-1772
1c0094d4:	b76d                	j	1c00947e <pos_allocs_init+0x18>

1c0094d6 <alloc_init_l1>:
1c0094d6:	100127b7          	lui	a5,0x10012
1c0094da:	01651593          	slli	a1,a0,0x16
1c0094de:	11078793          	addi	a5,a5,272 # 10012110 <__l2_shared_end>
1c0094e2:	95be                	add	a1,a1,a5
1c0094e4:	1c0017b7          	lui	a5,0x1c001
1c0094e8:	050a                	slli	a0,a0,0x2
1c0094ea:	0002e637          	lui	a2,0x2e
1c0094ee:	90078793          	addi	a5,a5,-1792 # 1c000900 <pos_alloc_l1>
1c0094f2:	ef060613          	addi	a2,a2,-272 # 2def0 <__l1_heap_size>
1c0094f6:	953e                	add	a0,a0,a5
1c0094f8:	b5fd                	j	1c0093e6 <pos_alloc_init>

1c0094fa <pi_l1_malloc>:
1c0094fa:	1c0017b7          	lui	a5,0x1c001
1c0094fe:	050a                	slli	a0,a0,0x2
1c009500:	90078793          	addi	a5,a5,-1792 # 1c000900 <pos_alloc_l1>
1c009504:	953e                	add	a0,a0,a5
1c009506:	b701                	j	1c009406 <pos_alloc>

1c009508 <__rt_handle_illegal_instr>:
1c009508:	8082                	ret

1c00950a <pos_irq_init>:
1c00950a:	f14027f3          	csrr	a5,mhartid
1c00950e:	477d                	li	a4,31
1c009510:	ca5797b3          	p.extractu	a5,a5,5,5
1c009514:	00e78f63          	beq	a5,a4,1c009532 <pos_irq_init+0x28>
1c009518:	002047b7          	lui	a5,0x204
1c00951c:	577d                	li	a4,-1
1c00951e:	cb98                	sw	a4,16(a5)
1c009520:	1c0087b7          	lui	a5,0x1c008
1c009524:	00078793          	mv	a5,a5
1c009528:	c007c7b3          	p.bset	a5,a5,0,0
1c00952c:	30579073          	csrw	mtvec,a5
1c009530:	8082                	ret
1c009532:	1a10a7b7          	lui	a5,0x1a10a
1c009536:	577d                	li	a4,-1
1c009538:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa0f76f8>
1c00953c:	1c0087b7          	lui	a5,0x1c008
1c009540:	00078793          	mv	a5,a5
1c009544:	c007c7b3          	p.bset	a5,a5,0,0
1c009548:	30579073          	csrw	mtvec,a5
1c00954c:	8082                	ret

1c00954e <pos_soc_event_init>:
1c00954e:	1a1067b7          	lui	a5,0x1a106
1c009552:	577d                	li	a4,-1
1c009554:	00478693          	addi	a3,a5,4 # 1a106004 <__l2_shared_end+0xa0f3ef4>
1c009558:	c298                	sw	a4,0(a3)
1c00955a:	00878693          	addi	a3,a5,8
1c00955e:	c298                	sw	a4,0(a3)
1c009560:	00c78693          	addi	a3,a5,12
1c009564:	c298                	sw	a4,0(a3)
1c009566:	01078693          	addi	a3,a5,16
1c00956a:	c298                	sw	a4,0(a3)
1c00956c:	01478693          	addi	a3,a5,20
1c009570:	c298                	sw	a4,0(a3)
1c009572:	01878693          	addi	a3,a5,24
1c009576:	c298                	sw	a4,0(a3)
1c009578:	01c78693          	addi	a3,a5,28
1c00957c:	c298                	sw	a4,0(a3)
1c00957e:	02078793          	addi	a5,a5,32
1c009582:	c398                	sw	a4,0(a5)
1c009584:	8082                	ret

1c009586 <cluster_entry_stub>:
1c009586:	1141                	addi	sp,sp,-16
1c009588:	c606                	sw	ra,12(sp)
1c00958a:	002047b7          	lui	a5,0x204
1c00958e:	00070737          	lui	a4,0x70
1c009592:	c798                	sw	a4,8(a5)
1c009594:	0ff00713          	li	a4,255
1c009598:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1d6310>
1c00959c:	00e7a023          	sw	a4,0(a5)
1c0095a0:	00e7a623          	sw	a4,12(a5)
1c0095a4:	1c0017b7          	lui	a5,0x1c001
1c0095a8:	9107a783          	lw	a5,-1776(a5) # 1c000910 <cluster_entry>
1c0095ac:	9782                	jalr	a5
1c0095ae:	f14027f3          	csrr	a5,mhartid
1c0095b2:	f457b7b3          	p.bclr	a5,a5,26,5
1c0095b6:	eb89                	bnez	a5,1c0095c8 <cluster_entry_stub+0x42>
1c0095b8:	1c001737          	lui	a4,0x1c001
1c0095bc:	1c0017b7          	lui	a5,0x1c001
1c0095c0:	8ea72c23          	sw	a0,-1800(a4) # 1c0008f8 <_bss_start>
1c0095c4:	8e07ae23          	sw	zero,-1796(a5) # 1c0008fc <cluster_running>
1c0095c8:	002047b7          	lui	a5,0x204
1c0095cc:	577d                	li	a4,-1
1c0095ce:	c3d8                	sw	a4,4(a5)
1c0095d0:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1d6148>
1c0095d4:	a001                	j	1c0095d4 <cluster_entry_stub+0x4e>

1c0095d6 <cluster_start>:
1c0095d6:	1141                	addi	sp,sp,-16
1c0095d8:	1c0017b7          	lui	a5,0x1c001
1c0095dc:	c226                	sw	s1,4(sp)
1c0095de:	84aa                	mv	s1,a0
1c0095e0:	4509                	li	a0,2
1c0095e2:	90b7a823          	sw	a1,-1776(a5) # 1c000910 <cluster_entry>
1c0095e6:	c606                	sw	ra,12(sp)
1c0095e8:	c422                	sw	s0,8(sp)
1c0095ea:	d05fe0ef          	jal	ra,1c0082ee <pos_fll_init>
1c0095ee:	8526                	mv	a0,s1
1c0095f0:	35dd                	jal	1c0094d6 <alloc_init_l1>
1c0095f2:	04048413          	addi	s0,s1,64
1c0095f6:	00201737          	lui	a4,0x201
1c0095fa:	40070713          	addi	a4,a4,1024 # 201400 <__l1_heap_size+0x1d3510>
1c0095fe:	045a                	slli	s0,s0,0x16
1c009600:	56fd                	li	a3,-1
1c009602:	f14027f3          	csrr	a5,mhartid
1c009606:	00d46723          	p.sw	a3,a4(s0)
1c00960a:	ca5797b3          	p.extractu	a5,a5,5,5
1c00960e:	477d                	li	a4,31
1c009610:	00e78f63          	beq	a5,a4,1c00962e <cluster_start+0x58>
1c009614:	002047b7          	lui	a5,0x204
1c009618:	00070737          	lui	a4,0x70
1c00961c:	c798                	sw	a4,8(a5)
1c00961e:	0ff00713          	li	a4,255
1c009622:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1d6310>
1c009626:	00e7a023          	sw	a4,0(a5)
1c00962a:	00e7a623          	sw	a4,12(a5)
1c00962e:	8526                	mv	a0,s1
1c009630:	355d                	jal	1c0094d6 <alloc_init_l1>
1c009632:	6591                	lui	a1,0x4
1c009634:	8526                	mv	a0,s1
1c009636:	35d1                	jal	1c0094fa <pi_l1_malloc>
1c009638:	100127b7          	lui	a5,0x10012
1c00963c:	10a7a623          	sw	a0,268(a5) # 1001210c <cluster_stacks>
1c009640:	cd15                	beqz	a0,1c00967c <cluster_start+0xa6>
1c009642:	00200637          	lui	a2,0x200
1c009646:	1c0017b7          	lui	a5,0x1c001
1c00964a:	4705                	li	a4,1
1c00964c:	1c0085b7          	lui	a1,0x1c008
1c009650:	04060613          	addi	a2,a2,64 # 200040 <__l1_heap_size+0x1d2150>
1c009654:	8ee7ae23          	sw	a4,-1796(a5) # 1c0008fc <cluster_running>
1c009658:	08058593          	addi	a1,a1,128 # 1c008080 <_start>
1c00965c:	9622                	add	a2,a2,s0
1c00965e:	4701                	li	a4,0
1c009660:	008350fb          	lp.setupi	x1,8,1c00966c <cluster_start+0x96>
1c009664:	00271693          	slli	a3,a4,0x2
1c009668:	00b6e623          	p.sw	a1,a2(a3)
1c00966c:	0705                	addi	a4,a4,1
1c00966e:	002007b7          	lui	a5,0x200
1c009672:	07a1                	addi	a5,a5,8
1c009674:	0ff00713          	li	a4,255
1c009678:	00e467a3          	p.sw	a4,a5(s0)
1c00967c:	40b2                	lw	ra,12(sp)
1c00967e:	4422                	lw	s0,8(sp)
1c009680:	4492                	lw	s1,4(sp)
1c009682:	0141                	addi	sp,sp,16
1c009684:	8082                	ret

1c009686 <_endtext>:
	...
make[1]: Leaving directory `/scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/64x32x16x16_f1_qw8_st1'
