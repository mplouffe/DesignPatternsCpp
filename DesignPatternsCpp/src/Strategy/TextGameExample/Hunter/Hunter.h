#pragma once
#include <vector>
#include "Loot.h"

class Hunter
{
private:
	int hitPoints;
	Loot *loot;
public:
	Hunter();
	~Hunter();
	//virtual int attack() = 0;
	//virtual bool takeDamage() = 0;
	bool collectTreasure(const Treasure&);
	bool collectItem(const Item&);
	int useItem(int);
	bool dropTreasure(int);
	bool dropItem(int);
};