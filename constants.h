/*
 * constants.h
 *
 *  Created on: Jan 11, 2010
 *      Author: Rob Shillingsburg
 */

#ifndef CONSTANTS_H_
#define CONSTANTS_H_

#define BUILD_VERSION "3.2.2.0.1"
#define BUILD_VERSION_STEM_LENGTH 7
#define BUILD_VERSION_MAX_LENGTH 14

#define KEY_SERVER_FILENAME "private_server_key.pem"
#define KEY_TOKEN_FILENAME "private_token_key.pem"
#define KEY_PERMANENT_TOKEN_PHRASE "***P3RM4N3NT_R0TMG-T0K3N***"

#define USE_LOCAL_APPENGINE false
#define USE_DEFAULT_GLOBALSETTINGS false //if true, application params will not
                                         //be refreshed from the google doc.
#define MAX_PLATFORM_NUM 5
#define MAX_QUEST_NUM 2
#define ASSASSIN_CLASS_TYPE 0x0320

#define MAP_BLOCK_SIZE 16
#define PLAYER_DIST_BUCKET_WIDTH MAP_BLOCK_SIZE

#define DEFAULT_PORT 2050
#define DEFAULT_SOCIAL_PORT 2051
#define DEFAULT_MONITORING_PORT 2052
#define MAX_WORLD_WIDTH 2048
#define MAPTEST_WORLD_WIDTH 1024
#define DEFAULT_REALM_PLAYER_LIMIT 85
#define DEFAULT_VAULT_CHEST_PRICE 500
#define DEFAULT_NEXUS_PLAYER_LIMIT 200
#define DEFAULT_GENERAL_PLAYER_LIMIT 200
#define DEFAULT_GAME_PLAYER_LIMIT 85
#define DEFAULT_MONSTER_LIMIT 22000
#define DEFAULT_MAX_POTION_STACKING 9
#define DEFAULT_POTION_PURCHASE_COOLDOWN 3000
#define DEFAULT_POTION_COST_COOLDOWN 10000
#define DEFAULT_POTION_COST_STRING "1;2;3;4;5;6;7;8;9;10"
#define DEFAULT_ADMIN_ONLY true
#define DEFAULT_EGG_DROP_RATE_MULTIPLIER .05
#define DEFAULT_SOULBIND_ALL_ITEMS true
#define MAX_AUDITFAIL_ALLOWED 10
#define PRE_RESTART_MINUTES 20
#define DEFAULT_MAX_OFFSET_BETWEEN_REPORTED_TIME 1600
#define DEFAULT_MAX_DISTANCE_BETWEEN_OWNER_AND_PROJECTILE 10
#define MIN_MS_BETWEEN_EMOTES 1390

#define DEFAULT_ENABLE_DUNGEON_MEMORY_LIMITER true
#define DEFAULT_DUNGEON_MEMORY_LIMITER_SAFETY_BUFFER 104857600
#define DEFAULT_DUNGEON_MEMORY_LIMITER_DUNGEON_MEMREQ 83886080
#define DEFAULT_DUNGEON_MEMORY_ESTIMATE_MULTIPLIER 2
#define DEFAULT_MEMORY_THRESHOLD_VALUE 0.7
#define DEFAULT_MEMORY_CRITICAL_THRESHOLD_VALUE 0.85
#define DEFAULT_MEMORY_THRESHOLD_INCREMENT_VALUE 104857600

#define NEXT_APP_ENGINE_REQUEST_TIME 10.0
#define TRADE_REQUEST_INTERVAL 10.0
#define TIER_BOOST_ODD_ONE 0.37
#define TIER_BOOST_ODD_TWO 0.12
#define TIER_BOOST_ODD_THR 0.01
#define TIER_BOOST_ONE 1
#define TIER_BOOST_TWO 2
#define TIER_BOOST_THR 3

#define BULLET_ID_RANGE 32767
#define SERVER_BULLET_ID_RANGE 256
#define SERVER_BULLET_ID_OFFSET 256

// * Inventory ---
#define DEFAULT_CHEST_SIZE 8
#define MAX_SEASONAL_CHEST_SIZE 32
#define SEASONAL_POTION_CHEST_ITEM_SIZE 4
#define ORIGINAL_INVENTORY_SIZE 12
#define BACKPACKED_INVENTORY_SIZE 20
#define EMPTY_INVENTORY_SLOT_ID -1
#define NO_ITEM_TYPE -1

#define ACCEL_ACTIVATE_SUCCESS 0
#define ACCEL_ACTIVATE_INVALID_SEASON 1
#define ACCEL_ACTIVATE_INVALID_ACCEL 2
#define ACCEL_ACTIVATE_INVALID_ITEM 3

