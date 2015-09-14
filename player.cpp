#include"player.h"
using namespace std;

Player::Player()
{
  m_score = 0;
}

bool Player::update_score(int turn_score)
{
  m_score = m_score + turn_score;

  if(m_score >= 100)
    return true;
  else
    return false;
}

int Player::get_score()
{
  return m_score;
}

