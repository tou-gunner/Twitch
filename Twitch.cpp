#include <iostream>
#include "Engine/Engine.h"
#include "Engine/Graphics/Sprite.h"
#include "Engine/IO/Mouse.h"
#include "Engine/IO/Keyboard.h"


int main()
{
	std::cout << "Hello World!" << std::endl;
	
	Engine engine;
	engine.Initialize("Twitch!");

	Sprite testSprite = Sprite("Assets/Art/Biplane.png", -100, -100);
	testSprite.setScale(0.25f);

	while (true)
	{
		engine.Update();
		testSprite.Update();

		//testSprite.SetPos((float)Mouse::GetMouseX(), (float)Mouse::GetMouseY());

		if (Mouse::ButtonDown(GLFW_MOUSE_BUTTON_LEFT))
		{
			testSprite.RotateBy(10);
		}
		if (Mouse::ButtonDown(GLFW_MOUSE_BUTTON_RIGHT))
		{
			testSprite.RotateBy(-10);
		}

		if (Mouse::ButtonUp(GLFW_MOUSE_BUTTON_MIDDLE))
		{
			testSprite.RotateBy(10);
		}

		if (Keyboard::Key(GLFW_KEY_W))
		{
			testSprite.MoveUp();
		}

		if (Keyboard::Key(GLFW_KEY_S))
		{
			testSprite.MoveDown();
		}

		if (Keyboard::Key(GLFW_KEY_A))
		{
			testSprite.MoveLeft();
		}

		if (Keyboard::Key(GLFW_KEY_D))
		{
			testSprite.MoveRight();
		}

		engine.BeginRender();
		testSprite.Render();
		engine.EndRender();
	}

	return 0;
}