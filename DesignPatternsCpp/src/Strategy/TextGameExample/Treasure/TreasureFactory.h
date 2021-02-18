#pragma once
#include <vector>
#include "Treasure.h"

class TreasureFactory
{
private:
	std::vector<std::string>* treasureItems;
	std::vector<std::string>* treasureDescriptors;
public:
	TreasureFactory();
	~TreasureFactory();
	Treasure* getTreasure(int);
};
