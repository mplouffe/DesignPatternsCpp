#pragma once
#include <vector>
#include "Item.h"

class ItemFactory
{
private:
	std::vector<std::string>* itemDescriptors;
public:
	ItemFactory();
	~ItemFactory();
	Item* getItem(int);
};