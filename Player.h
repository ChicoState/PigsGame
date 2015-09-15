#ifndef __PLAYER__
#define __PLAYER__

#include "Dice.h"

class Player
{
private:
	int TempScore;
	int OverallScore;
	bool Hold;

public:


	Player() : TempScore(0), OverallScore(0), Hold(false)
	{}

	virtual int RollDie(Dice *Die); //Roll of non 1 adds to TempScore, roll of 1: TempScore = 0
	bool Get_Hold(); 
	void Set_Hold(bool);
};

#endif