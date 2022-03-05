Flags : -O3 -Iinc  -DNB_RUN=1   
make[1]: Entering directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/sleep'
/usr/scratch/fenga5/beppe/INSTALL-PULP/bin/riscv32-unknown-elf-objdump -Mmarch=rv32imcxgap9 -d /scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/sleep/build/test/test

/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/sleep/build/test/test:     file format elf32-littleriscv


Disassembly of section .vectors:

1c008000 <__irq_vector_base>:
1c008000:	4e80006f          	j	1c0084e8 <__rt_handle_illegal_instr>
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
1c008084:	4640006f          	j	1c0084e8 <__rt_handle_illegal_instr>

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
1c0080b4:	4b20006f          	j	1c008566 <cluster_entry_stub>

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
1c00811a:	236000ef          	jal	ra,1c008350 <pos_init_start>
1c00811e:	00000513          	li	a0,0
1c008122:	00000593          	li	a1,0
1c008126:	00000397          	auipc	t2,0x0
1c00812a:	10e38393          	addi	t2,t2,270 # 1c008234 <main>
1c00812e:	000380e7          	jalr	t2
1c008132:	842a                	mv	s0,a0
1c008134:	26e000ef          	jal	ra,1c0083a2 <pos_init_stop>
1c008138:	8522                	mv	a0,s0
1c00813a:	1fc000ef          	jal	ra,1c008336 <exit>

1c00813e <cluster_entry>:
1c00813e:	1101                	addi	sp,sp,-32
1c008140:	f14027f3          	csrr	a5,mhartid
1c008144:	ce06                	sw	ra,28(sp)
1c008146:	c602                	sw	zero,12(sp)
1c008148:	f457b7b3          	p.bclr	a5,a5,26,5
1c00814c:	e79d                	bnez	a5,1c00817a <cluster_entry+0x3c>
1c00814e:	4732                	lw	a4,12(sp)
1c008150:	47f5                	li	a5,29
1c008152:	00e7c963          	blt	a5,a4,1c008164 <cluster_entry+0x26>
1c008156:	4775                	li	a4,29
1c008158:	47b2                	lw	a5,12(sp)
1c00815a:	0785                	addi	a5,a5,1
1c00815c:	c63e                	sw	a5,12(sp)
1c00815e:	47b2                	lw	a5,12(sp)
1c008160:	fef75ce3          	ble	a5,a4,1c008158 <cluster_entry+0x1a>
1c008164:	abbab7b7          	lui	a5,0xabbab
1c008168:	bba78793          	addi	a5,a5,-1094 # abbaabba <pulp__FC+0xabbaabbb>
1c00816c:	10000737          	lui	a4,0x10000
1c008170:	c31c                	sw	a5,0(a4)
1c008172:	1a10f7b7          	lui	a5,0x1a10f
1c008176:	439c                	lw	a5,0(a5)
1c008178:	c63e                	sw	a5,12(sp)
1c00817a:	2b01                	jal	1c00868a <synch_barrier>
1c00817c:	40f2                	lw	ra,28(sp)
1c00817e:	4501                	li	a0,0
1c008180:	6105                	addi	sp,sp,32
1c008182:	8082                	ret

