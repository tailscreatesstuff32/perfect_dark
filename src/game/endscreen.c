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
#include "game/game_005fd0.h"
#include "game/title.h"
#include "game/game_01b0a0.h"
#include "game/game_095320.h"
#include "game/game_097ba0.h"
#include "game/game_0b0420.h"
#include "game/game_0b63b0.h"
#include "game/game_0d4690.h"
#include "game/game_0e0770.h"
#include "game/game_0f09f0.h"
#include "game/game_102240.h"
#include "game/game_107fb0.h"
#include "game/endscreen.h"
#include "game/game_1655c0.h"
#include "game/game_167ae0.h"
#include "game/game_177e00.h"
#include "game/game_19aa80.h"
#include "game/gamefile.h"
#include "game/lang.h"
#include "game/pdoptions.h"
#include "gvars/gvars.h"
#include "lib/lib_09660.h"
#include "lib/lib_0d520.h"
#include "lib/lib_13130.h"
#include "types.h"

s32 menuhandlerDeclineMission(u32 operation, struct menuitem *item, s32 *value)
{
	if (operation == MENUOP_SET) {
		menuPopDialog();
		menuPopDialog();
	}

	return 0;
}

void menudialogRetryMission(u32 operation, struct menudialog *dialog, struct menuthing **thingptr)
{
	switch (operation) {
	case MENUOP_102:
		{
			/**
			 * NTSC Final adds this check to make sure the given dialog is
			 * either the one being displayed or its sibling. This most likely
			 * fixes a bug - perhaps there is some way that this handler is run
			 * when the dialog is not on screen?
			 */
#if VERSION >= VERSION_NTSC_FINAL
			if (g_Menus[g_MpPlayerNum].curframe) {
				if (dialog == g_Menus[g_MpPlayerNum].curframe->dialog
						|| (dialog->nextsibling && dialog->nextsibling == g_Menus[g_MpPlayerNum].curframe->dialog)) {
#endif
					struct menuthing *thing = *thingptr;
					bool pass = false;

					if (thing->unk03) {
						menuPopDialog();
						menuPopDialog();
					}

					thing->unk03 = 0;

					if (thing->unk0a) {
						pass = true;
					}

					thing->unk0a = 0;

					if (thing->unk02
							&& g_Menus[g_MpPlayerNum].curframe
							&& dialog->nextsibling
							&& dialog->nextsibling == g_Menus[g_MpPlayerNum].curframe->dialog) {
						pass = true;
						thing->unk02 = 0;
					}

					if (pass) {
						s32 values[4];
						menuhandlerAcceptMission(MENUOP_SET, &dialog->items[1], values);
					}
#if VERSION >= VERSION_NTSC_FINAL
				}
			}
#endif
		}
	}

	menudialog00103608(operation, dialog, thingptr);
}

char *menuDialogTitleRetryStageName(struct menudialog *dialog)
{
	char *name;
	char *prefix;

	if (g_Menus[g_MpPlayerNum].curframe->dialog != dialog) {
		return langGet(L_OPTIONS(300)); // "Objectives"
	}

	prefix = langGet(L_OPTIONS(296)); // "Retry"
	name = langGet(g_StageNames[g_MissionConfig.stageindex].name3);

	sprintf(g_StringPointer, "%s: %s\n", prefix, name);

	return g_StringPointer;
}

char *menuDialogTitleNextMissionStageName(struct menudialog *dialog)
{
	char *name;
	char *prefix;

	if (g_Menus[g_MpPlayerNum].curframe->dialog != dialog) {
		return langGet(L_OPTIONS(300)); // "Objectives"
	}

	prefix = langGet(L_OPTIONS(297)); // "Next Mission"
	name = langGet(g_StageNames[g_MissionConfig.stageindex].name3);

	sprintf(g_StringPointer, "%s: %s\n", prefix, name);

	return g_StringPointer;
}

s32 menuhandlerReplayPreviousMission(u32 operation, struct menuitem *item, s32 *value)
{
	if (operation == MENUOP_SET) {
		g_MissionConfig.stageindex--;
		g_MissionConfig.stagenum = g_StageNames[g_MissionConfig.stageindex].stagenum;
	}

	return menuhandlerAcceptMission(operation, NULL, value);
}

struct menuitem g_MenuItemsRetryMission[] = {
	{ MENUITEMTYPE_OBJECTIVES,  1, 0x00000000, 0x00000000, 0x00000000, NULL },
	{ MENUITEMTYPE_SELECTABLE,  0, 0x00000000, L_OPTIONS(298), 0x00000000, menuhandlerAcceptMission }, // "Accept"
	{ MENUITEMTYPE_SELECTABLE,  0, 0x00000000, L_OPTIONS(299), 0x00000000, menuhandlerDeclineMission }, // "Decline"
	{ MENUITEMTYPE_END,         0, 0x00000000, 0x00000000, 0x00000000, NULL },
};

struct menudialog g_MenuDialogRetryMission = {
	MENUDIALOGTYPE_DEFAULT,
	(u32)&menuDialogTitleRetryStageName,
	g_MenuItemsRetryMission,
	menudialogRetryMission,
	0x0000000c,
	&menudialog_briefing,
};

struct menuitem g_MenuItemsPromptNextMission[] = {
	{ MENUITEMTYPE_OBJECTIVES,  1, 0x00000000, 0x00000000, 0x00000000, NULL },
	{ MENUITEMTYPE_SELECTABLE,  0, 0x00000000, L_OPTIONS(298), 0x00000000, menuhandlerAcceptMission }, // "Accept"
	{ MENUITEMTYPE_SELECTABLE,  0, 0x00000000, L_OPTIONS(299), 0x00000000, menuhandlerDeclineMission }, // "Decline"
	{ MENUITEMTYPE_SEPARATOR,   0, 0x00000000, 0x00000000, 0x00000000, NULL },
	{ MENUITEMTYPE_SELECTABLE,  0, 0x00000000, L_MISC(470), 0x00000000, menuhandlerReplayPreviousMission }, // "Replay Previous Mission"
	{ MENUITEMTYPE_END,         0, 0x00000000, 0x00000000, 0x00000000, NULL },
};

struct menudialog g_MenuDialogPromptNextMission = {
	MENUDIALOGTYPE_DEFAULT,
	(u32)&menuDialogTitleNextMissionStageName,
	g_MenuItemsPromptNextMission,
	menudialogRetryMission,
	0x0000000c,
	&menudialog_briefing,
};

char *soloMenuTextNumKills(struct menuitem *item)
{
	sprintf(g_StringPointer, "%d", currentPlayerGetNumKills());
	return g_StringPointer;
}

char *soloMenuTextNumShots(struct menuitem *item)
{
	sprintf(g_StringPointer, "%d", currentPlayerGetShotCount(SHOTCOUNT_TOTAL));
	return g_StringPointer;
}

char *soloMenuTextNumHeadShots(struct menuitem *item)
{
	sprintf(g_StringPointer, "%d", currentPlayerGetShotCount(SHOTCOUNT_HEAD));
	return g_StringPointer;
}

char *soloMenuTextNumBodyShots(struct menuitem *item)
{
	sprintf(g_StringPointer, "%d", currentPlayerGetShotCount(SHOTCOUNT_BODY));
	return g_StringPointer;
}

char *soloMenuTextNumLimbShots(struct menuitem *item)
{
	sprintf(g_StringPointer, "%d", currentPlayerGetShotCount(SHOTCOUNT_LIMB));
	return g_StringPointer;
}

char *soloMenuTextNumOtherShots(struct menuitem *item)
{
	u32 total = currentPlayerGetShotCount(SHOTCOUNT_GUN) + currentPlayerGetShotCount(SHOTCOUNT_5);
	sprintf(g_StringPointer, "%d", total);
	return g_StringPointer;
}

char *soloMenuTextAccuracy(struct menuitem *item)
{
	s32 total = currentPlayerGetShotCount(SHOTCOUNT_TOTAL);
	s32 numhead = currentPlayerGetShotCount(SHOTCOUNT_HEAD);
	s32 numbody = currentPlayerGetShotCount(SHOTCOUNT_BODY);
	s32 numlimb = currentPlayerGetShotCount(SHOTCOUNT_LIMB);
	s32 numgun = currentPlayerGetShotCount(SHOTCOUNT_GUN);
	s32 num5 = currentPlayerGetShotCount(SHOTCOUNT_5);
	s32 numobject = currentPlayerGetShotCount(SHOTCOUNT_OBJECT);
	f32 accuracy;

	if (total > 0) {
		s32 hits = numhead + numbody + numlimb + numgun + num5 + numobject;
		accuracy = hits * 100.0f / total;
	} else {
		accuracy = 0;
	}

    if (accuracy > 100.0f) {
        accuracy = 100.0f;
    }

    sprintf(g_StringPointer, "%s%s%.1f%%", "", "", accuracy);
    return g_StringPointer;
}

char *soloMenuTextMissionStatus(struct menuitem *item)
{
	if (g_CheatsActiveBank0 || g_CheatsActiveBank1) {
		return langGet(L_MPWEAPONS(135)); // "Cheated"
	}

	if (g_Vars.coopplayernum >= 0) {
		if (g_Vars.bond->aborted || g_Vars.coop->aborted) {
			return langGet(L_OPTIONS(295)); // "Aborted"
		}

		if (g_Vars.bond->isdead && g_Vars.coop->isdead) {
			return langGet(L_OPTIONS(293)); // "Failed"
		}
	} else if (g_Vars.antiplayernum >= 0) {
		if (g_Vars.currentplayer == g_Vars.bond) {
			if (g_Vars.bond->aborted) {
				return langGet(L_OPTIONS(295)); // "Aborted"
			}

			if (g_Vars.anti->aborted) {
				return langGet(L_OPTIONS(295)); // "Aborted"
			}

			if (g_Vars.bond->isdead) {
				return langGet(L_OPTIONS(293)); // "Failed"
			}
		} else {
			if (g_Vars.anti->aborted) {
				return langGet(L_OPTIONS(295)); // "Aborted"
			}

			if (!g_Vars.bond->aborted && !g_Vars.bond->isdead) {
				return langGet(L_OPTIONS(293)); // "Failed"
			}
		}
	} else {
		if (g_Vars.bond->aborted) {
			return langGet(L_OPTIONS(295)); // "Aborted"
		}

		if (g_Vars.bond->isdead) {
			return langGet(L_OPTIONS(293)); // "Failed"
		}
	}

	if (objectiveIsAllComplete() == false) {
		return langGet(L_OPTIONS(293)); // "Failed"
	}

	if (g_StageIndex == STAGEINDEX_DEFENSE) {
		return langGet(L_MPWEAPONS(62)); // "Unknown"
	}

	return langGet(L_OPTIONS(294)); // "Completed"
}

char *soloMenuTextAgentStatus(struct menuitem *item)
{
	if (g_CheatsActiveBank0 || g_CheatsActiveBank1) {
		return langGet(L_MPWEAPONS(134)); // "Dishonored"
	}

	if (g_Vars.currentplayer->aborted) {
		return langGet(L_OPTIONS(292)); // "Disavowed"
	}

	if (g_Vars.currentplayer->isdead) {
		return langGet(L_OPTIONS(290)); // "Deceased"
	}

	if (g_StageIndex == STAGEINDEX_DEFENSE) {
		return langGet(L_MPWEAPONS(63)); // "Missing"
	}

	return langGet(L_OPTIONS(291)); // "Active"
}

char *menuTitleStageCompleted(struct menuitem *item)
{
	sprintf(g_StringPointer, "%s: %s\n",
			langGet(g_StageNames[g_Menus[g_MpPlayerNum].data.endscreen.stageindex].name3),
			langGet(L_OPTIONS(276))); // "Completed"

	return g_StringPointer;
}

char *menuTextCurrentStageName3(struct menuitem *item)
{
	char *name = langGet(g_StageNames[g_MissionConfig.stageindex].name3);
	sprintf(g_StringPointer, "%s\n", name);

	return g_StringPointer;
}

char *menuTitleStageFailed(struct menuitem *item)
{
	sprintf(g_StringPointer, "%s: %s\n",
			langGet(g_StageNames[g_MissionConfig.stageindex].name3),
			langGet(L_OPTIONS(277))); // "Failed"

	return g_StringPointer;
}

char *soloMenuTextMissionTime(struct menuitem *item)
{
	formatTime(g_StringPointer, getMissionTime(), 3);
	strcat(g_StringPointer, "\n");

	return g_StringPointer;
}

struct menudialog *func0f10d730(void)
{
	g_MissionConfig.stageindex++;
	g_MissionConfig.stagenum = g_StageNames[g_MissionConfig.stageindex].stagenum;

	return &g_MenuDialogPromptNextMission;
}

