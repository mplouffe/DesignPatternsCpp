#include "Space.h"

Space::Space()
{
	IsOccupied = false;
}

Space::~Space()
{
}

void Space::SetOccupied(bool isOccupied)
{
	IsOccupied = isOccupied;
}