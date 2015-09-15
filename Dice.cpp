#include "Dice.h"

//Upon instansiation we must seed the random number
//generatior.
Dice::Dice()
{
  srand (time(NULL));
}
//This returns a random number between 1 and the 
//MAX_ROLL_VALUE (which is by default 6).
int Dice::roll()
{
  return (rand() % MAX_ROLL_VALUE) + 1;
}

