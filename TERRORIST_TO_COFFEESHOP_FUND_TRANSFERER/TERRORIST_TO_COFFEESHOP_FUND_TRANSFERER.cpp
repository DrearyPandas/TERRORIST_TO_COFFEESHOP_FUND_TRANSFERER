// TERRORIST_TO_COFFEESHOP_FUND_TRANSFERER.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;


// declare functions for main similar to variables
void copySwap(int x, int y);
void realSwap(int& x, int& y);

// main function 
int main()
{
	int joesCoffeeFund = -25000; // declaring and initializing
	int terrorFund = 5020000; // declaring and initializing
	cout << "The 'Big Noodle Terrorists' have somehow cornered a fairly lucrative portion of the handmade woolen sweater market.\n";// print text to console
	cout << "Since the profits they've made will surely be used for evil, our agents have decided to swap the bank balances of their favorite local coffee shop, Joe's.\n\n";// print text to console
	cout << "Current Values\n"; // print text to console
	cout << "Joe's Coffee Shop's Bank Balance: " << joesCoffeeFund << "\n";  // print text to console with variable inserted
	cout << "Terror Fund Account: " << terrorFund << "\n\n"; // print text to console with variable inserted
	cout << "Running bank balance switcher program...\n";// print text to console
	cout << "Current Values\n"; // print text to console
	copySwap(joesCoffeeFund, terrorFund);// calls the copyswap function
	cout << "Joe's Coffee Shop's Bank Balance: " << joesCoffeeFund << "\n"; // print text to console with variable inserted
	cout << "Terror Fund Account: " << terrorFund << "\n\n"; // print text to console with variable inserted

	cout << "Bank balance switcher program failed. Retrying with different method...\n";// print text to console
	cout << "Current Values\n";// print text to console
	realSwap(joesCoffeeFund, terrorFund);// calls the realswap function
	cout << "Joe's Coffee Shop's Bank Balance: " << joesCoffeeFund << "\n"; // print text to console with variable inserted
	cout << "Terror Fund Account: " << terrorFund << "\n"; // print text to console with variable inserted

	return 0;
}

void copySwap(int x, int y) // copies data and changes it
{
	int temp = x;
	x = y;
	y = temp;
}

void realSwap(int& x, int& y) // modifies original data
{
	int temp = x;
	x = y;
	y = temp;
}

