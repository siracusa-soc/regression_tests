/usr/pack/pulpsdk-1.0-kgf/artifactory/pulp-sdk-release/pkg/pulp_riscv_gcc/1.0.16//bin/riscv32-unknown-elf-objdump -Mmarch=rv32imcxgap9 -d /home/prasadar/siracusa/siracusa_fe_01_Oct/siracusa-fe/regression_tests/ne_tests/ki28_32_w6_h6_fs3_and_ki36_ko_39_h7_w9_ns1_nb1_qw3_fs3_mram_sram_simultaneous_fast_buffer/build/ne16_test/ne16_test

/home/prasadar/siracusa/siracusa_fe_01_Oct/siracusa-fe/regression_tests/ne_tests/ki28_32_w6_h6_fs3_and_ki36_ko_39_h7_w9_ns1_nb1_qw3_fs3_mram_sram_simultaneous_fast_buffer/build/ne16_test/ne16_test:     file format elf32-littleriscv


Disassembly of section .vectors:

1c008000 <__irq_vector_base>:
1c008000:	2390106f          	j	1c009a38 <__rt_handle_illegal_instr>
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
1c008084:	1b50106f          	j	1c009a38 <__rt_handle_illegal_instr>

1c008088 <pos_no_irq_handler>:
1c008088:	30200073          	mret

1c00808c <pos_semihosting_call>:
1c00808c:	00100073          	ebreak
1c008090:	00008067          	ret

1c008094 <pe_start>:
1c008094:	f3ffd117          	auipc	sp,0xf3ffd
1c008098:	ea810113          	addi	sp,sp,-344 # 10004f3c <cluster_stacks>
1c00809c:	00012103          	lw	sp,0(sp)
1c0080a0:	000011b7          	lui	gp,0x1
1c0080a4:	80018193          	addi	gp,gp,-2048 # 800 <__cluster_text_size+0x800>
1c0080a8:	00158593          	addi	a1,a1,1
1c0080ac:	02b180b3          	mul	ra,gp,a1
1c0080b0:	00110133          	add	sp,sp,ra
1c0080b4:	2030106f          	j	1c009ab6 <cluster_entry_stub>

1c0080b8 <do_cl_boot>:
1c0080b8:	10200137          	lui	sp,0x10200
1c0080bc:	00100193          	li	gp,1
1c0080c0:	00000217          	auipc	tp,0x0
1c0080c4:	fc020213          	addi	tp,tp,-64 # 1c008080 <_start>
1c0080c8:	04412023          	sw	tp,64(sp) # 10200040 <__l2_shared_end+0x1fb100>
1c0080cc:	00312423          	sw	gp,8(sp)

1c0080d0 <loop>:
1c0080d0:	1a10a137          	lui	sp,0x1a10a
1c0080d4:	80010113          	addi	sp,sp,-2048 # 1a109800 <__l2_shared_end+0xa1048c0>
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
1c0080f8:	00000297          	auipc	t0,0x0
1c0080fc:	e9028293          	addi	t0,t0,-368 # 1c007f88 <_bss_start>
1c008100:	00000317          	auipc	t1,0x0
1c008104:	ea430313          	addi	t1,t1,-348 # 1c007fa4 <__l2_priv0_end>
1c008108:	0002a023          	sw	zero,0(t0)
1c00810c:	0291                	addi	t0,t0,4
1c00810e:	fe62ede3          	bltu	t0,t1,1c008108 <_stext+0x24>
1c008112:	ffff9117          	auipc	sp,0xffff9
1c008116:	80e10113          	addi	sp,sp,-2034 # 1c000920 <stack>
1c00811a:	780010ef          	jal	ra,1c00989a <pos_init_start>
1c00811e:	00000513          	li	a0,0
1c008122:	00000593          	li	a1,0
1c008126:	00000397          	auipc	t2,0x0
1c00812a:	30238393          	addi	t2,t2,770 # 1c008428 <main>
1c00812e:	000380e7          	jalr	t2
1c008132:	842a                	mv	s0,a0
1c008134:	7bc010ef          	jal	ra,1c0098f0 <pos_init_stop>
1c008138:	8522                	mv	a0,s0
1c00813a:	7fc000ef          	jal	ra,1c008936 <exit>

1c00813e <run_test>:
1c00813e:	1c000537          	lui	a0,0x1c000
1c008142:	715d                	addi	sp,sp,-80
1c008144:	07c50513          	addi	a0,a0,124 # 1c00007c <__DTOR_END__+0x60>
1c008148:	c686                	sw	ra,76(sp)
1c00814a:	c4a2                	sw	s0,72(sp)
1c00814c:	c2a6                	sw	s1,68(sp)
1c00814e:	c0ca                	sw	s2,64(sp)
1c008150:	de4e                	sw	s3,60(sp)
1c008152:	dc52                	sw	s4,56(sp)
1c008154:	da56                	sw	s5,52(sp)
1c008156:	d85a                	sw	s6,48(sp)
1c008158:	d65e                	sw	s7,44(sp)
1c00815a:	d462                	sw	s8,40(sp)
1c00815c:	2fb9                	jal	1c0088ba <puts>
1c00815e:	1c0067b7          	lui	a5,0x1c006
1c008162:	f8478793          	addi	a5,a5,-124 # 1c005f84 <ne16_weights>
1c008166:	20400737          	lui	a4,0x20400
1c00816a:	2006d0fb          	lp.setupi	x1,512,1c008184 <run_test+0x46>
1c00816e:	0007a803          	lw	a6,0(a5)
1c008172:	43c8                	lw	a0,4(a5)
1c008174:	478c                	lw	a1,8(a5)
1c008176:	47d0                	lw	a2,12(a5)
1c008178:	01072023          	sw	a6,0(a4) # 20400000 <__cluster_text_end+0x43f0000>
1c00817c:	c348                	sw	a0,4(a4)
1c00817e:	c70c                	sw	a1,8(a4)
1c008180:	c750                	sw	a2,12(a4)
1c008182:	07c1                	addi	a5,a5,16
1c008184:	0741                	addi	a4,a4,16
1c008186:	1c000537          	lui	a0,0x1c000
1c00818a:	09c50513          	addi	a0,a0,156 # 1c00009c <__DTOR_END__+0x80>
1c00818e:	2735                	jal	1c0088ba <puts>
1c008190:	102007b7          	lui	a5,0x10200
1c008194:	07e1                	addi	a5,a5,24
1c008196:	4398                	lw	a4,0(a5)
1c008198:	c0b74733          	p.bset	a4,a4,0,11
1c00819c:	c398                	sw	a4,0(a5)
1c00819e:	4398                	lw	a4,0(a5)
1c0081a0:	c0874733          	p.bset	a4,a4,0,8
1c0081a4:	c398                	sw	a4,0(a5)
1c0081a6:	4398                	lw	a4,0(a5)
1c0081a8:	ce073733          	p.bclr	a4,a4,7,0
1c0081ac:	c398                	sw	a4,0(a5)
1c0081ae:	4398                	lw	a4,0(a5)
1c0081b0:	c0374733          	p.bset	a4,a4,0,3
1c0081b4:	c398                	sw	a4,0(a5)
1c0081b6:	102017b7          	lui	a5,0x10201
1c0081ba:	0007aa23          	sw	zero,20(a5) # 10201014 <__l2_shared_end+0x1fc0d4>
1c0081be:	ce02                	sw	zero,28(sp)
1c0081c0:	4772                	lw	a4,28(sp)
1c0081c2:	47a5                	li	a5,9
1c0081c4:	00e7c963          	blt	a5,a4,1c0081d6 <run_test+0x98>
1c0081c8:	4725                	li	a4,9
1c0081ca:	47f2                	lw	a5,28(sp)
1c0081cc:	0785                	addi	a5,a5,1
1c0081ce:	ce3e                	sw	a5,28(sp)
1c0081d0:	47f2                	lw	a5,28(sp)
1c0081d2:	fef75ce3          	ble	a5,a4,1c0081ca <run_test+0x8c>
1c0081d6:	10201637          	lui	a2,0x10201
1c0081da:	0611                	addi	a2,a2,4
1c0081dc:	421c                	lw	a5,0(a2)
1c0081de:	0007dc63          	bgez	a5,1c0081f6 <run_test+0xb8>
1c0081e2:	6705                	lui	a4,0x1
1c0081e4:	002047b7          	lui	a5,0x204
1c0081e8:	c798                	sw	a4,8(a5)
1c0081ea:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1f8f7c>
1c0081ee:	c3d8                	sw	a4,4(a5)
1c0081f0:	4214                	lw	a3,0(a2)
1c0081f2:	fe06cbe3          	bltz	a3,1c0081e8 <run_test+0xaa>
1c0081f6:	102015b7          	lui	a1,0x10201
1c0081fa:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x1fc0e0>
1c0081fe:	0005a023          	sw	zero,0(a1)
1c008202:	100009b7          	lui	s3,0x10000
1c008206:	00498993          	addi	s3,s3,4 # 10000004 <ne16_infeat>
1c00820a:	0135a223          	sw	s3,4(a1)
1c00820e:	10004437          	lui	s0,0x10004
1c008212:	d3c40913          	addi	s2,s0,-708 # 10003d3c <ne16_streamin>
1c008216:	0125a423          	sw	s2,8(a1)
1c00821a:	70098793          	addi	a5,s3,1792
1c00821e:	00f5a623          	sw	a5,12(a1)
1c008222:	78098793          	addi	a5,s3,1920
1c008226:	00f5a823          	sw	a5,16(a1)
1c00822a:	78498793          	addi	a5,s3,1924
1c00822e:	00f5aa23          	sw	a5,20(a1)
1c008232:	1c001537          	lui	a0,0x1c001
1c008236:	92050793          	addi	a5,a0,-1760 # 1c000920 <stack>
1c00823a:	5571                	li	a0,-4
1c00823c:	01878713          	addi	a4,a5,24
1c008240:	8d1d                	sub	a0,a0,a5
1c008242:	012350fb          	lp.setupi	x1,18,1c00824e <run_test+0x110>
1c008246:	0047268b          	p.lw	a3,4(a4!) # 1004 <__cluster_text_size+0x1004>
1c00824a:	00e50633          	add	a2,a0,a4
1c00824e:	00d5e623          	p.sw	a3,a2(a1)
1c008252:	102017b7          	lui	a5,0x10201
1c008256:	0007a023          	sw	zero,0(a5) # 10201000 <__l2_shared_end+0x1fc0c0>
1c00825a:	1c000537          	lui	a0,0x1c000
1c00825e:	0c050513          	addi	a0,a0,192 # 1c0000c0 <__DTOR_END__+0xa4>
1c008262:	2da1                	jal	1c0088ba <puts>
1c008264:	1c0037b7          	lui	a5,0x1c003
1c008268:	04478793          	addi	a5,a5,68 # 1c003044 <ne16_weights2>
1c00826c:	20800737          	lui	a4,0x20800
1c008270:	1d46d0fb          	lp.setupi	x1,468,1c00828a <run_test+0x14c>
1c008274:	0007a803          	lw	a6,0(a5)
1c008278:	43c8                	lw	a0,4(a5)
1c00827a:	478c                	lw	a1,8(a5)
1c00827c:	47d0                	lw	a2,12(a5)
1c00827e:	01072023          	sw	a6,0(a4) # 20800000 <__cluster_text_end+0x47f0000>
1c008282:	c348                	sw	a0,4(a4)
1c008284:	c70c                	sw	a1,8(a4)
1c008286:	c750                	sw	a2,12(a4)
1c008288:	07c1                	addi	a5,a5,16
1c00828a:	0741                	addi	a4,a4,16
1c00828c:	1c000537          	lui	a0,0x1c000
1c008290:	0e050513          	addi	a0,a0,224 # 1c0000e0 <__DTOR_END__+0xc4>
1c008294:	251d                	jal	1c0088ba <puts>
1c008296:	10201637          	lui	a2,0x10201
1c00829a:	0611                	addi	a2,a2,4
1c00829c:	421c                	lw	a5,0(a2)
1c00829e:	0007dc63          	bgez	a5,1c0082b6 <run_test+0x178>
1c0082a2:	6705                	lui	a4,0x1
1c0082a4:	002047b7          	lui	a5,0x204
1c0082a8:	c798                	sw	a4,8(a5)
1c0082aa:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1f8f7c>
1c0082ae:	c3d8                	sw	a4,4(a5)
1c0082b0:	4214                	lw	a3,0(a2)
1c0082b2:	fe06cbe3          	bltz	a3,1c0082a8 <run_test+0x16a>
1c0082b6:	102015b7          	lui	a1,0x10201
1c0082ba:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x1fc0e0>
1c0082be:	004007b7          	lui	a5,0x400
1c0082c2:	00f5a023          	sw	a5,0(a1)
1c0082c6:	100037b7          	lui	a5,0x10003
1c0082ca:	f5078793          	addi	a5,a5,-176 # 10002f50 <ne16_infeat2>
1c0082ce:	00f5a223          	sw	a5,4(a1)
1c0082d2:	100014b7          	lui	s1,0x10001
1c0082d6:	8ec48813          	addi	a6,s1,-1812 # 100008ec <ne16_streamin2>
1c0082da:	0105a423          	sw	a6,8(a1)
1c0082de:	78898993          	addi	s3,s3,1928
1c0082e2:	0135a623          	sw	s3,12(a1)
1c0082e6:	100017b7          	lui	a5,0x10001
1c0082ea:	00478793          	addi	a5,a5,4 # 10001004 <ne16_streamin2+0x718>
1c0082ee:	82478713          	addi	a4,a5,-2012
1c0082f2:	00e5a823          	sw	a4,16(a1)
1c0082f6:	84c78793          	addi	a5,a5,-1972
1c0082fa:	00f5aa23          	sw	a5,20(a1)
1c0082fe:	1c001537          	lui	a0,0x1c001
1c008302:	98050793          	addi	a5,a0,-1664 # 1c000980 <ne16_cfg2>
1c008306:	5571                	li	a0,-4
1c008308:	01878713          	addi	a4,a5,24
1c00830c:	8d1d                	sub	a0,a0,a5
1c00830e:	012350fb          	lp.setupi	x1,18,1c00831a <run_test+0x1dc>
1c008312:	0047268b          	p.lw	a3,4(a4!) # 1004 <__cluster_text_size+0x1004>
1c008316:	00e50633          	add	a2,a0,a4
1c00831a:	00d5e623          	p.sw	a3,a2(a1)
1c00831e:	10201637          	lui	a2,0x10201
1c008322:	00062023          	sw	zero,0(a2) # 10201000 <__l2_shared_end+0x1fc0c0>
1c008326:	6705                	lui	a4,0x1
1c008328:	002047b7          	lui	a5,0x204
1c00832c:	0631                	addi	a2,a2,12
1c00832e:	c798                	sw	a4,8(a5)
1c008330:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1f8f7c>
1c008334:	c3d8                	sw	a4,4(a5)
1c008336:	4214                	lw	a3,0(a2)
1c008338:	fafd                	bnez	a3,1c00832e <run_test+0x1f0>
1c00833a:	102007b7          	lui	a5,0x10200
1c00833e:	07e1                	addi	a5,a5,24
1c008340:	4398                	lw	a4,0(a5)
1c008342:	6a09                	lui	s4,0x2
1c008344:	1c001c37          	lui	s8,0x1c001
1c008348:	c0b73733          	p.bclr	a4,a4,0,11
1c00834c:	664a0a13          	addi	s4,s4,1636 # 2664 <__cluster_text_size+0x2664>
1c008350:	5af1                	li	s5,-4
1c008352:	c398                	sw	a4,0(a5)
1c008354:	9e0c0c13          	addi	s8,s8,-1568 # 1c0009e0 <ne16_outfeat2>
1c008358:	9a42                	add	s4,s4,a6
1c00835a:	8ec48493          	addi	s1,s1,-1812
1c00835e:	4981                	li	s3,0
1c008360:	410a8ab3          	sub	s5,s5,a6
1c008364:	1c000b37          	lui	s6,0x1c000
1c008368:	1c000bb7          	lui	s7,0x1c000
1c00836c:	004c258b          	p.lw	a1,4(s8!)
1c008370:	86a6                	mv	a3,s1
1c008372:	0044a60b          	p.lw	a2,4(s1!)
1c008376:	40b607b3          	sub	a5,a2,a1
1c00837a:	00f037b3          	snez	a5,a5
1c00837e:	99be                	add	s3,s3,a5
1c008380:	00b60963          	beq	a2,a1,1c008392 <run_test+0x254>
1c008384:	0619ae63          	p.beqimm	s3,1,1c008400 <run_test+0x2c2>
1c008388:	009a8733          	add	a4,s5,s1
1c00838c:	054b0513          	addi	a0,s6,84 # 1c000054 <__DTOR_END__+0x38>
1c008390:	23c1                	jal	1c008950 <printf>
1c008392:	fc9a1de3          	bne	s4,s1,1c00836c <run_test+0x22e>
1c008396:	6a85                	lui	s5,0x1
1c008398:	1c005a37          	lui	s4,0x1c005
1c00839c:	200a8a93          	addi	s5,s5,512 # 1200 <__cluster_text_size+0x1200>
1c0083a0:	57f1                	li	a5,-4
1c0083a2:	9aca                	add	s5,s5,s2
1c0083a4:	d84a0a13          	addi	s4,s4,-636 # 1c004d84 <ne16_outfeat>
1c0083a8:	d3c40413          	addi	s0,s0,-708
1c0083ac:	4481                	li	s1,0
1c0083ae:	41278933          	sub	s2,a5,s2
1c0083b2:	1c000b37          	lui	s6,0x1c000
1c0083b6:	1c000bb7          	lui	s7,0x1c000
1c0083ba:	004a258b          	p.lw	a1,4(s4!)
1c0083be:	86a2                	mv	a3,s0
1c0083c0:	0044260b          	p.lw	a2,4(s0!)
1c0083c4:	40b607b3          	sub	a5,a2,a1
1c0083c8:	00f037b3          	snez	a5,a5
1c0083cc:	94be                	add	s1,s1,a5
1c0083ce:	00b60963          	beq	a2,a1,1c0083e0 <run_test+0x2a2>
1c0083d2:	0414a163          	p.beqimm	s1,1,1c008414 <run_test+0x2d6>
1c0083d6:	00890733          	add	a4,s2,s0
1c0083da:	054b0513          	addi	a0,s6,84 # 1c000054 <__DTOR_END__+0x38>
1c0083de:	2b8d                	jal	1c008950 <printf>
1c0083e0:	fc8a9de3          	bne	s5,s0,1c0083ba <run_test+0x27c>
1c0083e4:	40b6                	lw	ra,76(sp)
1c0083e6:	4426                	lw	s0,72(sp)
1c0083e8:	01348533          	add	a0,s1,s3
1c0083ec:	4906                	lw	s2,64(sp)
1c0083ee:	4496                	lw	s1,68(sp)
1c0083f0:	59f2                	lw	s3,60(sp)
1c0083f2:	5a62                	lw	s4,56(sp)
1c0083f4:	5ad2                	lw	s5,52(sp)
1c0083f6:	5b42                	lw	s6,48(sp)
1c0083f8:	5bb2                	lw	s7,44(sp)
1c0083fa:	5c22                	lw	s8,40(sp)
1c0083fc:	6161                	addi	sp,sp,80
1c0083fe:	8082                	ret
1c008400:	024b8513          	addi	a0,s7,36 # 1c000024 <__DTOR_END__+0x8>
1c008404:	c22e                	sw	a1,4(sp)
1c008406:	c432                	sw	a2,8(sp)
1c008408:	c636                	sw	a3,12(sp)
1c00840a:	2945                	jal	1c0088ba <puts>
1c00840c:	46b2                	lw	a3,12(sp)
1c00840e:	4622                	lw	a2,8(sp)
1c008410:	4592                	lw	a1,4(sp)
1c008412:	bf9d                	j	1c008388 <run_test+0x24a>
1c008414:	024b8513          	addi	a0,s7,36
1c008418:	c22e                	sw	a1,4(sp)
1c00841a:	c432                	sw	a2,8(sp)
1c00841c:	c636                	sw	a3,12(sp)
1c00841e:	2971                	jal	1c0088ba <puts>
1c008420:	46b2                	lw	a3,12(sp)
1c008422:	4622                	lw	a2,8(sp)
1c008424:	4592                	lw	a1,4(sp)
1c008426:	bf45                	j	1c0083d6 <run_test+0x298>

