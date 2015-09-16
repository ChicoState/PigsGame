#ifndef DICE_H
#define DICE_H

class Dice {
    public:
       Dice(int);
       int roll(); // Fair roll
       int roll(int); // Tell dice what you want to roll
       int roll_no_one(); // Unfair roll (cannot roll a 1)
       int get_sides(); // Return number of sides on dice
    private:
       int num_sides;
       int cur_roll;
};

#endif
