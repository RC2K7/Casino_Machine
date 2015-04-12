#include "Casino_OS.h"
#include "../Util/Out_Util.h"
#include "../Game/Craps_Game.h"

#include <stdlib.h>
#include <time.h>

Casino_OS::Casino_OS()
{
	srand(time(0));
	setupOS();
	printMainMenu();
}

void Casino_OS::setupOS()
{
	games.push_back(new Craps_Game());

	for(int i = 0; i < games.size(); i++)
		menuItems.push_back(games[i]->getName());

	menuItems.push_back("");
	menuItems.push_back("EXIT");

	ptrItems = &menuItems[0];
}

void Casino_OS::printMainMenu()
{
	while(1)
	{
		system("cls");
		string input = printMenu("Casino Main Menu", ptrItems, menuItems.size());

		if(input == "0")
			games[0]->initializeGame();
		else if (input == "2")
			exit(0);
	}
}