using namespace std;
#include "player.h"

Player::Player()
{
	score = 0;
	turn_total = 0;
	hold = false;
	turns = 0;
	did_win = false;
}

Player::~Player(){}

void Player::end_turn(int roll)
{
	if(roll == 0)
	{
	//Hold
		score += turn_total;	
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
