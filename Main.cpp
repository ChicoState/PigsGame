#include "Player.h"
#include "AI.h"

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	
	Player Player1;
	AI Computer1;
	Dice Die;

	while (!(Player1.Get_Score() >= 100) && !(Computer1.Get_Score() >= 100))
	{
		int input = 0;
		
		while (!Player1.Get_Hold())
		{
			cout << "Roll Dice(1) or Hold(2)?" << endl;
			cin >> input;

			if (input == 1)
			{
				int tmp = Player1.RollDie(&Die);

				cout << "Dice Rolled a: " << tmp << endl;
				cout << "Running Score is: " << Player1.Get_TempScore() << endl;
				cout << "Current Overall Score is: " << Player1.Get_Score() << endl;
			}
			else if (input == 2)
			{
				Player1.Set_Hold(true);

				cout << "New Overall Score: " << Player1.Get_Score() << endl;
			}
		}
		
		cout << endl;

		while (!Computer1.Get_Hold())
		{
			cout << "Computers Rolls: " << Computer1.RollDie(&Die) << endl;
		}

		cout << "Computers New Overall Score: " << Computer1.Get_Score() << endl;
		
		cout << endl;

		Player1.Set_Hold(false);
		Computer1.Set_Hold(false);
	}

	if (Player1.Get_Score() >= 100)
	{
		cout << "Player One is the winner!!!";
	}
	else
	{
		cout << "The Computer is the winner!!!";
	}
	cin.ignore();
	cin.get();

	return 0;
}