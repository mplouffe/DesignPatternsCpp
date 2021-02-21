#include "InputManager.h"
#include <iostream>

InputManager::InputManager()
{ 
	stringStream = new std::stringstream();
}

InputManager::~InputManager()
{ 
	delete stringStream;
}

int InputManager::getInput(int maxValue)
{
	int input = -1;
	bool hasValidInput = false;
	while (!hasValidInput)
	{
		std::string inputString;
		std::cout << "What do you do? ";
		std::getline(std::cin, inputString);
		stringStream->str(inputString);
		*stringStream >> input;

		if (!stringStream->fail())
		{
			if (input <= maxValue && input > -1)
			{
				hasValidInput = true;
			}
		}
		else
		{
			stringStream->clear();
		}

		if (!hasValidInput)
		{
			std::cout << "That is an invalid choice." << std::endl;
			std::cout << "Choose a value between 0 and " << maxValue << "." << std::endl;
		}
	}
	return input;
}