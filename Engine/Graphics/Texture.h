#ifndef TWITCH_TEXTURE
#define TWITCH_TEXTURE

#include <iostream>
#include "GLFW/glfw3.h"
#include "soil.h"

class Texture
{
public:
	Texture();
	Texture(int _id);
	Texture(std::string path);

	int GetID();
	int GetWidth();
	int GetHeight();

private:
	bool GetTextureParams();

	int id;
	int width;
	int height;

};

#endif