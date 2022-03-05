Flags : -O3 -Iinc  -DNB_RUN=1   
make[1]: Entering directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/matmul_32b_float_8cores'
/usr/scratch/fenga5/beppe/INSTALL-PULP/bin/riscv32-unknown-elf-objdump -Mmarch=rv32imcxgap9 -d /scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/matmul_32b_float_8cores/build/test/test

/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/matmul_32b_float_8cores/build/test/test:     file format elf32-littleriscv


Disassembly of section .vectors:

1c008000 <__irq_vector_base>:
1c008000:	6ec0006f          	j	1c0086ec <__rt_handle_illegal_instr>
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
1c008084:	6680006f          	j	1c0086ec <__rt_handle_illegal_instr>

1c008088 <pos_no_irq_handler>:
1c008088:	30200073          	mret

1c00808c <pos_semihosting_call>:
1c00808c:	00100073          	ebreak
1c008090:	00008067          	ret

1c008094 <pe_start>:
1c008094:	f3ff9117          	auipc	sp,0xf3ff9
1c008098:	f7010113          	addi	sp,sp,-144 # 10001004 <cluster_stacks>
1c00809c:	00012103          	lw	sp,0(sp)
1c0080a0:	000011b7          	lui	gp,0x1
1c0080a4:	80018193          	addi	gp,gp,-2048 # 800 <__cluster_text_size+0x800>
1c0080a8:	00158593          	addi	a1,a1,1
1c0080ac:	02b180b3          	mul	ra,gp,a1
1c0080b0:	00110133          	add	sp,sp,ra
1c0080b4:	6e20006f          	j	1c008796 <cluster_entry_stub>

1c0080b8 <do_cl_boot>:
1c0080b8:	10200137          	lui	sp,0x10200
1c0080bc:	00100193          	li	gp,1
1c0080c0:	00000217          	auipc	tp,0x0
1c0080c4:	fc020213          	addi	tp,tp,-64 # 1c008080 <_start>
1c0080c8:	04412023          	sw	tp,64(sp) # 10200040 <__l2_shared_end+0x1ff038>
1c0080cc:	00312423          	sw	gp,8(sp)

1c0080d0 <loop>:
1c0080d0:	1a10a137          	lui	sp,0x1a10a
1c0080d4:	80010113          	addi	sp,sp,-2048 # 1a109800 <__l2_shared_end+0xa1087f8>
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
1c0080fc:	72828293          	addi	t0,t0,1832 # 1c000820 <stack>
1c008100:	ffff8317          	auipc	t1,0xffff8
1c008104:	73c30313          	addi	t1,t1,1852 # 1c00083c <__l2_priv0_end>
1c008108:	0002a023          	sw	zero,0(t0)
1c00810c:	0291                	addi	t0,t0,4
1c00810e:	fe62ede3          	bltu	t0,t1,1c008108 <_stext+0x24>
1c008112:	ffff8117          	auipc	sp,0xffff8
1c008116:	70e10113          	addi	sp,sp,1806 # 1c000820 <stack>
1c00811a:	43a000ef          	jal	ra,1c008554 <pos_init_start>
1c00811e:	00000513          	li	a0,0
1c008122:	00000593          	li	a1,0
1c008126:	00000397          	auipc	t2,0x0
1c00812a:	0ce38393          	addi	t2,t2,206 # 1c0081f4 <main>
1c00812e:	000380e7          	jalr	t2
1c008132:	842a                	mv	s0,a0
1c008134:	472000ef          	jal	ra,1c0085a6 <pos_init_stop>
1c008138:	8522                	mv	a0,s0
1c00813a:	400000ef          	jal	ra,1c00853a <exit>

1c00813e <cpu_perf_get.constprop.0>:
1c00813e:	78002573          	csrr	a0,pccr0
1c008142:	8082                	ret

1c008144 <run_test>:
1c008144:	102007b7          	lui	a5,0x10200
1c008148:	07e1                	addi	a5,a5,24
1c00814a:	4398                	lw	a4,0(a5)
1c00814c:	1141                	addi	sp,sp,-16
1c00814e:	c0b74733          	p.bset	a4,a4,0,11
1c008152:	c398                	sw	a4,0(a5)
1c008154:	4398                	lw	a4,0(a5)
1c008156:	c0874733          	p.bset	a4,a4,0,8
1c00815a:	c398                	sw	a4,0(a5)
1c00815c:	4398                	lw	a4,0(a5)
1c00815e:	ce073733          	p.bclr	a4,a4,7,0
1c008162:	c398                	sw	a4,0(a5)
1c008164:	4398                	lw	a4,0(a5)
1c008166:	c0374733          	p.bset	a4,a4,0,3
1c00816a:	c398                	sw	a4,0(a5)
1c00816c:	102017b7          	lui	a5,0x10201
1c008170:	0007aa23          	sw	zero,20(a5) # 10201014 <__l2_shared_end+0x20000c>
1c008174:	c402                	sw	zero,8(sp)
1c008176:	4722                	lw	a4,8(sp)
1c008178:	47a5                	li	a5,9
1c00817a:	00e7c963          	blt	a5,a4,1c00818c <run_test+0x48>
1c00817e:	4725                	li	a4,9
1c008180:	47a2                	lw	a5,8(sp)
1c008182:	0785                	addi	a5,a5,1
1c008184:	c43e                	sw	a5,8(sp)
1c008186:	47a2                	lw	a5,8(sp)
1c008188:	fef75ce3          	ble	a5,a4,1c008180 <run_test+0x3c>
1c00818c:	102016b7          	lui	a3,0x10201
1c008190:	0006aa23          	sw	zero,20(a3) # 10201014 <__l2_shared_end+0x20000c>
1c008194:	6741                	lui	a4,0x10
1c008196:	02170613          	addi	a2,a4,33 # 10021 <__l1_heap_size+0x1029>
1c00819a:	02068793          	addi	a5,a3,32
1c00819e:	02c7ae23          	sw	a2,60(a5)
1c0081a2:	00170613          	addi	a2,a4,1
1c0081a6:	04c7a023          	sw	a2,64(a5)
1c0081aa:	04c7a223          	sw	a2,68(a5)
1c0081ae:	0709                	addi	a4,a4,2
1c0081b0:	04e7a423          	sw	a4,72(a5)
1c0081b4:	04c7a623          	sw	a2,76(a5)
1c0081b8:	60000713          	li	a4,1536
1c0081bc:	04e7ae23          	sw	a4,92(a5)
1c0081c0:	0006a0a3          	sw	zero,1(a3)
1c0081c4:	0006a023          	sw	zero,0(a3)
1c0081c8:	c602                	sw	zero,12(sp)
1c0081ca:	4732                	lw	a4,12(sp)
1c0081cc:	47a5                	li	a5,9
1c0081ce:	00e7c963          	blt	a5,a4,1c0081e0 <run_test+0x9c>
1c0081d2:	4725                	li	a4,9
1c0081d4:	47b2                	lw	a5,12(sp)
1c0081d6:	0785                	addi	a5,a5,1
1c0081d8:	c63e                	sw	a5,12(sp)
1c0081da:	47b2                	lw	a5,12(sp)
1c0081dc:	fef75ce3          	ble	a5,a4,1c0081d4 <run_test+0x90>
1c0081e0:	102017b7          	lui	a5,0x10201
1c0081e4:	20000713          	li	a4,512
1c0081e8:	02078793          	addi	a5,a5,32 # 10201020 <__l2_shared_end+0x200018>
1c0081ec:	04e7ae23          	sw	a4,92(a5)
1c0081f0:	0141                	addi	sp,sp,16
1c0081f2:	8082                	ret

