#include "player.h"
#include "dice.h" 

#include<iostream>

using namespace std; 

Player::Player(string name)
{
  m_name=name; 
}

int Player::getScore()
{
  return m_score; 
}

void Player::setScore(int player_score)
{
  m_score = player_score;
}

string Player::getName()
{
return m_name;
}
