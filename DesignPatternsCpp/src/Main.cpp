#include "Strategy\DuckExample\Duck\MallardDuck.h"
#include "Strategy\DuckExample\Duck\RedHeadDuck.h"
#include "Strategy\DuckExample\Duck\DecoyDuck.h"
#include "Strategy\DuckExample\Duck\RubberDuck.h"

void TestDuckStrategyPattern()
{
	Duck* duck01 = new MallardDuck();
	duck01->display();
	duck01->performFly();
	duck01->performQuack();
	delete duck01;

	Duck* duck02 = new RedHeadDuck();
	duck02->display();
	duck02->performFly();
	duck02->performQuack();
	delete duck02;

	Duck* duck03 = new DecoyDuck();
	duck03->display();
	duck03->performFly();
	duck03->performQuack();
	delete duck03;

	Duck* duck04 = new RubberDuck();
	duck04->display();
	duck04->performFly();
	duck04->performQuack();
	delete duck04;
	
	

}

int main()
{
	TestDuckStrategyPattern();
	return 0;
}