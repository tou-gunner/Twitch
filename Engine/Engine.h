#ifndef TWITCH_ENGINE
#define TWITCH_ENGINE

#include <iostream>
#include "GLFW/glfw3.h"
#pragma comment(lib, "opengl32.lib")

class Engine
{
public:
	static int SCREEN_WIDTH;
	static int SCREEN_HEIGHT;

	Engine();
	~Engine();

	bool Initialize(const char* windowTitle);

	void Update();
	void Render();


private:
	static GLFWwindow* window;

};

#endif
