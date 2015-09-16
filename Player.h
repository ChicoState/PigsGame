#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

class Player
{
	public:
		Player();
		void updateScore(int value);
		int getScore();
	private:
		int mScore;
};

#endif // PLAYER_H_INCLUDED
