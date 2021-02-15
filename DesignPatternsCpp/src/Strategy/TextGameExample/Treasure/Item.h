#pragma once

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
	int UseItem();
	ItemType GetType();
};