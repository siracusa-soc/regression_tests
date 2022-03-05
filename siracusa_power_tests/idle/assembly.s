Flags : -O3 -Iinc  -DNB_RUN=1   
make[1]: Entering directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/idle'
/usr/scratch/fenga5/beppe/INSTALL-PULP/bin/riscv32-unknown-elf-objdump -Mmarch=rv32imcxgap9 -d /scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/idle/build/test/test

/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/idle/build/test/test:     file format elf32-littleriscv


Disassembly of section .vectors:

1c008000 <__irq_vector_base>:
1c008000:	4d00006f          	j	1c0084d0 <__rt_handle_illegal_instr>
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
1c008084:	44c0006f          	j	1c0084d0 <__rt_handle_illegal_instr>

1c008088 <pos_no_irq_handler>:
1c008088:	30200073          	mret

1c00808c <pos_semihosting_call>:
1c00808c:	00100073          	ebreak
1c008090:	00008067          	ret

1c008094 <pe_start>:
1c008094:	f3ff8117          	auipc	sp,0xf3ff8
1c008098:	f7010113          	addi	sp,sp,-144 # 10000004 <cluster_stacks>
1c00809c:	00012103          	lw	sp,0(sp)
1c0080a0:	000011b7          	lui	gp,0x1
1c0080a4:	80018193          	addi	gp,gp,-2048 # 800 <__cluster_text_size+0x800>
1c0080a8:	00158593          	addi	a1,a1,1
1c0080ac:	02b180b3          	mul	ra,gp,a1
1c0080b0:	00110133          	add	sp,sp,ra
1c0080b4:	49a0006f          	j	1c00854e <cluster_entry_stub>

1c0080b8 <do_cl_boot>:
1c0080b8:	10200137          	lui	sp,0x10200
1c0080bc:	00100193          	li	gp,1
1c0080c0:	00000217          	auipc	tp,0x0
1c0080c4:	fc020213          	addi	tp,tp,-64 # 1c008080 <_start>
1c0080c8:	04412023          	sw	tp,64(sp) # 10200040 <__l2_shared_end+0x200038>
1c0080cc:	00312423          	sw	gp,8(sp)

1c0080d0 <loop>:
1c0080d0:	1a10a137          	lui	sp,0x1a10a
1c0080d4:	80010113          	addi	sp,sp,-2048 # 1a109800 <__l2_shared_end+0xa1097f8>
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
1c00811a:	21e000ef          	jal	ra,1c008338 <pos_init_start>
1c00811e:	00000513          	li	a0,0
1c008122:	00000593          	li	a1,0
1c008126:	00000397          	auipc	t2,0x0
1c00812a:	0f638393          	addi	t2,t2,246 # 1c00821c <main>
1c00812e:	000380e7          	jalr	t2
1c008132:	842a                	mv	s0,a0
1c008134:	256000ef          	jal	ra,1c00838a <pos_init_stop>
1c008138:	8522                	mv	a0,s0
1c00813a:	1e4000ef          	jal	ra,1c00831e <exit>

1c00813e <cluster_entry>:
1c00813e:	1101                	addi	sp,sp,-32
1c008140:	f14027f3          	csrr	a5,mhartid
1c008144:	ce06                	sw	ra,28(sp)
1c008146:	f457b7b3          	p.bclr	a5,a5,26,5
1c00814a:	eb81                	bnez	a5,1c00815a <cluster_entry+0x1c>
1c00814c:	abbab7b7          	lui	a5,0xabbab
1c008150:	10000737          	lui	a4,0x10000
1c008154:	bba78793          	addi	a5,a5,-1094 # abbaabba <pulp__FC+0xabbaabbb>
1c008158:	c31c                	sw	a5,0(a4)
1c00815a:	1a10f7b7          	lui	a5,0x1a10f
1c00815e:	439c                	lw	a5,0(a5)
1c008160:	c63e                	sw	a5,12(sp)
1c008162:	2b01                	jal	1c008672 <synch_barrier>
1c008164:	40f2                	lw	ra,28(sp)
1c008166:	4501                	li	a0,0
1c008168:	6105                	addi	sp,sp,32
1c00816a:	8082                	ret

