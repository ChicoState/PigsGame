#include "Dice.h"

Dice::Dice()
{
  srand (time(NULL));
}
int Dice::roll()
{
  return (rand() % MAX_ROLL_VALUE) + 1;
}