1c0081f4 <main>:
1c0081f4:	7159                	addi	sp,sp,-112
1c0081f6:	f14027f3          	csrr	a5,mhartid
1c0081fa:	d686                	sw	ra,108(sp)
1c0081fc:	d4a2                	sw	s0,104(sp)
1c0081fe:	d2a6                	sw	s1,100(sp)
1c008200:	d0ca                	sw	s2,96(sp)
1c008202:	cece                	sw	s3,92(sp)
1c008204:	ccd2                	sw	s4,88(sp)
1c008206:	cad6                	sw	s5,84(sp)
1c008208:	c8da                	sw	s6,80(sp)
1c00820a:	c6de                	sw	s7,76(sp)
1c00820c:	c4e2                	sw	s8,72(sp)
1c00820e:	c2e6                	sw	s9,68(sp)
1c008210:	c0ea                	sw	s10,64(sp)
1c008212:	de6e                	sw	s11,60(sp)
1c008214:	ca5797b3          	p.extractu	a5,a5,5,5
1c008218:	c391                	beqz	a5,1c00821c <main+0x28>
1c00821a:	372d                	jal	1c008144 <run_test>
1c00821c:	f14027f3          	csrr	a5,mhartid
1c008220:	ca579733          	p.extractu	a4,a5,5,5
1c008224:	20071163          	bnez	a4,1c008426 <main+0x232>
1c008228:	f457b7b3          	p.bclr	a5,a5,26,5
1c00822c:	d23e                	sw	a5,36(sp)
1c00822e:	00179413          	slli	s0,a5,0x1
1c008232:	1c078563          	beqz	a5,1c0083fc <main+0x208>
1c008236:	2d69                	jal	1c0088d0 <synch_barrier>
1c008238:	2d61                	jal	1c0088d0 <synch_barrier>
1c00823a:	5712                	lw	a4,36(sp)
1c00823c:	10000537          	lui	a0,0x10000
1c008240:	00441493          	slli	s1,s0,0x4
1c008244:	00450513          	addi	a0,a0,4 # 10000004 <matA>
1c008248:	041a                	slli	s0,s0,0x6
1c00824a:	942a                	add	s0,s0,a0
1c00824c:	02048693          	addi	a3,s1,32
1c008250:	0741                	addi	a4,a4,16
1c008252:	d022                	sw	s0,32(sp)
1c008254:	d436                	sw	a3,40(sp)
1c008256:	d63a                	sw	a4,44(sp)
1c008258:	5792                	lw	a5,36(sp)
1c00825a:	eb81                	bnez	a5,1c00826a <main+0x76>
1c00825c:	abbab537          	lui	a0,0xabbab
1c008260:	bba50513          	addi	a0,a0,-1094 # abbaabba <pulp__FC+0xabbaabbb>
1c008264:	10000437          	lui	s0,0x10000
1c008268:	c008                	sw	a0,0(s0)
1c00826a:	3dd1                	jal	1c00813e <cpu_perf_get.constprop.0>
1c00826c:	5682                	lw	a3,32(sp)
1c00826e:	5092                	lw	ra,36(sp)
1c008270:	56d8                	lw	a4,44(a3)
1c008272:	5a9c                	lw	a5,48(a3)
1c008274:	5680                	lw	s0,40(a3)
1c008276:	c63a                	sw	a4,12(sp)
1c008278:	5702                	lw	a4,32(sp)
1c00827a:	5ac8                	lw	a0,52(a3)
1c00827c:	0006ad83          	lw	s11,0(a3)
1c008280:	0046ad03          	lw	s10,4(a3)
1c008284:	0086ac83          	lw	s9,8(a3)
1c008288:	00c6ac03          	lw	s8,12(a3)
1c00828c:	0106ab83          	lw	s7,16(a3)
1c008290:	0146ab03          	lw	s6,20(a3)
1c008294:	0186aa83          	lw	s5,24(a3)
1c008298:	01c6aa03          	lw	s4,28(a3)
1c00829c:	0206a983          	lw	s3,32(a3)
1c0082a0:	0246a903          	lw	s2,36(a3)
1c0082a4:	c83e                	sw	a5,16(sp)
1c0082a6:	5e94                	lw	a3,56(a3)
1c0082a8:	5f58                	lw	a4,60(a4)
1c0082aa:	57b2                	lw	a5,44(sp)
1c0082ac:	ca2a                	sw	a0,20(sp)
1c0082ae:	cc36                	sw	a3,24(sp)
1c0082b0:	ce3a                	sw	a4,28(sp)
1c0082b2:	401783b3          	sub	t2,a5,ra
1c0082b6:	c422                	sw	s0,8(sp)
1c0082b8:	05b3c0fb          	lp.setup	x1,t2,1c00836e <main+0x17a>
1c0082bc:	f640b733          	p.bclr	a4,ra,27,4
1c0082c0:	10001437          	lui	s0,0x10001
1c0082c4:	00271793          	slli	a5,a4,0x2
1c0082c8:	00440413          	addi	s0,s0,4 # 10001004 <cluster_stacks>
1c0082cc:	97a2                	add	a5,a5,s0
1c0082ce:	8007a683          	lw	a3,-2048(a5)
1c0082d2:	00000513          	li	a0,0
1c0082d6:	8407a583          	lw	a1,-1984(a5)
1c0082da:	8807a603          	lw	a2,-1920(a5)
1c0082de:	50ddf6c3          	fmadd.s	a3,s11,a3,a0
1c0082e2:	8c07a403          	lw	s0,-1856(a5)
1c0082e6:	9007a283          	lw	t0,-1792(a5)
1c0082ea:	9407af83          	lw	t6,-1728(a5)
1c0082ee:	9807af03          	lw	t5,-1664(a5)
1c0082f2:	68bd76c3          	fmadd.s	a3,s10,a1,a3
1c0082f6:	9c07ae83          	lw	t4,-1600(a5)
1c0082fa:	a007ae03          	lw	t3,-1536(a5)
1c0082fe:	a407a303          	lw	t1,-1472(a5)
1c008302:	a807a883          	lw	a7,-1408(a5)
1c008306:	68ccf6c3          	fmadd.s	a3,s9,a2,a3
1c00830a:	9726                	add	a4,a4,s1
1c00830c:	070a                	slli	a4,a4,0x2
1c00830e:	ac07a803          	lw	a6,-1344(a5)
1c008312:	b007a503          	lw	a0,-1280(a5)
1c008316:	688c76c3          	fmadd.s	a3,s8,s0,a3
1c00831a:	10000437          	lui	s0,0x10000
1c00831e:	00440413          	addi	s0,s0,4 # 10000004 <matA>
1c008322:	9722                	add	a4,a4,s0
1c008324:	4432                	lw	s0,12(sp)
1c008326:	685bf6c3          	fmadd.s	a3,s7,t0,a3
1c00832a:	b407a583          	lw	a1,-1216(a5)
1c00832e:	b807a603          	lw	a2,-1152(a5)
1c008332:	bc07a783          	lw	a5,-1088(a5)
1c008336:	0085                	addi	ra,ra,1
1c008338:	69fb76c3          	fmadd.s	a3,s6,t6,a3
1c00833c:	69eaf6c3          	fmadd.s	a3,s5,t5,a3
1c008340:	69da76c3          	fmadd.s	a3,s4,t4,a3
1c008344:	69c9f6c3          	fmadd.s	a3,s3,t3,a3
1c008348:	68697343          	fmadd.s	t1,s2,t1,a3
1c00834c:	46a2                	lw	a3,8(sp)
1c00834e:	3116f8c3          	fmadd.s	a7,a3,a7,t1
1c008352:	46c2                	lw	a3,16(sp)
1c008354:	89047843          	fmadd.s	a6,s0,a6,a7
1c008358:	4452                	lw	s0,20(sp)
1c00835a:	80a6f543          	fmadd.s	a0,a3,a0,a6
1c00835e:	46f2                	lw	a3,28(sp)
1c008360:	50b475c3          	fmadd.s	a1,s0,a1,a0
1c008364:	4562                	lw	a0,24(sp)
1c008366:	58c57643          	fmadd.s	a2,a0,a2,a1
1c00836a:	60f6f7c3          	fmadd.s	a5,a3,a5,a2
1c00836e:	40f72023          	sw	a5,1024(a4)
1c008372:	5702                	lw	a4,32(sp)
1c008374:	57a2                	lw	a5,40(sp)
1c008376:	04c1                	addi	s1,s1,16
1c008378:	04070713          	addi	a4,a4,64
1c00837c:	d03a                	sw	a4,32(sp)
1c00837e:	ec979de3          	bne	a5,s1,1c008258 <main+0x64>
1c008382:	23b9                	jal	1c0088d0 <synch_barrier>
1c008384:	3b6d                	jal	1c00813e <cpu_perf_get.constprop.0>
1c008386:	5412                	lw	s0,36(sp)
1c008388:	ec41                	bnez	s0,1c008420 <main+0x22c>
1c00838a:	deadd7b7          	lui	a5,0xdeadd
1c00838e:	10000737          	lui	a4,0x10000
1c008392:	aca78793          	addi	a5,a5,-1334 # deadcaca <pulp__FC+0xdeadcacb>
1c008396:	c31c                	sw	a5,0(a4)
1c008398:	2b25                	jal	1c0088d0 <synch_barrier>
1c00839a:	10001537          	lui	a0,0x10001
1c00839e:	100006b7          	lui	a3,0x10000
1c0083a2:	00450513          	addi	a0,a0,4 # 10001004 <cluster_stacks>
1c0083a6:	00468693          	addi	a3,a3,4 # 10000004 <matA>
1c0083aa:	c0050813          	addi	a6,a0,-1024
1c0083ae:	40068593          	addi	a1,a3,1024
1c0083b2:	4501                	li	a0,0
1c0083b4:	4889                	li	a7,2
1c0083b6:	10000713          	li	a4,256
1c0083ba:	0048268b          	p.lw	a3,4(a6!)
1c0083be:	0045a60b          	p.lw	a2,4(a1!)
1c0083c2:	40c687b3          	sub	a5,a3,a2
1c0083c6:	00f8a7b3          	slt	a5,a7,a5
1c0083ca:	00d60363          	beq	a2,a3,1c0083d0 <main+0x1dc>
1c0083ce:	953e                	add	a0,a0,a5
1c0083d0:	177d                	addi	a4,a4,-1
1c0083d2:	f765                	bnez	a4,1c0083ba <main+0x1c6>
1c0083d4:	100007b7          	lui	a5,0x10000
1c0083d8:	c141                	beqz	a0,1c008458 <main+0x264>
1c0083da:	4711                	li	a4,4
1c0083dc:	c398                	sw	a4,0(a5)
1c0083de:	50b6                	lw	ra,108(sp)
1c0083e0:	5426                	lw	s0,104(sp)
1c0083e2:	5496                	lw	s1,100(sp)
1c0083e4:	5906                	lw	s2,96(sp)
1c0083e6:	49f6                	lw	s3,92(sp)
1c0083e8:	4a66                	lw	s4,88(sp)
1c0083ea:	4ad6                	lw	s5,84(sp)
1c0083ec:	4b46                	lw	s6,80(sp)
1c0083ee:	4bb6                	lw	s7,76(sp)
1c0083f0:	4c26                	lw	s8,72(sp)
1c0083f2:	4c96                	lw	s9,68(sp)
1c0083f4:	4d06                	lw	s10,64(sp)
1c0083f6:	5df2                	lw	s11,60(sp)
1c0083f8:	6165                	addi	sp,sp,112
1c0083fa:	8082                	ret
1c0083fc:	cc179073          	csrw	0xcc1,a5
1c008400:	79f79073          	csrw	pccr31,a5
1c008404:	57fd                	li	a5,-1
1c008406:	873e                	mv	a4,a5
1c008408:	cc071073          	csrw	0xcc0,a4
1c00840c:	470d                	li	a4,3
1c00840e:	cc171073          	csrw	0xcc1,a4
1c008412:	cc079073          	csrw	0xcc0,a5
1c008416:	cc171073          	csrw	0xcc1,a4
1c00841a:	295d                	jal	1c0088d0 <synch_barrier>
1c00841c:	2955                	jal	1c0088d0 <synch_barrier>
1c00841e:	bd31                	j	1c00823a <main+0x46>
1c008420:	2945                	jal	1c0088d0 <synch_barrier>
1c008422:	4501                	li	a0,0
1c008424:	bf6d                	j	1c0083de <main+0x1ea>
1c008426:	3b39                	jal	1c008144 <run_test>
1c008428:	100017b7          	lui	a5,0x10001
1c00842c:	5426                	lw	s0,104(sp)
1c00842e:	1a107737          	lui	a4,0x1a107
1c008432:	50b6                	lw	ra,108(sp)
1c008434:	5496                	lw	s1,100(sp)
1c008436:	5906                	lw	s2,96(sp)
1c008438:	49f6                	lw	s3,92(sp)
1c00843a:	4a66                	lw	s4,88(sp)
1c00843c:	4ad6                	lw	s5,84(sp)
1c00843e:	4b46                	lw	s6,80(sp)
1c008440:	4bb6                	lw	s7,76(sp)
1c008442:	4c26                	lw	s8,72(sp)
1c008444:	4c96                	lw	s9,68(sp)
1c008446:	4d06                	lw	s10,64(sp)
1c008448:	5df2                	lw	s11,60(sp)
1c00844a:	0789                	addi	a5,a5,2
1c00844c:	00072423          	sw	zero,8(a4) # 1a107008 <__l2_shared_end+0xa106000>
1c008450:	c35c                	sw	a5,4(a4)
1c008452:	4501                	li	a0,0
1c008454:	6165                	addi	sp,sp,112
1c008456:	ae11                	j	1c00876a <bench_cluster_forward>
1c008458:	4709                	li	a4,2
1c00845a:	c398                	sw	a4,0(a5)
1c00845c:	b749                	j	1c0083de <main+0x1ea>

