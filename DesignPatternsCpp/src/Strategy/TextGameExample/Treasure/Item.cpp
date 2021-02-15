#include "Item.h"

Item::Item(std::string name, int value, ItemType type)
	:name{ name }, value { value }, type { type }
{ }

int Item::UseItem()
{
	return value;
}

ItemType Item::GetType()
{
	return type;
}

bool Item::operator==(const Item& rhs)
{
	return ((name == rhs.name) && (value == rhs.value) && (type == rhs.type));
}