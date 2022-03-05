
build/test/test2.o:     file format elf32-littleriscv


Disassembly of section .text.ne16_compare_int:

00000000 <ne16_compare_int>:
   0:	7179                	addi	sp,sp,-48
   2:	d606                	sw	ra,44(sp)
   4:	d422                	sw	s0,40(sp)
   6:	d226                	sw	s1,36(sp)
   8:	d04a                	sw	s2,32(sp)
   a:	ce4e                	sw	s3,28(sp)
   c:	cc52                	sw	s4,24(sp)
   e:	ca56                	sw	s5,20(sp)
  10:	c85a                	sw	s6,16(sp)
  12:	06c05e63          	blez	a2,8e <.L6>
  16:	8a2e                	mv	s4,a1
  18:	89aa                	mv	s3,a0
  1a:	8932                	mv	s2,a2
  1c:	4401                	li	s0,0
  1e:	4481                	li	s1,0
  20:	00000ab7          	lui	s5,0x0
  24:	00000b37          	lui	s6,0x0

00000028 <.L5>:
  28:	00241713          	slli	a4,s0,0x2
  2c:	00e986b3          	add	a3,s3,a4
  30:	4290                	lw	a2,0(a3)
  32:	20ea7583          	p.lw	a1,a4(s4)
  36:	0405                	addi	s0,s0,1
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
  5c:	5422                	lw	s0,40(sp)
  5e:	8526                	mv	a0,s1
  60:	5902                	lw	s2,32(sp)
  62:	5492                	lw	s1,36(sp)
  64:	49f2                	lw	s3,28(sp)
  66:	4a62                	lw	s4,24(sp)
  68:	4ad2                	lw	s5,20(sp)
  6a:	4b42                	lw	s6,16(sp)
  6c:	6145                	addi	sp,sp,48
  6e:	8082                	ret

00000070 <.L10>:
  70:	000b0513          	mv	a0,s6
  74:	c22e                	sw	a1,4(sp)
  76:	c432                	sw	a2,8(sp)
  78:	c636                	sw	a3,12(sp)
  7a:	c03a                	sw	a4,0(sp)
  7c:	00000097          	auipc	ra,0x0
  80:	000080e7          	jalr	ra # 7c <.L10+0xc>
  84:	4702                	lw	a4,0(sp)
  86:	46b2                	lw	a3,12(sp)
  88:	4622                	lw	a2,8(sp)
  8a:	4592                	lw	a1,4(sp)
  8c:	bf7d                	j	4a <.L4>

0000008e <.L6>:
  8e:	4481                	li	s1,0
  90:	b7e9                	j	5a <.L1>

Disassembly of section .text.checkInt:

00000000 <checkInt>:
   0:	1101                	addi	sp,sp,-32
   2:	ce06                	sw	ra,28(sp)
   4:	cc22                	sw	s0,24(sp)
   6:	ca26                	sw	s1,20(sp)
   8:	c84a                	sw	s2,16(sp)
   a:	c64e                	sw	s3,12(sp)
   c:	c452                	sw	s4,8(sp)
   e:	c256                	sw	s5,4(sp)
  10:	04c05863          	blez	a2,60 <.L15>
  14:	89ae                	mv	s3,a1
  16:	892a                	mv	s2,a0
  18:	84b2                	mv	s1,a2
  1a:	4a01                	li	s4,0
  1c:	4401                	li	s0,0
  1e:	00000ab7          	lui	s5,0x0

00000022 <.L14>:
  22:	00241793          	slli	a5,s0,0x2
  26:	20f9f703          	p.lw	a4,a5(s3)
  2a:	20f97783          	p.lw	a5,a5(s2)
  2e:	85a2                	mv	a1,s0
  30:	863a                	mv	a2,a4
  32:	0405                	addi	s0,s0,1
  34:	86be                	mv	a3,a5
  36:	000a8513          	mv	a0,s5
  3a:	00f70763          	beq	a4,a5,48 <.L13>
  3e:	0a05                	addi	s4,s4,1
  40:	00000097          	auipc	ra,0x0
  44:	000080e7          	jalr	ra # 40 <.L14+0x1e>

00000048 <.L13>:
  48:	fc944de3          	blt	s0,s1,22 <.L14>

0000004c <.L11>:
  4c:	40f2                	lw	ra,28(sp)
  4e:	4462                	lw	s0,24(sp)
  50:	8552                	mv	a0,s4
  52:	44d2                	lw	s1,20(sp)
  54:	4942                	lw	s2,16(sp)
  56:	49b2                	lw	s3,12(sp)
  58:	4a22                	lw	s4,8(sp)
  5a:	4a92                	lw	s5,4(sp)
  5c:	6105                	addi	sp,sp,32
  5e:	8082                	ret

00000060 <.L15>:
  60:	4a01                	li	s4,0
  62:	b7ed                	j	4c <.L11>

