#pragma once
#include <iostream>

class Treasure
{
private:
	std::string name;
	int value;
public:
	Treasure(std::string name, int value);
	Treasure(const Treasure& copy);
	~Treasure() { std::cout << "Treasure Destructor called." << std::endl; };
	bool operator== (const Treasure& rhs);
	int GetValue();
	std::string GetName();
};