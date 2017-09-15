// makeChange.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
	double itemCost = 1, moneyAmount, changeAmount, extraMoney, additionalAmount, rotator;
	int dollars, quarters, dimes, nickles, pennies;
	


	while (itemCost > 0)
	{

		cout << "Please enter the cost of the item: (enter 0 to exit)" << endl;
		cin >> itemCost;
		if (itemCost <= 0)
			{
				exit(0);
			}
		cout << "Please enter the amount paid:  " << endl;
		cin >> moneyAmount;
		while (moneyAmount < itemCost) 
			{
				additionalAmount = itemCost - moneyAmount;
				cout << "That is not enough! You need " << additionalAmount << " more!" << endl;
				cout << "Please enter additional amount:  " << endl;
				cin >> extraMoney;
				moneyAmount = moneyAmount + extraMoney;
			}
		changeAmount = moneyAmount - itemCost;
		rotator = changeAmount;
		dollars = rotator / 1;
		//rotator = rotator - dollars;
		rotator = fmod(rotator, 1);
		quarters = rotator / .25;
		rotator = fmod(rotator, .25);
		dimes = rotator / .1;
		rotator = fmod(rotator, .1);
		nickles = rotator / .05;
		rotator = fmod(rotator, .05);
		pennies = rotator / .01;
		rotator = fmod(rotator, .1);

		cout << "Item Price $" << itemCost << " amount paid $" << moneyAmount << " change due $" << changeAmount << endl;
		cout << "Your Change: " << endl;
		if (dollars > 0)
		{
			cout << dollars << " dollar(s)" << endl;
		}
		if (quarters > 0)
		{
			cout << quarters << " quarter(s)" << endl;
		}
		if (dimes > 0)
		{
			cout << dimes << " dime(s)" << endl;
		}
		if (nickles > 0)
		{
			cout << nickles << " nickle(s)" << endl;
		}
		if (pennies > 0)
		{
			cout << pennies << " pennie(s)" << endl;
		}
		cout << endl;
		cout << endl;
		cout << "Next Item: " <<  endl;
		//system("PAUSE");
	}

	

}