1c008184 <run_test>:
1c008184:	102007b7          	lui	a5,0x10200
1c008188:	07e1                	addi	a5,a5,24
1c00818a:	4398                	lw	a4,0(a5)
1c00818c:	1141                	addi	sp,sp,-16
1c00818e:	c0b74733          	p.bset	a4,a4,0,11
1c008192:	c398                	sw	a4,0(a5)
1c008194:	4398                	lw	a4,0(a5)
1c008196:	c0874733          	p.bset	a4,a4,0,8
1c00819a:	c398                	sw	a4,0(a5)
1c00819c:	4398                	lw	a4,0(a5)
1c00819e:	ce073733          	p.bclr	a4,a4,7,0
1c0081a2:	c398                	sw	a4,0(a5)
1c0081a4:	4398                	lw	a4,0(a5)
1c0081a6:	c0374733          	p.bset	a4,a4,0,3
1c0081aa:	c398                	sw	a4,0(a5)
1c0081ac:	102017b7          	lui	a5,0x10201
1c0081b0:	0007aa23          	sw	zero,20(a5) # 10201014 <__l2_shared_end+0x20100c>
1c0081b4:	c402                	sw	zero,8(sp)
1c0081b6:	4722                	lw	a4,8(sp)
1c0081b8:	47a5                	li	a5,9
1c0081ba:	00e7c963          	blt	a5,a4,1c0081cc <run_test+0x48>
1c0081be:	4725                	li	a4,9
1c0081c0:	47a2                	lw	a5,8(sp)
1c0081c2:	0785                	addi	a5,a5,1
1c0081c4:	c43e                	sw	a5,8(sp)
1c0081c6:	47a2                	lw	a5,8(sp)
1c0081c8:	fef75ce3          	ble	a5,a4,1c0081c0 <run_test+0x3c>
1c0081cc:	102016b7          	lui	a3,0x10201
1c0081d0:	0006aa23          	sw	zero,20(a3) # 10201014 <__l2_shared_end+0x20100c>
1c0081d4:	6741                	lui	a4,0x10
1c0081d6:	02170613          	addi	a2,a4,33 # 10021 <__l1_heap_size+0x29>
1c0081da:	02068793          	addi	a5,a3,32
1c0081de:	02c7ae23          	sw	a2,60(a5)
1c0081e2:	00170613          	addi	a2,a4,1
1c0081e6:	04c7a023          	sw	a2,64(a5)
1c0081ea:	04c7a223          	sw	a2,68(a5)
1c0081ee:	0709                	addi	a4,a4,2
1c0081f0:	04e7a423          	sw	a4,72(a5)
1c0081f4:	04c7a623          	sw	a2,76(a5)
1c0081f8:	60000713          	li	a4,1536
1c0081fc:	04e7ae23          	sw	a4,92(a5)
1c008200:	0006a0a3          	sw	zero,1(a3)
1c008204:	0006a023          	sw	zero,0(a3)
1c008208:	c602                	sw	zero,12(sp)
1c00820a:	4732                	lw	a4,12(sp)
1c00820c:	47a5                	li	a5,9
1c00820e:	00e7c963          	blt	a5,a4,1c008220 <run_test+0x9c>
1c008212:	4725                	li	a4,9
1c008214:	47b2                	lw	a5,12(sp)
1c008216:	0785                	addi	a5,a5,1
1c008218:	c63e                	sw	a5,12(sp)
1c00821a:	47b2                	lw	a5,12(sp)
1c00821c:	fef75ce3          	ble	a5,a4,1c008214 <run_test+0x90>
1c008220:	102017b7          	lui	a5,0x10201
1c008224:	20000713          	li	a4,512
1c008228:	02078793          	addi	a5,a5,32 # 10201020 <__l2_shared_end+0x201018>
1c00822c:	04e7ae23          	sw	a4,92(a5)
1c008230:	0141                	addi	sp,sp,16
1c008232:	8082                	ret

1c008234 <main>:
1c008234:	1101                	addi	sp,sp,-32
1c008236:	f14027f3          	csrr	a5,mhartid
1c00823a:	ce06                	sw	ra,28(sp)
1c00823c:	c602                	sw	zero,12(sp)
1c00823e:	ca5797b3          	p.extractu	a5,a5,5,5
1c008242:	c391                	beqz	a5,1c008246 <main+0x12>
1c008244:	3781                	jal	1c008184 <run_test>
1c008246:	1c0085b7          	lui	a1,0x1c008
1c00824a:	4501                	li	a0,0
1c00824c:	13e58593          	addi	a1,a1,318 # 1c00813e <cluster_entry>
1c008250:	269d                	jal	1c0085b6 <cluster_start>
1c008252:	40f2                	lw	ra,28(sp)
1c008254:	4501                	li	a0,0
1c008256:	6105                	addi	sp,sp,32
1c008258:	8082                	ret

