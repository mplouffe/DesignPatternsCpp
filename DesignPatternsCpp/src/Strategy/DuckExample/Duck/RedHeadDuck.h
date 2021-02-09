#pragma once
#include "Duck.h"
#include <iostream>

class RedHeadDuck : public Duck
{
public:
	RedHeadDuck();
	~RedHeadDuck() {}
	void display() override { std::cout << "This is a Read Head Duck." << std::endl; }
};