#define BXP_LIMITER_DEFAULT_TIME 604800

// * Quickslots ---
#define QUICKSLOTS_BASE_ID 1000000
#define QUICKSLOTS_DEFAULT_COUNT 2
#define QUICKSLOTS_MAX_COUNT 3


#define HEALTH_POTION_ID 0xa22
#define MAGIC_POTION_ID 0xa23
#define BACKPACK_ID 0xc6c

#define REALM_GAMEID 0
#define TUTORIAL_GAMEID -1
#define NEXUS_GAMEID -2
#define RANDOM_REALM_GAMEID -3
#define VAULT_GAMEID -5
#define GUILDHALL_GAMEID -7
#define PETYARD_GAMEID -10
#define DAILY_QUEST_GAMEID -11
#define THIS_GAMEID -12
#define NEXUS_PORTAL_LIFETIME 10

#define CALLOUT_LOCK_SECONDS 5

#define GRAVESTONE_TIERS 11 // 10 Tiers + Tier 0

#define PERSON_TICK_SAVE_DELAY 60
#define MESSAGE_CULL_RANGE 30
#define VIEW_RADIUS 15
#define DASH_VIEW_RADIUS 21
#define VIEW_MAX_RADIUS 25
#define VIEW_EXTENSION_DURATION_MS 500
#define VIEW_EXTENSION_SPEED_THRESHOLD 0.013f
#define VIEW_RADIUS_SQ (VIEW_RADIUS * VIEW_RADIUS)
#define ABILITY_RADIUS_SQ 169
#define MAX_DIST 40  // don't bother looking for players beyond this distance
#define MAX_MSGS_PER_TICK 25
#define MS_BETWEEN_TELEPORT 10000  // See Player.MS_BETWEEN_TELEPORT in client
#define TELEPORT_WAIT_SECONDS 120  //Delay on teleport between different nexus
#define TRADE_DIST 15
#define TRADE_TIME_SEC 60
#define FREQ_STAT_DIFF_THRESHOLD 5
#define GUILD_RANK_CHANGE_COOLDOWN 300
#define UPDATE_RADIUS 14
#define NEARBY_PLAYER_PORTAL_MAX_DISALLOW_RADIUS 6.0f // max Radius for (user-created) portal blocking objects to disallow portal creation in.
#define NEARBY_PLAYER_PORTAL_DEFAULT_DISALLOW_RADIUS 4.5f
#define PLAYER_PORTAL_TO_PORTAL_DISALLOW_SQDIST 2.25f // distance for which an intergameportal object will block player created portals (1.5)

#define LEVEL_CAP 20
#define MIN_KILLS_PER_LEVEL 10.0
#define QUEST_EXP_MULT 2.0 // Bonus exp for killing quest monsters when below level 20, applies after MIN_KILLS_PER_LEVEL calculations
#define XP_BOOST_LEVEL_GATE 20
#define LOOT_DROP_BOOST_RATE 1.5
#define LOOT_BAG_WEIGHTS {0,1,2,3,4,5,9,6,7,8}
#define LOOT_DAMAGE_THRESHOLD 0.002
#define BUFF_HP_HEALING_RATE 20.0
#define BUFF_MP_ENERGIZED_RATE 10.0
#define GLOBAL_USEPORTALMESSAGE_LIMIT_PER_TICK 3
#define DATA_JM_BASE "../AssembleeData/data/jm/"

#define SERVER_KEY "GBANY2LmXFD4sPMQGl"
#define INTERSERVER_KEY 0x2791ef43


//#define DEBUG_CONNECTION_KEY