1c00845e <pos_fll_init>:
1c00845e:	08152063          	p.beqimm	a0,1,1c0084de <pos_fll_init+0x80>
1c008462:	04252a63          	p.beqimm	a0,2,1c0084b6 <pos_fll_init+0x58>
1c008466:	c505                	beqz	a0,1c00848e <pos_fll_init+0x30>
1c008468:	4701                	li	a4,0
1c00846a:	00470793          	addi	a5,a4,4
1c00846e:	05300613          	li	a2,83
1c008472:	00c70693          	addi	a3,a4,12
1c008476:	c390                	sw	a2,0(a5)
1c008478:	020c17b7          	lui	a5,0x20c1
1c00847c:	0721                	addi	a4,a4,8
1c00847e:	0006a023          	sw	zero,0(a3)
1c008482:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b27e2>
1c008486:	c31c                	sw	a5,0(a4)
1c008488:	05f68537          	lui	a0,0x5f68
1c00848c:	8082                	ret
1c00848e:	1a1007b7          	lui	a5,0x1a100
1c008492:	00878713          	addi	a4,a5,8 # 1a100008 <__l2_shared_end+0xa0ff000>
1c008496:	00c78693          	addi	a3,a5,12
1c00849a:	05300613          	li	a2,83
1c00849e:	0791                	addi	a5,a5,4
1c0084a0:	c390                	sw	a2,0(a5)
1c0084a2:	020c17b7          	lui	a5,0x20c1
1c0084a6:	0006a023          	sw	zero,0(a3)
1c0084aa:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b27e2>
1c0084ae:	c31c                	sw	a5,0(a4)
1c0084b0:	05f68537          	lui	a0,0x5f68
1c0084b4:	8082                	ret
1c0084b6:	1a1007b7          	lui	a5,0x1a100
1c0084ba:	01878713          	addi	a4,a5,24 # 1a100018 <__l2_shared_end+0xa0ff010>
1c0084be:	01c78693          	addi	a3,a5,28
1c0084c2:	05300613          	li	a2,83
1c0084c6:	07d1                	addi	a5,a5,20
1c0084c8:	c390                	sw	a2,0(a5)
1c0084ca:	020c17b7          	lui	a5,0x20c1
1c0084ce:	0006a023          	sw	zero,0(a3)
1c0084d2:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b27e2>
1c0084d6:	c31c                	sw	a5,0(a4)
1c0084d8:	05f68537          	lui	a0,0x5f68
1c0084dc:	8082                	ret
1c0084de:	1a1007b7          	lui	a5,0x1a100
1c0084e2:	02878713          	addi	a4,a5,40 # 1a100028 <__l2_shared_end+0xa0ff020>
1c0084e6:	02c78693          	addi	a3,a5,44
1c0084ea:	05300613          	li	a2,83
1c0084ee:	02478793          	addi	a5,a5,36
1c0084f2:	c390                	sw	a2,0(a5)
1c0084f4:	020c17b7          	lui	a5,0x20c1
1c0084f8:	0006a023          	sw	zero,0(a3)
1c0084fc:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b27e2>
1c008500:	c31c                	sw	a5,0(a4)
1c008502:	05f68537          	lui	a0,0x5f68
1c008506:	8082                	ret

