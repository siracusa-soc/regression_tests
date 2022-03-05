Flags : -O2 -g -Iinc -fno-tree-loop-optimize -fno-tree-loop-distribute-patterns  -DNB_RUN=1  
make[1]: Entering directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/matmul_8b_int_1cores'
/usr/scratch/fenga5/beppe/INSTALL-PULP/bin/riscv32-unknown-elf-objdump -Mmarch=rv32imcxgap9 -d /scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/matmul_8b_int_1cores/build/ne16_test/ne16_test

/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/matmul_8b_int_1cores/build/ne16_test/ne16_test:     file format elf32-littleriscv


Disassembly of section .vectors:

1c008000 <__irq_vector_base>:
1c008000:	5a20106f          	j	1c0095a2 <__rt_handle_illegal_instr>
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
1c008084:	51e0106f          	j	1c0095a2 <__rt_handle_illegal_instr>

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
1c0080b4:	56c0106f          	j	1c009620 <cluster_entry_stub>

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
1c00811a:	2ea010ef          	jal	ra,1c009404 <pos_init_start>
1c00811e:	00000513          	li	a0,0
1c008122:	00000593          	li	a1,0
1c008126:	00000397          	auipc	t2,0x0
1c00812a:	25a38393          	addi	t2,t2,602 # 1c008380 <main>
1c00812e:	000380e7          	jalr	t2
1c008132:	842a                	mv	s0,a0
1c008134:	326010ef          	jal	ra,1c00945a <pos_init_stop>
1c008138:	8522                	mv	a0,s0
1c00813a:	3fe000ef          	jal	ra,1c008538 <exit>

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
1c00817e:	2ed1                	jal	1c008552 <printf>
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
1c00819e:	cc22                	sw	s0,24(sp)
1c0081a0:	f1402473          	csrr	s0,mhartid
1c0081a4:	f4543433          	p.bclr	s0,s0,26,5
1c0081a8:	ce06                	sw	ra,28(sp)
1c0081aa:	ca26                	sw	s1,20(sp)
1c0081ac:	c84a                	sw	s2,16(sp)
1c0081ae:	c64e                	sw	s3,12(sp)
1c0081b0:	c452                	sw	s4,8(sp)
1c0081b2:	c256                	sw	s5,4(sp)
1c0081b4:	c05a                	sw	s6,0(sp)
1c0081b6:	580010ef          	jal	ra,1c009736 <synch_barrier>
1c0081ba:	57c010ef          	jal	ra,1c009736 <synch_barrier>
1c0081be:	c405                	beqz	s0,1c0081e6 <cluster_entry+0x4a>
1c0081c0:	576010ef          	jal	ra,1c009736 <synch_barrier>
1c0081c4:	780027f3          	csrr	a5,pccr0
1c0081c8:	c079                	beqz	s0,1c00828e <cluster_entry+0xf2>
1c0081ca:	56c010ef          	jal	ra,1c009736 <synch_barrier>
1c0081ce:	4401                	li	s0,0
1c0081d0:	8522                	mv	a0,s0
1c0081d2:	40f2                	lw	ra,28(sp)
1c0081d4:	4462                	lw	s0,24(sp)
1c0081d6:	44d2                	lw	s1,20(sp)
1c0081d8:	4942                	lw	s2,16(sp)
1c0081da:	49b2                	lw	s3,12(sp)
1c0081dc:	4a22                	lw	s4,8(sp)
1c0081de:	4a92                	lw	s5,4(sp)
1c0081e0:	4b02                	lw	s6,0(sp)
1c0081e2:	6105                	addi	sp,sp,32
1c0081e4:	8082                	ret
1c0081e6:	100008b7          	lui	a7,0x10000
1c0081ea:	abbab7b7          	lui	a5,0xabbab
1c0081ee:	00488313          	addi	t1,a7,4 # 10000004 <W8_su>
1c0081f2:	00488b13          	addi	s6,a7,4
1c0081f6:	10000737          	lui	a4,0x10000
1c0081fa:	bba78793          	addi	a5,a5,-1094 # abbaabba <pulp__FC+0xabbaabbb>
1c0081fe:	36030a93          	addi	s5,t1,864
1c008202:	24030a13          	addi	s4,t1,576
1c008206:	c31c                	sw	a5,0(a4)
1c008208:	4e01                	li	t3,0
1c00820a:	4e81                	li	t4,0
1c00820c:	4f01                	li	t5,0
1c00820e:	4f81                	li	t6,0
1c008210:	4281                	li	t0,0
1c008212:	4381                	li	t2,0
1c008214:	4081                	li	ra,0
1c008216:	4481                	li	s1,0
1c008218:	12030313          	addi	t1,t1,288
1c00821c:	00488893          	addi	a7,a7,4
1c008220:	5a0b0993          	addi	s3,s6,1440
1c008224:	480b0913          	addi	s2,s6,1152
1c008228:	048e50fb          	lp.setupi	x1,72,1c008260 <cluster_entry+0xc4>
1c00822c:	0049a78b          	p.lw	a5,4(s3!)
1c008230:	0049270b          	p.lw	a4,4(s2!)
1c008234:	0048a50b          	p.lw	a0,4(a7!)
1c008238:	0043258b          	p.lw	a1,4(t1!)
1c00823c:	004a260b          	p.lw	a2,4(s4!)
1c008240:	004aa68b          	p.lw	a3,4(s5!)
1c008244:	a8a714d7          	pv.sdotusp.b	s1,a4,a0
1c008248:	a8b710d7          	pv.sdotusp.b	ra,a4,a1
1c00824c:	a8c713d7          	pv.sdotusp.b	t2,a4,a2
1c008250:	a8d712d7          	pv.sdotusp.b	t0,a4,a3
1c008254:	a8a79fd7          	pv.sdotusp.b	t6,a5,a0
1c008258:	a8b79f57          	pv.sdotusp.b	t5,a5,a1
1c00825c:	a8c79ed7          	pv.sdotusp.b	t4,a5,a2
1c008260:	a8d79e57          	pv.sdotusp.b	t3,a5,a3
1c008264:	6c9b2023          	sw	s1,1728(s6)
1c008268:	6c1b2223          	sw	ra,1732(s6)
1c00826c:	6c7b2423          	sw	t2,1736(s6)
1c008270:	6c5b2623          	sw	t0,1740(s6)
1c008274:	6dfb2823          	sw	t6,1744(s6)
1c008278:	6deb2a23          	sw	t5,1748(s6)
1c00827c:	6ddb2c23          	sw	t4,1752(s6)
1c008280:	6dcb2e23          	sw	t3,1756(s6)
1c008284:	4b2010ef          	jal	ra,1c009736 <synch_barrier>
1c008288:	780027f3          	csrr	a5,pccr0
1c00828c:	fc1d                	bnez	s0,1c0081ca <cluster_entry+0x2e>
1c00828e:	deadd7b7          	lui	a5,0xdeadd
1c008292:	aca78793          	addi	a5,a5,-1334 # deadcaca <pulp__FC+0xdeadcacb>
1c008296:	100004b7          	lui	s1,0x10000
1c00829a:	c09c                	sw	a5,0(s1)
1c00829c:	49a010ef          	jal	ra,1c009736 <synch_barrier>
1c0082a0:	10000537          	lui	a0,0x10000
1c0082a4:	00450513          	addi	a0,a0,4 # 10000004 <W8_su>
1c0082a8:	6e050593          	addi	a1,a0,1760
1c0082ac:	4621                	li	a2,8
1c0082ae:	6c050513          	addi	a0,a0,1728
1c0082b2:	3571                	jal	1c00813e <checkInt>
1c0082b4:	842a                	mv	s0,a0
1c0082b6:	85aa                	mv	a1,a0
1c0082b8:	1c000537          	lui	a0,0x1c000
1c0082bc:	04c50513          	addi	a0,a0,76 # 1c00004c <__DTOR_END__+0x30>
1c0082c0:	2c49                	jal	1c008552 <printf>
1c0082c2:	c401                	beqz	s0,1c0082ca <cluster_entry+0x12e>
1c0082c4:	4791                	li	a5,4
1c0082c6:	c09c                	sw	a5,0(s1)
1c0082c8:	b721                	j	1c0081d0 <cluster_entry+0x34>
1c0082ca:	4789                	li	a5,2
1c0082cc:	c09c                	sw	a5,0(s1)
1c0082ce:	b709                	j	1c0081d0 <cluster_entry+0x34>

1c0082d0 <run_test>:
1c0082d0:	102007b7          	lui	a5,0x10200
1c0082d4:	07e1                	addi	a5,a5,24
1c0082d6:	4398                	lw	a4,0(a5)
1c0082d8:	1141                	addi	sp,sp,-16
1c0082da:	c0b74733          	p.bset	a4,a4,0,11
1c0082de:	c398                	sw	a4,0(a5)
1c0082e0:	4398                	lw	a4,0(a5)
1c0082e2:	c0874733          	p.bset	a4,a4,0,8
1c0082e6:	c398                	sw	a4,0(a5)
1c0082e8:	4398                	lw	a4,0(a5)
1c0082ea:	ce073733          	p.bclr	a4,a4,7,0
1c0082ee:	c398                	sw	a4,0(a5)
1c0082f0:	4398                	lw	a4,0(a5)
1c0082f2:	c0374733          	p.bset	a4,a4,0,3
1c0082f6:	c398                	sw	a4,0(a5)
1c0082f8:	102017b7          	lui	a5,0x10201
1c0082fc:	0007aa23          	sw	zero,20(a5) # 10201014 <__l2_shared_end+0x20090c>
1c008300:	c402                	sw	zero,8(sp)
1c008302:	4722                	lw	a4,8(sp)
1c008304:	47a5                	li	a5,9
1c008306:	00e7c963          	blt	a5,a4,1c008318 <run_test+0x48>
1c00830a:	4725                	li	a4,9
1c00830c:	47a2                	lw	a5,8(sp)
1c00830e:	0785                	addi	a5,a5,1
1c008310:	c43e                	sw	a5,8(sp)
1c008312:	47a2                	lw	a5,8(sp)
1c008314:	fef75ce3          	ble	a5,a4,1c00830c <run_test+0x3c>
1c008318:	102016b7          	lui	a3,0x10201
1c00831c:	0006aa23          	sw	zero,20(a3) # 10201014 <__l2_shared_end+0x20090c>
1c008320:	6741                	lui	a4,0x10
1c008322:	02170613          	addi	a2,a4,33 # 10021 <__l1_heap_size+0x729>
1c008326:	02068793          	addi	a5,a3,32
1c00832a:	02c7ae23          	sw	a2,60(a5)
1c00832e:	00170613          	addi	a2,a4,1
1c008332:	04c7a023          	sw	a2,64(a5)
1c008336:	04c7a223          	sw	a2,68(a5)
1c00833a:	0709                	addi	a4,a4,2
1c00833c:	04e7a423          	sw	a4,72(a5)
1c008340:	04c7a623          	sw	a2,76(a5)
1c008344:	60000713          	li	a4,1536
1c008348:	04e7ae23          	sw	a4,92(a5)
1c00834c:	0006a0a3          	sw	zero,1(a3)
1c008350:	0006a023          	sw	zero,0(a3)
1c008354:	c602                	sw	zero,12(sp)
1c008356:	4732                	lw	a4,12(sp)
1c008358:	47a5                	li	a5,9
1c00835a:	00e7c963          	blt	a5,a4,1c00836c <run_test+0x9c>
1c00835e:	4725                	li	a4,9
1c008360:	47b2                	lw	a5,12(sp)
1c008362:	0785                	addi	a5,a5,1
1c008364:	c63e                	sw	a5,12(sp)
1c008366:	47b2                	lw	a5,12(sp)
1c008368:	fef75ce3          	ble	a5,a4,1c008360 <run_test+0x90>
1c00836c:	102017b7          	lui	a5,0x10201
1c008370:	20000713          	li	a4,512
1c008374:	02078793          	addi	a5,a5,32 # 10201020 <__l2_shared_end+0x200918>
1c008378:	04e7ae23          	sw	a4,92(a5)
1c00837c:	0141                	addi	sp,sp,16
1c00837e:	8082                	ret

1c008380 <main>:
1c008380:	1141                	addi	sp,sp,-16
1c008382:	f14027f3          	csrr	a5,mhartid
1c008386:	c606                	sw	ra,12(sp)
1c008388:	ca5797b3          	p.extractu	a5,a5,5,5
1c00838c:	c391                	beqz	a5,1c008390 <main+0x10>
1c00838e:	3789                	jal	1c0082d0 <run_test>
1c008390:	1c0085b7          	lui	a1,0x1c008
1c008394:	19c58593          	addi	a1,a1,412 # 1c00819c <cluster_entry>
1c008398:	4501                	li	a0,0
1c00839a:	2d6010ef          	jal	ra,1c009670 <cluster_start>
1c00839e:	4501                	li	a0,0
1c0083a0:	380010ef          	jal	ra,1c009720 <cluster_wait>
1c0083a4:	40b2                	lw	ra,12(sp)
1c0083a6:	4501                	li	a0,0
1c0083a8:	0141                	addi	sp,sp,16
1c0083aa:	8082                	ret

1c0083ac <pos_fll_init>:
1c0083ac:	08152063          	p.beqimm	a0,1,1c00842c <pos_fll_init+0x80>
1c0083b0:	04252a63          	p.beqimm	a0,2,1c008404 <pos_fll_init+0x58>
1c0083b4:	c505                	beqz	a0,1c0083dc <pos_fll_init+0x30>
1c0083b6:	4701                	li	a4,0
1c0083b8:	00470793          	addi	a5,a4,4
1c0083bc:	05300613          	li	a2,83
1c0083c0:	00c70693          	addi	a3,a4,12
1c0083c4:	c390                	sw	a2,0(a5)
1c0083c6:	020c17b7          	lui	a5,0x20c1
1c0083ca:	0721                	addi	a4,a4,8
1c0083cc:	0006a023          	sw	zero,0(a3)
1c0083d0:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b1ee2>
1c0083d4:	c31c                	sw	a5,0(a4)
1c0083d6:	05f68537          	lui	a0,0x5f68
1c0083da:	8082                	ret
1c0083dc:	1a1007b7          	lui	a5,0x1a100
1c0083e0:	00878713          	addi	a4,a5,8 # 1a100008 <__l2_shared_end+0xa0ff900>
1c0083e4:	00c78693          	addi	a3,a5,12
1c0083e8:	05300613          	li	a2,83
1c0083ec:	0791                	addi	a5,a5,4
1c0083ee:	c390                	sw	a2,0(a5)
1c0083f0:	020c17b7          	lui	a5,0x20c1
1c0083f4:	0006a023          	sw	zero,0(a3)
1c0083f8:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b1ee2>
1c0083fc:	c31c                	sw	a5,0(a4)
1c0083fe:	05f68537          	lui	a0,0x5f68
1c008402:	8082                	ret
1c008404:	1a1007b7          	lui	a5,0x1a100
1c008408:	01878713          	addi	a4,a5,24 # 1a100018 <__l2_shared_end+0xa0ff910>
1c00840c:	01c78693          	addi	a3,a5,28
1c008410:	05300613          	li	a2,83
1c008414:	07d1                	addi	a5,a5,20
1c008416:	c390                	sw	a2,0(a5)
1c008418:	020c17b7          	lui	a5,0x20c1
1c00841c:	0006a023          	sw	zero,0(a3)
1c008420:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b1ee2>
1c008424:	c31c                	sw	a5,0(a4)
1c008426:	05f68537          	lui	a0,0x5f68
1c00842a:	8082                	ret
1c00842c:	1a1007b7          	lui	a5,0x1a100
1c008430:	02878713          	addi	a4,a5,40 # 1a100028 <__l2_shared_end+0xa0ff920>
1c008434:	02c78693          	addi	a3,a5,44
1c008438:	05300613          	li	a2,83
1c00843c:	02478793          	addi	a5,a5,36
1c008440:	c390                	sw	a2,0(a5)
1c008442:	020c17b7          	lui	a5,0x20c1
1c008446:	0006a023          	sw	zero,0(a3)
1c00844a:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b1ee2>
1c00844e:	c31c                	sw	a5,0(a4)
1c008450:	05f68537          	lui	a0,0x5f68
1c008454:	8082                	ret

