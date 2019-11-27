#include <ultra64.h>
#include "types.h"
#include "library/library_034f0.h"
#include "library/library_491b0.h"

GLOBAL_ASM(
glabel func00051c10
/*    51c10:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*    51c14:	afbf001c */ 	sw	$ra,0x1c($sp)
/*    51c18:	0c01256c */ 	jal	func000495b0
/*    51c1c:	afb00018 */ 	sw	$s0,0x18($sp)
/*    51c20:	3c0f8006 */ 	lui	$t7,0x8006
/*    51c24:	8def0940 */ 	lw	$t7,0x940($t7)
/*    51c28:	240e0002 */ 	addiu	$t6,$zero,0x2
/*    51c2c:	3c048006 */ 	lui	$a0,%hi(var80060938)
/*    51c30:	00408025 */ 	or	$s0,$v0,$zero
/*    51c34:	24840938 */ 	addiu	$a0,$a0,%lo(var80060938)
/*    51c38:	0c000ee8 */ 	jal	func00003ba0
/*    51c3c:	a5ee0010 */ 	sh	$t6,0x10($t7)
/*    51c40:	0c012588 */ 	jal	func00049620
/*    51c44:	02002025 */ 	or	$a0,$s0,$zero
/*    51c48:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*    51c4c:	8fb00018 */ 	lw	$s0,0x18($sp)
/*    51c50:	27bd0028 */ 	addiu	$sp,$sp,0x28
/*    51c54:	03e00008 */ 	jr	$ra
/*    51c58:	00000000 */ 	sll	$zero,$zero,0x0
/*    51c5c:	00000000 */ 	sll	$zero,$zero,0x0
);