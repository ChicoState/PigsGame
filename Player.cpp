#include <string>
#include <iostream>
#include "Player.h"

using namespace std;

//Constructor for the Player Class
//requires a name and a boolean that is set to true if the
//player is a cpu.
Player::Player(string new_name, bool new_cpu)
{
  total   = 0;
  current = 0;
  cpu     = new_cpu;
  name    = new_name;
}

//This function provides the means to communicate with 
//the users by informing them of their current totals, their
//overall totals and the values of their rolls. It also requests
//what actions the players wish to make when it is their turn.
//It also is responsible for controlling the computer . Finnally
//it determines if a certain player has one. The results of 
//these actions is reported to the main application which
//monitors the string outputs of this function in order to 
//determine if it is the next players turn or if the game is over. 
string Player::decision(int amount)
{
  string decision;

  //Inform the user of their current die roll.
  cout << endl;
  cout << name << ":" << endl;
  cout << "A "<<amount<< " was rolled" << endl;

  if(amount == 1) //Determine if the player scored nothing this round.
  {
    decision = "reset";
    update(decision, amount);
    cout << "You lost your turn, total = " << total << endl;
  }
  else if((amount + total + current) >= 100) //Determine if there is a winner.
  {
    decision = "win";
    update(decision, amount);
    cout << "WIN with " << total << endl;
  }
  else if(cpu == false) //If it the current player is not a computer we must ask what they want to do.
  {
    cout << "Turn total = " << current+amount << endl;
    cout << "Game total = " << total+current+amount << endl;
    cout << "What would you like to do? [roll, hold] "<< endl;
    cin >> decision;

    while (decision != "hold" && decision != "roll")
    {
      cout << "The options are hold are roll, please try again." << endl;
      cin >> decision;
    }
    update(decision, amount);
  }
  else //This is a computer so we automatically determine what they do.
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

	//We have to update the current total and game total for this player.
    update(decision, amount);

	//Inform the user of the results of this round for them.
    cout << decision << endl;
    cout << "Current total = "<<current << endl;
    cout << "Game total = "<<total+current << endl;
  }
  return decision;
}

//During the process of a player doing his or her turn values
//must be updated such as the current roll total and the total
//a player has scored through a game. The values that are 
//updated are based off the decision string, and the current
//roll amount which are the inputs of this function. The output
//of this function tells what the current total for the player is.
void Player::update(std::string decision, int amount)
{
  if (decision == "reset")
  {
    current = 0;
  }
  else if (decision == "roll")
  {
    current += amount;
  }
  else if ((decision == "hold") || (decision == "win"))
  {
    current += amount;
    total += current;
    current = 0;
  }
}
