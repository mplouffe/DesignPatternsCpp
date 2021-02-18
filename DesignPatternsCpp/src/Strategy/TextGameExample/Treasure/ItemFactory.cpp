#include "ItemFactory.h"

ItemFactory::ItemFactory()
{
	itemDescriptors = new std::vector<std::string>{
		"Green",
		"Blue",
		"Red",
		"Purple",
		"Yellow",
		"Orange",
		"Pink",
		"Black",
		"White",
		"Gold",
		"Silver",
		"Bronze",
		"Copper"
	};
}

ItemFactory::~ItemFactory()
{
	std::cout << "ItemFactory destructor called" << std::endl;
	delete itemDescriptors;
}

Item* ItemFactory::getItem(int level)
{
	if (level < 1)
	{
		level = 1;
	}

	int descriptorRnd = rand() % (itemDescriptors->size() - 1);
	int typeRnd = rand() % 2;
	std::string name = itemDescriptors->at(descriptorRnd) + " potion";
	int value = ((rand() % level) + 1) * (25 * ((rand() % level) + 1));
	int propertyValue = (rand() % 10) + 5;

	ItemType itemType;
	if (typeRnd >= 1)
	{
		itemType = ItemType::heal;
	}
	else
	{
		itemType = ItemType::damage;
	}

	return new Item(name, value, itemType, propertyValue);
}