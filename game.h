#include "player.h"
#include "computer.h"
#include "die.h"

class Game{
  
  public:
    Game();
    ~Game();
  void run();
  
  private:
    Player players[];
    Computer computer;
    Die die;
    bool isPlayerTurn;
    int roundScore;
  
  
  
  
  
  
  
}