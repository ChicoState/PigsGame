#ifndef PLAYER_H
#define PLAYER_H

#include <iostream> 


using namespace std; 

class Player
{
  public: 
  player(int score, string name);
  int total();
  bool roll(int roll_num);
  PlayerTurn(int TotalScore); 




  private: 
 int score; 
 string name; 




};
#endif
