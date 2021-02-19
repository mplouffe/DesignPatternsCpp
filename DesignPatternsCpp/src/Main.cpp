#include <ctime>
#include "Strategy\DuckExample\Duck\MallardDuck.h"
#include "Strategy\DuckExample\Duck\RedHeadDuck.h"
#include "Strategy\DuckExample\Duck\DecoyDuck.h"
#include "Strategy\DuckExample\Duck\RubberDuck.h"

#include "Strategy\TextGameExample\Hunter\Hunter.h"
#include "Strategy\TextGameExample\Treasure\TreasureFactory.h"
#include "Strategy\TextGameExample\Treasure\ItemFactory.h"

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
	TreasureFactory tFactory = TreasureFactory();
	Treasure* treasure = tFactory.getTreasure(2);
	hunter->collectTreasure(*treasure);
	hunter->listTreasure();
	std::cout << "after list treasure..." << std::endl;
	hunter->dropTreasure(0);
	hunter->listTreasure();
	std::cout << "End of method" << std::endl;
	delete hunter;
}

void TestItemSystem()
{
	Hunter* hunter = new Hunter();
	ItemFactory iFactory = ItemFactory();
	Item* item = iFactory.getItem(1);
	hunter->collectItem(*item);
	hunter->listItems();
	std::cout << "after list treasure..." << std::endl;
	hunter->dropItem(0);
	hunter->listItems();
	std::cout << "End of method" << std::endl;
	delete hunter;

}

void TestRndLoop()
{
		for (int i = 0; i < 100; i++)
		{
			int value = rand() % 2;
			std::cout << value << std::endl;
		}
}

int main()
{
	srand(std::time(0));
	TestItemSystem();
	return 0;
}