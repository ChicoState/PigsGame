using namespace std;
#include "player.h"

Player::Player()
{
	score = 0;
	turn_total = 0;
	hold = false;
	did_win = false;
}

Player::~Player(){}

void Player::endTurn(int roll)
{
	hold = true;
	if(roll == 0)
	{
	//Hold
		score = turn_total + score;	
		if(score >= 100)
		{
			did_win = true;
		}
	}	
	else
	{
	//Rolled a 1
		turn_total = 0;

	}
	return;
}
void Player::increaseTurnTotal(int roll)
{
	turn_total = turn_total + roll;
	return;
}	
