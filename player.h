#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player
{
  public: 
    bool update_score(int turn_score);
    int get_score();
  private:
    int m_score;
}
