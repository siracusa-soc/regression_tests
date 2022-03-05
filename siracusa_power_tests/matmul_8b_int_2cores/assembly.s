Flags : -O2 -g -Iinc -fno-tree-loop-optimize -fno-tree-loop-distribute-patterns  -DNB_RUN=1  
make[1]: Entering directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/matmul_8b_int_2cores'
/usr/scratch/fenga5/beppe/INSTALL-PULP/bin/riscv32-unknown-elf-objdump -Mmarch=rv32imcxgap9 -d /scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/matmul_8b_int_2cores/build/ne16_test/ne16_test

/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/matmul_8b_int_2cores/build/ne16_test/ne16_test:     file format elf32-littleriscv


Disassembly of section .vectors:

1c008000 <__irq_vector_base>:
1c008000:	5a80106f          	j	1c0095a8 <__rt_handle_illegal_instr>
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
1c008084:	5240106f          	j	1c0095a8 <__rt_handle_illegal_instr>

1c008088 <pos_no_irq_handler>:
1c008088:	30200073          	mret

1c00808c <pos_semihosting_call>:
1c00808c:	00100073          	ebreak
1c008090:	00008067          	ret

1c008094 <pe_start>:
1c008094:	f3ff8117          	auipc	sp,0xf3ff8
1c008098:	67010113          	addi	sp,sp,1648 # 10000704 <cluster_stacks>
1c00809c:	00012103          	lw	sp,0(sp)
1c0080a0:	000011b7          	lui	gp,0x1
1c0080a4:	80018193          	addi	gp,gp,-2048 # 800 <__cluster_text_size+0x800>
1c0080a8:	00158593          	addi	a1,a1,1
1c0080ac:	02b180b3          	mul	ra,gp,a1
1c0080b0:	00110133          	add	sp,sp,ra
1c0080b4:	5720106f          	j	1c009626 <cluster_entry_stub>

1c0080b8 <do_cl_boot>:
1c0080b8:	10200137          	lui	sp,0x10200
1c0080bc:	00100193          	li	gp,1
1c0080c0:	00000217          	auipc	tp,0x0
1c0080c4:	fc020213          	addi	tp,tp,-64 # 1c008080 <_start>
1c0080c8:	04412023          	sw	tp,64(sp) # 10200040 <__l2_shared_end+0x1ff938>
1c0080cc:	00312423          	sw	gp,8(sp)

1c0080d0 <loop>:
1c0080d0:	1a10a137          	lui	sp,0x1a10a
1c0080d4:	80010113          	addi	sp,sp,-2048 # 1a109800 <__l2_shared_end+0xa1090f8>
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
1c0080f8:	ffff8297          	auipc	t0,0xffff8
1c0080fc:	79028293          	addi	t0,t0,1936 # 1c000888 <_bss_start>
1c008100:	ffff8317          	auipc	t1,0xffff8
1c008104:	7a430313          	addi	t1,t1,1956 # 1c0008a4 <__l2_priv0_end>
1c008108:	0002a023          	sw	zero,0(t0)
1c00810c:	0291                	addi	t0,t0,4
1c00810e:	fe62ede3          	bltu	t0,t1,1c008108 <_stext+0x24>
1c008112:	ffff8117          	auipc	sp,0xffff8
1c008116:	76e10113          	addi	sp,sp,1902 # 1c000880 <stack>
1c00811a:	2f0010ef          	jal	ra,1c00940a <pos_init_start>
1c00811e:	00000513          	li	a0,0
1c008122:	00000593          	li	a1,0
1c008126:	00000397          	auipc	t2,0x0
1c00812a:	26038393          	addi	t2,t2,608 # 1c008386 <main>
1c00812e:	000380e7          	jalr	t2
1c008132:	842a                	mv	s0,a0
1c008134:	32c010ef          	jal	ra,1c009460 <pos_init_stop>
1c008138:	8522                	mv	a0,s0
1c00813a:	404000ef          	jal	ra,1c00853e <exit>

1c00813e <checkInt>:
1c00813e:	1101                	addi	sp,sp,-32
1c008140:	ce06                	sw	ra,28(sp)
1c008142:	cc22                	sw	s0,24(sp)
1c008144:	ca26                	sw	s1,20(sp)
1c008146:	c84a                	sw	s2,16(sp)
1c008148:	c64e                	sw	s3,12(sp)
1c00814a:	c452                	sw	s4,8(sp)
1c00814c:	c256                	sw	s5,4(sp)
1c00814e:	04c05563          	blez	a2,1c008198 <checkInt+0x5a>
1c008152:	89ae                	mv	s3,a1
1c008154:	892a                	mv	s2,a0
1c008156:	84b2                	mv	s1,a2
1c008158:	4a01                	li	s4,0
1c00815a:	4401                	li	s0,0
1c00815c:	1c000ab7          	lui	s5,0x1c000
1c008160:	00241793          	slli	a5,s0,0x2
1c008164:	20f9f703          	p.lw	a4,a5(s3)
1c008168:	20f97783          	p.lw	a5,a5(s2)
1c00816c:	85a2                	mv	a1,s0
1c00816e:	863a                	mv	a2,a4
1c008170:	0405                	addi	s0,s0,1
1c008172:	86be                	mv	a3,a5
1c008174:	01ca8513          	addi	a0,s5,28 # 1c00001c <__DTOR_END__>
1c008178:	00f70463          	beq	a4,a5,1c008180 <checkInt+0x42>
1c00817c:	0a05                	addi	s4,s4,1
1c00817e:	2ee9                	jal	1c008558 <printf>
1c008180:	fe9440e3          	blt	s0,s1,1c008160 <checkInt+0x22>
1c008184:	40f2                	lw	ra,28(sp)
1c008186:	4462                	lw	s0,24(sp)
1c008188:	8552                	mv	a0,s4
1c00818a:	44d2                	lw	s1,20(sp)
1c00818c:	4942                	lw	s2,16(sp)
1c00818e:	49b2                	lw	s3,12(sp)
1c008190:	4a22                	lw	s4,8(sp)
1c008192:	4a92                	lw	s5,4(sp)
1c008194:	6105                	addi	sp,sp,32
1c008196:	8082                	ret
1c008198:	4a01                	li	s4,0
1c00819a:	b7ed                	j	1c008184 <checkInt+0x46>

1c00819c <cluster_entry>:
1c00819c:	1101                	addi	sp,sp,-32
1c00819e:	ce06                	sw	ra,28(sp)
1c0081a0:	cc22                	sw	s0,24(sp)
1c0081a2:	ca26                	sw	s1,20(sp)
1c0081a4:	c84a                	sw	s2,16(sp)
1c0081a6:	c64e                	sw	s3,12(sp)
1c0081a8:	c452                	sw	s4,8(sp)
1c0081aa:	c256                	sw	s5,4(sp)
1c0081ac:	c05a                	sw	s6,0(sp)
1c0081ae:	58e010ef          	jal	ra,1c00973c <synch_barrier>
1c0081b2:	58a010ef          	jal	ra,1c00973c <synch_barrier>
1c0081b6:	f1402473          	csrr	s0,mhartid
1c0081ba:	4785                	li	a5,1
1c0081bc:	f4543433          	p.bclr	s0,s0,26,5
1c0081c0:	0287f563          	bleu	s0,a5,1c0081ea <cluster_entry+0x4e>
1c0081c4:	578010ef          	jal	ra,1c00973c <synch_barrier>
1c0081c8:	780027f3          	csrr	a5,pccr0
1c0081cc:	c461                	beqz	s0,1c008294 <cluster_entry+0xf8>
1c0081ce:	56e010ef          	jal	ra,1c00973c <synch_barrier>
1c0081d2:	4401                	li	s0,0
1c0081d4:	8522                	mv	a0,s0
1c0081d6:	40f2                	lw	ra,28(sp)
1c0081d8:	4462                	lw	s0,24(sp)
1c0081da:	44d2                	lw	s1,20(sp)
1c0081dc:	4942                	lw	s2,16(sp)
1c0081de:	49b2                	lw	s3,12(sp)
1c0081e0:	4a22                	lw	s4,8(sp)
1c0081e2:	4a92                	lw	s5,4(sp)
1c0081e4:	4b02                	lw	s6,0(sp)
1c0081e6:	6105                	addi	sp,sp,32
1c0081e8:	8082                	ret
1c0081ea:	e801                	bnez	s0,1c0081fa <cluster_entry+0x5e>
1c0081ec:	abbab7b7          	lui	a5,0xabbab
1c0081f0:	10000737          	lui	a4,0x10000
1c0081f4:	bba78793          	addi	a5,a5,-1094 # abbaabba <pulp__FC+0xabbaabbb>
1c0081f8:	c31c                	sw	a5,0(a4)
1c0081fa:	100008b7          	lui	a7,0x10000
1c0081fe:	00488313          	addi	t1,a7,4 # 10000004 <W8_su>
1c008202:	00488b13          	addi	s6,a7,4
1c008206:	36030a93          	addi	s5,t1,864
1c00820a:	24030a13          	addi	s4,t1,576
1c00820e:	4e01                	li	t3,0
1c008210:	4e81                	li	t4,0
1c008212:	4f01                	li	t5,0
1c008214:	4f81                	li	t6,0
1c008216:	4281                	li	t0,0
1c008218:	4381                	li	t2,0
1c00821a:	4081                	li	ra,0
1c00821c:	4481                	li	s1,0
1c00821e:	12030313          	addi	t1,t1,288
1c008222:	00488893          	addi	a7,a7,4
1c008226:	5a0b0993          	addi	s3,s6,1440
1c00822a:	480b0913          	addi	s2,s6,1152
1c00822e:	048e50fb          	lp.setupi	x1,72,1c008266 <cluster_entry+0xca>
1c008232:	0049a78b          	p.lw	a5,4(s3!)
1c008236:	0049270b          	p.lw	a4,4(s2!)
1c00823a:	0048a50b          	p.lw	a0,4(a7!)
1c00823e:	0043258b          	p.lw	a1,4(t1!)
1c008242:	004a260b          	p.lw	a2,4(s4!)
1c008246:	004aa68b          	p.lw	a3,4(s5!)
1c00824a:	a8a714d7          	pv.sdotusp.b	s1,a4,a0
1c00824e:	a8b710d7          	pv.sdotusp.b	ra,a4,a1
1c008252:	a8c713d7          	pv.sdotusp.b	t2,a4,a2
1c008256:	a8d712d7          	pv.sdotusp.b	t0,a4,a3
1c00825a:	a8a79fd7          	pv.sdotusp.b	t6,a5,a0
1c00825e:	a8b79f57          	pv.sdotusp.b	t5,a5,a1
1c008262:	a8c79ed7          	pv.sdotusp.b	t4,a5,a2
1c008266:	a8d79e57          	pv.sdotusp.b	t3,a5,a3
1c00826a:	6c9b2023          	sw	s1,1728(s6)
1c00826e:	6c1b2223          	sw	ra,1732(s6)
1c008272:	6c7b2423          	sw	t2,1736(s6)
1c008276:	6c5b2623          	sw	t0,1740(s6)
1c00827a:	6dfb2823          	sw	t6,1744(s6)
1c00827e:	6deb2a23          	sw	t5,1748(s6)
1c008282:	6ddb2c23          	sw	t4,1752(s6)
1c008286:	6dcb2e23          	sw	t3,1756(s6)
1c00828a:	4b2010ef          	jal	ra,1c00973c <synch_barrier>
1c00828e:	780027f3          	csrr	a5,pccr0
1c008292:	fc15                	bnez	s0,1c0081ce <cluster_entry+0x32>
1c008294:	deadd7b7          	lui	a5,0xdeadd
1c008298:	aca78793          	addi	a5,a5,-1334 # deadcaca <pulp__FC+0xdeadcacb>
1c00829c:	100004b7          	lui	s1,0x10000
1c0082a0:	c09c                	sw	a5,0(s1)
1c0082a2:	49a010ef          	jal	ra,1c00973c <synch_barrier>
1c0082a6:	10000537          	lui	a0,0x10000
1c0082aa:	00450513          	addi	a0,a0,4 # 10000004 <W8_su>
1c0082ae:	6e050593          	addi	a1,a0,1760
1c0082b2:	4621                	li	a2,8
1c0082b4:	6c050513          	addi	a0,a0,1728
1c0082b8:	3559                	jal	1c00813e <checkInt>
1c0082ba:	842a                	mv	s0,a0
1c0082bc:	85aa                	mv	a1,a0
1c0082be:	1c000537          	lui	a0,0x1c000
1c0082c2:	04c50513          	addi	a0,a0,76 # 1c00004c <__DTOR_END__+0x30>
1c0082c6:	2c49                	jal	1c008558 <printf>
1c0082c8:	c401                	beqz	s0,1c0082d0 <cluster_entry+0x134>
1c0082ca:	4791                	li	a5,4
1c0082cc:	c09c                	sw	a5,0(s1)
1c0082ce:	b719                	j	1c0081d4 <cluster_entry+0x38>
1c0082d0:	4789                	li	a5,2
1c0082d2:	c09c                	sw	a5,0(s1)
1c0082d4:	b701                	j	1c0081d4 <cluster_entry+0x38>

1c0082d6 <run_test>:
1c0082d6:	102007b7          	lui	a5,0x10200
1c0082da:	07e1                	addi	a5,a5,24
1c0082dc:	4398                	lw	a4,0(a5)
1c0082de:	1141                	addi	sp,sp,-16
1c0082e0:	c0b74733          	p.bset	a4,a4,0,11
1c0082e4:	c398                	sw	a4,0(a5)
1c0082e6:	4398                	lw	a4,0(a5)
1c0082e8:	c0874733          	p.bset	a4,a4,0,8
1c0082ec:	c398                	sw	a4,0(a5)
1c0082ee:	4398                	lw	a4,0(a5)
1c0082f0:	ce073733          	p.bclr	a4,a4,7,0
1c0082f4:	c398                	sw	a4,0(a5)
1c0082f6:	4398                	lw	a4,0(a5)
1c0082f8:	c0374733          	p.bset	a4,a4,0,3
1c0082fc:	c398                	sw	a4,0(a5)
1c0082fe:	102017b7          	lui	a5,0x10201
1c008302:	0007aa23          	sw	zero,20(a5) # 10201014 <__l2_shared_end+0x20090c>
1c008306:	c402                	sw	zero,8(sp)
1c008308:	4722                	lw	a4,8(sp)
1c00830a:	47a5                	li	a5,9
1c00830c:	00e7c963          	blt	a5,a4,1c00831e <run_test+0x48>
1c008310:	4725                	li	a4,9
1c008312:	47a2                	lw	a5,8(sp)
1c008314:	0785                	addi	a5,a5,1
1c008316:	c43e                	sw	a5,8(sp)
1c008318:	47a2                	lw	a5,8(sp)
1c00831a:	fef75ce3          	ble	a5,a4,1c008312 <run_test+0x3c>
1c00831e:	102016b7          	lui	a3,0x10201
1c008322:	0006aa23          	sw	zero,20(a3) # 10201014 <__l2_shared_end+0x20090c>
1c008326:	6741                	lui	a4,0x10
1c008328:	02170613          	addi	a2,a4,33 # 10021 <__l1_heap_size+0x729>
1c00832c:	02068793          	addi	a5,a3,32
1c008330:	02c7ae23          	sw	a2,60(a5)
1c008334:	00170613          	addi	a2,a4,1
1c008338:	04c7a023          	sw	a2,64(a5)
1c00833c:	04c7a223          	sw	a2,68(a5)
1c008340:	0709                	addi	a4,a4,2
1c008342:	04e7a423          	sw	a4,72(a5)
1c008346:	04c7a623          	sw	a2,76(a5)
1c00834a:	60000713          	li	a4,1536
1c00834e:	04e7ae23          	sw	a4,92(a5)
1c008352:	0006a0a3          	sw	zero,1(a3)
1c008356:	0006a023          	sw	zero,0(a3)
1c00835a:	c602                	sw	zero,12(sp)
1c00835c:	4732                	lw	a4,12(sp)
1c00835e:	47a5                	li	a5,9
1c008360:	00e7c963          	blt	a5,a4,1c008372 <run_test+0x9c>
1c008364:	4725                	li	a4,9
1c008366:	47b2                	lw	a5,12(sp)
1c008368:	0785                	addi	a5,a5,1
1c00836a:	c63e                	sw	a5,12(sp)
1c00836c:	47b2                	lw	a5,12(sp)
1c00836e:	fef75ce3          	ble	a5,a4,1c008366 <run_test+0x90>
1c008372:	102017b7          	lui	a5,0x10201
1c008376:	20000713          	li	a4,512
1c00837a:	02078793          	addi	a5,a5,32 # 10201020 <__l2_shared_end+0x200918>
1c00837e:	04e7ae23          	sw	a4,92(a5)
1c008382:	0141                	addi	sp,sp,16
1c008384:	8082                	ret

