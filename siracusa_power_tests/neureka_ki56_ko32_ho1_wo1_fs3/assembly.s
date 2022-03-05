make[1]: Entering directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/neureka_ki56_ko32_ho1_wo1_fs3'
/usr/scratch/fenga5/beppe/INSTALL-PULP/bin/riscv32-unknown-elf-objdump -Mmarch=rv32imcxgap9 -d /scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/neureka_ki56_ko32_ho1_wo1_fs3/build/ne16_test/ne16_test

/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/neureka_ki56_ko32_ho1_wo1_fs3/build/ne16_test/ne16_test:     file format elf32-littleriscv


Disassembly of section .vectors:

1c008000 <__irq_vector_base>:
1c008000:	0bf0106f          	j	1c0098be <__rt_handle_illegal_instr>
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
1c008084:	03b0106f          	j	1c0098be <__rt_handle_illegal_instr>

1c008088 <pos_no_irq_handler>:
1c008088:	30200073          	mret

1c00808c <pos_semihosting_call>:
1c00808c:	00100073          	ebreak
1c008090:	00008067          	ret

1c008094 <pe_start>:
1c008094:	f3ff8117          	auipc	sp,0xf3ff8
1c008098:	27010113          	addi	sp,sp,624 # 10000304 <cluster_stacks>
1c00809c:	00012103          	lw	sp,0(sp)
1c0080a0:	000011b7          	lui	gp,0x1
1c0080a4:	80018193          	addi	gp,gp,-2048 # 800 <__cluster_text_size+0x800>
1c0080a8:	00158593          	addi	a1,a1,1
1c0080ac:	02b180b3          	mul	ra,gp,a1
1c0080b0:	00110133          	add	sp,sp,ra
1c0080b4:	0b50106f          	j	1c009968 <cluster_entry_stub>

1c0080b8 <do_cl_boot>:
1c0080b8:	10200137          	lui	sp,0x10200
1c0080bc:	00100193          	li	gp,1
1c0080c0:	00000217          	auipc	tp,0x0
1c0080c4:	fc020213          	addi	tp,tp,-64 # 1c008080 <_start>
1c0080c8:	04412023          	sw	tp,64(sp) # 10200040 <__l2_shared_end+0x1ffd38>
1c0080cc:	00312423          	sw	gp,8(sp)

1c0080d0 <loop>:
1c0080d0:	1a10a137          	lui	sp,0x1a10a
1c0080d4:	80010113          	addi	sp,sp,-2048 # 1a109800 <__l2_shared_end+0xa1094f8>
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
1c0080f8:	ffffd297          	auipc	t0,0xffffd
1c0080fc:	87828293          	addi	t0,t0,-1928 # 1c004970 <_edata>
1c008100:	ffffd317          	auipc	t1,0xffffd
1c008104:	88c30313          	addi	t1,t1,-1908 # 1c00498c <__l2_priv0_end>
1c008108:	0002a023          	sw	zero,0(t0)
1c00810c:	0291                	addi	t0,t0,4
1c00810e:	fe62ede3          	bltu	t0,t1,1c008108 <_stext+0x24>
1c008112:	ffff8117          	auipc	sp,0xffff8
1c008116:	77e10113          	addi	sp,sp,1918 # 1c000890 <stack>
1c00811a:	606010ef          	jal	ra,1c009720 <pos_init_start>
1c00811e:	00000513          	li	a0,0
1c008122:	00000593          	li	a1,0
1c008126:	00000397          	auipc	t2,0x0
1c00812a:	1a238393          	addi	t2,t2,418 # 1c0082c8 <main>
1c00812e:	000380e7          	jalr	t2
1c008132:	842a                	mv	s0,a0
1c008134:	642010ef          	jal	ra,1c009776 <pos_init_stop>
1c008138:	8522                	mv	a0,s0
1c00813a:	682000ef          	jal	ra,1c0087bc <exit>

1c00813e <run_test>:
1c00813e:	102007b7          	lui	a5,0x10200
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
1c008176:	102017b7          	lui	a5,0x10201
1c00817a:	0007aa23          	sw	zero,20(a5) # 10201014 <__l2_shared_end+0x200d0c>
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
1c008196:	10201637          	lui	a2,0x10201
1c00819a:	0611                	addi	a2,a2,4
1c00819c:	421c                	lw	a5,0(a2)
1c00819e:	0007dc63          	bgez	a5,1c0081b6 <run_test+0x78>
1c0081a2:	6705                	lui	a4,0x1
1c0081a4:	002047b7          	lui	a5,0x204
1c0081a8:	c798                	sw	a4,8(a5)
1c0081aa:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1f4344>
1c0081ae:	c3d8                	sw	a4,4(a5)
1c0081b0:	4214                	lw	a3,0(a2)
1c0081b2:	fe06cbe3          	bltz	a3,1c0081a8 <run_test+0x6a>
1c0081b6:	102015b7          	lui	a1,0x10201
1c0081ba:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x200d18>
1c0081be:	004007b7          	lui	a5,0x400
1c0081c2:	00f5a023          	sw	a5,0(a1)
1c0081c6:	10000837          	lui	a6,0x10000
1c0081ca:	00480813          	addi	a6,a6,4 # 10000004 <ne16_infeat>
1c0081ce:	0105a223          	sw	a6,4(a1)
1c0081d2:	1f880413          	addi	s0,a6,504
1c0081d6:	0085a423          	sw	s0,8(a1)
1c0081da:	27880793          	addi	a5,a6,632
1c0081de:	00f5a623          	sw	a5,12(a1)
1c0081e2:	2f880793          	addi	a5,a6,760
1c0081e6:	00f5a823          	sw	a5,16(a1)
1c0081ea:	2fc80793          	addi	a5,a6,764
1c0081ee:	00f5aa23          	sw	a5,20(a1)
1c0081f2:	1c001537          	lui	a0,0x1c001
1c0081f6:	89050793          	addi	a5,a0,-1904 # 1c000890 <stack>
1c0081fa:	5571                	li	a0,-4
1c0081fc:	01878713          	addi	a4,a5,24 # 400018 <__l1_heap_size+0x3f0320>
1c008200:	8d1d                	sub	a0,a0,a5
1c008202:	012350fb          	lp.setupi	x1,18,1c00820e <run_test+0xd0>
1c008206:	0047268b          	p.lw	a3,4(a4!) # 1004 <__cluster_text_size+0x1004>
1c00820a:	00e50633          	add	a2,a0,a4
1c00820e:	00d5e623          	p.sw	a3,a2(a1)
1c008212:	abbab7b7          	lui	a5,0xabbab
1c008216:	10000737          	lui	a4,0x10000
1c00821a:	bba78793          	addi	a5,a5,-1094 # abbaabba <pulp__FC+0xabbaabbb>
1c00821e:	10201637          	lui	a2,0x10201
1c008222:	c31c                	sw	a5,0(a4)
1c008224:	00062023          	sw	zero,0(a2) # 10201000 <__l2_shared_end+0x200cf8>
1c008228:	6705                	lui	a4,0x1
1c00822a:	002047b7          	lui	a5,0x204
1c00822e:	0631                	addi	a2,a2,12
1c008230:	c798                	sw	a4,8(a5)
1c008232:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1f4344>
1c008236:	c3d8                	sw	a4,4(a5)
1c008238:	4214                	lw	a3,0(a2)
1c00823a:	fafd                	bnez	a3,1c008230 <run_test+0xf2>
1c00823c:	102007b7          	lui	a5,0x10200
1c008240:	07e1                	addi	a5,a5,24
1c008242:	4398                	lw	a4,0(a5)
1c008244:	1c001937          	lui	s2,0x1c001
1c008248:	59f1                	li	s3,-4
1c00824a:	c0b73733          	p.bclr	a4,a4,0,11
1c00824e:	c398                	sw	a4,0(a5)
1c008250:	deadd7b7          	lui	a5,0xdeadd
1c008254:	10000737          	lui	a4,0x10000
1c008258:	aca78793          	addi	a5,a5,-1334 # deadcaca <pulp__FC+0xdeadcacb>
1c00825c:	c31c                	sw	a5,0(a4)
1c00825e:	8f090913          	addi	s2,s2,-1808 # 1c0008f0 <ne16_outfeat>
1c008262:	27880a13          	addi	s4,a6,632
1c008266:	4481                	li	s1,0
1c008268:	408989b3          	sub	s3,s3,s0
1c00826c:	1c000ab7          	lui	s5,0x1c000
1c008270:	1c000b37          	lui	s6,0x1c000
1c008274:	0049258b          	p.lw	a1,4(s2!)
1c008278:	86a2                	mv	a3,s0
1c00827a:	0044260b          	p.lw	a2,4(s0!)
1c00827e:	40b607b3          	sub	a5,a2,a1
1c008282:	00f037b3          	snez	a5,a5
1c008286:	94be                	add	s1,s1,a5
1c008288:	00b60963          	beq	a2,a1,1c00829a <run_test+0x15c>
1c00828c:	0214a463          	p.beqimm	s1,1,1c0082b4 <run_test+0x176>
1c008290:	00898733          	add	a4,s3,s0
1c008294:	04ca8513          	addi	a0,s5,76 # 1c00004c <__DTOR_END__+0x30>
1c008298:	2b3d                	jal	1c0087d6 <printf>
1c00829a:	fc8a1de3          	bne	s4,s0,1c008274 <run_test+0x136>
1c00829e:	50f2                	lw	ra,60(sp)
1c0082a0:	5462                	lw	s0,56(sp)
1c0082a2:	8526                	mv	a0,s1
1c0082a4:	5942                	lw	s2,48(sp)
1c0082a6:	54d2                	lw	s1,52(sp)
1c0082a8:	59b2                	lw	s3,44(sp)
1c0082aa:	5a22                	lw	s4,40(sp)
1c0082ac:	5a92                	lw	s5,36(sp)
1c0082ae:	5b02                	lw	s6,32(sp)
1c0082b0:	6121                	addi	sp,sp,64
1c0082b2:	8082                	ret
1c0082b4:	01cb0513          	addi	a0,s6,28 # 1c00001c <__DTOR_END__>
1c0082b8:	c22e                	sw	a1,4(sp)
1c0082ba:	c432                	sw	a2,8(sp)
1c0082bc:	c636                	sw	a3,12(sp)
1c0082be:	21f1                	jal	1c00878a <puts>
1c0082c0:	46b2                	lw	a3,12(sp)
1c0082c2:	4622                	lw	a2,8(sp)
1c0082c4:	4592                	lw	a1,4(sp)
1c0082c6:	b7e9                	j	1c008290 <run_test+0x152>

1c0082c8 <main>:
1c0082c8:	f14027f3          	csrr	a5,mhartid
1c0082cc:	ca579733          	p.extractu	a4,a5,5,5
1c0082d0:	e711                	bnez	a4,1c0082dc <main+0x14>
1c0082d2:	f457b7b3          	p.bclr	a5,a5,26,5
1c0082d6:	cb95                	beqz	a5,1c00830a <main+0x42>
1c0082d8:	4501                	li	a0,0
1c0082da:	8082                	ret
1c0082dc:	1c0017b7          	lui	a5,0x1c001
1c0082e0:	97078793          	addi	a5,a5,-1680 # 1c000970 <ne16_weights>
1c0082e4:	10800737          	lui	a4,0x10800
1c0082e8:	4006d0fb          	lp.setupi	x1,1024,1c008302 <main+0x3a>
1c0082ec:	0007a803          	lw	a6,0(a5)
1c0082f0:	43c8                	lw	a0,4(a5)
1c0082f2:	478c                	lw	a1,8(a5)
1c0082f4:	47d0                	lw	a2,12(a5)
1c0082f6:	01072023          	sw	a6,0(a4) # 10800000 <__l2_shared_end+0x7ffcf8>
1c0082fa:	c348                	sw	a0,4(a4)
1c0082fc:	c70c                	sw	a1,8(a4)
1c0082fe:	c750                	sw	a2,12(a4)
1c008300:	07c1                	addi	a5,a5,16
1c008302:	0741                	addi	a4,a4,16
1c008304:	4501                	li	a0,0
1c008306:	6360106f          	j	1c00993c <bench_cluster_forward>
1c00830a:	bd15                	j	1c00813e <run_test>

1c00830c <pos_fll_init>:
1c00830c:	08152063          	p.beqimm	a0,1,1c00838c <pos_fll_init+0x80>
1c008310:	04252a63          	p.beqimm	a0,2,1c008364 <pos_fll_init+0x58>
1c008314:	c505                	beqz	a0,1c00833c <pos_fll_init+0x30>
1c008316:	4701                	li	a4,0
1c008318:	00470793          	addi	a5,a4,4
1c00831c:	05300613          	li	a2,83
1c008320:	00c70693          	addi	a3,a4,12
1c008324:	c390                	sw	a2,0(a5)
1c008326:	020c17b7          	lui	a5,0x20c1
1c00832a:	0721                	addi	a4,a4,8
1c00832c:	0006a023          	sw	zero,0(a3)
1c008330:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b1ae2>
1c008334:	c31c                	sw	a5,0(a4)
1c008336:	05f68537          	lui	a0,0x5f68
1c00833a:	8082                	ret
1c00833c:	1a1007b7          	lui	a5,0x1a100
1c008340:	00878713          	addi	a4,a5,8 # 1a100008 <__l2_shared_end+0xa0ffd00>
1c008344:	00c78693          	addi	a3,a5,12
1c008348:	05300613          	li	a2,83
1c00834c:	0791                	addi	a5,a5,4
1c00834e:	c390                	sw	a2,0(a5)
1c008350:	020c17b7          	lui	a5,0x20c1
1c008354:	0006a023          	sw	zero,0(a3)
1c008358:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b1ae2>
1c00835c:	c31c                	sw	a5,0(a4)
1c00835e:	05f68537          	lui	a0,0x5f68
1c008362:	8082                	ret
1c008364:	1a1007b7          	lui	a5,0x1a100
1c008368:	01878713          	addi	a4,a5,24 # 1a100018 <__l2_shared_end+0xa0ffd10>
1c00836c:	01c78693          	addi	a3,a5,28
1c008370:	05300613          	li	a2,83
1c008374:	07d1                	addi	a5,a5,20
1c008376:	c390                	sw	a2,0(a5)
1c008378:	020c17b7          	lui	a5,0x20c1
1c00837c:	0006a023          	sw	zero,0(a3)
1c008380:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b1ae2>
1c008384:	c31c                	sw	a5,0(a4)
1c008386:	05f68537          	lui	a0,0x5f68
1c00838a:	8082                	ret
1c00838c:	1a1007b7          	lui	a5,0x1a100
1c008390:	02878713          	addi	a4,a5,40 # 1a100028 <__l2_shared_end+0xa0ffd20>
1c008394:	02c78693          	addi	a3,a5,44
1c008398:	05300613          	li	a2,83
1c00839c:	02478793          	addi	a5,a5,36
1c0083a0:	c390                	sw	a2,0(a5)
1c0083a2:	020c17b7          	lui	a5,0x20c1
1c0083a6:	0006a023          	sw	zero,0(a3)
1c0083aa:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b1ae2>
1c0083ae:	c31c                	sw	a5,0(a4)
1c0083b0:	05f68537          	lui	a0,0x5f68
1c0083b4:	8082                	ret

1c0083b6 <pos_soc_init>:
1c0083b6:	8082                	ret

1c0083b8 <pos_wait_forever>:
1c0083b8:	f14027f3          	csrr	a5,mhartid
1c0083bc:	477d                	li	a4,31
1c0083be:	ca5797b3          	p.extractu	a5,a5,5,5
1c0083c2:	00e78963          	beq	a5,a4,1c0083d4 <pos_wait_forever+0x1c>
1c0083c6:	002047b7          	lui	a5,0x204
1c0083ca:	577d                	li	a4,-1
1c0083cc:	c3d8                	sw	a4,4(a5)
1c0083ce:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f4340>
1c0083d2:	a001                	j	1c0083d2 <pos_wait_forever+0x1a>
1c0083d4:	1a10a7b7          	lui	a5,0x1a10a
1c0083d8:	577d                	li	a4,-1
1c0083da:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa109500>
1c0083de:	10500073          	wfi
1c0083e2:	10500073          	wfi
1c0083e6:	bfe5                	j	1c0083de <pos_wait_forever+0x26>