void func0f10d770(void)
{
	func0f0f8bb4(&g_Menus[0].unk840, func0f09ddfc() - func0f0e4fe0(), 0);
	g_Menus[0].unk844 = func0f09ddec() + func0f0e4fe0();

	func0f0f8bb4(&g_Menus[1].unk840, func0f09ddfc() - func0f0e4fe0(), 0);
	g_Menus[1].unk844 = func0f09ddec() + func0f0e4fe0();

	func0f0f8bb4(&g_Menus[2].unk840, func0f09ddfc() - func0f0e4fe0(), 0);
	g_Menus[2].unk844 = func0f09ddec() + func0f0e4fe0();

	func0f0f8bb4(&g_Menus[3].unk840, func0f09ddfc() - func0f0e4fe0(), 0);
	g_Menus[3].unk844 = func0f09ddec() + func0f0e4fe0();
}

s32 menuhandlerReplayLastLevel(u32 operation, struct menuitem *item, s32 *value)
{
	if (operation == MENUOP_SET) {
		g_MissionConfig.stagenum = g_StageNames[g_MissionConfig.stageindex].stagenum;
		return menuhandlerAcceptMission(operation, NULL, value);
	}

	return 0;
}

struct menuitem g_MenuItemsSolo2PObjectivesNarrow[] = {
	{ MENUITEMTYPE_OBJECTIVES,  2, 0x00000000, 0x00000000, 0x00000000, NULL },
	{ MENUITEMTYPE_SEPARATOR,   0, 0x00000000, 0x00000000, 0x00000000, NULL },
	{ MENUITEMTYPE_SELECTABLE,  0, 0x00000020, L_OPTIONS(301), 0x00000000, NULL }, // "Press START"
	{ MENUITEMTYPE_END,         0, 0x00000000, 0x00000000, 0x00000000, NULL },
};

struct menuitem g_MenuItemsSolo2PObjectivesWide[] = {
	{ MENUITEMTYPE_OBJECTIVES,  0, 0x00000000, 0x00000000, 0x00000000, NULL },
	{ MENUITEMTYPE_SEPARATOR,   0, 0x00000000, 0x00000000, 0x00000000, NULL },
	{ MENUITEMTYPE_SELECTABLE,  0, 0x00000020, L_OPTIONS(301), 0x00000000, NULL }, // "Press START"
	{ MENUITEMTYPE_END,         0, 0x00000000, 0x00000000, 0x00000000, NULL },
};

struct menudialog g_MenuDialogObjectivesFailedWide = {
	MENUDIALOGTYPE_DANGER,
	L_OPTIONS(300), // "Objectives"
	g_MenuItemsSolo2PObjectivesWide,
	soloMenuDialogPauseStatus,
	0x00000048,
	NULL,
};

struct menudialog g_MenuDialogObjectivesCompletedWide = {
	MENUDIALOGTYPE_SUCCESS,
	L_OPTIONS(300), // "Objectives"
	g_MenuItemsSolo2PObjectivesWide,
	soloMenuDialogPauseStatus,
	0x00000048,
	NULL,
};

struct menudialog g_MenuDialogObjectivesFailedNarrow = {
	MENUDIALOGTYPE_DANGER,
	L_OPTIONS(300), // "Objectives"
	g_MenuItemsSolo2PObjectivesNarrow,
	soloMenuDialogPauseStatus,
	0x00000048,
	NULL,
};

struct menudialog g_MenuDialogObjectivesCompletedNarrow = {
	MENUDIALOGTYPE_SUCCESS,
	L_OPTIONS(300), // "Objectives"
	g_MenuItemsSolo2PObjectivesNarrow,
	soloMenuDialogPauseStatus,
	0x00000048,
	NULL,
};


/**
 * Displayed after Defense and Skedar Ruins completion screens.
 */
s32 menuhandlerContinueMission(u32 operation, struct menuitem *item, s32 *value)
{
	if (operation == MENUOP_SET) {
		endscreenHandleContinue(2);
	}

	return 0;
}

struct menuitem g_MenuItemsContinueOrReplay[] = {
	{ MENUITEMTYPE_SELECTABLE,  0, 0x00000020, L_MPWEAPONS(244), 0x00000000, menuhandlerContinueMission }, // "Continue"
	{ MENUITEMTYPE_SELECTABLE,  0, 0x00000020, L_MPWEAPONS(245), 0x00000000, menuhandlerReplayLastLevel }, // "Replay Last Level"
	{ MENUITEMTYPE_END,         0, 0x00000000, 0x00000000, 0x00000000, NULL },
};

struct menudialog g_MenuDialogContinueOrReplay = {
	MENUDIALOGTYPE_DEFAULT,
	(u32)&menuTextCurrentStageName3,
	g_MenuItemsContinueOrReplay,
	NULL,
	0x00000004,
	NULL,
};

/**
 * Context is:
 *
 * 0 when closing a completed endscreen
 * 1 unsure - is invoked directly by menuTick
 * 2 when pressing continue
 */
void endscreenHandleContinue(s32 context)
{
	if (g_Vars.antiplayernum >= 0) {
		menuPopDialog();
	} else if (g_Vars.coopplayernum >= 0 && PLAYERCOUNT() >= 2 && context == 0) {
		menuPopDialog();
	} else {
		if (g_Vars.stagenum == STAGE_DEEPSEA || g_Vars.stagenum == STAGE_SKEDARRUINS) {
			if (context == 2 || g_Menus[g_MpPlayerNum].data.endscreen.isfirstcompletion) {
				// Pressed continue
				if (g_Vars.stagenum == STAGE_DEEPSEA) {
					if (!isStageDifficultyUnlocked(g_MissionConfig.stageindex + 1, g_MissionConfig.difficulty)) {
						menuPopDialog();
						menuPopDialog();
					} else {
						// Commit to starting next stage
						g_MissionConfig.stageindex++;
						g_MissionConfig.stagenum = g_StageNames[g_MissionConfig.stageindex].stagenum;

						func0f01b154(g_MissionConfig.stagenum);

						if (g_MissionConfig.iscoop) {
							if (g_Vars.numaibuddies == 0) {
								g_Vars.bondplayernum = 0;
								g_Vars.coopplayernum = 1;
								g_Vars.antiplayernum = -1;
								setNumPlayers(2);
							} else {
								g_Vars.bondplayernum = 0;
								g_Vars.coopplayernum = -1;
								g_Vars.antiplayernum = -1;
								setNumPlayers(1);
							}
						} else {
							g_Vars.bondplayernum = 0;
							g_Vars.coopplayernum = -1;
							g_Vars.antiplayernum = -1;
							setNumPlayers(1);
						}

						setDifficulty(g_MissionConfig.difficulty);
						titleSetNextMode(TITLEMODE_SKIP);
						func0000e95c(g_MissionConfig.stagenum);
						func00009ec4(true);
					}
				} else if (g_Vars.stagenum == STAGE_SKEDARRUINS) {
					// Commit to starting credits
					g_MissionConfig.stagenum = STAGE_CREDITS;
					func0f01b154(g_MissionConfig.stagenum);
					setDifficulty(g_MissionConfig.difficulty);
					titleSetNextMode(TITLEMODE_SKIP);
					func0000e95c(g_MissionConfig.stagenum);
					func00009ec4(true);
				}
			} else {
				if (context == 1) {
					menuPushRootDialog(&g_MenuDialogContinueOrReplay, MENUROOT_9);
				} else {
					menuPushDialog(&g_MenuDialogContinueOrReplay);
				}
			}
		} else {
			if (context == 2) {
				menuPopDialog();
			}

			if (isStageDifficultyUnlocked(g_MissionConfig.stageindex + 1, g_MissionConfig.difficulty) == 0) {
				if (context == 2) {
					menuPopDialog();
					menuPopDialog();
				} else {
					menuPushDialog(&g_MenuDialogContinueOrReplay);
				}
			} else if (stageGetIndex(g_MissionConfig.stagenum) < 0
						|| g_Vars.stagenum == STAGE_CITRAINING
						|| g_MissionConfig.stageindex >= SOLOSTAGEINDEX_MBR) {
				if (context == 2) {
					menuPopDialog();
					menuPopDialog();
				} else {
					menuPushDialog(&g_MenuDialogContinueOrReplay);
				}
			} else {
				func0f10d770();

				if (context == 1) {
					menuPushRootDialog(func0f10d730(), MENUROOT_9);
				} else {
					menuPushDialog(func0f10d730());
				}
			}
		}
	}
}

