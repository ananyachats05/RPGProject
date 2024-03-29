#include"Player.h"
#include<string>
#include<iostream>
using namespace std;


Player::Player(string name, Race race, int hitPoints, int magicPoints)
{
	this->name = name;
	this->race = race;
	this->hitPoints = hitPoints;
	this->magicPoints = magicPoints;
}
// get functions
string Player::getName() const
{
	return name;
}
Race Player::getRace() const
{
	return race;
}
int Player::getHitPoints() const
{
	return hitPoints;
}
int Player::getMagicPoints() const
{
	return magicPoints;
}
string Player::whatRace() const
{
	string result = "";

	if (race == HUMAN)
	{
		result = "Human";
	}
	else if (race == ELF)
	{
		result = "elf";
	}
	else if (race == DWARF)
	{
		result = "Dwarf";
	}
	else if (race == ORC)
	{
		result = "Orc";
	}
	else if (race == TROLL)
	{
		result = "Troll";
	}
	return result;
}

//setting functions

void Player:: setName(string name)
{
	this->name = name;
}
void Player::setRace(Race race)
{
	this->race = race;
}
void Player::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}
void Player::setMagicPoints(int magicPoints)
{
	this->magicPoints = magicPoints;
}
