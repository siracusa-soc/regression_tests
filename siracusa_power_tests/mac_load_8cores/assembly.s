Flags : -O2 -fno-tree-loop-optimize -fno-tree-loop-distribute-patterns  -DNB_RUN=1  
make[1]: Entering directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/mac_load_8cores'
/usr/scratch/fenga5/beppe/INSTALL-PULP/bin/riscv32-unknown-elf-objdump -Mmarch=rv32imcXpulpnn  --disassembler-options="march=rv32imcXpulpnn" -d /scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/mac_load_8cores/build/test/test

/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/mac_load_8cores/build/test/test:     file format elf32-littleriscv


Disassembly of section .vectors:

1c008000 <__irq_vector_base>:
1c008000:	5680106f          	j	1c009568 <__rt_handle_illegal_instr>
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
1c008084:	4e40106f          	j	1c009568 <__rt_handle_illegal_instr>

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
1c0080b4:	5320106f          	j	1c0095e6 <cluster_entry_stub>

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
1c0080fc:	77028293          	addi	t0,t0,1904 # 1c000868 <_bss_start>
1c008100:	ffff8317          	auipc	t1,0xffff8
1c008104:	78430313          	addi	t1,t1,1924 # 1c000884 <__l2_priv0_end>
1c008108:	0002a023          	sw	zero,0(t0)
1c00810c:	0291                	addi	t0,t0,4
1c00810e:	fe62ede3          	bltu	t0,t1,1c008108 <_stext+0x24>
1c008112:	ffff8117          	auipc	sp,0xffff8
1c008116:	74e10113          	addi	sp,sp,1870 # 1c000860 <stack>
1c00811a:	2b0010ef          	jal	ra,1c0093ca <pos_init_start>
1c00811e:	00000513          	li	a0,0
1c008122:	00000593          	li	a1,0
1c008126:	00000397          	auipc	t2,0x0
1c00812a:	22a38393          	addi	t2,t2,554 # 1c008350 <main>
1c00812e:	000380e7          	jalr	t2
1c008132:	842a                	mv	s0,a0
1c008134:	2ec010ef          	jal	ra,1c009420 <pos_init_stop>
1c008138:	8522                	mv	a0,s0
1c00813a:	3c4000ef          	jal	ra,1c0084fe <exit>

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
1c00817e:	2e69                	jal	1c008518 <printf>
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
1c00819c:	1141                	addi	sp,sp,-16
1c00819e:	c422                	sw	s0,8(sp)
1c0081a0:	f1402473          	csrr	s0,mhartid
1c0081a4:	f4543433          	p.bclr	s0,s0,26,5
1c0081a8:	c606                	sw	ra,12(sp)
1c0081aa:	c226                	sw	s1,4(sp)
1c0081ac:	550010ef          	jal	ra,1c0096fc <synch_barrier>
1c0081b0:	54c010ef          	jal	ra,1c0096fc <synch_barrier>
1c0081b4:	e801                	bnez	s0,1c0081c4 <cluster_entry+0x28>
1c0081b6:	abbab7b7          	lui	a5,0xabbab
1c0081ba:	10000737          	lui	a4,0x10000
1c0081be:	bba78793          	addi	a5,a5,-1094 # abbaabba <pulp__FC+0xabbaabbb>
1c0081c2:	c31c                	sw	a5,0(a4)
1c0081c4:	100004b7          	lui	s1,0x10000
1c0081c8:	00448493          	addi	s1,s1,4 # 10000004 <buffer_im2col>
1c0081cc:	85a6                	mv	a1,s1
1c0081ce:	e0858077          	pv.smlsdotup.h	zero,a1,8
1c0081d2:	24048693          	addi	a3,s1,576
1c0081d6:	e1068077          	pv.smlsdotup.h	zero,a3,16
1c0081da:	36048713          	addi	a4,s1,864
1c0081de:	e1270077          	pv.smlsdotup.h	zero,a4,18
1c0081e2:	48048793          	addi	a5,s1,1152
1c0081e6:	e1478077          	pv.smlsdotup.h	zero,a5,20
1c0081ea:	5a048613          	addi	a2,s1,1440
1c0081ee:	e1660077          	pv.smlsdotup.h	zero,a2,22
1c0081f2:	4881                	li	a7,0
1c0081f4:	4301                	li	t1,0
1c0081f6:	4e01                	li	t3,0
1c0081f8:	4e81                	li	t4,0
1c0081fa:	4f01                	li	t5,0
1c0081fc:	4f81                	li	t6,0
1c0081fe:	4281                	li	t0,0
1c008200:	4381                	li	t2,0
1c008202:	12048513          	addi	a0,s1,288
1c008206:	048950fb          	lp.setupi	x1,72,1c00822a <cluster_entry+0x8e>
1c00820a:	e0950077          	pv.smlsdotup.h	zero,a0,9
1c00820e:	d80693f7          	pv.smlsdotsup.b	t2,a3,0
1c008212:	d82712f7          	pv.smlsdotsup.b	t0,a4,2
1c008216:	d8479ff7          	pv.smlsdotsup.b	t6,a5,4
1c00821a:	d8e59f77          	pv.smlsdotsup.b	t5,a1,14
1c00821e:	d9169ef7          	pv.smlsdotsup.b	t4,a3,17
1c008222:	d9371e77          	pv.smlsdotsup.b	t3,a4,19
1c008226:	d9579377          	pv.smlsdotsup.b	t1,a5,21
1c00822a:	d97618f7          	pv.smlsdotsup.b	a7,a2,23
1c00822e:	6c74a023          	sw	t2,1728(s1)
1c008232:	6c54a223          	sw	t0,1732(s1)
1c008236:	6df4a423          	sw	t6,1736(s1)
1c00823a:	6de4a623          	sw	t5,1740(s1)
1c00823e:	6dd4a823          	sw	t4,1744(s1)
1c008242:	6dc4aa23          	sw	t3,1748(s1)
1c008246:	6c64ac23          	sw	t1,1752(s1)
1c00824a:	6d14ae23          	sw	a7,1756(s1)
1c00824e:	4ae010ef          	jal	ra,1c0096fc <synch_barrier>
1c008252:	c809                	beqz	s0,1c008264 <cluster_entry+0xc8>
1c008254:	4a8010ef          	jal	ra,1c0096fc <synch_barrier>
1c008258:	40b2                	lw	ra,12(sp)
1c00825a:	4422                	lw	s0,8(sp)
1c00825c:	4492                	lw	s1,4(sp)
1c00825e:	4501                	li	a0,0
1c008260:	0141                	addi	sp,sp,16
1c008262:	8082                	ret
1c008264:	deadd7b7          	lui	a5,0xdeadd
1c008268:	aca78793          	addi	a5,a5,-1334 # deadcaca <pulp__FC+0xdeadcacb>
1c00826c:	10000437          	lui	s0,0x10000
1c008270:	c01c                	sw	a5,0(s0)
1c008272:	48a010ef          	jal	ra,1c0096fc <synch_barrier>
1c008276:	4621                	li	a2,8
1c008278:	6e048593          	addi	a1,s1,1760
1c00827c:	6c048513          	addi	a0,s1,1728
1c008280:	3d7d                	jal	1c00813e <checkInt>
1c008282:	c901                	beqz	a0,1c008292 <cluster_entry+0xf6>
1c008284:	4791                	li	a5,4
1c008286:	c01c                	sw	a5,0(s0)
1c008288:	40b2                	lw	ra,12(sp)
1c00828a:	4422                	lw	s0,8(sp)
1c00828c:	4492                	lw	s1,4(sp)
1c00828e:	0141                	addi	sp,sp,16
1c008290:	8082                	ret
1c008292:	4789                	li	a5,2
1c008294:	c01c                	sw	a5,0(s0)
1c008296:	40b2                	lw	ra,12(sp)
1c008298:	4422                	lw	s0,8(sp)
1c00829a:	4492                	lw	s1,4(sp)
1c00829c:	0141                	addi	sp,sp,16
1c00829e:	8082                	ret

1c0082a0 <run_test>:
1c0082a0:	102007b7          	lui	a5,0x10200
1c0082a4:	07e1                	addi	a5,a5,24
1c0082a6:	4398                	lw	a4,0(a5)
1c0082a8:	1141                	addi	sp,sp,-16
1c0082aa:	c0b74733          	p.bset	a4,a4,0,11
1c0082ae:	c398                	sw	a4,0(a5)
1c0082b0:	4398                	lw	a4,0(a5)
1c0082b2:	c0874733          	p.bset	a4,a4,0,8
1c0082b6:	c398                	sw	a4,0(a5)
1c0082b8:	4398                	lw	a4,0(a5)
1c0082ba:	ce073733          	p.bclr	a4,a4,7,0
1c0082be:	c398                	sw	a4,0(a5)
1c0082c0:	4398                	lw	a4,0(a5)
1c0082c2:	c0374733          	p.bset	a4,a4,0,3
1c0082c6:	c398                	sw	a4,0(a5)
1c0082c8:	102017b7          	lui	a5,0x10201
1c0082cc:	0007aa23          	sw	zero,20(a5) # 10201014 <__l2_shared_end+0x20090c>
1c0082d0:	c402                	sw	zero,8(sp)
1c0082d2:	4722                	lw	a4,8(sp)
1c0082d4:	47a5                	li	a5,9
1c0082d6:	00e7c963          	blt	a5,a4,1c0082e8 <run_test+0x48>
1c0082da:	4725                	li	a4,9
1c0082dc:	47a2                	lw	a5,8(sp)
1c0082de:	0785                	addi	a5,a5,1
1c0082e0:	c43e                	sw	a5,8(sp)
1c0082e2:	47a2                	lw	a5,8(sp)
1c0082e4:	fef75ce3          	ble	a5,a4,1c0082dc <run_test+0x3c>
1c0082e8:	102016b7          	lui	a3,0x10201
1c0082ec:	0006aa23          	sw	zero,20(a3) # 10201014 <__l2_shared_end+0x20090c>
1c0082f0:	6741                	lui	a4,0x10
1c0082f2:	02170613          	addi	a2,a4,33 # 10021 <__l1_heap_size+0x729>
1c0082f6:	02068793          	addi	a5,a3,32
1c0082fa:	02c7ae23          	sw	a2,60(a5)
1c0082fe:	00170613          	addi	a2,a4,1
1c008302:	04c7a023          	sw	a2,64(a5)
1c008306:	04c7a223          	sw	a2,68(a5)
1c00830a:	0709                	addi	a4,a4,2
1c00830c:	04e7a423          	sw	a4,72(a5)
1c008310:	04c7a623          	sw	a2,76(a5)
1c008314:	60000713          	li	a4,1536
1c008318:	04e7ae23          	sw	a4,92(a5)
1c00831c:	0006a0a3          	sw	zero,1(a3)
1c008320:	0006a023          	sw	zero,0(a3)
1c008324:	c602                	sw	zero,12(sp)
1c008326:	4732                	lw	a4,12(sp)
1c008328:	47a5                	li	a5,9
1c00832a:	00e7c963          	blt	a5,a4,1c00833c <run_test+0x9c>
1c00832e:	4725                	li	a4,9
1c008330:	47b2                	lw	a5,12(sp)
1c008332:	0785                	addi	a5,a5,1
1c008334:	c63e                	sw	a5,12(sp)
1c008336:	47b2                	lw	a5,12(sp)
1c008338:	fef75ce3          	ble	a5,a4,1c008330 <run_test+0x90>
1c00833c:	102017b7          	lui	a5,0x10201
1c008340:	20000713          	li	a4,512
1c008344:	02078793          	addi	a5,a5,32 # 10201020 <__l2_shared_end+0x200918>
1c008348:	04e7ae23          	sw	a4,92(a5)
1c00834c:	0141                	addi	sp,sp,16
1c00834e:	8082                	ret

1c008350 <main>:
1c008350:	1141                	addi	sp,sp,-16
1c008352:	c606                	sw	ra,12(sp)
1c008354:	37b1                	jal	1c0082a0 <run_test>
1c008356:	1c0085b7          	lui	a1,0x1c008
1c00835a:	19c58593          	addi	a1,a1,412 # 1c00819c <cluster_entry>
1c00835e:	4501                	li	a0,0
1c008360:	2d6010ef          	jal	ra,1c009636 <cluster_start>
1c008364:	4501                	li	a0,0
1c008366:	380010ef          	jal	ra,1c0096e6 <cluster_wait>
1c00836a:	40b2                	lw	ra,12(sp)
1c00836c:	4501                	li	a0,0
1c00836e:	0141                	addi	sp,sp,16
1c008370:	8082                	ret

1c008372 <pos_fll_init>:
1c008372:	08152063          	p.beqimm	a0,1,1c0083f2 <pos_fll_init+0x80>
1c008376:	04252a63          	p.beqimm	a0,2,1c0083ca <pos_fll_init+0x58>
1c00837a:	c505                	beqz	a0,1c0083a2 <pos_fll_init+0x30>
1c00837c:	4701                	li	a4,0
1c00837e:	00470793          	addi	a5,a4,4
1c008382:	05300613          	li	a2,83
1c008386:	00c70693          	addi	a3,a4,12
1c00838a:	c390                	sw	a2,0(a5)
1c00838c:	020c17b7          	lui	a5,0x20c1
1c008390:	0721                	addi	a4,a4,8
1c008392:	0006a023          	sw	zero,0(a3)
1c008396:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b1ee2>
1c00839a:	c31c                	sw	a5,0(a4)
1c00839c:	05f68537          	lui	a0,0x5f68
1c0083a0:	8082                	ret
1c0083a2:	1a1007b7          	lui	a5,0x1a100
1c0083a6:	00878713          	addi	a4,a5,8 # 1a100008 <__l2_shared_end+0xa0ff900>
1c0083aa:	00c78693          	addi	a3,a5,12
1c0083ae:	05300613          	li	a2,83
1c0083b2:	0791                	addi	a5,a5,4
1c0083b4:	c390                	sw	a2,0(a5)
1c0083b6:	020c17b7          	lui	a5,0x20c1
1c0083ba:	0006a023          	sw	zero,0(a3)
1c0083be:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b1ee2>
1c0083c2:	c31c                	sw	a5,0(a4)
1c0083c4:	05f68537          	lui	a0,0x5f68
1c0083c8:	8082                	ret
1c0083ca:	1a1007b7          	lui	a5,0x1a100
1c0083ce:	01878713          	addi	a4,a5,24 # 1a100018 <__l2_shared_end+0xa0ff910>
1c0083d2:	01c78693          	addi	a3,a5,28
1c0083d6:	05300613          	li	a2,83
1c0083da:	07d1                	addi	a5,a5,20
1c0083dc:	c390                	sw	a2,0(a5)
1c0083de:	020c17b7          	lui	a5,0x20c1
1c0083e2:	0006a023          	sw	zero,0(a3)
1c0083e6:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b1ee2>
1c0083ea:	c31c                	sw	a5,0(a4)
1c0083ec:	05f68537          	lui	a0,0x5f68
1c0083f0:	8082                	ret
1c0083f2:	1a1007b7          	lui	a5,0x1a100
1c0083f6:	02878713          	addi	a4,a5,40 # 1a100028 <__l2_shared_end+0xa0ff920>
1c0083fa:	02c78693          	addi	a3,a5,44
1c0083fe:	05300613          	li	a2,83
1c008402:	02478793          	addi	a5,a5,36
1c008406:	c390                	sw	a2,0(a5)
1c008408:	020c17b7          	lui	a5,0x20c1
1c00840c:	0006a023          	sw	zero,0(a3)
1c008410:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b1ee2>
1c008414:	c31c                	sw	a5,0(a4)
1c008416:	05f68537          	lui	a0,0x5f68
1c00841a:	8082                	ret

