#ifndef DICE_H
#define DICE_H

class Dice{
	public:
		void roll();
		void hold();
		void clearTurnScore();
		void addToTurnScore(int roll);
	private:
		int turnScore;
}