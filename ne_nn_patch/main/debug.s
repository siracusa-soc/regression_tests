
build/ne16_test/ne16_test:     file format elf32-littleriscv


Disassembly of section .vectors:

1c019300 <__irq_vector_base>:
1c019300:	52a0006f          	j	1c01982a <__rt_handle_illegal_instr>
1c019304:	0840006f          	j	1c019388 <pos_no_irq_handler>
1c019308:	0800006f          	j	1c019388 <pos_no_irq_handler>
1c01930c:	07c0006f          	j	1c019388 <pos_no_irq_handler>
1c019310:	0780006f          	j	1c019388 <pos_no_irq_handler>
1c019314:	0740006f          	j	1c019388 <pos_no_irq_handler>
1c019318:	0700006f          	j	1c019388 <pos_no_irq_handler>
1c01931c:	06c0006f          	j	1c019388 <pos_no_irq_handler>
1c019320:	0680006f          	j	1c019388 <pos_no_irq_handler>
1c019324:	0640006f          	j	1c019388 <pos_no_irq_handler>
1c019328:	0600006f          	j	1c019388 <pos_no_irq_handler>
1c01932c:	05c0006f          	j	1c019388 <pos_no_irq_handler>
1c019330:	0580006f          	j	1c019388 <pos_no_irq_handler>
1c019334:	0540006f          	j	1c019388 <pos_no_irq_handler>
1c019338:	0500006f          	j	1c019388 <pos_no_irq_handler>
1c01933c:	04c0006f          	j	1c019388 <pos_no_irq_handler>
1c019340:	0480006f          	j	1c019388 <pos_no_irq_handler>
1c019344:	0440006f          	j	1c019388 <pos_no_irq_handler>
1c019348:	0400006f          	j	1c019388 <pos_no_irq_handler>
1c01934c:	03c0006f          	j	1c019388 <pos_no_irq_handler>
1c019350:	0380006f          	j	1c019388 <pos_no_irq_handler>
1c019354:	0340006f          	j	1c019388 <pos_no_irq_handler>
1c019358:	0300006f          	j	1c019388 <pos_no_irq_handler>
1c01935c:	02c0006f          	j	1c019388 <pos_no_irq_handler>
1c019360:	0280006f          	j	1c019388 <pos_no_irq_handler>
1c019364:	0240006f          	j	1c019388 <pos_no_irq_handler>
1c019368:	0200006f          	j	1c019388 <pos_no_irq_handler>
1c01936c:	01c0006f          	j	1c019388 <pos_no_irq_handler>
1c019370:	0180006f          	j	1c019388 <pos_no_irq_handler>
1c019374:	0140006f          	j	1c019388 <pos_no_irq_handler>
1c019378:	0100006f          	j	1c019388 <pos_no_irq_handler>
1c01937c:	00c0006f          	j	1c019388 <pos_no_irq_handler>

1c019380 <_start>:
1c019380:	0640006f          	j	1c0193e4 <_stext>

1c019384 <pos_illegal_instr>:
1c019384:	4a60006f          	j	1c01982a <__rt_handle_illegal_instr>

1c019388 <pos_no_irq_handler>:
1c019388:	30200073          	mret

1c01938c <pos_semihosting_call>:
1c01938c:	00100073          	ebreak
1c019390:	00008067          	ret

1c019394 <pe_start>:
1c019394:	f3fe7117          	auipc	sp,0xf3fe7
1c019398:	c7010113          	addi	sp,sp,-912 # 10000004 <cluster_stacks>
1c01939c:	00012103          	lw	sp,0(sp)
1c0193a0:	000011b7          	lui	gp,0x1
1c0193a4:	80018193          	addi	gp,gp,-2048 # 800 <__cluster_text_size+0x800>
1c0193a8:	00158593          	addi	a1,a1,1
1c0193ac:	02b180b3          	mul	ra,gp,a1
1c0193b0:	00110133          	add	sp,sp,ra
1c0193b4:	4f40006f          	j	1c0198a8 <cluster_entry_stub>

1c0193b8 <do_cl_boot>:
1c0193b8:	10200137          	lui	sp,0x10200
1c0193bc:	00100193          	li	gp,1
1c0193c0:	00000217          	auipc	tp,0x0
1c0193c4:	fc020213          	addi	tp,tp,-64 # 1c019380 <_start>
1c0193c8:	04412023          	sw	tp,64(sp) # 10200040 <__l1_end+0x200038>
1c0193cc:	00312423          	sw	gp,8(sp)

1c0193d0 <loop>:
1c0193d0:	1a10a137          	lui	sp,0x1a10a
1c0193d4:	80010113          	addi	sp,sp,-2048 # 1a109800 <__l1_end+0xa1097f8>
1c0193d8:	00012023          	sw	zero,0(sp)
1c0193dc:	10500073          	wfi
1c0193e0:	ff1ff06f          	j	1c0193d0 <loop>

