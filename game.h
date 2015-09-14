#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "die.h"

#include <string>
using namespace std;

class Game
{
public:
	Game();
	void turn(Player current_player);

private:
	int turn_score;

};

#endif
