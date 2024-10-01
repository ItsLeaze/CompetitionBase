#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"
#include "make_const_nonconst.h"
#include "levels/bbh/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bbh_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bbh_skybox_yay0SegmentRomStart, _bbh_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _spooky_yay0SegmentRomStart, _spooky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group9_yay0SegmentRomStart, _group9_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group9_geoSegmentRomStart, _group9_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xb, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_10), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR, haunted_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP, geo_bbh_0005B0), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM, geo_bbh_0005E0), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF, geo_bbh_000610), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR, geo_bbh_000628), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND, geo_bbh_000640), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB, geo_bbh_000658), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bbh_area_1),
		WARP_NODE(0x0A, LEVEL_BBH, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BBH, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BBH, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLUE_COIN, 1280, 3680, 1600, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 1600, 3680, 1600, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 960, 3680, 1600, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 320, 4000, 1600, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -960, 3200, 1600, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -320, 3360, 1600, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -960, 3520, 1600, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 0, 4320, 1600, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -640, 3680, 1600, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -640, 3040, 1600, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 640, 3840, 1600, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 0, 3840, 1600, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN_SWITCH, 1280, 3520, 1600, 0, 0, 0, 0x00000000, bhvBlueCoinSwitch),
		OBJECT(MODEL_NONE, -320, 5280, -960, -15, 0, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1600, 5360, -1600, 0, 0, 0, (1 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1600, 4000, 0, 0, 0, 0, (1 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1280, 4480, 1600, 0, 0, 0, (1 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1280, 5520, -1600, 0, 0, 0, (1 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1280, 4640, 0, 0, 0, 0, (1 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -400, 3304, -2240, 90, 0, -90, (1 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 0, 4400, 7960, -90, 0, 0, (3 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -2560, 3760, 5480, -90, 0, 0, (3 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3600, 4920, 5080, -90, 0, 0, (3 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1120, 3280, -1880, -90, 0, 0, (3 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 0, 3200, 4720, 0, -180, 0, (10 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_RED_COIN, -640, 2400, 3200, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -160, 3160, 1040, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1080, 4400, -560, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -960, 3520, -1600, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -960, 3280, 80, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 0, 4960, -1600, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1280, 6480, -1600, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1280, 7520, 720, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_STAR, 3760, 4880, 5360, 0, 0, 0, (0 << 24), bhvStar),
		OBJECT(MODEL_STAR, -3120, 3800, 7040, 0, 0, 0, (1 << 24), bhvStar),
		OBJECT(MODEL_STAR, 4880, 3920, -5520, 0, 0, 0, (2 << 24), bhvStar),
		OBJECT(MODEL_STAR, -960, 5240, -6480, 0, 0, 0, (3 << 24), bhvStar),
		OBJECT(MODEL_STAR, -1440, 5840, 1040, 0, 0, 0, (4 << 24), bhvStar),
		OBJECT(MODEL_NONE, 2240, 7680, 1280, 0, 0, 0, (5 << 24), bhvHiddenRedCoinStar),
		TERRAIN(bbh_area_1_collision),
		MACRO_OBJECTS(bbh_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_MIRAGE_SALOON_2),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};