#define BUILD_STATUS "build/maintenanceStatus"
#define CHAR_GET "char/get"
#define CHAR_QUEUE_UPDATE "char/queueUpdate"
#define CHAR_CREATE "char/create"
#define CHAR_PURCHASE "char/purchase"
#define CHAR_PURCHASE_REFINE "char/purchaseRefine"
#define ACCOUNT_ADDSTAR "account/addStar"
#define ACCOUNT_SERVERVERIFY "account/verifyAccessToken"
#define ACCOUNT_VERIFY_ACCESS "account/verifyAccess"
#define ACCOUNT_REMSTAR "account/remStar"
#define ACCOUNT_ADDIGNORE "account/addIgnore"
#define ACCOUNT_REMIGNORE "account/remIgnore"
#define ACCOUNT_MUTE "account/mute"
#define ACCOUNT_UNMUTE "account/unmute"
#define ACCOUNT_UNLOCKSLOT "account/unlockSlot"
#define ACCOUNT_LISTACCOUNTS "account/listUpdate"
#define CLAIM_LOGIN_REWARD "account/claimLoginReward"
#define BAN_LOG "account/ban"
#define USE_ITEM "log/useItem"
#define LOG_TRADE "log/trade"
#define LOG_LOST_ITEM "item/itemLost"
#define GET_LOST_ITEMS "item/lastLost"
#define LOG_ITEM_FUSE "log/itemFuse"
#define LOG_MONSTER_LOOT "log/monsterloot"
#define LOG_REALM_CLOSE "log/realmclose"
#define VAULT_CHEST_PURCHASE "account/purchaseVaultChest"
#define POTION_CHEST_PURCHASE "account/purchasePotionChest"
#define ACCOUNT_SETNAME "account/setName"
#define GUILD_CREATE "guild/create"
#define GUILD_REMOVE "guild/removeMember"
#define GUILD_ADD "guild/addMember"
#define SPAMER_LOG "account/spammer"
#define GUILD_CHANGE_RANK "guild/changeRank"
#define GUILD_PURCHASE "guild/purchase"
#define GUILD_GETHALL "guild/getHall"
#define CHAR_RESKIN "char/reskin"
#define CHAR_RETITLE "char/retitle"
#define ACCOUNT_SETGRAVESTONE "account/setGravestone"
#define CHAR_UNLOCKCUSTOMIZATION "char/unlockCustomization"
#define ACCOUNT_PURCHASECUSTOMIZATION "account/purchaseCustomization"
#define CHAR_RECYCLESKIN "char/recycleSkin"
#define SUPPORT_CAMPAIGN_GRANT_POINTS "supportCampaign/grant"
#define CHAR_UNLOCKPETSKIN "char/unlockPetSkin"
#define CREATE_PET "pet/createPet"
#define CREATE_SPECIFIC_PET "pet/forceCreatePet"
#define PET_GETLIST "pet/getPetList"
#define PET_YARDUPGRADE "pet/yardupgrade"
#define PET_FUSE "pet/fuse"
#define PET_FEED "pet/feed"
#define PET_FAVOR "pet/favor"
#define PET_CHANGE_FORM "pet/changeForm"
#define PET_CHANGE_SKIN "pet/changeSkin"
#define CHAR_CHANGE_PET "char/changePet"
#define CHAR_DELETE_PET "char/deletePet"
#define CHAR_FORGE_ITEM "char/forgeItem"
#define EMAIL_ALART "realmsitter/emailAlert1"
#define CRASH_NOTIFICATION "realmsitter/crashNotification"
#define DAILY_QUEST_FETCH "dailyquest/fetchDailyQuest"
#define DAILY_QUEST_REDEEM "dailyquest/redeemQuestReward"
#define DAILY_QUESTS_RESET "dailyquest/resetDailyQuests"
#define REQUEST_FRIEND "friends/requestFriend"
#define EVENT_TRACK "log/earlyGameEvent"
#define POWER_UP_TRACK "char/powerUp"
#define POWER_UP_RESET "char/powerUpReset"
#define REDEEM_POWERUP_ITEM "account/claimPowerUpReward"
#define PURCHASE_ITEMS "shop/purchaseItemsSocket"
#define PURCHASE_EMOTE "account/purchaseEmote"
#define SEASONALITY_INFO "season/serverSeasonalityInfo"
#define CLAIM_BATTLE_PASS_MILESTONE "season/battlePass/claim"
#define BOOST_BATTLE_PASS_MILESTONE "season/battlePass/boost"
#define CHAR_ACTIVATE_ACCELERATOR "char/activateAccelerator"
#define CHAR_UPDATE_ACCELERATOR "char/updateAccelerator"

#define APP_SETTINGS_SERVICE "app/serverStaticData?dataType=AppSettings"
#define PARAMS_FILENAME "params.csv"
#define STORE_DATA_SERVICE "app/serverStaticData?dataType=StoreMerchandise"
#define STORE_FILENAME "store.csv"
#define FREE_VAULT_ITEMS_SERVICE "app/serverStaticData?dataType=FreeVaultItems"
#define FREE_VAULT_ITEM_FILENAME "freeVaultItem.csv"

