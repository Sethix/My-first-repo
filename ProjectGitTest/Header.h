#pragma once


extern int inputInt = 0;

extern char inputString[64] = "";


extern int currentPlayers = 0;


const int MAX_PLAYERS = 4;

const int BAG_SIZE = 5;


const int BASE_WARRIOR_STRENGTH = 14;
const int BASE_MAGE_STRENGTH = 6;
const int BASE_ARCHER_STRENGTH = 7;
const int BASE_ROGUE_STRENGTH = 10;
const int BASE_NINJA_STRENGTH = 12;
const int BASE_SPELLBLADE_STRENGTH = 12;
const int BASE_MERCHANT_STRENGTH = 10;

const int BASE_WARRIOR_INTELLIGENCE = 6;
const int BASE_MAGE_INTELLIGENCE = 14;
const int BASE_ARCHER_INTELLIGENCE = 7;
const int BASE_ROGUE_INTELLIGENCE = 10;
const int BASE_NINJA_INTELLIGENCE = 10;
const int BASE_SPELLBLADE_INTELLIGENCE = 12;
const int BASE_MERCHANT_INTELLIGENCE = 10;

const int BASE_WARRIOR_DEXTERITY = 10;
const int BASE_MAGE_DEXTERITY = 8;
const int BASE_ARCHER_DEXTERITY = 14;
const int BASE_ROGUE_DEXTERITY = 10;
const int BASE_NINJA_DEXTERITY = 12;
const int BASE_SPELLBLADE_DEXTERITY = 10;
const int BASE_MERCHANT_DEXTERITY = 10;

const int BASE_WARRIOR_LUCK = 6;
const int BASE_MAGE_LUCK = 6;
const int BASE_ARCHER_LUCK = 10;
const int BASE_ROGUE_LUCK = 14;
const int BASE_NINJA_LUCK = 10;
const int BASE_SPELLBLADE_LUCK = 6;
const int BASE_MERCHANT_LUCK = 6;

const int BASE_WARRIOR_WISDOM = 6;
const int BASE_MAGE_WISDOM = 12;
const int BASE_ARCHER_WISDOM = 10;
const int BASE_ROGUE_WISDOM = 10;
const int BASE_NINJA_WISDOM = 14;
const int BASE_SPELLBLADE_WISDOM = 12;
const int BASE_MERCHANT_WISDOM = 10;

const int BASE_WARRIOR_CHARISMA = 8;
const int BASE_MAGE_CHARISMA = 8;
const int BASE_ARCHER_CHARISMA = 8;
const int BASE_ROGUE_CHARISMA = 6;
const int BASE_NINJA_CHARISMA = 10;
const int BASE_SPELLBLADE_CHARISMA = 10;
const int BASE_MERCHANT_CHARISMA = 14;


enum Profession : int
{
	Undefined = 0,
	Warrior = 1,
	Archer = 2,
	Mage = 3,
	Rogue = 4,
	Ninja = 5,
	Spellblade = 6,
	Merchant = 7
};

enum ArmorType : int
{
	NoArmor = 0,
	PhysicalArmor = 1,
	MagicalArmor = 2,
	RangedArmor = 3,
	PhysicalMagicalArmor = 4,
	PhysicalRangedArmor = 5,
	MagicalRangedArmor = 6
};

enum DamageType : int
{
	NoDamage = 0,
	PhysicalDamage = 1,
	MagicalDamage = 2,
	RangedDamage = 3
};

struct Stats
{
	int strength;
	int intelligence;
	int dexterity;
	int luck;
	int charisma;
	int wisdom;
};

struct Defense
{
	int physicalArmor;
	int rangedArmor;
	int magicalArmor;
};

struct Offense
{
	int physicalDamage;
	int rangedDamage;
	int magicalDamage;
};

struct Item
{
	char name[32];
	bool equippable;
	bool consumable;
	ArmorType armorType;
	DamageType damageType;
	int goldValue;
	int potency;
	int durability;
};

struct Skill
{
	char name[16];
	int cost;
	DamageType type;
};

struct Player
{
	
	char name[16];
	int playerID;

	int level;
	int exp;
	Profession prof;

	int health;
	int mana;
	int stamina;
	int speed;
	int knowledge;

	Stats characterStats;
	Defense armorStat;
	Offense damageStat;

	Skill skills[4];

	Item inventory[BAG_SIZE];
	Item equippedArmor;
	Item equippedWeapon;

	int gold;

};

struct Enemy
{

	char name[16];

	int level;
	int exp;

	int health;
	int mana;
	int stamina;

	Defense armorStat;
	Offense damageStat;

	Item itemReward;

	int goldReward;
};

Player createPlayer(int playerNum);

Profession profCheck(char profInput[]);

Stats rollStats(Profession characterProf);

//Item addItem(int itemID, int quantity);

Player calculateStats(Player player);