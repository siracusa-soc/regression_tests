make[1]: Entering directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/neureka_ki32_ko8_ho6_wo6_fs1'
/usr/scratch/fenga5/beppe/INSTALL-PULP/bin/riscv32-unknown-elf-objdump -Mmarch=rv32imcxgap9 -d /scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/neureka_ki32_ko8_ho6_wo6_fs1/build/ne16_test/ne16_test

/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/neureka_ki32_ko8_ho6_wo6_fs1/build/ne16_test/ne16_test:     file format elf32-littleriscv


Disassembly of section .vectors:

1c008000 <__irq_vector_base>:
1c008000:	0c90106f          	j	1c0098c8 <__rt_handle_illegal_instr>
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
1c008084:	0450106f          	j	1c0098c8 <__rt_handle_illegal_instr>

1c008088 <pos_no_irq_handler>:
1c008088:	30200073          	mret

1c00808c <pos_semihosting_call>:
1c00808c:	00100073          	ebreak
1c008090:	00008067          	ret

1c008094 <pe_start>:
1c008094:	f3ff9117          	auipc	sp,0xf3ff9
1c008098:	89810113          	addi	sp,sp,-1896 # 1000092c <cluster_stacks>
1c00809c:	00012103          	lw	sp,0(sp)
1c0080a0:	000011b7          	lui	gp,0x1
1c0080a4:	80018193          	addi	gp,gp,-2048 # 800 <__cluster_text_size+0x800>
1c0080a8:	00158593          	addi	a1,a1,1
1c0080ac:	02b180b3          	mul	ra,gp,a1
1c0080b0:	00110133          	add	sp,sp,ra
1c0080b4:	0bf0106f          	j	1c009972 <cluster_entry_stub>

1c0080b8 <do_cl_boot>:
1c0080b8:	10200137          	lui	sp,0x10200
1c0080bc:	00100193          	li	gp,1
1c0080c0:	00000217          	auipc	tp,0x0
1c0080c4:	fc020213          	addi	tp,tp,-64 # 1c008080 <_start>
1c0080c8:	04412023          	sw	tp,64(sp) # 10200040 <__l2_shared_end+0x1ff710>
1c0080cc:	00312423          	sw	gp,8(sp)

1c0080d0 <loop>:
1c0080d0:	1a10a137          	lui	sp,0x1a10a
1c0080d4:	80010113          	addi	sp,sp,-2048 # 1a109800 <__l2_shared_end+0xa108ed0>
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
1c0080fc:	d7828293          	addi	t0,t0,-648 # 1c000e70 <_edata>
1c008100:	ffff9317          	auipc	t1,0xffff9
1c008104:	d8c30313          	addi	t1,t1,-628 # 1c000e8c <__l2_priv0_end>
1c008108:	0002a023          	sw	zero,0(t0)
1c00810c:	0291                	addi	t0,t0,4
1c00810e:	fe62ede3          	bltu	t0,t1,1c008108 <_stext+0x24>
1c008112:	ffff8117          	auipc	sp,0xffff8
1c008116:	77e10113          	addi	sp,sp,1918 # 1c000890 <stack>
1c00811a:	610010ef          	jal	ra,1c00972a <pos_init_start>
1c00811e:	00000513          	li	a0,0
1c008122:	00000593          	li	a1,0
1c008126:	00000397          	auipc	t2,0x0
1c00812a:	1ac38393          	addi	t2,t2,428 # 1c0082d2 <main>
1c00812e:	000380e7          	jalr	t2
1c008132:	842a                	mv	s0,a0
1c008134:	64c010ef          	jal	ra,1c009780 <pos_init_stop>
1c008138:	8522                	mv	a0,s0
1c00813a:	68c000ef          	jal	ra,1c0087c6 <exit>

1c00813e <run_test>:
1c00813e:	002007b7          	lui	a5,0x200
1c008142:	07e1                	addi	a5,a5,24
1c008144:	4398                	lw	a4,0(a5)
1c008146:	7139                	addi	sp,sp,-64
1c008148:	de06                	sw	ra,60(sp)
1c00814a:	dc22                	sw	s0,56(sp)
1c00814c:	da26                	sw	s1,52(sp)
1c00814e:	d84a                	sw	s2,48(sp)
1c008150:	d64e                	sw	s3,44(sp)
1c008152:	d452                	sw	s4,40(sp)
1c008154:	d256                	sw	s5,36(sp)
1c008156:	d05a                	sw	s6,32(sp)
1c008158:	c0b74733          	p.bset	a4,a4,0,11
1c00815c:	c398                	sw	a4,0(a5)
1c00815e:	4398                	lw	a4,0(a5)
1c008160:	c0874733          	p.bset	a4,a4,0,8
1c008164:	c398                	sw	a4,0(a5)
1c008166:	4398                	lw	a4,0(a5)
1c008168:	ce073733          	p.bclr	a4,a4,7,0
1c00816c:	c398                	sw	a4,0(a5)
1c00816e:	4398                	lw	a4,0(a5)
1c008170:	c0374733          	p.bset	a4,a4,0,3
1c008174:	c398                	sw	a4,0(a5)
1c008176:	002017b7          	lui	a5,0x201
1c00817a:	0007aa23          	sw	zero,20(a5) # 201014 <__l1_heap_size+0x1f1944>
1c00817e:	ce02                	sw	zero,28(sp)
1c008180:	4772                	lw	a4,28(sp)
1c008182:	47a5                	li	a5,9
1c008184:	00e7c963          	blt	a5,a4,1c008196 <run_test+0x58>
1c008188:	4725                	li	a4,9
1c00818a:	47f2                	lw	a5,28(sp)
1c00818c:	0785                	addi	a5,a5,1
1c00818e:	ce3e                	sw	a5,28(sp)
1c008190:	47f2                	lw	a5,28(sp)
1c008192:	fef75ce3          	ble	a5,a4,1c00818a <run_test+0x4c>
1c008196:	00201637          	lui	a2,0x201
1c00819a:	0611                	addi	a2,a2,4
1c00819c:	421c                	lw	a5,0(a2)
1c00819e:	0007dc63          	bgez	a5,1c0081b6 <run_test+0x78>
1c0081a2:	6705                	lui	a4,0x1
1c0081a4:	002047b7          	lui	a5,0x204
1c0081a8:	c798                	sw	a4,8(a5)
1c0081aa:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1f496c>
1c0081ae:	c3d8                	sw	a4,4(a5)
1c0081b0:	4214                	lw	a3,0(a2)
1c0081b2:	fe06cbe3          	bltz	a3,1c0081a8 <run_test+0x6a>
1c0081b6:	002015b7          	lui	a1,0x201
1c0081ba:	02058593          	addi	a1,a1,32 # 201020 <__l1_heap_size+0x1f1950>
1c0081be:	004007b7          	lui	a5,0x400
1c0081c2:	00f5a023          	sw	a5,0(a1)
1c0081c6:	10000a37          	lui	s4,0x10000
1c0081ca:	004a0a13          	addi	s4,s4,4 # 10000004 <ne16_infeat>
1c0081ce:	0145a223          	sw	s4,4(a1)
1c0081d2:	480a0a13          	addi	s4,s4,1152
1c0081d6:	0145a423          	sw	s4,8(a1)
1c0081da:	100017b7          	lui	a5,0x10001
1c0081de:	00478793          	addi	a5,a5,4 # 10001004 <__l2_shared_end+0x6d4>
1c0081e2:	90078713          	addi	a4,a5,-1792
1c0081e6:	00e5a623          	sw	a4,12(a1)
1c0081ea:	92078713          	addi	a4,a5,-1760
1c0081ee:	00e5a823          	sw	a4,16(a1)
1c0081f2:	92478793          	addi	a5,a5,-1756
1c0081f6:	00f5aa23          	sw	a5,20(a1)
1c0081fa:	1c001537          	lui	a0,0x1c001
1c0081fe:	89050793          	addi	a5,a0,-1904 # 1c000890 <stack>
1c008202:	5571                	li	a0,-4
1c008204:	01878713          	addi	a4,a5,24
1c008208:	8d1d                	sub	a0,a0,a5
1c00820a:	012350fb          	lp.setupi	x1,18,1c008216 <run_test+0xd8>
1c00820e:	0047268b          	p.lw	a3,4(a4!) # 1004 <__cluster_text_size+0x1004>
1c008212:	00e50633          	add	a2,a0,a4
1c008216:	00d5e623          	p.sw	a3,a2(a1)
1c00821a:	abbab7b7          	lui	a5,0xabbab
1c00821e:	10000737          	lui	a4,0x10000
1c008222:	bba78793          	addi	a5,a5,-1094 # abbaabba <pulp__FC+0xabbaabbb>
1c008226:	00201637          	lui	a2,0x201
1c00822a:	c31c                	sw	a5,0(a4)
1c00822c:	00062023          	sw	zero,0(a2) # 201000 <__l1_heap_size+0x1f1930>
1c008230:	6705                	lui	a4,0x1
1c008232:	002047b7          	lui	a5,0x204
1c008236:	0631                	addi	a2,a2,12
1c008238:	c798                	sw	a4,8(a5)
1c00823a:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1f496c>
1c00823e:	c3d8                	sw	a4,4(a5)
1c008240:	4214                	lw	a3,0(a2)
1c008242:	fafd                	bnez	a3,1c008238 <run_test+0xfa>
1c008244:	002007b7          	lui	a5,0x200
1c008248:	07e1                	addi	a5,a5,24
1c00824a:	4398                	lw	a4,0(a5)
1c00824c:	8452                	mv	s0,s4
1c00824e:	1c001937          	lui	s2,0x1c001
1c008252:	c0b73733          	p.bclr	a4,a4,0,11
1c008256:	c398                	sw	a4,0(a5)
1c008258:	deadd7b7          	lui	a5,0xdeadd
1c00825c:	10000737          	lui	a4,0x10000
1c008260:	aca78793          	addi	a5,a5,-1334 # deadcaca <pulp__FC+0xdeadcacb>
1c008264:	59f1                	li	s3,-4
1c008266:	c31c                	sw	a5,0(a4)
1c008268:	8f090913          	addi	s2,s2,-1808 # 1c0008f0 <ne16_outfeat>
1c00826c:	480a0a13          	addi	s4,s4,1152
1c008270:	4481                	li	s1,0
1c008272:	408989b3          	sub	s3,s3,s0
1c008276:	1c000ab7          	lui	s5,0x1c000
1c00827a:	1c000b37          	lui	s6,0x1c000
1c00827e:	0049258b          	p.lw	a1,4(s2!)
1c008282:	86a2                	mv	a3,s0
1c008284:	0044260b          	p.lw	a2,4(s0!)
1c008288:	40b607b3          	sub	a5,a2,a1
1c00828c:	00f037b3          	snez	a5,a5
1c008290:	94be                	add	s1,s1,a5
1c008292:	00b60963          	beq	a2,a1,1c0082a4 <run_test+0x166>
1c008296:	0214a463          	p.beqimm	s1,1,1c0082be <run_test+0x180>
1c00829a:	00898733          	add	a4,s3,s0
1c00829e:	04ca8513          	addi	a0,s5,76 # 1c00004c <__DTOR_END__+0x30>
1c0082a2:	2b3d                	jal	1c0087e0 <printf>
1c0082a4:	fc8a1de3          	bne	s4,s0,1c00827e <run_test+0x140>
1c0082a8:	50f2                	lw	ra,60(sp)
1c0082aa:	5462                	lw	s0,56(sp)
1c0082ac:	8526                	mv	a0,s1
1c0082ae:	5942                	lw	s2,48(sp)
1c0082b0:	54d2                	lw	s1,52(sp)
1c0082b2:	59b2                	lw	s3,44(sp)
1c0082b4:	5a22                	lw	s4,40(sp)
1c0082b6:	5a92                	lw	s5,36(sp)
1c0082b8:	5b02                	lw	s6,32(sp)
1c0082ba:	6121                	addi	sp,sp,64
1c0082bc:	8082                	ret
1c0082be:	01cb0513          	addi	a0,s6,28 # 1c00001c <__DTOR_END__>
1c0082c2:	c22e                	sw	a1,4(sp)
1c0082c4:	c432                	sw	a2,8(sp)
1c0082c6:	c636                	sw	a3,12(sp)
1c0082c8:	21f1                	jal	1c008794 <puts>
1c0082ca:	46b2                	lw	a3,12(sp)
1c0082cc:	4622                	lw	a2,8(sp)
1c0082ce:	4592                	lw	a1,4(sp)
1c0082d0:	b7e9                	j	1c00829a <run_test+0x15c>

1c0082d2 <main>:
1c0082d2:	f14027f3          	csrr	a5,mhartid
1c0082d6:	ca579733          	p.extractu	a4,a5,5,5
1c0082da:	e711                	bnez	a4,1c0082e6 <main+0x14>
1c0082dc:	f457b7b3          	p.bclr	a5,a5,26,5
1c0082e0:	cb95                	beqz	a5,1c008314 <main+0x42>
1c0082e2:	4501                	li	a0,0
1c0082e4:	8082                	ret
1c0082e6:	1c0017b7          	lui	a5,0x1c001
1c0082ea:	d7078793          	addi	a5,a5,-656 # 1c000d70 <ne16_weights>
1c0082ee:	10800737          	lui	a4,0x10800
1c0082f2:	0106d0fb          	lp.setupi	x1,16,1c00830c <main+0x3a>
1c0082f6:	0007a803          	lw	a6,0(a5)
1c0082fa:	43c8                	lw	a0,4(a5)
1c0082fc:	478c                	lw	a1,8(a5)
1c0082fe:	47d0                	lw	a2,12(a5)
1c008300:	01072023          	sw	a6,0(a4) # 10800000 <__l2_shared_end+0x7ff6d0>
1c008304:	c348                	sw	a0,4(a4)
1c008306:	c70c                	sw	a1,8(a4)
1c008308:	c750                	sw	a2,12(a4)
1c00830a:	07c1                	addi	a5,a5,16
1c00830c:	0741                	addi	a4,a4,16
1c00830e:	4501                	li	a0,0
1c008310:	6360106f          	j	1c009946 <bench_cluster_forward>
1c008314:	b52d                	j	1c00813e <run_test>

1c008316 <pos_fll_init>:
1c008316:	08152063          	p.beqimm	a0,1,1c008396 <pos_fll_init+0x80>
1c00831a:	04252a63          	p.beqimm	a0,2,1c00836e <pos_fll_init+0x58>
1c00831e:	c505                	beqz	a0,1c008346 <pos_fll_init+0x30>
1c008320:	4701                	li	a4,0
1c008322:	00470793          	addi	a5,a4,4
1c008326:	05300613          	li	a2,83
1c00832a:	00c70693          	addi	a3,a4,12
1c00832e:	c390                	sw	a2,0(a5)
1c008330:	020c17b7          	lui	a5,0x20c1
1c008334:	0721                	addi	a4,a4,8
1c008336:	0006a023          	sw	zero,0(a3)
1c00833a:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b210a>
1c00833e:	c31c                	sw	a5,0(a4)
1c008340:	05f68537          	lui	a0,0x5f68
1c008344:	8082                	ret
1c008346:	1a1007b7          	lui	a5,0x1a100
1c00834a:	00878713          	addi	a4,a5,8 # 1a100008 <__l2_shared_end+0xa0ff6d8>
1c00834e:	00c78693          	addi	a3,a5,12
1c008352:	05300613          	li	a2,83
1c008356:	0791                	addi	a5,a5,4
1c008358:	c390                	sw	a2,0(a5)
1c00835a:	020c17b7          	lui	a5,0x20c1
1c00835e:	0006a023          	sw	zero,0(a3)
1c008362:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b210a>
1c008366:	c31c                	sw	a5,0(a4)
1c008368:	05f68537          	lui	a0,0x5f68
1c00836c:	8082                	ret
1c00836e:	1a1007b7          	lui	a5,0x1a100
1c008372:	01878713          	addi	a4,a5,24 # 1a100018 <__l2_shared_end+0xa0ff6e8>
1c008376:	01c78693          	addi	a3,a5,28
1c00837a:	05300613          	li	a2,83
1c00837e:	07d1                	addi	a5,a5,20
1c008380:	c390                	sw	a2,0(a5)
1c008382:	020c17b7          	lui	a5,0x20c1
1c008386:	0006a023          	sw	zero,0(a3)
1c00838a:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b210a>
1c00838e:	c31c                	sw	a5,0(a4)
1c008390:	05f68537          	lui	a0,0x5f68
1c008394:	8082                	ret
1c008396:	1a1007b7          	lui	a5,0x1a100
1c00839a:	02878713          	addi	a4,a5,40 # 1a100028 <__l2_shared_end+0xa0ff6f8>
1c00839e:	02c78693          	addi	a3,a5,44
1c0083a2:	05300613          	li	a2,83
1c0083a6:	02478793          	addi	a5,a5,36
1c0083aa:	c390                	sw	a2,0(a5)
1c0083ac:	020c17b7          	lui	a5,0x20c1
1c0083b0:	0006a023          	sw	zero,0(a3)
1c0083b4:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b210a>
1c0083b8:	c31c                	sw	a5,0(a4)
1c0083ba:	05f68537          	lui	a0,0x5f68
1c0083be:	8082                	ret

1c0083c0 <pos_soc_init>:
1c0083c0:	8082                	ret

1c0083c2 <pos_wait_forever>:
1c0083c2:	f14027f3          	csrr	a5,mhartid
1c0083c6:	477d                	li	a4,31
1c0083c8:	ca5797b3          	p.extractu	a5,a5,5,5
1c0083cc:	00e78963          	beq	a5,a4,1c0083de <pos_wait_forever+0x1c>
1c0083d0:	002047b7          	lui	a5,0x204
1c0083d4:	577d                	li	a4,-1
1c0083d6:	c3d8                	sw	a4,4(a5)
1c0083d8:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f4968>
1c0083dc:	a001                	j	1c0083dc <pos_wait_forever+0x1a>
1c0083de:	1a10a7b7          	lui	a5,0x1a10a
1c0083e2:	577d                	li	a4,-1
1c0083e4:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa108ed8>
1c0083e8:	10500073          	wfi
1c0083ec:	10500073          	wfi
1c0083f0:	bfe5                	j	1c0083e8 <pos_wait_forever+0x26>

