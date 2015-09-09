#ifndef PLAYER_H
#define PLAYER_H

class Player
{
	public:
		Player();
		~Player();
		int score;
		int turn_total;
		bool hold;
		int turns;
		void end_turn(int roll);
		bool did_win;
};

#endif
