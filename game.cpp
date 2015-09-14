#include <iostream>
#include "game.h"

using namespace std;

Game::Game()
{
}

void Game::turn(Player current_player)
{
	bool player_keeps_playing;
	string userInput;
	int roll;
	Die *test = new Die();

	while (player_keeps_playing)
	{
		cout << "Would you like to roll again? (yes or no)" << endl;
		cin >> userInput;
		if (userInput == "yes")
		{
			player_keeps_playing = true;
			roll = test->roll();
			turn_score += roll;
		}
		else
		{
			current_player.update_score(current_player, turn_score);
			player_keeps_playing = false;
		}
		if (roll == 1)
		{
			turn_score = 0;
			player_keeps_playing = false;
		}
		else if (current_player.update_score(current_player, turn_score) == true)
		{
			return;
		}
	}
}