GLOBAL_ASM(
glabel menudialogSolo2PEndscreenCompleted
/*  f10dd28:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f10dd2c:	24010064 */ 	addiu	$at,$zero,0x64
/*  f10dd30:	1481000d */ 	bne	$a0,$at,.L0f10dd68
/*  f10dd34:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f10dd38:	3c0e8007 */ 	lui	$t6,%hi(g_MpPlayerNum)
/*  f10dd3c:	8dce1448 */ 	lw	$t6,%lo(g_MpPlayerNum)($t6)
/*  f10dd40:	3c01800a */ 	lui	$at,%hi(g_Menus+0xe1c)
/*  f10dd44:	000e78c0 */ 	sll	$t7,$t6,0x3
/*  f10dd48:	01ee7823 */ 	subu	$t7,$t7,$t6
/*  f10dd4c:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f10dd50:	01ee7821 */ 	addu	$t7,$t7,$t6
/*  f10dd54:	000f78c0 */ 	sll	$t7,$t7,0x3
/*  f10dd58:	01ee7823 */ 	subu	$t7,$t7,$t6
/*  f10dd5c:	000f7900 */ 	sll	$t7,$t7,0x4
/*  f10dd60:	002f0821 */ 	addu	$at,$at,$t7
/*  f10dd64:	ac20ee1c */ 	sw	$zero,%lo(g_Menus+0xe1c)($at)
.L0f10dd68:
/*  f10dd68:	24010066 */ 	addiu	$at,$zero,0x66
/*  f10dd6c:	14810035 */ 	bne	$a0,$at,.L0f10de44
/*  f10dd70:	3c188007 */ 	lui	$t8,%hi(g_MpPlayerNum)
/*  f10dd74:	8f181448 */ 	lw	$t8,%lo(g_MpPlayerNum)($t8)
/*  f10dd78:	3c08800a */ 	lui	$t0,0x800a
/*  f10dd7c:	2508e000 */ 	addiu	$t0,$t0,-8192
/*  f10dd80:	0018c8c0 */ 	sll	$t9,$t8,0x3
/*  f10dd84:	0338c823 */ 	subu	$t9,$t9,$t8
/*  f10dd88:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f10dd8c:	0338c821 */ 	addu	$t9,$t9,$t8
/*  f10dd90:	0019c8c0 */ 	sll	$t9,$t9,0x3
/*  f10dd94:	0338c823 */ 	subu	$t9,$t9,$t8
/*  f10dd98:	0019c900 */ 	sll	$t9,$t9,0x4
/*  f10dd9c:	03282021 */ 	addu	$a0,$t9,$t0
/*  f10dda0:	8c8204f8 */ 	lw	$v0,0x4f8($a0)
/*  f10dda4:	50400028 */ 	beqzl	$v0,.L0f10de48
/*  f10dda8:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f10ddac:	8c430000 */ 	lw	$v1,0x0($v0)
/*  f10ddb0:	50a30007 */ 	beql	$a1,$v1,.L0f10ddd0
/*  f10ddb4:	8cc30000 */ 	lw	$v1,0x0($a2)
/*  f10ddb8:	8ca20014 */ 	lw	$v0,0x14($a1)
/*  f10ddbc:	50400022 */ 	beqzl	$v0,.L0f10de48
/*  f10ddc0:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f10ddc4:	54430020 */ 	bnel	$v0,$v1,.L0f10de48
/*  f10ddc8:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f10ddcc:	8cc30000 */ 	lw	$v1,0x0($a2)
.L0f10ddd0:
/*  f10ddd0:	240c0006 */ 	addiu	$t4,$zero,0x6
/*  f10ddd4:	3c0d800a */ 	lui	$t5,%hi(var8009dfc0)
/*  f10ddd8:	90690002 */ 	lbu	$t1,0x2($v1)
/*  f10dddc:	55200008 */ 	bnezl	$t1,.L0f10de00
/*  f10dde0:	ac8c0e1c */ 	sw	$t4,0xe1c($a0)
/*  f10dde4:	906a0003 */ 	lbu	$t2,0x3($v1)
/*  f10dde8:	55400005 */ 	bnezl	$t2,.L0f10de00
/*  f10ddec:	ac8c0e1c */ 	sw	$t4,0xe1c($a0)
/*  f10ddf0:	806b000a */ 	lb	$t3,0xa($v1)
/*  f10ddf4:	51600003 */ 	beqzl	$t3,.L0f10de04
/*  f10ddf8:	8c820e1c */ 	lw	$v0,0xe1c($a0)
/*  f10ddfc:	ac8c0e1c */ 	sw	$t4,0xe1c($a0)
.L0f10de00:
/*  f10de00:	8c820e1c */ 	lw	$v0,0xe1c($a0)
.L0f10de04:
/*  f10de04:	5040000d */ 	beqzl	$v0,.L0f10de3c
/*  f10de08:	a060000a */ 	sb	$zero,0xa($v1)
/*  f10de0c:	8daddfc0 */ 	lw	$t5,%lo(var8009dfc0)($t5)
/*  f10de10:	244effff */ 	addiu	$t6,$v0,-1
/*  f10de14:	11a00003 */ 	beqz	$t5,.L0f10de24
/*  f10de18:	00000000 */ 	nop
/*  f10de1c:	ac8e0e1c */ 	sw	$t6,0xe1c($a0)
/*  f10de20:	01c01025 */ 	or	$v0,$t6,$zero
.L0f10de24:
/*  f10de24:	14400004 */ 	bnez	$v0,.L0f10de38
/*  f10de28:	00002025 */ 	or	$a0,$zero,$zero
/*  f10de2c:	0fc43644 */ 	jal	endscreenHandleContinue
/*  f10de30:	afa3001c */ 	sw	$v1,0x1c($sp)
/*  f10de34:	8fa3001c */ 	lw	$v1,0x1c($sp)
.L0f10de38:
/*  f10de38:	a060000a */ 	sb	$zero,0xa($v1)
.L0f10de3c:
/*  f10de3c:	a0600003 */ 	sb	$zero,0x3($v1)
/*  f10de40:	a0600002 */ 	sb	$zero,0x2($v1)
.L0f10de44:
/*  f10de44:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f10de48:
/*  f10de48:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f10de4c:	00001025 */ 	or	$v0,$zero,$zero
/*  f10de50:	03e00008 */ 	jr	$ra
/*  f10de54:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel menudialogSolo2PEndscreenFailed
/*  f10de58:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f10de5c:	24010064 */ 	addiu	$at,$zero,0x64
/*  f10de60:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f10de64:	1481000d */ 	bne	$a0,$at,.L0f10de9c
/*  f10de68:	00c03825 */ 	or	$a3,$a2,$zero
/*  f10de6c:	3c0e8007 */ 	lui	$t6,%hi(g_MpPlayerNum)
/*  f10de70:	8dce1448 */ 	lw	$t6,%lo(g_MpPlayerNum)($t6)
/*  f10de74:	3c01800a */ 	lui	$at,%hi(g_Menus+0xe1c)
/*  f10de78:	000e78c0 */ 	sll	$t7,$t6,0x3
/*  f10de7c:	01ee7823 */ 	subu	$t7,$t7,$t6
/*  f10de80:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f10de84:	01ee7821 */ 	addu	$t7,$t7,$t6
/*  f10de88:	000f78c0 */ 	sll	$t7,$t7,0x3
/*  f10de8c:	01ee7823 */ 	subu	$t7,$t7,$t6
/*  f10de90:	000f7900 */ 	sll	$t7,$t7,0x4
/*  f10de94:	002f0821 */ 	addu	$at,$at,$t7
/*  f10de98:	ac20ee1c */ 	sw	$zero,%lo(g_Menus+0xe1c)($at)
.L0f10de9c:
/*  f10de9c:	24010066 */ 	addiu	$at,$zero,0x66
/*  f10dea0:	1481006b */ 	bne	$a0,$at,.L0f10e050
/*  f10dea4:	3c188007 */ 	lui	$t8,%hi(g_MpPlayerNum)
/*  f10dea8:	8f181448 */ 	lw	$t8,%lo(g_MpPlayerNum)($t8)
/*  f10deac:	3c08800a */ 	lui	$t0,0x800a
/*  f10deb0:	2508e000 */ 	addiu	$t0,$t0,-8192
/*  f10deb4:	0018c8c0 */ 	sll	$t9,$t8,0x3
/*  f10deb8:	0338c823 */ 	subu	$t9,$t9,$t8
/*  f10debc:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f10dec0:	0338c821 */ 	addu	$t9,$t9,$t8
/*  f10dec4:	0019c8c0 */ 	sll	$t9,$t9,0x3
/*  f10dec8:	0338c823 */ 	subu	$t9,$t9,$t8
/*  f10decc:	0019c900 */ 	sll	$t9,$t9,0x4
/*  f10ded0:	03281821 */ 	addu	$v1,$t9,$t0
/*  f10ded4:	8c6204f8 */ 	lw	$v0,0x4f8($v1)
/*  f10ded8:	5040005e */ 	beqzl	$v0,.L0f10e054
/*  f10dedc:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f10dee0:	8c440000 */ 	lw	$a0,0x0($v0)
/*  f10dee4:	50a40007 */ 	beql	$a1,$a0,.L0f10df04
/*  f10dee8:	8ce60000 */ 	lw	$a2,0x0($a3)
/*  f10deec:	8ca20014 */ 	lw	$v0,0x14($a1)
/*  f10def0:	50400058 */ 	beqzl	$v0,.L0f10e054
/*  f10def4:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f10def8:	54440056 */ 	bnel	$v0,$a0,.L0f10e054
/*  f10defc:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f10df00:	8ce60000 */ 	lw	$a2,0x0($a3)
.L0f10df04:
/*  f10df04:	240c0006 */ 	addiu	$t4,$zero,0x6
/*  f10df08:	3c0d800a */ 	lui	$t5,%hi(var8009dfc0)
/*  f10df0c:	90c90002 */ 	lbu	$t1,0x2($a2)
/*  f10df10:	55200008 */ 	bnezl	$t1,.L0f10df34
/*  f10df14:	ac6c0e1c */ 	sw	$t4,0xe1c($v1)
/*  f10df18:	90ca0003 */ 	lbu	$t2,0x3($a2)
/*  f10df1c:	55400005 */ 	bnezl	$t2,.L0f10df34
/*  f10df20:	ac6c0e1c */ 	sw	$t4,0xe1c($v1)
/*  f10df24:	80cb000a */ 	lb	$t3,0xa($a2)
/*  f10df28:	51600003 */ 	beqzl	$t3,.L0f10df38
/*  f10df2c:	8c620e1c */ 	lw	$v0,0xe1c($v1)
/*  f10df30:	ac6c0e1c */ 	sw	$t4,0xe1c($v1)
.L0f10df34:
/*  f10df34:	8c620e1c */ 	lw	$v0,0xe1c($v1)
.L0f10df38:
/*  f10df38:	50400043 */ 	beqzl	$v0,.L0f10e048
/*  f10df3c:	a0c0000a */ 	sb	$zero,0xa($a2)
/*  f10df40:	8daddfc0 */ 	lw	$t5,%lo(var8009dfc0)($t5)
/*  f10df44:	3c05800a */ 	lui	$a1,%hi(g_Vars)
/*  f10df48:	244effff */ 	addiu	$t6,$v0,-1
/*  f10df4c:	11a00003 */ 	beqz	$t5,.L0f10df5c
/*  f10df50:	24a59fc0 */ 	addiu	$a1,$a1,%lo(g_Vars)
/*  f10df54:	ac6e0e1c */ 	sw	$t6,0xe1c($v1)
/*  f10df58:	01c01025 */ 	or	$v0,$t6,$zero
.L0f10df5c:
/*  f10df5c:	5440003a */ 	bnezl	$v0,.L0f10e048
/*  f10df60:	a0c0000a */ 	sb	$zero,0xa($a2)
/*  f10df64:	8caf029c */ 	lw	$t7,0x29c($a1)
/*  f10df68:	05e1002c */ 	bgez	$t7,.L0f10e01c
/*  f10df6c:	00000000 */ 	nop
/*  f10df70:	8cb80298 */ 	lw	$t8,0x298($a1)
/*  f10df74:	0700001d */ 	bltz	$t8,.L0f10dfec
/*  f10df78:	00000000 */ 	nop
/*  f10df7c:	8cb9006c */ 	lw	$t9,0x6c($a1)
/*  f10df80:	00003825 */ 	or	$a3,$zero,$zero
/*  f10df84:	00001825 */ 	or	$v1,$zero,$zero
/*  f10df88:	13200003 */ 	beqz	$t9,.L0f10df98
/*  f10df8c:	00002025 */ 	or	$a0,$zero,$zero
/*  f10df90:	10000001 */ 	b	.L0f10df98
/*  f10df94:	24070001 */ 	addiu	$a3,$zero,0x1
.L0f10df98:
/*  f10df98:	8ca80068 */ 	lw	$t0,0x68($a1)
/*  f10df9c:	00001025 */ 	or	$v0,$zero,$zero
/*  f10dfa0:	11000003 */ 	beqz	$t0,.L0f10dfb0
/*  f10dfa4:	00000000 */ 	nop
/*  f10dfa8:	10000001 */ 	b	.L0f10dfb0
/*  f10dfac:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f10dfb0:
/*  f10dfb0:	8ca90064 */ 	lw	$t1,0x64($a1)
/*  f10dfb4:	11200003 */ 	beqz	$t1,.L0f10dfc4
/*  f10dfb8:	00000000 */ 	nop
/*  f10dfbc:	10000001 */ 	b	.L0f10dfc4
/*  f10dfc0:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f10dfc4:
/*  f10dfc4:	8caa0070 */ 	lw	$t2,0x70($a1)
/*  f10dfc8:	11400003 */ 	beqz	$t2,.L0f10dfd8
/*  f10dfcc:	00000000 */ 	nop
/*  f10dfd0:	10000001 */ 	b	.L0f10dfd8
/*  f10dfd4:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f10dfd8:
/*  f10dfd8:	00445821 */ 	addu	$t3,$v0,$a0
/*  f10dfdc:	01636021 */ 	addu	$t4,$t3,$v1
/*  f10dfe0:	01876821 */ 	addu	$t5,$t4,$a3
/*  f10dfe4:	29a10002 */ 	slti	$at,$t5,0x2
/*  f10dfe8:	1020000c */ 	beqz	$at,.L0f10e01c
.L0f10dfec:
/*  f10dfec:	3c04800a */ 	lui	$a0,%hi(g_MissionConfig+0x1)
/*  f10dff0:	9084dfe9 */ 	lbu	$a0,%lo(g_MissionConfig+0x1)($a0)
/*  f10dff4:	0fc59585 */ 	jal	stageGetIndex
/*  f10dff8:	afa6001c */ 	sw	$a2,0x1c($sp)
/*  f10dffc:	3c05800a */ 	lui	$a1,%hi(g_Vars)
/*  f10e000:	24a59fc0 */ 	addiu	$a1,$a1,%lo(g_Vars)
/*  f10e004:	04400005 */ 	bltz	$v0,.L0f10e01c
/*  f10e008:	8fa6001c */ 	lw	$a2,0x1c($sp)
/*  f10e00c:	8cae04b4 */ 	lw	$t6,0x4b4($a1)
/*  f10e010:	24010026 */ 	addiu	$at,$zero,0x26
/*  f10e014:	15c10005 */ 	bne	$t6,$at,.L0f10e02c
/*  f10e018:	00000000 */ 	nop
.L0f10e01c:
/*  f10e01c:	0fc3cdb7 */ 	jal	menuPopDialog
/*  f10e020:	afa6001c */ 	sw	$a2,0x1c($sp)
/*  f10e024:	10000007 */ 	b	.L0f10e044
/*  f10e028:	8fa6001c */ 	lw	$a2,0x1c($sp)
.L0f10e02c:
/*  f10e02c:	0fc435dc */ 	jal	func0f10d770
/*  f10e030:	afa6001c */ 	sw	$a2,0x1c($sp)
/*  f10e034:	3c048007 */ 	lui	$a0,%hi(g_MenuDialogRetryMission)
/*  f10e038:	0fc3cbd3 */ 	jal	menuPushDialog
/*  f10e03c:	248455a0 */ 	addiu	$a0,$a0,%lo(g_MenuDialogRetryMission)
/*  f10e040:	8fa6001c */ 	lw	$a2,0x1c($sp)
.L0f10e044:
/*  f10e044:	a0c0000a */ 	sb	$zero,0xa($a2)
.L0f10e048:
/*  f10e048:	a0c00003 */ 	sb	$zero,0x3($a2)
/*  f10e04c:	a0c00002 */ 	sb	$zero,0x2($a2)
.L0f10e050:
/*  f10e050:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f10e054:
/*  f10e054:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f10e058:	00001025 */ 	or	$v0,$zero,$zero
/*  f10e05c:	03e00008 */ 	jr	$ra
/*  f10e060:	00000000 */ 	nop
);

