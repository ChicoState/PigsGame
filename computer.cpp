//cpp file for computer
#include<iostream>
#include<string>
using namespace std;


int computer(int playernum, int totalscore, int score)
{
	if(score == 1)
	{
		playernum++;
	}
	else
	{
		if(totalscore >= 100)
		{
			cout<<"Player "<<playernum<<" is win !"<<endl;
		}
	}
	return playernum
}
  