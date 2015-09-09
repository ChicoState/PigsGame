
#include "computer.h"

Computer::Computer(int diff)
    : m_difficulty(diff), m_score(0) {

}

bool Computer::turn(int num_dice, int round_score) {
    return true;
}

int Computer::getScore() {
    return m_score;
}

void Computer::setScore(int score) {
    m_score = score;
}