1c008456 <pos_soc_init>:
1c008456:	8082                	ret

1c008458 <pos_wait_forever>:
1c008458:	f14027f3          	csrr	a5,mhartid
1c00845c:	477d                	li	a4,31
1c00845e:	ca5797b3          	p.extractu	a5,a5,5,5
1c008462:	00e78963          	beq	a5,a4,1c008474 <pos_wait_forever+0x1c>
1c008466:	002047b7          	lui	a5,0x204
1c00846a:	577d                	li	a4,-1
1c00846c:	c3d8                	sw	a4,4(a5)
1c00846e:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f4740>
1c008472:	a001                	j	1c008472 <pos_wait_forever+0x1a>
1c008474:	1a10a7b7          	lui	a5,0x1a10a
1c008478:	577d                	li	a4,-1
1c00847a:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa109100>
1c00847e:	10500073          	wfi
1c008482:	10500073          	wfi
1c008486:	bfe5                	j	1c00847e <pos_wait_forever+0x26>

1c008488 <memcpy>:
1c008488:	00a5e7b3          	or	a5,a1,a0
1c00848c:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008490:	cf81                	beqz	a5,1c0084a8 <memcpy+0x20>
1c008492:	87aa                	mv	a5,a0
1c008494:	ce0d                	beqz	a2,1c0084ce <memcpy+0x46>
1c008496:	006640fb          	lp.setup	x1,a2,1c0084a2 <memcpy+0x1a>
1c00849a:	0005c703          	lbu	a4,0(a1)
1c00849e:	0785                	addi	a5,a5,1
1c0084a0:	0585                	addi	a1,a1,1
1c0084a2:	fee78fa3          	sb	a4,-1(a5)
1c0084a6:	8082                	ret
1c0084a8:	fa2637b3          	p.bclr	a5,a2,29,2
1c0084ac:	ef99                	bnez	a5,1c0084ca <memcpy+0x42>
1c0084ae:	de65                	beqz	a2,1c0084a6 <memcpy+0x1e>
1c0084b0:	1671                	addi	a2,a2,-4
1c0084b2:	00265793          	srli	a5,a2,0x2
1c0084b6:	872a                	mv	a4,a0
1c0084b8:	0785                	addi	a5,a5,1
1c0084ba:	0057c0fb          	lp.setup	x1,a5,1c0084c4 <memcpy+0x3c>
1c0084be:	4194                	lw	a3,0(a1)
1c0084c0:	0711                	addi	a4,a4,4
1c0084c2:	0591                	addi	a1,a1,4
1c0084c4:	fed72e23          	sw	a3,-4(a4)
1c0084c8:	8082                	ret
1c0084ca:	87aa                	mv	a5,a0
1c0084cc:	b7e9                	j	1c008496 <memcpy+0xe>
1c0084ce:	8082                	ret

1c0084d0 <memmove>:
1c0084d0:	40b507b3          	sub	a5,a0,a1
1c0084d4:	00c7fd63          	bleu	a2,a5,1c0084ee <memmove+0x1e>
1c0084d8:	87b2                	mv	a5,a2
1c0084da:	0077c0fb          	lp.setup	x1,a5,1c0084e8 <memmove+0x18>
1c0084de:	167d                	addi	a2,a2,-1
1c0084e0:	00c58733          	add	a4,a1,a2
1c0084e4:	00074703          	lbu	a4,0(a4)
1c0084e8:	00e54623          	p.sb	a4,a2(a0)
1c0084ec:	8082                	ret
1c0084ee:	87aa                	mv	a5,a0
1c0084f0:	ca01                	beqz	a2,1c008500 <memmove+0x30>
1c0084f2:	004640fb          	lp.setup	x1,a2,1c0084fa <memmove+0x2a>
1c0084f6:	0015c70b          	p.lbu	a4,1(a1!)
1c0084fa:	00e780ab          	p.sb	a4,1(a5!)
1c0084fe:	8082                	ret
1c008500:	8082                	ret

1c008502 <strchr>:
1c008502:	00054783          	lbu	a5,0(a0) # 5f68000 <__l1_heap_size+0x5f58708>
1c008506:	0ff5f593          	andi	a1,a1,255
1c00850a:	00b78863          	beq	a5,a1,1c00851a <strchr+0x18>
1c00850e:	c799                	beqz	a5,1c00851c <strchr+0x1a>
1c008510:	0505                	addi	a0,a0,1
1c008512:	00054783          	lbu	a5,0(a0)
1c008516:	feb79ce3          	bne	a5,a1,1c00850e <strchr+0xc>
1c00851a:	8082                	ret
1c00851c:	0015b593          	seqz	a1,a1
1c008520:	40b005b3          	neg	a1,a1
1c008524:	8d6d                	and	a0,a0,a1
1c008526:	8082                	ret

1c008528 <pos_libc_fputc_locked>:
1c008528:	1a1047b7          	lui	a5,0x1a104
1c00852c:	0ff57513          	andi	a0,a0,255
1c008530:	d388                	sw	a0,32(a5)
1c008532:	4501                	li	a0,0
1c008534:	8082                	ret

1c008536 <pos_libc_prf_locked>:
1c008536:	a87d                	j	1c0085f4 <pos_libc_prf>

1c008538 <exit>:
1c008538:	1141                	addi	sp,sp,-16
1c00853a:	c606                	sw	ra,12(sp)
1c00853c:	1a1047b7          	lui	a5,0x1a104
1c008540:	c1f54533          	p.bset	a0,a0,0,31
1c008544:	0aa7a023          	sw	a0,160(a5) # 1a1040a0 <__l2_shared_end+0xa103998>
1c008548:	3f01                	jal	1c008458 <pos_wait_forever>

1c00854a <pos_io_start>:
1c00854a:	4501                	li	a0,0
1c00854c:	8082                	ret

1c00854e <pos_io_stop>:
1c00854e:	4501                	li	a0,0
1c008550:	8082                	ret

1c008552 <printf>:
1c008552:	7139                	addi	sp,sp,-64
1c008554:	02410313          	addi	t1,sp,36
1c008558:	d432                	sw	a2,40(sp)
1c00855a:	862a                	mv	a2,a0
1c00855c:	1c008537          	lui	a0,0x1c008
1c008560:	d22e                	sw	a1,36(sp)
1c008562:	d636                	sw	a3,44(sp)
1c008564:	4589                	li	a1,2
1c008566:	869a                	mv	a3,t1
1c008568:	52850513          	addi	a0,a0,1320 # 1c008528 <pos_libc_fputc_locked>
1c00856c:	ce06                	sw	ra,28(sp)
1c00856e:	d83a                	sw	a4,48(sp)
1c008570:	da3e                	sw	a5,52(sp)
1c008572:	dc42                	sw	a6,56(sp)
1c008574:	de46                	sw	a7,60(sp)
1c008576:	c61a                	sw	t1,12(sp)
1c008578:	3f7d                	jal	1c008536 <pos_libc_prf_locked>
1c00857a:	40f2                	lw	ra,28(sp)
1c00857c:	6121                	addi	sp,sp,64
1c00857e:	8082                	ret

1c008580 <pos_libc_to_x>:
1c008580:	872a                	mv	a4,a0
1c008582:	88aa                	mv	a7,a0
1c008584:	4e25                	li	t3,9
1c008586:	02c5f333          	remu	t1,a1,a2
1c00858a:	4781                	li	a5,0
1c00858c:	00188813          	addi	a6,a7,1
1c008590:	0ff37513          	andi	a0,t1,255
1c008594:	02c5d5b3          	divu	a1,a1,a2
1c008598:	03050513          	addi	a0,a0,48
1c00859c:	006e7463          	bleu	t1,t3,1c0085a4 <pos_libc_to_x+0x24>
1c0085a0:	02700793          	li	a5,39
1c0085a4:	97aa                	add	a5,a5,a0
1c0085a6:	00f88023          	sb	a5,0(a7)
1c0085aa:	88c2                	mv	a7,a6
1c0085ac:	fde9                	bnez	a1,1c008586 <pos_libc_to_x+0x6>
1c0085ae:	40e80533          	sub	a0,a6,a4
1c0085b2:	02d55f63          	ble	a3,a0,1c0085f0 <pos_libc_to_x+0x70>
1c0085b6:	410707b3          	sub	a5,a4,a6
1c0085ba:	03000613          	li	a2,48
1c0085be:	96be                	add	a3,a3,a5
1c0085c0:	0086c0fb          	lp.setup	x1,a3,1c0085d0 <pos_libc_to_x+0x50>
1c0085c4:	00180793          	addi	a5,a6,1
1c0085c8:	00c80023          	sb	a2,0(a6)
1c0085cc:	40e78533          	sub	a0,a5,a4
1c0085d0:	883e                	mv	a6,a5
1c0085d2:	fe078fab          	p.sb	zero,-1(a5!)
1c0085d6:	00f77c63          	bleu	a5,a4,1c0085ee <pos_libc_to_x+0x6e>
1c0085da:	00074603          	lbu	a2,0(a4)
1c0085de:	0007c683          	lbu	a3,0(a5)
1c0085e2:	fec78fab          	p.sb	a2,-1(a5!)
1c0085e6:	00d700ab          	p.sb	a3,1(a4!)
1c0085ea:	fef768e3          	bltu	a4,a5,1c0085da <pos_libc_to_x+0x5a>
1c0085ee:	8082                	ret
1c0085f0:	87c2                	mv	a5,a6
1c0085f2:	b7c5                	j	1c0085d2 <pos_libc_to_x+0x52>

