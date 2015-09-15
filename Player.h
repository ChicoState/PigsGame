#include <string>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

//The player class  handles both humans and computer players. When calling
//the consturctior  one must provide a name and if the player is a cpu or not. A
//true input for the bool in the constructor means it is a CPU.
class Player 
{
  public:
    Player(string new_name, bool new_cpu);
    string decision(int amount);

  private:
    int update(string decision, int amount);
    string name;
    int total;
    int current;
    bool cpu;
};


#endif
