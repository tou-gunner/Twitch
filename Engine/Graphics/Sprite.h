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

	void SetPos(float x, float y);
	void SetRot(float x);

private:
	Texture texture;
	float xPos;
	float yPos;
	float rot;
};

#endif