#include "Item.h"

Item::Item(std::string name, int value, ItemType type, int propertyValue)
	:Treasure(name, value), type { type }, propertyValue { propertyValue }
{ }

Item::Item(const Item& copy)
	:Treasure(copy), type { copy.type}, propertyValue { copy.propertyValue }
{ }

int Item::GetPropertyValue()
{
	return propertyValue;
}

ItemType Item::GetType()
{
	return type;
}

bool Item::operator==(const Item& rhs)
{
	return Treasure::operator==(rhs) &&
			type == rhs.type &&
			propertyValue == rhs.propertyValue;
}