#define PET_ABILITY_CURVE_SERVICE "app/serverStaticData?dataType=PetAbilityCurve"
#define PET_ABILITY_CURVE_FILENAME "petAbilityTable.csv"
#define UGC_KEYS_DATA_SERVICE "ugc/getUGCKeysXML"
#define UGC_DUNGEON_DATA_SERVICE "ugc/getUGCDungeonsXML"
#define UGC_MAP_DATA_SERVICE "ugc/getUGCMapsDataXML"
#define GAME_MAP_SETTINGS_SERVICE "dungeonEvent/getEvents?"
#define GAME_MAP_SETTINGS_FILENAME "gameMapSettings.csv"
#define GAME_EVENT_SETTINGS_SERVICE "events/getEventSettings?"
#define GAME_EVENT_SETTINGS_FILENAME "eventSettings.xml"
#define MYSTERY_KEYS_SERVICE "app/serverStaticData?dataType=MysteryKeys"
#define MYSTERY_KEYS_FILE "mysteryKeySettings.csv"
#define MYSTERY_DYES_SERVICE "app/serverStaticData?dataType=MysteryDyes"
#define MYSTERY_DYES_FILE "mysteryDyeSettings.csv"
#define POWER_UP_DATA_SERVICE "app/serverStaticData?dataType=PowerUpData"
#define POWER_UP_DATA_FILE "powerup.csv"
#define KEY_REFINEMENTS_SERVICE "app/serverStaticData?dataType=RefineKeys"
#define KEY_REFINEMENTS_FILE "refineSettings.csv"

#define WORD_FILTER_SERVICE "app/serverStaticData?dataType=WordFilter"
#define WORD_FILTER_FILE "filterList.csv"
#define SPAM_LIST_SERVICE "app/serverStaticData?dataType=SpamList"
#define SPAM_LIST_FILE "spamList.csv"
#define SPAM_WHITELIST_SERVICE "app/serverStaticData?dataType=SpamWhitelist"
#define SPAM_WHITELIST_FILE "spamWhitelist.csv"
#define SPAM_BLACKLIST_SERVICE "app/serverStaticData?dataType=SpamBlacklist"
#define SPAM_BLACKLIST_FILE "spamBlacklist.csv"
#define SPAM_FILTER_SETTINGS_SERVICE "app/serverStaticData?dataType=SpamFilterSettings"
#define SPAM_FILTER_SETTINGS_FILE "spamFilterSettings.csv"
#define BLOCKED_IP_LIST_URL "app/serverStaticData?dataType=SocketBanList"
#define BLOCKED_IP_LIST "blockedIpRangesList.csv"
#define IP_BAN_WHITELIST_SERVICE "app/serverStaticData?dataType=IpBanWhitelist"
#define ANTICHEAT_REPORT_IP_BAN "antiCheat/reportIpBan"

#define ORYX_CHAT_NAME "#Oryx the Mad God"
#define ERROR_CHAT_NAME "*Error*"
#define GUILD_CHAT_NAME "*Guild*"
#define PORTAL_POSTFIX " Portal"

#define NO_MAP_DIFFICULTY -1.f
#define MIN_MAP_DIFFICULTY 0
#define MAX_MAP_DIFFICULTY 5

// keep in sync with FameUtil.as
#define NUM_STARS 5
#define STARS {20, 500, 1500, 5000, 15000}

    // keep in sync with Player.as
#define MAX_SINK_LEVEL 18
#define HEALTH_POTION_ID 0xa22

#define GAME_NAME_PETYARD "Pet Yard"
#define GAME_NAME_NEXUS "Nexus"
#define GAME_NAME_CLOTH_BAZAAR "Cloth Bazaar"
#define GAME_NAME_VAULT "Vault"

#define GAME_NAME_TUTORIAL "Exalted Tutorial"
#define GAME_NAME_QUEST_CENTER "Daily Quest Room"
#define GAME_NAME_REALM "Realm of the Mad God"
#define GAME_NAME_GUILD_1 "Guild Hall"
#define GAME_NAME_GUILD_2 "Guild Hall 2"
#define GAME_NAME_GUILD_3 "Guild Hall 3"
#define GAME_NAME_GUILD_4 "Guild Hall 4"

#define TOP_PETYARD_TYPE 5
#define PET_REGION "PetRegion"
#define MAX_NUMBER_PETS 50
#define MAX_LOST_ITEMS_CACHE 10
#define BERSERK_BURST_MIN_DELAY_MULT 0.75f
#define SEASONAL_CHAR_BXP_BOOST 0.1f

#define MAX_PET_ABILITY_LEVEL 100
#define MIN_PET_ABILITY_LEVEL 1

#define USE_DDOS_PROTECTION

#define FLASH_CLIENT_TOKEN "XTeP7hERdchV5jrBZEYNebAqDPU6tKU6"
#define OLD_CLIENT_TOKEN "8bV53M5ysJdVjU4M97fh2g7BnPXhefnc"
#define UNITY_CLIENT_TOKEN "8bV53M5ysJdVjU4M97fg3g7BnPXhefnc"

#define MAX_TIME_NULL_OBJECT 100

#include "containers.h"
#include "util.h"

