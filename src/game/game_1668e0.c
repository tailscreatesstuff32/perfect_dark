#include <ultra64.h>
#include "constants.h"
#include "gvars/gvars.h"
#include "setup/setup_000000.h"
#include "setup/setup_0160b0.h"
#include "setup/setup_020df0.h"
#include "types.h"
#include "game/game_000920.h"
#include "game/game_005fd0.h"
#include "game/game_00b200.h"
#include "game/game_00b820.h"
#include "game/game_00c240.h"
#include "game/game_00c490.h"
#include "game/game_0109d0.h"
#include "game/game_011110.h"
#include "game/game_0125a0.h"
#include "game/game_013260.h"
#include "game/game_013540.h"
#include "game/game_014f10.h"
#include "game/game_015010.h"
#include "game/game_0150a0.h"
#include "game/game_015260.h"
#include "game/game_015280.h"
#include "game/game_015400.h"
#include "game/game_015420.h"
#include "game/game_015470.h"
#include "game/game_01d860.h"
#include "game/game_01d9f0.h"
#include "game/chr/chr.h"
#include "game/game_0601b0.h"
#include "game/game_066310.h"
#include "game/game_097a50.h"
#include "game/game_0abe70.h"
#include "game/game_0b0420.h"
#include "game/game_0b28d0.h"
#include "game/game_0c79f0.h"
#include "game/game_0d4690.h"
#include "game/game_0dcdb0.h"
#include "game/game_0f09f0.h"
#include "game/cheats.h"
#include "game/game_107fb0.h"
#include "game/game_115ab0.h"
#include "game/game_11ecf0.h"
#include "game/game_128f30.h"
#include "game/game_129900.h"
#include "game/game_150820.h"
#include "game/game_152fa0.h"
#include "game/game_157db0.h"
#include "game/game_165670.h"
#include "game/game_1668e0.h"
#include "game/game_16cfa0.h"
#include "game/game_175f50.h"
#include "game/game_176080.h"
#include "game/game_176d70.h"
#include "game/game_187770.h"
#include "game/game_1999b0.h"
#include "game/game_19c990.h"
#include "library/library_12dc0.h"

const char var7f1b76f0[] = "-mgfx";
const char var7f1b76f8[] = "-mgfx";
const char var7f1b7700[] = "-mgfxtra";
const char var7f1b770c[] = "-mgfxtra";
const char var7f1b7718[] = "-mvtx";
const char var7f1b7720[] = "-mvtx";
const char var7f1b7728[] = "";
const char var7f1b772c[] = "";
const char var7f1b7730[] = "fr: %d\n";
const char var7f1b7738[] = "cutsceneframe: %d\n";
const char var7f1b774c[] = "pos:%s%s %.2f %.2f %.2f\n";

const u32 var7f1b7768[] = {0x00000000};
const u32 var7f1b776c[] = {0x00000000};
const u32 var7f1b7770[] = {0x7f1681e8};
const u32 var7f1b7774[] = {0x7f1681f0};
const u32 var7f1b7778[] = {0x7f1681f0};
const u32 var7f1b777c[] = {0x7f1681f0};
const u32 var7f1b7780[] = {0x7f1681f0};
const u32 var7f1b7784[] = {0x7f1681f0};
const u32 var7f1b7788[] = {0x7f1681f0};
const u32 var7f1b778c[] = {0x7f1681f0};
const u32 var7f1b7790[] = {0x7f1681f0};
const u32 var7f1b7794[] = {0x7f1681e8};
const u32 var7f1b7798[] = {0x7f1681f0};
const u32 var7f1b779c[] = {0x7f1681f0};
const u32 var7f1b77a0[] = {0x7f1681f0};
const u32 var7f1b77a4[] = {0x7f1681f0};
const u32 var7f1b77a8[] = {0x7f1681f0};
const u32 var7f1b77ac[] = {0x7f1681f0};
const u32 var7f1b77b0[] = {0x7f1681f0};
const u32 var7f1b77b4[] = {0x7f1681f0};
const u32 var7f1b77b8[] = {0x7f1681f0};
const u32 var7f1b77bc[] = {0x7f1681f0};
const u32 var7f1b77c0[] = {0x7f1681f0};
const u32 var7f1b77c4[] = {0x7f1681f0};
const u32 var7f1b77c8[] = {0x7f1681e8};
const u32 var7f1b77cc[] = {0x7f1681e8};
const u32 var7f1b77d0[] = {0x7f1681f0};
const u32 var7f1b77d4[] = {0x7f1681f0};
const u32 var7f1b77d8[] = {0x7f1681f0};
const u32 var7f1b77dc[] = {0x7f1681e8};
const u32 var7f1b77e0[] = {0x7f168a64};
const u32 var7f1b77e4[] = {0x7f168ac8};
const u32 var7f1b77e8[] = {0x7f168974};
const u32 var7f1b77ec[] = {0x7f168a64};
const u32 var7f1b77f0[] = {0x7f168ac8};
const u32 var7f1b77f4[] = {0x7f16894c};
const u32 var7f1b77f8[] = {0x7f168ac8};
const u32 var7f1b77fc[] = {0x7f168ac8};
const u32 var7f1b7800[] = {0x7f168c70};
const u32 var7f1b7804[] = {0x7f168c84};
const u32 var7f1b7808[] = {0x7f168c84};
const u32 var7f1b780c[] = {0x7f168c84};
const u32 var7f1b7810[] = {0x7f168c84};
const u32 var7f1b7814[] = {0x7f168c84};
const u32 var7f1b7818[] = {0x7f168c84};
const u32 var7f1b781c[] = {0x7f168c84};
const u32 var7f1b7820[] = {0x7f168c84};
const u32 var7f1b7824[] = {0x7f168c84};
const u32 var7f1b7828[] = {0x7f168c84};
const u32 var7f1b782c[] = {0x7f168c84};
const u32 var7f1b7830[] = {0x7f168c84};
const u32 var7f1b7834[] = {0x7f168c84};
const u32 var7f1b7838[] = {0x7f168c84};
const u32 var7f1b783c[] = {0x7f168c68};
const u32 var7f1b7840[] = {0x7f168c68};
const u32 var7f1b7844[] = {0x7f168c68};
const u32 var7f1b7848[] = {0x7f168c68};
const u32 var7f1b784c[] = {0x7f168c68};
const u32 var7f1b7850[] = {0x3f866666};
const u32 var7f1b7854[] = {0x3ca3d70b};
const u32 var7f1b7858[] = {0x3f8ccccd};
const u32 var7f1b785c[] = {0x3bda740e};
const u32 var7f1b7860[] = {0x3ca3d70b};
const u32 var7f1b7864[] = {0x3f8ccccd};
const u32 var7f1b7868[] = {0x3bda740e};
const u32 var7f1b786c[] = {0x3eb33333};
const u32 var7f1b7870[] = {0x3e4ccccd};
const u32 var7f1b7874[] = {0x3f19999a};
const u32 var7f1b7878[] = {0x3f8ccccd};
const u32 var7f1b787c[] = {0x3f333333};
const u32 var7f1b7880[] = {0x3f266666};
const u32 var7f1b7884[] = {0x3f19999a};
const u32 var7f1b7888[] = {0x3e4ccccd};
const u32 var7f1b788c[] = {0x3f8ccccd};
const u32 var7f1b7890[] = {0x3e4ccccd};
const u32 var7f1b7894[] = {0x3f19999a};
const u32 var7f1b7898[] = {0x3ef33334};
const u32 var7f1b789c[] = {0x3f19999a};
const u32 var7f1b78a0[] = {0x3e4ccccd};
const u32 var7f1b78a4[] = {0x3f4ccccd};
const u32 var7f1b78a8[] = {0x3f19999a};
const u32 var7f1b78ac[] = {0x3f8ccccd};
const u32 var7f1b78b0[] = {0x3f966666};
const u32 var7f1b78b4[] = {0x3e4ccccd};
const u32 var7f1b78b8[] = {0x3f8ccccd};
const u32 var7f1b78bc[] = {0x00000000};

const char var7f1b78c0[] = "null";
const char var7f1b78c8[] = "leveltune";
const char var7f1b78d4[] = "nrgtune,watchtune,mpdeathtune";
const char var7f1b78f4[] = "ambience";
const char var7f1b7900[] = "NULL";
const char var7f1b7908[] = "playing";
const char var7f1b7910[] = "paused";
const char var7f1b7918[] = "MUSIC : activedeath=%d\n";

GLOBAL_ASM(
glabel func0f1668e0
/*  f1668e0:	3c0e800a */ 	lui	$t6,0x800a
/*  f1668e4:	8dcea244 */ 	lw	$t6,-0x5dbc($t6)
/*  f1668e8:	03e00008 */ 	jr	$ra
/*  f1668ec:	adc41700 */ 	sw	$a0,0x1700($t6)
);

GLOBAL_ASM(
glabel func0f1668f0
/*  f1668f0:	000578c0 */ 	sll	$t7,$a1,0x3
/*  f1668f4:	01e57821 */ 	addu	$t7,$t7,$a1
/*  f1668f8:	3c0e800a */ 	lui	$t6,0x800a
/*  f1668fc:	8dce4928 */ 	lw	$t6,0x4928($t6)
/*  f166900:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f166904:	01e57823 */ 	subu	$t7,$t7,$a1
/*  f166908:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f16690c:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f166910:	a7040010 */ 	sh	$a0,0x10($t8)
/*  f166914:	3c19800a */ 	lui	$t9,0x800a
/*  f166918:	8f396664 */ 	lw	$t9,0x6664($t9)
/*  f16691c:	00044040 */ 	sll	$t0,$a0,0x1
/*  f166920:	03284821 */ 	addu	$t1,$t9,$t0
/*  f166924:	03e00008 */ 	jr	$ra
/*  f166928:	a5250000 */ 	sh	$a1,0x0($t1)
);

GLOBAL_ASM(
glabel func0f16692c
/*  f16692c:	000578c0 */ 	sll	$t7,$a1,0x3
/*  f166930:	01e57821 */ 	addu	$t7,$t7,$a1
/*  f166934:	3c0e800a */ 	lui	$t6,0x800a
/*  f166938:	8dce4928 */ 	lw	$t6,0x4928($t6)
/*  f16693c:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f166940:	01e57823 */ 	subu	$t7,$t7,$a1
/*  f166944:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f166948:	2402ffff */ 	addiu	$v0,$zero,-1
/*  f16694c:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f166950:	a7020010 */ 	sh	$v0,0x10($t8)
/*  f166954:	3c19800a */ 	lui	$t9,0x800a
/*  f166958:	8f396664 */ 	lw	$t9,0x6664($t9)
/*  f16695c:	00044040 */ 	sll	$t0,$a0,0x1
/*  f166960:	03284821 */ 	addu	$t1,$t9,$t0
/*  f166964:	03e00008 */ 	jr	$ra
/*  f166968:	a5220000 */ 	sh	$v0,0x0($t1)
);

GLOBAL_ASM(
glabel func0f16696c
/*  f16696c:	3c0e800a */ 	lui	$t6,0x800a
/*  f166970:	8dce6664 */ 	lw	$t6,0x6664($t6)
/*  f166974:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f166978:	00041040 */ 	sll	$v0,$a0,0x1
/*  f16697c:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f166980:	01c27821 */ 	addu	$t7,$t6,$v0
/*  f166984:	85e50000 */ 	lh	$a1,0x0($t7)
/*  f166988:	2401ffff */ 	addiu	$at,$zero,-1
/*  f16698c:	10a10006 */ 	beq	$a1,$at,.L0f1669a8
/*  f166990:	00000000 */ 	sll	$zero,$zero,0x0
/*  f166994:	afa2001c */ 	sw	$v0,0x1c($sp)
/*  f166998:	0fc59a4b */ 	jal	func0f16692c
/*  f16699c:	afa40020 */ 	sw	$a0,0x20($sp)
/*  f1669a0:	8fa2001c */ 	lw	$v0,0x1c($sp)
/*  f1669a4:	8fa40020 */ 	lw	$a0,0x20($sp)
.L0f1669a8:
/*  f1669a8:	3c19800a */ 	lui	$t9,0x800a
/*  f1669ac:	8f396660 */ 	lw	$t9,0x6660($t9)
/*  f1669b0:	24180002 */ 	addiu	$t8,$zero,0x2
/*  f1669b4:	3c0a800a */ 	lui	$t2,0x800a
/*  f1669b8:	03244021 */ 	addu	$t0,$t9,$a0
/*  f1669bc:	a1180000 */ 	sb	$t8,0x0($t0)
/*  f1669c0:	8d4a6668 */ 	lw	$t2,0x6668($t2)
/*  f1669c4:	2409ffff */ 	addiu	$t1,$zero,-1
/*  f1669c8:	3c0c800a */ 	lui	$t4,0x800a
/*  f1669cc:	01425821 */ 	addu	$t3,$t2,$v0
/*  f1669d0:	a5690000 */ 	sh	$t1,0x0($t3)
/*  f1669d4:	8d8c666c */ 	lw	$t4,0x666c($t4)
/*  f1669d8:	3c013f80 */ 	lui	$at,0x3f80
/*  f1669dc:	44812000 */ 	mtc1	$at,$f4
/*  f1669e0:	00046880 */ 	sll	$t5,$a0,0x2
/*  f1669e4:	018d7021 */ 	addu	$t6,$t4,$t5
/*  f1669e8:	e5c40000 */ 	swc1	$f4,0x0($t6)
/*  f1669ec:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f1669f0:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f1669f4:	03e00008 */ 	jr	$ra
/*  f1669f8:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f1669fc
/*  f1669fc:	3c028008 */ 	lui	$v0,0x8008
/*  f166a00:	8c422050 */ 	lw	$v0,0x2050($v0)
/*  f166a04:	00001825 */ 	or	$v1,$zero,$zero
/*  f166a08:	3c04800a */ 	lui	$a0,0x800a
/*  f166a0c:	18400014 */ 	blez	$v0,.L0f166a60
/*  f166a10:	3c06800a */ 	lui	$a2,%hi(var800a6668)
/*  f166a14:	8c846660 */ 	lw	$a0,0x6660($a0)
/*  f166a18:	24c66668 */ 	addiu	$a2,$a2,%lo(var800a6668)
/*  f166a1c:	2405ffff */ 	addiu	$a1,$zero,-1
.L0f166a20:
/*  f166a20:	908e0000 */ 	lbu	$t6,0x0($a0)
/*  f166a24:	29c10002 */ 	slti	$at,$t6,0x2
/*  f166a28:	5420000a */ 	bnezl	$at,.L0f166a54
/*  f166a2c:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f166a30:	8ccf0000 */ 	lw	$t7,0x0($a2)
/*  f166a34:	0003c040 */ 	sll	$t8,$v1,0x1
/*  f166a38:	01f8c821 */ 	addu	$t9,$t7,$t8
/*  f166a3c:	87280000 */ 	lh	$t0,0x0($t9)
/*  f166a40:	54a80004 */ 	bnel	$a1,$t0,.L0f166a54
/*  f166a44:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f166a48:	03e00008 */ 	jr	$ra
/*  f166a4c:	00601025 */ 	or	$v0,$v1,$zero
/*  f166a50:	24630001 */ 	addiu	$v1,$v1,0x1
.L0f166a54:
/*  f166a54:	0062082a */ 	slt	$at,$v1,$v0
/*  f166a58:	1420fff1 */ 	bnez	$at,.L0f166a20
/*  f166a5c:	24840001 */ 	addiu	$a0,$a0,0x1
.L0f166a60:
/*  f166a60:	00001025 */ 	or	$v0,$zero,$zero
/*  f166a64:	03e00008 */ 	jr	$ra
/*  f166a68:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f166a6c
/*  f166a6c:	3c06800a */ 	lui	$a2,%hi(g_Vars)
/*  f166a70:	24c69fc0 */ 	addiu	$a2,$a2,%lo(g_Vars)
/*  f166a74:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f166a78:	8cc204b4 */ 	lw	$v0,0x4b4($a2)
/*  f166a7c:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f166a80:	afa40020 */ 	sw	$a0,0x20($sp)
/*  f166a84:	afa50024 */ 	sw	$a1,0x24($sp)
/*  f166a88:	0c00566c */ 	jal	func000159b0
/*  f166a8c:	afa2001c */ 	sw	$v0,0x1c($sp)
/*  f166a90:	3c013f80 */ 	lui	$at,0x3f80
/*  f166a94:	44810000 */ 	mtc1	$at,$f0
/*  f166a98:	8fa40020 */ 	lw	$a0,0x20($sp)
/*  f166a9c:	8fa2001c */ 	lw	$v0,0x1c($sp)
/*  f166aa0:	8fa50024 */ 	lw	$a1,0x24($sp)
/*  f166aa4:	3c038008 */ 	lui	$v1,%hi(g_Stages)
/*  f166aa8:	2463fcc0 */ 	addiu	$v1,$v1,%lo(g_Stages)
/*  f166aac:	e4800000 */ 	swc1	$f0,0x0($a0)
/*  f166ab0:	e4800014 */ 	swc1	$f0,0x14($a0)
/*  f166ab4:	e4800028 */ 	swc1	$f0,0x28($a0)
/*  f166ab8:	846e05e8 */ 	lh	$t6,0x5e8($v1)
/*  f166abc:	3c06800a */ 	lui	$a2,%hi(g_Vars)
/*  f166ac0:	24c69fc0 */ 	addiu	$a2,$a2,%lo(g_Vars)
/*  f166ac4:	104e000a */ 	beq	$v0,$t6,.L0f166af0
/*  f166ac8:	2401000f */ 	addiu	$at,$zero,0xf
/*  f166acc:	846f0738 */ 	lh	$t7,0x738($v1)
/*  f166ad0:	104f0007 */ 	beq	$v0,$t7,.L0f166af0
/*  f166ad4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f166ad8:	84780118 */ 	lh	$t8,0x118($v1)
/*  f166adc:	10580004 */ 	beq	$v0,$t8,.L0f166af0
/*  f166ae0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f166ae4:	84790000 */ 	lh	$t9,0x0($v1)
/*  f166ae8:	54590004 */ 	bnel	$v0,$t9,.L0f166afc
/*  f166aec:	846804d0 */ 	lh	$t0,0x4d0($v1)
.L0f166af0:
/*  f166af0:	10a1001d */ 	beq	$a1,$at,.L0f166b68
/*  f166af4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f166af8:	846804d0 */ 	lh	$t0,0x4d0($v1)
.L0f166afc:
/*  f166afc:	24010002 */ 	addiu	$at,$zero,0x2
/*  f166b00:	10480004 */ 	beq	$v0,$t0,.L0f166b14
/*  f166b04:	00000000 */ 	sll	$zero,$zero,0x0
/*  f166b08:	84690070 */ 	lh	$t1,0x70($v1)
/*  f166b0c:	54490004 */ 	bnel	$v0,$t1,.L0f166b20
/*  f166b10:	846a0620 */ 	lh	$t2,0x620($v1)
.L0f166b14:
/*  f166b14:	10a10014 */ 	beq	$a1,$at,.L0f166b68
/*  f166b18:	00000000 */ 	sll	$zero,$zero,0x0
/*  f166b1c:	846a0620 */ 	lh	$t2,0x620($v1)
.L0f166b20:
/*  f166b20:	24010001 */ 	addiu	$at,$zero,0x1
/*  f166b24:	104a0007 */ 	beq	$v0,$t2,.L0f166b44
/*  f166b28:	00000000 */ 	sll	$zero,$zero,0x0
/*  f166b2c:	846b0310 */ 	lh	$t3,0x310($v1)
/*  f166b30:	104b0004 */ 	beq	$v0,$t3,.L0f166b44
/*  f166b34:	00000000 */ 	sll	$zero,$zero,0x0
/*  f166b38:	846c07a8 */ 	lh	$t4,0x7a8($v1)
/*  f166b3c:	544c0004 */ 	bnel	$v0,$t4,.L0f166b50
/*  f166b40:	846d0700 */ 	lh	$t5,0x700($v1)
.L0f166b44:
/*  f166b44:	10a10008 */ 	beq	$a1,$at,.L0f166b68
/*  f166b48:	00000000 */ 	sll	$zero,$zero,0x0
/*  f166b4c:	846d0700 */ 	lh	$t5,0x700($v1)
.L0f166b50:
/*  f166b50:	3c03800a */ 	lui	$v1,%hi(var800a4cc4)
/*  f166b54:	24010071 */ 	addiu	$at,$zero,0x71
/*  f166b58:	144d0015 */ 	bne	$v0,$t5,.L0f166bb0
/*  f166b5c:	24634cc4 */ 	addiu	$v1,$v1,%lo(var800a4cc4)
/*  f166b60:	54a10014 */ 	bnel	$a1,$at,.L0f166bb4
/*  f166b64:	8c6a0000 */ 	lw	$t2,0x0($v1)
.L0f166b68:
/*  f166b68:	3c03800a */ 	lui	$v1,%hi(var800a4cc4)
/*  f166b6c:	24634cc4 */ 	addiu	$v1,$v1,%lo(var800a4cc4)
/*  f166b70:	8c6e0000 */ 	lw	$t6,0x0($v1)
/*  f166b74:	00051080 */ 	sll	$v0,$a1,0x2
/*  f166b78:	00451021 */ 	addu	$v0,$v0,$a1
/*  f166b7c:	00021080 */ 	sll	$v0,$v0,0x2
/*  f166b80:	01c27821 */ 	addu	$t7,$t6,$v0
/*  f166b84:	c5e40004 */ 	lwc1	$f4,0x4($t7)
/*  f166b88:	e4840030 */ 	swc1	$f4,0x30($a0)
/*  f166b8c:	8c780000 */ 	lw	$t8,0x0($v1)
/*  f166b90:	0302c821 */ 	addu	$t9,$t8,$v0
/*  f166b94:	c7260008 */ 	lwc1	$f6,0x8($t9)
/*  f166b98:	e4860034 */ 	swc1	$f6,0x34($a0)
/*  f166b9c:	8c680000 */ 	lw	$t0,0x0($v1)
/*  f166ba0:	01024821 */ 	addu	$t1,$t0,$v0
/*  f166ba4:	c528000c */ 	lwc1	$f8,0xc($t1)
/*  f166ba8:	10000019 */ 	beqz	$zero,.L0f166c10
/*  f166bac:	e4880038 */ 	swc1	$f8,0x38($a0)
.L0f166bb0:
/*  f166bb0:	8c6a0000 */ 	lw	$t2,0x0($v1)
.L0f166bb4:
/*  f166bb4:	00051080 */ 	sll	$v0,$a1,0x2
/*  f166bb8:	8ccc0284 */ 	lw	$t4,0x284($a2)
/*  f166bbc:	00451021 */ 	addu	$v0,$v0,$a1
/*  f166bc0:	00021080 */ 	sll	$v0,$v0,0x2
/*  f166bc4:	01425821 */ 	addu	$t3,$t2,$v0
/*  f166bc8:	c56a0004 */ 	lwc1	$f10,0x4($t3)
/*  f166bcc:	c5900038 */ 	lwc1	$f16,0x38($t4)
/*  f166bd0:	46105481 */ 	sub.s	$f18,$f10,$f16
/*  f166bd4:	e4920030 */ 	swc1	$f18,0x30($a0)
/*  f166bd8:	8c6d0000 */ 	lw	$t5,0x0($v1)
/*  f166bdc:	8ccf0284 */ 	lw	$t7,0x284($a2)
/*  f166be0:	01a27021 */ 	addu	$t6,$t5,$v0
/*  f166be4:	c5c40008 */ 	lwc1	$f4,0x8($t6)
/*  f166be8:	c5e6003c */ 	lwc1	$f6,0x3c($t7)
/*  f166bec:	46062201 */ 	sub.s	$f8,$f4,$f6
/*  f166bf0:	e4880034 */ 	swc1	$f8,0x34($a0)
/*  f166bf4:	8c780000 */ 	lw	$t8,0x0($v1)
/*  f166bf8:	8cc80284 */ 	lw	$t0,0x284($a2)
/*  f166bfc:	0302c821 */ 	addu	$t9,$t8,$v0
/*  f166c00:	c72a000c */ 	lwc1	$f10,0xc($t9)
/*  f166c04:	c5100040 */ 	lwc1	$f16,0x40($t0)
/*  f166c08:	46105481 */ 	sub.s	$f18,$f10,$f16
/*  f166c0c:	e4920038 */ 	swc1	$f18,0x38($a0)
.L0f166c10:
/*  f166c10:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f166c14:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f166c18:	03e00008 */ 	jr	$ra
/*  f166c1c:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f166c20
/*  f166c20:	0004c0c0 */ 	sll	$t8,$a0,0x3
/*  f166c24:	0304c021 */ 	addu	$t8,$t8,$a0
/*  f166c28:	3c0e800a */ 	lui	$t6,0x800a
/*  f166c2c:	8dce4928 */ 	lw	$t6,0x4928($t6)
/*  f166c30:	27bdff98 */ 	addiu	$sp,$sp,-104
/*  f166c34:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f166c38:	0304c023 */ 	subu	$t8,$t8,$a0
/*  f166c3c:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f166c40:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f166c44:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f166c48:	afa40068 */ 	sw	$a0,0x68($sp)
/*  f166c4c:	01d8c821 */ 	addu	$t9,$t6,$t8
/*  f166c50:	87300010 */ 	lh	$s0,0x10($t9)
/*  f166c54:	2402ffff */ 	addiu	$v0,$zero,-1
/*  f166c58:	3c08800a */ 	lui	$t0,0x800a
/*  f166c5c:	12020015 */ 	beq	$s0,$v0,.L0f166cb4
/*  f166c60:	3c0a800a */ 	lui	$t2,0x800a
/*  f166c64:	8d4a6668 */ 	lw	$t2,0x6668($t2)
/*  f166c68:	8d08a244 */ 	lw	$t0,-0x5dbc($t0)
/*  f166c6c:	00105840 */ 	sll	$t3,$s0,0x1
/*  f166c70:	014b6021 */ 	addu	$t4,$t2,$t3
/*  f166c74:	858d0000 */ 	lh	$t5,0x0($t4)
/*  f166c78:	8d091700 */ 	lw	$t1,0x1700($t0)
/*  f166c7c:	3c0f800a */ 	lui	$t7,0x800a
/*  f166c80:	00107080 */ 	sll	$t6,$s0,0x2
/*  f166c84:	152d000b */ 	bne	$t1,$t5,.L0f166cb4
/*  f166c88:	00000000 */ 	sll	$zero,$zero,0x0
/*  f166c8c:	8def666c */ 	lw	$t7,0x666c($t7)
/*  f166c90:	3c018006 */ 	lui	$at,0x8006
/*  f166c94:	c426ef10 */ 	lwc1	$f6,-0x10f0($at)
/*  f166c98:	01eec021 */ 	addu	$t8,$t7,$t6
/*  f166c9c:	c7040000 */ 	lwc1	$f4,0x0($t8)
/*  f166ca0:	3c0a800a */ 	lui	$t2,0x800a
/*  f166ca4:	46062032 */ 	c.eq.s	$f4,$f6
/*  f166ca8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f166cac:	45010012 */ 	bc1t	.L0f166cf8
/*  f166cb0:	00000000 */ 	sll	$zero,$zero,0x0
.L0f166cb4:
/*  f166cb4:	12020003 */ 	beq	$s0,$v0,.L0f166cc4
/*  f166cb8:	02002025 */ 	or	$a0,$s0,$zero
/*  f166cbc:	0fc59a4b */ 	jal	func0f16692c
/*  f166cc0:	8fa50068 */ 	lw	$a1,0x68($sp)
.L0f166cc4:
/*  f166cc4:	0fc59a7f */ 	jal	func0f1669fc
/*  f166cc8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f166ccc:	00408025 */ 	or	$s0,$v0,$zero
/*  f166cd0:	00402025 */ 	or	$a0,$v0,$zero
/*  f166cd4:	0fc59a3c */ 	jal	func0f1668f0
/*  f166cd8:	8fa50068 */ 	lw	$a1,0x68($sp)
/*  f166cdc:	3c19800a */ 	lui	$t9,0x800a
/*  f166ce0:	8f396660 */ 	lw	$t9,0x6660($t9)
/*  f166ce4:	3c0c800a */ 	lui	$t4,0x800a
/*  f166ce8:	3c0d800a */ 	lui	$t5,0x800a
/*  f166cec:	03304021 */ 	addu	$t0,$t9,$s0
/*  f166cf0:	10000006 */ 	beqz	$zero,.L0f166d0c
/*  f166cf4:	a1000000 */ 	sb	$zero,0x0($t0)
.L0f166cf8:
/*  f166cf8:	8d4a6660 */ 	lw	$t2,0x6660($t2)
/*  f166cfc:	02001025 */ 	or	$v0,$s0,$zero
/*  f166d00:	01505821 */ 	addu	$t3,$t2,$s0
/*  f166d04:	10000018 */ 	beqz	$zero,.L0f166d68
/*  f166d08:	a1600000 */ 	sb	$zero,0x0($t3)
.L0f166d0c:
/*  f166d0c:	8d8ca244 */ 	lw	$t4,-0x5dbc($t4)
/*  f166d10:	8dad6668 */ 	lw	$t5,0x6668($t5)
/*  f166d14:	00107840 */ 	sll	$t7,$s0,0x1
/*  f166d18:	8d891700 */ 	lw	$t1,0x1700($t4)
/*  f166d1c:	01af7021 */ 	addu	$t6,$t5,$t7
/*  f166d20:	3c18800a */ 	lui	$t8,0x800a
/*  f166d24:	a5c90000 */ 	sh	$t1,0x0($t6)
/*  f166d28:	8f18666c */ 	lw	$t8,0x666c($t8)
/*  f166d2c:	3c018006 */ 	lui	$at,0x8006
/*  f166d30:	c428ef10 */ 	lwc1	$f8,-0x10f0($at)
/*  f166d34:	0010c880 */ 	sll	$t9,$s0,0x2
/*  f166d38:	03194021 */ 	addu	$t0,$t8,$t9
/*  f166d3c:	e5080000 */ 	swc1	$f8,0x0($t0)
/*  f166d40:	8fa50068 */ 	lw	$a1,0x68($sp)
/*  f166d44:	0fc59a9b */ 	jal	func0f166a6c
/*  f166d48:	27a40024 */ 	addiu	$a0,$sp,0x24
/*  f166d4c:	3c0b800a */ 	lui	$t3,0x800a
/*  f166d50:	8d6b6670 */ 	lw	$t3,0x6670($t3)
/*  f166d54:	00105180 */ 	sll	$t2,$s0,0x6
/*  f166d58:	27a40024 */ 	addiu	$a0,$sp,0x24
/*  f166d5c:	0c005815 */ 	jal	func00016054
/*  f166d60:	014b2821 */ 	addu	$a1,$t2,$t3
/*  f166d64:	02001025 */ 	or	$v0,$s0,$zero
.L0f166d68:
/*  f166d68:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f166d6c:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f166d70:	27bd0068 */ 	addiu	$sp,$sp,0x68
/*  f166d74:	03e00008 */ 	jr	$ra
/*  f166d78:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f166d7c
/*  f166d7c:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f166d80:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f166d84:	00803025 */ 	or	$a2,$a0,$zero
/*  f166d88:	afa60018 */ 	sw	$a2,0x18($sp)
/*  f166d8c:	0fc59b08 */ 	jal	func0f166c20
/*  f166d90:	00a02025 */ 	or	$a0,$a1,$zero
/*  f166d94:	8fa30018 */ 	lw	$v1,0x18($sp)
/*  f166d98:	3c0e0102 */ 	lui	$t6,0x102
/*  f166d9c:	35ce0040 */ 	ori	$t6,$t6,0x40
/*  f166da0:	3c18800a */ 	lui	$t8,0x800a
/*  f166da4:	ac6e0000 */ 	sw	$t6,0x0($v1)
/*  f166da8:	8f186670 */ 	lw	$t8,0x6670($t8)
/*  f166dac:	00027980 */ 	sll	$t7,$v0,0x6
/*  f166db0:	24660008 */ 	addiu	$a2,$v1,0x8
/*  f166db4:	01f8c821 */ 	addu	$t9,$t7,$t8
/*  f166db8:	ac790004 */ 	sw	$t9,0x4($v1)
/*  f166dbc:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f166dc0:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f166dc4:	00c01025 */ 	or	$v0,$a2,$zero
/*  f166dc8:	03e00008 */ 	jr	$ra
/*  f166dcc:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f166dd0
/*  f166dd0:	3c0f800a */ 	lui	$t7,0x800a
/*  f166dd4:	8def4cc4 */ 	lw	$t7,0x4cc4($t7)
/*  f166dd8:	00047080 */ 	sll	$t6,$a0,0x2
/*  f166ddc:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f166de0:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f166de4:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f166de8:	03e00008 */ 	jr	$ra
/*  f166dec:	24420004 */ 	addiu	$v0,$v0,0x4
);

GLOBAL_ASM(
glabel func0f166df0
/*  f166df0:	3c03800a */ 	lui	$v1,%hi(var800a4cc4)
/*  f166df4:	24634cc4 */ 	addiu	$v1,$v1,%lo(var800a4cc4)
/*  f166df8:	8c6e0000 */ 	lw	$t6,0x0($v1)
/*  f166dfc:	00041080 */ 	sll	$v0,$a0,0x2
/*  f166e00:	00441021 */ 	addu	$v0,$v0,$a0
/*  f166e04:	00021080 */ 	sll	$v0,$v0,0x2
/*  f166e08:	01c27821 */ 	addu	$t7,$t6,$v0
/*  f166e0c:	c5e40004 */ 	lwc1	$f4,0x4($t7)
/*  f166e10:	e4a40000 */ 	swc1	$f4,0x0($a1)
/*  f166e14:	8c780000 */ 	lw	$t8,0x0($v1)
/*  f166e18:	0302c821 */ 	addu	$t9,$t8,$v0
/*  f166e1c:	c7260008 */ 	lwc1	$f6,0x8($t9)
/*  f166e20:	e4a60004 */ 	swc1	$f6,0x4($a1)
/*  f166e24:	8c680000 */ 	lw	$t0,0x0($v1)
/*  f166e28:	01024821 */ 	addu	$t1,$t0,$v0
/*  f166e2c:	c528000c */ 	lwc1	$f8,0xc($t1)
/*  f166e30:	03e00008 */ 	jr	$ra
/*  f166e34:	e4a80008 */ 	swc1	$f8,0x8($a1)
/*  f166e38:	00000000 */ 	sll	$zero,$zero,0x0
/*  f166e3c:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f166e40
/*  f166e40:	00047080 */ 	sll	$t6,$a0,0x2
/*  f166e44:	3c028008 */ 	lui	$v0,0x8008
/*  f166e48:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f166e4c:	03e00008 */ 	jr	$ra
/*  f166e50:	8c422060 */ 	lw	$v0,0x2060($v0)
);

GLOBAL_ASM(
glabel func0f166e54
/*  f166e54:	8c820004 */ 	lw	$v0,0x4($a0)
/*  f166e58:	00001825 */ 	or	$v1,$zero,$zero
/*  f166e5c:	10400005 */ 	beqz	$v0,.L0f166e74
/*  f166e60:	00000000 */ 	sll	$zero,$zero,0x0
/*  f166e64:	8c8e0000 */ 	lw	$t6,0x0($a0)
/*  f166e68:	004e1823 */ 	subu	$v1,$v0,$t6
/*  f166e6c:	03e00008 */ 	jr	$ra
/*  f166e70:	00601025 */ 	or	$v0,$v1,$zero
.L0f166e74:
/*  f166e74:	03e00008 */ 	jr	$ra
/*  f166e78:	00601025 */ 	or	$v0,$v1,$zero
);

GLOBAL_ASM(
glabel func0f166e7c
/*  f166e7c:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f166e80:	3c0f8008 */ 	lui	$t7,%hi(filetable)
/*  f166e84:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f166e88:	25ef2060 */ 	addiu	$t7,$t7,%lo(filetable)
/*  f166e8c:	00047080 */ 	sll	$t6,$a0,0x2
/*  f166e90:	0fc59b95 */ 	jal	func0f166e54
/*  f166e94:	01cf2021 */ 	addu	$a0,$t6,$t7
/*  f166e98:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f166e9c:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f166ea0:	03e00008 */ 	jr	$ra
/*  f166ea4:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f166ea8
/*  f166ea8:	afa40000 */ 	sw	$a0,0x0($sp)
/*  f166eac:	03e00008 */ 	jr	$ra
/*  f166eb0:	00001025 */ 	or	$v0,$zero,$zero
);

GLOBAL_ASM(
glabel func0f166eb4
/*  f166eb4:	27bdebd0 */ 	addiu	$sp,$sp,-5168
/*  f166eb8:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f166ebc:	afa41430 */ 	sw	$a0,0x1430($sp)
/*  f166ec0:	afa51434 */ 	sw	$a1,0x1434($sp)
/*  f166ec4:	afa61438 */ 	sw	$a2,0x1438($sp)
/*  f166ec8:	afa7143c */ 	sw	$a3,0x143c($sp)
/*  f166ecc:	0fc59b95 */ 	jal	func0f166e54
/*  f166ed0:	00c02025 */ 	or	$a0,$a2,$zero
/*  f166ed4:	8fa41434 */ 	lw	$a0,0x1434($sp)
/*  f166ed8:	8fa71430 */ 	lw	$a3,0x1430($sp)
/*  f166edc:	8fa91438 */ 	lw	$t1,0x1438($sp)
/*  f166ee0:	14800006 */ 	bnez	$a0,.L0f166efc
/*  f166ee4:	00403025 */ 	or	$a2,$v0,$zero
/*  f166ee8:	00e02025 */ 	or	$a0,$a3,$zero
/*  f166eec:	0c003504 */ 	jal	func0000d410
/*  f166ef0:	8d250000 */ 	lw	$a1,0x0($t1)
/*  f166ef4:	1000001c */ 	beqz	$zero,.L0f166f68
/*  f166ef8:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f166efc:
/*  f166efc:	2408fff8 */ 	addiu	$t0,$zero,-8
/*  f166f00:	244e0007 */ 	addiu	$t6,$v0,0x7
/*  f166f04:	01c87824 */ 	and	$t7,$t6,$t0
/*  f166f08:	00e41821 */ 	addu	$v1,$a3,$a0
/*  f166f0c:	006fc023 */ 	subu	$t8,$v1,$t7
/*  f166f10:	0307c823 */ 	subu	$t9,$t8,$a3
/*  f166f14:	2f210008 */ 	sltiu	$at,$t9,0x8
/*  f166f18:	10200004 */ 	beqz	$at,.L0f166f2c
/*  f166f1c:	24cb0007 */ 	addiu	$t3,$a2,0x7
/*  f166f20:	8faa143c */ 	lw	$t2,0x143c($sp)
/*  f166f24:	1000000f */ 	beqz	$zero,.L0f166f64
/*  f166f28:	ad400000 */ 	sw	$zero,0x0($t2)
.L0f166f2c:
/*  f166f2c:	01686024 */ 	and	$t4,$t3,$t0
/*  f166f30:	006c2023 */ 	subu	$a0,$v1,$t4
/*  f166f34:	8d250000 */ 	lw	$a1,0x0($t1)
/*  f166f38:	0c003504 */ 	jal	func0000d410
/*  f166f3c:	afa4001c */ 	sw	$a0,0x1c($sp)
/*  f166f40:	8fa4001c */ 	lw	$a0,0x1c($sp)
/*  f166f44:	8fa51430 */ 	lw	$a1,0x1430($sp)
/*  f166f48:	0c001d3c */ 	jal	func000074f0
/*  f166f4c:	27a6002c */ 	addiu	$a2,$sp,0x2c
/*  f166f50:	8fb8143c */ 	lw	$t8,0x143c($sp)
/*  f166f54:	244d000f */ 	addiu	$t5,$v0,0xf
/*  f166f58:	35ae000f */ 	ori	$t6,$t5,0xf
/*  f166f5c:	39cf000f */ 	xori	$t7,$t6,0xf
/*  f166f60:	af0f0000 */ 	sw	$t7,0x0($t8)
.L0f166f64:
/*  f166f64:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f166f68:
/*  f166f68:	27bd1430 */ 	addiu	$sp,$sp,0x1430
/*  f166f6c:	03e00008 */ 	jr	$ra
/*  f166f70:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f166f74
/*  f166f74:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f166f78:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f166f7c:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f166f80:	afb40028 */ 	sw	$s4,0x28($sp)
/*  f166f84:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f166f88:	3c11800a */ 	lui	$s1,%hi(var800a6680)
/*  f166f8c:	3c128008 */ 	lui	$s2,%hi(filetable)
/*  f166f90:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f166f94:	afb30024 */ 	sw	$s3,0x24($sp)
/*  f166f98:	26522060 */ 	addiu	$s2,$s2,%lo(filetable)
/*  f166f9c:	26316680 */ 	addiu	$s1,$s1,%lo(var800a6680)
/*  f166fa0:	24100001 */ 	addiu	$s0,$zero,0x1
/*  f166fa4:	241407de */ 	addiu	$s4,$zero,0x7de
/*  f166fa8:	001070c0 */ 	sll	$t6,$s0,0x3
.L0f166fac:
/*  f166fac:	022e1021 */ 	addu	$v0,$s1,$t6
/*  f166fb0:	00107880 */ 	sll	$t7,$s0,0x2
/*  f166fb4:	ac400000 */ 	sw	$zero,0x0($v0)
/*  f166fb8:	ac400004 */ 	sw	$zero,0x4($v0)
/*  f166fbc:	0fc59b95 */ 	jal	func0f166e54
/*  f166fc0:	024f2021 */ 	addu	$a0,$s2,$t7
/*  f166fc4:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f166fc8:	5614fff8 */ 	bnel	$s0,$s4,.L0f166fac
/*  f166fcc:	001070c0 */ 	sll	$t6,$s0,0x3
/*  f166fd0:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f166fd4:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f166fd8:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f166fdc:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f166fe0:	8fb30024 */ 	lw	$s3,0x24($sp)
/*  f166fe4:	8fb40028 */ 	lw	$s4,0x28($sp)
/*  f166fe8:	03e00008 */ 	jr	$ra
/*  f166fec:	27bd0030 */ 	addiu	$sp,$sp,0x30
);

GLOBAL_ASM(
glabel func0f166ff0
/*  f166ff0:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f166ff4:	afa40028 */ 	sw	$a0,0x28($sp)
/*  f166ff8:	97ae002a */ 	lhu	$t6,0x2a($sp)
/*  f166ffc:	3c188008 */ 	lui	$t8,%hi(filetable)
/*  f167000:	27182060 */ 	addiu	$t8,$t8,%lo(filetable)
/*  f167004:	000e7880 */ 	sll	$t7,$t6,0x2
/*  f167008:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16700c:	01f82021 */ 	addu	$a0,$t7,$t8
/*  f167010:	afa5002c */ 	sw	$a1,0x2c($sp)
/*  f167014:	afa60030 */ 	sw	$a2,0x30($sp)
/*  f167018:	afa70034 */ 	sw	$a3,0x34($sp)
/*  f16701c:	0fc59b95 */ 	jal	func0f166e54
/*  f167020:	afa4001c */ 	sw	$a0,0x1c($sp)
/*  f167024:	10400007 */ 	beqz	$v0,.L0f167044
/*  f167028:	8fb9001c */ 	lw	$t9,0x1c($sp)
/*  f16702c:	8f280000 */ 	lw	$t0,0x0($t9)
/*  f167030:	8fa90030 */ 	lw	$t1,0x30($sp)
/*  f167034:	8fa4002c */ 	lw	$a0,0x2c($sp)
/*  f167038:	8fa60034 */ 	lw	$a2,0x34($sp)
/*  f16703c:	0c003504 */ 	jal	func0000d410
/*  f167040:	01092821 */ 	addu	$a1,$t0,$t1
.L0f167044:
/*  f167044:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f167048:	27bd0028 */ 	addiu	$sp,$sp,0x28
/*  f16704c:	03e00008 */ 	jr	$ra
/*  f167050:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f167054
/*  f167054:	27bdff78 */ 	addiu	$sp,$sp,-136
/*  f167058:	3c0f8008 */ 	lui	$t7,%hi(filetable)
/*  f16705c:	25ef2060 */ 	addiu	$t7,$t7,%lo(filetable)
/*  f167060:	00047080 */ 	sll	$t6,$a0,0x2
/*  f167064:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f167068:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f16706c:	01cf2021 */ 	addu	$a0,$t6,$t7
/*  f167070:	8c850000 */ 	lw	$a1,0x0($a0)
/*  f167074:	27b00044 */ 	addiu	$s0,$sp,0x44
/*  f167078:	2401fff0 */ 	addiu	$at,$zero,-16
/*  f16707c:	14a0000c */ 	bnez	$a1,.L0f1670b0
/*  f167080:	24060040 */ 	addiu	$a2,$zero,0x40
/*  f167084:	0fc59baa */ 	jal	func0f166ea8
/*  f167088:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16708c:	27b00044 */ 	addiu	$s0,$sp,0x44
/*  f167090:	2401fff0 */ 	addiu	$at,$zero,-16
/*  f167094:	02012824 */ 	and	$a1,$s0,$at
/*  f167098:	00a08025 */ 	or	$s0,$a1,$zero
/*  f16709c:	00402025 */ 	or	$a0,$v0,$zero
/*  f1670a0:	0fc5d7d6 */ 	jal	func0f175f58
/*  f1670a4:	24060010 */ 	addiu	$a2,$zero,0x10
/*  f1670a8:	10000004 */ 	beqz	$zero,.L0f1670bc
/*  f1670ac:	00000000 */ 	sll	$zero,$zero,0x0
.L0f1670b0:
/*  f1670b0:	02012024 */ 	and	$a0,$s0,$at
/*  f1670b4:	0c003504 */ 	jal	func0000d410
/*  f1670b8:	00808025 */ 	or	$s0,$a0,$zero
.L0f1670bc:
/*  f1670bc:	0c002277 */ 	jal	func000089dc
/*  f1670c0:	02002025 */ 	or	$a0,$s0,$zero
/*  f1670c4:	10400009 */ 	beqz	$v0,.L0f1670ec
/*  f1670c8:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f1670cc:	92090002 */ 	lbu	$t1,0x2($s0)
/*  f1670d0:	92080004 */ 	lbu	$t0,0x4($s0)
/*  f1670d4:	920c0003 */ 	lbu	$t4,0x3($s0)
/*  f1670d8:	00095400 */ 	sll	$t2,$t1,0x10
/*  f1670dc:	010a5825 */ 	or	$t3,$t0,$t2
/*  f1670e0:	000c6a00 */ 	sll	$t5,$t4,0x8
/*  f1670e4:	10000002 */ 	beqz	$zero,.L0f1670f0
/*  f1670e8:	016d1025 */ 	or	$v0,$t3,$t5
.L0f1670ec:
/*  f1670ec:	00001025 */ 	or	$v0,$zero,$zero
.L0f1670f0:
/*  f1670f0:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f1670f4:	03e00008 */ 	jr	$ra
/*  f1670f8:	27bd0088 */ 	addiu	$sp,$sp,0x88
);

GLOBAL_ASM(
glabel func0f1670fc
/*  f1670fc:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f167100:	24010011 */ 	addiu	$at,$zero,0x11
/*  f167104:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f167108:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f16710c:	afa40030 */ 	sw	$a0,0x30($sp)
/*  f167110:	10a10004 */ 	beq	$a1,$at,.L0f167124
/*  f167114:	afa50034 */ 	sw	$a1,0x34($sp)
/*  f167118:	24010022 */ 	addiu	$at,$zero,0x22
/*  f16711c:	14a1002c */ 	bne	$a1,$at,.L0f1671d0
/*  f167120:	00000000 */ 	sll	$zero,$zero,0x0
.L0f167124:
/*  f167124:	8faf0030 */ 	lw	$t7,0x30($sp)
/*  f167128:	3c19800a */ 	lui	$t9,%hi(var800a6680)
/*  f16712c:	27396680 */ 	addiu	$t9,$t9,%lo(var800a6680)
/*  f167130:	000fc0c0 */ 	sll	$t8,$t7,0x3
/*  f167134:	03198021 */ 	addu	$s0,$t8,$t9
/*  f167138:	8e080000 */ 	lw	$t0,0x0($s0)
/*  f16713c:	5500000e */ 	bnezl	$t0,.L0f167178
/*  f167140:	8e040000 */ 	lw	$a0,0x0($s0)
/*  f167144:	0fc59c15 */ 	jal	func0f167054
/*  f167148:	01e02025 */ 	or	$a0,$t7,$zero
/*  f16714c:	24490020 */ 	addiu	$t1,$v0,0x20
/*  f167150:	2401fff0 */ 	addiu	$at,$zero,-16
/*  f167154:	01215024 */ 	and	$t2,$t1,$at
/*  f167158:	ae0a0000 */ 	sw	$t2,0x0($s0)
/*  f16715c:	8fab0034 */ 	lw	$t3,0x34($sp)
/*  f167160:	24010011 */ 	addiu	$at,$zero,0x11
/*  f167164:	15610003 */ 	bne	$t3,$at,.L0f167174
/*  f167168:	34018000 */ 	dli	$at,0x8000
/*  f16716c:	01416821 */ 	addu	$t5,$t2,$at
/*  f167170:	ae0d0000 */ 	sw	$t5,0x0($s0)
.L0f167174:
/*  f167174:	8e040000 */ 	lw	$a0,0x0($s0)
.L0f167178:
/*  f167178:	0c0048f2 */ 	jal	func000123c8
/*  f16717c:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f167180:	afa20024 */ 	sw	$v0,0x24($sp)
/*  f167184:	8e050000 */ 	lw	$a1,0x0($s0)
/*  f167188:	3c198008 */ 	lui	$t9,%hi(filetable)
/*  f16718c:	27392060 */ 	addiu	$t9,$t9,%lo(filetable)
/*  f167190:	ae050004 */ 	sw	$a1,0x4($s0)
/*  f167194:	8fae0030 */ 	lw	$t6,0x30($sp)
/*  f167198:	00402025 */ 	or	$a0,$v0,$zero
/*  f16719c:	02003825 */ 	or	$a3,$s0,$zero
/*  f1671a0:	000ec080 */ 	sll	$t8,$t6,0x2
/*  f1671a4:	0fc59bad */ 	jal	func0f166eb4
/*  f1671a8:	03193021 */ 	addu	$a2,$t8,$t9
/*  f1671ac:	8fa80034 */ 	lw	$t0,0x34($sp)
/*  f1671b0:	24010011 */ 	addiu	$at,$zero,0x11
/*  f1671b4:	8fa40024 */ 	lw	$a0,0x24($sp)
/*  f1671b8:	11010007 */ 	beq	$t0,$at,.L0f1671d8
/*  f1671bc:	24060004 */ 	addiu	$a2,$zero,0x4
/*  f1671c0:	0c00490c */ 	jal	func00012430
/*  f1671c4:	8e050000 */ 	lw	$a1,0x0($s0)
/*  f1671c8:	10000004 */ 	beqz	$zero,.L0f1671dc
/*  f1671cc:	8fbf001c */ 	lw	$ra,0x1c($sp)
.L0f1671d0:
/*  f1671d0:	1000ffff */ 	beqz	$zero,.L0f1671d0
/*  f1671d4:	00000000 */ 	sll	$zero,$zero,0x0
.L0f1671d8:
/*  f1671d8:	8fbf001c */ 	lw	$ra,0x1c($sp)
.L0f1671dc:
/*  f1671dc:	8fa20024 */ 	lw	$v0,0x24($sp)
/*  f1671e0:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f1671e4:	03e00008 */ 	jr	$ra
/*  f1671e8:	27bd0030 */ 	addiu	$sp,$sp,0x30
/*  f1671ec:	00047080 */ 	sll	$t6,$a0,0x2
/*  f1671f0:	3c018008 */ 	lui	$at,0x8008
/*  f1671f4:	002e0821 */ 	addu	$at,$at,$t6
/*  f1671f8:	03e00008 */ 	jr	$ra
/*  f1671fc:	ac202060 */ 	sw	$zero,0x2060($at)
);

GLOBAL_ASM(
glabel func0f167200
/*  f167200:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f167204:	24010011 */ 	addiu	$at,$zero,0x11
/*  f167208:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16720c:	afa40018 */ 	sw	$a0,0x18($sp)
/*  f167210:	afa60020 */ 	sw	$a2,0x20($sp)
/*  f167214:	10a10004 */ 	beq	$a1,$at,.L0f167228
/*  f167218:	afa70024 */ 	sw	$a3,0x24($sp)
/*  f16721c:	24010022 */ 	addiu	$at,$zero,0x22
/*  f167220:	14a10012 */ 	bne	$a1,$at,.L0f16726c
/*  f167224:	00000000 */ 	sll	$zero,$zero,0x0
.L0f167228:
/*  f167228:	8fae0018 */ 	lw	$t6,0x18($sp)
/*  f16722c:	8fb90024 */ 	lw	$t9,0x24($sp)
/*  f167230:	3c18800a */ 	lui	$t8,%hi(var800a6680)
/*  f167234:	27186680 */ 	addiu	$t8,$t8,%lo(var800a6680)
/*  f167238:	000e78c0 */ 	sll	$t7,$t6,0x3
/*  f16723c:	01f83821 */ 	addu	$a3,$t7,$t8
/*  f167240:	acf90004 */ 	sw	$t9,0x4($a3)
/*  f167244:	8fa80018 */ 	lw	$t0,0x18($sp)
/*  f167248:	3c0a8008 */ 	lui	$t2,%hi(filetable)
/*  f16724c:	254a2060 */ 	addiu	$t2,$t2,%lo(filetable)
/*  f167250:	00084880 */ 	sll	$t1,$t0,0x2
/*  f167254:	012a3021 */ 	addu	$a2,$t1,$t2
/*  f167258:	8fa50024 */ 	lw	$a1,0x24($sp)
/*  f16725c:	0fc59bad */ 	jal	func0f166eb4
/*  f167260:	8fa40020 */ 	lw	$a0,0x20($sp)
/*  f167264:	10000003 */ 	beqz	$zero,.L0f167274
/*  f167268:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16726c:
/*  f16726c:	1000ffff */ 	beqz	$zero,.L0f16726c
/*  f167270:	00000000 */ 	sll	$zero,$zero,0x0
.L0f167274:
/*  f167274:	8fa20020 */ 	lw	$v0,0x20($sp)
/*  f167278:	03e00008 */ 	jr	$ra
/*  f16727c:	27bd0018 */ 	addiu	$sp,$sp,0x18
);

GLOBAL_ASM(
glabel func0f167280
/*  f167280:	000470c0 */ 	sll	$t6,$a0,0x3
/*  f167284:	3c02800a */ 	lui	$v0,0x800a
/*  f167288:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f16728c:	03e00008 */ 	jr	$ra
/*  f167290:	8c426680 */ 	lw	$v0,0x6680($v0)
);

GLOBAL_ASM(
glabel func0f167294
/*  f167294:	000470c0 */ 	sll	$t6,$a0,0x3
/*  f167298:	3c02800a */ 	lui	$v0,0x800a
/*  f16729c:	004e1021 */ 	addu	$v0,$v0,$t6
/*  f1672a0:	03e00008 */ 	jr	$ra
/*  f1672a4:	8c426684 */ 	lw	$v0,0x6684($v0)
);

GLOBAL_ASM(
glabel func0f1672a8
/*  f1672a8:	3c0f800a */ 	lui	$t7,%hi(var800a6680)
/*  f1672ac:	25ef6680 */ 	addiu	$t7,$t7,%lo(var800a6680)
/*  f1672b0:	000470c0 */ 	sll	$t6,$a0,0x3
/*  f1672b4:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f1672b8:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f1672bc:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f1672c0:	afa5001c */ 	sw	$a1,0x1c($sp)
/*  f1672c4:	ac460000 */ 	sw	$a2,0x0($v0)
/*  f1672c8:	10e00005 */ 	beqz	$a3,.L0f1672e0
/*  f1672cc:	ac460004 */ 	sw	$a2,0x4($v0)
/*  f1672d0:	00a02025 */ 	or	$a0,$a1,$zero
/*  f1672d4:	00c02825 */ 	or	$a1,$a2,$zero
/*  f1672d8:	0c00490c */ 	jal	func00012430
/*  f1672dc:	24060004 */ 	addiu	$a2,$zero,0x4
.L0f1672e0:
/*  f1672e0:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f1672e4:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f1672e8:	03e00008 */ 	jr	$ra
/*  f1672ec:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f1672f0
/*  f1672f0:	afa40000 */ 	sw	$a0,0x0($sp)
/*  f1672f4:	308300ff */ 	andi	$v1,$a0,0xff
/*  f1672f8:	3c05800a */ 	lui	$a1,%hi(var800a6680)
/*  f1672fc:	24a56680 */ 	addiu	$a1,$a1,%lo(var800a6680)
/*  f167300:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f167304:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f167308:	240607de */ 	addiu	$a2,$zero,0x7de
.L0f16730c:
/*  f16730c:	14830003 */ 	bne	$a0,$v1,.L0f16731c
/*  f167310:	000278c0 */ 	sll	$t7,$v0,0x3
/*  f167314:	00afc021 */ 	addu	$t8,$a1,$t7
/*  f167318:	af000000 */ 	sw	$zero,0x0($t8)
.L0f16731c:
/*  f16731c:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f167320:	1446fffa */ 	bne	$v0,$a2,.L0f16730c
/*  f167324:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167328:	03e00008 */ 	jr	$ra
/*  f16732c:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f167330
/*  f167330:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f167334:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f167338:	0fc59cbc */ 	jal	func0f1672f0
/*  f16733c:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f167340:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f167344:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f167348:	03e00008 */ 	jr	$ra
/*  f16734c:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f167350
/*  f167350:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f167354:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f167358:	3c057f1b */ 	lui	$a1,%hi(var7f1b76f0)
/*  f16735c:	24a576f0 */ 	addiu	$a1,$a1,%lo(var7f1b76f0)
/*  f167360:	0c004c04 */ 	jal	func00013010
/*  f167364:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f167368:	10400061 */ 	beqz	$v0,.L0f1674f0
/*  f16736c:	3c057f1b */ 	lui	$a1,%hi(var7f1b76f8)
/*  f167370:	afa0002c */ 	sw	$zero,0x2c($sp)
/*  f167374:	24a576f8 */ 	addiu	$a1,$a1,%lo(var7f1b76f8)
/*  f167378:	0c004c04 */ 	jal	func00013010
/*  f16737c:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f167380:	00402025 */ 	or	$a0,$v0,$zero
/*  f167384:	00002825 */ 	or	$a1,$zero,$zero
/*  f167388:	0c004d02 */ 	jal	func00013408
/*  f16738c:	00003025 */ 	or	$a2,$zero,$zero
/*  f167390:	00027280 */ 	sll	$t6,$v0,0xa
/*  f167394:	3c057f1b */ 	lui	$a1,%hi(var7f1b7700)
/*  f167398:	afae0030 */ 	sw	$t6,0x30($sp)
/*  f16739c:	24a57700 */ 	addiu	$a1,$a1,%lo(var7f1b7700)
/*  f1673a0:	0c004c04 */ 	jal	func00013010
/*  f1673a4:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f1673a8:	1040002e */ 	beqz	$v0,.L0f167464
/*  f1673ac:	3c0a800a */ 	lui	$t2,%hi(g_Vars)
/*  f1673b0:	254a9fc0 */ 	addiu	$t2,$t2,%lo(g_Vars)
/*  f1673b4:	8d4f0298 */ 	lw	$t7,0x298($t2)
/*  f1673b8:	24010002 */ 	addiu	$at,$zero,0x2
/*  f1673bc:	05e30005 */ 	bgezl	$t7,.L0f1673d4
/*  f1673c0:	8d59006c */ 	lw	$t9,0x6c($t2)
/*  f1673c4:	8d58029c */ 	lw	$t8,0x29c($t2)
/*  f1673c8:	07000026 */ 	bltz	$t8,.L0f167464
/*  f1673cc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1673d0:	8d59006c */ 	lw	$t9,0x6c($t2)
.L0f1673d4:
/*  f1673d4:	00004025 */ 	or	$t0,$zero,$zero
/*  f1673d8:	00003825 */ 	or	$a3,$zero,$zero
/*  f1673dc:	13200003 */ 	beqz	$t9,.L0f1673ec
/*  f1673e0:	00001825 */ 	or	$v1,$zero,$zero
/*  f1673e4:	10000001 */ 	beqz	$zero,.L0f1673ec
/*  f1673e8:	24080001 */ 	addiu	$t0,$zero,0x1
.L0f1673ec:
/*  f1673ec:	8d4d0068 */ 	lw	$t5,0x68($t2)
/*  f1673f0:	00001025 */ 	or	$v0,$zero,$zero
/*  f1673f4:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f1673f8:	11a00003 */ 	beqz	$t5,.L0f167408
/*  f1673fc:	3c057f1b */ 	lui	$a1,%hi(var7f1b770c)
/*  f167400:	10000001 */ 	beqz	$zero,.L0f167408
/*  f167404:	24070001 */ 	addiu	$a3,$zero,0x1
.L0f167408:
/*  f167408:	8d4e0064 */ 	lw	$t6,0x64($t2)
/*  f16740c:	11c00003 */ 	beqz	$t6,.L0f16741c
/*  f167410:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167414:	10000001 */ 	beqz	$zero,.L0f16741c
/*  f167418:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f16741c:
/*  f16741c:	8d4f0070 */ 	lw	$t7,0x70($t2)
/*  f167420:	11e00003 */ 	beqz	$t7,.L0f167430
/*  f167424:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167428:	10000001 */ 	beqz	$zero,.L0f167430
/*  f16742c:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f167430:
/*  f167430:	0043c021 */ 	addu	$t8,$v0,$v1
/*  f167434:	0307c821 */ 	addu	$t9,$t8,$a3
/*  f167438:	03286821 */ 	addu	$t5,$t9,$t0
/*  f16743c:	15a10009 */ 	bne	$t5,$at,.L0f167464
/*  f167440:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167444:	0c004c04 */ 	jal	func00013010
/*  f167448:	24a5770c */ 	addiu	$a1,$a1,%lo(var7f1b770c)
/*  f16744c:	00402025 */ 	or	$a0,$v0,$zero
/*  f167450:	00002825 */ 	or	$a1,$zero,$zero
/*  f167454:	0c004d02 */ 	jal	func00013408
/*  f167458:	00003025 */ 	or	$a2,$zero,$zero
/*  f16745c:	00027280 */ 	sll	$t6,$v0,0xa
/*  f167460:	afae002c */ 	sw	$t6,0x2c($sp)
.L0f167464:
/*  f167464:	3c0a800a */ 	lui	$t2,%hi(g_Vars)
/*  f167468:	254a9fc0 */ 	addiu	$t2,$t2,%lo(g_Vars)
/*  f16746c:	8d4f0070 */ 	lw	$t7,0x70($t2)
/*  f167470:	8d44006c */ 	lw	$a0,0x6c($t2)
/*  f167474:	8d450068 */ 	lw	$a1,0x68($t2)
/*  f167478:	11e00003 */ 	beqz	$t7,.L0f167488
/*  f16747c:	8d490064 */ 	lw	$t1,0x64($t2)
/*  f167480:	10000002 */ 	beqz	$zero,.L0f16748c
/*  f167484:	24080001 */ 	addiu	$t0,$zero,0x1
.L0f167488:
/*  f167488:	00004025 */ 	or	$t0,$zero,$zero
.L0f16748c:
/*  f16748c:	10800003 */ 	beqz	$a0,.L0f16749c
/*  f167490:	8fb80030 */ 	lw	$t8,0x30($sp)
/*  f167494:	10000002 */ 	beqz	$zero,.L0f1674a0
/*  f167498:	24070001 */ 	addiu	$a3,$zero,0x1
.L0f16749c:
/*  f16749c:	00003825 */ 	or	$a3,$zero,$zero
.L0f1674a0:
/*  f1674a0:	10a00003 */ 	beqz	$a1,.L0f1674b0
/*  f1674a4:	8fb9002c */ 	lw	$t9,0x2c($sp)
/*  f1674a8:	10000002 */ 	beqz	$zero,.L0f1674b4
/*  f1674ac:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f1674b0:
/*  f1674b0:	00001825 */ 	or	$v1,$zero,$zero
.L0f1674b4:
/*  f1674b4:	11200003 */ 	beqz	$t1,.L0f1674c4
/*  f1674b8:	03196821 */ 	addu	$t5,$t8,$t9
/*  f1674bc:	10000002 */ 	beqz	$zero,.L0f1674c8
/*  f1674c0:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f1674c4:
/*  f1674c4:	00001025 */ 	or	$v0,$zero,$zero
.L0f1674c8:
/*  f1674c8:	00027080 */ 	sll	$t6,$v0,0x2
/*  f1674cc:	00037880 */ 	sll	$t7,$v1,0x2
/*  f1674d0:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f1674d4:	0007c880 */ 	sll	$t9,$a3,0x2
/*  f1674d8:	03197021 */ 	addu	$t6,$t8,$t9
/*  f1674dc:	00087880 */ 	sll	$t7,$t0,0x2
/*  f1674e0:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f1674e4:	3c018008 */ 	lui	$at,0x8008
/*  f1674e8:	00380821 */ 	addu	$at,$at,$t8
/*  f1674ec:	ac2d3fdc */ 	sw	$t5,0x3fdc($at)
.L0f1674f0:
/*  f1674f0:	3c057f1b */ 	lui	$a1,%hi(var7f1b7718)
/*  f1674f4:	24a57718 */ 	addiu	$a1,$a1,%lo(var7f1b7718)
/*  f1674f8:	0c004c04 */ 	jal	func00013010
/*  f1674fc:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f167500:	3c0a800a */ 	lui	$t2,%hi(g_Vars)
/*  f167504:	10400034 */ 	beqz	$v0,.L0f1675d8
/*  f167508:	254a9fc0 */ 	addiu	$t2,$t2,%lo(g_Vars)
/*  f16750c:	8d590070 */ 	lw	$t9,0x70($t2)
/*  f167510:	3c057f1b */ 	lui	$a1,%hi(var7f1b7720)
/*  f167514:	24a57720 */ 	addiu	$a1,$a1,%lo(var7f1b7720)
/*  f167518:	13200003 */ 	beqz	$t9,.L0f167528
/*  f16751c:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f167520:	10000002 */ 	beqz	$zero,.L0f16752c
/*  f167524:	24090001 */ 	addiu	$t1,$zero,0x1
.L0f167528:
/*  f167528:	00004825 */ 	or	$t1,$zero,$zero
.L0f16752c:
/*  f16752c:	8d4e006c */ 	lw	$t6,0x6c($t2)
/*  f167530:	00004025 */ 	or	$t0,$zero,$zero
/*  f167534:	00003825 */ 	or	$a3,$zero,$zero
/*  f167538:	11c00003 */ 	beqz	$t6,.L0f167548
/*  f16753c:	00001825 */ 	or	$v1,$zero,$zero
/*  f167540:	10000001 */ 	beqz	$zero,.L0f167548
/*  f167544:	24080001 */ 	addiu	$t0,$zero,0x1
.L0f167548:
/*  f167548:	8d4f0068 */ 	lw	$t7,0x68($t2)
/*  f16754c:	11e00003 */ 	beqz	$t7,.L0f16755c
/*  f167550:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167554:	10000001 */ 	beqz	$zero,.L0f16755c
/*  f167558:	24070001 */ 	addiu	$a3,$zero,0x1
.L0f16755c:
/*  f16755c:	8d4d0064 */ 	lw	$t5,0x64($t2)
/*  f167560:	11a00003 */ 	beqz	$t5,.L0f167570
/*  f167564:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167568:	10000001 */ 	beqz	$zero,.L0f167570
/*  f16756c:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f167570:
/*  f167570:	afa30024 */ 	sw	$v1,0x24($sp)
/*  f167574:	afa70020 */ 	sw	$a3,0x20($sp)
/*  f167578:	afa8001c */ 	sw	$t0,0x1c($sp)
/*  f16757c:	0c004c04 */ 	jal	func00013010
/*  f167580:	afa90018 */ 	sw	$t1,0x18($sp)
/*  f167584:	00402025 */ 	or	$a0,$v0,$zero
/*  f167588:	00002825 */ 	or	$a1,$zero,$zero
/*  f16758c:	0c004d02 */ 	jal	func00013408
/*  f167590:	00003025 */ 	or	$a2,$zero,$zero
/*  f167594:	8fa30024 */ 	lw	$v1,0x24($sp)
/*  f167598:	8fa70020 */ 	lw	$a3,0x20($sp)
/*  f16759c:	8fa8001c */ 	lw	$t0,0x1c($sp)
/*  f1675a0:	8fa90018 */ 	lw	$t1,0x18($sp)
/*  f1675a4:	0003c880 */ 	sll	$t9,$v1,0x2
/*  f1675a8:	00077080 */ 	sll	$t6,$a3,0x2
/*  f1675ac:	032e7821 */ 	addu	$t7,$t9,$t6
/*  f1675b0:	00086880 */ 	sll	$t5,$t0,0x2
/*  f1675b4:	01edc821 */ 	addu	$t9,$t7,$t5
/*  f1675b8:	00097080 */ 	sll	$t6,$t1,0x2
/*  f1675bc:	032e7821 */ 	addu	$t7,$t9,$t6
/*  f1675c0:	3c018008 */ 	lui	$at,0x8008
/*  f1675c4:	002f0821 */ 	addu	$at,$at,$t7
/*  f1675c8:	3c0a800a */ 	lui	$t2,%hi(g_Vars)
/*  f1675cc:	0002c280 */ 	sll	$t8,$v0,0xa
/*  f1675d0:	ac383fec */ 	sw	$t8,0x3fec($at)
/*  f1675d4:	254a9fc0 */ 	addiu	$t2,$t2,%lo(g_Vars)
.L0f1675d8:
/*  f1675d8:	8d4d006c */ 	lw	$t5,0x6c($t2)
/*  f1675dc:	3c048008 */ 	lui	$a0,0x8008
/*  f1675e0:	51a00004 */ 	beqzl	$t5,.L0f1675f4
/*  f1675e4:	00004025 */ 	or	$t0,$zero,$zero
/*  f1675e8:	10000002 */ 	beqz	$zero,.L0f1675f4
/*  f1675ec:	24080001 */ 	addiu	$t0,$zero,0x1
/*  f1675f0:	00004025 */ 	or	$t0,$zero,$zero
.L0f1675f4:
/*  f1675f4:	8d590068 */ 	lw	$t9,0x68($t2)
/*  f1675f8:	53200004 */ 	beqzl	$t9,.L0f16760c
/*  f1675fc:	00003825 */ 	or	$a3,$zero,$zero
/*  f167600:	10000002 */ 	beqz	$zero,.L0f16760c
/*  f167604:	24070001 */ 	addiu	$a3,$zero,0x1
/*  f167608:	00003825 */ 	or	$a3,$zero,$zero
.L0f16760c:
/*  f16760c:	8d4e0064 */ 	lw	$t6,0x64($t2)
/*  f167610:	51c00004 */ 	beqzl	$t6,.L0f167624
/*  f167614:	00001825 */ 	or	$v1,$zero,$zero
/*  f167618:	10000002 */ 	beqz	$zero,.L0f167624
/*  f16761c:	24030001 */ 	addiu	$v1,$zero,0x1
/*  f167620:	00001825 */ 	or	$v1,$zero,$zero
.L0f167624:
/*  f167624:	8d580070 */ 	lw	$t8,0x70($t2)
/*  f167628:	00036880 */ 	sll	$t5,$v1,0x2
/*  f16762c:	00077080 */ 	sll	$t6,$a3,0x2
/*  f167630:	53000004 */ 	beqzl	$t8,.L0f167644
/*  f167634:	00001025 */ 	or	$v0,$zero,$zero
/*  f167638:	10000002 */ 	beqz	$zero,.L0f167644
/*  f16763c:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f167640:	00001025 */ 	or	$v0,$zero,$zero
.L0f167644:
/*  f167644:	00027880 */ 	sll	$t7,$v0,0x2
/*  f167648:	01edc821 */ 	addu	$t9,$t7,$t5
/*  f16764c:	032ec021 */ 	addu	$t8,$t9,$t6
/*  f167650:	00087880 */ 	sll	$t7,$t0,0x2
/*  f167654:	030f6821 */ 	addu	$t5,$t8,$t7
/*  f167658:	008d2021 */ 	addu	$a0,$a0,$t5
/*  f16765c:	8c843fdc */ 	lw	$a0,0x3fdc($a0)
/*  f167660:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f167664:	0004c840 */ 	sll	$t9,$a0,0x1
/*  f167668:	0c0048f2 */ 	jal	func000123c8
/*  f16766c:	03202025 */ 	or	$a0,$t9,$zero
/*  f167670:	3c0a800a */ 	lui	$t2,%hi(g_Vars)
/*  f167674:	254a9fc0 */ 	addiu	$t2,$t2,%lo(g_Vars)
/*  f167678:	8d44006c */ 	lw	$a0,0x6c($t2)
/*  f16767c:	3c06800b */ 	lui	$a2,%hi(var800aa580)
/*  f167680:	24c6a580 */ 	addiu	$a2,$a2,%lo(var800aa580)
/*  f167684:	10800003 */ 	beqz	$a0,.L0f167694
/*  f167688:	acc20000 */ 	sw	$v0,0x0($a2)
/*  f16768c:	10000002 */ 	beqz	$zero,.L0f167698
/*  f167690:	24080001 */ 	addiu	$t0,$zero,0x1
.L0f167694:
/*  f167694:	00004025 */ 	or	$t0,$zero,$zero
.L0f167698:
/*  f167698:	8d450068 */ 	lw	$a1,0x68($t2)
/*  f16769c:	50a00004 */ 	beqzl	$a1,.L0f1676b0
/*  f1676a0:	00003825 */ 	or	$a3,$zero,$zero
/*  f1676a4:	10000002 */ 	beqz	$zero,.L0f1676b0
/*  f1676a8:	24070001 */ 	addiu	$a3,$zero,0x1
/*  f1676ac:	00003825 */ 	or	$a3,$zero,$zero
.L0f1676b0:
/*  f1676b0:	8d490064 */ 	lw	$t1,0x64($t2)
/*  f1676b4:	00076880 */ 	sll	$t5,$a3,0x2
/*  f1676b8:	51200004 */ 	beqzl	$t1,.L0f1676cc
/*  f1676bc:	00001825 */ 	or	$v1,$zero,$zero
/*  f1676c0:	10000002 */ 	beqz	$zero,.L0f1676cc
/*  f1676c4:	24030001 */ 	addiu	$v1,$zero,0x1
/*  f1676c8:	00001825 */ 	or	$v1,$zero,$zero
.L0f1676cc:
/*  f1676cc:	8d4b0070 */ 	lw	$t3,0x70($t2)
/*  f1676d0:	0003c080 */ 	sll	$t8,$v1,0x2
/*  f1676d4:	51600004 */ 	beqzl	$t3,.L0f1676e8
/*  f1676d8:	00001025 */ 	or	$v0,$zero,$zero
/*  f1676dc:	10000002 */ 	beqz	$zero,.L0f1676e8
/*  f1676e0:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f1676e4:	00001025 */ 	or	$v0,$zero,$zero
.L0f1676e8:
/*  f1676e8:	00027080 */ 	sll	$t6,$v0,0x2
/*  f1676ec:	01d87821 */ 	addu	$t7,$t6,$t8
/*  f1676f0:	01edc821 */ 	addu	$t9,$t7,$t5
/*  f1676f4:	00087080 */ 	sll	$t6,$t0,0x2
/*  f1676f8:	032ec021 */ 	addu	$t8,$t9,$t6
/*  f1676fc:	3c0f8008 */ 	lui	$t7,0x8008
/*  f167700:	01f87821 */ 	addu	$t7,$t7,$t8
/*  f167704:	8def3fdc */ 	lw	$t7,0x3fdc($t7)
/*  f167708:	8ccd0000 */ 	lw	$t5,0x0($a2)
/*  f16770c:	01edc821 */ 	addu	$t9,$t7,$t5
/*  f167710:	10800003 */ 	beqz	$a0,.L0f167720
/*  f167714:	acd90004 */ 	sw	$t9,0x4($a2)
/*  f167718:	10000002 */ 	beqz	$zero,.L0f167724
/*  f16771c:	24080001 */ 	addiu	$t0,$zero,0x1
.L0f167720:
/*  f167720:	00004025 */ 	or	$t0,$zero,$zero
.L0f167724:
/*  f167724:	50a00004 */ 	beqzl	$a1,.L0f167738
/*  f167728:	00003825 */ 	or	$a3,$zero,$zero
/*  f16772c:	10000002 */ 	beqz	$zero,.L0f167738
/*  f167730:	24070001 */ 	addiu	$a3,$zero,0x1
/*  f167734:	00003825 */ 	or	$a3,$zero,$zero
.L0f167738:
/*  f167738:	11200003 */ 	beqz	$t1,.L0f167748
/*  f16773c:	00076880 */ 	sll	$t5,$a3,0x2
/*  f167740:	10000002 */ 	beqz	$zero,.L0f16774c
/*  f167744:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f167748:
/*  f167748:	00001825 */ 	or	$v1,$zero,$zero
.L0f16774c:
/*  f16774c:	11600003 */ 	beqz	$t3,.L0f16775c
/*  f167750:	0003c080 */ 	sll	$t8,$v1,0x2
/*  f167754:	10000002 */ 	beqz	$zero,.L0f167760
/*  f167758:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16775c:
/*  f16775c:	00001025 */ 	or	$v0,$zero,$zero
.L0f167760:
/*  f167760:	00027080 */ 	sll	$t6,$v0,0x2
/*  f167764:	01d87821 */ 	addu	$t7,$t6,$t8
/*  f167768:	01edc821 */ 	addu	$t9,$t7,$t5
/*  f16776c:	00087080 */ 	sll	$t6,$t0,0x2
/*  f167770:	032ec021 */ 	addu	$t8,$t9,$t6
/*  f167774:	3c0f8008 */ 	lui	$t7,0x8008
/*  f167778:	01f87821 */ 	addu	$t7,$t7,$t8
/*  f16777c:	8def3fdc */ 	lw	$t7,0x3fdc($t7)
/*  f167780:	8ccd0004 */ 	lw	$t5,0x4($a2)
/*  f167784:	01edc821 */ 	addu	$t9,$t7,$t5
/*  f167788:	10800003 */ 	beqz	$a0,.L0f167798
/*  f16778c:	acd90008 */ 	sw	$t9,0x8($a2)
/*  f167790:	10000002 */ 	beqz	$zero,.L0f16779c
/*  f167794:	24080001 */ 	addiu	$t0,$zero,0x1
.L0f167798:
/*  f167798:	00004025 */ 	or	$t0,$zero,$zero
.L0f16779c:
/*  f16779c:	10a00003 */ 	beqz	$a1,.L0f1677ac
/*  f1677a0:	3c048008 */ 	lui	$a0,0x8008
/*  f1677a4:	10000002 */ 	beqz	$zero,.L0f1677b0
/*  f1677a8:	24070001 */ 	addiu	$a3,$zero,0x1
.L0f1677ac:
/*  f1677ac:	00003825 */ 	or	$a3,$zero,$zero
.L0f1677b0:
/*  f1677b0:	11200003 */ 	beqz	$t1,.L0f1677c0
/*  f1677b4:	00076880 */ 	sll	$t5,$a3,0x2
/*  f1677b8:	10000002 */ 	beqz	$zero,.L0f1677c4
/*  f1677bc:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f1677c0:
/*  f1677c0:	00001825 */ 	or	$v1,$zero,$zero
.L0f1677c4:
/*  f1677c4:	11600003 */ 	beqz	$t3,.L0f1677d4
/*  f1677c8:	0003c080 */ 	sll	$t8,$v1,0x2
/*  f1677cc:	10000002 */ 	beqz	$zero,.L0f1677d8
/*  f1677d0:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f1677d4:
/*  f1677d4:	00001025 */ 	or	$v0,$zero,$zero
.L0f1677d8:
/*  f1677d8:	00027080 */ 	sll	$t6,$v0,0x2
/*  f1677dc:	01d87821 */ 	addu	$t7,$t6,$t8
/*  f1677e0:	01edc821 */ 	addu	$t9,$t7,$t5
/*  f1677e4:	00087080 */ 	sll	$t6,$t0,0x2
/*  f1677e8:	032ec021 */ 	addu	$t8,$t9,$t6
/*  f1677ec:	00982021 */ 	addu	$a0,$a0,$t8
/*  f1677f0:	8c843fec */ 	lw	$a0,0x3fec($a0)
/*  f1677f4:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f1677f8:	00047840 */ 	sll	$t7,$a0,0x1
/*  f1677fc:	0c0048f2 */ 	jal	func000123c8
/*  f167800:	01e02025 */ 	or	$a0,$t7,$zero
/*  f167804:	3c0a800a */ 	lui	$t2,%hi(g_Vars)
/*  f167808:	254a9fc0 */ 	addiu	$t2,$t2,%lo(g_Vars)
/*  f16780c:	8d44006c */ 	lw	$a0,0x6c($t2)
/*  f167810:	3c0c800b */ 	lui	$t4,%hi(var800aa590)
/*  f167814:	258ca590 */ 	addiu	$t4,$t4,%lo(var800aa590)
/*  f167818:	10800003 */ 	beqz	$a0,.L0f167828
/*  f16781c:	ad820000 */ 	sw	$v0,0x0($t4)
/*  f167820:	10000002 */ 	beqz	$zero,.L0f16782c
/*  f167824:	24080001 */ 	addiu	$t0,$zero,0x1
.L0f167828:
/*  f167828:	00004025 */ 	or	$t0,$zero,$zero
.L0f16782c:
/*  f16782c:	8d450068 */ 	lw	$a1,0x68($t2)
/*  f167830:	00003825 */ 	or	$a3,$zero,$zero
/*  f167834:	00001825 */ 	or	$v1,$zero,$zero
/*  f167838:	10a00003 */ 	beqz	$a1,.L0f167848
/*  f16783c:	3c01800b */ 	lui	$at,0x800b
/*  f167840:	10000001 */ 	beqz	$zero,.L0f167848
/*  f167844:	24070001 */ 	addiu	$a3,$zero,0x1
.L0f167848:
/*  f167848:	8d490064 */ 	lw	$t1,0x64($t2)
/*  f16784c:	0007c080 */ 	sll	$t8,$a3,0x2
/*  f167850:	00001025 */ 	or	$v0,$zero,$zero
/*  f167854:	11200003 */ 	beqz	$t1,.L0f167864
/*  f167858:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16785c:	10000001 */ 	beqz	$zero,.L0f167864
/*  f167860:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f167864:
/*  f167864:	8d4b0070 */ 	lw	$t3,0x70($t2)
/*  f167868:	0003c880 */ 	sll	$t9,$v1,0x2
/*  f16786c:	00003825 */ 	or	$a3,$zero,$zero
/*  f167870:	11600003 */ 	beqz	$t3,.L0f167880
/*  f167874:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167878:	10000001 */ 	beqz	$zero,.L0f167880
/*  f16787c:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f167880:
/*  f167880:	00026880 */ 	sll	$t5,$v0,0x2
/*  f167884:	01b97021 */ 	addu	$t6,$t5,$t9
/*  f167888:	01d87821 */ 	addu	$t7,$t6,$t8
/*  f16788c:	00086880 */ 	sll	$t5,$t0,0x2
/*  f167890:	01edc821 */ 	addu	$t9,$t7,$t5
/*  f167894:	3c0e8008 */ 	lui	$t6,0x8008
/*  f167898:	01d97021 */ 	addu	$t6,$t6,$t9
/*  f16789c:	8dce3fec */ 	lw	$t6,0x3fec($t6)
/*  f1678a0:	8d860000 */ 	lw	$a2,0x0($t4)
/*  f1678a4:	00004025 */ 	or	$t0,$zero,$zero
/*  f1678a8:	00001825 */ 	or	$v1,$zero,$zero
/*  f1678ac:	01c6c021 */ 	addu	$t8,$t6,$a2
/*  f1678b0:	10800003 */ 	beqz	$a0,.L0f1678c0
/*  f1678b4:	ad980004 */ 	sw	$t8,0x4($t4)
/*  f1678b8:	10000001 */ 	beqz	$zero,.L0f1678c0
/*  f1678bc:	24080001 */ 	addiu	$t0,$zero,0x1
.L0f1678c0:
/*  f1678c0:	10a00003 */ 	beqz	$a1,.L0f1678d0
/*  f1678c4:	00001025 */ 	or	$v0,$zero,$zero
/*  f1678c8:	10000001 */ 	beqz	$zero,.L0f1678d0
/*  f1678cc:	24070001 */ 	addiu	$a3,$zero,0x1
.L0f1678d0:
/*  f1678d0:	11200003 */ 	beqz	$t1,.L0f1678e0
/*  f1678d4:	00077080 */ 	sll	$t6,$a3,0x2
/*  f1678d8:	10000001 */ 	beqz	$zero,.L0f1678e0
/*  f1678dc:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f1678e0:
/*  f1678e0:	11600003 */ 	beqz	$t3,.L0f1678f0
/*  f1678e4:	00036880 */ 	sll	$t5,$v1,0x2
/*  f1678e8:	10000001 */ 	beqz	$zero,.L0f1678f0
/*  f1678ec:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f1678f0:
/*  f1678f0:	00027880 */ 	sll	$t7,$v0,0x2
/*  f1678f4:	01edc821 */ 	addu	$t9,$t7,$t5
/*  f1678f8:	032ec021 */ 	addu	$t8,$t9,$t6
/*  f1678fc:	00087880 */ 	sll	$t7,$t0,0x2
/*  f167900:	030f6821 */ 	addu	$t5,$t8,$t7
/*  f167904:	3c198008 */ 	lui	$t9,0x8008
/*  f167908:	032dc821 */ 	addu	$t9,$t9,$t5
/*  f16790c:	8f393fec */ 	lw	$t9,0x3fec($t9)
/*  f167910:	8d8e0004 */ 	lw	$t6,0x4($t4)
/*  f167914:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f167918:	27bd0038 */ 	addiu	$sp,$sp,0x38
/*  f16791c:	032ec021 */ 	addu	$t8,$t9,$t6
/*  f167920:	ad980008 */ 	sw	$t8,0x8($t4)
/*  f167924:	a020a5a0 */ 	sb	$zero,-0x5a60($at)
/*  f167928:	3c01800b */ 	lui	$at,0x800b
/*  f16792c:	ac20a5a4 */ 	sw	$zero,-0x5a5c($at)
/*  f167930:	3c01800b */ 	lui	$at,0x800b
/*  f167934:	03e00008 */ 	jr	$ra
/*  f167938:	ac26a59c */ 	sw	$a2,-0x5a64($at)
);

GLOBAL_ASM(
glabel func0f16793c
/*  f16793c:	3c0f800b */ 	lui	$t7,0x800b
/*  f167940:	91efa5a0 */ 	lbu	$t7,-0x5a60($t7)
/*  f167944:	3c02800b */ 	lui	$v0,0x800b
/*  f167948:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f16794c:	000fc080 */ 	sll	$t8,$t7,0x2
/*  f167950:	3c01800b */ 	lui	$at,0x800b
/*  f167954:	00581021 */ 	addu	$v0,$v0,$t8
/*  f167958:	ac2ea5a4 */ 	sw	$t6,-0x5a5c($at)
/*  f16795c:	03e00008 */ 	jr	$ra
/*  f167960:	8c42a580 */ 	lw	$v0,-0x5a80($v0)
);

GLOBAL_ASM(
glabel func0f167964
/*  f167964:	3c06800b */ 	lui	$a2,%hi(var800aa59c)
/*  f167968:	24c6a59c */ 	addiu	$a2,$a2,%lo(var800aa59c)
/*  f16796c:	8cc20000 */ 	lw	$v0,0x0($a2)
/*  f167970:	00047080 */ 	sll	$t6,$a0,0x2
/*  f167974:	01c47023 */ 	subu	$t6,$t6,$a0
/*  f167978:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f16797c:	004e7821 */ 	addu	$t7,$v0,$t6
/*  f167980:	25f9000f */ 	addiu	$t9,$t7,0xf
/*  f167984:	3728000f */ 	ori	$t0,$t9,0xf
/*  f167988:	accf0000 */ 	sw	$t7,0x0($a2)
/*  f16798c:	3909000f */ 	xori	$t1,$t0,0xf
/*  f167990:	03e00008 */ 	jr	$ra
/*  f167994:	acc90000 */ 	sw	$t1,0x0($a2)
);

GLOBAL_ASM(
glabel func0f167998
/*  f167998:	3c05800b */ 	lui	$a1,%hi(var800aa59c)
/*  f16799c:	24a5a59c */ 	addiu	$a1,$a1,%lo(var800aa59c)
/*  f1679a0:	8ca20000 */ 	lw	$v0,0x0($a1)
/*  f1679a4:	244e0040 */ 	addiu	$t6,$v0,0x40
/*  f1679a8:	03e00008 */ 	jr	$ra
/*  f1679ac:	acae0000 */ 	sw	$t6,0x0($a1)
);

GLOBAL_ASM(
glabel func0f1679b0
/*  f1679b0:	3c06800b */ 	lui	$a2,%hi(var800aa59c)
/*  f1679b4:	24c6a59c */ 	addiu	$a2,$a2,%lo(var800aa59c)
/*  f1679b8:	8cc20000 */ 	lw	$v0,0x0($a2)
/*  f1679bc:	00047100 */ 	sll	$t6,$a0,0x4
/*  f1679c0:	004e7821 */ 	addu	$t7,$v0,$t6
/*  f1679c4:	03e00008 */ 	jr	$ra
/*  f1679c8:	accf0000 */ 	sw	$t7,0x0($a2)
);

GLOBAL_ASM(
glabel func0f1679cc
/*  f1679cc:	3c06800b */ 	lui	$a2,%hi(var800aa59c)
/*  f1679d0:	24c6a59c */ 	addiu	$a2,$a2,%lo(var800aa59c)
/*  f1679d4:	00047080 */ 	sll	$t6,$a0,0x2
/*  f1679d8:	8cc20000 */ 	lw	$v0,0x0($a2)
/*  f1679dc:	25c4000f */ 	addiu	$a0,$t6,0xf
/*  f1679e0:	348f000f */ 	ori	$t7,$a0,0xf
/*  f1679e4:	39f8000f */ 	xori	$t8,$t7,0xf
/*  f1679e8:	0058c821 */ 	addu	$t9,$v0,$t8
/*  f1679ec:	03e00008 */ 	jr	$ra
/*  f1679f0:	acd90000 */ 	sw	$t9,0x0($a2)
);

GLOBAL_ASM(
glabel func0f1679f4
/*  f1679f4:	3c06800b */ 	lui	$a2,%hi(var800aa59c)
/*  f1679f8:	24c6a59c */ 	addiu	$a2,$a2,%lo(var800aa59c)
/*  f1679fc:	8cc20000 */ 	lw	$v0,0x0($a2)
/*  f167a00:	2484000f */ 	addiu	$a0,$a0,0xf
/*  f167a04:	348e000f */ 	ori	$t6,$a0,0xf
/*  f167a08:	39cf000f */ 	xori	$t7,$t6,0xf
/*  f167a0c:	004fc021 */ 	addu	$t8,$v0,$t7
/*  f167a10:	03e00008 */ 	jr	$ra
/*  f167a14:	acd80000 */ 	sw	$t8,0x0($a2)
);

GLOBAL_ASM(
glabel func0f167a18
/*  f167a18:	3c04800b */ 	lui	$a0,%hi(var800aa5a0)
/*  f167a1c:	2484a5a0 */ 	addiu	$a0,$a0,%lo(var800aa5a0)
/*  f167a20:	908e0000 */ 	lbu	$t6,0x0($a0)
/*  f167a24:	3c01800b */ 	lui	$at,0x800b
/*  f167a28:	3c19800b */ 	lui	$t9,0x800b
/*  f167a2c:	39cf0001 */ 	xori	$t7,$t6,0x1
/*  f167a30:	a08f0000 */ 	sb	$t7,0x0($a0)
/*  f167a34:	ac20a5a4 */ 	sw	$zero,-0x5a5c($at)
/*  f167a38:	90820000 */ 	lbu	$v0,0x0($a0)
/*  f167a3c:	3c058008 */ 	lui	$a1,%hi(var80084008)
/*  f167a40:	3c01800b */ 	lui	$at,0x800b
/*  f167a44:	0002c080 */ 	sll	$t8,$v0,0x2
/*  f167a48:	0338c821 */ 	addu	$t9,$t9,$t8
/*  f167a4c:	8f39a590 */ 	lw	$t9,-0x5a70($t9)
/*  f167a50:	24a54008 */ 	addiu	$a1,$a1,%lo(var80084008)
/*  f167a54:	240a0002 */ 	addiu	$t2,$zero,0x2
/*  f167a58:	ac39a59c */ 	sw	$t9,-0x5a64($at)
/*  f167a5c:	8ca30000 */ 	lw	$v1,0x0($a1)
/*  f167a60:	3c018008 */ 	lui	$at,0x8008
/*  f167a64:	00380821 */ 	addu	$at,$at,$t8
/*  f167a68:	ac234000 */ 	sw	$v1,0x4000($at)
/*  f167a6c:	2401ffff */ 	addiu	$at,$zero,-1
/*  f167a70:	24680001 */ 	addiu	$t0,$v1,0x1
/*  f167a74:	15010002 */ 	bne	$t0,$at,.L0f167a80
/*  f167a78:	aca80000 */ 	sw	$t0,0x0($a1)
/*  f167a7c:	acaa0000 */ 	sw	$t2,0x0($a1)
.L0f167a80:
/*  f167a80:	03e00008 */ 	jr	$ra
/*  f167a84:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167a88:	3c0e800b */ 	lui	$t6,0x800b
/*  f167a8c:	91cea5a0 */ 	lbu	$t6,-0x5a60($t6)
/*  f167a90:	3c18800b */ 	lui	$t8,0x800b
/*  f167a94:	000e7880 */ 	sll	$t7,$t6,0x2
/*  f167a98:	030fc021 */ 	addu	$t8,$t8,$t7
/*  f167a9c:	8f18a584 */ 	lw	$t8,-0x5a7c($t8)
/*  f167aa0:	03041023 */ 	subu	$v0,$t8,$a0
/*  f167aa4:	0002c8c3 */ 	sra	$t9,$v0,0x3
/*  f167aa8:	03e00008 */ 	jr	$ra
/*  f167aac:	03201025 */ 	or	$v0,$t9,$zero
/*  f167ab0:	3c0e800b */ 	lui	$t6,0x800b
/*  f167ab4:	91cea5a0 */ 	lbu	$t6,-0x5a60($t6)
/*  f167ab8:	3c18800b */ 	lui	$t8,0x800b
/*  f167abc:	3c19800b */ 	lui	$t9,0x800b
/*  f167ac0:	000e7880 */ 	sll	$t7,$t6,0x2
/*  f167ac4:	030fc021 */ 	addu	$t8,$t8,$t7
/*  f167ac8:	8f18a594 */ 	lw	$t8,-0x5a6c($t8)
/*  f167acc:	8f39a59c */ 	lw	$t9,-0x5a64($t9)
/*  f167ad0:	03e00008 */ 	jr	$ra
/*  f167ad4:	03191023 */ 	subu	$v0,$t8,$t9
/*  f167ad8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167adc:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f167ae0
/*  f167ae0:	3c028008 */ 	lui	$v0,0x8008
/*  f167ae4:	03e00008 */ 	jr	$ra
/*  f167ae8:	8c424040 */ 	lw	$v0,0x4040($v0)
/*  f167aec:	3c018008 */ 	lui	$at,0x8008
/*  f167af0:	03e00008 */ 	jr	$ra
/*  f167af4:	ac244040 */ 	sw	$a0,0x4040($at)
);

GLOBAL_ASM(
glabel func0f167af8
/*  f167af8:	3c02800a */ 	lui	$v0,%hi(g_Vars)
/*  f167afc:	24429fc0 */ 	addiu	$v0,$v0,%lo(g_Vars)
/*  f167b00:	240effff */ 	addiu	$t6,$zero,-1
/*  f167b04:	ac400320 */ 	sw	$zero,0x320($v0)
/*  f167b08:	03e00008 */ 	jr	$ra
/*  f167b0c:	ac4e04d8 */ 	sw	$t6,0x4d8($v0)
);

GLOBAL_ASM(
glabel func0f167b10
/*  f167b10:	3c03800b */ 	lui	$v1,%hi(var800aa5b0)
/*  f167b14:	3c04800b */ 	lui	$a0,%hi(var800aa5c0)
/*  f167b18:	3c05800b */ 	lui	$a1,%hi(var800aa5cc)
/*  f167b1c:	24a5a5cc */ 	addiu	$a1,$a1,%lo(var800aa5cc)
/*  f167b20:	2484a5c0 */ 	addiu	$a0,$a0,%lo(var800aa5c0)
/*  f167b24:	2463a5b0 */ 	addiu	$v1,$v1,%lo(var800aa5b0)
/*  f167b28:	2402ffff */ 	addiu	$v0,$zero,-1
.L0f167b2c:
/*  f167b2c:	24840004 */ 	addiu	$a0,$a0,0x4
/*  f167b30:	24630004 */ 	addiu	$v1,$v1,0x4
/*  f167b34:	ac60fffc */ 	sw	$zero,-0x4($v1)
/*  f167b38:	1485fffc */ 	bne	$a0,$a1,.L0f167b2c
/*  f167b3c:	ac82fffc */ 	sw	$v0,-0x4($a0)
/*  f167b40:	03e00008 */ 	jr	$ra
/*  f167b44:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f167b48
/*  f167b48:	3c02800b */ 	lui	$v0,%hi(var800aa5c0)
/*  f167b4c:	2442a5c0 */ 	addiu	$v0,$v0,%lo(var800aa5c0)
/*  f167b50:	00001825 */ 	or	$v1,$zero,$zero
/*  f167b54:	24050003 */ 	addiu	$a1,$zero,0x3
.L0f167b58:
/*  f167b58:	8c4e0000 */ 	lw	$t6,0x0($v0)
/*  f167b5c:	548e0004 */ 	bnel	$a0,$t6,.L0f167b70
/*  f167b60:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f167b64:	03e00008 */ 	jr	$ra
/*  f167b68:	00601025 */ 	or	$v0,$v1,$zero
/*  f167b6c:	24630001 */ 	addiu	$v1,$v1,0x1
.L0f167b70:
/*  f167b70:	1465fff9 */ 	bne	$v1,$a1,.L0f167b58
/*  f167b74:	24420004 */ 	addiu	$v0,$v0,0x4
/*  f167b78:	2402ffff */ 	addiu	$v0,$zero,-1
/*  f167b7c:	03e00008 */ 	jr	$ra
/*  f167b80:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f167b84
/*  f167b84:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f167b88:	10a0002b */ 	beqz	$a1,.L0f167c38
/*  f167b8c:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f167b90:	0fc59ed2 */ 	jal	func0f167b48
/*  f167b94:	afa40038 */ 	sw	$a0,0x38($sp)
/*  f167b98:	2401ffff */ 	addiu	$at,$zero,-1
/*  f167b9c:	54410037 */ 	bnel	$v0,$at,.L0f167c7c
/*  f167ba0:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f167ba4:	0fc59ed2 */ 	jal	func0f167b48
/*  f167ba8:	2404ffff */ 	addiu	$a0,$zero,-1
/*  f167bac:	2401ffff */ 	addiu	$at,$zero,-1
/*  f167bb0:	10410031 */ 	beq	$v0,$at,.L0f167c78
/*  f167bb4:	3c09800b */ 	lui	$t1,%hi(var800aa5b0)
/*  f167bb8:	2529a5b0 */ 	addiu	$t1,$t1,%lo(var800aa5b0)
/*  f167bbc:	00027080 */ 	sll	$t6,$v0,0x2
/*  f167bc0:	012e7821 */ 	addu	$t7,$t1,$t6
/*  f167bc4:	8df80000 */ 	lw	$t8,0x0($t7)
/*  f167bc8:	8fb90038 */ 	lw	$t9,0x38($sp)
/*  f167bcc:	3c048009 */ 	lui	$a0,0x8009
/*  f167bd0:	17000029 */ 	bnez	$t8,.L0f167c78
/*  f167bd4:	00195080 */ 	sll	$t2,$t9,0x2
/*  f167bd8:	3c01bf80 */ 	lui	$at,0xbf80
/*  f167bdc:	44812000 */ 	mtc1	$at,$f4
/*  f167be0:	3c058008 */ 	lui	$a1,0x8008
/*  f167be4:	00aa2821 */ 	addu	$a1,$a1,$t2
/*  f167be8:	00021880 */ 	sll	$v1,$v0,0x2
/*  f167bec:	240bffff */ 	addiu	$t3,$zero,-1
/*  f167bf0:	240cffff */ 	addiu	$t4,$zero,-1
/*  f167bf4:	240dffff */ 	addiu	$t5,$zero,-1
/*  f167bf8:	afad001c */ 	sw	$t5,0x1c($sp)
/*  f167bfc:	afac0018 */ 	sw	$t4,0x18($sp)
/*  f167c00:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f167c04:	01233021 */ 	addu	$a2,$t1,$v1
/*  f167c08:	afa30028 */ 	sw	$v1,0x28($sp)
/*  f167c0c:	84a54046 */ 	lh	$a1,0x4046($a1)
/*  f167c10:	8c845200 */ 	lw	$a0,0x5200($a0)
/*  f167c14:	2407ffff */ 	addiu	$a3,$zero,-1
/*  f167c18:	0c004241 */ 	jal	func00010904
/*  f167c1c:	e7a40014 */ 	swc1	$f4,0x14($sp)
/*  f167c20:	8fa30028 */ 	lw	$v1,0x28($sp)
/*  f167c24:	8fae0038 */ 	lw	$t6,0x38($sp)
/*  f167c28:	3c01800b */ 	lui	$at,0x800b
/*  f167c2c:	00230821 */ 	addu	$at,$at,$v1
/*  f167c30:	10000011 */ 	beqz	$zero,.L0f167c78
/*  f167c34:	ac2ea5c0 */ 	sw	$t6,-0x5a40($at)
.L0f167c38:
/*  f167c38:	0fc59ed2 */ 	jal	func0f167b48
/*  f167c3c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167c40:	2401ffff */ 	addiu	$at,$zero,-1
/*  f167c44:	1041000c */ 	beq	$v0,$at,.L0f167c78
/*  f167c48:	3c09800b */ 	lui	$t1,%hi(var800aa5b0)
/*  f167c4c:	2529a5b0 */ 	addiu	$t1,$t1,%lo(var800aa5b0)
/*  f167c50:	00021080 */ 	sll	$v0,$v0,0x2
/*  f167c54:	01227821 */ 	addu	$t7,$t1,$v0
/*  f167c58:	8de40000 */ 	lw	$a0,0x0($t7)
/*  f167c5c:	0c00cec9 */ 	jal	func00033b24
/*  f167c60:	afa20028 */ 	sw	$v0,0x28($sp)
/*  f167c64:	8fa20028 */ 	lw	$v0,0x28($sp)
/*  f167c68:	3c01800b */ 	lui	$at,0x800b
/*  f167c6c:	2418ffff */ 	addiu	$t8,$zero,-1
/*  f167c70:	00220821 */ 	addu	$at,$at,$v0
/*  f167c74:	ac38a5c0 */ 	sw	$t8,-0x5a40($at)
.L0f167c78:
/*  f167c78:	8fbf0024 */ 	lw	$ra,0x24($sp)
.L0f167c7c:
/*  f167c7c:	27bd0038 */ 	addiu	$sp,$sp,0x38
/*  f167c80:	03e00008 */ 	jr	$ra
/*  f167c84:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f167c88
/*  f167c88:	3c0e800a */ 	lui	$t6,0x800a
/*  f167c8c:	8dce9ff4 */ 	lw	$t6,-0x600c($t6)
/*  f167c90:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f167c94:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f167c98:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f167c9c:	15c0000b */ 	bnez	$t6,.L0f167ccc
/*  f167ca0:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f167ca4:	00008025 */ 	or	$s0,$zero,$zero
/*  f167ca8:	02002025 */ 	or	$a0,$s0,$zero
.L0f167cac:
/*  f167cac:	0fc59ee1 */ 	jal	func0f167b84
/*  f167cb0:	00002825 */ 	or	$a1,$zero,$zero
/*  f167cb4:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f167cb8:	24010003 */ 	addiu	$at,$zero,0x3
/*  f167cbc:	5601fffb */ 	bnel	$s0,$at,.L0f167cac
/*  f167cc0:	02002025 */ 	or	$a0,$s0,$zero
/*  f167cc4:	10000059 */ 	beqz	$zero,.L0f167e2c
/*  f167cc8:	00000000 */ 	sll	$zero,$zero,0x0
.L0f167ccc:
/*  f167ccc:	3c05800a */ 	lui	$a1,0x800a
/*  f167cd0:	8ca5a428 */ 	lw	$a1,-0x5bd8($a1)
/*  f167cd4:	0005782b */ 	sltu	$t7,$zero,$a1
/*  f167cd8:	11e0000a */ 	beqz	$t7,.L0f167d04
/*  f167cdc:	01e02825 */ 	or	$a1,$t7,$zero
/*  f167ce0:	0fc5ae15 */ 	jal	func0f16b854
/*  f167ce4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167ce8:	2c450001 */ 	sltiu	$a1,$v0,0x1
/*  f167cec:	10a00005 */ 	beqz	$a1,.L0f167d04
/*  f167cf0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167cf4:	3c05800a */ 	lui	$a1,0x800a
/*  f167cf8:	8ca5a48c */ 	lw	$a1,-0x5b74($a1)
/*  f167cfc:	2cb80001 */ 	sltiu	$t8,$a1,0x1
/*  f167d00:	03002825 */ 	or	$a1,$t8,$zero
.L0f167d04:
/*  f167d04:	0fc59ee1 */ 	jal	func0f167b84
/*  f167d08:	00002025 */ 	or	$a0,$zero,$zero
/*  f167d0c:	3c0a800a */ 	lui	$t2,0x800a
/*  f167d10:	8d4aa02c */ 	lw	$t2,-0x5fd4($t2)
/*  f167d14:	00008825 */ 	or	$s1,$zero,$zero
/*  f167d18:	00008025 */ 	or	$s0,$zero,$zero
/*  f167d1c:	11400003 */ 	beqz	$t2,.L0f167d2c
/*  f167d20:	3c0b800a */ 	lui	$t3,0x800a
/*  f167d24:	10000002 */ 	beqz	$zero,.L0f167d30
/*  f167d28:	24060001 */ 	addiu	$a2,$zero,0x1
.L0f167d2c:
/*  f167d2c:	00003025 */ 	or	$a2,$zero,$zero
.L0f167d30:
/*  f167d30:	8d6ba028 */ 	lw	$t3,-0x5fd8($t3)
/*  f167d34:	3c09800a */ 	lui	$t1,0x800a
/*  f167d38:	3c07800a */ 	lui	$a3,0x800a
/*  f167d3c:	11600003 */ 	beqz	$t3,.L0f167d4c
/*  f167d40:	00002025 */ 	or	$a0,$zero,$zero
/*  f167d44:	10000001 */ 	beqz	$zero,.L0f167d4c
/*  f167d48:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f167d4c:
/*  f167d4c:	8d29a024 */ 	lw	$t1,-0x5fdc($t1)
/*  f167d50:	00001025 */ 	or	$v0,$zero,$zero
/*  f167d54:	00002825 */ 	or	$a1,$zero,$zero
/*  f167d58:	11200003 */ 	beqz	$t1,.L0f167d68
/*  f167d5c:	00107080 */ 	sll	$t6,$s0,0x2
/*  f167d60:	10000001 */ 	beqz	$zero,.L0f167d68
/*  f167d64:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f167d68:
/*  f167d68:	8ce7a030 */ 	lw	$a3,-0x5fd0($a3)
/*  f167d6c:	3c0f800a */ 	lui	$t7,%hi(g_Vars)
/*  f167d70:	25ef9fc0 */ 	addiu	$t7,$t7,%lo(g_Vars)
/*  f167d74:	10e00003 */ 	beqz	$a3,.L0f167d84
/*  f167d78:	01cf1821 */ 	addu	$v1,$t6,$t7
/*  f167d7c:	10000001 */ 	beqz	$zero,.L0f167d84
/*  f167d80:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f167d84:
/*  f167d84:	00a2c821 */ 	addu	$t9,$a1,$v0
/*  f167d88:	03246021 */ 	addu	$t4,$t9,$a0
/*  f167d8c:	01866821 */ 	addu	$t5,$t4,$a2
/*  f167d90:	19a00020 */ 	blez	$t5,.L0f167e14
/*  f167d94:	24080002 */ 	addiu	$t0,$zero,0x2
/*  f167d98:	8c780064 */ 	lw	$t8,0x64($v1)
.L0f167d9c:
/*  f167d9c:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f167da0:	00003025 */ 	or	$a2,$zero,$zero
/*  f167da4:	97190010 */ 	lhu	$t9,0x10($t8)
/*  f167da8:	00002025 */ 	or	$a0,$zero,$zero
/*  f167dac:	00001025 */ 	or	$v0,$zero,$zero
/*  f167db0:	15190002 */ 	bne	$t0,$t9,.L0f167dbc
/*  f167db4:	00002825 */ 	or	$a1,$zero,$zero
/*  f167db8:	24110001 */ 	addiu	$s1,$zero,0x1
.L0f167dbc:
/*  f167dbc:	11400003 */ 	beqz	$t2,.L0f167dcc
/*  f167dc0:	24630004 */ 	addiu	$v1,$v1,0x4
/*  f167dc4:	10000001 */ 	beqz	$zero,.L0f167dcc
/*  f167dc8:	24060001 */ 	addiu	$a2,$zero,0x1
.L0f167dcc:
/*  f167dcc:	11600003 */ 	beqz	$t3,.L0f167ddc
/*  f167dd0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167dd4:	10000001 */ 	beqz	$zero,.L0f167ddc
/*  f167dd8:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f167ddc:
/*  f167ddc:	11200003 */ 	beqz	$t1,.L0f167dec
/*  f167de0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167de4:	10000001 */ 	beqz	$zero,.L0f167dec
/*  f167de8:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f167dec:
/*  f167dec:	10e00003 */ 	beqz	$a3,.L0f167dfc
/*  f167df0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167df4:	10000001 */ 	beqz	$zero,.L0f167dfc
/*  f167df8:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f167dfc:
/*  f167dfc:	00a26021 */ 	addu	$t4,$a1,$v0
/*  f167e00:	01846821 */ 	addu	$t5,$t4,$a0
/*  f167e04:	01a67021 */ 	addu	$t6,$t5,$a2
/*  f167e08:	020e082a */ 	slt	$at,$s0,$t6
/*  f167e0c:	5420ffe3 */ 	bnezl	$at,.L0f167d9c
/*  f167e10:	8c780064 */ 	lw	$t8,0x64($v1)
.L0f167e14:
/*  f167e14:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f167e18:	0fc59ee1 */ 	jal	func0f167b84
/*  f167e1c:	02202825 */ 	or	$a1,$s1,$zero
/*  f167e20:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f167e24:	0fc59ee1 */ 	jal	func0f167b84
/*  f167e28:	02202825 */ 	or	$a1,$s1,$zero
.L0f167e2c:
/*  f167e2c:	3c0f800a */ 	lui	$t7,0x800a
/*  f167e30:	8def9ff4 */ 	lw	$t7,-0x600c($t7)
/*  f167e34:	3c108008 */ 	lui	$s0,%hi(var80084034)
/*  f167e38:	26104034 */ 	addiu	$s0,$s0,%lo(var80084034)
/*  f167e3c:	55e0000b */ 	bnezl	$t7,.L0f167e6c
/*  f167e40:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f167e44:	8e040000 */ 	lw	$a0,0x0($s0)
/*  f167e48:	50800008 */ 	beqzl	$a0,.L0f167e6c
/*  f167e4c:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f167e50:	0c00cdfc */ 	jal	func000337f0
/*  f167e54:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167e58:	50400004 */ 	beqzl	$v0,.L0f167e6c
/*  f167e5c:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f167e60:	0c00cec9 */ 	jal	func00033b24
/*  f167e64:	8e040000 */ 	lw	$a0,0x0($s0)
/*  f167e68:	8fbf001c */ 	lw	$ra,0x1c($sp)
.L0f167e6c:
/*  f167e6c:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f167e70:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f167e74:	03e00008 */ 	jr	$ra
/*  f167e78:	27bd0020 */ 	addiu	$sp,$sp,0x20
);

GLOBAL_ASM(
glabel func0f167e7c
/*  f167e7c:	27bdff98 */ 	addiu	$sp,$sp,-104
/*  f167e80:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f167e84:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f167e88:	0fc5a232 */ 	jal	func0f1688c8
/*  f167e8c:	afa40068 */ 	sw	$a0,0x68($sp)
/*  f167e90:	3c018008 */ 	lui	$at,0x8008
/*  f167e94:	ac204014 */ 	sw	$zero,0x4014($at)
/*  f167e98:	3c018008 */ 	lui	$at,0x8008
/*  f167e9c:	0c004e40 */ 	jal	func00013900
/*  f167ea0:	ac204010 */ 	sw	$zero,0x4010($at)
/*  f167ea4:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f167ea8:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f167eac:	8faf0068 */ 	lw	$t7,0x68($sp)
/*  f167eb0:	240e000a */ 	addiu	$t6,$zero,0xa
/*  f167eb4:	ae0e04d8 */ 	sw	$t6,0x4d8($s0)
/*  f167eb8:	a20004d1 */ 	sb	$zero,0x4d1($s0)
/*  f167ebc:	a20004d0 */ 	sb	$zero,0x4d0($s0)
/*  f167ec0:	0fc41d44 */ 	jal	cheatsActivate
/*  f167ec4:	ae0f04b4 */ 	sw	$t7,0x4b4($s0)
/*  f167ec8:	24180001 */ 	addiu	$t8,$zero,0x1
/*  f167ecc:	3c018008 */ 	lui	$at,0x8008
/*  f167ed0:	ac384040 */ 	sw	$t8,0x4040($at)
/*  f167ed4:	ae00000c */ 	sw	$zero,0xc($s0)
/*  f167ed8:	3c018008 */ 	lui	$at,0x8008
/*  f167edc:	ac204050 */ 	sw	$zero,0x4050($at)
/*  f167ee0:	3c013f80 */ 	lui	$at,0x3f80
/*  f167ee4:	44813000 */ 	mtc1	$at,$f6
/*  f167ee8:	44812000 */ 	mtc1	$at,$f4
/*  f167eec:	24060004 */ 	addiu	$a2,$zero,0x4
/*  f167ef0:	e6060050 */ 	swc1	$f6,0x50($s0)
/*  f167ef4:	c6080050 */ 	lwc1	$f8,0x50($s0)
/*  f167ef8:	44800000 */ 	mtc1	$zero,$f0
/*  f167efc:	ae000008 */ 	sw	$zero,0x8($s0)
/*  f167f00:	ae060034 */ 	sw	$a2,0x34($s0)
/*  f167f04:	3c018008 */ 	lui	$at,0x8008
/*  f167f08:	e6040044 */ 	swc1	$f4,0x44($s0)
/*  f167f0c:	e608004c */ 	swc1	$f8,0x4c($s0)
/*  f167f10:	ac204024 */ 	sw	$zero,0x4024($at)
/*  f167f14:	3c018008 */ 	lui	$at,0x8008
/*  f167f18:	e420403c */ 	swc1	$f0,0x403c($at)
/*  f167f1c:	2402ffff */ 	addiu	$v0,$zero,-1
/*  f167f20:	ae00045c */ 	sw	$zero,0x45c($s0)
/*  f167f24:	ae000460 */ 	sw	$zero,0x460($s0)
/*  f167f28:	ae000464 */ 	sw	$zero,0x464($s0)
/*  f167f2c:	ae000468 */ 	sw	$zero,0x468($s0)
/*  f167f30:	ae00046c */ 	sw	$zero,0x46c($s0)
/*  f167f34:	ae000478 */ 	sw	$zero,0x478($s0)
/*  f167f38:	ae000488 */ 	sw	$zero,0x488($s0)
/*  f167f3c:	ae020440 */ 	sw	$v0,0x440($s0)
/*  f167f40:	ae020444 */ 	sw	$v0,0x444($s0)
/*  f167f44:	ae0004c8 */ 	sw	$zero,0x4c8($s0)
/*  f167f48:	ae0004cc */ 	sw	$zero,0x4cc($s0)
/*  f167f4c:	a20004d3 */ 	sb	$zero,0x4d3($s0)
/*  f167f50:	a20004d6 */ 	sb	$zero,0x4d6($s0)
/*  f167f54:	a20004d7 */ 	sb	$zero,0x4d7($s0)
/*  f167f58:	3c018008 */ 	lui	$at,0x8008
/*  f167f5c:	0fc5b4c9 */ 	jal	func0f16d324
/*  f167f60:	ac204034 */ 	sw	$zero,0x4034($at)
/*  f167f64:	0fc04449 */ 	jal	func0f011124
/*  f167f68:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f167f6c:	0fc04ee0 */ 	jal	func0f013b80
/*  f167f70:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167f74:	0fc5cd70 */ 	jal	func0f1735c0
/*  f167f78:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167f7c:	0fc54cbb */ 	jal	func0f1532ec
/*  f167f80:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167f84:	0fc37768 */ 	jal	func0f0ddda0
/*  f167f88:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167f8c:	8fa20068 */ 	lw	$v0,0x68($sp)
/*  f167f90:	2401004e */ 	addiu	$at,$zero,0x4e
/*  f167f94:	54410005 */ 	bnel	$v0,$at,.L0f167fac
/*  f167f98:	2401005a */ 	addiu	$at,$zero,0x5a
/*  f167f9c:	0fc02d20 */ 	jal	func0f00b480
/*  f167fa0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167fa4:	8fa20068 */ 	lw	$v0,0x68($sp)
/*  f167fa8:	2401005a */ 	addiu	$at,$zero,0x5a
.L0f167fac:
/*  f167fac:	54410006 */ 	bnel	$v0,$at,.L0f167fc8
/*  f167fb0:	2401005b */ 	addiu	$at,$zero,0x5b
/*  f167fb4:	0fc02d20 */ 	jal	func0f00b480
/*  f167fb8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167fbc:	10000053 */ 	beqz	$zero,.L0f16810c
/*  f167fc0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167fc4:	2401005b */ 	addiu	$at,$zero,0x5b
.L0f167fc8:
/*  f167fc8:	54410004 */ 	bnel	$v0,$at,.L0f167fdc
/*  f167fcc:	2401005c */ 	addiu	$at,$zero,0x5c
/*  f167fd0:	1000004e */ 	beqz	$zero,.L0f16810c
/*  f167fd4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167fd8:	2401005c */ 	addiu	$at,$zero,0x5c
.L0f167fdc:
/*  f167fdc:	54410004 */ 	bnel	$v0,$at,.L0f167ff0
/*  f167fe0:	2401005d */ 	addiu	$at,$zero,0x5d
/*  f167fe4:	10000049 */ 	beqz	$zero,.L0f16810c
/*  f167fe8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167fec:	2401005d */ 	addiu	$at,$zero,0x5d
.L0f167ff0:
/*  f167ff0:	14410003 */ 	bne	$v0,$at,.L0f168000
/*  f167ff4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f167ff8:	10000044 */ 	beqz	$zero,.L0f16810c
/*  f167ffc:	00000000 */ 	sll	$zero,$zero,0x0
.L0f168000:
/*  f168000:	0fc04f3c */ 	jal	func0f013cf0
/*  f168004:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168008:	0fc56d4d */ 	jal	func0f15b534
/*  f16800c:	8e0404b4 */ 	lw	$a0,0x4b4($s0)
/*  f168010:	0fc56e42 */ 	jal	func0f15b908
/*  f168014:	8e0404b4 */ 	lw	$a0,0x4b4($s0)
/*  f168018:	0fc051e8 */ 	jal	func0f0147a0
/*  f16801c:	8e0404b4 */ 	lw	$a0,0x4b4($s0)
/*  f168020:	8e190318 */ 	lw	$t9,0x318($s0)
/*  f168024:	13200006 */ 	beqz	$t9,.L0f168040
/*  f168028:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16802c:	0fc5b66a */ 	jal	func0f16d9a8
/*  f168030:	8fa40068 */ 	lw	$a0,0x68($sp)
/*  f168034:	44800000 */ 	mtc1	$zero,$f0
/*  f168038:	10000005 */ 	beqz	$zero,.L0f168050
/*  f16803c:	24060004 */ 	addiu	$a2,$zero,0x4
.L0f168040:
/*  f168040:	0fc5b67c */ 	jal	func0f16d9f0
/*  f168044:	8fa40068 */ 	lw	$a0,0x68($sp)
/*  f168048:	44800000 */ 	mtc1	$zero,$f0
/*  f16804c:	24060004 */ 	addiu	$a2,$zero,0x4
.L0f168050:
/*  f168050:	8e090318 */ 	lw	$t1,0x318($s0)
/*  f168054:	51200006 */ 	beqzl	$t1,.L0f168070
/*  f168058:	8e0a0314 */ 	lw	$t2,0x314($s0)
/*  f16805c:	0fc6214c */ 	jal	func0f188530
/*  f168060:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168064:	44800000 */ 	mtc1	$zero,$f0
/*  f168068:	24060004 */ 	addiu	$a2,$zero,0x4
/*  f16806c:	8e0a0314 */ 	lw	$t2,0x314($s0)
.L0f168070:
/*  f168070:	3c0c800a */ 	lui	$t4,0x800a
/*  f168074:	25859fc0 */ 	addiu	$a1,$t4,-24640
/*  f168078:	15400007 */ 	bnez	$t2,.L0f168098
/*  f16807c:	00a02025 */ 	or	$a0,$a1,$zero
/*  f168080:	3c02800b */ 	lui	$v0,%hi(g_Options)
/*  f168084:	2442c7b8 */ 	addiu	$v0,$v0,%lo(g_Options)
/*  f168088:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f16808c:	ae0600e4 */ 	sw	$a2,0xe4($s0)
/*  f168090:	a04002c5 */ 	sb	$zero,0x2c5($v0)
/*  f168094:	a04b02c6 */ 	sb	$t3,0x2c6($v0)
.L0f168098:
/*  f168098:	3c013f80 */ 	lui	$at,0x3f80
/*  f16809c:	3c08800a */ 	lui	$t0,0x800a
/*  f1680a0:	3c077fff */ 	lui	$a3,0x7fff
/*  f1680a4:	44811000 */ 	mtc1	$at,$f2
/*  f1680a8:	34e7ffff */ 	ori	$a3,$a3,0xffff
/*  f1680ac:	2508a1c0 */ 	addiu	$t0,$t0,-24128
.L0f1680b0:
/*  f1680b0:	e48200d0 */ 	swc1	$f2,0xd0($a0)
/*  f1680b4:	ac8000a8 */ 	sw	$zero,0xa8($a0)
/*  f1680b8:	e48000ac */ 	swc1	$f0,0xac($a0)
/*  f1680bc:	ac8000b0 */ 	sw	$zero,0xb0($a0)
/*  f1680c0:	e48000b4 */ 	swc1	$f0,0xb4($a0)
/*  f1680c4:	ac8700b8 */ 	sw	$a3,0xb8($a0)
/*  f1680c8:	ac8000bc */ 	sw	$zero,0xbc($a0)
/*  f1680cc:	ac8000c8 */ 	sw	$zero,0xc8($a0)
/*  f1680d0:	ac8000cc */ 	sw	$zero,0xcc($a0)
/*  f1680d4:	ac8000c0 */ 	sw	$zero,0xc0($a0)
/*  f1680d8:	ac8700c4 */ 	sw	$a3,0xc4($a0)
/*  f1680dc:	ac8000d4 */ 	sw	$zero,0xd4($a0)
/*  f1680e0:	e48000ec */ 	swc1	$f0,0xec($a0)
/*  f1680e4:	e48000f0 */ 	swc1	$f0,0xf0($a0)
/*  f1680e8:	00001025 */ 	or	$v0,$zero,$zero
/*  f1680ec:	00a01825 */ 	or	$v1,$a1,$zero
.L0f1680f0:
/*  f1680f0:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f1680f4:	24630004 */ 	addiu	$v1,$v1,0x4
/*  f1680f8:	1446fffd */ 	bne	$v0,$a2,.L0f1680f0
/*  f1680fc:	ac600094 */ 	sw	$zero,0x94($v1)
/*  f168100:	24a50080 */ 	addiu	$a1,$a1,0x80
/*  f168104:	14a8ffea */ 	bne	$a1,$t0,.L0f1680b0
/*  f168108:	24840080 */ 	addiu	$a0,$a0,0x80
.L0f16810c:
/*  f16810c:	0fc620db */ 	jal	func0f18836c
/*  f168110:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168114:	0c008dcf */ 	jal	func0002373c
/*  f168118:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16811c:	0fc04274 */ 	jal	func0f0109d0
/*  f168120:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168124:	0fc04ee8 */ 	jal	func0f013ba0
/*  f168128:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16812c:	0fc04444 */ 	jal	func0f011110
/*  f168130:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168134:	0fc04234 */ 	jal	func0f0108d0
/*  f168138:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16813c:	0fc03ad9 */ 	jal	func0f00eb64
/*  f168140:	8fa40068 */ 	lw	$a0,0x68($sp)
/*  f168144:	0fc61883 */ 	jal	func0f18620c
/*  f168148:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16814c:	0fc03090 */ 	jal	func0f00c240
/*  f168150:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168154:	0fc03124 */ 	jal	func0f00c490
/*  f168158:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16815c:	0fc02d44 */ 	jal	func0f00b510
/*  f168160:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168164:	0fc02e08 */ 	jal	func0f00b820
/*  f168168:	8fa40068 */ 	lw	$a0,0x68($sp)
/*  f16816c:	0fc03c5d */ 	jal	func0f00f174
/*  f168170:	8fa40068 */ 	lw	$a0,0x68($sp)
/*  f168174:	0fc254f3 */ 	jal	func0f0953cc
/*  f168178:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16817c:	0fc04c04 */ 	jal	func0f013010
/*  f168180:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168184:	0fc04c4c */ 	jal	func0f013130
/*  f168188:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16818c:	0fc04c98 */ 	jal	func0f013260
/*  f168190:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168194:	0fc04ca8 */ 	jal	func0f0132a0
/*  f168198:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16819c:	0fc59ec4 */ 	jal	func0f167b10
/*  f1681a0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1681a4:	8e0204b4 */ 	lw	$v0,0x4b4($s0)
/*  f1681a8:	28410035 */ 	slti	$at,$v0,0x35
/*  f1681ac:	14200005 */ 	bnez	$at,.L0f1681c4
/*  f1681b0:	2401004e */ 	addiu	$at,$zero,0x4e
/*  f1681b4:	1041000c */ 	beq	$v0,$at,.L0f1681e8
/*  f1681b8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1681bc:	1000000c */ 	beqz	$zero,.L0f1681f0
/*  f1681c0:	00000000 */ 	sll	$zero,$zero,0x0
.L0f1681c4:
/*  f1681c4:	244dffe7 */ 	addiu	$t5,$v0,-25
/*  f1681c8:	2da1001c */ 	sltiu	$at,$t5,0x1c
/*  f1681cc:	10200008 */ 	beqz	$at,.L0f1681f0
/*  f1681d0:	000d6880 */ 	sll	$t5,$t5,0x2
/*  f1681d4:	3c017f1b */ 	lui	$at,%hi(var7f1b7770)
/*  f1681d8:	002d0821 */ 	addu	$at,$at,$t5
/*  f1681dc:	8c2d7770 */ 	lw	$t5,%lo(var7f1b7770)($at)
/*  f1681e0:	01a00008 */ 	jr	$t5
/*  f1681e4:	00000000 */ 	sll	$zero,$zero,0x0
.L0f1681e8:
/*  f1681e8:	0fc4d83a */ 	jal	func0f1360e8
/*  f1681ec:	00000000 */ 	sll	$zero,$zero,0x0
.L0f1681f0:
/*  f1681f0:	0fc02669 */ 	jal	func0f0099a4
/*  f1681f4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1681f8:	0fc051f4 */ 	jal	func0f0147d0
/*  f1681fc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168200:	0fc051fe */ 	jal	func0f0147f8
/*  f168204:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168208:	0fc04d50 */ 	jal	func0f013540
/*  f16820c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168210:	0fc04e7c */ 	jal	func0f0139f0
/*  f168214:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168218:	0fc6753b */ 	jal	func0f19d4ec
/*  f16821c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168220:	8e0e04b4 */ 	lw	$t6,0x4b4($s0)
/*  f168224:	2401005a */ 	addiu	$at,$zero,0x5a
/*  f168228:	51c10085 */ 	beql	$t6,$at,.L0f168440
/*  f16822c:	8e0a031c */ 	lw	$t2,0x31c($s0)
/*  f168230:	8faf0068 */ 	lw	$t7,0x68($sp)
/*  f168234:	2401005b */ 	addiu	$at,$zero,0x5b
/*  f168238:	8fb80068 */ 	lw	$t8,0x68($sp)
/*  f16823c:	55e10008 */ 	bnel	$t7,$at,.L0f168260
/*  f168240:	2401005d */ 	addiu	$at,$zero,0x5d
/*  f168244:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f168248:	00002025 */ 	or	$a0,$zero,$zero
/*  f16824c:	0fc3e326 */ 	jal	func0f0f8c98
/*  f168250:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168254:	1000007a */ 	beqz	$zero,.L0f168440
/*  f168258:	8e0a031c */ 	lw	$t2,0x31c($s0)
/*  f16825c:	2401005d */ 	addiu	$at,$zero,0x5d
.L0f168260:
/*  f168260:	17010007 */ 	bne	$t8,$at,.L0f168280
/*  f168264:	8fb90068 */ 	lw	$t9,0x68($sp)
/*  f168268:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f16826c:	00002025 */ 	or	$a0,$zero,$zero
/*  f168270:	0fc3e326 */ 	jal	func0f0f8c98
/*  f168274:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168278:	10000071 */ 	beqz	$zero,.L0f168440
/*  f16827c:	8e0a031c */ 	lw	$t2,0x31c($s0)
.L0f168280:
/*  f168280:	2401005c */ 	addiu	$at,$zero,0x5c
/*  f168284:	17210005 */ 	bne	$t9,$at,.L0f16829c
/*  f168288:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16828c:	0fc4ed31 */ 	jal	func0f13b4c4
/*  f168290:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168294:	1000006a */ 	beqz	$zero,.L0f168440
/*  f168298:	8e0a031c */ 	lw	$t2,0x31c($s0)
.L0f16829c:
/*  f16829c:	0fc5ddfe */ 	jal	func0f1777f8
/*  f1682a0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1682a4:	0fc042c8 */ 	jal	func0f010b20
/*  f1682a8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1682ac:	8e09006c */ 	lw	$t1,0x6c($s0)
/*  f1682b0:	00003025 */ 	or	$a2,$zero,$zero
/*  f1682b4:	00002825 */ 	or	$a1,$zero,$zero
/*  f1682b8:	11200003 */ 	beqz	$t1,.L0f1682c8
/*  f1682bc:	00002025 */ 	or	$a0,$zero,$zero
/*  f1682c0:	10000001 */ 	beqz	$zero,.L0f1682c8
/*  f1682c4:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f1682c8:
/*  f1682c8:	8e0a0068 */ 	lw	$t2,0x68($s0)
/*  f1682cc:	00001825 */ 	or	$v1,$zero,$zero
/*  f1682d0:	11400003 */ 	beqz	$t2,.L0f1682e0
/*  f1682d4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1682d8:	10000001 */ 	beqz	$zero,.L0f1682e0
/*  f1682dc:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f1682e0:
/*  f1682e0:	8e0b0064 */ 	lw	$t3,0x64($s0)
/*  f1682e4:	00001025 */ 	or	$v0,$zero,$zero
/*  f1682e8:	11600003 */ 	beqz	$t3,.L0f1682f8
/*  f1682ec:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1682f0:	10000001 */ 	beqz	$zero,.L0f1682f8
/*  f1682f4:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f1682f8:
/*  f1682f8:	8e0c0070 */ 	lw	$t4,0x70($s0)
/*  f1682fc:	11800003 */ 	beqz	$t4,.L0f16830c
/*  f168300:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168304:	10000001 */ 	beqz	$zero,.L0f16830c
/*  f168308:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16830c:
/*  f16830c:	00436821 */ 	addu	$t5,$v0,$v1
/*  f168310:	01a47021 */ 	addu	$t6,$t5,$a0
/*  f168314:	01c57821 */ 	addu	$t7,$t6,$a1
/*  f168318:	19e00040 */ 	blez	$t7,.L0f16841c
/*  f16831c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168320:	afa6005c */ 	sw	$a2,0x5c($sp)
.L0f168324:
/*  f168324:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f168328:	8fa4005c */ 	lw	$a0,0x5c($sp)
/*  f16832c:	8e180284 */ 	lw	$t8,0x284($s0)
/*  f168330:	a700024e */ 	sh	$zero,0x24e($t8)
/*  f168334:	8e020284 */ 	lw	$v0,0x284($s0)
/*  f168338:	8459024e */ 	lh	$t9,0x24e($v0)
/*  f16833c:	0fc3e326 */ 	jal	func0f0f8c98
/*  f168340:	a459024c */ 	sh	$t9,0x24c($v0)
/*  f168344:	0fc3fa12 */ 	jal	func0f0fe848
/*  f168348:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16834c:	0fc04914 */ 	jal	func0f012450
/*  f168350:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168354:	0fc042ec */ 	jal	func0f010bb0
/*  f168358:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16835c:	0fc2ddf3 */ 	jal	func0f0b77cc
/*  f168360:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168364:	0fc0463d */ 	jal	func0f0118f4
/*  f168368:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16836c:	0fc2e00b */ 	jal	func0f0b802c
/*  f168370:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168374:	0fc049a1 */ 	jal	func0f012684
/*  f168378:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16837c:	8e090318 */ 	lw	$t1,0x318($s0)
/*  f168380:	3c0a800b */ 	lui	$t2,0x800b
/*  f168384:	51200008 */ 	beqzl	$t1,.L0f1683a8
/*  f168388:	8e0c006c */ 	lw	$t4,0x6c($s0)
/*  f16838c:	8d4acb94 */ 	lw	$t2,-0x346c($t2)
/*  f168390:	314b0002 */ 	andi	$t3,$t2,0x2
/*  f168394:	51600004 */ 	beqzl	$t3,.L0f1683a8
/*  f168398:	8e0c006c */ 	lw	$t4,0x6c($s0)
/*  f16839c:	0fc4a20d */ 	jal	func0f128834
/*  f1683a0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1683a4:	8e0c006c */ 	lw	$t4,0x6c($s0)
.L0f1683a8:
/*  f1683a8:	8fa6005c */ 	lw	$a2,0x5c($sp)
/*  f1683ac:	00002825 */ 	or	$a1,$zero,$zero
/*  f1683b0:	11800003 */ 	beqz	$t4,.L0f1683c0
/*  f1683b4:	24c60001 */ 	addiu	$a2,$a2,0x1
/*  f1683b8:	10000001 */ 	beqz	$zero,.L0f1683c0
/*  f1683bc:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f1683c0:
/*  f1683c0:	8e0d0068 */ 	lw	$t5,0x68($s0)
/*  f1683c4:	00002025 */ 	or	$a0,$zero,$zero
/*  f1683c8:	00001825 */ 	or	$v1,$zero,$zero
/*  f1683cc:	11a00003 */ 	beqz	$t5,.L0f1683dc
/*  f1683d0:	00001025 */ 	or	$v0,$zero,$zero
/*  f1683d4:	10000001 */ 	beqz	$zero,.L0f1683dc
/*  f1683d8:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f1683dc:
/*  f1683dc:	8e0e0064 */ 	lw	$t6,0x64($s0)
/*  f1683e0:	11c00003 */ 	beqz	$t6,.L0f1683f0
/*  f1683e4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1683e8:	10000001 */ 	beqz	$zero,.L0f1683f0
/*  f1683ec:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f1683f0:
/*  f1683f0:	8e0f0070 */ 	lw	$t7,0x70($s0)
/*  f1683f4:	11e00003 */ 	beqz	$t7,.L0f168404
/*  f1683f8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1683fc:	10000001 */ 	beqz	$zero,.L0f168404
/*  f168400:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f168404:
/*  f168404:	0043c021 */ 	addu	$t8,$v0,$v1
/*  f168408:	0304c821 */ 	addu	$t9,$t8,$a0
/*  f16840c:	03254821 */ 	addu	$t1,$t9,$a1
/*  f168410:	00c9082a */ 	slt	$at,$a2,$t1
/*  f168414:	1420ffc3 */ 	bnez	$at,.L0f168324
/*  f168418:	afa6005c */ 	sw	$a2,0x5c($sp)
.L0f16841c:
/*  f16841c:	0fc2d9d9 */ 	jal	func0f0b6764
/*  f168420:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168424:	0fc2d97e */ 	jal	func0f0b65f8
/*  f168428:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16842c:	0fc006f7 */ 	jal	func0f001bdc
/*  f168430:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168434:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f168438:	00002025 */ 	or	$a0,$zero,$zero
/*  f16843c:	8e0a031c */ 	lw	$t2,0x31c($s0)
.L0f168440:
/*  f168440:	11400003 */ 	beqz	$t2,.L0f168450
/*  f168444:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168448:	0fc61f9c */ 	jal	func0f187e70
/*  f16844c:	00000000 */ 	sll	$zero,$zero,0x0
.L0f168450:
/*  f168450:	0fc468b9 */ 	jal	func0f11a2e4
/*  f168454:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168458:	0c003ab7 */ 	jal	func0000eadc
/*  f16845c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168460:	8fab0068 */ 	lw	$t3,0x68($sp)
/*  f168464:	2401005b */ 	addiu	$at,$zero,0x5b
/*  f168468:	55610004 */ 	bnel	$t3,$at,.L0f16847c
/*  f16846c:	8fac0068 */ 	lw	$t4,0x68($sp)
/*  f168470:	0fc4325c */ 	jal	func0f10c970
/*  f168474:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168478:	8fac0068 */ 	lw	$t4,0x68($sp)
.L0f16847c:
/*  f16847c:	2401005d */ 	addiu	$at,$zero,0x5d
/*  f168480:	15810003 */ 	bne	$t4,$at,.L0f168490
/*  f168484:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168488:	0fc432cb */ 	jal	func0f10cb2c
/*  f16848c:	00000000 */ 	sll	$zero,$zero,0x0
.L0f168490:
/*  f168490:	3c0d8009 */ 	lui	$t5,0x8009
/*  f168494:	91ad0af0 */ 	lbu	$t5,0xaf0($t5)
/*  f168498:	24010001 */ 	addiu	$at,$zero,0x1
/*  f16849c:	11a10003 */ 	beq	$t5,$at,.L0f1684ac
/*  f1684a0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1684a4:	0fc528f1 */ 	jal	func0f14a3c4
/*  f1684a8:	00000000 */ 	sll	$zero,$zero,0x0
.L0f1684ac:
/*  f1684ac:	0fc04449 */ 	jal	func0f011124
/*  f1684b0:	00002025 */ 	or	$a0,$zero,$zero
/*  f1684b4:	3c013f80 */ 	lui	$at,0x3f80
/*  f1684b8:	44815000 */ 	mtc1	$at,$f10
/*  f1684bc:	3c018008 */ 	lui	$at,0x8008
/*  f1684c0:	0c000958 */ 	jal	func00002560
/*  f1684c4:	e42a4018 */ 	swc1	$f10,0x4018($at)
/*  f1684c8:	0fc5b350 */ 	jal	func0f16cd40
/*  f1684cc:	00002025 */ 	or	$a0,$zero,$zero
/*  f1684d0:	3c057f17 */ 	lui	$a1,0x7f17
/*  f1684d4:	3c067f17 */ 	lui	$a2,0x7f17
/*  f1684d8:	24a2b854 */ 	addiu	$v0,$a1,-18348
/*  f1684dc:	24c4b96c */ 	addiu	$a0,$a2,-18068
/*  f1684e0:	0044082b */ 	sltu	$at,$v0,$a0
/*  f1684e4:	10200006 */ 	beqz	$at,.L0f168500
/*  f1684e8:	00001825 */ 	or	$v1,$zero,$zero
.L0f1684ec:
/*  f1684ec:	8c4e0000 */ 	lw	$t6,0x0($v0)
/*  f1684f0:	24420004 */ 	addiu	$v0,$v0,0x4
/*  f1684f4:	0044082b */ 	sltu	$at,$v0,$a0
/*  f1684f8:	1420fffc */ 	bnez	$at,.L0f1684ec
/*  f1684fc:	006e1821 */ 	addu	$v1,$v1,$t6
.L0f168500:
/*  f168500:	3c01fa42 */ 	lui	$at,0xfa42
/*  f168504:	342123f2 */ 	ori	$at,$at,0x23f2
/*  f168508:	10610013 */ 	beq	$v1,$at,.L0f168558
/*  f16850c:	3c0fbb8b */ 	lui	$t7,0xbb8b
/*  f168510:	3c19020f */ 	lui	$t9,0x20f
/*  f168514:	3c09cd31 */ 	lui	$t1,0xcd31
/*  f168518:	35ef80bd */ 	ori	$t7,$t7,0x80bd
/*  f16851c:	2418ffff */ 	addiu	$t8,$zero,-1
/*  f168520:	37390100 */ 	ori	$t9,$t9,0x100
/*  f168524:	3529100b */ 	ori	$t1,$t1,0x100b
/*  f168528:	3c04800a */ 	lui	$a0,%hi(var80099e78)
/*  f16852c:	afaf003c */ 	sw	$t7,0x3c($sp)
/*  f168530:	afb80040 */ 	sw	$t8,0x40($sp)
/*  f168534:	afb90044 */ 	sw	$t9,0x44($sp)
/*  f168538:	afa90048 */ 	sw	$t1,0x48($sp)
/*  f16853c:	24849e78 */ 	addiu	$a0,$a0,%lo(var80099e78)
/*  f168540:	00002825 */ 	or	$a1,$zero,$zero
/*  f168544:	27a6003c */ 	addiu	$a2,$sp,0x3c
/*  f168548:	0c001910 */ 	jal	func00006440
/*  f16854c:	24070010 */ 	addiu	$a3,$zero,0x10
/*  f168550:	3c01800a */ 	lui	$at,0x800a
/*  f168554:	a020316e */ 	sb	$zero,0x316e($at)
.L0f168558:
/*  f168558:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f16855c:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f168560:	27bd0068 */ 	addiu	$sp,$sp,0x68
/*  f168564:	03e00008 */ 	jr	$ra
/*  f168568:	00000000 */ 	sll	$zero,$zero,0x0
);

void fadeConfigure(u32 color, s16 num_frames)
{
	g_FadeNumFrames = num_frames;
	g_FadePrevColor = g_FadeColor;

	if (g_FadeNumFrames == 0) {
		g_FadeColor = color;
		fade80084058 = -1.0;
		return;
	}

	fade80084058 = 0.0;
	g_FadeColor = color;
	fade80084064 = 2;
}

GLOBAL_ASM(
glabel func0f1685d8
/*  f1685d8:	3c05800a */ 	lui	$a1,%hi(g_Vars)
/*  f1685dc:	24a59fc0 */ 	addiu	$a1,$a1,%lo(g_Vars)
/*  f1685e0:	8cae04b4 */ 	lw	$t6,0x4b4($a1)
/*  f1685e4:	3c078008 */ 	lui	$a3,0x8008
/*  f1685e8:	8ce74060 */ 	lw	$a3,0x4060($a3)
/*  f1685ec:	27bdffb8 */ 	addiu	$sp,$sp,-72
/*  f1685f0:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f1685f4:	2401004e */ 	addiu	$at,$zero,0x4e
/*  f1685f8:	00808025 */ 	or	$s0,$a0,$zero
/*  f1685fc:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f168600:	afa00040 */ 	sw	$zero,0x40($sp)
/*  f168604:	15c10003 */ 	bne	$t6,$at,.L0f168614
/*  f168608:	00e03025 */ 	or	$a2,$a3,$zero
/*  f16860c:	240f003d */ 	addiu	$t7,$zero,0x3d
/*  f168610:	afaf0040 */ 	sw	$t7,0x40($sp)
.L0f168614:
/*  f168614:	3c038008 */ 	lui	$v1,%hi(fade80084058)
/*  f168618:	24634058 */ 	addiu	$v1,$v1,%lo(fade80084058)
/*  f16861c:	44801000 */ 	mtc1	$zero,$f2
/*  f168620:	c4600000 */ 	lwc1	$f0,0x0($v1)
/*  f168624:	3c048008 */ 	lui	$a0,%hi(fade80084064)
/*  f168628:	24844064 */ 	addiu	$a0,$a0,%lo(fade80084064)
/*  f16862c:	4600103e */ 	c.le.s	$f2,$f0
/*  f168630:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168634:	4502001a */ 	bc1fl	.L0f1686a0
/*  f168638:	4602003c */ 	c.lt.s	$f0,$f2
/*  f16863c:	84820000 */ 	lh	$v0,0x0($a0)
/*  f168640:	18400003 */ 	blez	$v0,.L0f168650
/*  f168644:	2458ffff */ 	addiu	$t8,$v0,-1
/*  f168648:	10000014 */ 	beqz	$zero,.L0f16869c
/*  f16864c:	a4980000 */ 	sh	$t8,0x0($a0)
.L0f168650:
/*  f168650:	3c198008 */ 	lui	$t9,0x8008
/*  f168654:	87394054 */ 	lh	$t9,0x4054($t9)
/*  f168658:	c4a40004 */ 	lwc1	$f4,0x4($a1)
/*  f16865c:	3c013f80 */ 	lui	$at,0x3f80
/*  f168660:	44993000 */ 	mtc1	$t9,$f6
/*  f168664:	44819000 */ 	mtc1	$at,$f18
/*  f168668:	46803220 */ 	cvt.s.w	$f8,$f6
/*  f16866c:	46082283 */ 	div.s	$f10,$f4,$f8
/*  f168670:	460a0400 */ 	add.s	$f16,$f0,$f10
/*  f168674:	e4700000 */ 	swc1	$f16,0x0($v1)
/*  f168678:	c4600000 */ 	lwc1	$f0,0x0($v1)
/*  f16867c:	4600903e */ 	c.le.s	$f18,$f0
/*  f168680:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168684:	45000005 */ 	bc1f	.L0f16869c
/*  f168688:	3c01bf80 */ 	lui	$at,0xbf80
/*  f16868c:	44813000 */ 	mtc1	$at,$f6
/*  f168690:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168694:	e4660000 */ 	swc1	$f6,0x0($v1)
/*  f168698:	c4600000 */ 	lwc1	$f0,0x0($v1)
.L0f16869c:
/*  f16869c:	4602003c */ 	c.lt.s	$f0,$f2
.L0f1686a0:
/*  f1686a0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1686a4:	45000005 */ 	bc1f	.L0f1686bc
/*  f1686a8:	30e800ff */ 	andi	$t0,$a3,0xff
/*  f1686ac:	5500002e */ 	bnezl	$t0,.L0f168768
/*  f1686b0:	30ca00ff */ 	andi	$t2,$a2,0xff
/*  f1686b4:	10000074 */ 	beqz	$zero,.L0f168888
/*  f1686b8:	02001025 */ 	or	$v0,$s0,$zero
.L0f1686bc:
/*  f1686bc:	3c01437f */ 	lui	$at,0x437f
/*  f1686c0:	44812000 */ 	mtc1	$at,$f4
/*  f1686c4:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f1686c8:	3c058008 */ 	lui	$a1,0x8008
/*  f1686cc:	46040202 */ 	mul.s	$f8,$f0,$f4
/*  f1686d0:	8ca5405c */ 	lw	$a1,0x405c($a1)
/*  f1686d4:	3c014f00 */ 	lui	$at,0x4f00
/*  f1686d8:	00e02025 */ 	or	$a0,$a3,$zero
/*  f1686dc:	4449f800 */ 	cfc1	$t1,$31
/*  f1686e0:	44c6f800 */ 	ctc1	$a2,$31
/*  f1686e4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1686e8:	460042a4 */ 	cvt.w.s	$f10,$f8
/*  f1686ec:	4446f800 */ 	cfc1	$a2,$31
/*  f1686f0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1686f4:	30c60078 */ 	andi	$a2,$a2,0x78
/*  f1686f8:	50c00013 */ 	beqzl	$a2,.L0f168748
/*  f1686fc:	44065000 */ 	mfc1	$a2,$f10
/*  f168700:	44815000 */ 	mtc1	$at,$f10
/*  f168704:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f168708:	460a4281 */ 	sub.s	$f10,$f8,$f10
/*  f16870c:	44c6f800 */ 	ctc1	$a2,$31
/*  f168710:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168714:	460052a4 */ 	cvt.w.s	$f10,$f10
/*  f168718:	4446f800 */ 	cfc1	$a2,$31
/*  f16871c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168720:	30c60078 */ 	andi	$a2,$a2,0x78
/*  f168724:	14c00005 */ 	bnez	$a2,.L0f16873c
/*  f168728:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16872c:	44065000 */ 	mfc1	$a2,$f10
/*  f168730:	3c018000 */ 	lui	$at,0x8000
/*  f168734:	10000007 */ 	beqz	$zero,.L0f168754
/*  f168738:	00c13025 */ 	or	$a2,$a2,$at
.L0f16873c:
/*  f16873c:	10000005 */ 	beqz	$zero,.L0f168754
/*  f168740:	2406ffff */ 	addiu	$a2,$zero,-1
/*  f168744:	44065000 */ 	mfc1	$a2,$f10
.L0f168748:
/*  f168748:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16874c:	04c0fffb */ 	bltz	$a2,.L0f16873c
/*  f168750:	00000000 */ 	sll	$zero,$zero,0x0
.L0f168754:
/*  f168754:	44c9f800 */ 	ctc1	$t1,$31
/*  f168758:	0fc01a40 */ 	jal	func0f006900
/*  f16875c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168760:	00403025 */ 	or	$a2,$v0,$zero
/*  f168764:	30ca00ff */ 	andi	$t2,$a2,0xff
.L0f168768:
/*  f168768:	55400004 */ 	bnezl	$t2,.L0f16877c
/*  f16876c:	02001025 */ 	or	$v0,$s0,$zero
/*  f168770:	10000045 */ 	beqz	$zero,.L0f168888
/*  f168774:	02001025 */ 	or	$v0,$s0,$zero
/*  f168778:	02001025 */ 	or	$v0,$s0,$zero
.L0f16877c:
/*  f16877c:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f168780:	3c0be700 */ 	lui	$t3,0xe700
/*  f168784:	02001825 */ 	or	$v1,$s0,$zero
/*  f168788:	ac4b0000 */ 	sw	$t3,0x0($v0)
/*  f16878c:	ac400004 */ 	sw	$zero,0x4($v0)
/*  f168790:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f168794:	3c0cb900 */ 	lui	$t4,0xb900
/*  f168798:	3c0d0050 */ 	lui	$t5,0x50
/*  f16879c:	35ad4340 */ 	ori	$t5,$t5,0x4340
/*  f1687a0:	358c031d */ 	ori	$t4,$t4,0x31d
/*  f1687a4:	02002025 */ 	or	$a0,$s0,$zero
/*  f1687a8:	ac6c0000 */ 	sw	$t4,0x0($v1)
/*  f1687ac:	ac6d0004 */ 	sw	$t5,0x4($v1)
/*  f1687b0:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f1687b4:	3c0efcff */ 	lui	$t6,0xfcff
/*  f1687b8:	3c0ffffd */ 	lui	$t7,0xfffd
/*  f1687bc:	35eff6fb */ 	ori	$t7,$t7,0xf6fb
/*  f1687c0:	35ceffff */ 	ori	$t6,$t6,0xffff
/*  f1687c4:	02002825 */ 	or	$a1,$s0,$zero
/*  f1687c8:	ac8e0000 */ 	sw	$t6,0x0($a0)
/*  f1687cc:	ac8f0004 */ 	sw	$t7,0x4($a0)
/*  f1687d0:	3c18fa00 */ 	lui	$t8,0xfa00
/*  f1687d4:	acb80000 */ 	sw	$t8,0x0($a1)
/*  f1687d8:	aca60004 */ 	sw	$a2,0x4($a1)
/*  f1687dc:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f1687e0:	afb0002c */ 	sw	$s0,0x2c($sp)
/*  f1687e4:	0c002f22 */ 	jal	func0000bc88
/*  f1687e8:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f1687ec:	0c002f40 */ 	jal	func0000bd00
/*  f1687f0:	a7a20026 */ 	sh	$v0,0x26($sp)
/*  f1687f4:	0c002f44 */ 	jal	func0000bd10
/*  f1687f8:	a7a20028 */ 	sh	$v0,0x28($sp)
/*  f1687fc:	0c002f26 */ 	jal	func0000bc98
/*  f168800:	a7a2002a */ 	sh	$v0,0x2a($sp)
/*  f168804:	87b9002a */ 	lh	$t9,0x2a($sp)
/*  f168808:	8fa90040 */ 	lw	$t1,0x40($sp)
/*  f16880c:	87af0028 */ 	lh	$t7,0x28($sp)
/*  f168810:	87b80026 */ 	lh	$t8,0x26($sp)
/*  f168814:	00594021 */ 	addu	$t0,$v0,$t9
/*  f168818:	01095023 */ 	subu	$t2,$t0,$t1
/*  f16881c:	254b0002 */ 	addiu	$t3,$t2,0x2
/*  f168820:	316c03ff */ 	andi	$t4,$t3,0x3ff
/*  f168824:	01f8c821 */ 	addu	$t9,$t7,$t8
/*  f168828:	27280001 */ 	addiu	$t0,$t9,0x1
/*  f16882c:	000c6880 */ 	sll	$t5,$t4,0x2
/*  f168830:	310903ff */ 	andi	$t1,$t0,0x3ff
/*  f168834:	3c01f600 */ 	lui	$at,0xf600
/*  f168838:	8fac002c */ 	lw	$t4,0x2c($sp)
/*  f16883c:	01a17025 */ 	or	$t6,$t5,$at
/*  f168840:	00095380 */ 	sll	$t2,$t1,0xe
/*  f168844:	01ca5825 */ 	or	$t3,$t6,$t2
/*  f168848:	0c002f40 */ 	jal	func0000bd00
/*  f16884c:	ad8b0000 */ 	sw	$t3,0x0($t4)
/*  f168850:	0c002f44 */ 	jal	func0000bd10
/*  f168854:	a7a2002a */ 	sh	$v0,0x2a($sp)
/*  f168858:	8fad0040 */ 	lw	$t5,0x40($sp)
/*  f16885c:	87a8002a */ 	lh	$t0,0x2a($sp)
/*  f168860:	8fab002c */ 	lw	$t3,0x2c($sp)
/*  f168864:	004d7821 */ 	addu	$t7,$v0,$t5
/*  f168868:	31f803ff */ 	andi	$t8,$t7,0x3ff
/*  f16886c:	310903ff */ 	andi	$t1,$t0,0x3ff
/*  f168870:	00097380 */ 	sll	$t6,$t1,0xe
/*  f168874:	0018c880 */ 	sll	$t9,$t8,0x2
/*  f168878:	032e5025 */ 	or	$t2,$t9,$t6
/*  f16887c:	02002025 */ 	or	$a0,$s0,$zero
/*  f168880:	0fc54e0e */ 	jal	func0f153838
/*  f168884:	ad6a0004 */ 	sw	$t2,0x4($t3)
.L0f168888:
/*  f168888:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f16888c:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f168890:	27bd0048 */ 	addiu	$sp,$sp,0x48
/*  f168894:	03e00008 */ 	jr	$ra
/*  f168898:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16889c
/*  f16889c:	3c018008 */ 	lui	$at,0x8008
/*  f1688a0:	c4244058 */ 	lwc1	$f4,0x4058($at)
/*  f1688a4:	44803000 */ 	mtc1	$zero,$f6
/*  f1688a8:	00001025 */ 	or	$v0,$zero,$zero
/*  f1688ac:	4604303e */ 	c.le.s	$f6,$f4
/*  f1688b0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1688b4:	45000002 */ 	bc1f	.L0f1688c0
/*  f1688b8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1688bc:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f1688c0:
/*  f1688c0:	03e00008 */ 	jr	$ra
/*  f1688c4:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f1688c8
/*  f1688c8:	3c018008 */ 	lui	$at,0x8008
/*  f1688cc:	a4204054 */ 	sh	$zero,0x4054($at)
/*  f1688d0:	3c01bf80 */ 	lui	$at,0xbf80
/*  f1688d4:	44812000 */ 	mtc1	$at,$f4
/*  f1688d8:	3c018008 */ 	lui	$at,0x8008
/*  f1688dc:	e4244058 */ 	swc1	$f4,0x4058($at)
/*  f1688e0:	3c018008 */ 	lui	$at,0x8008
/*  f1688e4:	ac20405c */ 	sw	$zero,0x405c($at)
/*  f1688e8:	3c018008 */ 	lui	$at,0x8008
/*  f1688ec:	ac204060 */ 	sw	$zero,0x4060($at)
/*  f1688f0:	3c018008 */ 	lui	$at,0x8008
/*  f1688f4:	03e00008 */ 	jr	$ra
/*  f1688f8:	a4204064 */ 	sh	$zero,0x4064($at)
);

GLOBAL_ASM(
glabel func0f1688fc
/*  f1688fc:	27bdffb0 */ 	addiu	$sp,$sp,-80
/*  f168900:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f168904:	afa40050 */ 	sw	$a0,0x50($sp)
/*  f168908:	afa50054 */ 	sw	$a1,0x54($sp)
/*  f16890c:	8c820000 */ 	lw	$v0,0x0($a0)
/*  f168910:	10400089 */ 	beqz	$v0,.L0f168b38
/*  f168914:	00403025 */ 	or	$a2,$v0,$zero
/*  f168918:	8c4f0004 */ 	lw	$t7,0x4($v0)
/*  f16891c:	51e00087 */ 	beqzl	$t7,.L0f168b3c
/*  f168920:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f168924:	90580000 */ 	lbu	$t8,0x0($v0)
/*  f168928:	2719ffff */ 	addiu	$t9,$t8,-1
/*  f16892c:	2f210008 */ 	sltiu	$at,$t9,0x8
/*  f168930:	10200065 */ 	beqz	$at,.L0f168ac8
/*  f168934:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f168938:	3c017f1b */ 	lui	$at,%hi(var7f1b77e0)
/*  f16893c:	00390821 */ 	addu	$at,$at,$t9
/*  f168940:	8c3977e0 */ 	lw	$t9,%lo(var7f1b77e0)($at)
/*  f168944:	03200008 */ 	jr	$t9
/*  f168948:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16894c:	0fc4a25f */ 	jal	propGetPlayerNum
/*  f168950:	00c02025 */ 	or	$a0,$a2,$zero
/*  f168954:	3c0a800a */ 	lui	$t2,0x800a
/*  f168958:	8d4aa24c */ 	lw	$t2,-0x5db4($t2)
/*  f16895c:	8fa80050 */ 	lw	$t0,0x50($sp)
/*  f168960:	544a0004 */ 	bnel	$v0,$t2,.L0f168974
/*  f168964:	8d020000 */ 	lw	$v0,0x0($t0)
/*  f168968:	10000074 */ 	beqz	$zero,.L0f168b3c
/*  f16896c:	00001025 */ 	or	$v0,$zero,$zero
/*  f168970:	8d020000 */ 	lw	$v0,0x0($t0)
.L0f168974:
/*  f168974:	8c440004 */ 	lw	$a0,0x4($v0)
/*  f168978:	0fc0e6a5 */ 	jal	chrIsDead
/*  f16897c:	afa40038 */ 	sw	$a0,0x38($sp)
/*  f168980:	8fa80050 */ 	lw	$t0,0x50($sp)
/*  f168984:	1040001a */ 	beqz	$v0,.L0f1689f0
/*  f168988:	8fa90038 */ 	lw	$t1,0x38($sp)
/*  f16898c:	8fab0054 */ 	lw	$t3,0x54($sp)
/*  f168990:	3c0c800a */ 	lui	$t4,0x800a
/*  f168994:	00001025 */ 	or	$v0,$zero,$zero
/*  f168998:	05600013 */ 	bltz	$t3,.L0f1689e8
/*  f16899c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1689a0:	8d8ca244 */ 	lw	$t4,-0x5dbc($t4)
/*  f1689a4:	000b1840 */ 	sll	$v1,$t3,0x1
/*  f1689a8:	240d0081 */ 	addiu	$t5,$zero,0x81
/*  f1689ac:	01832021 */ 	addu	$a0,$t4,$v1
/*  f1689b0:	94821b90 */ 	lhu	$v0,0x1b90($a0)
/*  f1689b4:	3c0e800a */ 	lui	$t6,0x800a
/*  f1689b8:	28410081 */ 	slti	$at,$v0,0x81
/*  f1689bc:	50200006 */ 	beqzl	$at,.L0f1689d8
/*  f1689c0:	284100af */ 	slti	$at,$v0,0xaf
/*  f1689c4:	a48d1b90 */ 	sh	$t5,0x1b90($a0)
/*  f1689c8:	8dcea244 */ 	lw	$t6,-0x5dbc($t6)
/*  f1689cc:	01c37821 */ 	addu	$t7,$t6,$v1
/*  f1689d0:	95e21b90 */ 	lhu	$v0,0x1b90($t7)
/*  f1689d4:	284100af */ 	slti	$at,$v0,0xaf
.L0f1689d8:
/*  f1689d8:	14200005 */ 	bnez	$at,.L0f1689f0
/*  f1689dc:	00001025 */ 	or	$v0,$zero,$zero
/*  f1689e0:	10000056 */ 	beqz	$zero,.L0f168b3c
/*  f1689e4:	ad000000 */ 	sw	$zero,0x0($t0)
.L0f1689e8:
/*  f1689e8:	10000054 */ 	beqz	$zero,.L0f168b3c
/*  f1689ec:	ad000000 */ 	sw	$zero,0x0($t0)
.L0f1689f0:
/*  f1689f0:	8d180000 */ 	lw	$t8,0x0($t0)
/*  f1689f4:	93190001 */ 	lbu	$t9,0x1($t8)
/*  f1689f8:	332a0002 */ 	andi	$t2,$t9,0x2
/*  f1689fc:	11400017 */ 	beqz	$t2,.L0f168a5c
/*  f168a00:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168a04:	8d2b0018 */ 	lw	$t3,0x18($t1)
/*  f168a08:	3c01bf80 */ 	lui	$at,0xbf80
/*  f168a0c:	27a50040 */ 	addiu	$a1,$sp,0x40
/*  f168a10:	316c0800 */ 	andi	$t4,$t3,0x800
/*  f168a14:	15800011 */ 	bnez	$t4,.L0f168a5c
/*  f168a18:	27a60048 */ 	addiu	$a2,$sp,0x48
/*  f168a1c:	44810000 */ 	mtc1	$at,$f0
/*  f168a20:	3c01c000 */ 	lui	$at,0xc000
/*  f168a24:	8d240020 */ 	lw	$a0,0x20($t1)
/*  f168a28:	44811000 */ 	mtc1	$at,$f2
/*  f168a2c:	27ad004c */ 	addiu	$t5,$sp,0x4c
/*  f168a30:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f168a34:	27a70044 */ 	addiu	$a3,$sp,0x44
/*  f168a38:	e7a00048 */ 	swc1	$f0,0x48($sp)
/*  f168a3c:	e7a0004c */ 	swc1	$f0,0x4c($sp)
/*  f168a40:	e7a20040 */ 	swc1	$f2,0x40($sp)
/*  f168a44:	0fc1a006 */ 	jal	func0f068018
/*  f168a48:	e7a20044 */ 	swc1	$f2,0x44($sp)
/*  f168a4c:	14400020 */ 	bnez	$v0,.L0f168ad0
/*  f168a50:	8fa80050 */ 	lw	$t0,0x50($sp)
/*  f168a54:	10000039 */ 	beqz	$zero,.L0f168b3c
/*  f168a58:	00001025 */ 	or	$v0,$zero,$zero
.L0f168a5c:
/*  f168a5c:	10000037 */ 	beqz	$zero,.L0f168b3c
/*  f168a60:	00001025 */ 	or	$v0,$zero,$zero
/*  f168a64:	904e0001 */ 	lbu	$t6,0x1($v0)
/*  f168a68:	3c01bf80 */ 	lui	$at,0xbf80
/*  f168a6c:	27a50040 */ 	addiu	$a1,$sp,0x40
/*  f168a70:	31cf0002 */ 	andi	$t7,$t6,0x2
/*  f168a74:	11e00012 */ 	beqz	$t7,.L0f168ac0
/*  f168a78:	27a60048 */ 	addiu	$a2,$sp,0x48
/*  f168a7c:	8c430004 */ 	lw	$v1,0x4($v0)
/*  f168a80:	44810000 */ 	mtc1	$at,$f0
/*  f168a84:	3c01c000 */ 	lui	$at,0xc000
/*  f168a88:	8c640018 */ 	lw	$a0,0x18($v1)
/*  f168a8c:	44811000 */ 	mtc1	$at,$f2
/*  f168a90:	27b8004c */ 	addiu	$t8,$sp,0x4c
/*  f168a94:	afb80010 */ 	sw	$t8,0x10($sp)
/*  f168a98:	27a70044 */ 	addiu	$a3,$sp,0x44
/*  f168a9c:	e7a00048 */ 	swc1	$f0,0x48($sp)
/*  f168aa0:	e7a0004c */ 	swc1	$f0,0x4c($sp)
/*  f168aa4:	e7a20040 */ 	swc1	$f2,0x40($sp)
/*  f168aa8:	0fc1a006 */ 	jal	func0f068018
/*  f168aac:	e7a20044 */ 	swc1	$f2,0x44($sp)
/*  f168ab0:	14400007 */ 	bnez	$v0,.L0f168ad0
/*  f168ab4:	8fa80050 */ 	lw	$t0,0x50($sp)
/*  f168ab8:	10000020 */ 	beqz	$zero,.L0f168b3c
/*  f168abc:	00001025 */ 	or	$v0,$zero,$zero
.L0f168ac0:
/*  f168ac0:	1000001e */ 	beqz	$zero,.L0f168b3c
/*  f168ac4:	00001025 */ 	or	$v0,$zero,$zero
.L0f168ac8:
/*  f168ac8:	1000001c */ 	beqz	$zero,.L0f168b3c
/*  f168acc:	00001025 */ 	or	$v0,$zero,$zero
.L0f168ad0:
/*  f168ad0:	3c014000 */ 	lui	$at,0x4000
/*  f168ad4:	44810000 */ 	mtc1	$at,$f0
/*  f168ad8:	c7a40048 */ 	lwc1	$f4,0x48($sp)
/*  f168adc:	46002181 */ 	sub.s	$f6,$f4,$f0
/*  f168ae0:	4600320d */ 	trunc.w.s	$f8,$f6
/*  f168ae4:	440a4000 */ 	mfc1	$t2,$f8
/*  f168ae8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168aec:	a50a0004 */ 	sh	$t2,0x4($t0)
/*  f168af0:	c7aa0040 */ 	lwc1	$f10,0x40($sp)
/*  f168af4:	46005400 */ 	add.s	$f16,$f10,$f0
/*  f168af8:	4600848d */ 	trunc.w.s	$f18,$f16
/*  f168afc:	440c9000 */ 	mfc1	$t4,$f18
/*  f168b00:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168b04:	a50c0008 */ 	sh	$t4,0x8($t0)
/*  f168b08:	c7a4004c */ 	lwc1	$f4,0x4c($sp)
/*  f168b0c:	46002181 */ 	sub.s	$f6,$f4,$f0
/*  f168b10:	4600320d */ 	trunc.w.s	$f8,$f6
/*  f168b14:	440e4000 */ 	mfc1	$t6,$f8
/*  f168b18:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168b1c:	a50e0006 */ 	sh	$t6,0x6($t0)
/*  f168b20:	c7aa0044 */ 	lwc1	$f10,0x44($sp)
/*  f168b24:	46005400 */ 	add.s	$f16,$f10,$f0
/*  f168b28:	4600848d */ 	trunc.w.s	$f18,$f16
/*  f168b2c:	44189000 */ 	mfc1	$t8,$f18
/*  f168b30:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168b34:	a518000a */ 	sh	$t8,0xa($t0)
.L0f168b38:
/*  f168b38:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f168b3c:
/*  f168b3c:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f168b40:	27bd0050 */ 	addiu	$sp,$sp,0x50
/*  f168b44:	03e00008 */ 	jr	$ra
/*  f168b48:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f168b4c
/*  f168b4c:	27bdff98 */ 	addiu	$sp,$sp,-104
/*  f168b50:	afb00020 */ 	sw	$s0,0x20($sp)
/*  f168b54:	00808025 */ 	or	$s0,$a0,$zero
/*  f168b58:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f168b5c:	afa5006c */ 	sw	$a1,0x6c($sp)
/*  f168b60:	afa60070 */ 	sw	$a2,0x70($sp)
/*  f168b64:	afa70074 */ 	sw	$a3,0x74($sp)
/*  f168b68:	14a00009 */ 	bnez	$a1,.L0f168b90
/*  f168b6c:	24030001 */ 	addiu	$v1,$zero,0x1
/*  f168b70:	c4840014 */ 	lwc1	$f4,0x14($a0)
/*  f168b74:	44803000 */ 	mtc1	$zero,$f6
/*  f168b78:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168b7c:	4606203c */ 	c.lt.s	$f4,$f6
/*  f168b80:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168b84:	45020003 */ 	bc1fl	.L0f168b94
/*  f168b88:	8e040004 */ 	lw	$a0,0x4($s0)
/*  f168b8c:	00001825 */ 	or	$v1,$zero,$zero
.L0f168b90:
/*  f168b90:	8e040004 */ 	lw	$a0,0x4($s0)
.L0f168b94:
/*  f168b94:	508000cc */ 	beqzl	$a0,.L0f168ec8
/*  f168b98:	8e04001c */ 	lw	$a0,0x1c($s0)
/*  f168b9c:	920f0001 */ 	lbu	$t7,0x1($s0)
/*  f168ba0:	31f80002 */ 	andi	$t8,$t7,0x2
/*  f168ba4:	530000c8 */ 	beqzl	$t8,.L0f168ec8
/*  f168ba8:	8e04001c */ 	lw	$a0,0x1c($s0)
/*  f168bac:	92020000 */ 	lbu	$v0,0x0($s0)
/*  f168bb0:	24010001 */ 	addiu	$at,$zero,0x1
/*  f168bb4:	24090004 */ 	addiu	$t1,$zero,0x4
/*  f168bb8:	10410003 */ 	beq	$v0,$at,.L0f168bc8
/*  f168bbc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168bc0:	552200c1 */ 	bnel	$t1,$v0,.L0f168ec8
/*  f168bc4:	8e04001c */ 	lw	$a0,0x1c($s0)
.L0f168bc8:
/*  f168bc8:	106000be */ 	beqz	$v1,.L0f168ec4
/*  f168bcc:	24090004 */ 	addiu	$t1,$zero,0x4
/*  f168bd0:	8c990018 */ 	lw	$t9,0x18($a0)
/*  f168bd4:	00004025 */ 	or	$t0,$zero,$zero
/*  f168bd8:	00801025 */ 	or	$v0,$a0,$zero
/*  f168bdc:	1080000b */ 	beqz	$a0,.L0f168c0c
/*  f168be0:	afb90044 */ 	sw	$t9,0x44($sp)
/*  f168be4:	904a0003 */ 	lbu	$t2,0x3($v0)
/*  f168be8:	2401000d */ 	addiu	$at,$zero,0xd
/*  f168bec:	15410007 */ 	bne	$t2,$at,.L0f168c0c
/*  f168bf0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168bf4:	8c4b000c */ 	lw	$t3,0xc($v0)
/*  f168bf8:	3c01a000 */ 	lui	$at,0xa000
/*  f168bfc:	01616024 */ 	and	$t4,$t3,$at
/*  f168c00:	15800002 */ 	bnez	$t4,.L0f168c0c
/*  f168c04:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168c08:	24080001 */ 	addiu	$t0,$zero,0x1
.L0f168c0c:
/*  f168c0c:	10400006 */ 	beqz	$v0,.L0f168c28
/*  f168c10:	00801825 */ 	or	$v1,$a0,$zero
/*  f168c14:	844d0004 */ 	lh	$t5,0x4($v0)
/*  f168c18:	240100c8 */ 	addiu	$at,$zero,0xc8
/*  f168c1c:	15a10002 */ 	bne	$t5,$at,.L0f168c28
/*  f168c20:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168c24:	24080001 */ 	addiu	$t0,$zero,0x1
.L0f168c28:
/*  f168c28:	10800016 */ 	beqz	$a0,.L0f168c84
/*  f168c2c:	84450004 */ 	lh	$a1,0x4($v0)
/*  f168c30:	908e0003 */ 	lbu	$t6,0x3($a0)
/*  f168c34:	24010008 */ 	addiu	$at,$zero,0x8
/*  f168c38:	55c10013 */ 	bnel	$t6,$at,.L0f168c88
/*  f168c3c:	2401014c */ 	addiu	$at,$zero,0x14c
/*  f168c40:	908f005c */ 	lbu	$t7,0x5c($a0)
/*  f168c44:	25f8fff1 */ 	addiu	$t8,$t7,-15
/*  f168c48:	2f010014 */ 	sltiu	$at,$t8,0x14
/*  f168c4c:	1020000d */ 	beqz	$at,.L0f168c84
/*  f168c50:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f168c54:	3c017f1b */ 	lui	$at,%hi(var7f1b7800)
/*  f168c58:	00380821 */ 	addu	$at,$at,$t8
/*  f168c5c:	8c387800 */ 	lw	$t8,%lo(var7f1b7800)($at)
/*  f168c60:	03000008 */ 	jr	$t8
/*  f168c64:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168c68:	10000006 */ 	beqz	$zero,.L0f168c84
/*  f168c6c:	24080001 */ 	addiu	$t0,$zero,0x1
/*  f168c70:	9079005f */ 	lbu	$t9,0x5f($v1)
/*  f168c74:	24010001 */ 	addiu	$at,$zero,0x1
/*  f168c78:	57210003 */ 	bnel	$t9,$at,.L0f168c88
/*  f168c7c:	2401014c */ 	addiu	$at,$zero,0x14c
/*  f168c80:	24080001 */ 	addiu	$t0,$zero,0x1
.L0f168c84:
/*  f168c84:	2401014c */ 	addiu	$at,$zero,0x14c
.L0f168c88:
/*  f168c88:	14a10007 */ 	bne	$a1,$at,.L0f168ca8
/*  f168c8c:	02002025 */ 	or	$a0,$s0,$zero
/*  f168c90:	0fc67c88 */ 	jal	func0f19f220
/*  f168c94:	afa8005c */ 	sw	$t0,0x5c($sp)
/*  f168c98:	8fa8005c */ 	lw	$t0,0x5c($sp)
/*  f168c9c:	10400002 */ 	beqz	$v0,.L0f168ca8
/*  f168ca0:	24090004 */ 	addiu	$t1,$zero,0x4
/*  f168ca4:	24080001 */ 	addiu	$t0,$zero,0x1
.L0f168ca8:
/*  f168ca8:	1100000b */ 	beqz	$t0,.L0f168cd8
/*  f168cac:	00001825 */ 	or	$v1,$zero,$zero
/*  f168cb0:	3c04800a */ 	lui	$a0,%hi(var800a000c)
/*  f168cb4:	8c84a244 */ 	lw	$a0,-0x5dbc($a0)
/*  f168cb8:	24020030 */ 	addiu	$v0,$zero,0x30
.L0f168cbc:
/*  f168cbc:	8c8a1630 */ 	lw	$t2,0x1630($a0)
/*  f168cc0:	2463000c */ 	addiu	$v1,$v1,0xc
/*  f168cc4:	160a0002 */ 	bne	$s0,$t2,.L0f168cd0
/*  f168cc8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168ccc:	00004025 */ 	or	$t0,$zero,$zero
.L0f168cd0:
/*  f168cd0:	1462fffa */ 	bne	$v1,$v0,.L0f168cbc
/*  f168cd4:	2484000c */ 	addiu	$a0,$a0,%lo(var800a000c)
.L0f168cd8:
/*  f168cd8:	11000014 */ 	beqz	$t0,.L0f168d2c
/*  f168cdc:	3c01bf80 */ 	lui	$at,0xbf80
/*  f168ce0:	44810000 */ 	mtc1	$at,$f0
/*  f168ce4:	3c01c000 */ 	lui	$at,0xc000
/*  f168ce8:	44811000 */ 	mtc1	$at,$f2
/*  f168cec:	27ab0058 */ 	addiu	$t3,$sp,0x58
/*  f168cf0:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f168cf4:	8fa40044 */ 	lw	$a0,0x44($sp)
/*  f168cf8:	27a5004c */ 	addiu	$a1,$sp,0x4c
/*  f168cfc:	27a60054 */ 	addiu	$a2,$sp,0x54
/*  f168d00:	27a70050 */ 	addiu	$a3,$sp,0x50
/*  f168d04:	afa8005c */ 	sw	$t0,0x5c($sp)
/*  f168d08:	e7a00054 */ 	swc1	$f0,0x54($sp)
/*  f168d0c:	e7a00058 */ 	swc1	$f0,0x58($sp)
/*  f168d10:	e7a2004c */ 	swc1	$f2,0x4c($sp)
/*  f168d14:	0fc1a006 */ 	jal	func0f068018
/*  f168d18:	e7a20050 */ 	swc1	$f2,0x50($sp)
/*  f168d1c:	8fa8005c */ 	lw	$t0,0x5c($sp)
/*  f168d20:	14400002 */ 	bnez	$v0,.L0f168d2c
/*  f168d24:	24090004 */ 	addiu	$t1,$zero,0x4
/*  f168d28:	00004025 */ 	or	$t0,$zero,$zero
.L0f168d2c:
/*  f168d2c:	11000065 */ 	beqz	$t0,.L0f168ec4
/*  f168d30:	8fac0070 */ 	lw	$t4,0x70($sp)
/*  f168d34:	c6080010 */ 	lwc1	$f8,0x10($s0)
/*  f168d38:	c58a0008 */ 	lwc1	$f10,0x8($t4)
/*  f168d3c:	c6120008 */ 	lwc1	$f18,0x8($s0)
/*  f168d40:	c5840000 */ 	lwc1	$f4,0x0($t4)
/*  f168d44:	460a4001 */ 	sub.s	$f0,$f8,$f10
/*  f168d48:	c5880004 */ 	lwc1	$f8,0x4($t4)
/*  f168d4c:	c606000c */ 	lwc1	$f6,0xc($s0)
/*  f168d50:	46049301 */ 	sub.s	$f12,$f18,$f4
/*  f168d54:	44801000 */ 	mtc1	$zero,$f2
/*  f168d58:	2404ffff */ 	addiu	$a0,$zero,-1
/*  f168d5c:	46083381 */ 	sub.s	$f14,$f6,$f8
/*  f168d60:	460c6282 */ 	mul.s	$f10,$f12,$f12
/*  f168d64:	00001025 */ 	or	$v0,$zero,$zero
/*  f168d68:	8fa30074 */ 	lw	$v1,0x74($sp)
/*  f168d6c:	460e7482 */ 	mul.s	$f18,$f14,$f14
/*  f168d70:	46125100 */ 	add.s	$f4,$f10,$f18
/*  f168d74:	46000182 */ 	mul.s	$f6,$f0,$f0
/*  f168d78:	46043400 */ 	add.s	$f16,$f6,$f4
.L0f168d7c:
/*  f168d7c:	8c6d0000 */ 	lw	$t5,0x0($v1)
/*  f168d80:	55a00003 */ 	bnezl	$t5,.L0f168d90
/*  f168d84:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f168d88:	00402025 */ 	or	$a0,$v0,$zero
/*  f168d8c:	24420001 */ 	addiu	$v0,$v0,0x1
.L0f168d90:
/*  f168d90:	28410004 */ 	slti	$at,$v0,0x4
/*  f168d94:	1420fff9 */ 	bnez	$at,.L0f168d7c
/*  f168d98:	24630004 */ 	addiu	$v1,$v1,0x4
/*  f168d9c:	2401ffff */ 	addiu	$at,$zero,-1
/*  f168da0:	14810011 */ 	bne	$a0,$at,.L0f168de8
/*  f168da4:	00001025 */ 	or	$v0,$zero,$zero
/*  f168da8:	8fa30078 */ 	lw	$v1,0x78($sp)
.L0f168dac:
/*  f168dac:	c4600000 */ 	lwc1	$f0,0x0($v1)
/*  f168db0:	4600103c */ 	c.lt.s	$f2,$f0
/*  f168db4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168db8:	45020004 */ 	bc1fl	.L0f168dcc
/*  f168dbc:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f168dc0:	46000086 */ 	mov.s	$f2,$f0
/*  f168dc4:	00402025 */ 	or	$a0,$v0,$zero
/*  f168dc8:	24420001 */ 	addiu	$v0,$v0,0x1
.L0f168dcc:
/*  f168dcc:	1449fff7 */ 	bne	$v0,$t1,.L0f168dac
/*  f168dd0:	24630004 */ 	addiu	$v1,$v1,0x4
/*  f168dd4:	4610103e */ 	c.le.s	$f2,$f16
/*  f168dd8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168ddc:	45000002 */ 	bc1f	.L0f168de8
/*  f168de0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168de4:	2404ffff */ 	addiu	$a0,$zero,-1
.L0f168de8:
/*  f168de8:	04800036 */ 	bltz	$a0,.L0f168ec4
/*  f168dec:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f168df0:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f168df4:	8c6e0284 */ 	lw	$t6,0x284($v1)
/*  f168df8:	00041080 */ 	sll	$v0,$a0,0x2
/*  f168dfc:	00441023 */ 	subu	$v0,$v0,$a0
/*  f168e00:	00021080 */ 	sll	$v0,$v0,0x2
/*  f168e04:	01c27821 */ 	addu	$t7,$t6,$v0
/*  f168e08:	3c014000 */ 	lui	$at,0x4000
/*  f168e0c:	adf01630 */ 	sw	$s0,0x1630($t7)
/*  f168e10:	44810000 */ 	mtc1	$at,$f0
/*  f168e14:	c7a80054 */ 	lwc1	$f8,0x54($sp)
/*  f168e18:	8c6a0284 */ 	lw	$t2,0x284($v1)
/*  f168e1c:	00042880 */ 	sll	$a1,$a0,0x2
/*  f168e20:	46004281 */ 	sub.s	$f10,$f8,$f0
/*  f168e24:	01425821 */ 	addu	$t3,$t2,$v0
/*  f168e28:	4600548d */ 	trunc.w.s	$f18,$f10
/*  f168e2c:	44199000 */ 	mfc1	$t9,$f18
/*  f168e30:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168e34:	a5791634 */ 	sh	$t9,0x1634($t3)
/*  f168e38:	c7a6004c */ 	lwc1	$f6,0x4c($sp)
/*  f168e3c:	8c6e0284 */ 	lw	$t6,0x284($v1)
/*  f168e40:	46003100 */ 	add.s	$f4,$f6,$f0
/*  f168e44:	01c27821 */ 	addu	$t7,$t6,$v0
/*  f168e48:	4600220d */ 	trunc.w.s	$f8,$f4
/*  f168e4c:	440d4000 */ 	mfc1	$t5,$f8
/*  f168e50:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168e54:	a5ed1638 */ 	sh	$t5,0x1638($t7)
/*  f168e58:	c7aa0058 */ 	lwc1	$f10,0x58($sp)
/*  f168e5c:	8c790284 */ 	lw	$t9,0x284($v1)
/*  f168e60:	46005481 */ 	sub.s	$f18,$f10,$f0
/*  f168e64:	03225821 */ 	addu	$t3,$t9,$v0
/*  f168e68:	0004c840 */ 	sll	$t9,$a0,0x1
/*  f168e6c:	4600918d */ 	trunc.w.s	$f6,$f18
/*  f168e70:	440a3000 */ 	mfc1	$t2,$f6
/*  f168e74:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168e78:	a56a1636 */ 	sh	$t2,0x1636($t3)
/*  f168e7c:	c7a40050 */ 	lwc1	$f4,0x50($sp)
/*  f168e80:	8c6d0284 */ 	lw	$t5,0x284($v1)
/*  f168e84:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f168e88:	46002200 */ 	add.s	$f8,$f4,$f0
/*  f168e8c:	01a27821 */ 	addu	$t7,$t5,$v0
/*  f168e90:	4600428d */ 	trunc.w.s	$f10,$f8
/*  f168e94:	440e5000 */ 	mfc1	$t6,$f10
/*  f168e98:	00000000 */ 	sll	$zero,$zero,0x0
/*  f168e9c:	a5ee163a */ 	sh	$t6,0x163a($t7)
/*  f168ea0:	8c780284 */ 	lw	$t8,0x284($v1)
/*  f168ea4:	03195021 */ 	addu	$t2,$t8,$t9
/*  f168ea8:	a5401b90 */ 	sh	$zero,0x1b90($t2)
/*  f168eac:	8fac0074 */ 	lw	$t4,0x74($sp)
/*  f168eb0:	01856821 */ 	addu	$t5,$t4,$a1
/*  f168eb4:	adab0000 */ 	sw	$t3,0x0($t5)
/*  f168eb8:	8fae0078 */ 	lw	$t6,0x78($sp)
/*  f168ebc:	01c57821 */ 	addu	$t7,$t6,$a1
/*  f168ec0:	e5f00000 */ 	swc1	$f16,0x0($t7)
.L0f168ec4:
/*  f168ec4:	8e04001c */ 	lw	$a0,0x1c($s0)
.L0f168ec8:
/*  f168ec8:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f168ecc:	8fa60070 */ 	lw	$a2,0x70($sp)
/*  f168ed0:	10800004 */ 	beqz	$a0,.L0f168ee4
/*  f168ed4:	8fb80078 */ 	lw	$t8,0x78($sp)
/*  f168ed8:	8fa70074 */ 	lw	$a3,0x74($sp)
/*  f168edc:	0fc5a2d3 */ 	jal	func0f168b4c
/*  f168ee0:	afb80010 */ 	sw	$t8,0x10($sp)
.L0f168ee4:
/*  f168ee4:	8fb9006c */ 	lw	$t9,0x6c($sp)
/*  f168ee8:	5320000a */ 	beqzl	$t9,.L0f168f14
/*  f168eec:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f168ef0:	8e040020 */ 	lw	$a0,0x20($s0)
/*  f168ef4:	03202825 */ 	or	$a1,$t9,$zero
/*  f168ef8:	8fa60070 */ 	lw	$a2,0x70($sp)
/*  f168efc:	10800004 */ 	beqz	$a0,.L0f168f10
/*  f168f00:	8faa0078 */ 	lw	$t2,0x78($sp)
/*  f168f04:	8fa70074 */ 	lw	$a3,0x74($sp)
/*  f168f08:	0fc5a2d3 */ 	jal	func0f168b4c
/*  f168f0c:	afaa0010 */ 	sw	$t2,0x10($sp)
.L0f168f10:
/*  f168f10:	8fbf0024 */ 	lw	$ra,0x24($sp)
.L0f168f14:
/*  f168f14:	8fb00020 */ 	lw	$s0,0x20($sp)
/*  f168f18:	27bd0068 */ 	addiu	$sp,$sp,0x68
/*  f168f1c:	03e00008 */ 	jr	$ra
/*  f168f20:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f168f24
/*  f168f24:	27bdff78 */ 	addiu	$sp,$sp,-136
/*  f168f28:	f7b80030 */ 	sdc1	$f24,0x30($sp)
/*  f168f2c:	3c01c000 */ 	lui	$at,0xc000
/*  f168f30:	4481c000 */ 	mtc1	$at,$f24
/*  f168f34:	f7b60028 */ 	sdc1	$f22,0x28($sp)
/*  f168f38:	3c01bf80 */ 	lui	$at,0xbf80
/*  f168f3c:	4481b000 */ 	mtc1	$at,$f22
/*  f168f40:	afb30044 */ 	sw	$s3,0x44($sp)
/*  f168f44:	f7b40020 */ 	sdc1	$f20,0x20($sp)
/*  f168f48:	3c014000 */ 	lui	$at,0x4000
/*  f168f4c:	afbe0058 */ 	sw	$s8,0x58($sp)
/*  f168f50:	afb70054 */ 	sw	$s7,0x54($sp)
/*  f168f54:	afb60050 */ 	sw	$s6,0x50($sp)
/*  f168f58:	afb5004c */ 	sw	$s5,0x4c($sp)
/*  f168f5c:	afb40048 */ 	sw	$s4,0x48($sp)
/*  f168f60:	afb20040 */ 	sw	$s2,0x40($sp)
/*  f168f64:	afb00038 */ 	sw	$s0,0x38($sp)
/*  f168f68:	3c13800a */ 	lui	$s3,%hi(g_Vars)
/*  f168f6c:	4481a000 */ 	mtc1	$at,$f20
/*  f168f70:	00809025 */ 	or	$s2,$a0,$zero
/*  f168f74:	00c0a825 */ 	or	$s5,$a2,$zero
/*  f168f78:	afbf005c */ 	sw	$ra,0x5c($sp)
/*  f168f7c:	afb1003c */ 	sw	$s1,0x3c($sp)
/*  f168f80:	afa5008c */ 	sw	$a1,0x8c($sp)
/*  f168f84:	afa70094 */ 	sw	$a3,0x94($sp)
/*  f168f88:	26739fc0 */ 	addiu	$s3,$s3,%lo(g_Vars)
/*  f168f8c:	00008025 */ 	or	$s0,$zero,$zero
/*  f168f90:	0000a025 */ 	or	$s4,$zero,$zero
/*  f168f94:	24160001 */ 	addiu	$s6,$zero,0x1
/*  f168f98:	24170004 */ 	addiu	$s7,$zero,0x4
/*  f168f9c:	8fbe0098 */ 	lw	$s8,0x98($sp)
.L0f168fa0:
/*  f168fa0:	8e6e0284 */ 	lw	$t6,0x284($s3)
/*  f168fa4:	01d07821 */ 	addu	$t7,$t6,$s0
/*  f168fa8:	8de31630 */ 	lw	$v1,0x1630($t7)
/*  f168fac:	56430062 */ 	bnel	$s2,$v1,.L0f169138
/*  f168fb0:	26940001 */ 	addiu	$s4,$s4,0x1
/*  f168fb4:	92580001 */ 	lbu	$t8,0x1($s2)
/*  f168fb8:	33190002 */ 	andi	$t9,$t8,0x2
/*  f168fbc:	5320005e */ 	beqzl	$t9,.L0f169138
/*  f168fc0:	26940001 */ 	addiu	$s4,$s4,0x1
/*  f168fc4:	92420000 */ 	lbu	$v0,0x0($s2)
/*  f168fc8:	00008825 */ 	or	$s1,$zero,$zero
/*  f168fcc:	52c20006 */ 	beql	$s6,$v0,.L0f168fe8
/*  f168fd0:	8c680004 */ 	lw	$t0,0x4($v1)
/*  f168fd4:	12e20003 */ 	beq	$s7,$v0,.L0f168fe4
/*  f168fd8:	24010002 */ 	addiu	$at,$zero,0x2
/*  f168fdc:	54410005 */ 	bnel	$v0,$at,.L0f168ff4
/*  f168fe0:	24010003 */ 	addiu	$at,$zero,0x3
.L0f168fe4:
/*  f168fe4:	8c680004 */ 	lw	$t0,0x4($v1)
.L0f168fe8:
/*  f168fe8:	10000010 */ 	beqz	$zero,.L0f16902c
/*  f168fec:	8d110018 */ 	lw	$s1,0x18($t0)
/*  f168ff0:	24010003 */ 	addiu	$at,$zero,0x3
.L0f168ff4:
/*  f168ff4:	1041000b */ 	beq	$v0,$at,.L0f169024
/*  f168ff8:	24010006 */ 	addiu	$at,$zero,0x6
/*  f168ffc:	1441000b */ 	bne	$v0,$at,.L0f16902c
/*  f169000:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169004:	0fc4a25f */ 	jal	propGetPlayerNum
/*  f169008:	02402025 */ 	or	$a0,$s2,$zero
/*  f16900c:	8e69028c */ 	lw	$t1,0x28c($s3)
/*  f169010:	10490006 */ 	beq	$v0,$t1,.L0f16902c
/*  f169014:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169018:	8e6a0284 */ 	lw	$t2,0x284($s3)
/*  f16901c:	01505821 */ 	addu	$t3,$t2,$s0
/*  f169020:	8d631630 */ 	lw	$v1,0x1630($t3)
.L0f169024:
/*  f169024:	8c6c0004 */ 	lw	$t4,0x4($v1)
/*  f169028:	8d910020 */ 	lw	$s1,0x20($t4)
.L0f16902c:
/*  f16902c:	12200041 */ 	beqz	$s1,.L0f169134
/*  f169030:	02202025 */ 	or	$a0,$s1,$zero
/*  f169034:	27ad0080 */ 	addiu	$t5,$sp,0x80
/*  f169038:	e7b6007c */ 	swc1	$f22,0x7c($sp)
/*  f16903c:	e7b60080 */ 	swc1	$f22,0x80($sp)
/*  f169040:	e7b80074 */ 	swc1	$f24,0x74($sp)
/*  f169044:	e7b80078 */ 	swc1	$f24,0x78($sp)
/*  f169048:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f16904c:	27a50074 */ 	addiu	$a1,$sp,0x74
/*  f169050:	27a6007c */ 	addiu	$a2,$sp,0x7c
/*  f169054:	0fc1a006 */ 	jal	func0f068018
/*  f169058:	27a70078 */ 	addiu	$a3,$sp,0x78
/*  f16905c:	10400035 */ 	beqz	$v0,.L0f169134
/*  f169060:	8fae0094 */ 	lw	$t6,0x94($sp)
/*  f169064:	00141080 */ 	sll	$v0,$s4,0x2
/*  f169068:	01c27821 */ 	addu	$t7,$t6,$v0
/*  f16906c:	adf60000 */ 	sw	$s6,0x0($t7)
/*  f169070:	c7a4007c */ 	lwc1	$f4,0x7c($sp)
/*  f169074:	8e680284 */ 	lw	$t0,0x284($s3)
/*  f169078:	46142181 */ 	sub.s	$f6,$f4,$f20
/*  f16907c:	01104821 */ 	addu	$t1,$t0,$s0
/*  f169080:	4600320d */ 	trunc.w.s	$f8,$f6
/*  f169084:	44194000 */ 	mfc1	$t9,$f8
/*  f169088:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16908c:	a5391634 */ 	sh	$t9,0x1634($t1)
/*  f169090:	c7aa0074 */ 	lwc1	$f10,0x74($sp)
/*  f169094:	8e6c0284 */ 	lw	$t4,0x284($s3)
/*  f169098:	46145400 */ 	add.s	$f16,$f10,$f20
/*  f16909c:	01906821 */ 	addu	$t5,$t4,$s0
/*  f1690a0:	4600848d */ 	trunc.w.s	$f18,$f16
/*  f1690a4:	440b9000 */ 	mfc1	$t3,$f18
/*  f1690a8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1690ac:	a5ab1638 */ 	sh	$t3,0x1638($t5)
/*  f1690b0:	c7a40080 */ 	lwc1	$f4,0x80($sp)
/*  f1690b4:	8e780284 */ 	lw	$t8,0x284($s3)
/*  f1690b8:	03c25821 */ 	addu	$t3,$s8,$v0
/*  f1690bc:	46142181 */ 	sub.s	$f6,$f4,$f20
/*  f1690c0:	03104021 */ 	addu	$t0,$t8,$s0
/*  f1690c4:	4600320d */ 	trunc.w.s	$f8,$f6
/*  f1690c8:	440f4000 */ 	mfc1	$t7,$f8
/*  f1690cc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1690d0:	a50f1636 */ 	sh	$t7,0x1636($t0)
/*  f1690d4:	c7aa0078 */ 	lwc1	$f10,0x78($sp)
/*  f1690d8:	8e6a0284 */ 	lw	$t2,0x284($s3)
/*  f1690dc:	46145400 */ 	add.s	$f16,$f10,$f20
/*  f1690e0:	01506021 */ 	addu	$t4,$t2,$s0
/*  f1690e4:	4600848d */ 	trunc.w.s	$f18,$f16
/*  f1690e8:	44099000 */ 	mfc1	$t1,$f18
/*  f1690ec:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1690f0:	a589163a */ 	sh	$t1,0x163a($t4)
/*  f1690f4:	c6aa0000 */ 	lwc1	$f10,0x0($s5)
/*  f1690f8:	c6480008 */ 	lwc1	$f8,0x8($s2)
/*  f1690fc:	c6b20004 */ 	lwc1	$f18,0x4($s5)
/*  f169100:	c650000c */ 	lwc1	$f16,0xc($s2)
/*  f169104:	460a4081 */ 	sub.s	$f2,$f8,$f10
/*  f169108:	c6a60008 */ 	lwc1	$f6,0x8($s5)
/*  f16910c:	c6440010 */ 	lwc1	$f4,0x10($s2)
/*  f169110:	46128301 */ 	sub.s	$f12,$f16,$f18
/*  f169114:	46062001 */ 	sub.s	$f0,$f4,$f6
/*  f169118:	46021102 */ 	mul.s	$f4,$f2,$f2
/*  f16911c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169120:	460c6182 */ 	mul.s	$f6,$f12,$f12
/*  f169124:	46062200 */ 	add.s	$f8,$f4,$f6
/*  f169128:	46000282 */ 	mul.s	$f10,$f0,$f0
/*  f16912c:	46085400 */ 	add.s	$f16,$f10,$f8
/*  f169130:	e5700000 */ 	swc1	$f16,0x0($t3)
.L0f169134:
/*  f169134:	26940001 */ 	addiu	$s4,$s4,0x1
.L0f169138:
/*  f169138:	1697ff99 */ 	bne	$s4,$s7,.L0f168fa0
/*  f16913c:	2610000c */ 	addiu	$s0,$s0,0xc
/*  f169140:	8e44001c */ 	lw	$a0,0x1c($s2)
/*  f169144:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f169148:	02a03025 */ 	or	$a2,$s5,$zero
/*  f16914c:	10800003 */ 	beqz	$a0,.L0f16915c
/*  f169150:	8fa70094 */ 	lw	$a3,0x94($sp)
/*  f169154:	0fc5a3c9 */ 	jal	func0f168f24
/*  f169158:	afbe0010 */ 	sw	$s8,0x10($sp)
.L0f16915c:
/*  f16915c:	8fad008c */ 	lw	$t5,0x8c($sp)
/*  f169160:	51a00009 */ 	beqzl	$t5,.L0f169188
/*  f169164:	8fbf005c */ 	lw	$ra,0x5c($sp)
/*  f169168:	8e440020 */ 	lw	$a0,0x20($s2)
/*  f16916c:	01a02825 */ 	or	$a1,$t5,$zero
/*  f169170:	02a03025 */ 	or	$a2,$s5,$zero
/*  f169174:	10800003 */ 	beqz	$a0,.L0f169184
/*  f169178:	8fa70094 */ 	lw	$a3,0x94($sp)
/*  f16917c:	0fc5a3c9 */ 	jal	func0f168f24
/*  f169180:	afbe0010 */ 	sw	$s8,0x10($sp)
.L0f169184:
/*  f169184:	8fbf005c */ 	lw	$ra,0x5c($sp)
.L0f169188:
/*  f169188:	d7b40020 */ 	ldc1	$f20,0x20($sp)
/*  f16918c:	d7b60028 */ 	ldc1	$f22,0x28($sp)
/*  f169190:	d7b80030 */ 	ldc1	$f24,0x30($sp)
/*  f169194:	8fb00038 */ 	lw	$s0,0x38($sp)
/*  f169198:	8fb1003c */ 	lw	$s1,0x3c($sp)
/*  f16919c:	8fb20040 */ 	lw	$s2,0x40($sp)
/*  f1691a0:	8fb30044 */ 	lw	$s3,0x44($sp)
/*  f1691a4:	8fb40048 */ 	lw	$s4,0x48($sp)
/*  f1691a8:	8fb5004c */ 	lw	$s5,0x4c($sp)
/*  f1691ac:	8fb60050 */ 	lw	$s6,0x50($sp)
/*  f1691b0:	8fb70054 */ 	lw	$s7,0x54($sp)
/*  f1691b4:	8fbe0058 */ 	lw	$s8,0x58($sp)
/*  f1691b8:	03e00008 */ 	jr	$ra
/*  f1691bc:	27bd0088 */ 	addiu	$sp,$sp,0x88
);

GLOBAL_ASM(
glabel func0f1691c0
/*  f1691c0:	27bdff88 */ 	addiu	$sp,$sp,-120
/*  f1691c4:	3c0e8008 */ 	lui	$t6,%hi(var80084068)
/*  f1691c8:	afbf0034 */ 	sw	$ra,0x34($sp)
/*  f1691cc:	afb40030 */ 	sw	$s4,0x30($sp)
/*  f1691d0:	afb3002c */ 	sw	$s3,0x2c($sp)
/*  f1691d4:	afb20028 */ 	sw	$s2,0x28($sp)
/*  f1691d8:	afb10024 */ 	sw	$s1,0x24($sp)
/*  f1691dc:	afb00020 */ 	sw	$s0,0x20($sp)
/*  f1691e0:	25ce4068 */ 	addiu	$t6,$t6,%lo(var80084068)
/*  f1691e4:	8dc10000 */ 	lw	$at,0x0($t6)
/*  f1691e8:	27b30060 */ 	addiu	$s3,$sp,0x60
/*  f1691ec:	3c098008 */ 	lui	$t1,%hi(var80084078)
/*  f1691f0:	ae610000 */ 	sw	$at,0x0($s3)
/*  f1691f4:	8dd90004 */ 	lw	$t9,0x4($t6)
/*  f1691f8:	25294078 */ 	addiu	$t1,$t1,%lo(var80084078)
/*  f1691fc:	27b40050 */ 	addiu	$s4,$sp,0x50
/*  f169200:	ae790004 */ 	sw	$t9,0x4($s3)
/*  f169204:	8dc10008 */ 	lw	$at,0x8($t6)
/*  f169208:	3c11800a */ 	lui	$s1,%hi(g_Vars)
/*  f16920c:	26319fc0 */ 	addiu	$s1,$s1,%lo(g_Vars)
/*  f169210:	ae610008 */ 	sw	$at,0x8($s3)
/*  f169214:	8dd9000c */ 	lw	$t9,0xc($t6)
/*  f169218:	8e230284 */ 	lw	$v1,0x284($s1)
/*  f16921c:	8e30034c */ 	lw	$s0,0x34c($s1)
/*  f169220:	ae79000c */ 	sw	$t9,0xc($s3)
/*  f169224:	8d210000 */ 	lw	$at,0x0($t1)
/*  f169228:	8e220348 */ 	lw	$v0,0x348($s1)
/*  f16922c:	2610fffc */ 	addiu	$s0,$s0,-4
/*  f169230:	ae810000 */ 	sw	$at,0x0($s4)
/*  f169234:	8d2c0004 */ 	lw	$t4,0x4($t1)
/*  f169238:	27b20040 */ 	addiu	$s2,$sp,0x40
/*  f16923c:	ae8c0004 */ 	sw	$t4,0x4($s4)
/*  f169240:	8d210008 */ 	lw	$at,0x8($t1)
/*  f169244:	ae810008 */ 	sw	$at,0x8($s4)
/*  f169248:	8d2c000c */ 	lw	$t4,0xc($t1)
/*  f16924c:	0202082b */ 	sltu	$at,$s0,$v0
/*  f169250:	ae8c000c */ 	sw	$t4,0xc($s4)
/*  f169254:	c4641bb0 */ 	lwc1	$f4,0x1bb0($v1)
/*  f169258:	e7a40040 */ 	swc1	$f4,0x40($sp)
/*  f16925c:	c4661bb4 */ 	lwc1	$f6,0x1bb4($v1)
/*  f169260:	e7a60044 */ 	swc1	$f6,0x44($sp)
/*  f169264:	c4681bb8 */ 	lwc1	$f8,0x1bb8($v1)
/*  f169268:	1420000d */ 	bnez	$at,.L0f1692a0
/*  f16926c:	e7a80048 */ 	swc1	$f8,0x48($sp)
/*  f169270:	8e040000 */ 	lw	$a0,0x0($s0)
.L0f169274:
/*  f169274:	00002825 */ 	or	$a1,$zero,$zero
/*  f169278:	02403025 */ 	or	$a2,$s2,$zero
/*  f16927c:	10800004 */ 	beqz	$a0,.L0f169290
/*  f169280:	02803825 */ 	or	$a3,$s4,$zero
/*  f169284:	0fc5a3c9 */ 	jal	func0f168f24
/*  f169288:	afb30010 */ 	sw	$s3,0x10($sp)
/*  f16928c:	8e220348 */ 	lw	$v0,0x348($s1)
.L0f169290:
/*  f169290:	2610fffc */ 	addiu	$s0,$s0,-4
/*  f169294:	0202082b */ 	sltu	$at,$s0,$v0
/*  f169298:	5020fff6 */ 	beqzl	$at,.L0f169274
/*  f16929c:	8e040000 */ 	lw	$a0,0x0($s0)
.L0f1692a0:
/*  f1692a0:	27b20040 */ 	addiu	$s2,$sp,0x40
/*  f1692a4:	00001825 */ 	or	$v1,$zero,$zero
/*  f1692a8:	27a40050 */ 	addiu	$a0,$sp,0x50
/*  f1692ac:	24080004 */ 	addiu	$t0,$zero,0x4
/*  f1692b0:	2407fffe */ 	addiu	$a3,$zero,-2
/*  f1692b4:	2406ffff */ 	addiu	$a2,$zero,-1
/*  f1692b8:	2405000c */ 	addiu	$a1,$zero,0xc
.L0f1692bc:
/*  f1692bc:	8c8d0000 */ 	lw	$t5,0x0($a0)
/*  f1692c0:	55a0000d */ 	bnezl	$t5,.L0f1692f8
/*  f1692c4:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f1692c8:	00650019 */ 	multu	$v1,$a1
/*  f1692cc:	8e380284 */ 	lw	$t8,0x284($s1)
/*  f1692d0:	00001012 */ 	mflo	$v0
/*  f1692d4:	03027821 */ 	addu	$t7,$t8,$v0
/*  f1692d8:	ade01630 */ 	sw	$zero,0x1630($t7)
/*  f1692dc:	8e2e0284 */ 	lw	$t6,0x284($s1)
/*  f1692e0:	01c2c821 */ 	addu	$t9,$t6,$v0
/*  f1692e4:	a7261634 */ 	sh	$a2,0x1634($t9)
/*  f1692e8:	8e2b0284 */ 	lw	$t3,0x284($s1)
/*  f1692ec:	01625021 */ 	addu	$t2,$t3,$v0
/*  f1692f0:	a5471638 */ 	sh	$a3,0x1638($t2)
/*  f1692f4:	24630001 */ 	addiu	$v1,$v1,0x1
.L0f1692f8:
/*  f1692f8:	1468fff0 */ 	bne	$v1,$t0,.L0f1692bc
/*  f1692fc:	24840004 */ 	addiu	$a0,$a0,0x4
/*  f169300:	3c10800a */ 	lui	$s0,%hi(var8009fffc)
/*  f169304:	8e10a30c */ 	lw	$s0,-0x5cf4($s0)
/*  f169308:	3c02800a */ 	lui	$v0,0x800a
/*  f16930c:	8c42a308 */ 	lw	$v0,-0x5cf8($v0)
/*  f169310:	2610fffc */ 	addiu	$s0,$s0,%lo(var8009fffc)
/*  f169314:	0202082b */ 	sltu	$at,$s0,$v0
/*  f169318:	5420000f */ 	bnezl	$at,.L0f169358
/*  f16931c:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f169320:	8e040000 */ 	lw	$a0,0x0($s0)
.L0f169324:
/*  f169324:	00002825 */ 	or	$a1,$zero,$zero
/*  f169328:	02403025 */ 	or	$a2,$s2,$zero
/*  f16932c:	10800005 */ 	beqz	$a0,.L0f169344
/*  f169330:	02803825 */ 	or	$a3,$s4,$zero
/*  f169334:	0fc5a2d3 */ 	jal	func0f168b4c
/*  f169338:	afb30010 */ 	sw	$s3,0x10($sp)
/*  f16933c:	3c02800a */ 	lui	$v0,0x800a
/*  f169340:	8c42a308 */ 	lw	$v0,-0x5cf8($v0)
.L0f169344:
/*  f169344:	2610fffc */ 	addiu	$s0,$s0,-4
/*  f169348:	0202082b */ 	sltu	$at,$s0,$v0
/*  f16934c:	5020fff5 */ 	beqzl	$at,.L0f169324
/*  f169350:	8e040000 */ 	lw	$a0,0x0($s0)
/*  f169354:	8fbf0034 */ 	lw	$ra,0x34($sp)
.L0f169358:
/*  f169358:	8fb00020 */ 	lw	$s0,0x20($sp)
/*  f16935c:	8fb10024 */ 	lw	$s1,0x24($sp)
/*  f169360:	8fb20028 */ 	lw	$s2,0x28($sp)
/*  f169364:	8fb3002c */ 	lw	$s3,0x2c($sp)
/*  f169368:	8fb40030 */ 	lw	$s4,0x30($sp)
/*  f16936c:	03e00008 */ 	jr	$ra
/*  f169370:	27bd0078 */ 	addiu	$sp,$sp,0x78
);

GLOBAL_ASM(
glabel func0f169374
/*  f169374:	27bdfe70 */ 	addiu	$sp,$sp,-400
/*  f169378:	afbf0054 */ 	sw	$ra,0x54($sp)
/*  f16937c:	afb20038 */ 	sw	$s2,0x38($sp)
/*  f169380:	3c0ebc00 */ 	lui	$t6,0xbc00
/*  f169384:	afbe0050 */ 	sw	$s8,0x50($sp)
/*  f169388:	afb7004c */ 	sw	$s7,0x4c($sp)
/*  f16938c:	afb60048 */ 	sw	$s6,0x48($sp)
/*  f169390:	afb50044 */ 	sw	$s5,0x44($sp)
/*  f169394:	afb40040 */ 	sw	$s4,0x40($sp)
/*  f169398:	afb3003c */ 	sw	$s3,0x3c($sp)
/*  f16939c:	afb10034 */ 	sw	$s1,0x34($sp)
/*  f1693a0:	afb00030 */ 	sw	$s0,0x30($sp)
/*  f1693a4:	f7b40028 */ 	sdc1	$f20,0x28($sp)
/*  f1693a8:	35ce0006 */ 	ori	$t6,$t6,0x6
/*  f1693ac:	ac8e0000 */ 	sw	$t6,0x0($a0)
/*  f1693b0:	ac800004 */ 	sw	$zero,0x4($a0)
/*  f1693b4:	0fc3569f */ 	jal	func0f0d5a7c
/*  f1693b8:	24920008 */ 	addiu	$s2,$a0,0x8
/*  f1693bc:	3c13800a */ 	lui	$s3,%hi(g_Vars)
/*  f1693c0:	26739fc0 */ 	addiu	$s3,$s3,%lo(g_Vars)
/*  f1693c4:	8e6204b4 */ 	lw	$v0,0x4b4($s3)
/*  f1693c8:	2401005a */ 	addiu	$at,$zero,0x5a
/*  f1693cc:	10410006 */ 	beq	$v0,$at,.L0f1693e8
/*  f1693d0:	2401004e */ 	addiu	$at,$zero,0x4e
/*  f1693d4:	54410060 */ 	bnel	$v0,$at,.L0f169558
/*  f1693d8:	8e6204b4 */ 	lw	$v0,0x4b4($s3)
/*  f1693dc:	0fc06aea */ 	jal	func0f01aba8
/*  f1693e0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1693e4:	1040005b */ 	beqz	$v0,.L0f169554
.L0f1693e8:
/*  f1693e8:	02401025 */ 	or	$v0,$s2,$zero
/*  f1693ec:	3c188006 */ 	lui	$t8,%hi(var800613a0)
/*  f1693f0:	271813a0 */ 	addiu	$t8,$t8,%lo(var800613a0)
/*  f1693f4:	3c0f0600 */ 	lui	$t7,0x600
/*  f1693f8:	ac4f0000 */ 	sw	$t7,0x0($v0)
/*  f1693fc:	ac580004 */ 	sw	$t8,0x4($v0)
/*  f169400:	0fc47b8a */ 	jal	func0f11ee28
/*  f169404:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f169408:	10400008 */ 	beqz	$v0,.L0f16942c
/*  f16940c:	02401025 */ 	or	$v0,$s2,$zero
/*  f169410:	3c0a8006 */ 	lui	$t2,%hi(var80061360)
/*  f169414:	254a1360 */ 	addiu	$t2,$t2,%lo(var80061360)
/*  f169418:	3c190600 */ 	lui	$t9,0x600
/*  f16941c:	ac590000 */ 	sw	$t9,0x0($v0)
/*  f169420:	ac4a0004 */ 	sw	$t2,0x4($v0)
/*  f169424:	10000008 */ 	beqz	$zero,.L0f169448
/*  f169428:	26520008 */ 	addiu	$s2,$s2,0x8
.L0f16942c:
/*  f16942c:	02401025 */ 	or	$v0,$s2,$zero
/*  f169430:	3c0c8006 */ 	lui	$t4,%hi(var80061380)
/*  f169434:	258c1380 */ 	addiu	$t4,$t4,%lo(var80061380)
/*  f169438:	3c0b0600 */ 	lui	$t3,0x600
/*  f16943c:	ac4b0000 */ 	sw	$t3,0x0($v0)
/*  f169440:	ac4c0004 */ 	sw	$t4,0x4($v0)
/*  f169444:	26520008 */ 	addiu	$s2,$s2,0x8
.L0f169448:
/*  f169448:	0c002ca0 */ 	jal	func0000b280
/*  f16944c:	02402025 */ 	or	$a0,$s2,$zero
/*  f169450:	0c002c74 */ 	jal	func0000b1d0
/*  f169454:	00402025 */ 	or	$a0,$v0,$zero
/*  f169458:	0040a025 */ 	or	$s4,$v0,$zero
/*  f16945c:	0c002f40 */ 	jal	func0000bd00
/*  f169460:	24520008 */ 	addiu	$s2,$v0,0x8
/*  f169464:	00028c00 */ 	sll	$s1,$v0,0x10
/*  f169468:	00116c03 */ 	sra	$t5,$s1,0x10
/*  f16946c:	0c002f44 */ 	jal	func0000bd10
/*  f169470:	01a08825 */ 	or	$s1,$t5,$zero
/*  f169474:	44822000 */ 	mtc1	$v0,$f4
/*  f169478:	44918000 */ 	mtc1	$s1,$f16
/*  f16947c:	3c014080 */ 	lui	$at,0x4080
/*  f169480:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f169484:	4481a000 */ 	mtc1	$at,$f20
/*  f169488:	3c01ed00 */ 	lui	$at,0xed00
/*  f16948c:	468084a0 */ 	cvt.s.w	$f18,$f16
/*  f169490:	46143202 */ 	mul.s	$f8,$f6,$f20
/*  f169494:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169498:	46149102 */ 	mul.s	$f4,$f18,$f20
/*  f16949c:	4600428d */ 	trunc.w.s	$f10,$f8
/*  f1694a0:	4600218d */ 	trunc.w.s	$f6,$f4
/*  f1694a4:	440f5000 */ 	mfc1	$t7,$f10
/*  f1694a8:	440b3000 */ 	mfc1	$t3,$f6
/*  f1694ac:	31f80fff */ 	andi	$t8,$t7,0xfff
/*  f1694b0:	0301c825 */ 	or	$t9,$t8,$at
/*  f1694b4:	316c0fff */ 	andi	$t4,$t3,0xfff
/*  f1694b8:	000c6b00 */ 	sll	$t5,$t4,0xc
/*  f1694bc:	032d7025 */ 	or	$t6,$t9,$t5
/*  f1694c0:	0c002f22 */ 	jal	func0000bc88
/*  f1694c4:	ae8e0000 */ 	sw	$t6,0x0($s4)
/*  f1694c8:	0c002f40 */ 	jal	func0000bd00
/*  f1694cc:	a7a2008a */ 	sh	$v0,0x8a($sp)
/*  f1694d0:	00028400 */ 	sll	$s0,$v0,0x10
/*  f1694d4:	00107c03 */ 	sra	$t7,$s0,0x10
/*  f1694d8:	0c002f44 */ 	jal	func0000bd10
/*  f1694dc:	01e08025 */ 	or	$s0,$t7,$zero
/*  f1694e0:	00028c00 */ 	sll	$s1,$v0,0x10
/*  f1694e4:	0011c403 */ 	sra	$t8,$s1,0x10
/*  f1694e8:	0c002f26 */ 	jal	func0000bc98
/*  f1694ec:	03008825 */ 	or	$s1,$t8,$zero
/*  f1694f0:	87ad008a */ 	lh	$t5,0x8a($sp)
/*  f1694f4:	00515021 */ 	addu	$t2,$v0,$s1
/*  f1694f8:	448a4000 */ 	mtc1	$t2,$f8
/*  f1694fc:	020d7021 */ 	addu	$t6,$s0,$t5
/*  f169500:	448e2000 */ 	mtc1	$t6,$f4
/*  f169504:	468042a0 */ 	cvt.s.w	$f10,$f8
/*  f169508:	02402025 */ 	or	$a0,$s2,$zero
/*  f16950c:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f169510:	46145402 */ 	mul.s	$f16,$f10,$f20
/*  f169514:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169518:	46143202 */ 	mul.s	$f8,$f6,$f20
/*  f16951c:	4600848d */ 	trunc.w.s	$f18,$f16
/*  f169520:	4600428d */ 	trunc.w.s	$f10,$f8
/*  f169524:	440c9000 */ 	mfc1	$t4,$f18
/*  f169528:	44185000 */ 	mfc1	$t8,$f10
/*  f16952c:	31990fff */ 	andi	$t9,$t4,0xfff
/*  f169530:	330a0fff */ 	andi	$t2,$t8,0xfff
/*  f169534:	000a5b00 */ 	sll	$t3,$t2,0xc
/*  f169538:	032b6025 */ 	or	$t4,$t9,$t3
/*  f16953c:	0fc06bbc */ 	jal	func0f01aef0
/*  f169540:	ae8c0004 */ 	sw	$t4,0x4($s4)
/*  f169544:	0fc5a176 */ 	jal	func0f1685d8
/*  f169548:	00402025 */ 	or	$a0,$v0,$zero
/*  f16954c:	1000065d */ 	beqz	$zero,.L0f16aec4
/*  f169550:	00409025 */ 	or	$s2,$v0,$zero
.L0f169554:
/*  f169554:	8e6204b4 */ 	lw	$v0,0x4b4($s3)
.L0f169558:
/*  f169558:	2401005b */ 	addiu	$at,$zero,0x5b
/*  f16955c:	24070002 */ 	addiu	$a3,$zero,0x2
/*  f169560:	14410040 */ 	bne	$v0,$at,.L0f169664
/*  f169564:	3408fffe */ 	dli	$t0,0xfffe
/*  f169568:	02401025 */ 	or	$v0,$s2,$zero
/*  f16956c:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f169570:	3c0dbc00 */ 	lui	$t5,0xbc00
/*  f169574:	35ad0404 */ 	ori	$t5,$t5,0x404
/*  f169578:	02401825 */ 	or	$v1,$s2,$zero
/*  f16957c:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f169580:	ac4d0000 */ 	sw	$t5,0x0($v0)
/*  f169584:	ac470004 */ 	sw	$a3,0x4($v0)
/*  f169588:	3c0ebc00 */ 	lui	$t6,0xbc00
/*  f16958c:	35ce0c04 */ 	ori	$t6,$t6,0xc04
/*  f169590:	02402025 */ 	or	$a0,$s2,$zero
/*  f169594:	ac6e0000 */ 	sw	$t6,0x0($v1)
/*  f169598:	ac670004 */ 	sw	$a3,0x4($v1)
/*  f16959c:	3c0fbc00 */ 	lui	$t7,0xbc00
/*  f1695a0:	35ef1404 */ 	ori	$t7,$t7,0x1404
/*  f1695a4:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f1695a8:	02402825 */ 	or	$a1,$s2,$zero
/*  f1695ac:	ac8f0000 */ 	sw	$t7,0x0($a0)
/*  f1695b0:	ac880004 */ 	sw	$t0,0x4($a0)
/*  f1695b4:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f1695b8:	3c18bc00 */ 	lui	$t8,0xbc00
/*  f1695bc:	37181c04 */ 	ori	$t8,$t8,0x1c04
/*  f1695c0:	02403025 */ 	or	$a2,$s2,$zero
/*  f1695c4:	acb80000 */ 	sw	$t8,0x0($a1)
/*  f1695c8:	aca80004 */ 	sw	$t0,0x4($a1)
/*  f1695cc:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f1695d0:	3c0a8006 */ 	lui	$t2,%hi(var800613a0)
/*  f1695d4:	3c090600 */ 	lui	$t1,0x600
/*  f1695d8:	254a13a0 */ 	addiu	$t2,$t2,%lo(var800613a0)
/*  f1695dc:	02401025 */ 	or	$v0,$s2,$zero
/*  f1695e0:	3c198006 */ 	lui	$t9,%hi(var80061380)
/*  f1695e4:	acca0004 */ 	sw	$t2,0x4($a2)
/*  f1695e8:	acc90000 */ 	sw	$t1,0x0($a2)
/*  f1695ec:	27391380 */ 	addiu	$t9,$t9,%lo(var80061380)
/*  f1695f0:	ac590004 */ 	sw	$t9,0x4($v0)
/*  f1695f4:	ac490000 */ 	sw	$t1,0x0($v0)
/*  f1695f8:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f1695fc:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f169600:	00002025 */ 	or	$a0,$zero,$zero
/*  f169604:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169608:	86040634 */ 	lh	$a0,0x634($s0)
/*  f16960c:	0c002f2a */ 	jal	func0000bca8
/*  f169610:	86050636 */ 	lh	$a1,0x636($s0)
/*  f169614:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169618:	c60c1854 */ 	lwc1	$f12,0x1854($s0)
/*  f16961c:	c60e1858 */ 	lwc1	$f14,0x1858($s0)
/*  f169620:	86060630 */ 	lh	$a2,0x630($s0)
/*  f169624:	0c002f76 */ 	jal	func0000bdd8
/*  f169628:	86070632 */ 	lh	$a3,0x632($s0)
/*  f16962c:	3c013f80 */ 	lui	$at,0x3f80
/*  f169630:	44816000 */ 	mtc1	$at,$f12
/*  f169634:	0c0059d2 */ 	jal	func00016748
/*  f169638:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16963c:	0c002c74 */ 	jal	func0000b1d0
/*  f169640:	02402025 */ 	or	$a0,$s2,$zero
/*  f169644:	0c002ccc */ 	jal	func0000b330
/*  f169648:	00402025 */ 	or	$a0,$v0,$zero
/*  f16964c:	0fc572dd */ 	jal	func0f15cb74
/*  f169650:	00402025 */ 	or	$a0,$v0,$zero
/*  f169654:	0fc3ef0c */ 	jal	func0f0fbc30
/*  f169658:	00402025 */ 	or	$a0,$v0,$zero
/*  f16965c:	10000619 */ 	beqz	$zero,.L0f16aec4
/*  f169660:	00409025 */ 	or	$s2,$v0,$zero
.L0f169664:
/*  f169664:	2401005d */ 	addiu	$at,$zero,0x5d
/*  f169668:	14410046 */ 	bne	$v0,$at,.L0f169784
/*  f16966c:	24070002 */ 	addiu	$a3,$zero,0x2
/*  f169670:	02401025 */ 	or	$v0,$s2,$zero
/*  f169674:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f169678:	3c0bbc00 */ 	lui	$t3,0xbc00
/*  f16967c:	356b0404 */ 	ori	$t3,$t3,0x404
/*  f169680:	02401825 */ 	or	$v1,$s2,$zero
/*  f169684:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f169688:	ac4b0000 */ 	sw	$t3,0x0($v0)
/*  f16968c:	ac470004 */ 	sw	$a3,0x4($v0)
/*  f169690:	3c0cbc00 */ 	lui	$t4,0xbc00
/*  f169694:	358c0c04 */ 	ori	$t4,$t4,0xc04
/*  f169698:	02402025 */ 	or	$a0,$s2,$zero
/*  f16969c:	ac6c0000 */ 	sw	$t4,0x0($v1)
/*  f1696a0:	ac670004 */ 	sw	$a3,0x4($v1)
/*  f1696a4:	3c0dbc00 */ 	lui	$t5,0xbc00
/*  f1696a8:	3408fffe */ 	dli	$t0,0xfffe
/*  f1696ac:	35ad1404 */ 	ori	$t5,$t5,0x1404
/*  f1696b0:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f1696b4:	02402825 */ 	or	$a1,$s2,$zero
/*  f1696b8:	ac8d0000 */ 	sw	$t5,0x0($a0)
/*  f1696bc:	ac880004 */ 	sw	$t0,0x4($a0)
/*  f1696c0:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f1696c4:	3c0ebc00 */ 	lui	$t6,0xbc00
/*  f1696c8:	35ce1c04 */ 	ori	$t6,$t6,0x1c04
/*  f1696cc:	02403025 */ 	or	$a2,$s2,$zero
/*  f1696d0:	acae0000 */ 	sw	$t6,0x0($a1)
/*  f1696d4:	aca80004 */ 	sw	$t0,0x4($a1)
/*  f1696d8:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f1696dc:	3c0f8006 */ 	lui	$t7,%hi(var800613a0)
/*  f1696e0:	3c090600 */ 	lui	$t1,0x600
/*  f1696e4:	25ef13a0 */ 	addiu	$t7,$t7,%lo(var800613a0)
/*  f1696e8:	02401025 */ 	or	$v0,$s2,$zero
/*  f1696ec:	3c188006 */ 	lui	$t8,%hi(var80061380)
/*  f1696f0:	accf0004 */ 	sw	$t7,0x4($a2)
/*  f1696f4:	acc90000 */ 	sw	$t1,0x0($a2)
/*  f1696f8:	27181380 */ 	addiu	$t8,$t8,%lo(var80061380)
/*  f1696fc:	ac580004 */ 	sw	$t8,0x4($v0)
/*  f169700:	ac490000 */ 	sw	$t1,0x0($v0)
/*  f169704:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f169708:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f16970c:	00002025 */ 	or	$a0,$zero,$zero
/*  f169710:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169714:	86040634 */ 	lh	$a0,0x634($s0)
/*  f169718:	0c002f2a */ 	jal	func0000bca8
/*  f16971c:	86050636 */ 	lh	$a1,0x636($s0)
/*  f169720:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169724:	c60c1854 */ 	lwc1	$f12,0x1854($s0)
/*  f169728:	c60e1858 */ 	lwc1	$f14,0x1858($s0)
/*  f16972c:	86060630 */ 	lh	$a2,0x630($s0)
/*  f169730:	0c002f76 */ 	jal	func0000bdd8
/*  f169734:	86070632 */ 	lh	$a3,0x632($s0)
/*  f169738:	3c013f80 */ 	lui	$at,0x3f80
/*  f16973c:	44816000 */ 	mtc1	$at,$f12
/*  f169740:	0c0059d2 */ 	jal	func00016748
/*  f169744:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169748:	0c002c74 */ 	jal	func0000b1d0
/*  f16974c:	02402025 */ 	or	$a0,$s2,$zero
/*  f169750:	0fc572dd */ 	jal	func0f15cb74
/*  f169754:	00402025 */ 	or	$a0,$v0,$zero
/*  f169758:	0fc3ef0c */ 	jal	func0f0fbc30
/*  f16975c:	00402025 */ 	or	$a0,$v0,$zero
/*  f169760:	8e6a0284 */ 	lw	$t2,0x284($s3)
/*  f169764:	00409025 */ 	or	$s2,$v0,$zero
/*  f169768:	8d591a24 */ 	lw	$t9,0x1a24($t2)
/*  f16976c:	532005d6 */ 	beqzl	$t9,.L0f16aec8
/*  f169770:	826e04d3 */ 	lb	$t6,0x4d3($s3)
/*  f169774:	0fc2eb5b */ 	jal	func0f0bad6c
/*  f169778:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16977c:	100005d2 */ 	beqz	$zero,.L0f16aec8
/*  f169780:	826e04d3 */ 	lb	$t6,0x4d3($s3)
.L0f169784:
/*  f169784:	2401005c */ 	addiu	$at,$zero,0x5c
/*  f169788:	14410041 */ 	bne	$v0,$at,.L0f169890
/*  f16978c:	24070002 */ 	addiu	$a3,$zero,0x2
/*  f169790:	02401025 */ 	or	$v0,$s2,$zero
/*  f169794:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f169798:	3c0bbc00 */ 	lui	$t3,0xbc00
/*  f16979c:	356b0404 */ 	ori	$t3,$t3,0x404
/*  f1697a0:	02401825 */ 	or	$v1,$s2,$zero
/*  f1697a4:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f1697a8:	ac4b0000 */ 	sw	$t3,0x0($v0)
/*  f1697ac:	ac470004 */ 	sw	$a3,0x4($v0)
/*  f1697b0:	3c0cbc00 */ 	lui	$t4,0xbc00
/*  f1697b4:	358c0c04 */ 	ori	$t4,$t4,0xc04
/*  f1697b8:	02402025 */ 	or	$a0,$s2,$zero
/*  f1697bc:	ac6c0000 */ 	sw	$t4,0x0($v1)
/*  f1697c0:	ac670004 */ 	sw	$a3,0x4($v1)
/*  f1697c4:	3c0dbc00 */ 	lui	$t5,0xbc00
/*  f1697c8:	3408fffe */ 	dli	$t0,0xfffe
/*  f1697cc:	35ad1404 */ 	ori	$t5,$t5,0x1404
/*  f1697d0:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f1697d4:	02402825 */ 	or	$a1,$s2,$zero
/*  f1697d8:	ac8d0000 */ 	sw	$t5,0x0($a0)
/*  f1697dc:	ac880004 */ 	sw	$t0,0x4($a0)
/*  f1697e0:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f1697e4:	3c0ebc00 */ 	lui	$t6,0xbc00
/*  f1697e8:	35ce1c04 */ 	ori	$t6,$t6,0x1c04
/*  f1697ec:	02403025 */ 	or	$a2,$s2,$zero
/*  f1697f0:	acae0000 */ 	sw	$t6,0x0($a1)
/*  f1697f4:	aca80004 */ 	sw	$t0,0x4($a1)
/*  f1697f8:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f1697fc:	3c0f8006 */ 	lui	$t7,%hi(var800613a0)
/*  f169800:	3c090600 */ 	lui	$t1,0x600
/*  f169804:	25ef13a0 */ 	addiu	$t7,$t7,%lo(var800613a0)
/*  f169808:	02401025 */ 	or	$v0,$s2,$zero
/*  f16980c:	3c188006 */ 	lui	$t8,%hi(var80061380)
/*  f169810:	accf0004 */ 	sw	$t7,0x4($a2)
/*  f169814:	acc90000 */ 	sw	$t1,0x0($a2)
/*  f169818:	27181380 */ 	addiu	$t8,$t8,%lo(var80061380)
/*  f16981c:	ac580004 */ 	sw	$t8,0x4($v0)
/*  f169820:	ac490000 */ 	sw	$t1,0x0($v0)
/*  f169824:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f169828:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f16982c:	00002025 */ 	or	$a0,$zero,$zero
/*  f169830:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169834:	86040634 */ 	lh	$a0,0x634($s0)
/*  f169838:	0c002f2a */ 	jal	func0000bca8
/*  f16983c:	86050636 */ 	lh	$a1,0x636($s0)
/*  f169840:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169844:	c60c1854 */ 	lwc1	$f12,0x1854($s0)
/*  f169848:	c60e1858 */ 	lwc1	$f14,0x1858($s0)
/*  f16984c:	86060630 */ 	lh	$a2,0x630($s0)
/*  f169850:	0c002f76 */ 	jal	func0000bdd8
/*  f169854:	86070632 */ 	lh	$a3,0x632($s0)
/*  f169858:	3c013f80 */ 	lui	$at,0x3f80
/*  f16985c:	44816000 */ 	mtc1	$at,$f12
/*  f169860:	0c0059d2 */ 	jal	func00016748
/*  f169864:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169868:	0c002c6a */ 	jal	func0000b1a8
/*  f16986c:	02402025 */ 	or	$a0,$s2,$zero
/*  f169870:	0c002c74 */ 	jal	func0000b1d0
/*  f169874:	00402025 */ 	or	$a0,$v0,$zero
/*  f169878:	0c002ccc */ 	jal	func0000b330
/*  f16987c:	00402025 */ 	or	$a0,$v0,$zero
/*  f169880:	0fc4ec19 */ 	jal	func0f13b064
/*  f169884:	00402025 */ 	or	$a0,$v0,$zero
/*  f169888:	1000058e */ 	beqz	$zero,.L0f16aec4
/*  f16988c:	00409025 */ 	or	$s2,$v0,$zero
.L0f169890:
/*  f169890:	8e700298 */ 	lw	$s0,0x298($s3)
/*  f169894:	06010006 */ 	bgez	$s0,.L0f1698b0
/*  f169898:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16989c:	8e70029c */ 	lw	$s0,0x29c($s3)
/*  f1698a0:	2a190000 */ 	slti	$t9,$s0,0x0
/*  f1698a4:	3b300001 */ 	xori	$s0,$t9,0x1
/*  f1698a8:	12000004 */ 	beqz	$s0,.L0f1698bc
/*  f1698ac:	00000000 */ 	sll	$zero,$zero,0x0
.L0f1698b0:
/*  f1698b0:	0fc2f130 */ 	jal	func0f0bc4c0
/*  f1698b4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1698b8:	0002802b */ 	sltu	$s0,$zero,$v0
.L0f1698bc:
/*  f1698bc:	12000004 */ 	beqz	$s0,.L0f1698d0
/*  f1698c0:	afb00124 */ 	sw	$s0,0x124($sp)
/*  f1698c4:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f1698c8:	1000001c */ 	beqz	$zero,.L0f16993c
/*  f1698cc:	afab012c */ 	sw	$t3,0x12c($sp)
.L0f1698d0:
/*  f1698d0:	8e6c006c */ 	lw	$t4,0x6c($s3)
/*  f1698d4:	00002025 */ 	or	$a0,$zero,$zero
/*  f1698d8:	00001825 */ 	or	$v1,$zero,$zero
/*  f1698dc:	11800003 */ 	beqz	$t4,.L0f1698ec
/*  f1698e0:	00001025 */ 	or	$v0,$zero,$zero
/*  f1698e4:	10000001 */ 	beqz	$zero,.L0f1698ec
/*  f1698e8:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f1698ec:
/*  f1698ec:	8e6d0068 */ 	lw	$t5,0x68($s3)
/*  f1698f0:	00008025 */ 	or	$s0,$zero,$zero
/*  f1698f4:	11a00003 */ 	beqz	$t5,.L0f169904
/*  f1698f8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1698fc:	10000001 */ 	beqz	$zero,.L0f169904
/*  f169900:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f169904:
/*  f169904:	8e6e0064 */ 	lw	$t6,0x64($s3)
/*  f169908:	11c00003 */ 	beqz	$t6,.L0f169918
/*  f16990c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169910:	10000001 */ 	beqz	$zero,.L0f169918
/*  f169914:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f169918:
/*  f169918:	8e6f0070 */ 	lw	$t7,0x70($s3)
/*  f16991c:	11e00003 */ 	beqz	$t7,.L0f16992c
/*  f169920:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169924:	10000001 */ 	beqz	$zero,.L0f16992c
/*  f169928:	24100001 */ 	addiu	$s0,$zero,0x1
.L0f16992c:
/*  f16992c:	0202c021 */ 	addu	$t8,$s0,$v0
/*  f169930:	03035021 */ 	addu	$t2,$t8,$v1
/*  f169934:	0144c821 */ 	addu	$t9,$t2,$a0
/*  f169938:	afb9012c */ 	sw	$t9,0x12c($sp)
.L0f16993c:
/*  f16993c:	02401025 */ 	or	$v0,$s2,$zero
/*  f169940:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f169944:	3c0bbc00 */ 	lui	$t3,0xbc00
/*  f169948:	24070002 */ 	addiu	$a3,$zero,0x2
/*  f16994c:	356b0404 */ 	ori	$t3,$t3,0x404
/*  f169950:	02401825 */ 	or	$v1,$s2,$zero
/*  f169954:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f169958:	ac4b0000 */ 	sw	$t3,0x0($v0)
/*  f16995c:	ac470004 */ 	sw	$a3,0x4($v0)
/*  f169960:	3c0cbc00 */ 	lui	$t4,0xbc00
/*  f169964:	358c0c04 */ 	ori	$t4,$t4,0xc04
/*  f169968:	02402025 */ 	or	$a0,$s2,$zero
/*  f16996c:	ac6c0000 */ 	sw	$t4,0x0($v1)
/*  f169970:	ac670004 */ 	sw	$a3,0x4($v1)
/*  f169974:	3c0dbc00 */ 	lui	$t5,0xbc00
/*  f169978:	3408fffe */ 	dli	$t0,0xfffe
/*  f16997c:	35ad1404 */ 	ori	$t5,$t5,0x1404
/*  f169980:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f169984:	02402825 */ 	or	$a1,$s2,$zero
/*  f169988:	ac8d0000 */ 	sw	$t5,0x0($a0)
/*  f16998c:	ac880004 */ 	sw	$t0,0x4($a0)
/*  f169990:	3c0ebc00 */ 	lui	$t6,0xbc00
/*  f169994:	35ce1c04 */ 	ori	$t6,$t6,0x1c04
/*  f169998:	acae0000 */ 	sw	$t6,0x0($a1)
/*  f16999c:	aca80004 */ 	sw	$t0,0x4($a1)
/*  f1699a0:	8faf012c */ 	lw	$t7,0x12c($sp)
/*  f1699a4:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f1699a8:	00008025 */ 	or	$s0,$zero,$zero
/*  f1699ac:	19e00545 */ 	blez	$t7,.L0f16aec4
/*  f1699b0:	3c188006 */ 	lui	$t8,%hi(var800613a0)
/*  f1699b4:	3c01bf80 */ 	lui	$at,0xbf80
/*  f1699b8:	271813a0 */ 	addiu	$t8,$t8,%lo(var800613a0)
/*  f1699bc:	4481a000 */ 	mtc1	$at,$f20
/*  f1699c0:	afb80068 */ 	sw	$t8,0x68($sp)
/*  f1699c4:	241e0001 */ 	addiu	$s8,$zero,0x1
/*  f1699c8:	2417ffff */ 	addiu	$s7,$zero,-1
/*  f1699cc:	2416fffe */ 	addiu	$s6,$zero,-2
/*  f1699d0:	24140004 */ 	addiu	$s4,$zero,0x4
/*  f1699d4:	8faa0124 */ 	lw	$t2,0x124($sp)
.L0f1699d8:
/*  f1699d8:	0000a825 */ 	or	$s5,$zero,$zero
/*  f1699dc:	afb20128 */ 	sw	$s2,0x128($sp)
/*  f1699e0:	11400007 */ 	beqz	$t2,.L0f169a00
/*  f1699e4:	00002025 */ 	or	$a0,$zero,$zero
/*  f1699e8:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f1699ec:	24110001 */ 	addiu	$s1,$zero,0x1
/*  f1699f0:	26190001 */ 	addiu	$t9,$s0,0x1
/*  f1699f4:	ae600290 */ 	sw	$zero,0x290($s3)
/*  f1699f8:	1000000a */ 	beqz	$zero,.L0f169a24
/*  f1699fc:	afb90060 */ 	sw	$t9,0x60($sp)
.L0f169a00:
/*  f169a00:	0fc4a3b2 */ 	jal	func0f128ec8
/*  f169a04:	02002025 */ 	or	$a0,$s0,$zero
/*  f169a08:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f169a0c:	00402025 */ 	or	$a0,$v0,$zero
/*  f169a10:	8fab012c */ 	lw	$t3,0x12c($sp)
/*  f169a14:	26020001 */ 	addiu	$v0,$s0,0x1
/*  f169a18:	afa20060 */ 	sw	$v0,0x60($sp)
/*  f169a1c:	01628826 */ 	xor	$s1,$t3,$v0
/*  f169a20:	2e310001 */ 	sltiu	$s1,$s1,0x1
.L0f169a24:
/*  f169a24:	8e6c02ac */ 	lw	$t4,0x2ac($s3)
/*  f169a28:	24010006 */ 	addiu	$at,$zero,0x6
/*  f169a2c:	11810029 */ 	beq	$t4,$at,.L0f169ad4
/*  f169a30:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169a34:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169a38:	8e0d00bc */ 	lw	$t5,0xbc($s0)
/*  f169a3c:	8da20004 */ 	lw	$v0,0x4($t5)
/*  f169a40:	844402d8 */ 	lh	$a0,0x2d8($v0)
/*  f169a44:	18800023 */ 	blez	$a0,.L0f169ad4
/*  f169a48:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169a4c:	920e1922 */ 	lbu	$t6,0x1922($s0)
/*  f169a50:	15c00020 */ 	bnez	$t6,.L0f169ad4
/*  f169a54:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169a58:	8e0f1c08 */ 	lw	$t7,0x1c08($s0)
/*  f169a5c:	24011388 */ 	addiu	$at,$zero,0x1388
/*  f169a60:	15e0001c */ 	bnez	$t7,.L0f169ad4
/*  f169a64:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169a68:	0004a980 */ 	sll	$s5,$a0,0x6
/*  f169a6c:	02a4a821 */ 	addu	$s5,$s5,$a0
/*  f169a70:	0015a840 */ 	sll	$s5,$s5,0x1
/*  f169a74:	02a1001a */ 	div	$zero,$s5,$at
/*  f169a78:	0000c012 */ 	mflo	$t8
/*  f169a7c:	27150064 */ 	addiu	$s5,$t8,0x64
/*  f169a80:	2ea100e7 */ 	sltiu	$at,$s5,0xe7
/*  f169a84:	14200002 */ 	bnez	$at,.L0f169a90
/*  f169a88:	240a1388 */ 	addiu	$t2,$zero,0x1388
/*  f169a8c:	241500e6 */ 	addiu	$s5,$zero,0xe6
.L0f169a90:
/*  f169a90:	28811389 */ 	slti	$at,$a0,0x1389
/*  f169a94:	54200004 */ 	bnezl	$at,.L0f169aa8
/*  f169a98:	904b02ff */ 	lbu	$t3,0x2ff($v0)
/*  f169a9c:	a44a02d8 */ 	sh	$t2,0x2d8($v0)
/*  f169aa0:	844402d8 */ 	lh	$a0,0x2d8($v0)
/*  f169aa4:	904b02ff */ 	lbu	$t3,0x2ff($v0)
.L0f169aa8:
/*  f169aa8:	8e790038 */ 	lw	$t9,0x38($s3)
/*  f169aac:	256c0001 */ 	addiu	$t4,$t3,0x1
/*  f169ab0:	032c0019 */ 	multu	$t9,$t4
/*  f169ab4:	00006812 */ 	mflo	$t5
/*  f169ab8:	008d7023 */ 	subu	$t6,$a0,$t5
/*  f169abc:	a44e02d8 */ 	sh	$t6,0x2d8($v0)
/*  f169ac0:	844f02d8 */ 	lh	$t7,0x2d8($v0)
/*  f169ac4:	1de00003 */ 	bgtz	$t7,.L0f169ad4
/*  f169ac8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169acc:	a44002d8 */ 	sh	$zero,0x2d8($v0)
/*  f169ad0:	a04002ff */ 	sb	$zero,0x2ff($v0)
.L0f169ad4:
/*  f169ad4:	0fc522d0 */ 	jal	func0f148b40
/*  f169ad8:	02a02025 */ 	or	$a0,$s5,$zero
/*  f169adc:	02401025 */ 	or	$v0,$s2,$zero
/*  f169ae0:	3c180600 */ 	lui	$t8,0x600
/*  f169ae4:	ac580000 */ 	sw	$t8,0x0($v0)
/*  f169ae8:	8faa0068 */ 	lw	$t2,0x68($sp)
/*  f169aec:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f169af0:	0fc47b8a */ 	jal	func0f11ee28
/*  f169af4:	ac4a0004 */ 	sw	$t2,0x4($v0)
/*  f169af8:	10400009 */ 	beqz	$v0,.L0f169b20
/*  f169afc:	3c0c0600 */ 	lui	$t4,0x600
/*  f169b00:	02401025 */ 	or	$v0,$s2,$zero
/*  f169b04:	3c198006 */ 	lui	$t9,%hi(var80061360)
/*  f169b08:	27391360 */ 	addiu	$t9,$t9,%lo(var80061360)
/*  f169b0c:	3c0b0600 */ 	lui	$t3,0x600
/*  f169b10:	ac4b0000 */ 	sw	$t3,0x0($v0)
/*  f169b14:	ac590004 */ 	sw	$t9,0x4($v0)
/*  f169b18:	10000007 */ 	beqz	$zero,.L0f169b38
/*  f169b1c:	26520008 */ 	addiu	$s2,$s2,0x8
.L0f169b20:
/*  f169b20:	02401025 */ 	or	$v0,$s2,$zero
/*  f169b24:	3c0d8006 */ 	lui	$t5,%hi(var80061380)
/*  f169b28:	25ad1380 */ 	addiu	$t5,$t5,%lo(var80061380)
/*  f169b2c:	ac4d0004 */ 	sw	$t5,0x4($v0)
/*  f169b30:	ac4c0000 */ 	sw	$t4,0x0($v0)
/*  f169b34:	26520008 */ 	addiu	$s2,$s2,0x8
.L0f169b38:
/*  f169b38:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169b3c:	86040634 */ 	lh	$a0,0x634($s0)
/*  f169b40:	0c002f2a */ 	jal	func0000bca8
/*  f169b44:	86050636 */ 	lh	$a1,0x636($s0)
/*  f169b48:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169b4c:	c60c1854 */ 	lwc1	$f12,0x1854($s0)
/*  f169b50:	c60e1858 */ 	lwc1	$f14,0x1858($s0)
/*  f169b54:	86060630 */ 	lh	$a2,0x630($s0)
/*  f169b58:	0c002f76 */ 	jal	func0000bdd8
/*  f169b5c:	86070632 */ 	lh	$a3,0x632($s0)
/*  f169b60:	8e6e0288 */ 	lw	$t6,0x288($s3)
/*  f169b64:	0c0059d2 */ 	jal	func00016748
/*  f169b68:	c5cc0074 */ 	lwc1	$f12,0x74($t6)
/*  f169b6c:	0fc595fe */ 	jal	func0f1657f8
/*  f169b70:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169b74:	0fc5d8a6 */ 	jal	func0f176298
/*  f169b78:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169b7c:	0c002ca0 */ 	jal	func0000b280
/*  f169b80:	02402025 */ 	or	$a0,$s2,$zero
/*  f169b84:	0c002c74 */ 	jal	func0000b1d0
/*  f169b88:	00402025 */ 	or	$a0,$v0,$zero
/*  f169b8c:	0fc572dd */ 	jal	func0f15cb74
/*  f169b90:	00402025 */ 	or	$a0,$v0,$zero
/*  f169b94:	0fc4f144 */ 	jal	func0f13c510
/*  f169b98:	00409025 */ 	or	$s2,$v0,$zero
/*  f169b9c:	8e6f04b4 */ 	lw	$t7,0x4b4($s3)
/*  f169ba0:	24010026 */ 	addiu	$at,$zero,0x26
/*  f169ba4:	3c188008 */ 	lui	$t8,0x8008
/*  f169ba8:	55e1000a */ 	bnel	$t7,$at,.L0f169bd4
/*  f169bac:	8e6b000c */ 	lw	$t3,0xc($s3)
/*  f169bb0:	8f187260 */ 	lw	$t8,0x7260($t8)
/*  f169bb4:	3c0a800a */ 	lui	$t2,0x800a
/*  f169bb8:	5f00001a */ 	bgtzl	$t8,.L0f169c24
/*  f169bbc:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169bc0:	8d4a19c4 */ 	lw	$t2,0x19c4($t2)
/*  f169bc4:	24010003 */ 	addiu	$at,$zero,0x3
/*  f169bc8:	51410016 */ 	beql	$t2,$at,.L0f169c24
/*  f169bcc:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169bd0:	8e6b000c */ 	lw	$t3,0xc($s3)
.L0f169bd4:
/*  f169bd4:	29610006 */ 	slti	$at,$t3,0x6
/*  f169bd8:	50200012 */ 	beqzl	$at,.L0f169c24
/*  f169bdc:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169be0:	8e790318 */ 	lw	$t9,0x318($s3)
/*  f169be4:	5720000f */ 	bnezl	$t9,.L0f169c24
/*  f169be8:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169bec:	8e6c02ac */ 	lw	$t4,0x2ac($s3)
/*  f169bf0:	24010006 */ 	addiu	$at,$zero,0x6
/*  f169bf4:	3c028008 */ 	lui	$v0,0x8008
/*  f169bf8:	5181000a */ 	beql	$t4,$at,.L0f169c24
/*  f169bfc:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169c00:	8c424050 */ 	lw	$v0,0x4050($v0)
/*  f169c04:	28410006 */ 	slti	$at,$v0,0x6
/*  f169c08:	10200002 */ 	beqz	$at,.L0f169c14
/*  f169c0c:	244d0001 */ 	addiu	$t5,$v0,0x1
/*  f169c10:	ae7e0320 */ 	sw	$s8,0x320($s3)
.L0f169c14:
/*  f169c14:	3c018008 */ 	lui	$at,0x8008
/*  f169c18:	1000001d */ 	beqz	$zero,.L0f169c90
/*  f169c1c:	ac2d4050 */ 	sw	$t5,0x4050($at)
/*  f169c20:	8e700284 */ 	lw	$s0,0x284($s3)
.L0f169c24:
/*  f169c24:	3c0a8007 */ 	lui	$t2,0x8007
/*  f169c28:	8e0e1580 */ 	lw	$t6,0x1580($s0)
/*  f169c2c:	000ec780 */ 	sll	$t8,$t6,0x1e
/*  f169c30:	07030018 */ 	bgezl	$t8,.L0f169c94
/*  f169c34:	8e6a0320 */ 	lw	$t2,0x320($s3)
/*  f169c38:	8d4a5d60 */ 	lw	$t2,0x5d60($t2)
/*  f169c3c:	24010002 */ 	addiu	$at,$zero,0x2
/*  f169c40:	55410014 */ 	bnel	$t2,$at,.L0f169c94
/*  f169c44:	8e6a0320 */ 	lw	$t2,0x320($s3)
/*  f169c48:	8e020000 */ 	lw	$v0,0x0($s0)
/*  f169c4c:	24010002 */ 	addiu	$at,$zero,0x2
/*  f169c50:	53c20010 */ 	beql	$s8,$v0,.L0f169c94
/*  f169c54:	8e6a0320 */ 	lw	$t2,0x320($s3)
/*  f169c58:	1041000d */ 	beq	$v0,$at,.L0f169c90
/*  f169c5c:	3c0b800a */ 	lui	$t3,0x800a
/*  f169c60:	8d6bdfc0 */ 	lw	$t3,-0x2040($t3)
/*  f169c64:	5560000b */ 	bnezl	$t3,.L0f169c94
/*  f169c68:	8e6a0320 */ 	lw	$t2,0x320($s3)
/*  f169c6c:	0fc27ab9 */ 	jal	func0f09eae4
/*  f169c70:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169c74:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169c78:	00026040 */ 	sll	$t4,$v0,0x1
/*  f169c7c:	318d0002 */ 	andi	$t5,$t4,0x2
/*  f169c80:	920e1583 */ 	lbu	$t6,0x1583($s0)
/*  f169c84:	31cffffd */ 	andi	$t7,$t6,0xfffd
/*  f169c88:	01afc025 */ 	or	$t8,$t5,$t7
/*  f169c8c:	a2181583 */ 	sb	$t8,0x1583($s0)
.L0f169c90:
/*  f169c90:	8e6a0320 */ 	lw	$t2,0x320($s3)
.L0f169c94:
/*  f169c94:	02402025 */ 	or	$a0,$s2,$zero
/*  f169c98:	2405ffff */ 	addiu	$a1,$zero,-1
/*  f169c9c:	11400008 */ 	beqz	$t2,.L0f169cc0
/*  f169ca0:	3c0c800a */ 	lui	$t4,0x800a
/*  f169ca4:	0fc5090e */ 	jal	func0f142438
/*  f169ca8:	240600ff */ 	addiu	$a2,$zero,0xff
/*  f169cac:	8e6b0320 */ 	lw	$t3,0x320($s3)
/*  f169cb0:	00409025 */ 	or	$s2,$v0,$zero
/*  f169cb4:	2579ffff */ 	addiu	$t9,$t3,-1
/*  f169cb8:	1000046e */ 	beqz	$zero,.L0f16ae74
/*  f169cbc:	ae790320 */ 	sw	$t9,0x320($s3)
.L0f169cc0:
/*  f169cc0:	8d8cdfc0 */ 	lw	$t4,-0x2040($t4)
/*  f169cc4:	3c188007 */ 	lui	$t8,0x8007
/*  f169cc8:	11800012 */ 	beqz	$t4,.L0f169d14
/*  f169ccc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169cd0:	0c002ccc */ 	jal	func0000b330
/*  f169cd4:	02402025 */ 	or	$a0,$s2,$zero
/*  f169cd8:	0fc572dd */ 	jal	func0f15cb74
/*  f169cdc:	00402025 */ 	or	$a0,$v0,$zero
/*  f169ce0:	3c013f80 */ 	lui	$at,0x3f80
/*  f169ce4:	44816000 */ 	mtc1	$at,$f12
/*  f169ce8:	0c0059d2 */ 	jal	func00016748
/*  f169cec:	00409025 */ 	or	$s2,$v0,$zero
/*  f169cf0:	8e6e0284 */ 	lw	$t6,0x284($s3)
/*  f169cf4:	8dcd1c50 */ 	lw	$t5,0x1c50($t6)
/*  f169cf8:	000d7fc2 */ 	srl	$t7,$t5,0x1f
/*  f169cfc:	11e0045d */ 	beqz	$t7,.L0f16ae74
/*  f169d00:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169d04:	0fc3ef0c */ 	jal	func0f0fbc30
/*  f169d08:	02402025 */ 	or	$a0,$s2,$zero
/*  f169d0c:	10000459 */ 	beqz	$zero,.L0f16ae74
/*  f169d10:	00409025 */ 	or	$s2,$v0,$zero
.L0f169d14:
/*  f169d14:	8f185d60 */ 	lw	$t8,0x5d60($t8)
/*  f169d18:	24010002 */ 	addiu	$at,$zero,0x2
/*  f169d1c:	17010004 */ 	bne	$t8,$at,.L0f169d30
/*  f169d20:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169d24:	0fc2fff3 */ 	jal	func0f0bffcc
/*  f169d28:	02402025 */ 	or	$a0,$s2,$zero
/*  f169d2c:	00409025 */ 	or	$s2,$v0,$zero
.L0f169d30:
/*  f169d30:	0c002ccc */ 	jal	func0000b330
/*  f169d34:	02402025 */ 	or	$a0,$s2,$zero
/*  f169d38:	0fc47e61 */ 	jal	func0f11f984
/*  f169d3c:	00402025 */ 	or	$a0,$v0,$zero
/*  f169d40:	0fc57280 */ 	jal	func0f15ca00
/*  f169d44:	00409025 */ 	or	$s2,$v0,$zero
/*  f169d48:	0fc010c5 */ 	jal	func0f004314
/*  f169d4c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169d50:	0fc18c0b */ 	jal	func0f06302c
/*  f169d54:	02202025 */ 	or	$a0,$s1,$zero
/*  f169d58:	0fc615c8 */ 	jal	func0f185720
/*  f169d5c:	00002025 */ 	or	$a0,$zero,$zero
/*  f169d60:	0fc1806c */ 	jal	func0f0601b0
/*  f169d64:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169d68:	0fc1933a */ 	jal	func0f064ce8
/*  f169d6c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169d70:	0fc18acb */ 	jal	func0f062b2c
/*  f169d74:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169d78:	8e6a006c */ 	lw	$t2,0x6c($s3)
/*  f169d7c:	00002025 */ 	or	$a0,$zero,$zero
/*  f169d80:	00001825 */ 	or	$v1,$zero,$zero
/*  f169d84:	11400003 */ 	beqz	$t2,.L0f169d94
/*  f169d88:	00001025 */ 	or	$v0,$zero,$zero
/*  f169d8c:	10000001 */ 	beqz	$zero,.L0f169d94
/*  f169d90:	03c02025 */ 	or	$a0,$s8,$zero
.L0f169d94:
/*  f169d94:	8e6b0068 */ 	lw	$t3,0x68($s3)
/*  f169d98:	00008025 */ 	or	$s0,$zero,$zero
/*  f169d9c:	11600003 */ 	beqz	$t3,.L0f169dac
/*  f169da0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169da4:	10000001 */ 	beqz	$zero,.L0f169dac
/*  f169da8:	03c01825 */ 	or	$v1,$s8,$zero
.L0f169dac:
/*  f169dac:	8e790064 */ 	lw	$t9,0x64($s3)
/*  f169db0:	13200003 */ 	beqz	$t9,.L0f169dc0
/*  f169db4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169db8:	10000001 */ 	beqz	$zero,.L0f169dc0
/*  f169dbc:	03c01025 */ 	or	$v0,$s8,$zero
.L0f169dc0:
/*  f169dc0:	8e6c0070 */ 	lw	$t4,0x70($s3)
/*  f169dc4:	11800003 */ 	beqz	$t4,.L0f169dd4
/*  f169dc8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169dcc:	10000001 */ 	beqz	$zero,.L0f169dd4
/*  f169dd0:	03c08025 */ 	or	$s0,$s8,$zero
.L0f169dd4:
/*  f169dd4:	02027021 */ 	addu	$t6,$s0,$v0
/*  f169dd8:	01c36821 */ 	addu	$t5,$t6,$v1
/*  f169ddc:	01a47821 */ 	addu	$t7,$t5,$a0
/*  f169de0:	53cf0012 */ 	beql	$s8,$t7,.L0f169e2c
/*  f169de4:	00002025 */ 	or	$a0,$zero,$zero
/*  f169de8:	8e780298 */ 	lw	$t8,0x298($s3)
/*  f169dec:	0703000f */ 	bgezl	$t8,.L0f169e2c
/*  f169df0:	00002025 */ 	or	$a0,$zero,$zero
/*  f169df4:	8e6a029c */ 	lw	$t2,0x29c($s3)
/*  f169df8:	0543000c */ 	bgezl	$t2,.L0f169e2c
/*  f169dfc:	00002025 */ 	or	$a0,$zero,$zero
/*  f169e00:	0fc2866a */ 	jal	getCurrentPlayerWeaponId
/*  f169e04:	00002025 */ 	or	$a0,$zero,$zero
/*  f169e08:	00402025 */ 	or	$a0,$v0,$zero
/*  f169e0c:	0fc2c5f0 */ 	jal	weaponHasFlag
/*  f169e10:	3c054000 */ 	lui	$a1,0x4000
/*  f169e14:	50400050 */ 	beqzl	$v0,.L0f169f58
/*  f169e18:	8e6a0284 */ 	lw	$t2,0x284($s3)
/*  f169e1c:	0fc31ebc */ 	jal	func0f0c7af0
/*  f169e20:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169e24:	1040004b */ 	beqz	$v0,.L0f169f54
/*  f169e28:	00002025 */ 	or	$a0,$zero,$zero
.L0f169e2c:
/*  f169e2c:	00002825 */ 	or	$a1,$zero,$zero
/*  f169e30:	0fc18755 */ 	jal	func0f061d54
/*  f169e34:	00003025 */ 	or	$a2,$zero,$zero
/*  f169e38:	8e6b0284 */ 	lw	$t3,0x284($s3)
/*  f169e3c:	ad621624 */ 	sw	$v0,0x1624($t3)
/*  f169e40:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169e44:	8e041624 */ 	lw	$a0,0x1624($s0)
/*  f169e48:	50800046 */ 	beqzl	$a0,.L0f169f64
/*  f169e4c:	26040638 */ 	addiu	$a0,$s0,0x638
/*  f169e50:	90820000 */ 	lbu	$v0,0x0($a0)
/*  f169e54:	24010003 */ 	addiu	$at,$zero,0x3
/*  f169e58:	10410003 */ 	beq	$v0,$at,.L0f169e68
/*  f169e5c:	24010006 */ 	addiu	$at,$zero,0x6
/*  f169e60:	1441001f */ 	bne	$v0,$at,.L0f169ee0
/*  f169e64:	00000000 */ 	sll	$zero,$zero,0x0
.L0f169e68:
/*  f169e68:	8c820004 */ 	lw	$v0,0x4($a0)
/*  f169e6c:	8c590014 */ 	lw	$t9,0x14($v0)
/*  f169e70:	00196080 */ 	sll	$t4,$t9,0x2
/*  f169e74:	0583003b */ 	bgezl	$t4,.L0f169f64
/*  f169e78:	26040638 */ 	addiu	$a0,$s0,0x638
/*  f169e7c:	8e0e00d8 */ 	lw	$t6,0xd8($s0)
/*  f169e80:	3c0d8007 */ 	lui	$t5,0x8007
/*  f169e84:	55c00014 */ 	bnezl	$t6,.L0f169ed8
/*  f169e88:	ae001624 */ 	sw	$zero,0x1624($s0)
/*  f169e8c:	8dad0764 */ 	lw	$t5,0x764($t5)
/*  f169e90:	55a00011 */ 	bnezl	$t5,.L0f169ed8
/*  f169e94:	ae001624 */ 	sw	$zero,0x1624($s0)
/*  f169e98:	8e020480 */ 	lw	$v0,0x480($s0)
/*  f169e9c:	50400007 */ 	beqzl	$v0,.L0f169ebc
/*  f169ea0:	8e0a1c54 */ 	lw	$t2,0x1c54($s0)
/*  f169ea4:	5040000c */ 	beqzl	$v0,.L0f169ed8
/*  f169ea8:	ae001624 */ 	sw	$zero,0x1624($s0)
/*  f169eac:	804f0037 */ 	lb	$t7,0x37($v0)
/*  f169eb0:	55e00009 */ 	bnezl	$t7,.L0f169ed8
/*  f169eb4:	ae001624 */ 	sw	$zero,0x1624($s0)
/*  f169eb8:	8e0a1c54 */ 	lw	$t2,0x1c54($s0)
.L0f169ebc:
/*  f169ebc:	8e1800c4 */ 	lw	$t8,0xc4($s0)
/*  f169ec0:	01405827 */ 	nor	$t3,$t2,$zero
/*  f169ec4:	030bc824 */ 	and	$t9,$t8,$t3
/*  f169ec8:	332c0008 */ 	andi	$t4,$t9,0x8
/*  f169ecc:	55800025 */ 	bnezl	$t4,.L0f169f64
/*  f169ed0:	26040638 */ 	addiu	$a0,$s0,0x638
/*  f169ed4:	ae001624 */ 	sw	$zero,0x1624($s0)
.L0f169ed8:
/*  f169ed8:	10000021 */ 	beqz	$zero,.L0f169f60
/*  f169edc:	8e700284 */ 	lw	$s0,0x284($s3)
.L0f169ee0:
/*  f169ee0:	53c20006 */ 	beql	$s8,$v0,.L0f169efc
/*  f169ee4:	8c830004 */ 	lw	$v1,0x4($a0)
/*  f169ee8:	12820003 */ 	beq	$s4,$v0,.L0f169ef8
/*  f169eec:	24010002 */ 	addiu	$at,$zero,0x2
/*  f169ef0:	54410016 */ 	bnel	$v0,$at,.L0f169f4c
/*  f169ef4:	ae001624 */ 	sw	$zero,0x1624($s0)
.L0f169ef8:
/*  f169ef8:	8c830004 */ 	lw	$v1,0x4($a0)
.L0f169efc:
/*  f169efc:	8c6e0010 */ 	lw	$t6,0x10($v1)
/*  f169f00:	31cd8000 */ 	andi	$t5,$t6,0x8000
/*  f169f04:	55a00017 */ 	bnezl	$t5,.L0f169f64
/*  f169f08:	26040638 */ 	addiu	$a0,$s0,0x638
/*  f169f0c:	8e6f04b4 */ 	lw	$t7,0x4b4($s3)
/*  f169f10:	24010026 */ 	addiu	$at,$zero,0x26
/*  f169f14:	55e1000a */ 	bnel	$t7,$at,.L0f169f40
/*  f169f18:	ae001624 */ 	sw	$zero,0x1624($s0)
/*  f169f1c:	84620004 */ 	lh	$v0,0x4($v1)
/*  f169f20:	2401014c */ 	addiu	$at,$zero,0x14c
/*  f169f24:	1041000e */ 	beq	$v0,$at,.L0f169f60
/*  f169f28:	240101aa */ 	addiu	$at,$zero,0x1aa
/*  f169f2c:	1041000c */ 	beq	$v0,$at,.L0f169f60
/*  f169f30:	240100b0 */ 	addiu	$at,$zero,0xb0
/*  f169f34:	5041000b */ 	beql	$v0,$at,.L0f169f64
/*  f169f38:	26040638 */ 	addiu	$a0,$s0,0x638
/*  f169f3c:	ae001624 */ 	sw	$zero,0x1624($s0)
.L0f169f40:
/*  f169f40:	10000007 */ 	beqz	$zero,.L0f169f60
/*  f169f44:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169f48:	ae001624 */ 	sw	$zero,0x1624($s0)
.L0f169f4c:
/*  f169f4c:	10000004 */ 	beqz	$zero,.L0f169f60
/*  f169f50:	8e700284 */ 	lw	$s0,0x284($s3)
.L0f169f54:
/*  f169f54:	8e6a0284 */ 	lw	$t2,0x284($s3)
.L0f169f58:
/*  f169f58:	ad401624 */ 	sw	$zero,0x1624($t2)
/*  f169f5c:	8e700284 */ 	lw	$s0,0x284($s3)
.L0f169f60:
/*  f169f60:	26040638 */ 	addiu	$a0,$s0,0x638
.L0f169f64:
/*  f169f64:	0fc2c7aa */ 	jal	func0f0b1ea8
/*  f169f68:	3c050008 */ 	lui	$a1,0x8
/*  f169f6c:	10400005 */ 	beqz	$v0,.L0f169f84
/*  f169f70:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169f74:	0fc5a470 */ 	jal	func0f1691c0
/*  f169f78:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169f7c:	10000033 */ 	beqz	$zero,.L0f16a04c
/*  f169f80:	8e700284 */ 	lw	$s0,0x284($s3)
.L0f169f84:
/*  f169f84:	0fc2866a */ 	jal	getCurrentPlayerWeaponId
/*  f169f88:	00002025 */ 	or	$a0,$zero,$zero
/*  f169f8c:	00402025 */ 	or	$a0,$v0,$zero
/*  f169f90:	0fc2c5f0 */ 	jal	weaponHasFlag
/*  f169f94:	3c054000 */ 	lui	$a1,0x4000
/*  f169f98:	5040002c */ 	beqzl	$v0,.L0f16a04c
/*  f169f9c:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f169fa0:	0fc6830c */ 	jal	func0f1a0c30
/*  f169fa4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169fa8:	5040000f */ 	beqzl	$v0,.L0f169fe8
/*  f169fac:	8e640284 */ 	lw	$a0,0x284($s3)
/*  f169fb0:	8e780284 */ 	lw	$t8,0x284($s3)
/*  f169fb4:	8f0b1624 */ 	lw	$t3,0x1624($t8)
/*  f169fb8:	5160000b */ 	beqzl	$t3,.L0f169fe8
/*  f169fbc:	8e640284 */ 	lw	$a0,0x284($s3)
/*  f169fc0:	0fc31ebc */ 	jal	func0f0c7af0
/*  f169fc4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f169fc8:	50400007 */ 	beqzl	$v0,.L0f169fe8
/*  f169fcc:	8e640284 */ 	lw	$a0,0x284($s3)
/*  f169fd0:	8e790284 */ 	lw	$t9,0x284($s3)
/*  f169fd4:	0fc68249 */ 	jal	func0f1a0924
/*  f169fd8:	8f241624 */ 	lw	$a0,0x1624($t9)
/*  f169fdc:	1000000a */ 	beqz	$zero,.L0f16a008
/*  f169fe0:	00008825 */ 	or	$s1,$zero,$zero
/*  f169fe4:	8e640284 */ 	lw	$a0,0x284($s3)
.L0f169fe8:
/*  f169fe8:	02e02825 */ 	or	$a1,$s7,$zero
/*  f169fec:	0fc5a23f */ 	jal	func0f1688fc
/*  f169ff0:	24841624 */ 	addiu	$a0,$a0,0x1624
/*  f169ff4:	54400004 */ 	bnezl	$v0,.L0f16a008
/*  f169ff8:	00008825 */ 	or	$s1,$zero,$zero
/*  f169ffc:	8e6c0284 */ 	lw	$t4,0x284($s3)
/*  f16a000:	ad801624 */ 	sw	$zero,0x1624($t4)
/*  f16a004:	00008825 */ 	or	$s1,$zero,$zero
.L0f16a008:
/*  f16a008:	00008025 */ 	or	$s0,$zero,$zero
.L0f16a00c:
/*  f16a00c:	8e6e0284 */ 	lw	$t6,0x284($s3)
/*  f16a010:	02202825 */ 	or	$a1,$s1,$zero
/*  f16a014:	01d02021 */ 	addu	$a0,$t6,$s0
/*  f16a018:	0fc5a23f */ 	jal	func0f1688fc
/*  f16a01c:	24841630 */ 	addiu	$a0,$a0,0x1630
/*  f16a020:	14400007 */ 	bnez	$v0,.L0f16a040
/*  f16a024:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f16a028:	8e6d0284 */ 	lw	$t5,0x284($s3)
/*  f16a02c:	01b07821 */ 	addu	$t7,$t5,$s0
/*  f16a030:	a5f71634 */ 	sh	$s7,0x1634($t7)
/*  f16a034:	8e6a0284 */ 	lw	$t2,0x284($s3)
/*  f16a038:	0150c021 */ 	addu	$t8,$t2,$s0
/*  f16a03c:	a7161638 */ 	sh	$s6,0x1638($t8)
.L0f16a040:
/*  f16a040:	1634fff2 */ 	bne	$s1,$s4,.L0f16a00c
/*  f16a044:	2610000c */ 	addiu	$s0,$s0,0xc
/*  f16a048:	8e700284 */ 	lw	$s0,0x284($s3)
.L0f16a04c:
/*  f16a04c:	8e020480 */ 	lw	$v0,0x480($s0)
/*  f16a050:	50400071 */ 	beqzl	$v0,.L0f16a218
/*  f16a054:	8e1800d0 */ 	lw	$t8,0xd0($s0)
/*  f16a058:	8e191c54 */ 	lw	$t9,0x1c54($s0)
/*  f16a05c:	8e0b00c4 */ 	lw	$t3,0xc4($s0)
/*  f16a060:	03206027 */ 	nor	$t4,$t9,$zero
/*  f16a064:	016c7024 */ 	and	$t6,$t3,$t4
/*  f16a068:	31cd0004 */ 	andi	$t5,$t6,0x4
/*  f16a06c:	51a0006a */ 	beqzl	$t5,.L0f16a218
/*  f16a070:	8e1800d0 */ 	lw	$t8,0xd0($s0)
/*  f16a074:	804f0039 */ 	lb	$t7,0x39($v0)
/*  f16a078:	51e00067 */ 	beqzl	$t7,.L0f16a218
/*  f16a07c:	8e1800d0 */ 	lw	$t8,0xd0($s0)
/*  f16a080:	9043006b */ 	lbu	$v1,0x6b($v0)
/*  f16a084:	3c0143c8 */ 	lui	$at,0x43c8
/*  f16a088:	14600010 */ 	bnez	$v1,.L0f16a0cc
/*  f16a08c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a090:	44816000 */ 	mtc1	$at,$f12
/*  f16a094:	0fc25822 */ 	jal	func0f096088
/*  f16a098:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a09c:	3c048009 */ 	lui	$a0,0x8009
/*  f16a0a0:	8c845200 */ 	lw	$a0,0x5200($a0)
/*  f16a0a4:	240504ff */ 	addiu	$a1,$zero,0x4ff
/*  f16a0a8:	00003025 */ 	or	$a2,$zero,$zero
/*  f16a0ac:	02e03825 */ 	or	$a3,$s7,$zero
/*  f16a0b0:	afb70010 */ 	sw	$s7,0x10($sp)
/*  f16a0b4:	e7b40014 */ 	swc1	$f20,0x14($sp)
/*  f16a0b8:	afb70018 */ 	sw	$s7,0x18($sp)
/*  f16a0bc:	0c004241 */ 	jal	func00010904
/*  f16a0c0:	afb7001c */ 	sw	$s7,0x1c($sp)
/*  f16a0c4:	10000053 */ 	beqz	$zero,.L0f16a214
/*  f16a0c8:	8e700284 */ 	lw	$s0,0x284($s3)
.L0f16a0cc:
/*  f16a0cc:	17c30032 */ 	bne	$s8,$v1,.L0f16a198
/*  f16a0d0:	3c188008 */ 	lui	$t8,%hi(var80084088)
/*  f16a0d4:	8e0a0490 */ 	lw	$t2,0x490($s0)
/*  f16a0d8:	3c048009 */ 	lui	$a0,0x8009
/*  f16a0dc:	24058052 */ 	addiu	$a1,$zero,-32686
/*  f16a0e0:	11400024 */ 	beqz	$t2,.L0f16a174
/*  f16a0e4:	00003025 */ 	or	$a2,$zero,$zero
/*  f16a0e8:	3c048009 */ 	lui	$a0,0x8009
/*  f16a0ec:	8c845200 */ 	lw	$a0,0x5200($a0)
/*  f16a0f0:	24058057 */ 	addiu	$a1,$zero,-32681
/*  f16a0f4:	00003025 */ 	or	$a2,$zero,$zero
/*  f16a0f8:	02e03825 */ 	or	$a3,$s7,$zero
/*  f16a0fc:	afb70010 */ 	sw	$s7,0x10($sp)
/*  f16a100:	e7b40014 */ 	swc1	$f20,0x14($sp)
/*  f16a104:	afb70018 */ 	sw	$s7,0x18($sp)
/*  f16a108:	0c004241 */ 	jal	func00010904
/*  f16a10c:	afb7001c */ 	sw	$s7,0x1c($sp)
/*  f16a110:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f16a114:	240f001c */ 	addiu	$t7,$zero,0x1c
/*  f16a118:	00002825 */ 	or	$a1,$zero,$zero
/*  f16a11c:	8e180490 */ 	lw	$t8,0x490($s0)
/*  f16a120:	27a700e0 */ 	addiu	$a3,$sp,0xe0
/*  f16a124:	2719ffff */ 	addiu	$t9,$t8,-1
/*  f16a128:	ae190490 */ 	sw	$t9,0x490($s0)
/*  f16a12c:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f16a130:	8e0b0480 */ 	lw	$t3,0x480($s0)
/*  f16a134:	c5700004 */ 	lwc1	$f16,0x4($t3)
/*  f16a138:	e7b000e0 */ 	swc1	$f16,0xe0($sp)
/*  f16a13c:	8e0c0480 */ 	lw	$t4,0x480($s0)
/*  f16a140:	c5920008 */ 	lwc1	$f18,0x8($t4)
/*  f16a144:	e7b200e4 */ 	swc1	$f18,0xe4($sp)
/*  f16a148:	8e0e0480 */ 	lw	$t6,0x480($s0)
/*  f16a14c:	c5c4000c */ 	lwc1	$f4,0xc($t6)
/*  f16a150:	e7a400e8 */ 	swc1	$f4,0xe8($sp)
/*  f16a154:	8e0d0480 */ 	lw	$t5,0x480($s0)
/*  f16a158:	8da40000 */ 	lw	$a0,0x0($t5)
/*  f16a15c:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f16a160:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f16a164:	0fc244b7 */ 	jal	func0f0912dc
/*  f16a168:	24860008 */ 	addiu	$a2,$a0,0x8
/*  f16a16c:	10000008 */ 	beqz	$zero,.L0f16a190
/*  f16a170:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16a174:
/*  f16a174:	8c845200 */ 	lw	$a0,0x5200($a0)
/*  f16a178:	02e03825 */ 	or	$a3,$s7,$zero
/*  f16a17c:	afb70010 */ 	sw	$s7,0x10($sp)
/*  f16a180:	e7b40014 */ 	swc1	$f20,0x14($sp)
/*  f16a184:	afb70018 */ 	sw	$s7,0x18($sp)
/*  f16a188:	0c004241 */ 	jal	func00010904
/*  f16a18c:	afb7001c */ 	sw	$s7,0x1c($sp)
.L0f16a190:
/*  f16a190:	10000020 */ 	beqz	$zero,.L0f16a214
/*  f16a194:	8e700284 */ 	lw	$s0,0x284($s3)
.L0f16a198:
/*  f16a198:	27184088 */ 	addiu	$t8,$t8,%lo(var80084088)
/*  f16a19c:	8f010000 */ 	lw	$at,0x0($t8)
/*  f16a1a0:	27aa00d4 */ 	addiu	$t2,$sp,0xd4
/*  f16a1a4:	8f0c0004 */ 	lw	$t4,0x4($t8)
/*  f16a1a8:	ad410000 */ 	sw	$at,0x0($t2)
/*  f16a1ac:	8f010008 */ 	lw	$at,0x8($t8)
/*  f16a1b0:	3c0e8008 */ 	lui	$t6,0x8008
/*  f16a1b4:	ad4c0004 */ 	sw	$t4,0x4($t2)
/*  f16a1b8:	ad410008 */ 	sw	$at,0x8($t2)
/*  f16a1bc:	8dce4094 */ 	lw	$t6,0x4094($t6)
/*  f16a1c0:	24070017 */ 	addiu	$a3,$zero,0x17
/*  f16a1c4:	afae00d0 */ 	sw	$t6,0xd0($sp)
/*  f16a1c8:	8e0d0480 */ 	lw	$t5,0x480($s0)
/*  f16a1cc:	8da40000 */ 	lw	$a0,0x0($t5)
/*  f16a1d0:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f16a1d4:	24850008 */ 	addiu	$a1,$a0,0x8
/*  f16a1d8:	0fc4a640 */ 	jal	func0f129900
/*  f16a1dc:	24860028 */ 	addiu	$a2,$a0,0x28
/*  f16a1e0:	8e6f0284 */ 	lw	$t7,0x284($s3)
/*  f16a1e4:	27aa00d0 */ 	addiu	$t2,$sp,0xd0
/*  f16a1e8:	27a500d4 */ 	addiu	$a1,$sp,0xd4
/*  f16a1ec:	8deb0480 */ 	lw	$t3,0x480($t7)
/*  f16a1f0:	24060000 */ 	addiu	$a2,$zero,0x0
/*  f16a1f4:	00003825 */ 	or	$a3,$zero,$zero
/*  f16a1f8:	8d790000 */ 	lw	$t9,0x0($t3)
/*  f16a1fc:	8f240004 */ 	lw	$a0,0x4($t9)
/*  f16a200:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f16a204:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f16a208:	0fc0c66a */ 	jal	func0f0319a8
/*  f16a20c:	afaa0010 */ 	sw	$t2,0x10($sp)
/*  f16a210:	8e700284 */ 	lw	$s0,0x284($s3)
.L0f16a214:
/*  f16a214:	8e1800d0 */ 	lw	$t8,0xd0($s0)
.L0f16a218:
/*  f16a218:	5300000c */ 	beqzl	$t8,.L0f16a24c
/*  f16a21c:	8e020480 */ 	lw	$v0,0x480($s0)
/*  f16a220:	0fc18b9d */ 	jal	func0f062e74
/*  f16a224:	00002025 */ 	or	$a0,$zero,$zero
/*  f16a228:	10400012 */ 	beqz	$v0,.L0f16a274
/*  f16a22c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a230:	0fc28886 */ 	jal	func0f0a2218
/*  f16a234:	00002025 */ 	or	$a0,$zero,$zero
/*  f16a238:	0fc28886 */ 	jal	func0f0a2218
/*  f16a23c:	03c02025 */ 	or	$a0,$s8,$zero
/*  f16a240:	1000000c */ 	beqz	$zero,.L0f16a274
/*  f16a244:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a248:	8e020480 */ 	lw	$v0,0x480($s0)
.L0f16a24c:
/*  f16a24c:	10400009 */ 	beqz	$v0,.L0f16a274
/*  f16a250:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a254:	804c0037 */ 	lb	$t4,0x37($v0)
/*  f16a258:	11800006 */ 	beqz	$t4,.L0f16a274
/*  f16a25c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a260:	904e006a */ 	lbu	$t6,0x6a($v0)
/*  f16a264:	11c00003 */ 	beqz	$t6,.L0f16a274
/*  f16a268:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a26c:	0fc18b9d */ 	jal	func0f062e74
/*  f16a270:	03c02025 */ 	or	$a0,$s8,$zero
.L0f16a274:
/*  f16a274:	0fc1907d */ 	jal	func0f0641f4
/*  f16a278:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a27c:	0fc572b8 */ 	jal	func0f15cae0
/*  f16a280:	02402025 */ 	or	$a0,$s2,$zero
/*  f16a284:	3c108007 */ 	lui	$s0,0x8007
/*  f16a288:	8e105d68 */ 	lw	$s0,0x5d68($s0)
/*  f16a28c:	00409025 */ 	or	$s2,$v0,$zero
/*  f16a290:	3a0d000f */ 	xori	$t5,$s0,0xf
/*  f16a294:	2db00001 */ 	sltiu	$s0,$t5,0x1
/*  f16a298:	16000005 */ 	bnez	$s0,.L0f16a2b0
/*  f16a29c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a2a0:	3c108006 */ 	lui	$s0,0x8006
/*  f16a2a4:	8e10f020 */ 	lw	$s0,-0xfe0($s0)
/*  f16a2a8:	0010782b */ 	sltu	$t7,$zero,$s0
/*  f16a2ac:	01e08025 */ 	or	$s0,$t7,$zero
.L0f16a2b0:
/*  f16a2b0:	0fc0a126 */ 	jal	func0f028498
/*  f16a2b4:	02002025 */ 	or	$a0,$s0,$zero
/*  f16a2b8:	0fc1fdb4 */ 	jal	func0f07f6d0
/*  f16a2bc:	02402025 */ 	or	$a0,$s2,$zero
/*  f16a2c0:	0fc549b9 */ 	jal	func0f1526e4
/*  f16a2c4:	00402025 */ 	or	$a0,$v0,$zero
/*  f16a2c8:	0fc4c011 */ 	jal	func0f130044
/*  f16a2cc:	00402025 */ 	or	$a0,$v0,$zero
/*  f16a2d0:	0fc4c418 */ 	jal	func0f131060
/*  f16a2d4:	00402025 */ 	or	$a0,$v0,$zero
/*  f16a2d8:	3c0b8006 */ 	lui	$t3,0x8006
/*  f16a2dc:	8d6b1640 */ 	lw	$t3,0x1640($t3)
/*  f16a2e0:	00409025 */ 	or	$s2,$v0,$zero
/*  f16a2e4:	11600004 */ 	beqz	$t3,.L0f16a2f8
/*  f16a2e8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a2ec:	0fc0285a */ 	jal	func0f00a168
/*  f16a2f0:	00402025 */ 	or	$a0,$v0,$zero
/*  f16a2f4:	00409025 */ 	or	$s2,$v0,$zero
.L0f16a2f8:
/*  f16a2f8:	3c198007 */ 	lui	$t9,0x8007
/*  f16a2fc:	8f395d60 */ 	lw	$t9,0x5d60($t9)
/*  f16a300:	24010002 */ 	addiu	$at,$zero,0x2
/*  f16a304:	17210005 */ 	bne	$t9,$at,.L0f16a31c
/*  f16a308:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a30c:	0fc301f2 */ 	jal	func0f0c07c8
/*  f16a310:	02402025 */ 	or	$a0,$s2,$zero
/*  f16a314:	1000000b */ 	beqz	$zero,.L0f16a344
/*  f16a318:	00409025 */ 	or	$s2,$v0,$zero
.L0f16a31c:
/*  f16a31c:	0fc2bbb6 */ 	jal	func0f0aeed8
/*  f16a320:	02402025 */ 	or	$a0,$s2,$zero
/*  f16a324:	8e6a0284 */ 	lw	$t2,0x284($s3)
/*  f16a328:	00409025 */ 	or	$s2,$v0,$zero
/*  f16a32c:	95580010 */ 	lhu	$t8,0x10($t2)
/*  f16a330:	13d80004 */ 	beq	$s8,$t8,.L0f16a344
/*  f16a334:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a338:	0fc56c45 */ 	jal	func0f15b114
/*  f16a33c:	00402025 */ 	or	$a0,$v0,$zero
/*  f16a340:	00409025 */ 	or	$s2,$v0,$zero
.L0f16a344:
/*  f16a344:	3c0c8007 */ 	lui	$t4,0x8007
/*  f16a348:	8d8c5d78 */ 	lw	$t4,0x5d78($t4)
/*  f16a34c:	1d800288 */ 	bgtz	$t4,.L0f16ad70
/*  f16a350:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a354:	8e6e02ac */ 	lw	$t6,0x2ac($s3)
/*  f16a358:	24010006 */ 	addiu	$at,$zero,0x6
/*  f16a35c:	afa000cc */ 	sw	$zero,0xcc($sp)
/*  f16a360:	15c10109 */ 	bne	$t6,$at,.L0f16a788
/*  f16a364:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a368:	8e6d04b4 */ 	lw	$t5,0x4b4($s3)
/*  f16a36c:	2401004e */ 	addiu	$at,$zero,0x4e
/*  f16a370:	3c04800a */ 	lui	$a0,0x800a
/*  f16a374:	15a10095 */ 	bne	$t5,$at,.L0f16a5cc
/*  f16a378:	00008025 */ 	or	$s0,$zero,$zero
/*  f16a37c:	44800000 */ 	mtc1	$zero,$f0
/*  f16a380:	8484de18 */ 	lh	$a0,-0x21e8($a0)
/*  f16a384:	0c008dda */ 	jal	func00023768
/*  f16a388:	e7a000c4 */ 	swc1	$f0,0xc4($sp)
/*  f16a38c:	3c03800a */ 	lui	$v1,0x800a
/*  f16a390:	8c63de10 */ 	lw	$v1,-0x21f0($v1)
/*  f16a394:	c7a000c4 */ 	lwc1	$f0,0xc4($sp)
/*  f16a398:	3c0f800a */ 	lui	$t7,0x800a
/*  f16a39c:	2861005a */ 	slti	$at,$v1,0x5a
/*  f16a3a0:	10200009 */ 	beqz	$at,.L0f16a3c8
/*  f16a3a4:	2444ffff */ 	addiu	$a0,$v0,-1
/*  f16a3a8:	44833000 */ 	mtc1	$v1,$f6
/*  f16a3ac:	3c0142b4 */ 	lui	$at,0x42b4
/*  f16a3b0:	44815000 */ 	mtc1	$at,$f10
/*  f16a3b4:	46803220 */ 	cvt.s.w	$f8,$f6
/*  f16a3b8:	3c013f80 */ 	lui	$at,0x3f80
/*  f16a3bc:	44819000 */ 	mtc1	$at,$f18
/*  f16a3c0:	460a4403 */ 	div.s	$f16,$f8,$f10
/*  f16a3c4:	46109001 */ 	sub.s	$f0,$f18,$f16
.L0f16a3c8:
/*  f16a3c8:	85efde18 */ 	lh	$t7,-0x21e8($t7)
/*  f16a3cc:	2401046c */ 	addiu	$at,$zero,0x46c
/*  f16a3d0:	2498ffe2 */ 	addiu	$t8,$a0,-30
/*  f16a3d4:	11e1000d */ 	beq	$t7,$at,.L0f16a40c
/*  f16a3d8:	3c0de700 */ 	lui	$t5,0xe700
/*  f16a3dc:	2444ffff */ 	addiu	$a0,$v0,-1
/*  f16a3e0:	248bffa6 */ 	addiu	$t3,$a0,-90
/*  f16a3e4:	0163082a */ 	slt	$at,$t3,$v1
/*  f16a3e8:	10200012 */ 	beqz	$at,.L0f16a434
/*  f16a3ec:	0064c823 */ 	subu	$t9,$v1,$a0
/*  f16a3f0:	272a005a */ 	addiu	$t2,$t9,0x5a
/*  f16a3f4:	448a2000 */ 	mtc1	$t2,$f4
/*  f16a3f8:	3c0142b4 */ 	lui	$at,0x42b4
/*  f16a3fc:	44814000 */ 	mtc1	$at,$f8
/*  f16a400:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f16a404:	1000000b */ 	beqz	$zero,.L0f16a434
/*  f16a408:	46083003 */ 	div.s	$f0,$f6,$f8
.L0f16a40c:
/*  f16a40c:	0303082a */ 	slt	$at,$t8,$v1
/*  f16a410:	10200008 */ 	beqz	$at,.L0f16a434
/*  f16a414:	00646023 */ 	subu	$t4,$v1,$a0
/*  f16a418:	258e001e */ 	addiu	$t6,$t4,0x1e
/*  f16a41c:	448e5000 */ 	mtc1	$t6,$f10
/*  f16a420:	3c0141f0 */ 	lui	$at,0x41f0
/*  f16a424:	44818000 */ 	mtc1	$at,$f16
/*  f16a428:	468054a0 */ 	cvt.s.w	$f18,$f10
/*  f16a42c:	2410ff00 */ 	addiu	$s0,$zero,-256
/*  f16a430:	46109003 */ 	div.s	$f0,$f18,$f16
.L0f16a434:
/*  f16a434:	44802000 */ 	mtc1	$zero,$f4
/*  f16a438:	3c0fb900 */ 	lui	$t7,0xb900
/*  f16a43c:	3c0b0050 */ 	lui	$t3,0x50
/*  f16a440:	4600203c */ 	c.lt.s	$f4,$f0
/*  f16a444:	02401025 */ 	or	$v0,$s2,$zero
/*  f16a448:	356b4340 */ 	ori	$t3,$t3,0x4340
/*  f16a44c:	35ef031d */ 	ori	$t7,$t7,0x31d
/*  f16a450:	4500005e */ 	bc1f	.L0f16a5cc
/*  f16a454:	3c19fcff */ 	lui	$t9,0xfcff
/*  f16a458:	3c01437f */ 	lui	$at,0x437f
/*  f16a45c:	44813000 */ 	mtc1	$at,$f6
/*  f16a460:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f16a464:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f16a468:	46003202 */ 	mul.s	$f8,$f6,$f0
/*  f16a46c:	02401825 */ 	or	$v1,$s2,$zero
/*  f16a470:	ac4d0000 */ 	sw	$t5,0x0($v0)
/*  f16a474:	ac400004 */ 	sw	$zero,0x4($v0)
/*  f16a478:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f16a47c:	02402025 */ 	or	$a0,$s2,$zero
/*  f16a480:	ac6b0004 */ 	sw	$t3,0x4($v1)
/*  f16a484:	444cf800 */ 	cfc1	$t4,$31
/*  f16a488:	44cef800 */ 	ctc1	$t6,$31
/*  f16a48c:	ac6f0000 */ 	sw	$t7,0x0($v1)
/*  f16a490:	3c0afffd */ 	lui	$t2,0xfffd
/*  f16a494:	460042a4 */ 	cvt.w.s	$f10,$f8
/*  f16a498:	354af6fb */ 	ori	$t2,$t2,0xf6fb
/*  f16a49c:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f16a4a0:	3739ffff */ 	ori	$t9,$t9,0xffff
/*  f16a4a4:	444ef800 */ 	cfc1	$t6,$31
/*  f16a4a8:	ac990000 */ 	sw	$t9,0x0($a0)
/*  f16a4ac:	ac8a0004 */ 	sw	$t2,0x4($a0)
/*  f16a4b0:	02402825 */ 	or	$a1,$s2,$zero
/*  f16a4b4:	3c18fa00 */ 	lui	$t8,0xfa00
/*  f16a4b8:	31ce0078 */ 	andi	$t6,$t6,0x78
/*  f16a4bc:	acb80000 */ 	sw	$t8,0x0($a1)
/*  f16a4c0:	11c00013 */ 	beqz	$t6,.L0f16a510
/*  f16a4c4:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f16a4c8:	3c014f00 */ 	lui	$at,0x4f00
/*  f16a4cc:	44815000 */ 	mtc1	$at,$f10
/*  f16a4d0:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f16a4d4:	460a4281 */ 	sub.s	$f10,$f8,$f10
/*  f16a4d8:	44cef800 */ 	ctc1	$t6,$31
/*  f16a4dc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a4e0:	460052a4 */ 	cvt.w.s	$f10,$f10
/*  f16a4e4:	444ef800 */ 	cfc1	$t6,$31
/*  f16a4e8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a4ec:	31ce0078 */ 	andi	$t6,$t6,0x78
/*  f16a4f0:	15c00005 */ 	bnez	$t6,.L0f16a508
/*  f16a4f4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a4f8:	440e5000 */ 	mfc1	$t6,$f10
/*  f16a4fc:	3c018000 */ 	lui	$at,0x8000
/*  f16a500:	10000007 */ 	beqz	$zero,.L0f16a520
/*  f16a504:	01c17025 */ 	or	$t6,$t6,$at
.L0f16a508:
/*  f16a508:	10000005 */ 	beqz	$zero,.L0f16a520
/*  f16a50c:	240effff */ 	addiu	$t6,$zero,-1
.L0f16a510:
/*  f16a510:	440e5000 */ 	mfc1	$t6,$f10
/*  f16a514:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a518:	05c0fffb */ 	bltz	$t6,.L0f16a508
/*  f16a51c:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16a520:
/*  f16a520:	020e6825 */ 	or	$t5,$s0,$t6
/*  f16a524:	acad0004 */ 	sw	$t5,0x4($a1)
/*  f16a528:	44ccf800 */ 	ctc1	$t4,$31
/*  f16a52c:	afb200a8 */ 	sw	$s2,0xa8($sp)
/*  f16a530:	0c002f22 */ 	jal	func0000bc88
/*  f16a534:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f16a538:	0c002f40 */ 	jal	func0000bd00
/*  f16a53c:	a7a2008a */ 	sh	$v0,0x8a($sp)
/*  f16a540:	00028400 */ 	sll	$s0,$v0,0x10
/*  f16a544:	00107c03 */ 	sra	$t7,$s0,0x10
/*  f16a548:	0c002f44 */ 	jal	func0000bd10
/*  f16a54c:	01e08025 */ 	or	$s0,$t7,$zero
/*  f16a550:	00028c00 */ 	sll	$s1,$v0,0x10
/*  f16a554:	00115c03 */ 	sra	$t3,$s1,0x10
/*  f16a558:	0c002f26 */ 	jal	func0000bc98
/*  f16a55c:	01608825 */ 	or	$s1,$t3,$zero
/*  f16a560:	87ae008a */ 	lh	$t6,0x8a($sp)
/*  f16a564:	0051c821 */ 	addu	$t9,$v0,$s1
/*  f16a568:	332a03ff */ 	andi	$t2,$t9,0x3ff
/*  f16a56c:	000ac080 */ 	sll	$t8,$t2,0x2
/*  f16a570:	020e6821 */ 	addu	$t5,$s0,$t6
/*  f16a574:	31af03ff */ 	andi	$t7,$t5,0x3ff
/*  f16a578:	3c01f600 */ 	lui	$at,0xf600
/*  f16a57c:	8faa00a8 */ 	lw	$t2,0xa8($sp)
/*  f16a580:	03016025 */ 	or	$t4,$t8,$at
/*  f16a584:	000f5b80 */ 	sll	$t3,$t7,0xe
/*  f16a588:	018bc825 */ 	or	$t9,$t4,$t3
/*  f16a58c:	0c002f40 */ 	jal	func0000bd00
/*  f16a590:	ad590000 */ 	sw	$t9,0x0($t2)
/*  f16a594:	00028c00 */ 	sll	$s1,$v0,0x10
/*  f16a598:	0011c403 */ 	sra	$t8,$s1,0x10
/*  f16a59c:	0c002f44 */ 	jal	func0000bd10
/*  f16a5a0:	03008825 */ 	or	$s1,$t8,$zero
/*  f16a5a4:	304e03ff */ 	andi	$t6,$v0,0x3ff
/*  f16a5a8:	322f03ff */ 	andi	$t7,$s1,0x3ff
/*  f16a5ac:	8fb900a8 */ 	lw	$t9,0xa8($sp)
/*  f16a5b0:	000f6380 */ 	sll	$t4,$t7,0xe
/*  f16a5b4:	000e6880 */ 	sll	$t5,$t6,0x2
/*  f16a5b8:	01ac5825 */ 	or	$t3,$t5,$t4
/*  f16a5bc:	02402025 */ 	or	$a0,$s2,$zero
/*  f16a5c0:	0fc54e0e */ 	jal	func0f153838
/*  f16a5c4:	af2b0004 */ 	sw	$t3,0x4($t9)
/*  f16a5c8:	00409025 */ 	or	$s2,$v0,$zero
.L0f16a5cc:
/*  f16a5cc:	3c10800a */ 	lui	$s0,0x800a
/*  f16a5d0:	8610de18 */ 	lh	$s0,-0x21e8($s0)
/*  f16a5d4:	24010181 */ 	addiu	$at,$zero,0x181
/*  f16a5d8:	3c048008 */ 	lui	$a0,0x8008
/*  f16a5dc:	12010011 */ 	beq	$s0,$at,.L0f16a624
/*  f16a5e0:	24010183 */ 	addiu	$at,$zero,0x183
/*  f16a5e4:	1201000f */ 	beq	$s0,$at,.L0f16a624
/*  f16a5e8:	24010188 */ 	addiu	$at,$zero,0x188
/*  f16a5ec:	1201000d */ 	beq	$s0,$at,.L0f16a624
/*  f16a5f0:	240101e5 */ 	addiu	$at,$zero,0x1e5
/*  f16a5f4:	16010064 */ 	bne	$s0,$at,.L0f16a788
/*  f16a5f8:	3c03800a */ 	lui	$v1,0x800a
/*  f16a5fc:	8c63de10 */ 	lw	$v1,-0x21f0($v1)
/*  f16a600:	28610348 */ 	slti	$at,$v1,0x348
/*  f16a604:	14200060 */ 	bnez	$at,.L0f16a788
/*  f16a608:	28610583 */ 	slti	$at,$v1,0x583
/*  f16a60c:	1020005e */ 	beqz	$at,.L0f16a788
/*  f16a610:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a614:	0fc51f89 */ 	jal	func0f147e24
/*  f16a618:	02402025 */ 	or	$a0,$s2,$zero
/*  f16a61c:	1000005a */ 	beqz	$zero,.L0f16a788
/*  f16a620:	00409025 */ 	or	$s2,$v0,$zero
.L0f16a624:
/*  f16a624:	8c844098 */ 	lw	$a0,0x4098($a0)
/*  f16a628:	00008025 */ 	or	$s0,$zero,$zero
/*  f16a62c:	afbe00cc */ 	sw	$s8,0xcc($sp)
/*  f16a630:	1480000b */ 	bnez	$a0,.L0f16a660
/*  f16a634:	2405059f */ 	addiu	$a1,$zero,0x59f
/*  f16a638:	3c048009 */ 	lui	$a0,0x8009
/*  f16a63c:	3c068008 */ 	lui	$a2,%hi(var80084098)
/*  f16a640:	24c64098 */ 	addiu	$a2,$a2,%lo(var80084098)
/*  f16a644:	8c845200 */ 	lw	$a0,0x5200($a0)
/*  f16a648:	02e03825 */ 	or	$a3,$s7,$zero
/*  f16a64c:	afb70010 */ 	sw	$s7,0x10($sp)
/*  f16a650:	e7b40014 */ 	swc1	$f20,0x14($sp)
/*  f16a654:	afb70018 */ 	sw	$s7,0x18($sp)
/*  f16a658:	0c004241 */ 	jal	func00010904
/*  f16a65c:	afb7001c */ 	sw	$s7,0x1c($sp)
.L0f16a660:
/*  f16a660:	3c0a8008 */ 	lui	$t2,0x8008
/*  f16a664:	8d4a409c */ 	lw	$t2,0x409c($t2)
/*  f16a668:	8e780000 */ 	lw	$t8,0x0($s3)
/*  f16a66c:	3c018008 */ 	lui	$at,0x8008
/*  f16a670:	01587023 */ 	subu	$t6,$t2,$t8
/*  f16a674:	05c1000b */ 	bgez	$t6,.L0f16a6a4
/*  f16a678:	ac2e409c */ 	sw	$t6,0x409c($at)
/*  f16a67c:	0c004b70 */ 	jal	random
/*  f16a680:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a684:	240100c8 */ 	addiu	$at,$zero,0xc8
/*  f16a688:	0041001b */ 	divu	$zero,$v0,$at
/*  f16a68c:	00007810 */ 	mfhi	$t7
/*  f16a690:	25ed0028 */ 	addiu	$t5,$t7,0x28
/*  f16a694:	3c018008 */ 	lui	$at,0x8008
/*  f16a698:	ac2d409c */ 	sw	$t5,0x409c($at)
/*  f16a69c:	3c018008 */ 	lui	$at,0x8008
/*  f16a6a0:	a02040a0 */ 	sb	$zero,0x40a0($at)
.L0f16a6a4:
/*  f16a6a4:	02402025 */ 	or	$a0,$s2,$zero
/*  f16a6a8:	2405ffff */ 	addiu	$a1,$zero,-1
/*  f16a6ac:	0fc50a63 */ 	jal	func0f14298c
/*  f16a6b0:	2406ffff */ 	addiu	$a2,$zero,-1
/*  f16a6b4:	3c0c8008 */ 	lui	$t4,0x8008
/*  f16a6b8:	8d8c409c */ 	lw	$t4,0x409c($t4)
/*  f16a6bc:	00409025 */ 	or	$s2,$v0,$zero
/*  f16a6c0:	3c0b8008 */ 	lui	$t3,0x8008
/*  f16a6c4:	2981000f */ 	slti	$at,$t4,0xf
/*  f16a6c8:	10200017 */ 	beqz	$at,.L0f16a728
/*  f16a6cc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a6d0:	916b40a0 */ 	lbu	$t3,0x40a0($t3)
/*  f16a6d4:	24190001 */ 	addiu	$t9,$zero,0x1
/*  f16a6d8:	3c018008 */ 	lui	$at,0x8008
/*  f16a6dc:	1560000b */ 	bnez	$t3,.L0f16a70c
/*  f16a6e0:	3c048009 */ 	lui	$a0,0x8009
/*  f16a6e4:	a03940a0 */ 	sb	$t9,0x40a0($at)
/*  f16a6e8:	8c845200 */ 	lw	$a0,0x5200($a0)
/*  f16a6ec:	2405059e */ 	addiu	$a1,$zero,0x59e
/*  f16a6f0:	00003025 */ 	or	$a2,$zero,$zero
/*  f16a6f4:	02e03825 */ 	or	$a3,$s7,$zero
/*  f16a6f8:	afb70010 */ 	sw	$s7,0x10($sp)
/*  f16a6fc:	e7b40014 */ 	swc1	$f20,0x14($sp)
/*  f16a700:	afb70018 */ 	sw	$s7,0x18($sp)
/*  f16a704:	0c004241 */ 	jal	func00010904
/*  f16a708:	afb7001c */ 	sw	$s7,0x1c($sp)
.L0f16a70c:
/*  f16a70c:	3c0a8008 */ 	lui	$t2,0x8008
/*  f16a710:	8d4a409c */ 	lw	$t2,0x409c($t2)
/*  f16a714:	240e00e1 */ 	addiu	$t6,$zero,0xe1
/*  f16a718:	000ac080 */ 	sll	$t8,$t2,0x2
/*  f16a71c:	030ac021 */ 	addu	$t8,$t8,$t2
/*  f16a720:	0018c040 */ 	sll	$t8,$t8,0x1
/*  f16a724:	01d88023 */ 	subu	$s0,$t6,$t8
.L0f16a728:
/*  f16a728:	0c004b70 */ 	jal	random
/*  f16a72c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a730:	2401003c */ 	addiu	$at,$zero,0x3c
/*  f16a734:	0041001b */ 	divu	$zero,$v0,$at
/*  f16a738:	00007810 */ 	mfhi	$t7
/*  f16a73c:	24010001 */ 	addiu	$at,$zero,0x1
/*  f16a740:	15e1000b */ 	bne	$t7,$at,.L0f16a770
/*  f16a744:	3c048009 */ 	lui	$a0,0x8009
/*  f16a748:	241000ff */ 	addiu	$s0,$zero,0xff
/*  f16a74c:	8c845200 */ 	lw	$a0,0x5200($a0)
/*  f16a750:	2405059d */ 	addiu	$a1,$zero,0x59d
/*  f16a754:	00003025 */ 	or	$a2,$zero,$zero
/*  f16a758:	02e03825 */ 	or	$a3,$s7,$zero
/*  f16a75c:	afb70010 */ 	sw	$s7,0x10($sp)
/*  f16a760:	e7b40014 */ 	swc1	$f20,0x14($sp)
/*  f16a764:	afb70018 */ 	sw	$s7,0x18($sp)
/*  f16a768:	0c004241 */ 	jal	func00010904
/*  f16a76c:	afb7001c */ 	sw	$s7,0x1c($sp)
.L0f16a770:
/*  f16a770:	12000005 */ 	beqz	$s0,.L0f16a788
/*  f16a774:	02402025 */ 	or	$a0,$s2,$zero
/*  f16a778:	2405ffff */ 	addiu	$a1,$zero,-1
/*  f16a77c:	0fc50991 */ 	jal	func0f142644
/*  f16a780:	02003025 */ 	or	$a2,$s0,$zero
/*  f16a784:	00409025 */ 	or	$s2,$v0,$zero
.L0f16a788:
/*  f16a788:	3c048008 */ 	lui	$a0,0x8008
/*  f16a78c:	8c844098 */ 	lw	$a0,0x4098($a0)
/*  f16a790:	8fad00cc */ 	lw	$t5,0xcc($sp)
/*  f16a794:	50800006 */ 	beqzl	$a0,.L0f16a7b0
/*  f16a798:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f16a79c:	55a00004 */ 	bnezl	$t5,.L0f16a7b0
/*  f16a7a0:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f16a7a4:	0c00cec9 */ 	jal	func00033b24
/*  f16a7a8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a7ac:	8e700284 */ 	lw	$s0,0x284($s3)
.L0f16a7b0:
/*  f16a7b0:	24010002 */ 	addiu	$at,$zero,0x2
/*  f16a7b4:	960c0010 */ 	lhu	$t4,0x10($s0)
/*  f16a7b8:	5581001c */ 	bnel	$t4,$at,.L0f16a82c
/*  f16a7bc:	96030010 */ 	lhu	$v1,0x10($s0)
/*  f16a7c0:	8e6b02ac */ 	lw	$t3,0x2ac($s3)
/*  f16a7c4:	24010006 */ 	addiu	$at,$zero,0x6
/*  f16a7c8:	02402025 */ 	or	$a0,$s2,$zero
/*  f16a7cc:	11610016 */ 	beq	$t3,$at,.L0f16a828
/*  f16a7d0:	2405ffff */ 	addiu	$a1,$zero,-1
/*  f16a7d4:	0fc509dd */ 	jal	func0f142774
/*  f16a7d8:	2406ffff */ 	addiu	$a2,$zero,-1
/*  f16a7dc:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f16a7e0:	00409025 */ 	or	$s2,$v0,$zero
/*  f16a7e4:	2401005a */ 	addiu	$at,$zero,0x5a
/*  f16a7e8:	8e0300c8 */ 	lw	$v1,0xc8($s0)
/*  f16a7ec:	02402025 */ 	or	$a0,$s2,$zero
/*  f16a7f0:	3c054fff */ 	lui	$a1,0x4fff
/*  f16a7f4:	1860000c */ 	blez	$v1,.L0f16a828
/*  f16a7f8:	00033200 */ 	sll	$a2,$v1,0x8
/*  f16a7fc:	00c33023 */ 	subu	$a2,$a2,$v1
/*  f16a800:	00c1001a */ 	div	$zero,$a2,$at
/*  f16a804:	00003012 */ 	mflo	$a2
/*  f16a808:	2cc10100 */ 	sltiu	$at,$a2,0x100
/*  f16a80c:	14200002 */ 	bnez	$at,.L0f16a818
/*  f16a810:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a814:	240600ff */ 	addiu	$a2,$zero,0xff
.L0f16a818:
/*  f16a818:	0fc50991 */ 	jal	func0f142644
/*  f16a81c:	34a5ffff */ 	ori	$a1,$a1,0xffff
/*  f16a820:	00409025 */ 	or	$s2,$v0,$zero
/*  f16a824:	8e700284 */ 	lw	$s0,0x284($s3)
.L0f16a828:
/*  f16a828:	96030010 */ 	lhu	$v1,0x10($s0)
.L0f16a82c:
/*  f16a82c:	24010003 */ 	addiu	$at,$zero,0x3
/*  f16a830:	02402025 */ 	or	$a0,$s2,$zero
/*  f16a834:	14610009 */ 	bne	$v1,$at,.L0f16a85c
/*  f16a838:	3c054fff */ 	lui	$a1,0x4fff
/*  f16a83c:	34a5ffff */ 	ori	$a1,$a1,0xffff
/*  f16a840:	0fc50991 */ 	jal	func0f142644
/*  f16a844:	240600ff */ 	addiu	$a2,$zero,0xff
/*  f16a848:	8e6a0284 */ 	lw	$t2,0x284($s3)
/*  f16a84c:	00409025 */ 	or	$s2,$v0,$zero
/*  f16a850:	a5400010 */ 	sh	$zero,0x10($t2)
/*  f16a854:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f16a858:	96030010 */ 	lhu	$v1,0x10($s0)
.L0f16a85c:
/*  f16a85c:	57c30017 */ 	bnel	$s8,$v1,.L0f16a8bc
/*  f16a860:	8e630460 */ 	lw	$v1,0x460($s3)
/*  f16a864:	8e6e02ac */ 	lw	$t6,0x2ac($s3)
/*  f16a868:	24010006 */ 	addiu	$at,$zero,0x6
/*  f16a86c:	51c10013 */ 	beql	$t6,$at,.L0f16a8bc
/*  f16a870:	8e630460 */ 	lw	$v1,0x460($s3)
/*  f16a874:	8e020254 */ 	lw	$v0,0x254($s0)
/*  f16a878:	24060063 */ 	addiu	$a2,$zero,0x63
/*  f16a87c:	240d00f9 */ 	addiu	$t5,$zero,0xf9
/*  f16a880:	284100c8 */ 	slti	$at,$v0,0xc8
/*  f16a884:	10200004 */ 	beqz	$at,.L0f16a898
/*  f16a888:	0002c080 */ 	sll	$t8,$v0,0x2
/*  f16a88c:	0302c023 */ 	subu	$t8,$t8,$v0
/*  f16a890:	00187883 */ 	sra	$t7,$t8,0x2
/*  f16a894:	01af3023 */ 	subu	$a2,$t5,$t7
.L0f16a898:
/*  f16a898:	3c017f1b */ 	lui	$at,%hi(var7f1b7850)
/*  f16a89c:	c4207850 */ 	lwc1	$f0,%lo(var7f1b7850)($at)
/*  f16a8a0:	02402025 */ 	or	$a0,$s2,$zero
/*  f16a8a4:	2405ffff */ 	addiu	$a1,$zero,-1
/*  f16a8a8:	44070000 */ 	mfc1	$a3,$f0
/*  f16a8ac:	0fc50afc */ 	jal	func0f142bf0
/*  f16a8b0:	e7a00010 */ 	swc1	$f0,0x10($sp)
/*  f16a8b4:	00409025 */ 	or	$s2,$v0,$zero
/*  f16a8b8:	8e630460 */ 	lw	$v1,0x460($s3)
.L0f16a8bc:
/*  f16a8bc:	18600003 */ 	blez	$v1,.L0f16a8cc
/*  f16a8c0:	2861001e */ 	slti	$at,$v1,0x1e
/*  f16a8c4:	5420000c */ 	bnezl	$at,.L0f16a8f8
/*  f16a8c8:	2401001e */ 	addiu	$at,$zero,0x1e
.L0f16a8cc:
/*  f16a8cc:	8e620464 */ 	lw	$v0,0x464($s3)
/*  f16a8d0:	10400004 */ 	beqz	$v0,.L0f16a8e4
/*  f16a8d4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a8d8:	8e6c0468 */ 	lw	$t4,0x468($s3)
/*  f16a8dc:	51800006 */ 	beqzl	$t4,.L0f16a8f8
/*  f16a8e0:	2401001e */ 	addiu	$at,$zero,0x1e
.L0f16a8e4:
/*  f16a8e4:	54400085 */ 	bnezl	$v0,.L0f16aafc
/*  f16a8e8:	28610010 */ 	slti	$at,$v1,0x10
/*  f16a8ec:	8e6b0468 */ 	lw	$t3,0x468($s3)
/*  f16a8f0:	11600081 */ 	beqz	$t3,.L0f16aaf8
/*  f16a8f4:	2401001e */ 	addiu	$at,$zero,0x1e
.L0f16a8f8:
/*  f16a8f8:	54610018 */ 	bnel	$v1,$at,.L0f16a95c
/*  f16a8fc:	2861000f */ 	slti	$at,$v1,0xf
/*  f16a900:	8e790464 */ 	lw	$t9,0x464($s3)
/*  f16a904:	57200015 */ 	bnezl	$t9,.L0f16a95c
/*  f16a908:	2861000f */ 	slti	$at,$v1,0xf
/*  f16a90c:	0fc5ae15 */ 	jal	func0f16b854
/*  f16a910:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16a914:	10400003 */ 	beqz	$v0,.L0f16a924
/*  f16a918:	3c048009 */ 	lui	$a0,0x8009
/*  f16a91c:	10000002 */ 	beqz	$zero,.L0f16a928
/*  f16a920:	241005c9 */ 	addiu	$s0,$zero,0x5c9
.L0f16a924:
/*  f16a924:	241002ad */ 	addiu	$s0,$zero,0x2ad
.L0f16a928:
/*  f16a928:	00102c00 */ 	sll	$a1,$s0,0x10
/*  f16a92c:	00055403 */ 	sra	$t2,$a1,0x10
/*  f16a930:	01402825 */ 	or	$a1,$t2,$zero
/*  f16a934:	8c845200 */ 	lw	$a0,0x5200($a0)
/*  f16a938:	00003025 */ 	or	$a2,$zero,$zero
/*  f16a93c:	02e03825 */ 	or	$a3,$s7,$zero
/*  f16a940:	afb70010 */ 	sw	$s7,0x10($sp)
/*  f16a944:	e7b40014 */ 	swc1	$f20,0x14($sp)
/*  f16a948:	afb70018 */ 	sw	$s7,0x18($sp)
/*  f16a94c:	0c004241 */ 	jal	func00010904
/*  f16a950:	afb7001c */ 	sw	$s7,0x1c($sp)
/*  f16a954:	8e630460 */ 	lw	$v1,0x460($s3)
/*  f16a958:	2861000f */ 	slti	$at,$v1,0xf
.L0f16a95c:
/*  f16a95c:	10200026 */ 	beqz	$at,.L0f16a9f8
/*  f16a960:	240d001e */ 	addiu	$t5,$zero,0x1e
/*  f16a964:	2401000f */ 	addiu	$at,$zero,0xf
/*  f16a968:	00033080 */ 	sll	$a2,$v1,0x2
/*  f16a96c:	00c33023 */ 	subu	$a2,$a2,$v1
/*  f16a970:	00063080 */ 	sll	$a2,$a2,0x2
/*  f16a974:	00c33023 */ 	subu	$a2,$a2,$v1
/*  f16a978:	00063080 */ 	sll	$a2,$a2,0x2
/*  f16a97c:	00c33021 */ 	addu	$a2,$a2,$v1
/*  f16a980:	00063080 */ 	sll	$a2,$a2,0x2
/*  f16a984:	00c1001a */ 	div	$zero,$a2,$at
/*  f16a988:	44839000 */ 	mtc1	$v1,$f18
/*  f16a98c:	3c017f1b */ 	lui	$at,%hi(var7f1b7854)
/*  f16a990:	c4247854 */ 	lwc1	$f4,%lo(var7f1b7854)($at)
/*  f16a994:	46809420 */ 	cvt.s.w	$f16,$f18
/*  f16a998:	3c017f1b */ 	lui	$at,%hi(var7f1b7858)
/*  f16a99c:	c4287858 */ 	lwc1	$f8,%lo(var7f1b7858)($at)
/*  f16a9a0:	00003012 */ 	mflo	$a2
/*  f16a9a4:	02402025 */ 	or	$a0,$s2,$zero
/*  f16a9a8:	2405ffff */ 	addiu	$a1,$zero,-1
/*  f16a9ac:	46048182 */ 	mul.s	$f6,$f16,$f4
/*  f16a9b0:	46083000 */ 	add.s	$f0,$f6,$f8
/*  f16a9b4:	44070000 */ 	mfc1	$a3,$f0
/*  f16a9b8:	0fc50afc */ 	jal	func0f142bf0
/*  f16a9bc:	e7a00010 */ 	swc1	$f0,0x10($sp)
/*  f16a9c0:	8e780460 */ 	lw	$t8,0x460($s3)
/*  f16a9c4:	3c017f1b */ 	lui	$at,%hi(var7f1b785c)
/*  f16a9c8:	c430785c */ 	lwc1	$f16,%lo(var7f1b785c)($at)
/*  f16a9cc:	44985000 */ 	mtc1	$t8,$f10
/*  f16a9d0:	00402025 */ 	or	$a0,$v0,$zero
/*  f16a9d4:	240500ff */ 	addiu	$a1,$zero,0xff
/*  f16a9d8:	468054a0 */ 	cvt.s.w	$f18,$f10
/*  f16a9dc:	240600ff */ 	addiu	$a2,$zero,0xff
/*  f16a9e0:	240700ff */ 	addiu	$a3,$zero,0xff
/*  f16a9e4:	46109102 */ 	mul.s	$f4,$f18,$f16
/*  f16a9e8:	0fc2ec13 */ 	jal	func0f0bb04c
/*  f16a9ec:	e7a40010 */ 	swc1	$f4,0x10($sp)
/*  f16a9f0:	10000029 */ 	beqz	$zero,.L0f16aa98
/*  f16a9f4:	00409025 */ 	or	$s2,$v0,$zero
.L0f16a9f8:
/*  f16a9f8:	2401000f */ 	addiu	$at,$zero,0xf
/*  f16a9fc:	01a31023 */ 	subu	$v0,$t5,$v1
/*  f16aa00:	00023080 */ 	sll	$a2,$v0,0x2
/*  f16aa04:	00c23023 */ 	subu	$a2,$a2,$v0
/*  f16aa08:	00063080 */ 	sll	$a2,$a2,0x2
/*  f16aa0c:	00c23023 */ 	subu	$a2,$a2,$v0
/*  f16aa10:	00063080 */ 	sll	$a2,$a2,0x2
/*  f16aa14:	00c23021 */ 	addu	$a2,$a2,$v0
/*  f16aa18:	00063080 */ 	sll	$a2,$a2,0x2
/*  f16aa1c:	00c1001a */ 	div	$zero,$a2,$at
/*  f16aa20:	44823000 */ 	mtc1	$v0,$f6
/*  f16aa24:	3c017f1b */ 	lui	$at,%hi(var7f1b7860)
/*  f16aa28:	c42a7860 */ 	lwc1	$f10,%lo(var7f1b7860)($at)
/*  f16aa2c:	46803220 */ 	cvt.s.w	$f8,$f6
/*  f16aa30:	3c017f1b */ 	lui	$at,%hi(var7f1b7864)
/*  f16aa34:	c4307864 */ 	lwc1	$f16,%lo(var7f1b7864)($at)
/*  f16aa38:	00003012 */ 	mflo	$a2
/*  f16aa3c:	02402025 */ 	or	$a0,$s2,$zero
/*  f16aa40:	2405ffff */ 	addiu	$a1,$zero,-1
/*  f16aa44:	460a4482 */ 	mul.s	$f18,$f8,$f10
/*  f16aa48:	46109000 */ 	add.s	$f0,$f18,$f16
/*  f16aa4c:	44070000 */ 	mfc1	$a3,$f0
/*  f16aa50:	0fc50afc */ 	jal	func0f142bf0
/*  f16aa54:	e7a00010 */ 	swc1	$f0,0x10($sp)
/*  f16aa58:	8e6c0460 */ 	lw	$t4,0x460($s3)
/*  f16aa5c:	3c0141f0 */ 	lui	$at,0x41f0
/*  f16aa60:	44812000 */ 	mtc1	$at,$f4
/*  f16aa64:	448c3000 */ 	mtc1	$t4,$f6
/*  f16aa68:	3c017f1b */ 	lui	$at,%hi(var7f1b7868)
/*  f16aa6c:	c4327868 */ 	lwc1	$f18,%lo(var7f1b7868)($at)
/*  f16aa70:	46803220 */ 	cvt.s.w	$f8,$f6
/*  f16aa74:	00402025 */ 	or	$a0,$v0,$zero
/*  f16aa78:	240500ff */ 	addiu	$a1,$zero,0xff
/*  f16aa7c:	240600ff */ 	addiu	$a2,$zero,0xff
/*  f16aa80:	240700ff */ 	addiu	$a3,$zero,0xff
/*  f16aa84:	46082281 */ 	sub.s	$f10,$f4,$f8
/*  f16aa88:	46125402 */ 	mul.s	$f16,$f10,$f18
/*  f16aa8c:	0fc2ec13 */ 	jal	func0f0bb04c
/*  f16aa90:	e7b00010 */ 	swc1	$f16,0x10($sp)
/*  f16aa94:	00409025 */ 	or	$s2,$v0,$zero
.L0f16aa98:
/*  f16aa98:	8e6b028c */ 	lw	$t3,0x28c($s3)
/*  f16aa9c:	5560000c */ 	bnezl	$t3,.L0f16aad0
/*  f16aaa0:	8e630460 */ 	lw	$v1,0x460($s3)
/*  f16aaa4:	8e790464 */ 	lw	$t9,0x464($s3)
/*  f16aaa8:	53200006 */ 	beqzl	$t9,.L0f16aac4
/*  f16aaac:	8e780460 */ 	lw	$t8,0x460($s3)
/*  f16aab0:	8e6a0460 */ 	lw	$t2,0x460($s3)
/*  f16aab4:	254e0001 */ 	addiu	$t6,$t2,0x1
/*  f16aab8:	10000004 */ 	beqz	$zero,.L0f16aacc
/*  f16aabc:	ae6e0460 */ 	sw	$t6,0x460($s3)
/*  f16aac0:	8e780460 */ 	lw	$t8,0x460($s3)
.L0f16aac4:
/*  f16aac4:	270dffff */ 	addiu	$t5,$t8,-1
/*  f16aac8:	ae6d0460 */ 	sw	$t5,0x460($s3)
.L0f16aacc:
/*  f16aacc:	8e630460 */ 	lw	$v1,0x460($s3)
.L0f16aad0:
/*  f16aad0:	2861001f */ 	slti	$at,$v1,0x1f
/*  f16aad4:	14200004 */ 	bnez	$at,.L0f16aae8
/*  f16aad8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16aadc:	2403001e */ 	addiu	$v1,$zero,0x1e
/*  f16aae0:	10000005 */ 	beqz	$zero,.L0f16aaf8
/*  f16aae4:	ae630460 */ 	sw	$v1,0x460($s3)
.L0f16aae8:
/*  f16aae8:	04630004 */ 	bgezl	$v1,.L0f16aafc
/*  f16aaec:	28610010 */ 	slti	$at,$v1,0x10
/*  f16aaf0:	ae600460 */ 	sw	$zero,0x460($s3)
/*  f16aaf4:	00001825 */ 	or	$v1,$zero,$zero
.L0f16aaf8:
/*  f16aaf8:	28610010 */ 	slti	$at,$v1,0x10
.L0f16aafc:
/*  f16aafc:	54200004 */ 	bnezl	$at,.L0f16ab10
/*  f16ab00:	ae600468 */ 	sw	$zero,0x468($s3)
/*  f16ab04:	10000002 */ 	beqz	$zero,.L0f16ab10
/*  f16ab08:	ae7e0468 */ 	sw	$s8,0x468($s3)
/*  f16ab0c:	ae600468 */ 	sw	$zero,0x468($s3)
.L0f16ab10:
/*  f16ab10:	52a00009 */ 	beqzl	$s5,.L0f16ab38
/*  f16ab14:	8e6c02ac */ 	lw	$t4,0x2ac($s3)
/*  f16ab18:	0fc522db */ 	jal	func0f148b6c
/*  f16ab1c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ab20:	02402025 */ 	or	$a0,$s2,$zero
/*  f16ab24:	2405ffff */ 	addiu	$a1,$zero,-1
/*  f16ab28:	0fc5090e */ 	jal	func0f142438
/*  f16ab2c:	02a03025 */ 	or	$a2,$s5,$zero
/*  f16ab30:	00409025 */ 	or	$s2,$v0,$zero
/*  f16ab34:	8e6c02ac */ 	lw	$t4,0x2ac($s3)
.L0f16ab38:
/*  f16ab38:	24010006 */ 	addiu	$at,$zero,0x6
/*  f16ab3c:	15810031 */ 	bne	$t4,$at,.L0f16ac04
/*  f16ab40:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ab44:	0fc2ea0e */ 	jal	func0f0ba838
/*  f16ab48:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ab4c:	44803000 */ 	mtc1	$zero,$f6
/*  f16ab50:	3c01437f */ 	lui	$at,0x437f
/*  f16ab54:	4600303c */ 	c.lt.s	$f6,$f0
/*  f16ab58:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ab5c:	45000029 */ 	bc1f	.L0f16ac04
/*  f16ab60:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ab64:	44812000 */ 	mtc1	$at,$f4
/*  f16ab68:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f16ab6c:	3c014f00 */ 	lui	$at,0x4f00
/*  f16ab70:	46040202 */ 	mul.s	$f8,$f0,$f4
/*  f16ab74:	02402025 */ 	or	$a0,$s2,$zero
/*  f16ab78:	2405ff00 */ 	addiu	$a1,$zero,-256
/*  f16ab7c:	444bf800 */ 	cfc1	$t3,$31
/*  f16ab80:	44c6f800 */ 	ctc1	$a2,$31
/*  f16ab84:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ab88:	460042a4 */ 	cvt.w.s	$f10,$f8
/*  f16ab8c:	4446f800 */ 	cfc1	$a2,$31
/*  f16ab90:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ab94:	30c60078 */ 	andi	$a2,$a2,0x78
/*  f16ab98:	50c00013 */ 	beqzl	$a2,.L0f16abe8
/*  f16ab9c:	44065000 */ 	mfc1	$a2,$f10
/*  f16aba0:	44815000 */ 	mtc1	$at,$f10
/*  f16aba4:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f16aba8:	460a4281 */ 	sub.s	$f10,$f8,$f10
/*  f16abac:	44c6f800 */ 	ctc1	$a2,$31
/*  f16abb0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16abb4:	460052a4 */ 	cvt.w.s	$f10,$f10
/*  f16abb8:	4446f800 */ 	cfc1	$a2,$31
/*  f16abbc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16abc0:	30c60078 */ 	andi	$a2,$a2,0x78
/*  f16abc4:	14c00005 */ 	bnez	$a2,.L0f16abdc
/*  f16abc8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16abcc:	44065000 */ 	mfc1	$a2,$f10
/*  f16abd0:	3c018000 */ 	lui	$at,0x8000
/*  f16abd4:	10000007 */ 	beqz	$zero,.L0f16abf4
/*  f16abd8:	00c13025 */ 	or	$a2,$a2,$at
.L0f16abdc:
/*  f16abdc:	10000005 */ 	beqz	$zero,.L0f16abf4
/*  f16abe0:	2406ffff */ 	addiu	$a2,$zero,-1
/*  f16abe4:	44065000 */ 	mfc1	$a2,$f10
.L0f16abe8:
/*  f16abe8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16abec:	04c0fffb */ 	bltz	$a2,.L0f16abdc
/*  f16abf0:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16abf4:
/*  f16abf4:	44cbf800 */ 	ctc1	$t3,$31
/*  f16abf8:	0fc5090e */ 	jal	func0f142438
/*  f16abfc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ac00:	00409025 */ 	or	$s2,$v0,$zero
.L0f16ac04:
/*  f16ac04:	0fc47bb6 */ 	jal	func0f11eed8
/*  f16ac08:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ac0c:	145e0006 */ 	bne	$v0,$s8,.L0f16ac28
/*  f16ac10:	02402025 */ 	or	$a0,$s2,$zero
/*  f16ac14:	2405ff00 */ 	addiu	$a1,$zero,-256
/*  f16ac18:	0fc5090e */ 	jal	func0f142438
/*  f16ac1c:	24060080 */ 	addiu	$a2,$zero,0x80
/*  f16ac20:	10000014 */ 	beqz	$zero,.L0f16ac74
/*  f16ac24:	00409025 */ 	or	$s2,$v0,$zero
.L0f16ac28:
/*  f16ac28:	0fc47bb6 */ 	jal	func0f11eed8
/*  f16ac2c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ac30:	24010002 */ 	addiu	$at,$zero,0x2
/*  f16ac34:	14410006 */ 	bne	$v0,$at,.L0f16ac50
/*  f16ac38:	02402025 */ 	or	$a0,$s2,$zero
/*  f16ac3c:	2405ff00 */ 	addiu	$a1,$zero,-256
/*  f16ac40:	0fc5090e */ 	jal	func0f142438
/*  f16ac44:	240600c0 */ 	addiu	$a2,$zero,0xc0
/*  f16ac48:	1000000a */ 	beqz	$zero,.L0f16ac74
/*  f16ac4c:	00409025 */ 	or	$s2,$v0,$zero
.L0f16ac50:
/*  f16ac50:	0fc47bb6 */ 	jal	func0f11eed8
/*  f16ac54:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ac58:	24010003 */ 	addiu	$at,$zero,0x3
/*  f16ac5c:	14410005 */ 	bne	$v0,$at,.L0f16ac74
/*  f16ac60:	02402025 */ 	or	$a0,$s2,$zero
/*  f16ac64:	2405ff00 */ 	addiu	$a1,$zero,-256
/*  f16ac68:	0fc5090e */ 	jal	func0f142438
/*  f16ac6c:	240600e6 */ 	addiu	$a2,$zero,0xe6
/*  f16ac70:	00409025 */ 	or	$s2,$v0,$zero
.L0f16ac74:
/*  f16ac74:	8e700284 */ 	lw	$s0,0x284($s3)
/*  f16ac78:	24010003 */ 	addiu	$at,$zero,0x3
/*  f16ac7c:	92031bfc */ 	lbu	$v1,0x1bfc($s0)
/*  f16ac80:	1860003b */ 	blez	$v1,.L0f16ad70
/*  f16ac84:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ac88:	14610002 */ 	bne	$v1,$at,.L0f16ac94
/*  f16ac8c:	00008825 */ 	or	$s1,$zero,$zero
/*  f16ac90:	241100ff */ 	addiu	$s1,$zero,0xff
.L0f16ac94:
/*  f16ac94:	56830009 */ 	bnel	$s4,$v1,.L0f16acbc
/*  f16ac98:	24010002 */ 	addiu	$at,$zero,0x2
/*  f16ac9c:	92021bfd */ 	lbu	$v0,0x1bfd($s0)
/*  f16aca0:	28410010 */ 	slti	$at,$v0,0x10
/*  f16aca4:	50200005 */ 	beqzl	$at,.L0f16acbc
/*  f16aca8:	24010002 */ 	addiu	$at,$zero,0x2
/*  f16acac:	00028823 */ 	negu	$s1,$v0
/*  f16acb0:	0011c900 */ 	sll	$t9,$s1,0x4
/*  f16acb4:	273100f0 */ 	addiu	$s1,$t9,0xf0
/*  f16acb8:	24010002 */ 	addiu	$at,$zero,0x2
.L0f16acbc:
/*  f16acbc:	1461000b */ 	bne	$v1,$at,.L0f16acec
/*  f16acc0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16acc4:	92021bfd */ 	lbu	$v0,0x1bfd($s0)
/*  f16acc8:	28410021 */ 	slti	$at,$v0,0x21
/*  f16accc:	54200004 */ 	bnezl	$at,.L0f16ace0
/*  f16acd0:	24010030 */ 	addiu	$at,$zero,0x30
/*  f16acd4:	00028900 */ 	sll	$s1,$v0,0x4
/*  f16acd8:	2631fe00 */ 	addiu	$s1,$s1,-512
/*  f16acdc:	24010030 */ 	addiu	$at,$zero,0x30
.L0f16ace0:
/*  f16ace0:	14410002 */ 	bne	$v0,$at,.L0f16acec
/*  f16ace4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ace8:	241100ff */ 	addiu	$s1,$zero,0xff
.L0f16acec:
/*  f16acec:	12200020 */ 	beqz	$s1,.L0f16ad70
/*  f16acf0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16acf4:	0fc54d8a */ 	jal	func0f153628
/*  f16acf8:	02402025 */ 	or	$a0,$s2,$zero
/*  f16acfc:	0c002f40 */ 	jal	func0000bd00
/*  f16ad00:	00409025 */ 	or	$s2,$v0,$zero
/*  f16ad04:	0c002f44 */ 	jal	func0000bd10
/*  f16ad08:	a7a2006e */ 	sh	$v0,0x6e($sp)
/*  f16ad0c:	0c002f40 */ 	jal	func0000bd00
/*  f16ad10:	a7a20070 */ 	sh	$v0,0x70($sp)
/*  f16ad14:	0c002f22 */ 	jal	func0000bc88
/*  f16ad18:	a7a20072 */ 	sh	$v0,0x72($sp)
/*  f16ad1c:	0c002f44 */ 	jal	func0000bd10
/*  f16ad20:	a7a2008a */ 	sh	$v0,0x8a($sp)
/*  f16ad24:	00028400 */ 	sll	$s0,$v0,0x10
/*  f16ad28:	00105403 */ 	sra	$t2,$s0,0x10
/*  f16ad2c:	0c002f26 */ 	jal	func0000bc98
/*  f16ad30:	01408025 */ 	or	$s0,$t2,$zero
/*  f16ad34:	87ae008a */ 	lh	$t6,0x8a($sp)
/*  f16ad38:	87b80072 */ 	lh	$t8,0x72($sp)
/*  f16ad3c:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f16ad40:	02217825 */ 	or	$t7,$s1,$at
/*  f16ad44:	00506821 */ 	addu	$t5,$v0,$s0
/*  f16ad48:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f16ad4c:	afaf0014 */ 	sw	$t7,0x14($sp)
/*  f16ad50:	02402025 */ 	or	$a0,$s2,$zero
/*  f16ad54:	87a5006e */ 	lh	$a1,0x6e($sp)
/*  f16ad58:	87a60070 */ 	lh	$a2,0x70($sp)
/*  f16ad5c:	0fc54e8d */ 	jal	func0f153a34
/*  f16ad60:	01d83821 */ 	addu	$a3,$t6,$t8
/*  f16ad64:	0fc54de0 */ 	jal	func0f153780
/*  f16ad68:	00402025 */ 	or	$a0,$v0,$zero
/*  f16ad6c:	00409025 */ 	or	$s2,$v0,$zero
.L0f16ad70:
/*  f16ad70:	0fc615dd */ 	jal	func0f185774
/*  f16ad74:	02402025 */ 	or	$a0,$s2,$zero
/*  f16ad78:	0fc5a176 */ 	jal	func0f1685d8
/*  f16ad7c:	00402025 */ 	or	$a0,$v0,$zero
/*  f16ad80:	3c0c8009 */ 	lui	$t4,0x8009
/*  f16ad84:	918c8804 */ 	lbu	$t4,-0x77fc($t4)
/*  f16ad88:	00409025 */ 	or	$s2,$v0,$zero
/*  f16ad8c:	11800004 */ 	beqz	$t4,.L0f16ada0
/*  f16ad90:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ad94:	0fc68bd8 */ 	jal	func0f1a2f60
/*  f16ad98:	00402025 */ 	or	$a0,$v0,$zero
/*  f16ad9c:	00409025 */ 	or	$s2,$v0,$zero
.L0f16ada0:
/*  f16ada0:	0fc47ba2 */ 	jal	func0f11ee88
/*  f16ada4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ada8:	14400013 */ 	bnez	$v0,.L0f16adf8
/*  f16adac:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16adb0:	0fc47ba4 */ 	jal	func0f11ee90
/*  f16adb4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16adb8:	1440000f */ 	bnez	$v0,.L0f16adf8
/*  f16adbc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16adc0:	0fc47baa */ 	jal	func0f11eea8
/*  f16adc4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16adc8:	1440000b */ 	bnez	$v0,.L0f16adf8
/*  f16adcc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16add0:	0fc47be0 */ 	jal	func0f11ef80
/*  f16add4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16add8:	14400007 */ 	bnez	$v0,.L0f16adf8
/*  f16addc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ade0:	0fc47bde */ 	jal	func0f11ef78
/*  f16ade4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ade8:	14400003 */ 	bnez	$v0,.L0f16adf8
/*  f16adec:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16adf0:	0fc47b90 */ 	jal	func0f11ee40
/*  f16adf4:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16adf8:
/*  f16adf8:	0fc49d36 */ 	jal	func0f1274d8
/*  f16adfc:	02402025 */ 	or	$a0,$s2,$zero
/*  f16ae00:	0fc402b4 */ 	jal	func0f100ad0
/*  f16ae04:	00402025 */ 	or	$a0,$v0,$zero
/*  f16ae08:	3c013f80 */ 	lui	$at,0x3f80
/*  f16ae0c:	44816000 */ 	mtc1	$at,$f12
/*  f16ae10:	0c0059d2 */ 	jal	func00016748
/*  f16ae14:	00409025 */ 	or	$s2,$v0,$zero
/*  f16ae18:	8e6b0284 */ 	lw	$t3,0x284($s3)
/*  f16ae1c:	8d791c50 */ 	lw	$t9,0x1c50($t3)
/*  f16ae20:	001957c2 */ 	srl	$t2,$t9,0x1f
/*  f16ae24:	51400005 */ 	beqzl	$t2,.L0f16ae3c
/*  f16ae28:	8e6e0288 */ 	lw	$t6,0x288($s3)
/*  f16ae2c:	0fc3ef0c */ 	jal	func0f0fbc30
/*  f16ae30:	02402025 */ 	or	$a0,$s2,$zero
/*  f16ae34:	00409025 */ 	or	$s2,$v0,$zero
/*  f16ae38:	8e6e0288 */ 	lw	$t6,0x288($s3)
.L0f16ae3c:
/*  f16ae3c:	0c0059d2 */ 	jal	func00016748
/*  f16ae40:	c5cc0074 */ 	lwc1	$f12,0x74($t6)
/*  f16ae44:	8e780314 */ 	lw	$t8,0x314($s3)
/*  f16ae48:	53000005 */ 	beqzl	$t8,.L0f16ae60
/*  f16ae4c:	8e6d0284 */ 	lw	$t5,0x284($s3)
/*  f16ae50:	0fc625cf */ 	jal	func0f18973c
/*  f16ae54:	02402025 */ 	or	$a0,$s2,$zero
/*  f16ae58:	00409025 */ 	or	$s2,$v0,$zero
/*  f16ae5c:	8e6d0284 */ 	lw	$t5,0x284($s3)
.L0f16ae60:
/*  f16ae60:	91af19b3 */ 	lbu	$t7,0x19b3($t5)
/*  f16ae64:	11e00003 */ 	beqz	$t7,.L0f16ae74
/*  f16ae68:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ae6c:	0fc2dcb7 */ 	jal	func0f0b72dc
/*  f16ae70:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16ae74:
/*  f16ae74:	0fc4f153 */ 	jal	func0f13c54c
/*  f16ae78:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ae7c:	8e6c0298 */ 	lw	$t4,0x298($s3)
/*  f16ae80:	05810004 */ 	bgez	$t4,.L0f16ae94
/*  f16ae84:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ae88:	8e6b029c */ 	lw	$t3,0x29c($s3)
/*  f16ae8c:	0562000a */ 	bltzl	$t3,.L0f16aeb8
/*  f16ae90:	8fb00060 */ 	lw	$s0,0x60($sp)
.L0f16ae94:
/*  f16ae94:	0fc2f130 */ 	jal	func0f0bc4c0
/*  f16ae98:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ae9c:	50400006 */ 	beqzl	$v0,.L0f16aeb8
/*  f16aea0:	8fb00060 */ 	lw	$s0,0x60($sp)
/*  f16aea4:	8e79028c */ 	lw	$t9,0x28c($s3)
/*  f16aea8:	53200003 */ 	beqzl	$t9,.L0f16aeb8
/*  f16aeac:	8fb00060 */ 	lw	$s0,0x60($sp)
/*  f16aeb0:	8fb20128 */ 	lw	$s2,0x128($sp)
/*  f16aeb4:	8fb00060 */ 	lw	$s0,0x60($sp)
.L0f16aeb8:
/*  f16aeb8:	8faa012c */ 	lw	$t2,0x12c($sp)
/*  f16aebc:	560afac6 */ 	bnel	$s0,$t2,.L0f1699d8
/*  f16aec0:	8faa0124 */ 	lw	$t2,0x124($sp)
.L0f16aec4:
/*  f16aec4:	826e04d3 */ 	lb	$t6,0x4d3($s3)
.L0f16aec8:
/*  f16aec8:	3c014080 */ 	lui	$at,0x4080
/*  f16aecc:	4481a000 */ 	mtc1	$at,$f20
/*  f16aed0:	11c00013 */ 	beqz	$t6,.L0f16af20
/*  f16aed4:	2417ffff */ 	addiu	$s7,$zero,-1
/*  f16aed8:	827804d6 */ 	lb	$t8,0x4d6($s3)
/*  f16aedc:	53000011 */ 	beqzl	$t8,.L0f16af24
/*  f16aee0:	826b04d3 */ 	lb	$t3,0x4d3($s3)
/*  f16aee4:	826d04d7 */ 	lb	$t5,0x4d7($s3)
/*  f16aee8:	a26004d3 */ 	sb	$zero,0x4d3($s3)
/*  f16aeec:	a26004d6 */ 	sb	$zero,0x4d6($s3)
/*  f16aef0:	51a00004 */ 	beqzl	$t5,.L0f16af04
/*  f16aef4:	826f04d4 */ 	lb	$t7,0x4d4($s3)
/*  f16aef8:	a27704d4 */ 	sb	$s7,0x4d4($s3)
/*  f16aefc:	a26004d5 */ 	sb	$zero,0x4d5($s3)
/*  f16af00:	826f04d4 */ 	lb	$t7,0x4d4($s3)
.L0f16af04:
/*  f16af04:	05e30007 */ 	bgezl	$t7,.L0f16af24
/*  f16af08:	826b04d3 */ 	lb	$t3,0x4d3($s3)
/*  f16af0c:	826c04d5 */ 	lb	$t4,0x4d5($s3)
/*  f16af10:	5d800004 */ 	bgtzl	$t4,.L0f16af24
/*  f16af14:	826b04d3 */ 	lb	$t3,0x4d3($s3)
/*  f16af18:	0c003a57 */ 	jal	func0000e95c
/*  f16af1c:	2404005a */ 	addiu	$a0,$zero,0x5a
.L0f16af20:
/*  f16af20:	826b04d3 */ 	lb	$t3,0x4d3($s3)
.L0f16af24:
/*  f16af24:	55600042 */ 	bnezl	$t3,.L0f16b030
/*  f16af28:	02408025 */ 	or	$s0,$s2,$zero
/*  f16af2c:	827904d4 */ 	lb	$t9,0x4d4($s3)
/*  f16af30:	0722003f */ 	bltzl	$t9,.L0f16b030
/*  f16af34:	02408025 */ 	or	$s0,$s2,$zero
/*  f16af38:	826a04d5 */ 	lb	$t2,0x4d5($s3)
/*  f16af3c:	5940003c */ 	blezl	$t2,.L0f16b030
/*  f16af40:	02408025 */ 	or	$s0,$s2,$zero
/*  f16af44:	0fc37798 */ 	jal	func0f0dde60
/*  f16af48:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16af4c:	826e04d4 */ 	lb	$t6,0x4d4($s3)
/*  f16af50:	2414000c */ 	addiu	$s4,$zero,0xc
/*  f16af54:	3c118007 */ 	lui	$s1,%hi(cutscenetable)
/*  f16af58:	01d40019 */ 	multu	$t6,$s4
/*  f16af5c:	263136d8 */ 	addiu	$s1,$s1,%lo(cutscenetable)
/*  f16af60:	3c10800a */ 	lui	$s0,%hi(var8009dfe8)
/*  f16af64:	2610dfe8 */ 	addiu	$s0,$s0,%lo(var8009dfe8)
/*  f16af68:	920c0003 */ 	lbu	$t4,0x3($s0)
/*  f16af6c:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16af70:	3199ff7f */ 	andi	$t9,$t4,0xff7f
/*  f16af74:	332a00bf */ 	andi	$t2,$t9,0xbf
/*  f16af78:	0000c012 */ 	mflo	$t8
/*  f16af7c:	02386821 */ 	addu	$t5,$s1,$t8
/*  f16af80:	8daf0004 */ 	lw	$t7,0x4($t5)
/*  f16af84:	a2190003 */ 	sb	$t9,0x3($s0)
/*  f16af88:	ae600314 */ 	sw	$zero,0x314($s3)
/*  f16af8c:	ae600318 */ 	sw	$zero,0x318($s3)
/*  f16af90:	ae600294 */ 	sw	$zero,0x294($s3)
/*  f16af94:	ae770298 */ 	sw	$s7,0x298($s3)
/*  f16af98:	ae77029c */ 	sw	$s7,0x29c($s3)
/*  f16af9c:	a20a0003 */ 	sb	$t2,0x3($s0)
/*  f16afa0:	0fc068d5 */ 	jal	setNumPlayers
/*  f16afa4:	a26f04d2 */ 	sb	$t7,0x4d2($s3)
/*  f16afa8:	0fc069f9 */ 	jal	func0f01a7e4
/*  f16afac:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f16afb0:	920e0000 */ 	lbu	$t6,0x0($s0)
/*  f16afb4:	00002025 */ 	or	$a0,$zero,$zero
/*  f16afb8:	31d8ff01 */ 	andi	$t8,$t6,0xff01
/*  f16afbc:	0fc5b36a */ 	jal	setDifficulty
/*  f16afc0:	a2180000 */ 	sb	$t8,0x0($s0)
/*  f16afc4:	826d04d4 */ 	lb	$t5,0x4d4($s3)
/*  f16afc8:	01b40019 */ 	multu	$t5,$s4
/*  f16afcc:	00007812 */ 	mflo	$t7
/*  f16afd0:	022f1021 */ 	addu	$v0,$s1,$t7
/*  f16afd4:	844c0002 */ 	lh	$t4,0x2($v0)
/*  f16afd8:	84440000 */ 	lh	$a0,0x0($v0)
/*  f16afdc:	a20c0002 */ 	sb	$t4,0x2($s0)
/*  f16afe0:	0fc06c55 */ 	jal	func0f01b154
/*  f16afe4:	a2040001 */ 	sb	$a0,0x1($s0)
/*  f16afe8:	826b04d4 */ 	lb	$t3,0x4d4($s3)
/*  f16afec:	01740019 */ 	multu	$t3,$s4
/*  f16aff0:	0000c812 */ 	mflo	$t9
/*  f16aff4:	02395021 */ 	addu	$t2,$s1,$t9
/*  f16aff8:	0c003a57 */ 	jal	func0000e95c
/*  f16affc:	85440000 */ 	lh	$a0,0x0($t2)
/*  f16b000:	826e04d5 */ 	lb	$t6,0x4d5($s3)
/*  f16b004:	25d8ffff */ 	addiu	$t8,$t6,-1
/*  f16b008:	a27804d5 */ 	sb	$t8,0x4d5($s3)
/*  f16b00c:	826d04d5 */ 	lb	$t5,0x4d5($s3)
/*  f16b010:	59a00006 */ 	blezl	$t5,.L0f16b02c
/*  f16b014:	a27704d4 */ 	sb	$s7,0x4d4($s3)
/*  f16b018:	826f04d4 */ 	lb	$t7,0x4d4($s3)
/*  f16b01c:	25ec0001 */ 	addiu	$t4,$t7,0x1
/*  f16b020:	10000002 */ 	beqz	$zero,.L0f16b02c
/*  f16b024:	a26c04d4 */ 	sb	$t4,0x4d4($s3)
/*  f16b028:	a27704d4 */ 	sb	$s7,0x4d4($s3)
.L0f16b02c:
/*  f16b02c:	02408025 */ 	or	$s0,$s2,$zero
.L0f16b030:
/*  f16b030:	3c0bed00 */ 	lui	$t3,0xed00
/*  f16b034:	ae0b0000 */ 	sw	$t3,0x0($s0)
/*  f16b038:	0c002f02 */ 	jal	func0000bc08
/*  f16b03c:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f16b040:	00028c00 */ 	sll	$s1,$v0,0x10
/*  f16b044:	0011cc03 */ 	sra	$t9,$s1,0x10
/*  f16b048:	0c002f06 */ 	jal	func0000bc18
/*  f16b04c:	03208825 */ 	or	$s1,$t9,$zero
/*  f16b050:	44829000 */ 	mtc1	$v0,$f18
/*  f16b054:	44914000 */ 	mtc1	$s1,$f8
/*  f16b058:	02401025 */ 	or	$v0,$s2,$zero
/*  f16b05c:	46809420 */ 	cvt.s.w	$f16,$f18
/*  f16b060:	468042a0 */ 	cvt.s.w	$f10,$f8
/*  f16b064:	46148182 */ 	mul.s	$f6,$f16,$f20
/*  f16b068:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16b06c:	46145482 */ 	mul.s	$f18,$f10,$f20
/*  f16b070:	4600310d */ 	trunc.w.s	$f4,$f6
/*  f16b074:	4600940d */ 	trunc.w.s	$f16,$f18
/*  f16b078:	440e2000 */ 	mfc1	$t6,$f4
/*  f16b07c:	440f8000 */ 	mfc1	$t7,$f16
/*  f16b080:	31d80fff */ 	andi	$t8,$t6,0xfff
/*  f16b084:	31ec0fff */ 	andi	$t4,$t7,0xfff
/*  f16b088:	000c5b00 */ 	sll	$t3,$t4,0xc
/*  f16b08c:	030bc825 */ 	or	$t9,$t8,$t3
/*  f16b090:	ae190004 */ 	sw	$t9,0x4($s0)
/*  f16b094:	8fbf0054 */ 	lw	$ra,0x54($sp)
/*  f16b098:	8fbe0050 */ 	lw	$s8,0x50($sp)
/*  f16b09c:	8fb7004c */ 	lw	$s7,0x4c($sp)
/*  f16b0a0:	8fb60048 */ 	lw	$s6,0x48($sp)
/*  f16b0a4:	8fb50044 */ 	lw	$s5,0x44($sp)
/*  f16b0a8:	8fb40040 */ 	lw	$s4,0x40($sp)
/*  f16b0ac:	8fb3003c */ 	lw	$s3,0x3c($sp)
/*  f16b0b0:	8fb20038 */ 	lw	$s2,0x38($sp)
/*  f16b0b4:	8fb10034 */ 	lw	$s1,0x34($sp)
/*  f16b0b8:	8fb00030 */ 	lw	$s0,0x30($sp)
/*  f16b0bc:	d7b40028 */ 	ldc1	$f20,0x28($sp)
/*  f16b0c0:	03e00008 */ 	jr	$ra
/*  f16b0c4:	27bd0190 */ 	addiu	$sp,$sp,0x190
);

GLOBAL_ASM(
glabel func0f16b0c8
/*  f16b0c8:	3c02800a */ 	lui	$v0,%hi(g_Vars)
/*  f16b0cc:	24429fc0 */ 	addiu	$v0,$v0,%lo(g_Vars)
/*  f16b0d0:	8c43029c */ 	lw	$v1,0x29c($v0)
/*  f16b0d4:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f16b0d8:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16b0dc:	04620081 */ 	bltzl	$v1,.L0f16b2e4
/*  f16b0e0:	8c440298 */ 	lw	$a0,0x298($v0)
/*  f16b0e4:	3c028008 */ 	lui	$v0,0x8008
/*  f16b0e8:	8c424020 */ 	lw	$v0,0x4020($v0)
/*  f16b0ec:	24010001 */ 	addiu	$at,$zero,0x1
/*  f16b0f0:	1440002a */ 	bnez	$v0,.L0f16b19c
/*  f16b0f4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16b0f8:	3c014000 */ 	lui	$at,0x4000
/*  f16b0fc:	44811000 */ 	mtc1	$at,$f2
/*  f16b100:	3c013f00 */ 	lui	$at,0x3f00
/*  f16b104:	44816000 */ 	mtc1	$at,$f12
/*  f16b108:	3c013fc0 */ 	lui	$at,0x3fc0
/*  f16b10c:	44818000 */ 	mtc1	$at,$f16
/*  f16b110:	3c018007 */ 	lui	$at,0x8007
/*  f16b114:	e4229948 */ 	swc1	$f2,-0x66b8($at)
/*  f16b118:	3c018007 */ 	lui	$at,0x8007
/*  f16b11c:	e422994c */ 	swc1	$f2,-0x66b4($at)
/*  f16b120:	3c018007 */ 	lui	$at,0x8007
/*  f16b124:	e42c9950 */ 	swc1	$f12,-0x66b0($at)
/*  f16b128:	3c018007 */ 	lui	$at,0x8007
/*  f16b12c:	e42c9954 */ 	swc1	$f12,-0x66ac($at)
/*  f16b130:	3c018007 */ 	lui	$at,0x8007
/*  f16b134:	e4229958 */ 	swc1	$f2,-0x66a8($at)
/*  f16b138:	3c018006 */ 	lui	$at,0x8006
/*  f16b13c:	e42c2ca0 */ 	swc1	$f12,0x2ca0($at)
/*  f16b140:	3c017f1b */ 	lui	$at,%hi(var7f1b786c)
/*  f16b144:	c424786c */ 	lwc1	$f4,%lo(var7f1b786c)($at)
/*  f16b148:	3c018006 */ 	lui	$at,0x8006
/*  f16b14c:	e4242ca4 */ 	swc1	$f4,0x2ca4($at)
/*  f16b150:	3c014080 */ 	lui	$at,0x4080
/*  f16b154:	44813000 */ 	mtc1	$at,$f6
/*  f16b158:	3c018006 */ 	lui	$at,0x8006
/*  f16b15c:	e4262ca8 */ 	swc1	$f6,0x2ca8($at)
/*  f16b160:	3c013e80 */ 	lui	$at,0x3e80
/*  f16b164:	44814000 */ 	mtc1	$at,$f8
/*  f16b168:	3c018008 */ 	lui	$at,0x8008
/*  f16b16c:	e428e4a8 */ 	swc1	$f8,-0x1b58($at)
/*  f16b170:	3c018007 */ 	lui	$at,0x8007
/*  f16b174:	e4309880 */ 	swc1	$f16,-0x6780($at)
/*  f16b178:	3c014040 */ 	lui	$at,0x4040
/*  f16b17c:	44815000 */ 	mtc1	$at,$f10
/*  f16b180:	3c018007 */ 	lui	$at,0x8007
/*  f16b184:	e42a995c */ 	swc1	$f10,-0x66a4($at)
/*  f16b188:	3c017f1b */ 	lui	$at,%hi(var7f1b7870)
/*  f16b18c:	c4327870 */ 	lwc1	$f18,%lo(var7f1b7870)($at)
/*  f16b190:	3c018006 */ 	lui	$at,0x8006
/*  f16b194:	10000196 */ 	beqz	$zero,.L0f16b7f0
/*  f16b198:	e4322cac */ 	swc1	$f18,0x2cac($at)
.L0f16b19c:
/*  f16b19c:	14410029 */ 	bne	$v0,$at,.L0f16b244
/*  f16b1a0:	3c014000 */ 	lui	$at,0x4000
/*  f16b1a4:	44811000 */ 	mtc1	$at,$f2
/*  f16b1a8:	3c013f00 */ 	lui	$at,0x3f00
/*  f16b1ac:	44816000 */ 	mtc1	$at,$f12
/*  f16b1b0:	3c013fc0 */ 	lui	$at,0x3fc0
/*  f16b1b4:	44818000 */ 	mtc1	$at,$f16
/*  f16b1b8:	3c018007 */ 	lui	$at,0x8007
/*  f16b1bc:	e4229948 */ 	swc1	$f2,-0x66b8($at)
/*  f16b1c0:	3c018007 */ 	lui	$at,0x8007
/*  f16b1c4:	e430994c */ 	swc1	$f16,-0x66b4($at)
/*  f16b1c8:	3c018007 */ 	lui	$at,0x8007
/*  f16b1cc:	e42c9950 */ 	swc1	$f12,-0x66b0($at)
/*  f16b1d0:	3c018007 */ 	lui	$at,0x8007
/*  f16b1d4:	e42c9954 */ 	swc1	$f12,-0x66ac($at)
/*  f16b1d8:	3c018007 */ 	lui	$at,0x8007
/*  f16b1dc:	e4309958 */ 	swc1	$f16,-0x66a8($at)
/*  f16b1e0:	3c017f1b */ 	lui	$at,%hi(var7f1b7874)
/*  f16b1e4:	c4247874 */ 	lwc1	$f4,%lo(var7f1b7874)($at)
/*  f16b1e8:	3c018006 */ 	lui	$at,0x8006
/*  f16b1ec:	e4242ca0 */ 	swc1	$f4,0x2ca0($at)
/*  f16b1f0:	3c018006 */ 	lui	$at,0x8006
/*  f16b1f4:	e42c2ca4 */ 	swc1	$f12,0x2ca4($at)
/*  f16b1f8:	3c014040 */ 	lui	$at,0x4040
/*  f16b1fc:	44813000 */ 	mtc1	$at,$f6
/*  f16b200:	3c018006 */ 	lui	$at,0x8006
/*  f16b204:	e4262ca8 */ 	swc1	$f6,0x2ca8($at)
/*  f16b208:	3c013e80 */ 	lui	$at,0x3e80
/*  f16b20c:	44814000 */ 	mtc1	$at,$f8
/*  f16b210:	3c018008 */ 	lui	$at,0x8008
/*  f16b214:	e428e4a8 */ 	swc1	$f8,-0x1b58($at)
/*  f16b218:	3c017f1b */ 	lui	$at,%hi(var7f1b7878)
/*  f16b21c:	c42a7878 */ 	lwc1	$f10,%lo(var7f1b7878)($at)
/*  f16b220:	3c018007 */ 	lui	$at,0x8007
/*  f16b224:	e42a9880 */ 	swc1	$f10,-0x6780($at)
/*  f16b228:	3c014020 */ 	lui	$at,0x4020
/*  f16b22c:	44819000 */ 	mtc1	$at,$f18
/*  f16b230:	3c018007 */ 	lui	$at,0x8007
/*  f16b234:	e432995c */ 	swc1	$f18,-0x66a4($at)
/*  f16b238:	3c018006 */ 	lui	$at,0x8006
/*  f16b23c:	1000016c */ 	beqz	$zero,.L0f16b7f0
/*  f16b240:	e42c2cac */ 	swc1	$f12,0x2cac($at)
.L0f16b244:
/*  f16b244:	3c013f80 */ 	lui	$at,0x3f80
/*  f16b248:	44810000 */ 	mtc1	$at,$f0
/*  f16b24c:	3c014000 */ 	lui	$at,0x4000
/*  f16b250:	44811000 */ 	mtc1	$at,$f2
/*  f16b254:	3c013f00 */ 	lui	$at,0x3f00
/*  f16b258:	44816000 */ 	mtc1	$at,$f12
/*  f16b25c:	3c013f40 */ 	lui	$at,0x3f40
/*  f16b260:	44817000 */ 	mtc1	$at,$f14
/*  f16b264:	3c018007 */ 	lui	$at,0x8007
/*  f16b268:	e4229948 */ 	swc1	$f2,-0x66b8($at)
/*  f16b26c:	3c018007 */ 	lui	$at,0x8007
/*  f16b270:	e420994c */ 	swc1	$f0,-0x66b4($at)
/*  f16b274:	3c018007 */ 	lui	$at,0x8007
/*  f16b278:	e42c9950 */ 	swc1	$f12,-0x66b0($at)
/*  f16b27c:	3c018007 */ 	lui	$at,0x8007
/*  f16b280:	e42c9954 */ 	swc1	$f12,-0x66ac($at)
/*  f16b284:	3c018007 */ 	lui	$at,0x8007
/*  f16b288:	e4209958 */ 	swc1	$f0,-0x66a8($at)
/*  f16b28c:	3c017f1b */ 	lui	$at,%hi(var7f1b787c)
/*  f16b290:	c424787c */ 	lwc1	$f4,%lo(var7f1b787c)($at)
/*  f16b294:	3c018006 */ 	lui	$at,0x8006
/*  f16b298:	e4242ca0 */ 	swc1	$f4,0x2ca0($at)
/*  f16b29c:	3c017f1b */ 	lui	$at,%hi(var7f1b7880)
/*  f16b2a0:	c4267880 */ 	lwc1	$f6,%lo(var7f1b7880)($at)
/*  f16b2a4:	3c018006 */ 	lui	$at,0x8006
/*  f16b2a8:	e4262ca4 */ 	swc1	$f6,0x2ca4($at)
/*  f16b2ac:	3c018006 */ 	lui	$at,0x8006
/*  f16b2b0:	e4222ca8 */ 	swc1	$f2,0x2ca8($at)
/*  f16b2b4:	3c013e80 */ 	lui	$at,0x3e80
/*  f16b2b8:	44814000 */ 	mtc1	$at,$f8
/*  f16b2bc:	3c018008 */ 	lui	$at,0x8008
/*  f16b2c0:	e428e4a8 */ 	swc1	$f8,-0x1b58($at)
/*  f16b2c4:	3c018007 */ 	lui	$at,0x8007
/*  f16b2c8:	e42e9880 */ 	swc1	$f14,-0x6780($at)
/*  f16b2cc:	3c018007 */ 	lui	$at,0x8007
/*  f16b2d0:	e422995c */ 	swc1	$f2,-0x66a4($at)
/*  f16b2d4:	3c018006 */ 	lui	$at,0x8006
/*  f16b2d8:	10000145 */ 	beqz	$zero,.L0f16b7f0
/*  f16b2dc:	e4202cac */ 	swc1	$f0,0x2cac($at)
/*  f16b2e0:	8c440298 */ 	lw	$a0,0x298($v0)
.L0f16b2e4:
/*  f16b2e4:	3c028008 */ 	lui	$v0,0x8008
/*  f16b2e8:	0480007c */ 	bltz	$a0,.L0f16b4dc
/*  f16b2ec:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16b2f0:	3c028008 */ 	lui	$v0,0x8008
/*  f16b2f4:	8c424020 */ 	lw	$v0,0x4020($v0)
/*  f16b2f8:	24010001 */ 	addiu	$at,$zero,0x1
/*  f16b2fc:	14400026 */ 	bnez	$v0,.L0f16b398
/*  f16b300:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16b304:	3c014000 */ 	lui	$at,0x4000
/*  f16b308:	44811000 */ 	mtc1	$at,$f2
/*  f16b30c:	3c013f00 */ 	lui	$at,0x3f00
/*  f16b310:	44816000 */ 	mtc1	$at,$f12
/*  f16b314:	3c013fc0 */ 	lui	$at,0x3fc0
/*  f16b318:	44818000 */ 	mtc1	$at,$f16
/*  f16b31c:	3c018007 */ 	lui	$at,0x8007
/*  f16b320:	e4229948 */ 	swc1	$f2,-0x66b8($at)
/*  f16b324:	3c018007 */ 	lui	$at,0x8007
/*  f16b328:	e422994c */ 	swc1	$f2,-0x66b4($at)
/*  f16b32c:	3c018007 */ 	lui	$at,0x8007
/*  f16b330:	e42c9950 */ 	swc1	$f12,-0x66b0($at)
/*  f16b334:	3c018007 */ 	lui	$at,0x8007
/*  f16b338:	e42c9954 */ 	swc1	$f12,-0x66ac($at)
/*  f16b33c:	3c018007 */ 	lui	$at,0x8007
/*  f16b340:	e4229958 */ 	swc1	$f2,-0x66a8($at)
/*  f16b344:	3c017f1b */ 	lui	$at,%hi(var7f1b7884)
/*  f16b348:	c42a7884 */ 	lwc1	$f10,%lo(var7f1b7884)($at)
/*  f16b34c:	3c018006 */ 	lui	$at,0x8006
/*  f16b350:	e42a2ca0 */ 	swc1	$f10,0x2ca0($at)
/*  f16b354:	3c018006 */ 	lui	$at,0x8006
/*  f16b358:	e42c2ca4 */ 	swc1	$f12,0x2ca4($at)
/*  f16b35c:	3c018006 */ 	lui	$at,0x8006
/*  f16b360:	e4222ca8 */ 	swc1	$f2,0x2ca8($at)
/*  f16b364:	3c013e80 */ 	lui	$at,0x3e80
/*  f16b368:	44819000 */ 	mtc1	$at,$f18
/*  f16b36c:	3c018008 */ 	lui	$at,0x8008
/*  f16b370:	e432e4a8 */ 	swc1	$f18,-0x1b58($at)
/*  f16b374:	3c018007 */ 	lui	$at,0x8007
/*  f16b378:	e4309880 */ 	swc1	$f16,-0x6780($at)
/*  f16b37c:	3c018007 */ 	lui	$at,0x8007
/*  f16b380:	e422995c */ 	swc1	$f2,-0x66a4($at)
/*  f16b384:	3c017f1b */ 	lui	$at,%hi(var7f1b7888)
/*  f16b388:	c4247888 */ 	lwc1	$f4,%lo(var7f1b7888)($at)
/*  f16b38c:	3c018006 */ 	lui	$at,0x8006
/*  f16b390:	10000117 */ 	beqz	$zero,.L0f16b7f0
/*  f16b394:	e4242cac */ 	swc1	$f4,0x2cac($at)
.L0f16b398:
/*  f16b398:	1441002a */ 	bne	$v0,$at,.L0f16b444
/*  f16b39c:	3c0f8008 */ 	lui	$t7,0x8008
/*  f16b3a0:	3c013f80 */ 	lui	$at,0x3f80
/*  f16b3a4:	44810000 */ 	mtc1	$at,$f0
/*  f16b3a8:	3c013f40 */ 	lui	$at,0x3f40
/*  f16b3ac:	44817000 */ 	mtc1	$at,$f14
/*  f16b3b0:	3c018007 */ 	lui	$at,0x8007
/*  f16b3b4:	e4209948 */ 	swc1	$f0,-0x66b8($at)
/*  f16b3b8:	3c018007 */ 	lui	$at,0x8007
/*  f16b3bc:	e420994c */ 	swc1	$f0,-0x66b4($at)
/*  f16b3c0:	3c018007 */ 	lui	$at,0x8007
/*  f16b3c4:	e42e9950 */ 	swc1	$f14,-0x66b0($at)
/*  f16b3c8:	3c018007 */ 	lui	$at,0x8007
/*  f16b3cc:	e4209954 */ 	swc1	$f0,-0x66ac($at)
/*  f16b3d0:	3c018007 */ 	lui	$at,0x8007
/*  f16b3d4:	e4209958 */ 	swc1	$f0,-0x66a8($at)
/*  f16b3d8:	3c018006 */ 	lui	$at,0x8006
/*  f16b3dc:	e42e2ca0 */ 	swc1	$f14,0x2ca0($at)
/*  f16b3e0:	3c018006 */ 	lui	$at,0x8006
/*  f16b3e4:	3c0e8008 */ 	lui	$t6,0x8008
/*  f16b3e8:	e4202ca4 */ 	swc1	$f0,0x2ca4($at)
/*  f16b3ec:	8dce4120 */ 	lw	$t6,0x4120($t6)
/*  f16b3f0:	3c018006 */ 	lui	$at,0x8006
/*  f16b3f4:	e4202ca8 */ 	swc1	$f0,0x2ca8($at)
/*  f16b3f8:	3c018008 */ 	lui	$at,0x8008
/*  f16b3fc:	11c00006 */ 	beqz	$t6,.L0f16b418
/*  f16b400:	e420e4a8 */ 	swc1	$f0,-0x1b58($at)
/*  f16b404:	3c017f1b */ 	lui	$at,%hi(var7f1b788c)
/*  f16b408:	c426788c */ 	lwc1	$f6,%lo(var7f1b788c)($at)
/*  f16b40c:	3c018007 */ 	lui	$at,0x8007
/*  f16b410:	10000003 */ 	beqz	$zero,.L0f16b420
/*  f16b414:	e4269880 */ 	swc1	$f6,-0x6780($at)
.L0f16b418:
/*  f16b418:	3c018007 */ 	lui	$at,0x8007
/*  f16b41c:	e42e9880 */ 	swc1	$f14,-0x6780($at)
.L0f16b420:
/*  f16b420:	3c013f00 */ 	lui	$at,0x3f00
/*  f16b424:	44816000 */ 	mtc1	$at,$f12
/*  f16b428:	3c013fc0 */ 	lui	$at,0x3fc0
/*  f16b42c:	44818000 */ 	mtc1	$at,$f16
/*  f16b430:	3c018007 */ 	lui	$at,0x8007
/*  f16b434:	e430995c */ 	swc1	$f16,-0x66a4($at)
/*  f16b438:	3c018006 */ 	lui	$at,0x8006
/*  f16b43c:	100000ec */ 	beqz	$zero,.L0f16b7f0
/*  f16b440:	e42c2cac */ 	swc1	$f12,0x2cac($at)
.L0f16b444:
/*  f16b444:	3c013f80 */ 	lui	$at,0x3f80
/*  f16b448:	44810000 */ 	mtc1	$at,$f0
/*  f16b44c:	3c013fc0 */ 	lui	$at,0x3fc0
/*  f16b450:	44818000 */ 	mtc1	$at,$f16
/*  f16b454:	3c018007 */ 	lui	$at,0x8007
/*  f16b458:	e4209948 */ 	swc1	$f0,-0x66b8($at)
/*  f16b45c:	3c018007 */ 	lui	$at,0x8007
/*  f16b460:	e420994c */ 	swc1	$f0,-0x66b4($at)
/*  f16b464:	3c018007 */ 	lui	$at,0x8007
/*  f16b468:	e4209950 */ 	swc1	$f0,-0x66b0($at)
/*  f16b46c:	3c018007 */ 	lui	$at,0x8007
/*  f16b470:	e4309954 */ 	swc1	$f16,-0x66ac($at)
/*  f16b474:	3c018007 */ 	lui	$at,0x8007
/*  f16b478:	e4209958 */ 	swc1	$f0,-0x66a8($at)
/*  f16b47c:	3c018006 */ 	lui	$at,0x8006
/*  f16b480:	e4302ca0 */ 	swc1	$f16,0x2ca0($at)
/*  f16b484:	3c018006 */ 	lui	$at,0x8006
/*  f16b488:	e4302ca4 */ 	swc1	$f16,0x2ca4($at)
/*  f16b48c:	8def4120 */ 	lw	$t7,0x4120($t7)
/*  f16b490:	3c018006 */ 	lui	$at,0x8006
/*  f16b494:	e4202ca8 */ 	swc1	$f0,0x2ca8($at)
/*  f16b498:	3c018008 */ 	lui	$at,0x8008
/*  f16b49c:	11e00006 */ 	beqz	$t7,.L0f16b4b8
/*  f16b4a0:	e430e4a8 */ 	swc1	$f16,-0x1b58($at)
/*  f16b4a4:	3c013f40 */ 	lui	$at,0x3f40
/*  f16b4a8:	44817000 */ 	mtc1	$at,$f14
/*  f16b4ac:	3c018007 */ 	lui	$at,0x8007
/*  f16b4b0:	10000005 */ 	beqz	$zero,.L0f16b4c8
/*  f16b4b4:	e42e9880 */ 	swc1	$f14,-0x6780($at)
.L0f16b4b8:
/*  f16b4b8:	3c017f1b */ 	lui	$at,%hi(var7f1b7890)
/*  f16b4bc:	c4287890 */ 	lwc1	$f8,%lo(var7f1b7890)($at)
/*  f16b4c0:	3c018007 */ 	lui	$at,0x8007
/*  f16b4c4:	e4289880 */ 	swc1	$f8,-0x6780($at)
.L0f16b4c8:
/*  f16b4c8:	3c018007 */ 	lui	$at,0x8007
/*  f16b4cc:	e420995c */ 	swc1	$f0,-0x66a4($at)
/*  f16b4d0:	3c018006 */ 	lui	$at,0x8006
/*  f16b4d4:	100000c6 */ 	beqz	$zero,.L0f16b7f0
/*  f16b4d8:	e4202cac */ 	swc1	$f0,0x2cac($at)
.L0f16b4dc:
/*  f16b4dc:	8c424020 */ 	lw	$v0,0x4020($v0)
/*  f16b4e0:	24010001 */ 	addiu	$at,$zero,0x1
/*  f16b4e4:	1440004d */ 	bnez	$v0,.L0f16b61c
/*  f16b4e8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16b4ec:	3c013f80 */ 	lui	$at,0x3f80
/*  f16b4f0:	44817000 */ 	mtc1	$at,$f14
/*  f16b4f4:	04830023 */ 	bgezl	$a0,.L0f16b584
/*  f16b4f8:	3c014000 */ 	lui	$at,0x4000
/*  f16b4fc:	04630021 */ 	bgezl	$v1,.L0f16b584
/*  f16b500:	3c014000 */ 	lui	$at,0x4000
/*  f16b504:	0fc30865 */ 	jal	func0f0c2194
/*  f16b508:	e7ae0020 */ 	swc1	$f14,0x20($sp)
/*  f16b50c:	0fc30869 */ 	jal	func0f0c21a4
/*  f16b510:	e7a0001c */ 	swc1	$f0,0x1c($sp)
/*  f16b514:	c7aa001c */ 	lwc1	$f10,0x1c($sp)
/*  f16b518:	3c013e00 */ 	lui	$at,0x3e00
/*  f16b51c:	44818000 */ 	mtc1	$at,$f16
/*  f16b520:	460a0080 */ 	add.s	$f2,$f0,$f10
/*  f16b524:	c7ae0020 */ 	lwc1	$f14,0x20($sp)
/*  f16b528:	3c017f1b */ 	lui	$at,%hi(var7f1b7894)
/*  f16b52c:	4610103e */ 	c.le.s	$f2,$f16
/*  f16b530:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16b534:	45000005 */ 	bc1f	.L0f16b54c
/*  f16b538:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16b53c:	3c013f00 */ 	lui	$at,0x3f00
/*  f16b540:	44817000 */ 	mtc1	$at,$f14
/*  f16b544:	1000000f */ 	beqz	$zero,.L0f16b584
/*  f16b548:	3c014000 */ 	lui	$at,0x4000
.L0f16b54c:
/*  f16b54c:	c4327894 */ 	lwc1	$f18,%lo(var7f1b7894)($at)
/*  f16b550:	3c013f00 */ 	lui	$at,0x3f00
/*  f16b554:	4612103e */ 	c.le.s	$f2,$f18
/*  f16b558:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16b55c:	45020009 */ 	bc1fl	.L0f16b584
/*  f16b560:	3c014000 */ 	lui	$at,0x4000
/*  f16b564:	46101101 */ 	sub.s	$f4,$f2,$f16
/*  f16b568:	44816000 */ 	mtc1	$at,$f12
/*  f16b56c:	3c017f1b */ 	lui	$at,%hi(var7f1b7898)
/*  f16b570:	c4287898 */ 	lwc1	$f8,%lo(var7f1b7898)($at)
/*  f16b574:	460c2182 */ 	mul.s	$f6,$f4,$f12
/*  f16b578:	46083283 */ 	div.s	$f10,$f6,$f8
/*  f16b57c:	460c5380 */ 	add.s	$f14,$f10,$f12
/*  f16b580:	3c014000 */ 	lui	$at,0x4000
.L0f16b584:
/*  f16b584:	44811000 */ 	mtc1	$at,$f2
/*  f16b588:	3c013f00 */ 	lui	$at,0x3f00
/*  f16b58c:	44816000 */ 	mtc1	$at,$f12
/*  f16b590:	3c013fc0 */ 	lui	$at,0x3fc0
/*  f16b594:	44818000 */ 	mtc1	$at,$f16
/*  f16b598:	460e6002 */ 	mul.s	$f0,$f12,$f14
/*  f16b59c:	3c018007 */ 	lui	$at,0x8007
/*  f16b5a0:	e4229948 */ 	swc1	$f2,-0x66b8($at)
/*  f16b5a4:	3c018007 */ 	lui	$at,0x8007
/*  f16b5a8:	e422994c */ 	swc1	$f2,-0x66b4($at)
/*  f16b5ac:	3c018007 */ 	lui	$at,0x8007
/*  f16b5b0:	e4209950 */ 	swc1	$f0,-0x66b0($at)
/*  f16b5b4:	3c018007 */ 	lui	$at,0x8007
/*  f16b5b8:	e4209954 */ 	swc1	$f0,-0x66ac($at)
/*  f16b5bc:	3c018007 */ 	lui	$at,0x8007
/*  f16b5c0:	e4229958 */ 	swc1	$f2,-0x66a8($at)
/*  f16b5c4:	3c017f1b */ 	lui	$at,%hi(var7f1b789c)
/*  f16b5c8:	c432789c */ 	lwc1	$f18,%lo(var7f1b789c)($at)
/*  f16b5cc:	3c018006 */ 	lui	$at,0x8006
/*  f16b5d0:	e4322ca0 */ 	swc1	$f18,0x2ca0($at)
/*  f16b5d4:	3c018006 */ 	lui	$at,0x8006
/*  f16b5d8:	e4202ca4 */ 	swc1	$f0,0x2ca4($at)
/*  f16b5dc:	3c018006 */ 	lui	$at,0x8006
/*  f16b5e0:	e4222ca8 */ 	swc1	$f2,0x2ca8($at)
/*  f16b5e4:	3c013e80 */ 	lui	$at,0x3e80
/*  f16b5e8:	44812000 */ 	mtc1	$at,$f4
/*  f16b5ec:	3c018008 */ 	lui	$at,0x8008
/*  f16b5f0:	460e2182 */ 	mul.s	$f6,$f4,$f14
/*  f16b5f4:	e426e4a8 */ 	swc1	$f6,-0x1b58($at)
/*  f16b5f8:	3c018007 */ 	lui	$at,0x8007
/*  f16b5fc:	e4309880 */ 	swc1	$f16,-0x6780($at)
/*  f16b600:	3c018007 */ 	lui	$at,0x8007
/*  f16b604:	e422995c */ 	swc1	$f2,-0x66a4($at)
/*  f16b608:	3c017f1b */ 	lui	$at,%hi(var7f1b78a0)
/*  f16b60c:	c42878a0 */ 	lwc1	$f8,%lo(var7f1b78a0)($at)
/*  f16b610:	3c018006 */ 	lui	$at,0x8006
/*  f16b614:	10000076 */ 	beqz	$zero,.L0f16b7f0
/*  f16b618:	e4282cac */ 	swc1	$f8,0x2cac($at)
.L0f16b61c:
/*  f16b61c:	1441002d */ 	bne	$v0,$at,.L0f16b6d4
/*  f16b620:	3c013f80 */ 	lui	$at,0x3f80
/*  f16b624:	44810000 */ 	mtc1	$at,$f0
/*  f16b628:	3c013f40 */ 	lui	$at,0x3f40
/*  f16b62c:	44817000 */ 	mtc1	$at,$f14
/*  f16b630:	3c018007 */ 	lui	$at,0x8007
/*  f16b634:	e4209948 */ 	swc1	$f0,-0x66b8($at)
/*  f16b638:	3c018007 */ 	lui	$at,0x8007
/*  f16b63c:	e420994c */ 	swc1	$f0,-0x66b4($at)
/*  f16b640:	3c018007 */ 	lui	$at,0x8007
/*  f16b644:	e42e9950 */ 	swc1	$f14,-0x66b0($at)
/*  f16b648:	3c018007 */ 	lui	$at,0x8007
/*  f16b64c:	e42e9954 */ 	swc1	$f14,-0x66ac($at)
/*  f16b650:	3c018007 */ 	lui	$at,0x8007
/*  f16b654:	e4209958 */ 	swc1	$f0,-0x66a8($at)
/*  f16b658:	3c017f1b */ 	lui	$at,%hi(var7f1b78a4)
/*  f16b65c:	c42a78a4 */ 	lwc1	$f10,%lo(var7f1b78a4)($at)
/*  f16b660:	3c018006 */ 	lui	$at,0x8006
/*  f16b664:	3c188008 */ 	lui	$t8,0x8008
/*  f16b668:	e42a2ca0 */ 	swc1	$f10,0x2ca0($at)
/*  f16b66c:	3c017f1b */ 	lui	$at,%hi(var7f1b78a8)
/*  f16b670:	c43278a8 */ 	lwc1	$f18,%lo(var7f1b78a8)($at)
/*  f16b674:	3c018006 */ 	lui	$at,0x8006
/*  f16b678:	8f184120 */ 	lw	$t8,0x4120($t8)
/*  f16b67c:	e4322ca4 */ 	swc1	$f18,0x2ca4($at)
/*  f16b680:	3c018006 */ 	lui	$at,0x8006
/*  f16b684:	e4202ca8 */ 	swc1	$f0,0x2ca8($at)
/*  f16b688:	3c018008 */ 	lui	$at,0x8008
/*  f16b68c:	13000006 */ 	beqz	$t8,.L0f16b6a8
/*  f16b690:	e42ee4a8 */ 	swc1	$f14,-0x1b58($at)
/*  f16b694:	3c017f1b */ 	lui	$at,%hi(var7f1b78ac)
/*  f16b698:	c42478ac */ 	lwc1	$f4,%lo(var7f1b78ac)($at)
/*  f16b69c:	3c018007 */ 	lui	$at,0x8007
/*  f16b6a0:	10000003 */ 	beqz	$zero,.L0f16b6b0
/*  f16b6a4:	e4249880 */ 	swc1	$f4,-0x6780($at)
.L0f16b6a8:
/*  f16b6a8:	3c018007 */ 	lui	$at,0x8007
/*  f16b6ac:	e42e9880 */ 	swc1	$f14,-0x6780($at)
.L0f16b6b0:
/*  f16b6b0:	3c013f00 */ 	lui	$at,0x3f00
/*  f16b6b4:	44816000 */ 	mtc1	$at,$f12
/*  f16b6b8:	3c013fc0 */ 	lui	$at,0x3fc0
/*  f16b6bc:	44818000 */ 	mtc1	$at,$f16
/*  f16b6c0:	3c018007 */ 	lui	$at,0x8007
/*  f16b6c4:	e430995c */ 	swc1	$f16,-0x66a4($at)
/*  f16b6c8:	3c018006 */ 	lui	$at,0x8006
/*  f16b6cc:	10000048 */ 	beqz	$zero,.L0f16b7f0
/*  f16b6d0:	e42c2cac */ 	swc1	$f12,0x2cac($at)
.L0f16b6d4:
/*  f16b6d4:	24010002 */ 	addiu	$at,$zero,0x2
/*  f16b6d8:	14410027 */ 	bne	$v0,$at,.L0f16b778
/*  f16b6dc:	3c013f80 */ 	lui	$at,0x3f80
/*  f16b6e0:	44810000 */ 	mtc1	$at,$f0
/*  f16b6e4:	3c018007 */ 	lui	$at,0x8007
/*  f16b6e8:	3c198008 */ 	lui	$t9,0x8008
/*  f16b6ec:	e4209948 */ 	swc1	$f0,-0x66b8($at)
/*  f16b6f0:	3c018007 */ 	lui	$at,0x8007
/*  f16b6f4:	e420994c */ 	swc1	$f0,-0x66b4($at)
/*  f16b6f8:	3c018007 */ 	lui	$at,0x8007
/*  f16b6fc:	e4209950 */ 	swc1	$f0,-0x66b0($at)
/*  f16b700:	3c018007 */ 	lui	$at,0x8007
/*  f16b704:	e4209954 */ 	swc1	$f0,-0x66ac($at)
/*  f16b708:	3c018007 */ 	lui	$at,0x8007
/*  f16b70c:	e4209958 */ 	swc1	$f0,-0x66a8($at)
/*  f16b710:	3c017f1b */ 	lui	$at,%hi(var7f1b78b0)
/*  f16b714:	c42678b0 */ 	lwc1	$f6,%lo(var7f1b78b0)($at)
/*  f16b718:	3c018006 */ 	lui	$at,0x8006
/*  f16b71c:	8f394120 */ 	lw	$t9,0x4120($t9)
/*  f16b720:	e4262ca0 */ 	swc1	$f6,0x2ca0($at)
/*  f16b724:	3c018006 */ 	lui	$at,0x8006
/*  f16b728:	e4202ca4 */ 	swc1	$f0,0x2ca4($at)
/*  f16b72c:	3c018006 */ 	lui	$at,0x8006
/*  f16b730:	e4202ca8 */ 	swc1	$f0,0x2ca8($at)
/*  f16b734:	3c018008 */ 	lui	$at,0x8008
/*  f16b738:	13200006 */ 	beqz	$t9,.L0f16b754
/*  f16b73c:	e420e4a8 */ 	swc1	$f0,-0x1b58($at)
/*  f16b740:	3c013f40 */ 	lui	$at,0x3f40
/*  f16b744:	44817000 */ 	mtc1	$at,$f14
/*  f16b748:	3c018007 */ 	lui	$at,0x8007
/*  f16b74c:	10000005 */ 	beqz	$zero,.L0f16b764
/*  f16b750:	e42e9880 */ 	swc1	$f14,-0x6780($at)
.L0f16b754:
/*  f16b754:	3c017f1b */ 	lui	$at,%hi(var7f1b78b4)
/*  f16b758:	c42878b4 */ 	lwc1	$f8,%lo(var7f1b78b4)($at)
/*  f16b75c:	3c018007 */ 	lui	$at,0x8007
/*  f16b760:	e4289880 */ 	swc1	$f8,-0x6780($at)
.L0f16b764:
/*  f16b764:	3c018007 */ 	lui	$at,0x8007
/*  f16b768:	e420995c */ 	swc1	$f0,-0x66a4($at)
/*  f16b76c:	3c018006 */ 	lui	$at,0x8006
/*  f16b770:	1000001f */ 	beqz	$zero,.L0f16b7f0
/*  f16b774:	e4202cac */ 	swc1	$f0,0x2cac($at)
.L0f16b778:
/*  f16b778:	24010003 */ 	addiu	$at,$zero,0x3
/*  f16b77c:	1441001c */ 	bne	$v0,$at,.L0f16b7f0
/*  f16b780:	3c013f80 */ 	lui	$at,0x3f80
/*  f16b784:	44810000 */ 	mtc1	$at,$f0
/*  f16b788:	3c018007 */ 	lui	$at,0x8007
/*  f16b78c:	e4209948 */ 	swc1	$f0,-0x66b8($at)
/*  f16b790:	3c018007 */ 	lui	$at,0x8007
/*  f16b794:	e420994c */ 	swc1	$f0,-0x66b4($at)
/*  f16b798:	3c018007 */ 	lui	$at,0x8007
/*  f16b79c:	e4209950 */ 	swc1	$f0,-0x66b0($at)
/*  f16b7a0:	3c018007 */ 	lui	$at,0x8007
/*  f16b7a4:	e4209954 */ 	swc1	$f0,-0x66ac($at)
/*  f16b7a8:	3c018007 */ 	lui	$at,0x8007
/*  f16b7ac:	e4209958 */ 	swc1	$f0,-0x66a8($at)
/*  f16b7b0:	3c017f1b */ 	lui	$at,%hi(var7f1b78b8)
/*  f16b7b4:	c42a78b8 */ 	lwc1	$f10,%lo(var7f1b78b8)($at)
/*  f16b7b8:	3c018006 */ 	lui	$at,0x8006
/*  f16b7bc:	e42a2ca0 */ 	swc1	$f10,0x2ca0($at)
/*  f16b7c0:	3c018006 */ 	lui	$at,0x8006
/*  f16b7c4:	e4202ca4 */ 	swc1	$f0,0x2ca4($at)
/*  f16b7c8:	3c018006 */ 	lui	$at,0x8006
/*  f16b7cc:	e4202ca8 */ 	swc1	$f0,0x2ca8($at)
/*  f16b7d0:	3c018008 */ 	lui	$at,0x8008
/*  f16b7d4:	e420e4a8 */ 	swc1	$f0,-0x1b58($at)
/*  f16b7d8:	3c018007 */ 	lui	$at,0x8007
/*  f16b7dc:	e4209880 */ 	swc1	$f0,-0x6780($at)
/*  f16b7e0:	3c018007 */ 	lui	$at,0x8007
/*  f16b7e4:	e420995c */ 	swc1	$f0,-0x66a4($at)
/*  f16b7e8:	3c018006 */ 	lui	$at,0x8006
/*  f16b7ec:	e4202cac */ 	swc1	$f0,0x2cac($at)
.L0f16b7f0:
/*  f16b7f0:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16b7f4:	27bd0028 */ 	addiu	$sp,$sp,0x28
/*  f16b7f8:	03e00008 */ 	jr	$ra
/*  f16b7fc:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16b800
/*  f16b800:	3c01ffff */ 	lui	$at,0xffff
/*  f16b804:	34212bcf */ 	ori	$at,$at,0x2bcf
/*  f16b808:	03e00008 */ 	jr	$ra
/*  f16b80c:	00811021 */ 	addu	$v0,$a0,$at
);

GLOBAL_ASM(
glabel func0f16b810
/*  f16b810:	3c02800a */ 	lui	$v0,%hi(g_Vars)
/*  f16b814:	24429fc0 */ 	addiu	$v0,$v0,%lo(g_Vars)
/*  f16b818:	8c4e04cc */ 	lw	$t6,0x4cc($v0)
/*  f16b81c:	3c038008 */ 	lui	$v1,%hi(var800840a4)
/*  f16b820:	246340a4 */ 	addiu	$v1,$v1,%lo(var800840a4)
/*  f16b824:	11c00006 */ 	beqz	$t6,.L0f16b840
/*  f16b828:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16b82c:	8c6f0000 */ 	lw	$t7,0x0($v1)
/*  f16b830:	8c580038 */ 	lw	$t8,0x38($v0)
/*  f16b834:	01f8c821 */ 	addu	$t9,$t7,$t8
/*  f16b838:	03e00008 */ 	jr	$ra
/*  f16b83c:	ac790000 */ 	sw	$t9,0x0($v1)
.L0f16b840:
/*  f16b840:	3c038008 */ 	lui	$v1,%hi(var800840a4)
/*  f16b844:	246340a4 */ 	addiu	$v1,$v1,%lo(var800840a4)
/*  f16b848:	ac600000 */ 	sw	$zero,0x0($v1)
/*  f16b84c:	03e00008 */ 	jr	$ra
/*  f16b850:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16b854
/*  f16b854:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f16b858:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16b85c:	3c04b000 */ 	lui	$a0,0xb000
/*  f16b860:	0fc5ae00 */ 	jal	func0f16b800
/*  f16b864:	3484de8d */ 	ori	$a0,$a0,0xde8d
/*  f16b868:	3c041741 */ 	lui	$a0,0x1741
/*  f16b86c:	afa2002c */ 	sw	$v0,0x2c($sp)
/*  f16b870:	0fc5ae00 */ 	jal	func0f16b800
/*  f16b874:	3484d42a */ 	ori	$a0,$a0,0xd42a
/*  f16b878:	afa20024 */ 	sw	$v0,0x24($sp)
/*  f16b87c:	8fa4002c */ 	lw	$a0,0x2c($sp)
/*  f16b880:	0c013994 */ 	jal	func0004e650
/*  f16b884:	27a50028 */ 	addiu	$a1,$sp,0x28
/*  f16b888:	8fae0028 */ 	lw	$t6,0x28($sp)
/*  f16b88c:	8faf0024 */ 	lw	$t7,0x24($sp)
/*  f16b890:	3c058006 */ 	lui	$a1,0x8006
/*  f16b894:	24a29fe0 */ 	addiu	$v0,$a1,-24608
/*  f16b898:	11cf000d */ 	beq	$t6,$t7,.L0f16b8d0
/*  f16b89c:	3c09800a */ 	lui	$t1,0x800a
/*  f16b8a0:	3c188006 */ 	lui	$t8,0x8006
/*  f16b8a4:	24431000 */ 	addiu	$v1,$v0,0x1000
/*  f16b8a8:	27189fe1 */ 	addiu	$t8,$t8,-24607
/*  f16b8ac:	0078082b */ 	sltu	$at,$v1,$t8
/*  f16b8b0:	14200007 */ 	bnez	$at,.L0f16b8d0
/*  f16b8b4:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16b8b8:
/*  f16b8b8:	8c590000 */ 	lw	$t9,0x0($v0)
/*  f16b8bc:	24420004 */ 	addiu	$v0,$v0,0x4
/*  f16b8c0:	0043082b */ 	sltu	$at,$v0,$v1
/*  f16b8c4:	27280008 */ 	addiu	$t0,$t9,0x8
/*  f16b8c8:	1420fffb */ 	bnez	$at,.L0f16b8b8
/*  f16b8cc:	ac48fffc */ 	sw	$t0,-0x4($v0)
.L0f16b8d0:
/*  f16b8d0:	8d29a2d8 */ 	lw	$t1,-0x5d28($t1)
/*  f16b8d4:	3c02800b */ 	lui	$v0,0x800b
/*  f16b8d8:	1120000b */ 	beqz	$t1,.L0f16b908
/*  f16b8dc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16b8e0:	8c42cb94 */ 	lw	$v0,-0x346c($v0)
/*  f16b8e4:	304a0040 */ 	andi	$t2,$v0,0x40
/*  f16b8e8:	11400003 */ 	beqz	$t2,.L0f16b8f8
/*  f16b8ec:	304b0080 */ 	andi	$t3,$v0,0x80
/*  f16b8f0:	1000001a */ 	beqz	$zero,.L0f16b95c
/*  f16b8f4:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16b8f8:
/*  f16b8f8:	51600018 */ 	beqzl	$t3,.L0f16b95c
/*  f16b8fc:	00001025 */ 	or	$v0,$zero,$zero
/*  f16b900:	10000016 */ 	beqz	$zero,.L0f16b95c
/*  f16b904:	24020002 */ 	addiu	$v0,$zero,0x2
.L0f16b908:
/*  f16b908:	0fc41b99 */ 	jal	cheatIsActive
/*  f16b90c:	24040006 */ 	addiu	$a0,$zero,0x6
/*  f16b910:	10400003 */ 	beqz	$v0,.L0f16b920
/*  f16b914:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16b918:	10000010 */ 	beqz	$zero,.L0f16b95c
/*  f16b91c:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16b920:
/*  f16b920:	0fc47b9c */ 	jal	func0f11ee70
/*  f16b924:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16b928:	24010001 */ 	addiu	$at,$zero,0x1
/*  f16b92c:	14410003 */ 	bne	$v0,$at,.L0f16b93c
/*  f16b930:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16b934:	10000009 */ 	beqz	$zero,.L0f16b95c
/*  f16b938:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16b93c:
/*  f16b93c:	0fc47b9c */ 	jal	func0f11ee70
/*  f16b940:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16b944:	24010002 */ 	addiu	$at,$zero,0x2
/*  f16b948:	54410004 */ 	bnel	$v0,$at,.L0f16b95c
/*  f16b94c:	00001025 */ 	or	$v0,$zero,$zero
/*  f16b950:	10000002 */ 	beqz	$zero,.L0f16b95c
/*  f16b954:	24020002 */ 	addiu	$v0,$zero,0x2
/*  f16b958:	00001025 */ 	or	$v0,$zero,$zero
.L0f16b95c:
/*  f16b95c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16b960:	27bd0030 */ 	addiu	$sp,$sp,0x30
/*  f16b964:	03e00008 */ 	jr	$ra
/*  f16b968:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16b96c
/*  f16b96c:	27bdfd70 */ 	addiu	$sp,$sp,-656
/*  f16b970:	afbf0044 */ 	sw	$ra,0x44($sp)
/*  f16b974:	afb50040 */ 	sw	$s5,0x40($sp)
/*  f16b978:	afb4003c */ 	sw	$s4,0x3c($sp)
/*  f16b97c:	afb30038 */ 	sw	$s3,0x38($sp)
/*  f16b980:	afb20034 */ 	sw	$s2,0x34($sp)
/*  f16b984:	afb10030 */ 	sw	$s1,0x30($sp)
/*  f16b988:	0fc5b339 */ 	jal	func0f16cce4
/*  f16b98c:	afb0002c */ 	sw	$s0,0x2c($sp)
/*  f16b990:	3c14800a */ 	lui	$s4,%hi(g_Vars)
/*  f16b994:	26949fc0 */ 	addiu	$s4,$s4,%lo(g_Vars)
/*  f16b998:	968e04e4 */ 	lhu	$t6,0x4e4($s4)
/*  f16b99c:	51c00004 */ 	beqzl	$t6,.L0f16b9b0
/*  f16b9a0:	8e8204d8 */ 	lw	$v0,0x4d8($s4)
/*  f16b9a4:	0fc47153 */ 	jal	func0f11c54c
/*  f16b9a8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16b9ac:	8e8204d8 */ 	lw	$v0,0x4d8($s4)
.L0f16b9b0:
/*  f16b9b0:	18400003 */ 	blez	$v0,.L0f16b9c0
/*  f16b9b4:	244fffff */ 	addiu	$t7,$v0,-1
/*  f16b9b8:	10000015 */ 	beqz	$zero,.L0f16ba10
/*  f16b9bc:	ae8f04d8 */ 	sw	$t7,0x4d8($s4)
.L0f16b9c0:
/*  f16b9c0:	14400013 */ 	bnez	$v0,.L0f16ba10
/*  f16b9c4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16b9c8:	0c004e4e */ 	jal	func00013938
/*  f16b9cc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16b9d0:	8e8204b4 */ 	lw	$v0,0x4b4($s4)
/*  f16b9d4:	2401005a */ 	addiu	$at,$zero,0x5a
/*  f16b9d8:	10410007 */ 	beq	$v0,$at,.L0f16b9f8
/*  f16b9dc:	2401005b */ 	addiu	$at,$zero,0x5b
/*  f16b9e0:	10410005 */ 	beq	$v0,$at,.L0f16b9f8
/*  f16b9e4:	2401005c */ 	addiu	$at,$zero,0x5c
/*  f16b9e8:	10410003 */ 	beq	$v0,$at,.L0f16b9f8
/*  f16b9ec:	2401005d */ 	addiu	$at,$zero,0x5d
/*  f16b9f0:	14410003 */ 	bne	$v0,$at,.L0f16ba00
/*  f16b9f4:	2418001f */ 	addiu	$t8,$zero,0x1f
.L0f16b9f8:
/*  f16b9f8:	10000003 */ 	beqz	$zero,.L0f16ba08
/*  f16b9fc:	a28004d1 */ 	sb	$zero,0x4d1($s4)
.L0f16ba00:
/*  f16ba00:	0fc477ce */ 	jal	func0f11df38
/*  f16ba04:	a29804d1 */ 	sb	$t8,0x4d1($s4)
.L0f16ba08:
/*  f16ba08:	2415ffff */ 	addiu	$s5,$zero,-1
/*  f16ba0c:	ae9504d8 */ 	sw	$s5,0x4d8($s4)
.L0f16ba10:
/*  f16ba10:	3c198009 */ 	lui	$t9,0x8009
/*  f16ba14:	93390af0 */ 	lbu	$t9,0xaf0($t9)
/*  f16ba18:	24100001 */ 	addiu	$s0,$zero,0x1
/*  f16ba1c:	2415ffff */ 	addiu	$s5,$zero,-1
/*  f16ba20:	56190004 */ 	bnel	$s0,$t9,.L0f16ba34
/*  f16ba24:	8e8c006c */ 	lw	$t4,0x6c($s4)
/*  f16ba28:	0fc66ad0 */ 	jal	func0f19ab40
/*  f16ba2c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ba30:	8e8c006c */ 	lw	$t4,0x6c($s4)
.L0f16ba34:
/*  f16ba34:	00003825 */ 	or	$a3,$zero,$zero
/*  f16ba38:	51800004 */ 	beqzl	$t4,.L0f16ba4c
/*  f16ba3c:	00002825 */ 	or	$a1,$zero,$zero
/*  f16ba40:	10000002 */ 	beqz	$zero,.L0f16ba4c
/*  f16ba44:	02002825 */ 	or	$a1,$s0,$zero
/*  f16ba48:	00002825 */ 	or	$a1,$zero,$zero
.L0f16ba4c:
/*  f16ba4c:	8e8d0068 */ 	lw	$t5,0x68($s4)
/*  f16ba50:	51a00004 */ 	beqzl	$t5,.L0f16ba64
/*  f16ba54:	00002025 */ 	or	$a0,$zero,$zero
/*  f16ba58:	10000002 */ 	beqz	$zero,.L0f16ba64
/*  f16ba5c:	02002025 */ 	or	$a0,$s0,$zero
/*  f16ba60:	00002025 */ 	or	$a0,$zero,$zero
.L0f16ba64:
/*  f16ba64:	8e8e0064 */ 	lw	$t6,0x64($s4)
/*  f16ba68:	51c00004 */ 	beqzl	$t6,.L0f16ba7c
/*  f16ba6c:	00001825 */ 	or	$v1,$zero,$zero
/*  f16ba70:	10000002 */ 	beqz	$zero,.L0f16ba7c
/*  f16ba74:	02001825 */ 	or	$v1,$s0,$zero
/*  f16ba78:	00001825 */ 	or	$v1,$zero,$zero
.L0f16ba7c:
/*  f16ba7c:	8e8f0070 */ 	lw	$t7,0x70($s4)
/*  f16ba80:	51e00004 */ 	beqzl	$t7,.L0f16ba94
/*  f16ba84:	00001025 */ 	or	$v0,$zero,$zero
/*  f16ba88:	10000002 */ 	beqz	$zero,.L0f16ba94
/*  f16ba8c:	02001025 */ 	or	$v0,$s0,$zero
/*  f16ba90:	00001025 */ 	or	$v0,$zero,$zero
.L0f16ba94:
/*  f16ba94:	0043c021 */ 	addu	$t8,$v0,$v1
/*  f16ba98:	0304c821 */ 	addu	$t9,$t8,$a0
/*  f16ba9c:	03256021 */ 	addu	$t4,$t9,$a1
/*  f16baa0:	19800026 */ 	blez	$t4,.L0f16bb3c
/*  f16baa4:	00076880 */ 	sll	$t5,$a3,0x2
/*  f16baa8:	028d3021 */ 	addu	$a2,$s4,$t5
/*  f16baac:	8cce0064 */ 	lw	$t6,0x64($a2)
.L0f16bab0:
/*  f16bab0:	24e70001 */ 	addiu	$a3,$a3,0x1
/*  f16bab4:	24c60004 */ 	addiu	$a2,$a2,0x4
/*  f16bab8:	adc01490 */ 	sw	$zero,0x1490($t6)
/*  f16babc:	8ccf0060 */ 	lw	$t7,0x60($a2)
/*  f16bac0:	00002825 */ 	or	$a1,$zero,$zero
/*  f16bac4:	00002025 */ 	or	$a0,$zero,$zero
/*  f16bac8:	ade00cec */ 	sw	$zero,0xcec($t7)
/*  f16bacc:	8e98006c */ 	lw	$t8,0x6c($s4)
/*  f16bad0:	00001825 */ 	or	$v1,$zero,$zero
/*  f16bad4:	00001025 */ 	or	$v0,$zero,$zero
/*  f16bad8:	13000003 */ 	beqz	$t8,.L0f16bae8
/*  f16badc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bae0:	10000001 */ 	beqz	$zero,.L0f16bae8
/*  f16bae4:	02002825 */ 	or	$a1,$s0,$zero
.L0f16bae8:
/*  f16bae8:	8e990068 */ 	lw	$t9,0x68($s4)
/*  f16baec:	13200003 */ 	beqz	$t9,.L0f16bafc
/*  f16baf0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16baf4:	10000001 */ 	beqz	$zero,.L0f16bafc
/*  f16baf8:	02002025 */ 	or	$a0,$s0,$zero
.L0f16bafc:
/*  f16bafc:	8e8c0064 */ 	lw	$t4,0x64($s4)
/*  f16bb00:	11800003 */ 	beqz	$t4,.L0f16bb10
/*  f16bb04:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bb08:	10000001 */ 	beqz	$zero,.L0f16bb10
/*  f16bb0c:	02001825 */ 	or	$v1,$s0,$zero
.L0f16bb10:
/*  f16bb10:	8e8d0070 */ 	lw	$t5,0x70($s4)
/*  f16bb14:	11a00003 */ 	beqz	$t5,.L0f16bb24
/*  f16bb18:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bb1c:	10000001 */ 	beqz	$zero,.L0f16bb24
/*  f16bb20:	02001025 */ 	or	$v0,$s0,$zero
.L0f16bb24:
/*  f16bb24:	00437021 */ 	addu	$t6,$v0,$v1
/*  f16bb28:	01c47821 */ 	addu	$t7,$t6,$a0
/*  f16bb2c:	01e5c021 */ 	addu	$t8,$t7,$a1
/*  f16bb30:	00f8082a */ 	slt	$at,$a3,$t8
/*  f16bb34:	5420ffde */ 	bnezl	$at,.L0f16bab0
/*  f16bb38:	8cce0064 */ 	lw	$t6,0x64($a2)
.L0f16bb3c:
/*  f16bb3c:	0fc5b364 */ 	jal	getVar80084014
/*  f16bb40:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bb44:	10400003 */ 	beqz	$v0,.L0f16bb54
/*  f16bb48:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bb4c:	1000011a */ 	beqz	$zero,.L0f16bfb8
/*  f16bb50:	ae800034 */ 	sw	$zero,0x34($s4)
.L0f16bb54:
/*  f16bb54:	0fc62590 */ 	jal	func0f189640
/*  f16bb58:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bb5c:	10400044 */ 	beqz	$v0,.L0f16bc70
/*  f16bb60:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bb64:	8e99006c */ 	lw	$t9,0x6c($s4)
/*  f16bb68:	ae800034 */ 	sw	$zero,0x34($s4)
/*  f16bb6c:	00003825 */ 	or	$a3,$zero,$zero
/*  f16bb70:	13200003 */ 	beqz	$t9,.L0f16bb80
/*  f16bb74:	00002825 */ 	or	$a1,$zero,$zero
/*  f16bb78:	10000001 */ 	beqz	$zero,.L0f16bb80
/*  f16bb7c:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f16bb80:
/*  f16bb80:	8e8c0068 */ 	lw	$t4,0x68($s4)
/*  f16bb84:	00002025 */ 	or	$a0,$zero,$zero
/*  f16bb88:	00001825 */ 	or	$v1,$zero,$zero
/*  f16bb8c:	11800003 */ 	beqz	$t4,.L0f16bb9c
/*  f16bb90:	00001025 */ 	or	$v0,$zero,$zero
/*  f16bb94:	10000001 */ 	beqz	$zero,.L0f16bb9c
/*  f16bb98:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f16bb9c:
/*  f16bb9c:	8e8d0064 */ 	lw	$t5,0x64($s4)
/*  f16bba0:	00076080 */ 	sll	$t4,$a3,0x2
/*  f16bba4:	028c3021 */ 	addu	$a2,$s4,$t4
/*  f16bba8:	11a00003 */ 	beqz	$t5,.L0f16bbb8
/*  f16bbac:	3c08efff */ 	lui	$t0,0xefff
/*  f16bbb0:	10000001 */ 	beqz	$zero,.L0f16bbb8
/*  f16bbb4:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f16bbb8:
/*  f16bbb8:	8e8e0070 */ 	lw	$t6,0x70($s4)
/*  f16bbbc:	3508efff */ 	ori	$t0,$t0,0xefff
/*  f16bbc0:	11c00003 */ 	beqz	$t6,.L0f16bbd0
/*  f16bbc4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bbc8:	10000001 */ 	beqz	$zero,.L0f16bbd0
/*  f16bbcc:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16bbd0:
/*  f16bbd0:	00437821 */ 	addu	$t7,$v0,$v1
/*  f16bbd4:	01e4c021 */ 	addu	$t8,$t7,$a0
/*  f16bbd8:	0305c821 */ 	addu	$t9,$t8,$a1
/*  f16bbdc:	5b2000f7 */ 	blezl	$t9,.L0f16bfbc
/*  f16bbe0:	8e830034 */ 	lw	$v1,0x34($s4)
/*  f16bbe4:	8ccd0064 */ 	lw	$t5,0x64($a2)
.L0f16bbe8:
/*  f16bbe8:	24e70001 */ 	addiu	$a3,$a3,0x1
/*  f16bbec:	24c60004 */ 	addiu	$a2,$a2,0x4
/*  f16bbf0:	ada81c40 */ 	sw	$t0,0x1c40($t5)
/*  f16bbf4:	8e8e006c */ 	lw	$t6,0x6c($s4)
/*  f16bbf8:	00002825 */ 	or	$a1,$zero,$zero
/*  f16bbfc:	00002025 */ 	or	$a0,$zero,$zero
/*  f16bc00:	11c00003 */ 	beqz	$t6,.L0f16bc10
/*  f16bc04:	00001825 */ 	or	$v1,$zero,$zero
/*  f16bc08:	10000001 */ 	beqz	$zero,.L0f16bc10
/*  f16bc0c:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f16bc10:
/*  f16bc10:	8e8f0068 */ 	lw	$t7,0x68($s4)
/*  f16bc14:	00001025 */ 	or	$v0,$zero,$zero
/*  f16bc18:	11e00003 */ 	beqz	$t7,.L0f16bc28
/*  f16bc1c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bc20:	10000001 */ 	beqz	$zero,.L0f16bc28
/*  f16bc24:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f16bc28:
/*  f16bc28:	8e980064 */ 	lw	$t8,0x64($s4)
/*  f16bc2c:	13000003 */ 	beqz	$t8,.L0f16bc3c
/*  f16bc30:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bc34:	10000001 */ 	beqz	$zero,.L0f16bc3c
/*  f16bc38:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f16bc3c:
/*  f16bc3c:	8e990070 */ 	lw	$t9,0x70($s4)
/*  f16bc40:	13200003 */ 	beqz	$t9,.L0f16bc50
/*  f16bc44:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bc48:	10000001 */ 	beqz	$zero,.L0f16bc50
/*  f16bc4c:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16bc50:
/*  f16bc50:	00436021 */ 	addu	$t4,$v0,$v1
/*  f16bc54:	01846821 */ 	addu	$t5,$t4,$a0
/*  f16bc58:	01a57021 */ 	addu	$t6,$t5,$a1
/*  f16bc5c:	00ee082a */ 	slt	$at,$a3,$t6
/*  f16bc60:	5420ffe1 */ 	bnezl	$at,.L0f16bbe8
/*  f16bc64:	8ccd0064 */ 	lw	$t5,0x64($a2)
/*  f16bc68:	100000d4 */ 	beqz	$zero,.L0f16bfbc
/*  f16bc6c:	8e830034 */ 	lw	$v1,0x34($s4)
.L0f16bc70:
/*  f16bc70:	0fc5ae15 */ 	jal	func0f16b854
/*  f16bc74:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bc78:	8e8f0040 */ 	lw	$t7,0x40($s4)
/*  f16bc7c:	24010002 */ 	addiu	$at,$zero,0x2
/*  f16bc80:	1450000f */ 	bne	$v0,$s0,.L0f16bcc0
/*  f16bc84:	ae8f0034 */ 	sw	$t7,0x34($s4)
/*  f16bc88:	8e980468 */ 	lw	$t8,0x468($s4)
/*  f16bc8c:	53000005 */ 	beqzl	$t8,.L0f16bca4
/*  f16bc90:	8e8c0034 */ 	lw	$t4,0x34($s4)
/*  f16bc94:	8e9904cc */ 	lw	$t9,0x4cc($s4)
/*  f16bc98:	13200007 */ 	beqz	$t9,.L0f16bcb8
/*  f16bc9c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bca0:	8e8c0034 */ 	lw	$t4,0x34($s4)
.L0f16bca4:
/*  f16bca4:	24150004 */ 	addiu	$s5,$zero,0x4
/*  f16bca8:	29810005 */ 	slti	$at,$t4,0x5
/*  f16bcac:	14200002 */ 	bnez	$at,.L0f16bcb8
/*  f16bcb0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bcb4:	ae950034 */ 	sw	$s5,0x34($s4)
.L0f16bcb8:
/*  f16bcb8:	100000c0 */ 	beqz	$zero,.L0f16bfbc
/*  f16bcbc:	8e830034 */ 	lw	$v1,0x34($s4)
.L0f16bcc0:
/*  f16bcc0:	544100b2 */ 	bnel	$v0,$at,.L0f16bf8c
/*  f16bcc4:	8e8f0468 */ 	lw	$t7,0x468($s4)
/*  f16bcc8:	8e8d0468 */ 	lw	$t5,0x468($s4)
/*  f16bccc:	51a00005 */ 	beqzl	$t5,.L0f16bce4
/*  f16bcd0:	8e8f0314 */ 	lw	$t7,0x314($s4)
/*  f16bcd4:	8e8e04cc */ 	lw	$t6,0x4cc($s4)
/*  f16bcd8:	11c000a9 */ 	beqz	$t6,.L0f16bf80
/*  f16bcdc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bce0:	8e8f0314 */ 	lw	$t7,0x314($s4)
.L0f16bce4:
/*  f16bce4:	51e000a1 */ 	beqzl	$t7,.L0f16bf6c
/*  f16bce8:	8e8e0034 */ 	lw	$t6,0x34($s4)
/*  f16bcec:	8e89006c */ 	lw	$t1,0x6c($s4)
/*  f16bcf0:	00009025 */ 	or	$s2,$zero,$zero
/*  f16bcf4:	00009825 */ 	or	$s3,$zero,$zero
/*  f16bcf8:	11200003 */ 	beqz	$t1,.L0f16bd08
/*  f16bcfc:	00002825 */ 	or	$a1,$zero,$zero
/*  f16bd00:	10000001 */ 	beqz	$zero,.L0f16bd08
/*  f16bd04:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f16bd08:
/*  f16bd08:	8e870068 */ 	lw	$a3,0x68($s4)
/*  f16bd0c:	00002025 */ 	or	$a0,$zero,$zero
/*  f16bd10:	00001825 */ 	or	$v1,$zero,$zero
/*  f16bd14:	10e00003 */ 	beqz	$a3,.L0f16bd24
/*  f16bd18:	00001025 */ 	or	$v0,$zero,$zero
/*  f16bd1c:	10000001 */ 	beqz	$zero,.L0f16bd24
/*  f16bd20:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f16bd24:
/*  f16bd24:	8e880064 */ 	lw	$t0,0x64($s4)
/*  f16bd28:	00136880 */ 	sll	$t5,$s3,0x2
/*  f16bd2c:	028d7021 */ 	addu	$t6,$s4,$t5
/*  f16bd30:	11000003 */ 	beqz	$t0,.L0f16bd40
/*  f16bd34:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bd38:	10000001 */ 	beqz	$zero,.L0f16bd40
/*  f16bd3c:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f16bd40:
/*  f16bd40:	8e860070 */ 	lw	$a2,0x70($s4)
/*  f16bd44:	10c00003 */ 	beqz	$a2,.L0f16bd54
/*  f16bd48:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bd4c:	10000001 */ 	beqz	$zero,.L0f16bd54
/*  f16bd50:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16bd54:
/*  f16bd54:	0043c021 */ 	addu	$t8,$v0,$v1
/*  f16bd58:	0304c821 */ 	addu	$t9,$t8,$a0
/*  f16bd5c:	03256021 */ 	addu	$t4,$t9,$a1
/*  f16bd60:	1980006f */ 	blez	$t4,.L0f16bf20
/*  f16bd64:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bd68:	afae004c */ 	sw	$t6,0x4c($sp)
/*  f16bd6c:	8faf004c */ 	lw	$t7,0x4c($sp)
.L0f16bd70:
/*  f16bd70:	8de20064 */ 	lw	$v0,0x64($t7)
/*  f16bd74:	8c5800d8 */ 	lw	$t8,0xd8($v0)
/*  f16bd78:	5700004e */ 	bnezl	$t8,.L0f16beb4
/*  f16bd7c:	8fac004c */ 	lw	$t4,0x4c($sp)
/*  f16bd80:	8c4300bc */ 	lw	$v1,0xbc($v0)
/*  f16bd84:	84790028 */ 	lh	$t9,0x28($v1)
/*  f16bd88:	24630028 */ 	addiu	$v1,$v1,0x28
/*  f16bd8c:	52b90049 */ 	beql	$s5,$t9,.L0f16beb4
/*  f16bd90:	8fac004c */ 	lw	$t4,0x4c($sp)
/*  f16bd94:	16400046 */ 	bnez	$s2,.L0f16beb0
/*  f16bd98:	00006040 */ 	sll	$t4,$zero,0x1
/*  f16bd9c:	006c8821 */ 	addu	$s1,$v1,$t4
.L0f16bda0:
/*  f16bda0:	11200003 */ 	beqz	$t1,.L0f16bdb0
/*  f16bda4:	00008025 */ 	or	$s0,$zero,$zero
/*  f16bda8:	10000002 */ 	beqz	$zero,.L0f16bdb4
/*  f16bdac:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f16bdb0:
/*  f16bdb0:	00002825 */ 	or	$a1,$zero,$zero
.L0f16bdb4:
/*  f16bdb4:	10e00003 */ 	beqz	$a3,.L0f16bdc4
/*  f16bdb8:	00002025 */ 	or	$a0,$zero,$zero
/*  f16bdbc:	10000001 */ 	beqz	$zero,.L0f16bdc4
/*  f16bdc0:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f16bdc4:
/*  f16bdc4:	11000003 */ 	beqz	$t0,.L0f16bdd4
/*  f16bdc8:	00001825 */ 	or	$v1,$zero,$zero
/*  f16bdcc:	10000001 */ 	beqz	$zero,.L0f16bdd4
/*  f16bdd0:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f16bdd4:
/*  f16bdd4:	10c00003 */ 	beqz	$a2,.L0f16bde4
/*  f16bdd8:	00001025 */ 	or	$v0,$zero,$zero
/*  f16bddc:	10000001 */ 	beqz	$zero,.L0f16bde4
/*  f16bde0:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16bde4:
/*  f16bde4:	00436821 */ 	addu	$t5,$v0,$v1
/*  f16bde8:	01a47021 */ 	addu	$t6,$t5,$a0
/*  f16bdec:	01c57821 */ 	addu	$t7,$t6,$a1
/*  f16bdf0:	59e0002a */ 	blezl	$t7,.L0f16be9c
/*  f16bdf4:	86390002 */ 	lh	$t9,0x2($s1)
.L0f16bdf8:
/*  f16bdf8:	1270000c */ 	beq	$s3,$s0,.L0f16be2c
/*  f16bdfc:	0010c080 */ 	sll	$t8,$s0,0x2
/*  f16be00:	0298c821 */ 	addu	$t9,$s4,$t8
/*  f16be04:	8f2c0064 */ 	lw	$t4,0x64($t9)
/*  f16be08:	02002825 */ 	or	$a1,$s0,$zero
/*  f16be0c:	8d8d00d8 */ 	lw	$t5,0xd8($t4)
/*  f16be10:	55a00007 */ 	bnezl	$t5,.L0f16be30
/*  f16be14:	8e89006c */ 	lw	$t1,0x6c($s4)
/*  f16be18:	0fc575e8 */ 	jal	func0f15d7a0
/*  f16be1c:	86240000 */ 	lh	$a0,0x0($s1)
/*  f16be20:	50400003 */ 	beqzl	$v0,.L0f16be30
/*  f16be24:	8e89006c */ 	lw	$t1,0x6c($s4)
/*  f16be28:	24120001 */ 	addiu	$s2,$zero,0x1
.L0f16be2c:
/*  f16be2c:	8e89006c */ 	lw	$t1,0x6c($s4)
.L0f16be30:
/*  f16be30:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f16be34:	8e870068 */ 	lw	$a3,0x68($s4)
/*  f16be38:	8e880064 */ 	lw	$t0,0x64($s4)
/*  f16be3c:	11200003 */ 	beqz	$t1,.L0f16be4c
/*  f16be40:	8e860070 */ 	lw	$a2,0x70($s4)
/*  f16be44:	10000002 */ 	beqz	$zero,.L0f16be50
/*  f16be48:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f16be4c:
/*  f16be4c:	00002825 */ 	or	$a1,$zero,$zero
.L0f16be50:
/*  f16be50:	10e00003 */ 	beqz	$a3,.L0f16be60
/*  f16be54:	00002025 */ 	or	$a0,$zero,$zero
/*  f16be58:	10000001 */ 	beqz	$zero,.L0f16be60
/*  f16be5c:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f16be60:
/*  f16be60:	11000003 */ 	beqz	$t0,.L0f16be70
/*  f16be64:	00001825 */ 	or	$v1,$zero,$zero
/*  f16be68:	10000001 */ 	beqz	$zero,.L0f16be70
/*  f16be6c:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f16be70:
/*  f16be70:	10c00003 */ 	beqz	$a2,.L0f16be80
/*  f16be74:	00001025 */ 	or	$v0,$zero,$zero
/*  f16be78:	10000001 */ 	beqz	$zero,.L0f16be80
/*  f16be7c:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16be80:
/*  f16be80:	00437021 */ 	addu	$t6,$v0,$v1
/*  f16be84:	01c47821 */ 	addu	$t7,$t6,$a0
/*  f16be88:	01e5c021 */ 	addu	$t8,$t7,$a1
/*  f16be8c:	0218082a */ 	slt	$at,$s0,$t8
/*  f16be90:	1420ffd9 */ 	bnez	$at,.L0f16bdf8
/*  f16be94:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16be98:	86390002 */ 	lh	$t9,0x2($s1)
.L0f16be9c:
/*  f16be9c:	26310002 */ 	addiu	$s1,$s1,0x2
/*  f16bea0:	52b90004 */ 	beql	$s5,$t9,.L0f16beb4
/*  f16bea4:	8fac004c */ 	lw	$t4,0x4c($sp)
/*  f16bea8:	1240ffbd */ 	beqz	$s2,.L0f16bda0
/*  f16beac:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16beb0:
/*  f16beb0:	8fac004c */ 	lw	$t4,0x4c($sp)
.L0f16beb4:
/*  f16beb4:	26730001 */ 	addiu	$s3,$s3,0x1
/*  f16beb8:	00002825 */ 	or	$a1,$zero,$zero
/*  f16bebc:	258d0004 */ 	addiu	$t5,$t4,0x4
/*  f16bec0:	11200003 */ 	beqz	$t1,.L0f16bed0
/*  f16bec4:	afad004c */ 	sw	$t5,0x4c($sp)
/*  f16bec8:	10000001 */ 	beqz	$zero,.L0f16bed0
/*  f16becc:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f16bed0:
/*  f16bed0:	10e00003 */ 	beqz	$a3,.L0f16bee0
/*  f16bed4:	00002025 */ 	or	$a0,$zero,$zero
/*  f16bed8:	10000001 */ 	beqz	$zero,.L0f16bee0
/*  f16bedc:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f16bee0:
/*  f16bee0:	11000003 */ 	beqz	$t0,.L0f16bef0
/*  f16bee4:	00001825 */ 	or	$v1,$zero,$zero
/*  f16bee8:	10000001 */ 	beqz	$zero,.L0f16bef0
/*  f16beec:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f16bef0:
/*  f16bef0:	10c00003 */ 	beqz	$a2,.L0f16bf00
/*  f16bef4:	00001025 */ 	or	$v0,$zero,$zero
/*  f16bef8:	10000001 */ 	beqz	$zero,.L0f16bf00
/*  f16befc:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16bf00:
/*  f16bf00:	00437021 */ 	addu	$t6,$v0,$v1
/*  f16bf04:	01c47821 */ 	addu	$t7,$t6,$a0
/*  f16bf08:	01e5c021 */ 	addu	$t8,$t7,$a1
/*  f16bf0c:	0278082a */ 	slt	$at,$s3,$t8
/*  f16bf10:	10200003 */ 	beqz	$at,.L0f16bf20
/*  f16bf14:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bf18:	5240ff95 */ 	beqzl	$s2,.L0f16bd70
/*  f16bf1c:	8faf004c */ 	lw	$t7,0x4c($sp)
.L0f16bf20:
/*  f16bf20:	5240000a */ 	beqzl	$s2,.L0f16bf4c
/*  f16bf24:	8e8c0034 */ 	lw	$t4,0x34($s4)
/*  f16bf28:	8e990034 */ 	lw	$t9,0x34($s4)
/*  f16bf2c:	24150004 */ 	addiu	$s5,$zero,0x4
/*  f16bf30:	2b210005 */ 	slti	$at,$t9,0x5
/*  f16bf34:	14200002 */ 	bnez	$at,.L0f16bf40
/*  f16bf38:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bf3c:	ae950034 */ 	sw	$s5,0x34($s4)
.L0f16bf40:
/*  f16bf40:	1000001e */ 	beqz	$zero,.L0f16bfbc
/*  f16bf44:	8e830034 */ 	lw	$v1,0x34($s4)
/*  f16bf48:	8e8c0034 */ 	lw	$t4,0x34($s4)
.L0f16bf4c:
/*  f16bf4c:	240d0008 */ 	addiu	$t5,$zero,0x8
/*  f16bf50:	29810009 */ 	slti	$at,$t4,0x9
/*  f16bf54:	14200002 */ 	bnez	$at,.L0f16bf60
/*  f16bf58:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bf5c:	ae8d0034 */ 	sw	$t5,0x34($s4)
.L0f16bf60:
/*  f16bf60:	10000016 */ 	beqz	$zero,.L0f16bfbc
/*  f16bf64:	8e830034 */ 	lw	$v1,0x34($s4)
/*  f16bf68:	8e8e0034 */ 	lw	$t6,0x34($s4)
.L0f16bf6c:
/*  f16bf6c:	24150004 */ 	addiu	$s5,$zero,0x4
/*  f16bf70:	29c10005 */ 	slti	$at,$t6,0x5
/*  f16bf74:	14200002 */ 	bnez	$at,.L0f16bf80
/*  f16bf78:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16bf7c:	ae950034 */ 	sw	$s5,0x34($s4)
.L0f16bf80:
/*  f16bf80:	1000000e */ 	beqz	$zero,.L0f16bfbc
/*  f16bf84:	8e830034 */ 	lw	$v1,0x34($s4)
/*  f16bf88:	8e8f0468 */ 	lw	$t7,0x468($s4)
.L0f16bf8c:
/*  f16bf8c:	51e0000b */ 	beqzl	$t7,.L0f16bfbc
/*  f16bf90:	8e830034 */ 	lw	$v1,0x34($s4)
/*  f16bf94:	8e9804cc */ 	lw	$t8,0x4cc($s4)
/*  f16bf98:	57000008 */ 	bnezl	$t8,.L0f16bfbc
/*  f16bf9c:	8e830034 */ 	lw	$v1,0x34($s4)
/*  f16bfa0:	8e990034 */ 	lw	$t9,0x34($s4)
/*  f16bfa4:	24150004 */ 	addiu	$s5,$zero,0x4
/*  f16bfa8:	2b210005 */ 	slti	$at,$t9,0x5
/*  f16bfac:	54200003 */ 	bnezl	$at,.L0f16bfbc
/*  f16bfb0:	8e830034 */ 	lw	$v1,0x34($s4)
/*  f16bfb4:	ae950034 */ 	sw	$s5,0x34($s4)
.L0f16bfb8:
/*  f16bfb8:	8e830034 */ 	lw	$v1,0x34($s4)
.L0f16bfbc:
/*  f16bfbc:	8e8c003c */ 	lw	$t4,0x3c($s4)
/*  f16bfc0:	24150004 */ 	addiu	$s5,$zero,0x4
/*  f16bfc4:	44832000 */ 	mtc1	$v1,$f4
/*  f16bfc8:	006c6821 */ 	addu	$t5,$v1,$t4
/*  f16bfcc:	ae8d0038 */ 	sw	$t5,0x38($s4)
/*  f16bfd0:	31ae0003 */ 	andi	$t6,$t5,0x3
/*  f16bfd4:	000d7883 */ 	sra	$t7,$t5,0x2
/*  f16bfd8:	ae8e003c */ 	sw	$t6,0x3c($s4)
/*  f16bfdc:	18600004 */ 	blez	$v1,.L0f16bff0
/*  f16bfe0:	ae8f0038 */ 	sw	$t7,0x38($s4)
/*  f16bfe4:	8e98000c */ 	lw	$t8,0xc($s4)
/*  f16bfe8:	27190001 */ 	addiu	$t9,$t8,0x1
/*  f16bfec:	ae99000c */ 	sw	$t9,0xc($s4)
.L0f16bff0:
/*  f16bff0:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f16bff4:	3c013e80 */ 	lui	$at,0x3e80
/*  f16bff8:	44814000 */ 	mtc1	$at,$f8
/*  f16bffc:	8e8c0008 */ 	lw	$t4,0x8($s4)
/*  f16c000:	8e8d0038 */ 	lw	$t5,0x38($s4)
/*  f16c004:	8e8f0030 */ 	lw	$t7,0x30($s4)
/*  f16c008:	46083282 */ 	mul.s	$f10,$f6,$f8
/*  f16c00c:	c690004c */ 	lwc1	$f16,0x4c($s4)
/*  f16c010:	018d7021 */ 	addu	$t6,$t4,$t5
/*  f16c014:	01e3c021 */ 	addu	$t8,$t7,$v1
/*  f16c018:	ae8e0008 */ 	sw	$t6,0x8($s4)
/*  f16c01c:	ae980030 */ 	sw	$t8,0x30($s4)
/*  f16c020:	e6900050 */ 	swc1	$f16,0x50($s4)
/*  f16c024:	e68a0044 */ 	swc1	$f10,0x44($s4)
/*  f16c028:	c6920044 */ 	lwc1	$f18,0x44($s4)
/*  f16c02c:	0fc2af0a */ 	jal	func0f0abc28
/*  f16c030:	e692004c */ 	swc1	$f18,0x4c($s4)
/*  f16c034:	0fc37cd9 */ 	jal	func0f0df364
/*  f16c038:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c03c:	00002025 */ 	or	$a0,$zero,$zero
/*  f16c040:	0c005408 */ 	jal	func00015020
/*  f16c044:	3405ffff */ 	dli	$a1,0xffff
/*  f16c048:	1440005c */ 	bnez	$v0,.L0f16c1bc
/*  f16c04c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c050:	0c005384 */ 	jal	func00014e10
/*  f16c054:	00002025 */ 	or	$a0,$zero,$zero
/*  f16c058:	2841000b */ 	slti	$at,$v0,0xb
/*  f16c05c:	10200057 */ 	beqz	$at,.L0f16c1bc
/*  f16c060:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c064:	0c005384 */ 	jal	func00014e10
/*  f16c068:	00002025 */ 	or	$a0,$zero,$zero
/*  f16c06c:	2841fff6 */ 	slti	$at,$v0,-10
/*  f16c070:	14200052 */ 	bnez	$at,.L0f16c1bc
/*  f16c074:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c078:	0c0053ae */ 	jal	func00014eb8
/*  f16c07c:	00002025 */ 	or	$a0,$zero,$zero
/*  f16c080:	2841000b */ 	slti	$at,$v0,0xb
/*  f16c084:	1020004d */ 	beqz	$at,.L0f16c1bc
/*  f16c088:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c08c:	0c0053ae */ 	jal	func00014eb8
/*  f16c090:	00002025 */ 	or	$a0,$zero,$zero
/*  f16c094:	2841fff6 */ 	slti	$at,$v0,-10
/*  f16c098:	14200048 */ 	bnez	$at,.L0f16c1bc
/*  f16c09c:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16c0a0:	0c005408 */ 	jal	func00015020
/*  f16c0a4:	3405ffff */ 	dli	$a1,0xffff
/*  f16c0a8:	14400044 */ 	bnez	$v0,.L0f16c1bc
/*  f16c0ac:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c0b0:	0c005384 */ 	jal	func00014e10
/*  f16c0b4:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16c0b8:	2841000b */ 	slti	$at,$v0,0xb
/*  f16c0bc:	1020003f */ 	beqz	$at,.L0f16c1bc
/*  f16c0c0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c0c4:	0c005384 */ 	jal	func00014e10
/*  f16c0c8:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16c0cc:	2841fff6 */ 	slti	$at,$v0,-10
/*  f16c0d0:	1420003a */ 	bnez	$at,.L0f16c1bc
/*  f16c0d4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c0d8:	0c0053ae */ 	jal	func00014eb8
/*  f16c0dc:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16c0e0:	2841000b */ 	slti	$at,$v0,0xb
/*  f16c0e4:	10200035 */ 	beqz	$at,.L0f16c1bc
/*  f16c0e8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c0ec:	0c0053ae */ 	jal	func00014eb8
/*  f16c0f0:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16c0f4:	2841fff6 */ 	slti	$at,$v0,-10
/*  f16c0f8:	14200030 */ 	bnez	$at,.L0f16c1bc
/*  f16c0fc:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16c100:	0c005408 */ 	jal	func00015020
/*  f16c104:	3405ffff */ 	dli	$a1,0xffff
/*  f16c108:	1440002c */ 	bnez	$v0,.L0f16c1bc
/*  f16c10c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c110:	0c005384 */ 	jal	func00014e10
/*  f16c114:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16c118:	2841000b */ 	slti	$at,$v0,0xb
/*  f16c11c:	10200027 */ 	beqz	$at,.L0f16c1bc
/*  f16c120:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c124:	0c005384 */ 	jal	func00014e10
/*  f16c128:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16c12c:	2841fff6 */ 	slti	$at,$v0,-10
/*  f16c130:	14200022 */ 	bnez	$at,.L0f16c1bc
/*  f16c134:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c138:	0c0053ae */ 	jal	func00014eb8
/*  f16c13c:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16c140:	2841000b */ 	slti	$at,$v0,0xb
/*  f16c144:	1020001d */ 	beqz	$at,.L0f16c1bc
/*  f16c148:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c14c:	0c0053ae */ 	jal	func00014eb8
/*  f16c150:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16c154:	2841fff6 */ 	slti	$at,$v0,-10
/*  f16c158:	14200018 */ 	bnez	$at,.L0f16c1bc
/*  f16c15c:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16c160:	0c005408 */ 	jal	func00015020
/*  f16c164:	3405ffff */ 	dli	$a1,0xffff
/*  f16c168:	14400014 */ 	bnez	$v0,.L0f16c1bc
/*  f16c16c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c170:	0c005384 */ 	jal	func00014e10
/*  f16c174:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16c178:	2841000b */ 	slti	$at,$v0,0xb
/*  f16c17c:	1020000f */ 	beqz	$at,.L0f16c1bc
/*  f16c180:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c184:	0c005384 */ 	jal	func00014e10
/*  f16c188:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16c18c:	2841fff6 */ 	slti	$at,$v0,-10
/*  f16c190:	1420000a */ 	bnez	$at,.L0f16c1bc
/*  f16c194:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c198:	0c0053ae */ 	jal	func00014eb8
/*  f16c19c:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16c1a0:	2841000b */ 	slti	$at,$v0,0xb
/*  f16c1a4:	10200005 */ 	beqz	$at,.L0f16c1bc
/*  f16c1a8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c1ac:	0c0053ae */ 	jal	func00014eb8
/*  f16c1b0:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16c1b4:	2841fff6 */ 	slti	$at,$v0,-10
/*  f16c1b8:	1020000e */ 	beqz	$at,.L0f16c1f4
.L0f16c1bc:
/*  f16c1bc:	3c108006 */ 	lui	$s0,%hi(var800624a4)
/*  f16c1c0:	261024a4 */ 	addiu	$s0,$s0,%lo(var800624a4)
/*  f16c1c4:	8e190000 */ 	lw	$t9,0x0($s0)
/*  f16c1c8:	5320000b */ 	beqzl	$t9,.L0f16c1f8
/*  f16c1cc:	8e8d04b4 */ 	lw	$t5,0x4b4($s4)
/*  f16c1d0:	8e8c04b4 */ 	lw	$t4,0x4b4($s4)
/*  f16c1d4:	2401005a */ 	addiu	$at,$zero,0x5a
/*  f16c1d8:	51810006 */ 	beql	$t4,$at,.L0f16c1f4
/*  f16c1dc:	ae000000 */ 	sw	$zero,0x0($s0)
/*  f16c1e0:	0fc069f9 */ 	jal	func0f01a7e4
/*  f16c1e4:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f16c1e8:	0c003a57 */ 	jal	func0000e95c
/*  f16c1ec:	2404005a */ 	addiu	$a0,$zero,0x5a
/*  f16c1f0:	ae000000 */ 	sw	$zero,0x0($s0)
.L0f16c1f4:
/*  f16c1f4:	8e8d04b4 */ 	lw	$t5,0x4b4($s4)
.L0f16c1f8:
/*  f16c1f8:	3c108006 */ 	lui	$s0,%hi(var800624a4)
/*  f16c1fc:	261024a4 */ 	addiu	$s0,$s0,%lo(var800624a4)
/*  f16c200:	29a1005a */ 	slti	$at,$t5,0x5a
/*  f16c204:	10200072 */ 	beqz	$at,.L0f16c3d0
/*  f16c208:	3c028006 */ 	lui	$v0,%hi(var800624b0)
/*  f16c20c:	8e0e0000 */ 	lw	$t6,0x0($s0)
/*  f16c210:	15c0006f */ 	bnez	$t6,.L0f16c3d0
/*  f16c214:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c218:	8e8f04cc */ 	lw	$t7,0x4cc($s4)
/*  f16c21c:	00002025 */ 	or	$a0,$zero,$zero
/*  f16c220:	15e0006b */ 	bnez	$t7,.L0f16c3d0
/*  f16c224:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c228:	0c0053d8 */ 	jal	func00014f60
/*  f16c22c:	3405ffff */ 	dli	$a1,0xffff
/*  f16c230:	14400063 */ 	bnez	$v0,.L0f16c3c0
/*  f16c234:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c238:	0c005384 */ 	jal	func00014e10
/*  f16c23c:	00002025 */ 	or	$a0,$zero,$zero
/*  f16c240:	2841000a */ 	slti	$at,$v0,0xa
/*  f16c244:	1020005e */ 	beqz	$at,.L0f16c3c0
/*  f16c248:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c24c:	0c005384 */ 	jal	func00014e10
/*  f16c250:	00002025 */ 	or	$a0,$zero,$zero
/*  f16c254:	2841fff7 */ 	slti	$at,$v0,-9
/*  f16c258:	14200059 */ 	bnez	$at,.L0f16c3c0
/*  f16c25c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c260:	0c0053ae */ 	jal	func00014eb8
/*  f16c264:	00002025 */ 	or	$a0,$zero,$zero
/*  f16c268:	2841000a */ 	slti	$at,$v0,0xa
/*  f16c26c:	10200054 */ 	beqz	$at,.L0f16c3c0
/*  f16c270:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c274:	0c0053ae */ 	jal	func00014eb8
/*  f16c278:	00002025 */ 	or	$a0,$zero,$zero
/*  f16c27c:	2841fff7 */ 	slti	$at,$v0,-9
/*  f16c280:	1420004f */ 	bnez	$at,.L0f16c3c0
/*  f16c284:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16c288:	0c0053d8 */ 	jal	func00014f60
/*  f16c28c:	3405ffff */ 	dli	$a1,0xffff
/*  f16c290:	1440004b */ 	bnez	$v0,.L0f16c3c0
/*  f16c294:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c298:	0c005384 */ 	jal	func00014e10
/*  f16c29c:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16c2a0:	2841000a */ 	slti	$at,$v0,0xa
/*  f16c2a4:	10200046 */ 	beqz	$at,.L0f16c3c0
/*  f16c2a8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c2ac:	0c005384 */ 	jal	func00014e10
/*  f16c2b0:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16c2b4:	2841fff7 */ 	slti	$at,$v0,-9
/*  f16c2b8:	14200041 */ 	bnez	$at,.L0f16c3c0
/*  f16c2bc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c2c0:	0c0053ae */ 	jal	func00014eb8
/*  f16c2c4:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16c2c8:	2841000a */ 	slti	$at,$v0,0xa
/*  f16c2cc:	1020003c */ 	beqz	$at,.L0f16c3c0
/*  f16c2d0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c2d4:	0c0053ae */ 	jal	func00014eb8
/*  f16c2d8:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16c2dc:	2841fff7 */ 	slti	$at,$v0,-9
/*  f16c2e0:	14200037 */ 	bnez	$at,.L0f16c3c0
/*  f16c2e4:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16c2e8:	0c0053d8 */ 	jal	func00014f60
/*  f16c2ec:	3405ffff */ 	dli	$a1,0xffff
/*  f16c2f0:	14400033 */ 	bnez	$v0,.L0f16c3c0
/*  f16c2f4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c2f8:	0c005384 */ 	jal	func00014e10
/*  f16c2fc:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16c300:	2841000a */ 	slti	$at,$v0,0xa
/*  f16c304:	1020002e */ 	beqz	$at,.L0f16c3c0
/*  f16c308:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c30c:	0c005384 */ 	jal	func00014e10
/*  f16c310:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16c314:	2841fff7 */ 	slti	$at,$v0,-9
/*  f16c318:	14200029 */ 	bnez	$at,.L0f16c3c0
/*  f16c31c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c320:	0c0053ae */ 	jal	func00014eb8
/*  f16c324:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16c328:	2841000a */ 	slti	$at,$v0,0xa
/*  f16c32c:	10200024 */ 	beqz	$at,.L0f16c3c0
/*  f16c330:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c334:	0c0053ae */ 	jal	func00014eb8
/*  f16c338:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16c33c:	2841fff7 */ 	slti	$at,$v0,-9
/*  f16c340:	1420001f */ 	bnez	$at,.L0f16c3c0
/*  f16c344:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16c348:	0c0053d8 */ 	jal	func00014f60
/*  f16c34c:	3405ffff */ 	dli	$a1,0xffff
/*  f16c350:	1440001b */ 	bnez	$v0,.L0f16c3c0
/*  f16c354:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c358:	0c005384 */ 	jal	func00014e10
/*  f16c35c:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16c360:	2841000a */ 	slti	$at,$v0,0xa
/*  f16c364:	10200016 */ 	beqz	$at,.L0f16c3c0
/*  f16c368:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c36c:	0c005384 */ 	jal	func00014e10
/*  f16c370:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16c374:	2841fff7 */ 	slti	$at,$v0,-9
/*  f16c378:	14200011 */ 	bnez	$at,.L0f16c3c0
/*  f16c37c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c380:	0c0053ae */ 	jal	func00014eb8
/*  f16c384:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16c388:	2841000a */ 	slti	$at,$v0,0xa
/*  f16c38c:	1020000c */ 	beqz	$at,.L0f16c3c0
/*  f16c390:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c394:	0c0053ae */ 	jal	func00014eb8
/*  f16c398:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16c39c:	2841fff7 */ 	slti	$at,$v0,-9
/*  f16c3a0:	14200007 */ 	bnez	$at,.L0f16c3c0
/*  f16c3a4:	3c028006 */ 	lui	$v0,%hi(var800624b0)
/*  f16c3a8:	244224b0 */ 	addiu	$v0,$v0,%lo(var800624b0)
/*  f16c3ac:	8c580000 */ 	lw	$t8,0x0($v0)
/*  f16c3b0:	8e990000 */ 	lw	$t9,0x0($s4)
/*  f16c3b4:	03196021 */ 	addu	$t4,$t8,$t9
/*  f16c3b8:	10000007 */ 	beqz	$zero,.L0f16c3d8
/*  f16c3bc:	ac4c0000 */ 	sw	$t4,0x0($v0)
.L0f16c3c0:
/*  f16c3c0:	3c028006 */ 	lui	$v0,%hi(var800624b0)
/*  f16c3c4:	244224b0 */ 	addiu	$v0,$v0,%lo(var800624b0)
/*  f16c3c8:	10000003 */ 	beqz	$zero,.L0f16c3d8
/*  f16c3cc:	ac400000 */ 	sw	$zero,0x0($v0)
.L0f16c3d0:
/*  f16c3d0:	244224b0 */ 	addiu	$v0,$v0,%lo(var800624b0)
/*  f16c3d4:	ac400000 */ 	sw	$zero,0x0($v0)
.L0f16c3d8:
/*  f16c3d8:	8e8d0318 */ 	lw	$t5,0x318($s4)
/*  f16c3dc:	3c118008 */ 	lui	$s1,%hi(var80084038)
/*  f16c3e0:	26314038 */ 	addiu	$s1,$s1,%lo(var80084038)
/*  f16c3e4:	11a00116 */ 	beqz	$t5,.L0f16c840
/*  f16c3e8:	ae200000 */ 	sw	$zero,0x0($s1)
/*  f16c3ec:	8e8e04b4 */ 	lw	$t6,0x4b4($s4)
/*  f16c3f0:	3c068008 */ 	lui	$a2,0x8008
/*  f16c3f4:	29c1005a */ 	slti	$at,$t6,0x5a
/*  f16c3f8:	10200111 */ 	beqz	$at,.L0f16c840
/*  f16c3fc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c400:	8cc64028 */ 	lw	$a2,0x4028($a2)
/*  f16c404:	3c028008 */ 	lui	$v0,0x8008
/*  f16c408:	58c00077 */ 	blezl	$a2,.L0f16c5e8
/*  f16c40c:	8e8d0034 */ 	lw	$t5,0x34($s4)
/*  f16c410:	8c534024 */ 	lw	$s3,0x4024($v0)
/*  f16c414:	8e8f0038 */ 	lw	$t7,0x38($s4)
/*  f16c418:	24c3f1f0 */ 	addiu	$v1,$a2,-3600
/*  f16c41c:	0263082a */ 	slt	$at,$s3,$v1
/*  f16c420:	10200048 */ 	beqz	$at,.L0f16c544
/*  f16c424:	01f39021 */ 	addu	$s2,$t7,$s3
/*  f16c428:	0243082a */ 	slt	$at,$s2,$v1
/*  f16c42c:	54200046 */ 	bnezl	$at,.L0f16c548
/*  f16c430:	0266082a */ 	slt	$at,$s3,$a2
/*  f16c434:	8e98006c */ 	lw	$t8,0x6c($s4)
/*  f16c438:	00008025 */ 	or	$s0,$zero,$zero
/*  f16c43c:	00002825 */ 	or	$a1,$zero,$zero
/*  f16c440:	13000003 */ 	beqz	$t8,.L0f16c450
/*  f16c444:	00002025 */ 	or	$a0,$zero,$zero
/*  f16c448:	10000001 */ 	beqz	$zero,.L0f16c450
/*  f16c44c:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f16c450:
/*  f16c450:	8e990068 */ 	lw	$t9,0x68($s4)
/*  f16c454:	00001825 */ 	or	$v1,$zero,$zero
/*  f16c458:	00001025 */ 	or	$v0,$zero,$zero
/*  f16c45c:	13200003 */ 	beqz	$t9,.L0f16c46c
/*  f16c460:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c464:	10000001 */ 	beqz	$zero,.L0f16c46c
/*  f16c468:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f16c46c:
/*  f16c46c:	8e8c0064 */ 	lw	$t4,0x64($s4)
/*  f16c470:	11800003 */ 	beqz	$t4,.L0f16c480
/*  f16c474:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c478:	10000001 */ 	beqz	$zero,.L0f16c480
/*  f16c47c:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f16c480:
/*  f16c480:	8e8d0070 */ 	lw	$t5,0x70($s4)
/*  f16c484:	11a00003 */ 	beqz	$t5,.L0f16c494
/*  f16c488:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c48c:	10000001 */ 	beqz	$zero,.L0f16c494
/*  f16c490:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16c494:
/*  f16c494:	00437021 */ 	addu	$t6,$v0,$v1
/*  f16c498:	01c47821 */ 	addu	$t7,$t6,$a0
/*  f16c49c:	01e5c021 */ 	addu	$t8,$t7,$a1
/*  f16c4a0:	5b000029 */ 	blezl	$t8,.L0f16c548
/*  f16c4a4:	0266082a */ 	slt	$at,$s3,$a2
.L0f16c4a8:
/*  f16c4a8:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f16c4ac:	02002025 */ 	or	$a0,$s0,$zero
/*  f16c4b0:	0fc5b9f1 */ 	jal	textGet
/*  f16c4b4:	24045844 */ 	addiu	$a0,$zero,0x5844
/*  f16c4b8:	00402025 */ 	or	$a0,$v0,$zero
/*  f16c4bc:	0fc377c7 */ 	jal	currentPlayerQueueMessage
/*  f16c4c0:	00002825 */ 	or	$a1,$zero,$zero
/*  f16c4c4:	8e99006c */ 	lw	$t9,0x6c($s4)
/*  f16c4c8:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f16c4cc:	00002825 */ 	or	$a1,$zero,$zero
/*  f16c4d0:	13200003 */ 	beqz	$t9,.L0f16c4e0
/*  f16c4d4:	00002025 */ 	or	$a0,$zero,$zero
/*  f16c4d8:	10000001 */ 	beqz	$zero,.L0f16c4e0
/*  f16c4dc:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f16c4e0:
/*  f16c4e0:	8e8c0068 */ 	lw	$t4,0x68($s4)
/*  f16c4e4:	00001825 */ 	or	$v1,$zero,$zero
/*  f16c4e8:	00001025 */ 	or	$v0,$zero,$zero
/*  f16c4ec:	11800003 */ 	beqz	$t4,.L0f16c4fc
/*  f16c4f0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c4f4:	10000001 */ 	beqz	$zero,.L0f16c4fc
/*  f16c4f8:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f16c4fc:
/*  f16c4fc:	8e8d0064 */ 	lw	$t5,0x64($s4)
/*  f16c500:	11a00003 */ 	beqz	$t5,.L0f16c510
/*  f16c504:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c508:	10000001 */ 	beqz	$zero,.L0f16c510
/*  f16c50c:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f16c510:
/*  f16c510:	8e8e0070 */ 	lw	$t6,0x70($s4)
/*  f16c514:	11c00003 */ 	beqz	$t6,.L0f16c524
/*  f16c518:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c51c:	10000001 */ 	beqz	$zero,.L0f16c524
/*  f16c520:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16c524:
/*  f16c524:	00437821 */ 	addu	$t7,$v0,$v1
/*  f16c528:	01e4c021 */ 	addu	$t8,$t7,$a0
/*  f16c52c:	0305c821 */ 	addu	$t9,$t8,$a1
/*  f16c530:	0219082a */ 	slt	$at,$s0,$t9
/*  f16c534:	1420ffdc */ 	bnez	$at,.L0f16c4a8
/*  f16c538:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c53c:	3c068008 */ 	lui	$a2,0x8008
/*  f16c540:	8cc64028 */ 	lw	$a2,0x4028($a2)
.L0f16c544:
/*  f16c544:	0266082a */ 	slt	$at,$s3,$a2
.L0f16c548:
/*  f16c548:	10200007 */ 	beqz	$at,.L0f16c568
/*  f16c54c:	0246082a */ 	slt	$at,$s2,$a2
/*  f16c550:	54200006 */ 	bnezl	$at,.L0f16c56c
/*  f16c554:	24ccfda8 */ 	addiu	$t4,$a2,-600
/*  f16c558:	0c0039a1 */ 	jal	func0000e684
/*  f16c55c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c560:	3c068008 */ 	lui	$a2,0x8008
/*  f16c564:	8cc64028 */ 	lw	$a2,0x4028($a2)
.L0f16c568:
/*  f16c568:	24ccfda8 */ 	addiu	$t4,$a2,-600
.L0f16c56c:
/*  f16c56c:	024c082a */ 	slt	$at,$s2,$t4
/*  f16c570:	1420001c */ 	bnez	$at,.L0f16c5e4
/*  f16c574:	3c108008 */ 	lui	$s0,%hi(var80084034)
/*  f16c578:	26104034 */ 	addiu	$s0,$s0,%lo(var80084034)
/*  f16c57c:	8e0d0000 */ 	lw	$t5,0x0($s0)
/*  f16c580:	55a00019 */ 	bnezl	$t5,.L0f16c5e8
/*  f16c584:	8e8d0034 */ 	lw	$t5,0x34($s4)
/*  f16c588:	0fc5b364 */ 	jal	getVar80084014
/*  f16c58c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c590:	14400014 */ 	bnez	$v0,.L0f16c5e4
/*  f16c594:	3c0e8008 */ 	lui	$t6,0x8008
/*  f16c598:	8dce4028 */ 	lw	$t6,0x4028($t6)
/*  f16c59c:	02002025 */ 	or	$a0,$s0,$zero
/*  f16c5a0:	00002825 */ 	or	$a1,$zero,$zero
/*  f16c5a4:	024e082a */ 	slt	$at,$s2,$t6
/*  f16c5a8:	1020000e */ 	beqz	$at,.L0f16c5e4
/*  f16c5ac:	24067fff */ 	addiu	$a2,$zero,0x7fff
/*  f16c5b0:	3c013f80 */ 	lui	$at,0x3f80
/*  f16c5b4:	44812000 */ 	mtc1	$at,$f4
/*  f16c5b8:	240f00a3 */ 	addiu	$t7,$zero,0xa3
/*  f16c5bc:	24180001 */ 	addiu	$t8,$zero,0x1
/*  f16c5c0:	2419ffff */ 	addiu	$t9,$zero,-1
/*  f16c5c4:	240c0001 */ 	addiu	$t4,$zero,0x1
/*  f16c5c8:	afac0020 */ 	sw	$t4,0x20($sp)
/*  f16c5cc:	afb9001c */ 	sw	$t9,0x1c($sp)
/*  f16c5d0:	afb80018 */ 	sw	$t8,0x18($sp)
/*  f16c5d4:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f16c5d8:	24070040 */ 	addiu	$a3,$zero,0x40
/*  f16c5dc:	0c0041c6 */ 	jal	func00010718
/*  f16c5e0:	e7a40014 */ 	swc1	$f4,0x14($sp)
.L0f16c5e4:
/*  f16c5e4:	8e8d0034 */ 	lw	$t5,0x34($s4)
.L0f16c5e8:
/*  f16c5e8:	00008025 */ 	or	$s0,$zero,$zero
/*  f16c5ec:	00005825 */ 	or	$t3,$zero,$zero
/*  f16c5f0:	11a00093 */ 	beqz	$t5,.L0f16c840
/*  f16c5f4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c5f8:	8e89006c */ 	lw	$t1,0x6c($s4)
/*  f16c5fc:	8e870068 */ 	lw	$a3,0x68($s4)
/*  f16c600:	8e880064 */ 	lw	$t0,0x64($s4)
/*  f16c604:	11200003 */ 	beqz	$t1,.L0f16c614
/*  f16c608:	8e860070 */ 	lw	$a2,0x70($s4)
/*  f16c60c:	10000002 */ 	beqz	$zero,.L0f16c618
/*  f16c610:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f16c614:
/*  f16c614:	00002825 */ 	or	$a1,$zero,$zero
.L0f16c618:
/*  f16c618:	10e00003 */ 	beqz	$a3,.L0f16c628
/*  f16c61c:	00002025 */ 	or	$a0,$zero,$zero
/*  f16c620:	10000001 */ 	beqz	$zero,.L0f16c628
/*  f16c624:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f16c628:
/*  f16c628:	11000003 */ 	beqz	$t0,.L0f16c638
/*  f16c62c:	00001825 */ 	or	$v1,$zero,$zero
/*  f16c630:	10000001 */ 	beqz	$zero,.L0f16c638
/*  f16c634:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f16c638:
/*  f16c638:	10c00003 */ 	beqz	$a2,.L0f16c648
/*  f16c63c:	00001025 */ 	or	$v0,$zero,$zero
/*  f16c640:	10000001 */ 	beqz	$zero,.L0f16c648
/*  f16c644:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16c648:
/*  f16c648:	00437021 */ 	addu	$t6,$v0,$v1
/*  f16c64c:	01c47821 */ 	addu	$t7,$t6,$a0
/*  f16c650:	01e5c021 */ 	addu	$t8,$t7,$a1
/*  f16c654:	1b00002d */ 	blez	$t8,.L0f16c70c
/*  f16c658:	000bc880 */ 	sll	$t9,$t3,0x2
/*  f16c65c:	44800000 */ 	mtc1	$zero,$f0
/*  f16c660:	02995021 */ 	addu	$t2,$s4,$t9
/*  f16c664:	8d420064 */ 	lw	$v0,0x64($t2)
.L0f16c668:
/*  f16c668:	256b0001 */ 	addiu	$t3,$t3,0x1
/*  f16c66c:	00002825 */ 	or	$a1,$zero,$zero
/*  f16c670:	8c4c00d8 */ 	lw	$t4,0xd8($v0)
/*  f16c674:	00002025 */ 	or	$a0,$zero,$zero
/*  f16c678:	00001825 */ 	or	$v1,$zero,$zero
/*  f16c67c:	1180000d */ 	beqz	$t4,.L0f16c6b4
/*  f16c680:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c684:	8c4d032c */ 	lw	$t5,0x32c($v0)
/*  f16c688:	51a0000a */ 	beqzl	$t5,.L0f16c6b4
/*  f16c68c:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f16c690:	8c4e0330 */ 	lw	$t6,0x330($v0)
/*  f16c694:	51c00007 */ 	beqzl	$t6,.L0f16c6b4
/*  f16c698:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f16c69c:	c44602ec */ 	lwc1	$f6,0x2ec($v0)
/*  f16c6a0:	4606003e */ 	c.le.s	$f0,$f6
/*  f16c6a4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c6a8:	45000002 */ 	bc1f	.L0f16c6b4
/*  f16c6ac:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c6b0:	26100001 */ 	addiu	$s0,$s0,0x1
.L0f16c6b4:
/*  f16c6b4:	11200003 */ 	beqz	$t1,.L0f16c6c4
/*  f16c6b8:	254a0004 */ 	addiu	$t2,$t2,0x4
/*  f16c6bc:	10000001 */ 	beqz	$zero,.L0f16c6c4
/*  f16c6c0:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f16c6c4:
/*  f16c6c4:	10e00003 */ 	beqz	$a3,.L0f16c6d4
/*  f16c6c8:	00001025 */ 	or	$v0,$zero,$zero
/*  f16c6cc:	10000001 */ 	beqz	$zero,.L0f16c6d4
/*  f16c6d0:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f16c6d4:
/*  f16c6d4:	11000003 */ 	beqz	$t0,.L0f16c6e4
/*  f16c6d8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c6dc:	10000001 */ 	beqz	$zero,.L0f16c6e4
/*  f16c6e0:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f16c6e4:
/*  f16c6e4:	10c00003 */ 	beqz	$a2,.L0f16c6f4
/*  f16c6e8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c6ec:	10000001 */ 	beqz	$zero,.L0f16c6f4
/*  f16c6f0:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16c6f4:
/*  f16c6f4:	00437821 */ 	addu	$t7,$v0,$v1
/*  f16c6f8:	01e4c021 */ 	addu	$t8,$t7,$a0
/*  f16c6fc:	0305c821 */ 	addu	$t9,$t8,$a1
/*  f16c700:	0179082a */ 	slt	$at,$t3,$t9
/*  f16c704:	5420ffd8 */ 	bnezl	$at,.L0f16c668
/*  f16c708:	8d420064 */ 	lw	$v0,0x64($t2)
.L0f16c70c:
/*  f16c70c:	3c04800b */ 	lui	$a0,0x800b
/*  f16c710:	8c84c530 */ 	lw	$a0,-0x3ad0($a0)
/*  f16c714:	3c0c800b */ 	lui	$t4,0x800b
/*  f16c718:	2582c4d0 */ 	addiu	$v0,$t4,-15152
/*  f16c71c:	1880000c */ 	blez	$a0,.L0f16c750
/*  f16c720:	3c188008 */ 	lui	$t8,0x8008
/*  f16c724:	00046880 */ 	sll	$t5,$a0,0x2
/*  f16c728:	01a21821 */ 	addu	$v1,$t5,$v0
/*  f16c72c:	8c4e0000 */ 	lw	$t6,0x0($v0)
.L0f16c730:
/*  f16c730:	24420004 */ 	addiu	$v0,$v0,0x4
/*  f16c734:	0043082b */ 	sltu	$at,$v0,$v1
/*  f16c738:	81cf0007 */ 	lb	$t7,0x7($t6)
/*  f16c73c:	16af0002 */ 	bne	$s5,$t7,.L0f16c748
/*  f16c740:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c744:	26100001 */ 	addiu	$s0,$s0,0x1
.L0f16c748:
/*  f16c748:	5420fff9 */ 	bnezl	$at,.L0f16c730
/*  f16c74c:	8c4e0000 */ 	lw	$t6,0x0($v0)
.L0f16c750:
/*  f16c750:	8f18402c */ 	lw	$t8,0x402c($t8)
/*  f16c754:	27a4016c */ 	addiu	$a0,$sp,0x16c
/*  f16c758:	1b000017 */ 	blez	$t8,.L0f16c7b8
/*  f16c75c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c760:	0fc62179 */ 	jal	func0f1885e4
/*  f16c764:	00005825 */ 	or	$t3,$zero,$zero
/*  f16c768:	18400013 */ 	blez	$v0,.L0f16c7b8
/*  f16c76c:	00401825 */ 	or	$v1,$v0,$zero
/*  f16c770:	00036880 */ 	sll	$t5,$v1,0x2
/*  f16c774:	01a36821 */ 	addu	$t5,$t5,$v1
/*  f16c778:	000d6880 */ 	sll	$t5,$t5,0x2
/*  f16c77c:	3c048008 */ 	lui	$a0,0x8008
/*  f16c780:	27a2016c */ 	addiu	$v0,$sp,0x16c
/*  f16c784:	01a22821 */ 	addu	$a1,$t5,$v0
/*  f16c788:	8c84402c */ 	lw	$a0,0x402c($a0)
/*  f16c78c:	8c4c0010 */ 	lw	$t4,0x10($v0)
.L0f16c790:
/*  f16c790:	24420014 */ 	addiu	$v0,$v0,0x14
/*  f16c794:	0184082a */ 	slt	$at,$t4,$a0
/*  f16c798:	54200005 */ 	bnezl	$at,.L0f16c7b0
/*  f16c79c:	0045082b */ 	sltu	$at,$v0,$a1
/*  f16c7a0:	8e2e0000 */ 	lw	$t6,0x0($s1)
/*  f16c7a4:	25cf0001 */ 	addiu	$t7,$t6,0x1
/*  f16c7a8:	ae2f0000 */ 	sw	$t7,0x0($s1)
/*  f16c7ac:	0045082b */ 	sltu	$at,$v0,$a1
.L0f16c7b0:
/*  f16c7b0:	5420fff7 */ 	bnezl	$at,.L0f16c790
/*  f16c7b4:	8c4c0010 */ 	lw	$t4,0x10($v0)
.L0f16c7b8:
/*  f16c7b8:	3c188008 */ 	lui	$t8,0x8008
/*  f16c7bc:	8f184030 */ 	lw	$t8,0x4030($t8)
/*  f16c7c0:	27a40078 */ 	addiu	$a0,$sp,0x78
/*  f16c7c4:	5b000018 */ 	blezl	$t8,.L0f16c828
/*  f16c7c8:	8e380000 */ 	lw	$t8,0x0($s1)
/*  f16c7cc:	0fc622a1 */ 	jal	func0f188a84
/*  f16c7d0:	00005825 */ 	or	$t3,$zero,$zero
/*  f16c7d4:	18400013 */ 	blez	$v0,.L0f16c824
/*  f16c7d8:	00401825 */ 	or	$v1,$v0,$zero
/*  f16c7dc:	0003c880 */ 	sll	$t9,$v1,0x2
/*  f16c7e0:	0323c821 */ 	addu	$t9,$t9,$v1
/*  f16c7e4:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f16c7e8:	3c048008 */ 	lui	$a0,0x8008
/*  f16c7ec:	27a20078 */ 	addiu	$v0,$sp,0x78
/*  f16c7f0:	03222821 */ 	addu	$a1,$t9,$v0
/*  f16c7f4:	8c844030 */ 	lw	$a0,0x4030($a0)
/*  f16c7f8:	8c4c0010 */ 	lw	$t4,0x10($v0)
.L0f16c7fc:
/*  f16c7fc:	24420014 */ 	addiu	$v0,$v0,0x14
/*  f16c800:	0184082a */ 	slt	$at,$t4,$a0
/*  f16c804:	54200005 */ 	bnezl	$at,.L0f16c81c
/*  f16c808:	0045082b */ 	sltu	$at,$v0,$a1
/*  f16c80c:	8e2e0000 */ 	lw	$t6,0x0($s1)
/*  f16c810:	25cf0001 */ 	addiu	$t7,$t6,0x1
/*  f16c814:	ae2f0000 */ 	sw	$t7,0x0($s1)
/*  f16c818:	0045082b */ 	sltu	$at,$v0,$a1
.L0f16c81c:
/*  f16c81c:	5420fff7 */ 	bnezl	$at,.L0f16c7fc
/*  f16c820:	8c4c0010 */ 	lw	$t4,0x10($v0)
.L0f16c824:
/*  f16c824:	8e380000 */ 	lw	$t8,0x0($s1)
.L0f16c828:
/*  f16c828:	1b000005 */ 	blez	$t8,.L0f16c840
/*  f16c82c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c830:	16000003 */ 	bnez	$s0,.L0f16c840
/*  f16c834:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c838:	0c0039a1 */ 	jal	func0000e684
/*  f16c83c:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16c840:
/*  f16c840:	3c198008 */ 	lui	$t9,0x8008
/*  f16c844:	8f394024 */ 	lw	$t9,0x4024($t9)
/*  f16c848:	8e8d0038 */ 	lw	$t5,0x38($s4)
/*  f16c84c:	3c018008 */ 	lui	$at,0x8008
/*  f16c850:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16c854:	032d6021 */ 	addu	$t4,$t9,$t5
/*  f16c858:	448c4000 */ 	mtc1	$t4,$f8
/*  f16c85c:	ac2c4024 */ 	sw	$t4,0x4024($at)
/*  f16c860:	3c014270 */ 	lui	$at,0x4270
/*  f16c864:	468042a0 */ 	cvt.s.w	$f10,$f8
/*  f16c868:	44818000 */ 	mtc1	$at,$f16
/*  f16c86c:	3c018008 */ 	lui	$at,0x8008
/*  f16c870:	46105483 */ 	div.s	$f18,$f10,$f16
/*  f16c874:	0c002f48 */ 	jal	func0000bd20
/*  f16c878:	e432403c */ 	swc1	$f18,0x403c($at)
/*  f16c87c:	8e8204b4 */ 	lw	$v0,0x4b4($s4)
/*  f16c880:	2401004e */ 	addiu	$at,$zero,0x4e
/*  f16c884:	54410007 */ 	bnel	$v0,$at,.L0f16c8a4
/*  f16c888:	2401005a */ 	addiu	$at,$zero,0x5a
/*  f16c88c:	0fc06b8c */ 	jal	func0f01ae30
/*  f16c890:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c894:	0c004761 */ 	jal	func00011d84
/*  f16c898:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c89c:	8e8204b4 */ 	lw	$v0,0x4b4($s4)
/*  f16c8a0:	2401005a */ 	addiu	$at,$zero,0x5a
.L0f16c8a4:
/*  f16c8a4:	5441000a */ 	bnel	$v0,$at,.L0f16c8d0
/*  f16c8a8:	2401005b */ 	addiu	$at,$zero,0x5b
/*  f16c8ac:	0fc06a04 */ 	jal	func0f01a810
/*  f16c8b0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c8b4:	0fc07618 */ 	jal	func0f01d860
/*  f16c8b8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c8bc:	0c004761 */ 	jal	func00011d84
/*  f16c8c0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c8c4:	10000087 */ 	beqz	$zero,.L0f16cae4
/*  f16c8c8:	8fbf0044 */ 	lw	$ra,0x44($sp)
/*  f16c8cc:	2401005b */ 	addiu	$at,$zero,0x5b
.L0f16c8d0:
/*  f16c8d0:	5441000e */ 	bnel	$v0,$at,.L0f16c90c
/*  f16c8d4:	2401005d */ 	addiu	$at,$zero,0x5d
/*  f16c8d8:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f16c8dc:	00002025 */ 	or	$a0,$zero,$zero
/*  f16c8e0:	0fc06fca */ 	jal	func0f01bf28
/*  f16c8e4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c8e8:	0c004761 */ 	jal	func00011d84
/*  f16c8ec:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c8f0:	0fc07618 */ 	jal	func0f01d860
/*  f16c8f4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c8f8:	0fc471e8 */ 	jal	func0f11c7a0
/*  f16c8fc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c900:	10000078 */ 	beqz	$zero,.L0f16cae4
/*  f16c904:	8fbf0044 */ 	lw	$ra,0x44($sp)
/*  f16c908:	2401005d */ 	addiu	$at,$zero,0x5d
.L0f16c90c:
/*  f16c90c:	5441000c */ 	bnel	$v0,$at,.L0f16c940
/*  f16c910:	2401005c */ 	addiu	$at,$zero,0x5c
/*  f16c914:	0fc06fca */ 	jal	func0f01bf28
/*  f16c918:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c91c:	0c004761 */ 	jal	func00011d84
/*  f16c920:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c924:	0fc07618 */ 	jal	func0f01d860
/*  f16c928:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c92c:	0fc471e8 */ 	jal	func0f11c7a0
/*  f16c930:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c934:	1000006b */ 	beqz	$zero,.L0f16cae4
/*  f16c938:	8fbf0044 */ 	lw	$ra,0x44($sp)
/*  f16c93c:	2401005c */ 	addiu	$at,$zero,0x5c
.L0f16c940:
/*  f16c940:	14410007 */ 	bne	$v0,$at,.L0f16c960
/*  f16c944:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c948:	0c004761 */ 	jal	func00011d84
/*  f16c94c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c950:	0fc07618 */ 	jal	func0f01d860
/*  f16c954:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c958:	10000062 */ 	beqz	$zero,.L0f16cae4
/*  f16c95c:	8fbf0044 */ 	lw	$ra,0x44($sp)
.L0f16c960:
/*  f16c960:	0fc5ae04 */ 	jal	func0f16b810
/*  f16c964:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c968:	0fc4a4e7 */ 	jal	func0f12939c
/*  f16c96c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c970:	0fc5ac32 */ 	jal	func0f16b0c8
/*  f16c974:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c978:	0fc07630 */ 	jal	func0f01d8c0
/*  f16c97c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c980:	0fc07664 */ 	jal	func0f01d990
/*  f16c984:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c988:	0fc0775b */ 	jal	func0f01dd6c
/*  f16c98c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c990:	0fc0778c */ 	jal	func0f01de30
/*  f16c994:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c998:	0fc07814 */ 	jal	func0f01e050
/*  f16c99c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c9a0:	0fc4fad1 */ 	jal	func0f13eb44
/*  f16c9a4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c9a8:	0fc52619 */ 	jal	func0f149864
/*  f16c9ac:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c9b0:	3c0e8006 */ 	lui	$t6,0x8006
/*  f16c9b4:	8dce23f0 */ 	lw	$t6,0x23f0($t6)
/*  f16c9b8:	11c00003 */ 	beqz	$t6,.L0f16c9c8
/*  f16c9bc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c9c0:	0fc075dc */ 	jal	func0f01d770
/*  f16c9c4:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16c9c8:
/*  f16c9c8:	3c0f8006 */ 	lui	$t7,0x8006
/*  f16c9cc:	8def1640 */ 	lw	$t7,0x1640($t7)
/*  f16c9d0:	11e00003 */ 	beqz	$t7,.L0f16c9e0
/*  f16c9d4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c9d8:	0fc027ab */ 	jal	func0f009eac
/*  f16c9dc:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16c9e0:
/*  f16c9e0:	0fc59f22 */ 	jal	func0f167c88
/*  f16c9e4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c9e8:	0c003fa2 */ 	jal	func0000fe88
/*  f16c9ec:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c9f0:	0fc471e8 */ 	jal	func0f11c7a0
/*  f16c9f4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16c9f8:	0fc00cec */ 	jal	func0f0033b0
/*  f16c9fc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ca00:	0fc2ca41 */ 	jal	func0f0b2904
/*  f16ca04:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ca08:	0fc2bbee */ 	jal	func0f0aefb8
/*  f16ca0c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ca10:	0fc06c58 */ 	jal	func0f01b160
/*  f16ca14:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ca18:	0fc06fca */ 	jal	func0f01bf28
/*  f16ca1c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ca20:	0fc615ab */ 	jal	func0f1856ac
/*  f16ca24:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ca28:	3c188006 */ 	lui	$t8,0x8006
/*  f16ca2c:	8f18d9d0 */ 	lw	$t8,-0x2630($t8)
/*  f16ca30:	17000003 */ 	bnez	$t8,.L0f16ca40
/*  f16ca34:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ca38:	0fc07894 */ 	jal	func0f01e250
/*  f16ca3c:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16ca40:
/*  f16ca40:	0c004761 */ 	jal	func00011d84
/*  f16ca44:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ca48:	0fc07618 */ 	jal	func0f01d860
/*  f16ca4c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ca50:	0fc18f73 */ 	jal	func0f063dcc
/*  f16ca54:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ca58:	0c003a61 */ 	jal	getCurrentStageId
/*  f16ca5c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ca60:	24010026 */ 	addiu	$at,$zero,0x26
/*  f16ca64:	5441001f */ 	bnel	$v0,$at,.L0f16cae4
/*  f16ca68:	8fbf0044 */ 	lw	$ra,0x44($sp)
/*  f16ca6c:	0fc68606 */ 	jal	func0f1a1818
/*  f16ca70:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ca74:	8e990284 */ 	lw	$t9,0x284($s4)
/*  f16ca78:	8f2d00bc */ 	lw	$t5,0xbc($t9)
/*  f16ca7c:	85a30028 */ 	lh	$v1,0x28($t5)
/*  f16ca80:	28610016 */ 	slti	$at,$v1,0x16
/*  f16ca84:	14200002 */ 	bnez	$at,.L0f16ca90
/*  f16ca88:	2861001a */ 	slti	$at,$v1,0x1a
/*  f16ca8c:	1420000b */ 	bnez	$at,.L0f16cabc
.L0f16ca90:
/*  f16ca90:	2401000a */ 	addiu	$at,$zero,0xa
/*  f16ca94:	10610009 */ 	beq	$v1,$at,.L0f16cabc
/*  f16ca98:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ca9c:	10400005 */ 	beqz	$v0,.L0f16cab4
/*  f16caa0:	00002025 */ 	or	$a0,$zero,$zero
/*  f16caa4:	8c4c0000 */ 	lw	$t4,0x0($v0)
/*  f16caa8:	000c77c2 */ 	srl	$t6,$t4,0x1f
/*  f16caac:	15c00003 */ 	bnez	$t6,.L0f16cabc
/*  f16cab0:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16cab4:
/*  f16cab4:	0fc127d2 */ 	jal	chrUnsetStageFlag
/*  f16cab8:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f16cabc:
/*  f16cabc:	0fc67e65 */ 	jal	func0f19f994
/*  f16cac0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cac4:	8e8f0034 */ 	lw	$t7,0x34($s4)
/*  f16cac8:	51e00006 */ 	beqzl	$t7,.L0f16cae4
/*  f16cacc:	8fbf0044 */ 	lw	$ra,0x44($sp)
/*  f16cad0:	0fc68666 */ 	jal	func0f1a1998
/*  f16cad4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cad8:	0fc6881c */ 	jal	func0f1a2070
/*  f16cadc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cae0:	8fbf0044 */ 	lw	$ra,0x44($sp)
.L0f16cae4:
/*  f16cae4:	8fb0002c */ 	lw	$s0,0x2c($sp)
/*  f16cae8:	8fb10030 */ 	lw	$s1,0x30($sp)
/*  f16caec:	8fb20034 */ 	lw	$s2,0x34($sp)
/*  f16caf0:	8fb30038 */ 	lw	$s3,0x38($sp)
/*  f16caf4:	8fb4003c */ 	lw	$s4,0x3c($sp)
/*  f16caf8:	8fb50040 */ 	lw	$s5,0x40($sp)
/*  f16cafc:	03e00008 */ 	jr	$ra
/*  f16cb00:	27bd0290 */ 	addiu	$sp,$sp,0x290
);

GLOBAL_ASM(
glabel func0f16cb04
/*  f16cb04:	3c0e8007 */ 	lui	$t6,0x8007
/*  f16cb08:	8dce5d64 */ 	lw	$t6,0x5d64($t6)
/*  f16cb0c:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16cb10:	24020002 */ 	addiu	$v0,$zero,0x2
/*  f16cb14:	144e000b */ 	bne	$v0,$t6,.L0f16cb44
/*  f16cb18:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16cb1c:	3c0f8007 */ 	lui	$t7,0x8007
/*  f16cb20:	8def5d68 */ 	lw	$t7,0x5d68($t7)
/*  f16cb24:	144f0005 */ 	bne	$v0,$t7,.L0f16cb3c
/*  f16cb28:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cb2c:	0fc2f641 */ 	jal	func0f0bd904
/*  f16cb30:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16cb34:	10000003 */ 	beqz	$zero,.L0f16cb44
/*  f16cb38:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16cb3c:
/*  f16cb3c:	0fc2f641 */ 	jal	func0f0bd904
/*  f16cb40:	00002025 */ 	or	$a0,$zero,$zero
.L0f16cb44:
/*  f16cb44:	3c02800a */ 	lui	$v0,0x800a
/*  f16cb48:	8c42a244 */ 	lw	$v0,-0x5dbc($v0)
/*  f16cb4c:	8c4300bc */ 	lw	$v1,0xbc($v0)
/*  f16cb50:	c4460310 */ 	lwc1	$f6,0x310($v0)
/*  f16cb54:	c44a0318 */ 	lwc1	$f10,0x318($v0)
/*  f16cb58:	c4640008 */ 	lwc1	$f4,0x8($v1)
/*  f16cb5c:	c4680010 */ 	lwc1	$f8,0x10($v1)
/*  f16cb60:	46062001 */ 	sub.s	$f0,$f4,$f6
/*  f16cb64:	460a4081 */ 	sub.s	$f2,$f8,$f10
/*  f16cb68:	46000402 */ 	mul.s	$f16,$f0,$f0
/*  f16cb6c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cb70:	46021482 */ 	mul.s	$f18,$f2,$f2
/*  f16cb74:	0c012974 */ 	jal	sqrtf
/*  f16cb78:	46128300 */ 	add.s	$f12,$f16,$f18
/*  f16cb7c:	3c02800a */ 	lui	$v0,0x800a
/*  f16cb80:	8c42a248 */ 	lw	$v0,-0x5db8($v0)
/*  f16cb84:	c4440038 */ 	lwc1	$f4,0x38($v0)
/*  f16cb88:	46002180 */ 	add.s	$f6,$f4,$f0
/*  f16cb8c:	e4460038 */ 	swc1	$f6,0x38($v0)
/*  f16cb90:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16cb94:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16cb98:	03e00008 */ 	jr	$ra
/*  f16cb9c:	00000000 */ 	sll	$zero,$zero,0x0
);

void stageLoad(void)
{
	func0f11dcb0(1);

	if (var80084034 != 0 && func000337f0(var80084034)) {
		func00033b24(var80084034);
	}

	if (g_Vars.stagenum < NUM_STAGES) {
		s32 bank = func0f16e1e0(g_Vars.stagenum);
		textClearBank(bank);
		func0f015270();
	}

	func0f014f10();
	func0f015280();
	func0f015330();
	func0f015400();
	func0f015410();
	func0f015420();
	func0f0153f0();
	func0f014fe0();
	setupParseObjects();
	func0f135bd8();
	func0f0151f0();
	func0f015260();
	func0f015470();
	func0f0150a0();
	func0f16d9fc();
	func0f0e0724();

	if (g_Vars.stagenum < NUM_STAGES) {
		func0f15c850();
	}

	func00033dd8();

	if (var80062940 == 2) {
		func0f0f09f0(5);
		var80062940 = 0;
	}

	func0f01bea0();
}

GLOBAL_ASM(
glabel func0f16cce4
/*  f16cce4:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f16cce8:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16ccec:	0fc62590 */ 	jal	func0f189640
/*  f16ccf0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ccf4:	3c0e8008 */ 	lui	$t6,0x8008
/*  f16ccf8:	8dce4010 */ 	lw	$t6,0x4010($t6)
/*  f16ccfc:	afa2001c */ 	sw	$v0,0x1c($sp)
/*  f16cd00:	504e000a */ 	beql	$v0,$t6,.L0f16cd2c
/*  f16cd04:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16cd08:	10400005 */ 	beqz	$v0,.L0f16cd20
/*  f16cd0c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cd10:	0fc477ae */ 	jal	func0f11deb8
/*  f16cd14:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cd18:	10000004 */ 	beqz	$zero,.L0f16cd2c
/*  f16cd1c:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16cd20:
/*  f16cd20:	0fc477ce */ 	jal	func0f11df38
/*  f16cd24:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cd28:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16cd2c:
/*  f16cd2c:	8faf001c */ 	lw	$t7,0x1c($sp)
/*  f16cd30:	3c018008 */ 	lui	$at,0x8008
/*  f16cd34:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f16cd38:	03e00008 */ 	jr	$ra
/*  f16cd3c:	ac2f4010 */ 	sw	$t7,0x4010($at)
);

GLOBAL_ASM(
glabel func0f16cd40
/*  f16cd40:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16cd44:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16cd48:	10800007 */ 	beqz	$a0,.L0f16cd68
/*  f16cd4c:	afa40018 */ 	sw	$a0,0x18($sp)
/*  f16cd50:	0fc477ae */ 	jal	func0f11deb8
/*  f16cd54:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cd58:	0c003f88 */ 	jal	func0000fe20
/*  f16cd5c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cd60:	10000006 */ 	beqz	$zero,.L0f16cd7c
/*  f16cd64:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16cd68:
/*  f16cd68:	0c003f94 */ 	jal	func0000fe50
/*  f16cd6c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cd70:	0fc477ce */ 	jal	func0f11df38
/*  f16cd74:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cd78:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16cd7c:
/*  f16cd7c:	8faf0018 */ 	lw	$t7,0x18($sp)
/*  f16cd80:	3c018008 */ 	lui	$at,0x8008
/*  f16cd84:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16cd88:	03e00008 */ 	jr	$ra
/*  f16cd8c:	ac2f4014 */ 	sw	$t7,0x4014($at)
);

u32 getVar80084014(void)
{
	return var80084014;
}

s32 getDifficulty(void)
{
	return g_Difficulty;
}

GLOBAL_ASM(
glabel setDifficulty
/*  f16cda8:	04800003 */ 	bltz	$a0,.L0f16cdb8
/*  f16cdac:	28810004 */ 	slti	$at,$a0,0x4
/*  f16cdb0:	14200002 */ 	bnez	$at,.L0f16cdbc
/*  f16cdb4:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16cdb8:
/*  f16cdb8:	00002025 */ 	or	$a0,$zero,$zero
.L0f16cdbc:
/*  f16cdbc:	3c018008 */ 	lui	$at,0x8008
/*  f16cdc0:	03e00008 */ 	jr	$ra
/*  f16cdc4:	ac244020 */ 	sw	$a0,0x4020($at)
);

void setVar80084028(u32 arg0)
{
	var80084028 = arg0;
}

void setVar8008402c(u32 arg0)
{
	var8008402c = arg0;
}

void setVar80084030(u32 arg0)
{
	var80084030 = arg0;
}

f32 getUptime(void)
{
	return g_Uptime;
}

u32 getVar80084024(void)
{
	return var80084024;
}

GLOBAL_ASM(
glabel func0f16ce04
/*  f16ce04:	03e00008 */ 	jr	$ra
/*  f16ce08:	00801025 */ 	or	$v0,$a0,$zero
/*  f16ce0c:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16ce10
/*  f16ce10:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16ce14:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16ce18:	0c012144 */ 	jal	func00048510
/*  f16ce1c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ce20:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16ce24:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f16ce28:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f16ce2c:	ac620018 */ 	sw	$v0,0x18($v1)
/*  f16ce30:	ac620014 */ 	sw	$v0,0x14($v1)
/*  f16ce34:	03e00008 */ 	jr	$ra
/*  f16ce38:	27bd0018 */ 	addiu	$sp,$sp,0x18
);

GLOBAL_ASM(
glabel func0f16ce3c
/*  f16ce3c:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f16ce40:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f16ce44:	44842000 */ 	mtc1	$a0,$f4
/*  f16ce48:	44855000 */ 	mtc1	$a1,$f10
/*  f16ce4c:	8c620058 */ 	lw	$v0,0x58($v1)
/*  f16ce50:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f16ce54:	8c6e0018 */ 	lw	$t6,0x18($v1)
/*  f16ce58:	00457821 */ 	addu	$t7,$v0,$a1
/*  f16ce5c:	ac660018 */ 	sw	$a2,0x18($v1)
/*  f16ce60:	ac640000 */ 	sw	$a0,0x0($v1)
/*  f16ce64:	46805420 */ 	cvt.s.w	$f16,$f10
/*  f16ce68:	e4660004 */ 	swc1	$f6,0x4($v1)
/*  f16ce6c:	c4680004 */ 	lwc1	$f8,0x4($v1)
/*  f16ce70:	ac6f0058 */ 	sw	$t7,0x58($v1)
/*  f16ce74:	ac650040 */ 	sw	$a1,0x40($v1)
/*  f16ce78:	ac620054 */ 	sw	$v0,0x54($v1)
/*  f16ce7c:	e4700048 */ 	swc1	$f16,0x48($v1)
/*  f16ce80:	c4720048 */ 	lwc1	$f18,0x48($v1)
/*  f16ce84:	ac6e0014 */ 	sw	$t6,0x14($v1)
/*  f16ce88:	e4680010 */ 	swc1	$f8,0x10($v1)
/*  f16ce8c:	03e00008 */ 	jr	$ra
/*  f16ce90:	e472005c */ 	swc1	$f18,0x5c($v1)
);

GLOBAL_ASM(
glabel func0f16ce94
/*  f16ce94:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f16ce98:	afb40028 */ 	sw	$s4,0x28($sp)
/*  f16ce9c:	afb30024 */ 	sw	$s3,0x24($sp)
/*  f16cea0:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f16cea4:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f16cea8:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f16ceac:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f16ceb0:	3c11000b */ 	lui	$s1,0xb
/*  f16ceb4:	3c120002 */ 	lui	$s2,0x2
/*  f16ceb8:	3c130005 */ 	lui	$s3,0x5
/*  f16cebc:	3c140001 */ 	lui	$s4,0x1
/*  f16cec0:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f16cec4:	36947d78 */ 	ori	$s4,$s4,0x7d78
/*  f16cec8:	3673f5e1 */ 	ori	$s3,$s3,0xf5e1
/*  f16cecc:	3652faf0 */ 	ori	$s2,$s2,0xfaf0
/*  f16ced0:	3631ebc2 */ 	ori	$s1,$s1,0xebc2
/*  f16ced4:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
.L0f16ced8:
/*  f16ced8:	0c012144 */ 	jal	func00048510
/*  f16cedc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cee0:	8e0e0018 */ 	lw	$t6,0x18($s0)
/*  f16cee4:	8e0f0020 */ 	lw	$t7,0x20($s0)
/*  f16cee8:	8e190024 */ 	lw	$t9,0x24($s0)
/*  f16ceec:	004e1823 */ 	subu	$v1,$v0,$t6
/*  f16cef0:	01e33821 */ 	addu	$a3,$t7,$v1
/*  f16cef4:	00f3c021 */ 	addu	$t8,$a3,$s3
/*  f16cef8:	0311001b */ 	divu	$zero,$t8,$s1
/*  f16cefc:	00002012 */ 	mflo	$a0
/*  f16cf00:	03234021 */ 	addu	$t0,$t9,$v1
/*  f16cf04:	01144821 */ 	addu	$t1,$t0,$s4
/*  f16cf08:	0132001b */ 	divu	$zero,$t1,$s2
/*  f16cf0c:	8e0a0028 */ 	lw	$t2,0x28($s0)
/*  f16cf10:	00002812 */ 	mflo	$a1
/*  f16cf14:	00403025 */ 	or	$a2,$v0,$zero
/*  f16cf18:	008a082b */ 	sltu	$at,$a0,$t2
/*  f16cf1c:	ae03001c */ 	sw	$v1,0x1c($s0)
/*  f16cf20:	16200002 */ 	bnez	$s1,.L0f16cf2c
/*  f16cf24:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cf28:	0007000d */ 	break	0x7
.L0f16cf2c:
/*  f16cf2c:	16400002 */ 	bnez	$s2,.L0f16cf38
/*  f16cf30:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cf34:	0007000d */ 	break	0x7
.L0f16cf38:
/*  f16cf38:	1420ffe7 */ 	bnez	$at,.L0f16ced8
/*  f16cf3c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cf40:	00910019 */ 	multu	$a0,$s1
/*  f16cf44:	240f0001 */ 	addiu	$t7,$zero,0x1
/*  f16cf48:	ae0f0028 */ 	sw	$t7,0x28($s0)
/*  f16cf4c:	00005812 */ 	mflo	$t3
/*  f16cf50:	00eb6023 */ 	subu	$t4,$a3,$t3
/*  f16cf54:	ae0c0020 */ 	sw	$t4,0x20($s0)
/*  f16cf58:	00b20019 */ 	multu	$a1,$s2
/*  f16cf5c:	00006812 */ 	mflo	$t5
/*  f16cf60:	010d7023 */ 	subu	$t6,$t0,$t5
/*  f16cf64:	0fc5b38f */ 	jal	func0f16ce3c
/*  f16cf68:	ae0e0024 */ 	sw	$t6,0x24($s0)
/*  f16cf6c:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f16cf70:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f16cf74:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f16cf78:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f16cf7c:	8fb30024 */ 	lw	$s3,0x24($sp)
/*  f16cf80:	8fb40028 */ 	lw	$s4,0x28($sp)
/*  f16cf84:	03e00008 */ 	jr	$ra
/*  f16cf88:	27bd0030 */ 	addiu	$sp,$sp,0x30
/*  f16cf8c:	03e00008 */ 	jr	$ra
/*  f16cf90:	afa40000 */ 	sw	$a0,0x0($sp)
);

GLOBAL_ASM(
glabel func0f16cf94
/*  f16cf94:	03e00008 */ 	jr	$ra
/*  f16cf98:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cf9c:	00000000 */ 	sll	$zero,$zero,0x0
);