1c008508 <pos_soc_init>:
1c008508:	8082                	ret

1c00850a <pos_wait_forever>:
1c00850a:	f14027f3          	csrr	a5,mhartid
1c00850e:	477d                	li	a4,31
1c008510:	ca5797b3          	p.extractu	a5,a5,5,5
1c008514:	00e78963          	beq	a5,a4,1c008526 <pos_wait_forever+0x1c>
1c008518:	002047b7          	lui	a5,0x204
1c00851c:	577d                	li	a4,-1
1c00851e:	c3d8                	sw	a4,4(a5)
1c008520:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f5040>
1c008524:	a001                	j	1c008524 <pos_wait_forever+0x1a>
1c008526:	1a10a7b7          	lui	a5,0x1a10a
1c00852a:	577d                	li	a4,-1
1c00852c:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa108800>
1c008530:	10500073          	wfi
1c008534:	10500073          	wfi
1c008538:	bfe5                	j	1c008530 <pos_wait_forever+0x26>

1c00853a <exit>:
1c00853a:	1141                	addi	sp,sp,-16
1c00853c:	c606                	sw	ra,12(sp)
1c00853e:	1a1047b7          	lui	a5,0x1a104
1c008542:	c1f54533          	p.bset	a0,a0,0,31
1c008546:	0aa7a023          	sw	a0,160(a5) # 1a1040a0 <__l2_shared_end+0xa103098>
1c00854a:	37c1                	jal	1c00850a <pos_wait_forever>

