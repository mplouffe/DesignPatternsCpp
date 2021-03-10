#pragma once
#include <string>
#include <utility>
#include <vector>
#include "../Treasure/Loot.h"

enum Action { attack, heal, item, move };

class Character
{
protected:
	std::string name;
	int hitPoints;
	int bloodiedBarrier;
	int strength;
	int defense;
	Loot* loot;
public:
	Character(std::string name,  int hitPoints, int strength, int defense)
		:name { name }, hitPoints { hitPoints }, strength { strength }, defense { defense }
	{ };
	~Character() { };
	virtual std::pair<Action, int> getAction() = 0;
	virtual bool takeAction(int) = 0;

	bool collectTreasure(const Treasure&);
	bool collectItem(const Item&);
	int useItem(int);
	bool dropTreasure(int);
	bool dropItem(int);
	void listTreasure();
	void listItems();
	std::string getName();
};