#include "Game.h"
using namespace std;

Game::Game()
{
  int m_turn = 0;
  int m_currentPlayer = 1;
}

//returns which players is currently playing
int whosTurn()
{
  if(m_number_of_players == 0)
  {
    return 0;
  }
  return m_current_player;
}

//gets what the current players score is
int getCurrentPlayerScore()
{
  if(m_current_player <= m_number_of_players)
  {
    return m_players[current_player-1]->getScore();
  }
  if(m_current_player <= (m_number_of_comps + m_number_of_players))
  {
    return m_comps[current_player - m_number_of_players - 1]->getScore();
  }
}

//changes which player is taking their turn
bool turnChange()
{
  m_turn = 0;
  if(m_number_of_players == O)
  {
    return false;
  }
  if( m_current_player < (m_number_of_players + m_num_of_comps))
  {
    m_current_player = m_current_player+1;
  }
  else
  {
    m_current_player = 1;
  }
  return true;
}

//takes a number as an argument then adds that number of human players to the game
void addPlayers(int n)
{
  m_number_of_Players = n;
  for(i=0; i <m_number_players; i++)
  {
    m_players.pushback(new Player());
  }
}

//takes a number as an argument and adds that number of computer players to the game
void addComps(int n)
{
  m_number_of_comps = n;
  for(i=0; i <m_number_players; i++)
  {
    m_comps.pushback(new Comp());
  }
}

//sends the current turn score to the player so they can add it to their total, then switches player who is taking their turn
void hold()
{
  if(m_current_player <= m_number_of_players)
  {
   m_players[current_player-1]->setScore(m_current_score);
   return;
  }
    return m_comps[current_player - m_number_of_players - 1]->setScore(m_current_score);
}

//tells the AI player thats currently playing which roll their on, so it can decide wether to hold or roll, returns true if it wants to roll.
bool holdOrRoll()
{
  if(m_number_of_comps == 0)
  {
    return false;
  }
  return m_comps[current_player - m_number_of_players - 1]->roll(m_turn);
}

//takes an number for what the dice was rolled. If number is 1, then player looses their turn score. Otherwise roll is added to total
int turnScore(int r)
{
  if(r == 1)
  {
    turnChange();
    return m_current_score = 0;
  }
    m_turn += 1;
    return m_current_score += r;
}