1c008386 <main>:
1c008386:	1141                	addi	sp,sp,-16
1c008388:	f14027f3          	csrr	a5,mhartid
1c00838c:	c606                	sw	ra,12(sp)
1c00838e:	ca5797b3          	p.extractu	a5,a5,5,5
1c008392:	c391                	beqz	a5,1c008396 <main+0x10>
1c008394:	3789                	jal	1c0082d6 <run_test>
1c008396:	1c0085b7          	lui	a1,0x1c008
1c00839a:	19c58593          	addi	a1,a1,412 # 1c00819c <cluster_entry>
1c00839e:	4501                	li	a0,0
1c0083a0:	2d6010ef          	jal	ra,1c009676 <cluster_start>
1c0083a4:	4501                	li	a0,0
1c0083a6:	380010ef          	jal	ra,1c009726 <cluster_wait>
1c0083aa:	40b2                	lw	ra,12(sp)
1c0083ac:	4501                	li	a0,0
1c0083ae:	0141                	addi	sp,sp,16
1c0083b0:	8082                	ret

1c0083b2 <pos_fll_init>:
1c0083b2:	08152063          	p.beqimm	a0,1,1c008432 <pos_fll_init+0x80>
1c0083b6:	04252a63          	p.beqimm	a0,2,1c00840a <pos_fll_init+0x58>
1c0083ba:	c505                	beqz	a0,1c0083e2 <pos_fll_init+0x30>
1c0083bc:	4701                	li	a4,0
1c0083be:	00470793          	addi	a5,a4,4
1c0083c2:	05300613          	li	a2,83
1c0083c6:	00c70693          	addi	a3,a4,12
1c0083ca:	c390                	sw	a2,0(a5)
1c0083cc:	020c17b7          	lui	a5,0x20c1
1c0083d0:	0721                	addi	a4,a4,8
1c0083d2:	0006a023          	sw	zero,0(a3)
1c0083d6:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b1ee2>
1c0083da:	c31c                	sw	a5,0(a4)
1c0083dc:	05f68537          	lui	a0,0x5f68
1c0083e0:	8082                	ret
1c0083e2:	1a1007b7          	lui	a5,0x1a100
1c0083e6:	00878713          	addi	a4,a5,8 # 1a100008 <__l2_shared_end+0xa0ff900>
1c0083ea:	00c78693          	addi	a3,a5,12
1c0083ee:	05300613          	li	a2,83
1c0083f2:	0791                	addi	a5,a5,4
1c0083f4:	c390                	sw	a2,0(a5)
1c0083f6:	020c17b7          	lui	a5,0x20c1
1c0083fa:	0006a023          	sw	zero,0(a3)
1c0083fe:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b1ee2>
1c008402:	c31c                	sw	a5,0(a4)
1c008404:	05f68537          	lui	a0,0x5f68
1c008408:	8082                	ret
1c00840a:	1a1007b7          	lui	a5,0x1a100
1c00840e:	01878713          	addi	a4,a5,24 # 1a100018 <__l2_shared_end+0xa0ff910>
1c008412:	01c78693          	addi	a3,a5,28
1c008416:	05300613          	li	a2,83
1c00841a:	07d1                	addi	a5,a5,20
1c00841c:	c390                	sw	a2,0(a5)
1c00841e:	020c17b7          	lui	a5,0x20c1
1c008422:	0006a023          	sw	zero,0(a3)
1c008426:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b1ee2>
1c00842a:	c31c                	sw	a5,0(a4)
1c00842c:	05f68537          	lui	a0,0x5f68
1c008430:	8082                	ret
1c008432:	1a1007b7          	lui	a5,0x1a100
1c008436:	02878713          	addi	a4,a5,40 # 1a100028 <__l2_shared_end+0xa0ff920>
1c00843a:	02c78693          	addi	a3,a5,44
1c00843e:	05300613          	li	a2,83
1c008442:	02478793          	addi	a5,a5,36
1c008446:	c390                	sw	a2,0(a5)
1c008448:	020c17b7          	lui	a5,0x20c1
1c00844c:	0006a023          	sw	zero,0(a3)
1c008450:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b1ee2>
1c008454:	c31c                	sw	a5,0(a4)
1c008456:	05f68537          	lui	a0,0x5f68
1c00845a:	8082                	ret

1c00845c <pos_soc_init>:
1c00845c:	8082                	ret

1c00845e <pos_wait_forever>:
1c00845e:	f14027f3          	csrr	a5,mhartid
1c008462:	477d                	li	a4,31
1c008464:	ca5797b3          	p.extractu	a5,a5,5,5
1c008468:	00e78963          	beq	a5,a4,1c00847a <pos_wait_forever+0x1c>
1c00846c:	002047b7          	lui	a5,0x204
1c008470:	577d                	li	a4,-1
1c008472:	c3d8                	sw	a4,4(a5)
1c008474:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f4740>
1c008478:	a001                	j	1c008478 <pos_wait_forever+0x1a>
1c00847a:	1a10a7b7          	lui	a5,0x1a10a
1c00847e:	577d                	li	a4,-1
1c008480:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa109100>
1c008484:	10500073          	wfi
1c008488:	10500073          	wfi
1c00848c:	bfe5                	j	1c008484 <pos_wait_forever+0x26>

1c00848e <memcpy>:
1c00848e:	00a5e7b3          	or	a5,a1,a0
1c008492:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008496:	cf81                	beqz	a5,1c0084ae <memcpy+0x20>
1c008498:	87aa                	mv	a5,a0
1c00849a:	ce0d                	beqz	a2,1c0084d4 <memcpy+0x46>
1c00849c:	006640fb          	lp.setup	x1,a2,1c0084a8 <memcpy+0x1a>
1c0084a0:	0005c703          	lbu	a4,0(a1)
1c0084a4:	0785                	addi	a5,a5,1
1c0084a6:	0585                	addi	a1,a1,1
1c0084a8:	fee78fa3          	sb	a4,-1(a5)
1c0084ac:	8082                	ret
1c0084ae:	fa2637b3          	p.bclr	a5,a2,29,2
1c0084b2:	ef99                	bnez	a5,1c0084d0 <memcpy+0x42>
1c0084b4:	de65                	beqz	a2,1c0084ac <memcpy+0x1e>
1c0084b6:	1671                	addi	a2,a2,-4
1c0084b8:	00265793          	srli	a5,a2,0x2
1c0084bc:	872a                	mv	a4,a0
1c0084be:	0785                	addi	a5,a5,1
1c0084c0:	0057c0fb          	lp.setup	x1,a5,1c0084ca <memcpy+0x3c>
1c0084c4:	4194                	lw	a3,0(a1)
1c0084c6:	0711                	addi	a4,a4,4
1c0084c8:	0591                	addi	a1,a1,4
1c0084ca:	fed72e23          	sw	a3,-4(a4)
1c0084ce:	8082                	ret
1c0084d0:	87aa                	mv	a5,a0
1c0084d2:	b7e9                	j	1c00849c <memcpy+0xe>
1c0084d4:	8082                	ret

1c0084d6 <memmove>:
1c0084d6:	40b507b3          	sub	a5,a0,a1
1c0084da:	00c7fd63          	bleu	a2,a5,1c0084f4 <memmove+0x1e>
1c0084de:	87b2                	mv	a5,a2
1c0084e0:	0077c0fb          	lp.setup	x1,a5,1c0084ee <memmove+0x18>
1c0084e4:	167d                	addi	a2,a2,-1
1c0084e6:	00c58733          	add	a4,a1,a2
1c0084ea:	00074703          	lbu	a4,0(a4)
1c0084ee:	00e54623          	p.sb	a4,a2(a0)
1c0084f2:	8082                	ret
1c0084f4:	87aa                	mv	a5,a0
1c0084f6:	ca01                	beqz	a2,1c008506 <memmove+0x30>
1c0084f8:	004640fb          	lp.setup	x1,a2,1c008500 <memmove+0x2a>
1c0084fc:	0015c70b          	p.lbu	a4,1(a1!)
1c008500:	00e780ab          	p.sb	a4,1(a5!)
1c008504:	8082                	ret
1c008506:	8082                	ret

1c008508 <strchr>:
1c008508:	00054783          	lbu	a5,0(a0) # 5f68000 <__l1_heap_size+0x5f58708>
1c00850c:	0ff5f593          	andi	a1,a1,255
1c008510:	00b78863          	beq	a5,a1,1c008520 <strchr+0x18>
1c008514:	c799                	beqz	a5,1c008522 <strchr+0x1a>
1c008516:	0505                	addi	a0,a0,1
1c008518:	00054783          	lbu	a5,0(a0)
1c00851c:	feb79ce3          	bne	a5,a1,1c008514 <strchr+0xc>
1c008520:	8082                	ret
1c008522:	0015b593          	seqz	a1,a1
1c008526:	40b005b3          	neg	a1,a1
1c00852a:	8d6d                	and	a0,a0,a1
1c00852c:	8082                	ret

1c00852e <pos_libc_fputc_locked>:
1c00852e:	1a1047b7          	lui	a5,0x1a104
1c008532:	0ff57513          	andi	a0,a0,255
1c008536:	d388                	sw	a0,32(a5)
1c008538:	4501                	li	a0,0
1c00853a:	8082                	ret

1c00853c <pos_libc_prf_locked>:
1c00853c:	a87d                	j	1c0085fa <pos_libc_prf>

1c00853e <exit>:
1c00853e:	1141                	addi	sp,sp,-16
1c008540:	c606                	sw	ra,12(sp)
1c008542:	1a1047b7          	lui	a5,0x1a104
1c008546:	c1f54533          	p.bset	a0,a0,0,31
1c00854a:	0aa7a023          	sw	a0,160(a5) # 1a1040a0 <__l2_shared_end+0xa103998>
1c00854e:	3f01                	jal	1c00845e <pos_wait_forever>

1c008550 <pos_io_start>:
1c008550:	4501                	li	a0,0
1c008552:	8082                	ret

1c008554 <pos_io_stop>:
1c008554:	4501                	li	a0,0
1c008556:	8082                	ret

1c008558 <printf>:
1c008558:	7139                	addi	sp,sp,-64
1c00855a:	02410313          	addi	t1,sp,36
1c00855e:	d432                	sw	a2,40(sp)
1c008560:	862a                	mv	a2,a0
1c008562:	1c008537          	lui	a0,0x1c008
1c008566:	d22e                	sw	a1,36(sp)
1c008568:	d636                	sw	a3,44(sp)
1c00856a:	4589                	li	a1,2
1c00856c:	869a                	mv	a3,t1
1c00856e:	52e50513          	addi	a0,a0,1326 # 1c00852e <pos_libc_fputc_locked>
1c008572:	ce06                	sw	ra,28(sp)
1c008574:	d83a                	sw	a4,48(sp)
1c008576:	da3e                	sw	a5,52(sp)
1c008578:	dc42                	sw	a6,56(sp)
1c00857a:	de46                	sw	a7,60(sp)
1c00857c:	c61a                	sw	t1,12(sp)
1c00857e:	3f7d                	jal	1c00853c <pos_libc_prf_locked>
1c008580:	40f2                	lw	ra,28(sp)
1c008582:	6121                	addi	sp,sp,64
1c008584:	8082                	ret

1c008586 <pos_libc_to_x>:
1c008586:	872a                	mv	a4,a0
1c008588:	88aa                	mv	a7,a0
1c00858a:	4e25                	li	t3,9
1c00858c:	02c5f333          	remu	t1,a1,a2
1c008590:	4781                	li	a5,0
1c008592:	00188813          	addi	a6,a7,1
1c008596:	0ff37513          	andi	a0,t1,255
1c00859a:	02c5d5b3          	divu	a1,a1,a2
1c00859e:	03050513          	addi	a0,a0,48
1c0085a2:	006e7463          	bleu	t1,t3,1c0085aa <pos_libc_to_x+0x24>
1c0085a6:	02700793          	li	a5,39
1c0085aa:	97aa                	add	a5,a5,a0
1c0085ac:	00f88023          	sb	a5,0(a7)
1c0085b0:	88c2                	mv	a7,a6
1c0085b2:	fde9                	bnez	a1,1c00858c <pos_libc_to_x+0x6>
1c0085b4:	40e80533          	sub	a0,a6,a4
1c0085b8:	02d55f63          	ble	a3,a0,1c0085f6 <pos_libc_to_x+0x70>
1c0085bc:	410707b3          	sub	a5,a4,a6
1c0085c0:	03000613          	li	a2,48
1c0085c4:	96be                	add	a3,a3,a5
1c0085c6:	0086c0fb          	lp.setup	x1,a3,1c0085d6 <pos_libc_to_x+0x50>
1c0085ca:	00180793          	addi	a5,a6,1
1c0085ce:	00c80023          	sb	a2,0(a6)
1c0085d2:	40e78533          	sub	a0,a5,a4
1c0085d6:	883e                	mv	a6,a5
1c0085d8:	fe078fab          	p.sb	zero,-1(a5!)
1c0085dc:	00f77c63          	bleu	a5,a4,1c0085f4 <pos_libc_to_x+0x6e>
1c0085e0:	00074603          	lbu	a2,0(a4)
1c0085e4:	0007c683          	lbu	a3,0(a5)
1c0085e8:	fec78fab          	p.sb	a2,-1(a5!)
1c0085ec:	00d700ab          	p.sb	a3,1(a4!)
1c0085f0:	fef768e3          	bltu	a4,a5,1c0085e0 <pos_libc_to_x+0x5a>
1c0085f4:	8082                	ret
1c0085f6:	87c2                	mv	a5,a6
1c0085f8:	b7c5                	j	1c0085d8 <pos_libc_to_x+0x52>