1c0083f2 <memcpy>:
1c0083f2:	00a5e7b3          	or	a5,a1,a0
1c0083f6:	fa27b7b3          	p.bclr	a5,a5,29,2
1c0083fa:	882a                	mv	a6,a0
1c0083fc:	10078163          	beqz	a5,1c0084fe <memcpy+0x10c>
1c008400:	12060263          	beqz	a2,1c008524 <memcpy+0x132>
1c008404:	00458793          	addi	a5,a1,4
1c008408:	00450693          	addi	a3,a0,4 # 5f68004 <__l1_heap_size+0x5f58934>
1c00840c:	04a7b7b3          	p.sletu	a5,a5,a0
1c008410:	04b6b6b3          	p.sletu	a3,a3,a1
1c008414:	873e                	mv	a4,a5
1c008416:	87b6                	mv	a5,a3
1c008418:	8fd9                	or	a5,a5,a4
1c00841a:	0ff7f793          	andi	a5,a5,255
1c00841e:	cbe9                	beqz	a5,1c0084f0 <memcpy+0xfe>
1c008420:	00863793          	sltiu	a5,a2,8
1c008424:	0017c793          	xori	a5,a5,1
1c008428:	0ff7f793          	andi	a5,a5,255
1c00842c:	c3f1                	beqz	a5,1c0084f0 <memcpy+0xfe>
1c00842e:	40b007b3          	neg	a5,a1
1c008432:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008436:	fff60313          	addi	t1,a2,-1
1c00843a:	c3ed                	beqz	a5,1c00851c <memcpy+0x12a>
1c00843c:	0005c703          	lbu	a4,0(a1)
1c008440:	00158893          	addi	a7,a1,1
1c008444:	00150813          	addi	a6,a0,1
1c008448:	00e50023          	sb	a4,0(a0)
1c00844c:	0217a863          	p.beqimm	a5,1,1c00847c <memcpy+0x8a>
1c008450:	0015c703          	lbu	a4,1(a1)
1c008454:	00258893          	addi	a7,a1,2
1c008458:	00250813          	addi	a6,a0,2
1c00845c:	00e500a3          	sb	a4,1(a0)
1c008460:	ffe60313          	addi	t1,a2,-2
1c008464:	0037bc63          	p.bneimm	a5,3,1c00847c <memcpy+0x8a>
1c008468:	0025c703          	lbu	a4,2(a1)
1c00846c:	00358893          	addi	a7,a1,3
1c008470:	00350813          	addi	a6,a0,3
1c008474:	00e50123          	sb	a4,2(a0)
1c008478:	ffd60313          	addi	t1,a2,-3
1c00847c:	8e1d                	sub	a2,a2,a5
1c00847e:	00265713          	srli	a4,a2,0x2
1c008482:	00f506b3          	add	a3,a0,a5
1c008486:	95be                	add	a1,a1,a5
1c008488:	cf59                	beqz	a4,1c008526 <memcpy+0x134>
1c00848a:	004740fb          	lp.setup	x1,a4,1c008492 <memcpy+0xa0>
1c00848e:	0045a78b          	p.lw	a5,4(a1!)
1c008492:	00f6a22b          	p.sw	a5,4(a3!)
1c008496:	c20635b3          	p.bclr	a1,a2,1,0
1c00849a:	40b306b3          	sub	a3,t1,a1
1c00849e:	00b807b3          	add	a5,a6,a1
1c0084a2:	00b88733          	add	a4,a7,a1
1c0084a6:	04b60b63          	beq	a2,a1,1c0084fc <memcpy+0x10a>
1c0084aa:	00074603          	lbu	a2,0(a4)
1c0084ae:	00c78023          	sb	a2,0(a5)
1c0084b2:	0416a563          	p.beqimm	a3,1,1c0084fc <memcpy+0x10a>
1c0084b6:	00174603          	lbu	a2,1(a4)
1c0084ba:	00c780a3          	sb	a2,1(a5)
1c0084be:	0226af63          	p.beqimm	a3,2,1c0084fc <memcpy+0x10a>
1c0084c2:	00274603          	lbu	a2,2(a4)
1c0084c6:	00c78123          	sb	a2,2(a5)
1c0084ca:	0236a963          	p.beqimm	a3,3,1c0084fc <memcpy+0x10a>
1c0084ce:	00374603          	lbu	a2,3(a4)
1c0084d2:	00c781a3          	sb	a2,3(a5)
1c0084d6:	0246a363          	p.beqimm	a3,4,1c0084fc <memcpy+0x10a>
1c0084da:	00474603          	lbu	a2,4(a4)
1c0084de:	00c78223          	sb	a2,4(a5)
1c0084e2:	0056ad63          	p.beqimm	a3,5,1c0084fc <memcpy+0x10a>
1c0084e6:	00574703          	lbu	a4,5(a4)
1c0084ea:	00e782a3          	sb	a4,5(a5)
1c0084ee:	8082                	ret
1c0084f0:	004640fb          	lp.setup	x1,a2,1c0084f8 <memcpy+0x106>
1c0084f4:	0015c78b          	p.lbu	a5,1(a1!)
1c0084f8:	00f800ab          	p.sb	a5,1(a6!)
1c0084fc:	8082                	ret
1c0084fe:	fa2637b3          	p.bclr	a5,a2,29,2
1c008502:	f389                	bnez	a5,1c008404 <memcpy+0x12>
1c008504:	de65                	beqz	a2,1c0084fc <memcpy+0x10a>
1c008506:	ffc60793          	addi	a5,a2,-4
1c00850a:	8389                	srli	a5,a5,0x2
1c00850c:	0785                	addi	a5,a5,1
1c00850e:	0047c0fb          	lp.setup	x1,a5,1c008516 <memcpy+0x124>
1c008512:	0045a70b          	p.lw	a4,4(a1!)
1c008516:	00e8222b          	p.sw	a4,4(a6!)
1c00851a:	8082                	ret
1c00851c:	88ae                	mv	a7,a1
1c00851e:	882a                	mv	a6,a0
1c008520:	8332                	mv	t1,a2
1c008522:	bfa9                	j	1c00847c <memcpy+0x8a>
1c008524:	8082                	ret
1c008526:	4705                	li	a4,1
1c008528:	b78d                	j	1c00848a <memcpy+0x98>

1c00852a <memmove>:
1c00852a:	40b507b3          	sub	a5,a0,a1
1c00852e:	0ec7ec63          	bltu	a5,a2,1c008626 <memmove+0xfc>
1c008532:	20060463          	beqz	a2,1c00873a <memmove+0x210>
1c008536:	00450793          	addi	a5,a0,4
1c00853a:	00458693          	addi	a3,a1,4
1c00853e:	04b7b7b3          	p.sletu	a5,a5,a1
1c008542:	04a6b6b3          	p.sletu	a3,a3,a0
1c008546:	873e                	mv	a4,a5
1c008548:	87b6                	mv	a5,a3
1c00854a:	8fd9                	or	a5,a5,a4
1c00854c:	0ff7f793          	andi	a5,a5,255
1c008550:	1c078d63          	beqz	a5,1c00872a <memmove+0x200>
1c008554:	00863793          	sltiu	a5,a2,8
1c008558:	0017c793          	xori	a5,a5,1
1c00855c:	0ff7f793          	andi	a5,a5,255
1c008560:	1c078563          	beqz	a5,1c00872a <memmove+0x200>
1c008564:	40b007b3          	neg	a5,a1
1c008568:	fa27b7b3          	p.bclr	a5,a5,29,2
1c00856c:	fff60313          	addi	t1,a2,-1
1c008570:	88ae                	mv	a7,a1
1c008572:	1e078363          	beqz	a5,1c008758 <memmove+0x22e>
1c008576:	0018c70b          	p.lbu	a4,1(a7!)
1c00857a:	882a                	mv	a6,a0
1c00857c:	00e800ab          	p.sb	a4,1(a6!)
1c008580:	0217a863          	p.beqimm	a5,1,1c0085b0 <memmove+0x86>
1c008584:	0015c703          	lbu	a4,1(a1)
1c008588:	00250813          	addi	a6,a0,2
1c00858c:	00258893          	addi	a7,a1,2
1c008590:	00e500a3          	sb	a4,1(a0)
1c008594:	ffe60313          	addi	t1,a2,-2
1c008598:	0037bc63          	p.bneimm	a5,3,1c0085b0 <memmove+0x86>
1c00859c:	0025c703          	lbu	a4,2(a1)
1c0085a0:	00350813          	addi	a6,a0,3
1c0085a4:	00358893          	addi	a7,a1,3
1c0085a8:	00e50123          	sb	a4,2(a0)
1c0085ac:	ffd60313          	addi	t1,a2,-3
1c0085b0:	8e1d                	sub	a2,a2,a5
1c0085b2:	00265713          	srli	a4,a2,0x2
1c0085b6:	00f506b3          	add	a3,a0,a5
1c0085ba:	95be                	add	a1,a1,a5
1c0085bc:	1a070363          	beqz	a4,1c008762 <memmove+0x238>
1c0085c0:	004740fb          	lp.setup	x1,a4,1c0085c8 <memmove+0x9e>
1c0085c4:	0045a78b          	p.lw	a5,4(a1!)
1c0085c8:	00f6a22b          	p.sw	a5,4(a3!)
1c0085cc:	c20635b3          	p.bclr	a1,a2,1,0
1c0085d0:	40b306b3          	sub	a3,t1,a1
1c0085d4:	00b807b3          	add	a5,a6,a1
1c0085d8:	00b88733          	add	a4,a7,a1
1c0085dc:	14b60e63          	beq	a2,a1,1c008738 <memmove+0x20e>
1c0085e0:	00074603          	lbu	a2,0(a4)
1c0085e4:	00c78023          	sb	a2,0(a5)
1c0085e8:	1416a863          	p.beqimm	a3,1,1c008738 <memmove+0x20e>
1c0085ec:	00174603          	lbu	a2,1(a4)
1c0085f0:	00c780a3          	sb	a2,1(a5)
1c0085f4:	1426a263          	p.beqimm	a3,2,1c008738 <memmove+0x20e>
1c0085f8:	00274603          	lbu	a2,2(a4)
1c0085fc:	00c78123          	sb	a2,2(a5)
1c008600:	1236ac63          	p.beqimm	a3,3,1c008738 <memmove+0x20e>
1c008604:	00374603          	lbu	a2,3(a4)
1c008608:	00c781a3          	sb	a2,3(a5)
1c00860c:	1246a663          	p.beqimm	a3,4,1c008738 <memmove+0x20e>
1c008610:	00474603          	lbu	a2,4(a4)
1c008614:	00c78223          	sb	a2,4(a5)
1c008618:	1256a063          	p.beqimm	a3,5,1c008738 <memmove+0x20e>
1c00861c:	00574703          	lbu	a4,5(a4)
1c008620:	00e782a3          	sb	a4,5(a5)
1c008624:	8082                	ret
1c008626:	ffc60793          	addi	a5,a2,-4
1c00862a:	00f50833          	add	a6,a0,a5
1c00862e:	00f58333          	add	t1,a1,a5
1c008632:	00c58733          	add	a4,a1,a2
1c008636:	00c508b3          	add	a7,a0,a2
1c00863a:	05073733          	p.sletu	a4,a4,a6
1c00863e:	0468b833          	p.sletu	a6,a7,t1
1c008642:	86ba                	mv	a3,a4
1c008644:	8742                	mv	a4,a6
1c008646:	8f55                	or	a4,a4,a3
1c008648:	0ff77713          	andi	a4,a4,255
1c00864c:	cb65                	beqz	a4,1c00873c <memmove+0x212>
1c00864e:	00863713          	sltiu	a4,a2,8
1c008652:	00174713          	xori	a4,a4,1
1c008656:	0ff77713          	andi	a4,a4,255
1c00865a:	c36d                	beqz	a4,1c00873c <memmove+0x212>
1c00865c:	fa233733          	p.bclr	a4,t1,29,2
1c008660:	fff60893          	addi	a7,a2,-1
1c008664:	cb65                	beqz	a4,1c008754 <memmove+0x22a>
1c008666:	011586b3          	add	a3,a1,a7
1c00866a:	0006c683          	lbu	a3,0(a3)
1c00866e:	00d548a3          	p.sb	a3,a7(a0)
1c008672:	02172463          	p.beqimm	a4,1,1c00869a <memmove+0x170>
1c008676:	ffe60893          	addi	a7,a2,-2
1c00867a:	011586b3          	add	a3,a1,a7
1c00867e:	0006c683          	lbu	a3,0(a3)
1c008682:	00d548a3          	p.sb	a3,a7(a0)
1c008686:	00373a63          	p.bneimm	a4,3,1c00869a <memmove+0x170>
1c00868a:	ffd60893          	addi	a7,a2,-3
1c00868e:	011586b3          	add	a3,a1,a7
1c008692:	0006c683          	lbu	a3,0(a3)
1c008696:	00d548a3          	p.sb	a3,a7(a0)
1c00869a:	8e19                	sub	a2,a2,a4
1c00869c:	8f99                	sub	a5,a5,a4
1c00869e:	00265713          	srli	a4,a2,0x2
1c0086a2:	00f506b3          	add	a3,a0,a5
1c0086a6:	97ae                	add	a5,a5,a1
1c0086a8:	cb5d                	beqz	a4,1c00875e <memmove+0x234>
1c0086aa:	004740fb          	lp.setup	x1,a4,1c0086b2 <memmove+0x188>
1c0086ae:	ffc7a80b          	p.lw	a6,-4(a5!)
1c0086b2:	ff06ae2b          	p.sw	a6,-4(a3!)
1c0086b6:	c20637b3          	p.bclr	a5,a2,1,0
1c0086ba:	40f888b3          	sub	a7,a7,a5
1c0086be:	06f60d63          	beq	a2,a5,1c008738 <memmove+0x20e>
1c0086c2:	fff88793          	addi	a5,a7,-1
1c0086c6:	00f58733          	add	a4,a1,a5
1c0086ca:	00074703          	lbu	a4,0(a4)
1c0086ce:	00e547a3          	p.sb	a4,a5(a0)
1c0086d2:	c3bd                	beqz	a5,1c008738 <memmove+0x20e>
1c0086d4:	ffe88793          	addi	a5,a7,-2
1c0086d8:	00f58733          	add	a4,a1,a5
1c0086dc:	00074703          	lbu	a4,0(a4)
1c0086e0:	00e547a3          	p.sb	a4,a5(a0)
1c0086e4:	cbb1                	beqz	a5,1c008738 <memmove+0x20e>
1c0086e6:	ffd88793          	addi	a5,a7,-3
1c0086ea:	00f58733          	add	a4,a1,a5
1c0086ee:	00074703          	lbu	a4,0(a4)
1c0086f2:	00e547a3          	p.sb	a4,a5(a0)
1c0086f6:	c3a9                	beqz	a5,1c008738 <memmove+0x20e>
1c0086f8:	ffc88793          	addi	a5,a7,-4
1c0086fc:	00f58733          	add	a4,a1,a5
1c008700:	00074703          	lbu	a4,0(a4)
1c008704:	00e547a3          	p.sb	a4,a5(a0)
1c008708:	cb85                	beqz	a5,1c008738 <memmove+0x20e>
1c00870a:	ffb88793          	addi	a5,a7,-5
1c00870e:	00f58733          	add	a4,a1,a5
1c008712:	00074703          	lbu	a4,0(a4)
1c008716:	00e547a3          	p.sb	a4,a5(a0)
1c00871a:	cf99                	beqz	a5,1c008738 <memmove+0x20e>
1c00871c:	18e9                	addi	a7,a7,-6
1c00871e:	95c6                	add	a1,a1,a7
1c008720:	0005c783          	lbu	a5,0(a1)
1c008724:	00f548a3          	p.sb	a5,a7(a0)
1c008728:	8082                	ret
1c00872a:	87aa                	mv	a5,a0
1c00872c:	004640fb          	lp.setup	x1,a2,1c008734 <memmove+0x20a>
1c008730:	0015c70b          	p.lbu	a4,1(a1!)
1c008734:	00e780ab          	p.sb	a4,1(a5!)
1c008738:	8082                	ret
1c00873a:	8082                	ret
1c00873c:	167d                	addi	a2,a2,-1
1c00873e:	00c507b3          	add	a5,a0,a2
1c008742:	95b2                	add	a1,a1,a2
1c008744:	0605                	addi	a2,a2,1
1c008746:	004640fb          	lp.setup	x1,a2,1c00874e <memmove+0x224>
1c00874a:	fff5c70b          	p.lbu	a4,-1(a1!)
1c00874e:	fee78fab          	p.sb	a4,-1(a5!)
1c008752:	8082                	ret
1c008754:	88b2                	mv	a7,a2
1c008756:	b791                	j	1c00869a <memmove+0x170>
1c008758:	882a                	mv	a6,a0
1c00875a:	8332                	mv	t1,a2
1c00875c:	bd91                	j	1c0085b0 <memmove+0x86>
1c00875e:	4705                	li	a4,1
1c008760:	b7a9                	j	1c0086aa <memmove+0x180>
1c008762:	4705                	li	a4,1
1c008764:	bdb1                	j	1c0085c0 <memmove+0x96>

