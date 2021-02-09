#pragma once

#include "Duck.h"

class RubberDuck : public Duck
{
public:
	RubberDuck();
	~RubberDuck() {};
	void display() override { std::cout << "This is a Rubber Duck." << std::endl; }
};