Disassembly of section .text:

1c0193e4 <_stext>:
1c0193e4:	f1402573          	csrr	a0,mhartid
1c0193e8:	01f57593          	andi	a1,a0,31
1c0193ec:	8115                	srli	a0,a0,0x5
1c0193ee:	467d                	li	a2,31
1c0193f0:	00c50463          	beq	a0,a2,1c0193f8 <_stext+0x14>
1c0193f4:	fa1ff06f          	j	1c019394 <pe_start>
1c0193f8:	00000297          	auipc	t0,0x0
1c0193fc:	e1828293          	addi	t0,t0,-488 # 1c019210 <cluster_retval>
1c019400:	00000317          	auipc	t1,0x0
1c019404:	e2c30313          	addi	t1,t1,-468 # 1c01922c <__l2_priv0_end>
1c019408:	0002a023          	sw	zero,0(t0)
1c01940c:	0291                	addi	t0,t0,4
1c01940e:	fe62ede3          	bltu	t0,t1,1c019408 <_stext+0x24>
1c019412:	fffe7117          	auipc	sp,0xfffe7
1c019416:	41e10113          	addi	sp,sp,1054 # 1c000830 <ne16_cfg4>
1c01941a:	276000ef          	jal	ra,1c019690 <pos_init_start>
1c01941e:	00000513          	li	a0,0
1c019422:	00000593          	li	a1,0
1c019426:	00000397          	auipc	t2,0x0
1c01942a:	14e38393          	addi	t2,t2,334 # 1c019574 <main>
1c01942e:	000380e7          	jalr	t2
1c019432:	842a                	mv	s0,a0
1c019434:	2ae000ef          	jal	ra,1c0196e2 <pos_init_stop>
1c019438:	8522                	mv	a0,s0
1c01943a:	23c000ef          	jal	ra,1c019676 <exit>

