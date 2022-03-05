make[1]: Entering directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/neureka_ki8_ko32_ho6_wo6_fs1'
/usr/scratch/fenga5/beppe/INSTALL-PULP/bin/riscv32-unknown-elf-objdump -Mmarch=rv32imcxgap9 -d /scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/neureka_ki8_ko32_ho6_wo6_fs1/build/ne16_test/ne16_test

/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/neureka_ki8_ko32_ho6_wo6_fs1/build/ne16_test/ne16_test:     file format elf32-littleriscv


Disassembly of section .vectors:

1c008000 <__irq_vector_base>:
1c008000:	0cb0106f          	j	1c0098ca <__rt_handle_illegal_instr>
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
1c008084:	0470106f          	j	1c0098ca <__rt_handle_illegal_instr>

1c008088 <pos_no_irq_handler>:
1c008088:	30200073          	mret

1c00808c <pos_semihosting_call>:
1c00808c:	00100073          	ebreak
1c008090:	00008067          	ret

1c008094 <pe_start>:
1c008094:	f3ff9117          	auipc	sp,0xf3ff9
1c008098:	31810113          	addi	sp,sp,792 # 100013ac <cluster_stacks>
1c00809c:	00012103          	lw	sp,0(sp)
1c0080a0:	000011b7          	lui	gp,0x1
1c0080a4:	80018193          	addi	gp,gp,-2048 # 800 <__cluster_text_size+0x800>
1c0080a8:	00158593          	addi	a1,a1,1
1c0080ac:	02b180b3          	mul	ra,gp,a1
1c0080b0:	00110133          	add	sp,sp,ra
1c0080b4:	0c10106f          	j	1c009974 <cluster_entry_stub>

1c0080b8 <do_cl_boot>:
1c0080b8:	10200137          	lui	sp,0x10200
1c0080bc:	00100193          	li	gp,1
1c0080c0:	00000217          	auipc	tp,0x0
1c0080c4:	fc020213          	addi	tp,tp,-64 # 1c008080 <_start>
1c0080c8:	04412023          	sw	tp,64(sp) # 10200040 <__l2_shared_end+0x1fec90>
1c0080cc:	00312423          	sw	gp,8(sp)

1c0080d0 <loop>:
1c0080d0:	1a10a137          	lui	sp,0x1a10a
1c0080d4:	80010113          	addi	sp,sp,-2048 # 1a109800 <__l2_shared_end+0xa108450>
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
1c0080f8:	ffffa297          	auipc	t0,0xffffa
1c0080fc:	df828293          	addi	t0,t0,-520 # 1c001ef0 <_edata>
1c008100:	ffffa317          	auipc	t1,0xffffa
1c008104:	e0c30313          	addi	t1,t1,-500 # 1c001f0c <__l2_priv0_end>
1c008108:	0002a023          	sw	zero,0(t0)
1c00810c:	0291                	addi	t0,t0,4
1c00810e:	fe62ede3          	bltu	t0,t1,1c008108 <_stext+0x24>
1c008112:	ffff8117          	auipc	sp,0xffff8
1c008116:	77e10113          	addi	sp,sp,1918 # 1c000890 <stack>
1c00811a:	612010ef          	jal	ra,1c00972c <pos_init_start>
1c00811e:	00000513          	li	a0,0
1c008122:	00000593          	li	a1,0
1c008126:	00000397          	auipc	t2,0x0
1c00812a:	1ae38393          	addi	t2,t2,430 # 1c0082d4 <main>
1c00812e:	000380e7          	jalr	t2
1c008132:	842a                	mv	s0,a0
1c008134:	64e010ef          	jal	ra,1c009782 <pos_init_stop>
1c008138:	8522                	mv	a0,s0
1c00813a:	68e000ef          	jal	ra,1c0087c8 <exit>

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
1c00817a:	0007aa23          	sw	zero,20(a5) # 201014 <__l1_heap_size+0x1f23c4>
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
1c0081aa:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1f53ec>
1c0081ae:	c3d8                	sw	a4,4(a5)
1c0081b0:	4214                	lw	a3,0(a2)
1c0081b2:	fe06cbe3          	bltz	a3,1c0081a8 <run_test+0x6a>
1c0081b6:	002015b7          	lui	a1,0x201
1c0081ba:	02058593          	addi	a1,a1,32 # 201020 <__l1_heap_size+0x1f23d0>
1c0081be:	004007b7          	lui	a5,0x400
1c0081c2:	00f5a023          	sw	a5,0(a1)
1c0081c6:	100007b7          	lui	a5,0x10000
1c0081ca:	00478793          	addi	a5,a5,4 # 10000004 <ne16_infeat>
1c0081ce:	00f5a223          	sw	a5,4(a1)
1c0081d2:	10000437          	lui	s0,0x10000
1c0081d6:	1ac40813          	addi	a6,s0,428 # 100001ac <ne16_streamin>
1c0081da:	0105a423          	sw	a6,8(a1)
1c0081de:	12078713          	addi	a4,a5,288
1c0081e2:	00e5a623          	sw	a4,12(a1)
1c0081e6:	1a078713          	addi	a4,a5,416
1c0081ea:	00e5a823          	sw	a4,16(a1)
1c0081ee:	1a478793          	addi	a5,a5,420
1c0081f2:	00f5aa23          	sw	a5,20(a1)
1c0081f6:	1c001537          	lui	a0,0x1c001
1c0081fa:	89050793          	addi	a5,a0,-1904 # 1c000890 <stack>
1c0081fe:	5571                	li	a0,-4
1c008200:	01878713          	addi	a4,a5,24
1c008204:	8d1d                	sub	a0,a0,a5
1c008206:	012350fb          	lp.setupi	x1,18,1c008212 <run_test+0xd4>
1c00820a:	0047268b          	p.lw	a3,4(a4!) # 1004 <__cluster_text_size+0x1004>
1c00820e:	00e50633          	add	a2,a0,a4
1c008212:	00d5e623          	p.sw	a3,a2(a1)
1c008216:	abbab7b7          	lui	a5,0xabbab
1c00821a:	10000737          	lui	a4,0x10000
1c00821e:	bba78793          	addi	a5,a5,-1094 # abbaabba <pulp__FC+0xabbaabbb>
1c008222:	00201637          	lui	a2,0x201
1c008226:	c31c                	sw	a5,0(a4)
1c008228:	00062023          	sw	zero,0(a2) # 201000 <__l1_heap_size+0x1f23b0>
1c00822c:	6705                	lui	a4,0x1
1c00822e:	002047b7          	lui	a5,0x204
1c008232:	0631                	addi	a2,a2,12
1c008234:	c798                	sw	a4,8(a5)
1c008236:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1f53ec>
1c00823a:	c3d8                	sw	a4,4(a5)
1c00823c:	4214                	lw	a3,0(a2)
1c00823e:	fafd                	bnez	a3,1c008234 <run_test+0xf6>
1c008240:	002007b7          	lui	a5,0x200
1c008244:	07e1                	addi	a5,a5,24
1c008246:	4394                	lw	a3,0(a5)
1c008248:	20070713          	addi	a4,a4,512 # 1200 <__cluster_text_size+0x1200>
1c00824c:	1c0019b7          	lui	s3,0x1c001
1c008250:	c0b6b6b3          	p.bclr	a3,a3,0,11
1c008254:	c394                	sw	a3,0(a5)
1c008256:	deadd7b7          	lui	a5,0xdeadd
1c00825a:	100006b7          	lui	a3,0x10000
1c00825e:	aca78793          	addi	a5,a5,-1334 # deadcaca <pulp__FC+0xdeadcacb>
1c008262:	5a71                	li	s4,-4
1c008264:	c29c                	sw	a5,0(a3)
1c008266:	cf098993          	addi	s3,s3,-784 # 1c000cf0 <ne16_outfeat>
1c00826a:	00e804b3          	add	s1,a6,a4
1c00826e:	1ac40413          	addi	s0,s0,428
1c008272:	4901                	li	s2,0
1c008274:	410a0a33          	sub	s4,s4,a6
1c008278:	1c000ab7          	lui	s5,0x1c000
1c00827c:	1c000b37          	lui	s6,0x1c000
1c008280:	0049a58b          	p.lw	a1,4(s3!)
1c008284:	86a2                	mv	a3,s0
1c008286:	0044260b          	p.lw	a2,4(s0!)
1c00828a:	40b607b3          	sub	a5,a2,a1
1c00828e:	00f037b3          	snez	a5,a5
1c008292:	993e                	add	s2,s2,a5
1c008294:	00b60963          	beq	a2,a1,1c0082a6 <run_test+0x168>
1c008298:	02192463          	p.beqimm	s2,1,1c0082c0 <run_test+0x182>
1c00829c:	008a0733          	add	a4,s4,s0
1c0082a0:	04ca8513          	addi	a0,s5,76 # 1c00004c <__DTOR_END__+0x30>
1c0082a4:	2b3d                	jal	1c0087e2 <printf>
1c0082a6:	fc849de3          	bne	s1,s0,1c008280 <run_test+0x142>
1c0082aa:	50f2                	lw	ra,60(sp)
1c0082ac:	5462                	lw	s0,56(sp)
1c0082ae:	854a                	mv	a0,s2
1c0082b0:	54d2                	lw	s1,52(sp)
1c0082b2:	5942                	lw	s2,48(sp)
1c0082b4:	59b2                	lw	s3,44(sp)
1c0082b6:	5a22                	lw	s4,40(sp)
1c0082b8:	5a92                	lw	s5,36(sp)
1c0082ba:	5b02                	lw	s6,32(sp)
1c0082bc:	6121                	addi	sp,sp,64
1c0082be:	8082                	ret
1c0082c0:	01cb0513          	addi	a0,s6,28 # 1c00001c <__DTOR_END__>
1c0082c4:	c22e                	sw	a1,4(sp)
1c0082c6:	c432                	sw	a2,8(sp)
1c0082c8:	c636                	sw	a3,12(sp)
1c0082ca:	21f1                	jal	1c008796 <puts>
1c0082cc:	46b2                	lw	a3,12(sp)
1c0082ce:	4622                	lw	a2,8(sp)
1c0082d0:	4592                	lw	a1,4(sp)
1c0082d2:	b7e9                	j	1c00829c <run_test+0x15e>

1c0082d4 <main>:
1c0082d4:	f14027f3          	csrr	a5,mhartid
1c0082d8:	ca579733          	p.extractu	a4,a5,5,5
1c0082dc:	e711                	bnez	a4,1c0082e8 <main+0x14>
1c0082de:	f457b7b3          	p.bclr	a5,a5,26,5
1c0082e2:	cb95                	beqz	a5,1c008316 <main+0x42>
1c0082e4:	4501                	li	a0,0
1c0082e6:	8082                	ret
1c0082e8:	1c0017b7          	lui	a5,0x1c001
1c0082ec:	8f078793          	addi	a5,a5,-1808 # 1c0008f0 <ne16_weights>
1c0082f0:	10800737          	lui	a4,0x10800
1c0082f4:	0406d0fb          	lp.setupi	x1,64,1c00830e <main+0x3a>
1c0082f8:	0007a803          	lw	a6,0(a5)
1c0082fc:	43c8                	lw	a0,4(a5)
1c0082fe:	478c                	lw	a1,8(a5)
1c008300:	47d0                	lw	a2,12(a5)
1c008302:	01072023          	sw	a6,0(a4) # 10800000 <__l2_shared_end+0x7fec50>
1c008306:	c348                	sw	a0,4(a4)
1c008308:	c70c                	sw	a1,8(a4)
1c00830a:	c750                	sw	a2,12(a4)
1c00830c:	07c1                	addi	a5,a5,16
1c00830e:	0741                	addi	a4,a4,16
1c008310:	4501                	li	a0,0
1c008312:	6360106f          	j	1c009948 <bench_cluster_forward>
1c008316:	b525                	j	1c00813e <run_test>

1c008318 <pos_fll_init>:
1c008318:	08152063          	p.beqimm	a0,1,1c008398 <pos_fll_init+0x80>
1c00831c:	04252a63          	p.beqimm	a0,2,1c008370 <pos_fll_init+0x58>
1c008320:	c505                	beqz	a0,1c008348 <pos_fll_init+0x30>
1c008322:	4701                	li	a4,0
1c008324:	00470793          	addi	a5,a4,4
1c008328:	05300613          	li	a2,83
1c00832c:	00c70693          	addi	a3,a4,12
1c008330:	c390                	sw	a2,0(a5)
1c008332:	020c17b7          	lui	a5,0x20c1
1c008336:	0721                	addi	a4,a4,8
1c008338:	0006a023          	sw	zero,0(a3) # 10000000 <__l1_heap_size+0xfff13b0>
1c00833c:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b2b8a>
1c008340:	c31c                	sw	a5,0(a4)
1c008342:	05f68537          	lui	a0,0x5f68
1c008346:	8082                	ret
1c008348:	1a1007b7          	lui	a5,0x1a100
1c00834c:	00878713          	addi	a4,a5,8 # 1a100008 <__l2_shared_end+0xa0fec58>
1c008350:	00c78693          	addi	a3,a5,12
1c008354:	05300613          	li	a2,83
1c008358:	0791                	addi	a5,a5,4
1c00835a:	c390                	sw	a2,0(a5)
1c00835c:	020c17b7          	lui	a5,0x20c1
1c008360:	0006a023          	sw	zero,0(a3)
1c008364:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b2b8a>
1c008368:	c31c                	sw	a5,0(a4)
1c00836a:	05f68537          	lui	a0,0x5f68
1c00836e:	8082                	ret
1c008370:	1a1007b7          	lui	a5,0x1a100
1c008374:	01878713          	addi	a4,a5,24 # 1a100018 <__l2_shared_end+0xa0fec68>
1c008378:	01c78693          	addi	a3,a5,28
1c00837c:	05300613          	li	a2,83
1c008380:	07d1                	addi	a5,a5,20
1c008382:	c390                	sw	a2,0(a5)
1c008384:	020c17b7          	lui	a5,0x20c1
1c008388:	0006a023          	sw	zero,0(a3)
1c00838c:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b2b8a>
1c008390:	c31c                	sw	a5,0(a4)
1c008392:	05f68537          	lui	a0,0x5f68
1c008396:	8082                	ret
1c008398:	1a1007b7          	lui	a5,0x1a100
1c00839c:	02878713          	addi	a4,a5,40 # 1a100028 <__l2_shared_end+0xa0fec78>
1c0083a0:	02c78693          	addi	a3,a5,44
1c0083a4:	05300613          	li	a2,83
1c0083a8:	02478793          	addi	a5,a5,36
1c0083ac:	c390                	sw	a2,0(a5)
1c0083ae:	020c17b7          	lui	a5,0x20c1
1c0083b2:	0006a023          	sw	zero,0(a3)
1c0083b6:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b2b8a>
1c0083ba:	c31c                	sw	a5,0(a4)
1c0083bc:	05f68537          	lui	a0,0x5f68
1c0083c0:	8082                	ret

1c0083c2 <pos_soc_init>:
1c0083c2:	8082                	ret

1c0083c4 <pos_wait_forever>:
1c0083c4:	f14027f3          	csrr	a5,mhartid
1c0083c8:	477d                	li	a4,31
1c0083ca:	ca5797b3          	p.extractu	a5,a5,5,5
1c0083ce:	00e78963          	beq	a5,a4,1c0083e0 <pos_wait_forever+0x1c>
1c0083d2:	002047b7          	lui	a5,0x204
1c0083d6:	577d                	li	a4,-1
1c0083d8:	c3d8                	sw	a4,4(a5)
1c0083da:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f53e8>
1c0083de:	a001                	j	1c0083de <pos_wait_forever+0x1a>
1c0083e0:	1a10a7b7          	lui	a5,0x1a10a
1c0083e4:	577d                	li	a4,-1
1c0083e6:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa108458>
1c0083ea:	10500073          	wfi
1c0083ee:	10500073          	wfi
1c0083f2:	bfe5                	j	1c0083ea <pos_wait_forever+0x26>