1c008766 <strchr>:
1c008766:	00054783          	lbu	a5,0(a0)
1c00876a:	0ff5f593          	andi	a1,a1,255
1c00876e:	00b78c63          	beq	a5,a1,1c008786 <strchr+0x20>
1c008772:	cb99                	beqz	a5,1c008788 <strchr+0x22>
1c008774:	00150793          	addi	a5,a0,1
1c008778:	a011                	j	1c00877c <strchr+0x16>
1c00877a:	c719                	beqz	a4,1c008788 <strchr+0x22>
1c00877c:	853e                	mv	a0,a5
1c00877e:	0017c70b          	p.lbu	a4,1(a5!)
1c008782:	feb71ce3          	bne	a4,a1,1c00877a <strchr+0x14>
1c008786:	8082                	ret
1c008788:	0015b593          	seqz	a1,a1
1c00878c:	40b005b3          	neg	a1,a1
1c008790:	8d6d                	and	a0,a0,a1
1c008792:	8082                	ret

1c008794 <puts>:
1c008794:	0015478b          	p.lbu	a5,1(a0!)
1c008798:	1a104737          	lui	a4,0x1a104
1c00879c:	02070713          	addi	a4,a4,32 # 1a104020 <__l2_shared_end+0xa1036f0>
1c0087a0:	c789                	beqz	a5,1c0087aa <puts+0x16>
1c0087a2:	c31c                	sw	a5,0(a4)
1c0087a4:	0015478b          	p.lbu	a5,1(a0!)
1c0087a8:	ffed                	bnez	a5,1c0087a2 <puts+0xe>
1c0087aa:	1a1047b7          	lui	a5,0x1a104
1c0087ae:	4729                	li	a4,10
1c0087b0:	d398                	sw	a4,32(a5)
1c0087b2:	4501                	li	a0,0
1c0087b4:	8082                	ret

1c0087b6 <pos_libc_fputc_locked>:
1c0087b6:	1a1047b7          	lui	a5,0x1a104
1c0087ba:	0ff57513          	andi	a0,a0,255
1c0087be:	d388                	sw	a0,32(a5)
1c0087c0:	4501                	li	a0,0
1c0087c2:	8082                	ret

1c0087c4 <pos_libc_prf_locked>:
1c0087c4:	a0a9                	j	1c00880e <pos_libc_prf>

1c0087c6 <exit>:
1c0087c6:	1141                	addi	sp,sp,-16
1c0087c8:	c606                	sw	ra,12(sp)
1c0087ca:	1a1047b7          	lui	a5,0x1a104
1c0087ce:	c1f54533          	p.bset	a0,a0,0,31
1c0087d2:	0aa7a023          	sw	a0,160(a5) # 1a1040a0 <__l2_shared_end+0xa103770>
1c0087d6:	36f5                	jal	1c0083c2 <pos_wait_forever>

1c0087d8 <pos_io_start>:
1c0087d8:	4501                	li	a0,0
1c0087da:	8082                	ret

1c0087dc <pos_io_stop>:
1c0087dc:	4501                	li	a0,0
1c0087de:	8082                	ret

1c0087e0 <printf>:
1c0087e0:	7139                	addi	sp,sp,-64
1c0087e2:	02410313          	addi	t1,sp,36
1c0087e6:	d432                	sw	a2,40(sp)
1c0087e8:	862a                	mv	a2,a0
1c0087ea:	1c008537          	lui	a0,0x1c008
1c0087ee:	d22e                	sw	a1,36(sp)
1c0087f0:	d636                	sw	a3,44(sp)
1c0087f2:	4589                	li	a1,2
1c0087f4:	869a                	mv	a3,t1
1c0087f6:	7b650513          	addi	a0,a0,1974 # 1c0087b6 <pos_libc_fputc_locked>
1c0087fa:	ce06                	sw	ra,28(sp)
1c0087fc:	d83a                	sw	a4,48(sp)
1c0087fe:	da3e                	sw	a5,52(sp)
1c008800:	dc42                	sw	a6,56(sp)
1c008802:	de46                	sw	a7,60(sp)
1c008804:	c61a                	sw	t1,12(sp)
1c008806:	3f7d                	jal	1c0087c4 <pos_libc_prf_locked>
1c008808:	40f2                	lw	ra,28(sp)
1c00880a:	6121                	addi	sp,sp,64
1c00880c:	8082                	ret

