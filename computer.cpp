
#include "computer.h"

Computer::Computer(int diff)
    : m_difficulty(diff), m_score(0), m_running_chance(0) {

}

bool Computer::turn(int num_dice, int round_score) {
    if (round_score == 0) {
        m_running_chance = 5/6;
        return true;
    }
    
    if (m_running_chance < 1/2) {
        return false;
    }
    else {
        m_running_chance = m_running_chance * 5/6;
        return true;
    }
}

int Computer::getScore() {
    return m_score;
}

void Computer::setScore(int score) {
    m_score = score;
}