1c0085f4 <pos_libc_prf>:
1c0085f4:	7169                	addi	sp,sp,-304
1c0085f6:	12912223          	sw	s1,292(sp)
1c0085fa:	13212023          	sw	s2,288(sp)
1c0085fe:	11312e23          	sw	s3,284(sp)
1c008602:	11412c23          	sw	s4,280(sp)
1c008606:	11512a23          	sw	s5,276(sp)
1c00860a:	dfee                	sw	s11,252(sp)
1c00860c:	12112623          	sw	ra,300(sp)
1c008610:	12812423          	sw	s0,296(sp)
1c008614:	11612823          	sw	s6,272(sp)
1c008618:	11712623          	sw	s7,268(sp)
1c00861c:	11812423          	sw	s8,264(sp)
1c008620:	11912223          	sw	s9,260(sp)
1c008624:	11a12023          	sw	s10,256(sp)
1c008628:	84aa                	mv	s1,a0
1c00862a:	8a2e                	mv	s4,a1
1c00862c:	8db2                	mv	s11,a2
1c00862e:	8936                	mv	s2,a3
1c008630:	4a81                	li	s5,0
1c008632:	1c0009b7          	lui	s3,0x1c000
1c008636:	000dc503          	lbu	a0,0(s11)
1c00863a:	0d85                	addi	s11,s11,1
1c00863c:	cd11                	beqz	a0,1c008658 <pos_libc_prf+0x64>
1c00863e:	02500793          	li	a5,37
1c008642:	04f50763          	beq	a0,a5,1c008690 <pos_libc_prf+0x9c>
1c008646:	85d2                	mv	a1,s4
1c008648:	9482                	jalr	s1
1c00864a:	15f52c63          	p.beqimm	a0,-1,1c0087a2 <pos_libc_prf+0x1ae>
1c00864e:	0a85                	addi	s5,s5,1
1c008650:	000dc503          	lbu	a0,0(s11)
1c008654:	0d85                	addi	s11,s11,1
1c008656:	f565                	bnez	a0,1c00863e <pos_libc_prf+0x4a>
1c008658:	12c12083          	lw	ra,300(sp)
1c00865c:	12812403          	lw	s0,296(sp)
1c008660:	8556                	mv	a0,s5
1c008662:	12412483          	lw	s1,292(sp)
1c008666:	12012903          	lw	s2,288(sp)
1c00866a:	11c12983          	lw	s3,284(sp)
1c00866e:	11812a03          	lw	s4,280(sp)
1c008672:	11412a83          	lw	s5,276(sp)
1c008676:	11012b03          	lw	s6,272(sp)
1c00867a:	10c12b83          	lw	s7,268(sp)
1c00867e:	10812c03          	lw	s8,264(sp)
1c008682:	10412c83          	lw	s9,260(sp)
1c008686:	10012d03          	lw	s10,256(sp)
1c00868a:	5dfe                	lw	s11,252(sp)
1c00868c:	6155                	addi	sp,sp,304
1c00868e:	8082                	ret
1c008690:	000dcc03          	lbu	s8,0(s11)
1c008694:	02000313          	li	t1,32
1c008698:	001d8d13          	addi	s10,s11,1
1c00869c:	06498513          	addi	a0,s3,100 # 1c000064 <__DTOR_END__+0x48>
1c0086a0:	85e2                	mv	a1,s8
1c0086a2:	c21a                	sw	t1,4(sp)
1c0086a4:	c602                	sw	zero,12(sp)
1c0086a6:	c402                	sw	zero,8(sp)
1c0086a8:	c802                	sw	zero,16(sp)
1c0086aa:	c002                	sw	zero,0(sp)
1c0086ac:	02300413          	li	s0,35
1c0086b0:	02d00b93          	li	s7,45
1c0086b4:	03000c93          	li	s9,48
1c0086b8:	8b6a                	mv	s6,s10
1c0086ba:	35a1                	jal	1c008502 <strchr>
1c0086bc:	c905                	beqz	a0,1c0086ec <pos_libc_prf+0xf8>
1c0086be:	108c0b63          	beq	s8,s0,1c0087d4 <pos_libc_prf+0x1e0>
1c0086c2:	0f847263          	bleu	s8,s0,1c0087a6 <pos_libc_prf+0x1b2>
1c0086c6:	117c0363          	beq	s8,s7,1c0087cc <pos_libc_prf+0x1d8>
1c0086ca:	0f9c0c63          	beq	s8,s9,1c0087c2 <pos_libc_prf+0x1ce>
1c0086ce:	02b00593          	li	a1,43
1c0086d2:	0ebc0463          	beq	s8,a1,1c0087ba <pos_libc_prf+0x1c6>
1c0086d6:	8dea                	mv	s11,s10
1c0086d8:	000dcc03          	lbu	s8,0(s11)
1c0086dc:	001d8d13          	addi	s10,s11,1
1c0086e0:	06498513          	addi	a0,s3,100
1c0086e4:	85e2                	mv	a1,s8
1c0086e6:	8b6a                	mv	s6,s10
1c0086e8:	3d29                	jal	1c008502 <strchr>
1c0086ea:	f971                	bnez	a0,1c0086be <pos_libc_prf+0xca>
1c0086ec:	02a00613          	li	a2,42
1c0086f0:	10cc0863          	beq	s8,a2,1c008800 <pos_libc_prf+0x20c>
1c0086f4:	fd0c0613          	addi	a2,s8,-48
1c0086f8:	45a5                	li	a1,9
1c0086fa:	4401                	li	s0,0
1c0086fc:	0ec5f263          	bleu	a2,a1,1c0087e0 <pos_libc_prf+0x1ec>
1c008700:	02e00713          	li	a4,46
1c008704:	5bfd                	li	s7,-1
1c008706:	14ec0563          	beq	s8,a4,1c008850 <pos_libc_prf+0x25c>
1c00870a:	1c000537          	lui	a0,0x1c000
1c00870e:	85e2                	mv	a1,s8
1c008710:	06c50513          	addi	a0,a0,108 # 1c00006c <__DTOR_END__+0x50>
1c008714:	33fd                	jal	1c008502 <strchr>
1c008716:	8dda                	mv	s11,s6
1c008718:	c509                	beqz	a0,1c008722 <pos_libc_prf+0x12e>
1c00871a:	000b4c03          	lbu	s8,0(s6)
1c00871e:	001b0d93          	addi	s11,s6,1
1c008722:	06700713          	li	a4,103
1c008726:	0f875b63          	ble	s8,a4,1c00881c <pos_libc_prf+0x228>
1c00872a:	07000713          	li	a4,112
1c00872e:	60ec0863          	beq	s8,a4,1c008d3e <pos_libc_prf+0x74a>
1c008732:	15875363          	ble	s8,a4,1c008878 <pos_libc_prf+0x284>
1c008736:	07500713          	li	a4,117
1c00873a:	5cec0963          	beq	s8,a4,1c008d0c <pos_libc_prf+0x718>
1c00873e:	07800713          	li	a4,120
1c008742:	4cec0b63          	beq	s8,a4,1c008c18 <pos_libc_prf+0x624>
1c008746:	07300713          	li	a4,115
1c00874a:	62ec1563          	bne	s8,a4,1c008d74 <pos_libc_prf+0x780>
1c00874e:	00092583          	lw	a1,0(s2)
1c008752:	00490b13          	addi	s6,s2,4
1c008756:	4d01                	li	s10,0
1c008758:	0c8450fb          	lp.setupi	x1,200,1c008768 <pos_libc_prf+0x174>
1c00875c:	01a58733          	add	a4,a1,s10
1c008760:	00074703          	lbu	a4,0(a4)
1c008764:	60070e63          	beqz	a4,1c008d80 <pos_libc_prf+0x78c>
1c008768:	0d05                	addi	s10,s10,1
1c00876a:	000bc763          	bltz	s7,1c008778 <pos_libc_prf+0x184>
1c00876e:	057d4d33          	p.min	s10,s10,s7
1c008772:	895a                	mv	s2,s6
1c008774:	ec0d01e3          	beqz	s10,1c008636 <pos_libc_prf+0x42>
1c008778:	866a                	mv	a2,s10
1c00877a:	1048                	addi	a0,sp,36
1c00877c:	3331                	jal	1c008488 <memcpy>
1c00877e:	895a                	mv	s2,s6
1c008780:	4e8d4663          	blt	s10,s0,1c008c6c <pos_libc_prf+0x678>
1c008784:	846a                	mv	s0,s10
1c008786:	02410b13          	addi	s6,sp,36
1c00878a:	a029                	j	1c008794 <pos_libc_prf+0x1a0>
1c00878c:	0b05                	addi	s6,s6,1
1c00878e:	0a85                	addi	s5,s5,1
1c008790:	ea0403e3          	beqz	s0,1c008636 <pos_libc_prf+0x42>
1c008794:	000b4503          	lbu	a0,0(s6)
1c008798:	85d2                	mv	a1,s4
1c00879a:	147d                	addi	s0,s0,-1
1c00879c:	9482                	jalr	s1
1c00879e:	fff537e3          	p.bneimm	a0,-1,1c00878c <pos_libc_prf+0x198>
1c0087a2:	5afd                	li	s5,-1
1c0087a4:	bd55                	j	1c008658 <pos_libc_prf+0x64>
1c0087a6:	ea0c09e3          	beqz	s8,1c008658 <pos_libc_prf+0x64>
1c0087aa:	02000313          	li	t1,32
1c0087ae:	f26c14e3          	bne	s8,t1,1c0086d6 <pos_libc_prf+0xe2>
1c0087b2:	4685                	li	a3,1
1c0087b4:	c636                	sw	a3,12(sp)
1c0087b6:	8dea                	mv	s11,s10
1c0087b8:	b705                	j	1c0086d8 <pos_libc_prf+0xe4>
1c0087ba:	4605                	li	a2,1
1c0087bc:	c432                	sw	a2,8(sp)
1c0087be:	8dea                	mv	s11,s10
1c0087c0:	bf21                	j	1c0086d8 <pos_libc_prf+0xe4>
1c0087c2:	03000793          	li	a5,48
1c0087c6:	c23e                	sw	a5,4(sp)
1c0087c8:	8dea                	mv	s11,s10
1c0087ca:	b739                	j	1c0086d8 <pos_libc_prf+0xe4>
1c0087cc:	4805                	li	a6,1
1c0087ce:	c842                	sw	a6,16(sp)
1c0087d0:	8dea                	mv	s11,s10
1c0087d2:	b719                	j	1c0086d8 <pos_libc_prf+0xe4>
1c0087d4:	4705                	li	a4,1
1c0087d6:	c03a                	sw	a4,0(sp)
1c0087d8:	8dea                	mv	s11,s10
1c0087da:	bdfd                	j	1c0086d8 <pos_libc_prf+0xe4>
1c0087dc:	8dea                	mv	s11,s10
1c0087de:	0d05                	addi	s10,s10,1
1c0087e0:	00241793          	slli	a5,s0,0x2
1c0087e4:	97a2                	add	a5,a5,s0
1c0087e6:	0786                	slli	a5,a5,0x1
1c0087e8:	97e2                	add	a5,a5,s8
1c0087ea:	000d4c03          	lbu	s8,0(s10)
1c0087ee:	fd078413          	addi	s0,a5,-48
1c0087f2:	fd0c0793          	addi	a5,s8,-48
1c0087f6:	fef5f3e3          	bleu	a5,a1,1c0087dc <pos_libc_prf+0x1e8>
1c0087fa:	002d8b13          	addi	s6,s11,2
1c0087fe:	a811                	j	1c008812 <pos_libc_prf+0x21e>
1c008800:	00092403          	lw	s0,0(s2)
1c008804:	0911                	addi	s2,s2,4
1c008806:	0e044263          	bltz	s0,1c0088ea <pos_libc_prf+0x2f6>
1c00880a:	000d4c03          	lbu	s8,0(s10)
1c00880e:	002d8b13          	addi	s6,s11,2
1c008812:	0c800713          	li	a4,200
1c008816:	04e45433          	p.minu	s0,s0,a4
1c00881a:	b5dd                	j	1c008700 <pos_libc_prf+0x10c>
1c00881c:	06500713          	li	a4,101
1c008820:	0cec5a63          	ble	a4,s8,1c0088f4 <pos_libc_prf+0x300>
1c008824:	04700713          	li	a4,71
1c008828:	3d874e63          	blt	a4,s8,1c008c04 <pos_libc_prf+0x610>
1c00882c:	04500713          	li	a4,69
1c008830:	0cec5263          	ble	a4,s8,1c0088f4 <pos_libc_prf+0x300>
1c008834:	e20c02e3          	beqz	s8,1c008658 <pos_libc_prf+0x64>
1c008838:	02500713          	li	a4,37
1c00883c:	52ec1c63          	bne	s8,a4,1c008d74 <pos_libc_prf+0x780>
1c008840:	85d2                	mv	a1,s4
1c008842:	02500513          	li	a0,37
1c008846:	9482                	jalr	s1
1c008848:	f5f52de3          	p.beqimm	a0,-1,1c0087a2 <pos_libc_prf+0x1ae>
1c00884c:	0a85                	addi	s5,s5,1
1c00884e:	b509                	j	1c008650 <pos_libc_prf+0x5c>
1c008850:	000b4783          	lbu	a5,0(s6)
1c008854:	02a00713          	li	a4,42
1c008858:	001b0693          	addi	a3,s6,1
1c00885c:	04e79c63          	bne	a5,a4,1c0088b4 <pos_libc_prf+0x2c0>
1c008860:	00092b83          	lw	s7,0(s2)
1c008864:	001b4c03          	lbu	s8,1(s6)
1c008868:	0911                	addi	s2,s2,4
1c00886a:	0b09                	addi	s6,s6,2
1c00886c:	0c800713          	li	a4,200
1c008870:	e9775de3          	ble	s7,a4,1c00870a <pos_libc_prf+0x116>
1c008874:	5bfd                	li	s7,-1
1c008876:	bd51                	j	1c00870a <pos_libc_prf+0x116>
1c008878:	06e00713          	li	a4,110
1c00887c:	4aec0b63          	beq	s8,a4,1c008d32 <pos_libc_prf+0x73e>
1c008880:	43875263          	ble	s8,a4,1c008ca4 <pos_libc_prf+0x6b0>
1c008884:	4802                	lw	a6,0(sp)
1c008886:	00490b13          	addi	s6,s2,4
1c00888a:	00092583          	lw	a1,0(s2)
1c00888e:	0e0803e3          	beqz	a6,1c009174 <pos_libc_prf+0xb80>
1c008892:	03000793          	li	a5,48
1c008896:	02f10223          	sb	a5,36(sp)
1c00889a:	0a0593e3          	bnez	a1,1c009140 <pos_libc_prf+0xb4c>
1c00889e:	020102a3          	sb	zero,37(sp)
1c0088a2:	895a                	mv	s2,s6
1c0088a4:	8d42                	mv	s10,a6
1c0088a6:	edfbade3          	p.beqimm	s7,-1,1c008780 <pos_libc_prf+0x18c>
1c0088aa:	02000813          	li	a6,32
1c0088ae:	4d02                	lw	s10,0(sp)
1c0088b0:	c242                	sw	a6,4(sp)
1c0088b2:	b5f9                	j	1c008780 <pos_libc_prf+0x18c>
1c0088b4:	fd078593          	addi	a1,a5,-48
1c0088b8:	4725                	li	a4,9
1c0088ba:	8c3e                	mv	s8,a5
1c0088bc:	4b81                	li	s7,0
1c0088be:	4625                	li	a2,9
1c0088c0:	00b77663          	bleu	a1,a4,1c0088cc <pos_libc_prf+0x2d8>
1c0088c4:	0250006f          	j	1c0090e8 <pos_libc_prf+0xaf4>
1c0088c8:	8b36                	mv	s6,a3
1c0088ca:	0685                	addi	a3,a3,1
1c0088cc:	002b9793          	slli	a5,s7,0x2
1c0088d0:	97de                	add	a5,a5,s7
1c0088d2:	0786                	slli	a5,a5,0x1
1c0088d4:	97e2                	add	a5,a5,s8
1c0088d6:	0006cc03          	lbu	s8,0(a3)
1c0088da:	fd078b93          	addi	s7,a5,-48
1c0088de:	fd0c0793          	addi	a5,s8,-48
1c0088e2:	fef673e3          	bleu	a5,a2,1c0088c8 <pos_libc_prf+0x2d4>
1c0088e6:	0b09                	addi	s6,s6,2
1c0088e8:	b751                	j	1c00886c <pos_libc_prf+0x278>
1c0088ea:	4705                	li	a4,1
1c0088ec:	40800433          	neg	s0,s0
1c0088f0:	c83a                	sw	a4,16(sp)
1c0088f2:	bf21                	j	1c00880a <pos_libc_prf+0x216>
1c0088f4:	091d                	addi	s2,s2,7
1c0088f6:	c4093933          	p.bclr	s2,s2,2,0
1c0088fa:	00092603          	lw	a2,0(s2)
1c0088fe:	00492583          	lw	a1,4(s2)
1c008902:	7ff00693          	li	a3,2047
1c008906:	01565513          	srli	a0,a2,0x15
1c00890a:	0145d313          	srli	t1,a1,0x14
1c00890e:	00b59713          	slli	a4,a1,0xb
1c008912:	8f49                	or	a4,a4,a0
1c008914:	e8b33333          	p.bclr	t1,t1,20,11
1c008918:	0921                	addi	s2,s2,8
1c00891a:	062e                	slli	a2,a2,0xb
1c00891c:	c1f73733          	p.bclr	a4,a4,0,31
1c008920:	04d30ce3          	beq	t1,a3,1c009178 <pos_libc_prf+0xb84>
1c008924:	04600693          	li	a3,70
1c008928:	00dc1463          	bne	s8,a3,1c008930 <pos_libc_prf+0x33c>
1c00892c:	06600c13          	li	s8,102
1c008930:	00c366b3          	or	a3,t1,a2
1c008934:	8ed9                	or	a3,a3,a4
1c008936:	7e068563          	beqz	a3,1c009120 <pos_libc_prf+0xb2c>
1c00893a:	c0230313          	addi	t1,t1,-1022
1c00893e:	c1f74733          	p.bset	a4,a4,0,31
1c008942:	2005cbe3          	bltz	a1,1c009358 <pos_libc_prf+0xd64>
1c008946:	47a2                	lw	a5,8(sp)
1c008948:	1e078ae3          	beqz	a5,1c00933c <pos_libc_prf+0xd48>
1c00894c:	02b00693          	li	a3,43
1c008950:	02d10223          	sb	a3,36(sp)
1c008954:	02510b13          	addi	s6,sp,37
1c008958:	02410c93          	addi	s9,sp,36
1c00895c:	56f9                	li	a3,-2
1c00895e:	4381                	li	t2,0
1c008960:	06d35763          	ble	a3,t1,1c0089ce <pos_libc_prf+0x3da>
1c008964:	33333537          	lui	a0,0x33333
1c008968:	80000837          	lui	a6,0x80000
1c00896c:	33250513          	addi	a0,a0,818 # 33333332 <__cluster_text_end+0x17323332>
1c008970:	fff84813          	not	a6,a6
1c008974:	58f9                	li	a7,-2
1c008976:	a011                	j	1c00897a <pos_libc_prf+0x386>
1c008978:	833e                	mv	t1,a5
1c00897a:	01f71593          	slli	a1,a4,0x1f
1c00897e:	00165693          	srli	a3,a2,0x1
1c008982:	fc1637b3          	p.bclr	a5,a2,30,1
1c008986:	8ecd                	or	a3,a3,a1
1c008988:	00d78633          	add	a2,a5,a3
1c00898c:	00f637b3          	sltu	a5,a2,a5
1c008990:	8305                	srli	a4,a4,0x1
1c008992:	973e                	add	a4,a4,a5
1c008994:	00130793          	addi	a5,t1,1
1c008998:	fee560e3          	bltu	a0,a4,1c008978 <pos_libc_prf+0x384>
1c00899c:	00261593          	slli	a1,a2,0x2
1c0089a0:	01e65e13          	srli	t3,a2,0x1e
1c0089a4:	00271693          	slli	a3,a4,0x2
1c0089a8:	962e                	add	a2,a2,a1
1c0089aa:	00de66b3          	or	a3,t3,a3
1c0089ae:	9736                	add	a4,a4,a3
1c0089b0:	00b635b3          	sltu	a1,a2,a1
1c0089b4:	972e                	add	a4,a4,a1
1c0089b6:	01f65693          	srli	a3,a2,0x1f
1c0089ba:	0309                	addi	t1,t1,2
1c0089bc:	13fd                	addi	t2,t2,-1
1c0089be:	01071663          	bne	a4,a6,1c0089ca <pos_libc_prf+0x3d6>
1c0089c2:	0606                	slli	a2,a2,0x1
1c0089c4:	fc16c733          	p.bset	a4,a3,30,1
1c0089c8:	833e                	mv	t1,a5
1c0089ca:	fb1348e3          	blt	t1,a7,1c00897a <pos_libc_prf+0x386>
1c0089ce:	0e605763          	blez	t1,1c008abc <pos_libc_prf+0x4c8>
1c0089d2:	80000f37          	lui	t5,0x80000
1c0089d6:	4d15                	li	s10,5
1c0089d8:	ffff4f13          	not	t5,t5
1c0089dc:	00260513          	addi	a0,a2,2
1c0089e0:	00c536b3          	sltu	a3,a0,a2
1c0089e4:	00e688b3          	add	a7,a3,a4
1c0089e8:	02000793          	li	a5,32
1c0089ec:	00189593          	slli	a1,a7,0x1
1c0089f0:	fff7ce93          	not	t4,a5
1c0089f4:	00f556b3          	srl	a3,a0,a5
1c0089f8:	01d595b3          	sll	a1,a1,t4
1c0089fc:	0207fe13          	andi	t3,a5,32
1c008a00:	4601                	li	a2,0
1c008a02:	4701                	li	a4,0
1c008a04:	4801                	li	a6,0
1c008a06:	8ecd                	or	a3,a3,a1
1c008a08:	000e0463          	beqz	t3,1c008a10 <pos_libc_prf+0x41c>
1c008a0c:	00f8d6b3          	srl	a3,a7,a5
1c008a10:	fff7ce93          	not	t4,a5
1c008a14:	03a6d6b3          	divu	a3,a3,s10
1c008a18:	060e0d63          	beqz	t3,1c008a92 <pos_libc_prf+0x49e>
1c008a1c:	4581                	li	a1,0
1c008a1e:	00f69eb3          	sll	t4,a3,a5
1c008a22:	00259693          	slli	a3,a1,0x2
1c008a26:	01e5df93          	srli	t6,a1,0x1e
1c008a2a:	002e9793          	slli	a5,t4,0x2
1c008a2e:	00b68e33          	add	t3,a3,a1
1c008a32:	00ffe7b3          	or	a5,t6,a5
1c008a36:	95b2                	add	a1,a1,a2
1c008a38:	97f6                	add	a5,a5,t4
1c008a3a:	00de36b3          	sltu	a3,t3,a3
1c008a3e:	00c5bfb3          	sltu	t6,a1,a2
1c008a42:	1c001637          	lui	a2,0x1c001
1c008a46:	96be                	add	a3,a3,a5
1c008a48:	88060613          	addi	a2,a2,-1920 # 1c000880 <stack>
1c008a4c:	01d707b3          	add	a5,a4,t4
1c008a50:	41c50e33          	sub	t3,a0,t3
1c008a54:	0805                	addi	a6,a6,1
1c008a56:	010602b3          	add	t0,a2,a6
1c008a5a:	01c53eb3          	sltu	t4,a0,t3
1c008a5e:	40d886b3          	sub	a3,a7,a3
1c008a62:	862e                	mv	a2,a1
1c008a64:	00ff8733          	add	a4,t6,a5
1c008a68:	02382c63          	p.beqimm	a6,3,1c008aa0 <pos_libc_prf+0x4ac>
1c008a6c:	0002c783          	lbu	a5,0(t0)
1c008a70:	41d688b3          	sub	a7,a3,t4
1c008a74:	8572                	mv	a0,t3
1c008a76:	00189593          	slli	a1,a7,0x1
1c008a7a:	fff7ce93          	not	t4,a5
1c008a7e:	00f556b3          	srl	a3,a0,a5
1c008a82:	01d595b3          	sll	a1,a1,t4
1c008a86:	0207fe13          	andi	t3,a5,32
1c008a8a:	8ecd                	or	a3,a3,a1
1c008a8c:	f80e02e3          	beqz	t3,1c008a10 <pos_libc_prf+0x41c>
1c008a90:	bfb5                	j	1c008a0c <pos_libc_prf+0x418>
1c008a92:	0016de13          	srli	t3,a3,0x1
1c008a96:	00f695b3          	sll	a1,a3,a5
1c008a9a:	01de5eb3          	srl	t4,t3,t4
1c008a9e:	b751                	j	1c008a22 <pos_libc_prf+0x42e>
1c008aa0:	137d                	addi	t1,t1,-1
1c008aa2:	0385                	addi	t2,t2,1
1c008aa4:	00ef6a63          	bltu	t5,a4,1c008ab8 <pos_libc_prf+0x4c4>
1c008aa8:	01f65793          	srli	a5,a2,0x1f
1c008aac:	0706                	slli	a4,a4,0x1
1c008aae:	8f5d                	or	a4,a4,a5
1c008ab0:	0606                	slli	a2,a2,0x1
1c008ab2:	137d                	addi	t1,t1,-1
1c008ab4:	feef7ae3          	bleu	a4,t5,1c008aa8 <pos_libc_prf+0x4b4>
1c008ab8:	f26042e3          	bgtz	t1,1c0089dc <pos_libc_prf+0x3e8>
1c008abc:	4691                	li	a3,4
1c008abe:	40668333          	sub	t1,a3,t1
1c008ac2:	011340fb          	lp.setup	x1,t1,1c008ae4 <pos_libc_prf+0x4f0>
1c008ac6:	01f71693          	slli	a3,a4,0x1f
1c008aca:	00165793          	srli	a5,a2,0x1
1c008ace:	8fd5                	or	a5,a5,a3
1c008ad0:	fc163633          	p.bclr	a2,a2,30,1
1c008ad4:	00f60d33          	add	s10,a2,a5
1c008ad8:	8305                	srli	a4,a4,0x1
1c008ada:	00cd3633          	sltu	a2,s10,a2
1c008ade:	00e607b3          	add	a5,a2,a4
1c008ae2:	873e                	mv	a4,a5
1c008ae4:	866a                	mv	a2,s10
1c008ae6:	ce3e                	sw	a5,28(sp)
1c008ae8:	06700713          	li	a4,103
1c008aec:	6c0bc363          	bltz	s7,1c0091b2 <pos_libc_prf+0xbbe>
1c008af0:	5eec0f63          	beq	s8,a4,1c0090ee <pos_libc_prf+0xafa>
1c008af4:	04700713          	li	a4,71
1c008af8:	5eec0b63          	beq	s8,a4,1c0090ee <pos_libc_prf+0xafa>
1c008afc:	06600713          	li	a4,102
1c008b00:	28ec0d63          	beq	s8,a4,1c008d9a <pos_libc_prf+0x7a6>
1c008b04:	001b8293          	addi	t0,s7,1
1c008b08:	4341                	li	t1,16
1c008b0a:	0462c2b3          	p.min	t0,t0,t1
1c008b0e:	12fd                	addi	t0,t0,-1
1c008b10:	cc02                	sw	zero,24(sp)
1c008b12:	001b0713          	addi	a4,s6,1
1c008b16:	ca3a                	sw	a4,20(sp)
1c008b18:	853a                	mv	a0,a4
1c008b1a:	4701                	li	a4,0
1c008b1c:	080006b7          	lui	a3,0x8000
1c008b20:	4795                	li	a5,5
1c008b22:	00270e13          	addi	t3,a4,2
1c008b26:	00ee3733          	sltu	a4,t3,a4
1c008b2a:	02000893          	li	a7,32
1c008b2e:	9736                	add	a4,a4,a3
1c008b30:	00171593          	slli	a1,a4,0x1
1c008b34:	fff8cf13          	not	t5,a7
1c008b38:	011e56b3          	srl	a3,t3,a7
1c008b3c:	01e595b3          	sll	a1,a1,t5
1c008b40:	0208f813          	andi	a6,a7,32
1c008b44:	4301                	li	t1,0
1c008b46:	4601                	li	a2,0
1c008b48:	4e81                	li	t4,0
1c008b4a:	8ecd                	or	a3,a3,a1
1c008b4c:	00080463          	beqz	a6,1c008b54 <pos_libc_prf+0x560>
1c008b50:	011756b3          	srl	a3,a4,a7
1c008b54:	fff8cf13          	not	t5,a7
1c008b58:	02f6d6b3          	divu	a3,a3,a5
1c008b5c:	06080a63          	beqz	a6,1c008bd0 <pos_libc_prf+0x5dc>
1c008b60:	4581                	li	a1,0
1c008b62:	011698b3          	sll	a7,a3,a7
1c008b66:	00259f13          	slli	t5,a1,0x2
1c008b6a:	01e5df93          	srli	t6,a1,0x1e
1c008b6e:	00289693          	slli	a3,a7,0x2
1c008b72:	00bf0833          	add	a6,t5,a1
1c008b76:	00dfe6b3          	or	a3,t6,a3
1c008b7a:	01e83f33          	sltu	t5,a6,t5
1c008b7e:	959a                	add	a1,a1,t1
1c008b80:	96c6                	add	a3,a3,a7
1c008b82:	96fa                	add	a3,a3,t5
1c008b84:	0065bf33          	sltu	t5,a1,t1
1c008b88:	1c001337          	lui	t1,0x1c001
1c008b8c:	9646                	add	a2,a2,a7
1c008b8e:	88030313          	addi	t1,t1,-1920 # 1c000880 <stack>
1c008b92:	410e0833          	sub	a6,t3,a6
1c008b96:	0e85                	addi	t4,t4,1
1c008b98:	01d30fb3          	add	t6,t1,t4
1c008b9c:	010e38b3          	sltu	a7,t3,a6
1c008ba0:	8f15                	sub	a4,a4,a3
1c008ba2:	832e                	mv	t1,a1
1c008ba4:	967a                	add	a2,a2,t5
1c008ba6:	023eac63          	p.beqimm	t4,3,1c008bde <pos_libc_prf+0x5ea>
1c008baa:	41170733          	sub	a4,a4,a7
1c008bae:	000fc883          	lbu	a7,0(t6)
1c008bb2:	8e42                	mv	t3,a6
1c008bb4:	00171593          	slli	a1,a4,0x1
1c008bb8:	fff8cf13          	not	t5,a7
1c008bbc:	011e56b3          	srl	a3,t3,a7
1c008bc0:	01e595b3          	sll	a1,a1,t5
1c008bc4:	0208f813          	andi	a6,a7,32
1c008bc8:	8ecd                	or	a3,a3,a1
1c008bca:	f80805e3          	beqz	a6,1c008b54 <pos_libc_prf+0x560>
1c008bce:	b749                	j	1c008b50 <pos_libc_prf+0x55c>
1c008bd0:	0016d813          	srli	a6,a3,0x1
1c008bd4:	011695b3          	sll	a1,a3,a7
1c008bd8:	01e858b3          	srl	a7,a6,t5
1c008bdc:	b769                	j	1c008b66 <pos_libc_prf+0x572>
1c008bde:	01f61693          	slli	a3,a2,0x1f
1c008be2:	0015d713          	srli	a4,a1,0x1
1c008be6:	fc15b333          	p.bclr	t1,a1,30,1
1c008bea:	8f55                	or	a4,a4,a3
1c008bec:	971a                	add	a4,a4,t1
1c008bee:	00165693          	srli	a3,a2,0x1
1c008bf2:	00673333          	sltu	t1,a4,t1
1c008bf6:	969a                	add	a3,a3,t1
1c008bf8:	fff28613          	addi	a2,t0,-1
1c008bfc:	1c028363          	beqz	t0,1c008dc2 <pos_libc_prf+0x7ce>
1c008c00:	82b2                	mv	t0,a2
1c008c02:	b705                	j	1c008b22 <pos_libc_prf+0x52e>
1c008c04:	06300713          	li	a4,99
1c008c08:	0eec0963          	beq	s8,a4,1c008cfa <pos_libc_prf+0x706>
1c008c0c:	0b874063          	blt	a4,s8,1c008cac <pos_libc_prf+0x6b8>
1c008c10:	05800713          	li	a4,88
1c008c14:	16ec1063          	bne	s8,a4,1c008d74 <pos_libc_prf+0x780>
1c008c18:	4702                	lw	a4,0(sp)
1c008c1a:	00490b13          	addi	s6,s2,4
1c008c1e:	00092583          	lw	a1,0(s2)
1c008c22:	44070163          	beqz	a4,1c009064 <pos_libc_prf+0xa70>
1c008c26:	7761                	lui	a4,0xffff8
1c008c28:	83074713          	xori	a4,a4,-2000
1c008c2c:	86de                	mv	a3,s7
1c008c2e:	4641                	li	a2,16
1c008c30:	02610513          	addi	a0,sp,38
1c008c34:	02e11223          	sh	a4,36(sp)
1c008c38:	32a1                	jal	1c008580 <pos_libc_to_x>
1c008c3a:	05800713          	li	a4,88
1c008c3e:	8d2a                	mv	s10,a0
1c008c40:	78ec0f63          	beq	s8,a4,1c0093de <pos_libc_prf+0xdea>
1c008c44:	4309                	li	t1,2
1c008c46:	00250d13          	addi	s10,a0,2
1c008c4a:	c01a                	sw	t1,0(sp)
1c008c4c:	0c800793          	li	a5,200
1c008c50:	49fba863          	p.beqimm	s7,-1,1c0090e0 <pos_libc_prf+0xaec>
1c008c54:	b5a7c7e3          	blt	a5,s10,1c0087a2 <pos_libc_prf+0x1ae>
1c008c58:	02000313          	li	t1,32
1c008c5c:	895a                	mv	s2,s6
1c008c5e:	c21a                	sw	t1,4(sp)
1c008c60:	008d4763          	blt	s10,s0,1c008c6e <pos_libc_prf+0x67a>
1c008c64:	846a                	mv	s0,s10
1c008c66:	b20410e3          	bnez	s0,1c008786 <pos_libc_prf+0x192>
1c008c6a:	b2f1                	j	1c008636 <pos_libc_prf+0x42>
1c008c6c:	c002                	sw	zero,0(sp)
1c008c6e:	4342                	lw	t1,16(sp)
1c008c70:	38030563          	beqz	t1,1c008ffa <pos_libc_prf+0xa06>
1c008c74:	001d0713          	addi	a4,s10,1
1c008c78:	02000693          	li	a3,32
1c008c7c:	41a407b3          	sub	a5,s0,s10
1c008c80:	76e44663          	blt	s0,a4,1c0093ec <pos_libc_prf+0xdf8>
1c008c84:	80000737          	lui	a4,0x80000
1c008c88:	76e40263          	beq	s0,a4,1c0093ec <pos_libc_prf+0xdf8>
1c008c8c:	0087c0fb          	lp.setup	x1,a5,1c008c9c <pos_libc_prf+0x6a8>
1c008c90:	0f010813          	addi	a6,sp,240
1c008c94:	01a80733          	add	a4,a6,s10
1c008c98:	f2d70a23          	sb	a3,-204(a4) # 7fffff34 <pulp__FC+0x7fffff35>
1c008c9c:	0d05                	addi	s10,s10,1
1c008c9e:	ae0414e3          	bnez	s0,1c008786 <pos_libc_prf+0x192>
1c008ca2:	ba51                	j	1c008636 <pos_libc_prf+0x42>
1c008ca4:	06900713          	li	a4,105
1c008ca8:	0cec1663          	bne	s8,a4,1c008d74 <pos_libc_prf+0x780>
1c008cac:	00092583          	lw	a1,0(s2)
1c008cb0:	02410c93          	addi	s9,sp,36
1c008cb4:	0911                	addi	s2,s2,4
1c008cb6:	3e05cd63          	bltz	a1,1c0090b0 <pos_libc_prf+0xabc>
1c008cba:	4322                	lw	t1,8(sp)
1c008cbc:	4a031763          	bnez	t1,1c00916a <pos_libc_prf+0xb76>
1c008cc0:	4632                	lw	a2,12(sp)
1c008cc2:	62060163          	beqz	a2,1c0092e4 <pos_libc_prf+0xcf0>
1c008cc6:	02000793          	li	a5,32
1c008cca:	02f10223          	sb	a5,36(sp)
1c008cce:	86de                	mv	a3,s7
1c008cd0:	4629                	li	a2,10
1c008cd2:	02510513          	addi	a0,sp,37
1c008cd6:	306d                	jal	1c008580 <pos_libc_to_x>
1c008cd8:	02510313          	addi	t1,sp,37
1c008cdc:	951a                	add	a0,a0,t1
1c008cde:	4705                	li	a4,1
1c008ce0:	41950d33          	sub	s10,a0,s9
1c008ce4:	c03a                	sw	a4,0(sp)
1c008ce6:	0bfba463          	p.beqimm	s7,-1,1c008d8e <pos_libc_prf+0x79a>
1c008cea:	0c800793          	li	a5,200
1c008cee:	aba7cae3          	blt	a5,s10,1c0087a2 <pos_libc_prf+0x1ae>
1c008cf2:	02000713          	li	a4,32
1c008cf6:	c23a                	sw	a4,4(sp)
1c008cf8:	b7a5                	j	1c008c60 <pos_libc_prf+0x66c>
1c008cfa:	00092783          	lw	a5,0(s2)
1c008cfe:	020102a3          	sb	zero,37(sp)
1c008d02:	0911                	addi	s2,s2,4
1c008d04:	02f10223          	sb	a5,36(sp)
1c008d08:	4d05                	li	s10,1
1c008d0a:	bc9d                	j	1c008780 <pos_libc_prf+0x18c>
1c008d0c:	00092583          	lw	a1,0(s2)
1c008d10:	86de                	mv	a3,s7
1c008d12:	4629                	li	a2,10
1c008d14:	1048                	addi	a0,sp,36
1c008d16:	30ad                	jal	1c008580 <pos_libc_to_x>
1c008d18:	8d2a                	mv	s10,a0
1c008d1a:	0911                	addi	s2,s2,4
1c008d1c:	0c800793          	li	a5,200
1c008d20:	07fba363          	p.beqimm	s7,-1,1c008d86 <pos_libc_prf+0x792>
1c008d24:	a6a7cfe3          	blt	a5,a0,1c0087a2 <pos_libc_prf+0x1ae>
1c008d28:	02000713          	li	a4,32
1c008d2c:	c002                	sw	zero,0(sp)
1c008d2e:	c23a                	sw	a4,4(sp)
1c008d30:	bf05                	j	1c008c60 <pos_libc_prf+0x66c>
1c008d32:	00092783          	lw	a5,0(s2)
1c008d36:	0911                	addi	s2,s2,4
1c008d38:	0157a023          	sw	s5,0(a5)
1c008d3c:	b8ed                	j	1c008636 <pos_libc_prf+0x42>
1c008d3e:	00092583          	lw	a1,0(s2)
1c008d42:	77e1                	lui	a5,0xffff8
1c008d44:	8307c793          	xori	a5,a5,-2000
1c008d48:	46a1                	li	a3,8
1c008d4a:	4641                	li	a2,16
1c008d4c:	02610513          	addi	a0,sp,38
1c008d50:	02f11223          	sh	a5,36(sp)
1c008d54:	82dff0ef          	jal	ra,1c008580 <pos_libc_to_x>
1c008d58:	0911                	addi	s2,s2,4
1c008d5a:	00250d13          	addi	s10,a0,2
1c008d5e:	0c800793          	li	a5,200
1c008d62:	03fba263          	p.beqimm	s7,-1,1c008d86 <pos_libc_prf+0x792>
1c008d66:	a3a7cee3          	blt	a5,s10,1c0087a2 <pos_libc_prf+0x1ae>
1c008d6a:	02000793          	li	a5,32
1c008d6e:	c002                	sw	zero,0(sp)
1c008d70:	c23e                	sw	a5,4(sp)
1c008d72:	b5fd                	j	1c008c60 <pos_libc_prf+0x66c>
1c008d74:	0c800713          	li	a4,200
1c008d78:	8b875fe3          	ble	s8,a4,1c008636 <pos_libc_prf+0x42>
1c008d7c:	5afd                	li	s5,-1
1c008d7e:	b8e9                	j	1c008658 <pos_libc_prf+0x64>
1c008d80:	9e0bd7e3          	bgez	s7,1c00876e <pos_libc_prf+0x17a>
1c008d84:	b2fd                	j	1c008772 <pos_libc_prf+0x17e>
1c008d86:	a1a7cee3          	blt	a5,s10,1c0087a2 <pos_libc_prf+0x1ae>
1c008d8a:	c002                	sw	zero,0(sp)
1c008d8c:	bdd1                	j	1c008c60 <pos_libc_prf+0x66c>
1c008d8e:	0c800793          	li	a5,200
1c008d92:	eda7d7e3          	ble	s10,a5,1c008c60 <pos_libc_prf+0x66c>
1c008d96:	5afd                	li	s5,-1
1c008d98:	b0c1                	j	1c008658 <pos_libc_prf+0x64>
1c008d9a:	cc02                	sw	zero,24(sp)
1c008d9c:	001b0593          	addi	a1,s6,1
1c008da0:	ca2e                	sw	a1,20(sp)
1c008da2:	017387b3          	add	a5,t2,s7
1c008da6:	852e                	mv	a0,a1
1c008da8:	6007c263          	bltz	a5,1c0093ac <pos_libc_prf+0xdb8>
1c008dac:	4641                	li	a2,16
1c008dae:	04c7c2b3          	p.min	t0,a5,a2
1c008db2:	12fd                	addi	t0,t0,-1
1c008db4:	06600c13          	li	s8,102
1c008db8:	d60791e3          	bnez	a5,1c008b1a <pos_libc_prf+0x526>
1c008dbc:	4701                	li	a4,0
1c008dbe:	080006b7          	lui	a3,0x8000
1c008dc2:	45f2                	lw	a1,28(sp)
1c008dc4:	976a                	add	a4,a4,s10
1c008dc6:	01a73f33          	sltu	t5,a4,s10
1c008dca:	96ae                	add	a3,a3,a1
1c008dcc:	96fa                	add	a3,a3,t5
1c008dce:	f606b633          	p.bclr	a2,a3,27,0
1c008dd2:	8d3a                	mv	s10,a4
1c008dd4:	ca71                	beqz	a2,1c008ea8 <pos_libc_prf+0x8b4>
1c008dd6:	002d0e93          	addi	t4,s10,2
1c008dda:	01aebd33          	sltu	s10,t4,s10
1c008dde:	00dd0f33          	add	t5,s10,a3
1c008de2:	02000813          	li	a6,32
1c008de6:	001f1793          	slli	a5,t5,0x1
1c008dea:	fff84693          	not	a3,a6
1c008dee:	010ed733          	srl	a4,t4,a6
1c008df2:	00d797b3          	sll	a5,a5,a3
1c008df6:	02087613          	andi	a2,a6,32
1c008dfa:	4e01                	li	t3,0
1c008dfc:	4281                	li	t0,0
1c008dfe:	4f81                	li	t6,0
1c008e00:	4d15                	li	s10,5
1c008e02:	8f5d                	or	a4,a4,a5
1c008e04:	c219                	beqz	a2,1c008e0a <pos_libc_prf+0x816>
1c008e06:	010f5733          	srl	a4,t5,a6
1c008e0a:	fff84793          	not	a5,a6
1c008e0e:	03a75733          	divu	a4,a4,s10
1c008e12:	24060263          	beqz	a2,1c009056 <pos_libc_prf+0xa62>
1c008e16:	4681                	li	a3,0
1c008e18:	01071733          	sll	a4,a4,a6
1c008e1c:	00269793          	slli	a5,a3,0x2
1c008e20:	01e6d813          	srli	a6,a3,0x1e
1c008e24:	00271593          	slli	a1,a4,0x2
1c008e28:	00d78633          	add	a2,a5,a3
1c008e2c:	00b865b3          	or	a1,a6,a1
1c008e30:	95ba                	add	a1,a1,a4
1c008e32:	00f637b3          	sltu	a5,a2,a5
1c008e36:	96f2                	add	a3,a3,t3
1c008e38:	1c001337          	lui	t1,0x1c001
1c008e3c:	97ae                	add	a5,a5,a1
1c008e3e:	01c6b833          	sltu	a6,a3,t3
1c008e42:	40ce8633          	sub	a2,t4,a2
1c008e46:	9716                	add	a4,a4,t0
1c008e48:	0f85                	addi	t6,t6,1
1c008e4a:	88030313          	addi	t1,t1,-1920 # 1c000880 <stack>
1c008e4e:	00ceb8b3          	sltu	a7,t4,a2
1c008e52:	40ff07b3          	sub	a5,t5,a5
1c008e56:	01f305b3          	add	a1,t1,t6
1c008e5a:	8e36                	mv	t3,a3
1c008e5c:	00e802b3          	add	t0,a6,a4
1c008e60:	023fa463          	p.beqimm	t6,3,1c008e88 <pos_libc_prf+0x894>
1c008e64:	0005c803          	lbu	a6,0(a1)
1c008e68:	41178f33          	sub	t5,a5,a7
1c008e6c:	8eb2                	mv	t4,a2
1c008e6e:	001f1793          	slli	a5,t5,0x1
1c008e72:	fff84693          	not	a3,a6
1c008e76:	010ed733          	srl	a4,t4,a6
1c008e7a:	00d797b3          	sll	a5,a5,a3
1c008e7e:	02087613          	andi	a2,a6,32
1c008e82:	8f5d                	or	a4,a4,a5
1c008e84:	d259                	beqz	a2,1c008e0a <pos_libc_prf+0x816>
1c008e86:	b741                	j	1c008e06 <pos_libc_prf+0x812>
1c008e88:	01f29693          	slli	a3,t0,0x1f
1c008e8c:	001e5713          	srli	a4,t3,0x1
1c008e90:	8f55                	or	a4,a4,a3
1c008e92:	fc1e3e33          	p.bclr	t3,t3,30,1
1c008e96:	00ee0d33          	add	s10,t3,a4
1c008e9a:	01cd3e33          	sltu	t3,s10,t3
1c008e9e:	0012d713          	srli	a4,t0,0x1
1c008ea2:	00ee06b3          	add	a3,t3,a4
1c008ea6:	0385                	addi	t2,t2,1
1c008ea8:	06600713          	li	a4,102
1c008eac:	34ec0563          	beq	s8,a4,1c0091f6 <pos_libc_prf+0xc02>
1c008eb0:	002d1713          	slli	a4,s10,0x2
1c008eb4:	01ed5613          	srli	a2,s10,0x1e
1c008eb8:	00269813          	slli	a6,a3,0x2
1c008ebc:	9d3a                	add	s10,s10,a4
1c008ebe:	01066833          	or	a6,a2,a6
1c008ec2:	00ed35b3          	sltu	a1,s10,a4
1c008ec6:	96c2                	add	a3,a3,a6
1c008ec8:	95b6                	add	a1,a1,a3
1c008eca:	01fd5713          	srli	a4,s10,0x1f
1c008ece:	0586                	slli	a1,a1,0x1
1c008ed0:	8dd9                	or	a1,a1,a4
1c008ed2:	01c5d713          	srli	a4,a1,0x1c
1c008ed6:	03070693          	addi	a3,a4,48
1c008eda:	00e03733          	snez	a4,a4
1c008ede:	40e383b3          	sub	t2,t2,a4
1c008ee2:	4702                	lw	a4,0(sp)
1c008ee4:	10000337          	lui	t1,0x10000
1c008ee8:	137d                	addi	t1,t1,-1
1c008eea:	00db0023          	sb	a3,0(s6)
1c008eee:	001d1613          	slli	a2,s10,0x1
1c008ef2:	0065f5b3          	and	a1,a1,t1
1c008ef6:	2e070563          	beqz	a4,1c0091e0 <pos_libc_prf+0xbec>
1c008efa:	02e00713          	li	a4,46
1c008efe:	00eb00a3          	sb	a4,1(s6)
1c008f02:	002b0813          	addi	a6,s6,2
1c008f06:	fffb8893          	addi	a7,s7,-1
1c008f0a:	4e0b8b63          	beqz	s7,1c009400 <pos_libc_prf+0xe0c>
1c008f0e:	4e3d                	li	t3,15
1c008f10:	a011                	j	1c008f14 <pos_libc_prf+0x920>
1c008f12:	88be                	mv	a7,a5
1c008f14:	00261793          	slli	a5,a2,0x2
1c008f18:	01e65693          	srli	a3,a2,0x1e
1c008f1c:	00259713          	slli	a4,a1,0x2
1c008f20:	00c78333          	add	t1,a5,a2
1c008f24:	8f55                	or	a4,a4,a3
1c008f26:	972e                	add	a4,a4,a1
1c008f28:	00f337b3          	sltu	a5,t1,a5
1c008f2c:	97ba                	add	a5,a5,a4
1c008f2e:	0786                	slli	a5,a5,0x1
1c008f30:	01f35713          	srli	a4,t1,0x1f
1c008f34:	8fd9                	or	a5,a5,a4
1c008f36:	01c7d693          	srli	a3,a5,0x1c
1c008f3a:	03000713          	li	a4,48
1c008f3e:	00180513          	addi	a0,a6,1 # 80000001 <pulp__FC+0x80000002>
1c008f42:	01c05c63          	blez	t3,1c008f5a <pos_libc_prf+0x966>
1c008f46:	00131613          	slli	a2,t1,0x1
1c008f4a:	10000337          	lui	t1,0x10000
1c008f4e:	137d                	addi	t1,t1,-1
1c008f50:	03068713          	addi	a4,a3,48 # 8000030 <__l1_heap_size+0x7ff0738>
1c008f54:	1e7d                	addi	t3,t3,-1
1c008f56:	0067f5b3          	and	a1,a5,t1
1c008f5a:	00e80023          	sb	a4,0(a6)
1c008f5e:	fff88793          	addi	a5,a7,-1
1c008f62:	882a                	mv	a6,a0
1c008f64:	fb1047e3          	bgtz	a7,1c008f12 <pos_libc_prf+0x91e>
1c008f68:	45e2                	lw	a1,24(sp)
1c008f6a:	e9a5                	bnez	a1,1c008fda <pos_libc_prf+0x9e6>
1c008f6c:	c05c3733          	p.bclr	a4,s8,0,5
1c008f70:	04500693          	li	a3,69
1c008f74:	02d71963          	bne	a4,a3,1c008fa6 <pos_libc_prf+0x9b2>
1c008f78:	87e2                	mv	a5,s8
1c008f7a:	00f50023          	sb	a5,0(a0)
1c008f7e:	3403cc63          	bltz	t2,1c0092d6 <pos_libc_prf+0xce2>
1c008f82:	02b00793          	li	a5,43
1c008f86:	00f500a3          	sb	a5,1(a0)
1c008f8a:	47a9                	li	a5,10
1c008f8c:	02f3c733          	div	a4,t2,a5
1c008f90:	0511                	addi	a0,a0,4
1c008f92:	02f3e7b3          	rem	a5,t2,a5
1c008f96:	03070713          	addi	a4,a4,48
1c008f9a:	fee50f23          	sb	a4,-2(a0)
1c008f9e:	03078793          	addi	a5,a5,48 # ffff8030 <pulp__FC+0xffff8031>
1c008fa2:	fef50fa3          	sb	a5,-1(a0)
1c008fa6:	00050023          	sb	zero,0(a0)
1c008faa:	41950d33          	sub	s10,a0,s9
1c008fae:	4722                	lw	a4,8(sp)
1c008fb0:	47b2                	lw	a5,12(sp)
1c008fb2:	8f5d                	or	a4,a4,a5
1c008fb4:	c03a                	sw	a4,0(sp)
1c008fb6:	e719                	bnez	a4,1c008fc4 <pos_libc_prf+0x9d0>
1c008fb8:	02414703          	lbu	a4,36(sp)
1c008fbc:	02d00793          	li	a5,45
1c008fc0:	dcf717e3          	bne	a4,a5,1c008d8e <pos_libc_prf+0x79a>
1c008fc4:	0c800793          	li	a5,200
1c008fc8:	fda7cd63          	blt	a5,s10,1c0087a2 <pos_libc_prf+0x1ae>
1c008fcc:	4305                	li	t1,1
1c008fce:	c01a                	sw	t1,0(sp)
1c008fd0:	b941                	j	1c008c60 <pos_libc_prf+0x66c>
1c008fd2:	47e2                	lw	a5,24(sp)
1c008fd4:	dbe9                	beqz	a5,1c008fa6 <pos_libc_prf+0x9b2>
1c008fd6:	06600c13          	li	s8,102
1c008fda:	03000613          	li	a2,48
1c008fde:	a011                	j	1c008fe2 <pos_libc_prf+0x9ee>
1c008fe0:	853a                	mv	a0,a4
1c008fe2:	fff50713          	addi	a4,a0,-1
1c008fe6:	00074683          	lbu	a3,0(a4)
1c008fea:	fec68be3          	beq	a3,a2,1c008fe0 <pos_libc_prf+0x9ec>
1c008fee:	02e00613          	li	a2,46
1c008ff2:	f6c69de3          	bne	a3,a2,1c008f6c <pos_libc_prf+0x978>
1c008ff6:	853a                	mv	a0,a4
1c008ff8:	bf95                	j	1c008f6c <pos_libc_prf+0x978>
1c008ffa:	02410c93          	addi	s9,sp,36
1c008ffe:	41a40b33          	sub	s6,s0,s10
1c009002:	001d0613          	addi	a2,s10,1
1c009006:	85e6                	mv	a1,s9
1c009008:	016c8533          	add	a0,s9,s6
1c00900c:	cc4ff0ef          	jal	ra,1c0084d0 <memmove>
1c009010:	4312                	lw	t1,4(sp)
1c009012:	02000793          	li	a5,32
1c009016:	30f30c63          	beq	t1,a5,1c00932e <pos_libc_prf+0xd3a>
1c00901a:	4702                	lw	a4,0(sp)
1c00901c:	9b3a                	add	s6,s6,a4
1c00901e:	c56754e3          	ble	s6,a4,1c008c66 <pos_libc_prf+0x672>
1c009022:	4782                	lw	a5,0(sp)
1c009024:	00178713          	addi	a4,a5,1
1c009028:	40fb07b3          	sub	a5,s6,a5
1c00902c:	3aeb4563          	blt	s6,a4,1c0093d6 <pos_libc_prf+0xde2>
1c009030:	80000737          	lui	a4,0x80000
1c009034:	3aeb0163          	beq	s6,a4,1c0093d6 <pos_libc_prf+0xde2>
1c009038:	4612                	lw	a2,4(sp)
1c00903a:	4702                	lw	a4,0(sp)
1c00903c:	0087c0fb          	lp.setup	x1,a5,1c00904c <pos_libc_prf+0xa58>
1c009040:	0f010813          	addi	a6,sp,240
1c009044:	00e806b3          	add	a3,a6,a4
1c009048:	f2c68a23          	sb	a2,-204(a3)
1c00904c:	0705                	addi	a4,a4,1
1c00904e:	f2041c63          	bnez	s0,1c008786 <pos_libc_prf+0x192>
1c009052:	de4ff06f          	j	1c008636 <pos_libc_prf+0x42>
1c009056:	00175613          	srli	a2,a4,0x1
1c00905a:	010716b3          	sll	a3,a4,a6
1c00905e:	00f65733          	srl	a4,a2,a5
1c009062:	bb6d                	j	1c008e1c <pos_libc_prf+0x828>
1c009064:	02410c93          	addi	s9,sp,36
1c009068:	86de                	mv	a3,s7
1c00906a:	4641                	li	a2,16
1c00906c:	8566                	mv	a0,s9
1c00906e:	d12ff0ef          	jal	ra,1c008580 <pos_libc_to_x>
1c009072:	05800713          	li	a4,88
1c009076:	8d2a                	mv	s10,a0
1c009078:	bcec1ae3          	bne	s8,a4,1c008c4c <pos_libc_prf+0x658>
1c00907c:	02414783          	lbu	a5,36(sp)
1c009080:	4681                	li	a3,0
1c009082:	bc0785e3          	beqz	a5,1c008c4c <pos_libc_prf+0x658>
1c009086:	4665                	li	a2,25
1c009088:	f9f78713          	addi	a4,a5,-97
1c00908c:	0ff77713          	andi	a4,a4,255
1c009090:	1781                	addi	a5,a5,-32
1c009092:	00e66463          	bltu	a2,a4,1c00909a <pos_libc_prf+0xaa6>
1c009096:	00fc8023          	sb	a5,0(s9)
1c00909a:	0c85                	addi	s9,s9,1
1c00909c:	000cc783          	lbu	a5,0(s9)
1c0090a0:	f7e5                	bnez	a5,1c009088 <pos_libc_prf+0xa94>
1c0090a2:	4782                	lw	a5,0(sp)
1c0090a4:	9d36                	add	s10,s10,a3
1c0090a6:	ba0783e3          	beqz	a5,1c008c4c <pos_libc_prf+0x658>
1c0090aa:	4809                	li	a6,2
1c0090ac:	c042                	sw	a6,0(sp)
1c0090ae:	be79                	j	1c008c4c <pos_libc_prf+0x658>
1c0090b0:	02d00793          	li	a5,45
1c0090b4:	02f10223          	sb	a5,36(sp)
1c0090b8:	800007b7          	lui	a5,0x80000
1c0090bc:	26f58b63          	beq	a1,a5,1c009332 <pos_libc_prf+0xd3e>
1c0090c0:	40b005b3          	neg	a1,a1
1c0090c4:	86de                	mv	a3,s7
1c0090c6:	4629                	li	a2,10
1c0090c8:	02510513          	addi	a0,sp,37
1c0090cc:	cb4ff0ef          	jal	ra,1c008580 <pos_libc_to_x>
1c0090d0:	02510793          	addi	a5,sp,37
1c0090d4:	953e                	add	a0,a0,a5
1c0090d6:	4805                	li	a6,1
1c0090d8:	41950d33          	sub	s10,a0,s9
1c0090dc:	c042                	sw	a6,0(sp)
1c0090de:	b121                	j	1c008ce6 <pos_libc_prf+0x6f2>
1c0090e0:	eda7c163          	blt	a5,s10,1c0087a2 <pos_libc_prf+0x1ae>
1c0090e4:	895a                	mv	s2,s6
1c0090e6:	bead                	j	1c008c60 <pos_libc_prf+0x66c>
1c0090e8:	8b36                	mv	s6,a3
1c0090ea:	e20ff06f          	j	1c00870a <pos_libc_prf+0x116>
1c0090ee:	4702                	lw	a4,0(sp)
1c0090f0:	cc02                	sw	zero,24(sp)
1c0090f2:	e701                	bnez	a4,1c0090fa <pos_libc_prf+0xb06>
1c0090f4:	017037b3          	snez	a5,s7
1c0090f8:	cc3e                	sw	a5,24(sp)
1c0090fa:	56f5                	li	a3,-3
1c0090fc:	001b8713          	addi	a4,s7,1
1c009100:	00d3c463          	blt	t2,a3,1c009108 <pos_libc_prf+0xb14>
1c009104:	c8775ce3          	ble	t2,a4,1c008d9c <pos_libc_prf+0x7a8>
1c009108:	4841                	li	a6,16
1c00910a:	05074733          	p.min	a4,a4,a6
1c00910e:	06700693          	li	a3,103
1c009112:	fff70293          	addi	t0,a4,-1 # 7fffffff <pulp__FC+0x80000000>
1c009116:	28dc0763          	beq	s8,a3,1c0093a4 <pos_libc_prf+0xdb0>
1c00911a:	04500c13          	li	s8,69
1c00911e:	bad5                	j	1c008b12 <pos_libc_prf+0x51e>
1c009120:	46a2                	lw	a3,8(sp)
1c009122:	1c068963          	beqz	a3,1c0092f4 <pos_libc_prf+0xd00>
1c009126:	02b00713          	li	a4,43
1c00912a:	02e10223          	sb	a4,36(sp)
1c00912e:	02510b13          	addi	s6,sp,37
1c009132:	4381                	li	t2,0
1c009134:	4301                	li	t1,0
1c009136:	4601                	li	a2,0
1c009138:	4701                	li	a4,0
1c00913a:	02410c93          	addi	s9,sp,36
1c00913e:	babd                	j	1c008abc <pos_libc_prf+0x4c8>
1c009140:	02510513          	addi	a0,sp,37
1c009144:	86de                	mv	a3,s7
1c009146:	4621                	li	a2,8
1c009148:	c38ff0ef          	jal	ra,1c008580 <pos_libc_to_x>
1c00914c:	4302                	lw	t1,0(sp)
1c00914e:	0c800793          	li	a5,200
1c009152:	00650d33          	add	s10,a0,t1
1c009156:	09fba063          	p.beqimm	s7,-1,1c0091d6 <pos_libc_prf+0xbe2>
1c00915a:	e5a7c463          	blt	a5,s10,1c0087a2 <pos_libc_prf+0x1ae>
1c00915e:	02000813          	li	a6,32
1c009162:	895a                	mv	s2,s6
1c009164:	c002                	sw	zero,0(sp)
1c009166:	c242                	sw	a6,4(sp)
1c009168:	bce5                	j	1c008c60 <pos_libc_prf+0x66c>
1c00916a:	02b00793          	li	a5,43
1c00916e:	02f10223          	sb	a5,36(sp)
1c009172:	beb1                	j	1c008cce <pos_libc_prf+0x6da>
1c009174:	1048                	addi	a0,sp,36
1c009176:	b7f9                	j	1c009144 <pos_libc_prf+0xb50>
1c009178:	02410c93          	addi	s9,sp,36
1c00917c:	86e6                	mv	a3,s9
1c00917e:	2005c163          	bltz	a1,1c009380 <pos_libc_prf+0xd8c>
1c009182:	8e59                	or	a2,a2,a4
1c009184:	fbfc0793          	addi	a5,s8,-65
1c009188:	00368513          	addi	a0,a3,3
1c00918c:	4765                	li	a4,25
1c00918e:	18061463          	bnez	a2,1c009316 <pos_libc_prf+0xd22>
1c009192:	1cf76d63          	bltu	a4,a5,1c00936c <pos_libc_prf+0xd78>
1c009196:	6795                	lui	a5,0x5
1c009198:	e4978793          	addi	a5,a5,-439 # 4e49 <__cluster_text_size+0x4e49>
1c00919c:	00f69023          	sh	a5,0(a3)
1c0091a0:	04600793          	li	a5,70
1c0091a4:	00f68123          	sb	a5,2(a3)
1c0091a8:	000681a3          	sb	zero,3(a3)
1c0091ac:	41950d33          	sub	s10,a0,s9
1c0091b0:	bbfd                	j	1c008fae <pos_libc_prf+0x9ba>
1c0091b2:	4b99                	li	s7,6
1c0091b4:	94ec10e3          	bne	s8,a4,1c008af4 <pos_libc_prf+0x500>
1c0091b8:	4682                	lw	a3,0(sp)
1c0091ba:	57f5                	li	a5,-3
1c0091bc:	0016c693          	xori	a3,a3,1
1c0091c0:	cc36                	sw	a3,24(sp)
1c0091c2:	1cf3dd63          	ble	a5,t2,1c00939c <pos_libc_prf+0xda8>
1c0091c6:	001b0693          	addi	a3,s6,1
1c0091ca:	ca36                	sw	a3,20(sp)
1c0091cc:	8536                	mv	a0,a3
1c0091ce:	06500c13          	li	s8,101
1c0091d2:	4299                	li	t0,6
1c0091d4:	b299                	j	1c008b1a <pos_libc_prf+0x526>
1c0091d6:	dda7c663          	blt	a5,s10,1c0087a2 <pos_libc_prf+0x1ae>
1c0091da:	895a                	mv	s2,s6
1c0091dc:	c002                	sw	zero,0(sp)
1c0091de:	b449                	j	1c008c60 <pos_libc_prf+0x66c>
1c0091e0:	d80b84e3          	beqz	s7,1c008f68 <pos_libc_prf+0x974>
1c0091e4:	02e00713          	li	a4,46
1c0091e8:	002b0813          	addi	a6,s6,2
1c0091ec:	00eb00a3          	sb	a4,1(s6)
1c0091f0:	fffb8893          	addi	a7,s7,-1
1c0091f4:	bb29                	j	1c008f0e <pos_libc_prf+0x91a>
1c0091f6:	18705c63          	blez	t2,1c00938e <pos_libc_prf+0xd9a>
1c0091fa:	4552                	lw	a0,20(sp)
1c0091fc:	4641                	li	a2,16
1c0091fe:	859e                	mv	a1,t2
1c009200:	0295c0fb          	lp.setup	x1,a1,1c009252 <pos_libc_prf+0xc5e>
1c009204:	002d1793          	slli	a5,s10,0x2
1c009208:	01ed5893          	srli	a7,s10,0x1e
1c00920c:	00269713          	slli	a4,a3,0x2
1c009210:	01a78833          	add	a6,a5,s10
1c009214:	00e8e733          	or	a4,a7,a4
1c009218:	9736                	add	a4,a4,a3
1c00921a:	00f837b3          	sltu	a5,a6,a5
1c00921e:	97ba                	add	a5,a5,a4
1c009220:	0786                	slli	a5,a5,0x1
1c009222:	01f85713          	srli	a4,a6,0x1f
1c009226:	8fd9                	or	a5,a5,a4
1c009228:	01c7d313          	srli	t1,a5,0x1c
1c00922c:	03000893          	li	a7,48
1c009230:	872a                	mv	a4,a0
1c009232:	00c05c63          	blez	a2,1c00924a <pos_libc_prf+0xc56>
1c009236:	00181d13          	slli	s10,a6,0x1
1c00923a:	10000837          	lui	a6,0x10000
1c00923e:	187d                	addi	a6,a6,-1
1c009240:	03030893          	addi	a7,t1,48 # 10000030 <W8_su+0x2c>
1c009244:	167d                	addi	a2,a2,-1
1c009246:	0107f6b3          	and	a3,a5,a6
1c00924a:	011b0023          	sb	a7,0(s6)
1c00924e:	13fd                	addi	t2,t2,-1
1c009250:	8b2a                	mv	s6,a0
1c009252:	0505                	addi	a0,a0,1
1c009254:	4302                	lw	t1,0(sp)
1c009256:	00031563          	bnez	t1,1c009260 <pos_libc_prf+0xc6c>
1c00925a:	853a                	mv	a0,a4
1c00925c:	d60b8be3          	beqz	s7,1c008fd2 <pos_libc_prf+0x9de>
1c009260:	02e00793          	li	a5,46
1c009264:	00170513          	addi	a0,a4,1
1c009268:	00f70023          	sb	a5,0(a4)
1c00926c:	03000593          	li	a1,48
1c009270:	fffb8313          	addi	t1,s7,-1
1c009274:	d5705fe3          	blez	s7,1c008fd2 <pos_libc_prf+0x9de>
1c009278:	002d1793          	slli	a5,s10,0x2
1c00927c:	01ed5893          	srli	a7,s10,0x1e
1c009280:	00269713          	slli	a4,a3,0x2
1c009284:	01a78833          	add	a6,a5,s10
1c009288:	00e8e733          	or	a4,a7,a4
1c00928c:	9736                	add	a4,a4,a3
1c00928e:	00f837b3          	sltu	a5,a6,a5
1c009292:	97ba                	add	a5,a5,a4
1c009294:	0786                	slli	a5,a5,0x1
1c009296:	01f85713          	srli	a4,a6,0x1f
1c00929a:	8fd9                	or	a5,a5,a4
1c00929c:	01c7de13          	srli	t3,a5,0x1c
1c0092a0:	00150893          	addi	a7,a0,1
1c0092a4:	02039563          	bnez	t2,1c0092ce <pos_libc_prf+0xcda>
1c0092a8:	03000713          	li	a4,48
1c0092ac:	00c05c63          	blez	a2,1c0092c4 <pos_libc_prf+0xcd0>
1c0092b0:	00181d13          	slli	s10,a6,0x1
1c0092b4:	10000837          	lui	a6,0x10000
1c0092b8:	187d                	addi	a6,a6,-1
1c0092ba:	030e0713          	addi	a4,t3,48
1c0092be:	167d                	addi	a2,a2,-1
1c0092c0:	0107f6b3          	and	a3,a5,a6
1c0092c4:	00e50023          	sb	a4,0(a0)
1c0092c8:	8b9a                	mv	s7,t1
1c0092ca:	8546                	mv	a0,a7
1c0092cc:	b755                	j	1c009270 <pos_libc_prf+0xc7c>
1c0092ce:	00b50023          	sb	a1,0(a0)
1c0092d2:	0385                	addi	t2,t2,1
1c0092d4:	bfd5                	j	1c0092c8 <pos_libc_prf+0xcd4>
1c0092d6:	02d00793          	li	a5,45
1c0092da:	407003b3          	neg	t2,t2
1c0092de:	00f500a3          	sb	a5,1(a0)
1c0092e2:	b165                	j	1c008f8a <pos_libc_prf+0x996>
1c0092e4:	86de                	mv	a3,s7
1c0092e6:	4629                	li	a2,10
1c0092e8:	8566                	mv	a0,s9
1c0092ea:	a96ff0ef          	jal	ra,1c008580 <pos_libc_to_x>
1c0092ee:	8d2a                	mv	s10,a0
1c0092f0:	c002                	sw	zero,0(sp)
1c0092f2:	bad5                	j	1c008ce6 <pos_libc_prf+0x6f2>
1c0092f4:	4632                	lw	a2,12(sp)
1c0092f6:	10060163          	beqz	a2,1c0093f8 <pos_libc_prf+0xe04>
1c0092fa:	02000713          	li	a4,32
1c0092fe:	02e10223          	sb	a4,36(sp)
1c009302:	02510b13          	addi	s6,sp,37
1c009306:	02410c93          	addi	s9,sp,36
1c00930a:	4381                	li	t2,0
1c00930c:	4301                	li	t1,0
1c00930e:	4601                	li	a2,0
1c009310:	4701                	li	a4,0
1c009312:	faaff06f          	j	1c008abc <pos_libc_prf+0x4c8>
1c009316:	0af76663          	bltu	a4,a5,1c0093c2 <pos_libc_prf+0xdce>
1c00931a:	6791                	lui	a5,0x4
1c00931c:	14e78793          	addi	a5,a5,334 # 414e <__cluster_text_size+0x414e>
1c009320:	00f69023          	sh	a5,0(a3)
1c009324:	04e00793          	li	a5,78
1c009328:	00f68123          	sb	a5,2(a3)
1c00932c:	bdb5                	j	1c0091a8 <pos_libc_prf+0xbb4>
1c00932e:	c002                	sw	zero,0(sp)
1c009330:	b9cd                	j	1c009022 <pos_libc_prf+0xa2e>
1c009332:	86de                	mv	a3,s7
1c009334:	4629                	li	a2,10
1c009336:	800005b7          	lui	a1,0x80000
1c00933a:	b379                	j	1c0090c8 <pos_libc_prf+0xad4>
1c00933c:	4832                	lw	a6,12(sp)
1c00933e:	02410c93          	addi	s9,sp,36
1c009342:	8b66                	mv	s6,s9
1c009344:	e0080c63          	beqz	a6,1c00895c <pos_libc_prf+0x368>
1c009348:	02000693          	li	a3,32
1c00934c:	02d10223          	sb	a3,36(sp)
1c009350:	02510b13          	addi	s6,sp,37
1c009354:	e08ff06f          	j	1c00895c <pos_libc_prf+0x368>
1c009358:	02d00693          	li	a3,45
1c00935c:	02d10223          	sb	a3,36(sp)
1c009360:	02510b13          	addi	s6,sp,37
1c009364:	02410c93          	addi	s9,sp,36
1c009368:	df4ff06f          	j	1c00895c <pos_libc_prf+0x368>
1c00936c:	679d                	lui	a5,0x7
1c00936e:	e6978793          	addi	a5,a5,-407 # 6e69 <__cluster_text_size+0x6e69>
1c009372:	00f69023          	sh	a5,0(a3)
1c009376:	06600793          	li	a5,102
1c00937a:	00f68123          	sb	a5,2(a3)
1c00937e:	b52d                	j	1c0091a8 <pos_libc_prf+0xbb4>
1c009380:	02d00693          	li	a3,45
1c009384:	02d10223          	sb	a3,36(sp)
1c009388:	02510693          	addi	a3,sp,37
1c00938c:	bbdd                	j	1c009182 <pos_libc_prf+0xb8e>
1c00938e:	03000793          	li	a5,48
1c009392:	00fb0023          	sb	a5,0(s6)
1c009396:	4752                	lw	a4,20(sp)
1c009398:	4641                	li	a2,16
1c00939a:	bd6d                	j	1c009254 <pos_libc_prf+0xc60>
1c00939c:	479d                	li	a5,7
1c00939e:	9e77dfe3          	ble	t2,a5,1c008d9c <pos_libc_prf+0x7a8>
1c0093a2:	4299                	li	t0,6
1c0093a4:	06500c13          	li	s8,101
1c0093a8:	f6aff06f          	j	1c008b12 <pos_libc_prf+0x51e>
1c0093ac:	4772                	lw	a4,28(sp)
1c0093ae:	080006b7          	lui	a3,0x8000
1c0093b2:	96ba                	add	a3,a3,a4
1c0093b4:	f606b7b3          	p.bclr	a5,a3,27,0
1c0093b8:	e2078fe3          	beqz	a5,1c0091f6 <pos_libc_prf+0xc02>
1c0093bc:	06600c13          	li	s8,102
1c0093c0:	bc19                	j	1c008dd6 <pos_libc_prf+0x7e2>
1c0093c2:	6799                	lui	a5,0x6
1c0093c4:	16e78793          	addi	a5,a5,366 # 616e <__cluster_text_size+0x616e>
1c0093c8:	00f69023          	sh	a5,0(a3) # 8000000 <__l1_heap_size+0x7ff0708>
1c0093cc:	06e00793          	li	a5,110
1c0093d0:	00f68123          	sb	a5,2(a3)
1c0093d4:	bbd1                	j	1c0091a8 <pos_libc_prf+0xbb4>
1c0093d6:	4785                	li	a5,1
1c0093d8:	4612                	lw	a2,4(sp)
1c0093da:	4702                	lw	a4,0(sp)
1c0093dc:	b185                	j	1c00903c <pos_libc_prf+0xa48>
1c0093de:	02414783          	lbu	a5,36(sp)
1c0093e2:	c799                	beqz	a5,1c0093f0 <pos_libc_prf+0xdfc>
1c0093e4:	4689                	li	a3,2
1c0093e6:	02410c93          	addi	s9,sp,36
1c0093ea:	b971                	j	1c009086 <pos_libc_prf+0xa92>
1c0093ec:	4785                	li	a5,1
1c0093ee:	b879                	j	1c008c8c <pos_libc_prf+0x698>
1c0093f0:	4709                	li	a4,2
1c0093f2:	0d09                	addi	s10,s10,2
1c0093f4:	c03a                	sw	a4,0(sp)
1c0093f6:	b899                	j	1c008c4c <pos_libc_prf+0x658>
1c0093f8:	02410c93          	addi	s9,sp,36
1c0093fc:	8b66                	mv	s6,s9
1c0093fe:	b731                	j	1c00930a <pos_libc_prf+0xd16>
1c009400:	8542                	mv	a0,a6
1c009402:	b69d                	j	1c008f68 <pos_libc_prf+0x974>