struct menuitem g_MenuItemsSoloEndscreenNarrow[] = {
	{ MENUITEMTYPE_LABEL,       0, 0x00000210, L_OPTIONS(278), 0x00000000, NULL }, // "Mission Status:"
	{ MENUITEMTYPE_LABEL,       0, 0x00000020, (u32)&soloMenuTextMissionStatus, 0x00000000, NULL },
	{ MENUITEMTYPE_LABEL,       0, 0x00000210, L_OPTIONS(279), 0x00000000, NULL }, // "Agent Status:"
	{ MENUITEMTYPE_LABEL,       0, 0x00000020, (u32)&soloMenuTextAgentStatus, 0x00000000, NULL },
	{ MENUITEMTYPE_LABEL,       0, 0x00000210, L_OPTIONS(280), 0x00000000, NULL }, // "Mission Time:"
	{ MENUITEMTYPE_LABEL,       0, 0x00000020, (u32)&soloMenuTextMissionTime, 0x00000000, NULL },
	{ MENUITEMTYPE_LABEL,       0, 0x00000210, L_MPWEAPONS(129), 0x00000000, NULL }, // "Difficulty"
	{ MENUITEMTYPE_LABEL,       0, 0x00000020, (u32)soloMenuTextDifficulty, 0x00000000, NULL },
	{ MENUITEMTYPE_SEPARATOR,   0, 0x00000000, 0x00000000, 0x00000000, NULL },
	{ MENUITEMTYPE_LABEL,       0, 0x00000210, L_OPTIONS(281), 0x00000000, NULL }, // "Weapon of Choice:"
	{ MENUITEMTYPE_LABEL,       0, 0x00000020, (u32)&mpMenuTextWeaponOfChoiceName, 0x00000000, NULL },
	{ MENUITEMTYPE_SEPARATOR,   0, 0x00000000, 0x00000000, 0x00000000, NULL },
	{ MENUITEMTYPE_LABEL,       0, 0x00000000, L_OPTIONS(282), (u32)&soloMenuTextNumKills, NULL }, // "Kills:"
	{ MENUITEMTYPE_LABEL,       0, 0x00000000, L_OPTIONS(283), (u32)&soloMenuTextAccuracy, NULL }, // "Accuracy:"
	{ MENUITEMTYPE_SEPARATOR,   0, 0x00000000, 0x00000000, 0x00000000, NULL },
	{ MENUITEMTYPE_LABEL,       0, 0x00000000, L_OPTIONS(284), (u32)&soloMenuTextNumShots, NULL }, // "Shot Total:"
	{ MENUITEMTYPE_LABEL,       0, 0x00000200, L_OPTIONS(285), (u32)&soloMenuTextNumHeadShots, NULL }, // "Head Shots:"
	{ MENUITEMTYPE_LABEL,       0, 0x00000200, L_OPTIONS(286), (u32)&soloMenuTextNumBodyShots, NULL }, // "Body Shots:"
	{ MENUITEMTYPE_LABEL,       0, 0x00000200, L_OPTIONS(287), (u32)&soloMenuTextNumLimbShots, NULL }, // "Limb Shots:"
	{ MENUITEMTYPE_LABEL,       0, 0x00000200, L_OPTIONS(288), (u32)&soloMenuTextNumOtherShots, NULL }, // "Others:"
	{ MENUITEMTYPE_SEPARATOR,   0, 0x00000000, 0x00000000, 0x00000000, NULL },
	{ MENUITEMTYPE_SELECTABLE,  0, 0x00000020, L_OPTIONS(289), 0x00000000, NULL }, // "Press START"
	{ MENUITEMTYPE_END,         0, 0x00000000, 0x00000000, 0x00000000, NULL },
};

u32 g_CheatColour = 0xff7f7fff;

struct menuitem g_MenuItemsSoloEndscreenWide[] = {
	{ MENUITEMTYPE_LABEL,       0, 0x00000000, L_OPTIONS(278), (u32)&soloMenuTextMissionStatus, NULL }, // "Mission Status:"
	{ MENUITEMTYPE_LABEL,       0, 0x00000000, L_OPTIONS(279), (u32)&soloMenuTextAgentStatus, NULL }, // "Agent Status:"
	{ MENUITEMTYPE_LABEL,       0, 0x01000000, L_OPTIONS(280), (u32)&soloMenuTextMissionTime, menuhandlerEndscreenCheats }, // "Mission Time:"
	{ MENUITEMTYPE_LABEL,       1, 0x01000000, L_MPWEAPONS(242), (u32)&soloMenuTextTargetTime, menuhandlerEndscreenCheats }, // "Target Time:"
	{ MENUITEMTYPE_LABEL,       0, 0x00000000, L_MPWEAPONS(129), (u32)&soloMenuTextDifficulty, NULL }, // "Difficulty:"
	{ MENUITEMTYPE_SEPARATOR,   2, 0x00000000, 0x00000000, 0x00000000, menuhandlerEndscreenCheats },
	{ MENUITEMTYPE_LABEL,       2, 0x00000000, L_MPWEAPONS(243), 0x00000000, menuhandlerEndscreenCheats }, // "New Cheat Available!:"
	{ MENUITEMTYPE_LABEL,       3, 0x01000020, (u32)&soloMenuTextTimedCheatName, 0x00000000, menuhandlerEndscreenCheats },
	{ MENUITEMTYPE_LABEL,       5, 0x01000020, (u32)&soloMenuTextCompletionCheatName, 0x00000000, menuhandlerEndscreenCheats },
	{ MENUITEMTYPE_SEPARATOR,   0, 0x00000000, 0x00000000, 0x00000000, NULL },
	{ MENUITEMTYPE_LABEL,       0, 0x00000000, L_OPTIONS(281), (u32)&mpMenuTextWeaponOfChoiceName, NULL }, // "Weapon of Choice"
	{ MENUITEMTYPE_LABEL,       0, 0x00000000, L_OPTIONS(282), (u32)&soloMenuTextNumKills, NULL }, // "Kills:"
	{ MENUITEMTYPE_LABEL,       0, 0x00000000, L_OPTIONS(283), (u32)&soloMenuTextAccuracy, NULL }, // "Accuracy:"
	{ MENUITEMTYPE_SEPARATOR,   0, 0x00000000, 0x00000000, 0x00000000, NULL },
	{ MENUITEMTYPE_LABEL,       0, 0x00000000, L_OPTIONS(284), (u32)&soloMenuTextNumShots, NULL }, // "Shot Total:"
	{ MENUITEMTYPE_LABEL,       0, 0x00000000, L_OPTIONS(285), (u32)&soloMenuTextNumHeadShots, NULL }, // "Head Shots:"
	{ MENUITEMTYPE_LABEL,       0, 0x00000000, L_OPTIONS(286), (u32)&soloMenuTextNumBodyShots, NULL }, // "Body Shots:"
	{ MENUITEMTYPE_LABEL,       6, 0x00000000, L_OPTIONS(287), (u32)&soloMenuTextNumLimbShots, menuhandlerEndscreenCheats }, // "Limb Shots:"
	{ MENUITEMTYPE_LABEL,       4, 0x00000000, L_OPTIONS(288), (u32)&soloMenuTextNumOtherShots, menuhandlerEndscreenCheats }, // "Others:"
	{ MENUITEMTYPE_SEPARATOR,   0, 0x00000000, 0x00000000, 0x00000000, NULL },
	{ MENUITEMTYPE_SELECTABLE,  0, 0x00000020, L_OPTIONS(289), 0x00000000, NULL }, // "Press START"
	{ MENUITEMTYPE_END,         0, 0x00000000, 0x00000000, 0x00000000, NULL },
};

/**
 * This function is re-used for several values on the endscreen.
 * item->param is used to determine which value it is. Values are:
 *
 * 0 = mission time
 * 1 = target time
 * 2 = separator and new cheat available
 * 3 = completion cheat name
 * 4 = others (shots)
 * 5 = timed cheat name
 * 6 = limb shots
 */
s32 menuhandlerEndscreenCheats(u32 operation, struct menuitem *item, u32 *values)
{
	if (operation == MENUOP_GETCOLOUR
			&& ((g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0x200) || item->param == 5)) {
		// Timed cheat just got unlocked, and this item is the timed cheat name
		u32 weight = func0f006b08(40) * 255;

		func0000db30("ctcol", &g_CheatColour);

		if (item->param == 0
				&& cheatGetTime(g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0xff) == 0) {
			return 0;
		}

		values[1] = colourBlend(values[1], g_CheatColour, weight);

		if (item->param == 3) { // completion cheat name
			values[0] = colourBlend(values[0], g_CheatColour, weight);
		}

		if (item->param == 5) { // timed cheat name
			values[0] = colourBlend(values[0], g_CheatColour, weight);
		}
	}

	if (operation == MENUOP_CHECKHIDDEN) {
		if (item->param == 1) { // target time
			u32 info = g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo;

			if (info & 0x800) { // completion cheat just got unlocked
				return true;
			}

			// (has timed cheat)
			// and (timed cheat just got unlocked or timed cheat already unlocked) == 0
			// and cheat has a target time configured
			if ((info & 0x100) && (info & 0x600) == 0 && cheatGetTime(info & 0xff) > 0) {
				return false;
			}

			return true;
		} else if (item->param == 2 && (g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0xa00) == 0) {
			// new cheat available
			return true;
		} else if (item->param == 3 && (g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0x200) == 0) {
			// completion cheat name
			return true;
		} else if (item->param == 4 && (g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0xa00)) {
			// others (shots)
			return true;
		} else if (item->param == 6 && (g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0xa00) == 0xa00) {
			// limb shots
			return true;
		} else if (item->param == 5 && (g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0x800) == 0) {
			// timed cheat name
			return true;
		}
	}

	return false;
}

char *soloMenuTextTimedCheatName(struct menuitem *item)
{
	if (g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0x00000300) {
		return cheatGetName(g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0xff);
	}

	return NULL;
}

char *soloMenuTextCompletionCheatName(struct menuitem *item)
{
	if (g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0x00000800) {
		return cheatGetName((g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo >> 16) & 0xff);
	}

	return NULL;
}

GLOBAL_ASM(
glabel soloMenuTextTargetTime
/*  f10e4d8:	3c0e8007 */ 	lui	$t6,%hi(g_MpPlayerNum)
/*  f10e4dc:	8dce1448 */ 	lw	$t6,%lo(g_MpPlayerNum)($t6)
/*  f10e4e0:	3c02800a */ 	lui	$v0,%hi(g_Menus+0xe20)
/*  f10e4e4:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f10e4e8:	000e78c0 */ 	sll	$t7,$t6,0x3
/*  f10e4ec:	01ee7823 */ 	subu	$t7,$t7,$t6
/*  f10e4f0:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f10e4f4:	01ee7821 */ 	addu	$t7,$t7,$t6
/*  f10e4f8:	000f78c0 */ 	sll	$t7,$t7,0x3
/*  f10e4fc:	01ee7823 */ 	subu	$t7,$t7,$t6
/*  f10e500:	000f7900 */ 	sll	$t7,$t7,0x4
/*  f10e504:	004f1021 */ 	addu	$v0,$v0,$t7
/*  f10e508:	8c42ee20 */ 	lw	$v0,%lo(g_Menus+0xe20)($v0)
/*  f10e50c:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f10e510:	afa40018 */ 	sw	$a0,0x18($sp)
/*  f10e514:	30580100 */ 	andi	$t8,$v0,0x100
/*  f10e518:	17000003 */ 	bnez	$t8,.L0f10e528
/*  f10e51c:	00000000 */ 	nop
/*  f10e520:	10000015 */ 	b	.L0f10e578
/*  f10e524:	00001025 */ 	or	$v0,$zero,$zero
.L0f10e528:
/*  f10e528:	0fc41fd9 */ 	jal	cheatGetTime
/*  f10e52c:	304400ff */ 	andi	$a0,$v0,0xff
/*  f10e530:	14400003 */ 	bnez	$v0,.L0f10e540
/*  f10e534:	00403825 */ 	or	$a3,$v0,$zero
/*  f10e538:	1000000f */ 	b	.L0f10e578
/*  f10e53c:	00001025 */ 	or	$v0,$zero,$zero
.L0f10e540:
/*  f10e540:	00072900 */ 	sll	$a1,$a3,0x4
/*  f10e544:	00a72823 */ 	subu	$a1,$a1,$a3
/*  f10e548:	3c048007 */ 	lui	$a0,%hi(g_StringPointer)
/*  f10e54c:	8c841440 */ 	lw	$a0,%lo(g_StringPointer)($a0)
/*  f10e550:	00052880 */ 	sll	$a1,$a1,0x2
/*  f10e554:	0fc355f8 */ 	jal	formatTime
/*  f10e558:	24060003 */ 	addiu	$a2,$zero,0x3
/*  f10e55c:	3c048007 */ 	lui	$a0,%hi(g_StringPointer)
/*  f10e560:	3c057f1b */ 	lui	$a1,%hi(var7f1b38bc)
/*  f10e564:	24a538bc */ 	addiu	$a1,$a1,%lo(var7f1b38bc)
/*  f10e568:	0c004c89 */ 	jal	strcat
/*  f10e56c:	8c841440 */ 	lw	$a0,%lo(g_StringPointer)($a0)
/*  f10e570:	3c028007 */ 	lui	$v0,%hi(g_StringPointer)
/*  f10e574:	8c421440 */ 	lw	$v0,%lo(g_StringPointer)($v0)
.L0f10e578:
/*  f10e578:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f10e57c:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f10e580:	03e00008 */ 	jr	$ra
/*  f10e584:	00000000 */ 	nop
);

