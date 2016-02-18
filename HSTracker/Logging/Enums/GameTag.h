/*
 * This file is part of the HSTracker package.
 * (c) Benjamin Michotte <bmichotte@gmail.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 *
 * Created on 14/02/16.
 */
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, EGameTag)
{
    EGameTag_IGNORE_DAMAGE = 1,
    EGameTag_TAG_SCRIPT_DATA_NUM_1 = 2,
    EGameTag_TAG_SCRIPT_DATA_NUM_2 = 3,
    EGameTag_TAG_SCRIPT_DATA_ENT_1 = 4,
    EGameTag_TAG_SCRIPT_DATA_ENT_2 = 5,
    EGameTag_MISSION_EVENT = 6,
    EGameTag_TIMEOUT = 7,
    EGameTag_TURN_START = 8,
    EGameTag_TURN_TIMER_SLUSH = 9,
    EGameTag_PREMIUM = 12,
    EGameTag_GOLD_REWARD_STATE = 13,
    EGameTag_PLAYSTATE = 17,
    EGameTag_LAST_AFFECTED_BY = 18,
    EGameTag_STEP = 19,
    EGameTag_TURN = 20,
    EGameTag_FATIGUE = 22,
    EGameTag_CURRENT_PLAYER = 23,
    EGameTag_FIRST_PLAYER = 24,
    EGameTag_RESOURCES_USED = 25,
    EGameTag_RESOURCES = 26,
    EGameTag_HERO_ENTITY = 27,
    EGameTag_MAXHANDSIZE = 28,
    EGameTag_STARTHANDSIZE = 29,
    EGameTag_PLAYER_ID = 30,
    EGameTag_TEAM_ID = 31,
    EGameTag_TRIGGER_VISUAL = 32,
    EGameTag_RECENTLY_ARRIVED = 33,
    EGameTag_PROTECTED = 34,
    EGameTag_PROTECTING = 35,
    EGameTag_DEFENDING = 36,
    EGameTag_PROPOSED_DEFENDER = 37,
    EGameTag_ATTACKING = 38,
    EGameTag_PROPOSED_ATTACKER = 39,
    EGameTag_ATTACHED = 40,
    EGameTag_EXHAUSTED = 43,
    EGameTag_DAMAGE = 44,
    EGameTag_HEALTH = 45,
    EGameTag_ATK = 47,
    EGameTag_COST = 48,
    EGameTag_ZONE = 49,
    EGameTag_CONTROLLER = 50,
    EGameTag_OWNER = 51,
    EGameTag_DEFINITION = 52,
    EGameTag_ENTITY_ID = 53,
    EGameTag_HISTORY_PROXY = 54,
    EGameTag_COPY_DEATHRATTLE = 55,
    EGameTag_COPY_DEATHRATTLE_INDEX = 56,
    EGameTag_ELITE = 114,
    EGameTag_MAXRESOURCES = 176,
    EGameTag_CARD_SET = 183,
    EGameTag_CARDTEXT_INHAND = 184,
    EGameTag_CARDNAME = 185,
    EGameTag_CARD_ID = 186,
    EGameTag_DURABILITY = 187,
    EGameTag_SILENCED = 188,
    EGameTag_WINDFURY = 189,
    EGameTag_TAUNT = 190,
    EGameTag_STEALTH = 191,
    EGameTag_SPELLPOWER = 192,
    EGameTag_DIVINE_SHIELD = 194,
    EGameTag_CHARGE = 197,
    EGameTag_NEXT_STEP = 198,
    EGameTag_CLASS = 199,
    EGameTag_CARDRACE = 200,
    EGameTag_FACTION = 201,
    EGameTag_CARDTYPE = 202,
    EGameTag_RARITY = 203,
    EGameTag_STATE = 204,
    EGameTag_SUMMONED = 205,
    EGameTag_FREEZE = 208,
    EGameTag_ENRAGED = 212,
    EGameTag_OVERLOAD = 215,
    EGameTag_LOYALTY = 216,
    EGameTag_DEATHRATTLE = 217,
    EGameTag_BATTLECRY = 218,
    EGameTag_SECRET = 219,
    EGameTag_COMBO = 220,
    EGameTag_CANT_HEAL = 221,
    EGameTag_CANT_DAMAGE = 222,
    EGameTag_CANT_SET_ASIDE = 223,
    EGameTag_CANT_REMOVE_FROM_GAME = 224,
    EGameTag_CANT_READY = 225,
    EGameTag_CANT_EXHAUST = 226,
    EGameTag_CANT_ATTACK = 227,
    EGameTag_CANT_TARGET = 228,
    EGameTag_CANT_DESTROY = 229,
    EGameTag_CANT_DISCARD = 230,
    EGameTag_CANT_PLAY = 231,
    EGameTag_CANT_DRAW = 232,
    EGameTag_INCOMING_HEALING_MULTIPLIER = 233,
    EGameTag_INCOMING_HEALING_ADJUSTMENT = 234,
    EGameTag_INCOMING_HEALING_CAP = 235,
    EGameTag_INCOMING_DAMAGE_MULTIPLIER = 236,
    EGameTag_INCOMING_DAMAGE_ADJUSTMENT = 237,
    EGameTag_INCOMING_DAMAGE_CAP = 238,
    EGameTag_CANT_BE_HEALED = 239,
    EGameTag_CANT_BE_DAMAGED = 240,
    EGameTag_CANT_BE_SET_ASIDE = 241,
    EGameTag_CANT_BE_REMOVED_FROM_GAME = 242,
    EGameTag_CANT_BE_READIED = 243,
    EGameTag_CANT_BE_EXHAUSTED = 244,
    EGameTag_CANT_BE_ATTACKED = 245,
    EGameTag_CANT_BE_TARGETED = 246,
    EGameTag_CANT_BE_DESTROYED = 247,
    EGameTag_CANT_BE_SUMMONING_SICK = 253,
    EGameTag_FROZEN = 260,
    EGameTag_JUST_PLAYED = 261,
    EGameTag_LINKEDCARD = 262,
    EGameTag_ZONE_POSITION = 263,
    EGameTag_CANT_BE_FROZEN = 264,
    EGameTag_COMBO_ACTIVE = 266,
    EGameTag_CARD_TARGET = 267,
    EGameTag_NUM_CARDS_PLAYED_THIS_TURN = 269,
    EGameTag_CANT_BE_TARGETED_BY_OPPONENTS = 270,
    EGameTag_NUM_TURNS_IN_PLAY = 271,
    EGameTag_NUM_TURNS_LEFT = 272,
    EGameTag_OUTGOING_DAMAGE_CAP = 273,
    EGameTag_OUTGOING_DAMAGE_ADJUSTMENT = 274,
    EGameTag_OUTGOING_DAMAGE_MULTIPLIER = 275,
    EGameTag_OUTGOING_HEALING_CAP = 276,
    EGameTag_OUTGOING_HEALING_ADJUSTMENT = 277,
    EGameTag_OUTGOING_HEALING_MULTIPLIER = 278,
    EGameTag_INCOMING_ABILITY_DAMAGE_ADJUSTMENT = 279,
    EGameTag_INCOMING_COMBAT_DAMAGE_ADJUSTMENT = 280,
    EGameTag_OUTGOING_ABILITY_DAMAGE_ADJUSTMENT = 281,
    EGameTag_OUTGOING_COMBAT_DAMAGE_ADJUSTMENT = 282,
    EGameTag_OUTGOING_ABILITY_DAMAGE_MULTIPLIER = 283,
    EGameTag_OUTGOING_ABILITY_DAMAGE_CAP = 284,
    EGameTag_INCOMING_ABILITY_DAMAGE_MULTIPLIER = 285,
    EGameTag_INCOMING_ABILITY_DAMAGE_CAP = 286,
    EGameTag_OUTGOING_COMBAT_DAMAGE_MULTIPLIER = 287,
    EGameTag_OUTGOING_COMBAT_DAMAGE_CAP = 288,
    EGameTag_INCOMING_COMBAT_DAMAGE_MULTIPLIER = 289,
    EGameTag_INCOMING_COMBAT_DAMAGE_CAP = 290,
    EGameTag_CURRENT_SPELLPOWER = 291,
    EGameTag_ARMOR = 292,
    EGameTag_MORPH = 293,
    EGameTag_IS_MORPHED = 294,
    EGameTag_TEMP_RESOURCES = 295,
    EGameTag_OVERLOAD_OWED = 296,
    EGameTag_NUM_ATTACKS_THIS_TURN = 297,
    EGameTag_NEXT_ALLY_BUFF = 302,
    EGameTag_MAGNET = 303,
    EGameTag_FIRST_CARD_PLAYED_THIS_TURN = 304,
    EGameTag_MULLIGAN_STATE = 305,
    EGameTag_TAUNT_READY = 306,
    EGameTag_STEALTH_READY = 307,
    EGameTag_CHARGE_READY = 308,
    EGameTag_CANT_BE_TARGETED_BY_ABILITIES = 311,
    EGameTag_SHOULDEXITCOMBAT = 312,
    EGameTag_CREATOR = 313,
    EGameTag_CANT_BE_DISPELLED = 314,
    EGameTag_PARENT_CARD = 316,
    EGameTag_NUM_MINIONS_PLAYED_THIS_TURN = 317,
    EGameTag_PREDAMAGE = 318,
    EGameTag_ENCHANTMENT_BIRTH_VISUAL = 330,
    EGameTag_ENCHANTMENT_IDLE_VISUAL = 331,
    EGameTag_CANT_BE_TARGETED_BY_HERO_POWERS = 332,
    EGameTag_HEALTH_MINIMUM = 337,
    EGameTag_TAG_ONE_TURN_EFFECT = 338,
    EGameTag_SILENCE = 339,
    EGameTag_COUNTER = 340,
    EGameTag_HAND_REVEALED = 348,
    EGameTag_ADJACENT_BUFF = 350,
    EGameTag_FORCED_PLAY = 352,
    EGameTag_LOW_HEALTH_THRESHOLD = 353,
    EGameTag_IGNORE_DAMAGE_OFF = 354,
    EGameTag_SPELLPOWER_DOUBLE = 356,
    EGameTag_HEALING_DOUBLE = 357,
    EGameTag_NUM_OPTIONS_PLAYED_THIS_TURN = 358,
    EGameTag_NUM_OPTIONS = 359,
    EGameTag_TO_BE_DESTROYED = 360,
    EGameTag_AURA = 362,
    EGameTag_POISONOUS = 363,
    EGameTag_HERO_POWER_DOUBLE = 366,
    EGameTag_AI_MUST_PLAY = 367,
    EGameTag_NUM_MINIONS_PLAYER_KILLED_THIS_TURN = 368,
    EGameTag_NUM_MINIONS_KILLED_THIS_TURN = 369,
    EGameTag_AFFECTED_BY_SPELL_POWER = 370,
    EGameTag_EXTRA_DEATHRATTLES = 371,
    EGameTag_START_WITH_1_HEALTH = 372,
    EGameTag_IMMUNE_WHILE_ATTACKING = 373,
    EGameTag_MULTIPLY_HERO_DAMAGE = 374,
    EGameTag_MULTIPLY_BUFF_VALUE = 375,
    EGameTag_CUSTOM_KEYWORD_EFFECT = 376,
    EGameTag_TOPDECK = 377,
    EGameTag_CANT_BE_TARGETED_BY_BATTLECRIES = 379,
    EGameTag_SHOWN_HERO_POWER = 380,
    EGameTag_DEATHRATTLE_RETURN_ZONE = 382,
    EGameTag_STEADY_SHOT_CAN_TARGET = 383,
    EGameTag_DISPLAYED_CREATOR = 385,
    EGameTag_POWERED_UP = 386,
    EGameTag_SPARE_PART = 388,
    EGameTag_FORGETFUL = 389,
    EGameTag_CAN_SUMMON_MAXPLUSONE_MINION = 390,

    EGameTag_OBFUSCATED = 391,
    EGameTag_BURNING = 392,
    EGameTag_OVERLOAD_LOCKED = 393,
    EGameTag_NUM_TIMES_HERO_POWER_USED_THIS_GAME = 394,
    EGameTag_CURRENT_HEROPOWER_DAMAGE_BONUS = 395,
    EGameTag_HEROPOWER_DAMAGE = 396,
    EGameTag_LAST_CARD_PLAYED = 397,
    EGameTag_NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_TURN = 398,
    EGameTag_NUM_CARDS_DRAWN_THIS_TURN = 399,
    EGameTag_AI_ONE_SHOT_KILL = 400,
    EGameTag_EVIL_GLOW = 401,
    EGameTag_HIDE_COST = 402,
    EGameTag_INSPIRE = 403,
    EGameTag_RECEIVES_DOUBLE_SPELLDAMAGE_BONUS = 404,
    EGameTag_HEROPOWER_ADDITIONAL_ACTIVATIONS = 405,
    EGameTag_HEROPOWER_ACTIVATIONS_THIS_TURN = 406,
    EGameTag_REVEALED = 410,
    EGameTag_NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_GAME = 412,
    EGameTag_CANNOT_ATTACK_HEROES = 413,
    EGameTag_LOCK_AND_LOAD = 414,
    EGameTag_TREASURE = 415,
    EGameTag_SHADOWFORM = 416,
    EGameTag_NUM_FRIENDLY_MINIONS_THAT_ATTACKED_THIS_TURN = 417,
    EGameTag_NUM_RESOURCES_SPENT_THIS_GAME = 418,
    EGameTag_CHOOSE_BOTH = 419,
    EGameTag_ELECTRIC_CHARGE_LEVEL = 420,
    EGameTag_HEAVILY_ARMORED = 421,
    EGameTag_DONT_SHOW_IMMUNE = 422,

    EGameTag_Collectible = 321,
    EGameTag_InvisibleDeathrattle = 335,
    EGameTag_OneTurnEffect = 338,
    EGameTag_ImmuneToSpellpower = 349,
    EGameTag_AttackVisualType = 251,
    EGameTag_DevState = 268,
    EGameTag_GrantCharge = 355,
    EGameTag_HealTarget = 361,

    EGameTag_CardTextInPlay = 252,
    EGameTag_TARGETING_ARROW_TEXT = 325,
    EGameTag_ARTISTNAME = 342,
    EGameTag_FLAVORTEXT = 351,
    EGameTag_HOW_TO_EARN = 364,
    EGameTag_HOW_TO_EARN_GOLDEN = 365,

    EGameTag_DEATH_RATTLE = EGameTag_DEATHRATTLE,
    EGameTag_DEATHRATTLE_SENDS_BACK_TO_DECK = EGameTag_DEATHRATTLE_RETURN_ZONE,
    EGameTag_RECALL = EGameTag_OVERLOAD,
    EGameTag_RECALL_OWED = EGameTag_OVERLOAD_OWED,
    EGameTag_TAG_HERO_POWER_DOUBLE = EGameTag_HERO_POWER_DOUBLE,
    EGameTag_TAG_AI_MUST_PLAY = EGameTag_AI_MUST_PLAY,
    EGameTag_OVERKILL = 380,

    EGameTag_DIVINE_SHIELD_READY = 314,

    EGameTag_EQUIPPED_WEAPON = 334,
};


@interface GameTag : NSObject

+ (BOOL)exists:(NSInteger)number;

+ (BOOL)tryParse:(NSString *)rawValue out:(EGameTag *)out;

@end