1c008428 <main>:
1c008428:	1c000537          	lui	a0,0x1c000
1c00842c:	1141                	addi	sp,sp,-16
1c00842e:	01c50513          	addi	a0,a0,28 # 1c00001c <__DTOR_END__>
1c008432:	c606                	sw	ra,12(sp)
1c008434:	2159                	jal	1c0088ba <puts>
1c008436:	40b2                	lw	ra,12(sp)
1c008438:	0141                	addi	sp,sp,16
1c00843a:	b311                	j	1c00813e <run_test>

1c00843c <pos_fll_init>:
1c00843c:	08152063          	p.beqimm	a0,1,1c0084bc <pos_fll_init+0x80>
1c008440:	04252a63          	p.beqimm	a0,2,1c008494 <pos_fll_init+0x58>
1c008444:	c505                	beqz	a0,1c00846c <pos_fll_init+0x30>
1c008446:	4701                	li	a4,0
1c008448:	00470793          	addi	a5,a4,4 # 1004 <__cluster_text_size+0x1004>
1c00844c:	05300613          	li	a2,83
1c008450:	00c70693          	addi	a3,a4,12
1c008454:	c390                	sw	a2,0(a5)
1c008456:	020c17b7          	lui	a5,0x20c1
1c00845a:	0721                	addi	a4,a4,8
1c00845c:	0006a023          	sw	zero,0(a3)
1c008460:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b671a>
1c008464:	c31c                	sw	a5,0(a4)
1c008466:	05f68537          	lui	a0,0x5f68
1c00846a:	8082                	ret
1c00846c:	1a1007b7          	lui	a5,0x1a100
1c008470:	00878713          	addi	a4,a5,8 # 1a100008 <__l2_shared_end+0xa0fb0c8>
1c008474:	00c78693          	addi	a3,a5,12
1c008478:	05300613          	li	a2,83
1c00847c:	0791                	addi	a5,a5,4
1c00847e:	c390                	sw	a2,0(a5)
1c008480:	020c17b7          	lui	a5,0x20c1
1c008484:	0006a023          	sw	zero,0(a3)
1c008488:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b671a>
1c00848c:	c31c                	sw	a5,0(a4)
1c00848e:	05f68537          	lui	a0,0x5f68
1c008492:	8082                	ret
1c008494:	1a1007b7          	lui	a5,0x1a100
1c008498:	01878713          	addi	a4,a5,24 # 1a100018 <__l2_shared_end+0xa0fb0d8>
1c00849c:	01c78693          	addi	a3,a5,28
1c0084a0:	05300613          	li	a2,83
1c0084a4:	07d1                	addi	a5,a5,20
1c0084a6:	c390                	sw	a2,0(a5)
1c0084a8:	020c17b7          	lui	a5,0x20c1
1c0084ac:	0006a023          	sw	zero,0(a3)
1c0084b0:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b671a>
1c0084b4:	c31c                	sw	a5,0(a4)
1c0084b6:	05f68537          	lui	a0,0x5f68
1c0084ba:	8082                	ret
1c0084bc:	1a1007b7          	lui	a5,0x1a100
1c0084c0:	02878713          	addi	a4,a5,40 # 1a100028 <__l2_shared_end+0xa0fb0e8>
1c0084c4:	02c78693          	addi	a3,a5,44
1c0084c8:	05300613          	li	a2,83
1c0084cc:	02478793          	addi	a5,a5,36
1c0084d0:	c390                	sw	a2,0(a5)
1c0084d2:	020c17b7          	lui	a5,0x20c1
1c0084d6:	0006a023          	sw	zero,0(a3)
1c0084da:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b671a>
1c0084de:	c31c                	sw	a5,0(a4)
1c0084e0:	05f68537          	lui	a0,0x5f68
1c0084e4:	8082                	ret

1c0084e6 <pos_soc_init>:
1c0084e6:	8082                	ret

1c0084e8 <pos_wait_forever>:
1c0084e8:	f14027f3          	csrr	a5,mhartid
1c0084ec:	477d                	li	a4,31
1c0084ee:	ca5797b3          	p.extractu	a5,a5,5,5
1c0084f2:	00e78963          	beq	a5,a4,1c008504 <pos_wait_forever+0x1c>
1c0084f6:	002047b7          	lui	a5,0x204
1c0084fa:	577d                	li	a4,-1
1c0084fc:	c3d8                	sw	a4,4(a5)
1c0084fe:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f8f78>
1c008502:	a001                	j	1c008502 <pos_wait_forever+0x1a>
1c008504:	1a10a7b7          	lui	a5,0x1a10a
1c008508:	577d                	li	a4,-1
1c00850a:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa1048c8>
1c00850e:	10500073          	wfi
1c008512:	10500073          	wfi
1c008516:	bfe5                	j	1c00850e <pos_wait_forever+0x26>

1c008518 <memcpy>:
1c008518:	00a5e7b3          	or	a5,a1,a0
1c00851c:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008520:	882a                	mv	a6,a0
1c008522:	10078163          	beqz	a5,1c008624 <memcpy+0x10c>
1c008526:	12060263          	beqz	a2,1c00864a <memcpy+0x132>
1c00852a:	00458793          	addi	a5,a1,4
1c00852e:	00450693          	addi	a3,a0,4 # 5f68004 <__l1_heap_size+0x5f5cf44>
1c008532:	04a7b7b3          	p.sletu	a5,a5,a0
1c008536:	04b6b6b3          	p.sletu	a3,a3,a1
1c00853a:	873e                	mv	a4,a5
1c00853c:	87b6                	mv	a5,a3
1c00853e:	8fd9                	or	a5,a5,a4
1c008540:	0ff7f793          	andi	a5,a5,255
1c008544:	cbe9                	beqz	a5,1c008616 <memcpy+0xfe>
1c008546:	00863793          	sltiu	a5,a2,8
1c00854a:	0017c793          	xori	a5,a5,1
1c00854e:	0ff7f793          	andi	a5,a5,255
1c008552:	c3f1                	beqz	a5,1c008616 <memcpy+0xfe>
1c008554:	40b007b3          	neg	a5,a1
1c008558:	fa27b7b3          	p.bclr	a5,a5,29,2
1c00855c:	fff60313          	addi	t1,a2,-1
1c008560:	c3ed                	beqz	a5,1c008642 <memcpy+0x12a>
1c008562:	0005c703          	lbu	a4,0(a1)
1c008566:	00158893          	addi	a7,a1,1
1c00856a:	00150813          	addi	a6,a0,1
1c00856e:	00e50023          	sb	a4,0(a0)
1c008572:	0217a863          	p.beqimm	a5,1,1c0085a2 <memcpy+0x8a>
1c008576:	0015c703          	lbu	a4,1(a1)
1c00857a:	00258893          	addi	a7,a1,2
1c00857e:	00250813          	addi	a6,a0,2
1c008582:	00e500a3          	sb	a4,1(a0)
1c008586:	ffe60313          	addi	t1,a2,-2
1c00858a:	0037bc63          	p.bneimm	a5,3,1c0085a2 <memcpy+0x8a>
1c00858e:	0025c703          	lbu	a4,2(a1)
1c008592:	00358893          	addi	a7,a1,3
1c008596:	00350813          	addi	a6,a0,3
1c00859a:	00e50123          	sb	a4,2(a0)
1c00859e:	ffd60313          	addi	t1,a2,-3
1c0085a2:	8e1d                	sub	a2,a2,a5
1c0085a4:	00265713          	srli	a4,a2,0x2
1c0085a8:	00f506b3          	add	a3,a0,a5
1c0085ac:	95be                	add	a1,a1,a5
1c0085ae:	cf59                	beqz	a4,1c00864c <memcpy+0x134>
1c0085b0:	004740fb          	lp.setup	x1,a4,1c0085b8 <memcpy+0xa0>
1c0085b4:	0045a78b          	p.lw	a5,4(a1!)
1c0085b8:	00f6a22b          	p.sw	a5,4(a3!)
1c0085bc:	c20635b3          	p.bclr	a1,a2,1,0
1c0085c0:	40b306b3          	sub	a3,t1,a1
1c0085c4:	00b807b3          	add	a5,a6,a1
1c0085c8:	00b88733          	add	a4,a7,a1
1c0085cc:	04b60b63          	beq	a2,a1,1c008622 <memcpy+0x10a>
1c0085d0:	00074603          	lbu	a2,0(a4)
1c0085d4:	00c78023          	sb	a2,0(a5)
1c0085d8:	0416a563          	p.beqimm	a3,1,1c008622 <memcpy+0x10a>
1c0085dc:	00174603          	lbu	a2,1(a4)
1c0085e0:	00c780a3          	sb	a2,1(a5)
1c0085e4:	0226af63          	p.beqimm	a3,2,1c008622 <memcpy+0x10a>
1c0085e8:	00274603          	lbu	a2,2(a4)
1c0085ec:	00c78123          	sb	a2,2(a5)
1c0085f0:	0236a963          	p.beqimm	a3,3,1c008622 <memcpy+0x10a>
1c0085f4:	00374603          	lbu	a2,3(a4)
1c0085f8:	00c781a3          	sb	a2,3(a5)
1c0085fc:	0246a363          	p.beqimm	a3,4,1c008622 <memcpy+0x10a>
1c008600:	00474603          	lbu	a2,4(a4)
1c008604:	00c78223          	sb	a2,4(a5)
1c008608:	0056ad63          	p.beqimm	a3,5,1c008622 <memcpy+0x10a>
1c00860c:	00574703          	lbu	a4,5(a4)
1c008610:	00e782a3          	sb	a4,5(a5)
1c008614:	8082                	ret
1c008616:	004640fb          	lp.setup	x1,a2,1c00861e <memcpy+0x106>
1c00861a:	0015c78b          	p.lbu	a5,1(a1!)
1c00861e:	00f800ab          	p.sb	a5,1(a6!)
1c008622:	8082                	ret
1c008624:	fa2637b3          	p.bclr	a5,a2,29,2
1c008628:	f389                	bnez	a5,1c00852a <memcpy+0x12>
1c00862a:	de65                	beqz	a2,1c008622 <memcpy+0x10a>
1c00862c:	ffc60793          	addi	a5,a2,-4
1c008630:	8389                	srli	a5,a5,0x2
1c008632:	0785                	addi	a5,a5,1
1c008634:	0047c0fb          	lp.setup	x1,a5,1c00863c <memcpy+0x124>
1c008638:	0045a70b          	p.lw	a4,4(a1!)
1c00863c:	00e8222b          	p.sw	a4,4(a6!)
1c008640:	8082                	ret
1c008642:	88ae                	mv	a7,a1
1c008644:	882a                	mv	a6,a0
1c008646:	8332                	mv	t1,a2
1c008648:	bfa9                	j	1c0085a2 <memcpy+0x8a>
1c00864a:	8082                	ret
1c00864c:	4705                	li	a4,1
1c00864e:	b78d                	j	1c0085b0 <memcpy+0x98>

1c008650 <memmove>:
1c008650:	40b507b3          	sub	a5,a0,a1
1c008654:	0ec7ec63          	bltu	a5,a2,1c00874c <memmove+0xfc>
1c008658:	20060463          	beqz	a2,1c008860 <memmove+0x210>
1c00865c:	00450793          	addi	a5,a0,4
1c008660:	00458693          	addi	a3,a1,4
1c008664:	04b7b7b3          	p.sletu	a5,a5,a1
1c008668:	04a6b6b3          	p.sletu	a3,a3,a0
1c00866c:	873e                	mv	a4,a5
1c00866e:	87b6                	mv	a5,a3
1c008670:	8fd9                	or	a5,a5,a4
1c008672:	0ff7f793          	andi	a5,a5,255
1c008676:	1c078d63          	beqz	a5,1c008850 <memmove+0x200>
1c00867a:	00863793          	sltiu	a5,a2,8
1c00867e:	0017c793          	xori	a5,a5,1
1c008682:	0ff7f793          	andi	a5,a5,255
1c008686:	1c078563          	beqz	a5,1c008850 <memmove+0x200>
1c00868a:	40b007b3          	neg	a5,a1
1c00868e:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008692:	fff60313          	addi	t1,a2,-1
1c008696:	88ae                	mv	a7,a1
1c008698:	1e078363          	beqz	a5,1c00887e <memmove+0x22e>
1c00869c:	0018c70b          	p.lbu	a4,1(a7!)
1c0086a0:	882a                	mv	a6,a0
1c0086a2:	00e800ab          	p.sb	a4,1(a6!)
1c0086a6:	0217a863          	p.beqimm	a5,1,1c0086d6 <memmove+0x86>
1c0086aa:	0015c703          	lbu	a4,1(a1)
1c0086ae:	00250813          	addi	a6,a0,2
1c0086b2:	00258893          	addi	a7,a1,2
1c0086b6:	00e500a3          	sb	a4,1(a0)
1c0086ba:	ffe60313          	addi	t1,a2,-2
1c0086be:	0037bc63          	p.bneimm	a5,3,1c0086d6 <memmove+0x86>
1c0086c2:	0025c703          	lbu	a4,2(a1)
1c0086c6:	00350813          	addi	a6,a0,3
1c0086ca:	00358893          	addi	a7,a1,3
1c0086ce:	00e50123          	sb	a4,2(a0)
1c0086d2:	ffd60313          	addi	t1,a2,-3
1c0086d6:	8e1d                	sub	a2,a2,a5
1c0086d8:	00265713          	srli	a4,a2,0x2
1c0086dc:	00f506b3          	add	a3,a0,a5
1c0086e0:	95be                	add	a1,a1,a5
1c0086e2:	1a070363          	beqz	a4,1c008888 <memmove+0x238>
1c0086e6:	004740fb          	lp.setup	x1,a4,1c0086ee <memmove+0x9e>
1c0086ea:	0045a78b          	p.lw	a5,4(a1!)
1c0086ee:	00f6a22b          	p.sw	a5,4(a3!)
1c0086f2:	c20635b3          	p.bclr	a1,a2,1,0
1c0086f6:	40b306b3          	sub	a3,t1,a1
1c0086fa:	00b807b3          	add	a5,a6,a1
1c0086fe:	00b88733          	add	a4,a7,a1
1c008702:	14b60e63          	beq	a2,a1,1c00885e <memmove+0x20e>
1c008706:	00074603          	lbu	a2,0(a4)
1c00870a:	00c78023          	sb	a2,0(a5)
1c00870e:	1416a863          	p.beqimm	a3,1,1c00885e <memmove+0x20e>
1c008712:	00174603          	lbu	a2,1(a4)
1c008716:	00c780a3          	sb	a2,1(a5)
1c00871a:	1426a263          	p.beqimm	a3,2,1c00885e <memmove+0x20e>
1c00871e:	00274603          	lbu	a2,2(a4)
1c008722:	00c78123          	sb	a2,2(a5)
1c008726:	1236ac63          	p.beqimm	a3,3,1c00885e <memmove+0x20e>
1c00872a:	00374603          	lbu	a2,3(a4)
1c00872e:	00c781a3          	sb	a2,3(a5)
1c008732:	1246a663          	p.beqimm	a3,4,1c00885e <memmove+0x20e>
1c008736:	00474603          	lbu	a2,4(a4)
1c00873a:	00c78223          	sb	a2,4(a5)
1c00873e:	1256a063          	p.beqimm	a3,5,1c00885e <memmove+0x20e>
1c008742:	00574703          	lbu	a4,5(a4)
1c008746:	00e782a3          	sb	a4,5(a5)
1c00874a:	8082                	ret
1c00874c:	ffc60793          	addi	a5,a2,-4
1c008750:	00f50833          	add	a6,a0,a5
1c008754:	00f58333          	add	t1,a1,a5
1c008758:	00c58733          	add	a4,a1,a2
1c00875c:	00c508b3          	add	a7,a0,a2
1c008760:	05073733          	p.sletu	a4,a4,a6
1c008764:	0468b833          	p.sletu	a6,a7,t1
1c008768:	86ba                	mv	a3,a4
1c00876a:	8742                	mv	a4,a6
1c00876c:	8f55                	or	a4,a4,a3
1c00876e:	0ff77713          	andi	a4,a4,255
1c008772:	cb65                	beqz	a4,1c008862 <memmove+0x212>
1c008774:	00863713          	sltiu	a4,a2,8
1c008778:	00174713          	xori	a4,a4,1
1c00877c:	0ff77713          	andi	a4,a4,255
1c008780:	c36d                	beqz	a4,1c008862 <memmove+0x212>
1c008782:	fa233733          	p.bclr	a4,t1,29,2
1c008786:	fff60893          	addi	a7,a2,-1
1c00878a:	cb65                	beqz	a4,1c00887a <memmove+0x22a>
1c00878c:	011586b3          	add	a3,a1,a7
1c008790:	0006c683          	lbu	a3,0(a3)
1c008794:	00d548a3          	p.sb	a3,a7(a0)
1c008798:	02172463          	p.beqimm	a4,1,1c0087c0 <memmove+0x170>
1c00879c:	ffe60893          	addi	a7,a2,-2
1c0087a0:	011586b3          	add	a3,a1,a7
1c0087a4:	0006c683          	lbu	a3,0(a3)
1c0087a8:	00d548a3          	p.sb	a3,a7(a0)
1c0087ac:	00373a63          	p.bneimm	a4,3,1c0087c0 <memmove+0x170>
1c0087b0:	ffd60893          	addi	a7,a2,-3
1c0087b4:	011586b3          	add	a3,a1,a7
1c0087b8:	0006c683          	lbu	a3,0(a3)
1c0087bc:	00d548a3          	p.sb	a3,a7(a0)
1c0087c0:	8e19                	sub	a2,a2,a4
1c0087c2:	8f99                	sub	a5,a5,a4
1c0087c4:	00265713          	srli	a4,a2,0x2
1c0087c8:	00f506b3          	add	a3,a0,a5
1c0087cc:	97ae                	add	a5,a5,a1
1c0087ce:	cb5d                	beqz	a4,1c008884 <memmove+0x234>
1c0087d0:	004740fb          	lp.setup	x1,a4,1c0087d8 <memmove+0x188>
1c0087d4:	ffc7a80b          	p.lw	a6,-4(a5!)
1c0087d8:	ff06ae2b          	p.sw	a6,-4(a3!)
1c0087dc:	c20637b3          	p.bclr	a5,a2,1,0
1c0087e0:	40f888b3          	sub	a7,a7,a5
1c0087e4:	06f60d63          	beq	a2,a5,1c00885e <memmove+0x20e>
1c0087e8:	fff88793          	addi	a5,a7,-1
1c0087ec:	00f58733          	add	a4,a1,a5
1c0087f0:	00074703          	lbu	a4,0(a4)
1c0087f4:	00e547a3          	p.sb	a4,a5(a0)
1c0087f8:	c3bd                	beqz	a5,1c00885e <memmove+0x20e>
1c0087fa:	ffe88793          	addi	a5,a7,-2
1c0087fe:	00f58733          	add	a4,a1,a5
1c008802:	00074703          	lbu	a4,0(a4)
1c008806:	00e547a3          	p.sb	a4,a5(a0)
1c00880a:	cbb1                	beqz	a5,1c00885e <memmove+0x20e>
1c00880c:	ffd88793          	addi	a5,a7,-3
1c008810:	00f58733          	add	a4,a1,a5
1c008814:	00074703          	lbu	a4,0(a4)
1c008818:	00e547a3          	p.sb	a4,a5(a0)
1c00881c:	c3a9                	beqz	a5,1c00885e <memmove+0x20e>
1c00881e:	ffc88793          	addi	a5,a7,-4
1c008822:	00f58733          	add	a4,a1,a5
1c008826:	00074703          	lbu	a4,0(a4)
1c00882a:	00e547a3          	p.sb	a4,a5(a0)
1c00882e:	cb85                	beqz	a5,1c00885e <memmove+0x20e>
1c008830:	ffb88793          	addi	a5,a7,-5
1c008834:	00f58733          	add	a4,a1,a5
1c008838:	00074703          	lbu	a4,0(a4)
1c00883c:	00e547a3          	p.sb	a4,a5(a0)
1c008840:	cf99                	beqz	a5,1c00885e <memmove+0x20e>
1c008842:	18e9                	addi	a7,a7,-6
1c008844:	95c6                	add	a1,a1,a7
1c008846:	0005c783          	lbu	a5,0(a1)
1c00884a:	00f548a3          	p.sb	a5,a7(a0)
1c00884e:	8082                	ret
1c008850:	87aa                	mv	a5,a0
1c008852:	004640fb          	lp.setup	x1,a2,1c00885a <memmove+0x20a>
1c008856:	0015c70b          	p.lbu	a4,1(a1!)
1c00885a:	00e780ab          	p.sb	a4,1(a5!)
1c00885e:	8082                	ret
1c008860:	8082                	ret
1c008862:	167d                	addi	a2,a2,-1
1c008864:	00c507b3          	add	a5,a0,a2
1c008868:	95b2                	add	a1,a1,a2
1c00886a:	0605                	addi	a2,a2,1
1c00886c:	004640fb          	lp.setup	x1,a2,1c008874 <memmove+0x224>
1c008870:	fff5c70b          	p.lbu	a4,-1(a1!)
1c008874:	fee78fab          	p.sb	a4,-1(a5!)
1c008878:	8082                	ret
1c00887a:	88b2                	mv	a7,a2
1c00887c:	b791                	j	1c0087c0 <memmove+0x170>
1c00887e:	882a                	mv	a6,a0
1c008880:	8332                	mv	t1,a2
1c008882:	bd91                	j	1c0086d6 <memmove+0x86>
1c008884:	4705                	li	a4,1
1c008886:	b7a9                	j	1c0087d0 <memmove+0x180>
1c008888:	4705                	li	a4,1
1c00888a:	bdb1                	j	1c0086e6 <memmove+0x96>

