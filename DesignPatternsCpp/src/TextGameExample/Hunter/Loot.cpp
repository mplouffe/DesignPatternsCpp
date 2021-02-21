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
	bool treasureWasInserted;
	if ((treasures->size() + items->size()) < maxLootCapacity)
	{
		treasures->push_back(treasure);
		treasureWasInserted = true;
		std::cout << "You slide the " << treasure.GetName() << " into your bag." << std::endl;
	}
	else
	{
		treasureWasInserted = false;
		std::cout << "You have no room for the " << treasure.GetName() << " in your bag." << std::endl;
	}
	return treasureWasInserted;
}

bool Loot::addItem(const Item& item)
{
	bool itemWasInserted;
	if (items->size() < maxItemCapacity)
	{
		items->push_back(item);
		itemWasInserted = true;
		std::cout << "You slide the " << item.GetName() << " into your bag." << std::endl;
	}
	else
	{
		itemWasInserted = false;
		std::cout << "You have no room for the " << item.GetName() << " in your bag." << std::endl;
	}
	return itemWasInserted;
}

Treasure* Loot::removeTreasure(unsigned int treasureIndex)
{
	if (treasures->size() > treasureIndex)
	{
		std::list<Treasure>::iterator treasure = std::next(treasures->begin(), treasureIndex);
		Treasure* returnTreasure = new Treasure(*treasure);
		treasures->remove(*treasure);
		std::cout << "You pull the " << returnTreasure->GetName() << " from your bag." << std::endl;
		return returnTreasure;
	}
	else
	{
		return nullptr;
	}
}

Item* Loot::removeItem(unsigned int itemIndex)
{
	if (items->size() > itemIndex)
	{
		std::list<Item>::iterator item = std::next(items->begin(), itemIndex);
		Item* returnItem = new Item(*item);
		items->remove(*item);
		std::cout << "You pull the " << returnItem->GetName() << " from your bag." << std::endl;
		return returnItem;
	}
	else
	{
		return nullptr;
	}
}

void Loot::listTreasures()
{
	if (treasures->size() > 0)
	{
		std::cout << "Listing Treasures..." << std::endl;
		std::cout << "--------------------" << std::endl;
		std::cout << "#) Name: Value" << std::endl;
		int i = 0;
		int totalValue = 0;
		std::list<Treasure>& treasuresRef = *treasures;
		for (std::list<Treasure>::iterator it = treasuresRef.begin(); it != treasuresRef.end(); it++)
		{
			std::cout << i++ << ") " << it->GetName() << ": " << it->GetValue() << std::endl;
			totalValue += it->GetValue();
		}
		std::cout << "---------------------" << std::endl;
		std::cout << "Total Treasures: " << treasuresRef.size() << std::endl;
		std::cout << "Total Value: " << totalValue << std::endl;
	}
	else
	{
		std::cout << "Your treasure bag is empty. How sad. :(" << std::endl;
	}
}

void Loot::listItems()
{
	if (items->size() > 0)
	{
		std::cout << "Listing Items..." << std::endl;
		std::cout << "--------------------" << std::endl;
		std::cout << "#) Name:\t\tType:\t\tValue" << std::endl;
		int i = 0;
		int totalValue = 0;
		std::list<Item>& itemsRef = *items;
		for (std::list<Item>::iterator it = itemsRef.begin(); it != itemsRef.end(); it++)
		{
			std::cout << i++ << ") " << it->GetName() << "\t\t" << it->GetType() << "\t\t" << it->GetValue() << std::endl;
			totalValue += it->GetValue();
		}
		std::cout << "---------------------" << std::endl;
		std::cout << "Total Items: " << itemsRef.size() << std::endl;
		std::cout << "Total Value: " << totalValue << std::endl;
	}
	else
	{
		std::cout << "Your item bag is empty. How sad. :(" << std::endl;
	}
}