1c0083e8 <memcpy>:
1c0083e8:	00a5e7b3          	or	a5,a1,a0
1c0083ec:	fa27b7b3          	p.bclr	a5,a5,29,2
1c0083f0:	882a                	mv	a6,a0
1c0083f2:	10078163          	beqz	a5,1c0084f4 <memcpy+0x10c>
1c0083f6:	12060263          	beqz	a2,1c00851a <memcpy+0x132>
1c0083fa:	00458793          	addi	a5,a1,4
1c0083fe:	00450693          	addi	a3,a0,4 # 5f68004 <__l1_heap_size+0x5f5830c>
1c008402:	04a7b7b3          	p.sletu	a5,a5,a0
1c008406:	04b6b6b3          	p.sletu	a3,a3,a1
1c00840a:	873e                	mv	a4,a5
1c00840c:	87b6                	mv	a5,a3
1c00840e:	8fd9                	or	a5,a5,a4
1c008410:	0ff7f793          	andi	a5,a5,255
1c008414:	cbe9                	beqz	a5,1c0084e6 <memcpy+0xfe>
1c008416:	00863793          	sltiu	a5,a2,8
1c00841a:	0017c793          	xori	a5,a5,1
1c00841e:	0ff7f793          	andi	a5,a5,255
1c008422:	c3f1                	beqz	a5,1c0084e6 <memcpy+0xfe>
1c008424:	40b007b3          	neg	a5,a1
1c008428:	fa27b7b3          	p.bclr	a5,a5,29,2
1c00842c:	fff60313          	addi	t1,a2,-1
1c008430:	c3ed                	beqz	a5,1c008512 <memcpy+0x12a>
1c008432:	0005c703          	lbu	a4,0(a1)
1c008436:	00158893          	addi	a7,a1,1
1c00843a:	00150813          	addi	a6,a0,1
1c00843e:	00e50023          	sb	a4,0(a0)
1c008442:	0217a863          	p.beqimm	a5,1,1c008472 <memcpy+0x8a>
1c008446:	0015c703          	lbu	a4,1(a1)
1c00844a:	00258893          	addi	a7,a1,2
1c00844e:	00250813          	addi	a6,a0,2
1c008452:	00e500a3          	sb	a4,1(a0)
1c008456:	ffe60313          	addi	t1,a2,-2
1c00845a:	0037bc63          	p.bneimm	a5,3,1c008472 <memcpy+0x8a>
1c00845e:	0025c703          	lbu	a4,2(a1)
1c008462:	00358893          	addi	a7,a1,3
1c008466:	00350813          	addi	a6,a0,3
1c00846a:	00e50123          	sb	a4,2(a0)
1c00846e:	ffd60313          	addi	t1,a2,-3
1c008472:	8e1d                	sub	a2,a2,a5
1c008474:	00265713          	srli	a4,a2,0x2
1c008478:	00f506b3          	add	a3,a0,a5
1c00847c:	95be                	add	a1,a1,a5
1c00847e:	cf59                	beqz	a4,1c00851c <memcpy+0x134>
1c008480:	004740fb          	lp.setup	x1,a4,1c008488 <memcpy+0xa0>
1c008484:	0045a78b          	p.lw	a5,4(a1!)
1c008488:	00f6a22b          	p.sw	a5,4(a3!)
1c00848c:	c20635b3          	p.bclr	a1,a2,1,0
1c008490:	40b306b3          	sub	a3,t1,a1
1c008494:	00b807b3          	add	a5,a6,a1
1c008498:	00b88733          	add	a4,a7,a1
1c00849c:	04b60b63          	beq	a2,a1,1c0084f2 <memcpy+0x10a>
1c0084a0:	00074603          	lbu	a2,0(a4)
1c0084a4:	00c78023          	sb	a2,0(a5)
1c0084a8:	0416a563          	p.beqimm	a3,1,1c0084f2 <memcpy+0x10a>
1c0084ac:	00174603          	lbu	a2,1(a4)
1c0084b0:	00c780a3          	sb	a2,1(a5)
1c0084b4:	0226af63          	p.beqimm	a3,2,1c0084f2 <memcpy+0x10a>
1c0084b8:	00274603          	lbu	a2,2(a4)
1c0084bc:	00c78123          	sb	a2,2(a5)
1c0084c0:	0236a963          	p.beqimm	a3,3,1c0084f2 <memcpy+0x10a>
1c0084c4:	00374603          	lbu	a2,3(a4)
1c0084c8:	00c781a3          	sb	a2,3(a5)
1c0084cc:	0246a363          	p.beqimm	a3,4,1c0084f2 <memcpy+0x10a>
1c0084d0:	00474603          	lbu	a2,4(a4)
1c0084d4:	00c78223          	sb	a2,4(a5)
1c0084d8:	0056ad63          	p.beqimm	a3,5,1c0084f2 <memcpy+0x10a>
1c0084dc:	00574703          	lbu	a4,5(a4)
1c0084e0:	00e782a3          	sb	a4,5(a5)
1c0084e4:	8082                	ret
1c0084e6:	004640fb          	lp.setup	x1,a2,1c0084ee <memcpy+0x106>
1c0084ea:	0015c78b          	p.lbu	a5,1(a1!)
1c0084ee:	00f800ab          	p.sb	a5,1(a6!)
1c0084f2:	8082                	ret
1c0084f4:	fa2637b3          	p.bclr	a5,a2,29,2
1c0084f8:	f389                	bnez	a5,1c0083fa <memcpy+0x12>
1c0084fa:	de65                	beqz	a2,1c0084f2 <memcpy+0x10a>
1c0084fc:	ffc60793          	addi	a5,a2,-4
1c008500:	8389                	srli	a5,a5,0x2
1c008502:	0785                	addi	a5,a5,1
1c008504:	0047c0fb          	lp.setup	x1,a5,1c00850c <memcpy+0x124>
1c008508:	0045a70b          	p.lw	a4,4(a1!)
1c00850c:	00e8222b          	p.sw	a4,4(a6!)
1c008510:	8082                	ret
1c008512:	88ae                	mv	a7,a1
1c008514:	882a                	mv	a6,a0
1c008516:	8332                	mv	t1,a2
1c008518:	bfa9                	j	1c008472 <memcpy+0x8a>
1c00851a:	8082                	ret
1c00851c:	4705                	li	a4,1
1c00851e:	b78d                	j	1c008480 <memcpy+0x98>

1c008520 <memmove>:
1c008520:	40b507b3          	sub	a5,a0,a1
1c008524:	0ec7ec63          	bltu	a5,a2,1c00861c <memmove+0xfc>
1c008528:	20060463          	beqz	a2,1c008730 <memmove+0x210>
1c00852c:	00450793          	addi	a5,a0,4
1c008530:	00458693          	addi	a3,a1,4
1c008534:	04b7b7b3          	p.sletu	a5,a5,a1
1c008538:	04a6b6b3          	p.sletu	a3,a3,a0
1c00853c:	873e                	mv	a4,a5
1c00853e:	87b6                	mv	a5,a3
1c008540:	8fd9                	or	a5,a5,a4
1c008542:	0ff7f793          	andi	a5,a5,255
1c008546:	1c078d63          	beqz	a5,1c008720 <memmove+0x200>
1c00854a:	00863793          	sltiu	a5,a2,8
1c00854e:	0017c793          	xori	a5,a5,1
1c008552:	0ff7f793          	andi	a5,a5,255
1c008556:	1c078563          	beqz	a5,1c008720 <memmove+0x200>
1c00855a:	40b007b3          	neg	a5,a1
1c00855e:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008562:	fff60313          	addi	t1,a2,-1
1c008566:	88ae                	mv	a7,a1
1c008568:	1e078363          	beqz	a5,1c00874e <memmove+0x22e>
1c00856c:	0018c70b          	p.lbu	a4,1(a7!)
1c008570:	882a                	mv	a6,a0
1c008572:	00e800ab          	p.sb	a4,1(a6!)
1c008576:	0217a863          	p.beqimm	a5,1,1c0085a6 <memmove+0x86>
1c00857a:	0015c703          	lbu	a4,1(a1)
1c00857e:	00250813          	addi	a6,a0,2
1c008582:	00258893          	addi	a7,a1,2
1c008586:	00e500a3          	sb	a4,1(a0)
1c00858a:	ffe60313          	addi	t1,a2,-2
1c00858e:	0037bc63          	p.bneimm	a5,3,1c0085a6 <memmove+0x86>
1c008592:	0025c703          	lbu	a4,2(a1)
1c008596:	00350813          	addi	a6,a0,3
1c00859a:	00358893          	addi	a7,a1,3
1c00859e:	00e50123          	sb	a4,2(a0)
1c0085a2:	ffd60313          	addi	t1,a2,-3
1c0085a6:	8e1d                	sub	a2,a2,a5
1c0085a8:	00265713          	srli	a4,a2,0x2
1c0085ac:	00f506b3          	add	a3,a0,a5
1c0085b0:	95be                	add	a1,a1,a5
1c0085b2:	1a070363          	beqz	a4,1c008758 <memmove+0x238>
1c0085b6:	004740fb          	lp.setup	x1,a4,1c0085be <memmove+0x9e>
1c0085ba:	0045a78b          	p.lw	a5,4(a1!)
1c0085be:	00f6a22b          	p.sw	a5,4(a3!)
1c0085c2:	c20635b3          	p.bclr	a1,a2,1,0
1c0085c6:	40b306b3          	sub	a3,t1,a1
1c0085ca:	00b807b3          	add	a5,a6,a1
1c0085ce:	00b88733          	add	a4,a7,a1
1c0085d2:	14b60e63          	beq	a2,a1,1c00872e <memmove+0x20e>
1c0085d6:	00074603          	lbu	a2,0(a4)
1c0085da:	00c78023          	sb	a2,0(a5)
1c0085de:	1416a863          	p.beqimm	a3,1,1c00872e <memmove+0x20e>
1c0085e2:	00174603          	lbu	a2,1(a4)
1c0085e6:	00c780a3          	sb	a2,1(a5)
1c0085ea:	1426a263          	p.beqimm	a3,2,1c00872e <memmove+0x20e>
1c0085ee:	00274603          	lbu	a2,2(a4)
1c0085f2:	00c78123          	sb	a2,2(a5)
1c0085f6:	1236ac63          	p.beqimm	a3,3,1c00872e <memmove+0x20e>
1c0085fa:	00374603          	lbu	a2,3(a4)
1c0085fe:	00c781a3          	sb	a2,3(a5)
1c008602:	1246a663          	p.beqimm	a3,4,1c00872e <memmove+0x20e>
1c008606:	00474603          	lbu	a2,4(a4)
1c00860a:	00c78223          	sb	a2,4(a5)
1c00860e:	1256a063          	p.beqimm	a3,5,1c00872e <memmove+0x20e>
1c008612:	00574703          	lbu	a4,5(a4)
1c008616:	00e782a3          	sb	a4,5(a5)
1c00861a:	8082                	ret
1c00861c:	ffc60793          	addi	a5,a2,-4
1c008620:	00f50833          	add	a6,a0,a5
1c008624:	00f58333          	add	t1,a1,a5
1c008628:	00c58733          	add	a4,a1,a2
1c00862c:	00c508b3          	add	a7,a0,a2
1c008630:	05073733          	p.sletu	a4,a4,a6
1c008634:	0468b833          	p.sletu	a6,a7,t1
1c008638:	86ba                	mv	a3,a4
1c00863a:	8742                	mv	a4,a6
1c00863c:	8f55                	or	a4,a4,a3
1c00863e:	0ff77713          	andi	a4,a4,255
1c008642:	cb65                	beqz	a4,1c008732 <memmove+0x212>
1c008644:	00863713          	sltiu	a4,a2,8
1c008648:	00174713          	xori	a4,a4,1
1c00864c:	0ff77713          	andi	a4,a4,255
1c008650:	c36d                	beqz	a4,1c008732 <memmove+0x212>
1c008652:	fa233733          	p.bclr	a4,t1,29,2
1c008656:	fff60893          	addi	a7,a2,-1
1c00865a:	cb65                	beqz	a4,1c00874a <memmove+0x22a>
1c00865c:	011586b3          	add	a3,a1,a7
1c008660:	0006c683          	lbu	a3,0(a3)
1c008664:	00d548a3          	p.sb	a3,a7(a0)
1c008668:	02172463          	p.beqimm	a4,1,1c008690 <memmove+0x170>
1c00866c:	ffe60893          	addi	a7,a2,-2
1c008670:	011586b3          	add	a3,a1,a7
1c008674:	0006c683          	lbu	a3,0(a3)
1c008678:	00d548a3          	p.sb	a3,a7(a0)
1c00867c:	00373a63          	p.bneimm	a4,3,1c008690 <memmove+0x170>
1c008680:	ffd60893          	addi	a7,a2,-3
1c008684:	011586b3          	add	a3,a1,a7
1c008688:	0006c683          	lbu	a3,0(a3)
1c00868c:	00d548a3          	p.sb	a3,a7(a0)
1c008690:	8e19                	sub	a2,a2,a4
1c008692:	8f99                	sub	a5,a5,a4
1c008694:	00265713          	srli	a4,a2,0x2
1c008698:	00f506b3          	add	a3,a0,a5
1c00869c:	97ae                	add	a5,a5,a1
1c00869e:	cb5d                	beqz	a4,1c008754 <memmove+0x234>
1c0086a0:	004740fb          	lp.setup	x1,a4,1c0086a8 <memmove+0x188>
1c0086a4:	ffc7a80b          	p.lw	a6,-4(a5!)
1c0086a8:	ff06ae2b          	p.sw	a6,-4(a3!)
1c0086ac:	c20637b3          	p.bclr	a5,a2,1,0
1c0086b0:	40f888b3          	sub	a7,a7,a5
1c0086b4:	06f60d63          	beq	a2,a5,1c00872e <memmove+0x20e>
1c0086b8:	fff88793          	addi	a5,a7,-1
1c0086bc:	00f58733          	add	a4,a1,a5
1c0086c0:	00074703          	lbu	a4,0(a4)
1c0086c4:	00e547a3          	p.sb	a4,a5(a0)
1c0086c8:	c3bd                	beqz	a5,1c00872e <memmove+0x20e>
1c0086ca:	ffe88793          	addi	a5,a7,-2
1c0086ce:	00f58733          	add	a4,a1,a5
1c0086d2:	00074703          	lbu	a4,0(a4)
1c0086d6:	00e547a3          	p.sb	a4,a5(a0)
1c0086da:	cbb1                	beqz	a5,1c00872e <memmove+0x20e>
1c0086dc:	ffd88793          	addi	a5,a7,-3
1c0086e0:	00f58733          	add	a4,a1,a5
1c0086e4:	00074703          	lbu	a4,0(a4)
1c0086e8:	00e547a3          	p.sb	a4,a5(a0)
1c0086ec:	c3a9                	beqz	a5,1c00872e <memmove+0x20e>
1c0086ee:	ffc88793          	addi	a5,a7,-4
1c0086f2:	00f58733          	add	a4,a1,a5
1c0086f6:	00074703          	lbu	a4,0(a4)
1c0086fa:	00e547a3          	p.sb	a4,a5(a0)
1c0086fe:	cb85                	beqz	a5,1c00872e <memmove+0x20e>
1c008700:	ffb88793          	addi	a5,a7,-5
1c008704:	00f58733          	add	a4,a1,a5
1c008708:	00074703          	lbu	a4,0(a4)
1c00870c:	00e547a3          	p.sb	a4,a5(a0)
1c008710:	cf99                	beqz	a5,1c00872e <memmove+0x20e>
1c008712:	18e9                	addi	a7,a7,-6
1c008714:	95c6                	add	a1,a1,a7
1c008716:	0005c783          	lbu	a5,0(a1)
1c00871a:	00f548a3          	p.sb	a5,a7(a0)
1c00871e:	8082                	ret
1c008720:	87aa                	mv	a5,a0
1c008722:	004640fb          	lp.setup	x1,a2,1c00872a <memmove+0x20a>
1c008726:	0015c70b          	p.lbu	a4,1(a1!)
1c00872a:	00e780ab          	p.sb	a4,1(a5!)
1c00872e:	8082                	ret
1c008730:	8082                	ret
1c008732:	167d                	addi	a2,a2,-1
1c008734:	00c507b3          	add	a5,a0,a2
1c008738:	95b2                	add	a1,a1,a2
1c00873a:	0605                	addi	a2,a2,1
1c00873c:	004640fb          	lp.setup	x1,a2,1c008744 <memmove+0x224>
1c008740:	fff5c70b          	p.lbu	a4,-1(a1!)
1c008744:	fee78fab          	p.sb	a4,-1(a5!)
1c008748:	8082                	ret
1c00874a:	88b2                	mv	a7,a2
1c00874c:	b791                	j	1c008690 <memmove+0x170>
1c00874e:	882a                	mv	a6,a0
1c008750:	8332                	mv	t1,a2
1c008752:	bd91                	j	1c0085a6 <memmove+0x86>
1c008754:	4705                	li	a4,1
1c008756:	b7a9                	j	1c0086a0 <memmove+0x180>
1c008758:	4705                	li	a4,1
1c00875a:	bdb1                	j	1c0085b6 <memmove+0x96>

1c00875c <strchr>:
1c00875c:	00054783          	lbu	a5,0(a0)
1c008760:	0ff5f593          	andi	a1,a1,255
1c008764:	00b78c63          	beq	a5,a1,1c00877c <strchr+0x20>
1c008768:	cb99                	beqz	a5,1c00877e <strchr+0x22>
1c00876a:	00150793          	addi	a5,a0,1
1c00876e:	a011                	j	1c008772 <strchr+0x16>
1c008770:	c719                	beqz	a4,1c00877e <strchr+0x22>
1c008772:	853e                	mv	a0,a5
1c008774:	0017c70b          	p.lbu	a4,1(a5!)
1c008778:	feb71ce3          	bne	a4,a1,1c008770 <strchr+0x14>
1c00877c:	8082                	ret
1c00877e:	0015b593          	seqz	a1,a1
1c008782:	40b005b3          	neg	a1,a1
1c008786:	8d6d                	and	a0,a0,a1
1c008788:	8082                	ret

1c00878a <puts>:
1c00878a:	0015478b          	p.lbu	a5,1(a0!)
1c00878e:	1a104737          	lui	a4,0x1a104
1c008792:	02070713          	addi	a4,a4,32 # 1a104020 <__l2_shared_end+0xa103d18>
1c008796:	c789                	beqz	a5,1c0087a0 <puts+0x16>
1c008798:	c31c                	sw	a5,0(a4)
1c00879a:	0015478b          	p.lbu	a5,1(a0!)
1c00879e:	ffed                	bnez	a5,1c008798 <puts+0xe>
1c0087a0:	1a1047b7          	lui	a5,0x1a104
1c0087a4:	4729                	li	a4,10
1c0087a6:	d398                	sw	a4,32(a5)
1c0087a8:	4501                	li	a0,0
1c0087aa:	8082                	ret

