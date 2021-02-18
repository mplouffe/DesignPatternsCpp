#pragma once
#include <string>
#include "Treasure.h"

enum ItemType { heal, damage };

class Item : public Treasure
{
private:
	int propertyValue;
	ItemType type;
public:
	Item(std::string name, int value, ItemType type, int propertyValue);
	Item(const Item& copy);
	~Item() { };
	bool operator== (const Item& rhs);
	int GetPropertyValue();
	ItemType GetType();
	void GetItemDescription();
};