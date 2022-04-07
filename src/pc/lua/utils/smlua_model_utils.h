#ifndef SMLUA_MODEL_UTILS_H
#define SMLUA_MODEL_UTILS_H

#include "src/game/memory.h"

enum ModelExtendedId {
    E_MODEL_NONE,

    // actors
    E_MODEL_MARIO,
    E_MODEL_SMOKE,
    E_MODEL_SPARKLES,
    E_MODEL_BUBBLE,
    E_MODEL_SMALL_WATER_SPLASH,
    E_MODEL_IDLE_WATER_WAVE,
    E_MODEL_WATER_SPLASH,
    E_MODEL_WAVE_TRAIL,
    E_MODEL_YELLOW_COIN,
    E_MODEL_STAR,
    E_MODEL_TRANSPARENT_STAR,
    E_MODEL_WOODEN_SIGNPOST,
    E_MODEL_WHITE_PARTICLE_SMALL,
    E_MODEL_RED_FLAME,
    E_MODEL_BLUE_FLAME,
    E_MODEL_BURN_SMOKE,
    E_MODEL_LEAVES,
    E_MODEL_PURPLE_MARBLE,
    E_MODEL_TRAMPOLINE,
    E_MODEL_TRAMPOLINE_CENTER,
    E_MODEL_TRAMPOLINE_BASE,
    E_MODEL_FISH,
    E_MODEL_FISH_SHADOW,
    E_MODEL_SPARKLES_ANIMATION,
    E_MODEL_SAND_DUST,
    E_MODEL_BUTTERFLY,
    E_MODEL_BURN_SMOKE_UNUSED,
    E_MODEL_PEBBLE,
    E_MODEL_MIST,
    E_MODEL_WHITE_PUFF,
    E_MODEL_WHITE_PARTICLE_DL,
    E_MODEL_WHITE_PARTICLE,
    E_MODEL_YELLOW_COIN_NO_SHADOW,
    E_MODEL_BLUE_COIN,
    E_MODEL_BLUE_COIN_NO_SHADOW,
    E_MODEL_MARIOS_WINGED_METAL_CAP,
    E_MODEL_MARIOS_METAL_CAP,
    E_MODEL_MARIOS_WING_CAP,
    E_MODEL_MARIOS_CAP,
    E_MODEL_BOWSER_KEY_CUTSCENE,
    E_MODEL_BOWSER_KEY,
    E_MODEL_RED_FLAME_SHADOW,
    E_MODEL_1UP,
    E_MODEL_RED_COIN,
    E_MODEL_RED_COIN_NO_SHADOW,
    E_MODEL_NUMBER,
    E_MODEL_EXPLOSION,
    E_MODEL_DIRT_ANIMATION,
    E_MODEL_CARTOON_STAR,
    E_MODEL_BLUE_COIN_SWITCH,
    E_MODEL_AMP,
    E_MODEL_PURPLE_SWITCH,
    E_MODEL_CHECKERBOARD_PLATFORM,
    E_MODEL_BREAKABLE_BOX,
    E_MODEL_BREAKABLE_BOX_SMALL,
    E_MODEL_EXCLAMATION_BOX_OUTLINE,
    E_MODEL_EXCLAMATION_BOX,
    E_MODEL_GOOMBA,
    E_MODEL_EXCLAMATION_POINT,
    E_MODEL_KOOPA_SHELL,
    E_MODEL_METAL_BOX,
    E_MODEL_METAL_BOX_DL,
    E_MODEL_BLACK_BOBOMB,
    E_MODEL_BOBOMB_BUDDY,
    E_MODEL_DL_CANNON_LID,
    E_MODEL_BOWLING_BALL,
    E_MODEL_CANNON_BARREL,
    E_MODEL_CANNON_BASE,
    E_MODEL_HEART,
    E_MODEL_FLYGUY,
    E_MODEL_CHUCKYA,
    E_MODEL_TRAJECTORY_MARKER_BALL,
    E_MODEL_BULLET_BILL,
    E_MODEL_YELLOW_SPHERE,
    E_MODEL_HOOT,
    E_MODEL_YOSHI_EGG,
    E_MODEL_THWOMP,
    E_MODEL_HEAVE_HO,
    E_MODEL_BLARGG,
    E_MODEL_BULLY,
    E_MODEL_BULLY_BOSS,
    E_MODEL_WATER_BOMB,
    E_MODEL_WATER_BOMB_SHADOW,
    E_MODEL_KING_BOBOMB,
    E_MODEL_MANTA_RAY,
    E_MODEL_UNAGI,
    E_MODEL_SUSHI,
    E_MODEL_DL_WHIRLPOOL,
    E_MODEL_CLAM_SHELL,
    E_MODEL_POKEY_HEAD,
    E_MODEL_POKEY_BODY_PART,
    E_MODEL_TWEESTER,
    E_MODEL_KLEPTO,
    E_MODEL_EYEROK_LEFT_HAND,
    E_MODEL_EYEROK_RIGHT_HAND,
    E_MODEL_DL_MONTY_MOLE_HOLE,
    E_MODEL_MONTY_MOLE,
    E_MODEL_UKIKI,
    E_MODEL_FWOOSH,
    E_MODEL_SPINDRIFT,
    E_MODEL_MR_BLIZZARD_HIDDEN,
    E_MODEL_MR_BLIZZARD,
    E_MODEL_PENGUIN,
    E_MODEL_CAP_SWITCH_EXCLAMATION,
    E_MODEL_CAP_SWITCH,
    E_MODEL_CAP_SWITCH_BASE,
    E_MODEL_BOO,
    E_MODEL_BETA_BOO_KEY,
    E_MODEL_HAUNTED_CHAIR,
    E_MODEL_MAD_PIANO,
    E_MODEL_BOOKEND_PART,
    E_MODEL_BOOKEND,
    E_MODEL_HAUNTED_CAGE,
    E_MODEL_BIRDS,
    E_MODEL_PEACH,
    E_MODEL_YOSHI,
    E_MODEL_ENEMY_LAKITU,
    E_MODEL_SPINY_BALL,
    E_MODEL_SPINY,
    E_MODEL_WIGGLER_HEAD,
    E_MODEL_WIGGLER_BODY,
    E_MODEL_BUBBA,
    E_MODEL_BOWSER,
    E_MODEL_BOWSER_BOMB_CHILD_OBJ,
    E_MODEL_BOWSER_BOMB,
    E_MODEL_BOWSER_SMOKE,
    E_MODEL_BOWSER_FLAMES,
    E_MODEL_BOWSER_WAVE,
    E_MODEL_BOWSER2,
    E_MODEL_BUB,
    E_MODEL_TREASURE_CHEST_BASE,
    E_MODEL_TREASURE_CHEST_LID,
    E_MODEL_CYAN_FISH,
    E_MODEL_WATER_RING,
    E_MODEL_WATER_MINE,
    E_MODEL_SEAWEED,
    E_MODEL_SKEETER,
    E_MODEL_PIRANHA_PLANT,
    E_MODEL_WHOMP,
    E_MODEL_KOOPA_WITH_SHELL,
    E_MODEL_KOOPA_WITHOUT_SHELL,
    E_MODEL_METALLIC_BALL,
    E_MODEL_CHAIN_CHOMP,
    E_MODEL_KOOPA_FLAG,
    E_MODEL_WOODEN_POST,
    E_MODEL_MIPS,
    E_MODEL_BOO_CASTLE,
    E_MODEL_LAKITU,
    E_MODEL_TOAD,
    E_MODEL_CHILL_BULLY,
    E_MODEL_BIG_CHILL_BULLY,
    E_MODEL_MONEYBAG,
    E_MODEL_SWOOP,
    E_MODEL_SCUTTLEBUG,
    E_MODEL_MR_I_IRIS,
    E_MODEL_MR_I,
    E_MODEL_DORRIE,
    E_MODEL_SNUFIT,
    E_MODEL_ERROR_MODEL,

