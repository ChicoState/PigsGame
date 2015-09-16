#include "computer.h"
#include <iostream>
using namespace std;



Computer::Computer()
{
	totalScore = 0;
}

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

void Computer::turn(){

	cout << endl << endl << endl;

	d.clearTurnScore();
	
	int roll, runningTotal;
	int rollCount = 0;

	while(rollCount < 3 && roll != 1)
	{
		roll = d.roll();

		rollCount++;

		cout << "Computer rolled: " << roll << endl;

		runningTotal = totalScore + d.addToTurnScore(0);

		cout << "Computer's running total score is: " << runningTotal << endl;
	}

	sumScore(d.hold());

	cout << "Computer's total score is: " << totalScore << ", and its turn is over." << endl;

	cout << endl << endl << endl;
}