#ifndef GAME_H
#define GAME_H

#include "../Util/Out_Util.h"
#include <string>

using namespace std;

class Game {
private:
	bool flagRunning;

	virtual void setupGame() {}
public:
	Game() : flagRunning(false) { setupGame(); }
	
	virtual void initializeGame() {}
	virtual string getName() { return ""; }
	bool isRunning() { return flagRunning; }
};

#endif