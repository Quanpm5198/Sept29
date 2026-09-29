#include <iostream>
#include "Function.h"
using namespace std;

int main()
{
	srand(time(0));
	rollDice(6);
	int d4Result = -1;
	int d20Result = -1;
	int numberOfDiceRolls = 0;
	const int NUMBER_OF_EXPERIMENT = 10;
	double totalNumberOfRolls = 0;
	for (int i = 0; i < NUMBER_OF_EXPERIMENT; ++i)
	{

			while (d4Result != 1 && d20Result != 1)
		{
			d4Result = rollDice(4);
			d20Result = rollDice(20);
			cout << "D4 rolled: " << d4Result << " and D20 rolled" << d20Result << endl;
			numberOfDiceRolls++;
		}

			cout << " It took many rolls to roll snake eyes: " << endl;
	}
	system("pause");
	system("CLS");


}