const char var7f1b38bc[] = "\n";

// regalloc
//char *soloMenuTextTargetTime(struct menuitem *item)
//{
//	s32 time;
//
//	if ((g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0x00000100) == 0) {
//		return NULL;
//	}
//
//	time = cheatGetTime(g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0xff);
//
//	if (!time) {
//		return NULL;
//	}
//
//	formatTime(g_StringPointer, time * 60, 3);
//	strcat(g_StringPointer, "\n");
//	return g_StringPointer;
//}

void endscreenSetCoopCompleted(void)
{
	if (g_CheatsActiveBank0 == 0 && g_CheatsActiveBank1 == 0) {
		if (g_SoloSaveFile.coopcompletions[g_MissionConfig.difficulty] & (1 << g_MissionConfig.stageindex)) {
			g_Menus[g_MpPlayerNum].data.endscreen.isfirstcompletion = true;
		}

		g_SoloSaveFile.coopcompletions[g_MissionConfig.difficulty] |= (1 << g_MissionConfig.stageindex);
	}
}

struct menudialog g_MenuDialogSoloEndscreenCompleted = {
	MENUDIALOGTYPE_SUCCESS,
	(u32)&menuTitleStageCompleted,
	g_MenuItemsSoloEndscreenWide,
	menudialogSolo2PEndscreenCompleted,
	0x00000048,
	&g_MenuDialogObjectivesCompletedWide,
};

struct menudialog g_MenuDialogSoloEndscreenFailed = {
	MENUDIALOGTYPE_DANGER,
	(u32)&menuTitleStageFailed,
	g_MenuItemsSoloEndscreenWide,
	menudialogSolo2PEndscreenFailed,
	0x00000048,
	&g_MenuDialogObjectivesFailedWide,
};

