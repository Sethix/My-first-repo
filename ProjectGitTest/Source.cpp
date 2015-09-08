#include <iostream>
#include <ctime>
#include "Header.h"

int main()
{

	srand(time(NULL));

	Player players[MAX_PLAYERS];

	std::cout << "Welcome to a generic text based adventure game with no story!" 
		<< std::endl
		<< std::endl
		<< "Please input the number of players. [Max = "
		<< MAX_PLAYERS
		<< "]"
		<< std::endl;


	std::cin >> inputInt;

	currentPlayers = inputInt;


	for (int i = 0; i < currentPlayers; ++i) 
		players[i] = createPlayer(i + 1);





	system("Pause");

	return 0;
}

Player createPlayer(int playerNum)
{
	Player tempPlayer;

	int tempInt = 0;

	bool tempBool = true;

	tempPlayer.playerID = playerNum;

	tempPlayer.level = 0;

	tempPlayer.exp = 0;


	std::cout << "Please select a class player "
		<< playerNum
		<< "!"
		<< std::endl
		<< "[Warrior]"
		<< std::endl
		<< "[Archer]"
		<< std::endl
		<< "[Mage]"
		<< std::endl
		<< "[Rogue]"
		<< std::endl
		<< "[Ninja]"
		<< std::endl
		<< "[Spellblade]"
		<< std::endl
		<< "[Merchant]"
		<< std::endl
		<< std::endl;

	while (tempBool)
	{
		std::cin >> inputString;


		tempPlayer.prof = profCheck(inputString);

		std::cout << std::endl;

		switch (tempPlayer.prof)
		{
		case Undefined:

			std::cout << "Invalid choice. Please try again." << std::endl;

			break;
		case Warrior:

			std::cout << "You have picked [Warrior]!" << std::endl << std::endl;
			tempBool = false;

			break;
		case Archer:

			std::cout << "You have picked [Archer]!" << std::endl << std::endl;
			tempBool = false;

			break;
		case Mage:

			std::cout << "You have picked [Mage]!" << std::endl << std::endl;
			tempBool = false;

			break;
		case Rogue:

			std::cout << "You have picked [Rogue]!" << std::endl << std::endl;
			tempBool = false;

			break;
		case Ninja:

			std::cout << "You have picked [Ninja]!" << std::endl << std::endl;
			tempBool = false;

			break;
		case Spellblade:

			std::cout << "You have picked [Spellblade]!" << std::endl << std::endl;
			tempBool = false;

			break;
		case Merchant:

			std::cout << "You have picked [Merchant]!" << std::endl << std::endl;
			tempBool = false;

			break;
		default:

			std::cout << "ERROR" << std::endl;

			break;
		}
	}

	tempPlayer.characterStats = rollStats(tempPlayer.prof);

	tempPlayer = calculateStats(tempPlayer);



	return tempPlayer;
}

Profession profCheck(char profInput[])
{
	if (strcmp(profInput,"Warrior") == 0) return Warrior;
	if (strcmp(profInput, "Rogue") == 0) return Rogue;
	if (strcmp(profInput, "Archer") == 0) return Archer;
	if (strcmp(profInput, "Ninja") == 0) return Ninja;
	if (strcmp(profInput, "Mage") == 0) return Mage;
	if (strcmp(profInput, "Spellblade") == 0) return Spellblade;
	if (strcmp(profInput, "Merchant") == 0) return Merchant;
	return Undefined;
}

