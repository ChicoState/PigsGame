#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <string>

class Player
{
	public:
		Player();
		void updateScore(int value);
		int getScore();
		virtual int get_command(int);
		virtual std::string name();
	private:
		int mScore;
};

#endif // PLAYER_H_INCLUDED
