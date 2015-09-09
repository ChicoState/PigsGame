#include "player.h"
#include "dice.h"
#ifndef GAME_H
#define GAME_H

class Game
{
  public:
    Game();
    Player* WhosTurn();
    int GetPlayersScore();
    bool TurnChange;
    int RollDice();
    bool AddPlayers(*Player);
  private:
    vector<Player*> Players;
}
