#include "game.h"
#include "player.h"

using namespace std;

int main()
{
    Game game;

    Player *player = new Player();
    Player *computer = new Player();
    Player *current_player = player;

    while (player->get_score() < 100 || computer->get_score() < 100)
    {
    	if (current_player == player)
			current_player = computer;
		else
			current_player = player;
		game.turn(current_player);
    }
    if (current_player == computer)
		cout << "Game over! Computer beat you!" << endl;
	else
		cout << "Game over! You beat a computer, you should be proud of yourself." << endl;

	return 0;
}