static const float WISDOM_FACTOR_MAX = 150.0;
static const float WISDOM_FACTOR_MIN = 30.0;
static const float WISDOM_INI_MOD = 1.0;
static const unsigned short MAX_DAMAGE = 10000;
static const int SUPPORTER_RANK_1 = 1000;
static const int SUPPORTER_RANK_2 = 6000;
static const int SUPPORTER_RANK_3 = 13500;
static const int SUPPORTER_RANK_4 = 24000;
static const int SUPPORTER_RANK_5 = 39000;
static const int SUPPORTER_RANK_6 = 60000;
static const int SUPPORTER_RANK_7 = 100000;
static const int SUPPORTER_GS_START_TYPE = 356;
static const float VITALITY_COMBAT_DUR = 7.0;
static const float VITALITY_COMBAT_MOD = 0.04;

static const std::map<int, DecaVector<int>> RECYCLE_SKIN_GIFTS_BY_TIER = {
        {1, {0x2F11}},
        {2, {0x2F17, 0x2F0B}},
        {3, {0x2F17, 0x2F17, 0x2F05}},
        {4, {0x2F17, 0x2F17, 0x2F13}},
        {5, {0x2F17, 0x2F17, 0x2F17, 0x2F17, 0x2F05}}
};

enum ObjectStatCode {
  MAX_HP_STAT = 0,
  HP_STAT = 1,
  SIZE_STAT = 2,
  MAX_MP_STAT = 3,
  MP_STAT = 4,
  NEXT_LEVEL_EXP_STAT = 5,
  EXP_STAT = 6,
  LEVEL_STAT = 7,
  INVENTORY_0_STAT = 8,
  INVENTORY_1_STAT = 9,
  INVENTORY_2_STAT = 10,
  INVENTORY_3_STAT = 11,
  INVENTORY_4_STAT = 12,
  INVENTORY_5_STAT = 13,
  INVENTORY_6_STAT = 14,
  INVENTORY_7_STAT = 15,
  INVENTORY_8_STAT = 16,
  INVENTORY_9_STAT = 17,
  INVENTORY_10_STAT = 18,
  INVENTORY_11_STAT = 19,
  ATTACK_STAT = 20,
  DEFENSE_STAT = 21,
  SPEED_STAT = 22,
  NOT_USED_23 = 23,  // only for cross-game portals
  SEASONAL_CHAR_STAT = 24,
  TEXTURE_STAT = 25,
  VITALITY_STAT = 26,
  WISDOM_STAT = 27,
  DEXTERITY_STAT = 28,
  CONDITION_STAT = 29,
  NUM_STARS_STAT = 30,
  NAME_STAT = 31,
  TEX1_STAT = 32,
  TEX2_STAT = 33,
  MERCHANDISE_TYPE_STAT = 34,
  CREDITS_STAT = 35,
  MERCHANDISE_PRICE_STAT = 36,
  ACTIVE_STAT = 37, // Nexus portals
  ACCOUNT_ID_STAT = 38,
  FAME_STAT = 39,
  MERCHANDISE_CURRENCY_STAT = 40,
  CONNECT_STAT = 41,
  MERCHANDISE_COUNT_STAT = 42,
  MERCHANDISE_MINS_LEFT_STAT = 43,
  MERCHANDISE_DISCOUNT_STAT = 44,
  MERCHANDISE_RANK_REQ_STAT = 45,
  MAX_HP_BOOST_STAT = 46,
  MAX_MP_BOOST_STAT = 47,
  ATTACK_BOOST_STAT = 48,
  DEFENSE_BOOST_STAT = 49,
  SPEED_BOOST_STAT = 50,
  VITALITY_BOOST_STAT = 51,
  WISDOM_BOOST_STAT = 52,
  DEXTERITY_BOOST_STAT = 53,
  OWNER_ACCOUNT_ID_STAT = 54,
  RANK_REQUIRED_STAT = 55,
  NAME_CHOSEN_STAT = 56,
  CURR_FAME_STAT = 57,
  NEXT_CLASS_QUEST_FAME_STAT = 58,
  LEGENDARY_RANK_STAT = 59,
  SINK_LEVEL_STAT = 60,
  BXP_STAT = 61,
  GUILD_NAME_STAT = 62,
  GUILD_RANK_STAT = 63,
  BREATH_STAT = 64,
  XP_BOOSTED_STAT = 65,
  XP_TIMER_STAT = 66,
  LD_TIMER_STAT = 67,
  LT_TIMER_STAT = 68,
  LEGACY_HEALTH_POTION_STACK_STAT = 69,
  LEGACY_MAGIC_POTION_STACK_STAT = 70,
  BACKPACK_0_STAT = 71,
  BACKPACK_1_STAT = 72,
  BACKPACK_2_STAT = 73,
  BACKPACK_3_STAT = 74,
  BACKPACK_4_STAT = 75,
  BACKPACK_5_STAT = 76,
  BACKPACK_6_STAT = 77,
  BACKPACK_7_STAT = 78,
  HASBACKPACK_STAT = 79,
  UNIQUE_INV_STAT = 80,
  PET_INSTANCEID_STAT = 81,
  PET_NAME_STAT = 82,
  PET_TYPE_STAT = 83,
  PET_RARITY_STAT = 84,
  PET_MAXABILITYPOWER_STAT = 85,
  PET_FAMILY_STAT = 86,
  PET_FIRSTABILITY_POINT_STAT = 87,
  PET_SECONDABILITY_POINT_STAT = 88,
  PET_THIRDABILITY_POINT_STAT = 89,
  PET_FIRSTABILITY_POWER_STAT = 90,
  PET_SECONDABILITY_POWER_STAT = 91,
  PET_THIRDABILITY_POWER_STAT = 92,
  PET_FIRSTABILITY_TYPE_STAT = 93,
  PET_SECONDABILITY_TYPE_STAT = 94,
  PET_THIRDABILITY_TYPE_STAT = 95,
  NEW_CON_STAT = 96,
  FORTUNE_TOKEN_STAT = 97,
  SUPPORTER_POINTS_STAT = 98,
  SUPPORTER_STAT = 99,
  TIME_JOINED_STAT = 101, // Unix timestamp when player joined current game
  PROJECTILE_SPEED_MULT = 102,
  PROJECTILE_LIFE_MULT = 103,
  PORTAL_OPEN_SERVER_TIME_STAT = 104,
  POWERUP_EXTRA_ATTACK_STAT = 105,
  POWERUP_EXTRA_DEFENSE_STAT = 106,
  POWERUP_EXTRA_SPEED_STAT = 107,
  POWERUP_EXTRA_VITALITY_STAT = 108,
  POWERUP_EXTRA_WISDOM_STAT = 109,
  POWERUP_EXTRA_DEXTERITY_STAT = 110,
  POWERUP_EXTRA_MAX_HP_STAT = 111,
  POWERUP_EXTRA_MAX_MP_STAT = 112,
  POWERUP_DAMAGE_MULT_STAT = 113,
  OWNER_OBJECT_ID_STAT = 114,
  GRAVESTONE_OWNER_OBJECT_ID_STAT = 115,
  QUICKSLOT_STAT_0 = 116,
  QUICKSLOT_STAT_1 = 117,
  QUICKSLOT_STAT_2 = 118,
  HAS3QUICKSLOTS_STAT = 119,
  FORGE_ENERGY_STAT = 120,
  DUNGEON_MODIFIERS_STAT = 121,
  DIFFICULTY_STAT = 122,
  FREE_123 = 123,
  FREE_124 = 124,
  STYLE_STAT = 125,
  STYLE_TIMESTAMP_STAT = 126,

