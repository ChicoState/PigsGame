/*
 * die.cpp
 * date - 9/9/2015
 */
#include "die.h"
#include<iostream>
#include<cstdlib>
#include<ctime>


Die::Die()
{
}

int Die::roll()
{
  //srand(time(0)); //needs to be called in main once 
  //and not in a loop
  die_result = (rand() % 6 + 1);
  return die_result;
}