1c00854c <pos_io_start>:
1c00854c:	4501                	li	a0,0
1c00854e:	8082                	ret

1c008550 <pos_io_stop>:
1c008550:	4501                	li	a0,0
1c008552:	8082                	ret

1c008554 <pos_init_start>:
1c008554:	1141                	addi	sp,sp,-16
1c008556:	c422                	sw	s0,8(sp)
1c008558:	1c000437          	lui	s0,0x1c000
1c00855c:	c606                	sw	ra,12(sp)
1c00855e:	00840413          	addi	s0,s0,8 # 1c000008 <ctor_list>
1c008562:	375d                	jal	1c008508 <pos_soc_init>
1c008564:	2269                	jal	1c0086ee <pos_irq_init>
1c008566:	22f1                	jal	1c008732 <pos_soc_event_init>
1c008568:	20d5                	jal	1c00864c <pos_allocs_init>
1c00856a:	405c                	lw	a5,4(s0)
1c00856c:	c791                	beqz	a5,1c008578 <pos_init_start+0x24>
1c00856e:	0421                	addi	s0,s0,8
1c008570:	9782                	jalr	a5
1c008572:	0044278b          	p.lw	a5,4(s0!)
1c008576:	ffed                	bnez	a5,1c008570 <pos_init_start+0x1c>
1c008578:	3fd1                	jal	1c00854c <pos_io_start>
1c00857a:	300467f3          	csrrsi	a5,mstatus,8
1c00857e:	f1402573          	csrr	a0,mhartid
1c008582:	8515                	srai	a0,a0,0x5
1c008584:	f2653533          	p.bclr	a0,a0,25,6
1c008588:	47fd                	li	a5,31
1c00858a:	00f50a63          	beq	a0,a5,1c00859e <pos_init_start+0x4a>
1c00858e:	4422                	lw	s0,8(sp)
1c008590:	40b2                	lw	ra,12(sp)
1c008592:	1c0085b7          	lui	a1,0x1c008
1c008596:	1f458593          	addi	a1,a1,500 # 1c0081f4 <main>
1c00859a:	0141                	addi	sp,sp,16
1c00859c:	a4a9                	j	1c0087e6 <cluster_start>
1c00859e:	40b2                	lw	ra,12(sp)
1c0085a0:	4422                	lw	s0,8(sp)
1c0085a2:	0141                	addi	sp,sp,16
1c0085a4:	8082                	ret

1c0085a6 <pos_init_stop>:
1c0085a6:	1141                	addi	sp,sp,-16
1c0085a8:	c422                	sw	s0,8(sp)
1c0085aa:	1c000437          	lui	s0,0x1c000
1c0085ae:	c606                	sw	ra,12(sp)
1c0085b0:	01440413          	addi	s0,s0,20 # 1c000014 <dtor_list>
1c0085b4:	3f71                	jal	1c008550 <pos_io_stop>
1c0085b6:	405c                	lw	a5,4(s0)
1c0085b8:	c791                	beqz	a5,1c0085c4 <pos_init_stop+0x1e>
1c0085ba:	0421                	addi	s0,s0,8
1c0085bc:	9782                	jalr	a5
1c0085be:	0044278b          	p.lw	a5,4(s0!)
1c0085c2:	ffed                	bnez	a5,1c0085bc <pos_init_stop+0x16>
1c0085c4:	40b2                	lw	ra,12(sp)
1c0085c6:	4422                	lw	s0,8(sp)
1c0085c8:	0141                	addi	sp,sp,16
1c0085ca:	8082                	ret

