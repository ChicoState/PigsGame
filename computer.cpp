#include <iostream>
#include "computer.h"

Computer::Computer(int diff)
    : m_difficulty(diff), m_score(0), m_running_chance(0) {

}

bool Computer::turn(int turn_roll, int round_score) {
    if (turn_roll == 1) {
        std::cout << "Init turn" << std::endl;
        m_running_chance = 5.0/6;
        return true;
    }

    if (round_score + m_score >= 100) {
        return false;
    }
    
    if (m_running_chance < 0.5) {
        return false;
    }
    else {
        m_running_chance = m_running_chance * (5.0/6);
        return true;
    }
}

int Computer::getScore() {
    return m_score;
}

void Computer::setScore(int score) {
    m_score = score;
}
