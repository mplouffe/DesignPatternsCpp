#include "Loot.h"

Loot::Loot()
{
	treasures = new std::list<Treasure>();
	items = new std::list<Item>();
}

Loot::~Loot()
{
	delete treasures;
	delete items;
}

bool Loot::addTreasure(const Treasure& treasure)
{
	std::cout << "Adding treasure..." << std::endl;
	bool treasureWasIserted = false;
	if ((treasures->size() + items->size()) < maxLootCapacity)
	{
		treasures->push_back(treasure);
		treasureWasIserted = true;
	}
	return treasureWasIserted;
}

bool Loot::addItem(const Item& item)
{
	bool itemWasInserted = false;
	if (items->size() < maxItemCapacity)
	{
		items->push_back(item);
		itemWasInserted = true;
	}
	return itemWasInserted;
}

Treasure* Loot::removeTreasure(int treasureIndex)
{
	std::cout << "Removing Treasure..." << std::endl;
	if (treasures->size() < treasureIndex)
	{
		std::list<Treasure>::iterator treasure = std::next(treasures->begin(), treasureIndex);
		treasures->remove(*treasure);
		return &(*treasure);
	}
	else
	{
		return nullptr;
	}
}

Item* Loot::removeItem(int itemIndex)
{
	if (items->size() < itemIndex)
	{
		std::list<Item>::iterator item = std::next(items->begin(), itemIndex);
		items->remove(*item);
		return &(*item);
	}
	else
	{
		return nullptr;
	}
}

const std::list<Treasure>& Loot::getTreasureList()
{
	return *treasures;
}

const std::list<Item>& Loot::getItemList()
{
	return *items;
}
