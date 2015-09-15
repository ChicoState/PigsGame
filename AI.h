#ifndef __AI__
#define __AI__

#include "Player.h"

class AI : public Player
{
private:
public:
	int RollDie(Dice *Die);
};

#endif