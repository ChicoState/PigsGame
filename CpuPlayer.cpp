#include "CpuPlayer.h"
#include <chrono>
#include <thread>

CpuPlayer::CpuPlayer()
{

}

bool CpuPlayer::determine_hold(int prev_roll, int cur_score, int roll_num)
{
 // if (!cur_score || (prev_roll < 4 && cur_score < 6))
 // {
 // 	IO.command(COM_ROLL);
 // }
 // else if ((cur_score > 9 && roll_num > 3) || roll_num > 4)
 // {
 // 	IO.command(COM_HOLD);
 // }
 return false;
}

int CpuPlayer::get_command(int cur_score)
{
    // int cur_score = 0;// game->getCurrentPlayerScore();
    std::this_thread::sleep_for(std::chrono::seconds(1)); // thinking

    if (cur_score < 20) {
        return COM_ROLL;
    }
    return COM_HOLD;
}

std::string CpuPlayer::name()
{
    return "CPU";
}
