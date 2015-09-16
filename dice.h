#ifndef DICE_H
#define DICE_H

class Dice{
	public:
		int roll();
		int hold();
		void clearTurnScore();
		int addToTurnScore(int roll);
		int turnScore;
		void rolledOne();
	private:
		
};

#endif