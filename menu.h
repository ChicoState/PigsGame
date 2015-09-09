//menu.h
#ifndef MENU_H
#define MENU_H

#include <iostream>
using namespace std;

class Menu{

  public:
    Menu();
    bool  getPlayerInfo();
    int   getNumberOfDice();
    int   getNumberOfPlayers();
    int   getScore();
    void  printWelcome();
    void  printStart();
    void  printScore();
    void  printWin();
    void  printLose();

  private:
    int   DieSides;

};

#endif //MENU_H
