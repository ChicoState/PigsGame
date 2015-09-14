
#ifndef COMPUTER_H
#define COMPUTER_H

class Computer {
    public:
        Computer(int diff);
        bool turn(int num_dice, int round_score);
        int getScore();
        void setScore(int score);
    private:
        int m_difficulty;
        int m_score;
        double m_running_chance;
};

#endif