1c00825a <pos_fll_init>:
1c00825a:	08152063          	p.beqimm	a0,1,1c0082da <pos_fll_init+0x80>
1c00825e:	04252a63          	p.beqimm	a0,2,1c0082b2 <pos_fll_init+0x58>
1c008262:	c505                	beqz	a0,1c00828a <pos_fll_init+0x30>
1c008264:	4701                	li	a4,0
1c008266:	00470793          	addi	a5,a4,4
1c00826a:	05300613          	li	a2,83
1c00826e:	00c70693          	addi	a3,a4,12
1c008272:	c390                	sw	a2,0(a5)
1c008274:	020c17b7          	lui	a5,0x20c1
1c008278:	0721                	addi	a4,a4,8
1c00827a:	0006a023          	sw	zero,0(a3)
1c00827e:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b17e2>
1c008282:	c31c                	sw	a5,0(a4)
1c008284:	05f68537          	lui	a0,0x5f68
1c008288:	8082                	ret
1c00828a:	1a1007b7          	lui	a5,0x1a100
1c00828e:	00878713          	addi	a4,a5,8 # 1a100008 <__l2_shared_end+0xa100000>
1c008292:	00c78693          	addi	a3,a5,12
1c008296:	05300613          	li	a2,83
1c00829a:	0791                	addi	a5,a5,4
1c00829c:	c390                	sw	a2,0(a5)
1c00829e:	020c17b7          	lui	a5,0x20c1
1c0082a2:	0006a023          	sw	zero,0(a3)
1c0082a6:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b17e2>
1c0082aa:	c31c                	sw	a5,0(a4)
1c0082ac:	05f68537          	lui	a0,0x5f68
1c0082b0:	8082                	ret
1c0082b2:	1a1007b7          	lui	a5,0x1a100
1c0082b6:	01878713          	addi	a4,a5,24 # 1a100018 <__l2_shared_end+0xa100010>
1c0082ba:	01c78693          	addi	a3,a5,28
1c0082be:	05300613          	li	a2,83
1c0082c2:	07d1                	addi	a5,a5,20
1c0082c4:	c390                	sw	a2,0(a5)
1c0082c6:	020c17b7          	lui	a5,0x20c1
1c0082ca:	0006a023          	sw	zero,0(a3)
1c0082ce:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b17e2>
1c0082d2:	c31c                	sw	a5,0(a4)
1c0082d4:	05f68537          	lui	a0,0x5f68
1c0082d8:	8082                	ret
1c0082da:	1a1007b7          	lui	a5,0x1a100
1c0082de:	02878713          	addi	a4,a5,40 # 1a100028 <__l2_shared_end+0xa100020>
1c0082e2:	02c78693          	addi	a3,a5,44
1c0082e6:	05300613          	li	a2,83
1c0082ea:	02478793          	addi	a5,a5,36
1c0082ee:	c390                	sw	a2,0(a5)
1c0082f0:	020c17b7          	lui	a5,0x20c1
1c0082f4:	0006a023          	sw	zero,0(a3)
1c0082f8:	7da78793          	addi	a5,a5,2010 # 20c17da <__l1_heap_size+0x20b17e2>
1c0082fc:	c31c                	sw	a5,0(a4)
1c0082fe:	05f68537          	lui	a0,0x5f68
1c008302:	8082                	ret

1c008304 <pos_soc_init>:
1c008304:	8082                	ret

1c008306 <pos_wait_forever>:
1c008306:	f14027f3          	csrr	a5,mhartid
1c00830a:	477d                	li	a4,31
1c00830c:	ca5797b3          	p.extractu	a5,a5,5,5
1c008310:	00e78963          	beq	a5,a4,1c008322 <pos_wait_forever+0x1c>
1c008314:	002047b7          	lui	a5,0x204
1c008318:	577d                	li	a4,-1
1c00831a:	c3d8                	sw	a4,4(a5)
1c00831c:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f4040>
1c008320:	a001                	j	1c008320 <pos_wait_forever+0x1a>
1c008322:	1a10a7b7          	lui	a5,0x1a10a
1c008326:	577d                	li	a4,-1
1c008328:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa109800>
1c00832c:	10500073          	wfi
1c008330:	10500073          	wfi
1c008334:	bfe5                	j	1c00832c <pos_wait_forever+0x26>