1c00841c <pos_soc_init>:
1c00841c:	8082                	ret

1c00841e <pos_wait_forever>:
1c00841e:	f14027f3          	csrr	a5,mhartid
1c008422:	477d                	li	a4,31
1c008424:	ca5797b3          	p.extractu	a5,a5,5,5
1c008428:	00e78963          	beq	a5,a4,1c00843a <pos_wait_forever+0x1c>
1c00842c:	002047b7          	lui	a5,0x204
1c008430:	577d                	li	a4,-1
1c008432:	c3d8                	sw	a4,4(a5)
1c008434:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f4740>
1c008438:	a001                	j	1c008438 <pos_wait_forever+0x1a>
1c00843a:	1a10a7b7          	lui	a5,0x1a10a
1c00843e:	577d                	li	a4,-1
1c008440:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa109100>
1c008444:	10500073          	wfi
1c008448:	10500073          	wfi
1c00844c:	bfe5                	j	1c008444 <pos_wait_forever+0x26>

1c00844e <memcpy>:
1c00844e:	00a5e7b3          	or	a5,a1,a0
1c008452:	fa27b7b3          	p.bclr	a5,a5,29,2
1c008456:	cf81                	beqz	a5,1c00846e <memcpy+0x20>
1c008458:	87aa                	mv	a5,a0
1c00845a:	ce0d                	beqz	a2,1c008494 <memcpy+0x46>
1c00845c:	006640fb          	lp.setup	x1,a2,1c008468 <memcpy+0x1a>
1c008460:	0005c703          	lbu	a4,0(a1)
1c008464:	0785                	addi	a5,a5,1
1c008466:	0585                	addi	a1,a1,1
1c008468:	fee78fa3          	sb	a4,-1(a5)
1c00846c:	8082                	ret
1c00846e:	fa2637b3          	p.bclr	a5,a2,29,2
1c008472:	ef99                	bnez	a5,1c008490 <memcpy+0x42>
1c008474:	de65                	beqz	a2,1c00846c <memcpy+0x1e>
1c008476:	1671                	addi	a2,a2,-4
1c008478:	00265793          	srli	a5,a2,0x2
1c00847c:	872a                	mv	a4,a0
1c00847e:	0785                	addi	a5,a5,1
1c008480:	0057c0fb          	lp.setup	x1,a5,1c00848a <memcpy+0x3c>
1c008484:	4194                	lw	a3,0(a1)
1c008486:	0711                	addi	a4,a4,4
1c008488:	0591                	addi	a1,a1,4
1c00848a:	fed72e23          	sw	a3,-4(a4)
1c00848e:	8082                	ret
1c008490:	87aa                	mv	a5,a0
1c008492:	b7e9                	j	1c00845c <memcpy+0xe>
1c008494:	8082                	ret

1c008496 <memmove>:
1c008496:	40b507b3          	sub	a5,a0,a1
1c00849a:	00c7fd63          	bleu	a2,a5,1c0084b4 <memmove+0x1e>
1c00849e:	87b2                	mv	a5,a2
1c0084a0:	0077c0fb          	lp.setup	x1,a5,1c0084ae <memmove+0x18>
1c0084a4:	167d                	addi	a2,a2,-1
1c0084a6:	00c58733          	add	a4,a1,a2
1c0084aa:	00074703          	lbu	a4,0(a4)
1c0084ae:	00e54623          	p.sb	a4,a2(a0)
1c0084b2:	8082                	ret
1c0084b4:	87aa                	mv	a5,a0
1c0084b6:	ca01                	beqz	a2,1c0084c6 <memmove+0x30>
1c0084b8:	004640fb          	lp.setup	x1,a2,1c0084c0 <memmove+0x2a>
1c0084bc:	0015c70b          	p.lbu	a4,1(a1!)
1c0084c0:	00e780ab          	p.sb	a4,1(a5!)
1c0084c4:	8082                	ret
1c0084c6:	8082                	ret

1c0084c8 <strchr>:
1c0084c8:	00054783          	lbu	a5,0(a0) # 5f68000 <__l1_heap_size+0x5f58708>
1c0084cc:	0ff5f593          	andi	a1,a1,255
1c0084d0:	00b78863          	beq	a5,a1,1c0084e0 <strchr+0x18>
1c0084d4:	c799                	beqz	a5,1c0084e2 <strchr+0x1a>
1c0084d6:	0505                	addi	a0,a0,1
1c0084d8:	00054783          	lbu	a5,0(a0)
1c0084dc:	feb79ce3          	bne	a5,a1,1c0084d4 <strchr+0xc>
1c0084e0:	8082                	ret
1c0084e2:	0015b593          	seqz	a1,a1
1c0084e6:	40b005b3          	neg	a1,a1
1c0084ea:	8d6d                	and	a0,a0,a1
1c0084ec:	8082                	ret

1c0084ee <pos_libc_fputc_locked>:
1c0084ee:	1a1047b7          	lui	a5,0x1a104
1c0084f2:	0ff57513          	andi	a0,a0,255
1c0084f6:	d388                	sw	a0,32(a5)
1c0084f8:	4501                	li	a0,0
1c0084fa:	8082                	ret

1c0084fc <pos_libc_prf_locked>:
1c0084fc:	a87d                	j	1c0085ba <pos_libc_prf>

1c0084fe <exit>:
1c0084fe:	1141                	addi	sp,sp,-16
1c008500:	c606                	sw	ra,12(sp)
1c008502:	1a1047b7          	lui	a5,0x1a104
1c008506:	c1f54533          	p.bset	a0,a0,0,31
1c00850a:	0aa7a023          	sw	a0,160(a5) # 1a1040a0 <__l2_shared_end+0xa103998>
1c00850e:	3f01                	jal	1c00841e <pos_wait_forever>

1c008510 <pos_io_start>:
1c008510:	4501                	li	a0,0
1c008512:	8082                	ret

1c008514 <pos_io_stop>:
1c008514:	4501                	li	a0,0
1c008516:	8082                	ret

1c008518 <printf>:
1c008518:	7139                	addi	sp,sp,-64
1c00851a:	02410313          	addi	t1,sp,36
1c00851e:	d432                	sw	a2,40(sp)
1c008520:	862a                	mv	a2,a0
1c008522:	1c008537          	lui	a0,0x1c008
1c008526:	d22e                	sw	a1,36(sp)
1c008528:	d636                	sw	a3,44(sp)
1c00852a:	4589                	li	a1,2
1c00852c:	869a                	mv	a3,t1
1c00852e:	4ee50513          	addi	a0,a0,1262 # 1c0084ee <pos_libc_fputc_locked>
1c008532:	ce06                	sw	ra,28(sp)
1c008534:	d83a                	sw	a4,48(sp)
1c008536:	da3e                	sw	a5,52(sp)
1c008538:	dc42                	sw	a6,56(sp)
1c00853a:	de46                	sw	a7,60(sp)
1c00853c:	c61a                	sw	t1,12(sp)
1c00853e:	3f7d                	jal	1c0084fc <pos_libc_prf_locked>
1c008540:	40f2                	lw	ra,28(sp)
1c008542:	6121                	addi	sp,sp,64
1c008544:	8082                	ret

1c008546 <pos_libc_to_x>:
1c008546:	872a                	mv	a4,a0
1c008548:	88aa                	mv	a7,a0
1c00854a:	4e25                	li	t3,9
1c00854c:	02c5f333          	remu	t1,a1,a2
1c008550:	4781                	li	a5,0
1c008552:	00188813          	addi	a6,a7,1
1c008556:	0ff37513          	andi	a0,t1,255
1c00855a:	02c5d5b3          	divu	a1,a1,a2
1c00855e:	03050513          	addi	a0,a0,48
1c008562:	006e7463          	bleu	t1,t3,1c00856a <pos_libc_to_x+0x24>
1c008566:	02700793          	li	a5,39
1c00856a:	97aa                	add	a5,a5,a0
1c00856c:	00f88023          	sb	a5,0(a7)
1c008570:	88c2                	mv	a7,a6
1c008572:	fde9                	bnez	a1,1c00854c <pos_libc_to_x+0x6>
1c008574:	40e80533          	sub	a0,a6,a4
1c008578:	02d55f63          	ble	a3,a0,1c0085b6 <pos_libc_to_x+0x70>
1c00857c:	410707b3          	sub	a5,a4,a6
1c008580:	03000613          	li	a2,48
1c008584:	96be                	add	a3,a3,a5
1c008586:	0086c0fb          	lp.setup	x1,a3,1c008596 <pos_libc_to_x+0x50>
1c00858a:	00180793          	addi	a5,a6,1
1c00858e:	00c80023          	sb	a2,0(a6)
1c008592:	40e78533          	sub	a0,a5,a4
1c008596:	883e                	mv	a6,a5
1c008598:	fe078fab          	p.sb	zero,-1(a5!)
1c00859c:	00f77c63          	bleu	a5,a4,1c0085b4 <pos_libc_to_x+0x6e>
1c0085a0:	00074603          	lbu	a2,0(a4)
1c0085a4:	0007c683          	lbu	a3,0(a5)
1c0085a8:	fec78fab          	p.sb	a2,-1(a5!)
1c0085ac:	00d700ab          	p.sb	a3,1(a4!)
1c0085b0:	fef768e3          	bltu	a4,a5,1c0085a0 <pos_libc_to_x+0x5a>
1c0085b4:	8082                	ret
1c0085b6:	87c2                	mv	a5,a6
1c0085b8:	b7c5                	j	1c008598 <pos_libc_to_x+0x52>