1c0083f4 <memcpy>:
1c0083f4:	00a5e7b3          	or	a5,a1,a0
1c0083f8:	fa27b7b3          	p.bclr	a5,a5,29,2
1c0083fc:	882a                	mv	a6,a0
1c0083fe:	10078163          	beqz	a5,1c008500 <memcpy+0x10c>
1c008402:	12060263          	beqz	a2,1c008526 <memcpy+0x132>
1c008406:	00458793          	addi	a5,a1,4
1c00840a:	00450693          	addi	a3,a0,4 # 5f68004 <__l1_heap_size+0x5f593b4>
1c00840e:	04a7b7b3          	p.sletu	a5,a5,a0
1c008412:	04b6b6b3          	p.sletu	a3,a3,a1
1c008416:	873e                	mv	a4,a5
1c008418:	87b6                	mv	a5,a3
1c00841a:	8fd9                	or	a5,a5,a4
1c00841c:	0ff7f793          	andi	a5,a5,255
1c008420:	cbe9                	beqz	a5,1c0084f2 <memcpy+0xfe>
1c008422:	00863793          	sltiu	a5,a2,8
1c008426:	0017c793          	xori	a5,a5,1
1c00842a:	0ff7f793          	andi	a5,a5,255
1c00842e:	c3f1                	beqz	a5,1c0084f2 <memcpy+0xfe>
1c008430:	40b007b3          	neg	a5,a1
1c008434:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008438:	fff60313          	addi	t1,a2,-1
1c00843c:	c3ed                	beqz	a5,1c00851e <memcpy+0x12a>
1c00843e:	0005c703          	lbu	a4,0(a1)
1c008442:	00158893          	addi	a7,a1,1
1c008446:	00150813          	addi	a6,a0,1
1c00844a:	00e50023          	sb	a4,0(a0)
1c00844e:	0217a863          	p.beqimm	a5,1,1c00847e <memcpy+0x8a>
1c008452:	0015c703          	lbu	a4,1(a1)
1c008456:	00258893          	addi	a7,a1,2
1c00845a:	00250813          	addi	a6,a0,2
1c00845e:	00e500a3          	sb	a4,1(a0)
1c008462:	ffe60313          	addi	t1,a2,-2
1c008466:	0037bc63          	p.bneimm	a5,3,1c00847e <memcpy+0x8a>
1c00846a:	0025c703          	lbu	a4,2(a1)
1c00846e:	00358893          	addi	a7,a1,3
1c008472:	00350813          	addi	a6,a0,3
1c008476:	00e50123          	sb	a4,2(a0)
1c00847a:	ffd60313          	addi	t1,a2,-3
1c00847e:	8e1d                	sub	a2,a2,a5
1c008480:	00265713          	srli	a4,a2,0x2
1c008484:	00f506b3          	add	a3,a0,a5
1c008488:	95be                	add	a1,a1,a5
1c00848a:	cf59                	beqz	a4,1c008528 <memcpy+0x134>
1c00848c:	004740fb          	lp.setup	x1,a4,1c008494 <memcpy+0xa0>
1c008490:	0045a78b          	p.lw	a5,4(a1!)
1c008494:	00f6a22b          	p.sw	a5,4(a3!)
1c008498:	c20635b3          	p.bclr	a1,a2,1,0
1c00849c:	40b306b3          	sub	a3,t1,a1
1c0084a0:	00b807b3          	add	a5,a6,a1
1c0084a4:	00b88733          	add	a4,a7,a1
1c0084a8:	04b60b63          	beq	a2,a1,1c0084fe <memcpy+0x10a>
1c0084ac:	00074603          	lbu	a2,0(a4)
1c0084b0:	00c78023          	sb	a2,0(a5)
1c0084b4:	0416a563          	p.beqimm	a3,1,1c0084fe <memcpy+0x10a>
1c0084b8:	00174603          	lbu	a2,1(a4)
1c0084bc:	00c780a3          	sb	a2,1(a5)
1c0084c0:	0226af63          	p.beqimm	a3,2,1c0084fe <memcpy+0x10a>
1c0084c4:	00274603          	lbu	a2,2(a4)
1c0084c8:	00c78123          	sb	a2,2(a5)
1c0084cc:	0236a963          	p.beqimm	a3,3,1c0084fe <memcpy+0x10a>
1c0084d0:	00374603          	lbu	a2,3(a4)
1c0084d4:	00c781a3          	sb	a2,3(a5)
1c0084d8:	0246a363          	p.beqimm	a3,4,1c0084fe <memcpy+0x10a>
1c0084dc:	00474603          	lbu	a2,4(a4)
1c0084e0:	00c78223          	sb	a2,4(a5)
1c0084e4:	0056ad63          	p.beqimm	a3,5,1c0084fe <memcpy+0x10a>
1c0084e8:	00574703          	lbu	a4,5(a4)
1c0084ec:	00e782a3          	sb	a4,5(a5)
1c0084f0:	8082                	ret
1c0084f2:	004640fb          	lp.setup	x1,a2,1c0084fa <memcpy+0x106>
1c0084f6:	0015c78b          	p.lbu	a5,1(a1!)
1c0084fa:	00f800ab          	p.sb	a5,1(a6!)
1c0084fe:	8082                	ret
1c008500:	fa2637b3          	p.bclr	a5,a2,29,2
1c008504:	f389                	bnez	a5,1c008406 <memcpy+0x12>
1c008506:	de65                	beqz	a2,1c0084fe <memcpy+0x10a>
1c008508:	ffc60793          	addi	a5,a2,-4
1c00850c:	8389                	srli	a5,a5,0x2
1c00850e:	0785                	addi	a5,a5,1
1c008510:	0047c0fb          	lp.setup	x1,a5,1c008518 <memcpy+0x124>
1c008514:	0045a70b          	p.lw	a4,4(a1!)
1c008518:	00e8222b          	p.sw	a4,4(a6!)
1c00851c:	8082                	ret
1c00851e:	88ae                	mv	a7,a1
1c008520:	882a                	mv	a6,a0
1c008522:	8332                	mv	t1,a2
1c008524:	bfa9                	j	1c00847e <memcpy+0x8a>
1c008526:	8082                	ret
1c008528:	4705                	li	a4,1
1c00852a:	b78d                	j	1c00848c <memcpy+0x98>

1c00852c <memmove>:
1c00852c:	40b507b3          	sub	a5,a0,a1
1c008530:	0ec7ec63          	bltu	a5,a2,1c008628 <memmove+0xfc>
1c008534:	20060463          	beqz	a2,1c00873c <memmove+0x210>
1c008538:	00450793          	addi	a5,a0,4
1c00853c:	00458693          	addi	a3,a1,4
1c008540:	04b7b7b3          	p.sletu	a5,a5,a1
1c008544:	04a6b6b3          	p.sletu	a3,a3,a0
1c008548:	873e                	mv	a4,a5
1c00854a:	87b6                	mv	a5,a3
1c00854c:	8fd9                	or	a5,a5,a4
1c00854e:	0ff7f793          	andi	a5,a5,255
1c008552:	1c078d63          	beqz	a5,1c00872c <memmove+0x200>
1c008556:	00863793          	sltiu	a5,a2,8
1c00855a:	0017c793          	xori	a5,a5,1
1c00855e:	0ff7f793          	andi	a5,a5,255
1c008562:	1c078563          	beqz	a5,1c00872c <memmove+0x200>
1c008566:	40b007b3          	neg	a5,a1
1c00856a:	fa27b7b3          	p.bclr	a5,a5,29,2
1c00856e:	fff60313          	addi	t1,a2,-1
1c008572:	88ae                	mv	a7,a1
1c008574:	1e078363          	beqz	a5,1c00875a <memmove+0x22e>
1c008578:	0018c70b          	p.lbu	a4,1(a7!)
1c00857c:	882a                	mv	a6,a0
1c00857e:	00e800ab          	p.sb	a4,1(a6!)
1c008582:	0217a863          	p.beqimm	a5,1,1c0085b2 <memmove+0x86>
1c008586:	0015c703          	lbu	a4,1(a1)
1c00858a:	00250813          	addi	a6,a0,2
1c00858e:	00258893          	addi	a7,a1,2
1c008592:	00e500a3          	sb	a4,1(a0)
1c008596:	ffe60313          	addi	t1,a2,-2
1c00859a:	0037bc63          	p.bneimm	a5,3,1c0085b2 <memmove+0x86>
1c00859e:	0025c703          	lbu	a4,2(a1)
1c0085a2:	00350813          	addi	a6,a0,3
1c0085a6:	00358893          	addi	a7,a1,3
1c0085aa:	00e50123          	sb	a4,2(a0)
1c0085ae:	ffd60313          	addi	t1,a2,-3
1c0085b2:	8e1d                	sub	a2,a2,a5
1c0085b4:	00265713          	srli	a4,a2,0x2
1c0085b8:	00f506b3          	add	a3,a0,a5
1c0085bc:	95be                	add	a1,a1,a5
1c0085be:	1a070363          	beqz	a4,1c008764 <memmove+0x238>
1c0085c2:	004740fb          	lp.setup	x1,a4,1c0085ca <memmove+0x9e>
1c0085c6:	0045a78b          	p.lw	a5,4(a1!)
1c0085ca:	00f6a22b          	p.sw	a5,4(a3!)
1c0085ce:	c20635b3          	p.bclr	a1,a2,1,0
1c0085d2:	40b306b3          	sub	a3,t1,a1
1c0085d6:	00b807b3          	add	a5,a6,a1
1c0085da:	00b88733          	add	a4,a7,a1
1c0085de:	14b60e63          	beq	a2,a1,1c00873a <memmove+0x20e>
1c0085e2:	00074603          	lbu	a2,0(a4)
1c0085e6:	00c78023          	sb	a2,0(a5)
1c0085ea:	1416a863          	p.beqimm	a3,1,1c00873a <memmove+0x20e>
1c0085ee:	00174603          	lbu	a2,1(a4)
1c0085f2:	00c780a3          	sb	a2,1(a5)
1c0085f6:	1426a263          	p.beqimm	a3,2,1c00873a <memmove+0x20e>
1c0085fa:	00274603          	lbu	a2,2(a4)
1c0085fe:	00c78123          	sb	a2,2(a5)
1c008602:	1236ac63          	p.beqimm	a3,3,1c00873a <memmove+0x20e>
1c008606:	00374603          	lbu	a2,3(a4)
1c00860a:	00c781a3          	sb	a2,3(a5)
1c00860e:	1246a663          	p.beqimm	a3,4,1c00873a <memmove+0x20e>
1c008612:	00474603          	lbu	a2,4(a4)
1c008616:	00c78223          	sb	a2,4(a5)
1c00861a:	1256a063          	p.beqimm	a3,5,1c00873a <memmove+0x20e>
1c00861e:	00574703          	lbu	a4,5(a4)
1c008622:	00e782a3          	sb	a4,5(a5)
1c008626:	8082                	ret
1c008628:	ffc60793          	addi	a5,a2,-4
1c00862c:	00f50833          	add	a6,a0,a5
1c008630:	00f58333          	add	t1,a1,a5
1c008634:	00c58733          	add	a4,a1,a2
1c008638:	00c508b3          	add	a7,a0,a2
1c00863c:	05073733          	p.sletu	a4,a4,a6
1c008640:	0468b833          	p.sletu	a6,a7,t1
1c008644:	86ba                	mv	a3,a4
1c008646:	8742                	mv	a4,a6
1c008648:	8f55                	or	a4,a4,a3
1c00864a:	0ff77713          	andi	a4,a4,255
1c00864e:	cb65                	beqz	a4,1c00873e <memmove+0x212>
1c008650:	00863713          	sltiu	a4,a2,8
1c008654:	00174713          	xori	a4,a4,1
1c008658:	0ff77713          	andi	a4,a4,255
1c00865c:	c36d                	beqz	a4,1c00873e <memmove+0x212>
1c00865e:	fa233733          	p.bclr	a4,t1,29,2
1c008662:	fff60893          	addi	a7,a2,-1
1c008666:	cb65                	beqz	a4,1c008756 <memmove+0x22a>
1c008668:	011586b3          	add	a3,a1,a7
1c00866c:	0006c683          	lbu	a3,0(a3)
1c008670:	00d548a3          	p.sb	a3,a7(a0)
1c008674:	02172463          	p.beqimm	a4,1,1c00869c <memmove+0x170>
1c008678:	ffe60893          	addi	a7,a2,-2
1c00867c:	011586b3          	add	a3,a1,a7
1c008680:	0006c683          	lbu	a3,0(a3)
1c008684:	00d548a3          	p.sb	a3,a7(a0)
1c008688:	00373a63          	p.bneimm	a4,3,1c00869c <memmove+0x170>
1c00868c:	ffd60893          	addi	a7,a2,-3
1c008690:	011586b3          	add	a3,a1,a7
1c008694:	0006c683          	lbu	a3,0(a3)
1c008698:	00d548a3          	p.sb	a3,a7(a0)
1c00869c:	8e19                	sub	a2,a2,a4
1c00869e:	8f99                	sub	a5,a5,a4
1c0086a0:	00265713          	srli	a4,a2,0x2
1c0086a4:	00f506b3          	add	a3,a0,a5
1c0086a8:	97ae                	add	a5,a5,a1
1c0086aa:	cb5d                	beqz	a4,1c008760 <memmove+0x234>
1c0086ac:	004740fb          	lp.setup	x1,a4,1c0086b4 <memmove+0x188>
1c0086b0:	ffc7a80b          	p.lw	a6,-4(a5!)
1c0086b4:	ff06ae2b          	p.sw	a6,-4(a3!)
1c0086b8:	c20637b3          	p.bclr	a5,a2,1,0
1c0086bc:	40f888b3          	sub	a7,a7,a5
1c0086c0:	06f60d63          	beq	a2,a5,1c00873a <memmove+0x20e>
1c0086c4:	fff88793          	addi	a5,a7,-1
1c0086c8:	00f58733          	add	a4,a1,a5
1c0086cc:	00074703          	lbu	a4,0(a4)
1c0086d0:	00e547a3          	p.sb	a4,a5(a0)
1c0086d4:	c3bd                	beqz	a5,1c00873a <memmove+0x20e>
1c0086d6:	ffe88793          	addi	a5,a7,-2
1c0086da:	00f58733          	add	a4,a1,a5
1c0086de:	00074703          	lbu	a4,0(a4)
1c0086e2:	00e547a3          	p.sb	a4,a5(a0)
1c0086e6:	cbb1                	beqz	a5,1c00873a <memmove+0x20e>
1c0086e8:	ffd88793          	addi	a5,a7,-3
1c0086ec:	00f58733          	add	a4,a1,a5
1c0086f0:	00074703          	lbu	a4,0(a4)
1c0086f4:	00e547a3          	p.sb	a4,a5(a0)
1c0086f8:	c3a9                	beqz	a5,1c00873a <memmove+0x20e>
1c0086fa:	ffc88793          	addi	a5,a7,-4
1c0086fe:	00f58733          	add	a4,a1,a5
1c008702:	00074703          	lbu	a4,0(a4)
1c008706:	00e547a3          	p.sb	a4,a5(a0)
1c00870a:	cb85                	beqz	a5,1c00873a <memmove+0x20e>
1c00870c:	ffb88793          	addi	a5,a7,-5
1c008710:	00f58733          	add	a4,a1,a5
1c008714:	00074703          	lbu	a4,0(a4)
1c008718:	00e547a3          	p.sb	a4,a5(a0)
1c00871c:	cf99                	beqz	a5,1c00873a <memmove+0x20e>
1c00871e:	18e9                	addi	a7,a7,-6
1c008720:	95c6                	add	a1,a1,a7
1c008722:	0005c783          	lbu	a5,0(a1)
1c008726:	00f548a3          	p.sb	a5,a7(a0)
1c00872a:	8082                	ret
1c00872c:	87aa                	mv	a5,a0
1c00872e:	004640fb          	lp.setup	x1,a2,1c008736 <memmove+0x20a>
1c008732:	0015c70b          	p.lbu	a4,1(a1!)
1c008736:	00e780ab          	p.sb	a4,1(a5!)
1c00873a:	8082                	ret
1c00873c:	8082                	ret
1c00873e:	167d                	addi	a2,a2,-1
1c008740:	00c507b3          	add	a5,a0,a2
1c008744:	95b2                	add	a1,a1,a2
1c008746:	0605                	addi	a2,a2,1
1c008748:	004640fb          	lp.setup	x1,a2,1c008750 <memmove+0x224>
1c00874c:	fff5c70b          	p.lbu	a4,-1(a1!)
1c008750:	fee78fab          	p.sb	a4,-1(a5!)
1c008754:	8082                	ret
1c008756:	88b2                	mv	a7,a2
1c008758:	b791                	j	1c00869c <memmove+0x170>
1c00875a:	882a                	mv	a6,a0
1c00875c:	8332                	mv	t1,a2
1c00875e:	bd91                	j	1c0085b2 <memmove+0x86>
1c008760:	4705                	li	a4,1
1c008762:	b7a9                	j	1c0086ac <memmove+0x180>
1c008764:	4705                	li	a4,1
1c008766:	bdb1                	j	1c0085c2 <memmove+0x96>

1c008768 <strchr>:
1c008768:	00054783          	lbu	a5,0(a0)
1c00876c:	0ff5f593          	andi	a1,a1,255
1c008770:	00b78c63          	beq	a5,a1,1c008788 <strchr+0x20>
1c008774:	cb99                	beqz	a5,1c00878a <strchr+0x22>
1c008776:	00150793          	addi	a5,a0,1
1c00877a:	a011                	j	1c00877e <strchr+0x16>
1c00877c:	c719                	beqz	a4,1c00878a <strchr+0x22>
1c00877e:	853e                	mv	a0,a5
1c008780:	0017c70b          	p.lbu	a4,1(a5!)
1c008784:	feb71ce3          	bne	a4,a1,1c00877c <strchr+0x14>
1c008788:	8082                	ret
1c00878a:	0015b593          	seqz	a1,a1
1c00878e:	40b005b3          	neg	a1,a1
1c008792:	8d6d                	and	a0,a0,a1
1c008794:	8082                	ret

1c008796 <puts>:
1c008796:	0015478b          	p.lbu	a5,1(a0!)
1c00879a:	1a104737          	lui	a4,0x1a104
1c00879e:	02070713          	addi	a4,a4,32 # 1a104020 <__l2_shared_end+0xa102c70>
1c0087a2:	c789                	beqz	a5,1c0087ac <puts+0x16>
1c0087a4:	c31c                	sw	a5,0(a4)
1c0087a6:	0015478b          	p.lbu	a5,1(a0!)
1c0087aa:	ffed                	bnez	a5,1c0087a4 <puts+0xe>
1c0087ac:	1a1047b7          	lui	a5,0x1a104
1c0087b0:	4729                	li	a4,10
1c0087b2:	d398                	sw	a4,32(a5)
1c0087b4:	4501                	li	a0,0
1c0087b6:	8082                	ret