1c0085fa <pos_libc_prf>:
1c0085fa:	7169                	addi	sp,sp,-304
1c0085fc:	12912223          	sw	s1,292(sp)
1c008600:	13212023          	sw	s2,288(sp)
1c008604:	11312e23          	sw	s3,284(sp)
1c008608:	11412c23          	sw	s4,280(sp)
1c00860c:	11512a23          	sw	s5,276(sp)
1c008610:	dfee                	sw	s11,252(sp)
1c008612:	12112623          	sw	ra,300(sp)
1c008616:	12812423          	sw	s0,296(sp)
1c00861a:	11612823          	sw	s6,272(sp)
1c00861e:	11712623          	sw	s7,268(sp)
1c008622:	11812423          	sw	s8,264(sp)
1c008626:	11912223          	sw	s9,260(sp)
1c00862a:	11a12023          	sw	s10,256(sp)
1c00862e:	84aa                	mv	s1,a0
1c008630:	8a2e                	mv	s4,a1
1c008632:	8db2                	mv	s11,a2
1c008634:	8936                	mv	s2,a3
1c008636:	4a81                	li	s5,0
1c008638:	1c0009b7          	lui	s3,0x1c000
1c00863c:	000dc503          	lbu	a0,0(s11)
1c008640:	0d85                	addi	s11,s11,1
1c008642:	cd11                	beqz	a0,1c00865e <pos_libc_prf+0x64>
1c008644:	02500793          	li	a5,37
1c008648:	04f50763          	beq	a0,a5,1c008696 <pos_libc_prf+0x9c>
1c00864c:	85d2                	mv	a1,s4
1c00864e:	9482                	jalr	s1
1c008650:	15f52c63          	p.beqimm	a0,-1,1c0087a8 <pos_libc_prf+0x1ae>
1c008654:	0a85                	addi	s5,s5,1
1c008656:	000dc503          	lbu	a0,0(s11)
1c00865a:	0d85                	addi	s11,s11,1
1c00865c:	f565                	bnez	a0,1c008644 <pos_libc_prf+0x4a>
1c00865e:	12c12083          	lw	ra,300(sp)
1c008662:	12812403          	lw	s0,296(sp)
1c008666:	8556                	mv	a0,s5
1c008668:	12412483          	lw	s1,292(sp)
1c00866c:	12012903          	lw	s2,288(sp)
1c008670:	11c12983          	lw	s3,284(sp)
1c008674:	11812a03          	lw	s4,280(sp)
1c008678:	11412a83          	lw	s5,276(sp)
1c00867c:	11012b03          	lw	s6,272(sp)
1c008680:	10c12b83          	lw	s7,268(sp)
1c008684:	10812c03          	lw	s8,264(sp)
1c008688:	10412c83          	lw	s9,260(sp)
1c00868c:	10012d03          	lw	s10,256(sp)
1c008690:	5dfe                	lw	s11,252(sp)
1c008692:	6155                	addi	sp,sp,304
1c008694:	8082                	ret
1c008696:	000dcc03          	lbu	s8,0(s11)
1c00869a:	02000313          	li	t1,32
1c00869e:	001d8d13          	addi	s10,s11,1
1c0086a2:	06498513          	addi	a0,s3,100 # 1c000064 <__DTOR_END__+0x48>
1c0086a6:	85e2                	mv	a1,s8
1c0086a8:	c21a                	sw	t1,4(sp)
1c0086aa:	c602                	sw	zero,12(sp)
1c0086ac:	c402                	sw	zero,8(sp)
1c0086ae:	c802                	sw	zero,16(sp)
1c0086b0:	c002                	sw	zero,0(sp)
1c0086b2:	02300413          	li	s0,35
1c0086b6:	02d00b93          	li	s7,45
1c0086ba:	03000c93          	li	s9,48
1c0086be:	8b6a                	mv	s6,s10
1c0086c0:	35a1                	jal	1c008508 <strchr>
1c0086c2:	c905                	beqz	a0,1c0086f2 <pos_libc_prf+0xf8>
1c0086c4:	108c0b63          	beq	s8,s0,1c0087da <pos_libc_prf+0x1e0>
1c0086c8:	0f847263          	bleu	s8,s0,1c0087ac <pos_libc_prf+0x1b2>
1c0086cc:	117c0363          	beq	s8,s7,1c0087d2 <pos_libc_prf+0x1d8>
1c0086d0:	0f9c0c63          	beq	s8,s9,1c0087c8 <pos_libc_prf+0x1ce>
1c0086d4:	02b00593          	li	a1,43
1c0086d8:	0ebc0463          	beq	s8,a1,1c0087c0 <pos_libc_prf+0x1c6>
1c0086dc:	8dea                	mv	s11,s10
1c0086de:	000dcc03          	lbu	s8,0(s11)
1c0086e2:	001d8d13          	addi	s10,s11,1
1c0086e6:	06498513          	addi	a0,s3,100
1c0086ea:	85e2                	mv	a1,s8
1c0086ec:	8b6a                	mv	s6,s10
1c0086ee:	3d29                	jal	1c008508 <strchr>
1c0086f0:	f971                	bnez	a0,1c0086c4 <pos_libc_prf+0xca>
1c0086f2:	02a00613          	li	a2,42
1c0086f6:	10cc0863          	beq	s8,a2,1c008806 <pos_libc_prf+0x20c>
1c0086fa:	fd0c0613          	addi	a2,s8,-48
1c0086fe:	45a5                	li	a1,9
1c008700:	4401                	li	s0,0
1c008702:	0ec5f263          	bleu	a2,a1,1c0087e6 <pos_libc_prf+0x1ec>
1c008706:	02e00713          	li	a4,46
1c00870a:	5bfd                	li	s7,-1
1c00870c:	14ec0563          	beq	s8,a4,1c008856 <pos_libc_prf+0x25c>
1c008710:	1c000537          	lui	a0,0x1c000
1c008714:	85e2                	mv	a1,s8
1c008716:	06c50513          	addi	a0,a0,108 # 1c00006c <__DTOR_END__+0x50>
1c00871a:	33fd                	jal	1c008508 <strchr>
1c00871c:	8dda                	mv	s11,s6
1c00871e:	c509                	beqz	a0,1c008728 <pos_libc_prf+0x12e>
1c008720:	000b4c03          	lbu	s8,0(s6)
1c008724:	001b0d93          	addi	s11,s6,1
1c008728:	06700713          	li	a4,103
1c00872c:	0f875b63          	ble	s8,a4,1c008822 <pos_libc_prf+0x228>
1c008730:	07000713          	li	a4,112
1c008734:	60ec0863          	beq	s8,a4,1c008d44 <pos_libc_prf+0x74a>
1c008738:	15875363          	ble	s8,a4,1c00887e <pos_libc_prf+0x284>
1c00873c:	07500713          	li	a4,117
1c008740:	5cec0963          	beq	s8,a4,1c008d12 <pos_libc_prf+0x718>
1c008744:	07800713          	li	a4,120
1c008748:	4cec0b63          	beq	s8,a4,1c008c1e <pos_libc_prf+0x624>
1c00874c:	07300713          	li	a4,115
1c008750:	62ec1563          	bne	s8,a4,1c008d7a <pos_libc_prf+0x780>
1c008754:	00092583          	lw	a1,0(s2)
1c008758:	00490b13          	addi	s6,s2,4
1c00875c:	4d01                	li	s10,0
1c00875e:	0c8450fb          	lp.setupi	x1,200,1c00876e <pos_libc_prf+0x174>
1c008762:	01a58733          	add	a4,a1,s10
1c008766:	00074703          	lbu	a4,0(a4)
1c00876a:	60070e63          	beqz	a4,1c008d86 <pos_libc_prf+0x78c>
1c00876e:	0d05                	addi	s10,s10,1
1c008770:	000bc763          	bltz	s7,1c00877e <pos_libc_prf+0x184>
1c008774:	057d4d33          	p.min	s10,s10,s7
1c008778:	895a                	mv	s2,s6
1c00877a:	ec0d01e3          	beqz	s10,1c00863c <pos_libc_prf+0x42>
1c00877e:	866a                	mv	a2,s10
1c008780:	1048                	addi	a0,sp,36
1c008782:	3331                	jal	1c00848e <memcpy>
1c008784:	895a                	mv	s2,s6
1c008786:	4e8d4663          	blt	s10,s0,1c008c72 <pos_libc_prf+0x678>
1c00878a:	846a                	mv	s0,s10
1c00878c:	02410b13          	addi	s6,sp,36
1c008790:	a029                	j	1c00879a <pos_libc_prf+0x1a0>
1c008792:	0b05                	addi	s6,s6,1
1c008794:	0a85                	addi	s5,s5,1
1c008796:	ea0403e3          	beqz	s0,1c00863c <pos_libc_prf+0x42>
1c00879a:	000b4503          	lbu	a0,0(s6)
1c00879e:	85d2                	mv	a1,s4
1c0087a0:	147d                	addi	s0,s0,-1
1c0087a2:	9482                	jalr	s1
1c0087a4:	fff537e3          	p.bneimm	a0,-1,1c008792 <pos_libc_prf+0x198>
1c0087a8:	5afd                	li	s5,-1
1c0087aa:	bd55                	j	1c00865e <pos_libc_prf+0x64>
1c0087ac:	ea0c09e3          	beqz	s8,1c00865e <pos_libc_prf+0x64>
1c0087b0:	02000313          	li	t1,32
1c0087b4:	f26c14e3          	bne	s8,t1,1c0086dc <pos_libc_prf+0xe2>
1c0087b8:	4685                	li	a3,1
1c0087ba:	c636                	sw	a3,12(sp)
1c0087bc:	8dea                	mv	s11,s10
1c0087be:	b705                	j	1c0086de <pos_libc_prf+0xe4>
1c0087c0:	4605                	li	a2,1
1c0087c2:	c432                	sw	a2,8(sp)
1c0087c4:	8dea                	mv	s11,s10
1c0087c6:	bf21                	j	1c0086de <pos_libc_prf+0xe4>
1c0087c8:	03000793          	li	a5,48
1c0087cc:	c23e                	sw	a5,4(sp)
1c0087ce:	8dea                	mv	s11,s10
1c0087d0:	b739                	j	1c0086de <pos_libc_prf+0xe4>
1c0087d2:	4805                	li	a6,1
1c0087d4:	c842                	sw	a6,16(sp)
1c0087d6:	8dea                	mv	s11,s10
1c0087d8:	b719                	j	1c0086de <pos_libc_prf+0xe4>
1c0087da:	4705                	li	a4,1
1c0087dc:	c03a                	sw	a4,0(sp)
1c0087de:	8dea                	mv	s11,s10
1c0087e0:	bdfd                	j	1c0086de <pos_libc_prf+0xe4>
1c0087e2:	8dea                	mv	s11,s10
1c0087e4:	0d05                	addi	s10,s10,1
1c0087e6:	00241793          	slli	a5,s0,0x2
1c0087ea:	97a2                	add	a5,a5,s0
1c0087ec:	0786                	slli	a5,a5,0x1
1c0087ee:	97e2                	add	a5,a5,s8
1c0087f0:	000d4c03          	lbu	s8,0(s10)
1c0087f4:	fd078413          	addi	s0,a5,-48
1c0087f8:	fd0c0793          	addi	a5,s8,-48
1c0087fc:	fef5f3e3          	bleu	a5,a1,1c0087e2 <pos_libc_prf+0x1e8>
1c008800:	002d8b13          	addi	s6,s11,2
1c008804:	a811                	j	1c008818 <pos_libc_prf+0x21e>
1c008806:	00092403          	lw	s0,0(s2)
1c00880a:	0911                	addi	s2,s2,4
1c00880c:	0e044263          	bltz	s0,1c0088f0 <pos_libc_prf+0x2f6>
1c008810:	000d4c03          	lbu	s8,0(s10)
1c008814:	002d8b13          	addi	s6,s11,2
1c008818:	0c800713          	li	a4,200
1c00881c:	04e45433          	p.minu	s0,s0,a4
1c008820:	b5dd                	j	1c008706 <pos_libc_prf+0x10c>
1c008822:	06500713          	li	a4,101
1c008826:	0cec5a63          	ble	a4,s8,1c0088fa <pos_libc_prf+0x300>
1c00882a:	04700713          	li	a4,71
1c00882e:	3d874e63          	blt	a4,s8,1c008c0a <pos_libc_prf+0x610>
1c008832:	04500713          	li	a4,69
1c008836:	0cec5263          	ble	a4,s8,1c0088fa <pos_libc_prf+0x300>
1c00883a:	e20c02e3          	beqz	s8,1c00865e <pos_libc_prf+0x64>
1c00883e:	02500713          	li	a4,37
1c008842:	52ec1c63          	bne	s8,a4,1c008d7a <pos_libc_prf+0x780>
1c008846:	85d2                	mv	a1,s4
1c008848:	02500513          	li	a0,37
1c00884c:	9482                	jalr	s1
1c00884e:	f5f52de3          	p.beqimm	a0,-1,1c0087a8 <pos_libc_prf+0x1ae>
1c008852:	0a85                	addi	s5,s5,1
1c008854:	b509                	j	1c008656 <pos_libc_prf+0x5c>
1c008856:	000b4783          	lbu	a5,0(s6)
1c00885a:	02a00713          	li	a4,42
1c00885e:	001b0693          	addi	a3,s6,1
1c008862:	04e79c63          	bne	a5,a4,1c0088ba <pos_libc_prf+0x2c0>
1c008866:	00092b83          	lw	s7,0(s2)
1c00886a:	001b4c03          	lbu	s8,1(s6)
1c00886e:	0911                	addi	s2,s2,4
1c008870:	0b09                	addi	s6,s6,2
1c008872:	0c800713          	li	a4,200
1c008876:	e9775de3          	ble	s7,a4,1c008710 <pos_libc_prf+0x116>
1c00887a:	5bfd                	li	s7,-1
1c00887c:	bd51                	j	1c008710 <pos_libc_prf+0x116>
1c00887e:	06e00713          	li	a4,110
1c008882:	4aec0b63          	beq	s8,a4,1c008d38 <pos_libc_prf+0x73e>
1c008886:	43875263          	ble	s8,a4,1c008caa <pos_libc_prf+0x6b0>
1c00888a:	4802                	lw	a6,0(sp)
1c00888c:	00490b13          	addi	s6,s2,4
1c008890:	00092583          	lw	a1,0(s2)
1c008894:	0e0803e3          	beqz	a6,1c00917a <pos_libc_prf+0xb80>
1c008898:	03000793          	li	a5,48
1c00889c:	02f10223          	sb	a5,36(sp)
1c0088a0:	0a0593e3          	bnez	a1,1c009146 <pos_libc_prf+0xb4c>
1c0088a4:	020102a3          	sb	zero,37(sp)
1c0088a8:	895a                	mv	s2,s6
1c0088aa:	8d42                	mv	s10,a6
1c0088ac:	edfbade3          	p.beqimm	s7,-1,1c008786 <pos_libc_prf+0x18c>
1c0088b0:	02000813          	li	a6,32
1c0088b4:	4d02                	lw	s10,0(sp)
1c0088b6:	c242                	sw	a6,4(sp)
1c0088b8:	b5f9                	j	1c008786 <pos_libc_prf+0x18c>
1c0088ba:	fd078593          	addi	a1,a5,-48
1c0088be:	4725                	li	a4,9
1c0088c0:	8c3e                	mv	s8,a5
1c0088c2:	4b81                	li	s7,0
1c0088c4:	4625                	li	a2,9
1c0088c6:	00b77663          	bleu	a1,a4,1c0088d2 <pos_libc_prf+0x2d8>
1c0088ca:	0250006f          	j	1c0090ee <pos_libc_prf+0xaf4>
1c0088ce:	8b36                	mv	s6,a3
1c0088d0:	0685                	addi	a3,a3,1
1c0088d2:	002b9793          	slli	a5,s7,0x2
1c0088d6:	97de                	add	a5,a5,s7
1c0088d8:	0786                	slli	a5,a5,0x1
1c0088da:	97e2                	add	a5,a5,s8
1c0088dc:	0006cc03          	lbu	s8,0(a3)
1c0088e0:	fd078b93          	addi	s7,a5,-48
1c0088e4:	fd0c0793          	addi	a5,s8,-48
1c0088e8:	fef673e3          	bleu	a5,a2,1c0088ce <pos_libc_prf+0x2d4>
1c0088ec:	0b09                	addi	s6,s6,2
1c0088ee:	b751                	j	1c008872 <pos_libc_prf+0x278>
1c0088f0:	4705                	li	a4,1
1c0088f2:	40800433          	neg	s0,s0
1c0088f6:	c83a                	sw	a4,16(sp)
1c0088f8:	bf21                	j	1c008810 <pos_libc_prf+0x216>
1c0088fa:	091d                	addi	s2,s2,7
1c0088fc:	c4093933          	p.bclr	s2,s2,2,0
1c008900:	00092603          	lw	a2,0(s2)
1c008904:	00492583          	lw	a1,4(s2)
1c008908:	7ff00693          	li	a3,2047
1c00890c:	01565513          	srli	a0,a2,0x15
1c008910:	0145d313          	srli	t1,a1,0x14
1c008914:	00b59713          	slli	a4,a1,0xb
1c008918:	8f49                	or	a4,a4,a0
1c00891a:	e8b33333          	p.bclr	t1,t1,20,11
1c00891e:	0921                	addi	s2,s2,8
1c008920:	062e                	slli	a2,a2,0xb
1c008922:	c1f73733          	p.bclr	a4,a4,0,31
1c008926:	04d30ce3          	beq	t1,a3,1c00917e <pos_libc_prf+0xb84>
1c00892a:	04600693          	li	a3,70
1c00892e:	00dc1463          	bne	s8,a3,1c008936 <pos_libc_prf+0x33c>
1c008932:	06600c13          	li	s8,102
1c008936:	00c366b3          	or	a3,t1,a2
1c00893a:	8ed9                	or	a3,a3,a4
1c00893c:	7e068563          	beqz	a3,1c009126 <pos_libc_prf+0xb2c>
1c008940:	c0230313          	addi	t1,t1,-1022
1c008944:	c1f74733          	p.bset	a4,a4,0,31
1c008948:	2005cbe3          	bltz	a1,1c00935e <pos_libc_prf+0xd64>
1c00894c:	47a2                	lw	a5,8(sp)
1c00894e:	1e078ae3          	beqz	a5,1c009342 <pos_libc_prf+0xd48>
1c008952:	02b00693          	li	a3,43
1c008956:	02d10223          	sb	a3,36(sp)
1c00895a:	02510b13          	addi	s6,sp,37
1c00895e:	02410c93          	addi	s9,sp,36
1c008962:	56f9                	li	a3,-2
1c008964:	4381                	li	t2,0
1c008966:	06d35763          	ble	a3,t1,1c0089d4 <pos_libc_prf+0x3da>
1c00896a:	33333537          	lui	a0,0x33333
1c00896e:	80000837          	lui	a6,0x80000
1c008972:	33250513          	addi	a0,a0,818 # 33333332 <__cluster_text_end+0x17323332>
1c008976:	fff84813          	not	a6,a6
1c00897a:	58f9                	li	a7,-2
1c00897c:	a011                	j	1c008980 <pos_libc_prf+0x386>
1c00897e:	833e                	mv	t1,a5
1c008980:	01f71593          	slli	a1,a4,0x1f
1c008984:	00165693          	srli	a3,a2,0x1
1c008988:	fc1637b3          	p.bclr	a5,a2,30,1
1c00898c:	8ecd                	or	a3,a3,a1
1c00898e:	00d78633          	add	a2,a5,a3
1c008992:	00f637b3          	sltu	a5,a2,a5
1c008996:	8305                	srli	a4,a4,0x1
1c008998:	973e                	add	a4,a4,a5
1c00899a:	00130793          	addi	a5,t1,1
1c00899e:	fee560e3          	bltu	a0,a4,1c00897e <pos_libc_prf+0x384>
1c0089a2:	00261593          	slli	a1,a2,0x2
1c0089a6:	01e65e13          	srli	t3,a2,0x1e
1c0089aa:	00271693          	slli	a3,a4,0x2
1c0089ae:	962e                	add	a2,a2,a1
1c0089b0:	00de66b3          	or	a3,t3,a3
1c0089b4:	9736                	add	a4,a4,a3
1c0089b6:	00b635b3          	sltu	a1,a2,a1
1c0089ba:	972e                	add	a4,a4,a1
1c0089bc:	01f65693          	srli	a3,a2,0x1f
1c0089c0:	0309                	addi	t1,t1,2
1c0089c2:	13fd                	addi	t2,t2,-1
1c0089c4:	01071663          	bne	a4,a6,1c0089d0 <pos_libc_prf+0x3d6>
1c0089c8:	0606                	slli	a2,a2,0x1
1c0089ca:	fc16c733          	p.bset	a4,a3,30,1
1c0089ce:	833e                	mv	t1,a5
1c0089d0:	fb1348e3          	blt	t1,a7,1c008980 <pos_libc_prf+0x386>
1c0089d4:	0e605763          	blez	t1,1c008ac2 <pos_libc_prf+0x4c8>
1c0089d8:	80000f37          	lui	t5,0x80000
1c0089dc:	4d15                	li	s10,5
1c0089de:	ffff4f13          	not	t5,t5
1c0089e2:	00260513          	addi	a0,a2,2
1c0089e6:	00c536b3          	sltu	a3,a0,a2
1c0089ea:	00e688b3          	add	a7,a3,a4
1c0089ee:	02000793          	li	a5,32
1c0089f2:	00189593          	slli	a1,a7,0x1
1c0089f6:	fff7ce93          	not	t4,a5
1c0089fa:	00f556b3          	srl	a3,a0,a5
1c0089fe:	01d595b3          	sll	a1,a1,t4
1c008a02:	0207fe13          	andi	t3,a5,32
1c008a06:	4601                	li	a2,0
1c008a08:	4701                	li	a4,0
1c008a0a:	4801                	li	a6,0
1c008a0c:	8ecd                	or	a3,a3,a1
1c008a0e:	000e0463          	beqz	t3,1c008a16 <pos_libc_prf+0x41c>
1c008a12:	00f8d6b3          	srl	a3,a7,a5
1c008a16:	fff7ce93          	not	t4,a5
1c008a1a:	03a6d6b3          	divu	a3,a3,s10
1c008a1e:	060e0d63          	beqz	t3,1c008a98 <pos_libc_prf+0x49e>
1c008a22:	4581                	li	a1,0
1c008a24:	00f69eb3          	sll	t4,a3,a5
1c008a28:	00259693          	slli	a3,a1,0x2
1c008a2c:	01e5df93          	srli	t6,a1,0x1e
1c008a30:	002e9793          	slli	a5,t4,0x2
1c008a34:	00b68e33          	add	t3,a3,a1
1c008a38:	00ffe7b3          	or	a5,t6,a5
1c008a3c:	95b2                	add	a1,a1,a2
1c008a3e:	97f6                	add	a5,a5,t4
1c008a40:	00de36b3          	sltu	a3,t3,a3
1c008a44:	00c5bfb3          	sltu	t6,a1,a2
1c008a48:	1c001637          	lui	a2,0x1c001
1c008a4c:	96be                	add	a3,a3,a5
1c008a4e:	88060613          	addi	a2,a2,-1920 # 1c000880 <stack>
1c008a52:	01d707b3          	add	a5,a4,t4
1c008a56:	41c50e33          	sub	t3,a0,t3
1c008a5a:	0805                	addi	a6,a6,1
1c008a5c:	010602b3          	add	t0,a2,a6
1c008a60:	01c53eb3          	sltu	t4,a0,t3
1c008a64:	40d886b3          	sub	a3,a7,a3
1c008a68:	862e                	mv	a2,a1
1c008a6a:	00ff8733          	add	a4,t6,a5
1c008a6e:	02382c63          	p.beqimm	a6,3,1c008aa6 <pos_libc_prf+0x4ac>
1c008a72:	0002c783          	lbu	a5,0(t0)
1c008a76:	41d688b3          	sub	a7,a3,t4
1c008a7a:	8572                	mv	a0,t3
1c008a7c:	00189593          	slli	a1,a7,0x1
1c008a80:	fff7ce93          	not	t4,a5
1c008a84:	00f556b3          	srl	a3,a0,a5
1c008a88:	01d595b3          	sll	a1,a1,t4
1c008a8c:	0207fe13          	andi	t3,a5,32
1c008a90:	8ecd                	or	a3,a3,a1
1c008a92:	f80e02e3          	beqz	t3,1c008a16 <pos_libc_prf+0x41c>
1c008a96:	bfb5                	j	1c008a12 <pos_libc_prf+0x418>
1c008a98:	0016de13          	srli	t3,a3,0x1
1c008a9c:	00f695b3          	sll	a1,a3,a5
1c008aa0:	01de5eb3          	srl	t4,t3,t4
1c008aa4:	b751                	j	1c008a28 <pos_libc_prf+0x42e>
1c008aa6:	137d                	addi	t1,t1,-1
1c008aa8:	0385                	addi	t2,t2,1
1c008aaa:	00ef6a63          	bltu	t5,a4,1c008abe <pos_libc_prf+0x4c4>
1c008aae:	01f65793          	srli	a5,a2,0x1f
1c008ab2:	0706                	slli	a4,a4,0x1
1c008ab4:	8f5d                	or	a4,a4,a5
1c008ab6:	0606                	slli	a2,a2,0x1
1c008ab8:	137d                	addi	t1,t1,-1
1c008aba:	feef7ae3          	bleu	a4,t5,1c008aae <pos_libc_prf+0x4b4>
1c008abe:	f26042e3          	bgtz	t1,1c0089e2 <pos_libc_prf+0x3e8>
1c008ac2:	4691                	li	a3,4
1c008ac4:	40668333          	sub	t1,a3,t1
1c008ac8:	011340fb          	lp.setup	x1,t1,1c008aea <pos_libc_prf+0x4f0>
1c008acc:	01f71693          	slli	a3,a4,0x1f
1c008ad0:	00165793          	srli	a5,a2,0x1
1c008ad4:	8fd5                	or	a5,a5,a3
1c008ad6:	fc163633          	p.bclr	a2,a2,30,1
1c008ada:	00f60d33          	add	s10,a2,a5
1c008ade:	8305                	srli	a4,a4,0x1
1c008ae0:	00cd3633          	sltu	a2,s10,a2
1c008ae4:	00e607b3          	add	a5,a2,a4
1c008ae8:	873e                	mv	a4,a5
1c008aea:	866a                	mv	a2,s10
1c008aec:	ce3e                	sw	a5,28(sp)
1c008aee:	06700713          	li	a4,103
1c008af2:	6c0bc363          	bltz	s7,1c0091b8 <pos_libc_prf+0xbbe>
1c008af6:	5eec0f63          	beq	s8,a4,1c0090f4 <pos_libc_prf+0xafa>
1c008afa:	04700713          	li	a4,71
1c008afe:	5eec0b63          	beq	s8,a4,1c0090f4 <pos_libc_prf+0xafa>
1c008b02:	06600713          	li	a4,102
1c008b06:	28ec0d63          	beq	s8,a4,1c008da0 <pos_libc_prf+0x7a6>
1c008b0a:	001b8293          	addi	t0,s7,1
1c008b0e:	4341                	li	t1,16
1c008b10:	0462c2b3          	p.min	t0,t0,t1
1c008b14:	12fd                	addi	t0,t0,-1
1c008b16:	cc02                	sw	zero,24(sp)
1c008b18:	001b0713          	addi	a4,s6,1
1c008b1c:	ca3a                	sw	a4,20(sp)
1c008b1e:	853a                	mv	a0,a4
1c008b20:	4701                	li	a4,0
1c008b22:	080006b7          	lui	a3,0x8000
1c008b26:	4795                	li	a5,5
1c008b28:	00270e13          	addi	t3,a4,2
1c008b2c:	00ee3733          	sltu	a4,t3,a4
1c008b30:	02000893          	li	a7,32
1c008b34:	9736                	add	a4,a4,a3
1c008b36:	00171593          	slli	a1,a4,0x1
1c008b3a:	fff8cf13          	not	t5,a7
1c008b3e:	011e56b3          	srl	a3,t3,a7
1c008b42:	01e595b3          	sll	a1,a1,t5
1c008b46:	0208f813          	andi	a6,a7,32
1c008b4a:	4301                	li	t1,0
1c008b4c:	4601                	li	a2,0
1c008b4e:	4e81                	li	t4,0
1c008b50:	8ecd                	or	a3,a3,a1
1c008b52:	00080463          	beqz	a6,1c008b5a <pos_libc_prf+0x560>
1c008b56:	011756b3          	srl	a3,a4,a7
1c008b5a:	fff8cf13          	not	t5,a7
1c008b5e:	02f6d6b3          	divu	a3,a3,a5
1c008b62:	06080a63          	beqz	a6,1c008bd6 <pos_libc_prf+0x5dc>
1c008b66:	4581                	li	a1,0
1c008b68:	011698b3          	sll	a7,a3,a7
1c008b6c:	00259f13          	slli	t5,a1,0x2
1c008b70:	01e5df93          	srli	t6,a1,0x1e
1c008b74:	00289693          	slli	a3,a7,0x2
1c008b78:	00bf0833          	add	a6,t5,a1
1c008b7c:	00dfe6b3          	or	a3,t6,a3
1c008b80:	01e83f33          	sltu	t5,a6,t5
1c008b84:	959a                	add	a1,a1,t1
1c008b86:	96c6                	add	a3,a3,a7
1c008b88:	96fa                	add	a3,a3,t5
1c008b8a:	0065bf33          	sltu	t5,a1,t1
1c008b8e:	1c001337          	lui	t1,0x1c001
1c008b92:	9646                	add	a2,a2,a7
1c008b94:	88030313          	addi	t1,t1,-1920 # 1c000880 <stack>
1c008b98:	410e0833          	sub	a6,t3,a6
1c008b9c:	0e85                	addi	t4,t4,1
1c008b9e:	01d30fb3          	add	t6,t1,t4
1c008ba2:	010e38b3          	sltu	a7,t3,a6
1c008ba6:	8f15                	sub	a4,a4,a3
1c008ba8:	832e                	mv	t1,a1
1c008baa:	967a                	add	a2,a2,t5
1c008bac:	023eac63          	p.beqimm	t4,3,1c008be4 <pos_libc_prf+0x5ea>
1c008bb0:	41170733          	sub	a4,a4,a7
1c008bb4:	000fc883          	lbu	a7,0(t6)
1c008bb8:	8e42                	mv	t3,a6
1c008bba:	00171593          	slli	a1,a4,0x1
1c008bbe:	fff8cf13          	not	t5,a7
1c008bc2:	011e56b3          	srl	a3,t3,a7
1c008bc6:	01e595b3          	sll	a1,a1,t5
1c008bca:	0208f813          	andi	a6,a7,32
1c008bce:	8ecd                	or	a3,a3,a1
1c008bd0:	f80805e3          	beqz	a6,1c008b5a <pos_libc_prf+0x560>
1c008bd4:	b749                	j	1c008b56 <pos_libc_prf+0x55c>
1c008bd6:	0016d813          	srli	a6,a3,0x1
1c008bda:	011695b3          	sll	a1,a3,a7
1c008bde:	01e858b3          	srl	a7,a6,t5
1c008be2:	b769                	j	1c008b6c <pos_libc_prf+0x572>
1c008be4:	01f61693          	slli	a3,a2,0x1f
1c008be8:	0015d713          	srli	a4,a1,0x1
1c008bec:	fc15b333          	p.bclr	t1,a1,30,1
1c008bf0:	8f55                	or	a4,a4,a3
1c008bf2:	971a                	add	a4,a4,t1
1c008bf4:	00165693          	srli	a3,a2,0x1
1c008bf8:	00673333          	sltu	t1,a4,t1
1c008bfc:	969a                	add	a3,a3,t1
1c008bfe:	fff28613          	addi	a2,t0,-1
1c008c02:	1c028363          	beqz	t0,1c008dc8 <pos_libc_prf+0x7ce>
1c008c06:	82b2                	mv	t0,a2
1c008c08:	b705                	j	1c008b28 <pos_libc_prf+0x52e>
1c008c0a:	06300713          	li	a4,99
1c008c0e:	0eec0963          	beq	s8,a4,1c008d00 <pos_libc_prf+0x706>
1c008c12:	0b874063          	blt	a4,s8,1c008cb2 <pos_libc_prf+0x6b8>
1c008c16:	05800713          	li	a4,88
1c008c1a:	16ec1063          	bne	s8,a4,1c008d7a <pos_libc_prf+0x780>
1c008c1e:	4702                	lw	a4,0(sp)
1c008c20:	00490b13          	addi	s6,s2,4
1c008c24:	00092583          	lw	a1,0(s2)
1c008c28:	44070163          	beqz	a4,1c00906a <pos_libc_prf+0xa70>
1c008c2c:	7761                	lui	a4,0xffff8
1c008c2e:	83074713          	xori	a4,a4,-2000
1c008c32:	86de                	mv	a3,s7
1c008c34:	4641                	li	a2,16
1c008c36:	02610513          	addi	a0,sp,38
1c008c3a:	02e11223          	sh	a4,36(sp)
1c008c3e:	32a1                	jal	1c008586 <pos_libc_to_x>
1c008c40:	05800713          	li	a4,88
1c008c44:	8d2a                	mv	s10,a0
1c008c46:	78ec0f63          	beq	s8,a4,1c0093e4 <pos_libc_prf+0xdea>
1c008c4a:	4309                	li	t1,2
1c008c4c:	00250d13          	addi	s10,a0,2
1c008c50:	c01a                	sw	t1,0(sp)
1c008c52:	0c800793          	li	a5,200
1c008c56:	49fba863          	p.beqimm	s7,-1,1c0090e6 <pos_libc_prf+0xaec>
1c008c5a:	b5a7c7e3          	blt	a5,s10,1c0087a8 <pos_libc_prf+0x1ae>
1c008c5e:	02000313          	li	t1,32
1c008c62:	895a                	mv	s2,s6
1c008c64:	c21a                	sw	t1,4(sp)
1c008c66:	008d4763          	blt	s10,s0,1c008c74 <pos_libc_prf+0x67a>
1c008c6a:	846a                	mv	s0,s10
1c008c6c:	b20410e3          	bnez	s0,1c00878c <pos_libc_prf+0x192>
1c008c70:	b2f1                	j	1c00863c <pos_libc_prf+0x42>
1c008c72:	c002                	sw	zero,0(sp)
1c008c74:	4342                	lw	t1,16(sp)
1c008c76:	38030563          	beqz	t1,1c009000 <pos_libc_prf+0xa06>
1c008c7a:	001d0713          	addi	a4,s10,1
1c008c7e:	02000693          	li	a3,32
1c008c82:	41a407b3          	sub	a5,s0,s10
1c008c86:	76e44663          	blt	s0,a4,1c0093f2 <pos_libc_prf+0xdf8>
1c008c8a:	80000737          	lui	a4,0x80000
1c008c8e:	76e40263          	beq	s0,a4,1c0093f2 <pos_libc_prf+0xdf8>
1c008c92:	0087c0fb          	lp.setup	x1,a5,1c008ca2 <pos_libc_prf+0x6a8>
1c008c96:	0f010813          	addi	a6,sp,240
1c008c9a:	01a80733          	add	a4,a6,s10
1c008c9e:	f2d70a23          	sb	a3,-204(a4) # 7fffff34 <pulp__FC+0x7fffff35>
1c008ca2:	0d05                	addi	s10,s10,1
1c008ca4:	ae0414e3          	bnez	s0,1c00878c <pos_libc_prf+0x192>
1c008ca8:	ba51                	j	1c00863c <pos_libc_prf+0x42>
1c008caa:	06900713          	li	a4,105
1c008cae:	0cec1663          	bne	s8,a4,1c008d7a <pos_libc_prf+0x780>
1c008cb2:	00092583          	lw	a1,0(s2)
1c008cb6:	02410c93          	addi	s9,sp,36
1c008cba:	0911                	addi	s2,s2,4
1c008cbc:	3e05cd63          	bltz	a1,1c0090b6 <pos_libc_prf+0xabc>
1c008cc0:	4322                	lw	t1,8(sp)
1c008cc2:	4a031763          	bnez	t1,1c009170 <pos_libc_prf+0xb76>
1c008cc6:	4632                	lw	a2,12(sp)
1c008cc8:	62060163          	beqz	a2,1c0092ea <pos_libc_prf+0xcf0>
1c008ccc:	02000793          	li	a5,32
1c008cd0:	02f10223          	sb	a5,36(sp)
1c008cd4:	86de                	mv	a3,s7
1c008cd6:	4629                	li	a2,10
1c008cd8:	02510513          	addi	a0,sp,37
1c008cdc:	306d                	jal	1c008586 <pos_libc_to_x>
1c008cde:	02510313          	addi	t1,sp,37
1c008ce2:	951a                	add	a0,a0,t1
1c008ce4:	4705                	li	a4,1
1c008ce6:	41950d33          	sub	s10,a0,s9
1c008cea:	c03a                	sw	a4,0(sp)
1c008cec:	0bfba463          	p.beqimm	s7,-1,1c008d94 <pos_libc_prf+0x79a>
1c008cf0:	0c800793          	li	a5,200
1c008cf4:	aba7cae3          	blt	a5,s10,1c0087a8 <pos_libc_prf+0x1ae>
1c008cf8:	02000713          	li	a4,32
1c008cfc:	c23a                	sw	a4,4(sp)
1c008cfe:	b7a5                	j	1c008c66 <pos_libc_prf+0x66c>
1c008d00:	00092783          	lw	a5,0(s2)
1c008d04:	020102a3          	sb	zero,37(sp)
1c008d08:	0911                	addi	s2,s2,4
1c008d0a:	02f10223          	sb	a5,36(sp)
1c008d0e:	4d05                	li	s10,1
1c008d10:	bc9d                	j	1c008786 <pos_libc_prf+0x18c>
1c008d12:	00092583          	lw	a1,0(s2)
1c008d16:	86de                	mv	a3,s7
1c008d18:	4629                	li	a2,10
1c008d1a:	1048                	addi	a0,sp,36
1c008d1c:	30ad                	jal	1c008586 <pos_libc_to_x>
1c008d1e:	8d2a                	mv	s10,a0
1c008d20:	0911                	addi	s2,s2,4
1c008d22:	0c800793          	li	a5,200
1c008d26:	07fba363          	p.beqimm	s7,-1,1c008d8c <pos_libc_prf+0x792>
1c008d2a:	a6a7cfe3          	blt	a5,a0,1c0087a8 <pos_libc_prf+0x1ae>
1c008d2e:	02000713          	li	a4,32
1c008d32:	c002                	sw	zero,0(sp)
1c008d34:	c23a                	sw	a4,4(sp)
1c008d36:	bf05                	j	1c008c66 <pos_libc_prf+0x66c>
1c008d38:	00092783          	lw	a5,0(s2)
1c008d3c:	0911                	addi	s2,s2,4
1c008d3e:	0157a023          	sw	s5,0(a5)
1c008d42:	b8ed                	j	1c00863c <pos_libc_prf+0x42>
1c008d44:	00092583          	lw	a1,0(s2)
1c008d48:	77e1                	lui	a5,0xffff8
1c008d4a:	8307c793          	xori	a5,a5,-2000
1c008d4e:	46a1                	li	a3,8
1c008d50:	4641                	li	a2,16
1c008d52:	02610513          	addi	a0,sp,38
1c008d56:	02f11223          	sh	a5,36(sp)
1c008d5a:	82dff0ef          	jal	ra,1c008586 <pos_libc_to_x>
1c008d5e:	0911                	addi	s2,s2,4
1c008d60:	00250d13          	addi	s10,a0,2
1c008d64:	0c800793          	li	a5,200
1c008d68:	03fba263          	p.beqimm	s7,-1,1c008d8c <pos_libc_prf+0x792>
1c008d6c:	a3a7cee3          	blt	a5,s10,1c0087a8 <pos_libc_prf+0x1ae>
1c008d70:	02000793          	li	a5,32
1c008d74:	c002                	sw	zero,0(sp)
1c008d76:	c23e                	sw	a5,4(sp)
1c008d78:	b5fd                	j	1c008c66 <pos_libc_prf+0x66c>
1c008d7a:	0c800713          	li	a4,200
1c008d7e:	8b875fe3          	ble	s8,a4,1c00863c <pos_libc_prf+0x42>
1c008d82:	5afd                	li	s5,-1
1c008d84:	b8e9                	j	1c00865e <pos_libc_prf+0x64>
1c008d86:	9e0bd7e3          	bgez	s7,1c008774 <pos_libc_prf+0x17a>
1c008d8a:	b2fd                	j	1c008778 <pos_libc_prf+0x17e>
1c008d8c:	a1a7cee3          	blt	a5,s10,1c0087a8 <pos_libc_prf+0x1ae>
1c008d90:	c002                	sw	zero,0(sp)
1c008d92:	bdd1                	j	1c008c66 <pos_libc_prf+0x66c>
1c008d94:	0c800793          	li	a5,200
1c008d98:	eda7d7e3          	ble	s10,a5,1c008c66 <pos_libc_prf+0x66c>
1c008d9c:	5afd                	li	s5,-1
1c008d9e:	b0c1                	j	1c00865e <pos_libc_prf+0x64>
1c008da0:	cc02                	sw	zero,24(sp)
1c008da2:	001b0593          	addi	a1,s6,1
1c008da6:	ca2e                	sw	a1,20(sp)
1c008da8:	017387b3          	add	a5,t2,s7
1c008dac:	852e                	mv	a0,a1
1c008dae:	6007c263          	bltz	a5,1c0093b2 <pos_libc_prf+0xdb8>
1c008db2:	4641                	li	a2,16
1c008db4:	04c7c2b3          	p.min	t0,a5,a2
1c008db8:	12fd                	addi	t0,t0,-1
1c008dba:	06600c13          	li	s8,102
1c008dbe:	d60791e3          	bnez	a5,1c008b20 <pos_libc_prf+0x526>
1c008dc2:	4701                	li	a4,0
1c008dc4:	080006b7          	lui	a3,0x8000
1c008dc8:	45f2                	lw	a1,28(sp)
1c008dca:	976a                	add	a4,a4,s10
1c008dcc:	01a73f33          	sltu	t5,a4,s10
1c008dd0:	96ae                	add	a3,a3,a1
1c008dd2:	96fa                	add	a3,a3,t5
1c008dd4:	f606b633          	p.bclr	a2,a3,27,0
1c008dd8:	8d3a                	mv	s10,a4
1c008dda:	ca71                	beqz	a2,1c008eae <pos_libc_prf+0x8b4>
1c008ddc:	002d0e93          	addi	t4,s10,2
1c008de0:	01aebd33          	sltu	s10,t4,s10
1c008de4:	00dd0f33          	add	t5,s10,a3
1c008de8:	02000813          	li	a6,32
1c008dec:	001f1793          	slli	a5,t5,0x1
1c008df0:	fff84693          	not	a3,a6
1c008df4:	010ed733          	srl	a4,t4,a6
1c008df8:	00d797b3          	sll	a5,a5,a3
1c008dfc:	02087613          	andi	a2,a6,32
1c008e00:	4e01                	li	t3,0
1c008e02:	4281                	li	t0,0
1c008e04:	4f81                	li	t6,0
1c008e06:	4d15                	li	s10,5
1c008e08:	8f5d                	or	a4,a4,a5
1c008e0a:	c219                	beqz	a2,1c008e10 <pos_libc_prf+0x816>
1c008e0c:	010f5733          	srl	a4,t5,a6
1c008e10:	fff84793          	not	a5,a6
1c008e14:	03a75733          	divu	a4,a4,s10
1c008e18:	24060263          	beqz	a2,1c00905c <pos_libc_prf+0xa62>
1c008e1c:	4681                	li	a3,0
1c008e1e:	01071733          	sll	a4,a4,a6
1c008e22:	00269793          	slli	a5,a3,0x2
1c008e26:	01e6d813          	srli	a6,a3,0x1e
1c008e2a:	00271593          	slli	a1,a4,0x2
1c008e2e:	00d78633          	add	a2,a5,a3
1c008e32:	00b865b3          	or	a1,a6,a1
1c008e36:	95ba                	add	a1,a1,a4
1c008e38:	00f637b3          	sltu	a5,a2,a5
1c008e3c:	96f2                	add	a3,a3,t3
1c008e3e:	1c001337          	lui	t1,0x1c001
1c008e42:	97ae                	add	a5,a5,a1
1c008e44:	01c6b833          	sltu	a6,a3,t3
1c008e48:	40ce8633          	sub	a2,t4,a2
1c008e4c:	9716                	add	a4,a4,t0
1c008e4e:	0f85                	addi	t6,t6,1
1c008e50:	88030313          	addi	t1,t1,-1920 # 1c000880 <stack>
1c008e54:	00ceb8b3          	sltu	a7,t4,a2
1c008e58:	40ff07b3          	sub	a5,t5,a5
1c008e5c:	01f305b3          	add	a1,t1,t6
1c008e60:	8e36                	mv	t3,a3
1c008e62:	00e802b3          	add	t0,a6,a4
1c008e66:	023fa463          	p.beqimm	t6,3,1c008e8e <pos_libc_prf+0x894>
1c008e6a:	0005c803          	lbu	a6,0(a1)
1c008e6e:	41178f33          	sub	t5,a5,a7
1c008e72:	8eb2                	mv	t4,a2
1c008e74:	001f1793          	slli	a5,t5,0x1
1c008e78:	fff84693          	not	a3,a6
1c008e7c:	010ed733          	srl	a4,t4,a6
1c008e80:	00d797b3          	sll	a5,a5,a3
1c008e84:	02087613          	andi	a2,a6,32
1c008e88:	8f5d                	or	a4,a4,a5
1c008e8a:	d259                	beqz	a2,1c008e10 <pos_libc_prf+0x816>
1c008e8c:	b741                	j	1c008e0c <pos_libc_prf+0x812>
1c008e8e:	01f29693          	slli	a3,t0,0x1f
1c008e92:	001e5713          	srli	a4,t3,0x1
1c008e96:	8f55                	or	a4,a4,a3
1c008e98:	fc1e3e33          	p.bclr	t3,t3,30,1
1c008e9c:	00ee0d33          	add	s10,t3,a4
1c008ea0:	01cd3e33          	sltu	t3,s10,t3
1c008ea4:	0012d713          	srli	a4,t0,0x1
1c008ea8:	00ee06b3          	add	a3,t3,a4
1c008eac:	0385                	addi	t2,t2,1
1c008eae:	06600713          	li	a4,102
1c008eb2:	34ec0563          	beq	s8,a4,1c0091fc <pos_libc_prf+0xc02>
1c008eb6:	002d1713          	slli	a4,s10,0x2
1c008eba:	01ed5613          	srli	a2,s10,0x1e
1c008ebe:	00269813          	slli	a6,a3,0x2
1c008ec2:	9d3a                	add	s10,s10,a4
1c008ec4:	01066833          	or	a6,a2,a6
1c008ec8:	00ed35b3          	sltu	a1,s10,a4
1c008ecc:	96c2                	add	a3,a3,a6
1c008ece:	95b6                	add	a1,a1,a3
1c008ed0:	01fd5713          	srli	a4,s10,0x1f
1c008ed4:	0586                	slli	a1,a1,0x1
1c008ed6:	8dd9                	or	a1,a1,a4
1c008ed8:	01c5d713          	srli	a4,a1,0x1c
1c008edc:	03070693          	addi	a3,a4,48
1c008ee0:	00e03733          	snez	a4,a4
1c008ee4:	40e383b3          	sub	t2,t2,a4
1c008ee8:	4702                	lw	a4,0(sp)
1c008eea:	10000337          	lui	t1,0x10000
1c008eee:	137d                	addi	t1,t1,-1
1c008ef0:	00db0023          	sb	a3,0(s6)
1c008ef4:	001d1613          	slli	a2,s10,0x1
1c008ef8:	0065f5b3          	and	a1,a1,t1
1c008efc:	2e070563          	beqz	a4,1c0091e6 <pos_libc_prf+0xbec>
1c008f00:	02e00713          	li	a4,46
1c008f04:	00eb00a3          	sb	a4,1(s6)
1c008f08:	002b0813          	addi	a6,s6,2
1c008f0c:	fffb8893          	addi	a7,s7,-1
1c008f10:	4e0b8b63          	beqz	s7,1c009406 <pos_libc_prf+0xe0c>
1c008f14:	4e3d                	li	t3,15
1c008f16:	a011                	j	1c008f1a <pos_libc_prf+0x920>
1c008f18:	88be                	mv	a7,a5
1c008f1a:	00261793          	slli	a5,a2,0x2
1c008f1e:	01e65693          	srli	a3,a2,0x1e
1c008f22:	00259713          	slli	a4,a1,0x2
1c008f26:	00c78333          	add	t1,a5,a2
1c008f2a:	8f55                	or	a4,a4,a3
1c008f2c:	972e                	add	a4,a4,a1
1c008f2e:	00f337b3          	sltu	a5,t1,a5
1c008f32:	97ba                	add	a5,a5,a4
1c008f34:	0786                	slli	a5,a5,0x1
1c008f36:	01f35713          	srli	a4,t1,0x1f
1c008f3a:	8fd9                	or	a5,a5,a4
1c008f3c:	01c7d693          	srli	a3,a5,0x1c
1c008f40:	03000713          	li	a4,48
1c008f44:	00180513          	addi	a0,a6,1 # 80000001 <pulp__FC+0x80000002>
1c008f48:	01c05c63          	blez	t3,1c008f60 <pos_libc_prf+0x966>
1c008f4c:	00131613          	slli	a2,t1,0x1
1c008f50:	10000337          	lui	t1,0x10000
1c008f54:	137d                	addi	t1,t1,-1
1c008f56:	03068713          	addi	a4,a3,48 # 8000030 <__l1_heap_size+0x7ff0738>
1c008f5a:	1e7d                	addi	t3,t3,-1
1c008f5c:	0067f5b3          	and	a1,a5,t1
1c008f60:	00e80023          	sb	a4,0(a6)
1c008f64:	fff88793          	addi	a5,a7,-1
1c008f68:	882a                	mv	a6,a0
1c008f6a:	fb1047e3          	bgtz	a7,1c008f18 <pos_libc_prf+0x91e>
1c008f6e:	45e2                	lw	a1,24(sp)
1c008f70:	e9a5                	bnez	a1,1c008fe0 <pos_libc_prf+0x9e6>
1c008f72:	c05c3733          	p.bclr	a4,s8,0,5
1c008f76:	04500693          	li	a3,69
1c008f7a:	02d71963          	bne	a4,a3,1c008fac <pos_libc_prf+0x9b2>
1c008f7e:	87e2                	mv	a5,s8
1c008f80:	00f50023          	sb	a5,0(a0)
1c008f84:	3403cc63          	bltz	t2,1c0092dc <pos_libc_prf+0xce2>
1c008f88:	02b00793          	li	a5,43
1c008f8c:	00f500a3          	sb	a5,1(a0)
1c008f90:	47a9                	li	a5,10
1c008f92:	02f3c733          	div	a4,t2,a5
1c008f96:	0511                	addi	a0,a0,4
1c008f98:	02f3e7b3          	rem	a5,t2,a5
1c008f9c:	03070713          	addi	a4,a4,48
1c008fa0:	fee50f23          	sb	a4,-2(a0)
1c008fa4:	03078793          	addi	a5,a5,48 # ffff8030 <pulp__FC+0xffff8031>
1c008fa8:	fef50fa3          	sb	a5,-1(a0)
1c008fac:	00050023          	sb	zero,0(a0)
1c008fb0:	41950d33          	sub	s10,a0,s9
1c008fb4:	4722                	lw	a4,8(sp)
1c008fb6:	47b2                	lw	a5,12(sp)
1c008fb8:	8f5d                	or	a4,a4,a5
1c008fba:	c03a                	sw	a4,0(sp)
1c008fbc:	e719                	bnez	a4,1c008fca <pos_libc_prf+0x9d0>
1c008fbe:	02414703          	lbu	a4,36(sp)
1c008fc2:	02d00793          	li	a5,45
1c008fc6:	dcf717e3          	bne	a4,a5,1c008d94 <pos_libc_prf+0x79a>
1c008fca:	0c800793          	li	a5,200
1c008fce:	fda7cd63          	blt	a5,s10,1c0087a8 <pos_libc_prf+0x1ae>
1c008fd2:	4305                	li	t1,1
1c008fd4:	c01a                	sw	t1,0(sp)
1c008fd6:	b941                	j	1c008c66 <pos_libc_prf+0x66c>
1c008fd8:	47e2                	lw	a5,24(sp)
1c008fda:	dbe9                	beqz	a5,1c008fac <pos_libc_prf+0x9b2>
1c008fdc:	06600c13          	li	s8,102
1c008fe0:	03000613          	li	a2,48
1c008fe4:	a011                	j	1c008fe8 <pos_libc_prf+0x9ee>
1c008fe6:	853a                	mv	a0,a4
1c008fe8:	fff50713          	addi	a4,a0,-1
1c008fec:	00074683          	lbu	a3,0(a4)
1c008ff0:	fec68be3          	beq	a3,a2,1c008fe6 <pos_libc_prf+0x9ec>
1c008ff4:	02e00613          	li	a2,46
1c008ff8:	f6c69de3          	bne	a3,a2,1c008f72 <pos_libc_prf+0x978>
1c008ffc:	853a                	mv	a0,a4
1c008ffe:	bf95                	j	1c008f72 <pos_libc_prf+0x978>
1c009000:	02410c93          	addi	s9,sp,36
1c009004:	41a40b33          	sub	s6,s0,s10
1c009008:	001d0613          	addi	a2,s10,1
1c00900c:	85e6                	mv	a1,s9
1c00900e:	016c8533          	add	a0,s9,s6
1c009012:	cc4ff0ef          	jal	ra,1c0084d6 <memmove>
1c009016:	4312                	lw	t1,4(sp)
1c009018:	02000793          	li	a5,32
1c00901c:	30f30c63          	beq	t1,a5,1c009334 <pos_libc_prf+0xd3a>
1c009020:	4702                	lw	a4,0(sp)
1c009022:	9b3a                	add	s6,s6,a4
1c009024:	c56754e3          	ble	s6,a4,1c008c6c <pos_libc_prf+0x672>
1c009028:	4782                	lw	a5,0(sp)
1c00902a:	00178713          	addi	a4,a5,1
1c00902e:	40fb07b3          	sub	a5,s6,a5
1c009032:	3aeb4563          	blt	s6,a4,1c0093dc <pos_libc_prf+0xde2>
1c009036:	80000737          	lui	a4,0x80000
1c00903a:	3aeb0163          	beq	s6,a4,1c0093dc <pos_libc_prf+0xde2>
1c00903e:	4612                	lw	a2,4(sp)
1c009040:	4702                	lw	a4,0(sp)
1c009042:	0087c0fb          	lp.setup	x1,a5,1c009052 <pos_libc_prf+0xa58>
1c009046:	0f010813          	addi	a6,sp,240
1c00904a:	00e806b3          	add	a3,a6,a4
1c00904e:	f2c68a23          	sb	a2,-204(a3)
1c009052:	0705                	addi	a4,a4,1
1c009054:	f2041c63          	bnez	s0,1c00878c <pos_libc_prf+0x192>
1c009058:	de4ff06f          	j	1c00863c <pos_libc_prf+0x42>
1c00905c:	00175613          	srli	a2,a4,0x1
1c009060:	010716b3          	sll	a3,a4,a6
1c009064:	00f65733          	srl	a4,a2,a5
1c009068:	bb6d                	j	1c008e22 <pos_libc_prf+0x828>
1c00906a:	02410c93          	addi	s9,sp,36
1c00906e:	86de                	mv	a3,s7
1c009070:	4641                	li	a2,16
1c009072:	8566                	mv	a0,s9
1c009074:	d12ff0ef          	jal	ra,1c008586 <pos_libc_to_x>
1c009078:	05800713          	li	a4,88
1c00907c:	8d2a                	mv	s10,a0
1c00907e:	bcec1ae3          	bne	s8,a4,1c008c52 <pos_libc_prf+0x658>
1c009082:	02414783          	lbu	a5,36(sp)
1c009086:	4681                	li	a3,0
1c009088:	bc0785e3          	beqz	a5,1c008c52 <pos_libc_prf+0x658>
1c00908c:	4665                	li	a2,25
1c00908e:	f9f78713          	addi	a4,a5,-97
1c009092:	0ff77713          	andi	a4,a4,255
1c009096:	1781                	addi	a5,a5,-32
1c009098:	00e66463          	bltu	a2,a4,1c0090a0 <pos_libc_prf+0xaa6>
1c00909c:	00fc8023          	sb	a5,0(s9)
1c0090a0:	0c85                	addi	s9,s9,1
1c0090a2:	000cc783          	lbu	a5,0(s9)
1c0090a6:	f7e5                	bnez	a5,1c00908e <pos_libc_prf+0xa94>
1c0090a8:	4782                	lw	a5,0(sp)
1c0090aa:	9d36                	add	s10,s10,a3
1c0090ac:	ba0783e3          	beqz	a5,1c008c52 <pos_libc_prf+0x658>
1c0090b0:	4809                	li	a6,2
1c0090b2:	c042                	sw	a6,0(sp)
1c0090b4:	be79                	j	1c008c52 <pos_libc_prf+0x658>
1c0090b6:	02d00793          	li	a5,45
1c0090ba:	02f10223          	sb	a5,36(sp)
1c0090be:	800007b7          	lui	a5,0x80000
1c0090c2:	26f58b63          	beq	a1,a5,1c009338 <pos_libc_prf+0xd3e>
1c0090c6:	40b005b3          	neg	a1,a1
1c0090ca:	86de                	mv	a3,s7
1c0090cc:	4629                	li	a2,10
1c0090ce:	02510513          	addi	a0,sp,37
1c0090d2:	cb4ff0ef          	jal	ra,1c008586 <pos_libc_to_x>
1c0090d6:	02510793          	addi	a5,sp,37
1c0090da:	953e                	add	a0,a0,a5
1c0090dc:	4805                	li	a6,1
1c0090de:	41950d33          	sub	s10,a0,s9
1c0090e2:	c042                	sw	a6,0(sp)
1c0090e4:	b121                	j	1c008cec <pos_libc_prf+0x6f2>
1c0090e6:	eda7c163          	blt	a5,s10,1c0087a8 <pos_libc_prf+0x1ae>
1c0090ea:	895a                	mv	s2,s6
1c0090ec:	bead                	j	1c008c66 <pos_libc_prf+0x66c>
1c0090ee:	8b36                	mv	s6,a3
1c0090f0:	e20ff06f          	j	1c008710 <pos_libc_prf+0x116>
1c0090f4:	4702                	lw	a4,0(sp)
1c0090f6:	cc02                	sw	zero,24(sp)
1c0090f8:	e701                	bnez	a4,1c009100 <pos_libc_prf+0xb06>
1c0090fa:	017037b3          	snez	a5,s7
1c0090fe:	cc3e                	sw	a5,24(sp)
1c009100:	56f5                	li	a3,-3
1c009102:	001b8713          	addi	a4,s7,1
1c009106:	00d3c463          	blt	t2,a3,1c00910e <pos_libc_prf+0xb14>
1c00910a:	c8775ce3          	ble	t2,a4,1c008da2 <pos_libc_prf+0x7a8>
1c00910e:	4841                	li	a6,16
1c009110:	05074733          	p.min	a4,a4,a6
1c009114:	06700693          	li	a3,103
1c009118:	fff70293          	addi	t0,a4,-1 # 7fffffff <pulp__FC+0x80000000>
1c00911c:	28dc0763          	beq	s8,a3,1c0093aa <pos_libc_prf+0xdb0>
1c009120:	04500c13          	li	s8,69
1c009124:	bad5                	j	1c008b18 <pos_libc_prf+0x51e>
1c009126:	46a2                	lw	a3,8(sp)
1c009128:	1c068963          	beqz	a3,1c0092fa <pos_libc_prf+0xd00>
1c00912c:	02b00713          	li	a4,43
1c009130:	02e10223          	sb	a4,36(sp)
1c009134:	02510b13          	addi	s6,sp,37
1c009138:	4381                	li	t2,0
1c00913a:	4301                	li	t1,0
1c00913c:	4601                	li	a2,0
1c00913e:	4701                	li	a4,0
1c009140:	02410c93          	addi	s9,sp,36
1c009144:	babd                	j	1c008ac2 <pos_libc_prf+0x4c8>
1c009146:	02510513          	addi	a0,sp,37
1c00914a:	86de                	mv	a3,s7
1c00914c:	4621                	li	a2,8
1c00914e:	c38ff0ef          	jal	ra,1c008586 <pos_libc_to_x>
1c009152:	4302                	lw	t1,0(sp)
1c009154:	0c800793          	li	a5,200
1c009158:	00650d33          	add	s10,a0,t1
1c00915c:	09fba063          	p.beqimm	s7,-1,1c0091dc <pos_libc_prf+0xbe2>
1c009160:	e5a7c463          	blt	a5,s10,1c0087a8 <pos_libc_prf+0x1ae>
1c009164:	02000813          	li	a6,32
1c009168:	895a                	mv	s2,s6
1c00916a:	c002                	sw	zero,0(sp)
1c00916c:	c242                	sw	a6,4(sp)
1c00916e:	bce5                	j	1c008c66 <pos_libc_prf+0x66c>
1c009170:	02b00793          	li	a5,43
1c009174:	02f10223          	sb	a5,36(sp)
1c009178:	beb1                	j	1c008cd4 <pos_libc_prf+0x6da>
1c00917a:	1048                	addi	a0,sp,36
1c00917c:	b7f9                	j	1c00914a <pos_libc_prf+0xb50>
1c00917e:	02410c93          	addi	s9,sp,36
1c009182:	86e6                	mv	a3,s9
1c009184:	2005c163          	bltz	a1,1c009386 <pos_libc_prf+0xd8c>
1c009188:	8e59                	or	a2,a2,a4
1c00918a:	fbfc0793          	addi	a5,s8,-65
1c00918e:	00368513          	addi	a0,a3,3
1c009192:	4765                	li	a4,25
1c009194:	18061463          	bnez	a2,1c00931c <pos_libc_prf+0xd22>
1c009198:	1cf76d63          	bltu	a4,a5,1c009372 <pos_libc_prf+0xd78>
1c00919c:	6795                	lui	a5,0x5
1c00919e:	e4978793          	addi	a5,a5,-439 # 4e49 <__cluster_text_size+0x4e49>
1c0091a2:	00f69023          	sh	a5,0(a3)
1c0091a6:	04600793          	li	a5,70
1c0091aa:	00f68123          	sb	a5,2(a3)
1c0091ae:	000681a3          	sb	zero,3(a3)
1c0091b2:	41950d33          	sub	s10,a0,s9
1c0091b6:	bbfd                	j	1c008fb4 <pos_libc_prf+0x9ba>
1c0091b8:	4b99                	li	s7,6
1c0091ba:	94ec10e3          	bne	s8,a4,1c008afa <pos_libc_prf+0x500>
1c0091be:	4682                	lw	a3,0(sp)
1c0091c0:	57f5                	li	a5,-3
1c0091c2:	0016c693          	xori	a3,a3,1
1c0091c6:	cc36                	sw	a3,24(sp)
1c0091c8:	1cf3dd63          	ble	a5,t2,1c0093a2 <pos_libc_prf+0xda8>
1c0091cc:	001b0693          	addi	a3,s6,1
1c0091d0:	ca36                	sw	a3,20(sp)
1c0091d2:	8536                	mv	a0,a3
1c0091d4:	06500c13          	li	s8,101
1c0091d8:	4299                	li	t0,6
1c0091da:	b299                	j	1c008b20 <pos_libc_prf+0x526>
1c0091dc:	dda7c663          	blt	a5,s10,1c0087a8 <pos_libc_prf+0x1ae>
1c0091e0:	895a                	mv	s2,s6
1c0091e2:	c002                	sw	zero,0(sp)
1c0091e4:	b449                	j	1c008c66 <pos_libc_prf+0x66c>
1c0091e6:	d80b84e3          	beqz	s7,1c008f6e <pos_libc_prf+0x974>
1c0091ea:	02e00713          	li	a4,46
1c0091ee:	002b0813          	addi	a6,s6,2
1c0091f2:	00eb00a3          	sb	a4,1(s6)
1c0091f6:	fffb8893          	addi	a7,s7,-1
1c0091fa:	bb29                	j	1c008f14 <pos_libc_prf+0x91a>
1c0091fc:	18705c63          	blez	t2,1c009394 <pos_libc_prf+0xd9a>
1c009200:	4552                	lw	a0,20(sp)
1c009202:	4641                	li	a2,16
1c009204:	859e                	mv	a1,t2
1c009206:	0295c0fb          	lp.setup	x1,a1,1c009258 <pos_libc_prf+0xc5e>
1c00920a:	002d1793          	slli	a5,s10,0x2
1c00920e:	01ed5893          	srli	a7,s10,0x1e
1c009212:	00269713          	slli	a4,a3,0x2
1c009216:	01a78833          	add	a6,a5,s10
1c00921a:	00e8e733          	or	a4,a7,a4
1c00921e:	9736                	add	a4,a4,a3
1c009220:	00f837b3          	sltu	a5,a6,a5
1c009224:	97ba                	add	a5,a5,a4
1c009226:	0786                	slli	a5,a5,0x1
1c009228:	01f85713          	srli	a4,a6,0x1f
1c00922c:	8fd9                	or	a5,a5,a4
1c00922e:	01c7d313          	srli	t1,a5,0x1c
1c009232:	03000893          	li	a7,48
1c009236:	872a                	mv	a4,a0
1c009238:	00c05c63          	blez	a2,1c009250 <pos_libc_prf+0xc56>
1c00923c:	00181d13          	slli	s10,a6,0x1
1c009240:	10000837          	lui	a6,0x10000
1c009244:	187d                	addi	a6,a6,-1
1c009246:	03030893          	addi	a7,t1,48 # 10000030 <W8_su+0x2c>
1c00924a:	167d                	addi	a2,a2,-1
1c00924c:	0107f6b3          	and	a3,a5,a6
1c009250:	011b0023          	sb	a7,0(s6)
1c009254:	13fd                	addi	t2,t2,-1
1c009256:	8b2a                	mv	s6,a0
1c009258:	0505                	addi	a0,a0,1
1c00925a:	4302                	lw	t1,0(sp)
1c00925c:	00031563          	bnez	t1,1c009266 <pos_libc_prf+0xc6c>
1c009260:	853a                	mv	a0,a4
1c009262:	d60b8be3          	beqz	s7,1c008fd8 <pos_libc_prf+0x9de>
1c009266:	02e00793          	li	a5,46
1c00926a:	00170513          	addi	a0,a4,1
1c00926e:	00f70023          	sb	a5,0(a4)
1c009272:	03000593          	li	a1,48
1c009276:	fffb8313          	addi	t1,s7,-1
1c00927a:	d5705fe3          	blez	s7,1c008fd8 <pos_libc_prf+0x9de>
1c00927e:	002d1793          	slli	a5,s10,0x2
1c009282:	01ed5893          	srli	a7,s10,0x1e
1c009286:	00269713          	slli	a4,a3,0x2
1c00928a:	01a78833          	add	a6,a5,s10
1c00928e:	00e8e733          	or	a4,a7,a4
1c009292:	9736                	add	a4,a4,a3
1c009294:	00f837b3          	sltu	a5,a6,a5
1c009298:	97ba                	add	a5,a5,a4
1c00929a:	0786                	slli	a5,a5,0x1
1c00929c:	01f85713          	srli	a4,a6,0x1f
1c0092a0:	8fd9                	or	a5,a5,a4
1c0092a2:	01c7de13          	srli	t3,a5,0x1c
1c0092a6:	00150893          	addi	a7,a0,1
1c0092aa:	02039563          	bnez	t2,1c0092d4 <pos_libc_prf+0xcda>
1c0092ae:	03000713          	li	a4,48
1c0092b2:	00c05c63          	blez	a2,1c0092ca <pos_libc_prf+0xcd0>
1c0092b6:	00181d13          	slli	s10,a6,0x1
1c0092ba:	10000837          	lui	a6,0x10000
1c0092be:	187d                	addi	a6,a6,-1
1c0092c0:	030e0713          	addi	a4,t3,48
1c0092c4:	167d                	addi	a2,a2,-1
1c0092c6:	0107f6b3          	and	a3,a5,a6
1c0092ca:	00e50023          	sb	a4,0(a0)
1c0092ce:	8b9a                	mv	s7,t1
1c0092d0:	8546                	mv	a0,a7
1c0092d2:	b755                	j	1c009276 <pos_libc_prf+0xc7c>
1c0092d4:	00b50023          	sb	a1,0(a0)
1c0092d8:	0385                	addi	t2,t2,1
1c0092da:	bfd5                	j	1c0092ce <pos_libc_prf+0xcd4>
1c0092dc:	02d00793          	li	a5,45
1c0092e0:	407003b3          	neg	t2,t2
1c0092e4:	00f500a3          	sb	a5,1(a0)
1c0092e8:	b165                	j	1c008f90 <pos_libc_prf+0x996>
1c0092ea:	86de                	mv	a3,s7
1c0092ec:	4629                	li	a2,10
1c0092ee:	8566                	mv	a0,s9
1c0092f0:	a96ff0ef          	jal	ra,1c008586 <pos_libc_to_x>
1c0092f4:	8d2a                	mv	s10,a0
1c0092f6:	c002                	sw	zero,0(sp)
1c0092f8:	bad5                	j	1c008cec <pos_libc_prf+0x6f2>
1c0092fa:	4632                	lw	a2,12(sp)
1c0092fc:	10060163          	beqz	a2,1c0093fe <pos_libc_prf+0xe04>
1c009300:	02000713          	li	a4,32
1c009304:	02e10223          	sb	a4,36(sp)
1c009308:	02510b13          	addi	s6,sp,37
1c00930c:	02410c93          	addi	s9,sp,36
1c009310:	4381                	li	t2,0
1c009312:	4301                	li	t1,0
1c009314:	4601                	li	a2,0
1c009316:	4701                	li	a4,0
1c009318:	faaff06f          	j	1c008ac2 <pos_libc_prf+0x4c8>
1c00931c:	0af76663          	bltu	a4,a5,1c0093c8 <pos_libc_prf+0xdce>
1c009320:	6791                	lui	a5,0x4
1c009322:	14e78793          	addi	a5,a5,334 # 414e <__cluster_text_size+0x414e>
1c009326:	00f69023          	sh	a5,0(a3)
1c00932a:	04e00793          	li	a5,78
1c00932e:	00f68123          	sb	a5,2(a3)
1c009332:	bdb5                	j	1c0091ae <pos_libc_prf+0xbb4>
1c009334:	c002                	sw	zero,0(sp)
1c009336:	b9cd                	j	1c009028 <pos_libc_prf+0xa2e>
1c009338:	86de                	mv	a3,s7
1c00933a:	4629                	li	a2,10
1c00933c:	800005b7          	lui	a1,0x80000
1c009340:	b379                	j	1c0090ce <pos_libc_prf+0xad4>
1c009342:	4832                	lw	a6,12(sp)
1c009344:	02410c93          	addi	s9,sp,36
1c009348:	8b66                	mv	s6,s9
1c00934a:	e0080c63          	beqz	a6,1c008962 <pos_libc_prf+0x368>
1c00934e:	02000693          	li	a3,32
1c009352:	02d10223          	sb	a3,36(sp)
1c009356:	02510b13          	addi	s6,sp,37
1c00935a:	e08ff06f          	j	1c008962 <pos_libc_prf+0x368>
1c00935e:	02d00693          	li	a3,45
1c009362:	02d10223          	sb	a3,36(sp)
1c009366:	02510b13          	addi	s6,sp,37
1c00936a:	02410c93          	addi	s9,sp,36
1c00936e:	df4ff06f          	j	1c008962 <pos_libc_prf+0x368>
1c009372:	679d                	lui	a5,0x7
1c009374:	e6978793          	addi	a5,a5,-407 # 6e69 <__cluster_text_size+0x6e69>
1c009378:	00f69023          	sh	a5,0(a3)
1c00937c:	06600793          	li	a5,102
1c009380:	00f68123          	sb	a5,2(a3)
1c009384:	b52d                	j	1c0091ae <pos_libc_prf+0xbb4>
1c009386:	02d00693          	li	a3,45
1c00938a:	02d10223          	sb	a3,36(sp)
1c00938e:	02510693          	addi	a3,sp,37
1c009392:	bbdd                	j	1c009188 <pos_libc_prf+0xb8e>
1c009394:	03000793          	li	a5,48
1c009398:	00fb0023          	sb	a5,0(s6)
1c00939c:	4752                	lw	a4,20(sp)
1c00939e:	4641                	li	a2,16
1c0093a0:	bd6d                	j	1c00925a <pos_libc_prf+0xc60>
1c0093a2:	479d                	li	a5,7
1c0093a4:	9e77dfe3          	ble	t2,a5,1c008da2 <pos_libc_prf+0x7a8>
1c0093a8:	4299                	li	t0,6
1c0093aa:	06500c13          	li	s8,101
1c0093ae:	f6aff06f          	j	1c008b18 <pos_libc_prf+0x51e>
1c0093b2:	4772                	lw	a4,28(sp)
1c0093b4:	080006b7          	lui	a3,0x8000
1c0093b8:	96ba                	add	a3,a3,a4
1c0093ba:	f606b7b3          	p.bclr	a5,a3,27,0
1c0093be:	e2078fe3          	beqz	a5,1c0091fc <pos_libc_prf+0xc02>
1c0093c2:	06600c13          	li	s8,102
1c0093c6:	bc19                	j	1c008ddc <pos_libc_prf+0x7e2>
1c0093c8:	6799                	lui	a5,0x6
1c0093ca:	16e78793          	addi	a5,a5,366 # 616e <__cluster_text_size+0x616e>
1c0093ce:	00f69023          	sh	a5,0(a3) # 8000000 <__l1_heap_size+0x7ff0708>
1c0093d2:	06e00793          	li	a5,110
1c0093d6:	00f68123          	sb	a5,2(a3)
1c0093da:	bbd1                	j	1c0091ae <pos_libc_prf+0xbb4>
1c0093dc:	4785                	li	a5,1
1c0093de:	4612                	lw	a2,4(sp)
1c0093e0:	4702                	lw	a4,0(sp)
1c0093e2:	b185                	j	1c009042 <pos_libc_prf+0xa48>
1c0093e4:	02414783          	lbu	a5,36(sp)
1c0093e8:	c799                	beqz	a5,1c0093f6 <pos_libc_prf+0xdfc>
1c0093ea:	4689                	li	a3,2
1c0093ec:	02410c93          	addi	s9,sp,36
1c0093f0:	b971                	j	1c00908c <pos_libc_prf+0xa92>
1c0093f2:	4785                	li	a5,1
1c0093f4:	b879                	j	1c008c92 <pos_libc_prf+0x698>
1c0093f6:	4709                	li	a4,2
1c0093f8:	0d09                	addi	s10,s10,2
1c0093fa:	c03a                	sw	a4,0(sp)
1c0093fc:	b899                	j	1c008c52 <pos_libc_prf+0x658>
1c0093fe:	02410c93          	addi	s9,sp,36
1c009402:	8b66                	mv	s6,s9
1c009404:	b731                	j	1c009310 <pos_libc_prf+0xd16>
1c009406:	8542                	mv	a0,a6
1c009408:	b69d                	j	1c008f6e <pos_libc_prf+0x974>

