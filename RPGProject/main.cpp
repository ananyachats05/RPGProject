#include<iostream>
#include<string>
#include<vector>
#include "Player.h"
#include"Warrior.h"
#include"Mage.h"
#include"Priest.h"

using namespace std;

void printMainMenu();
void printRaceMenu();
Player* playerNew(string playerName, int numType, int numRace);
void clearance(vector<Player*>playerCrew);
Race getRace(int numRace);
void printAll(vector<Player*>playerCrew);


int main()
{
	int numType;
	int numRace;
	string playerName;
	vector<Player*> playerCrew;

	printMainMenu();
	cin >> numType;
	cin.get(); //to input string after a non string

	while (numType != 0)
	{
		cout << "What would the character be named?" << endl;
		/*cin >> playerName;*/
		getline(cin, playerName); //input with spaces

		printRaceMenu();
		cin >> numRace;
		cin.get(); //newline character consumption

		Player* tempPlayer = playerNew(playerName, numType, numRace);
		playerCrew.push_back(tempPlayer);

		//next player creation
		printMainMenu();
		cin >> numType;
		cin.get();
	}
	printAll(playerCrew);

	clearance(playerCrew);
	cout << "THE END!" << endl;
	return 0;
}

void printMainMenu()
{
	cout << endl;
	cout << "Choose a base character for your player" << endl;
	cout << "\t1- Create a Warrior" << endl;
	cout << "\t2-Create a Priest" << endl;
	cout << "\t3-Create a Mage" << endl;
	cout << "\t0- finish creating a player for this run!" << endl;
}
void printRaceMenu()
{
	cout << endl;
	cout << "Go on, pick a race" << endl;
	cout << "\t1-Human" << endl;
	cout << "\t2-Elf" << endl;
	cout << "\t3-Dwarf" << endl;
	cout << "\t4-Orc" << endl;
	cout << "\t5-Troll" << endl;
}
Player* playerNew(string playerName, int numType, int numRace)
{
	Race playerRace = getRace(numRace);
	Player* tempPlayer = nullptr;
	
	if (numType == 1)
	{
		tempPlayer = new Warrior(playerName, playerRace);
	}
	else if (numType == 2)
	{
		tempPlayer = new Priest(playerName, playerRace);
	}
	else if (numType == 3)
	{
		tempPlayer = new Mage(playerName, playerRace);
	}
	return tempPlayer;
}
void clearance(vector<Player*>playerCrew)
{
	for (Player* crew : playerCrew)
	{
		delete crew;
	}
	playerCrew.clear(); //reduce the size of vector all the way down to zero
}
Race getRace(int numRace)
{
	Race race;
	if (numRace == 1)
	{
		race = HUMAN;
	}
	else if (numRace == 2)
	{
		race = ELF;
	}
	else if (numRace == 3)
	{
		race = DWARF;
	}
	else if (numRace == 4)
	{
		race = ORC;
	}
	else 
	{
		race = TROLL;
	}
	return race;
}
void printAll(vector<Player*>playerCrew)
{
	for (Player* crew : playerCrew)
	{
		cout << "My name is " << crew->getName() << " I'm a " << crew->whatRace() << " and if you dare to mess with me "
			<< crew->attack() << endl;
    }
}