#include "Player.h"
#include "dice.h" 

#include<iostream>

using namespace std; 

Player::Player(int m_score, m_string name)
{
score=m_score; 
name=m_string; 
}

bool Player::roll()
{
  return true; 
}

int Player::PlayerTurn(int TotalScore)
{
  int all_score=0; 
  int score=0;
  string roll;

  //if the player decide to roll
  cout << "Do you want to roll or hold? Choose R(Roll) or H(Hold) "<< endl;
  cin >> roll; 

  while(roll == 'R')
  {
    score = Dice::Roll(); //roll a dice for this turn; 
    if (score == 1)
    {
      cout << "I am sorry, you just rolled a 1"<< endl; 
      //roll a 1, stop, break
      break; 
    }
    return all_score=all_score+score; 

  }

  return TotalScore; 

}


int Player::total()
{
  return score;
}
