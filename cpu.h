#ifndef CPU_H
#define CPU_H
#include "dice.h"

class CPU : protected Player  {

  public:
    CPU(int sides) {  Player(sides);  }
    virtual int Roll() = 0;
    virtual bool is_player() = 0; 	
  
};
#endif
