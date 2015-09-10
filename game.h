#ifndef GAME
#define GAME

#include "player.h"
#include "computer.h"
#include "die.h"

class Game{

  public:
    Game(int, int);
    ~Game();
  void run();

  private:
    Player m_players[];
    Computer m_computer;
    Die m_die;
    bool m_isPlayerTurn;
    bool m_gameWon;
    int m_roundScore;
    int m_currentPlayer;
    int m_numPlayers;
    void playerTurn();
    void computerTurn();
    bool victoryCheck(int, bool, int);

};

#endif // GAME
