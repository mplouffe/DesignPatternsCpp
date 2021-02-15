#include "Treasure.h"

Treasure::Treasure(std::string name, int value)
	:name{ name }, value{ value }
{ };

Treasure::Treasure(const Treasure& copy)
	:name { copy.name }, value { copy.value }
{ };

bool Treasure::operator==(const Treasure& rhs)
{
	return ((name == rhs.name) && (value == rhs.value));
}

int Treasure::GetValue()
{
	return value;
}

std::string Treasure::GetName()
{
	return name;
}
