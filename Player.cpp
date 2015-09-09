#include <iostream>
#include "Player.h"

Player::Player()
{
  total = 0;
  current = 0;
  cpu = false;
  level = 1;
}

int Player::update(string decision, int amount)
{
  if (decision == "reset")
  {
    current = 0;
  }
  else if (decision == "roll")
  {
    current += amount;
  }
  else if (decision == "hold")
  {
    current += amount;
    total += current;
    current = 0;
  }

  return total;
}

