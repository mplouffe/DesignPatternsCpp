#include "Bork.h"
#include <iostream>

std::pair<Action, int> Bork::getAction()
{
	// MVP: Borks only attack
	int attackDamage = (rand() % strength) * 5;
	std::cout << "The " << name << " uses tongue assault!!!" << std::endl;
	return std::make_pair(Action::attack, attackDamage);
}

bool Bork::takeAction(int attack)
{
	bool isDefeated = false;
	hitPoints -= attack;
	if (hitPoints <= 0)
	{
		isDefeated = true;
	}
	else if (hitPoints < bloodiedBarrier)
	{
		std::cout << "The bork is looking sleepy..." << std::endl;
	}

	return !isDefeated;
}