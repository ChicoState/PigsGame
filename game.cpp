#include <iostream>
#include "game.h"
#include "player.h"
#include "die.h"
using namespace std;

Game::Game()
{
	Player player = new Player();
	Player computer = new Player();
	Die die = new Die();
}

void Game::turn(Player current_player)
{
	bool player_keeps_playing;
	string userInput;
	while (player_keeps_playing)
	{
		cout << "Would you like to roll again? (yes or no)" << endl;
		cin >> userInput;
		if (userInput == "yes")
		{
			player_keeps_playing == true;
			roll = die.roll();
			round_score += roll;
		}
		else
		{
			total_score += round_score;
			current_player.update_score(total_score);
			player_keeps_playing = false;
		}
		if (roll == 1)
		{
			round_score = 0;
			player_keeps_playing = false;
		}
		else if (update_score(current_player) == true)
		{
			if (current_player == computer)
				cout << "Game over! Computer beat you!" << endl;
			else
				cout << "Game over! You beat a computer, you should be proud of yourself." << endl;
		}
	}
	if (current_player == player)
		current_player = computer;
	else
		current_player = player;
	turn(current_player);
}