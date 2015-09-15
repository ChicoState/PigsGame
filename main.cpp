/****************************************************************\
*					        The Pig Game								 *
*						 Brought to you by:							 *
*						Christian Cleveland							 *
*						   Natalie Astorga								 *
*						    Crystal Vang								 *
*					     Michelle Rodriguez							 *
*						   Matthew Daras								 *
\****************************************************************/

/*The Pig Game 

This is a command-line implementation of the Pig Game. 

The rules of the game as explaned on Wikipedia are:
Each turn, a player repeatedly rolls a die until either a 1 is rolled or the player decides to "hold":
If the player rolls a 1, they score nothing and it becomes the next player's turn. If the player rolls 
any other number, it is added to their turn total and the player's turn continues. If a player chooses to 
"hold", their turn total is added to their score, and it becomes the next player's turn. The first player to 
score 100 or more points wins.
*/

#include <iostream>
#include <vector>
#include <string>
#include "Dice.h"
#include "Player.h"

using namespace std;

//When this command line application is launched it asks the user how many human and Computer
//players wish to play the game. Once thoose numbers are determined it then asks the user to enter
//names for each of the human players. The computer players are automatically given names. Once
//the naming process is complete the game begins. During the naming process a new player class
//is instantiated for each player and the address of that player class is stored into a vector. WIth 
//all the players in the vector we are able to cycle through the vector and present each player a 
//chance to play the game until a winner is determined. Upon a winner being declared the 
//application ends but prior to exit the memory is freed.
int main()
{ 
	//Find out how many human players there are.
	int numPlayers;
	cout << " How many human players? " << endl;
	cin >> numPlayers;

	//Find out how many computer players there are.
	int numCpu;
	cout << " How many cpu players? " << endl;
	cin >> numCpu;

	vector<Player*> players; // creating vector for players
	string player_name;
	string temp; 

	//This allows the user to name each of the human players ; once named
	//they are added to our players vector.
	for(int k=0; k<numPlayers; k++)
	{
		cout << " Please enter player " <<k<<"'s name? " << endl;
		cin >> player_name;  
		players.push_back(new Player(player_name, false));
	}

	//Each computer player is added to the players vector with a auto 
	//created name that is based on the current computer player number.
	for(int j=0; j<numCpu; j++)
	{
		temp="Cpu" + j;
		players.push_back(new Player (temp, true));
	}

	//Create the random dice that will provide a random roll.
	Dice *diceRoll = new Dice; 

	//default the starting state as a "rolling" action.
	string state = "roll";  

	//Inform the users the game has begun.
	cout << "<<<<<<<<<<<<<<<<<<<< Start Game! >>>>>>>>>>>>>>>>>>>>" << endl;

	//While there is no winner we cycle though all players allowing each of them to complete their turn
	//untill a winner is declared.
	for( int i = 0; state != "win"; i = (i+1)%(numPlayers+numCpu))
	{
		//must always start as a "rolling" state for each player
		state = "roll"; 

		//While the current player is rolling we do not move onto the next player.
		while( state == "roll")
		{
			state = players[i]->decision(diceRoll->roll());
		}

    if (state != "win")
    {
		   cout << endl << "<<<<<<<<<<<<<<< Next Player >>>>>>>>>>>>>>>" << endl;
    }
    else
    {
	     cout << "<<<<<<<<<<<<<<<<<<<< End Game! >>>>>>>>>>>>>>>>>>>>" << endl;
    }
	} 

	//Delete all the created player classes to free memory upon exit.
	for(unsigned int i = 0; i < players.size(); ++i)
	{
		delete players[i];
	}

	//Delete the dice class to free memory on exit.
	delete diceRoll;

	return 0;
}
