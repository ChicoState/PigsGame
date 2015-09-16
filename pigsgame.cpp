#include "person.h"
#include "computer.h"

#include<iostream>
#include<string>

using namespace std;

int main()
{
  Person p1;
  Computer c1;
  bool playing = true;
  
  while(playing){
   p1.play_game();
   if(p1.getScore() >= 100){
    cout << "Congradulations you beat the computer!" << endl;
    playing = false;
    break;
   }
   c1.play_game();
   if(c1.getScore() >= 100){
    cout << "Too bad the computer beat you! Try again!" << endl;
    playing = false;
   }
  }
}
