#pragma once
#include "../Character/Character.h"

class Bork : public Character
{
public:
	Bork(std::string name, int hitPoints, int strength, int defense)
		:Character(name, hitPoints, strength, defense)
	{ };
	~Bork() { };
	std::pair<Action, int> getAction() override;
	bool takeAction(int) override;
};

