#pragma once
class Cardgame
{
	int players;
	static int totalParticipants;
public:
	Cardgame(int players);
	~Cardgame();
	static int GetPartcipants() { return totalParticipants; }
};

