#ifndef PERSON_H
#define PERSON_H

#include<iostream>


class Person
{
 public:
  Person();
  void play_game();
  int player_roll(); 
  int getScore(){return player_total_score;}

 private:
  int player_total_score;

};

#endif
