#include <ctime>
#include "Strategy\DuckExample\Duck\MallardDuck.h"
#include "Strategy\DuckExample\Duck\RedHeadDuck.h"
#include "Strategy\DuckExample\Duck\DecoyDuck.h"
#include "Strategy\DuckExample\Duck\RubberDuck.h"

#include "TextGameExample\Hunter\Hunter.h"
#include "TextGameExample\Treasure\TreasureFactory.h"
#include "TextGameExample\Treasure\ItemFactory.h"

#include "TextGameExample\Managers\InputManager.h"

#include "TextGameExample\Bork\BorkFactory.h"

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

void TestLootSystem()
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

void TestBorkFactory()
{
	BorkFactory borkFactory = BorkFactory();
	Bork* bork = borkFactory.getBork(1);
	std::cout << "You got a " << bork->getName() << std::endl;
	delete bork;
}

void PrintMenu()
{
	std::cout << "**** Testing Systems ****" << std::endl;
	std::cout << "0) Quit" << std::endl;
	std::cout << "1) Test Duck Strategy Pattern" << std::endl;
	std::cout << "2) Test Loot System" << std::endl;
	std::cout << "3) Test Item System" << std::endl;
	std::cout << "4) Test Bork Factory" << std::endl;
}

int main()
{
	InputManager inputManager = InputManager();
	srand(std::time(0));


	int value;
	do
	{
		PrintMenu();
		value = inputManager.getInput(4);

		std::cout << "**********" << std::endl;
		switch (value)
		{
		case 1:
			TestDuckStrategyPattern();
			break;
		case 2:
			TestLootSystem();
			break;
		case 3:
			TestItemSystem();
			break;
		case 4:
			TestBorkFactory();
			break;
		}
		std::cout << "**********" << std::endl;
	} while (value != 0);

	std::cout << "End of Line" << std::endl;
	return 0;
}