1c00888c <strchr>:
1c00888c:	00054783          	lbu	a5,0(a0)
1c008890:	0ff5f593          	andi	a1,a1,255
1c008894:	00b78c63          	beq	a5,a1,1c0088ac <strchr+0x20>
1c008898:	cb99                	beqz	a5,1c0088ae <strchr+0x22>
1c00889a:	00150793          	addi	a5,a0,1
1c00889e:	a011                	j	1c0088a2 <strchr+0x16>
1c0088a0:	c719                	beqz	a4,1c0088ae <strchr+0x22>
1c0088a2:	853e                	mv	a0,a5
1c0088a4:	0017c70b          	p.lbu	a4,1(a5!)
1c0088a8:	feb71ce3          	bne	a4,a1,1c0088a0 <strchr+0x14>
1c0088ac:	8082                	ret
1c0088ae:	0015b593          	seqz	a1,a1
1c0088b2:	40b005b3          	neg	a1,a1
1c0088b6:	8d6d                	and	a0,a0,a1
1c0088b8:	8082                	ret

1c0088ba <puts>:
1c0088ba:	0015478b          	p.lbu	a5,1(a0!)
1c0088be:	c785                	beqz	a5,1c0088e6 <puts+0x2c>
1c0088c0:	f14026f3          	csrr	a3,mhartid
1c0088c4:	00369713          	slli	a4,a3,0x3
1c0088c8:	1a10f637          	lui	a2,0x1a10f
1c0088cc:	ee873733          	p.bclr	a4,a4,23,8
1c0088d0:	9732                	add	a4,a4,a2
1c0088d2:	6609                	lui	a2,0x2
1c0088d4:	068a                	slli	a3,a3,0x2
1c0088d6:	f8060613          	addi	a2,a2,-128 # 1f80 <__cluster_text_size+0x1f80>
1c0088da:	8ef1                	and	a3,a3,a2
1c0088dc:	9736                	add	a4,a4,a3
1c0088de:	c31c                	sw	a5,0(a4)
1c0088e0:	0015478b          	p.lbu	a5,1(a0!)
1c0088e4:	ffed                	bnez	a5,1c0088de <puts+0x24>
1c0088e6:	f14027f3          	csrr	a5,mhartid
1c0088ea:	00379713          	slli	a4,a5,0x3
1c0088ee:	1a10f6b7          	lui	a3,0x1a10f
1c0088f2:	ee873733          	p.bclr	a4,a4,23,8
1c0088f6:	9736                	add	a4,a4,a3
1c0088f8:	6689                	lui	a3,0x2
1c0088fa:	f8068693          	addi	a3,a3,-128 # 1f80 <__cluster_text_size+0x1f80>
1c0088fe:	078a                	slli	a5,a5,0x2
1c008900:	8ff5                	and	a5,a5,a3
1c008902:	46a9                	li	a3,10
1c008904:	00d767a3          	p.sw	a3,a5(a4)
1c008908:	4501                	li	a0,0
1c00890a:	8082                	ret

1c00890c <pos_libc_fputc_locked>:
1c00890c:	6689                	lui	a3,0x2
1c00890e:	f14027f3          	csrr	a5,mhartid
1c008912:	f8068693          	addi	a3,a3,-128 # 1f80 <__cluster_text_size+0x1f80>
1c008916:	00379713          	slli	a4,a5,0x3
1c00891a:	078a                	slli	a5,a5,0x2
1c00891c:	8ff5                	and	a5,a5,a3
1c00891e:	ee873733          	p.bclr	a4,a4,23,8
1c008922:	1a10f6b7          	lui	a3,0x1a10f
1c008926:	0ff57513          	andi	a0,a0,255
1c00892a:	9736                	add	a4,a4,a3
1c00892c:	00a7e723          	p.sw	a0,a4(a5)
1c008930:	4501                	li	a0,0
1c008932:	8082                	ret

1c008934 <pos_libc_prf_locked>:
1c008934:	a0a9                	j	1c00897e <pos_libc_prf>

1c008936 <exit>:
1c008936:	1141                	addi	sp,sp,-16
1c008938:	c606                	sw	ra,12(sp)
1c00893a:	1a1047b7          	lui	a5,0x1a104
1c00893e:	c1f54533          	p.bset	a0,a0,0,31
1c008942:	0aa7a023          	sw	a0,160(a5) # 1a1040a0 <__l2_shared_end+0xa0ff160>
1c008946:	364d                	jal	1c0084e8 <pos_wait_forever>

1c008948 <pos_io_start>:
1c008948:	4501                	li	a0,0
1c00894a:	8082                	ret

1c00894c <pos_io_stop>:
1c00894c:	4501                	li	a0,0
1c00894e:	8082                	ret

1c008950 <printf>:
1c008950:	7139                	addi	sp,sp,-64
1c008952:	02410313          	addi	t1,sp,36
1c008956:	d432                	sw	a2,40(sp)
1c008958:	862a                	mv	a2,a0
1c00895a:	1c009537          	lui	a0,0x1c009
1c00895e:	d22e                	sw	a1,36(sp)
1c008960:	d636                	sw	a3,44(sp)
1c008962:	4589                	li	a1,2
1c008964:	869a                	mv	a3,t1
1c008966:	90c50513          	addi	a0,a0,-1780 # 1c00890c <pos_libc_fputc_locked>
1c00896a:	ce06                	sw	ra,28(sp)
1c00896c:	d83a                	sw	a4,48(sp)
1c00896e:	da3e                	sw	a5,52(sp)
1c008970:	dc42                	sw	a6,56(sp)
1c008972:	de46                	sw	a7,60(sp)
1c008974:	c61a                	sw	t1,12(sp)
1c008976:	3f7d                	jal	1c008934 <pos_libc_prf_locked>
1c008978:	40f2                	lw	ra,28(sp)
1c00897a:	6121                	addi	sp,sp,64
1c00897c:	8082                	ret

