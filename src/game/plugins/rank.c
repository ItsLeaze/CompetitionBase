#include "rank.h"

#include "game/print.h"
#include "course_table.h"

#include "cfg.h"

// Hardcoded Rank Definitions
u32 course_idx_to_rank_idx_map[2][2] = { { COURSE_NUM_TO_INDEX(1) /*COURSE_BOB*/, 1 },
                                         { COURSE_NUM_TO_INDEX(2) /*COURSE_WF*/, 2 } };

u32 course_idx_to_rank_idx(u32 courseIdx) {
    u32 i;
    for (i = 0; i < sizeof(course_idx_to_rank_idx_map) / sizeof(course_idx_to_rank_idx_map[0]); i++) {
        if (courseIdx == course_idx_to_rank_idx_map[i][0]) {
            return course_idx_to_rank_idx_map[i][1];
        }
    }
    return 0;
}

short rank_times[3][7][4] = {
    // fallback
    { { _40s(0), _40s(0), _40s(0), _40s(0) },
      { _40s(0), _40s(0), _40s(0), _40s(0) },
      { _40s(0), _40s(0), _40s(0), _40s(0) },
      { _40s(0), _40s(0), _40s(0), _40s(0) },
      { _40s(0), _40s(0), _40s(0), _40s(0) },
      { _40s(0), _40s(0), _40s(0), _40s(0) },
      { _40s(0), _40s(0), _40s(0), _40s(0) } },
    // level 1
    { { _7s(6), _8s(0), _10s(20), _12s(0) },
      { _4s(22), _6s(0), _8s(0), _10s(0) },
      { _7s(28), _8s(0), _9s(0), _12s(0) },
      { _14s(27), _16s(0), _20s(0), _25s(0) },
      { _20s(0), _22s(0), _25s(0), _30s(0) },
      { _30s(0), _32s(0), _35s(0), _40s(0) },
      { _25s(0), _28s(0), _30s(0), _35s(0) } },
    // level 2
    { { _1s(0), _10s(0), _20s(0), _30s(0) },
      { _1s(0), _10s(0), _20s(0), _30s(0) },
      { _1s(0), _10s(0), _20s(0), _30s(0) },
      { _1s(0), _10s(0), _20s(0), _30s(0) },
      { _1s(0), _10s(0), _20s(0), _30s(0) },
      { _1s(0), _10s(0), _20s(0), _30s(0) },
      { _1s(0), _10s(0), _20s(0), _30s(0) } }
};

struct RankDisplay time_to_rank(u16 timeInFrames, s16 courseIdx, s8 starId) {
    struct RankDisplay rank;
    short *scores = rank_times[course_idx_to_rank_idx(courseIdx)][starId];
    if (timeInFrames < scores[0]) {
        rank.asChar = 'S';
        rank.asU8 = 0x1C;
    } else if (timeInFrames < scores[1]) {
        rank.asChar = 'A';
        rank.asU8 = 0x0A;
    } else if (timeInFrames < scores[2]) {
        rank.asChar = 'B';
        rank.asU8 = 0x0B;
    } else if (timeInFrames < scores[3]) {
        rank.asChar = 'C';
        rank.asU8 = 0x0C;
    } else {
        rank.asChar = 'D';
        rank.asU8 = 0x0D;
    }
    return rank;
}