1c009404 <pos_init_start>:
1c009404:	1141                	addi	sp,sp,-16
1c009406:	c422                	sw	s0,8(sp)
1c009408:	1c000437          	lui	s0,0x1c000
1c00940c:	c606                	sw	ra,12(sp)
1c00940e:	00840413          	addi	s0,s0,8 # 1c000008 <ctor_list>
1c009412:	844ff0ef          	jal	ra,1c008456 <pos_soc_init>
1c009416:	2279                	jal	1c0095a4 <pos_irq_init>
1c009418:	2ac1                	jal	1c0095e8 <pos_soc_event_init>
1c00941a:	20e5                	jal	1c009502 <pos_allocs_init>
1c00941c:	405c                	lw	a5,4(s0)
1c00941e:	c791                	beqz	a5,1c00942a <pos_init_start+0x26>
1c009420:	0411                	addi	s0,s0,4
1c009422:	0411                	addi	s0,s0,4
1c009424:	9782                	jalr	a5
1c009426:	401c                	lw	a5,0(s0)
1c009428:	ffed                	bnez	a5,1c009422 <pos_init_start+0x1e>
1c00942a:	920ff0ef          	jal	ra,1c00854a <pos_io_start>
1c00942e:	300467f3          	csrrsi	a5,mstatus,8
1c009432:	f1402573          	csrr	a0,mhartid
1c009436:	8515                	srai	a0,a0,0x5
1c009438:	f2653533          	p.bclr	a0,a0,25,6
1c00943c:	47fd                	li	a5,31
1c00943e:	00f50a63          	beq	a0,a5,1c009452 <pos_init_start+0x4e>
1c009442:	4422                	lw	s0,8(sp)
1c009444:	40b2                	lw	ra,12(sp)
1c009446:	1c0085b7          	lui	a1,0x1c008
1c00944a:	38058593          	addi	a1,a1,896 # 1c008380 <main>
1c00944e:	0141                	addi	sp,sp,16
1c009450:	a405                	j	1c009670 <cluster_start>
1c009452:	40b2                	lw	ra,12(sp)
1c009454:	4422                	lw	s0,8(sp)
1c009456:	0141                	addi	sp,sp,16
1c009458:	8082                	ret