1c01943e <run_test>:
1c01943e:	1101                	addi	sp,sp,-32
1c019440:	1c0197b7          	lui	a5,0x1c019
1c019444:	ce06                	sw	ra,28(sp)
1c019446:	a1078793          	addi	a5,a5,-1520 # 1c018a10 <ne16_weights4>
1c01944a:	20800737          	lui	a4,0x20800
1c01944e:	0806d0fb          	lp.setupi	x1,128,1c019468 <run_test+0x2a>
1c019452:	0007a803          	lw	a6,0(a5)
1c019456:	43c8                	lw	a0,4(a5)
1c019458:	478c                	lw	a1,8(a5)
1c01945a:	47d0                	lw	a2,12(a5)
1c01945c:	01072023          	sw	a6,0(a4) # 20800000 <__l2_priv1_end+0x47e6658>
1c019460:	c348                	sw	a0,4(a4)
1c019462:	c70c                	sw	a1,8(a4)
1c019464:	c750                	sw	a2,12(a4)
1c019466:	07c1                	addi	a5,a5,16
1c019468:	0741                	addi	a4,a4,16
1c01946a:	102007b7          	lui	a5,0x10200
1c01946e:	07e1                	addi	a5,a5,24
1c019470:	4398                	lw	a4,0(a5)
1c019472:	c0b74733          	p.bset	a4,a4,0,11
1c019476:	c398                	sw	a4,0(a5)
1c019478:	4398                	lw	a4,0(a5)
1c01947a:	c0874733          	p.bset	a4,a4,0,8
1c01947e:	c398                	sw	a4,0(a5)
1c019480:	4398                	lw	a4,0(a5)
1c019482:	ce073733          	p.bclr	a4,a4,7,0
1c019486:	c398                	sw	a4,0(a5)
1c019488:	4398                	lw	a4,0(a5)
1c01948a:	c0374733          	p.bset	a4,a4,0,3
1c01948e:	c398                	sw	a4,0(a5)
1c019490:	102017b7          	lui	a5,0x10201
1c019494:	0007aa23          	sw	zero,20(a5) # 10201014 <__l1_end+0x20100c>
1c019498:	c602                	sw	zero,12(sp)
1c01949a:	4732                	lw	a4,12(sp)
1c01949c:	47a5                	li	a5,9
1c01949e:	00e7c963          	blt	a5,a4,1c0194b0 <run_test+0x72>
1c0194a2:	4725                	li	a4,9
1c0194a4:	47b2                	lw	a5,12(sp)
1c0194a6:	0785                	addi	a5,a5,1
1c0194a8:	c63e                	sw	a5,12(sp)
1c0194aa:	47b2                	lw	a5,12(sp)
1c0194ac:	fef75ce3          	bge	a4,a5,1c0194a4 <run_test+0x66>
1c0194b0:	10201637          	lui	a2,0x10201
1c0194b4:	0611                	addi	a2,a2,4
1c0194b6:	421c                	lw	a5,0(a2)
1c0194b8:	0007dc63          	bgez	a5,1c0194d0 <run_test+0x92>
1c0194bc:	6705                	lui	a4,0x1
1c0194be:	002047b7          	lui	a5,0x204
1c0194c2:	c798                	sw	a4,8(a5)
1c0194c4:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1c4044>
1c0194c8:	c3d8                	sw	a4,4(a5)
1c0194ca:	4214                	lw	a3,0(a2)
1c0194cc:	fe06cbe3          	bltz	a3,1c0194c2 <run_test+0x84>
1c0194d0:	102015b7          	lui	a1,0x10201
1c0194d4:	02058593          	addi	a1,a1,32 # 10201020 <__l1_end+0x201018>
1c0194d8:	004007b7          	lui	a5,0x400
1c0194dc:	00f5a023          	sw	a5,0(a1)
1c0194e0:	1c0017b7          	lui	a5,0x1c001
1c0194e4:	89078793          	addi	a5,a5,-1904 # 1c000890 <ne16_infeat4>
1c0194e8:	00f5a223          	sw	a5,4(a1)
1c0194ec:	1c0097b7          	lui	a5,0x1c009
1c0194f0:	a1078793          	addi	a5,a5,-1520 # 1c008a10 <ne16_streamin4>
1c0194f4:	00f5a423          	sw	a5,8(a1)
1c0194f8:	1c0097b7          	lui	a5,0x1c009
1c0194fc:	89078793          	addi	a5,a5,-1904 # 1c008890 <ne16_scale4>
1c019500:	00f5a623          	sw	a5,12(a1)
1c019504:	1c0097b7          	lui	a5,0x1c009
1c019508:	9d078793          	addi	a5,a5,-1584 # 1c0089d0 <ne16_scale_shift4>
1c01950c:	00f5a823          	sw	a5,16(a1)
1c019510:	1c0097b7          	lui	a5,0x1c009
1c019514:	8d078793          	addi	a5,a5,-1840 # 1c0088d0 <ne16_scale_bias4>
1c019518:	00f5aa23          	sw	a5,20(a1)
1c01951c:	1c001537          	lui	a0,0x1c001
1c019520:	4719                	li	a4,6
1c019522:	83050513          	addi	a0,a0,-2000 # 1c000830 <ne16_cfg4>
1c019526:	012450fb          	lp.setupi	x1,18,1c019536 <run_test+0xf8>
1c01952a:	00271693          	slli	a3,a4,0x2
1c01952e:	20d57603          	p.lw	a2,a3(a0)
1c019532:	00c5e6a3          	p.sw	a2,a3(a1)
1c019536:	0705                	addi	a4,a4,1
1c019538:	10201637          	lui	a2,0x10201
1c01953c:	00062023          	sw	zero,0(a2) # 10201000 <__l1_end+0x200ff8>
1c019540:	6705                	lui	a4,0x1
1c019542:	002047b7          	lui	a5,0x204
1c019546:	0631                	addi	a2,a2,12
1c019548:	c798                	sw	a4,8(a5)
1c01954a:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1c4044>
1c01954e:	c3d8                	sw	a4,4(a5)
1c019550:	4214                	lw	a3,0(a2)
1c019552:	fafd                	bnez	a3,1c019548 <run_test+0x10a>
1c019554:	102007b7          	lui	a5,0x10200
1c019558:	07e1                	addi	a5,a5,24
1c01955a:	4398                	lw	a4,0(a5)
1c01955c:	1c000537          	lui	a0,0x1c000
1c019560:	01c50513          	addi	a0,a0,28 # 1c00001c <__DTOR_END__>
1c019564:	c0b73733          	p.bclr	a4,a4,0,11
1c019568:	c398                	sw	a4,0(a5)
1c01956a:	20e5                	jal	1c019652 <puts>
1c01956c:	40f2                	lw	ra,28(sp)
1c01956e:	4501                	li	a0,0
1c019570:	6105                	addi	sp,sp,32
1c019572:	8082                	ret

1c019574 <main>:
1c019574:	b5e9                	j	1c01943e <run_test>

