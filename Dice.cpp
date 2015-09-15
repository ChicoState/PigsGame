#include <cstdlib>  // For the random number generator
#include <ctime>    // Will use time as the random seed
#include "Dice.h"

int Dice::RollDice()
{
    srand(time(NULL));              // Uses the current time as the random seed
    return rand() % Sides + 1;      // Return a random number between 1 and number of sides
}
int Dice::Set_NumSides(int Num)
{
	Sides = Num;
}