1c0087ac <pos_libc_fputc_locked>:
1c0087ac:	1a1047b7          	lui	a5,0x1a104
1c0087b0:	0ff57513          	andi	a0,a0,255
1c0087b4:	d388                	sw	a0,32(a5)
1c0087b6:	4501                	li	a0,0
1c0087b8:	8082                	ret

1c0087ba <pos_libc_prf_locked>:
1c0087ba:	a0a9                	j	1c008804 <pos_libc_prf>

1c0087bc <exit>:
1c0087bc:	1141                	addi	sp,sp,-16
1c0087be:	c606                	sw	ra,12(sp)
1c0087c0:	1a1047b7          	lui	a5,0x1a104
1c0087c4:	c1f54533          	p.bset	a0,a0,0,31
1c0087c8:	0aa7a023          	sw	a0,160(a5) # 1a1040a0 <__l2_shared_end+0xa103d98>
1c0087cc:	36f5                	jal	1c0083b8 <pos_wait_forever>

1c0087ce <pos_io_start>:
1c0087ce:	4501                	li	a0,0
1c0087d0:	8082                	ret

1c0087d2 <pos_io_stop>:
1c0087d2:	4501                	li	a0,0
1c0087d4:	8082                	ret

1c0087d6 <printf>:
1c0087d6:	7139                	addi	sp,sp,-64
1c0087d8:	02410313          	addi	t1,sp,36
1c0087dc:	d432                	sw	a2,40(sp)
1c0087de:	862a                	mv	a2,a0
1c0087e0:	1c008537          	lui	a0,0x1c008
1c0087e4:	d22e                	sw	a1,36(sp)
1c0087e6:	d636                	sw	a3,44(sp)
1c0087e8:	4589                	li	a1,2
1c0087ea:	869a                	mv	a3,t1
1c0087ec:	7ac50513          	addi	a0,a0,1964 # 1c0087ac <pos_libc_fputc_locked>
1c0087f0:	ce06                	sw	ra,28(sp)
1c0087f2:	d83a                	sw	a4,48(sp)
1c0087f4:	da3e                	sw	a5,52(sp)
1c0087f6:	dc42                	sw	a6,56(sp)
1c0087f8:	de46                	sw	a7,60(sp)
1c0087fa:	c61a                	sw	t1,12(sp)
1c0087fc:	3f7d                	jal	1c0087ba <pos_libc_prf_locked>
1c0087fe:	40f2                	lw	ra,28(sp)
1c008800:	6121                	addi	sp,sp,64
1c008802:	8082                	ret

