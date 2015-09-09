#include<iostream>
#include"player.h"
using namespace std;

Player::Player()
{
  m_score = 0;
  //test
}

Player::update_score(int turn_score)
{
  m_score = m_score + turn_score;
  return m_score;
}

Player::get_score()
{
  return m_score;
}

