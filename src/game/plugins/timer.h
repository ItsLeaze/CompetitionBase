#pragma once

#include "types.h"

struct Timer {
    s8 running;
    s8 display;
    s8 dirty;
    u16 time;
    u16 real_time;
    s16 collectedStarId; /* ID of the star that has just been collected or -1 otherwise */
};

extern struct Timer timer;

void start_timer(void);
void stop_timer(void);
void show_timer(void);
void hide_timer(void);
void reset_timer(void);
void set_timer_dirty(void);

void Timer_onFrame();
