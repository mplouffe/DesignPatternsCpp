#pragma once
#include <vector>
#include "../Bork/Bork.h"
#include "../Treasure/Treasure.h"

class Room
{
private:
	std::string name;
	Bork* bork;
	Treasure* treasure;

public:
	Room(std::string name);
	~Room();
};

