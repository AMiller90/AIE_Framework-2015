//////////////////////////////////////////////////////////////
// Project: Student Graphics Engine
// Author: Ben Odom
//////////////////////////////////////////////////////////////

#include "GameLoop.h"

int wmain()
{
	/*Graphics::Init();

	Graphics::NewWindow({ 1600, 900 }, false, { 1600, 900 }, "Graphics Engine");

	GameLoop oGameLoop;

	oGameLoop.Loop();

	Graphics::Quit();*/


	Graphics::Init();

	Graphics::NewWindow({ 1280, 720 }, false, { 1600, 900 },"New Window", 0);

	system("PAUSE");
	return 0;
}