Disassembly of section .text.cluster_entry:

00000000 <cluster_entry>:
   0:	1141                	addi	sp,sp,-16
   2:	c422                	sw	s0,8(sp)
   4:	f1402473          	csrr	s0,mhartid
   8:	f4543433          	p.bclr	s0,s0,26,5
   c:	c606                	sw	ra,12(sp)
   e:	c226                	sw	s1,4(sp)
  10:	00000097          	auipc	ra,0x0
  14:	000080e7          	jalr	ra # 10 <cluster_entry+0x10>
  18:	00000097          	auipc	ra,0x0
  1c:	000080e7          	jalr	ra # 18 <cluster_entry+0x18>
  20:	e801                	bnez	s0,30 <.L19>
  22:	abbab7b7          	lui	a5,0xabbab
  26:	10000737          	lui	a4,0x10000
  2a:	bba78793          	addi	a5,a5,-1094 # abbaabba <golden_matmul_out+0xabbaa4da>
  2e:	c31c                	sw	a5,0(a4)

00000030 <.L19>:
  30:	000004b7          	lui	s1,0x0
  34:	00048493          	mv	s1,s1
  38:	85a6                	mv	a1,s1
  3a:	e0858077          	0xe0858077
  3e:	24048693          	addi	a3,s1,576 # 240 <filters_3d>
  42:	e1068077          	0xe1068077
  46:	36048713          	addi	a4,s1,864
  4a:	e1270077          	0xe1270077
  4e:	48048793          	addi	a5,s1,1152
  52:	e1478077          	0xe1478077
  56:	5a048613          	addi	a2,s1,1440
  5a:	e1660077          	0xe1660077
  5e:	4881                	li	a7,0
  60:	4301                	li	t1,0
  62:	4e01                	li	t3,0
  64:	4e81                	li	t4,0
  66:	4f01                	li	t5,0
  68:	4f81                	li	t6,0
  6a:	4281                	li	t0,0
  6c:	4381                	li	t2,0
  6e:	12048513          	addi	a0,s1,288
  72:	048950fb          	lp.setupi	x1,72,96 <.L28>
  76:	e0950077          	0xe0950077
  7a:	d80693f7          	0xd80693f7
  7e:	d82712f7          	0xd82712f7
  82:	d8479ff7          	0xd8479ff7
  86:	d8e59f77          	0xd8e59f77
  8a:	d9169ef7          	0xd9169ef7
  8e:	d9371e77          	0xd9371e77
  92:	d9579377          	0xd9579377

00000096 <.L28>:
  96:	d97618f7          	0xd97618f7
  9a:	6c74a023          	sw	t2,1728(s1)
  9e:	6c54a223          	sw	t0,1732(s1)
  a2:	6df4a423          	sw	t6,1736(s1)
  a6:	6de4a623          	sw	t5,1740(s1)
  aa:	6dd4a823          	sw	t4,1744(s1)
  ae:	6dc4aa23          	sw	t3,1748(s1)
  b2:	6c64ac23          	sw	t1,1752(s1)
  b6:	6d14ae23          	sw	a7,1756(s1)
  ba:	00000097          	auipc	ra,0x0
  be:	000080e7          	jalr	ra # ba <.L28+0x24>
  c2:	c819                	beqz	s0,d8 <.L26>
  c4:	00000097          	auipc	ra,0x0
  c8:	000080e7          	jalr	ra # c4 <.L28+0x2e>
  cc:	40b2                	lw	ra,12(sp)
  ce:	4422                	lw	s0,8(sp)
  d0:	4492                	lw	s1,4(sp)
  d2:	4501                	li	a0,0
  d4:	0141                	addi	sp,sp,16
  d6:	8082                	ret

000000d8 <.L26>:
  d8:	deadd7b7          	lui	a5,0xdeadd
  dc:	aca78793          	addi	a5,a5,-1334 # deadcaca <golden_matmul_out+0xdeadc3ea>
  e0:	10000437          	lui	s0,0x10000
  e4:	c01c                	sw	a5,0(s0)
  e6:	00000097          	auipc	ra,0x0
  ea:	000080e7          	jalr	ra # e6 <.L26+0xe>
  ee:	4621                	li	a2,8
  f0:	6e048593          	addi	a1,s1,1760
  f4:	6c048513          	addi	a0,s1,1728
  f8:	00000097          	auipc	ra,0x0
  fc:	000080e7          	jalr	ra # f8 <.L26+0x20>
 100:	c901                	beqz	a0,110 <.L27>
 102:	4791                	li	a5,4
 104:	c01c                	sw	a5,0(s0)
 106:	40b2                	lw	ra,12(sp)
 108:	4422                	lw	s0,8(sp)
 10a:	4492                	lw	s1,4(sp)
 10c:	0141                	addi	sp,sp,16
 10e:	8082                	ret

