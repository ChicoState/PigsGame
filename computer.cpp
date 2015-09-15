#include "computer.h"
#include <iostream>
using namespace std;



void Computer::sumScore(int turnScore){
	totalScore = totalScore + turnScore;
}

void Computer::printScore(){
	cout << "Computer's total score is: " << totalScore << endl;
}

bool Computer::gameOver(){
	if(totalScore >= 100){
		cout << "Game over, Computer wins!" << endl;
		return true;
	}
	return false;
}