1c0087b8 <pos_libc_fputc_locked>:
1c0087b8:	1a1047b7          	lui	a5,0x1a104
1c0087bc:	0ff57513          	andi	a0,a0,255
1c0087c0:	d388                	sw	a0,32(a5)
1c0087c2:	4501                	li	a0,0
1c0087c4:	8082                	ret

1c0087c6 <pos_libc_prf_locked>:
1c0087c6:	a0a9                	j	1c008810 <pos_libc_prf>

1c0087c8 <exit>:
1c0087c8:	1141                	addi	sp,sp,-16
1c0087ca:	c606                	sw	ra,12(sp)
1c0087cc:	1a1047b7          	lui	a5,0x1a104
1c0087d0:	c1f54533          	p.bset	a0,a0,0,31
1c0087d4:	0aa7a023          	sw	a0,160(a5) # 1a1040a0 <__l2_shared_end+0xa102cf0>
1c0087d8:	36f5                	jal	1c0083c4 <pos_wait_forever>

1c0087da <pos_io_start>:
1c0087da:	4501                	li	a0,0
1c0087dc:	8082                	ret

1c0087de <pos_io_stop>:
1c0087de:	4501                	li	a0,0
1c0087e0:	8082                	ret

1c0087e2 <printf>:
1c0087e2:	7139                	addi	sp,sp,-64
1c0087e4:	02410313          	addi	t1,sp,36
1c0087e8:	d432                	sw	a2,40(sp)
1c0087ea:	862a                	mv	a2,a0
1c0087ec:	1c008537          	lui	a0,0x1c008
1c0087f0:	d22e                	sw	a1,36(sp)
1c0087f2:	d636                	sw	a3,44(sp)
1c0087f4:	4589                	li	a1,2
1c0087f6:	869a                	mv	a3,t1
1c0087f8:	7b850513          	addi	a0,a0,1976 # 1c0087b8 <pos_libc_fputc_locked>
1c0087fc:	ce06                	sw	ra,28(sp)
1c0087fe:	d83a                	sw	a4,48(sp)
1c008800:	da3e                	sw	a5,52(sp)
1c008802:	dc42                	sw	a6,56(sp)
1c008804:	de46                	sw	a7,60(sp)
1c008806:	c61a                	sw	t1,12(sp)
1c008808:	3f7d                	jal	1c0087c6 <pos_libc_prf_locked>
1c00880a:	40f2                	lw	ra,28(sp)
1c00880c:	6121                	addi	sp,sp,64
1c00880e:	8082                	ret