1c00940a <pos_init_start>:
1c00940a:	1141                	addi	sp,sp,-16
1c00940c:	c422                	sw	s0,8(sp)
1c00940e:	1c000437          	lui	s0,0x1c000
1c009412:	c606                	sw	ra,12(sp)
1c009414:	00840413          	addi	s0,s0,8 # 1c000008 <ctor_list>
1c009418:	844ff0ef          	jal	ra,1c00845c <pos_soc_init>
1c00941c:	2279                	jal	1c0095aa <pos_irq_init>
1c00941e:	2ac1                	jal	1c0095ee <pos_soc_event_init>
1c009420:	20e5                	jal	1c009508 <pos_allocs_init>
1c009422:	405c                	lw	a5,4(s0)
1c009424:	c791                	beqz	a5,1c009430 <pos_init_start+0x26>
1c009426:	0411                	addi	s0,s0,4
1c009428:	0411                	addi	s0,s0,4
1c00942a:	9782                	jalr	a5
1c00942c:	401c                	lw	a5,0(s0)
1c00942e:	ffed                	bnez	a5,1c009428 <pos_init_start+0x1e>
1c009430:	920ff0ef          	jal	ra,1c008550 <pos_io_start>
1c009434:	300467f3          	csrrsi	a5,mstatus,8
1c009438:	f1402573          	csrr	a0,mhartid
1c00943c:	8515                	srai	a0,a0,0x5
1c00943e:	f2653533          	p.bclr	a0,a0,25,6
1c009442:	47fd                	li	a5,31
1c009444:	00f50a63          	beq	a0,a5,1c009458 <pos_init_start+0x4e>
1c009448:	4422                	lw	s0,8(sp)
1c00944a:	40b2                	lw	ra,12(sp)
1c00944c:	1c0085b7          	lui	a1,0x1c008
1c009450:	38658593          	addi	a1,a1,902 # 1c008386 <main>
1c009454:	0141                	addi	sp,sp,16
1c009456:	a405                	j	1c009676 <cluster_start>
1c009458:	40b2                	lw	ra,12(sp)
1c00945a:	4422                	lw	s0,8(sp)
1c00945c:	0141                	addi	sp,sp,16
1c00945e:	8082                	ret

