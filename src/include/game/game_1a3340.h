#ifndef IN_GAME_GAME_1A3340_H
#define IN_GAME_GAME_1A3340_H
#include <ultra64.h>
#include "types.h"

char *frMenuTextFailReason(struct menuitem *item);
char *frMenuTextDifficultyName(struct menuitem *item);
char *frMenuTextTimeTakenValue(struct menuitem *item);
char *frMenuTextScoreValue(struct menuitem *item);
char *frMenuTextWeaponName(struct menuitem *item);
char *frMenuTextTargetsDestroyedValue(struct menuitem *item);
char *frMenuTextAccuracyValue(struct menuitem *item);
char *frMenuTextGoalScoreLabel(struct menuitem *item);
char *frMenuTextGoalScoreValue(struct menuitem *item);
char *frMenuTextMinAccuracyOrTargetsLabel(struct menuitem *item);
char *frMenuTextMinAccuracyOrTargetsValue(struct menuitem *item);
char *frMenuTextTimeLimitLabel(struct menuitem *item);
char *frMenuTextTimeLimitValue(struct menuitem *item);
char *frMenuTextAmmoLimitLabel(struct menuitem *item);
char *frMenuTextAmmoLimitValue(struct menuitem *item);
char *ciMenuTextBioName(struct menuitem *item);
char *ciMenuTextBioAge(struct menuitem *item);
char *ciMenuTextBioRace(struct menuitem *item);
u32 func0f1a6388(void);
u32 func0f1a64a0(void);
char *dtMenuTextOkOrResume(struct menuitem *item);
char *dtMenuTextCancelOrAbort(struct menuitem *item);
char *dtMenuTextTimeTakenValue(struct menuitem *item);
u32 func0f1a6a04(void);
char *htMenuTextOkOrResume(struct menuitem *item);
char *htMenuTextCancelOrAbort(struct menuitem *item);
char *htMenuTextTimeTakenValue(struct menuitem *item);
u32 func0f1a6c8c(void);
u32 func0f1a6cc4(void);
struct menudialog *ciGetFrWeaponListMenuDialog(void);
void func0f1a7560(void *ptr, u16 fileid, u32 arg2, void *arg3, s32 arg4, bool arg5);
void func0f1a7730(void *ptr);
void *func0f1a7794(u16 fileid, u8 *arg1, s32 arg2, s32 arg3);
void *fileLoad(u16 fileid);
s32 menudialog001a39a8(u32, u32, u32 *);
s32 menudialog001a3af4(u32, u32, u32 *);
s32 menudialog001a5f48(u32, u32, u32 *);
s32 menudialog001a6548(u32, u32, u32 *);
bool menudialogDeviceTrainingResults(u32 operation, struct menudialog *dialog, struct menu *menu);
bool menudialog001a6aa4(u32 operation, struct menudialog *dialog, struct menu *menu);
bool menudialogFiringRangeResults(u32 operation, struct menudialog *dialog, struct menu *menu);
s32 menudialog001a737c(u32, u32, u32 *);
s32 frDetailsOkMenuHandler(u32 operation, struct menuitem *item, s32 *value);
s32 menuhandler001a3448(u32 operation, struct menuitem *item, s32 *value);
s32 menuhandler001a348c(u32, u32, u32 *);
s32 menuhandler001a44c0(u32, u32, u32 *);
s32 menuhandlerFrFailedContinue(u32 operation, struct menuitem *item, s32 *value);
s32 menuhandler001a5dc0(u32, u32, u32 *);
s32 menuhandler001a63e4(u32, u32, u32 *);
s32 menuhandlerDtOkOrResume(u32 operation, struct menuitem *item, s32 *value);
s32 menuhandler001a6514(u32 operation, struct menuitem *item, s32 *value);
s32 menuhandler001a6950(u32, u32, u32 *);
s32 menuhandler001a6a34(u32 operation, struct menuitem *item, s32 *value);
s32 menuhandler001a6a70(u32 operation, struct menuitem *item, s32 *value);
s32 menuhandler001a6d4c(u32, u32, u32 *);
s32 menuhandler001a6ea4(u32, u32, u32 *);
s32 menuhandlerFrDifficulty(u32, u32, u32 *);

#endif
