#include "DecoyDuck.h"

#include "../Fly/FlyNoWay.h"
#include "../Quack/MuteQuack.h"

DecoyDuck::DecoyDuck()
{
	setFlyBehavior(new FlyNoWay());
	setQuackBehavior(new MuteQuack());
}