#ifndef FILE_SELECT_H
#define FILE_SELECT_H

#include <PR/ultratypes.h>
#include <PR/gbi.h>

#include "types.h"

enum MenuLayers {
    MENU_LAYER_NONE,
    MENU_LAYER_MAIN,
    MENU_LAYER_SUBMENU
};

enum MenuEraseButtonHoverStates {
    MENU_ERASE_HOVER_NONE,
    MENU_ERASE_HOVER_YES,
    MENU_ERASE_HOVER_NO
};

enum MainMenuButtonStates {
    MENU_BUTTON_STATE_DEFAULT,
    MENU_BUTTON_STATE_GROWING,
    MENU_BUTTON_STATE_FULLSCREEN,
    MENU_BUTTON_STATE_SHRINKING,
    MENU_BUTTON_STATE_ZOOM_IN_OUT,
    MENU_BUTTON_STATE_ZOOM_IN,
    MENU_BUTTON_STATE_ZOOM_OUT
};

enum MenuButtonTypes {
    MENU_BUTTON_NONE = -1, // no button selected (on main menu screen)

    // Main Menu (SELECT FILE)
    MENU_BUTTON_MAIN_MIN,
    MENU_BUTTON_PLAY_FILE_A = MENU_BUTTON_MAIN_MIN,
    MENU_BUTTON_PLAY_SPEEDRUN_MODE,
    MENU_BUTTON_ERASE,
    MENU_BUTTON_MAIN_MAX,

    // Erase Menu (ERASE FILE)
    MENU_BUTTON_ERASE_MIN = MENU_BUTTON_MAIN_MAX,
    MENU_BUTTON_ERASE_FILE_A = MENU_BUTTON_ERASE_MIN,
    MENU_BUTTON_ERASE_RETURN,
    MENU_BUTTON_ERASE_MAX,

#if MULTILANG
    // Language Menu
    MENU_BUTTON_LANGUAGE_MIN = MENU_BUTTON_ERASE_MAX,
    MENU_BUTTON_LANGUAGE_ENGLISH = MENU_BUTTON_LANGUAGE_MIN,
    MENU_BUTTON_LANGUAGE_FRENCH,
    MENU_BUTTON_LANGUAGE_GERMAN,
    MENU_BUTTON_LANGUAGE_RETURN,

    MENU_BUTTON_OPTION_MAX
#else
    MENU_BUTTON_OPTION_MAX = MENU_BUTTON_ERASE_MAX
#endif
};

enum EraseMenuMessageID {
    ERASE_MSG_MAIN_TEXT,
    ERASE_MSG_PROMPT,
    ERASE_MSG_NOSAVE_EXISTS,
    ERASE_MSG_MARIO_ERASED,
    ERASE_MSG_SAVE_EXISTS
};

enum EraseMenuActionPhase {
    ERASE_PHASE_MAIN,
    ERASE_PHASE_PROMPT,
    ERASE_PHASE_MARIO_ERASED
};

void beh_yellow_background_menu_init(void);
void beh_yellow_background_menu_loop(void);
void bhv_menu_button_init(void);
void bhv_menu_button_loop(void);
void bhv_menu_button_manager_init(void);
void bhv_menu_button_manager_loop(void);
Gfx *geo_file_select_strings_and_menu_cursor(s32 callContext, UNUSED struct GraphNode *node, UNUSED Mat4 mtx);
s32 lvl_init_menu_values_and_cursor_pos(UNUSED s32 arg, UNUSED s32 unused);
s32 lvl_update_obj_and_load_file_selected(UNUSED s32 arg, UNUSED s32 unused);

#endif // FILE_SELECT_H