1c00816c <run_test>:
1c00816c:	102007b7          	lui	a5,0x10200
1c008170:	07e1                	addi	a5,a5,24
1c008172:	4398                	lw	a4,0(a5)
1c008174:	1141                	addi	sp,sp,-16
1c008176:	c0b74733          	p.bset	a4,a4,0,11
1c00817a:	c398                	sw	a4,0(a5)
1c00817c:	4398                	lw	a4,0(a5)
1c00817e:	c0874733          	p.bset	a4,a4,0,8
1c008182:	c398                	sw	a4,0(a5)
1c008184:	4398                	lw	a4,0(a5)
1c008186:	ce073733          	p.bclr	a4,a4,7,0
1c00818a:	c398                	sw	a4,0(a5)
1c00818c:	4398                	lw	a4,0(a5)
1c00818e:	c0374733          	p.bset	a4,a4,0,3
1c008192:	c398                	sw	a4,0(a5)
1c008194:	102017b7          	lui	a5,0x10201
1c008198:	0007aa23          	sw	zero,20(a5) # 10201014 <__l2_shared_end+0x20100c>
1c00819c:	c402                	sw	zero,8(sp)
1c00819e:	4722                	lw	a4,8(sp)
1c0081a0:	47a5                	li	a5,9
1c0081a2:	00e7c963          	blt	a5,a4,1c0081b4 <run_test+0x48>
1c0081a6:	4725                	li	a4,9
1c0081a8:	47a2                	lw	a5,8(sp)
1c0081aa:	0785                	addi	a5,a5,1
1c0081ac:	c43e                	sw	a5,8(sp)
1c0081ae:	47a2                	lw	a5,8(sp)
1c0081b0:	fef75ce3          	ble	a5,a4,1c0081a8 <run_test+0x3c>
1c0081b4:	102016b7          	lui	a3,0x10201
1c0081b8:	0006aa23          	sw	zero,20(a3) # 10201014 <__l2_shared_end+0x20100c>
1c0081bc:	6741                	lui	a4,0x10
1c0081be:	02170613          	addi	a2,a4,33 # 10021 <__l1_heap_size+0x29>
1c0081c2:	02068793          	addi	a5,a3,32
1c0081c6:	02c7ae23          	sw	a2,60(a5)
1c0081ca:	00170613          	addi	a2,a4,1
1c0081ce:	04c7a023          	sw	a2,64(a5)
1c0081d2:	04c7a223          	sw	a2,68(a5)
1c0081d6:	0709                	addi	a4,a4,2
1c0081d8:	04e7a423          	sw	a4,72(a5)
1c0081dc:	04c7a623          	sw	a2,76(a5)
1c0081e0:	60000713          	li	a4,1536
1c0081e4:	04e7ae23          	sw	a4,92(a5)
1c0081e8:	0006a0a3          	sw	zero,1(a3)
1c0081ec:	0006a023          	sw	zero,0(a3)
1c0081f0:	c602                	sw	zero,12(sp)
1c0081f2:	4732                	lw	a4,12(sp)
1c0081f4:	47a5                	li	a5,9
1c0081f6:	00e7c963          	blt	a5,a4,1c008208 <run_test+0x9c>
1c0081fa:	4725                	li	a4,9
1c0081fc:	47b2                	lw	a5,12(sp)
1c0081fe:	0785                	addi	a5,a5,1
1c008200:	c63e                	sw	a5,12(sp)
1c008202:	47b2                	lw	a5,12(sp)
1c008204:	fef75ce3          	ble	a5,a4,1c0081fc <run_test+0x90>
1c008208:	102017b7          	lui	a5,0x10201
1c00820c:	20000713          	li	a4,512
1c008210:	02078793          	addi	a5,a5,32 # 10201020 <__l2_shared_end+0x201018>
1c008214:	04e7ae23          	sw	a4,92(a5)
1c008218:	0141                	addi	sp,sp,16
1c00821a:	8082                	ret

