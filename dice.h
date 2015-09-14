#ifndef DICE_H
#define DICE_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class Dice {
 public:
  Dice(int size);
  int Roll();
 private:
   int size_;
};
#endif //DICE_H