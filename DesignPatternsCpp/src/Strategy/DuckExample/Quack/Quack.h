#pragma once
#include "QuackBehavior.h"
#include <iostream>

class Quack : public QuackBehavior
{
public:
	~Quack() {};
	void quack() override { std::cout << "Quack!!!" << std::endl; }
};