1c008804 <pos_libc_prf>:
1c008804:	7169                	addi	sp,sp,-304
1c008806:	12812423          	sw	s0,296(sp)
1c00880a:	4401                	li	s0,0
1c00880c:	11612823          	sw	s6,272(sp)
1c008810:	11712623          	sw	s7,268(sp)
1c008814:	11812423          	sw	s8,264(sp)
1c008818:	11912223          	sw	s9,260(sp)
1c00881c:	11a12023          	sw	s10,256(sp)
1c008820:	dfee                	sw	s11,252(sp)
1c008822:	12112623          	sw	ra,300(sp)
1c008826:	8da2                	mv	s11,s0
1c008828:	12912223          	sw	s1,292(sp)
1c00882c:	13212023          	sw	s2,288(sp)
1c008830:	11312e23          	sw	s3,284(sp)
1c008834:	11412c23          	sw	s4,280(sp)
1c008838:	11512a23          	sw	s5,276(sp)
1c00883c:	8b2a                	mv	s6,a0
1c00883e:	8d2e                	mv	s10,a1
1c008840:	8c36                	mv	s8,a3
1c008842:	1c000bb7          	lui	s7,0x1c000
1c008846:	02410c93          	addi	s9,sp,36
1c00884a:	8432                	mv	s0,a2
1c00884c:	00044503          	lbu	a0,0(s0)
1c008850:	0405                	addi	s0,s0,1
1c008852:	cd11                	beqz	a0,1c00886e <pos_libc_prf+0x6a>
1c008854:	02500793          	li	a5,37
1c008858:	04f50863          	beq	a0,a5,1c0088a8 <pos_libc_prf+0xa4>
1c00885c:	85ea                	mv	a1,s10
1c00885e:	9b02                	jalr	s6
1c008860:	31f52563          	p.beqimm	a0,-1,1c008b6a <pos_libc_prf+0x366>
1c008864:	0d85                	addi	s11,s11,1
1c008866:	00044503          	lbu	a0,0(s0)
1c00886a:	0405                	addi	s0,s0,1
1c00886c:	f565                	bnez	a0,1c008854 <pos_libc_prf+0x50>
1c00886e:	846e                	mv	s0,s11
1c008870:	8522                	mv	a0,s0
1c008872:	12c12083          	lw	ra,300(sp)
1c008876:	12812403          	lw	s0,296(sp)
1c00887a:	12412483          	lw	s1,292(sp)
1c00887e:	12012903          	lw	s2,288(sp)
1c008882:	11c12983          	lw	s3,284(sp)
1c008886:	11812a03          	lw	s4,280(sp)
1c00888a:	11412a83          	lw	s5,276(sp)
1c00888e:	11012b03          	lw	s6,272(sp)
1c008892:	10c12b83          	lw	s7,268(sp)
1c008896:	10812c03          	lw	s8,264(sp)
1c00889a:	10412c83          	lw	s9,260(sp)
1c00889e:	10012d03          	lw	s10,256(sp)
1c0088a2:	5dfe                	lw	s11,252(sp)
1c0088a4:	6155                	addi	sp,sp,304
1c0088a6:	8082                	ret
1c0088a8:	00044483          	lbu	s1,0(s0)
1c0088ac:	02000693          	li	a3,32
1c0088b0:	00140a93          	addi	s5,s0,1
1c0088b4:	078b8513          	addi	a0,s7,120 # 1c000078 <__DTOR_END__+0x5c>
1c0088b8:	85a6                	mv	a1,s1
1c0088ba:	c836                	sw	a3,16(sp)
1c0088bc:	cc02                	sw	zero,24(sp)
1c0088be:	ca02                	sw	zero,20(sp)
1c0088c0:	ce02                	sw	zero,28(sp)
1c0088c2:	c602                	sw	zero,12(sp)
1c0088c4:	02300913          	li	s2,35
1c0088c8:	02d00a13          	li	s4,45
1c0088cc:	89d6                	mv	s3,s5
1c0088ce:	3579                	jal	1c00875c <strchr>
1c0088d0:	c915                	beqz	a0,1c008904 <pos_libc_prf+0x100>
1c0088d2:	2b248b63          	beq	s1,s2,1c008b88 <pos_libc_prf+0x384>
1c0088d6:	0c997463          	bleu	s1,s2,1c00899e <pos_libc_prf+0x19a>
1c0088da:	2b448363          	beq	s1,s4,1c008b80 <pos_libc_prf+0x37c>
1c0088de:	03000613          	li	a2,48
1c0088e2:	28c48a63          	beq	s1,a2,1c008b76 <pos_libc_prf+0x372>
1c0088e6:	02b00693          	li	a3,43
1c0088ea:	28d48263          	beq	s1,a3,1c008b6e <pos_libc_prf+0x36a>
1c0088ee:	8456                	mv	s0,s5
1c0088f0:	00044483          	lbu	s1,0(s0)
1c0088f4:	00140a93          	addi	s5,s0,1
1c0088f8:	078b8513          	addi	a0,s7,120
1c0088fc:	85a6                	mv	a1,s1
1c0088fe:	89d6                	mv	s3,s5
1c008900:	3db1                	jal	1c00875c <strchr>
1c008902:	f961                	bnez	a0,1c0088d2 <pos_libc_prf+0xce>
1c008904:	02a00613          	li	a2,42
1c008908:	2ac48663          	beq	s1,a2,1c008bb4 <pos_libc_prf+0x3b0>
1c00890c:	fd048613          	addi	a2,s1,-48
1c008910:	45a5                	li	a1,9
1c008912:	4901                	li	s2,0
1c008914:	28c5f063          	bleu	a2,a1,1c008b94 <pos_libc_prf+0x390>
1c008918:	02e00693          	li	a3,46
1c00891c:	5a7d                	li	s4,-1
1c00891e:	2ed48363          	beq	s1,a3,1c008c04 <pos_libc_prf+0x400>
1c008922:	1c0007b7          	lui	a5,0x1c000
1c008926:	85a6                	mv	a1,s1
1c008928:	08078513          	addi	a0,a5,128 # 1c000080 <__DTOR_END__+0x64>
1c00892c:	3d05                	jal	1c00875c <strchr>
1c00892e:	844e                	mv	s0,s3
1c008930:	c509                	beqz	a0,1c00893a <pos_libc_prf+0x136>
1c008932:	0009c483          	lbu	s1,0(s3)
1c008936:	00198413          	addi	s0,s3,1
1c00893a:	06700693          	li	a3,103
1c00893e:	2896d963          	ble	s1,a3,1c008bd0 <pos_libc_prf+0x3cc>
1c008942:	07000693          	li	a3,112
1c008946:	7cd48b63          	beq	s1,a3,1c00911c <pos_libc_prf+0x918>
1c00894a:	2e96d163          	ble	s1,a3,1c008c2c <pos_libc_prf+0x428>
1c00894e:	07500693          	li	a3,117
1c008952:	12d489e3          	beq	s1,a3,1c009284 <pos_libc_prf+0xa80>
1c008956:	07800693          	li	a3,120
1c00895a:	06d48663          	beq	s1,a3,1c0089c6 <pos_libc_prf+0x1c2>
1c00895e:	07300693          	li	a3,115
1c008962:	18d49fe3          	bne	s1,a3,1c009300 <pos_libc_prf+0xafc>
1c008966:	000c2583          	lw	a1,0(s8)
1c00896a:	004c0993          	addi	s3,s8,4
1c00896e:	4481                	li	s1,0
1c008970:	86ae                	mv	a3,a1
1c008972:	0c8350fb          	lp.setupi	x1,200,1c00897e <pos_libc_prf+0x17a>
1c008976:	0016c70b          	p.lbu	a4,1(a3!)
1c00897a:	18070ae3          	beqz	a4,1c00930e <pos_libc_prf+0xb0a>
1c00897e:	0485                	addi	s1,s1,1
1c008980:	000a4763          	bltz	s4,1c00898e <pos_libc_prf+0x18a>
1c008984:	0544c4b3          	p.min	s1,s1,s4
1c008988:	8c4e                	mv	s8,s3
1c00898a:	ec0481e3          	beqz	s1,1c00884c <pos_libc_prf+0x48>
1c00898e:	8626                	mv	a2,s1
1c008990:	8566                	mv	a0,s9
1c008992:	3c99                	jal	1c0083e8 <memcpy>
1c008994:	8c4e                	mv	s8,s3
1c008996:	1b24db63          	ble	s2,s1,1c008b4c <pos_libc_prf+0x348>
1c00899a:	c602                	sw	zero,12(sp)
1c00899c:	a0f9                	j	1c008a6a <pos_libc_prf+0x266>
1c00899e:	ec0488e3          	beqz	s1,1c00886e <pos_libc_prf+0x6a>
1c0089a2:	02000593          	li	a1,32
1c0089a6:	f4b494e3          	bne	s1,a1,1c0088ee <pos_libc_prf+0xea>
1c0089aa:	4785                	li	a5,1
1c0089ac:	cc3e                	sw	a5,24(sp)
1c0089ae:	8456                	mv	s0,s5
1c0089b0:	b781                	j	1c0088f0 <pos_libc_prf+0xec>
1c0089b2:	06300693          	li	a3,99
1c0089b6:	0ad48de3          	beq	s1,a3,1c009270 <pos_libc_prf+0xa6c>
1c0089ba:	0096cde3          	blt	a3,s1,1c0091d4 <pos_libc_prf+0x9d0>
1c0089be:	05800693          	li	a3,88
1c0089c2:	12d49fe3          	bne	s1,a3,1c009300 <pos_libc_prf+0xafc>
1c0089c6:	47b2                	lw	a5,12(sp)
1c0089c8:	004c0893          	addi	a7,s8,4
1c0089cc:	000c2503          	lw	a0,0(s8)
1c0089d0:	260788e3          	beqz	a5,1c009440 <pos_libc_prf+0xc3c>
1c0089d4:	76e1                	lui	a3,0xffff8
1c0089d6:	8306c693          	xori	a3,a3,-2000
1c0089da:	02d11223          	sh	a3,36(sp)
1c0089de:	4309                	li	t1,2
1c0089e0:	02610613          	addi	a2,sp,38
1c0089e4:	86b2                	mv	a3,a2
1c0089e6:	4ea5                	li	t4,9
1c0089e8:	f6453733          	p.bclr	a4,a0,27,4
1c0089ec:	0ff77793          	andi	a5,a4,255
1c0089f0:	03078593          	addi	a1,a5,48
1c0089f4:	8111                	srli	a0,a0,0x4
1c0089f6:	05778793          	addi	a5,a5,87
1c0089fa:	70eee963          	bltu	t4,a4,1c00910c <pos_libc_prf+0x908>
1c0089fe:	00b680ab          	p.sb	a1,1(a3!) # ffff8001 <pulp__FC+0xffff8002>
1c008a02:	f17d                	bnez	a0,1c0089e8 <pos_libc_prf+0x1e4>
1c008a04:	40c68733          	sub	a4,a3,a2
1c008a08:	01475d63          	ble	s4,a4,1c008a22 <pos_libc_prf+0x21e>
1c008a0c:	40d605b3          	sub	a1,a2,a3
1c008a10:	03000513          	li	a0,48
1c008a14:	95d2                	add	a1,a1,s4
1c008a16:	0045c0fb          	lp.setup	x1,a1,1c008a1e <pos_libc_prf+0x21a>
1c008a1a:	00a680ab          	p.sb	a0,1(a3!)
1c008a1e:	40c68733          	sub	a4,a3,a2
1c008a22:	fe068fab          	p.sb	zero,-1(a3!)
1c008a26:	00d67c63          	bleu	a3,a2,1c008a3e <pos_libc_prf+0x23a>
1c008a2a:	00064583          	lbu	a1,0(a2)
1c008a2e:	0006c783          	lbu	a5,0(a3)
1c008a32:	feb68fab          	p.sb	a1,-1(a3!)
1c008a36:	00f600ab          	p.sb	a5,1(a2!)
1c008a3a:	fed668e3          	bltu	a2,a3,1c008a2a <pos_libc_prf+0x226>
1c008a3e:	05800693          	li	a3,88
1c008a42:	20d483e3          	beq	s1,a3,1c009448 <pos_libc_prf+0xc44>
1c008a46:	46b2                	lw	a3,12(sp)
1c008a48:	006704b3          	add	s1,a4,t1
1c008a4c:	c299                	beqz	a3,1c008a52 <pos_libc_prf+0x24e>
1c008a4e:	4709                	li	a4,2
1c008a50:	c63a                	sw	a4,12(sp)
1c008a52:	0c800793          	li	a5,200
1c008a56:	23fa24e3          	p.beqimm	s4,-1,1c00947e <pos_libc_prf+0xc7a>
1c008a5a:	1097c863          	blt	a5,s1,1c008b6a <pos_libc_prf+0x366>
1c008a5e:	02000793          	li	a5,32
1c008a62:	8c46                	mv	s8,a7
1c008a64:	c83e                	sw	a5,16(sp)
1c008a66:	0f24d163          	ble	s2,s1,1c008b48 <pos_libc_prf+0x344>
1c008a6a:	4772                	lw	a4,28(sp)
1c008a6c:	0c0702e3          	beqz	a4,1c009330 <pos_libc_prf+0xb2c>
1c008a70:	009c87b3          	add	a5,s9,s1
1c008a74:	40f007b3          	neg	a5,a5
1c008a78:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008a7c:	4595                	li	a1,5
1c008a7e:	00378613          	addi	a2,a5,3
1c008a82:	fff90693          	addi	a3,s2,-1
1c008a86:	04b67633          	p.maxu	a2,a2,a1
1c008a8a:	8e85                	sub	a3,a3,s1
1c008a8c:	409905b3          	sub	a1,s2,s1
1c008a90:	06c6e163          	bltu	a3,a2,1c008af2 <pos_libc_prf+0x2ee>
1c008a94:	8626                	mv	a2,s1
1c008a96:	cb85                	beqz	a5,1c008ac6 <pos_libc_prf+0x2c2>
1c008a98:	1998                	addi	a4,sp,240
1c008a9a:	00970633          	add	a2,a4,s1
1c008a9e:	02000693          	li	a3,32
1c008aa2:	f2d60a23          	sb	a3,-204(a2)
1c008aa6:	00148613          	addi	a2,s1,1
1c008aaa:	0017ae63          	p.beqimm	a5,1,1c008ac6 <pos_libc_prf+0x2c2>
1c008aae:	963a                	add	a2,a2,a4
1c008ab0:	f2d60a23          	sb	a3,-204(a2)
1c008ab4:	00248613          	addi	a2,s1,2
1c008ab8:	0037b763          	p.bneimm	a5,3,1c008ac6 <pos_libc_prf+0x2c2>
1c008abc:	963a                	add	a2,a2,a4
1c008abe:	f2d60a23          	sb	a3,-204(a2)
1c008ac2:	00348613          	addi	a2,s1,3
1c008ac6:	8d9d                	sub	a1,a1,a5
1c008ac8:	0025d693          	srli	a3,a1,0x2
1c008acc:	97a6                	add	a5,a5,s1
1c008ace:	97e6                	add	a5,a5,s9
1c008ad0:	42068fe3          	beqz	a3,1c00970e <pos_libc_prf+0xf0a>
1c008ad4:	0076c0fb          	lp.setup	x1,a3,1c008ae2 <pos_libc_prf+0x2de>
1c008ad8:	1c000737          	lui	a4,0x1c000
1c008adc:	07470713          	addi	a4,a4,116 # 1c000074 <__DTOR_END__+0x58>
1c008ae0:	4318                	lw	a4,0(a4)
1c008ae2:	00e7a22b          	p.sw	a4,4(a5!)
1c008ae6:	c205b7b3          	p.bclr	a5,a1,1,0
1c008aea:	00c784b3          	add	s1,a5,a2
1c008aee:	04b78c63          	beq	a5,a1,1c008b46 <pos_libc_prf+0x342>
1c008af2:	198c                	addi	a1,sp,240
1c008af4:	009586b3          	add	a3,a1,s1
1c008af8:	02000793          	li	a5,32
1c008afc:	f2f68a23          	sb	a5,-204(a3)
1c008b00:	00148693          	addi	a3,s1,1
1c008b04:	0526d163          	ble	s2,a3,1c008b46 <pos_libc_prf+0x342>
1c008b08:	96ae                	add	a3,a3,a1
1c008b0a:	f2f68a23          	sb	a5,-204(a3)
1c008b0e:	00248693          	addi	a3,s1,2
1c008b12:	0326da63          	ble	s2,a3,1c008b46 <pos_libc_prf+0x342>
1c008b16:	96ae                	add	a3,a3,a1
1c008b18:	f2f68a23          	sb	a5,-204(a3)
1c008b1c:	00348693          	addi	a3,s1,3
1c008b20:	0326d363          	ble	s2,a3,1c008b46 <pos_libc_prf+0x342>
1c008b24:	96ae                	add	a3,a3,a1
1c008b26:	f2f68a23          	sb	a5,-204(a3)
1c008b2a:	00448693          	addi	a3,s1,4
1c008b2e:	0126dc63          	ble	s2,a3,1c008b46 <pos_libc_prf+0x342>
1c008b32:	96ae                	add	a3,a3,a1
1c008b34:	f2f68a23          	sb	a5,-204(a3)
1c008b38:	00548713          	addi	a4,s1,5
1c008b3c:	01275563          	ble	s2,a4,1c008b46 <pos_libc_prf+0x342>
1c008b40:	972e                	add	a4,a4,a1
1c008b42:	f2f70a23          	sb	a5,-204(a4)
1c008b46:	84ca                	mv	s1,s2
1c008b48:	d00482e3          	beqz	s1,1c00884c <pos_libc_prf+0x48>
1c008b4c:	8966                	mv	s2,s9
1c008b4e:	419d8db3          	sub	s11,s11,s9
1c008b52:	a029                	j	1c008b5c <pos_libc_prf+0x358>
1c008b54:	012d8733          	add	a4,s11,s2
1c008b58:	5a048f63          	beqz	s1,1c009116 <pos_libc_prf+0x912>
1c008b5c:	0019450b          	p.lbu	a0,1(s2!)
1c008b60:	85ea                	mv	a1,s10
1c008b62:	14fd                	addi	s1,s1,-1
1c008b64:	9b02                	jalr	s6
1c008b66:	fff537e3          	p.bneimm	a0,-1,1c008b54 <pos_libc_prf+0x350>
1c008b6a:	547d                	li	s0,-1
1c008b6c:	b311                	j	1c008870 <pos_libc_prf+0x6c>
1c008b6e:	4705                	li	a4,1
1c008b70:	ca3a                	sw	a4,20(sp)
1c008b72:	8456                	mv	s0,s5
1c008b74:	bbb5                	j	1c0088f0 <pos_libc_prf+0xec>
1c008b76:	03000713          	li	a4,48
1c008b7a:	c83a                	sw	a4,16(sp)
1c008b7c:	8456                	mv	s0,s5
1c008b7e:	bb8d                	j	1c0088f0 <pos_libc_prf+0xec>
1c008b80:	4785                	li	a5,1
1c008b82:	ce3e                	sw	a5,28(sp)
1c008b84:	8456                	mv	s0,s5
1c008b86:	b3ad                	j	1c0088f0 <pos_libc_prf+0xec>
1c008b88:	4685                	li	a3,1
1c008b8a:	c636                	sw	a3,12(sp)
1c008b8c:	8456                	mv	s0,s5
1c008b8e:	b38d                	j	1c0088f0 <pos_libc_prf+0xec>
1c008b90:	8456                	mv	s0,s5
1c008b92:	0a85                	addi	s5,s5,1
1c008b94:	00291793          	slli	a5,s2,0x2
1c008b98:	97ca                	add	a5,a5,s2
1c008b9a:	0786                	slli	a5,a5,0x1
1c008b9c:	97a6                	add	a5,a5,s1
1c008b9e:	000ac483          	lbu	s1,0(s5)
1c008ba2:	fd078913          	addi	s2,a5,-48
1c008ba6:	fd048793          	addi	a5,s1,-48
1c008baa:	fef5f3e3          	bleu	a5,a1,1c008b90 <pos_libc_prf+0x38c>
1c008bae:	00240993          	addi	s3,s0,2
1c008bb2:	a811                	j	1c008bc6 <pos_libc_prf+0x3c2>
1c008bb4:	000c2903          	lw	s2,0(s8)
1c008bb8:	0c11                	addi	s8,s8,4
1c008bba:	12094d63          	bltz	s2,1c008cf4 <pos_libc_prf+0x4f0>
1c008bbe:	000ac483          	lbu	s1,0(s5)
1c008bc2:	00240993          	addi	s3,s0,2
1c008bc6:	0c800693          	li	a3,200
1c008bca:	04d95933          	p.minu	s2,s2,a3
1c008bce:	b3a9                	j	1c008918 <pos_libc_prf+0x114>
1c008bd0:	06500693          	li	a3,101
1c008bd4:	12d4d563          	ble	a3,s1,1c008cfe <pos_libc_prf+0x4fa>
1c008bd8:	04700693          	li	a3,71
1c008bdc:	dc96cbe3          	blt	a3,s1,1c0089b2 <pos_libc_prf+0x1ae>
1c008be0:	04500693          	li	a3,69
1c008be4:	10d4dd63          	ble	a3,s1,1c008cfe <pos_libc_prf+0x4fa>
1c008be8:	c80483e3          	beqz	s1,1c00886e <pos_libc_prf+0x6a>
1c008bec:	02500693          	li	a3,37
1c008bf0:	70d49863          	bne	s1,a3,1c009300 <pos_libc_prf+0xafc>
1c008bf4:	85ea                	mv	a1,s10
1c008bf6:	02500513          	li	a0,37
1c008bfa:	9b02                	jalr	s6
1c008bfc:	f7f527e3          	p.beqimm	a0,-1,1c008b6a <pos_libc_prf+0x366>
1c008c00:	0d85                	addi	s11,s11,1
1c008c02:	b195                	j	1c008866 <pos_libc_prf+0x62>
1c008c04:	0009c783          	lbu	a5,0(s3)
1c008c08:	02a00693          	li	a3,42
1c008c0c:	00198513          	addi	a0,s3,1
1c008c10:	0ad79963          	bne	a5,a3,1c008cc2 <pos_libc_prf+0x4be>
1c008c14:	000c2a03          	lw	s4,0(s8)
1c008c18:	0019c483          	lbu	s1,1(s3)
1c008c1c:	0c11                	addi	s8,s8,4
1c008c1e:	0989                	addi	s3,s3,2
1c008c20:	0c800693          	li	a3,200
1c008c24:	cf46dfe3          	ble	s4,a3,1c008922 <pos_libc_prf+0x11e>
1c008c28:	5a7d                	li	s4,-1
1c008c2a:	b9e5                	j	1c008922 <pos_libc_prf+0x11e>
1c008c2c:	06e00693          	li	a3,110
1c008c30:	58d48763          	beq	s1,a3,1c0091be <pos_libc_prf+0x9ba>
1c008c34:	5896dc63          	ble	s1,a3,1c0091cc <pos_libc_prf+0x9c8>
1c008c38:	47b2                	lw	a5,12(sp)
1c008c3a:	004c0813          	addi	a6,s8,4
1c008c3e:	000c2603          	lw	a2,0(s8)
1c008c42:	04078ee3          	beqz	a5,1c00949e <pos_libc_prf+0xc9a>
1c008c46:	03000793          	li	a5,48
1c008c4a:	02f10223          	sb	a5,36(sp)
1c008c4e:	02060de3          	beqz	a2,1c009488 <pos_libc_prf+0xc84>
1c008c52:	02510513          	addi	a0,sp,37
1c008c56:	86aa                	mv	a3,a0
1c008c58:	87b6                	mv	a5,a3
1c008c5a:	f8363733          	p.bclr	a4,a2,28,3
1c008c5e:	03070713          	addi	a4,a4,48
1c008c62:	820d                	srli	a2,a2,0x3
1c008c64:	00e780ab          	p.sb	a4,1(a5!)
1c008c68:	fa6d                	bnez	a2,1c008c5a <pos_libc_prf+0x456>
1c008c6a:	40a78733          	sub	a4,a5,a0
1c008c6e:	01475d63          	ble	s4,a4,1c008c88 <pos_libc_prf+0x484>
1c008c72:	40fa0633          	sub	a2,s4,a5
1c008c76:	03000593          	li	a1,48
1c008c7a:	962a                	add	a2,a2,a0
1c008c7c:	004640fb          	lp.setup	x1,a2,1c008c84 <pos_libc_prf+0x480>
1c008c80:	00b780ab          	p.sb	a1,1(a5!)
1c008c84:	40a78733          	sub	a4,a5,a0
1c008c88:	fe078fab          	p.sb	zero,-1(a5!)
1c008c8c:	00f6fc63          	bleu	a5,a3,1c008ca4 <pos_libc_prf+0x4a0>
1c008c90:	0006c583          	lbu	a1,0(a3)
1c008c94:	0007c603          	lbu	a2,0(a5)
1c008c98:	feb78fab          	p.sb	a1,-1(a5!)
1c008c9c:	00c680ab          	p.sb	a2,1(a3!)
1c008ca0:	fef6e8e3          	bltu	a3,a5,1c008c90 <pos_libc_prf+0x48c>
1c008ca4:	46b2                	lw	a3,12(sp)
1c008ca6:	0c800793          	li	a5,200
1c008caa:	00d704b3          	add	s1,a4,a3
1c008cae:	0bfa2de3          	p.beqimm	s4,-1,1c009568 <pos_libc_prf+0xd64>
1c008cb2:	ea97cce3          	blt	a5,s1,1c008b6a <pos_libc_prf+0x366>
1c008cb6:	02000793          	li	a5,32
1c008cba:	8c42                	mv	s8,a6
1c008cbc:	c602                	sw	zero,12(sp)
1c008cbe:	c83e                	sw	a5,16(sp)
1c008cc0:	b35d                	j	1c008a66 <pos_libc_prf+0x262>
1c008cc2:	fd078813          	addi	a6,a5,-48
1c008cc6:	46a5                	li	a3,9
1c008cc8:	84be                	mv	s1,a5
1c008cca:	862a                	mv	a2,a0
1c008ccc:	4a01                	li	s4,0
1c008cce:	45a5                	li	a1,9
1c008cd0:	89aa                	mv	s3,a0
1c008cd2:	c506e8e3          	bltu	a3,a6,1c008922 <pos_libc_prf+0x11e>
1c008cd6:	002a1793          	slli	a5,s4,0x2
1c008cda:	97d2                	add	a5,a5,s4
1c008cdc:	0786                	slli	a5,a5,0x1
1c008cde:	97a6                	add	a5,a5,s1
1c008ce0:	0016448b          	p.lbu	s1,1(a2!)
1c008ce4:	fd078a13          	addi	s4,a5,-48
1c008ce8:	fd048793          	addi	a5,s1,-48
1c008cec:	fef5f5e3          	bleu	a5,a1,1c008cd6 <pos_libc_prf+0x4d2>
1c008cf0:	89b2                	mv	s3,a2
1c008cf2:	b73d                	j	1c008c20 <pos_libc_prf+0x41c>
1c008cf4:	4705                	li	a4,1
1c008cf6:	41200933          	neg	s2,s2
1c008cfa:	ce3a                	sw	a4,28(sp)
1c008cfc:	b5c9                	j	1c008bbe <pos_libc_prf+0x3ba>
1c008cfe:	0c1d                	addi	s8,s8,7
1c008d00:	c40c3c33          	p.bclr	s8,s8,2,0
1c008d04:	000c2683          	lw	a3,0(s8)
1c008d08:	004c2803          	lw	a6,4(s8)
1c008d0c:	7ff00613          	li	a2,2047
1c008d10:	0156d893          	srli	a7,a3,0x15
1c008d14:	01485513          	srli	a0,a6,0x14
1c008d18:	00b81593          	slli	a1,a6,0xb
1c008d1c:	00b8e5b3          	or	a1,a7,a1
1c008d20:	e8b53533          	p.bclr	a0,a0,20,11
1c008d24:	0c21                	addi	s8,s8,8
1c008d26:	06ae                	slli	a3,a3,0xb
1c008d28:	c1f5b5b3          	p.bclr	a1,a1,0,31
1c008d2c:	7ac50b63          	beq	a0,a2,1c0094e2 <pos_libc_prf+0xcde>
1c008d30:	04600613          	li	a2,70
1c008d34:	00c49463          	bne	s1,a2,1c008d3c <pos_libc_prf+0x538>
1c008d38:	06600493          	li	s1,102
1c008d3c:	00d56633          	or	a2,a0,a3
1c008d40:	8e4d                	or	a2,a2,a1
1c008d42:	7c060b63          	beqz	a2,1c009518 <pos_libc_prf+0xd14>
1c008d46:	c0250513          	addi	a0,a0,-1022
1c008d4a:	c1f5c333          	p.bset	t1,a1,0,31
1c008d4e:	140842e3          	bltz	a6,1c009692 <pos_libc_prf+0xe8e>
1c008d52:	4752                	lw	a4,20(sp)
1c008d54:	180703e3          	beqz	a4,1c0096da <pos_libc_prf+0xed6>
1c008d58:	02b00613          	li	a2,43
1c008d5c:	02c10223          	sb	a2,36(sp)
1c008d60:	02510893          	addi	a7,sp,37
1c008d64:	5679                	li	a2,-2
1c008d66:	4801                	li	a6,0
1c008d68:	06c55763          	ble	a2,a0,1c008dd6 <pos_libc_prf+0x5d2>
1c008d6c:	33333e37          	lui	t3,0x33333
1c008d70:	80000eb7          	lui	t4,0x80000
1c008d74:	332e0e13          	addi	t3,t3,818 # 33333332 <__cluster_text_end+0x17323332>
1c008d78:	fffece93          	not	t4,t4
1c008d7c:	5f79                	li	t5,-2
1c008d7e:	a011                	j	1c008d82 <pos_libc_prf+0x57e>
1c008d80:	853e                	mv	a0,a5
1c008d82:	01f31613          	slli	a2,t1,0x1f
1c008d86:	0016d713          	srli	a4,a3,0x1
1c008d8a:	fc16b7b3          	p.bclr	a5,a3,30,1
1c008d8e:	8f51                	or	a4,a4,a2
1c008d90:	00e786b3          	add	a3,a5,a4
1c008d94:	00f6b7b3          	sltu	a5,a3,a5
1c008d98:	00135313          	srli	t1,t1,0x1
1c008d9c:	933e                	add	t1,t1,a5
1c008d9e:	00150793          	addi	a5,a0,1
1c008da2:	fc6e6fe3          	bltu	t3,t1,1c008d80 <pos_libc_prf+0x57c>
1c008da6:	00269613          	slli	a2,a3,0x2
1c008daa:	01e6d593          	srli	a1,a3,0x1e
1c008dae:	00231713          	slli	a4,t1,0x2
1c008db2:	96b2                	add	a3,a3,a2
1c008db4:	8f4d                	or	a4,a4,a1
1c008db6:	933a                	add	t1,t1,a4
1c008db8:	00c6b633          	sltu	a2,a3,a2
1c008dbc:	9332                	add	t1,t1,a2
1c008dbe:	01f6d713          	srli	a4,a3,0x1f
1c008dc2:	0509                	addi	a0,a0,2
1c008dc4:	187d                	addi	a6,a6,-1
1c008dc6:	01d31663          	bne	t1,t4,1c008dd2 <pos_libc_prf+0x5ce>
1c008dca:	0686                	slli	a3,a3,0x1
1c008dcc:	fc174333          	p.bset	t1,a4,30,1
1c008dd0:	853e                	mv	a0,a5
1c008dd2:	fbe548e3          	blt	a0,t5,1c008d82 <pos_libc_prf+0x57e>
1c008dd6:	06a05763          	blez	a0,1c008e44 <pos_libc_prf+0x640>
1c008dda:	80000eb7          	lui	t4,0x80000
1c008dde:	4f15                	li	t5,5
1c008de0:	fffece93          	not	t4,t4
1c008de4:	00268613          	addi	a2,a3,2
1c008de8:	00d636b3          	sltu	a3,a2,a3
1c008dec:	9336                	add	t1,t1,a3
1c008dee:	03e357b3          	divu	a5,t1,t5
1c008df2:	00365593          	srli	a1,a2,0x3
1c008df6:	157d                	addi	a0,a0,-1
1c008df8:	0805                	addi	a6,a6,1
1c008dfa:	00279713          	slli	a4,a5,0x2
1c008dfe:	973e                	add	a4,a4,a5
1c008e00:	40e30333          	sub	t1,t1,a4
1c008e04:	01d31713          	slli	a4,t1,0x1d
1c008e08:	8dd9                	or	a1,a1,a4
1c008e0a:	03e5d5b3          	divu	a1,a1,t5
1c008e0e:	00359693          	slli	a3,a1,0x3
1c008e12:	00559713          	slli	a4,a1,0x5
1c008e16:	9736                	add	a4,a4,a3
1c008e18:	40e60733          	sub	a4,a2,a4
1c008e1c:	03e75733          	divu	a4,a4,t5
1c008e20:	81f5                	srli	a1,a1,0x1d
1c008e22:	97ae                	add	a5,a5,a1
1c008e24:	96ba                	add	a3,a3,a4
1c008e26:	00e6b733          	sltu	a4,a3,a4
1c008e2a:	00f70333          	add	t1,a4,a5
1c008e2e:	01f6d793          	srli	a5,a3,0x1f
1c008e32:	0306                	slli	t1,t1,0x1
1c008e34:	0067e333          	or	t1,a5,t1
1c008e38:	0686                	slli	a3,a3,0x1
1c008e3a:	157d                	addi	a0,a0,-1
1c008e3c:	fe6ef9e3          	bleu	t1,t4,1c008e2e <pos_libc_prf+0x62a>
1c008e40:	faa042e3          	bgtz	a0,1c008de4 <pos_libc_prf+0x5e0>
1c008e44:	4611                	li	a2,4
1c008e46:	8e09                	sub	a2,a2,a0
1c008e48:	012640fb          	lp.setup	x1,a2,1c008e6c <pos_libc_prf+0x668>
1c008e4c:	01f31713          	slli	a4,t1,0x1f
1c008e50:	0016d793          	srli	a5,a3,0x1
1c008e54:	8fd9                	or	a5,a5,a4
1c008e56:	fc16b6b3          	p.bclr	a3,a3,30,1
1c008e5a:	00f68eb3          	add	t4,a3,a5
1c008e5e:	00135313          	srli	t1,t1,0x1
1c008e62:	00deb6b3          	sltu	a3,t4,a3
1c008e66:	00668533          	add	a0,a3,t1
1c008e6a:	832a                	mv	t1,a0
1c008e6c:	86f6                	mv	a3,t4
1c008e6e:	06700693          	li	a3,103
1c008e72:	6c0a4e63          	bltz	s4,1c00954e <pos_libc_prf+0xd4a>
1c008e76:	62d48863          	beq	s1,a3,1c0094a6 <pos_libc_prf+0xca2>
1c008e7a:	04700693          	li	a3,71
1c008e7e:	62d48463          	beq	s1,a3,1c0094a6 <pos_libc_prf+0xca2>
1c008e82:	06600693          	li	a3,102
1c008e86:	78d48963          	beq	s1,a3,1c009618 <pos_libc_prf+0xe14>
1c008e8a:	001a0f13          	addi	t5,s4,1
1c008e8e:	45c1                	li	a1,16
1c008e90:	04bf4f33          	p.min	t5,t5,a1
1c008e94:	1f7d                	addi	t5,t5,-1
1c008e96:	4e01                	li	t3,0
1c008e98:	4581                	li	a1,0
1c008e9a:	080006b7          	lui	a3,0x8000
1c008e9e:	4f95                	li	t6,5
1c008ea0:	0f05                	addi	t5,t5,1
1c008ea2:	02ff40fb          	lp.setup	x1,t5,1c008f00 <pos_libc_prf+0x6fc>
1c008ea6:	00258713          	addi	a4,a1,2
1c008eaa:	00b737b3          	sltu	a5,a4,a1
1c008eae:	97b6                	add	a5,a5,a3
1c008eb0:	03f7d5b3          	divu	a1,a5,t6
1c008eb4:	00375613          	srli	a2,a4,0x3
1c008eb8:	00259693          	slli	a3,a1,0x2
1c008ebc:	96ae                	add	a3,a3,a1
1c008ebe:	8f95                	sub	a5,a5,a3
1c008ec0:	07f6                	slli	a5,a5,0x1d
1c008ec2:	8e5d                	or	a2,a2,a5
1c008ec4:	03f65633          	divu	a2,a2,t6
1c008ec8:	00361693          	slli	a3,a2,0x3
1c008ecc:	00561793          	slli	a5,a2,0x5
1c008ed0:	97b6                	add	a5,a5,a3
1c008ed2:	40f707b3          	sub	a5,a4,a5
1c008ed6:	03f7d7b3          	divu	a5,a5,t6
1c008eda:	01d65713          	srli	a4,a2,0x1d
1c008ede:	972e                	add	a4,a4,a1
1c008ee0:	96be                	add	a3,a3,a5
1c008ee2:	00f6b7b3          	sltu	a5,a3,a5
1c008ee6:	973e                	add	a4,a4,a5
1c008ee8:	01f71613          	slli	a2,a4,0x1f
1c008eec:	0016d793          	srli	a5,a3,0x1
1c008ef0:	8fd1                	or	a5,a5,a2
1c008ef2:	fc16b6b3          	p.bclr	a3,a3,30,1
1c008ef6:	00f685b3          	add	a1,a3,a5
1c008efa:	8305                	srli	a4,a4,0x1
1c008efc:	00d5b6b3          	sltu	a3,a1,a3
1c008f00:	96ba                	add	a3,a3,a4
1c008f02:	95f6                	add	a1,a1,t4
1c008f04:	96aa                	add	a3,a3,a0
1c008f06:	01d5beb3          	sltu	t4,a1,t4
1c008f0a:	00de8533          	add	a0,t4,a3
1c008f0e:	f6053633          	p.bclr	a2,a0,27,0
1c008f12:	86ae                	mv	a3,a1
1c008f14:	c22d                	beqz	a2,1c008f76 <pos_libc_prf+0x772>
1c008f16:	00258613          	addi	a2,a1,2
1c008f1a:	00b636b3          	sltu	a3,a2,a1
1c008f1e:	96aa                	add	a3,a3,a0
1c008f20:	4e95                	li	t4,5
1c008f22:	03d6d333          	divu	t1,a3,t4
1c008f26:	00365513          	srli	a0,a2,0x3
1c008f2a:	0805                	addi	a6,a6,1
1c008f2c:	00231593          	slli	a1,t1,0x2
1c008f30:	959a                	add	a1,a1,t1
1c008f32:	8e8d                	sub	a3,a3,a1
1c008f34:	06f6                	slli	a3,a3,0x1d
1c008f36:	8d55                	or	a0,a0,a3
1c008f38:	03d55533          	divu	a0,a0,t4
1c008f3c:	00351593          	slli	a1,a0,0x3
1c008f40:	00551693          	slli	a3,a0,0x5
1c008f44:	96ae                	add	a3,a3,a1
1c008f46:	40d606b3          	sub	a3,a2,a3
1c008f4a:	03d6d6b3          	divu	a3,a3,t4
1c008f4e:	8175                	srli	a0,a0,0x1d
1c008f50:	951a                	add	a0,a0,t1
1c008f52:	95b6                	add	a1,a1,a3
1c008f54:	00d5b6b3          	sltu	a3,a1,a3
1c008f58:	00a68633          	add	a2,a3,a0
1c008f5c:	01f61513          	slli	a0,a2,0x1f
1c008f60:	0015d693          	srli	a3,a1,0x1
1c008f64:	8ec9                	or	a3,a3,a0
1c008f66:	fc15b5b3          	p.bclr	a1,a1,30,1
1c008f6a:	96ae                	add	a3,a3,a1
1c008f6c:	8205                	srli	a2,a2,0x1
1c008f6e:	00b6b5b3          	sltu	a1,a3,a1
1c008f72:	00c58533          	add	a0,a1,a2
1c008f76:	06600593          	li	a1,102
1c008f7a:	00188613          	addi	a2,a7,1
1c008f7e:	60b48463          	beq	s1,a1,1c009586 <pos_libc_prf+0xd82>
1c008f82:	00269593          	slli	a1,a3,0x2
1c008f86:	01e6de93          	srli	t4,a3,0x1e
1c008f8a:	00251313          	slli	t1,a0,0x2
1c008f8e:	96ae                	add	a3,a3,a1
1c008f90:	006ee333          	or	t1,t4,t1
1c008f94:	00b6b5b3          	sltu	a1,a3,a1
1c008f98:	951a                	add	a0,a0,t1
1c008f9a:	952e                	add	a0,a0,a1
1c008f9c:	0506                	slli	a0,a0,0x1
1c008f9e:	01f6d593          	srli	a1,a3,0x1f
1c008fa2:	8d4d                	or	a0,a0,a1
1c008fa4:	01c55593          	srli	a1,a0,0x1c
1c008fa8:	03058313          	addi	t1,a1,48
1c008fac:	47b2                	lw	a5,12(sp)
1c008fae:	10000737          	lui	a4,0x10000
1c008fb2:	00b035b3          	snez	a1,a1
1c008fb6:	177d                	addi	a4,a4,-1
1c008fb8:	00688023          	sb	t1,0(a7)
1c008fbc:	0686                	slli	a3,a3,0x1
1c008fbe:	8d79                	and	a0,a0,a4
1c008fc0:	40b80833          	sub	a6,a6,a1
1c008fc4:	5a078863          	beqz	a5,1c009574 <pos_libc_prf+0xd70>
1c008fc8:	02e00613          	li	a2,46
1c008fcc:	00c880a3          	sb	a2,1(a7)
1c008fd0:	00288613          	addi	a2,a7,2
1c008fd4:	040a0b63          	beqz	s4,1c00902a <pos_libc_prf+0x826>
1c008fd8:	8332                	mv	t1,a2
1c008fda:	9a32                	add	s4,s4,a2
1c008fdc:	4ebd                	li	t4,15
1c008fde:	03000f13          	li	t5,48
1c008fe2:	00269793          	slli	a5,a3,0x2
1c008fe6:	01e6d593          	srli	a1,a3,0x1e
1c008fea:	00251713          	slli	a4,a0,0x2
1c008fee:	00d78633          	add	a2,a5,a3
1c008ff2:	8f4d                	or	a4,a4,a1
1c008ff4:	972a                	add	a4,a4,a0
1c008ff6:	00f637b3          	sltu	a5,a2,a5
1c008ffa:	97ba                	add	a5,a5,a4
1c008ffc:	0786                	slli	a5,a5,0x1
1c008ffe:	01f65713          	srli	a4,a2,0x1f
1c009002:	8fd9                	or	a5,a5,a4
1c009004:	01c7d713          	srli	a4,a5,0x1c
1c009008:	03070713          	addi	a4,a4,48 # 10000030 <ne16_infeat+0x2c>
1c00900c:	2fd05463          	blez	t4,1c0092f4 <pos_libc_prf+0xaf0>
1c009010:	100005b7          	lui	a1,0x10000
1c009014:	15fd                	addi	a1,a1,-1
1c009016:	00e300ab          	p.sb	a4,1(t1!)
1c00901a:	1efd                	addi	t4,t4,-1
1c00901c:	00161693          	slli	a3,a2,0x1
1c009020:	00b7f533          	and	a0,a5,a1
1c009024:	fa6a1fe3          	bne	s4,t1,1c008fe2 <pos_libc_prf+0x7de>
1c009028:	8652                	mv	a2,s4
1c00902a:	0c0e1163          	bnez	t3,1c0090ec <pos_libc_prf+0x8e8>
1c00902e:	c054b6b3          	p.bclr	a3,s1,0,5
1c009032:	04500593          	li	a1,69
1c009036:	02b69963          	bne	a3,a1,1c009068 <pos_libc_prf+0x864>
1c00903a:	87a6                	mv	a5,s1
1c00903c:	00f60023          	sb	a5,0(a2)
1c009040:	5e084d63          	bltz	a6,1c00963a <pos_libc_prf+0xe36>
1c009044:	02b00793          	li	a5,43
1c009048:	00f600a3          	sb	a5,1(a2)
1c00904c:	47a9                	li	a5,10
1c00904e:	02f846b3          	div	a3,a6,a5
1c009052:	0611                	addi	a2,a2,4
1c009054:	02f867b3          	rem	a5,a6,a5
1c009058:	03068693          	addi	a3,a3,48 # 8000030 <__l1_heap_size+0x7ff0338>
1c00905c:	fed60f23          	sb	a3,-2(a2)
1c009060:	03078793          	addi	a5,a5,48
1c009064:	fef60fa3          	sb	a5,-1(a2)
1c009068:	00060023          	sb	zero,0(a2)
1c00906c:	419604b3          	sub	s1,a2,s9
1c009070:	46d2                	lw	a3,20(sp)
1c009072:	4762                	lw	a4,24(sp)
1c009074:	8ed9                	or	a3,a3,a4
1c009076:	c636                	sw	a3,12(sp)
1c009078:	2a069463          	bnez	a3,1c009320 <pos_libc_prf+0xb1c>
1c00907c:	02414683          	lbu	a3,36(sp)
1c009080:	02d00793          	li	a5,45
1c009084:	28f68e63          	beq	a3,a5,1c009320 <pos_libc_prf+0xb1c>
1c009088:	0c800793          	li	a5,200
1c00908c:	9c97dde3          	ble	s1,a5,1c008a66 <pos_libc_prf+0x262>
1c009090:	547d                	li	s0,-1
1c009092:	fdeff06f          	j	1c008870 <pos_libc_prf+0x6c>
1c009096:	0305                	addi	t1,t1,1
1c009098:	00269793          	slli	a5,a3,0x2
1c00909c:	01e6d893          	srli	a7,a3,0x1e
1c0090a0:	00251713          	slli	a4,a0,0x2
1c0090a4:	00d785b3          	add	a1,a5,a3
1c0090a8:	00e8e733          	or	a4,a7,a4
1c0090ac:	972a                	add	a4,a4,a0
1c0090ae:	00f5b7b3          	sltu	a5,a1,a5
1c0090b2:	97ba                	add	a5,a5,a4
1c0090b4:	0786                	slli	a5,a5,0x1
1c0090b6:	01f5d713          	srli	a4,a1,0x1f
1c0090ba:	8fd9                	or	a5,a5,a4
1c0090bc:	01c7d893          	srli	a7,a5,0x1c
1c0090c0:	03000713          	li	a4,48
1c0090c4:	01d05c63          	blez	t4,1c0090dc <pos_libc_prf+0x8d8>
1c0090c8:	00159693          	slli	a3,a1,0x1
1c0090cc:	100005b7          	lui	a1,0x10000
1c0090d0:	15fd                	addi	a1,a1,-1
1c0090d2:	03088713          	addi	a4,a7,48
1c0090d6:	1efd                	addi	t4,t4,-1
1c0090d8:	00b7f533          	and	a0,a5,a1
1c0090dc:	fee30fa3          	sb	a4,-1(t1)
1c0090e0:	fa661be3          	bne	a2,t1,1c009096 <pos_libc_prf+0x892>
1c0090e4:	014f8633          	add	a2,t6,s4
1c0090e8:	f80e00e3          	beqz	t3,1c009068 <pos_libc_prf+0x864>
1c0090ec:	03000513          	li	a0,48
1c0090f0:	a011                	j	1c0090f4 <pos_libc_prf+0x8f0>
1c0090f2:	8636                	mv	a2,a3
1c0090f4:	fff60693          	addi	a3,a2,-1
1c0090f8:	0006c583          	lbu	a1,0(a3)
1c0090fc:	fea58be3          	beq	a1,a0,1c0090f2 <pos_libc_prf+0x8ee>
1c009100:	02e00513          	li	a0,46
1c009104:	f2a595e3          	bne	a1,a0,1c00902e <pos_libc_prf+0x82a>
1c009108:	8636                	mv	a2,a3
1c00910a:	b715                	j	1c00902e <pos_libc_prf+0x82a>
1c00910c:	00f680ab          	p.sb	a5,1(a3!)
1c009110:	8c051ce3          	bnez	a0,1c0089e8 <pos_libc_prf+0x1e4>
1c009114:	b8c5                	j	1c008a04 <pos_libc_prf+0x200>
1c009116:	8dba                	mv	s11,a4
1c009118:	f34ff06f          	j	1c00884c <pos_libc_prf+0x48>
1c00911c:	77e1                	lui	a5,0xffff8
1c00911e:	8307c793          	xori	a5,a5,-2000
1c009122:	02610693          	addi	a3,sp,38
1c009126:	000c2583          	lw	a1,0(s8)
1c00912a:	02f11223          	sh	a5,36(sp)
1c00912e:	0c11                	addi	s8,s8,4
1c009130:	87b6                	mv	a5,a3
1c009132:	48a5                	li	a7,9
1c009134:	f645b633          	p.bclr	a2,a1,27,4
1c009138:	0ff67713          	andi	a4,a2,255
1c00913c:	03070513          	addi	a0,a4,48
1c009140:	8191                	srli	a1,a1,0x4
1c009142:	05770713          	addi	a4,a4,87
1c009146:	06c8e863          	bltu	a7,a2,1c0091b6 <pos_libc_prf+0x9b2>
1c00914a:	00a780ab          	p.sb	a0,1(a5!) # ffff8001 <pulp__FC+0xffff8002>
1c00914e:	f1fd                	bnez	a1,1c009134 <pos_libc_prf+0x930>
1c009150:	40d78733          	sub	a4,a5,a3
1c009154:	461d                	li	a2,7
1c009156:	02e64563          	blt	a2,a4,1c009180 <pos_libc_prf+0x97c>
1c00915a:	1998                	addi	a4,sp,240
1c00915c:	40e78533          	sub	a0,a5,a4
1c009160:	40f68633          	sub	a2,a3,a5
1c009164:	0cb50513          	addi	a0,a0,203
1c009168:	4821                	li	a6,8
1c00916a:	03000593          	li	a1,48
1c00916e:	0621                	addi	a2,a2,8
1c009170:	5aa84263          	blt	a6,a0,1c009714 <pos_libc_prf+0xf10>
1c009174:	004640fb          	lp.setup	x1,a2,1c00917c <pos_libc_prf+0x978>
1c009178:	00b780ab          	p.sb	a1,1(a5!)
1c00917c:	40d78733          	sub	a4,a5,a3
1c009180:	fe078fab          	p.sb	zero,-1(a5!)
1c009184:	00f6fc63          	bleu	a5,a3,1c00919c <pos_libc_prf+0x998>
1c009188:	0006c583          	lbu	a1,0(a3)
1c00918c:	0007c603          	lbu	a2,0(a5)
1c009190:	feb78fab          	p.sb	a1,-1(a5!)
1c009194:	00c680ab          	p.sb	a2,1(a3!)
1c009198:	fef6e8e3          	bltu	a3,a5,1c009188 <pos_libc_prf+0x984>
1c00919c:	00270493          	addi	s1,a4,2
1c0091a0:	0c800793          	li	a5,200
1c0091a4:	17fa2963          	p.beqimm	s4,-1,1c009316 <pos_libc_prf+0xb12>
1c0091a8:	9c97c1e3          	blt	a5,s1,1c008b6a <pos_libc_prf+0x366>
1c0091ac:	02000713          	li	a4,32
1c0091b0:	c602                	sw	zero,12(sp)
1c0091b2:	c83a                	sw	a4,16(sp)
1c0091b4:	b84d                	j	1c008a66 <pos_libc_prf+0x262>
1c0091b6:	00e780ab          	p.sb	a4,1(a5!)
1c0091ba:	fdad                	bnez	a1,1c009134 <pos_libc_prf+0x930>
1c0091bc:	bf51                	j	1c009150 <pos_libc_prf+0x94c>
1c0091be:	000c2783          	lw	a5,0(s8)
1c0091c2:	0c11                	addi	s8,s8,4
1c0091c4:	01b7a023          	sw	s11,0(a5)
1c0091c8:	e84ff06f          	j	1c00884c <pos_libc_prf+0x48>
1c0091cc:	06900693          	li	a3,105
1c0091d0:	12d49863          	bne	s1,a3,1c009300 <pos_libc_prf+0xafc>
1c0091d4:	000c2503          	lw	a0,0(s8)
1c0091d8:	0c11                	addi	s8,s8,4
1c0091da:	34054d63          	bltz	a0,1c009534 <pos_libc_prf+0xd30>
1c0091de:	4652                	lw	a2,20(sp)
1c0091e0:	86aa                	mv	a3,a0
1c0091e2:	2e061963          	bnez	a2,1c0094d4 <pos_libc_prf+0xcd0>
1c0091e6:	4762                	lw	a4,24(sp)
1c0091e8:	87e6                	mv	a5,s9
1c0091ea:	c719                	beqz	a4,1c0091f8 <pos_libc_prf+0x9f4>
1c0091ec:	02000793          	li	a5,32
1c0091f0:	02f10223          	sb	a5,36(sp)
1c0091f4:	02510793          	addi	a5,sp,37
1c0091f8:	873e                	mv	a4,a5
1c0091fa:	45a9                	li	a1,10
1c0091fc:	02b6f633          	remu	a2,a3,a1
1c009200:	02b6d6b3          	divu	a3,a3,a1
1c009204:	03060613          	addi	a2,a2,48
1c009208:	00c700ab          	p.sb	a2,1(a4!)
1c00920c:	fae5                	bnez	a3,1c0091fc <pos_libc_prf+0x9f8>
1c00920e:	40f706b3          	sub	a3,a4,a5
1c009212:	0146dc63          	ble	s4,a3,1c00922a <pos_libc_prf+0xa26>
1c009216:	40e786b3          	sub	a3,a5,a4
1c00921a:	03000613          	li	a2,48
1c00921e:	96d2                	add	a3,a3,s4
1c009220:	0046c0fb          	lp.setup	x1,a3,1c009228 <pos_libc_prf+0xa24>
1c009224:	00c700ab          	p.sb	a2,1(a4!)
1c009228:	0001                	nop
1c00922a:	86ba                	mv	a3,a4
1c00922c:	fe068fab          	p.sb	zero,-1(a3!)
1c009230:	00d7fc63          	bleu	a3,a5,1c009248 <pos_libc_prf+0xa44>
1c009234:	0007c583          	lbu	a1,0(a5)
1c009238:	0006c603          	lbu	a2,0(a3)
1c00923c:	feb68fab          	p.sb	a1,-1(a3!)
1c009240:	00c780ab          	p.sb	a2,1(a5!)
1c009244:	fed7e8e3          	bltu	a5,a3,1c009234 <pos_libc_prf+0xa30>
1c009248:	47d2                	lw	a5,20(sp)
1c00924a:	4662                	lw	a2,24(sp)
1c00924c:	419704b3          	sub	s1,a4,s9
1c009250:	8fd1                	or	a5,a5,a2
1c009252:	c63e                	sw	a5,12(sp)
1c009254:	e399                	bnez	a5,1c00925a <pos_libc_prf+0xa56>
1c009256:	817d                	srli	a0,a0,0x1f
1c009258:	c62a                	sw	a0,12(sp)
1c00925a:	e3fa27e3          	p.beqimm	s4,-1,1c009088 <pos_libc_prf+0x884>
1c00925e:	0c800793          	li	a5,200
1c009262:	9097c4e3          	blt	a5,s1,1c008b6a <pos_libc_prf+0x366>
1c009266:	02000713          	li	a4,32
1c00926a:	c83a                	sw	a4,16(sp)
1c00926c:	ffaff06f          	j	1c008a66 <pos_libc_prf+0x262>
1c009270:	000c2783          	lw	a5,0(s8)
1c009274:	020102a3          	sb	zero,37(sp)
1c009278:	0c11                	addi	s8,s8,4
1c00927a:	02f10223          	sb	a5,36(sp)
1c00927e:	4485                	li	s1,1
1c009280:	f16ff06f          	j	1c008996 <pos_libc_prf+0x192>
1c009284:	000c2683          	lw	a3,0(s8)
1c009288:	87e6                	mv	a5,s9
1c00928a:	0c11                	addi	s8,s8,4
1c00928c:	45a9                	li	a1,10
1c00928e:	02b6f733          	remu	a4,a3,a1
1c009292:	02b6d6b3          	divu	a3,a3,a1
1c009296:	03070713          	addi	a4,a4,48
1c00929a:	00e780ab          	p.sb	a4,1(a5!)
1c00929e:	fae5                	bnez	a3,1c00928e <pos_libc_prf+0xa8a>
1c0092a0:	419784b3          	sub	s1,a5,s9
1c0092a4:	0144dd63          	ble	s4,s1,1c0092be <pos_libc_prf+0xaba>
1c0092a8:	40fc86b3          	sub	a3,s9,a5
1c0092ac:	03000613          	li	a2,48
1c0092b0:	96d2                	add	a3,a3,s4
1c0092b2:	0046c0fb          	lp.setup	x1,a3,1c0092ba <pos_libc_prf+0xab6>
1c0092b6:	00c780ab          	p.sb	a2,1(a5!)
1c0092ba:	419784b3          	sub	s1,a5,s9
1c0092be:	fe078fab          	p.sb	zero,-1(a5!)
1c0092c2:	00fcfd63          	bleu	a5,s9,1c0092dc <pos_libc_prf+0xad8>
1c0092c6:	86e6                	mv	a3,s9
1c0092c8:	0006c603          	lbu	a2,0(a3)
1c0092cc:	0007c703          	lbu	a4,0(a5)
1c0092d0:	fec78fab          	p.sb	a2,-1(a5!)
1c0092d4:	00e680ab          	p.sb	a4,1(a3!)
1c0092d8:	fef6e8e3          	bltu	a3,a5,1c0092c8 <pos_libc_prf+0xac4>
1c0092dc:	0c800793          	li	a5,200
1c0092e0:	03fa2b63          	p.beqimm	s4,-1,1c009316 <pos_libc_prf+0xb12>
1c0092e4:	8897c3e3          	blt	a5,s1,1c008b6a <pos_libc_prf+0x366>
1c0092e8:	02000693          	li	a3,32
1c0092ec:	c602                	sw	zero,12(sp)
1c0092ee:	c836                	sw	a3,16(sp)
1c0092f0:	f76ff06f          	j	1c008a66 <pos_libc_prf+0x262>
1c0092f4:	01e300ab          	p.sb	t5,1(t1!)
1c0092f8:	ce6a15e3          	bne	s4,t1,1c008fe2 <pos_libc_prf+0x7de>
1c0092fc:	8652                	mv	a2,s4
1c0092fe:	b335                	j	1c00902a <pos_libc_prf+0x826>
1c009300:	0c800693          	li	a3,200
1c009304:	d496d463          	ble	s1,a3,1c00884c <pos_libc_prf+0x48>
1c009308:	547d                	li	s0,-1
1c00930a:	d66ff06f          	j	1c008870 <pos_libc_prf+0x6c>
1c00930e:	e60a5b63          	bgez	s4,1c008984 <pos_libc_prf+0x180>
1c009312:	e76ff06f          	j	1c008988 <pos_libc_prf+0x184>
1c009316:	8497cae3          	blt	a5,s1,1c008b6a <pos_libc_prf+0x366>
1c00931a:	c602                	sw	zero,12(sp)
1c00931c:	f4aff06f          	j	1c008a66 <pos_libc_prf+0x262>
1c009320:	0c800793          	li	a5,200
1c009324:	8497c3e3          	blt	a5,s1,1c008b6a <pos_libc_prf+0x366>
1c009328:	4685                	li	a3,1
1c00932a:	c636                	sw	a3,12(sp)
1c00932c:	f3aff06f          	j	1c008a66 <pos_libc_prf+0x262>
1c009330:	409909b3          	sub	s3,s2,s1
1c009334:	00148613          	addi	a2,s1,1
1c009338:	85e6                	mv	a1,s9
1c00933a:	013c8533          	add	a0,s9,s3
1c00933e:	9e2ff0ef          	jal	ra,1c008520 <memmove>
1c009342:	46c2                	lw	a3,16(sp)
1c009344:	02000793          	li	a5,32
1c009348:	32f68b63          	beq	a3,a5,1c00967e <pos_libc_prf+0xe7a>
1c00934c:	4732                	lw	a4,12(sp)
1c00934e:	84ca                	mv	s1,s2
1c009350:	99ba                	add	s3,s3,a4
1c009352:	ff375b63          	ble	s3,a4,1c008b48 <pos_libc_prf+0x344>
1c009356:	46b2                	lw	a3,12(sp)
1c009358:	4595                	li	a1,5
1c00935a:	00dc87b3          	add	a5,s9,a3
1c00935e:	40f007b3          	neg	a5,a5
1c009362:	fa27b7b3          	p.bclr	a5,a5,29,2
1c009366:	00378613          	addi	a2,a5,3
1c00936a:	fff98693          	addi	a3,s3,-1
1c00936e:	04b67633          	p.maxu	a2,a2,a1
1c009372:	8e99                	sub	a3,a3,a4
1c009374:	40e985b3          	sub	a1,s3,a4
1c009378:	06c6e763          	bltu	a3,a2,1c0093e6 <pos_libc_prf+0xbe2>
1c00937c:	863a                	mv	a2,a4
1c00937e:	cf95                	beqz	a5,1c0093ba <pos_libc_prf+0xbb6>
1c009380:	1990                	addi	a2,sp,240
1c009382:	00e606b3          	add	a3,a2,a4
1c009386:	4742                	lw	a4,16(sp)
1c009388:	f2e68a23          	sb	a4,-204(a3)
1c00938c:	46b2                	lw	a3,12(sp)
1c00938e:	00168613          	addi	a2,a3,1
1c009392:	0217a463          	p.beqimm	a5,1,1c0093ba <pos_libc_prf+0xbb6>
1c009396:	86ba                	mv	a3,a4
1c009398:	1998                	addi	a4,sp,240
1c00939a:	963a                	add	a2,a2,a4
1c00939c:	4732                	lw	a4,12(sp)
1c00939e:	f2d60a23          	sb	a3,-204(a2)
1c0093a2:	00270613          	addi	a2,a4,2
1c0093a6:	0037ba63          	p.bneimm	a5,3,1c0093ba <pos_libc_prf+0xbb6>
1c0093aa:	8736                	mv	a4,a3
1c0093ac:	1994                	addi	a3,sp,240
1c0093ae:	9636                	add	a2,a2,a3
1c0093b0:	46b2                	lw	a3,12(sp)
1c0093b2:	f2e60a23          	sb	a4,-204(a2)
1c0093b6:	00368613          	addi	a2,a3,3
1c0093ba:	4732                	lw	a4,12(sp)
1c0093bc:	8d9d                	sub	a1,a1,a5
1c0093be:	0025d693          	srli	a3,a1,0x2
1c0093c2:	97ba                	add	a5,a5,a4
1c0093c4:	4742                	lw	a4,16(sp)
1c0093c6:	97e6                	add	a5,a5,s9
1c0093c8:	00e05557          	pv.add.sc.b	a0,zero,a4
1c0093cc:	34068663          	beqz	a3,1c009718 <pos_libc_prf+0xf14>
1c0093d0:	0046c0fb          	lp.setup	x1,a3,1c0093d8 <pos_libc_prf+0xbd4>
1c0093d4:	00a7a22b          	p.sw	a0,4(a5!)
1c0093d8:	0001                	nop
1c0093da:	c205b7b3          	p.bclr	a5,a1,1,0
1c0093de:	963e                	add	a2,a2,a5
1c0093e0:	c632                	sw	a2,12(sp)
1c0093e2:	f6b78263          	beq	a5,a1,1c008b46 <pos_libc_prf+0x342>
1c0093e6:	46b2                	lw	a3,12(sp)
1c0093e8:	4742                	lw	a4,16(sp)
1c0093ea:	198c                	addi	a1,sp,240
1c0093ec:	00d587b3          	add	a5,a1,a3
1c0093f0:	f2e78a23          	sb	a4,-204(a5)
1c0093f4:	00168793          	addi	a5,a3,1
1c0093f8:	f537d763          	ble	s3,a5,1c008b46 <pos_libc_prf+0x342>
1c0093fc:	97ae                	add	a5,a5,a1
1c0093fe:	f2e78a23          	sb	a4,-204(a5)
1c009402:	00268793          	addi	a5,a3,2
1c009406:	f537d063          	ble	s3,a5,1c008b46 <pos_libc_prf+0x342>
1c00940a:	97ae                	add	a5,a5,a1
1c00940c:	f2e78a23          	sb	a4,-204(a5)
1c009410:	00368793          	addi	a5,a3,3
1c009414:	f337d963          	ble	s3,a5,1c008b46 <pos_libc_prf+0x342>
1c009418:	97ae                	add	a5,a5,a1
1c00941a:	f2e78a23          	sb	a4,-204(a5)
1c00941e:	00468793          	addi	a5,a3,4
1c009422:	f337d263          	ble	s3,a5,1c008b46 <pos_libc_prf+0x342>
1c009426:	97ae                	add	a5,a5,a1
1c009428:	f2e78a23          	sb	a4,-204(a5)
1c00942c:	00568a93          	addi	s5,a3,5
1c009430:	f13adb63          	ble	s3,s5,1c008b46 <pos_libc_prf+0x342>
1c009434:	9aae                	add	s5,s5,a1
1c009436:	f2ea8a23          	sb	a4,-204(s5)
1c00943a:	84ca                	mv	s1,s2
1c00943c:	f0cff06f          	j	1c008b48 <pos_libc_prf+0x344>
1c009440:	4301                	li	t1,0
1c009442:	8666                	mv	a2,s9
1c009444:	da0ff06f          	j	1c0089e4 <pos_libc_prf+0x1e0>
1c009448:	02414783          	lbu	a5,36(sp)
1c00944c:	1054                	addi	a3,sp,36
1c00944e:	4665                	li	a2,25
1c009450:	de078b63          	beqz	a5,1c008a46 <pos_libc_prf+0x242>
1c009454:	fe078593          	addi	a1,a5,-32
1c009458:	f9f78793          	addi	a5,a5,-97
1c00945c:	0ff7f793          	andi	a5,a5,255
1c009460:	00f66963          	bltu	a2,a5,1c009472 <pos_libc_prf+0xc6e>
1c009464:	00b680ab          	p.sb	a1,1(a3!)
1c009468:	0006c783          	lbu	a5,0(a3)
1c00946c:	f7e5                	bnez	a5,1c009454 <pos_libc_prf+0xc50>
1c00946e:	dd8ff06f          	j	1c008a46 <pos_libc_prf+0x242>
1c009472:	0685                	addi	a3,a3,1
1c009474:	0006c783          	lbu	a5,0(a3)
1c009478:	fff1                	bnez	a5,1c009454 <pos_libc_prf+0xc50>
1c00947a:	dccff06f          	j	1c008a46 <pos_libc_prf+0x242>
1c00947e:	ee97c663          	blt	a5,s1,1c008b6a <pos_libc_prf+0x366>
1c009482:	8c46                	mv	s8,a7
1c009484:	de2ff06f          	j	1c008a66 <pos_libc_prf+0x262>
1c009488:	020102a3          	sb	zero,37(sp)
1c00948c:	8c42                	mv	s8,a6
1c00948e:	44b2                	lw	s1,12(sp)
1c009490:	d1fa2363          	p.beqimm	s4,-1,1c008996 <pos_libc_prf+0x192>
1c009494:	02000693          	li	a3,32
1c009498:	c836                	sw	a3,16(sp)
1c00949a:	cfcff06f          	j	1c008996 <pos_libc_prf+0x192>
1c00949e:	8566                	mv	a0,s9
1c0094a0:	86e6                	mv	a3,s9
1c0094a2:	fb6ff06f          	j	1c008c58 <pos_libc_prf+0x454>
1c0094a6:	4732                	lw	a4,12(sp)
1c0094a8:	4e01                	li	t3,0
1c0094aa:	e319                	bnez	a4,1c0094b0 <pos_libc_prf+0xcac>
1c0094ac:	01403e33          	snez	t3,s4
1c0094b0:	5675                	li	a2,-3
1c0094b2:	001a0693          	addi	a3,s4,1
1c0094b6:	00c84463          	blt	a6,a2,1c0094be <pos_libc_prf+0xcba>
1c0094ba:	1706d063          	ble	a6,a3,1c00961a <pos_libc_prf+0xe16>
1c0094be:	47c1                	li	a5,16
1c0094c0:	04f6cf33          	p.min	t5,a3,a5
1c0094c4:	06700693          	li	a3,103
1c0094c8:	1f7d                	addi	t5,t5,-1
1c0094ca:	1ed48a63          	beq	s1,a3,1c0096be <pos_libc_prf+0xeba>
1c0094ce:	04500493          	li	s1,69
1c0094d2:	b2d9                	j	1c008e98 <pos_libc_prf+0x694>
1c0094d4:	02b00793          	li	a5,43
1c0094d8:	02f10223          	sb	a5,36(sp)
1c0094dc:	02510793          	addi	a5,sp,37
1c0094e0:	bb21                	j	1c0091f8 <pos_libc_prf+0x9f4>
1c0094e2:	8666                	mv	a2,s9
1c0094e4:	1a084063          	bltz	a6,1c009684 <pos_libc_prf+0xe80>
1c0094e8:	8ecd                	or	a3,a3,a1
1c0094ea:	fbf48793          	addi	a5,s1,-65
1c0094ee:	00360713          	addi	a4,a2,3
1c0094f2:	14069b63          	bnez	a3,1c009648 <pos_libc_prf+0xe44>
1c0094f6:	46e5                	li	a3,25
1c0094f8:	1af6e563          	bltu	a3,a5,1c0096a2 <pos_libc_prf+0xe9e>
1c0094fc:	6795                	lui	a5,0x5
1c0094fe:	e4978793          	addi	a5,a5,-439 # 4e49 <__cluster_text_size+0x4e49>
1c009502:	00f61023          	sh	a5,0(a2)
1c009506:	04600793          	li	a5,70
1c00950a:	00f60123          	sb	a5,2(a2)
1c00950e:	000601a3          	sb	zero,3(a2)
1c009512:	419704b3          	sub	s1,a4,s9
1c009516:	bea9                	j	1c009070 <pos_libc_prf+0x86c>
1c009518:	46d2                	lw	a3,20(sp)
1c00951a:	14068463          	beqz	a3,1c009662 <pos_libc_prf+0xe5e>
1c00951e:	02b00693          	li	a3,43
1c009522:	02d10223          	sb	a3,36(sp)
1c009526:	02510893          	addi	a7,sp,37
1c00952a:	4801                	li	a6,0
1c00952c:	4501                	li	a0,0
1c00952e:	4681                	li	a3,0
1c009530:	4301                	li	t1,0
1c009532:	ba09                	j	1c008e44 <pos_libc_prf+0x640>
1c009534:	02d00793          	li	a5,45
1c009538:	02f10223          	sb	a5,36(sp)
1c00953c:	800007b7          	lui	a5,0x80000
1c009540:	1af50963          	beq	a0,a5,1c0096f2 <pos_libc_prf+0xeee>
1c009544:	40a006b3          	neg	a3,a0
1c009548:	02510793          	addi	a5,sp,37
1c00954c:	b175                	j	1c0091f8 <pos_libc_prf+0x9f4>
1c00954e:	4a19                	li	s4,6
1c009550:	92d495e3          	bne	s1,a3,1c008e7a <pos_libc_prf+0x676>
1c009554:	46b2                	lw	a3,12(sp)
1c009556:	57f5                	li	a5,-3
1c009558:	0016ce13          	xori	t3,a3,1
1c00955c:	14f85d63          	ble	a5,a6,1c0096b6 <pos_libc_prf+0xeb2>
1c009560:	06500493          	li	s1,101
1c009564:	4f19                	li	t5,6
1c009566:	ba0d                	j	1c008e98 <pos_libc_prf+0x694>
1c009568:	e097c163          	blt	a5,s1,1c008b6a <pos_libc_prf+0x366>
1c00956c:	8c42                	mv	s8,a6
1c00956e:	c602                	sw	zero,12(sp)
1c009570:	cf6ff06f          	j	1c008a66 <pos_libc_prf+0x262>
1c009574:	aa0a0be3          	beqz	s4,1c00902a <pos_libc_prf+0x826>
1c009578:	02e00593          	li	a1,46
1c00957c:	00288613          	addi	a2,a7,2
1c009580:	00b880a3          	sb	a1,1(a7)
1c009584:	bc91                	j	1c008fd8 <pos_libc_prf+0x7d4>
1c009586:	17005b63          	blez	a6,1c0096fc <pos_libc_prf+0xef8>
1c00958a:	9846                	add	a6,a6,a7
1c00958c:	4ec1                	li	t4,16
1c00958e:	03000f13          	li	t5,48
1c009592:	00269793          	slli	a5,a3,0x2
1c009596:	01e6d593          	srli	a1,a3,0x1e
1c00959a:	00251713          	slli	a4,a0,0x2
1c00959e:	00d78633          	add	a2,a5,a3
1c0095a2:	8f4d                	or	a4,a4,a1
1c0095a4:	972a                	add	a4,a4,a0
1c0095a6:	00f637b3          	sltu	a5,a2,a5
1c0095aa:	97ba                	add	a5,a5,a4
1c0095ac:	0786                	slli	a5,a5,0x1
1c0095ae:	01f65713          	srli	a4,a2,0x1f
1c0095b2:	8fd9                	or	a5,a5,a4
1c0095b4:	01c7d713          	srli	a4,a5,0x1c
1c0095b8:	03070713          	addi	a4,a4,48
1c0095bc:	05d05963          	blez	t4,1c00960e <pos_libc_prf+0xe0a>
1c0095c0:	00e880ab          	p.sb	a4,1(a7!)
1c0095c4:	10000737          	lui	a4,0x10000
1c0095c8:	177d                	addi	a4,a4,-1
1c0095ca:	1efd                	addi	t4,t4,-1
1c0095cc:	00161693          	slli	a3,a2,0x1
1c0095d0:	00e7f533          	and	a0,a5,a4
1c0095d4:	fb181fe3          	bne	a6,a7,1c009592 <pos_libc_prf+0xd8e>
1c0095d8:	8642                	mv	a2,a6
1c0095da:	4801                	li	a6,0
1c0095dc:	47b2                	lw	a5,12(sp)
1c0095de:	e399                	bnez	a5,1c0095e4 <pos_libc_prf+0xde0>
1c0095e0:	b00a04e3          	beqz	s4,1c0090e8 <pos_libc_prf+0x8e4>
1c0095e4:	00160f93          	addi	t6,a2,1
1c0095e8:	001a0593          	addi	a1,s4,1
1c0095ec:	02e00893          	li	a7,46
1c0095f0:	01160023          	sb	a7,0(a2)
1c0095f4:	837e                	mv	t1,t6
1c0095f6:	962e                	add	a2,a2,a1
1c0095f8:	03000593          	li	a1,48
1c0095fc:	aec304e3          	beq	t1,a2,1c0090e4 <pos_libc_prf+0x8e0>
1c009600:	0305                	addi	t1,t1,1
1c009602:	a8080be3          	beqz	a6,1c009098 <pos_libc_prf+0x894>
1c009606:	feb30fa3          	sb	a1,-1(t1)
1c00960a:	0805                	addi	a6,a6,1
1c00960c:	bfc5                	j	1c0095fc <pos_libc_prf+0xdf8>
1c00960e:	01e880ab          	p.sb	t5,1(a7!)
1c009612:	f91810e3          	bne	a6,a7,1c009592 <pos_libc_prf+0xd8e>
1c009616:	b7c9                	j	1c0095d8 <pos_libc_prf+0xdd4>
1c009618:	4e01                	li	t3,0
1c00961a:	014807b3          	add	a5,a6,s4
1c00961e:	0e07c563          	bltz	a5,1c009708 <pos_libc_prf+0xf04>
1c009622:	4641                	li	a2,16
1c009624:	04c7cf33          	p.min	t5,a5,a2
1c009628:	1f7d                	addi	t5,t5,-1
1c00962a:	06600493          	li	s1,102
1c00962e:	860795e3          	bnez	a5,1c008e98 <pos_libc_prf+0x694>
1c009632:	4581                	li	a1,0
1c009634:	080006b7          	lui	a3,0x8000
1c009638:	b0e9                	j	1c008f02 <pos_libc_prf+0x6fe>
1c00963a:	02d00793          	li	a5,45
1c00963e:	41000833          	neg	a6,a6
1c009642:	00f600a3          	sb	a5,1(a2)
1c009646:	b419                	j	1c00904c <pos_libc_prf+0x848>
1c009648:	46e5                	li	a3,25
1c00964a:	06f6ee63          	bltu	a3,a5,1c0096c6 <pos_libc_prf+0xec2>
1c00964e:	6791                	lui	a5,0x4
1c009650:	14e78793          	addi	a5,a5,334 # 414e <__cluster_text_size+0x414e>
1c009654:	00f61023          	sh	a5,0(a2)
1c009658:	04e00793          	li	a5,78
1c00965c:	00f60123          	sb	a5,2(a2)
1c009660:	b57d                	j	1c00950e <pos_libc_prf+0xd0a>
1c009662:	47e2                	lw	a5,24(sp)
1c009664:	cfc5                	beqz	a5,1c00971c <pos_libc_prf+0xf18>
1c009666:	02000693          	li	a3,32
1c00966a:	02d10223          	sb	a3,36(sp)
1c00966e:	02510893          	addi	a7,sp,37
1c009672:	4801                	li	a6,0
1c009674:	4501                	li	a0,0
1c009676:	4681                	li	a3,0
1c009678:	4301                	li	t1,0
1c00967a:	fcaff06f          	j	1c008e44 <pos_libc_prf+0x640>
1c00967e:	c602                	sw	zero,12(sp)
1c009680:	4732                	lw	a4,12(sp)
1c009682:	b9d1                	j	1c009356 <pos_libc_prf+0xb52>
1c009684:	02d00613          	li	a2,45
1c009688:	02c10223          	sb	a2,36(sp)
1c00968c:	02510613          	addi	a2,sp,37
1c009690:	bda1                	j	1c0094e8 <pos_libc_prf+0xce4>
1c009692:	02d00613          	li	a2,45
1c009696:	02c10223          	sb	a2,36(sp)
1c00969a:	02510893          	addi	a7,sp,37
1c00969e:	ec6ff06f          	j	1c008d64 <pos_libc_prf+0x560>
1c0096a2:	679d                	lui	a5,0x7
1c0096a4:	e6978793          	addi	a5,a5,-407 # 6e69 <__cluster_text_size+0x6e69>
1c0096a8:	00f61023          	sh	a5,0(a2)
1c0096ac:	06600793          	li	a5,102
1c0096b0:	00f60123          	sb	a5,2(a2)
1c0096b4:	bda9                	j	1c00950e <pos_libc_prf+0xd0a>
1c0096b6:	479d                	li	a5,7
1c0096b8:	f707d1e3          	ble	a6,a5,1c00961a <pos_libc_prf+0xe16>
1c0096bc:	4f19                	li	t5,6
1c0096be:	06500493          	li	s1,101
1c0096c2:	fd6ff06f          	j	1c008e98 <pos_libc_prf+0x694>
1c0096c6:	6799                	lui	a5,0x6
1c0096c8:	16e78793          	addi	a5,a5,366 # 616e <__cluster_text_size+0x616e>
1c0096cc:	00f61023          	sh	a5,0(a2)
1c0096d0:	06e00793          	li	a5,110
1c0096d4:	00f60123          	sb	a5,2(a2)
1c0096d8:	bd1d                	j	1c00950e <pos_libc_prf+0xd0a>
1c0096da:	47e2                	lw	a5,24(sp)
1c0096dc:	88e6                	mv	a7,s9
1c0096de:	e8078363          	beqz	a5,1c008d64 <pos_libc_prf+0x560>
1c0096e2:	02000613          	li	a2,32
1c0096e6:	02c10223          	sb	a2,36(sp)
1c0096ea:	02510893          	addi	a7,sp,37
1c0096ee:	e76ff06f          	j	1c008d64 <pos_libc_prf+0x560>
1c0096f2:	800006b7          	lui	a3,0x80000
1c0096f6:	02510793          	addi	a5,sp,37
1c0096fa:	bcfd                	j	1c0091f8 <pos_libc_prf+0x9f4>
1c0096fc:	03000593          	li	a1,48
1c009700:	00b88023          	sb	a1,0(a7)
1c009704:	4ec1                	li	t4,16
1c009706:	bdd9                	j	1c0095dc <pos_libc_prf+0xdd8>
1c009708:	06600493          	li	s1,102
1c00970c:	b71d                	j	1c009632 <pos_libc_prf+0xe2e>
1c00970e:	4685                	li	a3,1
1c009710:	bc4ff06f          	j	1c008ad4 <pos_libc_prf+0x2d0>
1c009714:	4605                	li	a2,1
1c009716:	bcb9                	j	1c009174 <pos_libc_prf+0x970>
1c009718:	4685                	li	a3,1
1c00971a:	b95d                	j	1c0093d0 <pos_libc_prf+0xbcc>
1c00971c:	88e6                	mv	a7,s9
1c00971e:	bf91                	j	1c009672 <pos_libc_prf+0xe6e>

