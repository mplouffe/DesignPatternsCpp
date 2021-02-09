#pragma once

#include "QuackBehavior.h"
#include <iostream>

class Squeak : public QuackBehavior
{
public:
	~Squeak() {};
	void quack() override { std::cout << "Squeak!!!" << std::endl; }
};