1c00945a <pos_init_stop>:
1c00945a:	1141                	addi	sp,sp,-16
1c00945c:	c422                	sw	s0,8(sp)
1c00945e:	1c000437          	lui	s0,0x1c000
1c009462:	c606                	sw	ra,12(sp)
1c009464:	01440413          	addi	s0,s0,20 # 1c000014 <dtor_list>
1c009468:	8e6ff0ef          	jal	ra,1c00854e <pos_io_stop>
1c00946c:	405c                	lw	a5,4(s0)
1c00946e:	c791                	beqz	a5,1c00947a <pos_init_stop+0x20>
1c009470:	0411                	addi	s0,s0,4
1c009472:	0411                	addi	s0,s0,4
1c009474:	9782                	jalr	a5
1c009476:	401c                	lw	a5,0(s0)
1c009478:	ffed                	bnez	a5,1c009472 <pos_init_stop+0x18>
1c00947a:	40b2                	lw	ra,12(sp)
1c00947c:	4422                	lw	s0,8(sp)
1c00947e:	0141                	addi	sp,sp,16
1c009480:	8082                	ret

1c009482 <pos_alloc_init>:
1c009482:	00758793          	addi	a5,a1,7
1c009486:	c407b7b3          	p.bclr	a5,a5,2,0
1c00948a:	40b785b3          	sub	a1,a5,a1
1c00948e:	c11c                	sw	a5,0(a0)
1c009490:	8e0d                	sub	a2,a2,a1
1c009492:	00c05763          	blez	a2,1c0094a0 <pos_alloc_init+0x1e>
1c009496:	c4063633          	p.bclr	a2,a2,2,0
1c00949a:	c390                	sw	a2,0(a5)
1c00949c:	0007a223          	sw	zero,4(a5)
1c0094a0:	8082                	ret

