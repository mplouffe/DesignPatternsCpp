#include "Hunter.h"

Hunter::Hunter()
{
	hitPoints = 10;
	loot = new Loot();
}

Hunter::~Hunter()
{
	std::cout << "Hunter Destructor called" << std::endl;
	delete loot;
}

bool Hunter::collectTreasure(const Treasure& treasure)
{
	return loot->addTreasure(treasure);
}

bool Hunter::collectItem(const Item& item)
{
	return loot->addItem(item);
}

int Hunter::useItem(int itemIndex)
{
	Item* item = loot->removeItem(itemIndex);
	return 0;
}

bool Hunter::dropItem(int itemIndex)
{
	Item* item = loot->removeItem(itemIndex);
	if (item != nullptr)
	{
		// delete item;
		return true;
	}
	else
	{
		return false;
	}
}

bool Hunter::dropTreasure(int treasureIndex)
{
	Treasure* treasure = loot->removeTreasure(treasureIndex);
	if (treasure != nullptr)
	{
		// delete treasure;
		return true;
	}
	else
	{
		return false;
	}
}