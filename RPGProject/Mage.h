#ifndef MAGE_H
#define MAGE_H
#include"Player.h"

class Mage :public Player
{
public:
	Mage(string name, Race race) :Player(name, race, 150, 150)
	{

	}
	string attack() const
	{
		return "I'll crush you with the power of my arcane missiles!";
	}
};
#endif