1c00821c <main>:
1c00821c:	1101                	addi	sp,sp,-32
1c00821e:	f14027f3          	csrr	a5,mhartid
1c008222:	ce06                	sw	ra,28(sp)
1c008224:	c602                	sw	zero,12(sp)
1c008226:	ca5797b3          	p.extractu	a5,a5,5,5
1c00822a:	c391                	beqz	a5,1c00822e <main+0x12>
1c00822c:	3781                	jal	1c00816c <run_test>
1c00822e:	1c0085b7          	lui	a1,0x1c008
1c008232:	4501                	li	a0,0
1c008234:	13e58593          	addi	a1,a1,318 # 1c00813e <cluster_entry>
1c008238:	269d                	jal	1c00859e <cluster_start>
1c00823a:	40f2                	lw	ra,28(sp)
1c00823c:	4501                	li	a0,0
1c00823e:	6105                	addi	sp,sp,32
1c008240:	8082                	ret

1c008242 <pos_fll_init>:
1c008242:	08152063          	p.beqimm	a0,1,1c0082c2 <pos_fll_init+0x80>
1c008246:	04252a63          	p.beqimm	a0,2,1c00829a <pos_fll_init+0x58>
1c00824a:	c505                	beqz	a0,1c008272 <pos_fll_init+0x30>
1c00824c:	4701                	li	a4,0
1c00824e:	00470793          	addi	a5,a4,4
1c008252:	05300613          	li	a2,83
1c008256:	00c70693          	addi	a3,a4,12
1c00825a:	c390                	sw	a2,0(a5)
1c00825c:	020c17b7          	lui	a5,0x20c1
1c008260:	0721                	addi	a4,a4,8
1c008262:	0006a023          	sw	zero,0(a3)
1c008266:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b17e2>
1c00826a:	c31c                	sw	a5,0(a4)
1c00826c:	05f68537          	lui	a0,0x5f68
1c008270:	8082                	ret
1c008272:	1a1007b7          	lui	a5,0x1a100
1c008276:	00878713          	addi	a4,a5,8 # 1a100008 <__l2_shared_end+0xa100000>
1c00827a:	00c78693          	addi	a3,a5,12
1c00827e:	05300613          	li	a2,83
1c008282:	0791                	addi	a5,a5,4
1c008284:	c390                	sw	a2,0(a5)
1c008286:	020c17b7          	lui	a5,0x20c1
1c00828a:	0006a023          	sw	zero,0(a3)
1c00828e:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b17e2>
1c008292:	c31c                	sw	a5,0(a4)
1c008294:	05f68537          	lui	a0,0x5f68
1c008298:	8082                	ret
1c00829a:	1a1007b7          	lui	a5,0x1a100
1c00829e:	01878713          	addi	a4,a5,24 # 1a100018 <__l2_shared_end+0xa100010>
1c0082a2:	01c78693          	addi	a3,a5,28
1c0082a6:	05300613          	li	a2,83
1c0082aa:	07d1                	addi	a5,a5,20
1c0082ac:	c390                	sw	a2,0(a5)
1c0082ae:	020c17b7          	lui	a5,0x20c1
1c0082b2:	0006a023          	sw	zero,0(a3)
1c0082b6:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b17e2>
1c0082ba:	c31c                	sw	a5,0(a4)
1c0082bc:	05f68537          	lui	a0,0x5f68
1c0082c0:	8082                	ret
1c0082c2:	1a1007b7          	lui	a5,0x1a100
1c0082c6:	02878713          	addi	a4,a5,40 # 1a100028 <__l2_shared_end+0xa100020>
1c0082ca:	02c78693          	addi	a3,a5,44
1c0082ce:	05300613          	li	a2,83
1c0082d2:	02478793          	addi	a5,a5,36
1c0082d6:	c390                	sw	a2,0(a5)
1c0082d8:	020c17b7          	lui	a5,0x20c1
1c0082dc:	0006a023          	sw	zero,0(a3)
1c0082e0:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b17e2>
1c0082e4:	c31c                	sw	a5,0(a4)
1c0082e6:	05f68537          	lui	a0,0x5f68
1c0082ea:	8082                	ret

1c0082ec <pos_soc_init>:
1c0082ec:	8082                	ret

