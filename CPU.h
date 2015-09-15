//Edward Brown
//PigsGame CPU Player class
#ifndef PLAYER_H
#define PLAYER_H
#include "Player.h"

//Note for later: implement a difficulty level
class CPU_Player: public Player
{
  private:
  	bool determine_hold(int prev_roll, int cur_score, int roll_num);
};

#endif