1c009720 <pos_init_start>:
1c009720:	1141                	addi	sp,sp,-16
1c009722:	c422                	sw	s0,8(sp)
1c009724:	1c000437          	lui	s0,0x1c000
1c009728:	c606                	sw	ra,12(sp)
1c00972a:	00840413          	addi	s0,s0,8 # 1c000008 <ctor_list>
1c00972e:	c89fe0ef          	jal	ra,1c0083b6 <pos_soc_init>
1c009732:	2279                	jal	1c0098c0 <pos_irq_init>
1c009734:	2ac1                	jal	1c009904 <pos_soc_event_init>
1c009736:	20e5                	jal	1c00981e <pos_allocs_init>
1c009738:	405c                	lw	a5,4(s0)
1c00973a:	c791                	beqz	a5,1c009746 <pos_init_start+0x26>
1c00973c:	0421                	addi	s0,s0,8
1c00973e:	9782                	jalr	a5
1c009740:	0044278b          	p.lw	a5,4(s0!)
1c009744:	ffed                	bnez	a5,1c00973e <pos_init_start+0x1e>
1c009746:	888ff0ef          	jal	ra,1c0087ce <pos_io_start>
1c00974a:	300467f3          	csrrsi	a5,mstatus,8
1c00974e:	f1402573          	csrr	a0,mhartid
1c009752:	8515                	srai	a0,a0,0x5
1c009754:	f2653533          	p.bclr	a0,a0,25,6
1c009758:	47fd                	li	a5,31
1c00975a:	00f50a63          	beq	a0,a5,1c00976e <pos_init_start+0x4e>
1c00975e:	4422                	lw	s0,8(sp)
1c009760:	40b2                	lw	ra,12(sp)
1c009762:	1c0085b7          	lui	a1,0x1c008
1c009766:	2c858593          	addi	a1,a1,712 # 1c0082c8 <main>
1c00976a:	0141                	addi	sp,sp,16
1c00976c:	a4b1                	j	1c0099b8 <cluster_start>
1c00976e:	40b2                	lw	ra,12(sp)
1c009770:	4422                	lw	s0,8(sp)
1c009772:	0141                	addi	sp,sp,16
1c009774:	8082                	ret

