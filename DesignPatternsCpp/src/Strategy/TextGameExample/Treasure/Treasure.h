#pragma once
#include <iostream>
#include "../Hunter/Loot.h"
#include "../Hunter/Hunter.h"

class Treasure
{
private:
	std::string name;
	int value;
public:
	Treasure(std::string name, int value);
	~Treasure() { std::cout << "Treasure Destructor called." << std::endl; };
	int GetValue();
};