#include <ctime>
#include "Strategy\DuckExample\Duck\MallardDuck.h"
#include "Strategy\DuckExample\Duck\RedHeadDuck.h"
#include "Strategy\DuckExample\Duck\DecoyDuck.h"
#include "Strategy\DuckExample\Duck\RubberDuck.h"

#include "TextGameExample\Hunter\Hunter.h"
#include "TextGameExample\Treasure\TreasureFactory.h"
#include "TextGameExample\Treasure\ItemFactory.h"

#include "TextGameExample\Managers\InputManager.h"

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

void TestInputManager()
{
	InputManager inputManager = InputManager();
	int value = inputManager.getInput(5);
	std::cout << "value returned: " << value << std::endl;
}

int main()
{
	srand(std::time(0));
	TestInputManager();
	return 0;
}