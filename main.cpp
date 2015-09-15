#include <iostream>
#include "Player.h"
#include "dice.h"

using namespace std;

int main()
{
  dice *firstDice = new dice;

  cout << "It is time to play Pigs Game!\n";

  Player *player1 = new Player("Natalie", false);
  Player *player2 = new Player("Chris", false);

  Player *array[2];
  array[0] = player1;
  array[1] = player2;
  
  string state = "roll";

  for(int i = 0;  state != "win"; i = (i+1)%2)
  {
    state = "roll";
    while(state == "roll")
    {
      state =  array[i]->decision(firstDice->roll());
    }
  }

  //cout << firstDice->roll() << endl;


  //Cleanup
  delete firstDice;
  delete player1;
  delete player2;

  return 0;
}