1c0085ba <pos_libc_prf>:
1c0085ba:	7169                	addi	sp,sp,-304
1c0085bc:	12912223          	sw	s1,292(sp)
1c0085c0:	13212023          	sw	s2,288(sp)
1c0085c4:	11312e23          	sw	s3,284(sp)
1c0085c8:	11412c23          	sw	s4,280(sp)
1c0085cc:	11512a23          	sw	s5,276(sp)
1c0085d0:	dfee                	sw	s11,252(sp)
1c0085d2:	12112623          	sw	ra,300(sp)
1c0085d6:	12812423          	sw	s0,296(sp)
1c0085da:	11612823          	sw	s6,272(sp)
1c0085de:	11712623          	sw	s7,268(sp)
1c0085e2:	11812423          	sw	s8,264(sp)
1c0085e6:	11912223          	sw	s9,260(sp)
1c0085ea:	11a12023          	sw	s10,256(sp)
1c0085ee:	84aa                	mv	s1,a0
1c0085f0:	8a2e                	mv	s4,a1
1c0085f2:	8db2                	mv	s11,a2
1c0085f4:	8936                	mv	s2,a3
1c0085f6:	4a81                	li	s5,0
1c0085f8:	1c0009b7          	lui	s3,0x1c000
1c0085fc:	000dc503          	lbu	a0,0(s11)
1c008600:	0d85                	addi	s11,s11,1
1c008602:	cd11                	beqz	a0,1c00861e <pos_libc_prf+0x64>
1c008604:	02500793          	li	a5,37
1c008608:	04f50763          	beq	a0,a5,1c008656 <pos_libc_prf+0x9c>
1c00860c:	85d2                	mv	a1,s4
1c00860e:	9482                	jalr	s1
1c008610:	15f52c63          	p.beqimm	a0,-1,1c008768 <pos_libc_prf+0x1ae>
1c008614:	0a85                	addi	s5,s5,1
1c008616:	000dc503          	lbu	a0,0(s11)
1c00861a:	0d85                	addi	s11,s11,1
1c00861c:	f565                	bnez	a0,1c008604 <pos_libc_prf+0x4a>
1c00861e:	12c12083          	lw	ra,300(sp)
1c008622:	12812403          	lw	s0,296(sp)
1c008626:	8556                	mv	a0,s5
1c008628:	12412483          	lw	s1,292(sp)
1c00862c:	12012903          	lw	s2,288(sp)
1c008630:	11c12983          	lw	s3,284(sp)
1c008634:	11812a03          	lw	s4,280(sp)
1c008638:	11412a83          	lw	s5,276(sp)
1c00863c:	11012b03          	lw	s6,272(sp)
1c008640:	10c12b83          	lw	s7,268(sp)
1c008644:	10812c03          	lw	s8,264(sp)
1c008648:	10412c83          	lw	s9,260(sp)
1c00864c:	10012d03          	lw	s10,256(sp)
1c008650:	5dfe                	lw	s11,252(sp)
1c008652:	6155                	addi	sp,sp,304
1c008654:	8082                	ret
1c008656:	000dcc03          	lbu	s8,0(s11)
1c00865a:	02000313          	li	t1,32
1c00865e:	001d8d13          	addi	s10,s11,1
1c008662:	04c98513          	addi	a0,s3,76 # 1c00004c <__DTOR_END__+0x30>
1c008666:	85e2                	mv	a1,s8
1c008668:	c21a                	sw	t1,4(sp)
1c00866a:	c602                	sw	zero,12(sp)
1c00866c:	c402                	sw	zero,8(sp)
1c00866e:	c802                	sw	zero,16(sp)
1c008670:	c002                	sw	zero,0(sp)
1c008672:	02300413          	li	s0,35
1c008676:	02d00b93          	li	s7,45
1c00867a:	03000c93          	li	s9,48
1c00867e:	8b6a                	mv	s6,s10
1c008680:	35a1                	jal	1c0084c8 <strchr>
1c008682:	c905                	beqz	a0,1c0086b2 <pos_libc_prf+0xf8>
1c008684:	108c0b63          	beq	s8,s0,1c00879a <pos_libc_prf+0x1e0>
1c008688:	0f847263          	bleu	s8,s0,1c00876c <pos_libc_prf+0x1b2>
1c00868c:	117c0363          	beq	s8,s7,1c008792 <pos_libc_prf+0x1d8>
1c008690:	0f9c0c63          	beq	s8,s9,1c008788 <pos_libc_prf+0x1ce>
1c008694:	02b00593          	li	a1,43
1c008698:	0ebc0463          	beq	s8,a1,1c008780 <pos_libc_prf+0x1c6>
1c00869c:	8dea                	mv	s11,s10
1c00869e:	000dcc03          	lbu	s8,0(s11)
1c0086a2:	001d8d13          	addi	s10,s11,1
1c0086a6:	04c98513          	addi	a0,s3,76
1c0086aa:	85e2                	mv	a1,s8
1c0086ac:	8b6a                	mv	s6,s10
1c0086ae:	3d29                	jal	1c0084c8 <strchr>
1c0086b0:	f971                	bnez	a0,1c008684 <pos_libc_prf+0xca>
1c0086b2:	02a00613          	li	a2,42
1c0086b6:	10cc0863          	beq	s8,a2,1c0087c6 <pos_libc_prf+0x20c>
1c0086ba:	fd0c0613          	addi	a2,s8,-48
1c0086be:	45a5                	li	a1,9
1c0086c0:	4401                	li	s0,0
1c0086c2:	0ec5f263          	bleu	a2,a1,1c0087a6 <pos_libc_prf+0x1ec>
1c0086c6:	02e00713          	li	a4,46
1c0086ca:	5bfd                	li	s7,-1
1c0086cc:	14ec0563          	beq	s8,a4,1c008816 <pos_libc_prf+0x25c>
1c0086d0:	1c000537          	lui	a0,0x1c000
1c0086d4:	85e2                	mv	a1,s8
1c0086d6:	05450513          	addi	a0,a0,84 # 1c000054 <__DTOR_END__+0x38>
1c0086da:	33fd                	jal	1c0084c8 <strchr>
1c0086dc:	8dda                	mv	s11,s6
1c0086de:	c509                	beqz	a0,1c0086e8 <pos_libc_prf+0x12e>
1c0086e0:	000b4c03          	lbu	s8,0(s6)
1c0086e4:	001b0d93          	addi	s11,s6,1
1c0086e8:	06700713          	li	a4,103
1c0086ec:	0f875b63          	ble	s8,a4,1c0087e2 <pos_libc_prf+0x228>
1c0086f0:	07000713          	li	a4,112
1c0086f4:	60ec0863          	beq	s8,a4,1c008d04 <pos_libc_prf+0x74a>
1c0086f8:	15875363          	ble	s8,a4,1c00883e <pos_libc_prf+0x284>
1c0086fc:	07500713          	li	a4,117
1c008700:	5cec0963          	beq	s8,a4,1c008cd2 <pos_libc_prf+0x718>
1c008704:	07800713          	li	a4,120
1c008708:	4cec0b63          	beq	s8,a4,1c008bde <pos_libc_prf+0x624>
1c00870c:	07300713          	li	a4,115
1c008710:	62ec1563          	bne	s8,a4,1c008d3a <pos_libc_prf+0x780>
1c008714:	00092583          	lw	a1,0(s2)
1c008718:	00490b13          	addi	s6,s2,4
1c00871c:	4d01                	li	s10,0
1c00871e:	0c8450fb          	lp.setupi	x1,200,1c00872e <pos_libc_prf+0x174>
1c008722:	01a58733          	add	a4,a1,s10
1c008726:	00074703          	lbu	a4,0(a4)
1c00872a:	60070e63          	beqz	a4,1c008d46 <pos_libc_prf+0x78c>
1c00872e:	0d05                	addi	s10,s10,1
1c008730:	000bc763          	bltz	s7,1c00873e <pos_libc_prf+0x184>
1c008734:	057d4d33          	p.min	s10,s10,s7
1c008738:	895a                	mv	s2,s6
1c00873a:	ec0d01e3          	beqz	s10,1c0085fc <pos_libc_prf+0x42>
1c00873e:	866a                	mv	a2,s10
1c008740:	1048                	addi	a0,sp,36
1c008742:	3331                	jal	1c00844e <memcpy>
1c008744:	895a                	mv	s2,s6
1c008746:	4e8d4663          	blt	s10,s0,1c008c32 <pos_libc_prf+0x678>
1c00874a:	846a                	mv	s0,s10
1c00874c:	02410b13          	addi	s6,sp,36
1c008750:	a029                	j	1c00875a <pos_libc_prf+0x1a0>
1c008752:	0b05                	addi	s6,s6,1
1c008754:	0a85                	addi	s5,s5,1
1c008756:	ea0403e3          	beqz	s0,1c0085fc <pos_libc_prf+0x42>
1c00875a:	000b4503          	lbu	a0,0(s6)
1c00875e:	85d2                	mv	a1,s4
1c008760:	147d                	addi	s0,s0,-1
1c008762:	9482                	jalr	s1
1c008764:	fff537e3          	p.bneimm	a0,-1,1c008752 <pos_libc_prf+0x198>
1c008768:	5afd                	li	s5,-1
1c00876a:	bd55                	j	1c00861e <pos_libc_prf+0x64>
1c00876c:	ea0c09e3          	beqz	s8,1c00861e <pos_libc_prf+0x64>
1c008770:	02000313          	li	t1,32
1c008774:	f26c14e3          	bne	s8,t1,1c00869c <pos_libc_prf+0xe2>
1c008778:	4685                	li	a3,1
1c00877a:	c636                	sw	a3,12(sp)
1c00877c:	8dea                	mv	s11,s10
1c00877e:	b705                	j	1c00869e <pos_libc_prf+0xe4>
1c008780:	4605                	li	a2,1
1c008782:	c432                	sw	a2,8(sp)
1c008784:	8dea                	mv	s11,s10
1c008786:	bf21                	j	1c00869e <pos_libc_prf+0xe4>
1c008788:	03000793          	li	a5,48
1c00878c:	c23e                	sw	a5,4(sp)
1c00878e:	8dea                	mv	s11,s10
1c008790:	b739                	j	1c00869e <pos_libc_prf+0xe4>
1c008792:	4805                	li	a6,1
1c008794:	c842                	sw	a6,16(sp)
1c008796:	8dea                	mv	s11,s10
1c008798:	b719                	j	1c00869e <pos_libc_prf+0xe4>
1c00879a:	4705                	li	a4,1
1c00879c:	c03a                	sw	a4,0(sp)
1c00879e:	8dea                	mv	s11,s10
1c0087a0:	bdfd                	j	1c00869e <pos_libc_prf+0xe4>
1c0087a2:	8dea                	mv	s11,s10
1c0087a4:	0d05                	addi	s10,s10,1
1c0087a6:	00241793          	slli	a5,s0,0x2
1c0087aa:	97a2                	add	a5,a5,s0
1c0087ac:	0786                	slli	a5,a5,0x1
1c0087ae:	97e2                	add	a5,a5,s8
1c0087b0:	000d4c03          	lbu	s8,0(s10)
1c0087b4:	fd078413          	addi	s0,a5,-48
1c0087b8:	fd0c0793          	addi	a5,s8,-48
1c0087bc:	fef5f3e3          	bleu	a5,a1,1c0087a2 <pos_libc_prf+0x1e8>
1c0087c0:	002d8b13          	addi	s6,s11,2
1c0087c4:	a811                	j	1c0087d8 <pos_libc_prf+0x21e>
1c0087c6:	00092403          	lw	s0,0(s2)
1c0087ca:	0911                	addi	s2,s2,4
1c0087cc:	0e044263          	bltz	s0,1c0088b0 <pos_libc_prf+0x2f6>
1c0087d0:	000d4c03          	lbu	s8,0(s10)
1c0087d4:	002d8b13          	addi	s6,s11,2
1c0087d8:	0c800713          	li	a4,200
1c0087dc:	04e45433          	p.minu	s0,s0,a4
1c0087e0:	b5dd                	j	1c0086c6 <pos_libc_prf+0x10c>
1c0087e2:	06500713          	li	a4,101
1c0087e6:	0cec5a63          	ble	a4,s8,1c0088ba <pos_libc_prf+0x300>
1c0087ea:	04700713          	li	a4,71
1c0087ee:	3d874e63          	blt	a4,s8,1c008bca <pos_libc_prf+0x610>
1c0087f2:	04500713          	li	a4,69
1c0087f6:	0cec5263          	ble	a4,s8,1c0088ba <pos_libc_prf+0x300>
1c0087fa:	e20c02e3          	beqz	s8,1c00861e <pos_libc_prf+0x64>
1c0087fe:	02500713          	li	a4,37
1c008802:	52ec1c63          	bne	s8,a4,1c008d3a <pos_libc_prf+0x780>
1c008806:	85d2                	mv	a1,s4
1c008808:	02500513          	li	a0,37
1c00880c:	9482                	jalr	s1
1c00880e:	f5f52de3          	p.beqimm	a0,-1,1c008768 <pos_libc_prf+0x1ae>
1c008812:	0a85                	addi	s5,s5,1
1c008814:	b509                	j	1c008616 <pos_libc_prf+0x5c>
1c008816:	000b4783          	lbu	a5,0(s6)
1c00881a:	02a00713          	li	a4,42
1c00881e:	001b0693          	addi	a3,s6,1
1c008822:	04e79c63          	bne	a5,a4,1c00887a <pos_libc_prf+0x2c0>
1c008826:	00092b83          	lw	s7,0(s2)
1c00882a:	001b4c03          	lbu	s8,1(s6)
1c00882e:	0911                	addi	s2,s2,4
1c008830:	0b09                	addi	s6,s6,2
1c008832:	0c800713          	li	a4,200
1c008836:	e9775de3          	ble	s7,a4,1c0086d0 <pos_libc_prf+0x116>
1c00883a:	5bfd                	li	s7,-1
1c00883c:	bd51                	j	1c0086d0 <pos_libc_prf+0x116>
1c00883e:	06e00713          	li	a4,110
1c008842:	4aec0b63          	beq	s8,a4,1c008cf8 <pos_libc_prf+0x73e>
1c008846:	43875263          	ble	s8,a4,1c008c6a <pos_libc_prf+0x6b0>
1c00884a:	4802                	lw	a6,0(sp)
1c00884c:	00490b13          	addi	s6,s2,4
1c008850:	00092583          	lw	a1,0(s2)
1c008854:	0e0803e3          	beqz	a6,1c00913a <pos_libc_prf+0xb80>
1c008858:	03000793          	li	a5,48
1c00885c:	02f10223          	sb	a5,36(sp)
1c008860:	0a0593e3          	bnez	a1,1c009106 <pos_libc_prf+0xb4c>
1c008864:	020102a3          	sb	zero,37(sp)
1c008868:	895a                	mv	s2,s6
1c00886a:	8d42                	mv	s10,a6
1c00886c:	edfbade3          	p.beqimm	s7,-1,1c008746 <pos_libc_prf+0x18c>
1c008870:	02000813          	li	a6,32
1c008874:	4d02                	lw	s10,0(sp)
1c008876:	c242                	sw	a6,4(sp)
1c008878:	b5f9                	j	1c008746 <pos_libc_prf+0x18c>
1c00887a:	fd078593          	addi	a1,a5,-48
1c00887e:	4725                	li	a4,9
1c008880:	8c3e                	mv	s8,a5
1c008882:	4b81                	li	s7,0
1c008884:	4625                	li	a2,9
1c008886:	00b77663          	bleu	a1,a4,1c008892 <pos_libc_prf+0x2d8>
1c00888a:	0250006f          	j	1c0090ae <pos_libc_prf+0xaf4>
1c00888e:	8b36                	mv	s6,a3
1c008890:	0685                	addi	a3,a3,1
1c008892:	002b9793          	slli	a5,s7,0x2
1c008896:	97de                	add	a5,a5,s7
1c008898:	0786                	slli	a5,a5,0x1
1c00889a:	97e2                	add	a5,a5,s8
1c00889c:	0006cc03          	lbu	s8,0(a3)
1c0088a0:	fd078b93          	addi	s7,a5,-48
1c0088a4:	fd0c0793          	addi	a5,s8,-48
1c0088a8:	fef673e3          	bleu	a5,a2,1c00888e <pos_libc_prf+0x2d4>
1c0088ac:	0b09                	addi	s6,s6,2
1c0088ae:	b751                	j	1c008832 <pos_libc_prf+0x278>
1c0088b0:	4705                	li	a4,1
1c0088b2:	40800433          	neg	s0,s0
1c0088b6:	c83a                	sw	a4,16(sp)
1c0088b8:	bf21                	j	1c0087d0 <pos_libc_prf+0x216>
1c0088ba:	091d                	addi	s2,s2,7
1c0088bc:	c4093933          	p.bclr	s2,s2,2,0
1c0088c0:	00092603          	lw	a2,0(s2)
1c0088c4:	00492583          	lw	a1,4(s2)
1c0088c8:	7ff00693          	li	a3,2047
1c0088cc:	01565513          	srli	a0,a2,0x15
1c0088d0:	0145d313          	srli	t1,a1,0x14
1c0088d4:	00b59713          	slli	a4,a1,0xb
1c0088d8:	8f49                	or	a4,a4,a0
1c0088da:	e8b33333          	p.bclr	t1,t1,20,11
1c0088de:	0921                	addi	s2,s2,8
1c0088e0:	062e                	slli	a2,a2,0xb
1c0088e2:	c1f73733          	p.bclr	a4,a4,0,31
1c0088e6:	04d30ce3          	beq	t1,a3,1c00913e <pos_libc_prf+0xb84>
1c0088ea:	04600693          	li	a3,70
1c0088ee:	00dc1463          	bne	s8,a3,1c0088f6 <pos_libc_prf+0x33c>
1c0088f2:	06600c13          	li	s8,102
1c0088f6:	00c366b3          	or	a3,t1,a2
1c0088fa:	8ed9                	or	a3,a3,a4
1c0088fc:	7e068563          	beqz	a3,1c0090e6 <pos_libc_prf+0xb2c>
1c008900:	c0230313          	addi	t1,t1,-1022
1c008904:	c1f74733          	p.bset	a4,a4,0,31
1c008908:	2005cbe3          	bltz	a1,1c00931e <pos_libc_prf+0xd64>
1c00890c:	47a2                	lw	a5,8(sp)
1c00890e:	1e078ae3          	beqz	a5,1c009302 <pos_libc_prf+0xd48>
1c008912:	02b00693          	li	a3,43
1c008916:	02d10223          	sb	a3,36(sp)
1c00891a:	02510b13          	addi	s6,sp,37
1c00891e:	02410c93          	addi	s9,sp,36
1c008922:	56f9                	li	a3,-2
1c008924:	4381                	li	t2,0
1c008926:	06d35763          	ble	a3,t1,1c008994 <pos_libc_prf+0x3da>
1c00892a:	33333537          	lui	a0,0x33333
1c00892e:	80000837          	lui	a6,0x80000
1c008932:	33250513          	addi	a0,a0,818 # 33333332 <__cluster_text_end+0x17323332>
1c008936:	fff84813          	not	a6,a6
1c00893a:	58f9                	li	a7,-2
1c00893c:	a011                	j	1c008940 <pos_libc_prf+0x386>
1c00893e:	833e                	mv	t1,a5
1c008940:	01f71593          	slli	a1,a4,0x1f
1c008944:	00165693          	srli	a3,a2,0x1
1c008948:	fc1637b3          	p.bclr	a5,a2,30,1
1c00894c:	8ecd                	or	a3,a3,a1
1c00894e:	00d78633          	add	a2,a5,a3
1c008952:	00f637b3          	sltu	a5,a2,a5
1c008956:	8305                	srli	a4,a4,0x1
1c008958:	973e                	add	a4,a4,a5
1c00895a:	00130793          	addi	a5,t1,1
1c00895e:	fee560e3          	bltu	a0,a4,1c00893e <pos_libc_prf+0x384>
1c008962:	00261593          	slli	a1,a2,0x2
1c008966:	01e65e13          	srli	t3,a2,0x1e
1c00896a:	00271693          	slli	a3,a4,0x2
1c00896e:	962e                	add	a2,a2,a1
1c008970:	00de66b3          	or	a3,t3,a3
1c008974:	9736                	add	a4,a4,a3
1c008976:	00b635b3          	sltu	a1,a2,a1
1c00897a:	972e                	add	a4,a4,a1
1c00897c:	01f65693          	srli	a3,a2,0x1f
1c008980:	0309                	addi	t1,t1,2
1c008982:	13fd                	addi	t2,t2,-1
1c008984:	01071663          	bne	a4,a6,1c008990 <pos_libc_prf+0x3d6>
1c008988:	0606                	slli	a2,a2,0x1
1c00898a:	fc16c733          	p.bset	a4,a3,30,1
1c00898e:	833e                	mv	t1,a5
1c008990:	fb1348e3          	blt	t1,a7,1c008940 <pos_libc_prf+0x386>
1c008994:	0e605763          	blez	t1,1c008a82 <pos_libc_prf+0x4c8>
1c008998:	80000f37          	lui	t5,0x80000
1c00899c:	4d15                	li	s10,5
1c00899e:	ffff4f13          	not	t5,t5
1c0089a2:	00260513          	addi	a0,a2,2
1c0089a6:	00c536b3          	sltu	a3,a0,a2
1c0089aa:	00e688b3          	add	a7,a3,a4
1c0089ae:	02000793          	li	a5,32
1c0089b2:	00189593          	slli	a1,a7,0x1
1c0089b6:	fff7ce93          	not	t4,a5
1c0089ba:	00f556b3          	srl	a3,a0,a5
1c0089be:	01d595b3          	sll	a1,a1,t4
1c0089c2:	0207fe13          	andi	t3,a5,32
1c0089c6:	4601                	li	a2,0
1c0089c8:	4701                	li	a4,0
1c0089ca:	4801                	li	a6,0
1c0089cc:	8ecd                	or	a3,a3,a1
1c0089ce:	000e0463          	beqz	t3,1c0089d6 <pos_libc_prf+0x41c>
1c0089d2:	00f8d6b3          	srl	a3,a7,a5
1c0089d6:	fff7ce93          	not	t4,a5
1c0089da:	03a6d6b3          	divu	a3,a3,s10
1c0089de:	060e0d63          	beqz	t3,1c008a58 <pos_libc_prf+0x49e>
1c0089e2:	4581                	li	a1,0
1c0089e4:	00f69eb3          	sll	t4,a3,a5
1c0089e8:	00259693          	slli	a3,a1,0x2
1c0089ec:	01e5df93          	srli	t6,a1,0x1e
1c0089f0:	002e9793          	slli	a5,t4,0x2
1c0089f4:	00b68e33          	add	t3,a3,a1
1c0089f8:	00ffe7b3          	or	a5,t6,a5
1c0089fc:	95b2                	add	a1,a1,a2
1c0089fe:	97f6                	add	a5,a5,t4
1c008a00:	00de36b3          	sltu	a3,t3,a3
1c008a04:	00c5bfb3          	sltu	t6,a1,a2
1c008a08:	1c001637          	lui	a2,0x1c001
1c008a0c:	96be                	add	a3,a3,a5
1c008a0e:	86060613          	addi	a2,a2,-1952 # 1c000860 <stack>
1c008a12:	01d707b3          	add	a5,a4,t4
1c008a16:	41c50e33          	sub	t3,a0,t3
1c008a1a:	0805                	addi	a6,a6,1
1c008a1c:	010602b3          	add	t0,a2,a6
1c008a20:	01c53eb3          	sltu	t4,a0,t3
1c008a24:	40d886b3          	sub	a3,a7,a3
1c008a28:	862e                	mv	a2,a1
1c008a2a:	00ff8733          	add	a4,t6,a5
1c008a2e:	02382c63          	p.beqimm	a6,3,1c008a66 <pos_libc_prf+0x4ac>
1c008a32:	0002c783          	lbu	a5,0(t0)
1c008a36:	41d688b3          	sub	a7,a3,t4
1c008a3a:	8572                	mv	a0,t3
1c008a3c:	00189593          	slli	a1,a7,0x1
1c008a40:	fff7ce93          	not	t4,a5
1c008a44:	00f556b3          	srl	a3,a0,a5
1c008a48:	01d595b3          	sll	a1,a1,t4
1c008a4c:	0207fe13          	andi	t3,a5,32
1c008a50:	8ecd                	or	a3,a3,a1
1c008a52:	f80e02e3          	beqz	t3,1c0089d6 <pos_libc_prf+0x41c>
1c008a56:	bfb5                	j	1c0089d2 <pos_libc_prf+0x418>
1c008a58:	0016de13          	srli	t3,a3,0x1
1c008a5c:	00f695b3          	sll	a1,a3,a5
1c008a60:	01de5eb3          	srl	t4,t3,t4
1c008a64:	b751                	j	1c0089e8 <pos_libc_prf+0x42e>
1c008a66:	137d                	addi	t1,t1,-1
1c008a68:	0385                	addi	t2,t2,1
1c008a6a:	00ef6a63          	bltu	t5,a4,1c008a7e <pos_libc_prf+0x4c4>
1c008a6e:	01f65793          	srli	a5,a2,0x1f
1c008a72:	0706                	slli	a4,a4,0x1
1c008a74:	8f5d                	or	a4,a4,a5
1c008a76:	0606                	slli	a2,a2,0x1
1c008a78:	137d                	addi	t1,t1,-1
1c008a7a:	feef7ae3          	bleu	a4,t5,1c008a6e <pos_libc_prf+0x4b4>
1c008a7e:	f26042e3          	bgtz	t1,1c0089a2 <pos_libc_prf+0x3e8>
1c008a82:	4691                	li	a3,4
1c008a84:	40668333          	sub	t1,a3,t1
1c008a88:	011340fb          	lp.setup	x1,t1,1c008aaa <pos_libc_prf+0x4f0>
1c008a8c:	01f71693          	slli	a3,a4,0x1f
1c008a90:	00165793          	srli	a5,a2,0x1
1c008a94:	8fd5                	or	a5,a5,a3
1c008a96:	fc163633          	p.bclr	a2,a2,30,1
1c008a9a:	00f60d33          	add	s10,a2,a5
1c008a9e:	8305                	srli	a4,a4,0x1
1c008aa0:	00cd3633          	sltu	a2,s10,a2
1c008aa4:	00e607b3          	add	a5,a2,a4
1c008aa8:	873e                	mv	a4,a5
1c008aaa:	866a                	mv	a2,s10
1c008aac:	ce3e                	sw	a5,28(sp)
1c008aae:	06700713          	li	a4,103
1c008ab2:	6c0bc363          	bltz	s7,1c009178 <pos_libc_prf+0xbbe>
1c008ab6:	5eec0f63          	beq	s8,a4,1c0090b4 <pos_libc_prf+0xafa>
1c008aba:	04700713          	li	a4,71
1c008abe:	5eec0b63          	beq	s8,a4,1c0090b4 <pos_libc_prf+0xafa>
1c008ac2:	06600713          	li	a4,102
1c008ac6:	28ec0d63          	beq	s8,a4,1c008d60 <pos_libc_prf+0x7a6>
1c008aca:	001b8293          	addi	t0,s7,1
1c008ace:	4341                	li	t1,16
1c008ad0:	0462c2b3          	p.min	t0,t0,t1
1c008ad4:	12fd                	addi	t0,t0,-1
1c008ad6:	cc02                	sw	zero,24(sp)
1c008ad8:	001b0713          	addi	a4,s6,1
1c008adc:	ca3a                	sw	a4,20(sp)
1c008ade:	853a                	mv	a0,a4
1c008ae0:	4701                	li	a4,0
1c008ae2:	080006b7          	lui	a3,0x8000
1c008ae6:	4795                	li	a5,5
1c008ae8:	00270e13          	addi	t3,a4,2
1c008aec:	00ee3733          	sltu	a4,t3,a4
1c008af0:	02000893          	li	a7,32
1c008af4:	9736                	add	a4,a4,a3
1c008af6:	00171593          	slli	a1,a4,0x1
1c008afa:	fff8cf13          	not	t5,a7
1c008afe:	011e56b3          	srl	a3,t3,a7
1c008b02:	01e595b3          	sll	a1,a1,t5
1c008b06:	0208f813          	andi	a6,a7,32
1c008b0a:	4301                	li	t1,0
1c008b0c:	4601                	li	a2,0
1c008b0e:	4e81                	li	t4,0
1c008b10:	8ecd                	or	a3,a3,a1
1c008b12:	00080463          	beqz	a6,1c008b1a <pos_libc_prf+0x560>
1c008b16:	011756b3          	srl	a3,a4,a7
1c008b1a:	fff8cf13          	not	t5,a7
1c008b1e:	02f6d6b3          	divu	a3,a3,a5
1c008b22:	06080a63          	beqz	a6,1c008b96 <pos_libc_prf+0x5dc>
1c008b26:	4581                	li	a1,0
1c008b28:	011698b3          	sll	a7,a3,a7
1c008b2c:	00259f13          	slli	t5,a1,0x2
1c008b30:	01e5df93          	srli	t6,a1,0x1e
1c008b34:	00289693          	slli	a3,a7,0x2
1c008b38:	00bf0833          	add	a6,t5,a1
1c008b3c:	00dfe6b3          	or	a3,t6,a3
1c008b40:	01e83f33          	sltu	t5,a6,t5
1c008b44:	959a                	add	a1,a1,t1
1c008b46:	96c6                	add	a3,a3,a7
1c008b48:	96fa                	add	a3,a3,t5
1c008b4a:	0065bf33          	sltu	t5,a1,t1
1c008b4e:	1c001337          	lui	t1,0x1c001
1c008b52:	9646                	add	a2,a2,a7
1c008b54:	86030313          	addi	t1,t1,-1952 # 1c000860 <stack>
1c008b58:	410e0833          	sub	a6,t3,a6
1c008b5c:	0e85                	addi	t4,t4,1
1c008b5e:	01d30fb3          	add	t6,t1,t4
1c008b62:	010e38b3          	sltu	a7,t3,a6
1c008b66:	8f15                	sub	a4,a4,a3
1c008b68:	832e                	mv	t1,a1
1c008b6a:	967a                	add	a2,a2,t5
1c008b6c:	023eac63          	p.beqimm	t4,3,1c008ba4 <pos_libc_prf+0x5ea>
1c008b70:	41170733          	sub	a4,a4,a7
1c008b74:	000fc883          	lbu	a7,0(t6)
1c008b78:	8e42                	mv	t3,a6
1c008b7a:	00171593          	slli	a1,a4,0x1
1c008b7e:	fff8cf13          	not	t5,a7
1c008b82:	011e56b3          	srl	a3,t3,a7
1c008b86:	01e595b3          	sll	a1,a1,t5
1c008b8a:	0208f813          	andi	a6,a7,32
1c008b8e:	8ecd                	or	a3,a3,a1
1c008b90:	f80805e3          	beqz	a6,1c008b1a <pos_libc_prf+0x560>
1c008b94:	b749                	j	1c008b16 <pos_libc_prf+0x55c>
1c008b96:	0016d813          	srli	a6,a3,0x1
1c008b9a:	011695b3          	sll	a1,a3,a7
1c008b9e:	01e858b3          	srl	a7,a6,t5
1c008ba2:	b769                	j	1c008b2c <pos_libc_prf+0x572>
1c008ba4:	01f61693          	slli	a3,a2,0x1f
1c008ba8:	0015d713          	srli	a4,a1,0x1
1c008bac:	fc15b333          	p.bclr	t1,a1,30,1
1c008bb0:	8f55                	or	a4,a4,a3
1c008bb2:	971a                	add	a4,a4,t1
1c008bb4:	00165693          	srli	a3,a2,0x1
1c008bb8:	00673333          	sltu	t1,a4,t1
1c008bbc:	969a                	add	a3,a3,t1
1c008bbe:	fff28613          	addi	a2,t0,-1
1c008bc2:	1c028363          	beqz	t0,1c008d88 <pos_libc_prf+0x7ce>
1c008bc6:	82b2                	mv	t0,a2
1c008bc8:	b705                	j	1c008ae8 <pos_libc_prf+0x52e>
1c008bca:	06300713          	li	a4,99
1c008bce:	0eec0963          	beq	s8,a4,1c008cc0 <pos_libc_prf+0x706>
1c008bd2:	0b874063          	blt	a4,s8,1c008c72 <pos_libc_prf+0x6b8>
1c008bd6:	05800713          	li	a4,88
1c008bda:	16ec1063          	bne	s8,a4,1c008d3a <pos_libc_prf+0x780>
1c008bde:	4702                	lw	a4,0(sp)
1c008be0:	00490b13          	addi	s6,s2,4
1c008be4:	00092583          	lw	a1,0(s2)
1c008be8:	44070163          	beqz	a4,1c00902a <pos_libc_prf+0xa70>
1c008bec:	7761                	lui	a4,0xffff8
1c008bee:	83074713          	xori	a4,a4,-2000
1c008bf2:	86de                	mv	a3,s7
1c008bf4:	4641                	li	a2,16
1c008bf6:	02610513          	addi	a0,sp,38
1c008bfa:	02e11223          	sh	a4,36(sp)
1c008bfe:	32a1                	jal	1c008546 <pos_libc_to_x>
1c008c00:	05800713          	li	a4,88
1c008c04:	8d2a                	mv	s10,a0
1c008c06:	78ec0f63          	beq	s8,a4,1c0093a4 <pos_libc_prf+0xdea>
1c008c0a:	4309                	li	t1,2
1c008c0c:	00250d13          	addi	s10,a0,2
1c008c10:	c01a                	sw	t1,0(sp)
1c008c12:	0c800793          	li	a5,200
1c008c16:	49fba863          	p.beqimm	s7,-1,1c0090a6 <pos_libc_prf+0xaec>
1c008c1a:	b5a7c7e3          	blt	a5,s10,1c008768 <pos_libc_prf+0x1ae>
1c008c1e:	02000313          	li	t1,32
1c008c22:	895a                	mv	s2,s6
1c008c24:	c21a                	sw	t1,4(sp)
1c008c26:	008d4763          	blt	s10,s0,1c008c34 <pos_libc_prf+0x67a>
1c008c2a:	846a                	mv	s0,s10
1c008c2c:	b20410e3          	bnez	s0,1c00874c <pos_libc_prf+0x192>
1c008c30:	b2f1                	j	1c0085fc <pos_libc_prf+0x42>
1c008c32:	c002                	sw	zero,0(sp)
1c008c34:	4342                	lw	t1,16(sp)
1c008c36:	38030563          	beqz	t1,1c008fc0 <pos_libc_prf+0xa06>
1c008c3a:	001d0713          	addi	a4,s10,1
1c008c3e:	02000693          	li	a3,32
1c008c42:	41a407b3          	sub	a5,s0,s10
1c008c46:	76e44663          	blt	s0,a4,1c0093b2 <pos_libc_prf+0xdf8>
1c008c4a:	80000737          	lui	a4,0x80000
1c008c4e:	76e40263          	beq	s0,a4,1c0093b2 <pos_libc_prf+0xdf8>
1c008c52:	0087c0fb          	lp.setup	x1,a5,1c008c62 <pos_libc_prf+0x6a8>
1c008c56:	0f010813          	addi	a6,sp,240
1c008c5a:	01a80733          	add	a4,a6,s10
1c008c5e:	f2d70a23          	sb	a3,-204(a4) # 7fffff34 <pulp__FC+0x7fffff35>
1c008c62:	0d05                	addi	s10,s10,1
1c008c64:	ae0414e3          	bnez	s0,1c00874c <pos_libc_prf+0x192>
1c008c68:	ba51                	j	1c0085fc <pos_libc_prf+0x42>
1c008c6a:	06900713          	li	a4,105
1c008c6e:	0cec1663          	bne	s8,a4,1c008d3a <pos_libc_prf+0x780>
1c008c72:	00092583          	lw	a1,0(s2)
1c008c76:	02410c93          	addi	s9,sp,36
1c008c7a:	0911                	addi	s2,s2,4
1c008c7c:	3e05cd63          	bltz	a1,1c009076 <pos_libc_prf+0xabc>
1c008c80:	4322                	lw	t1,8(sp)
1c008c82:	4a031763          	bnez	t1,1c009130 <pos_libc_prf+0xb76>
1c008c86:	4632                	lw	a2,12(sp)
1c008c88:	62060163          	beqz	a2,1c0092aa <pos_libc_prf+0xcf0>
1c008c8c:	02000793          	li	a5,32
1c008c90:	02f10223          	sb	a5,36(sp)
1c008c94:	86de                	mv	a3,s7
1c008c96:	4629                	li	a2,10
1c008c98:	02510513          	addi	a0,sp,37
1c008c9c:	306d                	jal	1c008546 <pos_libc_to_x>
1c008c9e:	02510313          	addi	t1,sp,37
1c008ca2:	951a                	add	a0,a0,t1
1c008ca4:	4705                	li	a4,1
1c008ca6:	41950d33          	sub	s10,a0,s9
1c008caa:	c03a                	sw	a4,0(sp)
1c008cac:	0bfba463          	p.beqimm	s7,-1,1c008d54 <pos_libc_prf+0x79a>
1c008cb0:	0c800793          	li	a5,200
1c008cb4:	aba7cae3          	blt	a5,s10,1c008768 <pos_libc_prf+0x1ae>
1c008cb8:	02000713          	li	a4,32
1c008cbc:	c23a                	sw	a4,4(sp)
1c008cbe:	b7a5                	j	1c008c26 <pos_libc_prf+0x66c>
1c008cc0:	00092783          	lw	a5,0(s2)
1c008cc4:	020102a3          	sb	zero,37(sp)
1c008cc8:	0911                	addi	s2,s2,4
1c008cca:	02f10223          	sb	a5,36(sp)
1c008cce:	4d05                	li	s10,1
1c008cd0:	bc9d                	j	1c008746 <pos_libc_prf+0x18c>
1c008cd2:	00092583          	lw	a1,0(s2)
1c008cd6:	86de                	mv	a3,s7
1c008cd8:	4629                	li	a2,10
1c008cda:	1048                	addi	a0,sp,36
1c008cdc:	30ad                	jal	1c008546 <pos_libc_to_x>
1c008cde:	8d2a                	mv	s10,a0
1c008ce0:	0911                	addi	s2,s2,4
1c008ce2:	0c800793          	li	a5,200
1c008ce6:	07fba363          	p.beqimm	s7,-1,1c008d4c <pos_libc_prf+0x792>
1c008cea:	a6a7cfe3          	blt	a5,a0,1c008768 <pos_libc_prf+0x1ae>
1c008cee:	02000713          	li	a4,32
1c008cf2:	c002                	sw	zero,0(sp)
1c008cf4:	c23a                	sw	a4,4(sp)
1c008cf6:	bf05                	j	1c008c26 <pos_libc_prf+0x66c>
1c008cf8:	00092783          	lw	a5,0(s2)
1c008cfc:	0911                	addi	s2,s2,4
1c008cfe:	0157a023          	sw	s5,0(a5)
1c008d02:	b8ed                	j	1c0085fc <pos_libc_prf+0x42>
1c008d04:	00092583          	lw	a1,0(s2)
1c008d08:	77e1                	lui	a5,0xffff8
1c008d0a:	8307c793          	xori	a5,a5,-2000
1c008d0e:	46a1                	li	a3,8
1c008d10:	4641                	li	a2,16
1c008d12:	02610513          	addi	a0,sp,38
1c008d16:	02f11223          	sh	a5,36(sp)
1c008d1a:	82dff0ef          	jal	ra,1c008546 <pos_libc_to_x>
1c008d1e:	0911                	addi	s2,s2,4
1c008d20:	00250d13          	addi	s10,a0,2
1c008d24:	0c800793          	li	a5,200
1c008d28:	03fba263          	p.beqimm	s7,-1,1c008d4c <pos_libc_prf+0x792>
1c008d2c:	a3a7cee3          	blt	a5,s10,1c008768 <pos_libc_prf+0x1ae>
1c008d30:	02000793          	li	a5,32
1c008d34:	c002                	sw	zero,0(sp)
1c008d36:	c23e                	sw	a5,4(sp)
1c008d38:	b5fd                	j	1c008c26 <pos_libc_prf+0x66c>
1c008d3a:	0c800713          	li	a4,200
1c008d3e:	8b875fe3          	ble	s8,a4,1c0085fc <pos_libc_prf+0x42>
1c008d42:	5afd                	li	s5,-1
1c008d44:	b8e9                	j	1c00861e <pos_libc_prf+0x64>
1c008d46:	9e0bd7e3          	bgez	s7,1c008734 <pos_libc_prf+0x17a>
1c008d4a:	b2fd                	j	1c008738 <pos_libc_prf+0x17e>
1c008d4c:	a1a7cee3          	blt	a5,s10,1c008768 <pos_libc_prf+0x1ae>
1c008d50:	c002                	sw	zero,0(sp)
1c008d52:	bdd1                	j	1c008c26 <pos_libc_prf+0x66c>
1c008d54:	0c800793          	li	a5,200
1c008d58:	eda7d7e3          	ble	s10,a5,1c008c26 <pos_libc_prf+0x66c>
1c008d5c:	5afd                	li	s5,-1
1c008d5e:	b0c1                	j	1c00861e <pos_libc_prf+0x64>
1c008d60:	cc02                	sw	zero,24(sp)
1c008d62:	001b0593          	addi	a1,s6,1
1c008d66:	ca2e                	sw	a1,20(sp)
1c008d68:	017387b3          	add	a5,t2,s7
1c008d6c:	852e                	mv	a0,a1
1c008d6e:	6007c263          	bltz	a5,1c009372 <pos_libc_prf+0xdb8>
1c008d72:	4641                	li	a2,16
1c008d74:	04c7c2b3          	p.min	t0,a5,a2
1c008d78:	12fd                	addi	t0,t0,-1
1c008d7a:	06600c13          	li	s8,102
1c008d7e:	d60791e3          	bnez	a5,1c008ae0 <pos_libc_prf+0x526>
1c008d82:	4701                	li	a4,0
1c008d84:	080006b7          	lui	a3,0x8000
1c008d88:	45f2                	lw	a1,28(sp)
1c008d8a:	976a                	add	a4,a4,s10
1c008d8c:	01a73f33          	sltu	t5,a4,s10
1c008d90:	96ae                	add	a3,a3,a1
1c008d92:	96fa                	add	a3,a3,t5
1c008d94:	f606b633          	p.bclr	a2,a3,27,0
1c008d98:	8d3a                	mv	s10,a4
1c008d9a:	ca71                	beqz	a2,1c008e6e <pos_libc_prf+0x8b4>
1c008d9c:	002d0e93          	addi	t4,s10,2
1c008da0:	01aebd33          	sltu	s10,t4,s10
1c008da4:	00dd0f33          	add	t5,s10,a3
1c008da8:	02000813          	li	a6,32
1c008dac:	001f1793          	slli	a5,t5,0x1
1c008db0:	fff84693          	not	a3,a6
1c008db4:	010ed733          	srl	a4,t4,a6
1c008db8:	00d797b3          	sll	a5,a5,a3
1c008dbc:	02087613          	andi	a2,a6,32
1c008dc0:	4e01                	li	t3,0
1c008dc2:	4281                	li	t0,0
1c008dc4:	4f81                	li	t6,0
1c008dc6:	4d15                	li	s10,5
1c008dc8:	8f5d                	or	a4,a4,a5
1c008dca:	c219                	beqz	a2,1c008dd0 <pos_libc_prf+0x816>
1c008dcc:	010f5733          	srl	a4,t5,a6
1c008dd0:	fff84793          	not	a5,a6
1c008dd4:	03a75733          	divu	a4,a4,s10
1c008dd8:	24060263          	beqz	a2,1c00901c <pos_libc_prf+0xa62>
1c008ddc:	4681                	li	a3,0
1c008dde:	01071733          	sll	a4,a4,a6
1c008de2:	00269793          	slli	a5,a3,0x2
1c008de6:	01e6d813          	srli	a6,a3,0x1e
1c008dea:	00271593          	slli	a1,a4,0x2
1c008dee:	00d78633          	add	a2,a5,a3
1c008df2:	00b865b3          	or	a1,a6,a1
1c008df6:	95ba                	add	a1,a1,a4
1c008df8:	00f637b3          	sltu	a5,a2,a5
1c008dfc:	96f2                	add	a3,a3,t3
1c008dfe:	1c001337          	lui	t1,0x1c001
1c008e02:	97ae                	add	a5,a5,a1
1c008e04:	01c6b833          	sltu	a6,a3,t3
1c008e08:	40ce8633          	sub	a2,t4,a2
1c008e0c:	9716                	add	a4,a4,t0
1c008e0e:	0f85                	addi	t6,t6,1
1c008e10:	86030313          	addi	t1,t1,-1952 # 1c000860 <stack>
1c008e14:	00ceb8b3          	sltu	a7,t4,a2
1c008e18:	40ff07b3          	sub	a5,t5,a5
1c008e1c:	01f305b3          	add	a1,t1,t6
1c008e20:	8e36                	mv	t3,a3
1c008e22:	00e802b3          	add	t0,a6,a4
1c008e26:	023fa463          	p.beqimm	t6,3,1c008e4e <pos_libc_prf+0x894>
1c008e2a:	0005c803          	lbu	a6,0(a1)
1c008e2e:	41178f33          	sub	t5,a5,a7
1c008e32:	8eb2                	mv	t4,a2
1c008e34:	001f1793          	slli	a5,t5,0x1
1c008e38:	fff84693          	not	a3,a6
1c008e3c:	010ed733          	srl	a4,t4,a6
1c008e40:	00d797b3          	sll	a5,a5,a3
1c008e44:	02087613          	andi	a2,a6,32
1c008e48:	8f5d                	or	a4,a4,a5
1c008e4a:	d259                	beqz	a2,1c008dd0 <pos_libc_prf+0x816>
1c008e4c:	b741                	j	1c008dcc <pos_libc_prf+0x812>
1c008e4e:	01f29693          	slli	a3,t0,0x1f
1c008e52:	001e5713          	srli	a4,t3,0x1
1c008e56:	8f55                	or	a4,a4,a3
1c008e58:	fc1e3e33          	p.bclr	t3,t3,30,1
1c008e5c:	00ee0d33          	add	s10,t3,a4
1c008e60:	01cd3e33          	sltu	t3,s10,t3
1c008e64:	0012d713          	srli	a4,t0,0x1
1c008e68:	00ee06b3          	add	a3,t3,a4
1c008e6c:	0385                	addi	t2,t2,1
1c008e6e:	06600713          	li	a4,102
1c008e72:	34ec0563          	beq	s8,a4,1c0091bc <pos_libc_prf+0xc02>
1c008e76:	002d1713          	slli	a4,s10,0x2
1c008e7a:	01ed5613          	srli	a2,s10,0x1e
1c008e7e:	00269813          	slli	a6,a3,0x2
1c008e82:	9d3a                	add	s10,s10,a4
1c008e84:	01066833          	or	a6,a2,a6
1c008e88:	00ed35b3          	sltu	a1,s10,a4
1c008e8c:	96c2                	add	a3,a3,a6
1c008e8e:	95b6                	add	a1,a1,a3
1c008e90:	01fd5713          	srli	a4,s10,0x1f
1c008e94:	0586                	slli	a1,a1,0x1
1c008e96:	8dd9                	or	a1,a1,a4
1c008e98:	01c5d713          	srli	a4,a1,0x1c
1c008e9c:	03070693          	addi	a3,a4,48
1c008ea0:	00e03733          	snez	a4,a4
1c008ea4:	40e383b3          	sub	t2,t2,a4
1c008ea8:	4702                	lw	a4,0(sp)
1c008eaa:	10000337          	lui	t1,0x10000
1c008eae:	137d                	addi	t1,t1,-1
1c008eb0:	00db0023          	sb	a3,0(s6)
1c008eb4:	001d1613          	slli	a2,s10,0x1
1c008eb8:	0065f5b3          	and	a1,a1,t1
1c008ebc:	2e070563          	beqz	a4,1c0091a6 <pos_libc_prf+0xbec>
1c008ec0:	02e00713          	li	a4,46
1c008ec4:	00eb00a3          	sb	a4,1(s6)
1c008ec8:	002b0813          	addi	a6,s6,2
1c008ecc:	fffb8893          	addi	a7,s7,-1
1c008ed0:	4e0b8b63          	beqz	s7,1c0093c6 <pos_libc_prf+0xe0c>
1c008ed4:	4e3d                	li	t3,15
1c008ed6:	a011                	j	1c008eda <pos_libc_prf+0x920>
1c008ed8:	88be                	mv	a7,a5
1c008eda:	00261793          	slli	a5,a2,0x2
1c008ede:	01e65693          	srli	a3,a2,0x1e
1c008ee2:	00259713          	slli	a4,a1,0x2
1c008ee6:	00c78333          	add	t1,a5,a2
1c008eea:	8f55                	or	a4,a4,a3
1c008eec:	972e                	add	a4,a4,a1
1c008eee:	00f337b3          	sltu	a5,t1,a5
1c008ef2:	97ba                	add	a5,a5,a4
1c008ef4:	0786                	slli	a5,a5,0x1
1c008ef6:	01f35713          	srli	a4,t1,0x1f
1c008efa:	8fd9                	or	a5,a5,a4
1c008efc:	01c7d693          	srli	a3,a5,0x1c
1c008f00:	03000713          	li	a4,48
1c008f04:	00180513          	addi	a0,a6,1 # 80000001 <pulp__FC+0x80000002>
1c008f08:	01c05c63          	blez	t3,1c008f20 <pos_libc_prf+0x966>
1c008f0c:	00131613          	slli	a2,t1,0x1
1c008f10:	10000337          	lui	t1,0x10000
1c008f14:	137d                	addi	t1,t1,-1
1c008f16:	03068713          	addi	a4,a3,48 # 8000030 <__l1_heap_size+0x7ff0738>
1c008f1a:	1e7d                	addi	t3,t3,-1
1c008f1c:	0067f5b3          	and	a1,a5,t1
1c008f20:	00e80023          	sb	a4,0(a6)
1c008f24:	fff88793          	addi	a5,a7,-1
1c008f28:	882a                	mv	a6,a0
1c008f2a:	fb1047e3          	bgtz	a7,1c008ed8 <pos_libc_prf+0x91e>
1c008f2e:	45e2                	lw	a1,24(sp)
1c008f30:	e9a5                	bnez	a1,1c008fa0 <pos_libc_prf+0x9e6>
1c008f32:	c05c3733          	p.bclr	a4,s8,0,5
1c008f36:	04500693          	li	a3,69
1c008f3a:	02d71963          	bne	a4,a3,1c008f6c <pos_libc_prf+0x9b2>
1c008f3e:	87e2                	mv	a5,s8
1c008f40:	00f50023          	sb	a5,0(a0)
1c008f44:	3403cc63          	bltz	t2,1c00929c <pos_libc_prf+0xce2>
1c008f48:	02b00793          	li	a5,43
1c008f4c:	00f500a3          	sb	a5,1(a0)
1c008f50:	47a9                	li	a5,10
1c008f52:	02f3c733          	div	a4,t2,a5
1c008f56:	0511                	addi	a0,a0,4
1c008f58:	02f3e7b3          	rem	a5,t2,a5
1c008f5c:	03070713          	addi	a4,a4,48
1c008f60:	fee50f23          	sb	a4,-2(a0)
1c008f64:	03078793          	addi	a5,a5,48 # ffff8030 <pulp__FC+0xffff8031>
1c008f68:	fef50fa3          	sb	a5,-1(a0)
1c008f6c:	00050023          	sb	zero,0(a0)
1c008f70:	41950d33          	sub	s10,a0,s9
1c008f74:	4722                	lw	a4,8(sp)
1c008f76:	47b2                	lw	a5,12(sp)
1c008f78:	8f5d                	or	a4,a4,a5
1c008f7a:	c03a                	sw	a4,0(sp)
1c008f7c:	e719                	bnez	a4,1c008f8a <pos_libc_prf+0x9d0>
1c008f7e:	02414703          	lbu	a4,36(sp)
1c008f82:	02d00793          	li	a5,45
1c008f86:	dcf717e3          	bne	a4,a5,1c008d54 <pos_libc_prf+0x79a>
1c008f8a:	0c800793          	li	a5,200
1c008f8e:	fda7cd63          	blt	a5,s10,1c008768 <pos_libc_prf+0x1ae>
1c008f92:	4305                	li	t1,1
1c008f94:	c01a                	sw	t1,0(sp)
1c008f96:	b941                	j	1c008c26 <pos_libc_prf+0x66c>
1c008f98:	47e2                	lw	a5,24(sp)
1c008f9a:	dbe9                	beqz	a5,1c008f6c <pos_libc_prf+0x9b2>
1c008f9c:	06600c13          	li	s8,102
1c008fa0:	03000613          	li	a2,48
1c008fa4:	a011                	j	1c008fa8 <pos_libc_prf+0x9ee>
1c008fa6:	853a                	mv	a0,a4
1c008fa8:	fff50713          	addi	a4,a0,-1
1c008fac:	00074683          	lbu	a3,0(a4)
1c008fb0:	fec68be3          	beq	a3,a2,1c008fa6 <pos_libc_prf+0x9ec>
1c008fb4:	02e00613          	li	a2,46
1c008fb8:	f6c69de3          	bne	a3,a2,1c008f32 <pos_libc_prf+0x978>
1c008fbc:	853a                	mv	a0,a4
1c008fbe:	bf95                	j	1c008f32 <pos_libc_prf+0x978>
1c008fc0:	02410c93          	addi	s9,sp,36
1c008fc4:	41a40b33          	sub	s6,s0,s10
1c008fc8:	001d0613          	addi	a2,s10,1
1c008fcc:	85e6                	mv	a1,s9
1c008fce:	016c8533          	add	a0,s9,s6
1c008fd2:	cc4ff0ef          	jal	ra,1c008496 <memmove>
1c008fd6:	4312                	lw	t1,4(sp)
1c008fd8:	02000793          	li	a5,32
1c008fdc:	30f30c63          	beq	t1,a5,1c0092f4 <pos_libc_prf+0xd3a>
1c008fe0:	4702                	lw	a4,0(sp)
1c008fe2:	9b3a                	add	s6,s6,a4
1c008fe4:	c56754e3          	ble	s6,a4,1c008c2c <pos_libc_prf+0x672>
1c008fe8:	4782                	lw	a5,0(sp)
1c008fea:	00178713          	addi	a4,a5,1
1c008fee:	40fb07b3          	sub	a5,s6,a5
1c008ff2:	3aeb4563          	blt	s6,a4,1c00939c <pos_libc_prf+0xde2>
1c008ff6:	80000737          	lui	a4,0x80000
1c008ffa:	3aeb0163          	beq	s6,a4,1c00939c <pos_libc_prf+0xde2>
1c008ffe:	4612                	lw	a2,4(sp)
1c009000:	4702                	lw	a4,0(sp)
1c009002:	0087c0fb          	lp.setup	x1,a5,1c009012 <pos_libc_prf+0xa58>
1c009006:	0f010813          	addi	a6,sp,240
1c00900a:	00e806b3          	add	a3,a6,a4
1c00900e:	f2c68a23          	sb	a2,-204(a3)
1c009012:	0705                	addi	a4,a4,1
1c009014:	f2041c63          	bnez	s0,1c00874c <pos_libc_prf+0x192>
1c009018:	de4ff06f          	j	1c0085fc <pos_libc_prf+0x42>
1c00901c:	00175613          	srli	a2,a4,0x1
1c009020:	010716b3          	sll	a3,a4,a6
1c009024:	00f65733          	srl	a4,a2,a5
1c009028:	bb6d                	j	1c008de2 <pos_libc_prf+0x828>
1c00902a:	02410c93          	addi	s9,sp,36
1c00902e:	86de                	mv	a3,s7
1c009030:	4641                	li	a2,16
1c009032:	8566                	mv	a0,s9
1c009034:	d12ff0ef          	jal	ra,1c008546 <pos_libc_to_x>
1c009038:	05800713          	li	a4,88
1c00903c:	8d2a                	mv	s10,a0
1c00903e:	bcec1ae3          	bne	s8,a4,1c008c12 <pos_libc_prf+0x658>
1c009042:	02414783          	lbu	a5,36(sp)
1c009046:	4681                	li	a3,0
1c009048:	bc0785e3          	beqz	a5,1c008c12 <pos_libc_prf+0x658>
1c00904c:	4665                	li	a2,25
1c00904e:	f9f78713          	addi	a4,a5,-97
1c009052:	0ff77713          	andi	a4,a4,255
1c009056:	1781                	addi	a5,a5,-32
1c009058:	00e66463          	bltu	a2,a4,1c009060 <pos_libc_prf+0xaa6>
1c00905c:	00fc8023          	sb	a5,0(s9)
1c009060:	0c85                	addi	s9,s9,1
1c009062:	000cc783          	lbu	a5,0(s9)
1c009066:	f7e5                	bnez	a5,1c00904e <pos_libc_prf+0xa94>
1c009068:	4782                	lw	a5,0(sp)
1c00906a:	9d36                	add	s10,s10,a3
1c00906c:	ba0783e3          	beqz	a5,1c008c12 <pos_libc_prf+0x658>
1c009070:	4809                	li	a6,2
1c009072:	c042                	sw	a6,0(sp)
1c009074:	be79                	j	1c008c12 <pos_libc_prf+0x658>
1c009076:	02d00793          	li	a5,45
1c00907a:	02f10223          	sb	a5,36(sp)
1c00907e:	800007b7          	lui	a5,0x80000
1c009082:	26f58b63          	beq	a1,a5,1c0092f8 <pos_libc_prf+0xd3e>
1c009086:	40b005b3          	neg	a1,a1
1c00908a:	86de                	mv	a3,s7
1c00908c:	4629                	li	a2,10
1c00908e:	02510513          	addi	a0,sp,37
1c009092:	cb4ff0ef          	jal	ra,1c008546 <pos_libc_to_x>
1c009096:	02510793          	addi	a5,sp,37
1c00909a:	953e                	add	a0,a0,a5
1c00909c:	4805                	li	a6,1
1c00909e:	41950d33          	sub	s10,a0,s9
1c0090a2:	c042                	sw	a6,0(sp)
1c0090a4:	b121                	j	1c008cac <pos_libc_prf+0x6f2>
1c0090a6:	eda7c163          	blt	a5,s10,1c008768 <pos_libc_prf+0x1ae>
1c0090aa:	895a                	mv	s2,s6
1c0090ac:	bead                	j	1c008c26 <pos_libc_prf+0x66c>
1c0090ae:	8b36                	mv	s6,a3
1c0090b0:	e20ff06f          	j	1c0086d0 <pos_libc_prf+0x116>
1c0090b4:	4702                	lw	a4,0(sp)
1c0090b6:	cc02                	sw	zero,24(sp)
1c0090b8:	e701                	bnez	a4,1c0090c0 <pos_libc_prf+0xb06>
1c0090ba:	017037b3          	snez	a5,s7
1c0090be:	cc3e                	sw	a5,24(sp)
1c0090c0:	56f5                	li	a3,-3
1c0090c2:	001b8713          	addi	a4,s7,1
1c0090c6:	00d3c463          	blt	t2,a3,1c0090ce <pos_libc_prf+0xb14>
1c0090ca:	c8775ce3          	ble	t2,a4,1c008d62 <pos_libc_prf+0x7a8>
1c0090ce:	4841                	li	a6,16
1c0090d0:	05074733          	p.min	a4,a4,a6
1c0090d4:	06700693          	li	a3,103
1c0090d8:	fff70293          	addi	t0,a4,-1 # 7fffffff <pulp__FC+0x80000000>
1c0090dc:	28dc0763          	beq	s8,a3,1c00936a <pos_libc_prf+0xdb0>
1c0090e0:	04500c13          	li	s8,69
1c0090e4:	bad5                	j	1c008ad8 <pos_libc_prf+0x51e>
1c0090e6:	46a2                	lw	a3,8(sp)
1c0090e8:	1c068963          	beqz	a3,1c0092ba <pos_libc_prf+0xd00>
1c0090ec:	02b00713          	li	a4,43
1c0090f0:	02e10223          	sb	a4,36(sp)
1c0090f4:	02510b13          	addi	s6,sp,37
1c0090f8:	4381                	li	t2,0
1c0090fa:	4301                	li	t1,0
1c0090fc:	4601                	li	a2,0
1c0090fe:	4701                	li	a4,0
1c009100:	02410c93          	addi	s9,sp,36
1c009104:	babd                	j	1c008a82 <pos_libc_prf+0x4c8>
1c009106:	02510513          	addi	a0,sp,37
1c00910a:	86de                	mv	a3,s7
1c00910c:	4621                	li	a2,8
1c00910e:	c38ff0ef          	jal	ra,1c008546 <pos_libc_to_x>
1c009112:	4302                	lw	t1,0(sp)
1c009114:	0c800793          	li	a5,200
1c009118:	00650d33          	add	s10,a0,t1
1c00911c:	09fba063          	p.beqimm	s7,-1,1c00919c <pos_libc_prf+0xbe2>
1c009120:	e5a7c463          	blt	a5,s10,1c008768 <pos_libc_prf+0x1ae>
1c009124:	02000813          	li	a6,32
1c009128:	895a                	mv	s2,s6
1c00912a:	c002                	sw	zero,0(sp)
1c00912c:	c242                	sw	a6,4(sp)
1c00912e:	bce5                	j	1c008c26 <pos_libc_prf+0x66c>
1c009130:	02b00793          	li	a5,43
1c009134:	02f10223          	sb	a5,36(sp)
1c009138:	beb1                	j	1c008c94 <pos_libc_prf+0x6da>
1c00913a:	1048                	addi	a0,sp,36
1c00913c:	b7f9                	j	1c00910a <pos_libc_prf+0xb50>
1c00913e:	02410c93          	addi	s9,sp,36
1c009142:	86e6                	mv	a3,s9
1c009144:	2005c163          	bltz	a1,1c009346 <pos_libc_prf+0xd8c>
1c009148:	8e59                	or	a2,a2,a4
1c00914a:	fbfc0793          	addi	a5,s8,-65
1c00914e:	00368513          	addi	a0,a3,3
1c009152:	4765                	li	a4,25
1c009154:	18061463          	bnez	a2,1c0092dc <pos_libc_prf+0xd22>
1c009158:	1cf76d63          	bltu	a4,a5,1c009332 <pos_libc_prf+0xd78>
1c00915c:	6795                	lui	a5,0x5
1c00915e:	e4978793          	addi	a5,a5,-439 # 4e49 <__cluster_text_size+0x4e49>
1c009162:	00f69023          	sh	a5,0(a3)
1c009166:	04600793          	li	a5,70
1c00916a:	00f68123          	sb	a5,2(a3)
1c00916e:	000681a3          	sb	zero,3(a3)
1c009172:	41950d33          	sub	s10,a0,s9
1c009176:	bbfd                	j	1c008f74 <pos_libc_prf+0x9ba>
1c009178:	4b99                	li	s7,6
1c00917a:	94ec10e3          	bne	s8,a4,1c008aba <pos_libc_prf+0x500>
1c00917e:	4682                	lw	a3,0(sp)
1c009180:	57f5                	li	a5,-3
1c009182:	0016c693          	xori	a3,a3,1
1c009186:	cc36                	sw	a3,24(sp)
1c009188:	1cf3dd63          	ble	a5,t2,1c009362 <pos_libc_prf+0xda8>
1c00918c:	001b0693          	addi	a3,s6,1
1c009190:	ca36                	sw	a3,20(sp)
1c009192:	8536                	mv	a0,a3
1c009194:	06500c13          	li	s8,101
1c009198:	4299                	li	t0,6
1c00919a:	b299                	j	1c008ae0 <pos_libc_prf+0x526>
1c00919c:	dda7c663          	blt	a5,s10,1c008768 <pos_libc_prf+0x1ae>
1c0091a0:	895a                	mv	s2,s6
1c0091a2:	c002                	sw	zero,0(sp)
1c0091a4:	b449                	j	1c008c26 <pos_libc_prf+0x66c>
1c0091a6:	d80b84e3          	beqz	s7,1c008f2e <pos_libc_prf+0x974>
1c0091aa:	02e00713          	li	a4,46
1c0091ae:	002b0813          	addi	a6,s6,2
1c0091b2:	00eb00a3          	sb	a4,1(s6)
1c0091b6:	fffb8893          	addi	a7,s7,-1
1c0091ba:	bb29                	j	1c008ed4 <pos_libc_prf+0x91a>
1c0091bc:	18705c63          	blez	t2,1c009354 <pos_libc_prf+0xd9a>
1c0091c0:	4552                	lw	a0,20(sp)
1c0091c2:	4641                	li	a2,16
1c0091c4:	859e                	mv	a1,t2
1c0091c6:	0295c0fb          	lp.setup	x1,a1,1c009218 <pos_libc_prf+0xc5e>
1c0091ca:	002d1793          	slli	a5,s10,0x2
1c0091ce:	01ed5893          	srli	a7,s10,0x1e
1c0091d2:	00269713          	slli	a4,a3,0x2
1c0091d6:	01a78833          	add	a6,a5,s10
1c0091da:	00e8e733          	or	a4,a7,a4
1c0091de:	9736                	add	a4,a4,a3
1c0091e0:	00f837b3          	sltu	a5,a6,a5
1c0091e4:	97ba                	add	a5,a5,a4
1c0091e6:	0786                	slli	a5,a5,0x1
1c0091e8:	01f85713          	srli	a4,a6,0x1f
1c0091ec:	8fd9                	or	a5,a5,a4
1c0091ee:	01c7d313          	srli	t1,a5,0x1c
1c0091f2:	03000893          	li	a7,48
1c0091f6:	872a                	mv	a4,a0
1c0091f8:	00c05c63          	blez	a2,1c009210 <pos_libc_prf+0xc56>
1c0091fc:	00181d13          	slli	s10,a6,0x1
1c009200:	10000837          	lui	a6,0x10000
1c009204:	187d                	addi	a6,a6,-1
1c009206:	03030893          	addi	a7,t1,48 # 10000030 <buffer_im2col+0x2c>
1c00920a:	167d                	addi	a2,a2,-1
1c00920c:	0107f6b3          	and	a3,a5,a6
1c009210:	011b0023          	sb	a7,0(s6)
1c009214:	13fd                	addi	t2,t2,-1
1c009216:	8b2a                	mv	s6,a0
1c009218:	0505                	addi	a0,a0,1
1c00921a:	4302                	lw	t1,0(sp)
1c00921c:	00031563          	bnez	t1,1c009226 <pos_libc_prf+0xc6c>
1c009220:	853a                	mv	a0,a4
1c009222:	d60b8be3          	beqz	s7,1c008f98 <pos_libc_prf+0x9de>
1c009226:	02e00793          	li	a5,46
1c00922a:	00170513          	addi	a0,a4,1
1c00922e:	00f70023          	sb	a5,0(a4)
1c009232:	03000593          	li	a1,48
1c009236:	fffb8313          	addi	t1,s7,-1
1c00923a:	d5705fe3          	blez	s7,1c008f98 <pos_libc_prf+0x9de>
1c00923e:	002d1793          	slli	a5,s10,0x2
1c009242:	01ed5893          	srli	a7,s10,0x1e
1c009246:	00269713          	slli	a4,a3,0x2
1c00924a:	01a78833          	add	a6,a5,s10
1c00924e:	00e8e733          	or	a4,a7,a4
1c009252:	9736                	add	a4,a4,a3
1c009254:	00f837b3          	sltu	a5,a6,a5
1c009258:	97ba                	add	a5,a5,a4
1c00925a:	0786                	slli	a5,a5,0x1
1c00925c:	01f85713          	srli	a4,a6,0x1f
1c009260:	8fd9                	or	a5,a5,a4
1c009262:	01c7de13          	srli	t3,a5,0x1c
1c009266:	00150893          	addi	a7,a0,1
1c00926a:	02039563          	bnez	t2,1c009294 <pos_libc_prf+0xcda>
1c00926e:	03000713          	li	a4,48
1c009272:	00c05c63          	blez	a2,1c00928a <pos_libc_prf+0xcd0>
1c009276:	00181d13          	slli	s10,a6,0x1
1c00927a:	10000837          	lui	a6,0x10000
1c00927e:	187d                	addi	a6,a6,-1
1c009280:	030e0713          	addi	a4,t3,48
1c009284:	167d                	addi	a2,a2,-1
1c009286:	0107f6b3          	and	a3,a5,a6
1c00928a:	00e50023          	sb	a4,0(a0)
1c00928e:	8b9a                	mv	s7,t1
1c009290:	8546                	mv	a0,a7
1c009292:	b755                	j	1c009236 <pos_libc_prf+0xc7c>
1c009294:	00b50023          	sb	a1,0(a0)
1c009298:	0385                	addi	t2,t2,1
1c00929a:	bfd5                	j	1c00928e <pos_libc_prf+0xcd4>
1c00929c:	02d00793          	li	a5,45
1c0092a0:	407003b3          	neg	t2,t2
1c0092a4:	00f500a3          	sb	a5,1(a0)
1c0092a8:	b165                	j	1c008f50 <pos_libc_prf+0x996>
1c0092aa:	86de                	mv	a3,s7
1c0092ac:	4629                	li	a2,10
1c0092ae:	8566                	mv	a0,s9
1c0092b0:	a96ff0ef          	jal	ra,1c008546 <pos_libc_to_x>
1c0092b4:	8d2a                	mv	s10,a0
1c0092b6:	c002                	sw	zero,0(sp)
1c0092b8:	bad5                	j	1c008cac <pos_libc_prf+0x6f2>
1c0092ba:	4632                	lw	a2,12(sp)
1c0092bc:	10060163          	beqz	a2,1c0093be <pos_libc_prf+0xe04>
1c0092c0:	02000713          	li	a4,32
1c0092c4:	02e10223          	sb	a4,36(sp)
1c0092c8:	02510b13          	addi	s6,sp,37
1c0092cc:	02410c93          	addi	s9,sp,36
1c0092d0:	4381                	li	t2,0
1c0092d2:	4301                	li	t1,0
1c0092d4:	4601                	li	a2,0
1c0092d6:	4701                	li	a4,0
1c0092d8:	faaff06f          	j	1c008a82 <pos_libc_prf+0x4c8>
1c0092dc:	0af76663          	bltu	a4,a5,1c009388 <pos_libc_prf+0xdce>
1c0092e0:	6791                	lui	a5,0x4
1c0092e2:	14e78793          	addi	a5,a5,334 # 414e <__cluster_text_size+0x414e>
1c0092e6:	00f69023          	sh	a5,0(a3)
1c0092ea:	04e00793          	li	a5,78
1c0092ee:	00f68123          	sb	a5,2(a3)
1c0092f2:	bdb5                	j	1c00916e <pos_libc_prf+0xbb4>
1c0092f4:	c002                	sw	zero,0(sp)
1c0092f6:	b9cd                	j	1c008fe8 <pos_libc_prf+0xa2e>
1c0092f8:	86de                	mv	a3,s7
1c0092fa:	4629                	li	a2,10
1c0092fc:	800005b7          	lui	a1,0x80000
1c009300:	b379                	j	1c00908e <pos_libc_prf+0xad4>
1c009302:	4832                	lw	a6,12(sp)
1c009304:	02410c93          	addi	s9,sp,36
1c009308:	8b66                	mv	s6,s9
1c00930a:	e0080c63          	beqz	a6,1c008922 <pos_libc_prf+0x368>
1c00930e:	02000693          	li	a3,32
1c009312:	02d10223          	sb	a3,36(sp)
1c009316:	02510b13          	addi	s6,sp,37
1c00931a:	e08ff06f          	j	1c008922 <pos_libc_prf+0x368>
1c00931e:	02d00693          	li	a3,45
1c009322:	02d10223          	sb	a3,36(sp)
1c009326:	02510b13          	addi	s6,sp,37
1c00932a:	02410c93          	addi	s9,sp,36
1c00932e:	df4ff06f          	j	1c008922 <pos_libc_prf+0x368>
1c009332:	679d                	lui	a5,0x7
1c009334:	e6978793          	addi	a5,a5,-407 # 6e69 <__cluster_text_size+0x6e69>
1c009338:	00f69023          	sh	a5,0(a3)
1c00933c:	06600793          	li	a5,102
1c009340:	00f68123          	sb	a5,2(a3)
1c009344:	b52d                	j	1c00916e <pos_libc_prf+0xbb4>
1c009346:	02d00693          	li	a3,45
1c00934a:	02d10223          	sb	a3,36(sp)
1c00934e:	02510693          	addi	a3,sp,37
1c009352:	bbdd                	j	1c009148 <pos_libc_prf+0xb8e>
1c009354:	03000793          	li	a5,48
1c009358:	00fb0023          	sb	a5,0(s6)
1c00935c:	4752                	lw	a4,20(sp)
1c00935e:	4641                	li	a2,16
1c009360:	bd6d                	j	1c00921a <pos_libc_prf+0xc60>
1c009362:	479d                	li	a5,7
1c009364:	9e77dfe3          	ble	t2,a5,1c008d62 <pos_libc_prf+0x7a8>
1c009368:	4299                	li	t0,6
1c00936a:	06500c13          	li	s8,101
1c00936e:	f6aff06f          	j	1c008ad8 <pos_libc_prf+0x51e>
1c009372:	4772                	lw	a4,28(sp)
1c009374:	080006b7          	lui	a3,0x8000
1c009378:	96ba                	add	a3,a3,a4
1c00937a:	f606b7b3          	p.bclr	a5,a3,27,0
1c00937e:	e2078fe3          	beqz	a5,1c0091bc <pos_libc_prf+0xc02>
1c009382:	06600c13          	li	s8,102
1c009386:	bc19                	j	1c008d9c <pos_libc_prf+0x7e2>
1c009388:	6799                	lui	a5,0x6
1c00938a:	16e78793          	addi	a5,a5,366 # 616e <__cluster_text_size+0x616e>
1c00938e:	00f69023          	sh	a5,0(a3) # 8000000 <__l1_heap_size+0x7ff0708>
1c009392:	06e00793          	li	a5,110
1c009396:	00f68123          	sb	a5,2(a3)
1c00939a:	bbd1                	j	1c00916e <pos_libc_prf+0xbb4>
1c00939c:	4785                	li	a5,1
1c00939e:	4612                	lw	a2,4(sp)
1c0093a0:	4702                	lw	a4,0(sp)
1c0093a2:	b185                	j	1c009002 <pos_libc_prf+0xa48>
1c0093a4:	02414783          	lbu	a5,36(sp)
1c0093a8:	c799                	beqz	a5,1c0093b6 <pos_libc_prf+0xdfc>
1c0093aa:	4689                	li	a3,2
1c0093ac:	02410c93          	addi	s9,sp,36
1c0093b0:	b971                	j	1c00904c <pos_libc_prf+0xa92>
1c0093b2:	4785                	li	a5,1
1c0093b4:	b879                	j	1c008c52 <pos_libc_prf+0x698>
1c0093b6:	4709                	li	a4,2
1c0093b8:	0d09                	addi	s10,s10,2
1c0093ba:	c03a                	sw	a4,0(sp)
1c0093bc:	b899                	j	1c008c12 <pos_libc_prf+0x658>
1c0093be:	02410c93          	addi	s9,sp,36
1c0093c2:	8b66                	mv	s6,s9
1c0093c4:	b731                	j	1c0092d0 <pos_libc_prf+0xd16>
1c0093c6:	8542                	mv	a0,a6
1c0093c8:	b69d                	j	1c008f2e <pos_libc_prf+0x974>

