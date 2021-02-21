#pragma once
#include <sstream>

class InputManager
{
private:
	std::stringstream* stringStream;
public:
	InputManager();
	~InputManager();
	int getInput(int);
};

