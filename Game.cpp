#include <vector>
#include "Game.h"
#include "Player.h"
#include "CpuPlayer.h"
#include "Io.h"
#include <iostream>

using namespace std;

Game::Game()
{
  m_turn = 0;
  // m_pre_roll = 0;
  // m_current_player = 1;

  addPlayers(1);
  addCpus(1);
}

//returns which players is currently playing
int Game::whosTurn()
{
  if(m_number_of_players == 0)
  {
    return 0;
  }
  return m_current_player;
}

//gets what the current players score is
int Game::getCurrentPlayerScore()
{
    return m_players[m_current_player]->getScore();
}

//takes a number as an argument then adds that number of human players to the game
void Game::addPlayers(int n)
{
  m_number_of_players = n;
  for(int i=0; i < m_number_of_players; i++)
  {
    m_players.push_back(new Player());
  }
}

//takes a number as an argument and adds that number of computer players to the game
void Game::addCpus(int n)
{
  m_number_of_cpus = n;
  for(int i=0; i < m_number_of_cpus; i++)
  {
    m_players.push_back(new CpuPlayer());
  }
}

//sends the current turn score to the player so they can add it to their total, then switches player who is taking their turn
void Game::hold()
{
  // if(m_current_player <= m_number_of_players)
  // {
   m_players[m_current_player]->updateScore(m_current_score);
   // return;
  // }
}

//tells the AI player thats currently playing which roll their on, so it can decide wether to hold or roll, returns true if it wants to roll.
bool Game::holdOrRoll()
{
  if(m_number_of_cpus == 0)
  {
    return false;
  }
  return true;
  // return m_cpus[m_current_player - m_number_of_players - 1]->determine_hold(m_pre_roll,m_current_score,m_turn);
}

//takes an number for what the dice was rolled. If number is 1, then player looses their turn score. Otherwise roll is added to total
int Game::turnScore(int r)
{
  // if(r == 1)
  // {
  //   // turnChange();
  //   m_pre_roll = 0;
  //   return m_current_score = 0;
  // }
    m_turn += 1;
    m_pre_roll = r;
    return m_current_score += r;
}

void Game::start()
{
    int n = 0;
    Io io;

    while(true) {

        m_current_player = n % 2; // change back and forth players (2)
        while (io.turn(m_players[m_current_player], m_current_player, m_current_score) != HOLD)
        {
            int turn = Die::roll();
            if (turn == 1) {
                cout << "\t\t\t =( You rolled 1. Nothing scored!" << endl;
                m_current_score = 0;
                break;
            }
            cout << "\t\t\tYou rolled: " << turn;
            turnScore(turn);
        }
        hold();

        if (m_players[m_current_player]->getScore() >= 100) {
            io.winner(m_current_player);
            return;
        }

        n++;
    }
}
