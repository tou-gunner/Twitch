#ifndef TWITCH_TEXTURE
#define TWITCH_TEXTURE

#include <iostream>
#include "GLFW/glfw3.h"
#include "soil.h"

class Texture
{
public:
	Texture();
	Texture(GLuint _id);
	Texture(std::string path);

	GLuint GetID();
	int GetWidth();
	int GetHeight();

private:
	bool GetTextureParams();

	GLuint id;
	int width;
	int height;

};

#endif