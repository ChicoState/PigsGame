#include "dice.h"
#include <iostream>

using namespace std;

int Dice::roll(){
	int curRoll = rand() % 6 +1;
	
	if(curRoll == 1){
		clearTurnScore();
		rolledOne();
		return 1;
	}
	else{
		addToTurnScore(curRoll);
	}
	return curRoll;
}

int Dice::hold(){
	return turnScore;
}

void Dice::clearTurnScore(){
	turnScore = 0;
}		

int Dice::addToTurnScore(int roll){
	turnScore += roll;
	return turnScore;
}

void Dice::rolledOne(){
	turnScore = 0;
	cout << "You rolled a one! Score for turn lost, your turn is over" << endl;
}