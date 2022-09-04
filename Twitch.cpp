#include <iostream>
#include "Engine/Engine.h"

int main()
{
	std::cout << "Hello World!" << std::endl;
	
	Engine engine;

	engine.Initialize("Twitch!");

	while (true)
	{
		engine.Update();
		engine.Render();
	}

	return 0;
}