1c0085cc <pos_alloc_init>:
1c0085cc:	00758793          	addi	a5,a1,7
1c0085d0:	c407b7b3          	p.bclr	a5,a5,2,0
1c0085d4:	40b785b3          	sub	a1,a5,a1
1c0085d8:	c11c                	sw	a5,0(a0)
1c0085da:	8e0d                	sub	a2,a2,a1
1c0085dc:	00c05763          	blez	a2,1c0085ea <pos_alloc_init+0x1e>
1c0085e0:	c4063633          	p.bclr	a2,a2,2,0
1c0085e4:	c390                	sw	a2,0(a5)
1c0085e6:	0007a223          	sw	zero,4(a5)
1c0085ea:	8082                	ret

1c0085ec <pos_alloc>:
1c0085ec:	4110                	lw	a2,0(a0)
1c0085ee:	059d                	addi	a1,a1,7
1c0085f0:	c405b5b3          	p.bclr	a1,a1,2,0
1c0085f4:	ca31                	beqz	a2,1c008648 <pos_alloc+0x5c>
1c0085f6:	4218                	lw	a4,0(a2)
1c0085f8:	425c                	lw	a5,4(a2)
1c0085fa:	02b75963          	ble	a1,a4,1c00862c <pos_alloc+0x40>
1c0085fe:	cb81                	beqz	a5,1c00860e <pos_alloc+0x22>
1c008600:	4398                	lw	a4,0(a5)
1c008602:	43d4                	lw	a3,4(a5)
1c008604:	00b75763          	ble	a1,a4,1c008612 <pos_alloc+0x26>
1c008608:	863e                	mv	a2,a5
1c00860a:	87b6                	mv	a5,a3
1c00860c:	fbf5                	bnez	a5,1c008600 <pos_alloc+0x14>
1c00860e:	853e                	mv	a0,a5
1c008610:	8082                	ret
1c008612:	00b70a63          	beq	a4,a1,1c008626 <pos_alloc+0x3a>
1c008616:	00b78533          	add	a0,a5,a1
1c00861a:	8f0d                	sub	a4,a4,a1
1c00861c:	c118                	sw	a4,0(a0)
1c00861e:	c154                	sw	a3,4(a0)
1c008620:	c248                	sw	a0,4(a2)
1c008622:	853e                	mv	a0,a5
1c008624:	8082                	ret
1c008626:	c254                	sw	a3,4(a2)
1c008628:	853e                	mv	a0,a5
1c00862a:	8082                	ret
1c00862c:	00e58b63          	beq	a1,a4,1c008642 <pos_alloc+0x56>
1c008630:	00b606b3          	add	a3,a2,a1
1c008634:	8f0d                	sub	a4,a4,a1
1c008636:	c2dc                	sw	a5,4(a3)
1c008638:	c298                	sw	a4,0(a3)
1c00863a:	87b2                	mv	a5,a2
1c00863c:	c114                	sw	a3,0(a0)
1c00863e:	853e                	mv	a0,a5
1c008640:	8082                	ret
1c008642:	c11c                	sw	a5,0(a0)
1c008644:	87b2                	mv	a5,a2
1c008646:	b7e1                	j	1c00860e <pos_alloc+0x22>
1c008648:	4781                	li	a5,0
1c00864a:	b7d1                	j	1c00860e <pos_alloc+0x22>

1c00864c <pos_allocs_init>:
1c00864c:	1141                	addi	sp,sp,-16
1c00864e:	1c0015b7          	lui	a1,0x1c001
1c008652:	c606                	sw	ra,12(sp)
1c008654:	83c58793          	addi	a5,a1,-1988 # 1c00083c <__l2_priv0_end>
1c008658:	1c008637          	lui	a2,0x1c008
1c00865c:	04c7cc63          	blt	a5,a2,1c0086b4 <pos_allocs_init+0x68>
1c008660:	4581                	li	a1,0
1c008662:	4601                	li	a2,0
1c008664:	1c001537          	lui	a0,0x1c001
1c008668:	82c50513          	addi	a0,a0,-2004 # 1c00082c <pos_alloc_l2>
1c00866c:	3785                	jal	1c0085cc <pos_alloc_init>
1c00866e:	1c0095b7          	lui	a1,0x1c009
1c008672:	8ec58793          	addi	a5,a1,-1812 # 1c0088ec <__l2_priv1_end>
1c008676:	1c010637          	lui	a2,0x1c010
1c00867a:	02c7c963          	blt	a5,a2,1c0086ac <pos_allocs_init+0x60>
1c00867e:	4581                	li	a1,0
1c008680:	4601                	li	a2,0
1c008682:	1c001537          	lui	a0,0x1c001
1c008686:	83050513          	addi	a0,a0,-2000 # 1c000830 <pos_alloc_l2+0x4>
1c00868a:	3789                	jal	1c0085cc <pos_alloc_init>
1c00868c:	100015b7          	lui	a1,0x10001
1c008690:	40b2                	lw	ra,12(sp)
1c008692:	00858793          	addi	a5,a1,8 # 10001008 <__l2_shared_end>
1c008696:	1c080637          	lui	a2,0x1c080
1c00869a:	1c001537          	lui	a0,0x1c001
1c00869e:	8e1d                	sub	a2,a2,a5
1c0086a0:	00858593          	addi	a1,a1,8
1c0086a4:	83450513          	addi	a0,a0,-1996 # 1c000834 <pos_alloc_l2+0x8>
1c0086a8:	0141                	addi	sp,sp,16
1c0086aa:	b70d                	j	1c0085cc <pos_alloc_init>
1c0086ac:	8e1d                	sub	a2,a2,a5
1c0086ae:	8ec58593          	addi	a1,a1,-1812
1c0086b2:	bfc1                	j	1c008682 <pos_allocs_init+0x36>
1c0086b4:	8e1d                	sub	a2,a2,a5
1c0086b6:	83c58593          	addi	a1,a1,-1988
1c0086ba:	b76d                	j	1c008664 <pos_allocs_init+0x18>

