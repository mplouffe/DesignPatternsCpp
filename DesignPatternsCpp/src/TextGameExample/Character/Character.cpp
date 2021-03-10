#include "Character.h"
#include <list>

bool Character::collectTreasure(const Treasure& treasure)
{
	return loot->addTreasure(treasure);
}

bool Character::collectItem(const Item& item)
{
	return loot->addItem(item);
}

int Character::useItem(int itemIndex)
{
	Item* item = loot->removeItem(itemIndex);
	return 0;
}

bool Character::dropItem(int itemIndex)
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

bool Character::dropTreasure(int treasureIndex)
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

void Character::listTreasure()
{
	std::cout << std::endl;
	loot->listTreasures();
	std::cout << std::endl;
}

void Character::listItems()
{
	std::cout << std::endl;
	loot->listItems();
	std::cout << std::endl;
}

std::string Character::getName()
{
	return name;
}