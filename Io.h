// Thomas Russel Carrel
//
// io.h
//
//    Class handles input from the player and sends it to the game's main class.
// The game's main class performs its own actions and returns appropriate
// output to the screen

#ifndef _Io_H
#define _Io_H

#include <cstdlib>
#include "Player.h"
#include "Die.h"

const int  HOLD = -1;

enum Commands
{
  COM_NOT_CPU,
  COM_HOLD,
  COM_ROLL
};

class Io
{
  public:

    // Returns HOLD if the player decides to hold, otherwise, returns the
    //value from the die.
    int turn( Player*, int );

    void winner(int); // Displays a victory message.

    friend class Game;
  private:
    Io(); //  Constructor can only be called by the game class.  Prevents other
          // classes from creating their own instance of this class.

    // static int io_num = 0; //  To prevent multiple instances.
};

#endif
