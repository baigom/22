#pragma once

// When adding:
// * Add an entry in feature-data.h for the feature.
// * edit dat/descript/features.txt and add a
//      long description if appropriate.
// * check the feat_* functions in terrain.cc and make sure
//      they return sane values for your new feature.
// * edit mapdef.cc and add a symbol to _glyph_to_feat() for the feature,
//      if you want vault maps to be able to use it directly . If you do, also
//      update docs/develop/levels/syntax.txt with the new symbol.
enum dungeon_feature_type
{
    DNGN_UNSEEN = 0,                   // must be zero
    DNGN_CLOSED_DOOR,
#if TAG_MAJOR_VERSION > 34
    DNGN_CLOSED_CLEAR_DOOR,
#endif
    DNGN_RUNED_DOOR,
#if TAG_MAJOR_VERSION > 34
    DNGN_RUNED_CLEAR_DOOR,
#endif
    DNGN_SEALED_DOOR,
#if TAG_MAJOR_VERSION > 34
    DNGN_SEALED_CLEAR_DOOR,
#endif
    DNGN_TREE,

    // Walls
    DNGN_METAL_WALL,
    DNGN_CRYSTAL_WALL,
    DNGN_ROCK_WALL,
    DNGN_SLIMY_WALL,
    DNGN_STONE_WALL,
    DNGN_PERMAROCK_WALL,               // for undiggable walls
    DNGN_CLEAR_ROCK_WALL,              // transparent walls
    DNGN_CLEAR_STONE_WALL,
    DNGN_CLEAR_PERMAROCK_WALL,

    DNGN_GRATE,

    // Misc solid features
    DNGN_OPEN_SEA,                     // Shoals equivalent for permarock
    DNGN_LAVA_SEA,                     // Gehenna equivalent for permarock
#if TAG_MAJOR_VERSION > 34
    DNGN_ENDLESS_SALT,                 // Desolation equivalent for permarock
#endif
    DNGN_ORCISH_IDOL,
    DNGN_GRANITE_STATUE,
    DNGN_MALIGN_GATEWAY,

#if TAG_MAJOR_VERSION == 34
    DNGN_LAVA            = 30,
#else
    DNGN_LAVA,
#endif
    DNGN_DEEP_WATER,

    DNGN_SHALLOW_WATER,

    DNGN_FLOOR,
    DNGN_OPEN_DOOR,
#if TAG_MAJOR_VERSION > 34
    DNGN_OPEN_CLEAR_DOOR,
#endif

    DNGN_TRAP_MECHANICAL,
    DNGN_TRAP_TELEPORT,
    DNGN_TRAP_SHAFT,
    DNGN_TRAP_WEB,
#if TAG_MAJOR_VERSION > 34
    DNGN_TRAP_ALARM,
    DNGN_TRAP_ZOT,
    DNGN_TRAP_DISPERSAL,
    DNGN_PASSAGE_OF_GOLUBRIA,
#endif
#if TAG_MAJOR_VERSION == 34
    DNGN_UNDISCOVERED_TRAP,
#endif

    DNGN_ENTER_SHOP,
    DNGN_ABANDONED_SHOP,

    DNGN_STONE_STAIRS_DOWN_I,
    DNGN_STONE_STAIRS_DOWN_II,
    DNGN_STONE_STAIRS_DOWN_III,
    DNGN_ESCAPE_HATCH_DOWN,

    // corresponding up stairs (same order as above)
    DNGN_STONE_STAIRS_UP_I,
    DNGN_STONE_STAIRS_UP_II,
    DNGN_STONE_STAIRS_UP_III,
    DNGN_ESCAPE_HATCH_UP,

#if TAG_MAJOR_VERSION > 34
    DNGN_TRANSPORTER,
    DNGN_TRANSPORTER_LANDING,
#endif

