#include <iostream>
#include "player.h"
#include <stdlib.h>
using namespace std;

int roll()
{
  int outcome;
  outcome=rand() % 6 + 1;
  return outcome;
}

int main()
{
  Player *player1 = new Player();
  Player *computer1 = new Player();
  char response;

  while(!player1->did_win || computer1->did_win)
  {
    cout << "\nPlayer 1's turn.\nYour score = " << player1->score;
    player1->hold = false;
    while(!player1->hold)
    {
      int cur_roll = roll();
      cout << "\nYou rolled a " << cur_roll << "\n";
      if(cur_roll == 1)
      {
        cout << "Your turn is over.\n";
        player1->endTurn(1);
      }
      else
      {
        player1->increaseTurnTotal(cur_roll);
        cout << "Your current turn total = " << player1->turn_total;
        cout << "\nEnter 0 to hold or any thing else to continue \n";

        cin >> response;
        if(response == '0')
        {
          player1->endTurn(0);
        }
      }
    }
    if(player1->did_win)
    {
      break;
    }
    cout << "\nComputer's turn.\nCurrent score = " << computer1->score;
    computer1->hold = false;
    while(!computer1->hold)
    {
      int cur_roll = roll();
      cout << "\nComputer rolled a " << cur_roll << "\n";
      if(cur_roll == 1)
      {
        cout << "Computer's turn is over.\n";
        computer1->endTurn(1);
      }
      else
      {
        computer1->increaseTurnTotal(cur_roll);
        cout << "Computer current turn total = " << computer1->turn_total;
        cout << "\nComputer holds\n";
        computer1->endTurn(0);
      }
    }
    if(computer1->did_win)
    {
      break;
    }

  }
  cout << "Game Over!" << endl;
  if(player1->score > computer1->score)
  {
    cout << "Player 1 wins!" << endl;
  }
  else
  {
    cout << "Computer 1 wins!" << endl;
  }
}
