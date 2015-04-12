#ifndef CRAPS_GAME_H
#define CRAPS_GAME_H

#include "Game.h"

#include <iostream>

class Craps_Game : public Game {
private:
 	void setupGame();
 	void enterMainMenu();
public:
	Craps_Game(): Game() {}

	void initializeGame();
	string getName() { return "Craps"; }
};

void Craps_Game::setupGame()
{
}

void Craps_Game::initializeGame()
{
	enterMainMenu();
}

void Craps_Game::enterMainMenu()
{
	printMenu("Craps Menu");
}

#endif