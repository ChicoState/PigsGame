#ifndef DICE_H
#define DICE_H
#include<iostream>

using namespace std;

class Dice{
public:
	void roll();
	int hold();
	void clearTurnScore();
	void addToTurnScore(int roll);
rivate:
	int turnScore;
};

#endif
