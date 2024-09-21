#include "types.h"

#include "game/level_update.h"
#include "game/area.h"

#include "action.h"
#include "cfg.h"
#include "death.h"
#include "death_floor.h"
#include "level_reset.h"
#include "savestate.h"
#include "shared.h"
#include "soft_reset.h"
#include "status.h"
#include "text_manager.h"
#include "timer.h"
#define PLAY_MODE_NORMAL 0
#define PLAY_MODE_PAUSED 2

void Hacktice_onFrame()
{
    // SoftReset_onFrame();
    HackticeSetStatus(HACKTICE_STATUS_ACTIVE);
    if (PLAY_MODE_NORMAL == sCurrPlayMode && !gInMenu)
    {
        TextManager_addLine("NORMAL", 30);
        Death_onNormal();
        LevelReset_onNormal();
        SaveState_onNormal();
        Action_onNormal();
    }
    Timer_onFrame();
    TextManager_onFrame();
}

void Hacktice_onPause()
{
    SaveState_onPause();
    Config_onPause();
}

uintptr_t Hacktice_start[] = {
    (uintptr_t) Hacktice_onFrame,
    (uintptr_t) Hacktice_onPause,
    (uintptr_t) DeathFloor_checkDeathBarrierHook,
    HACKTICE_CANARY,
    HACKTICE_STATUS_INIT,
    (uintptr_t) &Hacktice_gConfig,
    // some version of hacktice UI assume this is valid vptr
    // on decomp this will be overwritten with an actual value
    0x80026000,
    (uintptr_t) LevelReset_onSpawnObjectsFromInfoHook,
#ifdef BINARY
    (uintptr_t) LevelReset_setObjectRespawnInfoBits,
#else
    (uintptr_t) 0 /*ignored*/,
#endif
    (uintptr_t) 0 /*reserved for future use*/,
};

#ifndef BINARY
bool Hacktice_gEnabled = true;
#endif