#include "Player.h"
//#include "dice.h" 

#include<iostream>

using namespace std; 

Player::Player(string name)
{
  name=m_name; 
}

int Player::getScore()
{
  return m_score; 
}

void Player::setScore(int)
{
  int score = m_score;
}

string Player::getName()
{
return m_name;
}
