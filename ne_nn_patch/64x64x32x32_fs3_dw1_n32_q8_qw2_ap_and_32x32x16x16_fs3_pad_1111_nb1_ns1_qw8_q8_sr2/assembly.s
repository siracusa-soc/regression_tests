make[1]: Entering directory `/scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/64x64x32x32_fs3_dw1_n32_q8_qw2_ap_and_32x32x16x16_fs3_pad_1111_nb1_ns1_qw8_q8_sr2'
/usr/pack/pulpsdk-1.0-kgf/artifactory/pulp-sdk-release/pkg/pulp_riscv_gcc/1.0.16//bin/riscv32-unknown-elf-objdump -Mmarch=rv32imcxgap9 -d /scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/64x64x32x32_fs3_dw1_n32_q8_qw2_ap_and_32x32x16x16_fs3_pad_1111_nb1_ns1_qw8_q8_sr2/build/ne16_test/ne16_test

/scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/64x64x32x32_fs3_dw1_n32_q8_qw2_ap_and_32x32x16x16_fs3_pad_1111_nb1_ns1_qw8_q8_sr2/build/ne16_test/ne16_test:     file format elf32-littleriscv


Disassembly of section .vectors:

1c008000 <__irq_vector_base>:
1c008000:	1ad0106f          	j	1c0099ac <__rt_handle_illegal_instr>
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
1c008084:	1290106f          	j	1c0099ac <__rt_handle_illegal_instr>

1c008088 <pos_no_irq_handler>:
1c008088:	30200073          	mret

1c00808c <pos_semihosting_call>:
1c00808c:	00100073          	ebreak
1c008090:	00008067          	ret

1c008094 <pe_start>:
1c008094:	f401c117          	auipc	sp,0xf401c
1c008098:	3d410113          	addi	sp,sp,980 # 10024468 <cluster_stacks>
1c00809c:	00012103          	lw	sp,0(sp)
1c0080a0:	000011b7          	lui	gp,0x1
1c0080a4:	80018193          	addi	gp,gp,-2048 # 800 <__cluster_text_size+0x800>
1c0080a8:	00158593          	addi	a1,a1,1
1c0080ac:	02b180b3          	mul	ra,gp,a1
1c0080b0:	00110133          	add	sp,sp,ra
1c0080b4:	1770106f          	j	1c009a2a <cluster_entry_stub>

1c0080b8 <do_cl_boot>:
1c0080b8:	10200137          	lui	sp,0x10200
1c0080bc:	00100193          	li	gp,1
1c0080c0:	00000217          	auipc	tp,0x0
1c0080c4:	fc020213          	addi	tp,tp,-64 # 1c008080 <_start>
1c0080c8:	04412023          	sw	tp,64(sp) # 10200040 <__l2_shared_end+0x1dbbd4>
1c0080cc:	00312423          	sw	gp,8(sp)

1c0080d0 <loop>:
1c0080d0:	1a10a137          	lui	sp,0x1a10a
1c0080d4:	80010113          	addi	sp,sp,-2048 # 1a109800 <__l2_shared_end+0xa0e5394>
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
1c0080fc:	85828293          	addi	t0,t0,-1960 # 1c000950 <_edata>
1c008100:	ffff9317          	auipc	t1,0xffff9
1c008104:	86c30313          	addi	t1,t1,-1940 # 1c00096c <__l2_priv0_end>
1c008108:	0002a023          	sw	zero,0(t0)
1c00810c:	0291                	addi	t0,t0,4
1c00810e:	fe62ede3          	bltu	t0,t1,1c008108 <_stext+0x24>
1c008112:	ffff8117          	auipc	sp,0xffff8
1c008116:	77e10113          	addi	sp,sp,1918 # 1c000890 <stack>
1c00811a:	6f4010ef          	jal	ra,1c00980e <pos_init_start>
1c00811e:	00000513          	li	a0,0
1c008122:	00000593          	li	a1,0
1c008126:	00000397          	auipc	t2,0x0
1c00812a:	2d238393          	addi	t2,t2,722 # 1c0083f8 <main>
1c00812e:	000380e7          	jalr	t2
1c008132:	842a                	mv	s0,a0
1c008134:	730010ef          	jal	ra,1c009864 <pos_init_stop>
1c008138:	8522                	mv	a0,s0
1c00813a:	770000ef          	jal	ra,1c0088aa <exit>

1c00813e <run_test>:
1c00813e:	715d                	addi	sp,sp,-80
1c008140:	1c0107b7          	lui	a5,0x1c010
1c008144:	c686                	sw	ra,76(sp)
1c008146:	c4a2                	sw	s0,72(sp)
1c008148:	c2a6                	sw	s1,68(sp)
1c00814a:	c0ca                	sw	s2,64(sp)
1c00814c:	de4e                	sw	s3,60(sp)
1c00814e:	dc52                	sw	s4,56(sp)
1c008150:	da56                	sw	s5,52(sp)
1c008152:	d85a                	sw	s6,48(sp)
1c008154:	d65e                	sw	s7,44(sp)
1c008156:	d462                	sw	s8,40(sp)
1c008158:	00078793          	mv	a5,a5
1c00815c:	20800737          	lui	a4,0x20800
1c008160:	00c6d0fb          	lp.setupi	x1,12,1c00817a <run_test+0x3c>
1c008164:	0007a803          	lw	a6,0(a5) # 1c010000 <ne16_weights0>
1c008168:	43c8                	lw	a0,4(a5)
1c00816a:	478c                	lw	a1,8(a5)
1c00816c:	47d0                	lw	a2,12(a5)
1c00816e:	01072023          	sw	a6,0(a4) # 20800000 <ne16_outfeat0+0x47e9f40>
1c008172:	c348                	sw	a0,4(a4)
1c008174:	c70c                	sw	a1,8(a4)
1c008176:	c750                	sw	a2,12(a4)
1c008178:	07c1                	addi	a5,a5,16
1c00817a:	0741                	addi	a4,a4,16
1c00817c:	102007b7          	lui	a5,0x10200
1c008180:	07e1                	addi	a5,a5,24
1c008182:	4398                	lw	a4,0(a5)
1c008184:	c0b74733          	p.bset	a4,a4,0,11
1c008188:	c398                	sw	a4,0(a5)
1c00818a:	4398                	lw	a4,0(a5)
1c00818c:	c0874733          	p.bset	a4,a4,0,8
1c008190:	c398                	sw	a4,0(a5)
1c008192:	4398                	lw	a4,0(a5)
1c008194:	ce073733          	p.bclr	a4,a4,7,0
1c008198:	c398                	sw	a4,0(a5)
1c00819a:	4398                	lw	a4,0(a5)
1c00819c:	c0374733          	p.bset	a4,a4,0,3
1c0081a0:	c398                	sw	a4,0(a5)
1c0081a2:	102017b7          	lui	a5,0x10201
1c0081a6:	0007aa23          	sw	zero,20(a5) # 10201014 <__l2_shared_end+0x1dcba8>
1c0081aa:	ce02                	sw	zero,28(sp)
1c0081ac:	4772                	lw	a4,28(sp)
1c0081ae:	47a5                	li	a5,9
1c0081b0:	00e7c963          	blt	a5,a4,1c0081c2 <run_test+0x84>
1c0081b4:	4725                	li	a4,9
1c0081b6:	47f2                	lw	a5,28(sp)
1c0081b8:	0785                	addi	a5,a5,1
1c0081ba:	ce3e                	sw	a5,28(sp)
1c0081bc:	47f2                	lw	a5,28(sp)
1c0081be:	fef75ce3          	ble	a5,a4,1c0081b6 <run_test+0x78>
1c0081c2:	10201637          	lui	a2,0x10201
1c0081c6:	0611                	addi	a2,a2,4
1c0081c8:	421c                	lw	a5,0(a2)
1c0081ca:	0007dc63          	bgez	a5,1c0081e2 <run_test+0xa4>
1c0081ce:	6705                	lui	a4,0x1
1c0081d0:	002047b7          	lui	a5,0x204
1c0081d4:	c798                	sw	a4,8(a5)
1c0081d6:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1e84a8>
1c0081da:	c3d8                	sw	a4,4(a5)
1c0081dc:	4214                	lw	a3,0(a2)
1c0081de:	fe06cbe3          	bltz	a3,1c0081d4 <run_test+0x96>
1c0081e2:	102015b7          	lui	a1,0x10201
1c0081e6:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x1dcbb4>
1c0081ea:	004007b7          	lui	a5,0x400
1c0081ee:	00f5a023          	sw	a5,0(a1)
1c0081f2:	100128b7          	lui	a7,0x10012
1c0081f6:	36888893          	addi	a7,a7,872 # 10012368 <ne16_infeat0>
1c0081fa:	0115a223          	sw	a7,4(a1)
1c0081fe:	10002437          	lui	s0,0x10002
1c008202:	36840913          	addi	s2,s0,872 # 10002368 <ne16_streamin0>
1c008206:	0125a423          	sw	s2,8(a1)
1c00820a:	10000837          	lui	a6,0x10000
1c00820e:	00480813          	addi	a6,a6,4 # 10000004 <ne16_scale0>
1c008212:	0105a623          	sw	a6,12(a1)
1c008216:	10080793          	addi	a5,a6,256
1c00821a:	00f5a823          	sw	a5,16(a1)
1c00821e:	14080793          	addi	a5,a6,320
1c008222:	00f5aa23          	sw	a5,20(a1)
1c008226:	1c001537          	lui	a0,0x1c001
1c00822a:	89050793          	addi	a5,a0,-1904 # 1c000890 <stack>
1c00822e:	5571                	li	a0,-4
1c008230:	01878713          	addi	a4,a5,24 # 400018 <__l1_heap_size+0x3e4484>
1c008234:	8d1d                	sub	a0,a0,a5
1c008236:	012350fb          	lp.setupi	x1,18,1c008242 <run_test+0x104>
1c00823a:	0047268b          	p.lw	a3,4(a4!) # 1004 <__cluster_text_size+0x1004>
1c00823e:	00e50633          	add	a2,a0,a4
1c008242:	00d5e623          	p.sw	a3,a2(a1)
1c008246:	102017b7          	lui	a5,0x10201
1c00824a:	0007a023          	sw	zero,0(a5) # 10201000 <__l2_shared_end+0x1dcb94>
1c00824e:	1c012737          	lui	a4,0x1c012
1c008252:	208007b7          	lui	a5,0x20800
1c008256:	0c070713          	addi	a4,a4,192 # 1c0120c0 <ne16_weights1>
1c00825a:	0c078793          	addi	a5,a5,192 # 208000c0 <ne16_outfeat0+0x47ea000>
1c00825e:	4006d0fb          	lp.setupi	x1,1024,1c008278 <run_test+0x13a>
1c008262:	00072303          	lw	t1,0(a4)
1c008266:	4348                	lw	a0,4(a4)
1c008268:	470c                	lw	a1,8(a4)
1c00826a:	4750                	lw	a2,12(a4)
1c00826c:	0067a023          	sw	t1,0(a5)
1c008270:	c3c8                	sw	a0,4(a5)
1c008272:	c78c                	sw	a1,8(a5)
1c008274:	c7d0                	sw	a2,12(a5)
1c008276:	0741                	addi	a4,a4,16
1c008278:	07c1                	addi	a5,a5,16
1c00827a:	10201637          	lui	a2,0x10201
1c00827e:	0611                	addi	a2,a2,4
1c008280:	421c                	lw	a5,0(a2)
1c008282:	0007dc63          	bgez	a5,1c00829a <run_test+0x15c>
1c008286:	6705                	lui	a4,0x1
1c008288:	002047b7          	lui	a5,0x204
1c00828c:	c798                	sw	a4,8(a5)
1c00828e:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1e84a8>
1c008292:	c3d8                	sw	a4,4(a5)
1c008294:	4214                	lw	a3,0(a2)
1c008296:	fe06cbe3          	bltz	a3,1c00828c <run_test+0x14e>
1c00829a:	102015b7          	lui	a1,0x10201
1c00829e:	004007b7          	lui	a5,0x400
1c0082a2:	02058593          	addi	a1,a1,32 # 10201020 <__l2_shared_end+0x1dcbb4>
1c0082a6:	0c078793          	addi	a5,a5,192 # 4000c0 <__l1_heap_size+0x3e452c>
1c0082aa:	00f5a023          	sw	a5,0(a1)
1c0082ae:	0115a223          	sw	a7,4(a1)
1c0082b2:	100004b7          	lui	s1,0x10000
1c0082b6:	36448893          	addi	a7,s1,868 # 10000364 <ne16_streamin1>
1c0082ba:	0115a423          	sw	a7,8(a1)
1c0082be:	24080793          	addi	a5,a6,576
1c0082c2:	00f5a623          	sw	a5,12(a1)
1c0082c6:	2c080793          	addi	a5,a6,704
1c0082ca:	00f5a823          	sw	a5,16(a1)
1c0082ce:	2e080813          	addi	a6,a6,736
1c0082d2:	0105aa23          	sw	a6,20(a1)
1c0082d6:	1c001537          	lui	a0,0x1c001
1c0082da:	8f050793          	addi	a5,a0,-1808 # 1c0008f0 <ne16_cfg1>
1c0082de:	5571                	li	a0,-4
1c0082e0:	01878713          	addi	a4,a5,24
1c0082e4:	8d1d                	sub	a0,a0,a5
1c0082e6:	012350fb          	lp.setupi	x1,18,1c0082f2 <run_test+0x1b4>
1c0082ea:	0047268b          	p.lw	a3,4(a4!) # 1004 <__cluster_text_size+0x1004>
1c0082ee:	00e50633          	add	a2,a0,a4
1c0082f2:	00d5e623          	p.sw	a3,a2(a1)
1c0082f6:	10201637          	lui	a2,0x10201
1c0082fa:	00062023          	sw	zero,0(a2) # 10201000 <__l2_shared_end+0x1dcb94>
1c0082fe:	6705                	lui	a4,0x1
1c008300:	002047b7          	lui	a5,0x204
1c008304:	0631                	addi	a2,a2,12
1c008306:	c798                	sw	a4,8(a5)
1c008308:	03c7e683          	p.elw	a3,60(a5) # 20403c <__l1_heap_size+0x1e84a8>
1c00830c:	c3d8                	sw	a4,4(a5)
1c00830e:	4214                	lw	a3,0(a2)
1c008310:	fafd                	bnez	a3,1c008306 <run_test+0x1c8>
1c008312:	102007b7          	lui	a5,0x10200
1c008316:	07e1                	addi	a5,a5,24
1c008318:	4398                	lw	a4,0(a5)
1c00831a:	1c010c37          	lui	s8,0x1c010
1c00831e:	6a09                	lui	s4,0x2
1c008320:	c0b73733          	p.bclr	a4,a4,0,11
1c008324:	5af1                	li	s5,-4
1c008326:	c398                	sw	a4,0(a5)
1c008328:	0c0c0c13          	addi	s8,s8,192 # 1c0100c0 <ne16_outfeat1>
1c00832c:	9a46                	add	s4,s4,a7
1c00832e:	36448493          	addi	s1,s1,868
1c008332:	4981                	li	s3,0
1c008334:	411a8ab3          	sub	s5,s5,a7
1c008338:	1c000b37          	lui	s6,0x1c000
1c00833c:	1c000bb7          	lui	s7,0x1c000
1c008340:	004c258b          	p.lw	a1,4(s8!)
1c008344:	86a6                	mv	a3,s1
1c008346:	0044a60b          	p.lw	a2,4(s1!)
1c00834a:	40b607b3          	sub	a5,a2,a1
1c00834e:	00f037b3          	snez	a5,a5
1c008352:	99be                	add	s3,s3,a5
1c008354:	00b60963          	beq	a2,a1,1c008366 <run_test+0x228>
1c008358:	0619ac63          	p.beqimm	s3,1,1c0083d0 <run_test+0x292>
1c00835c:	009a8733          	add	a4,s5,s1
1c008360:	04cb0513          	addi	a0,s6,76 # 1c00004c <__DTOR_END__+0x30>
1c008364:	2385                	jal	1c0088c4 <printf>
1c008366:	fc9a1de3          	bne	s4,s1,1c008340 <run_test+0x202>
1c00836a:	1c016a37          	lui	s4,0x1c016
1c00836e:	6ac1                	lui	s5,0x10
1c008370:	57f1                	li	a5,-4
1c008372:	9aca                	add	s5,s5,s2
1c008374:	0c0a0a13          	addi	s4,s4,192 # 1c0160c0 <ne16_outfeat0>
1c008378:	36840413          	addi	s0,s0,872
1c00837c:	4481                	li	s1,0
1c00837e:	41278933          	sub	s2,a5,s2
1c008382:	1c000b37          	lui	s6,0x1c000
1c008386:	1c000bb7          	lui	s7,0x1c000
1c00838a:	004a258b          	p.lw	a1,4(s4!)
1c00838e:	86a2                	mv	a3,s0
1c008390:	0044260b          	p.lw	a2,4(s0!)
1c008394:	40b607b3          	sub	a5,a2,a1
1c008398:	00f037b3          	snez	a5,a5
1c00839c:	94be                	add	s1,s1,a5
1c00839e:	00b60963          	beq	a2,a1,1c0083b0 <run_test+0x272>
1c0083a2:	0414a163          	p.beqimm	s1,1,1c0083e4 <run_test+0x2a6>
1c0083a6:	00890733          	add	a4,s2,s0
1c0083aa:	04cb0513          	addi	a0,s6,76 # 1c00004c <__DTOR_END__+0x30>
1c0083ae:	2b19                	jal	1c0088c4 <printf>
1c0083b0:	fc8a9de3          	bne	s5,s0,1c00838a <run_test+0x24c>
1c0083b4:	40b6                	lw	ra,76(sp)
1c0083b6:	4426                	lw	s0,72(sp)
1c0083b8:	01348533          	add	a0,s1,s3
1c0083bc:	4906                	lw	s2,64(sp)
1c0083be:	4496                	lw	s1,68(sp)
1c0083c0:	59f2                	lw	s3,60(sp)
1c0083c2:	5a62                	lw	s4,56(sp)
1c0083c4:	5ad2                	lw	s5,52(sp)
1c0083c6:	5b42                	lw	s6,48(sp)
1c0083c8:	5bb2                	lw	s7,44(sp)
1c0083ca:	5c22                	lw	s8,40(sp)
1c0083cc:	6161                	addi	sp,sp,80
1c0083ce:	8082                	ret
1c0083d0:	01cb8513          	addi	a0,s7,28 # 1c00001c <__DTOR_END__>
1c0083d4:	c22e                	sw	a1,4(sp)
1c0083d6:	c432                	sw	a2,8(sp)
1c0083d8:	c636                	sw	a3,12(sp)
1c0083da:	2979                	jal	1c008878 <puts>
1c0083dc:	46b2                	lw	a3,12(sp)
1c0083de:	4622                	lw	a2,8(sp)
1c0083e0:	4592                	lw	a1,4(sp)
1c0083e2:	bfad                	j	1c00835c <run_test+0x21e>
1c0083e4:	01cb8513          	addi	a0,s7,28
1c0083e8:	c22e                	sw	a1,4(sp)
1c0083ea:	c432                	sw	a2,8(sp)
1c0083ec:	c636                	sw	a3,12(sp)
1c0083ee:	2169                	jal	1c008878 <puts>
1c0083f0:	46b2                	lw	a3,12(sp)
1c0083f2:	4622                	lw	a2,8(sp)
1c0083f4:	4592                	lw	a1,4(sp)
1c0083f6:	bf45                	j	1c0083a6 <run_test+0x268>

1c0083f8 <main>:
1c0083f8:	b399                	j	1c00813e <run_test>

1c0083fa <pos_fll_init>:
1c0083fa:	08152063          	p.beqimm	a0,1,1c00847a <pos_fll_init+0x80>
1c0083fe:	04252a63          	p.beqimm	a0,2,1c008452 <pos_fll_init+0x58>
1c008402:	c505                	beqz	a0,1c00842a <pos_fll_init+0x30>
1c008404:	4701                	li	a4,0
1c008406:	00470793          	addi	a5,a4,4 # 1004 <__cluster_text_size+0x1004>
1c00840a:	05300613          	li	a2,83
1c00840e:	00c70693          	addi	a3,a4,12
1c008412:	c390                	sw	a2,0(a5)
1c008414:	020c17b7          	lui	a5,0x20c1
1c008418:	0721                	addi	a4,a4,8
1c00841a:	0006a023          	sw	zero,0(a3)
1c00841e:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20a5c46>
1c008422:	c31c                	sw	a5,0(a4)
1c008424:	05f68537          	lui	a0,0x5f68
1c008428:	8082                	ret
1c00842a:	1a1007b7          	lui	a5,0x1a100
1c00842e:	00878713          	addi	a4,a5,8 # 1a100008 <__l2_shared_end+0xa0dbb9c>
1c008432:	00c78693          	addi	a3,a5,12
1c008436:	05300613          	li	a2,83
1c00843a:	0791                	addi	a5,a5,4
1c00843c:	c390                	sw	a2,0(a5)
1c00843e:	020c17b7          	lui	a5,0x20c1
1c008442:	0006a023          	sw	zero,0(a3)
1c008446:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20a5c46>
1c00844a:	c31c                	sw	a5,0(a4)
1c00844c:	05f68537          	lui	a0,0x5f68
1c008450:	8082                	ret
1c008452:	1a1007b7          	lui	a5,0x1a100
1c008456:	01878713          	addi	a4,a5,24 # 1a100018 <__l2_shared_end+0xa0dbbac>
1c00845a:	01c78693          	addi	a3,a5,28
1c00845e:	05300613          	li	a2,83
1c008462:	07d1                	addi	a5,a5,20
1c008464:	c390                	sw	a2,0(a5)
1c008466:	020c17b7          	lui	a5,0x20c1
1c00846a:	0006a023          	sw	zero,0(a3)
1c00846e:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20a5c46>
1c008472:	c31c                	sw	a5,0(a4)
1c008474:	05f68537          	lui	a0,0x5f68
1c008478:	8082                	ret
1c00847a:	1a1007b7          	lui	a5,0x1a100
1c00847e:	02878713          	addi	a4,a5,40 # 1a100028 <__l2_shared_end+0xa0dbbbc>
1c008482:	02c78693          	addi	a3,a5,44
1c008486:	05300613          	li	a2,83
1c00848a:	02478793          	addi	a5,a5,36
1c00848e:	c390                	sw	a2,0(a5)
1c008490:	020c17b7          	lui	a5,0x20c1
1c008494:	0006a023          	sw	zero,0(a3)
1c008498:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20a5c46>
1c00849c:	c31c                	sw	a5,0(a4)
1c00849e:	05f68537          	lui	a0,0x5f68
1c0084a2:	8082                	ret

1c0084a4 <pos_soc_init>:
1c0084a4:	8082                	ret

1c0084a6 <pos_wait_forever>:
1c0084a6:	f14027f3          	csrr	a5,mhartid
1c0084aa:	477d                	li	a4,31
1c0084ac:	ca5797b3          	p.extractu	a5,a5,5,5
1c0084b0:	00e78963          	beq	a5,a4,1c0084c2 <pos_wait_forever+0x1c>
1c0084b4:	002047b7          	lui	a5,0x204
1c0084b8:	577d                	li	a4,-1
1c0084ba:	c3d8                	sw	a4,4(a5)
1c0084bc:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1e84a4>
1c0084c0:	a001                	j	1c0084c0 <pos_wait_forever+0x1a>
1c0084c2:	1a10a7b7          	lui	a5,0x1a10a
1c0084c6:	577d                	li	a4,-1
1c0084c8:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa0e539c>
1c0084cc:	10500073          	wfi
1c0084d0:	10500073          	wfi
1c0084d4:	bfe5                	j	1c0084cc <pos_wait_forever+0x26>

1c0084d6 <memcpy>:
1c0084d6:	00a5e7b3          	or	a5,a1,a0
1c0084da:	fa27b7b3          	p.bclr	a5,a5,29,2
1c0084de:	882a                	mv	a6,a0
1c0084e0:	10078163          	beqz	a5,1c0085e2 <memcpy+0x10c>
1c0084e4:	12060263          	beqz	a2,1c008608 <memcpy+0x132>
1c0084e8:	00458793          	addi	a5,a1,4
1c0084ec:	00450693          	addi	a3,a0,4 # 5f68004 <__l1_heap_size+0x5f4c470>
1c0084f0:	04a7b7b3          	p.sletu	a5,a5,a0
1c0084f4:	04b6b6b3          	p.sletu	a3,a3,a1
1c0084f8:	873e                	mv	a4,a5
1c0084fa:	87b6                	mv	a5,a3
1c0084fc:	8fd9                	or	a5,a5,a4
1c0084fe:	0ff7f793          	andi	a5,a5,255
1c008502:	cbe9                	beqz	a5,1c0085d4 <memcpy+0xfe>
1c008504:	00863793          	sltiu	a5,a2,8
1c008508:	0017c793          	xori	a5,a5,1
1c00850c:	0ff7f793          	andi	a5,a5,255
1c008510:	c3f1                	beqz	a5,1c0085d4 <memcpy+0xfe>
1c008512:	40b007b3          	neg	a5,a1
1c008516:	fa27b7b3          	p.bclr	a5,a5,29,2
1c00851a:	fff60313          	addi	t1,a2,-1
1c00851e:	c3ed                	beqz	a5,1c008600 <memcpy+0x12a>
1c008520:	0005c703          	lbu	a4,0(a1)
1c008524:	00158893          	addi	a7,a1,1
1c008528:	00150813          	addi	a6,a0,1
1c00852c:	00e50023          	sb	a4,0(a0)
1c008530:	0217a863          	p.beqimm	a5,1,1c008560 <memcpy+0x8a>
1c008534:	0015c703          	lbu	a4,1(a1)
1c008538:	00258893          	addi	a7,a1,2
1c00853c:	00250813          	addi	a6,a0,2
1c008540:	00e500a3          	sb	a4,1(a0)
1c008544:	ffe60313          	addi	t1,a2,-2
1c008548:	0037bc63          	p.bneimm	a5,3,1c008560 <memcpy+0x8a>
1c00854c:	0025c703          	lbu	a4,2(a1)
1c008550:	00358893          	addi	a7,a1,3
1c008554:	00350813          	addi	a6,a0,3
1c008558:	00e50123          	sb	a4,2(a0)
1c00855c:	ffd60313          	addi	t1,a2,-3
1c008560:	8e1d                	sub	a2,a2,a5
1c008562:	00265713          	srli	a4,a2,0x2
1c008566:	00f506b3          	add	a3,a0,a5
1c00856a:	95be                	add	a1,a1,a5
1c00856c:	cf59                	beqz	a4,1c00860a <memcpy+0x134>
1c00856e:	004740fb          	lp.setup	x1,a4,1c008576 <memcpy+0xa0>
1c008572:	0045a78b          	p.lw	a5,4(a1!)
1c008576:	00f6a22b          	p.sw	a5,4(a3!)
1c00857a:	c20635b3          	p.bclr	a1,a2,1,0
1c00857e:	40b306b3          	sub	a3,t1,a1
1c008582:	00b807b3          	add	a5,a6,a1
1c008586:	00b88733          	add	a4,a7,a1
1c00858a:	04b60b63          	beq	a2,a1,1c0085e0 <memcpy+0x10a>
1c00858e:	00074603          	lbu	a2,0(a4)
1c008592:	00c78023          	sb	a2,0(a5)
1c008596:	0416a563          	p.beqimm	a3,1,1c0085e0 <memcpy+0x10a>
1c00859a:	00174603          	lbu	a2,1(a4)
1c00859e:	00c780a3          	sb	a2,1(a5)
1c0085a2:	0226af63          	p.beqimm	a3,2,1c0085e0 <memcpy+0x10a>
1c0085a6:	00274603          	lbu	a2,2(a4)
1c0085aa:	00c78123          	sb	a2,2(a5)
1c0085ae:	0236a963          	p.beqimm	a3,3,1c0085e0 <memcpy+0x10a>
1c0085b2:	00374603          	lbu	a2,3(a4)
1c0085b6:	00c781a3          	sb	a2,3(a5)
1c0085ba:	0246a363          	p.beqimm	a3,4,1c0085e0 <memcpy+0x10a>
1c0085be:	00474603          	lbu	a2,4(a4)
1c0085c2:	00c78223          	sb	a2,4(a5)
1c0085c6:	0056ad63          	p.beqimm	a3,5,1c0085e0 <memcpy+0x10a>
1c0085ca:	00574703          	lbu	a4,5(a4)
1c0085ce:	00e782a3          	sb	a4,5(a5)
1c0085d2:	8082                	ret
1c0085d4:	004640fb          	lp.setup	x1,a2,1c0085dc <memcpy+0x106>
1c0085d8:	0015c78b          	p.lbu	a5,1(a1!)
1c0085dc:	00f800ab          	p.sb	a5,1(a6!)
1c0085e0:	8082                	ret
1c0085e2:	fa2637b3          	p.bclr	a5,a2,29,2
1c0085e6:	f389                	bnez	a5,1c0084e8 <memcpy+0x12>
1c0085e8:	de65                	beqz	a2,1c0085e0 <memcpy+0x10a>
1c0085ea:	ffc60793          	addi	a5,a2,-4
1c0085ee:	8389                	srli	a5,a5,0x2
1c0085f0:	0785                	addi	a5,a5,1
1c0085f2:	0047c0fb          	lp.setup	x1,a5,1c0085fa <memcpy+0x124>
1c0085f6:	0045a70b          	p.lw	a4,4(a1!)
1c0085fa:	00e8222b          	p.sw	a4,4(a6!)
1c0085fe:	8082                	ret
1c008600:	88ae                	mv	a7,a1
1c008602:	882a                	mv	a6,a0
1c008604:	8332                	mv	t1,a2
1c008606:	bfa9                	j	1c008560 <memcpy+0x8a>
1c008608:	8082                	ret
1c00860a:	4705                	li	a4,1
1c00860c:	b78d                	j	1c00856e <memcpy+0x98>

1c00860e <memmove>:
1c00860e:	40b507b3          	sub	a5,a0,a1
1c008612:	0ec7ec63          	bltu	a5,a2,1c00870a <memmove+0xfc>
1c008616:	20060463          	beqz	a2,1c00881e <memmove+0x210>
1c00861a:	00450793          	addi	a5,a0,4
1c00861e:	00458693          	addi	a3,a1,4
1c008622:	04b7b7b3          	p.sletu	a5,a5,a1
1c008626:	04a6b6b3          	p.sletu	a3,a3,a0
1c00862a:	873e                	mv	a4,a5
1c00862c:	87b6                	mv	a5,a3
1c00862e:	8fd9                	or	a5,a5,a4
1c008630:	0ff7f793          	andi	a5,a5,255
1c008634:	1c078d63          	beqz	a5,1c00880e <memmove+0x200>
1c008638:	00863793          	sltiu	a5,a2,8
1c00863c:	0017c793          	xori	a5,a5,1
1c008640:	0ff7f793          	andi	a5,a5,255
1c008644:	1c078563          	beqz	a5,1c00880e <memmove+0x200>
1c008648:	40b007b3          	neg	a5,a1
1c00864c:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008650:	fff60313          	addi	t1,a2,-1
1c008654:	88ae                	mv	a7,a1
1c008656:	1e078363          	beqz	a5,1c00883c <memmove+0x22e>
1c00865a:	0018c70b          	p.lbu	a4,1(a7!)
1c00865e:	882a                	mv	a6,a0
1c008660:	00e800ab          	p.sb	a4,1(a6!)
1c008664:	0217a863          	p.beqimm	a5,1,1c008694 <memmove+0x86>
1c008668:	0015c703          	lbu	a4,1(a1)
1c00866c:	00250813          	addi	a6,a0,2
1c008670:	00258893          	addi	a7,a1,2
1c008674:	00e500a3          	sb	a4,1(a0)
1c008678:	ffe60313          	addi	t1,a2,-2
1c00867c:	0037bc63          	p.bneimm	a5,3,1c008694 <memmove+0x86>
1c008680:	0025c703          	lbu	a4,2(a1)
1c008684:	00350813          	addi	a6,a0,3
1c008688:	00358893          	addi	a7,a1,3
1c00868c:	00e50123          	sb	a4,2(a0)
1c008690:	ffd60313          	addi	t1,a2,-3
1c008694:	8e1d                	sub	a2,a2,a5
1c008696:	00265713          	srli	a4,a2,0x2
1c00869a:	00f506b3          	add	a3,a0,a5
1c00869e:	95be                	add	a1,a1,a5
1c0086a0:	1a070363          	beqz	a4,1c008846 <memmove+0x238>
1c0086a4:	004740fb          	lp.setup	x1,a4,1c0086ac <memmove+0x9e>
1c0086a8:	0045a78b          	p.lw	a5,4(a1!)
1c0086ac:	00f6a22b          	p.sw	a5,4(a3!)
1c0086b0:	c20635b3          	p.bclr	a1,a2,1,0
1c0086b4:	40b306b3          	sub	a3,t1,a1
1c0086b8:	00b807b3          	add	a5,a6,a1
1c0086bc:	00b88733          	add	a4,a7,a1
1c0086c0:	14b60e63          	beq	a2,a1,1c00881c <memmove+0x20e>
1c0086c4:	00074603          	lbu	a2,0(a4)
1c0086c8:	00c78023          	sb	a2,0(a5)
1c0086cc:	1416a863          	p.beqimm	a3,1,1c00881c <memmove+0x20e>
1c0086d0:	00174603          	lbu	a2,1(a4)
1c0086d4:	00c780a3          	sb	a2,1(a5)
1c0086d8:	1426a263          	p.beqimm	a3,2,1c00881c <memmove+0x20e>
1c0086dc:	00274603          	lbu	a2,2(a4)
1c0086e0:	00c78123          	sb	a2,2(a5)
1c0086e4:	1236ac63          	p.beqimm	a3,3,1c00881c <memmove+0x20e>
1c0086e8:	00374603          	lbu	a2,3(a4)
1c0086ec:	00c781a3          	sb	a2,3(a5)
1c0086f0:	1246a663          	p.beqimm	a3,4,1c00881c <memmove+0x20e>
1c0086f4:	00474603          	lbu	a2,4(a4)
1c0086f8:	00c78223          	sb	a2,4(a5)
1c0086fc:	1256a063          	p.beqimm	a3,5,1c00881c <memmove+0x20e>
1c008700:	00574703          	lbu	a4,5(a4)
1c008704:	00e782a3          	sb	a4,5(a5)
1c008708:	8082                	ret
1c00870a:	ffc60793          	addi	a5,a2,-4
1c00870e:	00f50833          	add	a6,a0,a5
1c008712:	00f58333          	add	t1,a1,a5
1c008716:	00c58733          	add	a4,a1,a2
1c00871a:	00c508b3          	add	a7,a0,a2
1c00871e:	05073733          	p.sletu	a4,a4,a6
1c008722:	0468b833          	p.sletu	a6,a7,t1
1c008726:	86ba                	mv	a3,a4
1c008728:	8742                	mv	a4,a6
1c00872a:	8f55                	or	a4,a4,a3
1c00872c:	0ff77713          	andi	a4,a4,255
1c008730:	cb65                	beqz	a4,1c008820 <memmove+0x212>
1c008732:	00863713          	sltiu	a4,a2,8
1c008736:	00174713          	xori	a4,a4,1
1c00873a:	0ff77713          	andi	a4,a4,255
1c00873e:	c36d                	beqz	a4,1c008820 <memmove+0x212>
1c008740:	fa233733          	p.bclr	a4,t1,29,2
1c008744:	fff60893          	addi	a7,a2,-1
1c008748:	cb65                	beqz	a4,1c008838 <memmove+0x22a>
1c00874a:	011586b3          	add	a3,a1,a7
1c00874e:	0006c683          	lbu	a3,0(a3)
1c008752:	00d548a3          	p.sb	a3,a7(a0)
1c008756:	02172463          	p.beqimm	a4,1,1c00877e <memmove+0x170>
1c00875a:	ffe60893          	addi	a7,a2,-2
1c00875e:	011586b3          	add	a3,a1,a7
1c008762:	0006c683          	lbu	a3,0(a3)
1c008766:	00d548a3          	p.sb	a3,a7(a0)
1c00876a:	00373a63          	p.bneimm	a4,3,1c00877e <memmove+0x170>
1c00876e:	ffd60893          	addi	a7,a2,-3
1c008772:	011586b3          	add	a3,a1,a7
1c008776:	0006c683          	lbu	a3,0(a3)
1c00877a:	00d548a3          	p.sb	a3,a7(a0)
1c00877e:	8e19                	sub	a2,a2,a4
1c008780:	8f99                	sub	a5,a5,a4
1c008782:	00265713          	srli	a4,a2,0x2
1c008786:	00f506b3          	add	a3,a0,a5
1c00878a:	97ae                	add	a5,a5,a1
1c00878c:	cb5d                	beqz	a4,1c008842 <memmove+0x234>
1c00878e:	004740fb          	lp.setup	x1,a4,1c008796 <memmove+0x188>
1c008792:	ffc7a80b          	p.lw	a6,-4(a5!)
1c008796:	ff06ae2b          	p.sw	a6,-4(a3!)
1c00879a:	c20637b3          	p.bclr	a5,a2,1,0
1c00879e:	40f888b3          	sub	a7,a7,a5
1c0087a2:	06f60d63          	beq	a2,a5,1c00881c <memmove+0x20e>
1c0087a6:	fff88793          	addi	a5,a7,-1
1c0087aa:	00f58733          	add	a4,a1,a5
1c0087ae:	00074703          	lbu	a4,0(a4)
1c0087b2:	00e547a3          	p.sb	a4,a5(a0)
1c0087b6:	c3bd                	beqz	a5,1c00881c <memmove+0x20e>
1c0087b8:	ffe88793          	addi	a5,a7,-2
1c0087bc:	00f58733          	add	a4,a1,a5
1c0087c0:	00074703          	lbu	a4,0(a4)
1c0087c4:	00e547a3          	p.sb	a4,a5(a0)
1c0087c8:	cbb1                	beqz	a5,1c00881c <memmove+0x20e>
1c0087ca:	ffd88793          	addi	a5,a7,-3
1c0087ce:	00f58733          	add	a4,a1,a5
1c0087d2:	00074703          	lbu	a4,0(a4)
1c0087d6:	00e547a3          	p.sb	a4,a5(a0)
1c0087da:	c3a9                	beqz	a5,1c00881c <memmove+0x20e>
1c0087dc:	ffc88793          	addi	a5,a7,-4
1c0087e0:	00f58733          	add	a4,a1,a5
1c0087e4:	00074703          	lbu	a4,0(a4)
1c0087e8:	00e547a3          	p.sb	a4,a5(a0)
1c0087ec:	cb85                	beqz	a5,1c00881c <memmove+0x20e>
1c0087ee:	ffb88793          	addi	a5,a7,-5
1c0087f2:	00f58733          	add	a4,a1,a5
1c0087f6:	00074703          	lbu	a4,0(a4)
1c0087fa:	00e547a3          	p.sb	a4,a5(a0)
1c0087fe:	cf99                	beqz	a5,1c00881c <memmove+0x20e>
1c008800:	18e9                	addi	a7,a7,-6
1c008802:	95c6                	add	a1,a1,a7
1c008804:	0005c783          	lbu	a5,0(a1)
1c008808:	00f548a3          	p.sb	a5,a7(a0)
1c00880c:	8082                	ret
1c00880e:	87aa                	mv	a5,a0
1c008810:	004640fb          	lp.setup	x1,a2,1c008818 <memmove+0x20a>
1c008814:	0015c70b          	p.lbu	a4,1(a1!)
1c008818:	00e780ab          	p.sb	a4,1(a5!)
1c00881c:	8082                	ret
1c00881e:	8082                	ret
1c008820:	167d                	addi	a2,a2,-1
1c008822:	00c507b3          	add	a5,a0,a2
1c008826:	95b2                	add	a1,a1,a2
1c008828:	0605                	addi	a2,a2,1
1c00882a:	004640fb          	lp.setup	x1,a2,1c008832 <memmove+0x224>
1c00882e:	fff5c70b          	p.lbu	a4,-1(a1!)
1c008832:	fee78fab          	p.sb	a4,-1(a5!)
1c008836:	8082                	ret
1c008838:	88b2                	mv	a7,a2
1c00883a:	b791                	j	1c00877e <memmove+0x170>
1c00883c:	882a                	mv	a6,a0
1c00883e:	8332                	mv	t1,a2
1c008840:	bd91                	j	1c008694 <memmove+0x86>
1c008842:	4705                	li	a4,1
1c008844:	b7a9                	j	1c00878e <memmove+0x180>
1c008846:	4705                	li	a4,1
1c008848:	bdb1                	j	1c0086a4 <memmove+0x96>

1c00884a <strchr>:
1c00884a:	00054783          	lbu	a5,0(a0)
1c00884e:	0ff5f593          	andi	a1,a1,255
1c008852:	00b78c63          	beq	a5,a1,1c00886a <strchr+0x20>
1c008856:	cb99                	beqz	a5,1c00886c <strchr+0x22>
1c008858:	00150793          	addi	a5,a0,1
1c00885c:	a011                	j	1c008860 <strchr+0x16>
1c00885e:	c719                	beqz	a4,1c00886c <strchr+0x22>
1c008860:	853e                	mv	a0,a5
1c008862:	0017c70b          	p.lbu	a4,1(a5!)
1c008866:	feb71ce3          	bne	a4,a1,1c00885e <strchr+0x14>
1c00886a:	8082                	ret
1c00886c:	0015b593          	seqz	a1,a1
1c008870:	40b005b3          	neg	a1,a1
1c008874:	8d6d                	and	a0,a0,a1
1c008876:	8082                	ret

1c008878 <puts>:
1c008878:	0015478b          	p.lbu	a5,1(a0!)
1c00887c:	1a104737          	lui	a4,0x1a104
1c008880:	02070713          	addi	a4,a4,32 # 1a104020 <__l2_shared_end+0xa0dfbb4>
1c008884:	c789                	beqz	a5,1c00888e <puts+0x16>
1c008886:	c31c                	sw	a5,0(a4)
1c008888:	0015478b          	p.lbu	a5,1(a0!)
1c00888c:	ffed                	bnez	a5,1c008886 <puts+0xe>
1c00888e:	1a1047b7          	lui	a5,0x1a104
1c008892:	4729                	li	a4,10
1c008894:	d398                	sw	a4,32(a5)
1c008896:	4501                	li	a0,0
1c008898:	8082                	ret

1c00889a <pos_libc_fputc_locked>:
1c00889a:	1a1047b7          	lui	a5,0x1a104
1c00889e:	0ff57513          	andi	a0,a0,255
1c0088a2:	d388                	sw	a0,32(a5)
1c0088a4:	4501                	li	a0,0
1c0088a6:	8082                	ret

1c0088a8 <pos_libc_prf_locked>:
1c0088a8:	a0a9                	j	1c0088f2 <pos_libc_prf>

1c0088aa <exit>:
1c0088aa:	1141                	addi	sp,sp,-16
1c0088ac:	c606                	sw	ra,12(sp)
1c0088ae:	1a1047b7          	lui	a5,0x1a104
1c0088b2:	c1f54533          	p.bset	a0,a0,0,31
1c0088b6:	0aa7a023          	sw	a0,160(a5) # 1a1040a0 <__l2_shared_end+0xa0dfc34>
1c0088ba:	36f5                	jal	1c0084a6 <pos_wait_forever>

1c0088bc <pos_io_start>:
1c0088bc:	4501                	li	a0,0
1c0088be:	8082                	ret

1c0088c0 <pos_io_stop>:
1c0088c0:	4501                	li	a0,0
1c0088c2:	8082                	ret

1c0088c4 <printf>:
1c0088c4:	7139                	addi	sp,sp,-64
1c0088c6:	02410313          	addi	t1,sp,36
1c0088ca:	d432                	sw	a2,40(sp)
1c0088cc:	862a                	mv	a2,a0
1c0088ce:	1c009537          	lui	a0,0x1c009
1c0088d2:	d22e                	sw	a1,36(sp)
1c0088d4:	d636                	sw	a3,44(sp)
1c0088d6:	4589                	li	a1,2
1c0088d8:	869a                	mv	a3,t1
1c0088da:	89a50513          	addi	a0,a0,-1894 # 1c00889a <pos_libc_fputc_locked>
1c0088de:	ce06                	sw	ra,28(sp)
1c0088e0:	d83a                	sw	a4,48(sp)
1c0088e2:	da3e                	sw	a5,52(sp)
1c0088e4:	dc42                	sw	a6,56(sp)
1c0088e6:	de46                	sw	a7,60(sp)
1c0088e8:	c61a                	sw	t1,12(sp)
1c0088ea:	3f7d                	jal	1c0088a8 <pos_libc_prf_locked>
1c0088ec:	40f2                	lw	ra,28(sp)
1c0088ee:	6121                	addi	sp,sp,64
1c0088f0:	8082                	ret

1c0088f2 <pos_libc_prf>:
1c0088f2:	7169                	addi	sp,sp,-304
1c0088f4:	12812423          	sw	s0,296(sp)
1c0088f8:	4401                	li	s0,0
1c0088fa:	11612823          	sw	s6,272(sp)
1c0088fe:	11712623          	sw	s7,268(sp)
1c008902:	11812423          	sw	s8,264(sp)
1c008906:	11912223          	sw	s9,260(sp)
1c00890a:	11a12023          	sw	s10,256(sp)
1c00890e:	dfee                	sw	s11,252(sp)
1c008910:	12112623          	sw	ra,300(sp)
1c008914:	8da2                	mv	s11,s0
1c008916:	12912223          	sw	s1,292(sp)
1c00891a:	13212023          	sw	s2,288(sp)
1c00891e:	11312e23          	sw	s3,284(sp)
1c008922:	11412c23          	sw	s4,280(sp)
1c008926:	11512a23          	sw	s5,276(sp)
1c00892a:	8b2a                	mv	s6,a0
1c00892c:	8d2e                	mv	s10,a1
1c00892e:	8c36                	mv	s8,a3
1c008930:	1c000bb7          	lui	s7,0x1c000
1c008934:	02410c93          	addi	s9,sp,36
1c008938:	8432                	mv	s0,a2
1c00893a:	00044503          	lbu	a0,0(s0)
1c00893e:	0405                	addi	s0,s0,1
1c008940:	cd11                	beqz	a0,1c00895c <pos_libc_prf+0x6a>
1c008942:	02500793          	li	a5,37
1c008946:	04f50863          	beq	a0,a5,1c008996 <pos_libc_prf+0xa4>
1c00894a:	85ea                	mv	a1,s10
1c00894c:	9b02                	jalr	s6
1c00894e:	31f52563          	p.beqimm	a0,-1,1c008c58 <pos_libc_prf+0x366>
1c008952:	0d85                	addi	s11,s11,1
1c008954:	00044503          	lbu	a0,0(s0)
1c008958:	0405                	addi	s0,s0,1
1c00895a:	f565                	bnez	a0,1c008942 <pos_libc_prf+0x50>
1c00895c:	846e                	mv	s0,s11
1c00895e:	8522                	mv	a0,s0
1c008960:	12c12083          	lw	ra,300(sp)
1c008964:	12812403          	lw	s0,296(sp)
1c008968:	12412483          	lw	s1,292(sp)
1c00896c:	12012903          	lw	s2,288(sp)
1c008970:	11c12983          	lw	s3,284(sp)
1c008974:	11812a03          	lw	s4,280(sp)
1c008978:	11412a83          	lw	s5,276(sp)
1c00897c:	11012b03          	lw	s6,272(sp)
1c008980:	10c12b83          	lw	s7,268(sp)
1c008984:	10812c03          	lw	s8,264(sp)
1c008988:	10412c83          	lw	s9,260(sp)
1c00898c:	10012d03          	lw	s10,256(sp)
1c008990:	5dfe                	lw	s11,252(sp)
1c008992:	6155                	addi	sp,sp,304
1c008994:	8082                	ret
1c008996:	00044483          	lbu	s1,0(s0)
1c00899a:	02000693          	li	a3,32
1c00899e:	00140a93          	addi	s5,s0,1
1c0089a2:	078b8513          	addi	a0,s7,120 # 1c000078 <__DTOR_END__+0x5c>
1c0089a6:	85a6                	mv	a1,s1
1c0089a8:	c836                	sw	a3,16(sp)
1c0089aa:	cc02                	sw	zero,24(sp)
1c0089ac:	ca02                	sw	zero,20(sp)
1c0089ae:	ce02                	sw	zero,28(sp)
1c0089b0:	c602                	sw	zero,12(sp)
1c0089b2:	02300913          	li	s2,35
1c0089b6:	02d00a13          	li	s4,45
1c0089ba:	89d6                	mv	s3,s5
1c0089bc:	3579                	jal	1c00884a <strchr>
1c0089be:	c915                	beqz	a0,1c0089f2 <pos_libc_prf+0x100>
1c0089c0:	2b248b63          	beq	s1,s2,1c008c76 <pos_libc_prf+0x384>
1c0089c4:	0c997463          	bleu	s1,s2,1c008a8c <pos_libc_prf+0x19a>
1c0089c8:	2b448363          	beq	s1,s4,1c008c6e <pos_libc_prf+0x37c>
1c0089cc:	03000613          	li	a2,48
1c0089d0:	28c48a63          	beq	s1,a2,1c008c64 <pos_libc_prf+0x372>
1c0089d4:	02b00693          	li	a3,43
1c0089d8:	28d48263          	beq	s1,a3,1c008c5c <pos_libc_prf+0x36a>
1c0089dc:	8456                	mv	s0,s5
1c0089de:	00044483          	lbu	s1,0(s0)
1c0089e2:	00140a93          	addi	s5,s0,1
1c0089e6:	078b8513          	addi	a0,s7,120
1c0089ea:	85a6                	mv	a1,s1
1c0089ec:	89d6                	mv	s3,s5
1c0089ee:	3db1                	jal	1c00884a <strchr>
1c0089f0:	f961                	bnez	a0,1c0089c0 <pos_libc_prf+0xce>
1c0089f2:	02a00613          	li	a2,42
1c0089f6:	2ac48663          	beq	s1,a2,1c008ca2 <pos_libc_prf+0x3b0>
1c0089fa:	fd048613          	addi	a2,s1,-48
1c0089fe:	45a5                	li	a1,9
1c008a00:	4901                	li	s2,0
1c008a02:	28c5f063          	bleu	a2,a1,1c008c82 <pos_libc_prf+0x390>
1c008a06:	02e00693          	li	a3,46
1c008a0a:	5a7d                	li	s4,-1
1c008a0c:	2ed48363          	beq	s1,a3,1c008cf2 <pos_libc_prf+0x400>
1c008a10:	1c0007b7          	lui	a5,0x1c000
1c008a14:	85a6                	mv	a1,s1
1c008a16:	08078513          	addi	a0,a5,128 # 1c000080 <__DTOR_END__+0x64>
1c008a1a:	3d05                	jal	1c00884a <strchr>
1c008a1c:	844e                	mv	s0,s3
1c008a1e:	c509                	beqz	a0,1c008a28 <pos_libc_prf+0x136>
1c008a20:	0009c483          	lbu	s1,0(s3)
1c008a24:	00198413          	addi	s0,s3,1
1c008a28:	06700693          	li	a3,103
1c008a2c:	2896d963          	ble	s1,a3,1c008cbe <pos_libc_prf+0x3cc>
1c008a30:	07000693          	li	a3,112
1c008a34:	7cd48b63          	beq	s1,a3,1c00920a <pos_libc_prf+0x918>
1c008a38:	2e96d163          	ble	s1,a3,1c008d1a <pos_libc_prf+0x428>
1c008a3c:	07500693          	li	a3,117
1c008a40:	12d489e3          	beq	s1,a3,1c009372 <pos_libc_prf+0xa80>
1c008a44:	07800693          	li	a3,120
1c008a48:	06d48663          	beq	s1,a3,1c008ab4 <pos_libc_prf+0x1c2>
1c008a4c:	07300693          	li	a3,115
1c008a50:	18d49fe3          	bne	s1,a3,1c0093ee <pos_libc_prf+0xafc>
1c008a54:	000c2583          	lw	a1,0(s8)
1c008a58:	004c0993          	addi	s3,s8,4
1c008a5c:	4481                	li	s1,0
1c008a5e:	86ae                	mv	a3,a1
1c008a60:	0c8350fb          	lp.setupi	x1,200,1c008a6c <pos_libc_prf+0x17a>
1c008a64:	0016c70b          	p.lbu	a4,1(a3!)
1c008a68:	18070ae3          	beqz	a4,1c0093fc <pos_libc_prf+0xb0a>
1c008a6c:	0485                	addi	s1,s1,1
1c008a6e:	000a4763          	bltz	s4,1c008a7c <pos_libc_prf+0x18a>
1c008a72:	0544c4b3          	p.min	s1,s1,s4
1c008a76:	8c4e                	mv	s8,s3
1c008a78:	ec0481e3          	beqz	s1,1c00893a <pos_libc_prf+0x48>
1c008a7c:	8626                	mv	a2,s1
1c008a7e:	8566                	mv	a0,s9
1c008a80:	3c99                	jal	1c0084d6 <memcpy>
1c008a82:	8c4e                	mv	s8,s3
1c008a84:	1b24db63          	ble	s2,s1,1c008c3a <pos_libc_prf+0x348>
1c008a88:	c602                	sw	zero,12(sp)
1c008a8a:	a0f9                	j	1c008b58 <pos_libc_prf+0x266>
1c008a8c:	ec0488e3          	beqz	s1,1c00895c <pos_libc_prf+0x6a>
1c008a90:	02000593          	li	a1,32
1c008a94:	f4b494e3          	bne	s1,a1,1c0089dc <pos_libc_prf+0xea>
1c008a98:	4785                	li	a5,1
1c008a9a:	cc3e                	sw	a5,24(sp)
1c008a9c:	8456                	mv	s0,s5
1c008a9e:	b781                	j	1c0089de <pos_libc_prf+0xec>
1c008aa0:	06300693          	li	a3,99
1c008aa4:	0ad48de3          	beq	s1,a3,1c00935e <pos_libc_prf+0xa6c>
1c008aa8:	0096cde3          	blt	a3,s1,1c0092c2 <pos_libc_prf+0x9d0>
1c008aac:	05800693          	li	a3,88
1c008ab0:	12d49fe3          	bne	s1,a3,1c0093ee <pos_libc_prf+0xafc>
1c008ab4:	47b2                	lw	a5,12(sp)
1c008ab6:	004c0893          	addi	a7,s8,4
1c008aba:	000c2503          	lw	a0,0(s8)
1c008abe:	260788e3          	beqz	a5,1c00952e <pos_libc_prf+0xc3c>
1c008ac2:	76e1                	lui	a3,0xffff8
1c008ac4:	8306c693          	xori	a3,a3,-2000
1c008ac8:	02d11223          	sh	a3,36(sp)
1c008acc:	4309                	li	t1,2
1c008ace:	02610613          	addi	a2,sp,38
1c008ad2:	86b2                	mv	a3,a2
1c008ad4:	4ea5                	li	t4,9
1c008ad6:	f6453733          	p.bclr	a4,a0,27,4
1c008ada:	0ff77793          	andi	a5,a4,255
1c008ade:	03078593          	addi	a1,a5,48
1c008ae2:	8111                	srli	a0,a0,0x4
1c008ae4:	05778793          	addi	a5,a5,87
1c008ae8:	70eee963          	bltu	t4,a4,1c0091fa <pos_libc_prf+0x908>
1c008aec:	00b680ab          	p.sb	a1,1(a3!) # ffff8001 <pulp__FC+0xffff8002>
1c008af0:	f17d                	bnez	a0,1c008ad6 <pos_libc_prf+0x1e4>
1c008af2:	40c68733          	sub	a4,a3,a2
1c008af6:	01475d63          	ble	s4,a4,1c008b10 <pos_libc_prf+0x21e>
1c008afa:	40d605b3          	sub	a1,a2,a3
1c008afe:	03000513          	li	a0,48
1c008b02:	95d2                	add	a1,a1,s4
1c008b04:	0045c0fb          	lp.setup	x1,a1,1c008b0c <pos_libc_prf+0x21a>
1c008b08:	00a680ab          	p.sb	a0,1(a3!)
1c008b0c:	40c68733          	sub	a4,a3,a2
1c008b10:	fe068fab          	p.sb	zero,-1(a3!)
1c008b14:	00d67c63          	bleu	a3,a2,1c008b2c <pos_libc_prf+0x23a>
1c008b18:	00064583          	lbu	a1,0(a2)
1c008b1c:	0006c783          	lbu	a5,0(a3)
1c008b20:	feb68fab          	p.sb	a1,-1(a3!)
1c008b24:	00f600ab          	p.sb	a5,1(a2!)
1c008b28:	fed668e3          	bltu	a2,a3,1c008b18 <pos_libc_prf+0x226>
1c008b2c:	05800693          	li	a3,88
1c008b30:	20d483e3          	beq	s1,a3,1c009536 <pos_libc_prf+0xc44>
1c008b34:	46b2                	lw	a3,12(sp)
1c008b36:	006704b3          	add	s1,a4,t1
1c008b3a:	c299                	beqz	a3,1c008b40 <pos_libc_prf+0x24e>
1c008b3c:	4709                	li	a4,2
1c008b3e:	c63a                	sw	a4,12(sp)
1c008b40:	0c800793          	li	a5,200
1c008b44:	23fa24e3          	p.beqimm	s4,-1,1c00956c <pos_libc_prf+0xc7a>
1c008b48:	1097c863          	blt	a5,s1,1c008c58 <pos_libc_prf+0x366>
1c008b4c:	02000793          	li	a5,32
1c008b50:	8c46                	mv	s8,a7
1c008b52:	c83e                	sw	a5,16(sp)
1c008b54:	0f24d163          	ble	s2,s1,1c008c36 <pos_libc_prf+0x344>
1c008b58:	4772                	lw	a4,28(sp)
1c008b5a:	0c0702e3          	beqz	a4,1c00941e <pos_libc_prf+0xb2c>
1c008b5e:	009c87b3          	add	a5,s9,s1
1c008b62:	40f007b3          	neg	a5,a5
1c008b66:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008b6a:	4595                	li	a1,5
1c008b6c:	00378613          	addi	a2,a5,3
1c008b70:	fff90693          	addi	a3,s2,-1
1c008b74:	04b67633          	p.maxu	a2,a2,a1
1c008b78:	8e85                	sub	a3,a3,s1
1c008b7a:	409905b3          	sub	a1,s2,s1
1c008b7e:	06c6e163          	bltu	a3,a2,1c008be0 <pos_libc_prf+0x2ee>
1c008b82:	8626                	mv	a2,s1
1c008b84:	cb85                	beqz	a5,1c008bb4 <pos_libc_prf+0x2c2>
1c008b86:	1998                	addi	a4,sp,240
1c008b88:	00970633          	add	a2,a4,s1
1c008b8c:	02000693          	li	a3,32
1c008b90:	f2d60a23          	sb	a3,-204(a2)
1c008b94:	00148613          	addi	a2,s1,1
1c008b98:	0017ae63          	p.beqimm	a5,1,1c008bb4 <pos_libc_prf+0x2c2>
1c008b9c:	963a                	add	a2,a2,a4
1c008b9e:	f2d60a23          	sb	a3,-204(a2)
1c008ba2:	00248613          	addi	a2,s1,2
1c008ba6:	0037b763          	p.bneimm	a5,3,1c008bb4 <pos_libc_prf+0x2c2>
1c008baa:	963a                	add	a2,a2,a4
1c008bac:	f2d60a23          	sb	a3,-204(a2)
1c008bb0:	00348613          	addi	a2,s1,3
1c008bb4:	8d9d                	sub	a1,a1,a5
1c008bb6:	0025d693          	srli	a3,a1,0x2
1c008bba:	97a6                	add	a5,a5,s1
1c008bbc:	97e6                	add	a5,a5,s9
1c008bbe:	42068fe3          	beqz	a3,1c0097fc <pos_libc_prf+0xf0a>
1c008bc2:	0076c0fb          	lp.setup	x1,a3,1c008bd0 <pos_libc_prf+0x2de>
1c008bc6:	1c000737          	lui	a4,0x1c000
1c008bca:	07470713          	addi	a4,a4,116 # 1c000074 <__DTOR_END__+0x58>
1c008bce:	4318                	lw	a4,0(a4)
1c008bd0:	00e7a22b          	p.sw	a4,4(a5!)
1c008bd4:	c205b7b3          	p.bclr	a5,a1,1,0
1c008bd8:	00c784b3          	add	s1,a5,a2
1c008bdc:	04b78c63          	beq	a5,a1,1c008c34 <pos_libc_prf+0x342>
1c008be0:	198c                	addi	a1,sp,240
1c008be2:	009586b3          	add	a3,a1,s1
1c008be6:	02000793          	li	a5,32
1c008bea:	f2f68a23          	sb	a5,-204(a3)
1c008bee:	00148693          	addi	a3,s1,1
1c008bf2:	0526d163          	ble	s2,a3,1c008c34 <pos_libc_prf+0x342>
1c008bf6:	96ae                	add	a3,a3,a1
1c008bf8:	f2f68a23          	sb	a5,-204(a3)
1c008bfc:	00248693          	addi	a3,s1,2
1c008c00:	0326da63          	ble	s2,a3,1c008c34 <pos_libc_prf+0x342>
1c008c04:	96ae                	add	a3,a3,a1
1c008c06:	f2f68a23          	sb	a5,-204(a3)
1c008c0a:	00348693          	addi	a3,s1,3
1c008c0e:	0326d363          	ble	s2,a3,1c008c34 <pos_libc_prf+0x342>
1c008c12:	96ae                	add	a3,a3,a1
1c008c14:	f2f68a23          	sb	a5,-204(a3)
1c008c18:	00448693          	addi	a3,s1,4
1c008c1c:	0126dc63          	ble	s2,a3,1c008c34 <pos_libc_prf+0x342>
1c008c20:	96ae                	add	a3,a3,a1
1c008c22:	f2f68a23          	sb	a5,-204(a3)
1c008c26:	00548713          	addi	a4,s1,5
1c008c2a:	01275563          	ble	s2,a4,1c008c34 <pos_libc_prf+0x342>
1c008c2e:	972e                	add	a4,a4,a1
1c008c30:	f2f70a23          	sb	a5,-204(a4)
1c008c34:	84ca                	mv	s1,s2
1c008c36:	d00482e3          	beqz	s1,1c00893a <pos_libc_prf+0x48>
1c008c3a:	8966                	mv	s2,s9
1c008c3c:	419d8db3          	sub	s11,s11,s9
1c008c40:	a029                	j	1c008c4a <pos_libc_prf+0x358>
1c008c42:	012d8733          	add	a4,s11,s2
1c008c46:	5a048f63          	beqz	s1,1c009204 <pos_libc_prf+0x912>
1c008c4a:	0019450b          	p.lbu	a0,1(s2!)
1c008c4e:	85ea                	mv	a1,s10
1c008c50:	14fd                	addi	s1,s1,-1
1c008c52:	9b02                	jalr	s6
1c008c54:	fff537e3          	p.bneimm	a0,-1,1c008c42 <pos_libc_prf+0x350>
1c008c58:	547d                	li	s0,-1
1c008c5a:	b311                	j	1c00895e <pos_libc_prf+0x6c>
1c008c5c:	4705                	li	a4,1
1c008c5e:	ca3a                	sw	a4,20(sp)
1c008c60:	8456                	mv	s0,s5
1c008c62:	bbb5                	j	1c0089de <pos_libc_prf+0xec>
1c008c64:	03000713          	li	a4,48
1c008c68:	c83a                	sw	a4,16(sp)
1c008c6a:	8456                	mv	s0,s5
1c008c6c:	bb8d                	j	1c0089de <pos_libc_prf+0xec>
1c008c6e:	4785                	li	a5,1
1c008c70:	ce3e                	sw	a5,28(sp)
1c008c72:	8456                	mv	s0,s5
1c008c74:	b3ad                	j	1c0089de <pos_libc_prf+0xec>
1c008c76:	4685                	li	a3,1
1c008c78:	c636                	sw	a3,12(sp)
1c008c7a:	8456                	mv	s0,s5
1c008c7c:	b38d                	j	1c0089de <pos_libc_prf+0xec>
1c008c7e:	8456                	mv	s0,s5
1c008c80:	0a85                	addi	s5,s5,1
1c008c82:	00291793          	slli	a5,s2,0x2
1c008c86:	97ca                	add	a5,a5,s2
1c008c88:	0786                	slli	a5,a5,0x1
1c008c8a:	97a6                	add	a5,a5,s1
1c008c8c:	000ac483          	lbu	s1,0(s5) # 10000 <__cluster_text_size+0x10000>
1c008c90:	fd078913          	addi	s2,a5,-48
1c008c94:	fd048793          	addi	a5,s1,-48
1c008c98:	fef5f3e3          	bleu	a5,a1,1c008c7e <pos_libc_prf+0x38c>
1c008c9c:	00240993          	addi	s3,s0,2
1c008ca0:	a811                	j	1c008cb4 <pos_libc_prf+0x3c2>
1c008ca2:	000c2903          	lw	s2,0(s8)
1c008ca6:	0c11                	addi	s8,s8,4
1c008ca8:	12094d63          	bltz	s2,1c008de2 <pos_libc_prf+0x4f0>
1c008cac:	000ac483          	lbu	s1,0(s5)
1c008cb0:	00240993          	addi	s3,s0,2
1c008cb4:	0c800693          	li	a3,200
1c008cb8:	04d95933          	p.minu	s2,s2,a3
1c008cbc:	b3a9                	j	1c008a06 <pos_libc_prf+0x114>
1c008cbe:	06500693          	li	a3,101
1c008cc2:	12d4d563          	ble	a3,s1,1c008dec <pos_libc_prf+0x4fa>
1c008cc6:	04700693          	li	a3,71
1c008cca:	dc96cbe3          	blt	a3,s1,1c008aa0 <pos_libc_prf+0x1ae>
1c008cce:	04500693          	li	a3,69
1c008cd2:	10d4dd63          	ble	a3,s1,1c008dec <pos_libc_prf+0x4fa>
1c008cd6:	c80483e3          	beqz	s1,1c00895c <pos_libc_prf+0x6a>
1c008cda:	02500693          	li	a3,37
1c008cde:	70d49863          	bne	s1,a3,1c0093ee <pos_libc_prf+0xafc>
1c008ce2:	85ea                	mv	a1,s10
1c008ce4:	02500513          	li	a0,37
1c008ce8:	9b02                	jalr	s6
1c008cea:	f7f527e3          	p.beqimm	a0,-1,1c008c58 <pos_libc_prf+0x366>
1c008cee:	0d85                	addi	s11,s11,1
1c008cf0:	b195                	j	1c008954 <pos_libc_prf+0x62>
1c008cf2:	0009c783          	lbu	a5,0(s3)
1c008cf6:	02a00693          	li	a3,42
1c008cfa:	00198513          	addi	a0,s3,1
1c008cfe:	0ad79963          	bne	a5,a3,1c008db0 <pos_libc_prf+0x4be>
1c008d02:	000c2a03          	lw	s4,0(s8)
1c008d06:	0019c483          	lbu	s1,1(s3)
1c008d0a:	0c11                	addi	s8,s8,4
1c008d0c:	0989                	addi	s3,s3,2
1c008d0e:	0c800693          	li	a3,200
1c008d12:	cf46dfe3          	ble	s4,a3,1c008a10 <pos_libc_prf+0x11e>
1c008d16:	5a7d                	li	s4,-1
1c008d18:	b9e5                	j	1c008a10 <pos_libc_prf+0x11e>
1c008d1a:	06e00693          	li	a3,110
1c008d1e:	58d48763          	beq	s1,a3,1c0092ac <pos_libc_prf+0x9ba>
1c008d22:	5896dc63          	ble	s1,a3,1c0092ba <pos_libc_prf+0x9c8>
1c008d26:	47b2                	lw	a5,12(sp)
1c008d28:	004c0813          	addi	a6,s8,4
1c008d2c:	000c2603          	lw	a2,0(s8)
1c008d30:	04078ee3          	beqz	a5,1c00958c <pos_libc_prf+0xc9a>
1c008d34:	03000793          	li	a5,48
1c008d38:	02f10223          	sb	a5,36(sp)
1c008d3c:	02060de3          	beqz	a2,1c009576 <pos_libc_prf+0xc84>
1c008d40:	02510513          	addi	a0,sp,37
1c008d44:	86aa                	mv	a3,a0
1c008d46:	87b6                	mv	a5,a3
1c008d48:	f8363733          	p.bclr	a4,a2,28,3
1c008d4c:	03070713          	addi	a4,a4,48
1c008d50:	820d                	srli	a2,a2,0x3
1c008d52:	00e780ab          	p.sb	a4,1(a5!)
1c008d56:	fa6d                	bnez	a2,1c008d48 <pos_libc_prf+0x456>
1c008d58:	40a78733          	sub	a4,a5,a0
1c008d5c:	01475d63          	ble	s4,a4,1c008d76 <pos_libc_prf+0x484>
1c008d60:	40fa0633          	sub	a2,s4,a5
1c008d64:	03000593          	li	a1,48
1c008d68:	962a                	add	a2,a2,a0
1c008d6a:	004640fb          	lp.setup	x1,a2,1c008d72 <pos_libc_prf+0x480>
1c008d6e:	00b780ab          	p.sb	a1,1(a5!)
1c008d72:	40a78733          	sub	a4,a5,a0
1c008d76:	fe078fab          	p.sb	zero,-1(a5!)
1c008d7a:	00f6fc63          	bleu	a5,a3,1c008d92 <pos_libc_prf+0x4a0>
1c008d7e:	0006c583          	lbu	a1,0(a3)
1c008d82:	0007c603          	lbu	a2,0(a5)
1c008d86:	feb78fab          	p.sb	a1,-1(a5!)
1c008d8a:	00c680ab          	p.sb	a2,1(a3!)
1c008d8e:	fef6e8e3          	bltu	a3,a5,1c008d7e <pos_libc_prf+0x48c>
1c008d92:	46b2                	lw	a3,12(sp)
1c008d94:	0c800793          	li	a5,200
1c008d98:	00d704b3          	add	s1,a4,a3
1c008d9c:	0bfa2de3          	p.beqimm	s4,-1,1c009656 <pos_libc_prf+0xd64>
1c008da0:	ea97cce3          	blt	a5,s1,1c008c58 <pos_libc_prf+0x366>
1c008da4:	02000793          	li	a5,32
1c008da8:	8c42                	mv	s8,a6
1c008daa:	c602                	sw	zero,12(sp)
1c008dac:	c83e                	sw	a5,16(sp)
1c008dae:	b35d                	j	1c008b54 <pos_libc_prf+0x262>
1c008db0:	fd078813          	addi	a6,a5,-48
1c008db4:	46a5                	li	a3,9
1c008db6:	84be                	mv	s1,a5
1c008db8:	862a                	mv	a2,a0
1c008dba:	4a01                	li	s4,0
1c008dbc:	45a5                	li	a1,9
1c008dbe:	89aa                	mv	s3,a0
1c008dc0:	c506e8e3          	bltu	a3,a6,1c008a10 <pos_libc_prf+0x11e>
1c008dc4:	002a1793          	slli	a5,s4,0x2
1c008dc8:	97d2                	add	a5,a5,s4
1c008dca:	0786                	slli	a5,a5,0x1
1c008dcc:	97a6                	add	a5,a5,s1
1c008dce:	0016448b          	p.lbu	s1,1(a2!)
1c008dd2:	fd078a13          	addi	s4,a5,-48
1c008dd6:	fd048793          	addi	a5,s1,-48
1c008dda:	fef5f5e3          	bleu	a5,a1,1c008dc4 <pos_libc_prf+0x4d2>
1c008dde:	89b2                	mv	s3,a2
1c008de0:	b73d                	j	1c008d0e <pos_libc_prf+0x41c>
1c008de2:	4705                	li	a4,1
1c008de4:	41200933          	neg	s2,s2
1c008de8:	ce3a                	sw	a4,28(sp)
1c008dea:	b5c9                	j	1c008cac <pos_libc_prf+0x3ba>
1c008dec:	0c1d                	addi	s8,s8,7
1c008dee:	c40c3c33          	p.bclr	s8,s8,2,0
1c008df2:	000c2683          	lw	a3,0(s8)
1c008df6:	004c2803          	lw	a6,4(s8)
1c008dfa:	7ff00613          	li	a2,2047
1c008dfe:	0156d893          	srli	a7,a3,0x15
1c008e02:	01485513          	srli	a0,a6,0x14
1c008e06:	00b81593          	slli	a1,a6,0xb
1c008e0a:	00b8e5b3          	or	a1,a7,a1
1c008e0e:	e8b53533          	p.bclr	a0,a0,20,11
1c008e12:	0c21                	addi	s8,s8,8
1c008e14:	06ae                	slli	a3,a3,0xb
1c008e16:	c1f5b5b3          	p.bclr	a1,a1,0,31
1c008e1a:	7ac50b63          	beq	a0,a2,1c0095d0 <pos_libc_prf+0xcde>
1c008e1e:	04600613          	li	a2,70
1c008e22:	00c49463          	bne	s1,a2,1c008e2a <pos_libc_prf+0x538>
1c008e26:	06600493          	li	s1,102
1c008e2a:	00d56633          	or	a2,a0,a3
1c008e2e:	8e4d                	or	a2,a2,a1
1c008e30:	7c060b63          	beqz	a2,1c009606 <pos_libc_prf+0xd14>
1c008e34:	c0250513          	addi	a0,a0,-1022
1c008e38:	c1f5c333          	p.bset	t1,a1,0,31
1c008e3c:	140842e3          	bltz	a6,1c009780 <pos_libc_prf+0xe8e>
1c008e40:	4752                	lw	a4,20(sp)
1c008e42:	180703e3          	beqz	a4,1c0097c8 <pos_libc_prf+0xed6>
1c008e46:	02b00613          	li	a2,43
1c008e4a:	02c10223          	sb	a2,36(sp)
1c008e4e:	02510893          	addi	a7,sp,37
1c008e52:	5679                	li	a2,-2
1c008e54:	4801                	li	a6,0
1c008e56:	06c55763          	ble	a2,a0,1c008ec4 <pos_libc_prf+0x5d2>
1c008e5a:	33333e37          	lui	t3,0x33333
1c008e5e:	80000eb7          	lui	t4,0x80000
1c008e62:	332e0e13          	addi	t3,t3,818 # 33333332 <ne16_outfeat0+0x1731d272>
1c008e66:	fffece93          	not	t4,t4
1c008e6a:	5f79                	li	t5,-2
1c008e6c:	a011                	j	1c008e70 <pos_libc_prf+0x57e>
1c008e6e:	853e                	mv	a0,a5
1c008e70:	01f31613          	slli	a2,t1,0x1f
1c008e74:	0016d713          	srli	a4,a3,0x1
1c008e78:	fc16b7b3          	p.bclr	a5,a3,30,1
1c008e7c:	8f51                	or	a4,a4,a2
1c008e7e:	00e786b3          	add	a3,a5,a4
1c008e82:	00f6b7b3          	sltu	a5,a3,a5
1c008e86:	00135313          	srli	t1,t1,0x1
1c008e8a:	933e                	add	t1,t1,a5
1c008e8c:	00150793          	addi	a5,a0,1
1c008e90:	fc6e6fe3          	bltu	t3,t1,1c008e6e <pos_libc_prf+0x57c>
1c008e94:	00269613          	slli	a2,a3,0x2
1c008e98:	01e6d593          	srli	a1,a3,0x1e
1c008e9c:	00231713          	slli	a4,t1,0x2
1c008ea0:	96b2                	add	a3,a3,a2
1c008ea2:	8f4d                	or	a4,a4,a1
1c008ea4:	933a                	add	t1,t1,a4
1c008ea6:	00c6b633          	sltu	a2,a3,a2
1c008eaa:	9332                	add	t1,t1,a2
1c008eac:	01f6d713          	srli	a4,a3,0x1f
1c008eb0:	0509                	addi	a0,a0,2
1c008eb2:	187d                	addi	a6,a6,-1
1c008eb4:	01d31663          	bne	t1,t4,1c008ec0 <pos_libc_prf+0x5ce>
1c008eb8:	0686                	slli	a3,a3,0x1
1c008eba:	fc174333          	p.bset	t1,a4,30,1
1c008ebe:	853e                	mv	a0,a5
1c008ec0:	fbe548e3          	blt	a0,t5,1c008e70 <pos_libc_prf+0x57e>
1c008ec4:	06a05763          	blez	a0,1c008f32 <pos_libc_prf+0x640>
1c008ec8:	80000eb7          	lui	t4,0x80000
1c008ecc:	4f15                	li	t5,5
1c008ece:	fffece93          	not	t4,t4
1c008ed2:	00268613          	addi	a2,a3,2
1c008ed6:	00d636b3          	sltu	a3,a2,a3
1c008eda:	9336                	add	t1,t1,a3
1c008edc:	03e357b3          	divu	a5,t1,t5
1c008ee0:	00365593          	srli	a1,a2,0x3
1c008ee4:	157d                	addi	a0,a0,-1
1c008ee6:	0805                	addi	a6,a6,1
1c008ee8:	00279713          	slli	a4,a5,0x2
1c008eec:	973e                	add	a4,a4,a5
1c008eee:	40e30333          	sub	t1,t1,a4
1c008ef2:	01d31713          	slli	a4,t1,0x1d
1c008ef6:	8dd9                	or	a1,a1,a4
1c008ef8:	03e5d5b3          	divu	a1,a1,t5
1c008efc:	00359693          	slli	a3,a1,0x3
1c008f00:	00559713          	slli	a4,a1,0x5
1c008f04:	9736                	add	a4,a4,a3
1c008f06:	40e60733          	sub	a4,a2,a4
1c008f0a:	03e75733          	divu	a4,a4,t5
1c008f0e:	81f5                	srli	a1,a1,0x1d
1c008f10:	97ae                	add	a5,a5,a1
1c008f12:	96ba                	add	a3,a3,a4
1c008f14:	00e6b733          	sltu	a4,a3,a4
1c008f18:	00f70333          	add	t1,a4,a5
1c008f1c:	01f6d793          	srli	a5,a3,0x1f
1c008f20:	0306                	slli	t1,t1,0x1
1c008f22:	0067e333          	or	t1,a5,t1
1c008f26:	0686                	slli	a3,a3,0x1
1c008f28:	157d                	addi	a0,a0,-1
1c008f2a:	fe6ef9e3          	bleu	t1,t4,1c008f1c <pos_libc_prf+0x62a>
1c008f2e:	faa042e3          	bgtz	a0,1c008ed2 <pos_libc_prf+0x5e0>
1c008f32:	4611                	li	a2,4
1c008f34:	8e09                	sub	a2,a2,a0
1c008f36:	012640fb          	lp.setup	x1,a2,1c008f5a <pos_libc_prf+0x668>
1c008f3a:	01f31713          	slli	a4,t1,0x1f
1c008f3e:	0016d793          	srli	a5,a3,0x1
1c008f42:	8fd9                	or	a5,a5,a4
1c008f44:	fc16b6b3          	p.bclr	a3,a3,30,1
1c008f48:	00f68eb3          	add	t4,a3,a5
1c008f4c:	00135313          	srli	t1,t1,0x1
1c008f50:	00deb6b3          	sltu	a3,t4,a3
1c008f54:	00668533          	add	a0,a3,t1
1c008f58:	832a                	mv	t1,a0
1c008f5a:	86f6                	mv	a3,t4
1c008f5c:	06700693          	li	a3,103
1c008f60:	6c0a4e63          	bltz	s4,1c00963c <pos_libc_prf+0xd4a>
1c008f64:	62d48863          	beq	s1,a3,1c009594 <pos_libc_prf+0xca2>
1c008f68:	04700693          	li	a3,71
1c008f6c:	62d48463          	beq	s1,a3,1c009594 <pos_libc_prf+0xca2>
1c008f70:	06600693          	li	a3,102
1c008f74:	78d48963          	beq	s1,a3,1c009706 <pos_libc_prf+0xe14>
1c008f78:	001a0f13          	addi	t5,s4,1
1c008f7c:	45c1                	li	a1,16
1c008f7e:	04bf4f33          	p.min	t5,t5,a1
1c008f82:	1f7d                	addi	t5,t5,-1
1c008f84:	4e01                	li	t3,0
1c008f86:	4581                	li	a1,0
1c008f88:	080006b7          	lui	a3,0x8000
1c008f8c:	4f95                	li	t6,5
1c008f8e:	0f05                	addi	t5,t5,1
1c008f90:	02ff40fb          	lp.setup	x1,t5,1c008fee <pos_libc_prf+0x6fc>
1c008f94:	00258713          	addi	a4,a1,2
1c008f98:	00b737b3          	sltu	a5,a4,a1
1c008f9c:	97b6                	add	a5,a5,a3
1c008f9e:	03f7d5b3          	divu	a1,a5,t6
1c008fa2:	00375613          	srli	a2,a4,0x3
1c008fa6:	00259693          	slli	a3,a1,0x2
1c008faa:	96ae                	add	a3,a3,a1
1c008fac:	8f95                	sub	a5,a5,a3
1c008fae:	07f6                	slli	a5,a5,0x1d
1c008fb0:	8e5d                	or	a2,a2,a5
1c008fb2:	03f65633          	divu	a2,a2,t6
1c008fb6:	00361693          	slli	a3,a2,0x3
1c008fba:	00561793          	slli	a5,a2,0x5
1c008fbe:	97b6                	add	a5,a5,a3
1c008fc0:	40f707b3          	sub	a5,a4,a5
1c008fc4:	03f7d7b3          	divu	a5,a5,t6
1c008fc8:	01d65713          	srli	a4,a2,0x1d
1c008fcc:	972e                	add	a4,a4,a1
1c008fce:	96be                	add	a3,a3,a5
1c008fd0:	00f6b7b3          	sltu	a5,a3,a5
1c008fd4:	973e                	add	a4,a4,a5
1c008fd6:	01f71613          	slli	a2,a4,0x1f
1c008fda:	0016d793          	srli	a5,a3,0x1
1c008fde:	8fd1                	or	a5,a5,a2
1c008fe0:	fc16b6b3          	p.bclr	a3,a3,30,1
1c008fe4:	00f685b3          	add	a1,a3,a5
1c008fe8:	8305                	srli	a4,a4,0x1
1c008fea:	00d5b6b3          	sltu	a3,a1,a3
1c008fee:	96ba                	add	a3,a3,a4
1c008ff0:	95f6                	add	a1,a1,t4
1c008ff2:	96aa                	add	a3,a3,a0
1c008ff4:	01d5beb3          	sltu	t4,a1,t4
1c008ff8:	00de8533          	add	a0,t4,a3
1c008ffc:	f6053633          	p.bclr	a2,a0,27,0
1c009000:	86ae                	mv	a3,a1
1c009002:	c22d                	beqz	a2,1c009064 <pos_libc_prf+0x772>
1c009004:	00258613          	addi	a2,a1,2
1c009008:	00b636b3          	sltu	a3,a2,a1
1c00900c:	96aa                	add	a3,a3,a0
1c00900e:	4e95                	li	t4,5
1c009010:	03d6d333          	divu	t1,a3,t4
1c009014:	00365513          	srli	a0,a2,0x3
1c009018:	0805                	addi	a6,a6,1
1c00901a:	00231593          	slli	a1,t1,0x2
1c00901e:	959a                	add	a1,a1,t1
1c009020:	8e8d                	sub	a3,a3,a1
1c009022:	06f6                	slli	a3,a3,0x1d
1c009024:	8d55                	or	a0,a0,a3
1c009026:	03d55533          	divu	a0,a0,t4
1c00902a:	00351593          	slli	a1,a0,0x3
1c00902e:	00551693          	slli	a3,a0,0x5
1c009032:	96ae                	add	a3,a3,a1
1c009034:	40d606b3          	sub	a3,a2,a3
1c009038:	03d6d6b3          	divu	a3,a3,t4
1c00903c:	8175                	srli	a0,a0,0x1d
1c00903e:	951a                	add	a0,a0,t1
1c009040:	95b6                	add	a1,a1,a3
1c009042:	00d5b6b3          	sltu	a3,a1,a3
1c009046:	00a68633          	add	a2,a3,a0
1c00904a:	01f61513          	slli	a0,a2,0x1f
1c00904e:	0015d693          	srli	a3,a1,0x1
1c009052:	8ec9                	or	a3,a3,a0
1c009054:	fc15b5b3          	p.bclr	a1,a1,30,1
1c009058:	96ae                	add	a3,a3,a1
1c00905a:	8205                	srli	a2,a2,0x1
1c00905c:	00b6b5b3          	sltu	a1,a3,a1
1c009060:	00c58533          	add	a0,a1,a2
1c009064:	06600593          	li	a1,102
1c009068:	00188613          	addi	a2,a7,1
1c00906c:	60b48463          	beq	s1,a1,1c009674 <pos_libc_prf+0xd82>
1c009070:	00269593          	slli	a1,a3,0x2
1c009074:	01e6de93          	srli	t4,a3,0x1e
1c009078:	00251313          	slli	t1,a0,0x2
1c00907c:	96ae                	add	a3,a3,a1
1c00907e:	006ee333          	or	t1,t4,t1
1c009082:	00b6b5b3          	sltu	a1,a3,a1
1c009086:	951a                	add	a0,a0,t1
1c009088:	952e                	add	a0,a0,a1
1c00908a:	0506                	slli	a0,a0,0x1
1c00908c:	01f6d593          	srli	a1,a3,0x1f
1c009090:	8d4d                	or	a0,a0,a1
1c009092:	01c55593          	srli	a1,a0,0x1c
1c009096:	03058313          	addi	t1,a1,48
1c00909a:	47b2                	lw	a5,12(sp)
1c00909c:	10000737          	lui	a4,0x10000
1c0090a0:	00b035b3          	snez	a1,a1
1c0090a4:	177d                	addi	a4,a4,-1
1c0090a6:	00688023          	sb	t1,0(a7)
1c0090aa:	0686                	slli	a3,a3,0x1
1c0090ac:	8d79                	and	a0,a0,a4
1c0090ae:	40b80833          	sub	a6,a6,a1
1c0090b2:	5a078863          	beqz	a5,1c009662 <pos_libc_prf+0xd70>
1c0090b6:	02e00613          	li	a2,46
1c0090ba:	00c880a3          	sb	a2,1(a7)
1c0090be:	00288613          	addi	a2,a7,2
1c0090c2:	040a0b63          	beqz	s4,1c009118 <pos_libc_prf+0x826>
1c0090c6:	8332                	mv	t1,a2
1c0090c8:	9a32                	add	s4,s4,a2
1c0090ca:	4ebd                	li	t4,15
1c0090cc:	03000f13          	li	t5,48
1c0090d0:	00269793          	slli	a5,a3,0x2
1c0090d4:	01e6d593          	srli	a1,a3,0x1e
1c0090d8:	00251713          	slli	a4,a0,0x2
1c0090dc:	00d78633          	add	a2,a5,a3
1c0090e0:	8f4d                	or	a4,a4,a1
1c0090e2:	972a                	add	a4,a4,a0
1c0090e4:	00f637b3          	sltu	a5,a2,a5
1c0090e8:	97ba                	add	a5,a5,a4
1c0090ea:	0786                	slli	a5,a5,0x1
1c0090ec:	01f65713          	srli	a4,a2,0x1f
1c0090f0:	8fd9                	or	a5,a5,a4
1c0090f2:	01c7d713          	srli	a4,a5,0x1c
1c0090f6:	03070713          	addi	a4,a4,48 # 10000030 <ne16_scale0+0x2c>
1c0090fa:	2fd05463          	blez	t4,1c0093e2 <pos_libc_prf+0xaf0>
1c0090fe:	100005b7          	lui	a1,0x10000
1c009102:	15fd                	addi	a1,a1,-1
1c009104:	00e300ab          	p.sb	a4,1(t1!)
1c009108:	1efd                	addi	t4,t4,-1
1c00910a:	00161693          	slli	a3,a2,0x1
1c00910e:	00b7f533          	and	a0,a5,a1
1c009112:	fa6a1fe3          	bne	s4,t1,1c0090d0 <pos_libc_prf+0x7de>
1c009116:	8652                	mv	a2,s4
1c009118:	0c0e1163          	bnez	t3,1c0091da <pos_libc_prf+0x8e8>
1c00911c:	c054b6b3          	p.bclr	a3,s1,0,5
1c009120:	04500593          	li	a1,69
1c009124:	02b69963          	bne	a3,a1,1c009156 <pos_libc_prf+0x864>
1c009128:	87a6                	mv	a5,s1
1c00912a:	00f60023          	sb	a5,0(a2)
1c00912e:	5e084d63          	bltz	a6,1c009728 <pos_libc_prf+0xe36>
1c009132:	02b00793          	li	a5,43
1c009136:	00f600a3          	sb	a5,1(a2)
1c00913a:	47a9                	li	a5,10
1c00913c:	02f846b3          	div	a3,a6,a5
1c009140:	0611                	addi	a2,a2,4
1c009142:	02f867b3          	rem	a5,a6,a5
1c009146:	03068693          	addi	a3,a3,48 # 8000030 <__l1_heap_size+0x7fe449c>
1c00914a:	fed60f23          	sb	a3,-2(a2)
1c00914e:	03078793          	addi	a5,a5,48
1c009152:	fef60fa3          	sb	a5,-1(a2)
1c009156:	00060023          	sb	zero,0(a2)
1c00915a:	419604b3          	sub	s1,a2,s9
1c00915e:	46d2                	lw	a3,20(sp)
1c009160:	4762                	lw	a4,24(sp)
1c009162:	8ed9                	or	a3,a3,a4
1c009164:	c636                	sw	a3,12(sp)
1c009166:	2a069463          	bnez	a3,1c00940e <pos_libc_prf+0xb1c>
1c00916a:	02414683          	lbu	a3,36(sp)
1c00916e:	02d00793          	li	a5,45
1c009172:	28f68e63          	beq	a3,a5,1c00940e <pos_libc_prf+0xb1c>
1c009176:	0c800793          	li	a5,200
1c00917a:	9c97dde3          	ble	s1,a5,1c008b54 <pos_libc_prf+0x262>
1c00917e:	547d                	li	s0,-1
1c009180:	fdeff06f          	j	1c00895e <pos_libc_prf+0x6c>
1c009184:	0305                	addi	t1,t1,1
1c009186:	00269793          	slli	a5,a3,0x2
1c00918a:	01e6d893          	srli	a7,a3,0x1e
1c00918e:	00251713          	slli	a4,a0,0x2
1c009192:	00d785b3          	add	a1,a5,a3
1c009196:	00e8e733          	or	a4,a7,a4
1c00919a:	972a                	add	a4,a4,a0
1c00919c:	00f5b7b3          	sltu	a5,a1,a5
1c0091a0:	97ba                	add	a5,a5,a4
1c0091a2:	0786                	slli	a5,a5,0x1
1c0091a4:	01f5d713          	srli	a4,a1,0x1f
1c0091a8:	8fd9                	or	a5,a5,a4
1c0091aa:	01c7d893          	srli	a7,a5,0x1c
1c0091ae:	03000713          	li	a4,48
1c0091b2:	01d05c63          	blez	t4,1c0091ca <pos_libc_prf+0x8d8>
1c0091b6:	00159693          	slli	a3,a1,0x1
1c0091ba:	100005b7          	lui	a1,0x10000
1c0091be:	15fd                	addi	a1,a1,-1
1c0091c0:	03088713          	addi	a4,a7,48
1c0091c4:	1efd                	addi	t4,t4,-1
1c0091c6:	00b7f533          	and	a0,a5,a1
1c0091ca:	fee30fa3          	sb	a4,-1(t1)
1c0091ce:	fa661be3          	bne	a2,t1,1c009184 <pos_libc_prf+0x892>
1c0091d2:	014f8633          	add	a2,t6,s4
1c0091d6:	f80e00e3          	beqz	t3,1c009156 <pos_libc_prf+0x864>
1c0091da:	03000513          	li	a0,48
1c0091de:	a011                	j	1c0091e2 <pos_libc_prf+0x8f0>
1c0091e0:	8636                	mv	a2,a3
1c0091e2:	fff60693          	addi	a3,a2,-1
1c0091e6:	0006c583          	lbu	a1,0(a3)
1c0091ea:	fea58be3          	beq	a1,a0,1c0091e0 <pos_libc_prf+0x8ee>
1c0091ee:	02e00513          	li	a0,46
1c0091f2:	f2a595e3          	bne	a1,a0,1c00911c <pos_libc_prf+0x82a>
1c0091f6:	8636                	mv	a2,a3
1c0091f8:	b715                	j	1c00911c <pos_libc_prf+0x82a>
1c0091fa:	00f680ab          	p.sb	a5,1(a3!)
1c0091fe:	8c051ce3          	bnez	a0,1c008ad6 <pos_libc_prf+0x1e4>
1c009202:	b8c5                	j	1c008af2 <pos_libc_prf+0x200>
1c009204:	8dba                	mv	s11,a4
1c009206:	f34ff06f          	j	1c00893a <pos_libc_prf+0x48>
1c00920a:	77e1                	lui	a5,0xffff8
1c00920c:	8307c793          	xori	a5,a5,-2000
1c009210:	02610693          	addi	a3,sp,38
1c009214:	000c2583          	lw	a1,0(s8)
1c009218:	02f11223          	sh	a5,36(sp)
1c00921c:	0c11                	addi	s8,s8,4
1c00921e:	87b6                	mv	a5,a3
1c009220:	48a5                	li	a7,9
1c009222:	f645b633          	p.bclr	a2,a1,27,4
1c009226:	0ff67713          	andi	a4,a2,255
1c00922a:	03070513          	addi	a0,a4,48
1c00922e:	8191                	srli	a1,a1,0x4
1c009230:	05770713          	addi	a4,a4,87
1c009234:	06c8e863          	bltu	a7,a2,1c0092a4 <pos_libc_prf+0x9b2>
1c009238:	00a780ab          	p.sb	a0,1(a5!) # ffff8001 <pulp__FC+0xffff8002>
1c00923c:	f1fd                	bnez	a1,1c009222 <pos_libc_prf+0x930>
1c00923e:	40d78733          	sub	a4,a5,a3
1c009242:	461d                	li	a2,7
1c009244:	02e64563          	blt	a2,a4,1c00926e <pos_libc_prf+0x97c>
1c009248:	1998                	addi	a4,sp,240
1c00924a:	40e78533          	sub	a0,a5,a4
1c00924e:	40f68633          	sub	a2,a3,a5
1c009252:	0cb50513          	addi	a0,a0,203
1c009256:	4821                	li	a6,8
1c009258:	03000593          	li	a1,48
1c00925c:	0621                	addi	a2,a2,8
1c00925e:	5aa84263          	blt	a6,a0,1c009802 <pos_libc_prf+0xf10>
1c009262:	004640fb          	lp.setup	x1,a2,1c00926a <pos_libc_prf+0x978>
1c009266:	00b780ab          	p.sb	a1,1(a5!)
1c00926a:	40d78733          	sub	a4,a5,a3
1c00926e:	fe078fab          	p.sb	zero,-1(a5!)
1c009272:	00f6fc63          	bleu	a5,a3,1c00928a <pos_libc_prf+0x998>
1c009276:	0006c583          	lbu	a1,0(a3)
1c00927a:	0007c603          	lbu	a2,0(a5)
1c00927e:	feb78fab          	p.sb	a1,-1(a5!)
1c009282:	00c680ab          	p.sb	a2,1(a3!)
1c009286:	fef6e8e3          	bltu	a3,a5,1c009276 <pos_libc_prf+0x984>
1c00928a:	00270493          	addi	s1,a4,2
1c00928e:	0c800793          	li	a5,200
1c009292:	17fa2963          	p.beqimm	s4,-1,1c009404 <pos_libc_prf+0xb12>
1c009296:	9c97c1e3          	blt	a5,s1,1c008c58 <pos_libc_prf+0x366>
1c00929a:	02000713          	li	a4,32
1c00929e:	c602                	sw	zero,12(sp)
1c0092a0:	c83a                	sw	a4,16(sp)
1c0092a2:	b84d                	j	1c008b54 <pos_libc_prf+0x262>
1c0092a4:	00e780ab          	p.sb	a4,1(a5!)
1c0092a8:	fdad                	bnez	a1,1c009222 <pos_libc_prf+0x930>
1c0092aa:	bf51                	j	1c00923e <pos_libc_prf+0x94c>
1c0092ac:	000c2783          	lw	a5,0(s8)
1c0092b0:	0c11                	addi	s8,s8,4
1c0092b2:	01b7a023          	sw	s11,0(a5)
1c0092b6:	e84ff06f          	j	1c00893a <pos_libc_prf+0x48>
1c0092ba:	06900693          	li	a3,105
1c0092be:	12d49863          	bne	s1,a3,1c0093ee <pos_libc_prf+0xafc>
1c0092c2:	000c2503          	lw	a0,0(s8)
1c0092c6:	0c11                	addi	s8,s8,4
1c0092c8:	34054d63          	bltz	a0,1c009622 <pos_libc_prf+0xd30>
1c0092cc:	4652                	lw	a2,20(sp)
1c0092ce:	86aa                	mv	a3,a0
1c0092d0:	2e061963          	bnez	a2,1c0095c2 <pos_libc_prf+0xcd0>
1c0092d4:	4762                	lw	a4,24(sp)
1c0092d6:	87e6                	mv	a5,s9
1c0092d8:	c719                	beqz	a4,1c0092e6 <pos_libc_prf+0x9f4>
1c0092da:	02000793          	li	a5,32
1c0092de:	02f10223          	sb	a5,36(sp)
1c0092e2:	02510793          	addi	a5,sp,37
1c0092e6:	873e                	mv	a4,a5
1c0092e8:	45a9                	li	a1,10
1c0092ea:	02b6f633          	remu	a2,a3,a1
1c0092ee:	02b6d6b3          	divu	a3,a3,a1
1c0092f2:	03060613          	addi	a2,a2,48
1c0092f6:	00c700ab          	p.sb	a2,1(a4!)
1c0092fa:	fae5                	bnez	a3,1c0092ea <pos_libc_prf+0x9f8>
1c0092fc:	40f706b3          	sub	a3,a4,a5
1c009300:	0146dc63          	ble	s4,a3,1c009318 <pos_libc_prf+0xa26>
1c009304:	40e786b3          	sub	a3,a5,a4
1c009308:	03000613          	li	a2,48
1c00930c:	96d2                	add	a3,a3,s4
1c00930e:	0046c0fb          	lp.setup	x1,a3,1c009316 <pos_libc_prf+0xa24>
1c009312:	00c700ab          	p.sb	a2,1(a4!)
1c009316:	0001                	nop
1c009318:	86ba                	mv	a3,a4
1c00931a:	fe068fab          	p.sb	zero,-1(a3!)
1c00931e:	00d7fc63          	bleu	a3,a5,1c009336 <pos_libc_prf+0xa44>
1c009322:	0007c583          	lbu	a1,0(a5)
1c009326:	0006c603          	lbu	a2,0(a3)
1c00932a:	feb68fab          	p.sb	a1,-1(a3!)
1c00932e:	00c780ab          	p.sb	a2,1(a5!)
1c009332:	fed7e8e3          	bltu	a5,a3,1c009322 <pos_libc_prf+0xa30>
1c009336:	47d2                	lw	a5,20(sp)
1c009338:	4662                	lw	a2,24(sp)
1c00933a:	419704b3          	sub	s1,a4,s9
1c00933e:	8fd1                	or	a5,a5,a2
1c009340:	c63e                	sw	a5,12(sp)
1c009342:	e399                	bnez	a5,1c009348 <pos_libc_prf+0xa56>
1c009344:	817d                	srli	a0,a0,0x1f
1c009346:	c62a                	sw	a0,12(sp)
1c009348:	e3fa27e3          	p.beqimm	s4,-1,1c009176 <pos_libc_prf+0x884>
1c00934c:	0c800793          	li	a5,200
1c009350:	9097c4e3          	blt	a5,s1,1c008c58 <pos_libc_prf+0x366>
1c009354:	02000713          	li	a4,32
1c009358:	c83a                	sw	a4,16(sp)
1c00935a:	ffaff06f          	j	1c008b54 <pos_libc_prf+0x262>
1c00935e:	000c2783          	lw	a5,0(s8)
1c009362:	020102a3          	sb	zero,37(sp)
1c009366:	0c11                	addi	s8,s8,4
1c009368:	02f10223          	sb	a5,36(sp)
1c00936c:	4485                	li	s1,1
1c00936e:	f16ff06f          	j	1c008a84 <pos_libc_prf+0x192>
1c009372:	000c2683          	lw	a3,0(s8)
1c009376:	87e6                	mv	a5,s9
1c009378:	0c11                	addi	s8,s8,4
1c00937a:	45a9                	li	a1,10
1c00937c:	02b6f733          	remu	a4,a3,a1
1c009380:	02b6d6b3          	divu	a3,a3,a1
1c009384:	03070713          	addi	a4,a4,48
1c009388:	00e780ab          	p.sb	a4,1(a5!)
1c00938c:	fae5                	bnez	a3,1c00937c <pos_libc_prf+0xa8a>
1c00938e:	419784b3          	sub	s1,a5,s9
1c009392:	0144dd63          	ble	s4,s1,1c0093ac <pos_libc_prf+0xaba>
1c009396:	40fc86b3          	sub	a3,s9,a5
1c00939a:	03000613          	li	a2,48
1c00939e:	96d2                	add	a3,a3,s4
1c0093a0:	0046c0fb          	lp.setup	x1,a3,1c0093a8 <pos_libc_prf+0xab6>
1c0093a4:	00c780ab          	p.sb	a2,1(a5!)
1c0093a8:	419784b3          	sub	s1,a5,s9
1c0093ac:	fe078fab          	p.sb	zero,-1(a5!)
1c0093b0:	00fcfd63          	bleu	a5,s9,1c0093ca <pos_libc_prf+0xad8>
1c0093b4:	86e6                	mv	a3,s9
1c0093b6:	0006c603          	lbu	a2,0(a3)
1c0093ba:	0007c703          	lbu	a4,0(a5)
1c0093be:	fec78fab          	p.sb	a2,-1(a5!)
1c0093c2:	00e680ab          	p.sb	a4,1(a3!)
1c0093c6:	fef6e8e3          	bltu	a3,a5,1c0093b6 <pos_libc_prf+0xac4>
1c0093ca:	0c800793          	li	a5,200
1c0093ce:	03fa2b63          	p.beqimm	s4,-1,1c009404 <pos_libc_prf+0xb12>
1c0093d2:	8897c3e3          	blt	a5,s1,1c008c58 <pos_libc_prf+0x366>
1c0093d6:	02000693          	li	a3,32
1c0093da:	c602                	sw	zero,12(sp)
1c0093dc:	c836                	sw	a3,16(sp)
1c0093de:	f76ff06f          	j	1c008b54 <pos_libc_prf+0x262>
1c0093e2:	01e300ab          	p.sb	t5,1(t1!)
1c0093e6:	ce6a15e3          	bne	s4,t1,1c0090d0 <pos_libc_prf+0x7de>
1c0093ea:	8652                	mv	a2,s4
1c0093ec:	b335                	j	1c009118 <pos_libc_prf+0x826>
1c0093ee:	0c800693          	li	a3,200
1c0093f2:	d496d463          	ble	s1,a3,1c00893a <pos_libc_prf+0x48>
1c0093f6:	547d                	li	s0,-1
1c0093f8:	d66ff06f          	j	1c00895e <pos_libc_prf+0x6c>
1c0093fc:	e60a5b63          	bgez	s4,1c008a72 <pos_libc_prf+0x180>
1c009400:	e76ff06f          	j	1c008a76 <pos_libc_prf+0x184>
1c009404:	8497cae3          	blt	a5,s1,1c008c58 <pos_libc_prf+0x366>
1c009408:	c602                	sw	zero,12(sp)
1c00940a:	f4aff06f          	j	1c008b54 <pos_libc_prf+0x262>
1c00940e:	0c800793          	li	a5,200
1c009412:	8497c3e3          	blt	a5,s1,1c008c58 <pos_libc_prf+0x366>
1c009416:	4685                	li	a3,1
1c009418:	c636                	sw	a3,12(sp)
1c00941a:	f3aff06f          	j	1c008b54 <pos_libc_prf+0x262>
1c00941e:	409909b3          	sub	s3,s2,s1
1c009422:	00148613          	addi	a2,s1,1
1c009426:	85e6                	mv	a1,s9
1c009428:	013c8533          	add	a0,s9,s3
1c00942c:	9e2ff0ef          	jal	ra,1c00860e <memmove>
1c009430:	46c2                	lw	a3,16(sp)
1c009432:	02000793          	li	a5,32
1c009436:	32f68b63          	beq	a3,a5,1c00976c <pos_libc_prf+0xe7a>
1c00943a:	4732                	lw	a4,12(sp)
1c00943c:	84ca                	mv	s1,s2
1c00943e:	99ba                	add	s3,s3,a4
1c009440:	ff375b63          	ble	s3,a4,1c008c36 <pos_libc_prf+0x344>
1c009444:	46b2                	lw	a3,12(sp)
1c009446:	4595                	li	a1,5
1c009448:	00dc87b3          	add	a5,s9,a3
1c00944c:	40f007b3          	neg	a5,a5
1c009450:	fa27b7b3          	p.bclr	a5,a5,29,2
1c009454:	00378613          	addi	a2,a5,3
1c009458:	fff98693          	addi	a3,s3,-1
1c00945c:	04b67633          	p.maxu	a2,a2,a1
1c009460:	8e99                	sub	a3,a3,a4
1c009462:	40e985b3          	sub	a1,s3,a4
1c009466:	06c6e763          	bltu	a3,a2,1c0094d4 <pos_libc_prf+0xbe2>
1c00946a:	863a                	mv	a2,a4
1c00946c:	cf95                	beqz	a5,1c0094a8 <pos_libc_prf+0xbb6>
1c00946e:	1990                	addi	a2,sp,240
1c009470:	00e606b3          	add	a3,a2,a4
1c009474:	4742                	lw	a4,16(sp)
1c009476:	f2e68a23          	sb	a4,-204(a3)
1c00947a:	46b2                	lw	a3,12(sp)
1c00947c:	00168613          	addi	a2,a3,1
1c009480:	0217a463          	p.beqimm	a5,1,1c0094a8 <pos_libc_prf+0xbb6>
1c009484:	86ba                	mv	a3,a4
1c009486:	1998                	addi	a4,sp,240
1c009488:	963a                	add	a2,a2,a4
1c00948a:	4732                	lw	a4,12(sp)
1c00948c:	f2d60a23          	sb	a3,-204(a2)
1c009490:	00270613          	addi	a2,a4,2
1c009494:	0037ba63          	p.bneimm	a5,3,1c0094a8 <pos_libc_prf+0xbb6>
1c009498:	8736                	mv	a4,a3
1c00949a:	1994                	addi	a3,sp,240
1c00949c:	9636                	add	a2,a2,a3
1c00949e:	46b2                	lw	a3,12(sp)
1c0094a0:	f2e60a23          	sb	a4,-204(a2)
1c0094a4:	00368613          	addi	a2,a3,3
1c0094a8:	4732                	lw	a4,12(sp)
1c0094aa:	8d9d                	sub	a1,a1,a5
1c0094ac:	0025d693          	srli	a3,a1,0x2
1c0094b0:	97ba                	add	a5,a5,a4
1c0094b2:	4742                	lw	a4,16(sp)
1c0094b4:	97e6                	add	a5,a5,s9
1c0094b6:	00e05557          	pv.add.sc.b	a0,zero,a4
1c0094ba:	34068663          	beqz	a3,1c009806 <pos_libc_prf+0xf14>
1c0094be:	0046c0fb          	lp.setup	x1,a3,1c0094c6 <pos_libc_prf+0xbd4>
1c0094c2:	00a7a22b          	p.sw	a0,4(a5!)
1c0094c6:	0001                	nop
1c0094c8:	c205b7b3          	p.bclr	a5,a1,1,0
1c0094cc:	963e                	add	a2,a2,a5
1c0094ce:	c632                	sw	a2,12(sp)
1c0094d0:	f6b78263          	beq	a5,a1,1c008c34 <pos_libc_prf+0x342>
1c0094d4:	46b2                	lw	a3,12(sp)
1c0094d6:	4742                	lw	a4,16(sp)
1c0094d8:	198c                	addi	a1,sp,240
1c0094da:	00d587b3          	add	a5,a1,a3
1c0094de:	f2e78a23          	sb	a4,-204(a5)
1c0094e2:	00168793          	addi	a5,a3,1
1c0094e6:	f537d763          	ble	s3,a5,1c008c34 <pos_libc_prf+0x342>
1c0094ea:	97ae                	add	a5,a5,a1
1c0094ec:	f2e78a23          	sb	a4,-204(a5)
1c0094f0:	00268793          	addi	a5,a3,2
1c0094f4:	f537d063          	ble	s3,a5,1c008c34 <pos_libc_prf+0x342>
1c0094f8:	97ae                	add	a5,a5,a1
1c0094fa:	f2e78a23          	sb	a4,-204(a5)
1c0094fe:	00368793          	addi	a5,a3,3
1c009502:	f337d963          	ble	s3,a5,1c008c34 <pos_libc_prf+0x342>
1c009506:	97ae                	add	a5,a5,a1
1c009508:	f2e78a23          	sb	a4,-204(a5)
1c00950c:	00468793          	addi	a5,a3,4
1c009510:	f337d263          	ble	s3,a5,1c008c34 <pos_libc_prf+0x342>
1c009514:	97ae                	add	a5,a5,a1
1c009516:	f2e78a23          	sb	a4,-204(a5)
1c00951a:	00568a93          	addi	s5,a3,5
1c00951e:	f13adb63          	ble	s3,s5,1c008c34 <pos_libc_prf+0x342>
1c009522:	9aae                	add	s5,s5,a1
1c009524:	f2ea8a23          	sb	a4,-204(s5)
1c009528:	84ca                	mv	s1,s2
1c00952a:	f0cff06f          	j	1c008c36 <pos_libc_prf+0x344>
1c00952e:	4301                	li	t1,0
1c009530:	8666                	mv	a2,s9
1c009532:	da0ff06f          	j	1c008ad2 <pos_libc_prf+0x1e0>
1c009536:	02414783          	lbu	a5,36(sp)
1c00953a:	1054                	addi	a3,sp,36
1c00953c:	4665                	li	a2,25
1c00953e:	de078b63          	beqz	a5,1c008b34 <pos_libc_prf+0x242>
1c009542:	fe078593          	addi	a1,a5,-32
1c009546:	f9f78793          	addi	a5,a5,-97
1c00954a:	0ff7f793          	andi	a5,a5,255
1c00954e:	00f66963          	bltu	a2,a5,1c009560 <pos_libc_prf+0xc6e>
1c009552:	00b680ab          	p.sb	a1,1(a3!)
1c009556:	0006c783          	lbu	a5,0(a3)
1c00955a:	f7e5                	bnez	a5,1c009542 <pos_libc_prf+0xc50>
1c00955c:	dd8ff06f          	j	1c008b34 <pos_libc_prf+0x242>
1c009560:	0685                	addi	a3,a3,1
1c009562:	0006c783          	lbu	a5,0(a3)
1c009566:	fff1                	bnez	a5,1c009542 <pos_libc_prf+0xc50>
1c009568:	dccff06f          	j	1c008b34 <pos_libc_prf+0x242>
1c00956c:	ee97c663          	blt	a5,s1,1c008c58 <pos_libc_prf+0x366>
1c009570:	8c46                	mv	s8,a7
1c009572:	de2ff06f          	j	1c008b54 <pos_libc_prf+0x262>
1c009576:	020102a3          	sb	zero,37(sp)
1c00957a:	8c42                	mv	s8,a6
1c00957c:	44b2                	lw	s1,12(sp)
1c00957e:	d1fa2363          	p.beqimm	s4,-1,1c008a84 <pos_libc_prf+0x192>
1c009582:	02000693          	li	a3,32
1c009586:	c836                	sw	a3,16(sp)
1c009588:	cfcff06f          	j	1c008a84 <pos_libc_prf+0x192>
1c00958c:	8566                	mv	a0,s9
1c00958e:	86e6                	mv	a3,s9
1c009590:	fb6ff06f          	j	1c008d46 <pos_libc_prf+0x454>
1c009594:	4732                	lw	a4,12(sp)
1c009596:	4e01                	li	t3,0
1c009598:	e319                	bnez	a4,1c00959e <pos_libc_prf+0xcac>
1c00959a:	01403e33          	snez	t3,s4
1c00959e:	5675                	li	a2,-3
1c0095a0:	001a0693          	addi	a3,s4,1
1c0095a4:	00c84463          	blt	a6,a2,1c0095ac <pos_libc_prf+0xcba>
1c0095a8:	1706d063          	ble	a6,a3,1c009708 <pos_libc_prf+0xe16>
1c0095ac:	47c1                	li	a5,16
1c0095ae:	04f6cf33          	p.min	t5,a3,a5
1c0095b2:	06700693          	li	a3,103
1c0095b6:	1f7d                	addi	t5,t5,-1
1c0095b8:	1ed48a63          	beq	s1,a3,1c0097ac <pos_libc_prf+0xeba>
1c0095bc:	04500493          	li	s1,69
1c0095c0:	b2d9                	j	1c008f86 <pos_libc_prf+0x694>
1c0095c2:	02b00793          	li	a5,43
1c0095c6:	02f10223          	sb	a5,36(sp)
1c0095ca:	02510793          	addi	a5,sp,37
1c0095ce:	bb21                	j	1c0092e6 <pos_libc_prf+0x9f4>
1c0095d0:	8666                	mv	a2,s9
1c0095d2:	1a084063          	bltz	a6,1c009772 <pos_libc_prf+0xe80>
1c0095d6:	8ecd                	or	a3,a3,a1
1c0095d8:	fbf48793          	addi	a5,s1,-65
1c0095dc:	00360713          	addi	a4,a2,3
1c0095e0:	14069b63          	bnez	a3,1c009736 <pos_libc_prf+0xe44>
1c0095e4:	46e5                	li	a3,25
1c0095e6:	1af6e563          	bltu	a3,a5,1c009790 <pos_libc_prf+0xe9e>
1c0095ea:	6795                	lui	a5,0x5
1c0095ec:	e4978793          	addi	a5,a5,-439 # 4e49 <__cluster_text_size+0x4e49>
1c0095f0:	00f61023          	sh	a5,0(a2)
1c0095f4:	04600793          	li	a5,70
1c0095f8:	00f60123          	sb	a5,2(a2)
1c0095fc:	000601a3          	sb	zero,3(a2)
1c009600:	419704b3          	sub	s1,a4,s9
1c009604:	bea9                	j	1c00915e <pos_libc_prf+0x86c>
1c009606:	46d2                	lw	a3,20(sp)
1c009608:	14068463          	beqz	a3,1c009750 <pos_libc_prf+0xe5e>
1c00960c:	02b00693          	li	a3,43
1c009610:	02d10223          	sb	a3,36(sp)
1c009614:	02510893          	addi	a7,sp,37
1c009618:	4801                	li	a6,0
1c00961a:	4501                	li	a0,0
1c00961c:	4681                	li	a3,0
1c00961e:	4301                	li	t1,0
1c009620:	ba09                	j	1c008f32 <pos_libc_prf+0x640>
1c009622:	02d00793          	li	a5,45
1c009626:	02f10223          	sb	a5,36(sp)
1c00962a:	800007b7          	lui	a5,0x80000
1c00962e:	1af50963          	beq	a0,a5,1c0097e0 <pos_libc_prf+0xeee>
1c009632:	40a006b3          	neg	a3,a0
1c009636:	02510793          	addi	a5,sp,37
1c00963a:	b175                	j	1c0092e6 <pos_libc_prf+0x9f4>
1c00963c:	4a19                	li	s4,6
1c00963e:	92d495e3          	bne	s1,a3,1c008f68 <pos_libc_prf+0x676>
1c009642:	46b2                	lw	a3,12(sp)
1c009644:	57f5                	li	a5,-3
1c009646:	0016ce13          	xori	t3,a3,1
1c00964a:	14f85d63          	ble	a5,a6,1c0097a4 <pos_libc_prf+0xeb2>
1c00964e:	06500493          	li	s1,101
1c009652:	4f19                	li	t5,6
1c009654:	ba0d                	j	1c008f86 <pos_libc_prf+0x694>
1c009656:	e097c163          	blt	a5,s1,1c008c58 <pos_libc_prf+0x366>
1c00965a:	8c42                	mv	s8,a6
1c00965c:	c602                	sw	zero,12(sp)
1c00965e:	cf6ff06f          	j	1c008b54 <pos_libc_prf+0x262>
1c009662:	aa0a0be3          	beqz	s4,1c009118 <pos_libc_prf+0x826>
1c009666:	02e00593          	li	a1,46
1c00966a:	00288613          	addi	a2,a7,2
1c00966e:	00b880a3          	sb	a1,1(a7)
1c009672:	bc91                	j	1c0090c6 <pos_libc_prf+0x7d4>
1c009674:	17005b63          	blez	a6,1c0097ea <pos_libc_prf+0xef8>
1c009678:	9846                	add	a6,a6,a7
1c00967a:	4ec1                	li	t4,16
1c00967c:	03000f13          	li	t5,48
1c009680:	00269793          	slli	a5,a3,0x2
1c009684:	01e6d593          	srli	a1,a3,0x1e
1c009688:	00251713          	slli	a4,a0,0x2
1c00968c:	00d78633          	add	a2,a5,a3
1c009690:	8f4d                	or	a4,a4,a1
1c009692:	972a                	add	a4,a4,a0
1c009694:	00f637b3          	sltu	a5,a2,a5
1c009698:	97ba                	add	a5,a5,a4
1c00969a:	0786                	slli	a5,a5,0x1
1c00969c:	01f65713          	srli	a4,a2,0x1f
1c0096a0:	8fd9                	or	a5,a5,a4
1c0096a2:	01c7d713          	srli	a4,a5,0x1c
1c0096a6:	03070713          	addi	a4,a4,48
1c0096aa:	05d05963          	blez	t4,1c0096fc <pos_libc_prf+0xe0a>
1c0096ae:	00e880ab          	p.sb	a4,1(a7!)
1c0096b2:	10000737          	lui	a4,0x10000
1c0096b6:	177d                	addi	a4,a4,-1
1c0096b8:	1efd                	addi	t4,t4,-1
1c0096ba:	00161693          	slli	a3,a2,0x1
1c0096be:	00e7f533          	and	a0,a5,a4
1c0096c2:	fb181fe3          	bne	a6,a7,1c009680 <pos_libc_prf+0xd8e>
1c0096c6:	8642                	mv	a2,a6
1c0096c8:	4801                	li	a6,0
1c0096ca:	47b2                	lw	a5,12(sp)
1c0096cc:	e399                	bnez	a5,1c0096d2 <pos_libc_prf+0xde0>
1c0096ce:	b00a04e3          	beqz	s4,1c0091d6 <pos_libc_prf+0x8e4>
1c0096d2:	00160f93          	addi	t6,a2,1
1c0096d6:	001a0593          	addi	a1,s4,1
1c0096da:	02e00893          	li	a7,46
1c0096de:	01160023          	sb	a7,0(a2)
1c0096e2:	837e                	mv	t1,t6
1c0096e4:	962e                	add	a2,a2,a1
1c0096e6:	03000593          	li	a1,48
1c0096ea:	aec304e3          	beq	t1,a2,1c0091d2 <pos_libc_prf+0x8e0>
1c0096ee:	0305                	addi	t1,t1,1
1c0096f0:	a8080be3          	beqz	a6,1c009186 <pos_libc_prf+0x894>
1c0096f4:	feb30fa3          	sb	a1,-1(t1)
1c0096f8:	0805                	addi	a6,a6,1
1c0096fa:	bfc5                	j	1c0096ea <pos_libc_prf+0xdf8>
1c0096fc:	01e880ab          	p.sb	t5,1(a7!)
1c009700:	f91810e3          	bne	a6,a7,1c009680 <pos_libc_prf+0xd8e>
1c009704:	b7c9                	j	1c0096c6 <pos_libc_prf+0xdd4>
1c009706:	4e01                	li	t3,0
1c009708:	014807b3          	add	a5,a6,s4
1c00970c:	0e07c563          	bltz	a5,1c0097f6 <pos_libc_prf+0xf04>
1c009710:	4641                	li	a2,16
1c009712:	04c7cf33          	p.min	t5,a5,a2
1c009716:	1f7d                	addi	t5,t5,-1
1c009718:	06600493          	li	s1,102
1c00971c:	860795e3          	bnez	a5,1c008f86 <pos_libc_prf+0x694>
1c009720:	4581                	li	a1,0
1c009722:	080006b7          	lui	a3,0x8000
1c009726:	b0e9                	j	1c008ff0 <pos_libc_prf+0x6fe>
1c009728:	02d00793          	li	a5,45
1c00972c:	41000833          	neg	a6,a6
1c009730:	00f600a3          	sb	a5,1(a2)
1c009734:	b419                	j	1c00913a <pos_libc_prf+0x848>
1c009736:	46e5                	li	a3,25
1c009738:	06f6ee63          	bltu	a3,a5,1c0097b4 <pos_libc_prf+0xec2>
1c00973c:	6791                	lui	a5,0x4
1c00973e:	14e78793          	addi	a5,a5,334 # 414e <__cluster_text_size+0x414e>
1c009742:	00f61023          	sh	a5,0(a2)
1c009746:	04e00793          	li	a5,78
1c00974a:	00f60123          	sb	a5,2(a2)
1c00974e:	b57d                	j	1c0095fc <pos_libc_prf+0xd0a>
1c009750:	47e2                	lw	a5,24(sp)
1c009752:	cfc5                	beqz	a5,1c00980a <pos_libc_prf+0xf18>
1c009754:	02000693          	li	a3,32
1c009758:	02d10223          	sb	a3,36(sp)
1c00975c:	02510893          	addi	a7,sp,37
1c009760:	4801                	li	a6,0
1c009762:	4501                	li	a0,0
1c009764:	4681                	li	a3,0
1c009766:	4301                	li	t1,0
1c009768:	fcaff06f          	j	1c008f32 <pos_libc_prf+0x640>
1c00976c:	c602                	sw	zero,12(sp)
1c00976e:	4732                	lw	a4,12(sp)
1c009770:	b9d1                	j	1c009444 <pos_libc_prf+0xb52>
1c009772:	02d00613          	li	a2,45
1c009776:	02c10223          	sb	a2,36(sp)
1c00977a:	02510613          	addi	a2,sp,37
1c00977e:	bda1                	j	1c0095d6 <pos_libc_prf+0xce4>
1c009780:	02d00613          	li	a2,45
1c009784:	02c10223          	sb	a2,36(sp)
1c009788:	02510893          	addi	a7,sp,37
1c00978c:	ec6ff06f          	j	1c008e52 <pos_libc_prf+0x560>
1c009790:	679d                	lui	a5,0x7
1c009792:	e6978793          	addi	a5,a5,-407 # 6e69 <__cluster_text_size+0x6e69>
1c009796:	00f61023          	sh	a5,0(a2)
1c00979a:	06600793          	li	a5,102
1c00979e:	00f60123          	sb	a5,2(a2)
1c0097a2:	bda9                	j	1c0095fc <pos_libc_prf+0xd0a>
1c0097a4:	479d                	li	a5,7
1c0097a6:	f707d1e3          	ble	a6,a5,1c009708 <pos_libc_prf+0xe16>
1c0097aa:	4f19                	li	t5,6
1c0097ac:	06500493          	li	s1,101
1c0097b0:	fd6ff06f          	j	1c008f86 <pos_libc_prf+0x694>
1c0097b4:	6799                	lui	a5,0x6
1c0097b6:	16e78793          	addi	a5,a5,366 # 616e <__cluster_text_size+0x616e>
1c0097ba:	00f61023          	sh	a5,0(a2)
1c0097be:	06e00793          	li	a5,110
1c0097c2:	00f60123          	sb	a5,2(a2)
1c0097c6:	bd1d                	j	1c0095fc <pos_libc_prf+0xd0a>
1c0097c8:	47e2                	lw	a5,24(sp)
1c0097ca:	88e6                	mv	a7,s9
1c0097cc:	e8078363          	beqz	a5,1c008e52 <pos_libc_prf+0x560>
1c0097d0:	02000613          	li	a2,32
1c0097d4:	02c10223          	sb	a2,36(sp)
1c0097d8:	02510893          	addi	a7,sp,37
1c0097dc:	e76ff06f          	j	1c008e52 <pos_libc_prf+0x560>
1c0097e0:	800006b7          	lui	a3,0x80000
1c0097e4:	02510793          	addi	a5,sp,37
1c0097e8:	bcfd                	j	1c0092e6 <pos_libc_prf+0x9f4>
1c0097ea:	03000593          	li	a1,48
1c0097ee:	00b88023          	sb	a1,0(a7)
1c0097f2:	4ec1                	li	t4,16
1c0097f4:	bdd9                	j	1c0096ca <pos_libc_prf+0xdd8>
1c0097f6:	06600493          	li	s1,102
1c0097fa:	b71d                	j	1c009720 <pos_libc_prf+0xe2e>
1c0097fc:	4685                	li	a3,1
1c0097fe:	bc4ff06f          	j	1c008bc2 <pos_libc_prf+0x2d0>
1c009802:	4605                	li	a2,1
1c009804:	bcb9                	j	1c009262 <pos_libc_prf+0x970>
1c009806:	4685                	li	a3,1
1c009808:	b95d                	j	1c0094be <pos_libc_prf+0xbcc>
1c00980a:	88e6                	mv	a7,s9
1c00980c:	bf91                	j	1c009760 <pos_libc_prf+0xe6e>

1c00980e <pos_init_start>:
1c00980e:	1141                	addi	sp,sp,-16
1c009810:	c422                	sw	s0,8(sp)
1c009812:	1c000437          	lui	s0,0x1c000
1c009816:	c606                	sw	ra,12(sp)
1c009818:	00840413          	addi	s0,s0,8 # 1c000008 <ctor_list>
1c00981c:	c89fe0ef          	jal	ra,1c0084a4 <pos_soc_init>
1c009820:	2279                	jal	1c0099ae <pos_irq_init>
1c009822:	2ac1                	jal	1c0099f2 <pos_soc_event_init>
1c009824:	20e5                	jal	1c00990c <pos_allocs_init>
1c009826:	405c                	lw	a5,4(s0)
1c009828:	c791                	beqz	a5,1c009834 <pos_init_start+0x26>
1c00982a:	0421                	addi	s0,s0,8
1c00982c:	9782                	jalr	a5
1c00982e:	0044278b          	p.lw	a5,4(s0!)
1c009832:	ffed                	bnez	a5,1c00982c <pos_init_start+0x1e>
1c009834:	888ff0ef          	jal	ra,1c0088bc <pos_io_start>
1c009838:	300467f3          	csrrsi	a5,mstatus,8
1c00983c:	f1402573          	csrr	a0,mhartid
1c009840:	8515                	srai	a0,a0,0x5
1c009842:	f2653533          	p.bclr	a0,a0,25,6
1c009846:	47fd                	li	a5,31
1c009848:	00f50a63          	beq	a0,a5,1c00985c <pos_init_start+0x4e>
1c00984c:	4422                	lw	s0,8(sp)
1c00984e:	40b2                	lw	ra,12(sp)
1c009850:	1c0085b7          	lui	a1,0x1c008
1c009854:	3f858593          	addi	a1,a1,1016 # 1c0083f8 <main>
1c009858:	0141                	addi	sp,sp,16
1c00985a:	a405                	j	1c009a7a <cluster_start>
1c00985c:	40b2                	lw	ra,12(sp)
1c00985e:	4422                	lw	s0,8(sp)
1c009860:	0141                	addi	sp,sp,16
1c009862:	8082                	ret

1c009864 <pos_init_stop>:
1c009864:	1141                	addi	sp,sp,-16
1c009866:	c422                	sw	s0,8(sp)
1c009868:	1c000437          	lui	s0,0x1c000
1c00986c:	c606                	sw	ra,12(sp)
1c00986e:	01440413          	addi	s0,s0,20 # 1c000014 <dtor_list>
1c009872:	84eff0ef          	jal	ra,1c0088c0 <pos_io_stop>
1c009876:	405c                	lw	a5,4(s0)
1c009878:	c791                	beqz	a5,1c009884 <pos_init_stop+0x20>
1c00987a:	0421                	addi	s0,s0,8
1c00987c:	9782                	jalr	a5
1c00987e:	0044278b          	p.lw	a5,4(s0!)
1c009882:	ffed                	bnez	a5,1c00987c <pos_init_stop+0x18>
1c009884:	40b2                	lw	ra,12(sp)
1c009886:	4422                	lw	s0,8(sp)
1c009888:	0141                	addi	sp,sp,16
1c00988a:	8082                	ret

1c00988c <pos_alloc_init>:
1c00988c:	00758793          	addi	a5,a1,7
1c009890:	c407b7b3          	p.bclr	a5,a5,2,0
1c009894:	40b785b3          	sub	a1,a5,a1
1c009898:	c11c                	sw	a5,0(a0)
1c00989a:	8e0d                	sub	a2,a2,a1
1c00989c:	00c05763          	blez	a2,1c0098aa <pos_alloc_init+0x1e>
1c0098a0:	c4063633          	p.bclr	a2,a2,2,0
1c0098a4:	c390                	sw	a2,0(a5)
1c0098a6:	0007a223          	sw	zero,4(a5)
1c0098aa:	8082                	ret

1c0098ac <pos_alloc>:
1c0098ac:	4110                	lw	a2,0(a0)
1c0098ae:	059d                	addi	a1,a1,7
1c0098b0:	c405b5b3          	p.bclr	a1,a1,2,0
1c0098b4:	ca31                	beqz	a2,1c009908 <pos_alloc+0x5c>
1c0098b6:	4218                	lw	a4,0(a2)
1c0098b8:	425c                	lw	a5,4(a2)
1c0098ba:	02b75963          	ble	a1,a4,1c0098ec <pos_alloc+0x40>
1c0098be:	cb81                	beqz	a5,1c0098ce <pos_alloc+0x22>
1c0098c0:	4398                	lw	a4,0(a5)
1c0098c2:	43d4                	lw	a3,4(a5)
1c0098c4:	00b75763          	ble	a1,a4,1c0098d2 <pos_alloc+0x26>
1c0098c8:	863e                	mv	a2,a5
1c0098ca:	87b6                	mv	a5,a3
1c0098cc:	fbf5                	bnez	a5,1c0098c0 <pos_alloc+0x14>
1c0098ce:	853e                	mv	a0,a5
1c0098d0:	8082                	ret
1c0098d2:	00b70a63          	beq	a4,a1,1c0098e6 <pos_alloc+0x3a>
1c0098d6:	00b78533          	add	a0,a5,a1
1c0098da:	8f0d                	sub	a4,a4,a1
1c0098dc:	c118                	sw	a4,0(a0)
1c0098de:	c154                	sw	a3,4(a0)
1c0098e0:	c248                	sw	a0,4(a2)
1c0098e2:	853e                	mv	a0,a5
1c0098e4:	8082                	ret
1c0098e6:	c254                	sw	a3,4(a2)
1c0098e8:	853e                	mv	a0,a5
1c0098ea:	8082                	ret
1c0098ec:	00e58b63          	beq	a1,a4,1c009902 <pos_alloc+0x56>
1c0098f0:	00b606b3          	add	a3,a2,a1
1c0098f4:	8f0d                	sub	a4,a4,a1
1c0098f6:	c2dc                	sw	a5,4(a3)
1c0098f8:	c298                	sw	a4,0(a3)
1c0098fa:	87b2                	mv	a5,a2
1c0098fc:	c114                	sw	a3,0(a0)
1c0098fe:	853e                	mv	a0,a5
1c009900:	8082                	ret
1c009902:	c11c                	sw	a5,0(a0)
1c009904:	87b2                	mv	a5,a2
1c009906:	b7e1                	j	1c0098ce <pos_alloc+0x22>
1c009908:	4781                	li	a5,0
1c00990a:	b7d1                	j	1c0098ce <pos_alloc+0x22>

1c00990c <pos_allocs_init>:
1c00990c:	1141                	addi	sp,sp,-16
1c00990e:	1c0015b7          	lui	a1,0x1c001
1c009912:	c606                	sw	ra,12(sp)
1c009914:	96c58793          	addi	a5,a1,-1684 # 1c00096c <__l2_priv0_end>
1c009918:	1c008637          	lui	a2,0x1c008
1c00991c:	04c7cc63          	blt	a5,a2,1c009974 <pos_allocs_init+0x68>
1c009920:	4581                	li	a1,0
1c009922:	4601                	li	a2,0
1c009924:	1c001537          	lui	a0,0x1c001
1c009928:	95c50513          	addi	a0,a0,-1700 # 1c00095c <pos_alloc_l2>
1c00992c:	3785                	jal	1c00988c <pos_alloc_init>
1c00992e:	1c00a5b7          	lui	a1,0x1c00a
1c009932:	b5058793          	addi	a5,a1,-1200 # 1c009b50 <__l2_priv1_end>
1c009936:	1c010637          	lui	a2,0x1c010
1c00993a:	02c7c963          	blt	a5,a2,1c00996c <pos_allocs_init+0x60>
1c00993e:	4581                	li	a1,0
1c009940:	4601                	li	a2,0
1c009942:	1c001537          	lui	a0,0x1c001
1c009946:	96050513          	addi	a0,a0,-1696 # 1c000960 <pos_alloc_l2+0x4>
1c00994a:	3789                	jal	1c00988c <pos_alloc_init>
1c00994c:	100245b7          	lui	a1,0x10024
1c009950:	40b2                	lw	ra,12(sp)
1c009952:	46c58793          	addi	a5,a1,1132 # 1002446c <__l2_shared_end>
1c009956:	1c080637          	lui	a2,0x1c080
1c00995a:	1c001537          	lui	a0,0x1c001
1c00995e:	8e1d                	sub	a2,a2,a5
1c009960:	46c58593          	addi	a1,a1,1132
1c009964:	96450513          	addi	a0,a0,-1692 # 1c000964 <pos_alloc_l2+0x8>
1c009968:	0141                	addi	sp,sp,16
1c00996a:	b70d                	j	1c00988c <pos_alloc_init>
1c00996c:	8e1d                	sub	a2,a2,a5
1c00996e:	b5058593          	addi	a1,a1,-1200
1c009972:	bfc1                	j	1c009942 <pos_allocs_init+0x36>
1c009974:	8e1d                	sub	a2,a2,a5
1c009976:	96c58593          	addi	a1,a1,-1684
1c00997a:	b76d                	j	1c009924 <pos_allocs_init+0x18>

1c00997c <alloc_init_l1>:
1c00997c:	100247b7          	lui	a5,0x10024
1c009980:	01651593          	slli	a1,a0,0x16
1c009984:	46c78793          	addi	a5,a5,1132 # 1002446c <__l2_shared_end>
1c009988:	95be                	add	a1,a1,a5
1c00998a:	1c0017b7          	lui	a5,0x1c001
1c00998e:	050a                	slli	a0,a0,0x2
1c009990:	6671                	lui	a2,0x1c
1c009992:	95878793          	addi	a5,a5,-1704 # 1c000958 <pos_alloc_l1>
1c009996:	b9460613          	addi	a2,a2,-1132 # 1bb94 <__l1_heap_size>
1c00999a:	953e                	add	a0,a0,a5
1c00999c:	bdc5                	j	1c00988c <pos_alloc_init>

1c00999e <pi_l1_malloc>:
1c00999e:	1c0017b7          	lui	a5,0x1c001
1c0099a2:	050a                	slli	a0,a0,0x2
1c0099a4:	95878793          	addi	a5,a5,-1704 # 1c000958 <pos_alloc_l1>
1c0099a8:	953e                	add	a0,a0,a5
1c0099aa:	b709                	j	1c0098ac <pos_alloc>

1c0099ac <__rt_handle_illegal_instr>:
1c0099ac:	8082                	ret

1c0099ae <pos_irq_init>:
1c0099ae:	f14027f3          	csrr	a5,mhartid
1c0099b2:	477d                	li	a4,31
1c0099b4:	ca5797b3          	p.extractu	a5,a5,5,5
1c0099b8:	00e78f63          	beq	a5,a4,1c0099d6 <pos_irq_init+0x28>
1c0099bc:	002047b7          	lui	a5,0x204
1c0099c0:	577d                	li	a4,-1
1c0099c2:	cb98                	sw	a4,16(a5)
1c0099c4:	1c0087b7          	lui	a5,0x1c008
1c0099c8:	00078793          	mv	a5,a5
1c0099cc:	c007c7b3          	p.bset	a5,a5,0,0
1c0099d0:	30579073          	csrw	mtvec,a5
1c0099d4:	8082                	ret
1c0099d6:	1a10a7b7          	lui	a5,0x1a10a
1c0099da:	577d                	li	a4,-1
1c0099dc:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa0e539c>
1c0099e0:	1c0087b7          	lui	a5,0x1c008
1c0099e4:	00078793          	mv	a5,a5
1c0099e8:	c007c7b3          	p.bset	a5,a5,0,0
1c0099ec:	30579073          	csrw	mtvec,a5
1c0099f0:	8082                	ret

1c0099f2 <pos_soc_event_init>:
1c0099f2:	1a1067b7          	lui	a5,0x1a106
1c0099f6:	577d                	li	a4,-1
1c0099f8:	00478693          	addi	a3,a5,4 # 1a106004 <__l2_shared_end+0xa0e1b98>
1c0099fc:	c298                	sw	a4,0(a3)
1c0099fe:	00878693          	addi	a3,a5,8
1c009a02:	c298                	sw	a4,0(a3)
1c009a04:	00c78693          	addi	a3,a5,12
1c009a08:	c298                	sw	a4,0(a3)
1c009a0a:	01078693          	addi	a3,a5,16
1c009a0e:	c298                	sw	a4,0(a3)
1c009a10:	01478693          	addi	a3,a5,20
1c009a14:	c298                	sw	a4,0(a3)
1c009a16:	01878693          	addi	a3,a5,24
1c009a1a:	c298                	sw	a4,0(a3)
1c009a1c:	01c78693          	addi	a3,a5,28
1c009a20:	c298                	sw	a4,0(a3)
1c009a22:	02078793          	addi	a5,a5,32
1c009a26:	c398                	sw	a4,0(a5)
1c009a28:	8082                	ret

1c009a2a <cluster_entry_stub>:
1c009a2a:	1141                	addi	sp,sp,-16
1c009a2c:	c606                	sw	ra,12(sp)
1c009a2e:	002047b7          	lui	a5,0x204
1c009a32:	00070737          	lui	a4,0x70
1c009a36:	c798                	sw	a4,8(a5)
1c009a38:	0ff00713          	li	a4,255
1c009a3c:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1e866c>
1c009a40:	00e7a023          	sw	a4,0(a5)
1c009a44:	00e7a623          	sw	a4,12(a5)
1c009a48:	1c0017b7          	lui	a5,0x1c001
1c009a4c:	9687a783          	lw	a5,-1688(a5) # 1c000968 <cluster_entry>
1c009a50:	9782                	jalr	a5
1c009a52:	f14027f3          	csrr	a5,mhartid
1c009a56:	f457b7b3          	p.bclr	a5,a5,26,5
1c009a5a:	eb89                	bnez	a5,1c009a6c <cluster_entry_stub+0x42>
1c009a5c:	1c001737          	lui	a4,0x1c001
1c009a60:	1c0017b7          	lui	a5,0x1c001
1c009a64:	94a72823          	sw	a0,-1712(a4) # 1c000950 <_edata>
1c009a68:	9407aa23          	sw	zero,-1708(a5) # 1c000954 <cluster_running>
1c009a6c:	002047b7          	lui	a5,0x204
1c009a70:	577d                	li	a4,-1
1c009a72:	c3d8                	sw	a4,4(a5)
1c009a74:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1e84a4>
1c009a78:	a001                	j	1c009a78 <cluster_entry_stub+0x4e>

1c009a7a <cluster_start>:
1c009a7a:	1141                	addi	sp,sp,-16
1c009a7c:	1c0017b7          	lui	a5,0x1c001
1c009a80:	c226                	sw	s1,4(sp)
1c009a82:	84aa                	mv	s1,a0
1c009a84:	4509                	li	a0,2
1c009a86:	96b7a423          	sw	a1,-1688(a5) # 1c000968 <cluster_entry>
1c009a8a:	c606                	sw	ra,12(sp)
1c009a8c:	c422                	sw	s0,8(sp)
1c009a8e:	96dfe0ef          	jal	ra,1c0083fa <pos_fll_init>
1c009a92:	8526                	mv	a0,s1
1c009a94:	35e5                	jal	1c00997c <alloc_init_l1>
1c009a96:	04048413          	addi	s0,s1,64
1c009a9a:	00201737          	lui	a4,0x201
1c009a9e:	40070713          	addi	a4,a4,1024 # 201400 <__l1_heap_size+0x1e586c>
1c009aa2:	045a                	slli	s0,s0,0x16
1c009aa4:	56fd                	li	a3,-1
1c009aa6:	f14027f3          	csrr	a5,mhartid
1c009aaa:	00d46723          	p.sw	a3,a4(s0)
1c009aae:	ca5797b3          	p.extractu	a5,a5,5,5
1c009ab2:	477d                	li	a4,31
1c009ab4:	00e78f63          	beq	a5,a4,1c009ad2 <cluster_start+0x58>
1c009ab8:	002047b7          	lui	a5,0x204
1c009abc:	00070737          	lui	a4,0x70
1c009ac0:	c798                	sw	a4,8(a5)
1c009ac2:	0ff00713          	li	a4,255
1c009ac6:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1e866c>
1c009aca:	00e7a023          	sw	a4,0(a5)
1c009ace:	00e7a623          	sw	a4,12(a5)
1c009ad2:	8526                	mv	a0,s1
1c009ad4:	3565                	jal	1c00997c <alloc_init_l1>
1c009ad6:	6591                	lui	a1,0x4
1c009ad8:	8526                	mv	a0,s1
1c009ada:	35d1                	jal	1c00999e <pi_l1_malloc>
1c009adc:	100247b7          	lui	a5,0x10024
1c009ae0:	46a7a423          	sw	a0,1128(a5) # 10024468 <cluster_stacks>
1c009ae4:	c12d                	beqz	a0,1c009b46 <cluster_start+0xcc>
1c009ae6:	1c001737          	lui	a4,0x1c001
1c009aea:	4685                	li	a3,1
1c009aec:	94d72a23          	sw	a3,-1708(a4) # 1c000954 <cluster_running>
1c009af0:	002007b7          	lui	a5,0x200
1c009af4:	1c008737          	lui	a4,0x1c008
1c009af8:	08070713          	addi	a4,a4,128 # 1c008080 <_start>
1c009afc:	04078693          	addi	a3,a5,64 # 200040 <__l1_heap_size+0x1e44ac>
1c009b00:	00e466a3          	p.sw	a4,a3(s0)
1c009b04:	04478693          	addi	a3,a5,68
1c009b08:	00e466a3          	p.sw	a4,a3(s0)
1c009b0c:	04878693          	addi	a3,a5,72
1c009b10:	00e466a3          	p.sw	a4,a3(s0)
1c009b14:	04c78693          	addi	a3,a5,76
1c009b18:	00e466a3          	p.sw	a4,a3(s0)
1c009b1c:	05078693          	addi	a3,a5,80
1c009b20:	00e466a3          	p.sw	a4,a3(s0)
1c009b24:	05478693          	addi	a3,a5,84
1c009b28:	00e466a3          	p.sw	a4,a3(s0)
1c009b2c:	05878693          	addi	a3,a5,88
1c009b30:	00e466a3          	p.sw	a4,a3(s0)
1c009b34:	05c78693          	addi	a3,a5,92
1c009b38:	00e466a3          	p.sw	a4,a3(s0)
1c009b3c:	07a1                	addi	a5,a5,8
1c009b3e:	0ff00713          	li	a4,255
1c009b42:	00e467a3          	p.sw	a4,a5(s0)
1c009b46:	40b2                	lw	ra,12(sp)
1c009b48:	4422                	lw	s0,8(sp)
1c009b4a:	4492                	lw	s1,4(sp)
1c009b4c:	0141                	addi	sp,sp,16
1c009b4e:	8082                	ret
make[1]: Leaving directory `/scratch/prasadar/siracusa-fe/regression_tests/ne_nn_patch/64x64x32x32_fs3_dw1_n32_q8_qw2_ap_and_32x32x16x16_fs3_pad_1111_nb1_ns1_qw8_q8_sr2'
