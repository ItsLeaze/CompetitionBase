#pragma once

#include "types.h"

struct Timer {
    s8 running;
    s8 display;
    u16 time;
    u16 real_time;
    s8 collectedStarId; /* ID of the star that has just been collected or -1 otherwise */
};

extern struct Timer timer;

void start_timer(void);
void stop_timer(void);
void show_timer(void);
void hide_timer(void);
void reset_timer(void);

void Timer_onFrame();