1c0082ee <pos_wait_forever>:
1c0082ee:	f14027f3          	csrr	a5,mhartid
1c0082f2:	477d                	li	a4,31
1c0082f4:	ca5797b3          	p.extractu	a5,a5,5,5
1c0082f8:	00e78963          	beq	a5,a4,1c00830a <pos_wait_forever+0x1c>
1c0082fc:	002047b7          	lui	a5,0x204
1c008300:	577d                	li	a4,-1
1c008302:	c3d8                	sw	a4,4(a5)
1c008304:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f4040>
1c008308:	a001                	j	1c008308 <pos_wait_forever+0x1a>
1c00830a:	1a10a7b7          	lui	a5,0x1a10a
1c00830e:	577d                	li	a4,-1
1c008310:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa109800>
1c008314:	10500073          	wfi
1c008318:	10500073          	wfi
1c00831c:	bfe5                	j	1c008314 <pos_wait_forever+0x26>

1c00831e <exit>:
1c00831e:	1141                	addi	sp,sp,-16
1c008320:	c606                	sw	ra,12(sp)
1c008322:	1a1047b7          	lui	a5,0x1a104
1c008326:	c1f54533          	p.bset	a0,a0,0,31
1c00832a:	0aa7a023          	sw	a0,160(a5) # 1a1040a0 <__l2_shared_end+0xa104098>
1c00832e:	37c1                	jal	1c0082ee <pos_wait_forever>

1c008330 <pos_io_start>:
1c008330:	4501                	li	a0,0
1c008332:	8082                	ret

1c008334 <pos_io_stop>:
1c008334:	4501                	li	a0,0
1c008336:	8082                	ret

1c008338 <pos_init_start>:
1c008338:	1141                	addi	sp,sp,-16
1c00833a:	c422                	sw	s0,8(sp)
1c00833c:	1c000437          	lui	s0,0x1c000
1c008340:	c606                	sw	ra,12(sp)
1c008342:	00840413          	addi	s0,s0,8 # 1c000008 <ctor_list>
1c008346:	375d                	jal	1c0082ec <pos_soc_init>
1c008348:	2269                	jal	1c0084d2 <pos_irq_init>
1c00834a:	22f1                	jal	1c008516 <pos_soc_event_init>
1c00834c:	20d5                	jal	1c008430 <pos_allocs_init>
1c00834e:	405c                	lw	a5,4(s0)
1c008350:	c791                	beqz	a5,1c00835c <pos_init_start+0x24>
1c008352:	0421                	addi	s0,s0,8
1c008354:	9782                	jalr	a5
1c008356:	0044278b          	p.lw	a5,4(s0!)
1c00835a:	ffed                	bnez	a5,1c008354 <pos_init_start+0x1c>
1c00835c:	3fd1                	jal	1c008330 <pos_io_start>
1c00835e:	300467f3          	csrrsi	a5,mstatus,8
1c008362:	f1402573          	csrr	a0,mhartid
1c008366:	8515                	srai	a0,a0,0x5
1c008368:	f2653533          	p.bclr	a0,a0,25,6
1c00836c:	47fd                	li	a5,31
1c00836e:	00f50a63          	beq	a0,a5,1c008382 <pos_init_start+0x4a>
1c008372:	4422                	lw	s0,8(sp)
1c008374:	40b2                	lw	ra,12(sp)
1c008376:	1c0085b7          	lui	a1,0x1c008
1c00837a:	21c58593          	addi	a1,a1,540 # 1c00821c <main>
1c00837e:	0141                	addi	sp,sp,16
1c008380:	ac39                	j	1c00859e <cluster_start>
1c008382:	40b2                	lw	ra,12(sp)
1c008384:	4422                	lw	s0,8(sp)
1c008386:	0141                	addi	sp,sp,16
1c008388:	8082                	ret

1c00838a <pos_init_stop>:
1c00838a:	1141                	addi	sp,sp,-16
1c00838c:	c422                	sw	s0,8(sp)
1c00838e:	1c000437          	lui	s0,0x1c000
1c008392:	c606                	sw	ra,12(sp)
1c008394:	01440413          	addi	s0,s0,20 # 1c000014 <dtor_list>
1c008398:	3f71                	jal	1c008334 <pos_io_stop>
1c00839a:	405c                	lw	a5,4(s0)
1c00839c:	c791                	beqz	a5,1c0083a8 <pos_init_stop+0x1e>
1c00839e:	0421                	addi	s0,s0,8
1c0083a0:	9782                	jalr	a5
1c0083a2:	0044278b          	p.lw	a5,4(s0!)
1c0083a6:	ffed                	bnez	a5,1c0083a0 <pos_init_stop+0x16>
1c0083a8:	40b2                	lw	ra,12(sp)
1c0083aa:	4422                	lw	s0,8(sp)
1c0083ac:	0141                	addi	sp,sp,16
1c0083ae:	8082                	ret

