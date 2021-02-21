#pragma once
#include <string>
#include <utility>

enum Action { attack, heal, item, move };

class Character
{
protected:
	std::string name;
	int hitPoints;
	int bloodiedBarrier;
	int strength;
	int defense;
public:
	Character(std::string name,  int hitPoints, int strength, int defense)
		:name { name }, hitPoints { hitPoints }, strength { strength }, defense { defense }
	{ };
	~Character() { };
	virtual std::pair<Action, int> getAction() = 0;
	virtual bool takeAction(int) = 0;
};