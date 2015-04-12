#ifndef CRAPS_GAME_H
#define CRAPS_GAME_H

#include "Game.h"

#include <iostream>

class Craps_Game : public Game {
private:
 	void setupGame();
 	void enterMainMenu();
 	void playCraps();
public:
	Craps_Game(): Game() {}

	void initializeGame();
	string getName() { return "Craps"; }
};

#endif