1c0083b0 <pos_alloc_init>:
1c0083b0:	00758793          	addi	a5,a1,7
1c0083b4:	c407b7b3          	p.bclr	a5,a5,2,0
1c0083b8:	40b785b3          	sub	a1,a5,a1
1c0083bc:	c11c                	sw	a5,0(a0)
1c0083be:	8e0d                	sub	a2,a2,a1
1c0083c0:	00c05763          	blez	a2,1c0083ce <pos_alloc_init+0x1e>
1c0083c4:	c4063633          	p.bclr	a2,a2,2,0
1c0083c8:	c390                	sw	a2,0(a5)
1c0083ca:	0007a223          	sw	zero,4(a5)
1c0083ce:	8082                	ret

1c0083d0 <pos_alloc>:
1c0083d0:	4110                	lw	a2,0(a0)
1c0083d2:	059d                	addi	a1,a1,7
1c0083d4:	c405b5b3          	p.bclr	a1,a1,2,0
1c0083d8:	ca31                	beqz	a2,1c00842c <pos_alloc+0x5c>
1c0083da:	4218                	lw	a4,0(a2)
1c0083dc:	425c                	lw	a5,4(a2)
1c0083de:	02b75963          	ble	a1,a4,1c008410 <pos_alloc+0x40>
1c0083e2:	cb81                	beqz	a5,1c0083f2 <pos_alloc+0x22>
1c0083e4:	4398                	lw	a4,0(a5)
1c0083e6:	43d4                	lw	a3,4(a5)
1c0083e8:	00b75763          	ble	a1,a4,1c0083f6 <pos_alloc+0x26>
1c0083ec:	863e                	mv	a2,a5
1c0083ee:	87b6                	mv	a5,a3
1c0083f0:	fbf5                	bnez	a5,1c0083e4 <pos_alloc+0x14>
1c0083f2:	853e                	mv	a0,a5
1c0083f4:	8082                	ret
1c0083f6:	00b70a63          	beq	a4,a1,1c00840a <pos_alloc+0x3a>
1c0083fa:	00b78533          	add	a0,a5,a1
1c0083fe:	8f0d                	sub	a4,a4,a1
1c008400:	c118                	sw	a4,0(a0)
1c008402:	c154                	sw	a3,4(a0)
1c008404:	c248                	sw	a0,4(a2)
1c008406:	853e                	mv	a0,a5
1c008408:	8082                	ret
1c00840a:	c254                	sw	a3,4(a2)
1c00840c:	853e                	mv	a0,a5
1c00840e:	8082                	ret
1c008410:	00e58b63          	beq	a1,a4,1c008426 <pos_alloc+0x56>
1c008414:	00b606b3          	add	a3,a2,a1
1c008418:	8f0d                	sub	a4,a4,a1
1c00841a:	c2dc                	sw	a5,4(a3)
1c00841c:	c298                	sw	a4,0(a3)
1c00841e:	87b2                	mv	a5,a2
1c008420:	c114                	sw	a3,0(a0)
1c008422:	853e                	mv	a0,a5
1c008424:	8082                	ret
1c008426:	c11c                	sw	a5,0(a0)
1c008428:	87b2                	mv	a5,a2
1c00842a:	b7e1                	j	1c0083f2 <pos_alloc+0x22>
1c00842c:	4781                	li	a5,0
1c00842e:	b7d1                	j	1c0083f2 <pos_alloc+0x22>

