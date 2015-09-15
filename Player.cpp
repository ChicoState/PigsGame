#include <iostream>
#include "Player.h"

using namespace std;

bool turn()
{
	return true;
}


void Player::updateScore(int value)
{
	mScore += value;
}

int Player::getScore() {
	return mScore;
}
