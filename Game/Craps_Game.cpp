#include "Craps_Game.h"

string menuItems[] = {"Play Craps", "", "Return to MainMenu"};

void Craps_Game::setupGame()
{
}

void Craps_Game::initializeGame()
{
	enterMainMenu();
}

void Craps_Game::enterMainMenu()
{
	while(1) {
		system("cls");
		string sel = printMenu("Craps Menu", menuItems, 3);

		if(sel == "1")
			playCraps();
		else if(sel == "2")
			return;
	}
}

void Craps_Game::playCraps()
{

}