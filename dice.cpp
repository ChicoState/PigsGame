#include "dice.h"

Dice::Dice(int size) {
  size_ = size;
  srand (time(0));
}

int Dice::Roll() {
  int diceValue = (rand() % size_) + 1;
  return diceValue;
}


