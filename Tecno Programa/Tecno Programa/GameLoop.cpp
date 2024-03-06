#include <iostream>
#include <Windows.h>
#include <WinUser.h>

int main(){
	//CONFIGURATION
	// 
	std::cout << "CONFIGURATION" << std::endl;
	//Setup initial parameters of the game (weather, player name, 
	const int FPS = 1;
	int frameCount = 0;
	bool userPressedUpKey = false;

	//GAME LOOP
	while(true)
	{
		
		//INPUT
		if (GetAsyncKeyState(VK_ESCAPE)) 
		{
			std::cout << "EXITING GAME LOOP" << std::endl;
			break;
		}
		if (GetAsyncKeyState(VK_UP))
		{
			userPressedUpKey = true;		
		}

		//UPDATE
		if(frameCount >= 9 || userPressedUpKey)
		{
			frameCount = 0;
		}

		if (userPressedUpKey)
		{
			system("cls");
			userPressedUpKey = false;
		}
		//RENDER
		std::cout << ++frameCount << std::endl;

		//SLOW DOWN
		Sleep(1000 / FPS);
	}

}