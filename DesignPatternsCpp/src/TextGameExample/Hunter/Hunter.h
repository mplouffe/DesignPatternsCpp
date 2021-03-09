#pragma once
#include "../Character/Character.h"

class Hunter : public Character
{
public:
	Hunter();
	~Hunter();
	
	std::pair<Action, int> getAction() override;
	bool takeAction(int) override;
};