//Header file for Player
#ifndef PLAYER_H;
#define PLAYER_H;
#include<iostream>
#include<string>
using namespace std;

Class Player
{
Public:
	Player()
	void ResetTurnScore();
	bool CheckForContinue();
	void ReturnTotalScore();

Private:
	int TurnScore;
	int TotalScore;
};

#endif