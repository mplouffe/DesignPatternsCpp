#include "Cardgame.h"
#include <iostream>

int Cardgame::totalParticipants = 0;

Cardgame::Cardgame(int players)
	: players(players)
{
	totalParticipants += players;
	std::cout << players << " players have started a new game. There are now " << totalParticipants << " players in total." << std::endl;
}

Cardgame::~Cardgame()
{
}
