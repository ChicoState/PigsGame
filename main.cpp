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

 vector <Player*> players; // creating vector for players
 
   string player_name;
   string temp; 

 for(int k=0; k<numPlayers; k++)
 {
   cout << " Please enter player " <<k<<"'s name? " << endl;
   cin >> player_name;  
   Player player(player_name, false);
   players.push_back(player);
 }

 for(int j=0; j<numCpu; j++)
 {
   temp="Cpu" + j;
   Player cpu(temp, true);
   players.push_back(cpu);
 }

 



  Dice *diceRoll = new Dice; // create dice

  string state = "roll"; 

  for( int i = 0; state != "win";(i++)%(numPlayers+numCpu+1))
  {
    state = "roll";

    while( state == "roll")
    {
      state = player[i].decision(diceRoll.roll());

    }

  } 



  delete diceRoll;
  return 0;
}
