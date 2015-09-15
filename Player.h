#include <string>
#ifndef PLAYER_H
#define PLAYER_H

class Player 
{
  private:
    Player();
    std::string name;
    int total;
    int current;
    bool cpu;
    int level;

  public:
    int update(std::string decision, int amount);
    int getScore();

};

#endif
