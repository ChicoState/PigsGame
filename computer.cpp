
#include "computer.h"

Computer::Computer(int diff)
    : m_difficulty(diff), m_score(0), m_running_chance(0) {

}

bool Computer::turn(int num_dice, int round_score) {
  double fraction = 0.83;
  double check = 0.5;
  
  if (num_dice == 1) {
        m_running_chance = fraction;
        return true;
    }
    
    if (m_running_chance < check) {
        return false;
    }
    else {
        m_running_chance = m_running_chance * fraction;
        return true;
    } 
}

int Computer::getScore() {
    return m_score;
}

void Computer::setScore(int score) {
    m_score = score;
}
