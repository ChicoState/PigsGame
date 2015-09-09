#ifndef CPU_H
#define CPU_H
#include "dice.h"

class CPU : protected Player  {

  public:
    CPU(int sides) {  Player(sides);  }
    virtual bool roll() = 0;
  private:
  
};
#endif