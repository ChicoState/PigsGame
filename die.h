#ifndef DIE_H
#define DIE_H
#include<iostream>
using namespace std;

class Die
{
  public:

    int roll();  // returns a random number from 1-6


  private:

    int die_result;  // actual die roll value

};
#endif
