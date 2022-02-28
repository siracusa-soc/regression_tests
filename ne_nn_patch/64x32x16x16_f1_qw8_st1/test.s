
build/ne16_test/ne16_test.o:     file format elf32-littleriscv


Disassembly of section .text.ne16_compare_int:

00000000 <ne16_compare_int>:
   0:	7179                	addi	sp,sp,-48

00000002 <.LCFI0>:
   2:	d606                	sw	ra,44(sp)
   4:	d422                	sw	s0,40(sp)
   6:	d226                	sw	s1,36(sp)
   8:	d04a                	sw	s2,32(sp)
   a:	ce4e                	sw	s3,28(sp)
   c:	cc52                	sw	s4,24(sp)
   e:	ca56                	sw	s5,20(sp)
  10:	c85a                	sw	s6,16(sp)

00000012 <.LBB38>:
  12:	06c05e63          	blez	a2,8e <.L6>
  16:	8a2e                	mv	s4,a1
  18:	89aa                	mv	s3,a0
  1a:	8932                	mv	s2,a2
  1c:	4401                	li	s0,0

0000001e <.LBE38>:
  1e:	4481                	li	s1,0

00000020 <.LBB39>:
  20:	00000ab7          	lui	s5,0x0
  24:	00000b37          	lui	s6,0x0

00000028 <.L5>:
  28:	00241713          	slli	a4,s0,0x2
  2c:	00e986b3          	add	a3,s3,a4
  30:	4290                	lw	a2,0(a3)

00000032 <.LVL2>:
  32:	20ea7583          	p.lw	a1,a4(s4)

00000036 <.LBE39>:
  36:	0405                	addi	s0,s0,1

00000038 <.LBB40>:
  38:	40b607b3          	sub	a5,a2,a1
  3c:	00f037b3          	snez	a5,a5
  40:	94be                	add	s1,s1,a5
  42:	00b60a63          	beq	a2,a1,56 <.L3>
  46:	0214a563          	p.beqimm	s1,1,70 <.L10>

0000004a <.L4>:
  4a:	000a8513          	mv	a0,s5
  4e:	00000097          	auipc	ra,0x0
  52:	000080e7          	jalr	ra # 4e <.L4+0x4>

00000056 <.L3>:
  56:	fd2449e3          	blt	s0,s2,28 <.L5>

0000005a <.L1>:
  5a:	50b2                	lw	ra,44(sp)

0000005c <.LCFI2>:
  5c:	5422                	lw	s0,40(sp)

0000005e <.LCFI3>:
  5e:	8526                	mv	a0,s1
  60:	5902                	lw	s2,32(sp)

00000062 <.LCFI4>:
  62:	5492                	lw	s1,36(sp)

00000064 <.LCFI5>:
  64:	49f2                	lw	s3,28(sp)

00000066 <.LCFI6>:
  66:	4a62                	lw	s4,24(sp)

00000068 <.LCFI7>:
  68:	4ad2                	lw	s5,20(sp)

0000006a <.LCFI8>:
  6a:	4b42                	lw	s6,16(sp)

0000006c <.LCFI9>:
  6c:	6145                	addi	sp,sp,48

0000006e <.LCFI10>:
  6e:	8082                	ret

00000070 <.L10>:
  70:	000b0513          	mv	a0,s6
  74:	c22e                	sw	a1,4(sp)
  76:	c432                	sw	a2,8(sp)
  78:	c636                	sw	a3,12(sp)
  7a:	c03a                	sw	a4,0(sp)
  7c:	00000097          	auipc	ra,0x0
  80:	000080e7          	jalr	ra # 7c <.L10+0xc>

00000084 <.LVL10>:
  84:	4702                	lw	a4,0(sp)
  86:	46b2                	lw	a3,12(sp)
  88:	4622                	lw	a2,8(sp)
  8a:	4592                	lw	a1,4(sp)
  8c:	bf7d                	j	4a <.L4>

0000008e <.L6>:
  8e:	4481                	li	s1,0
  90:	b7e9                	j	5a <.L1>

Disassembly of section .text.run_test:

00000000 <run_test>:
   0:	000007b7          	lui	a5,0x0
   4:	1141                	addi	sp,sp,-16

00000006 <.LCFI12>:
   6:	00078793          	mv	a5,a5
   a:	10400737          	lui	a4,0x10400
   e:	0806d0fb          	lp.setupi	x1,128,28 <.L26>
  12:	0007a803          	lw	a6,0(a5) # 0 <run_test>
  16:	43c8                	lw	a0,4(a5)
  18:	478c                	lw	a1,8(a5)
  1a:	47d0                	lw	a2,12(a5)
  1c:	01072023          	sw	a6,0(a4) # 10400000 <ne16_infeat+0x103efef8>
  20:	c348                	sw	a0,4(a4)
  22:	c70c                	sw	a1,8(a4)
  24:	c750                	sw	a2,12(a4)
  26:	07c1                	addi	a5,a5,16