  // IF ADDING A STRING STAT, EDIT Stat::IsStringStat()
  NUM_STATS
};

// Only used for getter function
#define POWERUP_ARMOR_BONUS_STAT 256
#define POWERUP_XP_BOOST_STAT 257

enum SpecialDropRollMode {
    ROLL_PER_DEATH = 0,
    ROLL_PER_KILLER = 1
};

static const std::vector<unsigned int> StatWhitelistData {
        NAME_CHOSEN_STAT,
        ACCOUNT_ID_STAT,
        MAX_MP_STAT,
        MP_STAT,
        NUM_STARS_STAT,
        MAX_HP_STAT,
        HP_STAT,
        SIZE_STAT,
        LEVEL_STAT,
        INVENTORY_0_STAT,
        INVENTORY_1_STAT,
        INVENTORY_2_STAT,
        INVENTORY_3_STAT,
        INVENTORY_4_STAT,
        INVENTORY_5_STAT,
        INVENTORY_6_STAT,
        INVENTORY_7_STAT,
        UNIQUE_INV_STAT,
        CONDITION_STAT,
        NEW_CON_STAT,
        NAME_STAT,
        TEX1_STAT,
        TEX2_STAT,
        FAME_STAT,
        CURR_FAME_STAT,
        LEGENDARY_RANK_STAT,
        GUILD_NAME_STAT,
        GUILD_RANK_STAT,
        TEXTURE_STAT,
        PET_INSTANCEID_STAT,
        PET_NAME_STAT,
        PET_TYPE_STAT,
        PET_RARITY_STAT,
        PET_MAXABILITYPOWER_STAT,
        SUPPORTER_POINTS_STAT,
        SUPPORTER_STAT,
        TIME_JOINED_STAT,
        PROJECTILE_SPEED_MULT,
        PROJECTILE_LIFE_MULT,
        GRAVESTONE_OWNER_OBJECT_ID_STAT,
        OWNER_OBJECT_ID_STAT,
        POWERUP_EXTRA_MAX_HP_STAT,
        POWERUP_EXTRA_MAX_MP_STAT,
        MAX_HP_BOOST_STAT,
        MAX_MP_BOOST_STAT,
        DEXTERITY_STAT,
        DUNGEON_MODIFIERS_STAT,
        STYLE_STAT,
        STYLE_TIMESTAMP_STAT,
        SEASONAL_CHAR_STAT,
        MERCHANDISE_TYPE_STAT,
        MERCHANDISE_PRICE_STAT,
        MERCHANDISE_CURRENCY_STAT,
        MERCHANDISE_COUNT_STAT,
        MERCHANDISE_MINS_LEFT_STAT,
        MERCHANDISE_DISCOUNT_STAT,
        MERCHANDISE_RANK_REQ_STAT
};

