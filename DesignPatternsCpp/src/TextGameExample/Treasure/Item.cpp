#include "Item.h"

Item::Item(std::string name, int value, ItemType type, int propertyValue)
	:Treasure(name, value), type { type }, propertyValue { propertyValue }
{ }

Item::Item(const Item& copy)
	:Treasure(copy), type { copy.type}, propertyValue { copy.propertyValue }
{ }

bool Item::operator==(const Item& rhs)
{
	return Treasure::operator==(rhs) &&
		type == rhs.type &&
		propertyValue == rhs.propertyValue;
}

int Item::GetPropertyValue()
{
	return propertyValue;
}

std::string Item::GetType()
{
	std::string typeString;
	switch (type)
	{
		case ItemType::negative:
			typeString = "Damage";
			break;
		case ItemType::positive:
			typeString = "Heal";
			break;
		default:
			typeString = "None";
			break;
	}
	return typeString;
}

void Item::GetItemDescription()
{
	std::string descriptionEnding = "revive and refresh.";
	if (type == ItemType::negative)
	{
		descriptionEnding = "do some damage.";
	}
	std::cout << "Your " << name << " looks like it could " << descriptionEnding << std::endl;
}