1c00880e <pos_libc_prf>:
1c00880e:	7169                	addi	sp,sp,-304
1c008810:	12812423          	sw	s0,296(sp)
1c008814:	4401                	li	s0,0
1c008816:	11612823          	sw	s6,272(sp)
1c00881a:	11712623          	sw	s7,268(sp)
1c00881e:	11812423          	sw	s8,264(sp)
1c008822:	11912223          	sw	s9,260(sp)
1c008826:	11a12023          	sw	s10,256(sp)
1c00882a:	dfee                	sw	s11,252(sp)
1c00882c:	12112623          	sw	ra,300(sp)
1c008830:	8da2                	mv	s11,s0
1c008832:	12912223          	sw	s1,292(sp)
1c008836:	13212023          	sw	s2,288(sp)
1c00883a:	11312e23          	sw	s3,284(sp)
1c00883e:	11412c23          	sw	s4,280(sp)
1c008842:	11512a23          	sw	s5,276(sp)
1c008846:	8b2a                	mv	s6,a0
1c008848:	8d2e                	mv	s10,a1
1c00884a:	8c36                	mv	s8,a3
1c00884c:	1c000bb7          	lui	s7,0x1c000
1c008850:	02410c93          	addi	s9,sp,36
1c008854:	8432                	mv	s0,a2
1c008856:	00044503          	lbu	a0,0(s0)
1c00885a:	0405                	addi	s0,s0,1
1c00885c:	cd11                	beqz	a0,1c008878 <pos_libc_prf+0x6a>
1c00885e:	02500793          	li	a5,37
1c008862:	04f50863          	beq	a0,a5,1c0088b2 <pos_libc_prf+0xa4>
1c008866:	85ea                	mv	a1,s10
1c008868:	9b02                	jalr	s6
1c00886a:	31f52563          	p.beqimm	a0,-1,1c008b74 <pos_libc_prf+0x366>
1c00886e:	0d85                	addi	s11,s11,1
1c008870:	00044503          	lbu	a0,0(s0)
1c008874:	0405                	addi	s0,s0,1
1c008876:	f565                	bnez	a0,1c00885e <pos_libc_prf+0x50>
1c008878:	846e                	mv	s0,s11
1c00887a:	8522                	mv	a0,s0
1c00887c:	12c12083          	lw	ra,300(sp)
1c008880:	12812403          	lw	s0,296(sp)
1c008884:	12412483          	lw	s1,292(sp)
1c008888:	12012903          	lw	s2,288(sp)
1c00888c:	11c12983          	lw	s3,284(sp)
1c008890:	11812a03          	lw	s4,280(sp)
1c008894:	11412a83          	lw	s5,276(sp)
1c008898:	11012b03          	lw	s6,272(sp)
1c00889c:	10c12b83          	lw	s7,268(sp)
1c0088a0:	10812c03          	lw	s8,264(sp)
1c0088a4:	10412c83          	lw	s9,260(sp)
1c0088a8:	10012d03          	lw	s10,256(sp)
1c0088ac:	5dfe                	lw	s11,252(sp)
1c0088ae:	6155                	addi	sp,sp,304
1c0088b0:	8082                	ret
1c0088b2:	00044483          	lbu	s1,0(s0)
1c0088b6:	02000693          	li	a3,32
1c0088ba:	00140a93          	addi	s5,s0,1
1c0088be:	078b8513          	addi	a0,s7,120 # 1c000078 <__DTOR_END__+0x5c>
1c0088c2:	85a6                	mv	a1,s1
1c0088c4:	c836                	sw	a3,16(sp)
1c0088c6:	cc02                	sw	zero,24(sp)
1c0088c8:	ca02                	sw	zero,20(sp)
1c0088ca:	ce02                	sw	zero,28(sp)
1c0088cc:	c602                	sw	zero,12(sp)
1c0088ce:	02300913          	li	s2,35
1c0088d2:	02d00a13          	li	s4,45
1c0088d6:	89d6                	mv	s3,s5
1c0088d8:	3579                	jal	1c008766 <strchr>
1c0088da:	c915                	beqz	a0,1c00890e <pos_libc_prf+0x100>
1c0088dc:	2b248b63          	beq	s1,s2,1c008b92 <pos_libc_prf+0x384>
1c0088e0:	0c997463          	bleu	s1,s2,1c0089a8 <pos_libc_prf+0x19a>
1c0088e4:	2b448363          	beq	s1,s4,1c008b8a <pos_libc_prf+0x37c>
1c0088e8:	03000613          	li	a2,48
1c0088ec:	28c48a63          	beq	s1,a2,1c008b80 <pos_libc_prf+0x372>
1c0088f0:	02b00693          	li	a3,43
1c0088f4:	28d48263          	beq	s1,a3,1c008b78 <pos_libc_prf+0x36a>
1c0088f8:	8456                	mv	s0,s5
1c0088fa:	00044483          	lbu	s1,0(s0)
1c0088fe:	00140a93          	addi	s5,s0,1
1c008902:	078b8513          	addi	a0,s7,120
1c008906:	85a6                	mv	a1,s1
1c008908:	89d6                	mv	s3,s5
1c00890a:	3db1                	jal	1c008766 <strchr>
1c00890c:	f961                	bnez	a0,1c0088dc <pos_libc_prf+0xce>
1c00890e:	02a00613          	li	a2,42
1c008912:	2ac48663          	beq	s1,a2,1c008bbe <pos_libc_prf+0x3b0>
1c008916:	fd048613          	addi	a2,s1,-48
1c00891a:	45a5                	li	a1,9
1c00891c:	4901                	li	s2,0
1c00891e:	28c5f063          	bleu	a2,a1,1c008b9e <pos_libc_prf+0x390>
1c008922:	02e00693          	li	a3,46
1c008926:	5a7d                	li	s4,-1
1c008928:	2ed48363          	beq	s1,a3,1c008c0e <pos_libc_prf+0x400>
1c00892c:	1c0007b7          	lui	a5,0x1c000
1c008930:	85a6                	mv	a1,s1
1c008932:	08078513          	addi	a0,a5,128 # 1c000080 <__DTOR_END__+0x64>
1c008936:	3d05                	jal	1c008766 <strchr>
1c008938:	844e                	mv	s0,s3
1c00893a:	c509                	beqz	a0,1c008944 <pos_libc_prf+0x136>
1c00893c:	0009c483          	lbu	s1,0(s3)
1c008940:	00198413          	addi	s0,s3,1
1c008944:	06700693          	li	a3,103
1c008948:	2896d963          	ble	s1,a3,1c008bda <pos_libc_prf+0x3cc>
1c00894c:	07000693          	li	a3,112
1c008950:	7cd48b63          	beq	s1,a3,1c009126 <pos_libc_prf+0x918>
1c008954:	2e96d163          	ble	s1,a3,1c008c36 <pos_libc_prf+0x428>
1c008958:	07500693          	li	a3,117
1c00895c:	12d489e3          	beq	s1,a3,1c00928e <pos_libc_prf+0xa80>
1c008960:	07800693          	li	a3,120
1c008964:	06d48663          	beq	s1,a3,1c0089d0 <pos_libc_prf+0x1c2>
1c008968:	07300693          	li	a3,115
1c00896c:	18d49fe3          	bne	s1,a3,1c00930a <pos_libc_prf+0xafc>
1c008970:	000c2583          	lw	a1,0(s8)
1c008974:	004c0993          	addi	s3,s8,4
1c008978:	4481                	li	s1,0
1c00897a:	86ae                	mv	a3,a1
1c00897c:	0c8350fb          	lp.setupi	x1,200,1c008988 <pos_libc_prf+0x17a>
1c008980:	0016c70b          	p.lbu	a4,1(a3!)
1c008984:	18070ae3          	beqz	a4,1c009318 <pos_libc_prf+0xb0a>
1c008988:	0485                	addi	s1,s1,1
1c00898a:	000a4763          	bltz	s4,1c008998 <pos_libc_prf+0x18a>
1c00898e:	0544c4b3          	p.min	s1,s1,s4
1c008992:	8c4e                	mv	s8,s3
1c008994:	ec0481e3          	beqz	s1,1c008856 <pos_libc_prf+0x48>
1c008998:	8626                	mv	a2,s1
1c00899a:	8566                	mv	a0,s9
1c00899c:	3c99                	jal	1c0083f2 <memcpy>
1c00899e:	8c4e                	mv	s8,s3
1c0089a0:	1b24db63          	ble	s2,s1,1c008b56 <pos_libc_prf+0x348>
1c0089a4:	c602                	sw	zero,12(sp)
1c0089a6:	a0f9                	j	1c008a74 <pos_libc_prf+0x266>
1c0089a8:	ec0488e3          	beqz	s1,1c008878 <pos_libc_prf+0x6a>
1c0089ac:	02000593          	li	a1,32
1c0089b0:	f4b494e3          	bne	s1,a1,1c0088f8 <pos_libc_prf+0xea>
1c0089b4:	4785                	li	a5,1
1c0089b6:	cc3e                	sw	a5,24(sp)
1c0089b8:	8456                	mv	s0,s5
1c0089ba:	b781                	j	1c0088fa <pos_libc_prf+0xec>
1c0089bc:	06300693          	li	a3,99
1c0089c0:	0ad48de3          	beq	s1,a3,1c00927a <pos_libc_prf+0xa6c>
1c0089c4:	0096cde3          	blt	a3,s1,1c0091de <pos_libc_prf+0x9d0>
1c0089c8:	05800693          	li	a3,88
1c0089cc:	12d49fe3          	bne	s1,a3,1c00930a <pos_libc_prf+0xafc>
1c0089d0:	47b2                	lw	a5,12(sp)
1c0089d2:	004c0893          	addi	a7,s8,4
1c0089d6:	000c2503          	lw	a0,0(s8)
1c0089da:	260788e3          	beqz	a5,1c00944a <pos_libc_prf+0xc3c>
1c0089de:	76e1                	lui	a3,0xffff8
1c0089e0:	8306c693          	xori	a3,a3,-2000
1c0089e4:	02d11223          	sh	a3,36(sp)
1c0089e8:	4309                	li	t1,2
1c0089ea:	02610613          	addi	a2,sp,38
1c0089ee:	86b2                	mv	a3,a2
1c0089f0:	4ea5                	li	t4,9
1c0089f2:	f6453733          	p.bclr	a4,a0,27,4
1c0089f6:	0ff77793          	andi	a5,a4,255
1c0089fa:	03078593          	addi	a1,a5,48
1c0089fe:	8111                	srli	a0,a0,0x4
1c008a00:	05778793          	addi	a5,a5,87
1c008a04:	70eee963          	bltu	t4,a4,1c009116 <pos_libc_prf+0x908>
1c008a08:	00b680ab          	p.sb	a1,1(a3!) # ffff8001 <pulp__FC+0xffff8002>
1c008a0c:	f17d                	bnez	a0,1c0089f2 <pos_libc_prf+0x1e4>
1c008a0e:	40c68733          	sub	a4,a3,a2
1c008a12:	01475d63          	ble	s4,a4,1c008a2c <pos_libc_prf+0x21e>
1c008a16:	40d605b3          	sub	a1,a2,a3
1c008a1a:	03000513          	li	a0,48
1c008a1e:	95d2                	add	a1,a1,s4
1c008a20:	0045c0fb          	lp.setup	x1,a1,1c008a28 <pos_libc_prf+0x21a>
1c008a24:	00a680ab          	p.sb	a0,1(a3!)
1c008a28:	40c68733          	sub	a4,a3,a2
1c008a2c:	fe068fab          	p.sb	zero,-1(a3!)
1c008a30:	00d67c63          	bleu	a3,a2,1c008a48 <pos_libc_prf+0x23a>
1c008a34:	00064583          	lbu	a1,0(a2)
1c008a38:	0006c783          	lbu	a5,0(a3)
1c008a3c:	feb68fab          	p.sb	a1,-1(a3!)
1c008a40:	00f600ab          	p.sb	a5,1(a2!)
1c008a44:	fed668e3          	bltu	a2,a3,1c008a34 <pos_libc_prf+0x226>
1c008a48:	05800693          	li	a3,88
1c008a4c:	20d483e3          	beq	s1,a3,1c009452 <pos_libc_prf+0xc44>
1c008a50:	46b2                	lw	a3,12(sp)
1c008a52:	006704b3          	add	s1,a4,t1
1c008a56:	c299                	beqz	a3,1c008a5c <pos_libc_prf+0x24e>
1c008a58:	4709                	li	a4,2
1c008a5a:	c63a                	sw	a4,12(sp)
1c008a5c:	0c800793          	li	a5,200
1c008a60:	23fa24e3          	p.beqimm	s4,-1,1c009488 <pos_libc_prf+0xc7a>
1c008a64:	1097c863          	blt	a5,s1,1c008b74 <pos_libc_prf+0x366>
1c008a68:	02000793          	li	a5,32
1c008a6c:	8c46                	mv	s8,a7
1c008a6e:	c83e                	sw	a5,16(sp)
1c008a70:	0f24d163          	ble	s2,s1,1c008b52 <pos_libc_prf+0x344>
1c008a74:	4772                	lw	a4,28(sp)
1c008a76:	0c0702e3          	beqz	a4,1c00933a <pos_libc_prf+0xb2c>
1c008a7a:	009c87b3          	add	a5,s9,s1
1c008a7e:	40f007b3          	neg	a5,a5
1c008a82:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008a86:	4595                	li	a1,5
1c008a88:	00378613          	addi	a2,a5,3
1c008a8c:	fff90693          	addi	a3,s2,-1
1c008a90:	04b67633          	p.maxu	a2,a2,a1
1c008a94:	8e85                	sub	a3,a3,s1
1c008a96:	409905b3          	sub	a1,s2,s1
1c008a9a:	06c6e163          	bltu	a3,a2,1c008afc <pos_libc_prf+0x2ee>
1c008a9e:	8626                	mv	a2,s1
1c008aa0:	cb85                	beqz	a5,1c008ad0 <pos_libc_prf+0x2c2>
1c008aa2:	1998                	addi	a4,sp,240
1c008aa4:	00970633          	add	a2,a4,s1
1c008aa8:	02000693          	li	a3,32
1c008aac:	f2d60a23          	sb	a3,-204(a2)
1c008ab0:	00148613          	addi	a2,s1,1
1c008ab4:	0017ae63          	p.beqimm	a5,1,1c008ad0 <pos_libc_prf+0x2c2>
1c008ab8:	963a                	add	a2,a2,a4
1c008aba:	f2d60a23          	sb	a3,-204(a2)
1c008abe:	00248613          	addi	a2,s1,2
1c008ac2:	0037b763          	p.bneimm	a5,3,1c008ad0 <pos_libc_prf+0x2c2>
1c008ac6:	963a                	add	a2,a2,a4
1c008ac8:	f2d60a23          	sb	a3,-204(a2)
1c008acc:	00348613          	addi	a2,s1,3
1c008ad0:	8d9d                	sub	a1,a1,a5
1c008ad2:	0025d693          	srli	a3,a1,0x2
1c008ad6:	97a6                	add	a5,a5,s1
1c008ad8:	97e6                	add	a5,a5,s9
1c008ada:	42068fe3          	beqz	a3,1c009718 <pos_libc_prf+0xf0a>
1c008ade:	0076c0fb          	lp.setup	x1,a3,1c008aec <pos_libc_prf+0x2de>
1c008ae2:	1c000737          	lui	a4,0x1c000
1c008ae6:	07470713          	addi	a4,a4,116 # 1c000074 <__DTOR_END__+0x58>
1c008aea:	4318                	lw	a4,0(a4)
1c008aec:	00e7a22b          	p.sw	a4,4(a5!)
1c008af0:	c205b7b3          	p.bclr	a5,a1,1,0
1c008af4:	00c784b3          	add	s1,a5,a2
1c008af8:	04b78c63          	beq	a5,a1,1c008b50 <pos_libc_prf+0x342>
1c008afc:	198c                	addi	a1,sp,240
1c008afe:	009586b3          	add	a3,a1,s1
1c008b02:	02000793          	li	a5,32
1c008b06:	f2f68a23          	sb	a5,-204(a3)
1c008b0a:	00148693          	addi	a3,s1,1
1c008b0e:	0526d163          	ble	s2,a3,1c008b50 <pos_libc_prf+0x342>
1c008b12:	96ae                	add	a3,a3,a1
1c008b14:	f2f68a23          	sb	a5,-204(a3)
1c008b18:	00248693          	addi	a3,s1,2
1c008b1c:	0326da63          	ble	s2,a3,1c008b50 <pos_libc_prf+0x342>
1c008b20:	96ae                	add	a3,a3,a1
1c008b22:	f2f68a23          	sb	a5,-204(a3)
1c008b26:	00348693          	addi	a3,s1,3
1c008b2a:	0326d363          	ble	s2,a3,1c008b50 <pos_libc_prf+0x342>
1c008b2e:	96ae                	add	a3,a3,a1
1c008b30:	f2f68a23          	sb	a5,-204(a3)
1c008b34:	00448693          	addi	a3,s1,4
1c008b38:	0126dc63          	ble	s2,a3,1c008b50 <pos_libc_prf+0x342>
1c008b3c:	96ae                	add	a3,a3,a1
1c008b3e:	f2f68a23          	sb	a5,-204(a3)
1c008b42:	00548713          	addi	a4,s1,5
1c008b46:	01275563          	ble	s2,a4,1c008b50 <pos_libc_prf+0x342>
1c008b4a:	972e                	add	a4,a4,a1
1c008b4c:	f2f70a23          	sb	a5,-204(a4)
1c008b50:	84ca                	mv	s1,s2
1c008b52:	d00482e3          	beqz	s1,1c008856 <pos_libc_prf+0x48>
1c008b56:	8966                	mv	s2,s9
1c008b58:	419d8db3          	sub	s11,s11,s9
1c008b5c:	a029                	j	1c008b66 <pos_libc_prf+0x358>
1c008b5e:	012d8733          	add	a4,s11,s2
1c008b62:	5a048f63          	beqz	s1,1c009120 <pos_libc_prf+0x912>
1c008b66:	0019450b          	p.lbu	a0,1(s2!)
1c008b6a:	85ea                	mv	a1,s10
1c008b6c:	14fd                	addi	s1,s1,-1
1c008b6e:	9b02                	jalr	s6
1c008b70:	fff537e3          	p.bneimm	a0,-1,1c008b5e <pos_libc_prf+0x350>
1c008b74:	547d                	li	s0,-1
1c008b76:	b311                	j	1c00887a <pos_libc_prf+0x6c>
1c008b78:	4705                	li	a4,1
1c008b7a:	ca3a                	sw	a4,20(sp)
1c008b7c:	8456                	mv	s0,s5
1c008b7e:	bbb5                	j	1c0088fa <pos_libc_prf+0xec>
1c008b80:	03000713          	li	a4,48
1c008b84:	c83a                	sw	a4,16(sp)
1c008b86:	8456                	mv	s0,s5
1c008b88:	bb8d                	j	1c0088fa <pos_libc_prf+0xec>
1c008b8a:	4785                	li	a5,1
1c008b8c:	ce3e                	sw	a5,28(sp)
1c008b8e:	8456                	mv	s0,s5
1c008b90:	b3ad                	j	1c0088fa <pos_libc_prf+0xec>
1c008b92:	4685                	li	a3,1
1c008b94:	c636                	sw	a3,12(sp)
1c008b96:	8456                	mv	s0,s5
1c008b98:	b38d                	j	1c0088fa <pos_libc_prf+0xec>
1c008b9a:	8456                	mv	s0,s5
1c008b9c:	0a85                	addi	s5,s5,1
1c008b9e:	00291793          	slli	a5,s2,0x2
1c008ba2:	97ca                	add	a5,a5,s2
1c008ba4:	0786                	slli	a5,a5,0x1
1c008ba6:	97a6                	add	a5,a5,s1
1c008ba8:	000ac483          	lbu	s1,0(s5)
1c008bac:	fd078913          	addi	s2,a5,-48
1c008bb0:	fd048793          	addi	a5,s1,-48
1c008bb4:	fef5f3e3          	bleu	a5,a1,1c008b9a <pos_libc_prf+0x38c>
1c008bb8:	00240993          	addi	s3,s0,2
1c008bbc:	a811                	j	1c008bd0 <pos_libc_prf+0x3c2>
1c008bbe:	000c2903          	lw	s2,0(s8)
1c008bc2:	0c11                	addi	s8,s8,4
1c008bc4:	12094d63          	bltz	s2,1c008cfe <pos_libc_prf+0x4f0>
1c008bc8:	000ac483          	lbu	s1,0(s5)
1c008bcc:	00240993          	addi	s3,s0,2
1c008bd0:	0c800693          	li	a3,200
1c008bd4:	04d95933          	p.minu	s2,s2,a3
1c008bd8:	b3a9                	j	1c008922 <pos_libc_prf+0x114>
1c008bda:	06500693          	li	a3,101
1c008bde:	12d4d563          	ble	a3,s1,1c008d08 <pos_libc_prf+0x4fa>
1c008be2:	04700693          	li	a3,71
1c008be6:	dc96cbe3          	blt	a3,s1,1c0089bc <pos_libc_prf+0x1ae>
1c008bea:	04500693          	li	a3,69
1c008bee:	10d4dd63          	ble	a3,s1,1c008d08 <pos_libc_prf+0x4fa>
1c008bf2:	c80483e3          	beqz	s1,1c008878 <pos_libc_prf+0x6a>
1c008bf6:	02500693          	li	a3,37
1c008bfa:	70d49863          	bne	s1,a3,1c00930a <pos_libc_prf+0xafc>
1c008bfe:	85ea                	mv	a1,s10
1c008c00:	02500513          	li	a0,37
1c008c04:	9b02                	jalr	s6
1c008c06:	f7f527e3          	p.beqimm	a0,-1,1c008b74 <pos_libc_prf+0x366>
1c008c0a:	0d85                	addi	s11,s11,1
1c008c0c:	b195                	j	1c008870 <pos_libc_prf+0x62>
1c008c0e:	0009c783          	lbu	a5,0(s3)
1c008c12:	02a00693          	li	a3,42
1c008c16:	00198513          	addi	a0,s3,1
1c008c1a:	0ad79963          	bne	a5,a3,1c008ccc <pos_libc_prf+0x4be>
1c008c1e:	000c2a03          	lw	s4,0(s8)
1c008c22:	0019c483          	lbu	s1,1(s3)
1c008c26:	0c11                	addi	s8,s8,4
1c008c28:	0989                	addi	s3,s3,2
1c008c2a:	0c800693          	li	a3,200
1c008c2e:	cf46dfe3          	ble	s4,a3,1c00892c <pos_libc_prf+0x11e>
1c008c32:	5a7d                	li	s4,-1
1c008c34:	b9e5                	j	1c00892c <pos_libc_prf+0x11e>
1c008c36:	06e00693          	li	a3,110
1c008c3a:	58d48763          	beq	s1,a3,1c0091c8 <pos_libc_prf+0x9ba>
1c008c3e:	5896dc63          	ble	s1,a3,1c0091d6 <pos_libc_prf+0x9c8>
1c008c42:	47b2                	lw	a5,12(sp)
1c008c44:	004c0813          	addi	a6,s8,4
1c008c48:	000c2603          	lw	a2,0(s8)
1c008c4c:	04078ee3          	beqz	a5,1c0094a8 <pos_libc_prf+0xc9a>
1c008c50:	03000793          	li	a5,48
1c008c54:	02f10223          	sb	a5,36(sp)
1c008c58:	02060de3          	beqz	a2,1c009492 <pos_libc_prf+0xc84>
1c008c5c:	02510513          	addi	a0,sp,37
1c008c60:	86aa                	mv	a3,a0
1c008c62:	87b6                	mv	a5,a3
1c008c64:	f8363733          	p.bclr	a4,a2,28,3
1c008c68:	03070713          	addi	a4,a4,48
1c008c6c:	820d                	srli	a2,a2,0x3
1c008c6e:	00e780ab          	p.sb	a4,1(a5!)
1c008c72:	fa6d                	bnez	a2,1c008c64 <pos_libc_prf+0x456>
1c008c74:	40a78733          	sub	a4,a5,a0
1c008c78:	01475d63          	ble	s4,a4,1c008c92 <pos_libc_prf+0x484>
1c008c7c:	40fa0633          	sub	a2,s4,a5
1c008c80:	03000593          	li	a1,48
1c008c84:	962a                	add	a2,a2,a0
1c008c86:	004640fb          	lp.setup	x1,a2,1c008c8e <pos_libc_prf+0x480>
1c008c8a:	00b780ab          	p.sb	a1,1(a5!)
1c008c8e:	40a78733          	sub	a4,a5,a0
1c008c92:	fe078fab          	p.sb	zero,-1(a5!)
1c008c96:	00f6fc63          	bleu	a5,a3,1c008cae <pos_libc_prf+0x4a0>
1c008c9a:	0006c583          	lbu	a1,0(a3)
1c008c9e:	0007c603          	lbu	a2,0(a5)
1c008ca2:	feb78fab          	p.sb	a1,-1(a5!)
1c008ca6:	00c680ab          	p.sb	a2,1(a3!)
1c008caa:	fef6e8e3          	bltu	a3,a5,1c008c9a <pos_libc_prf+0x48c>
1c008cae:	46b2                	lw	a3,12(sp)
1c008cb0:	0c800793          	li	a5,200
1c008cb4:	00d704b3          	add	s1,a4,a3
1c008cb8:	0bfa2de3          	p.beqimm	s4,-1,1c009572 <pos_libc_prf+0xd64>
1c008cbc:	ea97cce3          	blt	a5,s1,1c008b74 <pos_libc_prf+0x366>
1c008cc0:	02000793          	li	a5,32
1c008cc4:	8c42                	mv	s8,a6
1c008cc6:	c602                	sw	zero,12(sp)
1c008cc8:	c83e                	sw	a5,16(sp)
1c008cca:	b35d                	j	1c008a70 <pos_libc_prf+0x262>
1c008ccc:	fd078813          	addi	a6,a5,-48
1c008cd0:	46a5                	li	a3,9
1c008cd2:	84be                	mv	s1,a5
1c008cd4:	862a                	mv	a2,a0
1c008cd6:	4a01                	li	s4,0
1c008cd8:	45a5                	li	a1,9
1c008cda:	89aa                	mv	s3,a0
1c008cdc:	c506e8e3          	bltu	a3,a6,1c00892c <pos_libc_prf+0x11e>
1c008ce0:	002a1793          	slli	a5,s4,0x2
1c008ce4:	97d2                	add	a5,a5,s4
1c008ce6:	0786                	slli	a5,a5,0x1
1c008ce8:	97a6                	add	a5,a5,s1
1c008cea:	0016448b          	p.lbu	s1,1(a2!)
1c008cee:	fd078a13          	addi	s4,a5,-48
1c008cf2:	fd048793          	addi	a5,s1,-48
1c008cf6:	fef5f5e3          	bleu	a5,a1,1c008ce0 <pos_libc_prf+0x4d2>
1c008cfa:	89b2                	mv	s3,a2
1c008cfc:	b73d                	j	1c008c2a <pos_libc_prf+0x41c>
1c008cfe:	4705                	li	a4,1
1c008d00:	41200933          	neg	s2,s2
1c008d04:	ce3a                	sw	a4,28(sp)
1c008d06:	b5c9                	j	1c008bc8 <pos_libc_prf+0x3ba>
1c008d08:	0c1d                	addi	s8,s8,7
1c008d0a:	c40c3c33          	p.bclr	s8,s8,2,0
1c008d0e:	000c2683          	lw	a3,0(s8)
1c008d12:	004c2803          	lw	a6,4(s8)
1c008d16:	7ff00613          	li	a2,2047
1c008d1a:	0156d893          	srli	a7,a3,0x15
1c008d1e:	01485513          	srli	a0,a6,0x14
1c008d22:	00b81593          	slli	a1,a6,0xb
1c008d26:	00b8e5b3          	or	a1,a7,a1
1c008d2a:	e8b53533          	p.bclr	a0,a0,20,11
1c008d2e:	0c21                	addi	s8,s8,8
1c008d30:	06ae                	slli	a3,a3,0xb
1c008d32:	c1f5b5b3          	p.bclr	a1,a1,0,31
1c008d36:	7ac50b63          	beq	a0,a2,1c0094ec <pos_libc_prf+0xcde>
1c008d3a:	04600613          	li	a2,70
1c008d3e:	00c49463          	bne	s1,a2,1c008d46 <pos_libc_prf+0x538>
1c008d42:	06600493          	li	s1,102
1c008d46:	00d56633          	or	a2,a0,a3
1c008d4a:	8e4d                	or	a2,a2,a1
1c008d4c:	7c060b63          	beqz	a2,1c009522 <pos_libc_prf+0xd14>
1c008d50:	c0250513          	addi	a0,a0,-1022
1c008d54:	c1f5c333          	p.bset	t1,a1,0,31
1c008d58:	140842e3          	bltz	a6,1c00969c <pos_libc_prf+0xe8e>
1c008d5c:	4752                	lw	a4,20(sp)
1c008d5e:	180703e3          	beqz	a4,1c0096e4 <pos_libc_prf+0xed6>
1c008d62:	02b00613          	li	a2,43
1c008d66:	02c10223          	sb	a2,36(sp)
1c008d6a:	02510893          	addi	a7,sp,37
1c008d6e:	5679                	li	a2,-2
1c008d70:	4801                	li	a6,0
1c008d72:	06c55763          	ble	a2,a0,1c008de0 <pos_libc_prf+0x5d2>
1c008d76:	33333e37          	lui	t3,0x33333
1c008d7a:	80000eb7          	lui	t4,0x80000
1c008d7e:	332e0e13          	addi	t3,t3,818 # 33333332 <__cluster_text_end+0x17323332>
1c008d82:	fffece93          	not	t4,t4
1c008d86:	5f79                	li	t5,-2
1c008d88:	a011                	j	1c008d8c <pos_libc_prf+0x57e>
1c008d8a:	853e                	mv	a0,a5
1c008d8c:	01f31613          	slli	a2,t1,0x1f
1c008d90:	0016d713          	srli	a4,a3,0x1
1c008d94:	fc16b7b3          	p.bclr	a5,a3,30,1
1c008d98:	8f51                	or	a4,a4,a2
1c008d9a:	00e786b3          	add	a3,a5,a4
1c008d9e:	00f6b7b3          	sltu	a5,a3,a5
1c008da2:	00135313          	srli	t1,t1,0x1
1c008da6:	933e                	add	t1,t1,a5
1c008da8:	00150793          	addi	a5,a0,1
1c008dac:	fc6e6fe3          	bltu	t3,t1,1c008d8a <pos_libc_prf+0x57c>
1c008db0:	00269613          	slli	a2,a3,0x2
1c008db4:	01e6d593          	srli	a1,a3,0x1e
1c008db8:	00231713          	slli	a4,t1,0x2
1c008dbc:	96b2                	add	a3,a3,a2
1c008dbe:	8f4d                	or	a4,a4,a1
1c008dc0:	933a                	add	t1,t1,a4
1c008dc2:	00c6b633          	sltu	a2,a3,a2
1c008dc6:	9332                	add	t1,t1,a2
1c008dc8:	01f6d713          	srli	a4,a3,0x1f
1c008dcc:	0509                	addi	a0,a0,2
1c008dce:	187d                	addi	a6,a6,-1
1c008dd0:	01d31663          	bne	t1,t4,1c008ddc <pos_libc_prf+0x5ce>
1c008dd4:	0686                	slli	a3,a3,0x1
1c008dd6:	fc174333          	p.bset	t1,a4,30,1
1c008dda:	853e                	mv	a0,a5
1c008ddc:	fbe548e3          	blt	a0,t5,1c008d8c <pos_libc_prf+0x57e>
1c008de0:	06a05763          	blez	a0,1c008e4e <pos_libc_prf+0x640>
1c008de4:	80000eb7          	lui	t4,0x80000
1c008de8:	4f15                	li	t5,5
1c008dea:	fffece93          	not	t4,t4
1c008dee:	00268613          	addi	a2,a3,2
1c008df2:	00d636b3          	sltu	a3,a2,a3
1c008df6:	9336                	add	t1,t1,a3
1c008df8:	03e357b3          	divu	a5,t1,t5
1c008dfc:	00365593          	srli	a1,a2,0x3
1c008e00:	157d                	addi	a0,a0,-1
1c008e02:	0805                	addi	a6,a6,1
1c008e04:	00279713          	slli	a4,a5,0x2
1c008e08:	973e                	add	a4,a4,a5
1c008e0a:	40e30333          	sub	t1,t1,a4
1c008e0e:	01d31713          	slli	a4,t1,0x1d
1c008e12:	8dd9                	or	a1,a1,a4
1c008e14:	03e5d5b3          	divu	a1,a1,t5
1c008e18:	00359693          	slli	a3,a1,0x3
1c008e1c:	00559713          	slli	a4,a1,0x5
1c008e20:	9736                	add	a4,a4,a3
1c008e22:	40e60733          	sub	a4,a2,a4
1c008e26:	03e75733          	divu	a4,a4,t5
1c008e2a:	81f5                	srli	a1,a1,0x1d
1c008e2c:	97ae                	add	a5,a5,a1
1c008e2e:	96ba                	add	a3,a3,a4
1c008e30:	00e6b733          	sltu	a4,a3,a4
1c008e34:	00f70333          	add	t1,a4,a5
1c008e38:	01f6d793          	srli	a5,a3,0x1f
1c008e3c:	0306                	slli	t1,t1,0x1
1c008e3e:	0067e333          	or	t1,a5,t1
1c008e42:	0686                	slli	a3,a3,0x1
1c008e44:	157d                	addi	a0,a0,-1
1c008e46:	fe6ef9e3          	bleu	t1,t4,1c008e38 <pos_libc_prf+0x62a>
1c008e4a:	faa042e3          	bgtz	a0,1c008dee <pos_libc_prf+0x5e0>
1c008e4e:	4611                	li	a2,4
1c008e50:	8e09                	sub	a2,a2,a0
1c008e52:	012640fb          	lp.setup	x1,a2,1c008e76 <pos_libc_prf+0x668>
1c008e56:	01f31713          	slli	a4,t1,0x1f
1c008e5a:	0016d793          	srli	a5,a3,0x1
1c008e5e:	8fd9                	or	a5,a5,a4
1c008e60:	fc16b6b3          	p.bclr	a3,a3,30,1
1c008e64:	00f68eb3          	add	t4,a3,a5
1c008e68:	00135313          	srli	t1,t1,0x1
1c008e6c:	00deb6b3          	sltu	a3,t4,a3
1c008e70:	00668533          	add	a0,a3,t1
1c008e74:	832a                	mv	t1,a0
1c008e76:	86f6                	mv	a3,t4
1c008e78:	06700693          	li	a3,103
1c008e7c:	6c0a4e63          	bltz	s4,1c009558 <pos_libc_prf+0xd4a>
1c008e80:	62d48863          	beq	s1,a3,1c0094b0 <pos_libc_prf+0xca2>
1c008e84:	04700693          	li	a3,71
1c008e88:	62d48463          	beq	s1,a3,1c0094b0 <pos_libc_prf+0xca2>
1c008e8c:	06600693          	li	a3,102
1c008e90:	78d48963          	beq	s1,a3,1c009622 <pos_libc_prf+0xe14>
1c008e94:	001a0f13          	addi	t5,s4,1
1c008e98:	45c1                	li	a1,16
1c008e9a:	04bf4f33          	p.min	t5,t5,a1
1c008e9e:	1f7d                	addi	t5,t5,-1
1c008ea0:	4e01                	li	t3,0
1c008ea2:	4581                	li	a1,0
1c008ea4:	080006b7          	lui	a3,0x8000
1c008ea8:	4f95                	li	t6,5
1c008eaa:	0f05                	addi	t5,t5,1
1c008eac:	02ff40fb          	lp.setup	x1,t5,1c008f0a <pos_libc_prf+0x6fc>
1c008eb0:	00258713          	addi	a4,a1,2
1c008eb4:	00b737b3          	sltu	a5,a4,a1
1c008eb8:	97b6                	add	a5,a5,a3
1c008eba:	03f7d5b3          	divu	a1,a5,t6
1c008ebe:	00375613          	srli	a2,a4,0x3
1c008ec2:	00259693          	slli	a3,a1,0x2
1c008ec6:	96ae                	add	a3,a3,a1
1c008ec8:	8f95                	sub	a5,a5,a3
1c008eca:	07f6                	slli	a5,a5,0x1d
1c008ecc:	8e5d                	or	a2,a2,a5
1c008ece:	03f65633          	divu	a2,a2,t6
1c008ed2:	00361693          	slli	a3,a2,0x3
1c008ed6:	00561793          	slli	a5,a2,0x5
1c008eda:	97b6                	add	a5,a5,a3
1c008edc:	40f707b3          	sub	a5,a4,a5
1c008ee0:	03f7d7b3          	divu	a5,a5,t6
1c008ee4:	01d65713          	srli	a4,a2,0x1d
1c008ee8:	972e                	add	a4,a4,a1
1c008eea:	96be                	add	a3,a3,a5
1c008eec:	00f6b7b3          	sltu	a5,a3,a5
1c008ef0:	973e                	add	a4,a4,a5
1c008ef2:	01f71613          	slli	a2,a4,0x1f
1c008ef6:	0016d793          	srli	a5,a3,0x1
1c008efa:	8fd1                	or	a5,a5,a2
1c008efc:	fc16b6b3          	p.bclr	a3,a3,30,1
1c008f00:	00f685b3          	add	a1,a3,a5
1c008f04:	8305                	srli	a4,a4,0x1
1c008f06:	00d5b6b3          	sltu	a3,a1,a3
1c008f0a:	96ba                	add	a3,a3,a4
1c008f0c:	95f6                	add	a1,a1,t4
1c008f0e:	96aa                	add	a3,a3,a0
1c008f10:	01d5beb3          	sltu	t4,a1,t4
1c008f14:	00de8533          	add	a0,t4,a3
1c008f18:	f6053633          	p.bclr	a2,a0,27,0
1c008f1c:	86ae                	mv	a3,a1
1c008f1e:	c22d                	beqz	a2,1c008f80 <pos_libc_prf+0x772>
1c008f20:	00258613          	addi	a2,a1,2
1c008f24:	00b636b3          	sltu	a3,a2,a1
1c008f28:	96aa                	add	a3,a3,a0
1c008f2a:	4e95                	li	t4,5
1c008f2c:	03d6d333          	divu	t1,a3,t4
1c008f30:	00365513          	srli	a0,a2,0x3
1c008f34:	0805                	addi	a6,a6,1
1c008f36:	00231593          	slli	a1,t1,0x2
1c008f3a:	959a                	add	a1,a1,t1
1c008f3c:	8e8d                	sub	a3,a3,a1
1c008f3e:	06f6                	slli	a3,a3,0x1d
1c008f40:	8d55                	or	a0,a0,a3
1c008f42:	03d55533          	divu	a0,a0,t4
1c008f46:	00351593          	slli	a1,a0,0x3
1c008f4a:	00551693          	slli	a3,a0,0x5
1c008f4e:	96ae                	add	a3,a3,a1
1c008f50:	40d606b3          	sub	a3,a2,a3
1c008f54:	03d6d6b3          	divu	a3,a3,t4
1c008f58:	8175                	srli	a0,a0,0x1d
1c008f5a:	951a                	add	a0,a0,t1
1c008f5c:	95b6                	add	a1,a1,a3
1c008f5e:	00d5b6b3          	sltu	a3,a1,a3
1c008f62:	00a68633          	add	a2,a3,a0
1c008f66:	01f61513          	slli	a0,a2,0x1f
1c008f6a:	0015d693          	srli	a3,a1,0x1
1c008f6e:	8ec9                	or	a3,a3,a0
1c008f70:	fc15b5b3          	p.bclr	a1,a1,30,1
1c008f74:	96ae                	add	a3,a3,a1
1c008f76:	8205                	srli	a2,a2,0x1
1c008f78:	00b6b5b3          	sltu	a1,a3,a1
1c008f7c:	00c58533          	add	a0,a1,a2
1c008f80:	06600593          	li	a1,102
1c008f84:	00188613          	addi	a2,a7,1
1c008f88:	60b48463          	beq	s1,a1,1c009590 <pos_libc_prf+0xd82>
1c008f8c:	00269593          	slli	a1,a3,0x2
1c008f90:	01e6de93          	srli	t4,a3,0x1e
1c008f94:	00251313          	slli	t1,a0,0x2
1c008f98:	96ae                	add	a3,a3,a1
1c008f9a:	006ee333          	or	t1,t4,t1
1c008f9e:	00b6b5b3          	sltu	a1,a3,a1
1c008fa2:	951a                	add	a0,a0,t1
1c008fa4:	952e                	add	a0,a0,a1
1c008fa6:	0506                	slli	a0,a0,0x1
1c008fa8:	01f6d593          	srli	a1,a3,0x1f
1c008fac:	8d4d                	or	a0,a0,a1
1c008fae:	01c55593          	srli	a1,a0,0x1c
1c008fb2:	03058313          	addi	t1,a1,48
1c008fb6:	47b2                	lw	a5,12(sp)
1c008fb8:	10000737          	lui	a4,0x10000
1c008fbc:	00b035b3          	snez	a1,a1
1c008fc0:	177d                	addi	a4,a4,-1
1c008fc2:	00688023          	sb	t1,0(a7)
1c008fc6:	0686                	slli	a3,a3,0x1
1c008fc8:	8d79                	and	a0,a0,a4
1c008fca:	40b80833          	sub	a6,a6,a1
1c008fce:	5a078863          	beqz	a5,1c00957e <pos_libc_prf+0xd70>
1c008fd2:	02e00613          	li	a2,46
1c008fd6:	00c880a3          	sb	a2,1(a7)
1c008fda:	00288613          	addi	a2,a7,2
1c008fde:	040a0b63          	beqz	s4,1c009034 <pos_libc_prf+0x826>
1c008fe2:	8332                	mv	t1,a2
1c008fe4:	9a32                	add	s4,s4,a2
1c008fe6:	4ebd                	li	t4,15
1c008fe8:	03000f13          	li	t5,48
1c008fec:	00269793          	slli	a5,a3,0x2
1c008ff0:	01e6d593          	srli	a1,a3,0x1e
1c008ff4:	00251713          	slli	a4,a0,0x2
1c008ff8:	00d78633          	add	a2,a5,a3
1c008ffc:	8f4d                	or	a4,a4,a1
1c008ffe:	972a                	add	a4,a4,a0
1c009000:	00f637b3          	sltu	a5,a2,a5
1c009004:	97ba                	add	a5,a5,a4
1c009006:	0786                	slli	a5,a5,0x1
1c009008:	01f65713          	srli	a4,a2,0x1f
1c00900c:	8fd9                	or	a5,a5,a4
1c00900e:	01c7d713          	srli	a4,a5,0x1c
1c009012:	03070713          	addi	a4,a4,48 # 10000030 <ne16_infeat+0x2c>
1c009016:	2fd05463          	blez	t4,1c0092fe <pos_libc_prf+0xaf0>
1c00901a:	100005b7          	lui	a1,0x10000
1c00901e:	15fd                	addi	a1,a1,-1
1c009020:	00e300ab          	p.sb	a4,1(t1!)
1c009024:	1efd                	addi	t4,t4,-1
1c009026:	00161693          	slli	a3,a2,0x1
1c00902a:	00b7f533          	and	a0,a5,a1
1c00902e:	fa6a1fe3          	bne	s4,t1,1c008fec <pos_libc_prf+0x7de>
1c009032:	8652                	mv	a2,s4
1c009034:	0c0e1163          	bnez	t3,1c0090f6 <pos_libc_prf+0x8e8>
1c009038:	c054b6b3          	p.bclr	a3,s1,0,5
1c00903c:	04500593          	li	a1,69
1c009040:	02b69963          	bne	a3,a1,1c009072 <pos_libc_prf+0x864>
1c009044:	87a6                	mv	a5,s1
1c009046:	00f60023          	sb	a5,0(a2)
1c00904a:	5e084d63          	bltz	a6,1c009644 <pos_libc_prf+0xe36>
1c00904e:	02b00793          	li	a5,43
1c009052:	00f600a3          	sb	a5,1(a2)
1c009056:	47a9                	li	a5,10
1c009058:	02f846b3          	div	a3,a6,a5
1c00905c:	0611                	addi	a2,a2,4
1c00905e:	02f867b3          	rem	a5,a6,a5
1c009062:	03068693          	addi	a3,a3,48 # 8000030 <__l1_heap_size+0x7ff0960>
1c009066:	fed60f23          	sb	a3,-2(a2)
1c00906a:	03078793          	addi	a5,a5,48
1c00906e:	fef60fa3          	sb	a5,-1(a2)
1c009072:	00060023          	sb	zero,0(a2)
1c009076:	419604b3          	sub	s1,a2,s9
1c00907a:	46d2                	lw	a3,20(sp)
1c00907c:	4762                	lw	a4,24(sp)
1c00907e:	8ed9                	or	a3,a3,a4
1c009080:	c636                	sw	a3,12(sp)
1c009082:	2a069463          	bnez	a3,1c00932a <pos_libc_prf+0xb1c>
1c009086:	02414683          	lbu	a3,36(sp)
1c00908a:	02d00793          	li	a5,45
1c00908e:	28f68e63          	beq	a3,a5,1c00932a <pos_libc_prf+0xb1c>
1c009092:	0c800793          	li	a5,200
1c009096:	9c97dde3          	ble	s1,a5,1c008a70 <pos_libc_prf+0x262>
1c00909a:	547d                	li	s0,-1
1c00909c:	fdeff06f          	j	1c00887a <pos_libc_prf+0x6c>
1c0090a0:	0305                	addi	t1,t1,1
1c0090a2:	00269793          	slli	a5,a3,0x2
1c0090a6:	01e6d893          	srli	a7,a3,0x1e
1c0090aa:	00251713          	slli	a4,a0,0x2
1c0090ae:	00d785b3          	add	a1,a5,a3
1c0090b2:	00e8e733          	or	a4,a7,a4
1c0090b6:	972a                	add	a4,a4,a0
1c0090b8:	00f5b7b3          	sltu	a5,a1,a5
1c0090bc:	97ba                	add	a5,a5,a4
1c0090be:	0786                	slli	a5,a5,0x1
1c0090c0:	01f5d713          	srli	a4,a1,0x1f
1c0090c4:	8fd9                	or	a5,a5,a4
1c0090c6:	01c7d893          	srli	a7,a5,0x1c
1c0090ca:	03000713          	li	a4,48
1c0090ce:	01d05c63          	blez	t4,1c0090e6 <pos_libc_prf+0x8d8>
1c0090d2:	00159693          	slli	a3,a1,0x1
1c0090d6:	100005b7          	lui	a1,0x10000
1c0090da:	15fd                	addi	a1,a1,-1
1c0090dc:	03088713          	addi	a4,a7,48
1c0090e0:	1efd                	addi	t4,t4,-1
1c0090e2:	00b7f533          	and	a0,a5,a1
1c0090e6:	fee30fa3          	sb	a4,-1(t1)
1c0090ea:	fa661be3          	bne	a2,t1,1c0090a0 <pos_libc_prf+0x892>
1c0090ee:	014f8633          	add	a2,t6,s4
1c0090f2:	f80e00e3          	beqz	t3,1c009072 <pos_libc_prf+0x864>
1c0090f6:	03000513          	li	a0,48
1c0090fa:	a011                	j	1c0090fe <pos_libc_prf+0x8f0>
1c0090fc:	8636                	mv	a2,a3
1c0090fe:	fff60693          	addi	a3,a2,-1
1c009102:	0006c583          	lbu	a1,0(a3)
1c009106:	fea58be3          	beq	a1,a0,1c0090fc <pos_libc_prf+0x8ee>
1c00910a:	02e00513          	li	a0,46
1c00910e:	f2a595e3          	bne	a1,a0,1c009038 <pos_libc_prf+0x82a>
1c009112:	8636                	mv	a2,a3
1c009114:	b715                	j	1c009038 <pos_libc_prf+0x82a>
1c009116:	00f680ab          	p.sb	a5,1(a3!)
1c00911a:	8c051ce3          	bnez	a0,1c0089f2 <pos_libc_prf+0x1e4>
1c00911e:	b8c5                	j	1c008a0e <pos_libc_prf+0x200>
1c009120:	8dba                	mv	s11,a4
1c009122:	f34ff06f          	j	1c008856 <pos_libc_prf+0x48>
1c009126:	77e1                	lui	a5,0xffff8
1c009128:	8307c793          	xori	a5,a5,-2000
1c00912c:	02610693          	addi	a3,sp,38
1c009130:	000c2583          	lw	a1,0(s8)
1c009134:	02f11223          	sh	a5,36(sp)
1c009138:	0c11                	addi	s8,s8,4
1c00913a:	87b6                	mv	a5,a3
1c00913c:	48a5                	li	a7,9
1c00913e:	f645b633          	p.bclr	a2,a1,27,4
1c009142:	0ff67713          	andi	a4,a2,255
1c009146:	03070513          	addi	a0,a4,48
1c00914a:	8191                	srli	a1,a1,0x4
1c00914c:	05770713          	addi	a4,a4,87
1c009150:	06c8e863          	bltu	a7,a2,1c0091c0 <pos_libc_prf+0x9b2>
1c009154:	00a780ab          	p.sb	a0,1(a5!) # ffff8001 <pulp__FC+0xffff8002>
1c009158:	f1fd                	bnez	a1,1c00913e <pos_libc_prf+0x930>
1c00915a:	40d78733          	sub	a4,a5,a3
1c00915e:	461d                	li	a2,7
1c009160:	02e64563          	blt	a2,a4,1c00918a <pos_libc_prf+0x97c>
1c009164:	1998                	addi	a4,sp,240
1c009166:	40e78533          	sub	a0,a5,a4
1c00916a:	40f68633          	sub	a2,a3,a5
1c00916e:	0cb50513          	addi	a0,a0,203
1c009172:	4821                	li	a6,8
1c009174:	03000593          	li	a1,48
1c009178:	0621                	addi	a2,a2,8
1c00917a:	5aa84263          	blt	a6,a0,1c00971e <pos_libc_prf+0xf10>
1c00917e:	004640fb          	lp.setup	x1,a2,1c009186 <pos_libc_prf+0x978>
1c009182:	00b780ab          	p.sb	a1,1(a5!)
1c009186:	40d78733          	sub	a4,a5,a3
1c00918a:	fe078fab          	p.sb	zero,-1(a5!)
1c00918e:	00f6fc63          	bleu	a5,a3,1c0091a6 <pos_libc_prf+0x998>
1c009192:	0006c583          	lbu	a1,0(a3)
1c009196:	0007c603          	lbu	a2,0(a5)
1c00919a:	feb78fab          	p.sb	a1,-1(a5!)
1c00919e:	00c680ab          	p.sb	a2,1(a3!)
1c0091a2:	fef6e8e3          	bltu	a3,a5,1c009192 <pos_libc_prf+0x984>
1c0091a6:	00270493          	addi	s1,a4,2
1c0091aa:	0c800793          	li	a5,200
1c0091ae:	17fa2963          	p.beqimm	s4,-1,1c009320 <pos_libc_prf+0xb12>
1c0091b2:	9c97c1e3          	blt	a5,s1,1c008b74 <pos_libc_prf+0x366>
1c0091b6:	02000713          	li	a4,32
1c0091ba:	c602                	sw	zero,12(sp)
1c0091bc:	c83a                	sw	a4,16(sp)
1c0091be:	b84d                	j	1c008a70 <pos_libc_prf+0x262>
1c0091c0:	00e780ab          	p.sb	a4,1(a5!)
1c0091c4:	fdad                	bnez	a1,1c00913e <pos_libc_prf+0x930>
1c0091c6:	bf51                	j	1c00915a <pos_libc_prf+0x94c>
1c0091c8:	000c2783          	lw	a5,0(s8)
1c0091cc:	0c11                	addi	s8,s8,4
1c0091ce:	01b7a023          	sw	s11,0(a5)
1c0091d2:	e84ff06f          	j	1c008856 <pos_libc_prf+0x48>
1c0091d6:	06900693          	li	a3,105
1c0091da:	12d49863          	bne	s1,a3,1c00930a <pos_libc_prf+0xafc>
1c0091de:	000c2503          	lw	a0,0(s8)
1c0091e2:	0c11                	addi	s8,s8,4
1c0091e4:	34054d63          	bltz	a0,1c00953e <pos_libc_prf+0xd30>
1c0091e8:	4652                	lw	a2,20(sp)
1c0091ea:	86aa                	mv	a3,a0
1c0091ec:	2e061963          	bnez	a2,1c0094de <pos_libc_prf+0xcd0>
1c0091f0:	4762                	lw	a4,24(sp)
1c0091f2:	87e6                	mv	a5,s9
1c0091f4:	c719                	beqz	a4,1c009202 <pos_libc_prf+0x9f4>
1c0091f6:	02000793          	li	a5,32
1c0091fa:	02f10223          	sb	a5,36(sp)
1c0091fe:	02510793          	addi	a5,sp,37
1c009202:	873e                	mv	a4,a5
1c009204:	45a9                	li	a1,10
1c009206:	02b6f633          	remu	a2,a3,a1
1c00920a:	02b6d6b3          	divu	a3,a3,a1
1c00920e:	03060613          	addi	a2,a2,48
1c009212:	00c700ab          	p.sb	a2,1(a4!)
1c009216:	fae5                	bnez	a3,1c009206 <pos_libc_prf+0x9f8>
1c009218:	40f706b3          	sub	a3,a4,a5
1c00921c:	0146dc63          	ble	s4,a3,1c009234 <pos_libc_prf+0xa26>
1c009220:	40e786b3          	sub	a3,a5,a4
1c009224:	03000613          	li	a2,48
1c009228:	96d2                	add	a3,a3,s4
1c00922a:	0046c0fb          	lp.setup	x1,a3,1c009232 <pos_libc_prf+0xa24>
1c00922e:	00c700ab          	p.sb	a2,1(a4!)
1c009232:	0001                	nop
1c009234:	86ba                	mv	a3,a4
1c009236:	fe068fab          	p.sb	zero,-1(a3!)
1c00923a:	00d7fc63          	bleu	a3,a5,1c009252 <pos_libc_prf+0xa44>
1c00923e:	0007c583          	lbu	a1,0(a5)
1c009242:	0006c603          	lbu	a2,0(a3)
1c009246:	feb68fab          	p.sb	a1,-1(a3!)
1c00924a:	00c780ab          	p.sb	a2,1(a5!)
1c00924e:	fed7e8e3          	bltu	a5,a3,1c00923e <pos_libc_prf+0xa30>
1c009252:	47d2                	lw	a5,20(sp)
1c009254:	4662                	lw	a2,24(sp)
1c009256:	419704b3          	sub	s1,a4,s9
1c00925a:	8fd1                	or	a5,a5,a2
1c00925c:	c63e                	sw	a5,12(sp)
1c00925e:	e399                	bnez	a5,1c009264 <pos_libc_prf+0xa56>
1c009260:	817d                	srli	a0,a0,0x1f
1c009262:	c62a                	sw	a0,12(sp)
1c009264:	e3fa27e3          	p.beqimm	s4,-1,1c009092 <pos_libc_prf+0x884>
1c009268:	0c800793          	li	a5,200
1c00926c:	9097c4e3          	blt	a5,s1,1c008b74 <pos_libc_prf+0x366>
1c009270:	02000713          	li	a4,32
1c009274:	c83a                	sw	a4,16(sp)
1c009276:	ffaff06f          	j	1c008a70 <pos_libc_prf+0x262>
1c00927a:	000c2783          	lw	a5,0(s8)
1c00927e:	020102a3          	sb	zero,37(sp)
1c009282:	0c11                	addi	s8,s8,4
1c009284:	02f10223          	sb	a5,36(sp)
1c009288:	4485                	li	s1,1
1c00928a:	f16ff06f          	j	1c0089a0 <pos_libc_prf+0x192>
1c00928e:	000c2683          	lw	a3,0(s8)
1c009292:	87e6                	mv	a5,s9
1c009294:	0c11                	addi	s8,s8,4
1c009296:	45a9                	li	a1,10
1c009298:	02b6f733          	remu	a4,a3,a1
1c00929c:	02b6d6b3          	divu	a3,a3,a1
1c0092a0:	03070713          	addi	a4,a4,48
1c0092a4:	00e780ab          	p.sb	a4,1(a5!)
1c0092a8:	fae5                	bnez	a3,1c009298 <pos_libc_prf+0xa8a>
1c0092aa:	419784b3          	sub	s1,a5,s9
1c0092ae:	0144dd63          	ble	s4,s1,1c0092c8 <pos_libc_prf+0xaba>
1c0092b2:	40fc86b3          	sub	a3,s9,a5
1c0092b6:	03000613          	li	a2,48
1c0092ba:	96d2                	add	a3,a3,s4
1c0092bc:	0046c0fb          	lp.setup	x1,a3,1c0092c4 <pos_libc_prf+0xab6>
1c0092c0:	00c780ab          	p.sb	a2,1(a5!)
1c0092c4:	419784b3          	sub	s1,a5,s9
1c0092c8:	fe078fab          	p.sb	zero,-1(a5!)
1c0092cc:	00fcfd63          	bleu	a5,s9,1c0092e6 <pos_libc_prf+0xad8>
1c0092d0:	86e6                	mv	a3,s9
1c0092d2:	0006c603          	lbu	a2,0(a3)
1c0092d6:	0007c703          	lbu	a4,0(a5)
1c0092da:	fec78fab          	p.sb	a2,-1(a5!)
1c0092de:	00e680ab          	p.sb	a4,1(a3!)
1c0092e2:	fef6e8e3          	bltu	a3,a5,1c0092d2 <pos_libc_prf+0xac4>
1c0092e6:	0c800793          	li	a5,200
1c0092ea:	03fa2b63          	p.beqimm	s4,-1,1c009320 <pos_libc_prf+0xb12>
1c0092ee:	8897c3e3          	blt	a5,s1,1c008b74 <pos_libc_prf+0x366>
1c0092f2:	02000693          	li	a3,32
1c0092f6:	c602                	sw	zero,12(sp)
1c0092f8:	c836                	sw	a3,16(sp)
1c0092fa:	f76ff06f          	j	1c008a70 <pos_libc_prf+0x262>
1c0092fe:	01e300ab          	p.sb	t5,1(t1!)
1c009302:	ce6a15e3          	bne	s4,t1,1c008fec <pos_libc_prf+0x7de>
1c009306:	8652                	mv	a2,s4
1c009308:	b335                	j	1c009034 <pos_libc_prf+0x826>
1c00930a:	0c800693          	li	a3,200
1c00930e:	d496d463          	ble	s1,a3,1c008856 <pos_libc_prf+0x48>
1c009312:	547d                	li	s0,-1
1c009314:	d66ff06f          	j	1c00887a <pos_libc_prf+0x6c>
1c009318:	e60a5b63          	bgez	s4,1c00898e <pos_libc_prf+0x180>
1c00931c:	e76ff06f          	j	1c008992 <pos_libc_prf+0x184>
1c009320:	8497cae3          	blt	a5,s1,1c008b74 <pos_libc_prf+0x366>
1c009324:	c602                	sw	zero,12(sp)
1c009326:	f4aff06f          	j	1c008a70 <pos_libc_prf+0x262>
1c00932a:	0c800793          	li	a5,200
1c00932e:	8497c3e3          	blt	a5,s1,1c008b74 <pos_libc_prf+0x366>
1c009332:	4685                	li	a3,1
1c009334:	c636                	sw	a3,12(sp)
1c009336:	f3aff06f          	j	1c008a70 <pos_libc_prf+0x262>
1c00933a:	409909b3          	sub	s3,s2,s1
1c00933e:	00148613          	addi	a2,s1,1
1c009342:	85e6                	mv	a1,s9
1c009344:	013c8533          	add	a0,s9,s3
1c009348:	9e2ff0ef          	jal	ra,1c00852a <memmove>
1c00934c:	46c2                	lw	a3,16(sp)
1c00934e:	02000793          	li	a5,32
1c009352:	32f68b63          	beq	a3,a5,1c009688 <pos_libc_prf+0xe7a>
1c009356:	4732                	lw	a4,12(sp)
1c009358:	84ca                	mv	s1,s2
1c00935a:	99ba                	add	s3,s3,a4
1c00935c:	ff375b63          	ble	s3,a4,1c008b52 <pos_libc_prf+0x344>
1c009360:	46b2                	lw	a3,12(sp)
1c009362:	4595                	li	a1,5
1c009364:	00dc87b3          	add	a5,s9,a3
1c009368:	40f007b3          	neg	a5,a5
1c00936c:	fa27b7b3          	p.bclr	a5,a5,29,2
1c009370:	00378613          	addi	a2,a5,3
1c009374:	fff98693          	addi	a3,s3,-1
1c009378:	04b67633          	p.maxu	a2,a2,a1
1c00937c:	8e99                	sub	a3,a3,a4
1c00937e:	40e985b3          	sub	a1,s3,a4
1c009382:	06c6e763          	bltu	a3,a2,1c0093f0 <pos_libc_prf+0xbe2>
1c009386:	863a                	mv	a2,a4
1c009388:	cf95                	beqz	a5,1c0093c4 <pos_libc_prf+0xbb6>
1c00938a:	1990                	addi	a2,sp,240
1c00938c:	00e606b3          	add	a3,a2,a4
1c009390:	4742                	lw	a4,16(sp)
1c009392:	f2e68a23          	sb	a4,-204(a3)
1c009396:	46b2                	lw	a3,12(sp)
1c009398:	00168613          	addi	a2,a3,1
1c00939c:	0217a463          	p.beqimm	a5,1,1c0093c4 <pos_libc_prf+0xbb6>
1c0093a0:	86ba                	mv	a3,a4
1c0093a2:	1998                	addi	a4,sp,240
1c0093a4:	963a                	add	a2,a2,a4
1c0093a6:	4732                	lw	a4,12(sp)
1c0093a8:	f2d60a23          	sb	a3,-204(a2)
1c0093ac:	00270613          	addi	a2,a4,2
1c0093b0:	0037ba63          	p.bneimm	a5,3,1c0093c4 <pos_libc_prf+0xbb6>
1c0093b4:	8736                	mv	a4,a3
1c0093b6:	1994                	addi	a3,sp,240
1c0093b8:	9636                	add	a2,a2,a3
1c0093ba:	46b2                	lw	a3,12(sp)
1c0093bc:	f2e60a23          	sb	a4,-204(a2)
1c0093c0:	00368613          	addi	a2,a3,3
1c0093c4:	4732                	lw	a4,12(sp)
1c0093c6:	8d9d                	sub	a1,a1,a5
1c0093c8:	0025d693          	srli	a3,a1,0x2
1c0093cc:	97ba                	add	a5,a5,a4
1c0093ce:	4742                	lw	a4,16(sp)
1c0093d0:	97e6                	add	a5,a5,s9
1c0093d2:	00e05557          	pv.add.sc.b	a0,zero,a4
1c0093d6:	34068663          	beqz	a3,1c009722 <pos_libc_prf+0xf14>
1c0093da:	0046c0fb          	lp.setup	x1,a3,1c0093e2 <pos_libc_prf+0xbd4>
1c0093de:	00a7a22b          	p.sw	a0,4(a5!)
1c0093e2:	0001                	nop
1c0093e4:	c205b7b3          	p.bclr	a5,a1,1,0
1c0093e8:	963e                	add	a2,a2,a5
1c0093ea:	c632                	sw	a2,12(sp)
1c0093ec:	f6b78263          	beq	a5,a1,1c008b50 <pos_libc_prf+0x342>
1c0093f0:	46b2                	lw	a3,12(sp)
1c0093f2:	4742                	lw	a4,16(sp)
1c0093f4:	198c                	addi	a1,sp,240
1c0093f6:	00d587b3          	add	a5,a1,a3
1c0093fa:	f2e78a23          	sb	a4,-204(a5)
1c0093fe:	00168793          	addi	a5,a3,1
1c009402:	f537d763          	ble	s3,a5,1c008b50 <pos_libc_prf+0x342>
1c009406:	97ae                	add	a5,a5,a1
1c009408:	f2e78a23          	sb	a4,-204(a5)
1c00940c:	00268793          	addi	a5,a3,2
1c009410:	f537d063          	ble	s3,a5,1c008b50 <pos_libc_prf+0x342>
1c009414:	97ae                	add	a5,a5,a1
1c009416:	f2e78a23          	sb	a4,-204(a5)
1c00941a:	00368793          	addi	a5,a3,3
1c00941e:	f337d963          	ble	s3,a5,1c008b50 <pos_libc_prf+0x342>
1c009422:	97ae                	add	a5,a5,a1
1c009424:	f2e78a23          	sb	a4,-204(a5)
1c009428:	00468793          	addi	a5,a3,4
1c00942c:	f337d263          	ble	s3,a5,1c008b50 <pos_libc_prf+0x342>
1c009430:	97ae                	add	a5,a5,a1
1c009432:	f2e78a23          	sb	a4,-204(a5)
1c009436:	00568a93          	addi	s5,a3,5
1c00943a:	f13adb63          	ble	s3,s5,1c008b50 <pos_libc_prf+0x342>
1c00943e:	9aae                	add	s5,s5,a1
1c009440:	f2ea8a23          	sb	a4,-204(s5)
1c009444:	84ca                	mv	s1,s2
1c009446:	f0cff06f          	j	1c008b52 <pos_libc_prf+0x344>
1c00944a:	4301                	li	t1,0
1c00944c:	8666                	mv	a2,s9
1c00944e:	da0ff06f          	j	1c0089ee <pos_libc_prf+0x1e0>
1c009452:	02414783          	lbu	a5,36(sp)
1c009456:	1054                	addi	a3,sp,36
1c009458:	4665                	li	a2,25
1c00945a:	de078b63          	beqz	a5,1c008a50 <pos_libc_prf+0x242>
1c00945e:	fe078593          	addi	a1,a5,-32
1c009462:	f9f78793          	addi	a5,a5,-97
1c009466:	0ff7f793          	andi	a5,a5,255
1c00946a:	00f66963          	bltu	a2,a5,1c00947c <pos_libc_prf+0xc6e>
1c00946e:	00b680ab          	p.sb	a1,1(a3!)
1c009472:	0006c783          	lbu	a5,0(a3)
1c009476:	f7e5                	bnez	a5,1c00945e <pos_libc_prf+0xc50>
1c009478:	dd8ff06f          	j	1c008a50 <pos_libc_prf+0x242>
1c00947c:	0685                	addi	a3,a3,1
1c00947e:	0006c783          	lbu	a5,0(a3)
1c009482:	fff1                	bnez	a5,1c00945e <pos_libc_prf+0xc50>
1c009484:	dccff06f          	j	1c008a50 <pos_libc_prf+0x242>
1c009488:	ee97c663          	blt	a5,s1,1c008b74 <pos_libc_prf+0x366>
1c00948c:	8c46                	mv	s8,a7
1c00948e:	de2ff06f          	j	1c008a70 <pos_libc_prf+0x262>
1c009492:	020102a3          	sb	zero,37(sp)
1c009496:	8c42                	mv	s8,a6
1c009498:	44b2                	lw	s1,12(sp)
1c00949a:	d1fa2363          	p.beqimm	s4,-1,1c0089a0 <pos_libc_prf+0x192>
1c00949e:	02000693          	li	a3,32
1c0094a2:	c836                	sw	a3,16(sp)
1c0094a4:	cfcff06f          	j	1c0089a0 <pos_libc_prf+0x192>
1c0094a8:	8566                	mv	a0,s9
1c0094aa:	86e6                	mv	a3,s9
1c0094ac:	fb6ff06f          	j	1c008c62 <pos_libc_prf+0x454>
1c0094b0:	4732                	lw	a4,12(sp)
1c0094b2:	4e01                	li	t3,0
1c0094b4:	e319                	bnez	a4,1c0094ba <pos_libc_prf+0xcac>
1c0094b6:	01403e33          	snez	t3,s4
1c0094ba:	5675                	li	a2,-3
1c0094bc:	001a0693          	addi	a3,s4,1
1c0094c0:	00c84463          	blt	a6,a2,1c0094c8 <pos_libc_prf+0xcba>
1c0094c4:	1706d063          	ble	a6,a3,1c009624 <pos_libc_prf+0xe16>
1c0094c8:	47c1                	li	a5,16
1c0094ca:	04f6cf33          	p.min	t5,a3,a5
1c0094ce:	06700693          	li	a3,103
1c0094d2:	1f7d                	addi	t5,t5,-1
1c0094d4:	1ed48a63          	beq	s1,a3,1c0096c8 <pos_libc_prf+0xeba>
1c0094d8:	04500493          	li	s1,69
1c0094dc:	b2d9                	j	1c008ea2 <pos_libc_prf+0x694>
1c0094de:	02b00793          	li	a5,43
1c0094e2:	02f10223          	sb	a5,36(sp)
1c0094e6:	02510793          	addi	a5,sp,37
1c0094ea:	bb21                	j	1c009202 <pos_libc_prf+0x9f4>
1c0094ec:	8666                	mv	a2,s9
1c0094ee:	1a084063          	bltz	a6,1c00968e <pos_libc_prf+0xe80>
1c0094f2:	8ecd                	or	a3,a3,a1
1c0094f4:	fbf48793          	addi	a5,s1,-65
1c0094f8:	00360713          	addi	a4,a2,3
1c0094fc:	14069b63          	bnez	a3,1c009652 <pos_libc_prf+0xe44>
1c009500:	46e5                	li	a3,25
1c009502:	1af6e563          	bltu	a3,a5,1c0096ac <pos_libc_prf+0xe9e>
1c009506:	6795                	lui	a5,0x5
1c009508:	e4978793          	addi	a5,a5,-439 # 4e49 <__cluster_text_size+0x4e49>
1c00950c:	00f61023          	sh	a5,0(a2)
1c009510:	04600793          	li	a5,70
1c009514:	00f60123          	sb	a5,2(a2)
1c009518:	000601a3          	sb	zero,3(a2)
1c00951c:	419704b3          	sub	s1,a4,s9
1c009520:	bea9                	j	1c00907a <pos_libc_prf+0x86c>
1c009522:	46d2                	lw	a3,20(sp)
1c009524:	14068463          	beqz	a3,1c00966c <pos_libc_prf+0xe5e>
1c009528:	02b00693          	li	a3,43
1c00952c:	02d10223          	sb	a3,36(sp)
1c009530:	02510893          	addi	a7,sp,37
1c009534:	4801                	li	a6,0
1c009536:	4501                	li	a0,0
1c009538:	4681                	li	a3,0
1c00953a:	4301                	li	t1,0
1c00953c:	ba09                	j	1c008e4e <pos_libc_prf+0x640>
1c00953e:	02d00793          	li	a5,45
1c009542:	02f10223          	sb	a5,36(sp)
1c009546:	800007b7          	lui	a5,0x80000
1c00954a:	1af50963          	beq	a0,a5,1c0096fc <pos_libc_prf+0xeee>
1c00954e:	40a006b3          	neg	a3,a0
1c009552:	02510793          	addi	a5,sp,37
1c009556:	b175                	j	1c009202 <pos_libc_prf+0x9f4>
1c009558:	4a19                	li	s4,6
1c00955a:	92d495e3          	bne	s1,a3,1c008e84 <pos_libc_prf+0x676>
1c00955e:	46b2                	lw	a3,12(sp)
1c009560:	57f5                	li	a5,-3
1c009562:	0016ce13          	xori	t3,a3,1
1c009566:	14f85d63          	ble	a5,a6,1c0096c0 <pos_libc_prf+0xeb2>
1c00956a:	06500493          	li	s1,101
1c00956e:	4f19                	li	t5,6
1c009570:	ba0d                	j	1c008ea2 <pos_libc_prf+0x694>
1c009572:	e097c163          	blt	a5,s1,1c008b74 <pos_libc_prf+0x366>
1c009576:	8c42                	mv	s8,a6
1c009578:	c602                	sw	zero,12(sp)
1c00957a:	cf6ff06f          	j	1c008a70 <pos_libc_prf+0x262>
1c00957e:	aa0a0be3          	beqz	s4,1c009034 <pos_libc_prf+0x826>
1c009582:	02e00593          	li	a1,46
1c009586:	00288613          	addi	a2,a7,2
1c00958a:	00b880a3          	sb	a1,1(a7)
1c00958e:	bc91                	j	1c008fe2 <pos_libc_prf+0x7d4>
1c009590:	17005b63          	blez	a6,1c009706 <pos_libc_prf+0xef8>
1c009594:	9846                	add	a6,a6,a7
1c009596:	4ec1                	li	t4,16
1c009598:	03000f13          	li	t5,48
1c00959c:	00269793          	slli	a5,a3,0x2
1c0095a0:	01e6d593          	srli	a1,a3,0x1e
1c0095a4:	00251713          	slli	a4,a0,0x2
1c0095a8:	00d78633          	add	a2,a5,a3
1c0095ac:	8f4d                	or	a4,a4,a1
1c0095ae:	972a                	add	a4,a4,a0
1c0095b0:	00f637b3          	sltu	a5,a2,a5
1c0095b4:	97ba                	add	a5,a5,a4
1c0095b6:	0786                	slli	a5,a5,0x1
1c0095b8:	01f65713          	srli	a4,a2,0x1f
1c0095bc:	8fd9                	or	a5,a5,a4
1c0095be:	01c7d713          	srli	a4,a5,0x1c
1c0095c2:	03070713          	addi	a4,a4,48
1c0095c6:	05d05963          	blez	t4,1c009618 <pos_libc_prf+0xe0a>
1c0095ca:	00e880ab          	p.sb	a4,1(a7!)
1c0095ce:	10000737          	lui	a4,0x10000
1c0095d2:	177d                	addi	a4,a4,-1
1c0095d4:	1efd                	addi	t4,t4,-1
1c0095d6:	00161693          	slli	a3,a2,0x1
1c0095da:	00e7f533          	and	a0,a5,a4
1c0095de:	fb181fe3          	bne	a6,a7,1c00959c <pos_libc_prf+0xd8e>
1c0095e2:	8642                	mv	a2,a6
1c0095e4:	4801                	li	a6,0
1c0095e6:	47b2                	lw	a5,12(sp)
1c0095e8:	e399                	bnez	a5,1c0095ee <pos_libc_prf+0xde0>
1c0095ea:	b00a04e3          	beqz	s4,1c0090f2 <pos_libc_prf+0x8e4>
1c0095ee:	00160f93          	addi	t6,a2,1
1c0095f2:	001a0593          	addi	a1,s4,1
1c0095f6:	02e00893          	li	a7,46
1c0095fa:	01160023          	sb	a7,0(a2)
1c0095fe:	837e                	mv	t1,t6
1c009600:	962e                	add	a2,a2,a1
1c009602:	03000593          	li	a1,48
1c009606:	aec304e3          	beq	t1,a2,1c0090ee <pos_libc_prf+0x8e0>
1c00960a:	0305                	addi	t1,t1,1
1c00960c:	a8080be3          	beqz	a6,1c0090a2 <pos_libc_prf+0x894>
1c009610:	feb30fa3          	sb	a1,-1(t1)
1c009614:	0805                	addi	a6,a6,1
1c009616:	bfc5                	j	1c009606 <pos_libc_prf+0xdf8>
1c009618:	01e880ab          	p.sb	t5,1(a7!)
1c00961c:	f91810e3          	bne	a6,a7,1c00959c <pos_libc_prf+0xd8e>
1c009620:	b7c9                	j	1c0095e2 <pos_libc_prf+0xdd4>
1c009622:	4e01                	li	t3,0
1c009624:	014807b3          	add	a5,a6,s4
1c009628:	0e07c563          	bltz	a5,1c009712 <pos_libc_prf+0xf04>
1c00962c:	4641                	li	a2,16
1c00962e:	04c7cf33          	p.min	t5,a5,a2
1c009632:	1f7d                	addi	t5,t5,-1
1c009634:	06600493          	li	s1,102
1c009638:	860795e3          	bnez	a5,1c008ea2 <pos_libc_prf+0x694>
1c00963c:	4581                	li	a1,0
1c00963e:	080006b7          	lui	a3,0x8000
1c009642:	b0e9                	j	1c008f0c <pos_libc_prf+0x6fe>
1c009644:	02d00793          	li	a5,45
1c009648:	41000833          	neg	a6,a6
1c00964c:	00f600a3          	sb	a5,1(a2)
1c009650:	b419                	j	1c009056 <pos_libc_prf+0x848>
1c009652:	46e5                	li	a3,25
1c009654:	06f6ee63          	bltu	a3,a5,1c0096d0 <pos_libc_prf+0xec2>
1c009658:	6791                	lui	a5,0x4
1c00965a:	14e78793          	addi	a5,a5,334 # 414e <__cluster_text_size+0x414e>
1c00965e:	00f61023          	sh	a5,0(a2)
1c009662:	04e00793          	li	a5,78
1c009666:	00f60123          	sb	a5,2(a2)
1c00966a:	b57d                	j	1c009518 <pos_libc_prf+0xd0a>
1c00966c:	47e2                	lw	a5,24(sp)
1c00966e:	cfc5                	beqz	a5,1c009726 <pos_libc_prf+0xf18>
1c009670:	02000693          	li	a3,32
1c009674:	02d10223          	sb	a3,36(sp)
1c009678:	02510893          	addi	a7,sp,37
1c00967c:	4801                	li	a6,0
1c00967e:	4501                	li	a0,0
1c009680:	4681                	li	a3,0
1c009682:	4301                	li	t1,0
1c009684:	fcaff06f          	j	1c008e4e <pos_libc_prf+0x640>
1c009688:	c602                	sw	zero,12(sp)
1c00968a:	4732                	lw	a4,12(sp)
1c00968c:	b9d1                	j	1c009360 <pos_libc_prf+0xb52>
1c00968e:	02d00613          	li	a2,45
1c009692:	02c10223          	sb	a2,36(sp)
1c009696:	02510613          	addi	a2,sp,37
1c00969a:	bda1                	j	1c0094f2 <pos_libc_prf+0xce4>
1c00969c:	02d00613          	li	a2,45
1c0096a0:	02c10223          	sb	a2,36(sp)
1c0096a4:	02510893          	addi	a7,sp,37
1c0096a8:	ec6ff06f          	j	1c008d6e <pos_libc_prf+0x560>
1c0096ac:	679d                	lui	a5,0x7
1c0096ae:	e6978793          	addi	a5,a5,-407 # 6e69 <__cluster_text_size+0x6e69>
1c0096b2:	00f61023          	sh	a5,0(a2)
1c0096b6:	06600793          	li	a5,102
1c0096ba:	00f60123          	sb	a5,2(a2)
1c0096be:	bda9                	j	1c009518 <pos_libc_prf+0xd0a>
1c0096c0:	479d                	li	a5,7
1c0096c2:	f707d1e3          	ble	a6,a5,1c009624 <pos_libc_prf+0xe16>
1c0096c6:	4f19                	li	t5,6
1c0096c8:	06500493          	li	s1,101
1c0096cc:	fd6ff06f          	j	1c008ea2 <pos_libc_prf+0x694>
1c0096d0:	6799                	lui	a5,0x6
1c0096d2:	16e78793          	addi	a5,a5,366 # 616e <__cluster_text_size+0x616e>
1c0096d6:	00f61023          	sh	a5,0(a2)
1c0096da:	06e00793          	li	a5,110
1c0096de:	00f60123          	sb	a5,2(a2)
1c0096e2:	bd1d                	j	1c009518 <pos_libc_prf+0xd0a>
1c0096e4:	47e2                	lw	a5,24(sp)
1c0096e6:	88e6                	mv	a7,s9
1c0096e8:	e8078363          	beqz	a5,1c008d6e <pos_libc_prf+0x560>
1c0096ec:	02000613          	li	a2,32
1c0096f0:	02c10223          	sb	a2,36(sp)
1c0096f4:	02510893          	addi	a7,sp,37
1c0096f8:	e76ff06f          	j	1c008d6e <pos_libc_prf+0x560>
1c0096fc:	800006b7          	lui	a3,0x80000
1c009700:	02510793          	addi	a5,sp,37
1c009704:	bcfd                	j	1c009202 <pos_libc_prf+0x9f4>
1c009706:	03000593          	li	a1,48
1c00970a:	00b88023          	sb	a1,0(a7)
1c00970e:	4ec1                	li	t4,16
1c009710:	bdd9                	j	1c0095e6 <pos_libc_prf+0xdd8>
1c009712:	06600493          	li	s1,102
1c009716:	b71d                	j	1c00963c <pos_libc_prf+0xe2e>
1c009718:	4685                	li	a3,1
1c00971a:	bc4ff06f          	j	1c008ade <pos_libc_prf+0x2d0>
1c00971e:	4605                	li	a2,1
1c009720:	bcb9                	j	1c00917e <pos_libc_prf+0x970>
1c009722:	4685                	li	a3,1
1c009724:	b95d                	j	1c0093da <pos_libc_prf+0xbcc>
1c009726:	88e6                	mv	a7,s9
1c009728:	bf91                	j	1c00967c <pos_libc_prf+0xe6e>