1c00897e <pos_libc_prf>:
1c00897e:	7169                	addi	sp,sp,-304
1c008980:	12812423          	sw	s0,296(sp)
1c008984:	4401                	li	s0,0
1c008986:	11612823          	sw	s6,272(sp)
1c00898a:	11712623          	sw	s7,268(sp)
1c00898e:	11812423          	sw	s8,264(sp)
1c008992:	11912223          	sw	s9,260(sp)
1c008996:	11a12023          	sw	s10,256(sp)
1c00899a:	dfee                	sw	s11,252(sp)
1c00899c:	12112623          	sw	ra,300(sp)
1c0089a0:	8da2                	mv	s11,s0
1c0089a2:	12912223          	sw	s1,292(sp)
1c0089a6:	13212023          	sw	s2,288(sp)
1c0089aa:	11312e23          	sw	s3,284(sp)
1c0089ae:	11412c23          	sw	s4,280(sp)
1c0089b2:	11512a23          	sw	s5,276(sp)
1c0089b6:	8b2a                	mv	s6,a0
1c0089b8:	8d2e                	mv	s10,a1
1c0089ba:	8c36                	mv	s8,a3
1c0089bc:	1c000bb7          	lui	s7,0x1c000
1c0089c0:	02410c93          	addi	s9,sp,36
1c0089c4:	8432                	mv	s0,a2
1c0089c6:	00044503          	lbu	a0,0(s0)
1c0089ca:	0405                	addi	s0,s0,1
1c0089cc:	cd11                	beqz	a0,1c0089e8 <pos_libc_prf+0x6a>
1c0089ce:	02500793          	li	a5,37
1c0089d2:	04f50863          	beq	a0,a5,1c008a22 <pos_libc_prf+0xa4>
1c0089d6:	85ea                	mv	a1,s10
1c0089d8:	9b02                	jalr	s6
1c0089da:	31f52563          	p.beqimm	a0,-1,1c008ce4 <pos_libc_prf+0x366>
1c0089de:	0d85                	addi	s11,s11,1
1c0089e0:	00044503          	lbu	a0,0(s0)
1c0089e4:	0405                	addi	s0,s0,1
1c0089e6:	f565                	bnez	a0,1c0089ce <pos_libc_prf+0x50>
1c0089e8:	846e                	mv	s0,s11
1c0089ea:	8522                	mv	a0,s0
1c0089ec:	12c12083          	lw	ra,300(sp)
1c0089f0:	12812403          	lw	s0,296(sp)
1c0089f4:	12412483          	lw	s1,292(sp)
1c0089f8:	12012903          	lw	s2,288(sp)
1c0089fc:	11c12983          	lw	s3,284(sp)
1c008a00:	11812a03          	lw	s4,280(sp)
1c008a04:	11412a83          	lw	s5,276(sp)
1c008a08:	11012b03          	lw	s6,272(sp)
1c008a0c:	10c12b83          	lw	s7,268(sp)
1c008a10:	10812c03          	lw	s8,264(sp)
1c008a14:	10412c83          	lw	s9,260(sp)
1c008a18:	10012d03          	lw	s10,256(sp)
1c008a1c:	5dfe                	lw	s11,252(sp)
1c008a1e:	6155                	addi	sp,sp,304
1c008a20:	8082                	ret
1c008a22:	00044483          	lbu	s1,0(s0)
1c008a26:	02000693          	li	a3,32
1c008a2a:	00140a93          	addi	s5,s0,1
1c008a2e:	108b8513          	addi	a0,s7,264 # 1c000108 <__DTOR_END__+0xec>
1c008a32:	85a6                	mv	a1,s1
1c008a34:	c836                	sw	a3,16(sp)
1c008a36:	cc02                	sw	zero,24(sp)
1c008a38:	ca02                	sw	zero,20(sp)
1c008a3a:	ce02                	sw	zero,28(sp)
1c008a3c:	c602                	sw	zero,12(sp)
1c008a3e:	02300913          	li	s2,35
1c008a42:	02d00a13          	li	s4,45
1c008a46:	89d6                	mv	s3,s5
1c008a48:	3591                	jal	1c00888c <strchr>
1c008a4a:	c915                	beqz	a0,1c008a7e <pos_libc_prf+0x100>
1c008a4c:	2b248b63          	beq	s1,s2,1c008d02 <pos_libc_prf+0x384>
1c008a50:	0c997463          	bleu	s1,s2,1c008b18 <pos_libc_prf+0x19a>
1c008a54:	2b448363          	beq	s1,s4,1c008cfa <pos_libc_prf+0x37c>
1c008a58:	03000613          	li	a2,48
1c008a5c:	28c48a63          	beq	s1,a2,1c008cf0 <pos_libc_prf+0x372>
1c008a60:	02b00693          	li	a3,43
1c008a64:	28d48263          	beq	s1,a3,1c008ce8 <pos_libc_prf+0x36a>
1c008a68:	8456                	mv	s0,s5
1c008a6a:	00044483          	lbu	s1,0(s0)
1c008a6e:	00140a93          	addi	s5,s0,1
1c008a72:	108b8513          	addi	a0,s7,264
1c008a76:	85a6                	mv	a1,s1
1c008a78:	89d6                	mv	s3,s5
1c008a7a:	3d09                	jal	1c00888c <strchr>
1c008a7c:	f961                	bnez	a0,1c008a4c <pos_libc_prf+0xce>
1c008a7e:	02a00613          	li	a2,42
1c008a82:	2ac48663          	beq	s1,a2,1c008d2e <pos_libc_prf+0x3b0>
1c008a86:	fd048613          	addi	a2,s1,-48
1c008a8a:	45a5                	li	a1,9
1c008a8c:	4901                	li	s2,0
1c008a8e:	28c5f063          	bleu	a2,a1,1c008d0e <pos_libc_prf+0x390>
1c008a92:	02e00693          	li	a3,46
1c008a96:	5a7d                	li	s4,-1
1c008a98:	2ed48363          	beq	s1,a3,1c008d7e <pos_libc_prf+0x400>
1c008a9c:	1c0007b7          	lui	a5,0x1c000
1c008aa0:	85a6                	mv	a1,s1
1c008aa2:	11078513          	addi	a0,a5,272 # 1c000110 <__DTOR_END__+0xf4>
1c008aa6:	33dd                	jal	1c00888c <strchr>
1c008aa8:	844e                	mv	s0,s3
1c008aaa:	c509                	beqz	a0,1c008ab4 <pos_libc_prf+0x136>
1c008aac:	0009c483          	lbu	s1,0(s3)
1c008ab0:	00198413          	addi	s0,s3,1
1c008ab4:	06700693          	li	a3,103
1c008ab8:	2896d963          	ble	s1,a3,1c008d4a <pos_libc_prf+0x3cc>
1c008abc:	07000693          	li	a3,112
1c008ac0:	7cd48b63          	beq	s1,a3,1c009296 <pos_libc_prf+0x918>
1c008ac4:	2e96d163          	ble	s1,a3,1c008da6 <pos_libc_prf+0x428>
1c008ac8:	07500693          	li	a3,117
1c008acc:	12d489e3          	beq	s1,a3,1c0093fe <pos_libc_prf+0xa80>
1c008ad0:	07800693          	li	a3,120
1c008ad4:	06d48663          	beq	s1,a3,1c008b40 <pos_libc_prf+0x1c2>
1c008ad8:	07300693          	li	a3,115
1c008adc:	18d49fe3          	bne	s1,a3,1c00947a <pos_libc_prf+0xafc>
1c008ae0:	000c2583          	lw	a1,0(s8)
1c008ae4:	004c0993          	addi	s3,s8,4
1c008ae8:	4481                	li	s1,0
1c008aea:	86ae                	mv	a3,a1
1c008aec:	0c8350fb          	lp.setupi	x1,200,1c008af8 <pos_libc_prf+0x17a>
1c008af0:	0016c70b          	p.lbu	a4,1(a3!) # 1a10f001 <__l2_shared_end+0xa10a0c1>
1c008af4:	18070ae3          	beqz	a4,1c009488 <pos_libc_prf+0xb0a>
1c008af8:	0485                	addi	s1,s1,1
1c008afa:	000a4763          	bltz	s4,1c008b08 <pos_libc_prf+0x18a>
1c008afe:	0544c4b3          	p.min	s1,s1,s4
1c008b02:	8c4e                	mv	s8,s3
1c008b04:	ec0481e3          	beqz	s1,1c0089c6 <pos_libc_prf+0x48>
1c008b08:	8626                	mv	a2,s1
1c008b0a:	8566                	mv	a0,s9
1c008b0c:	3431                	jal	1c008518 <memcpy>
1c008b0e:	8c4e                	mv	s8,s3
1c008b10:	1b24db63          	ble	s2,s1,1c008cc6 <pos_libc_prf+0x348>
1c008b14:	c602                	sw	zero,12(sp)
1c008b16:	a0f9                	j	1c008be4 <pos_libc_prf+0x266>
1c008b18:	ec0488e3          	beqz	s1,1c0089e8 <pos_libc_prf+0x6a>
1c008b1c:	02000593          	li	a1,32
1c008b20:	f4b494e3          	bne	s1,a1,1c008a68 <pos_libc_prf+0xea>
1c008b24:	4785                	li	a5,1
1c008b26:	cc3e                	sw	a5,24(sp)
1c008b28:	8456                	mv	s0,s5
1c008b2a:	b781                	j	1c008a6a <pos_libc_prf+0xec>
1c008b2c:	06300693          	li	a3,99
1c008b30:	0ad48de3          	beq	s1,a3,1c0093ea <pos_libc_prf+0xa6c>
1c008b34:	0096cde3          	blt	a3,s1,1c00934e <pos_libc_prf+0x9d0>
1c008b38:	05800693          	li	a3,88
1c008b3c:	12d49fe3          	bne	s1,a3,1c00947a <pos_libc_prf+0xafc>
1c008b40:	47b2                	lw	a5,12(sp)
1c008b42:	004c0893          	addi	a7,s8,4
1c008b46:	000c2503          	lw	a0,0(s8)
1c008b4a:	260788e3          	beqz	a5,1c0095ba <pos_libc_prf+0xc3c>
1c008b4e:	76e1                	lui	a3,0xffff8
1c008b50:	8306c693          	xori	a3,a3,-2000
1c008b54:	02d11223          	sh	a3,36(sp)
1c008b58:	4309                	li	t1,2
1c008b5a:	02610613          	addi	a2,sp,38
1c008b5e:	86b2                	mv	a3,a2
1c008b60:	4ea5                	li	t4,9
1c008b62:	f6453733          	p.bclr	a4,a0,27,4
1c008b66:	0ff77793          	andi	a5,a4,255
1c008b6a:	03078593          	addi	a1,a5,48
1c008b6e:	8111                	srli	a0,a0,0x4
1c008b70:	05778793          	addi	a5,a5,87
1c008b74:	70eee963          	bltu	t4,a4,1c009286 <pos_libc_prf+0x908>
1c008b78:	00b680ab          	p.sb	a1,1(a3!) # ffff8001 <pulp__FC+0xffff8002>
1c008b7c:	f17d                	bnez	a0,1c008b62 <pos_libc_prf+0x1e4>
1c008b7e:	40c68733          	sub	a4,a3,a2
1c008b82:	01475d63          	ble	s4,a4,1c008b9c <pos_libc_prf+0x21e>
1c008b86:	40d605b3          	sub	a1,a2,a3
1c008b8a:	03000513          	li	a0,48
1c008b8e:	95d2                	add	a1,a1,s4
1c008b90:	0045c0fb          	lp.setup	x1,a1,1c008b98 <pos_libc_prf+0x21a>
1c008b94:	00a680ab          	p.sb	a0,1(a3!)
1c008b98:	40c68733          	sub	a4,a3,a2
1c008b9c:	fe068fab          	p.sb	zero,-1(a3!)
1c008ba0:	00d67c63          	bleu	a3,a2,1c008bb8 <pos_libc_prf+0x23a>
1c008ba4:	00064583          	lbu	a1,0(a2)
1c008ba8:	0006c783          	lbu	a5,0(a3)
1c008bac:	feb68fab          	p.sb	a1,-1(a3!)
1c008bb0:	00f600ab          	p.sb	a5,1(a2!)
1c008bb4:	fed668e3          	bltu	a2,a3,1c008ba4 <pos_libc_prf+0x226>
1c008bb8:	05800693          	li	a3,88
1c008bbc:	20d483e3          	beq	s1,a3,1c0095c2 <pos_libc_prf+0xc44>
1c008bc0:	46b2                	lw	a3,12(sp)
1c008bc2:	006704b3          	add	s1,a4,t1
1c008bc6:	c299                	beqz	a3,1c008bcc <pos_libc_prf+0x24e>
1c008bc8:	4709                	li	a4,2
1c008bca:	c63a                	sw	a4,12(sp)
1c008bcc:	0c800793          	li	a5,200
1c008bd0:	23fa24e3          	p.beqimm	s4,-1,1c0095f8 <pos_libc_prf+0xc7a>
1c008bd4:	1097c863          	blt	a5,s1,1c008ce4 <pos_libc_prf+0x366>
1c008bd8:	02000793          	li	a5,32
1c008bdc:	8c46                	mv	s8,a7
1c008bde:	c83e                	sw	a5,16(sp)
1c008be0:	0f24d163          	ble	s2,s1,1c008cc2 <pos_libc_prf+0x344>
1c008be4:	4772                	lw	a4,28(sp)
1c008be6:	0c0702e3          	beqz	a4,1c0094aa <pos_libc_prf+0xb2c>
1c008bea:	009c87b3          	add	a5,s9,s1
1c008bee:	40f007b3          	neg	a5,a5
1c008bf2:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008bf6:	4595                	li	a1,5
1c008bf8:	00378613          	addi	a2,a5,3
1c008bfc:	fff90693          	addi	a3,s2,-1
1c008c00:	04b67633          	p.maxu	a2,a2,a1
1c008c04:	8e85                	sub	a3,a3,s1
1c008c06:	409905b3          	sub	a1,s2,s1
1c008c0a:	06c6e163          	bltu	a3,a2,1c008c6c <pos_libc_prf+0x2ee>
1c008c0e:	8626                	mv	a2,s1
1c008c10:	cb85                	beqz	a5,1c008c40 <pos_libc_prf+0x2c2>
1c008c12:	1998                	addi	a4,sp,240
1c008c14:	00970633          	add	a2,a4,s1
1c008c18:	02000693          	li	a3,32
1c008c1c:	f2d60a23          	sb	a3,-204(a2)
1c008c20:	00148613          	addi	a2,s1,1
1c008c24:	0017ae63          	p.beqimm	a5,1,1c008c40 <pos_libc_prf+0x2c2>
1c008c28:	963a                	add	a2,a2,a4
1c008c2a:	f2d60a23          	sb	a3,-204(a2)
1c008c2e:	00248613          	addi	a2,s1,2
1c008c32:	0037b763          	p.bneimm	a5,3,1c008c40 <pos_libc_prf+0x2c2>
1c008c36:	963a                	add	a2,a2,a4
1c008c38:	f2d60a23          	sb	a3,-204(a2)
1c008c3c:	00348613          	addi	a2,s1,3
1c008c40:	8d9d                	sub	a1,a1,a5
1c008c42:	0025d693          	srli	a3,a1,0x2
1c008c46:	97a6                	add	a5,a5,s1
1c008c48:	97e6                	add	a5,a5,s9
1c008c4a:	42068fe3          	beqz	a3,1c009888 <pos_libc_prf+0xf0a>
1c008c4e:	0076c0fb          	lp.setup	x1,a3,1c008c5c <pos_libc_prf+0x2de>
1c008c52:	1c000737          	lui	a4,0x1c000
1c008c56:	10470713          	addi	a4,a4,260 # 1c000104 <__DTOR_END__+0xe8>
1c008c5a:	4318                	lw	a4,0(a4)
1c008c5c:	00e7a22b          	p.sw	a4,4(a5!)
1c008c60:	c205b7b3          	p.bclr	a5,a1,1,0
1c008c64:	00c784b3          	add	s1,a5,a2
1c008c68:	04b78c63          	beq	a5,a1,1c008cc0 <pos_libc_prf+0x342>
1c008c6c:	198c                	addi	a1,sp,240
1c008c6e:	009586b3          	add	a3,a1,s1
1c008c72:	02000793          	li	a5,32
1c008c76:	f2f68a23          	sb	a5,-204(a3)
1c008c7a:	00148693          	addi	a3,s1,1
1c008c7e:	0526d163          	ble	s2,a3,1c008cc0 <pos_libc_prf+0x342>
1c008c82:	96ae                	add	a3,a3,a1
1c008c84:	f2f68a23          	sb	a5,-204(a3)
1c008c88:	00248693          	addi	a3,s1,2
1c008c8c:	0326da63          	ble	s2,a3,1c008cc0 <pos_libc_prf+0x342>
1c008c90:	96ae                	add	a3,a3,a1
1c008c92:	f2f68a23          	sb	a5,-204(a3)
1c008c96:	00348693          	addi	a3,s1,3
1c008c9a:	0326d363          	ble	s2,a3,1c008cc0 <pos_libc_prf+0x342>
1c008c9e:	96ae                	add	a3,a3,a1
1c008ca0:	f2f68a23          	sb	a5,-204(a3)
1c008ca4:	00448693          	addi	a3,s1,4
1c008ca8:	0126dc63          	ble	s2,a3,1c008cc0 <pos_libc_prf+0x342>
1c008cac:	96ae                	add	a3,a3,a1
1c008cae:	f2f68a23          	sb	a5,-204(a3)
1c008cb2:	00548713          	addi	a4,s1,5
1c008cb6:	01275563          	ble	s2,a4,1c008cc0 <pos_libc_prf+0x342>
1c008cba:	972e                	add	a4,a4,a1
1c008cbc:	f2f70a23          	sb	a5,-204(a4)
1c008cc0:	84ca                	mv	s1,s2
1c008cc2:	d00482e3          	beqz	s1,1c0089c6 <pos_libc_prf+0x48>
1c008cc6:	8966                	mv	s2,s9
1c008cc8:	419d8db3          	sub	s11,s11,s9
1c008ccc:	a029                	j	1c008cd6 <pos_libc_prf+0x358>
1c008cce:	012d8733          	add	a4,s11,s2
1c008cd2:	5a048f63          	beqz	s1,1c009290 <pos_libc_prf+0x912>
1c008cd6:	0019450b          	p.lbu	a0,1(s2!)
1c008cda:	85ea                	mv	a1,s10
1c008cdc:	14fd                	addi	s1,s1,-1
1c008cde:	9b02                	jalr	s6
1c008ce0:	fff537e3          	p.bneimm	a0,-1,1c008cce <pos_libc_prf+0x350>
1c008ce4:	547d                	li	s0,-1
1c008ce6:	b311                	j	1c0089ea <pos_libc_prf+0x6c>
1c008ce8:	4705                	li	a4,1
1c008cea:	ca3a                	sw	a4,20(sp)
1c008cec:	8456                	mv	s0,s5
1c008cee:	bbb5                	j	1c008a6a <pos_libc_prf+0xec>
1c008cf0:	03000713          	li	a4,48
1c008cf4:	c83a                	sw	a4,16(sp)
1c008cf6:	8456                	mv	s0,s5
1c008cf8:	bb8d                	j	1c008a6a <pos_libc_prf+0xec>
1c008cfa:	4785                	li	a5,1
1c008cfc:	ce3e                	sw	a5,28(sp)
1c008cfe:	8456                	mv	s0,s5
1c008d00:	b3ad                	j	1c008a6a <pos_libc_prf+0xec>
1c008d02:	4685                	li	a3,1
1c008d04:	c636                	sw	a3,12(sp)
1c008d06:	8456                	mv	s0,s5
1c008d08:	b38d                	j	1c008a6a <pos_libc_prf+0xec>
1c008d0a:	8456                	mv	s0,s5
1c008d0c:	0a85                	addi	s5,s5,1
1c008d0e:	00291793          	slli	a5,s2,0x2
1c008d12:	97ca                	add	a5,a5,s2
1c008d14:	0786                	slli	a5,a5,0x1
1c008d16:	97a6                	add	a5,a5,s1
1c008d18:	000ac483          	lbu	s1,0(s5)
1c008d1c:	fd078913          	addi	s2,a5,-48
1c008d20:	fd048793          	addi	a5,s1,-48
1c008d24:	fef5f3e3          	bleu	a5,a1,1c008d0a <pos_libc_prf+0x38c>
1c008d28:	00240993          	addi	s3,s0,2
1c008d2c:	a811                	j	1c008d40 <pos_libc_prf+0x3c2>
1c008d2e:	000c2903          	lw	s2,0(s8)
1c008d32:	0c11                	addi	s8,s8,4
1c008d34:	12094d63          	bltz	s2,1c008e6e <pos_libc_prf+0x4f0>
1c008d38:	000ac483          	lbu	s1,0(s5)
1c008d3c:	00240993          	addi	s3,s0,2
1c008d40:	0c800693          	li	a3,200
1c008d44:	04d95933          	p.minu	s2,s2,a3
1c008d48:	b3a9                	j	1c008a92 <pos_libc_prf+0x114>
1c008d4a:	06500693          	li	a3,101
1c008d4e:	12d4d563          	ble	a3,s1,1c008e78 <pos_libc_prf+0x4fa>
1c008d52:	04700693          	li	a3,71
1c008d56:	dc96cbe3          	blt	a3,s1,1c008b2c <pos_libc_prf+0x1ae>
1c008d5a:	04500693          	li	a3,69
1c008d5e:	10d4dd63          	ble	a3,s1,1c008e78 <pos_libc_prf+0x4fa>
1c008d62:	c80483e3          	beqz	s1,1c0089e8 <pos_libc_prf+0x6a>
1c008d66:	02500693          	li	a3,37
1c008d6a:	70d49863          	bne	s1,a3,1c00947a <pos_libc_prf+0xafc>
1c008d6e:	85ea                	mv	a1,s10
1c008d70:	02500513          	li	a0,37
1c008d74:	9b02                	jalr	s6
1c008d76:	f7f527e3          	p.beqimm	a0,-1,1c008ce4 <pos_libc_prf+0x366>
1c008d7a:	0d85                	addi	s11,s11,1
1c008d7c:	b195                	j	1c0089e0 <pos_libc_prf+0x62>
1c008d7e:	0009c783          	lbu	a5,0(s3)
1c008d82:	02a00693          	li	a3,42
1c008d86:	00198513          	addi	a0,s3,1
1c008d8a:	0ad79963          	bne	a5,a3,1c008e3c <pos_libc_prf+0x4be>
1c008d8e:	000c2a03          	lw	s4,0(s8)
1c008d92:	0019c483          	lbu	s1,1(s3)
1c008d96:	0c11                	addi	s8,s8,4
1c008d98:	0989                	addi	s3,s3,2
1c008d9a:	0c800693          	li	a3,200
1c008d9e:	cf46dfe3          	ble	s4,a3,1c008a9c <pos_libc_prf+0x11e>
1c008da2:	5a7d                	li	s4,-1
1c008da4:	b9e5                	j	1c008a9c <pos_libc_prf+0x11e>
1c008da6:	06e00693          	li	a3,110
1c008daa:	58d48763          	beq	s1,a3,1c009338 <pos_libc_prf+0x9ba>
1c008dae:	5896dc63          	ble	s1,a3,1c009346 <pos_libc_prf+0x9c8>
1c008db2:	47b2                	lw	a5,12(sp)
1c008db4:	004c0813          	addi	a6,s8,4
1c008db8:	000c2603          	lw	a2,0(s8)
1c008dbc:	04078ee3          	beqz	a5,1c009618 <pos_libc_prf+0xc9a>
1c008dc0:	03000793          	li	a5,48
1c008dc4:	02f10223          	sb	a5,36(sp)
1c008dc8:	02060de3          	beqz	a2,1c009602 <pos_libc_prf+0xc84>
1c008dcc:	02510513          	addi	a0,sp,37
1c008dd0:	86aa                	mv	a3,a0
1c008dd2:	87b6                	mv	a5,a3
1c008dd4:	f8363733          	p.bclr	a4,a2,28,3
1c008dd8:	03070713          	addi	a4,a4,48
1c008ddc:	820d                	srli	a2,a2,0x3
1c008dde:	00e780ab          	p.sb	a4,1(a5!)
1c008de2:	fa6d                	bnez	a2,1c008dd4 <pos_libc_prf+0x456>
1c008de4:	40a78733          	sub	a4,a5,a0
1c008de8:	01475d63          	ble	s4,a4,1c008e02 <pos_libc_prf+0x484>
1c008dec:	40fa0633          	sub	a2,s4,a5
1c008df0:	03000593          	li	a1,48
1c008df4:	962a                	add	a2,a2,a0
1c008df6:	004640fb          	lp.setup	x1,a2,1c008dfe <pos_libc_prf+0x480>
1c008dfa:	00b780ab          	p.sb	a1,1(a5!)
1c008dfe:	40a78733          	sub	a4,a5,a0
1c008e02:	fe078fab          	p.sb	zero,-1(a5!)
1c008e06:	00f6fc63          	bleu	a5,a3,1c008e1e <pos_libc_prf+0x4a0>
1c008e0a:	0006c583          	lbu	a1,0(a3)
1c008e0e:	0007c603          	lbu	a2,0(a5)
1c008e12:	feb78fab          	p.sb	a1,-1(a5!)
1c008e16:	00c680ab          	p.sb	a2,1(a3!)
1c008e1a:	fef6e8e3          	bltu	a3,a5,1c008e0a <pos_libc_prf+0x48c>
1c008e1e:	46b2                	lw	a3,12(sp)
1c008e20:	0c800793          	li	a5,200
1c008e24:	00d704b3          	add	s1,a4,a3
1c008e28:	0bfa2de3          	p.beqimm	s4,-1,1c0096e2 <pos_libc_prf+0xd64>
1c008e2c:	ea97cce3          	blt	a5,s1,1c008ce4 <pos_libc_prf+0x366>
1c008e30:	02000793          	li	a5,32
1c008e34:	8c42                	mv	s8,a6
1c008e36:	c602                	sw	zero,12(sp)
1c008e38:	c83e                	sw	a5,16(sp)
1c008e3a:	b35d                	j	1c008be0 <pos_libc_prf+0x262>
1c008e3c:	fd078813          	addi	a6,a5,-48
1c008e40:	46a5                	li	a3,9
1c008e42:	84be                	mv	s1,a5
1c008e44:	862a                	mv	a2,a0
1c008e46:	4a01                	li	s4,0
1c008e48:	45a5                	li	a1,9
1c008e4a:	89aa                	mv	s3,a0
1c008e4c:	c506e8e3          	bltu	a3,a6,1c008a9c <pos_libc_prf+0x11e>
1c008e50:	002a1793          	slli	a5,s4,0x2
1c008e54:	97d2                	add	a5,a5,s4
1c008e56:	0786                	slli	a5,a5,0x1
1c008e58:	97a6                	add	a5,a5,s1
1c008e5a:	0016448b          	p.lbu	s1,1(a2!)
1c008e5e:	fd078a13          	addi	s4,a5,-48
1c008e62:	fd048793          	addi	a5,s1,-48
1c008e66:	fef5f5e3          	bleu	a5,a1,1c008e50 <pos_libc_prf+0x4d2>
1c008e6a:	89b2                	mv	s3,a2
1c008e6c:	b73d                	j	1c008d9a <pos_libc_prf+0x41c>
1c008e6e:	4705                	li	a4,1
1c008e70:	41200933          	neg	s2,s2
1c008e74:	ce3a                	sw	a4,28(sp)
1c008e76:	b5c9                	j	1c008d38 <pos_libc_prf+0x3ba>
1c008e78:	0c1d                	addi	s8,s8,7
1c008e7a:	c40c3c33          	p.bclr	s8,s8,2,0
1c008e7e:	000c2683          	lw	a3,0(s8)
1c008e82:	004c2803          	lw	a6,4(s8)
1c008e86:	7ff00613          	li	a2,2047
1c008e8a:	0156d893          	srli	a7,a3,0x15
1c008e8e:	01485513          	srli	a0,a6,0x14
1c008e92:	00b81593          	slli	a1,a6,0xb
1c008e96:	00b8e5b3          	or	a1,a7,a1
1c008e9a:	e8b53533          	p.bclr	a0,a0,20,11
1c008e9e:	0c21                	addi	s8,s8,8
1c008ea0:	06ae                	slli	a3,a3,0xb
1c008ea2:	c1f5b5b3          	p.bclr	a1,a1,0,31
1c008ea6:	7ac50b63          	beq	a0,a2,1c00965c <pos_libc_prf+0xcde>
1c008eaa:	04600613          	li	a2,70
1c008eae:	00c49463          	bne	s1,a2,1c008eb6 <pos_libc_prf+0x538>
1c008eb2:	06600493          	li	s1,102
1c008eb6:	00d56633          	or	a2,a0,a3
1c008eba:	8e4d                	or	a2,a2,a1
1c008ebc:	7c060b63          	beqz	a2,1c009692 <pos_libc_prf+0xd14>
1c008ec0:	c0250513          	addi	a0,a0,-1022
1c008ec4:	c1f5c333          	p.bset	t1,a1,0,31
1c008ec8:	140842e3          	bltz	a6,1c00980c <pos_libc_prf+0xe8e>
1c008ecc:	4752                	lw	a4,20(sp)
1c008ece:	180703e3          	beqz	a4,1c009854 <pos_libc_prf+0xed6>
1c008ed2:	02b00613          	li	a2,43
1c008ed6:	02c10223          	sb	a2,36(sp)
1c008eda:	02510893          	addi	a7,sp,37
1c008ede:	5679                	li	a2,-2
1c008ee0:	4801                	li	a6,0
1c008ee2:	06c55763          	ble	a2,a0,1c008f50 <pos_libc_prf+0x5d2>
1c008ee6:	33333e37          	lui	t3,0x33333
1c008eea:	80000eb7          	lui	t4,0x80000
1c008eee:	332e0e13          	addi	t3,t3,818 # 33333332 <__cluster_text_end+0x17323332>
1c008ef2:	fffece93          	not	t4,t4
1c008ef6:	5f79                	li	t5,-2
1c008ef8:	a011                	j	1c008efc <pos_libc_prf+0x57e>
1c008efa:	853e                	mv	a0,a5
1c008efc:	01f31613          	slli	a2,t1,0x1f
1c008f00:	0016d713          	srli	a4,a3,0x1
1c008f04:	fc16b7b3          	p.bclr	a5,a3,30,1
1c008f08:	8f51                	or	a4,a4,a2
1c008f0a:	00e786b3          	add	a3,a5,a4
1c008f0e:	00f6b7b3          	sltu	a5,a3,a5
1c008f12:	00135313          	srli	t1,t1,0x1
1c008f16:	933e                	add	t1,t1,a5
1c008f18:	00150793          	addi	a5,a0,1
1c008f1c:	fc6e6fe3          	bltu	t3,t1,1c008efa <pos_libc_prf+0x57c>
1c008f20:	00269613          	slli	a2,a3,0x2
1c008f24:	01e6d593          	srli	a1,a3,0x1e
1c008f28:	00231713          	slli	a4,t1,0x2
1c008f2c:	96b2                	add	a3,a3,a2
1c008f2e:	8f4d                	or	a4,a4,a1
1c008f30:	933a                	add	t1,t1,a4
1c008f32:	00c6b633          	sltu	a2,a3,a2
1c008f36:	9332                	add	t1,t1,a2
1c008f38:	01f6d713          	srli	a4,a3,0x1f
1c008f3c:	0509                	addi	a0,a0,2
1c008f3e:	187d                	addi	a6,a6,-1
1c008f40:	01d31663          	bne	t1,t4,1c008f4c <pos_libc_prf+0x5ce>
1c008f44:	0686                	slli	a3,a3,0x1
1c008f46:	fc174333          	p.bset	t1,a4,30,1
1c008f4a:	853e                	mv	a0,a5
1c008f4c:	fbe548e3          	blt	a0,t5,1c008efc <pos_libc_prf+0x57e>
1c008f50:	06a05763          	blez	a0,1c008fbe <pos_libc_prf+0x640>
1c008f54:	80000eb7          	lui	t4,0x80000
1c008f58:	4f15                	li	t5,5
1c008f5a:	fffece93          	not	t4,t4
1c008f5e:	00268613          	addi	a2,a3,2
1c008f62:	00d636b3          	sltu	a3,a2,a3
1c008f66:	9336                	add	t1,t1,a3
1c008f68:	03e357b3          	divu	a5,t1,t5
1c008f6c:	00365593          	srli	a1,a2,0x3
1c008f70:	157d                	addi	a0,a0,-1
1c008f72:	0805                	addi	a6,a6,1
1c008f74:	00279713          	slli	a4,a5,0x2
1c008f78:	973e                	add	a4,a4,a5
1c008f7a:	40e30333          	sub	t1,t1,a4
1c008f7e:	01d31713          	slli	a4,t1,0x1d
1c008f82:	8dd9                	or	a1,a1,a4
1c008f84:	03e5d5b3          	divu	a1,a1,t5
1c008f88:	00359693          	slli	a3,a1,0x3
1c008f8c:	00559713          	slli	a4,a1,0x5
1c008f90:	9736                	add	a4,a4,a3
1c008f92:	40e60733          	sub	a4,a2,a4
1c008f96:	03e75733          	divu	a4,a4,t5
1c008f9a:	81f5                	srli	a1,a1,0x1d
1c008f9c:	97ae                	add	a5,a5,a1
1c008f9e:	96ba                	add	a3,a3,a4
1c008fa0:	00e6b733          	sltu	a4,a3,a4
1c008fa4:	00f70333          	add	t1,a4,a5
1c008fa8:	01f6d793          	srli	a5,a3,0x1f
1c008fac:	0306                	slli	t1,t1,0x1
1c008fae:	0067e333          	or	t1,a5,t1
1c008fb2:	0686                	slli	a3,a3,0x1
1c008fb4:	157d                	addi	a0,a0,-1
1c008fb6:	fe6ef9e3          	bleu	t1,t4,1c008fa8 <pos_libc_prf+0x62a>
1c008fba:	faa042e3          	bgtz	a0,1c008f5e <pos_libc_prf+0x5e0>
1c008fbe:	4611                	li	a2,4
1c008fc0:	8e09                	sub	a2,a2,a0
1c008fc2:	012640fb          	lp.setup	x1,a2,1c008fe6 <pos_libc_prf+0x668>
1c008fc6:	01f31713          	slli	a4,t1,0x1f
1c008fca:	0016d793          	srli	a5,a3,0x1
1c008fce:	8fd9                	or	a5,a5,a4
1c008fd0:	fc16b6b3          	p.bclr	a3,a3,30,1
1c008fd4:	00f68eb3          	add	t4,a3,a5
1c008fd8:	00135313          	srli	t1,t1,0x1
1c008fdc:	00deb6b3          	sltu	a3,t4,a3
1c008fe0:	00668533          	add	a0,a3,t1
1c008fe4:	832a                	mv	t1,a0
1c008fe6:	86f6                	mv	a3,t4
1c008fe8:	06700693          	li	a3,103
1c008fec:	6c0a4e63          	bltz	s4,1c0096c8 <pos_libc_prf+0xd4a>
1c008ff0:	62d48863          	beq	s1,a3,1c009620 <pos_libc_prf+0xca2>
1c008ff4:	04700693          	li	a3,71
1c008ff8:	62d48463          	beq	s1,a3,1c009620 <pos_libc_prf+0xca2>
1c008ffc:	06600693          	li	a3,102
1c009000:	78d48963          	beq	s1,a3,1c009792 <pos_libc_prf+0xe14>
1c009004:	001a0f13          	addi	t5,s4,1
1c009008:	45c1                	li	a1,16
1c00900a:	04bf4f33          	p.min	t5,t5,a1
1c00900e:	1f7d                	addi	t5,t5,-1
1c009010:	4e01                	li	t3,0
1c009012:	4581                	li	a1,0
1c009014:	080006b7          	lui	a3,0x8000
1c009018:	4f95                	li	t6,5
1c00901a:	0f05                	addi	t5,t5,1
1c00901c:	02ff40fb          	lp.setup	x1,t5,1c00907a <pos_libc_prf+0x6fc>
1c009020:	00258713          	addi	a4,a1,2
1c009024:	00b737b3          	sltu	a5,a4,a1
1c009028:	97b6                	add	a5,a5,a3
1c00902a:	03f7d5b3          	divu	a1,a5,t6
1c00902e:	00375613          	srli	a2,a4,0x3
1c009032:	00259693          	slli	a3,a1,0x2
1c009036:	96ae                	add	a3,a3,a1
1c009038:	8f95                	sub	a5,a5,a3
1c00903a:	07f6                	slli	a5,a5,0x1d
1c00903c:	8e5d                	or	a2,a2,a5
1c00903e:	03f65633          	divu	a2,a2,t6
1c009042:	00361693          	slli	a3,a2,0x3
1c009046:	00561793          	slli	a5,a2,0x5
1c00904a:	97b6                	add	a5,a5,a3
1c00904c:	40f707b3          	sub	a5,a4,a5
1c009050:	03f7d7b3          	divu	a5,a5,t6
1c009054:	01d65713          	srli	a4,a2,0x1d
1c009058:	972e                	add	a4,a4,a1
1c00905a:	96be                	add	a3,a3,a5
1c00905c:	00f6b7b3          	sltu	a5,a3,a5
1c009060:	973e                	add	a4,a4,a5
1c009062:	01f71613          	slli	a2,a4,0x1f
1c009066:	0016d793          	srli	a5,a3,0x1
1c00906a:	8fd1                	or	a5,a5,a2
1c00906c:	fc16b6b3          	p.bclr	a3,a3,30,1
1c009070:	00f685b3          	add	a1,a3,a5
1c009074:	8305                	srli	a4,a4,0x1
1c009076:	00d5b6b3          	sltu	a3,a1,a3
1c00907a:	96ba                	add	a3,a3,a4
1c00907c:	95f6                	add	a1,a1,t4
1c00907e:	96aa                	add	a3,a3,a0
1c009080:	01d5beb3          	sltu	t4,a1,t4
1c009084:	00de8533          	add	a0,t4,a3
1c009088:	f6053633          	p.bclr	a2,a0,27,0
1c00908c:	86ae                	mv	a3,a1
1c00908e:	c22d                	beqz	a2,1c0090f0 <pos_libc_prf+0x772>
1c009090:	00258613          	addi	a2,a1,2
1c009094:	00b636b3          	sltu	a3,a2,a1
1c009098:	96aa                	add	a3,a3,a0
1c00909a:	4e95                	li	t4,5
1c00909c:	03d6d333          	divu	t1,a3,t4
1c0090a0:	00365513          	srli	a0,a2,0x3
1c0090a4:	0805                	addi	a6,a6,1
1c0090a6:	00231593          	slli	a1,t1,0x2
1c0090aa:	959a                	add	a1,a1,t1
1c0090ac:	8e8d                	sub	a3,a3,a1
1c0090ae:	06f6                	slli	a3,a3,0x1d
1c0090b0:	8d55                	or	a0,a0,a3
1c0090b2:	03d55533          	divu	a0,a0,t4
1c0090b6:	00351593          	slli	a1,a0,0x3
1c0090ba:	00551693          	slli	a3,a0,0x5
1c0090be:	96ae                	add	a3,a3,a1
1c0090c0:	40d606b3          	sub	a3,a2,a3
1c0090c4:	03d6d6b3          	divu	a3,a3,t4
1c0090c8:	8175                	srli	a0,a0,0x1d
1c0090ca:	951a                	add	a0,a0,t1
1c0090cc:	95b6                	add	a1,a1,a3
1c0090ce:	00d5b6b3          	sltu	a3,a1,a3
1c0090d2:	00a68633          	add	a2,a3,a0
1c0090d6:	01f61513          	slli	a0,a2,0x1f
1c0090da:	0015d693          	srli	a3,a1,0x1
1c0090de:	8ec9                	or	a3,a3,a0
1c0090e0:	fc15b5b3          	p.bclr	a1,a1,30,1
1c0090e4:	96ae                	add	a3,a3,a1
1c0090e6:	8205                	srli	a2,a2,0x1
1c0090e8:	00b6b5b3          	sltu	a1,a3,a1
1c0090ec:	00c58533          	add	a0,a1,a2
1c0090f0:	06600593          	li	a1,102
1c0090f4:	00188613          	addi	a2,a7,1
1c0090f8:	60b48463          	beq	s1,a1,1c009700 <pos_libc_prf+0xd82>
1c0090fc:	00269593          	slli	a1,a3,0x2
1c009100:	01e6de93          	srli	t4,a3,0x1e
1c009104:	00251313          	slli	t1,a0,0x2
1c009108:	96ae                	add	a3,a3,a1
1c00910a:	006ee333          	or	t1,t4,t1
1c00910e:	00b6b5b3          	sltu	a1,a3,a1
1c009112:	951a                	add	a0,a0,t1
1c009114:	952e                	add	a0,a0,a1
1c009116:	0506                	slli	a0,a0,0x1
1c009118:	01f6d593          	srli	a1,a3,0x1f
1c00911c:	8d4d                	or	a0,a0,a1
1c00911e:	01c55593          	srli	a1,a0,0x1c
1c009122:	03058313          	addi	t1,a1,48
1c009126:	47b2                	lw	a5,12(sp)
1c009128:	10000737          	lui	a4,0x10000
1c00912c:	00b035b3          	snez	a1,a1
1c009130:	177d                	addi	a4,a4,-1
1c009132:	00688023          	sb	t1,0(a7)
1c009136:	0686                	slli	a3,a3,0x1
1c009138:	8d79                	and	a0,a0,a4
1c00913a:	40b80833          	sub	a6,a6,a1
1c00913e:	5a078863          	beqz	a5,1c0096ee <pos_libc_prf+0xd70>
1c009142:	02e00613          	li	a2,46
1c009146:	00c880a3          	sb	a2,1(a7)
1c00914a:	00288613          	addi	a2,a7,2
1c00914e:	040a0b63          	beqz	s4,1c0091a4 <pos_libc_prf+0x826>
1c009152:	8332                	mv	t1,a2
1c009154:	9a32                	add	s4,s4,a2
1c009156:	4ebd                	li	t4,15
1c009158:	03000f13          	li	t5,48
1c00915c:	00269793          	slli	a5,a3,0x2
1c009160:	01e6d593          	srli	a1,a3,0x1e
1c009164:	00251713          	slli	a4,a0,0x2
1c009168:	00d78633          	add	a2,a5,a3
1c00916c:	8f4d                	or	a4,a4,a1
1c00916e:	972a                	add	a4,a4,a0
1c009170:	00f637b3          	sltu	a5,a2,a5
1c009174:	97ba                	add	a5,a5,a4
1c009176:	0786                	slli	a5,a5,0x1
1c009178:	01f65713          	srli	a4,a2,0x1f
1c00917c:	8fd9                	or	a5,a5,a4
1c00917e:	01c7d713          	srli	a4,a5,0x1c
1c009182:	03070713          	addi	a4,a4,48 # 10000030 <ne16_infeat+0x2c>
1c009186:	2fd05463          	blez	t4,1c00946e <pos_libc_prf+0xaf0>
1c00918a:	100005b7          	lui	a1,0x10000
1c00918e:	15fd                	addi	a1,a1,-1
1c009190:	00e300ab          	p.sb	a4,1(t1!)
1c009194:	1efd                	addi	t4,t4,-1
1c009196:	00161693          	slli	a3,a2,0x1
1c00919a:	00b7f533          	and	a0,a5,a1
1c00919e:	fa6a1fe3          	bne	s4,t1,1c00915c <pos_libc_prf+0x7de>
1c0091a2:	8652                	mv	a2,s4
1c0091a4:	0c0e1163          	bnez	t3,1c009266 <pos_libc_prf+0x8e8>
1c0091a8:	c054b6b3          	p.bclr	a3,s1,0,5
1c0091ac:	04500593          	li	a1,69
1c0091b0:	02b69963          	bne	a3,a1,1c0091e2 <pos_libc_prf+0x864>
1c0091b4:	87a6                	mv	a5,s1
1c0091b6:	00f60023          	sb	a5,0(a2)
1c0091ba:	5e084d63          	bltz	a6,1c0097b4 <pos_libc_prf+0xe36>
1c0091be:	02b00793          	li	a5,43
1c0091c2:	00f600a3          	sb	a5,1(a2)
1c0091c6:	47a9                	li	a5,10
1c0091c8:	02f846b3          	div	a3,a6,a5
1c0091cc:	0611                	addi	a2,a2,4
1c0091ce:	02f867b3          	rem	a5,a6,a5
1c0091d2:	03068693          	addi	a3,a3,48 # 8000030 <__l1_heap_size+0x7ff4f70>
1c0091d6:	fed60f23          	sb	a3,-2(a2)
1c0091da:	03078793          	addi	a5,a5,48
1c0091de:	fef60fa3          	sb	a5,-1(a2)
1c0091e2:	00060023          	sb	zero,0(a2)
1c0091e6:	419604b3          	sub	s1,a2,s9
1c0091ea:	46d2                	lw	a3,20(sp)
1c0091ec:	4762                	lw	a4,24(sp)
1c0091ee:	8ed9                	or	a3,a3,a4
1c0091f0:	c636                	sw	a3,12(sp)
1c0091f2:	2a069463          	bnez	a3,1c00949a <pos_libc_prf+0xb1c>
1c0091f6:	02414683          	lbu	a3,36(sp)
1c0091fa:	02d00793          	li	a5,45
1c0091fe:	28f68e63          	beq	a3,a5,1c00949a <pos_libc_prf+0xb1c>
1c009202:	0c800793          	li	a5,200
1c009206:	9c97dde3          	ble	s1,a5,1c008be0 <pos_libc_prf+0x262>
1c00920a:	547d                	li	s0,-1
1c00920c:	fdeff06f          	j	1c0089ea <pos_libc_prf+0x6c>
1c009210:	0305                	addi	t1,t1,1
1c009212:	00269793          	slli	a5,a3,0x2
1c009216:	01e6d893          	srli	a7,a3,0x1e
1c00921a:	00251713          	slli	a4,a0,0x2
1c00921e:	00d785b3          	add	a1,a5,a3
1c009222:	00e8e733          	or	a4,a7,a4
1c009226:	972a                	add	a4,a4,a0
1c009228:	00f5b7b3          	sltu	a5,a1,a5
1c00922c:	97ba                	add	a5,a5,a4
1c00922e:	0786                	slli	a5,a5,0x1
1c009230:	01f5d713          	srli	a4,a1,0x1f
1c009234:	8fd9                	or	a5,a5,a4
1c009236:	01c7d893          	srli	a7,a5,0x1c
1c00923a:	03000713          	li	a4,48
1c00923e:	01d05c63          	blez	t4,1c009256 <pos_libc_prf+0x8d8>
1c009242:	00159693          	slli	a3,a1,0x1
1c009246:	100005b7          	lui	a1,0x10000
1c00924a:	15fd                	addi	a1,a1,-1
1c00924c:	03088713          	addi	a4,a7,48
1c009250:	1efd                	addi	t4,t4,-1
1c009252:	00b7f533          	and	a0,a5,a1
1c009256:	fee30fa3          	sb	a4,-1(t1)
1c00925a:	fa661be3          	bne	a2,t1,1c009210 <pos_libc_prf+0x892>
1c00925e:	014f8633          	add	a2,t6,s4
1c009262:	f80e00e3          	beqz	t3,1c0091e2 <pos_libc_prf+0x864>
1c009266:	03000513          	li	a0,48
1c00926a:	a011                	j	1c00926e <pos_libc_prf+0x8f0>
1c00926c:	8636                	mv	a2,a3
1c00926e:	fff60693          	addi	a3,a2,-1
1c009272:	0006c583          	lbu	a1,0(a3)
1c009276:	fea58be3          	beq	a1,a0,1c00926c <pos_libc_prf+0x8ee>
1c00927a:	02e00513          	li	a0,46
1c00927e:	f2a595e3          	bne	a1,a0,1c0091a8 <pos_libc_prf+0x82a>
1c009282:	8636                	mv	a2,a3
1c009284:	b715                	j	1c0091a8 <pos_libc_prf+0x82a>
1c009286:	00f680ab          	p.sb	a5,1(a3!)
1c00928a:	8c051ce3          	bnez	a0,1c008b62 <pos_libc_prf+0x1e4>
1c00928e:	b8c5                	j	1c008b7e <pos_libc_prf+0x200>
1c009290:	8dba                	mv	s11,a4
1c009292:	f34ff06f          	j	1c0089c6 <pos_libc_prf+0x48>
1c009296:	77e1                	lui	a5,0xffff8
1c009298:	8307c793          	xori	a5,a5,-2000
1c00929c:	02610693          	addi	a3,sp,38
1c0092a0:	000c2583          	lw	a1,0(s8)
1c0092a4:	02f11223          	sh	a5,36(sp)
1c0092a8:	0c11                	addi	s8,s8,4
1c0092aa:	87b6                	mv	a5,a3
1c0092ac:	48a5                	li	a7,9
1c0092ae:	f645b633          	p.bclr	a2,a1,27,4
1c0092b2:	0ff67713          	andi	a4,a2,255
1c0092b6:	03070513          	addi	a0,a4,48
1c0092ba:	8191                	srli	a1,a1,0x4
1c0092bc:	05770713          	addi	a4,a4,87
1c0092c0:	06c8e863          	bltu	a7,a2,1c009330 <pos_libc_prf+0x9b2>
1c0092c4:	00a780ab          	p.sb	a0,1(a5!) # ffff8001 <pulp__FC+0xffff8002>
1c0092c8:	f1fd                	bnez	a1,1c0092ae <pos_libc_prf+0x930>
1c0092ca:	40d78733          	sub	a4,a5,a3
1c0092ce:	461d                	li	a2,7
1c0092d0:	02e64563          	blt	a2,a4,1c0092fa <pos_libc_prf+0x97c>
1c0092d4:	1998                	addi	a4,sp,240
1c0092d6:	40e78533          	sub	a0,a5,a4
1c0092da:	40f68633          	sub	a2,a3,a5
1c0092de:	0cb50513          	addi	a0,a0,203
1c0092e2:	4821                	li	a6,8
1c0092e4:	03000593          	li	a1,48
1c0092e8:	0621                	addi	a2,a2,8
1c0092ea:	5aa84263          	blt	a6,a0,1c00988e <pos_libc_prf+0xf10>
1c0092ee:	004640fb          	lp.setup	x1,a2,1c0092f6 <pos_libc_prf+0x978>
1c0092f2:	00b780ab          	p.sb	a1,1(a5!)
1c0092f6:	40d78733          	sub	a4,a5,a3
1c0092fa:	fe078fab          	p.sb	zero,-1(a5!)
1c0092fe:	00f6fc63          	bleu	a5,a3,1c009316 <pos_libc_prf+0x998>
1c009302:	0006c583          	lbu	a1,0(a3)
1c009306:	0007c603          	lbu	a2,0(a5)
1c00930a:	feb78fab          	p.sb	a1,-1(a5!)
1c00930e:	00c680ab          	p.sb	a2,1(a3!)
1c009312:	fef6e8e3          	bltu	a3,a5,1c009302 <pos_libc_prf+0x984>
1c009316:	00270493          	addi	s1,a4,2
1c00931a:	0c800793          	li	a5,200
1c00931e:	17fa2963          	p.beqimm	s4,-1,1c009490 <pos_libc_prf+0xb12>
1c009322:	9c97c1e3          	blt	a5,s1,1c008ce4 <pos_libc_prf+0x366>
1c009326:	02000713          	li	a4,32
1c00932a:	c602                	sw	zero,12(sp)
1c00932c:	c83a                	sw	a4,16(sp)
1c00932e:	b84d                	j	1c008be0 <pos_libc_prf+0x262>
1c009330:	00e780ab          	p.sb	a4,1(a5!)
1c009334:	fdad                	bnez	a1,1c0092ae <pos_libc_prf+0x930>
1c009336:	bf51                	j	1c0092ca <pos_libc_prf+0x94c>
1c009338:	000c2783          	lw	a5,0(s8)
1c00933c:	0c11                	addi	s8,s8,4
1c00933e:	01b7a023          	sw	s11,0(a5)
1c009342:	e84ff06f          	j	1c0089c6 <pos_libc_prf+0x48>
1c009346:	06900693          	li	a3,105
1c00934a:	12d49863          	bne	s1,a3,1c00947a <pos_libc_prf+0xafc>
1c00934e:	000c2503          	lw	a0,0(s8)
1c009352:	0c11                	addi	s8,s8,4
1c009354:	34054d63          	bltz	a0,1c0096ae <pos_libc_prf+0xd30>
1c009358:	4652                	lw	a2,20(sp)
1c00935a:	86aa                	mv	a3,a0
1c00935c:	2e061963          	bnez	a2,1c00964e <pos_libc_prf+0xcd0>
1c009360:	4762                	lw	a4,24(sp)
1c009362:	87e6                	mv	a5,s9
1c009364:	c719                	beqz	a4,1c009372 <pos_libc_prf+0x9f4>
1c009366:	02000793          	li	a5,32
1c00936a:	02f10223          	sb	a5,36(sp)
1c00936e:	02510793          	addi	a5,sp,37
1c009372:	873e                	mv	a4,a5
1c009374:	45a9                	li	a1,10
1c009376:	02b6f633          	remu	a2,a3,a1
1c00937a:	02b6d6b3          	divu	a3,a3,a1
1c00937e:	03060613          	addi	a2,a2,48
1c009382:	00c700ab          	p.sb	a2,1(a4!)
1c009386:	fae5                	bnez	a3,1c009376 <pos_libc_prf+0x9f8>
1c009388:	40f706b3          	sub	a3,a4,a5
1c00938c:	0146dc63          	ble	s4,a3,1c0093a4 <pos_libc_prf+0xa26>
1c009390:	40e786b3          	sub	a3,a5,a4
1c009394:	03000613          	li	a2,48
1c009398:	96d2                	add	a3,a3,s4
1c00939a:	0046c0fb          	lp.setup	x1,a3,1c0093a2 <pos_libc_prf+0xa24>
1c00939e:	00c700ab          	p.sb	a2,1(a4!)
1c0093a2:	0001                	nop
1c0093a4:	86ba                	mv	a3,a4
1c0093a6:	fe068fab          	p.sb	zero,-1(a3!)
1c0093aa:	00d7fc63          	bleu	a3,a5,1c0093c2 <pos_libc_prf+0xa44>
1c0093ae:	0007c583          	lbu	a1,0(a5)
1c0093b2:	0006c603          	lbu	a2,0(a3)
1c0093b6:	feb68fab          	p.sb	a1,-1(a3!)
1c0093ba:	00c780ab          	p.sb	a2,1(a5!)
1c0093be:	fed7e8e3          	bltu	a5,a3,1c0093ae <pos_libc_prf+0xa30>
1c0093c2:	47d2                	lw	a5,20(sp)
1c0093c4:	4662                	lw	a2,24(sp)
1c0093c6:	419704b3          	sub	s1,a4,s9
1c0093ca:	8fd1                	or	a5,a5,a2
1c0093cc:	c63e                	sw	a5,12(sp)
1c0093ce:	e399                	bnez	a5,1c0093d4 <pos_libc_prf+0xa56>
1c0093d0:	817d                	srli	a0,a0,0x1f
1c0093d2:	c62a                	sw	a0,12(sp)
1c0093d4:	e3fa27e3          	p.beqimm	s4,-1,1c009202 <pos_libc_prf+0x884>
1c0093d8:	0c800793          	li	a5,200
1c0093dc:	9097c4e3          	blt	a5,s1,1c008ce4 <pos_libc_prf+0x366>
1c0093e0:	02000713          	li	a4,32
1c0093e4:	c83a                	sw	a4,16(sp)
1c0093e6:	ffaff06f          	j	1c008be0 <pos_libc_prf+0x262>
1c0093ea:	000c2783          	lw	a5,0(s8)
1c0093ee:	020102a3          	sb	zero,37(sp)
1c0093f2:	0c11                	addi	s8,s8,4
1c0093f4:	02f10223          	sb	a5,36(sp)
1c0093f8:	4485                	li	s1,1
1c0093fa:	f16ff06f          	j	1c008b10 <pos_libc_prf+0x192>
1c0093fe:	000c2683          	lw	a3,0(s8)
1c009402:	87e6                	mv	a5,s9
1c009404:	0c11                	addi	s8,s8,4
1c009406:	45a9                	li	a1,10
1c009408:	02b6f733          	remu	a4,a3,a1
1c00940c:	02b6d6b3          	divu	a3,a3,a1
1c009410:	03070713          	addi	a4,a4,48
1c009414:	00e780ab          	p.sb	a4,1(a5!)
1c009418:	fae5                	bnez	a3,1c009408 <pos_libc_prf+0xa8a>
1c00941a:	419784b3          	sub	s1,a5,s9
1c00941e:	0144dd63          	ble	s4,s1,1c009438 <pos_libc_prf+0xaba>
1c009422:	40fc86b3          	sub	a3,s9,a5
1c009426:	03000613          	li	a2,48
1c00942a:	96d2                	add	a3,a3,s4
1c00942c:	0046c0fb          	lp.setup	x1,a3,1c009434 <pos_libc_prf+0xab6>
1c009430:	00c780ab          	p.sb	a2,1(a5!)
1c009434:	419784b3          	sub	s1,a5,s9
1c009438:	fe078fab          	p.sb	zero,-1(a5!)
1c00943c:	00fcfd63          	bleu	a5,s9,1c009456 <pos_libc_prf+0xad8>
1c009440:	86e6                	mv	a3,s9
1c009442:	0006c603          	lbu	a2,0(a3)
1c009446:	0007c703          	lbu	a4,0(a5)
1c00944a:	fec78fab          	p.sb	a2,-1(a5!)
1c00944e:	00e680ab          	p.sb	a4,1(a3!)
1c009452:	fef6e8e3          	bltu	a3,a5,1c009442 <pos_libc_prf+0xac4>
1c009456:	0c800793          	li	a5,200
1c00945a:	03fa2b63          	p.beqimm	s4,-1,1c009490 <pos_libc_prf+0xb12>
1c00945e:	8897c3e3          	blt	a5,s1,1c008ce4 <pos_libc_prf+0x366>
1c009462:	02000693          	li	a3,32
1c009466:	c602                	sw	zero,12(sp)
1c009468:	c836                	sw	a3,16(sp)
1c00946a:	f76ff06f          	j	1c008be0 <pos_libc_prf+0x262>
1c00946e:	01e300ab          	p.sb	t5,1(t1!)
1c009472:	ce6a15e3          	bne	s4,t1,1c00915c <pos_libc_prf+0x7de>
1c009476:	8652                	mv	a2,s4
1c009478:	b335                	j	1c0091a4 <pos_libc_prf+0x826>
1c00947a:	0c800693          	li	a3,200
1c00947e:	d496d463          	ble	s1,a3,1c0089c6 <pos_libc_prf+0x48>
1c009482:	547d                	li	s0,-1
1c009484:	d66ff06f          	j	1c0089ea <pos_libc_prf+0x6c>
1c009488:	e60a5b63          	bgez	s4,1c008afe <pos_libc_prf+0x180>
1c00948c:	e76ff06f          	j	1c008b02 <pos_libc_prf+0x184>
1c009490:	8497cae3          	blt	a5,s1,1c008ce4 <pos_libc_prf+0x366>
1c009494:	c602                	sw	zero,12(sp)
1c009496:	f4aff06f          	j	1c008be0 <pos_libc_prf+0x262>
1c00949a:	0c800793          	li	a5,200
1c00949e:	8497c3e3          	blt	a5,s1,1c008ce4 <pos_libc_prf+0x366>
1c0094a2:	4685                	li	a3,1
1c0094a4:	c636                	sw	a3,12(sp)
1c0094a6:	f3aff06f          	j	1c008be0 <pos_libc_prf+0x262>
1c0094aa:	409909b3          	sub	s3,s2,s1
1c0094ae:	00148613          	addi	a2,s1,1
1c0094b2:	85e6                	mv	a1,s9
1c0094b4:	013c8533          	add	a0,s9,s3
1c0094b8:	998ff0ef          	jal	ra,1c008650 <memmove>
1c0094bc:	46c2                	lw	a3,16(sp)
1c0094be:	02000793          	li	a5,32
1c0094c2:	32f68b63          	beq	a3,a5,1c0097f8 <pos_libc_prf+0xe7a>
1c0094c6:	4732                	lw	a4,12(sp)
1c0094c8:	84ca                	mv	s1,s2
1c0094ca:	99ba                	add	s3,s3,a4
1c0094cc:	ff375b63          	ble	s3,a4,1c008cc2 <pos_libc_prf+0x344>
1c0094d0:	46b2                	lw	a3,12(sp)
1c0094d2:	4595                	li	a1,5
1c0094d4:	00dc87b3          	add	a5,s9,a3
1c0094d8:	40f007b3          	neg	a5,a5
1c0094dc:	fa27b7b3          	p.bclr	a5,a5,29,2
1c0094e0:	00378613          	addi	a2,a5,3
1c0094e4:	fff98693          	addi	a3,s3,-1
1c0094e8:	04b67633          	p.maxu	a2,a2,a1
1c0094ec:	8e99                	sub	a3,a3,a4
1c0094ee:	40e985b3          	sub	a1,s3,a4
1c0094f2:	06c6e763          	bltu	a3,a2,1c009560 <pos_libc_prf+0xbe2>
1c0094f6:	863a                	mv	a2,a4
1c0094f8:	cf95                	beqz	a5,1c009534 <pos_libc_prf+0xbb6>
1c0094fa:	1990                	addi	a2,sp,240
1c0094fc:	00e606b3          	add	a3,a2,a4
1c009500:	4742                	lw	a4,16(sp)
1c009502:	f2e68a23          	sb	a4,-204(a3)
1c009506:	46b2                	lw	a3,12(sp)
1c009508:	00168613          	addi	a2,a3,1
1c00950c:	0217a463          	p.beqimm	a5,1,1c009534 <pos_libc_prf+0xbb6>
1c009510:	86ba                	mv	a3,a4
1c009512:	1998                	addi	a4,sp,240
1c009514:	963a                	add	a2,a2,a4
1c009516:	4732                	lw	a4,12(sp)
1c009518:	f2d60a23          	sb	a3,-204(a2)
1c00951c:	00270613          	addi	a2,a4,2
1c009520:	0037ba63          	p.bneimm	a5,3,1c009534 <pos_libc_prf+0xbb6>
1c009524:	8736                	mv	a4,a3
1c009526:	1994                	addi	a3,sp,240
1c009528:	9636                	add	a2,a2,a3
1c00952a:	46b2                	lw	a3,12(sp)
1c00952c:	f2e60a23          	sb	a4,-204(a2)
1c009530:	00368613          	addi	a2,a3,3
1c009534:	4732                	lw	a4,12(sp)
1c009536:	8d9d                	sub	a1,a1,a5
1c009538:	0025d693          	srli	a3,a1,0x2
1c00953c:	97ba                	add	a5,a5,a4
1c00953e:	4742                	lw	a4,16(sp)
1c009540:	97e6                	add	a5,a5,s9
1c009542:	00e05557          	pv.add.sc.b	a0,zero,a4
1c009546:	34068663          	beqz	a3,1c009892 <pos_libc_prf+0xf14>
1c00954a:	0046c0fb          	lp.setup	x1,a3,1c009552 <pos_libc_prf+0xbd4>
1c00954e:	00a7a22b          	p.sw	a0,4(a5!)
1c009552:	0001                	nop
1c009554:	c205b7b3          	p.bclr	a5,a1,1,0
1c009558:	963e                	add	a2,a2,a5
1c00955a:	c632                	sw	a2,12(sp)
1c00955c:	f6b78263          	beq	a5,a1,1c008cc0 <pos_libc_prf+0x342>
1c009560:	46b2                	lw	a3,12(sp)
1c009562:	4742                	lw	a4,16(sp)
1c009564:	198c                	addi	a1,sp,240
1c009566:	00d587b3          	add	a5,a1,a3
1c00956a:	f2e78a23          	sb	a4,-204(a5)
1c00956e:	00168793          	addi	a5,a3,1
1c009572:	f537d763          	ble	s3,a5,1c008cc0 <pos_libc_prf+0x342>
1c009576:	97ae                	add	a5,a5,a1
1c009578:	f2e78a23          	sb	a4,-204(a5)
1c00957c:	00268793          	addi	a5,a3,2
1c009580:	f537d063          	ble	s3,a5,1c008cc0 <pos_libc_prf+0x342>
1c009584:	97ae                	add	a5,a5,a1
1c009586:	f2e78a23          	sb	a4,-204(a5)
1c00958a:	00368793          	addi	a5,a3,3
1c00958e:	f337d963          	ble	s3,a5,1c008cc0 <pos_libc_prf+0x342>
1c009592:	97ae                	add	a5,a5,a1
1c009594:	f2e78a23          	sb	a4,-204(a5)
1c009598:	00468793          	addi	a5,a3,4
1c00959c:	f337d263          	ble	s3,a5,1c008cc0 <pos_libc_prf+0x342>
1c0095a0:	97ae                	add	a5,a5,a1
1c0095a2:	f2e78a23          	sb	a4,-204(a5)
1c0095a6:	00568a93          	addi	s5,a3,5
1c0095aa:	f13adb63          	ble	s3,s5,1c008cc0 <pos_libc_prf+0x342>
1c0095ae:	9aae                	add	s5,s5,a1
1c0095b0:	f2ea8a23          	sb	a4,-204(s5)
1c0095b4:	84ca                	mv	s1,s2
1c0095b6:	f0cff06f          	j	1c008cc2 <pos_libc_prf+0x344>
1c0095ba:	4301                	li	t1,0
1c0095bc:	8666                	mv	a2,s9
1c0095be:	da0ff06f          	j	1c008b5e <pos_libc_prf+0x1e0>
1c0095c2:	02414783          	lbu	a5,36(sp)
1c0095c6:	1054                	addi	a3,sp,36
1c0095c8:	4665                	li	a2,25
1c0095ca:	de078b63          	beqz	a5,1c008bc0 <pos_libc_prf+0x242>
1c0095ce:	fe078593          	addi	a1,a5,-32
1c0095d2:	f9f78793          	addi	a5,a5,-97
1c0095d6:	0ff7f793          	andi	a5,a5,255
1c0095da:	00f66963          	bltu	a2,a5,1c0095ec <pos_libc_prf+0xc6e>
1c0095de:	00b680ab          	p.sb	a1,1(a3!)
1c0095e2:	0006c783          	lbu	a5,0(a3)
1c0095e6:	f7e5                	bnez	a5,1c0095ce <pos_libc_prf+0xc50>
1c0095e8:	dd8ff06f          	j	1c008bc0 <pos_libc_prf+0x242>
1c0095ec:	0685                	addi	a3,a3,1
1c0095ee:	0006c783          	lbu	a5,0(a3)
1c0095f2:	fff1                	bnez	a5,1c0095ce <pos_libc_prf+0xc50>
1c0095f4:	dccff06f          	j	1c008bc0 <pos_libc_prf+0x242>
1c0095f8:	ee97c663          	blt	a5,s1,1c008ce4 <pos_libc_prf+0x366>
1c0095fc:	8c46                	mv	s8,a7
1c0095fe:	de2ff06f          	j	1c008be0 <pos_libc_prf+0x262>
1c009602:	020102a3          	sb	zero,37(sp)
1c009606:	8c42                	mv	s8,a6
1c009608:	44b2                	lw	s1,12(sp)
1c00960a:	d1fa2363          	p.beqimm	s4,-1,1c008b10 <pos_libc_prf+0x192>
1c00960e:	02000693          	li	a3,32
1c009612:	c836                	sw	a3,16(sp)
1c009614:	cfcff06f          	j	1c008b10 <pos_libc_prf+0x192>
1c009618:	8566                	mv	a0,s9
1c00961a:	86e6                	mv	a3,s9
1c00961c:	fb6ff06f          	j	1c008dd2 <pos_libc_prf+0x454>
1c009620:	4732                	lw	a4,12(sp)
1c009622:	4e01                	li	t3,0
1c009624:	e319                	bnez	a4,1c00962a <pos_libc_prf+0xcac>
1c009626:	01403e33          	snez	t3,s4
1c00962a:	5675                	li	a2,-3
1c00962c:	001a0693          	addi	a3,s4,1
1c009630:	00c84463          	blt	a6,a2,1c009638 <pos_libc_prf+0xcba>
1c009634:	1706d063          	ble	a6,a3,1c009794 <pos_libc_prf+0xe16>
1c009638:	47c1                	li	a5,16
1c00963a:	04f6cf33          	p.min	t5,a3,a5
1c00963e:	06700693          	li	a3,103
1c009642:	1f7d                	addi	t5,t5,-1
1c009644:	1ed48a63          	beq	s1,a3,1c009838 <pos_libc_prf+0xeba>
1c009648:	04500493          	li	s1,69
1c00964c:	b2d9                	j	1c009012 <pos_libc_prf+0x694>
1c00964e:	02b00793          	li	a5,43
1c009652:	02f10223          	sb	a5,36(sp)
1c009656:	02510793          	addi	a5,sp,37
1c00965a:	bb21                	j	1c009372 <pos_libc_prf+0x9f4>
1c00965c:	8666                	mv	a2,s9
1c00965e:	1a084063          	bltz	a6,1c0097fe <pos_libc_prf+0xe80>
1c009662:	8ecd                	or	a3,a3,a1
1c009664:	fbf48793          	addi	a5,s1,-65
1c009668:	00360713          	addi	a4,a2,3
1c00966c:	14069b63          	bnez	a3,1c0097c2 <pos_libc_prf+0xe44>
1c009670:	46e5                	li	a3,25
1c009672:	1af6e563          	bltu	a3,a5,1c00981c <pos_libc_prf+0xe9e>
1c009676:	6795                	lui	a5,0x5
1c009678:	e4978793          	addi	a5,a5,-439 # 4e49 <__cluster_text_size+0x4e49>
1c00967c:	00f61023          	sh	a5,0(a2)
1c009680:	04600793          	li	a5,70
1c009684:	00f60123          	sb	a5,2(a2)
1c009688:	000601a3          	sb	zero,3(a2)
1c00968c:	419704b3          	sub	s1,a4,s9
1c009690:	bea9                	j	1c0091ea <pos_libc_prf+0x86c>
1c009692:	46d2                	lw	a3,20(sp)
1c009694:	14068463          	beqz	a3,1c0097dc <pos_libc_prf+0xe5e>
1c009698:	02b00693          	li	a3,43
1c00969c:	02d10223          	sb	a3,36(sp)
1c0096a0:	02510893          	addi	a7,sp,37
1c0096a4:	4801                	li	a6,0
1c0096a6:	4501                	li	a0,0
1c0096a8:	4681                	li	a3,0
1c0096aa:	4301                	li	t1,0
1c0096ac:	ba09                	j	1c008fbe <pos_libc_prf+0x640>
1c0096ae:	02d00793          	li	a5,45
1c0096b2:	02f10223          	sb	a5,36(sp)
1c0096b6:	800007b7          	lui	a5,0x80000
1c0096ba:	1af50963          	beq	a0,a5,1c00986c <pos_libc_prf+0xeee>
1c0096be:	40a006b3          	neg	a3,a0
1c0096c2:	02510793          	addi	a5,sp,37
1c0096c6:	b175                	j	1c009372 <pos_libc_prf+0x9f4>
1c0096c8:	4a19                	li	s4,6
1c0096ca:	92d495e3          	bne	s1,a3,1c008ff4 <pos_libc_prf+0x676>
1c0096ce:	46b2                	lw	a3,12(sp)
1c0096d0:	57f5                	li	a5,-3
1c0096d2:	0016ce13          	xori	t3,a3,1
1c0096d6:	14f85d63          	ble	a5,a6,1c009830 <pos_libc_prf+0xeb2>
1c0096da:	06500493          	li	s1,101
1c0096de:	4f19                	li	t5,6
1c0096e0:	ba0d                	j	1c009012 <pos_libc_prf+0x694>
1c0096e2:	e097c163          	blt	a5,s1,1c008ce4 <pos_libc_prf+0x366>
1c0096e6:	8c42                	mv	s8,a6
1c0096e8:	c602                	sw	zero,12(sp)
1c0096ea:	cf6ff06f          	j	1c008be0 <pos_libc_prf+0x262>
1c0096ee:	aa0a0be3          	beqz	s4,1c0091a4 <pos_libc_prf+0x826>
1c0096f2:	02e00593          	li	a1,46
1c0096f6:	00288613          	addi	a2,a7,2
1c0096fa:	00b880a3          	sb	a1,1(a7)
1c0096fe:	bc91                	j	1c009152 <pos_libc_prf+0x7d4>
1c009700:	17005b63          	blez	a6,1c009876 <pos_libc_prf+0xef8>
1c009704:	9846                	add	a6,a6,a7
1c009706:	4ec1                	li	t4,16
1c009708:	03000f13          	li	t5,48
1c00970c:	00269793          	slli	a5,a3,0x2
1c009710:	01e6d593          	srli	a1,a3,0x1e
1c009714:	00251713          	slli	a4,a0,0x2
1c009718:	00d78633          	add	a2,a5,a3
1c00971c:	8f4d                	or	a4,a4,a1
1c00971e:	972a                	add	a4,a4,a0
1c009720:	00f637b3          	sltu	a5,a2,a5
1c009724:	97ba                	add	a5,a5,a4
1c009726:	0786                	slli	a5,a5,0x1
1c009728:	01f65713          	srli	a4,a2,0x1f
1c00972c:	8fd9                	or	a5,a5,a4
1c00972e:	01c7d713          	srli	a4,a5,0x1c
1c009732:	03070713          	addi	a4,a4,48
1c009736:	05d05963          	blez	t4,1c009788 <pos_libc_prf+0xe0a>
1c00973a:	00e880ab          	p.sb	a4,1(a7!)
1c00973e:	10000737          	lui	a4,0x10000
1c009742:	177d                	addi	a4,a4,-1
1c009744:	1efd                	addi	t4,t4,-1
1c009746:	00161693          	slli	a3,a2,0x1
1c00974a:	00e7f533          	and	a0,a5,a4
1c00974e:	fb181fe3          	bne	a6,a7,1c00970c <pos_libc_prf+0xd8e>
1c009752:	8642                	mv	a2,a6
1c009754:	4801                	li	a6,0
1c009756:	47b2                	lw	a5,12(sp)
1c009758:	e399                	bnez	a5,1c00975e <pos_libc_prf+0xde0>
1c00975a:	b00a04e3          	beqz	s4,1c009262 <pos_libc_prf+0x8e4>
1c00975e:	00160f93          	addi	t6,a2,1
1c009762:	001a0593          	addi	a1,s4,1
1c009766:	02e00893          	li	a7,46
1c00976a:	01160023          	sb	a7,0(a2)
1c00976e:	837e                	mv	t1,t6
1c009770:	962e                	add	a2,a2,a1
1c009772:	03000593          	li	a1,48
1c009776:	aec304e3          	beq	t1,a2,1c00925e <pos_libc_prf+0x8e0>
1c00977a:	0305                	addi	t1,t1,1
1c00977c:	a8080be3          	beqz	a6,1c009212 <pos_libc_prf+0x894>
1c009780:	feb30fa3          	sb	a1,-1(t1)
1c009784:	0805                	addi	a6,a6,1
1c009786:	bfc5                	j	1c009776 <pos_libc_prf+0xdf8>
1c009788:	01e880ab          	p.sb	t5,1(a7!)
1c00978c:	f91810e3          	bne	a6,a7,1c00970c <pos_libc_prf+0xd8e>
1c009790:	b7c9                	j	1c009752 <pos_libc_prf+0xdd4>
1c009792:	4e01                	li	t3,0
1c009794:	014807b3          	add	a5,a6,s4
1c009798:	0e07c563          	bltz	a5,1c009882 <pos_libc_prf+0xf04>
1c00979c:	4641                	li	a2,16
1c00979e:	04c7cf33          	p.min	t5,a5,a2
1c0097a2:	1f7d                	addi	t5,t5,-1
1c0097a4:	06600493          	li	s1,102
1c0097a8:	860795e3          	bnez	a5,1c009012 <pos_libc_prf+0x694>
1c0097ac:	4581                	li	a1,0
1c0097ae:	080006b7          	lui	a3,0x8000
1c0097b2:	b0e9                	j	1c00907c <pos_libc_prf+0x6fe>
1c0097b4:	02d00793          	li	a5,45
1c0097b8:	41000833          	neg	a6,a6
1c0097bc:	00f600a3          	sb	a5,1(a2)
1c0097c0:	b419                	j	1c0091c6 <pos_libc_prf+0x848>
1c0097c2:	46e5                	li	a3,25
1c0097c4:	06f6ee63          	bltu	a3,a5,1c009840 <pos_libc_prf+0xec2>
1c0097c8:	6791                	lui	a5,0x4
1c0097ca:	14e78793          	addi	a5,a5,334 # 414e <__cluster_text_size+0x414e>
1c0097ce:	00f61023          	sh	a5,0(a2)
1c0097d2:	04e00793          	li	a5,78
1c0097d6:	00f60123          	sb	a5,2(a2)
1c0097da:	b57d                	j	1c009688 <pos_libc_prf+0xd0a>
1c0097dc:	47e2                	lw	a5,24(sp)
1c0097de:	cfc5                	beqz	a5,1c009896 <pos_libc_prf+0xf18>
1c0097e0:	02000693          	li	a3,32
1c0097e4:	02d10223          	sb	a3,36(sp)
1c0097e8:	02510893          	addi	a7,sp,37
1c0097ec:	4801                	li	a6,0
1c0097ee:	4501                	li	a0,0
1c0097f0:	4681                	li	a3,0
1c0097f2:	4301                	li	t1,0
1c0097f4:	fcaff06f          	j	1c008fbe <pos_libc_prf+0x640>
1c0097f8:	c602                	sw	zero,12(sp)
1c0097fa:	4732                	lw	a4,12(sp)
1c0097fc:	b9d1                	j	1c0094d0 <pos_libc_prf+0xb52>
1c0097fe:	02d00613          	li	a2,45
1c009802:	02c10223          	sb	a2,36(sp)
1c009806:	02510613          	addi	a2,sp,37
1c00980a:	bda1                	j	1c009662 <pos_libc_prf+0xce4>
1c00980c:	02d00613          	li	a2,45
1c009810:	02c10223          	sb	a2,36(sp)
1c009814:	02510893          	addi	a7,sp,37
1c009818:	ec6ff06f          	j	1c008ede <pos_libc_prf+0x560>
1c00981c:	679d                	lui	a5,0x7
1c00981e:	e6978793          	addi	a5,a5,-407 # 6e69 <__cluster_text_size+0x6e69>
1c009822:	00f61023          	sh	a5,0(a2)
1c009826:	06600793          	li	a5,102
1c00982a:	00f60123          	sb	a5,2(a2)
1c00982e:	bda9                	j	1c009688 <pos_libc_prf+0xd0a>
1c009830:	479d                	li	a5,7
1c009832:	f707d1e3          	ble	a6,a5,1c009794 <pos_libc_prf+0xe16>
1c009836:	4f19                	li	t5,6
1c009838:	06500493          	li	s1,101
1c00983c:	fd6ff06f          	j	1c009012 <pos_libc_prf+0x694>
1c009840:	6799                	lui	a5,0x6
1c009842:	16e78793          	addi	a5,a5,366 # 616e <__cluster_text_size+0x616e>
1c009846:	00f61023          	sh	a5,0(a2)
1c00984a:	06e00793          	li	a5,110
1c00984e:	00f60123          	sb	a5,2(a2)
1c009852:	bd1d                	j	1c009688 <pos_libc_prf+0xd0a>
1c009854:	47e2                	lw	a5,24(sp)
1c009856:	88e6                	mv	a7,s9
1c009858:	e8078363          	beqz	a5,1c008ede <pos_libc_prf+0x560>
1c00985c:	02000613          	li	a2,32
1c009860:	02c10223          	sb	a2,36(sp)
1c009864:	02510893          	addi	a7,sp,37
1c009868:	e76ff06f          	j	1c008ede <pos_libc_prf+0x560>
1c00986c:	800006b7          	lui	a3,0x80000
1c009870:	02510793          	addi	a5,sp,37
1c009874:	bcfd                	j	1c009372 <pos_libc_prf+0x9f4>
1c009876:	03000593          	li	a1,48
1c00987a:	00b88023          	sb	a1,0(a7)
1c00987e:	4ec1                	li	t4,16
1c009880:	bdd9                	j	1c009756 <pos_libc_prf+0xdd8>
1c009882:	06600493          	li	s1,102
1c009886:	b71d                	j	1c0097ac <pos_libc_prf+0xe2e>
1c009888:	4685                	li	a3,1
1c00988a:	bc4ff06f          	j	1c008c4e <pos_libc_prf+0x2d0>
1c00988e:	4605                	li	a2,1
1c009890:	bcb9                	j	1c0092ee <pos_libc_prf+0x970>
1c009892:	4685                	li	a3,1
1c009894:	b95d                	j	1c00954a <pos_libc_prf+0xbcc>
1c009896:	88e6                	mv	a7,s9
1c009898:	bf91                	j	1c0097ec <pos_libc_prf+0xe6e>