00000028 <.L26>:
  28:	0741                	addi	a4,a4,16
  2a:	102007b7          	lui	a5,0x10200
  2e:	07e1                	addi	a5,a5,24
  30:	4398                	lw	a4,0(a5)
  32:	c0b74733          	p.bset	a4,a4,0,11
  36:	c398                	sw	a4,0(a5)
  38:	4398                	lw	a4,0(a5)
  3a:	c0874733          	p.bset	a4,a4,0,8
  3e:	c398                	sw	a4,0(a5)
  40:	4398                	lw	a4,0(a5)
  42:	ce073733          	p.bclr	a4,a4,7,0
  46:	c398                	sw	a4,0(a5)
  48:	4398                	lw	a4,0(a5)
  4a:	c0374733          	p.bset	a4,a4,0,3
  4e:	c398                	sw	a4,0(a5)
  50:	102017b7          	lui	a5,0x10201
  54:	0007aa23          	sw	zero,20(a5) # 10201014 <ne16_infeat+0x101f0f0c>

00000058 <.LBB44>:
  58:	c602                	sw	zero,12(sp)
  5a:	4732                	lw	a4,12(sp)
  5c:	47a5                	li	a5,9
  5e:	00e7c963          	blt	a5,a4,70 <.L13>
  62:	4725                	li	a4,9

00000064 <.L14>:
  64:	47b2                	lw	a5,12(sp)
  66:	0785                	addi	a5,a5,1
  68:	c63e                	sw	a5,12(sp)
  6a:	47b2                	lw	a5,12(sp)
  6c:	fef75ce3          	bge	a4,a5,64 <.L14>

00000070 <.L13>:
  70:	10201637          	lui	a2,0x10201
  74:	0611                	addi	a2,a2,4
  76:	421c                	lw	a5,0(a2)

00000078 <.LVL14>:
  78:	0007dc63          	bgez	a5,90 <.L15>

0000007c <.LBB45>:
  7c:	6705                	lui	a4,0x1
  7e:	002047b7          	lui	a5,0x204

00000082 <.L16>:
  82:	c798                	sw	a4,8(a5)

00000084 <.LBB50>:
  84:	03c7e683          	p.elw	a3,60(a5) # 20403c <ne16_infeat+0x1f3f34>

00000088 <.LBB53>:
  88:	c3d8                	sw	a4,4(a5)

0000008a <.LBE45>:
  8a:	4214                	lw	a3,0(a2)

0000008c <.LVL19>:
  8c:	fe06cbe3          	bltz	a3,82 <.L16>

00000090 <.L15>:
  90:	102015b7          	lui	a1,0x10201
  94:	02058593          	addi	a1,a1,32 # 10201020 <ne16_infeat+0x101f0f18>
  98:	0005a023          	sw	zero,0(a1)
  9c:	000007b7          	lui	a5,0x0
  a0:	00078793          	mv	a5,a5
  a4:	00f5a223          	sw	a5,4(a1)
  a8:	00000537          	lui	a0,0x0
  ac:	00050793          	mv	a5,a0
  b0:	00f5a423          	sw	a5,8(a1)
  b4:	000007b7          	lui	a5,0x0
  b8:	00078793          	mv	a5,a5
  bc:	00f5a623          	sw	a5,12(a1)
  c0:	10078713          	addi	a4,a5,256 # 100 <.LBB64+0x2>
  c4:	00e5a823          	sw	a4,16(a1)
  c8:	10478793          	addi	a5,a5,260
  cc:	00f5aa23          	sw	a5,20(a1)

000000d0 <.LVL21>:
  d0:	00000837          	lui	a6,0x0

000000d4 <.LBB55>:
  d4:	4719                	li	a4,6
  d6:	00080813          	mv	a6,a6

000000da <.LVL22>:
  da:	012450fb          	lp.setupi	x1,18,ea <.L25>

000000de <.LVL23>:
  de:	00271693          	slli	a3,a4,0x2
  e2:	20d87603          	p.lw	a2,a3(a6)
  e6:	00c5e6a3          	p.sw	a2,a3(a1)

000000ea <.L25>:
  ea:	0705                	addi	a4,a4,1

000000ec <.LBE55>:
  ec:	10201637          	lui	a2,0x10201
  f0:	00062023          	sw	zero,0(a2) # 10201000 <ne16_infeat+0x101f0ef8>

000000f4 <.LBB56>:
  f4:	6705                	lui	a4,0x1

000000f6 <.LVL25>:
  f6:	002047b7          	lui	a5,0x204

000000fa <.LBE56>:
  fa:	0631                	addi	a2,a2,12

000000fc <.L18>:
  fc:	c798                	sw	a4,8(a5)

000000fe <.LBB64>:
  fe:	03c7e683          	p.elw	a3,60(a5) # 20403c <ne16_infeat+0x1f3f34>

00000102 <.LBB67>:
 102:	c3d8                	sw	a4,4(a5)

00000104 <.LBE67>:
 104:	4214                	lw	a3,0(a2)
 106:	fafd                	bnez	a3,fc <.L18>
 108:	102007b7          	lui	a5,0x10200
 10c:	07e1                	addi	a5,a5,24
 10e:	4398                	lw	a4,0(a5)
 110:	000005b7          	lui	a1,0x0
 114:	6611                	lui	a2,0x4
 116:	c0b73733          	p.bclr	a4,a4,0,11
 11a:	c398                	sw	a4,0(a5)
 11c:	00058593          	mv	a1,a1
 120:	00050513          	mv	a0,a0
 124:	0141                	addi	sp,sp,16

00000126 <.LCFI13>:
 126:	00000317          	auipc	t1,0x0
 12a:	00030067          	jr	t1 # 126 <.LCFI13>

Disassembly of section .text.startup.main:

00000000 <main>:
   0:	00000317          	auipc	t1,0x0
   4:	00030067          	jr	t1 # 0 <main>
