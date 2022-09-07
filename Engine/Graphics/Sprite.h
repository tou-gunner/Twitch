#ifndef TWITCH_SPRITE
#define TWITCH_SPRITE

#include <iostream>
#include "GLFW/glfw3.h"
#include "Texture.h"

class Sprite
{
public:
	Sprite();
	Sprite(std::string imagePath);
	Sprite(std::string imagePath, float _xPos, float _yPos);

	void Update();
	void Render();

private:
	Texture texture;
	float xPos;
	float yPos;

};

#endif