1c0093ca <pos_init_start>:
1c0093ca:	1141                	addi	sp,sp,-16
1c0093cc:	c422                	sw	s0,8(sp)
1c0093ce:	1c000437          	lui	s0,0x1c000
1c0093d2:	c606                	sw	ra,12(sp)
1c0093d4:	00840413          	addi	s0,s0,8 # 1c000008 <ctor_list>
1c0093d8:	844ff0ef          	jal	ra,1c00841c <pos_soc_init>
1c0093dc:	2279                	jal	1c00956a <pos_irq_init>
1c0093de:	2ac1                	jal	1c0095ae <pos_soc_event_init>
1c0093e0:	20e5                	jal	1c0094c8 <pos_allocs_init>
1c0093e2:	405c                	lw	a5,4(s0)
1c0093e4:	c791                	beqz	a5,1c0093f0 <pos_init_start+0x26>
1c0093e6:	0411                	addi	s0,s0,4
1c0093e8:	0411                	addi	s0,s0,4
1c0093ea:	9782                	jalr	a5
1c0093ec:	401c                	lw	a5,0(s0)
1c0093ee:	ffed                	bnez	a5,1c0093e8 <pos_init_start+0x1e>
1c0093f0:	920ff0ef          	jal	ra,1c008510 <pos_io_start>
1c0093f4:	300467f3          	csrrsi	a5,mstatus,8
1c0093f8:	f1402573          	csrr	a0,mhartid
1c0093fc:	8515                	srai	a0,a0,0x5
1c0093fe:	f2653533          	p.bclr	a0,a0,25,6
1c009402:	47fd                	li	a5,31
1c009404:	00f50a63          	beq	a0,a5,1c009418 <pos_init_start+0x4e>
1c009408:	4422                	lw	s0,8(sp)
1c00940a:	40b2                	lw	ra,12(sp)
1c00940c:	1c0085b7          	lui	a1,0x1c008
1c009410:	35058593          	addi	a1,a1,848 # 1c008350 <main>
1c009414:	0141                	addi	sp,sp,16
1c009416:	a405                	j	1c009636 <cluster_start>
1c009418:	40b2                	lw	ra,12(sp)
1c00941a:	4422                	lw	s0,8(sp)
1c00941c:	0141                	addi	sp,sp,16
1c00941e:	8082                	ret