1c00989a <pos_init_start>:
1c00989a:	1141                	addi	sp,sp,-16
1c00989c:	c422                	sw	s0,8(sp)
1c00989e:	1c000437          	lui	s0,0x1c000
1c0098a2:	c606                	sw	ra,12(sp)
1c0098a4:	00840413          	addi	s0,s0,8 # 1c000008 <ctor_list>
1c0098a8:	c3ffe0ef          	jal	ra,1c0084e6 <pos_soc_init>
1c0098ac:	2279                	jal	1c009a3a <pos_irq_init>
1c0098ae:	2ac1                	jal	1c009a7e <pos_soc_event_init>
1c0098b0:	20e5                	jal	1c009998 <pos_allocs_init>
1c0098b2:	405c                	lw	a5,4(s0)
1c0098b4:	c791                	beqz	a5,1c0098c0 <pos_init_start+0x26>
1c0098b6:	0421                	addi	s0,s0,8
1c0098b8:	9782                	jalr	a5
1c0098ba:	0044278b          	p.lw	a5,4(s0!)
1c0098be:	ffed                	bnez	a5,1c0098b8 <pos_init_start+0x1e>
1c0098c0:	888ff0ef          	jal	ra,1c008948 <pos_io_start>
1c0098c4:	300467f3          	csrrsi	a5,mstatus,8
1c0098c8:	f1402573          	csrr	a0,mhartid
1c0098cc:	8515                	srai	a0,a0,0x5
1c0098ce:	f2653533          	p.bclr	a0,a0,25,6
1c0098d2:	47fd                	li	a5,31
1c0098d4:	00f50a63          	beq	a0,a5,1c0098e8 <pos_init_start+0x4e>
1c0098d8:	4422                	lw	s0,8(sp)
1c0098da:	40b2                	lw	ra,12(sp)
1c0098dc:	1c0085b7          	lui	a1,0x1c008
1c0098e0:	42858593          	addi	a1,a1,1064 # 1c008428 <main>
1c0098e4:	0141                	addi	sp,sp,16
1c0098e6:	a405                	j	1c009b06 <cluster_start>
1c0098e8:	40b2                	lw	ra,12(sp)
1c0098ea:	4422                	lw	s0,8(sp)
1c0098ec:	0141                	addi	sp,sp,16
1c0098ee:	8082                	ret

