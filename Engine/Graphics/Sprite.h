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

	void SpeedTo(float x);
	void SpeedBy(float x);

	void MoveTo(float x, float y);
	void MoveBy(float x, float y);

	void MoveLeft();
	void MoveRight();
	void MoveUp();
	void MoveDown();

	void RotateTo(float x);
	void RotateBy(float x);

	void setScale(float x);
	void setScale(float x, float y);

private:
	Texture texture;

	float speed;

	float xPos;
	float yPos;
	float rot;
	float xScale;
	float yScale;
};

#endif