#pragma once
#include <list>
#include <iostream>
#include "../Treasure//Treasure.h"
#include "../Treasure/Item.h"

class Loot
{
private:
	std::list<Treasure>* treasures;
	std::list<Item>* items;
	unsigned int maxLootCapacity = 10;
	unsigned int maxItemCapacity = 5;
public:
	Loot();
	~Loot();
	bool addTreasure(const Treasure&);
	bool addItem(const Item&);
	Treasure* removeTreasure(unsigned int treasureIndex);
	Item* removeItem(unsigned int itemIndex);
	void listTreasures();
	void listItems();
};