1c008336 <exit>:
1c008336:	1141                	addi	sp,sp,-16
1c008338:	c606                	sw	ra,12(sp)
1c00833a:	1a1047b7          	lui	a5,0x1a104
1c00833e:	c1f54533          	p.bset	a0,a0,0,31
1c008342:	0aa7a023          	sw	a0,160(a5) # 1a1040a0 <__l2_shared_end+0xa104098>
1c008346:	37c1                	jal	1c008306 <pos_wait_forever>

1c008348 <pos_io_start>:
1c008348:	4501                	li	a0,0
1c00834a:	8082                	ret

1c00834c <pos_io_stop>:
1c00834c:	4501                	li	a0,0
1c00834e:	8082                	ret

1c008350 <pos_init_start>:
1c008350:	1141                	addi	sp,sp,-16
1c008352:	c422                	sw	s0,8(sp)
1c008354:	1c000437          	lui	s0,0x1c000
1c008358:	c606                	sw	ra,12(sp)
1c00835a:	00840413          	addi	s0,s0,8 # 1c000008 <ctor_list>
1c00835e:	375d                	jal	1c008304 <pos_soc_init>
1c008360:	2269                	jal	1c0084ea <pos_irq_init>
1c008362:	22f1                	jal	1c00852e <pos_soc_event_init>
1c008364:	20d5                	jal	1c008448 <pos_allocs_init>
1c008366:	405c                	lw	a5,4(s0)
1c008368:	c791                	beqz	a5,1c008374 <pos_init_start+0x24>
1c00836a:	0421                	addi	s0,s0,8
1c00836c:	9782                	jalr	a5
1c00836e:	0044278b          	p.lw	a5,4(s0!)
1c008372:	ffed                	bnez	a5,1c00836c <pos_init_start+0x1c>
1c008374:	3fd1                	jal	1c008348 <pos_io_start>
1c008376:	300467f3          	csrrsi	a5,mstatus,8
1c00837a:	f1402573          	csrr	a0,mhartid
1c00837e:	8515                	srai	a0,a0,0x5
1c008380:	f2653533          	p.bclr	a0,a0,25,6
1c008384:	47fd                	li	a5,31
1c008386:	00f50a63          	beq	a0,a5,1c00839a <pos_init_start+0x4a>
1c00838a:	4422                	lw	s0,8(sp)
1c00838c:	40b2                	lw	ra,12(sp)
1c00838e:	1c0085b7          	lui	a1,0x1c008
1c008392:	23458593          	addi	a1,a1,564 # 1c008234 <main>
1c008396:	0141                	addi	sp,sp,16
1c008398:	ac39                	j	1c0085b6 <cluster_start>
1c00839a:	40b2                	lw	ra,12(sp)
1c00839c:	4422                	lw	s0,8(sp)
1c00839e:	0141                	addi	sp,sp,16
1c0083a0:	8082                	ret

1c0083a2 <pos_init_stop>:
1c0083a2:	1141                	addi	sp,sp,-16
1c0083a4:	c422                	sw	s0,8(sp)
1c0083a6:	1c000437          	lui	s0,0x1c000
1c0083aa:	c606                	sw	ra,12(sp)
1c0083ac:	01440413          	addi	s0,s0,20 # 1c000014 <dtor_list>
1c0083b0:	3f71                	jal	1c00834c <pos_io_stop>
1c0083b2:	405c                	lw	a5,4(s0)
1c0083b4:	c791                	beqz	a5,1c0083c0 <pos_init_stop+0x1e>
1c0083b6:	0421                	addi	s0,s0,8
1c0083b8:	9782                	jalr	a5
1c0083ba:	0044278b          	p.lw	a5,4(s0!)
1c0083be:	ffed                	bnez	a5,1c0083b8 <pos_init_stop+0x16>
1c0083c0:	40b2                	lw	ra,12(sp)
1c0083c2:	4422                	lw	s0,8(sp)
1c0083c4:	0141                	addi	sp,sp,16
1c0083c6:	8082                	ret

