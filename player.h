#ifndef PLAYER_H
#define PLAYER_H
#include "dice.h"

class Player{
	public:
		void sumScore(int turnScore);
		void printScore();
		bool gameOver();
		void turn();
		int totalScore;
	private:
		Dice d;
};

#endif