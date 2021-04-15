#include "BorkFactory.h"

BorkFactory::BorkFactory()
{
	borkTypes = new std::vector<std::string>{
		"Fluffy",
		"Sneezy",
		"Loud",
		"Stinky",
		"Cute",
		"Big",
		"Tiny"
	};
}

BorkFactory::~BorkFactory()
{
	delete borkTypes;
}

Bork* BorkFactory::getBork(int level)
{

	int descriptorRnd = rand() % (borkTypes->size() - 1);
	std::string name = borkTypes->at(descriptorRnd) + " Bork";

	return new Bork(name, 1000, 1000, 1000);
}