    // level
    E_MODEL_BUBBLY_TREE,
    E_MODEL_COURTYARD_SPIKY_TREE,
    E_MODEL_SNOW_TREE,
    E_MODEL_PALM_TREE,
    E_MODEL_CASTLE_CASTLE_DOOR,
    E_MODEL_BBH_HAUNTED_DOOR,
    E_MODEL_HMC_WOODEN_DOOR,
    E_MODEL_HMC_METAL_DOOR,
    E_MODEL_HMC_HAZY_MAZE_DOOR,
    E_MODEL_CASTLE_DOOR_0_STARS,
    E_MODEL_CASTLE_DOOR_1_STAR,
    E_MODEL_CASTLE_DOOR_3_STARS,
    E_MODEL_CASTLE_KEY_DOOR,
    E_MODEL_CCM_CABIN_DOOR,
    E_MODEL_CASTLE_METAL_DOOR,
    E_MODEL_CASTLE_GROUNDS_METAL_DOOR,
    E_MODEL_WF_TOWER_TRAPEZOID_PLATORM,
    E_MODEL_WF_TOWER_SQUARE_PLATORM,
    E_MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED,
    E_MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR,
    E_MODEL_BBH_STAIRCASE_STEP,
    E_MODEL_BBH_TILTING_FLOOR_PLATFORM,
    E_MODEL_BBH_TUMBLING_PLATFORM,
    E_MODEL_BBH_TUMBLING_PLATFORM_PART,
    E_MODEL_BBH_MOVING_BOOKSHELF,
    E_MODEL_BBH_MESH_ELEVATOR,
    E_MODEL_BBH_MERRY_GO_ROUND,
    E_MODEL_BBH_WOODEN_TOMB,
    E_MODEL_CCM_ROPEWAY_LIFT,
    E_MODEL_CCM_SNOWMAN_HEAD,
    E_MODEL_CASTLE_BOWSER_TRAP,
    E_MODEL_CASTLE_WATER_LEVEL_PILLAR,
    E_MODEL_CASTLE_CLOCK_MINUTE_HAND,
    E_MODEL_CASTLE_CLOCK_HOUR_HAND,
    E_MODEL_CASTLE_CLOCK_PENDULUM,
    E_MODEL_HMC_METAL_PLATFORM,
    E_MODEL_HMC_METAL_ARROW_PLATFORM,
    E_MODEL_HMC_ELEVATOR_PLATFORM,
    E_MODEL_HMC_ROLLING_ROCK,
    E_MODEL_HMC_ROCK_PIECE,
    E_MODEL_HMC_ROCK_SMALL_PIECE,
    E_MODEL_HMC_RED_GRILLS,
    E_MODEL_SSL_PYRAMID_TOP,
    E_MODEL_SSL_GRINDEL,
    E_MODEL_SSL_SPINDEL,
    E_MODEL_SSL_MOVING_PYRAMID_WALL,
    E_MODEL_SSL_PYRAMID_ELEVATOR,
    E_MODEL_BOB_CHAIN_CHOMP_GATE,
    E_MODEL_BOB_SEESAW_PLATFORM,
    E_MODEL_BOB_BARS_GRILLS,
    E_MODEL_SL_SNOW_TRIANGLE,
    E_MODEL_SL_CRACKED_ICE,
    E_MODEL_SL_CRACKED_ICE_CHUNK,
    E_MODEL_WDW_SQUARE_FLOATING_PLATFORM,
    E_MODEL_WDW_ARROW_LIFT,
    E_MODEL_WDW_WATER_LEVEL_DIAMOND,
    E_MODEL_WDW_HIDDEN_PLATFORM,
    E_MODEL_WDW_EXPRESS_ELEVATOR,
    E_MODEL_WDW_RECTANGULAR_FLOATING_PLATFORM,
    E_MODEL_WDW_ROTATING_PLATFORM,
    E_MODEL_JRB_SHIP_LEFT_HALF_PART,
    E_MODEL_JRB_SHIP_BACK_LEFT_PART,
    E_MODEL_JRB_SHIP_RIGHT_HALF_PART,
    E_MODEL_JRB_SHIP_BACK_RIGHT_PART,
    E_MODEL_JRB_SUNKEN_SHIP,
    E_MODEL_JRB_SUNKEN_SHIP_BACK,
    E_MODEL_JRB_ROCK,
    E_MODEL_JRB_SLIDING_BOX,
    E_MODEL_JRB_FALLING_PILLAR,
    E_MODEL_JRB_FALLING_PILLAR_BASE,
    E_MODEL_JRB_FLOATING_PLATFORM,
    E_MODEL_THI_HUGE_ISLAND_TOP,
    E_MODEL_THI_TINY_ISLAND_TOP,
    E_MODEL_TTC_ROTATING_CUBE,
    E_MODEL_TTC_ROTATING_PRISM,
    E_MODEL_TTC_PENDULUM,
    E_MODEL_TTC_LARGE_TREADMILL,
    E_MODEL_TTC_SMALL_TREADMILL,
    E_MODEL_TTC_PUSH_BLOCK,
    E_MODEL_TTC_ROTATING_HEXAGON,
    E_MODEL_TTC_ROTATING_TRIANGLE,
    E_MODEL_TTC_PIT_BLOCK,
    E_MODEL_TTC_PIT_BLOCK_UNUSED,
    E_MODEL_TTC_ELEVATOR_PLATFORM,
    E_MODEL_TTC_CLOCK_HAND,
    E_MODEL_TTC_SPINNER,
    E_MODEL_TTC_SMALL_GEAR,
    E_MODEL_TTC_LARGE_GEAR,
    E_MODEL_RR_SLIDING_PLATFORM,
    E_MODEL_RR_FLYING_CARPET,
    E_MODEL_RR_OCTAGONAL_PLATFORM,
    E_MODEL_RR_ROTATING_BRIDGE_PLATFORM,
    E_MODEL_RR_TRIANGLE_PLATFORM,
    E_MODEL_RR_CRUISER_WING,
    E_MODEL_RR_SEESAW_PLATFORM,
    E_MODEL_RR_L_SHAPED_PLATFORM,
    E_MODEL_RR_SWINGING_PLATFORM,
    E_MODEL_RR_DONUT_PLATFORM,
    E_MODEL_RR_ELEVATOR_PLATFORM,
    E_MODEL_RR_TRICKY_TRIANGLES,
    E_MODEL_RR_TRICKY_TRIANGLES_FRAME1,
    E_MODEL_RR_TRICKY_TRIANGLES_FRAME2,
    E_MODEL_RR_TRICKY_TRIANGLES_FRAME3,
    E_MODEL_RR_TRICKY_TRIANGLES_FRAME4,
    E_MODEL_BITDW_SQUARE_PLATFORM,
    E_MODEL_BITDW_SEESAW_PLATFORM,
    E_MODEL_BITDW_SLIDING_PLATFORM,
    E_MODEL_BITDW_FERRIS_WHEEL_AXLE,
    E_MODEL_BITDW_BLUE_PLATFORM,
    E_MODEL_BITDW_STAIRCASE_FRAME4,
    E_MODEL_BITDW_STAIRCASE_FRAME3,
    E_MODEL_BITDW_STAIRCASE_FRAME2,
    E_MODEL_BITDW_STAIRCASE_FRAME1,
    E_MODEL_BITDW_STAIRCASE,
    E_MODEL_BITFS_PLATFORM_ON_TRACK,
    E_MODEL_BITFS_TILTING_SQUARE_PLATFORM,
    E_MODEL_BITFS_SINKING_PLATFORMS,
    E_MODEL_BITFS_BLUE_POLE,
    E_MODEL_BITFS_SINKING_CAGE_PLATFORM,
    E_MODEL_BITFS_ELEVATOR,
    E_MODEL_BITFS_STRETCHING_PLATFORMS,
    E_MODEL_BITFS_SEESAW_PLATFORM,
    E_MODEL_BITFS_MOVING_SQUARE_PLATFORM,
    E_MODEL_BITFS_SLIDING_PLATFORM,
    E_MODEL_BITFS_TUMBLING_PLATFORM_PART,
    E_MODEL_BITFS_TUMBLING_PLATFORM,
    E_MODEL_BITS_SLIDING_PLATFORM,
    E_MODEL_BITS_TWIN_SLIDING_PLATFORMS,
    E_MODEL_BITS_OCTAGONAL_PLATFORM,
    E_MODEL_BITS_BLUE_PLATFORM,
    E_MODEL_BITS_FERRIS_WHEEL_AXLE,
    E_MODEL_BITS_ARROW_PLATFORM,
    E_MODEL_BITS_SEESAW_PLATFORM,
    E_MODEL_BITS_TILTING_W_PLATFORM,
    E_MODEL_BITS_STAIRCASE,
    E_MODEL_BITS_STAIRCASE_FRAME1,
    E_MODEL_BITS_STAIRCASE_FRAME2,
    E_MODEL_BITS_STAIRCASE_FRAME3,
    E_MODEL_BITS_STAIRCASE_FRAME4,
    E_MODEL_BITS_WARP_PIPE,
    E_MODEL_LLL_DRAWBRIDGE_PART,
    E_MODEL_LLL_ROTATING_BLOCK_FIRE_BARS,
    E_MODEL_LLL_ROTATING_HEXAGONAL_RING,
    E_MODEL_LLL_SINKING_RECTANGULAR_PLATFORM,
    E_MODEL_LLL_SINKING_SQUARE_PLATFORMS,
    E_MODEL_LLL_TILTING_SQUARE_PLATFORM,
    E_MODEL_LLL_BOWSER_PIECE_1,
    E_MODEL_LLL_BOWSER_PIECE_2,
    E_MODEL_LLL_BOWSER_PIECE_3,
    E_MODEL_LLL_BOWSER_PIECE_4,
    E_MODEL_LLL_BOWSER_PIECE_5,
    E_MODEL_LLL_BOWSER_PIECE_6,
    E_MODEL_LLL_BOWSER_PIECE_7,
    E_MODEL_LLL_BOWSER_PIECE_8,
    E_MODEL_LLL_BOWSER_PIECE_9,
    E_MODEL_LLL_BOWSER_PIECE_10,
    E_MODEL_LLL_BOWSER_PIECE_11,
    E_MODEL_LLL_BOWSER_PIECE_12,
    E_MODEL_LLL_BOWSER_PIECE_13,
    E_MODEL_LLL_BOWSER_PIECE_14,
    E_MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM,
    E_MODEL_LLL_SINKING_ROCK_BLOCK,
    E_MODEL_LLL_ROLLING_LOG,
    E_MODEL_LLL_WOOD_BRIDGE,
    E_MODEL_LLL_LARGE_WOOD_BRIDGE,
    E_MODEL_LLL_FALLING_PLATFORM,
    E_MODEL_LLL_LARGE_FALLING_PLATFORM,
    E_MODEL_LLL_VOLCANO_FALLING_TRAP,
    E_MODEL_DDD_BOWSER_SUB_DOOR,
    E_MODEL_DDD_BOWSER_SUB,
    E_MODEL_DDD_POLE,
    E_MODEL_WF_BREAKABLE_WALL_RIGHT,
    E_MODEL_WF_BREAKABLE_WALL_LEFT,
    E_MODEL_WF_KICKABLE_BOARD,
    E_MODEL_WF_TOWER_DOOR,
    E_MODEL_WF_KICKABLE_BOARD_FELLED,
    E_MODEL_CASTLE_GROUNDS_VCUTM_GRILL,
    E_MODEL_CASTLE_GROUNDS_FLAG,
    E_MODEL_CASTLE_GROUNDS_CANNON_GRILL,
    E_MODEL_BOWSER_2_TILTING_ARENA,
    E_MODEL_BOWSER_3_FALLING_PLATFORM_1,
    E_MODEL_BOWSER_3_FALLING_PLATFORM_2,
    E_MODEL_BOWSER_3_FALLING_PLATFORM_3,
    E_MODEL_BOWSER_3_FALLING_PLATFORM_4,
    E_MODEL_BOWSER_3_FALLING_PLATFORM_5,
    E_MODEL_BOWSER_3_FALLING_PLATFORM_6,
    E_MODEL_BOWSER_3_FALLING_PLATFORM_7,
    E_MODEL_BOWSER_3_FALLING_PLATFORM_8,
    E_MODEL_BOWSER_3_FALLING_PLATFORM_9,
    E_MODEL_BOWSER_3_FALLING_PLATFORM_10,
    E_MODEL_TTM_ROLLING_LOG,
    E_MODEL_TTM_STAR_CAGE,
    E_MODEL_TTM_BLUE_SMILEY,
    E_MODEL_TTM_YELLOW_SMILEY,
    E_MODEL_TTM_STAR_SMILEY,
    E_MODEL_TTM_MOON_SMILEY,