1c0098f0 <pos_init_stop>:
1c0098f0:	1141                	addi	sp,sp,-16
1c0098f2:	c422                	sw	s0,8(sp)
1c0098f4:	1c000437          	lui	s0,0x1c000
1c0098f8:	c606                	sw	ra,12(sp)
1c0098fa:	01440413          	addi	s0,s0,20 # 1c000014 <dtor_list>
1c0098fe:	84eff0ef          	jal	ra,1c00894c <pos_io_stop>
1c009902:	405c                	lw	a5,4(s0)
1c009904:	c791                	beqz	a5,1c009910 <pos_init_stop+0x20>
1c009906:	0421                	addi	s0,s0,8
1c009908:	9782                	jalr	a5
1c00990a:	0044278b          	p.lw	a5,4(s0!)
1c00990e:	ffed                	bnez	a5,1c009908 <pos_init_stop+0x18>
1c009910:	40b2                	lw	ra,12(sp)
1c009912:	4422                	lw	s0,8(sp)
1c009914:	0141                	addi	sp,sp,16
1c009916:	8082                	ret

1c009918 <pos_alloc_init>:
1c009918:	00758793          	addi	a5,a1,7
1c00991c:	c407b7b3          	p.bclr	a5,a5,2,0
1c009920:	40b785b3          	sub	a1,a5,a1
1c009924:	c11c                	sw	a5,0(a0)
1c009926:	8e0d                	sub	a2,a2,a1
1c009928:	00c05763          	blez	a2,1c009936 <pos_alloc_init+0x1e>
1c00992c:	c4063633          	p.bclr	a2,a2,2,0
1c009930:	c390                	sw	a2,0(a5)
1c009932:	0007a223          	sw	zero,4(a5)
1c009936:	8082                	ret