GLOBAL_ASM(
glabel endscreenPrepare
/*  f10e620:	3c0e8007 */ 	lui	$t6,%hi(g_MpPlayerNum)
/*  f10e624:	8dce1448 */ 	lw	$t6,%lo(g_MpPlayerNum)($t6)
/*  f10e628:	3c07800a */ 	lui	$a3,%hi(g_MissionConfig)
/*  f10e62c:	24e7dfe8 */ 	addiu	$a3,$a3,%lo(g_MissionConfig)
/*  f10e630:	000e78c0 */ 	sll	$t7,$t6,0x3
/*  f10e634:	01ee7823 */ 	subu	$t7,$t7,$t6
/*  f10e638:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f10e63c:	01ee7821 */ 	addu	$t7,$t7,$t6
/*  f10e640:	000f78c0 */ 	sll	$t7,$t7,0x3
/*  f10e644:	90e60002 */ 	lbu	$a2,0x2($a3)
/*  f10e648:	3c18800a */ 	lui	$t8,0x800a
/*  f10e64c:	01ee7823 */ 	subu	$t7,$t7,$t6
/*  f10e650:	000f7900 */ 	sll	$t7,$t7,0x4
/*  f10e654:	2718e000 */ 	addiu	$t8,$t8,-8192
/*  f10e658:	01f84021 */ 	addu	$t0,$t7,$t8
/*  f10e65c:	3c03800a */ 	lui	$v1,%hi(g_MenuData+0x4)
/*  f10e660:	ad060e2c */ 	sw	$a2,0xe2c($t0)
/*  f10e664:	8c6319c4 */ 	lw	$v1,%lo(g_MenuData+0x4)($v1)
/*  f10e668:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f10e66c:	24010001 */ 	addiu	$at,$zero,0x1
/*  f10e670:	10610183 */ 	beq	$v1,$at,.L0f10ec80
/*  f10e674:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f10e678:	3c19800a */ 	lui	$t9,%hi(g_Vars+0x314)
/*  f10e67c:	8f39a2d4 */ 	lw	$t9,%lo(g_Vars+0x314)($t9)
/*  f10e680:	57200180 */ 	bnezl	$t9,.L0f10ec84
/*  f10e684:	24010001 */ 	addiu	$at,$zero,0x1
/*  f10e688:	80ea0003 */ 	lb	$t2,0x3($a3)
/*  f10e68c:	ad000e20 */ 	sw	$zero,0xe20($t0)
/*  f10e690:	ad000e24 */ 	sw	$zero,0xe24($t0)
/*  f10e694:	05400033 */ 	bltz	$t2,.L0f10e764
/*  f10e698:	a100083b */ 	sb	$zero,0x83b($t0)
/*  f10e69c:	8ce20000 */ 	lw	$v0,0x0($a3)
/*  f10e6a0:	00026640 */ 	sll	$t4,$v0,0x19
/*  f10e6a4:	0580002f */ 	bltz	$t4,.L0f10e764
/*  f10e6a8:	00000000 */ 	nop
/*  f10e6ac:	90ed0000 */ 	lbu	$t5,0x0($a3)
/*  f10e6b0:	00c02025 */ 	or	$a0,$a2,$zero
/*  f10e6b4:	31ae0001 */ 	andi	$t6,$t5,0x1
/*  f10e6b8:	15c0002a */ 	bnez	$t6,.L0f10e764
/*  f10e6bc:	00000000 */ 	nop
/*  f10e6c0:	0fc41fae */ 	jal	cheatGetByTimedStageIndex
/*  f10e6c4:	00022e42 */ 	srl	$a1,$v0,0x19
/*  f10e6c8:	3c04800a */ 	lui	$a0,%hi(g_MissionConfig+0x2)
/*  f10e6cc:	9084dfea */ 	lbu	$a0,%lo(g_MissionConfig+0x2)($a0)
/*  f10e6d0:	0fc41fc6 */ 	jal	cheatGetByCompletedStageIndex
/*  f10e6d4:	afa20034 */ 	sw	$v0,0x34($sp)
/*  f10e6d8:	8fa30034 */ 	lw	$v1,0x34($sp)
/*  f10e6dc:	3c188007 */ 	lui	$t8,%hi(g_MpPlayerNum)
/*  f10e6e0:	3c098007 */ 	lui	$t1,%hi(g_MpPlayerNum)
/*  f10e6e4:	0460000d */ 	bltz	$v1,.L0f10e71c
/*  f10e6e8:	00000000 */ 	nop
/*  f10e6ec:	8f181448 */ 	lw	$t8,%lo(g_MpPlayerNum)($t8)
/*  f10e6f0:	3c01800a */ 	lui	$at,%hi(g_Menus+0xe20)
/*  f10e6f4:	346f0100 */ 	ori	$t7,$v1,0x100
/*  f10e6f8:	0018c8c0 */ 	sll	$t9,$t8,0x3
/*  f10e6fc:	0338c823 */ 	subu	$t9,$t9,$t8
/*  f10e700:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f10e704:	0338c821 */ 	addu	$t9,$t9,$t8
/*  f10e708:	0019c8c0 */ 	sll	$t9,$t9,0x3
/*  f10e70c:	0338c823 */ 	subu	$t9,$t9,$t8
/*  f10e710:	0019c900 */ 	sll	$t9,$t9,0x4
/*  f10e714:	00390821 */ 	addu	$at,$at,$t9
/*  f10e718:	ac2fee20 */ 	sw	$t7,%lo(g_Menus+0xe20)($at)
.L0f10e71c:
/*  f10e71c:	04400011 */ 	bltz	$v0,.L0f10e764
/*  f10e720:	00000000 */ 	nop
/*  f10e724:	8d291448 */ 	lw	$t1,%lo(g_MpPlayerNum)($t1)
/*  f10e728:	3c0b800a */ 	lui	$t3,0x800a
/*  f10e72c:	256be000 */ 	addiu	$t3,$t3,-8192
/*  f10e730:	000950c0 */ 	sll	$t2,$t1,0x3
/*  f10e734:	01495023 */ 	subu	$t2,$t2,$t1
/*  f10e738:	000a5080 */ 	sll	$t2,$t2,0x2
/*  f10e73c:	01495021 */ 	addu	$t2,$t2,$t1
/*  f10e740:	000a50c0 */ 	sll	$t2,$t2,0x3
/*  f10e744:	01495023 */ 	subu	$t2,$t2,$t1
/*  f10e748:	000a5100 */ 	sll	$t2,$t2,0x4
/*  f10e74c:	014b4021 */ 	addu	$t0,$t2,$t3
/*  f10e750:	8d0c0e20 */ 	lw	$t4,0xe20($t0)
/*  f10e754:	00026c00 */ 	sll	$t5,$v0,0x10
/*  f10e758:	35ae1000 */ 	ori	$t6,$t5,0x1000
/*  f10e75c:	018ec025 */ 	or	$t8,$t4,$t6
/*  f10e760:	ad180e20 */ 	sw	$t8,0xe20($t0)
.L0f10e764:
/*  f10e764:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x284)
/*  f10e768:	8c42a244 */ 	lw	$v0,%lo(g_Vars+0x284)($v0)
/*  f10e76c:	8c4f00d8 */ 	lw	$t7,0xd8($v0)
/*  f10e770:	15e00008 */ 	bnez	$t7,.L0f10e794
/*  f10e774:	00000000 */ 	nop
/*  f10e778:	8c59048c */ 	lw	$t9,0x48c($v0)
/*  f10e77c:	17200005 */ 	bnez	$t9,.L0f10e794
/*  f10e780:	00000000 */ 	nop
/*  f10e784:	0fc256d9 */ 	jal	objectiveIsAllComplete
/*  f10e788:	00000000 */ 	nop
/*  f10e78c:	1440000a */ 	bnez	$v0,.L0f10e7b8
/*  f10e790:	3c048007 */ 	lui	$a0,%hi(g_MenuDialogSoloEndscreenCompleted)
.L0f10e794:
/*  f10e794:	3c048007 */ 	lui	$a0,%hi(g_MenuDialogSoloEndscreenFailed)
/*  f10e798:	24845b3c */ 	addiu	$a0,$a0,%lo(g_MenuDialogSoloEndscreenFailed)
/*  f10e79c:	0fc3e0cc */ 	jal	menuPushRootDialog
/*  f10e7a0:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f10e7a4:	3c02800a */ 	lui	$v0,%hi(g_MissionConfig+0x3)
/*  f10e7a8:	9042dfeb */ 	lbu	$v0,%lo(g_MissionConfig+0x3)($v0)
/*  f10e7ac:	000249c2 */ 	srl	$t1,$v0,0x7
/*  f10e7b0:	1000000f */ 	b	.L0f10e7f0
/*  f10e7b4:	01201025 */ 	or	$v0,$t1,$zero
.L0f10e7b8:
/*  f10e7b8:	24845b24 */ 	addiu	$a0,$a0,%lo(g_MenuDialogSoloEndscreenCompleted)
/*  f10e7bc:	0fc3e0cc */ 	jal	menuPushRootDialog
/*  f10e7c0:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f10e7c4:	3c02800a */ 	lui	$v0,%hi(g_MissionConfig+0x3)
/*  f10e7c8:	9042dfeb */ 	lbu	$v0,%lo(g_MissionConfig+0x3)($v0)
/*  f10e7cc:	000251c2 */ 	srl	$t2,$v0,0x7
/*  f10e7d0:	11400007 */ 	beqz	$t2,.L0f10e7f0
/*  f10e7d4:	01401025 */ 	or	$v0,$t2,$zero
/*  f10e7d8:	0fc43962 */ 	jal	endscreenSetCoopCompleted
/*  f10e7dc:	00000000 */ 	nop
/*  f10e7e0:	3c02800a */ 	lui	$v0,%hi(g_MissionConfig+0x3)
/*  f10e7e4:	9042dfeb */ 	lbu	$v0,%lo(g_MissionConfig+0x3)($v0)
/*  f10e7e8:	000259c2 */ 	srl	$t3,$v0,0x7
/*  f10e7ec:	01601025 */ 	or	$v0,$t3,$zero
.L0f10e7f0:
/*  f10e7f0:	1440011c */ 	bnez	$v0,.L0f10ec64
/*  f10e7f4:	3c0d800a */ 	lui	$t5,%hi(g_MissionConfig)
/*  f10e7f8:	8daddfe8 */ 	lw	$t5,%lo(g_MissionConfig)($t5)
/*  f10e7fc:	3c188007 */ 	lui	$t8,%hi(g_MpPlayerNum)
/*  f10e800:	000d7640 */ 	sll	$t6,$t5,0x19
/*  f10e804:	05c00117 */ 	bltz	$t6,.L0f10ec64
/*  f10e808:	00000000 */ 	nop
/*  f10e80c:	8f181448 */ 	lw	$t8,%lo(g_MpPlayerNum)($t8)
/*  f10e810:	3c02800a */ 	lui	$v0,%hi(g_Menus+0xe20)
/*  f10e814:	afa00020 */ 	sw	$zero,0x20($sp)
/*  f10e818:	001878c0 */ 	sll	$t7,$t8,0x3
/*  f10e81c:	01f87823 */ 	subu	$t7,$t7,$t8
/*  f10e820:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f10e824:	01f87821 */ 	addu	$t7,$t7,$t8
/*  f10e828:	000f78c0 */ 	sll	$t7,$t7,0x3
/*  f10e82c:	01f87823 */ 	subu	$t7,$t7,$t8
/*  f10e830:	000f7900 */ 	sll	$t7,$t7,0x4
/*  f10e834:	004f1021 */ 	addu	$v0,$v0,$t7
/*  f10e838:	8c42ee20 */ 	lw	$v0,%lo(g_Menus+0xe20)($v0)
/*  f10e83c:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f10e840:	30590100 */ 	andi	$t9,$v0,0x100
/*  f10e844:	13200014 */ 	beqz	$t9,.L0f10e898
/*  f10e848:	00000000 */ 	nop
/*  f10e84c:	0fc41b50 */ 	jal	cheatIsUnlocked
/*  f10e850:	304400ff */ 	andi	$a0,$v0,0xff
/*  f10e854:	10400010 */ 	beqz	$v0,.L0f10e898
/*  f10e858:	afa20020 */ 	sw	$v0,0x20($sp)
/*  f10e85c:	3c098007 */ 	lui	$t1,%hi(g_MpPlayerNum)
/*  f10e860:	8d291448 */ 	lw	$t1,%lo(g_MpPlayerNum)($t1)
/*  f10e864:	3c0b800a */ 	lui	$t3,0x800a
/*  f10e868:	256be000 */ 	addiu	$t3,$t3,-8192
/*  f10e86c:	000950c0 */ 	sll	$t2,$t1,0x3
/*  f10e870:	01495023 */ 	subu	$t2,$t2,$t1
/*  f10e874:	000a5080 */ 	sll	$t2,$t2,0x2
/*  f10e878:	01495021 */ 	addu	$t2,$t2,$t1
/*  f10e87c:	000a50c0 */ 	sll	$t2,$t2,0x3
/*  f10e880:	01495023 */ 	subu	$t2,$t2,$t1
/*  f10e884:	000a5100 */ 	sll	$t2,$t2,0x4
/*  f10e888:	014b4021 */ 	addu	$t0,$t2,$t3
/*  f10e88c:	8d0d0e20 */ 	lw	$t5,0xe20($t0)
/*  f10e890:	35ac0400 */ 	ori	$t4,$t5,0x400
/*  f10e894:	ad0c0e20 */ 	sw	$t4,0xe20($t0)
.L0f10e898:
/*  f10e898:	3c0e8007 */ 	lui	$t6,%hi(g_MpPlayerNum)
/*  f10e89c:	8dce1448 */ 	lw	$t6,%lo(g_MpPlayerNum)($t6)
/*  f10e8a0:	3c02800a */ 	lui	$v0,%hi(g_Menus+0xe20)
/*  f10e8a4:	000ec0c0 */ 	sll	$t8,$t6,0x3
/*  f10e8a8:	030ec023 */ 	subu	$t8,$t8,$t6
/*  f10e8ac:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f10e8b0:	030ec021 */ 	addu	$t8,$t8,$t6
/*  f10e8b4:	0018c0c0 */ 	sll	$t8,$t8,0x3
/*  f10e8b8:	030ec023 */ 	subu	$t8,$t8,$t6
/*  f10e8bc:	0018c100 */ 	sll	$t8,$t8,0x4
/*  f10e8c0:	00581021 */ 	addu	$v0,$v0,$t8
/*  f10e8c4:	8c42ee20 */ 	lw	$v0,%lo(g_Menus+0xe20)($v0)
/*  f10e8c8:	304f1000 */ 	andi	$t7,$v0,0x1000
/*  f10e8cc:	11e00005 */ 	beqz	$t7,.L0f10e8e4
/*  f10e8d0:	00022402 */ 	srl	$a0,$v0,0x10
/*  f10e8d4:	309900ff */ 	andi	$t9,$a0,0xff
/*  f10e8d8:	0fc41b50 */ 	jal	cheatIsUnlocked
/*  f10e8dc:	03202025 */ 	or	$a0,$t9,$zero
/*  f10e8e0:	afa2001c */ 	sw	$v0,0x1c($sp)
.L0f10e8e4:
/*  f10e8e4:	0fc3089f */ 	jal	getMissionTime
/*  f10e8e8:	00000000 */ 	nop
/*  f10e8ec:	2401003c */ 	addiu	$at,$zero,0x3c
/*  f10e8f0:	0041001a */ 	div	$zero,$v0,$at
/*  f10e8f4:	00001812 */ 	mflo	$v1
/*  f10e8f8:	3c047fff */ 	lui	$a0,0x7fff
/*  f10e8fc:	10600010 */ 	beqz	$v1,.L0f10e940
/*  f10e900:	3484ffff */ 	ori	$a0,$a0,0xffff
/*  f10e904:	0064082b */ 	sltu	$at,$v1,$a0
/*  f10e908:	10200007 */ 	beqz	$at,.L0f10e928
/*  f10e90c:	3c05800a */ 	lui	$a1,%hi(g_SoloSaveFile)
/*  f10e910:	24a52200 */ 	addiu	$a1,$a1,%lo(g_SoloSaveFile)
/*  f10e914:	8ca20010 */ 	lw	$v0,0x10($a1)
/*  f10e918:	00834823 */ 	subu	$t1,$a0,$v1
/*  f10e91c:	0049082b */ 	sltu	$at,$v0,$t1
/*  f10e920:	14200005 */ 	bnez	$at,.L0f10e938
/*  f10e924:	00435021 */ 	addu	$t2,$v0,$v1
.L0f10e928:
/*  f10e928:	3c05800a */ 	lui	$a1,%hi(g_SoloSaveFile)
/*  f10e92c:	24a52200 */ 	addiu	$a1,$a1,%lo(g_SoloSaveFile)
/*  f10e930:	10000003 */ 	b	.L0f10e940
/*  f10e934:	aca40010 */ 	sw	$a0,0x10($a1)
.L0f10e938:
/*  f10e938:	3c01800a */ 	lui	$at,%hi(g_SoloSaveFile+0x10)
/*  f10e93c:	ac2a2210 */ 	sw	$t2,%lo(g_SoloSaveFile+0x10)($at)
.L0f10e940:
/*  f10e940:	3c03800a */ 	lui	$v1,%hi(g_MissionConfig)
/*  f10e944:	2463dfe8 */ 	addiu	$v1,$v1,%lo(g_MissionConfig)
/*  f10e948:	3c05800a */ 	lui	$a1,%hi(g_SoloSaveFile)
/*  f10e94c:	8c6d0000 */ 	lw	$t5,0x0($v1)
/*  f10e950:	24a52200 */ 	addiu	$a1,$a1,%lo(g_SoloSaveFile)
/*  f10e954:	90af000b */ 	lbu	$t7,0xb($a1)
/*  f10e958:	906b0002 */ 	lbu	$t3,0x2($v1)
/*  f10e95c:	000d7642 */ 	srl	$t6,$t5,0x19
/*  f10e960:	31d80007 */ 	andi	$t8,$t6,0x7
/*  f10e964:	31f9fff8 */ 	andi	$t9,$t7,0xfff8
/*  f10e968:	03194825 */ 	or	$t1,$t8,$t9
/*  f10e96c:	a0a9000b */ 	sb	$t1,0xb($a1)
/*  f10e970:	3c0a800a */ 	lui	$t2,%hi(g_CheatsActiveBank0)
/*  f10e974:	a0ab000c */ 	sb	$t3,0xc($a1)
/*  f10e978:	8d4a21d0 */ 	lw	$t2,%lo(g_CheatsActiveBank0)($t2)
/*  f10e97c:	3c0b800a */ 	lui	$t3,%hi(g_CheatsActiveBank1)
/*  f10e980:	154000b8 */ 	bnez	$t2,.L0f10ec64
/*  f10e984:	00000000 */ 	nop
/*  f10e988:	8d6b21d4 */ 	lw	$t3,%lo(g_CheatsActiveBank1)($t3)
/*  f10e98c:	156000b5 */ 	bnez	$t3,.L0f10ec64
/*  f10e990:	00000000 */ 	nop
/*  f10e994:	906d0000 */ 	lbu	$t5,0x0($v1)
/*  f10e998:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x284)
/*  f10e99c:	31ac0001 */ 	andi	$t4,$t5,0x1
/*  f10e9a0:	158000b0 */ 	bnez	$t4,.L0f10ec64
/*  f10e9a4:	00000000 */ 	nop
/*  f10e9a8:	8c42a244 */ 	lw	$v0,%lo(g_Vars+0x284)($v0)
/*  f10e9ac:	8c4e00d8 */ 	lw	$t6,0xd8($v0)
/*  f10e9b0:	15c000ac */ 	bnez	$t6,.L0f10ec64
/*  f10e9b4:	00000000 */ 	nop
/*  f10e9b8:	8c4f048c */ 	lw	$t7,0x48c($v0)
/*  f10e9bc:	15e000a9 */ 	bnez	$t7,.L0f10ec64
/*  f10e9c0:	00000000 */ 	nop
/*  f10e9c4:	0fc256d9 */ 	jal	objectiveIsAllComplete
/*  f10e9c8:	00000000 */ 	nop
/*  f10e9cc:	104000a5 */ 	beqz	$v0,.L0f10ec64
/*  f10e9d0:	00000000 */ 	nop
/*  f10e9d4:	0fc3089f */ 	jal	getMissionTime
/*  f10e9d8:	00000000 */ 	nop
/*  f10e9dc:	2401003c */ 	addiu	$at,$zero,0x3c
/*  f10e9e0:	0041001a */ 	div	$zero,$v0,$at
/*  f10e9e4:	00002012 */ 	mflo	$a0
/*  f10e9e8:	3c05800a */ 	lui	$a1,%hi(g_SoloSaveFile)
/*  f10e9ec:	2c811000 */ 	sltiu	$at,$a0,0x1000
/*  f10e9f0:	14200002 */ 	bnez	$at,.L0f10e9fc
/*  f10e9f4:	24a52200 */ 	addiu	$a1,$a1,%lo(g_SoloSaveFile)
/*  f10e9f8:	24040fff */ 	addiu	$a0,$zero,0xfff
.L0f10e9fc:
/*  f10e9fc:	14800002 */ 	bnez	$a0,.L0f10ea08
/*  f10ea00:	3c06800a */ 	lui	$a2,%hi(g_MissionConfig+0x2)
/*  f10ea04:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f10ea08:
/*  f10ea08:	90c6dfea */ 	lbu	$a2,%lo(g_MissionConfig+0x2)($a2)
/*  f10ea0c:	3c09800a */ 	lui	$t1,%hi(g_MissionConfig)
/*  f10ea10:	8d29dfe8 */ 	lw	$t1,%lo(g_MissionConfig)($t1)
/*  f10ea14:	0006c080 */ 	sll	$t8,$a2,0x2
/*  f10ea18:	0306c023 */ 	subu	$t8,$t8,$a2
/*  f10ea1c:	0018c040 */ 	sll	$t8,$t8,0x1
/*  f10ea20:	00095642 */ 	srl	$t2,$t1,0x19
/*  f10ea24:	000a5840 */ 	sll	$t3,$t2,0x1
/*  f10ea28:	00b8c821 */ 	addu	$t9,$a1,$t8
/*  f10ea2c:	032b3821 */ 	addu	$a3,$t9,$t3
/*  f10ea30:	94e30020 */ 	lhu	$v1,0x20($a3)
/*  f10ea34:	3c0c8007 */ 	lui	$t4,%hi(g_MpPlayerNum)
/*  f10ea38:	3c09800a */ 	lui	$t1,0x800a
/*  f10ea3c:	1460000d */ 	bnez	$v1,.L0f10ea74
/*  f10ea40:	3c0f8007 */ 	lui	$t7,%hi(g_MpPlayerNum)
/*  f10ea44:	8d8c1448 */ 	lw	$t4,%lo(g_MpPlayerNum)($t4)
/*  f10ea48:	3c01800a */ 	lui	$at,%hi(g_Menus+0xe24)
/*  f10ea4c:	240d0001 */ 	addiu	$t5,$zero,0x1
/*  f10ea50:	000c70c0 */ 	sll	$t6,$t4,0x3
/*  f10ea54:	01cc7023 */ 	subu	$t6,$t6,$t4
/*  f10ea58:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f10ea5c:	01cc7021 */ 	addu	$t6,$t6,$t4
/*  f10ea60:	000e70c0 */ 	sll	$t6,$t6,0x3
/*  f10ea64:	01cc7023 */ 	subu	$t6,$t6,$t4
/*  f10ea68:	000e7100 */ 	sll	$t6,$t6,0x4
/*  f10ea6c:	002e0821 */ 	addu	$at,$at,$t6
/*  f10ea70:	ac2dee24 */ 	sw	$t5,%lo(g_Menus+0xe24)($at)
.L0f10ea74:
/*  f10ea74:	8def1448 */ 	lw	$t7,%lo(g_MpPlayerNum)($t7)
/*  f10ea78:	2529e000 */ 	addiu	$t1,$t1,-8192
/*  f10ea7c:	0083082b */ 	sltu	$at,$a0,$v1
/*  f10ea80:	000fc0c0 */ 	sll	$t8,$t7,0x3
/*  f10ea84:	030fc023 */ 	subu	$t8,$t8,$t7
/*  f10ea88:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f10ea8c:	030fc021 */ 	addu	$t8,$t8,$t7
/*  f10ea90:	0018c0c0 */ 	sll	$t8,$t8,0x3
/*  f10ea94:	030fc023 */ 	subu	$t8,$t8,$t7
/*  f10ea98:	0018c100 */ 	sll	$t8,$t8,0x4
/*  f10ea9c:	14200003 */ 	bnez	$at,.L0f10eaac
/*  f10eaa0:	03094021 */ 	addu	$t0,$t8,$t1
/*  f10eaa4:	54600003 */ 	bnezl	$v1,.L0f10eab4
/*  f10eaa8:	28c10011 */ 	slti	$at,$a2,0x11
.L0f10eaac:
/*  f10eaac:	a4e40020 */ 	sh	$a0,0x20($a3)
/*  f10eab0:	28c10011 */ 	slti	$at,$a2,0x11
.L0f10eab4:
/*  f10eab4:	1020001d */ 	beqz	$at,.L0f10eb2c
/*  f10eab8:	24ca0001 */ 	addiu	$t2,$a2,0x1
/*  f10eabc:	315900ff */ 	andi	$t9,$t2,0xff
/*  f10eac0:	2b210011 */ 	slti	$at,$t9,0x11
/*  f10eac4:	14200003 */ 	bnez	$at,.L0f10ead4
/*  f10eac8:	a0aa000c */ 	sb	$t2,0xc($a1)
/*  f10eacc:	240b0010 */ 	addiu	$t3,$zero,0x10
/*  f10ead0:	a0ab000c */ 	sb	$t3,0xc($a1)
.L0f10ead4:
/*  f10ead4:	00003025 */ 	or	$a2,$zero,$zero
/*  f10ead8:	24070006 */ 	addiu	$a3,$zero,0x6
/*  f10eadc:	24040011 */ 	addiu	$a0,$zero,0x11
.L0f10eae0:
/*  f10eae0:	3c0c800a */ 	lui	$t4,%hi(g_SoloSaveFile)
/*  f10eae4:	258c2200 */ 	addiu	$t4,$t4,%lo(g_SoloSaveFile)
/*  f10eae8:	00cc1821 */ 	addu	$v1,$a2,$t4
/*  f10eaec:	00001025 */ 	or	$v0,$zero,$zero
.L0f10eaf0:
/*  f10eaf0:	946d0020 */ 	lhu	$t5,0x20($v1)
/*  f10eaf4:	51a00008 */ 	beqzl	$t5,.L0f10eb18
/*  f10eaf8:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f10eafc:	90aa000b */ 	lbu	$t2,0xb($a1)
/*  f10eb00:	244f0001 */ 	addiu	$t7,$v0,0x1
/*  f10eb04:	000f48c0 */ 	sll	$t1,$t7,0x3
/*  f10eb08:	3159ff07 */ 	andi	$t9,$t2,0xff07
/*  f10eb0c:	01395825 */ 	or	$t3,$t1,$t9
/*  f10eb10:	a0ab000b */ 	sb	$t3,0xb($a1)
/*  f10eb14:	24420001 */ 	addiu	$v0,$v0,0x1
.L0f10eb18:
/*  f10eb18:	1444fff5 */ 	bne	$v0,$a0,.L0f10eaf0
/*  f10eb1c:	24630006 */ 	addiu	$v1,$v1,0x6
/*  f10eb20:	24c60002 */ 	addiu	$a2,$a2,0x2
/*  f10eb24:	14c7ffee */ 	bne	$a2,$a3,.L0f10eae0
/*  f10eb28:	00000000 */ 	nop
.L0f10eb2c:
/*  f10eb2c:	8d020e20 */ 	lw	$v0,0xe20($t0)
/*  f10eb30:	304c0100 */ 	andi	$t4,$v0,0x100
/*  f10eb34:	11800016 */ 	beqz	$t4,.L0f10eb90
/*  f10eb38:	00000000 */ 	nop
/*  f10eb3c:	0fc41b50 */ 	jal	cheatIsUnlocked
/*  f10eb40:	304400ff */ 	andi	$a0,$v0,0xff
/*  f10eb44:	8fad0020 */ 	lw	$t5,0x20($sp)
/*  f10eb48:	15a00011 */ 	bnez	$t5,.L0f10eb90
/*  f10eb4c:	00000000 */ 	nop
/*  f10eb50:	1040000f */ 	beqz	$v0,.L0f10eb90
/*  f10eb54:	3c0e8007 */ 	lui	$t6,%hi(g_MpPlayerNum)
/*  f10eb58:	8dce1448 */ 	lw	$t6,%lo(g_MpPlayerNum)($t6)
/*  f10eb5c:	3c18800a */ 	lui	$t8,0x800a
/*  f10eb60:	2718e000 */ 	addiu	$t8,$t8,-8192
/*  f10eb64:	000e78c0 */ 	sll	$t7,$t6,0x3
/*  f10eb68:	01ee7823 */ 	subu	$t7,$t7,$t6
/*  f10eb6c:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f10eb70:	01ee7821 */ 	addu	$t7,$t7,$t6
/*  f10eb74:	000f78c0 */ 	sll	$t7,$t7,0x3
/*  f10eb78:	01ee7823 */ 	subu	$t7,$t7,$t6
/*  f10eb7c:	000f7900 */ 	sll	$t7,$t7,0x4
/*  f10eb80:	01f84021 */ 	addu	$t0,$t7,$t8
/*  f10eb84:	8d0a0e20 */ 	lw	$t2,0xe20($t0)
/*  f10eb88:	35490200 */ 	ori	$t1,$t2,0x200
/*  f10eb8c:	ad090e20 */ 	sw	$t1,0xe20($t0)
.L0f10eb90:
/*  f10eb90:	3c198007 */ 	lui	$t9,%hi(g_MpPlayerNum)
/*  f10eb94:	8f391448 */ 	lw	$t9,%lo(g_MpPlayerNum)($t9)
/*  f10eb98:	3c02800a */ 	lui	$v0,%hi(g_Menus+0xe20)
/*  f10eb9c:	001958c0 */ 	sll	$t3,$t9,0x3
/*  f10eba0:	01795823 */ 	subu	$t3,$t3,$t9
/*  f10eba4:	000b5880 */ 	sll	$t3,$t3,0x2
/*  f10eba8:	01795821 */ 	addu	$t3,$t3,$t9
/*  f10ebac:	000b58c0 */ 	sll	$t3,$t3,0x3
/*  f10ebb0:	01795823 */ 	subu	$t3,$t3,$t9
/*  f10ebb4:	000b5900 */ 	sll	$t3,$t3,0x4
/*  f10ebb8:	004b1021 */ 	addu	$v0,$v0,$t3
/*  f10ebbc:	8c42ee20 */ 	lw	$v0,%lo(g_Menus+0xe20)($v0)
/*  f10ebc0:	304c1000 */ 	andi	$t4,$v0,0x1000
/*  f10ebc4:	11800017 */ 	beqz	$t4,.L0f10ec24
/*  f10ebc8:	00022402 */ 	srl	$a0,$v0,0x10
/*  f10ebcc:	308d00ff */ 	andi	$t5,$a0,0xff
/*  f10ebd0:	0fc41b50 */ 	jal	cheatIsUnlocked
/*  f10ebd4:	01a02025 */ 	or	$a0,$t5,$zero
/*  f10ebd8:	8fae001c */ 	lw	$t6,0x1c($sp)
/*  f10ebdc:	15c00011 */ 	bnez	$t6,.L0f10ec24
/*  f10ebe0:	00000000 */ 	nop
/*  f10ebe4:	1040000f */ 	beqz	$v0,.L0f10ec24
/*  f10ebe8:	3c0f8007 */ 	lui	$t7,%hi(g_MpPlayerNum)
/*  f10ebec:	8def1448 */ 	lw	$t7,%lo(g_MpPlayerNum)($t7)
/*  f10ebf0:	3c0a800a */ 	lui	$t2,0x800a
/*  f10ebf4:	254ae000 */ 	addiu	$t2,$t2,-8192
/*  f10ebf8:	000fc0c0 */ 	sll	$t8,$t7,0x3
/*  f10ebfc:	030fc023 */ 	subu	$t8,$t8,$t7
/*  f10ec00:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f10ec04:	030fc021 */ 	addu	$t8,$t8,$t7
/*  f10ec08:	0018c0c0 */ 	sll	$t8,$t8,0x3
/*  f10ec0c:	030fc023 */ 	subu	$t8,$t8,$t7
/*  f10ec10:	0018c100 */ 	sll	$t8,$t8,0x4
/*  f10ec14:	030a4021 */ 	addu	$t0,$t8,$t2
/*  f10ec18:	8d090e20 */ 	lw	$t1,0xe20($t0)
/*  f10ec1c:	35390800 */ 	ori	$t9,$t1,0x800
/*  f10ec20:	ad190e20 */ 	sw	$t9,0xe20($t0)
.L0f10ec24:
/*  f10ec24:	0fc66bf7 */ 	jal	func0f19afdc
/*  f10ec28:	00000000 */ 	nop
/*  f10ec2c:	3c0b800a */ 	lui	$t3,%hi(g_MissionConfig+0x1)
/*  f10ec30:	916bdfe9 */ 	lbu	$t3,%lo(g_MissionConfig+0x1)($t3)
/*  f10ec34:	2401002a */ 	addiu	$at,$zero,0x2a
/*  f10ec38:	3c02800a */ 	lui	$v0,%hi(var800a2328+0x3)
/*  f10ec3c:	15610009 */ 	bne	$t3,$at,.L0f10ec64
/*  f10ec40:	2442232b */ 	addiu	$v0,$v0,%lo(var800a2328+0x3)
/*  f10ec44:	904c0000 */ 	lbu	$t4,0x0($v0)
/*  f10ec48:	240d0001 */ 	addiu	$t5,$zero,0x1
/*  f10ec4c:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f10ec50:	15800004 */ 	bnez	$t4,.L0f10ec64
/*  f10ec54:	3c01800a */ 	lui	$at,%hi(g_AltTitle)
/*  f10ec58:	a04d0000 */ 	sb	$t5,0x0($v0)
/*  f10ec5c:	0fc44270 */ 	jal	func0f1109c0
/*  f10ec60:	a02e232c */ 	sb	$t6,%lo(g_AltTitle)($at)
.L0f10ec64:
/*  f10ec64:	3c04800a */ 	lui	$a0,%hi(var800a22c0)
/*  f10ec68:	248422c0 */ 	addiu	$a0,$a0,%lo(var800a22c0)
/*  f10ec6c:	00002825 */ 	or	$a1,$zero,$zero
/*  f10ec70:	0fc42539 */ 	jal	func0f1094e4
/*  f10ec74:	00003025 */ 	or	$a2,$zero,$zero
/*  f10ec78:	3c03800a */ 	lui	$v1,%hi(g_MenuData+0x4)
/*  f10ec7c:	8c6319c4 */ 	lw	$v1,%lo(g_MenuData+0x4)($v1)
.L0f10ec80:
/*  f10ec80:	24010001 */ 	addiu	$at,$zero,0x1
.L0f10ec84:
/*  f10ec84:	54610008 */ 	bnel	$v1,$at,.L0f10eca8
/*  f10ec88:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f10ec8c:	0fc5b350 */ 	jal	soloSetPaused
/*  f10ec90:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f10ec94:	3c18800a */ 	lui	$t8,%hi(g_Vars+0x284)
/*  f10ec98:	8f18a244 */ 	lw	$t8,%lo(g_Vars+0x284)($t8)
/*  f10ec9c:	240f0003 */ 	addiu	$t7,$zero,0x3
/*  f10eca0:	af0f1a24 */ 	sw	$t7,0x1a24($t8)
/*  f10eca4:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f10eca8:
/*  f10eca8:	27bd0038 */ 	addiu	$sp,$sp,0x38
/*  f10ecac:	03e00008 */ 	jr	$ra
/*  f10ecb0:	00000000 */ 	nop
);

