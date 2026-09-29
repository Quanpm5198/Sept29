#include"Function.h"
#include<iostream>
int rollDice(int numberOfSidesOndice)
{
	srand(time(0));
	int whatTheDiceRolled = (rand() % numberOfSidesOndice) + 1;
	return whatTheDiceRolled;

}