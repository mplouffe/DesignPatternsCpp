#include "TreasureFactory.h"

TreasureFactory::TreasureFactory()
{
	treasureItems = new std::vector<std::string> {
		"Trophy",
		"Mandolin",
		"Crown",
		"Fork",
		"Cup",
		"Plate",
		"Guitar",
		"Chain",
		"Armour",
		"Sword",
		"Dagger",
		"Phone",
		"Wand",
		"Spork"
	};

	treasureDescriptors = new std::vector<std::string> {
		"Gold",
		"Silver",
		"Bronze",
		"Magic",
		"Cellular",
		"Blutooth",
		"Glorious",
		"Shiny",
		"Spikey",
		"Burnt",
		"Crispy",
		"Weird",
		"Heavy",
		"Moist",
		"Damp",
		"Glowing",
		"Cold",
		"Hot"
	};
}

TreasureFactory::~TreasureFactory()
{
	std::cout << "TreasureFactory destructor called." << std::endl;
	delete treasureItems;
	delete treasureDescriptors;
}

Treasure* TreasureFactory::getTreasure(int level)
{
	if (level < 1)
	{
		level = 1;
	}

	int itemRnd = rand() % (treasureItems->size() - 1);
	int descriptorRnd = rand() % (treasureDescriptors->size() - 1);
	std::string name = treasureDescriptors->at(descriptorRnd) + " " + treasureItems->at(itemRnd);
	int value = ((rand() % level) + 1) * (25 * ((rand() % level) + 1));
	
	return new Treasure(name, value);
}