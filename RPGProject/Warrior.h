#ifndef WARRIOR_H
#define WARRIOR_H

#include"Player.h"

class Warrior :public Player
{
public:
	Warrior(string name, Race race) :Player(name, race, 200, 0)
	{

	}
	string attack() const
	{
		return "I'll destroy you with my sword foul demon!";
	}
//private:this is already tackled by the base class nothing new

};
#endif