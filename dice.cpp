#include "dice.h"
#include <cstdlib>
#include <ctime>

Dice::Dice(int sides) {
    num_sides = sides; // Set number of dice sides
    srand((unsigned)time(NULL)); // Seed random number generator
}

int Dice::roll() {
    cur_roll = (rand() % num_sides);
    cur_roll += 1; 
    return cur_roll;
}

int Dice::roll(int target) {
    if((target > 0) && (target < 7)) {
        cur_roll = target;
    } else {
        cur_roll = 6;
    }
    return cur_roll;
}

int Dice::roll_no_one() {
    cur_roll = (rand() % num_sides);

    while(cur_roll == 1) {
        cur_roll = (rand() % num_sides);
    }
    
    return cur_roll;
}



int Dice::get_sides() {
    return num_sides; // Get number of sides on dice
}
