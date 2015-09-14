#ifndef PLAYER_H
#define PLAYER_H

class Player
{
  public: 
  	Player();
    bool update_score(Player &current_player, int turn_score);
    int get_score();
  private:
    int m_score;
};

#endif
