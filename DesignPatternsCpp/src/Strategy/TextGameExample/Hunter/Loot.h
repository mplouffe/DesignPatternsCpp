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
	int maxLootCapacity = 10;
	int maxItemCapacity = 5;
public:
	Loot();
	~Loot();
	bool addTreasure(const Treasure&);
	bool addItem(const Item&);
	Treasure* removeTreasure(int treasureIndex);
	Item* removeItem(int itemIndex);
	const std::list<Treasure>* getTreasureList();
	const std::list<Item>& getItemList();
};