1c009776 <pos_init_stop>:
1c009776:	1141                	addi	sp,sp,-16
1c009778:	c422                	sw	s0,8(sp)
1c00977a:	1c000437          	lui	s0,0x1c000
1c00977e:	c606                	sw	ra,12(sp)
1c009780:	01440413          	addi	s0,s0,20 # 1c000014 <dtor_list>
1c009784:	84eff0ef          	jal	ra,1c0087d2 <pos_io_stop>
1c009788:	405c                	lw	a5,4(s0)
1c00978a:	c791                	beqz	a5,1c009796 <pos_init_stop+0x20>
1c00978c:	0421                	addi	s0,s0,8
1c00978e:	9782                	jalr	a5
1c009790:	0044278b          	p.lw	a5,4(s0!)
1c009794:	ffed                	bnez	a5,1c00978e <pos_init_stop+0x18>
1c009796:	40b2                	lw	ra,12(sp)
1c009798:	4422                	lw	s0,8(sp)
1c00979a:	0141                	addi	sp,sp,16
1c00979c:	8082                	ret

1c00979e <pos_alloc_init>:
1c00979e:	00758793          	addi	a5,a1,7
1c0097a2:	c407b7b3          	p.bclr	a5,a5,2,0
1c0097a6:	40b785b3          	sub	a1,a5,a1
1c0097aa:	c11c                	sw	a5,0(a0)
1c0097ac:	8e0d                	sub	a2,a2,a1
1c0097ae:	00c05763          	blez	a2,1c0097bc <pos_alloc_init+0x1e>
1c0097b2:	c4063633          	p.bclr	a2,a2,2,0
1c0097b6:	c390                	sw	a2,0(a5)
1c0097b8:	0007a223          	sw	zero,4(a5)
1c0097bc:	8082                	ret