// Mismatch because address of var800a2328[3] is calcualted differently
//void endscreenPrepare(void)
//{
//	s32 timedcheatid;
//	s32 complcheatid;
//	s32 d;
//	s32 s;
//	u32 secs;
//	s32 timedalreadyunlocked;
//	s32 complalreadyunlocked;
//	u16 prevbest;
//	bool nowunlocked;
//
//	g_Menus[g_MpPlayerNum].data.endscreen.stageindex = g_MissionConfig.stageindex;
//
//	if (g_MenuData.root != MENUROOT_ENDSCREEN && g_Vars.mplayerisrunning == false) {
//		g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo = 0;
//		g_Menus[g_MpPlayerNum].data.endscreen.isfirstcompletion = false;
//		g_Menus[g_MpPlayerNum].playernum = 0;
//
//		// Set cheat info
//		if (g_MissionConfig.iscoop == false
//				&& g_MissionConfig.isanti == false
//				&& g_MissionConfig.pdmode == false) {
//			timedcheatid = cheatGetByTimedStageIndex(g_MissionConfig.stageindex, g_MissionConfig.difficulty);
//			complcheatid = cheatGetByCompletedStageIndex(g_MissionConfig.stageindex);
//
//			if (timedcheatid >= 0) {
//				g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo = 0x0100 | timedcheatid;
//			}
//
//			if (complcheatid >= 0) {
//				g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo |= 0x1000 | (complcheatid << 16);
//			}
//		}
//
//		// Push the endscreen
//		if (g_Vars.currentplayer->isdead
//				|| g_Vars.currentplayer->aborted
//				|| !objectiveIsAllComplete()) {
//			menuPushRootDialog(&g_MenuDialogSoloEndscreenFailed, MENUROOT_ENDSCREEN);
//		} else {
//			menuPushRootDialog(&g_MenuDialogSoloEndscreenCompleted, MENUROOT_ENDSCREEN);
//
//			if (g_MissionConfig.iscoop) {
//				endscreenSetCoopCompleted();
//			}
//		}
//
//		if (g_MissionConfig.iscoop == false && g_MissionConfig.isanti == false) {
//			timedalreadyunlocked = false;
//			complalreadyunlocked = false;
//
//			// If there's a timed cheat for this stage + difficulty
//			if (g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0x100) {
//				timedalreadyunlocked = cheatIsUnlocked(g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0xff);
//
//				if (timedalreadyunlocked) {
//					g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo |= 0x400;
//				}
//			}
//
//			// If there's a completion cheat for this stage (ie. not a special stage)
//			if (g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0x1000) {
//				complalreadyunlocked = cheatIsUnlocked((g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo >> 16) & 0xff);
//			}
//
//			// Update total mission time
//			secs = getMissionTime() / 60;
//
//			if (secs != 0) {
//				if (secs >= S32_MAX || S32_MAX - secs <= g_SoloSaveFile.totaltime) {
//					g_SoloSaveFile.totaltime = S32_MAX;
//				} else {
//					g_SoloSaveFile.totaltime += secs;
//				}
//			}
//
//			g_SoloSaveFile.autostageindex = g_MissionConfig.stageindex;
//			g_SoloSaveFile.autodifficulty = g_MissionConfig.difficulty;
//
//			if (g_CheatsActiveBank0 == 0
//					&& g_CheatsActiveBank1 == 0
//					&& g_MissionConfig.pdmode == false
//					&& g_Vars.currentplayer->isdead == false
//					&& g_Vars.currentplayer->aborted == false
//					&& objectiveIsAllComplete()) {
//				secs = getMissionTime() / 60;
//
//				// The save file allows 12 bits per time, which is up to
//				// 1h 8m 16s. If the timer is higher than this, reduce it.
//				if (secs > 0xfff) {
//					secs = 0xfff;
//				}
//
//				// Zero is used as an indicator that the stage is not completed,
//				// so if the player managed to legitly complete a stage in 0:00
//				// adjust it to 0:01.
//				if (secs == 0) {
//					secs = 1;
//				}
//
//				// Set best time
//				prevbest = g_SoloSaveFile.besttimes[g_MissionConfig.stageindex][g_MissionConfig.difficulty];
//
//				if (prevbest == 0) {
//					g_Menus[g_MpPlayerNum].data.endscreen.isfirstcompletion = true;
//				}
//
//				if (secs < prevbest || prevbest == 0) {
//					g_SoloSaveFile.besttimes[g_MissionConfig.stageindex][g_MissionConfig.difficulty] = secs;
//				}
//
//				// Recalculate thumbnail for file select screen
//				if (g_MissionConfig.stageindex <= SOLOSTAGEINDEX_SKEDARRUINS) {
//					g_SoloSaveFile.autostageindex = g_MissionConfig.stageindex + 1;
//
//					if (g_SoloSaveFile.autostageindex > SOLOSTAGEINDEX_SKEDARRUINS) {
//						g_SoloSaveFile.autostageindex = SOLOSTAGEINDEX_SKEDARRUINS;
//					}
//
//					for (d = 0; d != 3; d++) {
//						for (s = 0; s <= SOLOSTAGEINDEX_SKEDARRUINS; s++) {
//							if (g_SoloSaveFile.besttimes[s][d]) {
//								g_SoloSaveFile.thumbnail = s + 1;
//							}
//						}
//					}
//				}
//
//				if (g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0x100) {
//					nowunlocked = cheatIsUnlocked(g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0xff);
//
//					if (!timedalreadyunlocked && nowunlocked) {
//						g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo |= 0x0200;
//					}
//				}
//
//				if (g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo & 0x1000) {
//					nowunlocked = cheatIsUnlocked((g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo >> 16) & 0xff);
//
//					if (!complalreadyunlocked && nowunlocked) {
//						g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo |= 0x0800;
//					}
//				}
//
//				func0f19afdc();
//
//				if (g_MissionConfig.stagenum == STAGE_SKEDARRUINS && var800a2328[3] == 0) {
//					var800a2328[3] = 1;
//					g_AltTitle = true;
//					func0f1109c0();
//				}
//			}
//		}
//
//		func0f1094e4(&var800a22c0, 0, 0);
//	}
//
//	if (g_MenuData.root == MENUROOT_ENDSCREEN) {
//		soloSetPaused(true);
//		g_Vars.currentplayer->pausemode = PAUSEMODE_3;
//	}
//}

