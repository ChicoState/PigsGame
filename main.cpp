#include <iostream>
#include "Player.h"
#include "dice.h"

using namespace std;

int main()
{
  dice *firstDice = new dice;
  int coinFlip, temp, currentPlayer;
  bool winner = false;


  cout << "It is time to play Pigs Game!\n";
  cout << "Choose Heads(1) or Tails(2) to see who goes first\n";
  cin >> coinFlip;

  temp = firstDice->roll();

  if(temp > 3 && coinFlip == 2)
  {
	  cout << "You won the coin toss!\n";
	  currentPlayer = 1;
  }
  else if (temp < 4 && coinFlip == 1)
  {
	  cout << "You won the coin toss!\n";
	  currentPlayer = 1;
  }
  else
  {
	  cout << "The computer won the coin toss!\n";
	  currentPlayer = 0;
  }

  while (!winner)
  {
	  if (currentPlayer == 0)
	  {

	  }
	  else
	  {

	  }

  }

  

  //cout << firstDice->roll() << endl;


  //Cleanup
  delete firstDice;

  return 0;
}