1c0083c8 <pos_alloc_init>:
1c0083c8:	00758793          	addi	a5,a1,7
1c0083cc:	c407b7b3          	p.bclr	a5,a5,2,0
1c0083d0:	40b785b3          	sub	a1,a5,a1
1c0083d4:	c11c                	sw	a5,0(a0)
1c0083d6:	8e0d                	sub	a2,a2,a1
1c0083d8:	00c05763          	blez	a2,1c0083e6 <pos_alloc_init+0x1e>
1c0083dc:	c4063633          	p.bclr	a2,a2,2,0
1c0083e0:	c390                	sw	a2,0(a5)
1c0083e2:	0007a223          	sw	zero,4(a5)
1c0083e6:	8082                	ret

1c0083e8 <pos_alloc>:
1c0083e8:	4110                	lw	a2,0(a0)
1c0083ea:	059d                	addi	a1,a1,7
1c0083ec:	c405b5b3          	p.bclr	a1,a1,2,0
1c0083f0:	ca31                	beqz	a2,1c008444 <pos_alloc+0x5c>
1c0083f2:	4218                	lw	a4,0(a2)
1c0083f4:	425c                	lw	a5,4(a2)
1c0083f6:	02b75963          	ble	a1,a4,1c008428 <pos_alloc+0x40>
1c0083fa:	cb81                	beqz	a5,1c00840a <pos_alloc+0x22>
1c0083fc:	4398                	lw	a4,0(a5)
1c0083fe:	43d4                	lw	a3,4(a5)
1c008400:	00b75763          	ble	a1,a4,1c00840e <pos_alloc+0x26>
1c008404:	863e                	mv	a2,a5
1c008406:	87b6                	mv	a5,a3
1c008408:	fbf5                	bnez	a5,1c0083fc <pos_alloc+0x14>
1c00840a:	853e                	mv	a0,a5
1c00840c:	8082                	ret
1c00840e:	00b70a63          	beq	a4,a1,1c008422 <pos_alloc+0x3a>
1c008412:	00b78533          	add	a0,a5,a1
1c008416:	8f0d                	sub	a4,a4,a1
1c008418:	c118                	sw	a4,0(a0)
1c00841a:	c154                	sw	a3,4(a0)
1c00841c:	c248                	sw	a0,4(a2)
1c00841e:	853e                	mv	a0,a5
1c008420:	8082                	ret
1c008422:	c254                	sw	a3,4(a2)
1c008424:	853e                	mv	a0,a5
1c008426:	8082                	ret
1c008428:	00e58b63          	beq	a1,a4,1c00843e <pos_alloc+0x56>
1c00842c:	00b606b3          	add	a3,a2,a1
1c008430:	8f0d                	sub	a4,a4,a1
1c008432:	c2dc                	sw	a5,4(a3)
1c008434:	c298                	sw	a4,0(a3)
1c008436:	87b2                	mv	a5,a2
1c008438:	c114                	sw	a3,0(a0)
1c00843a:	853e                	mv	a0,a5
1c00843c:	8082                	ret
1c00843e:	c11c                	sw	a5,0(a0)
1c008440:	87b2                	mv	a5,a2
1c008442:	b7e1                	j	1c00840a <pos_alloc+0x22>
1c008444:	4781                	li	a5,0
1c008446:	b7d1                	j	1c00840a <pos_alloc+0x22>

