#include "player.h"

Player::Player(int Sides) {
	total_score = 0;
	turn_score = 0;

	dice = new Dice(Sides);
}

Player::~Player() {
	delete dice;
}

int Player::GetTotalScore() {
	return total_score;
}

int Player::GetTurnScore() {
	return turn_score;
}

int Player::Roll() {
	int roll = dice->GetSides();

	if (roll == 1) {
		turn_score = 0;
	} else {
		turn_score += roll;
	}

	return roll;
}

void EndTurn() {
	total_score += turn_score;
	turn_score = 0;
}