1c009460 <pos_init_stop>:
1c009460:	1141                	addi	sp,sp,-16
1c009462:	c422                	sw	s0,8(sp)
1c009464:	1c000437          	lui	s0,0x1c000
1c009468:	c606                	sw	ra,12(sp)
1c00946a:	01440413          	addi	s0,s0,20 # 1c000014 <dtor_list>
1c00946e:	8e6ff0ef          	jal	ra,1c008554 <pos_io_stop>
1c009472:	405c                	lw	a5,4(s0)
1c009474:	c791                	beqz	a5,1c009480 <pos_init_stop+0x20>
1c009476:	0411                	addi	s0,s0,4
1c009478:	0411                	addi	s0,s0,4
1c00947a:	9782                	jalr	a5
1c00947c:	401c                	lw	a5,0(s0)
1c00947e:	ffed                	bnez	a5,1c009478 <pos_init_stop+0x18>
1c009480:	40b2                	lw	ra,12(sp)
1c009482:	4422                	lw	s0,8(sp)
1c009484:	0141                	addi	sp,sp,16
1c009486:	8082                	ret

1c009488 <pos_alloc_init>:
1c009488:	00758793          	addi	a5,a1,7
1c00948c:	c407b7b3          	p.bclr	a5,a5,2,0
1c009490:	40b785b3          	sub	a1,a5,a1
1c009494:	c11c                	sw	a5,0(a0)
1c009496:	8e0d                	sub	a2,a2,a1
1c009498:	00c05763          	blez	a2,1c0094a6 <pos_alloc_init+0x1e>
1c00949c:	c4063633          	p.bclr	a2,a2,2,0
1c0094a0:	c390                	sw	a2,0(a5)
1c0094a2:	0007a223          	sw	zero,4(a5)
1c0094a6:	8082                	ret