1c008810 <pos_libc_prf>:
1c008810:	7169                	addi	sp,sp,-304
1c008812:	12812423          	sw	s0,296(sp)
1c008816:	4401                	li	s0,0
1c008818:	11612823          	sw	s6,272(sp)
1c00881c:	11712623          	sw	s7,268(sp)
1c008820:	11812423          	sw	s8,264(sp)
1c008824:	11912223          	sw	s9,260(sp)
1c008828:	11a12023          	sw	s10,256(sp)
1c00882c:	dfee                	sw	s11,252(sp)
1c00882e:	12112623          	sw	ra,300(sp)
1c008832:	8da2                	mv	s11,s0
1c008834:	12912223          	sw	s1,292(sp)
1c008838:	13212023          	sw	s2,288(sp)
1c00883c:	11312e23          	sw	s3,284(sp)
1c008840:	11412c23          	sw	s4,280(sp)
1c008844:	11512a23          	sw	s5,276(sp)
1c008848:	8b2a                	mv	s6,a0
1c00884a:	8d2e                	mv	s10,a1
1c00884c:	8c36                	mv	s8,a3
1c00884e:	1c000bb7          	lui	s7,0x1c000
1c008852:	02410c93          	addi	s9,sp,36
1c008856:	8432                	mv	s0,a2
1c008858:	00044503          	lbu	a0,0(s0)
1c00885c:	0405                	addi	s0,s0,1
1c00885e:	cd11                	beqz	a0,1c00887a <pos_libc_prf+0x6a>
1c008860:	02500793          	li	a5,37
1c008864:	04f50863          	beq	a0,a5,1c0088b4 <pos_libc_prf+0xa4>
1c008868:	85ea                	mv	a1,s10
1c00886a:	9b02                	jalr	s6
1c00886c:	31f52563          	p.beqimm	a0,-1,1c008b76 <pos_libc_prf+0x366>
1c008870:	0d85                	addi	s11,s11,1
1c008872:	00044503          	lbu	a0,0(s0)
1c008876:	0405                	addi	s0,s0,1
1c008878:	f565                	bnez	a0,1c008860 <pos_libc_prf+0x50>
1c00887a:	846e                	mv	s0,s11
1c00887c:	8522                	mv	a0,s0
1c00887e:	12c12083          	lw	ra,300(sp)
1c008882:	12812403          	lw	s0,296(sp)
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
1c0088b4:	00044483          	lbu	s1,0(s0)
1c0088b8:	02000693          	li	a3,32
1c0088bc:	00140a93          	addi	s5,s0,1
1c0088c0:	078b8513          	addi	a0,s7,120 # 1c000078 <__DTOR_END__+0x5c>
1c0088c4:	85a6                	mv	a1,s1
1c0088c6:	c836                	sw	a3,16(sp)
1c0088c8:	cc02                	sw	zero,24(sp)
1c0088ca:	ca02                	sw	zero,20(sp)
1c0088cc:	ce02                	sw	zero,28(sp)
1c0088ce:	c602                	sw	zero,12(sp)
1c0088d0:	02300913          	li	s2,35
1c0088d4:	02d00a13          	li	s4,45
1c0088d8:	89d6                	mv	s3,s5
1c0088da:	3579                	jal	1c008768 <strchr>
1c0088dc:	c915                	beqz	a0,1c008910 <pos_libc_prf+0x100>
1c0088de:	2b248b63          	beq	s1,s2,1c008b94 <pos_libc_prf+0x384>
1c0088e2:	0c997463          	bleu	s1,s2,1c0089aa <pos_libc_prf+0x19a>
1c0088e6:	2b448363          	beq	s1,s4,1c008b8c <pos_libc_prf+0x37c>
1c0088ea:	03000613          	li	a2,48
1c0088ee:	28c48a63          	beq	s1,a2,1c008b82 <pos_libc_prf+0x372>
1c0088f2:	02b00693          	li	a3,43
1c0088f6:	28d48263          	beq	s1,a3,1c008b7a <pos_libc_prf+0x36a>
1c0088fa:	8456                	mv	s0,s5
1c0088fc:	00044483          	lbu	s1,0(s0)
1c008900:	00140a93          	addi	s5,s0,1
1c008904:	078b8513          	addi	a0,s7,120
1c008908:	85a6                	mv	a1,s1
1c00890a:	89d6                	mv	s3,s5
1c00890c:	3db1                	jal	1c008768 <strchr>
1c00890e:	f961                	bnez	a0,1c0088de <pos_libc_prf+0xce>
1c008910:	02a00613          	li	a2,42
1c008914:	2ac48663          	beq	s1,a2,1c008bc0 <pos_libc_prf+0x3b0>
1c008918:	fd048613          	addi	a2,s1,-48
1c00891c:	45a5                	li	a1,9
1c00891e:	4901                	li	s2,0
1c008920:	28c5f063          	bleu	a2,a1,1c008ba0 <pos_libc_prf+0x390>
1c008924:	02e00693          	li	a3,46
1c008928:	5a7d                	li	s4,-1
1c00892a:	2ed48363          	beq	s1,a3,1c008c10 <pos_libc_prf+0x400>
1c00892e:	1c0007b7          	lui	a5,0x1c000
1c008932:	85a6                	mv	a1,s1
1c008934:	08078513          	addi	a0,a5,128 # 1c000080 <__DTOR_END__+0x64>
1c008938:	3d05                	jal	1c008768 <strchr>
1c00893a:	844e                	mv	s0,s3
1c00893c:	c509                	beqz	a0,1c008946 <pos_libc_prf+0x136>
1c00893e:	0009c483          	lbu	s1,0(s3)
1c008942:	00198413          	addi	s0,s3,1
1c008946:	06700693          	li	a3,103
1c00894a:	2896d963          	ble	s1,a3,1c008bdc <pos_libc_prf+0x3cc>
1c00894e:	07000693          	li	a3,112
1c008952:	7cd48b63          	beq	s1,a3,1c009128 <pos_libc_prf+0x918>
1c008956:	2e96d163          	ble	s1,a3,1c008c38 <pos_libc_prf+0x428>
1c00895a:	07500693          	li	a3,117
1c00895e:	12d489e3          	beq	s1,a3,1c009290 <pos_libc_prf+0xa80>
1c008962:	07800693          	li	a3,120
1c008966:	06d48663          	beq	s1,a3,1c0089d2 <pos_libc_prf+0x1c2>
1c00896a:	07300693          	li	a3,115
1c00896e:	18d49fe3          	bne	s1,a3,1c00930c <pos_libc_prf+0xafc>
1c008972:	000c2583          	lw	a1,0(s8)
1c008976:	004c0993          	addi	s3,s8,4
1c00897a:	4481                	li	s1,0
1c00897c:	86ae                	mv	a3,a1
1c00897e:	0c8350fb          	lp.setupi	x1,200,1c00898a <pos_libc_prf+0x17a>
1c008982:	0016c70b          	p.lbu	a4,1(a3!)
1c008986:	18070ae3          	beqz	a4,1c00931a <pos_libc_prf+0xb0a>
1c00898a:	0485                	addi	s1,s1,1
1c00898c:	000a4763          	bltz	s4,1c00899a <pos_libc_prf+0x18a>
1c008990:	0544c4b3          	p.min	s1,s1,s4
1c008994:	8c4e                	mv	s8,s3
1c008996:	ec0481e3          	beqz	s1,1c008858 <pos_libc_prf+0x48>
1c00899a:	8626                	mv	a2,s1
1c00899c:	8566                	mv	a0,s9
1c00899e:	3c99                	jal	1c0083f4 <memcpy>
1c0089a0:	8c4e                	mv	s8,s3
1c0089a2:	1b24db63          	ble	s2,s1,1c008b58 <pos_libc_prf+0x348>
1c0089a6:	c602                	sw	zero,12(sp)
1c0089a8:	a0f9                	j	1c008a76 <pos_libc_prf+0x266>
1c0089aa:	ec0488e3          	beqz	s1,1c00887a <pos_libc_prf+0x6a>
1c0089ae:	02000593          	li	a1,32
1c0089b2:	f4b494e3          	bne	s1,a1,1c0088fa <pos_libc_prf+0xea>
1c0089b6:	4785                	li	a5,1
1c0089b8:	cc3e                	sw	a5,24(sp)
1c0089ba:	8456                	mv	s0,s5
1c0089bc:	b781                	j	1c0088fc <pos_libc_prf+0xec>
1c0089be:	06300693          	li	a3,99
1c0089c2:	0ad48de3          	beq	s1,a3,1c00927c <pos_libc_prf+0xa6c>
1c0089c6:	0096cde3          	blt	a3,s1,1c0091e0 <pos_libc_prf+0x9d0>
1c0089ca:	05800693          	li	a3,88
1c0089ce:	12d49fe3          	bne	s1,a3,1c00930c <pos_libc_prf+0xafc>
1c0089d2:	47b2                	lw	a5,12(sp)
1c0089d4:	004c0893          	addi	a7,s8,4
1c0089d8:	000c2503          	lw	a0,0(s8)
1c0089dc:	260788e3          	beqz	a5,1c00944c <pos_libc_prf+0xc3c>
1c0089e0:	76e1                	lui	a3,0xffff8
1c0089e2:	8306c693          	xori	a3,a3,-2000
1c0089e6:	02d11223          	sh	a3,36(sp)
1c0089ea:	4309                	li	t1,2
1c0089ec:	02610613          	addi	a2,sp,38
1c0089f0:	86b2                	mv	a3,a2
1c0089f2:	4ea5                	li	t4,9
1c0089f4:	f6453733          	p.bclr	a4,a0,27,4
1c0089f8:	0ff77793          	andi	a5,a4,255
1c0089fc:	03078593          	addi	a1,a5,48
1c008a00:	8111                	srli	a0,a0,0x4
1c008a02:	05778793          	addi	a5,a5,87
1c008a06:	70eee963          	bltu	t4,a4,1c009118 <pos_libc_prf+0x908>
1c008a0a:	00b680ab          	p.sb	a1,1(a3!) # ffff8001 <pulp__FC+0xffff8002>
1c008a0e:	f17d                	bnez	a0,1c0089f4 <pos_libc_prf+0x1e4>
1c008a10:	40c68733          	sub	a4,a3,a2
1c008a14:	01475d63          	ble	s4,a4,1c008a2e <pos_libc_prf+0x21e>
1c008a18:	40d605b3          	sub	a1,a2,a3
1c008a1c:	03000513          	li	a0,48
1c008a20:	95d2                	add	a1,a1,s4
1c008a22:	0045c0fb          	lp.setup	x1,a1,1c008a2a <pos_libc_prf+0x21a>
1c008a26:	00a680ab          	p.sb	a0,1(a3!)
1c008a2a:	40c68733          	sub	a4,a3,a2
1c008a2e:	fe068fab          	p.sb	zero,-1(a3!)
1c008a32:	00d67c63          	bleu	a3,a2,1c008a4a <pos_libc_prf+0x23a>
1c008a36:	00064583          	lbu	a1,0(a2)
1c008a3a:	0006c783          	lbu	a5,0(a3)
1c008a3e:	feb68fab          	p.sb	a1,-1(a3!)
1c008a42:	00f600ab          	p.sb	a5,1(a2!)
1c008a46:	fed668e3          	bltu	a2,a3,1c008a36 <pos_libc_prf+0x226>
1c008a4a:	05800693          	li	a3,88
1c008a4e:	20d483e3          	beq	s1,a3,1c009454 <pos_libc_prf+0xc44>
1c008a52:	46b2                	lw	a3,12(sp)
1c008a54:	006704b3          	add	s1,a4,t1
1c008a58:	c299                	beqz	a3,1c008a5e <pos_libc_prf+0x24e>
1c008a5a:	4709                	li	a4,2
1c008a5c:	c63a                	sw	a4,12(sp)
1c008a5e:	0c800793          	li	a5,200
1c008a62:	23fa24e3          	p.beqimm	s4,-1,1c00948a <pos_libc_prf+0xc7a>
1c008a66:	1097c863          	blt	a5,s1,1c008b76 <pos_libc_prf+0x366>
1c008a6a:	02000793          	li	a5,32
1c008a6e:	8c46                	mv	s8,a7
1c008a70:	c83e                	sw	a5,16(sp)
1c008a72:	0f24d163          	ble	s2,s1,1c008b54 <pos_libc_prf+0x344>
1c008a76:	4772                	lw	a4,28(sp)
1c008a78:	0c0702e3          	beqz	a4,1c00933c <pos_libc_prf+0xb2c>
1c008a7c:	009c87b3          	add	a5,s9,s1
1c008a80:	40f007b3          	neg	a5,a5
1c008a84:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008a88:	4595                	li	a1,5
1c008a8a:	00378613          	addi	a2,a5,3
1c008a8e:	fff90693          	addi	a3,s2,-1
1c008a92:	04b67633          	p.maxu	a2,a2,a1
1c008a96:	8e85                	sub	a3,a3,s1
1c008a98:	409905b3          	sub	a1,s2,s1
1c008a9c:	06c6e163          	bltu	a3,a2,1c008afe <pos_libc_prf+0x2ee>
1c008aa0:	8626                	mv	a2,s1
1c008aa2:	cb85                	beqz	a5,1c008ad2 <pos_libc_prf+0x2c2>
1c008aa4:	1998                	addi	a4,sp,240
1c008aa6:	00970633          	add	a2,a4,s1
1c008aaa:	02000693          	li	a3,32
1c008aae:	f2d60a23          	sb	a3,-204(a2)
1c008ab2:	00148613          	addi	a2,s1,1
1c008ab6:	0017ae63          	p.beqimm	a5,1,1c008ad2 <pos_libc_prf+0x2c2>
1c008aba:	963a                	add	a2,a2,a4
1c008abc:	f2d60a23          	sb	a3,-204(a2)
1c008ac0:	00248613          	addi	a2,s1,2
1c008ac4:	0037b763          	p.bneimm	a5,3,1c008ad2 <pos_libc_prf+0x2c2>
1c008ac8:	963a                	add	a2,a2,a4
1c008aca:	f2d60a23          	sb	a3,-204(a2)
1c008ace:	00348613          	addi	a2,s1,3
1c008ad2:	8d9d                	sub	a1,a1,a5
1c008ad4:	0025d693          	srli	a3,a1,0x2
1c008ad8:	97a6                	add	a5,a5,s1
1c008ada:	97e6                	add	a5,a5,s9
1c008adc:	42068fe3          	beqz	a3,1c00971a <pos_libc_prf+0xf0a>
1c008ae0:	0076c0fb          	lp.setup	x1,a3,1c008aee <pos_libc_prf+0x2de>
1c008ae4:	1c000737          	lui	a4,0x1c000
1c008ae8:	07470713          	addi	a4,a4,116 # 1c000074 <__DTOR_END__+0x58>
1c008aec:	4318                	lw	a4,0(a4)
1c008aee:	00e7a22b          	p.sw	a4,4(a5!)
1c008af2:	c205b7b3          	p.bclr	a5,a1,1,0
1c008af6:	00c784b3          	add	s1,a5,a2
1c008afa:	04b78c63          	beq	a5,a1,1c008b52 <pos_libc_prf+0x342>
1c008afe:	198c                	addi	a1,sp,240
1c008b00:	009586b3          	add	a3,a1,s1
1c008b04:	02000793          	li	a5,32
1c008b08:	f2f68a23          	sb	a5,-204(a3)
1c008b0c:	00148693          	addi	a3,s1,1
1c008b10:	0526d163          	ble	s2,a3,1c008b52 <pos_libc_prf+0x342>
1c008b14:	96ae                	add	a3,a3,a1
1c008b16:	f2f68a23          	sb	a5,-204(a3)
1c008b1a:	00248693          	addi	a3,s1,2
1c008b1e:	0326da63          	ble	s2,a3,1c008b52 <pos_libc_prf+0x342>
1c008b22:	96ae                	add	a3,a3,a1
1c008b24:	f2f68a23          	sb	a5,-204(a3)
1c008b28:	00348693          	addi	a3,s1,3
1c008b2c:	0326d363          	ble	s2,a3,1c008b52 <pos_libc_prf+0x342>
1c008b30:	96ae                	add	a3,a3,a1
1c008b32:	f2f68a23          	sb	a5,-204(a3)
1c008b36:	00448693          	addi	a3,s1,4
1c008b3a:	0126dc63          	ble	s2,a3,1c008b52 <pos_libc_prf+0x342>
1c008b3e:	96ae                	add	a3,a3,a1
1c008b40:	f2f68a23          	sb	a5,-204(a3)
1c008b44:	00548713          	addi	a4,s1,5
1c008b48:	01275563          	ble	s2,a4,1c008b52 <pos_libc_prf+0x342>
1c008b4c:	972e                	add	a4,a4,a1
1c008b4e:	f2f70a23          	sb	a5,-204(a4)
1c008b52:	84ca                	mv	s1,s2
1c008b54:	d00482e3          	beqz	s1,1c008858 <pos_libc_prf+0x48>
1c008b58:	8966                	mv	s2,s9
1c008b5a:	419d8db3          	sub	s11,s11,s9
1c008b5e:	a029                	j	1c008b68 <pos_libc_prf+0x358>
1c008b60:	012d8733          	add	a4,s11,s2
1c008b64:	5a048f63          	beqz	s1,1c009122 <pos_libc_prf+0x912>
1c008b68:	0019450b          	p.lbu	a0,1(s2!)
1c008b6c:	85ea                	mv	a1,s10
1c008b6e:	14fd                	addi	s1,s1,-1
1c008b70:	9b02                	jalr	s6
1c008b72:	fff537e3          	p.bneimm	a0,-1,1c008b60 <pos_libc_prf+0x350>
1c008b76:	547d                	li	s0,-1
1c008b78:	b311                	j	1c00887c <pos_libc_prf+0x6c>
1c008b7a:	4705                	li	a4,1
1c008b7c:	ca3a                	sw	a4,20(sp)
1c008b7e:	8456                	mv	s0,s5
1c008b80:	bbb5                	j	1c0088fc <pos_libc_prf+0xec>
1c008b82:	03000713          	li	a4,48
1c008b86:	c83a                	sw	a4,16(sp)
1c008b88:	8456                	mv	s0,s5
1c008b8a:	bb8d                	j	1c0088fc <pos_libc_prf+0xec>
1c008b8c:	4785                	li	a5,1
1c008b8e:	ce3e                	sw	a5,28(sp)
1c008b90:	8456                	mv	s0,s5
1c008b92:	b3ad                	j	1c0088fc <pos_libc_prf+0xec>
1c008b94:	4685                	li	a3,1
1c008b96:	c636                	sw	a3,12(sp)
1c008b98:	8456                	mv	s0,s5
1c008b9a:	b38d                	j	1c0088fc <pos_libc_prf+0xec>
1c008b9c:	8456                	mv	s0,s5
1c008b9e:	0a85                	addi	s5,s5,1
1c008ba0:	00291793          	slli	a5,s2,0x2
1c008ba4:	97ca                	add	a5,a5,s2
1c008ba6:	0786                	slli	a5,a5,0x1
1c008ba8:	97a6                	add	a5,a5,s1
1c008baa:	000ac483          	lbu	s1,0(s5)
1c008bae:	fd078913          	addi	s2,a5,-48
1c008bb2:	fd048793          	addi	a5,s1,-48
1c008bb6:	fef5f3e3          	bleu	a5,a1,1c008b9c <pos_libc_prf+0x38c>
1c008bba:	00240993          	addi	s3,s0,2
1c008bbe:	a811                	j	1c008bd2 <pos_libc_prf+0x3c2>
1c008bc0:	000c2903          	lw	s2,0(s8)
1c008bc4:	0c11                	addi	s8,s8,4
1c008bc6:	12094d63          	bltz	s2,1c008d00 <pos_libc_prf+0x4f0>
1c008bca:	000ac483          	lbu	s1,0(s5)
1c008bce:	00240993          	addi	s3,s0,2
1c008bd2:	0c800693          	li	a3,200
1c008bd6:	04d95933          	p.minu	s2,s2,a3
1c008bda:	b3a9                	j	1c008924 <pos_libc_prf+0x114>
1c008bdc:	06500693          	li	a3,101
1c008be0:	12d4d563          	ble	a3,s1,1c008d0a <pos_libc_prf+0x4fa>
1c008be4:	04700693          	li	a3,71
1c008be8:	dc96cbe3          	blt	a3,s1,1c0089be <pos_libc_prf+0x1ae>
1c008bec:	04500693          	li	a3,69
1c008bf0:	10d4dd63          	ble	a3,s1,1c008d0a <pos_libc_prf+0x4fa>
1c008bf4:	c80483e3          	beqz	s1,1c00887a <pos_libc_prf+0x6a>
1c008bf8:	02500693          	li	a3,37
1c008bfc:	70d49863          	bne	s1,a3,1c00930c <pos_libc_prf+0xafc>
1c008c00:	85ea                	mv	a1,s10
1c008c02:	02500513          	li	a0,37
1c008c06:	9b02                	jalr	s6
1c008c08:	f7f527e3          	p.beqimm	a0,-1,1c008b76 <pos_libc_prf+0x366>
1c008c0c:	0d85                	addi	s11,s11,1
1c008c0e:	b195                	j	1c008872 <pos_libc_prf+0x62>
1c008c10:	0009c783          	lbu	a5,0(s3)
1c008c14:	02a00693          	li	a3,42
1c008c18:	00198513          	addi	a0,s3,1
1c008c1c:	0ad79963          	bne	a5,a3,1c008cce <pos_libc_prf+0x4be>
1c008c20:	000c2a03          	lw	s4,0(s8)
1c008c24:	0019c483          	lbu	s1,1(s3)
1c008c28:	0c11                	addi	s8,s8,4
1c008c2a:	0989                	addi	s3,s3,2
1c008c2c:	0c800693          	li	a3,200
1c008c30:	cf46dfe3          	ble	s4,a3,1c00892e <pos_libc_prf+0x11e>
1c008c34:	5a7d                	li	s4,-1
1c008c36:	b9e5                	j	1c00892e <pos_libc_prf+0x11e>
1c008c38:	06e00693          	li	a3,110
1c008c3c:	58d48763          	beq	s1,a3,1c0091ca <pos_libc_prf+0x9ba>
1c008c40:	5896dc63          	ble	s1,a3,1c0091d8 <pos_libc_prf+0x9c8>
1c008c44:	47b2                	lw	a5,12(sp)
1c008c46:	004c0813          	addi	a6,s8,4
1c008c4a:	000c2603          	lw	a2,0(s8)
1c008c4e:	04078ee3          	beqz	a5,1c0094aa <pos_libc_prf+0xc9a>
1c008c52:	03000793          	li	a5,48
1c008c56:	02f10223          	sb	a5,36(sp)
1c008c5a:	02060de3          	beqz	a2,1c009494 <pos_libc_prf+0xc84>
1c008c5e:	02510513          	addi	a0,sp,37
1c008c62:	86aa                	mv	a3,a0
1c008c64:	87b6                	mv	a5,a3
1c008c66:	f8363733          	p.bclr	a4,a2,28,3
1c008c6a:	03070713          	addi	a4,a4,48
1c008c6e:	820d                	srli	a2,a2,0x3
1c008c70:	00e780ab          	p.sb	a4,1(a5!)
1c008c74:	fa6d                	bnez	a2,1c008c66 <pos_libc_prf+0x456>
1c008c76:	40a78733          	sub	a4,a5,a0
1c008c7a:	01475d63          	ble	s4,a4,1c008c94 <pos_libc_prf+0x484>
1c008c7e:	40fa0633          	sub	a2,s4,a5
1c008c82:	03000593          	li	a1,48
1c008c86:	962a                	add	a2,a2,a0
1c008c88:	004640fb          	lp.setup	x1,a2,1c008c90 <pos_libc_prf+0x480>
1c008c8c:	00b780ab          	p.sb	a1,1(a5!)
1c008c90:	40a78733          	sub	a4,a5,a0
1c008c94:	fe078fab          	p.sb	zero,-1(a5!)
1c008c98:	00f6fc63          	bleu	a5,a3,1c008cb0 <pos_libc_prf+0x4a0>
1c008c9c:	0006c583          	lbu	a1,0(a3)
1c008ca0:	0007c603          	lbu	a2,0(a5)
1c008ca4:	feb78fab          	p.sb	a1,-1(a5!)
1c008ca8:	00c680ab          	p.sb	a2,1(a3!)
1c008cac:	fef6e8e3          	bltu	a3,a5,1c008c9c <pos_libc_prf+0x48c>
1c008cb0:	46b2                	lw	a3,12(sp)
1c008cb2:	0c800793          	li	a5,200
1c008cb6:	00d704b3          	add	s1,a4,a3
1c008cba:	0bfa2de3          	p.beqimm	s4,-1,1c009574 <pos_libc_prf+0xd64>
1c008cbe:	ea97cce3          	blt	a5,s1,1c008b76 <pos_libc_prf+0x366>
1c008cc2:	02000793          	li	a5,32
1c008cc6:	8c42                	mv	s8,a6
1c008cc8:	c602                	sw	zero,12(sp)
1c008cca:	c83e                	sw	a5,16(sp)
1c008ccc:	b35d                	j	1c008a72 <pos_libc_prf+0x262>
1c008cce:	fd078813          	addi	a6,a5,-48
1c008cd2:	46a5                	li	a3,9
1c008cd4:	84be                	mv	s1,a5
1c008cd6:	862a                	mv	a2,a0
1c008cd8:	4a01                	li	s4,0
1c008cda:	45a5                	li	a1,9
1c008cdc:	89aa                	mv	s3,a0
1c008cde:	c506e8e3          	bltu	a3,a6,1c00892e <pos_libc_prf+0x11e>
1c008ce2:	002a1793          	slli	a5,s4,0x2
1c008ce6:	97d2                	add	a5,a5,s4
1c008ce8:	0786                	slli	a5,a5,0x1
1c008cea:	97a6                	add	a5,a5,s1
1c008cec:	0016448b          	p.lbu	s1,1(a2!)
1c008cf0:	fd078a13          	addi	s4,a5,-48
1c008cf4:	fd048793          	addi	a5,s1,-48
1c008cf8:	fef5f5e3          	bleu	a5,a1,1c008ce2 <pos_libc_prf+0x4d2>
1c008cfc:	89b2                	mv	s3,a2
1c008cfe:	b73d                	j	1c008c2c <pos_libc_prf+0x41c>
1c008d00:	4705                	li	a4,1
1c008d02:	41200933          	neg	s2,s2
1c008d06:	ce3a                	sw	a4,28(sp)
1c008d08:	b5c9                	j	1c008bca <pos_libc_prf+0x3ba>
1c008d0a:	0c1d                	addi	s8,s8,7
1c008d0c:	c40c3c33          	p.bclr	s8,s8,2,0
1c008d10:	000c2683          	lw	a3,0(s8)
1c008d14:	004c2803          	lw	a6,4(s8)
1c008d18:	7ff00613          	li	a2,2047
1c008d1c:	0156d893          	srli	a7,a3,0x15
1c008d20:	01485513          	srli	a0,a6,0x14
1c008d24:	00b81593          	slli	a1,a6,0xb
1c008d28:	00b8e5b3          	or	a1,a7,a1
1c008d2c:	e8b53533          	p.bclr	a0,a0,20,11
1c008d30:	0c21                	addi	s8,s8,8
1c008d32:	06ae                	slli	a3,a3,0xb
1c008d34:	c1f5b5b3          	p.bclr	a1,a1,0,31
1c008d38:	7ac50b63          	beq	a0,a2,1c0094ee <pos_libc_prf+0xcde>
1c008d3c:	04600613          	li	a2,70
1c008d40:	00c49463          	bne	s1,a2,1c008d48 <pos_libc_prf+0x538>
1c008d44:	06600493          	li	s1,102
1c008d48:	00d56633          	or	a2,a0,a3
1c008d4c:	8e4d                	or	a2,a2,a1
1c008d4e:	7c060b63          	beqz	a2,1c009524 <pos_libc_prf+0xd14>
1c008d52:	c0250513          	addi	a0,a0,-1022
1c008d56:	c1f5c333          	p.bset	t1,a1,0,31
1c008d5a:	140842e3          	bltz	a6,1c00969e <pos_libc_prf+0xe8e>
1c008d5e:	4752                	lw	a4,20(sp)
1c008d60:	180703e3          	beqz	a4,1c0096e6 <pos_libc_prf+0xed6>
1c008d64:	02b00613          	li	a2,43
1c008d68:	02c10223          	sb	a2,36(sp)
1c008d6c:	02510893          	addi	a7,sp,37
1c008d70:	5679                	li	a2,-2
1c008d72:	4801                	li	a6,0
1c008d74:	06c55763          	ble	a2,a0,1c008de2 <pos_libc_prf+0x5d2>
1c008d78:	33333e37          	lui	t3,0x33333
1c008d7c:	80000eb7          	lui	t4,0x80000
1c008d80:	332e0e13          	addi	t3,t3,818 # 33333332 <__cluster_text_end+0x17323332>
1c008d84:	fffece93          	not	t4,t4
1c008d88:	5f79                	li	t5,-2
1c008d8a:	a011                	j	1c008d8e <pos_libc_prf+0x57e>
1c008d8c:	853e                	mv	a0,a5
1c008d8e:	01f31613          	slli	a2,t1,0x1f
1c008d92:	0016d713          	srli	a4,a3,0x1
1c008d96:	fc16b7b3          	p.bclr	a5,a3,30,1
1c008d9a:	8f51                	or	a4,a4,a2
1c008d9c:	00e786b3          	add	a3,a5,a4
1c008da0:	00f6b7b3          	sltu	a5,a3,a5
1c008da4:	00135313          	srli	t1,t1,0x1
1c008da8:	933e                	add	t1,t1,a5
1c008daa:	00150793          	addi	a5,a0,1
1c008dae:	fc6e6fe3          	bltu	t3,t1,1c008d8c <pos_libc_prf+0x57c>
1c008db2:	00269613          	slli	a2,a3,0x2
1c008db6:	01e6d593          	srli	a1,a3,0x1e
1c008dba:	00231713          	slli	a4,t1,0x2
1c008dbe:	96b2                	add	a3,a3,a2
1c008dc0:	8f4d                	or	a4,a4,a1
1c008dc2:	933a                	add	t1,t1,a4
1c008dc4:	00c6b633          	sltu	a2,a3,a2
1c008dc8:	9332                	add	t1,t1,a2
1c008dca:	01f6d713          	srli	a4,a3,0x1f
1c008dce:	0509                	addi	a0,a0,2
1c008dd0:	187d                	addi	a6,a6,-1
1c008dd2:	01d31663          	bne	t1,t4,1c008dde <pos_libc_prf+0x5ce>
1c008dd6:	0686                	slli	a3,a3,0x1
1c008dd8:	fc174333          	p.bset	t1,a4,30,1
1c008ddc:	853e                	mv	a0,a5
1c008dde:	fbe548e3          	blt	a0,t5,1c008d8e <pos_libc_prf+0x57e>
1c008de2:	06a05763          	blez	a0,1c008e50 <pos_libc_prf+0x640>
1c008de6:	80000eb7          	lui	t4,0x80000
1c008dea:	4f15                	li	t5,5
1c008dec:	fffece93          	not	t4,t4
1c008df0:	00268613          	addi	a2,a3,2
1c008df4:	00d636b3          	sltu	a3,a2,a3
1c008df8:	9336                	add	t1,t1,a3
1c008dfa:	03e357b3          	divu	a5,t1,t5
1c008dfe:	00365593          	srli	a1,a2,0x3
1c008e02:	157d                	addi	a0,a0,-1
1c008e04:	0805                	addi	a6,a6,1
1c008e06:	00279713          	slli	a4,a5,0x2
1c008e0a:	973e                	add	a4,a4,a5
1c008e0c:	40e30333          	sub	t1,t1,a4
1c008e10:	01d31713          	slli	a4,t1,0x1d
1c008e14:	8dd9                	or	a1,a1,a4
1c008e16:	03e5d5b3          	divu	a1,a1,t5
1c008e1a:	00359693          	slli	a3,a1,0x3
1c008e1e:	00559713          	slli	a4,a1,0x5
1c008e22:	9736                	add	a4,a4,a3
1c008e24:	40e60733          	sub	a4,a2,a4
1c008e28:	03e75733          	divu	a4,a4,t5
1c008e2c:	81f5                	srli	a1,a1,0x1d
1c008e2e:	97ae                	add	a5,a5,a1
1c008e30:	96ba                	add	a3,a3,a4
1c008e32:	00e6b733          	sltu	a4,a3,a4
1c008e36:	00f70333          	add	t1,a4,a5
1c008e3a:	01f6d793          	srli	a5,a3,0x1f
1c008e3e:	0306                	slli	t1,t1,0x1
1c008e40:	0067e333          	or	t1,a5,t1
1c008e44:	0686                	slli	a3,a3,0x1
1c008e46:	157d                	addi	a0,a0,-1
1c008e48:	fe6ef9e3          	bleu	t1,t4,1c008e3a <pos_libc_prf+0x62a>
1c008e4c:	faa042e3          	bgtz	a0,1c008df0 <pos_libc_prf+0x5e0>
1c008e50:	4611                	li	a2,4
1c008e52:	8e09                	sub	a2,a2,a0
1c008e54:	012640fb          	lp.setup	x1,a2,1c008e78 <pos_libc_prf+0x668>
1c008e58:	01f31713          	slli	a4,t1,0x1f
1c008e5c:	0016d793          	srli	a5,a3,0x1
1c008e60:	8fd9                	or	a5,a5,a4
1c008e62:	fc16b6b3          	p.bclr	a3,a3,30,1
1c008e66:	00f68eb3          	add	t4,a3,a5
1c008e6a:	00135313          	srli	t1,t1,0x1
1c008e6e:	00deb6b3          	sltu	a3,t4,a3
1c008e72:	00668533          	add	a0,a3,t1
1c008e76:	832a                	mv	t1,a0
1c008e78:	86f6                	mv	a3,t4
1c008e7a:	06700693          	li	a3,103
1c008e7e:	6c0a4e63          	bltz	s4,1c00955a <pos_libc_prf+0xd4a>
1c008e82:	62d48863          	beq	s1,a3,1c0094b2 <pos_libc_prf+0xca2>
1c008e86:	04700693          	li	a3,71
1c008e8a:	62d48463          	beq	s1,a3,1c0094b2 <pos_libc_prf+0xca2>
1c008e8e:	06600693          	li	a3,102
1c008e92:	78d48963          	beq	s1,a3,1c009624 <pos_libc_prf+0xe14>
1c008e96:	001a0f13          	addi	t5,s4,1
1c008e9a:	45c1                	li	a1,16
1c008e9c:	04bf4f33          	p.min	t5,t5,a1
1c008ea0:	1f7d                	addi	t5,t5,-1
1c008ea2:	4e01                	li	t3,0
1c008ea4:	4581                	li	a1,0
1c008ea6:	080006b7          	lui	a3,0x8000
1c008eaa:	4f95                	li	t6,5
1c008eac:	0f05                	addi	t5,t5,1
1c008eae:	02ff40fb          	lp.setup	x1,t5,1c008f0c <pos_libc_prf+0x6fc>
1c008eb2:	00258713          	addi	a4,a1,2
1c008eb6:	00b737b3          	sltu	a5,a4,a1
1c008eba:	97b6                	add	a5,a5,a3
1c008ebc:	03f7d5b3          	divu	a1,a5,t6
1c008ec0:	00375613          	srli	a2,a4,0x3
1c008ec4:	00259693          	slli	a3,a1,0x2
1c008ec8:	96ae                	add	a3,a3,a1
1c008eca:	8f95                	sub	a5,a5,a3
1c008ecc:	07f6                	slli	a5,a5,0x1d
1c008ece:	8e5d                	or	a2,a2,a5
1c008ed0:	03f65633          	divu	a2,a2,t6
1c008ed4:	00361693          	slli	a3,a2,0x3
1c008ed8:	00561793          	slli	a5,a2,0x5
1c008edc:	97b6                	add	a5,a5,a3
1c008ede:	40f707b3          	sub	a5,a4,a5
1c008ee2:	03f7d7b3          	divu	a5,a5,t6
1c008ee6:	01d65713          	srli	a4,a2,0x1d
1c008eea:	972e                	add	a4,a4,a1
1c008eec:	96be                	add	a3,a3,a5
1c008eee:	00f6b7b3          	sltu	a5,a3,a5
1c008ef2:	973e                	add	a4,a4,a5
1c008ef4:	01f71613          	slli	a2,a4,0x1f
1c008ef8:	0016d793          	srli	a5,a3,0x1
1c008efc:	8fd1                	or	a5,a5,a2
1c008efe:	fc16b6b3          	p.bclr	a3,a3,30,1
1c008f02:	00f685b3          	add	a1,a3,a5
1c008f06:	8305                	srli	a4,a4,0x1
1c008f08:	00d5b6b3          	sltu	a3,a1,a3
1c008f0c:	96ba                	add	a3,a3,a4
1c008f0e:	95f6                	add	a1,a1,t4
1c008f10:	96aa                	add	a3,a3,a0
1c008f12:	01d5beb3          	sltu	t4,a1,t4
1c008f16:	00de8533          	add	a0,t4,a3
1c008f1a:	f6053633          	p.bclr	a2,a0,27,0
1c008f1e:	86ae                	mv	a3,a1
1c008f20:	c22d                	beqz	a2,1c008f82 <pos_libc_prf+0x772>
1c008f22:	00258613          	addi	a2,a1,2
1c008f26:	00b636b3          	sltu	a3,a2,a1
1c008f2a:	96aa                	add	a3,a3,a0
1c008f2c:	4e95                	li	t4,5
1c008f2e:	03d6d333          	divu	t1,a3,t4
1c008f32:	00365513          	srli	a0,a2,0x3
1c008f36:	0805                	addi	a6,a6,1
1c008f38:	00231593          	slli	a1,t1,0x2
1c008f3c:	959a                	add	a1,a1,t1
1c008f3e:	8e8d                	sub	a3,a3,a1
1c008f40:	06f6                	slli	a3,a3,0x1d
1c008f42:	8d55                	or	a0,a0,a3
1c008f44:	03d55533          	divu	a0,a0,t4
1c008f48:	00351593          	slli	a1,a0,0x3
1c008f4c:	00551693          	slli	a3,a0,0x5
1c008f50:	96ae                	add	a3,a3,a1
1c008f52:	40d606b3          	sub	a3,a2,a3
1c008f56:	03d6d6b3          	divu	a3,a3,t4
1c008f5a:	8175                	srli	a0,a0,0x1d
1c008f5c:	951a                	add	a0,a0,t1
1c008f5e:	95b6                	add	a1,a1,a3
1c008f60:	00d5b6b3          	sltu	a3,a1,a3
1c008f64:	00a68633          	add	a2,a3,a0
1c008f68:	01f61513          	slli	a0,a2,0x1f
1c008f6c:	0015d693          	srli	a3,a1,0x1
1c008f70:	8ec9                	or	a3,a3,a0
1c008f72:	fc15b5b3          	p.bclr	a1,a1,30,1
1c008f76:	96ae                	add	a3,a3,a1
1c008f78:	8205                	srli	a2,a2,0x1
1c008f7a:	00b6b5b3          	sltu	a1,a3,a1
1c008f7e:	00c58533          	add	a0,a1,a2
1c008f82:	06600593          	li	a1,102
1c008f86:	00188613          	addi	a2,a7,1
1c008f8a:	60b48463          	beq	s1,a1,1c009592 <pos_libc_prf+0xd82>
1c008f8e:	00269593          	slli	a1,a3,0x2
1c008f92:	01e6de93          	srli	t4,a3,0x1e
1c008f96:	00251313          	slli	t1,a0,0x2
1c008f9a:	96ae                	add	a3,a3,a1
1c008f9c:	006ee333          	or	t1,t4,t1
1c008fa0:	00b6b5b3          	sltu	a1,a3,a1
1c008fa4:	951a                	add	a0,a0,t1
1c008fa6:	952e                	add	a0,a0,a1
1c008fa8:	0506                	slli	a0,a0,0x1
1c008faa:	01f6d593          	srli	a1,a3,0x1f
1c008fae:	8d4d                	or	a0,a0,a1
1c008fb0:	01c55593          	srli	a1,a0,0x1c
1c008fb4:	03058313          	addi	t1,a1,48
1c008fb8:	47b2                	lw	a5,12(sp)
1c008fba:	10000737          	lui	a4,0x10000
1c008fbe:	00b035b3          	snez	a1,a1
1c008fc2:	177d                	addi	a4,a4,-1
1c008fc4:	00688023          	sb	t1,0(a7)
1c008fc8:	0686                	slli	a3,a3,0x1
1c008fca:	8d79                	and	a0,a0,a4
1c008fcc:	40b80833          	sub	a6,a6,a1
1c008fd0:	5a078863          	beqz	a5,1c009580 <pos_libc_prf+0xd70>
1c008fd4:	02e00613          	li	a2,46
1c008fd8:	00c880a3          	sb	a2,1(a7)
1c008fdc:	00288613          	addi	a2,a7,2
1c008fe0:	040a0b63          	beqz	s4,1c009036 <pos_libc_prf+0x826>
1c008fe4:	8332                	mv	t1,a2
1c008fe6:	9a32                	add	s4,s4,a2
1c008fe8:	4ebd                	li	t4,15
1c008fea:	03000f13          	li	t5,48
1c008fee:	00269793          	slli	a5,a3,0x2
1c008ff2:	01e6d593          	srli	a1,a3,0x1e
1c008ff6:	00251713          	slli	a4,a0,0x2
1c008ffa:	00d78633          	add	a2,a5,a3
1c008ffe:	8f4d                	or	a4,a4,a1
1c009000:	972a                	add	a4,a4,a0
1c009002:	00f637b3          	sltu	a5,a2,a5
1c009006:	97ba                	add	a5,a5,a4
1c009008:	0786                	slli	a5,a5,0x1
1c00900a:	01f65713          	srli	a4,a2,0x1f
1c00900e:	8fd9                	or	a5,a5,a4
1c009010:	01c7d713          	srli	a4,a5,0x1c
1c009014:	03070713          	addi	a4,a4,48 # 10000030 <ne16_infeat+0x2c>
1c009018:	2fd05463          	blez	t4,1c009300 <pos_libc_prf+0xaf0>
1c00901c:	100005b7          	lui	a1,0x10000
1c009020:	15fd                	addi	a1,a1,-1
1c009022:	00e300ab          	p.sb	a4,1(t1!)
1c009026:	1efd                	addi	t4,t4,-1
1c009028:	00161693          	slli	a3,a2,0x1
1c00902c:	00b7f533          	and	a0,a5,a1
1c009030:	fa6a1fe3          	bne	s4,t1,1c008fee <pos_libc_prf+0x7de>
1c009034:	8652                	mv	a2,s4
1c009036:	0c0e1163          	bnez	t3,1c0090f8 <pos_libc_prf+0x8e8>
1c00903a:	c054b6b3          	p.bclr	a3,s1,0,5
1c00903e:	04500593          	li	a1,69
1c009042:	02b69963          	bne	a3,a1,1c009074 <pos_libc_prf+0x864>
1c009046:	87a6                	mv	a5,s1
1c009048:	00f60023          	sb	a5,0(a2)
1c00904c:	5e084d63          	bltz	a6,1c009646 <pos_libc_prf+0xe36>
1c009050:	02b00793          	li	a5,43
1c009054:	00f600a3          	sb	a5,1(a2)
1c009058:	47a9                	li	a5,10
1c00905a:	02f846b3          	div	a3,a6,a5
1c00905e:	0611                	addi	a2,a2,4
1c009060:	02f867b3          	rem	a5,a6,a5
1c009064:	03068693          	addi	a3,a3,48 # 8000030 <__l1_heap_size+0x7ff13e0>
1c009068:	fed60f23          	sb	a3,-2(a2)
1c00906c:	03078793          	addi	a5,a5,48
1c009070:	fef60fa3          	sb	a5,-1(a2)
1c009074:	00060023          	sb	zero,0(a2)
1c009078:	419604b3          	sub	s1,a2,s9
1c00907c:	46d2                	lw	a3,20(sp)
1c00907e:	4762                	lw	a4,24(sp)
1c009080:	8ed9                	or	a3,a3,a4
1c009082:	c636                	sw	a3,12(sp)
1c009084:	2a069463          	bnez	a3,1c00932c <pos_libc_prf+0xb1c>
1c009088:	02414683          	lbu	a3,36(sp)
1c00908c:	02d00793          	li	a5,45
1c009090:	28f68e63          	beq	a3,a5,1c00932c <pos_libc_prf+0xb1c>
1c009094:	0c800793          	li	a5,200
1c009098:	9c97dde3          	ble	s1,a5,1c008a72 <pos_libc_prf+0x262>
1c00909c:	547d                	li	s0,-1
1c00909e:	fdeff06f          	j	1c00887c <pos_libc_prf+0x6c>
1c0090a2:	0305                	addi	t1,t1,1
1c0090a4:	00269793          	slli	a5,a3,0x2
1c0090a8:	01e6d893          	srli	a7,a3,0x1e
1c0090ac:	00251713          	slli	a4,a0,0x2
1c0090b0:	00d785b3          	add	a1,a5,a3
1c0090b4:	00e8e733          	or	a4,a7,a4
1c0090b8:	972a                	add	a4,a4,a0
1c0090ba:	00f5b7b3          	sltu	a5,a1,a5
1c0090be:	97ba                	add	a5,a5,a4
1c0090c0:	0786                	slli	a5,a5,0x1
1c0090c2:	01f5d713          	srli	a4,a1,0x1f
1c0090c6:	8fd9                	or	a5,a5,a4
1c0090c8:	01c7d893          	srli	a7,a5,0x1c
1c0090cc:	03000713          	li	a4,48
1c0090d0:	01d05c63          	blez	t4,1c0090e8 <pos_libc_prf+0x8d8>
1c0090d4:	00159693          	slli	a3,a1,0x1
1c0090d8:	100005b7          	lui	a1,0x10000
1c0090dc:	15fd                	addi	a1,a1,-1
1c0090de:	03088713          	addi	a4,a7,48
1c0090e2:	1efd                	addi	t4,t4,-1
1c0090e4:	00b7f533          	and	a0,a5,a1
1c0090e8:	fee30fa3          	sb	a4,-1(t1)
1c0090ec:	fa661be3          	bne	a2,t1,1c0090a2 <pos_libc_prf+0x892>
1c0090f0:	014f8633          	add	a2,t6,s4
1c0090f4:	f80e00e3          	beqz	t3,1c009074 <pos_libc_prf+0x864>
1c0090f8:	03000513          	li	a0,48
1c0090fc:	a011                	j	1c009100 <pos_libc_prf+0x8f0>
1c0090fe:	8636                	mv	a2,a3
1c009100:	fff60693          	addi	a3,a2,-1
1c009104:	0006c583          	lbu	a1,0(a3)
1c009108:	fea58be3          	beq	a1,a0,1c0090fe <pos_libc_prf+0x8ee>
1c00910c:	02e00513          	li	a0,46
1c009110:	f2a595e3          	bne	a1,a0,1c00903a <pos_libc_prf+0x82a>
1c009114:	8636                	mv	a2,a3
1c009116:	b715                	j	1c00903a <pos_libc_prf+0x82a>
1c009118:	00f680ab          	p.sb	a5,1(a3!)
1c00911c:	8c051ce3          	bnez	a0,1c0089f4 <pos_libc_prf+0x1e4>
1c009120:	b8c5                	j	1c008a10 <pos_libc_prf+0x200>
1c009122:	8dba                	mv	s11,a4
1c009124:	f34ff06f          	j	1c008858 <pos_libc_prf+0x48>
1c009128:	77e1                	lui	a5,0xffff8
1c00912a:	8307c793          	xori	a5,a5,-2000
1c00912e:	02610693          	addi	a3,sp,38
1c009132:	000c2583          	lw	a1,0(s8)
1c009136:	02f11223          	sh	a5,36(sp)
1c00913a:	0c11                	addi	s8,s8,4
1c00913c:	87b6                	mv	a5,a3
1c00913e:	48a5                	li	a7,9
1c009140:	f645b633          	p.bclr	a2,a1,27,4
1c009144:	0ff67713          	andi	a4,a2,255
1c009148:	03070513          	addi	a0,a4,48
1c00914c:	8191                	srli	a1,a1,0x4
1c00914e:	05770713          	addi	a4,a4,87
1c009152:	06c8e863          	bltu	a7,a2,1c0091c2 <pos_libc_prf+0x9b2>
1c009156:	00a780ab          	p.sb	a0,1(a5!) # ffff8001 <pulp__FC+0xffff8002>
1c00915a:	f1fd                	bnez	a1,1c009140 <pos_libc_prf+0x930>
1c00915c:	40d78733          	sub	a4,a5,a3
1c009160:	461d                	li	a2,7
1c009162:	02e64563          	blt	a2,a4,1c00918c <pos_libc_prf+0x97c>
1c009166:	1998                	addi	a4,sp,240
1c009168:	40e78533          	sub	a0,a5,a4
1c00916c:	40f68633          	sub	a2,a3,a5
1c009170:	0cb50513          	addi	a0,a0,203
1c009174:	4821                	li	a6,8
1c009176:	03000593          	li	a1,48
1c00917a:	0621                	addi	a2,a2,8
1c00917c:	5aa84263          	blt	a6,a0,1c009720 <pos_libc_prf+0xf10>
1c009180:	004640fb          	lp.setup	x1,a2,1c009188 <pos_libc_prf+0x978>
1c009184:	00b780ab          	p.sb	a1,1(a5!)
1c009188:	40d78733          	sub	a4,a5,a3
1c00918c:	fe078fab          	p.sb	zero,-1(a5!)
1c009190:	00f6fc63          	bleu	a5,a3,1c0091a8 <pos_libc_prf+0x998>
1c009194:	0006c583          	lbu	a1,0(a3)
1c009198:	0007c603          	lbu	a2,0(a5)
1c00919c:	feb78fab          	p.sb	a1,-1(a5!)
1c0091a0:	00c680ab          	p.sb	a2,1(a3!)
1c0091a4:	fef6e8e3          	bltu	a3,a5,1c009194 <pos_libc_prf+0x984>
1c0091a8:	00270493          	addi	s1,a4,2
1c0091ac:	0c800793          	li	a5,200
1c0091b0:	17fa2963          	p.beqimm	s4,-1,1c009322 <pos_libc_prf+0xb12>
1c0091b4:	9c97c1e3          	blt	a5,s1,1c008b76 <pos_libc_prf+0x366>
1c0091b8:	02000713          	li	a4,32
1c0091bc:	c602                	sw	zero,12(sp)
1c0091be:	c83a                	sw	a4,16(sp)
1c0091c0:	b84d                	j	1c008a72 <pos_libc_prf+0x262>
1c0091c2:	00e780ab          	p.sb	a4,1(a5!)
1c0091c6:	fdad                	bnez	a1,1c009140 <pos_libc_prf+0x930>
1c0091c8:	bf51                	j	1c00915c <pos_libc_prf+0x94c>
1c0091ca:	000c2783          	lw	a5,0(s8)
1c0091ce:	0c11                	addi	s8,s8,4
1c0091d0:	01b7a023          	sw	s11,0(a5)
1c0091d4:	e84ff06f          	j	1c008858 <pos_libc_prf+0x48>
1c0091d8:	06900693          	li	a3,105
1c0091dc:	12d49863          	bne	s1,a3,1c00930c <pos_libc_prf+0xafc>
1c0091e0:	000c2503          	lw	a0,0(s8)
1c0091e4:	0c11                	addi	s8,s8,4
1c0091e6:	34054d63          	bltz	a0,1c009540 <pos_libc_prf+0xd30>
1c0091ea:	4652                	lw	a2,20(sp)
1c0091ec:	86aa                	mv	a3,a0
1c0091ee:	2e061963          	bnez	a2,1c0094e0 <pos_libc_prf+0xcd0>
1c0091f2:	4762                	lw	a4,24(sp)
1c0091f4:	87e6                	mv	a5,s9
1c0091f6:	c719                	beqz	a4,1c009204 <pos_libc_prf+0x9f4>
1c0091f8:	02000793          	li	a5,32
1c0091fc:	02f10223          	sb	a5,36(sp)
1c009200:	02510793          	addi	a5,sp,37
1c009204:	873e                	mv	a4,a5
1c009206:	45a9                	li	a1,10
1c009208:	02b6f633          	remu	a2,a3,a1
1c00920c:	02b6d6b3          	divu	a3,a3,a1
1c009210:	03060613          	addi	a2,a2,48
1c009214:	00c700ab          	p.sb	a2,1(a4!)
1c009218:	fae5                	bnez	a3,1c009208 <pos_libc_prf+0x9f8>
1c00921a:	40f706b3          	sub	a3,a4,a5
1c00921e:	0146dc63          	ble	s4,a3,1c009236 <pos_libc_prf+0xa26>
1c009222:	40e786b3          	sub	a3,a5,a4
1c009226:	03000613          	li	a2,48
1c00922a:	96d2                	add	a3,a3,s4
1c00922c:	0046c0fb          	lp.setup	x1,a3,1c009234 <pos_libc_prf+0xa24>
1c009230:	00c700ab          	p.sb	a2,1(a4!)
1c009234:	0001                	nop
1c009236:	86ba                	mv	a3,a4
1c009238:	fe068fab          	p.sb	zero,-1(a3!)
1c00923c:	00d7fc63          	bleu	a3,a5,1c009254 <pos_libc_prf+0xa44>
1c009240:	0007c583          	lbu	a1,0(a5)
1c009244:	0006c603          	lbu	a2,0(a3)
1c009248:	feb68fab          	p.sb	a1,-1(a3!)
1c00924c:	00c780ab          	p.sb	a2,1(a5!)
1c009250:	fed7e8e3          	bltu	a5,a3,1c009240 <pos_libc_prf+0xa30>
1c009254:	47d2                	lw	a5,20(sp)
1c009256:	4662                	lw	a2,24(sp)
1c009258:	419704b3          	sub	s1,a4,s9
1c00925c:	8fd1                	or	a5,a5,a2
1c00925e:	c63e                	sw	a5,12(sp)
1c009260:	e399                	bnez	a5,1c009266 <pos_libc_prf+0xa56>
1c009262:	817d                	srli	a0,a0,0x1f
1c009264:	c62a                	sw	a0,12(sp)
1c009266:	e3fa27e3          	p.beqimm	s4,-1,1c009094 <pos_libc_prf+0x884>
1c00926a:	0c800793          	li	a5,200
1c00926e:	9097c4e3          	blt	a5,s1,1c008b76 <pos_libc_prf+0x366>
1c009272:	02000713          	li	a4,32
1c009276:	c83a                	sw	a4,16(sp)
1c009278:	ffaff06f          	j	1c008a72 <pos_libc_prf+0x262>
1c00927c:	000c2783          	lw	a5,0(s8)
1c009280:	020102a3          	sb	zero,37(sp)
1c009284:	0c11                	addi	s8,s8,4
1c009286:	02f10223          	sb	a5,36(sp)
1c00928a:	4485                	li	s1,1
1c00928c:	f16ff06f          	j	1c0089a2 <pos_libc_prf+0x192>
1c009290:	000c2683          	lw	a3,0(s8)
1c009294:	87e6                	mv	a5,s9
1c009296:	0c11                	addi	s8,s8,4
1c009298:	45a9                	li	a1,10
1c00929a:	02b6f733          	remu	a4,a3,a1
1c00929e:	02b6d6b3          	divu	a3,a3,a1
1c0092a2:	03070713          	addi	a4,a4,48
1c0092a6:	00e780ab          	p.sb	a4,1(a5!)
1c0092aa:	fae5                	bnez	a3,1c00929a <pos_libc_prf+0xa8a>
1c0092ac:	419784b3          	sub	s1,a5,s9
1c0092b0:	0144dd63          	ble	s4,s1,1c0092ca <pos_libc_prf+0xaba>
1c0092b4:	40fc86b3          	sub	a3,s9,a5
1c0092b8:	03000613          	li	a2,48
1c0092bc:	96d2                	add	a3,a3,s4
1c0092be:	0046c0fb          	lp.setup	x1,a3,1c0092c6 <pos_libc_prf+0xab6>
1c0092c2:	00c780ab          	p.sb	a2,1(a5!)
1c0092c6:	419784b3          	sub	s1,a5,s9
1c0092ca:	fe078fab          	p.sb	zero,-1(a5!)
1c0092ce:	00fcfd63          	bleu	a5,s9,1c0092e8 <pos_libc_prf+0xad8>
1c0092d2:	86e6                	mv	a3,s9
1c0092d4:	0006c603          	lbu	a2,0(a3)
1c0092d8:	0007c703          	lbu	a4,0(a5)
1c0092dc:	fec78fab          	p.sb	a2,-1(a5!)
1c0092e0:	00e680ab          	p.sb	a4,1(a3!)
1c0092e4:	fef6e8e3          	bltu	a3,a5,1c0092d4 <pos_libc_prf+0xac4>
1c0092e8:	0c800793          	li	a5,200
1c0092ec:	03fa2b63          	p.beqimm	s4,-1,1c009322 <pos_libc_prf+0xb12>
1c0092f0:	8897c3e3          	blt	a5,s1,1c008b76 <pos_libc_prf+0x366>
1c0092f4:	02000693          	li	a3,32
1c0092f8:	c602                	sw	zero,12(sp)
1c0092fa:	c836                	sw	a3,16(sp)
1c0092fc:	f76ff06f          	j	1c008a72 <pos_libc_prf+0x262>
1c009300:	01e300ab          	p.sb	t5,1(t1!)
1c009304:	ce6a15e3          	bne	s4,t1,1c008fee <pos_libc_prf+0x7de>
1c009308:	8652                	mv	a2,s4
1c00930a:	b335                	j	1c009036 <pos_libc_prf+0x826>
1c00930c:	0c800693          	li	a3,200
1c009310:	d496d463          	ble	s1,a3,1c008858 <pos_libc_prf+0x48>
1c009314:	547d                	li	s0,-1
1c009316:	d66ff06f          	j	1c00887c <pos_libc_prf+0x6c>
1c00931a:	e60a5b63          	bgez	s4,1c008990 <pos_libc_prf+0x180>
1c00931e:	e76ff06f          	j	1c008994 <pos_libc_prf+0x184>
1c009322:	8497cae3          	blt	a5,s1,1c008b76 <pos_libc_prf+0x366>
1c009326:	c602                	sw	zero,12(sp)
1c009328:	f4aff06f          	j	1c008a72 <pos_libc_prf+0x262>
1c00932c:	0c800793          	li	a5,200
1c009330:	8497c3e3          	blt	a5,s1,1c008b76 <pos_libc_prf+0x366>
1c009334:	4685                	li	a3,1
1c009336:	c636                	sw	a3,12(sp)
1c009338:	f3aff06f          	j	1c008a72 <pos_libc_prf+0x262>
1c00933c:	409909b3          	sub	s3,s2,s1
1c009340:	00148613          	addi	a2,s1,1
1c009344:	85e6                	mv	a1,s9
1c009346:	013c8533          	add	a0,s9,s3
1c00934a:	9e2ff0ef          	jal	ra,1c00852c <memmove>
1c00934e:	46c2                	lw	a3,16(sp)
1c009350:	02000793          	li	a5,32
1c009354:	32f68b63          	beq	a3,a5,1c00968a <pos_libc_prf+0xe7a>
1c009358:	4732                	lw	a4,12(sp)
1c00935a:	84ca                	mv	s1,s2
1c00935c:	99ba                	add	s3,s3,a4
1c00935e:	ff375b63          	ble	s3,a4,1c008b54 <pos_libc_prf+0x344>
1c009362:	46b2                	lw	a3,12(sp)
1c009364:	4595                	li	a1,5
1c009366:	00dc87b3          	add	a5,s9,a3
1c00936a:	40f007b3          	neg	a5,a5
1c00936e:	fa27b7b3          	p.bclr	a5,a5,29,2
1c009372:	00378613          	addi	a2,a5,3
1c009376:	fff98693          	addi	a3,s3,-1
1c00937a:	04b67633          	p.maxu	a2,a2,a1
1c00937e:	8e99                	sub	a3,a3,a4
1c009380:	40e985b3          	sub	a1,s3,a4
1c009384:	06c6e763          	bltu	a3,a2,1c0093f2 <pos_libc_prf+0xbe2>
1c009388:	863a                	mv	a2,a4
1c00938a:	cf95                	beqz	a5,1c0093c6 <pos_libc_prf+0xbb6>
1c00938c:	1990                	addi	a2,sp,240
1c00938e:	00e606b3          	add	a3,a2,a4
1c009392:	4742                	lw	a4,16(sp)
1c009394:	f2e68a23          	sb	a4,-204(a3)
1c009398:	46b2                	lw	a3,12(sp)
1c00939a:	00168613          	addi	a2,a3,1
1c00939e:	0217a463          	p.beqimm	a5,1,1c0093c6 <pos_libc_prf+0xbb6>
1c0093a2:	86ba                	mv	a3,a4
1c0093a4:	1998                	addi	a4,sp,240
1c0093a6:	963a                	add	a2,a2,a4
1c0093a8:	4732                	lw	a4,12(sp)
1c0093aa:	f2d60a23          	sb	a3,-204(a2)
1c0093ae:	00270613          	addi	a2,a4,2
1c0093b2:	0037ba63          	p.bneimm	a5,3,1c0093c6 <pos_libc_prf+0xbb6>
1c0093b6:	8736                	mv	a4,a3
1c0093b8:	1994                	addi	a3,sp,240
1c0093ba:	9636                	add	a2,a2,a3
1c0093bc:	46b2                	lw	a3,12(sp)
1c0093be:	f2e60a23          	sb	a4,-204(a2)
1c0093c2:	00368613          	addi	a2,a3,3
1c0093c6:	4732                	lw	a4,12(sp)
1c0093c8:	8d9d                	sub	a1,a1,a5
1c0093ca:	0025d693          	srli	a3,a1,0x2
1c0093ce:	97ba                	add	a5,a5,a4
1c0093d0:	4742                	lw	a4,16(sp)
1c0093d2:	97e6                	add	a5,a5,s9
1c0093d4:	00e05557          	pv.add.sc.b	a0,zero,a4
1c0093d8:	34068663          	beqz	a3,1c009724 <pos_libc_prf+0xf14>
1c0093dc:	0046c0fb          	lp.setup	x1,a3,1c0093e4 <pos_libc_prf+0xbd4>
1c0093e0:	00a7a22b          	p.sw	a0,4(a5!)
1c0093e4:	0001                	nop
1c0093e6:	c205b7b3          	p.bclr	a5,a1,1,0
1c0093ea:	963e                	add	a2,a2,a5
1c0093ec:	c632                	sw	a2,12(sp)
1c0093ee:	f6b78263          	beq	a5,a1,1c008b52 <pos_libc_prf+0x342>
1c0093f2:	46b2                	lw	a3,12(sp)
1c0093f4:	4742                	lw	a4,16(sp)
1c0093f6:	198c                	addi	a1,sp,240
1c0093f8:	00d587b3          	add	a5,a1,a3
1c0093fc:	f2e78a23          	sb	a4,-204(a5)
1c009400:	00168793          	addi	a5,a3,1
1c009404:	f537d763          	ble	s3,a5,1c008b52 <pos_libc_prf+0x342>
1c009408:	97ae                	add	a5,a5,a1
1c00940a:	f2e78a23          	sb	a4,-204(a5)
1c00940e:	00268793          	addi	a5,a3,2
1c009412:	f537d063          	ble	s3,a5,1c008b52 <pos_libc_prf+0x342>
1c009416:	97ae                	add	a5,a5,a1
1c009418:	f2e78a23          	sb	a4,-204(a5)
1c00941c:	00368793          	addi	a5,a3,3
1c009420:	f337d963          	ble	s3,a5,1c008b52 <pos_libc_prf+0x342>
1c009424:	97ae                	add	a5,a5,a1
1c009426:	f2e78a23          	sb	a4,-204(a5)
1c00942a:	00468793          	addi	a5,a3,4
1c00942e:	f337d263          	ble	s3,a5,1c008b52 <pos_libc_prf+0x342>
1c009432:	97ae                	add	a5,a5,a1
1c009434:	f2e78a23          	sb	a4,-204(a5)
1c009438:	00568a93          	addi	s5,a3,5
1c00943c:	f13adb63          	ble	s3,s5,1c008b52 <pos_libc_prf+0x342>
1c009440:	9aae                	add	s5,s5,a1
1c009442:	f2ea8a23          	sb	a4,-204(s5)
1c009446:	84ca                	mv	s1,s2
1c009448:	f0cff06f          	j	1c008b54 <pos_libc_prf+0x344>
1c00944c:	4301                	li	t1,0
1c00944e:	8666                	mv	a2,s9
1c009450:	da0ff06f          	j	1c0089f0 <pos_libc_prf+0x1e0>
1c009454:	02414783          	lbu	a5,36(sp)
1c009458:	1054                	addi	a3,sp,36
1c00945a:	4665                	li	a2,25
1c00945c:	de078b63          	beqz	a5,1c008a52 <pos_libc_prf+0x242>
1c009460:	fe078593          	addi	a1,a5,-32
1c009464:	f9f78793          	addi	a5,a5,-97
1c009468:	0ff7f793          	andi	a5,a5,255
1c00946c:	00f66963          	bltu	a2,a5,1c00947e <pos_libc_prf+0xc6e>
1c009470:	00b680ab          	p.sb	a1,1(a3!)
1c009474:	0006c783          	lbu	a5,0(a3)
1c009478:	f7e5                	bnez	a5,1c009460 <pos_libc_prf+0xc50>
1c00947a:	dd8ff06f          	j	1c008a52 <pos_libc_prf+0x242>
1c00947e:	0685                	addi	a3,a3,1
1c009480:	0006c783          	lbu	a5,0(a3)
1c009484:	fff1                	bnez	a5,1c009460 <pos_libc_prf+0xc50>
1c009486:	dccff06f          	j	1c008a52 <pos_libc_prf+0x242>
1c00948a:	ee97c663          	blt	a5,s1,1c008b76 <pos_libc_prf+0x366>
1c00948e:	8c46                	mv	s8,a7
1c009490:	de2ff06f          	j	1c008a72 <pos_libc_prf+0x262>
1c009494:	020102a3          	sb	zero,37(sp)
1c009498:	8c42                	mv	s8,a6
1c00949a:	44b2                	lw	s1,12(sp)
1c00949c:	d1fa2363          	p.beqimm	s4,-1,1c0089a2 <pos_libc_prf+0x192>
1c0094a0:	02000693          	li	a3,32
1c0094a4:	c836                	sw	a3,16(sp)
1c0094a6:	cfcff06f          	j	1c0089a2 <pos_libc_prf+0x192>
1c0094aa:	8566                	mv	a0,s9
1c0094ac:	86e6                	mv	a3,s9
1c0094ae:	fb6ff06f          	j	1c008c64 <pos_libc_prf+0x454>
1c0094b2:	4732                	lw	a4,12(sp)
1c0094b4:	4e01                	li	t3,0
1c0094b6:	e319                	bnez	a4,1c0094bc <pos_libc_prf+0xcac>
1c0094b8:	01403e33          	snez	t3,s4
1c0094bc:	5675                	li	a2,-3
1c0094be:	001a0693          	addi	a3,s4,1
1c0094c2:	00c84463          	blt	a6,a2,1c0094ca <pos_libc_prf+0xcba>
1c0094c6:	1706d063          	ble	a6,a3,1c009626 <pos_libc_prf+0xe16>
1c0094ca:	47c1                	li	a5,16
1c0094cc:	04f6cf33          	p.min	t5,a3,a5
1c0094d0:	06700693          	li	a3,103
1c0094d4:	1f7d                	addi	t5,t5,-1
1c0094d6:	1ed48a63          	beq	s1,a3,1c0096ca <pos_libc_prf+0xeba>
1c0094da:	04500493          	li	s1,69
1c0094de:	b2d9                	j	1c008ea4 <pos_libc_prf+0x694>
1c0094e0:	02b00793          	li	a5,43
1c0094e4:	02f10223          	sb	a5,36(sp)
1c0094e8:	02510793          	addi	a5,sp,37
1c0094ec:	bb21                	j	1c009204 <pos_libc_prf+0x9f4>
1c0094ee:	8666                	mv	a2,s9
1c0094f0:	1a084063          	bltz	a6,1c009690 <pos_libc_prf+0xe80>
1c0094f4:	8ecd                	or	a3,a3,a1
1c0094f6:	fbf48793          	addi	a5,s1,-65
1c0094fa:	00360713          	addi	a4,a2,3
1c0094fe:	14069b63          	bnez	a3,1c009654 <pos_libc_prf+0xe44>
1c009502:	46e5                	li	a3,25
1c009504:	1af6e563          	bltu	a3,a5,1c0096ae <pos_libc_prf+0xe9e>
1c009508:	6795                	lui	a5,0x5
1c00950a:	e4978793          	addi	a5,a5,-439 # 4e49 <__cluster_text_size+0x4e49>
1c00950e:	00f61023          	sh	a5,0(a2)
1c009512:	04600793          	li	a5,70
1c009516:	00f60123          	sb	a5,2(a2)
1c00951a:	000601a3          	sb	zero,3(a2)
1c00951e:	419704b3          	sub	s1,a4,s9
1c009522:	bea9                	j	1c00907c <pos_libc_prf+0x86c>
1c009524:	46d2                	lw	a3,20(sp)
1c009526:	14068463          	beqz	a3,1c00966e <pos_libc_prf+0xe5e>
1c00952a:	02b00693          	li	a3,43
1c00952e:	02d10223          	sb	a3,36(sp)
1c009532:	02510893          	addi	a7,sp,37
1c009536:	4801                	li	a6,0
1c009538:	4501                	li	a0,0
1c00953a:	4681                	li	a3,0
1c00953c:	4301                	li	t1,0
1c00953e:	ba09                	j	1c008e50 <pos_libc_prf+0x640>
1c009540:	02d00793          	li	a5,45
1c009544:	02f10223          	sb	a5,36(sp)
1c009548:	800007b7          	lui	a5,0x80000
1c00954c:	1af50963          	beq	a0,a5,1c0096fe <pos_libc_prf+0xeee>
1c009550:	40a006b3          	neg	a3,a0
1c009554:	02510793          	addi	a5,sp,37
1c009558:	b175                	j	1c009204 <pos_libc_prf+0x9f4>
1c00955a:	4a19                	li	s4,6
1c00955c:	92d495e3          	bne	s1,a3,1c008e86 <pos_libc_prf+0x676>
1c009560:	46b2                	lw	a3,12(sp)
1c009562:	57f5                	li	a5,-3
1c009564:	0016ce13          	xori	t3,a3,1
1c009568:	14f85d63          	ble	a5,a6,1c0096c2 <pos_libc_prf+0xeb2>
1c00956c:	06500493          	li	s1,101
1c009570:	4f19                	li	t5,6
1c009572:	ba0d                	j	1c008ea4 <pos_libc_prf+0x694>
1c009574:	e097c163          	blt	a5,s1,1c008b76 <pos_libc_prf+0x366>
1c009578:	8c42                	mv	s8,a6
1c00957a:	c602                	sw	zero,12(sp)
1c00957c:	cf6ff06f          	j	1c008a72 <pos_libc_prf+0x262>
1c009580:	aa0a0be3          	beqz	s4,1c009036 <pos_libc_prf+0x826>
1c009584:	02e00593          	li	a1,46
1c009588:	00288613          	addi	a2,a7,2
1c00958c:	00b880a3          	sb	a1,1(a7)
1c009590:	bc91                	j	1c008fe4 <pos_libc_prf+0x7d4>
1c009592:	17005b63          	blez	a6,1c009708 <pos_libc_prf+0xef8>
1c009596:	9846                	add	a6,a6,a7
1c009598:	4ec1                	li	t4,16
1c00959a:	03000f13          	li	t5,48
1c00959e:	00269793          	slli	a5,a3,0x2
1c0095a2:	01e6d593          	srli	a1,a3,0x1e
1c0095a6:	00251713          	slli	a4,a0,0x2
1c0095aa:	00d78633          	add	a2,a5,a3
1c0095ae:	8f4d                	or	a4,a4,a1
1c0095b0:	972a                	add	a4,a4,a0
1c0095b2:	00f637b3          	sltu	a5,a2,a5
1c0095b6:	97ba                	add	a5,a5,a4
1c0095b8:	0786                	slli	a5,a5,0x1
1c0095ba:	01f65713          	srli	a4,a2,0x1f
1c0095be:	8fd9                	or	a5,a5,a4
1c0095c0:	01c7d713          	srli	a4,a5,0x1c
1c0095c4:	03070713          	addi	a4,a4,48
1c0095c8:	05d05963          	blez	t4,1c00961a <pos_libc_prf+0xe0a>
1c0095cc:	00e880ab          	p.sb	a4,1(a7!)
1c0095d0:	10000737          	lui	a4,0x10000
1c0095d4:	177d                	addi	a4,a4,-1
1c0095d6:	1efd                	addi	t4,t4,-1
1c0095d8:	00161693          	slli	a3,a2,0x1
1c0095dc:	00e7f533          	and	a0,a5,a4
1c0095e0:	fb181fe3          	bne	a6,a7,1c00959e <pos_libc_prf+0xd8e>
1c0095e4:	8642                	mv	a2,a6
1c0095e6:	4801                	li	a6,0
1c0095e8:	47b2                	lw	a5,12(sp)
1c0095ea:	e399                	bnez	a5,1c0095f0 <pos_libc_prf+0xde0>
1c0095ec:	b00a04e3          	beqz	s4,1c0090f4 <pos_libc_prf+0x8e4>
1c0095f0:	00160f93          	addi	t6,a2,1
1c0095f4:	001a0593          	addi	a1,s4,1
1c0095f8:	02e00893          	li	a7,46
1c0095fc:	01160023          	sb	a7,0(a2)
1c009600:	837e                	mv	t1,t6
1c009602:	962e                	add	a2,a2,a1
1c009604:	03000593          	li	a1,48
1c009608:	aec304e3          	beq	t1,a2,1c0090f0 <pos_libc_prf+0x8e0>
1c00960c:	0305                	addi	t1,t1,1
1c00960e:	a8080be3          	beqz	a6,1c0090a4 <pos_libc_prf+0x894>
1c009612:	feb30fa3          	sb	a1,-1(t1)
1c009616:	0805                	addi	a6,a6,1
1c009618:	bfc5                	j	1c009608 <pos_libc_prf+0xdf8>
1c00961a:	01e880ab          	p.sb	t5,1(a7!)
1c00961e:	f91810e3          	bne	a6,a7,1c00959e <pos_libc_prf+0xd8e>
1c009622:	b7c9                	j	1c0095e4 <pos_libc_prf+0xdd4>
1c009624:	4e01                	li	t3,0
1c009626:	014807b3          	add	a5,a6,s4
1c00962a:	0e07c563          	bltz	a5,1c009714 <pos_libc_prf+0xf04>
1c00962e:	4641                	li	a2,16
1c009630:	04c7cf33          	p.min	t5,a5,a2
1c009634:	1f7d                	addi	t5,t5,-1
1c009636:	06600493          	li	s1,102
1c00963a:	860795e3          	bnez	a5,1c008ea4 <pos_libc_prf+0x694>
1c00963e:	4581                	li	a1,0
1c009640:	080006b7          	lui	a3,0x8000
1c009644:	b0e9                	j	1c008f0e <pos_libc_prf+0x6fe>
1c009646:	02d00793          	li	a5,45
1c00964a:	41000833          	neg	a6,a6
1c00964e:	00f600a3          	sb	a5,1(a2)
1c009652:	b419                	j	1c009058 <pos_libc_prf+0x848>
1c009654:	46e5                	li	a3,25
1c009656:	06f6ee63          	bltu	a3,a5,1c0096d2 <pos_libc_prf+0xec2>
1c00965a:	6791                	lui	a5,0x4
1c00965c:	14e78793          	addi	a5,a5,334 # 414e <__cluster_text_size+0x414e>
1c009660:	00f61023          	sh	a5,0(a2)
1c009664:	04e00793          	li	a5,78
1c009668:	00f60123          	sb	a5,2(a2)
1c00966c:	b57d                	j	1c00951a <pos_libc_prf+0xd0a>
1c00966e:	47e2                	lw	a5,24(sp)
1c009670:	cfc5                	beqz	a5,1c009728 <pos_libc_prf+0xf18>
1c009672:	02000693          	li	a3,32
1c009676:	02d10223          	sb	a3,36(sp)
1c00967a:	02510893          	addi	a7,sp,37
1c00967e:	4801                	li	a6,0
1c009680:	4501                	li	a0,0
1c009682:	4681                	li	a3,0
1c009684:	4301                	li	t1,0
1c009686:	fcaff06f          	j	1c008e50 <pos_libc_prf+0x640>
1c00968a:	c602                	sw	zero,12(sp)
1c00968c:	4732                	lw	a4,12(sp)
1c00968e:	b9d1                	j	1c009362 <pos_libc_prf+0xb52>
1c009690:	02d00613          	li	a2,45
1c009694:	02c10223          	sb	a2,36(sp)
1c009698:	02510613          	addi	a2,sp,37
1c00969c:	bda1                	j	1c0094f4 <pos_libc_prf+0xce4>
1c00969e:	02d00613          	li	a2,45
1c0096a2:	02c10223          	sb	a2,36(sp)
1c0096a6:	02510893          	addi	a7,sp,37
1c0096aa:	ec6ff06f          	j	1c008d70 <pos_libc_prf+0x560>
1c0096ae:	679d                	lui	a5,0x7
1c0096b0:	e6978793          	addi	a5,a5,-407 # 6e69 <__cluster_text_size+0x6e69>
1c0096b4:	00f61023          	sh	a5,0(a2)
1c0096b8:	06600793          	li	a5,102
1c0096bc:	00f60123          	sb	a5,2(a2)
1c0096c0:	bda9                	j	1c00951a <pos_libc_prf+0xd0a>
1c0096c2:	479d                	li	a5,7
1c0096c4:	f707d1e3          	ble	a6,a5,1c009626 <pos_libc_prf+0xe16>
1c0096c8:	4f19                	li	t5,6
1c0096ca:	06500493          	li	s1,101
1c0096ce:	fd6ff06f          	j	1c008ea4 <pos_libc_prf+0x694>
1c0096d2:	6799                	lui	a5,0x6
1c0096d4:	16e78793          	addi	a5,a5,366 # 616e <__cluster_text_size+0x616e>
1c0096d8:	00f61023          	sh	a5,0(a2)
1c0096dc:	06e00793          	li	a5,110
1c0096e0:	00f60123          	sb	a5,2(a2)
1c0096e4:	bd1d                	j	1c00951a <pos_libc_prf+0xd0a>
1c0096e6:	47e2                	lw	a5,24(sp)
1c0096e8:	88e6                	mv	a7,s9
1c0096ea:	e8078363          	beqz	a5,1c008d70 <pos_libc_prf+0x560>
1c0096ee:	02000613          	li	a2,32
1c0096f2:	02c10223          	sb	a2,36(sp)
1c0096f6:	02510893          	addi	a7,sp,37
1c0096fa:	e76ff06f          	j	1c008d70 <pos_libc_prf+0x560>
1c0096fe:	800006b7          	lui	a3,0x80000
1c009702:	02510793          	addi	a5,sp,37
1c009706:	bcfd                	j	1c009204 <pos_libc_prf+0x9f4>
1c009708:	03000593          	li	a1,48
1c00970c:	00b88023          	sb	a1,0(a7)
1c009710:	4ec1                	li	t4,16
1c009712:	bdd9                	j	1c0095e8 <pos_libc_prf+0xdd8>
1c009714:	06600493          	li	s1,102
1c009718:	b71d                	j	1c00963e <pos_libc_prf+0xe2e>
1c00971a:	4685                	li	a3,1
1c00971c:	bc4ff06f          	j	1c008ae0 <pos_libc_prf+0x2d0>
1c009720:	4605                	li	a2,1
1c009722:	bcb9                	j	1c009180 <pos_libc_prf+0x970>
1c009724:	4685                	li	a3,1
1c009726:	b95d                	j	1c0093dc <pos_libc_prf+0xbcc>
1c009728:	88e6                	mv	a7,s9
1c00972a:	bf91                	j	1c00967e <pos_libc_prf+0xe6e>

