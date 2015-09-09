#include "dice.h"
#include <cstdlib>

Dice::Dice(int sides) {
    num_sides = sides;
}

int Dice::roll() {
    return rand() % num_sides;
}

int Dice::get_sides() {
    return num_sides;
}
