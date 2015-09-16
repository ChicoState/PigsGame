#include "person.h"
#include "computer.h"

#include<iostream>
#include<string>
#include<assert.h>
#include<stdlib.h>
#include<time.h>

using namespace std;


Person::Person()
{
 player_total_score = 0;
}

void Person::play_game()
{
 string initial_input;
 int roll_value = 0;
 int current_roll = 0;
 int running_total = 0;


  cout << "Player, your total score is: " << player_total_score << endl;
  cout << "Player, would you like to roll, or will you hold?" << endl;
  getline(cin, initial_input);

  while(initial_input != "hold" && current_roll == 0)
  {
   current_roll = player_roll();
  
   cout << "You rolled a: " << current_roll << endl;
   if(current_roll == 1)
   {
    break;
   }
   running_total += current_roll;
  
   cout << "So far, your score for this round is: " << running_total << endl; 
   cout << "Player, would you like to roll, or will you hold?" << endl;
   getline(cin, initial_input);
   current_roll = 0;
   continue;
  }
 
  if(current_roll == 1)
  {
   cout << "You rolled a 1, no points added for current turn" << endl;
   running_total = 0;
   player_total_score += running_total;
   cout << "Your score is still: " << player_total_score << endl;
  }

  if(initial_input == "hold")
  {
   cout << "player decided to hold" << endl;
   player_total_score += running_total;
   cout << "Your score is: " << player_total_score << endl;
  }
}

int Person::player_roll()
{
 int dice_roll;
 srand(time(NULL));
 dice_roll = (rand()%6) + 1;
 return dice_roll;
} 

