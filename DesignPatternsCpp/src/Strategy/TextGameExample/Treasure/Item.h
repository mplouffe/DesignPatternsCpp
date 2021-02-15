#pragma once
#include <string>

enum ItemType { heal, damage };

class Item
{
private:
	std::string name;
	int value;
	ItemType type;
public:
	Item(std::string name, int value, ItemType type);
	~Item() { };
	bool operator== (const Item& rhs);
	int UseItem();
	ItemType GetType();
};