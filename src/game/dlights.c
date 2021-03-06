#include <ultra64.h>
#include "constants.h"
#include "game/cheats.h"
#include "game/data/data_000000.h"
#include "game/data/data_0083d0.h"
#include "game/data/data_00e460.h"
#include "game/data/data_0160b0.h"
#include "game/data/data_01a3a0.h"
#include "game/data/data_020df0.h"
#include "game/data/data_02da90.h"
#include "game/dlights.h"
#include "game/game_092610.h"
#include "game/game_0b3350.h"
#include "game/game_0b63b0.h"
#include "game/smoke.h"
#include "game/game_12f6c0.h"
#include "game/game_157db0.h"
#include "game/game_166e40.h"
#include "game/game_167ae0.h"
#include "game/game_176080.h"
#include "game/game_17f930.h"
#include "game/propobj.h"
#include "game/utils.h"
#include "game/wallhit.h"
#include "gvars/gvars.h"
#include "lib/lib_0e9d0.h"
#include "lib/lib_121e0.h"
#include "lib/lib_12dc0.h"
#include "lib/lib_16110.h"
#include "lib/lib_2f490.h"
#include "lib/lib_317f0.h"
#include "lib/lib_481e0.h"
#include "lib/lib_4a360.h"
#include "types.h"

const char var7f1a78e0[] = "LIGHTS : Hit occured on light %d in room %d\n";
const char var7f1a7910[] = "L2(%d) -> ";
const char var7f1a791c[] = "L2 -> BUILD LIGHTS TRANSFER TABLE - Starting\n";
const char var7f1a794c[] = "L2(%d) -> ";
const char var7f1a7958[] = "L2_BuildTransferTables -> Found %d portals\n";
const char var7f1a7984[] = "L2(%d) -> ";
const char var7f1a7990[] = "L2_BuildTransferTables -> Found %d rooms\n";
const char var7f1a79bc[] = "L2(%d) -> ";
const char var7f1a79c8[] = "L2_BuildTransferTables -> Alloc %u bytes of free memory\n";
const char var7f1a7a04[] = "L2(%d) -> ";
const char var7f1a7a10[] = "L2_BuildTransferTables -> Alloc %u bytes for scratch\n";
const char var7f1a7a48[] = "L2(%d) -> ";
const char var7f1a7a54[] = "L2 -> Building room based light transmission table\n";
const char var7f1a7a88[] = "L2(%d) -> ";
const char var7f1a7a94[] = "L2 -> Finished\n";
const char var7f1a7aa4[] = "L2(%d) -> ";
const char var7f1a7ab0[] = "L2 -> Generating room parameters from BG data\n";
const char var7f1a7ae0[] = "L2(%d) -> ";
const char var7f1a7aec[] = "L2 -> Light2_ProcessBgParams room %d does not have a 3D bounding box => Room Volume is bodged!\n";
const char var7f1a7b4c[] = "L2(%d) -> ";
const char var7f1a7b58[] = "%s%sL2 -> Surface area bodged for room %d - using %f\n";
const char var7f1a7b90[] = "";
const char var7f1a7b94[] = "";
const char var7f1a7b98[] = "L2(%d) -> ";
const char var7f1a7ba4[] = "L2 -> Finished\n";
const char var7f1a7bb4[] = "dlights.c";
const char var7f1a7bc0[] = "dlights.c";
const char var7f1a7bcc[] = "L2 - g_bfGlobalLightRebuild = %d";
const char var7f1a7bf0[] = "Acoustic Shadowing is %s";
const char var7f1a7c0c[] = "Enabled";
const char var7f1a7c14[] = "Disabled";
const char var7f1a7c20[] = "L2 - Fading Rm%d - Mode=%d%%";
const char var7f1a7c40[] = "RWI : Re-light all affected char props : g_bfGlobalLightRebuild";
const char var7f1a7c80[] = "L2 - %d Rooms have been processed";
const char var7f1a7ca4[] = "L2 - %d Chars need lighting";
const char var7f1a7cc0[] = "L2(%d) -> ";
const char var7f1a7ccc[] = "L2 -> Building portal range table (Num Portals = %d)\n";
const char var7f1a7d04[] = "L2(%d) -> ";
const char var7f1a7d10[] = "L2 -> Allocated %uK for the compressed acoustic shadow table\n";
const char var7f1a7d50[] = "L2(%d) -> ";
const char var7f1a7d5c[] = "L2 -> Finished building portal range table\n";

GLOBAL_ASM(
glabel func0f000920
/*  f000920:	10850014 */ 	beq	$a0,$a1,.L0f000974
/*  f000924:	00001025 */ 	or	$v0,$zero,$zero
/*  f000928:	00a4082a */ 	slt	$at,$a1,$a0
/*  f00092c:	10200003 */ 	beqz	$at,.L0f00093c
/*  f000930:	3c0e8006 */ 	lui	$t6,%hi(var80061430)
/*  f000934:	10000002 */ 	b	.L0f000940
/*  f000938:	00801825 */ 	or	$v1,$a0,$zero
.L0f00093c:
/*  f00093c:	00a01825 */ 	or	$v1,$a1,$zero
.L0f000940:
/*  f000940:	0085082a */ 	slt	$at,$a0,$a1
/*  f000944:	10200003 */ 	beqz	$at,.L0f000954
/*  f000948:	00a03025 */ 	or	$a2,$a1,$zero
/*  f00094c:	10000001 */ 	b	.L0f000954
/*  f000950:	00803025 */ 	or	$a2,$a0,$zero
.L0f000954:
/*  f000954:	8dce1430 */ 	lw	$t6,%lo(var80061430)($t6)
/*  f000958:	00037880 */ 	sll	$t7,$v1,0x2
/*  f00095c:	00064040 */ 	sll	$t0,$a2,0x1
/*  f000960:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f000964:	8f190000 */ 	lw	$t9,0x0($t8)
/*  f000968:	03284821 */ 	addu	$t1,$t9,$t0
/*  f00096c:	03e00008 */ 	jr	$ra
/*  f000970:	95220000 */ 	lhu	$v0,0x0($t1)
.L0f000974:
/*  f000974:	03e00008 */ 	jr	$ra
/*  f000978:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f00097c
/*  f00097c:	000478c0 */ 	sll	$t7,$a0,0x3
/*  f000980:	01e47821 */ 	addu	$t7,$t7,$a0
/*  f000984:	3c0e800a */ 	lui	$t6,%hi(g_Rooms)
/*  f000988:	8dce4928 */ 	lw	$t6,%lo(g_Rooms)($t6)
/*  f00098c:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000990:	01e47823 */ 	subu	$t7,$t7,$a0
/*  f000994:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000998:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f00099c:	9719000a */ 	lhu	$t9,0xa($t8)
/*  f0009a0:	3c0a800a */ 	lui	$t2,%hi(var800a4cd8)
/*  f0009a4:	8d4a4cd8 */ 	lw	$t2,%lo(var800a4cd8)($t2)
/*  f0009a8:	03254021 */ 	addu	$t0,$t9,$a1
/*  f0009ac:	00084900 */ 	sll	$t1,$t0,0x4
/*  f0009b0:	01284821 */ 	addu	$t1,$t1,$t0
/*  f0009b4:	00094840 */ 	sll	$t1,$t1,0x1
/*  f0009b8:	03e00008 */ 	jr	$ra
/*  f0009bc:	012a1021 */ 	addu	$v0,$t1,$t2
);

GLOBAL_ASM(
glabel func0f0009c0
/*  f0009c0:	000478c0 */ 	sll	$t7,$a0,0x3
/*  f0009c4:	01e47821 */ 	addu	$t7,$t7,$a0
/*  f0009c8:	3c0e800a */ 	lui	$t6,%hi(g_Rooms)
/*  f0009cc:	8dce4928 */ 	lw	$t6,%lo(g_Rooms)($t6)
/*  f0009d0:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f0009d4:	01e47823 */ 	subu	$t7,$t7,$a0
/*  f0009d8:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f0009dc:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f0009e0:	9058004b */ 	lbu	$t8,0x4b($v0)
/*  f0009e4:	84590052 */ 	lh	$t9,0x52($v0)
/*  f0009e8:	03191821 */ 	addu	$v1,$t8,$t9
/*  f0009ec:	28610100 */ 	slti	$at,$v1,0x100
/*  f0009f0:	14200002 */ 	bnez	$at,.L0f0009fc
/*  f0009f4:	00000000 */ 	nop
/*  f0009f8:	240300ff */ 	addiu	$v1,$zero,0xff
.L0f0009fc:
/*  f0009fc:	04610002 */ 	bgez	$v1,.L0f000a08
/*  f000a00:	00000000 */ 	nop
/*  f000a04:	00001825 */ 	or	$v1,$zero,$zero
.L0f000a08:
/*  f000a08:	03e00008 */ 	jr	$ra
/*  f000a0c:	306200ff */ 	andi	$v0,$v1,0xff
);

GLOBAL_ASM(
glabel func0f000a10
/*  f000a10:	3c05800a */ 	lui	$a1,%hi(g_Vars+0x284)
/*  f000a14:	8ca5a244 */ 	lw	$a1,%lo(g_Vars+0x284)($a1)
/*  f000a18:	000478c0 */ 	sll	$t7,$a0,0x3
/*  f000a1c:	01e47821 */ 	addu	$t7,$t7,$a0
/*  f000a20:	3c0e800a */ 	lui	$t6,%hi(g_Rooms)
/*  f000a24:	8dce4928 */ 	lw	$t6,%lo(g_Rooms)($t6)
/*  f000a28:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000a2c:	8ca600d8 */ 	lw	$a2,0xd8($a1)
/*  f000a30:	01e47823 */ 	subu	$t7,$t7,$a0
/*  f000a34:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000a38:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f000a3c:	14c00014 */ 	bnez	$a2,.L0f000a90
/*  f000a40:	84430052 */ 	lh	$v1,0x52($v0)
/*  f000a44:	3c188007 */ 	lui	$t8,%hi(var80070764)
/*  f000a48:	8f180764 */ 	lw	$t8,%lo(var80070764)($t8)
/*  f000a4c:	17000010 */ 	bnez	$t8,.L0f000a90
/*  f000a50:	00000000 */ 	nop
/*  f000a54:	8ca40480 */ 	lw	$a0,0x480($a1)
/*  f000a58:	50800007 */ 	beqzl	$a0,.L0f000a78
/*  f000a5c:	8ca91c54 */ 	lw	$t1,0x1c54($a1)
/*  f000a60:	1080000b */ 	beqz	$a0,.L0f000a90
/*  f000a64:	00000000 */ 	nop
/*  f000a68:	80990037 */ 	lb	$t9,0x37($a0)
/*  f000a6c:	17200008 */ 	bnez	$t9,.L0f000a90
/*  f000a70:	00000000 */ 	nop
/*  f000a74:	8ca91c54 */ 	lw	$t1,0x1c54($a1)
.L0f000a78:
/*  f000a78:	8ca800c4 */ 	lw	$t0,0xc4($a1)
/*  f000a7c:	01205027 */ 	nor	$t2,$t1,$zero
/*  f000a80:	010a5824 */ 	and	$t3,$t0,$t2
/*  f000a84:	316c0001 */ 	andi	$t4,$t3,0x1
/*  f000a88:	15800014 */ 	bnez	$t4,.L0f000adc
/*  f000a8c:	00000000 */ 	nop
.L0f000a90:
/*  f000a90:	14c00016 */ 	bnez	$a2,.L0f000aec
/*  f000a94:	3c0d8007 */ 	lui	$t5,%hi(var80070764)
/*  f000a98:	8dad0764 */ 	lw	$t5,%lo(var80070764)($t5)
/*  f000a9c:	55a00014 */ 	bnezl	$t5,.L0f000af0
/*  f000aa0:	904b004b */ 	lbu	$t3,0x4b($v0)
/*  f000aa4:	8ca40480 */ 	lw	$a0,0x480($a1)
/*  f000aa8:	50800007 */ 	beqzl	$a0,.L0f000ac8
/*  f000aac:	8cb81c54 */ 	lw	$t8,0x1c54($a1)
/*  f000ab0:	5080000f */ 	beqzl	$a0,.L0f000af0
/*  f000ab4:	904b004b */ 	lbu	$t3,0x4b($v0)
/*  f000ab8:	808e0037 */ 	lb	$t6,0x37($a0)
/*  f000abc:	55c0000c */ 	bnezl	$t6,.L0f000af0
/*  f000ac0:	904b004b */ 	lbu	$t3,0x4b($v0)
/*  f000ac4:	8cb81c54 */ 	lw	$t8,0x1c54($a1)
.L0f000ac8:
/*  f000ac8:	8caf00c4 */ 	lw	$t7,0xc4($a1)
/*  f000acc:	0300c827 */ 	nor	$t9,$t8,$zero
/*  f000ad0:	01f94824 */ 	and	$t1,$t7,$t9
/*  f000ad4:	31280008 */ 	andi	$t0,$t1,0x8
/*  f000ad8:	11000004 */ 	beqz	$t0,.L0f000aec
.L0f000adc:
/*  f000adc:	3c0a800a */ 	lui	$t2,%hi(var8009caec)
/*  f000ae0:	914acaec */ 	lbu	$t2,%lo(var8009caec)($t2)
/*  f000ae4:	10000003 */ 	b	.L0f000af4
/*  f000ae8:	006a1821 */ 	addu	$v1,$v1,$t2
.L0f000aec:
/*  f000aec:	904b004b */ 	lbu	$t3,0x4b($v0)
.L0f000af0:
/*  f000af0:	006b1821 */ 	addu	$v1,$v1,$t3
.L0f000af4:
/*  f000af4:	28610100 */ 	slti	$at,$v1,0x100
/*  f000af8:	14200002 */ 	bnez	$at,.L0f000b04
/*  f000afc:	00000000 */ 	nop
/*  f000b00:	240300ff */ 	addiu	$v1,$zero,0xff
.L0f000b04:
/*  f000b04:	04610002 */ 	bgez	$v1,.L0f000b10
/*  f000b08:	00000000 */ 	nop
/*  f000b0c:	00001825 */ 	or	$v1,$zero,$zero
.L0f000b10:
/*  f000b10:	03e00008 */ 	jr	$ra
/*  f000b14:	306200ff */ 	andi	$v0,$v1,0xff
/*  f000b18:	afa40000 */ 	sw	$a0,0x0($sp)
/*  f000b1c:	03e00008 */ 	jr	$ra
/*  f000b20:	240200ff */ 	addiu	$v0,$zero,0xff
);

GLOBAL_ASM(
glabel func0f000b24
/*  f000b24:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x284)
/*  f000b28:	8c42a244 */ 	lw	$v0,%lo(g_Vars+0x284)($v0)
/*  f000b2c:	00802825 */ 	or	$a1,$a0,$zero
/*  f000b30:	3c0e8007 */ 	lui	$t6,%hi(var80070764)
/*  f000b34:	8c4300d8 */ 	lw	$v1,0xd8($v0)
/*  f000b38:	14600013 */ 	bnez	$v1,.L0f000b88
/*  f000b3c:	00000000 */ 	nop
/*  f000b40:	8dce0764 */ 	lw	$t6,%lo(var80070764)($t6)
/*  f000b44:	15c00010 */ 	bnez	$t6,.L0f000b88
/*  f000b48:	00000000 */ 	nop
/*  f000b4c:	8c440480 */ 	lw	$a0,0x480($v0)
/*  f000b50:	50800007 */ 	beqzl	$a0,.L0f000b70
/*  f000b54:	8c591c54 */ 	lw	$t9,0x1c54($v0)
/*  f000b58:	1080000b */ 	beqz	$a0,.L0f000b88
/*  f000b5c:	00000000 */ 	nop
/*  f000b60:	808f0037 */ 	lb	$t7,0x37($a0)
/*  f000b64:	15e00008 */ 	bnez	$t7,.L0f000b88
/*  f000b68:	00000000 */ 	nop
/*  f000b6c:	8c591c54 */ 	lw	$t9,0x1c54($v0)
.L0f000b70:
/*  f000b70:	8c5800c4 */ 	lw	$t8,0xc4($v0)
/*  f000b74:	03204027 */ 	nor	$t0,$t9,$zero
/*  f000b78:	03084824 */ 	and	$t1,$t8,$t0
/*  f000b7c:	312a0001 */ 	andi	$t2,$t1,0x1
/*  f000b80:	15400014 */ 	bnez	$t2,.L0f000bd4
/*  f000b84:	00000000 */ 	nop
.L0f000b88:
/*  f000b88:	14600015 */ 	bnez	$v1,.L0f000be0
/*  f000b8c:	3c0b8007 */ 	lui	$t3,%hi(var80070764)
/*  f000b90:	8d6b0764 */ 	lw	$t3,%lo(var80070764)($t3)
/*  f000b94:	55600013 */ 	bnezl	$t3,.L0f000be4
/*  f000b98:	000548c0 */ 	sll	$t1,$a1,0x3
/*  f000b9c:	8c440480 */ 	lw	$a0,0x480($v0)
/*  f000ba0:	50800007 */ 	beqzl	$a0,.L0f000bc0
/*  f000ba4:	8c4e1c54 */ 	lw	$t6,0x1c54($v0)
/*  f000ba8:	5080000e */ 	beqzl	$a0,.L0f000be4
/*  f000bac:	000548c0 */ 	sll	$t1,$a1,0x3
/*  f000bb0:	808c0037 */ 	lb	$t4,0x37($a0)
/*  f000bb4:	5580000b */ 	bnezl	$t4,.L0f000be4
/*  f000bb8:	000548c0 */ 	sll	$t1,$a1,0x3
/*  f000bbc:	8c4e1c54 */ 	lw	$t6,0x1c54($v0)
.L0f000bc0:
/*  f000bc0:	8c4d00c4 */ 	lw	$t5,0xc4($v0)
/*  f000bc4:	01c07827 */ 	nor	$t7,$t6,$zero
/*  f000bc8:	01afc824 */ 	and	$t9,$t5,$t7
/*  f000bcc:	33380008 */ 	andi	$t8,$t9,0x8
/*  f000bd0:	13000003 */ 	beqz	$t8,.L0f000be0
.L0f000bd4:
/*  f000bd4:	3c02800a */ 	lui	$v0,%hi(var8009caec)
/*  f000bd8:	03e00008 */ 	jr	$ra
/*  f000bdc:	9042caec */ 	lbu	$v0,%lo(var8009caec)($v0)
.L0f000be0:
/*  f000be0:	000548c0 */ 	sll	$t1,$a1,0x3
.L0f000be4:
/*  f000be4:	01254821 */ 	addu	$t1,$t1,$a1
/*  f000be8:	3c08800a */ 	lui	$t0,%hi(g_Rooms)
/*  f000bec:	8d084928 */ 	lw	$t0,%lo(g_Rooms)($t0)
/*  f000bf0:	00094880 */ 	sll	$t1,$t1,0x2
/*  f000bf4:	01254823 */ 	subu	$t1,$t1,$a1
/*  f000bf8:	00094880 */ 	sll	$t1,$t1,0x2
/*  f000bfc:	01091021 */ 	addu	$v0,$t0,$t1
/*  f000c00:	944a0000 */ 	lhu	$t2,0x0($v0)
/*  f000c04:	240300ff */ 	addiu	$v1,$zero,0xff
/*  f000c08:	314b0040 */ 	andi	$t3,$t2,0x40
/*  f000c0c:	11600003 */ 	beqz	$t3,.L0f000c1c
/*  f000c10:	00000000 */ 	nop
/*  f000c14:	10000001 */ 	b	.L0f000c1c
/*  f000c18:	9043004b */ 	lbu	$v1,0x4b($v0)
.L0f000c1c:
/*  f000c1c:	306200ff */ 	andi	$v0,$v1,0xff
/*  f000c20:	03e00008 */ 	jr	$ra
/*  f000c24:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel roomGetBrightness
/*  f000c28:	000478c0 */ 	sll	$t7,$a0,0x3
/*  f000c2c:	01e47821 */ 	addu	$t7,$t7,$a0
/*  f000c30:	3c0e800a */ 	lui	$t6,%hi(g_Rooms)
/*  f000c34:	8dce4928 */ 	lw	$t6,%lo(g_Rooms)($t6)
/*  f000c38:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000c3c:	01e47823 */ 	subu	$t7,$t7,$a0
/*  f000c40:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000c44:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f000c48:	87190050 */ 	lh	$t9,0x50($t8)
/*  f000c4c:	03e00008 */ 	jr	$ra
/*  f000c50:	332200ff */ 	andi	$v0,$t9,0xff
);

GLOBAL_ASM(
glabel func0f000c54
/*  f000c54:	000478c0 */ 	sll	$t7,$a0,0x3
/*  f000c58:	01e47821 */ 	addu	$t7,$t7,$a0
/*  f000c5c:	3c0e800a */ 	lui	$t6,%hi(g_Rooms)
/*  f000c60:	8dce4928 */ 	lw	$t6,%lo(g_Rooms)($t6)
/*  f000c64:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000c68:	01e47823 */ 	subu	$t7,$t7,$a0
/*  f000c6c:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000c70:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f000c74:	84430052 */ 	lh	$v1,0x52($v0)
/*  f000c78:	28610100 */ 	slti	$at,$v1,0x100
/*  f000c7c:	14200003 */ 	bnez	$at,.L0f000c8c
/*  f000c80:	00000000 */ 	nop
/*  f000c84:	03e00008 */ 	jr	$ra
/*  f000c88:	240200ff */ 	addiu	$v0,$zero,0xff
.L0f000c8c:
/*  f000c8c:	04630004 */ 	bgezl	$v1,.L0f000ca0
/*  f000c90:	94580000 */ 	lhu	$t8,0x0($v0)
/*  f000c94:	03e00008 */ 	jr	$ra
/*  f000c98:	00001025 */ 	or	$v0,$zero,$zero
/*  f000c9c:	94580000 */ 	lhu	$t8,0x0($v0)
.L0f000ca0:
/*  f000ca0:	00002025 */ 	or	$a0,$zero,$zero
/*  f000ca4:	33190040 */ 	andi	$t9,$t8,0x40
/*  f000ca8:	13200003 */ 	beqz	$t9,.L0f000cb8
/*  f000cac:	00000000 */ 	nop
/*  f000cb0:	10000001 */ 	b	.L0f000cb8
/*  f000cb4:	00602025 */ 	or	$a0,$v1,$zero
.L0f000cb8:
/*  f000cb8:	00801025 */ 	or	$v0,$a0,$zero
/*  f000cbc:	03e00008 */ 	jr	$ra
/*  f000cc0:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f000cc4
.late_rodata
glabel var7f1a7d88
.word 0x3b808081
.text
/*  f000cc4:	000478c0 */ 	sll	$t7,$a0,0x3
/*  f000cc8:	01e47821 */ 	addu	$t7,$t7,$a0
/*  f000ccc:	3c0e800a */ 	lui	$t6,%hi(g_Rooms)
/*  f000cd0:	8dce4928 */ 	lw	$t6,%lo(g_Rooms)($t6)
/*  f000cd4:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000cd8:	01e47823 */ 	subu	$t7,$t7,$a0
/*  f000cdc:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000ce0:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f000ce4:	03e00008 */ 	jr	$ra
/*  f000ce8:	c700005c */ 	lwc1	$f0,0x5c($t8)
/*  f000cec:	000478c0 */ 	sll	$t7,$a0,0x3
/*  f000cf0:	01e47821 */ 	addu	$t7,$t7,$a0
/*  f000cf4:	3c0e800a */ 	lui	$t6,%hi(g_Rooms)
/*  f000cf8:	8dce4928 */ 	lw	$t6,%lo(g_Rooms)($t6)
/*  f000cfc:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000d00:	01e47823 */ 	subu	$t7,$t7,$a0
/*  f000d04:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000d08:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f000d0c:	9058004b */ 	lbu	$t8,0x4b($v0)
/*  f000d10:	84590052 */ 	lh	$t9,0x52($v0)
/*  f000d14:	3c013f80 */ 	lui	$at,0x3f80
/*  f000d18:	44810000 */ 	mtc1	$at,$f0
/*  f000d1c:	03194021 */ 	addu	$t0,$t8,$t9
/*  f000d20:	44882000 */ 	mtc1	$t0,$f4
/*  f000d24:	3c017f1a */ 	lui	$at,%hi(var7f1a7d88)
/*  f000d28:	c4287d88 */ 	lwc1	$f8,%lo(var7f1a7d88)($at)
/*  f000d2c:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f000d30:	46083083 */ 	div.s	$f2,$f6,$f8
/*  f000d34:	4602003c */ 	c.lt.s	$f0,$f2
/*  f000d38:	00000000 */ 	nop
/*  f000d3c:	45020003 */ 	bc1fl	.L0f000d4c
/*  f000d40:	44800000 */ 	mtc1	$zero,$f0
/*  f000d44:	46000086 */ 	mov.s	$f2,$f0
/*  f000d48:	44800000 */ 	mtc1	$zero,$f0
.L0f000d4c:
/*  f000d4c:	00000000 */ 	nop
/*  f000d50:	4600103c */ 	c.lt.s	$f2,$f0
/*  f000d54:	00000000 */ 	nop
/*  f000d58:	45000002 */ 	bc1f	.L0f000d64
/*  f000d5c:	00000000 */ 	nop
/*  f000d60:	46000086 */ 	mov.s	$f2,$f0
.L0f000d64:
/*  f000d64:	03e00008 */ 	jr	$ra
/*  f000d68:	46001006 */ 	mov.s	$f0,$f2
/*  f000d6c:	000478c0 */ 	sll	$t7,$a0,0x3
/*  f000d70:	01e47821 */ 	addu	$t7,$t7,$a0
/*  f000d74:	3c0e800a */ 	lui	$t6,%hi(g_Rooms)
/*  f000d78:	8dce4928 */ 	lw	$t6,%lo(g_Rooms)($t6)
/*  f000d7c:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000d80:	01e47823 */ 	subu	$t7,$t7,$a0
/*  f000d84:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000d88:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f000d8c:	9319004b */ 	lbu	$t9,0x4b($t8)
/*  f000d90:	3c014f80 */ 	lui	$at,0x4f80
/*  f000d94:	44992000 */ 	mtc1	$t9,$f4
/*  f000d98:	07210004 */ 	bgez	$t9,.L0f000dac
/*  f000d9c:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f000da0:	44814000 */ 	mtc1	$at,$f8
/*  f000da4:	00000000 */ 	nop
/*  f000da8:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f000dac:
/*  f000dac:	3c01437f */ 	lui	$at,0x437f
/*  f000db0:	44815000 */ 	mtc1	$at,$f10
/*  f000db4:	03e00008 */ 	jr	$ra
/*  f000db8:	460a3003 */ 	div.s	$f0,$f6,$f10
);

GLOBAL_ASM(
glabel func0f000dbc
/*  f000dbc:	000478c0 */ 	sll	$t7,$a0,0x3
/*  f000dc0:	01e47821 */ 	addu	$t7,$t7,$a0
/*  f000dc4:	3c0e800a */ 	lui	$t6,%hi(g_Rooms)
/*  f000dc8:	8dce4928 */ 	lw	$t6,%lo(g_Rooms)($t6)
/*  f000dcc:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000dd0:	01e47823 */ 	subu	$t7,$t7,$a0
/*  f000dd4:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000dd8:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f000ddc:	87190050 */ 	lh	$t9,0x50($t8)
/*  f000de0:	3c01437f */ 	lui	$at,0x437f
/*  f000de4:	44814000 */ 	mtc1	$at,$f8
/*  f000de8:	44992000 */ 	mtc1	$t9,$f4
/*  f000dec:	00000000 */ 	nop
/*  f000df0:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f000df4:	03e00008 */ 	jr	$ra
/*  f000df8:	46083003 */ 	div.s	$f0,$f6,$f8
);

GLOBAL_ASM(
glabel func0f000dfc
/*  f000dfc:	000478c0 */ 	sll	$t7,$a0,0x3
/*  f000e00:	01e47821 */ 	addu	$t7,$t7,$a0
/*  f000e04:	3c0e800a */ 	lui	$t6,%hi(g_Rooms)
/*  f000e08:	8dce4928 */ 	lw	$t6,%lo(g_Rooms)($t6)
/*  f000e0c:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000e10:	01e47823 */ 	subu	$t7,$t7,$a0
/*  f000e14:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f000e18:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f000e1c:	9719000a */ 	lhu	$t9,0xa($t8)
/*  f000e20:	3c09800a */ 	lui	$t1,%hi(var800a4cd8)
/*  f000e24:	44800000 */ 	mtc1	$zero,$f0
/*  f000e28:	8d294cd8 */ 	lw	$t1,%lo(var800a4cd8)($t1)
/*  f000e2c:	00194100 */ 	sll	$t0,$t9,0x4
/*  f000e30:	00055100 */ 	sll	$t2,$a1,0x4
/*  f000e34:	01194021 */ 	addu	$t0,$t0,$t9
/*  f000e38:	00084040 */ 	sll	$t0,$t0,0x1
/*  f000e3c:	01455021 */ 	addu	$t2,$t2,$a1
/*  f000e40:	000a5040 */ 	sll	$t2,$t2,0x1
/*  f000e44:	01091021 */ 	addu	$v0,$t0,$t1
/*  f000e48:	004a3821 */ 	addu	$a3,$v0,$t2
/*  f000e4c:	24020004 */ 	addiu	$v0,$zero,0x4
/*  f000e50:	00001825 */ 	or	$v1,$zero,$zero
/*  f000e54:	e4c00000 */ 	swc1	$f0,0x0($a2)
/*  f000e58:	e4c00004 */ 	swc1	$f0,0x4($a2)
/*  f000e5c:	e4c00008 */ 	swc1	$f0,0x8($a2)
/*  f000e60:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f000e64:	10620018 */ 	beq	$v1,$v0,.L0f000ec8
/*  f000e68:	84eb000a */ 	lh	$t3,0xa($a3)
.L0f000e6c:
/*  f000e6c:	448b9000 */ 	mtc1	$t3,$f18
/*  f000e70:	c4d00000 */ 	lwc1	$f16,0x0($a2)
/*  f000e74:	c4ce0004 */ 	lwc1	$f14,0x4($a2)
/*  f000e78:	468094a0 */ 	cvt.s.w	$f18,$f18
/*  f000e7c:	c4cc0008 */ 	lwc1	$f12,0x8($a2)
/*  f000e80:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f000e84:	24e70006 */ 	addiu	$a3,$a3,0x6
/*  f000e88:	46128480 */ 	add.s	$f18,$f16,$f18
/*  f000e8c:	e4d20000 */ 	swc1	$f18,0x0($a2)
/*  f000e90:	84ec0006 */ 	lh	$t4,0x6($a3)
/*  f000e94:	448c9000 */ 	mtc1	$t4,$f18
/*  f000e98:	00000000 */ 	nop
/*  f000e9c:	468094a0 */ 	cvt.s.w	$f18,$f18
/*  f000ea0:	46127480 */ 	add.s	$f18,$f14,$f18
/*  f000ea4:	e4d20004 */ 	swc1	$f18,0x4($a2)
/*  f000ea8:	84ed0008 */ 	lh	$t5,0x8($a3)
/*  f000eac:	448d9000 */ 	mtc1	$t5,$f18
/*  f000eb0:	00000000 */ 	nop
/*  f000eb4:	468094a0 */ 	cvt.s.w	$f18,$f18
/*  f000eb8:	46126480 */ 	add.s	$f18,$f12,$f18
/*  f000ebc:	e4d20008 */ 	swc1	$f18,0x8($a2)
/*  f000ec0:	1462ffea */ 	bne	$v1,$v0,.L0f000e6c
/*  f000ec4:	84eb000a */ 	lh	$t3,0xa($a3)
.L0f000ec8:
/*  f000ec8:	448b9000 */ 	mtc1	$t3,$f18
/*  f000ecc:	c4d00000 */ 	lwc1	$f16,0x0($a2)
/*  f000ed0:	c4ce0004 */ 	lwc1	$f14,0x4($a2)
/*  f000ed4:	468094a0 */ 	cvt.s.w	$f18,$f18
/*  f000ed8:	c4cc0008 */ 	lwc1	$f12,0x8($a2)
/*  f000edc:	24e70006 */ 	addiu	$a3,$a3,0x6
/*  f000ee0:	46128480 */ 	add.s	$f18,$f16,$f18
/*  f000ee4:	e4d20000 */ 	swc1	$f18,0x0($a2)
/*  f000ee8:	84ec0006 */ 	lh	$t4,0x6($a3)
/*  f000eec:	448c9000 */ 	mtc1	$t4,$f18
/*  f000ef0:	00000000 */ 	nop
/*  f000ef4:	468094a0 */ 	cvt.s.w	$f18,$f18
/*  f000ef8:	46127480 */ 	add.s	$f18,$f14,$f18
/*  f000efc:	e4d20004 */ 	swc1	$f18,0x4($a2)
/*  f000f00:	84ed0008 */ 	lh	$t5,0x8($a3)
/*  f000f04:	448d9000 */ 	mtc1	$t5,$f18
/*  f000f08:	00000000 */ 	nop
/*  f000f0c:	468094a0 */ 	cvt.s.w	$f18,$f18
/*  f000f10:	46126480 */ 	add.s	$f18,$f12,$f18
/*  f000f14:	e4d20008 */ 	swc1	$f18,0x8($a2)
/*  f000f18:	3c013e80 */ 	lui	$at,0x3e80
/*  f000f1c:	44810000 */ 	mtc1	$at,$f0
/*  f000f20:	c4c60000 */ 	lwc1	$f6,0x0($a2)
/*  f000f24:	c4ca0004 */ 	lwc1	$f10,0x4($a2)
/*  f000f28:	c4d20008 */ 	lwc1	$f18,0x8($a2)
/*  f000f2c:	46003102 */ 	mul.s	$f4,$f6,$f0
/*  f000f30:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f000f34:	46005202 */ 	mul.s	$f8,$f10,$f0
/*  f000f38:	00000000 */ 	nop
/*  f000f3c:	46009402 */ 	mul.s	$f16,$f18,$f0
/*  f000f40:	e4c40000 */ 	swc1	$f4,0x0($a2)
/*  f000f44:	e4c80004 */ 	swc1	$f8,0x4($a2)
/*  f000f48:	03e00008 */ 	jr	$ra
/*  f000f4c:	e4d00008 */ 	swc1	$f16,0x8($a2)
);

GLOBAL_ASM(
glabel func0f000f50
/*  f000f50:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f000f54:	10800009 */ 	beqz	$a0,.L0f000f7c
/*  f000f58:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f000f5c:	0fc0025f */ 	jal	func0f00097c
/*  f000f60:	00000000 */ 	nop
/*  f000f64:	944e0004 */ 	lhu	$t6,0x4($v0)
/*  f000f68:	000ec640 */ 	sll	$t8,$t6,0x19
/*  f000f6c:	07030004 */ 	bgezl	$t8,.L0f000f80
/*  f000f70:	00001825 */ 	or	$v1,$zero,$zero
/*  f000f74:	10000002 */ 	b	.L0f000f80
/*  f000f78:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f000f7c:
/*  f000f7c:	00001825 */ 	or	$v1,$zero,$zero
.L0f000f80:
/*  f000f80:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f000f84:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f000f88:	00601025 */ 	or	$v0,$v1,$zero
/*  f000f8c:	03e00008 */ 	jr	$ra
/*  f000f90:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f000f94
/*  f000f94:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f000f98:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f000f9c:	0fc0025f */ 	jal	func0f00097c
/*  f000fa0:	00000000 */ 	nop
/*  f000fa4:	94420004 */ 	lhu	$v0,0x4($v0)
/*  f000fa8:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f000fac:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f000fb0:	00027700 */ 	sll	$t6,$v0,0x1c
/*  f000fb4:	03e00008 */ 	jr	$ra
/*  f000fb8:	000e17c2 */ 	srl	$v0,$t6,0x1f
);

GLOBAL_ASM(
glabel func0f000fbc
/*  f000fbc:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f000fc0:	10800009 */ 	beqz	$a0,.L0f000fe8
/*  f000fc4:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f000fc8:	0fc0025f */ 	jal	func0f00097c
/*  f000fcc:	00000000 */ 	nop
/*  f000fd0:	944e0004 */ 	lhu	$t6,0x4($v0)
/*  f000fd4:	000ec680 */ 	sll	$t8,$t6,0x1a
/*  f000fd8:	07030004 */ 	bgezl	$t8,.L0f000fec
/*  f000fdc:	00001825 */ 	or	$v1,$zero,$zero
/*  f000fe0:	10000002 */ 	b	.L0f000fec
/*  f000fe4:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f000fe8:
/*  f000fe8:	00001825 */ 	or	$v1,$zero,$zero
.L0f000fec:
/*  f000fec:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f000ff0:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f000ff4:	00601025 */ 	or	$v0,$v1,$zero
/*  f000ff8:	03e00008 */ 	jr	$ra
/*  f000ffc:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f001000
/*  f001000:	000478c0 */ 	sll	$t7,$a0,0x3
/*  f001004:	01e47821 */ 	addu	$t7,$t7,$a0
/*  f001008:	3c0e800a */ 	lui	$t6,%hi(g_Rooms)
/*  f00100c:	8dce4928 */ 	lw	$t6,%lo(g_Rooms)($t6)
/*  f001010:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f001014:	01e47823 */ 	subu	$t7,$t7,$a0
/*  f001018:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f00101c:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f001020:	03e00008 */ 	jr	$ra
/*  f001024:	a7050052 */ 	sh	$a1,0x52($t8)
/*  f001028:	000478c0 */ 	sll	$t7,$a0,0x3
/*  f00102c:	01e47821 */ 	addu	$t7,$t7,$a0
/*  f001030:	3c0e800a */ 	lui	$t6,%hi(g_Rooms)
/*  f001034:	8dce4928 */ 	lw	$t6,%lo(g_Rooms)($t6)
/*  f001038:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f00103c:	01e47823 */ 	subu	$t7,$t7,$a0
/*  f001040:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f001044:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f001048:	9719000a */ 	lhu	$t9,0xa($t8)
/*  f00104c:	3c09800a */ 	lui	$t1,%hi(var800a4cd8)
/*  f001050:	8d294cd8 */ 	lw	$t1,%lo(var800a4cd8)($t1)
/*  f001054:	00194100 */ 	sll	$t0,$t9,0x4
/*  f001058:	00055100 */ 	sll	$t2,$a1,0x4
/*  f00105c:	01194021 */ 	addu	$t0,$t0,$t9
/*  f001060:	00084040 */ 	sll	$t0,$t0,0x1
/*  f001064:	01455021 */ 	addu	$t2,$t2,$a1
/*  f001068:	000a5040 */ 	sll	$t2,$t2,0x1
/*  f00106c:	01091021 */ 	addu	$v0,$t0,$t1
/*  f001070:	004a1021 */ 	addu	$v0,$v0,$t2
/*  f001074:	804b0007 */ 	lb	$t3,0x7($v0)
/*  f001078:	448b2000 */ 	mtc1	$t3,$f4
/*  f00107c:	00000000 */ 	nop
/*  f001080:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f001084:	e4c60000 */ 	swc1	$f6,0x0($a2)
/*  f001088:	804c0008 */ 	lb	$t4,0x8($v0)
/*  f00108c:	448c4000 */ 	mtc1	$t4,$f8
/*  f001090:	00000000 */ 	nop
/*  f001094:	468042a0 */ 	cvt.s.w	$f10,$f8
/*  f001098:	e4ca0004 */ 	swc1	$f10,0x4($a2)
/*  f00109c:	804d0009 */ 	lb	$t5,0x9($v0)
/*  f0010a0:	448d8000 */ 	mtc1	$t5,$f16
/*  f0010a4:	00000000 */ 	nop
/*  f0010a8:	468084a0 */ 	cvt.s.w	$f18,$f16
/*  f0010ac:	03e00008 */ 	jr	$ra
/*  f0010b0:	e4d20008 */ 	swc1	$f18,0x8($a2)
/*  f0010b4:	3c028006 */ 	lui	$v0,%hi(var80061424)
/*  f0010b8:	24421424 */ 	addiu	$v0,$v0,%lo(var80061424)
/*  f0010bc:	8c4e0000 */ 	lw	$t6,0x0($v0)
/*  f0010c0:	240f0001 */ 	addiu	$t7,$zero,0x1
/*  f0010c4:	11c00002 */ 	beqz	$t6,.L0f0010d0
/*  f0010c8:	00000000 */ 	nop
/*  f0010cc:	ac400000 */ 	sw	$zero,0x0($v0)
.L0f0010d0:
/*  f0010d0:	03e00008 */ 	jr	$ra
/*  f0010d4:	ac4f0000 */ 	sw	$t7,0x0($v0)
);

GLOBAL_ASM(
glabel func0f0010d8
/*  f0010d8:	3c013f80 */ 	lui	$at,0x3f80
/*  f0010dc:	44810000 */ 	mtc1	$at,$f0
/*  f0010e0:	44801000 */ 	mtc1	$zero,$f2
/*  f0010e4:	9098004e */ 	lbu	$t8,0x4e($a0)
/*  f0010e8:	94880000 */ 	lhu	$t0,0x0($a0)
/*  f0010ec:	240e00ff */ 	addiu	$t6,$zero,0xff
/*  f0010f0:	240f0080 */ 	addiu	$t7,$zero,0x80
/*  f0010f4:	3319ff0f */ 	andi	$t9,$t8,0xff0f
/*  f0010f8:	3109fc3f */ 	andi	$t1,$t0,0xfc3f
/*  f0010fc:	a0800048 */ 	sb	$zero,0x48($a0)
/*  f001100:	a08e0049 */ 	sb	$t6,0x49($a0)
/*  f001104:	a080004a */ 	sb	$zero,0x4a($a0)
/*  f001108:	a48f0050 */ 	sh	$t7,0x50($a0)
/*  f00110c:	a4800052 */ 	sh	$zero,0x52($a0)
/*  f001110:	a080004b */ 	sb	$zero,0x4b($a0)
/*  f001114:	a099004e */ 	sb	$t9,0x4e($a0)
/*  f001118:	a4890000 */ 	sh	$t1,0x0($a0)
/*  f00111c:	e480006c */ 	swc1	$f0,0x6c($a0)
/*  f001120:	e4800070 */ 	swc1	$f0,0x70($a0)
/*  f001124:	e480005c */ 	swc1	$f0,0x5c($a0)
/*  f001128:	e4820060 */ 	swc1	$f2,0x60($a0)
/*  f00112c:	e4820064 */ 	swc1	$f2,0x64($a0)
/*  f001130:	03e00008 */ 	jr	$ra
/*  f001134:	e4820068 */ 	swc1	$f2,0x68($a0)
);

GLOBAL_ASM(
glabel func0f001138
.late_rodata
glabel var7f1a7d8c
.word 0x3f169697
.text
/*  f001138:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f00113c:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f001140:	00808025 */ 	or	$s0,$a0,$zero
/*  f001144:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f001148:	afa50044 */ 	sw	$a1,0x44($sp)
/*  f00114c:	0fc59e7d */ 	jal	func0f1679f4
/*  f001150:	24040018 */ 	addiu	$a0,$zero,0x18
/*  f001154:	87a40046 */ 	lh	$a0,0x46($sp)
/*  f001158:	0fc00284 */ 	jal	func0f000a10
/*  f00115c:	afa2003c */ 	sw	$v0,0x3c($sp)
/*  f001160:	44822000 */ 	mtc1	$v0,$f4
/*  f001164:	8fa3003c */ 	lw	$v1,0x3c($sp)
/*  f001168:	2406004d */ 	addiu	$a2,$zero,0x4d
/*  f00116c:	04410005 */ 	bgez	$v0,.L0f001184
/*  f001170:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f001174:	3c014f80 */ 	lui	$at,0x4f80
/*  f001178:	44814000 */ 	mtc1	$at,$f8
/*  f00117c:	00000000 */ 	nop
/*  f001180:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f001184:
/*  f001184:	3c017f1a */ 	lui	$at,%hi(var7f1a7d8c)
/*  f001188:	c42a7d8c */ 	lwc1	$f10,%lo(var7f1a7d8c)($at)
/*  f00118c:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f001190:	02002825 */ 	or	$a1,$s0,$zero
/*  f001194:	460a3402 */ 	mul.s	$f16,$f6,$f10
/*  f001198:	3c18bc00 */ 	lui	$t8,0xbc00
/*  f00119c:	3c198000 */ 	lui	$t9,0x8000
/*  f0011a0:	3c080386 */ 	lui	$t0,0x386
/*  f0011a4:	3c0a0388 */ 	lui	$t2,0x388
/*  f0011a8:	3c0b0384 */ 	lui	$t3,0x384
/*  f0011ac:	3c014f00 */ 	lui	$at,0x4f00
/*  f0011b0:	444ef800 */ 	cfc1	$t6,$31
/*  f0011b4:	44c4f800 */ 	ctc1	$a0,$31
/*  f0011b8:	240f002e */ 	addiu	$t7,$zero,0x2e
/*  f0011bc:	354a0010 */ 	ori	$t2,$t2,0x10
/*  f0011c0:	460084a4 */ 	cvt.w.s	$f18,$f16
/*  f0011c4:	35080010 */ 	ori	$t0,$t0,0x10
/*  f0011c8:	37390040 */ 	ori	$t9,$t9,0x40
/*  f0011cc:	37180002 */ 	ori	$t8,$t8,0x2
/*  f0011d0:	4444f800 */ 	cfc1	$a0,$31
/*  f0011d4:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f0011d8:	24690008 */ 	addiu	$t1,$v1,0x8
/*  f0011dc:	30840078 */ 	andi	$a0,$a0,0x78
/*  f0011e0:	10800012 */ 	beqz	$a0,.L0f00122c
/*  f0011e4:	356b0010 */ 	ori	$t3,$t3,0x10
/*  f0011e8:	44819000 */ 	mtc1	$at,$f18
/*  f0011ec:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f0011f0:	46128481 */ 	sub.s	$f18,$f16,$f18
/*  f0011f4:	44c4f800 */ 	ctc1	$a0,$31
/*  f0011f8:	00000000 */ 	nop
/*  f0011fc:	460094a4 */ 	cvt.w.s	$f18,$f18
/*  f001200:	4444f800 */ 	cfc1	$a0,$31
/*  f001204:	00000000 */ 	nop
/*  f001208:	30840078 */ 	andi	$a0,$a0,0x78
/*  f00120c:	14800005 */ 	bnez	$a0,.L0f001224
/*  f001210:	00000000 */ 	nop
/*  f001214:	44049000 */ 	mfc1	$a0,$f18
/*  f001218:	3c018000 */ 	lui	$at,0x8000
/*  f00121c:	10000007 */ 	b	.L0f00123c
/*  f001220:	00812025 */ 	or	$a0,$a0,$at
.L0f001224:
/*  f001224:	10000005 */ 	b	.L0f00123c
/*  f001228:	2404ffff */ 	addiu	$a0,$zero,-1
.L0f00122c:
/*  f00122c:	44049000 */ 	mfc1	$a0,$f18
/*  f001230:	00000000 */ 	nop
/*  f001234:	0480fffb */ 	bltz	$a0,.L0f001224
/*  f001238:	00000000 */ 	nop
.L0f00123c:
/*  f00123c:	a0620008 */ 	sb	$v0,0x8($v1)
/*  f001240:	a0620009 */ 	sb	$v0,0x9($v1)
/*  f001244:	a062000a */ 	sb	$v0,0xa($v1)
/*  f001248:	a062000c */ 	sb	$v0,0xc($v1)
/*  f00124c:	a062000d */ 	sb	$v0,0xd($v1)
/*  f001250:	a062000e */ 	sb	$v0,0xe($v1)
/*  f001254:	a0640000 */ 	sb	$a0,0x0($v1)
/*  f001258:	a0640001 */ 	sb	$a0,0x1($v1)
/*  f00125c:	a0640002 */ 	sb	$a0,0x2($v1)
/*  f001260:	a0640004 */ 	sb	$a0,0x4($v1)
/*  f001264:	a0640005 */ 	sb	$a0,0x5($v1)
/*  f001268:	a0640006 */ 	sb	$a0,0x6($v1)
/*  f00126c:	a0660010 */ 	sb	$a2,0x10($v1)
/*  f001270:	a0660011 */ 	sb	$a2,0x11($v1)
/*  f001274:	a06f0012 */ 	sb	$t7,0x12($v1)
/*  f001278:	acb80000 */ 	sw	$t8,0x0($a1)
/*  f00127c:	acb90004 */ 	sw	$t9,0x4($a1)
/*  f001280:	02001025 */ 	or	$v0,$s0,$zero
/*  f001284:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f001288:	02002025 */ 	or	$a0,$s0,$zero
/*  f00128c:	ac480000 */ 	sw	$t0,0x0($v0)
/*  f001290:	ac490004 */ 	sw	$t1,0x4($v0)
/*  f001294:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f001298:	ac830004 */ 	sw	$v1,0x4($a0)
/*  f00129c:	ac8a0000 */ 	sw	$t2,0x0($a0)
/*  f0012a0:	02002825 */ 	or	$a1,$s0,$zero
/*  f0012a4:	44cef800 */ 	ctc1	$t6,$31
/*  f0012a8:	acab0000 */ 	sw	$t3,0x0($a1)
/*  f0012ac:	afa50028 */ 	sw	$a1,0x28($sp)
/*  f0012b0:	0fc2d5ea */ 	jal	currentPlayerGetUnk175c
/*  f0012b4:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f0012b8:	8fa50028 */ 	lw	$a1,0x28($sp)
/*  f0012bc:	3c0c0382 */ 	lui	$t4,0x382
/*  f0012c0:	358c0010 */ 	ori	$t4,$t4,0x10
/*  f0012c4:	02001825 */ 	or	$v1,$s0,$zero
/*  f0012c8:	aca20004 */ 	sw	$v0,0x4($a1)
/*  f0012cc:	ac6c0000 */ 	sw	$t4,0x0($v1)
/*  f0012d0:	afa30024 */ 	sw	$v1,0x24($sp)
/*  f0012d4:	0fc2d5ea */ 	jal	currentPlayerGetUnk175c
/*  f0012d8:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f0012dc:	8fa30024 */ 	lw	$v1,0x24($sp)
/*  f0012e0:	244d0010 */ 	addiu	$t5,$v0,0x10
/*  f0012e4:	02001025 */ 	or	$v0,$s0,$zero
/*  f0012e8:	ac6d0004 */ 	sw	$t5,0x4($v1)
/*  f0012ec:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f0012f0:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f0012f4:	27bd0040 */ 	addiu	$sp,$sp,0x40
/*  f0012f8:	03e00008 */ 	jr	$ra
/*  f0012fc:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f001300
/*  f001300:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f001304:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f001308:	00801025 */ 	or	$v0,$a0,$zero
/*  f00130c:	3c0ebc00 */ 	lui	$t6,0xbc00
/*  f001310:	3c0f8000 */ 	lui	$t7,0x8000
/*  f001314:	35ef0040 */ 	ori	$t7,$t7,0x40
/*  f001318:	35ce0002 */ 	ori	$t6,$t6,0x2
/*  f00131c:	24830008 */ 	addiu	$v1,$a0,0x8
/*  f001320:	ac4e0000 */ 	sw	$t6,0x0($v0)
/*  f001324:	ac4f0004 */ 	sw	$t7,0x4($v0)
/*  f001328:	3c180386 */ 	lui	$t8,0x386
/*  f00132c:	3c198006 */ 	lui	$t9,%hi(var80061468)
/*  f001330:	27391468 */ 	addiu	$t9,$t9,%lo(var80061468)
/*  f001334:	37180010 */ 	ori	$t8,$t8,0x10
/*  f001338:	24650008 */ 	addiu	$a1,$v1,0x8
/*  f00133c:	ac780000 */ 	sw	$t8,0x0($v1)
/*  f001340:	ac790004 */ 	sw	$t9,0x4($v1)
/*  f001344:	3c080388 */ 	lui	$t0,0x388
/*  f001348:	3c098006 */ 	lui	$t1,%hi(var80061460)
/*  f00134c:	25291460 */ 	addiu	$t1,$t1,%lo(var80061460)
/*  f001350:	35080010 */ 	ori	$t0,$t0,0x10
/*  f001354:	24a60008 */ 	addiu	$a2,$a1,0x8
/*  f001358:	3c0a0384 */ 	lui	$t2,0x384
/*  f00135c:	aca80000 */ 	sw	$t0,0x0($a1)
/*  f001360:	aca90004 */ 	sw	$t1,0x4($a1)
/*  f001364:	354a0010 */ 	ori	$t2,$t2,0x10
/*  f001368:	acca0000 */ 	sw	$t2,0x0($a2)
/*  f00136c:	24c40008 */ 	addiu	$a0,$a2,0x8
/*  f001370:	afa40030 */ 	sw	$a0,0x30($sp)
/*  f001374:	0fc2d5ea */ 	jal	currentPlayerGetUnk175c
/*  f001378:	afa60020 */ 	sw	$a2,0x20($sp)
/*  f00137c:	8fa30030 */ 	lw	$v1,0x30($sp)
/*  f001380:	8fa60020 */ 	lw	$a2,0x20($sp)
/*  f001384:	3c0b0382 */ 	lui	$t3,0x382
/*  f001388:	356b0010 */ 	ori	$t3,$t3,0x10
/*  f00138c:	acc20004 */ 	sw	$v0,0x4($a2)
/*  f001390:	ac6b0000 */ 	sw	$t3,0x0($v1)
/*  f001394:	24640008 */ 	addiu	$a0,$v1,0x8
/*  f001398:	afa40030 */ 	sw	$a0,0x30($sp)
/*  f00139c:	0fc2d5ea */ 	jal	currentPlayerGetUnk175c
/*  f0013a0:	afa3001c */ 	sw	$v1,0x1c($sp)
/*  f0013a4:	8fa3001c */ 	lw	$v1,0x1c($sp)
/*  f0013a8:	8fa40030 */ 	lw	$a0,0x30($sp)
/*  f0013ac:	244c0010 */ 	addiu	$t4,$v0,0x10
/*  f0013b0:	ac6c0004 */ 	sw	$t4,0x4($v1)
/*  f0013b4:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0013b8:	27bd0030 */ 	addiu	$sp,$sp,0x30
/*  f0013bc:	00801025 */ 	or	$v0,$a0,$zero
/*  f0013c0:	03e00008 */ 	jr	$ra
/*  f0013c4:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f0013c8
/*  f0013c8:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f0013cc:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f0013d0:	3c1f800a */ 	lui	$ra,%hi(g_Rooms)
/*  f0013d4:	000438c0 */ 	sll	$a3,$a0,0x3
/*  f0013d8:	27ff4928 */ 	addiu	$ra,$ra,%lo(g_Rooms)
/*  f0013dc:	00e43821 */ 	addu	$a3,$a3,$a0
/*  f0013e0:	8fee0000 */ 	lw	$t6,0x0($ra)
/*  f0013e4:	00073880 */ 	sll	$a3,$a3,0x2
/*  f0013e8:	00e43823 */ 	subu	$a3,$a3,$a0
/*  f0013ec:	00073880 */ 	sll	$a3,$a3,0x2
/*  f0013f0:	00ee4021 */ 	addu	$t0,$a3,$t6
/*  f0013f4:	25050048 */ 	addiu	$a1,$t0,0x48
/*  f0013f8:	25060049 */ 	addiu	$a2,$t0,0x49
/*  f0013fc:	afa8002c */ 	sw	$t0,0x2c($sp)
/*  f001400:	0fc56042 */ 	jal	func0f158108
/*  f001404:	afa7001c */ 	sw	$a3,0x1c($sp)
/*  f001408:	8fa8002c */ 	lw	$t0,0x2c($sp)
/*  f00140c:	8fa7001c */ 	lw	$a3,0x1c($sp)
/*  f001410:	3c1f800a */ 	lui	$ra,%hi(g_Rooms)
/*  f001414:	910f0048 */ 	lbu	$t7,0x48($t0)
/*  f001418:	81030008 */ 	lb	$v1,0x8($t0)
/*  f00141c:	27ff4928 */ 	addiu	$ra,$ra,%lo(g_Rooms)
/*  f001420:	05e10003 */ 	bgez	$t7,.L0f001430
/*  f001424:	000fc083 */ 	sra	$t8,$t7,0x2
/*  f001428:	25e10003 */ 	addiu	$at,$t7,0x3
/*  f00142c:	0001c083 */ 	sra	$t8,$at,0x2
.L0f001430:
/*  f001430:	1060002c */ 	beqz	$v1,.L0f0014e4
/*  f001434:	a1180048 */ 	sb	$t8,0x48($t0)
/*  f001438:	91190049 */ 	lbu	$t9,0x49($t0)
/*  f00143c:	330200ff */ 	andi	$v0,$t8,0xff
/*  f001440:	44834000 */ 	mtc1	$v1,$f8
/*  f001444:	03227023 */ 	subu	$t6,$t9,$v0
/*  f001448:	448e2000 */ 	mtc1	$t6,$f4
/*  f00144c:	468042a0 */ 	cvt.s.w	$f10,$f8
/*  f001450:	24180001 */ 	addiu	$t8,$zero,0x1
/*  f001454:	3c014f00 */ 	lui	$at,0x4f00
/*  f001458:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f00145c:	460a3403 */ 	div.s	$f16,$f6,$f10
/*  f001460:	444ff800 */ 	cfc1	$t7,$31
/*  f001464:	44d8f800 */ 	ctc1	$t8,$31
/*  f001468:	00000000 */ 	nop
/*  f00146c:	460084a4 */ 	cvt.w.s	$f18,$f16
/*  f001470:	4458f800 */ 	cfc1	$t8,$31
/*  f001474:	00000000 */ 	nop
/*  f001478:	33180078 */ 	andi	$t8,$t8,0x78
/*  f00147c:	53000013 */ 	beqzl	$t8,.L0f0014cc
/*  f001480:	44189000 */ 	mfc1	$t8,$f18
/*  f001484:	44819000 */ 	mtc1	$at,$f18
/*  f001488:	24180001 */ 	addiu	$t8,$zero,0x1
/*  f00148c:	46128481 */ 	sub.s	$f18,$f16,$f18
/*  f001490:	44d8f800 */ 	ctc1	$t8,$31
/*  f001494:	00000000 */ 	nop
/*  f001498:	460094a4 */ 	cvt.w.s	$f18,$f18
/*  f00149c:	4458f800 */ 	cfc1	$t8,$31
/*  f0014a0:	00000000 */ 	nop
/*  f0014a4:	33180078 */ 	andi	$t8,$t8,0x78
/*  f0014a8:	17000005 */ 	bnez	$t8,.L0f0014c0
/*  f0014ac:	00000000 */ 	nop
/*  f0014b0:	44189000 */ 	mfc1	$t8,$f18
/*  f0014b4:	3c018000 */ 	lui	$at,0x8000
/*  f0014b8:	10000007 */ 	b	.L0f0014d8
/*  f0014bc:	0301c025 */ 	or	$t8,$t8,$at
.L0f0014c0:
/*  f0014c0:	10000005 */ 	b	.L0f0014d8
/*  f0014c4:	2418ffff */ 	addiu	$t8,$zero,-1
/*  f0014c8:	44189000 */ 	mfc1	$t8,$f18
.L0f0014cc:
/*  f0014cc:	00000000 */ 	nop
/*  f0014d0:	0700fffb */ 	bltz	$t8,.L0f0014c0
/*  f0014d4:	00000000 */ 	nop
.L0f0014d8:
/*  f0014d8:	44cff800 */ 	ctc1	$t7,$31
/*  f0014dc:	10000003 */ 	b	.L0f0014ec
/*  f0014e0:	a118004a */ 	sb	$t8,0x4a($t0)
.L0f0014e4:
/*  f0014e4:	a100004a */ 	sb	$zero,0x4a($t0)
/*  f0014e8:	91020048 */ 	lbu	$v0,0x48($t0)
.L0f0014ec:
/*  f0014ec:	28410100 */ 	slti	$at,$v0,0x100
/*  f0014f0:	14200003 */ 	bnez	$at,.L0f001500
/*  f0014f4:	3c0c800a */ 	lui	$t4,%hi(g_Vars)
/*  f0014f8:	241900ff */ 	addiu	$t9,$zero,0xff
/*  f0014fc:	a1190048 */ 	sb	$t9,0x48($t0)
.L0f001500:
/*  f001500:	910e0049 */ 	lbu	$t6,0x49($t0)
/*  f001504:	240f00ff */ 	addiu	$t7,$zero,0xff
/*  f001508:	258c9fc0 */ 	addiu	$t4,$t4,%lo(g_Vars)
/*  f00150c:	29c10100 */ 	slti	$at,$t6,0x100
/*  f001510:	54200003 */ 	bnezl	$at,.L0f001520
/*  f001514:	81180008 */ 	lb	$t8,0x8($t0)
/*  f001518:	a10f0049 */ 	sb	$t7,0x49($t0)
/*  f00151c:	81180008 */ 	lb	$t8,0x8($t0)
.L0f001520:
/*  f001520:	91020048 */ 	lbu	$v0,0x48($t0)
/*  f001524:	240a0578 */ 	addiu	$t2,$zero,0x578
/*  f001528:	17000009 */ 	bnez	$t8,.L0f001550
/*  f00152c:	a102004c */ 	sb	$v0,0x4c($t0)
/*  f001530:	910e0049 */ 	lbu	$t6,0x49($t0)
/*  f001534:	24010005 */ 	addiu	$at,$zero,0x5
/*  f001538:	01c27823 */ 	subu	$t7,$t6,$v0
/*  f00153c:	000fc080 */ 	sll	$t8,$t7,0x2
/*  f001540:	0301001a */ 	div	$zero,$t8,$at
/*  f001544:	00007012 */ 	mflo	$t6
/*  f001548:	004e7821 */ 	addu	$t7,$v0,$t6
/*  f00154c:	a10f004c */ 	sb	$t7,0x4c($t0)
.L0f001550:
/*  f001550:	8d8304b4 */ 	lw	$v1,0x4b4($t4)
/*  f001554:	240d0022 */ 	addiu	$t5,$zero,0x22
/*  f001558:	24010030 */ 	addiu	$at,$zero,0x30
/*  f00155c:	106d0002 */ 	beq	$v1,$t5,.L0f001568
/*  f001560:	3c028008 */ 	lui	$v0,%hi(g_StageIndex)
/*  f001564:	14610004 */ 	bne	$v1,$at,.L0f001578
.L0f001568:
/*  f001568:	2401215c */ 	addiu	$at,$zero,0x215c
/*  f00156c:	14e10002 */ 	bne	$a3,$at,.L0f001578
/*  f001570:	24180002 */ 	addiu	$t8,$zero,0x2
/*  f001574:	a118004c */ 	sb	$t8,0x4c($t0)
.L0f001578:
/*  f001578:	8c42fc00 */ 	lw	$v0,%lo(g_StageIndex)($v0)
/*  f00157c:	2401001b */ 	addiu	$at,$zero,0x1b
/*  f001580:	24090001 */ 	addiu	$t1,$zero,0x1
/*  f001584:	10410007 */ 	beq	$v0,$at,.L0f0015a4
/*  f001588:	240621e8 */ 	addiu	$a2,$zero,0x21e8
/*  f00158c:	24010021 */ 	addiu	$at,$zero,0x21
/*  f001590:	10410004 */ 	beq	$v0,$at,.L0f0015a4
/*  f001594:	24010005 */ 	addiu	$at,$zero,0x5
/*  f001598:	50410003 */ 	beql	$v0,$at,.L0f0015a8
/*  f00159c:	24010834 */ 	addiu	$at,$zero,0x834
/*  f0015a0:	14400002 */ 	bnez	$v0,.L0f0015ac
.L0f0015a4:
/*  f0015a4:	24010834 */ 	addiu	$at,$zero,0x834
.L0f0015a8:
/*  f0015a8:	10e10017 */ 	beq	$a3,$at,.L0f001608
.L0f0015ac:
/*  f0015ac:	2401001c */ 	addiu	$at,$zero,0x1c
/*  f0015b0:	10410004 */ 	beq	$v0,$at,.L0f0015c4
/*  f0015b4:	2401000e */ 	addiu	$at,$zero,0xe
/*  f0015b8:	10410002 */ 	beq	$v0,$at,.L0f0015c4
/*  f0015bc:	24010023 */ 	addiu	$at,$zero,0x23
/*  f0015c0:	14410002 */ 	bne	$v0,$at,.L0f0015cc
.L0f0015c4:
/*  f0015c4:	2401008c */ 	addiu	$at,$zero,0x8c
/*  f0015c8:	10e1000f */ 	beq	$a3,$at,.L0f001608
.L0f0015cc:
/*  f0015cc:	24010016 */ 	addiu	$at,$zero,0x16
/*  f0015d0:	10410002 */ 	beq	$v0,$at,.L0f0015dc
/*  f0015d4:	24010002 */ 	addiu	$at,$zero,0x2
/*  f0015d8:	14410002 */ 	bne	$v0,$at,.L0f0015e4
.L0f0015dc:
/*  f0015dc:	24010118 */ 	addiu	$at,$zero,0x118
/*  f0015e0:	10e10009 */ 	beq	$a3,$at,.L0f001608
.L0f0015e4:
/*  f0015e4:	240b0026 */ 	addiu	$t3,$zero,0x26
/*  f0015e8:	15620002 */ 	bne	$t3,$v0,.L0f0015f4
/*  f0015ec:	2401008c */ 	addiu	$at,$zero,0x8c
/*  f0015f0:	10e10005 */ 	beq	$a3,$at,.L0f001608
.L0f0015f4:
/*  f0015f4:	24010020 */ 	addiu	$at,$zero,0x20
/*  f0015f8:	14410008 */ 	bne	$v0,$at,.L0f00161c
/*  f0015fc:	24013dcc */ 	addiu	$at,$zero,0x3dcc
/*  f001600:	54e10007 */ 	bnel	$a3,$at,.L0f001620
/*  f001604:	950f0000 */ 	lhu	$t7,0x0($t0)
.L0f001608:
/*  f001608:	95190000 */ 	lhu	$t9,0x0($t0)
/*  f00160c:	240b0026 */ 	addiu	$t3,$zero,0x26
/*  f001610:	372e0080 */ 	ori	$t6,$t9,0x80
/*  f001614:	10000004 */ 	b	.L0f001628
/*  f001618:	a50e0000 */ 	sh	$t6,0x0($t0)
.L0f00161c:
/*  f00161c:	950f0000 */ 	lhu	$t7,0x0($t0)
.L0f001620:
/*  f001620:	31f8ff7f */ 	andi	$t8,$t7,0xff7f
/*  f001624:	a5180000 */ 	sh	$t8,0x0($t0)
.L0f001628:
/*  f001628:	95190000 */ 	lhu	$t9,0x0($t0)
/*  f00162c:	00002025 */ 	or	$a0,$zero,$zero
/*  f001630:	2405002d */ 	addiu	$a1,$zero,0x2d
/*  f001634:	372e0100 */ 	ori	$t6,$t9,0x100
/*  f001638:	a50e0000 */ 	sh	$t6,0x0($t0)
/*  f00163c:	8fef0000 */ 	lw	$t7,0x0($ra)
/*  f001640:	01e7c021 */ 	addu	$t8,$t7,$a3
/*  f001644:	9719000a */ 	lhu	$t9,0xa($t8)
/*  f001648:	81180008 */ 	lb	$t8,0x8($t0)
/*  f00164c:	3c0f800a */ 	lui	$t7,%hi(var800a4cd8)
/*  f001650:	00197100 */ 	sll	$t6,$t9,0x4
/*  f001654:	8def4cd8 */ 	lw	$t7,%lo(var800a4cd8)($t7)
/*  f001658:	01d97021 */ 	addu	$t6,$t6,$t9
/*  f00165c:	000e7040 */ 	sll	$t6,$t6,0x1
/*  f001660:	1b000030 */ 	blez	$t8,.L0f001724
/*  f001664:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f001668:	8ff90000 */ 	lw	$t9,0x0($ra)
.L0f00166c:
/*  f00166c:	03277021 */ 	addu	$t6,$t9,$a3
/*  f001670:	90590005 */ 	lbu	$t9,0x5($v0)
/*  f001674:	91cf004a */ 	lbu	$t7,0x4a($t6)
/*  f001678:	37380080 */ 	ori	$t8,$t9,0x80
/*  f00167c:	a04f0004 */ 	sb	$t7,0x4($v0)
/*  f001680:	370f0040 */ 	ori	$t7,$t8,0x40
/*  f001684:	a0580005 */ 	sb	$t8,0x5($v0)
/*  f001688:	35f90020 */ 	ori	$t9,$t7,0x20
/*  f00168c:	a04f0005 */ 	sb	$t7,0x5($v0)
/*  f001690:	a0590005 */ 	sb	$t9,0x5($v0)
/*  f001694:	333800ef */ 	andi	$t8,$t9,0xef
/*  f001698:	a0580005 */ 	sb	$t8,0x5($v0)
/*  f00169c:	37190008 */ 	ori	$t9,$t8,0x8
/*  f0016a0:	a0590005 */ 	sb	$t9,0x5($v0)
/*  f0016a4:	8d8304b4 */ 	lw	$v1,0x4b4($t4)
/*  f0016a8:	106d000f */ 	beq	$v1,$t5,.L0f0016e8
/*  f0016ac:	00000000 */ 	nop
/*  f0016b0:	106b0007 */ 	beq	$v1,$t3,.L0f0016d0
/*  f0016b4:	00000000 */ 	nop
/*  f0016b8:	10650005 */ 	beq	$v1,$a1,.L0f0016d0
/*  f0016bc:	24010030 */ 	addiu	$at,$zero,0x30
/*  f0016c0:	10610009 */ 	beq	$v1,$at,.L0f0016e8
/*  f0016c4:	00000000 */ 	nop
/*  f0016c8:	10000011 */ 	b	.L0f001710
/*  f0016cc:	810e0008 */ 	lb	$t6,0x8($t0)
.L0f0016d0:
/*  f0016d0:	54ea000f */ 	bnel	$a3,$t2,.L0f001710
/*  f0016d4:	810e0008 */ 	lb	$t6,0x8($t0)
/*  f0016d8:	904e0005 */ 	lbu	$t6,0x5($v0)
/*  f0016dc:	31cffff7 */ 	andi	$t7,$t6,0xfff7
/*  f0016e0:	1000000a */ 	b	.L0f00170c
/*  f0016e4:	a04f0005 */ 	sb	$t7,0x5($v0)
.L0f0016e8:
/*  f0016e8:	54e60009 */ 	bnel	$a3,$a2,.L0f001710
/*  f0016ec:	810e0008 */ 	lb	$t6,0x8($t0)
/*  f0016f0:	50800004 */ 	beqzl	$a0,.L0f001704
/*  f0016f4:	90580005 */ 	lbu	$t8,0x5($v0)
/*  f0016f8:	54890005 */ 	bnel	$a0,$t1,.L0f001710
/*  f0016fc:	810e0008 */ 	lb	$t6,0x8($t0)
/*  f001700:	90580005 */ 	lbu	$t8,0x5($v0)
.L0f001704:
/*  f001704:	3319fff7 */ 	andi	$t9,$t8,0xfff7
/*  f001708:	a0590005 */ 	sb	$t9,0x5($v0)
.L0f00170c:
/*  f00170c:	810e0008 */ 	lb	$t6,0x8($t0)
.L0f001710:
/*  f001710:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f001714:	24420022 */ 	addiu	$v0,$v0,0x22
/*  f001718:	008e082a */ 	slt	$at,$a0,$t6
/*  f00171c:	5420ffd3 */ 	bnezl	$at,.L0f00166c
/*  f001720:	8ff90000 */ 	lw	$t9,0x0($ra)
.L0f001724:
/*  f001724:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f001728:	27bd0030 */ 	addiu	$sp,$sp,0x30
/*  f00172c:	03e00008 */ 	jr	$ra
/*  f001730:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f001734
/*  f001734:	27bdff48 */ 	addiu	$sp,$sp,-184
/*  f001738:	afbf006c */ 	sw	$ra,0x6c($sp)
/*  f00173c:	afbe0068 */ 	sw	$s8,0x68($sp)
/*  f001740:	afb70064 */ 	sw	$s7,0x64($sp)
/*  f001744:	afb60060 */ 	sw	$s6,0x60($sp)
/*  f001748:	afb5005c */ 	sw	$s5,0x5c($sp)
/*  f00174c:	afb40058 */ 	sw	$s4,0x58($sp)
/*  f001750:	afb30054 */ 	sw	$s3,0x54($sp)
/*  f001754:	afb20050 */ 	sw	$s2,0x50($sp)
/*  f001758:	afb1004c */ 	sw	$s1,0x4c($sp)
/*  f00175c:	10c0000f */ 	beqz	$a2,.L0f00179c
/*  f001760:	afb00048 */ 	sw	$s0,0x48($sp)
/*  f001764:	3c1e800a */ 	lui	$s8,%hi(g_Rooms)
/*  f001768:	0006b8c0 */ 	sll	$s7,$a2,0x3
/*  f00176c:	02e6b821 */ 	addu	$s7,$s7,$a2
/*  f001770:	27de4928 */ 	addiu	$s8,$s8,%lo(g_Rooms)
/*  f001774:	8fce0000 */ 	lw	$t6,0x0($s8)
/*  f001778:	0017b880 */ 	sll	$s7,$s7,0x2
/*  f00177c:	02e6b823 */ 	subu	$s7,$s7,$a2
/*  f001780:	0017b880 */ 	sll	$s7,$s7,0x2
/*  f001784:	01d77821 */ 	addu	$t7,$t6,$s7
/*  f001788:	81f80008 */ 	lb	$t8,0x8($t7)
/*  f00178c:	00064080 */ 	sll	$t0,$a2,0x2
/*  f001790:	01064021 */ 	addu	$t0,$t0,$a2
/*  f001794:	17000003 */ 	bnez	$t8,.L0f0017a4
/*  f001798:	3c19800a */ 	lui	$t9,%hi(var800a4cc4)
.L0f00179c:
/*  f00179c:	100000a5 */ 	b	.L0f001a34
/*  f0017a0:	00001025 */ 	or	$v0,$zero,$zero
.L0f0017a4:
/*  f0017a4:	8f394cc4 */ 	lw	$t9,%lo(var800a4cc4)($t9)
/*  f0017a8:	00084080 */ 	sll	$t0,$t0,0x2
/*  f0017ac:	c4840000 */ 	lwc1	$f4,0x0($a0)
/*  f0017b0:	03281021 */ 	addu	$v0,$t9,$t0
/*  f0017b4:	c4460004 */ 	lwc1	$f6,0x4($v0)
/*  f0017b8:	46062201 */ 	sub.s	$f8,$f4,$f6
/*  f0017bc:	e7a800a4 */ 	swc1	$f8,0xa4($sp)
/*  f0017c0:	c4500008 */ 	lwc1	$f16,0x8($v0)
/*  f0017c4:	c48a0004 */ 	lwc1	$f10,0x4($a0)
/*  f0017c8:	46105481 */ 	sub.s	$f18,$f10,$f16
/*  f0017cc:	e7b200a8 */ 	swc1	$f18,0xa8($sp)
/*  f0017d0:	c446000c */ 	lwc1	$f6,0xc($v0)
/*  f0017d4:	c4840008 */ 	lwc1	$f4,0x8($a0)
/*  f0017d8:	46062201 */ 	sub.s	$f8,$f4,$f6
/*  f0017dc:	e7a800ac */ 	swc1	$f8,0xac($sp)
/*  f0017e0:	c4500004 */ 	lwc1	$f16,0x4($v0)
/*  f0017e4:	c4aa0000 */ 	lwc1	$f10,0x0($a1)
/*  f0017e8:	46105481 */ 	sub.s	$f18,$f10,$f16
/*  f0017ec:	e7b20098 */ 	swc1	$f18,0x98($sp)
/*  f0017f0:	c4460008 */ 	lwc1	$f6,0x8($v0)
/*  f0017f4:	c4a40004 */ 	lwc1	$f4,0x4($a1)
/*  f0017f8:	46062201 */ 	sub.s	$f8,$f4,$f6
/*  f0017fc:	c7a600a4 */ 	lwc1	$f6,0xa4($sp)
/*  f001800:	c7a40098 */ 	lwc1	$f4,0x98($sp)
/*  f001804:	e7a8009c */ 	swc1	$f8,0x9c($sp)
/*  f001808:	c450000c */ 	lwc1	$f16,0xc($v0)
/*  f00180c:	c4aa0008 */ 	lwc1	$f10,0x8($a1)
/*  f001810:	46062201 */ 	sub.s	$f8,$f4,$f6
/*  f001814:	c7a600ac */ 	lwc1	$f6,0xac($sp)
/*  f001818:	afa600c0 */ 	sw	$a2,0xc0($sp)
/*  f00181c:	46105481 */ 	sub.s	$f18,$f10,$f16
/*  f001820:	c7b000a8 */ 	lwc1	$f16,0xa8($sp)
/*  f001824:	c7aa009c */ 	lwc1	$f10,0x9c($sp)
/*  f001828:	e7a8008c */ 	swc1	$f8,0x8c($sp)
/*  f00182c:	e7b200a0 */ 	swc1	$f18,0xa0($sp)
/*  f001830:	46105481 */ 	sub.s	$f18,$f10,$f16
/*  f001834:	c7a400a0 */ 	lwc1	$f4,0xa0($sp)
/*  f001838:	46084402 */ 	mul.s	$f16,$f8,$f8
/*  f00183c:	46062281 */ 	sub.s	$f10,$f4,$f6
/*  f001840:	46129102 */ 	mul.s	$f4,$f18,$f18
/*  f001844:	e7b20090 */ 	swc1	$f18,0x90($sp)
/*  f001848:	460a5202 */ 	mul.s	$f8,$f10,$f10
/*  f00184c:	e7aa0094 */ 	swc1	$f10,0x94($sp)
/*  f001850:	46048180 */ 	add.s	$f6,$f16,$f4
/*  f001854:	0c012974 */ 	jal	sqrtf
/*  f001858:	46083300 */ 	add.s	$f12,$f6,$f8
/*  f00185c:	3c014000 */ 	lui	$at,0x4000
/*  f001860:	44819000 */ 	mtc1	$at,$f18
/*  f001864:	c7b0008c */ 	lwc1	$f16,0x8c($sp)
/*  f001868:	c7aa0090 */ 	lwc1	$f10,0x90($sp)
/*  f00186c:	46009083 */ 	div.s	$f2,$f18,$f0
/*  f001870:	c7a80094 */ 	lwc1	$f8,0x94($sp)
/*  f001874:	8fc90000 */ 	lw	$t1,0x0($s8)
/*  f001878:	3c0c800a */ 	lui	$t4,%hi(var800a4cd8)
/*  f00187c:	8d8c4cd8 */ 	lw	$t4,%lo(var800a4cd8)($t4)
/*  f001880:	01371021 */ 	addu	$v0,$t1,$s7
/*  f001884:	00009825 */ 	or	$s3,$zero,$zero
/*  f001888:	27b6008c */ 	addiu	$s6,$sp,0x8c
/*  f00188c:	27b50098 */ 	addiu	$s5,$sp,0x98
/*  f001890:	27b400a4 */ 	addiu	$s4,$sp,0xa4
/*  f001894:	46028102 */ 	mul.s	$f4,$f16,$f2
/*  f001898:	c7b00098 */ 	lwc1	$f16,0x98($sp)
/*  f00189c:	46025182 */ 	mul.s	$f6,$f10,$f2
/*  f0018a0:	00000000 */ 	nop
/*  f0018a4:	46024482 */ 	mul.s	$f18,$f8,$f2
/*  f0018a8:	e7a4008c */ 	swc1	$f4,0x8c($sp)
/*  f0018ac:	46048280 */ 	add.s	$f10,$f16,$f4
/*  f0018b0:	c7a8009c */ 	lwc1	$f8,0x9c($sp)
/*  f0018b4:	c7a400a0 */ 	lwc1	$f4,0xa0($sp)
/*  f0018b8:	e7a60090 */ 	swc1	$f6,0x90($sp)
/*  f0018bc:	e7aa0098 */ 	swc1	$f10,0x98($sp)
/*  f0018c0:	46064400 */ 	add.s	$f16,$f8,$f6
/*  f0018c4:	e7b20094 */ 	swc1	$f18,0x94($sp)
/*  f0018c8:	46122280 */ 	add.s	$f10,$f4,$f18
/*  f0018cc:	e7b0009c */ 	swc1	$f16,0x9c($sp)
/*  f0018d0:	e7aa00a0 */ 	swc1	$f10,0xa0($sp)
/*  f0018d4:	944a000a */ 	lhu	$t2,0xa($v0)
/*  f0018d8:	804d0008 */ 	lb	$t5,0x8($v0)
/*  f0018dc:	000a5900 */ 	sll	$t3,$t2,0x4
/*  f0018e0:	016a5821 */ 	addu	$t3,$t3,$t2
/*  f0018e4:	000b5840 */ 	sll	$t3,$t3,0x1
/*  f0018e8:	19a00051 */ 	blez	$t5,.L0f001a30
/*  f0018ec:	016c8021 */ 	addu	$s0,$t3,$t4
/*  f0018f0:	96020004 */ 	lhu	$v0,0x4($s0)
.L0f0018f4:
/*  f0018f4:	00027e40 */ 	sll	$t7,$v0,0x19
/*  f0018f8:	05e10045 */ 	bgez	$t7,.L0f001a10
/*  f0018fc:	0002cf00 */ 	sll	$t9,$v0,0x1c
/*  f001900:	07210043 */ 	bgez	$t9,.L0f001a10
/*  f001904:	2604000a */ 	addiu	$a0,$s0,0xa
/*  f001908:	26110010 */ 	addiu	$s1,$s0,0x10
/*  f00190c:	2612001c */ 	addiu	$s2,$s0,0x1c
/*  f001910:	02403025 */ 	or	$a2,$s2,$zero
/*  f001914:	02202825 */ 	or	$a1,$s1,$zero
/*  f001918:	00003825 */ 	or	$a3,$zero,$zero
/*  f00191c:	afb40010 */ 	sw	$s4,0x10($sp)
/*  f001920:	afb50014 */ 	sw	$s5,0x14($sp)
/*  f001924:	afb60018 */ 	sw	$s6,0x18($sp)
/*  f001928:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f00192c:	0c00bd24 */ 	jal	func0002f490
/*  f001930:	afa00020 */ 	sw	$zero,0x20($sp)
/*  f001934:	1440000c */ 	bnez	$v0,.L0f001968
/*  f001938:	02202025 */ 	or	$a0,$s1,$zero
/*  f00193c:	26050016 */ 	addiu	$a1,$s0,0x16
/*  f001940:	02403025 */ 	or	$a2,$s2,$zero
/*  f001944:	00003825 */ 	or	$a3,$zero,$zero
/*  f001948:	afb40010 */ 	sw	$s4,0x10($sp)
/*  f00194c:	afb50014 */ 	sw	$s5,0x14($sp)
/*  f001950:	afb60018 */ 	sw	$s6,0x18($sp)
/*  f001954:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f001958:	0c00bd24 */ 	jal	func0002f490
/*  f00195c:	afa00020 */ 	sw	$zero,0x20($sp)
/*  f001960:	5040002c */ 	beqzl	$v0,.L0f001a14
/*  f001964:	8fcf0000 */ 	lw	$t7,0x0($s8)
.L0f001968:
/*  f001968:	8608000a */ 	lh	$t0,0xa($s0)
/*  f00196c:	8fa400c0 */ 	lw	$a0,0xc0($sp)
/*  f001970:	02602825 */ 	or	$a1,$s3,$zero
/*  f001974:	44884000 */ 	mtc1	$t0,$f8
/*  f001978:	00000000 */ 	nop
/*  f00197c:	468041a0 */ 	cvt.s.w	$f6,$f8
/*  f001980:	e7a6007c */ 	swc1	$f6,0x7c($sp)
/*  f001984:	8609000c */ 	lh	$t1,0xc($s0)
/*  f001988:	44898000 */ 	mtc1	$t1,$f16
/*  f00198c:	00000000 */ 	nop
/*  f001990:	46808120 */ 	cvt.s.w	$f4,$f16
/*  f001994:	e7a40080 */ 	swc1	$f4,0x80($sp)
/*  f001998:	860a000e */ 	lh	$t2,0xe($s0)
/*  f00199c:	448a9000 */ 	mtc1	$t2,$f18
/*  f0019a0:	00000000 */ 	nop
/*  f0019a4:	468092a0 */ 	cvt.s.w	$f10,$f18
/*  f0019a8:	0fc006de */ 	jal	func0f001b78
/*  f0019ac:	e7aa0084 */ 	swc1	$f10,0x84($sp)
/*  f0019b0:	3c01bf80 */ 	lui	$at,0xbf80
/*  f0019b4:	44810000 */ 	mtc1	$at,$f0
/*  f0019b8:	8fae00c0 */ 	lw	$t6,0xc0($sp)
/*  f0019bc:	240bffff */ 	addiu	$t3,$zero,-1
/*  f0019c0:	240c0400 */ 	addiu	$t4,$zero,0x400
/*  f0019c4:	27ad007c */ 	addiu	$t5,$sp,0x7c
/*  f0019c8:	afad0020 */ 	sw	$t5,0x20($sp)
/*  f0019cc:	afac0014 */ 	sw	$t4,0x14($sp)
/*  f0019d0:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f0019d4:	00002025 */ 	or	$a0,$zero,$zero
/*  f0019d8:	00002825 */ 	or	$a1,$zero,$zero
/*  f0019dc:	24068077 */ 	addiu	$a2,$zero,-32649
/*  f0019e0:	2407ffff */ 	addiu	$a3,$zero,-1
/*  f0019e4:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f0019e8:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f0019ec:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0019f0:	afae002c */ 	sw	$t6,0x2c($sp)
/*  f0019f4:	e7a00024 */ 	swc1	$f0,0x24($sp)
/*  f0019f8:	e7a00030 */ 	swc1	$f0,0x30($sp)
/*  f0019fc:	e7a00034 */ 	swc1	$f0,0x34($sp)
/*  f001a00:	0fc24e7e */ 	jal	func0f0939f8
/*  f001a04:	e7a00038 */ 	swc1	$f0,0x38($sp)
/*  f001a08:	1000000a */ 	b	.L0f001a34
/*  f001a0c:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f001a10:
/*  f001a10:	8fcf0000 */ 	lw	$t7,0x0($s8)
.L0f001a14:
/*  f001a14:	26730001 */ 	addiu	$s3,$s3,0x1
/*  f001a18:	26100022 */ 	addiu	$s0,$s0,0x22
/*  f001a1c:	01f7c021 */ 	addu	$t8,$t7,$s7
/*  f001a20:	83190008 */ 	lb	$t9,0x8($t8)
/*  f001a24:	0279082a */ 	slt	$at,$s3,$t9
/*  f001a28:	5420ffb2 */ 	bnezl	$at,.L0f0018f4
/*  f001a2c:	96020004 */ 	lhu	$v0,0x4($s0)
.L0f001a30:
/*  f001a30:	00001025 */ 	or	$v0,$zero,$zero
.L0f001a34:
/*  f001a34:	8fbf006c */ 	lw	$ra,0x6c($sp)
/*  f001a38:	8fb00048 */ 	lw	$s0,0x48($sp)
/*  f001a3c:	8fb1004c */ 	lw	$s1,0x4c($sp)
/*  f001a40:	8fb20050 */ 	lw	$s2,0x50($sp)
/*  f001a44:	8fb30054 */ 	lw	$s3,0x54($sp)
/*  f001a48:	8fb40058 */ 	lw	$s4,0x58($sp)
/*  f001a4c:	8fb5005c */ 	lw	$s5,0x5c($sp)
/*  f001a50:	8fb60060 */ 	lw	$s6,0x60($sp)
/*  f001a54:	8fb70064 */ 	lw	$s7,0x64($sp)
/*  f001a58:	8fbe0068 */ 	lw	$s8,0x68($sp)
/*  f001a5c:	03e00008 */ 	jr	$ra
/*  f001a60:	27bd00b8 */ 	addiu	$sp,$sp,0xb8
);

GLOBAL_ASM(
glabel func0f001a64
/*  f001a64:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f001a68:	afb40024 */ 	sw	$s4,0x24($sp)
/*  f001a6c:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f001a70:	3c14800a */ 	lui	$s4,%hi(g_Rooms)
/*  f001a74:	000498c0 */ 	sll	$s3,$a0,0x3
/*  f001a78:	26944928 */ 	addiu	$s4,$s4,%lo(g_Rooms)
/*  f001a7c:	02649821 */ 	addu	$s3,$s3,$a0
/*  f001a80:	8e8e0000 */ 	lw	$t6,0x0($s4)
/*  f001a84:	00139880 */ 	sll	$s3,$s3,0x2
/*  f001a88:	02649823 */ 	subu	$s3,$s3,$a0
/*  f001a8c:	00139880 */ 	sll	$s3,$s3,0x2
/*  f001a90:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f001a94:	afb50028 */ 	sw	$s5,0x28($sp)
/*  f001a98:	afb2001c */ 	sw	$s2,0x1c($sp)
/*  f001a9c:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f001aa0:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f001aa4:	01d31021 */ 	addu	$v0,$t6,$s3
/*  f001aa8:	944f000a */ 	lhu	$t7,0xa($v0)
/*  f001aac:	80430008 */ 	lb	$v1,0x8($v0)
/*  f001ab0:	3c19800a */ 	lui	$t9,%hi(var800a4cd8)
/*  f001ab4:	000fc100 */ 	sll	$t8,$t7,0x4
/*  f001ab8:	8f394cd8 */ 	lw	$t9,%lo(var800a4cd8)($t9)
/*  f001abc:	030fc021 */ 	addu	$t8,$t8,$t7
/*  f001ac0:	0018c040 */ 	sll	$t8,$t8,0x1
/*  f001ac4:	00a0a825 */ 	or	$s5,$a1,$zero
/*  f001ac8:	1060001b */ 	beqz	$v1,.L0f001b38
/*  f001acc:	03198021 */ 	addu	$s0,$t8,$t9
/*  f001ad0:	18600019 */ 	blez	$v1,.L0f001b38
/*  f001ad4:	00008825 */ 	or	$s1,$zero,$zero
/*  f001ad8:	24120064 */ 	addiu	$s2,$zero,0x64
.L0f001adc:
/*  f001adc:	0c004b70 */ 	jal	random
/*  f001ae0:	00000000 */ 	nop
/*  f001ae4:	0052001b */ 	divu	$zero,$v0,$s2
/*  f001ae8:	00004010 */ 	mfhi	$t0
/*  f001aec:	0115082b */ 	sltu	$at,$t0,$s5
/*  f001af0:	16400002 */ 	bnez	$s2,.L0f001afc
/*  f001af4:	00000000 */ 	nop
/*  f001af8:	0007000d */ 	break	0x7
.L0f001afc:
/*  f001afc:	50200007 */ 	beqzl	$at,.L0f001b1c
/*  f001b00:	8e8d0000 */ 	lw	$t5,0x0($s4)
/*  f001b04:	92090005 */ 	lbu	$t1,0x5($s0)
/*  f001b08:	312bffbf */ 	andi	$t3,$t1,0xffbf
/*  f001b0c:	a20b0005 */ 	sb	$t3,0x5($s0)
/*  f001b10:	316c00df */ 	andi	$t4,$t3,0xdf
/*  f001b14:	a20c0005 */ 	sb	$t4,0x5($s0)
/*  f001b18:	8e8d0000 */ 	lw	$t5,0x0($s4)
.L0f001b1c:
/*  f001b1c:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f001b20:	26100022 */ 	addiu	$s0,$s0,0x22
/*  f001b24:	01b31021 */ 	addu	$v0,$t5,$s3
/*  f001b28:	804e0008 */ 	lb	$t6,0x8($v0)
/*  f001b2c:	022e082a */ 	slt	$at,$s1,$t6
/*  f001b30:	1420ffea */ 	bnez	$at,.L0f001adc
/*  f001b34:	00000000 */ 	nop
.L0f001b38:
/*  f001b38:	240f0032 */ 	addiu	$t7,$zero,0x32
/*  f001b3c:	a04f004c */ 	sb	$t7,0x4c($v0)
/*  f001b40:	8e980000 */ 	lw	$t8,0x0($s4)
/*  f001b44:	03131021 */ 	addu	$v0,$t8,$s3
/*  f001b48:	94590000 */ 	lhu	$t9,0x0($v0)
/*  f001b4c:	37280100 */ 	ori	$t0,$t9,0x100
/*  f001b50:	a4480000 */ 	sh	$t0,0x0($v0)
/*  f001b54:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f001b58:	8fb50028 */ 	lw	$s5,0x28($sp)
/*  f001b5c:	8fb40024 */ 	lw	$s4,0x24($sp)
/*  f001b60:	8fb30020 */ 	lw	$s3,0x20($sp)
/*  f001b64:	8fb2001c */ 	lw	$s2,0x1c($sp)
/*  f001b68:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f001b6c:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f001b70:	03e00008 */ 	jr	$ra
/*  f001b74:	27bd0030 */ 	addiu	$sp,$sp,0x30
);

GLOBAL_ASM(
glabel func0f001b78
/*  f001b78:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f001b7c:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f001b80:	0fc0025f */ 	jal	func0f00097c
/*  f001b84:	afa40018 */ 	sw	$a0,0x18($sp)
/*  f001b88:	904e0005 */ 	lbu	$t6,0x5($v0)
/*  f001b8c:	3c08800a */ 	lui	$t0,%hi(g_Rooms)
/*  f001b90:	31d8ffbf */ 	andi	$t8,$t6,0xffbf
/*  f001b94:	a0580005 */ 	sb	$t8,0x5($v0)
/*  f001b98:	331900df */ 	andi	$t9,$t8,0xdf
/*  f001b9c:	a0590005 */ 	sb	$t9,0x5($v0)
/*  f001ba0:	8fa90018 */ 	lw	$t1,0x18($sp)
/*  f001ba4:	8d084928 */ 	lw	$t0,%lo(g_Rooms)($t0)
/*  f001ba8:	000950c0 */ 	sll	$t2,$t1,0x3
/*  f001bac:	01495021 */ 	addu	$t2,$t2,$t1
/*  f001bb0:	000a5080 */ 	sll	$t2,$t2,0x2
/*  f001bb4:	01495023 */ 	subu	$t2,$t2,$t1
/*  f001bb8:	000a5080 */ 	sll	$t2,$t2,0x2
/*  f001bbc:	010a1821 */ 	addu	$v1,$t0,$t2
/*  f001bc0:	946b0000 */ 	lhu	$t3,0x0($v1)
/*  f001bc4:	356c0100 */ 	ori	$t4,$t3,0x100
/*  f001bc8:	a46c0000 */ 	sh	$t4,0x0($v1)
/*  f001bcc:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f001bd0:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f001bd4:	03e00008 */ 	jr	$ra
/*  f001bd8:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f001bdc
/*  f001bdc:	3c0e8006 */ 	lui	$t6,%hi(var80061444)
/*  f001be0:	8dce1444 */ 	lw	$t6,%lo(var80061444)($t6)
/*  f001be4:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f001be8:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f001bec:	51c00004 */ 	beqzl	$t6,.L0f001c00
/*  f001bf0:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f001bf4:	0fc0131b */ 	jal	func0f004c6c
/*  f001bf8:	00000000 */ 	nop
/*  f001bfc:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f001c00:
/*  f001c00:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f001c04:	03e00008 */ 	jr	$ra
/*  f001c08:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f001c0c
/*  f001c0c:	27bdff90 */ 	addiu	$sp,$sp,-112
/*  f001c10:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f001c14:	afbe0038 */ 	sw	$s8,0x38($sp)
/*  f001c18:	afb70034 */ 	sw	$s7,0x34($sp)
/*  f001c1c:	afb60030 */ 	sw	$s6,0x30($sp)
/*  f001c20:	afb5002c */ 	sw	$s5,0x2c($sp)
/*  f001c24:	afb40028 */ 	sw	$s4,0x28($sp)
/*  f001c28:	afb30024 */ 	sw	$s3,0x24($sp)
/*  f001c2c:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f001c30:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f001c34:	0c012144 */ 	jal	osGetCount
/*  f001c38:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f001c3c:	3c018006 */ 	lui	$at,%hi(var80061440)
/*  f001c40:	0fc008ee */ 	jal	func0f0023b8
/*  f001c44:	ac201440 */ 	sw	$zero,%lo(var80061440)($at)
/*  f001c48:	3c17800a */ 	lui	$s7,%hi(g_Portals)
/*  f001c4c:	26f74cc8 */ 	addiu	$s7,$s7,%lo(g_Portals)
/*  f001c50:	8ee30000 */ 	lw	$v1,0x0($s7)
/*  f001c54:	3c10800a */ 	lui	$s0,%hi(var8009cadc)
/*  f001c58:	2610cadc */ 	addiu	$s0,$s0,%lo(var8009cadc)
/*  f001c5c:	000070c0 */ 	sll	$t6,$zero,0x3
/*  f001c60:	ae000000 */ 	sw	$zero,0x0($s0)
/*  f001c64:	006e7821 */ 	addu	$t7,$v1,$t6
/*  f001c68:	95f80000 */ 	lhu	$t8,0x0($t7)
/*  f001c6c:	00001025 */ 	or	$v0,$zero,$zero
/*  f001c70:	3c04800a */ 	lui	$a0,%hi(g_Vars+0x2bc)
/*  f001c74:	13000008 */ 	beqz	$t8,.L0f001c98
/*  f001c78:	24590001 */ 	addiu	$t9,$v0,0x1
.L0f001c7c:
/*  f001c7c:	001940c0 */ 	sll	$t0,$t9,0x3
/*  f001c80:	00684821 */ 	addu	$t1,$v1,$t0
/*  f001c84:	ae190000 */ 	sw	$t9,0x0($s0)
/*  f001c88:	952a0000 */ 	lhu	$t2,0x0($t1)
/*  f001c8c:	03201025 */ 	or	$v0,$t9,$zero
/*  f001c90:	5540fffa */ 	bnezl	$t2,.L0f001c7c
/*  f001c94:	24590001 */ 	addiu	$t9,$v0,0x1
.L0f001c98:
/*  f001c98:	50400125 */ 	beqzl	$v0,.L0f002130
/*  f001c9c:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f001ca0:	8c84a27c */ 	lw	$a0,%lo(g_Vars+0x2bc)($a0)
/*  f001ca4:	00045880 */ 	sll	$t3,$a0,0x2
/*  f001ca8:	0fc5db69 */ 	jal	align16
/*  f001cac:	01602025 */ 	or	$a0,$t3,$zero
/*  f001cb0:	8e040000 */ 	lw	$a0,0x0($s0)
/*  f001cb4:	00409825 */ 	or	$s3,$v0,$zero
/*  f001cb8:	00046080 */ 	sll	$t4,$a0,0x2
/*  f001cbc:	0fc5db69 */ 	jal	align16
/*  f001cc0:	01802025 */ 	or	$a0,$t4,$zero
/*  f001cc4:	3c04800a */ 	lui	$a0,%hi(g_Vars+0x2bc)
/*  f001cc8:	8c84a27c */ 	lw	$a0,%lo(g_Vars+0x2bc)($a0)
/*  f001ccc:	0040a025 */ 	or	$s4,$v0,$zero
/*  f001cd0:	00046880 */ 	sll	$t5,$a0,0x2
/*  f001cd4:	0fc5db69 */ 	jal	align16
/*  f001cd8:	01a02025 */ 	or	$a0,$t5,$zero
/*  f001cdc:	3c16800a */ 	lui	$s6,%hi(var8009cae0)
/*  f001ce0:	26d6cae0 */ 	addiu	$s6,$s6,%lo(var8009cae0)
/*  f001ce4:	8ec30000 */ 	lw	$v1,0x0($s6)
/*  f001ce8:	0040f025 */ 	or	$s8,$v0,$zero
/*  f001cec:	00630019 */ 	multu	$v1,$v1
/*  f001cf0:	00002012 */ 	mflo	$a0
/*  f001cf4:	0fc5db69 */ 	jal	align16
/*  f001cf8:	00000000 */ 	nop
/*  f001cfc:	3c04800a */ 	lui	$a0,%hi(g_Vars+0x2bc)
/*  f001d00:	8c84a27c */ 	lw	$a0,%lo(g_Vars+0x2bc)($a0)
/*  f001d04:	00409025 */ 	or	$s2,$v0,$zero
/*  f001d08:	000470c0 */ 	sll	$t6,$a0,0x3
/*  f001d0c:	0fc5db69 */ 	jal	align16
/*  f001d10:	01c02025 */ 	or	$a0,$t6,$zero
/*  f001d14:	0c0048b8 */ 	jal	func000122e0
/*  f001d18:	afa20068 */ 	sw	$v0,0x68($sp)
/*  f001d1c:	0fc5d820 */ 	jal	func0f176080
/*  f001d20:	00000000 */ 	nop
/*  f001d24:	00531821 */ 	addu	$v1,$v0,$s3
/*  f001d28:	3c118006 */ 	lui	$s1,%hi(var80061438)
/*  f001d2c:	3c018006 */ 	lui	$at,%hi(var80061434)
/*  f001d30:	00743021 */ 	addu	$a2,$v1,$s4
/*  f001d34:	26311438 */ 	addiu	$s1,$s1,%lo(var80061438)
/*  f001d38:	ac221434 */ 	sw	$v0,%lo(var80061434)($at)
/*  f001d3c:	00de3821 */ 	addu	$a3,$a2,$s8
/*  f001d40:	ae230000 */ 	sw	$v1,0x0($s1)
/*  f001d44:	afa60044 */ 	sw	$a2,0x44($sp)
/*  f001d48:	afa70048 */ 	sw	$a3,0x48($sp)
/*  f001d4c:	00f2a821 */ 	addu	$s5,$a3,$s2
/*  f001d50:	8fa40068 */ 	lw	$a0,0x68($sp)
/*  f001d54:	0c0048f2 */ 	jal	malloc
/*  f001d58:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f001d5c:	8e0f0000 */ 	lw	$t7,0x0($s0)
/*  f001d60:	3c148006 */ 	lui	$s4,%hi(var80061420)
/*  f001d64:	26941420 */ 	addiu	$s4,$s4,%lo(var80061420)
/*  f001d68:	ae820000 */ 	sw	$v0,0x0($s4)
/*  f001d6c:	19e00019 */ 	blez	$t7,.L0f001dd4
/*  f001d70:	00009825 */ 	or	$s3,$zero,$zero
/*  f001d74:	00009025 */ 	or	$s2,$zero,$zero
/*  f001d78:	00001825 */ 	or	$v1,$zero,$zero
/*  f001d7c:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f001d80:
/*  f001d80:	8ef80000 */ 	lw	$t8,0x0($s7)
/*  f001d84:	0312c821 */ 	addu	$t9,$t8,$s2
/*  f001d88:	93220006 */ 	lbu	$v0,0x6($t9)
/*  f001d8c:	30480001 */ 	andi	$t0,$v0,0x1
/*  f001d90:	11000007 */ 	beqz	$t0,.L0f001db0
/*  f001d94:	30490004 */ 	andi	$t1,$v0,0x4
/*  f001d98:	55200006 */ 	bnezl	$t1,.L0f001db4
/*  f001d9c:	8e2c0000 */ 	lw	$t4,0x0($s1)
/*  f001da0:	8e2a0000 */ 	lw	$t2,0x0($s1)
/*  f001da4:	01435821 */ 	addu	$t3,$t2,$v1
/*  f001da8:	10000004 */ 	b	.L0f001dbc
/*  f001dac:	ad600000 */ 	sw	$zero,0x0($t3)
.L0f001db0:
/*  f001db0:	8e2c0000 */ 	lw	$t4,0x0($s1)
.L0f001db4:
/*  f001db4:	01836821 */ 	addu	$t5,$t4,$v1
/*  f001db8:	ada40000 */ 	sw	$a0,0x0($t5)
.L0f001dbc:
/*  f001dbc:	8e0e0000 */ 	lw	$t6,0x0($s0)
/*  f001dc0:	26730001 */ 	addiu	$s3,$s3,0x1
/*  f001dc4:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f001dc8:	026e082a */ 	slt	$at,$s3,$t6
/*  f001dcc:	1420ffec */ 	bnez	$at,.L0f001d80
/*  f001dd0:	24630004 */ 	addiu	$v1,$v1,0x4
.L0f001dd4:
/*  f001dd4:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x4b4)
/*  f001dd8:	8c42a474 */ 	lw	$v0,%lo(g_Vars+0x4b4)($v0)
/*  f001ddc:	24010022 */ 	addiu	$at,$zero,0x22
/*  f001de0:	10410003 */ 	beq	$v0,$at,.L0f001df0
/*  f001de4:	24010030 */ 	addiu	$at,$zero,0x30
/*  f001de8:	14410005 */ 	bne	$v0,$at,.L0f001e00
/*  f001dec:	00000000 */ 	nop
.L0f001df0:
/*  f001df0:	8e2f0000 */ 	lw	$t7,0x0($s1)
/*  f001df4:	ade00188 */ 	sw	$zero,0x188($t7)
/*  f001df8:	8e380000 */ 	lw	$t8,0x0($s1)
/*  f001dfc:	af000190 */ 	sw	$zero,0x190($t8)
.L0f001e00:
/*  f001e00:	0fc00857 */ 	jal	func0f00215c
/*  f001e04:	8fa40048 */ 	lw	$a0,0x48($sp)
/*  f001e08:	3c05800a */ 	lui	$a1,%hi(g_Vars+0x2bc)
/*  f001e0c:	8ca5a27c */ 	lw	$a1,%lo(g_Vars+0x2bc)($a1)
/*  f001e10:	24130001 */ 	addiu	$s3,$zero,0x1
/*  f001e14:	0000f025 */ 	or	$s8,$zero,$zero
/*  f001e18:	28a10002 */ 	slti	$at,$a1,0x2
/*  f001e1c:	14200016 */ 	bnez	$at,.L0f001e78
/*  f001e20:	00000000 */ 	nop
/*  f001e24:	8fb10044 */ 	lw	$s1,0x44($sp)
/*  f001e28:	26310004 */ 	addiu	$s1,$s1,0x4
.L0f001e2c:
/*  f001e2c:	8ed90000 */ 	lw	$t9,0x0($s6)
/*  f001e30:	8fa80048 */ 	lw	$t0,0x48($sp)
/*  f001e34:	24070001 */ 	addiu	$a3,$zero,0x1
/*  f001e38:	02790019 */ 	multu	$s3,$t9
/*  f001e3c:	00001012 */ 	mflo	$v0
/*  f001e40:	00553021 */ 	addu	$a2,$v0,$s5
/*  f001e44:	0fc5de95 */ 	jal	func0f177a54
/*  f001e48:	00482021 */ 	addu	$a0,$v0,$t0
/*  f001e4c:	ae220000 */ 	sw	$v0,0x0($s1)
/*  f001e50:	0fc5db62 */ 	jal	align4
/*  f001e54:	00402025 */ 	or	$a0,$v0,$zero
/*  f001e58:	3c05800a */ 	lui	$a1,%hi(g_Vars+0x2bc)
/*  f001e5c:	8ca5a27c */ 	lw	$a1,%lo(g_Vars+0x2bc)($a1)
/*  f001e60:	26730001 */ 	addiu	$s3,$s3,0x1
/*  f001e64:	26310004 */ 	addiu	$s1,$s1,0x4
/*  f001e68:	0265082a */ 	slt	$at,$s3,$a1
/*  f001e6c:	1420ffef */ 	bnez	$at,.L0f001e2c
/*  f001e70:	03c2f021 */ 	addu	$s8,$s8,$v0
/*  f001e74:	24130001 */ 	addiu	$s3,$zero,0x1
.L0f001e78:
/*  f001e78:	0fc5db69 */ 	jal	align16
/*  f001e7c:	03c02025 */ 	or	$a0,$s8,$zero
/*  f001e80:	00402025 */ 	or	$a0,$v0,$zero
/*  f001e84:	0c0048f2 */ 	jal	malloc
/*  f001e88:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f001e8c:	03c02025 */ 	or	$a0,$s8,$zero
/*  f001e90:	0040b825 */ 	or	$s7,$v0,$zero
/*  f001e94:	0fc5db69 */ 	jal	align16
/*  f001e98:	0000f025 */ 	or	$s8,$zero,$zero
/*  f001e9c:	3c05800a */ 	lui	$a1,%hi(g_Vars+0x2bc)
/*  f001ea0:	8fa90068 */ 	lw	$t1,0x68($sp)
/*  f001ea4:	8ca5a27c */ 	lw	$a1,%lo(g_Vars+0x2bc)($a1)
/*  f001ea8:	00001825 */ 	or	$v1,$zero,$zero
/*  f001eac:	01225021 */ 	addu	$t2,$t1,$v0
/*  f001eb0:	28a10002 */ 	slti	$at,$a1,0x2
/*  f001eb4:	14200029 */ 	bnez	$at,.L0f001f5c
/*  f001eb8:	afaa0068 */ 	sw	$t2,0x68($sp)
/*  f001ebc:	8fb10044 */ 	lw	$s1,0x44($sp)
/*  f001ec0:	24120008 */ 	addiu	$s2,$zero,0x8
/*  f001ec4:	26310004 */ 	addiu	$s1,$s1,0x4
.L0f001ec8:
/*  f001ec8:	8e240000 */ 	lw	$a0,0x0($s1)
/*  f001ecc:	afa30054 */ 	sw	$v1,0x54($sp)
/*  f001ed0:	0fc5db62 */ 	jal	align4
/*  f001ed4:	00008025 */ 	or	$s0,$zero,$zero
/*  f001ed8:	8e8b0000 */ 	lw	$t3,0x0($s4)
/*  f001edc:	8fa30054 */ 	lw	$v1,0x54($sp)
/*  f001ee0:	3c05800a */ 	lui	$a1,%hi(g_Vars+0x2bc)
/*  f001ee4:	01726021 */ 	addu	$t4,$t3,$s2
/*  f001ee8:	ad970000 */ 	sw	$s7,0x0($t4)
/*  f001eec:	8e2d0000 */ 	lw	$t5,0x0($s1)
/*  f001ef0:	02e2b821 */ 	addu	$s7,$s7,$v0
/*  f001ef4:	00621821 */ 	addu	$v1,$v1,$v0
/*  f001ef8:	19a00011 */ 	blez	$t5,.L0f001f40
/*  f001efc:	00000000 */ 	nop
/*  f001f00:	8ece0000 */ 	lw	$t6,0x0($s6)
.L0f001f04:
/*  f001f04:	8e890000 */ 	lw	$t1,0x0($s4)
/*  f001f08:	026e0019 */ 	multu	$s3,$t6
/*  f001f0c:	01325021 */ 	addu	$t2,$t1,$s2
/*  f001f10:	8d4b0000 */ 	lw	$t3,0x0($t2)
/*  f001f14:	01706021 */ 	addu	$t4,$t3,$s0
/*  f001f18:	00007812 */ 	mflo	$t7
/*  f001f1c:	01f5c021 */ 	addu	$t8,$t7,$s5
/*  f001f20:	0310c821 */ 	addu	$t9,$t8,$s0
/*  f001f24:	93280000 */ 	lbu	$t0,0x0($t9)
/*  f001f28:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f001f2c:	a1880000 */ 	sb	$t0,0x0($t4)
/*  f001f30:	8e2d0000 */ 	lw	$t5,0x0($s1)
/*  f001f34:	020d082a */ 	slt	$at,$s0,$t5
/*  f001f38:	5420fff2 */ 	bnezl	$at,.L0f001f04
/*  f001f3c:	8ece0000 */ 	lw	$t6,0x0($s6)
.L0f001f40:
/*  f001f40:	8ca5a27c */ 	lw	$a1,%lo(g_Vars+0x2bc)($a1)
/*  f001f44:	26730001 */ 	addiu	$s3,$s3,0x1
/*  f001f48:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f001f4c:	0265082a */ 	slt	$at,$s3,$a1
/*  f001f50:	1420ffdd */ 	bnez	$at,.L0f001ec8
/*  f001f54:	26310004 */ 	addiu	$s1,$s1,0x4
/*  f001f58:	24130001 */ 	addiu	$s3,$zero,0x1
.L0f001f5c:
/*  f001f5c:	28a10002 */ 	slti	$at,$a1,0x2
/*  f001f60:	14200017 */ 	bnez	$at,.L0f001fc0
/*  f001f64:	8fb10044 */ 	lw	$s1,0x44($sp)
/*  f001f68:	8fb00048 */ 	lw	$s0,0x48($sp)
/*  f001f6c:	26310004 */ 	addiu	$s1,$s1,0x4
/*  f001f70:	26100001 */ 	addiu	$s0,$s0,0x1
.L0f001f74:
/*  f001f74:	8ec70000 */ 	lw	$a3,0x0($s6)
/*  f001f78:	02002025 */ 	or	$a0,$s0,$zero
/*  f001f7c:	02670019 */ 	multu	$s3,$a3
/*  f001f80:	00007012 */ 	mflo	$t6
/*  f001f84:	01d53021 */ 	addu	$a2,$t6,$s5
/*  f001f88:	0fc5de95 */ 	jal	func0f177a54
/*  f001f8c:	00000000 */ 	nop
/*  f001f90:	ae220000 */ 	sw	$v0,0x0($s1)
/*  f001f94:	0fc5db62 */ 	jal	align4
/*  f001f98:	00402025 */ 	or	$a0,$v0,$zero
/*  f001f9c:	3c05800a */ 	lui	$a1,%hi(g_Vars+0x2bc)
/*  f001fa0:	8ca5a27c */ 	lw	$a1,%lo(g_Vars+0x2bc)($a1)
/*  f001fa4:	26730001 */ 	addiu	$s3,$s3,0x1
/*  f001fa8:	26310004 */ 	addiu	$s1,$s1,0x4
/*  f001fac:	0265082a */ 	slt	$at,$s3,$a1
/*  f001fb0:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f001fb4:	1420ffef */ 	bnez	$at,.L0f001f74
/*  f001fb8:	03c2f021 */ 	addu	$s8,$s8,$v0
/*  f001fbc:	24130001 */ 	addiu	$s3,$zero,0x1
.L0f001fc0:
/*  f001fc0:	0fc5db69 */ 	jal	align16
/*  f001fc4:	03c02025 */ 	or	$a0,$s8,$zero
/*  f001fc8:	00402025 */ 	or	$a0,$v0,$zero
/*  f001fcc:	0c0048f2 */ 	jal	malloc
/*  f001fd0:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f001fd4:	0040b825 */ 	or	$s7,$v0,$zero
/*  f001fd8:	0fc5db69 */ 	jal	align16
/*  f001fdc:	03c02025 */ 	or	$a0,$s8,$zero
/*  f001fe0:	3c05800a */ 	lui	$a1,%hi(g_Vars+0x2bc)
/*  f001fe4:	8ca5a27c */ 	lw	$a1,%lo(g_Vars+0x2bc)($a1)
/*  f001fe8:	8fb10044 */ 	lw	$s1,0x44($sp)
/*  f001fec:	28a10002 */ 	slti	$at,$a1,0x2
/*  f001ff0:	14200024 */ 	bnez	$at,.L0f002084
/*  f001ff4:	26310004 */ 	addiu	$s1,$s1,0x4
/*  f001ff8:	24120008 */ 	addiu	$s2,$zero,0x8
.L0f001ffc:
/*  f001ffc:	8e8f0000 */ 	lw	$t7,0x0($s4)
/*  f002000:	00008025 */ 	or	$s0,$zero,$zero
/*  f002004:	01f2c021 */ 	addu	$t8,$t7,$s2
/*  f002008:	af170004 */ 	sw	$s7,0x4($t8)
/*  f00200c:	0fc5db62 */ 	jal	align4
/*  f002010:	8e240000 */ 	lw	$a0,0x0($s1)
/*  f002014:	8e390000 */ 	lw	$t9,0x0($s1)
/*  f002018:	3c05800a */ 	lui	$a1,%hi(g_Vars+0x2bc)
/*  f00201c:	02e2b821 */ 	addu	$s7,$s7,$v0
/*  f002020:	1b200011 */ 	blez	$t9,.L0f002068
/*  f002024:	00000000 */ 	nop
/*  f002028:	8ec90000 */ 	lw	$t1,0x0($s6)
.L0f00202c:
/*  f00202c:	8e8d0000 */ 	lw	$t5,0x0($s4)
/*  f002030:	02690019 */ 	multu	$s3,$t1
/*  f002034:	01b27021 */ 	addu	$t6,$t5,$s2
/*  f002038:	8dcf0004 */ 	lw	$t7,0x4($t6)
/*  f00203c:	01f0c021 */ 	addu	$t8,$t7,$s0
/*  f002040:	00005012 */ 	mflo	$t2
/*  f002044:	01555821 */ 	addu	$t3,$t2,$s5
/*  f002048:	01704021 */ 	addu	$t0,$t3,$s0
/*  f00204c:	910c0000 */ 	lbu	$t4,0x0($t0)
/*  f002050:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f002054:	a30c0000 */ 	sb	$t4,0x0($t8)
/*  f002058:	8e390000 */ 	lw	$t9,0x0($s1)
/*  f00205c:	0219082a */ 	slt	$at,$s0,$t9
/*  f002060:	5420fff2 */ 	bnezl	$at,.L0f00202c
/*  f002064:	8ec90000 */ 	lw	$t1,0x0($s6)
.L0f002068:
/*  f002068:	8ca5a27c */ 	lw	$a1,%lo(g_Vars+0x2bc)($a1)
/*  f00206c:	26730001 */ 	addiu	$s3,$s3,0x1
/*  f002070:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f002074:	0265082a */ 	slt	$at,$s3,$a1
/*  f002078:	1420ffe0 */ 	bnez	$at,.L0f001ffc
/*  f00207c:	26310004 */ 	addiu	$s1,$s1,0x4
/*  f002080:	24130001 */ 	addiu	$s3,$zero,0x1
.L0f002084:
/*  f002084:	28a10002 */ 	slti	$at,$a1,0x2
/*  f002088:	14200010 */ 	bnez	$at,.L0f0020cc
/*  f00208c:	2402008c */ 	addiu	$v0,$zero,0x8c
/*  f002090:	3c10800a */ 	lui	$s0,%hi(g_Rooms)
/*  f002094:	26104928 */ 	addiu	$s0,$s0,%lo(g_Rooms)
/*  f002098:	8e090000 */ 	lw	$t1,0x0($s0)
.L0f00209c:
/*  f00209c:	3c08800a */ 	lui	$t0,%hi(g_Vars+0x2bc)
/*  f0020a0:	26730001 */ 	addiu	$s3,$s3,0x1
/*  f0020a4:	01221821 */ 	addu	$v1,$t1,$v0
/*  f0020a8:	946a0000 */ 	lhu	$t2,0x0($v1)
/*  f0020ac:	2442008c */ 	addiu	$v0,$v0,140
/*  f0020b0:	354b0004 */ 	ori	$t3,$t2,0x4
/*  f0020b4:	a46b0000 */ 	sh	$t3,0x0($v1)
/*  f0020b8:	8d08a27c */ 	lw	$t0,%lo(g_Vars+0x2bc)($t0)
/*  f0020bc:	0268082a */ 	slt	$at,$s3,$t0
/*  f0020c0:	5420fff6 */ 	bnezl	$at,.L0f00209c
/*  f0020c4:	8e090000 */ 	lw	$t1,0x0($s0)
/*  f0020c8:	24130001 */ 	addiu	$s3,$zero,0x1
.L0f0020cc:
/*  f0020cc:	3c10800a */ 	lui	$s0,%hi(g_Rooms)
/*  f0020d0:	0fc00cec */ 	jal	func0f0033b0
/*  f0020d4:	26104928 */ 	addiu	$s0,$s0,%lo(g_Rooms)
/*  f0020d8:	3c0d800a */ 	lui	$t5,%hi(g_Vars+0x2bc)
/*  f0020dc:	8dada27c */ 	lw	$t5,%lo(g_Vars+0x2bc)($t5)
/*  f0020e0:	2402008c */ 	addiu	$v0,$zero,0x8c
/*  f0020e4:	2404fffb */ 	addiu	$a0,$zero,-5
/*  f0020e8:	29a10002 */ 	slti	$at,$t5,0x2
/*  f0020ec:	1420000d */ 	bnez	$at,.L0f002124
/*  f0020f0:	00000000 */ 	nop
/*  f0020f4:	8e0e0000 */ 	lw	$t6,0x0($s0)
.L0f0020f8:
/*  f0020f8:	3c18800a */ 	lui	$t8,%hi(g_Vars+0x2bc)
/*  f0020fc:	26730001 */ 	addiu	$s3,$s3,0x1
/*  f002100:	01c21821 */ 	addu	$v1,$t6,$v0
/*  f002104:	946f0000 */ 	lhu	$t7,0x0($v1)
/*  f002108:	2442008c */ 	addiu	$v0,$v0,0x8c
/*  f00210c:	01e46024 */ 	and	$t4,$t7,$a0
/*  f002110:	a46c0000 */ 	sh	$t4,0x0($v1)
/*  f002114:	8f18a27c */ 	lw	$t8,%lo(g_Vars+0x2bc)($t8)
/*  f002118:	0278082a */ 	slt	$at,$s3,$t8
/*  f00211c:	5420fff6 */ 	bnezl	$at,.L0f0020f8
/*  f002120:	8e0e0000 */ 	lw	$t6,0x0($s0)
.L0f002124:
/*  f002124:	0c012144 */ 	jal	osGetCount
/*  f002128:	00000000 */ 	nop
/*  f00212c:	8fbf003c */ 	lw	$ra,0x3c($sp)
.L0f002130:
/*  f002130:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f002134:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f002138:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f00213c:	8fb30024 */ 	lw	$s3,0x24($sp)
/*  f002140:	8fb40028 */ 	lw	$s4,0x28($sp)
/*  f002144:	8fb5002c */ 	lw	$s5,0x2c($sp)
/*  f002148:	8fb60030 */ 	lw	$s6,0x30($sp)
/*  f00214c:	8fb70034 */ 	lw	$s7,0x34($sp)
/*  f002150:	8fbe0038 */ 	lw	$s8,0x38($sp)
/*  f002154:	03e00008 */ 	jr	$ra
/*  f002158:	27bd0070 */ 	addiu	$sp,$sp,0x70
);

GLOBAL_ASM(
glabel func0f00215c
/*  f00215c:	3c0e7f00 */ 	lui	$t6,%hi(func0f002334)
/*  f002160:	25ce2334 */ 	addiu	$t6,$t6,%lo(func0f002334)
/*  f002164:	3c01800a */ 	lui	$at,%hi(var8009cae8)
/*  f002168:	ac2ecae8 */ 	sw	$t6,%lo(var8009cae8)($at)
/*  f00216c:	3c014248 */ 	lui	$at,0x4248
/*  f002170:	44812000 */ 	mtc1	$at,$f4
/*  f002174:	3c018006 */ 	lui	$at,0x8006
/*  f002178:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f00217c:	e424143c */ 	swc1	$f4,0x143c($at)
/*  f002180:	3c01800a */ 	lui	$at,%hi(var8009cae4)
/*  f002184:	240f0014 */ 	addiu	$t7,$zero,0x14
/*  f002188:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f00218c:	ac2fcae4 */ 	sw	$t7,%lo(var8009cae4)($at)
/*  f002190:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f002194:	3c018006 */ 	lui	$at,%hi(var80061440)
/*  f002198:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f00219c:	ac201440 */ 	sw	$zero,%lo(var80061440)($at)
/*  f0021a0:	8e1802bc */ 	lw	$t8,0x2bc($s0)
/*  f0021a4:	afb40024 */ 	sw	$s4,0x24($sp)
/*  f0021a8:	afb2001c */ 	sw	$s2,0x1c($sp)
/*  f0021ac:	2b010002 */ 	slti	$at,$t8,0x2
/*  f0021b0:	0080a025 */ 	or	$s4,$a0,$zero
/*  f0021b4:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f0021b8:	afb50028 */ 	sw	$s5,0x28($sp)
/*  f0021bc:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f0021c0:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f0021c4:	14200052 */ 	bnez	$at,.L0f002310
/*  f0021c8:	24120001 */ 	addiu	$s2,$zero,0x1
/*  f0021cc:	3c15800a */ 	lui	$s5,%hi(var8009cae0)
/*  f0021d0:	3c118006 */ 	lui	$s1,%hi(var80061434)
/*  f0021d4:	26311434 */ 	addiu	$s1,$s1,%lo(var80061434)
/*  f0021d8:	26b5cae0 */ 	addiu	$s5,$s5,%lo(var8009cae0)
/*  f0021dc:	8eb90000 */ 	lw	$t9,0x0($s5)
.L0f0021e0:
/*  f0021e0:	02402025 */ 	or	$a0,$s2,$zero
/*  f0021e4:	02590019 */ 	multu	$s2,$t9
/*  f0021e8:	00004012 */ 	mflo	$t0
/*  f0021ec:	01149821 */ 	addu	$s3,$t0,$s4
/*  f0021f0:	0fc00967 */ 	jal	func0f00259c
/*  f0021f4:	00000000 */ 	nop
/*  f0021f8:	00001825 */ 	or	$v1,$zero,$zero
/*  f0021fc:	02602025 */ 	or	$a0,$s3,$zero
.L0f002200:
/*  f002200:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f002204:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f002208:	1860fffd */ 	blez	$v1,.L0f002200
/*  f00220c:	a080ffff */ 	sb	$zero,-0x1($a0)
/*  f002210:	8e0202bc */ 	lw	$v0,0x2bc($s0)
/*  f002214:	24030001 */ 	addiu	$v1,$zero,0x1
/*  f002218:	26640001 */ 	addiu	$a0,$s3,0x1
/*  f00221c:	28410002 */ 	slti	$at,$v0,0x2
/*  f002220:	14200037 */ 	bnez	$at,.L0f002300
/*  f002224:	00123880 */ 	sll	$a3,$s2,0x2
/*  f002228:	24050004 */ 	addiu	$a1,$zero,0x4
.L0f00222c:
/*  f00222c:	8e220000 */ 	lw	$v0,0x0($s1)
/*  f002230:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f002234:	240d0001 */ 	addiu	$t5,$zero,0x1
/*  f002238:	00474821 */ 	addu	$t1,$v0,$a3
/*  f00223c:	00453021 */ 	addu	$a2,$v0,$a1
/*  f002240:	c4c00000 */ 	lwc1	$f0,0x0($a2)
/*  f002244:	c5220000 */ 	lwc1	$f2,0x0($t1)
/*  f002248:	3c014f00 */ 	lui	$at,0x4f00
/*  f00224c:	4600103c */ 	c.lt.s	$f2,$f0
/*  f002250:	00000000 */ 	nop
/*  f002254:	45020006 */ 	bc1fl	.L0f002270
/*  f002258:	444cf800 */ 	cfc1	$t4,$31
/*  f00225c:	e4c20000 */ 	swc1	$f2,0x0($a2)
/*  f002260:	8e2a0000 */ 	lw	$t2,0x0($s1)
/*  f002264:	01455821 */ 	addu	$t3,$t2,$a1
/*  f002268:	c5600000 */ 	lwc1	$f0,0x0($t3)
/*  f00226c:	444cf800 */ 	cfc1	$t4,$31
.L0f002270:
/*  f002270:	44cdf800 */ 	ctc1	$t5,$31
/*  f002274:	00000000 */ 	nop
/*  f002278:	460001a4 */ 	cvt.w.s	$f6,$f0
/*  f00227c:	444df800 */ 	cfc1	$t5,$31
/*  f002280:	00000000 */ 	nop
/*  f002284:	31ad0078 */ 	andi	$t5,$t5,0x78
/*  f002288:	51a00013 */ 	beqzl	$t5,.L0f0022d8
/*  f00228c:	440d3000 */ 	mfc1	$t5,$f6
/*  f002290:	44813000 */ 	mtc1	$at,$f6
/*  f002294:	240d0001 */ 	addiu	$t5,$zero,0x1
/*  f002298:	46060181 */ 	sub.s	$f6,$f0,$f6
/*  f00229c:	44cdf800 */ 	ctc1	$t5,$31
/*  f0022a0:	00000000 */ 	nop
/*  f0022a4:	460031a4 */ 	cvt.w.s	$f6,$f6
/*  f0022a8:	444df800 */ 	cfc1	$t5,$31
/*  f0022ac:	00000000 */ 	nop
/*  f0022b0:	31ad0078 */ 	andi	$t5,$t5,0x78
/*  f0022b4:	15a00005 */ 	bnez	$t5,.L0f0022cc
/*  f0022b8:	00000000 */ 	nop
/*  f0022bc:	440d3000 */ 	mfc1	$t5,$f6
/*  f0022c0:	3c018000 */ 	lui	$at,0x8000
/*  f0022c4:	10000007 */ 	b	.L0f0022e4
/*  f0022c8:	01a16825 */ 	or	$t5,$t5,$at
.L0f0022cc:
/*  f0022cc:	10000005 */ 	b	.L0f0022e4
/*  f0022d0:	240dffff */ 	addiu	$t5,$zero,-1
/*  f0022d4:	440d3000 */ 	mfc1	$t5,$f6
.L0f0022d8:
/*  f0022d8:	00000000 */ 	nop
/*  f0022dc:	05a0fffb */ 	bltz	$t5,.L0f0022cc
/*  f0022e0:	00000000 */ 	nop
.L0f0022e4:
/*  f0022e4:	a08d0000 */ 	sb	$t5,0x0($a0)
/*  f0022e8:	8e0202bc */ 	lw	$v0,0x2bc($s0)
/*  f0022ec:	44ccf800 */ 	ctc1	$t4,$31
/*  f0022f0:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f0022f4:	0062082a */ 	slt	$at,$v1,$v0
/*  f0022f8:	1420ffcc */ 	bnez	$at,.L0f00222c
/*  f0022fc:	24a50004 */ 	addiu	$a1,$a1,0x4
.L0f002300:
/*  f002300:	26520001 */ 	addiu	$s2,$s2,0x1
/*  f002304:	0242082a */ 	slt	$at,$s2,$v0
/*  f002308:	5420ffb5 */ 	bnezl	$at,.L0f0021e0
/*  f00230c:	8eb90000 */ 	lw	$t9,0x0($s5)
.L0f002310:
/*  f002310:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f002314:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f002318:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f00231c:	8fb2001c */ 	lw	$s2,0x1c($sp)
/*  f002320:	8fb30020 */ 	lw	$s3,0x20($sp)
/*  f002324:	8fb40024 */ 	lw	$s4,0x24($sp)
/*  f002328:	8fb50028 */ 	lw	$s5,0x28($sp)
/*  f00232c:	03e00008 */ 	jr	$ra
/*  f002330:	27bd0030 */ 	addiu	$sp,$sp,0x30
);

GLOBAL_ASM(
glabel func0f002334
/*  f002334:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f002338:	44806000 */ 	mtc1	$zero,$f12
/*  f00233c:	2401ffff */ 	addiu	$at,$zero,-1
/*  f002340:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f002344:	afa40020 */ 	sw	$a0,0x20($sp)
/*  f002348:	afa50024 */ 	sw	$a1,0x24($sp)
/*  f00234c:	10c10004 */ 	beq	$a2,$at,.L0f002360
/*  f002350:	afa7002c */ 	sw	$a3,0x2c($sp)
/*  f002354:	0fc56c9d */ 	jal	func0f15b274
/*  f002358:	00c02025 */ 	or	$a0,$a2,$zero
/*  f00235c:	46000306 */ 	mov.s	$f12,$f0
.L0f002360:
/*  f002360:	8fa4002c */ 	lw	$a0,0x2c($sp)
/*  f002364:	0fc56c9d */ 	jal	func0f15b274
/*  f002368:	e7ac001c */ 	swc1	$f12,0x1c($sp)
/*  f00236c:	8faf0020 */ 	lw	$t7,0x20($sp)
/*  f002370:	3c0e800a */ 	lui	$t6,%hi(g_Rooms)
/*  f002374:	8dce4928 */ 	lw	$t6,%lo(g_Rooms)($t6)
/*  f002378:	000fc0c0 */ 	sll	$t8,$t7,0x3
/*  f00237c:	030fc021 */ 	addu	$t8,$t8,$t7
/*  f002380:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f002384:	030fc023 */ 	subu	$t8,$t8,$t7
/*  f002388:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f00238c:	01d8c821 */ 	addu	$t9,$t6,$t8
/*  f002390:	c7240070 */ 	lwc1	$f4,0x70($t9)
/*  f002394:	c7ac001c */ 	lwc1	$f12,0x1c($sp)
/*  f002398:	c7aa0024 */ 	lwc1	$f10,0x24($sp)
/*  f00239c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0023a0:	460c2181 */ 	sub.s	$f6,$f4,$f12
/*  f0023a4:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f0023a8:	46060203 */ 	div.s	$f8,$f0,$f6
/*  f0023ac:	460a4082 */ 	mul.s	$f2,$f8,$f10
/*  f0023b0:	03e00008 */ 	jr	$ra
/*  f0023b4:	46001006 */ 	mov.s	$f0,$f2
);

GLOBAL_ASM(
glabel func0f0023b8
.late_rodata
glabel var7f1a7d90
.word 0x4b989680
.text
/*  f0023b8:	3c09800a */ 	lui	$t1,%hi(g_Vars)
/*  f0023bc:	25299fc0 */ 	addiu	$t1,$t1,%lo(g_Vars)
/*  f0023c0:	8d2e02bc */ 	lw	$t6,0x2bc($t1)
/*  f0023c4:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f0023c8:	f7ba0020 */ 	sdc1	$f26,0x20($sp)
/*  f0023cc:	f7b80018 */ 	sdc1	$f24,0x18($sp)
/*  f0023d0:	f7b60010 */ 	sdc1	$f22,0x10($sp)
/*  f0023d4:	f7b40008 */ 	sdc1	$f20,0x8($sp)
/*  f0023d8:	19c0006a */ 	blez	$t6,.L0f002584
/*  f0023dc:	00001025 */ 	or	$v0,$zero,$zero
/*  f0023e0:	3c017f1a */ 	lui	$at,%hi(var7f1a7d90)
/*  f0023e4:	c43a7d90 */ 	lwc1	$f26,%lo(var7f1a7d90)($at)
/*  f0023e8:	3c014270 */ 	lui	$at,0x4270
/*  f0023ec:	4481b000 */ 	mtc1	$at,$f22
/*  f0023f0:	3c0142c8 */ 	lui	$at,0x42c8
/*  f0023f4:	4481a000 */ 	mtc1	$at,$f20
/*  f0023f8:	3c013f80 */ 	lui	$at,0x3f80
/*  f0023fc:	3c0a800a */ 	lui	$t2,%hi(g_Rooms)
/*  f002400:	44818000 */ 	mtc1	$at,$f16
/*  f002404:	4480c000 */ 	mtc1	$zero,$f24
/*  f002408:	44809000 */ 	mtc1	$zero,$f18
/*  f00240c:	254a4928 */ 	addiu	$t2,$t2,%lo(g_Rooms)
/*  f002410:	00002825 */ 	or	$a1,$zero,$zero
/*  f002414:	240b000c */ 	addiu	$t3,$zero,0xc
/*  f002418:	8d4f0000 */ 	lw	$t7,0x0($t2)
.L0f00241c:
/*  f00241c:	24030001 */ 	addiu	$v1,$zero,0x1
/*  f002420:	00003825 */ 	or	$a3,$zero,$zero
/*  f002424:	01e5c021 */ 	addu	$t8,$t7,$a1
/*  f002428:	e710006c */ 	swc1	$f16,0x6c($t8)
/*  f00242c:	8d590000 */ 	lw	$t9,0x0($t2)
/*  f002430:	03256021 */ 	addu	$t4,$t9,$a1
/*  f002434:	e5900070 */ 	swc1	$f16,0x70($t4)
/*  f002438:	8d440000 */ 	lw	$a0,0x0($t2)
/*  f00243c:	000268c0 */ 	sll	$t5,$v0,0x3
.L0f002440:
/*  f002440:	01a26821 */ 	addu	$t5,$t5,$v0
/*  f002444:	000d6880 */ 	sll	$t5,$t5,0x2
/*  f002448:	01a26823 */ 	subu	$t5,$t5,$v0
/*  f00244c:	000d6880 */ 	sll	$t5,$t5,0x2
/*  f002450:	008d7021 */ 	addu	$t6,$a0,$t5
/*  f002454:	01c73021 */ 	addu	$a2,$t6,$a3
/*  f002458:	c4c40024 */ 	lwc1	$f4,0x24($a2)
/*  f00245c:	c4c60018 */ 	lwc1	$f6,0x18($a2)
/*  f002460:	00853021 */ 	addu	$a2,$a0,$a1
/*  f002464:	00c74021 */ 	addu	$t0,$a2,$a3
/*  f002468:	46062001 */ 	sub.s	$f0,$f4,$f6
/*  f00246c:	4600903c */ 	c.lt.s	$f18,$f0
/*  f002470:	00000000 */ 	nop
/*  f002474:	4502000b */ 	bc1fl	.L0f0024a4
/*  f002478:	00001825 */ 	or	$v1,$zero,$zero
/*  f00247c:	c5080024 */ 	lwc1	$f8,0x24($t0)
/*  f002480:	c50a0018 */ 	lwc1	$f10,0x18($t0)
/*  f002484:	460a4101 */ 	sub.s	$f4,$f8,$f10
/*  f002488:	c4c8006c */ 	lwc1	$f8,0x6c($a2)
/*  f00248c:	46142183 */ 	div.s	$f6,$f4,$f20
/*  f002490:	46064282 */ 	mul.s	$f10,$f8,$f6
/*  f002494:	e4ca006c */ 	swc1	$f10,0x6c($a2)
/*  f002498:	10000002 */ 	b	.L0f0024a4
/*  f00249c:	8d440000 */ 	lw	$a0,0x0($t2)
/*  f0024a0:	00001825 */ 	or	$v1,$zero,$zero
.L0f0024a4:
/*  f0024a4:	24e70004 */ 	addiu	$a3,$a3,0x4
/*  f0024a8:	54ebffe5 */ 	bnel	$a3,$t3,.L0f002440
/*  f0024ac:	000268c0 */ 	sll	$t5,$v0,0x3
/*  f0024b0:	00853021 */ 	addu	$a2,$a0,$a1
/*  f0024b4:	c4c4006c */ 	lwc1	$f4,0x6c($a2)
/*  f0024b8:	46102200 */ 	add.s	$f8,$f4,$f16
/*  f0024bc:	e4c8006c */ 	swc1	$f8,0x6c($a2)
/*  f0024c0:	8d4f0000 */ 	lw	$t7,0x0($t2)
/*  f0024c4:	01e53021 */ 	addu	$a2,$t7,$a1
/*  f0024c8:	c4c6006c */ 	lwc1	$f6,0x6c($a2)
/*  f0024cc:	4606b03c */ 	c.lt.s	$f22,$f6
/*  f0024d0:	00000000 */ 	nop
/*  f0024d4:	45000004 */ 	bc1f	.L0f0024e8
/*  f0024d8:	00000000 */ 	nop
/*  f0024dc:	e4d6006c */ 	swc1	$f22,0x6c($a2)
/*  f0024e0:	8d580000 */ 	lw	$t8,0x0($t2)
/*  f0024e4:	03053021 */ 	addu	$a2,$t8,$a1
.L0f0024e8:
/*  f0024e8:	50600020 */ 	beqzl	$v1,.L0f00256c
/*  f0024ec:	e4da0070 */ 	swc1	$f26,0x70($a2)
/*  f0024f0:	c4ca0024 */ 	lwc1	$f10,0x24($a2)
/*  f0024f4:	c4c40018 */ 	lwc1	$f4,0x18($a2)
/*  f0024f8:	c4c80028 */ 	lwc1	$f8,0x28($a2)
/*  f0024fc:	c4c6001c */ 	lwc1	$f6,0x1c($a2)
/*  f002500:	46045001 */ 	sub.s	$f0,$f10,$f4
/*  f002504:	c4c40020 */ 	lwc1	$f4,0x20($a2)
/*  f002508:	c4ca002c */ 	lwc1	$f10,0x2c($a2)
/*  f00250c:	46064081 */ 	sub.s	$f2,$f8,$f6
/*  f002510:	4600c03c */ 	c.lt.s	$f24,$f0
/*  f002514:	46045301 */ 	sub.s	$f12,$f10,$f4
/*  f002518:	45030003 */ 	bc1tl	.L0f002528
/*  f00251c:	4602c03c */ 	c.lt.s	$f24,$f2
/*  f002520:	46000007 */ 	neg.s	$f0,$f0
/*  f002524:	4602c03c */ 	c.lt.s	$f24,$f2
.L0f002528:
/*  f002528:	00000000 */ 	nop
/*  f00252c:	45030003 */ 	bc1tl	.L0f00253c
/*  f002530:	460cc03c */ 	c.lt.s	$f24,$f12
/*  f002534:	46001087 */ 	neg.s	$f2,$f2
/*  f002538:	460cc03c */ 	c.lt.s	$f24,$f12
.L0f00253c:
/*  f00253c:	46020202 */ 	mul.s	$f8,$f0,$f2
/*  f002540:	45010002 */ 	bc1t	.L0f00254c
/*  f002544:	00000000 */ 	nop
/*  f002548:	46006307 */ 	neg.s	$f12,$f12
.L0f00254c:
/*  f00254c:	460c0182 */ 	mul.s	$f6,$f0,$f12
/*  f002550:	46064280 */ 	add.s	$f10,$f8,$f6
/*  f002554:	460c1102 */ 	mul.s	$f4,$f2,$f12
/*  f002558:	46045380 */ 	add.s	$f14,$f10,$f4
/*  f00255c:	460e7200 */ 	add.s	$f8,$f14,$f14
/*  f002560:	10000002 */ 	b	.L0f00256c
/*  f002564:	e4c80070 */ 	swc1	$f8,0x70($a2)
/*  f002568:	e4da0070 */ 	swc1	$f26,0x70($a2)
.L0f00256c:
/*  f00256c:	8d3902bc */ 	lw	$t9,0x2bc($t1)
/*  f002570:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f002574:	24a5008c */ 	addiu	$a1,$a1,0x8c
/*  f002578:	0059082a */ 	slt	$at,$v0,$t9
/*  f00257c:	5420ffa7 */ 	bnezl	$at,.L0f00241c
/*  f002580:	8d4f0000 */ 	lw	$t7,0x0($t2)
.L0f002584:
/*  f002584:	d7b40008 */ 	ldc1	$f20,0x8($sp)
/*  f002588:	d7b60010 */ 	ldc1	$f22,0x10($sp)
/*  f00258c:	d7b80018 */ 	ldc1	$f24,0x18($sp)
/*  f002590:	d7ba0020 */ 	ldc1	$f26,0x20($sp)
/*  f002594:	03e00008 */ 	jr	$ra
/*  f002598:	27bd0028 */ 	addiu	$sp,$sp,0x28
);

GLOBAL_ASM(
glabel func0f00259c
.late_rodata
glabel var7f1a7d94
.word 0x3dcccccd
.text
/*  f00259c:	27bdffa0 */ 	addiu	$sp,$sp,-96
/*  f0025a0:	afb60034 */ 	sw	$s6,0x34($sp)
/*  f0025a4:	3c16800a */ 	lui	$s6,%hi(g_Vars)
/*  f0025a8:	26d69fc0 */ 	addiu	$s6,$s6,%lo(g_Vars)
/*  f0025ac:	8ece02bc */ 	lw	$t6,0x2bc($s6)
/*  f0025b0:	44800000 */ 	mtc1	$zero,$f0
/*  f0025b4:	afb30028 */ 	sw	$s3,0x28($sp)
/*  f0025b8:	afb10020 */ 	sw	$s1,0x20($sp)
/*  f0025bc:	f7b40010 */ 	sdc1	$f20,0x10($sp)
/*  f0025c0:	00809825 */ 	or	$s3,$a0,$zero
/*  f0025c4:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f0025c8:	afb70038 */ 	sw	$s7,0x38($sp)
/*  f0025cc:	afb50030 */ 	sw	$s5,0x30($sp)
/*  f0025d0:	afb4002c */ 	sw	$s4,0x2c($sp)
/*  f0025d4:	afb20024 */ 	sw	$s2,0x24($sp)
/*  f0025d8:	afb0001c */ 	sw	$s0,0x1c($sp)
/*  f0025dc:	00008825 */ 	or	$s1,$zero,$zero
/*  f0025e0:	19c0000e */ 	blez	$t6,.L0f00261c
/*  f0025e4:	46000506 */ 	mov.s	$f20,$f0
/*  f0025e8:	3c148006 */ 	lui	$s4,%hi(var80061434)
/*  f0025ec:	26941434 */ 	addiu	$s4,$s4,%lo(var80061434)
/*  f0025f0:	00008025 */ 	or	$s0,$zero,$zero
/*  f0025f4:	8e8f0000 */ 	lw	$t7,0x0($s4)
.L0f0025f8:
/*  f0025f8:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f0025fc:	01f0c021 */ 	addu	$t8,$t7,$s0
/*  f002600:	e7000000 */ 	swc1	$f0,0x0($t8)
/*  f002604:	8ed902bc */ 	lw	$t9,0x2bc($s6)
/*  f002608:	26100004 */ 	addiu	$s0,$s0,0x4
/*  f00260c:	0239082a */ 	slt	$at,$s1,$t9
/*  f002610:	5420fff9 */ 	bnezl	$at,.L0f0025f8
/*  f002614:	8e8f0000 */ 	lw	$t7,0x0($s4)
/*  f002618:	00008825 */ 	or	$s1,$zero,$zero
.L0f00261c:
/*  f00261c:	3c15800a */ 	lui	$s5,%hi(g_Rooms)
/*  f002620:	0013b8c0 */ 	sll	$s7,$s3,0x3
/*  f002624:	26b54928 */ 	addiu	$s5,$s5,%lo(g_Rooms)
/*  f002628:	02f3b821 */ 	addu	$s7,$s7,$s3
/*  f00262c:	8ea80000 */ 	lw	$t0,0x0($s5)
/*  f002630:	0017b880 */ 	sll	$s7,$s7,0x2
/*  f002634:	02f3b823 */ 	subu	$s7,$s7,$s3
/*  f002638:	0017b880 */ 	sll	$s7,$s7,0x2
/*  f00263c:	3c148006 */ 	lui	$s4,%hi(var80061434)
/*  f002640:	01174821 */ 	addu	$t1,$t0,$s7
/*  f002644:	26941434 */ 	addiu	$s4,$s4,%lo(var80061434)
/*  f002648:	0c012974 */ 	jal	sqrtf
/*  f00264c:	c52c006c */ 	lwc1	$f12,0x6c($t1)
/*  f002650:	3c01437f */ 	lui	$at,0x437f
/*  f002654:	44812000 */ 	mtc1	$at,$f4
/*  f002658:	8e8b0000 */ 	lw	$t3,0x0($s4)
/*  f00265c:	00135080 */ 	sll	$t2,$s3,0x2
/*  f002660:	46040182 */ 	mul.s	$f6,$f0,$f4
/*  f002664:	afaa0044 */ 	sw	$t2,0x44($sp)
/*  f002668:	016a6821 */ 	addu	$t5,$t3,$t2
/*  f00266c:	02602025 */ 	or	$a0,$s3,$zero
/*  f002670:	e5a60000 */ 	swc1	$f6,0x0($t5)
/*  f002674:	8eae0000 */ 	lw	$t6,0x0($s5)
/*  f002678:	8fb80044 */ 	lw	$t8,0x44($sp)
/*  f00267c:	01d79021 */ 	addu	$s2,$t6,$s7
/*  f002680:	82420005 */ 	lb	$v0,0x5($s2)
/*  f002684:	1040000a */ 	beqz	$v0,.L0f0026b0
/*  f002688:	00000000 */ 	nop
/*  f00268c:	8e8f0000 */ 	lw	$t7,0x0($s4)
/*  f002690:	00003025 */ 	or	$a2,$zero,$zero
/*  f002694:	2407ffff */ 	addiu	$a3,$zero,-1
/*  f002698:	01f8c821 */ 	addu	$t9,$t7,$t8
/*  f00269c:	0fc00a11 */ 	jal	func0f002844
/*  f0026a0:	8f250000 */ 	lw	$a1,0x0($t9)
/*  f0026a4:	8ea80000 */ 	lw	$t0,0x0($s5)
/*  f0026a8:	01179021 */ 	addu	$s2,$t0,$s7
/*  f0026ac:	82420005 */ 	lb	$v0,0x5($s2)
.L0f0026b0:
/*  f0026b0:	18400013 */ 	blez	$v0,.L0f002700
/*  f0026b4:	00008025 */ 	or	$s0,$zero,$zero
/*  f0026b8:	3c13800a */ 	lui	$s3,%hi(var800a4ce0)
/*  f0026bc:	26734ce0 */ 	addiu	$s3,$s3,%lo(var800a4ce0)
/*  f0026c0:	864a000e */ 	lh	$t2,0xe($s2)
.L0f0026c4:
/*  f0026c4:	8e690000 */ 	lw	$t1,0x0($s3)
/*  f0026c8:	000a5840 */ 	sll	$t3,$t2,0x1
/*  f0026cc:	012b6021 */ 	addu	$t4,$t1,$t3
/*  f0026d0:	01906821 */ 	addu	$t5,$t4,$s0
/*  f0026d4:	0fc56c9d */ 	jal	func0f15b274
/*  f0026d8:	85a40000 */ 	lh	$a0,0x0($t5)
/*  f0026dc:	8eae0000 */ 	lw	$t6,0x0($s5)
/*  f0026e0:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f0026e4:	26100002 */ 	addiu	$s0,$s0,0x2
/*  f0026e8:	01d79021 */ 	addu	$s2,$t6,$s7
/*  f0026ec:	824f0005 */ 	lb	$t7,0x5($s2)
/*  f0026f0:	4600a500 */ 	add.s	$f20,$f20,$f0
/*  f0026f4:	022f082a */ 	slt	$at,$s1,$t7
/*  f0026f8:	5420fff2 */ 	bnezl	$at,.L0f0026c4
/*  f0026fc:	864a000e */ 	lh	$t2,0xe($s2)
.L0f002700:
/*  f002700:	c6400070 */ 	lwc1	$f0,0x70($s2)
/*  f002704:	8ed802bc */ 	lw	$t8,0x2bc($s6)
/*  f002708:	24110001 */ 	addiu	$s1,$zero,0x1
/*  f00270c:	46140201 */ 	sub.s	$f8,$f0,$f20
/*  f002710:	2b010002 */ 	slti	$at,$t8,0x2
/*  f002714:	24100004 */ 	addiu	$s0,$zero,0x4
/*  f002718:	46004283 */ 	div.s	$f10,$f8,$f0
/*  f00271c:	14200015 */ 	bnez	$at,.L0f002774
/*  f002720:	e7aa0058 */ 	swc1	$f10,0x58($sp)
/*  f002724:	3c014040 */ 	lui	$at,0x4040
/*  f002728:	4481a000 */ 	mtc1	$at,$f20
/*  f00272c:	2412008c */ 	addiu	$s2,$zero,0x8c
/*  f002730:	8eb90000 */ 	lw	$t9,0x0($s5)
.L0f002734:
/*  f002734:	03324021 */ 	addu	$t0,$t9,$s2
/*  f002738:	0c012974 */ 	jal	sqrtf
/*  f00273c:	c50c006c */ 	lwc1	$f12,0x6c($t0)
/*  f002740:	4600a483 */ 	div.s	$f18,$f20,$f0
/*  f002744:	8e8a0000 */ 	lw	$t2,0x0($s4)
/*  f002748:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f00274c:	2652008c */ 	addiu	$s2,$s2,0x8c
/*  f002750:	01501021 */ 	addu	$v0,$t2,$s0
/*  f002754:	c4500000 */ 	lwc1	$f16,0x0($v0)
/*  f002758:	26100004 */ 	addiu	$s0,$s0,0x4
/*  f00275c:	46128102 */ 	mul.s	$f4,$f16,$f18
/*  f002760:	e4440000 */ 	swc1	$f4,0x0($v0)
/*  f002764:	8ec902bc */ 	lw	$t1,0x2bc($s6)
/*  f002768:	0229082a */ 	slt	$at,$s1,$t1
/*  f00276c:	5420fff1 */ 	bnezl	$at,.L0f002734
/*  f002770:	8eb90000 */ 	lw	$t9,0x0($s5)
.L0f002774:
/*  f002774:	8e8b0000 */ 	lw	$t3,0x0($s4)
/*  f002778:	8fac0044 */ 	lw	$t4,0x44($sp)
/*  f00277c:	3c01437f */ 	lui	$at,0x437f
/*  f002780:	44813000 */ 	mtc1	$at,$f6
/*  f002784:	016c1021 */ 	addu	$v0,$t3,$t4
/*  f002788:	c4480000 */ 	lwc1	$f8,0x0($v0)
/*  f00278c:	3c01437f */ 	lui	$at,0x437f
/*  f002790:	4608303c */ 	c.lt.s	$f6,$f8
/*  f002794:	00000000 */ 	nop
/*  f002798:	45000004 */ 	bc1f	.L0f0027ac
/*  f00279c:	00000000 */ 	nop
/*  f0027a0:	44815000 */ 	mtc1	$at,$f10
/*  f0027a4:	00000000 */ 	nop
/*  f0027a8:	e44a0000 */ 	swc1	$f10,0x0($v0)
.L0f0027ac:
/*  f0027ac:	3c017f1a */ 	lui	$at,%hi(var7f1a7d94)
/*  f0027b0:	c4327d94 */ 	lwc1	$f18,%lo(var7f1a7d94)($at)
/*  f0027b4:	c7b00058 */ 	lwc1	$f16,0x58($sp)
/*  f0027b8:	4612803c */ 	c.lt.s	$f16,$f18
/*  f0027bc:	00000000 */ 	nop
/*  f0027c0:	45020015 */ 	bc1fl	.L0f002818
/*  f0027c4:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f0027c8:	8ead0000 */ 	lw	$t5,0x0($s5)
/*  f0027cc:	3c014f80 */ 	lui	$at,0x4f80
/*  f0027d0:	01b79021 */ 	addu	$s2,$t5,$s7
/*  f0027d4:	924e0049 */ 	lbu	$t6,0x49($s2)
/*  f0027d8:	000e7843 */ 	sra	$t7,$t6,0x1
/*  f0027dc:	a24f0048 */ 	sb	$t7,0x48($s2)
/*  f0027e0:	8eb80000 */ 	lw	$t8,0x0($s5)
/*  f0027e4:	8fa90044 */ 	lw	$t1,0x44($sp)
/*  f0027e8:	0317c821 */ 	addu	$t9,$t8,$s7
/*  f0027ec:	93280049 */ 	lbu	$t0,0x49($t9)
/*  f0027f0:	44882000 */ 	mtc1	$t0,$f4
/*  f0027f4:	05010004 */ 	bgez	$t0,.L0f002808
/*  f0027f8:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f0027fc:	44814000 */ 	mtc1	$at,$f8
/*  f002800:	00000000 */ 	nop
/*  f002804:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f002808:
/*  f002808:	8e8a0000 */ 	lw	$t2,0x0($s4)
/*  f00280c:	01495821 */ 	addu	$t3,$t2,$t1
/*  f002810:	e5660000 */ 	swc1	$f6,0x0($t3)
/*  f002814:	8fbf003c */ 	lw	$ra,0x3c($sp)
.L0f002818:
/*  f002818:	d7b40010 */ 	ldc1	$f20,0x10($sp)
/*  f00281c:	8fb0001c */ 	lw	$s0,0x1c($sp)
/*  f002820:	8fb10020 */ 	lw	$s1,0x20($sp)
/*  f002824:	8fb20024 */ 	lw	$s2,0x24($sp)
/*  f002828:	8fb30028 */ 	lw	$s3,0x28($sp)
/*  f00282c:	8fb4002c */ 	lw	$s4,0x2c($sp)
/*  f002830:	8fb50030 */ 	lw	$s5,0x30($sp)
/*  f002834:	8fb60034 */ 	lw	$s6,0x34($sp)
/*  f002838:	8fb70038 */ 	lw	$s7,0x38($sp)
/*  f00283c:	03e00008 */ 	jr	$ra
/*  f002840:	27bd0060 */ 	addiu	$sp,$sp,0x60
);

GLOBAL_ASM(
glabel func0f002844
/*  f002844:	27bdff98 */ 	addiu	$sp,$sp,-104
/*  f002848:	3c028006 */ 	lui	$v0,%hi(var80061440)
/*  f00284c:	24421440 */ 	addiu	$v0,$v0,%lo(var80061440)
/*  f002850:	8c4f0000 */ 	lw	$t7,0x0($v0)
/*  f002854:	f7b60020 */ 	sdc1	$f22,0x20($sp)
/*  f002858:	4485b000 */ 	mtc1	$a1,$f22
/*  f00285c:	afb60040 */ 	sw	$s6,0x40($sp)
/*  f002860:	afb5003c */ 	sw	$s5,0x3c($sp)
/*  f002864:	240effff */ 	addiu	$t6,$zero,-1
/*  f002868:	2401ffff */ 	addiu	$at,$zero,-1
/*  f00286c:	25f80001 */ 	addiu	$t8,$t7,0x1
/*  f002870:	0080a825 */ 	or	$s5,$a0,$zero
/*  f002874:	00c0b025 */ 	or	$s6,$a2,$zero
/*  f002878:	afbf004c */ 	sw	$ra,0x4c($sp)
/*  f00287c:	afbe0048 */ 	sw	$s8,0x48($sp)
/*  f002880:	afb70044 */ 	sw	$s7,0x44($sp)
/*  f002884:	afb40038 */ 	sw	$s4,0x38($sp)
/*  f002888:	afb30034 */ 	sw	$s3,0x34($sp)
/*  f00288c:	afb20030 */ 	sw	$s2,0x30($sp)
/*  f002890:	afb1002c */ 	sw	$s1,0x2c($sp)
/*  f002894:	afb00028 */ 	sw	$s0,0x28($sp)
/*  f002898:	f7b40018 */ 	sdc1	$f20,0x18($sp)
/*  f00289c:	afa70074 */ 	sw	$a3,0x74($sp)
/*  f0028a0:	afae0060 */ 	sw	$t6,0x60($sp)
/*  f0028a4:	10e1000c */ 	beq	$a3,$at,.L0f0028d8
/*  f0028a8:	ac580000 */ 	sw	$t8,0x0($v0)
/*  f0028ac:	3c08800a */ 	lui	$t0,%hi(g_Portals)
/*  f0028b0:	8d084cc8 */ 	lw	$t0,%lo(g_Portals)($t0)
/*  f0028b4:	000748c0 */ 	sll	$t1,$a3,0x3
/*  f0028b8:	01091021 */ 	addu	$v0,$t0,$t1
/*  f0028bc:	84430002 */ 	lh	$v1,0x2($v0)
/*  f0028c0:	54830005 */ 	bnel	$a0,$v1,.L0f0028d8
/*  f0028c4:	afa30060 */ 	sw	$v1,0x60($sp)
/*  f0028c8:	844a0004 */ 	lh	$t2,0x4($v0)
/*  f0028cc:	10000002 */ 	b	.L0f0028d8
/*  f0028d0:	afaa0060 */ 	sw	$t2,0x60($sp)
/*  f0028d4:	afa30060 */ 	sw	$v1,0x60($sp)
.L0f0028d8:
/*  f0028d8:	001558c0 */ 	sll	$t3,$s5,0x3
/*  f0028dc:	01755821 */ 	addu	$t3,$t3,$s5
/*  f0028e0:	000b5880 */ 	sll	$t3,$t3,0x2
/*  f0028e4:	3c0c800a */ 	lui	$t4,%hi(g_Rooms)
/*  f0028e8:	8d8c4928 */ 	lw	$t4,%lo(g_Rooms)($t4)
/*  f0028ec:	01755823 */ 	subu	$t3,$t3,$s5
/*  f0028f0:	000b5880 */ 	sll	$t3,$t3,0x2
/*  f0028f4:	afab0050 */ 	sw	$t3,0x50($sp)
/*  f0028f8:	018b1021 */ 	addu	$v0,$t4,$t3
/*  f0028fc:	804e0005 */ 	lb	$t6,0x5($v0)
/*  f002900:	00009825 */ 	or	$s3,$zero,$zero
/*  f002904:	0000a025 */ 	or	$s4,$zero,$zero
/*  f002908:	19c00055 */ 	blez	$t6,.L0f002a60
/*  f00290c:	3c1e8006 */ 	lui	$s8,%hi(var80061438)
/*  f002910:	3c17800a */ 	lui	$s7,%hi(var800a4ce0)
/*  f002914:	3c128006 */ 	lui	$s2,%hi(var80061434)
/*  f002918:	4480a000 */ 	mtc1	$zero,$f20
/*  f00291c:	26521434 */ 	addiu	$s2,$s2,%lo(var80061434)
/*  f002920:	26f74ce0 */ 	addiu	$s7,$s7,%lo(var800a4ce0)
/*  f002924:	27de1438 */ 	addiu	$s8,$s8,%lo(var80061438)
/*  f002928:	8458000e */ 	lh	$t8,0xe($v0)
.L0f00292c:
/*  f00292c:	8eef0000 */ 	lw	$t7,0x0($s7)
/*  f002930:	8fca0000 */ 	lw	$t2,0x0($s8)
/*  f002934:	0018c840 */ 	sll	$t9,$t8,0x1
/*  f002938:	01f94021 */ 	addu	$t0,$t7,$t9
/*  f00293c:	01144821 */ 	addu	$t1,$t0,$s4
/*  f002940:	85310000 */ 	lh	$s1,0x0($t1)
/*  f002944:	3c0e800a */ 	lui	$t6,%hi(g_Portals)
/*  f002948:	8faf0060 */ 	lw	$t7,0x60($sp)
/*  f00294c:	00115880 */ 	sll	$t3,$s1,0x2
/*  f002950:	014b6021 */ 	addu	$t4,$t2,$t3
/*  f002954:	8d8d0000 */ 	lw	$t5,0x0($t4)
/*  f002958:	11a00037 */ 	beqz	$t5,.L0f002a38
/*  f00295c:	00000000 */ 	nop
/*  f002960:	8dce4cc8 */ 	lw	$t6,%lo(g_Portals)($t6)
/*  f002964:	0011c0c0 */ 	sll	$t8,$s1,0x3
/*  f002968:	02a02025 */ 	or	$a0,$s5,$zero
/*  f00296c:	01d81021 */ 	addu	$v0,$t6,$t8
/*  f002970:	84430002 */ 	lh	$v1,0x2($v0)
/*  f002974:	3c19800a */ 	lui	$t9,%hi(var8009cae8)
/*  f002978:	16a30003 */ 	bne	$s5,$v1,.L0f002988
/*  f00297c:	00608025 */ 	or	$s0,$v1,$zero
/*  f002980:	10000001 */ 	b	.L0f002988
/*  f002984:	84500004 */ 	lh	$s0,0x4($v0)
.L0f002988:
/*  f002988:	120f002b */ 	beq	$s0,$t7,.L0f002a38
/*  f00298c:	00000000 */ 	nop
/*  f002990:	8f39cae8 */ 	lw	$t9,%lo(var8009cae8)($t9)
/*  f002994:	4405b000 */ 	mfc1	$a1,$f22
/*  f002998:	8fa60074 */ 	lw	$a2,0x74($sp)
/*  f00299c:	0320f809 */ 	jalr	$t9
/*  f0029a0:	02203825 */ 	or	$a3,$s1,$zero
/*  f0029a4:	3c018006 */ 	lui	$at,0x8006
/*  f0029a8:	c424143c */ 	lwc1	$f4,0x143c($at)
/*  f0029ac:	46000086 */ 	mov.s	$f2,$f0
/*  f0029b0:	3c08800a */ 	lui	$t0,%hi(var8009cae4)
/*  f0029b4:	4600203c */ 	c.lt.s	$f4,$f0
/*  f0029b8:	00000000 */ 	nop
/*  f0029bc:	4500001e */ 	bc1f	.L0f002a38
/*  f0029c0:	00000000 */ 	nop
/*  f0029c4:	8d08cae4 */ 	lw	$t0,%lo(var8009cae4)($t0)
/*  f0029c8:	02203825 */ 	or	$a3,$s1,$zero
/*  f0029cc:	02c8082a */ 	slt	$at,$s6,$t0
/*  f0029d0:	10200019 */ 	beqz	$at,.L0f002a38
/*  f0029d4:	00000000 */ 	nop
/*  f0029d8:	8e490000 */ 	lw	$t1,0x0($s2)
/*  f0029dc:	00151080 */ 	sll	$v0,$s5,0x2
/*  f0029e0:	00105880 */ 	sll	$t3,$s0,0x2
/*  f0029e4:	01221821 */ 	addu	$v1,$t1,$v0
/*  f0029e8:	c4660000 */ 	lwc1	$f6,0x0($v1)
/*  f0029ec:	44051000 */ 	mfc1	$a1,$f2
/*  f0029f0:	26c60001 */ 	addiu	$a2,$s6,0x1
/*  f0029f4:	46003201 */ 	sub.s	$f8,$f6,$f0
/*  f0029f8:	e4680000 */ 	swc1	$f8,0x0($v1)
/*  f0029fc:	8e4a0000 */ 	lw	$t2,0x0($s2)
/*  f002a00:	014b2021 */ 	addu	$a0,$t2,$t3
/*  f002a04:	c48a0000 */ 	lwc1	$f10,0x0($a0)
/*  f002a08:	46005400 */ 	add.s	$f16,$f10,$f0
/*  f002a0c:	e4900000 */ 	swc1	$f16,0x0($a0)
/*  f002a10:	8e4c0000 */ 	lw	$t4,0x0($s2)
/*  f002a14:	01821821 */ 	addu	$v1,$t4,$v0
/*  f002a18:	c4720000 */ 	lwc1	$f18,0x0($v1)
/*  f002a1c:	4614903c */ 	c.lt.s	$f18,$f20
/*  f002a20:	00000000 */ 	nop
/*  f002a24:	45000002 */ 	bc1f	.L0f002a30
/*  f002a28:	00000000 */ 	nop
/*  f002a2c:	e4740000 */ 	swc1	$f20,0x0($v1)
.L0f002a30:
/*  f002a30:	0fc00a11 */ 	jal	func0f002844
/*  f002a34:	02002025 */ 	or	$a0,$s0,$zero
.L0f002a38:
/*  f002a38:	3c0d800a */ 	lui	$t5,%hi(g_Rooms)
/*  f002a3c:	8dad4928 */ 	lw	$t5,%lo(g_Rooms)($t5)
/*  f002a40:	8fae0050 */ 	lw	$t6,0x50($sp)
/*  f002a44:	26730001 */ 	addiu	$s3,$s3,0x1
/*  f002a48:	26940002 */ 	addiu	$s4,$s4,0x2
/*  f002a4c:	01ae1021 */ 	addu	$v0,$t5,$t6
/*  f002a50:	80580005 */ 	lb	$t8,0x5($v0)
/*  f002a54:	0278082a */ 	slt	$at,$s3,$t8
/*  f002a58:	5420ffb4 */ 	bnezl	$at,.L0f00292c
/*  f002a5c:	8458000e */ 	lh	$t8,0xe($v0)
.L0f002a60:
/*  f002a60:	8fbf004c */ 	lw	$ra,0x4c($sp)
/*  f002a64:	d7b40018 */ 	ldc1	$f20,0x18($sp)
/*  f002a68:	d7b60020 */ 	ldc1	$f22,0x20($sp)
/*  f002a6c:	8fb00028 */ 	lw	$s0,0x28($sp)
/*  f002a70:	8fb1002c */ 	lw	$s1,0x2c($sp)
/*  f002a74:	8fb20030 */ 	lw	$s2,0x30($sp)
/*  f002a78:	8fb30034 */ 	lw	$s3,0x34($sp)
/*  f002a7c:	8fb40038 */ 	lw	$s4,0x38($sp)
/*  f002a80:	8fb5003c */ 	lw	$s5,0x3c($sp)
/*  f002a84:	8fb60040 */ 	lw	$s6,0x40($sp)
/*  f002a88:	8fb70044 */ 	lw	$s7,0x44($sp)
/*  f002a8c:	8fbe0048 */ 	lw	$s8,0x48($sp)
/*  f002a90:	03e00008 */ 	jr	$ra
/*  f002a94:	27bd0068 */ 	addiu	$sp,$sp,0x68
);

GLOBAL_ASM(
glabel func0f002a98
/*  f002a98:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f002a9c:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f002aa0:	3c13800a */ 	lui	$s3,%hi(g_Vars)
/*  f002aa4:	26739fc0 */ 	addiu	$s3,$s3,%lo(g_Vars)
/*  f002aa8:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f002aac:	afb2001c */ 	sw	$s2,0x1c($sp)
/*  f002ab0:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f002ab4:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f002ab8:	0fc5db62 */ 	jal	align4
/*  f002abc:	8e6402bc */ 	lw	$a0,0x2bc($s3)
/*  f002ac0:	3c01800a */ 	lui	$at,%hi(var8009cae0)
/*  f002ac4:	ac22cae0 */ 	sw	$v0,%lo(var8009cae0)($at)
/*  f002ac8:	3c018006 */ 	lui	$at,%hi(var80061458)
/*  f002acc:	ac201458 */ 	sw	$zero,%lo(var80061458)($at)
/*  f002ad0:	8e6e02bc */ 	lw	$t6,0x2bc($s3)
/*  f002ad4:	a26004e1 */ 	sb	$zero,0x4e1($s3)
/*  f002ad8:	24100001 */ 	addiu	$s0,$zero,0x1
/*  f002adc:	29c10002 */ 	slti	$at,$t6,0x2
/*  f002ae0:	1420000e */ 	bnez	$at,.L0f002b1c
/*  f002ae4:	2411008c */ 	addiu	$s1,$zero,0x8c
/*  f002ae8:	3c12800a */ 	lui	$s2,%hi(g_Rooms)
/*  f002aec:	26524928 */ 	addiu	$s2,$s2,%lo(g_Rooms)
/*  f002af0:	8e4f0000 */ 	lw	$t7,0x0($s2)
.L0f002af4:
/*  f002af4:	0fc00436 */ 	jal	func0f0010d8
/*  f002af8:	022f2021 */ 	addu	$a0,$s1,$t7
/*  f002afc:	0fc004f2 */ 	jal	func0f0013c8
/*  f002b00:	02002025 */ 	or	$a0,$s0,$zero
/*  f002b04:	8e7802bc */ 	lw	$t8,0x2bc($s3)
/*  f002b08:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f002b0c:	2631008c */ 	addiu	$s1,$s1,0x8c
/*  f002b10:	0218082a */ 	slt	$at,$s0,$t8
/*  f002b14:	5420fff7 */ 	bnezl	$at,.L0f002af4
/*  f002b18:	8e4f0000 */ 	lw	$t7,0x0($s2)
.L0f002b1c:
/*  f002b1c:	3c198009 */ 	lui	$t9,%hi(g_Is4Mb)
/*  f002b20:	93390af0 */ 	lbu	$t9,%lo(g_Is4Mb)($t9)
/*  f002b24:	3c018006 */ 	lui	$at,%hi(var80061420)
/*  f002b28:	ac201420 */ 	sw	$zero,%lo(var80061420)($at)
/*  f002b2c:	24010001 */ 	addiu	$at,$zero,0x1
/*  f002b30:	17210002 */ 	bne	$t9,$at,.L0f002b3c
/*  f002b34:	3c018006 */ 	lui	$at,%hi(var80061444)
/*  f002b38:	ac201444 */ 	sw	$zero,%lo(var80061444)($at)
.L0f002b3c:
/*  f002b3c:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f002b40:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f002b44:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f002b48:	8fb2001c */ 	lw	$s2,0x1c($sp)
/*  f002b4c:	8fb30020 */ 	lw	$s3,0x20($sp)
/*  f002b50:	03e00008 */ 	jr	$ra
/*  f002b54:	27bd0028 */ 	addiu	$sp,$sp,0x28
);

GLOBAL_ASM(
glabel func0f002b58
/*  f002b58:	3c08800a */ 	lui	$t0,%hi(g_Rooms)
/*  f002b5c:	000418c0 */ 	sll	$v1,$a0,0x3
/*  f002b60:	25084928 */ 	addiu	$t0,$t0,%lo(g_Rooms)
/*  f002b64:	00641821 */ 	addu	$v1,$v1,$a0
/*  f002b68:	8d0e0000 */ 	lw	$t6,0x0($t0)
/*  f002b6c:	00031880 */ 	sll	$v1,$v1,0x2
/*  f002b70:	00641823 */ 	subu	$v1,$v1,$a0
/*  f002b74:	00031880 */ 	sll	$v1,$v1,0x2
/*  f002b78:	01c33021 */ 	addu	$a2,$t6,$v1
/*  f002b7c:	94cf000a */ 	lhu	$t7,0xa($a2)
/*  f002b80:	80c70008 */ 	lb	$a3,0x8($a2)
/*  f002b84:	3c19800a */ 	lui	$t9,%hi(var800a4cd8)
/*  f002b88:	000fc100 */ 	sll	$t8,$t7,0x4
/*  f002b8c:	8f394cd8 */ 	lw	$t9,%lo(var800a4cd8)($t9)
/*  f002b90:	030fc021 */ 	addu	$t8,$t8,$t7
/*  f002b94:	0018c040 */ 	sll	$t8,$t8,0x1
/*  f002b98:	10e00014 */ 	beqz	$a3,.L0f002bec
/*  f002b9c:	03191021 */ 	addu	$v0,$t8,$t9
/*  f002ba0:	18e00012 */ 	blez	$a3,.L0f002bec
/*  f002ba4:	00002025 */ 	or	$a0,$zero,$zero
.L0f002ba8:
/*  f002ba8:	94490004 */ 	lhu	$t1,0x4($v0)
/*  f002bac:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f002bb0:	00095e40 */ 	sll	$t3,$t1,0x19
/*  f002bb4:	0563000b */ 	bgezl	$t3,.L0f002be4
/*  f002bb8:	0087082a */ 	slt	$at,$a0,$a3
/*  f002bbc:	904f0005 */ 	lbu	$t7,0x5($v0)
/*  f002bc0:	00056940 */ 	sll	$t5,$a1,0x5
/*  f002bc4:	31ae0020 */ 	andi	$t6,$t5,0x20
/*  f002bc8:	31f8ffdf */ 	andi	$t8,$t7,0xffdf
/*  f002bcc:	01d8c825 */ 	or	$t9,$t6,$t8
/*  f002bd0:	a0590005 */ 	sb	$t9,0x5($v0)
/*  f002bd4:	8d090000 */ 	lw	$t1,0x0($t0)
/*  f002bd8:	01233021 */ 	addu	$a2,$t1,$v1
/*  f002bdc:	80c70008 */ 	lb	$a3,0x8($a2)
/*  f002be0:	0087082a */ 	slt	$at,$a0,$a3
.L0f002be4:
/*  f002be4:	1420fff0 */ 	bnez	$at,.L0f002ba8
/*  f002be8:	24420022 */ 	addiu	$v0,$v0,0x22
.L0f002bec:
/*  f002bec:	50a00006 */ 	beqzl	$a1,.L0f002c08
/*  f002bf0:	94cc0000 */ 	lhu	$t4,0x0($a2)
/*  f002bf4:	94ca0000 */ 	lhu	$t2,0x0($a2)
/*  f002bf8:	314bdfff */ 	andi	$t3,$t2,0xdfff
/*  f002bfc:	10000004 */ 	b	.L0f002c10
/*  f002c00:	a4cb0000 */ 	sh	$t3,0x0($a2)
/*  f002c04:	94cc0000 */ 	lhu	$t4,0x0($a2)
.L0f002c08:
/*  f002c08:	358d2000 */ 	ori	$t5,$t4,0x2000
/*  f002c0c:	a4cd0000 */ 	sh	$t5,0x0($a2)
.L0f002c10:
/*  f002c10:	8d0f0000 */ 	lw	$t7,0x0($t0)
/*  f002c14:	01e33021 */ 	addu	$a2,$t7,$v1
/*  f002c18:	94ce0000 */ 	lhu	$t6,0x0($a2)
/*  f002c1c:	35d80100 */ 	ori	$t8,$t6,0x100
/*  f002c20:	03e00008 */ 	jr	$ra
/*  f002c24:	a4d80000 */ 	sh	$t8,0x0($a2)
);

GLOBAL_ASM(
glabel func0f002c28
.late_rodata
glabel var7f1a7d98
.word func0f002c28+0x98 # f002cc0
glabel var7f1a7d9c
.word func0f002c28+0xd0 # f002cf8
glabel var7f1a7da0
.word func0f002c28+0x174 # f002d9c
glabel var7f1a7da4
.word func0f002c28+0x21c # f002e44
glabel var7f1a7da8
.word func0f002c28+0x2c0 # f002ee8
glabel var7f1a7dac
.word 0x3c23d70a
glabel var7f1a7db0
.word 0x3c23d70a
glabel var7f1a7db4
.word 0x3c23d70a
glabel var7f1a7db8
.word 0x3c23d70a
.text
/*  f002c28:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f002c2c:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f002c30:	afa40018 */ 	sw	$a0,0x18($sp)
/*  f002c34:	afa60020 */ 	sw	$a2,0x20($sp)
/*  f002c38:	afa70024 */ 	sw	$a3,0x24($sp)
/*  f002c3c:	afa5001c */ 	sw	$a1,0x1c($sp)
/*  f002c40:	a3a70027 */ 	sb	$a3,0x27($sp)
/*  f002c44:	a3a60023 */ 	sb	$a2,0x23($sp)
/*  f002c48:	0fc41b99 */ 	jal	cheatIsActive
/*  f002c4c:	24040015 */ 	addiu	$a0,$zero,0x15
/*  f002c50:	8fa5001c */ 	lw	$a1,0x1c($sp)
/*  f002c54:	93a60023 */ 	lbu	$a2,0x23($sp)
/*  f002c58:	144000a3 */ 	bnez	$v0,.L0f002ee8
/*  f002c5c:	93a70027 */ 	lbu	$a3,0x27($sp)
/*  f002c60:	8fa20018 */ 	lw	$v0,0x18($sp)
/*  f002c64:	3c03800a */ 	lui	$v1,%hi(g_Rooms)
/*  f002c68:	24634928 */ 	addiu	$v1,$v1,%lo(g_Rooms)
/*  f002c6c:	0002c0c0 */ 	sll	$t8,$v0,0x3
/*  f002c70:	0302c021 */ 	addu	$t8,$t8,$v0
/*  f002c74:	8c790000 */ 	lw	$t9,0x0($v1)
/*  f002c78:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f002c7c:	0302c023 */ 	subu	$t8,$t8,$v0
/*  f002c80:	00181080 */ 	sll	$v0,$t8,0x2
/*  f002c84:	03222021 */ 	addu	$a0,$t9,$v0
/*  f002c88:	908b004e */ 	lbu	$t3,0x4e($a0)
/*  f002c8c:	00055100 */ 	sll	$t2,$a1,0x4
/*  f002c90:	24aeffff */ 	addiu	$t6,$a1,-1
/*  f002c94:	316cff0f */ 	andi	$t4,$t3,0xff0f
/*  f002c98:	014c6825 */ 	or	$t5,$t2,$t4
/*  f002c9c:	2dc10005 */ 	sltiu	$at,$t6,0x5
/*  f002ca0:	10200091 */ 	beqz	$at,.L0f002ee8
/*  f002ca4:	a08d004e */ 	sb	$t5,0x4e($a0)
/*  f002ca8:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f002cac:	3c017f1a */ 	lui	$at,%hi(var7f1a7d98)
/*  f002cb0:	002e0821 */ 	addu	$at,$at,$t6
/*  f002cb4:	8c2e7d98 */ 	lw	$t6,%lo(var7f1a7d98)($at)
/*  f002cb8:	01c00008 */ 	jr	$t6
/*  f002cbc:	00000000 */ 	nop
/*  f002cc0:	44862000 */ 	mtc1	$a2,$f4
/*  f002cc4:	3c017f1a */ 	lui	$at,%hi(var7f1a7dac)
/*  f002cc8:	c4207dac */ 	lwc1	$f0,%lo(var7f1a7dac)($at)
/*  f002ccc:	04c10005 */ 	bgez	$a2,.L0f002ce4
/*  f002cd0:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f002cd4:	3c014f80 */ 	lui	$at,0x4f80
/*  f002cd8:	44814000 */ 	mtc1	$at,$f8
/*  f002cdc:	00000000 */ 	nop
/*  f002ce0:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f002ce4:
/*  f002ce4:	46003282 */ 	mul.s	$f10,$f6,$f0
/*  f002ce8:	8c6f0000 */ 	lw	$t7,0x0($v1)
/*  f002cec:	01e2c021 */ 	addu	$t8,$t7,$v0
/*  f002cf0:	1000007d */ 	b	.L0f002ee8
/*  f002cf4:	e70a0060 */ 	swc1	$f10,0x60($t8)
/*  f002cf8:	44868000 */ 	mtc1	$a2,$f16
/*  f002cfc:	3c017f1a */ 	lui	$at,%hi(var7f1a7db0)
/*  f002d00:	c4207db0 */ 	lwc1	$f0,%lo(var7f1a7db0)($at)
/*  f002d04:	93a4002b */ 	lbu	$a0,0x2b($sp)
/*  f002d08:	04c10005 */ 	bgez	$a2,.L0f002d20
/*  f002d0c:	468084a0 */ 	cvt.s.w	$f18,$f16
/*  f002d10:	3c014f80 */ 	lui	$at,0x4f80
/*  f002d14:	44812000 */ 	mtc1	$at,$f4
/*  f002d18:	00000000 */ 	nop
/*  f002d1c:	46049480 */ 	add.s	$f18,$f18,$f4
.L0f002d20:
/*  f002d20:	8c790000 */ 	lw	$t9,0x0($v1)
/*  f002d24:	44874000 */ 	mtc1	$a3,$f8
/*  f002d28:	3c014f80 */ 	lui	$at,0x4f80
/*  f002d2c:	03224021 */ 	addu	$t0,$t9,$v0
/*  f002d30:	e5120060 */ 	swc1	$f18,0x60($t0)
/*  f002d34:	04e10004 */ 	bgez	$a3,.L0f002d48
/*  f002d38:	468041a0 */ 	cvt.s.w	$f6,$f8
/*  f002d3c:	44815000 */ 	mtc1	$at,$f10
/*  f002d40:	00000000 */ 	nop
/*  f002d44:	460a3180 */ 	add.s	$f6,$f6,$f10
.L0f002d48:
/*  f002d48:	46003402 */ 	mul.s	$f16,$f6,$f0
/*  f002d4c:	8c690000 */ 	lw	$t1,0x0($v1)
/*  f002d50:	44842000 */ 	mtc1	$a0,$f4
/*  f002d54:	3c014f80 */ 	lui	$at,0x4f80
/*  f002d58:	01225821 */ 	addu	$t3,$t1,$v0
/*  f002d5c:	468024a0 */ 	cvt.s.w	$f18,$f4
/*  f002d60:	04810004 */ 	bgez	$a0,.L0f002d74
/*  f002d64:	e5700064 */ 	swc1	$f16,0x64($t3)
/*  f002d68:	44814000 */ 	mtc1	$at,$f8
/*  f002d6c:	00000000 */ 	nop
/*  f002d70:	46089480 */ 	add.s	$f18,$f18,$f8
.L0f002d74:
/*  f002d74:	3c014080 */ 	lui	$at,0x4080
/*  f002d78:	44815000 */ 	mtc1	$at,$f10
/*  f002d7c:	8c6a0000 */ 	lw	$t2,0x0($v1)
/*  f002d80:	460a9182 */ 	mul.s	$f6,$f18,$f10
/*  f002d84:	01426021 */ 	addu	$t4,$t2,$v0
/*  f002d88:	e5860068 */ 	swc1	$f6,0x68($t4)
/*  f002d8c:	8c6d0000 */ 	lw	$t5,0x0($v1)
/*  f002d90:	01a27021 */ 	addu	$t6,$t5,$v0
/*  f002d94:	10000054 */ 	b	.L0f002ee8
/*  f002d98:	a5c40054 */ 	sh	$a0,0x54($t6)
/*  f002d9c:	44868000 */ 	mtc1	$a2,$f16
/*  f002da0:	3c017f1a */ 	lui	$at,%hi(var7f1a7db4)
/*  f002da4:	c4207db4 */ 	lwc1	$f0,%lo(var7f1a7db4)($at)
/*  f002da8:	93a4002b */ 	lbu	$a0,0x2b($sp)
/*  f002dac:	04c10005 */ 	bgez	$a2,.L0f002dc4
/*  f002db0:	46808120 */ 	cvt.s.w	$f4,$f16
/*  f002db4:	3c014f80 */ 	lui	$at,0x4f80
/*  f002db8:	44814000 */ 	mtc1	$at,$f8
/*  f002dbc:	00000000 */ 	nop
/*  f002dc0:	46082100 */ 	add.s	$f4,$f4,$f8
.L0f002dc4:
/*  f002dc4:	46002482 */ 	mul.s	$f18,$f4,$f0
/*  f002dc8:	8c6f0000 */ 	lw	$t7,0x0($v1)
/*  f002dcc:	44875000 */ 	mtc1	$a3,$f10
/*  f002dd0:	3c014f80 */ 	lui	$at,0x4f80
/*  f002dd4:	01e2c021 */ 	addu	$t8,$t7,$v0
/*  f002dd8:	468051a0 */ 	cvt.s.w	$f6,$f10
/*  f002ddc:	04e10004 */ 	bgez	$a3,.L0f002df0
/*  f002de0:	e7120060 */ 	swc1	$f18,0x60($t8)
/*  f002de4:	44818000 */ 	mtc1	$at,$f16
/*  f002de8:	00000000 */ 	nop
/*  f002dec:	46103180 */ 	add.s	$f6,$f6,$f16
.L0f002df0:
/*  f002df0:	46003202 */ 	mul.s	$f8,$f6,$f0
/*  f002df4:	8c790000 */ 	lw	$t9,0x0($v1)
/*  f002df8:	44842000 */ 	mtc1	$a0,$f4
/*  f002dfc:	3c014f80 */ 	lui	$at,0x4f80
/*  f002e00:	03224021 */ 	addu	$t0,$t9,$v0
/*  f002e04:	468024a0 */ 	cvt.s.w	$f18,$f4
/*  f002e08:	04810004 */ 	bgez	$a0,.L0f002e1c
/*  f002e0c:	e5080064 */ 	swc1	$f8,0x64($t0)
/*  f002e10:	44815000 */ 	mtc1	$at,$f10
/*  f002e14:	00000000 */ 	nop
/*  f002e18:	460a9480 */ 	add.s	$f18,$f18,$f10
.L0f002e1c:
/*  f002e1c:	3c014080 */ 	lui	$at,0x4080
/*  f002e20:	44818000 */ 	mtc1	$at,$f16
/*  f002e24:	8c690000 */ 	lw	$t1,0x0($v1)
/*  f002e28:	46109182 */ 	mul.s	$f6,$f18,$f16
/*  f002e2c:	01225821 */ 	addu	$t3,$t1,$v0
/*  f002e30:	e5660068 */ 	swc1	$f6,0x68($t3)
/*  f002e34:	8c6a0000 */ 	lw	$t2,0x0($v1)
/*  f002e38:	01426021 */ 	addu	$t4,$t2,$v0
/*  f002e3c:	1000002a */ 	b	.L0f002ee8
/*  f002e40:	a5840054 */ 	sh	$a0,0x54($t4)
/*  f002e44:	44864000 */ 	mtc1	$a2,$f8
/*  f002e48:	3c017f1a */ 	lui	$at,%hi(var7f1a7db8)
/*  f002e4c:	c4207db8 */ 	lwc1	$f0,%lo(var7f1a7db8)($at)
/*  f002e50:	93a4002b */ 	lbu	$a0,0x2b($sp)
/*  f002e54:	04c10005 */ 	bgez	$a2,.L0f002e6c
/*  f002e58:	46804120 */ 	cvt.s.w	$f4,$f8
/*  f002e5c:	3c014f80 */ 	lui	$at,0x4f80
/*  f002e60:	44815000 */ 	mtc1	$at,$f10
/*  f002e64:	00000000 */ 	nop
/*  f002e68:	460a2100 */ 	add.s	$f4,$f4,$f10
.L0f002e6c:
/*  f002e6c:	46002482 */ 	mul.s	$f18,$f4,$f0
/*  f002e70:	8c6d0000 */ 	lw	$t5,0x0($v1)
/*  f002e74:	44878000 */ 	mtc1	$a3,$f16
/*  f002e78:	3c014f80 */ 	lui	$at,0x4f80
/*  f002e7c:	01a27021 */ 	addu	$t6,$t5,$v0
/*  f002e80:	468081a0 */ 	cvt.s.w	$f6,$f16
/*  f002e84:	04e10004 */ 	bgez	$a3,.L0f002e98
/*  f002e88:	e5d20060 */ 	swc1	$f18,0x60($t6)
/*  f002e8c:	44814000 */ 	mtc1	$at,$f8
/*  f002e90:	00000000 */ 	nop
/*  f002e94:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f002e98:
/*  f002e98:	46003282 */ 	mul.s	$f10,$f6,$f0
/*  f002e9c:	8c6f0000 */ 	lw	$t7,0x0($v1)
/*  f002ea0:	44842000 */ 	mtc1	$a0,$f4
/*  f002ea4:	3c014f80 */ 	lui	$at,0x4f80
/*  f002ea8:	01e2c021 */ 	addu	$t8,$t7,$v0
/*  f002eac:	468024a0 */ 	cvt.s.w	$f18,$f4
/*  f002eb0:	04810004 */ 	bgez	$a0,.L0f002ec4
/*  f002eb4:	e70a0064 */ 	swc1	$f10,0x64($t8)
/*  f002eb8:	44818000 */ 	mtc1	$at,$f16
/*  f002ebc:	00000000 */ 	nop
/*  f002ec0:	46109480 */ 	add.s	$f18,$f18,$f16
.L0f002ec4:
/*  f002ec4:	3c014080 */ 	lui	$at,0x4080
/*  f002ec8:	44814000 */ 	mtc1	$at,$f8
/*  f002ecc:	8c790000 */ 	lw	$t9,0x0($v1)
/*  f002ed0:	46089182 */ 	mul.s	$f6,$f18,$f8
/*  f002ed4:	03224021 */ 	addu	$t0,$t9,$v0
/*  f002ed8:	e5060068 */ 	swc1	$f6,0x68($t0)
/*  f002edc:	8c690000 */ 	lw	$t1,0x0($v1)
/*  f002ee0:	01225821 */ 	addu	$t3,$t1,$v0
/*  f002ee4:	a5600054 */ 	sh	$zero,0x54($t3)
.L0f002ee8:
/*  f002ee8:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f002eec:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f002ef0:	03e00008 */ 	jr	$ra
/*  f002ef4:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f002ef8
/*  f002ef8:	0004c0c0 */ 	sll	$t8,$a0,0x3
/*  f002efc:	0304c021 */ 	addu	$t8,$t8,$a0
/*  f002f00:	3c0e800a */ 	lui	$t6,%hi(g_Rooms)
/*  f002f04:	8dce4928 */ 	lw	$t6,%lo(g_Rooms)($t6)
/*  f002f08:	27bdff28 */ 	addiu	$sp,$sp,-216
/*  f002f0c:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f002f10:	0304c023 */ 	subu	$t8,$t8,$a0
/*  f002f14:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f002f18:	afbf0044 */ 	sw	$ra,0x44($sp)
/*  f002f1c:	afa400d8 */ 	sw	$a0,0xd8($sp)
/*  f002f20:	afa500dc */ 	sw	$a1,0xdc($sp)
/*  f002f24:	01d8c821 */ 	addu	$t9,$t6,$t8
/*  f002f28:	972a000a */ 	lhu	$t2,0xa($t9)
/*  f002f2c:	3c0f800a */ 	lui	$t7,%hi(var800a4cd8)
/*  f002f30:	8def4cd8 */ 	lw	$t7,%lo(var800a4cd8)($t7)
/*  f002f34:	01456021 */ 	addu	$t4,$t2,$a1
/*  f002f38:	000c6900 */ 	sll	$t5,$t4,0x4
/*  f002f3c:	01ac6821 */ 	addu	$t5,$t5,$t4
/*  f002f40:	000d6840 */ 	sll	$t5,$t5,0x1
/*  f002f44:	01af1821 */ 	addu	$v1,$t5,$t7
/*  f002f48:	80780005 */ 	lb	$t8,0x5($v1)
/*  f002f4c:	07020004 */ 	bltzl	$t8,.L0f002f60
/*  f002f50:	94790004 */ 	lhu	$t9,0x4($v1)
/*  f002f54:	10000112 */ 	b	.L0f0033a0
/*  f002f58:	00001025 */ 	or	$v0,$zero,$zero
/*  f002f5c:	94790004 */ 	lhu	$t9,0x4($v1)
.L0f002f60:
/*  f002f60:	00195ec0 */ 	sll	$t3,$t9,0x1b
/*  f002f64:	05610102 */ 	bgez	$t3,.L0f003370
/*  f002f68:	00000000 */ 	nop
/*  f002f6c:	0c004b70 */ 	jal	random
/*  f002f70:	afa300d4 */ 	sw	$v1,0xd4($sp)
/*  f002f74:	304c0007 */ 	andi	$t4,$v0,0x7
/*  f002f78:	15800005 */ 	bnez	$t4,.L0f002f90
/*  f002f7c:	8fa300d4 */ 	lw	$v1,0xd4($sp)
/*  f002f80:	906d0005 */ 	lbu	$t5,0x5($v1)
/*  f002f84:	31afffef */ 	andi	$t7,$t5,0xffef
/*  f002f88:	10000104 */ 	b	.L0f00339c
/*  f002f8c:	a06f0005 */ 	sb	$t7,0x5($v1)
.L0f002f90:
/*  f002f90:	0c004b70 */ 	jal	random
/*  f002f94:	afa300d4 */ 	sw	$v1,0xd4($sp)
/*  f002f98:	304e0001 */ 	andi	$t6,$v0,0x1
/*  f002f9c:	15c000ff */ 	bnez	$t6,.L0f00339c
/*  f002fa0:	8fa300d4 */ 	lw	$v1,0xd4($sp)
/*  f002fa4:	0c004b70 */ 	jal	random
/*  f002fa8:	afa300d4 */ 	sw	$v1,0xd4($sp)
/*  f002fac:	44822000 */ 	mtc1	$v0,$f4
/*  f002fb0:	04410005 */ 	bgez	$v0,.L0f002fc8
/*  f002fb4:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f002fb8:	3c014f80 */ 	lui	$at,0x4f80
/*  f002fbc:	44814000 */ 	mtc1	$at,$f8
/*  f002fc0:	00000000 */ 	nop
/*  f002fc4:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f002fc8:
/*  f002fc8:	3c012f80 */ 	lui	$at,0x2f80
/*  f002fcc:	44815000 */ 	mtc1	$at,$f10
/*  f002fd0:	3c013f80 */ 	lui	$at,0x3f80
/*  f002fd4:	44814000 */ 	mtc1	$at,$f8
/*  f002fd8:	460a3002 */ 	mul.s	$f0,$f6,$f10
/*  f002fdc:	46000100 */ 	add.s	$f4,$f0,$f0
/*  f002fe0:	46082301 */ 	sub.s	$f12,$f4,$f8
/*  f002fe4:	0c004b70 */ 	jal	random
/*  f002fe8:	e7ac0070 */ 	swc1	$f12,0x70($sp)
/*  f002fec:	44823000 */ 	mtc1	$v0,$f6
/*  f002ff0:	8fa300d4 */ 	lw	$v1,0xd4($sp)
/*  f002ff4:	c7ac0070 */ 	lwc1	$f12,0x70($sp)
/*  f002ff8:	04410005 */ 	bgez	$v0,.L0f003010
/*  f002ffc:	468032a0 */ 	cvt.s.w	$f10,$f6
/*  f003000:	3c014f80 */ 	lui	$at,0x4f80
/*  f003004:	44812000 */ 	mtc1	$at,$f4
/*  f003008:	00000000 */ 	nop
/*  f00300c:	46045280 */ 	add.s	$f10,$f10,$f4
.L0f003010:
/*  f003010:	3c012f80 */ 	lui	$at,0x2f80
/*  f003014:	44814000 */ 	mtc1	$at,$f8
/*  f003018:	3c013f80 */ 	lui	$at,0x3f80
/*  f00301c:	44812000 */ 	mtc1	$at,$f4
/*  f003020:	46085002 */ 	mul.s	$f0,$f10,$f8
/*  f003024:	2409ffff */ 	addiu	$t1,$zero,-1
/*  f003028:	3c077f1a */ 	lui	$a3,%hi(var7f1a7bb4)
/*  f00302c:	24e77bb4 */ 	addiu	$a3,$a3,%lo(var7f1a7bb4)
/*  f003030:	2406060a */ 	addiu	$a2,$zero,0x60a
/*  f003034:	46000180 */ 	add.s	$f6,$f0,$f0
/*  f003038:	46043081 */ 	sub.s	$f2,$f6,$f4
/*  f00303c:	e7a2006c */ 	swc1	$f2,0x6c($sp)
/*  f003040:	8468000a */ 	lh	$t0,0xa($v1)
/*  f003044:	84780010 */ 	lh	$t8,0x10($v1)
/*  f003048:	846f0016 */ 	lh	$t7,0x16($v1)
/*  f00304c:	846a0012 */ 	lh	$t2,0x12($v1)
/*  f003050:	0308c823 */ 	subu	$t9,$t8,$t0
/*  f003054:	44995000 */ 	mtc1	$t9,$f10
/*  f003058:	01e87023 */ 	subu	$t6,$t7,$t0
/*  f00305c:	448e2000 */ 	mtc1	$t6,$f4
/*  f003060:	468053a0 */ 	cvt.s.w	$f14,$f10
/*  f003064:	8464000c */ 	lh	$a0,0xc($v1)
/*  f003068:	846c0014 */ 	lh	$t4,0x14($v1)
/*  f00306c:	8465000e */ 	lh	$a1,0xe($v1)
/*  f003070:	01445823 */ 	subu	$t3,$t2,$a0
/*  f003074:	468022a0 */ 	cvt.s.w	$f10,$f4
/*  f003078:	448b4000 */ 	mtc1	$t3,$f8
/*  f00307c:	01856823 */ 	subu	$t5,$t4,$a1
/*  f003080:	448d3000 */ 	mtc1	$t5,$f6
/*  f003084:	460e6382 */ 	mul.s	$f14,$f12,$f14
/*  f003088:	e7aa00bc */ 	swc1	$f10,0xbc($sp)
/*  f00308c:	84780018 */ 	lh	$t8,0x18($v1)
/*  f003090:	46804420 */ 	cvt.s.w	$f16,$f8
/*  f003094:	0304c823 */ 	subu	$t9,$t8,$a0
/*  f003098:	44994000 */ 	mtc1	$t9,$f8
/*  f00309c:	27a40098 */ 	addiu	$a0,$sp,0x98
/*  f0030a0:	468034a0 */ 	cvt.s.w	$f18,$f6
/*  f0030a4:	46106402 */ 	mul.s	$f16,$f12,$f16
/*  f0030a8:	00000000 */ 	nop
/*  f0030ac:	46126482 */ 	mul.s	$f18,$f12,$f18
/*  f0030b0:	c7ac006c */ 	lwc1	$f12,0x6c($sp)
/*  f0030b4:	468041a0 */ 	cvt.s.w	$f6,$f8
/*  f0030b8:	e7a600c0 */ 	swc1	$f6,0xc0($sp)
/*  f0030bc:	846a001a */ 	lh	$t2,0x1a($v1)
/*  f0030c0:	01455823 */ 	subu	$t3,$t2,$a1
/*  f0030c4:	448b2000 */ 	mtc1	$t3,$f4
/*  f0030c8:	27a500a4 */ 	addiu	$a1,$sp,0xa4
/*  f0030cc:	46802220 */ 	cvt.s.w	$f8,$f4
/*  f0030d0:	460a1102 */ 	mul.s	$f4,$f2,$f10
/*  f0030d4:	44885000 */ 	mtc1	$t0,$f10
/*  f0030d8:	46066002 */ 	mul.s	$f0,$f12,$f6
/*  f0030dc:	e7a800c4 */ 	swc1	$f8,0xc4($sp)
/*  f0030e0:	46086082 */ 	mul.s	$f2,$f12,$f8
/*  f0030e4:	e7a400bc */ 	swc1	$f4,0xbc($sp)
/*  f0030e8:	c7a800bc */ 	lwc1	$f8,0xbc($sp)
/*  f0030ec:	46805120 */ 	cvt.s.w	$f4,$f10
/*  f0030f0:	460e2180 */ 	add.s	$f6,$f4,$f14
/*  f0030f4:	46083280 */ 	add.s	$f10,$f6,$f8
/*  f0030f8:	e7aa0098 */ 	swc1	$f10,0x98($sp)
/*  f0030fc:	846c000a */ 	lh	$t4,0xa($v1)
/*  f003100:	448c2000 */ 	mtc1	$t4,$f4
/*  f003104:	00000000 */ 	nop
/*  f003108:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f00310c:	46103200 */ 	add.s	$f8,$f6,$f16
/*  f003110:	46004280 */ 	add.s	$f10,$f8,$f0
/*  f003114:	e7aa009c */ 	swc1	$f10,0x9c($sp)
/*  f003118:	846d000a */ 	lh	$t5,0xa($v1)
/*  f00311c:	448d2000 */ 	mtc1	$t5,$f4
/*  f003120:	00000000 */ 	nop
/*  f003124:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f003128:	46123200 */ 	add.s	$f8,$f6,$f18
/*  f00312c:	46024280 */ 	add.s	$f10,$f8,$f2
/*  f003130:	e7aa00a0 */ 	swc1	$f10,0xa0($sp)
/*  f003134:	806f0007 */ 	lb	$t7,0x7($v1)
/*  f003138:	448f2000 */ 	mtc1	$t7,$f4
/*  f00313c:	00000000 */ 	nop
/*  f003140:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f003144:	e7a6008c */ 	swc1	$f6,0x8c($sp)
/*  f003148:	806e0008 */ 	lb	$t6,0x8($v1)
/*  f00314c:	448e4000 */ 	mtc1	$t6,$f8
/*  f003150:	00000000 */ 	nop
/*  f003154:	468042a0 */ 	cvt.s.w	$f10,$f8
/*  f003158:	c7a8008c */ 	lwc1	$f8,0x8c($sp)
/*  f00315c:	e7aa0090 */ 	swc1	$f10,0x90($sp)
/*  f003160:	80780009 */ 	lb	$t8,0x9($v1)
/*  f003164:	46004287 */ 	neg.s	$f10,$f8
/*  f003168:	afa90068 */ 	sw	$t1,0x68($sp)
/*  f00316c:	44982000 */ 	mtc1	$t8,$f4
/*  f003170:	e7aa0080 */ 	swc1	$f10,0x80($sp)
/*  f003174:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f003178:	c7a40090 */ 	lwc1	$f4,0x90($sp)
/*  f00317c:	e7a60094 */ 	swc1	$f6,0x94($sp)
/*  f003180:	c7a80094 */ 	lwc1	$f8,0x94($sp)
/*  f003184:	46002187 */ 	neg.s	$f6,$f4
/*  f003188:	46004287 */ 	neg.s	$f10,$f8
/*  f00318c:	e7a60084 */ 	swc1	$f6,0x84($sp)
/*  f003190:	0fc5dc59 */ 	jal	func0f177164
/*  f003194:	e7aa0088 */ 	swc1	$f10,0x88($sp)
/*  f003198:	c7b200a4 */ 	lwc1	$f18,0xa4($sp)
/*  f00319c:	c7b00080 */ 	lwc1	$f16,0x80($sp)
/*  f0031a0:	c7ae00a8 */ 	lwc1	$f14,0xa8($sp)
/*  f0031a4:	c7ac0084 */ 	lwc1	$f12,0x84($sp)
/*  f0031a8:	46109400 */ 	add.s	$f16,$f18,$f16
/*  f0031ac:	c7b200ac */ 	lwc1	$f18,0xac($sp)
/*  f0031b0:	c7aa0088 */ 	lwc1	$f10,0x88($sp)
/*  f0031b4:	460c7300 */ 	add.s	$f12,$f14,$f12
/*  f0031b8:	27a400a4 */ 	addiu	$a0,$sp,0xa4
/*  f0031bc:	3c077f1a */ 	lui	$a3,%hi(var7f1a7bc0)
/*  f0031c0:	460a9280 */ 	add.s	$f10,$f18,$f10
/*  f0031c4:	e7b000a4 */ 	swc1	$f16,0xa4($sp)
/*  f0031c8:	e7ac00a8 */ 	swc1	$f12,0xa8($sp)
/*  f0031cc:	00802825 */ 	or	$a1,$a0,$zero
/*  f0031d0:	e7aa00ac */ 	swc1	$f10,0xac($sp)
/*  f0031d4:	2406060c */ 	addiu	$a2,$zero,0x60c
/*  f0031d8:	0fc5dc59 */ 	jal	func0f177164
/*  f0031dc:	24e77bc0 */ 	addiu	$a3,$a3,%lo(var7f1a7bc0)
/*  f0031e0:	8fa400d8 */ 	lw	$a0,0xd8($sp)
/*  f0031e4:	0004c880 */ 	sll	$t9,$a0,0x2
/*  f0031e8:	0324c821 */ 	addu	$t9,$t9,$a0
/*  f0031ec:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f0031f0:	0c004b70 */ 	jal	random
/*  f0031f4:	afb90058 */ 	sw	$t9,0x58($sp)
/*  f0031f8:	30430003 */ 	andi	$v1,$v0,0x3
/*  f0031fc:	1060000a */ 	beqz	$v1,.L0f003228
/*  f003200:	8fa90068 */ 	lw	$t1,0x68($sp)
/*  f003204:	24010001 */ 	addiu	$at,$zero,0x1
/*  f003208:	10610009 */ 	beq	$v1,$at,.L0f003230
/*  f00320c:	24010002 */ 	addiu	$at,$zero,0x2
/*  f003210:	10610009 */ 	beq	$v1,$at,.L0f003238
/*  f003214:	24010003 */ 	addiu	$at,$zero,0x3
/*  f003218:	5061000a */ 	beql	$v1,$at,.L0f003244
/*  f00321c:	24090014 */ 	addiu	$t1,$zero,0x14
/*  f003220:	10000009 */ 	b	.L0f003248
/*  f003224:	8fa400d8 */ 	lw	$a0,0xd8($sp)
.L0f003228:
/*  f003228:	10000006 */ 	b	.L0f003244
/*  f00322c:	24090011 */ 	addiu	$t1,$zero,0x11
.L0f003230:
/*  f003230:	10000004 */ 	b	.L0f003244
/*  f003234:	24090012 */ 	addiu	$t1,$zero,0x12
.L0f003238:
/*  f003238:	10000002 */ 	b	.L0f003244
/*  f00323c:	24090013 */ 	addiu	$t1,$zero,0x13
/*  f003240:	24090014 */ 	addiu	$t1,$zero,0x14
.L0f003244:
/*  f003244:	8fa400d8 */ 	lw	$a0,0xd8($sp)
.L0f003248:
/*  f003248:	8fa500dc */ 	lw	$a1,0xdc($sp)
/*  f00324c:	27a60074 */ 	addiu	$a2,$sp,0x74
/*  f003250:	0fc0037f */ 	jal	func0f000dfc
/*  f003254:	afa90068 */ 	sw	$t1,0x68($sp)
/*  f003258:	3c0b800a */ 	lui	$t3,%hi(var800a4cc4)
/*  f00325c:	8d6b4cc4 */ 	lw	$t3,%lo(var800a4cc4)($t3)
/*  f003260:	8fac0058 */ 	lw	$t4,0x58($sp)
/*  f003264:	c7a60074 */ 	lwc1	$f6,0x74($sp)
/*  f003268:	c7a40078 */ 	lwc1	$f4,0x78($sp)
/*  f00326c:	016c1821 */ 	addu	$v1,$t3,$t4
/*  f003270:	c4680004 */ 	lwc1	$f8,0x4($v1)
/*  f003274:	8fa90068 */ 	lw	$t1,0x68($sp)
/*  f003278:	27ad008c */ 	addiu	$t5,$sp,0x8c
/*  f00327c:	46083280 */ 	add.s	$f10,$f6,$f8
/*  f003280:	8fa400d8 */ 	lw	$a0,0xd8($sp)
/*  f003284:	00002825 */ 	or	$a1,$zero,$zero
/*  f003288:	27a60074 */ 	addiu	$a2,$sp,0x74
/*  f00328c:	e7aa0074 */ 	swc1	$f10,0x74($sp)
/*  f003290:	c4660008 */ 	lwc1	$f6,0x8($v1)
/*  f003294:	c7aa007c */ 	lwc1	$f10,0x7c($sp)
/*  f003298:	27a700a4 */ 	addiu	$a3,$sp,0xa4
/*  f00329c:	46062200 */ 	add.s	$f8,$f4,$f6
/*  f0032a0:	e7a80078 */ 	swc1	$f8,0x78($sp)
/*  f0032a4:	c464000c */ 	lwc1	$f4,0xc($v1)
/*  f0032a8:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f0032ac:	afa90014 */ 	sw	$t1,0x14($sp)
/*  f0032b0:	46045180 */ 	add.s	$f6,$f10,$f4
/*  f0032b4:	0fc4be7c */ 	jal	func0f12f9f0
/*  f0032b8:	e7a6007c */ 	swc1	$f6,0x7c($sp)
/*  f0032bc:	0c004b70 */ 	jal	random
/*  f0032c0:	00000000 */ 	nop
/*  f0032c4:	304f0003 */ 	andi	$t7,$v0,0x3
/*  f0032c8:	15e00008 */ 	bnez	$t7,.L0f0032ec
/*  f0032cc:	8fae00d8 */ 	lw	$t6,0xd8($sp)
/*  f0032d0:	2418ffff */ 	addiu	$t8,$zero,-1
/*  f0032d4:	a7ae0064 */ 	sh	$t6,0x64($sp)
/*  f0032d8:	a7b80066 */ 	sh	$t8,0x66($sp)
/*  f0032dc:	27a40074 */ 	addiu	$a0,$sp,0x74
/*  f0032e0:	27a50064 */ 	addiu	$a1,$sp,0x64
/*  f0032e4:	0fc4ba08 */ 	jal	smokeCreateSimple
/*  f0032e8:	24060007 */ 	addiu	$a2,$zero,0x7
.L0f0032ec:
/*  f0032ec:	8fa400d8 */ 	lw	$a0,0xd8($sp)
/*  f0032f0:	24050040 */ 	addiu	$a1,$zero,0x40
/*  f0032f4:	0fc010e3 */ 	jal	func0f00438c
/*  f0032f8:	24060050 */ 	addiu	$a2,$zero,0x50
/*  f0032fc:	0fc25480 */ 	jal	func0f095200
/*  f003300:	00000000 */ 	nop
/*  f003304:	3c01bf80 */ 	lui	$at,0xbf80
/*  f003308:	44810000 */ 	mtc1	$at,$f0
/*  f00330c:	8faf00d8 */ 	lw	$t7,0xd8($sp)
/*  f003310:	00023400 */ 	sll	$a2,$v0,0x10
/*  f003314:	0006cc03 */ 	sra	$t9,$a2,0x10
/*  f003318:	240affff */ 	addiu	$t2,$zero,-1
/*  f00331c:	240b0400 */ 	addiu	$t3,$zero,0x400
/*  f003320:	240c0010 */ 	addiu	$t4,$zero,0x10
/*  f003324:	27ad0074 */ 	addiu	$t5,$sp,0x74
/*  f003328:	afad0020 */ 	sw	$t5,0x20($sp)
/*  f00332c:	afac001c */ 	sw	$t4,0x1c($sp)
/*  f003330:	afab0014 */ 	sw	$t3,0x14($sp)
/*  f003334:	afaa0010 */ 	sw	$t2,0x10($sp)
/*  f003338:	03203025 */ 	or	$a2,$t9,$zero
/*  f00333c:	00002025 */ 	or	$a0,$zero,$zero
/*  f003340:	00002825 */ 	or	$a1,$zero,$zero
/*  f003344:	2407ffff */ 	addiu	$a3,$zero,-1
/*  f003348:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f00334c:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f003350:	afaf002c */ 	sw	$t7,0x2c($sp)
/*  f003354:	e7a00024 */ 	swc1	$f0,0x24($sp)
/*  f003358:	e7a00030 */ 	swc1	$f0,0x30($sp)
/*  f00335c:	e7a00034 */ 	swc1	$f0,0x34($sp)
/*  f003360:	0fc24e7e */ 	jal	func0f0939f8
/*  f003364:	e7a00038 */ 	swc1	$f0,0x38($sp)
/*  f003368:	1000000d */ 	b	.L0f0033a0
/*  f00336c:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f003370:
/*  f003370:	0c004b70 */ 	jal	random
/*  f003374:	afa300d4 */ 	sw	$v1,0xd4($sp)
/*  f003378:	24010050 */ 	addiu	$at,$zero,0x50
/*  f00337c:	0041001b */ 	divu	$zero,$v0,$at
/*  f003380:	00007010 */ 	mfhi	$t6
/*  f003384:	8fa300d4 */ 	lw	$v1,0xd4($sp)
/*  f003388:	55c00005 */ 	bnezl	$t6,.L0f0033a0
/*  f00338c:	00001025 */ 	or	$v0,$zero,$zero
/*  f003390:	90790005 */ 	lbu	$t9,0x5($v1)
/*  f003394:	372a0010 */ 	ori	$t2,$t9,0x10
/*  f003398:	a06a0005 */ 	sb	$t2,0x5($v1)
.L0f00339c:
/*  f00339c:	00001025 */ 	or	$v0,$zero,$zero
.L0f0033a0:
/*  f0033a0:	8fbf0044 */ 	lw	$ra,0x44($sp)
/*  f0033a4:	27bd00d8 */ 	addiu	$sp,$sp,0xd8
/*  f0033a8:	03e00008 */ 	jr	$ra
/*  f0033ac:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f0033b0
/*  f0033b0:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f0033b4:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f0033b8:	0fc00deb */ 	jal	func0f0037ac
/*  f0033bc:	00000000 */ 	nop
/*  f0033c0:	3c07800a */ 	lui	$a3,%hi(g_Vars)
/*  f0033c4:	24e79fc0 */ 	addiu	$a3,$a3,%lo(g_Vars)
/*  f0033c8:	90ee04e1 */ 	lbu	$t6,0x4e1($a3)
/*  f0033cc:	51c0001a */ 	beqzl	$t6,.L0f003438
/*  f0033d0:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0033d4:	0fc5048d */ 	jal	func0f141234
/*  f0033d8:	00000000 */ 	nop
/*  f0033dc:	3c07800a */ 	lui	$a3,%hi(g_Vars)
/*  f0033e0:	24e79fc0 */ 	addiu	$a3,$a3,%lo(g_Vars)
/*  f0033e4:	8cef02bc */ 	lw	$t7,0x2bc($a3)
/*  f0033e8:	a0e004e1 */ 	sb	$zero,0x4e1($a3)
/*  f0033ec:	24030001 */ 	addiu	$v1,$zero,0x1
/*  f0033f0:	29e10002 */ 	slti	$at,$t7,0x2
/*  f0033f4:	1420000f */ 	bnez	$at,.L0f003434
/*  f0033f8:	2404008c */ 	addiu	$a0,$zero,0x8c
/*  f0033fc:	3c05800a */ 	lui	$a1,%hi(g_Rooms)
/*  f003400:	24a54928 */ 	addiu	$a1,$a1,%lo(g_Rooms)
/*  f003404:	2406efff */ 	addiu	$a2,$zero,-4097
/*  f003408:	8cb80000 */ 	lw	$t8,0x0($a1)
.L0f00340c:
/*  f00340c:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f003410:	03041021 */ 	addu	$v0,$t8,$a0
/*  f003414:	94590000 */ 	lhu	$t9,0x0($v0)
/*  f003418:	2484008c */ 	addiu	$a0,$a0,0x8c
/*  f00341c:	03264024 */ 	and	$t0,$t9,$a2
/*  f003420:	a4480000 */ 	sh	$t0,0x0($v0)
/*  f003424:	8ce902bc */ 	lw	$t1,0x2bc($a3)
/*  f003428:	0069082a */ 	slt	$at,$v1,$t1
/*  f00342c:	5420fff7 */ 	bnezl	$at,.L0f00340c
/*  f003430:	8cb80000 */ 	lw	$t8,0x0($a1)
.L0f003434:
/*  f003434:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f003438:
/*  f003438:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f00343c:	03e00008 */ 	jr	$ra
/*  f003440:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f003444
/*  f003444:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f003448:	afb70038 */ 	sw	$s7,0x38($sp)
/*  f00344c:	3c17800a */ 	lui	$s7,%hi(g_Vars)
/*  f003450:	26f79fc0 */ 	addiu	$s7,$s7,%lo(g_Vars)
/*  f003454:	8eee02bc */ 	lw	$t6,0x2bc($s7)
/*  f003458:	afb4002c */ 	sw	$s4,0x2c($sp)
/*  f00345c:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f003460:	afb60034 */ 	sw	$s6,0x34($sp)
/*  f003464:	afb50030 */ 	sw	$s5,0x30($sp)
/*  f003468:	afb30028 */ 	sw	$s3,0x28($sp)
/*  f00346c:	afb20024 */ 	sw	$s2,0x24($sp)
/*  f003470:	afb10020 */ 	sw	$s1,0x20($sp)
/*  f003474:	afb0001c */ 	sw	$s0,0x1c($sp)
/*  f003478:	f7b40010 */ 	sdc1	$f20,0x10($sp)
/*  f00347c:	19c00044 */ 	blez	$t6,.L0f003590
/*  f003480:	0000a025 */ 	or	$s4,$zero,$zero
/*  f003484:	3c013f00 */ 	lui	$at,0x3f00
/*  f003488:	3c02800a */ 	lui	$v0,%hi(g_Rooms)
/*  f00348c:	3c16800a */ 	lui	$s6,%hi(var800a4cd8)
/*  f003490:	3c12800a */ 	lui	$s2,%hi(g_Rooms)
/*  f003494:	4481a000 */ 	mtc1	$at,$f20
/*  f003498:	26524928 */ 	addiu	$s2,$s2,%lo(g_Rooms)
/*  f00349c:	26d64cd8 */ 	addiu	$s6,$s6,%lo(var800a4cd8)
/*  f0034a0:	8c424928 */ 	lw	$v0,%lo(g_Rooms)($v0)
/*  f0034a4:	00009825 */ 	or	$s3,$zero,$zero
/*  f0034a8:	24150022 */ 	addiu	$s5,$zero,0x22
.L0f0034ac:
/*  f0034ac:	9048004e */ 	lbu	$t0,0x4e($v0)
/*  f0034b0:	944f000a */ 	lhu	$t7,0xa($v0)
/*  f0034b4:	8ed90000 */ 	lw	$t9,0x0($s6)
/*  f0034b8:	3109ff0f */ 	andi	$t1,$t0,0xff0f
/*  f0034bc:	352a0010 */ 	ori	$t2,$t1,0x10
/*  f0034c0:	a04a004e */ 	sb	$t2,0x4e($v0)
/*  f0034c4:	8e4b0000 */ 	lw	$t3,0x0($s2)
/*  f0034c8:	01f50019 */ 	multu	$t7,$s5
/*  f0034cc:	00008825 */ 	or	$s1,$zero,$zero
/*  f0034d0:	01736021 */ 	addu	$t4,$t3,$s3
/*  f0034d4:	e5940060 */ 	swc1	$f20,0x60($t4)
/*  f0034d8:	8e4d0000 */ 	lw	$t5,0x0($s2)
/*  f0034dc:	01b31021 */ 	addu	$v0,$t5,$s3
/*  f0034e0:	804e0008 */ 	lb	$t6,0x8($v0)
/*  f0034e4:	0000c012 */ 	mflo	$t8
/*  f0034e8:	03198021 */ 	addu	$s0,$t8,$t9
/*  f0034ec:	59c00023 */ 	blezl	$t6,.L0f00357c
/*  f0034f0:	8ef902bc */ 	lw	$t9,0x2bc($s7)
.L0f0034f4:
/*  f0034f4:	0c004b70 */ 	jal	random
/*  f0034f8:	00000000 */ 	nop
/*  f0034fc:	304f0001 */ 	andi	$t7,$v0,0x1
/*  f003500:	51e00006 */ 	beqzl	$t7,.L0f00351c
/*  f003504:	92090005 */ 	lbu	$t1,0x5($s0)
/*  f003508:	92190005 */ 	lbu	$t9,0x5($s0)
/*  f00350c:	37280080 */ 	ori	$t0,$t9,0x80
/*  f003510:	10000004 */ 	b	.L0f003524
/*  f003514:	a2080005 */ 	sb	$t0,0x5($s0)
/*  f003518:	92090005 */ 	lbu	$t1,0x5($s0)
.L0f00351c:
/*  f00351c:	312aff7f */ 	andi	$t2,$t1,0xff7f
/*  f003520:	a20a0005 */ 	sb	$t2,0x5($s0)
.L0f003524:
/*  f003524:	920c0005 */ 	lbu	$t4,0x5($s0)
/*  f003528:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f00352c:	26100022 */ 	addiu	$s0,$s0,0x22
/*  f003530:	358f0040 */ 	ori	$t7,$t4,0x40
/*  f003534:	35f90020 */ 	ori	$t9,$t7,0x20
/*  f003538:	a20fffe3 */ 	sb	$t7,-0x1d($s0)
/*  f00353c:	332a00ef */ 	andi	$t2,$t9,0xef
/*  f003540:	a219ffe3 */ 	sb	$t9,-0x1d($s0)
/*  f003544:	a20affe3 */ 	sb	$t2,-0x1d($s0)
/*  f003548:	354b0008 */ 	ori	$t3,$t2,0x8
/*  f00354c:	a20bffe3 */ 	sb	$t3,-0x1d($s0)
/*  f003550:	8e4c0000 */ 	lw	$t4,0x0($s2)
/*  f003554:	01936821 */ 	addu	$t5,$t4,$s3
/*  f003558:	91ae004a */ 	lbu	$t6,0x4a($t5)
/*  f00355c:	a20effe2 */ 	sb	$t6,-0x1e($s0)
/*  f003560:	8e4f0000 */ 	lw	$t7,0x0($s2)
/*  f003564:	01f31021 */ 	addu	$v0,$t7,$s3
/*  f003568:	80580008 */ 	lb	$t8,0x8($v0)
/*  f00356c:	0238082a */ 	slt	$at,$s1,$t8
/*  f003570:	1420ffe0 */ 	bnez	$at,.L0f0034f4
/*  f003574:	00000000 */ 	nop
/*  f003578:	8ef902bc */ 	lw	$t9,0x2bc($s7)
.L0f00357c:
/*  f00357c:	26940001 */ 	addiu	$s4,$s4,0x1
/*  f003580:	2673008c */ 	addiu	$s3,$s3,0x8c
/*  f003584:	0299082a */ 	slt	$at,$s4,$t9
/*  f003588:	1420ffc8 */ 	bnez	$at,.L0f0034ac
/*  f00358c:	2442008c */ 	addiu	$v0,$v0,140
.L0f003590:
/*  f003590:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f003594:	d7b40010 */ 	ldc1	$f20,0x10($sp)
/*  f003598:	8fb0001c */ 	lw	$s0,0x1c($sp)
/*  f00359c:	8fb10020 */ 	lw	$s1,0x20($sp)
/*  f0035a0:	8fb20024 */ 	lw	$s2,0x24($sp)
/*  f0035a4:	8fb30028 */ 	lw	$s3,0x28($sp)
/*  f0035a8:	8fb4002c */ 	lw	$s4,0x2c($sp)
/*  f0035ac:	8fb50030 */ 	lw	$s5,0x30($sp)
/*  f0035b0:	8fb60034 */ 	lw	$s6,0x34($sp)
/*  f0035b4:	8fb70038 */ 	lw	$s7,0x38($sp)
/*  f0035b8:	03e00008 */ 	jr	$ra
/*  f0035bc:	27bd0040 */ 	addiu	$sp,$sp,0x40
);

GLOBAL_ASM(
glabel func0f0035c0
/*  f0035c0:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f0035c4:	afb70038 */ 	sw	$s7,0x38($sp)
/*  f0035c8:	3c17800a */ 	lui	$s7,%hi(g_Vars)
/*  f0035cc:	26f79fc0 */ 	addiu	$s7,$s7,%lo(g_Vars)
/*  f0035d0:	8eee02bc */ 	lw	$t6,0x2bc($s7)
/*  f0035d4:	afb4002c */ 	sw	$s4,0x2c($sp)
/*  f0035d8:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f0035dc:	afb60034 */ 	sw	$s6,0x34($sp)
/*  f0035e0:	afb50030 */ 	sw	$s5,0x30($sp)
/*  f0035e4:	afb30028 */ 	sw	$s3,0x28($sp)
/*  f0035e8:	afb20024 */ 	sw	$s2,0x24($sp)
/*  f0035ec:	afb10020 */ 	sw	$s1,0x20($sp)
/*  f0035f0:	afb0001c */ 	sw	$s0,0x1c($sp)
/*  f0035f4:	f7b40010 */ 	sdc1	$f20,0x10($sp)
/*  f0035f8:	19c00040 */ 	blez	$t6,.L0f0036fc
/*  f0035fc:	0000a025 */ 	or	$s4,$zero,$zero
/*  f003600:	3c02800a */ 	lui	$v0,%hi(g_Rooms)
/*  f003604:	3c16800a */ 	lui	$s6,%hi(var800a4cd8)
/*  f003608:	3c12800a */ 	lui	$s2,%hi(g_Rooms)
/*  f00360c:	4480a000 */ 	mtc1	$zero,$f20
/*  f003610:	26524928 */ 	addiu	$s2,$s2,%lo(g_Rooms)
/*  f003614:	26d64cd8 */ 	addiu	$s6,$s6,%lo(var800a4cd8)
/*  f003618:	8c424928 */ 	lw	$v0,%lo(g_Rooms)($v0)
/*  f00361c:	00009825 */ 	or	$s3,$zero,$zero
/*  f003620:	24150022 */ 	addiu	$s5,$zero,0x22
.L0f003624:
/*  f003624:	9048004e */ 	lbu	$t0,0x4e($v0)
/*  f003628:	944f000a */ 	lhu	$t7,0xa($v0)
/*  f00362c:	8ed90000 */ 	lw	$t9,0x0($s6)
/*  f003630:	3109ff0f */ 	andi	$t1,$t0,0xff0f
/*  f003634:	352a0010 */ 	ori	$t2,$t1,0x10
/*  f003638:	a04a004e */ 	sb	$t2,0x4e($v0)
/*  f00363c:	8e4b0000 */ 	lw	$t3,0x0($s2)
/*  f003640:	01f50019 */ 	multu	$t7,$s5
/*  f003644:	00008825 */ 	or	$s1,$zero,$zero
/*  f003648:	01736021 */ 	addu	$t4,$t3,$s3
/*  f00364c:	e5940060 */ 	swc1	$f20,0x60($t4)
/*  f003650:	8e4d0000 */ 	lw	$t5,0x0($s2)
/*  f003654:	01b31021 */ 	addu	$v0,$t5,$s3
/*  f003658:	804e0008 */ 	lb	$t6,0x8($v0)
/*  f00365c:	0000c012 */ 	mflo	$t8
/*  f003660:	03198021 */ 	addu	$s0,$t8,$t9
/*  f003664:	59c00020 */ 	blezl	$t6,.L0f0036e8
/*  f003668:	8eeb02bc */ 	lw	$t3,0x2bc($s7)
.L0f00366c:
/*  f00366c:	0c004b70 */ 	jal	random
/*  f003670:	00000000 */ 	nop
/*  f003674:	304f0001 */ 	andi	$t7,$v0,0x1
/*  f003678:	51e00006 */ 	beqzl	$t7,.L0f003694
/*  f00367c:	92090005 */ 	lbu	$t1,0x5($s0)
/*  f003680:	92190005 */ 	lbu	$t9,0x5($s0)
/*  f003684:	37280080 */ 	ori	$t0,$t9,0x80
/*  f003688:	10000004 */ 	b	.L0f00369c
/*  f00368c:	a2080005 */ 	sb	$t0,0x5($s0)
/*  f003690:	92090005 */ 	lbu	$t1,0x5($s0)
.L0f003694:
/*  f003694:	312aff7f */ 	andi	$t2,$t1,0xff7f
/*  f003698:	a20a0005 */ 	sb	$t2,0x5($s0)
.L0f00369c:
/*  f00369c:	920b0005 */ 	lbu	$t3,0x5($s0)
/*  f0036a0:	a2000004 */ 	sb	$zero,0x4($s0)
/*  f0036a4:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f0036a8:	316dffbf */ 	andi	$t5,$t3,0xffbf
/*  f0036ac:	31af00df */ 	andi	$t7,$t5,0xdf
/*  f0036b0:	a20d0005 */ 	sb	$t5,0x5($s0)
/*  f0036b4:	31f900ef */ 	andi	$t9,$t7,0xef
/*  f0036b8:	a20f0005 */ 	sb	$t7,0x5($s0)
/*  f0036bc:	a2190005 */ 	sb	$t9,0x5($s0)
/*  f0036c0:	332800f7 */ 	andi	$t0,$t9,0xf7
/*  f0036c4:	a2080005 */ 	sb	$t0,0x5($s0)
/*  f0036c8:	8e490000 */ 	lw	$t1,0x0($s2)
/*  f0036cc:	26100022 */ 	addiu	$s0,$s0,0x22
/*  f0036d0:	01331021 */ 	addu	$v0,$t1,$s3
/*  f0036d4:	804a0008 */ 	lb	$t2,0x8($v0)
/*  f0036d8:	022a082a */ 	slt	$at,$s1,$t2
/*  f0036dc:	1420ffe3 */ 	bnez	$at,.L0f00366c
/*  f0036e0:	00000000 */ 	nop
/*  f0036e4:	8eeb02bc */ 	lw	$t3,0x2bc($s7)
.L0f0036e8:
/*  f0036e8:	26940001 */ 	addiu	$s4,$s4,0x1
/*  f0036ec:	2673008c */ 	addiu	$s3,$s3,0x8c
/*  f0036f0:	028b082a */ 	slt	$at,$s4,$t3
/*  f0036f4:	1420ffcb */ 	bnez	$at,.L0f003624
/*  f0036f8:	2442008c */ 	addiu	$v0,$v0,140
.L0f0036fc:
/*  f0036fc:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f003700:	d7b40010 */ 	ldc1	$f20,0x10($sp)
/*  f003704:	8fb0001c */ 	lw	$s0,0x1c($sp)
/*  f003708:	8fb10020 */ 	lw	$s1,0x20($sp)
/*  f00370c:	8fb20024 */ 	lw	$s2,0x24($sp)
/*  f003710:	8fb30028 */ 	lw	$s3,0x28($sp)
/*  f003714:	8fb4002c */ 	lw	$s4,0x2c($sp)
/*  f003718:	8fb50030 */ 	lw	$s5,0x30($sp)
/*  f00371c:	8fb60034 */ 	lw	$s6,0x34($sp)
/*  f003720:	8fb70038 */ 	lw	$s7,0x38($sp)
/*  f003724:	03e00008 */ 	jr	$ra
/*  f003728:	27bd0040 */ 	addiu	$sp,$sp,0x40
);

GLOBAL_ASM(
glabel func0f00372c
/*  f00372c:	3c038006 */ 	lui	$v1,%hi(var80061458)
/*  f003730:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x2ac)
/*  f003734:	8c42a26c */ 	lw	$v0,%lo(g_Vars+0x2ac)($v0)
/*  f003738:	8c631458 */ 	lw	$v1,%lo(var80061458)($v1)
/*  f00373c:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f003740:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f003744:	10620015 */ 	beq	$v1,$v0,.L0f00379c
/*  f003748:	24040006 */ 	addiu	$a0,$zero,0x6
/*  f00374c:	54440009 */ 	bnel	$v0,$a0,.L0f003774
/*  f003750:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f003754:	50640007 */ 	beql	$v1,$a0,.L0f003774
/*  f003758:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f00375c:	0fc00d11 */ 	jal	func0f003444
/*  f003760:	00000000 */ 	nop
/*  f003764:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x2ac)
/*  f003768:	1000000a */ 	b	.L0f003794
/*  f00376c:	8c42a26c */ 	lw	$v0,%lo(g_Vars+0x2ac)($v0)
/*  f003770:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f003774:
/*  f003774:	14440007 */ 	bne	$v0,$a0,.L0f003794
/*  f003778:	00000000 */ 	nop
/*  f00377c:	10640005 */ 	beq	$v1,$a0,.L0f003794
/*  f003780:	00000000 */ 	nop
/*  f003784:	0fc00d70 */ 	jal	func0f0035c0
/*  f003788:	00000000 */ 	nop
/*  f00378c:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x2ac)
/*  f003790:	8c42a26c */ 	lw	$v0,%lo(g_Vars+0x2ac)($v0)
.L0f003794:
/*  f003794:	3c018006 */ 	lui	$at,%hi(var80061458)
/*  f003798:	ac221458 */ 	sw	$v0,%lo(var80061458)($at)
.L0f00379c:
/*  f00379c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0037a0:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f0037a4:	03e00008 */ 	jr	$ra
/*  f0037a8:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f0037ac
.late_rodata
glabel var7f1a7dbc
.word func0f0037ac+0x134 # f0038e0
glabel var7f1a7dc0
.word func0f0037ac+0x194 # f003940
glabel var7f1a7dc4
.word func0f0037ac+0x278 # f003a24
glabel var7f1a7dc8
.word func0f0037ac+0x328 # f003ad4
glabel var7f1a7dcc
.word func0f0037ac+0x410 # f003bbc
glabel var7f1a7dd0
.word 0x40c90fdb
glabel var7f1a7dd4
.word 0x3b808081
.text
/*  f0037ac:	27bdff28 */ 	addiu	$sp,$sp,-216
/*  f0037b0:	afbf0054 */ 	sw	$ra,0x54($sp)
/*  f0037b4:	afbe0050 */ 	sw	$s8,0x50($sp)
/*  f0037b8:	afb7004c */ 	sw	$s7,0x4c($sp)
/*  f0037bc:	afb60048 */ 	sw	$s6,0x48($sp)
/*  f0037c0:	afb50044 */ 	sw	$s5,0x44($sp)
/*  f0037c4:	afb40040 */ 	sw	$s4,0x40($sp)
/*  f0037c8:	afb3003c */ 	sw	$s3,0x3c($sp)
/*  f0037cc:	afb20038 */ 	sw	$s2,0x38($sp)
/*  f0037d0:	afb10034 */ 	sw	$s1,0x34($sp)
/*  f0037d4:	afb00030 */ 	sw	$s0,0x30($sp)
/*  f0037d8:	f7b60028 */ 	sdc1	$f22,0x28($sp)
/*  f0037dc:	f7b40020 */ 	sdc1	$f20,0x20($sp)
/*  f0037e0:	afa000d0 */ 	sw	$zero,0xd0($sp)
/*  f0037e4:	afa000c8 */ 	sw	$zero,0xc8($sp)
/*  f0037e8:	0fc41b99 */ 	jal	cheatIsActive
/*  f0037ec:	24040015 */ 	addiu	$a0,$zero,0x15
/*  f0037f0:	10400003 */ 	beqz	$v0,.L0f003800
/*  f0037f4:	00000000 */ 	nop
/*  f0037f8:	0fc00dcb */ 	jal	func0f00372c
/*  f0037fc:	00000000 */ 	nop
.L0f003800:
/*  f003800:	3c0e8006 */ 	lui	$t6,%hi(var80061420)
/*  f003804:	8dce1420 */ 	lw	$t6,%lo(var80061420)($t6)
/*  f003808:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x2bc)
/*  f00380c:	51c002b4 */ 	beqzl	$t6,.L0f0042e0
/*  f003810:	8fbf0054 */ 	lw	$ra,0x54($sp)
/*  f003814:	8c42a27c */ 	lw	$v0,%lo(g_Vars+0x2bc)($v0)
/*  f003818:	241e0001 */ 	addiu	$s8,$zero,0x1
/*  f00381c:	2412008c */ 	addiu	$s2,$zero,0x8c
/*  f003820:	28410002 */ 	slti	$at,$v0,0x2
/*  f003824:	14200010 */ 	bnez	$at,.L0f003868
/*  f003828:	3c13800a */ 	lui	$s3,%hi(g_Rooms)
/*  f00382c:	26734928 */ 	addiu	$s3,$s3,%lo(g_Rooms)
/*  f003830:	2403fbff */ 	addiu	$v1,$zero,-1025
/*  f003834:	8e6f0000 */ 	lw	$t7,0x0($s3)
.L0f003838:
/*  f003838:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x2bc)
/*  f00383c:	27de0001 */ 	addiu	$s8,$s8,0x1
/*  f003840:	01f28021 */ 	addu	$s0,$t7,$s2
/*  f003844:	96180000 */ 	lhu	$t8,0x0($s0)
/*  f003848:	2652008c */ 	addiu	$s2,$s2,0x8c
/*  f00384c:	0303c824 */ 	and	$t9,$t8,$v1
/*  f003850:	a6190000 */ 	sh	$t9,0x0($s0)
/*  f003854:	8c42a27c */ 	lw	$v0,%lo(g_Vars+0x2bc)($v0)
/*  f003858:	03c2082a */ 	slt	$at,$s8,$v0
/*  f00385c:	5420fff6 */ 	bnezl	$at,.L0f003838
/*  f003860:	8e6f0000 */ 	lw	$t7,0x0($s3)
/*  f003864:	241e0001 */ 	addiu	$s8,$zero,0x1
.L0f003868:
/*  f003868:	3c13800a */ 	lui	$s3,%hi(g_Rooms)
/*  f00386c:	28410002 */ 	slti	$at,$v0,0x2
/*  f003870:	142001aa */ 	bnez	$at,.L0f003f1c
/*  f003874:	26734928 */ 	addiu	$s3,$s3,%lo(g_Rooms)
/*  f003878:	4480b000 */ 	mtc1	$zero,$f22
/*  f00387c:	2412008c */ 	addiu	$s2,$zero,0x8c
/*  f003880:	2417008c */ 	addiu	$s7,$zero,0x8c
/*  f003884:	2416ffff */ 	addiu	$s6,$zero,-1
/*  f003888:	27b5009c */ 	addiu	$s5,$sp,0x9c
/*  f00388c:	27b400a0 */ 	addiu	$s4,$sp,0xa0
/*  f003890:	8e680000 */ 	lw	$t0,0x0($s3)
.L0f003894:
/*  f003894:	3c0a800a */ 	lui	$t2,%hi(g_Vars+0x34)
/*  f003898:	8d4a9ff4 */ 	lw	$t2,%lo(g_Vars+0x34)($t2)
/*  f00389c:	01128021 */ 	addu	$s0,$t0,$s2
/*  f0038a0:	86090054 */ 	lh	$t1,0x54($s0)
/*  f0038a4:	012a5823 */ 	subu	$t3,$t1,$t2
/*  f0038a8:	a60b0054 */ 	sh	$t3,0x54($s0)
/*  f0038ac:	8e6c0000 */ 	lw	$t4,0x0($s3)
/*  f0038b0:	01928021 */ 	addu	$s0,$t4,$s2
/*  f0038b4:	960d004e */ 	lhu	$t5,0x4e($s0)
/*  f0038b8:	000d7302 */ 	srl	$t6,$t5,0xc
/*  f0038bc:	25cfffff */ 	addiu	$t7,$t6,-1
/*  f0038c0:	2de10005 */ 	sltiu	$at,$t7,0x5
/*  f0038c4:	102000c2 */ 	beqz	$at,.L0f003bd0
/*  f0038c8:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f0038cc:	3c017f1a */ 	lui	$at,%hi(var7f1a7dbc)
/*  f0038d0:	002f0821 */ 	addu	$at,$at,$t7
/*  f0038d4:	8c2f7dbc */ 	lw	$t7,%lo(var7f1a7dbc)($at)
/*  f0038d8:	01e00008 */ 	jr	$t7
/*  f0038dc:	00000000 */ 	nop
/*  f0038e0:	c6040060 */ 	lwc1	$f4,0x60($s0)
/*  f0038e4:	03c02025 */ 	or	$a0,$s8,$zero
/*  f0038e8:	00002825 */ 	or	$a1,$zero,$zero
/*  f0038ec:	e604005c */ 	swc1	$f4,0x5c($s0)
/*  f0038f0:	8e780000 */ 	lw	$t8,0x0($s3)
/*  f0038f4:	03128021 */ 	addu	$s0,$t8,$s2
/*  f0038f8:	c606005c */ 	lwc1	$f6,0x5c($s0)
/*  f0038fc:	4616303c */ 	c.lt.s	$f6,$f22
/*  f003900:	00000000 */ 	nop
/*  f003904:	45020005 */ 	bc1fl	.L0f00391c
/*  f003908:	96080000 */ 	lhu	$t0,0x0($s0)
/*  f00390c:	e616005c */ 	swc1	$f22,0x5c($s0)
/*  f003910:	8e790000 */ 	lw	$t9,0x0($s3)
/*  f003914:	03328021 */ 	addu	$s0,$t9,$s2
/*  f003918:	96080000 */ 	lhu	$t0,0x0($s0)
.L0f00391c:
/*  f00391c:	00003025 */ 	or	$a2,$zero,$zero
/*  f003920:	00003825 */ 	or	$a3,$zero,$zero
/*  f003924:	35090100 */ 	ori	$t1,$t0,0x100
/*  f003928:	a6090000 */ 	sh	$t1,0x0($s0)
/*  f00392c:	0fc00b0a */ 	jal	func0f002c28
/*  f003930:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f003934:	8e6a0000 */ 	lw	$t2,0x0($s3)
/*  f003938:	100000a5 */ 	b	.L0f003bd0
/*  f00393c:	01528021 */ 	addu	$s0,$t2,$s2
/*  f003940:	860b0054 */ 	lh	$t3,0x54($s0)
/*  f003944:	056100a2 */ 	bgez	$t3,.L0f003bd0
/*  f003948:	00000000 */ 	nop
/*  f00394c:	0c004b70 */ 	jal	random
/*  f003950:	00000000 */ 	nop
/*  f003954:	8e6c0000 */ 	lw	$t4,0x0($s3)
/*  f003958:	44824000 */ 	mtc1	$v0,$f8
/*  f00395c:	3c014f80 */ 	lui	$at,0x4f80
/*  f003960:	01928021 */ 	addu	$s0,$t4,$s2
/*  f003964:	04410004 */ 	bgez	$v0,.L0f003978
/*  f003968:	468042a0 */ 	cvt.s.w	$f10,$f8
/*  f00396c:	44818000 */ 	mtc1	$at,$f16
/*  f003970:	00000000 */ 	nop
/*  f003974:	46105280 */ 	add.s	$f10,$f10,$f16
.L0f003978:
/*  f003978:	3c012f80 */ 	lui	$at,0x2f80
/*  f00397c:	44819000 */ 	mtc1	$at,$f18
/*  f003980:	3c0142c8 */ 	lui	$at,0x42c8
/*  f003984:	44813000 */ 	mtc1	$at,$f6
/*  f003988:	46125102 */ 	mul.s	$f4,$f10,$f18
/*  f00398c:	c6100060 */ 	lwc1	$f16,0x60($s0)
/*  f003990:	3c013f80 */ 	lui	$at,0x3f80
/*  f003994:	46062202 */ 	mul.s	$f8,$f4,$f6
/*  f003998:	4610403c */ 	c.lt.s	$f8,$f16
/*  f00399c:	00000000 */ 	nop
/*  f0039a0:	45020008 */ 	bc1fl	.L0f0039c4
/*  f0039a4:	c6120064 */ 	lwc1	$f18,0x64($s0)
/*  f0039a8:	44815000 */ 	mtc1	$at,$f10
/*  f0039ac:	00000000 */ 	nop
/*  f0039b0:	e60a005c */ 	swc1	$f10,0x5c($s0)
/*  f0039b4:	8e6d0000 */ 	lw	$t5,0x0($s3)
/*  f0039b8:	1000000d */ 	b	.L0f0039f0
/*  f0039bc:	01b28021 */ 	addu	$s0,$t5,$s2
/*  f0039c0:	c6120064 */ 	lwc1	$f18,0x64($s0)
.L0f0039c4:
/*  f0039c4:	e612005c */ 	swc1	$f18,0x5c($s0)
/*  f0039c8:	8e6e0000 */ 	lw	$t6,0x0($s3)
/*  f0039cc:	01d28021 */ 	addu	$s0,$t6,$s2
/*  f0039d0:	c604005c */ 	lwc1	$f4,0x5c($s0)
/*  f0039d4:	4616203c */ 	c.lt.s	$f4,$f22
/*  f0039d8:	00000000 */ 	nop
/*  f0039dc:	45020005 */ 	bc1fl	.L0f0039f4
/*  f0039e0:	c6060068 */ 	lwc1	$f6,0x68($s0)
/*  f0039e4:	e616005c */ 	swc1	$f22,0x5c($s0)
/*  f0039e8:	8e6f0000 */ 	lw	$t7,0x0($s3)
/*  f0039ec:	01f28021 */ 	addu	$s0,$t7,$s2
.L0f0039f0:
/*  f0039f0:	c6060068 */ 	lwc1	$f6,0x68($s0)
.L0f0039f4:
/*  f0039f4:	4600320d */ 	trunc.w.s	$f8,$f6
/*  f0039f8:	44194000 */ 	mfc1	$t9,$f8
/*  f0039fc:	00000000 */ 	nop
/*  f003a00:	a6190054 */ 	sh	$t9,0x54($s0)
/*  f003a04:	8e680000 */ 	lw	$t0,0x0($s3)
/*  f003a08:	01128021 */ 	addu	$s0,$t0,$s2
/*  f003a0c:	96090000 */ 	lhu	$t1,0x0($s0)
/*  f003a10:	352a0100 */ 	ori	$t2,$t1,0x100
/*  f003a14:	a60a0000 */ 	sh	$t2,0x0($s0)
/*  f003a18:	8e6b0000 */ 	lw	$t3,0x0($s3)
/*  f003a1c:	1000006c */ 	b	.L0f003bd0
/*  f003a20:	01728021 */ 	addu	$s0,$t3,$s2
/*  f003a24:	860c0054 */ 	lh	$t4,0x54($s0)
/*  f003a28:	00003025 */ 	or	$a2,$zero,$zero
/*  f003a2c:	5980001d */ 	blezl	$t4,.L0f003aa4
/*  f003a30:	03c02025 */ 	or	$a0,$s8,$zero
/*  f003a34:	c6100064 */ 	lwc1	$f16,0x64($s0)
/*  f003a38:	e610005c */ 	swc1	$f16,0x5c($s0)
/*  f003a3c:	8e6d0000 */ 	lw	$t5,0x0($s3)
/*  f003a40:	01b28021 */ 	addu	$s0,$t5,$s2
/*  f003a44:	860e0054 */ 	lh	$t6,0x54($s0)
/*  f003a48:	c6040068 */ 	lwc1	$f4,0x68($s0)
/*  f003a4c:	c6080060 */ 	lwc1	$f8,0x60($s0)
/*  f003a50:	448e5000 */ 	mtc1	$t6,$f10
/*  f003a54:	c6100064 */ 	lwc1	$f16,0x64($s0)
/*  f003a58:	468054a0 */ 	cvt.s.w	$f18,$f10
/*  f003a5c:	46104281 */ 	sub.s	$f10,$f8,$f16
/*  f003a60:	46049183 */ 	div.s	$f6,$f18,$f4
/*  f003a64:	c604005c */ 	lwc1	$f4,0x5c($s0)
/*  f003a68:	460a3482 */ 	mul.s	$f18,$f6,$f10
/*  f003a6c:	46122200 */ 	add.s	$f8,$f4,$f18
/*  f003a70:	e608005c */ 	swc1	$f8,0x5c($s0)
/*  f003a74:	8e6f0000 */ 	lw	$t7,0x0($s3)
/*  f003a78:	01f28021 */ 	addu	$s0,$t7,$s2
/*  f003a7c:	c610005c */ 	lwc1	$f16,0x5c($s0)
/*  f003a80:	4616803c */ 	c.lt.s	$f16,$f22
/*  f003a84:	00000000 */ 	nop
/*  f003a88:	4502000d */ 	bc1fl	.L0f003ac0
/*  f003a8c:	96080000 */ 	lhu	$t0,0x0($s0)
/*  f003a90:	e616005c */ 	swc1	$f22,0x5c($s0)
/*  f003a94:	8e780000 */ 	lw	$t8,0x0($s3)
/*  f003a98:	10000008 */ 	b	.L0f003abc
/*  f003a9c:	03128021 */ 	addu	$s0,$t8,$s2
/*  f003aa0:	03c02025 */ 	or	$a0,$s8,$zero
.L0f003aa4:
/*  f003aa4:	00002825 */ 	or	$a1,$zero,$zero
/*  f003aa8:	00003825 */ 	or	$a3,$zero,$zero
/*  f003aac:	0fc00b0a */ 	jal	func0f002c28
/*  f003ab0:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f003ab4:	8e790000 */ 	lw	$t9,0x0($s3)
/*  f003ab8:	03328021 */ 	addu	$s0,$t9,$s2
.L0f003abc:
/*  f003abc:	96080000 */ 	lhu	$t0,0x0($s0)
.L0f003ac0:
/*  f003ac0:	35090100 */ 	ori	$t1,$t0,0x100
/*  f003ac4:	a6090000 */ 	sh	$t1,0x0($s0)
/*  f003ac8:	8e6a0000 */ 	lw	$t2,0x0($s3)
/*  f003acc:	10000040 */ 	b	.L0f003bd0
/*  f003ad0:	01528021 */ 	addu	$s0,$t2,$s2
/*  f003ad4:	86020054 */ 	lh	$v0,0x54($s0)
/*  f003ad8:	18400003 */ 	blez	$v0,.L0f003ae8
/*  f003adc:	00021823 */ 	negu	$v1,$v0
/*  f003ae0:	10000001 */ 	b	.L0f003ae8
/*  f003ae4:	00401825 */ 	or	$v1,$v0,$zero
.L0f003ae8:
/*  f003ae8:	c6000068 */ 	lwc1	$f0,0x68($s0)
/*  f003aec:	c6100064 */ 	lwc1	$f16,0x64($s0)
/*  f003af0:	4600018d */ 	trunc.w.s	$f6,$f0
/*  f003af4:	440c3000 */ 	mfc1	$t4,$f6
/*  f003af8:	c6060060 */ 	lwc1	$f6,0x60($s0)
/*  f003afc:	006c001a */ 	div	$zero,$v1,$t4
/*  f003b00:	00006810 */ 	mfhi	$t5
/*  f003b04:	448d5000 */ 	mtc1	$t5,$f10
/*  f003b08:	15800002 */ 	bnez	$t4,.L0f003b14
/*  f003b0c:	00000000 */ 	nop
/*  f003b10:	0007000d */ 	break	0x7
.L0f003b14:
/*  f003b14:	2401ffff */ 	addiu	$at,$zero,-1
/*  f003b18:	15810004 */ 	bne	$t4,$at,.L0f003b2c
/*  f003b1c:	3c018000 */ 	lui	$at,0x8000
/*  f003b20:	14610002 */ 	bne	$v1,$at,.L0f003b2c
/*  f003b24:	00000000 */ 	nop
/*  f003b28:	0006000d */ 	break	0x6
.L0f003b2c:
/*  f003b2c:	46805120 */ 	cvt.s.w	$f4,$f10
/*  f003b30:	3c017f1a */ 	lui	$at,%hi(var7f1a7dd0)
/*  f003b34:	c4327dd0 */ 	lwc1	$f18,%lo(var7f1a7dd0)($at)
/*  f003b38:	3c013f00 */ 	lui	$at,0x3f00
/*  f003b3c:	46068280 */ 	add.s	$f10,$f16,$f6
/*  f003b40:	46122202 */ 	mul.s	$f8,$f4,$f18
/*  f003b44:	44812000 */ 	mtc1	$at,$f4
/*  f003b48:	00000000 */ 	nop
/*  f003b4c:	46045502 */ 	mul.s	$f20,$f10,$f4
/*  f003b50:	0c0068f4 */ 	jal	cosf
/*  f003b54:	46004303 */ 	div.s	$f12,$f8,$f0
/*  f003b58:	3c013f80 */ 	lui	$at,0x3f80
/*  f003b5c:	44819000 */ 	mtc1	$at,$f18
/*  f003b60:	8e6e0000 */ 	lw	$t6,0x0($s3)
/*  f003b64:	46120200 */ 	add.s	$f8,$f0,$f18
/*  f003b68:	01d28021 */ 	addu	$s0,$t6,$s2
/*  f003b6c:	c6060060 */ 	lwc1	$f6,0x60($s0)
/*  f003b70:	46144402 */ 	mul.s	$f16,$f8,$f20
/*  f003b74:	46068280 */ 	add.s	$f10,$f16,$f6
/*  f003b78:	e60a005c */ 	swc1	$f10,0x5c($s0)
/*  f003b7c:	8e6f0000 */ 	lw	$t7,0x0($s3)
/*  f003b80:	01f28021 */ 	addu	$s0,$t7,$s2
/*  f003b84:	c604005c */ 	lwc1	$f4,0x5c($s0)
/*  f003b88:	4616203c */ 	c.lt.s	$f4,$f22
/*  f003b8c:	00000000 */ 	nop
/*  f003b90:	45020005 */ 	bc1fl	.L0f003ba8
/*  f003b94:	96190000 */ 	lhu	$t9,0x0($s0)
/*  f003b98:	e616005c */ 	swc1	$f22,0x5c($s0)
/*  f003b9c:	8e780000 */ 	lw	$t8,0x0($s3)
/*  f003ba0:	03128021 */ 	addu	$s0,$t8,$s2
/*  f003ba4:	96190000 */ 	lhu	$t9,0x0($s0)
.L0f003ba8:
/*  f003ba8:	37280100 */ 	ori	$t0,$t9,0x100
/*  f003bac:	a6080000 */ 	sh	$t0,0x0($s0)
/*  f003bb0:	8e690000 */ 	lw	$t1,0x0($s3)
/*  f003bb4:	10000006 */ 	b	.L0f003bd0
/*  f003bb8:	01328021 */ 	addu	$s0,$t1,$s2
/*  f003bbc:	960a0000 */ 	lhu	$t2,0x0($s0)
/*  f003bc0:	354b0100 */ 	ori	$t3,$t2,0x100
/*  f003bc4:	a60b0000 */ 	sh	$t3,0x0($s0)
/*  f003bc8:	8e6c0000 */ 	lw	$t4,0x0($s3)
/*  f003bcc:	01928021 */ 	addu	$s0,$t4,$s2
.L0f003bd0:
/*  f003bd0:	3c0d8006 */ 	lui	$t5,%hi(var8006144c)
/*  f003bd4:	8dad144c */ 	lw	$t5,%lo(var8006144c)($t5)
/*  f003bd8:	51a00007 */ 	beqzl	$t5,.L0f003bf8
/*  f003bdc:	96060000 */ 	lhu	$a2,0x0($s0)
/*  f003be0:	960e0000 */ 	lhu	$t6,0x0($s0)
/*  f003be4:	35cf0100 */ 	ori	$t7,$t6,0x100
/*  f003be8:	a60f0000 */ 	sh	$t7,0x0($s0)
/*  f003bec:	8e780000 */ 	lw	$t8,0x0($s3)
/*  f003bf0:	03128021 */ 	addu	$s0,$t8,$s2
/*  f003bf4:	96060000 */ 	lhu	$a2,0x0($s0)
.L0f003bf8:
/*  f003bf8:	30d90100 */ 	andi	$t9,$a2,0x100
/*  f003bfc:	5320007f */ 	beqzl	$t9,.L0f003dfc
/*  f003c00:	860a0052 */ 	lh	$t2,0x52($s0)
/*  f003c04:	82040008 */ 	lb	$a0,0x8($s0)
/*  f003c08:	24080001 */ 	addiu	$t0,$zero,0x1
/*  f003c0c:	afa800c8 */ 	sw	$t0,0xc8($sp)
/*  f003c10:	10800032 */ 	beqz	$a0,.L0f003cdc
/*  f003c14:	00001825 */ 	or	$v1,$zero,$zero
/*  f003c18:	9609000a */ 	lhu	$t1,0xa($s0)
/*  f003c1c:	3c0b800a */ 	lui	$t3,%hi(var800a4cd8)
/*  f003c20:	8d6b4cd8 */ 	lw	$t3,%lo(var800a4cd8)($t3)
/*  f003c24:	00095100 */ 	sll	$t2,$t1,0x4
/*  f003c28:	01495021 */ 	addu	$t2,$t2,$t1
/*  f003c2c:	000a5040 */ 	sll	$t2,$t2,0x1
/*  f003c30:	00002825 */ 	or	$a1,$zero,$zero
/*  f003c34:	1880000b */ 	blez	$a0,.L0f003c64
/*  f003c38:	014b1021 */ 	addu	$v0,$t2,$t3
.L0f003c3c:
/*  f003c3c:	944c0004 */ 	lhu	$t4,0x4($v0)
/*  f003c40:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f003c44:	0064082a */ 	slt	$at,$v1,$a0
/*  f003c48:	000c7680 */ 	sll	$t6,$t4,0x1a
/*  f003c4c:	05c10002 */ 	bgez	$t6,.L0f003c58
/*  f003c50:	00000000 */ 	nop
/*  f003c54:	24a50001 */ 	addiu	$a1,$a1,0x1
.L0f003c58:
/*  f003c58:	1420fff8 */ 	bnez	$at,.L0f003c3c
/*  f003c5c:	24420022 */ 	addiu	$v0,$v0,0x22
/*  f003c60:	00001825 */ 	or	$v1,$zero,$zero
.L0f003c64:
/*  f003c64:	30cf2000 */ 	andi	$t7,$a2,0x2000
/*  f003c68:	11e00004 */ 	beqz	$t7,.L0f003c7c
/*  f003c6c:	3c014000 */ 	lui	$at,0x4000
/*  f003c70:	44810000 */ 	mtc1	$at,$f0
/*  f003c74:	10000028 */ 	b	.L0f003d18
/*  f003c78:	c610005c */ 	lwc1	$f16,0x5c($s0)
.L0f003c7c:
/*  f003c7c:	50a0000c */ 	beqzl	$a1,.L0f003cb0
/*  f003c80:	9219004c */ 	lbu	$t9,0x4c($s0)
/*  f003c84:	9218004c */ 	lbu	$t8,0x4c($s0)
/*  f003c88:	3c014f80 */ 	lui	$at,0x4f80
/*  f003c8c:	44989000 */ 	mtc1	$t8,$f18
/*  f003c90:	07010020 */ 	bgez	$t8,.L0f003d14
/*  f003c94:	46809020 */ 	cvt.s.w	$f0,$f18
/*  f003c98:	44814000 */ 	mtc1	$at,$f8
/*  f003c9c:	00000000 */ 	nop
/*  f003ca0:	46080000 */ 	add.s	$f0,$f0,$f8
/*  f003ca4:	1000001c */ 	b	.L0f003d18
/*  f003ca8:	c610005c */ 	lwc1	$f16,0x5c($s0)
/*  f003cac:	9219004c */ 	lbu	$t9,0x4c($s0)
.L0f003cb0:
/*  f003cb0:	3c014f80 */ 	lui	$at,0x4f80
/*  f003cb4:	44998000 */ 	mtc1	$t9,$f16
/*  f003cb8:	07210004 */ 	bgez	$t9,.L0f003ccc
/*  f003cbc:	468081a0 */ 	cvt.s.w	$f6,$f16
/*  f003cc0:	44815000 */ 	mtc1	$at,$f10
/*  f003cc4:	00000000 */ 	nop
/*  f003cc8:	460a3180 */ 	add.s	$f6,$f6,$f10
.L0f003ccc:
/*  f003ccc:	3c014000 */ 	lui	$at,0x4000
/*  f003cd0:	44812000 */ 	mtc1	$at,$f4
/*  f003cd4:	1000000f */ 	b	.L0f003d14
/*  f003cd8:	46043003 */ 	div.s	$f0,$f6,$f4
.L0f003cdc:
/*  f003cdc:	30c82000 */ 	andi	$t0,$a2,0x2000
/*  f003ce0:	11000004 */ 	beqz	$t0,.L0f003cf4
/*  f003ce4:	3c014000 */ 	lui	$at,0x4000
/*  f003ce8:	44810000 */ 	mtc1	$at,$f0
/*  f003cec:	1000000a */ 	b	.L0f003d18
/*  f003cf0:	c610005c */ 	lwc1	$f16,0x5c($s0)
.L0f003cf4:
/*  f003cf4:	9209004c */ 	lbu	$t1,0x4c($s0)
/*  f003cf8:	3c014f80 */ 	lui	$at,0x4f80
/*  f003cfc:	44899000 */ 	mtc1	$t1,$f18
/*  f003d00:	05210004 */ 	bgez	$t1,.L0f003d14
/*  f003d04:	46809020 */ 	cvt.s.w	$f0,$f18
/*  f003d08:	44814000 */ 	mtc1	$at,$f8
/*  f003d0c:	00000000 */ 	nop
/*  f003d10:	46080000 */ 	add.s	$f0,$f0,$f8
.L0f003d14:
/*  f003d14:	c610005c */ 	lwc1	$f16,0x5c($s0)
.L0f003d18:
/*  f003d18:	3c0f800a */ 	lui	$t7,%hi(var800a4cd8)
/*  f003d1c:	46100002 */ 	mul.s	$f0,$f0,$f16
/*  f003d20:	4600028d */ 	trunc.w.s	$f10,$f0
/*  f003d24:	440b5000 */ 	mfc1	$t3,$f10
/*  f003d28:	00000000 */ 	nop
/*  f003d2c:	a60b0050 */ 	sh	$t3,0x50($s0)
/*  f003d30:	8e6c0000 */ 	lw	$t4,0x0($s3)
/*  f003d34:	8def4cd8 */ 	lw	$t7,%lo(var800a4cd8)($t7)
/*  f003d38:	01928021 */ 	addu	$s0,$t4,$s2
/*  f003d3c:	960d000a */ 	lhu	$t5,0xa($s0)
/*  f003d40:	82040008 */ 	lb	$a0,0x8($s0)
/*  f003d44:	000d7100 */ 	sll	$t6,$t5,0x4
/*  f003d48:	01cd7021 */ 	addu	$t6,$t6,$t5
/*  f003d4c:	000e7040 */ 	sll	$t6,$t6,0x1
/*  f003d50:	1880001c */ 	blez	$a0,.L0f003dc4
/*  f003d54:	01cf1021 */ 	addu	$v0,$t6,$t7
.L0f003d58:
/*  f003d58:	94580004 */ 	lhu	$t8,0x4($v0)
/*  f003d5c:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f003d60:	0018ce80 */ 	sll	$t9,$t8,0x1a
/*  f003d64:	07230015 */ 	bgezl	$t9,.L0f003dbc
/*  f003d68:	0064082a */ 	slt	$at,$v1,$a0
/*  f003d6c:	90490004 */ 	lbu	$t1,0x4($v0)
/*  f003d70:	c606005c */ 	lwc1	$f6,0x5c($s0)
/*  f003d74:	3c014f80 */ 	lui	$at,0x4f80
/*  f003d78:	44892000 */ 	mtc1	$t1,$f4
/*  f003d7c:	05210004 */ 	bgez	$t1,.L0f003d90
/*  f003d80:	468024a0 */ 	cvt.s.w	$f18,$f4
/*  f003d84:	44814000 */ 	mtc1	$at,$f8
/*  f003d88:	00000000 */ 	nop
/*  f003d8c:	46089480 */ 	add.s	$f18,$f18,$f8
.L0f003d90:
/*  f003d90:	46123002 */ 	mul.s	$f0,$f6,$f18
/*  f003d94:	860a0050 */ 	lh	$t2,0x50($s0)
/*  f003d98:	4600040d */ 	trunc.w.s	$f16,$f0
/*  f003d9c:	440c8000 */ 	mfc1	$t4,$f16
/*  f003da0:	00000000 */ 	nop
/*  f003da4:	014c6821 */ 	addu	$t5,$t2,$t4
/*  f003da8:	a60d0050 */ 	sh	$t5,0x50($s0)
/*  f003dac:	8e6e0000 */ 	lw	$t6,0x0($s3)
/*  f003db0:	01d28021 */ 	addu	$s0,$t6,$s2
/*  f003db4:	82040008 */ 	lb	$a0,0x8($s0)
/*  f003db8:	0064082a */ 	slt	$at,$v1,$a0
.L0f003dbc:
/*  f003dbc:	1420ffe6 */ 	bnez	$at,.L0f003d58
/*  f003dc0:	24420022 */ 	addiu	$v0,$v0,0x22
.L0f003dc4:
/*  f003dc4:	860f0050 */ 	lh	$t7,0x50($s0)
/*  f003dc8:	29e10100 */ 	slti	$at,$t7,0x100
/*  f003dcc:	54200006 */ 	bnezl	$at,.L0f003de8
/*  f003dd0:	96080000 */ 	lhu	$t0,0x0($s0)
/*  f003dd4:	241800ff */ 	addiu	$t8,$zero,0xff
/*  f003dd8:	a6180050 */ 	sh	$t8,0x50($s0)
/*  f003ddc:	8e790000 */ 	lw	$t9,0x0($s3)
/*  f003de0:	03328021 */ 	addu	$s0,$t9,$s2
/*  f003de4:	96080000 */ 	lhu	$t0,0x0($s0)
.L0f003de8:
/*  f003de8:	3109feff */ 	andi	$t1,$t0,0xfeff
/*  f003dec:	a6090000 */ 	sh	$t1,0x0($s0)
/*  f003df0:	8e6b0000 */ 	lw	$t3,0x0($s3)
/*  f003df4:	01728021 */ 	addu	$s0,$t3,$s2
/*  f003df8:	860a0052 */ 	lh	$t2,0x52($s0)
.L0f003dfc:
/*  f003dfc:	3c028006 */ 	lui	$v0,%hi(var80061420)
/*  f003e00:	5140003c */ 	beqzl	$t2,.L0f003ef4
/*  f003e04:	96080000 */ 	lhu	$t0,0x0($s0)
/*  f003e08:	3c11800a */ 	lui	$s1,%hi(g_Vars+0x34)
/*  f003e0c:	8e319ff4 */ 	lw	$s1,%lo(g_Vars+0x34)($s1)
/*  f003e10:	8c421420 */ 	lw	$v0,%lo(var80061420)($v0)
/*  f003e14:	001e80c0 */ 	sll	$s0,$s8,0x3
/*  f003e18:	00116040 */ 	sll	$t4,$s1,0x1
/*  f003e1c:	1040001c */ 	beqz	$v0,.L0f003e90
/*  f003e20:	01808825 */ 	or	$s1,$t4,$zero
/*  f003e24:	afa000a0 */ 	sw	$zero,0xa0($sp)
/*  f003e28:	afa0009c */ 	sw	$zero,0x9c($sp)
/*  f003e2c:	00506821 */ 	addu	$t5,$v0,$s0
/*  f003e30:	8da40004 */ 	lw	$a0,0x4($t5)
/*  f003e34:	02802825 */ 	or	$a1,$s4,$zero
/*  f003e38:	0fc5df23 */ 	jal	func0f177c8c
/*  f003e3c:	02a03025 */ 	or	$a2,$s5,$zero
/*  f003e40:	50560014 */ 	beql	$v0,$s6,.L0f003e94
/*  f003e44:	8e6a0000 */ 	lw	$t2,0x0($s3)
.L0f003e48:
/*  f003e48:	10400009 */ 	beqz	$v0,.L0f003e70
/*  f003e4c:	3c098006 */ 	lui	$t1,%hi(var80061420)
/*  f003e50:	8faf009c */ 	lw	$t7,0x9c($sp)
/*  f003e54:	8e6e0000 */ 	lw	$t6,0x0($s3)
/*  f003e58:	01f70019 */ 	multu	$t7,$s7
/*  f003e5c:	0000c012 */ 	mflo	$t8
/*  f003e60:	01d81021 */ 	addu	$v0,$t6,$t8
/*  f003e64:	94590000 */ 	lhu	$t9,0x0($v0)
/*  f003e68:	37280400 */ 	ori	$t0,$t9,0x400
/*  f003e6c:	a4480000 */ 	sh	$t0,0x0($v0)
.L0f003e70:
/*  f003e70:	8d291420 */ 	lw	$t1,%lo(var80061420)($t1)
/*  f003e74:	02802825 */ 	or	$a1,$s4,$zero
/*  f003e78:	02a03025 */ 	or	$a2,$s5,$zero
/*  f003e7c:	01305821 */ 	addu	$t3,$t1,$s0
/*  f003e80:	0fc5df23 */ 	jal	func0f177c8c
/*  f003e84:	8d640004 */ 	lw	$a0,0x4($t3)
/*  f003e88:	1456ffef */ 	bne	$v0,$s6,.L0f003e48
/*  f003e8c:	00000000 */ 	nop
.L0f003e90:
/*  f003e90:	8e6a0000 */ 	lw	$t2,0x0($s3)
.L0f003e94:
/*  f003e94:	01528021 */ 	addu	$s0,$t2,$s2
/*  f003e98:	86020052 */ 	lh	$v0,0x52($s0)
/*  f003e9c:	18400008 */ 	blez	$v0,.L0f003ec0
/*  f003ea0:	0222082a */ 	slt	$at,$s1,$v0
/*  f003ea4:	0051082a */ 	slt	$at,$v0,$s1
/*  f003ea8:	50200003 */ 	beqzl	$at,.L0f003eb8
/*  f003eac:	00516023 */ 	subu	$t4,$v0,$s1
/*  f003eb0:	00408825 */ 	or	$s1,$v0,$zero
/*  f003eb4:	00516023 */ 	subu	$t4,$v0,$s1
.L0f003eb8:
/*  f003eb8:	10000006 */ 	b	.L0f003ed4
/*  f003ebc:	a60c0052 */ 	sh	$t4,0x52($s0)
.L0f003ec0:
/*  f003ec0:	50200003 */ 	beqzl	$at,.L0f003ed0
/*  f003ec4:	00516821 */ 	addu	$t5,$v0,$s1
/*  f003ec8:	00408825 */ 	or	$s1,$v0,$zero
/*  f003ecc:	00516821 */ 	addu	$t5,$v0,$s1
.L0f003ed0:
/*  f003ed0:	a60d0052 */ 	sh	$t5,0x52($s0)
.L0f003ed4:
/*  f003ed4:	8e6f0000 */ 	lw	$t7,0x0($s3)
/*  f003ed8:	01f28021 */ 	addu	$s0,$t7,$s2
/*  f003edc:	960e0000 */ 	lhu	$t6,0x0($s0)
/*  f003ee0:	35d80400 */ 	ori	$t8,$t6,0x400
/*  f003ee4:	a6180000 */ 	sh	$t8,0x0($s0)
/*  f003ee8:	8e790000 */ 	lw	$t9,0x0($s3)
/*  f003eec:	03328021 */ 	addu	$s0,$t9,$s2
/*  f003ef0:	96080000 */ 	lhu	$t0,0x0($s0)
.L0f003ef4:
/*  f003ef4:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x2bc)
/*  f003ef8:	27de0001 */ 	addiu	$s8,$s8,0x1
/*  f003efc:	3109feff */ 	andi	$t1,$t0,0xfeff
/*  f003f00:	a6090000 */ 	sh	$t1,0x0($s0)
/*  f003f04:	8c42a27c */ 	lw	$v0,%lo(g_Vars+0x2bc)($v0)
/*  f003f08:	2652008c */ 	addiu	$s2,$s2,0x8c
/*  f003f0c:	03c2082a */ 	slt	$at,$s8,$v0
/*  f003f10:	5420fe60 */ 	bnezl	$at,.L0f003894
/*  f003f14:	8e680000 */ 	lw	$t0,0x0($s3)
/*  f003f18:	241e0001 */ 	addiu	$s8,$zero,0x1
.L0f003f1c:
/*  f003f1c:	3c0b8006 */ 	lui	$t3,%hi(var8006144c)
/*  f003f20:	8d6b144c */ 	lw	$t3,%lo(var8006144c)($t3)
/*  f003f24:	2416ffff */ 	addiu	$s6,$zero,-1
/*  f003f28:	2417008c */ 	addiu	$s7,$zero,0x8c
/*  f003f2c:	15600002 */ 	bnez	$t3,.L0f003f38
/*  f003f30:	8faa00c8 */ 	lw	$t2,0xc8($sp)
/*  f003f34:	11400010 */ 	beqz	$t2,.L0f003f78
.L0f003f38:
/*  f003f38:	28410002 */ 	slti	$at,$v0,0x2
/*  f003f3c:	1420000e */ 	bnez	$at,.L0f003f78
/*  f003f40:	2412008c */ 	addiu	$s2,$zero,0x8c
/*  f003f44:	8e6c0000 */ 	lw	$t4,0x0($s3)
.L0f003f48:
/*  f003f48:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x2bc)
/*  f003f4c:	27de0001 */ 	addiu	$s8,$s8,0x1
/*  f003f50:	01928021 */ 	addu	$s0,$t4,$s2
/*  f003f54:	960d0000 */ 	lhu	$t5,0x0($s0)
/*  f003f58:	2652008c */ 	addiu	$s2,$s2,0x8c
/*  f003f5c:	35af0200 */ 	ori	$t7,$t5,0x200
/*  f003f60:	a60f0000 */ 	sh	$t7,0x0($s0)
/*  f003f64:	8c42a27c */ 	lw	$v0,%lo(g_Vars+0x2bc)($v0)
/*  f003f68:	03c2082a */ 	slt	$at,$s8,$v0
/*  f003f6c:	5420fff6 */ 	bnezl	$at,.L0f003f48
/*  f003f70:	8e6c0000 */ 	lw	$t4,0x0($s3)
/*  f003f74:	241e0001 */ 	addiu	$s8,$zero,0x1
.L0f003f78:
/*  f003f78:	28410002 */ 	slti	$at,$v0,0x2
/*  f003f7c:	1420009a */ 	bnez	$at,.L0f0041e8
/*  f003f80:	27b5008c */ 	addiu	$s5,$sp,0x8c
/*  f003f84:	3c017f1a */ 	lui	$at,%hi(var7f1a7dd4)
/*  f003f88:	c4347dd4 */ 	lwc1	$f20,%lo(var7f1a7dd4)($at)
/*  f003f8c:	27b40090 */ 	addiu	$s4,$sp,0x90
.L0f003f90:
/*  f003f90:	53c00092 */ 	beqzl	$s8,.L0f0041dc
/*  f003f94:	27de0001 */ 	addiu	$s8,$s8,0x1
/*  f003f98:	03d70019 */ 	multu	$s8,$s7
/*  f003f9c:	8e6e0000 */ 	lw	$t6,0x0($s3)
/*  f003fa0:	00009012 */ 	mflo	$s2
/*  f003fa4:	01d2c021 */ 	addu	$t8,$t6,$s2
/*  f003fa8:	97060000 */ 	lhu	$a2,0x0($t8)
/*  f003fac:	30d90080 */ 	andi	$t9,$a2,0x80
/*  f003fb0:	17200002 */ 	bnez	$t9,.L0f003fbc
/*  f003fb4:	30c8000c */ 	andi	$t0,$a2,0xc
/*  f003fb8:	11000087 */ 	beqz	$t0,.L0f0041d8
.L0f003fbc:
/*  f003fbc:	30c90600 */ 	andi	$t1,$a2,0x600
/*  f003fc0:	11200085 */ 	beqz	$t1,.L0f0041d8
/*  f003fc4:	00008825 */ 	or	$s1,$zero,$zero
/*  f003fc8:	3c0b8006 */ 	lui	$t3,%hi(var80061420)
/*  f003fcc:	8d6b1420 */ 	lw	$t3,%lo(var80061420)($t3)
/*  f003fd0:	001e80c0 */ 	sll	$s0,$s8,0x3
/*  f003fd4:	afa00090 */ 	sw	$zero,0x90($sp)
/*  f003fd8:	afa0008c */ 	sw	$zero,0x8c($sp)
/*  f003fdc:	01705021 */ 	addu	$t2,$t3,$s0
/*  f003fe0:	8d440000 */ 	lw	$a0,0x0($t2)
/*  f003fe4:	02802825 */ 	or	$a1,$s4,$zero
/*  f003fe8:	0fc5df23 */ 	jal	func0f177c8c
/*  f003fec:	02a03025 */ 	or	$a2,$s5,$zero
/*  f003ff0:	50560021 */ 	beql	$v0,$s6,.L0f004078
/*  f003ff4:	2a210100 */ 	slti	$at,$s1,0x100
/*  f003ff8:	8fac008c */ 	lw	$t4,0x8c($sp)
.L0f003ffc:
/*  f003ffc:	3c088006 */ 	lui	$t0,%hi(var80061420)
/*  f004000:	11800014 */ 	beqz	$t4,.L0f004054
/*  f004004:	00000000 */ 	nop
/*  f004008:	11800011 */ 	beqz	$t4,.L0f004050
/*  f00400c:	00001825 */ 	or	$v1,$zero,$zero
/*  f004010:	01970019 */ 	multu	$t4,$s7
/*  f004014:	8e6d0000 */ 	lw	$t5,0x0($s3)
/*  f004018:	44824000 */ 	mtc1	$v0,$f8
/*  f00401c:	00000000 */ 	nop
/*  f004020:	468041a0 */ 	cvt.s.w	$f6,$f8
/*  f004024:	00007812 */ 	mflo	$t7
/*  f004028:	01af7021 */ 	addu	$t6,$t5,$t7
/*  f00402c:	85d80050 */ 	lh	$t8,0x50($t6)
/*  f004030:	4606a482 */ 	mul.s	$f18,$f20,$f6
/*  f004034:	44985000 */ 	mtc1	$t8,$f10
/*  f004038:	00000000 */ 	nop
/*  f00403c:	46805120 */ 	cvt.s.w	$f4,$f10
/*  f004040:	46049402 */ 	mul.s	$f16,$f18,$f4
/*  f004044:	4600828d */ 	trunc.w.s	$f10,$f16
/*  f004048:	44035000 */ 	mfc1	$v1,$f10
/*  f00404c:	00000000 */ 	nop
.L0f004050:
/*  f004050:	02238821 */ 	addu	$s1,$s1,$v1
.L0f004054:
/*  f004054:	8d081420 */ 	lw	$t0,%lo(var80061420)($t0)
/*  f004058:	02802825 */ 	or	$a1,$s4,$zero
/*  f00405c:	02a03025 */ 	or	$a2,$s5,$zero
/*  f004060:	01104821 */ 	addu	$t1,$t0,$s0
/*  f004064:	0fc5df23 */ 	jal	func0f177c8c
/*  f004068:	8d240000 */ 	lw	$a0,0x0($t1)
/*  f00406c:	5456ffe3 */ 	bnel	$v0,$s6,.L0f003ffc
/*  f004070:	8fac008c */ 	lw	$t4,0x8c($sp)
/*  f004074:	2a210100 */ 	slti	$at,$s1,0x100
.L0f004078:
/*  f004078:	54200003 */ 	bnezl	$at,.L0f004088
/*  f00407c:	8e6b0000 */ 	lw	$t3,0x0($s3)
/*  f004080:	241100ff */ 	addiu	$s1,$zero,0xff
/*  f004084:	8e6b0000 */ 	lw	$t3,0x0($s3)
.L0f004088:
/*  f004088:	24010005 */ 	addiu	$at,$zero,0x5
/*  f00408c:	01725021 */ 	addu	$t2,$t3,$s2
/*  f004090:	a151004b */ 	sb	$s1,0x4b($t2)
/*  f004094:	8e6c0000 */ 	lw	$t4,0x0($s3)
/*  f004098:	01928021 */ 	addu	$s0,$t4,$s2
/*  f00409c:	960d0000 */ 	lhu	$t5,0x0($s0)
/*  f0040a0:	35af0040 */ 	ori	$t7,$t5,0x40
/*  f0040a4:	a60f0000 */ 	sh	$t7,0x0($s0)
/*  f0040a8:	8e6e0000 */ 	lw	$t6,0x0($s3)
/*  f0040ac:	01d28021 */ 	addu	$s0,$t6,$s2
/*  f0040b0:	96180000 */ 	lhu	$t8,0x0($s0)
/*  f0040b4:	37191000 */ 	ori	$t9,$t8,0x1000
/*  f0040b8:	a6190000 */ 	sh	$t9,0x0($s0)
/*  f0040bc:	8e680000 */ 	lw	$t0,0x0($s3)
/*  f0040c0:	01128021 */ 	addu	$s0,$t0,$s2
/*  f0040c4:	96090000 */ 	lhu	$t1,0x0($s0)
/*  f0040c8:	312bf9ff */ 	andi	$t3,$t1,0xf9ff
/*  f0040cc:	a60b0000 */ 	sh	$t3,0x0($s0)
/*  f0040d0:	8e6a0000 */ 	lw	$t2,0x0($s3)
/*  f0040d4:	01526021 */ 	addu	$t4,$t2,$s2
/*  f0040d8:	958d004e */ 	lhu	$t5,0x4e($t4)
/*  f0040dc:	000d7b02 */ 	srl	$t7,$t5,0xc
/*  f0040e0:	15e10023 */ 	bne	$t7,$at,.L0f004170
/*  f0040e4:	00000000 */ 	nop
/*  f0040e8:	0fc00284 */ 	jal	func0f000a10
/*  f0040ec:	03c02025 */ 	or	$a0,$s8,$zero
/*  f0040f0:	001e2400 */ 	sll	$a0,$s8,0x10
/*  f0040f4:	00047403 */ 	sra	$t6,$a0,0x10
/*  f0040f8:	afa2007c */ 	sw	$v0,0x7c($sp)
/*  f0040fc:	afa20078 */ 	sw	$v0,0x78($sp)
/*  f004100:	01c02025 */ 	or	$a0,$t6,$zero
/*  f004104:	27a50080 */ 	addiu	$a1,$sp,0x80
/*  f004108:	27a6007c */ 	addiu	$a2,$sp,0x7c
/*  f00410c:	27a70078 */ 	addiu	$a3,$sp,0x78
/*  f004110:	0fc6192e */ 	jal	scenarioCallback38
/*  f004114:	afa20080 */ 	sw	$v0,0x80($sp)
/*  f004118:	8fb80080 */ 	lw	$t8,0x80($sp)
/*  f00411c:	8e790000 */ 	lw	$t9,0x0($s3)
/*  f004120:	44984000 */ 	mtc1	$t8,$f8
/*  f004124:	03324021 */ 	addu	$t0,$t9,$s2
/*  f004128:	468041a0 */ 	cvt.s.w	$f6,$f8
/*  f00412c:	46143482 */ 	mul.s	$f18,$f6,$f20
/*  f004130:	e5120074 */ 	swc1	$f18,0x74($t0)
/*  f004134:	8fa9007c */ 	lw	$t1,0x7c($sp)
/*  f004138:	8e6b0000 */ 	lw	$t3,0x0($s3)
/*  f00413c:	44892000 */ 	mtc1	$t1,$f4
/*  f004140:	01725021 */ 	addu	$t2,$t3,$s2
/*  f004144:	46802420 */ 	cvt.s.w	$f16,$f4
/*  f004148:	46148282 */ 	mul.s	$f10,$f16,$f20
/*  f00414c:	e54a0078 */ 	swc1	$f10,0x78($t2)
/*  f004150:	8fac0078 */ 	lw	$t4,0x78($sp)
/*  f004154:	8e6d0000 */ 	lw	$t5,0x0($s3)
/*  f004158:	448c4000 */ 	mtc1	$t4,$f8
/*  f00415c:	01b27821 */ 	addu	$t7,$t5,$s2
/*  f004160:	468041a0 */ 	cvt.s.w	$f6,$f8
/*  f004164:	46143482 */ 	mul.s	$f18,$f6,$f20
/*  f004168:	10000016 */ 	b	.L0f0041c4
/*  f00416c:	e5f2007c */ 	swc1	$f18,0x7c($t7)
.L0f004170:
/*  f004170:	0fc00284 */ 	jal	func0f000a10
/*  f004174:	03c02025 */ 	or	$a0,$s8,$zero
/*  f004178:	44822000 */ 	mtc1	$v0,$f4
/*  f00417c:	3c014f80 */ 	lui	$at,0x4f80
/*  f004180:	04410004 */ 	bgez	$v0,.L0f004194
/*  f004184:	46802420 */ 	cvt.s.w	$f16,$f4
/*  f004188:	44815000 */ 	mtc1	$at,$f10
/*  f00418c:	00000000 */ 	nop
/*  f004190:	460a8400 */ 	add.s	$f16,$f16,$f10
.L0f004194:
/*  f004194:	46148202 */ 	mul.s	$f8,$f16,$f20
/*  f004198:	8e6e0000 */ 	lw	$t6,0x0($s3)
/*  f00419c:	01d2c021 */ 	addu	$t8,$t6,$s2
/*  f0041a0:	e7080074 */ 	swc1	$f8,0x74($t8)
/*  f0041a4:	8e790000 */ 	lw	$t9,0x0($s3)
/*  f0041a8:	03328021 */ 	addu	$s0,$t9,$s2
/*  f0041ac:	c6060074 */ 	lwc1	$f6,0x74($s0)
/*  f0041b0:	e6060078 */ 	swc1	$f6,0x78($s0)
/*  f0041b4:	8e680000 */ 	lw	$t0,0x0($s3)
/*  f0041b8:	01128021 */ 	addu	$s0,$t0,$s2
/*  f0041bc:	c6120074 */ 	lwc1	$f18,0x74($s0)
/*  f0041c0:	e612007c */ 	swc1	$f18,0x7c($s0)
.L0f0041c4:
/*  f0041c4:	8fa900d0 */ 	lw	$t1,0xd0($sp)
/*  f0041c8:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x2bc)
/*  f0041cc:	8c42a27c */ 	lw	$v0,%lo(g_Vars+0x2bc)($v0)
/*  f0041d0:	252b0001 */ 	addiu	$t3,$t1,0x1
/*  f0041d4:	afab00d0 */ 	sw	$t3,0xd0($sp)
.L0f0041d8:
/*  f0041d8:	27de0001 */ 	addiu	$s8,$s8,0x1
.L0f0041dc:
/*  f0041dc:	03c2082a */ 	slt	$at,$s8,$v0
/*  f0041e0:	1420ff6b */ 	bnez	$at,.L0f003f90
/*  f0041e4:	00000000 */ 	nop
.L0f0041e8:
/*  f0041e8:	3c0a800a */ 	lui	$t2,%hi(g_Vars+0x4d8)
/*  f0041ec:	8d4aa498 */ 	lw	$t2,%lo(g_Vars+0x4d8)($t2)
/*  f0041f0:	3c038006 */ 	lui	$v1,%hi(var8006144c)
/*  f0041f4:	8c63144c */ 	lw	$v1,%lo(var8006144c)($v1)
/*  f0041f8:	1d400035 */ 	bgtz	$t2,.L0f0042d0
/*  f0041fc:	8fac00d0 */ 	lw	$t4,0xd0($sp)
/*  f004200:	15800003 */ 	bnez	$t4,.L0f004210
/*  f004204:	3c11800a */ 	lui	$s1,%hi(g_Vars+0x33c)
/*  f004208:	10600031 */ 	beqz	$v1,.L0f0042d0
/*  f00420c:	00000000 */ 	nop
.L0f004210:
/*  f004210:	8e31a2fc */ 	lw	$s1,%lo(g_Vars+0x33c)($s1)
/*  f004214:	24140003 */ 	addiu	$s4,$zero,0x3
/*  f004218:	24120002 */ 	addiu	$s2,$zero,0x2
/*  f00421c:	5220002a */ 	beqzl	$s1,.L0f0042c8
/*  f004220:	240d000f */ 	addiu	$t5,$zero,0xf
/*  f004224:	922d0000 */ 	lbu	$t5,0x0($s1)
.L0f004228:
/*  f004228:	568d0024 */ 	bnel	$s4,$t5,.L0f0042bc
/*  f00422c:	8e310020 */ 	lw	$s1,0x20($s1)
/*  f004230:	862f0028 */ 	lh	$t7,0x28($s1)
/*  f004234:	0000f025 */ 	or	$s8,$zero,$zero
/*  f004238:	02208025 */ 	or	$s0,$s1,$zero
/*  f00423c:	52cf001f */ 	beql	$s6,$t7,.L0f0042bc
/*  f004240:	8e310020 */ 	lw	$s1,0x20($s1)
/*  f004244:	86220028 */ 	lh	$v0,0x28($s1)
.L0f004248:
/*  f004248:	00570019 */ 	multu	$v0,$s7
/*  f00424c:	8e6e0000 */ 	lw	$t6,0x0($s3)
/*  f004250:	0000c012 */ 	mflo	$t8
/*  f004254:	01d8c821 */ 	addu	$t9,$t6,$t8
/*  f004258:	97280000 */ 	lhu	$t0,0x0($t9)
/*  f00425c:	31091000 */ 	andi	$t1,$t0,0x1000
/*  f004260:	51200012 */ 	beqzl	$t1,.L0f0042ac
/*  f004264:	8602002a */ 	lh	$v0,0x2a($s0)
/*  f004268:	5472000a */ 	bnel	$v1,$s2,.L0f004294
/*  f00426c:	8e220004 */ 	lw	$v0,0x4($s1)
/*  f004270:	8e220004 */ 	lw	$v0,0x4($s1)
/*  f004274:	8c44001c */ 	lw	$a0,0x1c($v0)
/*  f004278:	244500fc */ 	addiu	$a1,$v0,0xfc
/*  f00427c:	0fc1a451 */ 	jal	func0f069144
/*  f004280:	9446018a */ 	lhu	$a2,0x18a($v0)
/*  f004284:	3c038006 */ 	lui	$v1,%hi(var8006144c)
/*  f004288:	10000007 */ 	b	.L0f0042a8
/*  f00428c:	8c63144c */ 	lw	$v1,%lo(var8006144c)($v1)
/*  f004290:	8e220004 */ 	lw	$v0,0x4($s1)
.L0f004294:
/*  f004294:	3c038006 */ 	lui	$v1,%hi(var8006144c)
/*  f004298:	904a032e */ 	lbu	$t2,0x32e($v0)
/*  f00429c:	354c0020 */ 	ori	$t4,$t2,0x20
/*  f0042a0:	a04c032e */ 	sb	$t4,0x32e($v0)
/*  f0042a4:	8c63144c */ 	lw	$v1,%lo(var8006144c)($v1)
.L0f0042a8:
/*  f0042a8:	8602002a */ 	lh	$v0,0x2a($s0)
.L0f0042ac:
/*  f0042ac:	26100002 */ 	addiu	$s0,$s0,0x2
/*  f0042b0:	16c2ffe5 */ 	bne	$s6,$v0,.L0f004248
/*  f0042b4:	00000000 */ 	nop
/*  f0042b8:	8e310020 */ 	lw	$s1,0x20($s1)
.L0f0042bc:
/*  f0042bc:	5620ffda */ 	bnezl	$s1,.L0f004228
/*  f0042c0:	922d0000 */ 	lbu	$t5,0x0($s1)
/*  f0042c4:	240d000f */ 	addiu	$t5,$zero,0xf
.L0f0042c8:
/*  f0042c8:	3c01800a */ 	lui	$at,%hi(g_Vars+0x4e1)
/*  f0042cc:	a02da4a1 */ 	sb	$t5,%lo(g_Vars+0x4e1)($at)
.L0f0042d0:
/*  f0042d0:	10600002 */ 	beqz	$v1,.L0f0042dc
/*  f0042d4:	3c018006 */ 	lui	$at,%hi(var8006144c)
/*  f0042d8:	ac20144c */ 	sw	$zero,%lo(var8006144c)($at)
.L0f0042dc:
/*  f0042dc:	8fbf0054 */ 	lw	$ra,0x54($sp)
.L0f0042e0:
/*  f0042e0:	d7b40020 */ 	ldc1	$f20,0x20($sp)
/*  f0042e4:	d7b60028 */ 	ldc1	$f22,0x28($sp)
/*  f0042e8:	8fb00030 */ 	lw	$s0,0x30($sp)
/*  f0042ec:	8fb10034 */ 	lw	$s1,0x34($sp)
/*  f0042f0:	8fb20038 */ 	lw	$s2,0x38($sp)
/*  f0042f4:	8fb3003c */ 	lw	$s3,0x3c($sp)
/*  f0042f8:	8fb40040 */ 	lw	$s4,0x40($sp)
/*  f0042fc:	8fb50044 */ 	lw	$s5,0x44($sp)
/*  f004300:	8fb60048 */ 	lw	$s6,0x48($sp)
/*  f004304:	8fb7004c */ 	lw	$s7,0x4c($sp)
/*  f004308:	8fbe0050 */ 	lw	$s8,0x50($sp)
/*  f00430c:	03e00008 */ 	jr	$ra
/*  f004310:	27bd00d8 */ 	addiu	$sp,$sp,0xd8
);

GLOBAL_ASM(
glabel func0f004314
/*  f004314:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x284)
/*  f004318:	8c42a244 */ 	lw	$v0,%lo(g_Vars+0x284)($v0)
/*  f00431c:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f004320:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f004324:	244e0638 */ 	addiu	$t6,$v0,0x638
/*  f004328:	244f0ddc */ 	addiu	$t7,$v0,0xddc
/*  f00432c:	afae001c */ 	sw	$t6,0x1c($sp)
/*  f004330:	0fc016ec */ 	jal	func0f005bb0
/*  f004334:	afaf0018 */ 	sw	$t7,0x18($sp)
/*  f004338:	8fb8001c */ 	lw	$t8,0x1c($sp)
/*  f00433c:	8fa80018 */ 	lw	$t0,0x18($sp)
/*  f004340:	3c0a800a */ 	lui	$t2,%hi(g_Vars+0x284)
/*  f004344:	83190005 */ 	lb	$t9,0x5($t8)
/*  f004348:	17200004 */ 	bnez	$t9,.L0f00435c
/*  f00434c:	00000000 */ 	nop
/*  f004350:	81090005 */ 	lb	$t1,0x5($t0)
/*  f004354:	51200008 */ 	beqzl	$t1,.L0f004378
/*  f004358:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f00435c:
/*  f00435c:	8d4aa244 */ 	lw	$t2,%lo(g_Vars+0x284)($t2)
/*  f004360:	24050040 */ 	addiu	$a1,$zero,0x40
/*  f004364:	24060050 */ 	addiu	$a2,$zero,0x50
/*  f004368:	8d4b00bc */ 	lw	$t3,0xbc($t2)
/*  f00436c:	0fc010e3 */ 	jal	func0f00438c
/*  f004370:	85640028 */ 	lh	$a0,0x28($t3)
/*  f004374:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f004378:
/*  f004378:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f00437c:	03e00008 */ 	jr	$ra
/*  f004380:	00000000 */ 	nop
/*  f004384:	03e00008 */ 	jr	$ra
/*  f004388:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f00438c
.late_rodata
glabel var7f1a7dd8
.word 0x3b808081
.text
/*  f00438c:	27bdff80 */ 	addiu	$sp,$sp,-128
/*  f004390:	afbe0050 */ 	sw	$s8,0x50($sp)
/*  f004394:	3c1e8006 */ 	lui	$s8,%hi(var80061420)
/*  f004398:	27de1420 */ 	addiu	$s8,$s8,%lo(var80061420)
/*  f00439c:	8fc30000 */ 	lw	$v1,0x0($s8)
/*  f0043a0:	afb7004c */ 	sw	$s7,0x4c($sp)
/*  f0043a4:	afb60048 */ 	sw	$s6,0x48($sp)
/*  f0043a8:	00a0b025 */ 	or	$s6,$a1,$zero
/*  f0043ac:	00c0b825 */ 	or	$s7,$a2,$zero
/*  f0043b0:	afbf0054 */ 	sw	$ra,0x54($sp)
/*  f0043b4:	afb50044 */ 	sw	$s5,0x44($sp)
/*  f0043b8:	afb40040 */ 	sw	$s4,0x40($sp)
/*  f0043bc:	afb3003c */ 	sw	$s3,0x3c($sp)
/*  f0043c0:	afb20038 */ 	sw	$s2,0x38($sp)
/*  f0043c4:	afb10034 */ 	sw	$s1,0x34($sp)
/*  f0043c8:	afb00030 */ 	sw	$s0,0x30($sp)
/*  f0043cc:	f7b80028 */ 	sdc1	$f24,0x28($sp)
/*  f0043d0:	f7b60020 */ 	sdc1	$f22,0x20($sp)
/*  f0043d4:	f7b40018 */ 	sdc1	$f20,0x18($sp)
/*  f0043d8:	10600050 */ 	beqz	$v1,.L0f00451c
/*  f0043dc:	00803825 */ 	or	$a3,$a0,$zero
/*  f0043e0:	3c15800a */ 	lui	$s5,%hi(g_Rooms)
/*  f0043e4:	000488c0 */ 	sll	$s1,$a0,0x3
/*  f0043e8:	02248821 */ 	addu	$s1,$s1,$a0
/*  f0043ec:	26b54928 */ 	addiu	$s5,$s5,%lo(g_Rooms)
/*  f0043f0:	8eae0000 */ 	lw	$t6,0x0($s5)
/*  f0043f4:	00118880 */ 	sll	$s1,$s1,0x2
/*  f0043f8:	02248823 */ 	subu	$s1,$s1,$a0
/*  f0043fc:	00118880 */ 	sll	$s1,$s1,0x2
/*  f004400:	01d17821 */ 	addu	$t7,$t6,$s1
/*  f004404:	95f80000 */ 	lhu	$t8,0x0($t7)
/*  f004408:	00001025 */ 	or	$v0,$zero,$zero
/*  f00440c:	27b20078 */ 	addiu	$s2,$sp,0x78
/*  f004410:	33198000 */ 	andi	$t9,$t8,0x8000
/*  f004414:	13200003 */ 	beqz	$t9,.L0f004424
/*  f004418:	27b30074 */ 	addiu	$s3,$sp,0x74
/*  f00441c:	10000001 */ 	b	.L0f004424
/*  f004420:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f004424:
/*  f004424:	1440003d */ 	bnez	$v0,.L0f00451c
/*  f004428:	000780c0 */ 	sll	$s0,$a3,0x3
/*  f00442c:	afa00078 */ 	sw	$zero,0x78($sp)
/*  f004430:	afa00074 */ 	sw	$zero,0x74($sp)
/*  f004434:	00704021 */ 	addu	$t0,$v1,$s0
/*  f004438:	8d040004 */ 	lw	$a0,0x4($t0)
/*  f00443c:	02402825 */ 	or	$a1,$s2,$zero
/*  f004440:	0fc5df23 */ 	jal	func0f177c8c
/*  f004444:	02603025 */ 	or	$a2,$s3,$zero
/*  f004448:	2414ffff */ 	addiu	$s4,$zero,-1
/*  f00444c:	10540033 */ 	beq	$v0,$s4,.L0f00451c
/*  f004450:	3c0140a0 */ 	lui	$at,0x40a0
/*  f004454:	44962000 */ 	mtc1	$s6,$f4
/*  f004458:	4481c000 */ 	mtc1	$at,$f24
/*  f00445c:	3c017f1a */ 	lui	$at,%hi(var7f1a7dd8)
/*  f004460:	c4367dd8 */ 	lwc1	$f22,%lo(var7f1a7dd8)($at)
/*  f004464:	46802520 */ 	cvt.s.w	$f20,$f4
/*  f004468:	44823000 */ 	mtc1	$v0,$f6
.L0f00446c:
/*  f00446c:	00001025 */ 	or	$v0,$zero,$zero
/*  f004470:	46803220 */ 	cvt.s.w	$f8,$f6
/*  f004474:	46164282 */ 	mul.s	$f10,$f8,$f22
/*  f004478:	00000000 */ 	nop
/*  f00447c:	46145402 */ 	mul.s	$f16,$f10,$f20
/*  f004480:	00000000 */ 	nop
/*  f004484:	46188002 */ 	mul.s	$f0,$f16,$f24
/*  f004488:	1ac00007 */ 	blez	$s6,.L0f0044a8
/*  f00448c:	46000086 */ 	mov.s	$f2,$f0
/*  f004490:	4600a03c */ 	c.lt.s	$f20,$f0
/*  f004494:	00000000 */ 	nop
/*  f004498:	45020009 */ 	bc1fl	.L0f0044c0
/*  f00449c:	8ea90000 */ 	lw	$t1,0x0($s5)
/*  f0044a0:	10000006 */ 	b	.L0f0044bc
/*  f0044a4:	4600a086 */ 	mov.s	$f2,$f20
.L0f0044a8:
/*  f0044a8:	4614003c */ 	c.lt.s	$f0,$f20
/*  f0044ac:	00000000 */ 	nop
/*  f0044b0:	45020003 */ 	bc1fl	.L0f0044c0
/*  f0044b4:	8ea90000 */ 	lw	$t1,0x0($s5)
/*  f0044b8:	4600a086 */ 	mov.s	$f2,$f20
.L0f0044bc:
/*  f0044bc:	8ea90000 */ 	lw	$t1,0x0($s5)
.L0f0044c0:
/*  f0044c0:	01315021 */ 	addu	$t2,$t1,$s1
/*  f0044c4:	954b0000 */ 	lhu	$t3,0x0($t2)
/*  f0044c8:	316c8000 */ 	andi	$t4,$t3,0x8000
/*  f0044cc:	11800003 */ 	beqz	$t4,.L0f0044dc
/*  f0044d0:	00000000 */ 	nop
/*  f0044d4:	10000001 */ 	b	.L0f0044dc
/*  f0044d8:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f0044dc:
/*  f0044dc:	54400008 */ 	bnezl	$v0,.L0f004500
/*  f0044e0:	8fce0000 */ 	lw	$t6,0x0($s8)
/*  f0044e4:	4600148d */ 	trunc.w.s	$f18,$f2
/*  f0044e8:	8fa40074 */ 	lw	$a0,0x74($sp)
/*  f0044ec:	02e03025 */ 	or	$a2,$s7,$zero
/*  f0044f0:	44059000 */ 	mfc1	$a1,$f18
/*  f0044f4:	0fc01156 */ 	jal	func0f004558
/*  f0044f8:	00000000 */ 	nop
/*  f0044fc:	8fce0000 */ 	lw	$t6,0x0($s8)
.L0f004500:
/*  f004500:	02402825 */ 	or	$a1,$s2,$zero
/*  f004504:	02603025 */ 	or	$a2,$s3,$zero
/*  f004508:	01d07821 */ 	addu	$t7,$t6,$s0
/*  f00450c:	0fc5df23 */ 	jal	func0f177c8c
/*  f004510:	8de40004 */ 	lw	$a0,0x4($t7)
/*  f004514:	5454ffd5 */ 	bnel	$v0,$s4,.L0f00446c
/*  f004518:	44823000 */ 	mtc1	$v0,$f6
.L0f00451c:
/*  f00451c:	8fbf0054 */ 	lw	$ra,0x54($sp)
/*  f004520:	d7b40018 */ 	ldc1	$f20,0x18($sp)
/*  f004524:	d7b60020 */ 	ldc1	$f22,0x20($sp)
/*  f004528:	d7b80028 */ 	ldc1	$f24,0x28($sp)
/*  f00452c:	8fb00030 */ 	lw	$s0,0x30($sp)
/*  f004530:	8fb10034 */ 	lw	$s1,0x34($sp)
/*  f004534:	8fb20038 */ 	lw	$s2,0x38($sp)
/*  f004538:	8fb3003c */ 	lw	$s3,0x3c($sp)
/*  f00453c:	8fb40040 */ 	lw	$s4,0x40($sp)
/*  f004540:	8fb50044 */ 	lw	$s5,0x44($sp)
/*  f004544:	8fb60048 */ 	lw	$s6,0x48($sp)
/*  f004548:	8fb7004c */ 	lw	$s7,0x4c($sp)
/*  f00454c:	8fbe0050 */ 	lw	$s8,0x50($sp)
/*  f004550:	03e00008 */ 	jr	$ra
/*  f004554:	27bd0080 */ 	addiu	$sp,$sp,0x80
);

GLOBAL_ASM(
glabel func0f004558
/*  f004558:	10800028 */ 	beqz	$a0,.L0f0045fc
/*  f00455c:	3c07800a */ 	lui	$a3,%hi(g_Rooms)
/*  f004560:	000410c0 */ 	sll	$v0,$a0,0x3
/*  f004564:	24e74928 */ 	addiu	$a3,$a3,%lo(g_Rooms)
/*  f004568:	00441021 */ 	addu	$v0,$v0,$a0
/*  f00456c:	8cee0000 */ 	lw	$t6,0x0($a3)
/*  f004570:	00021080 */ 	sll	$v0,$v0,0x2
/*  f004574:	00441023 */ 	subu	$v0,$v0,$a0
/*  f004578:	00021080 */ 	sll	$v0,$v0,0x2
/*  f00457c:	01c21821 */ 	addu	$v1,$t6,$v0
/*  f004580:	946f0000 */ 	lhu	$t7,0x0($v1)
/*  f004584:	31f80004 */ 	andi	$t8,$t7,0x4
/*  f004588:	1300001c */ 	beqz	$t8,.L0f0045fc
/*  f00458c:	00000000 */ 	nop
/*  f004590:	58a0000f */ 	blezl	$a1,.L0f0045d0
/*  f004594:	84640052 */ 	lh	$a0,0x52($v1)
/*  f004598:	84640052 */ 	lh	$a0,0x52($v1)
/*  f00459c:	0086082a */ 	slt	$at,$a0,$a2
/*  f0045a0:	10200016 */ 	beqz	$at,.L0f0045fc
/*  f0045a4:	0085c821 */ 	addu	$t9,$a0,$a1
/*  f0045a8:	a4790052 */ 	sh	$t9,0x52($v1)
/*  f0045ac:	8ce80000 */ 	lw	$t0,0x0($a3)
/*  f0045b0:	01021821 */ 	addu	$v1,$t0,$v0
/*  f0045b4:	84690052 */ 	lh	$t1,0x52($v1)
/*  f0045b8:	00c9082a */ 	slt	$at,$a2,$t1
/*  f0045bc:	1020000f */ 	beqz	$at,.L0f0045fc
/*  f0045c0:	00000000 */ 	nop
/*  f0045c4:	03e00008 */ 	jr	$ra
/*  f0045c8:	a4660052 */ 	sh	$a2,0x52($v1)
/*  f0045cc:	84640052 */ 	lh	$a0,0x52($v1)
.L0f0045d0:
/*  f0045d0:	00c4082a */ 	slt	$at,$a2,$a0
/*  f0045d4:	10200009 */ 	beqz	$at,.L0f0045fc
/*  f0045d8:	00855021 */ 	addu	$t2,$a0,$a1
/*  f0045dc:	a46a0052 */ 	sh	$t2,0x52($v1)
/*  f0045e0:	8ceb0000 */ 	lw	$t3,0x0($a3)
/*  f0045e4:	01621821 */ 	addu	$v1,$t3,$v0
/*  f0045e8:	846c0052 */ 	lh	$t4,0x52($v1)
/*  f0045ec:	0186082a */ 	slt	$at,$t4,$a2
/*  f0045f0:	10200002 */ 	beqz	$at,.L0f0045fc
/*  f0045f4:	00000000 */ 	nop
/*  f0045f8:	a4660052 */ 	sh	$a2,0x52($v1)
.L0f0045fc:
/*  f0045fc:	03e00008 */ 	jr	$ra
/*  f004600:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f004604
.late_rodata
glabel var7f1a7ddc
.word 0x3b808081
.text
/*  f004604:	3c06800a */ 	lui	$a2,%hi(g_Rooms)
/*  f004608:	000428c0 */ 	sll	$a1,$a0,0x3
/*  f00460c:	24c64928 */ 	addiu	$a2,$a2,%lo(g_Rooms)
/*  f004610:	27bdff68 */ 	addiu	$sp,$sp,-152
/*  f004614:	00a42821 */ 	addu	$a1,$a1,$a0
/*  f004618:	8cce0000 */ 	lw	$t6,0x0($a2)
/*  f00461c:	00052880 */ 	sll	$a1,$a1,0x2
/*  f004620:	00a42823 */ 	subu	$a1,$a1,$a0
/*  f004624:	00052880 */ 	sll	$a1,$a1,0x2
/*  f004628:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f00462c:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f004630:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f004634:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f004638:	3c028008 */ 	lui	$v0,%hi(var8007fc3c)
/*  f00463c:	01c55821 */ 	addu	$t3,$t6,$a1
/*  f004640:	956f0056 */ 	lhu	$t7,0x56($t3)
/*  f004644:	9442fc3c */ 	lhu	$v0,%lo(var8007fc3c)($v0)
/*  f004648:	504f0183 */ 	beql	$v0,$t7,.L0f004c58
/*  f00464c:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f004650:	85780002 */ 	lh	$t8,0x2($t3)
/*  f004654:	53000180 */ 	beqzl	$t8,.L0f004c58
/*  f004658:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f00465c:	a5620056 */ 	sh	$v0,0x56($t3)
/*  f004660:	8cd90000 */ 	lw	$t9,0x0($a2)
/*  f004664:	03255821 */ 	addu	$t3,$t9,$a1
/*  f004668:	95630000 */ 	lhu	$v1,0x0($t3)
/*  f00466c:	306e0040 */ 	andi	$t6,$v1,0x40
/*  f004670:	15c00002 */ 	bnez	$t6,.L0f00467c
/*  f004674:	346f0200 */ 	ori	$t7,$v1,0x200
/*  f004678:	a56f0000 */ 	sh	$t7,0x0($t3)
.L0f00467c:
/*  f00467c:	afa40098 */ 	sw	$a0,0x98($sp)
/*  f004680:	0fc002c9 */ 	jal	func0f000b24
/*  f004684:	afa50048 */ 	sw	$a1,0x48($sp)
/*  f004688:	3c18800a */ 	lui	$t8,%hi(g_Rooms)
/*  f00468c:	8f184928 */ 	lw	$t8,%lo(g_Rooms)($t8)
/*  f004690:	8fb90048 */ 	lw	$t9,0x48($sp)
/*  f004694:	305200ff */ 	andi	$s2,$v0,0xff
/*  f004698:	03197021 */ 	addu	$t6,$t8,$t9
/*  f00469c:	8dcf0014 */ 	lw	$t7,0x14($t6)
/*  f0046a0:	85e40016 */ 	lh	$a0,0x16($t7)
/*  f0046a4:	0fc59e73 */ 	jal	func0f1679cc
/*  f0046a8:	afa40070 */ 	sw	$a0,0x70($sp)
/*  f0046ac:	3c07800a */ 	lui	$a3,%hi(g_Rooms)
/*  f0046b0:	24e74928 */ 	addiu	$a3,$a3,%lo(g_Rooms)
/*  f0046b4:	8fa60048 */ 	lw	$a2,0x48($sp)
/*  f0046b8:	8cf80000 */ 	lw	$t8,0x0($a3)
/*  f0046bc:	00402825 */ 	or	$a1,$v0,$zero
/*  f0046c0:	0306c821 */ 	addu	$t9,$t8,$a2
/*  f0046c4:	af220058 */ 	sw	$v0,0x58($t9)
/*  f0046c8:	8cee0000 */ 	lw	$t6,0x0($a3)
/*  f0046cc:	01c65821 */ 	addu	$t3,$t6,$a2
/*  f0046d0:	8d630014 */ 	lw	$v1,0x14($t3)
/*  f0046d4:	856c0052 */ 	lh	$t4,0x52($t3)
/*  f0046d8:	846f0014 */ 	lh	$t7,0x14($v1)
/*  f0046dc:	8c790000 */ 	lw	$t9,0x0($v1)
/*  f0046e0:	000fc080 */ 	sll	$t8,$t7,0x2
/*  f0046e4:	030fc023 */ 	subu	$t8,$t8,$t7
/*  f0046e8:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f0046ec:	03192021 */ 	addu	$a0,$t8,$t9
/*  f0046f0:	95780000 */ 	lhu	$t8,0x0($t3)
/*  f0046f4:	24840007 */ 	addiu	$a0,$a0,0x7
/*  f0046f8:	348e0007 */ 	ori	$t6,$a0,0x7
/*  f0046fc:	39cf0007 */ 	xori	$t7,$t6,0x7
/*  f004700:	33190080 */ 	andi	$t9,$t8,0x80
/*  f004704:	13200003 */ 	beqz	$t9,.L0f004714
/*  f004708:	01e02025 */ 	or	$a0,$t7,$zero
/*  f00470c:	10000151 */ 	b	.L0f004c54
/*  f004710:	ad6f0058 */ 	sw	$t7,0x58($t3)
.L0f004714:
/*  f004714:	8fae0070 */ 	lw	$t6,0x70($sp)
/*  f004718:	00008025 */ 	or	$s0,$zero,$zero
/*  f00471c:	00008825 */ 	or	$s1,$zero,$zero
/*  f004720:	19c0014c */ 	blez	$t6,.L0f004c54
/*  f004724:	00a05025 */ 	or	$t2,$a1,$zero
/*  f004728:	3c1f8007 */ 	lui	$ra,%hi(var80070764)
/*  f00472c:	27ff0764 */ 	addiu	$ra,$ra,%lo(var80070764)
/*  f004730:	00804825 */ 	or	$t1,$a0,$zero
.L0f004734:
/*  f004734:	8cef0000 */ 	lw	$t7,0x0($a3)
/*  f004738:	01e65821 */ 	addu	$t3,$t7,$a2
/*  f00473c:	8d780014 */ 	lw	$t8,0x14($t3)
/*  f004740:	8f190000 */ 	lw	$t9,0x0($t8)
/*  f004744:	03317021 */ 	addu	$t6,$t9,$s1
/*  f004748:	91cf0006 */ 	lbu	$t7,0x6($t6)
/*  f00474c:	31f80001 */ 	andi	$t8,$t7,0x1
/*  f004750:	1300003d */ 	beqz	$t8,.L0f004848
/*  f004754:	00000000 */ 	nop
/*  f004758:	91390000 */ 	lbu	$t9,0x0($t1)
/*  f00475c:	44923000 */ 	mtc1	$s2,$f6
/*  f004760:	3c017f1a */ 	lui	$at,%hi(var7f1a7ddc)
/*  f004764:	a1590000 */ 	sb	$t9,0x0($t2)
/*  f004768:	912e0001 */ 	lbu	$t6,0x1($t1)
/*  f00476c:	46803220 */ 	cvt.s.w	$f8,$f6
/*  f004770:	a14e0001 */ 	sb	$t6,0x1($t2)
/*  f004774:	912f0002 */ 	lbu	$t7,0x2($t1)
/*  f004778:	a14f0002 */ 	sb	$t7,0x2($t2)
/*  f00477c:	06410005 */ 	bgez	$s2,.L0f004794
/*  f004780:	c4247ddc */ 	lwc1	$f4,%lo(var7f1a7ddc)($at)
/*  f004784:	3c014f80 */ 	lui	$at,0x4f80
/*  f004788:	44815000 */ 	mtc1	$at,$f10
/*  f00478c:	00000000 */ 	nop
/*  f004790:	460a4200 */ 	add.s	$f8,$f8,$f10
.L0f004794:
/*  f004794:	91380003 */ 	lbu	$t8,0x3($t1)
/*  f004798:	46082402 */ 	mul.s	$f16,$f4,$f8
/*  f00479c:	3c014f80 */ 	lui	$at,0x4f80
/*  f0047a0:	44989000 */ 	mtc1	$t8,$f18
/*  f0047a4:	07010004 */ 	bgez	$t8,.L0f0047b8
/*  f0047a8:	468091a0 */ 	cvt.s.w	$f6,$f18
/*  f0047ac:	44815000 */ 	mtc1	$at,$f10
/*  f0047b0:	00000000 */ 	nop
/*  f0047b4:	460a3180 */ 	add.s	$f6,$f6,$f10
.L0f0047b8:
/*  f0047b8:	46103102 */ 	mul.s	$f4,$f6,$f16
/*  f0047bc:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f0047c0:	3c014f00 */ 	lui	$at,0x4f00
/*  f0047c4:	4459f800 */ 	cfc1	$t9,$31
/*  f0047c8:	44cef800 */ 	ctc1	$t6,$31
/*  f0047cc:	00000000 */ 	nop
/*  f0047d0:	46002224 */ 	cvt.w.s	$f8,$f4
/*  f0047d4:	444ef800 */ 	cfc1	$t6,$31
/*  f0047d8:	00000000 */ 	nop
/*  f0047dc:	31ce0078 */ 	andi	$t6,$t6,0x78
/*  f0047e0:	51c00013 */ 	beqzl	$t6,.L0f004830
/*  f0047e4:	440e4000 */ 	mfc1	$t6,$f8
/*  f0047e8:	44814000 */ 	mtc1	$at,$f8
/*  f0047ec:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f0047f0:	46082201 */ 	sub.s	$f8,$f4,$f8
/*  f0047f4:	44cef800 */ 	ctc1	$t6,$31
/*  f0047f8:	00000000 */ 	nop
/*  f0047fc:	46004224 */ 	cvt.w.s	$f8,$f8
/*  f004800:	444ef800 */ 	cfc1	$t6,$31
/*  f004804:	00000000 */ 	nop
/*  f004808:	31ce0078 */ 	andi	$t6,$t6,0x78
/*  f00480c:	15c00005 */ 	bnez	$t6,.L0f004824
/*  f004810:	00000000 */ 	nop
/*  f004814:	440e4000 */ 	mfc1	$t6,$f8
/*  f004818:	3c018000 */ 	lui	$at,0x8000
/*  f00481c:	10000007 */ 	b	.L0f00483c
/*  f004820:	01c17025 */ 	or	$t6,$t6,$at
.L0f004824:
/*  f004824:	10000005 */ 	b	.L0f00483c
/*  f004828:	240effff */ 	addiu	$t6,$zero,-1
/*  f00482c:	440e4000 */ 	mfc1	$t6,$f8
.L0f004830:
/*  f004830:	00000000 */ 	nop
/*  f004834:	05c0fffb */ 	bltz	$t6,.L0f004824
/*  f004838:	00000000 */ 	nop
.L0f00483c:
/*  f00483c:	44d9f800 */ 	ctc1	$t9,$31
/*  f004840:	100000fe */ 	b	.L0f004c3c
/*  f004844:	a14e0003 */ 	sb	$t6,0x3($t2)
.L0f004848:
/*  f004848:	3c07800a */ 	lui	$a3,%hi(g_Vars+0x284)
/*  f00484c:	8ce7a244 */ 	lw	$a3,%lo(g_Vars+0x284)($a3)
/*  f004850:	02406825 */ 	or	$t5,$s2,$zero
/*  f004854:	8ce800d8 */ 	lw	$t0,0xd8($a3)
/*  f004858:	15000013 */ 	bnez	$t0,.L0f0048a8
/*  f00485c:	00000000 */ 	nop
/*  f004860:	8fef0000 */ 	lw	$t7,0x0($ra)
/*  f004864:	15e00010 */ 	bnez	$t7,.L0f0048a8
/*  f004868:	00000000 */ 	nop
/*  f00486c:	8ce20480 */ 	lw	$v0,0x480($a3)
/*  f004870:	50400007 */ 	beqzl	$v0,.L0f004890
/*  f004874:	8cee1c54 */ 	lw	$t6,0x1c54($a3)
/*  f004878:	1040000b */ 	beqz	$v0,.L0f0048a8
/*  f00487c:	00000000 */ 	nop
/*  f004880:	80580037 */ 	lb	$t8,0x37($v0)
/*  f004884:	17000008 */ 	bnez	$t8,.L0f0048a8
/*  f004888:	00000000 */ 	nop
/*  f00488c:	8cee1c54 */ 	lw	$t6,0x1c54($a3)
.L0f004890:
/*  f004890:	8cf900c4 */ 	lw	$t9,0xc4($a3)
/*  f004894:	01c07827 */ 	nor	$t7,$t6,$zero
/*  f004898:	032fc024 */ 	and	$t8,$t9,$t7
/*  f00489c:	330e0001 */ 	andi	$t6,$t8,0x1
/*  f0048a0:	55c00016 */ 	bnezl	$t6,.L0f0048fc
/*  f0048a4:	91220001 */ 	lbu	$v0,0x1($t1)
.L0f0048a8:
/*  f0048a8:	5500002c */ 	bnezl	$t0,.L0f00495c
/*  f0048ac:	91260000 */ 	lbu	$a2,0x0($t1)
/*  f0048b0:	8ff90000 */ 	lw	$t9,0x0($ra)
/*  f0048b4:	57200029 */ 	bnezl	$t9,.L0f00495c
/*  f0048b8:	91260000 */ 	lbu	$a2,0x0($t1)
/*  f0048bc:	8ce20480 */ 	lw	$v0,0x480($a3)
/*  f0048c0:	50400007 */ 	beqzl	$v0,.L0f0048e0
/*  f0048c4:	8cee1c54 */ 	lw	$t6,0x1c54($a3)
/*  f0048c8:	50400024 */ 	beqzl	$v0,.L0f00495c
/*  f0048cc:	91260000 */ 	lbu	$a2,0x0($t1)
/*  f0048d0:	804f0037 */ 	lb	$t7,0x37($v0)
/*  f0048d4:	55e00021 */ 	bnezl	$t7,.L0f00495c
/*  f0048d8:	91260000 */ 	lbu	$a2,0x0($t1)
/*  f0048dc:	8cee1c54 */ 	lw	$t6,0x1c54($a3)
.L0f0048e0:
/*  f0048e0:	8cf800c4 */ 	lw	$t8,0xc4($a3)
/*  f0048e4:	01c0c827 */ 	nor	$t9,$t6,$zero
/*  f0048e8:	03197824 */ 	and	$t7,$t8,$t9
/*  f0048ec:	31ee0008 */ 	andi	$t6,$t7,0x8
/*  f0048f0:	51c0001a */ 	beqzl	$t6,.L0f00495c
/*  f0048f4:	91260000 */ 	lbu	$a2,0x0($t1)
/*  f0048f8:	91220001 */ 	lbu	$v0,0x1($t1)
.L0f0048fc:
/*  f0048fc:	91230000 */ 	lbu	$v1,0x0($t1)
/*  f004900:	0043082a */ 	slt	$at,$v0,$v1
/*  f004904:	5020000a */ 	beqzl	$at,.L0f004930
/*  f004908:	91230002 */ 	lbu	$v1,0x2($t1)
/*  f00490c:	91380002 */ 	lbu	$t8,0x2($t1)
/*  f004910:	00602025 */ 	or	$a0,$v1,$zero
/*  f004914:	00602825 */ 	or	$a1,$v1,$zero
/*  f004918:	0303082a */ 	slt	$at,$t8,$v1
/*  f00491c:	50200004 */ 	beqzl	$at,.L0f004930
/*  f004920:	91230002 */ 	lbu	$v1,0x2($t1)
/*  f004924:	1000000f */ 	b	.L0f004964
/*  f004928:	00603025 */ 	or	$a2,$v1,$zero
/*  f00492c:	91230002 */ 	lbu	$v1,0x2($t1)
.L0f004930:
/*  f004930:	0062082a */ 	slt	$at,$v1,$v0
/*  f004934:	10200003 */ 	beqz	$at,.L0f004944
/*  f004938:	00602025 */ 	or	$a0,$v1,$zero
/*  f00493c:	10000001 */ 	b	.L0f004944
/*  f004940:	00402025 */ 	or	$a0,$v0,$zero
.L0f004944:
/*  f004944:	00801025 */ 	or	$v0,$a0,$zero
/*  f004948:	00402025 */ 	or	$a0,$v0,$zero
/*  f00494c:	00402825 */ 	or	$a1,$v0,$zero
/*  f004950:	10000004 */ 	b	.L0f004964
/*  f004954:	00403025 */ 	or	$a2,$v0,$zero
/*  f004958:	91260000 */ 	lbu	$a2,0x0($t1)
.L0f00495c:
/*  f00495c:	91250001 */ 	lbu	$a1,0x1($t1)
/*  f004960:	91240002 */ 	lbu	$a0,0x2($t1)
.L0f004964:
/*  f004964:	91390003 */ 	lbu	$t9,0x3($t1)
/*  f004968:	00c5082a */ 	slt	$at,$a2,$a1
/*  f00496c:	00c01825 */ 	or	$v1,$a2,$zero
/*  f004970:	10200002 */ 	beqz	$at,.L0f00497c
/*  f004974:	afb90084 */ 	sw	$t9,0x84($sp)
/*  f004978:	00a01825 */ 	or	$v1,$a1,$zero
.L0f00497c:
/*  f00497c:	0064082a */ 	slt	$at,$v1,$a0
/*  f004980:	44864000 */ 	mtc1	$a2,$f8
/*  f004984:	50200003 */ 	beqzl	$at,.L0f004994
/*  f004988:	01a3082a */ 	slt	$at,$t5,$v1
/*  f00498c:	00801825 */ 	or	$v1,$a0,$zero
/*  f004990:	01a3082a */ 	slt	$at,$t5,$v1
.L0f004994:
/*  f004994:	5020000d */ 	beqzl	$at,.L0f0049cc
/*  f004998:	44832000 */ 	mtc1	$v1,$f4
/*  f00499c:	44839000 */ 	mtc1	$v1,$f18
/*  f0049a0:	44925000 */ 	mtc1	$s2,$f10
/*  f0049a4:	3c014f80 */ 	lui	$at,0x4f80
/*  f0049a8:	468090a0 */ 	cvt.s.w	$f2,$f18
/*  f0049ac:	06410004 */ 	bgez	$s2,.L0f0049c0
/*  f0049b0:	468051a0 */ 	cvt.s.w	$f6,$f10
/*  f0049b4:	44818000 */ 	mtc1	$at,$f16
/*  f0049b8:	00000000 */ 	nop
/*  f0049bc:	46103180 */ 	add.s	$f6,$f6,$f16
.L0f0049c0:
/*  f0049c0:	10000005 */ 	b	.L0f0049d8
/*  f0049c4:	46023003 */ 	div.s	$f0,$f6,$f2
/*  f0049c8:	44832000 */ 	mtc1	$v1,$f4
.L0f0049cc:
/*  f0049cc:	3c013f80 */ 	lui	$at,0x3f80
/*  f0049d0:	44810000 */ 	mtc1	$at,$f0
/*  f0049d4:	468020a0 */ 	cvt.s.w	$f2,$f4
.L0f0049d8:
/*  f0049d8:	468044a0 */ 	cvt.s.w	$f18,$f8
/*  f0049dc:	44853000 */ 	mtc1	$a1,$f6
/*  f0049e0:	00000000 */ 	nop
/*  f0049e4:	46803120 */ 	cvt.s.w	$f4,$f6
/*  f0049e8:	46009282 */ 	mul.s	$f10,$f18,$f0
/*  f0049ec:	4600540d */ 	trunc.w.s	$f16,$f10
/*  f0049f0:	44845000 */ 	mtc1	$a0,$f10
/*  f0049f4:	46002202 */ 	mul.s	$f8,$f4,$f0
/*  f0049f8:	440e8000 */ 	mfc1	$t6,$f16
/*  f0049fc:	00000000 */ 	nop
/*  f004a00:	afae0080 */ 	sw	$t6,0x80($sp)
/*  f004a04:	46805420 */ 	cvt.s.w	$f16,$f10
/*  f004a08:	4600448d */ 	trunc.w.s	$f18,$f8
/*  f004a0c:	46008182 */ 	mul.s	$f6,$f16,$f0
/*  f004a10:	44199000 */ 	mfc1	$t9,$f18
/*  f004a14:	46001202 */ 	mul.s	$f8,$f2,$f0
/*  f004a18:	afb9007c */ 	sw	$t9,0x7c($sp)
/*  f004a1c:	4600310d */ 	trunc.w.s	$f4,$f6
/*  f004a20:	4600448d */ 	trunc.w.s	$f18,$f8
/*  f004a24:	440e2000 */ 	mfc1	$t6,$f4
/*  f004a28:	00000000 */ 	nop
/*  f004a2c:	afae0078 */ 	sw	$t6,0x78($sp)
/*  f004a30:	8ce800d8 */ 	lw	$t0,0xd8($a3)
/*  f004a34:	44039000 */ 	mfc1	$v1,$f18
/*  f004a38:	15000013 */ 	bnez	$t0,.L0f004a88
/*  f004a3c:	00000000 */ 	nop
/*  f004a40:	8ff90000 */ 	lw	$t9,0x0($ra)
/*  f004a44:	17200010 */ 	bnez	$t9,.L0f004a88
/*  f004a48:	00000000 */ 	nop
/*  f004a4c:	8ce20480 */ 	lw	$v0,0x480($a3)
/*  f004a50:	50400007 */ 	beqzl	$v0,.L0f004a70
/*  f004a54:	8cf81c54 */ 	lw	$t8,0x1c54($a3)
/*  f004a58:	1040000b */ 	beqz	$v0,.L0f004a88
/*  f004a5c:	00000000 */ 	nop
/*  f004a60:	804f0037 */ 	lb	$t7,0x37($v0)
/*  f004a64:	15e00008 */ 	bnez	$t7,.L0f004a88
/*  f004a68:	00000000 */ 	nop
/*  f004a6c:	8cf81c54 */ 	lw	$t8,0x1c54($a3)
.L0f004a70:
/*  f004a70:	8cee00c4 */ 	lw	$t6,0xc4($a3)
/*  f004a74:	0300c827 */ 	nor	$t9,$t8,$zero
/*  f004a78:	01d97824 */ 	and	$t7,$t6,$t9
/*  f004a7c:	31f80001 */ 	andi	$t8,$t7,0x1
/*  f004a80:	17000015 */ 	bnez	$t8,.L0f004ad8
/*  f004a84:	00000000 */ 	nop
.L0f004a88:
/*  f004a88:	55000016 */ 	bnezl	$t0,.L0f004ae4
/*  f004a8c:	01837821 */ 	addu	$t7,$t4,$v1
/*  f004a90:	8fee0000 */ 	lw	$t6,0x0($ra)
/*  f004a94:	55c00013 */ 	bnezl	$t6,.L0f004ae4
/*  f004a98:	01837821 */ 	addu	$t7,$t4,$v1
/*  f004a9c:	8ce20480 */ 	lw	$v0,0x480($a3)
/*  f004aa0:	50400007 */ 	beqzl	$v0,.L0f004ac0
/*  f004aa4:	8cf81c54 */ 	lw	$t8,0x1c54($a3)
/*  f004aa8:	5040000e */ 	beqzl	$v0,.L0f004ae4
/*  f004aac:	01837821 */ 	addu	$t7,$t4,$v1
/*  f004ab0:	80590037 */ 	lb	$t9,0x37($v0)
/*  f004ab4:	5720000b */ 	bnezl	$t9,.L0f004ae4
/*  f004ab8:	01837821 */ 	addu	$t7,$t4,$v1
/*  f004abc:	8cf81c54 */ 	lw	$t8,0x1c54($a3)
.L0f004ac0:
/*  f004ac0:	8cef00c4 */ 	lw	$t7,0xc4($a3)
/*  f004ac4:	03007027 */ 	nor	$t6,$t8,$zero
/*  f004ac8:	01eec824 */ 	and	$t9,$t7,$t6
/*  f004acc:	33380008 */ 	andi	$t8,$t9,0x8
/*  f004ad0:	53000004 */ 	beqzl	$t8,.L0f004ae4
/*  f004ad4:	01837821 */ 	addu	$t7,$t4,$v1
.L0f004ad8:
/*  f004ad8:	10000006 */ 	b	.L0f004af4
/*  f004adc:	00006025 */ 	or	$t4,$zero,$zero
/*  f004ae0:	01837821 */ 	addu	$t7,$t4,$v1
.L0f004ae4:
/*  f004ae4:	29e1011e */ 	slti	$at,$t7,0x11e
/*  f004ae8:	14200002 */ 	bnez	$at,.L0f004af4
/*  f004aec:	240e011d */ 	addiu	$t6,$zero,0x11d
/*  f004af0:	01c36023 */ 	subu	$t4,$t6,$v1
.L0f004af4:
/*  f004af4:	8fb90080 */ 	lw	$t9,0x80($sp)
/*  f004af8:	8fb8007c */ 	lw	$t8,0x7c($sp)
/*  f004afc:	8fae0078 */ 	lw	$t6,0x78($sp)
/*  f004b00:	03387821 */ 	addu	$t7,$t9,$t8
/*  f004b04:	01eec821 */ 	addu	$t9,$t7,$t6
/*  f004b08:	5720000c */ 	bnezl	$t9,.L0f004b3c
/*  f004b0c:	8fae0080 */ 	lw	$t6,0x80($sp)
/*  f004b10:	44805000 */ 	mtc1	$zero,$f10
/*  f004b14:	c570005c */ 	lwc1	$f16,0x5c($t3)
/*  f004b18:	46105032 */ 	c.eq.s	$f10,$f16
/*  f004b1c:	00000000 */ 	nop
/*  f004b20:	45030006 */ 	bc1tl	.L0f004b3c
/*  f004b24:	8fae0080 */ 	lw	$t6,0x80($sp)
/*  f004b28:	95780000 */ 	lhu	$t8,0x0($t3)
/*  f004b2c:	330f2000 */ 	andi	$t7,$t8,0x2000
/*  f004b30:	51e0000b */ 	beqzl	$t7,.L0f004b60
/*  f004b34:	9578004e */ 	lhu	$t8,0x4e($t3)
/*  f004b38:	8fae0080 */ 	lw	$t6,0x80($sp)
.L0f004b3c:
/*  f004b3c:	8fb8007c */ 	lw	$t8,0x7c($sp)
/*  f004b40:	01ccc821 */ 	addu	$t9,$t6,$t4
/*  f004b44:	8fae0078 */ 	lw	$t6,0x78($sp)
/*  f004b48:	afb90080 */ 	sw	$t9,0x80($sp)
/*  f004b4c:	030c7821 */ 	addu	$t7,$t8,$t4
/*  f004b50:	01ccc821 */ 	addu	$t9,$t6,$t4
/*  f004b54:	afaf007c */ 	sw	$t7,0x7c($sp)
/*  f004b58:	afb90078 */ 	sw	$t9,0x78($sp)
/*  f004b5c:	9578004e */ 	lhu	$t8,0x4e($t3)
.L0f004b60:
/*  f004b60:	24010005 */ 	addiu	$at,$zero,0x5
/*  f004b64:	00187b02 */ 	srl	$t7,$t8,0xc
/*  f004b68:	55e1000f */ 	bnel	$t7,$at,.L0f004ba8
/*  f004b6c:	8fae0080 */ 	lw	$t6,0x80($sp)
/*  f004b70:	87a4009a */ 	lh	$a0,0x9a($sp)
/*  f004b74:	27a50080 */ 	addiu	$a1,$sp,0x80
/*  f004b78:	27a6007c */ 	addiu	$a2,$sp,0x7c
/*  f004b7c:	27a70078 */ 	addiu	$a3,$sp,0x78
/*  f004b80:	afa9003c */ 	sw	$t1,0x3c($sp)
/*  f004b84:	afaa0040 */ 	sw	$t2,0x40($sp)
/*  f004b88:	0fc6192e */ 	jal	scenarioCallback38
/*  f004b8c:	afac0074 */ 	sw	$t4,0x74($sp)
/*  f004b90:	3c1f8007 */ 	lui	$ra,%hi(var80070764)
/*  f004b94:	27ff0764 */ 	addiu	$ra,$ra,%lo(var80070764)
/*  f004b98:	8fa9003c */ 	lw	$t1,0x3c($sp)
/*  f004b9c:	8faa0040 */ 	lw	$t2,0x40($sp)
/*  f004ba0:	8fac0074 */ 	lw	$t4,0x74($sp)
/*  f004ba4:	8fae0080 */ 	lw	$t6,0x80($sp)
.L0f004ba8:
/*  f004ba8:	29c10100 */ 	slti	$at,$t6,0x100
/*  f004bac:	14200002 */ 	bnez	$at,.L0f004bb8
/*  f004bb0:	241900ff */ 	addiu	$t9,$zero,0xff
/*  f004bb4:	afb90080 */ 	sw	$t9,0x80($sp)
.L0f004bb8:
/*  f004bb8:	8fb8007c */ 	lw	$t8,0x7c($sp)
/*  f004bbc:	2b010100 */ 	slti	$at,$t8,0x100
/*  f004bc0:	14200002 */ 	bnez	$at,.L0f004bcc
/*  f004bc4:	240f00ff */ 	addiu	$t7,$zero,0xff
/*  f004bc8:	afaf007c */ 	sw	$t7,0x7c($sp)
.L0f004bcc:
/*  f004bcc:	8fae0078 */ 	lw	$t6,0x78($sp)
/*  f004bd0:	29c10100 */ 	slti	$at,$t6,0x100
/*  f004bd4:	14200002 */ 	bnez	$at,.L0f004be0
/*  f004bd8:	241900ff */ 	addiu	$t9,$zero,0xff
/*  f004bdc:	afb90078 */ 	sw	$t9,0x78($sp)
.L0f004be0:
/*  f004be0:	8fb80080 */ 	lw	$t8,0x80($sp)
/*  f004be4:	07030003 */ 	bgezl	$t8,.L0f004bf4
/*  f004be8:	8faf007c */ 	lw	$t7,0x7c($sp)
/*  f004bec:	afa00080 */ 	sw	$zero,0x80($sp)
/*  f004bf0:	8faf007c */ 	lw	$t7,0x7c($sp)
.L0f004bf4:
/*  f004bf4:	05e30003 */ 	bgezl	$t7,.L0f004c04
/*  f004bf8:	8fae0078 */ 	lw	$t6,0x78($sp)
/*  f004bfc:	afa0007c */ 	sw	$zero,0x7c($sp)
/*  f004c00:	8fae0078 */ 	lw	$t6,0x78($sp)
.L0f004c04:
/*  f004c04:	05c30003 */ 	bgezl	$t6,.L0f004c14
/*  f004c08:	8fb90080 */ 	lw	$t9,0x80($sp)
/*  f004c0c:	afa00078 */ 	sw	$zero,0x78($sp)
/*  f004c10:	8fb90080 */ 	lw	$t9,0x80($sp)
.L0f004c14:
/*  f004c14:	3c07800a */ 	lui	$a3,%hi(g_Rooms)
/*  f004c18:	24e74928 */ 	addiu	$a3,$a3,%lo(g_Rooms)
/*  f004c1c:	a1590000 */ 	sb	$t9,0x0($t2)
/*  f004c20:	8fb8007c */ 	lw	$t8,0x7c($sp)
/*  f004c24:	a1580001 */ 	sb	$t8,0x1($t2)
/*  f004c28:	8faf0078 */ 	lw	$t7,0x78($sp)
/*  f004c2c:	a14f0002 */ 	sb	$t7,0x2($t2)
/*  f004c30:	8fae0084 */ 	lw	$t6,0x84($sp)
/*  f004c34:	a14e0003 */ 	sb	$t6,0x3($t2)
/*  f004c38:	8fa60048 */ 	lw	$a2,0x48($sp)
.L0f004c3c:
/*  f004c3c:	8fb90070 */ 	lw	$t9,0x70($sp)
/*  f004c40:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f004c44:	2631000c */ 	addiu	$s1,$s1,0xc
/*  f004c48:	254a0004 */ 	addiu	$t2,$t2,0x4
/*  f004c4c:	1619feb9 */ 	bne	$s0,$t9,.L0f004734
/*  f004c50:	25290004 */ 	addiu	$t1,$t1,0x4
.L0f004c54:
/*  f004c54:	8fbf0024 */ 	lw	$ra,0x24($sp)
.L0f004c58:
/*  f004c58:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f004c5c:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f004c60:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f004c64:	03e00008 */ 	jr	$ra
/*  f004c68:	27bd0098 */ 	addiu	$sp,$sp,0x98
);

GLOBAL_ASM(
glabel func0f004c6c
/*  f004c6c:	27bdffb8 */ 	addiu	$sp,$sp,-72
/*  f004c70:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f004c74:	afb50028 */ 	sw	$s5,0x28($sp)
/*  f004c78:	afb40024 */ 	sw	$s4,0x24($sp)
/*  f004c7c:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f004c80:	afb2001c */ 	sw	$s2,0x1c($sp)
/*  f004c84:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f004c88:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f004c8c:	0fc5db69 */ 	jal	align16
/*  f004c90:	24042000 */ 	addiu	$a0,$zero,0x2000
/*  f004c94:	3c15800a */ 	lui	$s5,%hi(var8009cadc)
/*  f004c98:	26b5cadc */ 	addiu	$s5,$s5,%lo(var8009cadc)
/*  f004c9c:	8ea40000 */ 	lw	$a0,0x0($s5)
/*  f004ca0:	afa20044 */ 	sw	$v0,0x44($sp)
/*  f004ca4:	00047080 */ 	sll	$t6,$a0,0x2
/*  f004ca8:	0fc5db69 */ 	jal	align16
/*  f004cac:	01c02025 */ 	or	$a0,$t6,$zero
/*  f004cb0:	8ea40000 */ 	lw	$a0,0x0($s5)
/*  f004cb4:	afa20040 */ 	sw	$v0,0x40($sp)
/*  f004cb8:	00047880 */ 	sll	$t7,$a0,0x2
/*  f004cbc:	01e47823 */ 	subu	$t7,$t7,$a0
/*  f004cc0:	0fc5db69 */ 	jal	align16
/*  f004cc4:	000f2080 */ 	sll	$a0,$t7,0x2
/*  f004cc8:	8ea40000 */ 	lw	$a0,0x0($s5)
/*  f004ccc:	00409025 */ 	or	$s2,$v0,$zero
/*  f004cd0:	0004c080 */ 	sll	$t8,$a0,0x2
/*  f004cd4:	0fc5db69 */ 	jal	align16
/*  f004cd8:	03002025 */ 	or	$a0,$t8,$zero
/*  f004cdc:	8ea40000 */ 	lw	$a0,0x0($s5)
/*  f004ce0:	afa20038 */ 	sw	$v0,0x38($sp)
/*  f004ce4:	0004c840 */ 	sll	$t9,$a0,0x1
/*  f004ce8:	0fc5db69 */ 	jal	align16
/*  f004cec:	03202025 */ 	or	$a0,$t9,$zero
/*  f004cf0:	8ea50000 */ 	lw	$a1,0x0($s5)
/*  f004cf4:	00403825 */ 	or	$a3,$v0,$zero
/*  f004cf8:	00008825 */ 	or	$s1,$zero,$zero
/*  f004cfc:	18a00009 */ 	blez	$a1,.L0f004d24
/*  f004d00:	8fb40038 */ 	lw	$s4,0x38($sp)
.L0f004d04:
/*  f004d04:	12200002 */ 	beqz	$s1,.L0f004d10
/*  f004d08:	00115840 */ 	sll	$t3,$s1,0x1
/*  f004d0c:	028ba021 */ 	addu	$s4,$s4,$t3
.L0f004d10:
/*  f004d10:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f004d14:	0225082a */ 	slt	$at,$s1,$a1
/*  f004d18:	1420fffa */ 	bnez	$at,.L0f004d04
/*  f004d1c:	00000000 */ 	nop
/*  f004d20:	00008825 */ 	or	$s1,$zero,$zero
.L0f004d24:
/*  f004d24:	02802025 */ 	or	$a0,$s4,$zero
/*  f004d28:	0fc5db69 */ 	jal	align16
/*  f004d2c:	afa70034 */ 	sw	$a3,0x34($sp)
/*  f004d30:	0040a025 */ 	or	$s4,$v0,$zero
/*  f004d34:	0fc5db69 */ 	jal	align16
/*  f004d38:	00402025 */ 	or	$a0,$v0,$zero
/*  f004d3c:	00402025 */ 	or	$a0,$v0,$zero
/*  f004d40:	0c0048f2 */ 	jal	malloc
/*  f004d44:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f004d48:	8ea50000 */ 	lw	$a1,0x0($s5)
/*  f004d4c:	8fa30038 */ 	lw	$v1,0x38($sp)
/*  f004d50:	3c138006 */ 	lui	$s3,%hi(var80061430)
/*  f004d54:	26731430 */ 	addiu	$s3,$s3,%lo(var80061430)
/*  f004d58:	8fa70034 */ 	lw	$a3,0x34($sp)
/*  f004d5c:	ae620000 */ 	sw	$v0,0x0($s3)
/*  f004d60:	18a00014 */ 	blez	$a1,.L0f004db4
/*  f004d64:	00433021 */ 	addu	$a2,$v0,$v1
/*  f004d68:	00008025 */ 	or	$s0,$zero,$zero
.L0f004d6c:
/*  f004d6c:	52200008 */ 	beqzl	$s1,.L0f004d90
/*  f004d70:	8e6f0000 */ 	lw	$t7,0x0($s3)
/*  f004d74:	8e6c0000 */ 	lw	$t4,0x0($s3)
/*  f004d78:	00117040 */ 	sll	$t6,$s1,0x1
/*  f004d7c:	01906821 */ 	addu	$t5,$t4,$s0
/*  f004d80:	ada60000 */ 	sw	$a2,0x0($t5)
/*  f004d84:	10000004 */ 	b	.L0f004d98
/*  f004d88:	00ce3021 */ 	addu	$a2,$a2,$t6
/*  f004d8c:	8e6f0000 */ 	lw	$t7,0x0($s3)
.L0f004d90:
/*  f004d90:	01f0c021 */ 	addu	$t8,$t7,$s0
/*  f004d94:	af000000 */ 	sw	$zero,0x0($t8)
.L0f004d98:
/*  f004d98:	8ea50000 */ 	lw	$a1,0x0($s5)
/*  f004d9c:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f004da0:	26100004 */ 	addiu	$s0,$s0,0x4
/*  f004da4:	0225082a */ 	slt	$at,$s1,$a1
/*  f004da8:	1420fff0 */ 	bnez	$at,.L0f004d6c
/*  f004dac:	00000000 */ 	nop
/*  f004db0:	00008825 */ 	or	$s1,$zero,$zero
.L0f004db4:
/*  f004db4:	00a70019 */ 	multu	$a1,$a3
/*  f004db8:	8fb90044 */ 	lw	$t9,0x44($sp)
/*  f004dbc:	8fab0040 */ 	lw	$t3,0x40($sp)
/*  f004dc0:	0292a021 */ 	addu	$s4,$s4,$s2
/*  f004dc4:	0299a021 */ 	addu	$s4,$s4,$t9
/*  f004dc8:	028ba021 */ 	addu	$s4,$s4,$t3
/*  f004dcc:	0283a021 */ 	addu	$s4,$s4,$v1
/*  f004dd0:	afa70034 */ 	sw	$a3,0x34($sp)
/*  f004dd4:	00006012 */ 	mflo	$t4
/*  f004dd8:	028c2021 */ 	addu	$a0,$s4,$t4
/*  f004ddc:	0fc5db69 */ 	jal	align16
/*  f004de0:	00000000 */ 	nop
/*  f004de4:	0c0048c9 */ 	jal	func00012324
/*  f004de8:	00000000 */ 	nop
/*  f004dec:	8fad0044 */ 	lw	$t5,0x44($sp)
/*  f004df0:	3c01800a */ 	lui	$at,%hi(var8009cad0)
/*  f004df4:	ac22cad0 */ 	sw	$v0,%lo(var8009cad0)($at)
/*  f004df8:	3c01800a */ 	lui	$at,%hi(var8009cad8)
/*  f004dfc:	004d1821 */ 	addu	$v1,$v0,$t5
/*  f004e00:	ac23cad8 */ 	sw	$v1,%lo(var8009cad8)($at)
/*  f004e04:	8fa70034 */ 	lw	$a3,0x34($sp)
/*  f004e08:	8ea50000 */ 	lw	$a1,0x0($s5)
/*  f004e0c:	8fae0040 */ 	lw	$t6,0x40($sp)
/*  f004e10:	8fb40038 */ 	lw	$s4,0x38($sp)
/*  f004e14:	00a70019 */ 	multu	$a1,$a3
/*  f004e18:	3c128006 */ 	lui	$s2,%hi(var8006142c)
/*  f004e1c:	006e2021 */ 	addu	$a0,$v1,$t6
/*  f004e20:	2652142c */ 	addiu	$s2,$s2,%lo(var8006142c)
/*  f004e24:	00944021 */ 	addu	$t0,$a0,$s4
/*  f004e28:	ae440000 */ 	sw	$a0,0x0($s2)
/*  f004e2c:	3c018006 */ 	lui	$at,%hi(var80061428)
/*  f004e30:	34028009 */ 	dli	$v0,0x8009
/*  f004e34:	00008025 */ 	or	$s0,$zero,$zero
/*  f004e38:	0000c012 */ 	mflo	$t8
/*  f004e3c:	01183021 */ 	addu	$a2,$t0,$t8
/*  f004e40:	ac261428 */ 	sw	$a2,%lo(var80061428)($at)
/*  f004e44:	18a0001a */ 	blez	$a1,.L0f004eb0
/*  f004e48:	01003025 */ 	or	$a2,$t0,$zero
.L0f004e4c:
/*  f004e4c:	8e590000 */ 	lw	$t9,0x0($s2)
/*  f004e50:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f004e54:	0287a021 */ 	addu	$s4,$s4,$a3
/*  f004e58:	03305821 */ 	addu	$t3,$t9,$s0
/*  f004e5c:	ad660000 */ 	sw	$a2,0x0($t3)
/*  f004e60:	8ea50000 */ 	lw	$a1,0x0($s5)
/*  f004e64:	00c73021 */ 	addu	$a2,$a2,$a3
/*  f004e68:	00002025 */ 	or	$a0,$zero,$zero
/*  f004e6c:	18a0000c */ 	blez	$a1,.L0f004ea0
/*  f004e70:	00001825 */ 	or	$v1,$zero,$zero
/*  f004e74:	8e4c0000 */ 	lw	$t4,0x0($s2)
.L0f004e78:
/*  f004e78:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f004e7c:	01906821 */ 	addu	$t5,$t4,$s0
/*  f004e80:	8dae0000 */ 	lw	$t6,0x0($t5)
/*  f004e84:	01c3c021 */ 	addu	$t8,$t6,$v1
/*  f004e88:	a7020000 */ 	sh	$v0,0x0($t8)
/*  f004e8c:	8ea50000 */ 	lw	$a1,0x0($s5)
/*  f004e90:	24630002 */ 	addiu	$v1,$v1,0x2
/*  f004e94:	0085082a */ 	slt	$at,$a0,$a1
/*  f004e98:	5420fff7 */ 	bnezl	$at,.L0f004e78
/*  f004e9c:	8e4c0000 */ 	lw	$t4,0x0($s2)
.L0f004ea0:
/*  f004ea0:	0225082a */ 	slt	$at,$s1,$a1
/*  f004ea4:	1420ffe9 */ 	bnez	$at,.L0f004e4c
/*  f004ea8:	26100004 */ 	addiu	$s0,$s0,0x4
/*  f004eac:	00008825 */ 	or	$s1,$zero,$zero
.L0f004eb0:
/*  f004eb0:	18a0001c */ 	blez	$a1,.L0f004f24
/*  f004eb4:	00008025 */ 	or	$s0,$zero,$zero
/*  f004eb8:	0000a025 */ 	or	$s4,$zero,$zero
.L0f004ebc:
/*  f004ebc:	0fc2d95b */ 	jal	func0f0b656c
/*  f004ec0:	02202025 */ 	or	$a0,$s1,$zero
/*  f004ec4:	3c013f00 */ 	lui	$at,0x3f00
/*  f004ec8:	44812000 */ 	mtc1	$at,$f4
/*  f004ecc:	00007825 */ 	or	$t7,$zero,$zero
/*  f004ed0:	3c19800a */ 	lui	$t9,%hi(var8009cad8)
/*  f004ed4:	4600203c */ 	c.lt.s	$f4,$f0
/*  f004ed8:	00000000 */ 	nop
/*  f004edc:	45000002 */ 	bc1f	.L0f004ee8
/*  f004ee0:	00000000 */ 	nop
/*  f004ee4:	240f0001 */ 	addiu	$t7,$zero,0x1
.L0f004ee8:
/*  f004ee8:	8f39cad8 */ 	lw	$t9,%lo(var8009cad8)($t9)
/*  f004eec:	3c0c8006 */ 	lui	$t4,%hi(var80061428)
/*  f004ef0:	02202025 */ 	or	$a0,$s1,$zero
/*  f004ef4:	03305821 */ 	addu	$t3,$t9,$s0
/*  f004ef8:	ad6f0000 */ 	sw	$t7,0x0($t3)
/*  f004efc:	8d8c1428 */ 	lw	$t4,%lo(var80061428)($t4)
/*  f004f00:	0c005f38 */ 	jal	func00017ce0
/*  f004f04:	028c2821 */ 	addu	$a1,$s4,$t4
/*  f004f08:	8ea50000 */ 	lw	$a1,0x0($s5)
/*  f004f0c:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f004f10:	26100004 */ 	addiu	$s0,$s0,0x4
/*  f004f14:	0225082a */ 	slt	$at,$s1,$a1
/*  f004f18:	1420ffe8 */ 	bnez	$at,.L0f004ebc
/*  f004f1c:	2694000c */ 	addiu	$s4,$s4,0xc
/*  f004f20:	00008825 */ 	or	$s1,$zero,$zero
.L0f004f24:
/*  f004f24:	3c0d800a */ 	lui	$t5,%hi(g_Vars+0x4b4)
/*  f004f28:	8dada474 */ 	lw	$t5,%lo(g_Vars+0x4b4)($t5)
/*  f004f2c:	24010033 */ 	addiu	$at,$zero,0x33
/*  f004f30:	3c18800a */ 	lui	$t8,%hi(var8009cad8)
/*  f004f34:	15a10005 */ 	bne	$t5,$at,.L0f004f4c
/*  f004f38:	00005025 */ 	or	$t2,$zero,$zero
/*  f004f3c:	8f18cad8 */ 	lw	$t8,%lo(var8009cad8)($t8)
/*  f004f40:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f004f44:	af0e0000 */ 	sw	$t6,0x0($t8)
/*  f004f48:	8ea50000 */ 	lw	$a1,0x0($s5)
.L0f004f4c:
/*  f004f4c:	18a0000e */ 	blez	$a1,.L0f004f88
/*  f004f50:	00008025 */ 	or	$s0,$zero,$zero
/*  f004f54:	8e590000 */ 	lw	$t9,0x0($s2)
.L0f004f58:
/*  f004f58:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f004f5c:	03307821 */ 	addu	$t7,$t9,$s0
/*  f004f60:	8deb0000 */ 	lw	$t3,0x0($t7)
/*  f004f64:	26100004 */ 	addiu	$s0,$s0,0x4
/*  f004f68:	016a6021 */ 	addu	$t4,$t3,$t2
/*  f004f6c:	a5800000 */ 	sh	$zero,0x0($t4)
/*  f004f70:	8ead0000 */ 	lw	$t5,0x0($s5)
/*  f004f74:	254a0002 */ 	addiu	$t2,$t2,0x2
/*  f004f78:	022d082a */ 	slt	$at,$s1,$t5
/*  f004f7c:	5420fff6 */ 	bnezl	$at,.L0f004f58
/*  f004f80:	8e590000 */ 	lw	$t9,0x0($s2)
/*  f004f84:	00008825 */ 	or	$s1,$zero,$zero
.L0f004f88:
/*  f004f88:	0fc01417 */ 	jal	func0f00505c
/*  f004f8c:	00000000 */ 	nop
/*  f004f90:	8ea50000 */ 	lw	$a1,0x0($s5)
/*  f004f94:	58a00029 */ 	blezl	$a1,.L0f00503c
/*  f004f98:	8fbf002c */ 	lw	$ra,0x2c($sp)
.L0f004f9c:
/*  f004f9c:	1a200022 */ 	blez	$s1,.L0f005028
/*  f004fa0:	00002025 */ 	or	$a0,$zero,$zero
/*  f004fa4:	00115040 */ 	sll	$t2,$s1,0x1
/*  f004fa8:	00118080 */ 	sll	$s0,$s1,0x2
/*  f004fac:	00001825 */ 	or	$v1,$zero,$zero
/*  f004fb0:	00003825 */ 	or	$a3,$zero,$zero
.L0f004fb4:
/*  f004fb4:	8e420000 */ 	lw	$v0,0x0($s2)
/*  f004fb8:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f004fbc:	00507021 */ 	addu	$t6,$v0,$s0
/*  f004fc0:	00477821 */ 	addu	$t7,$v0,$a3
/*  f004fc4:	8dd80000 */ 	lw	$t8,0x0($t6)
/*  f004fc8:	8deb0000 */ 	lw	$t3,0x0($t7)
/*  f004fcc:	24e70004 */ 	addiu	$a3,$a3,0x4
/*  f004fd0:	0303c821 */ 	addu	$t9,$t8,$v1
/*  f004fd4:	016a6021 */ 	addu	$t4,$t3,$t2
/*  f004fd8:	97250000 */ 	lhu	$a1,0x0($t9)
/*  f004fdc:	95890000 */ 	lhu	$t1,0x0($t4)
/*  f004fe0:	00a9082a */ 	slt	$at,$a1,$t1
/*  f004fe4:	50200008 */ 	beqzl	$at,.L0f005008
/*  f004fe8:	8e6f0000 */ 	lw	$t7,0x0($s3)
/*  f004fec:	8e6d0000 */ 	lw	$t5,0x0($s3)
/*  f004ff0:	01b07021 */ 	addu	$t6,$t5,$s0
/*  f004ff4:	8dd80000 */ 	lw	$t8,0x0($t6)
/*  f004ff8:	0303c821 */ 	addu	$t9,$t8,$v1
/*  f004ffc:	10000006 */ 	b	.L0f005018
/*  f005000:	a7250000 */ 	sh	$a1,0x0($t9)
/*  f005004:	8e6f0000 */ 	lw	$t7,0x0($s3)
.L0f005008:
/*  f005008:	01f05821 */ 	addu	$t3,$t7,$s0
/*  f00500c:	8d6c0000 */ 	lw	$t4,0x0($t3)
/*  f005010:	01836821 */ 	addu	$t5,$t4,$v1
/*  f005014:	a5a90000 */ 	sh	$t1,0x0($t5)
.L0f005018:
/*  f005018:	1491ffe6 */ 	bne	$a0,$s1,.L0f004fb4
/*  f00501c:	24630002 */ 	addiu	$v1,$v1,0x2
/*  f005020:	3c05800a */ 	lui	$a1,%hi(var8009cadc)
/*  f005024:	8ca5cadc */ 	lw	$a1,%lo(var8009cadc)($a1)
.L0f005028:
/*  f005028:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f00502c:	0225082a */ 	slt	$at,$s1,$a1
/*  f005030:	1420ffda */ 	bnez	$at,.L0f004f9c
/*  f005034:	00000000 */ 	nop
/*  f005038:	8fbf002c */ 	lw	$ra,0x2c($sp)
.L0f00503c:
/*  f00503c:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f005040:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f005044:	8fb2001c */ 	lw	$s2,0x1c($sp)
/*  f005048:	8fb30020 */ 	lw	$s3,0x20($sp)
/*  f00504c:	8fb40024 */ 	lw	$s4,0x24($sp)
/*  f005050:	8fb50028 */ 	lw	$s5,0x28($sp)
/*  f005054:	03e00008 */ 	jr	$ra
/*  f005058:	27bd0048 */ 	addiu	$sp,$sp,0x48
);

GLOBAL_ASM(
glabel func0f00505c
/*  f00505c:	27bdff80 */ 	addiu	$sp,$sp,-128
/*  f005060:	3c0e800a */ 	lui	$t6,%hi(var8009cadc)
/*  f005064:	8dcecadc */ 	lw	$t6,%lo(var8009cadc)($t6)
/*  f005068:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f00506c:	afbe0038 */ 	sw	$s8,0x38($sp)
/*  f005070:	afb70034 */ 	sw	$s7,0x34($sp)
/*  f005074:	afb60030 */ 	sw	$s6,0x30($sp)
/*  f005078:	afb5002c */ 	sw	$s5,0x2c($sp)
/*  f00507c:	afb40028 */ 	sw	$s4,0x28($sp)
/*  f005080:	afb30024 */ 	sw	$s3,0x24($sp)
/*  f005084:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f005088:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f00508c:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f005090:	19c000c3 */ 	blez	$t6,.L0f0053a0
/*  f005094:	00004825 */ 	or	$t1,$zero,$zero
/*  f005098:	3c0a800a */ 	lui	$t2,%hi(var8009cad0)
/*  f00509c:	3c078006 */ 	lui	$a3,%hi(var8006142c)
/*  f0050a0:	24e7142c */ 	addiu	$a3,$a3,%lo(var8006142c)
/*  f0050a4:	254acad0 */ 	addiu	$t2,$t2,%lo(var8009cad0)
/*  f0050a8:	8d4f0000 */ 	lw	$t7,0x0($t2)
.L0f0050ac:
/*  f0050ac:	afa0007c */ 	sw	$zero,0x7c($sp)
/*  f0050b0:	3c03800a */ 	lui	$v1,%hi(g_Rooms)
/*  f0050b4:	ade90000 */ 	sw	$t1,0x0($t7)
/*  f0050b8:	8c634928 */ 	lw	$v1,%lo(g_Rooms)($v1)
/*  f0050bc:	24060001 */ 	addiu	$a2,$zero,0x1
.L0f0050c0:
/*  f0050c0:	8fb9007c */ 	lw	$t9,0x7c($sp)
/*  f0050c4:	8d580000 */ 	lw	$t8,0x0($t2)
/*  f0050c8:	00195880 */ 	sll	$t3,$t9,0x2
/*  f0050cc:	030b6021 */ 	addu	$t4,$t8,$t3
/*  f0050d0:	8d960000 */ 	lw	$s6,0x0($t4)
/*  f0050d4:	afa00070 */ 	sw	$zero,0x70($sp)
/*  f0050d8:	001668c0 */ 	sll	$t5,$s6,0x3
/*  f0050dc:	afad0044 */ 	sw	$t5,0x44($sp)
.L0f0050e0:
/*  f0050e0:	8fb90070 */ 	lw	$t9,0x70($sp)
/*  f0050e4:	3c0e800a */ 	lui	$t6,%hi(g_Portals)
/*  f0050e8:	8dce4cc8 */ 	lw	$t6,%lo(g_Portals)($t6)
/*  f0050ec:	8faf0044 */ 	lw	$t7,0x44($sp)
/*  f0050f0:	0000f025 */ 	or	$s8,$zero,$zero
/*  f0050f4:	13200003 */ 	beqz	$t9,.L0f005104
/*  f0050f8:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f0050fc:	10000002 */ 	b	.L0f005108
/*  f005100:	84440004 */ 	lh	$a0,0x4($v0)
.L0f005104:
/*  f005104:	84440002 */ 	lh	$a0,0x2($v0)
.L0f005108:
/*  f005108:	000440c0 */ 	sll	$t0,$a0,0x3
/*  f00510c:	01044021 */ 	addu	$t0,$t0,$a0
/*  f005110:	00084080 */ 	sll	$t0,$t0,0x2
/*  f005114:	01044023 */ 	subu	$t0,$t0,$a0
/*  f005118:	00084080 */ 	sll	$t0,$t0,0x2
/*  f00511c:	00681021 */ 	addu	$v0,$v1,$t0
/*  f005120:	80580005 */ 	lb	$t8,0x5($v0)
/*  f005124:	0000b825 */ 	or	$s7,$zero,$zero
/*  f005128:	5b00008e */ 	blezl	$t8,.L0f005364
/*  f00512c:	8fb90070 */ 	lw	$t9,0x70($sp)
/*  f005130:	844c000e */ 	lh	$t4,0xe($v0)
.L0f005134:
/*  f005134:	3c0b800a */ 	lui	$t3,%hi(var800a4ce0)
/*  f005138:	8d6b4ce0 */ 	lw	$t3,%lo(var800a4ce0)($t3)
/*  f00513c:	000c6840 */ 	sll	$t5,$t4,0x1
/*  f005140:	3c19800a */ 	lui	$t9,%hi(var8009cad8)
/*  f005144:	016d7021 */ 	addu	$t6,$t3,$t5
/*  f005148:	01d77821 */ 	addu	$t7,$t6,$s7
/*  f00514c:	85f30000 */ 	lh	$s3,0x0($t7)
/*  f005150:	1276007a */ 	beq	$s3,$s6,.L0f00533c
/*  f005154:	00000000 */ 	nop
/*  f005158:	8f39cad8 */ 	lw	$t9,%lo(var8009cad8)($t9)
/*  f00515c:	00138080 */ 	sll	$s0,$s3,0x2
/*  f005160:	0330c021 */ 	addu	$t8,$t9,$s0
/*  f005164:	8f0c0000 */ 	lw	$t4,0x0($t8)
/*  f005168:	11800074 */ 	beqz	$t4,.L0f00533c
/*  f00516c:	00000000 */ 	nop
/*  f005170:	8ce30000 */ 	lw	$v1,0x0($a3)
/*  f005174:	0016a080 */ 	sll	$s4,$s6,0x2
/*  f005178:	00139040 */ 	sll	$s2,$s3,0x1
/*  f00517c:	00745821 */ 	addu	$t3,$v1,$s4
/*  f005180:	8d6d0000 */ 	lw	$t5,0x0($t3)
/*  f005184:	34018000 */ 	dli	$at,0x8000
/*  f005188:	00168840 */ 	sll	$s1,$s6,0x1
/*  f00518c:	01b27021 */ 	addu	$t6,$t5,$s2
/*  f005190:	95cf0000 */ 	lhu	$t7,0x0($t6)
/*  f005194:	0009a880 */ 	sll	$s5,$t1,0x2
/*  f005198:	2405000c */ 	addiu	$a1,$zero,0xc
/*  f00519c:	01e1082a */ 	slt	$at,$t7,$at
/*  f0051a0:	5420004c */ 	bnezl	$at,.L0f0052d4
/*  f0051a4:	00756821 */ 	addu	$t5,$v1,$s5
/*  f0051a8:	02c50019 */ 	multu	$s6,$a1
/*  f0051ac:	3c048006 */ 	lui	$a0,%hi(var80061428)
/*  f0051b0:	8c841428 */ 	lw	$a0,%lo(var80061428)($a0)
/*  f0051b4:	0000c812 */ 	mflo	$t9
/*  f0051b8:	00991021 */ 	addu	$v0,$a0,$t9
/*  f0051bc:	c4440000 */ 	lwc1	$f4,0x0($v0)
/*  f0051c0:	02650019 */ 	multu	$s3,$a1
/*  f0051c4:	c4480004 */ 	lwc1	$f8,0x4($v0)
/*  f0051c8:	c4500008 */ 	lwc1	$f16,0x8($v0)
/*  f0051cc:	0000c012 */ 	mflo	$t8
/*  f0051d0:	00981821 */ 	addu	$v1,$a0,$t8
/*  f0051d4:	c4660000 */ 	lwc1	$f6,0x0($v1)
/*  f0051d8:	c46a0004 */ 	lwc1	$f10,0x4($v1)
/*  f0051dc:	c4720008 */ 	lwc1	$f18,0x8($v1)
/*  f0051e0:	46062001 */ 	sub.s	$f0,$f4,$f6
/*  f0051e4:	afa90074 */ 	sw	$t1,0x74($sp)
/*  f0051e8:	afa80040 */ 	sw	$t0,0x40($sp)
/*  f0051ec:	460a4081 */ 	sub.s	$f2,$f8,$f10
/*  f0051f0:	46000102 */ 	mul.s	$f4,$f0,$f0
/*  f0051f4:	afa60078 */ 	sw	$a2,0x78($sp)
/*  f0051f8:	46128381 */ 	sub.s	$f14,$f16,$f18
/*  f0051fc:	46021182 */ 	mul.s	$f6,$f2,$f2
/*  f005200:	46062200 */ 	add.s	$f8,$f4,$f6
/*  f005204:	460e7282 */ 	mul.s	$f10,$f14,$f14
/*  f005208:	0c012974 */ 	jal	sqrtf
/*  f00520c:	460a4300 */ 	add.s	$f12,$f8,$f10
/*  f005210:	444cf800 */ 	cfc1	$t4,$31
/*  f005214:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f005218:	44c2f800 */ 	ctc1	$v0,$31
/*  f00521c:	3c078006 */ 	lui	$a3,%hi(var8006142c)
/*  f005220:	3c0a800a */ 	lui	$t2,%hi(var8009cad0)
/*  f005224:	46000424 */ 	cvt.w.s	$f16,$f0
/*  f005228:	254acad0 */ 	addiu	$t2,$t2,%lo(var8009cad0)
/*  f00522c:	24e7142c */ 	addiu	$a3,$a3,%lo(var8006142c)
/*  f005230:	8fa60078 */ 	lw	$a2,0x78($sp)
/*  f005234:	4442f800 */ 	cfc1	$v0,$31
/*  f005238:	8fa80040 */ 	lw	$t0,0x40($sp)
/*  f00523c:	8fa90074 */ 	lw	$t1,0x74($sp)
/*  f005240:	30420078 */ 	andi	$v0,$v0,0x78
/*  f005244:	10400012 */ 	beqz	$v0,.L0f005290
/*  f005248:	3c014f00 */ 	lui	$at,0x4f00
/*  f00524c:	44818000 */ 	mtc1	$at,$f16
/*  f005250:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f005254:	46100401 */ 	sub.s	$f16,$f0,$f16
/*  f005258:	44c2f800 */ 	ctc1	$v0,$31
/*  f00525c:	00000000 */ 	nop
/*  f005260:	46008424 */ 	cvt.w.s	$f16,$f16
/*  f005264:	4442f800 */ 	cfc1	$v0,$31
/*  f005268:	00000000 */ 	nop
/*  f00526c:	30420078 */ 	andi	$v0,$v0,0x78
/*  f005270:	14400005 */ 	bnez	$v0,.L0f005288
/*  f005274:	00000000 */ 	nop
/*  f005278:	44028000 */ 	mfc1	$v0,$f16
/*  f00527c:	3c018000 */ 	lui	$at,0x8000
/*  f005280:	10000007 */ 	b	.L0f0052a0
/*  f005284:	00411025 */ 	or	$v0,$v0,$at
.L0f005288:
/*  f005288:	10000005 */ 	b	.L0f0052a0
/*  f00528c:	2402ffff */ 	addiu	$v0,$zero,-1
.L0f005290:
/*  f005290:	44028000 */ 	mfc1	$v0,$f16
/*  f005294:	00000000 */ 	nop
/*  f005298:	0440fffb */ 	bltz	$v0,.L0f005288
/*  f00529c:	00000000 */ 	nop
.L0f0052a0:
/*  f0052a0:	8ceb0000 */ 	lw	$t3,0x0($a3)
/*  f0052a4:	44ccf800 */ 	ctc1	$t4,$31
/*  f0052a8:	01746821 */ 	addu	$t5,$t3,$s4
/*  f0052ac:	8dae0000 */ 	lw	$t6,0x0($t5)
/*  f0052b0:	01d27821 */ 	addu	$t7,$t6,$s2
/*  f0052b4:	a5e20000 */ 	sh	$v0,0x0($t7)
/*  f0052b8:	8cf90000 */ 	lw	$t9,0x0($a3)
/*  f0052bc:	0330c021 */ 	addu	$t8,$t9,$s0
/*  f0052c0:	8f0c0000 */ 	lw	$t4,0x0($t8)
/*  f0052c4:	01915821 */ 	addu	$t3,$t4,$s1
/*  f0052c8:	a5620000 */ 	sh	$v0,0x0($t3)
/*  f0052cc:	8ce30000 */ 	lw	$v1,0x0($a3)
/*  f0052d0:	00756821 */ 	addu	$t5,$v1,$s5
.L0f0052d4:
/*  f0052d4:	00707021 */ 	addu	$t6,$v1,$s0
/*  f0052d8:	8dcf0000 */ 	lw	$t7,0x0($t6)
/*  f0052dc:	8da20000 */ 	lw	$v0,0x0($t5)
/*  f0052e0:	01f1c821 */ 	addu	$t9,$t7,$s1
/*  f0052e4:	00516021 */ 	addu	$t4,$v0,$s1
/*  f0052e8:	958b0000 */ 	lhu	$t3,0x0($t4)
/*  f0052ec:	97380000 */ 	lhu	$t8,0x0($t9)
/*  f0052f0:	030b2021 */ 	addu	$a0,$t8,$t3
/*  f0052f4:	308dffff */ 	andi	$t5,$a0,0xffff
/*  f0052f8:	29a116a9 */ 	slti	$at,$t5,0x16a9
/*  f0052fc:	1020000f */ 	beqz	$at,.L0f00533c
/*  f005300:	01a02025 */ 	or	$a0,$t5,$zero
/*  f005304:	11360004 */ 	beq	$t1,$s6,.L0f005318
/*  f005308:	00527821 */ 	addu	$t7,$v0,$s2
/*  f00530c:	95f90000 */ 	lhu	$t9,0x0($t7)
/*  f005310:	01b9082a */ 	slt	$at,$t5,$t9
/*  f005314:	10200009 */ 	beqz	$at,.L0f00533c
.L0f005318:
/*  f005318:	00526021 */ 	addu	$t4,$v0,$s2
/*  f00531c:	a5840000 */ 	sh	$a0,0x0($t4)
/*  f005320:	8d580000 */ 	lw	$t8,0x0($t2)
/*  f005324:	00065880 */ 	sll	$t3,$a2,0x2
/*  f005328:	24c60001 */ 	addiu	$a2,$a2,0x1
/*  f00532c:	30ce07ff */ 	andi	$t6,$a2,0x7ff
/*  f005330:	030b6821 */ 	addu	$t5,$t8,$t3
/*  f005334:	adb30000 */ 	sw	$s3,0x0($t5)
/*  f005338:	01c03025 */ 	or	$a2,$t6,$zero
.L0f00533c:
/*  f00533c:	3c03800a */ 	lui	$v1,%hi(g_Rooms)
/*  f005340:	8c634928 */ 	lw	$v1,%lo(g_Rooms)($v1)
/*  f005344:	27de0001 */ 	addiu	$s8,$s8,0x1
/*  f005348:	26f70002 */ 	addiu	$s7,$s7,0x2
/*  f00534c:	00681021 */ 	addu	$v0,$v1,$t0
/*  f005350:	804f0005 */ 	lb	$t7,0x5($v0)
/*  f005354:	03cf082a */ 	slt	$at,$s8,$t7
/*  f005358:	5420ff76 */ 	bnezl	$at,.L0f005134
/*  f00535c:	844c000e */ 	lh	$t4,0xe($v0)
/*  f005360:	8fb90070 */ 	lw	$t9,0x70($sp)
.L0f005364:
/*  f005364:	24010002 */ 	addiu	$at,$zero,0x2
/*  f005368:	272c0001 */ 	addiu	$t4,$t9,0x1
/*  f00536c:	1581ff5c */ 	bne	$t4,$at,.L0f0050e0
/*  f005370:	afac0070 */ 	sw	$t4,0x70($sp)
/*  f005374:	8fb8007c */ 	lw	$t8,0x7c($sp)
/*  f005378:	270b0001 */ 	addiu	$t3,$t8,0x1
/*  f00537c:	316d07ff */ 	andi	$t5,$t3,0x7ff
/*  f005380:	15a6ff4f */ 	bne	$t5,$a2,.L0f0050c0
/*  f005384:	afad007c */ 	sw	$t5,0x7c($sp)
/*  f005388:	3c0e800a */ 	lui	$t6,%hi(var8009cadc)
/*  f00538c:	8dcecadc */ 	lw	$t6,%lo(var8009cadc)($t6)
/*  f005390:	25290001 */ 	addiu	$t1,$t1,0x1
/*  f005394:	012e082a */ 	slt	$at,$t1,$t6
/*  f005398:	5420ff44 */ 	bnezl	$at,.L0f0050ac
/*  f00539c:	8d4f0000 */ 	lw	$t7,0x0($t2)
.L0f0053a0:
/*  f0053a0:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f0053a4:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f0053a8:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f0053ac:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f0053b0:	8fb30024 */ 	lw	$s3,0x24($sp)
/*  f0053b4:	8fb40028 */ 	lw	$s4,0x28($sp)
/*  f0053b8:	8fb5002c */ 	lw	$s5,0x2c($sp)
/*  f0053bc:	8fb60030 */ 	lw	$s6,0x30($sp)
/*  f0053c0:	8fb70034 */ 	lw	$s7,0x34($sp)
/*  f0053c4:	8fbe0038 */ 	lw	$s8,0x38($sp)
/*  f0053c8:	03e00008 */ 	jr	$ra
/*  f0053cc:	27bd0080 */ 	addiu	$sp,$sp,0x80
);

GLOBAL_ASM(
glabel func0f0053d0
.late_rodata
glabel var7f1a7de0
.word 0x46fffe00
.text
/*  f0053d0:	27bdff90 */ 	addiu	$sp,$sp,-112
/*  f0053d4:	8fae0088 */ 	lw	$t6,0x88($sp)
/*  f0053d8:	3c017f1a */ 	lui	$at,%hi(var7f1a7de0)
/*  f0053dc:	c4247de0 */ 	lwc1	$f4,%lo(var7f1a7de0)($at)
/*  f0053e0:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f0053e4:	afa40070 */ 	sw	$a0,0x70($sp)
/*  f0053e8:	afa60078 */ 	sw	$a2,0x78($sp)
/*  f0053ec:	afa7007c */ 	sw	$a3,0x7c($sp)
/*  f0053f0:	11c00003 */ 	beqz	$t6,.L0f005400
/*  f0053f4:	e7a4006c */ 	swc1	$f4,0x6c($sp)
/*  f0053f8:	10000002 */ 	b	.L0f005404
/*  f0053fc:	01c01825 */ 	or	$v1,$t6,$zero
.L0f005400:
/*  f005400:	27a3006c */ 	addiu	$v1,$sp,0x6c
.L0f005404:
/*  f005404:	8fa20080 */ 	lw	$v0,0x80($sp)
/*  f005408:	c4a60000 */ 	lwc1	$f6,0x0($a1)
/*  f00540c:	44809000 */ 	mtc1	$zero,$f18
/*  f005410:	c4480000 */ 	lwc1	$f8,0x0($v0)
/*  f005414:	c4700000 */ 	lwc1	$f16,0x0($v1)
/*  f005418:	46083381 */ 	sub.s	$f14,$f6,$f8
/*  f00541c:	460e903c */ 	c.lt.s	$f18,$f14
/*  f005420:	00000000 */ 	nop
/*  f005424:	45030003 */ 	bc1tl	.L0f005434
/*  f005428:	4610703c */ 	c.lt.s	$f14,$f16
/*  f00542c:	46007387 */ 	neg.s	$f14,$f14
/*  f005430:	4610703c */ 	c.lt.s	$f14,$f16
.L0f005434:
/*  f005434:	00000000 */ 	nop
/*  f005438:	450200aa */ 	bc1fl	.L0f0056e4
/*  f00543c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f005440:	c4aa0008 */ 	lwc1	$f10,0x8($a1)
/*  f005444:	c4440008 */ 	lwc1	$f4,0x8($v0)
/*  f005448:	46045081 */ 	sub.s	$f2,$f10,$f4
/*  f00544c:	4602903c */ 	c.lt.s	$f18,$f2
/*  f005450:	00000000 */ 	nop
/*  f005454:	45030003 */ 	bc1tl	.L0f005464
/*  f005458:	4610103c */ 	c.lt.s	$f2,$f16
/*  f00545c:	46001087 */ 	neg.s	$f2,$f2
/*  f005460:	4610103c */ 	c.lt.s	$f2,$f16
.L0f005464:
/*  f005464:	00000000 */ 	nop
/*  f005468:	4502009e */ 	bc1fl	.L0f0056e4
/*  f00546c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f005470:	c4a60004 */ 	lwc1	$f6,0x4($a1)
/*  f005474:	c4480004 */ 	lwc1	$f8,0x4($v0)
/*  f005478:	46083001 */ 	sub.s	$f0,$f6,$f8
/*  f00547c:	4600903c */ 	c.lt.s	$f18,$f0
/*  f005480:	00000000 */ 	nop
/*  f005484:	45030003 */ 	bc1tl	.L0f005494
/*  f005488:	4610003c */ 	c.lt.s	$f0,$f16
/*  f00548c:	46000007 */ 	neg.s	$f0,$f0
/*  f005490:	4610003c */ 	c.lt.s	$f0,$f16
.L0f005494:
/*  f005494:	00000000 */ 	nop
/*  f005498:	45020092 */ 	bc1fl	.L0f0056e4
/*  f00549c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0054a0:	460e7282 */ 	mul.s	$f10,$f14,$f14
/*  f0054a4:	afa30068 */ 	sw	$v1,0x68($sp)
/*  f0054a8:	afa50074 */ 	sw	$a1,0x74($sp)
/*  f0054ac:	46000102 */ 	mul.s	$f4,$f0,$f0
/*  f0054b0:	e7b00064 */ 	swc1	$f16,0x64($sp)
/*  f0054b4:	46021202 */ 	mul.s	$f8,$f2,$f2
/*  f0054b8:	46045180 */ 	add.s	$f6,$f10,$f4
/*  f0054bc:	0c012974 */ 	jal	sqrtf
/*  f0054c0:	46083300 */ 	add.s	$f12,$f6,$f8
/*  f0054c4:	c7b00064 */ 	lwc1	$f16,0x64($sp)
/*  f0054c8:	8fa30068 */ 	lw	$v1,0x68($sp)
/*  f0054cc:	8faf0070 */ 	lw	$t7,0x70($sp)
/*  f0054d0:	4610003c */ 	c.lt.s	$f0,$f16
/*  f0054d4:	8fb8007c */ 	lw	$t8,0x7c($sp)
/*  f0054d8:	45020082 */ 	bc1fl	.L0f0056e4
/*  f0054dc:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0054e0:	11f80004 */ 	beq	$t7,$t8,.L0f0054f4
/*  f0054e4:	8fa40078 */ 	lw	$a0,0x78($sp)
/*  f0054e8:	8fa50084 */ 	lw	$a1,0x84($sp)
/*  f0054ec:	54850009 */ 	bnel	$a0,$a1,.L0f005514
/*  f0054f0:	afa30068 */ 	sw	$v1,0x68($sp)
.L0f0054f4:
/*  f0054f4:	c46a0000 */ 	lwc1	$f10,0x0($v1)
/*  f0054f8:	460a003c */ 	c.lt.s	$f0,$f10
/*  f0054fc:	00000000 */ 	nop
/*  f005500:	45020078 */ 	bc1fl	.L0f0056e4
/*  f005504:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f005508:	10000075 */ 	b	.L0f0056e0
/*  f00550c:	e4600000 */ 	swc1	$f0,0x0($v1)
/*  f005510:	afa30068 */ 	sw	$v1,0x68($sp)
.L0f005514:
/*  f005514:	0fc00248 */ 	jal	func0f000920
/*  f005518:	e7b00064 */ 	swc1	$f16,0x64($sp)
/*  f00551c:	44822000 */ 	mtc1	$v0,$f4
/*  f005520:	8fa30068 */ 	lw	$v1,0x68($sp)
/*  f005524:	c7b00064 */ 	lwc1	$f16,0x64($sp)
/*  f005528:	04410005 */ 	bgez	$v0,.L0f005540
/*  f00552c:	46802020 */ 	cvt.s.w	$f0,$f4
/*  f005530:	3c014f80 */ 	lui	$at,0x4f80
/*  f005534:	44813000 */ 	mtc1	$at,$f6
/*  f005538:	00000000 */ 	nop
/*  f00553c:	46060000 */ 	add.s	$f0,$f0,$f6
.L0f005540:
/*  f005540:	4610003c */ 	c.lt.s	$f0,$f16
/*  f005544:	46000306 */ 	mov.s	$f12,$f0
/*  f005548:	8fa40078 */ 	lw	$a0,0x78($sp)
/*  f00554c:	27a50044 */ 	addiu	$a1,$sp,0x44
/*  f005550:	45020064 */ 	bc1fl	.L0f0056e4
/*  f005554:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f005558:	afa30068 */ 	sw	$v1,0x68($sp)
/*  f00555c:	e7ac0050 */ 	swc1	$f12,0x50($sp)
/*  f005560:	0c005f38 */ 	jal	func00017ce0
/*  f005564:	e7b00064 */ 	swc1	$f16,0x64($sp)
/*  f005568:	8fa20074 */ 	lw	$v0,0x74($sp)
/*  f00556c:	c7a80044 */ 	lwc1	$f8,0x44($sp)
/*  f005570:	44809000 */ 	mtc1	$zero,$f18
/*  f005574:	c44a0000 */ 	lwc1	$f10,0x0($v0)
/*  f005578:	c7ac0050 */ 	lwc1	$f12,0x50($sp)
/*  f00557c:	c7b00064 */ 	lwc1	$f16,0x64($sp)
/*  f005580:	460a4081 */ 	sub.s	$f2,$f8,$f10
/*  f005584:	8fa30068 */ 	lw	$v1,0x68($sp)
/*  f005588:	c7a4004c */ 	lwc1	$f4,0x4c($sp)
/*  f00558c:	460c8401 */ 	sub.s	$f16,$f16,$f12
/*  f005590:	4602903c */ 	c.lt.s	$f18,$f2
/*  f005594:	00000000 */ 	nop
/*  f005598:	45030003 */ 	bc1tl	.L0f0055a8
/*  f00559c:	4610103c */ 	c.lt.s	$f2,$f16
/*  f0055a0:	46001087 */ 	neg.s	$f2,$f2
/*  f0055a4:	4610103c */ 	c.lt.s	$f2,$f16
.L0f0055a8:
/*  f0055a8:	00000000 */ 	nop
/*  f0055ac:	4502004d */ 	bc1fl	.L0f0056e4
/*  f0055b0:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0055b4:	c4460008 */ 	lwc1	$f6,0x8($v0)
/*  f0055b8:	46062001 */ 	sub.s	$f0,$f4,$f6
/*  f0055bc:	4600903c */ 	c.lt.s	$f18,$f0
/*  f0055c0:	00000000 */ 	nop
/*  f0055c4:	45030003 */ 	bc1tl	.L0f0055d4
/*  f0055c8:	4610003c */ 	c.lt.s	$f0,$f16
/*  f0055cc:	46000007 */ 	neg.s	$f0,$f0
/*  f0055d0:	4610003c */ 	c.lt.s	$f0,$f16
.L0f0055d4:
/*  f0055d4:	00000000 */ 	nop
/*  f0055d8:	45020042 */ 	bc1fl	.L0f0056e4
/*  f0055dc:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0055e0:	46021202 */ 	mul.s	$f8,$f2,$f2
/*  f0055e4:	afa30068 */ 	sw	$v1,0x68($sp)
/*  f0055e8:	e7b00064 */ 	swc1	$f16,0x64($sp)
/*  f0055ec:	46000282 */ 	mul.s	$f10,$f0,$f0
/*  f0055f0:	0c012974 */ 	jal	sqrtf
/*  f0055f4:	460a4300 */ 	add.s	$f12,$f8,$f10
/*  f0055f8:	c7b00064 */ 	lwc1	$f16,0x64($sp)
/*  f0055fc:	8fa30068 */ 	lw	$v1,0x68($sp)
/*  f005600:	46000306 */ 	mov.s	$f12,$f0
/*  f005604:	4610003c */ 	c.lt.s	$f0,$f16
/*  f005608:	8fa40084 */ 	lw	$a0,0x84($sp)
/*  f00560c:	27a5002c */ 	addiu	$a1,$sp,0x2c
/*  f005610:	45020034 */ 	bc1fl	.L0f0056e4
/*  f005614:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f005618:	afa30068 */ 	sw	$v1,0x68($sp)
/*  f00561c:	e7ac0038 */ 	swc1	$f12,0x38($sp)
/*  f005620:	0c005f38 */ 	jal	func00017ce0
/*  f005624:	e7b00064 */ 	swc1	$f16,0x64($sp)
/*  f005628:	8fa20080 */ 	lw	$v0,0x80($sp)
/*  f00562c:	c7a4002c */ 	lwc1	$f4,0x2c($sp)
/*  f005630:	44809000 */ 	mtc1	$zero,$f18
/*  f005634:	c4460000 */ 	lwc1	$f6,0x0($v0)
/*  f005638:	c7ac0038 */ 	lwc1	$f12,0x38($sp)
/*  f00563c:	c7b00064 */ 	lwc1	$f16,0x64($sp)
/*  f005640:	46062081 */ 	sub.s	$f2,$f4,$f6
/*  f005644:	8fa30068 */ 	lw	$v1,0x68($sp)
/*  f005648:	c7a80034 */ 	lwc1	$f8,0x34($sp)
/*  f00564c:	460c8401 */ 	sub.s	$f16,$f16,$f12
/*  f005650:	4602903c */ 	c.lt.s	$f18,$f2
/*  f005654:	00000000 */ 	nop
/*  f005658:	45030003 */ 	bc1tl	.L0f005668
/*  f00565c:	4610103c */ 	c.lt.s	$f2,$f16
/*  f005660:	46001087 */ 	neg.s	$f2,$f2
/*  f005664:	4610103c */ 	c.lt.s	$f2,$f16
.L0f005668:
/*  f005668:	00000000 */ 	nop
/*  f00566c:	4502001d */ 	bc1fl	.L0f0056e4
/*  f005670:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f005674:	c44a0008 */ 	lwc1	$f10,0x8($v0)
/*  f005678:	460a4001 */ 	sub.s	$f0,$f8,$f10
/*  f00567c:	4600903c */ 	c.lt.s	$f18,$f0
/*  f005680:	00000000 */ 	nop
/*  f005684:	45030003 */ 	bc1tl	.L0f005694
/*  f005688:	4610003c */ 	c.lt.s	$f0,$f16
/*  f00568c:	46000007 */ 	neg.s	$f0,$f0
/*  f005690:	4610003c */ 	c.lt.s	$f0,$f16
.L0f005694:
/*  f005694:	00000000 */ 	nop
/*  f005698:	45020012 */ 	bc1fl	.L0f0056e4
/*  f00569c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0056a0:	46021102 */ 	mul.s	$f4,$f2,$f2
/*  f0056a4:	afa30068 */ 	sw	$v1,0x68($sp)
/*  f0056a8:	e7b00064 */ 	swc1	$f16,0x64($sp)
/*  f0056ac:	46000182 */ 	mul.s	$f6,$f0,$f0
/*  f0056b0:	0c012974 */ 	jal	sqrtf
/*  f0056b4:	46062300 */ 	add.s	$f12,$f4,$f6
/*  f0056b8:	c7b00064 */ 	lwc1	$f16,0x64($sp)
/*  f0056bc:	8fa30068 */ 	lw	$v1,0x68($sp)
/*  f0056c0:	4610003c */ 	c.lt.s	$f0,$f16
/*  f0056c4:	00000000 */ 	nop
/*  f0056c8:	45020006 */ 	bc1fl	.L0f0056e4
/*  f0056cc:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0056d0:	46008401 */ 	sub.s	$f16,$f16,$f0
/*  f0056d4:	c4680000 */ 	lwc1	$f8,0x0($v1)
/*  f0056d8:	46104281 */ 	sub.s	$f10,$f8,$f16
/*  f0056dc:	e46a0000 */ 	swc1	$f10,0x0($v1)
.L0f0056e0:
/*  f0056e0:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f0056e4:
/*  f0056e4:	c4600000 */ 	lwc1	$f0,0x0($v1)
/*  f0056e8:	27bd0070 */ 	addiu	$sp,$sp,0x70
/*  f0056ec:	03e00008 */ 	jr	$ra
/*  f0056f0:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f0056f4
.late_rodata
glabel var7f1a7de4
.word 0x46fffe00
.text
/*  f0056f4:	27bdff68 */ 	addiu	$sp,$sp,-152
/*  f0056f8:	3c0e8006 */ 	lui	$t6,%hi(var80061444)
/*  f0056fc:	8dce1444 */ 	lw	$t6,%lo(var80061444)($t6)
/*  f005700:	afbe0048 */ 	sw	$s8,0x48($sp)
/*  f005704:	afb70044 */ 	sw	$s7,0x44($sp)
/*  f005708:	afb1002c */ 	sw	$s1,0x2c($sp)
/*  f00570c:	afb00028 */ 	sw	$s0,0x28($sp)
/*  f005710:	00a08025 */ 	or	$s0,$a1,$zero
/*  f005714:	00e08825 */ 	or	$s1,$a3,$zero
/*  f005718:	0080b825 */ 	or	$s7,$a0,$zero
/*  f00571c:	00c0f025 */ 	or	$s8,$a2,$zero
/*  f005720:	afbf004c */ 	sw	$ra,0x4c($sp)
/*  f005724:	afb60040 */ 	sw	$s6,0x40($sp)
/*  f005728:	afb5003c */ 	sw	$s5,0x3c($sp)
/*  f00572c:	afb40038 */ 	sw	$s4,0x38($sp)
/*  f005730:	afb30034 */ 	sw	$s3,0x34($sp)
/*  f005734:	11c00026 */ 	beqz	$t6,.L0f0057d0
/*  f005738:	afb20030 */ 	sw	$s2,0x30($sp)
/*  f00573c:	3c02800a */ 	lui	$v0,%hi(g_Vars)
/*  f005740:	24429fc0 */ 	addiu	$v0,$v0,%lo(g_Vars)
/*  f005744:	8c4f006c */ 	lw	$t7,0x6c($v0)
/*  f005748:	00002825 */ 	or	$a1,$zero,$zero
/*  f00574c:	00001825 */ 	or	$v1,$zero,$zero
/*  f005750:	11e00003 */ 	beqz	$t7,.L0f005760
/*  f005754:	00002025 */ 	or	$a0,$zero,$zero
/*  f005758:	10000001 */ 	b	.L0f005760
/*  f00575c:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f005760:
/*  f005760:	8c580068 */ 	lw	$t8,0x68($v0)
/*  f005764:	13000003 */ 	beqz	$t8,.L0f005774
/*  f005768:	00000000 */ 	nop
/*  f00576c:	10000001 */ 	b	.L0f005774
/*  f005770:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f005774:
/*  f005774:	8c590064 */ 	lw	$t9,0x64($v0)
/*  f005778:	13200003 */ 	beqz	$t9,.L0f005788
/*  f00577c:	00000000 */ 	nop
/*  f005780:	10000001 */ 	b	.L0f005788
/*  f005784:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f005788:
/*  f005788:	8c4a0070 */ 	lw	$t2,0x70($v0)
/*  f00578c:	00001025 */ 	or	$v0,$zero,$zero
/*  f005790:	11400003 */ 	beqz	$t2,.L0f0057a0
/*  f005794:	00000000 */ 	nop
/*  f005798:	10000001 */ 	b	.L0f0057a0
/*  f00579c:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f0057a0:
/*  f0057a0:	00445821 */ 	addu	$t3,$v0,$a0
/*  f0057a4:	01636021 */ 	addu	$t4,$t3,$v1
/*  f0057a8:	01856821 */ 	addu	$t5,$t4,$a1
/*  f0057ac:	29a10003 */ 	slti	$at,$t5,0x3
/*  f0057b0:	50200008 */ 	beqzl	$at,.L0f0057d4
/*  f0057b4:	c6040000 */ 	lwc1	$f4,0x0($s0)
/*  f0057b8:	12fe0005 */ 	beq	$s7,$s8,.L0f0057d0
/*  f0057bc:	2402ffff */ 	addiu	$v0,$zero,-1
/*  f0057c0:	52e20004 */ 	beql	$s7,$v0,.L0f0057d4
/*  f0057c4:	c6040000 */ 	lwc1	$f4,0x0($s0)
/*  f0057c8:	17c20036 */ 	bne	$s8,$v0,.L0f0058a4
/*  f0057cc:	3c16800a */ 	lui	$s6,%hi(g_Rooms)
.L0f0057d0:
/*  f0057d0:	c6040000 */ 	lwc1	$f4,0x0($s0)
.L0f0057d4:
/*  f0057d4:	c6260000 */ 	lwc1	$f6,0x0($s1)
/*  f0057d8:	44808000 */ 	mtc1	$zero,$f16
/*  f0057dc:	8fb200ac */ 	lw	$s2,0xac($sp)
/*  f0057e0:	46062381 */ 	sub.s	$f14,$f4,$f6
/*  f0057e4:	460e803c */ 	c.lt.s	$f16,$f14
/*  f0057e8:	00000000 */ 	nop
/*  f0057ec:	45030003 */ 	bc1tl	.L0f0057fc
/*  f0057f0:	c64c0000 */ 	lwc1	$f12,0x0($s2)
/*  f0057f4:	46007387 */ 	neg.s	$f14,$f14
/*  f0057f8:	c64c0000 */ 	lwc1	$f12,0x0($s2)
.L0f0057fc:
/*  f0057fc:	460c703c */ 	c.lt.s	$f14,$f12
/*  f005800:	00000000 */ 	nop
/*  f005804:	45020072 */ 	bc1fl	.L0f0059d0
/*  f005808:	8fbf004c */ 	lw	$ra,0x4c($sp)
/*  f00580c:	c6080008 */ 	lwc1	$f8,0x8($s0)
/*  f005810:	c62a0008 */ 	lwc1	$f10,0x8($s1)
/*  f005814:	460a4081 */ 	sub.s	$f2,$f8,$f10
/*  f005818:	4602803c */ 	c.lt.s	$f16,$f2
/*  f00581c:	00000000 */ 	nop
/*  f005820:	45030003 */ 	bc1tl	.L0f005830
/*  f005824:	460c103c */ 	c.lt.s	$f2,$f12
/*  f005828:	46001087 */ 	neg.s	$f2,$f2
/*  f00582c:	460c103c */ 	c.lt.s	$f2,$f12
.L0f005830:
/*  f005830:	00000000 */ 	nop
/*  f005834:	45020066 */ 	bc1fl	.L0f0059d0
/*  f005838:	8fbf004c */ 	lw	$ra,0x4c($sp)
/*  f00583c:	c6120004 */ 	lwc1	$f18,0x4($s0)
/*  f005840:	c6240004 */ 	lwc1	$f4,0x4($s1)
/*  f005844:	46049001 */ 	sub.s	$f0,$f18,$f4
/*  f005848:	4600803c */ 	c.lt.s	$f16,$f0
/*  f00584c:	00000000 */ 	nop
/*  f005850:	45030003 */ 	bc1tl	.L0f005860
/*  f005854:	460c003c */ 	c.lt.s	$f0,$f12
/*  f005858:	46000007 */ 	neg.s	$f0,$f0
/*  f00585c:	460c003c */ 	c.lt.s	$f0,$f12
.L0f005860:
/*  f005860:	00000000 */ 	nop
/*  f005864:	4502005a */ 	bc1fl	.L0f0059d0
/*  f005868:	8fbf004c */ 	lw	$ra,0x4c($sp)
/*  f00586c:	460e7182 */ 	mul.s	$f6,$f14,$f14
/*  f005870:	00000000 */ 	nop
/*  f005874:	46000202 */ 	mul.s	$f8,$f0,$f0
/*  f005878:	46083280 */ 	add.s	$f10,$f6,$f8
/*  f00587c:	46021482 */ 	mul.s	$f18,$f2,$f2
/*  f005880:	0c012974 */ 	jal	sqrtf
/*  f005884:	46125300 */ 	add.s	$f12,$f10,$f18
/*  f005888:	c6440000 */ 	lwc1	$f4,0x0($s2)
/*  f00588c:	4604003c */ 	c.lt.s	$f0,$f4
/*  f005890:	00000000 */ 	nop
/*  f005894:	4502004e */ 	bc1fl	.L0f0059d0
/*  f005898:	8fbf004c */ 	lw	$ra,0x4c($sp)
/*  f00589c:	1000004b */ 	b	.L0f0059cc
/*  f0058a0:	e6400000 */ 	swc1	$f0,0x0($s2)
.L0f0058a4:
/*  f0058a4:	001748c0 */ 	sll	$t1,$s7,0x3
/*  f0058a8:	26d64928 */ 	addiu	$s6,$s6,%lo(g_Rooms)
/*  f0058ac:	01374821 */ 	addu	$t1,$t1,$s7
/*  f0058b0:	8ec20000 */ 	lw	$v0,0x0($s6)
/*  f0058b4:	00094880 */ 	sll	$t1,$t1,0x2
/*  f0058b8:	01374823 */ 	subu	$t1,$t1,$s7
/*  f0058bc:	00094880 */ 	sll	$t1,$t1,0x2
/*  f0058c0:	00492021 */ 	addu	$a0,$v0,$t1
/*  f0058c4:	80850005 */ 	lb	$a1,0x5($a0)
/*  f0058c8:	00003025 */ 	or	$a2,$zero,$zero
/*  f0058cc:	00003825 */ 	or	$a3,$zero,$zero
/*  f0058d0:	18a0003e */ 	blez	$a1,.L0f0059cc
/*  f0058d4:	001ea8c0 */ 	sll	$s5,$s8,0x3
/*  f0058d8:	02bea821 */ 	addu	$s5,$s5,$s8
/*  f0058dc:	0015a880 */ 	sll	$s5,$s5,0x2
/*  f0058e0:	02bea823 */ 	subu	$s5,$s5,$s8
/*  f0058e4:	0015a880 */ 	sll	$s5,$s5,0x2
/*  f0058e8:	00554021 */ 	addu	$t0,$v0,$s5
/*  f0058ec:	81030005 */ 	lb	$v1,0x5($t0)
/*  f0058f0:	3c14800a */ 	lui	$s4,%hi(var800a4ce0)
/*  f0058f4:	26944ce0 */ 	addiu	$s4,$s4,%lo(var800a4ce0)
/*  f0058f8:	afb100a4 */ 	sw	$s1,0xa4($sp)
/*  f0058fc:	afb0009c */ 	sw	$s0,0x9c($sp)
/*  f005900:	afa90060 */ 	sw	$t1,0x60($sp)
/*  f005904:	8fb200ac */ 	lw	$s2,0xac($sp)
.L0f005908:
/*  f005908:	848f000e */ 	lh	$t7,0xe($a0)
/*  f00590c:	8e8e0000 */ 	lw	$t6,0x0($s4)
/*  f005910:	00008825 */ 	or	$s1,$zero,$zero
/*  f005914:	000fc040 */ 	sll	$t8,$t7,0x1
/*  f005918:	01d8c821 */ 	addu	$t9,$t6,$t8
/*  f00591c:	03275021 */ 	addu	$t2,$t9,$a3
/*  f005920:	18600026 */ 	blez	$v1,.L0f0059bc
/*  f005924:	85530000 */ 	lh	$s3,0x0($t2)
/*  f005928:	afa70054 */ 	sw	$a3,0x54($sp)
/*  f00592c:	afa6007c */ 	sw	$a2,0x7c($sp)
/*  f005930:	00008025 */ 	or	$s0,$zero,$zero
/*  f005934:	850c000e */ 	lh	$t4,0xe($t0)
.L0f005938:
/*  f005938:	8e8b0000 */ 	lw	$t3,0x0($s4)
/*  f00593c:	8fb800a4 */ 	lw	$t8,0xa4($sp)
/*  f005940:	000c6840 */ 	sll	$t5,$t4,0x1
/*  f005944:	016d7821 */ 	addu	$t7,$t3,$t5
/*  f005948:	01f07021 */ 	addu	$t6,$t7,$s0
/*  f00594c:	85c20000 */ 	lh	$v0,0x0($t6)
/*  f005950:	afb20018 */ 	sw	$s2,0x18($sp)
/*  f005954:	02e02025 */ 	or	$a0,$s7,$zero
/*  f005958:	8fa5009c */ 	lw	$a1,0x9c($sp)
/*  f00595c:	02603025 */ 	or	$a2,$s3,$zero
/*  f005960:	03c03825 */ 	or	$a3,$s8,$zero
/*  f005964:	afb80010 */ 	sw	$t8,0x10($sp)
/*  f005968:	0fc014f4 */ 	jal	func0f0053d0
/*  f00596c:	afa20014 */ 	sw	$v0,0x14($sp)
/*  f005970:	c6460000 */ 	lwc1	$f6,0x0($s2)
/*  f005974:	4606003c */ 	c.lt.s	$f0,$f6
/*  f005978:	00000000 */ 	nop
/*  f00597c:	45020003 */ 	bc1fl	.L0f00598c
/*  f005980:	8ec20000 */ 	lw	$v0,0x0($s6)
/*  f005984:	e6400000 */ 	swc1	$f0,0x0($s2)
/*  f005988:	8ec20000 */ 	lw	$v0,0x0($s6)
.L0f00598c:
/*  f00598c:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f005990:	26100002 */ 	addiu	$s0,$s0,0x2
/*  f005994:	00554021 */ 	addu	$t0,$v0,$s5
/*  f005998:	81030005 */ 	lb	$v1,0x5($t0)
/*  f00599c:	0223082a */ 	slt	$at,$s1,$v1
/*  f0059a0:	5420ffe5 */ 	bnezl	$at,.L0f005938
/*  f0059a4:	850c000e */ 	lh	$t4,0xe($t0)
/*  f0059a8:	8fb90060 */ 	lw	$t9,0x60($sp)
/*  f0059ac:	8fa70054 */ 	lw	$a3,0x54($sp)
/*  f0059b0:	8fa6007c */ 	lw	$a2,0x7c($sp)
/*  f0059b4:	00592021 */ 	addu	$a0,$v0,$t9
/*  f0059b8:	80850005 */ 	lb	$a1,0x5($a0)
.L0f0059bc:
/*  f0059bc:	24c60001 */ 	addiu	$a2,$a2,0x1
/*  f0059c0:	00c5082a */ 	slt	$at,$a2,$a1
/*  f0059c4:	1420ffd0 */ 	bnez	$at,.L0f005908
/*  f0059c8:	24e70002 */ 	addiu	$a3,$a3,0x2
.L0f0059cc:
/*  f0059cc:	8fbf004c */ 	lw	$ra,0x4c($sp)
.L0f0059d0:
/*  f0059d0:	8fb00028 */ 	lw	$s0,0x28($sp)
/*  f0059d4:	8fb1002c */ 	lw	$s1,0x2c($sp)
/*  f0059d8:	8fb20030 */ 	lw	$s2,0x30($sp)
/*  f0059dc:	8fb30034 */ 	lw	$s3,0x34($sp)
/*  f0059e0:	8fb40038 */ 	lw	$s4,0x38($sp)
/*  f0059e4:	8fb5003c */ 	lw	$s5,0x3c($sp)
/*  f0059e8:	8fb60040 */ 	lw	$s6,0x40($sp)
/*  f0059ec:	8fb70044 */ 	lw	$s7,0x44($sp)
/*  f0059f0:	8fbe0048 */ 	lw	$s8,0x48($sp)
/*  f0059f4:	03e00008 */ 	jr	$ra
/*  f0059f8:	27bd0098 */ 	addiu	$sp,$sp,0x98
/*  f0059fc:	27bdff88 */ 	addiu	$sp,$sp,-120
/*  f005a00:	afb20030 */ 	sw	$s2,0x30($sp)
/*  f005a04:	3c017f1a */ 	lui	$at,%hi(var7f1a7de4)
/*  f005a08:	8fb2008c */ 	lw	$s2,0x8c($sp)
/*  f005a0c:	c4247de4 */ 	lwc1	$f4,%lo(var7f1a7de4)($at)
/*  f005a10:	afbf004c */ 	sw	$ra,0x4c($sp)
/*  f005a14:	afbe0048 */ 	sw	$s8,0x48($sp)
/*  f005a18:	afb70044 */ 	sw	$s7,0x44($sp)
/*  f005a1c:	afb60040 */ 	sw	$s6,0x40($sp)
/*  f005a20:	afb5003c */ 	sw	$s5,0x3c($sp)
/*  f005a24:	afb40038 */ 	sw	$s4,0x38($sp)
/*  f005a28:	afb30034 */ 	sw	$s3,0x34($sp)
/*  f005a2c:	afb1002c */ 	sw	$s1,0x2c($sp)
/*  f005a30:	afb00028 */ 	sw	$s0,0x28($sp)
/*  f005a34:	afa5007c */ 	sw	$a1,0x7c($sp)
/*  f005a38:	afa70084 */ 	sw	$a3,0x84($sp)
/*  f005a3c:	0080a825 */ 	or	$s5,$a0,$zero
/*  f005a40:	00c0b025 */ 	or	$s6,$a2,$zero
/*  f005a44:	14860006 */ 	bne	$a0,$a2,.L0f005a60
/*  f005a48:	e6440000 */ 	swc1	$f4,0x0($s2)
/*  f005a4c:	8fa4007c */ 	lw	$a0,0x7c($sp)
/*  f005a50:	0fc5dd18 */ 	jal	func0f177460
/*  f005a54:	8fa50084 */ 	lw	$a1,0x84($sp)
/*  f005a58:	10000049 */ 	b	.L0f005b80
/*  f005a5c:	e6400000 */ 	swc1	$f0,0x0($s2)
.L0f005a60:
/*  f005a60:	001570c0 */ 	sll	$t6,$s5,0x3
/*  f005a64:	3c1e800a */ 	lui	$s8,%hi(g_Rooms)
/*  f005a68:	01d57021 */ 	addu	$t6,$t6,$s5
/*  f005a6c:	27de4928 */ 	addiu	$s8,$s8,%lo(g_Rooms)
/*  f005a70:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f005a74:	8fc20000 */ 	lw	$v0,0x0($s8)
/*  f005a78:	01d57023 */ 	subu	$t6,$t6,$s5
/*  f005a7c:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f005a80:	afae005c */ 	sw	$t6,0x5c($sp)
/*  f005a84:	004e2821 */ 	addu	$a1,$v0,$t6
/*  f005a88:	80a60005 */ 	lb	$a2,0x5($a1)
/*  f005a8c:	00003825 */ 	or	$a3,$zero,$zero
/*  f005a90:	00004025 */ 	or	$t0,$zero,$zero
/*  f005a94:	18c0003a */ 	blez	$a2,.L0f005b80
/*  f005a98:	0016b8c0 */ 	sll	$s7,$s6,0x3
/*  f005a9c:	02f6b821 */ 	addu	$s7,$s7,$s6
/*  f005aa0:	0017b880 */ 	sll	$s7,$s7,0x2
/*  f005aa4:	02f6b823 */ 	subu	$s7,$s7,$s6
/*  f005aa8:	0017b880 */ 	sll	$s7,$s7,0x2
/*  f005aac:	00571821 */ 	addu	$v1,$v0,$s7
/*  f005ab0:	3c14800a */ 	lui	$s4,%hi(var800a4ce0)
/*  f005ab4:	26944ce0 */ 	addiu	$s4,$s4,%lo(var800a4ce0)
/*  f005ab8:	80640005 */ 	lb	$a0,0x5($v1)
.L0f005abc:
/*  f005abc:	84b9000e */ 	lh	$t9,0xe($a1)
/*  f005ac0:	8e980000 */ 	lw	$t8,0x0($s4)
/*  f005ac4:	00008025 */ 	or	$s0,$zero,$zero
/*  f005ac8:	00194840 */ 	sll	$t1,$t9,0x1
/*  f005acc:	03095021 */ 	addu	$t2,$t8,$t1
/*  f005ad0:	01485821 */ 	addu	$t3,$t2,$t0
/*  f005ad4:	18800026 */ 	blez	$a0,.L0f005b70
/*  f005ad8:	85730000 */ 	lh	$s3,0x0($t3)
/*  f005adc:	00008825 */ 	or	$s1,$zero,$zero
/*  f005ae0:	afa7006c */ 	sw	$a3,0x6c($sp)
/*  f005ae4:	afa80050 */ 	sw	$t0,0x50($sp)
/*  f005ae8:	846d000e */ 	lh	$t5,0xe($v1)
.L0f005aec:
/*  f005aec:	8e8c0000 */ 	lw	$t4,0x0($s4)
/*  f005af0:	8fb80084 */ 	lw	$t8,0x84($sp)
/*  f005af4:	000d7040 */ 	sll	$t6,$t5,0x1
/*  f005af8:	018e7821 */ 	addu	$t7,$t4,$t6
/*  f005afc:	01f1c821 */ 	addu	$t9,$t7,$s1
/*  f005b00:	87220000 */ 	lh	$v0,0x0($t9)
/*  f005b04:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f005b08:	02a02025 */ 	or	$a0,$s5,$zero
/*  f005b0c:	8fa5007c */ 	lw	$a1,0x7c($sp)
/*  f005b10:	02603025 */ 	or	$a2,$s3,$zero
/*  f005b14:	02c03825 */ 	or	$a3,$s6,$zero
/*  f005b18:	afb80010 */ 	sw	$t8,0x10($sp)
/*  f005b1c:	0fc014f4 */ 	jal	func0f0053d0
/*  f005b20:	afa20014 */ 	sw	$v0,0x14($sp)
/*  f005b24:	c6460000 */ 	lwc1	$f6,0x0($s2)
/*  f005b28:	4606003c */ 	c.lt.s	$f0,$f6
/*  f005b2c:	00000000 */ 	nop
/*  f005b30:	45020003 */ 	bc1fl	.L0f005b40
/*  f005b34:	8fc20000 */ 	lw	$v0,0x0($s8)
/*  f005b38:	e6400000 */ 	swc1	$f0,0x0($s2)
/*  f005b3c:	8fc20000 */ 	lw	$v0,0x0($s8)
.L0f005b40:
/*  f005b40:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f005b44:	26310002 */ 	addiu	$s1,$s1,0x2
/*  f005b48:	00571821 */ 	addu	$v1,$v0,$s7
/*  f005b4c:	80640005 */ 	lb	$a0,0x5($v1)
/*  f005b50:	0204082a */ 	slt	$at,$s0,$a0
/*  f005b54:	5420ffe5 */ 	bnezl	$at,.L0f005aec
/*  f005b58:	846d000e */ 	lh	$t5,0xe($v1)
/*  f005b5c:	8fa9005c */ 	lw	$t1,0x5c($sp)
/*  f005b60:	8fa80050 */ 	lw	$t0,0x50($sp)
/*  f005b64:	8fa7006c */ 	lw	$a3,0x6c($sp)
/*  f005b68:	00492821 */ 	addu	$a1,$v0,$t1
/*  f005b6c:	80a60005 */ 	lb	$a2,0x5($a1)
.L0f005b70:
/*  f005b70:	24e70001 */ 	addiu	$a3,$a3,0x1
/*  f005b74:	00e6082a */ 	slt	$at,$a3,$a2
/*  f005b78:	1420ffd0 */ 	bnez	$at,.L0f005abc
/*  f005b7c:	25080002 */ 	addiu	$t0,$t0,0x2
.L0f005b80:
/*  f005b80:	8fbf004c */ 	lw	$ra,0x4c($sp)
/*  f005b84:	8fb00028 */ 	lw	$s0,0x28($sp)
/*  f005b88:	8fb1002c */ 	lw	$s1,0x2c($sp)
/*  f005b8c:	8fb20030 */ 	lw	$s2,0x30($sp)
/*  f005b90:	8fb30034 */ 	lw	$s3,0x34($sp)
/*  f005b94:	8fb40038 */ 	lw	$s4,0x38($sp)
/*  f005b98:	8fb5003c */ 	lw	$s5,0x3c($sp)
/*  f005b9c:	8fb60040 */ 	lw	$s6,0x40($sp)
/*  f005ba0:	8fb70044 */ 	lw	$s7,0x44($sp)
/*  f005ba4:	8fbe0048 */ 	lw	$s8,0x48($sp)
/*  f005ba8:	03e00008 */ 	jr	$ra
/*  f005bac:	27bd0078 */ 	addiu	$sp,$sp,0x78
);

GLOBAL_ASM(
glabel func0f005bb0
/*  f005bb0:	3c0e800a */ 	lui	$t6,%hi(g_Vars+0x284)
/*  f005bb4:	8dcea244 */ 	lw	$t6,%lo(g_Vars+0x284)($t6)
/*  f005bb8:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f005bbc:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f005bc0:	8dcf00bc */ 	lw	$t7,0xbc($t6)
/*  f005bc4:	0fc00270 */ 	jal	func0f0009c0
/*  f005bc8:	85e40028 */ 	lh	$a0,0x28($t7)
/*  f005bcc:	3c07800a */ 	lui	$a3,%hi(g_Vars)
/*  f005bd0:	24e79fc0 */ 	addiu	$a3,$a3,%lo(g_Vars)
/*  f005bd4:	8ce80284 */ 	lw	$t0,0x284($a3)
/*  f005bd8:	afa2002c */ 	sw	$v0,0x2c($sp)
/*  f005bdc:	3c068007 */ 	lui	$a2,%hi(var80070764)
/*  f005be0:	8d0500d8 */ 	lw	$a1,0xd8($t0)
/*  f005be4:	24c60764 */ 	addiu	$a2,$a2,%lo(var80070764)
/*  f005be8:	14a00013 */ 	bnez	$a1,.L0f005c38
/*  f005bec:	00000000 */ 	nop
/*  f005bf0:	8cd80000 */ 	lw	$t8,0x0($a2)
/*  f005bf4:	17000010 */ 	bnez	$t8,.L0f005c38
/*  f005bf8:	00000000 */ 	nop
/*  f005bfc:	8d030480 */ 	lw	$v1,0x480($t0)
/*  f005c00:	50600007 */ 	beqzl	$v1,.L0f005c20
/*  f005c04:	8d0a1c54 */ 	lw	$t2,0x1c54($t0)
/*  f005c08:	1060000b */ 	beqz	$v1,.L0f005c38
/*  f005c0c:	00000000 */ 	nop
/*  f005c10:	80790037 */ 	lb	$t9,0x37($v1)
/*  f005c14:	17200008 */ 	bnez	$t9,.L0f005c38
/*  f005c18:	00000000 */ 	nop
/*  f005c1c:	8d0a1c54 */ 	lw	$t2,0x1c54($t0)
.L0f005c20:
/*  f005c20:	8d0900c4 */ 	lw	$t1,0xc4($t0)
/*  f005c24:	01405827 */ 	nor	$t3,$t2,$zero
/*  f005c28:	012b6024 */ 	and	$t4,$t1,$t3
/*  f005c2c:	318d0001 */ 	andi	$t5,$t4,0x1
/*  f005c30:	55a00017 */ 	bnezl	$t5,.L0f005c90
/*  f005c34:	8d0c1c1c */ 	lw	$t4,0x1c1c($t0)
.L0f005c38:
/*  f005c38:	3c068007 */ 	lui	$a2,%hi(var80070764)
/*  f005c3c:	14a00016 */ 	bnez	$a1,.L0f005c98
/*  f005c40:	24c60764 */ 	addiu	$a2,$a2,%lo(var80070764)
/*  f005c44:	8cce0000 */ 	lw	$t6,0x0($a2)
/*  f005c48:	15c00013 */ 	bnez	$t6,.L0f005c98
/*  f005c4c:	00000000 */ 	nop
/*  f005c50:	8d030480 */ 	lw	$v1,0x480($t0)
/*  f005c54:	50600007 */ 	beqzl	$v1,.L0f005c74
/*  f005c58:	8d191c54 */ 	lw	$t9,0x1c54($t0)
/*  f005c5c:	1060000e */ 	beqz	$v1,.L0f005c98
/*  f005c60:	00000000 */ 	nop
/*  f005c64:	806f0037 */ 	lb	$t7,0x37($v1)
/*  f005c68:	15e0000b */ 	bnez	$t7,.L0f005c98
/*  f005c6c:	00000000 */ 	nop
/*  f005c70:	8d191c54 */ 	lw	$t9,0x1c54($t0)
.L0f005c74:
/*  f005c74:	8d1800c4 */ 	lw	$t8,0xc4($t0)
/*  f005c78:	03205027 */ 	nor	$t2,$t9,$zero
/*  f005c7c:	030a4824 */ 	and	$t1,$t8,$t2
/*  f005c80:	312b0008 */ 	andi	$t3,$t1,0x8
/*  f005c84:	11600004 */ 	beqz	$t3,.L0f005c98
/*  f005c88:	00000000 */ 	nop
/*  f005c8c:	8d0c1c1c */ 	lw	$t4,0x1c1c($t0)
.L0f005c90:
/*  f005c90:	5180002c */ 	beqzl	$t4,.L0f005d44
/*  f005c94:	24090001 */ 	addiu	$t1,$zero,0x1
.L0f005c98:
/*  f005c98:	14a00013 */ 	bnez	$a1,.L0f005ce8
/*  f005c9c:	00000000 */ 	nop
/*  f005ca0:	8ccd0000 */ 	lw	$t5,0x0($a2)
/*  f005ca4:	15a00010 */ 	bnez	$t5,.L0f005ce8
/*  f005ca8:	00000000 */ 	nop
/*  f005cac:	8d030480 */ 	lw	$v1,0x480($t0)
/*  f005cb0:	50600007 */ 	beqzl	$v1,.L0f005cd0
/*  f005cb4:	8d191c54 */ 	lw	$t9,0x1c54($t0)
/*  f005cb8:	1060000b */ 	beqz	$v1,.L0f005ce8
/*  f005cbc:	00000000 */ 	nop
/*  f005cc0:	806e0037 */ 	lb	$t6,0x37($v1)
/*  f005cc4:	15c00008 */ 	bnez	$t6,.L0f005ce8
/*  f005cc8:	00000000 */ 	nop
/*  f005ccc:	8d191c54 */ 	lw	$t9,0x1c54($t0)
.L0f005cd0:
/*  f005cd0:	8d0f00c4 */ 	lw	$t7,0xc4($t0)
/*  f005cd4:	0320c027 */ 	nor	$t8,$t9,$zero
/*  f005cd8:	01f85024 */ 	and	$t2,$t7,$t8
/*  f005cdc:	31490001 */ 	andi	$t1,$t2,0x1
/*  f005ce0:	5520001c */ 	bnezl	$t1,.L0f005d54
/*  f005ce4:	2ca40001 */ 	sltiu	$a0,$a1,0x1
.L0f005ce8:
/*  f005ce8:	54a00014 */ 	bnezl	$a1,.L0f005d3c
/*  f005cec:	8d0a1c1c */ 	lw	$t2,0x1c1c($t0)
/*  f005cf0:	8ccb0000 */ 	lw	$t3,0x0($a2)
/*  f005cf4:	55600011 */ 	bnezl	$t3,.L0f005d3c
/*  f005cf8:	8d0a1c1c */ 	lw	$t2,0x1c1c($t0)
/*  f005cfc:	8d030480 */ 	lw	$v1,0x480($t0)
/*  f005d00:	50600007 */ 	beqzl	$v1,.L0f005d20
/*  f005d04:	8d0e1c54 */ 	lw	$t6,0x1c54($t0)
/*  f005d08:	5060000c */ 	beqzl	$v1,.L0f005d3c
/*  f005d0c:	8d0a1c1c */ 	lw	$t2,0x1c1c($t0)
/*  f005d10:	806c0037 */ 	lb	$t4,0x37($v1)
/*  f005d14:	55800009 */ 	bnezl	$t4,.L0f005d3c
/*  f005d18:	8d0a1c1c */ 	lw	$t2,0x1c1c($t0)
/*  f005d1c:	8d0e1c54 */ 	lw	$t6,0x1c54($t0)
.L0f005d20:
/*  f005d20:	8d0d00c4 */ 	lw	$t5,0xc4($t0)
/*  f005d24:	01c0c827 */ 	nor	$t9,$t6,$zero
/*  f005d28:	01b97824 */ 	and	$t7,$t5,$t9
/*  f005d2c:	31f80008 */ 	andi	$t8,$t7,0x8
/*  f005d30:	57000008 */ 	bnezl	$t8,.L0f005d54
/*  f005d34:	2ca40001 */ 	sltiu	$a0,$a1,0x1
/*  f005d38:	8d0a1c1c */ 	lw	$t2,0x1c1c($t0)
.L0f005d3c:
/*  f005d3c:	11400004 */ 	beqz	$t2,.L0f005d50
/*  f005d40:	24090001 */ 	addiu	$t1,$zero,0x1
.L0f005d44:
/*  f005d44:	3c018006 */ 	lui	$at,%hi(var8006144c)
/*  f005d48:	ac29144c */ 	sw	$t1,%lo(var8006144c)($at)
/*  f005d4c:	8d0500d8 */ 	lw	$a1,0xd8($t0)
.L0f005d50:
/*  f005d50:	2ca40001 */ 	sltiu	$a0,$a1,0x1
.L0f005d54:
/*  f005d54:	10800017 */ 	beqz	$a0,.L0f005db4
/*  f005d58:	00000000 */ 	nop
/*  f005d5c:	8cc20000 */ 	lw	$v0,0x0($a2)
/*  f005d60:	2c4b0001 */ 	sltiu	$t3,$v0,0x1
/*  f005d64:	11600013 */ 	beqz	$t3,.L0f005db4
/*  f005d68:	00000000 */ 	nop
/*  f005d6c:	8d030480 */ 	lw	$v1,0x480($t0)
/*  f005d70:	2c620001 */ 	sltiu	$v0,$v1,0x1
/*  f005d74:	14400007 */ 	bnez	$v0,.L0f005d94
/*  f005d78:	0003102b */ 	sltu	$v0,$zero,$v1
/*  f005d7c:	1040000d */ 	beqz	$v0,.L0f005db4
/*  f005d80:	00000000 */ 	nop
/*  f005d84:	80620037 */ 	lb	$v0,0x37($v1)
/*  f005d88:	2c4c0001 */ 	sltiu	$t4,$v0,0x1
/*  f005d8c:	11800009 */ 	beqz	$t4,.L0f005db4
/*  f005d90:	00000000 */ 	nop
.L0f005d94:
/*  f005d94:	8d0d1c54 */ 	lw	$t5,0x1c54($t0)
/*  f005d98:	8d0e00c4 */ 	lw	$t6,0xc4($t0)
/*  f005d9c:	01a0c827 */ 	nor	$t9,$t5,$zero
/*  f005da0:	01d91024 */ 	and	$v0,$t6,$t9
/*  f005da4:	304f0001 */ 	andi	$t7,$v0,0x1
/*  f005da8:	000f102b */ 	sltu	$v0,$zero,$t7
/*  f005dac:	54400018 */ 	bnezl	$v0,.L0f005e10
/*  f005db0:	ad021c1c */ 	sw	$v0,0x1c1c($t0)
.L0f005db4:
/*  f005db4:	10800015 */ 	beqz	$a0,.L0f005e0c
/*  f005db8:	00801025 */ 	or	$v0,$a0,$zero
/*  f005dbc:	8cc20000 */ 	lw	$v0,0x0($a2)
/*  f005dc0:	2c4a0001 */ 	sltiu	$t2,$v0,0x1
/*  f005dc4:	11400011 */ 	beqz	$t2,.L0f005e0c
/*  f005dc8:	01401025 */ 	or	$v0,$t2,$zero
/*  f005dcc:	8d030480 */ 	lw	$v1,0x480($t0)
/*  f005dd0:	2c620001 */ 	sltiu	$v0,$v1,0x1
/*  f005dd4:	14400007 */ 	bnez	$v0,.L0f005df4
/*  f005dd8:	0003102b */ 	sltu	$v0,$zero,$v1
/*  f005ddc:	5040000c */ 	beqzl	$v0,.L0f005e10
/*  f005de0:	ad021c1c */ 	sw	$v0,0x1c1c($t0)
/*  f005de4:	80620037 */ 	lb	$v0,0x37($v1)
/*  f005de8:	2c490001 */ 	sltiu	$t1,$v0,0x1
/*  f005dec:	11200007 */ 	beqz	$t1,.L0f005e0c
/*  f005df0:	01201025 */ 	or	$v0,$t1,$zero
.L0f005df4:
/*  f005df4:	8d0c1c54 */ 	lw	$t4,0x1c54($t0)
/*  f005df8:	8d0b00c4 */ 	lw	$t3,0xc4($t0)
/*  f005dfc:	01806827 */ 	nor	$t5,$t4,$zero
/*  f005e00:	016d1024 */ 	and	$v0,$t3,$t5
/*  f005e04:	304e0008 */ 	andi	$t6,$v0,0x8
/*  f005e08:	000e102b */ 	sltu	$v0,$zero,$t6
.L0f005e0c:
/*  f005e0c:	ad021c1c */ 	sw	$v0,0x1c1c($t0)
.L0f005e10:
/*  f005e10:	8ce80284 */ 	lw	$t0,0x284($a3)
/*  f005e14:	8d0f00d8 */ 	lw	$t7,0xd8($t0)
/*  f005e18:	15e0004e */ 	bnez	$t7,.L0f005f54
/*  f005e1c:	00000000 */ 	nop
/*  f005e20:	8cd80000 */ 	lw	$t8,0x0($a2)
/*  f005e24:	1700004b */ 	bnez	$t8,.L0f005f54
/*  f005e28:	00000000 */ 	nop
/*  f005e2c:	8d030480 */ 	lw	$v1,0x480($t0)
/*  f005e30:	50600007 */ 	beqzl	$v1,.L0f005e50
/*  f005e34:	8d0c1c54 */ 	lw	$t4,0x1c54($t0)
/*  f005e38:	10600046 */ 	beqz	$v1,.L0f005f54
/*  f005e3c:	00000000 */ 	nop
/*  f005e40:	806a0037 */ 	lb	$t2,0x37($v1)
/*  f005e44:	15400043 */ 	bnez	$t2,.L0f005f54
/*  f005e48:	00000000 */ 	nop
/*  f005e4c:	8d0c1c54 */ 	lw	$t4,0x1c54($t0)
.L0f005e50:
/*  f005e50:	8d0900c4 */ 	lw	$t1,0xc4($t0)
/*  f005e54:	01805827 */ 	nor	$t3,$t4,$zero
/*  f005e58:	012b6824 */ 	and	$t5,$t1,$t3
/*  f005e5c:	31ae0001 */ 	andi	$t6,$t5,0x1
/*  f005e60:	11c0003c */ 	beqz	$t6,.L0f005f54
/*  f005e64:	00000000 */ 	nop
/*  f005e68:	0fc5b364 */ 	jal	soloIsPaused
/*  f005e6c:	00000000 */ 	nop
/*  f005e70:	14400038 */ 	bnez	$v0,.L0f005f54
/*  f005e74:	3c08800a */ 	lui	$t0,%hi(g_Vars+0x284)
/*  f005e78:	8d08a244 */ 	lw	$t0,%lo(g_Vars+0x284)($t0)
/*  f005e7c:	3c048009 */ 	lui	$a0,%hi(var80095200)
/*  f005e80:	24050505 */ 	addiu	$a1,$zero,0x505
/*  f005e84:	8d191c20 */ 	lw	$t9,0x1c20($t0)
/*  f005e88:	2407ffff */ 	addiu	$a3,$zero,-1
/*  f005e8c:	240fffff */ 	addiu	$t7,$zero,-1
/*  f005e90:	1720000d */ 	bnez	$t9,.L0f005ec8
/*  f005e94:	25061c20 */ 	addiu	$a2,$t0,0x1c20
/*  f005e98:	3c01bf80 */ 	lui	$at,0xbf80
/*  f005e9c:	44812000 */ 	mtc1	$at,$f4
/*  f005ea0:	2418ffff */ 	addiu	$t8,$zero,-1
/*  f005ea4:	240affff */ 	addiu	$t2,$zero,-1
/*  f005ea8:	afaa001c */ 	sw	$t2,0x1c($sp)
/*  f005eac:	afb80018 */ 	sw	$t8,0x18($sp)
/*  f005eb0:	8c845200 */ 	lw	$a0,%lo(var80095200)($a0)
/*  f005eb4:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f005eb8:	0c004241 */ 	jal	audioStart
/*  f005ebc:	e7a40014 */ 	swc1	$f4,0x14($sp)
/*  f005ec0:	3c08800a */ 	lui	$t0,%hi(g_Vars+0x284)
/*  f005ec4:	8d08a244 */ 	lw	$t0,%lo(g_Vars+0x284)($t0)
.L0f005ec8:
/*  f005ec8:	8fac002c */ 	lw	$t4,0x2c($sp)
/*  f005ecc:	29810081 */ 	slti	$at,$t4,0x81
/*  f005ed0:	54200015 */ 	bnezl	$at,.L0f005f28
/*  f005ed4:	8d041c24 */ 	lw	$a0,0x1c24($t0)
/*  f005ed8:	8d091c24 */ 	lw	$t1,0x1c24($t0)
/*  f005edc:	3c048009 */ 	lui	$a0,%hi(var80095200)
/*  f005ee0:	240501be */ 	addiu	$a1,$zero,0x1be
/*  f005ee4:	15200035 */ 	bnez	$t1,.L0f005fbc
/*  f005ee8:	25061c24 */ 	addiu	$a2,$t0,0x1c24
/*  f005eec:	3c01bf80 */ 	lui	$at,0xbf80
/*  f005ef0:	44813000 */ 	mtc1	$at,$f6
/*  f005ef4:	240bffff */ 	addiu	$t3,$zero,-1
/*  f005ef8:	240dffff */ 	addiu	$t5,$zero,-1
/*  f005efc:	240effff */ 	addiu	$t6,$zero,-1
/*  f005f00:	afae001c */ 	sw	$t6,0x1c($sp)
/*  f005f04:	afad0018 */ 	sw	$t5,0x18($sp)
/*  f005f08:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f005f0c:	8c845200 */ 	lw	$a0,%lo(var80095200)($a0)
/*  f005f10:	2407ffff */ 	addiu	$a3,$zero,-1
/*  f005f14:	0c004241 */ 	jal	audioStart
/*  f005f18:	e7a60014 */ 	swc1	$f6,0x14($sp)
/*  f005f1c:	10000028 */ 	b	.L0f005fc0
/*  f005f20:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f005f24:	8d041c24 */ 	lw	$a0,0x1c24($t0)
.L0f005f28:
/*  f005f28:	50800025 */ 	beqzl	$a0,.L0f005fc0
/*  f005f2c:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f005f30:	0c00cdfc */ 	jal	func000337f0
/*  f005f34:	00000000 */ 	nop
/*  f005f38:	10400020 */ 	beqz	$v0,.L0f005fbc
/*  f005f3c:	3c19800a */ 	lui	$t9,%hi(g_Vars+0x284)
/*  f005f40:	8f39a244 */ 	lw	$t9,%lo(g_Vars+0x284)($t9)
/*  f005f44:	0c00cec9 */ 	jal	audioStop
/*  f005f48:	8f241c24 */ 	lw	$a0,0x1c24($t9)
/*  f005f4c:	1000001c */ 	b	.L0f005fc0
/*  f005f50:	8fbf0024 */ 	lw	$ra,0x24($sp)
.L0f005f54:
/*  f005f54:	3c07800a */ 	lui	$a3,%hi(g_Vars)
/*  f005f58:	24e79fc0 */ 	addiu	$a3,$a3,%lo(g_Vars)
/*  f005f5c:	8cef0284 */ 	lw	$t7,0x284($a3)
/*  f005f60:	8de41c20 */ 	lw	$a0,0x1c20($t7)
/*  f005f64:	10800008 */ 	beqz	$a0,.L0f005f88
/*  f005f68:	00000000 */ 	nop
/*  f005f6c:	0c00cdfc */ 	jal	func000337f0
/*  f005f70:	00000000 */ 	nop
/*  f005f74:	10400004 */ 	beqz	$v0,.L0f005f88
/*  f005f78:	3c18800a */ 	lui	$t8,%hi(g_Vars+0x284)
/*  f005f7c:	8f18a244 */ 	lw	$t8,%lo(g_Vars+0x284)($t8)
/*  f005f80:	0c00cec9 */ 	jal	audioStop
/*  f005f84:	8f041c20 */ 	lw	$a0,0x1c20($t8)
.L0f005f88:
/*  f005f88:	3c07800a */ 	lui	$a3,%hi(g_Vars)
/*  f005f8c:	24e79fc0 */ 	addiu	$a3,$a3,%lo(g_Vars)
/*  f005f90:	8cea0284 */ 	lw	$t2,0x284($a3)
/*  f005f94:	8d441c24 */ 	lw	$a0,0x1c24($t2)
/*  f005f98:	50800009 */ 	beqzl	$a0,.L0f005fc0
/*  f005f9c:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f005fa0:	0c00cdfc */ 	jal	func000337f0
/*  f005fa4:	00000000 */ 	nop
/*  f005fa8:	10400004 */ 	beqz	$v0,.L0f005fbc
/*  f005fac:	3c0c800a */ 	lui	$t4,%hi(g_Vars+0x284)
/*  f005fb0:	8d8ca244 */ 	lw	$t4,%lo(g_Vars+0x284)($t4)
/*  f005fb4:	0c00cec9 */ 	jal	audioStop
/*  f005fb8:	8d841c24 */ 	lw	$a0,0x1c24($t4)
.L0f005fbc:
/*  f005fbc:	8fbf0024 */ 	lw	$ra,0x24($sp)
.L0f005fc0:
/*  f005fc0:	27bd0030 */ 	addiu	$sp,$sp,0x30
/*  f005fc4:	03e00008 */ 	jr	$ra
/*  f005fc8:	00000000 */ 	nop
/*  f005fcc:	00000000 */ 	nop
);