1c019576 <pos_fll_init>:
1c019576:	08152063          	p.beqimm	a0,1,1c0195f6 <pos_fll_init+0x80>
1c01957a:	04252a63          	p.beqimm	a0,2,1c0195ce <pos_fll_init+0x58>
1c01957e:	c505                	beqz	a0,1c0195a6 <pos_fll_init+0x30>
1c019580:	4701                	li	a4,0
1c019582:	00470793          	addi	a5,a4,4 # 1004 <__cluster_text_size+0x1004>
1c019586:	05300613          	li	a2,83
1c01958a:	00c70693          	addi	a3,a4,12
1c01958e:	c390                	sw	a2,0(a5)
1c019590:	020c17b7          	lui	a5,0x20c1
1c019594:	0721                	addi	a4,a4,8
1c019596:	0006a023          	sw	zero,0(a3)
1c01959a:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20817e2>
1c01959e:	c31c                	sw	a5,0(a4)
1c0195a0:	05f68537          	lui	a0,0x5f68
1c0195a4:	8082                	ret
1c0195a6:	1a1007b7          	lui	a5,0x1a100
1c0195aa:	00878713          	addi	a4,a5,8 # 1a100008 <__l1_end+0xa100000>
1c0195ae:	00c78693          	addi	a3,a5,12
1c0195b2:	05300613          	li	a2,83
1c0195b6:	0791                	addi	a5,a5,4
1c0195b8:	c390                	sw	a2,0(a5)
1c0195ba:	020c17b7          	lui	a5,0x20c1
1c0195be:	0006a023          	sw	zero,0(a3)
1c0195c2:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20817e2>
1c0195c6:	c31c                	sw	a5,0(a4)
1c0195c8:	05f68537          	lui	a0,0x5f68
1c0195cc:	8082                	ret
1c0195ce:	1a1007b7          	lui	a5,0x1a100
1c0195d2:	01878713          	addi	a4,a5,24 # 1a100018 <__l1_end+0xa100010>
1c0195d6:	01c78693          	addi	a3,a5,28
1c0195da:	05300613          	li	a2,83
1c0195de:	07d1                	addi	a5,a5,20
1c0195e0:	c390                	sw	a2,0(a5)
1c0195e2:	020c17b7          	lui	a5,0x20c1
1c0195e6:	0006a023          	sw	zero,0(a3)
1c0195ea:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20817e2>
1c0195ee:	c31c                	sw	a5,0(a4)
1c0195f0:	05f68537          	lui	a0,0x5f68
1c0195f4:	8082                	ret
1c0195f6:	1a1007b7          	lui	a5,0x1a100
1c0195fa:	02878713          	addi	a4,a5,40 # 1a100028 <__l1_end+0xa100020>
1c0195fe:	02c78693          	addi	a3,a5,44
1c019602:	05300613          	li	a2,83
1c019606:	02478793          	addi	a5,a5,36
1c01960a:	c390                	sw	a2,0(a5)
1c01960c:	020c17b7          	lui	a5,0x20c1
1c019610:	0006a023          	sw	zero,0(a3)
1c019614:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20817e2>
1c019618:	c31c                	sw	a5,0(a4)
1c01961a:	05f68537          	lui	a0,0x5f68
1c01961e:	8082                	ret

1c019620 <pos_soc_init>:
1c019620:	8082                	ret

1c019622 <pos_wait_forever>:
1c019622:	f14027f3          	csrr	a5,mhartid
1c019626:	477d                	li	a4,31
1c019628:	ca5797b3          	p.extractu	a5,a5,5,5
1c01962c:	00e78963          	beq	a5,a4,1c01963e <pos_wait_forever+0x1c>
1c019630:	002047b7          	lui	a5,0x204
1c019634:	577d                	li	a4,-1
1c019636:	c3d8                	sw	a4,4(a5)
1c019638:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1c4040>
1c01963c:	a001                	j	1c01963c <pos_wait_forever+0x1a>
1c01963e:	1a10a7b7          	lui	a5,0x1a10a
1c019642:	577d                	li	a4,-1
1c019644:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l1_end+0xa109800>
1c019648:	10500073          	wfi
1c01964c:	10500073          	wfi
1c019650:	bfe5                	j	1c019648 <pos_wait_forever+0x26>

1c019652 <puts>:
1c019652:	00054783          	lbu	a5,0(a0) # 5f68000 <__l1_heap_size+0x5f28008>
1c019656:	1a104737          	lui	a4,0x1a104
1c01965a:	02070713          	addi	a4,a4,32 # 1a104020 <__l1_end+0xa104018>
1c01965e:	c791                	beqz	a5,1c01966a <puts+0x18>
1c019660:	c31c                	sw	a5,0(a4)
1c019662:	0505                	addi	a0,a0,1
1c019664:	00054783          	lbu	a5,0(a0)
1c019668:	ffe5                	bnez	a5,1c019660 <puts+0xe>
1c01966a:	1a1047b7          	lui	a5,0x1a104
1c01966e:	4729                	li	a4,10
1c019670:	d398                	sw	a4,32(a5)
1c019672:	4501                	li	a0,0
1c019674:	8082                	ret

1c019676 <exit>:
1c019676:	1141                	addi	sp,sp,-16
1c019678:	c606                	sw	ra,12(sp)
1c01967a:	1a1047b7          	lui	a5,0x1a104
1c01967e:	c1f54533          	p.bset	a0,a0,0,31
1c019682:	0aa7a023          	sw	a0,160(a5) # 1a1040a0 <__l1_end+0xa104098>
1c019686:	3f71                	jal	1c019622 <pos_wait_forever>

