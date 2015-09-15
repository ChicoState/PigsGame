#ifndef __DICE__
#define __DICE__

#include <time.h>

class Dice
{
  private:
	int Sides;
  public:
        Dice(){ Sides = 6; }  // Initialize with 6 sides
	int RollDice();
	int Set_NumSides(int);
};

#endif