Stats rollStats(Profession characterProf)
{
	Stats tempStats;

	bool rolling = true;


	while (rolling)
	{

		if (characterProf == Warrior)
		{
			tempStats.strength = BASE_WARRIOR_STRENGTH + (rand() % 5 + 1);
			tempStats.intelligence = BASE_WARRIOR_INTELLIGENCE + (rand() % 5 + 1);
			tempStats.dexterity = BASE_WARRIOR_DEXTERITY + (rand() % 5 + 1);
			tempStats.luck = BASE_WARRIOR_LUCK + (rand() % 5 + 1);
			tempStats.wisdom = BASE_WARRIOR_WISDOM + (rand() % 5 + 1);
			tempStats.charisma = BASE_WARRIOR_CHARISMA + (rand() % 5 + 1);
		}
		if (characterProf == Mage)
		{
			tempStats.strength = BASE_MAGE_STRENGTH + (rand() % 5 + 1);
			tempStats.intelligence = BASE_MAGE_INTELLIGENCE + (rand() % 5 + 1);
			tempStats.dexterity = BASE_MAGE_DEXTERITY + (rand() % 5 + 1);
			tempStats.luck = BASE_MAGE_LUCK + (rand() % 5 + 1);
			tempStats.wisdom = BASE_MAGE_WISDOM + (rand() % 5 + 1);
			tempStats.charisma = BASE_MAGE_CHARISMA + (rand() % 5 + 1);
		}
		if (characterProf == Archer)
		{
			tempStats.strength = BASE_ARCHER_STRENGTH + (rand() % 5 + 1);
			tempStats.intelligence = BASE_ARCHER_INTELLIGENCE + (rand() % 5 + 1);
			tempStats.dexterity = BASE_ARCHER_DEXTERITY + (rand() % 5 + 1);
			tempStats.luck = BASE_ARCHER_LUCK + (rand() % 5 + 1);
			tempStats.wisdom = BASE_ARCHER_WISDOM + (rand() % 5 + 1);
			tempStats.charisma = BASE_ARCHER_CHARISMA + (rand() % 5 + 1);
		}
		if (characterProf == Rogue)
		{
			tempStats.strength = BASE_ROGUE_STRENGTH + (rand() % 5 + 1);
			tempStats.intelligence = BASE_ROGUE_INTELLIGENCE + (rand() % 5 + 1);
			tempStats.dexterity = BASE_ROGUE_DEXTERITY + (rand() % 5 + 1);
			tempStats.luck = BASE_ROGUE_LUCK + (rand() % 5 + 1);
			tempStats.wisdom = BASE_ROGUE_WISDOM + (rand() % 5 + 1);
			tempStats.charisma = BASE_ROGUE_CHARISMA + (rand() % 5 + 1);
		}
		if (characterProf == Ninja)
		{
			tempStats.strength = BASE_NINJA_STRENGTH + (rand() % 5 + 1);
			tempStats.intelligence = BASE_NINJA_INTELLIGENCE + (rand() % 5 + 1);
			tempStats.dexterity = BASE_NINJA_DEXTERITY + (rand() % 5 + 1);
			tempStats.luck = BASE_NINJA_LUCK + (rand() % 5 + 1);
			tempStats.wisdom = BASE_NINJA_WISDOM + (rand() % 5 + 1);
			tempStats.charisma = BASE_NINJA_CHARISMA + (rand() % 5 + 1);
		}
		if (characterProf == Spellblade)
		{
			tempStats.strength = BASE_SPELLBLADE_STRENGTH + (rand() % 5 + 1);
			tempStats.intelligence = BASE_SPELLBLADE_INTELLIGENCE + (rand() % 5 + 1);
			tempStats.dexterity = BASE_SPELLBLADE_DEXTERITY + (rand() % 5 + 1);
			tempStats.luck = BASE_SPELLBLADE_LUCK + (rand() % 5 + 1);
			tempStats.wisdom = BASE_SPELLBLADE_WISDOM + (rand() % 5 + 1);
			tempStats.charisma = BASE_SPELLBLADE_CHARISMA + (rand() % 5 + 1);
		}
		if (characterProf == Merchant)
		{
			tempStats.strength = BASE_MERCHANT_STRENGTH + (rand() % 5 + 1);
			tempStats.intelligence = BASE_MERCHANT_INTELLIGENCE + (rand() % 5 + 1);
			tempStats.dexterity = BASE_MERCHANT_DEXTERITY + (rand() % 5 + 1);
			tempStats.luck = BASE_MERCHANT_LUCK + (rand() % 5 + 1);
			tempStats.wisdom = BASE_MERCHANT_WISDOM + (rand() % 5 + 1);
			tempStats.charisma = BASE_MERCHANT_CHARISMA + (rand() % 5 + 1);
		}

		std::cout << "[Strength - " << tempStats.strength << "]" << std::endl
			<< "[Intelligence - " << tempStats.intelligence << "]" << std::endl
			<< "[Dexterity - " << tempStats.dexterity << "]" << std::endl
			<< "[Luck - " << tempStats.luck << "]" << std::endl
			<< "[Wisdom - " << tempStats.wisdom << "]" << std::endl
			<< "[Charisma - " << tempStats.charisma << "]" << std::endl
			<< std::endl << "Are you pleased with these? [Y/N]" << std::endl;

		std::cin >> inputString;

		if (strcmp(inputString, "Y") == 0) rolling = false;
		else if (strcmp(inputString, "N") == 0) std::cout << "Rerolling stats." << std::endl << std::endl;
		else std::cout << "Invalid input. Rerolling." << std::endl << std::endl;

	}

	std::cout << std::endl;

	return tempStats;
}

/*Item addItem(int itemID, int quantity)
{
	Item tempItem;

	return tempItem;
}*/

Player calculateStats(Player player)
{
	player.health = player.characterStats.strength * 2;

	player.mana = player.characterStats.intelligence * 2;

	player.stamina = player.characterStats.strength * 2;

	player.speed = player.characterStats.dexterity * 2;

	player.knowledge = player.characterStats.wisdom * 2;

	return player;
}