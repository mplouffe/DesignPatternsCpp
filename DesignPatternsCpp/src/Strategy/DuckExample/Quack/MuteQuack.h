#pragma once

#include "QuackBehavior.h"
#include <iostream>

class MuteQuack : public QuackBehavior
{
public:
	~MuteQuack() {};
	void quack() override { std::cout << "..." << std::endl; }
};