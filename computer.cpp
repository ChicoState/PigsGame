#include "computer.h"
#include "person.h"

#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>

using namespace std;

Computer::Computer()
{
 computer_total_score = 0;
 target_score = 12;
}

void Computer::play_game()
{
 
 int this_roll;
 int this_turn = 0;
 bool playing = true;

 cout << "Computer is now playing!" << endl;
 
 while(playing){
  this_roll = computer_roll();
  this_turn += this_roll;
  
  if(this_roll == 1){
    this_turn = 0;
    cout << "Computer rolled a 1, no points were added for the current turn"
         << endl;
    playing = false;
  }

  else if (this_turn >= target_score){
   cout << "Computer rolled a: " << this_roll << endl 
        << "Computer decided to hold" << endl;
   playing = false;
  }
  else{
    cout << "Computer rolled a: " << this_roll << endl 
         << "Computer's score for this round is: " << this_turn << endl;
  }
 }
 computer_total_score += this_turn;
 cout << "Computer's total score is: " << computer_total_score << endl;
}

int Computer::computer_roll()
{
 int dice_roll;
 srand(time(NULL));
 dice_roll = (rand()%6) + 1;
 return dice_roll;
}
