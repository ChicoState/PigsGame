#include <iostream>
#include "Player.h"

using namespace std;

void Player::updateScore(int value)
{
	mScore += value;
}

int Player::getScore() {
	return mScore;
}
