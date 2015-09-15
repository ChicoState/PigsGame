#include <iostream>
#include "player.cpp"
#include "dice.cpp"
#include "computer.cpp"
using namespace std;

int main(){
	Player p1;
	Computer c1;

	p1.totalScore = 0;
	//Computer c1;
	Dice d;
	string initIn;
	cout << "Welcome to pigs game! Type 'ready' to play" << endl;
	cin >> initIn;
	if(initIn == "ready"){

		p1.turn();

		c1.turn();

		/*int x = d.roll();
		cout << "You rolled: " << x << endl;
		cout << "Your total score is: " << x << endl;*/
	}
	while(!p1.gameOver() /*|| !c1.gameOver()*/){
		p1.turn();

		c1.turn();
		c1.printScore();
	}	
}