1c008430 <pos_allocs_init>:
1c008430:	1141                	addi	sp,sp,-16
1c008432:	1c0015b7          	lui	a1,0x1c001
1c008436:	c606                	sw	ra,12(sp)
1c008438:	83c58793          	addi	a5,a1,-1988 # 1c00083c <__l2_priv0_end>
1c00843c:	1c008637          	lui	a2,0x1c008
1c008440:	04c7cc63          	blt	a5,a2,1c008498 <pos_allocs_init+0x68>
1c008444:	4581                	li	a1,0
1c008446:	4601                	li	a2,0
1c008448:	1c001537          	lui	a0,0x1c001
1c00844c:	82c50513          	addi	a0,a0,-2004 # 1c00082c <pos_alloc_l2>
1c008450:	3785                	jal	1c0083b0 <pos_alloc_init>
1c008452:	1c0085b7          	lui	a1,0x1c008
1c008456:	69058793          	addi	a5,a1,1680 # 1c008690 <__l2_priv1_end>
1c00845a:	1c010637          	lui	a2,0x1c010
1c00845e:	02c7c963          	blt	a5,a2,1c008490 <pos_allocs_init+0x60>
1c008462:	4581                	li	a1,0
1c008464:	4601                	li	a2,0
1c008466:	1c001537          	lui	a0,0x1c001
1c00846a:	83050513          	addi	a0,a0,-2000 # 1c000830 <pos_alloc_l2+0x4>
1c00846e:	3789                	jal	1c0083b0 <pos_alloc_init>
1c008470:	100005b7          	lui	a1,0x10000
1c008474:	40b2                	lw	ra,12(sp)
1c008476:	00858793          	addi	a5,a1,8 # 10000008 <__l2_shared_end>
1c00847a:	1c080637          	lui	a2,0x1c080
1c00847e:	1c001537          	lui	a0,0x1c001
1c008482:	8e1d                	sub	a2,a2,a5
1c008484:	00858593          	addi	a1,a1,8
1c008488:	83450513          	addi	a0,a0,-1996 # 1c000834 <pos_alloc_l2+0x8>
1c00848c:	0141                	addi	sp,sp,16
1c00848e:	b70d                	j	1c0083b0 <pos_alloc_init>
1c008490:	8e1d                	sub	a2,a2,a5
1c008492:	69058593          	addi	a1,a1,1680
1c008496:	bfc1                	j	1c008466 <pos_allocs_init+0x36>
1c008498:	8e1d                	sub	a2,a2,a5
1c00849a:	83c58593          	addi	a1,a1,-1988
1c00849e:	b76d                	j	1c008448 <pos_allocs_init+0x18>

1c0084a0 <alloc_init_l1>:
1c0084a0:	100007b7          	lui	a5,0x10000
1c0084a4:	01651593          	slli	a1,a0,0x16
1c0084a8:	00878793          	addi	a5,a5,8 # 10000008 <__l2_shared_end>
1c0084ac:	95be                	add	a1,a1,a5
1c0084ae:	1c0017b7          	lui	a5,0x1c001
1c0084b2:	050a                	slli	a0,a0,0x2
1c0084b4:	6641                	lui	a2,0x10
1c0084b6:	82878793          	addi	a5,a5,-2008 # 1c000828 <pos_alloc_l1>
1c0084ba:	ff860613          	addi	a2,a2,-8 # fff8 <__l1_heap_size>
1c0084be:	953e                	add	a0,a0,a5
1c0084c0:	bdc5                	j	1c0083b0 <pos_alloc_init>

1c0084c2 <pi_l1_malloc>:
1c0084c2:	1c0017b7          	lui	a5,0x1c001
1c0084c6:	050a                	slli	a0,a0,0x2
1c0084c8:	82878793          	addi	a5,a5,-2008 # 1c000828 <pos_alloc_l1>
1c0084cc:	953e                	add	a0,a0,a5
1c0084ce:	b709                	j	1c0083d0 <pos_alloc>

1c0084d0 <__rt_handle_illegal_instr>:
1c0084d0:	8082                	ret

