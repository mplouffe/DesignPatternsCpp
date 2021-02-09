#include "MallardDuck.h"
#include "../Fly/FlyWithWings.h"
#include "../Quack/Quack.h"

MallardDuck::MallardDuck()
{
	setFlyBehavior(new FlyWithWings());
	setQuackBehavior(new Quack());
}