1c00972c <pos_init_start>:
1c00972c:	1141                	addi	sp,sp,-16
1c00972e:	c422                	sw	s0,8(sp)
1c009730:	1c000437          	lui	s0,0x1c000
1c009734:	c606                	sw	ra,12(sp)
1c009736:	00840413          	addi	s0,s0,8 # 1c000008 <ctor_list>
1c00973a:	c89fe0ef          	jal	ra,1c0083c2 <pos_soc_init>
1c00973e:	2279                	jal	1c0098cc <pos_irq_init>
1c009740:	2ac1                	jal	1c009910 <pos_soc_event_init>
1c009742:	20e5                	jal	1c00982a <pos_allocs_init>
1c009744:	405c                	lw	a5,4(s0)
1c009746:	c791                	beqz	a5,1c009752 <pos_init_start+0x26>
1c009748:	0421                	addi	s0,s0,8
1c00974a:	9782                	jalr	a5
1c00974c:	0044278b          	p.lw	a5,4(s0!)
1c009750:	ffed                	bnez	a5,1c00974a <pos_init_start+0x1e>
1c009752:	888ff0ef          	jal	ra,1c0087da <pos_io_start>
1c009756:	300467f3          	csrrsi	a5,mstatus,8
1c00975a:	f1402573          	csrr	a0,mhartid
1c00975e:	8515                	srai	a0,a0,0x5
1c009760:	f2653533          	p.bclr	a0,a0,25,6
1c009764:	47fd                	li	a5,31
1c009766:	00f50a63          	beq	a0,a5,1c00977a <pos_init_start+0x4e>
1c00976a:	4422                	lw	s0,8(sp)
1c00976c:	40b2                	lw	ra,12(sp)
1c00976e:	1c0085b7          	lui	a1,0x1c008
1c009772:	2d458593          	addi	a1,a1,724 # 1c0082d4 <main>
1c009776:	0141                	addi	sp,sp,16
1c009778:	a4b1                	j	1c0099c4 <cluster_start>
1c00977a:	40b2                	lw	ra,12(sp)
1c00977c:	4422                	lw	s0,8(sp)
1c00977e:	0141                	addi	sp,sp,16
1c009780:	8082                	ret