1c0086bc <alloc_init_l1>:
1c0086bc:	100017b7          	lui	a5,0x10001
1c0086c0:	01651593          	slli	a1,a0,0x16
1c0086c4:	00878793          	addi	a5,a5,8 # 10001008 <__l2_shared_end>
1c0086c8:	95be                	add	a1,a1,a5
1c0086ca:	1c0017b7          	lui	a5,0x1c001
1c0086ce:	050a                	slli	a0,a0,0x2
1c0086d0:	663d                	lui	a2,0xf
1c0086d2:	82878793          	addi	a5,a5,-2008 # 1c000828 <pos_alloc_l1>
1c0086d6:	ff860613          	addi	a2,a2,-8 # eff8 <__l1_heap_size>
1c0086da:	953e                	add	a0,a0,a5
1c0086dc:	bdc5                	j	1c0085cc <pos_alloc_init>

1c0086de <pi_l1_malloc>:
1c0086de:	1c0017b7          	lui	a5,0x1c001
1c0086e2:	050a                	slli	a0,a0,0x2
1c0086e4:	82878793          	addi	a5,a5,-2008 # 1c000828 <pos_alloc_l1>
1c0086e8:	953e                	add	a0,a0,a5
1c0086ea:	b709                	j	1c0085ec <pos_alloc>

1c0086ec <__rt_handle_illegal_instr>:
1c0086ec:	8082                	ret

1c0086ee <pos_irq_init>:
1c0086ee:	f14027f3          	csrr	a5,mhartid
1c0086f2:	477d                	li	a4,31
1c0086f4:	ca5797b3          	p.extractu	a5,a5,5,5
1c0086f8:	00e78f63          	beq	a5,a4,1c008716 <pos_irq_init+0x28>
1c0086fc:	002047b7          	lui	a5,0x204
1c008700:	577d                	li	a4,-1
1c008702:	cb98                	sw	a4,16(a5)
1c008704:	1c0087b7          	lui	a5,0x1c008
1c008708:	00078793          	mv	a5,a5
1c00870c:	c007c7b3          	p.bset	a5,a5,0,0
1c008710:	30579073          	csrw	mtvec,a5
1c008714:	8082                	ret
1c008716:	1a10a7b7          	lui	a5,0x1a10a
1c00871a:	577d                	li	a4,-1
1c00871c:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa108800>
1c008720:	1c0087b7          	lui	a5,0x1c008
1c008724:	00078793          	mv	a5,a5
1c008728:	c007c7b3          	p.bset	a5,a5,0,0
1c00872c:	30579073          	csrw	mtvec,a5
1c008730:	8082                	ret

1c008732 <pos_soc_event_init>:
1c008732:	1a1067b7          	lui	a5,0x1a106
1c008736:	577d                	li	a4,-1
1c008738:	00478693          	addi	a3,a5,4 # 1a106004 <__l2_shared_end+0xa104ffc>
1c00873c:	c298                	sw	a4,0(a3)
1c00873e:	00878693          	addi	a3,a5,8
1c008742:	c298                	sw	a4,0(a3)
1c008744:	00c78693          	addi	a3,a5,12
1c008748:	c298                	sw	a4,0(a3)
1c00874a:	01078693          	addi	a3,a5,16
1c00874e:	c298                	sw	a4,0(a3)
1c008750:	01478693          	addi	a3,a5,20
1c008754:	c298                	sw	a4,0(a3)
1c008756:	01878693          	addi	a3,a5,24
1c00875a:	c298                	sw	a4,0(a3)
1c00875c:	01c78693          	addi	a3,a5,28
1c008760:	c298                	sw	a4,0(a3)
1c008762:	02078793          	addi	a5,a5,32
1c008766:	c398                	sw	a4,0(a5)
1c008768:	8082                	ret

1c00876a <bench_cluster_forward>:
1c00876a:	f14027f3          	csrr	a5,mhartid
1c00876e:	ca5797b3          	p.extractu	a5,a5,5,5
1c008772:	02a78063          	beq	a5,a0,1c008792 <bench_cluster_forward+0x28>
1c008776:	1c0085b7          	lui	a1,0x1c008
1c00877a:	1141                	addi	sp,sp,-16
1c00877c:	1f458593          	addi	a1,a1,500 # 1c0081f4 <main>
1c008780:	c422                	sw	s0,8(sp)
1c008782:	c606                	sw	ra,12(sp)
1c008784:	842a                	mv	s0,a0
1c008786:	2085                	jal	1c0087e6 <cluster_start>
1c008788:	8522                	mv	a0,s0
1c00878a:	4422                	lw	s0,8(sp)
1c00878c:	40b2                	lw	ra,12(sp)
1c00878e:	0141                	addi	sp,sp,16
1c008790:	a22d                	j	1c0088ba <cluster_wait>
1c008792:	4501                	li	a0,0
1c008794:	8082                	ret

1c008796 <cluster_entry_stub>:
1c008796:	1141                	addi	sp,sp,-16
1c008798:	c606                	sw	ra,12(sp)
1c00879a:	002047b7          	lui	a5,0x204
1c00879e:	00070737          	lui	a4,0x70
1c0087a2:	c798                	sw	a4,8(a5)
1c0087a4:	0ff00713          	li	a4,255
1c0087a8:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f5208>
1c0087ac:	00e7a023          	sw	a4,0(a5)
1c0087b0:	00e7a623          	sw	a4,12(a5)
1c0087b4:	1c0017b7          	lui	a5,0x1c001
1c0087b8:	8387a783          	lw	a5,-1992(a5) # 1c000838 <cluster_entry>
1c0087bc:	9782                	jalr	a5
1c0087be:	f14027f3          	csrr	a5,mhartid
1c0087c2:	f457b7b3          	p.bclr	a5,a5,26,5
1c0087c6:	eb89                	bnez	a5,1c0087d8 <cluster_entry_stub+0x42>
1c0087c8:	1c001737          	lui	a4,0x1c001
1c0087cc:	1c0017b7          	lui	a5,0x1c001
1c0087d0:	82a72023          	sw	a0,-2016(a4) # 1c000820 <stack>
1c0087d4:	8207a223          	sw	zero,-2012(a5) # 1c000824 <cluster_running>
1c0087d8:	002047b7          	lui	a5,0x204
1c0087dc:	577d                	li	a4,-1
1c0087de:	c3d8                	sw	a4,4(a5)
1c0087e0:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f5040>
1c0087e4:	a001                	j	1c0087e4 <cluster_entry_stub+0x4e>

