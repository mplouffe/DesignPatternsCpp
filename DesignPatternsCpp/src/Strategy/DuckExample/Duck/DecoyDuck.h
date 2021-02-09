#pragma once

#include "Duck.h"

class DecoyDuck : public Duck
{
public:
	DecoyDuck();
	~DecoyDuck() {};
	void display() override { std::cout << "This is a Decoy duck." << std::endl; }
};