1c019688 <pos_io_start>:
1c019688:	4501                	li	a0,0
1c01968a:	8082                	ret

1c01968c <pos_io_stop>:
1c01968c:	4501                	li	a0,0
1c01968e:	8082                	ret

1c019690 <pos_init_start>:
1c019690:	1141                	addi	sp,sp,-16
1c019692:	c422                	sw	s0,8(sp)
1c019694:	1c000437          	lui	s0,0x1c000
1c019698:	c606                	sw	ra,12(sp)
1c01969a:	00840413          	addi	s0,s0,8 # 1c000008 <ctor_list>
1c01969e:	3749                	jal	1c019620 <pos_soc_init>
1c0196a0:	2271                	jal	1c01982c <pos_irq_init>
1c0196a2:	22f9                	jal	1c019870 <pos_soc_event_init>
1c0196a4:	20d5                	jal	1c019788 <pos_allocs_init>
1c0196a6:	405c                	lw	a5,4(s0)
1c0196a8:	c791                	beqz	a5,1c0196b4 <pos_init_start+0x24>
1c0196aa:	0411                	addi	s0,s0,4
1c0196ac:	0411                	addi	s0,s0,4
1c0196ae:	9782                	jalr	a5
1c0196b0:	401c                	lw	a5,0(s0)
1c0196b2:	ffed                	bnez	a5,1c0196ac <pos_init_start+0x1c>
1c0196b4:	3fd1                	jal	1c019688 <pos_io_start>
1c0196b6:	300467f3          	csrrsi	a5,mstatus,8
1c0196ba:	f1402573          	csrr	a0,mhartid
1c0196be:	8515                	srai	a0,a0,0x5
1c0196c0:	f2653533          	p.bclr	a0,a0,25,6
1c0196c4:	47fd                	li	a5,31
1c0196c6:	00f50a63          	beq	a0,a5,1c0196da <pos_init_start+0x4a>
1c0196ca:	4422                	lw	s0,8(sp)
1c0196cc:	40b2                	lw	ra,12(sp)
1c0196ce:	1c0195b7          	lui	a1,0x1c019
1c0196d2:	57458593          	addi	a1,a1,1396 # 1c019574 <main>
1c0196d6:	0141                	addi	sp,sp,16
1c0196d8:	a405                	j	1c0198f8 <cluster_start>
1c0196da:	40b2                	lw	ra,12(sp)
1c0196dc:	4422                	lw	s0,8(sp)
1c0196de:	0141                	addi	sp,sp,16
1c0196e0:	8082                	ret

1c0196e2 <pos_init_stop>:
1c0196e2:	1141                	addi	sp,sp,-16
1c0196e4:	c422                	sw	s0,8(sp)
1c0196e6:	1c000437          	lui	s0,0x1c000
1c0196ea:	c606                	sw	ra,12(sp)
1c0196ec:	01440413          	addi	s0,s0,20 # 1c000014 <dtor_list>
1c0196f0:	3f71                	jal	1c01968c <pos_io_stop>
1c0196f2:	405c                	lw	a5,4(s0)
1c0196f4:	c791                	beqz	a5,1c019700 <pos_init_stop+0x1e>
1c0196f6:	0411                	addi	s0,s0,4
1c0196f8:	0411                	addi	s0,s0,4
1c0196fa:	9782                	jalr	a5
1c0196fc:	401c                	lw	a5,0(s0)
1c0196fe:	ffed                	bnez	a5,1c0196f8 <pos_init_stop+0x16>
1c019700:	40b2                	lw	ra,12(sp)
1c019702:	4422                	lw	s0,8(sp)
1c019704:	0141                	addi	sp,sp,16
1c019706:	8082                	ret

1c019708 <pos_alloc_init>:
1c019708:	00758793          	addi	a5,a1,7
1c01970c:	c407b7b3          	p.bclr	a5,a5,2,0
1c019710:	40b785b3          	sub	a1,a5,a1
1c019714:	c11c                	sw	a5,0(a0)
1c019716:	8e0d                	sub	a2,a2,a1
1c019718:	00c05763          	blez	a2,1c019726 <pos_alloc_init+0x1e>
1c01971c:	c4063633          	p.bclr	a2,a2,2,0
1c019720:	c390                	sw	a2,0(a5)
1c019722:	0007a223          	sw	zero,4(a5)
1c019726:	8082                	ret

