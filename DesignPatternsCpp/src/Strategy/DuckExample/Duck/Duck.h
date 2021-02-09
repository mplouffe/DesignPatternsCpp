#pragma once

#include <iostream>
#include "..\Fly\FlyBehavior.h"
#include "..\Quack\QuackBehavior.h"

class Duck
{
private:
	FlyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;

public:
	~Duck() { delete flyBehavior; delete quackBehavior; };
	virtual void display() = 0;
	void swim() { std::cout << "This duck is swimming."; }
	void performQuack() { std::cout << "This duck goes "; quackBehavior->quack(); }
	void performFly() { flyBehavior->fly(); }
	void setFlyBehavior(FlyBehavior* fb) { flyBehavior = fb; }
	void setQuackBehavior(QuackBehavior* qb) { quackBehavior = qb; }
};