1c00972a <pos_init_start>:
1c00972a:	1141                	addi	sp,sp,-16
1c00972c:	c422                	sw	s0,8(sp)
1c00972e:	1c000437          	lui	s0,0x1c000
1c009732:	c606                	sw	ra,12(sp)
1c009734:	00840413          	addi	s0,s0,8 # 1c000008 <ctor_list>
1c009738:	c89fe0ef          	jal	ra,1c0083c0 <pos_soc_init>
1c00973c:	2279                	jal	1c0098ca <pos_irq_init>
1c00973e:	2ac1                	jal	1c00990e <pos_soc_event_init>
1c009740:	20e5                	jal	1c009828 <pos_allocs_init>
1c009742:	405c                	lw	a5,4(s0)
1c009744:	c791                	beqz	a5,1c009750 <pos_init_start+0x26>
1c009746:	0421                	addi	s0,s0,8
1c009748:	9782                	jalr	a5
1c00974a:	0044278b          	p.lw	a5,4(s0!)
1c00974e:	ffed                	bnez	a5,1c009748 <pos_init_start+0x1e>
1c009750:	888ff0ef          	jal	ra,1c0087d8 <pos_io_start>
1c009754:	300467f3          	csrrsi	a5,mstatus,8
1c009758:	f1402573          	csrr	a0,mhartid
1c00975c:	8515                	srai	a0,a0,0x5
1c00975e:	f2653533          	p.bclr	a0,a0,25,6
1c009762:	47fd                	li	a5,31
1c009764:	00f50a63          	beq	a0,a5,1c009778 <pos_init_start+0x4e>
1c009768:	4422                	lw	s0,8(sp)
1c00976a:	40b2                	lw	ra,12(sp)
1c00976c:	1c0085b7          	lui	a1,0x1c008
1c009770:	2d258593          	addi	a1,a1,722 # 1c0082d2 <main>
1c009774:	0141                	addi	sp,sp,16
1c009776:	a4b1                	j	1c0099c2 <cluster_start>
1c009778:	40b2                	lw	ra,12(sp)
1c00977a:	4422                	lw	s0,8(sp)
1c00977c:	0141                	addi	sp,sp,16
1c00977e:	8082                	ret