1c009782 <pos_init_stop>:
1c009782:	1141                	addi	sp,sp,-16
1c009784:	c422                	sw	s0,8(sp)
1c009786:	1c000437          	lui	s0,0x1c000
1c00978a:	c606                	sw	ra,12(sp)
1c00978c:	01440413          	addi	s0,s0,20 # 1c000014 <dtor_list>
1c009790:	84eff0ef          	jal	ra,1c0087de <pos_io_stop>
1c009794:	405c                	lw	a5,4(s0)
1c009796:	c791                	beqz	a5,1c0097a2 <pos_init_stop+0x20>
1c009798:	0421                	addi	s0,s0,8
1c00979a:	9782                	jalr	a5
1c00979c:	0044278b          	p.lw	a5,4(s0!)
1c0097a0:	ffed                	bnez	a5,1c00979a <pos_init_stop+0x18>
1c0097a2:	40b2                	lw	ra,12(sp)
1c0097a4:	4422                	lw	s0,8(sp)
1c0097a6:	0141                	addi	sp,sp,16
1c0097a8:	8082                	ret

1c0097aa <pos_alloc_init>:
1c0097aa:	00758793          	addi	a5,a1,7
1c0097ae:	c407b7b3          	p.bclr	a5,a5,2,0
1c0097b2:	40b785b3          	sub	a1,a5,a1
1c0097b6:	c11c                	sw	a5,0(a0)
1c0097b8:	8e0d                	sub	a2,a2,a1
1c0097ba:	00c05763          	blez	a2,1c0097c8 <pos_alloc_init+0x1e>
1c0097be:	c4063633          	p.bclr	a2,a2,2,0
1c0097c2:	c390                	sw	a2,0(a5)
1c0097c4:	0007a223          	sw	zero,4(a5)
1c0097c8:	8082                	ret

