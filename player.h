#ifndef __PLAYER__
#define __PLAYER__

#include "dice.h"


class Player {
	public:
		Player(int Sides);
		~Player();
		bool is_player();
		int GetTotalScore();
		int GetTurnScore();
		int Roll();
		void EndTurn();
	private:
		int total_score,
				turn_score;

		Dice *dice;
};

#endif /* __PLAYER__ */