00000110 <.L27>:
 110:	4789                	li	a5,2
 112:	c01c                	sw	a5,0(s0)
 114:	40b2                	lw	ra,12(sp)
 116:	4422                	lw	s0,8(sp)
 118:	4492                	lw	s1,4(sp)
 11a:	0141                	addi	sp,sp,16
 11c:	8082                	ret

Disassembly of section .text.run_test:

00000000 <run_test>:
   0:	102007b7          	lui	a5,0x10200
   4:	07e1                	addi	a5,a5,24
   6:	4398                	lw	a4,0(a5)
   8:	1141                	addi	sp,sp,-16
   a:	c0b74733          	p.bset	a4,a4,0,11
   e:	c398                	sw	a4,0(a5)
  10:	4398                	lw	a4,0(a5)
  12:	c0874733          	p.bset	a4,a4,0,8
  16:	c398                	sw	a4,0(a5)
  18:	4398                	lw	a4,0(a5)
  1a:	ce073733          	p.bclr	a4,a4,7,0
  1e:	c398                	sw	a4,0(a5)
  20:	4398                	lw	a4,0(a5)
  22:	c0374733          	p.bset	a4,a4,0,3
  26:	c398                	sw	a4,0(a5)
  28:	102017b7          	lui	a5,0x10201
  2c:	0007aa23          	sw	zero,20(a5) # 10201014 <golden_matmul_out+0x10200934>
  30:	c402                	sw	zero,8(sp)
  32:	4722                	lw	a4,8(sp)
  34:	47a5                	li	a5,9
  36:	00e7c963          	blt	a5,a4,48 <.L30>
  3a:	4725                	li	a4,9

0000003c <.L31>:
  3c:	47a2                	lw	a5,8(sp)
  3e:	0785                	addi	a5,a5,1
  40:	c43e                	sw	a5,8(sp)
  42:	47a2                	lw	a5,8(sp)
  44:	fef75ce3          	bge	a4,a5,3c <.L31>

00000048 <.L30>:
  48:	102016b7          	lui	a3,0x10201
  4c:	0006aa23          	sw	zero,20(a3) # 10201014 <golden_matmul_out+0x10200934>
  50:	6741                	lui	a4,0x10
  52:	02170613          	addi	a2,a4,33 # 10021 <golden_matmul_out+0xf941>
  56:	02068793          	addi	a5,a3,32
  5a:	02c7ae23          	sw	a2,60(a5)
  5e:	00170613          	addi	a2,a4,1
  62:	04c7a023          	sw	a2,64(a5)
  66:	04c7a223          	sw	a2,68(a5)
  6a:	0709                	addi	a4,a4,2
  6c:	04e7a423          	sw	a4,72(a5)
  70:	04c7a623          	sw	a2,76(a5)
  74:	60000713          	li	a4,1536
  78:	04e7ae23          	sw	a4,92(a5)
  7c:	0006a0a3          	sw	zero,1(a3)
  80:	0006a023          	sw	zero,0(a3)
  84:	c602                	sw	zero,12(sp)
  86:	4732                	lw	a4,12(sp)
  88:	47a5                	li	a5,9
  8a:	00e7c963          	blt	a5,a4,9c <.L32>
  8e:	4725                	li	a4,9

00000090 <.L33>:
  90:	47b2                	lw	a5,12(sp)
  92:	0785                	addi	a5,a5,1
  94:	c63e                	sw	a5,12(sp)
  96:	47b2                	lw	a5,12(sp)
  98:	fef75ce3          	bge	a4,a5,90 <.L33>

0000009c <.L32>:
  9c:	102017b7          	lui	a5,0x10201
  a0:	20000713          	li	a4,512
  a4:	02078793          	addi	a5,a5,32 # 10201020 <golden_matmul_out+0x10200940>
  a8:	04e7ae23          	sw	a4,92(a5)
  ac:	0141                	addi	sp,sp,16
  ae:	8082                	ret

Disassembly of section .text.startup.main:

00000000 <main>:
   0:	1141                	addi	sp,sp,-16
   2:	c606                	sw	ra,12(sp)
   4:	00000097          	auipc	ra,0x0
   8:	000080e7          	jalr	ra # 4 <main+0x4>
   c:	000005b7          	lui	a1,0x0
  10:	00058593          	mv	a1,a1
  14:	4501                	li	a0,0
  16:	00000097          	auipc	ra,0x0
  1a:	000080e7          	jalr	ra # 16 <main+0x16>
  1e:	4501                	li	a0,0
  20:	00000097          	auipc	ra,0x0
  24:	000080e7          	jalr	ra # 20 <main+0x20>
  28:	40b2                	lw	ra,12(sp)
  2a:	4501                	li	a0,0
  2c:	0141                	addi	sp,sp,16
  2e:	8082                	ret