//Use bit mask here: so values like 2^X: 1, 2, 4, 8, etc. Keep in sync with frontend
enum SupporterFlags{
	HAS_GLOW = 1,
	HAS_SPECIAL_NAME_COLOR = 2
};

struct ObjectStat;  //  <- F3 in here to find it

enum EarlyGameEventEnum {
  NOTHING              = 0,
  START_TUTORIAL       = 1,
  FIRST_PORTAL_USE     = 2,
  END_TUTORIAL         = 3,
  SECOND_CHAR_CREATION = 4,
  FIRST_CHAR_DEATH     = 5,
  FIRST_NEXUS          = 6,
  FIRST_DUNGEON        = 7,
  NUM_EVENTS,
  
  INVALID_EVENT = 0xff
};

enum ConditionEffectEnum {
  NOTHING_CONDEFFECT       = 0,
  DEAD_CONDEFFECT          = 1,
  QUIET_CONDEFFECT         = 2,
  WEAK_CONDEFFECT          = 3,
  SLOWED_CONDEFFECT        = 4,
  SICK_CONDEFFECT          = 5,
  DAZED_CONDEFFECT         = 6,
  STUNNED_CONDEFFECT       = 7,
  BLIND_CONDEFFECT         = 8,
  HALLUCINATING_CONDEFFECT = 9,
  DRUNK_CONDEFFECT         = 10,
  CONFUSED_CONDEFFECT      = 11,
  STUN_IMMUNE_CONDEFFECT   = 12,
  INVISIBLE_CONDEFFECT     = 13,
  PARALYZED_CONDEFFECT     = 14,
  SPEEDY_CONDEFFECT        = 15,
  BLEEDING_CONDEFFECT      = 16,
  ARMOR_BROKEN_IMMUNE_CONDEFFECT  = 17,
  HEALING_CONDEFFECT       = 18,
  DAMAGING_CONDEFFECT      = 19,
  BERSERK_CONDEFFECT       = 20,
  IN_COMBAT_CONDEFFECT     = 21,
  STASIS_CONDEFFECT        = 22,
  STASIS_IMMUNE_CONDEFFECT = 23,
  INVINCIBLE_CONDEFFECT    = 24,
  INVULNERABLE_CONDEFFECT  = 25,
  ARMORED_CONDEFFECT       = 26,
  ARMORBROKEN_CONDEFFECT   = 27,
  HEXED_CONDEFFECT         = 28,
  NINJA_SPEEDY_CONDEFFECT   = 29,
  UNSTABLE_CONDEFFECT       = 30,
  DARKNESS_CONDEFFECT       = 31,
  SLOWED_IMMUNE_CONDEFFECT  = 32,
  DAZED_IMMUNE_CONDEFFECT   = 33,
  PARALYZED_IMMUNE_CONDEFFECT = 34,
  PETRIFY_CONDEFFECT        = 35,
  PETRIFY_IMMUNE_CONDEFFECT = 36,
  PET_EFFECT_ICON_CONDEFFECT = 37,
  CURSE_CONDEFFECT = 38,
  CURSE_IMMUNE_CONDEFFECT = 39,
  HP_BOOST_CONDEFFECT = 40,
  MP_BOOST_CONDEFFECT = 41,
  ATT_BOOST_CONDEFFECT = 42,
  DEF_BOOST_CONDEFFECT = 43,
  SPD_BOOST_CONDEFFECT = 44,
  VIT_BOOST_CONDEFFECT = 45,
  WIS_BOOST_CONDEFFECT = 46,
  DEX_BOOST_CONDEFFECT = 47,
  SILENCED_CONDEFFECT = 48,
  EXPOSED_CONDEFFECT = 49,
  ENERGIZED_CONDEFFECT = 50,
  HP_DEBUFF_CONDEFFECT = 51,
  MP_DEBUFF_CONDEFFECT = 52,
  ATT_DEBUFF_CONDEFFECT = 53,
  DEF_DEBUFF_CONDEFFECT = 54,
  SPD_DEBUFF_CONDEFFECT = 55,
  VIT_DEBUFF_CONDEFFECT = 56,
  WIS_DEBUFF_CONDEFFECT = 57,
  DEX_DEBUFF_CONDEFFECT = 58,
  INSPIRED_CONDEFFECT = 59,
  RANGE_DEBUFF_CONDEFFECT = 60,