struct menudialog g_MenuDialogSolo2PEndscreenCompletedWide = {
	MENUDIALOGTYPE_SUCCESS,
	(u32)&menuTitleStageCompleted,
	g_MenuItemsSoloEndscreenWide,
	menudialogSolo2PEndscreenCompleted,
	0x00000048,
	&g_MenuDialogObjectivesCompletedWide,
};

struct menudialog g_MenuDialogSolo2PEndscreenFailedWide = {
	MENUDIALOGTYPE_DANGER,
	(u32)&menuTitleStageFailed,
	g_MenuItemsSoloEndscreenWide,
	menudialogSolo2PEndscreenFailed,
	0x00000048,
	&g_MenuDialogObjectivesFailedWide,
};

struct menudialog g_MenuDialogSolo2PEndscreenCompletedNarrow = {
	MENUDIALOGTYPE_SUCCESS,
	L_OPTIONS(276), // "Completed"
	g_MenuItemsSoloEndscreenNarrow,
	menudialogSolo2PEndscreenCompleted,
	0x00000048,
	&g_MenuDialogObjectivesCompletedNarrow,
};

struct menudialog g_MenuDialogSolo2PEndscreenFailedNarrow = {
	MENUDIALOGTYPE_DANGER,
	L_OPTIONS(277), // "Failed"
	g_MenuItemsSoloEndscreenNarrow,
	menudialogSolo2PEndscreenFailed,
	0x00000048,
	&g_MenuDialogObjectivesFailedNarrow,
};

void soloPushCoopModeEndscreen(void)
{
	u32 prevplayernum = g_MpPlayerNum;

	soloSetPaused(true);

	g_MpPlayerNum = g_Vars.currentplayerstats->mpindex;

	g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo = 0;
	g_Menus[g_MpPlayerNum].data.endscreen.isfirstcompletion = false;
	g_Menus[g_MpPlayerNum].data.endscreen.stageindex = g_MissionConfig.stageindex;
	g_Menus[g_MpPlayerNum].playernum = g_Vars.currentplayernum;

	if ((g_Vars.bond->isdead && g_Vars.coop->isdead)
			|| g_Vars.bond->aborted
			|| g_Vars.coop->aborted
			|| !objectiveIsAllComplete()) {
		// Failed or aborted
		if (optionsGetScreenSplit() == SCREENSPLIT_VERTICAL) {
			menuPushRootDialog(&g_MenuDialogSolo2PEndscreenFailedNarrow, MENUROOT_MPENDSCREEN);
		} else {
			menuPushRootDialog(&g_MenuDialogSolo2PEndscreenFailedWide, MENUROOT_MPENDSCREEN);
		}
	} else {
		// Completed
		if (optionsGetScreenSplit() == SCREENSPLIT_VERTICAL) {
			menuPushRootDialog(&g_MenuDialogSolo2PEndscreenCompletedNarrow, MENUROOT_MPENDSCREEN);
		} else {
			menuPushRootDialog(&g_MenuDialogSolo2PEndscreenCompletedWide, MENUROOT_MPENDSCREEN);
		}

		endscreenSetCoopCompleted();
	}

	if (g_Vars.currentplayer == g_Vars.bond) {
		func0f1094e4(&var800a22c0, 0, 0);
	}

	g_MpPlayerNum = prevplayernum;
}

/**
 * This function is misnamed. It pushes the menu after the endscreen
 * (ie. retry, next mission or continue), and it looks like it might be for coop
 * only but I'm not 100% sure.
 *
 * This function is only called from menuTick, which is a bit weird...
 */
void soloPushSoloModeEndscreen(void)
{
	u32 prevplayernum = g_MpPlayerNum;

	g_MpPlayerNum = 0;
	g_Menus[g_MpPlayerNum].playernum = 0;

	if ((g_Vars.bond->isdead && g_Vars.coop->isdead)
			|| g_Vars.bond->aborted
			|| g_Vars.coop->aborted
			|| !objectiveIsAllComplete()) {
		// Failed or aborted
		func0f10d770();
		menuPushRootDialog(&g_MenuDialogRetryMission, MENUROOT_9);
	} else {
		// Completed
		endscreenHandleContinue(1);
	}

	g_MpPlayerNum = prevplayernum;
}

void soloPushAntiModeEndscreen(void)
{
	u32 prevplayernum = g_MpPlayerNum;

	soloSetPaused(true);

	g_MpPlayerNum = g_Vars.currentplayerstats->mpindex;

	g_Menus[g_MpPlayerNum].data.endscreen.cheatinfo = 0;
	g_Menus[g_MpPlayerNum].data.endscreen.isfirstcompletion = false;
	g_Menus[g_MpPlayerNum].data.endscreen.stageindex = g_MissionConfig.stageindex;
	g_Menus[g_MpPlayerNum].playernum = g_Vars.currentplayernum;

	if (g_Vars.currentplayer == g_Vars.bond) {
		if (g_Vars.anti->aborted == 0 &&
				(g_Vars.bond->isdead || g_Vars.bond->aborted || objectiveIsAllComplete() == false)) {
			// Bond - failed or aborted
			if (optionsGetScreenSplit() == SCREENSPLIT_VERTICAL) {
				menuPushRootDialog(&g_MenuDialogSolo2PEndscreenFailedNarrow, MENUROOT_MPENDSCREEN);
			} else {
				menuPushRootDialog(&g_MenuDialogSolo2PEndscreenFailedWide, MENUROOT_MPENDSCREEN);
			}
		} else {
			// Bond - completed
			if (optionsGetScreenSplit() == SCREENSPLIT_VERTICAL) {
				menuPushRootDialog(&g_MenuDialogSolo2PEndscreenCompletedNarrow, MENUROOT_MPENDSCREEN);
			} else {
				menuPushRootDialog(&g_MenuDialogSolo2PEndscreenCompletedWide, MENUROOT_MPENDSCREEN);
			}
		}

		func0f1094e4(&var800a22c0, 0, 0);
	} else {
		if (g_Vars.anti->aborted == 0 &&
				(g_Vars.bond->isdead || g_Vars.bond->aborted || objectiveIsAllComplete() == false)) {
			// Anti - completed
			if (optionsGetScreenSplit() == SCREENSPLIT_VERTICAL) {
				menuPushRootDialog(&g_MenuDialogSolo2PEndscreenCompletedNarrow, MENUROOT_MPENDSCREEN);
			} else {
				menuPushRootDialog(&g_MenuDialogSolo2PEndscreenCompletedWide, MENUROOT_MPENDSCREEN);
			}
		} else {
			// Anti - failed or aborted
			if (optionsGetScreenSplit() == SCREENSPLIT_VERTICAL) {
				menuPushRootDialog(&g_MenuDialogSolo2PEndscreenFailedNarrow, MENUROOT_MPENDSCREEN);
			} else {
				menuPushRootDialog(&g_MenuDialogSolo2PEndscreenFailedWide, MENUROOT_MPENDSCREEN);
			}
		}
	}

	g_MpPlayerNum = prevplayernum;
}

u32 var80075bb4 = 0;
u32 var80075bb8 = 0;
