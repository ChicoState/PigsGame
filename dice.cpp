#include "dice.h"

Dice::Dice(int size) {
  size_ = size;
  srand (time(0));
}

int Dice::Roll() {
  int diceValue = rand() % 6;
  return diceValue;
}
