#include <string>
#include <iostream>
#include "Player.h"

using namespace std;

Player::Player(string new_name, bool new_cpu)
{
  total   = 0;
  current = 0;
  cpu     = new_cpu;
  name    = new_name;
}

string Player::decision(int amount)
{
  string decision;

  cout << endl;
  cout << name << ":" << endl;
  cout << "A "<<amount<< " was rolled" << endl;

  if((amount + total + current) >= 100)
  {
    decision = "win";
    update(decision, amount);
    cout << "WIN with " << total << endl;
  }
  else if(cpu == false)
  {
    cout << "Current total = "<<current << endl;
    cout << "Game total = "<<total+current << endl;
    cout << "What would you like to do? Roll? Hold? "<< endl;
    cin >> decision;
    update(decision, amount);
  }
  else 
  {
    if (amount == 1)
    {
      decision = "reset";
    }
    else
    {
      if (current <= 20)
      {
        decision = "roll";
      }
      else
      {
        decision = "hold";
      }
    }

    update(decision, amount);

    cout << decision << endl;
    cout << "Current total = "<<current << endl;
    cout << "Game total = "<<total+current << endl;
  }
  return decision;
}

int Player::update(std::string decision, int amount)
{
  if (decision == "reset")
  {
    current = 0;
  }
  else if (decision == "roll")
  {
    current += amount;
  }
  else if (decision == "hold")
  {
    current += amount;
    total += current;
    current = 0;
  }

  return total;
}

//Not Sure what you want returned
int Player::getScore()
{
  return current;
  //return total;
}