1c019728 <pos_alloc>:
1c019728:	4110                	lw	a2,0(a0)
1c01972a:	059d                	addi	a1,a1,7
1c01972c:	c405b5b3          	p.bclr	a1,a1,2,0
1c019730:	ca31                	beqz	a2,1c019784 <pos_alloc+0x5c>
1c019732:	4218                	lw	a4,0(a2)
1c019734:	425c                	lw	a5,4(a2)
1c019736:	02b75963          	bge	a4,a1,1c019768 <pos_alloc+0x40>
1c01973a:	cb81                	beqz	a5,1c01974a <pos_alloc+0x22>
1c01973c:	4398                	lw	a4,0(a5)
1c01973e:	43d4                	lw	a3,4(a5)
1c019740:	00b75763          	bge	a4,a1,1c01974e <pos_alloc+0x26>
1c019744:	863e                	mv	a2,a5
1c019746:	87b6                	mv	a5,a3
1c019748:	fbf5                	bnez	a5,1c01973c <pos_alloc+0x14>
1c01974a:	853e                	mv	a0,a5
1c01974c:	8082                	ret
1c01974e:	00b70a63          	beq	a4,a1,1c019762 <pos_alloc+0x3a>
1c019752:	00b78533          	add	a0,a5,a1
1c019756:	8f0d                	sub	a4,a4,a1
1c019758:	c118                	sw	a4,0(a0)
1c01975a:	c154                	sw	a3,4(a0)
1c01975c:	c248                	sw	a0,4(a2)
1c01975e:	853e                	mv	a0,a5
1c019760:	8082                	ret
1c019762:	c254                	sw	a3,4(a2)
1c019764:	853e                	mv	a0,a5
1c019766:	8082                	ret
1c019768:	00e58b63          	beq	a1,a4,1c01977e <pos_alloc+0x56>
1c01976c:	00b606b3          	add	a3,a2,a1
1c019770:	8f0d                	sub	a4,a4,a1
1c019772:	c2dc                	sw	a5,4(a3)
1c019774:	c298                	sw	a4,0(a3)
1c019776:	87b2                	mv	a5,a2
1c019778:	c114                	sw	a3,0(a0)
1c01977a:	853e                	mv	a0,a5
1c01977c:	8082                	ret
1c01977e:	c11c                	sw	a5,0(a0)
1c019780:	87b2                	mv	a5,a2
1c019782:	b7e1                	j	1c01974a <pos_alloc+0x22>
1c019784:	4781                	li	a5,0
1c019786:	b7d1                	j	1c01974a <pos_alloc+0x22>

1c019788 <pos_allocs_init>:
1c019788:	1141                	addi	sp,sp,-16
1c01978a:	1c0195b7          	lui	a1,0x1c019
1c01978e:	c606                	sw	ra,12(sp)
1c019790:	22c58793          	addi	a5,a1,556 # 1c01922c <__l2_priv0_end>
1c019794:	1c008637          	lui	a2,0x1c008
1c019798:	04c7cc63          	blt	a5,a2,1c0197f0 <pos_allocs_init+0x68>
1c01979c:	4581                	li	a1,0
1c01979e:	4601                	li	a2,0
1c0197a0:	1c019537          	lui	a0,0x1c019
1c0197a4:	21c50513          	addi	a0,a0,540 # 1c01921c <pos_alloc_l2>
1c0197a8:	3785                	jal	1c019708 <pos_alloc_init>
1c0197aa:	1c01a5b7          	lui	a1,0x1c01a
1c0197ae:	9a858793          	addi	a5,a1,-1624 # 1c0199a8 <__l2_priv1_end>
1c0197b2:	1c010637          	lui	a2,0x1c010
1c0197b6:	02c7c963          	blt	a5,a2,1c0197e8 <pos_allocs_init+0x60>
1c0197ba:	4581                	li	a1,0
1c0197bc:	4601                	li	a2,0
1c0197be:	1c019537          	lui	a0,0x1c019
1c0197c2:	22050513          	addi	a0,a0,544 # 1c019220 <pos_alloc_l2+0x4>
1c0197c6:	3789                	jal	1c019708 <pos_alloc_init>
1c0197c8:	100005b7          	lui	a1,0x10000
1c0197cc:	40b2                	lw	ra,12(sp)
1c0197ce:	00858793          	addi	a5,a1,8 # 10000008 <__l1_end>
1c0197d2:	1c080637          	lui	a2,0x1c080
1c0197d6:	1c019537          	lui	a0,0x1c019
1c0197da:	8e1d                	sub	a2,a2,a5
1c0197dc:	00858593          	addi	a1,a1,8
1c0197e0:	22450513          	addi	a0,a0,548 # 1c019224 <pos_alloc_l2+0x8>
1c0197e4:	0141                	addi	sp,sp,16
1c0197e6:	b70d                	j	1c019708 <pos_alloc_init>
1c0197e8:	8e1d                	sub	a2,a2,a5
1c0197ea:	9a858593          	addi	a1,a1,-1624
1c0197ee:	bfc1                	j	1c0197be <pos_allocs_init+0x36>
1c0197f0:	8e1d                	sub	a2,a2,a5
1c0197f2:	22c58593          	addi	a1,a1,556
1c0197f6:	b76d                	j	1c0197a0 <pos_allocs_init+0x18>

