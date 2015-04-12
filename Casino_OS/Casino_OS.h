#ifndef CASINO_OS_H
#define CASINO_OS_H

#include "../Game/Game.h"

#include <string>
#include <vector>

using namespace std;

class Casino_OS {
private:
	vector<Game *> games;
	vector<string> menuItems;
	string * ptrItems;

	void setupOS();
	void printMainMenu();
public:
	Casino_OS();
};

#endif