1c0097ca <pos_alloc>:
1c0097ca:	4110                	lw	a2,0(a0)
1c0097cc:	059d                	addi	a1,a1,7
1c0097ce:	c405b5b3          	p.bclr	a1,a1,2,0
1c0097d2:	ca31                	beqz	a2,1c009826 <pos_alloc+0x5c>
1c0097d4:	4218                	lw	a4,0(a2)
1c0097d6:	425c                	lw	a5,4(a2)
1c0097d8:	02b75963          	ble	a1,a4,1c00980a <pos_alloc+0x40>
1c0097dc:	cb81                	beqz	a5,1c0097ec <pos_alloc+0x22>
1c0097de:	4398                	lw	a4,0(a5)
1c0097e0:	43d4                	lw	a3,4(a5)
1c0097e2:	00b75763          	ble	a1,a4,1c0097f0 <pos_alloc+0x26>
1c0097e6:	863e                	mv	a2,a5
1c0097e8:	87b6                	mv	a5,a3
1c0097ea:	fbf5                	bnez	a5,1c0097de <pos_alloc+0x14>
1c0097ec:	853e                	mv	a0,a5
1c0097ee:	8082                	ret
1c0097f0:	00b70a63          	beq	a4,a1,1c009804 <pos_alloc+0x3a>
1c0097f4:	00b78533          	add	a0,a5,a1
1c0097f8:	8f0d                	sub	a4,a4,a1
1c0097fa:	c118                	sw	a4,0(a0)
1c0097fc:	c154                	sw	a3,4(a0)
1c0097fe:	c248                	sw	a0,4(a2)
1c009800:	853e                	mv	a0,a5
1c009802:	8082                	ret
1c009804:	c254                	sw	a3,4(a2)
1c009806:	853e                	mv	a0,a5
1c009808:	8082                	ret
1c00980a:	00e58b63          	beq	a1,a4,1c009820 <pos_alloc+0x56>
1c00980e:	00b606b3          	add	a3,a2,a1
1c009812:	8f0d                	sub	a4,a4,a1
1c009814:	c2dc                	sw	a5,4(a3)
1c009816:	c298                	sw	a4,0(a3)
1c009818:	87b2                	mv	a5,a2
1c00981a:	c114                	sw	a3,0(a0)
1c00981c:	853e                	mv	a0,a5
1c00981e:	8082                	ret
1c009820:	c11c                	sw	a5,0(a0)
1c009822:	87b2                	mv	a5,a2
1c009824:	b7e1                	j	1c0097ec <pos_alloc+0x22>
1c009826:	4781                	li	a5,0
1c009828:	b7d1                	j	1c0097ec <pos_alloc+0x22>