1c0094a2 <pos_alloc>:
1c0094a2:	4110                	lw	a2,0(a0)
1c0094a4:	059d                	addi	a1,a1,7
1c0094a6:	c405b5b3          	p.bclr	a1,a1,2,0
1c0094aa:	ca31                	beqz	a2,1c0094fe <pos_alloc+0x5c>
1c0094ac:	4218                	lw	a4,0(a2)
1c0094ae:	425c                	lw	a5,4(a2)
1c0094b0:	02b75963          	ble	a1,a4,1c0094e2 <pos_alloc+0x40>
1c0094b4:	cb81                	beqz	a5,1c0094c4 <pos_alloc+0x22>
1c0094b6:	4398                	lw	a4,0(a5)
1c0094b8:	43d4                	lw	a3,4(a5)
1c0094ba:	00b75763          	ble	a1,a4,1c0094c8 <pos_alloc+0x26>
1c0094be:	863e                	mv	a2,a5
1c0094c0:	87b6                	mv	a5,a3
1c0094c2:	fbf5                	bnez	a5,1c0094b6 <pos_alloc+0x14>
1c0094c4:	853e                	mv	a0,a5
1c0094c6:	8082                	ret
1c0094c8:	00b70a63          	beq	a4,a1,1c0094dc <pos_alloc+0x3a>
1c0094cc:	00b78533          	add	a0,a5,a1
1c0094d0:	8f0d                	sub	a4,a4,a1
1c0094d2:	c118                	sw	a4,0(a0)
1c0094d4:	c154                	sw	a3,4(a0)
1c0094d6:	c248                	sw	a0,4(a2)
1c0094d8:	853e                	mv	a0,a5
1c0094da:	8082                	ret
1c0094dc:	c254                	sw	a3,4(a2)
1c0094de:	853e                	mv	a0,a5
1c0094e0:	8082                	ret
1c0094e2:	00e58b63          	beq	a1,a4,1c0094f8 <pos_alloc+0x56>
1c0094e6:	00b606b3          	add	a3,a2,a1
1c0094ea:	8f0d                	sub	a4,a4,a1
1c0094ec:	c2dc                	sw	a5,4(a3)
1c0094ee:	c298                	sw	a4,0(a3)
1c0094f0:	87b2                	mv	a5,a2
1c0094f2:	c114                	sw	a3,0(a0)
1c0094f4:	853e                	mv	a0,a5
1c0094f6:	8082                	ret
1c0094f8:	c11c                	sw	a5,0(a0)
1c0094fa:	87b2                	mv	a5,a2
1c0094fc:	b7e1                	j	1c0094c4 <pos_alloc+0x22>
1c0094fe:	4781                	li	a5,0
1c009500:	b7d1                	j	1c0094c4 <pos_alloc+0x22>