1c009780 <pos_init_stop>:
1c009780:	1141                	addi	sp,sp,-16
1c009782:	c422                	sw	s0,8(sp)
1c009784:	1c000437          	lui	s0,0x1c000
1c009788:	c606                	sw	ra,12(sp)
1c00978a:	01440413          	addi	s0,s0,20 # 1c000014 <dtor_list>
1c00978e:	84eff0ef          	jal	ra,1c0087dc <pos_io_stop>
1c009792:	405c                	lw	a5,4(s0)
1c009794:	c791                	beqz	a5,1c0097a0 <pos_init_stop+0x20>
1c009796:	0421                	addi	s0,s0,8
1c009798:	9782                	jalr	a5
1c00979a:	0044278b          	p.lw	a5,4(s0!)
1c00979e:	ffed                	bnez	a5,1c009798 <pos_init_stop+0x18>
1c0097a0:	40b2                	lw	ra,12(sp)
1c0097a2:	4422                	lw	s0,8(sp)
1c0097a4:	0141                	addi	sp,sp,16
1c0097a6:	8082                	ret

1c0097a8 <pos_alloc_init>:
1c0097a8:	00758793          	addi	a5,a1,7
1c0097ac:	c407b7b3          	p.bclr	a5,a5,2,0
1c0097b0:	40b785b3          	sub	a1,a5,a1
1c0097b4:	c11c                	sw	a5,0(a0)
1c0097b6:	8e0d                	sub	a2,a2,a1
1c0097b8:	00c05763          	blez	a2,1c0097c6 <pos_alloc_init+0x1e>
1c0097bc:	c4063633          	p.bclr	a2,a2,2,0
1c0097c0:	c390                	sw	a2,0(a5)
1c0097c2:	0007a223          	sw	zero,4(a5)
1c0097c6:	8082                	ret