1c0094a8 <pos_alloc>:
1c0094a8:	4110                	lw	a2,0(a0)
1c0094aa:	059d                	addi	a1,a1,7
1c0094ac:	c405b5b3          	p.bclr	a1,a1,2,0
1c0094b0:	ca31                	beqz	a2,1c009504 <pos_alloc+0x5c>
1c0094b2:	4218                	lw	a4,0(a2)
1c0094b4:	425c                	lw	a5,4(a2)
1c0094b6:	02b75963          	ble	a1,a4,1c0094e8 <pos_alloc+0x40>
1c0094ba:	cb81                	beqz	a5,1c0094ca <pos_alloc+0x22>
1c0094bc:	4398                	lw	a4,0(a5)
1c0094be:	43d4                	lw	a3,4(a5)
1c0094c0:	00b75763          	ble	a1,a4,1c0094ce <pos_alloc+0x26>
1c0094c4:	863e                	mv	a2,a5
1c0094c6:	87b6                	mv	a5,a3
1c0094c8:	fbf5                	bnez	a5,1c0094bc <pos_alloc+0x14>
1c0094ca:	853e                	mv	a0,a5
1c0094cc:	8082                	ret
1c0094ce:	00b70a63          	beq	a4,a1,1c0094e2 <pos_alloc+0x3a>
1c0094d2:	00b78533          	add	a0,a5,a1
1c0094d6:	8f0d                	sub	a4,a4,a1
1c0094d8:	c118                	sw	a4,0(a0)
1c0094da:	c154                	sw	a3,4(a0)
1c0094dc:	c248                	sw	a0,4(a2)
1c0094de:	853e                	mv	a0,a5
1c0094e0:	8082                	ret
1c0094e2:	c254                	sw	a3,4(a2)
1c0094e4:	853e                	mv	a0,a5
1c0094e6:	8082                	ret
1c0094e8:	00e58b63          	beq	a1,a4,1c0094fe <pos_alloc+0x56>
1c0094ec:	00b606b3          	add	a3,a2,a1
1c0094f0:	8f0d                	sub	a4,a4,a1
1c0094f2:	c2dc                	sw	a5,4(a3)
1c0094f4:	c298                	sw	a4,0(a3)
1c0094f6:	87b2                	mv	a5,a2
1c0094f8:	c114                	sw	a3,0(a0)
1c0094fa:	853e                	mv	a0,a5
1c0094fc:	8082                	ret
1c0094fe:	c11c                	sw	a5,0(a0)
1c009500:	87b2                	mv	a5,a2
1c009502:	b7e1                	j	1c0094ca <pos_alloc+0x22>
1c009504:	4781                	li	a5,0
1c009506:	b7d1                	j	1c0094ca <pos_alloc+0x22>

