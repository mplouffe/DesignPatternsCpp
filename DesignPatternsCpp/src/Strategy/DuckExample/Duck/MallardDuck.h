#pragma once

#include "Duck.h"

class MallardDuck : public Duck
{
public:
	MallardDuck();
	~MallardDuck() { };
	void display() override { std::cout << "This is a Mallard duck." << std::endl; }
};