1c009420 <pos_init_stop>:
1c009420:	1141                	addi	sp,sp,-16
1c009422:	c422                	sw	s0,8(sp)
1c009424:	1c000437          	lui	s0,0x1c000
1c009428:	c606                	sw	ra,12(sp)
1c00942a:	01440413          	addi	s0,s0,20 # 1c000014 <dtor_list>
1c00942e:	8e6ff0ef          	jal	ra,1c008514 <pos_io_stop>
1c009432:	405c                	lw	a5,4(s0)
1c009434:	c791                	beqz	a5,1c009440 <pos_init_stop+0x20>
1c009436:	0411                	addi	s0,s0,4
1c009438:	0411                	addi	s0,s0,4
1c00943a:	9782                	jalr	a5
1c00943c:	401c                	lw	a5,0(s0)
1c00943e:	ffed                	bnez	a5,1c009438 <pos_init_stop+0x18>
1c009440:	40b2                	lw	ra,12(sp)
1c009442:	4422                	lw	s0,8(sp)
1c009444:	0141                	addi	sp,sp,16
1c009446:	8082                	ret

1c009448 <pos_alloc_init>:
1c009448:	00758793          	addi	a5,a1,7
1c00944c:	c407b7b3          	p.bclr	a5,a5,2,0
1c009450:	40b785b3          	sub	a1,a5,a1
1c009454:	c11c                	sw	a5,0(a0)
1c009456:	8e0d                	sub	a2,a2,a1
1c009458:	00c05763          	blez	a2,1c009466 <pos_alloc_init+0x1e>
1c00945c:	c4063633          	p.bclr	a2,a2,2,0
1c009460:	c390                	sw	a2,0(a5)
1c009462:	0007a223          	sw	zero,4(a5)
1c009466:	8082                	ret

