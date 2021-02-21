#pragma once
#include <vector>
#include "Loot.h"
#include "../Character/Character.h"

class Hunter : public Character
{
private:
	Loot* loot;
public:
	Hunter();
	~Hunter();
	
	bool collectTreasure(const Treasure&);
	bool collectItem(const Item&);
	int useItem(int);
	bool dropTreasure(int);
	bool dropItem(int);
	void listTreasure();
	void listItems();
};