1c0097c8 <pos_alloc>:
1c0097c8:	4110                	lw	a2,0(a0)
1c0097ca:	059d                	addi	a1,a1,7
1c0097cc:	c405b5b3          	p.bclr	a1,a1,2,0
1c0097d0:	ca31                	beqz	a2,1c009824 <pos_alloc+0x5c>
1c0097d2:	4218                	lw	a4,0(a2)
1c0097d4:	425c                	lw	a5,4(a2)
1c0097d6:	02b75963          	ble	a1,a4,1c009808 <pos_alloc+0x40>
1c0097da:	cb81                	beqz	a5,1c0097ea <pos_alloc+0x22>
1c0097dc:	4398                	lw	a4,0(a5)
1c0097de:	43d4                	lw	a3,4(a5)
1c0097e0:	00b75763          	ble	a1,a4,1c0097ee <pos_alloc+0x26>
1c0097e4:	863e                	mv	a2,a5
1c0097e6:	87b6                	mv	a5,a3
1c0097e8:	fbf5                	bnez	a5,1c0097dc <pos_alloc+0x14>
1c0097ea:	853e                	mv	a0,a5
1c0097ec:	8082                	ret
1c0097ee:	00b70a63          	beq	a4,a1,1c009802 <pos_alloc+0x3a>
1c0097f2:	00b78533          	add	a0,a5,a1
1c0097f6:	8f0d                	sub	a4,a4,a1
1c0097f8:	c118                	sw	a4,0(a0)
1c0097fa:	c154                	sw	a3,4(a0)
1c0097fc:	c248                	sw	a0,4(a2)
1c0097fe:	853e                	mv	a0,a5
1c009800:	8082                	ret
1c009802:	c254                	sw	a3,4(a2)
1c009804:	853e                	mv	a0,a5
1c009806:	8082                	ret
1c009808:	00e58b63          	beq	a1,a4,1c00981e <pos_alloc+0x56>
1c00980c:	00b606b3          	add	a3,a2,a1
1c009810:	8f0d                	sub	a4,a4,a1
1c009812:	c2dc                	sw	a5,4(a3)
1c009814:	c298                	sw	a4,0(a3)
1c009816:	87b2                	mv	a5,a2
1c009818:	c114                	sw	a3,0(a0)
1c00981a:	853e                	mv	a0,a5
1c00981c:	8082                	ret
1c00981e:	c11c                	sw	a5,0(a0)
1c009820:	87b2                	mv	a5,a2
1c009822:	b7e1                	j	1c0097ea <pos_alloc+0x22>
1c009824:	4781                	li	a5,0
1c009826:	b7d1                	j	1c0097ea <pos_alloc+0x22>

