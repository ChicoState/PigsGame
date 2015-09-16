//Edward Brown
//PigsGame CPU Player class
#ifndef PLAYER_H
#define PLAYER_H
#include "Player.h"
#include "Io.h"
#include <string>

//Note for later: implement a difficulty level
class CpuPlayer: public Player
{
public:
    CpuPlayer();
  	bool determine_hold(int prev_roll, int cur_score, int roll_num);
    virtual int get_command(int);
    virtual std::string name();
};

#endif
