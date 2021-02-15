#include "Strategy\DuckExample\Duck\MallardDuck.h"
#include "Strategy\DuckExample\Duck\RedHeadDuck.h"
#include "Strategy\DuckExample\Duck\DecoyDuck.h"
#include "Strategy\DuckExample\Duck\RubberDuck.h"

#include "Strategy\TextGameExample\Hunter\Hunter.h"

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

void TestHunterLootSystem()
{
	Hunter* hunter = new Hunter();
	Treasure* mandolin = new Treasure("Mandolin", 100);
	hunter->collectTreasure(*mandolin);
	hunter->listTreasure();
	hunter->dropTreasure(0);
	hunter->listTreasure();
	std::cout << "End of method" << std::endl;
}

int main()
{
	TestHunterLootSystem();
	return 0;
}