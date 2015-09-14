#include "cpu.h"

int CPU::Roll()  {
  int roll_num = Player::Roll():
  if(roll_num <= dice->get_sides()/2)
	Roll();
  EndTurn();
  return total_score;
}

bool CPU::is_player()  {    return false;    }