1c0084d2 <pos_irq_init>:
1c0084d2:	f14027f3          	csrr	a5,mhartid
1c0084d6:	477d                	li	a4,31
1c0084d8:	ca5797b3          	p.extractu	a5,a5,5,5
1c0084dc:	00e78f63          	beq	a5,a4,1c0084fa <pos_irq_init+0x28>
1c0084e0:	002047b7          	lui	a5,0x204
1c0084e4:	577d                	li	a4,-1
1c0084e6:	cb98                	sw	a4,16(a5)
1c0084e8:	1c0087b7          	lui	a5,0x1c008
1c0084ec:	00078793          	mv	a5,a5
1c0084f0:	c007c7b3          	p.bset	a5,a5,0,0
1c0084f4:	30579073          	csrw	mtvec,a5
1c0084f8:	8082                	ret
1c0084fa:	1a10a7b7          	lui	a5,0x1a10a
1c0084fe:	577d                	li	a4,-1
1c008500:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa109800>
1c008504:	1c0087b7          	lui	a5,0x1c008
1c008508:	00078793          	mv	a5,a5
1c00850c:	c007c7b3          	p.bset	a5,a5,0,0
1c008510:	30579073          	csrw	mtvec,a5
1c008514:	8082                	ret

1c008516 <pos_soc_event_init>:
1c008516:	1a1067b7          	lui	a5,0x1a106
1c00851a:	577d                	li	a4,-1
1c00851c:	00478693          	addi	a3,a5,4 # 1a106004 <__l2_shared_end+0xa105ffc>
1c008520:	c298                	sw	a4,0(a3)
1c008522:	00878693          	addi	a3,a5,8
1c008526:	c298                	sw	a4,0(a3)
1c008528:	00c78693          	addi	a3,a5,12
1c00852c:	c298                	sw	a4,0(a3)
1c00852e:	01078693          	addi	a3,a5,16
1c008532:	c298                	sw	a4,0(a3)
1c008534:	01478693          	addi	a3,a5,20
1c008538:	c298                	sw	a4,0(a3)
1c00853a:	01878693          	addi	a3,a5,24
1c00853e:	c298                	sw	a4,0(a3)
1c008540:	01c78693          	addi	a3,a5,28
1c008544:	c298                	sw	a4,0(a3)
1c008546:	02078793          	addi	a5,a5,32
1c00854a:	c398                	sw	a4,0(a5)
1c00854c:	8082                	ret

1c00854e <cluster_entry_stub>:
1c00854e:	1141                	addi	sp,sp,-16
1c008550:	c606                	sw	ra,12(sp)
1c008552:	002047b7          	lui	a5,0x204
1c008556:	00070737          	lui	a4,0x70
1c00855a:	c798                	sw	a4,8(a5)
1c00855c:	0ff00713          	li	a4,255
1c008560:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4208>
1c008564:	00e7a023          	sw	a4,0(a5)
1c008568:	00e7a623          	sw	a4,12(a5)
1c00856c:	1c0017b7          	lui	a5,0x1c001
1c008570:	8387a783          	lw	a5,-1992(a5) # 1c000838 <cluster_entry>
1c008574:	9782                	jalr	a5
1c008576:	f14027f3          	csrr	a5,mhartid
1c00857a:	f457b7b3          	p.bclr	a5,a5,26,5
1c00857e:	eb89                	bnez	a5,1c008590 <cluster_entry_stub+0x42>
1c008580:	1c001737          	lui	a4,0x1c001
1c008584:	1c0017b7          	lui	a5,0x1c001
1c008588:	82a72023          	sw	a0,-2016(a4) # 1c000820 <stack>
1c00858c:	8207a223          	sw	zero,-2012(a5) # 1c000824 <cluster_running>
1c008590:	002047b7          	lui	a5,0x204
1c008594:	577d                	li	a4,-1
1c008596:	c3d8                	sw	a4,4(a5)
1c008598:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f4040>
1c00859c:	a001                	j	1c00859c <cluster_entry_stub+0x4e>