1c009828 <pos_allocs_init>:
1c009828:	1141                	addi	sp,sp,-16
1c00982a:	1c0015b7          	lui	a1,0x1c001
1c00982e:	c606                	sw	ra,12(sp)
1c009830:	e8c58793          	addi	a5,a1,-372 # 1c000e8c <__l2_priv0_end>
1c009834:	1c008637          	lui	a2,0x1c008
1c009838:	04c7cc63          	blt	a5,a2,1c009890 <pos_allocs_init+0x68>
1c00983c:	4581                	li	a1,0
1c00983e:	4601                	li	a2,0
1c009840:	1c001537          	lui	a0,0x1c001
1c009844:	e7c50513          	addi	a0,a0,-388 # 1c000e7c <pos_alloc_l2>
1c009848:	3785                	jal	1c0097a8 <pos_alloc_init>
1c00984a:	1c00a5b7          	lui	a1,0x1c00a
1c00984e:	ab058793          	addi	a5,a1,-1360 # 1c009ab0 <__l2_priv1_end>
1c009852:	1c010637          	lui	a2,0x1c010
1c009856:	02c7c963          	blt	a5,a2,1c009888 <pos_allocs_init+0x60>
1c00985a:	4581                	li	a1,0
1c00985c:	4601                	li	a2,0
1c00985e:	1c001537          	lui	a0,0x1c001
1c009862:	e8050513          	addi	a0,a0,-384 # 1c000e80 <pos_alloc_l2+0x4>
1c009866:	3789                	jal	1c0097a8 <pos_alloc_init>
1c009868:	100015b7          	lui	a1,0x10001
1c00986c:	40b2                	lw	ra,12(sp)
1c00986e:	93058793          	addi	a5,a1,-1744 # 10000930 <__l2_shared_end>
1c009872:	1c080637          	lui	a2,0x1c080
1c009876:	1c001537          	lui	a0,0x1c001
1c00987a:	8e1d                	sub	a2,a2,a5
1c00987c:	93058593          	addi	a1,a1,-1744
1c009880:	e8450513          	addi	a0,a0,-380 # 1c000e84 <pos_alloc_l2+0x8>
1c009884:	0141                	addi	sp,sp,16
1c009886:	b70d                	j	1c0097a8 <pos_alloc_init>
1c009888:	8e1d                	sub	a2,a2,a5
1c00988a:	ab058593          	addi	a1,a1,-1360
1c00988e:	bfc1                	j	1c00985e <pos_allocs_init+0x36>
1c009890:	8e1d                	sub	a2,a2,a5
1c009892:	e8c58593          	addi	a1,a1,-372
1c009896:	b76d                	j	1c009840 <pos_allocs_init+0x18>

1c009898 <alloc_init_l1>:
1c009898:	100017b7          	lui	a5,0x10001
1c00989c:	01651593          	slli	a1,a0,0x16
1c0098a0:	93078793          	addi	a5,a5,-1744 # 10000930 <__l2_shared_end>
1c0098a4:	95be                	add	a1,a1,a5
1c0098a6:	1c0017b7          	lui	a5,0x1c001
1c0098aa:	050a                	slli	a0,a0,0x2
1c0098ac:	663d                	lui	a2,0xf
1c0098ae:	e7878793          	addi	a5,a5,-392 # 1c000e78 <pos_alloc_l1>
1c0098b2:	6d060613          	addi	a2,a2,1744 # f6d0 <__l1_heap_size>
1c0098b6:	953e                	add	a0,a0,a5
1c0098b8:	bdc5                	j	1c0097a8 <pos_alloc_init>

1c0098ba <pi_l1_malloc>:
1c0098ba:	1c0017b7          	lui	a5,0x1c001
1c0098be:	050a                	slli	a0,a0,0x2
1c0098c0:	e7878793          	addi	a5,a5,-392 # 1c000e78 <pos_alloc_l1>
1c0098c4:	953e                	add	a0,a0,a5
1c0098c6:	b709                	j	1c0097c8 <pos_alloc>

1c0098c8 <__rt_handle_illegal_instr>:
1c0098c8:	8082                	ret

1c0098ca <pos_irq_init>:
1c0098ca:	f14027f3          	csrr	a5,mhartid
1c0098ce:	477d                	li	a4,31
1c0098d0:	ca5797b3          	p.extractu	a5,a5,5,5
1c0098d4:	00e78f63          	beq	a5,a4,1c0098f2 <pos_irq_init+0x28>
1c0098d8:	002047b7          	lui	a5,0x204
1c0098dc:	577d                	li	a4,-1
1c0098de:	cb98                	sw	a4,16(a5)
1c0098e0:	1c0087b7          	lui	a5,0x1c008
1c0098e4:	00078793          	mv	a5,a5
1c0098e8:	c007c7b3          	p.bset	a5,a5,0,0
1c0098ec:	30579073          	csrw	mtvec,a5
1c0098f0:	8082                	ret
1c0098f2:	1a10a7b7          	lui	a5,0x1a10a
1c0098f6:	577d                	li	a4,-1
1c0098f8:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa108ed8>
1c0098fc:	1c0087b7          	lui	a5,0x1c008
1c009900:	00078793          	mv	a5,a5
1c009904:	c007c7b3          	p.bset	a5,a5,0,0
1c009908:	30579073          	csrw	mtvec,a5
1c00990c:	8082                	ret

1c00990e <pos_soc_event_init>:
1c00990e:	1a1067b7          	lui	a5,0x1a106
1c009912:	577d                	li	a4,-1
1c009914:	00478693          	addi	a3,a5,4 # 1a106004 <__l2_shared_end+0xa1056d4>
1c009918:	c298                	sw	a4,0(a3)
1c00991a:	00878693          	addi	a3,a5,8
1c00991e:	c298                	sw	a4,0(a3)
1c009920:	00c78693          	addi	a3,a5,12
1c009924:	c298                	sw	a4,0(a3)
1c009926:	01078693          	addi	a3,a5,16
1c00992a:	c298                	sw	a4,0(a3)
1c00992c:	01478693          	addi	a3,a5,20
1c009930:	c298                	sw	a4,0(a3)
1c009932:	01878693          	addi	a3,a5,24
1c009936:	c298                	sw	a4,0(a3)
1c009938:	01c78693          	addi	a3,a5,28
1c00993c:	c298                	sw	a4,0(a3)
1c00993e:	02078793          	addi	a5,a5,32
1c009942:	c398                	sw	a4,0(a5)
1c009944:	8082                	ret

1c009946 <bench_cluster_forward>:
1c009946:	f14027f3          	csrr	a5,mhartid
1c00994a:	ca5797b3          	p.extractu	a5,a5,5,5
1c00994e:	02a78063          	beq	a5,a0,1c00996e <bench_cluster_forward+0x28>
1c009952:	1c0085b7          	lui	a1,0x1c008
1c009956:	1141                	addi	sp,sp,-16
1c009958:	2d258593          	addi	a1,a1,722 # 1c0082d2 <main>
1c00995c:	c422                	sw	s0,8(sp)
1c00995e:	c606                	sw	ra,12(sp)
1c009960:	842a                	mv	s0,a0
1c009962:	2085                	jal	1c0099c2 <cluster_start>
1c009964:	8522                	mv	a0,s0
1c009966:	4422                	lw	s0,8(sp)
1c009968:	40b2                	lw	ra,12(sp)
1c00996a:	0141                	addi	sp,sp,16
1c00996c:	a235                	j	1c009a98 <cluster_wait>
1c00996e:	4501                	li	a0,0
1c009970:	8082                	ret

1c009972 <cluster_entry_stub>:
1c009972:	1141                	addi	sp,sp,-16
1c009974:	c606                	sw	ra,12(sp)
1c009976:	002047b7          	lui	a5,0x204
1c00997a:	00070737          	lui	a4,0x70
1c00997e:	c798                	sw	a4,8(a5)
1c009980:	0ff00713          	li	a4,255
1c009984:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4b30>
1c009988:	00e7a023          	sw	a4,0(a5)
1c00998c:	00e7a623          	sw	a4,12(a5)
1c009990:	1c0017b7          	lui	a5,0x1c001
1c009994:	e887a783          	lw	a5,-376(a5) # 1c000e88 <cluster_entry>
1c009998:	9782                	jalr	a5
1c00999a:	f14027f3          	csrr	a5,mhartid
1c00999e:	f457b7b3          	p.bclr	a5,a5,26,5
1c0099a2:	eb89                	bnez	a5,1c0099b4 <cluster_entry_stub+0x42>
1c0099a4:	1c001737          	lui	a4,0x1c001
1c0099a8:	1c0017b7          	lui	a5,0x1c001
1c0099ac:	e6a72823          	sw	a0,-400(a4) # 1c000e70 <_edata>
1c0099b0:	e607aa23          	sw	zero,-396(a5) # 1c000e74 <cluster_running>
1c0099b4:	002047b7          	lui	a5,0x204
1c0099b8:	577d                	li	a4,-1
1c0099ba:	c3d8                	sw	a4,4(a5)
1c0099bc:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f4968>
1c0099c0:	a001                	j	1c0099c0 <cluster_entry_stub+0x4e>

1c0099c2 <cluster_start>:
1c0099c2:	1141                	addi	sp,sp,-16
1c0099c4:	1c0017b7          	lui	a5,0x1c001
1c0099c8:	c226                	sw	s1,4(sp)
1c0099ca:	84aa                	mv	s1,a0
1c0099cc:	4509                	li	a0,2
1c0099ce:	e8b7a423          	sw	a1,-376(a5) # 1c000e88 <cluster_entry>
1c0099d2:	c606                	sw	ra,12(sp)
1c0099d4:	c422                	sw	s0,8(sp)
1c0099d6:	941fe0ef          	jal	ra,1c008316 <pos_fll_init>
1c0099da:	8526                	mv	a0,s1
1c0099dc:	3d75                	jal	1c009898 <alloc_init_l1>
1c0099de:	04048413          	addi	s0,s1,64
1c0099e2:	00201737          	lui	a4,0x201
1c0099e6:	40070713          	addi	a4,a4,1024 # 201400 <__l1_heap_size+0x1f1d30>
1c0099ea:	045a                	slli	s0,s0,0x16
1c0099ec:	56fd                	li	a3,-1
1c0099ee:	f14027f3          	csrr	a5,mhartid
1c0099f2:	00d46723          	p.sw	a3,a4(s0)
1c0099f6:	ca5797b3          	p.extractu	a5,a5,5,5
1c0099fa:	477d                	li	a4,31
1c0099fc:	00e78f63          	beq	a5,a4,1c009a1a <cluster_start+0x58>
1c009a00:	002047b7          	lui	a5,0x204
1c009a04:	00070737          	lui	a4,0x70
1c009a08:	c798                	sw	a4,8(a5)
1c009a0a:	0ff00713          	li	a4,255
1c009a0e:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4b30>
1c009a12:	00e7a023          	sw	a4,0(a5)
1c009a16:	00e7a623          	sw	a4,12(a5)
1c009a1a:	8526                	mv	a0,s1
1c009a1c:	3db5                	jal	1c009898 <alloc_init_l1>
1c009a1e:	6591                	lui	a1,0x4
1c009a20:	8526                	mv	a0,s1
1c009a22:	3d61                	jal	1c0098ba <pi_l1_malloc>
1c009a24:	100017b7          	lui	a5,0x10001
1c009a28:	92a7a623          	sw	a0,-1748(a5) # 1000092c <cluster_stacks>
1c009a2c:	c12d                	beqz	a0,1c009a8e <cluster_start+0xcc>
1c009a2e:	1c001737          	lui	a4,0x1c001
1c009a32:	4685                	li	a3,1
1c009a34:	e6d72a23          	sw	a3,-396(a4) # 1c000e74 <cluster_running>
1c009a38:	002007b7          	lui	a5,0x200
1c009a3c:	1c008737          	lui	a4,0x1c008
1c009a40:	08070713          	addi	a4,a4,128 # 1c008080 <_start>
1c009a44:	04078693          	addi	a3,a5,64 # 200040 <__l1_heap_size+0x1f0970>
1c009a48:	00e466a3          	p.sw	a4,a3(s0)
1c009a4c:	04478693          	addi	a3,a5,68
1c009a50:	00e466a3          	p.sw	a4,a3(s0)
1c009a54:	04878693          	addi	a3,a5,72
1c009a58:	00e466a3          	p.sw	a4,a3(s0)
1c009a5c:	04c78693          	addi	a3,a5,76
1c009a60:	00e466a3          	p.sw	a4,a3(s0)
1c009a64:	05078693          	addi	a3,a5,80
1c009a68:	00e466a3          	p.sw	a4,a3(s0)
1c009a6c:	05478693          	addi	a3,a5,84
1c009a70:	00e466a3          	p.sw	a4,a3(s0)
1c009a74:	05878693          	addi	a3,a5,88
1c009a78:	00e466a3          	p.sw	a4,a3(s0)
1c009a7c:	05c78693          	addi	a3,a5,92
1c009a80:	00e466a3          	p.sw	a4,a3(s0)
1c009a84:	07a1                	addi	a5,a5,8
1c009a86:	0ff00713          	li	a4,255
1c009a8a:	00e467a3          	p.sw	a4,a5(s0)
1c009a8e:	40b2                	lw	ra,12(sp)
1c009a90:	4422                	lw	s0,8(sp)
1c009a92:	4492                	lw	s1,4(sp)
1c009a94:	0141                	addi	sp,sp,16
1c009a96:	8082                	ret

1c009a98 <cluster_wait>:
1c009a98:	1c001737          	lui	a4,0x1c001
1c009a9c:	e7470713          	addi	a4,a4,-396 # 1c000e74 <cluster_running>
1c009aa0:	431c                	lw	a5,0(a4)
1c009aa2:	fffd                	bnez	a5,1c009aa0 <cluster_wait+0x8>
1c009aa4:	1c0017b7          	lui	a5,0x1c001
1c009aa8:	e707a503          	lw	a0,-400(a5) # 1c000e70 <_edata>
1c009aac:	8082                	ret

1c009aae <_endtext>:
	...
make[1]: Leaving directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/neureka_ki32_ko8_ho6_wo6_fs1'
