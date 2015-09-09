
#include "computer.h"

Computer::Computer(int diff)
    : m_difficulty(diff), m_score(0) {

}

bool Computer::turn() {
    return true;
}

int Computer::getScore() {
    return m_score;
}

int Computer::setScore(int score) {
    m_score = score;
}
