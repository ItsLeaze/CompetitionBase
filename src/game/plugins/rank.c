#include "rank.h"

#include "game/print.h"
#include "course_table.h"

#include "cfg.h"

// Hardcoded Rank Definitions
u32 course_idx_to_rank_idx_map[5][2] = { { COURSE_NUM_TO_INDEX(1), 1 },
                                         { COURSE_NUM_TO_INDEX(2), 2 },
                                         { COURSE_NUM_TO_INDEX(3), 3 },
                                         { COURSE_NUM_TO_INDEX(4), 4 },
                                         { COURSE_NUM_TO_INDEX(5), 5 } };

u32 course_idx_to_rank_idx(u32 courseIdx) {
    u32 i;
    for (i = 0; i < sizeof(course_idx_to_rank_idx_map) / sizeof(course_idx_to_rank_idx_map[0]); i++) {
        if (courseIdx == course_idx_to_rank_idx_map[i][0]) {
            return course_idx_to_rank_idx_map[i][1];
        }
    }
    return 0;
}

short rank_times[6][7][4] = {
    // fallback
    { { _40s(0), _40s(0), _40s(0), _40s(0) },
      { _40s(0), _40s(0), _40s(0), _40s(0) },
      { _40s(0), _40s(0), _40s(0), _40s(0) },
      { _40s(0), _40s(0), _40s(0), _40s(0) },
      { _40s(0), _40s(0), _40s(0), _40s(0) },
      { _40s(0), _40s(0), _40s(0), _40s(0) },
      { _40s(0), _40s(0), _40s(0), _40s(0) } },
    // level 1
    { { _10s(0), _11s(0), _15s(0), _30s(0) }, // 10"00
      { _16s(15), _18s(0), _25s(0), _40s(0) }, // 16"50
      { _7s(6), _9s(0), _15s(0), _30s(0) }, // 07"20
      { _16s(9), _18s(0), _25s(0), _40s(0) }, // 16"30
      { _7s(0), _9s(0), _15s(0), _30s(0) }, // 07"00
      { _24s(15), _26s(0), _30s(0), _40s(0) }, // 24"50
      { _38s(0), _40s(2), _50s(0), _80s(0) } }, // 38"00
    // level 2
    { { _13s(0), _15s(0), _20s(0), _30s(0) }, // 13"00
      { _13s(24), _16s(0), _20s(0), _30s(0) }, // 13"60
      { _9s(0), _10s(0), _20s(0), _30s(0) }, // 09"00
      { _9s(18), _11s(0), _20s(0), _30s(0) }, // 09"60
      { _11s(18), _13s(0), _20s(0), _30s(0) }, // 11"60
      { _20s(0), _25s(0), _35s(0), _50s(0) }, // 20"00
      { _40s(2), _40s(5), _50s(0), _80s(0) } }, // 42"00
      // level 3
    { { _9s(12), _10s(0), _15s(0), _30s(0) }, // 09"40
      { _12s(0), _14s(0), _20s(0), _30s(0) }, // 12"00
      { _14s(9), _16s(0), _20s(0), _30s(0) }, // 14"30
      { _14s(27), _16s(0), _20s(0), _30s(0) }, // 14"90
      { _9s(15), _11s(0), _20s(0), _30s(0) }, // 09"50
      { _27s(15), _30s(0), _40s(0), _50s(0) }, // 27"00
      { _40s(1), _40s(5), _60s(0), _80s(0) } }, // 41"00
      // level 4
    { { _11s(12), _13s(0), _20s(0), _30s(0) }, // 11"40
      { _11s(0), _12s(0), _20s(0), _30s(0) }, // 11"00
      { _9s(0), _10s(0), _15s(0), _30s(0) }, // 09"00
      { _8s(0), _9s(0), _15s(0), _30s(0) }, // 08"00
      { _7s(6), _8s(0), _15s(0), _30s(0) }, // 07"10
      { _23s(0), _25s(0), _30s(0), _40s(0) }, // 23"00
      { _40s(1), _40s(5), _60s(0), _80s(0) } }, // 41"00
      // level 5
    { { _8s(24), _10s(0), _15s(0), _30s(0) }, // 08"80
      { _8s(15), _10s(0), _20s(0), _30s(0) }, // 08"50
      { _12s(12), _14s(0), _20s(0), _30s(0) }, // 12"40
      { _12s(3), _14s(0), _20s(0), _30s(0) }, // 12"20
      { _10s(6), _12s(0), _20s(0), _30s(0) }, // 10"20
      { _25s(15), _30s(0), _40s(0), _60s(0) }, // 25"50
      { _37s(0), _40s(0), _50s(0), _80s(0) } } // 37"00
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