1c009468 <pos_alloc>:
1c009468:	4110                	lw	a2,0(a0)
1c00946a:	059d                	addi	a1,a1,7
1c00946c:	c405b5b3          	p.bclr	a1,a1,2,0
1c009470:	ca31                	beqz	a2,1c0094c4 <pos_alloc+0x5c>
1c009472:	4218                	lw	a4,0(a2)
1c009474:	425c                	lw	a5,4(a2)
1c009476:	02b75963          	ble	a1,a4,1c0094a8 <pos_alloc+0x40>
1c00947a:	cb81                	beqz	a5,1c00948a <pos_alloc+0x22>
1c00947c:	4398                	lw	a4,0(a5)
1c00947e:	43d4                	lw	a3,4(a5)
1c009480:	00b75763          	ble	a1,a4,1c00948e <pos_alloc+0x26>
1c009484:	863e                	mv	a2,a5
1c009486:	87b6                	mv	a5,a3
1c009488:	fbf5                	bnez	a5,1c00947c <pos_alloc+0x14>
1c00948a:	853e                	mv	a0,a5
1c00948c:	8082                	ret
1c00948e:	00b70a63          	beq	a4,a1,1c0094a2 <pos_alloc+0x3a>
1c009492:	00b78533          	add	a0,a5,a1
1c009496:	8f0d                	sub	a4,a4,a1
1c009498:	c118                	sw	a4,0(a0)
1c00949a:	c154                	sw	a3,4(a0)
1c00949c:	c248                	sw	a0,4(a2)
1c00949e:	853e                	mv	a0,a5
1c0094a0:	8082                	ret
1c0094a2:	c254                	sw	a3,4(a2)
1c0094a4:	853e                	mv	a0,a5
1c0094a6:	8082                	ret
1c0094a8:	00e58b63          	beq	a1,a4,1c0094be <pos_alloc+0x56>
1c0094ac:	00b606b3          	add	a3,a2,a1
1c0094b0:	8f0d                	sub	a4,a4,a1
1c0094b2:	c2dc                	sw	a5,4(a3)
1c0094b4:	c298                	sw	a4,0(a3)
1c0094b6:	87b2                	mv	a5,a2
1c0094b8:	c114                	sw	a3,0(a0)
1c0094ba:	853e                	mv	a0,a5
1c0094bc:	8082                	ret
1c0094be:	c11c                	sw	a5,0(a0)
1c0094c0:	87b2                	mv	a5,a2
1c0094c2:	b7e1                	j	1c00948a <pos_alloc+0x22>
1c0094c4:	4781                	li	a5,0
1c0094c6:	b7d1                	j	1c00948a <pos_alloc+0x22>

