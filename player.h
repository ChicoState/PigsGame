#ifndef PLAYER_H;
#define PLAYER_H;
using namespace std;

Class Player
{
Public:
	Player()
	void ResetTurnScore();
	void CheckForContinue();
	void ReturnTotalScore();

Private:
	int TurnScore;
	int TotalScore;
};

#endif
