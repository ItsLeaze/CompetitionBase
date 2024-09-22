#pragma once

#include "types.h"

#define FPS 30
#define _1s(frames) (FPS * 1 + frames)
#define _2s(frames) (FPS * 2 + frames)
#define _3s(frames) (FPS * 3 + frames)
#define _4s(frames) (FPS * 4 + frames)
#define _5s(frames) (FPS * 5 + frames)
#define _6s(frames) (FPS * 6 + frames)
#define _7s(frames) (FPS * 7 + frames)
#define _8s(frames) (FPS * 8 + frames)
#define _9s(frames) (FPS * 9 + frames)
#define _10s(frames) (FPS * 10 + frames)
#define _11s(frames) (FPS * 11 + frames)
#define _12s(frames) (FPS * 12 + frames)
#define _13s(frames) (FPS * 13 + frames)
#define _14s(frames) (FPS * 14 + frames)
#define _15s(frames) (FPS * 15 + frames)
#define _16s(frames) (FPS * 16 + frames)
#define _17s(frames) (FPS * 17 + frames)
#define _18s(frames) (FPS * 18 + frames)
#define _19s(frames) (FPS * 19 + frames)
#define _20s(frames) (FPS * 20 + frames)
#define _21s(frames) (FPS * 21 + frames)
#define _22s(frames) (FPS * 22 + frames)
#define _23s(frames) (FPS * 23 + frames)
#define _24s(frames) (FPS * 24 + frames)
#define _25s(frames) (FPS * 25 + frames)
#define _26s(frames) (FPS * 26 + frames)
#define _27s(frames) (FPS * 27 + frames)
#define _28s(frames) (FPS * 28 + frames)
#define _29s(frames) (FPS * 29 + frames)
#define _30s(frames) (FPS * 30 + frames)
#define _31s(frames) (FPS * 31 + frames)
#define _32s(frames) (FPS * 32 + frames)
#define _33s(frames) (FPS * 33 + frames)
#define _34s(frames) (FPS * 34 + frames)
#define _35s(frames) (FPS * 35 + frames)
#define _36s(frames) (FPS * 36 + frames)
#define _37s(frames) (FPS * 37 + frames)
#define _38s(frames) (FPS * 38 + frames)
#define _39s(frames) (FPS * 39 + frames)
#define _40s(frames) (FPS * 40 + frames)

#define RANK_NONE 0x9F
#define RANK_NONE_2 GLYPH_MULTIPLY

struct RankDisplay {
    char asChar;
    u8 asU8;
};

struct RankDisplay time_to_rank(u16 timeInFrames, s16 courseIdx, s8 starId);
