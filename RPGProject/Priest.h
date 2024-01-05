#ifndef PRIEST_H
#define PRIEST_H

#include"Player.h"

class Priest :public Player
{ 
public:
	Priest(string name, Race race) : Player(name, race, 100,200)
	{

	}
	string attack() const
	{
		return "I will show you your position by the HOLY WRAITH!";
	}

};
#endif
