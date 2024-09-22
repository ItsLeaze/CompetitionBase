#pragma once

#include "bool.h"

void Hacktice_setMode(bool singleStar);
bool Hacktice_isSingleStar();
void Hacktice_onSave();
void Hacktice_onStarCollect(s16 starId);
void Hacktice_onWarp(struct WarpDest sWarpDest);
void Hacktice_onFrame();
void Hacktice_onPause();

extern bool Hacktice_gEnabled;