#include <iostream>
#include "player.h"
using namespace std;


void Player::sumScore(int turnScore){
	totalScore = totalScore + turnScore;
}

void Player::printScore(){
	cout << "Your score is: " << totalScore << endl;
}

bool Player::gameOver(){
	if(totalScore >= 100){
		cout << "Game over, Player wins!" << endl;
		return true;
	}
	return false;
}

void Player::turn(){
	d.turnScore = 0;
	string x;	
	int roll, runningTotal;
	cout << "Roll or hold?" << endl;
	cin >> x;
	while(x!="hold"){
		if(x == "roll"){
			roll = d.roll();

			if(roll == 1)
				break;

			cout << "You rolled: " << roll << endl;
			runningTotal = totalScore + d.addToTurnScore(0);
			cout << "Your running total score is: " << runningTotal << endl;
			cout << "Roll or hold?" << endl;
		}
		if(x!="hold" && x!= "roll"){
			cout << "Invalid input. Enter 'roll' or 'hold'.";
		}		
		cin >> x;
	}
	int score = d.hold();
	sumScore(score);
	cout << "Your total score is: " << totalScore << ", your turn is now over." << endl;
}