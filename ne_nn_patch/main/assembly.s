Flags : -O2 -g -Istreamin_fs1_input_32x32x16x16_output_64x16x16_q32/inc -fno-tree-loop-optimize -fno-tree-loop-distribute-patterns  -DNB_RUN=1  
make[1]: Entering directory `/scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/main'
/usr/pack/pulpsdk-1.0-kgf/artifactory/pulp-sdk-release/pkg/pulp_riscv_gcc/1.0.16//bin/riscv32-unknown-elf-objdump -Mmarch=rv32imcxgap9 -d /scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/main/build/ne16_test/ne16_test

/scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/main/build/ne16_test/ne16_test:     file format elf32-littleriscv


Disassembly of section .vectors:

1c019300 <__irq_vector_base>:
1c019300:	46c0106f          	j	1c01a76c <__rt_handle_illegal_instr>
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
1c019384:	3e80106f          	j	1c01a76c <__rt_handle_illegal_instr>

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
1c0193b4:	4360106f          	j	1c01a7ea <cluster_entry_stub>

1c0193b8 <do_cl_boot>:
1c0193b8:	10200137          	lui	sp,0x10200
1c0193bc:	00100193          	li	gp,1
1c0193c0:	00000217          	auipc	tp,0x0
1c0193c4:	fc020213          	addi	tp,tp,-64 # 1c019380 <_start>
1c0193c8:	04412023          	sw	tp,64(sp) # 10200040 <__l2_shared_end+0x200038>
1c0193cc:	00312423          	sw	gp,8(sp)

1c0193d0 <loop>:
1c0193d0:	1a10a137          	lui	sp,0x1a10a
1c0193d4:	80010113          	addi	sp,sp,-2048 # 1a109800 <__l2_shared_end+0xa1097f8>
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
1c0193fc:	e3028293          	addi	t0,t0,-464 # 1c019228 <_bss_start>
1c019400:	00000317          	auipc	t1,0x0
1c019404:	e4430313          	addi	t1,t1,-444 # 1c019244 <__l2_priv0_end>
1c019408:	0002a023          	sw	zero,0(t0)
1c01940c:	0291                	addi	t0,t0,4
1c01940e:	fe62ede3          	bltu	t0,t1,1c019408 <_stext+0x24>
1c019412:	fffe7117          	auipc	sp,0xfffe7
1c019416:	42e10113          	addi	sp,sp,1070 # 1c000840 <stack>
1c01941a:	1b2010ef          	jal	ra,1c01a5cc <pos_init_start>
1c01941e:	00000513          	li	a0,0
1c019422:	00000593          	li	a1,0
1c019426:	00000397          	auipc	t2,0x0
1c01942a:	14e38393          	addi	t2,t2,334 # 1c019574 <main>
1c01942e:	000380e7          	jalr	t2
1c019432:	842a                	mv	s0,a0
1c019434:	1ee010ef          	jal	ra,1c01a622 <pos_init_stop>
1c019438:	8522                	mv	a0,s0
1c01943a:	2c8000ef          	jal	ra,1c019702 <exit>

1c01943e <run_test>:
1c01943e:	1101                	addi	sp,sp,-32
1c019440:	1c0197b7          	lui	a5,0x1c019
1c019444:	ce06                	sw	ra,28(sp)
1c019446:	a2078793          	addi	a5,a5,-1504 # 1c018a20 <ne16_weights4>
1c01944a:	20800737          	lui	a4,0x20800
1c01944e:	0806d0fb          	lp.setupi	x1,128,1c019468 <run_test+0x2a>
1c019452:	0007a803          	lw	a6,0(a5)
1c019456:	43c8                	lw	a0,4(a5)
1c019458:	478c                	lw	a1,8(a5)
1c01945a:	47d0                	lw	a2,12(a5)
1c01945c:	01072023          	sw	a6,0(a4) # 20800000 <__l2_priv1_end+0x47e5714>
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
1c019494:	0007aa23          	sw	zero,20(a5) # 10201014 <__l2_shared_end+0x20100c>
1c019498:	c602                	sw	zero,12(sp)
1c01949a:	4732                	lw	a4,12(sp)
1c01949c:	47a5                	li	a5,9
1c01949e:	00e7c963          	blt	a5,a4,1c0194b0 <run_test+0x72>
1c0194a2:	4725                	li	a4,9
1c0194a4:	47b2                	lw	a5,12(sp)
1c0194a6:	0785                	addi	a5,a5,1
1c0194a8:	c63e                	sw	a5,12(sp)
1c0194aa:	47b2                	lw	a5,12(sp)
1c0194ac:	fef75ce3          	ble	a5,a4,1c0194a4 <run_test+0x66>
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
1c0194d4:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x201018>
1c0194d8:	004007b7          	lui	a5,0x400
1c0194dc:	00f5a023          	sw	a5,0(a1)
1c0194e0:	1c0017b7          	lui	a5,0x1c001
1c0194e4:	8a078793          	addi	a5,a5,-1888 # 1c0008a0 <ne16_infeat4>
1c0194e8:	00f5a223          	sw	a5,4(a1)
1c0194ec:	1c0097b7          	lui	a5,0x1c009
1c0194f0:	a2078793          	addi	a5,a5,-1504 # 1c008a20 <ne16_streamin4>
1c0194f4:	00f5a423          	sw	a5,8(a1)
1c0194f8:	1c0097b7          	lui	a5,0x1c009
1c0194fc:	8a078793          	addi	a5,a5,-1888 # 1c0088a0 <ne16_scale4>
1c019500:	00f5a623          	sw	a5,12(a1)
1c019504:	1c0097b7          	lui	a5,0x1c009
1c019508:	9e078793          	addi	a5,a5,-1568 # 1c0089e0 <ne16_scale_shift4>
1c01950c:	00f5a823          	sw	a5,16(a1)
1c019510:	1c0097b7          	lui	a5,0x1c009
1c019514:	8e078793          	addi	a5,a5,-1824 # 1c0088e0 <ne16_scale_bias4>
1c019518:	00f5aa23          	sw	a5,20(a1)
1c01951c:	1c001537          	lui	a0,0x1c001
1c019520:	4719                	li	a4,6
1c019522:	84050513          	addi	a0,a0,-1984 # 1c000840 <stack>
1c019526:	012450fb          	lp.setupi	x1,18,1c019536 <run_test+0xf8>
1c01952a:	00271693          	slli	a3,a4,0x2
1c01952e:	20d57603          	p.lw	a2,a3(a0)
1c019532:	00c5e6a3          	p.sw	a2,a3(a1)
1c019536:	0705                	addi	a4,a4,1
1c019538:	10201637          	lui	a2,0x10201
1c01953c:	00062023          	sw	zero,0(a2) # 10201000 <__l2_shared_end+0x200ff8>
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
1c01956a:	2a4d                	jal	1c01971c <printf>
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
1c0195aa:	00878713          	addi	a4,a5,8 # 1a100008 <__l2_shared_end+0xa100000>
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
1c0195d2:	01878713          	addi	a4,a5,24 # 1a100018 <__l2_shared_end+0xa100010>
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
1c0195fa:	02878713          	addi	a4,a5,40 # 1a100028 <__l2_shared_end+0xa100020>
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
1c019644:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa109800>
1c019648:	10500073          	wfi
1c01964c:	10500073          	wfi
1c019650:	bfe5                	j	1c019648 <pos_wait_forever+0x26>

1c019652 <memcpy>:
1c019652:	00a5e7b3          	or	a5,a1,a0
1c019656:	fa27b7b3          	p.bclr	a5,a5,29,2
1c01965a:	cf81                	beqz	a5,1c019672 <memcpy+0x20>
1c01965c:	87aa                	mv	a5,a0
1c01965e:	ce0d                	beqz	a2,1c019698 <memcpy+0x46>
1c019660:	006640fb          	lp.setup	x1,a2,1c01966c <memcpy+0x1a>
1c019664:	0005c703          	lbu	a4,0(a1)
1c019668:	0785                	addi	a5,a5,1
1c01966a:	0585                	addi	a1,a1,1
1c01966c:	fee78fa3          	sb	a4,-1(a5)
1c019670:	8082                	ret
1c019672:	fa2637b3          	p.bclr	a5,a2,29,2
1c019676:	ef99                	bnez	a5,1c019694 <memcpy+0x42>
1c019678:	de65                	beqz	a2,1c019670 <memcpy+0x1e>
1c01967a:	1671                	addi	a2,a2,-4
1c01967c:	00265793          	srli	a5,a2,0x2
1c019680:	872a                	mv	a4,a0
1c019682:	0785                	addi	a5,a5,1
1c019684:	0057c0fb          	lp.setup	x1,a5,1c01968e <memcpy+0x3c>
1c019688:	4194                	lw	a3,0(a1)
1c01968a:	0711                	addi	a4,a4,4
1c01968c:	0591                	addi	a1,a1,4
1c01968e:	fed72e23          	sw	a3,-4(a4)
1c019692:	8082                	ret
1c019694:	87aa                	mv	a5,a0
1c019696:	b7e9                	j	1c019660 <memcpy+0xe>
1c019698:	8082                	ret

1c01969a <memmove>:
1c01969a:	40b507b3          	sub	a5,a0,a1
1c01969e:	00c7fd63          	bleu	a2,a5,1c0196b8 <memmove+0x1e>
1c0196a2:	87b2                	mv	a5,a2
1c0196a4:	0077c0fb          	lp.setup	x1,a5,1c0196b2 <memmove+0x18>
1c0196a8:	167d                	addi	a2,a2,-1
1c0196aa:	00c58733          	add	a4,a1,a2
1c0196ae:	00074703          	lbu	a4,0(a4)
1c0196b2:	00e54623          	p.sb	a4,a2(a0)
1c0196b6:	8082                	ret
1c0196b8:	87aa                	mv	a5,a0
1c0196ba:	ca01                	beqz	a2,1c0196ca <memmove+0x30>
1c0196bc:	004640fb          	lp.setup	x1,a2,1c0196c4 <memmove+0x2a>
1c0196c0:	0015c70b          	p.lbu	a4,1(a1!)
1c0196c4:	00e780ab          	p.sb	a4,1(a5!)
1c0196c8:	8082                	ret
1c0196ca:	8082                	ret

1c0196cc <strchr>:
1c0196cc:	00054783          	lbu	a5,0(a0) # 5f68000 <__l1_heap_size+0x5f28008>
1c0196d0:	0ff5f593          	andi	a1,a1,255
1c0196d4:	00b78863          	beq	a5,a1,1c0196e4 <strchr+0x18>
1c0196d8:	c799                	beqz	a5,1c0196e6 <strchr+0x1a>
1c0196da:	0505                	addi	a0,a0,1
1c0196dc:	00054783          	lbu	a5,0(a0)
1c0196e0:	feb79ce3          	bne	a5,a1,1c0196d8 <strchr+0xc>
1c0196e4:	8082                	ret
1c0196e6:	0015b593          	seqz	a1,a1
1c0196ea:	40b005b3          	neg	a1,a1
1c0196ee:	8d6d                	and	a0,a0,a1
1c0196f0:	8082                	ret

1c0196f2 <pos_libc_fputc_locked>:
1c0196f2:	1a1047b7          	lui	a5,0x1a104
1c0196f6:	0ff57513          	andi	a0,a0,255
1c0196fa:	d388                	sw	a0,32(a5)
1c0196fc:	4501                	li	a0,0
1c0196fe:	8082                	ret

1c019700 <pos_libc_prf_locked>:
1c019700:	a87d                	j	1c0197be <pos_libc_prf>

1c019702 <exit>:
1c019702:	1141                	addi	sp,sp,-16
1c019704:	c606                	sw	ra,12(sp)
1c019706:	1a1047b7          	lui	a5,0x1a104
1c01970a:	c1f54533          	p.bset	a0,a0,0,31
1c01970e:	0aa7a023          	sw	a0,160(a5) # 1a1040a0 <__l2_shared_end+0xa104098>
1c019712:	3f01                	jal	1c019622 <pos_wait_forever>

1c019714 <pos_io_start>:
1c019714:	4501                	li	a0,0
1c019716:	8082                	ret

1c019718 <pos_io_stop>:
1c019718:	4501                	li	a0,0
1c01971a:	8082                	ret

1c01971c <printf>:
1c01971c:	7139                	addi	sp,sp,-64
1c01971e:	02410313          	addi	t1,sp,36
1c019722:	d432                	sw	a2,40(sp)
1c019724:	862a                	mv	a2,a0
1c019726:	1c019537          	lui	a0,0x1c019
1c01972a:	d22e                	sw	a1,36(sp)
1c01972c:	d636                	sw	a3,44(sp)
1c01972e:	4589                	li	a1,2
1c019730:	869a                	mv	a3,t1
1c019732:	6f250513          	addi	a0,a0,1778 # 1c0196f2 <pos_libc_fputc_locked>
1c019736:	ce06                	sw	ra,28(sp)
1c019738:	d83a                	sw	a4,48(sp)
1c01973a:	da3e                	sw	a5,52(sp)
1c01973c:	dc42                	sw	a6,56(sp)
1c01973e:	de46                	sw	a7,60(sp)
1c019740:	c61a                	sw	t1,12(sp)
1c019742:	3f7d                	jal	1c019700 <pos_libc_prf_locked>
1c019744:	40f2                	lw	ra,28(sp)
1c019746:	6121                	addi	sp,sp,64
1c019748:	8082                	ret

1c01974a <pos_libc_to_x>:
1c01974a:	872a                	mv	a4,a0
1c01974c:	88aa                	mv	a7,a0
1c01974e:	4e25                	li	t3,9
1c019750:	02c5f333          	remu	t1,a1,a2
1c019754:	4781                	li	a5,0
1c019756:	00188813          	addi	a6,a7,1
1c01975a:	0ff37513          	andi	a0,t1,255
1c01975e:	02c5d5b3          	divu	a1,a1,a2
1c019762:	03050513          	addi	a0,a0,48
1c019766:	006e7463          	bleu	t1,t3,1c01976e <pos_libc_to_x+0x24>
1c01976a:	02700793          	li	a5,39
1c01976e:	97aa                	add	a5,a5,a0
1c019770:	00f88023          	sb	a5,0(a7)
1c019774:	88c2                	mv	a7,a6
1c019776:	fde9                	bnez	a1,1c019750 <pos_libc_to_x+0x6>
1c019778:	40e80533          	sub	a0,a6,a4
1c01977c:	02d55f63          	ble	a3,a0,1c0197ba <pos_libc_to_x+0x70>
1c019780:	410707b3          	sub	a5,a4,a6
1c019784:	03000613          	li	a2,48
1c019788:	96be                	add	a3,a3,a5
1c01978a:	0086c0fb          	lp.setup	x1,a3,1c01979a <pos_libc_to_x+0x50>
1c01978e:	00180793          	addi	a5,a6,1
1c019792:	00c80023          	sb	a2,0(a6)
1c019796:	40e78533          	sub	a0,a5,a4
1c01979a:	883e                	mv	a6,a5
1c01979c:	fe078fab          	p.sb	zero,-1(a5!)
1c0197a0:	00f77c63          	bleu	a5,a4,1c0197b8 <pos_libc_to_x+0x6e>
1c0197a4:	00074603          	lbu	a2,0(a4)
1c0197a8:	0007c683          	lbu	a3,0(a5)
1c0197ac:	fec78fab          	p.sb	a2,-1(a5!)
1c0197b0:	00d700ab          	p.sb	a3,1(a4!)
1c0197b4:	fef768e3          	bltu	a4,a5,1c0197a4 <pos_libc_to_x+0x5a>
1c0197b8:	8082                	ret
1c0197ba:	87c2                	mv	a5,a6
1c0197bc:	b7c5                	j	1c01979c <pos_libc_to_x+0x52>

1c0197be <pos_libc_prf>:
1c0197be:	7169                	addi	sp,sp,-304
1c0197c0:	12912223          	sw	s1,292(sp)
1c0197c4:	13212023          	sw	s2,288(sp)
1c0197c8:	11312e23          	sw	s3,284(sp)
1c0197cc:	11412c23          	sw	s4,280(sp)
1c0197d0:	11512a23          	sw	s5,276(sp)
1c0197d4:	dfee                	sw	s11,252(sp)
1c0197d6:	12112623          	sw	ra,300(sp)
1c0197da:	12812423          	sw	s0,296(sp)
1c0197de:	11612823          	sw	s6,272(sp)
1c0197e2:	11712623          	sw	s7,268(sp)
1c0197e6:	11812423          	sw	s8,264(sp)
1c0197ea:	11912223          	sw	s9,260(sp)
1c0197ee:	11a12023          	sw	s10,256(sp)
1c0197f2:	84aa                	mv	s1,a0
1c0197f4:	8a2e                	mv	s4,a1
1c0197f6:	8db2                	mv	s11,a2
1c0197f8:	8936                	mv	s2,a3
1c0197fa:	4a81                	li	s5,0
1c0197fc:	1c0009b7          	lui	s3,0x1c000
1c019800:	000dc503          	lbu	a0,0(s11)
1c019804:	0d85                	addi	s11,s11,1
1c019806:	cd11                	beqz	a0,1c019822 <pos_libc_prf+0x64>
1c019808:	02500793          	li	a5,37
1c01980c:	04f50763          	beq	a0,a5,1c01985a <pos_libc_prf+0x9c>
1c019810:	85d2                	mv	a1,s4
1c019812:	9482                	jalr	s1
1c019814:	15f52c63          	p.beqimm	a0,-1,1c01996c <pos_libc_prf+0x1ae>
1c019818:	0a85                	addi	s5,s5,1
1c01981a:	000dc503          	lbu	a0,0(s11)
1c01981e:	0d85                	addi	s11,s11,1
1c019820:	f565                	bnez	a0,1c019808 <pos_libc_prf+0x4a>
1c019822:	12c12083          	lw	ra,300(sp)
1c019826:	12812403          	lw	s0,296(sp)
1c01982a:	8556                	mv	a0,s5
1c01982c:	12412483          	lw	s1,292(sp)
1c019830:	12012903          	lw	s2,288(sp)
1c019834:	11c12983          	lw	s3,284(sp)
1c019838:	11812a03          	lw	s4,280(sp)
1c01983c:	11412a83          	lw	s5,276(sp)
1c019840:	11012b03          	lw	s6,272(sp)
1c019844:	10c12b83          	lw	s7,268(sp)
1c019848:	10812c03          	lw	s8,264(sp)
1c01984c:	10412c83          	lw	s9,260(sp)
1c019850:	10012d03          	lw	s10,256(sp)
1c019854:	5dfe                	lw	s11,252(sp)
1c019856:	6155                	addi	sp,sp,304
1c019858:	8082                	ret
1c01985a:	000dcc03          	lbu	s8,0(s11)
1c01985e:	02000313          	li	t1,32
1c019862:	001d8d13          	addi	s10,s11,1
1c019866:	03098513          	addi	a0,s3,48 # 1c000030 <__DTOR_END__+0x14>
1c01986a:	85e2                	mv	a1,s8
1c01986c:	c21a                	sw	t1,4(sp)
1c01986e:	c602                	sw	zero,12(sp)
1c019870:	c402                	sw	zero,8(sp)
1c019872:	c802                	sw	zero,16(sp)
1c019874:	c002                	sw	zero,0(sp)
1c019876:	02300413          	li	s0,35
1c01987a:	02d00b93          	li	s7,45
1c01987e:	03000c93          	li	s9,48
1c019882:	8b6a                	mv	s6,s10
1c019884:	35a1                	jal	1c0196cc <strchr>
1c019886:	c905                	beqz	a0,1c0198b6 <pos_libc_prf+0xf8>
1c019888:	108c0b63          	beq	s8,s0,1c01999e <pos_libc_prf+0x1e0>
1c01988c:	0f847263          	bleu	s8,s0,1c019970 <pos_libc_prf+0x1b2>
1c019890:	117c0363          	beq	s8,s7,1c019996 <pos_libc_prf+0x1d8>
1c019894:	0f9c0c63          	beq	s8,s9,1c01998c <pos_libc_prf+0x1ce>
1c019898:	02b00593          	li	a1,43
1c01989c:	0ebc0463          	beq	s8,a1,1c019984 <pos_libc_prf+0x1c6>
1c0198a0:	8dea                	mv	s11,s10
1c0198a2:	000dcc03          	lbu	s8,0(s11)
1c0198a6:	001d8d13          	addi	s10,s11,1
1c0198aa:	03098513          	addi	a0,s3,48
1c0198ae:	85e2                	mv	a1,s8
1c0198b0:	8b6a                	mv	s6,s10
1c0198b2:	3d29                	jal	1c0196cc <strchr>
1c0198b4:	f971                	bnez	a0,1c019888 <pos_libc_prf+0xca>
1c0198b6:	02a00613          	li	a2,42
1c0198ba:	10cc0863          	beq	s8,a2,1c0199ca <pos_libc_prf+0x20c>
1c0198be:	fd0c0613          	addi	a2,s8,-48
1c0198c2:	45a5                	li	a1,9
1c0198c4:	4401                	li	s0,0
1c0198c6:	0ec5f263          	bleu	a2,a1,1c0199aa <pos_libc_prf+0x1ec>
1c0198ca:	02e00713          	li	a4,46
1c0198ce:	5bfd                	li	s7,-1
1c0198d0:	14ec0563          	beq	s8,a4,1c019a1a <pos_libc_prf+0x25c>
1c0198d4:	1c000537          	lui	a0,0x1c000
1c0198d8:	85e2                	mv	a1,s8
1c0198da:	03850513          	addi	a0,a0,56 # 1c000038 <__DTOR_END__+0x1c>
1c0198de:	33fd                	jal	1c0196cc <strchr>
1c0198e0:	8dda                	mv	s11,s6
1c0198e2:	c509                	beqz	a0,1c0198ec <pos_libc_prf+0x12e>
1c0198e4:	000b4c03          	lbu	s8,0(s6)
1c0198e8:	001b0d93          	addi	s11,s6,1
1c0198ec:	06700713          	li	a4,103
1c0198f0:	0f875b63          	ble	s8,a4,1c0199e6 <pos_libc_prf+0x228>
1c0198f4:	07000713          	li	a4,112
1c0198f8:	60ec0863          	beq	s8,a4,1c019f08 <pos_libc_prf+0x74a>
1c0198fc:	15875363          	ble	s8,a4,1c019a42 <pos_libc_prf+0x284>
1c019900:	07500713          	li	a4,117
1c019904:	5cec0963          	beq	s8,a4,1c019ed6 <pos_libc_prf+0x718>
1c019908:	07800713          	li	a4,120
1c01990c:	4cec0b63          	beq	s8,a4,1c019de2 <pos_libc_prf+0x624>
1c019910:	07300713          	li	a4,115
1c019914:	62ec1463          	bne	s8,a4,1c019f3c <pos_libc_prf+0x77e>
1c019918:	00092583          	lw	a1,0(s2)
1c01991c:	00490b13          	addi	s6,s2,4
1c019920:	4d01                	li	s10,0
1c019922:	0c8450fb          	lp.setupi	x1,200,1c019932 <pos_libc_prf+0x174>
1c019926:	01a58733          	add	a4,a1,s10
1c01992a:	00074703          	lbu	a4,0(a4)
1c01992e:	60070d63          	beqz	a4,1c019f48 <pos_libc_prf+0x78a>
1c019932:	0d05                	addi	s10,s10,1
1c019934:	000bc763          	bltz	s7,1c019942 <pos_libc_prf+0x184>
1c019938:	057d4d33          	p.min	s10,s10,s7
1c01993c:	895a                	mv	s2,s6
1c01993e:	ec0d01e3          	beqz	s10,1c019800 <pos_libc_prf+0x42>
1c019942:	866a                	mv	a2,s10
1c019944:	1048                	addi	a0,sp,36
1c019946:	3331                	jal	1c019652 <memcpy>
1c019948:	895a                	mv	s2,s6
1c01994a:	4e8d4663          	blt	s10,s0,1c019e36 <pos_libc_prf+0x678>
1c01994e:	846a                	mv	s0,s10
1c019950:	02410b13          	addi	s6,sp,36
1c019954:	a029                	j	1c01995e <pos_libc_prf+0x1a0>
1c019956:	0b05                	addi	s6,s6,1
1c019958:	0a85                	addi	s5,s5,1
1c01995a:	ea0403e3          	beqz	s0,1c019800 <pos_libc_prf+0x42>
1c01995e:	000b4503          	lbu	a0,0(s6)
1c019962:	85d2                	mv	a1,s4
1c019964:	147d                	addi	s0,s0,-1
1c019966:	9482                	jalr	s1
1c019968:	fff537e3          	p.bneimm	a0,-1,1c019956 <pos_libc_prf+0x198>
1c01996c:	5afd                	li	s5,-1
1c01996e:	bd55                	j	1c019822 <pos_libc_prf+0x64>
1c019970:	ea0c09e3          	beqz	s8,1c019822 <pos_libc_prf+0x64>
1c019974:	02000313          	li	t1,32
1c019978:	f26c14e3          	bne	s8,t1,1c0198a0 <pos_libc_prf+0xe2>
1c01997c:	4685                	li	a3,1
1c01997e:	c636                	sw	a3,12(sp)
1c019980:	8dea                	mv	s11,s10
1c019982:	b705                	j	1c0198a2 <pos_libc_prf+0xe4>
1c019984:	4605                	li	a2,1
1c019986:	c432                	sw	a2,8(sp)
1c019988:	8dea                	mv	s11,s10
1c01998a:	bf21                	j	1c0198a2 <pos_libc_prf+0xe4>
1c01998c:	03000793          	li	a5,48
1c019990:	c23e                	sw	a5,4(sp)
1c019992:	8dea                	mv	s11,s10
1c019994:	b739                	j	1c0198a2 <pos_libc_prf+0xe4>
1c019996:	4805                	li	a6,1
1c019998:	c842                	sw	a6,16(sp)
1c01999a:	8dea                	mv	s11,s10
1c01999c:	b719                	j	1c0198a2 <pos_libc_prf+0xe4>
1c01999e:	4705                	li	a4,1
1c0199a0:	c03a                	sw	a4,0(sp)
1c0199a2:	8dea                	mv	s11,s10
1c0199a4:	bdfd                	j	1c0198a2 <pos_libc_prf+0xe4>
1c0199a6:	8dea                	mv	s11,s10
1c0199a8:	0d05                	addi	s10,s10,1
1c0199aa:	00241793          	slli	a5,s0,0x2
1c0199ae:	97a2                	add	a5,a5,s0
1c0199b0:	0786                	slli	a5,a5,0x1
1c0199b2:	97e2                	add	a5,a5,s8
1c0199b4:	000d4c03          	lbu	s8,0(s10)
1c0199b8:	fd078413          	addi	s0,a5,-48
1c0199bc:	fd0c0793          	addi	a5,s8,-48
1c0199c0:	fef5f3e3          	bleu	a5,a1,1c0199a6 <pos_libc_prf+0x1e8>
1c0199c4:	002d8b13          	addi	s6,s11,2
1c0199c8:	a811                	j	1c0199dc <pos_libc_prf+0x21e>
1c0199ca:	00092403          	lw	s0,0(s2)
1c0199ce:	0911                	addi	s2,s2,4
1c0199d0:	0e044263          	bltz	s0,1c019ab4 <pos_libc_prf+0x2f6>
1c0199d4:	000d4c03          	lbu	s8,0(s10)
1c0199d8:	002d8b13          	addi	s6,s11,2
1c0199dc:	0c800713          	li	a4,200
1c0199e0:	04e45433          	p.minu	s0,s0,a4
1c0199e4:	b5dd                	j	1c0198ca <pos_libc_prf+0x10c>
1c0199e6:	06500713          	li	a4,101
1c0199ea:	0cec5a63          	ble	a4,s8,1c019abe <pos_libc_prf+0x300>
1c0199ee:	04700713          	li	a4,71
1c0199f2:	3d874e63          	blt	a4,s8,1c019dce <pos_libc_prf+0x610>
1c0199f6:	04500713          	li	a4,69
1c0199fa:	0cec5263          	ble	a4,s8,1c019abe <pos_libc_prf+0x300>
1c0199fe:	e20c02e3          	beqz	s8,1c019822 <pos_libc_prf+0x64>
1c019a02:	02500713          	li	a4,37
1c019a06:	52ec1b63          	bne	s8,a4,1c019f3c <pos_libc_prf+0x77e>
1c019a0a:	85d2                	mv	a1,s4
1c019a0c:	02500513          	li	a0,37
1c019a10:	9482                	jalr	s1
1c019a12:	f5f52de3          	p.beqimm	a0,-1,1c01996c <pos_libc_prf+0x1ae>
1c019a16:	0a85                	addi	s5,s5,1
1c019a18:	b509                	j	1c01981a <pos_libc_prf+0x5c>
1c019a1a:	000b4783          	lbu	a5,0(s6)
1c019a1e:	02a00713          	li	a4,42
1c019a22:	001b0693          	addi	a3,s6,1
1c019a26:	04e79c63          	bne	a5,a4,1c019a7e <pos_libc_prf+0x2c0>
1c019a2a:	00092b83          	lw	s7,0(s2)
1c019a2e:	001b4c03          	lbu	s8,1(s6)
1c019a32:	0911                	addi	s2,s2,4
1c019a34:	0b09                	addi	s6,s6,2
1c019a36:	0c800713          	li	a4,200
1c019a3a:	e9775de3          	ble	s7,a4,1c0198d4 <pos_libc_prf+0x116>
1c019a3e:	5bfd                	li	s7,-1
1c019a40:	bd51                	j	1c0198d4 <pos_libc_prf+0x116>
1c019a42:	06e00713          	li	a4,110
1c019a46:	4aec0b63          	beq	s8,a4,1c019efc <pos_libc_prf+0x73e>
1c019a4a:	43875263          	ble	s8,a4,1c019e6e <pos_libc_prf+0x6b0>
1c019a4e:	4802                	lw	a6,0(sp)
1c019a50:	00490b13          	addi	s6,s2,4
1c019a54:	00092583          	lw	a1,0(s2)
1c019a58:	0e0802e3          	beqz	a6,1c01a33c <pos_libc_prf+0xb7e>
1c019a5c:	03000793          	li	a5,48
1c019a60:	02f10223          	sb	a5,36(sp)
1c019a64:	0a0592e3          	bnez	a1,1c01a308 <pos_libc_prf+0xb4a>
1c019a68:	020102a3          	sb	zero,37(sp)
1c019a6c:	895a                	mv	s2,s6
1c019a6e:	8d42                	mv	s10,a6
1c019a70:	edfbade3          	p.beqimm	s7,-1,1c01994a <pos_libc_prf+0x18c>
1c019a74:	02000813          	li	a6,32
1c019a78:	4d02                	lw	s10,0(sp)
1c019a7a:	c242                	sw	a6,4(sp)
1c019a7c:	b5f9                	j	1c01994a <pos_libc_prf+0x18c>
1c019a7e:	fd078593          	addi	a1,a5,-48
1c019a82:	4725                	li	a4,9
1c019a84:	8c3e                	mv	s8,a5
1c019a86:	4b81                	li	s7,0
1c019a88:	4625                	li	a2,9
1c019a8a:	00b77663          	bleu	a1,a4,1c019a96 <pos_libc_prf+0x2d8>
1c019a8e:	0230006f          	j	1c01a2b0 <pos_libc_prf+0xaf2>
1c019a92:	8b36                	mv	s6,a3
1c019a94:	0685                	addi	a3,a3,1
1c019a96:	002b9793          	slli	a5,s7,0x2
1c019a9a:	97de                	add	a5,a5,s7
1c019a9c:	0786                	slli	a5,a5,0x1
1c019a9e:	97e2                	add	a5,a5,s8
1c019aa0:	0006cc03          	lbu	s8,0(a3)
1c019aa4:	fd078b93          	addi	s7,a5,-48
1c019aa8:	fd0c0793          	addi	a5,s8,-48
1c019aac:	fef673e3          	bleu	a5,a2,1c019a92 <pos_libc_prf+0x2d4>
1c019ab0:	0b09                	addi	s6,s6,2
1c019ab2:	b751                	j	1c019a36 <pos_libc_prf+0x278>
1c019ab4:	4705                	li	a4,1
1c019ab6:	40800433          	neg	s0,s0
1c019aba:	c83a                	sw	a4,16(sp)
1c019abc:	bf21                	j	1c0199d4 <pos_libc_prf+0x216>
1c019abe:	091d                	addi	s2,s2,7
1c019ac0:	c4093933          	p.bclr	s2,s2,2,0
1c019ac4:	00092603          	lw	a2,0(s2)
1c019ac8:	00492583          	lw	a1,4(s2)
1c019acc:	7ff00693          	li	a3,2047
1c019ad0:	01565513          	srli	a0,a2,0x15
1c019ad4:	0145d313          	srli	t1,a1,0x14
1c019ad8:	00b59713          	slli	a4,a1,0xb
1c019adc:	8f49                	or	a4,a4,a0
1c019ade:	e8b33333          	p.bclr	t1,t1,20,11
1c019ae2:	0921                	addi	s2,s2,8
1c019ae4:	062e                	slli	a2,a2,0xb
1c019ae6:	c1f73733          	p.bclr	a4,a4,0,31
1c019aea:	04d30be3          	beq	t1,a3,1c01a340 <pos_libc_prf+0xb82>
1c019aee:	04600693          	li	a3,70
1c019af2:	00dc1463          	bne	s8,a3,1c019afa <pos_libc_prf+0x33c>
1c019af6:	06600c13          	li	s8,102
1c019afa:	00c366b3          	or	a3,t1,a2
1c019afe:	8ed9                	or	a3,a3,a4
1c019b00:	7e068463          	beqz	a3,1c01a2e8 <pos_libc_prf+0xb2a>
1c019b04:	c0230313          	addi	t1,t1,-1022
1c019b08:	c1f74733          	p.bset	a4,a4,0,31
1c019b0c:	2005cae3          	bltz	a1,1c01a520 <pos_libc_prf+0xd62>
1c019b10:	47a2                	lw	a5,8(sp)
1c019b12:	1e0789e3          	beqz	a5,1c01a504 <pos_libc_prf+0xd46>
1c019b16:	02b00693          	li	a3,43
1c019b1a:	02d10223          	sb	a3,36(sp)
1c019b1e:	02510b13          	addi	s6,sp,37
1c019b22:	02410c93          	addi	s9,sp,36
1c019b26:	56f9                	li	a3,-2
1c019b28:	4381                	li	t2,0
1c019b2a:	06d35763          	ble	a3,t1,1c019b98 <pos_libc_prf+0x3da>
1c019b2e:	33333537          	lui	a0,0x33333
1c019b32:	80000837          	lui	a6,0x80000
1c019b36:	33250513          	addi	a0,a0,818 # 33333332 <__l2_priv1_end+0x17318a46>
1c019b3a:	fff84813          	not	a6,a6
1c019b3e:	58f9                	li	a7,-2
1c019b40:	a011                	j	1c019b44 <pos_libc_prf+0x386>
1c019b42:	833e                	mv	t1,a5
1c019b44:	01f71593          	slli	a1,a4,0x1f
1c019b48:	00165693          	srli	a3,a2,0x1
1c019b4c:	fc1637b3          	p.bclr	a5,a2,30,1
1c019b50:	8ecd                	or	a3,a3,a1
1c019b52:	00d78633          	add	a2,a5,a3
1c019b56:	00f637b3          	sltu	a5,a2,a5
1c019b5a:	8305                	srli	a4,a4,0x1
1c019b5c:	973e                	add	a4,a4,a5
1c019b5e:	00130793          	addi	a5,t1,1
1c019b62:	fee560e3          	bltu	a0,a4,1c019b42 <pos_libc_prf+0x384>
1c019b66:	00261593          	slli	a1,a2,0x2
1c019b6a:	01e65e13          	srli	t3,a2,0x1e
1c019b6e:	00271693          	slli	a3,a4,0x2
1c019b72:	962e                	add	a2,a2,a1
1c019b74:	00de66b3          	or	a3,t3,a3
1c019b78:	9736                	add	a4,a4,a3
1c019b7a:	00b635b3          	sltu	a1,a2,a1
1c019b7e:	972e                	add	a4,a4,a1
1c019b80:	01f65693          	srli	a3,a2,0x1f
1c019b84:	0309                	addi	t1,t1,2
1c019b86:	13fd                	addi	t2,t2,-1
1c019b88:	01071663          	bne	a4,a6,1c019b94 <pos_libc_prf+0x3d6>
1c019b8c:	0606                	slli	a2,a2,0x1
1c019b8e:	fc16c733          	p.bset	a4,a3,30,1
1c019b92:	833e                	mv	t1,a5
1c019b94:	fb1348e3          	blt	t1,a7,1c019b44 <pos_libc_prf+0x386>
1c019b98:	0e605763          	blez	t1,1c019c86 <pos_libc_prf+0x4c8>
1c019b9c:	80000f37          	lui	t5,0x80000
1c019ba0:	4d15                	li	s10,5
1c019ba2:	ffff4f13          	not	t5,t5
1c019ba6:	00260513          	addi	a0,a2,2
1c019baa:	00c536b3          	sltu	a3,a0,a2
1c019bae:	00e688b3          	add	a7,a3,a4
1c019bb2:	02000793          	li	a5,32
1c019bb6:	00189593          	slli	a1,a7,0x1
1c019bba:	fff7ce93          	not	t4,a5
1c019bbe:	00f556b3          	srl	a3,a0,a5
1c019bc2:	01d595b3          	sll	a1,a1,t4
1c019bc6:	0207fe13          	andi	t3,a5,32
1c019bca:	4601                	li	a2,0
1c019bcc:	4701                	li	a4,0
1c019bce:	4801                	li	a6,0
1c019bd0:	8ecd                	or	a3,a3,a1
1c019bd2:	000e0463          	beqz	t3,1c019bda <pos_libc_prf+0x41c>
1c019bd6:	00f8d6b3          	srl	a3,a7,a5
1c019bda:	fff7ce93          	not	t4,a5
1c019bde:	03a6d6b3          	divu	a3,a3,s10
1c019be2:	060e0d63          	beqz	t3,1c019c5c <pos_libc_prf+0x49e>
1c019be6:	4581                	li	a1,0
1c019be8:	00f69eb3          	sll	t4,a3,a5
1c019bec:	00259693          	slli	a3,a1,0x2
1c019bf0:	01e5df93          	srli	t6,a1,0x1e
1c019bf4:	002e9793          	slli	a5,t4,0x2
1c019bf8:	00b68e33          	add	t3,a3,a1
1c019bfc:	00ffe7b3          	or	a5,t6,a5
1c019c00:	95b2                	add	a1,a1,a2
1c019c02:	97f6                	add	a5,a5,t4
1c019c04:	00de36b3          	sltu	a3,t3,a3
1c019c08:	00c5bfb3          	sltu	t6,a1,a2
1c019c0c:	1c019637          	lui	a2,0x1c019
1c019c10:	96be                	add	a3,a3,a5
1c019c12:	22060613          	addi	a2,a2,544 # 1c019220 <shifts.1764>
1c019c16:	01d707b3          	add	a5,a4,t4
1c019c1a:	41c50e33          	sub	t3,a0,t3
1c019c1e:	0805                	addi	a6,a6,1
1c019c20:	010602b3          	add	t0,a2,a6
1c019c24:	01c53eb3          	sltu	t4,a0,t3
1c019c28:	40d886b3          	sub	a3,a7,a3
1c019c2c:	862e                	mv	a2,a1
1c019c2e:	00ff8733          	add	a4,t6,a5
1c019c32:	02382c63          	p.beqimm	a6,3,1c019c6a <pos_libc_prf+0x4ac>
1c019c36:	0002c783          	lbu	a5,0(t0)
1c019c3a:	41d688b3          	sub	a7,a3,t4
1c019c3e:	8572                	mv	a0,t3
1c019c40:	00189593          	slli	a1,a7,0x1
1c019c44:	fff7ce93          	not	t4,a5
1c019c48:	00f556b3          	srl	a3,a0,a5
1c019c4c:	01d595b3          	sll	a1,a1,t4
1c019c50:	0207fe13          	andi	t3,a5,32
1c019c54:	8ecd                	or	a3,a3,a1
1c019c56:	f80e02e3          	beqz	t3,1c019bda <pos_libc_prf+0x41c>
1c019c5a:	bfb5                	j	1c019bd6 <pos_libc_prf+0x418>
1c019c5c:	0016de13          	srli	t3,a3,0x1
1c019c60:	00f695b3          	sll	a1,a3,a5
1c019c64:	01de5eb3          	srl	t4,t3,t4
1c019c68:	b751                	j	1c019bec <pos_libc_prf+0x42e>
1c019c6a:	137d                	addi	t1,t1,-1
1c019c6c:	0385                	addi	t2,t2,1
1c019c6e:	00ef6a63          	bltu	t5,a4,1c019c82 <pos_libc_prf+0x4c4>
1c019c72:	01f65793          	srli	a5,a2,0x1f
1c019c76:	0706                	slli	a4,a4,0x1
1c019c78:	8f5d                	or	a4,a4,a5
1c019c7a:	0606                	slli	a2,a2,0x1
1c019c7c:	137d                	addi	t1,t1,-1
1c019c7e:	feef7ae3          	bleu	a4,t5,1c019c72 <pos_libc_prf+0x4b4>
1c019c82:	f26042e3          	bgtz	t1,1c019ba6 <pos_libc_prf+0x3e8>
1c019c86:	4691                	li	a3,4
1c019c88:	40668333          	sub	t1,a3,t1
1c019c8c:	011340fb          	lp.setup	x1,t1,1c019cae <pos_libc_prf+0x4f0>
1c019c90:	01f71693          	slli	a3,a4,0x1f
1c019c94:	00165793          	srli	a5,a2,0x1
1c019c98:	8fd5                	or	a5,a5,a3
1c019c9a:	fc163633          	p.bclr	a2,a2,30,1
1c019c9e:	00f60d33          	add	s10,a2,a5
1c019ca2:	8305                	srli	a4,a4,0x1
1c019ca4:	00cd3633          	sltu	a2,s10,a2
1c019ca8:	00e607b3          	add	a5,a2,a4
1c019cac:	873e                	mv	a4,a5
1c019cae:	866a                	mv	a2,s10
1c019cb0:	ce3e                	sw	a5,28(sp)
1c019cb2:	06700713          	li	a4,103
1c019cb6:	6c0bc263          	bltz	s7,1c01a37a <pos_libc_prf+0xbbc>
1c019cba:	5eec0e63          	beq	s8,a4,1c01a2b6 <pos_libc_prf+0xaf8>
1c019cbe:	04700713          	li	a4,71
1c019cc2:	5eec0a63          	beq	s8,a4,1c01a2b6 <pos_libc_prf+0xaf8>
1c019cc6:	06600713          	li	a4,102
1c019cca:	28ec0c63          	beq	s8,a4,1c019f62 <pos_libc_prf+0x7a4>
1c019cce:	001b8293          	addi	t0,s7,1
1c019cd2:	4341                	li	t1,16
1c019cd4:	0462c2b3          	p.min	t0,t0,t1
1c019cd8:	12fd                	addi	t0,t0,-1
1c019cda:	cc02                	sw	zero,24(sp)
1c019cdc:	001b0713          	addi	a4,s6,1
1c019ce0:	ca3a                	sw	a4,20(sp)
1c019ce2:	853a                	mv	a0,a4
1c019ce4:	4701                	li	a4,0
1c019ce6:	080006b7          	lui	a3,0x8000
1c019cea:	4795                	li	a5,5
1c019cec:	00270e13          	addi	t3,a4,2
1c019cf0:	00ee3733          	sltu	a4,t3,a4
1c019cf4:	02000893          	li	a7,32
1c019cf8:	9736                	add	a4,a4,a3
1c019cfa:	00171593          	slli	a1,a4,0x1
1c019cfe:	fff8cf13          	not	t5,a7
1c019d02:	011e56b3          	srl	a3,t3,a7
1c019d06:	01e595b3          	sll	a1,a1,t5
1c019d0a:	0208f813          	andi	a6,a7,32
1c019d0e:	4301                	li	t1,0
1c019d10:	4601                	li	a2,0
1c019d12:	4e81                	li	t4,0
1c019d14:	8ecd                	or	a3,a3,a1
1c019d16:	00080463          	beqz	a6,1c019d1e <pos_libc_prf+0x560>
1c019d1a:	011756b3          	srl	a3,a4,a7
1c019d1e:	fff8cf13          	not	t5,a7
1c019d22:	02f6d6b3          	divu	a3,a3,a5
1c019d26:	06080a63          	beqz	a6,1c019d9a <pos_libc_prf+0x5dc>
1c019d2a:	4581                	li	a1,0
1c019d2c:	011698b3          	sll	a7,a3,a7
1c019d30:	00259f13          	slli	t5,a1,0x2
1c019d34:	01e5df93          	srli	t6,a1,0x1e
1c019d38:	00289693          	slli	a3,a7,0x2
1c019d3c:	00bf0833          	add	a6,t5,a1
1c019d40:	00dfe6b3          	or	a3,t6,a3
1c019d44:	01e83f33          	sltu	t5,a6,t5
1c019d48:	959a                	add	a1,a1,t1
1c019d4a:	96c6                	add	a3,a3,a7
1c019d4c:	96fa                	add	a3,a3,t5
1c019d4e:	0065bf33          	sltu	t5,a1,t1
1c019d52:	1c019337          	lui	t1,0x1c019
1c019d56:	9646                	add	a2,a2,a7
1c019d58:	22030313          	addi	t1,t1,544 # 1c019220 <shifts.1764>
1c019d5c:	410e0833          	sub	a6,t3,a6
1c019d60:	0e85                	addi	t4,t4,1
1c019d62:	01d30fb3          	add	t6,t1,t4
1c019d66:	010e38b3          	sltu	a7,t3,a6
1c019d6a:	8f15                	sub	a4,a4,a3
1c019d6c:	832e                	mv	t1,a1
1c019d6e:	967a                	add	a2,a2,t5
1c019d70:	023eac63          	p.beqimm	t4,3,1c019da8 <pos_libc_prf+0x5ea>
1c019d74:	41170733          	sub	a4,a4,a7
1c019d78:	000fc883          	lbu	a7,0(t6)
1c019d7c:	8e42                	mv	t3,a6
1c019d7e:	00171593          	slli	a1,a4,0x1
1c019d82:	fff8cf13          	not	t5,a7
1c019d86:	011e56b3          	srl	a3,t3,a7
1c019d8a:	01e595b3          	sll	a1,a1,t5
1c019d8e:	0208f813          	andi	a6,a7,32
1c019d92:	8ecd                	or	a3,a3,a1
1c019d94:	f80805e3          	beqz	a6,1c019d1e <pos_libc_prf+0x560>
1c019d98:	b749                	j	1c019d1a <pos_libc_prf+0x55c>
1c019d9a:	0016d813          	srli	a6,a3,0x1
1c019d9e:	011695b3          	sll	a1,a3,a7
1c019da2:	01e858b3          	srl	a7,a6,t5
1c019da6:	b769                	j	1c019d30 <pos_libc_prf+0x572>
1c019da8:	01f61693          	slli	a3,a2,0x1f
1c019dac:	0015d713          	srli	a4,a1,0x1
1c019db0:	fc15b333          	p.bclr	t1,a1,30,1
1c019db4:	8f55                	or	a4,a4,a3
1c019db6:	971a                	add	a4,a4,t1
1c019db8:	00165693          	srli	a3,a2,0x1
1c019dbc:	00673333          	sltu	t1,a4,t1
1c019dc0:	969a                	add	a3,a3,t1
1c019dc2:	fff28613          	addi	a2,t0,-1
1c019dc6:	1c028263          	beqz	t0,1c019f8a <pos_libc_prf+0x7cc>
1c019dca:	82b2                	mv	t0,a2
1c019dcc:	b705                	j	1c019cec <pos_libc_prf+0x52e>
1c019dce:	06300713          	li	a4,99
1c019dd2:	0eec0963          	beq	s8,a4,1c019ec4 <pos_libc_prf+0x706>
1c019dd6:	0b874063          	blt	a4,s8,1c019e76 <pos_libc_prf+0x6b8>
1c019dda:	05800713          	li	a4,88
1c019dde:	14ec1f63          	bne	s8,a4,1c019f3c <pos_libc_prf+0x77e>
1c019de2:	4702                	lw	a4,0(sp)
1c019de4:	00490b13          	addi	s6,s2,4
1c019de8:	00092583          	lw	a1,0(s2)
1c019dec:	44070063          	beqz	a4,1c01a22c <pos_libc_prf+0xa6e>
1c019df0:	7761                	lui	a4,0xffff8
1c019df2:	83074713          	xori	a4,a4,-2000
1c019df6:	86de                	mv	a3,s7
1c019df8:	4641                	li	a2,16
1c019dfa:	02610513          	addi	a0,sp,38
1c019dfe:	02e11223          	sh	a4,36(sp)
1c019e02:	32a1                	jal	1c01974a <pos_libc_to_x>
1c019e04:	05800713          	li	a4,88
1c019e08:	8d2a                	mv	s10,a0
1c019e0a:	78ec0e63          	beq	s8,a4,1c01a5a6 <pos_libc_prf+0xde8>
1c019e0e:	4309                	li	t1,2
1c019e10:	00250d13          	addi	s10,a0,2
1c019e14:	c01a                	sw	t1,0(sp)
1c019e16:	0c800793          	li	a5,200
1c019e1a:	49fba763          	p.beqimm	s7,-1,1c01a2a8 <pos_libc_prf+0xaea>
1c019e1e:	b5a7c7e3          	blt	a5,s10,1c01996c <pos_libc_prf+0x1ae>
1c019e22:	02000313          	li	t1,32
1c019e26:	895a                	mv	s2,s6
1c019e28:	c21a                	sw	t1,4(sp)
1c019e2a:	008d4763          	blt	s10,s0,1c019e38 <pos_libc_prf+0x67a>
1c019e2e:	846a                	mv	s0,s10
1c019e30:	b20410e3          	bnez	s0,1c019950 <pos_libc_prf+0x192>
1c019e34:	b2f1                	j	1c019800 <pos_libc_prf+0x42>
1c019e36:	c002                	sw	zero,0(sp)
1c019e38:	4342                	lw	t1,16(sp)
1c019e3a:	38030463          	beqz	t1,1c01a1c2 <pos_libc_prf+0xa04>
1c019e3e:	001d0713          	addi	a4,s10,1
1c019e42:	02000693          	li	a3,32
1c019e46:	41a407b3          	sub	a5,s0,s10
1c019e4a:	76e44563          	blt	s0,a4,1c01a5b4 <pos_libc_prf+0xdf6>
1c019e4e:	80000737          	lui	a4,0x80000
1c019e52:	76e40163          	beq	s0,a4,1c01a5b4 <pos_libc_prf+0xdf6>
1c019e56:	0087c0fb          	lp.setup	x1,a5,1c019e66 <pos_libc_prf+0x6a8>
1c019e5a:	0f010813          	addi	a6,sp,240
1c019e5e:	01a80733          	add	a4,a6,s10
1c019e62:	f2d70a23          	sb	a3,-204(a4) # 7fffff34 <pulp__FC+0x7fffff35>
1c019e66:	0d05                	addi	s10,s10,1
1c019e68:	ae0414e3          	bnez	s0,1c019950 <pos_libc_prf+0x192>
1c019e6c:	ba51                	j	1c019800 <pos_libc_prf+0x42>
1c019e6e:	06900713          	li	a4,105
1c019e72:	0cec1563          	bne	s8,a4,1c019f3c <pos_libc_prf+0x77e>
1c019e76:	00092583          	lw	a1,0(s2)
1c019e7a:	02410c93          	addi	s9,sp,36
1c019e7e:	0911                	addi	s2,s2,4
1c019e80:	3e05cc63          	bltz	a1,1c01a278 <pos_libc_prf+0xaba>
1c019e84:	4322                	lw	t1,8(sp)
1c019e86:	4a031663          	bnez	t1,1c01a332 <pos_libc_prf+0xb74>
1c019e8a:	4632                	lw	a2,12(sp)
1c019e8c:	62060063          	beqz	a2,1c01a4ac <pos_libc_prf+0xcee>
1c019e90:	02000793          	li	a5,32
1c019e94:	02f10223          	sb	a5,36(sp)
1c019e98:	86de                	mv	a3,s7
1c019e9a:	4629                	li	a2,10
1c019e9c:	02510513          	addi	a0,sp,37
1c019ea0:	306d                	jal	1c01974a <pos_libc_to_x>
1c019ea2:	02510313          	addi	t1,sp,37
1c019ea6:	951a                	add	a0,a0,t1
1c019ea8:	4705                	li	a4,1
1c019eaa:	41950d33          	sub	s10,a0,s9
1c019eae:	c03a                	sw	a4,0(sp)
1c019eb0:	0bfba363          	p.beqimm	s7,-1,1c019f56 <pos_libc_prf+0x798>
1c019eb4:	0c800793          	li	a5,200
1c019eb8:	aba7cae3          	blt	a5,s10,1c01996c <pos_libc_prf+0x1ae>
1c019ebc:	02000713          	li	a4,32
1c019ec0:	c23a                	sw	a4,4(sp)
1c019ec2:	b7a5                	j	1c019e2a <pos_libc_prf+0x66c>
1c019ec4:	00092783          	lw	a5,0(s2)
1c019ec8:	020102a3          	sb	zero,37(sp)
1c019ecc:	0911                	addi	s2,s2,4
1c019ece:	02f10223          	sb	a5,36(sp)
1c019ed2:	4d05                	li	s10,1
1c019ed4:	bc9d                	j	1c01994a <pos_libc_prf+0x18c>
1c019ed6:	00092583          	lw	a1,0(s2)
1c019eda:	86de                	mv	a3,s7
1c019edc:	4629                	li	a2,10
1c019ede:	1048                	addi	a0,sp,36
1c019ee0:	30ad                	jal	1c01974a <pos_libc_to_x>
1c019ee2:	8d2a                	mv	s10,a0
1c019ee4:	0911                	addi	s2,s2,4
1c019ee6:	0c800793          	li	a5,200
1c019eea:	07fba263          	p.beqimm	s7,-1,1c019f4e <pos_libc_prf+0x790>
1c019eee:	a6a7cfe3          	blt	a5,a0,1c01996c <pos_libc_prf+0x1ae>
1c019ef2:	02000713          	li	a4,32
1c019ef6:	c002                	sw	zero,0(sp)
1c019ef8:	c23a                	sw	a4,4(sp)
1c019efa:	bf05                	j	1c019e2a <pos_libc_prf+0x66c>
1c019efc:	00092783          	lw	a5,0(s2)
1c019f00:	0911                	addi	s2,s2,4
1c019f02:	0157a023          	sw	s5,0(a5)
1c019f06:	b8ed                	j	1c019800 <pos_libc_prf+0x42>
1c019f08:	00092583          	lw	a1,0(s2)
1c019f0c:	77e1                	lui	a5,0xffff8
1c019f0e:	8307c793          	xori	a5,a5,-2000
1c019f12:	46a1                	li	a3,8
1c019f14:	4641                	li	a2,16
1c019f16:	02610513          	addi	a0,sp,38
1c019f1a:	02f11223          	sh	a5,36(sp)
1c019f1e:	3035                	jal	1c01974a <pos_libc_to_x>
1c019f20:	0911                	addi	s2,s2,4
1c019f22:	00250d13          	addi	s10,a0,2
1c019f26:	0c800793          	li	a5,200
1c019f2a:	03fba263          	p.beqimm	s7,-1,1c019f4e <pos_libc_prf+0x790>
1c019f2e:	a3a7cfe3          	blt	a5,s10,1c01996c <pos_libc_prf+0x1ae>
1c019f32:	02000793          	li	a5,32
1c019f36:	c002                	sw	zero,0(sp)
1c019f38:	c23e                	sw	a5,4(sp)
1c019f3a:	bdc5                	j	1c019e2a <pos_libc_prf+0x66c>
1c019f3c:	0c800713          	li	a4,200
1c019f40:	8d8750e3          	ble	s8,a4,1c019800 <pos_libc_prf+0x42>
1c019f44:	5afd                	li	s5,-1
1c019f46:	b8f1                	j	1c019822 <pos_libc_prf+0x64>
1c019f48:	9e0bd8e3          	bgez	s7,1c019938 <pos_libc_prf+0x17a>
1c019f4c:	bac5                	j	1c01993c <pos_libc_prf+0x17e>
1c019f4e:	a1a7cfe3          	blt	a5,s10,1c01996c <pos_libc_prf+0x1ae>
1c019f52:	c002                	sw	zero,0(sp)
1c019f54:	bdd9                	j	1c019e2a <pos_libc_prf+0x66c>
1c019f56:	0c800793          	li	a5,200
1c019f5a:	eda7d8e3          	ble	s10,a5,1c019e2a <pos_libc_prf+0x66c>
1c019f5e:	5afd                	li	s5,-1
1c019f60:	b0c9                	j	1c019822 <pos_libc_prf+0x64>
1c019f62:	cc02                	sw	zero,24(sp)
1c019f64:	001b0593          	addi	a1,s6,1
1c019f68:	ca2e                	sw	a1,20(sp)
1c019f6a:	017387b3          	add	a5,t2,s7
1c019f6e:	852e                	mv	a0,a1
1c019f70:	6007c263          	bltz	a5,1c01a574 <pos_libc_prf+0xdb6>
1c019f74:	4641                	li	a2,16
1c019f76:	04c7c2b3          	p.min	t0,a5,a2
1c019f7a:	12fd                	addi	t0,t0,-1
1c019f7c:	06600c13          	li	s8,102
1c019f80:	d60792e3          	bnez	a5,1c019ce4 <pos_libc_prf+0x526>
1c019f84:	4701                	li	a4,0
1c019f86:	080006b7          	lui	a3,0x8000
1c019f8a:	45f2                	lw	a1,28(sp)
1c019f8c:	976a                	add	a4,a4,s10
1c019f8e:	01a73f33          	sltu	t5,a4,s10
1c019f92:	96ae                	add	a3,a3,a1
1c019f94:	96fa                	add	a3,a3,t5
1c019f96:	f606b633          	p.bclr	a2,a3,27,0
1c019f9a:	8d3a                	mv	s10,a4
1c019f9c:	ca71                	beqz	a2,1c01a070 <pos_libc_prf+0x8b2>
1c019f9e:	002d0e93          	addi	t4,s10,2
1c019fa2:	01aebd33          	sltu	s10,t4,s10
1c019fa6:	00dd0f33          	add	t5,s10,a3
1c019faa:	02000813          	li	a6,32
1c019fae:	001f1793          	slli	a5,t5,0x1
1c019fb2:	fff84693          	not	a3,a6
1c019fb6:	010ed733          	srl	a4,t4,a6
1c019fba:	00d797b3          	sll	a5,a5,a3
1c019fbe:	02087613          	andi	a2,a6,32
1c019fc2:	4e01                	li	t3,0
1c019fc4:	4281                	li	t0,0
1c019fc6:	4f81                	li	t6,0
1c019fc8:	4d15                	li	s10,5
1c019fca:	8f5d                	or	a4,a4,a5
1c019fcc:	c219                	beqz	a2,1c019fd2 <pos_libc_prf+0x814>
1c019fce:	010f5733          	srl	a4,t5,a6
1c019fd2:	fff84793          	not	a5,a6
1c019fd6:	03a75733          	divu	a4,a4,s10
1c019fda:	24060263          	beqz	a2,1c01a21e <pos_libc_prf+0xa60>
1c019fde:	4681                	li	a3,0
1c019fe0:	01071733          	sll	a4,a4,a6
1c019fe4:	00269793          	slli	a5,a3,0x2
1c019fe8:	01e6d813          	srli	a6,a3,0x1e
1c019fec:	00271593          	slli	a1,a4,0x2
1c019ff0:	00d78633          	add	a2,a5,a3
1c019ff4:	00b865b3          	or	a1,a6,a1
1c019ff8:	95ba                	add	a1,a1,a4
1c019ffa:	00f637b3          	sltu	a5,a2,a5
1c019ffe:	96f2                	add	a3,a3,t3
1c01a000:	1c019337          	lui	t1,0x1c019
1c01a004:	97ae                	add	a5,a5,a1
1c01a006:	01c6b833          	sltu	a6,a3,t3
1c01a00a:	40ce8633          	sub	a2,t4,a2
1c01a00e:	9716                	add	a4,a4,t0
1c01a010:	0f85                	addi	t6,t6,1
1c01a012:	22030313          	addi	t1,t1,544 # 1c019220 <shifts.1764>
1c01a016:	00ceb8b3          	sltu	a7,t4,a2
1c01a01a:	40ff07b3          	sub	a5,t5,a5
1c01a01e:	01f305b3          	add	a1,t1,t6
1c01a022:	8e36                	mv	t3,a3
1c01a024:	00e802b3          	add	t0,a6,a4
1c01a028:	023fa463          	p.beqimm	t6,3,1c01a050 <pos_libc_prf+0x892>
1c01a02c:	0005c803          	lbu	a6,0(a1)
1c01a030:	41178f33          	sub	t5,a5,a7
1c01a034:	8eb2                	mv	t4,a2
1c01a036:	001f1793          	slli	a5,t5,0x1
1c01a03a:	fff84693          	not	a3,a6
1c01a03e:	010ed733          	srl	a4,t4,a6
1c01a042:	00d797b3          	sll	a5,a5,a3
1c01a046:	02087613          	andi	a2,a6,32
1c01a04a:	8f5d                	or	a4,a4,a5
1c01a04c:	d259                	beqz	a2,1c019fd2 <pos_libc_prf+0x814>
1c01a04e:	b741                	j	1c019fce <pos_libc_prf+0x810>
1c01a050:	01f29693          	slli	a3,t0,0x1f
1c01a054:	001e5713          	srli	a4,t3,0x1
1c01a058:	8f55                	or	a4,a4,a3
1c01a05a:	fc1e3e33          	p.bclr	t3,t3,30,1
1c01a05e:	00ee0d33          	add	s10,t3,a4
1c01a062:	01cd3e33          	sltu	t3,s10,t3
1c01a066:	0012d713          	srli	a4,t0,0x1
1c01a06a:	00ee06b3          	add	a3,t3,a4
1c01a06e:	0385                	addi	t2,t2,1
1c01a070:	06600713          	li	a4,102
1c01a074:	34ec0563          	beq	s8,a4,1c01a3be <pos_libc_prf+0xc00>
1c01a078:	002d1713          	slli	a4,s10,0x2
1c01a07c:	01ed5613          	srli	a2,s10,0x1e
1c01a080:	00269813          	slli	a6,a3,0x2
1c01a084:	9d3a                	add	s10,s10,a4
1c01a086:	01066833          	or	a6,a2,a6
1c01a08a:	00ed35b3          	sltu	a1,s10,a4
1c01a08e:	96c2                	add	a3,a3,a6
1c01a090:	95b6                	add	a1,a1,a3
1c01a092:	01fd5713          	srli	a4,s10,0x1f
1c01a096:	0586                	slli	a1,a1,0x1
1c01a098:	8dd9                	or	a1,a1,a4
1c01a09a:	01c5d713          	srli	a4,a1,0x1c
1c01a09e:	03070693          	addi	a3,a4,48
1c01a0a2:	00e03733          	snez	a4,a4
1c01a0a6:	40e383b3          	sub	t2,t2,a4
1c01a0aa:	4702                	lw	a4,0(sp)
1c01a0ac:	10000337          	lui	t1,0x10000
1c01a0b0:	137d                	addi	t1,t1,-1
1c01a0b2:	00db0023          	sb	a3,0(s6)
1c01a0b6:	001d1613          	slli	a2,s10,0x1
1c01a0ba:	0065f5b3          	and	a1,a1,t1
1c01a0be:	2e070563          	beqz	a4,1c01a3a8 <pos_libc_prf+0xbea>
1c01a0c2:	02e00713          	li	a4,46
1c01a0c6:	00eb00a3          	sb	a4,1(s6)
1c01a0ca:	002b0813          	addi	a6,s6,2
1c01a0ce:	fffb8893          	addi	a7,s7,-1
1c01a0d2:	4e0b8b63          	beqz	s7,1c01a5c8 <pos_libc_prf+0xe0a>
1c01a0d6:	4e3d                	li	t3,15
1c01a0d8:	a011                	j	1c01a0dc <pos_libc_prf+0x91e>
1c01a0da:	88be                	mv	a7,a5
1c01a0dc:	00261793          	slli	a5,a2,0x2
1c01a0e0:	01e65693          	srli	a3,a2,0x1e
1c01a0e4:	00259713          	slli	a4,a1,0x2
1c01a0e8:	00c78333          	add	t1,a5,a2
1c01a0ec:	8f55                	or	a4,a4,a3
1c01a0ee:	972e                	add	a4,a4,a1
1c01a0f0:	00f337b3          	sltu	a5,t1,a5
1c01a0f4:	97ba                	add	a5,a5,a4
1c01a0f6:	0786                	slli	a5,a5,0x1
1c01a0f8:	01f35713          	srli	a4,t1,0x1f
1c01a0fc:	8fd9                	or	a5,a5,a4
1c01a0fe:	01c7d693          	srli	a3,a5,0x1c
1c01a102:	03000713          	li	a4,48
1c01a106:	00180513          	addi	a0,a6,1 # 80000001 <pulp__FC+0x80000002>
1c01a10a:	01c05c63          	blez	t3,1c01a122 <pos_libc_prf+0x964>
1c01a10e:	00131613          	slli	a2,t1,0x1
1c01a112:	10000337          	lui	t1,0x10000
1c01a116:	137d                	addi	t1,t1,-1
1c01a118:	03068713          	addi	a4,a3,48 # 8000030 <__l1_heap_size+0x7fc0038>
1c01a11c:	1e7d                	addi	t3,t3,-1
1c01a11e:	0067f5b3          	and	a1,a5,t1
1c01a122:	00e80023          	sb	a4,0(a6)
1c01a126:	fff88793          	addi	a5,a7,-1
1c01a12a:	882a                	mv	a6,a0
1c01a12c:	fb1047e3          	bgtz	a7,1c01a0da <pos_libc_prf+0x91c>
1c01a130:	45e2                	lw	a1,24(sp)
1c01a132:	e9a5                	bnez	a1,1c01a1a2 <pos_libc_prf+0x9e4>
1c01a134:	c05c3733          	p.bclr	a4,s8,0,5
1c01a138:	04500693          	li	a3,69
1c01a13c:	02d71963          	bne	a4,a3,1c01a16e <pos_libc_prf+0x9b0>
1c01a140:	87e2                	mv	a5,s8
1c01a142:	00f50023          	sb	a5,0(a0)
1c01a146:	3403cc63          	bltz	t2,1c01a49e <pos_libc_prf+0xce0>
1c01a14a:	02b00793          	li	a5,43
1c01a14e:	00f500a3          	sb	a5,1(a0)
1c01a152:	47a9                	li	a5,10
1c01a154:	02f3c733          	div	a4,t2,a5
1c01a158:	0511                	addi	a0,a0,4
1c01a15a:	02f3e7b3          	rem	a5,t2,a5
1c01a15e:	03070713          	addi	a4,a4,48
1c01a162:	fee50f23          	sb	a4,-2(a0)
1c01a166:	03078793          	addi	a5,a5,48 # ffff8030 <pulp__FC+0xffff8031>
1c01a16a:	fef50fa3          	sb	a5,-1(a0)
1c01a16e:	00050023          	sb	zero,0(a0)
1c01a172:	41950d33          	sub	s10,a0,s9
1c01a176:	4722                	lw	a4,8(sp)
1c01a178:	47b2                	lw	a5,12(sp)
1c01a17a:	8f5d                	or	a4,a4,a5
1c01a17c:	c03a                	sw	a4,0(sp)
1c01a17e:	e719                	bnez	a4,1c01a18c <pos_libc_prf+0x9ce>
1c01a180:	02414703          	lbu	a4,36(sp)
1c01a184:	02d00793          	li	a5,45
1c01a188:	dcf717e3          	bne	a4,a5,1c019f56 <pos_libc_prf+0x798>
1c01a18c:	0c800793          	li	a5,200
1c01a190:	fda7ce63          	blt	a5,s10,1c01996c <pos_libc_prf+0x1ae>
1c01a194:	4305                	li	t1,1
1c01a196:	c01a                	sw	t1,0(sp)
1c01a198:	b949                	j	1c019e2a <pos_libc_prf+0x66c>
1c01a19a:	47e2                	lw	a5,24(sp)
1c01a19c:	dbe9                	beqz	a5,1c01a16e <pos_libc_prf+0x9b0>
1c01a19e:	06600c13          	li	s8,102
1c01a1a2:	03000613          	li	a2,48
1c01a1a6:	a011                	j	1c01a1aa <pos_libc_prf+0x9ec>
1c01a1a8:	853a                	mv	a0,a4
1c01a1aa:	fff50713          	addi	a4,a0,-1
1c01a1ae:	00074683          	lbu	a3,0(a4)
1c01a1b2:	fec68be3          	beq	a3,a2,1c01a1a8 <pos_libc_prf+0x9ea>
1c01a1b6:	02e00613          	li	a2,46
1c01a1ba:	f6c69de3          	bne	a3,a2,1c01a134 <pos_libc_prf+0x976>
1c01a1be:	853a                	mv	a0,a4
1c01a1c0:	bf95                	j	1c01a134 <pos_libc_prf+0x976>
1c01a1c2:	02410c93          	addi	s9,sp,36
1c01a1c6:	41a40b33          	sub	s6,s0,s10
1c01a1ca:	001d0613          	addi	a2,s10,1
1c01a1ce:	85e6                	mv	a1,s9
1c01a1d0:	016c8533          	add	a0,s9,s6
1c01a1d4:	cc6ff0ef          	jal	ra,1c01969a <memmove>
1c01a1d8:	4312                	lw	t1,4(sp)
1c01a1da:	02000793          	li	a5,32
1c01a1de:	30f30c63          	beq	t1,a5,1c01a4f6 <pos_libc_prf+0xd38>
1c01a1e2:	4702                	lw	a4,0(sp)
1c01a1e4:	9b3a                	add	s6,s6,a4
1c01a1e6:	c56755e3          	ble	s6,a4,1c019e30 <pos_libc_prf+0x672>
1c01a1ea:	4782                	lw	a5,0(sp)
1c01a1ec:	00178713          	addi	a4,a5,1
1c01a1f0:	40fb07b3          	sub	a5,s6,a5
1c01a1f4:	3aeb4563          	blt	s6,a4,1c01a59e <pos_libc_prf+0xde0>
1c01a1f8:	80000737          	lui	a4,0x80000
1c01a1fc:	3aeb0163          	beq	s6,a4,1c01a59e <pos_libc_prf+0xde0>
1c01a200:	4612                	lw	a2,4(sp)
1c01a202:	4702                	lw	a4,0(sp)
1c01a204:	0087c0fb          	lp.setup	x1,a5,1c01a214 <pos_libc_prf+0xa56>
1c01a208:	0f010813          	addi	a6,sp,240
1c01a20c:	00e806b3          	add	a3,a6,a4
1c01a210:	f2c68a23          	sb	a2,-204(a3)
1c01a214:	0705                	addi	a4,a4,1
1c01a216:	f2041d63          	bnez	s0,1c019950 <pos_libc_prf+0x192>
1c01a21a:	de6ff06f          	j	1c019800 <pos_libc_prf+0x42>
1c01a21e:	00175613          	srli	a2,a4,0x1
1c01a222:	010716b3          	sll	a3,a4,a6
1c01a226:	00f65733          	srl	a4,a2,a5
1c01a22a:	bb6d                	j	1c019fe4 <pos_libc_prf+0x826>
1c01a22c:	02410c93          	addi	s9,sp,36
1c01a230:	86de                	mv	a3,s7
1c01a232:	4641                	li	a2,16
1c01a234:	8566                	mv	a0,s9
1c01a236:	d14ff0ef          	jal	ra,1c01974a <pos_libc_to_x>
1c01a23a:	05800713          	li	a4,88
1c01a23e:	8d2a                	mv	s10,a0
1c01a240:	bcec1be3          	bne	s8,a4,1c019e16 <pos_libc_prf+0x658>
1c01a244:	02414783          	lbu	a5,36(sp)
1c01a248:	4681                	li	a3,0
1c01a24a:	bc0786e3          	beqz	a5,1c019e16 <pos_libc_prf+0x658>
1c01a24e:	4665                	li	a2,25
1c01a250:	f9f78713          	addi	a4,a5,-97
1c01a254:	0ff77713          	andi	a4,a4,255
1c01a258:	1781                	addi	a5,a5,-32
1c01a25a:	00e66463          	bltu	a2,a4,1c01a262 <pos_libc_prf+0xaa4>
1c01a25e:	00fc8023          	sb	a5,0(s9)
1c01a262:	0c85                	addi	s9,s9,1
1c01a264:	000cc783          	lbu	a5,0(s9)
1c01a268:	f7e5                	bnez	a5,1c01a250 <pos_libc_prf+0xa92>
1c01a26a:	4782                	lw	a5,0(sp)
1c01a26c:	9d36                	add	s10,s10,a3
1c01a26e:	ba0784e3          	beqz	a5,1c019e16 <pos_libc_prf+0x658>
1c01a272:	4809                	li	a6,2
1c01a274:	c042                	sw	a6,0(sp)
1c01a276:	b645                	j	1c019e16 <pos_libc_prf+0x658>
1c01a278:	02d00793          	li	a5,45
1c01a27c:	02f10223          	sb	a5,36(sp)
1c01a280:	800007b7          	lui	a5,0x80000
1c01a284:	26f58b63          	beq	a1,a5,1c01a4fa <pos_libc_prf+0xd3c>
1c01a288:	40b005b3          	neg	a1,a1
1c01a28c:	86de                	mv	a3,s7
1c01a28e:	4629                	li	a2,10
1c01a290:	02510513          	addi	a0,sp,37
1c01a294:	cb6ff0ef          	jal	ra,1c01974a <pos_libc_to_x>
1c01a298:	02510793          	addi	a5,sp,37
1c01a29c:	953e                	add	a0,a0,a5
1c01a29e:	4805                	li	a6,1
1c01a2a0:	41950d33          	sub	s10,a0,s9
1c01a2a4:	c042                	sw	a6,0(sp)
1c01a2a6:	b129                	j	1c019eb0 <pos_libc_prf+0x6f2>
1c01a2a8:	eda7c263          	blt	a5,s10,1c01996c <pos_libc_prf+0x1ae>
1c01a2ac:	895a                	mv	s2,s6
1c01a2ae:	beb5                	j	1c019e2a <pos_libc_prf+0x66c>
1c01a2b0:	8b36                	mv	s6,a3
1c01a2b2:	e22ff06f          	j	1c0198d4 <pos_libc_prf+0x116>
1c01a2b6:	4702                	lw	a4,0(sp)
1c01a2b8:	cc02                	sw	zero,24(sp)
1c01a2ba:	e701                	bnez	a4,1c01a2c2 <pos_libc_prf+0xb04>
1c01a2bc:	017037b3          	snez	a5,s7
1c01a2c0:	cc3e                	sw	a5,24(sp)
1c01a2c2:	56f5                	li	a3,-3
1c01a2c4:	001b8713          	addi	a4,s7,1
1c01a2c8:	00d3c463          	blt	t2,a3,1c01a2d0 <pos_libc_prf+0xb12>
1c01a2cc:	c8775ce3          	ble	t2,a4,1c019f64 <pos_libc_prf+0x7a6>
1c01a2d0:	4841                	li	a6,16
1c01a2d2:	05074733          	p.min	a4,a4,a6
1c01a2d6:	06700693          	li	a3,103
1c01a2da:	fff70293          	addi	t0,a4,-1 # 7fffffff <pulp__FC+0x80000000>
1c01a2de:	28dc0763          	beq	s8,a3,1c01a56c <pos_libc_prf+0xdae>
1c01a2e2:	04500c13          	li	s8,69
1c01a2e6:	badd                	j	1c019cdc <pos_libc_prf+0x51e>
1c01a2e8:	46a2                	lw	a3,8(sp)
1c01a2ea:	1c068963          	beqz	a3,1c01a4bc <pos_libc_prf+0xcfe>
1c01a2ee:	02b00713          	li	a4,43
1c01a2f2:	02e10223          	sb	a4,36(sp)
1c01a2f6:	02510b13          	addi	s6,sp,37
1c01a2fa:	4381                	li	t2,0
1c01a2fc:	4301                	li	t1,0
1c01a2fe:	4601                	li	a2,0
1c01a300:	4701                	li	a4,0
1c01a302:	02410c93          	addi	s9,sp,36
1c01a306:	b241                	j	1c019c86 <pos_libc_prf+0x4c8>
1c01a308:	02510513          	addi	a0,sp,37
1c01a30c:	86de                	mv	a3,s7
1c01a30e:	4621                	li	a2,8
1c01a310:	c3aff0ef          	jal	ra,1c01974a <pos_libc_to_x>
1c01a314:	4302                	lw	t1,0(sp)
1c01a316:	0c800793          	li	a5,200
1c01a31a:	00650d33          	add	s10,a0,t1
1c01a31e:	09fba063          	p.beqimm	s7,-1,1c01a39e <pos_libc_prf+0xbe0>
1c01a322:	e5a7c563          	blt	a5,s10,1c01996c <pos_libc_prf+0x1ae>
1c01a326:	02000813          	li	a6,32
1c01a32a:	895a                	mv	s2,s6
1c01a32c:	c002                	sw	zero,0(sp)
1c01a32e:	c242                	sw	a6,4(sp)
1c01a330:	bced                	j	1c019e2a <pos_libc_prf+0x66c>
1c01a332:	02b00793          	li	a5,43
1c01a336:	02f10223          	sb	a5,36(sp)
1c01a33a:	beb9                	j	1c019e98 <pos_libc_prf+0x6da>
1c01a33c:	1048                	addi	a0,sp,36
1c01a33e:	b7f9                	j	1c01a30c <pos_libc_prf+0xb4e>
1c01a340:	02410c93          	addi	s9,sp,36
1c01a344:	86e6                	mv	a3,s9
1c01a346:	2005c163          	bltz	a1,1c01a548 <pos_libc_prf+0xd8a>
1c01a34a:	8e59                	or	a2,a2,a4
1c01a34c:	fbfc0793          	addi	a5,s8,-65
1c01a350:	00368513          	addi	a0,a3,3
1c01a354:	4765                	li	a4,25
1c01a356:	18061463          	bnez	a2,1c01a4de <pos_libc_prf+0xd20>
1c01a35a:	1cf76d63          	bltu	a4,a5,1c01a534 <pos_libc_prf+0xd76>
1c01a35e:	6795                	lui	a5,0x5
1c01a360:	e4978793          	addi	a5,a5,-439 # 4e49 <__cluster_text_size+0x4e49>
1c01a364:	00f69023          	sh	a5,0(a3)
1c01a368:	04600793          	li	a5,70
1c01a36c:	00f68123          	sb	a5,2(a3)
1c01a370:	000681a3          	sb	zero,3(a3)
1c01a374:	41950d33          	sub	s10,a0,s9
1c01a378:	bbfd                	j	1c01a176 <pos_libc_prf+0x9b8>
1c01a37a:	4b99                	li	s7,6
1c01a37c:	94ec11e3          	bne	s8,a4,1c019cbe <pos_libc_prf+0x500>
1c01a380:	4682                	lw	a3,0(sp)
1c01a382:	57f5                	li	a5,-3
1c01a384:	0016c693          	xori	a3,a3,1
1c01a388:	cc36                	sw	a3,24(sp)
1c01a38a:	1cf3dd63          	ble	a5,t2,1c01a564 <pos_libc_prf+0xda6>
1c01a38e:	001b0693          	addi	a3,s6,1
1c01a392:	ca36                	sw	a3,20(sp)
1c01a394:	8536                	mv	a0,a3
1c01a396:	06500c13          	li	s8,101
1c01a39a:	4299                	li	t0,6
1c01a39c:	b2a1                	j	1c019ce4 <pos_libc_prf+0x526>
1c01a39e:	dda7c763          	blt	a5,s10,1c01996c <pos_libc_prf+0x1ae>
1c01a3a2:	895a                	mv	s2,s6
1c01a3a4:	c002                	sw	zero,0(sp)
1c01a3a6:	b451                	j	1c019e2a <pos_libc_prf+0x66c>
1c01a3a8:	d80b84e3          	beqz	s7,1c01a130 <pos_libc_prf+0x972>
1c01a3ac:	02e00713          	li	a4,46
1c01a3b0:	002b0813          	addi	a6,s6,2
1c01a3b4:	00eb00a3          	sb	a4,1(s6)
1c01a3b8:	fffb8893          	addi	a7,s7,-1
1c01a3bc:	bb29                	j	1c01a0d6 <pos_libc_prf+0x918>
1c01a3be:	18705c63          	blez	t2,1c01a556 <pos_libc_prf+0xd98>
1c01a3c2:	4552                	lw	a0,20(sp)
1c01a3c4:	4641                	li	a2,16
1c01a3c6:	859e                	mv	a1,t2
1c01a3c8:	0295c0fb          	lp.setup	x1,a1,1c01a41a <pos_libc_prf+0xc5c>
1c01a3cc:	002d1793          	slli	a5,s10,0x2
1c01a3d0:	01ed5893          	srli	a7,s10,0x1e
1c01a3d4:	00269713          	slli	a4,a3,0x2
1c01a3d8:	01a78833          	add	a6,a5,s10
1c01a3dc:	00e8e733          	or	a4,a7,a4
1c01a3e0:	9736                	add	a4,a4,a3
1c01a3e2:	00f837b3          	sltu	a5,a6,a5
1c01a3e6:	97ba                	add	a5,a5,a4
1c01a3e8:	0786                	slli	a5,a5,0x1
1c01a3ea:	01f85713          	srli	a4,a6,0x1f
1c01a3ee:	8fd9                	or	a5,a5,a4
1c01a3f0:	01c7d313          	srli	t1,a5,0x1c
1c01a3f4:	03000893          	li	a7,48
1c01a3f8:	872a                	mv	a4,a0
1c01a3fa:	00c05c63          	blez	a2,1c01a412 <pos_libc_prf+0xc54>
1c01a3fe:	00181d13          	slli	s10,a6,0x1
1c01a402:	10000837          	lui	a6,0x10000
1c01a406:	187d                	addi	a6,a6,-1
1c01a408:	03030893          	addi	a7,t1,48 # 10000030 <__l2_shared_end+0x28>
1c01a40c:	167d                	addi	a2,a2,-1
1c01a40e:	0107f6b3          	and	a3,a5,a6
1c01a412:	011b0023          	sb	a7,0(s6)
1c01a416:	13fd                	addi	t2,t2,-1
1c01a418:	8b2a                	mv	s6,a0
1c01a41a:	0505                	addi	a0,a0,1
1c01a41c:	4302                	lw	t1,0(sp)
1c01a41e:	00031563          	bnez	t1,1c01a428 <pos_libc_prf+0xc6a>
1c01a422:	853a                	mv	a0,a4
1c01a424:	d60b8be3          	beqz	s7,1c01a19a <pos_libc_prf+0x9dc>
1c01a428:	02e00793          	li	a5,46
1c01a42c:	00170513          	addi	a0,a4,1
1c01a430:	00f70023          	sb	a5,0(a4)
1c01a434:	03000593          	li	a1,48
1c01a438:	fffb8313          	addi	t1,s7,-1
1c01a43c:	d5705fe3          	blez	s7,1c01a19a <pos_libc_prf+0x9dc>
1c01a440:	002d1793          	slli	a5,s10,0x2
1c01a444:	01ed5893          	srli	a7,s10,0x1e
1c01a448:	00269713          	slli	a4,a3,0x2
1c01a44c:	01a78833          	add	a6,a5,s10
1c01a450:	00e8e733          	or	a4,a7,a4
1c01a454:	9736                	add	a4,a4,a3
1c01a456:	00f837b3          	sltu	a5,a6,a5
1c01a45a:	97ba                	add	a5,a5,a4
1c01a45c:	0786                	slli	a5,a5,0x1
1c01a45e:	01f85713          	srli	a4,a6,0x1f
1c01a462:	8fd9                	or	a5,a5,a4
1c01a464:	01c7de13          	srli	t3,a5,0x1c
1c01a468:	00150893          	addi	a7,a0,1
1c01a46c:	02039563          	bnez	t2,1c01a496 <pos_libc_prf+0xcd8>
1c01a470:	03000713          	li	a4,48
1c01a474:	00c05c63          	blez	a2,1c01a48c <pos_libc_prf+0xcce>
1c01a478:	00181d13          	slli	s10,a6,0x1
1c01a47c:	10000837          	lui	a6,0x10000
1c01a480:	187d                	addi	a6,a6,-1
1c01a482:	030e0713          	addi	a4,t3,48
1c01a486:	167d                	addi	a2,a2,-1
1c01a488:	0107f6b3          	and	a3,a5,a6
1c01a48c:	00e50023          	sb	a4,0(a0)
1c01a490:	8b9a                	mv	s7,t1
1c01a492:	8546                	mv	a0,a7
1c01a494:	b755                	j	1c01a438 <pos_libc_prf+0xc7a>
1c01a496:	00b50023          	sb	a1,0(a0)
1c01a49a:	0385                	addi	t2,t2,1
1c01a49c:	bfd5                	j	1c01a490 <pos_libc_prf+0xcd2>
1c01a49e:	02d00793          	li	a5,45
1c01a4a2:	407003b3          	neg	t2,t2
1c01a4a6:	00f500a3          	sb	a5,1(a0)
1c01a4aa:	b165                	j	1c01a152 <pos_libc_prf+0x994>
1c01a4ac:	86de                	mv	a3,s7
1c01a4ae:	4629                	li	a2,10
1c01a4b0:	8566                	mv	a0,s9
1c01a4b2:	a98ff0ef          	jal	ra,1c01974a <pos_libc_to_x>
1c01a4b6:	8d2a                	mv	s10,a0
1c01a4b8:	c002                	sw	zero,0(sp)
1c01a4ba:	badd                	j	1c019eb0 <pos_libc_prf+0x6f2>
1c01a4bc:	4632                	lw	a2,12(sp)
1c01a4be:	10060163          	beqz	a2,1c01a5c0 <pos_libc_prf+0xe02>
1c01a4c2:	02000713          	li	a4,32
1c01a4c6:	02e10223          	sb	a4,36(sp)
1c01a4ca:	02510b13          	addi	s6,sp,37
1c01a4ce:	02410c93          	addi	s9,sp,36
1c01a4d2:	4381                	li	t2,0
1c01a4d4:	4301                	li	t1,0
1c01a4d6:	4601                	li	a2,0
1c01a4d8:	4701                	li	a4,0
1c01a4da:	facff06f          	j	1c019c86 <pos_libc_prf+0x4c8>
1c01a4de:	0af76663          	bltu	a4,a5,1c01a58a <pos_libc_prf+0xdcc>
1c01a4e2:	6791                	lui	a5,0x4
1c01a4e4:	14e78793          	addi	a5,a5,334 # 414e <__cluster_text_size+0x414e>
1c01a4e8:	00f69023          	sh	a5,0(a3)
1c01a4ec:	04e00793          	li	a5,78
1c01a4f0:	00f68123          	sb	a5,2(a3)
1c01a4f4:	bdb5                	j	1c01a370 <pos_libc_prf+0xbb2>
1c01a4f6:	c002                	sw	zero,0(sp)
1c01a4f8:	b9cd                	j	1c01a1ea <pos_libc_prf+0xa2c>
1c01a4fa:	86de                	mv	a3,s7
1c01a4fc:	4629                	li	a2,10
1c01a4fe:	800005b7          	lui	a1,0x80000
1c01a502:	b379                	j	1c01a290 <pos_libc_prf+0xad2>
1c01a504:	4832                	lw	a6,12(sp)
1c01a506:	02410c93          	addi	s9,sp,36
1c01a50a:	8b66                	mv	s6,s9
1c01a50c:	e0080d63          	beqz	a6,1c019b26 <pos_libc_prf+0x368>
1c01a510:	02000693          	li	a3,32
1c01a514:	02d10223          	sb	a3,36(sp)
1c01a518:	02510b13          	addi	s6,sp,37
1c01a51c:	e0aff06f          	j	1c019b26 <pos_libc_prf+0x368>
1c01a520:	02d00693          	li	a3,45
1c01a524:	02d10223          	sb	a3,36(sp)
1c01a528:	02510b13          	addi	s6,sp,37
1c01a52c:	02410c93          	addi	s9,sp,36
1c01a530:	df6ff06f          	j	1c019b26 <pos_libc_prf+0x368>
1c01a534:	679d                	lui	a5,0x7
1c01a536:	e6978793          	addi	a5,a5,-407 # 6e69 <__cluster_text_size+0x6e69>
1c01a53a:	00f69023          	sh	a5,0(a3)
1c01a53e:	06600793          	li	a5,102
1c01a542:	00f68123          	sb	a5,2(a3)
1c01a546:	b52d                	j	1c01a370 <pos_libc_prf+0xbb2>
1c01a548:	02d00693          	li	a3,45
1c01a54c:	02d10223          	sb	a3,36(sp)
1c01a550:	02510693          	addi	a3,sp,37
1c01a554:	bbdd                	j	1c01a34a <pos_libc_prf+0xb8c>
1c01a556:	03000793          	li	a5,48
1c01a55a:	00fb0023          	sb	a5,0(s6)
1c01a55e:	4752                	lw	a4,20(sp)
1c01a560:	4641                	li	a2,16
1c01a562:	bd6d                	j	1c01a41c <pos_libc_prf+0xc5e>
1c01a564:	479d                	li	a5,7
1c01a566:	9e77dfe3          	ble	t2,a5,1c019f64 <pos_libc_prf+0x7a6>
1c01a56a:	4299                	li	t0,6
1c01a56c:	06500c13          	li	s8,101
1c01a570:	f6cff06f          	j	1c019cdc <pos_libc_prf+0x51e>
1c01a574:	4772                	lw	a4,28(sp)
1c01a576:	080006b7          	lui	a3,0x8000
1c01a57a:	96ba                	add	a3,a3,a4
1c01a57c:	f606b7b3          	p.bclr	a5,a3,27,0
1c01a580:	e2078fe3          	beqz	a5,1c01a3be <pos_libc_prf+0xc00>
1c01a584:	06600c13          	li	s8,102
1c01a588:	bc19                	j	1c019f9e <pos_libc_prf+0x7e0>
1c01a58a:	6799                	lui	a5,0x6
1c01a58c:	16e78793          	addi	a5,a5,366 # 616e <__cluster_text_size+0x616e>
1c01a590:	00f69023          	sh	a5,0(a3) # 8000000 <__l1_heap_size+0x7fc0008>
1c01a594:	06e00793          	li	a5,110
1c01a598:	00f68123          	sb	a5,2(a3)
1c01a59c:	bbd1                	j	1c01a370 <pos_libc_prf+0xbb2>
1c01a59e:	4785                	li	a5,1
1c01a5a0:	4612                	lw	a2,4(sp)
1c01a5a2:	4702                	lw	a4,0(sp)
1c01a5a4:	b185                	j	1c01a204 <pos_libc_prf+0xa46>
1c01a5a6:	02414783          	lbu	a5,36(sp)
1c01a5aa:	c799                	beqz	a5,1c01a5b8 <pos_libc_prf+0xdfa>
1c01a5ac:	4689                	li	a3,2
1c01a5ae:	02410c93          	addi	s9,sp,36
1c01a5b2:	b971                	j	1c01a24e <pos_libc_prf+0xa90>
1c01a5b4:	4785                	li	a5,1
1c01a5b6:	b045                	j	1c019e56 <pos_libc_prf+0x698>
1c01a5b8:	4709                	li	a4,2
1c01a5ba:	0d09                	addi	s10,s10,2
1c01a5bc:	c03a                	sw	a4,0(sp)
1c01a5be:	b8a1                	j	1c019e16 <pos_libc_prf+0x658>
1c01a5c0:	02410c93          	addi	s9,sp,36
1c01a5c4:	8b66                	mv	s6,s9
1c01a5c6:	b731                	j	1c01a4d2 <pos_libc_prf+0xd14>
1c01a5c8:	8542                	mv	a0,a6
1c01a5ca:	b69d                	j	1c01a130 <pos_libc_prf+0x972>

1c01a5cc <pos_init_start>:
1c01a5cc:	1141                	addi	sp,sp,-16
1c01a5ce:	c422                	sw	s0,8(sp)
1c01a5d0:	1c000437          	lui	s0,0x1c000
1c01a5d4:	c606                	sw	ra,12(sp)
1c01a5d6:	00840413          	addi	s0,s0,8 # 1c000008 <ctor_list>
1c01a5da:	846ff0ef          	jal	ra,1c019620 <pos_soc_init>
1c01a5de:	2a41                	jal	1c01a76e <pos_irq_init>
1c01a5e0:	2ac9                	jal	1c01a7b2 <pos_soc_event_init>
1c01a5e2:	20e5                	jal	1c01a6ca <pos_allocs_init>
1c01a5e4:	405c                	lw	a5,4(s0)
1c01a5e6:	c791                	beqz	a5,1c01a5f2 <pos_init_start+0x26>
1c01a5e8:	0411                	addi	s0,s0,4
1c01a5ea:	0411                	addi	s0,s0,4
1c01a5ec:	9782                	jalr	a5
1c01a5ee:	401c                	lw	a5,0(s0)
1c01a5f0:	ffed                	bnez	a5,1c01a5ea <pos_init_start+0x1e>
1c01a5f2:	922ff0ef          	jal	ra,1c019714 <pos_io_start>
1c01a5f6:	300467f3          	csrrsi	a5,mstatus,8
1c01a5fa:	f1402573          	csrr	a0,mhartid
1c01a5fe:	8515                	srai	a0,a0,0x5
1c01a600:	f2653533          	p.bclr	a0,a0,25,6
1c01a604:	47fd                	li	a5,31
1c01a606:	00f50a63          	beq	a0,a5,1c01a61a <pos_init_start+0x4e>
1c01a60a:	4422                	lw	s0,8(sp)
1c01a60c:	40b2                	lw	ra,12(sp)
1c01a60e:	1c0195b7          	lui	a1,0x1c019
1c01a612:	57458593          	addi	a1,a1,1396 # 1c019574 <main>
1c01a616:	0141                	addi	sp,sp,16
1c01a618:	a40d                	j	1c01a83a <cluster_start>
1c01a61a:	40b2                	lw	ra,12(sp)
1c01a61c:	4422                	lw	s0,8(sp)
1c01a61e:	0141                	addi	sp,sp,16
1c01a620:	8082                	ret

1c01a622 <pos_init_stop>:
1c01a622:	1141                	addi	sp,sp,-16
1c01a624:	c422                	sw	s0,8(sp)
1c01a626:	1c000437          	lui	s0,0x1c000
1c01a62a:	c606                	sw	ra,12(sp)
1c01a62c:	01440413          	addi	s0,s0,20 # 1c000014 <dtor_list>
1c01a630:	8e8ff0ef          	jal	ra,1c019718 <pos_io_stop>
1c01a634:	405c                	lw	a5,4(s0)
1c01a636:	c791                	beqz	a5,1c01a642 <pos_init_stop+0x20>
1c01a638:	0411                	addi	s0,s0,4
1c01a63a:	0411                	addi	s0,s0,4
1c01a63c:	9782                	jalr	a5
1c01a63e:	401c                	lw	a5,0(s0)
1c01a640:	ffed                	bnez	a5,1c01a63a <pos_init_stop+0x18>
1c01a642:	40b2                	lw	ra,12(sp)
1c01a644:	4422                	lw	s0,8(sp)
1c01a646:	0141                	addi	sp,sp,16
1c01a648:	8082                	ret

1c01a64a <pos_alloc_init>:
1c01a64a:	00758793          	addi	a5,a1,7
1c01a64e:	c407b7b3          	p.bclr	a5,a5,2,0
1c01a652:	40b785b3          	sub	a1,a5,a1
1c01a656:	c11c                	sw	a5,0(a0)
1c01a658:	8e0d                	sub	a2,a2,a1
1c01a65a:	00c05763          	blez	a2,1c01a668 <pos_alloc_init+0x1e>
1c01a65e:	c4063633          	p.bclr	a2,a2,2,0
1c01a662:	c390                	sw	a2,0(a5)
1c01a664:	0007a223          	sw	zero,4(a5)
1c01a668:	8082                	ret

1c01a66a <pos_alloc>:
1c01a66a:	4110                	lw	a2,0(a0)
1c01a66c:	059d                	addi	a1,a1,7
1c01a66e:	c405b5b3          	p.bclr	a1,a1,2,0
1c01a672:	ca31                	beqz	a2,1c01a6c6 <pos_alloc+0x5c>
1c01a674:	4218                	lw	a4,0(a2)
1c01a676:	425c                	lw	a5,4(a2)
1c01a678:	02b75963          	ble	a1,a4,1c01a6aa <pos_alloc+0x40>
1c01a67c:	cb81                	beqz	a5,1c01a68c <pos_alloc+0x22>
1c01a67e:	4398                	lw	a4,0(a5)
1c01a680:	43d4                	lw	a3,4(a5)
1c01a682:	00b75763          	ble	a1,a4,1c01a690 <pos_alloc+0x26>
1c01a686:	863e                	mv	a2,a5
1c01a688:	87b6                	mv	a5,a3
1c01a68a:	fbf5                	bnez	a5,1c01a67e <pos_alloc+0x14>
1c01a68c:	853e                	mv	a0,a5
1c01a68e:	8082                	ret
1c01a690:	00b70a63          	beq	a4,a1,1c01a6a4 <pos_alloc+0x3a>
1c01a694:	00b78533          	add	a0,a5,a1
1c01a698:	8f0d                	sub	a4,a4,a1
1c01a69a:	c118                	sw	a4,0(a0)
1c01a69c:	c154                	sw	a3,4(a0)
1c01a69e:	c248                	sw	a0,4(a2)
1c01a6a0:	853e                	mv	a0,a5
1c01a6a2:	8082                	ret
1c01a6a4:	c254                	sw	a3,4(a2)
1c01a6a6:	853e                	mv	a0,a5
1c01a6a8:	8082                	ret
1c01a6aa:	00e58b63          	beq	a1,a4,1c01a6c0 <pos_alloc+0x56>
1c01a6ae:	00b606b3          	add	a3,a2,a1
1c01a6b2:	8f0d                	sub	a4,a4,a1
1c01a6b4:	c2dc                	sw	a5,4(a3)
1c01a6b6:	c298                	sw	a4,0(a3)
1c01a6b8:	87b2                	mv	a5,a2
1c01a6ba:	c114                	sw	a3,0(a0)
1c01a6bc:	853e                	mv	a0,a5
1c01a6be:	8082                	ret
1c01a6c0:	c11c                	sw	a5,0(a0)
1c01a6c2:	87b2                	mv	a5,a2
1c01a6c4:	b7e1                	j	1c01a68c <pos_alloc+0x22>
1c01a6c6:	4781                	li	a5,0
1c01a6c8:	b7d1                	j	1c01a68c <pos_alloc+0x22>

1c01a6ca <pos_allocs_init>:
1c01a6ca:	1141                	addi	sp,sp,-16
1c01a6cc:	1c0195b7          	lui	a1,0x1c019
1c01a6d0:	c606                	sw	ra,12(sp)
1c01a6d2:	24458793          	addi	a5,a1,580 # 1c019244 <__l2_priv0_end>
1c01a6d6:	1c008637          	lui	a2,0x1c008
1c01a6da:	04c7cc63          	blt	a5,a2,1c01a732 <pos_allocs_init+0x68>
1c01a6de:	4581                	li	a1,0
1c01a6e0:	4601                	li	a2,0
1c01a6e2:	1c019537          	lui	a0,0x1c019
1c01a6e6:	23450513          	addi	a0,a0,564 # 1c019234 <pos_alloc_l2>
1c01a6ea:	3785                	jal	1c01a64a <pos_alloc_init>
1c01a6ec:	1c01b5b7          	lui	a1,0x1c01b
1c01a6f0:	8ec58793          	addi	a5,a1,-1812 # 1c01a8ec <__l2_priv1_end>
1c01a6f4:	1c010637          	lui	a2,0x1c010
1c01a6f8:	02c7c963          	blt	a5,a2,1c01a72a <pos_allocs_init+0x60>
1c01a6fc:	4581                	li	a1,0
1c01a6fe:	4601                	li	a2,0
1c01a700:	1c019537          	lui	a0,0x1c019
1c01a704:	23850513          	addi	a0,a0,568 # 1c019238 <pos_alloc_l2+0x4>
1c01a708:	3789                	jal	1c01a64a <pos_alloc_init>
1c01a70a:	100005b7          	lui	a1,0x10000
1c01a70e:	40b2                	lw	ra,12(sp)
1c01a710:	00858793          	addi	a5,a1,8 # 10000008 <__l2_shared_end>
1c01a714:	1c080637          	lui	a2,0x1c080
1c01a718:	1c019537          	lui	a0,0x1c019
1c01a71c:	8e1d                	sub	a2,a2,a5
1c01a71e:	00858593          	addi	a1,a1,8
1c01a722:	23c50513          	addi	a0,a0,572 # 1c01923c <pos_alloc_l2+0x8>
1c01a726:	0141                	addi	sp,sp,16
1c01a728:	b70d                	j	1c01a64a <pos_alloc_init>
1c01a72a:	8e1d                	sub	a2,a2,a5
1c01a72c:	8ec58593          	addi	a1,a1,-1812
1c01a730:	bfc1                	j	1c01a700 <pos_allocs_init+0x36>
1c01a732:	8e1d                	sub	a2,a2,a5
1c01a734:	24458593          	addi	a1,a1,580
1c01a738:	b76d                	j	1c01a6e2 <pos_allocs_init+0x18>

1c01a73a <alloc_init_l1>:
1c01a73a:	100007b7          	lui	a5,0x10000
1c01a73e:	01651593          	slli	a1,a0,0x16
1c01a742:	00878793          	addi	a5,a5,8 # 10000008 <__l2_shared_end>
1c01a746:	95be                	add	a1,a1,a5
1c01a748:	1c0197b7          	lui	a5,0x1c019
1c01a74c:	050a                	slli	a0,a0,0x2
1c01a74e:	00040637          	lui	a2,0x40
1c01a752:	23078793          	addi	a5,a5,560 # 1c019230 <pos_alloc_l1>
1c01a756:	ff860613          	addi	a2,a2,-8 # 3fff8 <__l1_heap_size>
1c01a75a:	953e                	add	a0,a0,a5
1c01a75c:	b5fd                	j	1c01a64a <pos_alloc_init>

1c01a75e <pi_l1_malloc>:
1c01a75e:	1c0197b7          	lui	a5,0x1c019
1c01a762:	050a                	slli	a0,a0,0x2
1c01a764:	23078793          	addi	a5,a5,560 # 1c019230 <pos_alloc_l1>
1c01a768:	953e                	add	a0,a0,a5
1c01a76a:	b701                	j	1c01a66a <pos_alloc>

1c01a76c <__rt_handle_illegal_instr>:
1c01a76c:	8082                	ret

1c01a76e <pos_irq_init>:
1c01a76e:	f14027f3          	csrr	a5,mhartid
1c01a772:	477d                	li	a4,31
1c01a774:	ca5797b3          	p.extractu	a5,a5,5,5
1c01a778:	00e78f63          	beq	a5,a4,1c01a796 <pos_irq_init+0x28>
1c01a77c:	002047b7          	lui	a5,0x204
1c01a780:	577d                	li	a4,-1
1c01a782:	cb98                	sw	a4,16(a5)
1c01a784:	1c0197b7          	lui	a5,0x1c019
1c01a788:	30078793          	addi	a5,a5,768 # 1c019300 <__irq_vector_base>
1c01a78c:	c007c7b3          	p.bset	a5,a5,0,0
1c01a790:	30579073          	csrw	mtvec,a5
1c01a794:	8082                	ret
1c01a796:	1a10a7b7          	lui	a5,0x1a10a
1c01a79a:	577d                	li	a4,-1
1c01a79c:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa109800>
1c01a7a0:	1c0197b7          	lui	a5,0x1c019
1c01a7a4:	30078793          	addi	a5,a5,768 # 1c019300 <__irq_vector_base>
1c01a7a8:	c007c7b3          	p.bset	a5,a5,0,0
1c01a7ac:	30579073          	csrw	mtvec,a5
1c01a7b0:	8082                	ret

1c01a7b2 <pos_soc_event_init>:
1c01a7b2:	1a1067b7          	lui	a5,0x1a106
1c01a7b6:	577d                	li	a4,-1
1c01a7b8:	00478693          	addi	a3,a5,4 # 1a106004 <__l2_shared_end+0xa105ffc>
1c01a7bc:	c298                	sw	a4,0(a3)
1c01a7be:	00878693          	addi	a3,a5,8
1c01a7c2:	c298                	sw	a4,0(a3)
1c01a7c4:	00c78693          	addi	a3,a5,12
1c01a7c8:	c298                	sw	a4,0(a3)
1c01a7ca:	01078693          	addi	a3,a5,16
1c01a7ce:	c298                	sw	a4,0(a3)
1c01a7d0:	01478693          	addi	a3,a5,20
1c01a7d4:	c298                	sw	a4,0(a3)
1c01a7d6:	01878693          	addi	a3,a5,24
1c01a7da:	c298                	sw	a4,0(a3)
1c01a7dc:	01c78693          	addi	a3,a5,28
1c01a7e0:	c298                	sw	a4,0(a3)
1c01a7e2:	02078793          	addi	a5,a5,32
1c01a7e6:	c398                	sw	a4,0(a5)
1c01a7e8:	8082                	ret

1c01a7ea <cluster_entry_stub>:
1c01a7ea:	1141                	addi	sp,sp,-16
1c01a7ec:	c606                	sw	ra,12(sp)
1c01a7ee:	002047b7          	lui	a5,0x204
1c01a7f2:	00070737          	lui	a4,0x70
1c01a7f6:	c798                	sw	a4,8(a5)
1c01a7f8:	0ff00713          	li	a4,255
1c01a7fc:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1c4208>
1c01a800:	00e7a023          	sw	a4,0(a5)
1c01a804:	00e7a623          	sw	a4,12(a5)
1c01a808:	1c0197b7          	lui	a5,0x1c019
1c01a80c:	2407a783          	lw	a5,576(a5) # 1c019240 <cluster_entry>
1c01a810:	9782                	jalr	a5
1c01a812:	f14027f3          	csrr	a5,mhartid
1c01a816:	f457b7b3          	p.bclr	a5,a5,26,5
1c01a81a:	eb89                	bnez	a5,1c01a82c <cluster_entry_stub+0x42>
1c01a81c:	1c019737          	lui	a4,0x1c019
1c01a820:	1c0197b7          	lui	a5,0x1c019
1c01a824:	22a72423          	sw	a0,552(a4) # 1c019228 <_bss_start>
1c01a828:	2207a623          	sw	zero,556(a5) # 1c01922c <cluster_running>
1c01a82c:	002047b7          	lui	a5,0x204
1c01a830:	577d                	li	a4,-1
1c01a832:	c3d8                	sw	a4,4(a5)
1c01a834:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1c4040>
1c01a838:	a001                	j	1c01a838 <cluster_entry_stub+0x4e>

1c01a83a <cluster_start>:
1c01a83a:	1141                	addi	sp,sp,-16
1c01a83c:	1c0197b7          	lui	a5,0x1c019
1c01a840:	c226                	sw	s1,4(sp)
1c01a842:	84aa                	mv	s1,a0
1c01a844:	4509                	li	a0,2
1c01a846:	24b7a023          	sw	a1,576(a5) # 1c019240 <cluster_entry>
1c01a84a:	c606                	sw	ra,12(sp)
1c01a84c:	c422                	sw	s0,8(sp)
1c01a84e:	d29fe0ef          	jal	ra,1c019576 <pos_fll_init>
1c01a852:	8526                	mv	a0,s1
1c01a854:	35dd                	jal	1c01a73a <alloc_init_l1>
1c01a856:	04048413          	addi	s0,s1,64
1c01a85a:	00201737          	lui	a4,0x201
1c01a85e:	40070713          	addi	a4,a4,1024 # 201400 <__l1_heap_size+0x1c1408>
1c01a862:	045a                	slli	s0,s0,0x16
1c01a864:	56fd                	li	a3,-1
1c01a866:	f14027f3          	csrr	a5,mhartid
1c01a86a:	00d46723          	p.sw	a3,a4(s0)
1c01a86e:	ca5797b3          	p.extractu	a5,a5,5,5
1c01a872:	477d                	li	a4,31
1c01a874:	00e78f63          	beq	a5,a4,1c01a892 <cluster_start+0x58>
1c01a878:	002047b7          	lui	a5,0x204
1c01a87c:	00070737          	lui	a4,0x70
1c01a880:	c798                	sw	a4,8(a5)
1c01a882:	0ff00713          	li	a4,255
1c01a886:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1c4208>
1c01a88a:	00e7a023          	sw	a4,0(a5)
1c01a88e:	00e7a623          	sw	a4,12(a5)
1c01a892:	8526                	mv	a0,s1
1c01a894:	355d                	jal	1c01a73a <alloc_init_l1>
1c01a896:	6591                	lui	a1,0x4
1c01a898:	8526                	mv	a0,s1
1c01a89a:	35d1                	jal	1c01a75e <pi_l1_malloc>
1c01a89c:	100007b7          	lui	a5,0x10000
1c01a8a0:	00a7a223          	sw	a0,4(a5) # 10000004 <cluster_stacks>
1c01a8a4:	cd15                	beqz	a0,1c01a8e0 <cluster_start+0xa6>
1c01a8a6:	00200637          	lui	a2,0x200
1c01a8aa:	1c0197b7          	lui	a5,0x1c019
1c01a8ae:	4705                	li	a4,1
1c01a8b0:	1c0195b7          	lui	a1,0x1c019
1c01a8b4:	04060613          	addi	a2,a2,64 # 200040 <__l1_heap_size+0x1c0048>
1c01a8b8:	22e7a623          	sw	a4,556(a5) # 1c01922c <cluster_running>
1c01a8bc:	38058593          	addi	a1,a1,896 # 1c019380 <_start>
1c01a8c0:	9622                	add	a2,a2,s0
1c01a8c2:	4701                	li	a4,0
1c01a8c4:	008350fb          	lp.setupi	x1,8,1c01a8d0 <cluster_start+0x96>
1c01a8c8:	00271693          	slli	a3,a4,0x2
1c01a8cc:	00b6e623          	p.sw	a1,a2(a3)
1c01a8d0:	0705                	addi	a4,a4,1
1c01a8d2:	002007b7          	lui	a5,0x200
1c01a8d6:	07a1                	addi	a5,a5,8
1c01a8d8:	0ff00713          	li	a4,255
1c01a8dc:	00e467a3          	p.sw	a4,a5(s0)
1c01a8e0:	40b2                	lw	ra,12(sp)
1c01a8e2:	4422                	lw	s0,8(sp)
1c01a8e4:	4492                	lw	s1,4(sp)
1c01a8e6:	0141                	addi	sp,sp,16
1c01a8e8:	8082                	ret

1c01a8ea <_endtext>:
	...
make[1]: Leaving directory `/scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/main'
