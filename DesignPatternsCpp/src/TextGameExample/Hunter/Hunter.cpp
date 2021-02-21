#include "Hunter.h"
#include <list>

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
		std::cout << "Dropping " << item->GetName() << " onto the ground." << std::endl;
		delete item;
		return true;
	}
	else
	{
		std::cout << "You can't find that in your bag." << std::endl;
		return false;
	}
}

bool Hunter::dropTreasure(int treasureIndex)
{
	Treasure* treasure = loot->removeTreasure(treasureIndex);
	if (treasure != nullptr)
	{
		std::cout << "Dropping " << treasure->GetName() << " onto the ground." << std::endl;
		delete treasure;
		return true;
	}
	else
	{
		std::cout << "You can't find that in your bag." << std::endl;
		return false;
	}
}

void Hunter::listTreasure()
{
	std::cout << std::endl;
	loot->listTreasures();
	std::cout << std::endl;
}

void Hunter::listItems()
{
	std::cout << std::endl;
	loot->listItems();
	std::cout << std::endl;
}