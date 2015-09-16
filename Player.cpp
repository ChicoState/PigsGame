#include <iostream>
#include "Player.h"

using namespace std;

Player::Player()
{
	mScore = 0;
}

void Player::updateScore(int value)
{
	mScore += value;
}

int Player::getScore() {
	return mScore;
}