1c00982a <pos_allocs_init>:
1c00982a:	1141                	addi	sp,sp,-16
1c00982c:	1c0025b7          	lui	a1,0x1c002
1c009830:	c606                	sw	ra,12(sp)
1c009832:	f0c58793          	addi	a5,a1,-244 # 1c001f0c <__l2_priv0_end>
1c009836:	1c008637          	lui	a2,0x1c008
1c00983a:	04c7cc63          	blt	a5,a2,1c009892 <pos_allocs_init+0x68>
1c00983e:	4581                	li	a1,0
1c009840:	4601                	li	a2,0
1c009842:	1c002537          	lui	a0,0x1c002
1c009846:	efc50513          	addi	a0,a0,-260 # 1c001efc <pos_alloc_l2>
1c00984a:	3785                	jal	1c0097aa <pos_alloc_init>
1c00984c:	1c00a5b7          	lui	a1,0x1c00a
1c009850:	ab058793          	addi	a5,a1,-1360 # 1c009ab0 <__l2_priv1_end>
1c009854:	1c010637          	lui	a2,0x1c010
1c009858:	02c7c963          	blt	a5,a2,1c00988a <pos_allocs_init+0x60>
1c00985c:	4581                	li	a1,0
1c00985e:	4601                	li	a2,0
1c009860:	1c002537          	lui	a0,0x1c002
1c009864:	f0050513          	addi	a0,a0,-256 # 1c001f00 <pos_alloc_l2+0x4>
1c009868:	3789                	jal	1c0097aa <pos_alloc_init>
1c00986a:	100015b7          	lui	a1,0x10001
1c00986e:	40b2                	lw	ra,12(sp)
1c009870:	3b058793          	addi	a5,a1,944 # 100013b0 <__l2_shared_end>
1c009874:	1c080637          	lui	a2,0x1c080
1c009878:	1c002537          	lui	a0,0x1c002
1c00987c:	8e1d                	sub	a2,a2,a5
1c00987e:	3b058593          	addi	a1,a1,944
1c009882:	f0450513          	addi	a0,a0,-252 # 1c001f04 <pos_alloc_l2+0x8>
1c009886:	0141                	addi	sp,sp,16
1c009888:	b70d                	j	1c0097aa <pos_alloc_init>
1c00988a:	8e1d                	sub	a2,a2,a5
1c00988c:	ab058593          	addi	a1,a1,-1360
1c009890:	bfc1                	j	1c009860 <pos_allocs_init+0x36>
1c009892:	8e1d                	sub	a2,a2,a5
1c009894:	f0c58593          	addi	a1,a1,-244
1c009898:	b76d                	j	1c009842 <pos_allocs_init+0x18>

1c00989a <alloc_init_l1>:
1c00989a:	100017b7          	lui	a5,0x10001
1c00989e:	01651593          	slli	a1,a0,0x16
1c0098a2:	3b078793          	addi	a5,a5,944 # 100013b0 <__l2_shared_end>
1c0098a6:	95be                	add	a1,a1,a5
1c0098a8:	1c0027b7          	lui	a5,0x1c002
1c0098ac:	050a                	slli	a0,a0,0x2
1c0098ae:	663d                	lui	a2,0xf
1c0098b0:	ef878793          	addi	a5,a5,-264 # 1c001ef8 <pos_alloc_l1>
1c0098b4:	c5060613          	addi	a2,a2,-944 # ec50 <__l1_heap_size>
1c0098b8:	953e                	add	a0,a0,a5
1c0098ba:	bdc5                	j	1c0097aa <pos_alloc_init>

1c0098bc <pi_l1_malloc>:
1c0098bc:	1c0027b7          	lui	a5,0x1c002
1c0098c0:	050a                	slli	a0,a0,0x2
1c0098c2:	ef878793          	addi	a5,a5,-264 # 1c001ef8 <pos_alloc_l1>
1c0098c6:	953e                	add	a0,a0,a5
1c0098c8:	b709                	j	1c0097ca <pos_alloc>

1c0098ca <__rt_handle_illegal_instr>:
1c0098ca:	8082                	ret

1c0098cc <pos_irq_init>:
1c0098cc:	f14027f3          	csrr	a5,mhartid
1c0098d0:	477d                	li	a4,31
1c0098d2:	ca5797b3          	p.extractu	a5,a5,5,5
1c0098d6:	00e78f63          	beq	a5,a4,1c0098f4 <pos_irq_init+0x28>
1c0098da:	002047b7          	lui	a5,0x204
1c0098de:	577d                	li	a4,-1
1c0098e0:	cb98                	sw	a4,16(a5)
1c0098e2:	1c0087b7          	lui	a5,0x1c008
1c0098e6:	00078793          	mv	a5,a5
1c0098ea:	c007c7b3          	p.bset	a5,a5,0,0
1c0098ee:	30579073          	csrw	mtvec,a5
1c0098f2:	8082                	ret
1c0098f4:	1a10a7b7          	lui	a5,0x1a10a
1c0098f8:	577d                	li	a4,-1
1c0098fa:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa108458>
1c0098fe:	1c0087b7          	lui	a5,0x1c008
1c009902:	00078793          	mv	a5,a5
1c009906:	c007c7b3          	p.bset	a5,a5,0,0
1c00990a:	30579073          	csrw	mtvec,a5
1c00990e:	8082                	ret

1c009910 <pos_soc_event_init>:
1c009910:	1a1067b7          	lui	a5,0x1a106
1c009914:	577d                	li	a4,-1
1c009916:	00478693          	addi	a3,a5,4 # 1a106004 <__l2_shared_end+0xa104c54>
1c00991a:	c298                	sw	a4,0(a3)
1c00991c:	00878693          	addi	a3,a5,8
1c009920:	c298                	sw	a4,0(a3)
1c009922:	00c78693          	addi	a3,a5,12
1c009926:	c298                	sw	a4,0(a3)
1c009928:	01078693          	addi	a3,a5,16
1c00992c:	c298                	sw	a4,0(a3)
1c00992e:	01478693          	addi	a3,a5,20
1c009932:	c298                	sw	a4,0(a3)
1c009934:	01878693          	addi	a3,a5,24
1c009938:	c298                	sw	a4,0(a3)
1c00993a:	01c78693          	addi	a3,a5,28
1c00993e:	c298                	sw	a4,0(a3)
1c009940:	02078793          	addi	a5,a5,32
1c009944:	c398                	sw	a4,0(a5)
1c009946:	8082                	ret

1c009948 <bench_cluster_forward>:
1c009948:	f14027f3          	csrr	a5,mhartid
1c00994c:	ca5797b3          	p.extractu	a5,a5,5,5
1c009950:	02a78063          	beq	a5,a0,1c009970 <bench_cluster_forward+0x28>
1c009954:	1c0085b7          	lui	a1,0x1c008
1c009958:	1141                	addi	sp,sp,-16
1c00995a:	2d458593          	addi	a1,a1,724 # 1c0082d4 <main>
1c00995e:	c422                	sw	s0,8(sp)
1c009960:	c606                	sw	ra,12(sp)
1c009962:	842a                	mv	s0,a0
1c009964:	2085                	jal	1c0099c4 <cluster_start>
1c009966:	8522                	mv	a0,s0
1c009968:	4422                	lw	s0,8(sp)
1c00996a:	40b2                	lw	ra,12(sp)
1c00996c:	0141                	addi	sp,sp,16
1c00996e:	a235                	j	1c009a9a <cluster_wait>
1c009970:	4501                	li	a0,0
1c009972:	8082                	ret

1c009974 <cluster_entry_stub>:
1c009974:	1141                	addi	sp,sp,-16
1c009976:	c606                	sw	ra,12(sp)
1c009978:	002047b7          	lui	a5,0x204
1c00997c:	00070737          	lui	a4,0x70
1c009980:	c798                	sw	a4,8(a5)
1c009982:	0ff00713          	li	a4,255
1c009986:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f55b0>
1c00998a:	00e7a023          	sw	a4,0(a5)
1c00998e:	00e7a623          	sw	a4,12(a5)
1c009992:	1c0027b7          	lui	a5,0x1c002
1c009996:	f087a783          	lw	a5,-248(a5) # 1c001f08 <cluster_entry>
1c00999a:	9782                	jalr	a5
1c00999c:	f14027f3          	csrr	a5,mhartid
1c0099a0:	f457b7b3          	p.bclr	a5,a5,26,5
1c0099a4:	eb89                	bnez	a5,1c0099b6 <cluster_entry_stub+0x42>
1c0099a6:	1c002737          	lui	a4,0x1c002
1c0099aa:	1c0027b7          	lui	a5,0x1c002
1c0099ae:	eea72823          	sw	a0,-272(a4) # 1c001ef0 <_edata>
1c0099b2:	ee07aa23          	sw	zero,-268(a5) # 1c001ef4 <cluster_running>
1c0099b6:	002047b7          	lui	a5,0x204
1c0099ba:	577d                	li	a4,-1
1c0099bc:	c3d8                	sw	a4,4(a5)
1c0099be:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f53e8>
1c0099c2:	a001                	j	1c0099c2 <cluster_entry_stub+0x4e>

1c0099c4 <cluster_start>:
1c0099c4:	1141                	addi	sp,sp,-16
1c0099c6:	1c0027b7          	lui	a5,0x1c002
1c0099ca:	c226                	sw	s1,4(sp)
1c0099cc:	84aa                	mv	s1,a0
1c0099ce:	4509                	li	a0,2
1c0099d0:	f0b7a423          	sw	a1,-248(a5) # 1c001f08 <cluster_entry>
1c0099d4:	c606                	sw	ra,12(sp)
1c0099d6:	c422                	sw	s0,8(sp)
1c0099d8:	941fe0ef          	jal	ra,1c008318 <pos_fll_init>
1c0099dc:	8526                	mv	a0,s1
1c0099de:	3d75                	jal	1c00989a <alloc_init_l1>
1c0099e0:	04048413          	addi	s0,s1,64
1c0099e4:	00201737          	lui	a4,0x201
1c0099e8:	40070713          	addi	a4,a4,1024 # 201400 <__l1_heap_size+0x1f27b0>
1c0099ec:	045a                	slli	s0,s0,0x16
1c0099ee:	56fd                	li	a3,-1
1c0099f0:	f14027f3          	csrr	a5,mhartid
1c0099f4:	00d46723          	p.sw	a3,a4(s0)
1c0099f8:	ca5797b3          	p.extractu	a5,a5,5,5
1c0099fc:	477d                	li	a4,31
1c0099fe:	00e78f63          	beq	a5,a4,1c009a1c <cluster_start+0x58>
1c009a02:	002047b7          	lui	a5,0x204
1c009a06:	00070737          	lui	a4,0x70
1c009a0a:	c798                	sw	a4,8(a5)
1c009a0c:	0ff00713          	li	a4,255
1c009a10:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f55b0>
1c009a14:	00e7a023          	sw	a4,0(a5)
1c009a18:	00e7a623          	sw	a4,12(a5)
1c009a1c:	8526                	mv	a0,s1
1c009a1e:	3db5                	jal	1c00989a <alloc_init_l1>
1c009a20:	6591                	lui	a1,0x4
1c009a22:	8526                	mv	a0,s1
1c009a24:	3d61                	jal	1c0098bc <pi_l1_malloc>
1c009a26:	100017b7          	lui	a5,0x10001
1c009a2a:	3aa7a623          	sw	a0,940(a5) # 100013ac <cluster_stacks>
1c009a2e:	c12d                	beqz	a0,1c009a90 <cluster_start+0xcc>
1c009a30:	1c002737          	lui	a4,0x1c002
1c009a34:	4685                	li	a3,1
1c009a36:	eed72a23          	sw	a3,-268(a4) # 1c001ef4 <cluster_running>
1c009a3a:	002007b7          	lui	a5,0x200
1c009a3e:	1c008737          	lui	a4,0x1c008
1c009a42:	08070713          	addi	a4,a4,128 # 1c008080 <_start>
1c009a46:	04078693          	addi	a3,a5,64 # 200040 <__l1_heap_size+0x1f13f0>
1c009a4a:	00e466a3          	p.sw	a4,a3(s0)
1c009a4e:	04478693          	addi	a3,a5,68
1c009a52:	00e466a3          	p.sw	a4,a3(s0)
1c009a56:	04878693          	addi	a3,a5,72
1c009a5a:	00e466a3          	p.sw	a4,a3(s0)
1c009a5e:	04c78693          	addi	a3,a5,76
1c009a62:	00e466a3          	p.sw	a4,a3(s0)
1c009a66:	05078693          	addi	a3,a5,80
1c009a6a:	00e466a3          	p.sw	a4,a3(s0)
1c009a6e:	05478693          	addi	a3,a5,84
1c009a72:	00e466a3          	p.sw	a4,a3(s0)
1c009a76:	05878693          	addi	a3,a5,88
1c009a7a:	00e466a3          	p.sw	a4,a3(s0)
1c009a7e:	05c78693          	addi	a3,a5,92
1c009a82:	00e466a3          	p.sw	a4,a3(s0)
1c009a86:	07a1                	addi	a5,a5,8
1c009a88:	0ff00713          	li	a4,255
1c009a8c:	00e467a3          	p.sw	a4,a5(s0)
1c009a90:	40b2                	lw	ra,12(sp)
1c009a92:	4422                	lw	s0,8(sp)
1c009a94:	4492                	lw	s1,4(sp)
1c009a96:	0141                	addi	sp,sp,16
1c009a98:	8082                	ret

1c009a9a <cluster_wait>:
1c009a9a:	1c002737          	lui	a4,0x1c002
1c009a9e:	ef470713          	addi	a4,a4,-268 # 1c001ef4 <cluster_running>
1c009aa2:	431c                	lw	a5,0(a4)
1c009aa4:	fffd                	bnez	a5,1c009aa2 <cluster_wait+0x8>
1c009aa6:	1c0027b7          	lui	a5,0x1c002
1c009aaa:	ef07a503          	lw	a0,-272(a5) # 1c001ef0 <_edata>
1c009aae:	8082                	ret
make[1]: Leaving directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/neureka_ki8_ko32_ho6_wo6_fs1'
