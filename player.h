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
	void PlayerTurn();

Private:
	int TurnScore;
	int TotalScore;
};

#endif
