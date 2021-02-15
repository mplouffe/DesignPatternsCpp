#pragma once
#include <vector>
#include "../Monster/Monster.h"
#include "../Treasure/Treasure.h"

class Room
{
private:
	std::string name;
	Monster* monster;
	Treasure* treasure;

public:
	Room(std::string name, const Monster* monster, const Treasure* treasure);
	~Room() { };
};