    // Various gates
    DNGN_ENTER_DIS,
    DNGN_ENTER_GEHENNA,
    DNGN_ENTER_COCYTUS,
    DNGN_ENTER_TARTARUS,
    DNGN_ENTER_ABYSS,
    DNGN_EXIT_ABYSS,
    DNGN_STONE_ARCH,
    DNGN_ENTER_PANDEMONIUM,
    DNGN_EXIT_PANDEMONIUM,
    DNGN_TRANSIT_PANDEMONIUM,
    DNGN_EXIT_DUNGEON,
    DNGN_EXIT_THROUGH_ABYSS,
    DNGN_EXIT_HELL,
    DNGN_ENTER_HELL,
#if TAG_MAJOR_VERSION == 34
    DNGN_ENTER_LABYRINTH,
    DNGN_TELEPORTER,
    DNGN_ENTER_PORTAL_VAULT,
    DNGN_EXIT_PORTAL_VAULT,
#endif
    DNGN_EXPIRED_PORTAL,

    // Entrances to various branches
#if TAG_MAJOR_VERSION == 34
    DNGN_ENTER_DWARF,
#endif
    DNGN_ENTER_ORC,
    DNGN_ENTER_LAIR,
    DNGN_ENTER_SLIME,
    DNGN_ENTER_VAULTS,
    DNGN_ENTER_CRYPT,
#if TAG_MAJOR_VERSION == 34
    DNGN_ENTER_BLADE,
#endif
    DNGN_ENTER_ZOT,
    DNGN_ENTER_TEMPLE,
    DNGN_ENTER_SNAKE,
    DNGN_ENTER_ELF,
    DNGN_ENTER_TOMB,
    DNGN_ENTER_SWAMP,
    DNGN_ENTER_SHOALS,
    DNGN_ENTER_SPIDER,
#if TAG_MAJOR_VERSION == 34
    DNGN_ENTER_FOREST,
#endif
    DNGN_ENTER_DEPTHS,

    // Exits from various branches
    // Order must be the same as above
#if TAG_MAJOR_VERSION == 34
    DNGN_EXIT_DWARF,
#endif
    DNGN_EXIT_ORC,
    DNGN_EXIT_LAIR,
    DNGN_EXIT_SLIME,
    DNGN_EXIT_VAULTS,
    DNGN_EXIT_CRYPT,
#if TAG_MAJOR_VERSION == 34
    DNGN_EXIT_BLADE,
#endif
    DNGN_EXIT_ZOT,
    DNGN_EXIT_TEMPLE,
    DNGN_EXIT_SNAKE,
    DNGN_EXIT_ELF,
    DNGN_EXIT_TOMB,
    DNGN_EXIT_SWAMP,
    DNGN_EXIT_SHOALS,
    DNGN_EXIT_SPIDER,
#if TAG_MAJOR_VERSION == 34
    DNGN_EXIT_FOREST,
#endif
    DNGN_EXIT_DEPTHS,

    DNGN_ALTAR_ZIN,
    DNGN_ALTAR_SHINING_ONE,
    DNGN_ALTAR_KIKUBAAQUDGHA,
    DNGN_ALTAR_YREDELEMNUL,
    DNGN_ALTAR_XOM,
    DNGN_ALTAR_VEHUMET,
    DNGN_ALTAR_OKAWARU,
    DNGN_ALTAR_MAKHLEB,
    DNGN_ALTAR_SIF_MUNA,
    DNGN_ALTAR_TROG,
    DNGN_ALTAR_NEMELEX_XOBEH,
    DNGN_ALTAR_ELYVILON,
    DNGN_ALTAR_LUGONU,
    DNGN_ALTAR_BEOGH,
    DNGN_ALTAR_JIYVA,
    DNGN_ALTAR_FEDHAS,
    DNGN_ALTAR_CHEIBRIADOS,
    DNGN_ALTAR_ASHENZARI,
    DNGN_ALTAR_DITHMENOS,
#if TAG_MAJOR_VERSION > 34
    DNGN_ALTAR_GOZAG,
    DNGN_ALTAR_QAZLAL,
    DNGN_ALTAR_RU,
    DNGN_ALTAR_PAKELLAS,
    DNGN_ALTAR_USKAYAW,
    DNGN_ALTAR_HEPLIAKLQANA,
    DNGN_ALTAR_ECUMENICAL,
#endif

