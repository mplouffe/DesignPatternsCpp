#pragma once

class Bork
{
private:

public:
	Bork(std::string name, int hitPoints, int strength, int defense)
	{ };
	~Bork() { };
	std::pair<Action, int> getAction() override;
	bool takeAction(int) override;
};

