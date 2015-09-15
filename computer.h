#ifndef COMPUTER_H
#define COMPUTER_H

#include "dice.h"


class Computer
{

	public:
		void sumScore(int turnScore);
		void printScore();
		bool gameOver();
		void turn();

	private:
		Dice d;
		int totalScore;

};
#endif