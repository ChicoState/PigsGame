#ifndef PLAYER_H
#define PLAYER_H

#include<iostream>
using namespace std;

class Player
{
  public: 
    int update_score(int turn_score);
    void get_score();
  private:
    int m_score;
}
