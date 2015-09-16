#include <iostream>
#include "Player.h"

using namespace std;

Player::Player()
{
	mScore = 0;
}

int Player::get_command(int r) {
	return -1; // human player
}

void Player::updateScore(int value)
{
	mScore += value;
}

int Player::getScore() {
	return mScore;
}

std::string Player::name() {
	return "Player";
}
