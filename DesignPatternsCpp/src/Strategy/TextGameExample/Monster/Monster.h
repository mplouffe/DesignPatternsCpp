#pragma once
class Monster
{
public:
	~Monster() { };
	virtual int attack();
	virtual bool takeDamage();
};

