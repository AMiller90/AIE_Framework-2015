//////////////////////////////////////////////////////////////
// Project: Student Graphics Engine
// Author: Ben Odom
//////////////////////////////////////////////////////////////

#include "GameLoop.h"

int wmain()
{
	Graphics::Init();

	//Graphics::NewWindow({ 1600, 900 }, false, { 1600, 900 }, "Graphics Engine");
	Graphics::NewWindow({ 1280, 720 }, false, { 800, 600 }, "New Window", 0);
	//System::Color<int> windowColor = { 0,255,0,0 };
	GameLoop oGameLoop;

	oGameLoop.Loop();
	
	Graphics::Quit();

	
	


	system("PAUSE");
	return 0;
}