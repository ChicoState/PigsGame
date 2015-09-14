#include "dice.h"
#include <cstdlib>
#include <ctime>

Dice::Dice(int sides) {
    num_sides = sides; // Set number of dice sides
    srand((unsigned)time()); // Seed random number generator
}

int Dice::roll() {
    return ((rand() % num_sides) + 1); // Roll dice
}

int Dice::get_sides() {
    return num_sides; // Get number of sides on dice
}