1c0094c8 <pos_allocs_init>:
1c0094c8:	1141                	addi	sp,sp,-16
1c0094ca:	1c0015b7          	lui	a1,0x1c001
1c0094ce:	c606                	sw	ra,12(sp)
1c0094d0:	88458793          	addi	a5,a1,-1916 # 1c000884 <__l2_priv0_end>
1c0094d4:	1c008637          	lui	a2,0x1c008
1c0094d8:	04c7cc63          	blt	a5,a2,1c009530 <pos_allocs_init+0x68>
1c0094dc:	4581                	li	a1,0
1c0094de:	4601                	li	a2,0
1c0094e0:	1c001537          	lui	a0,0x1c001
1c0094e4:	87450513          	addi	a0,a0,-1932 # 1c000874 <pos_alloc_l2>
1c0094e8:	3785                	jal	1c009448 <pos_alloc_init>
1c0094ea:	1c0095b7          	lui	a1,0x1c009
1c0094ee:	71858793          	addi	a5,a1,1816 # 1c009718 <__l2_priv1_end>
1c0094f2:	1c010637          	lui	a2,0x1c010
1c0094f6:	02c7c963          	blt	a5,a2,1c009528 <pos_allocs_init+0x60>
1c0094fa:	4581                	li	a1,0
1c0094fc:	4601                	li	a2,0
1c0094fe:	1c001537          	lui	a0,0x1c001
1c009502:	87850513          	addi	a0,a0,-1928 # 1c000878 <pos_alloc_l2+0x4>
1c009506:	3789                	jal	1c009448 <pos_alloc_init>
1c009508:	100005b7          	lui	a1,0x10000
1c00950c:	40b2                	lw	ra,12(sp)
1c00950e:	70858793          	addi	a5,a1,1800 # 10000708 <__l2_shared_end>
1c009512:	1c080637          	lui	a2,0x1c080
1c009516:	1c001537          	lui	a0,0x1c001
1c00951a:	8e1d                	sub	a2,a2,a5
1c00951c:	70858593          	addi	a1,a1,1800
1c009520:	87c50513          	addi	a0,a0,-1924 # 1c00087c <pos_alloc_l2+0x8>
1c009524:	0141                	addi	sp,sp,16
1c009526:	b70d                	j	1c009448 <pos_alloc_init>
1c009528:	8e1d                	sub	a2,a2,a5
1c00952a:	71858593          	addi	a1,a1,1816
1c00952e:	bfc1                	j	1c0094fe <pos_allocs_init+0x36>
1c009530:	8e1d                	sub	a2,a2,a5
1c009532:	88458593          	addi	a1,a1,-1916
1c009536:	b76d                	j	1c0094e0 <pos_allocs_init+0x18>