    // custom models
    E_MODEL_BUBBLE_PLAYER,
    E_MODEL_LUIGI,
    E_MODEL_LUIGIS_CAP,
    E_MODEL_LUIGIS_METAL_CAP,
    E_MODEL_LUIGIS_WING_CAP,
    E_MODEL_LUIGIS_WINGED_METAL_CAP,
    E_MODEL_TOAD_PLAYER,
    E_MODEL_TOADS_CAP,
    E_MODEL_TOADS_METAL_CAP,
    E_MODEL_TOADS_WING_CAP,
    E_MODEL_WALUIGI,
    E_MODEL_WALUIGIS_CAP,
    E_MODEL_WALUIGIS_METAL_CAP,
    E_MODEL_WALUIGIS_WING_CAP,
    E_MODEL_WALUIGIS_WINGED_METAL_CAP,
    E_MODEL_WARIO,
    E_MODEL_WARIOS_CAP,
    E_MODEL_WARIOS_METAL_CAP,
    E_MODEL_WARIOS_WING_CAP,
    E_MODEL_WARIOS_WINGED_METAL_CAP,

    E_MODEL_MAX
};

void smlua_model_util_remember(u8 modelId, u8 layer, const void* asset, u8 isDisplayList);
void smlua_model_util_clear(void);
u8 smlua_model_util_load_with_pool_and_cache_id(enum ModelExtendedId id, struct AllocOnlyPool* pool, u8 cacheId);
u8 smlua_model_util_load_with_pool(enum ModelExtendedId id, struct AllocOnlyPool* pool);
u8 smlua_model_util_load(enum ModelExtendedId id);
u32 smlua_model_util_get_id(const char* name);

#endif
