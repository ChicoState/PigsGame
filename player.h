#ifndef PLAYER_H
#define PLAYER_H

class Player{
	public:
		void addTurnScore(int turnScore);
		void printScore();
		void checkScore();
		void gameOver();
	private:
		int totalScore;
}