1c0197f8 <alloc_init_l1>:
1c0197f8:	100007b7          	lui	a5,0x10000
1c0197fc:	01651593          	slli	a1,a0,0x16
1c019800:	00878793          	addi	a5,a5,8 # 10000008 <__l1_end>
1c019804:	95be                	add	a1,a1,a5
1c019806:	1c0197b7          	lui	a5,0x1c019
1c01980a:	050a                	slli	a0,a0,0x2
1c01980c:	00040637          	lui	a2,0x40
1c019810:	21878793          	addi	a5,a5,536 # 1c019218 <pos_alloc_l1>
1c019814:	ff860613          	addi	a2,a2,-8 # 3fff8 <__l1_heap_size>
1c019818:	953e                	add	a0,a0,a5
1c01981a:	b5fd                	j	1c019708 <pos_alloc_init>

1c01981c <pi_l1_malloc>:
1c01981c:	1c0197b7          	lui	a5,0x1c019
1c019820:	050a                	slli	a0,a0,0x2
1c019822:	21878793          	addi	a5,a5,536 # 1c019218 <pos_alloc_l1>
1c019826:	953e                	add	a0,a0,a5
1c019828:	b701                	j	1c019728 <pos_alloc>

1c01982a <__rt_handle_illegal_instr>:
1c01982a:	8082                	ret

1c01982c <pos_irq_init>:
1c01982c:	f14027f3          	csrr	a5,mhartid
1c019830:	477d                	li	a4,31
1c019832:	ca5797b3          	p.extractu	a5,a5,5,5
1c019836:	00e78f63          	beq	a5,a4,1c019854 <pos_irq_init+0x28>
1c01983a:	002047b7          	lui	a5,0x204
1c01983e:	577d                	li	a4,-1
1c019840:	cb98                	sw	a4,16(a5)
1c019842:	1c0197b7          	lui	a5,0x1c019
1c019846:	30078793          	addi	a5,a5,768 # 1c019300 <__irq_vector_base>
1c01984a:	c007c7b3          	p.bset	a5,a5,0,0
1c01984e:	30579073          	csrw	mtvec,a5
1c019852:	8082                	ret
1c019854:	1a10a7b7          	lui	a5,0x1a10a
1c019858:	577d                	li	a4,-1
1c01985a:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l1_end+0xa109800>
1c01985e:	1c0197b7          	lui	a5,0x1c019
1c019862:	30078793          	addi	a5,a5,768 # 1c019300 <__irq_vector_base>
1c019866:	c007c7b3          	p.bset	a5,a5,0,0
1c01986a:	30579073          	csrw	mtvec,a5
1c01986e:	8082                	ret

1c019870 <pos_soc_event_init>:
1c019870:	1a1067b7          	lui	a5,0x1a106
1c019874:	577d                	li	a4,-1
1c019876:	00478693          	addi	a3,a5,4 # 1a106004 <__l1_end+0xa105ffc>
1c01987a:	c298                	sw	a4,0(a3)
1c01987c:	00878693          	addi	a3,a5,8
1c019880:	c298                	sw	a4,0(a3)
1c019882:	00c78693          	addi	a3,a5,12
1c019886:	c298                	sw	a4,0(a3)
1c019888:	01078693          	addi	a3,a5,16
1c01988c:	c298                	sw	a4,0(a3)
1c01988e:	01478693          	addi	a3,a5,20
1c019892:	c298                	sw	a4,0(a3)
1c019894:	01878693          	addi	a3,a5,24
1c019898:	c298                	sw	a4,0(a3)
1c01989a:	01c78693          	addi	a3,a5,28
1c01989e:	c298                	sw	a4,0(a3)
1c0198a0:	02078793          	addi	a5,a5,32
1c0198a4:	c398                	sw	a4,0(a5)
1c0198a6:	8082                	ret

