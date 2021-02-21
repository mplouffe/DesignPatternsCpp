#pragma once
#include <vector>
#include "Bork.h"

class BorkFactory
{
private:
	std::vector<std::string>* borkTypes;
public:
	BorkFactory();
	~BorkFactory();
	Bork* getBork(int);
};
