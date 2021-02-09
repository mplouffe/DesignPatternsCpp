#include "RubberDuck.h"

#include "../Fly/FlyNoWay.h"
#include "../Quack/Squeak.h"

RubberDuck::RubberDuck()
{
	setFlyBehavior(new FlyNoWay());
	setQuackBehavior(new Squeak());
}