1c0198a8 <cluster_entry_stub>:
1c0198a8:	1141                	addi	sp,sp,-16
1c0198aa:	c606                	sw	ra,12(sp)
1c0198ac:	002047b7          	lui	a5,0x204
1c0198b0:	00070737          	lui	a4,0x70
1c0198b4:	c798                	sw	a4,8(a5)
1c0198b6:	0ff00713          	li	a4,255
1c0198ba:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1c4208>
1c0198be:	00e7a023          	sw	a4,0(a5)
1c0198c2:	00e7a623          	sw	a4,12(a5)
1c0198c6:	1c0197b7          	lui	a5,0x1c019
1c0198ca:	2287a783          	lw	a5,552(a5) # 1c019228 <cluster_entry>
1c0198ce:	9782                	jalr	a5
1c0198d0:	f14027f3          	csrr	a5,mhartid
1c0198d4:	f457b7b3          	p.bclr	a5,a5,26,5
1c0198d8:	eb89                	bnez	a5,1c0198ea <cluster_entry_stub+0x42>
1c0198da:	1c019737          	lui	a4,0x1c019
1c0198de:	1c0197b7          	lui	a5,0x1c019
1c0198e2:	20a72823          	sw	a0,528(a4) # 1c019210 <cluster_retval>
1c0198e6:	2007aa23          	sw	zero,532(a5) # 1c019214 <cluster_running>
1c0198ea:	002047b7          	lui	a5,0x204
1c0198ee:	577d                	li	a4,-1
1c0198f0:	c3d8                	sw	a4,4(a5)
1c0198f2:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1c4040>
1c0198f6:	a001                	j	1c0198f6 <cluster_entry_stub+0x4e>

1c0198f8 <cluster_start>:
1c0198f8:	1141                	addi	sp,sp,-16
1c0198fa:	1c0197b7          	lui	a5,0x1c019
1c0198fe:	c226                	sw	s1,4(sp)
1c019900:	84aa                	mv	s1,a0
1c019902:	4509                	li	a0,2
1c019904:	22b7a423          	sw	a1,552(a5) # 1c019228 <cluster_entry>
1c019908:	c606                	sw	ra,12(sp)
1c01990a:	c422                	sw	s0,8(sp)
1c01990c:	31ad                	jal	1c019576 <pos_fll_init>
1c01990e:	8526                	mv	a0,s1
1c019910:	35e5                	jal	1c0197f8 <alloc_init_l1>
1c019912:	04048413          	addi	s0,s1,64
1c019916:	00201737          	lui	a4,0x201
1c01991a:	40070713          	addi	a4,a4,1024 # 201400 <__l1_heap_size+0x1c1408>
1c01991e:	045a                	slli	s0,s0,0x16
1c019920:	56fd                	li	a3,-1
1c019922:	f14027f3          	csrr	a5,mhartid
1c019926:	00d46723          	p.sw	a3,a4(s0)
1c01992a:	ca5797b3          	p.extractu	a5,a5,5,5
1c01992e:	477d                	li	a4,31
1c019930:	00e78f63          	beq	a5,a4,1c01994e <cluster_start+0x56>
1c019934:	002047b7          	lui	a5,0x204
1c019938:	00070737          	lui	a4,0x70
1c01993c:	c798                	sw	a4,8(a5)
1c01993e:	0ff00713          	li	a4,255
1c019942:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1c4208>
1c019946:	00e7a023          	sw	a4,0(a5)
1c01994a:	00e7a623          	sw	a4,12(a5)
1c01994e:	8526                	mv	a0,s1
1c019950:	3565                	jal	1c0197f8 <alloc_init_l1>
1c019952:	6591                	lui	a1,0x4
1c019954:	8526                	mv	a0,s1
1c019956:	35d9                	jal	1c01981c <pi_l1_malloc>
1c019958:	100007b7          	lui	a5,0x10000
1c01995c:	00a7a223          	sw	a0,4(a5) # 10000004 <cluster_stacks>
1c019960:	cd15                	beqz	a0,1c01999c <cluster_start+0xa4>
1c019962:	00200637          	lui	a2,0x200
1c019966:	1c0197b7          	lui	a5,0x1c019
1c01996a:	4705                	li	a4,1
1c01996c:	1c0195b7          	lui	a1,0x1c019
1c019970:	04060613          	addi	a2,a2,64 # 200040 <__l1_heap_size+0x1c0048>
1c019974:	20e7aa23          	sw	a4,532(a5) # 1c019214 <cluster_running>
1c019978:	38058593          	addi	a1,a1,896 # 1c019380 <_start>
1c01997c:	9622                	add	a2,a2,s0
1c01997e:	4701                	li	a4,0
1c019980:	008350fb          	lp.setupi	x1,8,1c01998c <cluster_start+0x94>
1c019984:	00271693          	slli	a3,a4,0x2
1c019988:	00b6e623          	p.sw	a1,a2(a3)
1c01998c:	0705                	addi	a4,a4,1
1c01998e:	002007b7          	lui	a5,0x200
1c019992:	07a1                	addi	a5,a5,8
1c019994:	0ff00713          	li	a4,255
1c019998:	00e467a3          	p.sw	a4,a5(s0)
1c01999c:	40b2                	lw	ra,12(sp)
1c01999e:	4422                	lw	s0,8(sp)
1c0199a0:	4492                	lw	s1,4(sp)
1c0199a2:	0141                	addi	sp,sp,16
1c0199a4:	8082                	ret

1c0199a6 <_endtext>:
	...
