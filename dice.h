#ifndef DICE_H
#define DICE_H

class Dice {
    public:
       Dice(int sides);
       int roll();
       int get_sides();
    private:
       int num_sides;
};

#endif
