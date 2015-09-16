//menu.h
#ifndef MENU_H
#define MENU_H

#include <stdlib.h>
#include <iostream>
using namespace std;

class Menu{

  public:
    Menu();
    bool  getPlayerInfo();
    int   getNumberOfDice();
    int   getNumberOfPlayers();
    int   getScore();
    int   printWelcome();
    void  printInstructions();
    void  printStart();
    void  printScore();
    void  printWin();
    void  printLose();
    void  quit();
  private:
    int   dieSides;
    int   numDice;
    int   numPlayers;
    int   score;


};

#endif //MENU_H
