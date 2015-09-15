//cpp file for player

#include"player.h"

using namespace std;

void Player:Player(int Score)
{
	Score = TotalScore;
}

void Player:ResetTurnScore()
{
    TurnScore=0;
}
bool Player:CheckForContinue()
{
	string YesOrNo;
	cout << "Roll Again? (y/n)" << endl;
	while()
	{
		cin >> YesOrNo;
		if ( cin == "y")
		{	
			return true;
		}
		else if(cin == "n")
		{
			return false;
		}
		else
		{
			cout << "Please type a y or n"
		}
	}
}
int Player:ReturnTotalScore()
{
    return TurnScore+TotalScore;
}

void Player:PlayerTurn()
{
	int dice;
	while()
	{
		dice = rand () % 6 + 1;
		if (dice == 1)
		{
			ResetTurnScore();
			return;
		}
		TurnScore = TurnScore + dice;
		if(CheckForContinue())
		{
		}
		else
		{
			return;
		}
	}
}