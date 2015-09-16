#ifndef COMPUTER_H
#define COMPUTER_H

class Computer
{
  public:
   Computer();
   void play_game();
   int computer_roll();
   int getScore(){return computer_total_score;}
  private:
   int computer_total_score;
   int target_score;

};

#endif
