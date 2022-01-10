make[1]: Entering directory `/scratch/prasadar/siracusa-fe/regression_tests/power_tests/N_EUREKA/ki32_ko32_ho6_wo6'
/usr/pack/pulpsdk-1.0-kgf/artifactory/pulp-sdk-release/pkg/pulp_riscv_gcc/1.0.16//bin/riscv32-unknown-elf-objdump -Mmarch=rv32imcxgap9 -d /scratch/prasadar/siracusa-fe/regression_tests/power_tests/N_EUREKA/ki32_ko32_ho6_wo6/build/ne16_test/ne16_test

/scratch/prasadar/siracusa-fe/regression_tests/power_tests/N_EUREKA/ki32_ko32_ho6_wo6/build/ne16_test/ne16_test:     file format elf32-littleriscv


Disassembly of section .vectors:

1c008000 <__irq_vector_base>:
1c008000:	0cf0106f          	j	1c0098ce <__rt_handle_illegal_instr>
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
1c008084:	04b0106f          	j	1c0098ce <__rt_handle_illegal_instr>

1c008088 <pos_no_irq_handler>:
1c008088:	30200073          	mret

1c00808c <pos_semihosting_call>:
1c00808c:	00100073          	ebreak
1c008090:	00008067          	ret

1c008094 <pe_start>:
1c008094:	f3ffa117          	auipc	sp,0xf3ffa
1c008098:	9f810113          	addi	sp,sp,-1544 # 10001a8c <cluster_stacks>
1c00809c:	00012103          	lw	sp,0(sp)
1c0080a0:	000011b7          	lui	gp,0x1
1c0080a4:	80018193          	addi	gp,gp,-2048 # 800 <__cluster_text_size+0x800>
1c0080a8:	00158593          	addi	a1,a1,1
1c0080ac:	02b180b3          	mul	ra,gp,a1
1c0080b0:	00110133          	add	sp,sp,ra
1c0080b4:	0c50106f          	j	1c009978 <cluster_entry_stub>

1c0080b8 <do_cl_boot>:
1c0080b8:	10200137          	lui	sp,0x10200
1c0080bc:	00100193          	li	gp,1
1c0080c0:	00000217          	auipc	tp,0x0
1c0080c4:	fc020213          	addi	tp,tp,-64 # 1c008080 <_start>
1c0080c8:	04412023          	sw	tp,64(sp) # 10200040 <__l2_shared_end+0x1fe5b0>
1c0080cc:	00312423          	sw	gp,8(sp)

1c0080d0 <loop>:
1c0080d0:	1a10a137          	lui	sp,0x1a10a
1c0080d4:	80010113          	addi	sp,sp,-2048 # 1a109800 <__l2_shared_end+0xa107d70>
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
1c0080f8:	ffffe297          	auipc	t0,0xffffe
1c0080fc:	9f828293          	addi	t0,t0,-1544 # 1c005af0 <_edata>
1c008100:	ffffe317          	auipc	t1,0xffffe
1c008104:	a0c30313          	addi	t1,t1,-1524 # 1c005b0c <__l2_priv0_end>
1c008108:	0002a023          	sw	zero,0(t0)
1c00810c:	0291                	addi	t0,t0,4
1c00810e:	fe62ede3          	bltu	t0,t1,1c008108 <_stext+0x24>
1c008112:	ffff8117          	auipc	sp,0xffff8
1c008116:	77e10113          	addi	sp,sp,1918 # 1c000890 <stack>
1c00811a:	616010ef          	jal	ra,1c009730 <pos_init_start>
1c00811e:	00000513          	li	a0,0
1c008122:	00000593          	li	a1,0
1c008126:	00000397          	auipc	t2,0x0
1c00812a:	1b238393          	addi	t2,t2,434 # 1c0082d8 <main>
1c00812e:	000380e7          	jalr	t2
1c008132:	842a                	mv	s0,a0
1c008134:	652010ef          	jal	ra,1c009786 <pos_init_stop>
1c008138:	8522                	mv	a0,s0
1c00813a:	692000ef          	jal	ra,1c0087cc <exit>

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
1c00817a:	0007aa23          	sw	zero,20(a5) # 10201014 <__l2_shared_end+0x1ff584>
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
1c0081aa:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1f5acc>
1c0081ae:	c3d8                	sw	a4,4(a5)
1c0081b0:	4214                	lw	a3,0(a2)
1c0081b2:	fe06cbe3          	bltz	a3,1c0081a8 <run_test+0x6a>
1c0081b6:	102015b7          	lui	a1,0x10201
1c0081ba:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x1ff590>
1c0081be:	004007b7          	lui	a5,0x400
1c0081c2:	00f5a023          	sw	a5,0(a1)
1c0081c6:	100017b7          	lui	a5,0x10001
1c0081ca:	28c78793          	addi	a5,a5,652 # 1000128c <ne16_infeat>
1c0081ce:	00f5a223          	sw	a5,4(a1)
1c0081d2:	10000437          	lui	s0,0x10000
1c0081d6:	08c40813          	addi	a6,s0,140 # 1000008c <ne16_streamin>
1c0081da:	0105a423          	sw	a6,8(a1)
1c0081de:	100007b7          	lui	a5,0x10000
1c0081e2:	00478793          	addi	a5,a5,4 # 10000004 <ne16_scale>
1c0081e6:	00f5a623          	sw	a5,12(a1)
1c0081ea:	08078713          	addi	a4,a5,128
1c0081ee:	00e5a823          	sw	a4,16(a1)
1c0081f2:	08478793          	addi	a5,a5,132
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
1c008226:	10201637          	lui	a2,0x10201
1c00822a:	c31c                	sw	a5,0(a4)
1c00822c:	00062023          	sw	zero,0(a2) # 10201000 <__l2_shared_end+0x1ff570>
1c008230:	6705                	lui	a4,0x1
1c008232:	002047b7          	lui	a5,0x204
1c008236:	0631                	addi	a2,a2,12
1c008238:	c798                	sw	a4,8(a5)
1c00823a:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1f5acc>
1c00823e:	c3d8                	sw	a4,4(a5)
1c008240:	4214                	lw	a3,0(a2)
1c008242:	fafd                	bnez	a3,1c008238 <run_test+0xfa>
1c008244:	102007b7          	lui	a5,0x10200
1c008248:	07e1                	addi	a5,a5,24
1c00824a:	4394                	lw	a3,0(a5)
1c00824c:	20070713          	addi	a4,a4,512 # 1200 <__cluster_text_size+0x1200>
1c008250:	1c0019b7          	lui	s3,0x1c001
1c008254:	c0b6b6b3          	p.bclr	a3,a3,0,11
1c008258:	c394                	sw	a3,0(a5)
1c00825a:	deadd7b7          	lui	a5,0xdeadd
1c00825e:	100006b7          	lui	a3,0x10000
1c008262:	aca78793          	addi	a5,a5,-1334 # deadcaca <pulp__FC+0xdeadcacb>
1c008266:	5a71                	li	s4,-4
1c008268:	c29c                	sw	a5,0(a3)
1c00826a:	8f098993          	addi	s3,s3,-1808 # 1c0008f0 <ne16_outfeat>
1c00826e:	00e804b3          	add	s1,a6,a4
1c008272:	08c40413          	addi	s0,s0,140
1c008276:	4901                	li	s2,0
1c008278:	410a0a33          	sub	s4,s4,a6
1c00827c:	1c000ab7          	lui	s5,0x1c000
1c008280:	1c000b37          	lui	s6,0x1c000
1c008284:	0049a58b          	p.lw	a1,4(s3!)
1c008288:	86a2                	mv	a3,s0
1c00828a:	0044260b          	p.lw	a2,4(s0!)
1c00828e:	40b607b3          	sub	a5,a2,a1
1c008292:	00f037b3          	snez	a5,a5
1c008296:	993e                	add	s2,s2,a5
1c008298:	00b60963          	beq	a2,a1,1c0082aa <run_test+0x16c>
1c00829c:	02192463          	p.beqimm	s2,1,1c0082c4 <run_test+0x186>
1c0082a0:	008a0733          	add	a4,s4,s0
1c0082a4:	04ca8513          	addi	a0,s5,76 # 1c00004c <__DTOR_END__+0x30>
1c0082a8:	2b3d                	jal	1c0087e6 <printf>
1c0082aa:	fc849de3          	bne	s1,s0,1c008284 <run_test+0x146>
1c0082ae:	50f2                	lw	ra,60(sp)
1c0082b0:	5462                	lw	s0,56(sp)
1c0082b2:	854a                	mv	a0,s2
1c0082b4:	54d2                	lw	s1,52(sp)
1c0082b6:	5942                	lw	s2,48(sp)
1c0082b8:	59b2                	lw	s3,44(sp)
1c0082ba:	5a22                	lw	s4,40(sp)
1c0082bc:	5a92                	lw	s5,36(sp)
1c0082be:	5b02                	lw	s6,32(sp)
1c0082c0:	6121                	addi	sp,sp,64
1c0082c2:	8082                	ret
1c0082c4:	01cb0513          	addi	a0,s6,28 # 1c00001c <__DTOR_END__>
1c0082c8:	c22e                	sw	a1,4(sp)
1c0082ca:	c432                	sw	a2,8(sp)
1c0082cc:	c636                	sw	a3,12(sp)
1c0082ce:	21f1                	jal	1c00879a <puts>
1c0082d0:	46b2                	lw	a3,12(sp)
1c0082d2:	4622                	lw	a2,8(sp)
1c0082d4:	4592                	lw	a1,4(sp)
1c0082d6:	b7e9                	j	1c0082a0 <run_test+0x162>

1c0082d8 <main>:
1c0082d8:	f14027f3          	csrr	a5,mhartid
1c0082dc:	ca579733          	p.extractu	a4,a5,5,5
1c0082e0:	e711                	bnez	a4,1c0082ec <main+0x14>
1c0082e2:	f457b7b3          	p.bclr	a5,a5,26,5
1c0082e6:	cb95                	beqz	a5,1c00831a <main+0x42>
1c0082e8:	4501                	li	a0,0
1c0082ea:	8082                	ret
1c0082ec:	1c0027b7          	lui	a5,0x1c002
1c0082f0:	af078793          	addi	a5,a5,-1296 # 1c001af0 <ne16_weights>
1c0082f4:	10800737          	lui	a4,0x10800
1c0082f8:	4006d0fb          	lp.setupi	x1,1024,1c008312 <main+0x3a>
1c0082fc:	0007a803          	lw	a6,0(a5)
1c008300:	43c8                	lw	a0,4(a5)
1c008302:	478c                	lw	a1,8(a5)
1c008304:	47d0                	lw	a2,12(a5)
1c008306:	01072023          	sw	a6,0(a4) # 10800000 <__l2_shared_end+0x7fe570>
1c00830a:	c348                	sw	a0,4(a4)
1c00830c:	c70c                	sw	a1,8(a4)
1c00830e:	c750                	sw	a2,12(a4)
1c008310:	07c1                	addi	a5,a5,16
1c008312:	0741                	addi	a4,a4,16
1c008314:	4501                	li	a0,0
1c008316:	6360106f          	j	1c00994c <bench_cluster_forward>
1c00831a:	b515                	j	1c00813e <run_test>

1c00831c <pos_fll_init>:
1c00831c:	08152063          	p.beqimm	a0,1,1c00839c <pos_fll_init+0x80>
1c008320:	04252a63          	p.beqimm	a0,2,1c008374 <pos_fll_init+0x58>
1c008324:	c505                	beqz	a0,1c00834c <pos_fll_init+0x30>
1c008326:	4701                	li	a4,0
1c008328:	00470793          	addi	a5,a4,4
1c00832c:	05300613          	li	a2,83
1c008330:	00c70693          	addi	a3,a4,12
1c008334:	c390                	sw	a2,0(a5)
1c008336:	020c17b7          	lui	a5,0x20c1
1c00833a:	0721                	addi	a4,a4,8
1c00833c:	0006a023          	sw	zero,0(a3) # 10000000 <__l1_heap_size+0xfff1a90>
1c008340:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b326a>
1c008344:	c31c                	sw	a5,0(a4)
1c008346:	05f68537          	lui	a0,0x5f68
1c00834a:	8082                	ret
1c00834c:	1a1007b7          	lui	a5,0x1a100
1c008350:	00878713          	addi	a4,a5,8 # 1a100008 <__l2_shared_end+0xa0fe578>
1c008354:	00c78693          	addi	a3,a5,12
1c008358:	05300613          	li	a2,83
1c00835c:	0791                	addi	a5,a5,4
1c00835e:	c390                	sw	a2,0(a5)
1c008360:	020c17b7          	lui	a5,0x20c1
1c008364:	0006a023          	sw	zero,0(a3)
1c008368:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b326a>
1c00836c:	c31c                	sw	a5,0(a4)
1c00836e:	05f68537          	lui	a0,0x5f68
1c008372:	8082                	ret
1c008374:	1a1007b7          	lui	a5,0x1a100
1c008378:	01878713          	addi	a4,a5,24 # 1a100018 <__l2_shared_end+0xa0fe588>
1c00837c:	01c78693          	addi	a3,a5,28
1c008380:	05300613          	li	a2,83
1c008384:	07d1                	addi	a5,a5,20
1c008386:	c390                	sw	a2,0(a5)
1c008388:	020c17b7          	lui	a5,0x20c1
1c00838c:	0006a023          	sw	zero,0(a3)
1c008390:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b326a>
1c008394:	c31c                	sw	a5,0(a4)
1c008396:	05f68537          	lui	a0,0x5f68
1c00839a:	8082                	ret
1c00839c:	1a1007b7          	lui	a5,0x1a100
1c0083a0:	02878713          	addi	a4,a5,40 # 1a100028 <__l2_shared_end+0xa0fe598>
1c0083a4:	02c78693          	addi	a3,a5,44
1c0083a8:	05300613          	li	a2,83
1c0083ac:	02478793          	addi	a5,a5,36
1c0083b0:	c390                	sw	a2,0(a5)
1c0083b2:	020c17b7          	lui	a5,0x20c1
1c0083b6:	0006a023          	sw	zero,0(a3)
1c0083ba:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b326a>
1c0083be:	c31c                	sw	a5,0(a4)
1c0083c0:	05f68537          	lui	a0,0x5f68
1c0083c4:	8082                	ret

1c0083c6 <pos_soc_init>:
1c0083c6:	8082                	ret

1c0083c8 <pos_wait_forever>:
1c0083c8:	f14027f3          	csrr	a5,mhartid
1c0083cc:	477d                	li	a4,31
1c0083ce:	ca5797b3          	p.extractu	a5,a5,5,5
1c0083d2:	00e78963          	beq	a5,a4,1c0083e4 <pos_wait_forever+0x1c>
1c0083d6:	002047b7          	lui	a5,0x204
1c0083da:	577d                	li	a4,-1
1c0083dc:	c3d8                	sw	a4,4(a5)
1c0083de:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f5ac8>
1c0083e2:	a001                	j	1c0083e2 <pos_wait_forever+0x1a>
1c0083e4:	1a10a7b7          	lui	a5,0x1a10a
1c0083e8:	577d                	li	a4,-1
1c0083ea:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa107d78>
1c0083ee:	10500073          	wfi
1c0083f2:	10500073          	wfi
1c0083f6:	bfe5                	j	1c0083ee <pos_wait_forever+0x26>

1c0083f8 <memcpy>:
1c0083f8:	00a5e7b3          	or	a5,a1,a0
1c0083fc:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008400:	882a                	mv	a6,a0
1c008402:	10078163          	beqz	a5,1c008504 <memcpy+0x10c>
1c008406:	12060263          	beqz	a2,1c00852a <memcpy+0x132>
1c00840a:	00458793          	addi	a5,a1,4
1c00840e:	00450693          	addi	a3,a0,4 # 5f68004 <__l1_heap_size+0x5f59a94>
1c008412:	04a7b7b3          	p.sletu	a5,a5,a0
1c008416:	04b6b6b3          	p.sletu	a3,a3,a1
1c00841a:	873e                	mv	a4,a5
1c00841c:	87b6                	mv	a5,a3
1c00841e:	8fd9                	or	a5,a5,a4
1c008420:	0ff7f793          	andi	a5,a5,255
1c008424:	cbe9                	beqz	a5,1c0084f6 <memcpy+0xfe>
1c008426:	00863793          	sltiu	a5,a2,8
1c00842a:	0017c793          	xori	a5,a5,1
1c00842e:	0ff7f793          	andi	a5,a5,255
1c008432:	c3f1                	beqz	a5,1c0084f6 <memcpy+0xfe>
1c008434:	40b007b3          	neg	a5,a1
1c008438:	fa27b7b3          	p.bclr	a5,a5,29,2
1c00843c:	fff60313          	addi	t1,a2,-1
1c008440:	c3ed                	beqz	a5,1c008522 <memcpy+0x12a>
1c008442:	0005c703          	lbu	a4,0(a1)
1c008446:	00158893          	addi	a7,a1,1
1c00844a:	00150813          	addi	a6,a0,1
1c00844e:	00e50023          	sb	a4,0(a0)
1c008452:	0217a863          	p.beqimm	a5,1,1c008482 <memcpy+0x8a>
1c008456:	0015c703          	lbu	a4,1(a1)
1c00845a:	00258893          	addi	a7,a1,2
1c00845e:	00250813          	addi	a6,a0,2
1c008462:	00e500a3          	sb	a4,1(a0)
1c008466:	ffe60313          	addi	t1,a2,-2
1c00846a:	0037bc63          	p.bneimm	a5,3,1c008482 <memcpy+0x8a>
1c00846e:	0025c703          	lbu	a4,2(a1)
1c008472:	00358893          	addi	a7,a1,3
1c008476:	00350813          	addi	a6,a0,3
1c00847a:	00e50123          	sb	a4,2(a0)
1c00847e:	ffd60313          	addi	t1,a2,-3
1c008482:	8e1d                	sub	a2,a2,a5
1c008484:	00265713          	srli	a4,a2,0x2
1c008488:	00f506b3          	add	a3,a0,a5
1c00848c:	95be                	add	a1,a1,a5
1c00848e:	cf59                	beqz	a4,1c00852c <memcpy+0x134>
1c008490:	004740fb          	lp.setup	x1,a4,1c008498 <memcpy+0xa0>
1c008494:	0045a78b          	p.lw	a5,4(a1!)
1c008498:	00f6a22b          	p.sw	a5,4(a3!)
1c00849c:	c20635b3          	p.bclr	a1,a2,1,0
1c0084a0:	40b306b3          	sub	a3,t1,a1
1c0084a4:	00b807b3          	add	a5,a6,a1
1c0084a8:	00b88733          	add	a4,a7,a1
1c0084ac:	04b60b63          	beq	a2,a1,1c008502 <memcpy+0x10a>
1c0084b0:	00074603          	lbu	a2,0(a4)
1c0084b4:	00c78023          	sb	a2,0(a5)
1c0084b8:	0416a563          	p.beqimm	a3,1,1c008502 <memcpy+0x10a>
1c0084bc:	00174603          	lbu	a2,1(a4)
1c0084c0:	00c780a3          	sb	a2,1(a5)
1c0084c4:	0226af63          	p.beqimm	a3,2,1c008502 <memcpy+0x10a>
1c0084c8:	00274603          	lbu	a2,2(a4)
1c0084cc:	00c78123          	sb	a2,2(a5)
1c0084d0:	0236a963          	p.beqimm	a3,3,1c008502 <memcpy+0x10a>
1c0084d4:	00374603          	lbu	a2,3(a4)
1c0084d8:	00c781a3          	sb	a2,3(a5)
1c0084dc:	0246a363          	p.beqimm	a3,4,1c008502 <memcpy+0x10a>
1c0084e0:	00474603          	lbu	a2,4(a4)
1c0084e4:	00c78223          	sb	a2,4(a5)
1c0084e8:	0056ad63          	p.beqimm	a3,5,1c008502 <memcpy+0x10a>
1c0084ec:	00574703          	lbu	a4,5(a4)
1c0084f0:	00e782a3          	sb	a4,5(a5)
1c0084f4:	8082                	ret
1c0084f6:	004640fb          	lp.setup	x1,a2,1c0084fe <memcpy+0x106>
1c0084fa:	0015c78b          	p.lbu	a5,1(a1!)
1c0084fe:	00f800ab          	p.sb	a5,1(a6!)
1c008502:	8082                	ret
1c008504:	fa2637b3          	p.bclr	a5,a2,29,2
1c008508:	f389                	bnez	a5,1c00840a <memcpy+0x12>
1c00850a:	de65                	beqz	a2,1c008502 <memcpy+0x10a>
1c00850c:	ffc60793          	addi	a5,a2,-4
1c008510:	8389                	srli	a5,a5,0x2
1c008512:	0785                	addi	a5,a5,1
1c008514:	0047c0fb          	lp.setup	x1,a5,1c00851c <memcpy+0x124>
1c008518:	0045a70b          	p.lw	a4,4(a1!)
1c00851c:	00e8222b          	p.sw	a4,4(a6!)
1c008520:	8082                	ret
1c008522:	88ae                	mv	a7,a1
1c008524:	882a                	mv	a6,a0
1c008526:	8332                	mv	t1,a2
1c008528:	bfa9                	j	1c008482 <memcpy+0x8a>
1c00852a:	8082                	ret
1c00852c:	4705                	li	a4,1
1c00852e:	b78d                	j	1c008490 <memcpy+0x98>

1c008530 <memmove>:
1c008530:	40b507b3          	sub	a5,a0,a1
1c008534:	0ec7ec63          	bltu	a5,a2,1c00862c <memmove+0xfc>
1c008538:	20060463          	beqz	a2,1c008740 <memmove+0x210>
1c00853c:	00450793          	addi	a5,a0,4
1c008540:	00458693          	addi	a3,a1,4
1c008544:	04b7b7b3          	p.sletu	a5,a5,a1
1c008548:	04a6b6b3          	p.sletu	a3,a3,a0
1c00854c:	873e                	mv	a4,a5
1c00854e:	87b6                	mv	a5,a3
1c008550:	8fd9                	or	a5,a5,a4
1c008552:	0ff7f793          	andi	a5,a5,255
1c008556:	1c078d63          	beqz	a5,1c008730 <memmove+0x200>
1c00855a:	00863793          	sltiu	a5,a2,8
1c00855e:	0017c793          	xori	a5,a5,1
1c008562:	0ff7f793          	andi	a5,a5,255
1c008566:	1c078563          	beqz	a5,1c008730 <memmove+0x200>
1c00856a:	40b007b3          	neg	a5,a1
1c00856e:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008572:	fff60313          	addi	t1,a2,-1
1c008576:	88ae                	mv	a7,a1
1c008578:	1e078363          	beqz	a5,1c00875e <memmove+0x22e>
1c00857c:	0018c70b          	p.lbu	a4,1(a7!)
1c008580:	882a                	mv	a6,a0
1c008582:	00e800ab          	p.sb	a4,1(a6!)
1c008586:	0217a863          	p.beqimm	a5,1,1c0085b6 <memmove+0x86>
1c00858a:	0015c703          	lbu	a4,1(a1)
1c00858e:	00250813          	addi	a6,a0,2
1c008592:	00258893          	addi	a7,a1,2
1c008596:	00e500a3          	sb	a4,1(a0)
1c00859a:	ffe60313          	addi	t1,a2,-2
1c00859e:	0037bc63          	p.bneimm	a5,3,1c0085b6 <memmove+0x86>
1c0085a2:	0025c703          	lbu	a4,2(a1)
1c0085a6:	00350813          	addi	a6,a0,3
1c0085aa:	00358893          	addi	a7,a1,3
1c0085ae:	00e50123          	sb	a4,2(a0)
1c0085b2:	ffd60313          	addi	t1,a2,-3
1c0085b6:	8e1d                	sub	a2,a2,a5
1c0085b8:	00265713          	srli	a4,a2,0x2
1c0085bc:	00f506b3          	add	a3,a0,a5
1c0085c0:	95be                	add	a1,a1,a5
1c0085c2:	1a070363          	beqz	a4,1c008768 <memmove+0x238>
1c0085c6:	004740fb          	lp.setup	x1,a4,1c0085ce <memmove+0x9e>
1c0085ca:	0045a78b          	p.lw	a5,4(a1!)
1c0085ce:	00f6a22b          	p.sw	a5,4(a3!)
1c0085d2:	c20635b3          	p.bclr	a1,a2,1,0
1c0085d6:	40b306b3          	sub	a3,t1,a1
1c0085da:	00b807b3          	add	a5,a6,a1
1c0085de:	00b88733          	add	a4,a7,a1
1c0085e2:	14b60e63          	beq	a2,a1,1c00873e <memmove+0x20e>
1c0085e6:	00074603          	lbu	a2,0(a4)
1c0085ea:	00c78023          	sb	a2,0(a5)
1c0085ee:	1416a863          	p.beqimm	a3,1,1c00873e <memmove+0x20e>
1c0085f2:	00174603          	lbu	a2,1(a4)
1c0085f6:	00c780a3          	sb	a2,1(a5)
1c0085fa:	1426a263          	p.beqimm	a3,2,1c00873e <memmove+0x20e>
1c0085fe:	00274603          	lbu	a2,2(a4)
1c008602:	00c78123          	sb	a2,2(a5)
1c008606:	1236ac63          	p.beqimm	a3,3,1c00873e <memmove+0x20e>
1c00860a:	00374603          	lbu	a2,3(a4)
1c00860e:	00c781a3          	sb	a2,3(a5)
1c008612:	1246a663          	p.beqimm	a3,4,1c00873e <memmove+0x20e>
1c008616:	00474603          	lbu	a2,4(a4)
1c00861a:	00c78223          	sb	a2,4(a5)
1c00861e:	1256a063          	p.beqimm	a3,5,1c00873e <memmove+0x20e>
1c008622:	00574703          	lbu	a4,5(a4)
1c008626:	00e782a3          	sb	a4,5(a5)
1c00862a:	8082                	ret
1c00862c:	ffc60793          	addi	a5,a2,-4
1c008630:	00f50833          	add	a6,a0,a5
1c008634:	00f58333          	add	t1,a1,a5
1c008638:	00c58733          	add	a4,a1,a2
1c00863c:	00c508b3          	add	a7,a0,a2
1c008640:	05073733          	p.sletu	a4,a4,a6
1c008644:	0468b833          	p.sletu	a6,a7,t1
1c008648:	86ba                	mv	a3,a4
1c00864a:	8742                	mv	a4,a6
1c00864c:	8f55                	or	a4,a4,a3
1c00864e:	0ff77713          	andi	a4,a4,255
1c008652:	cb65                	beqz	a4,1c008742 <memmove+0x212>
1c008654:	00863713          	sltiu	a4,a2,8
1c008658:	00174713          	xori	a4,a4,1
1c00865c:	0ff77713          	andi	a4,a4,255
1c008660:	c36d                	beqz	a4,1c008742 <memmove+0x212>
1c008662:	fa233733          	p.bclr	a4,t1,29,2
1c008666:	fff60893          	addi	a7,a2,-1
1c00866a:	cb65                	beqz	a4,1c00875a <memmove+0x22a>
1c00866c:	011586b3          	add	a3,a1,a7
1c008670:	0006c683          	lbu	a3,0(a3)
1c008674:	00d548a3          	p.sb	a3,a7(a0)
1c008678:	02172463          	p.beqimm	a4,1,1c0086a0 <memmove+0x170>
1c00867c:	ffe60893          	addi	a7,a2,-2
1c008680:	011586b3          	add	a3,a1,a7
1c008684:	0006c683          	lbu	a3,0(a3)
1c008688:	00d548a3          	p.sb	a3,a7(a0)
1c00868c:	00373a63          	p.bneimm	a4,3,1c0086a0 <memmove+0x170>
1c008690:	ffd60893          	addi	a7,a2,-3
1c008694:	011586b3          	add	a3,a1,a7
1c008698:	0006c683          	lbu	a3,0(a3)
1c00869c:	00d548a3          	p.sb	a3,a7(a0)
1c0086a0:	8e19                	sub	a2,a2,a4
1c0086a2:	8f99                	sub	a5,a5,a4
1c0086a4:	00265713          	srli	a4,a2,0x2
1c0086a8:	00f506b3          	add	a3,a0,a5
1c0086ac:	97ae                	add	a5,a5,a1
1c0086ae:	cb5d                	beqz	a4,1c008764 <memmove+0x234>
1c0086b0:	004740fb          	lp.setup	x1,a4,1c0086b8 <memmove+0x188>
1c0086b4:	ffc7a80b          	p.lw	a6,-4(a5!)
1c0086b8:	ff06ae2b          	p.sw	a6,-4(a3!)
1c0086bc:	c20637b3          	p.bclr	a5,a2,1,0
1c0086c0:	40f888b3          	sub	a7,a7,a5
1c0086c4:	06f60d63          	beq	a2,a5,1c00873e <memmove+0x20e>
1c0086c8:	fff88793          	addi	a5,a7,-1
1c0086cc:	00f58733          	add	a4,a1,a5
1c0086d0:	00074703          	lbu	a4,0(a4)
1c0086d4:	00e547a3          	p.sb	a4,a5(a0)
1c0086d8:	c3bd                	beqz	a5,1c00873e <memmove+0x20e>
1c0086da:	ffe88793          	addi	a5,a7,-2
1c0086de:	00f58733          	add	a4,a1,a5
1c0086e2:	00074703          	lbu	a4,0(a4)
1c0086e6:	00e547a3          	p.sb	a4,a5(a0)
1c0086ea:	cbb1                	beqz	a5,1c00873e <memmove+0x20e>
1c0086ec:	ffd88793          	addi	a5,a7,-3
1c0086f0:	00f58733          	add	a4,a1,a5
1c0086f4:	00074703          	lbu	a4,0(a4)
1c0086f8:	00e547a3          	p.sb	a4,a5(a0)
1c0086fc:	c3a9                	beqz	a5,1c00873e <memmove+0x20e>
1c0086fe:	ffc88793          	addi	a5,a7,-4
1c008702:	00f58733          	add	a4,a1,a5
1c008706:	00074703          	lbu	a4,0(a4)
1c00870a:	00e547a3          	p.sb	a4,a5(a0)
1c00870e:	cb85                	beqz	a5,1c00873e <memmove+0x20e>
1c008710:	ffb88793          	addi	a5,a7,-5
1c008714:	00f58733          	add	a4,a1,a5
1c008718:	00074703          	lbu	a4,0(a4)
1c00871c:	00e547a3          	p.sb	a4,a5(a0)
1c008720:	cf99                	beqz	a5,1c00873e <memmove+0x20e>
1c008722:	18e9                	addi	a7,a7,-6
1c008724:	95c6                	add	a1,a1,a7
1c008726:	0005c783          	lbu	a5,0(a1)
1c00872a:	00f548a3          	p.sb	a5,a7(a0)
1c00872e:	8082                	ret
1c008730:	87aa                	mv	a5,a0
1c008732:	004640fb          	lp.setup	x1,a2,1c00873a <memmove+0x20a>
1c008736:	0015c70b          	p.lbu	a4,1(a1!)
1c00873a:	00e780ab          	p.sb	a4,1(a5!)
1c00873e:	8082                	ret
1c008740:	8082                	ret
1c008742:	167d                	addi	a2,a2,-1
1c008744:	00c507b3          	add	a5,a0,a2
1c008748:	95b2                	add	a1,a1,a2
1c00874a:	0605                	addi	a2,a2,1
1c00874c:	004640fb          	lp.setup	x1,a2,1c008754 <memmove+0x224>
1c008750:	fff5c70b          	p.lbu	a4,-1(a1!)
1c008754:	fee78fab          	p.sb	a4,-1(a5!)
1c008758:	8082                	ret
1c00875a:	88b2                	mv	a7,a2
1c00875c:	b791                	j	1c0086a0 <memmove+0x170>
1c00875e:	882a                	mv	a6,a0
1c008760:	8332                	mv	t1,a2
1c008762:	bd91                	j	1c0085b6 <memmove+0x86>
1c008764:	4705                	li	a4,1
1c008766:	b7a9                	j	1c0086b0 <memmove+0x180>
1c008768:	4705                	li	a4,1
1c00876a:	bdb1                	j	1c0085c6 <memmove+0x96>

1c00876c <strchr>:
1c00876c:	00054783          	lbu	a5,0(a0)
1c008770:	0ff5f593          	andi	a1,a1,255
1c008774:	00b78c63          	beq	a5,a1,1c00878c <strchr+0x20>
1c008778:	cb99                	beqz	a5,1c00878e <strchr+0x22>
1c00877a:	00150793          	addi	a5,a0,1
1c00877e:	a011                	j	1c008782 <strchr+0x16>
1c008780:	c719                	beqz	a4,1c00878e <strchr+0x22>
1c008782:	853e                	mv	a0,a5
1c008784:	0017c70b          	p.lbu	a4,1(a5!)
1c008788:	feb71ce3          	bne	a4,a1,1c008780 <strchr+0x14>
1c00878c:	8082                	ret
1c00878e:	0015b593          	seqz	a1,a1
1c008792:	40b005b3          	neg	a1,a1
1c008796:	8d6d                	and	a0,a0,a1
1c008798:	8082                	ret

1c00879a <puts>:
1c00879a:	0015478b          	p.lbu	a5,1(a0!)
1c00879e:	1a104737          	lui	a4,0x1a104
1c0087a2:	02070713          	addi	a4,a4,32 # 1a104020 <__l2_shared_end+0xa102590>
1c0087a6:	c789                	beqz	a5,1c0087b0 <puts+0x16>
1c0087a8:	c31c                	sw	a5,0(a4)
1c0087aa:	0015478b          	p.lbu	a5,1(a0!)
1c0087ae:	ffed                	bnez	a5,1c0087a8 <puts+0xe>
1c0087b0:	1a1047b7          	lui	a5,0x1a104
1c0087b4:	4729                	li	a4,10
1c0087b6:	d398                	sw	a4,32(a5)
1c0087b8:	4501                	li	a0,0
1c0087ba:	8082                	ret

1c0087bc <pos_libc_fputc_locked>:
1c0087bc:	1a1047b7          	lui	a5,0x1a104
1c0087c0:	0ff57513          	andi	a0,a0,255
1c0087c4:	d388                	sw	a0,32(a5)
1c0087c6:	4501                	li	a0,0
1c0087c8:	8082                	ret

1c0087ca <pos_libc_prf_locked>:
1c0087ca:	a0a9                	j	1c008814 <pos_libc_prf>

1c0087cc <exit>:
1c0087cc:	1141                	addi	sp,sp,-16
1c0087ce:	c606                	sw	ra,12(sp)
1c0087d0:	1a1047b7          	lui	a5,0x1a104
1c0087d4:	c1f54533          	p.bset	a0,a0,0,31
1c0087d8:	0aa7a023          	sw	a0,160(a5) # 1a1040a0 <__l2_shared_end+0xa102610>
1c0087dc:	36f5                	jal	1c0083c8 <pos_wait_forever>

1c0087de <pos_io_start>:
1c0087de:	4501                	li	a0,0
1c0087e0:	8082                	ret

1c0087e2 <pos_io_stop>:
1c0087e2:	4501                	li	a0,0
1c0087e4:	8082                	ret

1c0087e6 <printf>:
1c0087e6:	7139                	addi	sp,sp,-64
1c0087e8:	02410313          	addi	t1,sp,36
1c0087ec:	d432                	sw	a2,40(sp)
1c0087ee:	862a                	mv	a2,a0
1c0087f0:	1c008537          	lui	a0,0x1c008
1c0087f4:	d22e                	sw	a1,36(sp)
1c0087f6:	d636                	sw	a3,44(sp)
1c0087f8:	4589                	li	a1,2
1c0087fa:	869a                	mv	a3,t1
1c0087fc:	7bc50513          	addi	a0,a0,1980 # 1c0087bc <pos_libc_fputc_locked>
1c008800:	ce06                	sw	ra,28(sp)
1c008802:	d83a                	sw	a4,48(sp)
1c008804:	da3e                	sw	a5,52(sp)
1c008806:	dc42                	sw	a6,56(sp)
1c008808:	de46                	sw	a7,60(sp)
1c00880a:	c61a                	sw	t1,12(sp)
1c00880c:	3f7d                	jal	1c0087ca <pos_libc_prf_locked>
1c00880e:	40f2                	lw	ra,28(sp)
1c008810:	6121                	addi	sp,sp,64
1c008812:	8082                	ret

1c008814 <pos_libc_prf>:
1c008814:	7169                	addi	sp,sp,-304
1c008816:	12812423          	sw	s0,296(sp)
1c00881a:	4401                	li	s0,0
1c00881c:	11612823          	sw	s6,272(sp)
1c008820:	11712623          	sw	s7,268(sp)
1c008824:	11812423          	sw	s8,264(sp)
1c008828:	11912223          	sw	s9,260(sp)
1c00882c:	11a12023          	sw	s10,256(sp)
1c008830:	dfee                	sw	s11,252(sp)
1c008832:	12112623          	sw	ra,300(sp)
1c008836:	8da2                	mv	s11,s0
1c008838:	12912223          	sw	s1,292(sp)
1c00883c:	13212023          	sw	s2,288(sp)
1c008840:	11312e23          	sw	s3,284(sp)
1c008844:	11412c23          	sw	s4,280(sp)
1c008848:	11512a23          	sw	s5,276(sp)
1c00884c:	8b2a                	mv	s6,a0
1c00884e:	8d2e                	mv	s10,a1
1c008850:	8c36                	mv	s8,a3
1c008852:	1c000bb7          	lui	s7,0x1c000
1c008856:	02410c93          	addi	s9,sp,36
1c00885a:	8432                	mv	s0,a2
1c00885c:	00044503          	lbu	a0,0(s0)
1c008860:	0405                	addi	s0,s0,1
1c008862:	cd11                	beqz	a0,1c00887e <pos_libc_prf+0x6a>
1c008864:	02500793          	li	a5,37
1c008868:	04f50863          	beq	a0,a5,1c0088b8 <pos_libc_prf+0xa4>
1c00886c:	85ea                	mv	a1,s10
1c00886e:	9b02                	jalr	s6
1c008870:	31f52563          	p.beqimm	a0,-1,1c008b7a <pos_libc_prf+0x366>
1c008874:	0d85                	addi	s11,s11,1
1c008876:	00044503          	lbu	a0,0(s0)
1c00887a:	0405                	addi	s0,s0,1
1c00887c:	f565                	bnez	a0,1c008864 <pos_libc_prf+0x50>
1c00887e:	846e                	mv	s0,s11
1c008880:	8522                	mv	a0,s0
1c008882:	12c12083          	lw	ra,300(sp)
1c008886:	12812403          	lw	s0,296(sp)
1c00888a:	12412483          	lw	s1,292(sp)
1c00888e:	12012903          	lw	s2,288(sp)
1c008892:	11c12983          	lw	s3,284(sp)
1c008896:	11812a03          	lw	s4,280(sp)
1c00889a:	11412a83          	lw	s5,276(sp)
1c00889e:	11012b03          	lw	s6,272(sp)
1c0088a2:	10c12b83          	lw	s7,268(sp)
1c0088a6:	10812c03          	lw	s8,264(sp)
1c0088aa:	10412c83          	lw	s9,260(sp)
1c0088ae:	10012d03          	lw	s10,256(sp)
1c0088b2:	5dfe                	lw	s11,252(sp)
1c0088b4:	6155                	addi	sp,sp,304
1c0088b6:	8082                	ret
1c0088b8:	00044483          	lbu	s1,0(s0)
1c0088bc:	02000693          	li	a3,32
1c0088c0:	00140a93          	addi	s5,s0,1
1c0088c4:	078b8513          	addi	a0,s7,120 # 1c000078 <__DTOR_END__+0x5c>
1c0088c8:	85a6                	mv	a1,s1
1c0088ca:	c836                	sw	a3,16(sp)
1c0088cc:	cc02                	sw	zero,24(sp)
1c0088ce:	ca02                	sw	zero,20(sp)
1c0088d0:	ce02                	sw	zero,28(sp)
1c0088d2:	c602                	sw	zero,12(sp)
1c0088d4:	02300913          	li	s2,35
1c0088d8:	02d00a13          	li	s4,45
1c0088dc:	89d6                	mv	s3,s5
1c0088de:	3579                	jal	1c00876c <strchr>
1c0088e0:	c915                	beqz	a0,1c008914 <pos_libc_prf+0x100>
1c0088e2:	2b248b63          	beq	s1,s2,1c008b98 <pos_libc_prf+0x384>
1c0088e6:	0c997463          	bleu	s1,s2,1c0089ae <pos_libc_prf+0x19a>
1c0088ea:	2b448363          	beq	s1,s4,1c008b90 <pos_libc_prf+0x37c>
1c0088ee:	03000613          	li	a2,48
1c0088f2:	28c48a63          	beq	s1,a2,1c008b86 <pos_libc_prf+0x372>
1c0088f6:	02b00693          	li	a3,43
1c0088fa:	28d48263          	beq	s1,a3,1c008b7e <pos_libc_prf+0x36a>
1c0088fe:	8456                	mv	s0,s5
1c008900:	00044483          	lbu	s1,0(s0)
1c008904:	00140a93          	addi	s5,s0,1
1c008908:	078b8513          	addi	a0,s7,120
1c00890c:	85a6                	mv	a1,s1
1c00890e:	89d6                	mv	s3,s5
1c008910:	3db1                	jal	1c00876c <strchr>
1c008912:	f961                	bnez	a0,1c0088e2 <pos_libc_prf+0xce>
1c008914:	02a00613          	li	a2,42
1c008918:	2ac48663          	beq	s1,a2,1c008bc4 <pos_libc_prf+0x3b0>
1c00891c:	fd048613          	addi	a2,s1,-48
1c008920:	45a5                	li	a1,9
1c008922:	4901                	li	s2,0
1c008924:	28c5f063          	bleu	a2,a1,1c008ba4 <pos_libc_prf+0x390>
1c008928:	02e00693          	li	a3,46
1c00892c:	5a7d                	li	s4,-1
1c00892e:	2ed48363          	beq	s1,a3,1c008c14 <pos_libc_prf+0x400>
1c008932:	1c0007b7          	lui	a5,0x1c000
1c008936:	85a6                	mv	a1,s1
1c008938:	08078513          	addi	a0,a5,128 # 1c000080 <__DTOR_END__+0x64>
1c00893c:	3d05                	jal	1c00876c <strchr>
1c00893e:	844e                	mv	s0,s3
1c008940:	c509                	beqz	a0,1c00894a <pos_libc_prf+0x136>
1c008942:	0009c483          	lbu	s1,0(s3)
1c008946:	00198413          	addi	s0,s3,1
1c00894a:	06700693          	li	a3,103
1c00894e:	2896d963          	ble	s1,a3,1c008be0 <pos_libc_prf+0x3cc>
1c008952:	07000693          	li	a3,112
1c008956:	7cd48b63          	beq	s1,a3,1c00912c <pos_libc_prf+0x918>
1c00895a:	2e96d163          	ble	s1,a3,1c008c3c <pos_libc_prf+0x428>
1c00895e:	07500693          	li	a3,117
1c008962:	12d489e3          	beq	s1,a3,1c009294 <pos_libc_prf+0xa80>
1c008966:	07800693          	li	a3,120
1c00896a:	06d48663          	beq	s1,a3,1c0089d6 <pos_libc_prf+0x1c2>
1c00896e:	07300693          	li	a3,115
1c008972:	18d49fe3          	bne	s1,a3,1c009310 <pos_libc_prf+0xafc>
1c008976:	000c2583          	lw	a1,0(s8)
1c00897a:	004c0993          	addi	s3,s8,4
1c00897e:	4481                	li	s1,0
1c008980:	86ae                	mv	a3,a1
1c008982:	0c8350fb          	lp.setupi	x1,200,1c00898e <pos_libc_prf+0x17a>
1c008986:	0016c70b          	p.lbu	a4,1(a3!)
1c00898a:	18070ae3          	beqz	a4,1c00931e <pos_libc_prf+0xb0a>
1c00898e:	0485                	addi	s1,s1,1
1c008990:	000a4763          	bltz	s4,1c00899e <pos_libc_prf+0x18a>
1c008994:	0544c4b3          	p.min	s1,s1,s4
1c008998:	8c4e                	mv	s8,s3
1c00899a:	ec0481e3          	beqz	s1,1c00885c <pos_libc_prf+0x48>
1c00899e:	8626                	mv	a2,s1
1c0089a0:	8566                	mv	a0,s9
1c0089a2:	3c99                	jal	1c0083f8 <memcpy>
1c0089a4:	8c4e                	mv	s8,s3
1c0089a6:	1b24db63          	ble	s2,s1,1c008b5c <pos_libc_prf+0x348>
1c0089aa:	c602                	sw	zero,12(sp)
1c0089ac:	a0f9                	j	1c008a7a <pos_libc_prf+0x266>
1c0089ae:	ec0488e3          	beqz	s1,1c00887e <pos_libc_prf+0x6a>
1c0089b2:	02000593          	li	a1,32
1c0089b6:	f4b494e3          	bne	s1,a1,1c0088fe <pos_libc_prf+0xea>
1c0089ba:	4785                	li	a5,1
1c0089bc:	cc3e                	sw	a5,24(sp)
1c0089be:	8456                	mv	s0,s5
1c0089c0:	b781                	j	1c008900 <pos_libc_prf+0xec>
1c0089c2:	06300693          	li	a3,99
1c0089c6:	0ad48de3          	beq	s1,a3,1c009280 <pos_libc_prf+0xa6c>
1c0089ca:	0096cde3          	blt	a3,s1,1c0091e4 <pos_libc_prf+0x9d0>
1c0089ce:	05800693          	li	a3,88
1c0089d2:	12d49fe3          	bne	s1,a3,1c009310 <pos_libc_prf+0xafc>
1c0089d6:	47b2                	lw	a5,12(sp)
1c0089d8:	004c0893          	addi	a7,s8,4
1c0089dc:	000c2503          	lw	a0,0(s8)
1c0089e0:	260788e3          	beqz	a5,1c009450 <pos_libc_prf+0xc3c>
1c0089e4:	76e1                	lui	a3,0xffff8
1c0089e6:	8306c693          	xori	a3,a3,-2000
1c0089ea:	02d11223          	sh	a3,36(sp)
1c0089ee:	4309                	li	t1,2
1c0089f0:	02610613          	addi	a2,sp,38
1c0089f4:	86b2                	mv	a3,a2
1c0089f6:	4ea5                	li	t4,9
1c0089f8:	f6453733          	p.bclr	a4,a0,27,4
1c0089fc:	0ff77793          	andi	a5,a4,255
1c008a00:	03078593          	addi	a1,a5,48
1c008a04:	8111                	srli	a0,a0,0x4
1c008a06:	05778793          	addi	a5,a5,87
1c008a0a:	70eee963          	bltu	t4,a4,1c00911c <pos_libc_prf+0x908>
1c008a0e:	00b680ab          	p.sb	a1,1(a3!) # ffff8001 <pulp__FC+0xffff8002>
1c008a12:	f17d                	bnez	a0,1c0089f8 <pos_libc_prf+0x1e4>
1c008a14:	40c68733          	sub	a4,a3,a2
1c008a18:	01475d63          	ble	s4,a4,1c008a32 <pos_libc_prf+0x21e>
1c008a1c:	40d605b3          	sub	a1,a2,a3
1c008a20:	03000513          	li	a0,48
1c008a24:	95d2                	add	a1,a1,s4
1c008a26:	0045c0fb          	lp.setup	x1,a1,1c008a2e <pos_libc_prf+0x21a>
1c008a2a:	00a680ab          	p.sb	a0,1(a3!)
1c008a2e:	40c68733          	sub	a4,a3,a2
1c008a32:	fe068fab          	p.sb	zero,-1(a3!)
1c008a36:	00d67c63          	bleu	a3,a2,1c008a4e <pos_libc_prf+0x23a>
1c008a3a:	00064583          	lbu	a1,0(a2)
1c008a3e:	0006c783          	lbu	a5,0(a3)
1c008a42:	feb68fab          	p.sb	a1,-1(a3!)
1c008a46:	00f600ab          	p.sb	a5,1(a2!)
1c008a4a:	fed668e3          	bltu	a2,a3,1c008a3a <pos_libc_prf+0x226>
1c008a4e:	05800693          	li	a3,88
1c008a52:	20d483e3          	beq	s1,a3,1c009458 <pos_libc_prf+0xc44>
1c008a56:	46b2                	lw	a3,12(sp)
1c008a58:	006704b3          	add	s1,a4,t1
1c008a5c:	c299                	beqz	a3,1c008a62 <pos_libc_prf+0x24e>
1c008a5e:	4709                	li	a4,2
1c008a60:	c63a                	sw	a4,12(sp)
1c008a62:	0c800793          	li	a5,200
1c008a66:	23fa24e3          	p.beqimm	s4,-1,1c00948e <pos_libc_prf+0xc7a>
1c008a6a:	1097c863          	blt	a5,s1,1c008b7a <pos_libc_prf+0x366>
1c008a6e:	02000793          	li	a5,32
1c008a72:	8c46                	mv	s8,a7
1c008a74:	c83e                	sw	a5,16(sp)
1c008a76:	0f24d163          	ble	s2,s1,1c008b58 <pos_libc_prf+0x344>
1c008a7a:	4772                	lw	a4,28(sp)
1c008a7c:	0c0702e3          	beqz	a4,1c009340 <pos_libc_prf+0xb2c>
1c008a80:	009c87b3          	add	a5,s9,s1
1c008a84:	40f007b3          	neg	a5,a5
1c008a88:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008a8c:	4595                	li	a1,5
1c008a8e:	00378613          	addi	a2,a5,3
1c008a92:	fff90693          	addi	a3,s2,-1
1c008a96:	04b67633          	p.maxu	a2,a2,a1
1c008a9a:	8e85                	sub	a3,a3,s1
1c008a9c:	409905b3          	sub	a1,s2,s1
1c008aa0:	06c6e163          	bltu	a3,a2,1c008b02 <pos_libc_prf+0x2ee>
1c008aa4:	8626                	mv	a2,s1
1c008aa6:	cb85                	beqz	a5,1c008ad6 <pos_libc_prf+0x2c2>
1c008aa8:	1998                	addi	a4,sp,240
1c008aaa:	00970633          	add	a2,a4,s1
1c008aae:	02000693          	li	a3,32
1c008ab2:	f2d60a23          	sb	a3,-204(a2)
1c008ab6:	00148613          	addi	a2,s1,1
1c008aba:	0017ae63          	p.beqimm	a5,1,1c008ad6 <pos_libc_prf+0x2c2>
1c008abe:	963a                	add	a2,a2,a4
1c008ac0:	f2d60a23          	sb	a3,-204(a2)
1c008ac4:	00248613          	addi	a2,s1,2
1c008ac8:	0037b763          	p.bneimm	a5,3,1c008ad6 <pos_libc_prf+0x2c2>
1c008acc:	963a                	add	a2,a2,a4
1c008ace:	f2d60a23          	sb	a3,-204(a2)
1c008ad2:	00348613          	addi	a2,s1,3
1c008ad6:	8d9d                	sub	a1,a1,a5
1c008ad8:	0025d693          	srli	a3,a1,0x2
1c008adc:	97a6                	add	a5,a5,s1
1c008ade:	97e6                	add	a5,a5,s9
1c008ae0:	42068fe3          	beqz	a3,1c00971e <pos_libc_prf+0xf0a>
1c008ae4:	0076c0fb          	lp.setup	x1,a3,1c008af2 <pos_libc_prf+0x2de>
1c008ae8:	1c000737          	lui	a4,0x1c000
1c008aec:	07470713          	addi	a4,a4,116 # 1c000074 <__DTOR_END__+0x58>
1c008af0:	4318                	lw	a4,0(a4)
1c008af2:	00e7a22b          	p.sw	a4,4(a5!)
1c008af6:	c205b7b3          	p.bclr	a5,a1,1,0
1c008afa:	00c784b3          	add	s1,a5,a2
1c008afe:	04b78c63          	beq	a5,a1,1c008b56 <pos_libc_prf+0x342>
1c008b02:	198c                	addi	a1,sp,240
1c008b04:	009586b3          	add	a3,a1,s1
1c008b08:	02000793          	li	a5,32
1c008b0c:	f2f68a23          	sb	a5,-204(a3)
1c008b10:	00148693          	addi	a3,s1,1
1c008b14:	0526d163          	ble	s2,a3,1c008b56 <pos_libc_prf+0x342>
1c008b18:	96ae                	add	a3,a3,a1
1c008b1a:	f2f68a23          	sb	a5,-204(a3)
1c008b1e:	00248693          	addi	a3,s1,2
1c008b22:	0326da63          	ble	s2,a3,1c008b56 <pos_libc_prf+0x342>
1c008b26:	96ae                	add	a3,a3,a1
1c008b28:	f2f68a23          	sb	a5,-204(a3)
1c008b2c:	00348693          	addi	a3,s1,3
1c008b30:	0326d363          	ble	s2,a3,1c008b56 <pos_libc_prf+0x342>
1c008b34:	96ae                	add	a3,a3,a1
1c008b36:	f2f68a23          	sb	a5,-204(a3)
1c008b3a:	00448693          	addi	a3,s1,4
1c008b3e:	0126dc63          	ble	s2,a3,1c008b56 <pos_libc_prf+0x342>
1c008b42:	96ae                	add	a3,a3,a1
1c008b44:	f2f68a23          	sb	a5,-204(a3)
1c008b48:	00548713          	addi	a4,s1,5
1c008b4c:	01275563          	ble	s2,a4,1c008b56 <pos_libc_prf+0x342>
1c008b50:	972e                	add	a4,a4,a1
1c008b52:	f2f70a23          	sb	a5,-204(a4)
1c008b56:	84ca                	mv	s1,s2
1c008b58:	d00482e3          	beqz	s1,1c00885c <pos_libc_prf+0x48>
1c008b5c:	8966                	mv	s2,s9
1c008b5e:	419d8db3          	sub	s11,s11,s9
1c008b62:	a029                	j	1c008b6c <pos_libc_prf+0x358>
1c008b64:	012d8733          	add	a4,s11,s2
1c008b68:	5a048f63          	beqz	s1,1c009126 <pos_libc_prf+0x912>
1c008b6c:	0019450b          	p.lbu	a0,1(s2!)
1c008b70:	85ea                	mv	a1,s10
1c008b72:	14fd                	addi	s1,s1,-1
1c008b74:	9b02                	jalr	s6
1c008b76:	fff537e3          	p.bneimm	a0,-1,1c008b64 <pos_libc_prf+0x350>
1c008b7a:	547d                	li	s0,-1
1c008b7c:	b311                	j	1c008880 <pos_libc_prf+0x6c>
1c008b7e:	4705                	li	a4,1
1c008b80:	ca3a                	sw	a4,20(sp)
1c008b82:	8456                	mv	s0,s5
1c008b84:	bbb5                	j	1c008900 <pos_libc_prf+0xec>
1c008b86:	03000713          	li	a4,48
1c008b8a:	c83a                	sw	a4,16(sp)
1c008b8c:	8456                	mv	s0,s5
1c008b8e:	bb8d                	j	1c008900 <pos_libc_prf+0xec>
1c008b90:	4785                	li	a5,1
1c008b92:	ce3e                	sw	a5,28(sp)
1c008b94:	8456                	mv	s0,s5
1c008b96:	b3ad                	j	1c008900 <pos_libc_prf+0xec>
1c008b98:	4685                	li	a3,1
1c008b9a:	c636                	sw	a3,12(sp)
1c008b9c:	8456                	mv	s0,s5
1c008b9e:	b38d                	j	1c008900 <pos_libc_prf+0xec>
1c008ba0:	8456                	mv	s0,s5
1c008ba2:	0a85                	addi	s5,s5,1
1c008ba4:	00291793          	slli	a5,s2,0x2
1c008ba8:	97ca                	add	a5,a5,s2
1c008baa:	0786                	slli	a5,a5,0x1
1c008bac:	97a6                	add	a5,a5,s1
1c008bae:	000ac483          	lbu	s1,0(s5)
1c008bb2:	fd078913          	addi	s2,a5,-48
1c008bb6:	fd048793          	addi	a5,s1,-48
1c008bba:	fef5f3e3          	bleu	a5,a1,1c008ba0 <pos_libc_prf+0x38c>
1c008bbe:	00240993          	addi	s3,s0,2
1c008bc2:	a811                	j	1c008bd6 <pos_libc_prf+0x3c2>
1c008bc4:	000c2903          	lw	s2,0(s8)
1c008bc8:	0c11                	addi	s8,s8,4
1c008bca:	12094d63          	bltz	s2,1c008d04 <pos_libc_prf+0x4f0>
1c008bce:	000ac483          	lbu	s1,0(s5)
1c008bd2:	00240993          	addi	s3,s0,2
1c008bd6:	0c800693          	li	a3,200
1c008bda:	04d95933          	p.minu	s2,s2,a3
1c008bde:	b3a9                	j	1c008928 <pos_libc_prf+0x114>
1c008be0:	06500693          	li	a3,101
1c008be4:	12d4d563          	ble	a3,s1,1c008d0e <pos_libc_prf+0x4fa>
1c008be8:	04700693          	li	a3,71
1c008bec:	dc96cbe3          	blt	a3,s1,1c0089c2 <pos_libc_prf+0x1ae>
1c008bf0:	04500693          	li	a3,69
1c008bf4:	10d4dd63          	ble	a3,s1,1c008d0e <pos_libc_prf+0x4fa>
1c008bf8:	c80483e3          	beqz	s1,1c00887e <pos_libc_prf+0x6a>
1c008bfc:	02500693          	li	a3,37
1c008c00:	70d49863          	bne	s1,a3,1c009310 <pos_libc_prf+0xafc>
1c008c04:	85ea                	mv	a1,s10
1c008c06:	02500513          	li	a0,37
1c008c0a:	9b02                	jalr	s6
1c008c0c:	f7f527e3          	p.beqimm	a0,-1,1c008b7a <pos_libc_prf+0x366>
1c008c10:	0d85                	addi	s11,s11,1
1c008c12:	b195                	j	1c008876 <pos_libc_prf+0x62>
1c008c14:	0009c783          	lbu	a5,0(s3)
1c008c18:	02a00693          	li	a3,42
1c008c1c:	00198513          	addi	a0,s3,1
1c008c20:	0ad79963          	bne	a5,a3,1c008cd2 <pos_libc_prf+0x4be>
1c008c24:	000c2a03          	lw	s4,0(s8)
1c008c28:	0019c483          	lbu	s1,1(s3)
1c008c2c:	0c11                	addi	s8,s8,4
1c008c2e:	0989                	addi	s3,s3,2
1c008c30:	0c800693          	li	a3,200
1c008c34:	cf46dfe3          	ble	s4,a3,1c008932 <pos_libc_prf+0x11e>
1c008c38:	5a7d                	li	s4,-1
1c008c3a:	b9e5                	j	1c008932 <pos_libc_prf+0x11e>
1c008c3c:	06e00693          	li	a3,110
1c008c40:	58d48763          	beq	s1,a3,1c0091ce <pos_libc_prf+0x9ba>
1c008c44:	5896dc63          	ble	s1,a3,1c0091dc <pos_libc_prf+0x9c8>
1c008c48:	47b2                	lw	a5,12(sp)
1c008c4a:	004c0813          	addi	a6,s8,4
1c008c4e:	000c2603          	lw	a2,0(s8)
1c008c52:	04078ee3          	beqz	a5,1c0094ae <pos_libc_prf+0xc9a>
1c008c56:	03000793          	li	a5,48
1c008c5a:	02f10223          	sb	a5,36(sp)
1c008c5e:	02060de3          	beqz	a2,1c009498 <pos_libc_prf+0xc84>
1c008c62:	02510513          	addi	a0,sp,37
1c008c66:	86aa                	mv	a3,a0
1c008c68:	87b6                	mv	a5,a3
1c008c6a:	f8363733          	p.bclr	a4,a2,28,3
1c008c6e:	03070713          	addi	a4,a4,48
1c008c72:	820d                	srli	a2,a2,0x3
1c008c74:	00e780ab          	p.sb	a4,1(a5!)
1c008c78:	fa6d                	bnez	a2,1c008c6a <pos_libc_prf+0x456>
1c008c7a:	40a78733          	sub	a4,a5,a0
1c008c7e:	01475d63          	ble	s4,a4,1c008c98 <pos_libc_prf+0x484>
1c008c82:	40fa0633          	sub	a2,s4,a5
1c008c86:	03000593          	li	a1,48
1c008c8a:	962a                	add	a2,a2,a0
1c008c8c:	004640fb          	lp.setup	x1,a2,1c008c94 <pos_libc_prf+0x480>
1c008c90:	00b780ab          	p.sb	a1,1(a5!)
1c008c94:	40a78733          	sub	a4,a5,a0
1c008c98:	fe078fab          	p.sb	zero,-1(a5!)
1c008c9c:	00f6fc63          	bleu	a5,a3,1c008cb4 <pos_libc_prf+0x4a0>
1c008ca0:	0006c583          	lbu	a1,0(a3)
1c008ca4:	0007c603          	lbu	a2,0(a5)
1c008ca8:	feb78fab          	p.sb	a1,-1(a5!)
1c008cac:	00c680ab          	p.sb	a2,1(a3!)
1c008cb0:	fef6e8e3          	bltu	a3,a5,1c008ca0 <pos_libc_prf+0x48c>
1c008cb4:	46b2                	lw	a3,12(sp)
1c008cb6:	0c800793          	li	a5,200
1c008cba:	00d704b3          	add	s1,a4,a3
1c008cbe:	0bfa2de3          	p.beqimm	s4,-1,1c009578 <pos_libc_prf+0xd64>
1c008cc2:	ea97cce3          	blt	a5,s1,1c008b7a <pos_libc_prf+0x366>
1c008cc6:	02000793          	li	a5,32
1c008cca:	8c42                	mv	s8,a6
1c008ccc:	c602                	sw	zero,12(sp)
1c008cce:	c83e                	sw	a5,16(sp)
1c008cd0:	b35d                	j	1c008a76 <pos_libc_prf+0x262>
1c008cd2:	fd078813          	addi	a6,a5,-48
1c008cd6:	46a5                	li	a3,9
1c008cd8:	84be                	mv	s1,a5
1c008cda:	862a                	mv	a2,a0
1c008cdc:	4a01                	li	s4,0
1c008cde:	45a5                	li	a1,9
1c008ce0:	89aa                	mv	s3,a0
1c008ce2:	c506e8e3          	bltu	a3,a6,1c008932 <pos_libc_prf+0x11e>
1c008ce6:	002a1793          	slli	a5,s4,0x2
1c008cea:	97d2                	add	a5,a5,s4
1c008cec:	0786                	slli	a5,a5,0x1
1c008cee:	97a6                	add	a5,a5,s1
1c008cf0:	0016448b          	p.lbu	s1,1(a2!)
1c008cf4:	fd078a13          	addi	s4,a5,-48
1c008cf8:	fd048793          	addi	a5,s1,-48
1c008cfc:	fef5f5e3          	bleu	a5,a1,1c008ce6 <pos_libc_prf+0x4d2>
1c008d00:	89b2                	mv	s3,a2
1c008d02:	b73d                	j	1c008c30 <pos_libc_prf+0x41c>
1c008d04:	4705                	li	a4,1
1c008d06:	41200933          	neg	s2,s2
1c008d0a:	ce3a                	sw	a4,28(sp)
1c008d0c:	b5c9                	j	1c008bce <pos_libc_prf+0x3ba>
1c008d0e:	0c1d                	addi	s8,s8,7
1c008d10:	c40c3c33          	p.bclr	s8,s8,2,0
1c008d14:	000c2683          	lw	a3,0(s8)
1c008d18:	004c2803          	lw	a6,4(s8)
1c008d1c:	7ff00613          	li	a2,2047
1c008d20:	0156d893          	srli	a7,a3,0x15
1c008d24:	01485513          	srli	a0,a6,0x14
1c008d28:	00b81593          	slli	a1,a6,0xb
1c008d2c:	00b8e5b3          	or	a1,a7,a1
1c008d30:	e8b53533          	p.bclr	a0,a0,20,11
1c008d34:	0c21                	addi	s8,s8,8
1c008d36:	06ae                	slli	a3,a3,0xb
1c008d38:	c1f5b5b3          	p.bclr	a1,a1,0,31
1c008d3c:	7ac50b63          	beq	a0,a2,1c0094f2 <pos_libc_prf+0xcde>
1c008d40:	04600613          	li	a2,70
1c008d44:	00c49463          	bne	s1,a2,1c008d4c <pos_libc_prf+0x538>
1c008d48:	06600493          	li	s1,102
1c008d4c:	00d56633          	or	a2,a0,a3
1c008d50:	8e4d                	or	a2,a2,a1
1c008d52:	7c060b63          	beqz	a2,1c009528 <pos_libc_prf+0xd14>
1c008d56:	c0250513          	addi	a0,a0,-1022
1c008d5a:	c1f5c333          	p.bset	t1,a1,0,31
1c008d5e:	140842e3          	bltz	a6,1c0096a2 <pos_libc_prf+0xe8e>
1c008d62:	4752                	lw	a4,20(sp)
1c008d64:	180703e3          	beqz	a4,1c0096ea <pos_libc_prf+0xed6>
1c008d68:	02b00613          	li	a2,43
1c008d6c:	02c10223          	sb	a2,36(sp)
1c008d70:	02510893          	addi	a7,sp,37
1c008d74:	5679                	li	a2,-2
1c008d76:	4801                	li	a6,0
1c008d78:	06c55763          	ble	a2,a0,1c008de6 <pos_libc_prf+0x5d2>
1c008d7c:	33333e37          	lui	t3,0x33333
1c008d80:	80000eb7          	lui	t4,0x80000
1c008d84:	332e0e13          	addi	t3,t3,818 # 33333332 <__cluster_text_end+0x17323332>
1c008d88:	fffece93          	not	t4,t4
1c008d8c:	5f79                	li	t5,-2
1c008d8e:	a011                	j	1c008d92 <pos_libc_prf+0x57e>
1c008d90:	853e                	mv	a0,a5
1c008d92:	01f31613          	slli	a2,t1,0x1f
1c008d96:	0016d713          	srli	a4,a3,0x1
1c008d9a:	fc16b7b3          	p.bclr	a5,a3,30,1
1c008d9e:	8f51                	or	a4,a4,a2
1c008da0:	00e786b3          	add	a3,a5,a4
1c008da4:	00f6b7b3          	sltu	a5,a3,a5
1c008da8:	00135313          	srli	t1,t1,0x1
1c008dac:	933e                	add	t1,t1,a5
1c008dae:	00150793          	addi	a5,a0,1
1c008db2:	fc6e6fe3          	bltu	t3,t1,1c008d90 <pos_libc_prf+0x57c>
1c008db6:	00269613          	slli	a2,a3,0x2
1c008dba:	01e6d593          	srli	a1,a3,0x1e
1c008dbe:	00231713          	slli	a4,t1,0x2
1c008dc2:	96b2                	add	a3,a3,a2
1c008dc4:	8f4d                	or	a4,a4,a1
1c008dc6:	933a                	add	t1,t1,a4
1c008dc8:	00c6b633          	sltu	a2,a3,a2
1c008dcc:	9332                	add	t1,t1,a2
1c008dce:	01f6d713          	srli	a4,a3,0x1f
1c008dd2:	0509                	addi	a0,a0,2
1c008dd4:	187d                	addi	a6,a6,-1
1c008dd6:	01d31663          	bne	t1,t4,1c008de2 <pos_libc_prf+0x5ce>
1c008dda:	0686                	slli	a3,a3,0x1
1c008ddc:	fc174333          	p.bset	t1,a4,30,1
1c008de0:	853e                	mv	a0,a5
1c008de2:	fbe548e3          	blt	a0,t5,1c008d92 <pos_libc_prf+0x57e>
1c008de6:	06a05763          	blez	a0,1c008e54 <pos_libc_prf+0x640>
1c008dea:	80000eb7          	lui	t4,0x80000
1c008dee:	4f15                	li	t5,5
1c008df0:	fffece93          	not	t4,t4
1c008df4:	00268613          	addi	a2,a3,2
1c008df8:	00d636b3          	sltu	a3,a2,a3
1c008dfc:	9336                	add	t1,t1,a3
1c008dfe:	03e357b3          	divu	a5,t1,t5
1c008e02:	00365593          	srli	a1,a2,0x3
1c008e06:	157d                	addi	a0,a0,-1
1c008e08:	0805                	addi	a6,a6,1
1c008e0a:	00279713          	slli	a4,a5,0x2
1c008e0e:	973e                	add	a4,a4,a5
1c008e10:	40e30333          	sub	t1,t1,a4
1c008e14:	01d31713          	slli	a4,t1,0x1d
1c008e18:	8dd9                	or	a1,a1,a4
1c008e1a:	03e5d5b3          	divu	a1,a1,t5
1c008e1e:	00359693          	slli	a3,a1,0x3
1c008e22:	00559713          	slli	a4,a1,0x5
1c008e26:	9736                	add	a4,a4,a3
1c008e28:	40e60733          	sub	a4,a2,a4
1c008e2c:	03e75733          	divu	a4,a4,t5
1c008e30:	81f5                	srli	a1,a1,0x1d
1c008e32:	97ae                	add	a5,a5,a1
1c008e34:	96ba                	add	a3,a3,a4
1c008e36:	00e6b733          	sltu	a4,a3,a4
1c008e3a:	00f70333          	add	t1,a4,a5
1c008e3e:	01f6d793          	srli	a5,a3,0x1f
1c008e42:	0306                	slli	t1,t1,0x1
1c008e44:	0067e333          	or	t1,a5,t1
1c008e48:	0686                	slli	a3,a3,0x1
1c008e4a:	157d                	addi	a0,a0,-1
1c008e4c:	fe6ef9e3          	bleu	t1,t4,1c008e3e <pos_libc_prf+0x62a>
1c008e50:	faa042e3          	bgtz	a0,1c008df4 <pos_libc_prf+0x5e0>
1c008e54:	4611                	li	a2,4
1c008e56:	8e09                	sub	a2,a2,a0
1c008e58:	012640fb          	lp.setup	x1,a2,1c008e7c <pos_libc_prf+0x668>
1c008e5c:	01f31713          	slli	a4,t1,0x1f
1c008e60:	0016d793          	srli	a5,a3,0x1
1c008e64:	8fd9                	or	a5,a5,a4
1c008e66:	fc16b6b3          	p.bclr	a3,a3,30,1
1c008e6a:	00f68eb3          	add	t4,a3,a5
1c008e6e:	00135313          	srli	t1,t1,0x1
1c008e72:	00deb6b3          	sltu	a3,t4,a3
1c008e76:	00668533          	add	a0,a3,t1
1c008e7a:	832a                	mv	t1,a0
1c008e7c:	86f6                	mv	a3,t4
1c008e7e:	06700693          	li	a3,103
1c008e82:	6c0a4e63          	bltz	s4,1c00955e <pos_libc_prf+0xd4a>
1c008e86:	62d48863          	beq	s1,a3,1c0094b6 <pos_libc_prf+0xca2>
1c008e8a:	04700693          	li	a3,71
1c008e8e:	62d48463          	beq	s1,a3,1c0094b6 <pos_libc_prf+0xca2>
1c008e92:	06600693          	li	a3,102
1c008e96:	78d48963          	beq	s1,a3,1c009628 <pos_libc_prf+0xe14>
1c008e9a:	001a0f13          	addi	t5,s4,1
1c008e9e:	45c1                	li	a1,16
1c008ea0:	04bf4f33          	p.min	t5,t5,a1
1c008ea4:	1f7d                	addi	t5,t5,-1
1c008ea6:	4e01                	li	t3,0
1c008ea8:	4581                	li	a1,0
1c008eaa:	080006b7          	lui	a3,0x8000
1c008eae:	4f95                	li	t6,5
1c008eb0:	0f05                	addi	t5,t5,1
1c008eb2:	02ff40fb          	lp.setup	x1,t5,1c008f10 <pos_libc_prf+0x6fc>
1c008eb6:	00258713          	addi	a4,a1,2
1c008eba:	00b737b3          	sltu	a5,a4,a1
1c008ebe:	97b6                	add	a5,a5,a3
1c008ec0:	03f7d5b3          	divu	a1,a5,t6
1c008ec4:	00375613          	srli	a2,a4,0x3
1c008ec8:	00259693          	slli	a3,a1,0x2
1c008ecc:	96ae                	add	a3,a3,a1
1c008ece:	8f95                	sub	a5,a5,a3
1c008ed0:	07f6                	slli	a5,a5,0x1d
1c008ed2:	8e5d                	or	a2,a2,a5
1c008ed4:	03f65633          	divu	a2,a2,t6
1c008ed8:	00361693          	slli	a3,a2,0x3
1c008edc:	00561793          	slli	a5,a2,0x5
1c008ee0:	97b6                	add	a5,a5,a3
1c008ee2:	40f707b3          	sub	a5,a4,a5
1c008ee6:	03f7d7b3          	divu	a5,a5,t6
1c008eea:	01d65713          	srli	a4,a2,0x1d
1c008eee:	972e                	add	a4,a4,a1
1c008ef0:	96be                	add	a3,a3,a5
1c008ef2:	00f6b7b3          	sltu	a5,a3,a5
1c008ef6:	973e                	add	a4,a4,a5
1c008ef8:	01f71613          	slli	a2,a4,0x1f
1c008efc:	0016d793          	srli	a5,a3,0x1
1c008f00:	8fd1                	or	a5,a5,a2
1c008f02:	fc16b6b3          	p.bclr	a3,a3,30,1
1c008f06:	00f685b3          	add	a1,a3,a5
1c008f0a:	8305                	srli	a4,a4,0x1
1c008f0c:	00d5b6b3          	sltu	a3,a1,a3
1c008f10:	96ba                	add	a3,a3,a4
1c008f12:	95f6                	add	a1,a1,t4
1c008f14:	96aa                	add	a3,a3,a0
1c008f16:	01d5beb3          	sltu	t4,a1,t4
1c008f1a:	00de8533          	add	a0,t4,a3
1c008f1e:	f6053633          	p.bclr	a2,a0,27,0
1c008f22:	86ae                	mv	a3,a1
1c008f24:	c22d                	beqz	a2,1c008f86 <pos_libc_prf+0x772>
1c008f26:	00258613          	addi	a2,a1,2
1c008f2a:	00b636b3          	sltu	a3,a2,a1
1c008f2e:	96aa                	add	a3,a3,a0
1c008f30:	4e95                	li	t4,5
1c008f32:	03d6d333          	divu	t1,a3,t4
1c008f36:	00365513          	srli	a0,a2,0x3
1c008f3a:	0805                	addi	a6,a6,1
1c008f3c:	00231593          	slli	a1,t1,0x2
1c008f40:	959a                	add	a1,a1,t1
1c008f42:	8e8d                	sub	a3,a3,a1
1c008f44:	06f6                	slli	a3,a3,0x1d
1c008f46:	8d55                	or	a0,a0,a3
1c008f48:	03d55533          	divu	a0,a0,t4
1c008f4c:	00351593          	slli	a1,a0,0x3
1c008f50:	00551693          	slli	a3,a0,0x5
1c008f54:	96ae                	add	a3,a3,a1
1c008f56:	40d606b3          	sub	a3,a2,a3
1c008f5a:	03d6d6b3          	divu	a3,a3,t4
1c008f5e:	8175                	srli	a0,a0,0x1d
1c008f60:	951a                	add	a0,a0,t1
1c008f62:	95b6                	add	a1,a1,a3
1c008f64:	00d5b6b3          	sltu	a3,a1,a3
1c008f68:	00a68633          	add	a2,a3,a0
1c008f6c:	01f61513          	slli	a0,a2,0x1f
1c008f70:	0015d693          	srli	a3,a1,0x1
1c008f74:	8ec9                	or	a3,a3,a0
1c008f76:	fc15b5b3          	p.bclr	a1,a1,30,1
1c008f7a:	96ae                	add	a3,a3,a1
1c008f7c:	8205                	srli	a2,a2,0x1
1c008f7e:	00b6b5b3          	sltu	a1,a3,a1
1c008f82:	00c58533          	add	a0,a1,a2
1c008f86:	06600593          	li	a1,102
1c008f8a:	00188613          	addi	a2,a7,1
1c008f8e:	60b48463          	beq	s1,a1,1c009596 <pos_libc_prf+0xd82>
1c008f92:	00269593          	slli	a1,a3,0x2
1c008f96:	01e6de93          	srli	t4,a3,0x1e
1c008f9a:	00251313          	slli	t1,a0,0x2
1c008f9e:	96ae                	add	a3,a3,a1
1c008fa0:	006ee333          	or	t1,t4,t1
1c008fa4:	00b6b5b3          	sltu	a1,a3,a1
1c008fa8:	951a                	add	a0,a0,t1
1c008faa:	952e                	add	a0,a0,a1
1c008fac:	0506                	slli	a0,a0,0x1
1c008fae:	01f6d593          	srli	a1,a3,0x1f
1c008fb2:	8d4d                	or	a0,a0,a1
1c008fb4:	01c55593          	srli	a1,a0,0x1c
1c008fb8:	03058313          	addi	t1,a1,48
1c008fbc:	47b2                	lw	a5,12(sp)
1c008fbe:	10000737          	lui	a4,0x10000
1c008fc2:	00b035b3          	snez	a1,a1
1c008fc6:	177d                	addi	a4,a4,-1
1c008fc8:	00688023          	sb	t1,0(a7)
1c008fcc:	0686                	slli	a3,a3,0x1
1c008fce:	8d79                	and	a0,a0,a4
1c008fd0:	40b80833          	sub	a6,a6,a1
1c008fd4:	5a078863          	beqz	a5,1c009584 <pos_libc_prf+0xd70>
1c008fd8:	02e00613          	li	a2,46
1c008fdc:	00c880a3          	sb	a2,1(a7)
1c008fe0:	00288613          	addi	a2,a7,2
1c008fe4:	040a0b63          	beqz	s4,1c00903a <pos_libc_prf+0x826>
1c008fe8:	8332                	mv	t1,a2
1c008fea:	9a32                	add	s4,s4,a2
1c008fec:	4ebd                	li	t4,15
1c008fee:	03000f13          	li	t5,48
1c008ff2:	00269793          	slli	a5,a3,0x2
1c008ff6:	01e6d593          	srli	a1,a3,0x1e
1c008ffa:	00251713          	slli	a4,a0,0x2
1c008ffe:	00d78633          	add	a2,a5,a3
1c009002:	8f4d                	or	a4,a4,a1
1c009004:	972a                	add	a4,a4,a0
1c009006:	00f637b3          	sltu	a5,a2,a5
1c00900a:	97ba                	add	a5,a5,a4
1c00900c:	0786                	slli	a5,a5,0x1
1c00900e:	01f65713          	srli	a4,a2,0x1f
1c009012:	8fd9                	or	a5,a5,a4
1c009014:	01c7d713          	srli	a4,a5,0x1c
1c009018:	03070713          	addi	a4,a4,48 # 10000030 <ne16_scale+0x2c>
1c00901c:	2fd05463          	blez	t4,1c009304 <pos_libc_prf+0xaf0>
1c009020:	100005b7          	lui	a1,0x10000
1c009024:	15fd                	addi	a1,a1,-1
1c009026:	00e300ab          	p.sb	a4,1(t1!)
1c00902a:	1efd                	addi	t4,t4,-1
1c00902c:	00161693          	slli	a3,a2,0x1
1c009030:	00b7f533          	and	a0,a5,a1
1c009034:	fa6a1fe3          	bne	s4,t1,1c008ff2 <pos_libc_prf+0x7de>
1c009038:	8652                	mv	a2,s4
1c00903a:	0c0e1163          	bnez	t3,1c0090fc <pos_libc_prf+0x8e8>
1c00903e:	c054b6b3          	p.bclr	a3,s1,0,5
1c009042:	04500593          	li	a1,69
1c009046:	02b69963          	bne	a3,a1,1c009078 <pos_libc_prf+0x864>
1c00904a:	87a6                	mv	a5,s1
1c00904c:	00f60023          	sb	a5,0(a2)
1c009050:	5e084d63          	bltz	a6,1c00964a <pos_libc_prf+0xe36>
1c009054:	02b00793          	li	a5,43
1c009058:	00f600a3          	sb	a5,1(a2)
1c00905c:	47a9                	li	a5,10
1c00905e:	02f846b3          	div	a3,a6,a5
1c009062:	0611                	addi	a2,a2,4
1c009064:	02f867b3          	rem	a5,a6,a5
1c009068:	03068693          	addi	a3,a3,48 # 8000030 <__l1_heap_size+0x7ff1ac0>
1c00906c:	fed60f23          	sb	a3,-2(a2)
1c009070:	03078793          	addi	a5,a5,48
1c009074:	fef60fa3          	sb	a5,-1(a2)
1c009078:	00060023          	sb	zero,0(a2)
1c00907c:	419604b3          	sub	s1,a2,s9
1c009080:	46d2                	lw	a3,20(sp)
1c009082:	4762                	lw	a4,24(sp)
1c009084:	8ed9                	or	a3,a3,a4
1c009086:	c636                	sw	a3,12(sp)
1c009088:	2a069463          	bnez	a3,1c009330 <pos_libc_prf+0xb1c>
1c00908c:	02414683          	lbu	a3,36(sp)
1c009090:	02d00793          	li	a5,45
1c009094:	28f68e63          	beq	a3,a5,1c009330 <pos_libc_prf+0xb1c>
1c009098:	0c800793          	li	a5,200
1c00909c:	9c97dde3          	ble	s1,a5,1c008a76 <pos_libc_prf+0x262>
1c0090a0:	547d                	li	s0,-1
1c0090a2:	fdeff06f          	j	1c008880 <pos_libc_prf+0x6c>
1c0090a6:	0305                	addi	t1,t1,1
1c0090a8:	00269793          	slli	a5,a3,0x2
1c0090ac:	01e6d893          	srli	a7,a3,0x1e
1c0090b0:	00251713          	slli	a4,a0,0x2
1c0090b4:	00d785b3          	add	a1,a5,a3
1c0090b8:	00e8e733          	or	a4,a7,a4
1c0090bc:	972a                	add	a4,a4,a0
1c0090be:	00f5b7b3          	sltu	a5,a1,a5
1c0090c2:	97ba                	add	a5,a5,a4
1c0090c4:	0786                	slli	a5,a5,0x1
1c0090c6:	01f5d713          	srli	a4,a1,0x1f
1c0090ca:	8fd9                	or	a5,a5,a4
1c0090cc:	01c7d893          	srli	a7,a5,0x1c
1c0090d0:	03000713          	li	a4,48
1c0090d4:	01d05c63          	blez	t4,1c0090ec <pos_libc_prf+0x8d8>
1c0090d8:	00159693          	slli	a3,a1,0x1
1c0090dc:	100005b7          	lui	a1,0x10000
1c0090e0:	15fd                	addi	a1,a1,-1
1c0090e2:	03088713          	addi	a4,a7,48
1c0090e6:	1efd                	addi	t4,t4,-1
1c0090e8:	00b7f533          	and	a0,a5,a1
1c0090ec:	fee30fa3          	sb	a4,-1(t1)
1c0090f0:	fa661be3          	bne	a2,t1,1c0090a6 <pos_libc_prf+0x892>
1c0090f4:	014f8633          	add	a2,t6,s4
1c0090f8:	f80e00e3          	beqz	t3,1c009078 <pos_libc_prf+0x864>
1c0090fc:	03000513          	li	a0,48
1c009100:	a011                	j	1c009104 <pos_libc_prf+0x8f0>
1c009102:	8636                	mv	a2,a3
1c009104:	fff60693          	addi	a3,a2,-1
1c009108:	0006c583          	lbu	a1,0(a3)
1c00910c:	fea58be3          	beq	a1,a0,1c009102 <pos_libc_prf+0x8ee>
1c009110:	02e00513          	li	a0,46
1c009114:	f2a595e3          	bne	a1,a0,1c00903e <pos_libc_prf+0x82a>
1c009118:	8636                	mv	a2,a3
1c00911a:	b715                	j	1c00903e <pos_libc_prf+0x82a>
1c00911c:	00f680ab          	p.sb	a5,1(a3!)
1c009120:	8c051ce3          	bnez	a0,1c0089f8 <pos_libc_prf+0x1e4>
1c009124:	b8c5                	j	1c008a14 <pos_libc_prf+0x200>
1c009126:	8dba                	mv	s11,a4
1c009128:	f34ff06f          	j	1c00885c <pos_libc_prf+0x48>
1c00912c:	77e1                	lui	a5,0xffff8
1c00912e:	8307c793          	xori	a5,a5,-2000
1c009132:	02610693          	addi	a3,sp,38
1c009136:	000c2583          	lw	a1,0(s8)
1c00913a:	02f11223          	sh	a5,36(sp)
1c00913e:	0c11                	addi	s8,s8,4
1c009140:	87b6                	mv	a5,a3
1c009142:	48a5                	li	a7,9
1c009144:	f645b633          	p.bclr	a2,a1,27,4
1c009148:	0ff67713          	andi	a4,a2,255
1c00914c:	03070513          	addi	a0,a4,48
1c009150:	8191                	srli	a1,a1,0x4
1c009152:	05770713          	addi	a4,a4,87
1c009156:	06c8e863          	bltu	a7,a2,1c0091c6 <pos_libc_prf+0x9b2>
1c00915a:	00a780ab          	p.sb	a0,1(a5!) # ffff8001 <pulp__FC+0xffff8002>
1c00915e:	f1fd                	bnez	a1,1c009144 <pos_libc_prf+0x930>
1c009160:	40d78733          	sub	a4,a5,a3
1c009164:	461d                	li	a2,7
1c009166:	02e64563          	blt	a2,a4,1c009190 <pos_libc_prf+0x97c>
1c00916a:	1998                	addi	a4,sp,240
1c00916c:	40e78533          	sub	a0,a5,a4
1c009170:	40f68633          	sub	a2,a3,a5
1c009174:	0cb50513          	addi	a0,a0,203
1c009178:	4821                	li	a6,8
1c00917a:	03000593          	li	a1,48
1c00917e:	0621                	addi	a2,a2,8
1c009180:	5aa84263          	blt	a6,a0,1c009724 <pos_libc_prf+0xf10>
1c009184:	004640fb          	lp.setup	x1,a2,1c00918c <pos_libc_prf+0x978>
1c009188:	00b780ab          	p.sb	a1,1(a5!)
1c00918c:	40d78733          	sub	a4,a5,a3
1c009190:	fe078fab          	p.sb	zero,-1(a5!)
1c009194:	00f6fc63          	bleu	a5,a3,1c0091ac <pos_libc_prf+0x998>
1c009198:	0006c583          	lbu	a1,0(a3)
1c00919c:	0007c603          	lbu	a2,0(a5)
1c0091a0:	feb78fab          	p.sb	a1,-1(a5!)
1c0091a4:	00c680ab          	p.sb	a2,1(a3!)
1c0091a8:	fef6e8e3          	bltu	a3,a5,1c009198 <pos_libc_prf+0x984>
1c0091ac:	00270493          	addi	s1,a4,2
1c0091b0:	0c800793          	li	a5,200
1c0091b4:	17fa2963          	p.beqimm	s4,-1,1c009326 <pos_libc_prf+0xb12>
1c0091b8:	9c97c1e3          	blt	a5,s1,1c008b7a <pos_libc_prf+0x366>
1c0091bc:	02000713          	li	a4,32
1c0091c0:	c602                	sw	zero,12(sp)
1c0091c2:	c83a                	sw	a4,16(sp)
1c0091c4:	b84d                	j	1c008a76 <pos_libc_prf+0x262>
1c0091c6:	00e780ab          	p.sb	a4,1(a5!)
1c0091ca:	fdad                	bnez	a1,1c009144 <pos_libc_prf+0x930>
1c0091cc:	bf51                	j	1c009160 <pos_libc_prf+0x94c>
1c0091ce:	000c2783          	lw	a5,0(s8)
1c0091d2:	0c11                	addi	s8,s8,4
1c0091d4:	01b7a023          	sw	s11,0(a5)
1c0091d8:	e84ff06f          	j	1c00885c <pos_libc_prf+0x48>
1c0091dc:	06900693          	li	a3,105
1c0091e0:	12d49863          	bne	s1,a3,1c009310 <pos_libc_prf+0xafc>
1c0091e4:	000c2503          	lw	a0,0(s8)
1c0091e8:	0c11                	addi	s8,s8,4
1c0091ea:	34054d63          	bltz	a0,1c009544 <pos_libc_prf+0xd30>
1c0091ee:	4652                	lw	a2,20(sp)
1c0091f0:	86aa                	mv	a3,a0
1c0091f2:	2e061963          	bnez	a2,1c0094e4 <pos_libc_prf+0xcd0>
1c0091f6:	4762                	lw	a4,24(sp)
1c0091f8:	87e6                	mv	a5,s9
1c0091fa:	c719                	beqz	a4,1c009208 <pos_libc_prf+0x9f4>
1c0091fc:	02000793          	li	a5,32
1c009200:	02f10223          	sb	a5,36(sp)
1c009204:	02510793          	addi	a5,sp,37
1c009208:	873e                	mv	a4,a5
1c00920a:	45a9                	li	a1,10
1c00920c:	02b6f633          	remu	a2,a3,a1
1c009210:	02b6d6b3          	divu	a3,a3,a1
1c009214:	03060613          	addi	a2,a2,48
1c009218:	00c700ab          	p.sb	a2,1(a4!)
1c00921c:	fae5                	bnez	a3,1c00920c <pos_libc_prf+0x9f8>
1c00921e:	40f706b3          	sub	a3,a4,a5
1c009222:	0146dc63          	ble	s4,a3,1c00923a <pos_libc_prf+0xa26>
1c009226:	40e786b3          	sub	a3,a5,a4
1c00922a:	03000613          	li	a2,48
1c00922e:	96d2                	add	a3,a3,s4
1c009230:	0046c0fb          	lp.setup	x1,a3,1c009238 <pos_libc_prf+0xa24>
1c009234:	00c700ab          	p.sb	a2,1(a4!)
1c009238:	0001                	nop
1c00923a:	86ba                	mv	a3,a4
1c00923c:	fe068fab          	p.sb	zero,-1(a3!)
1c009240:	00d7fc63          	bleu	a3,a5,1c009258 <pos_libc_prf+0xa44>
1c009244:	0007c583          	lbu	a1,0(a5)
1c009248:	0006c603          	lbu	a2,0(a3)
1c00924c:	feb68fab          	p.sb	a1,-1(a3!)
1c009250:	00c780ab          	p.sb	a2,1(a5!)
1c009254:	fed7e8e3          	bltu	a5,a3,1c009244 <pos_libc_prf+0xa30>
1c009258:	47d2                	lw	a5,20(sp)
1c00925a:	4662                	lw	a2,24(sp)
1c00925c:	419704b3          	sub	s1,a4,s9
1c009260:	8fd1                	or	a5,a5,a2
1c009262:	c63e                	sw	a5,12(sp)
1c009264:	e399                	bnez	a5,1c00926a <pos_libc_prf+0xa56>
1c009266:	817d                	srli	a0,a0,0x1f
1c009268:	c62a                	sw	a0,12(sp)
1c00926a:	e3fa27e3          	p.beqimm	s4,-1,1c009098 <pos_libc_prf+0x884>
1c00926e:	0c800793          	li	a5,200
1c009272:	9097c4e3          	blt	a5,s1,1c008b7a <pos_libc_prf+0x366>
1c009276:	02000713          	li	a4,32
1c00927a:	c83a                	sw	a4,16(sp)
1c00927c:	ffaff06f          	j	1c008a76 <pos_libc_prf+0x262>
1c009280:	000c2783          	lw	a5,0(s8)
1c009284:	020102a3          	sb	zero,37(sp)
1c009288:	0c11                	addi	s8,s8,4
1c00928a:	02f10223          	sb	a5,36(sp)
1c00928e:	4485                	li	s1,1
1c009290:	f16ff06f          	j	1c0089a6 <pos_libc_prf+0x192>
1c009294:	000c2683          	lw	a3,0(s8)
1c009298:	87e6                	mv	a5,s9
1c00929a:	0c11                	addi	s8,s8,4
1c00929c:	45a9                	li	a1,10
1c00929e:	02b6f733          	remu	a4,a3,a1
1c0092a2:	02b6d6b3          	divu	a3,a3,a1
1c0092a6:	03070713          	addi	a4,a4,48
1c0092aa:	00e780ab          	p.sb	a4,1(a5!)
1c0092ae:	fae5                	bnez	a3,1c00929e <pos_libc_prf+0xa8a>
1c0092b0:	419784b3          	sub	s1,a5,s9
1c0092b4:	0144dd63          	ble	s4,s1,1c0092ce <pos_libc_prf+0xaba>
1c0092b8:	40fc86b3          	sub	a3,s9,a5
1c0092bc:	03000613          	li	a2,48
1c0092c0:	96d2                	add	a3,a3,s4
1c0092c2:	0046c0fb          	lp.setup	x1,a3,1c0092ca <pos_libc_prf+0xab6>
1c0092c6:	00c780ab          	p.sb	a2,1(a5!)
1c0092ca:	419784b3          	sub	s1,a5,s9
1c0092ce:	fe078fab          	p.sb	zero,-1(a5!)
1c0092d2:	00fcfd63          	bleu	a5,s9,1c0092ec <pos_libc_prf+0xad8>
1c0092d6:	86e6                	mv	a3,s9
1c0092d8:	0006c603          	lbu	a2,0(a3)
1c0092dc:	0007c703          	lbu	a4,0(a5)
1c0092e0:	fec78fab          	p.sb	a2,-1(a5!)
1c0092e4:	00e680ab          	p.sb	a4,1(a3!)
1c0092e8:	fef6e8e3          	bltu	a3,a5,1c0092d8 <pos_libc_prf+0xac4>
1c0092ec:	0c800793          	li	a5,200
1c0092f0:	03fa2b63          	p.beqimm	s4,-1,1c009326 <pos_libc_prf+0xb12>
1c0092f4:	8897c3e3          	blt	a5,s1,1c008b7a <pos_libc_prf+0x366>
1c0092f8:	02000693          	li	a3,32
1c0092fc:	c602                	sw	zero,12(sp)
1c0092fe:	c836                	sw	a3,16(sp)
1c009300:	f76ff06f          	j	1c008a76 <pos_libc_prf+0x262>
1c009304:	01e300ab          	p.sb	t5,1(t1!)
1c009308:	ce6a15e3          	bne	s4,t1,1c008ff2 <pos_libc_prf+0x7de>
1c00930c:	8652                	mv	a2,s4
1c00930e:	b335                	j	1c00903a <pos_libc_prf+0x826>
1c009310:	0c800693          	li	a3,200
1c009314:	d496d463          	ble	s1,a3,1c00885c <pos_libc_prf+0x48>
1c009318:	547d                	li	s0,-1
1c00931a:	d66ff06f          	j	1c008880 <pos_libc_prf+0x6c>
1c00931e:	e60a5b63          	bgez	s4,1c008994 <pos_libc_prf+0x180>
1c009322:	e76ff06f          	j	1c008998 <pos_libc_prf+0x184>
1c009326:	8497cae3          	blt	a5,s1,1c008b7a <pos_libc_prf+0x366>
1c00932a:	c602                	sw	zero,12(sp)
1c00932c:	f4aff06f          	j	1c008a76 <pos_libc_prf+0x262>
1c009330:	0c800793          	li	a5,200
1c009334:	8497c3e3          	blt	a5,s1,1c008b7a <pos_libc_prf+0x366>
1c009338:	4685                	li	a3,1
1c00933a:	c636                	sw	a3,12(sp)
1c00933c:	f3aff06f          	j	1c008a76 <pos_libc_prf+0x262>
1c009340:	409909b3          	sub	s3,s2,s1
1c009344:	00148613          	addi	a2,s1,1
1c009348:	85e6                	mv	a1,s9
1c00934a:	013c8533          	add	a0,s9,s3
1c00934e:	9e2ff0ef          	jal	ra,1c008530 <memmove>
1c009352:	46c2                	lw	a3,16(sp)
1c009354:	02000793          	li	a5,32
1c009358:	32f68b63          	beq	a3,a5,1c00968e <pos_libc_prf+0xe7a>
1c00935c:	4732                	lw	a4,12(sp)
1c00935e:	84ca                	mv	s1,s2
1c009360:	99ba                	add	s3,s3,a4
1c009362:	ff375b63          	ble	s3,a4,1c008b58 <pos_libc_prf+0x344>
1c009366:	46b2                	lw	a3,12(sp)
1c009368:	4595                	li	a1,5
1c00936a:	00dc87b3          	add	a5,s9,a3
1c00936e:	40f007b3          	neg	a5,a5
1c009372:	fa27b7b3          	p.bclr	a5,a5,29,2
1c009376:	00378613          	addi	a2,a5,3
1c00937a:	fff98693          	addi	a3,s3,-1
1c00937e:	04b67633          	p.maxu	a2,a2,a1
1c009382:	8e99                	sub	a3,a3,a4
1c009384:	40e985b3          	sub	a1,s3,a4
1c009388:	06c6e763          	bltu	a3,a2,1c0093f6 <pos_libc_prf+0xbe2>
1c00938c:	863a                	mv	a2,a4
1c00938e:	cf95                	beqz	a5,1c0093ca <pos_libc_prf+0xbb6>
1c009390:	1990                	addi	a2,sp,240
1c009392:	00e606b3          	add	a3,a2,a4
1c009396:	4742                	lw	a4,16(sp)
1c009398:	f2e68a23          	sb	a4,-204(a3)
1c00939c:	46b2                	lw	a3,12(sp)
1c00939e:	00168613          	addi	a2,a3,1
1c0093a2:	0217a463          	p.beqimm	a5,1,1c0093ca <pos_libc_prf+0xbb6>
1c0093a6:	86ba                	mv	a3,a4
1c0093a8:	1998                	addi	a4,sp,240
1c0093aa:	963a                	add	a2,a2,a4
1c0093ac:	4732                	lw	a4,12(sp)
1c0093ae:	f2d60a23          	sb	a3,-204(a2)
1c0093b2:	00270613          	addi	a2,a4,2
1c0093b6:	0037ba63          	p.bneimm	a5,3,1c0093ca <pos_libc_prf+0xbb6>
1c0093ba:	8736                	mv	a4,a3
1c0093bc:	1994                	addi	a3,sp,240
1c0093be:	9636                	add	a2,a2,a3
1c0093c0:	46b2                	lw	a3,12(sp)
1c0093c2:	f2e60a23          	sb	a4,-204(a2)
1c0093c6:	00368613          	addi	a2,a3,3
1c0093ca:	4732                	lw	a4,12(sp)
1c0093cc:	8d9d                	sub	a1,a1,a5
1c0093ce:	0025d693          	srli	a3,a1,0x2
1c0093d2:	97ba                	add	a5,a5,a4
1c0093d4:	4742                	lw	a4,16(sp)
1c0093d6:	97e6                	add	a5,a5,s9
1c0093d8:	00e05557          	pv.add.sc.b	a0,zero,a4
1c0093dc:	34068663          	beqz	a3,1c009728 <pos_libc_prf+0xf14>
1c0093e0:	0046c0fb          	lp.setup	x1,a3,1c0093e8 <pos_libc_prf+0xbd4>
1c0093e4:	00a7a22b          	p.sw	a0,4(a5!)
1c0093e8:	0001                	nop
1c0093ea:	c205b7b3          	p.bclr	a5,a1,1,0
1c0093ee:	963e                	add	a2,a2,a5
1c0093f0:	c632                	sw	a2,12(sp)
1c0093f2:	f6b78263          	beq	a5,a1,1c008b56 <pos_libc_prf+0x342>
1c0093f6:	46b2                	lw	a3,12(sp)
1c0093f8:	4742                	lw	a4,16(sp)
1c0093fa:	198c                	addi	a1,sp,240
1c0093fc:	00d587b3          	add	a5,a1,a3
1c009400:	f2e78a23          	sb	a4,-204(a5)
1c009404:	00168793          	addi	a5,a3,1
1c009408:	f537d763          	ble	s3,a5,1c008b56 <pos_libc_prf+0x342>
1c00940c:	97ae                	add	a5,a5,a1
1c00940e:	f2e78a23          	sb	a4,-204(a5)
1c009412:	00268793          	addi	a5,a3,2
1c009416:	f537d063          	ble	s3,a5,1c008b56 <pos_libc_prf+0x342>
1c00941a:	97ae                	add	a5,a5,a1
1c00941c:	f2e78a23          	sb	a4,-204(a5)
1c009420:	00368793          	addi	a5,a3,3
1c009424:	f337d963          	ble	s3,a5,1c008b56 <pos_libc_prf+0x342>
1c009428:	97ae                	add	a5,a5,a1
1c00942a:	f2e78a23          	sb	a4,-204(a5)
1c00942e:	00468793          	addi	a5,a3,4
1c009432:	f337d263          	ble	s3,a5,1c008b56 <pos_libc_prf+0x342>
1c009436:	97ae                	add	a5,a5,a1
1c009438:	f2e78a23          	sb	a4,-204(a5)
1c00943c:	00568a93          	addi	s5,a3,5
1c009440:	f13adb63          	ble	s3,s5,1c008b56 <pos_libc_prf+0x342>
1c009444:	9aae                	add	s5,s5,a1
1c009446:	f2ea8a23          	sb	a4,-204(s5)
1c00944a:	84ca                	mv	s1,s2
1c00944c:	f0cff06f          	j	1c008b58 <pos_libc_prf+0x344>
1c009450:	4301                	li	t1,0
1c009452:	8666                	mv	a2,s9
1c009454:	da0ff06f          	j	1c0089f4 <pos_libc_prf+0x1e0>
1c009458:	02414783          	lbu	a5,36(sp)
1c00945c:	1054                	addi	a3,sp,36
1c00945e:	4665                	li	a2,25
1c009460:	de078b63          	beqz	a5,1c008a56 <pos_libc_prf+0x242>
1c009464:	fe078593          	addi	a1,a5,-32
1c009468:	f9f78793          	addi	a5,a5,-97
1c00946c:	0ff7f793          	andi	a5,a5,255
1c009470:	00f66963          	bltu	a2,a5,1c009482 <pos_libc_prf+0xc6e>
1c009474:	00b680ab          	p.sb	a1,1(a3!)
1c009478:	0006c783          	lbu	a5,0(a3)
1c00947c:	f7e5                	bnez	a5,1c009464 <pos_libc_prf+0xc50>
1c00947e:	dd8ff06f          	j	1c008a56 <pos_libc_prf+0x242>
1c009482:	0685                	addi	a3,a3,1
1c009484:	0006c783          	lbu	a5,0(a3)
1c009488:	fff1                	bnez	a5,1c009464 <pos_libc_prf+0xc50>
1c00948a:	dccff06f          	j	1c008a56 <pos_libc_prf+0x242>
1c00948e:	ee97c663          	blt	a5,s1,1c008b7a <pos_libc_prf+0x366>
1c009492:	8c46                	mv	s8,a7
1c009494:	de2ff06f          	j	1c008a76 <pos_libc_prf+0x262>
1c009498:	020102a3          	sb	zero,37(sp)
1c00949c:	8c42                	mv	s8,a6
1c00949e:	44b2                	lw	s1,12(sp)
1c0094a0:	d1fa2363          	p.beqimm	s4,-1,1c0089a6 <pos_libc_prf+0x192>
1c0094a4:	02000693          	li	a3,32
1c0094a8:	c836                	sw	a3,16(sp)
1c0094aa:	cfcff06f          	j	1c0089a6 <pos_libc_prf+0x192>
1c0094ae:	8566                	mv	a0,s9
1c0094b0:	86e6                	mv	a3,s9
1c0094b2:	fb6ff06f          	j	1c008c68 <pos_libc_prf+0x454>
1c0094b6:	4732                	lw	a4,12(sp)
1c0094b8:	4e01                	li	t3,0
1c0094ba:	e319                	bnez	a4,1c0094c0 <pos_libc_prf+0xcac>
1c0094bc:	01403e33          	snez	t3,s4
1c0094c0:	5675                	li	a2,-3
1c0094c2:	001a0693          	addi	a3,s4,1
1c0094c6:	00c84463          	blt	a6,a2,1c0094ce <pos_libc_prf+0xcba>
1c0094ca:	1706d063          	ble	a6,a3,1c00962a <pos_libc_prf+0xe16>
1c0094ce:	47c1                	li	a5,16
1c0094d0:	04f6cf33          	p.min	t5,a3,a5
1c0094d4:	06700693          	li	a3,103
1c0094d8:	1f7d                	addi	t5,t5,-1
1c0094da:	1ed48a63          	beq	s1,a3,1c0096ce <pos_libc_prf+0xeba>
1c0094de:	04500493          	li	s1,69
1c0094e2:	b2d9                	j	1c008ea8 <pos_libc_prf+0x694>
1c0094e4:	02b00793          	li	a5,43
1c0094e8:	02f10223          	sb	a5,36(sp)
1c0094ec:	02510793          	addi	a5,sp,37
1c0094f0:	bb21                	j	1c009208 <pos_libc_prf+0x9f4>
1c0094f2:	8666                	mv	a2,s9
1c0094f4:	1a084063          	bltz	a6,1c009694 <pos_libc_prf+0xe80>
1c0094f8:	8ecd                	or	a3,a3,a1
1c0094fa:	fbf48793          	addi	a5,s1,-65
1c0094fe:	00360713          	addi	a4,a2,3
1c009502:	14069b63          	bnez	a3,1c009658 <pos_libc_prf+0xe44>
1c009506:	46e5                	li	a3,25
1c009508:	1af6e563          	bltu	a3,a5,1c0096b2 <pos_libc_prf+0xe9e>
1c00950c:	6795                	lui	a5,0x5
1c00950e:	e4978793          	addi	a5,a5,-439 # 4e49 <__cluster_text_size+0x4e49>
1c009512:	00f61023          	sh	a5,0(a2)
1c009516:	04600793          	li	a5,70
1c00951a:	00f60123          	sb	a5,2(a2)
1c00951e:	000601a3          	sb	zero,3(a2)
1c009522:	419704b3          	sub	s1,a4,s9
1c009526:	bea9                	j	1c009080 <pos_libc_prf+0x86c>
1c009528:	46d2                	lw	a3,20(sp)
1c00952a:	14068463          	beqz	a3,1c009672 <pos_libc_prf+0xe5e>
1c00952e:	02b00693          	li	a3,43
1c009532:	02d10223          	sb	a3,36(sp)
1c009536:	02510893          	addi	a7,sp,37
1c00953a:	4801                	li	a6,0
1c00953c:	4501                	li	a0,0
1c00953e:	4681                	li	a3,0
1c009540:	4301                	li	t1,0
1c009542:	ba09                	j	1c008e54 <pos_libc_prf+0x640>
1c009544:	02d00793          	li	a5,45
1c009548:	02f10223          	sb	a5,36(sp)
1c00954c:	800007b7          	lui	a5,0x80000
1c009550:	1af50963          	beq	a0,a5,1c009702 <pos_libc_prf+0xeee>
1c009554:	40a006b3          	neg	a3,a0
1c009558:	02510793          	addi	a5,sp,37
1c00955c:	b175                	j	1c009208 <pos_libc_prf+0x9f4>
1c00955e:	4a19                	li	s4,6
1c009560:	92d495e3          	bne	s1,a3,1c008e8a <pos_libc_prf+0x676>
1c009564:	46b2                	lw	a3,12(sp)
1c009566:	57f5                	li	a5,-3
1c009568:	0016ce13          	xori	t3,a3,1
1c00956c:	14f85d63          	ble	a5,a6,1c0096c6 <pos_libc_prf+0xeb2>
1c009570:	06500493          	li	s1,101
1c009574:	4f19                	li	t5,6
1c009576:	ba0d                	j	1c008ea8 <pos_libc_prf+0x694>
1c009578:	e097c163          	blt	a5,s1,1c008b7a <pos_libc_prf+0x366>
1c00957c:	8c42                	mv	s8,a6
1c00957e:	c602                	sw	zero,12(sp)
1c009580:	cf6ff06f          	j	1c008a76 <pos_libc_prf+0x262>
1c009584:	aa0a0be3          	beqz	s4,1c00903a <pos_libc_prf+0x826>
1c009588:	02e00593          	li	a1,46
1c00958c:	00288613          	addi	a2,a7,2
1c009590:	00b880a3          	sb	a1,1(a7)
1c009594:	bc91                	j	1c008fe8 <pos_libc_prf+0x7d4>
1c009596:	17005b63          	blez	a6,1c00970c <pos_libc_prf+0xef8>
1c00959a:	9846                	add	a6,a6,a7
1c00959c:	4ec1                	li	t4,16
1c00959e:	03000f13          	li	t5,48
1c0095a2:	00269793          	slli	a5,a3,0x2
1c0095a6:	01e6d593          	srli	a1,a3,0x1e
1c0095aa:	00251713          	slli	a4,a0,0x2
1c0095ae:	00d78633          	add	a2,a5,a3
1c0095b2:	8f4d                	or	a4,a4,a1
1c0095b4:	972a                	add	a4,a4,a0
1c0095b6:	00f637b3          	sltu	a5,a2,a5
1c0095ba:	97ba                	add	a5,a5,a4
1c0095bc:	0786                	slli	a5,a5,0x1
1c0095be:	01f65713          	srli	a4,a2,0x1f
1c0095c2:	8fd9                	or	a5,a5,a4
1c0095c4:	01c7d713          	srli	a4,a5,0x1c
1c0095c8:	03070713          	addi	a4,a4,48
1c0095cc:	05d05963          	blez	t4,1c00961e <pos_libc_prf+0xe0a>
1c0095d0:	00e880ab          	p.sb	a4,1(a7!)
1c0095d4:	10000737          	lui	a4,0x10000
1c0095d8:	177d                	addi	a4,a4,-1
1c0095da:	1efd                	addi	t4,t4,-1
1c0095dc:	00161693          	slli	a3,a2,0x1
1c0095e0:	00e7f533          	and	a0,a5,a4
1c0095e4:	fb181fe3          	bne	a6,a7,1c0095a2 <pos_libc_prf+0xd8e>
1c0095e8:	8642                	mv	a2,a6
1c0095ea:	4801                	li	a6,0
1c0095ec:	47b2                	lw	a5,12(sp)
1c0095ee:	e399                	bnez	a5,1c0095f4 <pos_libc_prf+0xde0>
1c0095f0:	b00a04e3          	beqz	s4,1c0090f8 <pos_libc_prf+0x8e4>
1c0095f4:	00160f93          	addi	t6,a2,1
1c0095f8:	001a0593          	addi	a1,s4,1
1c0095fc:	02e00893          	li	a7,46
1c009600:	01160023          	sb	a7,0(a2)
1c009604:	837e                	mv	t1,t6
1c009606:	962e                	add	a2,a2,a1
1c009608:	03000593          	li	a1,48
1c00960c:	aec304e3          	beq	t1,a2,1c0090f4 <pos_libc_prf+0x8e0>
1c009610:	0305                	addi	t1,t1,1
1c009612:	a8080be3          	beqz	a6,1c0090a8 <pos_libc_prf+0x894>
1c009616:	feb30fa3          	sb	a1,-1(t1)
1c00961a:	0805                	addi	a6,a6,1
1c00961c:	bfc5                	j	1c00960c <pos_libc_prf+0xdf8>
1c00961e:	01e880ab          	p.sb	t5,1(a7!)
1c009622:	f91810e3          	bne	a6,a7,1c0095a2 <pos_libc_prf+0xd8e>
1c009626:	b7c9                	j	1c0095e8 <pos_libc_prf+0xdd4>
1c009628:	4e01                	li	t3,0
1c00962a:	014807b3          	add	a5,a6,s4
1c00962e:	0e07c563          	bltz	a5,1c009718 <pos_libc_prf+0xf04>
1c009632:	4641                	li	a2,16
1c009634:	04c7cf33          	p.min	t5,a5,a2
1c009638:	1f7d                	addi	t5,t5,-1
1c00963a:	06600493          	li	s1,102
1c00963e:	860795e3          	bnez	a5,1c008ea8 <pos_libc_prf+0x694>
1c009642:	4581                	li	a1,0
1c009644:	080006b7          	lui	a3,0x8000
1c009648:	b0e9                	j	1c008f12 <pos_libc_prf+0x6fe>
1c00964a:	02d00793          	li	a5,45
1c00964e:	41000833          	neg	a6,a6
1c009652:	00f600a3          	sb	a5,1(a2)
1c009656:	b419                	j	1c00905c <pos_libc_prf+0x848>
1c009658:	46e5                	li	a3,25
1c00965a:	06f6ee63          	bltu	a3,a5,1c0096d6 <pos_libc_prf+0xec2>
1c00965e:	6791                	lui	a5,0x4
1c009660:	14e78793          	addi	a5,a5,334 # 414e <__cluster_text_size+0x414e>
1c009664:	00f61023          	sh	a5,0(a2)
1c009668:	04e00793          	li	a5,78
1c00966c:	00f60123          	sb	a5,2(a2)
1c009670:	b57d                	j	1c00951e <pos_libc_prf+0xd0a>
1c009672:	47e2                	lw	a5,24(sp)
1c009674:	cfc5                	beqz	a5,1c00972c <pos_libc_prf+0xf18>
1c009676:	02000693          	li	a3,32
1c00967a:	02d10223          	sb	a3,36(sp)
1c00967e:	02510893          	addi	a7,sp,37
1c009682:	4801                	li	a6,0
1c009684:	4501                	li	a0,0
1c009686:	4681                	li	a3,0
1c009688:	4301                	li	t1,0
1c00968a:	fcaff06f          	j	1c008e54 <pos_libc_prf+0x640>
1c00968e:	c602                	sw	zero,12(sp)
1c009690:	4732                	lw	a4,12(sp)
1c009692:	b9d1                	j	1c009366 <pos_libc_prf+0xb52>
1c009694:	02d00613          	li	a2,45
1c009698:	02c10223          	sb	a2,36(sp)
1c00969c:	02510613          	addi	a2,sp,37
1c0096a0:	bda1                	j	1c0094f8 <pos_libc_prf+0xce4>
1c0096a2:	02d00613          	li	a2,45
1c0096a6:	02c10223          	sb	a2,36(sp)
1c0096aa:	02510893          	addi	a7,sp,37
1c0096ae:	ec6ff06f          	j	1c008d74 <pos_libc_prf+0x560>
1c0096b2:	679d                	lui	a5,0x7
1c0096b4:	e6978793          	addi	a5,a5,-407 # 6e69 <__cluster_text_size+0x6e69>
1c0096b8:	00f61023          	sh	a5,0(a2)
1c0096bc:	06600793          	li	a5,102
1c0096c0:	00f60123          	sb	a5,2(a2)
1c0096c4:	bda9                	j	1c00951e <pos_libc_prf+0xd0a>
1c0096c6:	479d                	li	a5,7
1c0096c8:	f707d1e3          	ble	a6,a5,1c00962a <pos_libc_prf+0xe16>
1c0096cc:	4f19                	li	t5,6
1c0096ce:	06500493          	li	s1,101
1c0096d2:	fd6ff06f          	j	1c008ea8 <pos_libc_prf+0x694>
1c0096d6:	6799                	lui	a5,0x6
1c0096d8:	16e78793          	addi	a5,a5,366 # 616e <__cluster_text_size+0x616e>
1c0096dc:	00f61023          	sh	a5,0(a2)
1c0096e0:	06e00793          	li	a5,110
1c0096e4:	00f60123          	sb	a5,2(a2)
1c0096e8:	bd1d                	j	1c00951e <pos_libc_prf+0xd0a>
1c0096ea:	47e2                	lw	a5,24(sp)
1c0096ec:	88e6                	mv	a7,s9
1c0096ee:	e8078363          	beqz	a5,1c008d74 <pos_libc_prf+0x560>
1c0096f2:	02000613          	li	a2,32
1c0096f6:	02c10223          	sb	a2,36(sp)
1c0096fa:	02510893          	addi	a7,sp,37
1c0096fe:	e76ff06f          	j	1c008d74 <pos_libc_prf+0x560>
1c009702:	800006b7          	lui	a3,0x80000
1c009706:	02510793          	addi	a5,sp,37
1c00970a:	bcfd                	j	1c009208 <pos_libc_prf+0x9f4>
1c00970c:	03000593          	li	a1,48
1c009710:	00b88023          	sb	a1,0(a7)
1c009714:	4ec1                	li	t4,16
1c009716:	bdd9                	j	1c0095ec <pos_libc_prf+0xdd8>
1c009718:	06600493          	li	s1,102
1c00971c:	b71d                	j	1c009642 <pos_libc_prf+0xe2e>
1c00971e:	4685                	li	a3,1
1c009720:	bc4ff06f          	j	1c008ae4 <pos_libc_prf+0x2d0>
1c009724:	4605                	li	a2,1
1c009726:	bcb9                	j	1c009184 <pos_libc_prf+0x970>
1c009728:	4685                	li	a3,1
1c00972a:	b95d                	j	1c0093e0 <pos_libc_prf+0xbcc>
1c00972c:	88e6                	mv	a7,s9
1c00972e:	bf91                	j	1c009682 <pos_libc_prf+0xe6e>

1c009730 <pos_init_start>:
1c009730:	1141                	addi	sp,sp,-16
1c009732:	c422                	sw	s0,8(sp)
1c009734:	1c000437          	lui	s0,0x1c000
1c009738:	c606                	sw	ra,12(sp)
1c00973a:	00840413          	addi	s0,s0,8 # 1c000008 <ctor_list>
1c00973e:	c89fe0ef          	jal	ra,1c0083c6 <pos_soc_init>
1c009742:	2279                	jal	1c0098d0 <pos_irq_init>
1c009744:	2ac1                	jal	1c009914 <pos_soc_event_init>
1c009746:	20e5                	jal	1c00982e <pos_allocs_init>
1c009748:	405c                	lw	a5,4(s0)
1c00974a:	c791                	beqz	a5,1c009756 <pos_init_start+0x26>
1c00974c:	0421                	addi	s0,s0,8
1c00974e:	9782                	jalr	a5
1c009750:	0044278b          	p.lw	a5,4(s0!)
1c009754:	ffed                	bnez	a5,1c00974e <pos_init_start+0x1e>
1c009756:	888ff0ef          	jal	ra,1c0087de <pos_io_start>
1c00975a:	300467f3          	csrrsi	a5,mstatus,8
1c00975e:	f1402573          	csrr	a0,mhartid
1c009762:	8515                	srai	a0,a0,0x5
1c009764:	f2653533          	p.bclr	a0,a0,25,6
1c009768:	47fd                	li	a5,31
1c00976a:	00f50a63          	beq	a0,a5,1c00977e <pos_init_start+0x4e>
1c00976e:	4422                	lw	s0,8(sp)
1c009770:	40b2                	lw	ra,12(sp)
1c009772:	1c0085b7          	lui	a1,0x1c008
1c009776:	2d858593          	addi	a1,a1,728 # 1c0082d8 <main>
1c00977a:	0141                	addi	sp,sp,16
1c00977c:	a4b1                	j	1c0099c8 <cluster_start>
1c00977e:	40b2                	lw	ra,12(sp)
1c009780:	4422                	lw	s0,8(sp)
1c009782:	0141                	addi	sp,sp,16
1c009784:	8082                	ret

1c009786 <pos_init_stop>:
1c009786:	1141                	addi	sp,sp,-16
1c009788:	c422                	sw	s0,8(sp)
1c00978a:	1c000437          	lui	s0,0x1c000
1c00978e:	c606                	sw	ra,12(sp)
1c009790:	01440413          	addi	s0,s0,20 # 1c000014 <dtor_list>
1c009794:	84eff0ef          	jal	ra,1c0087e2 <pos_io_stop>
1c009798:	405c                	lw	a5,4(s0)
1c00979a:	c791                	beqz	a5,1c0097a6 <pos_init_stop+0x20>
1c00979c:	0421                	addi	s0,s0,8
1c00979e:	9782                	jalr	a5
1c0097a0:	0044278b          	p.lw	a5,4(s0!)
1c0097a4:	ffed                	bnez	a5,1c00979e <pos_init_stop+0x18>
1c0097a6:	40b2                	lw	ra,12(sp)
1c0097a8:	4422                	lw	s0,8(sp)
1c0097aa:	0141                	addi	sp,sp,16
1c0097ac:	8082                	ret

1c0097ae <pos_alloc_init>:
1c0097ae:	00758793          	addi	a5,a1,7
1c0097b2:	c407b7b3          	p.bclr	a5,a5,2,0
1c0097b6:	40b785b3          	sub	a1,a5,a1
1c0097ba:	c11c                	sw	a5,0(a0)
1c0097bc:	8e0d                	sub	a2,a2,a1
1c0097be:	00c05763          	blez	a2,1c0097cc <pos_alloc_init+0x1e>
1c0097c2:	c4063633          	p.bclr	a2,a2,2,0
1c0097c6:	c390                	sw	a2,0(a5)
1c0097c8:	0007a223          	sw	zero,4(a5)
1c0097cc:	8082                	ret

1c0097ce <pos_alloc>:
1c0097ce:	4110                	lw	a2,0(a0)
1c0097d0:	059d                	addi	a1,a1,7
1c0097d2:	c405b5b3          	p.bclr	a1,a1,2,0
1c0097d6:	ca31                	beqz	a2,1c00982a <pos_alloc+0x5c>
1c0097d8:	4218                	lw	a4,0(a2)
1c0097da:	425c                	lw	a5,4(a2)
1c0097dc:	02b75963          	ble	a1,a4,1c00980e <pos_alloc+0x40>
1c0097e0:	cb81                	beqz	a5,1c0097f0 <pos_alloc+0x22>
1c0097e2:	4398                	lw	a4,0(a5)
1c0097e4:	43d4                	lw	a3,4(a5)
1c0097e6:	00b75763          	ble	a1,a4,1c0097f4 <pos_alloc+0x26>
1c0097ea:	863e                	mv	a2,a5
1c0097ec:	87b6                	mv	a5,a3
1c0097ee:	fbf5                	bnez	a5,1c0097e2 <pos_alloc+0x14>
1c0097f0:	853e                	mv	a0,a5
1c0097f2:	8082                	ret
1c0097f4:	00b70a63          	beq	a4,a1,1c009808 <pos_alloc+0x3a>
1c0097f8:	00b78533          	add	a0,a5,a1
1c0097fc:	8f0d                	sub	a4,a4,a1
1c0097fe:	c118                	sw	a4,0(a0)
1c009800:	c154                	sw	a3,4(a0)
1c009802:	c248                	sw	a0,4(a2)
1c009804:	853e                	mv	a0,a5
1c009806:	8082                	ret
1c009808:	c254                	sw	a3,4(a2)
1c00980a:	853e                	mv	a0,a5
1c00980c:	8082                	ret
1c00980e:	00e58b63          	beq	a1,a4,1c009824 <pos_alloc+0x56>
1c009812:	00b606b3          	add	a3,a2,a1
1c009816:	8f0d                	sub	a4,a4,a1
1c009818:	c2dc                	sw	a5,4(a3)
1c00981a:	c298                	sw	a4,0(a3)
1c00981c:	87b2                	mv	a5,a2
1c00981e:	c114                	sw	a3,0(a0)
1c009820:	853e                	mv	a0,a5
1c009822:	8082                	ret
1c009824:	c11c                	sw	a5,0(a0)
1c009826:	87b2                	mv	a5,a2
1c009828:	b7e1                	j	1c0097f0 <pos_alloc+0x22>
1c00982a:	4781                	li	a5,0
1c00982c:	b7d1                	j	1c0097f0 <pos_alloc+0x22>

1c00982e <pos_allocs_init>:
1c00982e:	1141                	addi	sp,sp,-16
1c009830:	1c0065b7          	lui	a1,0x1c006
1c009834:	c606                	sw	ra,12(sp)
1c009836:	b0c58793          	addi	a5,a1,-1268 # 1c005b0c <__l2_priv0_end>
1c00983a:	1c008637          	lui	a2,0x1c008
1c00983e:	04c7cc63          	blt	a5,a2,1c009896 <pos_allocs_init+0x68>
1c009842:	4581                	li	a1,0
1c009844:	4601                	li	a2,0
1c009846:	1c006537          	lui	a0,0x1c006
1c00984a:	afc50513          	addi	a0,a0,-1284 # 1c005afc <pos_alloc_l2>
1c00984e:	3785                	jal	1c0097ae <pos_alloc_init>
1c009850:	1c00a5b7          	lui	a1,0x1c00a
1c009854:	ab458793          	addi	a5,a1,-1356 # 1c009ab4 <__l2_priv1_end>
1c009858:	1c010637          	lui	a2,0x1c010
1c00985c:	02c7c963          	blt	a5,a2,1c00988e <pos_allocs_init+0x60>
1c009860:	4581                	li	a1,0
1c009862:	4601                	li	a2,0
1c009864:	1c006537          	lui	a0,0x1c006
1c009868:	b0050513          	addi	a0,a0,-1280 # 1c005b00 <pos_alloc_l2+0x4>
1c00986c:	3789                	jal	1c0097ae <pos_alloc_init>
1c00986e:	100025b7          	lui	a1,0x10002
1c009872:	40b2                	lw	ra,12(sp)
1c009874:	a9058793          	addi	a5,a1,-1392 # 10001a90 <__l2_shared_end>
1c009878:	1c080637          	lui	a2,0x1c080
1c00987c:	1c006537          	lui	a0,0x1c006
1c009880:	8e1d                	sub	a2,a2,a5
1c009882:	a9058593          	addi	a1,a1,-1392
1c009886:	b0450513          	addi	a0,a0,-1276 # 1c005b04 <pos_alloc_l2+0x8>
1c00988a:	0141                	addi	sp,sp,16
1c00988c:	b70d                	j	1c0097ae <pos_alloc_init>
1c00988e:	8e1d                	sub	a2,a2,a5
1c009890:	ab458593          	addi	a1,a1,-1356
1c009894:	bfc1                	j	1c009864 <pos_allocs_init+0x36>
1c009896:	8e1d                	sub	a2,a2,a5
1c009898:	b0c58593          	addi	a1,a1,-1268
1c00989c:	b76d                	j	1c009846 <pos_allocs_init+0x18>

1c00989e <alloc_init_l1>:
1c00989e:	100027b7          	lui	a5,0x10002
1c0098a2:	01651593          	slli	a1,a0,0x16
1c0098a6:	a9078793          	addi	a5,a5,-1392 # 10001a90 <__l2_shared_end>
1c0098aa:	95be                	add	a1,a1,a5
1c0098ac:	1c0067b7          	lui	a5,0x1c006
1c0098b0:	050a                	slli	a0,a0,0x2
1c0098b2:	6639                	lui	a2,0xe
1c0098b4:	af878793          	addi	a5,a5,-1288 # 1c005af8 <pos_alloc_l1>
1c0098b8:	57060613          	addi	a2,a2,1392 # e570 <__l1_heap_size>
1c0098bc:	953e                	add	a0,a0,a5
1c0098be:	bdc5                	j	1c0097ae <pos_alloc_init>

1c0098c0 <pi_l1_malloc>:
1c0098c0:	1c0067b7          	lui	a5,0x1c006
1c0098c4:	050a                	slli	a0,a0,0x2
1c0098c6:	af878793          	addi	a5,a5,-1288 # 1c005af8 <pos_alloc_l1>
1c0098ca:	953e                	add	a0,a0,a5
1c0098cc:	b709                	j	1c0097ce <pos_alloc>

1c0098ce <__rt_handle_illegal_instr>:
1c0098ce:	8082                	ret

1c0098d0 <pos_irq_init>:
1c0098d0:	f14027f3          	csrr	a5,mhartid
1c0098d4:	477d                	li	a4,31
1c0098d6:	ca5797b3          	p.extractu	a5,a5,5,5
1c0098da:	00e78f63          	beq	a5,a4,1c0098f8 <pos_irq_init+0x28>
1c0098de:	002047b7          	lui	a5,0x204
1c0098e2:	577d                	li	a4,-1
1c0098e4:	cb98                	sw	a4,16(a5)
1c0098e6:	1c0087b7          	lui	a5,0x1c008
1c0098ea:	00078793          	mv	a5,a5
1c0098ee:	c007c7b3          	p.bset	a5,a5,0,0
1c0098f2:	30579073          	csrw	mtvec,a5
1c0098f6:	8082                	ret
1c0098f8:	1a10a7b7          	lui	a5,0x1a10a
1c0098fc:	577d                	li	a4,-1
1c0098fe:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa107d78>
1c009902:	1c0087b7          	lui	a5,0x1c008
1c009906:	00078793          	mv	a5,a5
1c00990a:	c007c7b3          	p.bset	a5,a5,0,0
1c00990e:	30579073          	csrw	mtvec,a5
1c009912:	8082                	ret

1c009914 <pos_soc_event_init>:
1c009914:	1a1067b7          	lui	a5,0x1a106
1c009918:	577d                	li	a4,-1
1c00991a:	00478693          	addi	a3,a5,4 # 1a106004 <__l2_shared_end+0xa104574>
1c00991e:	c298                	sw	a4,0(a3)
1c009920:	00878693          	addi	a3,a5,8
1c009924:	c298                	sw	a4,0(a3)
1c009926:	00c78693          	addi	a3,a5,12
1c00992a:	c298                	sw	a4,0(a3)
1c00992c:	01078693          	addi	a3,a5,16
1c009930:	c298                	sw	a4,0(a3)
1c009932:	01478693          	addi	a3,a5,20
1c009936:	c298                	sw	a4,0(a3)
1c009938:	01878693          	addi	a3,a5,24
1c00993c:	c298                	sw	a4,0(a3)
1c00993e:	01c78693          	addi	a3,a5,28
1c009942:	c298                	sw	a4,0(a3)
1c009944:	02078793          	addi	a5,a5,32
1c009948:	c398                	sw	a4,0(a5)
1c00994a:	8082                	ret

1c00994c <bench_cluster_forward>:
1c00994c:	f14027f3          	csrr	a5,mhartid
1c009950:	ca5797b3          	p.extractu	a5,a5,5,5
1c009954:	02a78063          	beq	a5,a0,1c009974 <bench_cluster_forward+0x28>
1c009958:	1c0085b7          	lui	a1,0x1c008
1c00995c:	1141                	addi	sp,sp,-16
1c00995e:	2d858593          	addi	a1,a1,728 # 1c0082d8 <main>
1c009962:	c422                	sw	s0,8(sp)
1c009964:	c606                	sw	ra,12(sp)
1c009966:	842a                	mv	s0,a0
1c009968:	2085                	jal	1c0099c8 <cluster_start>
1c00996a:	8522                	mv	a0,s0
1c00996c:	4422                	lw	s0,8(sp)
1c00996e:	40b2                	lw	ra,12(sp)
1c009970:	0141                	addi	sp,sp,16
1c009972:	a235                	j	1c009a9e <cluster_wait>
1c009974:	4501                	li	a0,0
1c009976:	8082                	ret

1c009978 <cluster_entry_stub>:
1c009978:	1141                	addi	sp,sp,-16
1c00997a:	c606                	sw	ra,12(sp)
1c00997c:	002047b7          	lui	a5,0x204
1c009980:	00070737          	lui	a4,0x70
1c009984:	c798                	sw	a4,8(a5)
1c009986:	0ff00713          	li	a4,255
1c00998a:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f5c90>
1c00998e:	00e7a023          	sw	a4,0(a5)
1c009992:	00e7a623          	sw	a4,12(a5)
1c009996:	1c0067b7          	lui	a5,0x1c006
1c00999a:	b087a783          	lw	a5,-1272(a5) # 1c005b08 <cluster_entry>
1c00999e:	9782                	jalr	a5
1c0099a0:	f14027f3          	csrr	a5,mhartid
1c0099a4:	f457b7b3          	p.bclr	a5,a5,26,5
1c0099a8:	eb89                	bnez	a5,1c0099ba <cluster_entry_stub+0x42>
1c0099aa:	1c006737          	lui	a4,0x1c006
1c0099ae:	1c0067b7          	lui	a5,0x1c006
1c0099b2:	aea72823          	sw	a0,-1296(a4) # 1c005af0 <_edata>
1c0099b6:	ae07aa23          	sw	zero,-1292(a5) # 1c005af4 <cluster_running>
1c0099ba:	002047b7          	lui	a5,0x204
1c0099be:	577d                	li	a4,-1
1c0099c0:	c3d8                	sw	a4,4(a5)
1c0099c2:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f5ac8>
1c0099c6:	a001                	j	1c0099c6 <cluster_entry_stub+0x4e>

1c0099c8 <cluster_start>:
1c0099c8:	1141                	addi	sp,sp,-16
1c0099ca:	1c0067b7          	lui	a5,0x1c006
1c0099ce:	c226                	sw	s1,4(sp)
1c0099d0:	84aa                	mv	s1,a0
1c0099d2:	4509                	li	a0,2
1c0099d4:	b0b7a423          	sw	a1,-1272(a5) # 1c005b08 <cluster_entry>
1c0099d8:	c606                	sw	ra,12(sp)
1c0099da:	c422                	sw	s0,8(sp)
1c0099dc:	941fe0ef          	jal	ra,1c00831c <pos_fll_init>
1c0099e0:	8526                	mv	a0,s1
1c0099e2:	3d75                	jal	1c00989e <alloc_init_l1>
1c0099e4:	04048413          	addi	s0,s1,64
1c0099e8:	00201737          	lui	a4,0x201
1c0099ec:	40070713          	addi	a4,a4,1024 # 201400 <__l1_heap_size+0x1f2e90>
1c0099f0:	045a                	slli	s0,s0,0x16
1c0099f2:	56fd                	li	a3,-1
1c0099f4:	f14027f3          	csrr	a5,mhartid
1c0099f8:	00d46723          	p.sw	a3,a4(s0)
1c0099fc:	ca5797b3          	p.extractu	a5,a5,5,5
1c009a00:	477d                	li	a4,31
1c009a02:	00e78f63          	beq	a5,a4,1c009a20 <cluster_start+0x58>
1c009a06:	002047b7          	lui	a5,0x204
1c009a0a:	00070737          	lui	a4,0x70
1c009a0e:	c798                	sw	a4,8(a5)
1c009a10:	0ff00713          	li	a4,255
1c009a14:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f5c90>
1c009a18:	00e7a023          	sw	a4,0(a5)
1c009a1c:	00e7a623          	sw	a4,12(a5)
1c009a20:	8526                	mv	a0,s1
1c009a22:	3db5                	jal	1c00989e <alloc_init_l1>
1c009a24:	6591                	lui	a1,0x4
1c009a26:	8526                	mv	a0,s1
1c009a28:	3d61                	jal	1c0098c0 <pi_l1_malloc>
1c009a2a:	100027b7          	lui	a5,0x10002
1c009a2e:	a8a7a623          	sw	a0,-1396(a5) # 10001a8c <cluster_stacks>
1c009a32:	c12d                	beqz	a0,1c009a94 <cluster_start+0xcc>
1c009a34:	1c006737          	lui	a4,0x1c006
1c009a38:	4685                	li	a3,1
1c009a3a:	aed72a23          	sw	a3,-1292(a4) # 1c005af4 <cluster_running>
1c009a3e:	002007b7          	lui	a5,0x200
1c009a42:	1c008737          	lui	a4,0x1c008
1c009a46:	08070713          	addi	a4,a4,128 # 1c008080 <_start>
1c009a4a:	04078693          	addi	a3,a5,64 # 200040 <__l1_heap_size+0x1f1ad0>
1c009a4e:	00e466a3          	p.sw	a4,a3(s0)
1c009a52:	04478693          	addi	a3,a5,68
1c009a56:	00e466a3          	p.sw	a4,a3(s0)
1c009a5a:	04878693          	addi	a3,a5,72
1c009a5e:	00e466a3          	p.sw	a4,a3(s0)
1c009a62:	04c78693          	addi	a3,a5,76
1c009a66:	00e466a3          	p.sw	a4,a3(s0)
1c009a6a:	05078693          	addi	a3,a5,80
1c009a6e:	00e466a3          	p.sw	a4,a3(s0)
1c009a72:	05478693          	addi	a3,a5,84
1c009a76:	00e466a3          	p.sw	a4,a3(s0)
1c009a7a:	05878693          	addi	a3,a5,88
1c009a7e:	00e466a3          	p.sw	a4,a3(s0)
1c009a82:	05c78693          	addi	a3,a5,92
1c009a86:	00e466a3          	p.sw	a4,a3(s0)
1c009a8a:	07a1                	addi	a5,a5,8
1c009a8c:	0ff00713          	li	a4,255
1c009a90:	00e467a3          	p.sw	a4,a5(s0)
1c009a94:	40b2                	lw	ra,12(sp)
1c009a96:	4422                	lw	s0,8(sp)
1c009a98:	4492                	lw	s1,4(sp)
1c009a9a:	0141                	addi	sp,sp,16
1c009a9c:	8082                	ret

1c009a9e <cluster_wait>:
1c009a9e:	1c006737          	lui	a4,0x1c006
1c009aa2:	af470713          	addi	a4,a4,-1292 # 1c005af4 <cluster_running>
1c009aa6:	431c                	lw	a5,0(a4)
1c009aa8:	fffd                	bnez	a5,1c009aa6 <cluster_wait+0x8>
1c009aaa:	1c0067b7          	lui	a5,0x1c006
1c009aae:	af07a503          	lw	a0,-1296(a5) # 1c005af0 <_edata>
1c009ab2:	8082                	ret
make[1]: Leaving directory `/scratch/prasadar/siracusa-fe/regression_tests/power_tests/N_EUREKA/ki32_ko32_ho6_wo6'