1c00859e <cluster_start>:
1c00859e:	1141                	addi	sp,sp,-16
1c0085a0:	1c0017b7          	lui	a5,0x1c001
1c0085a4:	c226                	sw	s1,4(sp)
1c0085a6:	84aa                	mv	s1,a0
1c0085a8:	4509                	li	a0,2
1c0085aa:	82b7ac23          	sw	a1,-1992(a5) # 1c000838 <cluster_entry>
1c0085ae:	c606                	sw	ra,12(sp)
1c0085b0:	c422                	sw	s0,8(sp)
1c0085b2:	3941                	jal	1c008242 <pos_fll_init>
1c0085b4:	8526                	mv	a0,s1
1c0085b6:	35ed                	jal	1c0084a0 <alloc_init_l1>
1c0085b8:	04048413          	addi	s0,s1,64
1c0085bc:	00201737          	lui	a4,0x201
1c0085c0:	40070713          	addi	a4,a4,1024 # 201400 <__l1_heap_size+0x1f1408>
1c0085c4:	045a                	slli	s0,s0,0x16
1c0085c6:	56fd                	li	a3,-1
1c0085c8:	f14027f3          	csrr	a5,mhartid
1c0085cc:	00d46723          	p.sw	a3,a4(s0)
1c0085d0:	ca5797b3          	p.extractu	a5,a5,5,5
1c0085d4:	477d                	li	a4,31
1c0085d6:	00e78f63          	beq	a5,a4,1c0085f4 <cluster_start+0x56>
1c0085da:	002047b7          	lui	a5,0x204
1c0085de:	00070737          	lui	a4,0x70
1c0085e2:	c798                	sw	a4,8(a5)
1c0085e4:	0ff00713          	li	a4,255
1c0085e8:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4208>
1c0085ec:	00e7a023          	sw	a4,0(a5)
1c0085f0:	00e7a623          	sw	a4,12(a5)
1c0085f4:	8526                	mv	a0,s1
1c0085f6:	356d                	jal	1c0084a0 <alloc_init_l1>
1c0085f8:	6591                	lui	a1,0x4
1c0085fa:	8526                	mv	a0,s1
1c0085fc:	35d9                	jal	1c0084c2 <pi_l1_malloc>
1c0085fe:	100007b7          	lui	a5,0x10000
1c008602:	00a7a223          	sw	a0,4(a5) # 10000004 <cluster_stacks>
1c008606:	c12d                	beqz	a0,1c008668 <cluster_start+0xca>
1c008608:	1c001737          	lui	a4,0x1c001
1c00860c:	4685                	li	a3,1
1c00860e:	82d72223          	sw	a3,-2012(a4) # 1c000824 <cluster_running>
1c008612:	002007b7          	lui	a5,0x200
1c008616:	1c008737          	lui	a4,0x1c008
1c00861a:	08070713          	addi	a4,a4,128 # 1c008080 <_start>
1c00861e:	04078693          	addi	a3,a5,64 # 200040 <__l1_heap_size+0x1f0048>
1c008622:	00e466a3          	p.sw	a4,a3(s0)
1c008626:	04478693          	addi	a3,a5,68
1c00862a:	00e466a3          	p.sw	a4,a3(s0)
1c00862e:	04878693          	addi	a3,a5,72
1c008632:	00e466a3          	p.sw	a4,a3(s0)
1c008636:	04c78693          	addi	a3,a5,76
1c00863a:	00e466a3          	p.sw	a4,a3(s0)
1c00863e:	05078693          	addi	a3,a5,80
1c008642:	00e466a3          	p.sw	a4,a3(s0)
1c008646:	05478693          	addi	a3,a5,84
1c00864a:	00e466a3          	p.sw	a4,a3(s0)
1c00864e:	05878693          	addi	a3,a5,88
1c008652:	00e466a3          	p.sw	a4,a3(s0)
1c008656:	05c78693          	addi	a3,a5,92
1c00865a:	00e466a3          	p.sw	a4,a3(s0)
1c00865e:	07a1                	addi	a5,a5,8
1c008660:	0ff00713          	li	a4,255
1c008664:	00e467a3          	p.sw	a4,a5(s0)
1c008668:	40b2                	lw	ra,12(sp)
1c00866a:	4422                	lw	s0,8(sp)
1c00866c:	4492                	lw	s1,4(sp)
1c00866e:	0141                	addi	sp,sp,16
1c008670:	8082                	ret

1c008672 <synch_barrier>:
1c008672:	f14027f3          	csrr	a5,mhartid
1c008676:	477d                	li	a4,31
1c008678:	ca5797b3          	p.extractu	a5,a5,5,5
1c00867c:	00e78863          	beq	a5,a4,1c00868c <synch_barrier+0x1a>
1c008680:	002047b7          	lui	a5,0x204
1c008684:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4208>
1c008688:	01c7e703          	p.elw	a4,28(a5)
1c00868c:	8082                	ret

1c00868e <_endtext>:
	...
make[1]: Leaving directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/idle'
