#ifndef PLAYER_H
#define PLAYER_H

class Player 
{
  private:
    Player();
    string name;
    int total;
    int current;
    bool cpu;
    int level;

  public:
    int action(string decision, int amount);
    int getScore(return total;);

};

#endif
