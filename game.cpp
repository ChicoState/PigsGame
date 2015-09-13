#include "player.h"
#include "computer.h"
#include "dice.h"
#include "game.h"
#include <iostream>
#include <string>
using namespace std;

Game::Game(int numPlayers, int dieSize, string playerName){

  m_numPlayers = numPlayers;

  // Initialize array of players
  m_players = new Player*[m_numPlayers];
  for (int i = 0; i < m_numPlayers; i++ ) m_players[i] = new Player(playerName);

  // Start at beginning of player array
  m_currentPlayer = 0;

  // Default dice size of 6
  m_die = new Dice(dieSize);

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
   for (int i = 0; i<m_numPlayers; i++) delete m_players[i];
  delete[] m_players;

  delete m_die;
  delete m_computer;

  }

void Game::run(){

      while (!m_gameWon){

        m_roundScore = 0;
        
        Player *player = m_players[m_currentPlayer];

        if (m_isPlayerTurn) playerTurn();
        else computerTurn();

        int score = m_isPlayerTurn ? player->getScore() : m_computer->getScore();

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

        int currentRoll = m_die->Roll();
      
        Player *player = m_players[m_currentPlayer];

        cout << player->getName() << " rolled a " << currentRoll << "." << endl;
        cout << endl;

        if (currentRoll == 1){

            cout << player->getName() << "'s turn ends." << endl;
            cout << endl;
            return;

        }

        m_roundScore += currentRoll;

        char answer = '0';

        cout << "Your current round score is " << m_roundScore << "." << endl;

        while (answer != 'H' && answer != 'R'){

            cout << "Do you want to roll or hold? 'R' or 'H'" << endl;
            cin >> answer;
            cout << endl;

            if (answer == 'H'){

                // Add round score to player score
                int playerScore = m_players[m_currentPlayer]->getScore();
                m_players[m_currentPlayer]->setScore(m_roundScore + playerScore);

                 cout << player->getName() << " added a total of " << m_roundScore;
                 cout << " points to their score. They now have " << playerScore + m_roundScore << " points." << endl;
                 cout << endl;

                return;
            }
        }
    }
  }

bool Game::victoryCheck(int score, bool playerTurn, int playerNumber){

    if (score < 100){

        return false;

    }
    
    Player *player = m_players[m_currentPlayer];

    string victor = playerTurn ? player->getName() : "The computer";

    cout << victor << " wins the game with a total of " << score << " points!" << endl;

    return true;

}

void Game::computerTurn(){

    int turnRolls = 0;

    while (true){

        int currentRoll = m_die->Roll();
        turnRolls++;
        m_roundScore += currentRoll;

        cout << "The computer rolled a " << currentRoll << "." << endl;

        if (currentRoll == 1)
        {
            cout << "The computer ended their turn." << endl;
            cout << endl;
            return;
        }

        // Determine if computer is going to roll or hold
        if (!m_computer->turn(turnRolls, m_roundScore)){

            // computer.turn() returns false if they decide to hold

            // Add round score to computer score
            int computerScore = m_computer->getScore();
            m_computer->setScore(m_roundScore + computerScore);

            // TODO separate out reporting into one function?
            cout << "The computer added a total of " << m_roundScore;
            cout << " points to their score. They now have " << m_computer->getScore() << " points." << endl;
            cout << endl;
            return;

        }

    }

  }