  //Not a single key-value gap is allowed ABOVE this line

	NUM_CONDEFFECTS,

  INVALID_CONDEFFECT       = 0xFF,
};

enum ProjectilePathType {
	STRAIGHT,
	WAVY,
	PARAMETRIC,
	BOOMERANG,
	LASER,
	CURVY,
	CIRCLE
};

enum AimType {
  TARGETED = 0,
  AUTO = 1,
  FORWARD = 2,
  OBJECT = 3,
  NUM_SHOOT_TYPES
};

enum SlotTypes {
  ALL_SLOT = 0,
  SWORD_SLOT = 1,
  DAGGER_SLOT = 2,
  BOW_SLOT = 3,
  TOME_SLOT = 4,
  SHIELD_SLOT = 5,
  LEATHER_SLOT = 6,
  PLATE_SLOT = 7,
  WAND_SLOT = 8,
  RING_SLOT = 9,
  POTION_SLOT = 10, // NB: used in game.cc
  SPELL_SLOT = 11,
  SEAL_SLOT = 12,
  CLOAK_SLOT = 13,
  ROBE_SLOT = 14,
  QUIVER_SLOT = 15,
  HELM_SLOT = 16,
  STAFF_SLOT = 17,
  POISON_SLOT = 18,
  SKULL_SLOT = 19,
  TRAP_SLOT = 20,
  ORB_SLOT = 21,
  PRISM_SLOT = 22,
  SCEPTER_SLOT = 23,
  KATANA_SLOT = 24,
  SHURIKEN_SLOT = 25,
  PET_EGG_SLOT = 26,
  NEW_ABIL_SLOT = 27,
  LUTE_SLOT = 28,
  MACE_SLOT = 29,
  SHEATH_SLOT = 30,
  // Keep in sync with ItemConstants.as

  NUM_SLOT_TYPES
};

enum PetRarity {
	COMMON_RARITY = 0,
	UNCOMMON_RARITY = 1,
	RARE_RARITY = 2,
	LEGENDARY_RARITY = 3,
	DIVINE_RARITY = 4,
  NUMS_OF_RARITY
};

// The way in which an item is being used (used in processing of UseItemMessage)
enum UseType {
  DEFAULT_USETYPE = 0,
  START_USETYPE = 1,
  END_USETYPE = 2
};

enum SlotGroups {
  NO_GROUP,
  POTION_GROUP,
  WEAPON_GROUP,
  CLASS_SPECIAL_GROUP,
  ARMOR_GROUP,
  RING_GROUP,
  PET_EGG_GROUP,

  NUM_SLOT_GROUPS
};

enum GameType {
  REALM_GAME,
  DUNGEON_GAME,
  MAPTEST_GAME,

  NUM_GAME_TYPES
};

enum CurrencyType {
  INVALID_CURRENCY = -1,
  GOLD_CURRENCY = 0,
  FAME_CURRENCY = 1,

  NUM_CURRENCIES
};

enum PlayFormID {
  PLATFORM_UNKNOWN = 0,
  PLATFORM_ROTMG = 1,
  PLATFORM_STEAM = 2,
  PLATFORM_KONGREGATE = 3,
  PLATFORM_KABAM = 4
};

enum class UserSettingID : int {
    NONE = 0,
    ALLY_SHOTS_ENABLED = 1
};

enum class UiActionType : uint8_t {
  Default,
  Quick,
  Count
};

//Keep in sync with appengine constants!
enum ECustomizationCategory {
	CUSTOMIZATION_SKIN = 1,
	CUSTOMIZATION_PET_SKIN = 2,
	CUSTOMIZATION_TITLE = 3,
	CUSTOMIZATION_GRAVESTONE = 4,
	CUSTOMIZATION_EMOTE = 5
};

#define CONSIDER(msgType) case msgType: return #msgType;
#define RCONSIDER(str, msgType) if (!strcasecmp(str, #msgType)) return msgType;
#define ABS(x) ((x) > 0 ? (x) : -(x))

#define TO_DEGREES (180.0 / PI)
#define TO_RADIANS (PI / 180.0)
#define RADIANS_CHECK_ERROR_THRESHOLD 0.001

#endif /* CONSTANTS_H_ */
