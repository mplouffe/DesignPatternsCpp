#include "RedHeadDuck.h"
#include "../Fly/FlyWithWings.h"
#include "../Quack/Quack.h"

RedHeadDuck::RedHeadDuck()
{
	setFlyBehavior(new FlyWithWings());
	setQuackBehavior(new Quack());
}