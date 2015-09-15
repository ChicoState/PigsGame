#ifndef DICE_H
#define DICE_H

#include <stdlib.h>
#include <time.h>

#define MAX_ROLL_VALUE 6

using namespace std;

//This class creates the random dice roll that will be
//used by all players; this includes human and computer
//players.
class Dice
{
  public:
    Dice();
    int roll();
};

#endif