1c0087e6 <cluster_start>:
1c0087e6:	1141                	addi	sp,sp,-16
1c0087e8:	1c0017b7          	lui	a5,0x1c001
1c0087ec:	c226                	sw	s1,4(sp)
1c0087ee:	84aa                	mv	s1,a0
1c0087f0:	4509                	li	a0,2
1c0087f2:	82b7ac23          	sw	a1,-1992(a5) # 1c000838 <cluster_entry>
1c0087f6:	c606                	sw	ra,12(sp)
1c0087f8:	c422                	sw	s0,8(sp)
1c0087fa:	3195                	jal	1c00845e <pos_fll_init>
1c0087fc:	8526                	mv	a0,s1
1c0087fe:	3d7d                	jal	1c0086bc <alloc_init_l1>
1c008800:	04048413          	addi	s0,s1,64
1c008804:	00201737          	lui	a4,0x201
1c008808:	40070713          	addi	a4,a4,1024 # 201400 <__l1_heap_size+0x1f2408>
1c00880c:	045a                	slli	s0,s0,0x16
1c00880e:	56fd                	li	a3,-1
1c008810:	f14027f3          	csrr	a5,mhartid
1c008814:	00d46723          	p.sw	a3,a4(s0)
1c008818:	ca5797b3          	p.extractu	a5,a5,5,5
1c00881c:	477d                	li	a4,31
1c00881e:	00e78f63          	beq	a5,a4,1c00883c <cluster_start+0x56>
1c008822:	002047b7          	lui	a5,0x204
1c008826:	00070737          	lui	a4,0x70
1c00882a:	c798                	sw	a4,8(a5)
1c00882c:	0ff00713          	li	a4,255
1c008830:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f5208>
1c008834:	00e7a023          	sw	a4,0(a5)
1c008838:	00e7a623          	sw	a4,12(a5)
1c00883c:	8526                	mv	a0,s1
1c00883e:	3dbd                	jal	1c0086bc <alloc_init_l1>
1c008840:	6591                	lui	a1,0x4
1c008842:	8526                	mv	a0,s1
1c008844:	3d69                	jal	1c0086de <pi_l1_malloc>
1c008846:	100017b7          	lui	a5,0x10001
1c00884a:	00a7a223          	sw	a0,4(a5) # 10001004 <cluster_stacks>
1c00884e:	c12d                	beqz	a0,1c0088b0 <cluster_start+0xca>
1c008850:	1c001737          	lui	a4,0x1c001
1c008854:	4685                	li	a3,1
1c008856:	82d72223          	sw	a3,-2012(a4) # 1c000824 <cluster_running>
1c00885a:	002007b7          	lui	a5,0x200
1c00885e:	1c008737          	lui	a4,0x1c008
1c008862:	08070713          	addi	a4,a4,128 # 1c008080 <_start>
1c008866:	04078693          	addi	a3,a5,64 # 200040 <__l1_heap_size+0x1f1048>
1c00886a:	00e466a3          	p.sw	a4,a3(s0)
1c00886e:	04478693          	addi	a3,a5,68
1c008872:	00e466a3          	p.sw	a4,a3(s0)
1c008876:	04878693          	addi	a3,a5,72
1c00887a:	00e466a3          	p.sw	a4,a3(s0)
1c00887e:	04c78693          	addi	a3,a5,76
1c008882:	00e466a3          	p.sw	a4,a3(s0)
1c008886:	05078693          	addi	a3,a5,80
1c00888a:	00e466a3          	p.sw	a4,a3(s0)
1c00888e:	05478693          	addi	a3,a5,84
1c008892:	00e466a3          	p.sw	a4,a3(s0)
1c008896:	05878693          	addi	a3,a5,88
1c00889a:	00e466a3          	p.sw	a4,a3(s0)
1c00889e:	05c78693          	addi	a3,a5,92
1c0088a2:	00e466a3          	p.sw	a4,a3(s0)
1c0088a6:	07a1                	addi	a5,a5,8
1c0088a8:	0ff00713          	li	a4,255
1c0088ac:	00e467a3          	p.sw	a4,a5(s0)
1c0088b0:	40b2                	lw	ra,12(sp)
1c0088b2:	4422                	lw	s0,8(sp)
1c0088b4:	4492                	lw	s1,4(sp)
1c0088b6:	0141                	addi	sp,sp,16
1c0088b8:	8082                	ret

1c0088ba <cluster_wait>:
1c0088ba:	1c001737          	lui	a4,0x1c001
1c0088be:	82470713          	addi	a4,a4,-2012 # 1c000824 <cluster_running>
1c0088c2:	431c                	lw	a5,0(a4)
1c0088c4:	fffd                	bnez	a5,1c0088c2 <cluster_wait+0x8>
1c0088c6:	1c0017b7          	lui	a5,0x1c001
1c0088ca:	8207a503          	lw	a0,-2016(a5) # 1c000820 <stack>
1c0088ce:	8082                	ret

1c0088d0 <synch_barrier>:
1c0088d0:	f14027f3          	csrr	a5,mhartid
1c0088d4:	477d                	li	a4,31
1c0088d6:	ca5797b3          	p.extractu	a5,a5,5,5
1c0088da:	00e78863          	beq	a5,a4,1c0088ea <synch_barrier+0x1a>
1c0088de:	002047b7          	lui	a5,0x204
1c0088e2:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f5208>
1c0088e6:	01c7e703          	p.elw	a4,28(a5)
1c0088ea:	8082                	ret
make[1]: Leaving directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/matmul_32b_float_8cores'
