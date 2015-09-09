#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

class Player
{
	public:
		Player();
		~Player();
		void updateScore(int value);
	private:
		int score;
};

#endif // PLAYER_H_INCLUDED
