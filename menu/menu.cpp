//menu.cpp
//bool  getPlayerInfo();
//int   getNumberOfDice();
//int   getNumberOfPlayers();
//int   getScore();
#include "menu.h"
Menu::Menu(){
  dieSides = 0;
  numDice = 0;
  numPlayers = 0;
  score = 0;
}
int  Menu::printWelcome(){
  int choice = 0;
  cout << "Welcome! Pig is a game with dice, risk, and more danger than you"
       << "will ever see in your life.  You have been warned.";
  cout << "What would you like to do?\n";
  cout << "__________________________________________________\n";
  cout << "(1) Start\n(2)Instructions\n(3)Quit\n";
  cout << "Choice: ";
  cin  >> choice;
  if (choice == 1){printStart();}
  else if (choice == 2){printInstructions();}
  else if (choice == 3){quit();}
  else { cout << "You have entered an incorrect choice.  Please follow instructions better.\n";}
  return choice;
}
void  Menu::printInstructions(){
  ;
}
void  Menu::printStart(){

}
//void  Menu::printScore();
void  Menu::printWin(){
  cout << "Congratulations, you have defeated the most difficult AI on this world.\n";
}
void  Menu::printLose(){

}
void  Menu::quit(){
  exit(0);
}

int main() {
  Menu mainMenu;
  mainMenu.printWelcome();
  return 0;
}
