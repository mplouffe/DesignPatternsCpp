#include "Hunter.h"


Hunter::Hunter()
	:Character("Hunter", 10, 10, 2)
{
	loot = new Loot();
}

Hunter::~Hunter()
{
	std::cout << "Hunter Destructor called" << std::endl;
	delete loot;
}

std::pair<Action, int> Hunter::getAction()
{
	return std::pair<Action, int>(Action::attack, 5);
}

bool Hunter::takeAction(int value)
{
	hitPoints += value;
	return hitPoints > 0;
}