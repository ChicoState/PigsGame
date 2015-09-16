#ifndef CPU_H
#define CPU_H
#include "player.h"
#include "dice.h"

class CPU : public Player  {

  public:
    CPU(int sides) : Player(sides) { };
    int Roll();
    bool is_player(); 	
  
};
#endif
