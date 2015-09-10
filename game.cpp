#include "player.h"
#include "computer.h"
#include "die.h"
#include "game.h"
#include <iostream>
#include <string>
using namespace std;

Game::Game(int numPlayers, int dieSize){

  m_numPlayers = numPlayers;

  // Initialize array of players
  m_players = new Player[m_numPlayers];
  for (int i = 0; i < m_numPlayers; i++ ) m_players[i] = new Player();

  // Start at beginning of player array
  m_currentPlayer = 0;

  // Default dice size of 6
  m_die = new Die(dieSize);

  // Default computer difficulty of 1
  m_computer = new Computer(1);

  // Start with the player
  m_isPlayerTurn = true;

  // Initialize round score to zero
  m_roundScore = 0;

  m_gameWon = false;

  }

Game::~Game(){

  // Free allocated memory
  delete[] m_players;

  // TODO do you need to delete each individual player?
  delete m_die;
  delete m_computer;

  }

void Game::run(){

      while (!m_gameWon){

        m_roundScore = 0;

        if (m_isPlayerTurn) playerTurn();
        else computerTurn();

        int score = m_isPlayerTurn ? m_players[m_currentPlayer].getScore() : m_computer.getScore();

        // Check for victory!
        if (victoryCheck(score, m_isPlayerTurn, m_currentPlayer)) m_gameWon = true;

        // Change turns - player vs computer
        m_isPlayerTurn = !m_isPlayerTurn;

        // Change number of player (player 1, player 2, etc)
        m_currentPlayer = (m_currentPlayer + 1) % m_numPlayers;

        // TODO Reset game to play again?

      }
    }

void Game::playerTurn(){

    while (true){

        int currentRoll = m_die.roll();

        cout << "Player rolled a " << currentRoll << "." << endl;

        if (currentRoll == 1){

            cout << "Player's turn ends." << endl;
            return;

        }

        m_roundScore += currentRoll;

        char answer = '0';

        cout << "Your current round score is " << m_roundScore << "." << endl;

        while (answer != 'H' && answer != 'R'){

            cout << "Do you want to roll or hold? 'R' or 'H'" << endl;
            cin >> answer;

            if (answer == 'H'){

                // Add round score to player score
                int playerScore = m_players[m_currentPlayer].getScore();
                m_players[m_currentPlayer].setScore(m_roundScore + playerScore);

                 cout << "Player " << m_currentPlayer << "added a total of " << m_roundScore;
                 cout << " points to their score. They now have " << playerScore + m_roundScore << " points." << endl;

                return;
            }
        }
    }
  }

bool Game::victoryCheck(int score, bool player, int playerNumber){

    if (score < 100){

        return false;

    }

    string victor = player ? "Player " + to_string(playerNumber) : "The computer";

    cout << victor << " wins the game with a total of " << score << " points!" << endl;

    return true;

}

void Game::computerTurn(){

    int turnRolls = 0;

    while (true){

        int currentRoll = die.roll();
        turnRolls++;
        m_roundScore += currentRoll;

        cout << "The computer rolled a " << currentRoll << "." << endl;

        if (currentRoll == 1)
        {
            cout << "The computer ended their turn." << endl;
            return;
        }

        // Determine if computer is going to roll or hold
        if (!computer.turn(turnRolls, m_roundScore)){

            // computer.turn() returns false if they decide to hold

            // Add round score to computer score
            int computerScore = m_computer.getScore();
            computer.setScore(m_roundScore + computerScore);

            // TODO separate out reporting into one function?
            cout << "The computer added a total of " << m_roundScore;
            cout << " points to their score. They now have " << m_computer.getScore() << " points." << endl;
            return;

        }

    }

  }

}
