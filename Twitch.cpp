#include <iostream>
#include "Engine/Engine.h"
#include "Engine/Graphics/Sprite.h"
#include "Engine/IO/Mouse.h"

int main()
{
	std::cout << "Hello World!" << std::endl;
	
	Engine engine;
	engine.Initialize("Twitch!");

	Sprite testSprite = Sprite("Assets/Art/Biplane.png", -100, -100);

	while (true)
	{
		engine.Update();
		testSprite.Update();

		testSprite.SetPos((float)Mouse::GetMouseX(), (float)Mouse::GetMouseY());

		engine.BeginRender();
		testSprite.Render();
		engine.EndRender();
	}

	return 0;
}