1c009502 <pos_allocs_init>:
1c009502:	1141                	addi	sp,sp,-16
1c009504:	1c0015b7          	lui	a1,0x1c001
1c009508:	c606                	sw	ra,12(sp)
1c00950a:	8a458793          	addi	a5,a1,-1884 # 1c0008a4 <__l2_priv0_end>
1c00950e:	1c008637          	lui	a2,0x1c008
1c009512:	04c7cc63          	blt	a5,a2,1c00956a <pos_allocs_init+0x68>
1c009516:	4581                	li	a1,0
1c009518:	4601                	li	a2,0
1c00951a:	1c001537          	lui	a0,0x1c001
1c00951e:	89450513          	addi	a0,a0,-1900 # 1c000894 <pos_alloc_l2>
1c009522:	3785                	jal	1c009482 <pos_alloc_init>
1c009524:	1c0095b7          	lui	a1,0x1c009
1c009528:	75458793          	addi	a5,a1,1876 # 1c009754 <__l2_priv1_end>
1c00952c:	1c010637          	lui	a2,0x1c010
1c009530:	02c7c963          	blt	a5,a2,1c009562 <pos_allocs_init+0x60>
1c009534:	4581                	li	a1,0
1c009536:	4601                	li	a2,0
1c009538:	1c001537          	lui	a0,0x1c001
1c00953c:	89850513          	addi	a0,a0,-1896 # 1c000898 <pos_alloc_l2+0x4>
1c009540:	3789                	jal	1c009482 <pos_alloc_init>
1c009542:	100005b7          	lui	a1,0x10000
1c009546:	40b2                	lw	ra,12(sp)
1c009548:	70858793          	addi	a5,a1,1800 # 10000708 <__l2_shared_end>
1c00954c:	1c080637          	lui	a2,0x1c080
1c009550:	1c001537          	lui	a0,0x1c001
1c009554:	8e1d                	sub	a2,a2,a5
1c009556:	70858593          	addi	a1,a1,1800
1c00955a:	89c50513          	addi	a0,a0,-1892 # 1c00089c <pos_alloc_l2+0x8>
1c00955e:	0141                	addi	sp,sp,16
1c009560:	b70d                	j	1c009482 <pos_alloc_init>
1c009562:	8e1d                	sub	a2,a2,a5
1c009564:	75458593          	addi	a1,a1,1876
1c009568:	bfc1                	j	1c009538 <pos_allocs_init+0x36>
1c00956a:	8e1d                	sub	a2,a2,a5
1c00956c:	8a458593          	addi	a1,a1,-1884
1c009570:	b76d                	j	1c00951a <pos_allocs_init+0x18>

