#include <iostream>
#include "player.h"

int main()
{
  Player player1 = new Player();
  Player computer1 = new Player();
  Cpu game = new Cpu();
  char response;
  while(!player1.didWin || computer1.didWin)
  {
    cout << "Player 1's turn./nYour score = " << player1.score;
    while(!player1.didWin && !player1.hold)
    {
      int cur_roll = game.roll();
      cout << "You rolled a " << cur_roll << "\n";
      if(cur_roll == 1)
      {
        cout << "You rolled a 1 your turn is over.\n";
        player1.endTurn(1);
      }
      else
      {
        player1.increaseTurnTotal(cur_roll);
        cout << "Your current turn total = " << player1.turn_total;
        cout << "To Hold enter 0 else press any key to roll again ";

        cin >> response;
        if(response == 0)
        {
          player1.endTurn(0);
        }
      }
    }
    cout << "Computer's turn./nCurrent score = " << player1.score;
    while(!computer1.didWin && !computer1.hold)
    {
      int cur_roll = game.roll();
      cout << "Computer rolled a " << cur_roll << "\n";
      if(cur_roll == 1)
      {
        cout << "Computer rolled a 1 its turn is over.\n";
        computer1.endTurn(1);
      }
      else
      {
        computer1.increaseTurnTotal(cur_roll);
        cout << "Computer current turn total = " << computer1.turn_total;
        cout << "Computer holds\n";
        computer1.endTurn(0);
      }
    }

  }
}