1c009938 <pos_alloc>:
1c009938:	4110                	lw	a2,0(a0)
1c00993a:	059d                	addi	a1,a1,7
1c00993c:	c405b5b3          	p.bclr	a1,a1,2,0
1c009940:	ca31                	beqz	a2,1c009994 <pos_alloc+0x5c>
1c009942:	4218                	lw	a4,0(a2)
1c009944:	425c                	lw	a5,4(a2)
1c009946:	02b75963          	ble	a1,a4,1c009978 <pos_alloc+0x40>
1c00994a:	cb81                	beqz	a5,1c00995a <pos_alloc+0x22>
1c00994c:	4398                	lw	a4,0(a5)
1c00994e:	43d4                	lw	a3,4(a5)
1c009950:	00b75763          	ble	a1,a4,1c00995e <pos_alloc+0x26>
1c009954:	863e                	mv	a2,a5
1c009956:	87b6                	mv	a5,a3
1c009958:	fbf5                	bnez	a5,1c00994c <pos_alloc+0x14>
1c00995a:	853e                	mv	a0,a5
1c00995c:	8082                	ret
1c00995e:	00b70a63          	beq	a4,a1,1c009972 <pos_alloc+0x3a>
1c009962:	00b78533          	add	a0,a5,a1
1c009966:	8f0d                	sub	a4,a4,a1
1c009968:	c118                	sw	a4,0(a0)
1c00996a:	c154                	sw	a3,4(a0)
1c00996c:	c248                	sw	a0,4(a2)
1c00996e:	853e                	mv	a0,a5
1c009970:	8082                	ret
1c009972:	c254                	sw	a3,4(a2)
1c009974:	853e                	mv	a0,a5
1c009976:	8082                	ret
1c009978:	00e58b63          	beq	a1,a4,1c00998e <pos_alloc+0x56>
1c00997c:	00b606b3          	add	a3,a2,a1
1c009980:	8f0d                	sub	a4,a4,a1
1c009982:	c2dc                	sw	a5,4(a3)
1c009984:	c298                	sw	a4,0(a3)
1c009986:	87b2                	mv	a5,a2
1c009988:	c114                	sw	a3,0(a0)
1c00998a:	853e                	mv	a0,a5
1c00998c:	8082                	ret
1c00998e:	c11c                	sw	a5,0(a0)
1c009990:	87b2                	mv	a5,a2
1c009992:	b7e1                	j	1c00995a <pos_alloc+0x22>
1c009994:	4781                	li	a5,0
1c009996:	b7d1                	j	1c00995a <pos_alloc+0x22>

