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
	return new Bork("Chewie", 1000, 1000, 1000);
}