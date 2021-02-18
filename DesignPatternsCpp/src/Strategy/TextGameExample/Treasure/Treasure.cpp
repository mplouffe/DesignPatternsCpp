#include "Treasure.h"

Treasure::Treasure(std::string name, int value)
	:name{ name }, value{ value }
{ }

Treasure::Treasure(const Treasure& copy)
	:name { copy.name }, value { copy.value }
{ }

Treasure::~Treasure()
{
	std::cout << "Treasure descturctor called." << std::endl;
}

bool Treasure::operator==(const Treasure& rhs)
{
	return ((name == rhs.name) && (value == rhs.value));
}

const int Treasure::GetValue() const
{
	return value;
}

const std::string Treasure::GetName() const
{
	return name;
}
