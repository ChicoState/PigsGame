#include <string>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H


class Player 
{
  public:
    Player(string new_name, bool new_cpu);
    string decision(int amount);
    int getScore();

  private:
    int update(string decision, int amount);
    string name;
    int total;
    int current;
    bool cpu;
};


#endif
