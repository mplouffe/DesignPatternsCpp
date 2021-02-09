#pragma once
#include "FlyBehavior.h"
#include <iostream>

class FlyWithWings : public FlyBehavior
{
public:
	void fly() override { std::cout << "This duck is flying!!!" << std::endl; }
};

