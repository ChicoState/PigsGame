#include <iostream>
#include "player.cpp"
#include "dice.cpp"
using namespace std;

int main(){
	Player p1;
	p1.totalScore = 0;
	//Computer c1;
	Dice d;
	string initIn;
	cout << "Welcome to pigs game! Type 'roll' to play" << endl;
	cin >> initIn;
	if(initIn == "roll"){
		int x = d.roll();
		cout << "You rolled: " << x << endl;
		cout << "Your total score is: " << x << endl;
	}
	while(!p1.gameOver() /*|| !c1.gameOver()*/){
		p1.turn();
		p1.printScore();
		//c1.turn();
		//cout << "Computer's total score is: " << c1.totalScore << endl;
	}	
}