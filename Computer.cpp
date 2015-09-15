#include <string>
#include <iostream>
#include "Computer.h"

//Constructor to inialize values.
Computer::Computer()
{
	total = 0;
	current = 0;
}

//Returns true of false if the computer should continue rolling.
bool Computer::continueRolling(int currentTotal)
{
	//Used 20 as a stop point due to the fact after 20 points
	//the probability of scoring more is signficantly reduced.
	if (currentTotal > 20)
		return false;
	else
		return true;
}

//Returns if the computer holds on a roll or not or if it is a reset.
//Depending on the choice the relevant total and current values are adjusted.
//It also checks if the computer hits 100;
std::string Computer::decision(int rollAmount)
{
	if (rollAmount == 0)
	{
		current = 0;
		return "reset";
	}
	else if((rollAmount + total) >= 100)
	{
		return "win";
	}
	else
	{
		if (continueRolling(current))
		{
			current += rollAmount;
			return "roll";
		}
		else
		{
			total += current;
			current = 0;
			return "hold";
		}
	}
}

//Returns the current roll amount.
int Computer::getCurrent()
{
	return current;
}

//Returns the total the computer has.
int Computer::getTotal()
{
	return total;
}