1c008448 <pos_allocs_init>:
1c008448:	1141                	addi	sp,sp,-16
1c00844a:	1c0015b7          	lui	a1,0x1c001
1c00844e:	c606                	sw	ra,12(sp)
1c008450:	83c58793          	addi	a5,a1,-1988 # 1c00083c <__l2_priv0_end>
1c008454:	1c008637          	lui	a2,0x1c008
1c008458:	04c7cc63          	blt	a5,a2,1c0084b0 <pos_allocs_init+0x68>
1c00845c:	4581                	li	a1,0
1c00845e:	4601                	li	a2,0
1c008460:	1c001537          	lui	a0,0x1c001
1c008464:	82c50513          	addi	a0,a0,-2004 # 1c00082c <pos_alloc_l2>
1c008468:	3785                	jal	1c0083c8 <pos_alloc_init>
1c00846a:	1c0085b7          	lui	a1,0x1c008
1c00846e:	6a858793          	addi	a5,a1,1704 # 1c0086a8 <__l2_priv1_end>
1c008472:	1c010637          	lui	a2,0x1c010
1c008476:	02c7c963          	blt	a5,a2,1c0084a8 <pos_allocs_init+0x60>
1c00847a:	4581                	li	a1,0
1c00847c:	4601                	li	a2,0
1c00847e:	1c001537          	lui	a0,0x1c001
1c008482:	83050513          	addi	a0,a0,-2000 # 1c000830 <pos_alloc_l2+0x4>
1c008486:	3789                	jal	1c0083c8 <pos_alloc_init>
1c008488:	100005b7          	lui	a1,0x10000
1c00848c:	40b2                	lw	ra,12(sp)
1c00848e:	00858793          	addi	a5,a1,8 # 10000008 <__l2_shared_end>
1c008492:	1c080637          	lui	a2,0x1c080
1c008496:	1c001537          	lui	a0,0x1c001
1c00849a:	8e1d                	sub	a2,a2,a5
1c00849c:	00858593          	addi	a1,a1,8
1c0084a0:	83450513          	addi	a0,a0,-1996 # 1c000834 <pos_alloc_l2+0x8>
1c0084a4:	0141                	addi	sp,sp,16
1c0084a6:	b70d                	j	1c0083c8 <pos_alloc_init>
1c0084a8:	8e1d                	sub	a2,a2,a5
1c0084aa:	6a858593          	addi	a1,a1,1704
1c0084ae:	bfc1                	j	1c00847e <pos_allocs_init+0x36>
1c0084b0:	8e1d                	sub	a2,a2,a5
1c0084b2:	83c58593          	addi	a1,a1,-1988
1c0084b6:	b76d                	j	1c008460 <pos_allocs_init+0x18>

1c0084b8 <alloc_init_l1>:
1c0084b8:	100007b7          	lui	a5,0x10000
1c0084bc:	01651593          	slli	a1,a0,0x16
1c0084c0:	00878793          	addi	a5,a5,8 # 10000008 <__l2_shared_end>
1c0084c4:	95be                	add	a1,a1,a5
1c0084c6:	1c0017b7          	lui	a5,0x1c001
1c0084ca:	050a                	slli	a0,a0,0x2
1c0084cc:	6641                	lui	a2,0x10
1c0084ce:	82878793          	addi	a5,a5,-2008 # 1c000828 <pos_alloc_l1>
1c0084d2:	ff860613          	addi	a2,a2,-8 # fff8 <__l1_heap_size>
1c0084d6:	953e                	add	a0,a0,a5
1c0084d8:	bdc5                	j	1c0083c8 <pos_alloc_init>

1c0084da <pi_l1_malloc>:
1c0084da:	1c0017b7          	lui	a5,0x1c001
1c0084de:	050a                	slli	a0,a0,0x2
1c0084e0:	82878793          	addi	a5,a5,-2008 # 1c000828 <pos_alloc_l1>
1c0084e4:	953e                	add	a0,a0,a5
1c0084e6:	b709                	j	1c0083e8 <pos_alloc>

1c0084e8 <__rt_handle_illegal_instr>:
1c0084e8:	8082                	ret

1c0084ea <pos_irq_init>:
1c0084ea:	f14027f3          	csrr	a5,mhartid
1c0084ee:	477d                	li	a4,31
1c0084f0:	ca5797b3          	p.extractu	a5,a5,5,5
1c0084f4:	00e78f63          	beq	a5,a4,1c008512 <pos_irq_init+0x28>
1c0084f8:	002047b7          	lui	a5,0x204
1c0084fc:	577d                	li	a4,-1
1c0084fe:	cb98                	sw	a4,16(a5)
1c008500:	1c0087b7          	lui	a5,0x1c008
1c008504:	00078793          	mv	a5,a5
1c008508:	c007c7b3          	p.bset	a5,a5,0,0
1c00850c:	30579073          	csrw	mtvec,a5
1c008510:	8082                	ret
1c008512:	1a10a7b7          	lui	a5,0x1a10a
1c008516:	577d                	li	a4,-1
1c008518:	80e7a423          	sw	a4,-2040(a5) # 1a109808 <__l2_shared_end+0xa109800>
1c00851c:	1c0087b7          	lui	a5,0x1c008
1c008520:	00078793          	mv	a5,a5
1c008524:	c007c7b3          	p.bset	a5,a5,0,0
1c008528:	30579073          	csrw	mtvec,a5
1c00852c:	8082                	ret