1c0097be <pos_alloc>:
1c0097be:	4110                	lw	a2,0(a0)
1c0097c0:	059d                	addi	a1,a1,7
1c0097c2:	c405b5b3          	p.bclr	a1,a1,2,0
1c0097c6:	ca31                	beqz	a2,1c00981a <pos_alloc+0x5c>
1c0097c8:	4218                	lw	a4,0(a2)
1c0097ca:	425c                	lw	a5,4(a2)
1c0097cc:	02b75963          	ble	a1,a4,1c0097fe <pos_alloc+0x40>
1c0097d0:	cb81                	beqz	a5,1c0097e0 <pos_alloc+0x22>
1c0097d2:	4398                	lw	a4,0(a5)
1c0097d4:	43d4                	lw	a3,4(a5)
1c0097d6:	00b75763          	ble	a1,a4,1c0097e4 <pos_alloc+0x26>
1c0097da:	863e                	mv	a2,a5
1c0097dc:	87b6                	mv	a5,a3
1c0097de:	fbf5                	bnez	a5,1c0097d2 <pos_alloc+0x14>
1c0097e0:	853e                	mv	a0,a5
1c0097e2:	8082                	ret
1c0097e4:	00b70a63          	beq	a4,a1,1c0097f8 <pos_alloc+0x3a>
1c0097e8:	00b78533          	add	a0,a5,a1
1c0097ec:	8f0d                	sub	a4,a4,a1
1c0097ee:	c118                	sw	a4,0(a0)
1c0097f0:	c154                	sw	a3,4(a0)
1c0097f2:	c248                	sw	a0,4(a2)
1c0097f4:	853e                	mv	a0,a5
1c0097f6:	8082                	ret
1c0097f8:	c254                	sw	a3,4(a2)
1c0097fa:	853e                	mv	a0,a5
1c0097fc:	8082                	ret
1c0097fe:	00e58b63          	beq	a1,a4,1c009814 <pos_alloc+0x56>
1c009802:	00b606b3          	add	a3,a2,a1
1c009806:	8f0d                	sub	a4,a4,a1
1c009808:	c2dc                	sw	a5,4(a3)
1c00980a:	c298                	sw	a4,0(a3)
1c00980c:	87b2                	mv	a5,a2
1c00980e:	c114                	sw	a3,0(a0)
1c009810:	853e                	mv	a0,a5
1c009812:	8082                	ret
1c009814:	c11c                	sw	a5,0(a0)
1c009816:	87b2                	mv	a5,a2
1c009818:	b7e1                	j	1c0097e0 <pos_alloc+0x22>
1c00981a:	4781                	li	a5,0
1c00981c:	b7d1                	j	1c0097e0 <pos_alloc+0x22>