1c009508 <pos_allocs_init>:
1c009508:	1141                	addi	sp,sp,-16
1c00950a:	1c0015b7          	lui	a1,0x1c001
1c00950e:	c606                	sw	ra,12(sp)
1c009510:	8a458793          	addi	a5,a1,-1884 # 1c0008a4 <__l2_priv0_end>
1c009514:	1c008637          	lui	a2,0x1c008
1c009518:	04c7cc63          	blt	a5,a2,1c009570 <pos_allocs_init+0x68>
1c00951c:	4581                	li	a1,0
1c00951e:	4601                	li	a2,0
1c009520:	1c001537          	lui	a0,0x1c001
1c009524:	89450513          	addi	a0,a0,-1900 # 1c000894 <pos_alloc_l2>
1c009528:	3785                	jal	1c009488 <pos_alloc_init>
1c00952a:	1c0095b7          	lui	a1,0x1c009
1c00952e:	75858793          	addi	a5,a1,1880 # 1c009758 <__l2_priv1_end>
1c009532:	1c010637          	lui	a2,0x1c010
1c009536:	02c7c963          	blt	a5,a2,1c009568 <pos_allocs_init+0x60>
1c00953a:	4581                	li	a1,0
1c00953c:	4601                	li	a2,0
1c00953e:	1c001537          	lui	a0,0x1c001
1c009542:	89850513          	addi	a0,a0,-1896 # 1c000898 <pos_alloc_l2+0x4>
1c009546:	3789                	jal	1c009488 <pos_alloc_init>
1c009548:	100005b7          	lui	a1,0x10000
1c00954c:	40b2                	lw	ra,12(sp)
1c00954e:	70858793          	addi	a5,a1,1800 # 10000708 <__l2_shared_end>
1c009552:	1c080637          	lui	a2,0x1c080
1c009556:	1c001537          	lui	a0,0x1c001
1c00955a:	8e1d                	sub	a2,a2,a5
1c00955c:	70858593          	addi	a1,a1,1800
1c009560:	89c50513          	addi	a0,a0,-1892 # 1c00089c <pos_alloc_l2+0x8>
1c009564:	0141                	addi	sp,sp,16
1c009566:	b70d                	j	1c009488 <pos_alloc_init>
1c009568:	8e1d                	sub	a2,a2,a5
1c00956a:	75858593          	addi	a1,a1,1880
1c00956e:	bfc1                	j	1c00953e <pos_allocs_init+0x36>
1c009570:	8e1d                	sub	a2,a2,a5
1c009572:	8a458593          	addi	a1,a1,-1884
1c009576:	b76d                	j	1c009520 <pos_allocs_init+0x18>

