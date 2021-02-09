#pragma once
#include <iostream>
#include "FlyBehavior.h"

class FlyNoWay : public FlyBehavior
{
public:
	void fly() override { std::cout << "This duck can't fly..." << std::endl; }
};

