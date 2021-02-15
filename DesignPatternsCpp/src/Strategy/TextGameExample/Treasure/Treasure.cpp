#include "Treasure.h"

Treasure::Treasure(std::string name, int value)
	:name{ name }, value{ value }
{ };

int Treasure::GetValue()
{
	return value;
}
