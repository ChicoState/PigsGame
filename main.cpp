//main file for pigsgame
#include <iostream>
#include <string>
#include "player.h"
using namespace std;

int main()
{	
 player p;
 computer c;
 int player_win = 0;
 int computer_win = 0;
 while(1)
 {
   player_win = p.turn();
   if(player_win >= 100)
   {
    cout << "Player Wins!\n";
    exit(0); 
   }
   computer_win = c.turn();
   if(computer_win >= 100)
   {
     cout << "Computer Wins!\n";
     exit(0);
   }
 }
}