1c009998 <pos_allocs_init>:
1c009998:	1141                	addi	sp,sp,-16
1c00999a:	1c0085b7          	lui	a1,0x1c008
1c00999e:	c606                	sw	ra,12(sp)
1c0099a0:	fa458793          	addi	a5,a1,-92 # 1c007fa4 <__l2_priv0_end>
1c0099a4:	1c008637          	lui	a2,0x1c008
1c0099a8:	04c7cc63          	blt	a5,a2,1c009a00 <pos_allocs_init+0x68>
1c0099ac:	4581                	li	a1,0
1c0099ae:	4601                	li	a2,0
1c0099b0:	1c008537          	lui	a0,0x1c008
1c0099b4:	f9450513          	addi	a0,a0,-108 # 1c007f94 <pos_alloc_l2>
1c0099b8:	3785                	jal	1c009918 <pos_alloc_init>
1c0099ba:	1c00a5b7          	lui	a1,0x1c00a
1c0099be:	bdc58793          	addi	a5,a1,-1060 # 1c009bdc <__l2_priv1_end>
1c0099c2:	1c010637          	lui	a2,0x1c010
1c0099c6:	02c7c963          	blt	a5,a2,1c0099f8 <pos_allocs_init+0x60>
1c0099ca:	4581                	li	a1,0
1c0099cc:	4601                	li	a2,0
1c0099ce:	1c008537          	lui	a0,0x1c008
1c0099d2:	f9850513          	addi	a0,a0,-104 # 1c007f98 <pos_alloc_l2+0x4>
1c0099d6:	3789                	jal	1c009918 <pos_alloc_init>
1c0099d8:	100055b7          	lui	a1,0x10005
1c0099dc:	40b2                	lw	ra,12(sp)
1c0099de:	f4058793          	addi	a5,a1,-192 # 10004f40 <__l2_shared_end>
1c0099e2:	1c080637          	lui	a2,0x1c080
1c0099e6:	1c008537          	lui	a0,0x1c008
1c0099ea:	8e1d                	sub	a2,a2,a5
1c0099ec:	f4058593          	addi	a1,a1,-192
1c0099f0:	f9c50513          	addi	a0,a0,-100 # 1c007f9c <pos_alloc_l2+0x8>
1c0099f4:	0141                	addi	sp,sp,16
1c0099f6:	b70d                	j	1c009918 <pos_alloc_init>
1c0099f8:	8e1d                	sub	a2,a2,a5
1c0099fa:	bdc58593          	addi	a1,a1,-1060
1c0099fe:	bfc1                	j	1c0099ce <pos_allocs_init+0x36>
1c009a00:	8e1d                	sub	a2,a2,a5
1c009a02:	fa458593          	addi	a1,a1,-92
1c009a06:	b76d                	j	1c0099b0 <pos_allocs_init+0x18>

1c009a08 <alloc_init_l1>:
1c009a08:	100057b7          	lui	a5,0x10005
1c009a0c:	01651593          	slli	a1,a0,0x16
1c009a10:	f4078793          	addi	a5,a5,-192 # 10004f40 <__l2_shared_end>
1c009a14:	95be                	add	a1,a1,a5
1c009a16:	1c0087b7          	lui	a5,0x1c008
1c009a1a:	050a                	slli	a0,a0,0x2
1c009a1c:	662d                	lui	a2,0xb
1c009a1e:	f9078793          	addi	a5,a5,-112 # 1c007f90 <pos_alloc_l1>
1c009a22:	0c060613          	addi	a2,a2,192 # b0c0 <__l1_heap_size>
1c009a26:	953e                	add	a0,a0,a5
1c009a28:	bdc5                	j	1c009918 <pos_alloc_init>

1c009a2a <pi_l1_malloc>:
1c009a2a:	1c0087b7          	lui	a5,0x1c008
1c009a2e:	050a                	slli	a0,a0,0x2
1c009a30:	f9078793          	addi	a5,a5,-112 # 1c007f90 <pos_alloc_l1>
1c009a34:	953e                	add	a0,a0,a5
1c009a36:	b709                	j	1c009938 <pos_alloc>

1c009a38 <__rt_handle_illegal_instr>:
1c009a38:	8082                	ret

1c009a3a <pos_irq_init>:
1c009a3a:	f14027f3          	csrr	a5,mhartid
1c009a3e:	477d                	li	a4,31
1c009a40:	ca5797b3          	p.extractu	a5,a5,5,5
1c009a44:	00e78f63          	beq	a5,a4,1c009a62 <pos_irq_init+0x28>
1c009a48:	002047b7          	lui	a5,0x204
1c009a4c:	577d                	li	a4,-1
1c009a4e:	cb98                	sw	a4,16(a5)
1c009a50:	1c0087b7          	lui	a5,0x1c008
1c009a54:	00078793          	mv	a5,a5
1c009a58:	c007c7b3          	p.bset	a5,a5,0,0
1c009a5c:	30579073          	csrw	mtvec,a5
1c009a60:	8082                	ret
1c009a62:	1a10a7b7          	lui	a5,0x1a10a
1c009a66:	577d                	li	a4,-1
1c009a68:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa1048c8>
1c009a6c:	1c0087b7          	lui	a5,0x1c008
1c009a70:	00078793          	mv	a5,a5
1c009a74:	c007c7b3          	p.bset	a5,a5,0,0
1c009a78:	30579073          	csrw	mtvec,a5
1c009a7c:	8082                	ret

1c009a7e <pos_soc_event_init>:
1c009a7e:	1a1067b7          	lui	a5,0x1a106
1c009a82:	577d                	li	a4,-1
1c009a84:	00478693          	addi	a3,a5,4 # 1a106004 <__l2_shared_end+0xa1010c4>
1c009a88:	c298                	sw	a4,0(a3)
1c009a8a:	00878693          	addi	a3,a5,8
1c009a8e:	c298                	sw	a4,0(a3)
1c009a90:	00c78693          	addi	a3,a5,12
1c009a94:	c298                	sw	a4,0(a3)
1c009a96:	01078693          	addi	a3,a5,16
1c009a9a:	c298                	sw	a4,0(a3)
1c009a9c:	01478693          	addi	a3,a5,20
1c009aa0:	c298                	sw	a4,0(a3)
1c009aa2:	01878693          	addi	a3,a5,24
1c009aa6:	c298                	sw	a4,0(a3)
1c009aa8:	01c78693          	addi	a3,a5,28
1c009aac:	c298                	sw	a4,0(a3)
1c009aae:	02078793          	addi	a5,a5,32
1c009ab2:	c398                	sw	a4,0(a5)
1c009ab4:	8082                	ret

1c009ab6 <cluster_entry_stub>:
1c009ab6:	1141                	addi	sp,sp,-16
1c009ab8:	c606                	sw	ra,12(sp)
1c009aba:	002047b7          	lui	a5,0x204
1c009abe:	00070737          	lui	a4,0x70
1c009ac2:	c798                	sw	a4,8(a5)
1c009ac4:	0ff00713          	li	a4,255
1c009ac8:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f9140>
1c009acc:	00e7a023          	sw	a4,0(a5)
1c009ad0:	00e7a623          	sw	a4,12(a5)
1c009ad4:	1c0087b7          	lui	a5,0x1c008
1c009ad8:	fa07a783          	lw	a5,-96(a5) # 1c007fa0 <cluster_entry>
1c009adc:	9782                	jalr	a5
1c009ade:	f14027f3          	csrr	a5,mhartid
1c009ae2:	f457b7b3          	p.bclr	a5,a5,26,5
1c009ae6:	eb89                	bnez	a5,1c009af8 <cluster_entry_stub+0x42>
1c009ae8:	1c008737          	lui	a4,0x1c008
1c009aec:	1c0087b7          	lui	a5,0x1c008
1c009af0:	f8a72423          	sw	a0,-120(a4) # 1c007f88 <_bss_start>
1c009af4:	f807a623          	sw	zero,-116(a5) # 1c007f8c <cluster_running>
1c009af8:	002047b7          	lui	a5,0x204
1c009afc:	577d                	li	a4,-1
1c009afe:	c3d8                	sw	a4,4(a5)
1c009b00:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f8f78>
1c009b04:	a001                	j	1c009b04 <cluster_entry_stub+0x4e>

1c009b06 <cluster_start>:
1c009b06:	1141                	addi	sp,sp,-16
1c009b08:	1c0087b7          	lui	a5,0x1c008
1c009b0c:	c226                	sw	s1,4(sp)
1c009b0e:	84aa                	mv	s1,a0
1c009b10:	4509                	li	a0,2
1c009b12:	fab7a023          	sw	a1,-96(a5) # 1c007fa0 <cluster_entry>
1c009b16:	c606                	sw	ra,12(sp)
1c009b18:	c422                	sw	s0,8(sp)
1c009b1a:	923fe0ef          	jal	ra,1c00843c <pos_fll_init>
1c009b1e:	8526                	mv	a0,s1
1c009b20:	35e5                	jal	1c009a08 <alloc_init_l1>
1c009b22:	04048413          	addi	s0,s1,64
1c009b26:	00201737          	lui	a4,0x201
1c009b2a:	40070713          	addi	a4,a4,1024 # 201400 <__l1_heap_size+0x1f6340>
1c009b2e:	045a                	slli	s0,s0,0x16
1c009b30:	56fd                	li	a3,-1
1c009b32:	f14027f3          	csrr	a5,mhartid
1c009b36:	00d46723          	p.sw	a3,a4(s0)
1c009b3a:	ca5797b3          	p.extractu	a5,a5,5,5
1c009b3e:	477d                	li	a4,31
1c009b40:	00e78f63          	beq	a5,a4,1c009b5e <cluster_start+0x58>
1c009b44:	002047b7          	lui	a5,0x204
1c009b48:	00070737          	lui	a4,0x70
1c009b4c:	c798                	sw	a4,8(a5)
1c009b4e:	0ff00713          	li	a4,255
1c009b52:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f9140>
1c009b56:	00e7a023          	sw	a4,0(a5)
1c009b5a:	00e7a623          	sw	a4,12(a5)
1c009b5e:	8526                	mv	a0,s1
1c009b60:	3565                	jal	1c009a08 <alloc_init_l1>
1c009b62:	6591                	lui	a1,0x4
1c009b64:	8526                	mv	a0,s1
1c009b66:	35d1                	jal	1c009a2a <pi_l1_malloc>
1c009b68:	100057b7          	lui	a5,0x10005
1c009b6c:	f2a7ae23          	sw	a0,-196(a5) # 10004f3c <cluster_stacks>
1c009b70:	c12d                	beqz	a0,1c009bd2 <cluster_start+0xcc>
1c009b72:	1c008737          	lui	a4,0x1c008
1c009b76:	4685                	li	a3,1
1c009b78:	f8d72623          	sw	a3,-116(a4) # 1c007f8c <cluster_running>
1c009b7c:	002007b7          	lui	a5,0x200
1c009b80:	1c008737          	lui	a4,0x1c008
1c009b84:	08070713          	addi	a4,a4,128 # 1c008080 <_start>
1c009b88:	04078693          	addi	a3,a5,64 # 200040 <__l1_heap_size+0x1f4f80>
1c009b8c:	00e466a3          	p.sw	a4,a3(s0)
1c009b90:	04478693          	addi	a3,a5,68
1c009b94:	00e466a3          	p.sw	a4,a3(s0)
1c009b98:	04878693          	addi	a3,a5,72
1c009b9c:	00e466a3          	p.sw	a4,a3(s0)
1c009ba0:	04c78693          	addi	a3,a5,76
1c009ba4:	00e466a3          	p.sw	a4,a3(s0)
1c009ba8:	05078693          	addi	a3,a5,80
1c009bac:	00e466a3          	p.sw	a4,a3(s0)
1c009bb0:	05478693          	addi	a3,a5,84
1c009bb4:	00e466a3          	p.sw	a4,a3(s0)
1c009bb8:	05878693          	addi	a3,a5,88
1c009bbc:	00e466a3          	p.sw	a4,a3(s0)
1c009bc0:	05c78693          	addi	a3,a5,92
1c009bc4:	00e466a3          	p.sw	a4,a3(s0)
1c009bc8:	07a1                	addi	a5,a5,8
1c009bca:	0ff00713          	li	a4,255
1c009bce:	00e467a3          	p.sw	a4,a5(s0)
1c009bd2:	40b2                	lw	ra,12(sp)
1c009bd4:	4422                	lw	s0,8(sp)
1c009bd6:	4492                	lw	s1,4(sp)
1c009bd8:	0141                	addi	sp,sp,16
1c009bda:	8082                	ret
