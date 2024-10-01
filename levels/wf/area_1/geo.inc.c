#include "src/game/envfx_snow.h"

const GeoLayout wf_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 0, -3200, 0, wf_dl__Plane_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1600, 1760, 3200, wf_dl_Border_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1600, 1760, 1600, wf_dl_Border_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1600, 1760, 0, wf_dl_Border_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1600, 1760, -1600, wf_dl_Border_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1120, 2240, 3200, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1120, 2240, 1600, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1120, 2240, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -800, 2560, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -800, 2560, 1600, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1120, 2240, -1600, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -800, 2560, -1600, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1120, 4160, -1600, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2080, 7440, 1120, 90, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3120, 3520, 4000, 90, 0, 0, wf_dl_Cube_009_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 320, 3040, 480, 90, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 640, 3120, 2400, 0, 0, -45, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3760, 3520, 5280, 90, 0, 0, wf_dl_Cube_009_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 4160, 7760, 90, 0, 0, wf_dl_Cube_009_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -480, 2080, 3680, 90, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -800, 5520, 720, 90, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1440, 5520, 1040, 90, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -640, 3040, 480, 90, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -960, 4320, -7120, 90, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4880, 3640, -5520, 90, 0, -40, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2011, 3040, -3530, 90, 0, 40, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1040, 3680, 3920, 90, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3467, 2320, -4972, 90, 0, 5, wf_dl_Cube_022_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4000, 3400, -5920, 0, 27, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1600, 3040, -3040, 90, 0, 40, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1189, 3040, -2550, 90, 0, 40, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1109, 3040, -2070, 90, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1600, 3760, 5200, 0, 110, -40, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2080, 3720, 6080, -180, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2400, 4200, 5360, -180, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2720, 4520, 6080, -180, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2560, 2600, 5760, 90, 0, 0, wf_dl_Cube_009_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3600, 4680, 4880, 90, 0, 0, wf_dl_Cube_009_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1440, 3440, 2400, 0, 0, -45, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2240, 3760, 2400, 0, 0, -45, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2720, 3600, 3280, 90, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3040, 4040, 3920, 90, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 480, 2080, 3680, 90, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3120, 3520, 6560, 90, 0, 0, wf_dl_Cube_009_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1680, 3760, 7200, 90, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1360, 3760, 6800, 90, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2560, 3520, 5280, 90, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -960, 3040, -6960, 90, 0, 0, wf_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1280, 3520, 1600, wf_dl_LongPiece_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1280, 3520, 0, wf_dl_LongPiece_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1280, 3520, -1600, wf_dl_LongPiece_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1280, 5760, -1600, wf_dl_LongPiece_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1280, 7280, 800, 65, 0, 0, wf_dl_LongPiece_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -320, 5040, -800, 70, 0, 0, wf_dl_LongPiece_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 640, 3040, -800, 90, 0, 0, wf_dl_LongPiece_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -960, 3040, -3040, 90, 0, 0, wf_dl_LongPiece_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2789, 3360, -4649, 135, 30, 90, wf_dl_LongPiece_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3833, 3120, -4804, 45, -130, -90, wf_dl_LongPiece_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -960, 3360, -5040, 90, 0, 0, wf_dl_LongPiece_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 2080, 4320, 90, 0, 0, wf_dl_LongPiece_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1280, 2080, 3200, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1280, 2080, 1600, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1280, 2080, 0, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1280, 3360, 0, 0, 0, -180, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1280, 3360, 1600, 0, 0, -180, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 320, 3040, 1600, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 320, 3040, 0, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 4000, 0, -180, 0, 0, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 640, 3680, 0, 0, -180, 90, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -160, 2802, 1228, 65, -180, 0, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1280, 2080, -1600, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1280, 3360, -1600, 0, 0, -180, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 320, 3040, -1600, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 4000, -1600, -180, 0, 0, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 640, 3680, -1600, 0, -180, 90, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -320, 4320, -1600, 0, 0, -90, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1280, 4640, -1600, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1280, 6480, -880, 0, 90, 20, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -960, 3253, -975, 0, -90, -105, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -960, 3040, -2240, -90, 0, -90, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 640, 3040, -2240, 90, 0, 90, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1280, 2880, 2320, 0, -70, -151, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -960, 3360, -6480, 0, 90, 90, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2240, 3440, 2720, 0, 60, -110, wf_dl_LShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -640, 2080, 3200, wf_dl_TShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -640, 2080, 1600, wf_dl_TShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -640, 2080, 0, wf_dl_TShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -320, 2720, 0, wf_dl_TShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -320, 2720, 1600, wf_dl_TShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -960, 4320, 1600, wf_dl_TShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -960, 3040, 0, wf_dl_TShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -640, 4320, 0, 0, 0, 180, wf_dl_TShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -640, 2080, -1600, wf_dl_TShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -320, 2720, -1600, wf_dl_TShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -960, 3040, -1600, wf_dl_TShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -640, 4320, -1600, 0, 0, 180, wf_dl_TShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 960, 4640, -1600, 0, 0, 180, wf_dl_TShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1040, 3760, -480, 0, 70, 20, wf_dl_TShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 640, 2080, 3200, wf_dl_ZShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 640, 2080, 1600, wf_dl_ZShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 640, 2080, 0, wf_dl_ZShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 640, 2400, 0, 0, 0, -90, wf_dl_ZShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 640, 2400, 1600, 0, 0, -90, wf_dl_ZShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 640, 3040, 3200, 0, 0, -90, wf_dl_ZShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -640, 4000, 0, 0, -180, 90, wf_dl_ZShape_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 640, 2080, -1600, wf_dl_ZShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 640, 2400, -1600, 0, 0, -90, wf_dl_ZShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -640, 4000, -1600, 0, -180, 90, wf_dl_ZShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -960, 4960, -1600, 0, 0, -180, wf_dl_ZShape_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -640, 2320, 2080, 0, -90, -160, wf_dl_ZShape_mesh_layer_1),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 1280, 3680, 1600),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 960, 2720, 2240),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 960, 2720, 2240),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wf_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_HAUNTED, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -80, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, wf_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