    DNGN_FOUNTAIN_BLUE,
    DNGN_FOUNTAIN_SPARKLING,           // aka 'Magic Fountain' {dlb}
    DNGN_FOUNTAIN_BLOOD,
#if TAG_MAJOR_VERSION == 34
    DNGN_DRY_FOUNTAIN_BLUE,
    DNGN_DRY_FOUNTAIN_SPARKLING,
    DNGN_DRY_FOUNTAIN_BLOOD,
#endif
    DNGN_DRY_FOUNTAIN,

    // Not meant to ever appear in grd().
    DNGN_EXPLORE_HORIZON, // dummy for redefinition

    DNGN_UNKNOWN_ALTAR,
    DNGN_UNKNOWN_PORTAL,

    DNGN_ABYSSAL_STAIR,
#if TAG_MAJOR_VERSION == 34
    DNGN_BADLY_SEALED_DOOR,
#endif

    DNGN_SEALED_STAIRS_UP,
    DNGN_SEALED_STAIRS_DOWN,
#if TAG_MAJOR_VERSION == 34
    DNGN_TRAP_ALARM,
    DNGN_TRAP_ZOT,
    DNGN_PASSAGE_OF_GOLUBRIA,
#endif

    DNGN_ENTER_ZIGGURAT,
    DNGN_ENTER_BAZAAR,
    DNGN_ENTER_TROVE,
    DNGN_ENTER_SEWER,
    DNGN_ENTER_OSSUARY,
    DNGN_ENTER_BAILEY,
#if TAG_MAJOR_VERSION > 34
    DNGN_ENTER_GAUNTLET,
#endif
    DNGN_ENTER_ICE_CAVE,
    DNGN_ENTER_VOLCANO,
    DNGN_ENTER_WIZLAB,
    DNGN_ENTER_DESOLATION,

    DNGN_EXIT_ZIGGURAT,
    DNGN_EXIT_BAZAAR,
    DNGN_EXIT_TROVE,
    DNGN_EXIT_SEWER,
    DNGN_EXIT_OSSUARY,
    DNGN_EXIT_BAILEY,
#if TAG_MAJOR_VERSION > 34
    DNGN_EXIT_GAUNTLET,
#endif
    DNGN_EXIT_ICE_CAVE,
    DNGN_EXIT_VOLCANO,
    DNGN_EXIT_WIZLAB,
#if TAG_MAJOR_VERSION == 34
    DNGN_EXIT_LABYRINTH,
#endif
    DNGN_EXIT_DESOLATION,
#if TAG_MAJOR_VERSION == 34

    DNGN_ALTAR_GOZAG,
    DNGN_ALTAR_QAZLAL,
    DNGN_ALTAR_RU,

    DNGN_TRAP_SHADOW,
    DNGN_TRAP_SHADOW_DORMANT,
    DNGN_ALTAR_ECUMENICAL,
    DNGN_ALTAR_PAKELLAS,
    DNGN_ALTAR_USKAYAW,
    DNGN_ALTAR_HEPLIAKLQANA,

    DNGN_ENDLESS_SALT,
    DNGN_ALTAR_WU_JIAN,
    DNGN_TRANSPORTER,
    DNGN_TRANSPORTER_LANDING,
    DNGN_TRAP_DISPERSAL,
    DNGN_ENTER_GAUNTLET,
    DNGN_EXIT_GAUNTLET,
    DNGN_CLOSED_CLEAR_DOOR,
    DNGN_OPEN_CLEAR_DOOR,
    DNGN_RUNED_CLEAR_DOOR,
    DNGN_SEALED_CLEAR_DOOR,
	
	DNGN_ALTAR_LEGION_FROM_BEYOND,
#endif

    NUM_FEATURES
};
COMPILE_CHECK(NUM_FEATURES <= 256);
