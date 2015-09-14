/*
 * die.cpp
 * date - 9/9/2015
*/
#include "die.h"
#include<iostream>
#include<cstdlib>
#include<ctime>


int Die::roll()
{
srand(time(0));
die_result = (rand() % 6 + 1);
return die_result;
}