1c009538 <alloc_init_l1>:
1c009538:	100007b7          	lui	a5,0x10000
1c00953c:	01651593          	slli	a1,a0,0x16
1c009540:	70878793          	addi	a5,a5,1800 # 10000708 <__l2_shared_end>
1c009544:	95be                	add	a1,a1,a5
1c009546:	1c0017b7          	lui	a5,0x1c001
1c00954a:	050a                	slli	a0,a0,0x2
1c00954c:	6641                	lui	a2,0x10
1c00954e:	87078793          	addi	a5,a5,-1936 # 1c000870 <pos_alloc_l1>
1c009552:	8f860613          	addi	a2,a2,-1800 # f8f8 <__l1_heap_size>
1c009556:	953e                	add	a0,a0,a5
1c009558:	bdc5                	j	1c009448 <pos_alloc_init>

1c00955a <pi_l1_malloc>:
1c00955a:	1c0017b7          	lui	a5,0x1c001
1c00955e:	050a                	slli	a0,a0,0x2
1c009560:	87078793          	addi	a5,a5,-1936 # 1c000870 <pos_alloc_l1>
1c009564:	953e                	add	a0,a0,a5
1c009566:	b709                	j	1c009468 <pos_alloc>

1c009568 <__rt_handle_illegal_instr>:
1c009568:	8082                	ret

1c00956a <pos_irq_init>:
1c00956a:	f14027f3          	csrr	a5,mhartid
1c00956e:	477d                	li	a4,31
1c009570:	ca5797b3          	p.extractu	a5,a5,5,5
1c009574:	00e78f63          	beq	a5,a4,1c009592 <pos_irq_init+0x28>
1c009578:	002047b7          	lui	a5,0x204
1c00957c:	577d                	li	a4,-1
1c00957e:	cb98                	sw	a4,16(a5)
1c009580:	1c0087b7          	lui	a5,0x1c008
1c009584:	00078793          	mv	a5,a5
1c009588:	c007c7b3          	p.bset	a5,a5,0,0
1c00958c:	30579073          	csrw	mtvec,a5
1c009590:	8082                	ret
1c009592:	1a10a7b7          	lui	a5,0x1a10a
1c009596:	577d                	li	a4,-1
1c009598:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa109100>
1c00959c:	1c0087b7          	lui	a5,0x1c008
1c0095a0:	00078793          	mv	a5,a5
1c0095a4:	c007c7b3          	p.bset	a5,a5,0,0
1c0095a8:	30579073          	csrw	mtvec,a5
1c0095ac:	8082                	ret

1c0095ae <pos_soc_event_init>:
1c0095ae:	1a1067b7          	lui	a5,0x1a106
1c0095b2:	577d                	li	a4,-1
1c0095b4:	00478693          	addi	a3,a5,4 # 1a106004 <__l2_shared_end+0xa1058fc>
1c0095b8:	c298                	sw	a4,0(a3)
1c0095ba:	00878693          	addi	a3,a5,8
1c0095be:	c298                	sw	a4,0(a3)
1c0095c0:	00c78693          	addi	a3,a5,12
1c0095c4:	c298                	sw	a4,0(a3)
1c0095c6:	01078693          	addi	a3,a5,16
1c0095ca:	c298                	sw	a4,0(a3)
1c0095cc:	01478693          	addi	a3,a5,20
1c0095d0:	c298                	sw	a4,0(a3)
1c0095d2:	01878693          	addi	a3,a5,24
1c0095d6:	c298                	sw	a4,0(a3)
1c0095d8:	01c78693          	addi	a3,a5,28
1c0095dc:	c298                	sw	a4,0(a3)
1c0095de:	02078793          	addi	a5,a5,32
1c0095e2:	c398                	sw	a4,0(a5)
1c0095e4:	8082                	ret

1c0095e6 <cluster_entry_stub>:
1c0095e6:	1141                	addi	sp,sp,-16
1c0095e8:	c606                	sw	ra,12(sp)
1c0095ea:	002047b7          	lui	a5,0x204
1c0095ee:	00070737          	lui	a4,0x70
1c0095f2:	c798                	sw	a4,8(a5)
1c0095f4:	0ff00713          	li	a4,255
1c0095f8:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4908>
1c0095fc:	00e7a023          	sw	a4,0(a5)
1c009600:	00e7a623          	sw	a4,12(a5)
1c009604:	1c0017b7          	lui	a5,0x1c001
1c009608:	8807a783          	lw	a5,-1920(a5) # 1c000880 <cluster_entry>
1c00960c:	9782                	jalr	a5
1c00960e:	f14027f3          	csrr	a5,mhartid
1c009612:	f457b7b3          	p.bclr	a5,a5,26,5
1c009616:	eb89                	bnez	a5,1c009628 <cluster_entry_stub+0x42>
1c009618:	1c001737          	lui	a4,0x1c001
1c00961c:	1c0017b7          	lui	a5,0x1c001
1c009620:	86a72423          	sw	a0,-1944(a4) # 1c000868 <_bss_start>
1c009624:	8607a623          	sw	zero,-1940(a5) # 1c00086c <cluster_running>
1c009628:	002047b7          	lui	a5,0x204
1c00962c:	577d                	li	a4,-1
1c00962e:	c3d8                	sw	a4,4(a5)
1c009630:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f4740>
1c009634:	a001                	j	1c009634 <cluster_entry_stub+0x4e>

1c009636 <cluster_start>:
1c009636:	1141                	addi	sp,sp,-16
1c009638:	1c0017b7          	lui	a5,0x1c001
1c00963c:	c226                	sw	s1,4(sp)
1c00963e:	84aa                	mv	s1,a0
1c009640:	4509                	li	a0,2
1c009642:	88b7a023          	sw	a1,-1920(a5) # 1c000880 <cluster_entry>
1c009646:	c606                	sw	ra,12(sp)
1c009648:	c422                	sw	s0,8(sp)
1c00964a:	d29fe0ef          	jal	ra,1c008372 <pos_fll_init>
1c00964e:	8526                	mv	a0,s1
1c009650:	35e5                	jal	1c009538 <alloc_init_l1>
1c009652:	04048413          	addi	s0,s1,64
1c009656:	00201737          	lui	a4,0x201
1c00965a:	40070713          	addi	a4,a4,1024 # 201400 <__l1_heap_size+0x1f1b08>
1c00965e:	045a                	slli	s0,s0,0x16
1c009660:	56fd                	li	a3,-1
1c009662:	f14027f3          	csrr	a5,mhartid
1c009666:	00d46723          	p.sw	a3,a4(s0)
1c00966a:	ca5797b3          	p.extractu	a5,a5,5,5
1c00966e:	477d                	li	a4,31
1c009670:	00e78f63          	beq	a5,a4,1c00968e <cluster_start+0x58>
1c009674:	002047b7          	lui	a5,0x204
1c009678:	00070737          	lui	a4,0x70
1c00967c:	c798                	sw	a4,8(a5)
1c00967e:	0ff00713          	li	a4,255
1c009682:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4908>
1c009686:	00e7a023          	sw	a4,0(a5)
1c00968a:	00e7a623          	sw	a4,12(a5)
1c00968e:	8526                	mv	a0,s1
1c009690:	3565                	jal	1c009538 <alloc_init_l1>
1c009692:	6591                	lui	a1,0x4
1c009694:	8526                	mv	a0,s1
1c009696:	35d1                	jal	1c00955a <pi_l1_malloc>
1c009698:	100007b7          	lui	a5,0x10000
1c00969c:	70a7a223          	sw	a0,1796(a5) # 10000704 <cluster_stacks>
1c0096a0:	cd15                	beqz	a0,1c0096dc <cluster_start+0xa6>
1c0096a2:	00200637          	lui	a2,0x200
1c0096a6:	1c0017b7          	lui	a5,0x1c001
1c0096aa:	4705                	li	a4,1
1c0096ac:	1c0085b7          	lui	a1,0x1c008
1c0096b0:	04060613          	addi	a2,a2,64 # 200040 <__l1_heap_size+0x1f0748>
1c0096b4:	86e7a623          	sw	a4,-1940(a5) # 1c00086c <cluster_running>
1c0096b8:	08058593          	addi	a1,a1,128 # 1c008080 <_start>
1c0096bc:	9622                	add	a2,a2,s0
1c0096be:	4701                	li	a4,0
1c0096c0:	008350fb          	lp.setupi	x1,8,1c0096cc <cluster_start+0x96>
1c0096c4:	00271693          	slli	a3,a4,0x2
1c0096c8:	00b6e623          	p.sw	a1,a2(a3)
1c0096cc:	0705                	addi	a4,a4,1
1c0096ce:	002007b7          	lui	a5,0x200
1c0096d2:	07a1                	addi	a5,a5,8
1c0096d4:	0ff00713          	li	a4,255
1c0096d8:	00e467a3          	p.sw	a4,a5(s0)
1c0096dc:	40b2                	lw	ra,12(sp)
1c0096de:	4422                	lw	s0,8(sp)
1c0096e0:	4492                	lw	s1,4(sp)
1c0096e2:	0141                	addi	sp,sp,16
1c0096e4:	8082                	ret

1c0096e6 <cluster_wait>:
1c0096e6:	1c001737          	lui	a4,0x1c001
1c0096ea:	86c70713          	addi	a4,a4,-1940 # 1c00086c <cluster_running>
1c0096ee:	431c                	lw	a5,0(a4)
1c0096f0:	fffd                	bnez	a5,1c0096ee <cluster_wait+0x8>
1c0096f2:	1c0017b7          	lui	a5,0x1c001
1c0096f6:	8687a503          	lw	a0,-1944(a5) # 1c000868 <_bss_start>
1c0096fa:	8082                	ret

1c0096fc <synch_barrier>:
1c0096fc:	f14027f3          	csrr	a5,mhartid
1c009700:	477d                	li	a4,31
1c009702:	ca5797b3          	p.extractu	a5,a5,5,5
1c009706:	00e78863          	beq	a5,a4,1c009716 <synch_barrier+0x1a>
1c00970a:	002047b7          	lui	a5,0x204
1c00970e:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4908>
1c009712:	01c7e703          	p.elw	a4,28(a5)
1c009716:	8082                	ret
make[1]: Leaving directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/mac_load_8cores'