1c00852e <pos_soc_event_init>:
1c00852e:	1a1067b7          	lui	a5,0x1a106
1c008532:	577d                	li	a4,-1
1c008534:	00478693          	addi	a3,a5,4 # 1a106004 <__l2_shared_end+0xa105ffc>
1c008538:	c298                	sw	a4,0(a3)
1c00853a:	00878693          	addi	a3,a5,8
1c00853e:	c298                	sw	a4,0(a3)
1c008540:	00c78693          	addi	a3,a5,12
1c008544:	c298                	sw	a4,0(a3)
1c008546:	01078693          	addi	a3,a5,16
1c00854a:	c298                	sw	a4,0(a3)
1c00854c:	01478693          	addi	a3,a5,20
1c008550:	c298                	sw	a4,0(a3)
1c008552:	01878693          	addi	a3,a5,24
1c008556:	c298                	sw	a4,0(a3)
1c008558:	01c78693          	addi	a3,a5,28
1c00855c:	c298                	sw	a4,0(a3)
1c00855e:	02078793          	addi	a5,a5,32
1c008562:	c398                	sw	a4,0(a5)
1c008564:	8082                	ret

1c008566 <cluster_entry_stub>:
1c008566:	1141                	addi	sp,sp,-16
1c008568:	c606                	sw	ra,12(sp)
1c00856a:	002047b7          	lui	a5,0x204
1c00856e:	00070737          	lui	a4,0x70
1c008572:	c798                	sw	a4,8(a5)
1c008574:	0ff00713          	li	a4,255
1c008578:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4208>
1c00857c:	00e7a023          	sw	a4,0(a5)
1c008580:	00e7a623          	sw	a4,12(a5)
1c008584:	1c0017b7          	lui	a5,0x1c001
1c008588:	8387a783          	lw	a5,-1992(a5) # 1c000838 <cluster_entry>
1c00858c:	9782                	jalr	a5
1c00858e:	f14027f3          	csrr	a5,mhartid
1c008592:	f457b7b3          	p.bclr	a5,a5,26,5
1c008596:	eb89                	bnez	a5,1c0085a8 <cluster_entry_stub+0x42>
1c008598:	1c001737          	lui	a4,0x1c001
1c00859c:	1c0017b7          	lui	a5,0x1c001
1c0085a0:	82a72023          	sw	a0,-2016(a4) # 1c000820 <stack>
1c0085a4:	8207a223          	sw	zero,-2012(a5) # 1c000824 <cluster_running>
1c0085a8:	002047b7          	lui	a5,0x204
1c0085ac:	577d                	li	a4,-1
1c0085ae:	c3d8                	sw	a4,4(a5)
1c0085b0:	0387e703          	p.elw	a4,56(a5) # 204038 <__l1_heap_size+0x1f4040>
1c0085b4:	a001                	j	1c0085b4 <cluster_entry_stub+0x4e>

