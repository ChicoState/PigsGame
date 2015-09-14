#include<iostream>
#include<string>
#include<game.h>

using namespace std;
int main()
{
  string name;
  int diceSides;
  cout<<"What is your name?"<<endl;  
  cin>>name
  cout<<"How many sides does this Die have?"<<endl;  
  cin>>diceSides;

  Game game(1, diceSides, name);
  game.run();
}
