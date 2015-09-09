#ifndef DICE_H
#define DICE_H

#include <stdlib.h>
#include <time.h>

#define MAX_ROLL_VALUE 6

using namespace std;

class dice
{
  public:
    dice();
    int roll();
};

#endif
