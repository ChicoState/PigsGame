#ifndef PLAYER_H
#define PLAYER_H

#include <iostream> 


using namespace std; 

class Player
{
  public: 
    Player(string name);
    int getScore(); 
    void setScore(int player_score);
    string getName();




  private: 
    int m_score; 
    string m_name; 




};
#endif
