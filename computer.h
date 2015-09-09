
#ifndef COMPUTER_H
#define COMPUTER_H

class Computer {
    public:
        Computer(int diff);
        int turn();
        int getScore();
        void setScore(int score);
    private:
        int m_difficulty;
        int m_score;
}

