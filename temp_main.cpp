// Matt Edge
// Last Update: 09/15/15 11:30 Am

#include<iostream>
#include<string>
#include "dice.h"
#include <stdlib.h>
#include <stdio.h>
#include "player.h"
#include "menu.h"
#include "cpu.h"
using namespace std;

int main()
{
  int win_total = 100;
  string num_sides;
  string name;
  string choice;
  Menu mainMenu;
  mainMenu.printWelcome();
  cout << "______________________________________________\n";
  cout << "Insert player name.\n";
  cin >> name;
  cout << "______________________________________________\n";
  cout << "Insert number of sides on dice.\n";
  cin >> num_sides;
  cout << "______________________________________________\n";
  int sides = atoi(num_sides.c_str());
  Dice dice(sides);
  Player *curPlayer; 
  Player *player = new Player(sides);
  CPU *computer = new CPU(sides);
  curPlayer = player;
  while(curPlayer->GetTotalScore() < 100)
  {
    if(curPlayer->is_player() == true)
    {
      cout << name << "'s turn.\n";
      cout << "What do you want to do?\n";
      cout << "(1) Roll\n (2) Hold\n";
      cout << "______________________________________________\n";
      cin >> choice;
      while(choice == "1")
      {
        curPlayer->Roll();
        if(curPlayer->GetTurnScore() == 0)
        {
          cout << "You rolled a 1!\n" << name << "'s turn ends\n";
          cout << "______________________________________________\n";
          choice = 2;
        }
        else
        {
          cout << "Your turn score is:\n" << curPlayer->GetTurnScore() << "\n";
          cout << "______________________________________________\n";
          cout << "What do you want to do?\n";
          cout << "(1) Roll\n (2) Hold\n";
          cout << "______________________________________________\n";
          cin >> choice;
        }
      }
      curPlayer->EndTurn();
      cout << name << "'s total score is:\n Total Score: " << curPlayer->GetTotalScore() << "\n"
           << "______________________________________________\n";
      curPlayer = computer;
    }
    else
    {
      curPlayer->Roll(); 
      cout << "Computer's total score is:\n Total Score: " << curPlayer->GetTotalScore() << "\n"
           << "______________________________________________\n";
      curPlayer = player;
    }
		
  }
  if(player->GetTotalScore() >= 100)
  {
    cout << "Congradulations "<< name << "!!!\n You won.\n";
  }
  else
  {
    cout << "Sorry... You lose. \n";
  }
  cout << name << "'s final score is: " << player->GetTotalScore() << "\n"
       << "Computer's final score is: " << computer->GetTotalScore() << "\n"
       << "______________________________________________\n";
      
  return 0;
}