1c009578 <alloc_init_l1>:
1c009578:	100007b7          	lui	a5,0x10000
1c00957c:	01651593          	slli	a1,a0,0x16
1c009580:	70878793          	addi	a5,a5,1800 # 10000708 <__l2_shared_end>
1c009584:	95be                	add	a1,a1,a5
1c009586:	1c0017b7          	lui	a5,0x1c001
1c00958a:	050a                	slli	a0,a0,0x2
1c00958c:	6641                	lui	a2,0x10
1c00958e:	89078793          	addi	a5,a5,-1904 # 1c000890 <pos_alloc_l1>
1c009592:	8f860613          	addi	a2,a2,-1800 # f8f8 <__l1_heap_size>
1c009596:	953e                	add	a0,a0,a5
1c009598:	bdc5                	j	1c009488 <pos_alloc_init>

1c00959a <pi_l1_malloc>:
1c00959a:	1c0017b7          	lui	a5,0x1c001
1c00959e:	050a                	slli	a0,a0,0x2
1c0095a0:	89078793          	addi	a5,a5,-1904 # 1c000890 <pos_alloc_l1>
1c0095a4:	953e                	add	a0,a0,a5
1c0095a6:	b709                	j	1c0094a8 <pos_alloc>

1c0095a8 <__rt_handle_illegal_instr>:
1c0095a8:	8082                	ret

1c0095aa <pos_irq_init>:
1c0095aa:	f14027f3          	csrr	a5,mhartid
1c0095ae:	477d                	li	a4,31
1c0095b0:	ca5797b3          	p.extractu	a5,a5,5,5
1c0095b4:	00e78f63          	beq	a5,a4,1c0095d2 <pos_irq_init+0x28>
1c0095b8:	002047b7          	lui	a5,0x204
1c0095bc:	577d                	li	a4,-1
1c0095be:	cb98                	sw	a4,16(a5)
1c0095c0:	1c0087b7          	lui	a5,0x1c008
1c0095c4:	00078793          	mv	a5,a5
1c0095c8:	c007c7b3          	p.bset	a5,a5,0,0
1c0095cc:	30579073          	csrw	mtvec,a5
1c0095d0:	8082                	ret
1c0095d2:	1a10a7b7          	lui	a5,0x1a10a
1c0095d6:	577d                	li	a4,-1
1c0095d8:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa109100>
1c0095dc:	1c0087b7          	lui	a5,0x1c008
1c0095e0:	00078793          	mv	a5,a5
1c0095e4:	c007c7b3          	p.bset	a5,a5,0,0
1c0095e8:	30579073          	csrw	mtvec,a5
1c0095ec:	8082                	ret

1c0095ee <pos_soc_event_init>:
1c0095ee:	1a1067b7          	lui	a5,0x1a106
1c0095f2:	577d                	li	a4,-1
1c0095f4:	00478693          	addi	a3,a5,4 # 1a106004 <__l2_shared_end+0xa1058fc>
1c0095f8:	c298                	sw	a4,0(a3)
1c0095fa:	00878693          	addi	a3,a5,8
1c0095fe:	c298                	sw	a4,0(a3)
1c009600:	00c78693          	addi	a3,a5,12
1c009604:	c298                	sw	a4,0(a3)
1c009606:	01078693          	addi	a3,a5,16
1c00960a:	c298                	sw	a4,0(a3)
1c00960c:	01478693          	addi	a3,a5,20
1c009610:	c298                	sw	a4,0(a3)
1c009612:	01878693          	addi	a3,a5,24
1c009616:	c298                	sw	a4,0(a3)
1c009618:	01c78693          	addi	a3,a5,28
1c00961c:	c298                	sw	a4,0(a3)
1c00961e:	02078793          	addi	a5,a5,32
1c009622:	c398                	sw	a4,0(a5)
1c009624:	8082                	ret

1c009626 <cluster_entry_stub>:
1c009626:	1141                	addi	sp,sp,-16
1c009628:	c606                	sw	ra,12(sp)
1c00962a:	002047b7          	lui	a5,0x204
1c00962e:	00070737          	lui	a4,0x70
1c009632:	c798                	sw	a4,8(a5)
1c009634:	0ff00713          	li	a4,255
1c009638:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4908>
1c00963c:	00e7a023          	sw	a4,0(a5)
1c009640:	00e7a623          	sw	a4,12(a5)
1c009644:	1c0017b7          	lui	a5,0x1c001
1c009648:	8a07a783          	lw	a5,-1888(a5) # 1c0008a0 <cluster_entry>
1c00964c:	9782                	jalr	a5
1c00964e:	f14027f3          	csrr	a5,mhartid
1c009652:	f457b7b3          	p.bclr	a5,a5,26,5
1c009656:	eb89                	bnez	a5,1c009668 <cluster_entry_stub+0x42>
1c009658:	1c001737          	lui	a4,0x1c001
1c00965c:	1c0017b7          	lui	a5,0x1c001
1c009660:	88a72423          	sw	a0,-1912(a4) # 1c000888 <_bss_start>
1c009664:	8807a623          	sw	zero,-1908(a5) # 1c00088c <cluster_running>
1c009668:	002047b7          	lui	a5,0x204
1c00966c:	577d                	li	a4,-1
1c00966e:	c3d8                	sw	a4,4(a5)
1c009670:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f4740>
1c009674:	a001                	j	1c009674 <cluster_entry_stub+0x4e>

1c009676 <cluster_start>:
1c009676:	1141                	addi	sp,sp,-16
1c009678:	1c0017b7          	lui	a5,0x1c001
1c00967c:	c226                	sw	s1,4(sp)
1c00967e:	84aa                	mv	s1,a0
1c009680:	4509                	li	a0,2
1c009682:	8ab7a023          	sw	a1,-1888(a5) # 1c0008a0 <cluster_entry>
1c009686:	c606                	sw	ra,12(sp)
1c009688:	c422                	sw	s0,8(sp)
1c00968a:	d29fe0ef          	jal	ra,1c0083b2 <pos_fll_init>
1c00968e:	8526                	mv	a0,s1
1c009690:	35e5                	jal	1c009578 <alloc_init_l1>
1c009692:	04048413          	addi	s0,s1,64 # 10000040 <W8_su+0x3c>
1c009696:	00201737          	lui	a4,0x201
1c00969a:	40070713          	addi	a4,a4,1024 # 201400 <__l1_heap_size+0x1f1b08>
1c00969e:	045a                	slli	s0,s0,0x16
1c0096a0:	56fd                	li	a3,-1
1c0096a2:	f14027f3          	csrr	a5,mhartid
1c0096a6:	00d46723          	p.sw	a3,a4(s0)
1c0096aa:	ca5797b3          	p.extractu	a5,a5,5,5
1c0096ae:	477d                	li	a4,31
1c0096b0:	00e78f63          	beq	a5,a4,1c0096ce <cluster_start+0x58>
1c0096b4:	002047b7          	lui	a5,0x204
1c0096b8:	00070737          	lui	a4,0x70
1c0096bc:	c798                	sw	a4,8(a5)
1c0096be:	0ff00713          	li	a4,255
1c0096c2:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4908>
1c0096c6:	00e7a023          	sw	a4,0(a5)
1c0096ca:	00e7a623          	sw	a4,12(a5)
1c0096ce:	8526                	mv	a0,s1
1c0096d0:	3565                	jal	1c009578 <alloc_init_l1>
1c0096d2:	6591                	lui	a1,0x4
1c0096d4:	8526                	mv	a0,s1
1c0096d6:	35d1                	jal	1c00959a <pi_l1_malloc>
1c0096d8:	100007b7          	lui	a5,0x10000
1c0096dc:	70a7a223          	sw	a0,1796(a5) # 10000704 <cluster_stacks>
1c0096e0:	cd15                	beqz	a0,1c00971c <cluster_start+0xa6>
1c0096e2:	00200637          	lui	a2,0x200
1c0096e6:	1c0017b7          	lui	a5,0x1c001
1c0096ea:	4705                	li	a4,1
1c0096ec:	1c0085b7          	lui	a1,0x1c008
1c0096f0:	04060613          	addi	a2,a2,64 # 200040 <__l1_heap_size+0x1f0748>
1c0096f4:	88e7a623          	sw	a4,-1908(a5) # 1c00088c <cluster_running>
1c0096f8:	08058593          	addi	a1,a1,128 # 1c008080 <_start>
1c0096fc:	9622                	add	a2,a2,s0
1c0096fe:	4701                	li	a4,0
1c009700:	008350fb          	lp.setupi	x1,8,1c00970c <cluster_start+0x96>
1c009704:	00271693          	slli	a3,a4,0x2
1c009708:	00b6e623          	p.sw	a1,a2(a3)
1c00970c:	0705                	addi	a4,a4,1
1c00970e:	002007b7          	lui	a5,0x200
1c009712:	07a1                	addi	a5,a5,8
1c009714:	0ff00713          	li	a4,255
1c009718:	00e467a3          	p.sw	a4,a5(s0)
1c00971c:	40b2                	lw	ra,12(sp)
1c00971e:	4422                	lw	s0,8(sp)
1c009720:	4492                	lw	s1,4(sp)
1c009722:	0141                	addi	sp,sp,16
1c009724:	8082                	ret

1c009726 <cluster_wait>:
1c009726:	1c001737          	lui	a4,0x1c001
1c00972a:	88c70713          	addi	a4,a4,-1908 # 1c00088c <cluster_running>
1c00972e:	431c                	lw	a5,0(a4)
1c009730:	fffd                	bnez	a5,1c00972e <cluster_wait+0x8>
1c009732:	1c0017b7          	lui	a5,0x1c001
1c009736:	8887a503          	lw	a0,-1912(a5) # 1c000888 <_bss_start>
1c00973a:	8082                	ret

1c00973c <synch_barrier>:
1c00973c:	f14027f3          	csrr	a5,mhartid
1c009740:	477d                	li	a4,31
1c009742:	ca5797b3          	p.extractu	a5,a5,5,5
1c009746:	00e78863          	beq	a5,a4,1c009756 <synch_barrier+0x1a>
1c00974a:	002047b7          	lui	a5,0x204
1c00974e:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4908>
1c009752:	01c7e703          	p.elw	a4,28(a5)
1c009756:	8082                	ret
make[1]: Leaving directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/matmul_8b_int_2cores'