1c0085b6 <cluster_start>:
1c0085b6:	1141                	addi	sp,sp,-16
1c0085b8:	1c0017b7          	lui	a5,0x1c001
1c0085bc:	c226                	sw	s1,4(sp)
1c0085be:	84aa                	mv	s1,a0
1c0085c0:	4509                	li	a0,2
1c0085c2:	82b7ac23          	sw	a1,-1992(a5) # 1c000838 <cluster_entry>
1c0085c6:	c606                	sw	ra,12(sp)
1c0085c8:	c422                	sw	s0,8(sp)
1c0085ca:	3941                	jal	1c00825a <pos_fll_init>
1c0085cc:	8526                	mv	a0,s1
1c0085ce:	35ed                	jal	1c0084b8 <alloc_init_l1>
1c0085d0:	04048413          	addi	s0,s1,64
1c0085d4:	00201737          	lui	a4,0x201
1c0085d8:	40070713          	addi	a4,a4,1024 # 201400 <__l1_heap_size+0x1f1408>
1c0085dc:	045a                	slli	s0,s0,0x16
1c0085de:	56fd                	li	a3,-1
1c0085e0:	f14027f3          	csrr	a5,mhartid
1c0085e4:	00d46723          	p.sw	a3,a4(s0)
1c0085e8:	ca5797b3          	p.extractu	a5,a5,5,5
1c0085ec:	477d                	li	a4,31
1c0085ee:	00e78f63          	beq	a5,a4,1c00860c <cluster_start+0x56>
1c0085f2:	002047b7          	lui	a5,0x204
1c0085f6:	00070737          	lui	a4,0x70
1c0085fa:	c798                	sw	a4,8(a5)
1c0085fc:	0ff00713          	li	a4,255
1c008600:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4208>
1c008604:	00e7a023          	sw	a4,0(a5)
1c008608:	00e7a623          	sw	a4,12(a5)
1c00860c:	8526                	mv	a0,s1
1c00860e:	356d                	jal	1c0084b8 <alloc_init_l1>
1c008610:	6591                	lui	a1,0x4
1c008612:	8526                	mv	a0,s1
1c008614:	35d9                	jal	1c0084da <pi_l1_malloc>
1c008616:	100007b7          	lui	a5,0x10000
1c00861a:	00a7a223          	sw	a0,4(a5) # 10000004 <cluster_stacks>
1c00861e:	c12d                	beqz	a0,1c008680 <cluster_start+0xca>
1c008620:	1c001737          	lui	a4,0x1c001
1c008624:	4685                	li	a3,1
1c008626:	82d72223          	sw	a3,-2012(a4) # 1c000824 <cluster_running>
1c00862a:	002007b7          	lui	a5,0x200
1c00862e:	1c008737          	lui	a4,0x1c008
1c008632:	08070713          	addi	a4,a4,128 # 1c008080 <_start>
1c008636:	04078693          	addi	a3,a5,64 # 200040 <__l1_heap_size+0x1f0048>
1c00863a:	00e466a3          	p.sw	a4,a3(s0)
1c00863e:	04478693          	addi	a3,a5,68
1c008642:	00e466a3          	p.sw	a4,a3(s0)
1c008646:	04878693          	addi	a3,a5,72
1c00864a:	00e466a3          	p.sw	a4,a3(s0)
1c00864e:	04c78693          	addi	a3,a5,76
1c008652:	00e466a3          	p.sw	a4,a3(s0)
1c008656:	05078693          	addi	a3,a5,80
1c00865a:	00e466a3          	p.sw	a4,a3(s0)
1c00865e:	05478693          	addi	a3,a5,84
1c008662:	00e466a3          	p.sw	a4,a3(s0)
1c008666:	05878693          	addi	a3,a5,88
1c00866a:	00e466a3          	p.sw	a4,a3(s0)
1c00866e:	05c78693          	addi	a3,a5,92
1c008672:	00e466a3          	p.sw	a4,a3(s0)
1c008676:	07a1                	addi	a5,a5,8
1c008678:	0ff00713          	li	a4,255
1c00867c:	00e467a3          	p.sw	a4,a5(s0)
1c008680:	40b2                	lw	ra,12(sp)
1c008682:	4422                	lw	s0,8(sp)
1c008684:	4492                	lw	s1,4(sp)
1c008686:	0141                	addi	sp,sp,16
1c008688:	8082                	ret

1c00868a <synch_barrier>:
1c00868a:	f14027f3          	csrr	a5,mhartid
1c00868e:	477d                	li	a4,31
1c008690:	ca5797b3          	p.extractu	a5,a5,5,5
1c008694:	00e78863          	beq	a5,a4,1c0086a4 <synch_barrier+0x1a>
1c008698:	002047b7          	lui	a5,0x204
1c00869c:	20078793          	addi	a5,a5,512 # 204200 <__l1_heap_size+0x1f4208>
1c0086a0:	01c7e703          	p.elw	a4,28(a5)
1c0086a4:	8082                	ret

1c0086a6 <_endtext>:
	...
make[1]: Leaving directory `/scratch/prasadar/siracusa-fe/regression_tests/siracusa_power_tests/sleep'
