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
	~Treasure() { };
	bool operator== (const Treasure& rhs);
	const int GetValue() const;
	const std::string GetName() const;
};