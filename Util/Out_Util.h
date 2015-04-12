#ifndef OUT_UTIL_H
#define OUT_UTIL_H

#include <iostream>
#include <string>

using namespace std;

/*=========================================
=            Utility Functions            =
=========================================*/

static string printMenu(string title, string menuList[], int size)
{
	cout << "### # " << title << " # ###" << endl << endl;

	for(int i = 0; i < size; i++)
		cout << "[" << i << "] " << menuList[i] << endl;
	cout << "Please Select An Option: ";

	string input;
	cin >> input;
	return input;
}

#endif