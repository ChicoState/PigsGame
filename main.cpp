#include <iostream>
#include <vector>
#include <string>
#include "Dice.h"
#include "Player.h"

using namespace std;


int main()
{ 
  int numPlayers;
  cout << " How many human players? " << endl;
  cin >> numPlayers;

  int numCpu;
  cout << " How many cpu players? " << endl;
  cin >> numCpu;

  vector<Player*> players; // creating vector for players

  string player_name;
  string temp; 

  for(int k=0; k<numPlayers; k++)
  {
    cout << " Please enter player " <<k<<"'s name? " << endl;
    cin >> player_name;  
    players.push_back(new Player(player_name, false));
  }

  for(int j=0; j<numCpu; j++)
  {
    temp="Cpu" + j;
    players.push_back(new Player (temp, true));
  }


  Dice *diceRoll = new Dice; // create dice

  string state = "roll"; 

  cout << "<<<<<<<<<<<<<<<<<<<< Start Game! >>>>>>>>>>>>>>>>>>>>" << endl;
  for( int i = 0; state != "win"; i = (i+1)%(numPlayers+numCpu))
  {
    state = "roll";

    while( state == "roll")
    {
      state = players[i]->decision(diceRoll->roll());
    }
    cout << endl << "<<<<<<<<<<<<<<< Next Player >>>>>>>>>>>>>>>" << endl;
  } 

  for(unsigned int i = 0; i < players.size(); ++i)
  {
    delete players[i];
  }

  delete diceRoll;

  return 0;
}