1c00981e <pos_allocs_init>:
1c00981e:	1141                	addi	sp,sp,-16
1c009820:	1c0055b7          	lui	a1,0x1c005
1c009824:	c606                	sw	ra,12(sp)
1c009826:	98c58793          	addi	a5,a1,-1652 # 1c00498c <__l2_priv0_end>
1c00982a:	1c008637          	lui	a2,0x1c008
1c00982e:	04c7cc63          	blt	a5,a2,1c009886 <pos_allocs_init+0x68>
1c009832:	4581                	li	a1,0
1c009834:	4601                	li	a2,0
1c009836:	1c005537          	lui	a0,0x1c005
1c00983a:	97c50513          	addi	a0,a0,-1668 # 1c00497c <pos_alloc_l2>
1c00983e:	3785                	jal	1c00979e <pos_alloc_init>
1c009840:	1c00a5b7          	lui	a1,0x1c00a
1c009844:	aa458793          	addi	a5,a1,-1372 # 1c009aa4 <__l2_priv1_end>
1c009848:	1c010637          	lui	a2,0x1c010
1c00984c:	02c7c963          	blt	a5,a2,1c00987e <pos_allocs_init+0x60>
1c009850:	4581                	li	a1,0
1c009852:	4601                	li	a2,0
1c009854:	1c005537          	lui	a0,0x1c005
1c009858:	98050513          	addi	a0,a0,-1664 # 1c004980 <pos_alloc_l2+0x4>
1c00985c:	3789                	jal	1c00979e <pos_alloc_init>
1c00985e:	100005b7          	lui	a1,0x10000
1c009862:	40b2                	lw	ra,12(sp)
1c009864:	30858793          	addi	a5,a1,776 # 10000308 <__l2_shared_end>
1c009868:	1c080637          	lui	a2,0x1c080
1c00986c:	1c005537          	lui	a0,0x1c005
1c009870:	8e1d                	sub	a2,a2,a5
1c009872:	30858593          	addi	a1,a1,776
1c009876:	98450513          	addi	a0,a0,-1660 # 1c004984 <pos_alloc_l2+0x8>
1c00987a:	0141                	addi	sp,sp,16
1c00987c:	b70d                	j	1c00979e <pos_alloc_init>
1c00987e:	8e1d                	sub	a2,a2,a5
1c009880:	aa458593          	addi	a1,a1,-1372
1c009884:	bfc1                	j	1c009854 <pos_allocs_init+0x36>
1c009886:	8e1d                	sub	a2,a2,a5
1c009888:	98c58593          	addi	a1,a1,-1652
1c00988c:	b76d                	j	1c009836 <pos_allocs_init+0x18>

1c00988e <alloc_init_l1>:
1c00988e:	100007b7          	lui	a5,0x10000
1c009892:	01651593          	slli	a1,a0,0x16
1c009896:	30878793          	addi	a5,a5,776 # 10000308 <__l2_shared_end>
1c00989a:	95be                	add	a1,a1,a5
1c00989c:	1c0057b7          	lui	a5,0x1c005
1c0098a0:	050a                	slli	a0,a0,0x2
1c0098a2:	6641                	lui	a2,0x10
1c0098a4:	97878793          	addi	a5,a5,-1672 # 1c004978 <pos_alloc_l1>
1c0098a8:	cf860613          	addi	a2,a2,-776 # fcf8 <__l1_heap_size>
1c0098ac:	953e                	add	a0,a0,a5
1c0098ae:	bdc5                	j	1c00979e <pos_alloc_init>

1c0098b0 <pi_l1_malloc>:
1c0098b0:	1c0057b7          	lui	a5,0x1c005
1c0098b4:	050a                	slli	a0,a0,0x2
1c0098b6:	97878793          	addi	a5,a5,-1672 # 1c004978 <pos_alloc_l1>
1c0098ba:	953e                	add	a0,a0,a5
1c0098bc:	b709                	j	1c0097be <pos_alloc>

1c0098be <__rt_handle_illegal_instr>:
1c0098be:	8082                	ret

1c0098c0 <pos_irq_init>:
1c0098c0:	f14027f3          	csrr	a5,mhartid
1c0098c4:	477d                	li	a4,31
1c0098c6:	ca5797b3          	p.extractu	a5,a5,5,5
1c0098ca:	00e78f63          	beq	a5,a4,1c0098e8 <pos_irq_init+0x28>
1c0098ce:	002047b7          	lui	a5,0x204
1c0098d2:	577d                	li	a4,-1
1c0098d4:	cb98                	sw	a4,16(a5)
1c0098d6:	1c0087b7          	lui	a5,0x1c008
1c0098da:	00078793          	mv	a5,a5
1c0098de:	c007c7b3          	p.bset	a5,a5,0,0
1c0098e2:	30579073          	csrw	mtvec,a5
1c0098e6:	8082                	ret
1c0098e8:	1a10a7b7          	lui	a5,0x1a10a
1c0098ec:	577d                	li	a4,-1
1c0098ee:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa109500>
1c0098f2:	1c0087b7          	lui	a5,0x1c008
1c0098f6:	00078793          	mv	a5,a5
1c0098fa:	c007c7b3          	p.bset	a5,a5,0,0
1c0098fe:	30579073          	csrw	mtvec,a5
1c009902:	8082                	ret

1c009904 <pos_soc_event_init>:
1c009904:	1a1067b7          	lui	a5,0x1a106
1c009908:	577d                	li	a4,-1
1c00990a:	00478693          	addi	a3,a5,4 # 1a106004 <__l2_shared_end+0xa105cfc>
1c00990e:	c298                	sw	a4,0(a3)
1c009910:	00878693          	addi	a3,a5,8
1c009914:	c298                	sw	a4,0(a3)
1c009916:	00c78693          	addi	a3,a5,12
1c00991a:	c298                	sw	a4,0(a3)
1c00991c:	01078693          	addi	a3,a5,16
1c009920:	c298                	sw	a4,0(a3)
1c009922:	01478693          	addi	a3,a5,20
1c009926:	c298                	sw	a4,0(a3)
1c009928:	01878693          	addi	a3,a5,24
1c00992c:	c298                	sw	a4,0(a3)
1c00992e:	01c78693          	addi	a3,a5,28
1c009932:	c298                	sw	a4,0(a3)
1c009934:	02078793          	addi	a5,a5,32
1c009938:	c398                	sw	a4,0(a5)
1c00993a:	8082                	ret

1c00993c <bench_cluster_forward>:
1c00993c:	f14027f3          	csrr	a5,mhartid
1c009940:	ca5797b3          	p.extractu	a5,a5,5,5
1c009944:	02a78063          	beq	a5,a0,1c009964 <bench_cluster_forward+0x28>
1c009948:	1c0085b7          	lui	a1,0x1c008
1c00994c:	1141                	addi	sp,sp,-16
1c00994e:	2c858593          	addi	a1,a1,712 # 1c0082c8 <main>
1c009952:	c422                	sw	s0,8(sp)
1c009954:	c606                	sw	ra,12(sp)
1c009956:	842a                	mv	s0,a0
1c009958:	2085                	jal	1c0099b8 <cluster_start>
1c00995a:	8522                	mv	a0,s0
1c00995c:	4422                	lw	s0,8(sp)
1c00995e:	40b2                	lw	ra,12(sp)
1c009960:	0141                	addi	sp,sp,16
1c009962:	a235                	j	1c009a8e <cluster_wait>
1c009964:	4501                	li	a0,0
1c009966:	8082                	ret

1c009968 <cluster_entry_stub>:
1c009968:	1141                	addi	sp,sp,-16
1c00996a:	c606                	sw	ra,12(sp)
1c00996c:	002047b7          	lui	a5,0x204
1c009970:	00070737          	lui	a4,0x70
1c009974:	c798                	sw	a4,8(a5)
1c009976:	0ff00713          	li	a4,255
1c00997a:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4508>
1c00997e:	00e7a023          	sw	a4,0(a5)
1c009982:	00e7a623          	sw	a4,12(a5)
1c009986:	1c0057b7          	lui	a5,0x1c005
1c00998a:	9887a783          	lw	a5,-1656(a5) # 1c004988 <cluster_entry>
1c00998e:	9782                	jalr	a5
1c009990:	f14027f3          	csrr	a5,mhartid
1c009994:	f457b7b3          	p.bclr	a5,a5,26,5
1c009998:	eb89                	bnez	a5,1c0099aa <cluster_entry_stub+0x42>
1c00999a:	1c005737          	lui	a4,0x1c005
1c00999e:	1c0057b7          	lui	a5,0x1c005
1c0099a2:	96a72823          	sw	a0,-1680(a4) # 1c004970 <_edata>
1c0099a6:	9607aa23          	sw	zero,-1676(a5) # 1c004974 <cluster_running>
1c0099aa:	002047b7          	lui	a5,0x204
1c0099ae:	577d                	li	a4,-1
1c0099b0:	c3d8                	sw	a4,4(a5)
1c0099b2:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f4340>
1c0099b6:	a001                	j	1c0099b6 <cluster_entry_stub+0x4e>

1c0099b8 <cluster_start>:
1c0099b8:	1141                	addi	sp,sp,-16
1c0099ba:	1c0057b7          	lui	a5,0x1c005
1c0099be:	c226                	sw	s1,4(sp)
1c0099c0:	84aa                	mv	s1,a0
1c0099c2:	4509                	li	a0,2
1c0099c4:	98b7a423          	sw	a1,-1656(a5) # 1c004988 <cluster_entry>
1c0099c8:	c606                	sw	ra,12(sp)
1c0099ca:	c422                	sw	s0,8(sp)
1c0099cc:	941fe0ef          	jal	ra,1c00830c <pos_fll_init>
1c0099d0:	8526                	mv	a0,s1
1c0099d2:	3d75                	jal	1c00988e <alloc_init_l1>
1c0099d4:	04048413          	addi	s0,s1,64
1c0099d8:	00201737          	lui	a4,0x201
1c0099dc:	40070713          	addi	a4,a4,1024 # 201400 <__l1_heap_size+0x1f1708>
1c0099e0:	045a                	slli	s0,s0,0x16
1c0099e2:	56fd                	li	a3,-1
1c0099e4:	f14027f3          	csrr	a5,mhartid
1c0099e8:	00d46723          	p.sw	a3,a4(s0)
1c0099ec:	ca5797b3          	p.extractu	a5,a5,5,5
1c0099f0:	477d                	li	a4,31
1c0099f2:	00e78f63          	beq	a5,a4,1c009a10 <cluster_start+0x58>
1c0099f6:	002047b7          	lui	a5,0x204
1c0099fa:	00070737          	lui	a4,0x70
1c0099fe:	c798                	sw	a4,8(a5)
1c009a00:	0ff00713          	li	a4,255
1c009a04:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4508>
1c009a08:	00e7a023          	sw	a4,0(a5)
1c009a0c:	00e7a623          	sw	a4,12(a5)
1c009a10:	8526                	mv	a0,s1
1c009a12:	3db5                	jal	1c00988e <alloc_init_l1>
1c009a14:	6591                	lui	a1,0x4
1c009a16:	8526                	mv	a0,s1
1c009a18:	3d61                	jal	1c0098b0 <pi_l1_malloc>
1c009a1a:	100007b7          	lui	a5,0x10000
1c009a1e:	30a7a223          	sw	a0,772(a5) # 10000304 <cluster_stacks>
1c009a22:	c12d                	beqz	a0,1c009a84 <cluster_start+0xcc>
1c009a24:	1c005737          	lui	a4,0x1c005
1c009a28:	4685                	li	a3,1
1c009a2a:	96d72a23          	sw	a3,-1676(a4) # 1c004974 <cluster_running>
1c009a2e:	002007b7          	lui	a5,0x200
1c009a32:	1c008737          	lui	a4,0x1c008
1c009a36:	08070713          	addi	a4,a4,128 # 1c008080 <_start>
1c009a3a:	04078693          	addi	a3,a5,64 # 200040 <__l1_heap_size+0x1f0348>
1c009a3e:	00e466a3          	p.sw	a4,a3(s0)
1c009a42:	04478693          	addi	a3,a5,68
1c009a46:	00e466a3          	p.sw	a4,a3(s0)
1c009a4a:	04878693          	addi	a3,a5,72
1c009a4e:	00e466a3          	p.sw	a4,a3(s0)
1c009a52:	04c78693          	addi	a3,a5,76
1c009a56:	00e466a3          	p.sw	a4,a3(s0)
1c009a5a:	05078693          	addi	a3,a5,80
1c009a5e:	00e466a3          	p.sw	a4,a3(s0)
1c009a62:	05478693          	addi	a3,a5,84
1c009a66:	00e466a3          	p.sw	a4,a3(s0)
1c009a6a:	05878693          	addi	a3,a5,88
1c009a6e:	00e466a3          	p.sw	a4,a3(s0)
1c009a72:	05c78693          	addi	a3,a5,92
1c009a76:	00e466a3          	p.sw	a4,a3(s0)
1c009a7a:	07a1                	addi	a5,a5,8
1c009a7c:	0ff00713          	li	a4,255
1c009a80:	00e467a3          	p.sw	a4,a5(s0)
1c009a84:	40b2                	lw	ra,12(sp)
1c009a86:	4422                	lw	s0,8(sp)
1c009a88:	4492                	lw	s1,4(sp)
1c009a8a:	0141                	addi	sp,sp,16
1c009a8c:	8082                	ret

1c009a8e <cluster_wait>:
1c009a8e:	1c005737          	lui	a4,0x1c005
1c009a92:	97470713          	addi	a4,a4,-1676 # 1c004974 <cluster_running>
1c009a96:	431c                	lw	a5,0(a4)
1c009a98:	fffd                	bnez	a5,1c009a96 <cluster_wait+0x8>
1c009a9a:	1c0057b7          	lui	a5,0x1c005
1c009a9e:	9707a503          	lw	a0,-1680(a5) # 1c004970 <_edata>
1c009aa2:	8082                	ret
make[1]: Leaving directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/neureka_ki56_ko32_ho1_wo1_fs3'