1c009572 <alloc_init_l1>:
1c009572:	100007b7          	lui	a5,0x10000
1c009576:	01651593          	slli	a1,a0,0x16
1c00957a:	70878793          	addi	a5,a5,1800 # 10000708 <__l2_shared_end>
1c00957e:	95be                	add	a1,a1,a5
1c009580:	1c0017b7          	lui	a5,0x1c001
1c009584:	050a                	slli	a0,a0,0x2
1c009586:	6641                	lui	a2,0x10
1c009588:	89078793          	addi	a5,a5,-1904 # 1c000890 <pos_alloc_l1>
1c00958c:	8f860613          	addi	a2,a2,-1800 # f8f8 <__l1_heap_size>
1c009590:	953e                	add	a0,a0,a5
1c009592:	bdc5                	j	1c009482 <pos_alloc_init>

1c009594 <pi_l1_malloc>:
1c009594:	1c0017b7          	lui	a5,0x1c001
1c009598:	050a                	slli	a0,a0,0x2
1c00959a:	89078793          	addi	a5,a5,-1904 # 1c000890 <pos_alloc_l1>
1c00959e:	953e                	add	a0,a0,a5
1c0095a0:	b709                	j	1c0094a2 <pos_alloc>

1c0095a2 <__rt_handle_illegal_instr>:
1c0095a2:	8082                	ret

1c0095a4 <pos_irq_init>:
1c0095a4:	f14027f3          	csrr	a5,mhartid
1c0095a8:	477d                	li	a4,31
1c0095aa:	ca5797b3          	p.extractu	a5,a5,5,5
1c0095ae:	00e78f63          	beq	a5,a4,1c0095cc <pos_irq_init+0x28>
1c0095b2:	002047b7          	lui	a5,0x204
1c0095b6:	577d                	li	a4,-1
1c0095b8:	cb98                	sw	a4,16(a5)
1c0095ba:	1c0087b7          	lui	a5,0x1c008
1c0095be:	00078793          	mv	a5,a5
1c0095c2:	c007c7b3          	p.bset	a5,a5,0,0
1c0095c6:	30579073          	csrw	mtvec,a5
1c0095ca:	8082                	ret
1c0095cc:	1a10a7b7          	lui	a5,0x1a10a
1c0095d0:	577d                	li	a4,-1
1c0095d2:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa109100>
1c0095d6:	1c0087b7          	lui	a5,0x1c008
1c0095da:	00078793          	mv	a5,a5
1c0095de:	c007c7b3          	p.bset	a5,a5,0,0
1c0095e2:	30579073          	csrw	mtvec,a5
1c0095e6:	8082                	ret

1c0095e8 <pos_soc_event_init>:
1c0095e8:	1a1067b7          	lui	a5,0x1a106
1c0095ec:	577d                	li	a4,-1
1c0095ee:	00478693          	addi	a3,a5,4 # 1a106004 <__l2_shared_end+0xa1058fc>
1c0095f2:	c298                	sw	a4,0(a3)
1c0095f4:	00878693          	addi	a3,a5,8
1c0095f8:	c298                	sw	a4,0(a3)
1c0095fa:	00c78693          	addi	a3,a5,12
1c0095fe:	c298                	sw	a4,0(a3)
1c009600:	01078693          	addi	a3,a5,16
1c009604:	c298                	sw	a4,0(a3)
1c009606:	01478693          	addi	a3,a5,20
1c00960a:	c298                	sw	a4,0(a3)
1c00960c:	01878693          	addi	a3,a5,24
1c009610:	c298                	sw	a4,0(a3)
1c009612:	01c78693          	addi	a3,a5,28
1c009616:	c298                	sw	a4,0(a3)
1c009618:	02078793          	addi	a5,a5,32
1c00961c:	c398                	sw	a4,0(a5)
1c00961e:	8082                	ret

1c009620 <cluster_entry_stub>:
1c009620:	1141                	addi	sp,sp,-16
1c009622:	c606                	sw	ra,12(sp)
1c009624:	002047b7          	lui	a5,0x204
1c009628:	00070737          	lui	a4,0x70
1c00962c:	c798                	sw	a4,8(a5)
1c00962e:	0ff00713          	li	a4,255
1c009632:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4908>
1c009636:	00e7a023          	sw	a4,0(a5)
1c00963a:	00e7a623          	sw	a4,12(a5)
1c00963e:	1c0017b7          	lui	a5,0x1c001
1c009642:	8a07a783          	lw	a5,-1888(a5) # 1c0008a0 <cluster_entry>
1c009646:	9782                	jalr	a5
1c009648:	f14027f3          	csrr	a5,mhartid
1c00964c:	f457b7b3          	p.bclr	a5,a5,26,5
1c009650:	eb89                	bnez	a5,1c009662 <cluster_entry_stub+0x42>
1c009652:	1c001737          	lui	a4,0x1c001
1c009656:	1c0017b7          	lui	a5,0x1c001
1c00965a:	88a72423          	sw	a0,-1912(a4) # 1c000888 <_bss_start>
1c00965e:	8807a623          	sw	zero,-1908(a5) # 1c00088c <cluster_running>
1c009662:	002047b7          	lui	a5,0x204
1c009666:	577d                	li	a4,-1
1c009668:	c3d8                	sw	a4,4(a5)
1c00966a:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f4740>
1c00966e:	a001                	j	1c00966e <cluster_entry_stub+0x4e>

1c009670 <cluster_start>:
1c009670:	1141                	addi	sp,sp,-16
1c009672:	1c0017b7          	lui	a5,0x1c001
1c009676:	c226                	sw	s1,4(sp)
1c009678:	84aa                	mv	s1,a0
1c00967a:	4509                	li	a0,2
1c00967c:	8ab7a023          	sw	a1,-1888(a5) # 1c0008a0 <cluster_entry>
1c009680:	c606                	sw	ra,12(sp)
1c009682:	c422                	sw	s0,8(sp)
1c009684:	d29fe0ef          	jal	ra,1c0083ac <pos_fll_init>
1c009688:	8526                	mv	a0,s1
1c00968a:	35e5                	jal	1c009572 <alloc_init_l1>
1c00968c:	04048413          	addi	s0,s1,64 # 10000040 <W8_su+0x3c>
1c009690:	00201737          	lui	a4,0x201
1c009694:	40070713          	addi	a4,a4,1024 # 201400 <__l1_heap_size+0x1f1b08>
1c009698:	045a                	slli	s0,s0,0x16
1c00969a:	56fd                	li	a3,-1
1c00969c:	f14027f3          	csrr	a5,mhartid
1c0096a0:	00d46723          	p.sw	a3,a4(s0)
1c0096a4:	ca5797b3          	p.extractu	a5,a5,5,5
1c0096a8:	477d                	li	a4,31
1c0096aa:	00e78f63          	beq	a5,a4,1c0096c8 <cluster_start+0x58>
1c0096ae:	002047b7          	lui	a5,0x204
1c0096b2:	00070737          	lui	a4,0x70
1c0096b6:	c798                	sw	a4,8(a5)
1c0096b8:	0ff00713          	li	a4,255
1c0096bc:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4908>
1c0096c0:	00e7a023          	sw	a4,0(a5)
1c0096c4:	00e7a623          	sw	a4,12(a5)
1c0096c8:	8526                	mv	a0,s1
1c0096ca:	3565                	jal	1c009572 <alloc_init_l1>
1c0096cc:	6591                	lui	a1,0x4
1c0096ce:	8526                	mv	a0,s1
1c0096d0:	35d1                	jal	1c009594 <pi_l1_malloc>
1c0096d2:	100007b7          	lui	a5,0x10000
1c0096d6:	70a7a223          	sw	a0,1796(a5) # 10000704 <cluster_stacks>
1c0096da:	cd15                	beqz	a0,1c009716 <cluster_start+0xa6>
1c0096dc:	00200637          	lui	a2,0x200
1c0096e0:	1c0017b7          	lui	a5,0x1c001
1c0096e4:	4705                	li	a4,1
1c0096e6:	1c0085b7          	lui	a1,0x1c008
1c0096ea:	04060613          	addi	a2,a2,64 # 200040 <__l1_heap_size+0x1f0748>
1c0096ee:	88e7a623          	sw	a4,-1908(a5) # 1c00088c <cluster_running>
1c0096f2:	08058593          	addi	a1,a1,128 # 1c008080 <_start>
1c0096f6:	9622                	add	a2,a2,s0
1c0096f8:	4701                	li	a4,0
1c0096fa:	008350fb          	lp.setupi	x1,8,1c009706 <cluster_start+0x96>
1c0096fe:	00271693          	slli	a3,a4,0x2
1c009702:	00b6e623          	p.sw	a1,a2(a3)
1c009706:	0705                	addi	a4,a4,1
1c009708:	002007b7          	lui	a5,0x200
1c00970c:	07a1                	addi	a5,a5,8
1c00970e:	0ff00713          	li	a4,255
1c009712:	00e467a3          	p.sw	a4,a5(s0)
1c009716:	40b2                	lw	ra,12(sp)
1c009718:	4422                	lw	s0,8(sp)
1c00971a:	4492                	lw	s1,4(sp)
1c00971c:	0141                	addi	sp,sp,16
1c00971e:	8082                	ret

1c009720 <cluster_wait>:
1c009720:	1c001737          	lui	a4,0x1c001
1c009724:	88c70713          	addi	a4,a4,-1908 # 1c00088c <cluster_running>
1c009728:	431c                	lw	a5,0(a4)
1c00972a:	fffd                	bnez	a5,1c009728 <cluster_wait+0x8>
1c00972c:	1c0017b7          	lui	a5,0x1c001
1c009730:	8887a503          	lw	a0,-1912(a5) # 1c000888 <_bss_start>
1c009734:	8082                	ret

1c009736 <synch_barrier>:
1c009736:	f14027f3          	csrr	a5,mhartid
1c00973a:	477d                	li	a4,31
1c00973c:	ca5797b3          	p.extractu	a5,a5,5,5
1c009740:	00e78863          	beq	a5,a4,1c009750 <synch_barrier+0x1a>
1c009744:	002047b7          	lui	a5,0x204
1c009748:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4908>
1c00974c:	01c7e703          	p.elw	a4,28(a5)
1c009750:	8082                	ret

1c009752 <_endtext>:
	...
make[1]: Leaving directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/matmul_8b_int_1cores'
