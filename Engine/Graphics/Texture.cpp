#include "Texture.h"

Texture::Texture() 
{
	id = -1;
}

Texture::Texture(GLuint _id)
{
	id = _id;
	if (!GetTextureParams())
	{
		std::cout << "Error loading image with ID: " << id << std::endl;
	}
}

Texture::Texture(std::string path)
{
	id = SOIL_load_OGL_texture(path.c_str(), SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_MULTIPLY_ALPHA);
	if (!GetTextureParams())
	{
		std::cout << "Error loading image: " << path << std::endl;
	}
}

GLuint Texture::GetID()
{
	return id;
}

int Texture::GetWidth()
{
	return width;
}

int Texture::GetHeight()
{
	return height;
}

bool Texture::GetTextureParams()
{
	if (id > 0)
	{
		int miplevel = 0;
		glBindTexture(GL_TEXTURE_2D, id);
		glGetTexLevelParameteriv(GL_TEXTURE_2D, miplevel, GL_TEXTURE_WIDTH, &width);
		glGetTexLevelParameteriv(GL_TEXTURE_2D, miplevel, GL_TEXTURE_HEIGHT, &height);
		return true;
	}

	return false;
}