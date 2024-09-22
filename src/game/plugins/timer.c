#include "timer.h"

#include "game/level_update.h"
#include "game/print.h"
#include "game/area.h"
#include "game/save_file.h"
#include "course_table.h"

#include "action.h"
#include "cfg.h"
#include "sm64.h"

struct Timer timer = { .collectedStarId = -1 };

void start_timer(void) {
    timer.running = TRUE;
}

void stop_timer(void) {
    if (!timer.running) {
        return;
    }
    timer.running = FALSE;
    if (!timer.dirty && timer.collectedStarId >= 0) {
        bool isPb = save_file_register_new_time(COURSE_NUM_TO_INDEX(gCurrCourseNum),
                                                timer.collectedStarId, timer.real_time);
        if (isPb) {
            save_file_do_save(gCurrSaveFileNum - 1);
        }
    }
}

void show_timer(void) {
    timer.display = TRUE;
}

void hide_timer(void) {
    timer.display = FALSE;
}

void reset_timer(void) {
    timer.time = 0;
    timer.real_time = 0;
    timer.collectedStarId = -1;
    timer.dirty = FALSE;
}

void set_timer_dirty(void) {
    timer.dirty = TRUE;
}

void increment_timer() {
    if (timer.running) {
        if (sCurrPlayMode == PLAY_MODE_NORMAL && timer.time < 17999) {
            timer.time++;
        }
        if ((sCurrPlayMode == PLAY_MODE_NORMAL || sCurrPlayMode == PLAY_MODE_PAUSED)
            || timer.real_time < 17999) {
            timer.real_time++;
        }
    }
}

void Timer_onFrame() {
    increment_timer();

    if (Config_timerShow()) {
        show_timer();
    } else {
        hide_timer();
    }

    bool grabCondition = gMarioStates->action == ACT_FALL_AFTER_STAR_GRAB;
    bool xcamCondition =
        gMarioStates->action == ACT_STAR_DANCE_WATER || gMarioStates->action == ACT_STAR_DANCE_EXIT;
    bool timerCondition = grabCondition || xcamCondition;

    if (Config_timerStyle() == Config_TimerStyle_GRAB) {
        if (timerCondition) {
            stop_timer();
        }
    }

    if (Config_timerStyle() == Config_TimerStyle_XCAM) {
        if (xcamCondition) {
            stop_timer();
        }
    }

    if (gMarioStates->action == ACT_STAR_DANCE_NO_EXIT && !Config_timerStopOnCoinStar()) {
        start_timer();
    }
}