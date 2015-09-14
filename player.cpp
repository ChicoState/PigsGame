//cpp file for player

#include"player.h"

using namespace std;

void Player:Player(int Score)
{
	Score = TotalScore;
}

void Player:ResetTurnScore()
{

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
void Player:ReturnTotalScore()
{
	
}