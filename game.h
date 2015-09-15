#include "player.h"
#ifndef GAME_H
#define GAME_H

class Game
{
  public:
    Game();
    int whosTurn();
    int getPlayersScore();
    bool turnChange();
    void addPlayers(int n);
    void addComps(int n);
    void setCurrentPlayerScore(int s);
    bool holdOrRoll();
    void hold();
    int turnScore(int r);
    
  private:
    vector<Player*> m_players;
    vector<Comp*> m_comps;
    int m_turn;
    int m_current_score;
    int m_number_of_players;
    int m_numnber_of_comps;
    int m_current_player;
}
;
#endif
