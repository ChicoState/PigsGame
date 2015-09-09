#include <iostream>
#include "dice.h"

using namespace std;

int main()
{
  dice *firstDice = new dice;
  
  cout << firstDice->roll() << endl;

  delete firstDice;
  return 0;
}
