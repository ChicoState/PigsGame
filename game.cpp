#include <iostream>
#include "game.h"
#include "player.h"
using namespace std;

Game::Game()
{
	Player player = new Player();
	Player computer = new Player();
}

void Game::turn(int roll, Player current_player)
{
	bool player_keeps_playing;
	string userInput;
	while (player_keeps_playing)
		{
			cout << "Would you like to roll again? (yes or no)" << endl;
			cin >> userInput;
			if (userInput == "yes")
				player_keeps_playing == true;
			else
			{
				total_score += round_score;
				current_player.update_score(total_score);
				player_keeps_playing = false;
				return;
			}
			if (roll == 1)
				{
					round_score = 0;
					return;
				}
		}
}