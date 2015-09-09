#include "dice.h"

dice::dice()
{
  srand (time(NULL));
}
int dice::roll()
{
  return (rand() % MAX_ROLL_VALUE) + 1;
}

